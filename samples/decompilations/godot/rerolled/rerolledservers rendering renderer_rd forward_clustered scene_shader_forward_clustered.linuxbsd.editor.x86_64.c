/* RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::is_animated() const
    */ShaderData RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::is_animated(ShaderData *this) {
   ShaderData SVar1;
   if (( ( this[0x33b] == (ShaderData)0x0 ) || ( SVar1 = this[0x32a] ),SVar1 == (ShaderData)0x0 )) {
      return this[0x332];
   }

   return SVar1;
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::casts_shadows() const
    */uint RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::casts_shadows(ShaderData *this) {
   ShaderData SVar1;
   uint uVar2;
   if (( ( ( this[0x336] == (ShaderData)0x0 ) && ( this[0x337] == (ShaderData)0x0 ) ) && ( ( this[0x325] == (ShaderData)0x0 || ( ( this[0x327] != (ShaderData)0x0 && ( this[0x328] == (ShaderData)0x0 ) ) ) ) ) ) && ( this[0x338] == (ShaderData)0x0 )) {
      if (this[0x326] == (ShaderData)0x0) {
         return 1;
      }

      SVar1 = this[0x329];
   }
 else {
      SVar1 = this[0x329];
   }

   uVar2 = (uint)(byte)SVar1;
   if (( SVar1 != (ShaderData)0x0 ) && ( uVar2 = 0 * (int*)( this + 0x310 ) != 0 )) {
      uVar2 = CONCAT31(( int3 )(( uint ) * (int*)( this + 0x314 ) >> 8), *(int*)( this + 0x314 ) != 0);
   }

   return uVar2;
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::MaterialData::set_render_priority(int)
    */void RendererSceneRenderImplementation::SceneShaderForwardClustered::MaterialData::set_render_priority(MaterialData *this, int param_1) {
   this[0xd0] = ( MaterialData )((char)param_1 + -0x80);
   return;
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::MaterialData::set_next_pass(RID)
    */void RendererSceneRenderImplementation::SceneShaderForwardClustered::MaterialData::set_next_pass(MaterialData *this, undefined8 param_2) {
   *(undefined8*)( this + 200 ) = param_2;
   return;
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::MaterialData::~MaterialData() */void RendererSceneRenderImplementation::SceneShaderForwardClustered::MaterialData::~MaterialData(MaterialData *this) {
   *(undefined***)this = &PTR_set_render_priority_00112bd0;
   RendererRD::MaterialStorage::MaterialData::free_parameters_uniform_set(this, *(undefined8*)( this + 0xb0 ));
   RendererRD::MaterialStorage::MaterialData::~MaterialData((MaterialData*)this);
   return;
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::MaterialData::~MaterialData() */void RendererSceneRenderImplementation::SceneShaderForwardClustered::MaterialData::~MaterialData(MaterialData *this) {
   *(undefined***)this = &PTR_set_render_priority_00112bd0;
   RendererRD::MaterialStorage::MaterialData::free_parameters_uniform_set(this, *(undefined8*)( this + 0xb0 ));
   RendererRD::MaterialStorage::MaterialData::~MaterialData((MaterialData*)this);
   operator_delete(this, 0xd8);
   return;
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::get_native_source_code()
   const */void RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::get_native_source_code(void) {
   long lVar1;
   int iVar2;
   long in_RSI;
   long in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 0x158 ) == 0) {
      *(undefined8*)( in_RDI + 8 ) = 0;
   }
 else {
      iVar2 = pthread_mutex_lock((pthread_mutex_t*)singleton_mutex);
      if (iVar2 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar2);
      }

      ShaderRD::version_get_native_source_code();
      pthread_mutex_unlock((pthread_mutex_t*)singleton_mutex);
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::_get_shader_variant(unsigned
   short) const [clone .part.0] */undefined8 RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::_get_shader_variant(ShaderData *this, ushort param_1) {
   Version *pVVar1;
   ulong uVar2;
   long lVar3;
   code *pcVar4;
   ulong uVar5;
   int iVar6;
   ulong uVar7;
   undefined8 uVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   iVar6 = pthread_mutex_lock((pthread_mutex_t*)singleton_mutex);
   lVar3 = singleton;
   if (iVar6 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar6);
   }

   if (singleton == 0) {
      uVar8 = 0;
      _err_print_error("_get_shader_variant", "servers/rendering/renderer_rd/forward_clustered/scene_shader_forward_clustered.cpp", 0x19a, "Parameter \"SceneShaderForwardClustered::singleton\" is null.", 0, 0);
      goto LAB_00100344;
   }

   uVar2 = *(ulong*)( this + 0x158 );
   uVar5 = (ulong)param_1;
   if (*(long*)( singleton + 0x28 ) == 0) {
      lVar10 = 0;
      LAB_00100363:_err_print_index_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa6, uVar5, lVar10, "p_variant", "variant_defines.size()", "", false, false);
   }
 else {
      lVar10 = *(long*)( *(long*)( singleton + 0x28 ) + -8 );
      if (lVar10 <= (long)uVar5) goto LAB_00100363;
      lVar10 = *(long*)( singleton + 0x38 );
      uVar7 = uVar5;
      if (lVar10 == 0) goto LAB_00100480;
      lVar9 = *(long*)( lVar10 + -8 );
      if (lVar9 <= (long)uVar5) goto LAB_001004a1;
      if (*(char*)( lVar10 + uVar5 ) == '\0') {
         uVar8 = 0;
         _err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa7, "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()", 0, 0);
         goto LAB_00100344;
      }

      if (( uVar2 == 0 ) || ( *(uint*)( singleton + 0xe4 ) <= (uint)uVar2 )) {
         LAB_001003f0:uVar8 = 0;
         _err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xaa, "Parameter \"version\" is null.", 0, 0);
         goto LAB_00100344;
      }

      lVar10 = ( ( uVar2 & 0xffffffff ) % ( ulong ) * (uint*)( singleton + 0xe0 ) ) * 0xa0 + *(long*)( *(long*)( singleton + 0xd0 ) + ( ( uVar2 & 0xffffffff ) / ( ulong ) * (uint*)( singleton + 0xe0 ) ) * 8 );
      if (*(int*)( lVar10 + 0x98 ) != (int)( uVar2 >> 0x20 )) {
         if (*(int*)( lVar10 + 0x98 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         goto LAB_001003f0;
      }

      pVVar1 = (Version*)( singleton + 0x10 );
      iVar6 = (int)lVar10;
      if (*(char*)( lVar10 + 0x91 ) != '\0') {
         ShaderRD::_initialize_version(pVVar1);
         lVar9 = *(long*)( lVar3 + 0x88 );
         if (lVar9 != 0) {
            lVar11 = 0;
            do {
               if (*(long*)( lVar9 + -8 ) <= lVar11) break;
               if (*(char*)( lVar9 + lVar11 ) == '\0') {
                  ShaderRD::_allocate_placeholders(pVVar1, iVar6);
               }
 else {
                  ShaderRD::_compile_version_start(pVVar1, iVar6);
               }

               lVar9 = *(long*)( lVar3 + 0x88 );
               lVar11 = lVar11 + 1;
            }
 while ( lVar9 != 0 );
         }

      }

      lVar3 = *(long*)( lVar3 + 0x48 );
      if (lVar3 == 0) {
         LAB_00100480:lVar9 = 0;
         uVar7 = uVar5;
         LAB_001004a1:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar7, lVar9, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }

      lVar9 = *(long*)( lVar3 + -8 );
      if (lVar9 <= (long)uVar5) goto LAB_001004a1;
      uVar7 = ( ulong ) * (uint*)( lVar3 + uVar5 * 4 );
      lVar3 = *(long*)( lVar10 + 0x68 );
      if (lVar3 == 0) {
         lVar9 = 0;
         goto LAB_001004a1;
      }

      lVar9 = *(long*)( lVar3 + -8 );
      if (lVar9 <= (long)uVar7) goto LAB_001004a1;
      if (*(long*)( lVar3 + uVar7 * 8 ) != 0) {
         ShaderRD::_compile_version_end(pVVar1, iVar6);
      }

      if (*(char*)( lVar10 + 0x90 ) != '\0') {
         lVar3 = *(long*)( lVar10 + 0x88 );
         if (lVar3 != 0) {
            lVar9 = *(long*)( lVar3 + -8 );
            uVar7 = uVar5;
            if ((long)uVar5 < lVar9) {
               uVar8 = *(undefined8*)( lVar3 + uVar5 * 8 );
               goto LAB_00100344;
            }

            goto LAB_001004a1;
         }

         goto LAB_00100480;
      }

   }

   uVar8 = 0;
   LAB_00100344:pthread_mutex_unlock((pthread_mutex_t*)singleton_mutex);
   return uVar8;
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::MaterialData::update_parameters(HashMap<StringName,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, bool, bool) */undefined4 RendererSceneRenderImplementation::SceneShaderForwardClustered::MaterialData::update_parameters(MaterialData *this, HashMap *param_1, bool param_2, bool param_3) {
   Version *pVVar1;
   char *pcVar2;
   uint *puVar3;
   long lVar4;
   undefined8 *puVar5;
   code *pcVar6;
   int iVar7;
   undefined4 uVar8;
   ulong uVar9;
   long lVar10;
   undefined8 uVar11;
   long lVar12;
   long lVar13;
   if (*(long*)( *(long*)( this + 0xa8 ) + 0x158 ) == 0) {
      return 0;
   }

   iVar7 = pthread_mutex_lock((pthread_mutex_t*)singleton_mutex);
   lVar4 = singleton;
   if (iVar7 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar7);
   }

   uVar9 = *(ulong*)( *(long*)( this + 0xa8 ) + 0x158 );
   if (*(long*)( singleton + 0x28 ) == 0) {
      lVar13 = 0;
      LAB_00100833:_err_print_index_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa6, 0, lVar13, "p_variant", "variant_defines.size()", "", false, false);
   }
 else {
      lVar13 = *(long*)( *(long*)( singleton + 0x28 ) + -8 );
      if (lVar13 < 1) goto LAB_00100833;
      pcVar2 = *(char**)( singleton + 0x38 );
      if (pcVar2 == (char*)0x0) {
         LAB_001007e8:lVar13 = 0;
         LAB_001007eb:uVar9 = 0;
         LAB_00100808:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar9, lVar13, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar6 = (code*)invalidInstructionException();
         ( *pcVar6 )();
      }

      lVar13 = *(long*)( pcVar2 + -8 );
      if (lVar13 < 1) goto LAB_001007eb;
      if (*pcVar2 == '\0') {
         _err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa7, "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()", 0, 0);
         uVar11 = 0;
         goto LAB_001006f1;
      }

      if (( uVar9 == 0 ) || ( *(uint*)( singleton + 0xe4 ) <= (uint)uVar9 )) {
         LAB_001008f0:_err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xaa, "Parameter \"version\" is null.", 0, 0);
         uVar11 = 0;
         goto LAB_001006f1;
      }

      lVar10 = ( ( uVar9 & 0xffffffff ) % ( ulong ) * (uint*)( singleton + 0xe0 ) ) * 0xa0 + *(long*)( *(long*)( singleton + 0xd0 ) + ( ( uVar9 & 0xffffffff ) / ( ulong ) * (uint*)( singleton + 0xe0 ) ) * 8 );
      if (*(int*)( lVar10 + 0x98 ) != (int)( uVar9 >> 0x20 )) {
         if (*(int*)( lVar10 + 0x98 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         goto LAB_001008f0;
      }

      pVVar1 = (Version*)( singleton + 0x10 );
      iVar7 = (int)lVar10;
      if (*(char*)( lVar10 + 0x91 ) != '\0') {
         ShaderRD::_initialize_version(pVVar1);
         lVar13 = *(long*)( lVar4 + 0x88 );
         if (lVar13 != 0) {
            lVar12 = 0;
            do {
               if (*(long*)( lVar13 + -8 ) <= lVar12) break;
               if (*(char*)( lVar13 + lVar12 ) == '\0') {
                  ShaderRD::_allocate_placeholders(pVVar1, iVar7);
               }
 else {
                  ShaderRD::_compile_version_start(pVVar1, iVar7);
               }

               lVar13 = *(long*)( lVar4 + 0x88 );
               lVar12 = lVar12 + 1;
            }
 while ( lVar13 != 0 );
         }

      }

      puVar3 = *(uint**)( lVar4 + 0x48 );
      if (puVar3 == (uint*)0x0) goto LAB_001007e8;
      lVar13 = *(long*)( puVar3 + -2 );
      if (lVar13 < 1) goto LAB_001007eb;
      uVar9 = ( ulong ) * puVar3;
      lVar4 = *(long*)( lVar10 + 0x68 );
      if (lVar4 == 0) {
         lVar13 = 0;
         goto LAB_00100808;
      }

      lVar13 = *(long*)( lVar4 + -8 );
      if (lVar13 <= (long)uVar9) goto LAB_00100808;
      if (*(long*)( lVar4 + uVar9 * 8 ) != 0) {
         ShaderRD::_compile_version_end(pVVar1, iVar7);
      }

      if (*(char*)( lVar10 + 0x90 ) != '\0') {
         puVar5 = *(undefined8**)( lVar10 + 0x88 );
         if (puVar5 == (undefined8*)0x0) goto LAB_001007e8;
         lVar13 = puVar5[-1];
         if (0 < lVar13) {
            uVar11 = *puVar5;
            goto LAB_001006f1;
         }

         goto LAB_001007eb;
      }

   }

   uVar11 = 0;
   LAB_001006f1:lVar4 = *(long*)( this + 0xa8 );
   uVar8 = RendererRD::MaterialStorage::MaterialData::update_parameters_uniform_set(this, param_1, param_2, param_3, lVar4 + 0x10, *(undefined8*)( lVar4 + 0x2f8 ), lVar4 + 0x2e0, lVar4 + 0x40, *(undefined4*)( lVar4 + 0x300 ), this + 0xb0, uVar11, 3, 1, 1);
   pthread_mutex_unlock((pthread_mutex_t*)singleton_mutex);
   return uVar8;
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
/* CowData<char>::_ref(CowData<char> const&) [clone .part.0] */void CowData<char>::_ref(CowData<char> *this, CowData *param_1) {
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
/* CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write() [clone .isra.0]
    */void CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write(CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *this) {
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
/* CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write() [clone
   .isra.0] */void CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write(CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *this) {
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
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::_get_shader_version(RendererSceneRenderImplementation::SceneShaderForwardClustered::PipelineVersion,
   unsigned int, bool) const */uint RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::_get_shader_version(undefined8 param_1, undefined4 param_2, uint param_3, byte param_4) {
   uint uVar1;
   uVar1 = -(uint)(param_4 != 0) & 7;
   switch (param_2) {
      case 0:
    goto switchD_00100e59_caseD_0;
      case 1:
    return uVar1 + 1;
      case 2:
    return uVar1 + 2;
      case 3:
    return uVar1 + 3;
      case 4:
    return 0xe;
      case 5:
    uVar1 = 0xf;
switchD_00100e59_caseD_0:
    return uVar1;
      case 6:
    return uVar1 + 4;
      case 7:
    return uVar1 + 5;
      case 8:
    return uVar1 + 6;
      case 9:
    uVar1 = (uint)param_4;
    if ((param_3 & 2) != 0) {
      uVar1 = param_4 | 2;
    }
    if ((param_3 & 0x10) != 0) {
      uVar1 = uVar1 | 0x10;
    }
    if ((param_3 & 4) != 0) {
      uVar1 = uVar1 | 4;
    }
    if ((param_3 & 8) != 0) {
      uVar1 = uVar1 | 8;
    }
    return uVar1 + 0x10;
      default:
    return 0;
   }

}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::get_cull_mode_from_cull_variant(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::CullVariant)
    */undefined4 RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::get_cull_mode_from_cull_variant(ShaderData *this, int param_2) {
   long in_FS_OFFSET;
   undefined8 local_38;
   undefined8 uStack_30;
   undefined8 local_28;
   undefined8 uStack_20;
   undefined4 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_18 = 0;
   local_38 = _LC23;
   uStack_30 = _LC28;
   local_28 = __LC24;
   uStack_20 = _UNK_0013a838;
   if (*(long*)( in_FS_OFFSET + 0x28 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      return *(undefined4*)( (long)&local_38 + ( (long)param_2 * 3 + (long)*(int*)( this + 0x340 ) ) * 4 );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::_get_shader_variant(unsigned
   short) const */undefined8 RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::_get_shader_variant(ShaderData *this, ushort param_1) {
   undefined8 uVar1;
   if (*(long*)( this + 0x158 ) == 0) {
      return 0;
   }

   uVar1 = _get_shader_variant(this, param_1);
   return uVar1;
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::_clear_vertex_input_mask_cache()
    */void RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::_clear_vertex_input_mask_cache(ShaderData *this) {
   ShaderData *pSVar1;
   pSVar1 = this + 0x160;
   do {
      LOCK();
      *(undefined8*)pSVar1 = 0;
      UNLOCK();
      pSVar1 = pSVar1 + 8;
   }
 while ( pSVar1 != this + 0x2e0 );
   return;
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::get_shader_variant(RendererSceneRenderImplementation::SceneShaderForwardClustered::PipelineVersion,
   unsigned int, bool) const */void RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::get_shader_variant(ShaderData *param_1) {
   ushort uVar1;
   if (*(long*)( param_1 + 0x158 ) == 0) {
      return;
   }

   uVar1 = _get_shader_version();
   _get_shader_variant(param_1, uVar1);
   return;
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::get_vertex_input_mask(RendererSceneRenderImplementation::SceneShaderForwardClustered::PipelineVersion,
   unsigned int, bool) */long RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::get_vertex_input_mask(ShaderData *param_1) {
   ushort uVar1;
   long lVar2;
   undefined8 uVar3;
   uVar1 = _get_shader_version();
   lVar2 = *(long*)( param_1 + (long)(int)( uVar1 + 0x2c ) * 8 );
   if (lVar2 != 0) {
      return lVar2;
   }

   if (*(long*)( param_1 + 0x158 ) != 0) {
      lVar2 = _get_shader_variant(param_1, uVar1);
      if (lVar2 != 0) {
         uVar3 = RenderingDevice::get_singleton();
         lVar2 = RenderingDevice::shader_get_vertex_input_attribute_mask(uVar3, lVar2);
         *(long*)( param_1 + (long)(int)( uVar1 + 0x2c ) * 8 ) = lVar2;
         return lVar2;
      }

   }

   _err_print_error("get_vertex_input_mask", "servers/rendering/renderer_rd/forward_clustered/scene_shader_forward_clustered.cpp", 0x1b1, "Condition \"shader_rid.is_null()\" is true. Returning: 0", 0, 0);
   return 0;
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::is_valid() const */undefined4 RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::is_valid(ShaderData *this) {
   int iVar1;
   undefined4 uVar2;
   uVar2 = 0;
   if (*(long*)( this + 0x158 ) == 0) {
      return 0;
   }

   iVar1 = pthread_mutex_lock((pthread_mutex_t*)singleton_mutex);
   if (iVar1 == 0) {
      if (singleton == 0) {
         _err_print_error("is_valid", "servers/rendering/renderer_rd/forward_clustered/scene_shader_forward_clustered.cpp", 0x1bd, "Parameter \"SceneShaderForwardClustered::singleton\" is null.", 0, 0);
      }
 else {
         uVar2 = ShaderRD::version_is_valid(singleton + 0x10, *(undefined8*)( this + 0x158 ));
      }

      pthread_mutex_unlock((pthread_mutex_t*)singleton_mutex);
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar1);
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::ShaderData() */void RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::ShaderData(ShaderData *this) {
   undefined8 uVar1;
   long lVar2;
   ShaderData *pSVar3;
   uVar1 = _LC28;
   *(undefined8**)( this + 0xa0 ) = &_GlobalNilClass::_nil;
   *(undefined8*)( this + 0x38 ) = uVar1;
   *(undefined8*)( this + 0x68 ) = uVar1;
   *(undefined8**)( this + 0xf0 ) = &_GlobalNilClass::_nil;
   *(undefined8*)( this + 0x128 ) = uVar1;
   *(undefined1(*) [16])( this + 0xd0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x140 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 8 ) = 0;
   *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x48 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x58 ) = (undefined1[16])0x0;
   *(undefined***)this = &PTR_set_path_hint_00112b60;
   *(undefined8*)( this + 0x80 ) = 0;
   *(undefined8*)( this + 0x98 ) = 0;
   *(undefined4*)( this + 0xa8 ) = 0;
   *(undefined8*)( this + 0xb0 ) = 0;
   *(undefined8*)( this + 0xb8 ) = 0;
   *(undefined1(*) [16])( this + 0xc0 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0xe0 ) = 0;
   *(undefined4*)( this + 0xd0 ) = 1;
   *(undefined8*)( this + 0xe8 ) = 0;
   *(undefined4*)( this + 0xf8 ) = 0;
   *(undefined1(*) [16])( this + 0x108 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x118 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x130 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x150 ) = 0;
   *(undefined4*)( this + 0x140 ) = 1;
   *(undefined8*)( this + 0x158 ) = 0;
   pSVar3 = this + 0x160;
   for (lVar2 = 0x30; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined8*)pSVar3 = 0;
      pSVar3 = pSVar3 + 8;
   }

   *(undefined8*)( this + 0x2e8 ) = 0;
   *(undefined8*)( this + 0x2f8 ) = 0;
   uVar1 = _LC29;
   *(undefined4*)( this + 0x300 ) = 0;
   *(undefined8*)( this + 0x310 ) = uVar1;
   uVar1 = _LC23;
   *(undefined8*)( this + 0x308 ) = 0;
   *(undefined8*)( this + 0x318 ) = uVar1;
   *(undefined2*)( this + 0x33c ) = 0;
   *(code**)( this + 0x78 ) = _create_pipeline;
   lVar2 = singleton;
   *(undefined4*)( this + 800 ) = 0;
   *(ShaderData**)( this + 0x70 ) = this;
   *(long*)( this + 0x90 ) = lVar2 + 0x724;
   *(undefined8*)( this + 0x334 ) = 0;
   this[0x33e] = (ShaderData)0x0;
   *(undefined4*)( this + 0x340 ) = 0;
   *(undefined8*)( this + 0x348 ) = 0;
   *(undefined4*)( this + 0x350 ) = 0;
   *(undefined8*)( this + 0x358 ) = 0;
   *(undefined8*)( this + 0x368 ) = 0;
   *(undefined8*)( this + 0x370 ) = 0;
   *(ShaderData**)( this + 0x360 ) = this;
   *(undefined1**)( this + 0x88 ) = singleton_mutex;
   *(undefined1(*) [16])( this + 0x324 ) = (undefined1[16])0x0;
   return;
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::_create_shader_func() */ShaderData *RendererSceneRenderImplementation::SceneShaderForwardClustered::_create_shader_func(void) {
   ShaderData *pSVar1;
   long lVar2;
   long *plVar3;
   int iVar4;
   ShaderData *this;
   iVar4 = pthread_mutex_lock((pthread_mutex_t*)singleton_mutex);
   if (iVar4 == 0) {
      this(ShaderData * operator_new(0x378, ""));
      ShaderData::ShaderData(this);
      plVar3 = singleton;
      pSVar1 = this + 0x358;
      if (*(long*)( this + 0x358 ) == 0) {
         lVar2 = *singleton;
         *(long**)( this + 0x358 ) = singleton;
         *(undefined8*)( this + 0x370 ) = 0;
         *(long*)( this + 0x368 ) = lVar2;
         if (lVar2 == 0) {
            plVar3[1] = (long)pSVar1;
         }
 else {
            *(ShaderData**)( lVar2 + 0x18 ) = pSVar1;
         }

         *plVar3 = (long)pSVar1;
      }
 else {
         _err_print_error(&_LC35, "./core/templates/self_list.h", 0x2e, "Condition \"p_elem->_root\" is true.", 0, 0);
      }

      pthread_mutex_unlock((pthread_mutex_t*)singleton_mutex);
      return this;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar4);
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::_create_material_func(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData*)
    */void RendererSceneRenderImplementation::SceneShaderForwardClustered::_create_material_func(SceneShaderForwardClustered *this, ShaderData *param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)operator_new(0xd8, "");
   puVar1[2] = 0;
   puVar1[3] = 0;
   puVar1[6] = 0;
   puVar1[0xc] = 2;
   puVar1[0xe] = 0;
   puVar1[0x10] = 0;
   puVar1[0x14] = 0;
   *puVar1 = &PTR_set_render_priority_00112bd0;
   *(undefined4*)( puVar1 + 0x18 ) = 0;
   puVar1[0x19] = 0;
   puVar1[0x15] = param_1;
   *(undefined1(*) [16])( puVar1 + 4 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar1 + 8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar1 + 10 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar1 + 0x11 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar1 + 0x16 ) = (undefined1[16])0x0;
   return;
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::SceneShaderForwardClustered() */void RendererSceneRenderImplementation::SceneShaderForwardClustered::SceneShaderForwardClustered(SceneShaderForwardClustered *this) {
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   ShaderRD::ShaderRD((ShaderRD*)( this + 0x10 ));
   *(undefined***)( this + 0x10 ) = &PTR__SceneForwardClusteredShaderRD_00112b40;
   ShaderRD::setup((char*)( this + 0x10 ), "\n#version 450\n\n#VERSION_DEFINES\n\n#define M_PI 3.14159265359\n#define ROUGHNESS_MAX_LOD 5\n\n#define MAX_VOXEL_GI_INSTANCES 8\n#define MAX_VIEWS 2\n\n#ifndef MOLTENVK_USED\n#if defined(has_GL_KHR_shader_subgroup_ballot) && defined(has_GL_KHR_shader_subgroup_arithmetic)\n\n#extension GL_KHR_shader_subgroup_ballot : enable\n#extension GL_KHR_shader_subgroup_arithmetic : enable\n\n#define USE_SUBGROUPS\n#endif\n#endif \n\n#if defined(USE_MULTIVIEW) && defined(has_VK_KHR_multiview)\n#extension GL_EXT_multiview : enable\n#endif\n\n#define CLUSTER_COUNTER_SHIFT 20\n#define CLUSTER_POINTER_MASK ((1 << CLUSTER_COUNTER_SHIFT) - 1)\n#define CLUSTER_COUNTER_MASK 0xfff\nstruct DecalData {\n\thighp mat4 xform; \n\thighp vec3 inv_extents;\n\tmediump float albedo_mix;\n\thighp vec4 albedo_rect;\n\thighp vec4 normal_rect;\n\thighp vec4 orm_rect;\n\thighp vec4 emission_rect;\n\thighp vec4 modulate;\n\tmediump float emission_energy;\n\tuint mask;\n\tmediump float upper_fade;\n\tmediump float lower_fade;\n\tmediump mat3x4 normal_xform;\n\tmediump vec3 normal;\n\tmediump float normal_fade;\n};\n\n\n\n\n\nstruct SceneData {\n\thighp mat4 projection_matrix;\n\thighp mat4 inv_projection_matrix;\n\thighp mat4 inv_view_matrix;\n\thighp mat4 view_matrix;\n\n\t\n\thighp mat4 projection_matrix_view[MAX_VIEWS];\n\thighp mat4 inv_projection_matrix_view[MAX_VIEWS];\n\thighp vec4 eye_offset[MAX_VIEWS];\n\n\t\n\thighp mat4 main_cam_inv_view_matrix;\n\n\thighp vec2 viewport_size;\n\thighp vec2 screen_pixel_size;\n\n\t\n\thighp vec4 directional_penumbra_shadow_kernel[32];\n\thighp vec4 directional_soft_shadow_kernel[32];\n\thighp vec4 penumbra_shadow_kernel[32];\n\thighp vec4 soft_shadow_kernel[32];\n\n\tmediump mat3 radiance_inverse_xform;\n\n\tmediump vec4 ambient_light_color_energy;\n\n\tmediump float ambient_color_sky_mix;\n\tbool use_ambient_light;\n\tbool use_ambient_cubemap;\n\tbool use_reflection_cubemap;\n\n\thighp vec2 shadow_atlas_pixel_size;\n\thighp vec2 directional_shadow_pixel_size;\n\n\tuint directional_light_count;\n\tmediump float dual_paraboloid_side;\n\thighp float z_far;\n\thighp float z_near;\n\n\tbool roughness_limiter_enabled;\n\tmediump float roughness_...", /* TRUNCATED STRING LITERAL */, "\n#version 450\n\n#VERSION_DEFINES\n\n#define SHADER_IS_SRGB false\n#define SHADER_SPACE_FAR 0.0\n\n#define M_PI 3.14159265359\n#define ROUGHNESS_MAX_LOD 5\n\n#define MAX_VOXEL_GI_INSTANCES 8\n#define MAX_VIEWS 2\n\n#ifndef MOLTENVK_USED\n#if defined(has_GL_KHR_shader_subgroup_ballot) && defined(has_GL_KHR_shader_subgroup_arithmetic)\n\n#extension GL_KHR_shader_subgroup_ballot : enable\n#extension GL_KHR_shader_subgroup_arithmetic : enable\n\n#define USE_SUBGROUPS\n#endif\n#endif \n\n#if defined(USE_MULTIVIEW) && defined(has_VK_KHR_multiview)\n#extension GL_EXT_multiview : enable\n#endif\n\n#define CLUSTER_COUNTER_SHIFT 20\n#define CLUSTER_POINTER_MASK ((1 << CLUSTER_COUNTER_SHIFT) - 1)\n#define CLUSTER_COUNTER_MASK 0xfff\nstruct DecalData {\n\thighp mat4 xform; \n\thighp vec3 inv_extents;\n\tmediump float albedo_mix;\n\thighp vec4 albedo_rect;\n\thighp vec4 normal_rect;\n\thighp vec4 orm_rect;\n\thighp vec4 emission_rect;\n\thighp vec4 modulate;\n\tmediump float emission_energy;\n\tuint mask;\n\tmediump float upper_fade;\n\tmediump float lower_fade;\n\tmediump mat3x4 normal_xform;\n\tmediump vec3 normal;\n\tmediump float normal_fade;\n};\n\n\n\n\n\nstruct SceneData {\n\thighp mat4 projection_matrix;\n\thighp mat4 inv_projection_matrix;\n\thighp mat4 inv_view_matrix;\n\thighp mat4 view_matrix;\n\n\t\n\thighp mat4 projection_matrix_view[MAX_VIEWS];\n\thighp mat4 inv_projection_matrix_view[MAX_VIEWS];\n\thighp vec4 eye_offset[MAX_VIEWS];\n\n\t\n\thighp mat4 main_cam_inv_view_matrix;\n\n\thighp vec2 viewport_size;\n\thighp vec2 screen_pixel_size;\n\n\t\n\thighp vec4 directional_penumbra_shadow_kernel[32];\n\thighp vec4 directional_soft_shadow_kernel[32];\n\thighp vec4 penumbra_shadow_kernel[32];\n\thighp vec4 soft_shadow_kernel[32];\n\n\tmediump mat3 radiance_inverse_xform;\n\n\tmediump vec4 ambient_light_color_energy;\n\n\tmediump float ambient_color_sky_mix;\n\tbool use_ambient_light;\n\tbool use_ambient_cubemap;\n\tbool use_reflection_cubemap;\n\n\thighp vec2 shadow_atlas_pixel_size;\n\thighp vec2 directional_shadow_pixel_size;\n\n\tuint directional_light_count;\n\tmediump float dual_paraboloid_side;\n\thighp float z_far;\n\thighp float z_near;\n...", /* TRUNCATED STRING LITERAL */, (char*)0x0);
   ShaderCompiler::ShaderCompiler((ShaderCompiler*)( this + 0x188 ));
   singleton = this;
   for (int i = 0; i < 6; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 1680 ) ) = (undefined1[16])0;
   }

   for (int i = 0; i < 6; i++) {
      *(undefined8*)( this + ( 8*i + 1776 ) ) = 0;
   }

   *(undefined4*)( this + 0x720 ) = 0;
   *(undefined4*)( this + 0x734 ) = 0;
   *(undefined1(*) [16])( this + 0x724 ) = (undefined1[16])0x0;
   return;
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::~SceneShaderForwardClustered() */void RendererSceneRenderImplementation::SceneShaderForwardClustered::~SceneShaderForwardClustered(SceneShaderForwardClustered *this) {
   uint uVar1;
   long lVar2;
   long *plVar3;
   undefined8 uVar4;
   long lVar5;
   void *pvVar6;
   plVar3 = (long*)RendererRD::MaterialStorage::get_singleton();
   uVar4 = RenderingDevice::get_singleton();
   RenderingDevice::free(uVar4, *(undefined8*)( this + 0x6d0 ));
   uVar4 = RenderingDevice::get_singleton();
   RenderingDevice::free(uVar4, *(undefined8*)( this + 0x6e0 ));
   ( **(code**)( *plVar3 + 0x80 ) )(plVar3, *(undefined8*)( this + 0x6a0 ));
   ( **(code**)( *plVar3 + 0x80 ) )(plVar3, *(undefined8*)( this + 0x690 ));
   ( **(code**)( *plVar3 + 0x80 ) )(plVar3, *(undefined8*)( this + 0x6b0 ));
   ( **(code**)( *plVar3 + 0xd8 ) )(plVar3, *(undefined8*)( this + 0x6a8 ));
   ( **(code**)( *plVar3 + 0xd8 ) )(plVar3, *(undefined8*)( this + 0x698 ));
   ( **(code**)( *plVar3 + 0xd8 ) )(plVar3);
   for (int i = 0; i < 3; i++) {
      if (*(long*)( this + ( -8*i + 1664 ) ) != 0) {
         LOCK();
         plVar3 = (long*)( *(long*)( this + ( -8*i + 1664 ) ) + -16 );
         *plVar3 = *plVar3 + -1;
         UNLOCK();
         if (*plVar3 == 0) {
            lVar5 = *(long*)( this + ( -8*i + 1664 ) );
            *(undefined8*)( this + ( -8*i + 1664 ) ) = 0;
            Memory::free_static((void*)( lVar5 + -16 ), false);
         }

      }

   }

   pvVar6 = *(void**)( this + 0x638 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0x65c ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x658 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x65c ) = 0;
            *(undefined1(*) [16])( this + 0x648 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x640 ) + lVar5 ) != 0) {
                  pvVar6 = *(void**)( (long)pvVar6 + lVar5 * 2 );
                  *(int*)( *(long*)( this + 0x640 ) + lVar5 ) = 0;
                  if (*(long*)( (long)pvVar6 + 0x18 ) != 0) {
                     LOCK();
                     plVar3 = (long*)( *(long*)( (long)pvVar6 + 0x18 ) + -0x10 );
                     *plVar3 = *plVar3 + -1;
                     UNLOCK();
                     if (*plVar3 == 0) {
                        lVar2 = *(long*)( (long)pvVar6 + 0x18 );
                        *(undefined8*)( (long)pvVar6 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar2 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( this + 0x638 );
                  *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( (ulong)uVar1 << 2 != lVar5 );
            *(undefined4*)( this + 0x65c ) = 0;
            *(undefined1(*) [16])( this + 0x648 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_0010178b;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0x640 ), false);
   }

   LAB_0010178b:pvVar6 = *(void**)( this + 0x608 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0x62c ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x628 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x62c ) = 0;
            *(undefined1(*) [16])( this + 0x618 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x610 ) + lVar5 ) != 0) {
                  pvVar6 = *(void**)( (long)pvVar6 + lVar5 * 2 );
                  *(int*)( *(long*)( this + 0x610 ) + lVar5 ) = 0;
                  if (*(long*)( (long)pvVar6 + 0x18 ) != 0) {
                     LOCK();
                     plVar3 = (long*)( *(long*)( (long)pvVar6 + 0x18 ) + -0x10 );
                     *plVar3 = *plVar3 + -1;
                     UNLOCK();
                     if (*plVar3 == 0) {
                        lVar2 = *(long*)( (long)pvVar6 + 0x18 );
                        *(undefined8*)( (long)pvVar6 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar2 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( this + 0x608 );
                  *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( lVar5 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x62c ) = 0;
            *(undefined1(*) [16])( this + 0x618 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_0010187b;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0x610 ), false);
   }

   LAB_0010187b:pvVar6 = *(void**)( this + 0x5d8 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0x5fc ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x5f8 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x5fc ) = 0;
            *(undefined1(*) [16])( this + 0x5e8 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x5e0 ) + lVar5 ) != 0) {
                  pvVar6 = *(void**)( (long)pvVar6 + lVar5 * 2 );
                  *(int*)( *(long*)( this + 0x5e0 ) + lVar5 ) = 0;
                  if (*(long*)( (long)pvVar6 + 0x18 ) != 0) {
                     LOCK();
                     plVar3 = (long*)( *(long*)( (long)pvVar6 + 0x18 ) + -0x10 );
                     *plVar3 = *plVar3 + -1;
                     UNLOCK();
                     if (*plVar3 == 0) {
                        lVar2 = *(long*)( (long)pvVar6 + 0x18 );
                        *(undefined8*)( (long)pvVar6 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar2 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( this + 0x5d8 );
                  *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( lVar5 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x5fc ) = 0;
            *(undefined1(*) [16])( this + 0x5e8 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_00101969;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0x5e0 ), false);
   }

   LAB_00101969:pvVar6 = *(void**)( this + 0x5a8 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0x5cc ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x5c8 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x5cc ) = 0;
            *(undefined1(*) [16])( this + 0x5b8 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x5b0 ) + lVar5 ) != 0) {
                  pvVar6 = *(void**)( (long)pvVar6 + lVar5 * 2 );
                  *(int*)( *(long*)( this + 0x5b0 ) + lVar5 ) = 0;
                  if (*(long*)( (long)pvVar6 + 0x18 ) != 0) {
                     LOCK();
                     plVar3 = (long*)( *(long*)( (long)pvVar6 + 0x18 ) + -0x10 );
                     *plVar3 = *plVar3 + -1;
                     UNLOCK();
                     if (*plVar3 == 0) {
                        lVar2 = *(long*)( (long)pvVar6 + 0x18 );
                        *(undefined8*)( (long)pvVar6 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar2 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( this + 0x5a8 );
                  *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( (ulong)uVar1 << 2 != lVar5 );
            *(undefined4*)( this + 0x5cc ) = 0;
            *(undefined1(*) [16])( this + 0x5b8 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_00101a59;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0x5b0 ), false);
   }

   LAB_00101a59:pvVar6 = *(void**)( this + 0x578 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0x59c ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x598 ) * 4 ) != 0) {
            memset(*(void**)( this + 0x590 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x598 ) * 4 ) << 2);
            if (*(int*)( this + 0x59c ) == 0) goto LAB_00101fc0;
         }

         lVar5 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + lVar5 * 8 ) != 0 )) {
               StringName::unref();
               pvVar6 = *(void**)( this + 0x578 );
            }

            lVar5 = lVar5 + 1;
         }
 while ( (uint)lVar5 < *(uint*)( this + 0x59c ) );
         *(undefined4*)( this + 0x59c ) = 0;
         if (pvVar6 == (void*)0x0) goto LAB_00101af6;
      }

      LAB_00101fc0:Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0x588 ), false);
      Memory::free_static(*(void**)( this + 0x580 ), false);
      Memory::free_static(*(void**)( this + 0x590 ), false);
   }

   LAB_00101af6:pvVar6 = *(void**)( this + 0x550 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0x574 ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x570 ) * 4 ) != 0) {
            memset(*(void**)( this + 0x568 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x570 ) * 4 ) << 2);
            if (*(int*)( this + 0x574 ) == 0) goto LAB_00102000;
         }

         lVar5 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + lVar5 * 8 ) != 0 )) {
               StringName::unref();
               pvVar6 = *(void**)( this + 0x550 );
            }

            lVar5 = lVar5 + 1;
         }
 while ( (uint)lVar5 < *(uint*)( this + 0x574 ) );
         *(undefined4*)( this + 0x574 ) = 0;
         if (pvVar6 == (void*)0x0) goto LAB_00101b8e;
      }

      LAB_00102000:Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0x560 ), false);
      Memory::free_static(*(void**)( this + 0x558 ), false);
      Memory::free_static(*(void**)( this + 0x568 ), false);
   }

   LAB_00101b8e:pvVar6 = *(void**)( this + 0x528 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0x54c ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x548 ) * 4 ) != 0) {
            memset(*(void**)( this + 0x540 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x548 ) * 4 ) << 2);
            if (*(int*)( this + 0x54c ) == 0) goto LAB_00102040;
         }

         lVar5 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + lVar5 * 8 ) != 0 )) {
               StringName::unref();
               pvVar6 = *(void**)( this + 0x528 );
            }

            lVar5 = lVar5 + 1;
         }
 while ( (uint)lVar5 < *(uint*)( this + 0x54c ) );
         *(undefined4*)( this + 0x54c ) = 0;
         if (pvVar6 == (void*)0x0) goto LAB_00101c2e;
      }

      LAB_00102040:Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0x538 ), false);
      Memory::free_static(*(void**)( this + 0x530 ), false);
      Memory::free_static(*(void**)( this + 0x540 ), false);
   }

   LAB_00101c2e:pvVar6 = *(void**)( this + 0x500 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0x524 ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x520 ) * 4 ) != 0) {
            memset(*(void**)( this + 0x518 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x520 ) * 4 ) << 2);
            if (*(int*)( this + 0x524 ) == 0) goto LAB_00102080;
         }

         lVar5 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + lVar5 * 8 ) != 0 )) {
               StringName::unref();
               pvVar6 = *(void**)( this + 0x500 );
            }

            lVar5 = lVar5 + 1;
         }
 while ( (uint)lVar5 < *(uint*)( this + 0x524 ) );
         *(undefined4*)( this + 0x524 ) = 0;
         if (pvVar6 == (void*)0x0) goto LAB_00101cc6;
      }

      LAB_00102080:Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0x510 ), false);
      Memory::free_static(*(void**)( this + 0x508 ), false);
      Memory::free_static(*(void**)( this + 0x518 ), false);
   }

   LAB_00101cc6:pvVar6 = *(void**)( this + 0x4d8 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0x4fc ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x4f8 ) * 4 ) != 0) {
            memset(*(void**)( this + 0x4f0 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x4f8 ) * 4 ) << 2);
            if (*(int*)( this + 0x4fc ) == 0) goto LAB_00101e60;
         }

         lVar5 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + lVar5 * 8 ) != 0 )) {
               StringName::unref();
               pvVar6 = *(void**)( this + 0x4d8 );
            }

            lVar5 = lVar5 + 1;
         }
 while ( (uint)lVar5 < *(uint*)( this + 0x4fc ) );
         *(undefined4*)( this + 0x4fc ) = 0;
         if (pvVar6 == (void*)0x0) goto LAB_00101d5e;
      }

      LAB_00101e60:Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0x4e8 ), false);
      Memory::free_static(*(void**)( this + 0x4e0 ), false);
      Memory::free_static(*(void**)( this + 0x4f0 ), false);
   }

   LAB_00101d5e:pvVar6 = *(void**)( this + 0x4b0 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0x4d4 ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x4d0 ) * 4 ) != 0) {
            memset(*(void**)( this + 0x4c8 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x4d0 ) * 4 ) << 2);
            if (*(int*)( this + 0x4d4 ) == 0) goto LAB_00101ea0;
         }

         lVar5 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + lVar5 * 8 ) != 0 )) {
               StringName::unref();
               pvVar6 = *(void**)( this + 0x4b0 );
            }

            lVar5 = lVar5 + 1;
         }
 while ( (uint)lVar5 < *(uint*)( this + 0x4d4 ) );
         *(undefined4*)( this + 0x4d4 ) = 0;
         if (pvVar6 == (void*)0x0) goto LAB_00101df6;
      }

      LAB_00101ea0:Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0x4c0 ), false);
      Memory::free_static(*(void**)( this + 0x4b8 ), false);
      Memory::free_static(*(void**)( this + 0x4c8 ), false);
   }

   LAB_00101df6:if (StringName::configured != '\0') {
      if (*(long*)( this + 0x4a8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101e34;
      }

      if (*(long*)( this + 0x4a0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00101e34:ShaderLanguage::~ShaderLanguage((ShaderLanguage*)( this + 0x188 ));
   *(undefined***)( this + 0x10 ) = &PTR__SceneForwardClusteredShaderRD_00112b40;
   ShaderRD::~ShaderRD((ShaderRD*)( this + 0x10 ));
   return;
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::enable_advanced_shader_group(bool)
    */void RendererSceneRenderImplementation::SceneShaderForwardClustered::enable_advanced_shader_group(SceneShaderForwardClustered *this, bool param_1) {
   char cVar1;
   int iVar2;
   if (!param_1) {
      cVar1 = ( **(code**)( *RendererCompositorRD::singleton + 0xa8 ) )();
      if (cVar1 == '\0') {
         ShaderRD::enable_group((int)this + 0x10);
         return;
      }

   }

   iVar2 = (int)this + 0x10;
   ShaderRD::enable_group(iVar2);
   ShaderRD::enable_group(iVar2);
   return;
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::is_multiview_shader_group_enabled()
   const */void RendererSceneRenderImplementation::SceneShaderForwardClustered::is_multiview_shader_group_enabled(SceneShaderForwardClustered *this) {
   ShaderRD::is_group_enabled((int)this + 0x10);
   return;
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::is_advanced_shader_group_enabled(bool)
   const */void RendererSceneRenderImplementation::SceneShaderForwardClustered::is_advanced_shader_group_enabled(SceneShaderForwardClustered *this, bool param_1) {
   int iVar1;
   iVar1 = (int)this + 0x10;
   if (param_1) {
      ShaderRD::is_group_enabled(iVar1);
      return;
   }

   ShaderRD::is_group_enabled(iVar1);
   return;
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::get_pipeline_compilations(RenderingServer::PipelineSource)
    */undefined4 RendererSceneRenderImplementation::SceneShaderForwardClustered::get_pipeline_compilations(SceneShaderForwardClustered *this, int param_2) {
   undefined4 uVar1;
   int iVar2;
   iVar2 = pthread_mutex_lock((pthread_mutex_t*)singleton_mutex);
   if (iVar2 == 0) {
      uVar1 = *(undefined4*)( this + (long)param_2 * 4 + 0x724 );
      pthread_mutex_unlock((pthread_mutex_t*)singleton_mutex);
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar2);
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
/* CowData<ShaderRD::VariantDefine>::_copy_on_write() [clone .isra.0] */void CowData<ShaderRD::VariantDefine>::_copy_on_write(CowData<ShaderRD::VariantDefine> *this) {
   undefined4 uVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   ulong uVar7;
   undefined4 *puVar8;
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
      puVar6 = puVar5 + 2;
      if (lVar2 != 0) {
         do {
            puVar8 = (undefined4*)( (long)puVar6 + *(long*)this + ( -0x10 - (long)puVar5 ) );
            uVar1 = *puVar8;
            puVar6[1] = 0;
            lVar3 = *(long*)( puVar8 + 2 );
            *(undefined4*)puVar6 = uVar1;
            if (lVar3 != 0) {
               CowData<char>::_ref((CowData<char>*)( puVar6 + 1 ), (CowData*)( puVar8 + 2 ));
            }

            lVar9 = lVar9 + 1;
            *(undefined1*)( puVar6 + 2 ) = *(undefined1*)( puVar8 + 4 );
            puVar6 = puVar6 + 3;
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
/* Vector<RenderingDeviceCommons::PipelineSpecializationConstant>::push_back(RenderingDeviceCommons::PipelineSpecializationConstant)
   [clone .isra.0] */void Vector<RenderingDeviceCommons::PipelineSpecializationConstant>::push_back(long param_1, undefined8 param_2, undefined4 param_3) {
   undefined8 *puVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   if (*(long*)( param_1 + 8 ) == 0) {
      lVar3 = 1;
   }
 else {
      lVar3 = *(long*)( *(long*)( param_1 + 8 ) + -8 ) + 1;
   }

   iVar2 = CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::resize<false>((CowData<RenderingDeviceCommons::PipelineSpecializationConstant>*)( param_1 + 8 ), lVar3);
   if (iVar2 == 0) {
      if (*(long*)( param_1 + 8 ) == 0) {
         lVar4 = -1;
         lVar3 = 0;
      }
 else {
         lVar3 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
         lVar4 = lVar3 + -1;
         if (-1 < lVar4) {
            CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write((CowData<RenderingDeviceCommons::PipelineSpecializationConstant>*)( param_1 + 8 ));
            puVar1 = (undefined8*)( *(long*)( param_1 + 8 ) + lVar4 * 0xc );
            *puVar1 = param_2;
            *(undefined4*)( puVar1 + 1 ) = param_3;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar4, lVar3, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::_create_pipeline(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey)
    */void RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::_create_pipeline(ShaderData *param_1) {
   long *plVar1;
   code *pcVar2;
   undefined8 uVar3;
   ulong uVar4;
   bool bVar5;
   ushort uVar6;
   int iVar7;
   int iVar8;
   int iVar9;
   undefined4 uVar10;
   undefined8 *puVar11;
   undefined8 uVar12;
   undefined4 *puVar13;
   void *pvVar14;
   long lVar15;
   long lVar16;
   long lVar17;
   ShaderData *this;
   uint uVar18;
   long lVar19;
   long in_FS_OFFSET;
   bool bVar20;
   undefined8 in_stack_00000008;
   undefined8 in_stack_00000010;
   undefined4 uStack0000000000000018;
   int iStack000000000000001c;
   int iStack0000000000000020;
   uint uStack0000000000000024;
   undefined4 uStack0000000000000028;
   undefined4 uStack000000000000002c;
   undefined8 in_stack_00000030;
   int in_stack_00000038;
   ulong local_298;
   undefined8 uStack_290;
   long local_288;
   undefined8 uStack_280;
   undefined4 local_278;
   undefined4 uStack_274;
   undefined4 uStack_270;
   undefined4 uStack_26c;
   undefined8 local_268;
   undefined4 uStack_260;
   uint uStack_25c;
   undefined8 local_258;
   long lStack_250;
   undefined8 local_248;
   long lStack_240;
   undefined2 local_238;
   ShaderData local_236;
   undefined4 local_234;
   undefined4 local_230;
   undefined1 local_22c;
   undefined8 local_228;
   undefined8 uStack_220;
   undefined4 local_218;
   undefined4 local_208;
   uint uStack_204;
   undefined4 uStack_200;
   undefined4 uStack_1fc;
   undefined8 local_1f8;
   undefined4 uStack_1f0;
   uint uStack_1ec;
   undefined2 local_1e8;
   undefined8 local_1d8;
   uint uStack_1d0;
   undefined4 uStack_1cc;
   undefined4 uStack_1c8;
   uint uStack_1c4;
   long lStack_1c0;
   undefined8 uStack_1b8;
   undefined8 local_1b0;
   undefined8 uStack_1a8;
   undefined8 local_1a0;
   undefined8 uStack_198;
   undefined8 local_190;
   undefined8 local_188;
   undefined8 uStack_180;
   undefined4 local_178;
   StringName local_168;
   undefined4 local_164;
   long local_158;
   undefined8 local_150;
   undefined8 uStack_148;
   StringName local_138;
   undefined4 local_134;
   long local_128;
   undefined8 local_120;
   undefined8 uStack_118;
   StringName local_108;
   undefined4 local_104;
   long local_f8;
   undefined8 local_f0;
   undefined8 uStack_e8;
   StringName local_d8[4];
   undefined4 local_d4;
   long local_c8;
   undefined8 local_c0;
   undefined8 uStack_b8;
   undefined8 local_a8;
   undefined8 uStack_a0;
   long local_98[2];
   uint local_88;
   undefined4 local_84;
   undefined1 auStack_80[12];
   undefined8 local_74;
   uint local_6c;
   undefined1 local_68;
   undefined1 local_64[16];
   undefined8 local_54;
   uint local_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   RendererRD::MaterialStorage::ShaderData::blend_mode_to_blend_attachment(&local_298, *(undefined4*)( param_1 + 0x318 ));
   uVar18 = _LC49;
   local_88 = local_88 & 0xffffff00;
   local_a8 = local_298;
   uStack_a0 = uStack_290;
   local_74 = 0;
   local_6c = _LC49;
   local_68 = 0;
   local_54 = 0;
   local_4c = _LC49;
   uStack_1d0 = 0;
   uStack_1cc = 0;
   local_98[0] = local_288;
   local_98[1] = uStack_280;
   local_84 = 0;
   auStack_80 = SUB1612((undefined1[16])0x0, 4);
   local_64 = (undefined1[16])0x0;
   iVar7 = CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::resize<false>((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>*)&uStack_1d0, 3);
   lVar17 = CONCAT44(uStack_1cc, uStack_1d0);
   if (iVar7 == 0) {
      lVar15 = 0;
      do {
         if (lVar17 == 0) {
            lVar19 = 0;
            LAB_00102efb:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar15, lVar19, "p_index", "size()", "", false, false);
         }
 else {
            lVar19 = *(long*)( lVar17 + -8 );
            if (lVar19 <= lVar15) goto LAB_00102efb;
            CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>*)&uStack_1d0);
            lVar17 = CONCAT44(uStack_1cc, uStack_1d0);
            uVar3 = ( &uStack_a0 )[lVar15 * 4];
            puVar11 = (undefined8*)( lVar17 + lVar15 * 0x20 );
            *puVar11 = ( &local_a8 )[lVar15 * 4];
            puVar11[1] = uVar3;
            lVar19 = local_98[lVar15 * 4 + 1];
            plVar1 = (long*)( lVar17 + 0x10 + lVar15 * 0x20 );
            *plVar1 = local_98[lVar15 * 4];
            plVar1[1] = lVar19;
         }

         lVar15 = lVar15 + 1;
      }
 while ( lVar15 != 3 );
   }

   local_168 = (StringName)0x0;
   iVar7 = 3;
   local_164 = 0;
   local_158 = 0;
   local_150 = __LC57;
   uStack_148 = _UNK_0013a848;
   do {
      uStack_1ec = uVar18;
      local_208 = 0;
      uStack_204 = 0;
      uStack_200 = 0;
      uStack_1fc = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1d8 = 0;
      lStack_1c0 = (ulong)uVar18 << 0x20;
      uStack_1d0 = 0;
      uStack_1cc = 0;
      uStack_1c8 = 0;
      uStack_1c4 = 0;
      if (local_158 == 0) {
         lVar15 = 1;
      }
 else {
         lVar15 = *(long*)( local_158 + -8 ) + 1;
      }

      iVar8 = CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::resize<false>((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>*)&local_158, lVar15);
      if (iVar8 == 0) {
         if (local_158 == 0) {
            lVar19 = -1;
            lVar15 = 0;
         }
 else {
            lVar15 = *(long*)( local_158 + -8 );
            lVar19 = lVar15 + -1;
            if (-1 < lVar19) {
               CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>*)&local_158);
               puVar11 = (undefined8*)( lVar19 * 0x20 + local_158 );
               *puVar11 = local_1d8;
               puVar11[1] = CONCAT44(uStack_1cc, uStack_1d0);
               puVar11[2] = CONCAT44(uStack_1c4, uStack_1c8);
               puVar11[3] = lStack_1c0;
               goto LAB_00102961;
            }

         }

         _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar19, lVar15, "p_index", "size()", "", false, false);
      }
 else {
         _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      }

      LAB_00102961:iVar7 = iVar7 + -1;
   }
 while ( iVar7 != 0 );
   uStack_1ec = uVar18;
   local_208 = 0;
   uStack_204 = 0;
   uStack_200 = 0;
   uStack_1fc = 0;
   local_1f8 = 0;
   uStack_1f0 = 0;
   local_1d8 = 0;
   lStack_1c0 = (ulong)uVar18 << 0x20;
   local_138 = (StringName)0x0;
   local_134 = 0;
   local_128 = 0;
   local_120 = __LC57;
   uStack_118 = _UNK_0013a848;
   uStack_1d0 = 0;
   uStack_1cc = 0;
   uStack_1c8 = 0;
   uStack_1c4 = 0;
   iVar7 = CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::resize<false>((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>*)&local_128, 1);
   if (iVar7 == 0) {
      if (local_128 == 0) {
         lVar15 = 0;
         lVar19 = -1;
      }
 else {
         lVar15 = *(long*)( local_128 + -8 );
         lVar19 = lVar15 + -1;
         if (-1 < lVar19) {
            CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>*)&local_128);
            puVar11 = (undefined8*)( lVar19 * 0x20 + local_128 );
            *puVar11 = local_1d8;
            puVar11[1] = CONCAT44(uStack_1cc, uStack_1d0);
            puVar11[2] = CONCAT44(uStack_1c4, uStack_1c8);
            puVar11[3] = lStack_1c0;
            goto LAB_00102a4a;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar19, lVar15, "p_index", "size()", "", false, false);
   }
 else {
      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   }

   LAB_00102a4a:iVar7 = 2;
   local_108 = (StringName)0x0;
   local_104 = 0;
   local_f8 = 0;
   local_f0 = __LC57;
   uStack_e8 = _UNK_0013a848;
   do {
      uStack_1ec = uVar18;
      local_208 = 0;
      uStack_204 = 0;
      uStack_200 = 0;
      uStack_1fc = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1d8 = 0;
      lStack_1c0 = (ulong)uVar18 << 0x20;
      uStack_1d0 = 0;
      uStack_1cc = 0;
      uStack_1c8 = 0;
      uStack_1c4 = 0;
      if (local_f8 == 0) {
         lVar15 = 1;
      }
 else {
         lVar15 = *(long*)( local_f8 + -8 ) + 1;
      }

      iVar8 = CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::resize<false>((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>*)&local_f8, lVar15);
      if (iVar8 == 0) {
         if (local_f8 == 0) {
            lVar19 = -1;
            lVar15 = 0;
         }
 else {
            lVar15 = *(long*)( local_f8 + -8 );
            lVar19 = lVar15 + -1;
            if (-1 < lVar19) {
               CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>*)&local_f8);
               puVar11 = (undefined8*)( lVar19 * 0x20 + local_f8 );
               *puVar11 = local_1d8;
               puVar11[1] = CONCAT44(uStack_1cc, uStack_1d0);
               puVar11[2] = CONCAT44(uStack_1c4, uStack_1c8);
               puVar11[3] = lStack_1c0;
               goto LAB_00102b5c;
            }

         }

         _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar19, lVar15, "p_index", "size()", "", false, false);
      }
 else {
         _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      }

      LAB_00102b5c:if (iVar7 == 1) break;
      iVar7 = 1;
   }
 while ( true );
   local_1d8 = CONCAT44(7, (undefined4)local_1d8);
   local_1d8 = local_1d8 & 0xffffffffffff0000;
   lStack_1c0 = _LC29;
   uStack_1b8 = _UNK_0013a858;
   uStack_1d0 = uStack_1d0 & 0xffffff00;
   local_1b0 = __LC59;
   uStack_1a8 = _UNK_0013a868;
   uStack_1cc = 0;
   uStack_1c8 = 0;
   uStack_1c4 = uStack_1c4 & 0xffffff00;
   local_190 = 0;
   local_1a0 = __LC60;
   uStack_198 = _UNK_0013a878;
   if (*(int*)( param_1 + 0x314 ) != 0) {
      local_1d8 = CONCAT71(local_1d8._1_7_, 1);
      local_1d8 = CONCAT44(6, (undefined4)local_1d8);
      local_1d8._0_2_ = CONCAT11(*(int*)( param_1 + 0x310 ) != 0, 1);
   }

   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_208, "rendering/driver/depth_prepass/enable", false);
   ProjectSettings::get_setting_with_override((StringName*)&local_a8);
   bVar5 = Variant::operator_cast_to_bool((Variant*)&local_a8);
   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_204, local_208) != 0 )) {
      StringName::unref();
   }

   local_178 = 7;
   local_188 = __LC62;
   uStack_180 = _UNK_0013a888;
   uVar10 = 0;
   if (param_1[0x324] == (ShaderData)0x0) {
      uVar10 = *(undefined4*)( (long)&local_188 + (long)iStack000000000000001c * 4 );
   }

   local_230 = 0;
   local_238 = 0;
   local_234 = uStack0000000000000018;
   local_22c = 0;
   local_236 = param_1[0x330];
   local_228 = __LC57;
   uStack_220 = _UNK_0013a848;
   local_218 = 1;
   if (local_236 == (ShaderData)0x0) {
      local_236 = ( ShaderData )(in_stack_00000030._4_4_ != 0);
   }

   local_1e8 = 0;
   local_208 = 0;
   uStack_204 = uStack_204 & 0xffffff00;
   uStack_200 = 0;
   uStack_1f0 = 0;
   uStack_1ec = 0;
   lVar15 = RenderingDevice::get_singleton();
   uVar3 = in_stack_00000010;
   local_208 = RenderingDevice::framebuffer_format_get_texture_samples(lVar15, (uint)in_stack_00000010);
   lVar16 = local_f8;
   lVar19 = local_128;
   lVar15 = local_158;
   iVar7 = iStack0000000000000020;
   local_d8[0] = (StringName)0x0;
   local_d4 = 0;
   local_c8 = 0;
   local_c0 = __LC57;
   uStack_b8 = _UNK_0013a848;
   if (iStack0000000000000020 == 9) {
      if (( uStack0000000000000024 & 1 ) == 0) {
         local_d8[0] = local_168;
         local_d4 = local_164;
         uVar18 = uStack0000000000000024;
         if (local_158 != 0) {
            CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_unref((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>*)&local_c8);
            plVar1 = (long*)( lVar15 + -0x10 );
            do {
               lVar15 = *plVar1;
               uVar18 = uStack0000000000000024;
               if (lVar15 == 0) goto LAB_001036fb;
               LOCK();
               lVar19 = *plVar1;
               bVar20 = lVar15 == lVar19;
               if (bVar20) {
                  *plVar1 = lVar15 + 1;
                  lVar19 = lVar15;
               }

               UNLOCK();
            }
 while ( !bVar20 );
            if (lVar19 != -1) {
               local_c8 = local_158;
            }

         }

         LAB_001036fb:uVar4 = local_1d8;
         local_c0 = local_150;
         uStack_b8 = uStack_148;
         if (bVar5) {
            local_1d8 = CONCAT44(2, (undefined4)local_1d8);
            local_1d8._0_1_ = (byte)uVar4;
            local_1d8._0_2_ = (ushort)(byte)local_1d8;
         }

      }
 else {
         if (*(int*)( param_1 + 800 ) == 1) {
            local_1e8 = CONCAT11(local_1e8._1_1_, 1);
         }
 else if (*(int*)( param_1 + 800 ) == 2) {
            local_1e8 = 0x101;
         }

         if (lVar17 != 0) {
            CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_unref((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>*)&local_c8);
            plVar1 = (long*)( lVar17 + -0x10 );
            do {
               lVar15 = *plVar1;
               if (lVar15 == 0) goto LAB_00103272;
               LOCK();
               lVar19 = *plVar1;
               bVar5 = lVar15 == lVar19;
               if (bVar5) {
                  *plVar1 = lVar15 + 1;
                  lVar19 = lVar15;
               }

               UNLOCK();
            }
 while ( !bVar5 );
            if (lVar19 != -1) {
               local_c8 = lVar17;
            }

         }

         LAB_00103272:local_c0 = __LC57;
         uStack_b8 = _UNK_0013a848;
         uVar18 = uStack0000000000000024;
         if (*(int*)( param_1 + 0x310 ) == 1) {
            local_1d8._0_2_ = (ushort)(byte)local_1d8;
         }

      }

   }
 else {
      switch (iStack0000000000000020) {
         case 2:
         case 7:
      local_d8[0] = local_138;
      local_d4 = local_134;
      if (local_128 != 0) {
        CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_unref
                  ((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *)&local_c8
                  );
        plVar1 = (long *)(lVar19 + -0x10);
        do {
          lVar15 = *plVar1;
          if (lVar15 == 0) goto LAB_001035d4;
          LOCK();
          lVar19 = *plVar1;
          bVar5 = lVar15 == lVar19;
          if (bVar5) {
            *plVar1 = lVar15 + 1;
            lVar19 = lVar15;
          }
          UNLOCK();
        } while (!bVar5);
        if (lVar19 != -1) {
          local_c8 = local_128;
        }
      }
LAB_001035d4:
      local_c0 = local_120;
      uStack_b8 = uStack_118;
      uVar18 = uStack0000000000000024;
      break;
         case 3:
         case 8:
      local_d8[0] = local_108;
      local_d4 = local_104;
      if (local_f8 != 0) {
        CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_unref
                  ((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *)&local_c8
                  );
        plVar1 = (long *)(lVar16 + -0x10);
        do {
          lVar15 = *plVar1;
          if (lVar15 == 0) goto LAB_0010354c;
          LOCK();
          lVar19 = *plVar1;
          bVar5 = lVar15 == lVar19;
          if (bVar5) {
            *plVar1 = lVar15 + 1;
            lVar19 = lVar15;
          }
          UNLOCK();
        } while (!bVar5);
        if (lVar19 != -1) {
          local_c8 = local_f8;
        }
      }
LAB_0010354c:
      local_c0 = local_f0;
      uStack_b8 = uStack_e8;
      uVar18 = uStack0000000000000024;
      break;
         case 4:
      lVar15 = 0;
      local_a8 = (local_a8 >> 8 & 0xffffff) << 8;
      local_98[0] = 0;
      iVar8 = 5;
      local_98[1] = __LC57;
      local_88 = (uint)_UNK_0013a848;
      local_84 = (undefined4)((ulong)_UNK_0013a848 >> 0x20);
      do {
        uStack_25c = uVar18;
        local_278 = 0;
        uStack_274 = 0;
        uStack_270 = 0;
        uStack_26c = 0;
        local_268 = 0;
        uStack_260 = 0;
        local_258 = 0;
        lStack_250 = 0;
        lStack_240 = (ulong)uVar18 << 0x20;
        local_248 = 0;
        if (lVar15 == 0) {
          lVar15 = 1;
        }
        else {
          lVar15 = *(long *)(lVar15 + -8) + 1;
        }
        iVar9 = CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::resize<false>
                          ((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *)
                           local_98,lVar15);
        lVar15 = local_98[0];
        if (iVar9 == 0) {
          if (local_98[0] == 0) {
            lVar16 = -1;
            lVar19 = 0;
          }
          else {
            lVar19 = *(long *)(local_98[0] + -8);
            lVar16 = lVar19 + -1;
            if (-1 < lVar16) {
              CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write
                        ((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *)
                         local_98);
              puVar11 = (undefined8 *)(lVar16 * 0x20 + local_98[0]);
              *puVar11 = local_258;
              puVar11[1] = lStack_250;
              puVar11[2] = local_248;
              puVar11[3] = lStack_240;
              lVar15 = local_98[0];
              goto LAB_00103040;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar16,lVar19,"p_index","size()","",
                     false,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
          lVar15 = local_98[0];
        }
LAB_00103040:
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      local_d8[0] = local_a8._0_1_;
      local_d4 = local_a8._4_4_;
      if (local_c8 != lVar15) {
        CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_unref
                  ((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *)&local_c8
                  );
        local_98[0] = 0;
        local_c8 = lVar15;
      }
      uStack_b8 = CONCAT44(local_84,local_88);
      local_c0 = local_98[1];
      CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_unref
                ((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *)local_98);
         default:
      uVar18 = uStack0000000000000024;
      }

   }

   lStack_250 = 0;
   local_278 = 1;
   uStack_274 = 0;
   uStack_270 = uStack0000000000000028;
   Vector<RenderingDeviceCommons::PipelineSpecializationConstant>::push_back(&local_258, 1);
   uStack_274 = 1;
   uStack_270 = uStack000000000000002c;
   Vector<RenderingDeviceCommons::PipelineSpecializationConstant>::push_back(&local_258, CONCAT44(1, local_278));
   if (*(long*)( param_1 + 0x158 ) == 0) {
      LAB_00103137:_err_print_error("_create_pipeline", "servers/rendering/renderer_rd/forward_clustered/scene_shader_forward_clustered.cpp", 0x185, "Condition \"shader_rid.is_null()\" is true.", 0, 0);
   }
 else {
      this =
      param_1;
      uVar6 = _get_shader_version(param_1, iVar7, uVar18, in_stack_00000038 != 0);
      lVar15 = _get_shader_variant(this, uVar6);
      if (lVar15 == 0) goto LAB_00103137;
      uVar12 = RenderingDevice::get_singleton();
      lVar15 = RenderingDevice::render_pipeline_create(uVar12, lVar15, uVar3, in_stack_00000008, uVar10, &local_238, (StringName*)&local_208, &local_1d8, local_d8, 0, 0, &local_258);
      if (lVar15 != 0) {
         uVar10 = PipelineKey::hash((PipelineKey*)&stack0x00000008);
         iVar7 = pthread_mutex_lock((pthread_mutex_t*)( param_1 + 0xc0 ));
         if (iVar7 != 0) {
            /* WARNING: Subroutine does not return */
            std::__throw_system_error(iVar7);
         }

         uVar18 = *(uint*)( param_1 + 0xb0 );
         pvVar14 = *(void**)( param_1 + 0xb8 );
         if (uVar18 == *(uint*)( param_1 + 0xb4 )) {
            uVar18 = uVar18 * 2;
            if (uVar18 == 0) {
               uVar18 = 1;
            }

            *(uint*)( param_1 + 0xb4 ) = uVar18;
            pvVar14 = (void*)Memory::realloc_static(pvVar14, (ulong)uVar18 << 4, false);
            *(void**)( param_1 + 0xb8 ) = pvVar14;
            if (pvVar14 == (void*)0x0) {
               _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            uVar18 = *(uint*)( param_1 + 0xb0 );
         }

         puVar13 = (undefined4*)( (ulong)uVar18 * 0x10 + (long)pvVar14 );
         *(uint*)( param_1 + 0xb0 ) = uVar18 + 1;
         *puVar13 = uVar10;
         *(long*)( puVar13 + 2 ) = lVar15;
         pthread_mutex_unlock((pthread_mutex_t*)( param_1 + 0xc0 ));
         lVar15 = lStack_250;
         if (lStack_250 != 0) {
            LOCK();
            plVar1 = (long*)( lStack_250 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lStack_250 = 0;
               Memory::free_static((void*)( lVar15 + -0x10 ), false);
            }

         }

         lVar15 = local_c8;
         if (local_c8 != 0) {
            LOCK();
            plVar1 = (long*)( local_c8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_c8 = 0;
               Memory::free_static((void*)( lVar15 + -0x10 ), false);
            }

         }

         if (CONCAT44(uStack_1ec, uStack_1f0) != 0) {
            LOCK();
            plVar1 = (long*)( CONCAT44(uStack_1ec, uStack_1f0) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar15 = CONCAT44(uStack_1ec, uStack_1f0);
               uStack_1f0 = 0;
               uStack_1ec = 0;
               Memory::free_static((void*)( lVar15 + -0x10 ), false);
            }

         }

         if (local_f8 != 0) {
            LOCK();
            plVar1 = (long*)( local_f8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_f8 + -0x10 ), false);
            }

         }

         if (local_128 != 0) {
            LOCK();
            plVar1 = (long*)( local_128 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_128 + -0x10 ), false);
            }

         }

         if (local_158 != 0) {
            LOCK();
            plVar1 = (long*)( local_158 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_158 + -0x10 ), false);
            }

         }

         goto LAB_001034a2;
      }

      _err_print_error("_create_pipeline", "servers/rendering/renderer_rd/forward_clustered/scene_shader_forward_clustered.cpp", 0x188, "Condition \"pipeline.is_null()\" is true.", 0, 0);
   }

   lVar15 = lStack_250;
   if (lStack_250 != 0) {
      LOCK();
      plVar1 = (long*)( lStack_250 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lStack_250 = 0;
         Memory::free_static((void*)( lVar15 + -0x10 ), false);
      }

   }

   CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_unref((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>*)&local_c8);
   if (CONCAT44(uStack_1ec, uStack_1f0) != 0) {
      LOCK();
      plVar1 = (long*)( CONCAT44(uStack_1ec, uStack_1f0) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar15 = CONCAT44(uStack_1ec, uStack_1f0);
         uStack_1f0 = 0;
         uStack_1ec = 0;
         Memory::free_static((void*)( lVar15 + -0x10 ), false);
      }

   }

   CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_unref((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>*)&local_f8);
   CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_unref((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>*)&local_128);
   CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_unref((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>*)&local_158);
   LAB_001034a2:if (lVar17 != 0) {
      plVar1 = (long*)( lVar17 + -0x10 );
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static(plVar1, false);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Vector<ShaderRD::VariantDefine>::push_back(ShaderRD::VariantDefine) [clone .isra.0] */void Vector<ShaderRD::VariantDefine>::push_back(Vector<ShaderRD::VariantDefine> *this, undefined4 *param_2) {
   undefined4 *puVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   if (*(long*)( this + 8 ) == 0) {
      lVar3 = 1;
   }
 else {
      lVar3 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar2 = CowData<ShaderRD::VariantDefine>::resize<false>((CowData<ShaderRD::VariantDefine>*)( this + 8 ), lVar3);
   if (iVar2 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar4 = -1;
         lVar3 = 0;
      }
 else {
         lVar3 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar4 = lVar3 + -1;
         if (-1 < lVar4) {
            CowData<ShaderRD::VariantDefine>::_copy_on_write((CowData<ShaderRD::VariantDefine>*)( this + 8 ));
            puVar1 = (undefined4*)( *(long*)( this + 8 ) + lVar4 * 0x18 );
            *puVar1 = *param_2;
            if (*(long*)( puVar1 + 2 ) != *(long*)( param_2 + 2 )) {
               CowData<char>::_ref((CowData<char>*)( puVar1 + 2 ), (CowData*)( param_2 + 2 ));
            }

            *(undefined1*)( puVar1 + 4 ) = *(undefined1*)( param_2 + 4 );
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar4, lVar3, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererSceneRenderImplementation::SceneShaderForwardClustered::init(String) */void RendererSceneRenderImplementation::SceneShaderForwardClustered::init(long param_1) {
   StrRange *pSVar1;
   CowData<char32_t> *this;
   undefined8 *puVar2;
   code *pcVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   char cVar10;
   bool bVar11;
   undefined1 uVar12;
   int iVar13;
   uint uVar14;
   long *plVar15;
   ulong uVar16;
   SamplerState *pSVar17;
   undefined8 uVar18;
   ShaderData *this_00;
   char *in_R9;
   long lVar19;
   long *plVar20;
   uint uVar21;
   StrRange *pSVar22;
   long lVar23;
   long in_FS_OFFSET;
   undefined8 local_270;
   long local_268;
   long local_260;
   long local_258;
   undefined8 local_250;
   long local_248;
   undefined1 local_240[16];
   undefined1 local_230[16];
   undefined8 local_220;
   HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>> local_218[8];
   undefined1 local_210[16];
   undefined1 local_200[16];
   undefined8 local_1f0;
   HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>> local_1e8[8];
   undefined1 local_1e0[16];
   undefined1 local_1d0[16];
   undefined8 local_1c0;
   undefined1 local_1b0[16];
   undefined1 local_1a0[16];
   undefined8 local_190;
   undefined8 uStack_188;
   undefined8 local_180;
   undefined1 local_178[16];
   long local_168;
   undefined4 local_160;
   undefined2 local_15c;
   char *local_158;
   undefined1 auStack_150[16];
   undefined1 local_140[16];
   ulong local_130;
   undefined8 local_128;
   undefined1 local_120[16];
   undefined1 local_110[16];
   ulong local_100;
   String local_f8[8];
   undefined1 local_f0[16];
   undefined1 local_e0[16];
   ulong local_d0;
   String local_c8[8];
   undefined1 local_c0[16];
   undefined1 local_b0[16];
   ulong local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 local_78;
   undefined4 local_70;
   undefined2 local_6c;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   plVar15 = (long*)RendererRD::MaterialStorage::get_singleton();
   bVar11 = false;
   uVar18 = 0;
   local_250 = 0;
   local_158 = "";
   while (true) {
      local_270 = 0;
      auStack_150._0_8_ = uVar18;
      String::parse_latin1((StrRange*)&local_270);
      local_158 = "\n#define MODE_RENDER_DEPTH\n";
      local_268 = 0;
      auStack_150._0_8_ = 0x1b;
      String::parse_latin1((StrRange*)&local_268);
      String::operator +((String*)&local_260, (StrRange*)&local_270);
      local_158 = (char*)0x0;
      auStack_150._0_9_ = (unkuint9)1 << 0x40;
      String::utf8();
      lVar23 = local_248;
      if (local_248 == 0) {
         Vector<ShaderRD::VariantDefine>::push_back((Vector<ShaderRD::VariantDefine>*)&local_258, (StringName*)&local_158);
      }
 else {
         auStack_150._0_8_ = local_248;
         Vector<ShaderRD::VariantDefine>::push_back((Vector<ShaderRD::VariantDefine>*)&local_258);
         LOCK();
         plVar20 = (long*)( lVar23 + -0x10 );
         *plVar20 = *plVar20 + -1;
         UNLOCK();
         if (*plVar20 == 0) {
            Memory::free_static((void*)( auStack_150._0_8_ + -0x10 ), false);
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
      local_158 = "\n#define MODE_RENDER_DEPTH\n#define MODE_DUAL_PARABOLOID\n";
      local_268 = 0;
      auStack_150._0_8_ = 0x38;
      String::parse_latin1((StrRange*)&local_268);
      String::operator +((String*)&local_260, (StrRange*)&local_270);
      local_158 = (char*)0x0;
      auStack_150._0_9_ = (unkuint9)1 << 0x40;
      String::utf8();
      lVar23 = local_248;
      if (local_248 == 0) {
         Vector<ShaderRD::VariantDefine>::push_back((Vector<ShaderRD::VariantDefine>*)&local_258, (StringName*)&local_158);
      }
 else {
         auStack_150._0_8_ = local_248;
         Vector<ShaderRD::VariantDefine>::push_back((Vector<ShaderRD::VariantDefine>*)&local_258);
         LOCK();
         plVar20 = (long*)( lVar23 + -0x10 );
         *plVar20 = *plVar20 + -1;
         UNLOCK();
         if (*plVar20 == 0) {
            Memory::free_static((void*)( auStack_150._0_8_ + -0x10 ), false);
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
      local_158 = "\n#define MODE_RENDER_DEPTH\n#define MODE_RENDER_NORMAL_ROUGHNESS\n";
      local_268 = 0;
      auStack_150._0_8_ = 0x40;
      String::parse_latin1((StrRange*)&local_268);
      String::operator +((String*)&local_260, (StrRange*)&local_270);
      local_158 = (char*)0x0;
      auStack_150._0_9_ = (unkuint9)1 << 0x40;
      String::utf8();
      lVar23 = local_248;
      if (local_248 == 0) {
         Vector<ShaderRD::VariantDefine>::push_back((Vector<ShaderRD::VariantDefine>*)&local_258, (StringName*)&local_158);
      }
 else {
         auStack_150._0_8_ = local_248;
         Vector<ShaderRD::VariantDefine>::push_back((Vector<ShaderRD::VariantDefine>*)&local_258);
         LOCK();
         plVar20 = (long*)( lVar23 + -0x10 );
         *plVar20 = *plVar20 + -1;
         UNLOCK();
         if (*plVar20 == 0) {
            Memory::free_static((void*)( auStack_150._0_8_ + -0x10 ), false);
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
      local_158 = "\n#define MODE_RENDER_DEPTH\n#define MODE_RENDER_NORMAL_ROUGHNESS\n#define MODE_RENDER_VOXEL_GI\n";
      local_268 = 0;
      auStack_150._0_8_ = 0x5d;
      String::parse_latin1((StrRange*)&local_268);
      String::operator +((String*)&local_260, (StrRange*)&local_270);
      local_158 = (char*)0x1;
      auStack_150._0_9_ = ZEXT89(0);
      String::utf8();
      lVar23 = local_248;
      if (local_248 == 0) {
         Vector<ShaderRD::VariantDefine>::push_back((Vector<ShaderRD::VariantDefine>*)&local_258, (StringName*)&local_158);
      }
 else {
         auStack_150._0_8_ = local_248;
         Vector<ShaderRD::VariantDefine>::push_back((Vector<ShaderRD::VariantDefine>*)&local_258);
         LOCK();
         plVar20 = (long*)( lVar23 + -0x10 );
         *plVar20 = *plVar20 + -1;
         UNLOCK();
         if (*plVar20 == 0) {
            Memory::free_static((void*)( auStack_150._0_8_ + -0x10 ), false);
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
      local_158 = "\n#define USE_MULTIVIEW\n#define MODE_RENDER_DEPTH\n";
      local_268 = 0;
      auStack_150._0_8_ = 0x31;
      String::parse_latin1((StrRange*)&local_268);
      String::operator +((String*)&local_260, (StrRange*)&local_270);
      local_158 = (char*)0x2;
      auStack_150._0_9_ = ZEXT89(0);
      String::utf8();
      lVar23 = local_248;
      if (local_248 == 0) {
         Vector<ShaderRD::VariantDefine>::push_back((Vector<ShaderRD::VariantDefine>*)&local_258, (StringName*)&local_158);
      }
 else {
         auStack_150._0_8_ = local_248;
         Vector<ShaderRD::VariantDefine>::push_back((Vector<ShaderRD::VariantDefine>*)&local_258);
         LOCK();
         plVar20 = (long*)( lVar23 + -0x10 );
         *plVar20 = *plVar20 + -1;
         UNLOCK();
         if (*plVar20 == 0) {
            Memory::free_static((void*)( auStack_150._0_8_ + -0x10 ), false);
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
      local_158 = "\n#define USE_MULTIVIEW\n#define MODE_RENDER_DEPTH\n#define MODE_RENDER_NORMAL_ROUGHNESS\n";
      local_268 = 0;
      auStack_150._0_8_ = 0x56;
      String::parse_latin1((StrRange*)&local_268);
      String::operator +((String*)&local_260, (StrRange*)&local_270);
      local_158 = (char*)0x2;
      auStack_150._0_9_ = ZEXT89(0);
      String::utf8();
      lVar23 = local_248;
      if (local_248 == 0) {
         Vector<ShaderRD::VariantDefine>::push_back((Vector<ShaderRD::VariantDefine>*)&local_258, (StringName*)&local_158);
      }
 else {
         auStack_150._0_8_ = local_248;
         Vector<ShaderRD::VariantDefine>::push_back((Vector<ShaderRD::VariantDefine>*)&local_258);
         LOCK();
         plVar20 = (long*)( lVar23 + -0x10 );
         *plVar20 = *plVar20 + -1;
         UNLOCK();
         if (*plVar20 == 0) {
            Memory::free_static((void*)( auStack_150._0_8_ + -0x10 ), false);
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
      local_158 = "\n#define USE_MULTIVIEW\n#define MODE_RENDER_DEPTH\n#define MODE_RENDER_NORMAL_ROUGHNESS\n#define MODE_RENDER_VOXEL_GI\n";
      local_268 = 0;
      auStack_150._0_8_ = 0x73;
      String::parse_latin1((StrRange*)&local_268);
      String::operator +((String*)&local_260, (StrRange*)&local_270);
      local_158 = (char*)0x3;
      auStack_150._0_9_ = ZEXT89(0);
      String::utf8();
      lVar23 = local_248;
      if (local_248 == 0) {
         Vector<ShaderRD::VariantDefine>::push_back((Vector<ShaderRD::VariantDefine>*)&local_258, (StringName*)&local_158);
      }
 else {
         auStack_150._0_8_ = local_248;
         Vector<ShaderRD::VariantDefine>::push_back((Vector<ShaderRD::VariantDefine>*)&local_258);
         LOCK();
         plVar20 = (long*)( lVar23 + -0x10 );
         *plVar20 = *plVar20 + -1;
         UNLOCK();
         if (*plVar20 == 0) {
            Memory::free_static((void*)( auStack_150._0_8_ + -0x10 ), false);
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_270);
      if (bVar11) break;
      uVar18 = 0x14;
      local_158 = "\n#define UBERSHADER\n";
      bVar11 = true;
   }
;
   local_260 = 0;
   local_158 = "\n#define MODE_RENDER_DEPTH\n#define MODE_RENDER_MATERIAL\n";
   auStack_150._0_8_ = 0x38;
   String::parse_latin1((StrRange*)&local_260);
   local_158 = (char*)0x1;
   auStack_150._0_9_ = ZEXT89(0);
   String::utf8();
   if (local_248 == 0) {
      Vector<ShaderRD::VariantDefine>::push_back((Vector<ShaderRD::VariantDefine>*)&local_258, (StringName*)&local_158);
   }
 else {
      CowData<char>::_unref((CowData<char>*)auStack_150);
      lVar23 = local_248;
      auStack_150._0_8_ = local_248;
      Vector<ShaderRD::VariantDefine>::push_back((Vector<ShaderRD::VariantDefine>*)&local_258);
      if (lVar23 != 0) {
         LOCK();
         plVar20 = (long*)( lVar23 + -0x10 );
         *plVar20 = *plVar20 + -1;
         UNLOCK();
         if (*plVar20 == 0) {
            Memory::free_static((void*)( auStack_150._0_8_ + -0x10 ), false);
         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
   local_158 = "\n#define MODE_RENDER_DEPTH\n#define MODE_RENDER_SDF\n";
   local_260 = 0;
   auStack_150._0_8_ = 0x33;
   String::parse_latin1((StrRange*)&local_260);
   local_158 = (char*)0x1;
   auStack_150._0_9_ = ZEXT89(0);
   String::utf8();
   if (local_248 == 0) {
      Vector<ShaderRD::VariantDefine>::push_back((Vector<ShaderRD::VariantDefine>*)&local_258, (StringName*)&local_158);
   }
 else {
      CowData<char>::_unref((CowData<char>*)auStack_150);
      auStack_150._0_8_ = local_248;
      Vector<ShaderRD::VariantDefine>::push_back((Vector<ShaderRD::VariantDefine>*)&local_258);
      if (local_248 != 0) {
         LOCK();
         plVar20 = (long*)( local_248 + -0x10 );
         *plVar20 = *plVar20 + -1;
         UNLOCK();
         if (*plVar20 == 0) {
            Memory::free_static((void*)( auStack_150._0_8_ + -0x10 ), false);
         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
   local_68 = 0;
   local_158 = "\n#define UBERSHADER\n";
   auStack_150._0_8_ = 0x14;
   String::parse_latin1((StrRange*)&local_68);
   local_158 = "\n#define MODE_SEPARATE_SPECULAR\n";
   local_60 = 0;
   auStack_150._0_8_ = 0x20;
   String::parse_latin1((StrRange*)&local_60);
   local_158 = "\n#define USE_LIGHTMAP\n";
   local_58 = 0;
   auStack_150._0_8_ = 0x16;
   String::parse_latin1((StrRange*)&local_58);
   local_158 = "\n#define USE_MULTIVIEW\n";
   local_50 = 0;
   auStack_150._0_8_ = 0x17;
   String::parse_latin1((StrRange*)&local_50);
   local_158 = "\n#define MOTION_VECTORS\n";
   local_48 = 0;
   auStack_150._0_8_ = 0x18;
   String::parse_latin1((StrRange*)&local_48);
   auVar7._8_8_ = 0;
   auVar7._0_8_ = local_240._8_8_;
   local_240 = auVar7 << 0x40;
   iVar13 = CowData<String>::resize<false>((CowData<String>*)local_240, 5);
   if (iVar13 == 0) {
      lVar23 = 0;
      pSVar22 = (StrRange*)&local_68;
      do {
         if (local_240._0_8_ == 0) {
            lVar19 = 0;
            LAB_0010856b:in_R9 = "p_index";
            _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar23, lVar19, "p_index", "size()", "", false, false);
         }
 else {
            lVar19 = *(long*)( local_240._0_8_ + -8 );
            if (lVar19 <= lVar23) goto LAB_0010856b;
            CowData<String>::_copy_on_write((CowData<String>*)local_240);
            this(CowData<char32_t> * )(local_240._0_8_ + lVar23 * 8);
            if (*(long*)this != *(long*)pSVar22) {
               CowData<char32_t>::_ref(this, (CowData*)pSVar22);
            }

         }

         lVar23 = lVar23 + 1;
         pSVar22 = (StrRange*)( (CowData*)pSVar22 + 8 );
      }
 while ( lVar23 != 5 );
   }

   pSVar22 = (StrRange*)local_40;
   do {
      pSVar1 = pSVar22 + -8;
      pSVar22 = pSVar22 + -8;
      if (*(long*)pSVar1 != 0) {
         LOCK();
         plVar20 = (long*)( *(long*)pSVar1 + -0x10 );
         *plVar20 = *plVar20 + -1;
         UNLOCK();
         if (*plVar20 == 0) {
            lVar23 = *(long*)pSVar22;
            *(undefined8*)pSVar22 = 0;
            Memory::free_static((void*)( lVar23 + -0x10 ), false);
         }

      }

   }
 while ( pSVar22 != (StrRange*)&local_68 );
   uVar21 = 0;
   do {
      lVar23 = 0;
      local_268 = 0;
      local_158 = "";
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auStack_150._8_8_;
      auStack_150 = auVar4 << 0x40;
      String::parse_latin1((StrRange*)&local_268);
      do {
         if (( uVar21 >> ( (uint)lVar23 & 0x1f ) & 1 ) != 0) {
            if (local_240._0_8_ == 0) {
               lVar19 = 0;
               LAB_00108406:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar23, lVar19, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            lVar19 = *(long*)( local_240._0_8_ + -8 );
            if (lVar19 <= lVar23) goto LAB_00108406;
            String::operator +=((String*)&local_268, (String*)( local_240._0_8_ + lVar23 * 8 ));
         }

         lVar23 = lVar23 + 1;
      }
 while ( lVar23 != 5 );
      uVar14 = uVar21 >> 3 & 1;
      if (( ( uVar21 & 0x16 ) == 0 ) || ( iVar13 = 3 ),(char)uVar14 == '\0') {
         iVar13 = 1;
         if (( uVar21 & 0x16 ) == 0) {
            iVar13 = uVar14 * 2;
         }

      }

      local_158 = (char*)CONCAT44(local_158._4_4_, iVar13);
      auStack_150._0_9_ = ZEXT89(0);
      String::utf8();
      lVar23 = local_260;
      if (local_260 == 0) {
         Vector<ShaderRD::VariantDefine>::push_back((Vector<ShaderRD::VariantDefine>*)&local_258);
      }
 else {
         auStack_150._0_8_ = local_260;
         Vector<ShaderRD::VariantDefine>::push_back((Vector<ShaderRD::VariantDefine>*)&local_258);
         LOCK();
         plVar20 = (long*)( lVar23 + -0x10 );
         *plVar20 = *plVar20 + -1;
         UNLOCK();
         if (*plVar20 == 0) {
            Memory::free_static((void*)( auStack_150._0_8_ + -0x10 ), false);
         }

      }

      lVar23 = local_268;
      if (local_268 != 0) {
         LOCK();
         plVar20 = (long*)( local_268 + -0x10 );
         *plVar20 = *plVar20 + -1;
         UNLOCK();
         if (*plVar20 == 0) {
            local_268 = 0;
            Memory::free_static((void*)( lVar23 + -0x10 ), false);
         }

      }

      uVar21 = uVar21 + 1;
   }
 while ( uVar21 != 0x20 );
   ShaderRD::initialize((Vector*)( param_1 + 0x10 ), (String*)&local_258);
   cVar10 = ( **(code**)( *RendererCompositorRD::singleton + 0xa8 ) )();
   if (cVar10 != '\0') {
      ShaderRD::enable_group((int)(Vector*)( param_1 + 0x10 ));
   }

   CowData<String>::_unref((CowData<String>*)local_240);
   CowData<ShaderRD::VariantDefine>::_unref((CowData<ShaderRD::VariantDefine>*)&local_250);
   RendererRD::MaterialStorage::shader_set_data_request_function(plVar15, 1, _create_shader_funcs);
   RendererRD::MaterialStorage::material_set_data_request_function(plVar15, 1, _create_material_funcs);
   local_240 = (undefined1[16])0x0;
   local_230 = (undefined1[16])0x0;
   local_15c = 0;
   local_210 = (undefined1[16])0x0;
   local_200 = (undefined1[16])0x0;
   local_1e0 = (undefined1[16])0x0;
   local_1d0 = (undefined1[16])0x0;
   local_1b0 = (undefined1[16])0x0;
   local_1a0 = (undefined1[16])0x0;
   local_190 = __LC86;
   uStack_188 = _UNK_0013a898;
   local_178 = (undefined1[16])0x0;
   local_220 = _LC28;
   local_1f0 = _LC28;
   local_1c0 = _LC28;
   local_180 = 0;
   local_168 = 0;
   local_160 = 0;
   StringName::StringName((StringName*)&local_258, "MODEL_MATRIX", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x11;
   local_158 = "read_model_matrix";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "MODEL_NORMAL_MATRIX", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x13;
   local_158 = "model_normal_matrix";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "VIEW_MATRIX", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x10;
   local_158 = "read_view_matrix";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "INV_VIEW_MATRIX", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xf;
   local_158 = "inv_view_matrix";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "PROJECTION_MATRIX", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x11;
   local_158 = "projection_matrix";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "INV_PROJECTION_MATRIX", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x15;
   local_158 = "inv_projection_matrix";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "MODELVIEW_MATRIX", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 9;
   local_158 = "modelview";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "MODELVIEW_NORMAL_MATRIX", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x10;
   local_158 = "modelview_normal";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "MAIN_CAM_INV_VIEW_MATRIX", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x23;
   local_158 = "scene_data.main_cam_inv_view_matrix";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "VERTEX", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 6;
   local_158 = "vertex";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "NORMAL", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 6;
   local_158 = "normal";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "TANGENT", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 7;
   local_158 = "tangent";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "BINORMAL", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 8;
   local_158 = "binormal";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "POSITION", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 8;
   local_158 = "position";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "UV", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 9;
   local_158 = "uv_interp";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "UV2", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 10;
   local_158 = "uv2_interp";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "COLOR", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xc;
   local_158 = "color_interp";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "POINT_SIZE", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xc;
   local_158 = "gl_PointSize";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "INSTANCE_ID", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x10;
   local_158 = "gl_InstanceIndex";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "VERTEX_ID", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xe;
   local_158 = "gl_VertexIndex";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "ALPHA_SCISSOR_THRESHOLD", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x17;
   local_158 = "alpha_scissor_threshold";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "ALPHA_HASH_SCALE", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x10;
   local_158 = "alpha_hash_scale";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "ALPHA_ANTIALIASING_EDGE", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x17;
   local_158 = "alpha_antialiasing_edge";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "ALPHA_TEXTURE_COORDINATE", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x18;
   local_158 = "alpha_texture_coordinate";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "TIME", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xb;
   local_158 = "global_time";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "EXPOSURE", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x3d;
   local_158 = "(1.0 / scene_data_block.data.emissive_exposure_normalization)";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "PI", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x1e;
   local_158 = "3.1415926535897932384626433833";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "TAU", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x1e;
   local_158 = "6.2831853071795864769252867666";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "E", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x1e;
   local_158 = "2.7182818284590452353602874714";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "OUTPUT_IS_SRGB", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xe;
   local_158 = "SHADER_IS_SRGB";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "CLIP_SPACE_FAR", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x10;
   local_158 = "SHADER_SPACE_FAR";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "VIEWPORT_SIZE", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x12;
   local_158 = "read_viewport_size";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "FRAGCOORD", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xc;
   local_158 = "gl_FragCoord";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "FRONT_FACING", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xe;
   local_158 = "gl_FrontFacing";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "NORMAL_MAP", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 10;
   local_158 = "normal_map";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "NORMAL_MAP_DEPTH", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x10;
   local_158 = "normal_map_depth";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "ALBEDO", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 6;
   local_158 = "albedo";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "ALPHA", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 5;
   local_158 = "alpha";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "PREMUL_ALPHA_FACTOR", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xc;
   local_158 = "premul_alpha";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "METALLIC", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 8;
   local_158 = "metallic";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "SPECULAR", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 8;
   local_158 = "specular";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "ROUGHNESS", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 9;
   local_158 = "roughness";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "RIM", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 3;
   local_158 = "rim";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "RIM_TINT", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 8;
   local_158 = "rim_tint";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "CLEARCOAT", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 9;
   local_158 = "clearcoat";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "CLEARCOAT_ROUGHNESS", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x13;
   local_158 = "clearcoat_roughness";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "ANISOTROPY", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 10;
   local_158 = "anisotropy";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "ANISOTROPY_FLOW", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xf;
   local_158 = "anisotropy_flow";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "SSS_STRENGTH", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xc;
   local_158 = "sss_strength";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "SSS_TRANSMITTANCE_COLOR", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x13;
   local_158 = "transmittance_color";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "SSS_TRANSMITTANCE_DEPTH", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x13;
   local_158 = "transmittance_depth";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "SSS_TRANSMITTANCE_BOOST", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x13;
   local_158 = "transmittance_boost";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "BACKLIGHT", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 9;
   local_158 = "backlight";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "AO", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 2;
   local_158 = "ao";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "AO_LIGHT_AFFECT", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xf;
   local_158 = "ao_light_affect";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "EMISSION", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 8;
   local_158 = "emission";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "POINT_COORD", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xd;
   local_158 = "gl_PointCoord";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "INSTANCE_CUSTOM", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xf;
   local_158 = "instance_custom";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "SCREEN_UV", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 9;
   local_158 = "screen_uv";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "DEPTH", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xc;
   local_158 = "gl_FragDepth";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "FOG", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 3;
   local_158 = "fog";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "RADIANCE", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xf;
   local_158 = "custom_radiance";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "IRRADIANCE", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x11;
   local_158 = "custom_irradiance";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "BONE_INDICES", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xb;
   local_158 = "bone_attrib";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "BONE_WEIGHTS", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xd;
   local_158 = "weight_attrib";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "CUSTOM0", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xe;
   local_158 = "custom0_attrib";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "CUSTOM1", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xe;
   local_158 = "custom1_attrib";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "CUSTOM2", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xe;
   local_158 = "custom2_attrib";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "CUSTOM3", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xe;
   local_158 = "custom3_attrib";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "LIGHT_VERTEX", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xc;
   local_158 = "light_vertex";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "NODE_POSITION_WORLD", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x18;
   local_158 = "read_model_matrix[3].xyz";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "CAMERA_POSITION_WORLD", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x21;
   local_158 = "scene_data.inv_view_matrix[3].xyz";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "CAMERA_DIRECTION_WORLD", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x21;
   local_158 = "scene_data.inv_view_matrix[2].xyz";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "CAMERA_VISIBLE_LAYERS", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x20;
   local_158 = "scene_data.camera_visible_layers";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "NODE_POSITION_VIEW", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0x33;
   local_158 = "(scene_data.view_matrix * read_model_matrix)[3].xyz";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "VIEW_INDEX", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 9;
   local_158 = "ViewIndex";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "VIEW_MONO_LEFT", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 1;
   local_158 = "0";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "VIEW_RIGHT", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 1;
   local_158 = "1";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "EYE_OFFSET", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 10;
   local_158 = "eye_offset";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "VIEW", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 4;
   local_158 = "view";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "SPECULAR_AMOUNT", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xf;
   local_158 = "specular_amount";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "LIGHT_COLOR", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xb;
   local_158 = "light_color";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "LIGHT_IS_DIRECTIONAL", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xe;
   local_158 = "is_directional";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "LIGHT", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 5;
   local_158 = "light";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "ATTENUATION", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xb;
   local_158 = "attenuation";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "DIFFUSE_LIGHT", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xd;
   local_158 = "diffuse_light";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "SPECULAR_LIGHT", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, (StringName*)&local_258);
   auStack_150._0_8_ = 0xe;
   local_158 = "specular_light";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "NORMAL", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x14;
   local_158 = "#define NORMAL_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "TANGENT", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x15;
   local_158 = "#define TANGENT_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "BINORMAL", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 8;
   local_158 = "@TANGENT";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "RIM", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x17;
   local_158 = "#define LIGHT_RIM_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "RIM_TINT", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 4;
   local_158 = "@RIM";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "CLEARCOAT", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x1d;
   local_158 = "#define LIGHT_CLEARCOAT_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "CLEARCOAT_ROUGHNESS", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 10;
   local_158 = "@CLEARCOAT";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "ANISOTROPY", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x1e;
   local_158 = "#define LIGHT_ANISOTROPY_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "ANISOTROPY_FLOW", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0xb;
   local_158 = "@ANISOTROPY";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "AO", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   local_158 = "#define AO_USED\n";
   auStack_150._0_8_ = 0x10;
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "AO_LIGHT_AFFECT", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   local_158 = "#define AO_USED\n";
   auStack_150._0_8_ = 0x10;
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "UV", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x10;
   local_158 = "#define UV_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "UV2", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x11;
   local_158 = "#define UV2_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "BONE_INDICES", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x13;
   local_158 = "#define BONES_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "BONE_WEIGHTS", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x15;
   local_158 = "#define WEIGHTS_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "CUSTOM0", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x15;
   local_158 = "#define CUSTOM0_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "CUSTOM1", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x15;
   local_158 = "#define CUSTOM1_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "CUSTOM2", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x15;
   local_158 = "#define CUSTOM2_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "CUSTOM3", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x15;
   local_158 = "#define CUSTOM3_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "NORMAL_MAP", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x18;
   local_158 = "#define NORMAL_MAP_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "NORMAL_MAP_DEPTH", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0xb;
   local_158 = "@NORMAL_MAP";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "COLOR", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x13;
   local_158 = "#define COLOR_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "INSTANCE_CUSTOM", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x1f;
   local_158 = "#define ENABLE_INSTANCE_CUSTOM\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "POSITION", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x1a;
   local_158 = "#define OVERRIDE_POSITION\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "LIGHT_VERTEX", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x1a;
   local_158 = "#define LIGHT_VERTEX_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "PREMUL_ALPHA_FACTOR", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x1a;
   local_158 = "#define PREMUL_ALPHA_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "ALPHA_SCISSOR_THRESHOLD", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x1b;
   local_158 = "#define ALPHA_SCISSOR_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "ALPHA_HASH_SCALE", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x18;
   local_158 = "#define ALPHA_HASH_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "ALPHA_ANTIALIASING_EDGE", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x25;
   local_158 = "#define ALPHA_ANTIALIASING_EDGE_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "ALPHA_TEXTURE_COORDINATE", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x18;
   local_158 = "@ALPHA_ANTIALIASING_EDGE";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "SSS_STRENGTH", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x13;
   local_158 = "#define ENABLE_SSS\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "SSS_TRANSMITTANCE_DEPTH", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x1d;
   local_158 = "#define ENABLE_TRANSMITTANCE\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "BACKLIGHT", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x1d;
   local_158 = "#define LIGHT_BACKLIGHT_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "SCREEN_UV", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x17;
   local_158 = "#define SCREEN_UV_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "FOG", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x18;
   local_158 = "#define CUSTOM_FOG_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "RADIANCE", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x1d;
   local_158 = "#define CUSTOM_RADIANCE_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "IRRADIANCE", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x1f;
   local_158 = "#define CUSTOM_IRRADIANCE_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "MODEL_MATRIX", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1e8, (StringName*)&local_258);
   auStack_150._0_8_ = 0x1a;
   local_158 = "#define MODEL_MATRIX_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "skip_vertex_transform", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_218, (StringName*)&local_258);
   auStack_150._0_8_ = 0x1c;
   local_158 = "#define SKIP_TRANSFORM_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "world_vertex_coords", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_218, (StringName*)&local_258);
   auStack_150._0_8_ = 0x21;
   local_158 = "#define VERTEX_WORLD_COORDS_USED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "ensure_correct_normals", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_218, (StringName*)&local_258);
   auStack_150._0_8_ = 0x1f;
   local_158 = "#define ENSURE_CORRECT_NORMALS\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "cull_front", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_218, (StringName*)&local_258);
   local_158 = "#define DO_SIDE_CHECK\n";
   auStack_150._0_8_ = 0x16;
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "cull_disabled", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_218, (StringName*)&local_258);
   local_158 = "#define DO_SIDE_CHECK\n";
   auStack_150._0_8_ = 0x16;
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "particle_trails", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_218, (StringName*)&local_258);
   auStack_150._0_8_ = 0x1c;
   local_158 = "#define USE_PARTICLE_TRAILS\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "depth_prepass_alpha", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_218, (StringName*)&local_258);
   auStack_150._0_8_ = 0x1b;
   local_158 = "#define USE_OPAQUE_PREPASS\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_158, "rendering/shading/overrides/force_lambert_over_burley", false);
   ProjectSettings::get_setting_with_override((StringName*)&local_68);
   bVar11 = Variant::operator_cast_to_bool((Variant*)&local_68);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   if (!bVar11) {
      StringName::StringName((StringName*)&local_258, "diffuse_burley", false);
      pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_218, (StringName*)&local_258);
      auStack_150._0_8_ = 0x17;
      local_158 = "#define DIFFUSE_BURLEY\n";
      String::parse_latin1(pSVar22);
      if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
         StringName::unref();
      }

   }

   StringName::StringName((StringName*)&local_258, "diffuse_lambert_wrap", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_218, (StringName*)&local_258);
   auStack_150._0_8_ = 0x1d;
   local_158 = "#define DIFFUSE_LAMBERT_WRAP\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "diffuse_toon", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_218, (StringName*)&local_258);
   auStack_150._0_8_ = 0x15;
   local_158 = "#define DIFFUSE_TOON\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "sss_mode_skin", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_218, (StringName*)&local_258);
   auStack_150._0_8_ = 0x16;
   local_158 = "#define SSS_MODE_SKIN\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "specular_schlick_ggx", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_218, (StringName*)&local_258);
   auStack_150._0_8_ = 0x1d;
   local_158 = "#define SPECULAR_SCHLICK_GGX\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "specular_toon", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_218, (StringName*)&local_258);
   auStack_150._0_8_ = 0x16;
   local_158 = "#define SPECULAR_TOON\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "specular_disabled", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_218, (StringName*)&local_258);
   auStack_150._0_8_ = 0x1a;
   local_158 = "#define SPECULAR_DISABLED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "shadows_disabled", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_218, (StringName*)&local_258);
   auStack_150._0_8_ = 0x19;
   local_158 = "#define SHADOWS_DISABLED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "ambient_light_disabled", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_218, (StringName*)&local_258);
   auStack_150._0_8_ = 0x1f;
   local_158 = "#define AMBIENT_LIGHT_DISABLED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "shadow_to_opacity", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_218, (StringName*)&local_258);
   auStack_150._0_8_ = 0x1e;
   local_158 = "#define USE_SHADOW_TO_OPACITY\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "unshaded", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_218, (StringName*)&local_258);
   auStack_150._0_8_ = 0x16;
   local_158 = "#define MODE_UNSHADED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_158, "rendering/shading/overrides/force_vertex_shading", false);
   ProjectSettings::get_setting_with_override((StringName*)&local_68);
   bVar11 = Variant::operator_cast_to_bool((Variant*)&local_68);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   if (!bVar11) {
      StringName::StringName((StringName*)&local_258, "vertex_lighting", false);
      pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_218, (StringName*)&local_258);
      auStack_150._0_8_ = 0x1c;
      local_158 = "#define USE_VERTEX_LIGHTING\n";
      String::parse_latin1(pSVar22);
      if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
         StringName::unref();
      }

   }

   StringName::StringName((StringName*)&local_258, "debug_shadow_splits", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_218, (StringName*)&local_258);
   auStack_150._0_8_ = 0x1f;
   local_158 = "#define DEBUG_DRAW_PSSM_SPLITS\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_258, "fog_disabled", false);
   pSVar22 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_218, (StringName*)&local_258);
   auStack_150._0_8_ = 0x15;
   local_158 = "#define FOG_DISABLED\n";
   String::parse_latin1(pSVar22);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   auStack_150._0_8_ = 9;
   local_180 = _LC341;
   local_158 = "material.";
   String::parse_latin1((StrRange*)local_178);
   local_160 = 0xe;
   uStack_188 = _LC343;
   local_158 = "global_shader_uniforms.data";
   auStack_150._0_8_ = 0x1b;
   String::parse_latin1((StrRange*)( local_178 + 8 ));
   auStack_150._0_8_ = 0x3b;
   local_158 = "instances.data[instance_index_interp].instance_uniforms_ofs";
   String::parse_latin1((StrRange*)&local_168);
   uVar12 = ( **(code**)( *RendererCompositorRD::singleton + 0xa8 ) )();
   local_130 = 0;
   local_15c = CONCAT11(uVar12, (undefined1)local_15c);
   auStack_150 = (undefined1[16])0x0;
   local_140 = (undefined1[16])0x0;
   uVar16 = 1;
   if (5 < *(uint*)( hash_table_size_primes + ( local_220 & 0xffffffff ) * 4 )) {
      do {
         if (*(uint*)( hash_table_size_primes + ( local_220 & 0xffffffff ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar16 * 4 )) {
            local_130 = uVar16 & 0xffffffff;
            goto LAB_00107ae3;
         }

         uVar16 = uVar16 + 1;
      }
 while ( uVar16 != 0x1d );
      in_R9 = (char*)0x0;
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }

   LAB_00107ae3:if (local_220._4_4_ != 0) {
      for (puVar2 = (undefined8*)local_230._0_8_; puVar2 != (undefined8*)0x0; puVar2 = (undefined8*)*puVar2) {
         HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::insert((StringName*)&local_258, (StringName*)&local_158, (bool)( (char)puVar2 + '\x10' ));
      }

   }

   local_100 = 0;
   local_120 = (undefined1[16])0x0;
   local_110 = (undefined1[16])0x0;
   uVar16 = 1;
   if (5 < *(uint*)( hash_table_size_primes + ( local_1f0 & 0xffffffff ) * 4 )) {
      do {
         if (*(uint*)( hash_table_size_primes + ( local_1f0 & 0xffffffff ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar16 * 4 )) {
            local_100 = uVar16 & 0xffffffff;
            goto LAB_00107b99;
         }

         uVar16 = uVar16 + 1;
      }
 while ( uVar16 != 0x1d );
      in_R9 = (char*)0x0;
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }

   LAB_00107b99:if (( local_1f0._4_4_ != 0 ) && ( (long*)local_200._0_8_ != (long*)0x0 )) {
      plVar20 = (long*)local_200._0_8_;
      do {
         HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::insert((StringName*)&local_258, (String*)&local_128, (bool)( (char)plVar20 + '\x10' ));
         plVar20 = (long*)*plVar20;
      }
 while ( plVar20 != (long*)0x0 );
   }

   local_d0 = 0;
   local_f0 = (undefined1[16])0x0;
   local_e0 = (undefined1[16])0x0;
   uVar16 = 1;
   if (5 < *(uint*)( hash_table_size_primes + ( local_1c0 & 0xffffffff ) * 4 )) {
      do {
         if (*(uint*)( hash_table_size_primes + ( local_1c0 & 0xffffffff ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar16 * 4 )) {
            local_d0 = uVar16 & 0xffffffff;
            goto LAB_00107c59;
         }

         uVar16 = uVar16 + 1;
      }
 while ( uVar16 != 0x1d );
      in_R9 = (char*)0x0;
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }

   LAB_00107c59:if (( local_1c0._4_4_ != 0 ) && ( (long*)local_1d0._0_8_ != (long*)0x0 )) {
      plVar20 = (long*)local_1d0._0_8_;
      do {
         HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::insert((StringName*)&local_258, local_f8, (bool)( (char)plVar20 + '\x10' ));
         plVar20 = (long*)*plVar20;
      }
 while ( plVar20 != (long*)0x0 );
   }

   local_a0 = 0;
   local_c0 = (undefined1[16])0x0;
   local_b0 = (undefined1[16])0x0;
   uVar16 = 1;
   if (5 < *(uint*)( hash_table_size_primes + ( local_190 & 0xffffffff ) * 4 )) {
      do {
         if (*(uint*)( hash_table_size_primes + ( local_190 & 0xffffffff ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar16 * 4 )) {
            local_a0 = uVar16 & 0xffffffff;
            goto LAB_00107d1b;
         }

         uVar16 = uVar16 + 1;
      }
 while ( uVar16 != 0x1d );
      in_R9 = (char*)0x0;
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }

   LAB_00107d1b:if (( local_190._4_4_ != 0 ) && ( (long*)local_1a0._0_8_ != (long*)0x0 )) {
      plVar20 = (long*)local_1a0._0_8_;
      do {
         HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::insert((StringName*)&local_258, local_c8, (bool)( (char)plVar20 + '\x10' ));
         plVar20 = (long*)*plVar20;
      }
 while ( plVar20 != (long*)0x0 );
   }

   local_88 = 0;
   local_98 = uStack_188;
   local_90 = local_180;
   if (local_178._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)local_178);
   }

   local_80 = 0;
   if (local_178._8_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)( local_178 + 8 ));
   }

   local_78 = 0;
   if (local_168 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)&local_168);
   }

   local_70 = local_160;
   local_6c = local_15c;
   ShaderCompiler::initialize(param_1 + 0x188, (StringName*)&local_158);
   ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions((DefaultIdentifierActions*)&local_158);
   ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions((DefaultIdentifierActions*)&local_248);
   uVar18 = ( **(code**)( *plVar15 + 0x70 ) )(plVar15);
   *(undefined8*)( param_1 + 0x690 ) = uVar18;
   ( **(code**)( *plVar15 + 0x78 ) )(plVar15, uVar18);
   pcVar3 = *(code**)( *plVar15 + 0x88 );
   local_248 = 0;
   local_158 = "\n// Default 3D material shader (Forward+).\n\nshader_type spatial;\n\nvoid vertex() {\n\tROUGHNESS = 0.8;\n}\n\nvoid fragment() {\n\tALBEDO = vec3(0.6);\n\tROUGHNESS = 0.8;\n\tMETALLIC = 0.2;\n}\n";
   auStack_150._0_8_ = 0xb3;
   String::parse_latin1((StrRange*)&local_248);
   ( *pcVar3 )(plVar15, *(undefined8*)( param_1 + 0x690 ), (HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_248);
   uVar18 = ( **(code**)( *plVar15 + 200 ) )(plVar15);
   *(undefined8*)( param_1 + 0x698 ) = uVar18;
   ( **(code**)( *plVar15 + 0xd0 ) )(plVar15, uVar18);
   ( **(code**)( *plVar15 + 0xe8 ) )(plVar15, *(undefined8*)( param_1 + 0x698 ), *(undefined8*)( param_1 + 0x690 ));
   uVar16 = *(ulong*)( param_1 + 0x698 );
   if (( uVar16 != 0 ) && ( (uint)uVar16 < *(uint*)( (long)plVar15 + 0x26c ) )) {
      lVar23 = ( ( uVar16 & 0xffffffff ) % ( ulong ) * (uint*)( plVar15 + 0x4d ) ) * 0xc0 + *(long*)( plVar15[0x4b] + ( ( uVar16 & 0xffffffff ) / ( ulong ) * (uint*)( plVar15 + 0x4d ) ) * 8 );
      if (*(int*)( lVar23 + 0xb8 ) == (int)( uVar16 >> 0x20 )) {
         if (*(int*)( lVar23 + 0x18 ) == 1) {
            lVar23 = *(long*)( lVar23 + 8 );
            this_00 = *(ShaderData**)( lVar23 + 0xa8 );
            lVar19 = *(long*)( this_00 + 0x158 );
            if (lVar19 != 0) {
               lVar19 = ShaderData::_get_shader_variant(this_00, 0x10);
               this_00 = *(ShaderData**)( lVar23 + 0xa8 );
            }

            *(long*)( param_1 + 0x6c0 ) = lVar19;
            uVar18 = *(undefined8*)( lVar23 + 0xb0 );
            *(ShaderData**)( param_1 + 0x6f0 ) = this_00;
            *(undefined8*)( param_1 + 0x6e8 ) = uVar18;
            uVar18 = ( **(code**)( *plVar15 + 0x70 ) )(plVar15);
            *(undefined8*)( param_1 + 0x6a0 ) = uVar18;
            ( **(code**)( *plVar15 + 0x78 ) )(plVar15, uVar18);
            pcVar3 = *(code**)( *plVar15 + 0x88 );
            local_248 = 0;
            local_158 = "\n// 3D editor Overdraw debug draw mode shader (Forward+).\n\nshader_type spatial;\n\nrender_mode blend_add, unshaded, fog_disabled;\n\nvoid fragment() {\n\tALBEDO = vec3(0.4, 0.8, 0.8);\n\tALPHA = 0.1;\n}\n";
            auStack_150._0_8_ = 0xc2;
            String::parse_latin1((StrRange*)&local_248);
            ( *pcVar3 )(plVar15, *(undefined8*)( param_1 + 0x6a0 ), (HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_248);
            uVar18 = ( **(code**)( *plVar15 + 200 ) )(plVar15);
            *(undefined8*)( param_1 + 0x6a8 ) = uVar18;
            ( **(code**)( *plVar15 + 0xd0 ) )(plVar15, uVar18);
            ( **(code**)( *plVar15 + 0xe8 ) )(plVar15, *(undefined8*)( param_1 + 0x6a8 ), *(undefined8*)( param_1 + 0x6a0 ));
            uVar16 = *(ulong*)( param_1 + 0x6a8 );
            if (( uVar16 != 0 ) && ( (uint)uVar16 < *(uint*)( (long)plVar15 + 0x26c ) )) {
               lVar23 = ( ( uVar16 & 0xffffffff ) % ( ulong ) * (uint*)( plVar15 + 0x4d ) ) * 0xc0 + *(long*)( plVar15[0x4b] + ( ( uVar16 & 0xffffffff ) / ( ulong ) * (uint*)( plVar15 + 0x4d ) ) * 8 );
               if (*(int*)( lVar23 + 0xb8 ) == (int)( uVar16 >> 0x20 )) {
                  if (*(int*)( lVar23 + 0x18 ) == 1) {
                     uVar18 = *(undefined8*)( *(long*)( lVar23 + 8 ) + 0xa8 );
                     *(undefined8*)( param_1 + 0x6f8 ) = *(undefined8*)( *(long*)( lVar23 + 8 ) + 0xb0 );
                     lVar23 = *plVar15;
                     *(undefined8*)( param_1 + 0x700 ) = uVar18;
                     uVar18 = ( **(code**)( lVar23 + 0x70 ) )(plVar15);
                     *(undefined8*)( param_1 + 0x6b0 ) = uVar18;
                     ( **(code**)( *plVar15 + 0x78 ) )(plVar15, uVar18);
                     pcVar3 = *(code**)( *plVar15 + 0x88 );
                     local_248 = 0;
                     local_158 = "\n// 3D debug shadow splits mode shader (Forward+).\n\nshader_type spatial;\n\nrender_mode debug_shadow_splits, fog_disabled;\n\nvoid fragment() {\n\tALBEDO = vec3(1.0, 1.0, 1.0);\n}\n";
                     auStack_150._0_8_ = 0xad;
                     String::parse_latin1((StrRange*)&local_248);
                     ( *pcVar3 )(plVar15, *(undefined8*)( param_1 + 0x6b0 ), (HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_248);
                     uVar18 = ( **(code**)( *plVar15 + 200 ) )(plVar15);
                     *(undefined8*)( param_1 + 0x6b8 ) = uVar18;
                     ( **(code**)( *plVar15 + 0xd0 ) )(plVar15, uVar18);
                     ( **(code**)( *plVar15 + 0xe8 ) )(plVar15, *(undefined8*)( param_1 + 0x6b8 ), *(undefined8*)( param_1 + 0x6b0 ));
                     uVar16 = *(ulong*)( param_1 + 0x6b8 );
                     if (( uVar16 != 0 ) && ( (uint)uVar16 < *(uint*)( (long)plVar15 + 0x26c ) )) {
                        lVar23 = ( ( uVar16 & 0xffffffff ) % ( ulong ) * (uint*)( plVar15 + 0x4d ) ) * 0xc0 + *(long*)( plVar15[0x4b] + ( ( uVar16 & 0xffffffff ) / ( ulong ) * (uint*)( plVar15 + 0x4d ) ) * 8 );
                        if (*(int*)( lVar23 + 0xb8 ) == (int)( uVar16 >> 0x20 )) {
                           if (*(int*)( lVar23 + 0x18 ) == 1) {
                              uVar18 = *(undefined8*)( *(long*)( lVar23 + 8 ) + 0xb0 );
                              *(undefined8*)( param_1 + 0x710 ) = *(undefined8*)( *(long*)( lVar23 + 8 ) + 0xa8 );
                              *(undefined8*)( param_1 + 0x708 ) = uVar18;
                              uVar18 = RenderingDevice::get_singleton();
                              auVar8._8_8_ = 0;
                              auVar8._0_8_ = auStack_150._8_8_;
                              auStack_150 = auVar8 << 0x40;
                              uVar18 = RenderingDevice::storage_buffer_create(uVar18, 0x100, (StringName*)&local_158, 0);
                              *(undefined8*)( param_1 + 0x6d0 ) = uVar18;
                              uVar18 = auStack_150._0_8_;
                              if (auStack_150._0_8_ != 0) {
                                 LOCK();
                                 plVar15 = (long*)( auStack_150._0_8_ + -0x10 );
                                 *plVar15 = *plVar15 + -1;
                                 UNLOCK();
                                 if (*plVar15 == 0) {
                                    auVar6._8_8_ = 0;
                                    auVar6._0_8_ = auStack_150._8_8_;
                                    auStack_150 = auVar6 << 0x40;
                                    Memory::free_static((void*)( uVar18 + -0x10 ), false);
                                 }

                              }

                              uVar18 = _LC351;
                              auVar9._8_8_ = 0;
                              auVar9._0_8_ = local_240._8_8_;
                              local_240 = auVar9 << 0x40;
                              auStack_150._0_8_ = auStack_150._1_8_ << 8;
                              auStack_150._8_8_ = *(undefined8*)( param_1 + 0x6d0 );
                              local_140._8_8_ = 0;
                              local_158 = (char*)_LC351;
                              iVar13 = CowData<RenderingDevice::Uniform>::resize<false>((CowData<RenderingDevice::Uniform>*)local_240, 1);
                              if (iVar13 == 0) {
                                 if (local_240._0_8_ == 0) {
                                    lVar19 = -1;
                                    lVar23 = 0;
                                 }
 else {
                                    lVar23 = *(long*)( local_240._0_8_ + -8 );
                                    lVar19 = lVar23 + -1;
                                    if (-1 < lVar19) {
                                       CowData<RenderingDevice::Uniform>::_copy_on_write((CowData<RenderingDevice::Uniform>*)local_240);
                                       puVar2 = (undefined8*)( local_240._0_8_ + lVar19 * 0x28 );
                                       *puVar2 = uVar18;
                                       *(undefined1*)( puVar2 + 1 ) = 0;
                                       puVar2[2] = auStack_150._8_8_;
                                       if (puVar2[4] != 0) {
                                          CowData<RID>::_ref((CowData<RID>*)( puVar2 + 4 ), (CowData*)( local_140 + 8 ));
                                       }

                                       goto LAB_001082ec;
                                    }

                                 }

                                 _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar19, lVar23, "p_index", "size()", "", false, false);
                              }
 else {
                                 _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
                              }

                              LAB_001082ec:uVar18 = RenderingDevice::get_singleton();
                              uVar18 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>(uVar18, (HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_248, *(undefined8*)( param_1 + 0x6c0 ), 2, 0);
                              *(undefined8*)( param_1 + 0x6d8 ) = uVar18;
                              CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)local_240);
                              auVar7 = local_140;
                              local_140._0_8_ = local_140._5_8_ << 0x28;
                              local_158 = (char*)__LC354;
                              auStack_150._8_8_ = _LC352;
                              auStack_150._0_8_ = _UNK_0013a8a8;
                              local_140._8_4_ = 0x3f800000;
                              local_140._13_3_ = auVar7._13_3_;
                              local_140[0xc] = 1;
                              local_130 = 4;
                              local_128 = 0x260ad78ec;
                              auVar5[0xf] = 0;
                              auVar5._0_15_ = local_120._1_15_;
                              local_120 = auVar5 << 8;
                              pSVar17 = (SamplerState*)RenderingDevice::get_singleton();
                              uVar18 = RenderingDevice::sampler_create(pSVar17);
                              *(undefined8*)( param_1 + 0x6e0 ) = uVar18;
                              if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
                                 return;
                              }

                              /* WARNING: Subroutine does not return */
                              __stack_chk_fail();
                           }

                        }
 else if (*(int*)( lVar23 + 0xb8 ) + 0x80000000U < 0x7fffffff) {
                           _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, lVar23);
                        }

                     }

                  }

               }
 else if (*(int*)( lVar23 + 0xb8 ) + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, plVar15[0x4b]);
               }

            }

         }

      }
 else if (*(int*)( lVar23 + 0xb8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, in_R9);
      }

   }

   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}
/* PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey,
   RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData, void
   (RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey)>::_add_new_pipelines_to_map()
   [clone .isra.0] */void PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey)>::_add_new_pipelines_to_map(PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey)> *this) {
   long *plVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   uint uVar4;
   CowData<unsigned_int> *pCVar5;
   ulong uVar6;
   undefined8 uVar7;
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
   Element *pEVar34;
   int iVar35;
   uint uVar36;
   Element *pEVar37;
   Element *pEVar38;
   Element *pEVar39;
   Element *pEVar40;
   long lVar41;
   ulong uVar42;
   ulong uVar43;
   long lVar44;
   ulong uVar45;
   Element *pEVar46;
   Element *pEVar47;
   long *plVar48;
   Element *pEVar49;
   Element *pEVar50;
   ulong uVar51;
   uint uVar52;
   uint uVar53;
   uint uVar54;
   uint uVar55;
   uint *puVar56;
   long lVar57;
   uint *puVar58;
   long *in_FS_OFFSET;
   bool bVar59;
   uint *local_58;
   uint *local_50;
   if ((char)*in_FS_OFFSET == '\0') {
      lVar44 = *in_FS_OFFSET;
      *in_FS_OFFSET = 0;
      *(char*)in_FS_OFFSET = '\x01';
      __cxa_thread_atexit(Vector<unsigned_int>::~Vector, lVar44, &__dso_handle);
   }

   lVar44 = *in_FS_OFFSET;
   if (( lVar44 != 0 ) && ( *(long*)( lVar44 + -8 ) != 0 )) {
      LOCK();
      plVar1 = (long*)( lVar44 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar44 = *in_FS_OFFSET;
         *in_FS_OFFSET = 0;
         Memory::free_static((void*)( lVar44 + -0x10 ), false);
      }
 else {
         *in_FS_OFFSET = 0;
      }

   }

   iVar35 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x50 ));
   if (iVar35 == 0) {
      uVar54 = *(uint*)( this + 0x40 );
      puVar56 = *(uint**)( this + 0x48 );
      puVar58 = puVar56 + (ulong)uVar54 * 4;
      if (puVar56 != puVar58) {
         pCVar5 = (CowData<unsigned_int>*)*in_FS_OFFSET;
         do {
            pEVar40 = *(Element**)( this + 0x28 );
            if (pEVar40 == (Element*)0x0) {
               pEVar40 = (Element*)operator_new(0x40, DefaultAllocator::alloc);
               *(undefined1(*) [16])( pEVar40 + 0x20 ) = (undefined1[16])0x0;
               pEVar37 = *(Element**)( this + 0x30 );
               *(undefined4*)( pEVar40 + 0x30 ) = 0;
               *(undefined8*)( pEVar40 + 0x38 ) = 0;
               *(Element**)( this + 0x28 ) = pEVar40;
               *(Element**)( pEVar40 + 0x18 ) = pEVar37;
               *(Element**)( pEVar40 + 8 ) = pEVar37;
               *(Element**)( pEVar40 + 0x10 ) = pEVar37;
               pEVar46 = *(Element**)( this + 0x30 );
               *(undefined4*)pEVar40 = 1;
               uVar54 = *puVar56;
               pEVar49 = pEVar37;
               if (pEVar37 != pEVar46) goto LAB_001088d9;
            }
 else {
               pEVar37 = *(Element**)( pEVar40 + 0x10 );
               pEVar46 = *(Element**)( this + 0x30 );
               uVar54 = *puVar56;
               pEVar49 = pEVar37;
               if (pEVar37 != pEVar46) {
                  LAB_001088d9:do {
                     if (uVar54 < *(uint*)( pEVar37 + 0x30 )) {
                        pEVar37 = *(Element**)( pEVar37 + 0x10 );
                     }
 else {
                        if (uVar54 <= *(uint*)( pEVar37 + 0x30 )) goto LAB_00108a26;
                        pEVar37 = *(Element**)( pEVar37 + 8 );
                     }

                  }
 while ( pEVar46 != pEVar37 );
                  do {
                     pEVar37 = pEVar49;
                     if (uVar54 < *(uint*)( pEVar37 + 0x30 )) {
                        pEVar49 = *(Element**)( pEVar37 + 0x10 );
                     }
 else {
                        if (uVar54 <= *(uint*)( pEVar37 + 0x30 )) {
                           *(undefined8*)( pEVar37 + 0x38 ) = 0;
                           goto LAB_00108a26;
                        }

                        pEVar49 = *(Element**)( pEVar37 + 8 );
                     }

                     pEVar40 = pEVar37;
                  }
 while ( pEVar46 != pEVar49 );
               }

            }

            pEVar37 = (Element*)operator_new(0x40, DefaultAllocator::alloc);
            uVar54 = *puVar56;
            *(Element**)( pEVar37 + 0x18 ) = pEVar40;
            *(undefined1(*) [16])( pEVar37 + 0x20 ) = (undefined1[16])0x0;
            pEVar46 = *(Element**)( this + 0x30 );
            *(undefined4*)pEVar37 = 0;
            *(uint*)( pEVar37 + 0x30 ) = uVar54;
            *(undefined8*)( pEVar37 + 0x38 ) = 0;
            *(Element**)( pEVar37 + 8 ) = pEVar46;
            *(Element**)( pEVar37 + 0x10 ) = pEVar46;
            if (( *(Element**)( this + 0x28 ) == pEVar40 ) || ( *puVar56 < *(uint*)( pEVar40 + 0x30 ) )) {
               *(Element**)( pEVar40 + 0x10 ) = pEVar37;
               pEVar49 = *(Element**)( this + 0x30 );
               pEVar47 = *(Element**)( pEVar37 + 0x10 );
               pEVar50 = *(Element**)( this + 0x28 );
               bVar59 = pEVar49 == pEVar46;
               pEVar34 = pEVar46;
               pEVar46 = pEVar47;
               if (bVar59) {
                  pEVar39 = pEVar40;
                  pEVar38 = pEVar40;
                  if (pEVar37 == *(Element**)( pEVar40 + 8 )) goto LAB_001089b0;
                  goto LAB_001089bd;
               }

               LAB_00108ef8:do {
                  pEVar39 = pEVar34;
                  pEVar34 = *(Element**)( pEVar39 + 0x10 );
               }
 while ( *(Element**)( pEVar39 + 0x10 ) != pEVar49 );
            }
 else {
               *(Element**)( pEVar40 + 8 ) = pEVar37;
               pEVar49 = *(Element**)( this + 0x30 );
               pEVar50 = *(Element**)( this + 0x28 );
               pEVar38 = pEVar40;
               pEVar34 = *(Element**)( pEVar37 + 8 );
               pEVar47 = pEVar46;
               if (*(Element**)( pEVar37 + 8 ) != pEVar49) goto LAB_00108ef8;
               LAB_001089b0:do {
                  pEVar39 = *(Element**)( pEVar38 + 0x18 );
                  bVar59 = *(Element**)( pEVar39 + 8 ) == pEVar38;
                  pEVar38 = pEVar39;
                  pEVar46 = pEVar47;
               }
 while ( bVar59 );
               LAB_001089bd:if (pEVar50 == pEVar39) {
                  pEVar39 = (Element*)0x0;
               }

            }

            *(Element**)( pEVar37 + 0x20 ) = pEVar39;
            if (pEVar46 == *(Element**)( this + 0x30 )) {
               pEVar46 = pEVar37;
               pEVar49 = pEVar40;
               if (pEVar37 == *(Element**)( pEVar40 + 0x10 )) {
                  do {
                     pEVar40 = *(Element**)( pEVar49 + 0x18 );
                     bVar59 = *(Element**)( pEVar40 + 0x10 ) == pEVar49;
                     pEVar46 = pEVar49;
                     pEVar49 = pEVar40;
                  }
 while ( bVar59 );
               }

               if (*(Element**)( this + 0x28 ) != pEVar46) goto LAB_001089ec;
               *(undefined8*)( pEVar37 + 0x28 ) = 0;
               if (pEVar39 != (Element*)0x0) goto LAB_001089f5;
            }
 else {
               do {
                  pEVar40 = pEVar46;
                  pEVar46 = *(Element**)( pEVar40 + 8 );
               }
 while ( *(Element**)( this + 0x30 ) != *(Element**)( pEVar40 + 8 ) );
               LAB_001089ec:*(Element**)( pEVar37 + 0x28 ) = pEVar40;
               if (pEVar39 != (Element*)0x0) {
                  LAB_001089f5:*(Element**)( pEVar39 + 0x28 ) = pEVar37;
                  pEVar40 = *(Element**)( pEVar37 + 0x28 );
                  if (pEVar40 == (Element*)0x0) goto LAB_00108a06;
               }

               *(Element**)( pEVar40 + 0x20 ) = pEVar37;
            }

            LAB_00108a06:*(int*)( this + 0x38 ) = *(int*)( this + 0x38 ) + 1;
            RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::_insert_rb_fix((RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>*)( this + 0x28 ), pEVar37);
            uVar54 = *puVar56;
            LAB_00108a26:*(undefined8*)( pEVar37 + 0x38 ) = *(undefined8*)( puVar56 + 2 );
            if (in_FS_OFFSET[1] == 0) {
               lVar44 = 1;
            }
 else {
               lVar44 = *(long*)( in_FS_OFFSET[1] + -8 ) + 1;
            }

            iVar35 = CowData<unsigned_int>::resize<false>(pCVar5, lVar44);
            if (iVar35 == 0) {
               if (in_FS_OFFSET[1] == 0) {
                  lVar57 = -1;
                  lVar44 = 0;
               }
 else {
                  lVar44 = *(long*)( in_FS_OFFSET[1] + -8 );
                  lVar57 = lVar44 + -1;
                  if (-1 < lVar57) {
                     CowData<unsigned_int>::_copy_on_write(pCVar5);
                     *(uint*)( in_FS_OFFSET[1] + lVar57 * 4 ) = uVar54;
                     goto LAB_00108a84;
                  }

               }

               _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar57, lVar44, "p_index", "size()", "", false, false);
            }
 else {
               _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
            }

            LAB_00108a84:puVar56 = puVar56 + 4;
         }
 while ( puVar58 != puVar56 );
         uVar54 = *(uint*)( this + 0x40 );
      }

      if (uVar54 != 0) {
         *(undefined4*)( this + 0x40 ) = 0;
      }

      pthread_mutex_unlock((pthread_mutex_t*)( this + 0x50 ));
      iVar35 = pthread_mutex_lock((pthread_mutex_t*)( this + 0xc0 ));
      if (iVar35 == 0) {
         pCVar5 = (CowData<unsigned_int>*)*in_FS_OFFSET;
         CowData<unsigned_int>::_copy_on_write(pCVar5);
         local_58 = (uint*)*in_FS_OFFSET;
         CowData<unsigned_int>::_copy_on_write(pCVar5);
         local_50 = (uint*)*in_FS_OFFSET;
         if (local_50 != (uint*)0x0) {
            local_50 = local_50 + *(long*)( local_50 + -2 );
         }

         if (local_58 != local_50) {
            lVar44 = *(long*)( this + 0x98 );
            do {
               if (( lVar44 != 0 ) && ( *(int*)( this + 0xbc ) != 0 )) {
                  uVar54 = *local_58;
                  uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xb8 ) * 4 );
                  uVar6 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0xb8 ) * 8 );
                  uVar36 = ( uVar54 >> 0x10 ^ uVar54 ) * -0x7a143595;
                  uVar36 = ( uVar36 ^ uVar36 >> 0xd ) * -0x3d4d51cb;
                  uVar55 = uVar36 ^ uVar36 >> 0x10;
                  if (uVar36 == uVar36 >> 0x10) {
                     uVar55 = 1;
                     uVar42 = uVar6;
                  }
 else {
                     uVar42 = uVar55 * uVar6;
                  }

                  uVar45 = CONCAT44(0, uVar4);
                  lVar57 = *(long*)( this + 0xa0 );
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = uVar45;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = uVar42;
                  lVar41 = SUB168(auVar8 * auVar21, 8);
                  uVar36 = *(uint*)( lVar57 + lVar41 * 4 );
                  uVar53 = SUB164(auVar8 * auVar21, 8);
                  if (uVar36 != 0) {
                     uVar52 = 0;
                     while (( uVar55 != uVar36 || ( uVar54 != *(uint*)( *(long*)( lVar44 + lVar41 * 8 ) + 0x10 ) ) )) {
                        uVar52 = uVar52 + 1;
                        auVar9._8_8_ = 0;
                        auVar9._0_8_ = ( uVar53 + 1 ) * uVar6;
                        auVar22._8_8_ = 0;
                        auVar22._0_8_ = uVar45;
                        lVar41 = SUB168(auVar9 * auVar22, 8);
                        uVar36 = *(uint*)( lVar57 + lVar41 * 4 );
                        uVar53 = SUB164(auVar9 * auVar22, 8);
                        if (( uVar36 == 0 ) || ( auVar10._8_8_ = 0 ),auVar10._0_8_ = uVar36 * uVar6,auVar23._8_8_ = 0,auVar23._0_8_ = uVar45,auVar11._8_8_ = 0,auVar11._0_8_ = ( ( uVar4 + uVar53 ) - SUB164(auVar10 * auVar23, 8) ) * uVar6,auVar24._8_8_ = 0,auVar24._0_8_ = uVar45,SUB164(auVar11 * auVar24, 8) < uVar52) goto LAB_00108e39;
                     }
;
                     lVar41 = *(long*)( lVar44 + (ulong)uVar53 * 8 );
                     if (lVar41 != 0) {
                        uVar54 = *(uint*)( lVar41 + 0x10 );
                        uVar36 = ( uVar54 >> 0x10 ^ uVar54 ) * -0x7a143595;
                        uVar36 = ( uVar36 ^ uVar36 >> 0xd ) * -0x3d4d51cb;
                        uVar55 = uVar36 ^ uVar36 >> 0x10;
                        if (uVar36 == uVar36 >> 0x10) {
                           uVar55 = 1;
                           uVar42 = uVar6;
                        }
 else {
                           uVar42 = uVar55 * uVar6;
                        }

                        auVar12._8_8_ = 0;
                        auVar12._0_8_ = uVar45;
                        auVar25._8_8_ = 0;
                        auVar25._0_8_ = uVar42;
                        uVar42 = SUB168(auVar12 * auVar25, 8);
                        uVar36 = *(uint*)( lVar57 + uVar42 * 4 );
                        uVar51 = (ulong)SUB164(auVar12 * auVar25, 8);
                        if (uVar36 != 0) {
                           uVar53 = 0;
                           goto LAB_00108ce7;
                        }

                     }

                  }

               }

               LAB_00108e39:local_58 = local_58 + 1;
            }
 while ( local_50 != local_58 );
         }

         pthread_mutex_unlock((pthread_mutex_t*)( this + 0xc0 ));
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar35);
   LAB_00108ce7:auVar15._8_8_ = 0;
   auVar15._0_8_ = ( (int)uVar51 + 1 ) * uVar6;
   auVar28._8_8_ = 0;
   auVar28._0_8_ = uVar45;
   uVar43 = SUB168(auVar15 * auVar28, 8);
   uVar52 = SUB164(auVar15 * auVar28, 8);
   if (( uVar36 != uVar55 ) || ( uVar54 != *(uint*)( *(long*)( lVar44 + uVar42 * 8 ) + 0x10 ) )) goto LAB_00108ca8;
   puVar58 = (uint*)( lVar57 + uVar43 * 4 );
   uVar42 = (ulong)uVar52;
   uVar54 = *puVar58;
   if (( uVar54 != 0 ) && ( auVar16._8_8_ = 0 ),auVar16._0_8_ = uVar54 * uVar6,auVar29._8_8_ = 0,auVar29._0_8_ = uVar45,auVar17._8_8_ = 0,auVar17._0_8_ = ( ( uVar4 + uVar52 ) - SUB164(auVar16 * auVar29, 8) ) * uVar6,auVar30._8_8_ = 0,auVar30._0_8_ = uVar45,SUB164(auVar17 * auVar30, 8) != 0) {
      while (true) {
         puVar56 = (uint*)( lVar57 + uVar51 * 4 );
         *puVar58 = *puVar56;
         puVar2 = (undefined8*)( lVar44 + uVar43 * 8 );
         *puVar56 = uVar54;
         puVar3 = (undefined8*)( lVar44 + uVar51 * 8 );
         uVar7 = *puVar2;
         *puVar2 = *puVar3;
         *puVar3 = uVar7;
         auVar20._8_8_ = 0;
         auVar20._0_8_ = ( (int)uVar42 + 1 ) * uVar6;
         auVar33._8_8_ = 0;
         auVar33._0_8_ = uVar45;
         uVar43 = SUB168(auVar20 * auVar33, 8);
         puVar58 = (uint*)( lVar57 + uVar43 * 4 );
         uVar54 = *puVar58;
         uVar51 = uVar42;
         if (( uVar54 == 0 ) || ( auVar18._8_8_ = 0 ),auVar18._0_8_ = uVar54 * uVar6,auVar31._8_8_ = 0,auVar31._0_8_ = uVar45,auVar19._8_8_ = 0,auVar19._0_8_ = ( ( SUB164(auVar20 * auVar33, 8) + uVar4 ) - SUB164(auVar18 * auVar31, 8) ) * uVar6,auVar32._8_8_ = 0,auVar32._0_8_ = uVar45,SUB164(auVar19 * auVar32, 8) == 0) break;
         uVar42 = uVar43 & 0xffffffff;
      }
;
   }

   plVar1 = (long*)( lVar44 + uVar51 * 8 );
   *(undefined4*)( lVar57 + uVar51 * 4 ) = 0;
   plVar48 = (long*)*plVar1;
   if (*(long**)( this + 0xa8 ) == plVar48) {
      *(long*)( this + 0xa8 ) = *plVar48;
      plVar48 = (long*)*plVar1;
   }

   if (*(long**)( this + 0xb0 ) == plVar48) {
      *(long*)( this + 0xb0 ) = plVar48[1];
      plVar48 = (long*)*plVar1;
   }

   if ((long*)plVar48[1] != (long*)0x0) {
      *(long*)plVar48[1] = *plVar48;
      plVar48 = (long*)*plVar1;
   }

   if (*plVar48 != 0) {
      *(long*)( *plVar48 + 8 ) = plVar48[1];
      plVar48 = (long*)*plVar1;
   }

   Memory::free_static(plVar48, false);
   lVar44 = *(long*)( this + 0x98 );
   *(undefined8*)( lVar44 + uVar51 * 8 ) = 0;
   *(int*)( this + 0xbc ) = *(int*)( this + 0xbc ) + -1;
   goto LAB_00108e39;
   LAB_00108ca8:uVar36 = *(uint*)( lVar57 + uVar43 * 4 );
   uVar51 = uVar43 & 0xffffffff;
   uVar53 = uVar53 + 1;
   if (( uVar36 == 0 ) || ( auVar13._8_8_ = 0 ),auVar13._0_8_ = uVar36 * uVar6,auVar26._8_8_ = 0,auVar26._0_8_ = uVar45,auVar14._8_8_ = 0,auVar14._0_8_ = ( ( uVar4 + uVar52 ) - SUB164(auVar13 * auVar26, 8) ) * uVar6,auVar27._8_8_ = 0,auVar27._0_8_ = uVar45,uVar42 = uVar43,SUB164(auVar14 * auVar27, 8) < uVar53) goto LAB_00108e39;
   goto LAB_00108ce7;
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::set_code(String
   const&) */void RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::set_code(ShaderData *this, String *param_1) {
   uint uVar1;
   undefined8 *puVar2;
   ulong uVar3;
   ShaderData SVar4;
   int iVar5;
   ShaderData *pSVar6;
   undefined4 *puVar7;
   long *plVar8;
   long lVar9;
   undefined8 uVar10;
   CowData<char32_t> *this_00;
   long lVar11;
   undefined4 uVar12;
   void *pvVar13;
   long in_FS_OFFSET;
   bool bVar14;
   undefined4 local_1f0;
   undefined4 local_1ec;
   long local_1e8;
   undefined8 local_1e0;
   HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>> local_1d8[8];
   undefined1 local_1d0[16];
   undefined1 local_1c0[16];
   ulong local_1b0;
   HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>> local_1a8[8];
   undefined1 local_1a0[16];
   undefined1 local_190[16];
   ulong local_180;
   HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>> local_178[8];
   undefined1 local_170[16];
   undefined1 local_160[16];
   ulong local_150;
   HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>> local_148[8];
   undefined1 local_140[16];
   undefined1 local_130[16];
   ulong local_120;
   HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>> local_118[8];
   undefined1 local_110[16];
   undefined1 local_100[16];
   ulong local_f0;
   ShaderData *local_e8;
   undefined1 local_d8[8];
   undefined8 local_d0[2];
   long local_c0[2];
   long local_b0;
   undefined4 local_a8;
   CowData<char32_t> local_a0[8];
   undefined8 uStack_98;
   CowData<char32_t> local_90[24];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined8 local_58;
   undefined4 local_50;
   undefined2 local_4c;
   ShaderData local_4a;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x308 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x308 ), (CowData*)param_1);
   }

   *(undefined4*)( this + 0x300 ) = 0;
   if (( *(long*)( this + 0x18 ) != 0 ) && ( *(int*)( this + 0x3c ) != 0 )) {
      lVar11 = 0;
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x38 ) * 4 );
      if (uVar1 != 0) {
         do {
            if (*(int*)( *(long*)( this + 0x20 ) + lVar11 ) != 0) {
               *(int*)( *(long*)( this + 0x20 ) + lVar11 ) = 0;
               pvVar13 = *(void**)( *(long*)( this + 0x18 ) + lVar11 * 2 );
               if (*(long*)( (long)pvVar13 + 0x88 ) != 0) {
                  LOCK();
                  plVar8 = (long*)( *(long*)( (long)pvVar13 + 0x88 ) + -0x10 );
                  *plVar8 = *plVar8 + -1;
                  UNLOCK();
                  if (*plVar8 == 0) {
                     lVar9 = *(long*)( (long)pvVar13 + 0x88 );
                     *(undefined8*)( (long)pvVar13 + 0x88 ) = 0;
                     Memory::free_static((void*)( lVar9 + -0x10 ), false);
                  }

               }

               if (*(long*)( (long)pvVar13 + 0x80 ) != 0) {
                  LOCK();
                  plVar8 = (long*)( *(long*)( (long)pvVar13 + 0x80 ) + -0x10 );
                  *plVar8 = *plVar8 + -1;
                  UNLOCK();
                  if (*plVar8 == 0) {
                     lVar9 = *(long*)( (long)pvVar13 + 0x80 );
                     *(undefined8*)( (long)pvVar13 + 0x80 ) = 0;
                     Memory::free_static((void*)( lVar9 + -0x10 ), false);
                  }

               }

               CowData<String>::_unref((CowData<String>*)( (long)pvVar13 + 0x70 ));
               if (*(long*)( (long)pvVar13 + 0x40 ) != 0) {
                  LOCK();
                  plVar8 = (long*)( *(long*)( (long)pvVar13 + 0x40 ) + -0x10 );
                  *plVar8 = *plVar8 + -1;
                  UNLOCK();
                  if (*plVar8 == 0) {
                     lVar9 = *(long*)( (long)pvVar13 + 0x40 );
                     *(undefined8*)( (long)pvVar13 + 0x40 ) = 0;
                     Memory::free_static((void*)( lVar9 + -0x10 ), false);
                  }

               }

               if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar13 + 0x10 ) != 0 )) {
                  StringName::unref();
               }

               Memory::free_static(pvVar13, false);
               *(undefined8*)( *(long*)( this + 0x18 ) + lVar11 * 2 ) = 0;
            }

            lVar11 = lVar11 + 4;
         }
 while ( (ulong)uVar1 << 2 != lVar11 );
      }

      *(undefined4*)( this + 0x3c ) = 0;
      *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
   }

   pSVar6 = this + 0x160;
   do {
      LOCK();
      *(undefined8*)pSVar6 = 0;
      uVar3 = _LC28;
      UNLOCK();
      pSVar6 = pSVar6 + 8;
   }
 while ( this + 0x2e0 != pSVar6 );
   if (( *(long*)( this + 0x308 ) == 0 ) || ( *(uint*)( *(long*)( this + 0x308 ) + -8 ) < 2 )) goto LAB_00109261;
   local_1d0 = (undefined1[16])0x0;
   local_4c = 0;
   pSVar6 = this + 0x318;
   *(undefined8*)( this + 0x318 ) = _LC23;
   *(undefined2*)( this + 0x33c ) = 0;
   local_58 = uVar3;
   local_1b0 = uVar3;
   local_180 = uVar3;
   _local_a0 = (undefined1[16])0x0;
   for (int i = 0; i < 16; i++) {
      local_90[i] = (CowData<char32_t>)0;
   }

   local_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x324 ) = (undefined1[16])0x0;
   local_1c0 = (undefined1[16])0x0;
   local_1a0 = (undefined1[16])0x0;
   local_190 = (undefined1[16])0x0;
   local_170 = (undefined1[16])0x0;
   local_d0[0] = 0;
   local_c0[0] = 0;
   local_b0 = 0;
   local_a8 = 0;
   local_50 = 0;
   local_4a = (ShaderData)0x0;
   *(undefined4*)( this + 800 ) = 0;
   local_1f0 = 2;
   *(undefined2*)( this + 0x334 ) = 0;
   this[0x339] = (ShaderData)0x0;
   local_1ec = 1;
   local_160 = (undefined1[16])0x0;
   local_150 = uVar3;
   local_120 = uVar3;
   local_f0 = uVar3;
   local_140 = (undefined1[16])0x0;
   local_130 = (undefined1[16])0x0;
   local_110 = (undefined1[16])0x0;
   local_100 = (undefined1[16])0x0;
   local_e8 = (ShaderData*)0x0;
   StringName::StringName((StringName*)&local_1e8, "vertex", false);
   puVar7 = (undefined4*)HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>::operator [](local_1d8, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *puVar7 = 0;
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "fragment", false);
   puVar7 = (undefined4*)HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>::operator [](local_1d8, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *puVar7 = 1;
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "light", false);
   puVar7 = (undefined4*)HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>::operator [](local_1d8, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *puVar7 = 1;
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "blend_add", false);
   plVar8 = (long*)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>::operator [](local_1a8, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)pSVar6;
   *(undefined4*)( plVar8 + 1 ) = 1;
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "blend_mix", false);
   plVar8 = (long*)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>::operator [](local_1a8, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)pSVar6;
   *(undefined4*)( plVar8 + 1 ) = 0;
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "blend_sub", false);
   plVar8 = (long*)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>::operator [](local_1a8, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)pSVar6;
   *(undefined4*)( plVar8 + 1 ) = 2;
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "blend_mul", false);
   plVar8 = (long*)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>::operator [](local_1a8, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)pSVar6;
   *(undefined4*)( plVar8 + 1 ) = 3;
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "blend_premul_alpha", false);
   plVar8 = (long*)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>::operator [](local_1a8, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)pSVar6;
   *(undefined4*)( plVar8 + 1 ) = 5;
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "alpha_to_coverage", false);
   plVar8 = (long*)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>::operator [](local_1a8, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 800 );
   *(undefined4*)( plVar8 + 1 ) = 1;
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "alpha_to_coverage_and_one", false);
   plVar8 = (long*)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>::operator [](local_1a8, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 800 );
   *(undefined4*)( plVar8 + 1 ) = 2;
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "depth_draw_never", false);
   plVar8 = (long*)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>::operator [](local_1a8, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)&local_1ec;
   *(undefined4*)( plVar8 + 1 ) = 0;
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "depth_draw_opaque", false);
   plVar8 = (long*)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>::operator [](local_1a8, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)&local_1ec;
   *(undefined4*)( plVar8 + 1 ) = 1;
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "depth_draw_always", false);
   plVar8 = (long*)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>::operator [](local_1a8, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)&local_1ec;
   *(undefined4*)( plVar8 + 1 ) = 2;
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "depth_test_disabled", false);
   plVar8 = (long*)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>::operator [](local_1a8, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 0x31c );
   *(undefined4*)( plVar8 + 1 ) = 0;
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "cull_disabled", false);
   plVar8 = (long*)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>::operator [](local_1a8, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)&local_1f0;
   *(undefined4*)( plVar8 + 1 ) = 0;
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "cull_front", false);
   plVar8 = (long*)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>::operator [](local_1a8, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)&local_1f0;
   *(undefined4*)( plVar8 + 1 ) = 1;
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "cull_back", false);
   plVar8 = (long*)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>::operator [](local_1a8, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)&local_1f0;
   *(undefined4*)( plVar8 + 1 ) = 2;
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "unshaded", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_178, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 0x331 );
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "wireframe", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_178, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 0x330 );
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "particle_trails", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_178, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 0x32e );
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "world_vertex_coords", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_178, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 0x33d );
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "ALPHA", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_148, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 0x325 );
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "ALPHA_SCISSOR_THRESHOLD", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_148, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 0x327 );
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "ALPHA_HASH_SCALE", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_148, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 0x327 );
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "ALPHA_ANTIALIASING_EDGE", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_148, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 0x328 );
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "ALPHA_TEXTURE_COORDINATE", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_148, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 0x328 );
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "depth_prepass_alpha", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_178, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 0x329 );
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "SSS_STRENGTH", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_148, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 0x334 );
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "SSS_TRANSMITTANCE_DEPTH", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_148, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 0x335 );
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "DISCARD", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_148, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 0x32a );
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "TIME", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_148, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 0x339 );
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "ROUGHNESS", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_148, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 0x32b );
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "NORMAL", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_148, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 0x32c );
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "NORMAL_MAP", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_148, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 0x32f );
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "POINT_SIZE", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_148, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 0x324 );
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "POINT_COORD", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_148, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 0x324 );
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "TANGENT", false);
   pSVar6 = this + 0x32d;
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_148, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)pSVar6;
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "BINORMAL", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_148, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)pSVar6;
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "ANISOTROPY", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_148, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)pSVar6;
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "ANISOTROPY_FLOW", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_148, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)pSVar6;
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "MODELVIEW_MATRIX", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_118, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 0x33c );
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "PROJECTION_MATRIX", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_118, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 0x33c );
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "VERTEX", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_118, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 0x332 );
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1e8, "POSITION", false);
   plVar8 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_118, (StringName*)&local_1e8);
   bVar14 = StringName::configured != '\0';
   *plVar8 = (long)( this + 0x333 );
   if (( bVar14 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   local_e8 = this + 0x10;
   iVar5 = pthread_mutex_lock((pthread_mutex_t*)singleton_mutex);
   if (iVar5 != 0) {
      LAB_0010a56b:/* WARNING: Subroutine does not return */std::__throw_system_error(iVar5);
   }

   iVar5 = ShaderCompiler::compile(singleton + 0x188, 0, (CowData<char32_t>*)( this + 0x308 ), local_1d8, this + 8, local_d8);
   if (iVar5 == 0) {
      if (*(long*)( this + 0x158 ) == 0) {
         uVar10 = ShaderRD::version_create();
         *(undefined8*)( this + 0x158 ) = uVar10;
      }

      *(undefined4*)( this + 0x340 ) = local_1f0;
      this[0x33e] = local_50._3_1_;
      *(undefined2*)( this + 0x336 ) = local_4c;
      *(ulong*)( this + 0x310 ) = CONCAT44(*(undefined4*)( this + 0x31c ), local_1ec);
      this[0x338] = local_4a;
      *(ushort*)( this + 0x33a ) = CONCAT11(local_50._1_1_, local_50._2_1_);
      *(ushort*)( this + 0x32c ) = CONCAT11(this[0x32d], this[0x32f]) | CONCAT11(this[0x32f], this[0x32c]);
      ShaderRD::version_set_code(singleton + 0x10, *(undefined8*)( this + 0x158 ), local_90 + 0x10, local_a0, local_a0 + 8, local_90, local_d8);
      lVar11 = *(long*)( this + 0x2f8 );
      *(undefined4*)( this + 0x300 ) = local_a8;
      if (lVar11 != local_b0) {
         if (lVar11 != 0) {
            LOCK();
            plVar8 = (long*)( lVar11 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               lVar11 = *(long*)( this + 0x2f8 );
               *(undefined8*)( this + 0x2f8 ) = 0;
               Memory::free_static((void*)( lVar11 + -0x10 ), false);
            }
 else {
               *(undefined8*)( this + 0x2f8 ) = 0;
            }

         }

         if (local_b0 != 0) {
            plVar8 = (long*)( local_b0 + -0x10 );
            do {
               lVar11 = *plVar8;
               if (lVar11 == 0) goto LAB_0010a0a2;
               LOCK();
               lVar9 = *plVar8;
               bVar14 = lVar11 == lVar9;
               if (bVar14) {
                  *plVar8 = lVar11 + 1;
                  lVar9 = lVar11;
               }

               UNLOCK();
            }
 while ( !bVar14 );
            if (lVar9 != -1) {
               *(long*)( this + 0x2f8 ) = local_b0;
            }

         }

      }

      LAB_0010a0a2:if (( *(long*)( this + 0x2e8 ) != local_c0[0] ) && ( CowData<ShaderCompiler::GeneratedCode::Texture>::_unref((CowData<ShaderCompiler::GeneratedCode::Texture>*)( this + 0x2e8 )),local_c0[0] != 0 )) {
         plVar8 = (long*)( local_c0[0] + -0x10 );
         do {
            lVar11 = *plVar8;
            if (lVar11 == 0) goto LAB_0010a0f8;
            LOCK();
            lVar9 = *plVar8;
            bVar14 = lVar11 == lVar9;
            if (bVar14) {
               *plVar8 = lVar11 + 1;
               lVar9 = lVar11;
            }

            UNLOCK();
         }
 while ( !bVar14 );
         if (lVar9 != -1) {
            *(long*)( this + 0x2e8 ) = local_c0[0];
         }

      }

      LAB_0010a0f8:iVar5 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x130 ));
      if (iVar5 != 0) goto LAB_0010a56b;
      for (puVar2 = *(undefined8**)( this + 0x118 ); puVar2 != (undefined8*)0x0; puVar2 = (undefined8*)*puVar2) {
         WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
      }

      pthread_mutex_unlock((pthread_mutex_t*)( this + 0x130 ));
      PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey)>::_add_new_pipelines_to_map((PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey)>*)( this + 0x70 ));
      if (*(long*)( this + 0x98 ) != 0) {
         lVar11 = *(long*)( *(long*)( this + 0x98 ) + 0x10 );
         if (lVar11 != *(long*)( this + 0xa0 )) {
            do {
               lVar9 = lVar11;
               lVar11 = *(long*)( lVar9 + 0x10 );
            }
 while ( *(long*)( this + 0xa0 ) != *(long*)( lVar9 + 0x10 ) );
            do {
               local_1e0 = *(undefined8*)( lVar9 + 0x38 );
               uVar10 = RenderingDevice::get_singleton();
               RenderingDevice::free(uVar10, local_1e0);
               lVar9 = *(long*)( lVar9 + 0x20 );
            }
 while ( lVar9 != 0 );
         }

      }

      RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::clear((RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>*)( this + 0x98 ));
      RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>::clear((RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>*)( this + 0xe8 ));
      if (*(int*)( this + 800 ) == 0) {
         uVar12 = *(undefined4*)( this + 0x318 );
      }
 else {
         *(undefined4*)( this + 0x318 ) = 4;
         uVar12 = 4;
      }

      SVar4 = (ShaderData)RendererRD::MaterialStorage::ShaderData::blend_mode_uses_blend_alpha(uVar12);
      this[0x326] = SVar4;
      pthread_mutex_unlock((pthread_mutex_t*)singleton_mutex);
      ShaderCompiler::IdentifierActions::~IdentifierActions((IdentifierActions*)local_1d8);
      if ((void*)local_78._0_8_ != (void*)0x0) {
         pvVar13 = (void*)local_78._0_8_;
         if (local_58._4_4_ != 0) {
            uVar1 = *(uint*)( hash_table_size_primes + ( local_58 & 0xffffffff ) * 4 );
            if (uVar1 == 0) {
               local_58 = local_58 & 0xffffffff;
               local_68 = (undefined1[16])0x0;
            }
 else {
               lVar11 = 0;
               do {
                  if (*(int*)( local_78._8_8_ + lVar11 ) != 0) {
                     pvVar13 = *(void**)( (long)pvVar13 + lVar11 * 2 );
                     *(int*)( local_78._8_8_ + lVar11 ) = 0;
                     CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar13 + 0x18 ));
                     CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar13 + 0x10 ));
                     Memory::free_static(pvVar13, false);
                     *(undefined8*)( local_78._0_8_ + lVar11 * 2 ) = 0;
                     pvVar13 = (void*)local_78._0_8_;
                  }

                  lVar11 = lVar11 + 4;
               }
 while ( lVar11 != (ulong)uVar1 * 4 );
               local_58 = local_58 & 0xffffffff;
               local_68 = (undefined1[16])0x0;
               if (pvVar13 == (void*)0x0) goto LAB_0010a2b2;
            }

         }

         Memory::free_static(pvVar13, false);
         Memory::free_static((void*)local_78._8_8_, false);
      }

      LAB_0010a2b2:CowData<char32_t>::_unref(local_90 + 8);
      CowData<char32_t>::_unref(local_90);
      CowData<char32_t>::_unref(local_a0 + 8);
      CowData<char32_t>::_unref(local_a0);
      lVar11 = local_b0;
   }
 else {
      if (*(long*)( this + 0x158 ) != 0) {
         ShaderRD::version_free(singleton + 0x10, *(undefined8*)( this + 0x158 ));
         *(undefined8*)( this + 0x158 ) = 0;
      }

      _err_print_error("set_code", "servers/rendering/renderer_rd/forward_clustered/scene_shader_forward_clustered.cpp", 0x98, "Method/function failed.", "Shader compilation failed.", 0, 0);
      pthread_mutex_unlock((pthread_mutex_t*)singleton_mutex);
      ShaderCompiler::IdentifierActions::~IdentifierActions((IdentifierActions*)local_1d8);
      if ((void*)local_78._0_8_ != (void*)0x0) {
         pvVar13 = (void*)local_78._0_8_;
         if (local_58._4_4_ != 0) {
            uVar1 = *(uint*)( hash_table_size_primes + ( local_58 & 0xffffffff ) * 4 );
            if (uVar1 == 0) {
               local_58 = local_58 & 0xffffffff;
               local_68 = (undefined1[16])0x0;
            }
 else {
               lVar11 = 0;
               do {
                  if (*(int*)( local_78._8_8_ + lVar11 ) != 0) {
                     pvVar13 = *(void**)( (long)pvVar13 + lVar11 * 2 );
                     *(int*)( local_78._8_8_ + lVar11 ) = 0;
                     CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar13 + 0x18 ));
                     CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar13 + 0x10 ));
                     Memory::free_static(pvVar13, false);
                     *(undefined8*)( local_78._0_8_ + lVar11 * 2 ) = 0;
                     pvVar13 = (void*)local_78._0_8_;
                  }

                  lVar11 = lVar11 + 4;
               }
 while ( lVar11 != (ulong)uVar1 * 4 );
               local_58 = local_58 & 0xffffffff;
               local_68 = (undefined1[16])0x0;
               if (pvVar13 == (void*)0x0) goto LAB_0010a449;
            }

         }

         Memory::free_static(pvVar13, false);
         Memory::free_static((void*)local_78._8_8_, false);
      }

      LAB_0010a449:this_00 = local_90 + 8;
      do {
         if (*(long*)this_00 != 0) {
            LOCK();
            plVar8 = (long*)( *(long*)this_00 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               lVar11 = *(long*)this_00;
               *(long*)this_00 = 0;
               Memory::free_static((void*)( lVar11 + -0x10 ), false);
            }

         }

         this_00 = this_00 + -8;
      }
 while ( this_00 != local_a0 );
      CowData<char32_t>::_unref(this_00);
      lVar11 = local_b0;
   }

   local_b0 = lVar11;
   if (lVar11 != 0) {
      LOCK();
      plVar8 = (long*)( lVar11 + -0x10 );
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         local_b0 = 0;
         Memory::free_static((void*)( lVar11 + -0x10 ), false);
      }

   }

   CowData<ShaderCompiler::GeneratedCode::Texture>::_unref((CowData<ShaderCompiler::GeneratedCode::Texture>*)local_c0);
   CowData<String>::_unref((CowData<String>*)local_d0);
   LAB_00109261:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::set_default_specialization(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderSpecialization
   const&) */void RendererSceneRenderImplementation::SceneShaderForwardClustered::set_default_specialization(SceneShaderForwardClustered *this, ShaderSpecialization *param_1) {
   long lVar1;
   long lVar2;
   undefined8 *puVar3;
   long lVar4;
   undefined8 uVar5;
   int iVar6;
   undefined8 uVar7;
   long lVar8;
   lVar1 = *(long*)this;
   *(undefined8*)( this + 0x718 ) = *(undefined8*)param_1;
   *(undefined4*)( this + 0x720 ) = *(undefined4*)( param_1 + 8 );
   while (true) {
      if (lVar1 == 0) {
         return;
      }

      lVar2 = *(long*)( lVar1 + 8 );
      iVar6 = pthread_mutex_lock((pthread_mutex_t*)( lVar2 + 0x130 ));
      if (iVar6 != 0) break;
      for (puVar3 = *(undefined8**)( lVar2 + 0x118 ); puVar3 != (undefined8*)0x0; puVar3 = (undefined8*)*puVar3) {
         WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
      }

      pthread_mutex_unlock((pthread_mutex_t*)( lVar2 + 0x130 ));
      PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey)>::_add_new_pipelines_to_map((PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey)>*)( lVar2 + 0x70 ));
      if (*(long*)( lVar2 + 0x98 ) != 0) {
         lVar4 = *(long*)( *(long*)( lVar2 + 0x98 ) + 0x10 );
         if (lVar4 != *(long*)( lVar2 + 0xa0 )) {
            do {
               lVar8 = lVar4;
               lVar4 = *(long*)( lVar8 + 0x10 );
            }
 while ( *(long*)( lVar2 + 0xa0 ) != *(long*)( lVar8 + 0x10 ) );
            do {
               uVar5 = *(undefined8*)( lVar8 + 0x38 );
               uVar7 = RenderingDevice::get_singleton();
               RenderingDevice::free(uVar7, uVar5);
               lVar8 = *(long*)( lVar8 + 0x20 );
            }
 while ( lVar8 != 0 );
         }

      }

      RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::clear((RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>*)( lVar2 + 0x98 ));
      RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>::clear((RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>*)( lVar2 + 0xe8 ));
      lVar1 = *(long*)( lVar1 + 0x10 );
   }
;
   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar6);
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::~ShaderData() */void RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::~ShaderData(ShaderData *this) {
   undefined8 *puVar1;
   long lVar2;
   long *plVar3;
   int iVar4;
   undefined8 uVar5;
   long lVar6;
   *(undefined***)this = &PTR_set_path_hint_00112b60;
   iVar4 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x130 ));
   if (iVar4 != 0) {
      LAB_0010a984:/* WARNING: Subroutine does not return */std::__throw_system_error(iVar4);
   }

   for (puVar1 = *(undefined8**)( this + 0x118 ); puVar1 != (undefined8*)0x0; puVar1 = (undefined8*)*puVar1) {
      WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
   }

   pthread_mutex_unlock((pthread_mutex_t*)( this + 0x130 ));
   PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey)>::_add_new_pipelines_to_map((PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey)>*)( this + 0x70 ));
   if (*(long*)( this + 0x98 ) != 0) {
      lVar2 = *(long*)( *(long*)( this + 0x98 ) + 0x10 );
      if (lVar2 != *(long*)( this + 0xa0 )) {
         do {
            lVar6 = lVar2;
            lVar2 = *(long*)( lVar6 + 0x10 );
         }
 while ( *(long*)( this + 0xa0 ) != *(long*)( lVar6 + 0x10 ) );
         do {
            uVar5 = RenderingDevice::get_singleton();
            RenderingDevice::free(uVar5);
            lVar6 = *(long*)( lVar6 + 0x20 );
         }
 while ( lVar6 != 0 );
      }

   }

   RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::clear((RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>*)( this + 0x98 ));
   RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>::clear((RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>*)( this + 0xe8 ));
   if (*(long*)( this + 0x158 ) != 0) {
      iVar4 = pthread_mutex_lock((pthread_mutex_t*)singleton_mutex);
      if (iVar4 != 0) goto LAB_0010a984;
      if (singleton == 0) {
         _err_print_error("~ShaderData", "servers/rendering/renderer_rd/forward_clustered/scene_shader_forward_clustered.cpp", 0x1cf, "Parameter \"SceneShaderForwardClustered::singleton\" is null.", 0, 0);
         pthread_mutex_unlock((pthread_mutex_t*)singleton_mutex);
         plVar3 = *(long**)( this + 0x358 );
         if (plVar3 != (long*)0x0) {
            lVar2 = *(long*)( this + 0x368 );
            if (lVar2 != 0) {
               *(undefined8*)( lVar2 + 0x18 ) = *(undefined8*)( this + 0x370 );
            }

            lVar6 = *(long*)( this + 0x370 );
            if (lVar6 != 0) {
               *(long*)( lVar6 + 0x10 ) = lVar2;
            }

            if (this + 0x358 == (ShaderData*)*plVar3) {
               *plVar3 = *(long*)( this + 0x368 );
            }

            if (this + 0x358 == (ShaderData*)plVar3[1]) {
               plVar3[1] = lVar6;
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x308 ));
         lVar2 = *(long*)( this + 0x2f8 );
         goto joined_r0x0010a967;
      }

      ShaderRD::version_free(singleton + 0x10);
      pthread_mutex_unlock((pthread_mutex_t*)singleton_mutex);
   }

   plVar3 = *(long**)( this + 0x358 );
   if (plVar3 != (long*)0x0) {
      lVar2 = *(long*)( this + 0x368 );
      if (lVar2 != 0) {
         *(undefined8*)( lVar2 + 0x18 ) = *(undefined8*)( this + 0x370 );
      }

      lVar6 = *(long*)( this + 0x370 );
      if (lVar6 != 0) {
         *(long*)( lVar6 + 0x10 ) = lVar2;
      }

      if (this + 0x358 == (ShaderData*)*plVar3) {
         *plVar3 = *(long*)( this + 0x368 );
      }

      if (this + 0x358 == (ShaderData*)plVar3[1]) {
         plVar3[1] = lVar6;
      }

   }

   if (*(long*)( this + 0x308 ) != 0) {
      LOCK();
      plVar3 = (long*)( *(long*)( this + 0x308 ) + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         lVar2 = *(long*)( this + 0x308 );
         *(undefined8*)( this + 0x308 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = *(long*)( this + 0x2f8 );
   joined_r0x0010a967:if (lVar2 != 0) {
      LOCK();
      plVar3 = (long*)( lVar2 + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         lVar2 = *(long*)( this + 0x2f8 );
         *(undefined8*)( this + 0x2f8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   CowData<ShaderCompiler::GeneratedCode::Texture>::_unref((CowData<ShaderCompiler::GeneratedCode::Texture>*)( this + 0x2e8 ));
   PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey)>::~PipelineHashMapRD((PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey)>*)( this + 0x70 ));
   RendererRD::MaterialStorage::ShaderData::~ShaderData((ShaderData*)this);
   return;
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::~ShaderData() */void RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::~ShaderData(ShaderData *this) {
   ~ShaderData(this)
   ;;
   operator_delete(this, 0x378);
   return;
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* Vector<unsigned int>::~Vector() */void Vector<unsigned_int>::~Vector(Vector<unsigned_int> *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)( this + 8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 8 );
         *(undefined8*)( this + 8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* SceneForwardClusteredShaderRD::~SceneForwardClusteredShaderRD() */void SceneForwardClusteredShaderRD::~SceneForwardClusteredShaderRD(SceneForwardClusteredShaderRD *this) {
   *(undefined***)this = &PTR__SceneForwardClusteredShaderRD_00112b40;
   ShaderRD::~ShaderRD((ShaderRD*)this);
   return;
}
/* SceneForwardClusteredShaderRD::~SceneForwardClusteredShaderRD() */void SceneForwardClusteredShaderRD::~SceneForwardClusteredShaderRD(SceneForwardClusteredShaderRD *this) {
   *(undefined***)this = &PTR__SceneForwardClusteredShaderRD_00112b40;
   ShaderRD::~ShaderRD((ShaderRD*)this);
   operator_delete(this, 0x178);
   return;
}
/* RBSet<unsigned int, Comparator<unsigned int>, DefaultAllocator>::_cleanup_tree(RBSet<unsigned
   int, Comparator<unsigned int>, DefaultAllocator>::Element*) [clone .part.0] */void RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>::_cleanup_tree(RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator> *this, Element *param_1) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   Element *pEVar5;
   Element *pEVar6;
   pEVar1 = *(Element**)( param_1 + 0x10 );
   pEVar2 = *(Element**)( this + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (pEVar4 != *(Element**)( pEVar6 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar2 + 0x10 );
               if (pEVar6 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               Memory::free_static(pEVar2, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar2, false);
         }

         Memory::free_static(pEVar3, false);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
         }

         Memory::free_static(pEVar2, false);
      }

      Memory::free_static(pEVar1, false);
      pEVar2 = *(Element**)( this + 8 );
   }

   pEVar1 = *(Element**)( param_1 + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               if (*(Element**)( pEVar2 + 0x10 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 0x10 ));
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               Memory::free_static(pEVar2, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar2, false);
         }

         Memory::free_static(pEVar3, false);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
         }

         Memory::free_static(pEVar2, false);
      }

      Memory::free_static(pEVar1, false);
   }

   Memory::free_static(param_1, false);
   return;
}
/* RBMap<unsigned int, RID, Comparator<unsigned int>,
   DefaultAllocator>::_cleanup_tree(RBMap<unsigned int, RID, Comparator<unsigned int>,
   DefaultAllocator>::Element*) [clone .part.0] */void RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::_cleanup_tree(RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator> *this, Element *param_1) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   Element *pEVar5;
   Element *pEVar6;
   pEVar1 = *(Element**)( param_1 + 0x10 );
   pEVar2 = *(Element**)( this + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (pEVar4 != *(Element**)( pEVar6 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar2 + 0x10 );
               if (pEVar6 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               Memory::free_static(pEVar2, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar2, false);
         }

         Memory::free_static(pEVar3, false);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
         }

         Memory::free_static(pEVar2, false);
      }

      Memory::free_static(pEVar1, false);
      pEVar2 = *(Element**)( this + 8 );
   }

   pEVar1 = *(Element**)( param_1 + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               if (*(Element**)( pEVar2 + 0x10 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 0x10 ));
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               Memory::free_static(pEVar2, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar2, false);
         }

         Memory::free_static(pEVar3, false);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
         }

         Memory::free_static(pEVar2, false);
      }

      Memory::free_static(pEVar1, false);
   }

   Memory::free_static(param_1, false);
   return;
}
/* CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write() [clone .isra.0]
   [clone .cold] */void CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write(void) {
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
/* CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write() [clone
   .isra.0] [clone .cold] */void CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write(void) {
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
/* CowData<ShaderRD::VariantDefine>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<ShaderRD::VariantDefine>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::init(String) [clone .cold] */void RendererSceneRenderImplementation::SceneShaderForwardClustered::init(undefined8 param_1, undefined8 param_2, int param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
   code *pcVar1;
   if (param_3 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, param_6);
   }

   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey::hash()
   const */uint RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey::hash(PipelineKey *this) {
   uint uVar1;
   int iVar2;
   int iVar3;
   iVar2 = (int)*(undefined8*)this;
   iVar3 = (int)( ( ulong ) * (undefined8*)this >> 0x20 );
   uVar1 = ( iVar2 * 0x16a88000 | ( uint )(iVar2 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
   uVar1 = ( uVar1 << 0xd | uVar1 >> 0x13 ) * 5 + 0xe6546b64 ^ ( iVar3 * 0x16a88000 | ( uint )(iVar3 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
   uVar1 = ( *(int*)( this + 8 ) * 0x16a88000 | ( uint )(*(int*)( this + 8 ) * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ ( uVar1 << 0xd | uVar1 >> 0x13 ) * 5 + 0xe6546b64;
   for (int i = 0; i < 3; i++) {
      uVar1 = ( *(int*)( this + ( 12*i + 16 ) ) * 380141568 | ( uint )(*(int*)( this + ( 12*i + 16 ) ) * -862048943) >> 17 ) * 461845907 ^ ( uVar1 << 13 | uVar1 >> 19 ) * 5 + 3864292196;
      uVar1 = ( *(int*)( this + ( 12*i + 20 ) ) * 380141568 | ( uint )(*(int*)( this + ( 12*i + 20 ) ) * -862048943) >> 17 ) * 461845907 ^ ( uVar1 << 13 | uVar1 >> 19 ) * 5 + 3864292196;
      uVar1 = ( *(int*)( this + ( 12*i + 24 ) ) * 380141568 | ( uint )(*(int*)( this + ( 12*i + 24 ) ) * -862048943) >> 17 ) * 461845907 ^ ( uVar1 << 13 | uVar1 >> 19 ) * 5 + 3864292196;
   }

   uVar1 = ( uVar1 << 0xd | uVar1 >> 0x13 ) * 5 + 0xe6546b64;
   uVar1 = ( uVar1 >> 0x10 ^ uVar1 ) * -0x7a143595;
   uVar1 = ( uVar1 >> 0xd ^ uVar1 ) * -0x3d4d51cb;
   return uVar1 >> 0x10 ^ uVar1;
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
            if (pvVar3 == (void*)0x0) goto LAB_0010d73c;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0xd0 ), false);
   }

   LAB_0010d73c:pvVar3 = *(void**)( this + 0x98 );
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
            if (pvVar3 == (void*)0x0) goto LAB_0010d7fc;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0xa0 ), false);
   }

   LAB_0010d7fc:pvVar3 = *(void**)( this + 0x68 );
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
            if (pvVar3 == (void*)0x0) goto LAB_0010d8b3;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x70 ), false);
   }

   LAB_0010d8b3:pvVar3 = *(void**)( this + 0x38 );
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
            if (pvVar3 == (void*)0x0) goto LAB_0010d95e;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x40 ), false);
   }

   LAB_0010d95e:pvVar3 = *(void**)( this + 8 );
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
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::_create_shader_funcs() */void RendererSceneRenderImplementation::SceneShaderForwardClustered::_create_shader_funcs(void) {
   _create_shader_func();
   return;
}
/* RendererSceneRenderImplementation::SceneShaderForwardClustered::_create_material_funcs(RendererRD::MaterialStorage::ShaderData*)
    */void RendererSceneRenderImplementation::SceneShaderForwardClustered::_create_material_funcs(ShaderData *param_1) {
   _create_material_func(singleton, (ShaderData*)param_1);
   return;
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
            if (pvVar5 == (void*)0x0) goto LAB_0010dcd3;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0xa0 ), false);
   }

   LAB_0010dcd3:pvVar5 = *(void**)( this + 0x68 );
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
            if (pvVar5 == (void*)0x0) goto LAB_0010ddb2;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x70 ), false);
   }

   LAB_0010ddb2:pvVar5 = *(void**)( this + 0x38 );
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
            if (pvVar5 == (void*)0x0) goto LAB_0010de8d;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x40 ), false);
   }

   LAB_0010de8d:pvVar5 = *(void**)( this + 8 );
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, ShaderCompiler::Stage, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderCompiler::Stage> > >::operator[](StringName const&) */undefined8 * __thiscallHashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>::operator [](HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>> * this, StringName * param_1) * puVar1 ;undefined8 *puVar2void *pvVar3void *__sundefined8 *puVar4undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]uint uVar37uint uVar38uint uVar39ulong uVar40undefined8 uVar41void *__s_00undefined8 *puVar42long lVar43void *pvVar44ulong uVar45int iVar46long lVar47long lVar48long lVar49ulong uVar50undefined8 uVar51uint uVar52uint uVar53uint uVar54undefined8 *puVar55long in_FS_OFFSETbool bVar56long local_58undefined4 local_50long local_40lVar43 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar38);if (lVar43 == 0) {
   LAB_0010e7c8:uVar45 = uVar40 * 4;
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
         goto LAB_0010e678;
      }

      memset(pvVar3, 0, uVar45);
      memset(pvVar44, 0, uVar50);
      iVar46 = *(int*)( this + 0x2c );
      LAB_0010e67c:if (iVar46 != 0) {
         LAB_0010e684:uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
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
                  goto LAB_0010e27c;
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

      goto LAB_0010e2b3;
   }

   iVar46 = *(int*)( this + 0x2c );
   if (pvVar44 == (void*)0x0) goto LAB_0010e2b3;
   if (iVar46 != 0) goto LAB_0010e684;
   LAB_0010e2d9:uVar38 = *(uint*)( this + 0x28 );
   if (uVar38 == 0x1c) {
      puVar42 = (undefined8*)0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0010e27c;
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
               goto LAB_0010e27c;
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
      if (lVar43 == 0) goto LAB_0010e7c8;
      LAB_0010e678:iVar46 = *(int*)( this + 0x2c );
      goto LAB_0010e67c;
   }

   LAB_0010e2b3:if ((float)uVar40 * __LC37 < (float)( iVar46 + 1 )) goto LAB_0010e2d9;
}
StringName::StringName((StringName*)&local_58, param_1);local_50 = 0;puVar42 = (undefined8*)operator_new(0x20, "");*puVar42 = 0;puVar42[1] = 0;StringName::StringName((StringName*)( puVar42 + 2 ), (StringName*)&local_58);bVar56 = StringName::configured != '\0';*(undefined4*)( puVar42 + 3 ) = local_50;if (( bVar56 ) && ( local_58 != 0 )) {
   StringName::unref();
}
puVar4 = *(undefined8**)( this + 0x20 );if (puVar4 == (undefined8*)0x0) {
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar42;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 == 0) goto LAB_0010e78d;
   LAB_0010e564:uVar38 = *(uint*)( lVar43 + 0x20 );
}
 else {
   *puVar4 = puVar42;
   puVar42[1] = puVar4;
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 != 0) goto LAB_0010e564;
   LAB_0010e78d:uVar38 = StringName::get_empty_hash();
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
;*(undefined8**)( lVar47 + lVar48 * 8 ) = puVar4;*puVar1 = uVar38;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0010e27c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return puVar42 + 3;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, Pair<int*, int>, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Pair<int*, int> > > >::operator[](StringName
   const&) */undefined8 * __thiscallHashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>::operator [](HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>> * this, StringName * param_1) * puVar1 ;undefined8 *puVar2void *pvVar3void *__sundefined8 *puVar4undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]uint uVar37uint uVar38uint uVar39ulong uVar40undefined8 uVar41void *__s_00undefined8 *puVar42long lVar43void *pvVar44ulong uVar45int iVar46long lVar47long lVar48long lVar49ulong uVar50undefined8 uVar51uint uVar52uint uVar53uint uVar54undefined8 *puVar55long in_FS_OFFSETbool bVar56long local_58undefined8 local_50undefined4 uStack_48undefined4 uStack_44long local_40lVar43 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar38);if (lVar43 == 0) {
   LAB_0010ef48:uVar45 = uVar40 * 4;
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
         goto LAB_0010edf8;
      }

      memset(pvVar3, 0, uVar45);
      memset(pvVar44, 0, uVar50);
      iVar46 = *(int*)( this + 0x2c );
      LAB_0010edfc:if (iVar46 != 0) {
         LAB_0010ee04:uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
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
                  *(undefined4*)( puVar42 + 4 ) = 0;
                  goto LAB_0010e9ec;
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

      goto LAB_0010ea23;
   }

   iVar46 = *(int*)( this + 0x2c );
   if (pvVar44 == (void*)0x0) goto LAB_0010ea23;
   if (iVar46 != 0) goto LAB_0010ee04;
   LAB_0010ea49:uVar38 = *(uint*)( this + 0x28 );
   if (uVar38 == 0x1c) {
      puVar42 = (undefined8*)0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0010e9ec;
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
               goto LAB_0010e9ec;
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
      if (lVar43 == 0) goto LAB_0010ef48;
      LAB_0010edf8:iVar46 = *(int*)( this + 0x2c );
      goto LAB_0010edfc;
   }

   LAB_0010ea23:if ((float)uVar40 * __LC37 < (float)( iVar46 + 1 )) goto LAB_0010ea49;
}
StringName::StringName((StringName*)&local_58, param_1);local_50 = 0;uStack_48 = 0;puVar42 = (undefined8*)operator_new(0x28, "");*puVar42 = 0;puVar42[1] = 0;StringName::StringName((StringName*)( puVar42 + 2 ), (StringName*)&local_58);bVar56 = StringName::configured != '\0';puVar42[3] = local_50;puVar42[4] = CONCAT44(uStack_44, uStack_48);if (( bVar56 ) && ( local_58 != 0 )) {
   StringName::unref();
}
puVar4 = *(undefined8**)( this + 0x20 );if (puVar4 == (undefined8*)0x0) {
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar42;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 == 0) goto LAB_0010ef0d;
   LAB_0010ece0:uVar38 = *(uint*)( lVar43 + 0x20 );
}
 else {
   *puVar4 = puVar42;
   puVar42[1] = puVar4;
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 != 0) goto LAB_0010ece0;
   LAB_0010ef0d:uVar38 = StringName::get_empty_hash();
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
;*(undefined8**)( lVar47 + lVar48 * 8 ) = puVar4;*puVar1 = uVar38;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0010e9ec:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return puVar42 + 3;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, bool*, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, bool*> > >::operator[](StringName const&) */undefined8 * __thiscallHashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>> * this, StringName * param_1) * puVar1 ;undefined8 *puVar2void *pvVar3void *__sundefined8 *puVar4undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]uint uVar37uint uVar38uint uVar39ulong uVar40undefined8 uVar41void *__s_00undefined8 *puVar42long lVar43void *pvVar44ulong uVar45int iVar46long lVar47long lVar48long lVar49ulong uVar50undefined8 uVar51uint uVar52uint uVar53uint uVar54undefined8 *puVar55long in_FS_OFFSETbool bVar56long local_58undefined8 local_50long local_40lVar43 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar38);if (lVar43 == 0) {
   LAB_0010f6b8:uVar45 = uVar40 * 4;
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
         goto LAB_0010f568;
      }

      memset(pvVar3, 0, uVar45);
      memset(pvVar44, 0, uVar50);
      iVar46 = *(int*)( this + 0x2c );
      LAB_0010f56c:if (iVar46 != 0) {
         LAB_0010f574:uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
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
                  goto LAB_0010f16c;
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

      goto LAB_0010f1a3;
   }

   iVar46 = *(int*)( this + 0x2c );
   if (pvVar44 == (void*)0x0) goto LAB_0010f1a3;
   if (iVar46 != 0) goto LAB_0010f574;
   LAB_0010f1c9:uVar38 = *(uint*)( this + 0x28 );
   if (uVar38 == 0x1c) {
      puVar42 = (undefined8*)0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0010f16c;
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
               goto LAB_0010f16c;
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
      if (lVar43 == 0) goto LAB_0010f6b8;
      LAB_0010f568:iVar46 = *(int*)( this + 0x2c );
      goto LAB_0010f56c;
   }

   LAB_0010f1a3:if ((float)uVar40 * __LC37 < (float)( iVar46 + 1 )) goto LAB_0010f1c9;
}
StringName::StringName((StringName*)&local_58, param_1);local_50 = 0;puVar42 = (undefined8*)operator_new(0x20, "");*puVar42 = 0;puVar42[1] = 0;StringName::StringName((StringName*)( puVar42 + 2 ), (StringName*)&local_58);bVar56 = StringName::configured != '\0';puVar42[3] = local_50;if (( bVar56 ) && ( local_58 != 0 )) {
   StringName::unref();
}
puVar4 = *(undefined8**)( this + 0x20 );if (puVar4 == (undefined8*)0x0) {
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar42;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 == 0) goto LAB_0010f67d;
   LAB_0010f457:uVar38 = *(uint*)( lVar43 + 0x20 );
}
 else {
   *puVar4 = puVar42;
   puVar42[1] = puVar4;
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 != 0) goto LAB_0010f457;
   LAB_0010f67d:uVar38 = StringName::get_empty_hash();
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
;*(undefined8**)( lVar47 + lVar48 * 8 ) = puVar4;*puVar1 = uVar38;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0010f16c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return puVar42 + 3;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* CowData<char>::_unref() */void CowData<char>::_unref(CowData<char> *this) {
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
/* RBMap<unsigned int, RID, Comparator<unsigned int>, DefaultAllocator>::clear() */void RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::clear(RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator> *this) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   Element *pEVar5;
   void *pvVar6;
   Element *pEVar7;
   pvVar6 = *(void**)this;
   if (pvVar6 != (void*)0x0) {
      pEVar1 = *(Element**)( (long)pvVar6 + 0x10 );
      pEVar2 = *(Element**)( this + 8 );
      if (pEVar1 != pEVar2) {
         pEVar3 = *(Element**)( pEVar1 + 0x10 );
         if (pEVar2 != pEVar3) {
            pEVar7 = *(Element**)( pEVar3 + 0x10 );
            if (pEVar2 != pEVar7) {
               pEVar4 = *(Element**)( pEVar7 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar7 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar7 + 8 ));
               }

               Memory::free_static(pEVar7, false);
               pEVar7 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar3 + 8 );
            if (pEVar2 != pEVar7) {
               pEVar4 = *(Element**)( pEVar2 + 0x10 );
               if (pEVar7 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               Memory::free_static(pEVar2, false);
            }

            Memory::free_static(pEVar3, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar1 + 8 );
         if (pEVar2 != pEVar3) {
            pEVar7 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar7 != pEVar3) {
               pEVar4 = *(Element**)( pEVar7 + 0x10 );
               if (pEVar4 != pEVar3) {
                  pEVar5 = *(Element**)( pEVar4 + 0x10 );
                  if (pEVar3 != pEVar5) {
                     _cleanup_tree(this, pEVar5);
                     pEVar5 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar4 + 8 ) != pEVar5) {
                     _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
                  }

                  Memory::free_static(pEVar4, false);
                  pEVar3 = *(Element**)( this + 8 );
               }

               pEVar4 = *(Element**)( pEVar7 + 8 );
               if (pEVar4 != pEVar3) {
                  if (*(Element**)( pEVar4 + 0x10 ) != pEVar3) {
                     _cleanup_tree(this, *(Element**)( pEVar4 + 0x10 ));
                     pEVar3 = *(Element**)( this + 8 );
                  }

                  if (pEVar3 != *(Element**)( pEVar4 + 8 )) {
                     _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
                  }

                  Memory::free_static(pEVar4, false);
               }

               Memory::free_static(pEVar7, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar7 = *(Element**)( pEVar2 + 8 );
            if (pEVar7 != pEVar3) {
               if (*(Element**)( pEVar7 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar7 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar7 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar7 + 8 ));
               }

               Memory::free_static(pEVar7, false);
            }

            Memory::free_static(pEVar2, false);
         }

         Memory::free_static(pEVar1, false);
         pvVar6 = *(void**)this;
         pEVar2 = *(Element**)( this + 8 );
      }

      *(Element**)( (long)pvVar6 + 0x10 ) = pEVar2;
      *(undefined4*)( this + 0x10 ) = 0;
      Memory::free_static(pvVar6, false);
      *(undefined8*)this = 0;
   }

   return;
}
/* RBSet<unsigned int, Comparator<unsigned int>, DefaultAllocator>::clear() */void RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>::clear(RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator> *this) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   void *pvVar5;
   Element *pEVar6;
   pvVar5 = *(void**)this;
   if (pvVar5 != (void*)0x0) {
      pEVar1 = *(Element**)( (long)pvVar5 + 0x10 );
      pEVar2 = *(Element**)( this + 8 );
      if (pEVar1 != pEVar2) {
         pEVar3 = *(Element**)( pEVar1 + 0x10 );
         if (pEVar2 != pEVar3) {
            pEVar6 = *(Element**)( pEVar3 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               pEVar2 = *(Element**)( pEVar6 + 8 );
               if (pEVar2 != pEVar4) {
                  if (*(Element**)( pEVar2 + 0x10 ) != pEVar4) {
                     _cleanup_tree(this, *(Element**)( pEVar2 + 0x10 ));
                     pEVar4 = *(Element**)( this + 8 );
                  }

                  if (pEVar4 != *(Element**)( pEVar2 + 8 )) {
                     _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
                  }

                  Memory::free_static(pEVar2, false);
               }

               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar3 + 8 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar2 + 0x10 );
               if (pEVar6 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               Memory::free_static(pEVar2, false);
            }

            Memory::free_static(pEVar3, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar1 + 8 );
         if (pEVar2 != pEVar3) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               pEVar4 = *(Element**)( pEVar6 + 8 );
               if (pEVar4 != pEVar3) {
                  if (*(Element**)( pEVar4 + 0x10 ) != pEVar3) {
                     _cleanup_tree(this, *(Element**)( pEVar4 + 0x10 ));
                     pEVar3 = *(Element**)( this + 8 );
                  }

                  if (pEVar3 != *(Element**)( pEVar4 + 8 )) {
                     _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
                  }

                  Memory::free_static(pEVar4, false);
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar2, false);
         }

         Memory::free_static(pEVar1, false);
         pvVar5 = *(void**)this;
         pEVar2 = *(Element**)( this + 8 );
      }

      *(Element**)( (long)pvVar5 + 0x10 ) = pEVar2;
      *(undefined4*)( this + 0x10 ) = 0;
      Memory::free_static(pvVar5, false);
      *(undefined8*)this = 0;
   }

   return;
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
      LAB_00110080:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_00110080;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_0010ff59:if (lVar10 != lVar7) {
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
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_0010ff59;
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
      goto LAB_001100d6;
   }

   if (lVar10 == lVar7) {
      LAB_0010ffff:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_001100d6:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_0010ffea;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_0010ffff;
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
   LAB_0010ffea:puVar9[-1] = param_1;
   return 0;
}
/* CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_unref() */void CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_unref(CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *this) {
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
/* CowData<ShaderRD::VariantDefine>::_unref() */void CowData<ShaderRD::VariantDefine>::_unref(CowData<ShaderRD::VariantDefine> *this) {
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
   LAB_00110ab8:local_70 = 0;
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

      LAB_001106d1:iVar35 = *(int*)( this + 0x2c );
      if (iVar35 != 0) {
         LAB_001106dd:uVar29 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
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

                  goto LAB_00110678;
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

      goto LAB_001107dc;
   }

   iVar35 = *(int*)( this + 0x2c );
   if (__s_00 == (void*)0x0) goto LAB_001107dc;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_001106dd;
   LAB_001107fe:if (*(int*)( this + 0x28 ) == 0x1c) {
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      lVar34 = 0;
      LAB_00110678:local_88 = (CowData<char32_t>*)( lVar34 + 0x18 );
      goto LAB_00110681;
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
               goto LAB_00110678;
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
      if (lVar34 == 0) goto LAB_00110ab8;
      goto LAB_001106d1;
   }

   local_70 = 0;
   iVar35 = 0;
   LAB_001107dc:if ((float)uVar43 * __LC37 < (float)( iVar35 + 1 )) goto LAB_001107fe;
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
   if (lVar34 == 0) goto LAB_00110a85;
   LAB_001108f2:uVar29 = *(uint*)( lVar34 + 0x20 );
}
 else {
   *puVar39 = puVar31;
   puVar31[1] = puVar39;
   lVar34 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar31;
   if (lVar34 != 0) goto LAB_001108f2;
   LAB_00110a85:uVar29 = StringName::get_empty_hash();
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
LAB_00110681:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00110c02;
      }

      iVar28 = *(int*)( param_2 + 0x2c );
      if (__s_00 == (void*)0x0) goto LAB_00110d19;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_00110c0e;
      LAB_00110d3b:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         local_80 = (long*)0x0;
         goto LAB_00110f0b;
      }

      _resize_and_rehash((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }
 else {
      LAB_00110c02:iVar28 = *(int*)( param_2 + 0x2c );
      if (iVar28 != 0) {
         LAB_00110c0e:uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
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

                  goto LAB_00110f0b;
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

      LAB_00110d19:if ((float)uVar23 * __LC37 < (float)( iVar28 + 1 )) goto LAB_00110d3b;
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
      LAB_00110e2c:lVar25 = *(long*)pSVar29;
      if (lVar25 != 0) goto LAB_00110e39;
      LAB_00110f61:uVar23 = StringName::get_empty_hash();
   }
 else {
      if (in_R8B == '\0') {
         *puVar4 = local_80;
         local_80[1] = (long)puVar4;
         *(long**)( param_2 + 0x20 ) = local_80;
         goto LAB_00110e2c;
      }

      lVar25 = *(long*)( param_2 + 0x18 );
      *(long**)( lVar25 + 8 ) = local_80;
      *local_80 = lVar25;
      lVar25 = *(long*)pSVar29;
      *(long**)( param_2 + 0x18 ) = local_80;
      if (lVar25 == 0) goto LAB_00110f61;
      LAB_00110e39:uVar23 = *(uint*)( lVar25 + 0x20 );
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
   LAB_00110f0b:*(long**)param_1 = local_80;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_realloc(long) */undefined8 CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_realloc(CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::resize<false>(long)
    */undefined8 CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::resize<false>(CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   undefined4 uVar3;
   long lVar4;
   ulong uVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   undefined8 uVar8;
   undefined8 *puVar9;
   long lVar10;
   long lVar11;
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
      lVar10 = 0;
      lVar4 = 0;
   }
 else {
      lVar10 = *(long*)( lVar4 + -8 );
      if (param_1 == lVar10) {
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
      lVar4 = lVar10 * 0x20;
      if (lVar4 != 0) {
         uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = uVar5 | uVar5 >> 0x10;
         lVar4 = ( uVar5 | uVar5 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x20 == 0) {
      LAB_001113a0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar5 = param_1 * 0x20 - 1;
   uVar5 = uVar5 >> 1 | uVar5;
   uVar5 = uVar5 | uVar5 >> 2;
   uVar5 = uVar5 | uVar5 >> 4;
   uVar5 = uVar5 | uVar5 >> 8;
   uVar5 = uVar5 | uVar5 >> 0x10;
   uVar5 = uVar5 | uVar5 >> 0x20;
   lVar11 = uVar5 + 1;
   if (lVar11 == 0) goto LAB_001113a0;
   if (param_1 <= lVar10) {
      if (( lVar11 != lVar4 ) && ( uVar8 = _realloc(this, lVar11) ),(int)uVar8 != 0) {
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

   if (lVar11 == lVar4) {
      LAB_0011130c:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar4 = puVar9[-1];
      if (param_1 <= lVar4) goto LAB_001112a3;
   }
 else {
      if (lVar10 != 0) {
         uVar8 = _realloc(this, lVar11);
         if ((int)uVar8 != 0) {
            return uVar8;
         }

         goto LAB_0011130c;
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

   uVar3 = _LC49;
   puVar6 = puVar9 + lVar4 * 4;
   do {
      *(undefined1*)puVar6 = 0;
      puVar7 = puVar6 + 4;
      *(undefined1(*) [16])( (long)puVar6 + 4 ) = (undefined1[16])0x0;
      *(undefined8*)( (long)puVar6 + 0x14 ) = 0;
      *(undefined4*)( (long)puVar6 + 0x1c ) = uVar3;
      puVar6 = puVar7;
   }
 while ( puVar7 != puVar9 + param_1 * 4 );
   LAB_001112a3:puVar9[-1] = param_1;
   return 0;
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
            if (pvVar3 == (void*)0x0) goto LAB_00111497;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( param_1 + 0x28 ), false);
   }

   LAB_00111497:if (( StringName::configured != '\0' ) && ( *(long*)( param_1 + 0x10 ) != 0 )) {
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
   *(code**)this = ProjectSettings::get_singleton;
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
            if (pvVar5 == (void*)0x0) goto LAB_00111589;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x50 ), false);
   }

   LAB_00111589:pvVar5 = *(void**)( this + 0x18 );
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
            if (pvVar5 == (void*)0x0) goto LAB_001116cf;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_001116cf:if (*(long*)( this + 8 ) != 0) {
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
      LAB_00111ac0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar11 == 0) goto LAB_00111ac0;
   if (param_1 <= lVar8) {
      lVar8 = *(long*)this;
      uVar10 = param_1;
      while (lVar8 != 0) {
         if (*(ulong*)( lVar8 + -8 ) <= uVar10) {
            LAB_00111951:if (lVar11 != lVar9) {
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
            if (*(ulong*)( lVar8 + -8 ) <= uVar10) goto LAB_00111951;
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
      goto LAB_00111b16;
   }

   if (lVar11 == lVar9) {
      LAB_00111a33:puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) {
         LAB_00111b16:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar8 = puVar7[-1];
      if (param_1 <= lVar8) goto LAB_00111a10;
   }
 else {
      if (lVar8 != 0) {
         uVar4 = _realloc(this, lVar11);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_00111a33;
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

   uVar4 = _LC51;
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
   LAB_00111a10:puVar7[-1] = param_1;
   return 0;
}
/* CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_realloc(long) */undefined8 CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_realloc(CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::resize<false>(long) */undefined8 CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::resize<false>(CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   undefined8 uVar7;
   undefined8 *puVar8;
   long lVar9;
   long lVar10;
   long lVar11;
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
      lVar11 = 0;
      lVar3 = 0;
   }
 else {
      lVar11 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar11) {
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
      lVar3 = lVar11 * 0xc;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   lVar10 = param_1 * 0xc;
   if (lVar10 == 0) {
      LAB_00111df0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = lVar10 - 1U >> 1 | lVar10 - 1U;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar9 = uVar4 + 1;
   if (lVar9 == 0) goto LAB_00111df0;
   if (param_1 <= lVar11) {
      if (( lVar9 != lVar3 ) && ( uVar7 = _realloc(this, lVar9) ),(int)uVar7 != 0) {
         return uVar7;
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

   if (lVar9 == lVar3) {
      LAB_00111d5c:puVar8 = *(undefined8**)this;
      if (puVar8 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar8[-1];
      if (param_1 <= lVar3) goto LAB_00111ceb;
   }
 else {
      if (lVar11 != 0) {
         uVar7 = _realloc(this, lVar9);
         if ((int)uVar7 != 0) {
            return uVar7;
         }

         goto LAB_00111d5c;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar8 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar8;
      lVar3 = 0;
   }

   uVar7 = _LC52;
   puVar5 = (undefined8*)( (long)puVar8 + lVar3 * 0xc );
   do {
      *puVar5 = uVar7;
      puVar6 = (undefined8*)( (long)puVar5 + 0xc );
      *(undefined4*)( puVar5 + 1 ) = 0;
      puVar5 = puVar6;
   }
 while ( puVar6 != (undefined8*)( lVar10 + (long)puVar8 ) );
   LAB_00111ceb:puVar8[-1] = param_1;
   return 0;
}
/* CowData<ShaderRD::VariantDefine>::_realloc(long) */undefined8 CowData<ShaderRD::VariantDefine>::_realloc(CowData<ShaderRD::VariantDefine> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<ShaderRD::VariantDefine>::resize<false>(long) */undefined8 CowData<ShaderRD::VariantDefine>::resize<false>(CowData<ShaderRD::VariantDefine> *this, long param_1) {
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
      LAB_00112160:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar9 == 0) goto LAB_00112160;
   if (param_1 <= lVar10) {
      puVar6 = *(undefined8**)this;
      uVar8 = param_1;
      while (puVar6 != (undefined8*)0x0) {
         if ((ulong)puVar6[-1] <= uVar8) {
            LAB_00112021:if (lVar9 != lVar7) {
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

            goto LAB_001120cb;
         }

         while (puVar6[uVar8 * 3 + 1] == 0) {
            uVar8 = uVar8 + 1;
            if ((ulong)puVar6[-1] <= uVar8) goto LAB_00112021;
         }
;
         LOCK();
         plVar1 = (long*)( puVar6[uVar8 * 3 + 1] + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar10 = puVar6[uVar8 * 3 + 1];
            puVar6[uVar8 * 3 + 1] = 0;
            Memory::free_static((void*)( lVar10 + -0x10 ), false);
         }

         uVar8 = uVar8 + 1;
         puVar6 = *(undefined8**)this;
      }
;
      goto LAB_001121b6;
   }

   if (lVar9 == lVar7) {
      LAB_001120eb:puVar6 = *(undefined8**)this;
      if (puVar6 == (undefined8*)0x0) {
         LAB_001121b6:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar10 = puVar6[-1];
      if (param_1 <= lVar10) goto LAB_001120cb;
   }
 else {
      if (lVar10 != 0) {
         uVar3 = _realloc(this, lVar9);
         if ((int)uVar3 != 0) {
            return uVar3;
         }

         goto LAB_001120eb;
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
      puVar4[1] = 0;
      *(undefined1*)( puVar4 + 2 ) = 1;
      puVar4 = puVar5;
   }
 while ( puVar5 != puVar6 + param_1 * 3 );
   LAB_001120cb:puVar6[-1] = param_1;
   return 0;
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
      LAB_00112440:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_00112440;
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
            goto LAB_00112351;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_00112351:puVar7[-1] = param_1;
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
/* RBMap<unsigned int, RID, Comparator<unsigned int>,
   DefaultAllocator>::_insert_rb_fix(RBMap<unsigned int, RID, Comparator<unsigned int>,
   DefaultAllocator>::Element*) */void RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::_insert_rb_fix(RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator> *this, Element *param_1) {
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
         if (*(int*)pEVar6 == 0) goto LAB_0011259d;
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
            if (pEVar5 == pEVar6) goto LAB_001126c0;
            LAB_00112546:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_00112546;
            LAB_001126c0:_err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
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
         LAB_00112583:iVar1 = *(int*)pEVar7;
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
               LAB_001127b2:*(Element**)( pEVar7 + 0x10 ) = param_1;
            }
 else {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
               *(Element**)( param_1 + 0x18 ) = pEVar7;
               if (pEVar8 == *(Element**)( pEVar7 + 0x10 )) goto LAB_001127b2;
               *(Element**)( pEVar7 + 8 ) = param_1;
            }

            *(Element**)( param_1 + 0x10 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_00112780;
            LAB_00112610:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_00112610;
            LAB_00112780:_err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
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
         goto LAB_00112583;
      }

      LAB_0011259d:pEVar7 = *(Element**)( this + 8 );
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
/* PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey,
   RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData, void
   (RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey)>::~PipelineHashMapRD()
    */void PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey)>::~PipelineHashMapRD(PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey)> *this) {
   uint uVar1;
   undefined8 *puVar2;
   int iVar3;
   undefined8 uVar4;
   long lVar5;
   long lVar6;
   void *pvVar7;
   iVar3 = pthread_mutex_lock((pthread_mutex_t*)( this + 0xc0 ));
   if (iVar3 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar3);
   }

   for (puVar2 = *(undefined8**)( this + 0xa8 ); puVar2 != (undefined8*)0x0; puVar2 = (undefined8*)*puVar2) {
      WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
   }

   pthread_mutex_unlock((pthread_mutex_t*)( this + 0xc0 ));
   _add_new_pipelines_to_map(this);
   if (*(long*)( this + 0x28 ) != 0) {
      lVar6 = *(long*)( *(long*)( this + 0x28 ) + 0x10 );
      if (lVar6 != *(long*)( this + 0x30 )) {
         do {
            lVar5 = lVar6;
            lVar6 = *(long*)( lVar5 + 0x10 );
         }
 while ( *(long*)( this + 0x30 ) != *(long*)( lVar5 + 0x10 ) );
         do {
            uVar4 = RenderingDevice::get_singleton();
            RenderingDevice::free(uVar4);
            lVar5 = *(long*)( lVar5 + 0x20 );
         }
 while ( lVar5 != 0 );
      }

   }

   RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::clear((RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>*)( this + 0x28 ));
   RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>::clear((RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>*)( this + 0x78 ));
   pvVar7 = *(void**)( this + 0x98 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0xbc ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xb8 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0xbc ) = 0;
            *(undefined1(*) [16])( this + 0xa8 ) = (undefined1[16])0x0;
         }
 else {
            lVar6 = 0;
            do {
               if (*(int*)( *(long*)( this + 0xa0 ) + lVar6 ) != 0) {
                  *(int*)( *(long*)( this + 0xa0 ) + lVar6 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar7 + lVar6 * 2 ), false);
                  pvVar7 = *(void**)( this + 0x98 );
                  *(undefined8*)( (long)pvVar7 + lVar6 * 2 ) = 0;
               }

               lVar6 = lVar6 + 4;
            }
 while ( lVar6 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0xbc ) = 0;
            *(undefined1(*) [16])( this + 0xa8 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_00112933;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0xa0 ), false);
   }

   LAB_00112933:RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>::clear((RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>*)( this + 0x78 ));
   if (*(void**)( this + 0x78 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 0x78 ), false);
   }

   if (*(void**)( this + 0x48 ) != (void*)0x0) {
      if (*(int*)( this + 0x40 ) != 0) {
         *(undefined4*)( this + 0x40 ) = 0;
      }

      Memory::free_static(*(void**)( this + 0x48 ), false);
   }

   RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::clear((RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>*)( this + 0x28 ));
   if (*(void**)( this + 0x28 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 0x28 ), false);
      return;
   }

   return;
}
/* WARNING: Control flow encountered bad instruction data *//* PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey,
   RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData, void
   (RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey)>::~PipelineHashMapRD()
    */void PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey)>::~PipelineHashMapRD(PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardClustered::ShaderData::PipelineKey)> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RendererRD::MaterialStorage::ShaderData::~ShaderData() */void RendererRD::MaterialStorage::ShaderData::~ShaderData(ShaderData *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions() */void ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions(DefaultIdentifierActions *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ShaderCompiler::IdentifierActions::~IdentifierActions() */void ShaderCompiler::IdentifierActions::~IdentifierActions(IdentifierActions *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* SceneForwardClusteredShaderRD::~SceneForwardClusteredShaderRD() */void SceneForwardClusteredShaderRD::~SceneForwardClusteredShaderRD(SceneForwardClusteredShaderRD *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* Vector<unsigned int>::~Vector() */void Vector<unsigned_int>::~Vector(Vector<unsigned_int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


/* RendererSceneRenderImplementation::RenderForwardMobile::_render_buffers_get_luminance_multiplier()
    */undefined4 RendererSceneRenderImplementation::RenderForwardMobile::_render_buffers_get_luminance_multiplier(void) {
   return _LC0;
}
/* RendererSceneRenderImplementation::RenderForwardMobile::_render_buffers_get_color_format() */undefined8 RendererSceneRenderImplementation::RenderForwardMobile::_render_buffers_get_color_format(void) {
   return 0x3f;
}
/* RendererSceneRenderImplementation::RenderForwardMobile::is_dynamic_gi_supported() const */undefined8 RendererSceneRenderImplementation::RenderForwardMobile::is_dynamic_gi_supported(void) {
   return 0;
}
/* RendererSceneRenderImplementation::RenderForwardMobile::_render_sdfgi(Ref<RenderSceneBuffersRD>,
   Vector3i const&, Vector3i const&, AABB const&, PagedArray<RenderGeometryInstance*> const&, RID
   const&, RID const&, RID const&, RID const&, float) */void RendererSceneRenderImplementation::RenderForwardMobile::_render_sdfgi(void) {
   return;
}
/* RendererSceneRenderImplementation::RenderForwardMobile::_render_buffers_get_velocity_texture(Ref<RenderSceneBuffersRD>)
    */undefined8 RendererSceneRenderImplementation::RenderForwardMobile::_render_buffers_get_velocity_texture(void) {
   return 0;
}
/* RendererSceneRenderImplementation::RenderForwardMobile::geometry_instance_get_pair_mask() */undefined8 RendererSceneRenderImplementation::RenderForwardMobile::geometry_instance_get_pair_mask(void) {
   return 0xe0;
}
/* RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::set_softshadow_projector_pairing(bool,
   bool) */void RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::set_softshadow_projector_pairing(GeometryInstanceForwardMobile *this, bool param_1, bool param_2) {
   this[0xb8] = (GeometryInstanceForwardMobile)param_2;
   this[0xb9] = (GeometryInstanceForwardMobile)param_1;
   return;
}
/* RendererSceneRenderImplementation::RenderForwardMobile::get_max_elements() const */undefined8 RendererSceneRenderImplementation::RenderForwardMobile::get_max_elements(void) {
   return 0x100;
}
/* RendererSceneRenderImplementation::RenderForwardMobile::ForwardIDStorageMobile::free_forward_id(RendererRD::ForwardIDType,
   int) */void RendererSceneRenderImplementation::RenderForwardMobile::ForwardIDStorageMobile::free_forward_id(ForwardIDStorageMobile *this, int param_2, uint param_3) {
   uint uVar1;
   code *pcVar2;
   uVar1 = *(uint*)( this + (long)param_2 * 0x30 + 8 );
   if (( -1 < (int)param_3 ) && ( (int)param_3 < (int)uVar1 )) {
      if (param_3 < uVar1) {
         *(undefined1*)( *(long*)( this + (long)param_2 * 0x30 + 0x10 ) + (long)(int)param_3 ) = 0;
         return;
      }

      _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (long)(int)param_3, (ulong)uVar1, "p_index", "count", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   _err_print_index_error("free_forward_id", "servers/rendering/renderer_rd/forward_mobile/render_forward_mobile.cpp", 0x42, (long)(int)param_3, (long)(int)uVar1, "p_id", "(RendererRD::ForwardID)forward_id_allocators[p_type].allocations.size()", "", false, false);
   return;
}
/* RendererSceneRenderImplementation::RenderForwardMobile::ForwardIDStorageMobile::allocate_forward_id(RendererRD::ForwardIDType)
    */ulong RendererSceneRenderImplementation::RenderForwardMobile::ForwardIDStorageMobile::allocate_forward_id(ForwardIDStorageMobile *this, int param_2) {
   uint uVar1;
   code *pcVar2;
   char *pcVar3;
   void *pvVar4;
   long lVar5;
   uint uVar6;
   char *pcVar7;
   ulong uVar8;
   long lVar9;
   uVar8 = 0;
   lVar9 = (long)param_2;
   pcVar3 = *(char**)( this + lVar9 * 0x30 + 0x10 );
   uVar1 = *(uint*)( this + lVar9 * 0x30 + 8 );
   pcVar7 = pcVar3;
   if (uVar1 != 0) {
      do {
         if (*pcVar7 == '\0') {
            if (uVar1 <= (uint)uVar8) {
               _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar8, (ulong)uVar1, "p_index", "count", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            *pcVar7 = '\x01';
            return uVar8;
         }

         uVar6 = (uint)uVar8 + 1;
         uVar8 = (ulong)uVar6;
         pcVar7 = pcVar7 + 1;
      }
 while ( uVar6 != uVar1 );
   }

   uVar6 = uVar1;
   if (uVar1 == *(uint*)( this + lVar9 * 0x30 + 0xc )) {
      uVar6 = uVar1 * 2;
      if (uVar6 == 0) {
         uVar6 = 1;
      }

      *(uint*)( this + lVar9 * 0x30 + 0xc ) = uVar6;
      pcVar3 = (char*)Memory::realloc_static(pcVar3, (ulong)uVar6, false);
      *(char**)( this + lVar9 * 0x30 + 0x10 ) = pcVar3;
      if (pcVar3 == (char*)0x0) goto LAB_00100307;
      uVar6 = *(uint*)( this + lVar9 * 0x30 + 8 );
   }

   *(uint*)( this + lVar9 * 0x30 + 8 ) = uVar6 + 1;
   pcVar3[uVar6] = '\x01';
   uVar6 = *(uint*)( this + lVar9 * 0x30 + 0x18 );
   pvVar4 = *(void**)( this + lVar9 * 0x30 + 0x20 );
   if (uVar6 == *(uint*)( this + lVar9 * 0x30 + 0x1c )) {
      uVar6 = uVar6 * 2;
      if (uVar6 == 0) {
         uVar6 = 1;
      }

      *(uint*)( this + lVar9 * 0x30 + 0x1c ) = uVar6;
      pvVar4 = (void*)Memory::realloc_static(pvVar4, (ulong)uVar6, false);
      *(void**)( this + lVar9 * 0x30 + 0x20 ) = pvVar4;
      if (pvVar4 == (void*)0x0) goto LAB_00100307;
      uVar6 = *(uint*)( this + lVar9 * 0x30 + 0x18 );
   }

   *(uint*)( this + lVar9 * 0x30 + 0x18 ) = uVar6 + 1;
   *(undefined1*)( (long)pvVar4 + (ulong)uVar6 ) = 0xff;
   uVar6 = *(uint*)( this + lVar9 * 0x30 + 0x28 );
   if (uVar6 == *(uint*)( this + lVar9 * 0x30 + 0x2c )) {
      uVar8 = ( ulong )(uVar6 * 2);
      if (uVar6 * 2 == 0) {
         uVar8 = 1;
      }

      *(int*)( this + lVar9 * 0x30 + 0x2c ) = (int)uVar8;
      lVar5 = Memory::realloc_static(*(void**)( this + lVar9 * 0x30 + 0x30 ), uVar8 * 8, false);
      *(long*)( this + lVar9 * 0x30 + 0x30 ) = lVar5;
      if (lVar5 == 0) {
         LAB_00100307:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      uVar6 = *(uint*)( this + lVar9 * 0x30 + 0x28 );
   }
 else {
      lVar5 = *(long*)( this + lVar9 * 0x30 + 0x30 );
   }

   *(uint*)( this + lVar9 * 0x30 + 0x28 ) = uVar6 + 1;
   *(undefined8*)( lVar5 + (ulong)uVar6 * 8 ) = 0;
   return (ulong)uVar1;
}
/* RendererSceneRenderImplementation::RenderForwardMobile::ForwardIDStorageMobile::map_forward_id(RendererRD::ForwardIDType,
   int, unsigned int, unsigned long) */void RendererSceneRenderImplementation::RenderForwardMobile::ForwardIDStorageMobile::map_forward_id(ForwardIDStorageMobile *this, int param_2, uint param_3, undefined1 param_4, undefined8 param_5) {
   uint uVar1;
   code *pcVar2;
   uVar1 = *(uint*)( this + (long)param_2 * 0x30 + 0x18 );
   if (param_3 < uVar1) {
      *(undefined1*)( *(long*)( this + (long)param_2 * 0x30 + 0x20 ) + (ulong)param_3 ) = param_4;
      uVar1 = *(uint*)( this + (long)param_2 * 0x30 + 0x28 );
      if (param_3 < uVar1) {
         *(undefined8*)( *(long*)( this + (long)param_2 * 0x30 + 0x30 ) + (ulong)param_3 * 8 ) = param_5;
         return;
      }

   }

   _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)param_3, (ulong)uVar1, "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::pair_decal_instances(RID
   const*, unsigned int) */void RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::pair_decal_instances(GeometryInstanceForwardMobile *this, RID *param_1, uint param_2) {
   ulong uVar1;
   code *pcVar2;
   uint uVar3;
   long lVar4;
   long lVar5;
   uVar3 = 8;
   if (param_2 < 9) {
      uVar3 = param_2;
   }

   *(uint*)( this + 0x15c ) = uVar3;
   if (param_2 == 0) {
      return;
   }

   lVar5 = 0;
   while (true) {
      lVar4 = RendererRD::TextureStorage::get_singleton();
      uVar1 = *(ulong*)( param_1 + lVar5 * 8 );
      if (( uVar1 == 0 ) || ( *(uint*)( lVar4 + 0x234 ) <= (uint)uVar1 )) break;
      lVar4 = ( ( uVar1 & 0xffffffff ) % ( ulong ) * (uint*)( lVar4 + 0x230 ) ) * 0x50 + *(long*)( *(long*)( lVar4 + 0x220 ) + ( ( uVar1 & 0xffffffff ) / ( ulong ) * (uint*)( lVar4 + 0x230 ) ) * 8 );
      if (*(int*)( lVar4 + 0x48 ) != (int)( uVar1 >> 0x20 )) {
         if (*(int*)( lVar4 + 0x48 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, lVar4);
         }

         break;
      }

      *(undefined4*)( this + lVar5 * 4 + 0x160 ) = *(undefined4*)( lVar4 + 0x40 );
      lVar5 = lVar5 + 1;
      if (*(uint*)( this + 0x15c ) <= (uint)lVar5) {
         return;
      }

   }
;
   ;;
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* RendererSceneRenderImplementation::RenderForwardMobile::get_pipeline_compilations(RenderingServer::PipelineSource)
    */void RendererSceneRenderImplementation::RenderForwardMobile::get_pipeline_compilations(long param_1) {
   RendererSceneRenderImplementation::SceneShaderForwardMobile::get_pipeline_compilations(param_1 + 0x24b0);
   return;
}
/* RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::pair_light_instances(RID
   const*, unsigned int) */void RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::pair_light_instances(RID *param_1, uint param_2) {
   ulong *puVar1;
   int iVar2;
   ulong uVar3;
   code *pcVar4;
   uint uVar5;
   long lVar6;
   uint in_EDX;
   int *piVar7;
   undefined4 in_register_00000034;
   ulong *puVar8;
   undefined8 in_R9;
   puVar8 = (ulong*)CONCAT44(in_register_00000034, param_2);
   *(undefined4*)( param_1 + 0x114 ) = 0;
   *(undefined4*)( param_1 + 0x138 ) = 0;
   if (in_EDX == 0) {
      return;
   }

   puVar1 = puVar8 + in_EDX;
   while (true) {
      lVar6 = RendererRD::LightStorage::get_singleton();
      uVar3 = *puVar8;
      if (( uVar3 == 0 ) || ( *(uint*)( lVar6 + 0x84 ) <= (uint)uVar3 )) break;
      piVar7 = (int*)( ( ( uVar3 & 0xffffffff ) % ( ulong ) * (uint*)( lVar6 + 0x80 ) ) * 0x498 + *(long*)( *(long*)( lVar6 + 0x70 ) + ( ( uVar3 & 0xffffffff ) / ( ulong ) * (uint*)( lVar6 + 0x80 ) ) * 8 ) );
      iVar2 = piVar7[0x124];
      if (iVar2 != (int)( uVar3 >> 0x20 )) {
         if (iVar2 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, in_R9);
         }

         break;
      }

      iVar2 = *piVar7;
      if (iVar2 == 1) {
         if (*(uint*)( param_1 + 0x114 ) < 8) {
            lVar6 = RendererRD::LightStorage::get_singleton();
            uVar3 = *puVar8;
            uVar5 = *(uint*)( param_1 + 0x114 );
            if (( uVar3 == 0 ) || ( *(uint*)( lVar6 + 0x84 ) <= (uint)uVar3 )) {
               LAB_0011dae0:/* WARNING: Does not return */pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

            lVar6 = ( ( uVar3 & 0xffffffff ) % ( ulong ) * (uint*)( lVar6 + 0x80 ) ) * 0x498 + *(long*)( *(long*)( lVar6 + 0x70 ) + ( ( uVar3 & 0xffffffff ) / ( ulong ) * (uint*)( lVar6 + 0x80 ) ) * 8 );
            iVar2 = *(int*)( lVar6 + 0x490 );
            if (iVar2 != (int)( uVar3 >> 0x20 )) {
               if (iVar2 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, uVar3 >> 0x20);
               }

               goto LAB_0011dae0;
            }

            *(undefined4*)( param_1 + (ulong)uVar5 * 4 + 0x118 ) = *(undefined4*)( lVar6 + 0x488 );
            *(uint*)( param_1 + 0x114 ) = uVar5 + 1;
         }

      }
 else if (( iVar2 == 2 ) && ( *(uint*)( param_1 + 0x138 ) < 8 )) {
         lVar6 = RendererRD::LightStorage::get_singleton();
         uVar3 = *puVar8;
         uVar5 = *(uint*)( param_1 + 0x138 );
         if (( uVar3 == 0 ) || ( *(uint*)( lVar6 + 0x84 ) <= (uint)uVar3 )) {
            LAB_0011dacb:/* WARNING: Does not return */pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar6 = ( ( uVar3 & 0xffffffff ) % ( ulong ) * (uint*)( lVar6 + 0x80 ) ) * 0x498 + *(long*)( *(long*)( lVar6 + 0x70 ) + ( ( uVar3 & 0xffffffff ) / ( ulong ) * (uint*)( lVar6 + 0x80 ) ) * 8 );
         iVar2 = *(int*)( lVar6 + 0x490 );
         if (iVar2 != (int)( uVar3 >> 0x20 )) {
            uVar5 = iVar2 + 0x80000000;
            if (uVar5 < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, uVar5);
            }

            goto LAB_0011dacb;
         }

         *(undefined4*)( param_1 + (ulong)uVar5 * 4 + 0x13c ) = *(undefined4*)( lVar6 + 0x488 );
         *(uint*)( param_1 + 0x138 ) = uVar5 + 1;
      }

      puVar8 = puVar8 + 1;
      if (puVar8 == puVar1) {
         return;
      }

   }
;
   ;;
   /* WARNING: Does not return */
   pcVar4 = (code*)invalidInstructionException();
   ( *pcVar4 )();
}
/* RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::pair_reflection_probe_instances(RID
   const*, unsigned int) */void RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::pair_reflection_probe_instances(GeometryInstanceForwardMobile *this, RID *param_1, uint param_2) {
   int iVar1;
   ulong uVar2;
   uint uVar3;
   undefined4 uVar4;
   long lVar5;
   long lVar6;
   uVar3 = 8;
   if (param_2 < 9) {
      uVar3 = param_2;
   }

   *(uint*)( this + 0xf0 ) = uVar3;
   if (param_2 == 0) {
      return;
   }

   lVar6 = 0;
   do {
      lVar5 = RendererRD::LightStorage::get_singleton();
      uVar2 = *(ulong*)( param_1 + lVar6 * 8 );
      if (( uVar2 == 0 ) || ( *(uint*)( lVar5 + 0x1e4 ) <= (uint)uVar2 )) {
         LAB_00100706:_err_print_error("reflection_probe_instance_get_forward_id", "./servers/rendering/renderer_rd/storage_rd/light_storage.h", 0x39c, "Parameter \"rpi\" is null.", 0);
         uVar4 = 0;
      }
 else {
         lVar5 = ( ( uVar2 & 0xffffffff ) % ( ulong ) * (uint*)( lVar5 + 0x1e0 ) ) * 0x70 + *(long*)( *(long*)( lVar5 + 0x1d0 ) + ( ( uVar2 & 0xffffffff ) / ( ulong ) * (uint*)( lVar5 + 0x1e0 ) ) * 8 );
         iVar1 = *(int*)( lVar5 + 0x68 );
         if (iVar1 != (int)( uVar2 >> 0x20 )) {
            if (iVar1 + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

            goto LAB_00100706;
         }

         uVar4 = *(undefined4*)( lVar5 + 0x34 );
      }

      *(undefined4*)( this + lVar6 * 4 + 0xf4 ) = uVar4;
      lVar6 = lVar6 + 1;
      if (*(uint*)( this + 0xf0 ) <= (uint)lVar6) {
         return;
      }

   }
 while ( true );
}
/* RendererSceneRenderImplementation::RenderForwardMobile::base_uniforms_changed() */void RendererSceneRenderImplementation::RenderForwardMobile::base_uniforms_changed(RenderForwardMobile *this) {
   undefined8 uVar1;
   char cVar2;
   if (*(long*)( this + 0x2bf0 ) != 0) {
      uVar1 = RenderingDevice::get_singleton();
      cVar2 = RenderingDevice::uniform_set_is_valid(uVar1, *(undefined8*)( this + 0x2bf0 ));
      if (cVar2 != '\0') {
         uVar1 = RenderingDevice::get_singleton();
         RenderingDevice::free(uVar1, *(undefined8*)( this + 0x2bf0 ));
         *(undefined8*)( this + 0x2bf0 ) = 0;
         return;
      }

   }

   *(undefined8*)( this + 0x2bf0 ) = 0;
   return;
}
/* RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::configure(RenderSceneBuffersRD*)
    */void RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::configure(RenderBufferDataForwardMobile *this, RenderSceneBuffersRD *param_1) {
   if (*(long*)( this + 0x180 ) != 0) {
      ( **(code**)( *(long*)this + 0x158 ) )();
   }

   *(RenderSceneBuffersRD**)( this + 0x180 ) = param_1;
   if (param_1 != (RenderSceneBuffersRD*)0x0) {
      return;
   }

   _err_print_error("configure", "servers/rendering/renderer_rd/forward_mobile/render_forward_mobile.cpp", 0xa5, "Parameter \"render_buffers\" is null.", 0, 0);
   return;
}
/* LocalVector<RendererSceneRenderImplementation::RenderForwardMobile::SceneState::ShadowPass,
   unsigned int, false, false>::resize(unsigned int) [clone .part.0] */void LocalVector<RendererSceneRenderImplementation::RenderForwardMobile::SceneState::ShadowPass,unsigned_int,false,false>::resize(uint param_1) {
   code *pcVar1;
   _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
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
/* CowData<RenderingDevice::AttachmentFormat>::_copy_on_write() [clone .isra.0] */void CowData<RenderingDevice::AttachmentFormat>::_copy_on_write(CowData<RenderingDevice::AttachmentFormat> *this) {
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
/* CowData<Pair<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData*,
   RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>
   >::_copy_on_write() [clone .isra.0] */void CowData<Pair<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData*,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>>::_copy_on_write(CowData<Pair<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData*,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>> *this) {
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
   __n = lVar2 * 0x40;
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
/* HashMap<DependencyTracker*, unsigned int, HashMapHasherDefault,
   HashMapComparatorDefault<DependencyTracker*>,
   DefaultTypedAllocator<HashMapElement<DependencyTracker*, unsigned int> >
   >::erase(DependencyTracker* const&) [clone .isra.0] */void HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>::erase(HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>> *this, DependencyTracker **param_1) {
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
      uVar29 = (long)*param_1 * 0x3ffff - 1;
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
            if (( (uint)uVar32 == uVar37 ) && ( *param_1 == *(DependencyTracker**)( *(long*)( lVar6 + uVar29 * 8 ) + 0x10 ) )) {
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
                  ;;
               }

               plVar4 = (long*)( lVar6 + uVar33 * 8 );
               *(undefined4*)( lVar7 + uVar33 * 4 ) = 0;
               plVar34 = (long*)*plVar4;
               if (*(long**)( this + 0x18 ) == plVar34) {
                  *(long*)( this + 0x18 ) = *plVar34;
                  plVar34 = (long*)*plVar4;
                  if (*(long**)( this + 0x20 ) != plVar34) goto LAB_00100de9;
               }
 else if (*(long**)( this + 0x20 ) != plVar34) {
                  LAB_00100de9:plVar10 = (long*)plVar34[1];
                  goto joined_r0x00100df0;
               }

               *(long*)( this + 0x20 ) = plVar34[1];
               plVar34 = (long*)*plVar4;
               plVar10 = (long*)plVar34[1];
               joined_r0x00100df0:if (plVar10 != (long*)0x0) {
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
/* RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::free_data()
    */void RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::free_data(RenderBufferDataForwardMobile *this) {
   StringName *pSVar1;
   long lVar2;
   int iVar3;
   long in_FS_OFFSET;
   pSVar1 = *(StringName**)( this + 0x180 );
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (pSVar1 == (StringName*)0x0) {
      if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      if (free_data()::{lambda()
      #1iVar3 = __cxa_guard_acquire(&free_data()::{lambda()#1}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&free_data()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&free_data()::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&free_data()::{lambda()#1}::operator()()::sname);
      }
    }
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      RenderSceneBuffersRD::clear_context(pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::_mark_dirty()
   [clone .part.0] */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::_mark_dirty
          (GeometryInstanceForwardMobile *this)

{
  GeometryInstanceForwardMobile *pGVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  
  lVar8 = singleton;
  if (*(long *)(this + 0x180) != 0) {
    uVar2 = *(undefined4 *)(singleton + 0x3010);
    lVar3 = *(long *)(singleton + 0x3000);
    lVar10 = *(long *)(this + 0x180);
    uVar9 = *(uint *)(singleton + 0x300c);
    do {
      lVar4 = *(long *)(lVar10 + 0x58);
      plVar5 = *(long **)(lVar10 + 0x88);
      if (plVar5 != (long *)0x0) {
        lVar6 = *(long *)(lVar10 + 0x98);
        if (lVar6 != 0) {
          *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(lVar10 + 0xa0);
        }
        lVar7 = *(long *)(lVar10 + 0xa0);
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x10) = lVar6;
        }
        if (lVar10 + 0x88 == *plVar5) {
          *plVar5 = *(long *)(lVar10 + 0x98);
          lVar6 = plVar5[1];
        }
        else {
          lVar6 = plVar5[1];
        }
        if (lVar10 + 0x88 == lVar6) {
          plVar5[1] = lVar7;
        }
      }
      plVar5 = *(long **)(lVar10 + 0x68);
      if (plVar5 != (long *)0x0) {
        lVar6 = *(long *)(lVar10 + 0x78);
        if (lVar6 != 0) {
          *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(lVar10 + 0x80);
        }
        lVar7 = *(long *)(lVar10 + 0x80);
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x10) = lVar6;
        }
        if (lVar10 + 0x68 == *plVar5) {
          *plVar5 = *(long *)(lVar10 + 0x78);
        }
        if (lVar10 + 0x68 == plVar5[1]) {
          plVar5[1] = lVar7;
        }
      }
      *(long *)(*(long *)(lVar3 + (ulong)(uVar9 >> ((byte)uVar2 & 0x1f)) * 8) +
               (ulong)(uVar9 & *(uint *)(lVar8 + 0x3014)) * 8) = lVar10;
      *(uint *)(lVar8 + 0x300c) = uVar9 + 1;
      lVar10 = lVar4;
      uVar9 = uVar9 + 1;
    } while (lVar4 != 0);
  }
  *(undefined8 *)(this + 0x180) = 0;
  pGVar1 = this + 0x188;
  if (*(long *)(this + 0x188) == 0) {
    *(long *)(this + 0x188) = lVar8 + 0x2f60;
    lVar3 = *(long *)(lVar8 + 0x2f60);
    *(undefined8 *)(this + 0x1a0) = 0;
    *(long *)(this + 0x198) = lVar3;
    if (lVar3 == 0) {
      *(GeometryInstanceForwardMobile **)(lVar8 + 0x2f68) = pGVar1;
      *(GeometryInstanceForwardMobile **)(lVar8 + 0x2f60) = pGVar1;
      return;
    }
    *(GeometryInstanceForwardMobile **)(lVar3 + 0x18) = pGVar1;
    *(GeometryInstanceForwardMobile **)(lVar8 + 0x2f60) = pGVar1;
    return;
  }
  _err_print_error(&_LC42,"./core/templates/self_list.h",0x2e,"Condition \"p_elem->_root\" is true."
                   ,0,0);
  return;
}



/* RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::_mark_dirty()
    */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::_mark_dirty
          (GeometryInstanceForwardMobile *this)

{
  if (*(long *)(this + 0x188) != 0) {
    return;
  }
  _mark_dirty(this);
  return;
}



/* RendererSceneRenderImplementation::RenderForwardMobile::_geometry_instance_dependency_deleted(RID
   const&, DependencyTracker*) */

void RendererSceneRenderImplementation::RenderForwardMobile::_geometry_instance_dependency_deleted
               (RID *param_1,DependencyTracker *param_2)

{
  GeometryInstanceForwardMobile *this;
  
  this = *(GeometryInstanceForwardMobile **)param_2;
  if (*(code **)(*(long *)this + 0x10) != GeometryInstanceForwardMobile::_mark_dirty) {
    (**(code **)(*(long *)this + 0x10))();
    *(undefined1 *)(*(long *)(*(long *)param_2 + 0xa8) + 0x53) = 1;
    return;
  }
  if (*(long *)(this + 0x188) != 0) {
    *(undefined1 *)(*(long *)(this + 0xa8) + 0x53) = 1;
    return;
  }
  GeometryInstanceForwardMobile::_mark_dirty(this);
  *(undefined1 *)(*(long *)(*(long *)param_2 + 0xa8) + 0x53) = 1;
  return;
}



/* RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::set_use_lightmap(RID,
   Rect2 const&, int) */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::
set_use_lightmap(GeometryInstanceForwardMobile *this,undefined8 param_2,undefined8 *param_3,
                undefined4 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *(undefined8 *)(this + 200) = param_2;
  *(undefined4 *)(this + 0xe0) = param_4;
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)this + 0x10);
  *(undefined8 *)(this + 0xd0) = uVar1;
  *(undefined8 *)(this + 0xd8) = uVar2;
  if (UNRECOVERED_JUMPTABLE != _mark_dirty) {
                    /* WARNING: Could not recover jumptable at 0x00101228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (*(long *)(this + 0x188) != 0) {
    return;
  }
  _mark_dirty(this);
  return;
}



/* RendererSceneRenderImplementation::RenderForwardMobile::_geometry_instance_dependency_changed(Dependency::DependencyChangedNotification,
   DependencyTracker*) */

void RendererSceneRenderImplementation::RenderForwardMobile::_geometry_instance_dependency_changed
               (uint param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  GeometryInstanceForwardMobile *this;
  
  if (param_1 == 4) {
    lVar1 = *param_2;
    if (*(int *)(*(long *)(lVar1 + 0xa8) + 8) != 2) {
      return;
    }
    lVar5 = RendererRD::MeshStorage::get_singleton();
    uVar2 = **(ulong **)(lVar1 + 0xa8);
    if ((uVar2 != 0) && ((uint)uVar2 < *(uint *)(lVar5 + 0x19c))) {
      lVar5 = ((uVar2 & 0xffffffff) % (ulong)*(uint *)(lVar5 + 0x198)) * 0x160 +
              *(long *)(*(long *)(lVar5 + 0x188) +
                       ((uVar2 & 0xffffffff) / (ulong)*(uint *)(lVar5 + 0x198)) * 8);
      if (*(int *)(lVar5 + 0x158) == (int)(uVar2 >> 0x20)) {
        iVar4 = *(int *)(lVar5 + 0x14);
        if (iVar4 < 0) {
          iVar4 = *(int *)(lVar5 + 8);
        }
        *(int *)(lVar1 + 0xbc) = iVar4;
        return;
      }
      if (*(int *)(lVar5 + 0x158) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0,lVar5);
      }
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (param_1 < 5) {
    if (2 < param_1 - 1) {
      return;
    }
  }
  else if ((param_1 != 5) && (param_1 != 8)) {
    return;
  }
  this = (GeometryInstanceForwardMobile *)*param_2;
  if (*(code **)(*(long *)this + 0x10) == GeometryInstanceForwardMobile::_mark_dirty) {
    if (*(long *)(this + 0x188) == 0) {
      GeometryInstanceForwardMobile::_mark_dirty(this);
      *(undefined1 *)(*(long *)(*param_2 + 0xa8) + 0x53) = 1;
      return;
    }
  }
  else {
    (**(code **)(*(long *)this + 0x10))();
    this = (GeometryInstanceForwardMobile *)*param_2;
  }
  *(undefined1 *)(*(long *)(this + 0xa8) + 0x53) = 1;
  return;
}



/* RendererSceneRenderImplementation::RenderForwardMobile::_update_shader_quality_settings() */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::_update_shader_quality_settings
          (RenderForwardMobile *this)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  RendererSceneRenderImplementation::SceneShaderForwardMobile::set_default_specialization
            ((ShaderSpecialization *)(this + 0x24b0));
  if (*(code **)(*(long *)this + 0x260) == base_uniforms_changed) {
    if (*(long *)(this + 0x2bf0) != 0) {
      uVar3 = RenderingDevice::get_singleton();
      cVar2 = RenderingDevice::uniform_set_is_valid(uVar3,*(undefined8 *)(this + 0x2bf0));
      if (cVar2 != '\0') {
        uVar3 = RenderingDevice::get_singleton();
        RenderingDevice::free(uVar3,*(undefined8 *)(this + 0x2bf0));
      }
    }
    *(undefined8 *)(this + 0x2bf0) = 0;
  }
  else {
    (**(code **)(*(long *)this + 0x260))(this);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<RendererSceneRenderImplementation::RenderForwardMobile::ForwardIDByMapSort,
   _DefaultComparator<RendererSceneRenderImplementation::RenderForwardMobile::ForwardIDByMapSort>,
   true>::introsort(long, long,
   RendererSceneRenderImplementation::RenderForwardMobile::ForwardIDByMapSort*, long) const [clone
   .isra.0] */

void SortArray<RendererSceneRenderImplementation::RenderForwardMobile::ForwardIDByMapSort,_DefaultComparator<RendererSceneRenderImplementation::RenderForwardMobile::ForwardIDByMapSort>,true>
     ::introsort(long param_1,long param_2,ForwardIDByMapSort *param_3,long param_4)

{
  ForwardIDByMapSort *pFVar1;
  ForwardIDByMapSort FVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ForwardIDByMapSort FVar6;
  long lVar7;
  long lVar8;
  ForwardIDByMapSort *pFVar9;
  long lVar10;
  long lVar11;
  ForwardIDByMapSort *pFVar12;
  long lVar13;
  ForwardIDByMapSort *pFVar14;
  ForwardIDByMapSort FVar15;
  long local_58;
  
  lVar13 = param_2 - param_1;
  if (lVar13 < 0x11) {
    return;
  }
  if (param_4 != 0) {
    lVar10 = param_2;
    local_58 = param_4;
LAB_001014e1:
    local_58 = local_58 + -1;
    FVar2 = param_3[lVar10 * 8 + -8];
    FVar15 = param_3[param_1 * 8];
    FVar6 = param_3[((lVar13 >> 1) + param_1) * 8];
    if ((byte)FVar6 < (byte)FVar15) {
      if ((byte)FVar2 < (byte)FVar15) {
        FVar15 = FVar2;
      }
      if ((byte)FVar2 < (byte)FVar6) {
        FVar15 = FVar6;
      }
    }
    else {
      if ((byte)FVar2 < (byte)FVar6) {
        FVar6 = FVar2;
      }
      if ((byte)FVar15 <= (byte)FVar2) {
        FVar15 = FVar6;
      }
    }
    lVar13 = lVar10;
    param_2 = param_1;
    do {
      if ((byte)FVar15 < (byte)param_3[param_2 * 8]) {
        if (lVar10 + -1 == param_2) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0,0);
          goto LAB_00101551;
        }
      }
      else {
LAB_00101551:
        lVar13 = lVar13 + -1;
        pFVar14 = param_3 + lVar13 * 8;
        if ((byte)*pFVar14 < (byte)FVar15) {
          pFVar9 = param_3 + lVar13 * 8 + -8;
          while (param_1 != lVar13) {
            lVar13 = lVar13 + -1;
            pFVar14 = pFVar9;
            if ((byte)FVar15 <= (byte)*pFVar9) goto LAB_001015ba;
            pFVar9 = pFVar9 + -8;
          }
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                           "bad comparison function; sorting will be broken",0,0);
        }
LAB_001015ba:
        if (lVar13 <= param_2) goto LAB_001015e0;
        FVar2 = param_3[param_2 * 8];
        uVar3 = *(undefined4 *)(param_3 + param_2 * 8 + 4);
        *(undefined8 *)(param_3 + param_2 * 8) = *(undefined8 *)pFVar14;
        *pFVar14 = FVar2;
        *(undefined4 *)(pFVar14 + 4) = uVar3;
      }
      param_2 = param_2 + 1;
    } while( true );
  }
LAB_00101689:
  lVar11 = lVar13 + -2 >> 1;
  lVar10 = lVar11 * 2 + 2;
  pFVar14 = param_3 + (param_1 + lVar11) * 8;
  do {
    FVar2 = *pFVar14;
    uVar3 = *(undefined4 *)(pFVar14 + 4);
    lVar4 = lVar10;
    lVar8 = lVar11;
    if (lVar10 < lVar13) {
      do {
        lVar5 = lVar4 + -1;
        lVar7 = lVar4;
        pFVar9 = param_3 + (param_1 + lVar4 + -1) * 8;
        if ((byte)param_3[(param_1 + lVar4) * 8] <= (byte)param_3[(param_1 + lVar4 + -1) * 8]) {
          lVar7 = lVar4 + 1;
          lVar5 = lVar4;
          pFVar9 = param_3 + (param_1 + lVar4) * 8;
        }
        lVar4 = lVar7 * 2;
        *(undefined8 *)(param_3 + (param_1 + lVar8) * 8) = *(undefined8 *)pFVar9;
        lVar8 = lVar5;
      } while (lVar13 != lVar4 && SBORROW8(lVar13,lVar4) == lVar13 + lVar7 * -2 < 0);
      pFVar12 = pFVar9;
      if (lVar13 == lVar4) {
LAB_0010187e:
        lVar5 = lVar4 + -1;
        pFVar9 = param_3 + (param_1 + lVar5) * 8;
        *(undefined8 *)pFVar12 = *(undefined8 *)pFVar9;
      }
      lVar4 = lVar5 + -1;
      if (lVar5 <= lVar11) goto LAB_001018c8;
      do {
        lVar8 = lVar4 >> 1;
        pFVar9 = param_3 + (param_1 + lVar8) * 8;
        pFVar12 = param_3 + (lVar5 + param_1) * 8;
        if ((byte)*pFVar9 <= (byte)FVar2) {
          *pFVar12 = FVar2;
          *(undefined4 *)(pFVar12 + 4) = uVar3;
          goto joined_r0x00101762;
        }
        *(undefined8 *)pFVar12 = *(undefined8 *)pFVar9;
        lVar4 = (lVar8 + -1) - (lVar8 + -1 >> 0x3f);
        lVar5 = lVar8;
      } while (lVar11 < lVar8);
      *pFVar9 = FVar2;
      *(undefined4 *)(pFVar9 + 4) = uVar3;
joined_r0x00101762:
      if (lVar11 == 0) goto LAB_00101783;
    }
    else {
      pFVar12 = pFVar14;
      pFVar9 = pFVar14;
      if (lVar10 == lVar13) goto LAB_0010187e;
LAB_001018c8:
      *pFVar9 = FVar2;
      *(undefined4 *)(pFVar9 + 4) = uVar3;
    }
    lVar11 = lVar11 + -1;
    pFVar14 = pFVar14 + -8;
    lVar10 = lVar10 + -2;
  } while( true );
LAB_001015e0:
  introsort(param_2,lVar10,param_3,local_58);
  lVar13 = param_2 - param_1;
  if (lVar13 < 0x11) {
    return;
  }
  lVar10 = param_2;
  if (local_58 == 0) goto LAB_00101689;
  goto LAB_001014e1;
LAB_00101783:
  pFVar14 = param_3 + param_2 * 8 + -8;
  lVar13 = (param_2 + -1) - param_1;
  pFVar9 = param_3 + param_1 * 8;
LAB_001017a0:
  do {
    FVar2 = *pFVar14;
    uVar3 = *(undefined4 *)(pFVar14 + 4);
    *(undefined8 *)pFVar14 = *(undefined8 *)pFVar9;
    if (lVar13 < 3) {
      if (lVar13 != 2) {
        *pFVar9 = FVar2;
        *(undefined4 *)(pFVar9 + 4) = uVar3;
        return;
      }
      lVar10 = param_1 + 1;
      lVar11 = 0;
      lVar13 = 1;
      *(undefined8 *)pFVar9 = *(undefined8 *)(param_3 + lVar10 * 8);
LAB_00101859:
      while( true ) {
        pFVar12 = param_3 + lVar10 * 8;
        pFVar1 = param_3 + (param_1 + lVar11) * 8;
        if ((byte)*pFVar1 <= (byte)FVar2) break;
        *(undefined8 *)pFVar12 = *(undefined8 *)pFVar1;
        if (lVar11 == 0) {
          pFVar14 = pFVar14 + -8;
          *pFVar1 = FVar2;
          *(undefined4 *)(pFVar1 + 4) = uVar3;
          goto LAB_001017a0;
        }
        lVar10 = param_1 + lVar11;
        lVar11 = (lVar11 + -1) / 2;
      }
    }
    else {
      lVar10 = 2;
      lVar11 = 0;
      do {
        lVar4 = lVar10 + -1;
        lVar8 = lVar10;
        pFVar12 = param_3 + (param_1 + lVar10 + -1) * 8;
        if ((byte)param_3[(param_1 + lVar10) * 8] <= (byte)param_3[(param_1 + lVar10 + -1) * 8]) {
          lVar8 = lVar10 + 1;
          lVar4 = lVar10;
          pFVar12 = param_3 + (param_1 + lVar10) * 8;
        }
        lVar10 = lVar8 * 2;
        *(undefined8 *)(param_3 + (lVar11 + param_1) * 8) = *(undefined8 *)pFVar12;
        lVar11 = lVar4;
      } while (lVar13 != lVar10 && SBORROW8(lVar13,lVar10) == lVar13 + lVar8 * -2 < 0);
      if (lVar13 == lVar10) {
        lVar10 = param_1 + lVar13 + -1;
        lVar11 = lVar13 + -2 >> 1;
        *(undefined8 *)pFVar12 = *(undefined8 *)(param_3 + lVar10 * 8);
        lVar13 = lVar13 + -1;
        goto LAB_00101859;
      }
      lVar10 = param_1 + lVar4;
      lVar13 = lVar13 + -1;
      lVar11 = (lVar4 + -1) / 2;
      if (0 < lVar4) goto LAB_00101859;
    }
    *pFVar12 = FVar2;
    pFVar14 = pFVar14 + -8;
    *(undefined4 *)(pFVar12 + 4) = uVar3;
  } while( true );
}



/* SortArray<RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceSurfaceDataCache*,
   RendererSceneRenderImplementation::RenderForwardMobile::RenderList::SortByKey,
   true>::introsort(long, long,
   RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceSurfaceDataCache**, long)
   const [clone .isra.0] */

void SortArray<RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceSurfaceDataCache*,RendererSceneRenderImplementation::RenderForwardMobile::RenderList::SortByKey,true>
     ::introsort(long param_1,long param_2,GeometryInstanceSurfaceDataCache **param_3,long param_4)

{
  GeometryInstanceSurfaceDataCache *pGVar1;
  ulong uVar2;
  GeometryInstanceSurfaceDataCache *pGVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  GeometryInstanceSurfaceDataCache **ppGVar9;
  long lVar10;
  GeometryInstanceSurfaceDataCache **ppGVar11;
  long lVar12;
  GeometryInstanceSurfaceDataCache *pGVar13;
  GeometryInstanceSurfaceDataCache **ppGVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  GeometryInstanceSurfaceDataCache *pGVar18;
  bool bVar19;
  long local_58;
  
  lVar17 = param_2 - param_1;
  if (lVar17 < 0x11) {
    return;
  }
  if (param_4 != 0) {
    lVar16 = param_2;
    local_58 = param_4;
LAB_00101954:
    local_58 = local_58 + -1;
    pGVar13 = param_3[(lVar17 >> 1) + param_1];
    pGVar1 = param_3[param_1];
    uVar2 = *(ulong *)(pGVar13 + 8);
    uVar8 = *(ulong *)(pGVar1 + 8);
    bVar19 = uVar8 < uVar2;
    if (uVar8 == uVar2) {
      bVar19 = *(ulong *)pGVar1 < *(ulong *)pGVar13;
    }
    pGVar3 = param_3[lVar16 + -1];
    uVar4 = *(ulong *)(pGVar3 + 8);
    if (bVar19) {
      bVar19 = uVar2 < uVar4;
      if (uVar2 == uVar4) {
        bVar19 = *(ulong *)pGVar13 < *(ulong *)pGVar3;
      }
      uVar5 = uVar2;
      pGVar18 = pGVar13;
      if (!bVar19) {
        bVar19 = uVar8 < uVar4;
        if (uVar8 == uVar4) {
          bVar19 = *(ulong *)pGVar1 < *(ulong *)pGVar3;
        }
        uVar5 = uVar4;
        pGVar18 = pGVar3;
        if (!bVar19) {
          uVar5 = uVar8;
          pGVar18 = pGVar1;
        }
      }
    }
    else {
      bVar19 = uVar8 < uVar4;
      if (uVar8 == uVar4) {
        bVar19 = *(ulong *)pGVar1 < *(ulong *)pGVar3;
      }
      uVar5 = uVar8;
      pGVar18 = pGVar1;
      if (!bVar19) {
        bVar19 = uVar2 < uVar4;
        if (uVar2 == uVar4) {
          bVar19 = *(ulong *)pGVar13 < *(ulong *)pGVar3;
        }
        uVar5 = uVar4;
        pGVar18 = pGVar3;
        if (!bVar19) {
          uVar5 = uVar2;
          pGVar18 = pGVar13;
        }
      }
    }
    lVar17 = lVar16;
    param_2 = param_1;
    do {
      if (uVar8 == uVar5) {
        if (*(ulong *)pGVar18 <= *(ulong *)param_3[param_2]) goto LAB_00101a10;
LAB_001019e2:
        if (lVar16 + -1 == param_2) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0,0);
          uVar5 = *(ulong *)(pGVar18 + 8);
          goto LAB_00101a10;
        }
      }
      else {
        if (uVar8 < uVar5) goto LAB_001019e2;
LAB_00101a10:
        lVar17 = lVar17 + -1;
        ppGVar9 = param_3 + lVar17;
        while( true ) {
          uVar2 = *(ulong *)(*ppGVar9 + 8);
          bVar19 = uVar5 < uVar2;
          if (uVar2 == uVar5) {
            bVar19 = *(ulong *)pGVar18 < *(ulong *)*ppGVar9;
          }
          if (!bVar19) goto joined_r0x00101a4e;
          if (param_1 == lVar17) break;
          lVar17 = lVar17 + -1;
          ppGVar9 = ppGVar9 + -1;
        }
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                         "bad comparison function; sorting will be broken",0,0);
joined_r0x00101a4e:
        if (lVar17 <= param_2) goto LAB_00101aa2;
        pGVar13 = param_3[param_2];
        uVar5 = *(ulong *)(pGVar18 + 8);
        param_3[param_2] = *ppGVar9;
        *ppGVar9 = pGVar13;
      }
      lVar15 = param_2 + 1;
      param_2 = param_2 + 1;
      uVar8 = *(ulong *)(param_3[lVar15] + 8);
    } while( true );
  }
LAB_00101bae:
  lVar12 = lVar17 + -2 >> 1;
  lVar16 = lVar12 * 2 + 2;
  ppGVar9 = param_3 + param_1 + lVar12;
  pGVar13 = *ppGVar9;
  lVar7 = lVar12;
  lVar15 = lVar16;
  ppGVar11 = ppGVar9;
  if (lVar17 <= lVar16) goto LAB_00101cfe;
LAB_00101c05:
  do {
    lVar10 = lVar16;
    lVar6 = lVar10 + -1;
    ppGVar14 = param_3 + param_1 + lVar6;
    pGVar1 = param_3[param_1 + lVar10];
    pGVar3 = *ppGVar14;
    bVar19 = *(ulong *)(pGVar1 + 8) < *(ulong *)(pGVar3 + 8);
    if (*(ulong *)(pGVar3 + 8) == *(ulong *)(pGVar1 + 8)) {
      bVar19 = *(ulong *)pGVar1 < *(ulong *)pGVar3;
    }
    if (bVar19) {
      lVar16 = lVar10 * 2;
      param_3[lVar7 + param_1] = pGVar3;
      bVar19 = lVar17 == lVar16;
      lVar7 = lVar6;
      if (bVar19 || SBORROW8(lVar17,lVar16) != lVar17 + lVar10 * -2 < 0) goto LAB_00101c60;
      goto LAB_00101c05;
    }
    lVar16 = (lVar10 + 1) * 2;
    param_3[lVar7 + param_1] = pGVar1;
    bVar19 = lVar17 == lVar16;
    lVar6 = lVar10;
    ppGVar14 = param_3 + param_1 + lVar10;
    lVar7 = lVar10;
    if (bVar19 || SBORROW8(lVar17,lVar16) != lVar17 + (lVar10 + 1) * -2 < 0) {
LAB_00101c60:
      ppGVar9 = ppGVar14;
      if (bVar19) goto LAB_00101d04;
      do {
        lVar16 = lVar15;
        lVar15 = lVar6 + -1;
        ppGVar9 = ppGVar14;
        if (lVar6 <= lVar12) goto LAB_00101e7d;
        uVar2 = *(ulong *)(pGVar13 + 8);
        do {
          lVar7 = lVar15 >> 1;
          pGVar1 = param_3[param_1 + lVar7];
          bVar19 = *(ulong *)(pGVar1 + 8) < uVar2;
          if (*(ulong *)(pGVar1 + 8) == uVar2) {
            bVar19 = *(ulong *)pGVar1 < *(ulong *)pGVar13;
          }
          if (!bVar19) {
            param_3[lVar6 + param_1] = pGVar13;
            goto joined_r0x00101cde;
          }
          param_3[lVar6 + param_1] = pGVar1;
          lVar15 = (lVar7 + -1) - (lVar7 + -1 >> 0x3f);
          lVar6 = lVar7;
        } while (lVar12 < lVar7);
        param_3[param_1 + lVar7] = pGVar13;
joined_r0x00101cde:
        if (lVar12 == 0) {
          ppGVar9 = param_3 + param_1;
          lVar17 = (param_2 + -1) - param_1;
          goto LAB_00101d40;
        }
        while( true ) {
          ppGVar9 = ppGVar11 + -1;
          lVar16 = lVar16 + -2;
          lVar12 = lVar12 + -1;
          pGVar13 = *ppGVar9;
          lVar7 = lVar12;
          lVar15 = lVar16;
          ppGVar11 = ppGVar9;
          if (lVar16 < lVar17) goto LAB_00101c05;
LAB_00101cfe:
          ppGVar11 = ppGVar9;
          lVar15 = lVar16;
          if (lVar16 == lVar17) break;
LAB_00101e7d:
          *ppGVar9 = pGVar13;
        }
LAB_00101d04:
        lVar6 = lVar16 + -1;
        ppGVar14 = param_3 + param_1 + lVar6;
        *ppGVar9 = *ppGVar14;
      } while( true );
    }
  } while( true );
LAB_00101aa2:
  lVar17 = param_2 - param_1;
  introsort(param_2,lVar16,param_3,local_58);
  if (lVar17 < 0x11) {
    return;
  }
  lVar16 = param_2;
  if (local_58 == 0) goto LAB_00101bae;
  goto LAB_00101954;
LAB_00101d40:
  pGVar13 = ppGVar9[lVar17];
  ppGVar9[lVar17] = *ppGVar9;
  if (lVar17 < 3) {
    if (lVar17 != 2) {
      *ppGVar9 = pGVar13;
      return;
    }
    lVar16 = param_1 + 1;
    lVar17 = 0;
    lVar15 = 1;
    *ppGVar9 = param_3[lVar16];
LAB_00101df2:
    uVar2 = *(ulong *)(pGVar13 + 8);
    while( true ) {
      pGVar1 = param_3[param_1 + lVar17];
      bVar19 = *(ulong *)(pGVar1 + 8) < uVar2;
      if (*(ulong *)(pGVar1 + 8) == uVar2) {
        bVar19 = *(ulong *)pGVar1 < *(ulong *)pGVar13;
      }
      ppGVar11 = param_3 + lVar16;
      if (!bVar19) goto LAB_00101e46;
      *ppGVar11 = pGVar1;
      if (lVar17 == 0) break;
      lVar16 = param_1 + lVar17;
      lVar17 = (lVar17 + -1) / 2;
    }
    param_3[param_1 + lVar17] = pGVar13;
    lVar17 = lVar15;
    goto LAB_00101d40;
  }
  lVar16 = 2;
  lVar15 = 0;
  do {
    while( true ) {
      lVar12 = lVar16;
      lVar7 = lVar12 + -1;
      ppGVar11 = param_3 + param_1 + lVar7;
      pGVar1 = param_3[param_1 + lVar12];
      pGVar3 = *ppGVar11;
      bVar19 = *(ulong *)(pGVar1 + 8) < *(ulong *)(pGVar3 + 8);
      if (*(ulong *)(pGVar3 + 8) == *(ulong *)(pGVar1 + 8)) {
        bVar19 = *(ulong *)pGVar1 < *(ulong *)pGVar3;
      }
      if (bVar19) break;
      lVar16 = (lVar12 + 1) * 2;
      param_3[lVar15 + param_1] = pGVar1;
      bVar19 = lVar17 == lVar16;
      lVar7 = lVar12;
      ppGVar11 = param_3 + param_1 + lVar12;
      lVar15 = lVar12;
      if (bVar19 || SBORROW8(lVar17,lVar16) != lVar17 + (lVar12 + 1) * -2 < 0) goto LAB_00101dcc;
    }
    lVar16 = lVar12 * 2;
    param_3[lVar15 + param_1] = pGVar3;
    bVar19 = lVar17 == lVar16;
    lVar15 = lVar7;
  } while (!bVar19 && SBORROW8(lVar17,lVar16) == lVar17 + lVar12 * -2 < 0);
LAB_00101dcc:
  if (bVar19) {
    lVar15 = lVar17 + -1;
    lVar16 = param_1 + lVar15;
    lVar17 = lVar17 + -2 >> 1;
    *ppGVar11 = param_3[lVar16];
    goto LAB_00101df2;
  }
  lVar16 = param_1 + lVar7;
  lVar15 = lVar17 + -1;
  lVar17 = (lVar7 + -1) / 2;
  if (0 < lVar7) goto LAB_00101df2;
LAB_00101e46:
  *ppGVar11 = pGVar13;
  lVar17 = lVar15;
  goto LAB_00101d40;
}



/* RendererSceneRenderImplementation::RenderForwardMobile::setup_render_buffer_data(Ref<RenderSceneBuffersRD>)
    */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::setup_render_buffer_data
          (undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  RefCounted *this;
  Object *pOVar3;
  long lVar4;
  RefCounted *pRVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  byte bVar7;
  Object *local_38;
  long local_30;
  
  bVar7 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this = (RefCounted *)operator_new(0x188,"");
  pRVar5 = this;
  for (lVar4 = 0x31; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)pRVar5 = 0;
    pRVar5 = pRVar5 + (ulong)bVar7 * -0x10 + 8;
  }
  RefCounted::RefCounted(this);
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined ***)this = &PTR__initialize_classv_001296a8;
  postinitialize_handler((Object *)this);
  cVar1 = RefCounted::init_ref();
  if (cVar1 != '\0') {
    cVar1 = RefCounted::reference();
    if (cVar1 != '\0') {
      cVar1 = RefCounted::unreference();
      pRVar5 = this;
      if ((cVar1 == '\0') || (cVar1 = predelete_handler((Object *)this), cVar1 == '\0')) {
        uVar6 = *param_2;
      }
      else {
LAB_0010202f:
        (**(code **)(*(long *)this + 0x140))(this);
        Memory::free_static(this,false);
        local_38 = (Object *)0x0;
        uVar6 = *param_2;
        if (pRVar5 == (RefCounted *)0x0) goto LAB_00101f31;
      }
      local_38 = (Object *)0x0;
      pOVar3 = (Object *)
               __dynamic_cast(pRVar5,&Object::typeinfo,&RenderBufferCustomDataRD::typeinfo,0);
      if ((pOVar3 != (Object *)0x0) &&
         (local_38 = pOVar3, cVar1 = RefCounted::reference(), cVar1 == '\0')) {
        local_38 = (Object *)0x0;
      }
      goto LAB_00101f31;
    }
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      pRVar5 = (RefCounted *)0x0;
      cVar1 = predelete_handler((Object *)this);
      if (cVar1 == '\0') {
        uVar6 = *param_2;
        local_38 = (Object *)0x0;
        goto LAB_00101f31;
      }
      goto LAB_0010202f;
    }
  }
  local_38 = (Object *)0x0;
  uVar6 = *param_2;
  pRVar5 = (RefCounted *)0x0;
LAB_00101f31:
  if ((setup_render_buffer_data(Ref<RenderSceneBuffersRD>)::{lambda()#1}::operator()()::sname ==
       '\0') &&
     (iVar2 = __cxa_guard_acquire(&setup_render_buffer_data(Ref<RenderSceneBuffersRD>)::{lambda()#1}
                                   ::operator()()::sname), iVar2 != 0)) {
    _scs_create((char *)&setup_render_buffer_data(Ref<RenderSceneBuffersRD>)::{lambda()#1}::
                         operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &setup_render_buffer_data(Ref<RenderSceneBuffersRD>)::{lambda()#1}::operator()()::
                  sname,&__dso_handle);
    __cxa_guard_release(&setup_render_buffer_data(Ref<RenderSceneBuffersRD>)::{lambda()#1}::
                         operator()()::sname);
  }
  RenderSceneBuffersRD::set_custom_data
            (uVar6,&setup_render_buffer_data(Ref<RenderSceneBuffersRD>)::{lambda()#1}::operator()()
                    ::sname,&local_38);
  if (((local_38 != (Object *)0x0) &&
      (cVar1 = RefCounted::unreference(), pOVar3 = local_38, cVar1 != '\0')) &&
     (cVar1 = predelete_handler(local_38), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  if (((pRVar5 == (RefCounted *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
     (cVar1 = predelete_handler((Object *)pRVar5), cVar1 == '\0')) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)pRVar5 + 0x140))(pRVar5);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(pRVar5,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<int>::_ref(CowData<int> const&) [clone .part.0] */

void __thiscall CowData<int>::_ref(CowData<int> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
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
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* HashMap<unsigned int, long, HashMapHasherDefault, HashMapComparatorDefault<unsigned int>,
   DefaultTypedAllocator<HashMapElement<unsigned int, long> > >::erase(unsigned int const&) [clone
   .isra.0] */

void __thiscall
HashMap<unsigned_int,long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,long>>>
::erase(HashMap<unsigned_int,long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,long>>>
        *this,uint *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
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
  
  lVar6 = *(long *)(this + 8);
  if ((lVar6 != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar33 = *param_1;
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar39 = CONCAT44(0,uVar5);
    uVar7 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar28 = (uVar33 >> 0x10 ^ uVar33) * -0x7a143595;
    uVar28 = (uVar28 ^ uVar28 >> 0xd) * -0x3d4d51cb;
    uVar32 = uVar28 ^ uVar28 >> 0x10;
    if (uVar28 == uVar28 >> 0x10) {
      uVar32 = 1;
      uVar30 = uVar7;
    }
    else {
      uVar30 = uVar32 * uVar7;
    }
    lVar8 = *(long *)(this + 0x10);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar39;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar30;
    uVar30 = SUB168(auVar10 * auVar19,8);
    uVar28 = *(uint *)(lVar8 + uVar30 * 4);
    uVar34 = (ulong)SUB164(auVar10 * auVar19,8);
    if (uVar28 != 0) {
      uVar37 = 0;
      do {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = ((int)uVar34 + 1) * uVar7;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar39;
        uVar31 = SUB168(auVar13 * auVar22,8);
        uVar29 = SUB164(auVar13 * auVar22,8);
        if ((uVar32 == uVar28) && (uVar33 == *(uint *)(*(long *)(lVar6 + uVar30 * 8) + 0x10))) {
          puVar38 = (uint *)(lVar8 + uVar31 * 4);
          uVar33 = *puVar38;
          if ((uVar33 != 0) &&
             (auVar14._8_8_ = 0, auVar14._0_8_ = uVar33 * uVar7, auVar23._8_8_ = 0,
             auVar23._0_8_ = uVar39, auVar15._8_8_ = 0,
             auVar15._0_8_ = ((uVar29 + uVar5) - SUB164(auVar14 * auVar23,8)) * uVar7,
             auVar24._8_8_ = 0, auVar24._0_8_ = uVar39, uVar30 = (ulong)uVar29, uVar35 = uVar34,
             SUB164(auVar15 * auVar24,8) != 0)) {
            while( true ) {
              uVar34 = uVar30;
              puVar1 = (uint *)(lVar8 + uVar35 * 4);
              *puVar38 = *puVar1;
              puVar2 = (undefined8 *)(lVar6 + uVar31 * 8);
              *puVar1 = uVar33;
              puVar3 = (undefined8 *)(lVar6 + uVar35 * 8);
              uVar9 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar9;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = ((int)uVar34 + 1) * uVar7;
              auVar27._8_8_ = 0;
              auVar27._0_8_ = uVar39;
              uVar31 = SUB168(auVar18 * auVar27,8);
              puVar38 = (uint *)(lVar8 + uVar31 * 4);
              uVar33 = *puVar38;
              if ((uVar33 == 0) ||
                 (auVar16._8_8_ = 0, auVar16._0_8_ = uVar33 * uVar7, auVar25._8_8_ = 0,
                 auVar25._0_8_ = uVar39, auVar17._8_8_ = 0,
                 auVar17._0_8_ =
                      ((SUB164(auVar18 * auVar27,8) + uVar5) - SUB164(auVar16 * auVar25,8)) * uVar7,
                 auVar26._8_8_ = 0, auVar26._0_8_ = uVar39, SUB164(auVar17 * auVar26,8) == 0))
              break;
              uVar30 = uVar31 & 0xffffffff;
              uVar35 = uVar34;
            }
          }
          plVar4 = (long *)(lVar6 + uVar34 * 8);
          *(undefined4 *)(lVar8 + uVar34 * 4) = 0;
          plVar36 = (long *)*plVar4;
          if (*(long **)(this + 0x18) == plVar36) {
            *(long *)(this + 0x18) = *plVar36;
            plVar36 = (long *)*plVar4;
          }
          if (*(long **)(this + 0x20) == plVar36) {
            *(long *)(this + 0x20) = plVar36[1];
            plVar36 = (long *)*plVar4;
          }
          if ((long *)plVar36[1] != (long *)0x0) {
            *(long *)plVar36[1] = *plVar36;
            plVar36 = (long *)*plVar4;
          }
          if (*plVar36 != 0) {
            *(long *)(*plVar36 + 8) = plVar36[1];
            plVar36 = (long *)*plVar4;
          }
          Memory::free_static(plVar36,false);
          *(undefined8 *)(*(long *)(this + 8) + uVar34 * 8) = 0;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
          return;
        }
        uVar28 = *(uint *)(lVar8 + uVar31 * 4);
        uVar34 = uVar31 & 0xffffffff;
        uVar37 = uVar37 + 1;
      } while ((uVar28 != 0) &&
              (auVar11._8_8_ = 0, auVar11._0_8_ = uVar28 * uVar7, auVar20._8_8_ = 0,
              auVar20._0_8_ = uVar39, auVar12._8_8_ = 0,
              auVar12._0_8_ = ((uVar5 + uVar29) - SUB164(auVar11 * auVar20,8)) * uVar7,
              auVar21._8_8_ = 0, auVar21._0_8_ = uVar39, uVar30 = uVar31,
              uVar37 <= SUB164(auVar12 * auVar21,8)));
    }
  }
  return;
}



/* CowData<RID>::_ref(CowData<RID> const&) [clone .part.0] */

void __thiscall CowData<RID>::_ref(CowData<RID> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
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
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
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
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 4;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
    if (*(long *)this != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)this + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)this;
        *(undefined8 *)this = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<Color>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Color>::_copy_on_write(CowData<Color> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 0x10;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
    if (*(long *)this != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)this + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)this;
        *(undefined8 *)this = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<RID>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<RID>::_copy_on_write(CowData<RID> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 8;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
    if (*(long *)this != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)this + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)this;
        *(undefined8 *)this = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* RendererSceneRenderImplementation::RenderForwardMobile::~RenderForwardMobile() */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::~RenderForwardMobile
          (RenderForwardMobile *this)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  code *pcVar5;
  char *pcVar6;
  char cVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  RenderForwardMobile *pRVar11;
  long lVar12;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR_geometry_instance_create_00129818;
  (**(code **)(*RenderingServerGlobals::light_storage + 0x3b8))
            (RenderingServerGlobals::light_storage,0,1);
  if (*(int *)(this + 0x2bf8) != 0) {
    uVar9 = 0;
LAB_00102904:
    do {
      lVar12 = uVar9 * 8;
      if (*(long *)(*(long *)(this + 0x2c00) + uVar9 * 8) != 0) {
        uVar8 = RenderingDevice::get_singleton();
        uVar4 = *(uint *)(this + 0x2bf8);
        if (uVar4 <= (uint)uVar9) {
LAB_00102ba8:
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,uVar9 & 0xffffffff,
                     (ulong)uVar4,"p_index","count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        cVar7 = RenderingDevice::uniform_set_is_valid
                          (uVar8,*(undefined8 *)(*(long *)(this + 0x2c00) + lVar12));
        if (cVar7 != '\0') {
          uVar8 = RenderingDevice::get_singleton();
          uVar4 = *(uint *)(this + 0x2bf8);
          if (uVar4 <= (uint)uVar9) goto LAB_00102ba8;
          uVar9 = uVar9 + 1;
          RenderingDevice::free(uVar8,*(undefined8 *)(*(long *)(this + 0x2c00) + lVar12));
          if (*(uint *)(this + 0x2bf8) <= (uint)uVar9) break;
          goto LAB_00102904;
        }
      }
      uVar9 = uVar9 + 1;
    } while ((uint)uVar9 < *(uint *)(this + 0x2bf8));
  }
  puVar10 = *(undefined8 **)(this + 0x2c10);
  puVar3 = puVar10 + *(uint *)(this + 0x2c08);
  for (; puVar3 != puVar10; puVar10 = puVar10 + 1) {
    uVar8 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar8,*puVar10);
  }
  uVar9 = 0;
  do {
    if (*(long *)(this + uVar9 * 8 + 0x2c18) != 0) {
      uVar8 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar8,*(undefined8 *)(this + (uVar9 & 0xffffffff) * 8 + 0x2c18));
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 != 3);
  uVar8 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar8,*(undefined8 *)(this + 0x2ec0));
  uVar8 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar8,*(undefined8 *)(this + 0x2ed8));
  Memory::free_static(*(void **)(this + 0x2ec8),true);
  if (*(uint *)(this + 0x3074) < (uint)(*(int *)(this + 0x3080) * *(int *)(this + 0x3070))) {
    if ((char)CoreGlobals::leak_reporting_enabled != '\0') {
      local_50 = 0;
      local_40 = 0x56;
      local_48 = 
      "N33RendererSceneRenderImplementation19RenderForwardMobile26GeometryInstanceLightmapSHE";
      String::parse_latin1((StrRange *)&local_50);
      local_48 = "Pages in use exist at exit in PagedAllocator: ";
      local_58 = 0;
      local_40 = 0x2e;
      String::parse_latin1((StrRange *)&local_58);
      String::operator+((String *)&local_48,(String *)&local_58);
      _err_print_error("~PagedAllocator","./core/templates/paged_allocator.h",0xaa,
                       (String *)&local_48,0,0);
      pcVar6 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
      lVar12 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar12 + -0x10),false);
        }
      }
      lVar12 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar12 + -0x10),false);
        }
      }
    }
  }
  else if (*(int *)(this + 0x3070) != 0) {
    lVar12 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x3060) + lVar12 * 8),false);
      lVar2 = lVar12 * 8;
      lVar12 = lVar12 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x3068) + lVar2),false);
    } while ((uint)lVar12 < *(uint *)(this + 0x3070));
    Memory::free_static(*(void **)(this + 0x3060),false);
    Memory::free_static(*(void **)(this + 0x3068),false);
  }
  if (*(uint *)(this + 0x300c) < (uint)(*(int *)(this + 0x3018) * *(int *)(this + 0x3008))) {
    if ((char)CoreGlobals::leak_reporting_enabled != '\0') {
      local_50 = 0;
      local_40 = 0x5c;
      local_48 = 
      "N33RendererSceneRenderImplementation19RenderForwardMobile32GeometryInstanceSurfaceDataCacheE"
      ;
      String::parse_latin1((StrRange *)&local_50);
      local_48 = "Pages in use exist at exit in PagedAllocator: ";
      local_58 = 0;
      local_40 = 0x2e;
      String::parse_latin1((StrRange *)&local_58);
      String::operator+((String *)&local_48,(String *)&local_58);
      _err_print_error("~PagedAllocator","./core/templates/paged_allocator.h",0xaa,
                       (String *)&local_48,0,0);
      pcVar6 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
      lVar12 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar12 + -0x10),false);
        }
      }
      lVar12 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar12 + -0x10),false);
        }
      }
    }
  }
  else if (*(int *)(this + 0x3008) != 0) {
    lVar12 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x2ff8) + lVar12 * 8),false);
      lVar2 = lVar12 * 8;
      lVar12 = lVar12 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x3000) + lVar2),false);
    } while ((uint)lVar12 < *(uint *)(this + 0x3008));
    Memory::free_static(*(void **)(this + 0x2ff8),false);
    Memory::free_static(*(void **)(this + 0x3000),false);
  }
  if (*(uint *)(this + 0x2fa4) < (uint)(*(int *)(this + 0x2fb0) * *(int *)(this + 0x2fa0))) {
    if ((char)CoreGlobals::leak_reporting_enabled != '\0') {
      local_50 = 0;
      local_40 = 0x59;
      local_48 = 
      "N33RendererSceneRenderImplementation19RenderForwardMobile29GeometryInstanceForwardMobileE";
      String::parse_latin1((StrRange *)&local_50);
      local_48 = "Pages in use exist at exit in PagedAllocator: ";
      local_58 = 0;
      local_40 = 0x2e;
      String::parse_latin1((StrRange *)&local_58);
      String::operator+((String *)&local_48,(String *)&local_58);
      _err_print_error("~PagedAllocator","./core/templates/paged_allocator.h",0xaa,
                       (String *)&local_48,0,0);
      pcVar6 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
      lVar12 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar12 + -0x10),false);
        }
      }
      lVar12 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar12 + -0x10),false);
        }
      }
    }
  }
  else if (*(int *)(this + 0x2fa0) != 0) {
    lVar12 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x2f90) + lVar12 * 8),false);
      lVar2 = lVar12 * 8;
      lVar12 = lVar12 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x2f98) + lVar2),false);
    } while ((uint)lVar12 < *(uint *)(this + 0x2fa0));
    Memory::free_static(*(void **)(this + 0x2f90),false);
    Memory::free_static(*(void **)(this + 0x2f98),false);
  }
  pRVar11 = this + 0x2f38;
  do {
    if (*(void **)(pRVar11 + 0x18) != (void *)0x0) {
      if (*(int *)(pRVar11 + 0x10) != 0) {
        *(int *)(pRVar11 + 0x10) = 0;
      }
      Memory::free_static(*(void **)(pRVar11 + 0x18),false);
    }
    if (*(void **)(pRVar11 + 8) != (void *)0x0) {
      if (*(int *)pRVar11 != 0) {
        *(int *)pRVar11 = 0;
      }
      Memory::free_static(*(void **)(pRVar11 + 8),false);
    }
    pRVar11 = pRVar11 + -0x20;
  } while (this + 0x2ed8 != pRVar11);
  if (*(void **)(this + 0x2ef0) != (void *)0x0) {
    if (*(int *)(this + 0x2ee8) != 0) {
      *(undefined4 *)(this + 0x2ee8) = 0;
    }
    Memory::free_static(*(void **)(this + 0x2ef0),false);
  }
  pRVar11 = this + 0x2c60;
  do {
    if (*(void **)(pRVar11 + 8) != (void *)0x0) {
      if (*(int *)pRVar11 != 0) {
        *(int *)pRVar11 = 0;
      }
      Memory::free_static(*(void **)(pRVar11 + 8),false);
    }
    pRVar11 = pRVar11 + -0x10;
  } while (this + 0x2c30 != pRVar11);
  if (*(void **)(this + 0x2c10) != (void *)0x0) {
    if (*(int *)(this + 0x2c08) != 0) {
      *(undefined4 *)(this + 0x2c08) = 0;
    }
    Memory::free_static(*(void **)(this + 0x2c10),false);
  }
  if (*(void **)(this + 0x2c00) != (void *)0x0) {
    if (*(int *)(this + 0x2bf8) != 0) {
      *(undefined4 *)(this + 0x2bf8) = 0;
    }
    Memory::free_static(*(void **)(this + 0x2c00),false);
  }
  RendererSceneRenderImplementation::SceneShaderForwardMobile::~SceneShaderForwardMobile
            ((SceneShaderForwardMobile *)(this + 0x24b0));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    RendererSceneRenderRD::~RendererSceneRenderRD((RendererSceneRenderRD *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererSceneRenderImplementation::RenderForwardMobile::~RenderForwardMobile() */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::~RenderForwardMobile
          (RenderForwardMobile *this)

{
  ~RenderForwardMobile(this);
  operator_delete(this,0x30d0);
  return;
}



/* RendererSceneRenderImplementation::RenderForwardMobile::fill_push_constant_instance_indices(RendererSceneRenderImplementation::RenderForwardMobile::SceneState::InstanceData*,
   RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile const*) */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::fill_push_constant_instance_indices
          (RenderForwardMobile *this,InstanceData *param_1,GeometryInstanceForwardMobile *param_2)

{
  ForwardIDByMapSort FVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  GeometryInstanceForwardMobile *pGVar8;
  ulong uVar9;
  long lVar10;
  size_t sVar11;
  byte bVar12;
  uint *puVar13;
  ulong uVar14;
  long lVar15;
  size_t __n;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  uint *puVar21;
  ForwardIDByMapSort *pFVar22;
  long in_FS_OFFSET;
  ForwardIDByMapSort local_88 [4];
  uint local_84;
  ForwardIDByMapSort local_80 [4];
  undefined4 local_7c [15];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = (**(code **)(*RenderingServerGlobals::rasterizer + 0x88))();
  uVar6 = _LC72;
  *(undefined8 *)(param_1 + 0x68) = _LC72;
  uVar2 = *(uint *)(param_2 + 0x114);
  if (uVar2 != 0) {
    uVar19 = 0;
    lVar15 = *(long *)(this + 0x2f58);
    uVar18 = *(uint *)(lVar15 + 0x28);
    uVar20 = (ulong)uVar18;
    pGVar8 = param_2;
    do {
      while( true ) {
        uVar3 = *(uint *)(pGVar8 + 0x118);
        uVar14 = (ulong)uVar3;
        if (uVar18 <= uVar3) goto LAB_0010335d;
        uVar14 = (ulong)uVar3;
        if (*(long *)(*(long *)(lVar15 + 0x30) + uVar14 * 8) != lVar7) break;
        uVar17 = *(uint *)(lVar15 + 0x18);
        bVar12 = (char)uVar19 * '\b' & 0x18;
        bVar4 = 3 < uVar19;
        uVar16 = ~(0xff << bVar12) & *(uint *)(param_1 + (ulong)bVar4 * 4 + 0x68);
        *(uint *)(param_1 + (ulong)bVar4 * 4 + 0x68) = uVar16;
        if (uVar17 <= uVar3) goto LAB_00103380;
        pGVar8 = pGVar8 + 4;
        uVar19 = uVar19 + 1;
        *(uint *)(param_1 + (ulong)bVar4 * 4 + 0x68) =
             (uint)*(byte *)(*(long *)(lVar15 + 0x20) + uVar14) << bVar12 | uVar16;
        if (param_2 + (ulong)uVar2 * 4 == pGVar8) goto LAB_0010320e;
      }
      pGVar8 = pGVar8 + 4;
    } while (param_2 + (ulong)uVar2 * 4 != pGVar8);
  }
LAB_0010320e:
  *(undefined8 *)(param_1 + 0x70) = uVar6;
  uVar2 = *(uint *)(param_2 + 0x138);
  if (uVar2 != 0) {
    uVar19 = 0;
    lVar15 = *(long *)(this + 0x2f58);
    uVar18 = *(uint *)(lVar15 + 0x58);
    uVar20 = (ulong)uVar18;
    pGVar8 = param_2;
    do {
      uVar3 = *(uint *)(pGVar8 + 0x13c);
      uVar14 = (ulong)uVar3;
      if (uVar18 <= uVar3) goto LAB_0010335d;
      uVar14 = (ulong)uVar3;
      if (*(long *)(*(long *)(lVar15 + 0x60) + uVar14 * 8) == lVar7) {
        uVar17 = *(uint *)(lVar15 + 0x48);
        bVar12 = (char)uVar19 * '\b' & 0x18;
        bVar4 = 3 < uVar19;
        uVar16 = ~(0xff << bVar12) & *(uint *)(param_1 + (ulong)bVar4 * 4 + 0x70);
        *(uint *)(param_1 + (ulong)bVar4 * 4 + 0x70) = uVar16;
        if (uVar17 <= uVar3) {
          uVar20 = (ulong)uVar17;
          goto LAB_0010335d;
        }
        uVar19 = uVar19 + 1;
        *(uint *)(param_1 + (ulong)bVar4 * 4 + 0x70) =
             (uint)*(byte *)(*(long *)(lVar15 + 0x50) + uVar14) << bVar12 | uVar16;
      }
      pGVar8 = pGVar8 + 4;
    } while (param_2 + (ulong)uVar2 * 4 != pGVar8);
  }
  *(undefined8 *)(param_1 + 0x78) = uVar6;
  uVar2 = *(uint *)(param_2 + 0x15c);
  if (uVar2 != 0) {
    uVar19 = 0;
    lVar15 = *(long *)(this + 0x2f58);
    uVar18 = *(uint *)(lVar15 + 0xb8);
    uVar20 = (ulong)uVar18;
    pGVar8 = param_2;
    do {
      uVar3 = *(uint *)(pGVar8 + 0x160);
      uVar14 = (ulong)uVar3;
      if (uVar18 <= uVar3) goto LAB_0010335d;
      uVar14 = (ulong)uVar3;
      if (*(long *)(*(long *)(lVar15 + 0xc0) + uVar14 * 8) == lVar7) {
        uVar17 = *(uint *)(lVar15 + 0xa8);
        bVar12 = (char)uVar19 * '\b' & 0x18;
        bVar4 = 3 < uVar19;
        uVar16 = ~(0xff << bVar12) & *(uint *)(param_1 + (ulong)bVar4 * 4 + 0x78);
        *(uint *)(param_1 + (ulong)bVar4 * 4 + 0x78) = uVar16;
        if (uVar17 <= uVar3) goto LAB_00103380;
        uVar19 = uVar19 + 1;
        *(uint *)(param_1 + (ulong)bVar4 * 4 + 0x78) =
             (uint)*(byte *)(*(long *)(lVar15 + 0xb0) + uVar14) << bVar12 | uVar16;
      }
      pGVar8 = pGVar8 + 4;
    } while (pGVar8 != param_2 + (ulong)uVar2 * 4);
  }
  *(undefined8 *)(param_1 + 0x60) = uVar6;
  uVar9 = (ulong)*(uint *)(param_2 + 0xf0);
  if (*(uint *)(param_2 + 0xf0) != 0) {
    lVar15 = *(long *)(this + 0x2f58);
    puVar21 = &local_84;
    uVar2 = *(uint *)(lVar15 + 0x78);
    uVar20 = (ulong)uVar2;
    puVar13 = puVar21;
    pGVar8 = param_2;
    do {
      uVar18 = *(uint *)(pGVar8 + 0xf4);
      uVar14 = (ulong)uVar18;
      *puVar13 = uVar18;
      if (uVar2 <= uVar18) goto LAB_0010335d;
      pGVar8 = pGVar8 + 4;
      *(undefined1 *)(puVar13 + -1) = *(undefined1 *)(*(long *)(lVar15 + 0x80) + uVar14);
      puVar13 = puVar13 + 2;
    } while (param_2 + uVar9 * 4 != pGVar8);
    if (uVar9 == 1) {
      SortArray<RendererSceneRenderImplementation::RenderForwardMobile::ForwardIDByMapSort,_DefaultComparator<RendererSceneRenderImplementation::RenderForwardMobile::ForwardIDByMapSort>,true>
      ::introsort(0,1,local_88,0);
    }
    else {
      lVar15 = 0;
      uVar20 = uVar9;
      do {
        uVar20 = (long)uVar20 >> 1;
        lVar15 = lVar15 + 1;
      } while (uVar20 != 1);
      SortArray<RendererSceneRenderImplementation::RenderForwardMobile::ForwardIDByMapSort,_DefaultComparator<RendererSceneRenderImplementation::RenderForwardMobile::ForwardIDByMapSort>,true>
      ::introsort(0,uVar9,local_88,lVar15 * 2);
      __n = 8;
      uVar20 = 1;
      pFVar22 = local_88;
      do {
        FVar1 = pFVar22[8];
        uVar2 = *(uint *)(pFVar22 + 0xc);
        if ((byte)local_88[0] < (byte)FVar1) {
          memmove(local_80,local_88,__n);
          local_88[0] = FVar1;
          local_84 = uVar2;
        }
        else {
          sVar11 = __n;
          if ((byte)*pFVar22 < (byte)FVar1) {
            lVar15 = uVar20 - 1;
            do {
              lVar10 = lVar15;
              if (lVar10 == 0) {
                _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                 "bad comparison function; sorting will be broken",0);
                sVar11 = 8;
                goto LAB_0010357f;
              }
              *(undefined8 *)(local_80 + lVar10 * 8) =
                   *(undefined8 *)(pFVar22 + lVar10 * 8 + (8 - __n));
              lVar15 = lVar10 + -1;
            } while ((byte)local_88[(lVar10 + -1) * 8] < (byte)FVar1);
            sVar11 = lVar10 * 8;
          }
LAB_0010357f:
          local_88[sVar11] = FVar1;
          *(uint *)(local_80 + (sVar11 - 4)) = uVar2;
        }
        uVar20 = uVar20 + 1;
        pFVar22 = pFVar22 + 8;
        __n = __n + 8;
      } while (uVar9 != uVar20);
    }
    if (*(uint *)(param_2 + 0xf0) != 0) {
      uVar18 = 0;
      lVar15 = *(long *)(this + 0x2f58);
      uVar2 = *(uint *)(lVar15 + 0x88);
      uVar20 = (ulong)uVar2;
      puVar13 = puVar21 + (ulong)*(uint *)(param_2 + 0xf0) * 2;
      do {
        uVar19 = *puVar21;
        if (uVar2 <= uVar19) {
          uVar14 = (ulong)uVar19;
          goto LAB_0010335d;
        }
        uVar14 = (ulong)uVar19;
        if (*(long *)(*(long *)(lVar15 + 0x90) + uVar14 * 8) == lVar7) {
          uVar3 = *(uint *)(lVar15 + 0x78);
          bVar12 = (char)uVar18 * '\b' & 0x18;
          bVar4 = 3 < uVar18;
          uVar17 = ~(0xff << bVar12) & *(uint *)(param_1 + (ulong)bVar4 * 4 + 0x60);
          *(uint *)(param_1 + (ulong)bVar4 * 4 + 0x60) = uVar17;
          if (uVar3 <= uVar19) {
            uVar20 = (ulong)uVar3;
            goto LAB_0010335d;
          }
          uVar18 = uVar18 + 1;
          *(uint *)(param_1 + (ulong)bVar4 * 4 + 0x60) =
               (uint)*(byte *)(*(long *)(lVar15 + 0x80) + uVar14) << bVar12 | uVar17;
        }
        puVar21 = puVar21 + 2;
      } while (puVar13 != puVar21);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00103380:
  uVar20 = (ulong)uVar17;
LAB_0010335d:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar14,uVar20,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* RendererSceneRenderImplementation::RenderForwardMobile::_setup_lightmaps(RenderDataRD const*,
   PagedArray<RID> const&, Transform3D const&) */

void RendererSceneRenderImplementation::RenderForwardMobile::_setup_lightmaps
               (RenderDataRD *param_1,PagedArray *param_2,Transform3D *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  RenderDataRD RVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong *puVar11;
  long lVar12;
  RenderDataRD *pRVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 in_R11;
  long in_FS_OFFSET;
  float fVar17;
  int iStack_124;
  float local_114;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  plVar9 = (long *)RendererRD::LightStorage::get_singleton();
  uVar15 = *(ulong *)(param_3 + 0x28);
  *(undefined4 *)(param_1 + 0x2eb8) = 0;
  if (0 < (int)uVar15) {
    uVar14 = 0;
    pRVar13 = param_1 + 0x2c70;
    do {
      uVar8 = (uint)uVar14;
      if (*(int *)(param_1 + 0x2ebc) <= (int)uVar8) {
        iVar7 = *(int *)(param_1 + 0x2eb8);
        break;
      }
      if (uVar15 <= uVar14) goto LAB_00103c13;
      uVar3 = *(ulong *)(*(long *)(*(long *)(param_3 + 8) +
                                  (uVar14 >> ((byte)*(undefined4 *)(param_3 + 0x1c) & 0x3f)) * 8) +
                        (ulong)(uVar8 & *(uint *)(param_3 + 0x20)) * 8);
      if ((uVar3 == 0) || (*(uint *)((long)plVar9 + 0x2ec) <= (uint)uVar3)) {
LAB_0011dc31:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      puVar11 = (ulong *)(((uVar3 & 0xffffffff) % (ulong)*(uint *)(plVar9 + 0x5d)) * 0x40 +
                         *(long *)(plVar9[0x5b] +
                                  ((uVar3 & 0xffffffff) / (ulong)*(uint *)(plVar9 + 0x5d)) * 8));
      iVar7 = (int)puVar11[7];
      if (iVar7 != (int)(uVar3 >> 0x20)) {
        if (iVar7 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0,in_R11);
        }
        goto LAB_0011dc31;
      }
      uVar3 = *puVar11;
      Basis::inverse();
      Basis::inverse();
      Basis::transposed();
      local_d8 = (undefined4)local_108;
      *(undefined4 *)pRVar13 = local_d8;
      uStack_cc = (undefined4)((ulong)uStack_100 >> 0x20);
      *(undefined4 *)(pRVar13 + 4) = uStack_cc;
      uStack_c0 = (undefined4)uStack_f0;
      *(undefined4 *)(pRVar13 + 0xc) = 0;
      *(undefined4 *)(pRVar13 + 8) = uStack_c0;
      uStack_d4 = (undefined4)((ulong)local_108 >> 0x20);
      *(undefined4 *)(pRVar13 + 0x10) = uStack_d4;
      local_c8 = (undefined4)local_f8;
      *(undefined4 *)(pRVar13 + 0x14) = local_c8;
      uStack_bc = (undefined4)((ulong)uStack_f0 >> 0x20);
      *(undefined4 *)(pRVar13 + 0x1c) = 0;
      *(undefined4 *)(pRVar13 + 0x18) = uStack_bc;
      uStack_d0 = (undefined4)uStack_100;
      *(undefined4 *)(pRVar13 + 0x20) = uStack_d0;
      uStack_c4 = (undefined4)((ulong)local_f8 >> 0x20);
      *(undefined4 *)(pRVar13 + 0x24) = uStack_c4;
      *(undefined4 *)(pRVar13 + 0x2c) = 0;
      *(undefined4 *)(pRVar13 + 0x28) = local_e8;
      fVar17 = _LC74;
      if ((uVar3 == 0) || (uVar16 = (uint)uVar3, *(uint *)((long)plVar9 + 0x284) <= uVar16)) {
LAB_0011dc1a:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar12 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(plVar9 + 0x50)) * 0xb8 +
               *(long *)(plVar9[0x4e] + ((uVar3 & 0xffffffff) / (ulong)*(uint *)(plVar9 + 0x50)) * 8
                        );
      iVar7 = *(int *)(lVar12 + 0xb0);
      iStack_124 = (int)(uVar3 >> 0x20);
      if (iVar7 != iStack_124) {
        if (iVar7 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0,uVar15);
        }
        goto LAB_0011dc1a;
      }
      uVar10 = *(undefined8 *)(lVar12 + 0x34);
      lVar12 = *plVar9;
      *(ulong *)(pRVar13 + 0x30) = CONCAT44((float)(int)((ulong)uVar10 >> 0x20),(float)(int)uVar10);
      *(float *)(pRVar13 + 0x38) = fVar17;
      uVar6 = (**(code **)(lVar12 + 0x360))(plVar9,uVar3);
      *(undefined4 *)(pRVar13 + 0x3c) = uVar6;
      if (*(long *)(param_2 + 0x1c8) != 0) {
        if (uVar16 < *(uint *)((long)plVar9 + 0x284)) {
          lVar12 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(plVar9 + 0x50)) * 0xb8 +
                   *(long *)(plVar9[0x4e] +
                            ((uVar3 & 0xffffffff) / (ulong)*(uint *)(plVar9 + 0x50)) * 8);
          iVar1 = *(int *)(lVar12 + 0xb0);
          if (iVar7 != iVar1) {
            if (iVar1 + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
            goto LAB_00103ca4;
          }
          local_114 = *(float *)(lVar12 + 0x30);
        }
        else {
LAB_00103ca4:
          _err_print_error("lightmap_get_baked_exposure_normalization",
                           "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x3f5,
                           "Parameter \"lm\" is null.",0);
          local_114 = _LC74;
        }
        fVar17 = (float)RendererCameraAttributes::
                        camera_attributes_get_exposure_normalization_factor
                                  (RenderingServerGlobals::camera_attributes,
                                   *(undefined8 *)(param_2 + 0x1c8));
        *(float *)(pRVar13 + 0x38) = fVar17 / local_114;
      }
      uVar15 = *(ulong *)(param_3 + 0x28);
      if (uVar15 <= uVar14) {
LAB_00103c13:
        _err_print_index_error
                  ("operator[]","./core/templates/paged_array.h",0xa9,(long)(int)uVar8,uVar15,
                   "p_index","count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      *(undefined8 *)(param_1 + uVar14 * 8 + 0x2e70) =
           *(undefined8 *)
            (*(long *)(*(long *)(param_3 + 8) +
                      (uVar14 >> ((byte)*(undefined4 *)(param_3 + 0x1c) & 0x3f)) * 8) +
            (ulong)(uVar8 & *(uint *)(param_3 + 0x20)) * 8);
      if ((char)plVar9[0x48] == '\0') {
        _err_print_error("lightmap_uses_spherical_harmonics",
                         "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x3fe,
                         "Condition \"!using_lightmap_array\" is true. Returning: false",0);
        RVar5 = (RenderDataRD)0x0;
      }
      else {
        if (*(uint *)((long)plVar9 + 0x284) <= uVar16) {
LAB_0011dc47:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar12 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(plVar9 + 0x50)) * 0xb8 +
                 *(long *)(plVar9[0x4e] +
                          ((uVar3 & 0xffffffff) / (ulong)*(uint *)(plVar9 + 0x50)) * 8);
        iVar1 = *(int *)(lVar12 + 0xb0);
        if (iVar7 != iVar1) {
          uVar8 = iVar1 + 0x80000000;
          if (uVar8 < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0,uVar8);
          }
          goto LAB_0011dc47;
        }
        RVar5 = *(RenderDataRD *)(lVar12 + 0x14);
      }
      param_1[uVar14 + 0x2eb0] = RVar5;
      uVar15 = *(ulong *)(param_3 + 0x28);
      uVar14 = uVar14 + 1;
      pRVar13 = pRVar13 + 0x40;
      iVar7 = *(int *)(param_1 + 0x2eb8) + 1;
      *(int *)(param_1 + 0x2eb8) = iVar7;
    } while ((int)uVar14 < (int)uVar15);
    if (iVar7 != 0) {
      uVar10 = RenderingDevice::get_singleton();
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        RenderingDevice::buffer_update
                  (uVar10,*(undefined8 *)(param_1 + 0x2ec0),0,*(int *)(param_1 + 0x2eb8) << 6,
                   param_1 + 0x2c70);
        return;
      }
      goto LAB_00103d99;
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103d99:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererSceneRenderImplementation::RenderForwardMobile::_update_instance_data_buffer(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType)
    */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::_update_instance_data_buffer
          (RenderForwardMobile *this,int param_2)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  RenderForwardMobile *pRVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined1 auStack_48 [8];
  long local_40;
  long local_30;
  
  lVar9 = (long)param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(uint *)(this + lVar9 * 0x10 + 0x2c40);
  if (uVar2 == 0) {
    pRVar6 = this;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00103f3e;
  }
  if (*(long *)(this + lVar9 * 8 + 0x2c18) == 0) {
LAB_00103df5:
    uVar4 = (ulong)uVar2;
    if (uVar4 < 0x1000) {
      uVar4 = 0x1000;
    }
    lVar7 = 0;
    uVar4 = uVar4 - 1;
    do {
      bVar3 = (byte)lVar7;
      lVar7 = lVar7 + 1;
      uVar4 = uVar4 | uVar4 >> ((byte)(1 << (bVar3 & 0x1f)) & 0x3f);
    } while (lVar7 != 6);
    iVar8 = (int)uVar4 + 1;
    uVar5 = RenderingDevice::get_singleton();
    local_40 = 0;
    uVar5 = RenderingDevice::storage_buffer_create(uVar5,iVar8 * 0xb0,auStack_48,0,0);
    lVar7 = local_40;
    *(undefined8 *)(this + (lVar9 + 0x582) * 8 + 8) = uVar5;
    if (local_40 != 0) {
      LOCK();
      plVar1 = (long *)(local_40 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    *(int *)(this + lVar9 * 4 + 0x2c30) = iVar8;
  }
  else if (*(uint *)(this + lVar9 * 4 + 0x2c30) < uVar2) {
    uVar5 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar5,*(undefined8 *)(this + (lVar9 + 0x582) * 8 + 8));
    uVar2 = *(uint *)(this + lVar9 * 0x10 + 0x2c40);
    goto LAB_00103df5;
  }
  pRVar6 = (RenderForwardMobile *)RenderingDevice::get_singleton();
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    RenderingDevice::buffer_update
              (pRVar6,*(undefined8 *)(this + lVar9 * 8 + 0x2c18),0,
               *(int *)(this + lVar9 * 0x10 + 0x2c40) * 0xb0,
               *(undefined8 *)(this + lVar9 * 0x10 + 0x2c48));
    return;
  }
LAB_00103f3e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar6);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererSceneRenderImplementation::RenderForwardMobile::_fill_instance_data(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,
   unsigned int, int, bool) */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::_fill_instance_data
          (RenderForwardMobile *this,int param_2,uint param_3,int param_4,char param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  GeometryInstanceForwardMobile *pGVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  InstanceData *pIVar14;
  ushort *puVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined4 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_50;
  
  lVar19 = (long)param_2;
  if (param_4 < 0) {
    param_4 = *(int *)(this + lVar19 * 0x20 + 0x2ef8);
  }
  uVar16 = param_4 + param_3;
  uVar10 = *(uint *)(this + lVar19 * 0x10 + 0x2c40);
  if (uVar16 < uVar10) {
LAB_00104038:
    *(uint *)(this + lVar19 * 0x10 + 0x2c40) = uVar16;
  }
  else if (uVar10 < uVar16) {
    uVar17 = uVar16 - 1;
    if (*(uint *)(this + lVar19 * 0x10 + 0x2c44) < uVar16) {
      uVar10 = uVar17 >> 1 | uVar17;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = (uVar10 | uVar10 >> 0x10) + 1;
      *(uint *)(this + lVar19 * 0x10 + 0x2c44) = uVar10;
      lVar13 = Memory::realloc_static
                         (*(void **)(this + lVar19 * 0x10 + 0x2c48),(ulong)uVar10 * 0xb0,false);
      *(long *)(this + lVar19 * 0x10 + 0x2c48) = lVar13;
      if (lVar13 == 0) goto LAB_00104442;
      uVar10 = *(uint *)(this + lVar19 * 0x10 + 0x2c40);
      if (uVar16 <= uVar10) goto LAB_00104038;
    }
    lVar11 = (ulong)uVar10 * 0xb0 + *(long *)(this + lVar19 * 0x10 + 0x2c48);
    lVar13 = *(long *)(this + lVar19 * 0x10 + 0x2c48) + 0xb0 +
             ((ulong)(uVar17 - uVar10) + (ulong)uVar10) * 0xb0;
    lVar12 = lVar11;
    if (((int)lVar13 - (int)lVar11 & 0x10U) != 0) {
      *(undefined4 *)(lVar11 + 0x4c) = 1;
      lVar12 = lVar11 + 0xb0;
      if (lVar13 == lVar11 + 0xb0) goto LAB_00104038;
    }
    do {
      *(undefined4 *)(lVar12 + 0x4c) = 1;
      lVar11 = lVar12 + 0x160;
      *(undefined4 *)(lVar12 + 0xfc) = 1;
      lVar12 = lVar11;
    } while (lVar13 != lVar11);
    goto LAB_00104038;
  }
  if (*(uint *)(this + lVar19 * 0x20 + 0x2f08) <= uVar16) {
    if (uVar16 <= *(uint *)(this + lVar19 * 0x20 + 0x2f08)) goto LAB_00104060;
    if (*(uint *)(this + lVar19 * 0x20 + 0x2f0c) < uVar16) {
      uVar10 = uVar16 - 1 >> 1 | uVar16 - 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = (uVar10 | uVar10 >> 0x10) + 1;
      *(uint *)(this + lVar19 * 0x20 + 0x2f0c) = uVar10;
      lVar13 = Memory::realloc_static
                         (*(void **)(this + lVar19 * 0x20 + 0x2f10),(ulong)uVar10 * 4,false);
      *(long *)(this + lVar19 * 0x20 + 0x2f10) = lVar13;
      if (lVar13 == 0) {
LAB_00104442:
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
    }
  }
  *(uint *)(this + lVar19 * 0x20 + 0x2f08) = uVar16;
LAB_00104060:
  if (param_4 != 0) {
    uVar18 = (ulong)param_3;
    do {
      uVar9 = _UNK_0012a0b8;
      uVar8 = __LC84;
      uVar7 = _UNK_0012a0a8;
      uVar6 = __LC83;
      uVar10 = *(uint *)(this + lVar19 * 0x20 + 0x2ef8);
      uVar17 = (uint)uVar18;
      if (uVar10 <= uVar17) {
LAB_00104391:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,uVar18,(ulong)uVar10,
                   "p_index","count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar13 = *(long *)(*(long *)(this + lVar19 * 0x20 + 0x2f00) + uVar18 * 8);
      uVar10 = *(uint *)(this + lVar19 * 0x10 + 0x2c40);
      pGVar4 = *(GeometryInstanceForwardMobile **)(lVar13 + 0x60);
      if (uVar10 <= uVar17) goto LAB_00104391;
      lVar12 = uVar18 * 4;
      pIVar14 = (InstanceData *)(uVar18 * 0xb0 + *(long *)(this + lVar19 * 0x10 + 0x2c48));
      if (pGVar4[0xba] == (GeometryInstanceForwardMobile)0x0) {
        uVar20 = 0;
        auVar21 = ZEXT416(_LC74);
        *(undefined8 *)(pIVar14 + 0x30) = 0;
        *(undefined1 (*) [16])pIVar14 = auVar21;
        *(undefined8 *)(pIVar14 + 0x10) = uVar6;
        *(undefined8 *)(pIVar14 + 0x18) = uVar7;
        *(undefined8 *)(pIVar14 + 0x20) = uVar8;
        *(undefined8 *)(pIVar14 + 0x28) = uVar9;
      }
      else {
        *(undefined4 *)pIVar14 = *(undefined4 *)(pGVar4 + 0x20);
        *(undefined4 *)(pIVar14 + 4) = *(undefined4 *)(pGVar4 + 0x2c);
        uVar20 = *(undefined4 *)(pGVar4 + 0x38);
        *(undefined4 *)(pIVar14 + 0xc) = 0;
        *(undefined4 *)(pIVar14 + 8) = uVar20;
        *(undefined4 *)(pIVar14 + 0x10) = *(undefined4 *)(pGVar4 + 0x24);
        *(undefined4 *)(pIVar14 + 0x14) = *(undefined4 *)(pGVar4 + 0x30);
        uVar20 = *(undefined4 *)(pGVar4 + 0x3c);
        *(undefined4 *)(pIVar14 + 0x1c) = 0;
        *(undefined4 *)(pIVar14 + 0x18) = uVar20;
        *(undefined4 *)(pIVar14 + 0x20) = *(undefined4 *)(pGVar4 + 0x28);
        *(undefined4 *)(pIVar14 + 0x24) = *(undefined4 *)(pGVar4 + 0x34);
        uVar20 = *(undefined4 *)(pGVar4 + 0x40);
        *(undefined4 *)(pIVar14 + 0x2c) = 0;
        *(undefined4 *)(pIVar14 + 0x28) = uVar20;
        *(undefined4 *)(pIVar14 + 0x30) = *(undefined4 *)(pGVar4 + 0x44);
        *(undefined4 *)(pIVar14 + 0x34) = *(undefined4 *)(pGVar4 + 0x48);
        uVar20 = *(undefined4 *)(pGVar4 + 0x4c);
      }
      uVar1 = *(undefined4 *)(pGVar4 + 0xc4);
      uVar2 = *(undefined4 *)(pGVar4 + 0x80);
      *(undefined4 *)(pIVar14 + 0x38) = uVar20;
      uVar20 = *(undefined4 *)(pGVar4 + 0xa4);
      uVar3 = *(undefined4 *)(pGVar4 + 0xc);
      *(undefined4 *)(pIVar14 + 0x3c) = 0x3f800000;
      uVar6 = *(undefined8 *)(pGVar4 + 0xd8);
      *(undefined8 *)(pIVar14 + 0x50) = *(undefined8 *)(pGVar4 + 0xd0);
      *(undefined8 *)(pIVar14 + 0x58) = uVar6;
      *(ulong *)(pIVar14 + 0x40) = CONCAT44(uVar20,uVar3);
      *(ulong *)(pIVar14 + 0x48) = CONCAT44(uVar2,uVar1);
      RendererRD::MeshStorage::get_singleton();
      if ((*(byte *)(*(long *)(lVar13 + 0x20) + 0xb) & 0x20) == 0) {
        local_50 = 0x3f800000;
        local_68 = 0;
        local_60 = _LC81;
        local_80 = 0;
        local_78 = (undefined1  [16])0x0;
      }
      else {
        RendererRD::MeshStorage::get_singleton();
        lVar11 = *(long *)(lVar13 + 0x20);
        local_68 = *(undefined8 *)(lVar11 + 0xac);
        local_80 = *(undefined4 *)(lVar11 + 0xb4);
        local_50 = *(undefined4 *)(lVar11 + 0xc0);
        local_60 = *(undefined8 *)(lVar11 + 0xb8);
        RendererRD::MeshStorage::get_singleton();
        local_78 = *(undefined1 (*) [16])(*(long *)(lVar13 + 0x20) + 0x108);
      }
      fill_push_constant_instance_indices(this,pIVar14,pGVar4);
      *(undefined8 *)(pIVar14 + 0x80) = local_68;
      *(undefined4 *)(pIVar14 + 0x88) = local_80;
      *(undefined8 *)(pIVar14 + 0x90) = local_60;
      *(undefined4 *)(pIVar14 + 0x98) = local_50;
      uVar10 = *(uint *)(this + lVar19 * 0x20 + 0x2f08);
      *(undefined8 *)(pIVar14 + 0xa0) = local_78._0_8_;
      *(undefined8 *)(pIVar14 + 0xa8) = local_78._8_8_;
      if (uVar10 <= uVar17) goto LAB_00104391;
      uVar18 = (ulong)(uVar17 + 1);
      puVar15 = (ushort *)(lVar12 + *(long *)(this + lVar19 * 0x20 + 0x2f10));
      *puVar15 = (ushort)*(byte *)(lVar13 + 0x1c) * 2 | *(byte *)(lVar13 + 0xe) & 1 |
                 *puVar15 & 0xfe00;
    } while (uVar16 != uVar17 + 1);
  }
  if (param_5 != '\0') {
    _update_instance_data_buffer(this,param_2);
    return;
  }
  return;
}



/* RendererSceneRenderImplementation::RenderForwardMobile::_setup_environment(RenderDataRD const*,
   bool, Vector2i const&, Color const&, bool, bool, int) */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::_setup_environment
          (RenderForwardMobile *this,RenderDataRD *param_1,bool param_2,Vector2i *param_3,
          Color *param_4,bool param_5,bool param_6,int param_7)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined7 in_register_00000011;
  undefined8 *puVar12;
  ulong uVar13;
  void *pvVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long in_FS_OFFSET;
  long lStackY_b8;
  int aiStackY_b0 [6];
  long lStackY_98;
  undefined8 uStackY_90;
  ulong uStackY_88;
  Vector2i *pVStackY_80;
  
  uVar17 = 0;
  uVar13 = (ulong)(uint)param_7;
  cVar3 = RendererSceneRender::is_environment
                    (this,*(undefined8 *)(param_1 + 0x1c0),CONCAT71(in_register_00000011,param_2));
  if (cVar3 != '\0') {
    uVar17 = *(undefined8 *)(param_1 + 0x1c0);
  }
  if (*(long *)(param_1 + 0x1f0) == 0) {
LAB_001045ad:
    uVar16 = 0;
    uVar6 = *(uint *)(this + 0x2c08);
  }
  else {
    lVar9 = RendererRD::LightStorage::get_singleton();
    uVar11 = *(ulong *)(param_1 + 0x1f0);
    if ((uVar11 == 0) || (*(uint *)(lVar9 + 0x1e4) <= (uint)uVar11)) {
LAB_00104810:
      _err_print_error("reflection_probe_instance_get_probe",
                       "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x395,
                       "Parameter \"rpi\" is null.",0,0);
      goto LAB_001045ad;
    }
    puVar12 = (undefined8 *)
              (((uVar11 & 0xffffffff) % (ulong)*(uint *)(lVar9 + 0x1e0)) * 0x70 +
              *(long *)(*(long *)(lVar9 + 0x1d0) +
                       ((uVar11 & 0xffffffff) / (ulong)*(uint *)(lVar9 + 0x1e0)) * 8));
    iVar7 = *(int *)(puVar12 + 0xd);
    if (iVar7 != (int)(uVar11 >> 0x20)) {
      if (iVar7 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0);
      }
      goto LAB_00104810;
    }
    uVar6 = *(uint *)(this + 0x2c08);
    uVar16 = *puVar12;
  }
  if (param_7 < (int)uVar6) goto LAB_001045bd;
  uVar11 = (ulong)uVar6;
  uVar15 = param_7 + 1;
  if (uVar15 < uVar6) {
    *(uint *)(this + 0x2c08) = uVar15;
    goto LAB_001045bd;
  }
  if (uVar15 <= uVar6) goto LAB_001045bd;
  uVar10 = uVar11;
  if (*(uint *)(this + 0x2c0c) < uVar15) {
    pvVar14 = *(void **)(this + 0x2c10);
    uVar6 = (uint)param_7 >> 1 | param_7;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = (uVar6 | uVar6 >> 0x10) + 1;
    *(uint *)(this + 0x2c0c) = uVar6;
    lVar9 = Memory::realloc_static(pvVar14,(ulong)uVar6 * 8,false);
    *(long *)(this + 0x2c10) = lVar9;
    if (lVar9 == 0) {
      LocalVector<RendererSceneRenderImplementation::RenderForwardMobile::SceneState::ShadowPass,unsigned_int,false,false>
      ::resize((uint)pvVar14);
      lStackY_98 = *(long *)(in_FS_OFFSET + 0x28);
      uStackY_88 = uVar13;
      pVStackY_80 = (Vector2i *)uVar11;
      ProjectSettings::get_singleton();
      StringName::StringName
                ((StringName *)&lStackY_b8,"rendering/anti_aliasing/quality/msaa_2d",false);
      ProjectSettings::get_setting_with_override((StringName *)aiStackY_b0);
      uVar6 = Variant::operator_cast_to_int((Variant *)aiStackY_b0);
      if (Variant::needs_deinit[aiStackY_b0[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (lStackY_b8 != 0)) {
        StringName::unref();
      }
      ProjectSettings::get_singleton();
      StringName::StringName
                ((StringName *)&lStackY_b8,"rendering/anti_aliasing/quality/msaa_3d",false);
      ProjectSettings::get_setting_with_override((StringName *)aiStackY_b0);
      iVar7 = Variant::operator_cast_to_int((Variant *)aiStackY_b0);
      if (Variant::needs_deinit[aiStackY_b0[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (lStackY_b8 != 0)) {
        StringName::unref();
      }
      ProjectSettings::get_singleton();
      StringName::StringName
                ((StringName *)&lStackY_b8,"rendering/lights_and_shadows/directional_shadow/16_bits"
                 ,false);
      ProjectSettings::get_setting_with_override((StringName *)aiStackY_b0);
      bVar4 = Variant::operator_cast_to_bool((Variant *)aiStackY_b0);
      if (Variant::needs_deinit[aiStackY_b0[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (lStackY_b8 != 0)) {
        StringName::unref();
      }
      ProjectSettings::get_singleton();
      StringName::StringName
                ((StringName *)&lStackY_b8,
                 "rendering/lights_and_shadows/positional_shadow/atlas_16_bits",false);
      ProjectSettings::get_setting_with_override((StringName *)aiStackY_b0);
      bVar5 = Variant::operator_cast_to_bool((Variant *)aiStackY_b0);
      if (Variant::needs_deinit[aiStackY_b0[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (lStackY_b8 != 0)) {
        StringName::unref();
      }
      *(byte *)((long)pvVar14 + 0x30cd) =
           (byte)(((bVar4 && bVar5) ^ 1) << 2) | (bVar5 || bVar4) * '\x02' |
           *(byte *)((long)pvVar14 + 0x30cd) & 0xf9;
      uVar15 = uVar6 & 7;
      if (2 < uVar6 - 1) {
        uVar15 = 0;
      }
      bVar2 = (byte)iVar7 & 7;
      if (2 < iVar7 - 1U) {
        bVar2 = 0;
      }
      *(byte *)((long)pvVar14 + 0x30cc) =
           *(byte *)((long)pvVar14 + 0x30cc) & 0xc0 | (byte)(uVar15 << 3) | bVar2;
      if (lStackY_98 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar10 = (ulong)*(uint *)(this + 0x2c08);
    if (*(uint *)(this + 0x2c08) < uVar15) goto LAB_001046e5;
  }
  else {
LAB_001046e5:
    memset((void *)(*(long *)(this + 0x2c10) + uVar10 * 8),0,
           (ulong)(uint)(param_7 - (int)uVar10) * 8 + 8);
  }
  *(uint *)(this + 0x2c08) = uVar15;
  do {
    uVar8 = RenderSceneDataRD::create_uniform_buffer();
    uVar6 = *(uint *)(this + 0x2c08);
    if (uVar6 <= (uint)uVar11) goto LAB_00104755;
    uVar15 = (uint)uVar11 + 1;
    *(undefined8 *)(*(long *)(this + 0x2c10) + uVar11 * 8) = uVar8;
    uVar11 = (ulong)uVar15;
  } while (uVar15 < uVar6);
LAB_001045bd:
  uVar8 = *(undefined8 *)(param_1 + 0x180);
  if (*(code **)(*(long *)this + 0x248) != _render_buffers_get_luminance_multiplier) {
    (**(code **)(*(long *)this + 0x248))(_LC0,this);
  }
  uVar6 = *(uint *)(this + 0x2c08);
  uStackY_88 = (ulong)param_6;
  uVar11 = uVar13;
  if ((uint)param_7 < uVar6) {
    uStackY_90 = 0x10463a;
    pVStackY_80 = param_3;
    RenderSceneDataRD::update_ubo
              (uVar8,*(undefined8 *)(*(long *)(this + 0x2c10) + uVar13 * 8),
               *(undefined4 *)(this + 0x2438),uVar17,uVar16,*(undefined8 *)(param_1 + 0x1c8));
    return;
  }
LAB_00104755:
  pVStackY_80 = (Vector2i *)0x104788;
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar11,(ulong)uVar6,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererSceneRenderImplementation::RenderForwardMobile::_update_global_pipeline_data_requirements_from_project()
    */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::
_update_global_pipeline_data_requirements_from_project(RenderForwardMobile *this)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long in_FS_OFFSET;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_60,"rendering/anti_aliasing/quality/msaa_2d",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  uVar5 = Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_60,"rendering/anti_aliasing/quality/msaa_3d",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  iVar6 = Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_60,"rendering/lights_and_shadows/directional_shadow/16_bits",false
            );
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  bVar3 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_60,"rendering/lights_and_shadows/positional_shadow/atlas_16_bits",
             false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  bVar4 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  this[0x30cd] = (RenderForwardMobile)
                 ((byte)(((bVar3 && bVar4) ^ 1) << 2) | (bVar4 || bVar3) * '\x02' |
                 (byte)this[0x30cd] & 0xf9);
  uVar1 = uVar5 & 7;
  if (2 < uVar5 - 1) {
    uVar1 = 0;
  }
  bVar2 = (byte)iVar6 & 7;
  if (2 < iVar6 - 1U) {
    bVar2 = 0;
  }
  this[0x30cc] = (RenderForwardMobile)((byte)this[0x30cc] & 0xc0 | (byte)(uVar1 << 3) | bVar2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererSceneRenderImplementation::RenderForwardMobile::_update_global_pipeline_data_requirements_from_light_storage()
    */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::
_update_global_pipeline_data_requirements_from_light_storage(RenderForwardMobile *this)

{
  uint uVar1;
  
  RendererRD::LightStorage::get_singleton();
  uVar1 = RendererRD::LightStorage::get_shadow_cubemaps_used();
  this[0x30cd] = (RenderForwardMobile)((byte)this[0x30cd] & 0xf7 | (byte)((uVar1 & 1) << 3));
  uVar1 = RendererRD::LightStorage::get_shadow_dual_paraboloid_used();
  this[0x30cd] = (RenderForwardMobile)((byte)this[0x30cd] & 0xef | (byte)((uVar1 & 1) << 4));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererSceneRenderImplementation::RenderForwardMobile::RenderForwardMobile() */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::RenderForwardMobile
          (RenderForwardMobile *this)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  RenderForwardMobile *pRVar6;
  RenderForwardMobile *pRVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  RendererSceneRenderRD::RendererSceneRenderRD((RendererSceneRenderRD *)this);
  *(undefined ***)this = &PTR_geometry_instance_create_00129818;
  RendererSceneRenderImplementation::SceneShaderForwardMobile::SceneShaderForwardMobile
            ((SceneShaderForwardMobile *)(this + 0x24b0));
  uVar2 = _UNK_0012a0c8;
  uVar8 = __LC90;
  *(undefined8 *)(this + 0x2bf8) = 0;
  *(undefined8 *)(this + 0x2c00) = 0;
  *(undefined8 *)(this + 0x2c08) = 0;
  *(undefined8 *)(this + 0x2c10) = 0;
  *(undefined8 *)(this + 0x2c28) = 0;
  *(undefined8 *)(this + 0x2c30) = 0;
  *(undefined4 *)(this + 0x2c38) = 0;
  *(undefined8 *)(this + 0x2be8) = uVar8;
  *(undefined8 *)(this + 0x2bf0) = uVar2;
  *(undefined1 (*) [16])(this + 0x2c18) = (undefined1  [16])0x0;
  pRVar7 = this + 0x2c40;
  do {
    *(undefined8 *)pRVar7 = 0;
    pRVar6 = pRVar7 + 0x10;
    *(undefined8 *)(pRVar7 + 8) = 0;
    pRVar7 = pRVar6;
  } while (pRVar6 != this + 0x2c70);
  *(undefined4 *)(this + 0x2eb8) = 0;
  *(undefined8 *)(this + 0x2ec0) = 0;
  *(undefined8 *)(this + 0x2ec8) = 0;
  *(undefined8 *)(this + 0x2ed8) = 0;
  *(undefined4 *)(this + 12000) = 0;
  this[0x2ee4] = (RenderForwardMobile)0x0;
  *(undefined8 *)(this + 0x2ee8) = 0;
  *(undefined8 *)(this + 0x2ef0) = 0;
  *(undefined1 (*) [16])(this + 0x2e70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2e80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2e90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2ea0) = (undefined1  [16])0x0;
  pRVar7 = this + 0x2ef8;
  do {
    *(undefined8 *)pRVar7 = 0;
    pRVar6 = pRVar7 + 0x20;
    *(undefined8 *)(pRVar7 + 8) = 0;
    *(undefined8 *)(pRVar7 + 0x10) = 0;
    *(undefined8 *)(pRVar7 + 0x18) = 0;
    uVar2 = _UNK_0012a0d8;
    uVar8 = __LC91;
    pRVar7 = pRVar6;
  } while (this + 0x2f58 != pRVar6);
  *(undefined8 *)(this + 0x2f98) = 0;
  this[0x2fb4] = (RenderForwardMobile)0x0;
  *(undefined4 *)(this + 0x2fb0) = 0x1000;
  this[0x301c] = (RenderForwardMobile)0x0;
  *(undefined4 *)(this + 0x3018) = 0x1000;
  this[0x3084] = (RenderForwardMobile)0x0;
  *(undefined4 *)(this + 0x3080) = 0x1000;
  *(undefined8 *)(this + 0x30c8) = 0;
  *(undefined1 (*) [16])(this + 0x2f58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2f68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2f78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2f88) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x2fa0) = uVar8;
  *(undefined8 *)(this + 0x2fa8) = uVar2;
  *(undefined1 (*) [16])(this + 0x2ff8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x3008) = uVar8;
  *(undefined8 *)(this + 0x3010) = uVar2;
  *(undefined1 (*) [16])(this + 0x3060) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x3070) = uVar8;
  *(undefined8 *)(this + 0x3078) = uVar2;
  singleton = this;
  RendererRD::SkyRD::set_texture_format(this + 0x210,0x3f);
  local_68 = &_LC92;
  local_88 = 0;
  local_70 = 0;
  local_60 = 3;
  String::parse_latin1((StrRange *)&local_70);
  RendererSceneRenderRD::get_roughness_layers();
  itos((long)&local_68);
  operator+((char *)&local_78,(String *)"\n#define MAX_ROUGHNESS_LOD ");
  String::operator+((String *)&local_80,(String *)&local_78);
  String::operator+=((String *)&local_88,(String *)&local_80);
  lVar9 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  lVar9 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  puVar3 = local_68;
  if (local_68 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
    }
  }
  lVar9 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
      cVar4 = RendererSceneRenderRD::is_using_radiance_cubemap_array();
      goto joined_r0x00105513;
    }
  }
  cVar4 = RendererSceneRenderRD::is_using_radiance_cubemap_array();
joined_r0x00105513:
  if (cVar4 != '\0') {
    String::operator+=((String *)&local_88,"\n#define USE_RADIANCE_CUBEMAP_ARRAY \n");
  }
  local_70 = 0;
  local_68 = &_LC95;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_70);
  itos((long)&local_68);
  operator+((char *)&local_78,(String *)"\n#define MAX_DIRECTIONAL_LIGHT_DATA_STRUCTS ");
  String::operator+((String *)&local_80,(String *)&local_78);
  String::operator+=((String *)&local_88,(String *)&local_80);
  lVar9 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  lVar9 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  puVar3 = local_68;
  if (local_68 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
    }
  }
  lVar9 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_68,"rendering/shading/overrides/force_vertex_shading",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  bVar5 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (bVar5) {
    String::operator+=((String *)&local_88,"\n#define USE_VERTEX_LIGHTING\n");
  }
  *(undefined4 *)(this + 0x2ebc) = 2;
  local_70 = 0;
  local_68 = &_LC95;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_70);
  itos((long)&local_68);
  operator+((char *)&local_78,(String *)"\n#define MAX_LIGHTMAP_TEXTURES ");
  String::operator+((String *)&local_80,(String *)&local_78);
  String::operator+=((String *)&local_88,(String *)&local_80);
  lVar9 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  lVar9 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  puVar3 = local_68;
  if (local_68 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
    }
  }
  lVar9 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  local_68 = &_LC95;
  local_70 = 0;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_70);
  itos((long)&local_68);
  operator+((char *)&local_78,(String *)"\n#define MAX_LIGHTMAPS ");
  String::operator+((String *)&local_80,(String *)&local_78);
  String::operator+=((String *)&local_88,(String *)&local_80);
  lVar9 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  lVar9 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  puVar3 = local_68;
  if (local_68 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
    }
  }
  lVar9 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  uVar8 = RenderingDevice::get_singleton();
  local_60 = 0;
  uVar8 = RenderingDevice::storage_buffer_create
                    (uVar8,*(int *)(this + 0x2ebc) << 6,(StringName *)&local_68,0,0);
  lVar9 = local_60;
  *(undefined8 *)(this + 0x2ec0) = uVar8;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  *(undefined4 *)(this + 0x2ed0) = 0x800;
  lVar9 = Memory::alloc_static(0x48000,true);
  if (lVar9 == 0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    *(undefined8 *)(lVar9 + -8) = 0x800;
  }
  *(long *)(this + 0x2ec8) = lVar9;
  uVar8 = RenderingDevice::get_singleton();
  local_60 = 0;
  uVar8 = RenderingDevice::storage_buffer_create
                    (uVar8,*(int *)(this + 0x2ed0) * 0x90,(StringName *)&local_68,0,0);
  lVar9 = local_60;
  *(undefined8 *)(this + 0x2ed8) = uVar8;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  local_68 = &_LC95;
  local_70 = 0;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_70);
  itos((long)&local_68);
  operator+((char *)&local_78,(String *)"\n#define MATERIAL_UNIFORM_SET ");
  String::operator+((String *)&local_80,(String *)&local_78);
  String::operator+=((String *)&local_88,(String *)&local_80);
  lVar9 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  lVar9 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  puVar3 = local_68;
  if (local_68 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
    }
  }
  lVar9 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  local_68 = (undefined *)0x0;
  plVar1 = (long *)(local_88 + -0x10);
  if (local_88 != 0) {
    do {
      lVar9 = *plVar1;
      if (lVar9 == 0) goto LAB_00105330;
      LOCK();
      lVar10 = *plVar1;
      bVar5 = lVar9 == lVar10;
      if (bVar5) {
        *plVar1 = lVar9 + 1;
        lVar10 = lVar9;
      }
      UNLOCK();
    } while (!bVar5);
    if (lVar10 != -1) {
      local_68 = (undefined *)local_88;
    }
  }
LAB_00105330:
  RendererSceneRenderImplementation::SceneShaderForwardMobile::init
            ((SceneShaderForwardMobile *)(this + 0x24b0));
  puVar3 = local_68;
  if (local_68 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = (undefined *)0x0;
      Memory::free_static((void *)((long)puVar3 + -0x10),false);
    }
  }
  _update_shader_quality_settings(this);
  _update_global_pipeline_data_requirements_from_project(this);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_68,"rendering/viewport/hdr_2d",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  bVar5 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar9 = local_88;
  this[0x30ce] = (RenderForwardMobile)((byte)this[0x30ce] & 0xfc | bVar5 | !bVar5 * '\x02');
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererSceneRenderImplementation::RenderForwardMobile::_geometry_instance_add_surface_with_material(RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile*,
   unsigned int, RendererSceneRenderImplementation::SceneShaderForwardMobile::MaterialData*,
   unsigned int, unsigned int, RID) */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::_geometry_instance_add_surface_with_material
          (RenderForwardMobile *this,long param_1,uint param_2,long param_3,uint param_4,
          ulong param_6,ulong param_7)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long *plVar6;
  ulong uVar7;
  code *pcVar8;
  char *pcVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  byte bVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  int iVar23;
  int iVar24;
  undefined4 uVar25;
  ulong uVar26;
  long in_FS_OFFSET;
  bool bVar27;
  uint local_a0;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  uVar26 = (ulong)param_2;
  uVar25 = (undefined4)param_6;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar11 = (long *)RendererRD::MeshStorage::get_singleton();
  lVar16 = *(long *)(param_3 + 0xa8);
  bVar17 = *(byte *)(lVar16 + 0x23b);
  uVar10 = -(uint)*(byte *)(*(long *)(param_1 + 0xa8) + 0x52) & 0x8000 |
           (uint)*(byte *)(lVar16 + 0x237) << 0xb | -(uint)*(byte *)(lVar16 + 0x239) & 0x1000 |
           -(uint)*(byte *)(lVar16 + 0x23a) & 0x2000 | -(uint)bVar17 & 0x4000;
  if ((*(byte *)(lVar16 + 0x239) == 0) && (*(byte *)(lVar16 + 0x23a) == 0)) {
    cVar2 = *(char *)(lVar16 + 0x229);
    if (cVar2 != '\0') {
LAB_001058a2:
      if (*(char *)(lVar16 + 0x22b) == '\0') goto LAB_00105e50;
      cVar2 = *(char *)(lVar16 + 0x22c);
    }
    iVar24 = *(int *)(lVar16 + 0x210);
    iVar23 = *(int *)(lVar16 + 0x214);
    param_6 = (ulong)(iVar23 == 0);
    if ((((cVar2 != '\0' || *(char *)(lVar16 + 0x22a) != '\0') || (bVar17 != 0)) || (iVar24 == 0))
       || (local_a0 = uVar10 | 0xb, iVar23 == 0)) goto LAB_00105e5c;
LAB_001058fd:
    cVar2 = *(char *)(lVar16 + 0x232);
  }
  else {
    bVar17 = *(byte *)(lVar16 + 0x229);
    if (bVar17 != 0) goto LAB_001058a2;
LAB_00105e50:
    iVar23 = *(int *)(lVar16 + 0x214);
    iVar24 = *(int *)(lVar16 + 0x210);
LAB_00105e5c:
    local_a0 = uVar10 | 4;
    if (*(char *)(lVar16 + 0x22d) == '\0') {
      if ((*(char *)(lVar16 + 0x22c) != '\0') && (iVar24 != 0)) goto LAB_00105e78;
      goto LAB_001058fd;
    }
    if (iVar24 == 0) goto LAB_001058fd;
LAB_00105e78:
    if (iVar23 != 0) {
      local_a0 = uVar10 | 0xd;
    }
    cVar2 = *(char *)(lVar16 + 0x232);
  }
  lVar12 = param_3;
  if (cVar2 != '\0') {
    iVar24 = *(int *)(this + 0x300c);
    local_a0 = local_a0 | 0x10000;
    lVar16 = 0;
    goto joined_r0x00105eaa;
  }
  if ((((*(char *)(lVar16 + 0x240) == '\0') && (*(char *)(lVar16 + 0x236) == '\0')) &&
      ((*(char *)(lVar16 + 0x22e) == '\0' &&
       (((*(char *)(lVar16 + 0x22d) == '\0' && (*(char *)(lVar16 + 0x22b) == '\0')) &&
        (*(char *)(lVar16 + 0x22c) == '\0')))))) &&
     ((*(char *)(lVar16 + 0x241) == '\0' && (*(char *)(lVar16 + 0x234) == '\0')))) {
    local_a0 = local_a0 | 0x80;
    lVar16 = RendererRD::MaterialStorage::get_singleton();
    uVar7 = *(ulong *)(this + 0x2b48);
    if ((uVar7 == 0) || (*(uint *)(lVar16 + 0x26c) <= (uint)uVar7)) {
LAB_00106523:
      lVar12 = 0;
    }
    else {
      lVar16 = ((uVar7 & 0xffffffff) % (ulong)*(uint *)(lVar16 + 0x268)) * 0xc0 +
               *(long *)(*(long *)(lVar16 + 600) +
                        ((uVar7 & 0xffffffff) / (ulong)*(uint *)(lVar16 + 0x268)) * 8);
      if (*(int *)(lVar16 + 0xb8) != (int)(uVar7 >> 0x20)) {
        if (*(int *)(lVar16 + 0xb8) + 0x80000000U < 0x7fffffff) {
          param_6 = 0;
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_00106523;
      }
      if (*(int *)(lVar16 + 0x18) != 1) goto LAB_00106523;
      lVar12 = *(long *)(lVar16 + 8);
    }
    if ((param_7 == 0) || (*(uint *)((long)plVar11 + 0xcc) <= (uint)param_7)) {
LAB_00106579:
      _err_print_error("mesh_get_shadow_mesh",
                       "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x1ae,
                       "Parameter \"mesh\" is null.",0);
      goto LAB_0010591a;
    }
    lVar16 = ((param_7 & 0xffffffff) % (ulong)*(uint *)(plVar11 + 0x19)) * 0xe0 +
             *(long *)(plVar11[0x17] +
                      ((param_7 & 0xffffffff) / (ulong)*(uint *)(plVar11 + 0x19)) * 8);
    iVar24 = *(int *)(lVar16 + 0xd8);
    if (iVar24 != param_7._4_4_) {
      if (iVar24 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0,param_6);
      }
      goto LAB_00106579;
    }
    uVar7 = *(ulong *)(lVar16 + 0x70);
    if (uVar7 == 0) goto LAB_0010591a;
    if (*(uint *)((long)plVar11 + 0xcc) <= (uint)uVar7) {
LAB_001065bf:
      _err_print_error("mesh_get_surface",
                       "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x1a6,
                       "Parameter \"mesh\" is null.",0);
      goto LAB_0010591a;
    }
    lVar16 = ((uVar7 & 0xffffffff) % (ulong)*(uint *)(plVar11 + 0x19)) * 0xe0 +
             *(long *)(plVar11[0x17] + ((uVar7 & 0xffffffff) / (ulong)*(uint *)(plVar11 + 0x19)) * 8
                      );
    if (*(int *)(lVar16 + 0xd8) != (int)(uVar7 >> 0x20)) {
      if (*(int *)(lVar16 + 0xd8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0,plVar11[0x17]);
      }
      goto LAB_001065bf;
    }
    if (*(uint *)(lVar16 + 0x10) <= param_2) {
      _err_print_index_error
                ("mesh_get_surface","./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",
                 0x1a7,uVar26,(ulong)*(uint *)(lVar16 + 0x10),"p_surface_index",
                 "mesh->surface_count","",false,false);
      goto LAB_0010591a;
    }
    lVar16 = *(long *)(*(long *)(lVar16 + 8) + uVar26 * 8);
  }
  else {
LAB_0010591a:
    lVar16 = 0;
  }
  iVar24 = *(int *)(this + 0x300c);
joined_r0x00105eaa:
  if (iVar24 == 0) {
    uVar10 = *(uint *)(this + 0x3008) + 1;
    lVar21 = (ulong)*(uint *)(this + 0x3008) * 8;
    *(uint *)(this + 0x3008) = uVar10;
    uVar13 = Memory::realloc_static(*(void **)(this + 0x2ff8),(ulong)uVar10 << 3,false);
    *(undefined8 *)(this + 0x2ff8) = uVar13;
    uVar13 = Memory::realloc_static
                       (*(void **)(this + 0x3000),(ulong)*(uint *)(this + 0x3008) << 3,false);
    lVar19 = *(long *)(this + 0x2ff8);
    *(undefined8 *)(this + 0x3000) = uVar13;
    uVar13 = Memory::alloc_static((ulong)*(uint *)(this + 0x3018) * 0xa8,false);
    uVar10 = *(uint *)(this + 0x3018);
    *(undefined8 *)(lVar19 + lVar21) = uVar13;
    lVar19 = *(long *)(this + 0x3000);
    uVar13 = Memory::alloc_static((ulong)uVar10 << 3,false);
    uVar10 = *(uint *)(this + 0x3018);
    *(undefined8 *)(lVar19 + lVar21) = uVar13;
    if (uVar10 == 0) {
      plVar22 = *(long **)(this + 0x3000);
    }
    else {
      plVar22 = *(long **)(this + 0x3000);
      lVar19 = *(long *)(this + 0x2ff8);
      plVar6 = (long *)*plVar22;
      lVar20 = 0;
      plVar14 = plVar6;
      do {
        plVar15 = plVar14 + 1;
        lVar18 = *(long *)(lVar21 + lVar19) + lVar20;
        lVar20 = lVar20 + 0xa8;
        *plVar14 = lVar18;
        plVar14 = plVar15;
      } while (plVar15 != plVar6 + uVar10);
    }
    iVar24 = uVar10 + *(int *)(this + 0x300c);
  }
  else {
    plVar22 = *(long **)(this + 0x3000);
  }
  uVar10 = iVar24 - 1;
  *(uint *)(this + 0x300c) = uVar10;
  pauVar4 = *(undefined1 (**) [16])
             (plVar22[uVar10 >> ((byte)*(undefined4 *)(this + 0x3010) & 0x1f)] +
             (ulong)(uVar10 & *(uint *)(this + 0x3014)) * 8);
  pauVar4[5] = (undefined1  [16])0x0;
  pauVar4[6] = (undefined1  [16])0x0;
  uVar13 = *(undefined8 *)(param_3 + 0xa8);
  *(undefined8 *)(pauVar4[2] + 8) = 0;
  *(undefined8 *)(pauVar4[4] + 8) = 0;
  *(undefined8 *)pauVar4[3] = uVar13;
  *(long *)(pauVar4[3] + 8) = param_3;
  uVar13 = *(undefined8 *)(param_3 + 0xb0);
  *(undefined4 *)pauVar4[1] = 5;
  *(undefined8 *)(pauVar4[1] + 8) = 0;
  *(undefined8 *)pauVar4[2] = 0;
  *(undefined8 *)pauVar4[4] = 0;
  *(undefined8 *)(pauVar4[7] + 8) = 0;
  *(undefined8 *)pauVar4[8] = 0;
  *(undefined1 (**) [16])pauVar4[7] = pauVar4;
  *(undefined8 *)(pauVar4[8] + 8) = 0;
  *(undefined8 *)(pauVar4[9] + 8) = 0;
  *(undefined8 *)pauVar4[10] = 0;
  *(undefined1 (**) [16])pauVar4[9] = pauVar4;
  *(uint *)(pauVar4[1] + 4) = local_a0;
  *(undefined8 *)(pauVar4[2] + 8) = uVar13;
  if ((param_7 != 0) && ((uint)param_7 < *(uint *)((long)plVar11 + 0xcc))) {
    lVar19 = ((param_7 & 0xffffffff) % (ulong)*(uint *)(plVar11 + 0x19)) * 0xe0 +
             *(long *)(plVar11[0x17] +
                      ((param_7 & 0xffffffff) / (ulong)*(uint *)(plVar11 + 0x19)) * 8);
    if (*(int *)(lVar19 + 0xd8) == param_7._4_4_) {
      if (*(uint *)(lVar19 + 0x10) <= param_2) {
        _geometry_instance_add_surface_with_material();
        return;
      }
      puVar5 = *(undefined4 **)(*(long *)(lVar19 + 8) + uVar26 * 8);
      lVar19 = *(long *)(param_1 + 0xa8);
      *(undefined4 **)pauVar4[2] = puVar5;
      uVar3 = *puVar5;
      cVar2 = *(char *)(lVar19 + 0x53);
      *(uint *)(pauVar4[1] + 8) = param_2;
      *(undefined4 *)pauVar4[1] = uVar3;
      if (cVar2 != '\0') {
        (**(code **)(*RenderingServerGlobals::utilities + 0x20))
                  (RenderingServerGlobals::utilities,param_7,lVar19 + 0x58);
      }
      *(undefined8 *)pauVar4[5] = *(undefined8 *)(lVar12 + 0xa8);
      *(undefined8 *)(pauVar4[4] + 8) = *(undefined8 *)(lVar12 + 0xb0);
      if (lVar16 == 0) {
        lVar16 = *(long *)pauVar4[2];
      }
      *(long *)pauVar4[4] = lVar16;
      *(undefined8 *)(pauVar4[5] + 8) = *(undefined8 *)(param_1 + 0x180);
      *(long *)pauVar4[6] = param_1;
      *(undefined1 (**) [16])(param_1 + 0x180) = pauVar4;
      *pauVar4 = (undefined1  [16])0x0;
      *(undefined4 *)(*pauVar4 + 10) = uVar25;
      *(short *)(*pauVar4 + 8) = (short)(param_4 >> 0x10);
      *(ulong *)*pauVar4 =
           (ulong)(param_2 & 0x3ff) | (ulong)(param_4 & 0xffff) << 0x2a |
           (param_7 & 0xffffffff) << 10;
      (*pauVar4)[0xf] = *(undefined1 *)(param_3 + 0xd0);
      RendererRD::MeshStorage::get_singleton();
      if ((*(char *)(*(long *)(param_3 + 0xa8) + 0x231) != '\0') &&
         ((*(byte *)(*(long *)pauVar4[2] + 8) & 4) == 0)) {
        lVar16 = *(long *)(*(long *)(param_3 + 0xa8) + 8);
        if ((lVar16 == 0) || (*(uint *)(lVar16 + -8) < 2)) {
          local_80 = 0;
          local_58 = "";
          local_50 = 0;
          String::parse_latin1((StrRange *)&local_80);
        }
        else {
          local_60 = 0;
          local_50 = 1;
          local_58 = ")";
          String::parse_latin1((StrRange *)&local_60);
          operator+((char *)&local_58,(String *)&_LC120);
          String::operator+((String *)&local_80,(String *)&local_58);
          pcVar9 = local_58;
          if (local_58 != (undefined *)0x0) {
            LOCK();
            plVar22 = (long *)(local_58 + -0x10);
            *plVar22 = *plVar22 + -1;
            UNLOCK();
            if (*plVar22 == 0) {
              local_58 = (undefined *)0x0;
              Memory::free_static(pcVar9 + -0x10,false);
            }
          }
          lVar16 = local_60;
          if (local_60 != 0) {
            LOCK();
            plVar22 = (long *)(local_60 + -0x10);
            *plVar22 = *plVar22 + -1;
            UNLOCK();
            if (*plVar22 == 0) {
              local_60 = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
          }
        }
        (**(code **)(*plVar11 + 0xa8))((StrRange *)&local_70,plVar11,param_7);
        if ((local_70 == 0) || (*(uint *)(local_70 + -8) < 2)) {
          local_78 = 0;
          local_58 = "";
          local_50 = 0;
          String::parse_latin1((StrRange *)&local_78);
        }
        else {
          local_60 = 0;
          local_58 = ")";
          local_50 = 1;
          String::parse_latin1((StrRange *)&local_60);
          (**(code **)(*plVar11 + 0xa8))(&local_68,plVar11,param_7);
          operator+((char *)&local_58,(String *)&_LC120);
          String::operator+((String *)&local_78,(String *)&local_58);
          pcVar9 = local_58;
          if (local_58 != (undefined *)0x0) {
            LOCK();
            plVar11 = (long *)(local_58 + -0x10);
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (*plVar11 == 0) {
              local_58 = (undefined *)0x0;
              Memory::free_static(pcVar9 + -0x10,false);
            }
          }
          lVar16 = local_68;
          if (local_68 != 0) {
            LOCK();
            plVar11 = (long *)(local_68 + -0x10);
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (*plVar11 == 0) {
              local_68 = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
          }
          lVar16 = local_60;
          if (local_60 != 0) {
            LOCK();
            plVar11 = (long *)(local_60 + -0x10);
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (*plVar11 == 0) {
              local_60 = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
          }
        }
        lVar16 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar11 = (long *)(local_70 + -0x10);
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        local_60 = 0;
        plVar11 = (long *)(local_78 + -0x10);
        if (local_78 != 0) {
          do {
            lVar16 = *plVar11;
            if (lVar16 == 0) goto LAB_00105c73;
            LOCK();
            lVar12 = *plVar11;
            bVar27 = lVar16 == lVar12;
            if (bVar27) {
              *plVar11 = lVar16 + 1;
              lVar12 = lVar16;
            }
            UNLOCK();
          } while (!bVar27);
          if (lVar12 != -1) {
            local_60 = local_78;
          }
        }
LAB_00105c73:
        local_68 = 0;
        plVar11 = (long *)(local_80 + -0x10);
        if (local_80 != 0) {
          do {
            lVar16 = *plVar11;
            if (lVar16 == 0) goto LAB_00105cad;
            LOCK();
            lVar12 = *plVar11;
            bVar27 = lVar16 == lVar12;
            if (bVar27) {
              *plVar11 = lVar16 + 1;
              lVar12 = lVar16;
            }
            UNLOCK();
          } while (!bVar27);
          if (lVar12 != -1) {
            local_68 = local_80;
          }
        }
LAB_00105cad:
        local_70 = 0;
        local_58 = 
        "Attempting to use a shader %s that requires tangents with a mesh %s that doesn\'t contain tangents. Ensure that meshes are imported with the \'ensure_tangents\' option. If creating your own meshes, add an `ARRAY_TANGENT` array (when using ArrayMesh) or call `generate_tangents()` (when using SurfaceTool)."
        ;
        local_50 = 0x12e;
        String::parse_latin1((StrRange *)&local_70);
        vformat<String,String>
                  ((String *)&local_58,(StrRange *)&local_70,&local_68,(StrRange *)&local_60);
        _err_print_error("_geometry_instance_add_surface_with_material",
                         "servers/rendering/renderer_rd/forward_mobile/render_forward_mobile.cpp",
                         0xa5e,(String *)&local_58,1,1);
        pcVar9 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar11 = (long *)(local_58 + -0x10);
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar9 + -0x10,false);
          }
        }
        lVar16 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar11 = (long *)(local_70 + -0x10);
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        lVar16 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar11 = (long *)(local_68 + -0x10);
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        lVar16 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar11 = (long *)(local_60 + -0x10);
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        lVar16 = local_78;
        if (local_78 != 0) {
          LOCK();
          plVar11 = (long *)(local_78 + -0x10);
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            local_78 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        lVar16 = local_80;
        if (local_80 != 0) {
          LOCK();
          plVar11 = (long *)(local_80 + -0x10);
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            local_80 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
      }
      if (*(long *)(pauVar4[6] + 8) == 0) {
        puVar1 = pauVar4[6] + 8;
        *(RenderForwardMobile **)(pauVar4[6] + 8) = this + 0x2f70;
        lVar16 = *(long *)(this + 0x2f70);
        *(undefined8 *)pauVar4[8] = 0;
        *(long *)(pauVar4[7] + 8) = lVar16;
        if (lVar16 == 0) {
          *(undefined1 **)(this + 0x2f78) = puVar1;
        }
        else {
          *(undefined1 **)(lVar16 + 0x18) = puVar1;
        }
        *(undefined1 **)(this + 0x2f70) = puVar1;
      }
      if (*(long *)(pauVar4[8] + 8) == 0) {
        puVar1 = pauVar4[8] + 8;
        *(RenderForwardMobile **)(pauVar4[8] + 8) = this + 0x2f80;
        lVar16 = *(long *)(this + 0x2f80);
        *(undefined8 *)pauVar4[10] = 0;
        *(long *)(pauVar4[9] + 8) = lVar16;
        if (lVar16 == 0) {
          *(undefined1 **)(this + 0x2f88) = puVar1;
        }
        else {
          *(undefined1 **)(lVar16 + 0x18) = puVar1;
        }
        *(undefined1 **)(this + 0x2f80) = puVar1;
      }
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if (*(int *)(lVar19 + 0xd8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("mesh_get_surface","./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",
                   0x1a6,"Parameter \"mesh\" is null.",0,0);
  *(undefined8 *)pauVar4[2] = 0;
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
}



/* RendererSceneRenderImplementation::RenderForwardMobile::_geometry_instance_add_surface_with_material_chain(RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile*,
   unsigned int, RendererSceneRenderImplementation::SceneShaderForwardMobile::MaterialData*, RID,
   RID) */

ulong __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::
_geometry_instance_add_surface_with_material_chain
          (RenderForwardMobile *this,long param_1,undefined4 param_2,long param_3,ulong param_5,
          ulong param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  plVar6 = (long *)RendererRD::MaterialStorage::get_singleton();
  if (param_5 != 0) {
    if ((uint)param_5 < *(uint *)((long)plVar6 + 0x26c)) {
      lVar9 = ((param_5 & 0xffffffff) % (ulong)*(uint *)(plVar6 + 0x4d)) * 0xc0 +
              *(long *)(plVar6[0x4b] +
                       ((param_5 & 0xffffffff) / (ulong)*(uint *)(plVar6 + 0x4d)) * 8);
      iVar1 = *(int *)(lVar9 + 0xb8);
      if (iVar1 == (int)(param_5 >> 0x20)) {
        uVar7 = _geometry_instance_add_surface_with_material
                          (this,param_1,param_2,param_3,param_5 & 0xffffffff,
                           *(undefined4 *)(lVar9 + 0x1c),param_6);
        uVar8 = *(ulong *)(param_3 + 200);
        if (uVar8 != 0) {
          while( true ) {
            uVar2 = *(uint *)((long)plVar6 + 0x26c);
            uVar7 = (ulong)uVar2;
            if (uVar2 <= (uint)uVar8) break;
            lVar9 = plVar6[0x4b];
            uVar7 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(plVar6 + 0x4d)) * 0xc0 +
                    *(long *)(lVar9 + ((uVar8 & 0xffffffff) / (ulong)*(uint *)(plVar6 + 0x4d)) * 8);
            iVar1 = *(int *)(uVar7 + 0xb8);
            if (iVar1 != (int)(uVar8 >> 0x20)) {
              if (0x7ffffffe < iVar1 + 0x80000000U) {
                return uVar7;
              }
              uVar8 = _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
              return uVar8;
            }
            if (*(int *)(uVar7 + 0x18) != 1) {
              return uVar7;
            }
            lVar4 = *(long *)(uVar7 + 8);
            if (lVar4 == 0) {
              return uVar7;
            }
            uVar7 = RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::
                    is_valid();
            if ((char)uVar7 == '\0') {
              return uVar7;
            }
            if (*(char *)(*(long *)(param_1 + 0xa8) + 0x53) != '\0') {
              (**(code **)(*plVar6 + 0x128))(plVar6,uVar8,*(long *)(param_1 + 0xa8) + 0x58);
            }
            if (*(uint *)((long)plVar6 + 0x26c) <= (uint)uVar8) {
LAB_0011dd3a:
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            iVar3 = *(int *)(((uVar8 & 0xffffffff) % (ulong)*(uint *)(plVar6 + 0x4d)) * 0xc0 +
                             *(long *)(plVar6[0x4b] +
                                      ((uVar8 & 0xffffffff) / (ulong)*(uint *)(plVar6 + 0x4d)) * 8)
                            + 0xb8);
            if (iVar1 != iVar3) {
              if (iVar3 + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0,lVar9);
              }
              goto LAB_0011dd3a;
            }
            uVar7 = param_6;
            _geometry_instance_add_surface_with_material
                      (this,param_1,param_2,lVar4,uVar8 & 0xffffffff);
            uVar8 = *(ulong *)(lVar4 + 200);
            if (uVar8 == 0) {
              return uVar7;
            }
          }
        }
        return uVar7;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0,param_1);
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* RendererSceneRenderImplementation::RenderForwardMobile::_geometry_instance_add_surface(RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile*,
   unsigned int, RID, RID) */

ulong __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::_geometry_instance_add_surface
          (RenderForwardMobile *this,long param_1,undefined4 param_2,ulong param_4,
          undefined8 param_5)

{
  ulong uVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  plVar3 = (long *)RendererRD::MaterialStorage::get_singleton();
  uVar5 = *(ulong *)(*(long *)(param_1 + 0xa8) + 0x28);
  if ((uVar5 == 0) && (uVar5 = param_4, param_4 == 0)) {
    uVar5 = *(ulong *)(this + 0x2b48);
  }
  else {
    if ((uint)uVar5 < *(uint *)((long)plVar3 + 0x26c)) {
      lVar4 = ((uVar5 & 0xffffffff) % (ulong)*(uint *)(plVar3 + 0x4d)) * 0xc0 +
              *(long *)(plVar3[0x4b] + ((uVar5 & 0xffffffff) / (ulong)*(uint *)(plVar3 + 0x4d)) * 8)
      ;
      if (*(int *)(lVar4 + 0xb8) == (int)(uVar5 >> 0x20)) {
        if (((*(int *)(lVar4 + 0x18) == 1) && (lVar4 = *(long *)(lVar4 + 8), lVar4 != 0)) &&
           (cVar2 = RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::
                    is_valid(), cVar2 != '\0')) {
          if (*(char *)(*(long *)(param_1 + 0xa8) + 0x53) != '\0') {
            (**(code **)(*plVar3 + 0x128))(plVar3,uVar5,*(long *)(param_1 + 0xa8) + 0x58,lVar4);
          }
          goto LAB_001069ea;
        }
      }
      else if (*(int *)(lVar4 + 0xb8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    uVar5 = *(ulong *)(this + 0x2b48);
  }
  if ((uVar5 != 0) && ((uint)uVar5 < *(uint *)((long)plVar3 + 0x26c))) {
    lVar4 = ((uVar5 & 0xffffffff) % (ulong)*(uint *)(plVar3 + 0x4d)) * 0xc0 +
            *(long *)(plVar3[0x4b] + ((uVar5 & 0xffffffff) / (ulong)*(uint *)(plVar3 + 0x4d)) * 8);
    if (*(int *)(lVar4 + 0xb8) == (int)(uVar5 >> 0x20)) {
      if (*(int *)(lVar4 + 0x18) == 1) {
        lVar4 = *(long *)(lVar4 + 8);
        uVar5 = *(ulong *)(this + 0x2b48);
        if (lVar4 != 0) {
LAB_001069ea:
          _geometry_instance_add_surface_with_material_chain
                    (this,param_1,param_2,lVar4,uVar5,param_5);
          uVar5 = *(ulong *)(param_1 + 0xa8);
          uVar1 = *(ulong *)(uVar5 + 0x30);
          if ((uVar1 != 0) &&
             (uVar5 = uVar1 & 0xffffffff, (uint)uVar1 < *(uint *)((long)plVar3 + 0x26c))) {
            uVar5 = (uVar5 % (ulong)*(uint *)(plVar3 + 0x4d)) * 0xc0 +
                    *(long *)(plVar3[0x4b] + (uVar5 / *(uint *)(plVar3 + 0x4d)) * 8);
            if (*(int *)(uVar5 + 0xb8) == (int)(uVar1 >> 0x20)) {
              if (((*(int *)(uVar5 + 0x18) == 1) && (lVar4 = *(long *)(uVar5 + 8), lVar4 != 0)) &&
                 (uVar5 = RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::
                          is_valid(), (char)uVar5 != '\0')) {
                if (*(char *)(*(long *)(param_1 + 0xa8) + 0x53) != '\0') {
                  (**(code **)(*plVar3 + 0x128))
                            (plVar3,uVar1,*(long *)(param_1 + 0xa8) + 0x58,lVar4);
                }
                uVar5 = _geometry_instance_add_surface_with_material_chain
                                  (this,param_1,param_2,lVar4,uVar1,param_5);
                return uVar5;
              }
            }
            else if (*(int *)(uVar5 + 0xb8) + 0x80000000U < 0x7fffffff) {
              uVar5 = 0;
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0);
            }
          }
          return uVar5;
        }
      }
    }
    else if (*(int *)(lVar4 + 0xb8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar5 = _err_print_error("_geometry_instance_add_surface",
                           "servers/rendering/renderer_rd/forward_mobile/render_forward_mobile.cpp",
                           0xa97,"Parameter \"material\" is null.",0,0);
  return uVar5;
}



/* RendererSceneRenderImplementation::RenderForwardMobile::geometry_instance_create(RID) */

GeometryInstanceForwardMobile * __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::geometry_instance_create
          (RenderForwardMobile *this,undefined8 param_2)

{
  uint uVar1;
  GeometryInstanceForwardMobile *this_00;
  undefined8 *puVar2;
  
  uVar1 = (**(code **)(*RenderingServerGlobals::utilities + 0x10))();
  if ((0xfffffff1U >> (uVar1 & 0x1f) & 1) != 0) {
    _err_print_error("geometry_instance_create",
                     "servers/rendering/renderer_rd/forward_mobile/render_forward_mobile.cpp",0x96f,
                     "Condition \"!((1 << type) & RenderingServer::INSTANCE_GEOMETRY_MASK)\" is true. Returning: nullptr"
                     ,0,0);
    return (GeometryInstanceForwardMobile *)0x0;
  }
  this_00 = PagedAllocator<RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile,false,4096u>
            ::alloc<>((PagedAllocator<RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile,false,4096u>
                       *)(this + 0x2f90));
  puVar2 = (undefined8 *)operator_new(0xa0,"");
  *(undefined1 (*) [16])(puVar2 + 5) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 0xf) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 0x11) = (undefined1  [16])0x0;
  puVar2[2] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  *(undefined8 *)((long)puVar2 + 0x44) = 0;
  *(undefined4 *)((long)puVar2 + 0x4c) = 0;
  *(undefined4 *)(puVar2 + 10) = 0;
  *(undefined4 *)(puVar2 + 0xe) = 0;
  puVar2[0x13] = 2;
  *(undefined8 **)(this_00 + 0xa8) = puVar2;
  *puVar2 = param_2;
  *(uint *)(puVar2 + 1) = uVar1;
  puVar2[0xb] = this_00;
  puVar2[0xc] = _geometry_instance_dependency_changed;
  puVar2[0xd] = _geometry_instance_dependency_deleted;
  if (*(code **)(*(long *)this_00 + 0x10) == GeometryInstanceForwardMobile::_mark_dirty) {
    if (*(long *)(this_00 + 0x188) != 0) {
      return this_00;
    }
    GeometryInstanceForwardMobile::_mark_dirty(this_00);
    return this_00;
  }
  (**(code **)(*(long *)this_00 + 0x10))(this_00);
  return this_00;
}



/* RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::set_lightmap_capture(Color
   const*) */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::
set_lightmap_capture(GeometryInstanceForwardMobile *this,Color *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  GeometryInstanceLightmapSH *pGVar4;
  
  lVar3 = singleton;
  pGVar4 = *(GeometryInstanceLightmapSH **)(this + 0xe8);
  if (param_1 == (Color *)0x0) {
    if (pGVar4 != (GeometryInstanceLightmapSH *)0x0) {
      uVar1 = *(uint *)(singleton + 0x3074);
      *(GeometryInstanceLightmapSH **)
       (*(long *)(*(long *)(singleton + 0x3068) +
                 (ulong)(uVar1 >> ((byte)*(undefined4 *)(singleton + 0x3078) & 0x1f)) * 8) +
       (ulong)(uVar1 & *(uint *)(singleton + 0x307c)) * 8) = pGVar4;
      *(uint *)(lVar3 + 0x3074) = uVar1 + 1;
      *(undefined8 *)(this + 0xe8) = 0;
    }
  }
  else {
    if (pGVar4 == (GeometryInstanceLightmapSH *)0x0) {
      pGVar4 = PagedAllocator<RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceLightmapSH,false,4096u>
               ::alloc<>((PagedAllocator<RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceLightmapSH,false,4096u>
                          *)(singleton + 0x3060));
      *(GeometryInstanceLightmapSH **)(this + 0xe8) = pGVar4;
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)pGVar4 = *(undefined8 *)param_1;
    *(undefined8 *)(pGVar4 + 8) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(pGVar4 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(pGVar4 + 0x18) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(pGVar4 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(pGVar4 + 0x28) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(pGVar4 + 0x30) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(pGVar4 + 0x38) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(pGVar4 + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(pGVar4 + 0x48) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(pGVar4 + 0x50) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(pGVar4 + 0x58) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(pGVar4 + 0x60) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(pGVar4 + 0x68) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(pGVar4 + 0x70) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(pGVar4 + 0x78) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(pGVar4 + 0x80) = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(pGVar4 + 0x88) = uVar2;
  }
  if (*(code **)(*(long *)this + 0x10) == _mark_dirty) {
    if (*(long *)(this + 0x188) != 0) {
      return;
    }
    _mark_dirty(this);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00106eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x10))(this);
  return;
}



/* RendererSceneRenderImplementation::RenderForwardMobile::geometry_instance_free(RenderGeometryInstance*)
    */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::geometry_instance_free
          (RenderForwardMobile *this,RenderGeometryInstance *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  
  if (param_1 != (RenderGeometryInstance *)0x0) {
    if (*(long *)(param_1 + 0xe8) != 0) {
      uVar7 = *(uint *)(this + 0x3074);
      *(long *)(*(long *)(*(long *)(this + 0x3068) +
                         (ulong)(uVar7 >> ((byte)*(undefined4 *)(this + 0x3078) & 0x1f)) * 8) +
               (ulong)(uVar7 & *(uint *)(this + 0x307c)) * 8) = *(long *)(param_1 + 0xe8);
      *(uint *)(this + 0x3074) = uVar7 + 1;
    }
    if (*(long *)(param_1 + 0x180) != 0) {
      uVar1 = *(undefined4 *)(this + 0x3010);
      lVar2 = *(long *)(this + 0x3000);
      lVar8 = *(long *)(param_1 + 0x180);
      uVar7 = *(uint *)(this + 0x300c);
      do {
        lVar3 = *(long *)(lVar8 + 0x58);
        plVar4 = *(long **)(lVar8 + 0x88);
        if (plVar4 != (long *)0x0) {
          lVar5 = *(long *)(lVar8 + 0x98);
          if (lVar5 != 0) {
            *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(lVar8 + 0xa0);
          }
          lVar6 = *(long *)(lVar8 + 0xa0);
          if (lVar6 != 0) {
            *(long *)(lVar6 + 0x10) = lVar5;
          }
          if (lVar8 + 0x88 == *plVar4) {
            *plVar4 = *(long *)(lVar8 + 0x98);
            lVar5 = plVar4[1];
          }
          else {
            lVar5 = plVar4[1];
          }
          if (lVar8 + 0x88 == lVar5) {
            plVar4[1] = lVar6;
          }
        }
        plVar4 = *(long **)(lVar8 + 0x68);
        if (plVar4 != (long *)0x0) {
          lVar5 = *(long *)(lVar8 + 0x78);
          if (lVar5 != 0) {
            *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(lVar8 + 0x80);
          }
          lVar6 = *(long *)(lVar8 + 0x80);
          if (lVar6 != 0) {
            *(long *)(lVar6 + 0x10) = lVar5;
          }
          if (lVar8 + 0x68 == *plVar4) {
            *plVar4 = *(long *)(lVar8 + 0x78);
          }
          if (lVar8 + 0x68 == plVar4[1]) {
            plVar4[1] = lVar6;
          }
        }
        *(long *)(*(long *)(lVar2 + (ulong)(uVar7 >> ((byte)uVar1 & 0x1f)) * 8) +
                 (ulong)(uVar7 & *(uint *)(this + 0x3014)) * 8) = lVar8;
        *(uint *)(this + 0x300c) = uVar7 + 1;
        lVar8 = lVar3;
        uVar7 = uVar7 + 1;
      } while (lVar3 != 0);
    }
    memdelete<RenderGeometryInstanceBase::Data>(*(Data **)(param_1 + 0xa8));
    (*(code *)**(undefined8 **)param_1)(param_1);
    uVar7 = *(uint *)(this + 0x2fa4);
    *(RenderGeometryInstance **)
     (*(long *)(*(long *)(this + 0x2f98) +
               (ulong)(uVar7 >> ((byte)*(undefined4 *)(this + 0x2fa8) & 0x1f)) * 8) +
     (ulong)(uVar7 & *(uint *)(this + 0x2fac)) * 8) = param_1;
    *(uint *)(this + 0x2fa4) = uVar7 + 1;
    return;
  }
  _err_print_error("geometry_instance_free",
                   "servers/rendering/renderer_rd/forward_mobile/render_forward_mobile.cpp",0x999,
                   "Parameter \"ginstance\" is null.",0,0);
  return;
}



/* Vector<RID>::push_back(RID) [clone .isra.0] */

void __thiscall Vector<RID>::push_back(Vector<RID> *this,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<RID>::resize<false>((CowData<RID> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<RID>::_copy_on_write((CowData<RID> *)(this + 8));
        *(undefined8 *)(*(long *)(this + 8) + lVar3 * 8) = param_2;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* RendererSceneRenderImplementation::RenderForwardMobile::reflection_probe_create_framebuffer(RID,
   RID) */

undefined8 __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::reflection_probe_create_framebuffer
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  Vector *pVVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  Vector<RID> local_38 [8];
  long local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  Vector<RID>::push_back(local_38);
  Vector<RID>::push_back(local_38,param_3);
  pVVar3 = (Vector *)RenderingDevice::get_singleton();
  uVar4 = RenderingDevice::framebuffer_create(pVVar3,(long)local_38,0xffffffff);
  lVar2 = local_30;
  if (local_30 != 0) {
    LOCK();
    plVar1 = (long *)(local_30 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_30 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<int>::push_back(int) [clone .isra.0] */

void __thiscall Vector<int>::push_back(Vector<int> *this,int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<int>::resize<false>((CowData<int> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
        *(int *)(*(long *)(this + 8) + lVar3 * 4) = param_1;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* CowData<RenderingDevice::Uniform>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RenderingDevice::Uniform>::_copy_on_write(CowData<RenderingDevice::Uniform> *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 0x28 != 0) {
    uVar7 = lVar1 * 0x28 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar9 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar1;
    puVar8 = puVar5 + 2;
    if (lVar1 != 0) {
      do {
        puVar6 = (undefined8 *)((long)puVar8 + *(long *)this + (-0x10 - (long)puVar5));
        *puVar8 = *puVar6;
        *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar6 + 1);
        uVar2 = puVar6[2];
        puVar8[4] = 0;
        lVar3 = puVar6[4];
        puVar8[2] = uVar2;
        if (lVar3 != 0) {
          CowData<RID>::_ref((CowData<RID> *)(puVar8 + 4),(CowData *)(puVar6 + 4));
        }
        lVar9 = lVar9 + 1;
        puVar8 = puVar8 + 5;
      } while (lVar1 != lVar9);
    }
    _unref(this);
    *(undefined8 **)this = puVar5 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<RenderingDevice::FramebufferPass>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RenderingDevice::FramebufferPass>::_copy_on_write
          (CowData<RenderingDevice::FramebufferPass> *this)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  CowData<int> *this_00;
  ulong uVar5;
  long lVar6;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (lVar1 * 0x48 != 0) {
    uVar5 = lVar1 * 0x48 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  this_00 = (CowData<int> *)(puVar4 + 3);
  lVar6 = 0;
  *puVar4 = 1;
  puVar4[1] = lVar1;
  if (lVar1 != 0) {
    do {
      lVar3 = *(long *)this + (-0x18 - (long)puVar4);
      *(undefined8 *)this_00 = 0;
      if (*(long *)(this_00 + lVar3 + 8) != 0) {
        CowData<int>::_ref(this_00,(CowData *)(this_00 + lVar3 + 8));
      }
      *(undefined8 *)(this_00 + 0x10) = 0;
      if (*(long *)(this_00 + lVar3 + 0x18) != 0) {
        CowData<int>::_ref(this_00 + 0x10,(CowData *)(this_00 + lVar3 + 0x18));
      }
      *(undefined8 *)(this_00 + 0x20) = 0;
      if (*(long *)(this_00 + lVar3 + 0x28) != 0) {
        CowData<int>::_ref(this_00 + 0x20,(CowData *)(this_00 + lVar3 + 0x28));
      }
      *(undefined8 *)(this_00 + 0x30) = 0;
      if (*(long *)(this_00 + lVar3 + 0x38) != 0) {
        CowData<int>::_ref(this_00 + 0x30,(CowData *)(this_00 + lVar3 + 0x38));
      }
      lVar6 = lVar6 + 1;
      *(undefined8 *)(this_00 + 0x38) = *(undefined8 *)(this_00 + lVar3 + 0x40);
      this_00 = this_00 + 0x48;
    } while (lVar1 != lVar6);
  }
  _unref(this);
  *(undefined8 **)this = puVar4 + 2;
  return;
}



/* Vector<RenderingDevice::Uniform>::push_back(RenderingDevice::Uniform) [clone .isra.0] */

void __thiscall
Vector<RenderingDevice::Uniform>::push_back
          (Vector<RenderingDevice::Uniform> *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(this + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar2 = CowData<RenderingDevice::Uniform>::resize<false>
                    ((CowData<RenderingDevice::Uniform> *)(this + 8),lVar3);
  if (iVar2 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<RenderingDevice::Uniform>::_copy_on_write
                  ((CowData<RenderingDevice::Uniform> *)(this + 8));
        puVar1 = (undefined8 *)(*(long *)(this + 8) + lVar4 * 0x28);
        *puVar1 = *param_2;
        *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
        puVar1[2] = param_2[2];
        if (puVar1[4] == param_2[4]) {
          return;
        }
        CowData<RID>::_ref((CowData<RID> *)(puVar1 + 4),(CowData *)(param_2 + 4));
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* RendererSceneRenderImplementation::RenderForwardMobile::_update_render_base_uniform_set() */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::_update_render_base_uniform_set
          (RenderForwardMobile *this)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  Vector<RenderingDevice::Uniform> aVStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = RendererRD::LightStorage::get_singleton();
  RenderingDevice::get_singleton();
  cVar2 = RenderingDevice::uniform_sets_have_linear_pools();
  if (cVar2 == '\0') {
    if (*(long *)(this + 0x2bf0) != 0) {
      uVar4 = RenderingDevice::get_singleton();
      cVar2 = RenderingDevice::uniform_set_is_valid(uVar4,*(undefined8 *)(this + 0x2bf0));
      if (cVar2 != '\0') {
        lVar1 = *(long *)(this + 0x2be8);
        if (*(char *)(lVar3 + 0x240) == '\0') {
          _err_print_error("lightmap_array_get_version",
                           "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x407,
                           "Condition \"!using_lightmap_array\" is true. Returning: 0",0,0);
          lVar5 = 0;
        }
        else {
          lVar5 = *(long *)(lVar3 + 600);
        }
        if (lVar1 == lVar5) goto LAB_00107b29;
      }
      goto LAB_00107b90;
    }
  }
  else {
LAB_00107b90:
    if (*(long *)(this + 0x2bf0) != 0) {
      uVar4 = RenderingDevice::get_singleton();
      cVar2 = RenderingDevice::uniform_set_is_valid(uVar4,*(undefined8 *)(this + 0x2bf0));
      if (cVar2 != '\0') {
        uVar4 = RenderingDevice::get_singleton();
        RenderingDevice::free(uVar4,*(undefined8 *)(this + 0x2bf0));
      }
    }
  }
  if (*(char *)(lVar3 + 0x240) == '\0') {
    _err_print_error("lightmap_array_get_version",
                     "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x407,
                     "Condition \"!using_lightmap_array\" is true. Returning: 0",0,0);
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 600);
  }
  *(undefined8 *)(this + 0x2be8) = uVar4;
  local_38 = *(undefined8 *)(this + 0x2b88);
  local_50 = 0;
  local_48 = _LC152;
  local_40 = 1;
  local_28 = 0;
  Vector<RenderingDevice::Uniform>::push_back(aVStack_58,&local_48);
  lVar3 = RendererRD::LightStorage::get_singleton();
  local_40 = 0;
  local_38 = *(undefined8 *)(lVar3 + 0xf0);
  local_28 = 0;
  local_48 = _LC153;
  Vector<RenderingDevice::Uniform>::push_back(aVStack_58,&local_48);
  lVar3 = RendererRD::LightStorage::get_singleton();
  local_40 = 0;
  local_38 = *(undefined8 *)(lVar3 + 0xf8);
  local_28 = 0;
  local_48 = _LC154;
  Vector<RenderingDevice::Uniform>::push_back(aVStack_58,&local_48);
  lVar3 = RendererRD::LightStorage::get_singleton();
  local_40 = 0;
  local_38 = *(undefined8 *)(lVar3 + 0x238);
  local_28 = 0;
  local_48 = _LC155;
  Vector<RenderingDevice::Uniform>::push_back(aVStack_58,&local_48);
  lVar3 = RendererRD::LightStorage::get_singleton();
  local_40 = 0;
  local_38 = *(undefined8 *)(lVar3 + 0x110);
  local_28 = 0;
  local_48 = _LC156;
  Vector<RenderingDevice::Uniform>::push_back(aVStack_58,&local_48);
  local_40 = 0;
  local_38 = *(undefined8 *)(this + 0x2ec0);
  local_28 = 0;
  local_48 = _LC157;
  Vector<RenderingDevice::Uniform>::push_back(aVStack_58,&local_48);
  local_40 = 0;
  local_38 = *(undefined8 *)(this + 0x2ed8);
  local_28 = 0;
  local_48 = _LC158;
  Vector<RenderingDevice::Uniform>::push_back(aVStack_58,&local_48);
  RendererRD::TextureStorage::get_singleton();
  local_38 = RendererRD::TextureStorage::decal_atlas_get_texture();
  local_40 = 0;
  local_28 = 0;
  local_48 = _LC159;
  Vector<RenderingDevice::Uniform>::push_back(aVStack_58,&local_48);
  RendererRD::TextureStorage::get_singleton();
  local_38 = RendererRD::TextureStorage::decal_atlas_get_texture_srgb();
  local_40 = 0;
  local_28 = 0;
  local_48 = _LC160;
  Vector<RenderingDevice::Uniform>::push_back(aVStack_58,&local_48);
  lVar3 = RendererRD::TextureStorage::get_singleton();
  local_40 = 0;
  local_38 = *(undefined8 *)(lVar3 + 0x288);
  local_28 = 0;
  local_48 = _LC161;
  Vector<RenderingDevice::Uniform>::push_back(aVStack_58,&local_48);
  RendererRD::MaterialStorage::get_singleton();
  local_38 = RendererRD::MaterialStorage::global_shader_uniforms_get_storage_buffer();
  local_40 = 0;
  local_28 = 0;
  local_48 = _LC162;
  Vector<RenderingDevice::Uniform>::push_back(aVStack_58,&local_48);
  lVar3 = RendererRD::MaterialStorage::get_singleton();
  local_40 = 0;
  local_38 = *(undefined8 *)(lVar3 + 0x90);
  local_28 = 0;
  local_48 = _LC163;
  Vector<RenderingDevice::Uniform>::push_back(aVStack_58,&local_48);
  uVar4 = RenderingDevice::get_singleton();
  uVar4 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                    (uVar4,aVStack_58,*(undefined8 *)(this + 0x2b70),0,1);
  *(undefined8 *)(this + 0x2bf0) = uVar4;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_50);
LAB_00107b29:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RendererSceneRenderImplementation::RenderForwardMobile::_render_shadow_begin() */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::_render_shadow_begin
          (RenderForwardMobile *this)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x2ee8) != 0) {
    *(undefined4 *)(this + 0x2ee8) = 0;
  }
  uVar3 = RenderingDevice::get_singleton();
  local_50 = 0;
  local_48 = "Shadow Setup";
  local_40 = 0xc;
  local_38 = _LC74;
  uStack_34 = _LC74;
  uStack_30 = _LC74;
  uStack_2c = _LC74;
  String::parse_latin1((StrRange *)&local_50);
  RenderingDevice::draw_command_begin_label(uVar3,(StrRange *)&local_50,&local_38);
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  _update_render_base_uniform_set(this);
  if (*(int *)(this + 0x2f38) != 0) {
    *(undefined4 *)(this + 0x2f38) = 0;
  }
  if (*(int *)(this + 0x2f48) != 0) {
    *(undefined4 *)(this + 0x2f48) = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererSceneRenderImplementation::RenderForwardMobile::_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,
   RenderDataRD const*, RID, RendererRD::MaterialStorage::Samplers const&, bool, int) */

undefined8 __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::_setup_render_pass_uniform_set
          (RenderForwardMobile *this,int param_2,long param_3,long param_4,Vector *param_5,
          char param_6,uint param_7)

{
  int iVar1;
  bool bVar2;
  code *pcVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  Vector<RID> *pVVar10;
  long lVar11;
  Object *pOVar12;
  undefined8 uVar13;
  ulong *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  char *pcVar18;
  void *pvVar19;
  ulong uVar20;
  uint uVar21;
  long in_FS_OFFSET;
  StringName *local_f0;
  Object *local_e0;
  long local_d8;
  Vector<RenderingDevice::Uniform> local_a8 [8];
  undefined8 local_a0;
  Object *local_98;
  undefined1 local_90;
  long local_88;
  Vector<RID> local_80 [8];
  long local_78 [2];
  Object *local_68;
  undefined1 local_60;
  long local_58;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = RendererRD::LightStorage::get_singleton();
  pVVar10 = (Vector<RID> *)RendererRD::TextureStorage::get_singleton();
  if ((int)param_7 < 0) {
    uVar8 = *(uint *)(this + 0x2c08);
  }
  else {
    uVar8 = *(uint *)(this + 0x2c08);
    if ((int)param_7 < (int)uVar8) {
      if (param_3 == 0) {
        local_f0 = (StringName *)0x0;
        local_e0 = (Object *)0x0;
        bVar2 = false;
      }
      else {
        local_f0 = *(StringName **)(param_3 + 0x178);
        if (local_f0 == (StringName *)0x0) {
          local_e0 = (Object *)0x0;
          bVar2 = false;
        }
        else {
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          bVar2 = 1 < *(uint *)(local_f0 + 0x1a8);
          if ((_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
               ::{lambda()#1}::operator()()::sname == '\0') &&
             (iVar7 = __cxa_guard_acquire(&_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                                           ::{lambda()#1}::operator()()::sname), iVar7 != 0)) {
            _scs_create((char *)&_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                                 ::{lambda()#1}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                          ::{lambda()#1}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                                 ::{lambda()#1}::operator()()::sname);
          }
          cVar5 = RenderSceneBuffersRD::has_custom_data(local_f0);
          if (cVar5 == '\0') {
            local_e0 = (Object *)0x0;
            uVar8 = *(uint *)(this + 0x2c08);
          }
          else {
            if ((_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                 ::{lambda()#2}::operator()()::sname == '\0') &&
               (iVar7 = __cxa_guard_acquire(&_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                                             ::{lambda()#2}::operator()()::sname), iVar7 != 0)) {
              _scs_create((char *)&_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                                   ::{lambda()#2}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                            ::{lambda()#2}::operator()()::sname,&__dso_handle);
              __cxa_guard_release(&_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                                   ::{lambda()#2}::operator()()::sname);
            }
            RenderSceneBuffersRD::get_custom_data((StringName *)&local_68);
            if (local_68 == (Object *)0x0) {
              local_e0 = (Object *)0x0;
            }
            else {
              pOVar12 = (Object *)
                        __dynamic_cast(local_68,&Object::typeinfo,
                                       &RenderBufferDataForwardMobile::typeinfo,0);
              local_e0 = pOVar12;
              if (pOVar12 != (Object *)0x0) {
                cVar5 = RefCounted::reference();
                local_e0 = (Object *)0x0;
                if (cVar5 != '\0') {
                  local_e0 = pOVar12;
                }
                if (local_68 == (Object *)0x0) goto LAB_00108f06;
              }
              cVar5 = RefCounted::unreference();
              pOVar12 = local_68;
              if ((cVar5 != '\0') && (cVar5 = predelete_handler(local_68), cVar5 != '\0')) {
                (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
                Memory::free_static(pOVar12,false);
              }
            }
LAB_00108f06:
            uVar8 = *(uint *)(this + 0x2c08);
          }
        }
      }
      local_a0 = 0;
      if (uVar8 <= param_7) {
        uVar20 = (ulong)uVar8;
        goto LAB_00108bf0;
      }
      local_58 = *(undefined8 *)(*(long *)(this + 0x2c10) + (long)(int)param_7 * 8);
      local_60 = 0;
      local_68 = (Object *)0x7;
      local_48 = 0;
      Vector<RenderingDevice::Uniform>::push_back(local_a8,&local_68);
      local_58 = *(long *)(this + (long)param_2 * 8 + 0x2c18);
      if (local_58 == 0) {
        local_58 = *(long *)(this + 0x2b78);
      }
      local_60 = 0;
      local_68 = _LC169;
      local_48 = 0;
      Vector<RenderingDevice::Uniform>::push_back(local_a8,&local_68);
      if (param_4 == 0) {
        bVar6 = RendererSceneRenderRD::is_using_radiance_cubemap_array();
        param_4 = *(long *)(pVVar10 + (ulong)bVar6 * 8 + 0x50);
      }
      local_d8 = (long)(int)param_7;
      local_60 = 0;
      local_68 = _LC170;
      local_48 = 0;
      local_58 = param_4;
      Vector<RenderingDevice::Uniform>::push_back(local_a8,&local_68);
      if ((param_3 == 0) || (uVar20 = *(ulong *)(param_3 + 0x1e8), uVar20 == 0)) {
LAB_00108630:
        local_58 = *(long *)(pVVar10 + 0x58);
        local_68 = _LC173;
        local_60 = 0;
        local_48 = 0;
        Vector<RenderingDevice::Uniform>::push_back(local_a8,&local_68);
        if (param_3 != 0) goto LAB_00107ff4;
LAB_0010867a:
        local_58 = *(long *)(pVVar10 + 0x40);
      }
      else {
        if (*(uint *)(lVar9 + 0x18c) <= (uint)uVar20) {
LAB_00108609:
          _err_print_error("reflection_atlas_get_texture",
                           "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x37c,
                           "Parameter \"atlas\" is null.",0,0);
          goto LAB_00108630;
        }
        lVar17 = *(long *)(*(long *)(lVar9 + 0x178) +
                          ((uVar20 & 0xffffffff) / (ulong)*(uint *)(lVar9 + 0x188)) * 8) +
                 ((uVar20 & 0xffffffff) % (ulong)*(uint *)(lVar9 + 0x188)) * 0x48;
        iVar7 = *(int *)(lVar17 + 0x40);
        if (iVar7 != (int)(uVar20 >> 0x20)) {
          if (iVar7 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_00108609;
        }
        local_58 = *(long *)(lVar17 + 8);
        if (local_58 == 0) goto LAB_00108630;
        local_60 = 0;
        local_68 = _LC173;
        local_48 = 0;
        Vector<RenderingDevice::Uniform>::push_back(local_a8,&local_68);
LAB_00107ff4:
        uVar20 = *(ulong *)(param_3 + 0x1d8);
        if (uVar20 == 0) goto LAB_0010867a;
        if (*(uint *)(lVar9 + 0x34c) <= (uint)uVar20) {
LAB_001091d7:
          _err_print_error("shadow_atlas_get_texture",
                           "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x446,
                           "Parameter \"atlas\" is null.",0,0);
          goto LAB_0010867a;
        }
        lVar17 = *(long *)(*(long *)(lVar9 + 0x338) +
                          ((uVar20 & 0xffffffff) / (ulong)*(uint *)(lVar9 + 0x348)) * 8) +
                 ((uVar20 & 0xffffffff) % (ulong)*(uint *)(lVar9 + 0x348)) * 200;
        iVar7 = *(int *)(lVar17 + 0xc0);
        if (iVar7 != (int)(uVar20 >> 0x20)) {
          if (iVar7 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_001091d7;
        }
        local_58 = *(long *)(lVar17 + 0x80);
        if (local_58 == 0) goto LAB_0010867a;
      }
      local_60 = 0;
      local_68 = _LC175;
      local_48 = 0;
      Vector<RenderingDevice::Uniform>::push_back(local_a8,&local_68);
      if ((param_6 == '\0') || (local_58 = *(long *)(lVar9 + 0x388), local_58 == 0)) {
        local_58 = *(long *)(pVVar10 + 0x40);
      }
      local_60 = 0;
      local_68 = _LC176;
      local_48 = 0;
      Vector<RenderingDevice::Uniform>::push_back(local_a8,&local_68);
      uVar8 = *(uint *)(this + 0x2ebc);
      local_90 = 0;
      local_88 = 0;
      lVar17 = *(long *)(pVVar10 + 0x80);
      local_78[0] = 0;
      pcVar18 = (char *)(ulong)(uVar8 * 2);
      local_98 = _LC177;
      if (uVar8 * 2 == 0) {
        local_68 = _LC177;
        local_60 = 0;
        local_58 = 0;
LAB_001087f0:
        local_48 = 0;
        local_98 = local_68;
        local_90 = local_60;
        local_88 = local_58;
        Vector<RenderingDevice::Uniform>::push_back(local_a8,&local_68);
      }
      else {
        uVar21 = 0;
        do {
          lVar16 = local_78[0];
          uVar4 = uVar21 - uVar8;
          if (uVar21 < uVar8) {
            uVar4 = uVar21;
          }
          if ((param_3 == 0) ||
             (lVar11 = *(long *)(param_3 + 0x1b0), *(ulong *)(lVar11 + 0x28) <= (ulong)uVar4)) {
LAB_00108260:
            if (local_78[0] == 0) {
              lVar11 = lVar17;
              if (local_88 != 0) {
                Vector<RID>::push_back(local_80,local_88);
                pcVar18 = (char *)local_80;
                Vector<RID>::push_back(local_80,lVar17);
                local_88 = 0;
                lVar11 = local_88;
              }
            }
            else {
              pcVar18 = (char *)local_80;
              Vector<RID>::push_back(local_80,lVar17);
              lVar11 = local_88;
            }
          }
          else {
            uVar20 = *(ulong *)(*(long *)(*(long *)(lVar11 + 8) +
                                         (ulong)(uVar4 >> ((byte)*(undefined4 *)(lVar11 + 0x1c) &
                                                          0x3f)) * 8) +
                               (ulong)(uVar4 & *(uint *)(lVar11 + 0x20)) * 8);
            if ((uVar20 == 0) || (*(uint *)(lVar9 + 0x2ec) <= (uint)uVar20)) {
LAB_0011ddf9:
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            puVar14 = (ulong *)(((uVar20 & 0xffffffff) % (ulong)*(uint *)(lVar9 + 0x2e8)) * 0x40 +
                               *(long *)(*(long *)(lVar9 + 0x2d8) +
                                        ((uVar20 & 0xffffffff) / (ulong)*(uint *)(lVar9 + 0x2e8)) *
                                        8));
            iVar7 = (int)puVar14[7];
            if (iVar7 != (int)(uVar20 >> 0x20)) {
              if (iVar7 + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0,pcVar18);
              }
              goto LAB_0011ddf9;
            }
            uVar20 = *puVar14;
            iVar7 = (int)(uVar20 >> 0x20);
            if (*(uint *)(this + 0x2ebc) <= uVar21) {
              if ((uVar20 != 0) && ((uint)uVar20 < *(uint *)(lVar9 + 0x284))) {
                lVar11 = ((uVar20 & 0xffffffff) % (ulong)*(uint *)(lVar9 + 0x280)) * 0xb8 +
                         *(long *)(*(long *)(lVar9 + 0x270) +
                                  ((uVar20 & 0xffffffff) / (ulong)*(uint *)(lVar9 + 0x280)) * 8);
                iVar1 = *(int *)(lVar11 + 0xb0);
                if (iVar1 == iVar7) {
                  lVar11 = *(long *)(lVar11 + 8);
                  goto joined_r0x001082fb;
                }
                if (iVar1 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0);
                }
              }
              pcVar18 = "shadowmask_get_texture";
              _err_print_error("shadowmask_get_texture",
                               "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x417,
                               "Parameter \"lm\" is null.",0);
              goto LAB_00108260;
            }
            if ((uVar20 == 0) || (*(uint *)(lVar9 + 0x284) <= (uint)uVar20)) {
LAB_00108e00:
              pcVar18 = "lightmap_get_texture";
              _err_print_error("lightmap_get_texture",
                               "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x3f0,
                               "Parameter \"lm\" is null.",0);
              goto LAB_00108260;
            }
            plVar15 = (long *)(((uVar20 & 0xffffffff) % (ulong)*(uint *)(lVar9 + 0x280)) * 0xb8 +
                              *(long *)(*(long *)(lVar9 + 0x270) +
                                       ((uVar20 & 0xffffffff) / (ulong)*(uint *)(lVar9 + 0x280)) * 8
                                       ));
            iVar1 = (int)plVar15[0x16];
            if (iVar1 != iVar7) {
              if (iVar1 + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
              goto LAB_00108e00;
            }
            lVar11 = *plVar15;
joined_r0x001082fb:
            if (lVar11 == 0) goto LAB_00108260;
            pcVar18 = (char *)pVVar10;
            lVar11 = (**(code **)(*(long *)pVVar10 + 0x138))(pVVar10,lVar11,0);
            if (lVar16 == 0) {
              if (local_88 != 0) {
                pcVar18 = (char *)local_80;
                Vector<RID>::push_back((Vector<RID> *)pcVar18,local_88);
                Vector<RID>::push_back((Vector<RID> *)pcVar18,lVar11);
                local_88 = 0;
                lVar11 = local_88;
              }
            }
            else {
              pcVar18 = (char *)local_80;
              Vector<RID>::push_back((Vector<RID> *)pcVar18,lVar11);
              lVar11 = local_88;
            }
          }
          local_88 = lVar11;
          lVar16 = local_78[0];
          uVar8 = *(uint *)(this + 0x2ebc);
          uVar21 = uVar21 + 1;
        } while (uVar21 < uVar8 * 2);
        local_48 = 0;
        local_68 = local_98;
        local_60 = local_90;
        local_58 = local_88;
        if (local_78[0] == 0) goto LAB_001087f0;
        CowData<RID>::_ref((CowData<RID> *)&local_48,(CowData *)local_78);
        lVar9 = local_48;
        Vector<RenderingDevice::Uniform>::push_back(local_a8);
        if (lVar9 == 0) {
LAB_00108413:
          LOCK();
          plVar15 = (long *)(lVar16 + -0x10);
          *plVar15 = *plVar15 + -1;
          UNLOCK();
          if (*plVar15 == 0) {
            Memory::free_static((void *)(local_78[0] + -0x10),false);
          }
        }
        else {
          LOCK();
          plVar15 = (long *)(lVar9 + -0x10);
          *plVar15 = *plVar15 + -1;
          UNLOCK();
          if (*plVar15 == 0) {
            Memory::free_static((void *)(local_48 + -0x10),false);
          }
          lVar16 = local_78[0];
          if (local_78[0] != 0) goto LAB_00108413;
        }
      }
      local_90 = 0;
      local_88 = 0;
      local_78[0] = 0;
      local_98 = _LC159;
      if (local_f0 == (StringName *)0x0) {
        if (bVar2) {
          lVar9 = *(long *)(pVVar10 + 0x98);
        }
        else {
          lVar9 = *(long *)(pVVar10 + 0x40);
        }
      }
      else {
        if ((_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
             ::{lambda()#4}::operator()()::sname == '\0') &&
           (iVar7 = __cxa_guard_acquire(&_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                                         ::{lambda()#4}::operator()()::sname), iVar7 != 0)) {
          _scs_create((char *)&_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                               ::{lambda()#4}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                        ::{lambda()#4}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                               ::{lambda()#4}::operator()()::sname);
        }
        if ((_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
             ::{lambda()#3}::operator()()::sname == '\0') &&
           (iVar7 = __cxa_guard_acquire(&_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                                         ::{lambda()#3}::operator()()::sname), iVar7 != 0)) {
          _scs_create((char *)&_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                               ::{lambda()#3}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                        ::{lambda()#3}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                               ::{lambda()#3}::operator()()::sname);
        }
        cVar5 = RenderSceneBuffersRD::has_texture
                          (local_f0,(StringName *)
                                    &_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                                     ::{lambda()#3}::operator()()::sname);
        if (cVar5 == '\0') {
          if (bVar2) {
            lVar9 = *(long *)(pVVar10 + 0x98);
          }
          else {
            lVar9 = *(long *)(pVVar10 + 0x40);
          }
        }
        else {
          if ((_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
               ::{lambda()#6}::operator()()::sname == '\0') &&
             (iVar7 = __cxa_guard_acquire(&_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                                           ::{lambda()#6}::operator()()::sname), iVar7 != 0)) {
            _scs_create((char *)&_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                                 ::{lambda()#6}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                          ::{lambda()#6}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                                 ::{lambda()#6}::operator()()::sname);
          }
          if ((_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
               ::{lambda()#5}::operator()()::sname == '\0') &&
             (iVar7 = __cxa_guard_acquire(&_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                                           ::{lambda()#5}::operator()()::sname), iVar7 != 0)) {
            _scs_create((char *)&_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                                 ::{lambda()#5}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                          ::{lambda()#5}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                                 ::{lambda()#5}::operator()()::sname);
          }
          lVar9 = RenderSceneBuffersRD::get_texture
                            (local_f0,(StringName *)
                                      &_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,RenderDataRD_const*,RID,RendererRD::MaterialStorage::Samplers_const&,bool,int)
                                       ::{lambda()#5}::operator()()::sname);
        }
        if (local_78[0] == 0) {
          if (local_88 == 0) goto LAB_001086d9;
          Vector<RID>::push_back(local_80,local_88);
          Vector<RID>::push_back(local_80,lVar9);
          local_88 = 0;
        }
        else {
          Vector<RID>::push_back(local_80,lVar9);
        }
        lVar17 = local_78[0];
        local_48 = 0;
        local_68 = local_98;
        local_60 = local_90;
        local_58 = local_88;
        lVar9 = local_88;
        if (local_78[0] != 0) {
          CowData<RID>::_ref((CowData<RID> *)&local_48,(CowData *)local_78);
          lVar9 = local_48;
          Vector<RenderingDevice::Uniform>::push_back(local_a8);
          if (lVar9 != 0) {
            LOCK();
            plVar15 = (long *)(lVar9 + -0x10);
            *plVar15 = *plVar15 + -1;
            UNLOCK();
            if (*plVar15 == 0) {
              Memory::free_static((void *)(local_48 + -0x10),false);
            }
            lVar17 = local_78[0];
            if (local_78[0] == 0) goto joined_r0x001086ec;
          }
          LOCK();
          plVar15 = (long *)(lVar17 + -0x10);
          *plVar15 = *plVar15 + -1;
          UNLOCK();
          if (*plVar15 == 0) {
            Memory::free_static((void *)(local_78[0] + -0x10),false);
          }
          goto joined_r0x001086ec;
        }
      }
LAB_001086d9:
      local_88 = lVar9;
      local_48 = 0;
      local_68 = local_98;
      local_60 = local_90;
      local_58 = local_88;
      Vector<RenderingDevice::Uniform>::push_back(local_a8,&local_68);
joined_r0x001086ec:
      if ((local_e0 == (Object *)0x0) ||
         (local_58 = RenderSceneBuffersRD::get_back_buffer_texture((RenderSceneBuffersRD *)local_f0)
         , local_58 == 0)) {
        if (bVar2) {
          local_58 = *(long *)(pVVar10 + 0x98);
        }
        else {
          local_58 = *(long *)(pVVar10 + 0x20);
        }
      }
      local_60 = 0;
      local_68 = _LC160;
      local_48 = 0;
      Vector<RenderingDevice::Uniform>::push_back(local_a8,&local_68);
      switch(*(undefined4 *)(this + 0x2484)) {
      case 0:
        uVar13 = FUN_00108840();
        return uVar13;
      case 1:
        uVar13 = FUN_00108840();
        return uVar13;
      case 2:
        uVar13 = FUN_00108840();
        return uVar13;
      case 3:
        uVar13 = FUN_00108840();
        return uVar13;
      case 4:
        goto switchD_0010875e_caseD_4;
      case 5:
        uVar13 = FUN_00108840();
        return uVar13;
      default:
        uVar13 = FUN_00108840();
        return uVar13;
      }
    }
  }
  uVar13 = 0;
  _err_print_index_error
            ("_setup_render_pass_uniform_set",
             "servers/rendering/renderer_rd/forward_mobile/render_forward_mobile.cpp",0x184,
             (long)(int)param_7,(long)(int)uVar8,"p_index","(int)scene_state.uniform_buffers.size()"
             ,"",false,false);
  goto LAB_001089f1;
switchD_0010875e_caseD_4:
  local_58 = *(long *)(param_5 + 0xa8);
  local_60 = 0;
  local_68 = _LC181;
  local_48 = 0;
  Vector<RenderingDevice::Uniform>::push_back(local_a8,&local_68);
  switch(*(undefined4 *)(this + 0x2488)) {
  case 0:
    uVar13 = FUN_001088b0();
    return uVar13;
  case 1:
    uVar13 = FUN_001088b0();
    return uVar13;
  case 2:
    uVar13 = FUN_001088b0();
    return uVar13;
  case 3:
    uVar13 = FUN_001088b0();
    return uVar13;
  case 4:
    break;
  case 5:
    uVar13 = FUN_001088b0();
    return uVar13;
  default:
    uVar13 = FUN_001088b0();
    return uVar13;
  }
  local_58 = *(long *)(param_5 + 0xa8);
  local_60 = 0;
  local_68 = _LC182;
  local_48 = 0;
  Vector<RenderingDevice::Uniform>::push_back(local_a8,&local_68);
  RendererRD::MaterialStorage::Samplers::append_uniforms<Vector<RenderingDevice::Uniform>>
            (param_5,(int)local_a8);
  uVar8 = *(uint *)(this + 0x2bf8);
  uVar20 = (ulong)uVar8;
  if ((int)uVar8 <= (int)param_7) {
    uVar21 = param_7 + 1;
    if (uVar8 <= uVar21) {
      if (uVar21 <= uVar8) goto LAB_0010890f;
      if (*(uint *)(this + 0x2bfc) < uVar21) {
        pvVar19 = *(void **)(this + 0x2c00);
        uVar8 = param_7 >> 1 | param_7;
        uVar8 = uVar8 | uVar8 >> 2;
        uVar8 = uVar8 | uVar8 >> 4;
        uVar8 = uVar8 >> 8 | uVar8;
        uVar8 = (uVar8 >> 0x10 | uVar8) + 1;
        *(uint *)(this + 0x2bfc) = uVar8;
        lVar9 = Memory::realloc_static(pvVar19,(ulong)uVar8 * 8,false);
        *(long *)(this + 0x2c00) = lVar9;
        if (lVar9 == 0) {
          LocalVector<RendererSceneRenderImplementation::RenderForwardMobile::SceneState::ShadowPass,unsigned_int,false,false>
          ::resize((uint)pvVar19);
          goto LAB_00109280;
        }
        uVar20 = (ulong)*(uint *)(this + 0x2bf8);
        if (uVar21 <= *(uint *)(this + 0x2bf8)) goto LAB_00108b5b;
      }
      memset((void *)(*(long *)(this + 0x2c00) + uVar20 * 8),0,
             (ulong)(param_7 - (int)uVar20) * 8 + 8);
    }
LAB_00108b5b:
    *(uint *)(this + 0x2bf8) = uVar21;
    uVar20 = (ulong)uVar21;
  }
LAB_0010890f:
  if ((uint)uVar20 <= param_7) {
LAB_00108bf0:
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,(long)(int)param_7,uVar20,
               "p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (*(long *)(*(long *)(this + 0x2c00) + local_d8 * 8) != 0) {
    uVar13 = RenderingDevice::get_singleton();
    uVar20 = (ulong)*(uint *)(this + 0x2bf8);
    if (*(uint *)(this + 0x2bf8) <= param_7) goto LAB_00108bf0;
    cVar5 = RenderingDevice::uniform_set_is_valid
                      (uVar13,*(undefined8 *)(*(long *)(this + 0x2c00) + local_d8 * 8));
    if (cVar5 != '\0') {
      uVar13 = RenderingDevice::get_singleton();
      uVar20 = (ulong)*(uint *)(this + 0x2bf8);
      if (*(uint *)(this + 0x2bf8) <= param_7) goto LAB_00108bf0;
      RenderingDevice::free(uVar13,*(undefined8 *)(*(long *)(this + 0x2c00) + local_d8 * 8));
    }
  }
  uVar13 = RenderingDevice::get_singleton();
  uVar13 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                     (uVar13,local_a8,*(undefined8 *)(this + 0x2b70),1,1);
  uVar20 = (ulong)*(uint *)(this + 0x2bf8);
  if (*(uint *)(this + 0x2bf8) <= param_7) goto LAB_00108bf0;
  *(undefined8 *)((long)(int)param_7 * 8 + *(long *)(this + 0x2c00)) = uVar13;
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_a0);
  if (((local_f0 != (StringName *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
     (cVar5 = predelete_handler((Object *)local_f0), cVar5 != '\0')) {
    (**(code **)(*(long *)local_f0 + 0x140))(local_f0);
    Memory::free_static(local_f0,false);
  }
  if (((local_e0 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_e0), cVar5 != '\0')) {
    (**(code **)(*(long *)local_e0 + 0x140))(local_e0);
    Memory::free_static(local_e0,false);
  }
LAB_001089f1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
LAB_00109280:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 FUN_00108840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_RBX;
  void *pvVar7;
  ulong uVar8;
  int unaff_R13D;
  long in_FS_OFFSET;
  Object *in_stack_00000018;
  Vector *in_stack_00000020;
  Object *in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000050;
  undefined8 uStack00000000000000a0;
  undefined1 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000c0;
  long in_stack_000000c8;
  uint in_stack_00000110;
  
  uStack00000000000000a8 = 0;
  uStack00000000000000a0 = _LC181;
  uStack00000000000000c0 = 0;
  uStack00000000000000b0 = param_3;
  Vector<RenderingDevice::Uniform>::push_back();
  switch(*(undefined4 *)(unaff_RBX + 0x2488)) {
  case 0:
    uVar6 = FUN_001088b0();
    return uVar6;
  case 1:
    uVar6 = FUN_001088b0();
    return uVar6;
  case 2:
    uVar6 = FUN_001088b0();
    return uVar6;
  case 3:
    uVar6 = FUN_001088b0();
    return uVar6;
  case 4:
    break;
  case 5:
    uVar6 = FUN_001088b0();
    return uVar6;
  default:
    uVar6 = FUN_001088b0();
    return uVar6;
  }
  uStack00000000000000b0 = *(undefined8 *)(in_stack_00000020 + 0xa8);
  uStack00000000000000a8 = 0;
  uStack00000000000000a0 = _LC182;
  uStack00000000000000c0 = 0;
  Vector<RenderingDevice::Uniform>::push_back();
  RendererRD::MaterialStorage::Samplers::append_uniforms<Vector<RenderingDevice::Uniform>>
            (in_stack_00000020,unaff_R13D);
  uVar4 = *(uint *)(unaff_RBX + 0x2bf8);
  uVar8 = (ulong)uVar4;
  if ((int)uVar4 <= (int)in_stack_00000110) {
    uVar1 = in_stack_00000110 + 1;
    if (uVar4 <= uVar1) {
      if (uVar1 <= uVar4) goto LAB_0010890f;
      if (*(uint *)(unaff_RBX + 0x2bfc) < uVar1) {
        pvVar7 = *(void **)(unaff_RBX + 0x2c00);
        uVar4 = in_stack_00000110 >> 1 | in_stack_00000110;
        uVar4 = uVar4 | uVar4 >> 2;
        uVar4 = uVar4 | uVar4 >> 4;
        uVar4 = uVar4 >> 8 | uVar4;
        uVar4 = (uVar4 >> 0x10 | uVar4) + 1;
        *(uint *)(unaff_RBX + 0x2bfc) = uVar4;
        lVar5 = Memory::realloc_static(pvVar7,(ulong)uVar4 * 8,false);
        *(long *)(unaff_RBX + 0x2c00) = lVar5;
        if (lVar5 == 0) {
          LocalVector<RendererSceneRenderImplementation::RenderForwardMobile::SceneState::ShadowPass,unsigned_int,false,false>
          ::resize((uint)pvVar7);
          goto LAB_00109280;
        }
        uVar8 = (ulong)*(uint *)(unaff_RBX + 0x2bf8);
        if (uVar1 <= *(uint *)(unaff_RBX + 0x2bf8)) goto LAB_00108b5b;
      }
      memset((void *)(*(long *)(unaff_RBX + 0x2c00) + uVar8 * 8),0,
             (ulong)(in_stack_00000110 - (int)uVar8) * 8 + 8);
    }
LAB_00108b5b:
    *(uint *)(unaff_RBX + 0x2bf8) = uVar1;
    uVar8 = (ulong)uVar1;
  }
LAB_0010890f:
  if (in_stack_00000110 < (uint)uVar8) {
    if (*(long *)(*(long *)(unaff_RBX + 0x2c00) + in_stack_00000030 * 8) != 0) {
      uVar6 = RenderingDevice::get_singleton();
      uVar8 = (ulong)*(uint *)(unaff_RBX + 0x2bf8);
      if (*(uint *)(unaff_RBX + 0x2bf8) <= in_stack_00000110) goto LAB_00108bd0;
      cVar3 = RenderingDevice::uniform_set_is_valid
                        (uVar6,*(undefined8 *)
                                (*(long *)(unaff_RBX + 0x2c00) + in_stack_00000030 * 8));
      if (cVar3 != '\0') {
        uVar6 = RenderingDevice::get_singleton();
        uVar8 = (ulong)*(uint *)(unaff_RBX + 0x2bf8);
        if (*(uint *)(unaff_RBX + 0x2bf8) <= in_stack_00000110) goto LAB_00108bd0;
        RenderingDevice::free
                  (uVar6,*(undefined8 *)(*(long *)(unaff_RBX + 0x2c00) + in_stack_00000030 * 8));
      }
    }
    uVar6 = RenderingDevice::get_singleton();
    uVar6 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>(uVar6);
    uVar8 = (ulong)*(uint *)(unaff_RBX + 0x2bf8);
    if (in_stack_00000110 < *(uint *)(unaff_RBX + 0x2bf8)) {
      *(undefined8 *)(in_stack_00000050 + *(long *)(unaff_RBX + 0x2c00)) = uVar6;
      CowData<RenderingDevice::Uniform>::_unref
                ((CowData<RenderingDevice::Uniform> *)&stack0x00000068);
      if (((in_stack_00000018 != (Object *)0x0) &&
          (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(in_stack_00000018), cVar3 != '\0')) {
        (**(code **)(*(long *)in_stack_00000018 + 0x140))(in_stack_00000018);
        Memory::free_static(in_stack_00000018,false);
      }
      if (((in_stack_00000028 != (Object *)0x0) &&
          (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(in_stack_00000028), cVar3 != '\0')) {
        (**(code **)(*(long *)in_stack_00000028 + 0x140))(in_stack_00000028);
        Memory::free_static(in_stack_00000028,false);
      }
      if (in_stack_000000c8 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar6;
      }
LAB_00109280:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
LAB_00108bd0:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,in_stack_00000030,uVar8,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



undefined8 FUN_001088b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_RBX;
  void *pvVar7;
  ulong uVar8;
  int unaff_R13D;
  long in_FS_OFFSET;
  Object *in_stack_00000018;
  Vector *in_stack_00000020;
  Object *in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000050;
  undefined8 uStack00000000000000a0;
  undefined1 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000c0;
  long in_stack_000000c8;
  uint in_stack_00000110;
  
  uStack00000000000000a8 = 0;
  uStack00000000000000a0 = _LC182;
  uStack00000000000000c0 = 0;
  uStack00000000000000b0 = param_3;
  Vector<RenderingDevice::Uniform>::push_back();
  RendererRD::MaterialStorage::Samplers::append_uniforms<Vector<RenderingDevice::Uniform>>
            (in_stack_00000020,unaff_R13D);
  uVar4 = *(uint *)(unaff_RBX + 0x2bf8);
  uVar8 = (ulong)uVar4;
  if ((int)uVar4 <= (int)in_stack_00000110) {
    uVar1 = in_stack_00000110 + 1;
    if (uVar4 <= uVar1) {
      if (uVar1 <= uVar4) goto LAB_0010890f;
      if (*(uint *)(unaff_RBX + 0x2bfc) < uVar1) {
        pvVar7 = *(void **)(unaff_RBX + 0x2c00);
        uVar4 = in_stack_00000110 >> 1 | in_stack_00000110;
        uVar4 = uVar4 | uVar4 >> 2;
        uVar4 = uVar4 | uVar4 >> 4;
        uVar4 = uVar4 >> 8 | uVar4;
        uVar4 = (uVar4 >> 0x10 | uVar4) + 1;
        *(uint *)(unaff_RBX + 0x2bfc) = uVar4;
        lVar6 = Memory::realloc_static(pvVar7,(ulong)uVar4 * 8,false);
        *(long *)(unaff_RBX + 0x2c00) = lVar6;
        if (lVar6 == 0) {
          LocalVector<RendererSceneRenderImplementation::RenderForwardMobile::SceneState::ShadowPass,unsigned_int,false,false>
          ::resize((uint)pvVar7);
          goto LAB_00109280;
        }
        uVar8 = (ulong)*(uint *)(unaff_RBX + 0x2bf8);
        if (uVar1 <= *(uint *)(unaff_RBX + 0x2bf8)) goto LAB_00108b5b;
      }
      memset((void *)(*(long *)(unaff_RBX + 0x2c00) + uVar8 * 8),0,
             (ulong)(in_stack_00000110 - (int)uVar8) * 8 + 8);
    }
LAB_00108b5b:
    *(uint *)(unaff_RBX + 0x2bf8) = uVar1;
    uVar8 = (ulong)uVar1;
  }
LAB_0010890f:
  if (in_stack_00000110 < (uint)uVar8) {
    if (*(long *)(*(long *)(unaff_RBX + 0x2c00) + in_stack_00000030 * 8) != 0) {
      uVar5 = RenderingDevice::get_singleton();
      uVar8 = (ulong)*(uint *)(unaff_RBX + 0x2bf8);
      if (*(uint *)(unaff_RBX + 0x2bf8) <= in_stack_00000110) goto LAB_00108bd0;
      cVar3 = RenderingDevice::uniform_set_is_valid
                        (uVar5,*(undefined8 *)
                                (*(long *)(unaff_RBX + 0x2c00) + in_stack_00000030 * 8));
      if (cVar3 != '\0') {
        uVar5 = RenderingDevice::get_singleton();
        uVar8 = (ulong)*(uint *)(unaff_RBX + 0x2bf8);
        if (*(uint *)(unaff_RBX + 0x2bf8) <= in_stack_00000110) goto LAB_00108bd0;
        RenderingDevice::free
                  (uVar5,*(undefined8 *)(*(long *)(unaff_RBX + 0x2c00) + in_stack_00000030 * 8));
      }
    }
    uVar5 = RenderingDevice::get_singleton();
    uVar5 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>(uVar5);
    uVar8 = (ulong)*(uint *)(unaff_RBX + 0x2bf8);
    if (in_stack_00000110 < *(uint *)(unaff_RBX + 0x2bf8)) {
      *(undefined8 *)(in_stack_00000050 + *(long *)(unaff_RBX + 0x2c00)) = uVar5;
      CowData<RenderingDevice::Uniform>::_unref
                ((CowData<RenderingDevice::Uniform> *)&stack0x00000068);
      if (((in_stack_00000018 != (Object *)0x0) &&
          (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(in_stack_00000018), cVar3 != '\0')) {
        (**(code **)(*(long *)in_stack_00000018 + 0x140))(in_stack_00000018);
        Memory::free_static(in_stack_00000018,false);
      }
      if (((in_stack_00000028 != (Object *)0x0) &&
          (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(in_stack_00000028), cVar3 != '\0')) {
        (**(code **)(*(long *)in_stack_00000028 + 0x140))(in_stack_00000028);
        Memory::free_static(in_stack_00000028,false);
      }
      if (in_stack_000000c8 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar5;
      }
LAB_00109280:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
LAB_00108bd0:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,in_stack_00000030,uVar8,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



void switchD_00108899::caseD_0(undefined8 param_1,undefined8 param_2)

{
  long in_stack_00000020;
  
  FUN_001088b0(param_1,param_2,*(undefined8 *)(in_stack_00000020 + 0x28));
  return;
}



void switchD_0010875e::caseD_0(undefined8 param_1,undefined8 param_2)

{
  long in_stack_00000020;
  
  FUN_00108840(param_1,param_2,*(undefined8 *)(in_stack_00000020 + 0x28));
  return;
}



/* RendererSceneRenderImplementation::RenderForwardMobile::_render_shadow_process() */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::_render_shadow_process
          (RenderForwardMobile *this)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (*(int *)(this + 0x2ee8) != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(long *)(this + 0x2ef0);
      lVar2 = RendererRD::MaterialStorage::get_singleton();
      lVar5 = lVar4 + 1;
      uVar3 = _setup_render_pass_uniform_set(this,2,0,0,lVar2 + 8,0,lVar4);
      *(undefined8 *)(lVar4 * 0x40 + lVar1 + 0x10) = uVar3;
      lVar4 = lVar5;
    } while ((uint)lVar5 < *(uint *)(this + 0x2ee8));
  }
  RenderingDevice::get_singleton();
  RenderingDevice::draw_command_end_label();
  return;
}



/* RendererSceneRenderImplementation::RenderForwardMobile::_geometry_instance_update(RenderGeometryInstance*)
    */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::_geometry_instance_update
          (RenderForwardMobile *this,RenderGeometryInstance *param_1)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  Particles *pPVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  ulong *puVar17;
  long in_R9;
  long *plVar18;
  undefined8 in_R10;
  RenderGeometryInstance RVar19;
  int iVar20;
  long *plVar21;
  ulong uVar22;
  uint uVar23;
  ulong unaff_R15;
  long in_FS_OFFSET;
  uint local_a0;
  Vector<RenderingDevice::Uniform> local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  ulong local_58;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar7 = (long *)RendererRD::MeshStorage::get_singleton();
  pPVar8 = (Particles *)RendererRD::ParticlesStorage::get_singleton();
  puVar17 = *(ulong **)(param_1 + 0xa8);
  if (*(char *)((long)puVar17 + 0x53) != '\0') {
    *(int *)(puVar17 + 0xe) = (int)puVar17[0xe] + 1;
  }
  iVar6 = (int)puVar17[1];
  if (iVar6 == 2) {
    uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*puVar17);
    if (uVar9 != 0) {
      if ((uint)uVar9 < *(uint *)((long)plVar7 + 0xcc)) {
        unaff_R15 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(plVar7 + 0x19)) * 0xe0 +
                    *(long *)(plVar7[0x17] +
                             ((uVar9 & 0xffffffff) / (ulong)*(uint *)(plVar7 + 0x19)) * 8);
        if (*(int *)(unaff_R15 + 0xd8) != (int)(uVar9 >> 0x20)) {
          if (*(int *)(unaff_R15 + 0xd8) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_0010a56f;
        }
        uVar2 = *(uint *)(unaff_R15 + 0x10);
        if (uVar2 != 0) {
          puVar12 = *(undefined8 **)(unaff_R15 + 0x60);
          if (puVar12 == (undefined8 *)0x0) {
            CowData<RID>::resize<false>((CowData<RID> *)(unaff_R15 + 0x60),(ulong)uVar2);
            puVar12 = *(undefined8 **)(unaff_R15 + 0x60);
            uVar14 = 0;
            do {
              in_R9 = uVar14 * 8;
              lVar15 = *(long *)(*(long *)(unaff_R15 + 8) + uVar14 * 8);
              if (puVar12 == (undefined8 *)0x0) {
                lVar13 = 0;
                goto LAB_00109e0d;
              }
              lVar13 = puVar12[-1];
              if (lVar13 <= (long)uVar14) goto LAB_00109e0d;
              uVar22 = uVar14 + 1;
              CowData<RID>::_copy_on_write((CowData<RID> *)(unaff_R15 + 0x60));
              puVar12 = *(undefined8 **)(unaff_R15 + 0x60);
              puVar12[uVar14] = *(undefined8 *)(lVar15 + 0x120);
              uVar14 = uVar22;
            } while (uVar22 != uVar2);
            if (puVar12 == (undefined8 *)0x0) goto LAB_00109b5e;
          }
          uVar14 = 0;
          do {
            uVar11 = *puVar12;
            uVar23 = (int)uVar14 + 1;
            unaff_R15 = (ulong)uVar23;
            puVar12 = puVar12 + 1;
            _geometry_instance_add_surface(this,param_1,uVar14,uVar11,uVar9);
            uVar14 = unaff_R15;
          } while (uVar23 != uVar2);
        }
      }
      else {
LAB_0010a56f:
        in_R9 = 0;
        _err_print_error("mesh_get_surface_count_and_materials",
                         "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x195,
                         "Parameter \"mesh\" is null.",0);
      }
LAB_00109b5e:
      uVar9 = **(ulong **)(param_1 + 0xa8);
      if ((uVar9 == 0) || (*(uint *)((long)plVar7 + 0x19c) <= (uint)uVar9)) {
LAB_0011de7c:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar15 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(plVar7 + 0x33)) * 0x160 +
               *(long *)(plVar7[0x31] + ((uVar9 & 0xffffffff) / (ulong)*(uint *)(plVar7 + 0x33)) * 8
                        );
      if (*(int *)(lVar15 + 0x158) != (int)(uVar9 >> 0x20)) {
        if (*(int *)(lVar15 + 0x158) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0,in_R9);
        }
        goto LAB_0011de7c;
      }
      iVar6 = *(int *)(lVar15 + 0x14);
      if (iVar6 < 0) {
        iVar6 = *(int *)(lVar15 + 8);
      }
      *(int *)(param_1 + 0xbc) = iVar6;
    }
LAB_001095c2:
    puVar17 = *(ulong **)(param_1 + 0xa8);
    iVar6 = (int)puVar17[1];
    *(undefined4 *)(param_1 + 8) = 0;
    if (iVar6 == 2) {
LAB_001095dd:
      uVar9 = *puVar17;
      *(undefined4 *)(param_1 + 8) = 0x1000;
      if ((uVar9 == 0) || (*(uint *)((long)plVar7 + 0x19c) <= (uint)uVar9)) {
LAB_0011df10:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar15 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(plVar7 + 0x33)) * 0x160 +
               *(long *)(plVar7[0x31] + ((uVar9 & 0xffffffff) / (ulong)*(uint *)(plVar7 + 0x33)) * 8
                        );
      iVar6 = *(int *)(lVar15 + 0x158);
      if (iVar6 != (int)(uVar9 >> 0x20)) {
        if (iVar6 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0,unaff_R15);
        }
        goto LAB_0011df10;
      }
      if (*(int *)(lVar15 + 0xc) == 0) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x2000;
      }
      uVar9 = **(ulong **)(param_1 + 0xa8);
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (*(uint *)((long)plVar7 + 0x19c) <= (uint)uVar9) {
LAB_0011de93:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar15 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(plVar7 + 0x33)) * 0x160 +
               *(long *)(plVar7[0x31] + ((uVar9 & 0xffffffff) / (ulong)*(uint *)(plVar7 + 0x33)) * 8
                        );
      iVar6 = *(int *)(lVar15 + 0x158);
      if (iVar6 != (int)(uVar9 >> 0x20)) {
        if (iVar6 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0,pPVar8);
        }
        goto LAB_0011de93;
      }
      if (*(char *)(lVar15 + 0x10) != '\0') {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x4000;
      }
      uVar9 = **(ulong **)(param_1 + 0xa8);
      if ((uVar9 == 0) || (*(uint *)((long)plVar7 + 0x19c) <= (uint)uVar9)) {
LAB_0011de64:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar15 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(plVar7 + 0x33)) * 0x160 +
               *(long *)(plVar7[0x31] + ((uVar9 & 0xffffffff) / (ulong)*(uint *)(plVar7 + 0x33)) * 8
                        );
      iVar6 = *(int *)(lVar15 + 0x158);
      if (iVar6 != (int)(uVar9 >> 0x20)) {
        if (iVar6 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0,in_R10);
        }
        goto LAB_0011de64;
      }
      if (*(char *)(lVar15 + 0x11) != '\0') {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x8000;
      }
      uVar9 = **(ulong **)(param_1 + 0xa8);
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (*(uint *)((long)plVar7 + 0x19c) <= (uint)uVar9) {
LAB_0011de48:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar14 = (uVar9 & 0xffffffff) % (ulong)*(uint *)(plVar7 + 0x33);
      lVar15 = uVar14 * 0x160 +
               *(long *)(plVar7[0x31] + ((uVar9 & 0xffffffff) / (ulong)*(uint *)(plVar7 + 0x33)) * 8
                        );
      iVar6 = *(int *)(lVar15 + 0x158);
      if (iVar6 != (int)(uVar9 >> 0x20)) {
        if (iVar6 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0,uVar14 * 5);
        }
        goto LAB_0011de48;
      }
      if (*(char *)(lVar15 + 0x4a) != '\0') {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
      }
      puVar17 = *(ulong **)(param_1 + 0xa8);
      uVar9 = *puVar17;
      uVar11 = *(undefined8 *)(this + 0x2b70);
      if (uVar9 != 0) {
        if ((uint)uVar9 < *(uint *)((long)plVar7 + 0x19c)) {
          lVar15 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(plVar7 + 0x33)) * 0x160 +
                   *(long *)(plVar7[0x31] +
                            ((uVar9 & 0xffffffff) / (ulong)*(uint *)(plVar7 + 0x33)) * 8);
          if (*(int *)(lVar15 + 0x158) == (int)(uVar9 >> 0x20)) {
            uVar9 = *(ulong *)(lVar15 + 0xa8);
            if ((uVar9 == 0) && (uVar9 = *(ulong *)(lVar15 + 0xa0), uVar9 != 0)) {
              local_60 = 0;
              local_70 = 0;
              local_68 = 8;
              local_48 = 0;
              local_58 = uVar9;
              Vector<RenderingDevice::Uniform>::push_back(local_78,&local_68);
              uVar10 = RenderingDevice::get_singleton();
              uVar11 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                                 (uVar10,local_78,uVar11,2,0);
              *(undefined8 *)(lVar15 + 0xa8) = uVar11;
              CowData<RenderingDevice::Uniform>::_unref
                        ((CowData<RenderingDevice::Uniform> *)&local_70);
              uVar9 = *(ulong *)(lVar15 + 0xa8);
            }
            puVar17 = *(ulong **)(param_1 + 0xa8);
          }
          else {
            if (0x7ffffffe < *(int *)(lVar15 + 0x158) + 0x80000000U) goto LAB_0010a0e4;
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
            puVar17 = *(ulong **)(param_1 + 0xa8);
            uVar9 = 0;
          }
        }
        else {
LAB_0010a0e4:
          puVar17 = *(ulong **)(param_1 + 0xa8);
          uVar9 = 0;
        }
      }
      *(ulong *)(param_1 + 0xb0) = uVar9;
      cVar5 = *(char *)((long)puVar17 + 0x53);
      RVar19 = (RenderGeometryInstance)0x1;
    }
    else {
LAB_00109918:
      if (iVar6 != 3) {
        if (iVar6 != 1) goto LAB_00109384;
        uVar9 = puVar17[2];
        if (uVar9 != 0) {
          if ((uint)uVar9 < *(uint *)((long)plVar7 + 0x3a4)) {
            iVar6 = *(int *)(*(long *)(plVar7[0x72] +
                                      ((uVar9 & 0xffffffff) / (ulong)*(uint *)(plVar7 + 0x74)) * 8)
                             + ((uVar9 & 0xffffffff) % (ulong)*(uint *)(plVar7 + 0x74)) * 0x98 +
                            0x90);
            if (iVar6 == (int)(uVar9 >> 0x20)) {
              uVar9 = *(ulong *)(*(long *)(param_1 + 0xa8) + 0x10);
              uVar11 = *(undefined8 *)(this + 0x2b70);
              if ((uVar9 == 0) || (*(uint *)((long)plVar7 + 0x3a4) <= (uint)uVar9)) {
LAB_0010a08d:
                _err_print_error("skeleton_get_3d_uniform_set",
                                 "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x30c,
                                 "Parameter \"skeleton\" is null.",0,0);
LAB_00109ca6:
                lVar15 = 0;
              }
              else {
                pcVar1 = (char *)(*(long *)(plVar7[0x72] +
                                           ((uVar9 & 0xffffffff) / (ulong)*(uint *)(plVar7 + 0x74))
                                           * 8) +
                                 ((uVar9 & 0xffffffff) % (ulong)*(uint *)(plVar7 + 0x74)) * 0x98);
                if (*(int *)(pcVar1 + 0x90) != (int)(uVar9 >> 0x20)) {
                  if (*(int *)(pcVar1 + 0x90) + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                  goto LAB_0010a08d;
                }
                if ((*(int *)(pcVar1 + 4) == 0) || (*pcVar1 != '\0')) goto LAB_00109ca6;
                lVar15 = *(long *)(pcVar1 + 0x48);
                if (lVar15 == 0) {
                  local_58 = *(ulong *)(pcVar1 + 0x18);
                  local_70 = 0;
                  local_60 = 0;
                  local_68 = 8;
                  local_48 = 0;
                  Vector<RenderingDevice::Uniform>::push_back(local_78,&local_68);
                  uVar10 = RenderingDevice::get_singleton();
                  uVar11 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                                     (uVar10,local_78,uVar11,2,0);
                  *(undefined8 *)(pcVar1 + 0x48) = uVar11;
                  CowData<RenderingDevice::Uniform>::_unref
                            ((CowData<RenderingDevice::Uniform> *)&local_70);
                  lVar15 = *(long *)(pcVar1 + 0x48);
                }
              }
              *(long *)(param_1 + 0xb0) = lVar15;
              lVar15 = *(long *)(param_1 + 0xa8);
              RVar19 = *(RenderGeometryInstance *)(lVar15 + 0x53);
              if (RVar19 == (RenderGeometryInstance)0x0) {
                param_1[0xba] = (RenderGeometryInstance)0x1;
                goto LAB_001093ad;
              }
              (**(code **)(*plVar7 + 0x300))(plVar7,*(undefined8 *)(lVar15 + 0x10),lVar15 + 0x58);
              puVar17 = *(ulong **)(param_1 + 0xa8);
              cVar5 = *(char *)((long)puVar17 + 0x53);
              goto LAB_0010938e;
            }
            if (iVar6 + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
              puVar17 = *(ulong **)(param_1 + 0xa8);
              goto LAB_00109ef6;
            }
          }
          puVar17 = *(ulong **)(param_1 + 0xa8);
        }
LAB_00109ef6:
        *(undefined8 *)(param_1 + 0xb0) = 0;
        goto LAB_00109384;
      }
      uVar9 = *puVar17;
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 0xc0) << 0x10 | 0xd000;
      if ((uVar9 == 0) || (*(uint *)(pPVar8 + 0x91c) <= (uint)uVar9)) {
LAB_0010a258:
        RVar19 = (RenderGeometryInstance)0x0;
        _err_print_error("particles_is_using_local_coords",
                         "./servers/rendering/renderer_rd/storage_rd/particles_storage.h",0x20e,
                         "Parameter \"particles\" is null.",0,0);
      }
      else {
        lVar15 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(pPVar8 + 0x918)) * 0x2f8 +
                 *(long *)(*(long *)(pPVar8 + 0x908) +
                          ((uVar9 & 0xffffffff) / (ulong)*(uint *)(pPVar8 + 0x918)) * 8);
        iVar6 = *(int *)(lVar15 + 0x2f0);
        if (iVar6 != (int)(uVar9 >> 0x20)) {
          if (iVar6 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_0010a258;
        }
        RVar19 = *(RenderGeometryInstance *)(lVar15 + 0x50);
      }
      uVar9 = **(ulong **)(param_1 + 0xa8);
      uVar11 = *(undefined8 *)(this + 0x2b70);
      if ((uVar9 == 0) || (*(uint *)(pPVar8 + 0x91c) <= (uint)uVar9)) {
LAB_0010a2d0:
        _err_print_error("particles_get_instance_buffer_uniform_set",
                         "./servers/rendering/renderer_rd/storage_rd/particles_storage.h",0x215,
                         "Parameter \"particles\" is null.",0,0);
        uVar11 = 0;
      }
      else {
        lVar15 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(pPVar8 + 0x918)) * 0x2f8 +
                 *(long *)(*(long *)(pPVar8 + 0x908) +
                          ((uVar9 & 0xffffffff) / (ulong)*(uint *)(pPVar8 + 0x918)) * 8);
        if (*(int *)(lVar15 + 0x2f0) != (int)(uVar9 >> 0x20)) {
          if (*(int *)(lVar15 + 0x2f0) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_0010a2d0;
        }
        if (*(long *)(lVar15 + 0x108) == 0) {
LAB_00109cd8:
          RendererRD::ParticlesStorage::_particles_update_buffers(pPVar8);
          local_58 = *(ulong *)(lVar15 + 0xe0);
          local_70 = 0;
          local_68 = 8;
          local_60 = 0;
          local_48 = 0;
          Vector<RenderingDevice::Uniform>::push_back(local_78,&local_68);
          uVar10 = RenderingDevice::get_singleton();
          uVar11 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                             (uVar10,local_78,uVar11,2,0);
          *(undefined8 *)(lVar15 + 0x108) = uVar11;
          CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_70);
        }
        else {
          uVar10 = RenderingDevice::get_singleton();
          cVar5 = RenderingDevice::uniform_set_is_valid(uVar10,*(undefined8 *)(lVar15 + 0x108));
          if (cVar5 == '\0') goto LAB_00109cd8;
        }
        uVar11 = *(undefined8 *)(lVar15 + 0x108);
      }
      *(undefined8 *)(param_1 + 0xb0) = uVar11;
      uVar9 = **(ulong **)(param_1 + 0xa8);
      if ((uVar9 == 0) || (*(uint *)(pPVar8 + 0x91c) <= (uint)uVar9)) {
LAB_0010a340:
        _err_print_error("particles_get_frame_counter",
                         "./servers/rendering/renderer_rd/storage_rd/particles_storage.h",500,
                         "Parameter \"particles\" is null.",0,0);
LAB_00109a7c:
        (**(code **)(*(long *)pPVar8 + 0x178))(pPVar8);
      }
      else {
        lVar15 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(pPVar8 + 0x918)) * 0x2f8 +
                 *(long *)(*(long *)(pPVar8 + 0x908) +
                          ((uVar9 & 0xffffffff) / (ulong)*(uint *)(pPVar8 + 0x918)) * 8);
        iVar6 = *(int *)(lVar15 + 0x2f0);
        if (iVar6 != (int)(uVar9 >> 0x20)) {
          if (iVar6 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_0010a340;
        }
        if (*(int *)(lVar15 + 0x90) == 0) goto LAB_00109a7c;
      }
      puVar12 = *(undefined8 **)(param_1 + 0xa8);
      if (*(char *)((long)puVar12 + 0x53) == '\0') {
        param_1[0xba] = RVar19;
        goto LAB_001093ad;
      }
      RendererRD::ParticlesStorage::particles_update_dependency(pPVar8,*puVar12,puVar12 + 0xb);
      puVar17 = *(ulong **)(param_1 + 0xa8);
      cVar5 = *(char *)((long)puVar17 + 0x53);
    }
  }
  else {
    if (iVar6 == 3) {
      iVar20 = 0;
      iVar6 = (**(code **)(*(long *)pPVar8 + 0x150))(pPVar8,*puVar17);
      if (0 < iVar6) {
        do {
          while( true ) {
            uVar9 = (**(code **)(*(long *)pPVar8 + 0x158))
                              (pPVar8,**(undefined8 **)(param_1 + 0xa8),iVar20);
            if (uVar9 == 0) goto LAB_00109520;
            if ((uint)uVar9 < *(uint *)((long)plVar7 + 0xcc)) break;
LAB_00109e40:
            iVar20 = iVar20 + 1;
            _err_print_error("mesh_get_surface_count_and_materials",
                             "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x195,
                             "Parameter \"mesh\" is null.",0);
            if (iVar6 == iVar20) goto LAB_0010952f;
          }
          lVar15 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(plVar7 + 0x19)) * 0xe0 +
                   *(long *)(plVar7[0x17] +
                            ((uVar9 & 0xffffffff) / (ulong)*(uint *)(plVar7 + 0x19)) * 8);
          if (*(int *)(lVar15 + 0xd8) != (int)(uVar9 >> 0x20)) {
            if (*(int *)(lVar15 + 0xd8) + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
            goto LAB_00109e40;
          }
          uVar2 = *(uint *)(lVar15 + 0x10);
          if (uVar2 != 0) {
            puVar12 = *(undefined8 **)(lVar15 + 0x60);
            if (puVar12 == (undefined8 *)0x0) {
              CowData<RID>::resize<false>((CowData<RID> *)(lVar15 + 0x60),(ulong)uVar2);
              puVar12 = *(undefined8 **)(lVar15 + 0x60);
              uVar14 = 0;
              do {
                unaff_R15 = uVar14 * 8;
                lVar3 = *(long *)(*(long *)(lVar15 + 8) + uVar14 * 8);
                if (puVar12 == (undefined8 *)0x0) {
                  lVar13 = 0;
                  goto LAB_00109e0d;
                }
                lVar13 = puVar12[-1];
                if (lVar13 <= (long)uVar14) goto LAB_00109e0d;
                CowData<RID>::_copy_on_write((CowData<RID> *)(lVar15 + 0x60));
                puVar12 = *(undefined8 **)(lVar15 + 0x60);
                uVar9 = uVar14 + 1;
                puVar12[uVar14] = *(undefined8 *)(lVar3 + 0x120);
                uVar14 = uVar9;
              } while (uVar9 != uVar2);
              if (puVar12 == (undefined8 *)0x0) goto LAB_00109520;
            }
            uVar9 = 0;
            do {
              uVar11 = *puVar12;
              uVar23 = (int)uVar9 + 1;
              unaff_R15 = (ulong)uVar23;
              puVar12 = puVar12 + 1;
              _geometry_instance_add_surface(this,param_1,uVar9,uVar11);
              uVar9 = unaff_R15;
            } while (uVar23 != uVar2);
          }
LAB_00109520:
          iVar20 = iVar20 + 1;
        } while (iVar6 != iVar20);
      }
LAB_0010952f:
      uVar9 = **(ulong **)(param_1 + 0xa8);
      if ((uVar9 == 0) || (*(uint *)(pPVar8 + 0x91c) <= (uint)uVar9)) {
LAB_0010a400:
        _err_print_error("particles_get_amount",
                         "./servers/rendering/renderer_rd/storage_rd/particles_storage.h",0x1fa,
                         "Parameter \"particles\" is null.",0,0);
        iVar6 = 0;
      }
      else {
        lVar15 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(pPVar8 + 0x918)) * 0x2f8 +
                 *(long *)(*(long *)(pPVar8 + 0x908) +
                          ((uVar9 & 0xffffffff) / (ulong)*(uint *)(pPVar8 + 0x918)) * 8);
        if (*(int *)(lVar15 + 0x2f0) != (int)(uVar9 >> 0x20)) {
          if (*(int *)(lVar15 + 0x2f0) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_0010a400;
        }
        if ((*(char *)(lVar15 + 0x2c8) == '\0') || (*(long *)(lVar15 + 0xb8) == 0)) {
          iVar6 = 1;
        }
        else {
          lVar13 = *(long *)(*(long *)(lVar15 + 0xb8) + -8);
          iVar6 = (int)lVar13;
          if (lVar13 < 2) {
            iVar6 = 1;
          }
        }
        *(int *)(param_1 + 0xc0) = iVar6;
        iVar6 = iVar6 * *(int *)(lVar15 + 0x14);
      }
      *(int *)(param_1 + 0xbc) = iVar6;
      goto LAB_001095c2;
    }
    if (iVar6 == 1) {
      uVar9 = *puVar17;
      if ((uVar9 == 0) || (*(uint *)((long)plVar7 + 0xcc) <= (uint)uVar9)) {
LAB_00109f60:
        _err_print_error("mesh_get_surface_count_and_materials",
                         "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x195,
                         "Parameter \"mesh\" is null.",0,0);
      }
      else {
        lVar15 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(plVar7 + 0x19)) * 0xe0 +
                 *(long *)(plVar7[0x17] +
                          ((uVar9 & 0xffffffff) / (ulong)*(uint *)(plVar7 + 0x19)) * 8);
        if (*(int *)(lVar15 + 0xd8) != (int)(uVar9 >> 0x20)) {
          if (*(int *)(lVar15 + 0xd8) + 0x80000000U < 0x7fffffff) {
            unaff_R15 = 0;
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_00109f60;
        }
        uVar2 = *(uint *)(lVar15 + 0x10);
        if (uVar2 != 0) {
          plVar18 = *(long **)(lVar15 + 0x60);
          if (plVar18 == (long *)0x0) {
            CowData<RID>::resize<false>((CowData<RID> *)(lVar15 + 0x60),(ulong)uVar2);
            plVar18 = *(long **)(lVar15 + 0x60);
            uVar14 = 0;
            do {
              unaff_R15 = uVar14 * 8;
              lVar3 = *(long *)(*(long *)(lVar15 + 8) + uVar14 * 8);
              if (plVar18 == (long *)0x0) {
                lVar13 = 0;
LAB_00109e0d:
                _err_print_index_error
                          ("operator[]","./core/templates/vector.h",0x38,uVar14,lVar13,"p_index",
                           "((Vector<T> *)(this))->_cowdata.size()","",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              lVar13 = plVar18[-1];
              if (lVar13 <= (long)uVar14) goto LAB_00109e0d;
              uVar22 = uVar14 + 1;
              CowData<RID>::_copy_on_write((CowData<RID> *)(lVar15 + 0x60));
              plVar18 = *(long **)(lVar15 + 0x60);
              plVar18[uVar14] = *(long *)(lVar3 + 0x120);
              uVar14 = uVar22;
            } while (uVar22 != uVar2);
            if (plVar18 == (long *)0x0) goto LAB_001098f2;
          }
          plVar21 = *(long **)(*(long *)(param_1 + 0xa8) + 0x20);
          if (plVar21 == (long *)0x0) {
            local_a0 = 0;
          }
          else {
            local_a0 = *(uint *)(plVar21 + -1);
          }
          uVar14 = 0;
          do {
            if ((local_a0 <= (uint)uVar14) || (plVar16 = plVar21, *plVar21 == 0)) {
              plVar16 = plVar18;
            }
            uVar23 = (uint)uVar14 + 1;
            unaff_R15 = (ulong)uVar23;
            plVar21 = plVar21 + 1;
            plVar18 = plVar18 + 1;
            _geometry_instance_add_surface(this,param_1,uVar14,*plVar16,uVar9);
            uVar14 = unaff_R15;
          } while (uVar23 != uVar2);
        }
      }
LAB_001098f2:
      puVar17 = *(ulong **)(param_1 + 0xa8);
      *(undefined4 *)(param_1 + 0xbc) = 1;
      iVar6 = (int)puVar17[1];
      *(undefined4 *)(param_1 + 8) = 0;
      if (iVar6 == 2) goto LAB_001095dd;
      goto LAB_00109918;
    }
    *(undefined4 *)(param_1 + 8) = 0;
LAB_00109384:
    cVar5 = *(char *)((long)puVar17 + 0x53);
    RVar19 = (RenderGeometryInstance)0x1;
  }
LAB_0010938e:
  param_1[0xba] = RVar19;
  if (cVar5 != '\0') {
    DependencyTracker::update_end((DependencyTracker *)(puVar17 + 0xb));
    *(undefined1 *)(*(long *)(param_1 + 0xa8) + 0x53) = 0;
  }
LAB_001093ad:
  plVar7 = *(long **)(param_1 + 0x188);
  if (plVar7 != (long *)0x0) {
    lVar15 = *(long *)(param_1 + 0x198);
    if (lVar15 != 0) {
      *(undefined8 *)(lVar15 + 0x18) = *(undefined8 *)(param_1 + 0x1a0);
    }
    lVar13 = *(long *)(param_1 + 0x1a0);
    if (lVar13 != 0) {
      *(long *)(lVar13 + 0x10) = lVar15;
    }
    if (param_1 + 0x188 == (RenderGeometryInstance *)*plVar7) {
      *plVar7 = *(long *)(param_1 + 0x198);
    }
    if (param_1 + 0x188 == (RenderGeometryInstance *)plVar7[1]) {
      plVar7[1] = lVar13;
    }
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined1 (*) [16])(param_1 + 0x198) = (undefined1  [16])0x0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Vector<RenderingDevice::FramebufferPass>::push_back(RenderingDevice::FramebufferPass) [clone
   .isra.0] */

void __thiscall
Vector<RenderingDevice::FramebufferPass>::push_back
          (Vector<RenderingDevice::FramebufferPass> *this,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<RenderingDevice::FramebufferPass>::resize<false>
                    ((CowData<RenderingDevice::FramebufferPass> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<RenderingDevice::FramebufferPass>::_copy_on_write
                  ((CowData<RenderingDevice::FramebufferPass> *)(this + 8));
        lVar2 = *(long *)(this + 8) + lVar3 * 0x48;
        if (*(long *)(lVar2 + 8) != *(long *)(param_2 + 8)) {
          CowData<int>::_ref((CowData<int> *)(lVar2 + 8),(CowData *)(param_2 + 8));
        }
        if (*(long *)(lVar2 + 0x18) != *(long *)(param_2 + 0x18)) {
          CowData<int>::_ref((CowData<int> *)(lVar2 + 0x18),(CowData *)(param_2 + 0x18));
        }
        if (*(long *)(lVar2 + 0x28) != *(long *)(param_2 + 0x28)) {
          CowData<int>::_ref((CowData<int> *)(lVar2 + 0x28),(CowData *)(param_2 + 0x28));
        }
        if (*(long *)(lVar2 + 0x38) != *(long *)(param_2 + 0x38)) {
          CowData<int>::_ref((CowData<int> *)(lVar2 + 0x38),(CowData *)(param_2 + 0x38));
        }
        *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(param_2 + 0x40);
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::get_color_fbs(RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::FramebufferConfigType)
    */

undefined8 __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::get_color_fbs
          (RenderBufferDataForwardMobile *this,int param_2)

{
  long *plVar1;
  uint uVar2;
  StringName *pSVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  long in_FS_OFFSET;
  int local_178;
  Vector<RID> local_158 [8];
  long local_150;
  Vector<RenderingDevice::FramebufferPass> local_148 [8];
  undefined8 local_140;
  Vector<int> local_138 [8];
  long local_130 [2];
  long local_120;
  Vector<int> local_118 [8];
  long local_110 [2];
  long local_100;
  undefined8 local_f8;
  Vector<int> local_e8 [8];
  long local_e0;
  Vector<int> local_d8 [8];
  long local_d0;
  Vector<int> local_c8 [8];
  long local_c0 [2];
  long local_b0;
  undefined8 local_a8;
  long local_90 [2];
  long local_80 [2];
  long local_70 [2];
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x180) == 0) {
    uVar8 = 0;
    _err_print_error("get_color_fbs",
                     "servers/rendering/renderer_rd/forward_mobile/render_forward_mobile.cpp",0xa9,
                     "Parameter \"render_buffers\" is null.",0,0);
    goto LAB_0010a942;
  }
  plVar7 = (long *)RendererRD::TextureStorage::get_singleton();
  if (plVar7 == (long *)0x0) {
    uVar8 = 0;
    _err_print_error("get_color_fbs",
                     "servers/rendering/renderer_rd/forward_mobile/render_forward_mobile.cpp",0xac,
                     "Parameter \"texture_storage\" is null.",0,0);
    goto LAB_0010a942;
  }
  pSVar3 = *(StringName **)(this + 0x180);
  uVar2 = *(uint *)(pSVar3 + 0x1a8);
  iVar5 = *(int *)(pSVar3 + 0x1c4);
  if (get_color_fbs(RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::FramebufferConfigType)
      ::{lambda()#2}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&get_color_fbs(RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::FramebufferConfigType)
                                 ::{lambda()#2}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&get_color_fbs(RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::FramebufferConfigType)
                           ::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &get_color_fbs(RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::FramebufferConfigType)
                    ::{lambda()#2}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&get_color_fbs(RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::FramebufferConfigType)
                           ::{lambda()#2}::operator()()::sname);
    }
  }
  if (get_color_fbs(RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::FramebufferConfigType)
      ::{lambda()#1}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&get_color_fbs(RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::FramebufferConfigType)
                                 ::{lambda()#1}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&get_color_fbs(RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::FramebufferConfigType)
                           ::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &get_color_fbs(RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::FramebufferConfigType)
                    ::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&get_color_fbs(RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::FramebufferConfigType)
                           ::{lambda()#1}::operator()()::sname);
    }
  }
  lVar10 = 0;
  cVar4 = RenderSceneBuffersRD::has_texture
                    (pSVar3,(StringName *)
                            &get_color_fbs(RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::FramebufferConfigType)
                             ::{lambda()#1}::operator()()::sname);
  if (cVar4 != '\0') {
    pSVar3 = *(StringName **)(this + 0x180);
    if (get_color_fbs(RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::FramebufferConfigType)
        ::{lambda()#4}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&get_color_fbs(RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::FramebufferConfigType)
                                   ::{lambda()#4}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&get_color_fbs(RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::FramebufferConfigType)
                             ::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &get_color_fbs(RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::FramebufferConfigType)
                      ::{lambda()#4}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&get_color_fbs(RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::FramebufferConfigType)
                             ::{lambda()#4}::operator()()::sname);
      }
    }
    if (get_color_fbs(RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::FramebufferConfigType)
        ::{lambda()#3}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&get_color_fbs(RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::FramebufferConfigType)
                                   ::{lambda()#3}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&get_color_fbs(RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::FramebufferConfigType)
                             ::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &get_color_fbs(RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::FramebufferConfigType)
                      ::{lambda()#3}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&get_color_fbs(RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::FramebufferConfigType)
                             ::{lambda()#3}::operator()()::sname);
      }
    }
    lVar10 = RenderSceneBuffersRD::get_texture
                       (pSVar3,(StringName *)
                               &get_color_fbs(RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::FramebufferConfigType)
                                ::{lambda()#3}::operator()()::sname);
  }
  local_150 = 0;
  pSVar3 = *(StringName **)(this + 0x180);
  if (iVar5 == 0) {
    if (const::{lambda()#2}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&const::{lambda()#2}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&const::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&const::{lambda()#2}::operator()()::sname,&__dso_handle
                    );
        __cxa_guard_release(&const::{lambda()#2}::operator()()::sname);
      }
    }
    if (const::{lambda()#1}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,&__dso_handle
                    );
        __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
      }
    }
    uVar8 = RenderSceneBuffersRD::get_texture
                      (pSVar3,(StringName *)&const::{lambda()#1}::operator()()::sname);
    Vector<RID>::push_back(local_158,uVar8);
    RenderSceneBuffersRD::get_depth_texture();
    Vector<RID>::push_back(local_158);
    if (lVar10 != 0) {
      Vector<RID>::push_back(local_158);
    }
    local_178 = 0;
    if (param_2 == 0) goto LAB_0010a9f3;
LAB_0010a902:
    local_140 = 0;
    if (param_2 == 1) {
      local_50 = *(undefined8 *)(*(long *)(this + 0x180) + 0x1a0);
      local_48 = *(undefined8 *)(*(long *)(this + 0x180) + 0x1ac);
      cVar4 = Vector2i::operator!=((Vector2i *)&local_50,(Vector2i *)&local_48);
      if (cVar4 == '\0') {
        local_130[0] = 0;
        local_120 = 0;
        local_110[0] = 0;
        local_100 = 0;
        local_f8 = _LC72;
        Vector<int>::push_back(local_138,0);
        local_f8 = CONCAT44(local_f8._4_4_,1);
        if (lVar10 != 0) {
          local_f8 = 0x200000001;
        }
        uVar11 = 1;
        if (iVar5 != 0) {
          Vector<int>::push_back(local_118,local_178);
          uVar11 = (undefined4)local_f8;
        }
        local_90[0] = 0;
        if (local_130[0] != 0) {
          CowData<int>::_ref((CowData<int> *)local_90,(CowData *)local_130);
        }
        local_80[0] = 0;
        if (local_120 != 0) {
          CowData<int>::_ref((CowData<int> *)local_80,(CowData *)&local_120);
        }
        local_70[0] = 0;
        if (local_110[0] != 0) {
          CowData<int>::_ref((CowData<int> *)local_70,(CowData *)local_110);
        }
        local_60 = 0;
        if (local_100 == 0) {
          local_58 = CONCAT44(local_f8._4_4_,uVar11);
          Vector<RenderingDevice::FramebufferPass>::push_back(local_148);
        }
        else {
          CowData<int>::_ref((CowData<int> *)&local_60,(CowData *)&local_100);
          lVar10 = local_60;
          local_58 = CONCAT44(local_f8._4_4_,uVar11);
          Vector<RenderingDevice::FramebufferPass>::push_back(local_148);
          if (lVar10 != 0) {
            LOCK();
            plVar1 = (long *)(lVar10 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_60 + -0x10),false);
            }
          }
        }
        if (local_70[0] != 0) {
          LOCK();
          plVar1 = (long *)(local_70[0] + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_70[0] + -0x10),false);
          }
        }
        if (local_80[0] != 0) {
          LOCK();
          plVar1 = (long *)(local_80[0] + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_80[0] + -0x10),false);
          }
        }
        if (local_90[0] != 0) {
          LOCK();
          plVar1 = (long *)(local_90[0] + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_90[0] + -0x10),false);
          }
        }
        lVar10 = *(long *)(*(long *)(this + 0x180) + 0x198);
        if (lVar10 == 0) {
          _err_print_error("get_color_fbs",
                           "servers/rendering/renderer_rd/forward_mobile/render_forward_mobile.cpp",
                           0xf7,"Condition \"render_target.is_null()\" is true. Returning: RID()",0,
                           0);
          uVar8 = 0;
        }
        else {
          if (uVar2 < 2) {
            iVar5 = (**(code **)(*plVar7 + 0x250))(plVar7,lVar10);
            if (iVar5 == 0) goto LAB_0010af0f;
            lVar9 = RendererRD::TextureStorage::render_target_get_rd_texture_msaa(plVar7,lVar10);
            (**(code **)(*plVar7 + 600))(plVar7,lVar10,1);
          }
          else {
LAB_0010af0f:
            lVar9 = RendererRD::TextureStorage::render_target_get_rd_texture(plVar7,lVar10);
          }
          if (lVar9 == 0) {
            uVar8 = 0;
            _err_print_error("get_color_fbs",
                             "servers/rendering/renderer_rd/forward_mobile/render_forward_mobile.cpp"
                             ,0xff,"Condition \"target_buffer.is_null()\" is true. Returning: RID()"
                             ,0,0);
          }
          else {
            if (local_150 == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *(int *)(local_150 + -8);
            }
            Vector<RID>::push_back(local_158,lVar9);
            local_e0 = 0;
            local_a8 = _LC72;
            local_d0 = 0;
            local_c0[0] = 0;
            local_b0 = 0;
            Vector<int>::push_back(local_d8,local_178);
            Vector<int>::push_back(local_e8,iVar5);
            local_90[0] = 0;
            if (local_e0 != 0) {
              CowData<int>::_ref((CowData<int> *)local_90,(CowData *)&local_e0);
            }
            local_80[0] = 0;
            if (local_d0 != 0) {
              CowData<int>::_ref((CowData<int> *)local_80,(CowData *)&local_d0);
            }
            local_70[0] = 0;
            if (local_c0[0] != 0) {
              CowData<int>::_ref((CowData<int> *)local_70,(CowData *)local_c0);
            }
            local_60 = 0;
            if (local_b0 == 0) {
              local_58 = local_a8;
              Vector<RenderingDevice::FramebufferPass>::push_back(local_148);
            }
            else {
              CowData<int>::_ref((CowData<int> *)&local_60,(CowData *)&local_b0);
              lVar10 = local_60;
              local_58 = local_a8;
              Vector<RenderingDevice::FramebufferPass>::push_back(local_148);
              if (lVar10 != 0) {
                LOCK();
                plVar7 = (long *)(lVar10 + -0x10);
                *plVar7 = *plVar7 + -1;
                UNLOCK();
                if (*plVar7 == 0) {
                  Memory::free_static((void *)(local_60 + -0x10),false);
                }
              }
            }
            if (local_70[0] != 0) {
              LOCK();
              plVar7 = (long *)(local_70[0] + -0x10);
              *plVar7 = *plVar7 + -1;
              UNLOCK();
              if (*plVar7 == 0) {
                Memory::free_static((void *)(local_70[0] + -0x10),false);
              }
            }
            if (local_80[0] != 0) {
              LOCK();
              plVar7 = (long *)(local_80[0] + -0x10);
              *plVar7 = *plVar7 + -1;
              UNLOCK();
              if (*plVar7 == 0) {
                Memory::free_static((void *)(local_80[0] + -0x10),false);
              }
            }
            if (local_90[0] != 0) {
              LOCK();
              plVar7 = (long *)(local_90[0] + -0x10);
              *plVar7 = *plVar7 + -1;
              UNLOCK();
              if (*plVar7 == 0) {
                Memory::free_static((void *)(local_90[0] + -0x10),false);
              }
            }
            uVar8 = FramebufferCacheRD::get_cache_multipass
                              (FramebufferCacheRD::singleton,(Vector *)local_158,(Vector *)local_148
                               ,uVar2);
            if (local_b0 != 0) {
              LOCK();
              plVar7 = (long *)(local_b0 + -0x10);
              *plVar7 = *plVar7 + -1;
              UNLOCK();
              if (*plVar7 == 0) {
                Memory::free_static((void *)(local_b0 + -0x10),false);
              }
            }
            if (local_c0[0] != 0) {
              LOCK();
              plVar7 = (long *)(local_c0[0] + -0x10);
              *plVar7 = *plVar7 + -1;
              UNLOCK();
              if (*plVar7 == 0) {
                Memory::free_static((void *)(local_c0[0] + -0x10),false);
              }
            }
            if (local_d0 != 0) {
              LOCK();
              plVar7 = (long *)(local_d0 + -0x10);
              *plVar7 = *plVar7 + -1;
              UNLOCK();
              if (*plVar7 == 0) {
                Memory::free_static((void *)(local_d0 + -0x10),false);
              }
            }
            if (local_e0 != 0) {
              LOCK();
              plVar7 = (long *)(local_e0 + -0x10);
              *plVar7 = *plVar7 + -1;
              UNLOCK();
              if (*plVar7 == 0) {
                Memory::free_static((void *)(local_e0 + -0x10),false);
              }
            }
          }
        }
        if (local_100 != 0) {
          LOCK();
          plVar7 = (long *)(local_100 + -0x10);
          *plVar7 = *plVar7 + -1;
          UNLOCK();
          if (*plVar7 == 0) {
            Memory::free_static((void *)(local_100 + -0x10),false);
          }
        }
        if (local_110[0] != 0) {
          LOCK();
          plVar7 = (long *)(local_110[0] + -0x10);
          *plVar7 = *plVar7 + -1;
          UNLOCK();
          if (*plVar7 == 0) {
            Memory::free_static((void *)(local_110[0] + -0x10),false);
          }
        }
        if (local_120 != 0) {
          LOCK();
          plVar7 = (long *)(local_120 + -0x10);
          *plVar7 = *plVar7 + -1;
          UNLOCK();
          if (*plVar7 == 0) {
            Memory::free_static((void *)(local_120 + -0x10),false);
          }
        }
        if (local_130[0] != 0) {
          LOCK();
          plVar7 = (long *)(local_130[0] + -0x10);
          *plVar7 = *plVar7 + -1;
          UNLOCK();
          if (*plVar7 == 0) {
            Memory::free_static((void *)(local_130[0] + -0x10),false);
          }
        }
      }
      else {
        uVar8 = 0;
        _err_print_error("get_color_fbs",
                         "servers/rendering/renderer_rd/forward_mobile/render_forward_mobile.cpp",
                         0xe5,"Condition \"target_size != internal_size\" is true. Returning: RID()"
                         ,0,0);
      }
    }
    else {
      uVar8 = 0;
    }
  }
  else {
    if (const::{lambda()#2}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&const::{lambda()#2}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&const::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&const::{lambda()#2}::operator()()::sname,&__dso_handle
                    );
        __cxa_guard_release(&const::{lambda()#2}::operator()()::sname);
      }
    }
    if (const::{lambda()#1}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,&__dso_handle
                    );
        __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
      }
    }
    uVar8 = RenderSceneBuffersRD::get_texture
                      (pSVar3,(StringName *)&const::{lambda()#1}::operator()()::sname);
    Vector<RID>::push_back(local_158,uVar8);
    pSVar3 = *(StringName **)(this + 0x180);
    if (const::{lambda()#2}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&const::{lambda()#2}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&const::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&const::{lambda()#2}::operator()()::sname,&__dso_handle
                    );
        __cxa_guard_release(&const::{lambda()#2}::operator()()::sname);
      }
    }
    if (const::{lambda()#1}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,&__dso_handle
                    );
        __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
      }
    }
    uVar8 = RenderSceneBuffersRD::get_texture
                      (pSVar3,(StringName *)&const::{lambda()#1}::operator()()::sname);
    Vector<RID>::push_back(local_158,uVar8);
    if (lVar10 != 0) {
      Vector<RID>::push_back(local_158,lVar10);
    }
    if (local_150 == 0) {
      local_178 = 0;
    }
    else {
      local_178 = *(int *)(local_150 + -8);
    }
    pSVar3 = *(StringName **)(this + 0x180);
    if (const::{lambda()#2}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&const::{lambda()#2}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&const::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&const::{lambda()#2}::operator()()::sname,&__dso_handle
                    );
        __cxa_guard_release(&const::{lambda()#2}::operator()()::sname);
      }
    }
    if (const::{lambda()#1}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,&__dso_handle
                    );
        __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
      }
    }
    RenderSceneBuffersRD::get_texture
              (pSVar3,(StringName *)&const::{lambda()#1}::operator()()::sname);
    Vector<RID>::push_back(local_158);
    if (param_2 != 0) goto LAB_0010a902;
LAB_0010a9f3:
    local_140 = 0;
    local_e0 = 0;
    local_d0 = 0;
    local_c0[0] = 0;
    local_b0 = 0;
    local_a8 = 0xffffffffffffffff;
    Vector<int>::push_back(local_e8,0);
    local_a8 = CONCAT44(local_a8._4_4_,1);
    if (lVar10 != 0) {
      local_a8 = 0x200000001;
    }
    uVar11 = 1;
    if (iVar5 != 0) {
      Vector<int>::push_back(local_c8,local_178);
      uVar11 = (undefined4)local_a8;
    }
    local_90[0] = 0;
    if (local_e0 != 0) {
      CowData<int>::_ref((CowData<int> *)local_90,(CowData *)&local_e0);
    }
    local_80[0] = 0;
    if (local_d0 != 0) {
      CowData<int>::_ref((CowData<int> *)local_80,(CowData *)&local_d0);
    }
    local_70[0] = 0;
    if (local_c0[0] != 0) {
      CowData<int>::_ref((CowData<int> *)local_70,(CowData *)local_c0);
    }
    local_60 = 0;
    if (local_b0 == 0) {
      local_58 = CONCAT44(local_a8._4_4_,uVar11);
      Vector<RenderingDevice::FramebufferPass>::push_back(local_148);
    }
    else {
      CowData<int>::_ref((CowData<int> *)&local_60,(CowData *)&local_b0);
      lVar10 = local_60;
      local_58 = CONCAT44(local_a8._4_4_,uVar11);
      Vector<RenderingDevice::FramebufferPass>::push_back(local_148);
      if (lVar10 != 0) {
        LOCK();
        plVar7 = (long *)(lVar10 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          Memory::free_static((void *)(local_60 + -0x10),false);
        }
      }
    }
    if (local_70[0] != 0) {
      LOCK();
      plVar7 = (long *)(local_70[0] + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        Memory::free_static((void *)(local_70[0] + -0x10),false);
      }
    }
    if (local_80[0] != 0) {
      LOCK();
      plVar7 = (long *)(local_80[0] + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        Memory::free_static((void *)(local_80[0] + -0x10),false);
      }
    }
    if (local_90[0] != 0) {
      LOCK();
      plVar7 = (long *)(local_90[0] + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        Memory::free_static((void *)(local_90[0] + -0x10),false);
      }
    }
    uVar8 = FramebufferCacheRD::get_cache_multipass
                      (FramebufferCacheRD::singleton,(Vector *)local_158,(Vector *)local_148,uVar2);
    if (local_b0 != 0) {
      LOCK();
      plVar7 = (long *)(local_b0 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        Memory::free_static((void *)(local_b0 + -0x10),false);
      }
    }
    if (local_c0[0] != 0) {
      LOCK();
      plVar7 = (long *)(local_c0[0] + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        Memory::free_static((void *)(local_c0[0] + -0x10),false);
      }
    }
    if (local_d0 != 0) {
      LOCK();
      plVar7 = (long *)(local_d0 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        Memory::free_static((void *)(local_d0 + -0x10),false);
      }
    }
    if (local_e0 != 0) {
      LOCK();
      plVar7 = (long *)(local_e0 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        Memory::free_static((void *)(local_e0 + -0x10),false);
      }
    }
  }
  CowData<RenderingDevice::FramebufferPass>::_unref
            ((CowData<RenderingDevice::FramebufferPass> *)&local_140);
  lVar10 = local_150;
  if (local_150 != 0) {
    LOCK();
    plVar7 = (long *)(local_150 + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      local_150 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
LAB_0010a942:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<Color>::push_back(Color) [clone .isra.0] */

void Vector<Color>::push_back(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_3 + 8) == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_3 + 8) + -8) + 1;
  }
  iVar1 = CowData<Color>::resize<false>((CowData<Color> *)(param_3 + 8),lVar4);
  if (iVar1 == 0) {
    if (*(long *)(param_3 + 8) == 0) {
      lVar3 = -1;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(param_3 + 8) + -8);
      lVar3 = lVar4 + -1;
      if (-1 < lVar3) {
        CowData<Color>::_copy_on_write((CowData<Color> *)(param_3 + 8));
        puVar2 = (undefined8 *)(lVar3 * 0x10 + *(long *)(param_3 + 8));
        *puVar2 = param_1;
        puVar2[1] = param_2;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar4,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* Vector<RenderingDevice::AttachmentFormat>::push_back(RenderingDevice::AttachmentFormat) [clone
   .isra.0] */

void Vector<RenderingDevice::AttachmentFormat>::push_back
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 8) + -8) + 1;
  }
  iVar2 = CowData<RenderingDevice::AttachmentFormat>::resize<false>
                    ((CowData<RenderingDevice::AttachmentFormat> *)(param_1 + 8),lVar3);
  if (iVar2 == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_1 + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<RenderingDevice::AttachmentFormat>::_copy_on_write
                  ((CowData<RenderingDevice::AttachmentFormat> *)(param_1 + 8));
        puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar4 * 0xc);
        *puVar1 = param_2;
        *(undefined4 *)(puVar1 + 1) = param_3;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* RendererSceneRenderImplementation::RenderForwardMobile::_mesh_compile_pipeline_for_surface(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData*,
   void*, bool, RenderingServer::PipelineSource,
   RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey&,
   Vector<Pair<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData*,
   RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey> >*) */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::_mesh_compile_pipeline_for_surface
          (undefined8 param_1_00,long param_1,long param_2,bool param_3,undefined4 param_5,
          PipelineKey *param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = RendererRD::MeshStorage::get_singleton();
  bVar9 = (bool)RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::
                get_vertex_input_mask(param_1,*(undefined4 *)(param_6 + 0x28),1);
  uVar13 = RendererRD::MeshStorage::_mesh_surface_generate_vertex_format
                     (uVar12,*(ulong *)(param_2 + 8),bVar9,param_3,(uint *)0x0);
  *(undefined4 *)(param_6 + 0x34) = 1;
  *(undefined8 *)param_6 = uVar13;
  uVar10 = SceneShaderForwardMobile::ShaderData::PipelineKey::hash(param_6);
  PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
  ::compile_pipeline((PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
                      *)(param_1 + 0x70),param_6,uVar10,param_5);
  if (param_7 != 0) {
    lVar2 = *(long *)(param_6 + 0x30);
    lVar3 = *(long *)param_6;
    lVar4 = *(long *)(param_6 + 8);
    lVar5 = *(long *)(param_6 + 0x10);
    lVar6 = *(long *)(param_6 + 0x18);
    lVar7 = *(long *)(param_6 + 0x20);
    lVar8 = *(long *)(param_6 + 0x28);
    if (*(long *)(param_7 + 8) == 0) {
      lVar16 = 1;
    }
    else {
      lVar16 = *(long *)(*(long *)(param_7 + 8) + -8) + 1;
    }
    iVar11 = CowData<Pair<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData*,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>>
             ::resize<false>((CowData<Pair<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData*,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>>
                              *)(param_7 + 8),lVar16);
    if (iVar11 != 0) {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
        return;
      }
      goto LAB_0010c789;
    }
    if (*(long *)(param_7 + 8) == 0) {
      lVar15 = -1;
      lVar16 = 0;
    }
    else {
      lVar16 = *(long *)(*(long *)(param_7 + 8) + -8);
      lVar15 = lVar16 + -1;
      if (-1 < lVar15) {
        CowData<Pair<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData*,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>>
        ::_copy_on_write((CowData<Pair<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData*,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>>
                          *)(param_7 + 8));
        plVar14 = (long *)(lVar15 * 0x40 + *(long *)(param_7 + 8));
        *plVar14 = param_1;
        plVar14[1] = lVar3;
        plVar14[2] = lVar4;
        plVar14[3] = lVar5;
        plVar14[4] = lVar6;
        plVar14[5] = lVar7;
        plVar14[6] = lVar8;
        plVar14[7] = lVar2;
        goto LAB_0010c6ad;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar16,"p_index","size()","",false,
               false);
  }
LAB_0010c6ad:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010c789:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererSceneRenderImplementation::RenderForwardMobile::_mesh_compile_pipelines_for_surface(RendererSceneRenderImplementation::RenderForwardMobile::SurfacePipelineData
   const&, RendererSceneRenderImplementation::RenderForwardMobile::GlobalPipelineData const&,
   RenderingServer::PipelineSource,
   Vector<Pair<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData*,
   RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey> >*) */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::_mesh_compile_pipelines_for_surface
          (RenderForwardMobile *this,undefined8 *param_1,byte *param_2,undefined4 param_4,
          undefined8 param_5)

{
  uint uVar1;
  long *plVar2;
  undefined4 *puVar3;
  byte bVar4;
  CowData<RenderingDevice::AttachmentFormat> *this_00;
  void *pvVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  Vector *pVVar12;
  undefined8 uVar13;
  long lVar14;
  byte bVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint *in_FS_OFFSET;
  bool bVar23;
  uint local_b8;
  undefined4 local_a8;
  char local_8b;
  undefined8 local_88;
  void *local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 10);
  RendererRD::MeshStorage::get_singleton();
  local_68 = 0;
  local_60 = (undefined1  [16])0x0;
  local_64 = *(undefined4 *)*param_1;
  local_8b = '\0';
  local_50 = __LC213;
  uStack_48 = _UNK_0012a118;
  if ((param_2[1] & 1) != 0) {
    local_8b = RendererSceneRenderImplementation::SceneShaderForwardMobile::is_multiview_enabled();
  }
  local_a8 = 0x3f;
  lVar14 = *(long *)this;
  if (*(code **)(lVar14 + 0x250) != _render_buffers_get_color_format) {
    local_a8 = (**(code **)(lVar14 + 0x250))(this);
    lVar14 = *(long *)this;
  }
  uVar8 = 0;
  if (*(code **)(lVar14 + 600) != is_dynamic_gi_supported) {
    uVar8 = (**(code **)(lVar14 + 600))(this);
  }
  bVar4 = param_2[1];
  uVar9 = -(~(int)(char)bVar4 >> 0x1f);
  uVar16 = uVar9 + 1;
  if ((bVar4 & 0x40) != 0) {
    uVar16 = 2;
  }
  iVar22 = 0;
  uVar1 = (param_2[2] & 1) + 1;
  uVar20 = (param_2[2] >> 1 ^ 1) & 1;
  do {
    if (uVar9 < uVar16) {
      iVar19 = 0;
      uVar21 = uVar20 + 1;
      if (-1 < (char)bVar4) goto LAB_0010c994;
      do {
        uVar18 = uVar20;
        do {
          local_50 = local_50 & 0xffffffff00000000;
          local_70 = _get_color_framebuffer_format_for_pipeline
                               (local_a8,uVar8,*param_2 & 7,*param_2 >> 3 & 7,iVar22,iVar19,uVar18);
          _mesh_compile_pipeline_for_surface
                    (this,param_1[2],*param_1,*(undefined1 *)(param_1 + 4),param_4,local_78,param_5)
          ;
          if (((char)*param_2 < '\0') && (*(char *)((long)param_1 + 0x24) != '\0')) {
            local_50 = CONCAT44(local_50._4_4_,1);
            _mesh_compile_pipeline_for_surface
                      (this,param_1[2],*param_1,*(undefined1 *)(param_1 + 4),param_4,local_78,
                       param_5);
          }
          if (local_8b != '\0') {
            local_50._4_4_ = (undefined4)(local_50 >> 0x20);
            local_50 = CONCAT44(local_50._4_4_,5);
            local_70 = _get_color_framebuffer_format_for_pipeline
                                 (local_a8,uVar8,*param_2 & 7,*param_2 >> 3 & 7,iVar22,iVar19,uVar18
                                 );
            _mesh_compile_pipeline_for_surface
                      (this,param_1[2],*param_1,*(undefined1 *)(param_1 + 4),param_4,local_78,
                       param_5);
            if (((char)*param_2 < '\0') && (*(char *)((long)param_1 + 0x24) != '\0')) {
              local_50 = CONCAT44(local_50._4_4_,6);
              _mesh_compile_pipeline_for_surface
                        (this,param_1[2],*param_1,*(undefined1 *)(param_1 + 4),param_4,local_78,
                         param_5);
            }
          }
          bVar23 = uVar18 == 0;
          uVar18 = 1;
        } while (((int)((uint)bVar23 << 0x1f) >> 0x1f) + 2U < uVar21);
        if (uVar16 == iVar19 + 1U) break;
LAB_0010c994:
        iVar19 = 1;
        uVar21 = uVar1;
      } while (uVar20 < uVar1);
    }
    iVar22 = iVar22 + 1;
  } while ((((int)(char)bVar4 & 0x20U) != 0) + 1 != iVar22);
  if ((*param_2 & 0x40) != 0) {
    local_50 = local_50 & 0xffffffff00000000;
    this_00 = *(CowData<RenderingDevice::AttachmentFormat> **)in_FS_OFFSET;
    local_88 = 0x24;
    local_80 = (void *)((ulong)local_80 & 0xffffffff00000000);
    if ((char)*in_FS_OFFSET == '\0') {
      *(undefined1 *)in_FS_OFFSET = 1;
      in_FS_OFFSET[0] = 0;
      in_FS_OFFSET[1] = 0;
      __cxa_thread_atexit(Vector<RenderingDevice::AttachmentFormat>::~Vector,this_00,&__dso_handle);
    }
    CowData<RenderingDevice::AttachmentFormat>::resize<false>(this_00,0);
    uVar10 = RendererRD::LightStorage::get_reflection_probe_color_format();
    local_88 = CONCAT44(local_88._4_4_,uVar10);
    uVar10 = RendererRD::LightStorage::get_reflection_probe_color_usage_bits();
    local_80._0_4_ = uVar10;
    Vector<RenderingDevice::AttachmentFormat>::push_back(this_00,local_88,uVar10);
    uVar10 = RendererRD::LightStorage::get_reflection_probe_depth_format();
    local_88 = CONCAT44(local_88._4_4_,uVar10);
    uVar10 = RendererRD::LightStorage::get_reflection_probe_depth_usage_bits();
    local_80 = (void *)CONCAT44(local_80._4_4_,uVar10);
    Vector<RenderingDevice::AttachmentFormat>::push_back(this_00,local_88,uVar10);
    pVVar12 = (Vector *)RenderingDevice::get_singleton();
    local_70 = RenderingDevice::framebuffer_format_create(pVVar12,(uint)this_00);
    _mesh_compile_pipeline_for_surface
              (this,param_1[2],*param_1,*(undefined1 *)(param_1 + 4),param_4,local_78,param_5);
  }
  if (*(char *)((long)param_1 + 0x23) == '\0') goto LAB_0010cb5a;
  bVar4 = param_2[1];
  if ((bVar4 & 8) == 0) {
    bVar15 = bVar4 & 4;
    if ((bVar4 & 2) == 0) goto LAB_0010cc88;
LAB_0010c9e3:
    local_b8 = 2;
  }
  else {
    local_50 = CONCAT44(local_50._4_4_,2);
    if ((char)*in_FS_OFFSET == '\0') {
      uVar13 = *(undefined8 *)in_FS_OFFSET;
      in_FS_OFFSET[0] = 0;
      in_FS_OFFSET[1] = 0;
      in_FS_OFFSET[0] = 0;
      in_FS_OFFSET[1] = 0;
      *(undefined1 *)in_FS_OFFSET = 1;
      __cxa_thread_atexit(LocalVector<RenderingDevice::AttachmentFormat,unsigned_int,false,false>::
                          ~LocalVector,uVar13,&__dso_handle);
    }
    if (*in_FS_OFFSET != 0) {
      *in_FS_OFFSET = 0;
    }
    uVar10 = RendererRD::LightStorage::get_cubemap_depth_format();
    uVar11 = RendererRD::LightStorage::get_cubemap_depth_usage_bits();
    uVar16 = *in_FS_OFFSET;
    if (uVar16 == *in_FS_OFFSET) {
      pvVar5 = *(void **)in_FS_OFFSET;
      uVar17 = (ulong)(uVar16 * 2);
      if (uVar16 * 2 == 0) {
        uVar17 = 1;
      }
      *in_FS_OFFSET = (uint)uVar17;
      lVar14 = Memory::realloc_static(pvVar5,uVar17 * 0xc,false);
      *(long *)in_FS_OFFSET = lVar14;
      if (lVar14 == 0) {
LAB_0010d101:
        _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      uVar16 = *in_FS_OFFSET;
    }
    else {
      lVar14 = *(long *)in_FS_OFFSET;
    }
    puVar3 = (undefined4 *)(lVar14 + (ulong)uVar16 * 0xc);
    *in_FS_OFFSET = uVar16 + 1;
    *puVar3 = uVar10;
    puVar3[2] = uVar11;
    puVar3[1] = 0;
    pVVar12 = (Vector *)RenderingDevice::get_singleton();
    local_80 = (void *)0x0;
    CowData<RenderingDevice::AttachmentFormat>::resize<false>
              ((CowData<RenderingDevice::AttachmentFormat> *)&local_80,(ulong)*in_FS_OFFSET);
    CowData<RenderingDevice::AttachmentFormat>::_copy_on_write
              ((CowData<RenderingDevice::AttachmentFormat> *)&local_80);
    if (local_80 != (void *)0x0) {
      memcpy(local_80,*(void **)in_FS_OFFSET,(ulong)*in_FS_OFFSET * 0xc);
    }
    uVar13 = RenderingDevice::framebuffer_format_create(pVVar12,(uint)&local_88);
    pvVar5 = local_80;
    if (local_80 != (void *)0x0) {
      LOCK();
      plVar2 = (long *)((long)local_80 - 0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_80 = (void *)0x0;
        Memory::free_static((void *)((long)pvVar5 - 0x10),false);
      }
    }
    local_70 = uVar13;
    _mesh_compile_pipeline_for_surface
              (this,param_1[3],param_1[1],*(undefined1 *)(param_1 + 4),param_4,local_78,param_5);
    bVar15 = param_2[1] & 4;
    if ((param_2[1] & 2) != 0) goto LAB_0010c9e3;
LAB_0010cc88:
    if (bVar15 == 0) goto LAB_0010cb5a;
    local_b8 = 1;
  }
  bVar23 = bVar15 == 0;
  do {
    local_50 = CONCAT44(local_50._4_4_,2);
    if ((char)*in_FS_OFFSET == '\0') {
      in_FS_OFFSET[2] = 0;
      in_FS_OFFSET[3] = 0;
      uVar13 = *(undefined8 *)in_FS_OFFSET;
      in_FS_OFFSET[0] = 0;
      in_FS_OFFSET[1] = 0;
      *(undefined1 *)in_FS_OFFSET = 1;
      __cxa_thread_atexit(LocalVector<RenderingDevice::AttachmentFormat,unsigned_int,false,false>::
                          ~LocalVector,uVar13,&__dso_handle);
    }
    if (*in_FS_OFFSET != 0) {
      *in_FS_OFFSET = 0;
    }
    uVar10 = RendererRD::LightStorage::get_shadow_atlas_depth_format(bVar23);
    uVar11 = RendererRD::LightStorage::get_shadow_atlas_depth_usage_bits();
    uVar16 = *in_FS_OFFSET;
    if (uVar16 == in_FS_OFFSET[1]) {
      uVar17 = (ulong)(uVar16 * 2);
      if (uVar16 * 2 == 0) {
        uVar17 = 1;
      }
      in_FS_OFFSET[1] = (uint)uVar17;
      lVar14 = Memory::realloc_static(*(void **)(in_FS_OFFSET + 2),uVar17 * 0xc,false);
      *(long *)(in_FS_OFFSET + 2) = lVar14;
      if (lVar14 == 0) goto LAB_0010d101;
      uVar16 = *in_FS_OFFSET;
    }
    else {
      lVar14 = *(long *)(in_FS_OFFSET + 2);
    }
    puVar3 = (undefined4 *)(lVar14 + (ulong)uVar16 * 0xc);
    *in_FS_OFFSET = uVar16 + 1;
    puVar3[2] = uVar11;
    *puVar3 = uVar10;
    puVar3[1] = 0;
    pVVar12 = (Vector *)RenderingDevice::get_singleton();
    local_80 = (void *)0x0;
    CowData<RenderingDevice::AttachmentFormat>::resize<false>
              ((CowData<RenderingDevice::AttachmentFormat> *)&local_80,(ulong)*in_FS_OFFSET);
    CowData<RenderingDevice::AttachmentFormat>::_copy_on_write
              ((CowData<RenderingDevice::AttachmentFormat> *)&local_80);
    if (local_80 != (void *)0x0) {
      memcpy(local_80,*(void **)(in_FS_OFFSET + 2),(ulong)*in_FS_OFFSET * 0xc);
    }
    uVar13 = RenderingDevice::framebuffer_format_create(pVVar12,(uint)&local_88);
    pvVar5 = local_80;
    if (local_80 != (void *)0x0) {
      LOCK();
      plVar2 = (long *)((long)local_80 - 0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_80 = (void *)0x0;
        Memory::free_static((void *)((long)pvVar5 - 0x10),false);
      }
    }
    local_70 = uVar13;
    _mesh_compile_pipeline_for_surface
              (this,param_1[3],param_1[1],*(undefined1 *)(param_1 + 4),param_4,local_78,param_5);
    if ((param_2[1] & 0x10) != 0) {
      local_50 = CONCAT44(local_50._4_4_,3);
      _mesh_compile_pipeline_for_surface
                (this,param_1[3],param_1[1],*(undefined1 *)(param_1 + 4),param_4,local_78,param_5);
    }
    if (local_8b != '\0') {
      local_50 = CONCAT44(local_50._4_4_,7);
      _mesh_compile_pipeline_for_surface
                (this,param_1[3],param_1[1],*(undefined1 *)(param_1 + 4),param_4,local_78,param_5);
    }
    bVar7 = !bVar23;
    bVar23 = true;
  } while (((int)((uint)bVar7 << 0x1f) >> 0x1f) + 2U < local_b8);
LAB_0010cb5a:
  if (local_40 != *(long *)(in_FS_OFFSET + 10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RendererSceneRenderImplementation::RenderForwardMobile::mesh_generate_pipelines(RID, bool) */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::mesh_generate_pipelines
          (RenderForwardMobile *this,ulong param_2,char param_3)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  undefined8 uVar12;
  char cVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  long *plVar20;
  byte bVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  bool bVar29;
  byte bVar30;
  ulong uVar31;
  byte bVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  long *plVar36;
  long in_FS_OFFSET;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  long *local_e8;
  long local_b0;
  long local_a8;
  ulong local_a0;
  long *local_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  undefined8 local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar19 = RendererRD::MaterialStorage::get_singleton();
  plVar20 = (long *)RendererRD::MeshStorage::get_singleton();
  if (param_2 == 0) {
    _err_print_error("mesh_get_shadow_mesh",
                     "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x1ae,
                     "Parameter \"mesh\" is null.",0,0);
  }
  else {
    uVar16 = (uint)param_2;
    iVar17 = (int)(param_2 >> 0x20);
    if (uVar16 < *(uint *)((long)plVar20 + 0xcc)) {
      lVar23 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(plVar20 + 0x19)) * 0xe0 +
               *(long *)(plVar20[0x17] +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(plVar20 + 0x19)) * 8);
      iVar1 = *(int *)(lVar23 + 0xd8);
      if (iVar1 != iVar17) {
        if (iVar1 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_0010dd28;
      }
      local_a0 = *(ulong *)(lVar23 + 0x70);
    }
    else {
LAB_0010dd28:
      _err_print_error("mesh_get_shadow_mesh",
                       "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x1ae,
                       "Parameter \"mesh\" is null.");
      local_a0 = 0;
    }
    if (uVar16 < *(uint *)((long)plVar20 + 0xcc)) {
      lVar23 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(plVar20 + 0x19)) * 0xe0 +
               *(long *)(plVar20[0x17] +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(plVar20 + 0x19)) * 8);
      iVar1 = *(int *)(lVar23 + 0xd8);
      if (iVar1 == iVar17) {
        uVar18 = *(uint *)(lVar23 + 0x10);
        if (uVar18 != 0) {
          lVar27 = *(long *)(lVar23 + 0x60);
          if (lVar27 == 0) {
            uVar28 = 0;
            CowData<RID>::resize<false>((CowData<RID> *)(lVar23 + 0x60),(ulong)uVar18);
            lVar27 = *(long *)(lVar23 + 0x60);
            do {
              lVar24 = uVar28 * 8;
              lVar2 = *(long *)(*(long *)(lVar23 + 8) + uVar28 * 8);
              if (lVar27 == 0) {
                lVar27 = 0;
LAB_0010dc69:
                _err_print_index_error
                          ("operator[]","./core/templates/vector.h",0x38,uVar28,lVar27,"p_index",
                           "((Vector<T> *)(this))->_cowdata.size()","",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar11 = (code *)invalidInstructionException();
                (*pcVar11)();
              }
              lVar27 = *(long *)(lVar27 + -8);
              if (lVar27 <= (long)uVar28) goto LAB_0010dc69;
              uVar28 = uVar28 + 1;
              CowData<RID>::_copy_on_write((CowData<RID> *)(lVar23 + 0x60));
              lVar27 = *(long *)(lVar23 + 0x60);
              *(undefined8 *)(lVar27 + lVar24) = *(undefined8 *)(lVar2 + 0x120);
            } while (uVar18 != uVar28);
          }
          local_90 = (long *)0x0;
          uVar28 = 0;
          do {
            while (*(long *)(lVar27 + uVar28 * 8) == 0) {
LAB_0010d4f0:
              uVar28 = uVar28 + 1;
              if (uVar18 == uVar28) goto LAB_0010d4fd;
            }
            if (uVar16 < *(uint *)((long)plVar20 + 0xcc)) {
              lVar23 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(plVar20 + 0x19)) * 0xe0 +
                       *(long *)(plVar20[0x17] +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(plVar20 + 0x19)) * 8);
              if (iVar1 != *(int *)(lVar23 + 0xd8)) {
                if (*(int *)(lVar23 + 0xd8) + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0);
                }
                goto LAB_0010d972;
              }
              uVar31 = (ulong)*(uint *)(lVar23 + 0x10);
              if (*(uint *)(lVar23 + 0x10) <= (uint)uVar28) {
                _err_print_index_error
                          ("mesh_get_surface",
                           "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x1a7,uVar28,
                           uVar31,"p_surface_index","mesh->surface_count","",false,false);
                goto LAB_0010d9a1;
              }
              lVar23 = *(long *)(*(long *)(lVar23 + 8) + uVar28 * 8);
            }
            else {
LAB_0010d972:
              uVar31 = 0;
              _err_print_error("mesh_get_surface",
                               "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x1a6,
                               "Parameter \"mesh\" is null.");
LAB_0010d9a1:
              lVar23 = 0;
            }
            uVar26 = *(ulong *)(lVar27 + uVar28 * 8);
            if ((uVar26 == 0) || (*(uint *)(lVar19 + 0x26c) <= (uint)uVar26)) goto LAB_0010d4f0;
            lVar24 = ((uVar26 & 0xffffffff) % (ulong)*(uint *)(lVar19 + 0x268)) * 0xc0 +
                     *(long *)(*(long *)(lVar19 + 600) +
                              ((uVar26 & 0xffffffff) / (ulong)*(uint *)(lVar19 + 0x268)) * 8);
            if (*(int *)(lVar24 + 0xb8) == (int)(uVar26 >> 0x20)) {
              if (((*(int *)(lVar24 + 0x18) != 1) || (lVar24 = *(long *)(lVar24 + 8), lVar24 == 0))
                 || (cVar13 = RendererSceneRenderImplementation::SceneShaderForwardMobile::
                              ShaderData::is_valid(), cVar13 == '\0')) goto LAB_0010d4f0;
              lVar2 = *(long *)(lVar24 + 0xa8);
              local_b0 = lVar23;
              local_a8 = lVar2;
              if (((((*(char *)(lVar2 + 0x232) == '\0') && (*(char *)(lVar2 + 0x240) == '\0')) &&
                   ((*(char *)(lVar2 + 0x236) == '\0' &&
                    ((*(char *)(lVar2 + 0x22e) == '\0' && (*(char *)(lVar2 + 0x22d) == '\0')))))) &&
                  (*(char *)(lVar2 + 0x22b) == '\0')) &&
                 ((((*(char *)(lVar2 + 0x22c) == '\0' && (*(char *)(lVar2 + 0x241) == '\0')) &&
                   (*(char *)(lVar2 + 0x234) == '\0')) &&
                  ((uVar26 = *(ulong *)(this + 0x2b48), uVar26 != 0 &&
                   ((uint)uVar26 < *(uint *)(lVar19 + 0x26c))))))) {
                lVar25 = ((uVar26 & 0xffffffff) % (ulong)*(uint *)(lVar19 + 0x268)) * 0xc0 +
                         *(long *)(*(long *)(lVar19 + 600) +
                                  ((uVar26 & 0xffffffff) / (ulong)*(uint *)(lVar19 + 0x268)) * 8);
                if (*(int *)(lVar25 + 0xb8) == (int)(uVar26 >> 0x20)) {
                  if (((*(int *)(lVar25 + 0x18) == 1) && (*(long *)(lVar25 + 8) != 0)) &&
                     (local_a8 = *(long *)(*(long *)(lVar25 + 8) + 0xa8), local_a0 != 0)) {
                    if ((uint)local_a0 < *(uint *)((long)plVar20 + 0xcc)) {
                      lVar25 = ((local_a0 & 0xffffffff) % (ulong)*(uint *)(plVar20 + 0x19)) * 0xe0 +
                               *(long *)(plVar20[0x17] +
                                        ((local_a0 & 0xffffffff) / (ulong)*(uint *)(plVar20 + 0x19))
                                        * 8);
                      if (*(int *)(lVar25 + 0xd8) != (int)(local_a0 >> 0x20)) {
                        if (*(int *)(lVar25 + 0xd8) + 0x80000000U < 0x7fffffff) {
                          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                           "Method/function failed. Returning: nullptr",
                                           "Attempting to use an uninitialized RID",0,0,
                                           plVar20[0x17]);
                        }
                        goto LAB_0010de80;
                      }
                      if ((uint)uVar28 < *(uint *)(lVar25 + 0x10)) {
                        local_b0 = *(long *)(*(long *)(lVar25 + 8) + uVar28 * 8);
                        goto LAB_0010d3a0;
                      }
                      _err_print_index_error
                                ("mesh_get_surface",
                                 "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x1a7,
                                 uVar28,(ulong)*(uint *)(lVar25 + 0x10),"p_surface_index",
                                 "mesh->surface_count","",false,false);
                    }
                    else {
LAB_0010de80:
                      _err_print_error("mesh_get_surface",
                                       "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",
                                       0x1a6,"Parameter \"mesh\" is null.");
                    }
                    local_b0 = 0;
                  }
                }
                else if (*(int *)(lVar25 + 0xb8) + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0,uVar31);
                }
              }
LAB_0010d3a0:
              bVar14 = RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::
                       is_valid();
              if (bVar14 == 0) goto LAB_0010d4f0;
              local_68 = local_68 & 0xffffffff;
              lStack_80 = local_b0;
              lStack_70 = local_a8;
              local_88 = lVar23;
              local_78 = lVar2;
              bVar15 = (**(code **)(*plVar20 + 200))(plVar20,param_2,1);
              uVar31 = local_68;
              lVar24 = *(long *)(lVar24 + 0xa8);
              bVar21 = *(byte *)(lVar24 + 0x239);
              if ((bVar21 == 0) && (*(char *)(lVar24 + 0x23a) == '\0')) {
                bVar32 = *(byte *)(lVar24 + 0x229);
                bVar30 = *(byte *)(lVar24 + 0x23b);
                if (bVar32 != 0) {
LAB_0010db28:
                  bVar32 = *(byte *)(lVar24 + 0x22b);
                  if (bVar32 != 0) {
                    bVar30 = bVar30 | *(byte *)(lVar24 + 0x22c);
                    goto LAB_0010d450;
                  }
                  iVar33 = *(int *)(lVar24 + 0x214);
                  iVar17 = *(int *)(lVar24 + 0x210);
                  local_68._0_2_ = (ushort)bVar15;
                  cVar13 = *(char *)(lVar24 + 0x22a);
                  bVar38 = iVar33 == 0;
                  bVar37 = iVar17 == 0;
                  bVar29 = false;
                  bVar32 = bVar14;
                  if (bVar21 == 0) goto LAB_0010db6b;
                  goto LAB_0010db84;
                }
LAB_0010d450:
                iVar17 = *(int *)(lVar24 + 0x210);
                iVar33 = *(int *)(lVar24 + 0x214);
                cVar13 = *(char *)(lVar24 + 0x22a);
                bVar37 = iVar17 == 0;
                bVar38 = iVar33 == 0;
                bVar29 = cVar13 == '\0';
                if (bVar30 == 0 && bVar29) {
                  cVar13 = '\0';
                }
                bVar29 = (bVar30 == 0 && bVar29) && (!bVar37 && !bVar38);
                local_68._0_2_ = CONCAT11(bVar29,bVar15);
                if (bVar21 == 0) {
LAB_0010db6b:
                  bVar21 = bVar32;
                  if (*(char *)(lVar24 + 0x23a) == '\0') {
                    bVar15 = *(byte *)(lVar24 + 0x23b);
                    bVar39 = bVar21 != 0;
                    bVar21 = bVar15;
                    if (bVar39) goto LAB_0010db84;
                  }
                  else {
                    if (bVar21 == 0) goto LAB_0010d4a4;
LAB_0010db84:
                    if (*(char *)(lVar24 + 0x22b) == '\0') goto LAB_0010d4a4;
                    bVar15 = bVar21 | *(byte *)(lVar24 + 0x22c);
                  }
                  if ((bVar15 != 0) || (cVar13 != '\0')) goto LAB_0010d4a4;
                  local_68._0_3_ = CONCAT12(bVar37 | bVar38,(ushort)local_68);
                  if (bVar29) goto LAB_0010d4b5;
                  if ((bVar37 | bVar38) != 0) goto LAB_0010dbd3;
                  goto LAB_0010dbc4;
                }
                bVar21 = bVar32;
                if (bVar32 != 0) goto LAB_0010db84;
LAB_0010d4a4:
                local_68._0_3_ = CONCAT12(1,(ushort)local_68);
                if (!bVar29) goto LAB_0010dbd3;
              }
              else {
                bVar30 = *(byte *)(lVar24 + 0x229);
                if (bVar30 != 0) goto LAB_0010db28;
                local_68._0_2_ = (ushort)bVar15;
                iVar33 = *(int *)(lVar24 + 0x214);
                iVar17 = *(int *)(lVar24 + 0x210);
                cVar13 = *(char *)(lVar24 + 0x22a);
                if (bVar21 == 0) {
                  bVar38 = iVar33 == 0;
                  bVar37 = iVar17 == 0;
                  bVar29 = false;
                  bVar32 = 0;
                  goto LAB_0010db6b;
                }
                local_68._3_5_ = SUB85(uVar31,3);
                local_68._0_3_ = CONCAT12(1,(ushort)local_68);
LAB_0010dbd3:
                if ((*(char *)(lVar24 + 0x22d) == '\0') && (*(char *)(lVar24 + 0x22c) == '\0')) {
LAB_0010dbc4:
                  bVar14 = 0;
                }
                else {
                  bVar14 = iVar17 != 0 && iVar33 != 0;
                }
              }
LAB_0010d4b5:
              uVar12 = local_68;
              local_68._0_4_ = CONCAT13(bVar14,(undefined3)local_68);
              local_68._5_3_ = SUB83(uVar12,5);
              local_68 = CONCAT35(local_68._5_3_,
                                  CONCAT14((char)(*(ulong *)(lVar23 + 8) >> 5),(undefined4)local_68)
                                 ) & 0xffffff01ffffffff;
              _mesh_compile_pipelines_for_surface(this,&local_88,this + 0x30cc,1);
              goto LAB_0010d4f0;
            }
            if (0x7ffffffe < *(int *)(lVar24 + 0xb8) + 0x80000000U) goto LAB_0010d4f0;
            uVar28 = uVar28 + 1;
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          } while (uVar18 != uVar28);
LAB_0010d4fd:
          plVar20 = local_90;
          if (param_3 == '\0') {
            if (local_90 != (long *)0x0) {
              CowData<Pair<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData*,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>>
              ::_copy_on_write((CowData<Pair<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData*,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>>
                                *)&local_90);
              plVar36 = local_90;
              CowData<Pair<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData*,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>>
              ::_copy_on_write((CowData<Pair<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData*,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>>
                                *)&local_90);
              plVar20 = local_90;
              if (local_90 != (long *)0x0) {
                local_e8 = local_90 + local_90[-1] * 8;
                if (plVar36 != local_e8) goto LAB_0010d55b;
                goto LAB_0010d63a;
              }
              local_e8 = (long *)0x0;
              if (plVar36 != (long *)0x0) {
LAB_0010d55b:
                do {
                  local_88 = *plVar36;
                  lStack_80 = plVar36[1];
                  local_78 = plVar36[2];
                  lStack_70 = plVar36[3];
                  local_68 = plVar36[4];
                  lStack_60 = plVar36[5];
                  local_58 = plVar36[6];
                  lStack_50 = plVar36[7];
                  lVar19 = *plVar36;
                  uVar16 = SceneShaderForwardMobile::ShaderData::PipelineKey::hash
                                     ((PipelineKey *)&lStack_80);
                  iVar17 = pthread_mutex_lock((pthread_mutex_t *)(lVar19 + 0x130));
                  if (iVar17 != 0) {
                    /* WARNING: Subroutine does not return */
                    std::__throw_system_error(iVar17);
                  }
                  if (*(long *)(lVar19 + 0xe8) != 0) {
                    for (lVar23 = *(long *)(*(long *)(lVar19 + 0xe8) + 0x10);
                        *(long *)(lVar19 + 0xf0) != lVar23; lVar23 = *(long *)(lVar23 + 0x10)) {
                      while (*(uint *)(lVar23 + 0x30) <= uVar16) {
                        if (uVar16 <= *(uint *)(lVar23 + 0x30)) {
                          lVar23 = *(long *)(lVar19 + 0x108);
                          if ((lVar23 == 0) || (*(int *)(lVar19 + 300) == 0)) goto LAB_0010d618;
                          uVar31 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                                       (ulong)*(uint *)(lVar19 + 0x128) * 4));
                          uVar28 = *(ulong *)(hash_table_size_primes_inv +
                                             (ulong)*(uint *)(lVar19 + 0x128) * 8);
                          uVar18 = (uVar16 >> 0x10 ^ uVar16) * -0x7a143595;
                          uVar18 = (uVar18 ^ uVar18 >> 0xd) * -0x3d4d51cb;
                          uVar35 = uVar18 ^ uVar18 >> 0x10;
                          if (uVar18 == uVar18 >> 0x10) {
                            uVar35 = 1;
                            uVar26 = uVar28;
                          }
                          else {
                            uVar26 = uVar35 * uVar28;
                          }
                          auVar3._8_8_ = 0;
                          auVar3._0_8_ = uVar31;
                          auVar7._8_8_ = 0;
                          auVar7._0_8_ = uVar26;
                          lVar27 = SUB168(auVar3 * auVar7,8);
                          uVar18 = *(uint *)(*(long *)(lVar19 + 0x110) + lVar27 * 4);
                          uVar22 = SUB164(auVar3 * auVar7,8);
                          if (uVar18 == 0) goto LAB_0010d618;
                          uVar34 = 0;
                          goto LAB_0010d912;
                        }
                        lVar23 = *(long *)(lVar23 + 8);
                        if (lVar23 == *(long *)(lVar19 + 0xf0)) goto LAB_0010d618;
                      }
                    }
                  }
LAB_0010d618:
                  plVar36 = plVar36 + 8;
                  pthread_mutex_unlock((pthread_mutex_t *)(lVar19 + 0x130));
                } while (local_e8 != plVar36);
                goto LAB_0010d635;
              }
            }
          }
          else {
LAB_0010d635:
            if (plVar20 != (long *)0x0) {
LAB_0010d63a:
              LOCK();
              plVar20 = plVar20 + -2;
              *plVar20 = *plVar20 + -1;
              UNLOCK();
              if (*plVar20 == 0) {
                if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                  Memory::free_static(local_90 + -2,false);
                  return;
                }
                goto LAB_0010de19;
              }
            }
          }
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_0010de19;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("mesh_get_surface_count_and_materials",
                     "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x195,
                     "Parameter \"mesh\" is null.",0,0);
    return;
  }
LAB_0010de19:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010d912:
  if ((uVar18 == uVar35) && (uVar16 == *(uint *)(*(long *)(lVar23 + lVar27 * 8) + 0x10))) {
    lVar23 = *(long *)(lVar23 + (ulong)uVar22 * 8);
    if (lVar23 != 0) {
      WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
      HashMap<unsigned_int,long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,long>>>
      ::erase((HashMap<unsigned_int,long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,long>>>
               *)(lVar19 + 0x100),(uint *)(lVar23 + 0x10));
    }
    goto LAB_0010d618;
  }
  uVar34 = uVar34 + 1;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (uVar22 + 1) * uVar28;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar31;
  lVar27 = SUB168(auVar4 * auVar8,8);
  uVar18 = *(uint *)(*(long *)(lVar19 + 0x110) + lVar27 * 4);
  uVar22 = SUB164(auVar4 * auVar8,8);
  if ((uVar18 == 0) ||
     (auVar5._8_8_ = 0, auVar5._0_8_ = uVar18 * uVar28, auVar9._8_8_ = 0, auVar9._0_8_ = uVar31,
     auVar6._8_8_ = 0,
     auVar6._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar19 + 0x128) * 4) +
                     uVar22) - SUB164(auVar5 * auVar9,8)) * uVar28, auVar10._8_8_ = 0,
     auVar10._0_8_ = uVar31, SUB164(auVar6 * auVar10,8) < uVar34)) goto LAB_0010d618;
  goto LAB_0010d912;
}



/* RendererSceneRenderImplementation::RenderForwardMobile::_mesh_generate_all_pipelines_for_surface_cache(RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceSurfaceDataCache*,
   RendererSceneRenderImplementation::RenderForwardMobile::GlobalPipelineData const&) */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::
_mesh_generate_all_pipelines_for_surface_cache
          (RenderForwardMobile *this,GeometryInstanceSurfaceDataCache *param_1,
          GlobalPipelineData *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined2 local_13;
  undefined1 local_11;
  long local_10;
  
  local_28 = *(undefined8 *)(param_1 + 0x30);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_20 = *(undefined8 *)(param_1 + 0x50);
  local_38 = *(undefined8 *)(param_1 + 0x20);
  local_13 = 0;
  lVar1 = *(long *)(param_1 + 0x60);
  uStack_30 = *(undefined8 *)(param_1 + 0x40);
  local_11 = 0;
  local_18 = *(long *)(lVar1 + 0x18) != 0;
  local_17 = (*(uint *)(param_1 + 0x14) & 4) == 0;
  local_16 = !(bool)local_17;
  local_15 = (*(uint *)(param_1 + 0x14) & 0xb) != 0;
  local_14 = true;
  if (*(long *)(lVar1 + 200) == 0) {
    local_14 = *(long *)(lVar1 + 0xe8) != 0;
  }
  _mesh_compile_pipelines_for_surface(this,&local_38,param_2,2,0);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererSceneRenderImplementation::RenderForwardMobile::_update_dirty_geometry_pipelines() */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::_update_dirty_geometry_pipelines
          (RenderForwardMobile *this)

{
  GeometryInstanceSurfaceDataCache *pGVar1;
  long lVar2;
  long lVar3;
  GeometryInstanceSurfaceDataCache *pGVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  
  iVar6 = *(int *)(this + 0x30cc);
  if (iVar6 == *(int *)(this + 0x30c8)) {
    lVar7 = *(long *)(this + 0x2f70);
    while (lVar7 != 0) {
      pGVar1 = *(GeometryInstanceSurfaceDataCache **)(lVar7 + 8);
      _mesh_generate_all_pipelines_for_surface_cache
                (this,pGVar1,(GlobalPipelineData *)(this + 0x30c8));
      puVar5 = *(undefined8 **)(pGVar1 + 0x68);
      if (puVar5 != (undefined8 *)0x0) {
        lVar7 = *(long *)(pGVar1 + 0x78);
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(pGVar1 + 0x80);
        }
        lVar2 = *(long *)(pGVar1 + 0x80);
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x10) = lVar7;
        }
        if (pGVar1 + 0x68 == (GeometryInstanceSurfaceDataCache *)*puVar5) {
          *puVar5 = *(undefined8 *)(pGVar1 + 0x78);
          pGVar4 = (GeometryInstanceSurfaceDataCache *)puVar5[1];
        }
        else {
          pGVar4 = (GeometryInstanceSurfaceDataCache *)puVar5[1];
        }
        if (pGVar1 + 0x68 == pGVar4) {
          puVar5[1] = lVar2;
        }
        *(undefined8 *)(pGVar1 + 0x68) = 0;
        *(undefined1 (*) [16])(pGVar1 + 0x78) = (undefined1  [16])0x0;
      }
      lVar7 = *(long *)(this + 0x2f70);
    }
  }
  else {
    lVar7 = *(long *)(this + 0x2f80);
    if (lVar7 != 0) {
      do {
        pGVar1 = *(GeometryInstanceSurfaceDataCache **)(lVar7 + 8);
        _mesh_generate_all_pipelines_for_surface_cache
                  (this,pGVar1,(GlobalPipelineData *)(this + 0x30cc));
        if (*(RenderForwardMobile **)(pGVar1 + 0x68) != (RenderForwardMobile *)0x0) {
          if (*(RenderForwardMobile **)(pGVar1 + 0x68) == this + 0x2f70) {
            lVar2 = *(long *)(pGVar1 + 0x78);
            if (lVar2 != 0) {
              *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(pGVar1 + 0x80);
            }
            lVar3 = *(long *)(pGVar1 + 0x80);
            if (lVar3 != 0) {
              *(long *)(lVar3 + 0x10) = lVar2;
            }
            if (pGVar1 + 0x68 == *(GeometryInstanceSurfaceDataCache **)(this + 0x2f70)) {
              *(undefined8 *)(this + 0x2f70) = *(undefined8 *)(pGVar1 + 0x78);
              pGVar4 = *(GeometryInstanceSurfaceDataCache **)(this + 0x2f78);
            }
            else {
              pGVar4 = *(GeometryInstanceSurfaceDataCache **)(this + 0x2f78);
            }
            if (pGVar1 + 0x68 == pGVar4) {
              *(long *)(this + 0x2f78) = lVar3;
            }
            *(undefined8 *)(pGVar1 + 0x68) = 0;
            *(undefined1 (*) [16])(pGVar1 + 0x78) = (undefined1  [16])0x0;
          }
          else {
            _err_print_error("remove","./core/templates/self_list.h",0x50,
                             "Condition \"p_elem->_root != this\" is true.",0,0);
          }
        }
        lVar7 = *(long *)(lVar7 + 0x10);
      } while (lVar7 != 0);
      iVar6 = *(int *)(this + 0x30cc);
    }
    *(int *)(this + 0x30c8) = iVar6;
  }
  return;
}



/* RendererSceneRenderImplementation::RenderForwardMobile::_update_dirty_geometry_instances() */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::_update_dirty_geometry_instances
          (RenderForwardMobile *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x2f60);
  while (lVar1 != 0) {
    _geometry_instance_update(this,*(RenderGeometryInstance **)(lVar1 + 8));
    lVar1 = *(long *)(this + 0x2f60);
  }
  _update_dirty_geometry_pipelines(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererSceneRenderImplementation::RenderForwardMobile::_fill_render_list(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,
   RenderDataRD const*, RendererSceneRenderImplementation::RenderForwardMobile::PassMode, bool) */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::_fill_render_list
          (RenderForwardMobile *this,int param_2,long param_3,uint param_4,char param_5)

{
  undefined1 (*pauVar1) [16];
  RenderForwardMobile *pRVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  char cVar10;
  uint uVar11;
  code *pcVar12;
  ulong uVar13;
  void *pvVar14;
  undefined8 uVar15;
  long lVar16;
  float *pfVar17;
  undefined1 (*pauVar18) [16];
  uint uVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  long lVar26;
  undefined1 (*pauVar27) [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  RenderForwardMobile local_80;
  ulong local_70;
  uint local_48;
  
  RendererRD::MeshStorage::get_singleton();
  if (param_2 == 0) {
    *(undefined4 *)(this + 12000) = 0;
    this[0x2ee4] = (RenderForwardMobile)0x0;
  }
  lVar16 = *(long *)(param_3 + 0x180);
  fVar3 = *(float *)(lVar16 + 0x188);
  fVar4 = *(float *)(lVar16 + 0x17c);
  fVar5 = *(float *)(lVar16 + 0x194);
  fVar39 = (float)((uint)fVar3 ^ _LC216);
  fVar38 = (float)((uint)fVar5 ^ _LC216);
  fVar28 = (float)(_LC216 ^ (uint)fVar4);
  fVar6 = *(float *)(lVar16 + 0x19c);
  fVar7 = *(float *)(lVar16 + 0x198);
  fVar8 = *(float *)(lVar16 + 0x1a0);
  fVar29 = (float)Projection::get_z_near();
  fVar30 = (float)Projection::get_z_far();
  fVar31 = (float)Projection::get_z_near();
  lVar26 = (long)param_2;
  lVar21 = lVar26 * 0x20;
  pRVar2 = this + lVar21 + 0x2ef8;
  lVar16 = *(long *)(this + 0x2f60);
  while (lVar16 != 0) {
    _geometry_instance_update(this,*(RenderGeometryInstance **)(lVar16 + 8));
    lVar16 = *(long *)(this + 0x2f60);
  }
  _update_dirty_geometry_pipelines(this);
  if (param_5 == '\0') {
    if (*(int *)(this + lVar26 * 0x20 + 0x2ef8) != 0) {
      *(undefined4 *)(this + lVar26 * 0x20 + 0x2ef8) = 0;
    }
    if (*(int *)(this + lVar21 + 0x2f08) != 0) {
      *(undefined4 *)(this + lVar21 + 0x2f08) = 0;
    }
    if (param_2 == 0) {
      if (*(int *)(this + 0x2f18) != 0) {
        *(undefined4 *)(this + 0x2f18) = 0;
      }
      if (*(int *)(this + 0x2f28) != 0) {
        *(undefined4 *)(this + 0x2f28) = 0;
      }
    }
  }
  lVar16 = *(long *)(param_3 + 0x188);
  uVar13 = *(ulong *)(lVar16 + 0x28);
  if ((int)uVar13 < 1) {
    return;
  }
  local_70 = 0;
  local_48 = 0;
LAB_0010e3bd:
  if (uVar13 <= local_70) {
    _err_print_index_error
              ("operator[]","./core/templates/paged_array.h",0xa9,(long)(int)(uint)local_70,uVar13,
               "p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar12 = (code *)invalidInstructionException();
    (*pcVar12)();
  }
  lVar21 = *(long *)(*(long *)(*(long *)(lVar16 + 8) +
                              (local_70 >> ((byte)*(undefined4 *)(lVar16 + 0x1c) & 0x3f)) * 8) +
                    (ulong)((uint)local_70 & *(uint *)(lVar16 + 0x20)) * 8);
  lVar26 = *(long *)(param_3 + 0x180);
  cVar10 = *(char *)(lVar26 + 500);
  fVar32 = *(float *)(lVar21 + 0x44);
  fVar36 = *(float *)(lVar21 + 0x48);
  fVar34 = *(float *)(lVar21 + 0x4c);
  if (cVar10 == '\0') {
    if (*(char *)(lVar21 + 0x7c) != '\0') {
      fVar34 = *(float *)(lVar21 + 0x68) * _LC217 + *(float *)(lVar21 + 0x5c);
      fVar36 = *(float *)(lVar21 + 100) * _LC217 + *(float *)(lVar21 + 0x58);
      fVar32 = _LC217 * *(float *)(lVar21 + 0x60) + *(float *)(lVar21 + 0x54);
    }
    fVar36 = fVar36 - *(float *)(lVar26 + 0x19c);
    fVar32 = fVar32 - *(float *)(lVar26 + 0x198);
    fVar34 = fVar34 - *(float *)(lVar26 + 0x1a0);
    fVar32 = SQRT(fVar32 * fVar32 + fVar36 * fVar36 + fVar34 * fVar34) - *(float *)(lVar21 + 0x78);
  }
  else {
    if (*(char *)(lVar21 + 0x7c) != '\0') {
      fVar32 = *(float *)(lVar21 + 0x54);
      fVar36 = *(float *)(lVar21 + 0x58);
      fVar34 = *(float *)(lVar21 + 0x5c);
      if (0.0 < fVar4) {
        fVar32 = fVar32 + *(float *)(lVar21 + 0x60);
      }
      if (0.0 < fVar3) {
        fVar36 = fVar36 + *(float *)(lVar21 + 100);
      }
      if (0.0 < fVar5) {
        fVar34 = fVar34 + *(float *)(lVar21 + 0x68);
      }
    }
    fVar32 = ((fVar32 * fVar28 + fVar36 * fVar39 + fVar34 * fVar38) -
             (fVar39 * fVar6 + fVar28 * fVar7 + fVar38 * fVar8 + fVar29)) -
             *(float *)(lVar21 + 0x78);
  }
  *(float *)(lVar21 + 0x10) = fVar32;
  iVar25 = (int)((fVar32 * __LC218) / (fVar30 - fVar31));
  if (0xf < iVar25) {
    iVar25 = 0xf;
  }
  if (iVar25 < 0) {
    iVar25 = 0;
  }
  uVar19 = -(uint)*(byte *)(lVar21 + 0x6c) & 0x10 | *(uint *)(lVar21 + 8);
  if (param_2 == 0) {
    if (*(long *)(lVar21 + 200) != 0) {
      if (*(uint *)(this + 0x2eb8) != 0) {
        uVar13 = 0;
        do {
          if (*(long *)(lVar21 + 200) == *(long *)(this + uVar13 * 8 + 0x2e70)) {
            local_80 = this[(long)(int)(uint)uVar13 + 0x2eb0];
            *(uint *)(lVar21 + 0xc4) = *(int *)(lVar21 + 0xe0) << 0x10 | (uint)uVar13;
            if (local_80 == (RenderForwardMobile)0x0) {
              local_80 = (RenderForwardMobile)0x1;
              uVar19 = uVar19 | 0x100;
            }
            else {
              uVar19 = uVar19 | 0x300;
            }
            goto LAB_0010e4de;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != *(uint *)(this + 0x2eb8));
      }
      *(undefined4 *)(lVar21 + 0xc4) = 0xffffffff;
      goto LAB_0010e4d9;
    }
    pauVar18 = *(undefined1 (**) [16])(lVar21 + 0xe8);
    local_80 = (RenderForwardMobile)0x0;
    if (pauVar18 != (undefined1 (*) [16])0x0) {
      if (*(uint *)(this + 0x2ed0) <= local_48) goto LAB_0010e4d9;
      pauVar1 = pauVar18 + 9;
      pauVar27 = (undefined1 (*) [16])((ulong)local_48 * 0x90 + *(long *)(this + 0x2ec8));
      do {
        auVar9 = *pauVar18;
        pauVar18 = pauVar18 + 1;
        *pauVar27 = auVar9;
        pauVar27 = pauVar27 + 1;
      } while (pauVar1 != pauVar18);
      local_80 = (RenderForwardMobile)0x1;
      uVar19 = uVar19 | 0x80;
      *(uint *)(lVar21 + 0xc4) = local_48;
      local_48 = local_48 + 1;
    }
  }
  else {
LAB_0010e4d9:
    local_80 = (RenderForwardMobile)0x0;
  }
LAB_0010e4de:
  *(uint *)(lVar21 + 0xc) = uVar19;
  lVar22 = *(long *)(lVar21 + 0x180);
  fVar32 = _LC74;
  if (cVar10 == '\0') {
    fVar36 = *(float *)(lVar21 + 0x5c) - *(float *)(lVar26 + 0x224);
    fVar32 = *(float *)(lVar21 + 0x54) - *(float *)(lVar26 + 0x21c);
    fVar34 = *(float *)(lVar21 + 0x58) - *(float *)(lVar26 + 0x220);
    if (fVar36 < 0.0) {
      fVar36 = 0.0;
    }
    if (fVar34 < 0.0) {
      fVar34 = 0.0;
    }
    if (fVar32 < 0.0) {
      fVar32 = 0.0;
    }
    fVar33 = *(float *)(lVar26 + 0x224) - (*(float *)(lVar21 + 0x68) + *(float *)(lVar21 + 0x5c));
    fVar35 = *(float *)(lVar26 + 0x220) - (*(float *)(lVar21 + 100) + *(float *)(lVar21 + 0x58));
    fVar37 = *(float *)(lVar26 + 0x21c) - (*(float *)(lVar21 + 0x60) + *(float *)(lVar21 + 0x54));
    if (fVar36 <= fVar33) {
      fVar36 = fVar33;
    }
    if (fVar34 <= fVar35) {
      fVar34 = fVar35;
    }
    if (fVar37 < fVar32) {
      fVar37 = fVar32 * fVar32;
    }
    else {
      fVar37 = fVar37 * fVar37;
    }
    fVar32 = SQRT(fVar36 * fVar36 + fVar37 + fVar34 * fVar34);
  }
  if (lVar22 != 0) {
    do {
      fVar36 = *(float *)(lVar26 + 0x3c8);
      *(byte *)(lVar22 + 0xe) = *(byte *)(lVar22 + 0xe) & 0xf0;
      if (fVar36 <= 0.0) {
LAB_0010e594:
        lVar16 = *(long *)(param_3 + 0x218);
        *(undefined4 *)(lVar22 + 0x1c) = 0;
        if (lVar16 != 0) {
          iVar20 = *(int *)(*(long *)(lVar22 + 0x20) + 0x98);
          if (iVar20 == 0) {
            iVar20 = *(int *)(*(long *)(lVar22 + 0x20) + 0x28);
          }
          uVar19 = ((uint)(iVar20 - *(int *)(_indices_to_primitives(RenderingServer::PrimitiveType,unsigned_int)
                                             ::subtractor + (long)*(int *)(lVar22 + 0x10) * 4)) /
                   *(uint *)(_indices_to_primitives(RenderingServer::PrimitiveType,unsigned_int)::
                             divisor + (long)*(int *)(lVar22 + 0x10) * 4)) * *(int *)(lVar21 + 0xbc)
          ;
          if (param_2 == 0) goto LAB_0010e5d8;
LAB_0010e730:
          if (param_2 == 2) {
            *(int *)(lVar16 + 0x10) = *(int *)(lVar16 + 0x10) + uVar19;
          }
        }
      }
      else {
        lVar16 = *(long *)(lVar22 + 0x20);
        if (*(int *)(lVar16 + 0xa8) == 0) goto LAB_0010e594;
        fVar34 = *(float *)(lVar16 + 0x98);
        pfVar17 = *(float **)(lVar16 + 0xa0);
        iVar20 = 0;
        iVar23 = -1;
        do {
          iVar24 = iVar20;
          if (fVar36 < (*pfVar17 * *(float *)(lVar21 + 0x74) * *(float *)(lVar21 + 0x70)) /
                       (*(float *)(lVar26 + 0x3c4) * fVar32)) {
            iVar20 = 0;
            iVar24 = iVar23;
            if (iVar23 == -1) goto LAB_0010e6fd;
            break;
          }
          pfVar17 = pfVar17 + 6;
          iVar20 = iVar24 + 1;
          iVar23 = iVar24;
        } while (*(int *)(lVar16 + 0xa8) != iVar24 + 1);
        iVar20 = iVar24 + 1;
        fVar34 = (*(float **)(lVar16 + 0xa0))[(long)iVar24 * 6 + 1];
LAB_0010e6fd:
        lVar16 = *(long *)(param_3 + 0x218);
        *(int *)(lVar22 + 0x1c) = iVar20;
        if (lVar16 != 0) {
          uVar19 = (uint)((int)fVar34 -
                         *(int *)(_indices_to_primitives(RenderingServer::PrimitiveType,unsigned_int)
                                  ::subtractor + (long)*(int *)(lVar22 + 0x10) * 4)) /
                   *(uint *)(_indices_to_primitives(RenderingServer::PrimitiveType,unsigned_int)::
                             divisor + (long)*(int *)(lVar22 + 0x10) * 4);
          if (param_2 != 0) goto LAB_0010e730;
LAB_0010e5d8:
          *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + uVar19;
        }
      }
      if (param_4 < 2) {
        if (*(int *)(this + 0x2438) == 3) {
LAB_0010e614:
          uVar19 = *(uint *)(this + 0x2f18);
          pvVar14 = *(void **)(this + 0x2f20);
          if (uVar19 == *(uint *)(this + 0x2f1c)) {
            uVar13 = (ulong)(uVar19 * 2);
            if (uVar19 * 2 == 0) {
              uVar13 = 1;
            }
            *(int *)(this + 0x2f1c) = (int)uVar13;
            pvVar14 = (void *)Memory::realloc_static(pvVar14,uVar13 * 8,false);
            *(void **)(this + 0x2f20) = pvVar14;
            if (pvVar14 == (void *)0x0) {
LAB_0010eb03:
              _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                               "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar12 = (code *)invalidInstructionException();
              (*pcVar12)();
            }
            uVar19 = *(uint *)(this + 0x2f18);
          }
          *(uint *)(this + 0x2f18) = uVar19 + 1;
          *(long *)((long)pvVar14 + (ulong)uVar19 * 8) = lVar22;
          uVar19 = *(uint *)(lVar22 + 0x14);
        }
        else {
          uVar19 = *(uint *)(lVar22 + 0x14);
          if ((uVar19 & 2) != 0) {
            uVar11 = *(uint *)pRVar2;
            pvVar14 = *(void **)(pRVar2 + 8);
            if (uVar11 == *(uint *)(pRVar2 + 4)) {
              uVar13 = (ulong)(uVar11 * 2);
              if (uVar11 * 2 == 0) {
                uVar13 = 1;
              }
              *(uint *)(pRVar2 + 4) = (uint)uVar13;
              pvVar14 = (void *)Memory::realloc_static(pvVar14,uVar13 * 8,false);
              *(void **)(pRVar2 + 8) = pvVar14;
              if (pvVar14 == (void *)0x0) goto LAB_0010eb03;
              uVar11 = *(uint *)pRVar2;
              uVar19 = *(uint *)(lVar22 + 0x14);
            }
            *(uint *)pRVar2 = uVar11 + 1;
            *(long *)((long)pvVar14 + (ulong)uVar11 * 8) = lVar22;
          }
          if ((uVar19 & 4) != 0) goto LAB_0010e614;
        }
        if (local_80 != (RenderForwardMobile)0x0) {
          *(byte *)(lVar22 + 0xe) = *(byte *)(lVar22 + 0xe) & 0xf0 | 1;
          this[0x2ee4] = (RenderForwardMobile)0x1;
        }
        if ((uVar19 & 0x800) != 0) {
          this[0x2ee3] = (RenderForwardMobile)0x1;
        }
        if ((uVar19 & 0x1000) != 0) {
          this[12000] = (RenderForwardMobile)0x1;
        }
        if ((uVar19 & 0x4000) != 0) {
          this[0x2ee1] = (RenderForwardMobile)0x1;
        }
        if ((uVar19 & 0x2000) != 0) {
          this[0x2ee2] = (RenderForwardMobile)0x1;
        }
      }
      else {
        uVar19 = *(uint *)(lVar22 + 0x14);
        if (param_4 - 2 < 2) {
          if ((uVar19 & 8) != 0) {
            uVar19 = *(uint *)pRVar2;
            uVar13 = (ulong)uVar19;
            pvVar14 = *(void **)(pRVar2 + 8);
            if (uVar19 == *(uint *)(pRVar2 + 4)) goto LAB_0010e762;
            goto LAB_0010e540;
          }
        }
        else {
          if (param_4 == 4) {
            uVar19 = uVar19 & 7;
          }
          else {
            uVar19 = uVar19 & 3;
          }
          if (uVar19 != 0) {
            uVar19 = *(uint *)pRVar2;
            uVar13 = (ulong)uVar19;
            pvVar14 = *(void **)(pRVar2 + 8);
            if (uVar19 == *(uint *)(pRVar2 + 4)) {
LAB_0010e762:
              uVar13 = (ulong)(uVar19 * 2);
              if (uVar19 * 2 == 0) {
                uVar13 = 1;
              }
              *(uint *)(pRVar2 + 4) = (uint)uVar13;
              pvVar14 = (void *)Memory::realloc_static(pvVar14,uVar13 * 8,false);
              *(void **)(pRVar2 + 8) = pvVar14;
              if (pvVar14 == (void *)0x0) goto LAB_0010eb03;
              uVar13 = (ulong)*(uint *)pRVar2;
            }
LAB_0010e540:
            *(uint *)pRVar2 = (int)uVar13 + 1;
            *(long *)((long)pvVar14 + uVar13 * 8) = lVar22;
          }
        }
      }
      *(byte *)(lVar22 + 0xe) = *(byte *)(lVar22 + 0xe) & 0xf | (byte)(iVar25 << 4);
      lVar22 = *(long *)(lVar22 + 0x58);
      if (lVar22 == 0) goto LAB_0010e878;
      lVar26 = *(long *)(param_3 + 0x180);
    } while( true );
  }
  goto LAB_0010e880;
LAB_0010e878:
  lVar16 = *(long *)(param_3 + 0x188);
LAB_0010e880:
  local_70 = local_70 + 1;
  uVar13 = *(ulong *)(lVar16 + 0x28);
  if ((int)uVar13 <= (int)local_70) {
    if (param_2 != 0) {
      return;
    }
    if (local_48 == 0) {
      return;
    }
    uVar15 = RenderingDevice::get_singleton();
    RenderingDevice::buffer_update
              (uVar15,*(undefined8 *)(this + 0x2ed8),0,local_48 * 0x90,
               *(undefined8 *)(this + 0x2ec8));
    return;
  }
  goto LAB_0010e3bd;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererSceneRenderImplementation::RenderForwardMobile::_render_shadow_append(RID,
   PagedArray<RenderGeometryInstance*> const&, Projection const&, Transform3D const&, float, float,
   float, bool, bool, bool, float, float, Rect2i const&, bool, bool, bool, bool,
   RenderingMethod::RenderInfo*, Transform3D const&) */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::_render_shadow_append
          (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined4 param_5,RenderForwardMobile *this,undefined8 param_7,long param_8,
          undefined8 *param_9,undefined1 (*param_10) [16],uint param_11,byte param_12,bool param_13,
          undefined8 *param_14,byte param_15,byte param_16,byte param_17,undefined8 param_18,
          long param_19,undefined1 (*param_20) [16])

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  undefined8 uVar8;
  undefined4 local_7f4;
  undefined8 local_778;
  undefined8 local_770;
  undefined8 local_768;
  undefined4 uStack_760;
  int iStack_75c;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  byte bStack_730;
  undefined7 uStack_72f;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  code *local_6e8 [47];
  undefined8 local_570;
  Object *local_568;
  long local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined1 local_528 [16];
  undefined1 local_518 [16];
  undefined1 local_508 [16];
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined4 local_4d8;
  undefined2 local_4d4;
  long local_4d0;
  undefined1 local_4c8;
  undefined8 local_4c4;
  undefined8 local_4bc;
  undefined8 local_4b0;
  undefined4 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined1 local_478 [16];
  undefined4 local_468;
  undefined8 local_460;
  undefined4 local_458;
  undefined **local_448 [46];
  undefined1 local_2d7;
  undefined1 local_2d4 [16];
  undefined1 local_2c4 [16];
  undefined4 local_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined8 local_2a4;
  undefined8 uStack_29c;
  undefined8 local_294;
  undefined8 uStack_28c;
  undefined8 local_284;
  undefined8 uStack_27c;
  undefined8 local_274;
  undefined8 uStack_26c;
  undefined8 local_264;
  undefined4 local_25c;
  undefined2 local_254;
  byte local_252;
  undefined1 local_250 [16];
  undefined1 local_240 [16];
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined8 local_21c;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_204;
  undefined8 uStack_1fc;
  undefined8 local_1f4;
  undefined8 uStack_1ec;
  undefined8 local_1e4;
  undefined8 uStack_1dc;
  undefined8 local_1d4;
  undefined8 uStack_1cc;
  Projection local_1c4 [64];
  undefined1 local_184 [16];
  undefined1 local_174 [16];
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_158;
  Projection local_154 [64];
  undefined8 local_114;
  Projection local_10c [64];
  Projection local_cc [64];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)(this + 0x2ee8);
  if (param_19 != 0) {
    uVar5 = (undefined4)*(undefined8 *)(param_8 + 0x28);
    *(undefined4 *)(param_19 + 0x14) = uVar5;
    *(undefined4 *)(param_19 + 0xc) = uVar5;
  }
  Object::Object((Object *)local_448);
  local_2d4 = ZEXT416(_LC74);
  local_2d7 = 0;
  local_448[0] = (undefined **)Vector2::operator_cast_to_Vector2i;
  local_2b4 = 0x3f800000;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  uStack_2a8 = 0;
  local_2c4 = local_2d4;
  Projection::Projection((Projection *)&local_2a4);
  local_250 = ZEXT416(_LC74);
  local_254 = 0;
  local_264 = 0;
  local_25c = 0;
  local_252 = 0;
  local_230 = 0x3f800000;
  uStack_22c = 0;
  uStack_228 = 0;
  uStack_224 = 0;
  local_220 = 1;
  local_21c = 0;
  local_214 = 0;
  local_210 = 0;
  local_208 = 0;
  local_240 = local_250;
  Projection::Projection((Projection *)&local_204);
  Projection::Projection(local_1c4);
  local_184 = ZEXT416(_LC74);
  local_164 = 0x3f800000;
  local_160 = 0;
  local_158 = 0;
  local_174 = local_184;
  Projection::Projection(local_154);
  local_114 = 0;
  Projection::Projection(local_10c);
  Projection::Projection(local_cc);
  local_8c = 0;
  local_2a4 = *param_9;
  uStack_29c = param_9[1];
  local_294 = param_9[2];
  uStack_28c = param_9[3];
  local_80 = 0;
  uStack_7c = 0;
  local_284 = param_9[4];
  uStack_27c = param_9[5];
  local_274 = param_9[6];
  uStack_26c = param_9[7];
  local_252 = param_15 ^ 1;
  local_2d4 = *param_10;
  local_70 = 0;
  local_2c4 = param_10[1];
  local_6c = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_2b4 = (undefined4)*(undefined8 *)param_10[2];
  uStack_2b0 = (undefined4)((ulong)*(undefined8 *)param_10[2] >> 0x20);
  uStack_2ac = (undefined4)*(undefined8 *)(param_10[2] + 8);
  uStack_2a8 = (undefined4)((ulong)*(undefined8 *)(param_10[2] + 8) >> 0x20);
  local_78 = _LC74;
  if (param_12 != 0) {
    local_78 = _LC219;
  }
  local_250 = *param_20;
  local_240 = param_20[1];
  local_74 = 0x3dcccccd;
  local_58 = CONCAT44((float)*(double *)(this + 0x170),(float)*(double *)(this + 0x168));
  local_230 = (undefined4)*(undefined8 *)param_20[2];
  uStack_22c = (undefined4)((ulong)*(undefined8 *)param_20[2] >> 0x20);
  uStack_228 = (undefined4)*(undefined8 *)(param_20[2] + 8);
  uStack_224 = (undefined4)((ulong)*(undefined8 *)(param_20[2] + 8) >> 0x20);
  local_204 = local_2a4;
  uStack_1fc = uStack_29c;
  local_1f4 = local_294;
  uStack_1ec = uStack_28c;
  local_1e4 = local_284;
  uStack_1dc = uStack_27c;
  local_1d4 = local_274;
  uStack_1cc = uStack_26c;
  local_88 = param_1;
  uStack_84 = param_4;
  Object::Object((Object *)local_6e8);
  local_570 = 0;
  local_6e8[0] = RendererSceneRender::is_environment;
  local_528 = (undefined1  [16])0x0;
  local_518 = (undefined1  [16])0x0;
  local_508 = (undefined1  [16])0x0;
  local_478 = (undefined1  [16])0x0;
  local_558 = 0;
  local_550 = 0;
  local_548 = 0;
  local_540 = 0;
  local_538 = 0;
  local_530 = 0;
  local_4f8 = 0;
  local_4f0 = 0;
  local_4e8 = 0;
  local_4e0 = 0;
  local_4d8 = 0;
  local_4d4 = 0;
  local_4c8 = 0;
  local_4c4 = 0;
  local_4bc = 0;
  local_4b0 = 0;
  local_4a8 = 0;
  local_4a0 = 0;
  local_498 = 0;
  local_490 = 0;
  local_488 = 0;
  local_480 = 0;
  local_468 = 0;
  local_460 = 0;
  local_458 = 0;
  local_4d0 = param_19;
  local_728 = __LC138;
  uStack_720 = _UNK_0012a0f8;
  local_778 = _LC81;
  local_568 = (Object *)local_448;
  local_560 = param_8;
  local_770 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_778);
  _setup_environment(this,(RenderDataRD *)local_6e8,true,(Vector2i *)&local_770,(Color *)&local_728,
                     false,param_13,iVar2);
  local_7f4 = param_5;
  if (*(int *)(this + 0x2438) == 0x13) {
    local_7f4 = 0;
  }
  uVar3 = *(uint *)(this + 0x2f38);
  iVar2 = (param_11 & 0xff) + 2;
  local_80 = local_7f4;
  _fill_render_list(this,2,(Object *)local_6e8,iVar2,1);
  uVar6 = *(int *)(this + 0x2f38) - uVar3;
  uVar8 = CONCAT44(uVar6,uVar3);
  RenderList::sort_by_key_range((RenderList *)(this + 0x2f38),uVar3,uVar6);
  _fill_instance_data(this,2,uVar3,uVar6,1);
  local_758 = 0;
  if (param_15 != 0) {
    param_12 = param_12 ^ 1;
  }
  pvVar4 = *(void **)(this + 0x2ef0);
  uStack_740 = *param_14;
  uStack_738 = param_14[1];
  uStack_760 = CONCAT31(uStack_760._1_3_,param_12);
  uStack_750 = CONCAT44(local_80,uStack_84);
  uStack_720 = CONCAT44(iVar2,uStack_760);
  bStack_730 = param_17 | param_16;
  uVar3 = *(uint *)(this + 0x2ee8);
  uStack_6f0 = CONCAT71(uStack_72f,bStack_730);
  local_718 = 0;
  local_768 = uVar8;
  iStack_75c = iVar2;
  local_748 = param_7;
  local_728 = uVar8;
  uStack_710 = uStack_750;
  local_708 = param_7;
  uStack_700 = uStack_740;
  local_6f8 = uStack_738;
  if (uVar3 == *(uint *)(this + 0x2eec)) {
    uVar3 = uVar3 * 2;
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    *(uint *)(this + 0x2eec) = uVar3;
    pvVar4 = (void *)Memory::realloc_static(pvVar4,(ulong)uVar3 << 6,false);
    *(void **)(this + 0x2ef0) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar3 = *(uint *)(this + 0x2ee8);
  }
  puVar7 = (undefined8 *)((long)pvVar4 + (ulong)uVar3 * 0x40);
  *(uint *)(this + 0x2ee8) = uVar3 + 1;
  *puVar7 = local_728;
  puVar7[1] = uStack_720;
  puVar7[2] = local_718;
  puVar7[3] = uStack_710;
  puVar7[4] = local_708;
  puVar7[5] = uStack_700;
  puVar7[6] = local_6f8;
  puVar7[7] = uStack_6f0;
  RenderDataRD::~RenderDataRD((RenderDataRD *)local_6e8);
  local_448[0] = (undefined **)Vector2::operator_cast_to_Vector2i;
  Projection::~Projection(local_cc);
  Projection::~Projection(local_10c);
  Projection::~Projection(local_154);
  Projection::~Projection(local_1c4);
  Projection::~Projection((Projection *)&local_204);
  Projection::~Projection((Projection *)&local_2a4);
  local_448[0] = &PTR__initialize_classv_00129358;
  Object::~Object((Object *)local_448);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererSceneRenderImplementation::RenderForwardMobile::_render_list(long, long,
   RendererSceneRenderImplementation::RenderForwardMobile::RenderListParameters*, unsigned int,
   unsigned int) */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::_render_list
          (RenderForwardMobile *this,long param_1,long param_2,RenderListParameters *param_3,
          uint param_4,uint param_5)

{
  char *pcVar1;
  RenderListParameters RVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  char cVar7;
  char cVar8;
  ushort uVar9;
  uint uVar10;
  undefined4 uVar11;
  Version *pVVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  bool bVar25;
  byte bVar26;
  uint uVar27;
  ulong uVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long in_FS_OFFSET;
  uint local_1d8;
  ulong local_1c8;
  long local_1c0;
  long local_1b0;
  ulong local_1a0;
  byte local_198;
  byte local_190;
  byte local_188;
  byte local_180;
  byte local_178;
  uint local_148;
  byte local_144;
  long local_140;
  long local_130;
  long local_128;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  uint local_90;
  undefined4 uStack_8c;
  uint uStack_88;
  uint uStack_84;
  undefined8 local_78;
  int local_70;
  ulong local_68;
  undefined8 local_60;
  byte local_58;
  undefined1 auStack_57 [15];
  long local_40;
  
  uVar21 = *(uint *)(param_3 + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar25 = SUB81(param_1,0);
  local_1d8 = param_4;
  switch(uVar21) {
  case 0:
    pVVar12 = (Version *)RendererRD::MeshStorage::get_singleton();
    uVar13 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_bind_uniform_set(uVar13,param_1,*(undefined8 *)(this + 0x2bf0),0);
    uVar13 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_bind_uniform_set(uVar13,param_1,*(undefined8 *)(param_3 + 0x20),1);
    uVar13 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_bind_uniform_set(uVar13,param_1,*(undefined8 *)(this + 0x2b80));
    local_a0 = (undefined1  [16])0x0;
    local_a8 = _LC211;
    iVar3 = *(int *)(param_3 + 0x18);
    local_90 = (uint)__LC213;
    uStack_8c = (undefined4)((ulong)__LC213 >> 0x20);
    uStack_88 = (uint)_UNK_0012a118;
    uStack_84 = (uint)((ulong)_UNK_0012a118 >> 0x20);
    if (param_5 <= param_4) goto switchD_0010f585_default;
    local_140 = (ulong)param_4 << 2;
    cVar7 = '\0';
    local_e8 = 0;
    local_d0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    local_1c0 = 0;
    local_148 = uVar21;
    do {
      lVar34 = *(long *)(param_3 + 8);
      lVar20 = *(long *)(*(long *)param_3 + local_140 * 2);
      lVar33 = *(long *)(lVar20 + 0x60);
      if (*(int *)(lVar33 + 0xbc) != 0) {
        local_1c8 = *(ulong *)(param_3 + 0x34);
        uVar13 = *(undefined8 *)(param_3 + 0x3c);
        local_198 = (byte)param_3[0x34] & 1;
        RVar2 = param_3[0x3a];
        uVar24 = (byte)param_3[0x34] >> 1 & 1;
        local_190 = (byte)param_3[0x39] >> 4;
        local_180 = (byte)RVar2 >> 4;
        uVar22 = *(uint *)(lVar33 + 0xc);
        local_78 = 0;
        local_178 = (byte)param_3[0x3b] >> 4;
        bVar29 = (byte)(uVar22 >> 0xc) & 1;
        bVar30 = (byte)(uVar22 >> 0xd) & 1;
        bVar31 = (byte)(uVar22 >> 0xe) & 1;
        bVar32 = (byte)(uVar22 >> 0xf) & 1;
        local_70 = local_1d8 + *(int *)(param_3 + 0x58);
        if (iVar3 - 2U < 2) {
          local_130 = *(long *)(lVar20 + 0x48);
          lVar33 = *(long *)(lVar20 + 0x50);
          local_1a0 = *(ulong *)(lVar20 + 0x40);
        }
        else {
          local_198 = *(byte *)(lVar33 + 0xb8);
          uVar24 = (uint)*(byte *)(lVar33 + 0xb9);
          local_190 = *(byte *)(lVar33 + 0x114) & 0xf;
          RVar2 = *(RenderListParameters *)(lVar33 + 0x138);
          local_180 = *(byte *)(lVar33 + 0xf0) & 0xf;
          local_178 = (byte)*(undefined4 *)(lVar33 + 0x15c) & 0xf;
          iVar4 = *(int *)(this + 0x2438);
          if (iVar4 == 2) {
            local_130 = *(long *)(this + 0x2b90);
            lVar33 = *(long *)(this + 0x2b98);
          }
          else if (iVar4 == 3) {
            local_130 = *(long *)(this + 0x2ba0);
            lVar33 = *(long *)(this + 0x2ba8);
          }
          else if (iVar4 == 0xe) {
            local_130 = *(long *)(this + 0x2bb0);
            lVar33 = *(long *)(this + 0x2bb8);
          }
          else {
            local_130 = *(long *)(lVar20 + 0x28);
            lVar33 = *(long *)(lVar20 + 0x30);
            RendererRD::MaterialStorage::MaterialData::set_as_used();
          }
          local_1a0 = *(ulong *)(lVar20 + 0x20);
        }
        local_188 = (byte)RVar2 & 0xf;
        if (local_1a0 != 0) {
          uVar22 = *(uint *)(param_3 + 0x18);
          uVar11 = *(undefined4 *)(lVar20 + 0x10);
          cVar8 = *(char *)(lVar33 + 0x23d);
          if (*(char *)(lVar33 + 0x23d) == '\0') {
            cVar8 = cVar7;
          }
          lVar35 = *(long *)(lVar20 + 0x60);
          lVar5 = *(long *)(lVar35 + 0xb0);
          uVar10 = uVar22;
          if (uVar22 == 4) {
            local_a8 = CONCAT44(uVar11,(undefined4)local_a8);
            if (1 < *(uint *)(param_3 + 0x1c)) goto LAB_00113bc5;
            local_90 = 4;
            bVar26 = 2;
          }
          else if (uVar22 - 2 < 2) {
            bVar26 = 2;
            if (((*(byte *)(lVar20 + 0x15) & 0x80) == 0) &&
               (bVar26 = *(byte *)(lVar35 + 0x50), param_3[0x14] != (RenderListParameters)0x0)) {
              bVar26 = bVar26 ^ 1;
            }
            local_a8 = CONCAT44(uVar11,(undefined4)local_a8);
            if (uVar22 == 2) {
              local_90 = uVar22;
              if (1 < *(uint *)(param_3 + 0x1c)) {
                uVar10 = 7;
                local_90 = 7;
              }
            }
            else {
              if (1 < *(uint *)(param_3 + 0x1c)) goto LAB_00113bfc;
              local_90 = 3;
              uVar10 = 3;
            }
          }
          else {
            bVar26 = *(byte *)(lVar35 + 0x50);
            if (param_3[0x14] != (RenderListParameters)0x0) {
              bVar26 = bVar26 ^ 1;
            }
            uVar10 = local_90;
            if (uVar22 < 3) {
              if ((*(ushort *)(local_140 + lVar34) & 1) == 0) {
                uVar10 = 5;
                local_90 = 5;
                if (*(uint *)(param_3 + 0x1c) < 2) {
                  uVar10 = uVar21;
                  local_90 = uVar21;
                }
              }
              else {
                uVar10 = (-(uint)(*(uint *)(param_3 + 0x1c) < 2) & 0xfffffffb) + 6;
                local_90 = uVar10;
              }
            }
          }
          local_a8 = CONCAT44(uVar11,(undefined4)local_a8);
          uStack_8c = *(undefined4 *)(param_3 + 0x5c);
          uStack_84 = 0;
          lVar35 = -1;
          uStack_88 = (uint)(byte)param_3[0x28];
          local_b0 = param_2;
          uVar11 = RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::
                   get_cull_mode_from_cull_variant(lVar33,bVar26);
          local_1b0 = 0;
          uVar22 = uVar21;
          do {
            lVar14 = RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::
                     get_vertex_input_mask(lVar33,uVar10,uVar22);
            uVar17 = *(ulong *)(*(long *)(lVar20 + 0x60) + 0x18);
            if (uVar17 == 0) {
              pcVar1 = (char *)(local_1a0 + 0x34);
              while( true ) {
                LOCK();
                cVar7 = *pcVar1;
                if (cVar7 == '\0') {
                  *pcVar1 = '\x01';
                }
                UNLOCK();
                if (cVar7 == '\0') break;
                do {
                } while (*pcVar1 != '\0');
              }
              uVar22 = *(uint *)(local_1a0 + 0x80);
              plVar15 = *(long **)(local_1a0 + 0x78);
              if (uVar22 == 0) {
                uVar17 = 0x28;
                uVar22 = 1;
                lVar35 = 0;
              }
              else {
                lVar35 = (ulong)uVar22 * 0x28;
                plVar18 = plVar15;
                do {
                  if ((lVar14 == *plVar18) && ((char)plVar18[2] == '\0')) {
                    lVar35 = plVar18[3];
                    local_1b0 = plVar18[4];
                    *pcVar1 = '\0';
                    goto LAB_00110a8e;
                  }
                  plVar18 = plVar18 + 5;
                } while (plVar18 != plVar15 + (ulong)uVar22 * 5);
                uVar22 = uVar22 + 1;
                uVar17 = (ulong)uVar22 * 0x28;
              }
              *(uint *)(local_1a0 + 0x80) = uVar22;
              lVar23 = Memory::realloc_static(plVar15,uVar17,false);
              *(long *)(local_1a0 + 0x78) = lVar23;
              RendererRD::MeshStorage::_mesh_surface_generate_version_for_input_mask
                        (pVVar12,(Surface *)(lVar23 + lVar35),local_1a0,SUB81(lVar14,0),
                         (Surface *)0x0,0,0);
              lVar35 = lVar35 + *(long *)(local_1a0 + 0x78);
              local_1b0 = *(long *)(lVar35 + 0x20);
              lVar35 = *(long *)(lVar35 + 0x18);
              *pcVar1 = '\0';
            }
            else {
              uVar28 = (ulong)*(uint *)(lVar20 + 0x18);
              if ((uint)uVar17 < *(uint *)(pVVar12 + 0x124)) {
                plVar15 = (long *)(((uVar17 & 0xffffffff) % (ulong)*(uint *)(pVVar12 + 0x120)) *
                                   0xb0 + *(long *)(*(long *)(pVVar12 + 0x110) +
                                                   ((uVar17 & 0xffffffff) /
                                                   (ulong)*(uint *)(pVVar12 + 0x120)) * 8));
                if ((int)plVar15[0x15] == (int)(uVar17 >> 0x20)) {
                  uVar17 = (ulong)*(uint *)(*plVar15 + 0x10);
                  if (uVar28 < uVar17) {
                    uVar17 = (ulong)*(uint *)(plVar15 + 2);
                    if (*(uint *)(plVar15 + 2) <= *(uint *)(lVar20 + 0x18)) {
LAB_00110dc2:
                      _err_print_index_error
                                ("operator[]","./core/templates/local_vector.h",0xb2,uVar28,uVar17,
                                 "p_index","count","",false,true);
                      _err_flush_stdout();
                    /* WARNING: Does not return */
                      pcVar6 = (code *)invalidInstructionException();
                      (*pcVar6)();
                    }
                    lVar35 = uVar28 * 0x40 + plVar15[3];
                    uVar22 = *(uint *)(lVar35 + 0x20);
                    uVar17 = *(ulong *)(*(long *)(*plVar15 + 8) + uVar28 * 8);
                    pcVar1 = (char *)(uVar17 + 0x34);
                    while( true ) {
                      LOCK();
                      cVar7 = *pcVar1;
                      if (cVar7 == '\0') {
                        *pcVar1 = '\x01';
                      }
                      UNLOCK();
                      if (cVar7 == '\0') break;
                      do {
                      } while (*pcVar1 != '\0');
                    }
                    uVar10 = *(uint *)(lVar35 + 0x38);
                    plVar15 = *(long **)(lVar35 + 0x30);
                    if (uVar10 == 0) {
                      lVar23 = 0;
                      uVar28 = 0x28;
                      uVar10 = 1;
                    }
                    else {
                      lVar23 = (ulong)uVar10 * 0x28;
                      plVar18 = plVar15;
                      do {
                        if ((((lVar14 == *plVar18) && ((char)plVar18[2] == '\0')) &&
                            (uVar22 == *(uint *)(plVar18 + 1))) &&
                           (uVar22 == *(uint *)((long)plVar18 + 0xc))) {
                          lVar35 = plVar18[3];
                          local_1b0 = plVar18[4];
                          *(undefined1 *)(uVar17 + 0x34) = 0;
                          goto LAB_00110a8e;
                        }
                        plVar18 = plVar18 + 5;
                      } while (plVar18 != plVar15 + (ulong)uVar10 * 5);
                      uVar10 = uVar10 + 1;
                      uVar28 = (ulong)uVar10 * 0x28;
                    }
                    *(uint *)(lVar35 + 0x38) = uVar10;
                    lVar16 = Memory::realloc_static(plVar15,uVar28,false);
                    *(long *)(lVar35 + 0x30) = lVar16;
                    RendererRD::MeshStorage::_mesh_surface_generate_version_for_input_mask
                              (pVVar12,(Surface *)(lVar16 + lVar23),uVar17,SUB81(lVar14,0),
                               (Surface *)0x0,(uint)lVar35,uVar22);
                    lVar23 = lVar23 + *(long *)(lVar35 + 0x30);
                    local_1b0 = *(long *)(lVar23 + 0x20);
                    lVar35 = *(long *)(lVar23 + 0x18);
                    *(undefined1 *)(uVar17 + 0x34) = 0;
                  }
                  else {
                    _err_print_index_error
                              ("mesh_instance_surface_get_vertex_arrays_and_format",
                               "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x213,
                               uVar28,uVar17,"p_surface_index","mesh->surface_count","",false,false)
                    ;
                  }
                  goto LAB_00110a8e;
                }
                if ((int)plVar15[0x15] + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0);
                }
              }
              _err_print_error("mesh_instance_surface_get_vertex_arrays_and_format",
                               "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x211);
            }
LAB_00110a8e:
            uVar22 = uStack_84;
            cVar7 = cVar8;
            local_b8 = lVar35;
            if (uStack_84 != 0) {
              local_a8 = (ulong)local_a8._4_4_ << 0x20;
              local_a0 = (undefined1  [16])0x0;
              uVar10 = SceneShaderForwardMobile::ShaderData::PipelineKey::hash
                                 ((PipelineKey *)&local_b8);
              if ((local_148 != uVar10) || (lVar33 != local_1c0)) goto LAB_00110aff;
LAB_0011358e:
              lVar14 = 0;
              lVar33 = local_1c0;
              uVar10 = local_148;
LAB_001135ac:
              uVar9 = *(ushort *)(local_140 + lVar34) >> 1;
              if ((uVar9 & 0xff) == 0) {
                lVar34 = *(long *)(local_1a0 + 0x90);
              }
              else {
                lVar34 = *(long *)((ulong)((uVar9 & 0xff) - 1) * 0x18 + *(long *)(local_1a0 + 0xa0)
                                  + 0x10);
              }
              if (local_1b0 != local_e0) {
                uVar19 = RenderingDevice::get_singleton();
                RenderingDevice::draw_list_bind_vertex_array(uVar19,param_1,local_1b0);
              }
              if ((lVar34 != local_d8) && (lVar34 != 0)) {
                uVar19 = RenderingDevice::get_singleton();
                RenderingDevice::draw_list_bind_index_array(uVar19,param_1,lVar34);
              }
              if (lVar14 != 0) {
                uVar19 = RenderingDevice::get_singleton();
                RenderingDevice::draw_list_bind_render_pipeline(uVar19,param_1,lVar14);
              }
              if ((lVar5 != 0) && (local_d0 != lVar5)) {
                uVar19 = RenderingDevice::get_singleton();
                RenderingDevice::draw_list_bind_uniform_set(uVar19,param_1,lVar5,2);
                local_d0 = lVar5;
              }
              if ((local_130 != local_e8) && (local_130 != 0)) {
                uVar19 = RenderingDevice::get_singleton();
                cVar8 = RenderingDevice::uniform_set_is_valid(uVar19,local_130);
                if (cVar8 != '\0') {
                  uVar19 = RenderingDevice::get_singleton();
                  RenderingDevice::draw_list_bind_uniform_set(uVar19,param_1,local_130,3);
                }
              }
              if (uStack_84 != 0) {
                local_1c8 = local_1c8 & 0xfffffffffffffffc;
                local_68 = CONCAT62((int6)(local_1c8 >> 0x10),
                                    CONCAT11((char)(local_1c8 >> 8),
                                             (byte)local_1c8 | local_198 & 1 |
                                             ((byte)uVar24 & 1) * '\x02')) & 0xf000fffffff87ff |
                           (ulong)bVar29 << 0xb | (ulong)bVar30 << 0xc | (ulong)bVar31 << 0xd |
                           (ulong)bVar32 << 0xe | (ulong)local_190 << 0x2c |
                           (ulong)local_188 << 0x30 | (ulong)local_180 << 0x34 |
                           (ulong)local_178 << 0x3c;
                local_144 = (byte)uVar11;
                auStack_57 = SUB1615((undefined1  [16])0x0,1);
                local_58 = local_144 & 3;
                local_60 = uVar13;
              }
              lVar35 = RenderingDevice::get_singleton();
              RenderingDevice::draw_list_set_push_constant(lVar35,(void *)param_1,(uint)&local_78);
              lVar35 = *(long *)(lVar20 + 0x60);
              uVar22 = *(uint *)(lVar35 + 0xbc);
              if (*(uint *)(lVar35 + 0xbc) == 0) {
                uVar22 = 1;
              }
              if ((*(byte *)(lVar20 + 0x16) & 1) != 0) {
                uVar22 = uVar22 / *(uint *)(lVar35 + 0xc0);
              }
              if ((*(byte *)(lVar35 + 8) & 4) == 0) {
                lVar20 = RenderingDevice::get_singleton();
                RenderingDevice::draw_list_draw(lVar20,bVar25,(uint)(lVar34 != 0),uVar22);
              }
              else {
                uVar13 = RenderingDevice::get_singleton();
                iVar4 = *(int *)(lVar20 + 0x18);
                uVar19 = (**(code **)(*(long *)pVVar12 + 0x278))
                                   (pVVar12,**(undefined8 **)(*(long *)(lVar20 + 0x60) + 0xa8));
                RenderingDevice::draw_list_draw_indirect
                          (uVar13,param_1,(uint)(lVar34 != 0),uVar19,iVar4 * 0x14,1,0);
              }
              local_e0 = local_1b0;
              local_e8 = local_130;
              local_1c0 = lVar33;
              local_148 = uVar10;
              local_d8 = lVar34;
              break;
            }
            local_1c8 = local_1c8 & 0xf000fffffff87fc | (ulong)(local_198 & 1) |
                        (ulong)(uVar24 & 1) * 2 | (ulong)bVar29 << 0xb | (ulong)bVar30 << 0xc |
                        (ulong)bVar31 << 0xd | (ulong)bVar32 << 0xe | (ulong)local_190 << 0x2c |
                        (ulong)local_188 << 0x30 | (ulong)local_180 << 0x34 |
                        (ulong)local_178 << 0x3c;
            local_a0._8_8_ = uVar13;
            local_a0._0_8_ = local_1c8;
            local_a8 = CONCAT44(local_a8._4_4_,uVar11);
            uVar10 = SceneShaderForwardMobile::ShaderData::PipelineKey::hash
                               ((PipelineKey *)&local_b8);
            if ((local_148 == uVar10) && (lVar33 == local_1c0)) goto LAB_0011358e;
LAB_00110aff:
            lVar14 = PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
                     ::get_pipeline((PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
                                     *)(lVar33 + 0x70),&local_b8,uVar10,uVar22 != 0);
            if (lVar14 != 0) goto LAB_001135ac;
            uStack_84 = uVar22 + 1;
            uVar10 = local_90;
            uVar22 = uStack_84;
          } while (uStack_84 < 2);
        }
      }
      local_1d8 = local_1d8 + 1;
      local_140 = local_140 + 4;
    } while (param_5 != local_1d8);
    break;
  case 1:
    pVVar12 = (Version *)RendererRD::MeshStorage::get_singleton();
    uVar13 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_bind_uniform_set(uVar13,param_1,*(undefined8 *)(this + 0x2bf0),0);
    uVar13 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_bind_uniform_set(uVar13,param_1,*(undefined8 *)(param_3 + 0x20),1);
    uVar13 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_bind_uniform_set(uVar13,param_1,*(undefined8 *)(this + 0x2b80));
    local_a0 = (undefined1  [16])0x0;
    local_a8 = _LC211;
    iVar3 = *(int *)(param_3 + 0x18);
    local_90 = (uint)__LC213;
    uStack_8c = (undefined4)((ulong)__LC213 >> 0x20);
    uStack_88 = (uint)_UNK_0012a118;
    uStack_84 = (uint)((ulong)_UNK_0012a118 >> 0x20);
    if (param_5 <= param_4) goto switchD_0010f585_default;
    local_140 = (ulong)param_4 << 2;
    cVar7 = '\0';
    local_e8 = 0;
    local_d0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    local_148 = 0;
    local_1c0 = 0;
    do {
      lVar34 = *(long *)(param_3 + 8);
      lVar20 = *(long *)(*(long *)param_3 + local_140 * 2);
      lVar33 = *(long *)(lVar20 + 0x60);
      if (*(int *)(lVar33 + 0xbc) != 0) {
        local_1c8 = *(ulong *)(param_3 + 0x34);
        uVar13 = *(undefined8 *)(param_3 + 0x3c);
        local_198 = (byte)param_3[0x34] & 1;
        RVar2 = param_3[0x3a];
        uVar24 = (byte)param_3[0x34] >> 1 & 1;
        local_190 = (byte)param_3[0x39] >> 4;
        local_180 = (byte)RVar2 >> 4;
        uVar22 = *(uint *)(lVar33 + 0xc);
        local_78 = 0;
        local_178 = (byte)param_3[0x3b] >> 4;
        bVar29 = (byte)(uVar22 >> 0xc) & 1;
        bVar30 = (byte)(uVar22 >> 0xd) & 1;
        bVar31 = (byte)(uVar22 >> 0xe) & 1;
        bVar32 = (byte)(uVar22 >> 0xf) & 1;
        local_70 = local_1d8 + *(int *)(param_3 + 0x58);
        if (iVar3 - 2U < 2) {
          local_130 = *(long *)(lVar20 + 0x48);
          lVar33 = *(long *)(lVar20 + 0x50);
          local_1a0 = *(ulong *)(lVar20 + 0x40);
        }
        else {
          local_198 = *(byte *)(lVar33 + 0xb8);
          uVar24 = (uint)*(byte *)(lVar33 + 0xb9);
          local_190 = *(byte *)(lVar33 + 0x114) & 0xf;
          RVar2 = *(RenderListParameters *)(lVar33 + 0x138);
          local_180 = *(byte *)(lVar33 + 0xf0) & 0xf;
          local_178 = (byte)*(undefined4 *)(lVar33 + 0x15c) & 0xf;
          iVar4 = *(int *)(this + 0x2438);
          if (iVar4 == 2) {
            local_130 = *(long *)(this + 0x2b90);
            lVar33 = *(long *)(this + 0x2b98);
          }
          else if (iVar4 == 3) {
            local_130 = *(long *)(this + 0x2ba0);
            lVar33 = *(long *)(this + 0x2ba8);
          }
          else if (iVar4 == 0xe) {
            local_130 = *(long *)(this + 0x2bb0);
            lVar33 = *(long *)(this + 0x2bb8);
          }
          else {
            local_130 = *(long *)(lVar20 + 0x28);
            lVar33 = *(long *)(lVar20 + 0x30);
            RendererRD::MaterialStorage::MaterialData::set_as_used();
          }
          local_1a0 = *(ulong *)(lVar20 + 0x20);
        }
        local_188 = (byte)RVar2 & 0xf;
        if (local_1a0 != 0) {
          uVar11 = *(undefined4 *)(lVar20 + 0x10);
          cVar8 = *(char *)(lVar33 + 0x23d);
          if (*(char *)(lVar33 + 0x23d) == '\0') {
            cVar8 = cVar7;
          }
          uVar22 = *(uint *)(param_3 + 0x18);
          lVar35 = *(long *)(lVar20 + 0x60);
          lVar5 = *(long *)(lVar35 + 0xb0);
          uVar10 = uVar22;
          if (uVar22 == 4) {
            local_a8 = CONCAT44(uVar11,(undefined4)local_a8);
            if (1 < *(uint *)(param_3 + 0x1c)) goto LAB_00113bc5;
            local_90 = 4;
            bVar26 = 2;
          }
          else if (uVar22 - 2 < 2) {
            bVar26 = 2;
            if (((*(byte *)(lVar20 + 0x15) & 0x80) == 0) &&
               (bVar26 = *(byte *)(lVar35 + 0x50), param_3[0x14] != (RenderListParameters)0x0)) {
              bVar26 = bVar26 ^ 1;
            }
            local_a8 = CONCAT44(uVar11,(undefined4)local_a8);
            if (uVar22 == 2) {
              local_90 = uVar22;
              if (1 < *(uint *)(param_3 + 0x1c)) {
                local_90 = 7;
                uVar10 = 7;
              }
            }
            else {
              if (1 < *(uint *)(param_3 + 0x1c)) goto LAB_00113bfc;
              local_90 = 3;
              uVar10 = 3;
            }
          }
          else {
            bVar26 = *(byte *)(lVar35 + 0x50);
            if (param_3[0x14] != (RenderListParameters)0x0) {
              bVar26 = bVar26 ^ 1;
            }
            uVar10 = local_90;
            if (uVar22 < 3) {
              if ((*(ushort *)(local_140 + lVar34) & 1) == 0) {
                local_90 = ~-(uint)(*(uint *)(param_3 + 0x1c) < 2) & 5;
                uVar10 = local_90;
              }
              else {
                local_90 = 6;
                uVar10 = 6;
                if (*(uint *)(param_3 + 0x1c) < 2) {
                  local_90 = uVar21;
                  uVar10 = uVar21;
                }
              }
            }
          }
          local_a8 = CONCAT44(uVar11,(undefined4)local_a8);
          uStack_8c = *(undefined4 *)(param_3 + 0x5c);
          lVar35 = -1;
          uStack_84 = 0;
          uStack_88 = (uint)(byte)param_3[0x28];
          local_b0 = param_2;
          uVar11 = RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::
                   get_cull_mode_from_cull_variant(lVar33,bVar26);
          local_1b0 = 0;
          uVar22 = 0;
LAB_00112170:
          lVar14 = RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::
                   get_vertex_input_mask(lVar33,uVar10,uVar22);
          uVar17 = *(ulong *)(*(long *)(lVar20 + 0x60) + 0x18);
          if (uVar17 == 0) {
            pcVar1 = (char *)(local_1a0 + 0x34);
            while( true ) {
              LOCK();
              cVar7 = *pcVar1;
              if (cVar7 == '\0') {
                *pcVar1 = '\x01';
              }
              UNLOCK();
              if (cVar7 == '\0') break;
              do {
              } while (*pcVar1 != '\0');
            }
            uVar22 = *(uint *)(local_1a0 + 0x80);
            plVar15 = *(long **)(local_1a0 + 0x78);
            if (uVar22 == 0) {
              uVar17 = 0x28;
              lVar35 = 0;
              uVar22 = uVar21;
            }
            else {
              lVar35 = (ulong)uVar22 * 0x28;
              plVar18 = plVar15;
              do {
                if ((lVar14 == *plVar18) && ((char)plVar18[2] == '\0')) {
                  lVar35 = plVar18[3];
                  local_1b0 = plVar18[4];
                  *pcVar1 = '\0';
                  goto LAB_001122ee;
                }
                plVar18 = plVar18 + 5;
              } while (plVar18 != plVar15 + (ulong)uVar22 * 5);
              uVar17 = (ulong)(uVar22 + 1) * 0x28;
              uVar22 = uVar22 + 1;
            }
            *(uint *)(local_1a0 + 0x80) = uVar22;
            lVar23 = Memory::realloc_static(plVar15,uVar17,false);
            *(long *)(local_1a0 + 0x78) = lVar23;
            RendererRD::MeshStorage::_mesh_surface_generate_version_for_input_mask
                      (pVVar12,(Surface *)(lVar23 + lVar35),local_1a0,SUB81(lVar14,0),(Surface *)0x0
                       ,0,0);
            lVar35 = lVar35 + *(long *)(local_1a0 + 0x78);
            local_1b0 = *(long *)(lVar35 + 0x20);
            lVar35 = *(long *)(lVar35 + 0x18);
            *pcVar1 = '\0';
          }
          else {
            uVar28 = (ulong)*(uint *)(lVar20 + 0x18);
            if ((uint)uVar17 < *(uint *)(pVVar12 + 0x124)) {
              plVar15 = (long *)(((uVar17 & 0xffffffff) % (ulong)*(uint *)(pVVar12 + 0x120)) * 0xb0
                                + *(long *)(*(long *)(pVVar12 + 0x110) +
                                           ((uVar17 & 0xffffffff) /
                                           (ulong)*(uint *)(pVVar12 + 0x120)) * 8));
              if ((int)plVar15[0x15] == (int)(uVar17 >> 0x20)) {
                uVar17 = (ulong)*(uint *)(*plVar15 + 0x10);
                if (uVar28 < uVar17) {
                  uVar17 = (ulong)*(uint *)(plVar15 + 2);
                  if (*(uint *)(lVar20 + 0x18) < *(uint *)(plVar15 + 2)) {
                    lVar35 = uVar28 * 0x40 + plVar15[3];
                    uVar22 = *(uint *)(lVar35 + 0x20);
                    uVar17 = *(ulong *)(*(long *)(*plVar15 + 8) + uVar28 * 8);
                    pcVar1 = (char *)(uVar17 + 0x34);
                    while( true ) {
                      LOCK();
                      cVar7 = *pcVar1;
                      if (cVar7 == '\0') {
                        *pcVar1 = '\x01';
                      }
                      UNLOCK();
                      if (cVar7 == '\0') break;
                      do {
                      } while (*pcVar1 != '\0');
                    }
                    uVar10 = *(uint *)(lVar35 + 0x38);
                    plVar15 = *(long **)(lVar35 + 0x30);
                    if (uVar10 == 0) {
                      lVar23 = 0;
                      uVar28 = 0x28;
                      uVar10 = uVar21;
                    }
                    else {
                      lVar23 = (ulong)uVar10 * 0x28;
                      plVar18 = plVar15;
                      do {
                        if ((((lVar14 == *plVar18) && ((char)plVar18[2] == '\0')) &&
                            (uVar22 == *(uint *)(plVar18 + 1))) &&
                           (uVar22 == *(uint *)((long)plVar18 + 0xc))) {
                          lVar35 = plVar18[3];
                          local_1b0 = plVar18[4];
                          *(undefined1 *)(uVar17 + 0x34) = 0;
                          goto LAB_001122ee;
                        }
                        plVar18 = plVar18 + 5;
                      } while (plVar15 + (ulong)uVar10 * 5 != plVar18);
                      uVar28 = (ulong)(uVar10 + 1) * 0x28;
                      uVar10 = uVar10 + 1;
                    }
                    *(uint *)(lVar35 + 0x38) = uVar10;
                    lVar16 = Memory::realloc_static(plVar15,uVar28,false);
                    *(long *)(lVar35 + 0x30) = lVar16;
                    RendererRD::MeshStorage::_mesh_surface_generate_version_for_input_mask
                              (pVVar12,(Surface *)(lVar16 + lVar23),uVar17,SUB81(lVar14,0),
                               (Surface *)0x0,(uint)lVar35,uVar22);
                    lVar23 = lVar23 + *(long *)(lVar35 + 0x30);
                    local_1b0 = *(long *)(lVar23 + 0x20);
                    lVar35 = *(long *)(lVar23 + 0x18);
                    *(undefined1 *)(uVar17 + 0x34) = 0;
                    goto LAB_001122ee;
                  }
                  goto LAB_00110dc2;
                }
                _err_print_index_error
                          ("mesh_instance_surface_get_vertex_arrays_and_format",
                           "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x213,uVar28,
                           uVar17,"p_surface_index","mesh->surface_count","",false,false);
                goto LAB_001122ee;
              }
              if ((int)plVar15[0x15] + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
            }
            _err_print_error("mesh_instance_surface_get_vertex_arrays_and_format",
                             "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x211);
          }
LAB_001122ee:
          uVar22 = uStack_84;
          cVar7 = cVar8;
          local_b8 = lVar35;
          if (uStack_84 != 0) {
            local_a8 = (ulong)local_a8._4_4_ << 0x20;
            local_a0 = (undefined1  [16])0x0;
            uVar10 = SceneShaderForwardMobile::ShaderData::PipelineKey::hash
                               ((PipelineKey *)&local_b8);
            if ((local_148 != uVar10) || (lVar33 != local_1c0)) goto LAB_0011235f;
LAB_00112f0f:
            lVar14 = 0;
            lVar33 = local_1c0;
            uVar10 = local_148;
LAB_00112f2d:
            local_148 = uVar10;
            uVar9 = *(ushort *)(local_140 + lVar34) >> 1;
            if ((uVar9 & 0xff) == 0) {
              lVar34 = *(long *)(local_1a0 + 0x90);
            }
            else {
              lVar34 = *(long *)((ulong)((uVar9 & 0xff) - 1) * 0x18 + *(long *)(local_1a0 + 0xa0) +
                                0x10);
            }
            if (local_1b0 != local_e0) {
              uVar19 = RenderingDevice::get_singleton();
              RenderingDevice::draw_list_bind_vertex_array(uVar19,param_1,local_1b0);
            }
            if ((lVar34 != local_d8) && (lVar34 != 0)) {
              uVar19 = RenderingDevice::get_singleton();
              RenderingDevice::draw_list_bind_index_array(uVar19,param_1,lVar34);
            }
            if (lVar14 != 0) {
              uVar19 = RenderingDevice::get_singleton();
              RenderingDevice::draw_list_bind_render_pipeline(uVar19,param_1,lVar14);
            }
            if ((local_d0 != lVar5) && (lVar5 != 0)) {
              uVar19 = RenderingDevice::get_singleton();
              RenderingDevice::draw_list_bind_uniform_set(uVar19,param_1,lVar5,2);
              local_d0 = lVar5;
            }
            if ((local_130 != local_e8) && (local_130 != 0)) {
              uVar19 = RenderingDevice::get_singleton();
              cVar8 = RenderingDevice::uniform_set_is_valid(uVar19,local_130);
              if (cVar8 != '\0') {
                uVar19 = RenderingDevice::get_singleton();
                RenderingDevice::draw_list_bind_uniform_set(uVar19,param_1,local_130,3);
              }
            }
            if (uStack_84 != 0) {
              local_1c8 = local_1c8 & 0xfffffffffffffffc;
              local_68 = CONCAT62((int6)(local_1c8 >> 0x10),
                                  CONCAT11((char)(local_1c8 >> 8),
                                           (byte)local_1c8 | local_198 & 1 |
                                           ((byte)uVar24 & 1) * '\x02')) & 0xf000fffffff87ff |
                         (ulong)bVar29 << 0xb | (ulong)bVar30 << 0xc | (ulong)bVar31 << 0xd |
                         (ulong)bVar32 << 0xe | (ulong)local_190 << 0x2c | (ulong)local_188 << 0x30
                         | (ulong)local_180 << 0x34 | (ulong)local_178 << 0x3c;
              local_144 = (byte)uVar11;
              auStack_57 = SUB1615((undefined1  [16])0x0,1);
              local_58 = local_144 & 3;
              local_60 = uVar13;
            }
            lVar35 = RenderingDevice::get_singleton();
            RenderingDevice::draw_list_set_push_constant(lVar35,(void *)param_1,(uint)&local_78);
            lVar35 = *(long *)(lVar20 + 0x60);
            uVar22 = *(uint *)(lVar35 + 0xbc);
            if (*(uint *)(lVar35 + 0xbc) == 0) {
              uVar22 = 1;
            }
            if ((*(byte *)(lVar20 + 0x16) & 1) != 0) {
              uVar22 = uVar22 / *(uint *)(lVar35 + 0xc0);
            }
            if ((*(byte *)(lVar35 + 8) & 4) == 0) {
              lVar20 = RenderingDevice::get_singleton();
              RenderingDevice::draw_list_draw(lVar20,bVar25,(uint)(lVar34 != 0),uVar22);
            }
            else {
              uVar13 = RenderingDevice::get_singleton();
              iVar4 = *(int *)(lVar20 + 0x18);
              uVar19 = (**(code **)(*(long *)pVVar12 + 0x278))
                                 (pVVar12,**(undefined8 **)(*(long *)(lVar20 + 0x60) + 0xa8));
              RenderingDevice::draw_list_draw_indirect
                        (uVar13,param_1,(uint)(lVar34 != 0),uVar19,iVar4 * 0x14,1,0);
            }
            local_e0 = local_1b0;
            local_e8 = local_130;
            local_1c0 = lVar33;
            local_d8 = lVar34;
            goto LAB_00110726;
          }
          local_1c8 = local_1c8 & 0xf000fffffff87fc | (ulong)(local_198 & 1) |
                      (ulong)(uVar24 & 1) * 2 | (ulong)bVar29 << 0xb | (ulong)bVar30 << 0xc |
                      (ulong)bVar31 << 0xd | (ulong)bVar32 << 0xe | (ulong)local_190 << 0x2c |
                      (ulong)local_188 << 0x30 | (ulong)local_180 << 0x34 | (ulong)local_178 << 0x3c
          ;
          local_a0._8_8_ = uVar13;
          local_a0._0_8_ = local_1c8;
          local_a8 = CONCAT44(local_a8._4_4_,uVar11);
          uVar10 = SceneShaderForwardMobile::ShaderData::PipelineKey::hash((PipelineKey *)&local_b8)
          ;
          if ((local_148 == uVar10) && (lVar33 == local_1c0)) goto LAB_00112f0f;
LAB_0011235f:
          lVar14 = PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
                   ::get_pipeline((PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
                                   *)(lVar33 + 0x70),&local_b8,uVar10,uVar22 != 0);
          if (lVar14 != 0) goto LAB_00112f2d;
          uStack_84 = uVar22 + 1;
          uVar10 = local_90;
          uVar22 = uStack_84;
          if (1 < uStack_84) goto LAB_00110726;
          goto LAB_00112170;
        }
      }
LAB_00110726:
      local_1d8 = local_1d8 + 1;
      local_140 = local_140 + 4;
    } while (param_5 != local_1d8);
    break;
  case 2:
    pVVar12 = (Version *)RendererRD::MeshStorage::get_singleton();
    uVar13 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_bind_uniform_set(uVar13,param_1,*(undefined8 *)(this + 0x2bf0),0);
    uVar13 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_bind_uniform_set(uVar13,param_1,*(undefined8 *)(param_3 + 0x20),1);
    uVar13 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_bind_uniform_set(uVar13,param_1,*(undefined8 *)(this + 0x2b80));
    local_a0 = (undefined1  [16])0x0;
    local_a8 = _LC211;
    iVar3 = *(int *)(param_3 + 0x18);
    local_90 = (uint)__LC213;
    uStack_8c = (undefined4)((ulong)__LC213 >> 0x20);
    uStack_88 = (uint)_UNK_0012a118;
    uStack_84 = (uint)((ulong)_UNK_0012a118 >> 0x20);
    if (param_5 <= param_4) goto switchD_0010f585_default;
    local_140 = (ulong)param_4 << 2;
    cVar7 = '\0';
    local_e0 = 0;
    local_e8 = 0;
    local_f0 = 0;
    local_d8 = 0;
    local_148 = 0;
    local_1c0 = 0;
    do {
      lVar34 = *(long *)(param_3 + 8);
      lVar20 = *(long *)(*(long *)param_3 + local_140 * 2);
      lVar33 = *(long *)(lVar20 + 0x60);
      if (*(int *)(lVar33 + 0xbc) != 0) {
        local_1c8 = *(ulong *)(param_3 + 0x34);
        uVar13 = *(undefined8 *)(param_3 + 0x3c);
        local_198 = (byte)param_3[0x34] & 1;
        RVar2 = param_3[0x3a];
        uVar24 = (byte)param_3[0x34] >> 1 & 1;
        local_190 = (byte)param_3[0x39] >> 4;
        local_180 = (byte)RVar2 >> 4;
        uVar22 = *(uint *)(lVar33 + 0xc);
        local_78 = 0;
        local_178 = (byte)param_3[0x3b] >> 4;
        bVar29 = (byte)(uVar22 >> 0xc) & 1;
        bVar30 = (byte)(uVar22 >> 0xd) & 1;
        bVar31 = (byte)(uVar22 >> 0xe) & 1;
        bVar32 = (byte)(uVar22 >> 0xf) & 1;
        local_70 = local_1d8 + *(int *)(param_3 + 0x58);
        if (iVar3 - 2U < 2) {
          local_130 = *(long *)(lVar20 + 0x48);
          lVar33 = *(long *)(lVar20 + 0x50);
          local_1a0 = *(ulong *)(lVar20 + 0x40);
        }
        else {
          local_198 = *(byte *)(lVar33 + 0xb8);
          uVar24 = (uint)*(byte *)(lVar33 + 0xb9);
          local_190 = *(byte *)(lVar33 + 0x114) & 0xf;
          RVar2 = *(RenderListParameters *)(lVar33 + 0x138);
          local_180 = *(byte *)(lVar33 + 0xf0) & 0xf;
          local_178 = (byte)*(undefined4 *)(lVar33 + 0x15c) & 0xf;
          iVar4 = *(int *)(this + 0x2438);
          if (iVar4 == 2) {
            local_130 = *(long *)(this + 0x2b90);
            lVar33 = *(long *)(this + 0x2b98);
          }
          else if (iVar4 == 3) {
            local_130 = *(long *)(this + 0x2ba0);
            lVar33 = *(long *)(this + 0x2ba8);
          }
          else if (iVar4 == 0xe) {
            local_130 = *(long *)(this + 0x2bb0);
            lVar33 = *(long *)(this + 0x2bb8);
          }
          else {
            local_130 = *(long *)(lVar20 + 0x28);
            lVar33 = *(long *)(lVar20 + 0x30);
            RendererRD::MaterialStorage::MaterialData::set_as_used();
          }
          local_1a0 = *(ulong *)(lVar20 + 0x20);
        }
        local_188 = (byte)RVar2 & 0xf;
        if (local_1a0 != 0) {
          uVar11 = *(undefined4 *)(lVar20 + 0x10);
          cVar8 = *(char *)(lVar33 + 0x23d);
          if (*(char *)(lVar33 + 0x23d) == '\0') {
            cVar8 = cVar7;
          }
          uVar22 = *(uint *)(param_3 + 0x18);
          lVar35 = *(long *)(lVar20 + 0x60);
          lVar5 = *(long *)(lVar35 + 0xb0);
          uVar10 = uVar22;
          uVar27 = uVar21;
          if (uVar22 == 4) {
            local_a8 = CONCAT44(uVar11,(undefined4)local_a8);
            if (1 < *(uint *)(param_3 + 0x1c)) goto LAB_00113bc5;
            local_90 = 4;
          }
          else if (uVar22 - 2 < 2) {
            if ((*(byte *)(lVar20 + 0x15) & 0x80) == 0) {
              bVar26 = *(byte *)(lVar35 + 0x50);
              if (param_3[0x14] != (RenderListParameters)0x0) {
                bVar26 = bVar26 ^ 1;
              }
              uVar27 = (uint)bVar26;
            }
            local_a8 = CONCAT44(uVar11,(undefined4)local_a8);
            if (uVar22 == 2) {
              local_90 = uVar22;
              if (1 < *(uint *)(param_3 + 0x1c)) {
                local_90 = 7;
                uVar10 = 7;
              }
            }
            else {
              if (1 < *(uint *)(param_3 + 0x1c)) goto LAB_00113bfc;
              local_90 = 3;
              uVar10 = 3;
            }
          }
          else {
            bVar26 = *(byte *)(lVar35 + 0x50);
            if (param_3[0x14] != (RenderListParameters)0x0) {
              bVar26 = bVar26 ^ 1;
            }
            uVar27 = (uint)bVar26;
            uVar10 = local_90;
            if (uVar22 < 3) {
              if ((*(ushort *)(local_140 + lVar34) & 1) == 0) {
                local_90 = ~-(uint)(*(uint *)(param_3 + 0x1c) < 2) & 5;
                uVar10 = local_90;
              }
              else {
                local_90 = (-(uint)(*(uint *)(param_3 + 0x1c) < 2) & 0xfffffffb) + 6;
                uVar10 = local_90;
              }
            }
          }
          local_a8 = CONCAT44(uVar11,(undefined4)local_a8);
          uStack_8c = *(undefined4 *)(param_3 + 0x5c);
          lVar35 = -1;
          uStack_84 = 0;
          uStack_88 = (uint)(byte)param_3[0x28];
          local_b0 = param_2;
          uVar11 = RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::
                   get_cull_mode_from_cull_variant(lVar33,uVar27);
          local_1b0 = 0;
          uVar22 = 0;
LAB_00111558:
          lVar14 = RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::
                   get_vertex_input_mask(lVar33,uVar10,uVar22);
          uVar17 = *(ulong *)(*(long *)(lVar20 + 0x60) + 0x18);
          if (uVar17 == 0) {
            pcVar1 = (char *)(local_1a0 + 0x34);
            while( true ) {
              LOCK();
              cVar7 = *pcVar1;
              if (cVar7 == '\0') {
                *pcVar1 = '\x01';
              }
              UNLOCK();
              if (cVar7 == '\0') break;
              do {
              } while (*pcVar1 != '\0');
            }
            uVar22 = *(uint *)(local_1a0 + 0x80);
            plVar15 = *(long **)(local_1a0 + 0x78);
            if (uVar22 == 0) {
              uVar17 = 0x28;
              uVar22 = 1;
              lVar35 = 0;
            }
            else {
              lVar35 = (ulong)uVar22 * 0x28;
              plVar18 = plVar15;
              do {
                if ((lVar14 == *plVar18) && ((char)plVar18[2] == '\0')) {
                  lVar35 = plVar18[3];
                  local_1b0 = plVar18[4];
                  *pcVar1 = '\0';
                  goto LAB_001116ce;
                }
                plVar18 = plVar18 + 5;
              } while (plVar18 != plVar15 + (ulong)uVar22 * 5);
              uVar22 = uVar22 + 1;
              uVar17 = (ulong)uVar22 * 0x28;
            }
            *(uint *)(local_1a0 + 0x80) = uVar22;
            lVar23 = Memory::realloc_static(plVar15,uVar17,false);
            *(long *)(local_1a0 + 0x78) = lVar23;
            RendererRD::MeshStorage::_mesh_surface_generate_version_for_input_mask
                      (pVVar12,(Surface *)(lVar23 + lVar35),local_1a0,SUB81(lVar14,0),(Surface *)0x0
                       ,0,0);
            lVar35 = lVar35 + *(long *)(local_1a0 + 0x78);
            local_1b0 = *(long *)(lVar35 + 0x20);
            lVar35 = *(long *)(lVar35 + 0x18);
            *pcVar1 = '\0';
          }
          else {
            uVar28 = (ulong)*(uint *)(lVar20 + 0x18);
            if ((uint)uVar17 < *(uint *)(pVVar12 + 0x124)) {
              plVar15 = (long *)(((uVar17 & 0xffffffff) % (ulong)*(uint *)(pVVar12 + 0x120)) * 0xb0
                                + *(long *)(*(long *)(pVVar12 + 0x110) +
                                           ((uVar17 & 0xffffffff) /
                                           (ulong)*(uint *)(pVVar12 + 0x120)) * 8));
              if ((int)plVar15[0x15] == (int)(uVar17 >> 0x20)) {
                uVar17 = (ulong)*(uint *)(*plVar15 + 0x10);
                if (uVar28 < uVar17) {
                  uVar17 = (ulong)*(uint *)(plVar15 + 2);
                  if (*(uint *)(lVar20 + 0x18) < *(uint *)(plVar15 + 2)) {
                    lVar35 = uVar28 * 0x40 + plVar15[3];
                    uVar22 = *(uint *)(lVar35 + 0x20);
                    uVar17 = *(ulong *)(*(long *)(*plVar15 + 8) + uVar28 * 8);
                    pcVar1 = (char *)(uVar17 + 0x34);
                    while( true ) {
                      LOCK();
                      cVar7 = *pcVar1;
                      if (cVar7 == '\0') {
                        *pcVar1 = '\x01';
                      }
                      UNLOCK();
                      if (cVar7 == '\0') break;
                      do {
                      } while (*pcVar1 != '\0');
                    }
                    uVar10 = *(uint *)(lVar35 + 0x38);
                    plVar15 = *(long **)(lVar35 + 0x30);
                    if (uVar10 == 0) {
                      lVar23 = 0;
                      uVar28 = 0x28;
                      uVar10 = 1;
                    }
                    else {
                      lVar23 = (ulong)uVar10 * 0x28;
                      plVar18 = plVar15;
                      do {
                        if ((((lVar14 == *plVar18) && ((char)plVar18[2] == '\0')) &&
                            (uVar22 == *(uint *)(plVar18 + 1))) &&
                           (uVar22 == *(uint *)((long)plVar18 + 0xc))) {
                          lVar35 = plVar18[3];
                          local_1b0 = plVar18[4];
                          *(undefined1 *)(uVar17 + 0x34) = 0;
                          goto LAB_001116ce;
                        }
                        plVar18 = plVar18 + 5;
                      } while (plVar18 != plVar15 + (ulong)uVar10 * 5);
                      uVar10 = uVar10 + 1;
                      uVar28 = (ulong)uVar10 * 0x28;
                    }
                    *(uint *)(lVar35 + 0x38) = uVar10;
                    lVar16 = Memory::realloc_static(plVar15,uVar28,false);
                    *(long *)(lVar35 + 0x30) = lVar16;
                    RendererRD::MeshStorage::_mesh_surface_generate_version_for_input_mask
                              (pVVar12,(Surface *)(lVar16 + lVar23),uVar17,SUB81(lVar14,0),
                               (Surface *)0x0,(uint)lVar35,uVar22);
                    lVar23 = lVar23 + *(long *)(lVar35 + 0x30);
                    local_1b0 = *(long *)(lVar23 + 0x20);
                    lVar35 = *(long *)(lVar23 + 0x18);
                    *(undefined1 *)(uVar17 + 0x34) = 0;
                    goto LAB_001116ce;
                  }
                  goto LAB_00110dc2;
                }
                _err_print_index_error
                          ("mesh_instance_surface_get_vertex_arrays_and_format",
                           "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x213,uVar28,
                           uVar17,"p_surface_index","mesh->surface_count","",false,false);
                goto LAB_001116ce;
              }
              if ((int)plVar15[0x15] + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
            }
            _err_print_error("mesh_instance_surface_get_vertex_arrays_and_format",
                             "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x211);
          }
LAB_001116ce:
          uVar22 = uStack_84;
          cVar7 = cVar8;
          local_b8 = lVar35;
          if (uStack_84 != 0) {
            local_a8 = (ulong)local_a8._4_4_ << 0x20;
            local_a0 = (undefined1  [16])0x0;
            uVar10 = SceneShaderForwardMobile::ShaderData::PipelineKey::hash
                               ((PipelineKey *)&local_b8);
            if ((local_148 != uVar10) || (lVar33 != local_1c0)) goto LAB_0011173f;
LAB_00112876:
            lVar14 = 0;
            lVar33 = local_1c0;
            uVar10 = local_148;
LAB_00112894:
            local_148 = uVar10;
            uVar9 = *(ushort *)(local_140 + lVar34) >> 1;
            if ((uVar9 & 0xff) == 0) {
              lVar34 = *(long *)(local_1a0 + 0x90);
            }
            else {
              lVar34 = *(long *)((ulong)((uVar9 & 0xff) - 1) * 0x18 + *(long *)(local_1a0 + 0xa0) +
                                0x10);
            }
            if (local_1b0 != local_d8) {
              uVar19 = RenderingDevice::get_singleton();
              RenderingDevice::draw_list_bind_vertex_array(uVar19,param_1,local_1b0);
            }
            if ((local_f0 != lVar34) && (lVar34 != 0)) {
              uVar19 = RenderingDevice::get_singleton();
              RenderingDevice::draw_list_bind_index_array(uVar19,param_1,lVar34);
            }
            if (lVar14 != 0) {
              uVar19 = RenderingDevice::get_singleton();
              RenderingDevice::draw_list_bind_render_pipeline(uVar19,param_1,lVar14);
            }
            if ((local_e8 != lVar5) && (lVar5 != 0)) {
              uVar19 = RenderingDevice::get_singleton();
              RenderingDevice::draw_list_bind_uniform_set(uVar19,param_1,lVar5,2);
              local_e8 = lVar5;
            }
            if ((local_e0 != local_130) && (local_130 != 0)) {
              uVar19 = RenderingDevice::get_singleton();
              cVar8 = RenderingDevice::uniform_set_is_valid(uVar19,local_130);
              if (cVar8 != '\0') {
                uVar19 = RenderingDevice::get_singleton();
                RenderingDevice::draw_list_bind_uniform_set(uVar19,param_1,local_130,3);
              }
            }
            if (uStack_84 != 0) {
              local_1c8 = local_1c8 & 0xfffffffffffffffc;
              local_68 = CONCAT62((int6)(local_1c8 >> 0x10),
                                  CONCAT11((char)(local_1c8 >> 8),
                                           (byte)local_1c8 | local_198 & 1 |
                                           ((byte)uVar24 & 1) * '\x02')) & 0xf000fffffff87ff |
                         (ulong)bVar29 << 0xb | (ulong)bVar30 << 0xc | (ulong)bVar31 << 0xd |
                         (ulong)bVar32 << 0xe | (ulong)local_190 << 0x2c | (ulong)local_188 << 0x30
                         | (ulong)local_180 << 0x34 | (ulong)local_178 << 0x3c;
              local_144 = (byte)uVar11;
              auStack_57 = SUB1615((undefined1  [16])0x0,1);
              local_58 = local_144 & 3;
              local_60 = uVar13;
            }
            lVar35 = RenderingDevice::get_singleton();
            RenderingDevice::draw_list_set_push_constant(lVar35,(void *)param_1,(uint)&local_78);
            lVar35 = *(long *)(lVar20 + 0x60);
            uVar22 = *(uint *)(lVar35 + 0xbc);
            if (*(uint *)(lVar35 + 0xbc) == 0) {
              uVar22 = 1;
            }
            if ((*(byte *)(lVar20 + 0x16) & 1) != 0) {
              uVar22 = uVar22 / *(uint *)(lVar35 + 0xc0);
            }
            if ((*(byte *)(lVar35 + 8) & 4) == 0) {
              lVar20 = RenderingDevice::get_singleton();
              RenderingDevice::draw_list_draw(lVar20,bVar25,(uint)(lVar34 != 0),uVar22);
            }
            else {
              uVar13 = RenderingDevice::get_singleton();
              iVar4 = *(int *)(lVar20 + 0x18);
              uVar19 = (**(code **)(*(long *)pVVar12 + 0x278))
                                 (pVVar12,**(undefined8 **)(*(long *)(lVar20 + 0x60) + 0xa8));
              RenderingDevice::draw_list_draw_indirect
                        (uVar13,param_1,lVar34 != 0,uVar19,iVar4 * 0x14,1,0);
            }
            local_d8 = local_1b0;
            local_e0 = local_130;
            local_1c0 = lVar33;
            local_f0 = lVar34;
            goto LAB_001106f5;
          }
          local_1c8 = local_1c8 & 0xf000fffffff87fc | (ulong)(local_198 & 1) |
                      (ulong)(uVar24 & 1) * 2 | (ulong)bVar29 << 0xb | (ulong)bVar30 << 0xc |
                      (ulong)bVar31 << 0xd | (ulong)bVar32 << 0xe | (ulong)local_190 << 0x2c |
                      (ulong)local_188 << 0x30 | (ulong)local_180 << 0x34 | (ulong)local_178 << 0x3c
          ;
          local_a0._8_8_ = uVar13;
          local_a0._0_8_ = local_1c8;
          local_a8 = CONCAT44(local_a8._4_4_,uVar11);
          uVar10 = SceneShaderForwardMobile::ShaderData::PipelineKey::hash((PipelineKey *)&local_b8)
          ;
          if ((local_148 == uVar10) && (lVar33 == local_1c0)) goto LAB_00112876;
LAB_0011173f:
          lVar14 = PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
                   ::get_pipeline((PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
                                   *)(lVar33 + 0x70),&local_b8,uVar10,uVar22 != 0);
          if (lVar14 != 0) goto LAB_00112894;
          uStack_84 = uVar22 + 1;
          uVar10 = local_90;
          uVar22 = uStack_84;
          if (1 < uStack_84) goto LAB_001106f5;
          goto LAB_00111558;
        }
      }
LAB_001106f5:
      local_1d8 = local_1d8 + 1;
      local_140 = local_140 + 4;
    } while (param_5 != local_1d8);
    break;
  case 3:
    pVVar12 = (Version *)RendererRD::MeshStorage::get_singleton();
    uVar13 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_bind_uniform_set(uVar13,param_1,*(undefined8 *)(this + 0x2bf0),0);
    uVar13 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_bind_uniform_set(uVar13,param_1,*(undefined8 *)(param_3 + 0x20),1);
    uVar13 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_bind_uniform_set(uVar13,param_1,*(undefined8 *)(this + 0x2b80));
    local_a0 = (undefined1  [16])0x0;
    local_a8 = _LC211;
    iVar3 = *(int *)(param_3 + 0x18);
    local_90 = (uint)__LC213;
    uStack_8c = (undefined4)((ulong)__LC213 >> 0x20);
    uStack_88 = (uint)_UNK_0012a118;
    uStack_84 = (uint)((ulong)_UNK_0012a118 >> 0x20);
    if (param_5 <= param_4) goto switchD_0010f585_default;
    local_140 = (ulong)param_4 << 2;
    local_d0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    local_e8 = 0;
    local_148 = 0;
    local_1c0 = 0;
    cVar8 = '\0';
    do {
      lVar34 = *(long *)(param_3 + 8);
      lVar20 = *(long *)(*(long *)param_3 + local_140 * 2);
      lVar33 = *(long *)(lVar20 + 0x60);
      cVar7 = cVar8;
      if (*(int *)(lVar33 + 0xbc) != 0) {
        local_1c8 = *(ulong *)(param_3 + 0x34);
        uVar13 = *(undefined8 *)(param_3 + 0x3c);
        local_198 = (byte)param_3[0x34] & 1;
        RVar2 = param_3[0x3a];
        uVar24 = (byte)param_3[0x34] >> 1 & 1;
        local_190 = (byte)param_3[0x39] >> 4;
        local_180 = (byte)RVar2 >> 4;
        uVar22 = *(uint *)(lVar33 + 0xc);
        local_78 = 0;
        local_178 = (byte)param_3[0x3b] >> 4;
        bVar29 = (byte)(uVar22 >> 0xc) & 1;
        bVar30 = (byte)(uVar22 >> 0xd) & 1;
        bVar31 = (byte)(uVar22 >> 0xe) & 1;
        bVar32 = (byte)(uVar22 >> 0xf) & 1;
        local_70 = local_1d8 + *(int *)(param_3 + 0x58);
        if (iVar3 - 2U < 2) {
          local_128 = *(long *)(lVar20 + 0x48);
          lVar33 = *(long *)(lVar20 + 0x50);
          local_1a0 = *(ulong *)(lVar20 + 0x40);
        }
        else {
          local_198 = *(byte *)(lVar33 + 0xb8);
          uVar24 = (uint)*(byte *)(lVar33 + 0xb9);
          local_190 = *(byte *)(lVar33 + 0x114) & 0xf;
          RVar2 = *(RenderListParameters *)(lVar33 + 0x138);
          local_180 = *(byte *)(lVar33 + 0xf0) & 0xf;
          local_178 = (byte)*(undefined4 *)(lVar33 + 0x15c) & 0xf;
          iVar4 = *(int *)(this + 0x2438);
          if (iVar4 == 2) {
            local_128 = *(long *)(this + 0x2b90);
            lVar33 = *(long *)(this + 0x2b98);
          }
          else if (iVar4 == 3) {
            local_128 = *(long *)(this + 0x2ba0);
            lVar33 = *(long *)(this + 0x2ba8);
          }
          else if (iVar4 == 0xe) {
            local_128 = *(long *)(this + 0x2bb0);
            lVar33 = *(long *)(this + 0x2bb8);
          }
          else {
            local_128 = *(long *)(lVar20 + 0x28);
            lVar33 = *(long *)(lVar20 + 0x30);
            RendererRD::MaterialStorage::MaterialData::set_as_used();
          }
          local_1a0 = *(ulong *)(lVar20 + 0x20);
        }
        local_188 = (byte)RVar2 & 0xf;
        if (local_1a0 != 0) {
          uVar11 = *(undefined4 *)(lVar20 + 0x10);
          cVar7 = *(char *)(lVar33 + 0x23d);
          if (*(char *)(lVar33 + 0x23d) == '\0') {
            cVar7 = cVar8;
          }
          uVar22 = *(uint *)(param_3 + 0x18);
          lVar35 = *(long *)(lVar20 + 0x60);
          lVar5 = *(long *)(lVar35 + 0xb0);
          uVar10 = uVar22;
          if (uVar22 == 4) {
            local_a8 = CONCAT44(uVar11,(undefined4)local_a8);
            if (1 < *(uint *)(param_3 + 0x1c)) goto LAB_00113bc5;
            local_90 = 4;
            bVar26 = 2;
          }
          else if (uVar22 - 2 < 2) {
            bVar26 = 2;
            if (((*(byte *)(lVar20 + 0x15) & 0x80) == 0) &&
               (bVar26 = *(byte *)(lVar35 + 0x50), param_3[0x14] != (RenderListParameters)0x0)) {
              bVar26 = bVar26 ^ 1;
            }
            local_a8 = CONCAT44(uVar11,(undefined4)local_a8);
            if (uVar22 == 2) {
              local_90 = uVar22;
              if (1 < *(uint *)(param_3 + 0x1c)) {
                local_90 = 7;
                uVar10 = 7;
              }
            }
            else {
              if (1 < *(uint *)(param_3 + 0x1c)) goto LAB_00113bfc;
              local_90 = 3;
              uVar10 = uVar21;
            }
          }
          else {
            bVar26 = *(byte *)(lVar35 + 0x50);
            if (param_3[0x14] != (RenderListParameters)0x0) {
              bVar26 = bVar26 ^ 1;
            }
            uVar10 = local_90;
            if (uVar22 < 3) {
              if ((*(ushort *)(local_140 + lVar34) & 1) == 0) {
                local_90 = ~-(uint)(*(uint *)(param_3 + 0x1c) < 2) & 5;
                uVar10 = local_90;
              }
              else {
                local_90 = (-(uint)(*(uint *)(param_3 + 0x1c) < 2) & 0xfffffffb) + 6;
                uVar10 = local_90;
              }
            }
          }
          local_a8 = CONCAT44(uVar11,(undefined4)local_a8);
          uStack_8c = *(undefined4 *)(param_3 + 0x5c);
          lVar35 = -1;
          uStack_84 = 0;
          uStack_88 = (uint)(byte)param_3[0x28];
          local_b0 = param_2;
          uVar11 = RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::
                   get_cull_mode_from_cull_variant(lVar33,bVar26);
          local_1b0 = 0;
          uVar22 = 0;
LAB_00110f58:
          lVar14 = RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::
                   get_vertex_input_mask(lVar33,uVar10,uVar22);
          uVar17 = *(ulong *)(*(long *)(lVar20 + 0x60) + 0x18);
          if (uVar17 == 0) {
            pcVar1 = (char *)(local_1a0 + 0x34);
            while( true ) {
              LOCK();
              cVar8 = *pcVar1;
              if (cVar8 == '\0') {
                *pcVar1 = '\x01';
              }
              UNLOCK();
              if (cVar8 == '\0') break;
              do {
              } while (*pcVar1 != '\0');
            }
            uVar22 = *(uint *)(local_1a0 + 0x80);
            plVar15 = *(long **)(local_1a0 + 0x78);
            if (uVar22 == 0) {
              uVar17 = 0x28;
              uVar22 = 1;
              lVar35 = 0;
            }
            else {
              lVar35 = (ulong)uVar22 * 0x28;
              plVar18 = plVar15;
              do {
                if ((lVar14 == *plVar18) && ((char)plVar18[2] == '\0')) {
                  lVar35 = plVar18[3];
                  local_1b0 = plVar18[4];
                  *pcVar1 = '\0';
                  goto LAB_001110d0;
                }
                plVar18 = plVar18 + 5;
              } while (plVar18 != plVar15 + (ulong)uVar22 * 5);
              uVar22 = uVar22 + 1;
              uVar17 = (ulong)uVar22 * 0x28;
            }
            *(uint *)(local_1a0 + 0x80) = uVar22;
            lVar23 = Memory::realloc_static(plVar15,uVar17,false);
            *(long *)(local_1a0 + 0x78) = lVar23;
            RendererRD::MeshStorage::_mesh_surface_generate_version_for_input_mask
                      (pVVar12,(Surface *)(lVar23 + lVar35),local_1a0,SUB81(lVar14,0),(Surface *)0x0
                       ,0,0);
            lVar35 = lVar35 + *(long *)(local_1a0 + 0x78);
            local_1b0 = *(long *)(lVar35 + 0x20);
            lVar35 = *(long *)(lVar35 + 0x18);
            *pcVar1 = '\0';
          }
          else {
            uVar28 = (ulong)*(uint *)(lVar20 + 0x18);
            if ((uint)uVar17 < *(uint *)(pVVar12 + 0x124)) {
              plVar15 = (long *)(((uVar17 & 0xffffffff) % (ulong)*(uint *)(pVVar12 + 0x120)) * 0xb0
                                + *(long *)(*(long *)(pVVar12 + 0x110) +
                                           ((uVar17 & 0xffffffff) /
                                           (ulong)*(uint *)(pVVar12 + 0x120)) * 8));
              if ((int)plVar15[0x15] == (int)(uVar17 >> 0x20)) {
                uVar17 = (ulong)*(uint *)(*plVar15 + 0x10);
                if (uVar28 < uVar17) {
                  uVar17 = (ulong)*(uint *)(plVar15 + 2);
                  if (*(uint *)(lVar20 + 0x18) < *(uint *)(plVar15 + 2)) {
                    lVar35 = uVar28 * 0x40 + plVar15[3];
                    uVar22 = *(uint *)(lVar35 + 0x20);
                    uVar17 = *(ulong *)(*(long *)(*plVar15 + 8) + uVar28 * 8);
                    pcVar1 = (char *)(uVar17 + 0x34);
                    while( true ) {
                      LOCK();
                      cVar8 = *pcVar1;
                      if (cVar8 == '\0') {
                        *pcVar1 = '\x01';
                      }
                      UNLOCK();
                      if (cVar8 == '\0') break;
                      do {
                      } while (*pcVar1 != '\0');
                    }
                    uVar10 = *(uint *)(lVar35 + 0x38);
                    plVar15 = *(long **)(lVar35 + 0x30);
                    if (uVar10 == 0) {
                      lVar23 = 0;
                      uVar28 = 0x28;
                      uVar10 = 1;
                    }
                    else {
                      lVar23 = (ulong)uVar10 * 0x28;
                      plVar18 = plVar15;
                      do {
                        if ((((lVar14 == *plVar18) && ((char)plVar18[2] == '\0')) &&
                            (uVar22 == *(uint *)(plVar18 + 1))) &&
                           (uVar22 == *(uint *)((long)plVar18 + 0xc))) {
                          lVar35 = plVar18[3];
                          local_1b0 = plVar18[4];
                          *(undefined1 *)(uVar17 + 0x34) = 0;
                          goto LAB_001110d0;
                        }
                        plVar18 = plVar18 + 5;
                      } while (plVar18 != plVar15 + (ulong)uVar10 * 5);
                      uVar10 = uVar10 + 1;
                      uVar28 = (ulong)uVar10 * 0x28;
                    }
                    *(uint *)(lVar35 + 0x38) = uVar10;
                    lVar16 = Memory::realloc_static(plVar15,uVar28,false);
                    *(long *)(lVar35 + 0x30) = lVar16;
                    RendererRD::MeshStorage::_mesh_surface_generate_version_for_input_mask
                              (pVVar12,(Surface *)(lVar16 + lVar23),uVar17,SUB81(lVar14,0),
                               (Surface *)0x0,(uint)lVar35,uVar22);
                    lVar23 = lVar23 + *(long *)(lVar35 + 0x30);
                    local_1b0 = *(long *)(lVar23 + 0x20);
                    lVar35 = *(long *)(lVar23 + 0x18);
                    *(undefined1 *)(uVar17 + 0x34) = 0;
                    goto LAB_001110d0;
                  }
                  goto LAB_00110dc2;
                }
                _err_print_index_error
                          ("mesh_instance_surface_get_vertex_arrays_and_format",
                           "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x213,uVar28,
                           uVar17,"p_surface_index","mesh->surface_count","",false,false);
                goto LAB_001110d0;
              }
              if ((int)plVar15[0x15] + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
            }
            _err_print_error("mesh_instance_surface_get_vertex_arrays_and_format",
                             "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x211);
          }
LAB_001110d0:
          uVar22 = uStack_84;
          local_b8 = lVar35;
          if (uStack_84 != 0) {
            local_a8 = (ulong)local_a8._4_4_ << 0x20;
            local_a0 = (undefined1  [16])0x0;
            uVar10 = SceneShaderForwardMobile::ShaderData::PipelineKey::hash
                               ((PipelineKey *)&local_b8);
            if ((local_148 != uVar10) || (local_1c0 != lVar33)) goto LAB_00111140;
LAB_00112bc4:
            lVar14 = 0;
            lVar33 = local_1c0;
            uVar10 = local_148;
LAB_00112be2:
            local_148 = uVar10;
            uVar9 = *(ushort *)(local_140 + lVar34) >> 1;
            if ((uVar9 & 0xff) == 0) {
              lVar34 = *(long *)(local_1a0 + 0x90);
            }
            else {
              lVar34 = *(long *)((ulong)((uVar9 & 0xff) - 1) * 0x18 + *(long *)(local_1a0 + 0xa0) +
                                0x10);
            }
            if (local_e8 != local_1b0) {
              uVar19 = RenderingDevice::get_singleton();
              RenderingDevice::draw_list_bind_vertex_array(uVar19,param_1,local_1b0);
            }
            if ((local_e0 != lVar34) && (lVar34 != 0)) {
              uVar19 = RenderingDevice::get_singleton();
              RenderingDevice::draw_list_bind_index_array(uVar19,param_1,lVar34);
            }
            if (lVar14 != 0) {
              uVar19 = RenderingDevice::get_singleton();
              RenderingDevice::draw_list_bind_render_pipeline(uVar19,param_1,lVar14);
            }
            if ((lVar5 != 0) && (local_d8 != lVar5)) {
              uVar19 = RenderingDevice::get_singleton();
              RenderingDevice::draw_list_bind_uniform_set(uVar19,param_1,lVar5,2);
              local_d8 = lVar5;
            }
            if ((local_d0 != local_128) && (local_128 != 0)) {
              uVar19 = RenderingDevice::get_singleton();
              cVar8 = RenderingDevice::uniform_set_is_valid(uVar19,local_128);
              if (cVar8 != '\0') {
                uVar19 = RenderingDevice::get_singleton();
                RenderingDevice::draw_list_bind_uniform_set(uVar19,param_1,local_128,3);
              }
            }
            if (uStack_84 != 0) {
              local_1c8 = local_1c8 & 0xfffffffffffffffc;
              local_68 = CONCAT62((int6)(local_1c8 >> 0x10),
                                  CONCAT11((char)(local_1c8 >> 8),
                                           (byte)local_1c8 | local_198 & 1 |
                                           ((byte)uVar24 & 1) * '\x02')) & 0xf000fffffff87ff |
                         (ulong)bVar29 << 0xb | (ulong)bVar30 << 0xc | (ulong)bVar31 << 0xd |
                         (ulong)bVar32 << 0xe | (ulong)local_190 << 0x2c | (ulong)local_188 << 0x30
                         | (ulong)local_180 << 0x34 | (ulong)local_178 << 0x3c;
              local_144 = (byte)uVar11;
              auStack_57 = SUB1615((undefined1  [16])0x0,1);
              local_58 = local_144 & 3;
              local_60 = uVar13;
            }
            lVar35 = RenderingDevice::get_singleton();
            RenderingDevice::draw_list_set_push_constant(lVar35,(void *)param_1,(uint)&local_78);
            lVar35 = *(long *)(lVar20 + 0x60);
            uVar22 = *(uint *)(lVar35 + 0xbc);
            if (*(uint *)(lVar35 + 0xbc) == 0) {
              uVar22 = 1;
            }
            if ((*(byte *)(lVar20 + 0x16) & 1) != 0) {
              uVar22 = uVar22 / *(uint *)(lVar35 + 0xc0);
            }
            if ((*(byte *)(lVar35 + 8) & 4) == 0) {
              lVar20 = RenderingDevice::get_singleton();
              RenderingDevice::draw_list_draw(lVar20,bVar25,(uint)(lVar34 != 0),uVar22);
            }
            else {
              uVar13 = RenderingDevice::get_singleton();
              iVar4 = *(int *)(lVar20 + 0x18);
              uVar19 = (**(code **)(*(long *)pVVar12 + 0x278))
                                 (pVVar12,**(undefined8 **)(*(long *)(lVar20 + 0x60) + 0xa8));
              RenderingDevice::draw_list_draw_indirect
                        (uVar13,param_1,lVar34 != 0,uVar19,iVar4 * 0x14,1,0);
            }
            local_e8 = local_1b0;
            local_d0 = local_128;
            local_1c0 = lVar33;
            local_e0 = lVar34;
            goto LAB_0010f598;
          }
          local_1c8 = local_1c8 & 0xf000fffffff87fc | (ulong)(local_198 & 1) |
                      (ulong)(uVar24 & 1) * 2 | (ulong)bVar29 << 0xb | (ulong)bVar30 << 0xc |
                      (ulong)bVar31 << 0xd | (ulong)bVar32 << 0xe | (ulong)local_190 << 0x2c |
                      (ulong)local_188 << 0x30 | (ulong)local_180 << 0x34 | (ulong)local_178 << 0x3c
          ;
          local_a0._8_8_ = uVar13;
          local_a0._0_8_ = local_1c8;
          local_a8 = CONCAT44(local_a8._4_4_,uVar11);
          uVar10 = SceneShaderForwardMobile::ShaderData::PipelineKey::hash((PipelineKey *)&local_b8)
          ;
          if ((local_148 == uVar10) && (local_1c0 == lVar33)) goto LAB_00112bc4;
LAB_00111140:
          lVar14 = PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
                   ::get_pipeline((PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
                                   *)(lVar33 + 0x70),&local_b8,uVar10,uVar22 != 0);
          if (lVar14 != 0) goto LAB_00112be2;
          uStack_84 = uVar22 + 1;
          uVar10 = local_90;
          uVar22 = uStack_84;
          if (1 < uStack_84) goto LAB_0010f598;
          goto LAB_00110f58;
        }
      }
LAB_0010f598:
      local_1d8 = local_1d8 + 1;
      local_140 = local_140 + 4;
      cVar8 = cVar7;
    } while (param_5 != local_1d8);
    break;
  case 4:
    pVVar12 = (Version *)RendererRD::MeshStorage::get_singleton();
    uVar13 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_bind_uniform_set(uVar13,param_1,*(undefined8 *)(this + 0x2bf0),0);
    uVar13 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_bind_uniform_set(uVar13,param_1,*(undefined8 *)(param_3 + 0x20),1);
    uVar13 = RenderingDevice::get_singleton();
    RenderingDevice::draw_list_bind_uniform_set(uVar13,param_1,*(undefined8 *)(this + 0x2b80),2);
    local_a8 = _LC211;
    local_a0 = (undefined1  [16])0x0;
    iVar3 = *(int *)(param_3 + 0x18);
    local_90 = (uint)__LC213;
    uStack_8c = (undefined4)((ulong)__LC213 >> 0x20);
    uStack_88 = (uint)_UNK_0012a118;
    uStack_84 = (uint)((ulong)_UNK_0012a118 >> 0x20);
    if (param_5 <= param_4) goto switchD_0010f585_default;
    local_140 = (ulong)param_4 << 2;
    cVar8 = '\0';
    local_d0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    local_e8 = 0;
    local_148 = 0;
    local_1c0 = 0;
    do {
      lVar34 = *(long *)(param_3 + 8);
      lVar20 = *(long *)(*(long *)param_3 + local_140 * 2);
      lVar33 = *(long *)(lVar20 + 0x60);
      if (*(int *)(lVar33 + 0xbc) != 0) {
        local_1c8 = *(ulong *)(param_3 + 0x34);
        uVar13 = *(undefined8 *)(param_3 + 0x3c);
        RVar2 = param_3[0x3a];
        uVar22 = (byte)param_3[0x34] >> 1 & 1;
        local_198 = (byte)param_3[0x34] & 1;
        local_190 = (byte)param_3[0x39] >> 4;
        local_180 = (byte)RVar2 >> 4;
        uVar21 = *(uint *)(lVar33 + 0xc);
        local_178 = (byte)param_3[0x3b] >> 4;
        bVar29 = (byte)(uVar21 >> 0xc) & 1;
        bVar30 = (byte)(uVar21 >> 0xd) & 1;
        bVar31 = (byte)(uVar21 >> 0xe) & 1;
        local_70 = local_1d8 + *(int *)(param_3 + 0x58);
        bVar32 = (byte)(uVar21 >> 0xf) & 1;
        local_78 = *(undefined8 *)(param_3 + 0x2c);
        if (iVar3 - 2U < 2) {
          local_128 = *(long *)(lVar20 + 0x48);
          lVar33 = *(long *)(lVar20 + 0x50);
          local_1a0 = *(ulong *)(lVar20 + 0x40);
        }
        else {
          local_198 = *(byte *)(lVar33 + 0xb8);
          uVar22 = (uint)*(byte *)(lVar33 + 0xb9);
          local_190 = *(byte *)(lVar33 + 0x114) & 0xf;
          RVar2 = *(RenderListParameters *)(lVar33 + 0x138);
          local_180 = *(byte *)(lVar33 + 0xf0) & 0xf;
          local_178 = (byte)*(undefined4 *)(lVar33 + 0x15c) & 0xf;
          iVar4 = *(int *)(this + 0x2438);
          if (iVar4 == 2) {
            local_128 = *(long *)(this + 0x2b90);
            lVar33 = *(long *)(this + 0x2b98);
          }
          else if (iVar4 == 3) {
            local_128 = *(long *)(this + 0x2ba0);
            lVar33 = *(long *)(this + 0x2ba8);
          }
          else if (iVar4 == 0xe) {
            local_128 = *(long *)(this + 0x2bb0);
            lVar33 = *(long *)(this + 0x2bb8);
          }
          else {
            local_128 = *(long *)(lVar20 + 0x28);
            lVar33 = *(long *)(lVar20 + 0x30);
            RendererRD::MaterialStorage::MaterialData::set_as_used();
          }
          local_1a0 = *(ulong *)(lVar20 + 0x20);
        }
        local_188 = (byte)RVar2 & 0xf;
        if (local_1a0 != 0) {
          uVar11 = *(undefined4 *)(lVar20 + 0x10);
          cVar7 = *(char *)(lVar33 + 0x23d);
          if (*(char *)(lVar33 + 0x23d) == '\0') {
            cVar7 = cVar8;
          }
          uVar21 = *(uint *)(param_3 + 0x18);
          lVar35 = *(long *)(lVar20 + 0x60);
          lVar5 = *(long *)(lVar35 + 0xb0);
          uVar24 = uVar21;
          if (uVar21 == 4) {
            local_a8 = CONCAT44(uVar11,(undefined4)local_a8);
            if (1 < *(uint *)(param_3 + 0x1c)) goto LAB_00113bc5;
            local_90 = 4;
            bVar26 = 2;
          }
          else if (uVar21 - 2 < 2) {
            bVar26 = 2;
            if (((*(byte *)(lVar20 + 0x15) & 0x80) == 0) &&
               (bVar26 = *(byte *)(lVar35 + 0x50), param_3[0x14] != (RenderListParameters)0x0)) {
              bVar26 = bVar26 ^ 1;
            }
            local_a8 = CONCAT44(uVar11,(undefined4)local_a8);
            if (uVar21 == 2) {
              local_90 = uVar21;
              if (1 < *(uint *)(param_3 + 0x1c)) {
                local_90 = 7;
                uVar24 = local_90;
              }
            }
            else {
              if (1 < *(uint *)(param_3 + 0x1c)) goto LAB_00113bfc;
              local_90 = 3;
              uVar24 = 3;
            }
          }
          else {
            bVar26 = *(byte *)(lVar35 + 0x50);
            if (param_3[0x14] != (RenderListParameters)0x0) {
              bVar26 = bVar26 ^ 1;
            }
            uVar24 = local_90;
            if (uVar21 < 3) {
              if ((*(ushort *)(local_140 + lVar34) & 1) == 0) {
                uVar24 = ~-(uint)(*(uint *)(param_3 + 0x1c) < 2) & 5;
                local_90 = uVar24;
              }
              else {
                uVar24 = (-(uint)(*(uint *)(param_3 + 0x1c) < 2) & 0xfffffffb) + 6;
                local_90 = uVar24;
              }
            }
          }
          local_a8 = CONCAT44(uVar11,(undefined4)local_a8);
          uStack_8c = *(undefined4 *)(param_3 + 0x5c);
          uStack_84 = 0;
          lVar35 = -1;
          uStack_88 = (uint)(byte)param_3[0x28];
          local_b0 = param_2;
          uVar11 = RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::
                   get_cull_mode_from_cull_variant(lVar33,bVar26);
          local_1b0 = 0;
          uVar21 = 0;
LAB_00111b48:
          lVar14 = RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::
                   get_vertex_input_mask(lVar33,uVar24,uVar21);
          uVar17 = *(ulong *)(*(long *)(lVar20 + 0x60) + 0x18);
          if (uVar17 == 0) {
            pcVar1 = (char *)(local_1a0 + 0x34);
            while( true ) {
              LOCK();
              cVar8 = *pcVar1;
              if (cVar8 == '\0') {
                *pcVar1 = '\x01';
              }
              UNLOCK();
              if (cVar8 == '\0') break;
              do {
              } while (*pcVar1 != '\0');
            }
            uVar21 = *(uint *)(local_1a0 + 0x80);
            plVar15 = *(long **)(local_1a0 + 0x78);
            if (uVar21 == 0) {
              uVar17 = 0x28;
              uVar21 = 1;
              lVar35 = 0;
            }
            else {
              lVar35 = (ulong)uVar21 * 0x28;
              plVar18 = plVar15;
              do {
                if ((lVar14 == *plVar18) && ((char)plVar18[2] == '\0')) {
                  lVar35 = plVar18[3];
                  local_1b0 = plVar18[4];
                  *pcVar1 = '\0';
                  goto LAB_00111cc0;
                }
                plVar18 = plVar18 + 5;
              } while (plVar15 + (ulong)uVar21 * 5 != plVar18);
              uVar21 = uVar21 + 1;
              uVar17 = (ulong)uVar21 * 0x28;
            }
            *(uint *)(local_1a0 + 0x80) = uVar21;
            lVar23 = Memory::realloc_static(plVar15,uVar17,false);
            *(long *)(local_1a0 + 0x78) = lVar23;
            RendererRD::MeshStorage::_mesh_surface_generate_version_for_input_mask
                      (pVVar12,(Surface *)(lVar23 + lVar35),local_1a0,SUB81(lVar14,0),(Surface *)0x0
                       ,0,0);
            lVar35 = lVar35 + *(long *)(local_1a0 + 0x78);
            local_1b0 = *(long *)(lVar35 + 0x20);
            lVar35 = *(long *)(lVar35 + 0x18);
            *pcVar1 = '\0';
          }
          else {
            uVar28 = (ulong)*(uint *)(lVar20 + 0x18);
            if ((uint)uVar17 < *(uint *)(pVVar12 + 0x124)) {
              plVar15 = (long *)(((uVar17 & 0xffffffff) % (ulong)*(uint *)(pVVar12 + 0x120)) * 0xb0
                                + *(long *)(*(long *)(pVVar12 + 0x110) +
                                           ((uVar17 & 0xffffffff) /
                                           (ulong)*(uint *)(pVVar12 + 0x120)) * 8));
              if ((int)plVar15[0x15] == (int)(uVar17 >> 0x20)) {
                uVar17 = (ulong)*(uint *)(*plVar15 + 0x10);
                if (uVar28 < uVar17) {
                  uVar17 = (ulong)*(uint *)(plVar15 + 2);
                  if (*(uint *)(lVar20 + 0x18) < *(uint *)(plVar15 + 2)) {
                    lVar35 = uVar28 * 0x40 + plVar15[3];
                    uVar21 = *(uint *)(lVar35 + 0x20);
                    uVar17 = *(ulong *)(*(long *)(*plVar15 + 8) + uVar28 * 8);
                    pcVar1 = (char *)(uVar17 + 0x34);
                    while( true ) {
                      LOCK();
                      cVar8 = *pcVar1;
                      if (cVar8 == '\0') {
                        *pcVar1 = '\x01';
                      }
                      UNLOCK();
                      if (cVar8 == '\0') break;
                      do {
                      } while (*pcVar1 != '\0');
                    }
                    uVar24 = *(uint *)(lVar35 + 0x38);
                    plVar15 = *(long **)(lVar35 + 0x30);
                    if (uVar24 == 0) {
                      lVar23 = 0;
                      uVar28 = 0x28;
                      uVar24 = 1;
                    }
                    else {
                      lVar23 = (ulong)uVar24 * 0x28;
                      plVar18 = plVar15;
                      do {
                        if ((((lVar14 == *plVar18) && ((char)plVar18[2] == '\0')) &&
                            (uVar21 == *(uint *)(plVar18 + 1))) &&
                           (uVar21 == *(uint *)((long)plVar18 + 0xc))) {
                          lVar35 = plVar18[3];
                          local_1b0 = plVar18[4];
                          *(undefined1 *)(uVar17 + 0x34) = 0;
                          goto LAB_00111cc0;
                        }
                        plVar18 = plVar18 + 5;
                      } while (plVar18 != plVar15 + (ulong)uVar24 * 5);
                      uVar24 = uVar24 + 1;
                      uVar28 = (ulong)uVar24 * 0x28;
                    }
                    *(uint *)(lVar35 + 0x38) = uVar24;
                    lVar16 = Memory::realloc_static(plVar15,uVar28,false);
                    *(long *)(lVar35 + 0x30) = lVar16;
                    RendererRD::MeshStorage::_mesh_surface_generate_version_for_input_mask
                              (pVVar12,(Surface *)(lVar16 + lVar23),uVar17,SUB81(lVar14,0),
                               (Surface *)0x0,(uint)lVar35,uVar21);
                    lVar23 = lVar23 + *(long *)(lVar35 + 0x30);
                    local_1b0 = *(long *)(lVar23 + 0x20);
                    lVar35 = *(long *)(lVar23 + 0x18);
                    *(undefined1 *)(uVar17 + 0x34) = 0;
                    goto LAB_00111cc0;
                  }
                  goto LAB_00110dc2;
                }
                _err_print_index_error
                          ("mesh_instance_surface_get_vertex_arrays_and_format",
                           "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x213,uVar28,
                           uVar17,"p_surface_index","mesh->surface_count","",false,false);
                goto LAB_00111cc0;
              }
              if ((int)plVar15[0x15] + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
            }
            _err_print_error("mesh_instance_surface_get_vertex_arrays_and_format",
                             "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h",0x211);
          }
LAB_00111cc0:
          uVar21 = uStack_84;
          cVar8 = cVar7;
          local_b8 = lVar35;
          if (uStack_84 != 0) {
            local_a8 = (ulong)local_a8._4_4_ << 0x20;
            local_a0 = (undefined1  [16])0x0;
            uVar24 = SceneShaderForwardMobile::ShaderData::PipelineKey::hash
                               ((PipelineKey *)&local_b8);
            if ((local_148 != uVar24) || (local_1c0 != lVar33)) goto LAB_00111d2e;
LAB_00113265:
            lVar14 = 0;
            lVar33 = local_1c0;
            uVar24 = local_148;
LAB_00113283:
            uVar9 = *(ushort *)(local_140 + lVar34) >> 1;
            if ((uVar9 & 0xff) == 0) {
              lVar34 = *(long *)(local_1a0 + 0x90);
            }
            else {
              lVar34 = *(long *)((ulong)((uVar9 & 0xff) - 1) * 0x18 + *(long *)(local_1a0 + 0xa0) +
                                0x10);
            }
            if (local_e8 != local_1b0) {
              uVar19 = RenderingDevice::get_singleton();
              RenderingDevice::draw_list_bind_vertex_array(uVar19,param_1,local_1b0);
            }
            if ((local_e0 != lVar34) && (lVar34 != 0)) {
              uVar19 = RenderingDevice::get_singleton();
              RenderingDevice::draw_list_bind_index_array(uVar19,param_1,lVar34);
            }
            if (lVar14 != 0) {
              uVar19 = RenderingDevice::get_singleton();
              RenderingDevice::draw_list_bind_render_pipeline(uVar19,param_1,lVar14);
            }
            if ((local_d8 != lVar5) && (lVar5 != 0)) {
              uVar19 = RenderingDevice::get_singleton();
              RenderingDevice::draw_list_bind_uniform_set(uVar19,param_1,lVar5,2);
              local_d8 = lVar5;
            }
            if ((local_d0 != local_128) && (local_128 != 0)) {
              uVar19 = RenderingDevice::get_singleton();
              cVar7 = RenderingDevice::uniform_set_is_valid(uVar19,local_128);
              if (cVar7 != '\0') {
                uVar19 = RenderingDevice::get_singleton();
                RenderingDevice::draw_list_bind_uniform_set(uVar19,param_1,local_128,3);
              }
            }
            if (uStack_84 != 0) {
              local_1c8 = local_1c8 & 0xfffffffffffffffc;
              local_68 = CONCAT62((int6)(local_1c8 >> 0x10),
                                  CONCAT11((char)(local_1c8 >> 8),
                                           (byte)local_1c8 | local_198 & 1 |
                                           ((byte)uVar22 & 1) * '\x02')) & 0xf000fffffff87ff |
                         (ulong)bVar29 << 0xb | (ulong)bVar30 << 0xc | (ulong)bVar31 << 0xd |
                         (ulong)bVar32 << 0xe | (ulong)local_190 << 0x2c | (ulong)local_188 << 0x30
                         | (ulong)local_180 << 0x34 | (ulong)local_178 << 0x3c;
              local_144 = (byte)uVar11;
              auStack_57 = SUB1615((undefined1  [16])0x0,1);
              local_58 = local_144 & 3;
              local_60 = uVar13;
            }
            lVar35 = RenderingDevice::get_singleton();
            RenderingDevice::draw_list_set_push_constant(lVar35,(void *)param_1,(uint)&local_78);
            lVar35 = *(long *)(lVar20 + 0x60);
            uVar21 = *(uint *)(lVar35 + 0xbc);
            if (*(uint *)(lVar35 + 0xbc) == 0) {
              uVar21 = 1;
            }
            if ((*(byte *)(lVar20 + 0x16) & 1) != 0) {
              uVar21 = uVar21 / *(uint *)(lVar35 + 0xc0);
            }
            if ((*(byte *)(lVar35 + 8) & 4) == 0) {
              lVar20 = RenderingDevice::get_singleton();
              RenderingDevice::draw_list_draw(lVar20,bVar25,(uint)(lVar34 != 0),uVar21);
            }
            else {
              uVar13 = RenderingDevice::get_singleton();
              iVar4 = *(int *)(lVar20 + 0x18);
              uVar19 = (**(code **)(*(long *)pVVar12 + 0x278))
                                 (pVVar12,**(undefined8 **)(*(long *)(lVar20 + 0x60) + 0xa8));
              RenderingDevice::draw_list_draw_indirect
                        (uVar13,param_1,lVar34 != 0,uVar19,iVar4 * 0x14,1,0);
            }
            local_e8 = local_1b0;
            local_d0 = local_128;
            local_1c0 = lVar33;
            local_148 = uVar24;
            local_e0 = lVar34;
            goto LAB_00110758;
          }
          local_1c8 = local_1c8 & 0xf000fffffff87fc | (ulong)(local_198 & 1) |
                      (ulong)(uVar22 & 1) * 2 | (ulong)bVar29 << 0xb | (ulong)bVar30 << 0xc |
                      (ulong)bVar31 << 0xd | (ulong)bVar32 << 0xe | (ulong)local_190 << 0x2c |
                      (ulong)local_188 << 0x30 | (ulong)local_180 << 0x34 | (ulong)local_178 << 0x3c
          ;
          local_a0._8_8_ = uVar13;
          local_a0._0_8_ = local_1c8;
          local_a8 = CONCAT44(local_a8._4_4_,uVar11);
          uVar24 = SceneShaderForwardMobile::ShaderData::PipelineKey::hash((PipelineKey *)&local_b8)
          ;
          if ((uVar24 == local_148) && (local_1c0 == lVar33)) goto LAB_00113265;
LAB_00111d2e:
          lVar14 = PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
                   ::get_pipeline((PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>
                                   *)(lVar33 + 0x70),&local_b8,uVar24,uVar21 != 0);
          if (lVar14 != 0) goto LAB_00113283;
          uStack_84 = uVar21 + 1;
          uVar24 = local_90;
          uVar21 = uStack_84;
          if (1 < uStack_84) goto LAB_00110758;
          goto LAB_00111b48;
        }
      }
LAB_00110758:
      local_1d8 = local_1d8 + 1;
      local_140 = local_140 + 4;
    } while (param_5 != local_1d8);
    if (cVar8 == '\0') goto switchD_0010f585_default;
    goto LAB_0010f5b8;
  default:
    goto switchD_0010f585_default;
  }
  if (cVar7 != '\0') {
LAB_0010f5b8:
    RenderingServerDefault::changes._0_4_ = (int)RenderingServerDefault::changes + 1;
  }
  goto switchD_0010f585_default;
LAB_00113bfc:
  _err_print_error("_render_list_template",
                   "servers/rendering/renderer_rd/forward_mobile/render_forward_mobile.cpp",0x8ed,
                   "Condition \"p_params->view_count > 1\" is true.",
                   "Multiview not supported for shadow DP pass",0,0);
  goto switchD_0010f585_default;
LAB_00113bc5:
  _err_print_error("_render_list_template",
                   "servers/rendering/renderer_rd/forward_mobile/render_forward_mobile.cpp",0x8f1,
                   "Condition \"p_params->view_count > 1\" is true.",
                   "Multiview not supported for material pass",0,0);
switchD_0010f585_default:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererSceneRenderImplementation::RenderForwardMobile::_render_list_with_draw_list(RendererSceneRenderImplementation::RenderForwardMobile::RenderListParameters*,
   RID, BitField<RenderingDevice::DrawFlags>, Vector<Color> const&, float, unsigned int, Rect2
   const&) */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::_render_list_with_draw_list
          (undefined4 param_1_00,RenderForwardMobile *this,RenderListParameters *param_1,
          undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined4 param_7,
          undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = RenderingDevice::get_singleton();
  lVar2 = RenderingDevice::framebuffer_get_format(uVar1,param_4);
  *(long *)(param_1 + 0x50) = lVar2;
  uVar1 = RenderingDevice::get_singleton();
  lVar3 = RenderingDevice::draw_list_begin
                    (param_1_00,uVar1,param_4,param_5,param_6,param_7,param_8,0);
  _render_list(this,lVar3,lVar2,param_1,0,*(uint *)(param_1 + 0x10));
  RenderingDevice::get_singleton();
  RenderingDevice::draw_list_end();
  return;
}



/* RendererSceneRenderImplementation::RenderForwardMobile::_render_shadow_end() */

void RendererSceneRenderImplementation::RenderForwardMobile::_render_shadow_end(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  long in_RDI;
  long in_FS_OFFSET;
  long local_d0;
  char *local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  undefined1 local_94;
  uint local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = RenderingDevice::get_singleton();
  local_d0 = 0;
  local_c8 = "Shadow Render";
  local_c0 = 0xd;
  local_a8 = CONCAT44(_LC74,_LC74);
  uStack_a0 = CONCAT44(_LC74,_LC74);
  String::parse_latin1((StrRange *)&local_d0);
  RenderingDevice::draw_command_begin_label(uVar3,(StrRange *)&local_d0,&local_a8);
  lVar2 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  puVar4 = *(uint **)(in_RDI + 0x2ef0);
  puVar5 = puVar4 + (ulong)*(uint *)(in_RDI + 0x2ee8) * 0x10;
  for (; puVar5 != puVar4; puVar4 = puVar4 + 0x10) {
    local_50 = *puVar4;
    local_94 = (undefined1)puVar4[2];
    local_64 = *(undefined8 *)(puVar4 + 6);
    local_90 = puVar4[3];
    uStack_a0 = *(long *)(in_RDI + 0x2f50) + (ulong)local_50 * 4;
    local_98 = puVar4[1];
    local_a8 = *(long *)(in_RDI + 0x2f40) + (ulong)local_50 * 8;
    local_74 = *(undefined8 *)(in_RDI + 0x2bc0);
    uStack_6c = *(undefined8 *)(in_RDI + 0x2bc8);
    local_88 = *(undefined8 *)(puVar4 + 4);
    local_58 = 0;
    local_4c = 0;
    local_8c = 1;
    local_80 = 0;
    local_7c = 0;
    local_b8 = Rect2i::operator_cast_to_Rect2((Rect2i *)(puVar4 + 10));
    local_c0 = 0;
    _render_list_with_draw_list((RenderForwardMobile *)0x0);
    lVar2 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  uVar3 = RenderingDevice::get_singleton();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    RenderingDevice::draw_command_end_label();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererSceneRenderImplementation::RenderForwardMobile::_render_shadow_pass(RID, RID, int,
   PagedArray<RenderGeometryInstance*> const&, float, float, bool, bool, bool,
   RenderingMethod::RenderInfo*, Transform3D const&) */

void RendererSceneRenderImplementation::RenderForwardMobile::_render_shadow_pass
               (RenderForwardMobile *param_1,ulong param_2,ulong param_3,int param_4,
               undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
               undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long *plVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  long *plVar16;
  ulong uVar17;
  uint *puVar18;
  code *pcVar19;
  undefined8 uVar20;
  uint uVar21;
  long lVar22;
  int *piVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  uint uVar27;
  undefined4 *puVar28;
  uint uVar29;
  uint uVar30;
  Projection *pPVar31;
  Rect2 *pRVar32;
  undefined4 *puVar33;
  ulong uVar34;
  undefined8 uVar35;
  uint uVar36;
  undefined8 in_R10;
  uint uVar37;
  ulong uVar38;
  uint uVar39;
  uint uVar40;
  long in_FS_OFFSET;
  bool bVar41;
  bool bVar42;
  byte bVar43;
  float fVar44;
  int iVar47;
  undefined8 uVar45;
  undefined1 auVar46 [16];
  float fVar48;
  undefined1 auVar49 [16];
  uint local_1f8;
  uint uStack_1f4;
  long local_1c0;
  long local_178;
  ulong local_160;
  ulong local_158 [2];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  bVar43 = 0;
  local_1f8 = (uint)param_3;
  uStack_1f4 = (uint)(param_3 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar20 = param_5;
  plVar16 = (long *)RendererRD::LightStorage::get_singleton();
  uVar21 = (uint)param_2;
  if ((uVar21 < *(uint *)((long)plVar16 + 0x84)) && (param_2 >> 0x20 != 0x7fffffff)) {
    lVar22 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(plVar16 + 0x10)) * 0x498 +
             *(long *)(plVar16[0xe] +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(plVar16 + 0x10)) * 8);
    uVar25 = *(uint *)(lVar22 + 0x490);
    uVar29 = uVar25 & 0x7fffffff;
    if (uVar29 == (uint)(param_2 >> 0x20)) {
      if (param_2 == 0) {
LAB_0011e040:
                    /* WARNING: Does not return */
        pcVar19 = (code *)invalidInstructionException();
        (*pcVar19)();
      }
      if ((int)uVar25 < 0) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0,in_R10);
        goto LAB_0011e040;
      }
      local_148._0_8_ = 0;
      uVar1 = *(ulong *)(lVar22 + 0x3d0);
      local_148._8_8_ = 0;
      local_158[0] = 0;
      local_1c0 = 0;
      Projection::Projection((Projection *)&local_c8);
      local_128 = ZEXT416(_LC74);
      local_108 = 0x3f800000;
      uStack_104 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      uVar25 = (uint)uVar1;
      iVar15 = (int)(uVar1 >> 0x20);
      local_118 = local_128;
      if (*(code **)(*plVar16 + 0xf8) == RendererRD::LightStorage::light_get_type) {
        if ((uVar1 != 0) && (uVar25 < *(uint *)((long)plVar16 + 0x2c))) {
          piVar23 = (int *)(((uVar1 & 0xffffffff) % (ulong)*(uint *)(plVar16 + 5)) * 0xe8 +
                           *(long *)(plVar16[3] +
                                    ((uVar1 & 0xffffffff) / (ulong)*(uint *)(plVar16 + 5)) * 8));
          iVar14 = piVar23[0x38];
          if (iVar14 == iVar15) {
            iVar14 = *piVar23;
            goto LAB_00114651;
          }
          if (iVar14 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
        }
        uVar20 = 0;
        _err_print_error("light_get_type",
                         "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x1ff,
                         "Parameter \"light\" is null.",0,0);
LAB_00114b58:
        if (*(uint *)((long)plVar16 + 0x84) <= uVar21) {
LAB_0011dfc4:
                    /* WARNING: Does not return */
          pcVar19 = (code *)invalidInstructionException();
          (*pcVar19)();
        }
        lVar22 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(plVar16 + 0x10)) * 0x498 +
                 *(long *)(plVar16[0xe] +
                          ((param_2 & 0xffffffff) / (ulong)*(uint *)(plVar16 + 0x10)) * 8);
        uVar30 = *(uint *)(lVar22 + 0x490);
        if (uVar30 != uVar29) {
          if (uVar30 + 0x80000000 < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0,plVar16[0xe]);
          }
          goto LAB_0011dfc4;
        }
        if (*(long *)(lVar22 + 0x438) != *(long *)(param_1 + 0x2498)) {
          local_88 = RendererRD::LightStorage::get_directional_shadow_rect();
          auVar46 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_88);
          if (*(uint *)((long)plVar16 + 0x84) <= uVar21) {
            FUN_0011dfce();
            return;
          }
          lVar22 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(plVar16 + 0x10)) * 0x498 +
                   *(long *)(plVar16[0xe] +
                            ((param_2 & 0xffffffff) / (ulong)*(uint *)(plVar16 + 0x10)) * 8);
          if (*(uint *)(lVar22 + 0x490) != uVar29) {
            _DAT_00000450 = auVar46;
            if (*(uint *)(lVar22 + 0x490) + 0x80000000 < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
                    /* WARNING: Does not return */
              pcVar19 = (code *)invalidInstructionException();
              (*pcVar19)();
            }
                    /* WARNING: Does not return */
            pcVar19 = (code *)invalidInstructionException();
            (*pcVar19)();
          }
          *(undefined1 (*) [16])(lVar22 + 0x450) = auVar46;
          uVar35 = *(undefined8 *)(param_1 + 0x2498);
          *(int *)((long)plVar16 + 0x3a4) = *(int *)((long)plVar16 + 0x3a4) + 1;
          if (*(uint *)(lVar22 + 0x490) != uVar29) {
            uVar21 = *(uint *)(lVar22 + 0x490) + 0x80000000;
            if (uVar21 < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0,uVar21);
            }
            _DAT_00000438 = 0;
                    /* WARNING: Does not return */
            pcVar19 = (code *)invalidInstructionException();
            (*pcVar19)();
          }
          *(undefined8 *)(lVar22 + 0x438) = uVar35;
        }
        if (*(code **)(*plVar16 + 0x108) == RendererRD::LightStorage::light_get_param) {
          if ((uVar1 != 0) && (uVar25 < *(uint *)((long)plVar16 + 0x2c))) {
            lVar22 = ((uVar1 & 0xffffffff) % (ulong)*(uint *)(plVar16 + 5)) * 0xe8 +
                     *(long *)(plVar16[3] +
                              ((uVar1 & 0xffffffff) / (ulong)*(uint *)(plVar16 + 5)) * 8);
            iVar14 = *(int *)(lVar22 + 0xe0);
            if (iVar14 == iVar15) {
              bVar41 = 0.0 < *(float *)(lVar22 + 0x44);
              goto LAB_00114c23;
            }
            if (iVar14 + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
          }
          uVar20 = 0;
          _err_print_error("light_get_param",
                           "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x207,
                           "Parameter \"light\" is null.",0,0);
          bVar41 = false;
        }
        else {
          fVar44 = (float)(**(code **)(*plVar16 + 0x108))(plVar16,uVar1,0x10);
          bVar41 = 0.0 < fVar44;
        }
LAB_00114c23:
        if (*(uint *)((long)plVar16 + 0x84) <= uVar21) {
LAB_0011e05c:
          puVar28 = (undefined4 *)((long)param_4 * 0x9c + 4);
          pPVar31 = (Projection *)local_88;
          for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
            *(undefined4 *)pPVar31 = *puVar28;
            puVar28 = puVar28 + (ulong)bVar43 * -2 + 1;
            pPVar31 = pPVar31 + (ulong)bVar43 * -8 + 4;
          }
                    /* WARNING: Does not return */
          pcVar19 = (code *)invalidInstructionException();
          (*pcVar19)();
        }
        lVar22 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(plVar16 + 0x10)) * 0x498 +
                 *(long *)(plVar16[0xe] +
                          ((param_2 & 0xffffffff) / (ulong)*(uint *)(plVar16 + 0x10)) * 8);
        uVar30 = *(uint *)(lVar22 + 0x490);
        if (uVar30 != uVar29) {
          if (uVar30 + 0x80000000 < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0,uVar20);
          }
          goto LAB_0011e05c;
        }
        lVar26 = (long)param_4 * 0x9c;
        lVar22 = lVar22 + lVar26;
        local_c8 = *(undefined8 *)(lVar22 + 4);
        uStack_c0 = *(undefined8 *)(lVar22 + 0xc);
        local_b8 = *(undefined8 *)(lVar22 + 0x14);
        uStack_b0 = *(undefined8 *)(lVar22 + 0x1c);
        local_a8 = *(undefined8 *)(lVar22 + 0x24);
        uStack_a0 = *(undefined8 *)(lVar22 + 0x2c);
        local_98 = *(undefined8 *)(lVar22 + 0x34);
        uStack_90 = *(undefined8 *)(lVar22 + 0x3c);
        local_88._0_8_ = local_c8;
        local_88._8_8_ = uStack_c0;
        local_78 = local_b8;
        uStack_70 = uStack_b0;
        local_68 = local_a8;
        uStack_60 = uStack_a0;
        local_58 = local_98;
        uStack_50 = uStack_90;
        Projection::~Projection((Projection *)local_88);
        if (*(uint *)((long)plVar16 + 0x84) <= uVar21) {
LAB_0011e08a:
          local_178 = (long)param_4;
          puVar28 = (undefined4 *)(local_178 * 0x9c + 0x44);
          puVar33 = (undefined4 *)local_88;
          for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
            *puVar33 = *puVar28;
            puVar28 = puVar28 + (ulong)bVar43 * -2 + 1;
            puVar33 = puVar33 + (ulong)bVar43 * -2 + 1;
          }
                    /* WARNING: Does not return */
          pcVar19 = (code *)invalidInstructionException();
          (*pcVar19)();
        }
        lVar22 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(plVar16 + 0x10)) * 0x498 +
                 *(long *)(plVar16[0xe] +
                          ((param_2 & 0xffffffff) / (ulong)*(uint *)(plVar16 + 0x10)) * 8);
        if (*(uint *)(lVar22 + 0x490) != uVar29) {
          if (*(uint *)(lVar22 + 0x490) + 0x80000000 < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0,plVar16[0xe]);
          }
          goto LAB_0011e08a;
        }
        lVar26 = lVar22 + 0x40 + lVar26;
        local_88._0_8_ = *(undefined8 *)(lVar22 + 0x450);
        local_88._8_8_ = *(undefined8 *)(lVar22 + 0x458);
        local_128 = *(undefined1 (*) [16])(lVar26 + 4);
        local_78 = *(undefined8 *)*(undefined1 (*) [16])(lVar26 + 0x14);
        uStack_70 = *(undefined8 *)(lVar26 + 0x1c);
        local_118 = *(undefined1 (*) [16])(lVar26 + 0x14);
        local_68 = *(undefined8 *)(lVar26 + 0x24);
        uStack_60 = *(undefined8 *)(lVar26 + 0x2c);
        local_108 = (undefined4)local_68;
        uStack_104 = (undefined4)((ulong)local_68 >> 0x20);
        uStack_100 = (undefined4)uStack_60;
        uStack_fc = (undefined4)((ulong)uStack_60 >> 0x20);
        local_148 = Rect2::operator_cast_to_Rect2i((Rect2 *)local_88);
        iVar14 = (**(code **)(*plVar16 + 0xd8))(plVar16,uVar1);
        uVar20 = local_148._0_8_;
        if (iVar14 == 2) {
          iVar14 = (int)(local_148._8_4_ + (uint)(local_148._8_4_ < 0)) >> 1;
          iVar47 = (int)(local_148._12_4_ + (uint)((long)local_148._8_8_ < 0)) >> 1;
          uVar35 = CONCAT44(iVar47,iVar14);
          auVar10._8_8_ = uVar35;
          auVar10._0_8_ = local_148._0_8_;
          if (param_4 == 1) {
            local_148._0_4_ = local_148._0_4_ + iVar14;
            auVar10._0_8_ = local_148._0_8_;
          }
          else if (param_4 == 2) {
            local_148._4_4_ = local_148._4_4_ + iVar47;
            auVar10._0_8_ = local_148._0_8_;
          }
          else if (param_4 == 3) {
            local_148._0_8_ = uVar20;
            local_148._8_8_ = uVar35;
            Vector2i::operator+=((Vector2i *)local_148,(Vector2i *)(local_148 + 8));
            auVar10._8_8_ = local_148._8_8_;
            auVar10._0_8_ = local_148._0_8_;
          }
        }
        else {
          iVar14 = (**(code **)(*plVar16 + 0xd8))(plVar16,uVar1);
          auVar46 = local_148;
          auVar10 = local_148;
          if (iVar14 == 1) {
            iVar14 = (int)local_148._12_4_ / 2;
            local_148._12_4_ = iVar14;
            auVar10._8_8_ = local_148._8_8_;
            auVar10._0_8_ = local_148._0_8_;
            if (param_4 != 0) {
              local_148._4_4_ = auVar46._4_4_;
              local_148._0_4_ = auVar46._0_4_;
              local_148._4_4_ = local_148._4_4_ + iVar14;
              auVar10._0_8_ = local_148._0_8_;
            }
          }
        }
        fVar44 = (float)*(int *)((long)plVar16 + 0x39c);
        local_148 = auVar10;
        auVar46 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_148);
        auVar9._4_4_ = fVar44;
        auVar9._0_4_ = fVar44;
        auVar9._8_4_ = fVar44;
        auVar9._12_4_ = fVar44;
        auVar46 = divps(auVar46,auVar9);
        if (uVar21 < *(uint *)((long)plVar16 + 0x84)) {
          lVar22 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(plVar16 + 0x10)) * 0x498 +
                   *(long *)(plVar16[0xe] +
                            ((param_2 & 0xffffffff) / (ulong)*(uint *)(plVar16 + 0x10)) * 8);
          if (*(uint *)(lVar22 + 0x490) != uVar29) {
            if (0x7ffffffe < *(uint *)(lVar22 + 0x490) + 0x80000000) goto LAB_00115f4c;
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
            lVar22 = 0;
          }
        }
        else {
LAB_00115f4c:
          lVar22 = 0;
        }
        plVar11 = RenderingServerGlobals::light_storage;
        *(undefined1 (*) [16])(lVar22 + 0x88 + (long)param_4 * 0x9c) = auVar46;
        if (*(code **)(*plVar11 + 0x108) == RendererRD::LightStorage::light_get_param) {
          if ((uVar1 != 0) && (uVar25 < *(uint *)((long)plVar11 + 0x2c))) {
            iVar14 = *(int *)(((uVar1 & 0xffffffff) % (ulong)*(uint *)(plVar11 + 5)) * 0xe8 +
                              *(long *)(plVar11[3] +
                                       ((uVar1 & 0xffffffff) / (ulong)*(uint *)(plVar11 + 5)) * 8) +
                             0xe0);
            if (iVar14 == iVar15) goto LAB_00114e9a;
            if (iVar14 + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
          }
          _err_print_error("light_get_param",
                           "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x207,
                           "Parameter \"light\" is null.",0,0);
        }
        else {
          (**(code **)(*plVar11 + 0x108))(plVar11,uVar1,4);
        }
LAB_00114e9a:
        local_1c0 = plVar16[0x72];
        uVar35 = 0;
        bVar42 = false;
        uVar20 = 1;
LAB_00114eb8:
        _render_shadow_append
                  (param_1,local_1c0,param_5,(Projection *)&local_c8,local_128,uVar35,bVar42,bVar41,
                   local_148,uVar20,param_8,param_6,param_7,param_9,param_10);
      }
      else {
        iVar14 = (**(code **)(*plVar16 + 0xf8))(plVar16,uVar1);
LAB_00114651:
        if (iVar14 == 0) goto LAB_00114b58;
        if ((local_1f8 < *(uint *)((long)plVar16 + 0x34c)) && (param_3 >> 0x20 != 0x7fffffff)) {
          lVar22 = *(long *)(plVar16[0x67] +
                            ((param_3 & 0xffffffff) / (ulong)*(uint *)(plVar16 + 0x69)) * 8) +
                   ((param_3 & 0xffffffff) % (ulong)*(uint *)(plVar16 + 0x69)) * 200;
          uVar30 = *(uint *)(lVar22 + 0xc0) & 0x7fffffff;
          if (uVar30 != uStack_1f4) goto LAB_001146b7;
          if (param_3 == 0) {
LAB_001157a3:
            _err_print_error("shadow_atlas_owns_light_instance",
                             "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x43b,
                             "Parameter \"atlas\" is null.",0,0);
          }
          else {
            if ((int)*(uint *)(lVar22 + 0xc0) < 0) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
              goto LAB_001157a3;
            }
            if ((*(long *)(lVar22 + 0x98) != 0) && (*(int *)(lVar22 + 0xbc) != 0)) {
              uVar34 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                           (ulong)*(uint *)(lVar22 + 0xb8) * 4));
              lVar26 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar22 + 0xb8) * 8);
              uVar17 = param_2 * 0x3ffff - 1;
              uVar17 = (uVar17 ^ uVar17 >> 0x1f) * 0x15;
              uVar17 = (uVar17 ^ uVar17 >> 0xb) * 0x41;
              uVar17 = uVar17 >> 0x16 ^ uVar17;
              uVar38 = uVar17 & 0xffffffff;
              if ((int)uVar17 == 0) {
                uVar38 = 1;
              }
              auVar46._8_8_ = 0;
              auVar46._0_8_ = uVar38 * lVar26;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = uVar34;
              lVar24 = SUB168(auVar46 * auVar5,8);
              uVar12 = *(uint *)(*(long *)(lVar22 + 0xa0) + lVar24 * 4);
              iVar14 = SUB164(auVar46 * auVar5,8);
              if (uVar12 != 0) {
                uVar39 = 0;
                do {
                  if (((uint)uVar38 == uVar12) &&
                     (param_2 == *(ulong *)(*(long *)(*(long *)(lVar22 + 0x98) + lVar24 * 8) + 0x10)
                     )) {
                    (**(code **)(*RenderingServerGlobals::light_storage + 0x3b0))
                              (RenderingServerGlobals::light_storage,param_3);
                    local_160 = param_2;
                    if (local_1f8 < *(uint *)((long)plVar16 + 0x34c)) {
                      lVar22 = *(long *)(plVar16[0x67] +
                                        ((param_3 & 0xffffffff) / (ulong)*(uint *)(plVar16 + 0x69))
                                        * 8) +
                               ((param_3 & 0xffffffff) % (ulong)*(uint *)(plVar16 + 0x69)) * 200;
                      uVar12 = *(uint *)(lVar22 + 0xc0);
                      if (uVar12 != uVar30) {
                        if (uVar12 + 0x80000000 < 0x7fffffff) {
                          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                           "Method/function failed. Returning: nullptr",
                                           "Attempting to use an uninitialized RID",0,0);
                        }
                        goto LAB_00115df0;
                      }
                      puVar18 = (uint *)HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>
                                        ::operator[]((
                                                  HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>
                                                  *)(lVar22 + 0x90),(RID *)&local_160);
                      uVar12 = *puVar18 & 0x3ffffff;
                      uVar39 = *puVar18 >> 0x1b;
                      uVar40 = uVar39 & 3;
                    }
                    else {
LAB_00115df0:
                      uVar34 = 0;
                      lVar26 = 0;
                      uVar40 = 3;
                      uVar39 = 0x1f;
                      _err_print_error("shadow_atlas_get_light_instance_key",
                                       "./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                                       0x440,"Parameter \"atlas\" is null.");
                      uVar12 = 0x3ffffff;
                    }
                    if (local_1f8 < *(uint *)((long)plVar16 + 0x34c)) {
                      lVar22 = *(long *)(plVar16[0x67] +
                                        ((param_3 & 0xffffffff) / (ulong)*(uint *)(plVar16 + 0x69))
                                        * 8) +
                               ((param_3 & 0xffffffff) % (ulong)*(uint *)(plVar16 + 0x69)) * 200;
                      uVar27 = *(uint *)(lVar22 + 0xc0);
                      if (uVar27 != uVar30) {
                        if (uVar27 + 0x80000000 < 0x7fffffff) {
                          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                           "Method/function failed. Returning: nullptr",
                                           "Attempting to use an uninitialized RID",0,0);
                        }
                        goto LAB_00115618;
                      }
                      uVar36 = *(uint *)(lVar22 + (ulong)uVar40 * 0x18);
LAB_0011493e:
                      lVar24 = *(long *)(lVar22 + 0x10 + (ulong)uVar40 * 0x18);
                      if ((lVar24 != 0) && ((int)uVar12 < *(int *)(lVar24 + -8))) {
                        uVar27 = *(uint *)(lVar22 + 0x74);
                        uVar13 = uVar27 >> 1;
                        uVar37 = uVar13 / uVar36;
                        local_148._8_8_ = CONCAT44(uVar37,uVar37);
                        local_148._0_8_ =
                             CONCAT44((uVar12 / uVar36) * uVar37 + (-(uVar40 >> 1) & uVar13),
                                      (uVar12 % uVar36) * uVar37 + (-(uVar39 & 1) & uVar13));
                        if (*(code **)(*plVar16 + 0x108) !=
                            RendererRD::LightStorage::light_get_param) {
                          (**(code **)(*plVar16 + 0x108))(plVar16,uVar1,4);
LAB_00115393:
                          pcVar19 = *(code **)(*plVar16 + 0xf8);
                          if (pcVar19 != RendererRD::LightStorage::light_get_type)
                          goto LAB_001150a8;
                          if (uVar1 == 0) {
LAB_001153b6:
                            uVar34 = 0;
                            _err_print_error("light_get_type",
                                             "./servers/rendering/renderer_rd/storage_rd/light_storage.h"
                                             ,0x1ff,"Parameter \"light\" is null.",0);
                            goto LAB_001153db;
                          }
LAB_00114a38:
                          if (*(uint *)((long)plVar16 + 0x2c) <= uVar25) goto LAB_001153b6;
                          piVar23 = (int *)(((uVar1 & 0xffffffff) % (ulong)*(uint *)(plVar16 + 5)) *
                                            0xe8 + *(long *)(plVar16[3] +
                                                            ((uVar1 & 0xffffffff) /
                                                            (ulong)*(uint *)(plVar16 + 5)) * 8));
                          iVar14 = piVar23[0x38];
                          if (iVar14 != iVar15) {
                            if (iVar14 + 0x80000000U < 0x7fffffff) {
                              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                               "Method/function failed. Returning: nullptr",
                                               "Attempting to use an uninitialized RID",0,0);
                            }
                            goto LAB_001153b6;
                          }
                          if (*piVar23 == 1) goto LAB_001150d9;
                          pcVar19 = *(code **)(*plVar16 + 0xf8);
                          if (pcVar19 == RendererRD::LightStorage::light_get_type)
                          goto LAB_00114a93;
LAB_00115910:
                          iVar15 = (*pcVar19)(plVar16,uVar1);
LAB_00114acd:
                          if (iVar15 == 2) {
                            if (*(uint *)((long)plVar16 + 0x84) <= uVar21) {
LAB_0011e0b8:
                              puVar28 = (undefined4 *)&DAT_00000004;
                              puVar33 = (undefined4 *)local_88;
                              for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
                                *puVar33 = *puVar28;
                                puVar28 = puVar28 + (ulong)bVar43 * -2 + 1;
                                puVar33 = puVar33 + (ulong)bVar43 * -2 + 1;
                              }
                    /* WARNING: Does not return */
                              pcVar19 = (code *)invalidInstructionException();
                              (*pcVar19)();
                            }
                            lVar22 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(plVar16 + 0x10)) *
                                     0x498 + *(long *)(plVar16[0xe] +
                                                      ((param_2 & 0xffffffff) /
                                                      (ulong)*(uint *)(plVar16 + 0x10)) * 8);
                            if (*(uint *)(lVar22 + 0x490) != uVar29) {
                              if (*(uint *)(lVar22 + 0x490) + 0x80000000 < 0x7fffffff) {
                                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                                 "Method/function failed. Returning: nullptr",
                                                 "Attempting to use an uninitialized RID",0,0,
                                                 plVar16);
                              }
                              goto LAB_0011e0b8;
                            }
                            local_c8 = *(undefined8 *)(lVar22 + 4);
                            uStack_c0 = *(undefined8 *)(lVar22 + 0xc);
                            local_b8 = *(undefined8 *)(lVar22 + 0x14);
                            uStack_b0 = *(undefined8 *)(lVar22 + 0x1c);
                            local_a8 = *(undefined8 *)(lVar22 + 0x24);
                            uStack_a0 = *(undefined8 *)(lVar22 + 0x2c);
                            local_98 = *(undefined8 *)(lVar22 + 0x34);
                            uStack_90 = *(undefined8 *)(lVar22 + 0x3c);
                            local_88._0_8_ = local_c8;
                            local_88._8_8_ = uStack_c0;
                            local_78 = local_b8;
                            uStack_70 = uStack_b0;
                            local_68 = local_a8;
                            uStack_60 = uStack_a0;
                            local_58 = local_98;
                            uStack_50 = uStack_90;
                            Projection::~Projection((Projection *)local_88);
                            if (*(uint *)((long)plVar16 + 0x84) <= uVar21) {
LAB_0011e14b:
                              puVar28 = (undefined4 *)&DAT_00000044;
                              puVar33 = (undefined4 *)local_88;
                              for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
                                *puVar33 = *puVar28;
                                puVar28 = puVar28 + (ulong)bVar43 * -2 + 1;
                                puVar33 = puVar33 + (ulong)bVar43 * -2 + 1;
                              }
                    /* WARNING: Does not return */
                              pcVar19 = (code *)invalidInstructionException();
                              (*pcVar19)();
                            }
                            lVar22 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(plVar16 + 0x10)) *
                                     0x498 + *(long *)(plVar16[0xe] +
                                                      ((param_2 & 0xffffffff) /
                                                      (ulong)*(uint *)(plVar16 + 0x10)) * 8);
                            if (*(uint *)(lVar22 + 0x490) != uVar29) {
                              if (*(uint *)(lVar22 + 0x490) + 0x80000000 < 0x7fffffff) {
                                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                                 "Method/function failed. Returning: nullptr",
                                                 "Attempting to use an uninitialized RID",0,0,uVar34
                                                );
                              }
                              goto LAB_0011e14b;
                            }
                            local_88._0_8_ = *(undefined8 *)*(undefined1 (*) [16])(lVar22 + 0x44);
                            local_88._8_8_ = *(undefined8 *)(lVar22 + 0x4c);
                            local_128 = *(undefined1 (*) [16])(lVar22 + 0x44);
                            local_78 = *(undefined8 *)*(undefined1 (*) [16])(lVar22 + 0x54);
                            uStack_70 = *(undefined8 *)(lVar22 + 0x5c);
                            local_118 = *(undefined1 (*) [16])(lVar22 + 0x54);
                            local_68 = *(undefined8 *)(lVar22 + 100);
                            uStack_60 = *(undefined8 *)(lVar22 + 0x6c);
                            local_108 = (undefined4)local_68;
                            uStack_104 = (undefined4)((ulong)local_68 >> 0x20);
                            uStack_100 = (undefined4)uStack_60;
                            uStack_fc = (undefined4)((ulong)uStack_60 >> 0x20);
                            if (local_1f8 < *(uint *)((long)plVar16 + 0x34c)) {
                              lVar22 = *(long *)(plVar16[0x67] +
                                                ((param_3 & 0xffffffff) /
                                                (ulong)*(uint *)(plVar16 + 0x69)) * 8) +
                                       ((param_3 & 0xffffffff) % (ulong)*(uint *)(plVar16 + 0x69)) *
                                       200;
                              uVar21 = *(uint *)(lVar22 + 0xc0);
                              if (uVar21 != uVar30) {
                                if (uVar21 + 0x80000000 < 0x7fffffff) {
                                  _err_print_error("get_or_null","./core/templates/rid_owner.h",
                                                   0x103,
                                                  "Method/function failed. Returning: nullptr",
                                                  "Attempting to use an uninitialized RID",0,0);
                                }
                                goto LAB_001158a3;
                              }
                              local_1c0 = *(long *)(lVar22 + 0x88);
                            }
                            else {
LAB_001158a3:
                              _err_print_error("shadow_atlas_get_fb",
                                               "./servers/rendering/renderer_rd/storage_rd/light_storage.h"
                                               ,0x460,"Parameter \"atlas\" is null.",0,0);
                              local_1c0 = 0;
                            }
                            uVar35 = 0;
                            bVar42 = false;
                            bVar41 = false;
                            uVar20 = 1;
                          }
                          else {
LAB_00114ad6:
                            uVar35 = 0;
                            bVar42 = false;
                            bVar41 = false;
                            uVar20 = 0;
                          }
                          goto LAB_00114eb8;
                        }
                        if ((uVar1 == 0) || (*(uint *)((long)plVar16 + 0x2c) <= uVar25)) {
LAB_00115ff8:
                          uVar34 = 0;
                          lVar26 = 0;
                          _err_print_error("light_get_param",
                                           "./servers/rendering/renderer_rd/storage_rd/light_storage.h"
                                           ,0x207);
                          goto LAB_00115393;
                        }
                        iVar14 = *(int *)(((uVar1 & 0xffffffff) % (ulong)*(uint *)(plVar16 + 5)) *
                                          0xe8 + *(long *)(plVar16[3] +
                                                          ((uVar1 & 0xffffffff) /
                                                          (ulong)*(uint *)(plVar16 + 5)) * 8) + 0xe0
                                         );
                        if (iVar14 != iVar15) {
                          if (iVar14 + 0x80000000U < 0x7fffffff) {
                            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                             "Method/function failed. Returning: nullptr",
                                             "Attempting to use an uninitialized RID",0,0);
                          }
                          goto LAB_00115ff8;
                        }
                        pcVar19 = *(code **)(*plVar16 + 0xf8);
                        if (pcVar19 == RendererRD::LightStorage::light_get_type) goto LAB_00114a38;
LAB_001150a8:
                        iVar14 = (*pcVar19)(plVar16,uVar1);
                        if (iVar14 != 1) {
LAB_001153db:
                          pcVar19 = *(code **)(*plVar16 + 0xf8);
                          if (pcVar19 != RendererRD::LightStorage::light_get_type)
                          goto LAB_00115910;
                          if (uVar1 != 0) {
LAB_00114a93:
                            if (uVar25 < *(uint *)((long)plVar16 + 0x2c)) {
                              piVar23 = (int *)(((uVar1 & 0xffffffff) %
                                                (ulong)*(uint *)(plVar16 + 5)) * 0xe8 +
                                               *(long *)(plVar16[3] +
                                                        ((uVar1 & 0xffffffff) /
                                                        (ulong)*(uint *)(plVar16 + 5)) * 8));
                              iVar14 = piVar23[0x38];
                              if (iVar14 == iVar15) {
                                iVar15 = *piVar23;
                                goto LAB_00114acd;
                              }
                              if (iVar14 + 0x80000000U < 0x7fffffff) {
                                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                                 "Method/function failed. Returning: nullptr",
                                                 "Attempting to use an uninitialized RID",0,0);
                              }
                            }
                          }
                          _err_print_error("light_get_type",
                                           "./servers/rendering/renderer_rd/storage_rd/light_storage.h"
                                           ,0x1ff,"Parameter \"light\" is null.",0,0);
                          goto LAB_00114ad6;
                        }
LAB_001150d9:
                        bVar41 = (uVar12 + 1) % uVar36 != 0;
                        if (bVar41) {
                          iVar15 = 1;
                        }
                        else {
                          iVar15 = 1 - uVar36;
                        }
                        local_158[0] = (ulong)CONCAT14(!bVar41,iVar15);
                        iVar15 = (**(code **)(*plVar16 + 0xe0))(plVar16,uVar1);
                        if (iVar15 != 1) {
                          local_148._4_4_ = _UNK_0012a134 + local_148._4_4_;
                          local_148._0_4_ = __LC240 + local_148._0_4_;
                          local_148._12_4_ = _UNK_0012a13c + local_148._12_4_;
                          local_148._8_4_ = _UNK_0012a138 + local_148._8_4_;
                          local_f8 = Vector2i::operator*((Vector2i *)(local_148 + 8),param_4);
                          local_88._0_8_ =
                               Vector2i::operator*((Vector2i *)&local_f8,(Vector2i *)local_158);
                          Vector2i::operator+=((Vector2i *)local_148,(Vector2i *)local_88);
                          if (*(uint *)((long)plVar16 + 0x84) <= uVar21) {
LAB_0011e0f8:
                            puVar28 = (undefined4 *)&DAT_00000004;
                            pPVar31 = (Projection *)local_88;
                            for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
                              *(undefined4 *)pPVar31 = *puVar28;
                              puVar28 = puVar28 + (ulong)bVar43 * -2 + 1;
                              pPVar31 = pPVar31 + (ulong)bVar43 * -8 + 4;
                            }
                    /* WARNING: Does not return */
                            pcVar19 = (code *)invalidInstructionException();
                            (*pcVar19)();
                          }
                          lVar22 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(plVar16 + 0x10)) *
                                   0x498 + *(long *)(plVar16[0xe] +
                                                    ((param_2 & 0xffffffff) /
                                                    (ulong)*(uint *)(plVar16 + 0x10)) * 8);
                          if (*(uint *)(lVar22 + 0x490) != uVar29) {
                            if (*(uint *)(lVar22 + 0x490) + 0x80000000 < 0x7fffffff) {
                              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                               "Method/function failed. Returning: nullptr",
                                               "Attempting to use an uninitialized RID",0,0,lVar26);
                            }
                            goto LAB_0011e0f8;
                          }
                          local_c8 = *(undefined8 *)(lVar22 + 4);
                          uStack_c0 = *(undefined8 *)(lVar22 + 0xc);
                          local_b8 = *(undefined8 *)(lVar22 + 0x14);
                          uStack_b0 = *(undefined8 *)(lVar22 + 0x1c);
                          local_a8 = *(undefined8 *)(lVar22 + 0x24);
                          uStack_a0 = *(undefined8 *)(lVar22 + 0x2c);
                          local_98 = *(undefined8 *)(lVar22 + 0x34);
                          uStack_90 = *(undefined8 *)(lVar22 + 0x3c);
                          local_88._0_8_ = local_c8;
                          local_88._8_8_ = uStack_c0;
                          local_78 = local_b8;
                          uStack_70 = uStack_b0;
                          local_68 = local_a8;
                          uStack_60 = uStack_a0;
                          local_58 = local_98;
                          uStack_50 = uStack_90;
                          Projection::~Projection((Projection *)local_88);
                          if (*(uint *)((long)plVar16 + 0x84) <= uVar21) goto LAB_0011e14b;
                          lVar22 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(plVar16 + 0x10)) *
                                   0x498 + *(long *)(plVar16[0xe] +
                                                    ((param_2 & 0xffffffff) /
                                                    (ulong)*(uint *)(plVar16 + 0x10)) * 8);
                          if (*(uint *)(lVar22 + 0x490) != uVar29) {
                            if (*(uint *)(lVar22 + 0x490) + 0x80000000 < 0x7fffffff) {
                              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                               "Method/function failed. Returning: nullptr",
                                               "Attempting to use an uninitialized RID",0,0,uVar29);
                            }
                            goto LAB_0011e14b;
                          }
                          local_88._0_8_ = *(undefined8 *)*(undefined1 (*) [16])(lVar22 + 0x44);
                          local_88._8_8_ = *(undefined8 *)(lVar22 + 0x4c);
                          local_128 = *(undefined1 (*) [16])(lVar22 + 0x44);
                          bVar42 = param_4 == 1;
                          local_78 = *(undefined8 *)*(undefined1 (*) [16])(lVar22 + 0x54);
                          uStack_70 = *(undefined8 *)(lVar22 + 0x5c);
                          local_118 = *(undefined1 (*) [16])(lVar22 + 0x54);
                          local_68 = *(undefined8 *)(lVar22 + 100);
                          uStack_60 = *(undefined8 *)(lVar22 + 0x6c);
                          local_108 = (undefined4)local_68;
                          uStack_104 = (undefined4)((ulong)local_68 >> 0x20);
                          uStack_100 = (undefined4)uStack_60;
                          uStack_fc = (undefined4)((ulong)uStack_60 >> 0x20);
                          if (local_1f8 < *(uint *)((long)plVar16 + 0x34c)) {
                            lVar22 = *(long *)(plVar16[0x67] +
                                              ((param_3 & 0xffffffff) /
                                              (ulong)*(uint *)(plVar16 + 0x69)) * 8) +
                                     ((param_3 & 0xffffffff) % (ulong)*(uint *)(plVar16 + 0x69)) *
                                     200;
                            uVar21 = *(uint *)(lVar22 + 0xc0);
                            if (uVar21 != uVar30) {
                              if (uVar21 + 0x80000000 < 0x7fffffff) {
                                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                                 "Method/function failed. Returning: nullptr",
                                                 "Attempting to use an uninitialized RID",0,0);
                              }
                              goto LAB_001158e1;
                            }
                            local_1c0 = *(long *)(lVar22 + 0x88);
                          }
                          else {
LAB_001158e1:
                            _err_print_error("shadow_atlas_get_fb",
                                             "./servers/rendering/renderer_rd/storage_rd/light_storage.h"
                                             ,0x460,"Parameter \"atlas\" is null.",0,0);
                            local_1c0 = 0;
                          }
                          bVar41 = false;
                          uVar20 = 1;
                          uVar35 = 1;
                          goto LAB_00114eb8;
                        }
                        uVar20 = RendererRD::LightStorage::get_cubemap((int)plVar16);
                        uVar35 = RendererRD::LightStorage::get_cubemap_fb((int)plVar16,uVar37 >> 1);
                        if (*(uint *)((long)plVar16 + 0x84) <= uVar21) {
LAB_0011e2d2:
                          puVar28 = (undefined4 *)((long)param_4 * 0x9c + 4);
                          puVar33 = (undefined4 *)local_88;
                          for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
                            *puVar33 = *puVar28;
                            puVar28 = puVar28 + (ulong)bVar43 * -2 + 1;
                            puVar33 = puVar33 + (ulong)bVar43 * -2 + 1;
                          }
                    /* WARNING: Does not return */
                          pcVar19 = (code *)invalidInstructionException();
                          (*pcVar19)();
                        }
                        lVar22 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(plVar16 + 0x10)) * 0x498
                                 + *(long *)(plVar16[0xe] +
                                            ((param_2 & 0xffffffff) /
                                            (ulong)*(uint *)(plVar16 + 0x10)) * 8);
                        uVar25 = *(uint *)(lVar22 + 0x490);
                        if (uVar25 != uVar29) {
                          if (uVar25 + 0x80000000 < 0x7fffffff) {
                            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                             "Method/function failed. Returning: nullptr",
                                             "Attempting to use an uninitialized RID",0,0,
                                             plVar16[0xe]);
                          }
                          goto LAB_0011e2d2;
                        }
                        lVar26 = (long)param_4 * 0x9c;
                        lVar22 = lVar22 + lVar26;
                        local_c8 = *(undefined8 *)(lVar22 + 4);
                        uStack_c0 = *(undefined8 *)(lVar22 + 0xc);
                        local_b8 = *(undefined8 *)(lVar22 + 0x14);
                        uStack_b0 = *(undefined8 *)(lVar22 + 0x1c);
                        local_a8 = *(undefined8 *)(lVar22 + 0x24);
                        uStack_a0 = *(undefined8 *)(lVar22 + 0x2c);
                        local_98 = *(undefined8 *)(lVar22 + 0x34);
                        uStack_90 = *(undefined8 *)(lVar22 + 0x3c);
                        local_88._0_8_ = local_c8;
                        local_88._8_8_ = uStack_c0;
                        local_78 = local_b8;
                        uStack_70 = uStack_b0;
                        local_68 = local_a8;
                        uStack_60 = uStack_a0;
                        local_58 = local_98;
                        uStack_50 = uStack_90;
                        Projection::~Projection((Projection *)local_88);
                        if (*(uint *)((long)plVar16 + 0x84) <= uVar21) goto LAB_0011e08a;
                        lVar22 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(plVar16 + 0x10)) * 0x498
                                 + *(long *)(plVar16[0xe] +
                                            ((param_2 & 0xffffffff) /
                                            (ulong)*(uint *)(plVar16 + 0x10)) * 8);
                        if (*(uint *)(lVar22 + 0x490) != uVar29) {
                          if (*(uint *)(lVar22 + 0x490) + 0x80000000 < 0x7fffffff) {
                            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                             "Method/function failed. Returning: nullptr",
                                             "Attempting to use an uninitialized RID",0,0,lVar22);
                          }
                          goto LAB_0011e08a;
                        }
                        lVar22 = lVar22 + 0x40 + lVar26;
                        local_88._0_8_ = *(undefined8 *)*(undefined1 (*) [16])(lVar22 + 4);
                        local_88._8_8_ = *(undefined8 *)(lVar22 + 0xc);
                        local_128 = *(undefined1 (*) [16])(lVar22 + 4);
                        local_78 = *(undefined8 *)*(undefined1 (*) [16])(lVar22 + 0x14);
                        uStack_70 = *(undefined8 *)(lVar22 + 0x1c);
                        local_118 = *(undefined1 (*) [16])(lVar22 + 0x14);
                        local_68 = *(undefined8 *)(lVar22 + 0x24);
                        uStack_60 = *(undefined8 *)(lVar22 + 0x2c);
                        local_108 = (undefined4)local_68;
                        uStack_104 = (undefined4)((ulong)local_68 >> 0x20);
                        uStack_100 = (undefined4)uStack_60;
                        uStack_fc = (undefined4)((ulong)uStack_60 >> 0x20);
                        if (local_1f8 < *(uint *)((long)plVar16 + 0x34c)) {
                          lVar22 = *(long *)(plVar16[0x67] +
                                            ((param_3 & 0xffffffff) /
                                            (ulong)*(uint *)(plVar16 + 0x69)) * 8) +
                                   ((param_3 & 0xffffffff) % (ulong)*(uint *)(plVar16 + 0x69)) * 200
                          ;
                          uVar25 = *(uint *)(lVar22 + 0xc0);
                          if (uVar25 != uVar30) {
                            if (uVar25 + 0x80000000 < 0x7fffffff) {
                              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                               "Method/function failed. Returning: nullptr",
                                               "Attempting to use an uninitialized RID",0,0,lVar26);
                            }
                            goto LAB_0011622f;
                          }
                          uVar45 = *(undefined8 *)(lVar22 + 0x88);
                          local_1f8 = (uint)uVar45;
                          uStack_1f4 = (uint)((ulong)uVar45 >> 0x20);
                        }
                        else {
LAB_0011622f:
                          _err_print_error("shadow_atlas_get_fb",
                                           "./servers/rendering/renderer_rd/storage_rd/light_storage.h"
                                           ,0x460,"Parameter \"atlas\" is null.",0,0);
                          local_1f8 = 0;
                          uStack_1f4 = 0;
                        }
                        if (param_4 == 0) {
                          _render_shadow_begin(param_1);
                          local_f8 = 0;
                          uStack_f0 = 0;
                          local_88 = Rect2::operator_cast_to_Rect2i((Rect2 *)&local_f8);
                          _render_shadow_append
                                    (param_1,uVar35,param_5,(Projection *)&local_c8,local_128,0,0,0,
                                     (Projection *)local_88,0,1,1,1,param_9,param_10);
                          goto LAB_001146dc;
                        }
                        local_f8 = 0;
                        uStack_f0 = 0;
                        local_88 = Rect2::operator_cast_to_Rect2i((Rect2 *)&local_f8);
                        _render_shadow_append
                                  (param_1,uVar35,param_5,(Projection *)&local_c8,local_128,0,0,0,
                                   (Projection *)local_88,0,1,1,1,param_9,param_10);
                        if (param_4 != 5) goto LAB_001146dc;
                        _render_shadow_process(param_1);
                        _render_shadow_end();
                        local_138 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_148);
                        uVar35 = *(undefined8 *)(param_1 + 0x138);
                        auVar49._0_4_ = (float)uVar27;
                        auVar49._4_4_ = auVar49._0_4_;
                        auVar49._8_4_ = auVar49._0_4_;
                        auVar49._12_4_ = auVar49._0_4_;
                        local_138 = divps(local_138,auVar49);
                        Projection::get_z_near();
                        uVar45 = Vector2i::operator_cast_to_Vector2((Vector2i *)(local_148 + 8));
                        local_88._0_8_ = uVar45;
                        RendererRD::CopyEffects::copy_cubemap_to_dp
                                  (uVar35,uVar20,CONCAT44(uStack_1f4,local_1f8),local_138,
                                   (Projection *)local_88,0);
                        uVar45 = Vector2i::operator_cast_to_Vector2((Vector2i *)local_158);
                        uVar35 = *(undefined8 *)(param_1 + 0x138);
                        fVar48 = local_138._8_4_;
                        fVar44 = local_138._0_4_;
                        local_138._4_4_ =
                             local_138._4_4_ + local_138._12_4_ * (float)((ulong)uVar45 >> 0x20);
                        local_138._0_4_ = fVar44 + fVar48 * (float)uVar45;
                        Projection::get_z_near();
                        local_88._0_8_ =
                             Vector2i::operator_cast_to_Vector2((Vector2i *)(local_148 + 8));
                        RendererRD::CopyEffects::copy_cubemap_to_dp
                                  (uVar35,uVar20,CONCAT44(uStack_1f4,local_1f8),local_138,
                                   (Projection *)local_88,1);
                        local_158[1] = 0;
                        pcVar19 = *(code **)(*plVar16 + 0x160);
                        if (uVar21 < *(uint *)((long)plVar16 + 0x84)) {
                          lVar22 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(plVar16 + 0x10)) *
                                   0x498 + *(long *)(plVar16[0xe] +
                                                    ((param_2 & 0xffffffff) /
                                                    (ulong)*(uint *)(plVar16 + 0x10)) * 8);
                          if (*(uint *)(lVar22 + 0x490) == uVar29) {
                            local_f8 = *(undefined8 *)(lVar22 + 0x3d8);
                            uStack_f0 = *(undefined8 *)(lVar22 + 0x3e0);
                            local_e8 = *(undefined8 *)(lVar22 + 1000);
                            uStack_e0 = *(undefined8 *)(lVar22 + 0x3f0);
                            local_d8 = *(undefined8 *)(lVar22 + 0x3f8);
                            uStack_d0 = *(undefined8 *)(lVar22 + 0x400);
                            Projection::Projection((Projection *)local_88);
                            (*pcVar19)(plVar16,param_2,(Projection *)local_88,(Rect2 *)&local_f8,0,
                                       local_158 + 1);
                            Projection::~Projection((Projection *)local_88);
                            goto LAB_001146dc;
                          }
                          uVar21 = *(uint *)(lVar22 + 0x490) + 0x80000000;
                          if (uVar21 < 0x7fffffff) {
                            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                             "Method/function failed. Returning: nullptr",
                                             "Attempting to use an uninitialized RID",0,0,uVar21);
                          }
                        }
                        puVar28 = (undefined4 *)&DAT_000003d8;
                        pRVar32 = (Rect2 *)&local_f8;
                        for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
                          *(undefined4 *)pRVar32 = *puVar28;
                          puVar28 = puVar28 + (ulong)bVar43 * -2 + 1;
                          pRVar32 = pRVar32 + (ulong)bVar43 * -8 + 4;
                        }
                    /* WARNING: Does not return */
                        pcVar19 = (code *)invalidInstructionException();
                        (*pcVar19)();
                      }
                      if (uVar27 != uVar30) goto LAB_001162a8;
LAB_001156e2:
                      lVar22 = *(long *)(lVar22 + 0x10 + (ulong)uVar40 * 0x18);
                      if (lVar22 == 0) {
                        lVar22 = 0;
                      }
                      else {
                        lVar22 = (long)*(int *)(lVar22 + -8);
                      }
                    }
                    else {
LAB_00115618:
                      uVar34 = 0;
                      lVar26 = 0;
                      _err_print_error("shadow_atlas_get_quadrant_subdivision",
                                       "./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                                       0x459,"Parameter \"atlas\" is null.");
                      if (local_1f8 < *(uint *)((long)plVar16 + 0x34c)) {
                        uVar36 = 0;
                        lVar22 = *(long *)(plVar16[0x67] +
                                          ((param_3 & 0xffffffff) / (ulong)*(uint *)(plVar16 + 0x69)
                                          ) * 8) +
                                 ((param_3 & 0xffffffff) % (ulong)*(uint *)(plVar16 + 0x69)) * 200;
                        uVar27 = *(uint *)(lVar22 + 0xc0);
                        if (uVar30 == uVar27) goto LAB_0011493e;
                        if (uVar27 + 0x80000000 < 0x7fffffff) {
                          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                           "Method/function failed. Returning: nullptr",
                                           "Attempting to use an uninitialized RID",0,0);
                        }
                      }
                      _err_print_error("shadow_atlas_get_quadrant_shadow_size",
                                       "./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                                       0x452,"Parameter \"atlas\" is null.",0,0);
                      if (local_1f8 < *(uint *)((long)plVar16 + 0x34c)) {
                        lVar22 = *(long *)(plVar16[0x67] +
                                          ((param_3 & 0xffffffff) / (ulong)*(uint *)(plVar16 + 0x69)
                                          ) * 8) +
                                 ((param_3 & 0xffffffff) % (ulong)*(uint *)(plVar16 + 0x69)) * 200;
                        if (*(uint *)(lVar22 + 0xc0) == uVar30) goto LAB_001156e2;
                        if (*(uint *)(lVar22 + 0xc0) + 0x80000000 < 0x7fffffff) {
                          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                           "Method/function failed. Returning: nullptr",
                                           "Attempting to use an uninitialized RID",0,0,uVar30);
                        }
                      }
LAB_001162a8:
                      _err_print_error("shadow_atlas_get_quadrant_shadow_size",
                                       "./servers/rendering/renderer_rd/storage_rd/light_storage.h",
                                       0x452,"Parameter \"atlas\" is null.",0,0);
                      lVar22 = 0;
                    }
                    _err_print_index_error
                              ("_render_shadow_pass",
                               "servers/rendering/renderer_rd/forward_mobile/render_forward_mobile.cpp"
                               ,0x536,(ulong)uVar12,lVar22,"(int)shadow",
                               "light_storage->shadow_atlas_get_quadrant_shadow_size(p_shadow_atlas, quadrant)"
                               ,"",false,false);
                    goto LAB_001146dc;
                  }
                  uVar39 = uVar39 + 1;
                  auVar2._8_8_ = 0;
                  auVar2._0_8_ = (ulong)(iVar14 + 1) * lVar26;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = uVar34;
                  lVar24 = SUB168(auVar2 * auVar6,8);
                  uVar12 = *(uint *)(*(long *)(lVar22 + 0xa0) + lVar24 * 4);
                  iVar14 = SUB164(auVar2 * auVar6,8);
                } while ((uVar12 != 0) &&
                        (auVar3._8_8_ = 0, auVar3._0_8_ = (ulong)uVar12 * lVar26, auVar7._8_8_ = 0,
                        auVar7._0_8_ = uVar34, auVar4._8_8_ = 0,
                        auVar4._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                         (ulong)*(uint *)(lVar22 + 0xb8) * 4) +
                                               iVar14) - SUB164(auVar3 * auVar7,8)) * lVar26,
                        auVar8._8_8_ = 0, auVar8._0_8_ = uVar34, uVar39 <= SUB164(auVar4 * auVar8,8)
                        ));
              }
            }
          }
          _err_print_error("_render_shadow_pass",
                           "servers/rendering/renderer_rd/forward_mobile/render_forward_mobile.cpp",
                           0x52c,
                           "Condition \"!light_storage->shadow_atlas_owns_light_instance(p_shadow_atlas, p_light)\" is true."
                           ,0,0);
        }
        else {
LAB_001146b7:
          _err_print_error("_render_shadow_pass",
                           "servers/rendering/renderer_rd/forward_mobile/render_forward_mobile.cpp",
                           0x52b,
                           "Condition \"!light_storage->owns_shadow_atlas(p_shadow_atlas)\" is true."
                           ,0,0);
        }
      }
LAB_001146dc:
      Projection::~Projection((Projection *)&local_c8);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00116381;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("_render_shadow_pass",
                     "servers/rendering/renderer_rd/forward_mobile/render_forward_mobile.cpp",0x4e1,
                     "Condition \"!light_storage->owns_light_instance(p_light)\" is true.",0,0);
    return;
  }
LAB_00116381:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererSceneRenderImplementation::RenderForwardMobile::_pre_opaque_render(RenderDataRD*) */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::_pre_opaque_render
          (RenderForwardMobile *this,RenderDataRD *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  code *pcVar5;
  ulong uVar6;
  void *pvVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  int *piVar11;
  int *piVar12;
  long lVar13;
  undefined4 uVar14;
  long in_FS_OFFSET;
  long local_70;
  char *local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = (long *)RendererRD::LightStorage::get_singleton();
  if (*(int *)(param_1 + 0x248) != 0) {
    *(undefined4 *)(param_1 + 0x248) = 0;
  }
  if (*(int *)(param_1 + 600) != 0) {
    *(undefined4 *)(param_1 + 600) = 0;
  }
  if (*(int *)(param_1 + 0x268) != 0) {
    *(undefined4 *)(param_1 + 0x268) = 0;
  }
  lVar13 = 0;
  Projection::get_lod_multiplier();
  if (0 < *(int *)(param_1 + 0x240)) {
LAB_001164d0:
    do {
      uVar6 = *(ulong *)(lVar13 * 0x40 + *(long *)(param_1 + 0x238));
      if ((uVar6 == 0) || (*(uint *)((long)plVar3 + 0x84) <= (uint)uVar6)) {
LAB_0011e3a8:
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar10 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(plVar3 + 0x10)) * 0x498 +
               *(long *)(plVar3[0xe] + ((uVar6 & 0xffffffff) / (ulong)*(uint *)(plVar3 + 0x10)) * 8)
      ;
      iVar2 = *(int *)(lVar10 + 0x490);
      if (iVar2 != (int)(uVar6 >> 0x20)) {
        if (iVar2 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0,lVar13);
        }
        goto LAB_0011e3a8;
      }
      uVar6 = *(ulong *)(lVar10 + 0x3d0);
      uVar14 = (undefined4)lVar13;
      iVar2 = (int)(uVar6 >> 0x20);
      if (*(code **)(*plVar3 + 0xf8) == RendererRD::LightStorage::light_get_type) {
        if ((uVar6 != 0) && ((uint)uVar6 < *(uint *)((long)plVar3 + 0x2c))) {
          piVar11 = (int *)(((uVar6 & 0xffffffff) % (ulong)*(uint *)(plVar3 + 5)) * 0xe8 +
                           *(long *)(plVar3[3] +
                                    ((uVar6 & 0xffffffff) / (ulong)*(uint *)(plVar3 + 5)) * 8));
          iVar1 = piVar11[0x38];
          if (iVar1 == iVar2) {
            if (*piVar11 != 0) {
              pcVar5 = *(code **)(*plVar3 + 0xf8);
              if (pcVar5 == RendererRD::LightStorage::light_get_type) goto LAB_00116454;
              goto LAB_00116738;
            }
            goto LAB_00116590;
          }
          if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
        }
        _err_print_error("light_get_type",
                         "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x1ff,
                         "Parameter \"light\" is null.",0);
LAB_00116590:
        uVar9 = *(uint *)(param_1 + 0x268);
        pvVar7 = *(void **)(param_1 + 0x270);
        if (uVar9 == *(uint *)(param_1 + 0x26c)) {
          uVar6 = (ulong)(uVar9 * 2);
          if (uVar9 * 2 == 0) {
            uVar6 = 1;
          }
          *(int *)(param_1 + 0x26c) = (int)uVar6;
          pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar6 * 4,false);
          *(void **)(param_1 + 0x270) = pvVar7;
          if (pvVar7 == (void *)0x0) {
LAB_00116aa8:
            _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar9 = *(uint *)(param_1 + 0x268);
        }
        lVar13 = lVar13 + 1;
        *(uint *)(param_1 + 0x268) = uVar9 + 1;
        *(undefined4 *)((long)pvVar7 + (ulong)uVar9 * 4) = uVar14;
        if (*(int *)(param_1 + 0x240) <= (int)lVar13) break;
        goto LAB_001164d0;
      }
      iVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3,uVar6);
      if (iVar1 == 0) goto LAB_00116590;
      pcVar5 = *(code **)(*plVar3 + 0xf8);
      if (pcVar5 == RendererRD::LightStorage::light_get_type) {
        if (uVar6 != 0) {
LAB_00116454:
          if ((uint)uVar6 < *(uint *)((long)plVar3 + 0x2c)) {
            piVar11 = (int *)(((uVar6 & 0xffffffff) % (ulong)*(uint *)(plVar3 + 5)) * 0xe8 +
                             *(long *)(plVar3[3] +
                                      ((uVar6 & 0xffffffff) / (ulong)*(uint *)(plVar3 + 5)) * 8));
            iVar1 = piVar11[0x38];
            if (iVar1 == iVar2) {
              iVar2 = *piVar11;
              goto LAB_00116490;
            }
            if (iVar1 + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
          }
        }
        _err_print_error("light_get_type",
                         "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x1ff,
                         "Parameter \"light\" is null.",0);
LAB_00116499:
        uVar9 = *(uint *)(param_1 + 600);
        pvVar7 = *(void **)(param_1 + 0x260);
        if (uVar9 == *(uint *)(param_1 + 0x25c)) {
          uVar6 = (ulong)(uVar9 * 2);
          if (uVar9 * 2 == 0) {
            uVar6 = 1;
          }
          *(int *)(param_1 + 0x25c) = (int)uVar6;
          pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar6 * 4,false);
          *(void **)(param_1 + 0x260) = pvVar7;
          if (pvVar7 == (void *)0x0) goto LAB_00116aa8;
          uVar9 = *(uint *)(param_1 + 600);
        }
        *(uint *)(param_1 + 600) = uVar9 + 1;
        *(undefined4 *)((long)pvVar7 + (ulong)uVar9 * 4) = uVar14;
      }
      else {
LAB_00116738:
        iVar2 = (*pcVar5)(plVar3,uVar6);
LAB_00116490:
        if ((iVar2 != 1) || (iVar2 = (**(code **)(*plVar3 + 0xe0))(plVar3,uVar6), iVar2 != 1))
        goto LAB_00116499;
        uVar9 = *(uint *)(param_1 + 0x248);
        pvVar7 = *(void **)(param_1 + 0x250);
        if (uVar9 == *(uint *)(param_1 + 0x24c)) {
          uVar6 = (ulong)(uVar9 * 2);
          if (uVar9 * 2 == 0) {
            uVar6 = 1;
          }
          *(int *)(param_1 + 0x24c) = (int)uVar6;
          pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar6 * 4,false);
          *(void **)(param_1 + 0x250) = pvVar7;
          if (pvVar7 == (void *)0x0) goto LAB_00116aa8;
          uVar9 = *(uint *)(param_1 + 0x248);
        }
        *(uint *)(param_1 + 0x248) = uVar9 + 1;
        *(undefined4 *)((long)pvVar7 + (ulong)uVar9 * 4) = uVar14;
      }
      lVar13 = lVar13 + 1;
    } while ((int)lVar13 < *(int *)(param_1 + 0x240));
  }
  piVar12 = *(int **)(param_1 + 0x250);
  piVar11 = piVar12 + *(uint *)(param_1 + 0x248);
  for (; piVar11 != piVar12; piVar12 = piVar12 + 1) {
    puVar4 = (undefined8 *)((long)*piVar12 * 0x40 + *(long *)(param_1 + 0x238));
    _render_shadow_pass(this,*puVar4,*(undefined8 *)(param_1 + 0x1d8),*(undefined4 *)(puVar4 + 1),
                        puVar4 + 2,1,1,1,*(undefined8 *)(param_1 + 0x218),
                        *(long *)(param_1 + 0x180) + 0x174);
  }
  if (*(int *)(param_1 + 0x268) == 0) {
LAB_0011665a:
    if (*(int *)(param_1 + 600) == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00116b95;
    }
  }
  else {
    RendererRD::LightStorage::update_directional_shadow_atlas();
    uVar8 = RenderingDevice::get_singleton();
    local_58 = 0;
    local_50 = 0;
    local_60 = 0;
    RenderingDevice::draw_list_begin(0,uVar8,plVar3[0x72],0x10000,&local_68,0,&local_58,0);
    lVar13 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar3 = (long *)(local_60 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    RenderingDevice::get_singleton();
    RenderingDevice::draw_list_end();
    if (*(int *)(param_1 + 0x268) == 0) goto LAB_0011665a;
  }
  plVar3 = RenderingServerGlobals::utilities;
  if ((char)RenderingServerGlobals::utilities[1] != '\0') {
    local_70 = 0;
    pcVar5 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
    local_60 = 0xe;
    local_68 = "Render Shadows";
    String::parse_latin1((StrRange *)&local_70);
    (*pcVar5)(plVar3);
    lVar13 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar3 = (long *)(local_70 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
  }
  lVar13 = 0;
  _render_shadow_begin(this);
  uVar9 = *(uint *)(param_1 + 0x268);
  if (uVar9 != 0) {
    do {
      puVar4 = (undefined8 *)
               ((long)*(int *)(*(long *)(param_1 + 0x270) + lVar13 * 4) * 0x40 +
               *(long *)(param_1 + 0x238));
      iVar2 = (int)lVar13;
      lVar13 = lVar13 + 1;
      _render_shadow_pass(this,*puVar4,*(undefined8 *)(param_1 + 0x1d8),*(undefined4 *)(puVar4 + 1),
                          puVar4 + 2,0,uVar9 - 1 == iVar2,0,*(undefined8 *)(param_1 + 0x218),
                          *(long *)(param_1 + 0x180) + 0x174);
      uVar9 = *(uint *)(param_1 + 0x268);
    } while ((uint)lVar13 < uVar9);
  }
  uVar9 = *(uint *)(param_1 + 600);
  lVar13 = 0;
  if (uVar9 != 0) {
    do {
      puVar4 = (undefined8 *)
               ((long)*(int *)(*(long *)(param_1 + 0x260) + lVar13 * 4) * 0x40 +
               *(long *)(param_1 + 0x238));
      iVar2 = (int)lVar13;
      lVar13 = lVar13 + 1;
      _render_shadow_pass(this,*puVar4,*(undefined8 *)(param_1 + 0x1d8),*(undefined4 *)(puVar4 + 1),
                          puVar4 + 2,iVar2 == 0,uVar9 - 1 == iVar2,1,
                          *(undefined8 *)(param_1 + 0x218),*(long *)(param_1 + 0x180) + 0x174);
      uVar9 = *(uint *)(param_1 + 600);
    } while ((uint)lVar13 < uVar9);
  }
  _render_shadow_process(this);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _render_shadow_end();
    return;
  }
LAB_00116b95:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererSceneRenderImplementation::RenderForwardMobile::_render_particle_collider_heightfield(RID,
   Transform3D const&, Projection const&, PagedArray<RenderGeometryInstance*> const&) */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::_render_particle_collider_heightfield
          (RenderForwardMobile *this,undefined8 param_2,undefined1 (*param_3) [16],
          undefined8 *param_4,undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined4 uVar5;
  ulong uVar6;
  long local_780;
  char *local_778;
  long local_770;
  undefined8 local_760;
  undefined8 local_758;
  undefined8 local_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined4 local_738;
  undefined1 local_734;
  undefined8 local_730;
  undefined8 local_728;
  undefined1 local_720;
  undefined8 local_71c;
  undefined8 local_714;
  undefined8 uStack_70c;
  undefined8 local_704;
  undefined8 local_6f8;
  undefined4 local_6f0;
  undefined4 local_6ec;
  code *local_6e8 [47];
  undefined8 local_570;
  Object *local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined1 local_528 [16];
  undefined1 local_518 [16];
  undefined1 local_508 [16];
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined4 local_4d8;
  undefined2 local_4d4;
  undefined8 local_4d0;
  undefined1 local_4c8;
  undefined8 local_4c4;
  undefined8 local_4bc;
  undefined8 local_4b0;
  undefined4 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined1 local_478 [16];
  undefined4 local_468;
  undefined8 local_460;
  undefined4 local_458;
  undefined8 local_448;
  uint uStack_440;
  uint uStack_43c;
  undefined1 local_2d7;
  undefined1 local_2d4 [16];
  undefined1 local_2c4 [16];
  undefined4 local_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined8 local_2a4;
  undefined8 uStack_29c;
  undefined8 local_294;
  undefined8 uStack_28c;
  undefined8 local_284;
  undefined8 uStack_27c;
  undefined8 local_274;
  undefined8 uStack_26c;
  undefined8 local_264;
  undefined4 local_25c;
  undefined2 local_254;
  undefined1 local_252;
  undefined1 local_250 [16];
  undefined1 local_240 [16];
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined8 local_21c;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_204;
  undefined8 uStack_1fc;
  undefined8 local_1f4;
  undefined8 uStack_1ec;
  undefined8 local_1e4;
  undefined8 uStack_1dc;
  undefined8 local_1d4;
  undefined8 uStack_1cc;
  Projection local_1c4 [64];
  undefined1 local_184 [16];
  undefined1 local_174 [16];
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_158;
  Projection local_154 [64];
  undefined8 local_114;
  Projection local_10c [64];
  Projection local_cc [64];
  undefined1 local_8c [16];
  undefined4 local_7c;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  plVar1 = RenderingServerGlobals::utilities;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((char)RenderingServerGlobals::utilities[1] != '\0') {
    pcVar2 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
    local_780 = 0;
    local_778 = "Setup GPUParticlesCollisionHeightField3D";
    local_770 = 0x28;
    String::parse_latin1((StrRange *)&local_780);
    (*pcVar2)(plVar1);
    lVar4 = local_780;
    if (local_780 != 0) {
      LOCK();
      plVar1 = (long *)(local_780 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_780 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
  }
  uVar3 = RenderingDevice::get_singleton();
  local_780 = 0;
  local_778 = "Render Collider Heightfield";
  local_770 = 0x1b;
  local_448 = (undefined **)CONCAT44(_LC74,_LC74);
  uStack_440 = _LC74;
  uStack_43c = _LC74;
  String::parse_latin1((StrRange *)&local_780);
  RenderingDevice::draw_command_begin_label(uVar3,(StrRange *)&local_780,(Object *)&local_448);
  lVar4 = local_780;
  if (local_780 != 0) {
    LOCK();
    plVar1 = (long *)(local_780 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_780 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  _update_render_base_uniform_set(this);
  Object::Object((Object *)&local_448);
  local_2d4 = ZEXT416(_LC74);
  local_2d7 = 0;
  local_448 = (undefined **)Vector2::operator_cast_to_Vector2i;
  local_2b4 = 0x3f800000;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  uStack_2a8 = 0;
  local_2c4 = local_2d4;
  Projection::Projection((Projection *)&local_2a4);
  local_250 = ZEXT416(_LC74);
  local_254 = 0;
  local_264 = 0;
  local_25c = 0;
  local_252 = 0;
  local_230 = 0x3f800000;
  uStack_22c = 0;
  uStack_228 = 0;
  uStack_224 = 0;
  local_220 = 1;
  local_21c = 0;
  local_214 = 0;
  local_210 = 0;
  local_208 = 0;
  local_240 = local_250;
  Projection::Projection((Projection *)&local_204);
  Projection::Projection(local_1c4);
  local_184 = ZEXT416(_LC74);
  local_164 = 0x3f800000;
  local_160 = 0;
  local_158 = 0;
  local_174 = local_184;
  Projection::Projection(local_154);
  local_114 = 0;
  Projection::Projection(local_10c);
  Projection::Projection(local_cc);
  local_2a4 = *param_4;
  uStack_29c = param_4[1];
  local_294 = param_4[2];
  uStack_28c = param_4[3];
  local_284 = param_4[4];
  uStack_27c = param_4[5];
  local_2d4 = *param_3;
  local_8c = (undefined1  [16])0x0;
  local_274 = param_4[6];
  uStack_26c = param_4[7];
  local_2c4 = param_3[1];
  local_2b4 = (undefined4)*(undefined8 *)param_3[2];
  uStack_2b0 = (undefined4)((ulong)*(undefined8 *)param_3[2] >> 0x20);
  uStack_2ac = (undefined4)*(undefined8 *)(param_3[2] + 8);
  uStack_2a8 = (undefined4)((ulong)*(undefined8 *)(param_3[2] + 8) >> 0x20);
  local_7c = 0;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_252 = 1;
  local_204 = local_2a4;
  uStack_1fc = uStack_29c;
  local_1f4 = local_294;
  uStack_1ec = uStack_28c;
  local_1e4 = local_284;
  uStack_1dc = uStack_27c;
  local_1d4 = local_274;
  uStack_1cc = uStack_26c;
  uVar5 = Projection::get_z_far();
  local_250 = *param_3;
  local_240 = param_3[1];
  local_8c._4_4_ = uVar5;
  local_58 = CONCAT44((float)*(double *)(this + 0x170),(float)*(double *)(this + 0x168));
  local_230 = (undefined4)*(undefined8 *)param_3[2];
  uStack_22c = (undefined4)((ulong)*(undefined8 *)param_3[2] >> 0x20);
  uStack_228 = (undefined4)*(undefined8 *)(param_3[2] + 8);
  uStack_224 = (undefined4)((ulong)*(undefined8 *)(param_3[2] + 8) >> 0x20);
  local_78 = 0;
  Object::Object((Object *)local_6e8);
  local_6e8[0] = RendererSceneRender::is_environment;
  local_4d4 = 0;
  local_528 = (undefined1  [16])0x0;
  local_518 = (undefined1  [16])0x0;
  local_508 = (undefined1  [16])0x0;
  local_478 = (undefined1  [16])0x0;
  local_570 = 0;
  local_558 = 0;
  local_550 = 0;
  local_548 = 0;
  local_540 = 0;
  local_538 = 0;
  local_530 = 0;
  local_4f8 = 0;
  local_4f0 = 0;
  local_4e8 = 0;
  local_4e0 = 0;
  local_4d8 = 0;
  local_4d0 = 0;
  local_4c8 = 0;
  local_4c4 = 0;
  local_4bc = 0;
  local_4b0 = 0;
  local_4a8 = 0;
  local_4a0 = 0;
  local_498 = 0;
  local_490 = 0;
  local_488 = 0;
  local_480 = 0;
  local_468 = 0;
  local_460 = 0;
  local_458 = 0;
  local_748 = __LC138;
  uStack_740 = _UNK_0012a0f8;
  local_760 = _LC81;
  local_568 = (Object *)&local_448;
  local_560 = param_5;
  local_758 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_760);
  uVar6 = 0;
  _setup_environment(this,(RenderDataRD *)local_6e8,true,(Vector2i *)&local_758,(Color *)&local_748,
                     false,false,0);
  _fill_render_list(this,2,(Object *)local_6e8,2,0);
  RenderList::sort_by_key((RenderList *)(this + 0x2f38));
  _fill_instance_data(this,2,0,0xffffffff,1);
  lVar4 = RendererRD::MaterialStorage::get_singleton();
  uVar3 = _setup_render_pass_uniform_set(this,2,0,0,lVar4 + 8,0,uVar6 & 0xffffffff00000000);
  plVar1 = RenderingServerGlobals::utilities;
  if ((char)RenderingServerGlobals::utilities[1] != '\0') {
    pcVar2 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
    local_778 = "Render Collider Heightfield";
    local_780 = 0;
    local_770 = 0x1b;
    String::parse_latin1((StrRange *)&local_780);
    (*pcVar2)(plVar1);
    lVar4 = local_780;
    if (local_780 != 0) {
      LOCK();
      plVar1 = (long *)(local_780 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_780 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
  }
  local_738 = *(undefined4 *)(this + 0x2f38);
  local_748 = *(undefined8 *)(this + 0x2f40);
  local_6f8 = 0;
  local_714 = *(undefined8 *)(this + 0x2bc0);
  uStack_70c = *(undefined8 *)(this + 0x2bc8);
  uStack_740 = *(undefined8 *)(this + 0x2f50);
  local_6ec = 0;
  local_734 = 0;
  local_730 = _LC246;
  local_720 = 0;
  local_71c = 0;
  local_704 = 0;
  local_6f0 = 0;
  local_758 = 0;
  local_750 = 0;
  local_770 = 0;
  local_728 = uVar3;
  _render_list_with_draw_list
            ((RenderForwardMobile *)0x0,this,(Color *)&local_748,param_2,0,&local_778,0,
             (Vector2i *)&local_758);
  lVar4 = local_770;
  if (local_770 != 0) {
    LOCK();
    plVar1 = (long *)(local_770 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_770 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  RenderingDevice::get_singleton();
  RenderingDevice::draw_command_end_label();
  RenderDataRD::~RenderDataRD((RenderDataRD *)local_6e8);
  local_448 = (undefined **)Vector2::operator_cast_to_Vector2i;
  Projection::~Projection(local_cc);
  Projection::~Projection(local_10c);
  Projection::~Projection(local_154);
  Projection::~Projection(local_1c4);
  Projection::~Projection((Projection *)&local_204);
  Projection::~Projection((Projection *)&local_2a4);
  local_448 = &PTR__initialize_classv_00129358;
  Object::~Object((Object *)&local_448);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererSceneRenderImplementation::RenderForwardMobile::_render_scene(RenderDataRD*, Color
   const&) */

void __thiscall
RendererSceneRenderImplementation::RenderForwardMobile::_render_scene
          (RenderForwardMobile *this,RenderDataRD *param_1,Color *param_2)

{
  RenderForwardMobile *pRVar1;
  uint uVar2;
  StringName *pSVar3;
  undefined4 *puVar4;
  StringName *pSVar5;
  code *pcVar6;
  long lVar7;
  byte bVar8;
  byte bVar9;
  undefined4 uVar10;
  byte bVar11;
  char cVar12;
  byte bVar13;
  char cVar14;
  byte bVar15;
  undefined1 uVar16;
  byte bVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  PagedArray *pPVar23;
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  long *plVar26;
  undefined8 uVar27;
  int *piVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
  RenderBufferDataForwardMobile *pRVar32;
  long lVar33;
  ulong uVar34;
  int iVar35;
  char *pcVar36;
  undefined8 *puVar37;
  undefined8 uVar38;
  long *extraout_RDX;
  long *plVar39;
  long *extraout_RDX_00;
  uint uVar40;
  undefined7 uVar41;
  code *in_R10;
  long in_FS_OFFSET;
  bool bVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
  StringName *local_380;
  RenderBufferDataForwardMobile *local_378;
  code *local_368;
  undefined8 local_358;
  char local_348;
  Rect2i *local_338;
  float local_32c;
  float local_328;
  float local_324;
  undefined8 local_318;
  byte local_310;
  float local_300;
  float local_2fc;
  undefined8 local_2f8;
  byte local_2e8;
  undefined1 local_2d8;
  ulong local_2d0;
  undefined8 local_2c8;
  bool local_2c0;
  bool local_2b8;
  RenderDataRD local_2b0;
  byte local_2a8;
  bool local_2a0;
  bool local_298;
  bool local_290;
  bool local_288;
  float local_280;
  byte local_27b;
  byte local_27a;
  byte local_279;
  undefined4 local_278;
  undefined4 local_274;
  long local_270;
  long local_268;
  long local_260;
  StringName *local_258;
  long local_250;
  undefined8 local_240;
  undefined1 local_238 [16];
  long local_228 [2];
  undefined8 local_218;
  long lStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  long local_1d8;
  ulong uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  uint local_144;
  undefined4 local_140;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  uint uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar22 = RendererRD::LightStorage::get_singleton();
  pPVar23 = (PagedArray *)RendererRD::TextureStorage::get_singleton();
  if (param_1 == (RenderDataRD *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar27 = 0x2eb;
      pcVar36 = "Parameter \"p_render_data\" is null.";
LAB_001183d9:
      _err_print_error("_render_scene",
                       "servers/rendering/renderer_rd/forward_mobile/render_forward_mobile.cpp",
                       uVar27,pcVar36,0,0);
      return;
    }
    goto LAB_0011a972;
  }
  pSVar3 = *(StringName **)(param_1 + 0x178);
  if ((pSVar3 == (StringName *)0x0) || (local_2e8 = RefCounted::reference(), local_2e8 == 0)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar27 = 0x2ee;
      pcVar36 = "Condition \"rb.is_null()\" is true.";
      goto LAB_001183d9;
    }
    goto LAB_0011a972;
  }
  if ((_render_scene(RenderDataRD*,Color_const&)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar21 = __cxa_guard_acquire(&_render_scene(RenderDataRD*,Color_const&)::{lambda()#1}::
                                    operator()()::sname), iVar21 != 0)) {
    _scs_create((char *)&_render_scene(RenderDataRD*,Color_const&)::{lambda()#1}::operator()()::
                         sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_render_scene(RenderDataRD*,Color_const&)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_render_scene(RenderDataRD*,Color_const&)::{lambda()#1}::operator()()::
                         sname);
  }
  cVar12 = RenderSceneBuffersRD::has_custom_data(pSVar3);
  local_378 = (RenderBufferDataForwardMobile *)0x0;
  if (cVar12 != '\0') {
    if ((_render_scene(RenderDataRD*,Color_const&)::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar21 = __cxa_guard_acquire(&_render_scene(RenderDataRD*,Color_const&)::{lambda()#2}::
                                      operator()()::sname), iVar21 != 0)) {
      _scs_create((char *)&_render_scene(RenderDataRD*,Color_const&)::{lambda()#2}::operator()()::
                           sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_render_scene(RenderDataRD*,Color_const&)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_render_scene(RenderDataRD*,Color_const&)::{lambda()#2}::operator()()::
                           sname);
    }
    RenderSceneBuffersRD::get_custom_data((StringName *)&local_258);
    if (local_258 == (StringName *)0x0) {
      local_378 = (RenderBufferDataForwardMobile *)0x0;
    }
    else {
      pRVar32 = (RenderBufferDataForwardMobile *)
                __dynamic_cast(local_258,&Object::typeinfo,&RenderBufferDataForwardMobile::typeinfo,
                               0);
      local_378 = pRVar32;
      if (pRVar32 != (RenderBufferDataForwardMobile *)0x0) {
        cVar12 = RefCounted::reference();
        local_378 = (RenderBufferDataForwardMobile *)0x0;
        if (cVar12 != '\0') {
          local_378 = pRVar32;
        }
        if (local_258 == (StringName *)0x0) goto LAB_00117584;
      }
      cVar12 = RefCounted::unreference();
      if ((cVar12 != '\0') && (cVar12 = predelete_handler((Object *)local_258), cVar12 != '\0')) {
        (**(code **)(*(long *)local_258 + 0x140))(local_258);
        Memory::free_static(local_258,false);
      }
    }
  }
LAB_00117584:
  plVar26 = RenderingServerGlobals::utilities;
  local_380 = (StringName *)&local_258;
  lVar31 = *(long *)(param_1 + 0x1f0);
  if ((char)RenderingServerGlobals::utilities[1] != '\0') {
    pcVar6 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
    local_268 = 0;
    local_258 = (StringName *)0x11cb17;
    local_250 = 0x10;
    String::parse_latin1((StrRange *)&local_268);
    (*pcVar6)(plVar26);
    lVar33 = local_268;
    if (local_268 != 0) {
      LOCK();
      plVar26 = (long *)(local_268 + -0x10);
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (*plVar26 == 0) {
        local_268 = 0;
        Memory::free_static((void *)(lVar33 + -0x10),false);
      }
    }
  }
  local_258 = pSVar3;
  cVar12 = RefCounted::reference();
  if (cVar12 == '\0') {
    local_258 = (StringName *)0x0;
  }
  RendererSceneRenderRD::_update_vrs(this);
  if (((local_258 != (StringName *)0x0) &&
      (cVar12 = RefCounted::unreference(), pSVar5 = local_258, cVar12 != '\0')) &&
     (cVar12 = predelete_handler((Object *)local_258), cVar12 != '\0')) {
    (**(code **)(*(long *)pSVar5 + 0x140))(pSVar5);
    Memory::free_static(pSVar5,false);
  }
  if ((_render_scene(RenderDataRD*,Color_const&)::{lambda()#4}::operator()()::sname == '\0') &&
     (iVar21 = __cxa_guard_acquire(&_render_scene(RenderDataRD*,Color_const&)::{lambda()#4}::
                                    operator()()::sname), iVar21 != 0)) {
    _scs_create((char *)&_render_scene(RenderDataRD*,Color_const&)::{lambda()#4}::operator()()::
                         sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_render_scene(RenderDataRD*,Color_const&)::{lambda()#4}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_render_scene(RenderDataRD*,Color_const&)::{lambda()#4}::operator()()::
                         sname);
  }
  if ((_render_scene(RenderDataRD*,Color_const&)::{lambda()#3}::operator()()::sname == '\0') &&
     (iVar21 = __cxa_guard_acquire(&_render_scene(RenderDataRD*,Color_const&)::{lambda()#3}::
                                    operator()()::sname), iVar21 != 0)) {
    _scs_create((char *)&_render_scene(RenderDataRD*,Color_const&)::{lambda()#3}::operator()()::
                         sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_render_scene(RenderDataRD*,Color_const&)::{lambda()#3}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_render_scene(RenderDataRD*,Color_const&)::{lambda()#3}::operator()()::
                         sname);
  }
  cVar12 = RenderSceneBuffersRD::has_texture
                     (pSVar3,(StringName *)
                             &_render_scene(RenderDataRD*,Color_const&)::{lambda()#3}::operator()()
                              ::sname);
  if (cVar12 == '\0') {
    cVar12 = (char)RenderingServerGlobals::utilities[1];
    plVar26 = RenderingServerGlobals::utilities;
  }
  else {
    this[0x30cd] = (RenderForwardMobile)((byte)this[0x30cd] | 0x20);
    cVar12 = (char)RenderingServerGlobals::utilities[1];
    plVar26 = RenderingServerGlobals::utilities;
  }
  RenderingServerGlobals::utilities = plVar26;
  if (cVar12 != '\0') {
    pcVar6 = *(code **)(*plVar26 + 0x68);
    local_268 = 0;
    local_258 = (StringName *)0x11cb28;
    local_250 = 0xe;
    String::parse_latin1((StrRange *)&local_268);
    (*pcVar6)(plVar26);
    lVar33 = local_268;
    if (local_268 != 0) {
      LOCK();
      plVar26 = (long *)(local_268 + -0x10);
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (*plVar26 == 0) {
        local_268 = 0;
        Memory::free_static((void *)(lVar33 + -0x10),false);
      }
    }
  }
  lVar33 = *(long *)(param_1 + 0x180);
  local_240 = 0;
  *(undefined1 *)(lVar33 + 0x171) = 0;
  *(undefined4 *)(lVar33 + 0x3cc) = 0;
  *(undefined4 *)(lVar33 + 0x3d4) = 0;
  local_27b = ((*(float *)(lVar33 + 0x194) * *(float *)(lVar33 + 0x184) -
               *(float *)(lVar33 + 0x188) * *(float *)(lVar33 + 400)) * *(float *)(lVar33 + 0x174) -
              (*(float *)(lVar33 + 0x194) * *(float *)(lVar33 + 0x178) -
              *(float *)(lVar33 + 400) * *(float *)(lVar33 + 0x17c)) * *(float *)(lVar33 + 0x180)) +
              (*(float *)(lVar33 + 0x178) * *(float *)(lVar33 + 0x188) -
              *(float *)(lVar33 + 0x17c) * *(float *)(lVar33 + 0x184)) * *(float *)(lVar33 + 0x18c)
              < 0.0;
  pauVar24 = (undefined1 (*) [16])local_228;
  do {
    *pauVar24 = (undefined1  [16])0x0;
    pauVar25 = pauVar24 + 2;
    pauVar24[1] = (undefined1  [16])0x0;
    pauVar24 = pauVar25;
  } while ((undefined1 (*) [16])&local_148 != pauVar25);
  iVar21 = *(int *)(pSVar3 + 0x1c4);
  local_148 = 0;
  local_144 = (uint)_local_144 & 0xffffff00;
  local_140 = 2;
  cVar12 = RendererSceneRenderRD::_has_compositor_effect(this,1,param_1);
  bVar13 = RendererSceneRenderRD::_has_compositor_effect(this,3,param_1);
  cVar14 = RendererSceneRenderRD::_has_compositor_effect(this,4,param_1);
  if ((cVar12 != '\0') && (_render_scene(RenderDataRD*,Color_const&)::first_print != '\0')) {
    _err_print_error("_render_scene",
                     "servers/rendering/renderer_rd/forward_mobile/render_forward_mobile.cpp",0x32b,
                     "Post opaque rendering effect callback is not supported in the mobile renderer"
                     ,0,1);
    _render_scene(RenderDataRD*,Color_const&)::first_print = '\0';
  }
  bVar15 = 0;
  if (cVar14 == '\0') {
    bVar15 = bVar13 ^ 1;
  }
  local_27a = bVar13 ^ 1;
  if (((iVar21 != 0) &&
      (cVar12 = RendererSceneRenderRD::_compositor_effects_has_flag(this,param_1,2,0xffffffff),
      cVar12 != '\0')) && (_render_scene(RenderDataRD*,Color_const&)::first_print != '\0')) {
    _err_print_error("_render_scene",
                     "servers/rendering/renderer_rd/forward_mobile/render_forward_mobile.cpp",0x339,
                     "Depth buffer resolve for rendering effect callback is not supported in the mobile renderer"
                     ,0,1);
    _render_scene(RenderDataRD*,Color_const&)::first_print = '\0';
  }
  plVar26 = RenderingServerGlobals::light_storage;
  uVar34 = *(ulong *)(param_1 + 0x1f0);
  if (uVar34 == 0) {
    plVar26 = (long *)local_138;
    Transform3D::affine_inverse();
    RendererRD::LightStorage::update_reflection_probe_buffer
              (lVar22,param_1,*(undefined8 *)(param_1 + 0x198),plVar26,
               *(undefined8 *)(param_1 + 0x1c0));
    uVar16 = 1;
  }
  else {
    in_R10 = *(code **)(*RenderingServerGlobals::light_storage + 0x250);
    if ((uint)uVar34 < *(uint *)(lVar22 + 0x1e4)) {
      puVar37 = (undefined8 *)
                (((uVar34 & 0xffffffff) % (ulong)*(uint *)(lVar22 + 0x1e0)) * 0x70 +
                *(long *)(*(long *)(lVar22 + 0x1d0) +
                         ((uVar34 & 0xffffffff) / (ulong)*(uint *)(lVar22 + 0x1e0)) * 8));
      iVar18 = *(int *)(puVar37 + 0xd);
      if (iVar18 != (int)(uVar34 >> 0x20)) {
        if (iVar18 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_001195ee;
      }
      uVar27 = *puVar37;
    }
    else {
LAB_001195ee:
      _err_print_error("reflection_probe_instance_get_probe",
                       "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x395,
                       "Parameter \"rpi\" is null.",0,0);
      uVar27 = 0;
    }
    uVar16 = (*in_R10)(plVar26,uVar27);
  }
  local_278 = 0;
  local_274 = 0;
  RendererRD::LightStorage::update_light_buffers
            (lVar22,param_1,*(undefined8 *)(param_1 + 400),*(long *)(param_1 + 0x180) + 0x174,
             *(undefined8 *)(param_1 + 0x1d8),uVar16,&local_278,&local_274,param_1 + 0x214);
  RendererRD::TextureStorage::update_decal_buffer(pPVar23,*(Transform3D **)(param_1 + 0x1a8));
  *(undefined4 *)(param_1 + 0x210) = local_278;
  _fill_render_list(this,0,param_1,0,0);
  RenderList::sort_by_key((RenderList *)(this + 0x2ef8));
  RenderList::sort_by_reverse_depth_and_priority((RenderList *)(this + 0x2f18));
  _fill_instance_data(this,0,0,0xffffffff,1);
  _fill_instance_data(this,1,0,0xffffffff,1);
  puVar4 = *(undefined4 **)(param_1 + 0x218);
  if (puVar4 != (undefined4 *)0x0) {
    uVar19 = (undefined4)*(undefined8 *)(*(long *)(param_1 + 0x188) + 0x28);
    puVar4[2] = uVar19;
    *puVar4 = uVar19;
  }
  if (lVar31 == 0) {
    if (local_378 != (RenderBufferDataForwardMobile *)0x0) {
      local_240 = *(undefined8 *)(*(long *)(param_1 + 0x178) + 0x1ac);
      bVar8 = local_27a;
      if (*(int *)(pSVar3 + 0x1b4) == 0xff) {
        if (*(long *)(param_1 + 0x1c0) != 0) {
          cVar12 = RendererSceneRender::environment_get_glow_enabled
                             (this,*(undefined8 *)(param_1 + 0x1c0));
          if (cVar12 == '\0') {
            uVar34 = *(ulong *)(param_1 + 0x1c8);
            plVar39 = extraout_RDX;
            if (uVar34 != 0) {
              plVar39 = (long *)(ulong)*(uint *)(RenderingServerGlobals::camera_attributes + 0x2c);
              if ((uint)uVar34 < *(uint *)(RenderingServerGlobals::camera_attributes + 0x2c)) {
                lVar33 = ((uVar34 & 0xffffffff) %
                         (ulong)*(uint *)(RenderingServerGlobals::camera_attributes + 0x28)) * 0x50
                         + *(long *)(*(long *)(RenderingServerGlobals::camera_attributes + 0x18) +
                                    ((uVar34 & 0xffffffff) /
                                    (ulong)*(uint *)(RenderingServerGlobals::camera_attributes +
                                                    0x28)) * 8);
                uVar40 = *(uint *)(lVar33 + 0x48);
                plVar39 = (long *)(ulong)uVar40;
                if (uVar40 == (uint)(uVar34 >> 0x20)) {
                  if (*(char *)(lVar33 + 0xc) != '\0') goto LAB_0011796f;
                }
                else {
                  plVar39 = (long *)(ulong)(uVar40 + 0x80000000);
                  if (uVar40 + 0x80000000 < 0x7fffffff) {
                    plVar39 = plVar26;
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                }
              }
              uVar34 = *(ulong *)(param_1 + 0x1c8);
              if (uVar34 != 0) {
                plVar39 = (long *)(ulong)*(uint *)(RenderingServerGlobals::camera_attributes + 0x2c)
                ;
                if ((uint)uVar34 < *(uint *)(RenderingServerGlobals::camera_attributes + 0x2c)) {
                  lVar33 = ((uVar34 & 0xffffffff) %
                           (ulong)*(uint *)(RenderingServerGlobals::camera_attributes + 0x28)) *
                           0x50 + *(long *)(*(long *)(RenderingServerGlobals::camera_attributes +
                                                     0x18) +
                                           ((uVar34 & 0xffffffff) /
                                           (ulong)*(uint *)(RenderingServerGlobals::
                                                            camera_attributes + 0x28)) * 8);
                  uVar40 = *(uint *)(lVar33 + 0x48);
                  plVar39 = (long *)(ulong)uVar40;
                  if (uVar40 == (uint)(uVar34 >> 0x20)) {
                    if (((*(char *)(lVar33 + 0x34) != '\0') || (*(char *)(lVar33 + 0x28) != '\0'))
                       && (0.0 < *(float *)(lVar33 + 0x40))) goto LAB_0011796f;
                  }
                  else {
                    plVar39 = (long *)(ulong)(uVar40 + 0x80000000);
                    if (uVar40 + 0x80000000 < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0,in_R10);
                      plVar39 = extraout_RDX_00;
                    }
                  }
                }
              }
            }
            iVar18 = RendererSceneRender::environment_get_background
                               (this,*(undefined8 *)(param_1 + 0x1c0),plVar39);
            if (iVar18 != 3) goto LAB_0011850c;
          }
          goto LAB_0011796f;
        }
LAB_0011850c:
        if ((this[12000] != (RenderForwardMobile)0x0) || (this[0x2ee2] != (RenderForwardMobile)0x0))
        goto LAB_00118528;
        if (bVar15 == 0) goto LAB_00117989;
        local_358 = RenderBufferDataForwardMobile::get_color_fbs(local_378,1);
        this[0x30cd] = (RenderForwardMobile)((byte)this[0x30cd] | 0x40);
      }
      else {
LAB_0011796f:
        if ((this[12000] != (RenderForwardMobile)0x0) || (this[0x2ee2] != (RenderForwardMobile)0x0))
        {
LAB_00118528:
          bVar8 = 0;
        }
LAB_00117989:
        local_358 = RenderBufferDataForwardMobile::get_color_fbs(local_378,0);
        this[0x30cd] = (RenderForwardMobile)((byte)this[0x30cd] | 0x80);
        local_27a = 0;
        bVar15 = 0;
      }
      local_228[0] = *(long *)(pSVar3 + 0x238);
      local_228[1] = *(long *)(pSVar3 + 0x240);
      local_218 = *(undefined8 *)(pSVar3 + 0x248);
      lStack_210 = *(long *)(pSVar3 + 0x250);
      local_208 = *(undefined8 *)(pSVar3 + 600);
      uStack_200 = *(undefined8 *)(pSVar3 + 0x260);
      uStack_110 = (undefined4)uStack_200;
      uStack_10c = (undefined4)((ulong)uStack_200 >> 0x20);
      local_1f8 = *(undefined8 *)(pSVar3 + 0x268);
      uStack_1f0 = *(undefined8 *)(pSVar3 + 0x270);
      uStack_108 = (undefined4)local_1f8;
      uStack_104 = (uint)((ulong)local_1f8 >> 0x20);
      uStack_100 = (uint)uStack_1f0;
      uStack_fc = (undefined4)((ulong)uStack_1f0 >> 0x20);
      local_1e8 = *(undefined8 *)(pSVar3 + 0x278);
      uStack_1e0 = *(undefined8 *)(pSVar3 + 0x280);
      local_f8 = (undefined4)local_1e8;
      uStack_f4 = (undefined4)((ulong)local_1e8 >> 0x20);
      uStack_f0 = (undefined4)uStack_1e0;
      uStack_ec = (undefined4)((ulong)uStack_1e0 >> 0x20);
      local_1d8 = *(long *)(pSVar3 + 0x288);
      uStack_1d0 = *(ulong *)(pSVar3 + 0x290);
      local_1c8 = *(undefined8 *)(pSVar3 + 0x298);
      uStack_1c0 = *(undefined8 *)(pSVar3 + 0x2a0);
      local_1b8 = *(undefined8 *)(pSVar3 + 0x2a8);
      uStack_1b0 = *(undefined8 *)(pSVar3 + 0x2b0);
      local_1a8 = *(undefined8 *)(pSVar3 + 0x2b8);
      uStack_1a0 = *(undefined8 *)(pSVar3 + 0x2c0);
      local_198 = *(undefined8 *)(pSVar3 + 0x2c8);
      uStack_190 = *(undefined8 *)(pSVar3 + 0x2d0);
      local_188 = *(undefined8 *)(pSVar3 + 0x2d8);
      uStack_180 = *(undefined8 *)(pSVar3 + 0x2e0);
      local_178 = *(undefined8 *)(pSVar3 + 0x2e8);
      uStack_170 = *(undefined8 *)(pSVar3 + 0x2f0);
      local_168 = *(undefined8 *)(pSVar3 + 0x2f8);
      uStack_160 = *(undefined8 *)(pSVar3 + 0x300);
      local_158 = *(undefined8 *)(pSVar3 + 0x308);
      uStack_60 = (undefined4)*(undefined8 *)(pSVar3 + 0x310);
      uStack_5c = (undefined4)((ulong)*(undefined8 *)(pSVar3 + 0x310) >> 0x20);
      local_58 = (undefined4)*(undefined8 *)(pSVar3 + 0x318);
      uStack_54 = (undefined4)((ulong)*(undefined8 *)(pSVar3 + 0x318) >> 0x20);
      uStack_50 = (undefined4)*(undefined8 *)(pSVar3 + 800);
      uStack_4c = (undefined4)((ulong)*(undefined8 *)(pSVar3 + 800) >> 0x20);
      local_140 = uStack_50;
      local_144 = uStack_54;
      uStack_14c = uStack_5c;
      local_148 = local_58;
      uStack_150 = uStack_60;
      local_138._0_8_ = local_228[0];
      local_138._8_8_ = local_228[1];
      local_128 = local_218;
      uStack_120 = lStack_210;
      local_118 = local_208;
      local_e8 = local_1d8;
      uStack_e0 = uStack_1d0;
      local_d8 = local_1c8;
      uStack_d0 = uStack_1c0;
      local_c8 = local_1b8;
      uStack_c0 = uStack_1b0;
      local_b8 = local_1a8;
      uStack_b0 = uStack_1a0;
      local_a8 = local_198;
      uStack_a0 = uStack_190;
      local_98 = local_188;
      uStack_90 = uStack_180;
      local_88 = local_178;
      uStack_80 = uStack_170;
      local_78 = local_168;
      uStack_70 = uStack_160;
      local_68 = local_158;
      plVar26 = (long *)RendererRD::TextureStorage::get_singleton();
      local_279 = (**(code **)(*plVar26 + 0x278))(plVar26,*(undefined8 *)(pSVar3 + 0x198));
      if (local_279 == 0) {
        this[0x30ce] = (RenderForwardMobile)((byte)this[0x30ce] | 2);
      }
      else {
        this[0x30ce] = (RenderForwardMobile)((byte)this[0x30ce] | 1);
      }
      goto LAB_00117b79;
    }
    _err_print_error("_render_scene",
                     "servers/rendering/renderer_rd/forward_mobile/render_forward_mobile.cpp",0x393,
                     "Method/function failed.",0,0);
    cVar12 = RefCounted::unreference();
  }
  else {
    uVar19 = RendererRD::LightStorage::reflection_probe_instance_get_resolution
                       (lVar22,*(undefined8 *)(param_1 + 0x1f0));
    local_240 = CONCAT44(uVar19,uVar19);
    local_358 = RendererRD::LightStorage::reflection_probe_instance_get_framebuffer
                          (lVar22,*(undefined8 *)(param_1 + 0x1f0),*(undefined4 *)(param_1 + 0x1f8))
    ;
    uVar34 = *(ulong *)(param_1 + 0x1f0);
    if ((uVar34 == 0) || (*(uint *)(lVar22 + 0x1e4) <= (uint)uVar34)) {
LAB_0011a118:
      _err_print_error("reflection_probe_instance_get_probe",
                       "./servers/rendering/renderer_rd/storage_rd/light_storage.h",0x395,
                       "Parameter \"rpi\" is null.",0);
      uVar27 = 0;
    }
    else {
      puVar37 = (undefined8 *)
                (((uVar34 & 0xffffffff) % (ulong)*(uint *)(lVar22 + 0x1e0)) * 0x70 +
                *(long *)(*(long *)(lVar22 + 0x1d0) +
                         ((uVar34 & 0xffffffff) / (ulong)*(uint *)(lVar22 + 0x1e0)) * 8));
      iVar18 = *(int *)(puVar37 + 0xd);
      if (iVar18 != (int)(uVar34 >> 0x20)) {
        if (iVar18 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_0011a118;
      }
      uVar27 = *puVar37;
    }
    cVar12 = RendererRD::LightStorage::reflection_probe_is_interior(lVar22,uVar27);
    if (cVar12 != '\0') {
      *(undefined8 *)(param_1 + 0x1c0) = 0;
    }
    lVar33 = RendererRD::MaterialStorage::get_singleton();
    local_228[0] = *(long *)(lVar33 + 8);
    local_228[1] = *(undefined8 *)(lVar33 + 0x10);
    local_218 = *(undefined8 *)(lVar33 + 0x18);
    lStack_210 = *(long *)(lVar33 + 0x20);
    local_208 = *(undefined8 *)(lVar33 + 0x28);
    uStack_200 = *(undefined8 *)(lVar33 + 0x30);
    local_1f8 = *(undefined8 *)(lVar33 + 0x38);
    uStack_1f0 = *(undefined8 *)(lVar33 + 0x40);
    local_1e8 = *(undefined8 *)(lVar33 + 0x48);
    uStack_1e0 = *(undefined8 *)(lVar33 + 0x50);
    local_1d8 = *(long *)(lVar33 + 0x58);
    uStack_1d0 = *(ulong *)(lVar33 + 0x60);
    local_1c8 = *(undefined8 *)(lVar33 + 0x68);
    uStack_1c0 = *(undefined8 *)(lVar33 + 0x70);
    local_1b8 = *(undefined8 *)(lVar33 + 0x78);
    uStack_1b0 = *(undefined8 *)(lVar33 + 0x80);
    local_1a8 = *(undefined8 *)(lVar33 + 0x88);
    uStack_1a0 = *(undefined8 *)(lVar33 + 0x90);
    local_198 = *(undefined8 *)(lVar33 + 0x98);
    uStack_190 = *(undefined8 *)(lVar33 + 0xa0);
    local_188 = *(undefined8 *)(lVar33 + 0xa8);
    uStack_180 = *(undefined8 *)(lVar33 + 0xb0);
    local_178 = *(undefined8 *)(lVar33 + 0xb8);
    uStack_170 = *(undefined8 *)(lVar33 + 0xc0);
    local_168 = *(undefined8 *)(lVar33 + 200);
    uStack_160 = *(undefined8 *)(lVar33 + 0xd0);
    local_158 = *(undefined8 *)(lVar33 + 0xd8);
    uStack_150 = (undefined4)*(undefined8 *)(lVar33 + 0xe0);
    uVar27 = *(undefined8 *)(lVar33 + 0xe4);
    _local_144 = *(undefined8 *)(lVar33 + 0xec);
    this[0x30cc] = (RenderForwardMobile)((byte)this[0x30cc] | 0x40);
    uStack_14c = (undefined4)uVar27;
    local_148 = (undefined4)((ulong)uVar27 >> 0x20);
    local_27a = 0;
    local_279 = 0;
    bVar15 = 0;
    local_27b = local_2e8;
    bVar8 = local_2e8;
LAB_00117b79:
    if (1 < *(uint *)(*(long *)(param_1 + 0x180) + 0x228)) {
      this[0x30cd] = (RenderForwardMobile)((byte)this[0x30cd] | 1);
    }
    if (this[0x2ee4] != (RenderForwardMobile)0x0) {
      this[0x30cc] = (RenderForwardMobile)((byte)this[0x30cc] | 0x80);
    }
    _update_dirty_geometry_pipelines(this);
    *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x3dc) = 0xbf800000;
    uVar27 = RenderingDevice::get_singleton();
    local_268 = 0;
    local_258 = (StringName *)0x11cb4f;
    local_138._0_8_ = _LC81;
    local_138._8_8_ = _UNK_0012a108;
    local_250 = 0xc;
    String::parse_latin1((StrRange *)&local_268);
    RenderingDevice::draw_command_begin_label(uVar27,(StrRange *)&local_268,(Variant *)local_138);
    lVar33 = local_268;
    if (local_268 != 0) {
      LOCK();
      plVar26 = (long *)(local_268 + -0x10);
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (*plVar26 == 0) {
        local_268 = 0;
        Memory::free_static((void *)(lVar33 + -0x10),false);
      }
    }
    _setup_lightmaps((RenderDataRD *)this,(PagedArray *)param_1,*(Transform3D **)(param_1 + 0x1b0));
    _setup_environment(this,param_1,lVar31 != 0,(Vector2i *)&local_240,param_2,false,false,0);
    _update_render_base_uniform_set(this);
    RenderingDevice::get_singleton();
    RenderingDevice::draw_command_end_label();
    local_318 = 0;
    local_300 = _LC217;
    if (*(code **)(*(long *)this + 0x248) != _render_buffers_get_luminance_multiplier) {
      local_300 = (float)(**(code **)(*(long *)this + 0x248))(this);
      local_300 = _LC74 / local_300;
    }
    if (*(int *)(this + 0x2438) == 3) {
      local_310 = 0;
      local_328 = 0.0;
      local_324 = 0.0;
      local_32c = 0.0;
      local_2c0 = false;
      local_288 = false;
      local_348 = '\0';
      bVar17 = 0;
      local_2fc = _LC74;
    }
    else {
      local_32c = *(float *)param_2;
      local_324 = *(float *)(param_2 + 4);
      local_2fc = *(float *)(param_2 + 0xc);
      local_328 = *(float *)(param_2 + 8);
      bVar17 = RendererSceneRender::is_environment(this,*(undefined8 *)(param_1 + 0x1c0));
      if (bVar17 == 0) {
        local_310 = 0;
        local_2c0 = false;
        local_32c = *(float *)param_2;
        local_324 = *(float *)(param_2 + 4);
        local_288 = false;
        local_328 = *(float *)(param_2 + 8);
        local_2fc = *(float *)(param_2 + 0xc);
        local_348 = '\0';
        goto LAB_00117dbb;
      }
      iVar18 = RendererSceneRender::environment_get_ambient_source
                         (this,*(undefined8 *)(param_1 + 0x1c0));
      iVar35 = RendererSceneRender::environment_get_background
                         (this,*(undefined8 *)(param_1 + 0x1c0));
      local_280 = (float)RendererSceneRender::environment_get_bg_energy_multiplier
                                   (this,*(undefined8 *)(param_1 + 0x1c0));
      fVar43 = (float)RendererSceneRender::environment_get_bg_intensity
                                (this,*(undefined8 *)(param_1 + 0x1c0));
      local_280 = local_280 * fVar43;
      iVar20 = RendererSceneRender::environment_get_reflection_source
                         (this,*(undefined8 *)(param_1 + 0x1c0));
      bVar42 = iVar35 == 2;
      local_288 = iVar18 == 0 && bVar42 || iVar18 == 3;
      local_2c0 = iVar20 == 2 || iVar20 == 0 && bVar42;
      if (*(long *)(param_1 + 0x1c8) != 0) {
        fVar43 = (float)RendererCameraAttributes::
                        camera_attributes_get_exposure_normalization_factor
                                  (RenderingServerGlobals::camera_attributes,
                                   *(undefined8 *)(param_1 + 0x1c8));
        local_280 = fVar43 * local_280;
      }
      switch(iVar35) {
      case 0:
        local_2fc = *(float *)(param_2 + 0xc);
        local_32c = *(float *)param_2 * local_280;
        local_324 = local_280 * *(float *)(param_2 + 4);
        local_328 = local_280 * *(float *)(param_2 + 8);
        if (param_1[0x220] != (RenderDataRD)0x0) {
LAB_00119f29:
          local_348 = '\0';
          bVar17 = 0;
          break;
        }
        local_348 = RendererSceneRender::environment_get_fog_enabled
                              (this,*(undefined8 *)(param_1 + 0x1c0));
        if (local_348 == '\0') goto LAB_00119fa8;
        plVar26 = (long *)RendererRD::MaterialStorage::get_singleton();
        fVar43 = _LC257;
        pcVar6 = *(code **)(*plVar26 + 0xf0);
        if (_LC257 <= local_328) {
          fVar45 = powf((float)(((double)local_328 + __LC259) * __LC260),_LC261);
        }
        else {
          fVar45 = local_328 * _LC258;
        }
        if (fVar43 <= local_324) {
          fVar44 = powf((float)(((double)local_324 + __LC259) * __LC260),_LC261);
        }
        else {
          fVar44 = local_324 * _LC258;
        }
        if (fVar43 <= local_32c) {
          fVar43 = powf((float)(((double)local_32c + __LC259) * __LC260),_LC261);
        }
        else {
          fVar43 = local_32c * _LC258;
        }
        local_238._0_8_ = CONCAT44(fVar44,fVar43);
        local_238._8_8_ = CONCAT44(local_2fc,fVar45);
        Variant::Variant((Variant *)local_138,(Color *)local_238);
        StringName::StringName(local_380,"clear_color",false);
        (*pcVar6)(plVar26,*(undefined8 *)(this + 0x438),local_380);
joined_r0x0011a6e2:
        if ((StringName::configured != '\0') && (local_258 != (StringName *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_138._0_4_] != '\0') {
          Variant::_clear_internal();
        }
        local_348 = '\0';
        bVar9 = 0;
        bVar11 = 0;
        local_310 = bVar17;
        goto LAB_00119fe1;
      case 1:
        auVar47 = RendererSceneRender::environment_get_bg_color
                            (this,*(undefined8 *)(param_1 + 0x1c0));
        local_2fc = auVar47._12_4_;
        local_32c = auVar47._0_4_ * local_280;
        local_328 = auVar47._8_4_ * local_280;
        local_324 = auVar47._4_4_ * local_280;
        if (param_1[0x220] != (RenderDataRD)0x0) goto LAB_00119f29;
        local_348 = RendererSceneRender::environment_get_fog_enabled
                              (this,*(undefined8 *)(param_1 + 0x1c0));
        if (local_348 != '\0') {
          plVar26 = (long *)RendererRD::MaterialStorage::get_singleton();
          fVar43 = _LC257;
          pcVar6 = *(code **)(*plVar26 + 0xf0);
          if (_LC257 <= local_328) {
            fVar45 = powf((float)(((double)local_328 + __LC259) * __LC260),_LC261);
          }
          else {
            fVar45 = local_328 * _LC258;
          }
          if (fVar43 <= local_324) {
            fVar44 = powf((float)(((double)local_324 + __LC259) * __LC260),_LC261);
          }
          else {
            fVar44 = _LC258 * local_324;
          }
          if (fVar43 <= local_32c) {
            fVar43 = powf((float)(((double)local_32c + __LC259) * __LC260),_LC261);
          }
          else {
            fVar43 = local_32c * _LC258;
          }
          local_238._0_8_ = CONCAT44(fVar44,fVar43);
          local_238._8_8_ = CONCAT44(local_2fc,fVar45);
          Variant::Variant((Variant *)local_138,(Color *)local_238);
          StringName::StringName(local_380,"clear_color",false);
          (*pcVar6)(plVar26,*(undefined8 *)(this + 0x438),local_380);
          goto joined_r0x0011a6e2;
        }
LAB_00119fa8:
        bVar17 = 0;
        break;
      case 2:
        bVar9 = (byte)param_1[0x220] ^ 1;
        if ((iVar20 != 0 || !bVar42) && param_1[0x220] == (RenderDataRD)0x1) {
          FUN_00119e6a();
          return;
        }
        local_348 = '\0';
        bVar17 = 0;
        goto LAB_00119fdc;
      case 3:
        local_348 = local_378 != (RenderBufferDataForwardMobile *)0x0;
        bVar17 = 0;
        break;
      case 4:
        local_348 = '\0';
        break;
      default:
        FUN_00119fc7();
        return;
      }
      bVar9 = 0;
      local_310 = iVar18 == 3 || local_2c0;
      if ((bool)local_310) {
LAB_00119fdc:
        bVar11 = bVar17;
        local_310 = 0;
LAB_00119fe1:
        bVar17 = bVar11;
        plVar26 = RenderingServerGlobals::utilities;
        if ((char)RenderingServerGlobals::utilities[1] != '\0') {
          pcVar6 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
          local_268 = 0;
          local_250 = 9;
          local_258 = (StringName *)0x11cb68;
          String::parse_latin1((StrRange *)&local_268);
          (*pcVar6)(plVar26);
          lVar33 = local_268;
          if (local_268 != 0) {
            LOCK();
            plVar26 = (long *)(local_268 + -0x10);
            *plVar26 = *plVar26 + -1;
            UNLOCK();
            if (*plVar26 == 0) {
              local_268 = 0;
              Memory::free_static((void *)(lVar33 + -0x10),false);
            }
          }
        }
        uVar27 = RenderingDevice::get_singleton();
        local_268 = 0;
        local_258 = (StringName *)0x11cb68;
        local_138._0_8_ = _LC81;
        local_138._8_8_ = _UNK_0012a108;
        local_250 = 9;
        String::parse_latin1((StrRange *)&local_268);
        RenderingDevice::draw_command_begin_label
                  (uVar27,(StrRange *)&local_268,(Variant *)local_138);
        lVar33 = local_268;
        if (local_268 != 0) {
          LOCK();
          plVar26 = (long *)(local_268 + -0x10);
          *plVar26 = *plVar26 + -1;
          UNLOCK();
          if (*plVar26 == 0) {
            local_268 = 0;
            Memory::free_static((void *)(lVar33 + -0x10),false);
          }
        }
        pRVar1 = this + 0x210;
        RendererRD::SkyRD::setup_sky(pRVar1,param_1,local_240);
        lVar33 = RendererSceneRender::environment_get_sky(this,*(undefined8 *)(param_1 + 0x1c0));
        if (lVar33 != 0) {
          lVar7 = *(long *)(param_1 + 0x180);
          uVar27 = *(undefined8 *)(this + 0x168);
          local_258 = pSVar3;
          cVar12 = RefCounted::reference();
          if (cVar12 == '\0') {
            local_258 = (StringName *)0x0;
          }
          RendererRD::SkyRD::update_radiance_buffers
                    (uVar27,pRVar1,local_380,*(undefined8 *)(param_1 + 0x1c0),lVar7 + 0x198);
          if (((local_258 != (StringName *)0x0) &&
              (cVar12 = RefCounted::unreference(), pSVar5 = local_258, cVar12 != '\0')) &&
             (cVar12 = predelete_handler((Object *)local_258), cVar12 != '\0')) {
            (**(code **)(*(long *)pSVar5 + 0x140))();
            Memory::free_static(pSVar5,false);
          }
          local_318 = RendererRD::SkyRD::sky_get_radiance_texture_rd(pRVar1,lVar33);
          local_310 = local_310 | bVar9;
        }
        if (local_310 != 0) {
          uVar27 = *(undefined8 *)(this + 0x168);
          local_258 = pSVar3;
          cVar12 = RefCounted::reference();
          if (cVar12 == '\0') {
            local_258 = (StringName *)0x0;
          }
          RendererRD::SkyRD::update_res_buffers
                    (uVar27,pRVar1,local_380,*(undefined8 *)(param_1 + 0x1c0));
          if (((local_258 != (StringName *)0x0) &&
              (cVar12 = RefCounted::unreference(), pSVar5 = local_258, cVar12 != '\0')) &&
             (cVar12 = predelete_handler((Object *)local_258), cVar12 != '\0')) {
            (**(code **)(*(long *)pSVar5 + 0x140))(pSVar5);
            Memory::free_static(pSVar5,false);
          }
        }
        RenderingDevice::get_singleton();
        RenderingDevice::draw_command_end_label();
      }
      else {
        local_2c0 = false;
      }
    }
LAB_00117dbb:
    RendererSceneRenderRD::_process_compositor_effects(this,0,param_1);
    _pre_opaque_render(this,param_1);
    local_2d0 = *(ulong *)(this + 0x2bc0);
    iVar18 = *(int *)(param_1 + 0x210);
    uVar27 = *(undefined8 *)(this + 0x2bc8);
    if (iVar18 == 0) {
      local_2d8 = 0;
      local_2b0 = (RenderDataRD)0x0;
      local_2a8 = 0;
    }
    else {
      local_2b0 = param_1[0x214];
      uVar40 = 0;
      iVar35 = 0;
      local_2a8 = (byte)iVar18 & 0xf;
      piVar28 = (int *)(*(long *)(lVar22 + 0x108) + 0x30);
      do {
        if (*piVar28 != 0) {
          uVar40 = uVar40 | 1 << ((byte)iVar35 & 0x1f);
        }
        iVar35 = iVar35 + 1;
        piVar28 = piVar28 + 0x74;
      } while (iVar18 != iVar35);
      local_2d8 = (undefined1)uVar40;
    }
    cVar12 = RendererSceneRender::is_environment(this,*(undefined8 *)(param_1 + 0x1c0));
    if ((cVar12 == '\0') ||
       (cVar12 = RendererSceneRender::environment_get_fog_enabled
                           (this,*(undefined8 *)(param_1 + 0x1c0)), cVar12 == '\0')) {
      local_2a0 = false;
      local_290 = false;
      local_298 = false;
      local_2b8 = false;
    }
    else {
      fVar43 = (float)RendererSceneRender::environment_get_fog_aerial_perspective
                                (this,*(undefined8 *)(param_1 + 0x1c0));
      local_298 = 0.0 < fVar43;
      fVar43 = (float)RendererSceneRender::environment_get_fog_sun_scatter
                                (this,*(undefined8 *)(param_1 + 0x1c0));
      local_290 = __LC264 < (double)fVar43;
      uVar40 = RendererSceneRender::environment_get_fog_height_density
                         (this,*(undefined8 *)(param_1 + 0x1c0));
      local_2b8 = false;
      local_2e8 = 0;
      local_2a0 = __LC266 <= (double)(float)(uVar40 & __LC265);
      if (*(long *)(param_1 + 0x1c0) != 0) {
        iVar18 = RendererSceneRender::environment_get_fog_mode
                           (this,*(undefined8 *)(param_1 + 0x1c0));
        local_2b8 = iVar18 == 1;
      }
    }
    uVar40 = 0;
    if (*(long *)(param_1 + 0x178) != 0) {
      uVar40 = (**(code **)(*(long *)this + 0x170))(this);
    }
    if (local_378 == (RenderBufferDataForwardMobile *)0x0) {
      uVar29 = RenderingDevice::get_singleton();
      local_268 = 0;
      local_258 = (StringName *)0x11cb81;
      local_138._0_8_ = _LC81;
      local_138._8_8_ = _UNK_0012a108;
      local_250 = 0x1c;
      String::parse_latin1((StrRange *)&local_268);
      RenderingDevice::draw_command_begin_label(uVar29,(StrRange *)&local_268,(Variant *)local_138);
      lVar22 = local_268;
      if (local_268 != 0) {
        LOCK();
        plVar26 = (long *)(local_268 + -0x10);
        *plVar26 = *plVar26 + -1;
        UNLOCK();
        if (*plVar26 == 0) {
          local_268 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      local_2f8 = 0x10000;
    }
    else {
      uVar29 = RenderingDevice::get_singleton();
      local_268 = 0;
      local_258 = (StringName *)0x11cb72;
      local_138._0_8_ = _LC81;
      local_138._8_8_ = _UNK_0012a108;
      local_250 = 0xe;
      String::parse_latin1((StrRange *)&local_268);
      RenderingDevice::draw_command_begin_label(uVar29,(StrRange *)&local_268,(Variant *)local_138);
      lVar22 = local_268;
      if (local_268 != 0) {
        LOCK();
        plVar26 = (long *)(local_268 + -0x10);
        *plVar26 = *plVar26 + -1;
        UNLOCK();
        if (*plVar26 == 0) {
          local_268 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      local_2f8 = 0x60000;
    }
    uVar29 = RenderingDevice::get_singleton();
    local_268 = 0;
    local_258 = (StringName *)0x11cb9e;
    local_138._0_8_ = _LC81;
    local_138._8_8_ = _UNK_0012a108;
    local_250 = 0xd;
    String::parse_latin1((StrRange *)&local_268);
    RenderingDevice::draw_command_begin_label(uVar29,(StrRange *)&local_268,(Variant *)local_138);
    lVar22 = local_268;
    if (local_268 != 0) {
      LOCK();
      plVar26 = (long *)(local_268 + -0x10);
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (*plVar26 == 0) {
        local_268 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x3cc) = *(undefined4 *)(param_1 + 0x210);
    _update_render_base_uniform_set(this);
    _setup_environment(this,param_1,lVar31 != 0,(Vector2i *)&local_240,param_2,
                       *(long *)(param_1 + 0x178) != 0,false,0);
    plVar26 = RenderingServerGlobals::utilities;
    if (local_27a == 0) {
      if (bVar8 == 0) {
        if ((char)RenderingServerGlobals::utilities[1] != '\0') {
          local_368 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
          local_250 = 0xd;
          local_258 = (StringName *)0x11cb9e;
LAB_0011863c:
          local_268 = 0;
          String::parse_latin1((StrRange *)&local_268);
          (*local_368)(plVar26);
          lVar22 = local_268;
          if (local_268 != 0) {
            LOCK();
            plVar26 = (long *)(local_268 + -0x10);
            *plVar26 = *plVar26 + -1;
            UNLOCK();
            if (*plVar26 == 0) {
              local_268 = 0;
              Memory::free_static((void *)(lVar22 + -0x10),false);
            }
          }
        }
      }
      else if ((char)RenderingServerGlobals::utilities[1] != '\0') {
        local_368 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
        local_250 = 0x1b;
        local_258 = (StringName *)0x11cbac;
        goto LAB_0011863c;
      }
    }
    else if ((char)RenderingServerGlobals::utilities[1] != '\0') {
      local_368 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
      local_250 = 0x25;
      local_258 = (StringName *)0x11da08;
      goto LAB_0011863c;
    }
    uVar29 = _setup_render_pass_uniform_set
                       (this,0,param_1,local_318,(undefined1 (*) [16])local_228,1,0);
    fVar43 = _LC257;
    local_260 = 0;
    if (bVar17 == 0) {
      if (_LC257 <= local_328) {
        fVar45 = powf((float)(((double)local_328 + __LC259) * __LC260),_LC261);
      }
      else {
        fVar45 = local_328 * _LC258;
      }
      if (fVar43 <= local_324) {
        fVar44 = powf((float)(((double)local_324 + __LC259) * __LC260),_LC261);
      }
      else {
        fVar44 = _LC258 * local_324;
      }
      if (fVar43 <= local_32c) {
        fVar46 = powf((float)(((double)local_32c + __LC259) * __LC260),_LC261);
      }
      else {
        fVar46 = local_32c * _LC258;
      }
      local_138._0_8_ = CONCAT44(fVar44,fVar46);
      local_138._8_8_ = CONCAT44(local_2fc,fVar45);
      auVar47 = Color::operator*((Color *)local_138,local_300);
      if (local_378 == (RenderBufferDataForwardMobile *)0x0) {
LAB_001193cf:
        Vector<Color>::push_back(auVar47._0_8_,auVar47._8_8_,(StrRange *)&local_268);
      }
      else {
        Vector<Color>::push_back(auVar47._0_8_,auVar47._8_8_ & 0xffffffff,(StrRange *)&local_268);
        if (iVar21 != 0) {
          if (fVar43 <= local_328) {
            local_328 = powf((float)(((double)local_328 + __LC259) * __LC260),_LC261);
          }
          else {
            local_328 = _LC258 * local_328;
          }
          if (fVar43 <= local_324) {
            local_324 = powf((float)(((double)local_324 + __LC259) * __LC260),_LC261);
          }
          else {
            local_324 = _LC258 * local_324;
          }
          if (fVar43 <= local_32c) {
            local_32c = powf((float)(((double)local_32c + __LC259) * __LC260),_LC261);
          }
          else {
            local_32c = local_32c * _LC258;
          }
          local_138._0_8_ = CONCAT44(local_324,local_32c);
          local_138._8_8_ = CONCAT44(local_2fc,local_328);
          Color::operator*((Color *)local_138,local_300);
          Vector<Color>::push_back((StrRange *)&local_268);
        }
        if (bVar15 != 0) {
          auVar47 = ZEXT816(0x3f80000000000000) << 0x40;
          goto LAB_001193cf;
        }
      }
      uVar30 = RenderingDevice::get_singleton();
      local_138 = Rect2i::operator_cast_to_Rect2((Rect2i *)(param_1 + 0x224));
      uVar38 = 0x10001;
    }
    else {
      uVar30 = RenderingDevice::get_singleton();
      local_138 = Rect2i::operator_cast_to_Rect2((Rect2i *)(param_1 + 0x224));
      uVar38 = 0x10000;
    }
    local_338 = (Rect2i *)(param_1 + 0x224);
    lVar22 = RenderingDevice::draw_list_begin
                       (0,uVar30,local_358,uVar38,(StrRange *)&local_268,0,(Variant *)local_138,
                        local_2f8);
    uVar30 = RenderingDevice::get_singleton();
    lVar31 = RenderingDevice::framebuffer_get_format(uVar30);
    if (local_348 != '\0') {
      if (*(uint *)(*(long *)(param_1 + 0x180) + 0x228) < 2) {
        uVar30 = RendererRD::TextureStorage::get_singleton();
        uVar30 = RendererRD::TextureStorage::render_target_get_rd_texture
                           (uVar30,*(undefined8 *)(pSVar3 + 0x198));
        RendererRD::CopyEffects::copy_to_drawlist
                  (*(undefined8 *)(this + 0x138),lVar22,lVar31,uVar30,local_279 ^ 1);
      }
      else if (_render_scene(RenderDataRD*,Color_const&)::first_print != '\0') {
        _err_print_error("_render_scene",
                         "servers/rendering/renderer_rd/forward_mobile/render_forward_mobile.cpp",
                         0x461,"Canvas background is not supported in multiview!",0,1);
        _render_scene(RenderDataRD*,Color_const&)::first_print = '\0';
      }
    }
    uVar2 = *(uint *)(this + 0x2ef8);
    local_2c8 = uVar27;
    if (uVar2 != 0) {
      uVar30 = *(undefined8 *)(*(long *)(param_1 + 0x180) + 0x3c4);
      local_138._0_8_ = *(undefined8 *)(this + 0x2f00);
      local_138._8_8_ = *(undefined8 *)(this + 0x2f10);
      uStack_110 = CONCAT31(uStack_110._1_3_,*(int *)(this + 0x2438) == 4);
      uStack_f4 = (undefined4)uVar30;
      uStack_f0 = (undefined4)((ulong)uVar30 >> 0x20);
      uStack_120 = (ulong)*(uint *)(*(long *)(param_1 + 0x180) + 0x228) << 0x20;
      uStack_10c = 0;
      uStack_108 = 0;
      uStack_e0 = uStack_e0 & 0xffffffff00000000;
      uVar34 = local_2d0 & 0xf0fffffffffc7c1b | (ulong)((byte)local_2b0 & 1) << 2 |
               (ulong)(local_2e8 & 1) << 5 | (ulong)local_2b8 << 6 | (ulong)local_298 << 7 |
               (ulong)local_290 << 8 | (ulong)local_2a0 << 9 | (ulong)local_288 << 0xf |
               (ulong)local_2c0 << 0x10 | (ulong)(uVar40 & 1) << 0x11;
      local_2d0 = uVar34 | (ulong)local_2a8 << 0x38;
      local_2c8 = CONCAT71((int7)((ulong)uVar27 >> 8),local_2d8);
      local_128._0_5_ = CONCAT14(local_27b,uVar2);
      uStack_104 = (uint)uVar34;
      uStack_100 = (uint)(local_2d0 >> 0x20);
      uStack_fc = (undefined4)local_2c8;
      local_f8 = (undefined4)((ulong)uVar27 >> 0x20);
      local_118 = uVar29;
      local_e8 = lVar31;
      RenderingDevice::get_singleton();
      uVar19 = RenderingDevice::draw_list_get_current_pass();
      uStack_e0 = CONCAT44(uVar19,(undefined4)uStack_e0);
      _render_list(this,lVar22,lVar31,(RenderListParameters *)local_138,0,uVar2);
    }
    RenderingDevice::get_singleton();
    RenderingDevice::draw_command_end_label();
    if (local_310 != 0) {
      uVar27 = RenderingDevice::get_singleton();
      local_258 = (StringName *)0x11cbc8;
      local_138._0_8_ = _LC81;
      local_138._8_8_ = _UNK_0012a108;
      local_270 = 0;
      local_250 = 8;
      String::parse_latin1((StrRange *)&local_270);
      RenderingDevice::draw_command_begin_label(uVar27,(StrRange *)&local_270,(Variant *)local_138);
      lVar33 = local_270;
      if (local_270 == 0) {
LAB_00119590:
        uVar27 = *(undefined8 *)(this + 0x168);
      }
      else {
        LOCK();
        plVar26 = (long *)(local_270 + -0x10);
        *plVar26 = *plVar26 + -1;
        UNLOCK();
        if (*plVar26 != 0) goto LAB_00119590;
        local_270 = 0;
        Memory::free_static((void *)(lVar33 + -0x10),false);
        uVar27 = *(undefined8 *)(this + 0x168);
      }
      local_258 = pSVar3;
      cVar12 = RefCounted::reference();
      if (cVar12 == '\0') {
        local_258 = (StringName *)0x0;
      }
      RendererRD::SkyRD::draw_sky
                (uVar27,this + 0x210,lVar22,local_380,*(undefined8 *)(param_1 + 0x1c0),local_358);
      if (((local_258 != (StringName *)0x0) &&
          (cVar12 = RefCounted::unreference(), pSVar5 = local_258, cVar12 != '\0')) &&
         (cVar12 = predelete_handler((Object *)local_258), cVar12 != '\0')) {
        (**(code **)(*(long *)pSVar5 + 0x140))(pSVar5);
        Memory::free_static(pSVar5,false);
      }
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
    }
    uVar19 = local_f8;
    uVar41 = (undefined7)((ulong)local_2c8 >> 8);
    local_f8 = (undefined4)((ulong)local_2c8 >> 0x20);
    uVar10 = local_f8;
    local_f8 = uVar19;
    if (bVar8 == 0) {
      RenderingDevice::get_singleton();
      RenderingDevice::draw_list_end();
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
      if (bVar13 != 0) {
        RendererSceneRenderRD::_process_compositor_effects(this,3,param_1);
      }
      if (this[12000] != (RenderForwardMobile)0x0) {
        RendererSceneRenderRD::_render_buffers_copy_screen_texture((RenderDataRD *)this);
      }
      if (this[0x2ee2] != (RenderForwardMobile)0x0) {
        RendererSceneRenderRD::_render_buffers_copy_depth_texture((RenderDataRD *)this);
      }
      if (*(int *)(this + 0x2f28) != 0) {
        uVar27 = RenderingDevice::get_singleton();
        local_258 = (StringName *)0x11cbe4;
        local_138._0_8_ = _LC81;
        local_138._8_8_ = _UNK_0012a108;
        local_270 = 0;
        local_250 = 0x17;
        String::parse_latin1((StrRange *)&local_270);
        RenderingDevice::draw_command_begin_label
                  (uVar27,(StrRange *)&local_270,(Variant *)local_138);
        lVar22 = local_270;
        if (local_270 != 0) {
          LOCK();
          plVar26 = (long *)(local_270 + -0x10);
          *plVar26 = *plVar26 + -1;
          UNLOCK();
          if (*plVar26 == 0) {
            local_270 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        plVar26 = RenderingServerGlobals::utilities;
        if ((char)RenderingServerGlobals::utilities[1] != '\0') {
          pcVar6 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
          local_258 = (StringName *)0x11cbd1;
          local_270 = 0;
          local_250 = 0x12;
          String::parse_latin1((StrRange *)&local_270);
          (*pcVar6)(plVar26);
          lVar22 = local_270;
          if (local_270 != 0) {
            LOCK();
            plVar26 = (long *)(local_270 + -0x10);
            *plVar26 = *plVar26 + -1;
            UNLOCK();
            if (*plVar26 == 0) {
              local_270 = 0;
              Memory::free_static((void *)(lVar22 + -0x10),false);
            }
          }
        }
        local_118 = _setup_render_pass_uniform_set
                              (this,1,param_1,local_318,(undefined1 (*) [16])local_228,1,0);
        uVar2 = *(uint *)(this + 0x2f18);
        local_138._0_8_ = *(undefined8 *)(this + 0x2f20);
        uVar27 = *(undefined8 *)(*(long *)(param_1 + 0x180) + 0x3c4);
        local_138._8_8_ = *(undefined8 *)(this + 0x2f30);
        uStack_110 = CONCAT31(uStack_110._1_3_,*(int *)(this + 0x2438) == 4);
        local_128._0_5_ = CONCAT14(local_27b,uVar2);
        uStack_120 = (ulong)*(uint *)(*(long *)(param_1 + 0x180) + 0x228) << 0x20;
        uStack_104 = (uint)(local_2d0 & 0xf0fffffffffc7c1b) | ((byte)local_2b0 & 1) << 2 |
                     (local_2e8 & 1) << 5 | (uint)local_2b8 << 6 | (uint)local_298 << 7 |
                     (uint)local_290 << 8 | (uint)local_2a0 << 9 | (uint)local_288 << 0xf |
                     (uint)local_2c0 << 0x10 | (uVar40 & 1) << 0x11;
        uStack_100 = (uint)((local_2d0 & 0xf0fffffffffc7c1b) >> 0x20) |
                     (uint)(((ulong)local_2a8 << 0x38) >> 0x20);
        uStack_10c = 0;
        uStack_108 = 0;
        uStack_f4 = (undefined4)uVar27;
        uStack_f0 = (undefined4)((ulong)uVar27 >> 0x20);
        uStack_fc = (undefined4)CONCAT71(uVar41,local_2d8);
        uStack_e0 = uStack_e0 & 0xffffffff00000000;
        local_f8 = uVar10;
        local_e8 = lVar31;
        RenderingDevice::get_singleton();
        uVar19 = RenderingDevice::draw_list_get_current_pass();
        uStack_e0 = CONCAT44(uVar19,(undefined4)uStack_e0);
        uVar27 = RenderingDevice::get_singleton();
        local_238 = Rect2i::operator_cast_to_Rect2(local_338);
        local_250 = 0;
        lVar33 = RenderingDevice::draw_list_begin
                           (uVar27,local_358,0,local_380,0,local_238,local_2f8);
        lVar22 = local_250;
        if (local_250 != 0) {
          LOCK();
          plVar26 = (long *)(local_250 + -0x10);
          *plVar26 = *plVar26 + -1;
          UNLOCK();
          if (*plVar26 == 0) {
            local_250 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        _render_list(this,lVar33,lVar31,(RenderListParameters *)local_138,0,uVar2);
        RenderingDevice::get_singleton();
        RenderingDevice::draw_list_end();
        RenderingDevice::get_singleton();
        RenderingDevice::draw_command_end_label();
      }
    }
    else {
      if (*(int *)(this + 0x2f28) != 0) {
        uVar27 = RenderingDevice::get_singleton();
        local_258 = (StringName *)0x11cbd1;
        local_138._0_8_ = _LC81;
        local_138._8_8_ = _UNK_0012a108;
        local_270 = 0;
        local_250 = 0x12;
        String::parse_latin1((StrRange *)&local_270);
        RenderingDevice::draw_command_begin_label
                  (uVar27,(StrRange *)&local_270,(Variant *)local_138);
        lVar33 = local_270;
        if (local_270 != 0) {
          LOCK();
          plVar26 = (long *)(local_270 + -0x10);
          *plVar26 = *plVar26 + -1;
          UNLOCK();
          if (*plVar26 == 0) {
            local_270 = 0;
            Memory::free_static((void *)(lVar33 + -0x10),false);
          }
        }
        local_118 = _setup_render_pass_uniform_set
                              (this,1,param_1,local_318,(undefined1 (*) [16])local_228,1,0);
        uVar2 = *(uint *)(this + 0x2f18);
        uVar27 = *(undefined8 *)(*(long *)(param_1 + 0x180) + 0x3c4);
        local_138._0_8_ = *(undefined8 *)(this + 0x2f20);
        uStack_110 = CONCAT31(uStack_110._1_3_,*(int *)(this + 0x2438) == 4);
        local_138._8_8_ = *(undefined8 *)(this + 0x2f30);
        local_128 = CONCAT44(CONCAT31(local_128._5_3_,local_27b),uVar2);
        uStack_120 = CONCAT44(*(undefined4 *)(*(long *)(param_1 + 0x180) + 0x228),1);
        uStack_10c = 0;
        uStack_108 = 0;
        uStack_104 = (uint)(local_2d0 & 0xf0fffffffffc7c1b) | ((byte)local_2b0 & 1) << 2 |
                     (local_2e8 & 1) << 5 | (uint)local_2b8 << 6 | (uint)local_298 << 7 |
                     (uint)local_290 << 8 | (uint)local_2a0 << 9 | (uint)local_288 << 0xf |
                     (uint)local_2c0 << 0x10 | (uVar40 & 1) << 0x11;
        uStack_100 = (uint)((local_2d0 & 0xf0fffffffffc7c1b) >> 0x20) |
                     (uint)(((ulong)local_2a8 << 0x38) >> 0x20);
        uStack_f4 = (undefined4)uVar27;
        uStack_f0 = (undefined4)((ulong)uVar27 >> 0x20);
        uStack_fc = (undefined4)CONCAT71(uVar41,local_2d8);
        uStack_e0 = uStack_e0 & 0xffffffff00000000;
        local_f8 = uVar10;
        local_e8 = lVar31;
        RenderingDevice::get_singleton();
        uVar19 = RenderingDevice::draw_list_get_current_pass();
        uStack_e0 = CONCAT44(uVar19,(undefined4)uStack_e0);
        _render_list(this,lVar22,lVar31,(RenderListParameters *)local_138,0,uVar2);
        RenderingDevice::get_singleton();
        RenderingDevice::draw_command_end_label();
      }
      if ((local_378 != (RenderBufferDataForwardMobile *)0x0) && (bVar15 != 0)) {
        pSVar5 = *(StringName **)(param_1 + 0x178);
        if (const::{lambda()#2}::operator()()::sname == '\0') {
          iVar21 = __cxa_guard_acquire(&const::{lambda()#2}::operator()()::sname);
          if (iVar21 != 0) {
            _scs_create((char *)&const::{lambda()#2}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,&const::{lambda()#2}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&const::{lambda()#2}::operator()()::sname);
          }
        }
        if (const::{lambda()#1}::operator()()::sname == '\0') {
          iVar21 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname);
          if (iVar21 != 0) {
            _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
          }
        }
        uVar27 = RenderSceneBuffersRD::get_texture
                           (pSVar5,(StringName *)&const::{lambda()#1}::operator()()::sname);
        RendererSceneRenderRD::_post_process_subpass(this,uVar27,local_358,param_1);
      }
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
      RenderingDevice::get_singleton();
      RenderingDevice::draw_list_end();
    }
    lVar22 = local_260;
    if (local_260 != 0) {
      LOCK();
      plVar26 = (long *)(local_260 + -0x10);
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (*plVar26 == 0) {
        local_260 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    if (local_378 == (RenderBufferDataForwardMobile *)0x0) {
      (**(code **)(*(long *)this + 0x1e8))(this);
      cVar12 = RefCounted::unreference();
    }
    else {
      if (bVar15 == 0) {
        uVar27 = RenderingDevice::get_singleton();
        local_268 = 0;
        local_258 = (StringName *)0x11cbfc;
        local_138._0_8_ = _LC81;
        local_138._8_8_ = _UNK_0012a108;
        local_250 = 0x11;
        String::parse_latin1((StrRange *)&local_268);
        RenderingDevice::draw_command_begin_label
                  (uVar27,(StrRange *)&local_268,(Variant *)local_138);
        lVar22 = local_268;
        if (local_268 != 0) {
          LOCK();
          plVar26 = (long *)(local_268 + -0x10);
          *plVar26 = *plVar26 + -1;
          UNLOCK();
          if (*plVar26 == 0) {
            local_268 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        if (cVar14 != '\0') {
          RendererSceneRenderRD::_process_compositor_effects(this,4,param_1);
        }
        plVar26 = RenderingServerGlobals::utilities;
        if ((char)RenderingServerGlobals::utilities[1] != '\0') {
          pcVar6 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
          local_268 = 0;
          local_258 = (StringName *)0x11cc0e;
          local_250 = 7;
          String::parse_latin1((StrRange *)&local_268);
          (*pcVar6)(plVar26);
          lVar22 = local_268;
          if (local_268 != 0) {
            LOCK();
            plVar26 = (long *)(local_268 + -0x10);
            *plVar26 = *plVar26 + -1;
            UNLOCK();
            if (*plVar26 == 0) {
              local_268 = 0;
              Memory::free_static((void *)(lVar22 + -0x10),false);
            }
          }
        }
        RendererSceneRenderRD::_render_buffers_post_process_and_tonemap((RenderDataRD *)this);
        RenderingDevice::get_singleton();
        RenderingDevice::draw_command_end_label();
      }
      RendererSceneRenderRD::_disable_clear_request((RenderDataRD *)this);
      (**(code **)(*(long *)this + 0x1e8))(this);
      cVar12 = RefCounted::unreference();
      if (cVar12 != '\0') {
        cVar12 = predelete_handler((Object *)local_378);
        if (cVar12 != '\0') {
          (**(code **)(*(long *)local_378 + 0x140))(local_378);
          Memory::free_static(local_378,false);
        }
      }
      cVar12 = RefCounted::unreference();
    }
  }
  if (cVar12 != '\0') {
    cVar12 = predelete_handler((Object *)pSVar3);
    if (cVar12 != '\0') {
      (**(code **)(*(long *)pSVar3 + 0x140))(pSVar3);
      Memory::free_static(pSVar3,false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011a972:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00118fb6) */
/* WARNING: Removing unreachable block (ram,0x00119e15) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00119e6a(undefined8 param_1,undefined8 param_2,char param_3)

{
  long *plVar1;
  RenderForwardMobile *pRVar2;
  uint uVar3;
  StringName *pSVar4;
  code *pcVar5;
  float fVar6;
  long lVar7;
  char cVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  RenderDataRD *unaff_RBX;
  RenderForwardMobile *unaff_RBP;
  Object *unaff_R12;
  StrRange *unaff_R14;
  long in_FS_OFFSET;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000008;
  Object *in_stack_00000010;
  Color *in_stack_00000018;
  Color *in_stack_00000020;
  char in_stack_00000028;
  undefined8 in_stack_00000030;
  char in_stack_00000038;
  char in_stack_00000040;
  int in_stack_00000048;
  char in_stack_00000050;
  undefined8 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  byte bStack0000000000000078;
  byte in_stack_00000080;
  float in_stack_00000088;
  undefined8 uStack0000000000000090;
  bool in_stack_00000098;
  Vector2i *in_stack_000000a8;
  char in_stack_000000c8;
  undefined8 in_stack_00000108;
  long in_stack_00000118;
  long in_stack_00000120;
  long in_stack_00000128;
  Object *pOVar15;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  long in_stack_00000348;
  
  plVar1 = RenderingServerGlobals::utilities;
  if (param_3 == '\0' && in_stack_000000c8 == '\0') {
    bStack0000000000000078 = 0;
  }
  else {
    bStack0000000000000078 = 0;
    if ((char)RenderingServerGlobals::utilities[1] != '\0') {
      pcVar5 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
      in_stack_00000120 = 0;
      String::parse_latin1(unaff_R14);
      (*pcVar5)(plVar1);
      lVar10 = in_stack_00000120;
      if (in_stack_00000120 != 0) {
        LOCK();
        plVar1 = (long *)(in_stack_00000120 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          in_stack_00000120 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
    }
    uVar9 = RenderingDevice::get_singleton();
    in_stack_00000120 = 0;
    String::parse_latin1(unaff_R14);
    RenderingDevice::draw_command_begin_label(uVar9);
    lVar10 = in_stack_00000120;
    if (in_stack_00000120 != 0) {
      LOCK();
      plVar1 = (long *)(in_stack_00000120 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        in_stack_00000120 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    pRVar2 = unaff_RBP + 0x210;
    RendererRD::SkyRD::setup_sky(pRVar2);
    lVar10 = RendererSceneRender::environment_get_sky();
    if (lVar10 != 0) {
      lVar11 = *(long *)(unaff_RBX + 0x180);
      uVar9 = *(undefined8 *)(unaff_RBP + 0x168);
      cVar8 = RefCounted::reference();
      pOVar15 = unaff_R12;
      if (cVar8 == '\0') {
        pOVar15 = (Object *)0x0;
      }
      RendererRD::SkyRD::update_radiance_buffers
                (uVar9,pRVar2,in_stack_00000008,*(undefined8 *)(unaff_RBX + 0x1c0),lVar11 + 0x198);
      if (((pOVar15 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
         (cVar8 = predelete_handler(pOVar15), cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar15 + 0x140))();
        Memory::free_static(pOVar15,false);
      }
      RendererRD::SkyRD::sky_get_radiance_texture_rd(pRVar2,lVar10);
      bStack0000000000000078 = bStack0000000000000078 | in_stack_00000080;
    }
    if (bStack0000000000000078 != 0) {
      uVar9 = *(undefined8 *)(unaff_RBP + 0x168);
      cVar8 = RefCounted::reference();
      pOVar15 = unaff_R12;
      if (cVar8 == '\0') {
        pOVar15 = (Object *)0x0;
      }
      RendererRD::SkyRD::update_res_buffers
                (uVar9,pRVar2,in_stack_00000008,*(undefined8 *)(unaff_RBX + 0x1c0));
      if (((pOVar15 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
         (cVar8 = predelete_handler(pOVar15), cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
        Memory::free_static(pOVar15,false);
      }
    }
    RenderingDevice::get_singleton();
    RenderingDevice::draw_command_end_label();
  }
  RendererSceneRenderRD::_process_compositor_effects();
  RendererSceneRenderImplementation::RenderForwardMobile::_pre_opaque_render(unaff_RBP,unaff_RBX);
  if (*(int *)(unaff_RBX + 0x210) != 0) {
    iVar12 = 0;
    do {
      iVar12 = iVar12 + 1;
    } while (*(int *)(unaff_RBX + 0x210) != iVar12);
  }
  cVar8 = RendererSceneRender::is_environment();
  if ((cVar8 != '\0') && (cVar8 = RendererSceneRender::environment_get_fog_enabled(), cVar8 != '\0')
     ) {
    RendererSceneRender::environment_get_fog_aerial_perspective();
    RendererSceneRender::environment_get_fog_sun_scatter();
    RendererSceneRender::environment_get_fog_height_density();
    if (*(long *)(unaff_RBX + 0x1c0) != 0) {
      RendererSceneRender::environment_get_fog_mode();
    }
  }
  if (*(long *)(unaff_RBX + 0x178) != 0) {
    (**(code **)(*(long *)unaff_RBP + 0x170))();
  }
  if (in_stack_00000010 == (Object *)0x0) {
    uVar9 = RenderingDevice::get_singleton();
    in_stack_00000120 = 0;
    String::parse_latin1(unaff_R14);
    RenderingDevice::draw_command_begin_label(uVar9);
    lVar10 = in_stack_00000120;
    if (in_stack_00000120 != 0) {
      LOCK();
      plVar1 = (long *)(in_stack_00000120 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        in_stack_00000120 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    uStack0000000000000090 = 0x10000;
  }
  else {
    uVar9 = RenderingDevice::get_singleton();
    in_stack_00000120 = 0;
    String::parse_latin1(unaff_R14);
    RenderingDevice::draw_command_begin_label(uVar9);
    lVar10 = in_stack_00000120;
    if (in_stack_00000120 != 0) {
      LOCK();
      plVar1 = (long *)(in_stack_00000120 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        in_stack_00000120 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    uStack0000000000000090 = 0x60000;
  }
  uVar9 = RenderingDevice::get_singleton();
  in_stack_00000120 = 0;
  String::parse_latin1(unaff_R14);
  RenderingDevice::draw_command_begin_label(uVar9);
  lVar10 = in_stack_00000120;
  if (in_stack_00000120 != 0) {
    LOCK();
    plVar1 = (long *)(in_stack_00000120 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      in_stack_00000120 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  *(undefined4 *)(*(long *)(unaff_RBX + 0x180) + 0x3cc) = *(undefined4 *)(unaff_RBX + 0x210);
  RendererSceneRenderImplementation::RenderForwardMobile::_update_render_base_uniform_set(unaff_RBP)
  ;
  RendererSceneRenderImplementation::RenderForwardMobile::_setup_environment
            (unaff_RBP,unaff_RBX,in_stack_00000098,in_stack_000000a8,in_stack_00000020,
             *(long *)(unaff_RBX + 0x178) != 0,false,0);
  plVar1 = RenderingServerGlobals::utilities;
  if (in_stack_00000108._6_1_ == '\0') {
    if (in_stack_00000038 == '\0') {
      if ((char)RenderingServerGlobals::utilities[1] != '\0') {
        in_stack_00000020 = *(Color **)(*RenderingServerGlobals::utilities + 0x68);
LAB_0011863c:
        in_stack_00000120 = 0;
        String::parse_latin1(unaff_R14);
        (*(code *)in_stack_00000020)(plVar1);
        lVar10 = in_stack_00000120;
        if (in_stack_00000120 != 0) {
          LOCK();
          plVar1 = (long *)(in_stack_00000120 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            in_stack_00000120 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
      }
    }
    else if ((char)RenderingServerGlobals::utilities[1] != '\0') {
      in_stack_00000020 = *(Color **)(*RenderingServerGlobals::utilities + 0x68);
      goto LAB_0011863c;
    }
  }
  else if ((char)RenderingServerGlobals::utilities[1] != '\0') {
    in_stack_00000020 = *(Color **)(*RenderingServerGlobals::utilities + 0x68);
    goto LAB_0011863c;
  }
  RendererSceneRenderImplementation::RenderForwardMobile::_setup_render_pass_uniform_set();
  fVar6 = _LC257;
  in_stack_00000128 = 0;
  if (in_stack_00000050 == '\0') {
    if (_LC257 <= fStack0000000000000060) {
      powf((float)(((double)fStack0000000000000060 + __LC259) * __LC260),_LC261);
    }
    if (fVar6 <= fStack0000000000000064) {
      powf((float)(((double)fStack0000000000000064 + __LC259) * __LC260),_LC261);
    }
    if (fVar6 <= in_stack_00000058._4_4_) {
      powf((float)(((double)in_stack_00000058._4_4_ + __LC259) * __LC260),_LC261);
    }
    auVar14 = Color::operator*(in_stack_00000018,in_stack_00000088);
    if (in_stack_00000010 == (Object *)0x0) {
LAB_001193cf:
      Vector<Color>::push_back(auVar14._0_8_,auVar14._8_8_);
    }
    else {
      Vector<Color>::push_back(auVar14._0_8_,auVar14._8_8_ & 0xffffffff);
      if (in_stack_00000048 != 0) {
        if (fVar6 <= fStack0000000000000060) {
          powf((float)(((double)fStack0000000000000060 + __LC259) * __LC260),_LC261);
        }
        if (fVar6 <= fStack0000000000000064) {
          powf((float)(((double)fStack0000000000000064 + __LC259) * __LC260),_LC261);
        }
        if (fVar6 <= in_stack_00000058._4_4_) {
          powf((float)(((double)in_stack_00000058._4_4_ + __LC259) * __LC260),_LC261);
        }
        Color::operator*(in_stack_00000018,in_stack_00000088);
        Vector<Color>::push_back();
      }
      if (in_stack_00000028 != '\0') {
        auVar14 = ZEXT816(0x3f80000000000000) << 0x40;
        goto LAB_001193cf;
      }
    }
    uVar9 = RenderingDevice::get_singleton();
    Rect2i::operator_cast_to_Rect2((Rect2i *)(unaff_RBX + 0x224));
    uVar13 = 0x10001;
  }
  else {
    uVar9 = RenderingDevice::get_singleton();
    Rect2i::operator_cast_to_Rect2((Rect2i *)(unaff_RBX + 0x224));
    uVar13 = 0x10000;
  }
  _in_stack_00000050 = (Rect2i *)(unaff_RBX + 0x224);
  lVar10 = RenderingDevice::draw_list_begin(0,uVar9,in_stack_00000030,uVar13);
  uVar9 = RenderingDevice::get_singleton();
  lVar11 = RenderingDevice::framebuffer_get_format(uVar9);
  if (in_stack_00000040 != '\0') {
    if (*(uint *)(*(long *)(unaff_RBX + 0x180) + 0x228) < 2) {
      uVar9 = RendererRD::TextureStorage::get_singleton();
      uVar9 = RendererRD::TextureStorage::render_target_get_rd_texture
                        (uVar9,*(undefined8 *)(unaff_R12 + 0x198));
      RendererRD::CopyEffects::copy_to_drawlist
                (*(undefined8 *)(unaff_RBP + 0x138),lVar10,lVar11,uVar9,in_stack_00000108._7_1_ ^ 1)
      ;
    }
    else if (RendererSceneRenderImplementation::RenderForwardMobile::
             _render_scene(RenderDataRD*,Color_const&)::first_print != '\0') {
      _err_print_error("_render_scene",
                       "servers/rendering/renderer_rd/forward_mobile/render_forward_mobile.cpp",
                       0x461,"Canvas background is not supported in multiview!",0,1);
      RendererSceneRenderImplementation::RenderForwardMobile::
      _render_scene(RenderDataRD*,Color_const&)::first_print = '\0';
    }
  }
  uVar3 = *(uint *)(unaff_RBP + 0x2ef8);
  if (uVar3 != 0) {
    RenderingDevice::get_singleton();
    RenderingDevice::draw_list_get_current_pass();
    RendererSceneRenderImplementation::RenderForwardMobile::_render_list
              (unaff_RBP,lVar10,lVar11,(RenderListParameters *)in_stack_00000018,0,uVar3);
  }
  RenderingDevice::get_singleton();
  RenderingDevice::draw_command_end_label();
  if (bStack0000000000000078 == 0) goto LAB_001182b4;
  uVar9 = RenderingDevice::get_singleton();
  in_stack_00000118 = 0;
  String::parse_latin1((StrRange *)&stack0x00000118);
  RenderingDevice::draw_command_begin_label(uVar9,(StrRange *)&stack0x00000118,in_stack_00000018);
  lVar7 = in_stack_00000118;
  if (in_stack_00000118 == 0) {
LAB_00119590:
    uVar9 = *(undefined8 *)(unaff_RBP + 0x168);
  }
  else {
    LOCK();
    plVar1 = (long *)(in_stack_00000118 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00119590;
    in_stack_00000118 = 0;
    Memory::free_static((void *)(lVar7 + -0x10),false);
    uVar9 = *(undefined8 *)(unaff_RBP + 0x168);
  }
  cVar8 = RefCounted::reference();
  pOVar15 = unaff_R12;
  if (cVar8 == '\0') {
    pOVar15 = (Object *)0x0;
  }
  RendererRD::SkyRD::draw_sky
            (uVar9,unaff_RBP + 0x210,lVar10,in_stack_00000008,*(undefined8 *)(unaff_RBX + 0x1c0),
             in_stack_00000030);
  if (((pOVar15 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
     (cVar8 = predelete_handler(pOVar15), cVar8 != '\0')) {
    (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
    Memory::free_static(pOVar15,false);
  }
  RenderingDevice::get_singleton();
  RenderingDevice::draw_command_end_label();
LAB_001182b4:
  if (in_stack_00000038 == '\0') {
    RenderingDevice::get_singleton();
    RenderingDevice::draw_list_end();
    RenderingDevice::get_singleton();
    RenderingDevice::draw_command_end_label();
    if (in_stack_00000058._3_1_ != '\0') {
      RendererSceneRenderRD::_process_compositor_effects();
    }
    if (unaff_RBP[12000] != (RenderForwardMobile)0x0) {
      RendererSceneRenderRD::_render_buffers_copy_screen_texture((RenderDataRD *)unaff_RBP);
    }
    if (unaff_RBP[0x2ee2] != (RenderForwardMobile)0x0) {
      RendererSceneRenderRD::_render_buffers_copy_depth_texture((RenderDataRD *)unaff_RBP);
    }
    if (*(int *)(unaff_RBP + 0x2f28) != 0) {
      uVar9 = RenderingDevice::get_singleton();
      in_stack_00000118 = 0;
      String::parse_latin1((StrRange *)&stack0x00000118);
      RenderingDevice::draw_command_begin_label
                (uVar9,(StrRange *)&stack0x00000118,in_stack_00000018);
      lVar10 = in_stack_00000118;
      if (in_stack_00000118 != 0) {
        LOCK();
        plVar1 = (long *)(in_stack_00000118 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          in_stack_00000118 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      plVar1 = RenderingServerGlobals::utilities;
      if ((char)RenderingServerGlobals::utilities[1] != '\0') {
        pcVar5 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
        in_stack_00000118 = 0;
        String::parse_latin1((StrRange *)&stack0x00000118);
        (*pcVar5)(plVar1);
        lVar10 = in_stack_00000118;
        if (in_stack_00000118 != 0) {
          LOCK();
          plVar1 = (long *)(in_stack_00000118 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            in_stack_00000118 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
      }
      RendererSceneRenderImplementation::RenderForwardMobile::_setup_render_pass_uniform_set();
      uVar3 = *(uint *)(unaff_RBP + 0x2f18);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_list_get_current_pass();
      uVar9 = RenderingDevice::get_singleton();
      _in_stack_00000150 = Rect2i::operator_cast_to_Rect2(_in_stack_00000050);
      lVar10 = RenderingDevice::draw_list_begin
                         (uVar9,in_stack_00000030,0,in_stack_00000008,0,&stack0x00000150,
                          uStack0000000000000090);
      RendererSceneRenderImplementation::RenderForwardMobile::_render_list
                (unaff_RBP,lVar10,lVar11,(RenderListParameters *)in_stack_00000018,0,uVar3);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_list_end();
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
    }
  }
  else {
    if (*(int *)(unaff_RBP + 0x2f28) != 0) {
      uVar9 = RenderingDevice::get_singleton();
      in_stack_00000118 = 0;
      String::parse_latin1((StrRange *)&stack0x00000118);
      RenderingDevice::draw_command_begin_label
                (uVar9,(StrRange *)&stack0x00000118,in_stack_00000018);
      lVar7 = in_stack_00000118;
      if (in_stack_00000118 != 0) {
        LOCK();
        plVar1 = (long *)(in_stack_00000118 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          in_stack_00000118 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      RendererSceneRenderImplementation::RenderForwardMobile::_setup_render_pass_uniform_set();
      uVar3 = *(uint *)(unaff_RBP + 0x2f18);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_list_get_current_pass();
      RendererSceneRenderImplementation::RenderForwardMobile::_render_list
                (unaff_RBP,lVar10,lVar11,(RenderListParameters *)in_stack_00000018,0,uVar3);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
    }
    if ((in_stack_00000010 != (Object *)0x0) && (in_stack_00000028 != '\0')) {
      pSVar4 = *(StringName **)(unaff_RBX + 0x178);
      if ((const::{lambda()#2}::operator()()::sname == '\0') &&
         (iVar12 = __cxa_guard_acquire(&const::{lambda()#2}::operator()()::sname), iVar12 != 0)) {
        _scs_create((char *)&const::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&const::{lambda()#2}::operator()()::sname,&__dso_handle
                    );
        __cxa_guard_release(&const::{lambda()#2}::operator()()::sname);
      }
      if ((const::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar12 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname), iVar12 != 0)) {
        _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,&__dso_handle
                    );
        __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
      }
      RenderSceneBuffersRD::get_texture
                (pSVar4,(StringName *)&const::{lambda()#1}::operator()()::sname);
      RendererSceneRenderRD::_post_process_subpass();
    }
    RenderingDevice::get_singleton();
    RenderingDevice::draw_command_end_label();
    RenderingDevice::get_singleton();
    RenderingDevice::draw_list_end();
  }
  lVar10 = in_stack_00000128;
  if (in_stack_00000128 != 0) {
    LOCK();
    plVar1 = (long *)(in_stack_00000128 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      in_stack_00000128 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  if (in_stack_00000010 == (Object *)0x0) {
    (**(code **)(*(long *)unaff_RBP + 0x1e8))();
    cVar8 = RefCounted::unreference();
  }
  else {
    if (in_stack_00000028 == '\0') {
      uVar9 = RenderingDevice::get_singleton();
      in_stack_00000120 = 0;
      String::parse_latin1(unaff_R14);
      RenderingDevice::draw_command_begin_label(uVar9);
      lVar10 = in_stack_00000120;
      if (in_stack_00000120 != 0) {
        LOCK();
        plVar1 = (long *)(in_stack_00000120 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          in_stack_00000120 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      if (in_stack_00000108._4_1_ != '\0') {
        RendererSceneRenderRD::_process_compositor_effects();
      }
      plVar1 = RenderingServerGlobals::utilities;
      if ((char)RenderingServerGlobals::utilities[1] != '\0') {
        pcVar5 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
        in_stack_00000120 = 0;
        String::parse_latin1(unaff_R14);
        (*pcVar5)(plVar1);
        lVar10 = in_stack_00000120;
        if (in_stack_00000120 != 0) {
          LOCK();
          plVar1 = (long *)(in_stack_00000120 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            in_stack_00000120 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
      }
      RendererSceneRenderRD::_render_buffers_post_process_and_tonemap((RenderDataRD *)unaff_RBP);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
    }
    RendererSceneRenderRD::_disable_clear_request((RenderDataRD *)unaff_RBP);
    (**(code **)(*(long *)unaff_RBP + 0x1e8))();
    cVar8 = RefCounted::unreference();
    if (cVar8 != '\0') {
      cVar8 = predelete_handler(in_stack_00000010);
      if (cVar8 != '\0') {
        (**(code **)(*(long *)in_stack_00000010 + 0x140))(in_stack_00000010);
        Memory::free_static(in_stack_00000010,false);
      }
    }
    cVar8 = RefCounted::unreference();
  }
  if (cVar8 != '\0') {
    cVar8 = predelete_handler(unaff_R12);
    if (cVar8 != '\0') {
      (**(code **)(*(long *)unaff_R12 + 0x140))();
      Memory::free_static(unaff_R12,false);
    }
  }
  if (in_stack_00000348 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x001185b0) */
/* WARNING: Removing unreachable block (ram,0x00118fb6) */
/* WARNING: Removing unreachable block (ram,0x00119e15) */
/* WARNING: Removing unreachable block (ram,0x0011826b) */
/* WARNING: Removing unreachable block (ram,0x00119bdb) */
/* WARNING: Removing unreachable block (ram,0x0011827f) */
/* WARNING: Removing unreachable block (ram,0x001194d2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void switchD_00119baa::caseD_0(undefined8 param_1,undefined8 param_2,char param_3)

{
  RenderForwardMobile *pRVar1;
  uint uVar2;
  StringName *pSVar3;
  code *pcVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  RenderDataRD *unaff_RBX;
  RenderForwardMobile *unaff_RBP;
  Object *unaff_R12;
  StrRange *unaff_R14;
  long in_FS_OFFSET;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  StringName *in_stack_00000008;
  Object *in_stack_00000010;
  Variant *in_stack_00000018;
  Color *in_stack_00000020;
  char in_stack_00000028;
  undefined8 in_stack_00000030;
  char in_stack_00000038;
  int in_stack_00000048;
  char in_stack_00000050;
  undefined8 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  char cStack0000000000000078;
  float in_stack_00000088;
  undefined4 uStack000000000000008c;
  undefined8 uStack0000000000000090;
  bool in_stack_00000098;
  Vector2i *in_stack_000000a8;
  char in_stack_000000c8;
  float fStack0000000000000108;
  char cStack000000000000010c;
  char cStack000000000000010e;
  long in_stack_00000118;
  long in_stack_00000120;
  long in_stack_00000128;
  Object *in_stack_00000130;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  int in_stack_00000250;
  long in_stack_00000348;
  
  uStack000000000000008c = *(undefined4 *)(in_stack_00000020 + 0xc);
  fVar13 = *(float *)in_stack_00000020 * fStack0000000000000108;
  fStack0000000000000064 = fStack0000000000000108 * *(float *)(in_stack_00000020 + 4);
  fStack0000000000000060 = fStack0000000000000108 * *(float *)(in_stack_00000020 + 8);
  if ((unaff_RBX[0x220] == (RenderDataRD)0x0) &&
     (cVar6 = RendererSceneRender::environment_get_fog_enabled(), cVar6 != '\0')) {
    plVar10 = (long *)RendererRD::MaterialStorage::get_singleton();
    fVar14 = _LC257;
    pcVar4 = *(code **)(*plVar10 + 0xf0);
    if (_LC257 <= fStack0000000000000060) {
      fVar12 = powf((float)(((double)fStack0000000000000060 + __LC259) * __LC260),_LC261);
    }
    else {
      fVar12 = fStack0000000000000060 * _LC258;
    }
    if (fVar14 <= fStack0000000000000064) {
      fVar15 = powf((float)(((double)fStack0000000000000064 + __LC259) * __LC260),_LC261);
    }
    else {
      fVar15 = fStack0000000000000064 * _LC258;
    }
    if (fVar14 <= fVar13) {
      fVar14 = powf((float)(((double)fVar13 + __LC259) * __LC260),_LC261);
    }
    else {
      fVar14 = fVar13 * _LC258;
    }
    in_stack_00000150 = CONCAT44(fVar15,fVar14);
    in_stack_00000158 = CONCAT44(uStack000000000000008c,fVar12);
    Variant::Variant(in_stack_00000018,(Color *)&stack0x00000150);
    StringName::StringName(in_stack_00000008,"clear_color",false);
    (*pcVar4)(plVar10,*(undefined8 *)(unaff_RBP + 0x438),in_stack_00000008);
    if ((StringName::configured != '\0') && (in_stack_00000130 != (Object *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[in_stack_00000250] != '\0') {
      Variant::_clear_internal();
    }
    cStack0000000000000078 = in_stack_00000050;
LAB_00119fe1:
    plVar10 = RenderingServerGlobals::utilities;
    if ((char)RenderingServerGlobals::utilities[1] != '\0') {
      pcVar4 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
      in_stack_00000120 = 0;
      String::parse_latin1(unaff_R14);
      (*pcVar4)(plVar10);
      lVar8 = in_stack_00000120;
      if (in_stack_00000120 != 0) {
        LOCK();
        plVar10 = (long *)(in_stack_00000120 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          in_stack_00000120 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
    }
    uVar7 = RenderingDevice::get_singleton();
    in_stack_00000120 = 0;
    String::parse_latin1(unaff_R14);
    RenderingDevice::draw_command_begin_label(uVar7);
    lVar8 = in_stack_00000120;
    if (in_stack_00000120 != 0) {
      LOCK();
      plVar10 = (long *)(in_stack_00000120 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        in_stack_00000120 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    pRVar1 = unaff_RBP + 0x210;
    RendererRD::SkyRD::setup_sky(pRVar1);
    lVar8 = RendererSceneRender::environment_get_sky();
    if (lVar8 != 0) {
      lVar9 = *(long *)(unaff_RBX + 0x180);
      uVar7 = *(undefined8 *)(unaff_RBP + 0x168);
      cVar6 = RefCounted::reference();
      in_stack_00000130 = unaff_R12;
      if (cVar6 == '\0') {
        in_stack_00000130 = (Object *)0x0;
      }
      RendererRD::SkyRD::update_radiance_buffers
                (uVar7,pRVar1,in_stack_00000008,*(undefined8 *)(unaff_RBX + 0x1c0),lVar9 + 0x198);
      if (((in_stack_00000130 != (Object *)0x0) &&
          (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
         (cVar6 = predelete_handler(in_stack_00000130), cVar6 != '\0')) {
        (**(code **)(*(long *)in_stack_00000130 + 0x140))();
        Memory::free_static(in_stack_00000130,false);
      }
      RendererRD::SkyRD::sky_get_radiance_texture_rd(pRVar1,lVar8);
    }
    if (cStack0000000000000078 != '\0') {
      uVar7 = *(undefined8 *)(unaff_RBP + 0x168);
      cVar6 = RefCounted::reference();
      in_stack_00000130 = unaff_R12;
      if (cVar6 == '\0') {
        in_stack_00000130 = (Object *)0x0;
      }
      RendererRD::SkyRD::update_res_buffers
                (uVar7,pRVar1,in_stack_00000008,*(undefined8 *)(unaff_RBX + 0x1c0));
      if (((in_stack_00000130 != (Object *)0x0) &&
          (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
         (cVar6 = predelete_handler(in_stack_00000130), cVar6 != '\0')) {
        (**(code **)(*(long *)in_stack_00000130 + 0x140))(in_stack_00000130);
        Memory::free_static(in_stack_00000130,false);
      }
    }
    RenderingDevice::get_singleton();
    RenderingDevice::draw_command_end_label();
  }
  else {
    if (param_3 != '\0' || in_stack_000000c8 != '\0') {
      cStack0000000000000078 = '\0';
      goto LAB_00119fe1;
    }
    cStack0000000000000078 = '\0';
  }, RendererSceneRenderRD::_process_compositor_effects(), ;, RendererSceneRenderImplementation::RenderForwardMobile::_pre_opaque_render(unaff_RBP, unaff_RBX));if(*(int*)( unaff_RBX + 0x210 ) != 0) {
         iVar11 = 0;
         do {
            iVar11 = iVar11 + 1;
         }
 while ( *(int*)( unaff_RBX + 0x210 ) != iVar11 );
      }

      cVar6 = RendererSceneRender::is_environment();
      if (( cVar6 != '\0' ) && ( cVar6 = RendererSceneRender::environment_get_fog_enabled() ),cVar6 != '\0') {
         RendererSceneRender::environment_get_fog_aerial_perspective();
         RendererSceneRender::environment_get_fog_sun_scatter();
         RendererSceneRender::environment_get_fog_height_density();
         if (*(long*)( unaff_RBX + 0x1c0 ) != 0) {
            RendererSceneRender::environment_get_fog_mode();
         }

      }

      if (*(long*)( unaff_RBX + 0x178 ) != 0) {
         ( **(code**)( *(long*)unaff_RBP + 0x170 ) )();
      }

      if (in_stack_00000010 == (Object*)0x0) {
         uVar7 = RenderingDevice::get_singleton();
         in_stack_00000120 = 0;
         String::parse_latin1(unaff_R14);
         RenderingDevice::draw_command_begin_label(uVar7);
         lVar8 = in_stack_00000120;
         if (in_stack_00000120 != 0) {
            LOCK();
            plVar10 = (long*)( in_stack_00000120 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               in_stack_00000120 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }

         }

         uStack0000000000000090 = 0x10000;
      }
 else {
         uVar7 = RenderingDevice::get_singleton();
         in_stack_00000120 = 0;
         String::parse_latin1(unaff_R14);
         RenderingDevice::draw_command_begin_label(uVar7);
         lVar8 = in_stack_00000120;
         if (in_stack_00000120 != 0) {
            LOCK();
            plVar10 = (long*)( in_stack_00000120 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               in_stack_00000120 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }

         }

         uStack0000000000000090 = 0x60000;
      }

      uVar7 = RenderingDevice::get_singleton();
      in_stack_00000120 = 0;
      String::parse_latin1(unaff_R14);
      RenderingDevice::draw_command_begin_label(uVar7);
      lVar8 = in_stack_00000120;
      if (in_stack_00000120 != 0) {
         LOCK();
         plVar10 = (long*)( in_stack_00000120 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            in_stack_00000120 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      *(undefined4*)( *(long*)( unaff_RBX + 0x180 ) + 0x3cc ) = *(undefined4*)( unaff_RBX + 0x210 );
      RendererSceneRenderImplementation::RenderForwardMobile::_update_render_base_uniform_set(unaff_RBP);
      RendererSceneRenderImplementation::RenderForwardMobile::_setup_environment(unaff_RBP, unaff_RBX, in_stack_00000098, in_stack_000000a8, in_stack_00000020, *(long*)( unaff_RBX + 0x178 ) != 0, false, 0);
      plVar10 = RenderingServerGlobals::utilities;
      if (cStack000000000000010e == '\0') {
         if (in_stack_00000038 == '\0') {
            if ((char)RenderingServerGlobals::utilities[1] != '\0') {
               in_stack_00000020 = *(Color**)( *RenderingServerGlobals::utilities + 0x68 );
               LAB_0011863c:in_stack_00000120 = 0;
               String::parse_latin1(unaff_R14);
               ( *(code*)in_stack_00000020 )(plVar10);
               lVar8 = in_stack_00000120;
               if (in_stack_00000120 != 0) {
                  LOCK();
                  plVar10 = (long*)( in_stack_00000120 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     in_stack_00000120 = 0;
                     Memory::free_static((void*)( lVar8 + -0x10 ), false);
                  }

               }

            }

         }
 else if ((char)RenderingServerGlobals::utilities[1] != '\0') {
            in_stack_00000020 = *(Color**)( *RenderingServerGlobals::utilities + 0x68 );
            goto LAB_0011863c;
         }

      }
 else if ((char)RenderingServerGlobals::utilities[1] != '\0') {
         in_stack_00000020 = *(Color**)( *RenderingServerGlobals::utilities + 0x68 );
         goto LAB_0011863c;
      }

      RendererSceneRenderImplementation::RenderForwardMobile::_setup_render_pass_uniform_set();
      fVar14 = _LC257;
      in_stack_00000128 = 0;
      if (_LC257 <= fStack0000000000000060) {
         powf((float)( ( (double)fStack0000000000000060 + __LC259 ) * __LC260 ), _LC261);
      }

      if (fVar14 <= fStack0000000000000064) {
         powf((float)( ( (double)fStack0000000000000064 + __LC259 ) * __LC260 ), _LC261);
      }

      if (fVar14 <= fVar13) {
         powf((float)( ( (double)fVar13 + __LC259 ) * __LC260 ), _LC261);
      }

      auVar16 = Color::operator *((Color*)in_stack_00000018, in_stack_00000088);
      if (in_stack_00000010 == (Object*)0x0) {
         LAB_001193cf:Vector<Color>::push_back(auVar16._0_8_, auVar16._8_8_);
      }
 else {
         Vector<Color>::push_back(auVar16._0_8_, auVar16._8_8_ & 0xffffffff);
         if (in_stack_00000048 != 0) {
            if (fVar14 <= fStack0000000000000060) {
               powf((float)( ( (double)fStack0000000000000060 + __LC259 ) * __LC260 ), _LC261);
            }

            if (fVar14 <= fStack0000000000000064) {
               powf((float)( ( (double)fStack0000000000000064 + __LC259 ) * __LC260 ), _LC261);
            }

            if (fVar14 <= fVar13) {
               powf((float)( ( (double)fVar13 + __LC259 ) * __LC260 ), _LC261);
            }

            Color::operator *((Color*)in_stack_00000018, in_stack_00000088);
            Vector<Color>::push_back();
         }

         if (in_stack_00000028 != '\0') {
            auVar16 = ZEXT816(0x3f80000000000000) << 0x40;
            goto LAB_001193cf;
         }

      }

      uVar7 = RenderingDevice::get_singleton();
      Rect2i::operator_cast_to_Rect2((Rect2i*)( unaff_RBX + 0x224 ));
      _in_stack_00000050 = (Rect2i*)( unaff_RBX + 0x224 );
      lVar8 = RenderingDevice::draw_list_begin(0, uVar7, in_stack_00000030, 0x10001);
      uVar7 = RenderingDevice::get_singleton();
      lVar9 = RenderingDevice::framebuffer_get_format(uVar7);
      uVar2 = *(uint*)( unaff_RBP + 0x2ef8 );
      if (uVar2 != 0) {
         RenderingDevice::get_singleton();
         RenderingDevice::draw_list_get_current_pass();
         RendererSceneRenderImplementation::RenderForwardMobile::_render_list(unaff_RBP, lVar8, lVar9, (RenderListParameters*)in_stack_00000018, 0, uVar2);
      }

      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
      if (cStack0000000000000078 == '\0') goto LAB_001182b4;
      uVar7 = RenderingDevice::get_singleton();
      in_stack_00000118 = 0;
      String::parse_latin1((StrRange*)&stack0x00000118);
      RenderingDevice::draw_command_begin_label(uVar7, (StrRange*)&stack0x00000118, in_stack_00000018);
      lVar5 = in_stack_00000118;
      if (in_stack_00000118 == 0) {
         LAB_00119590:uVar7 = *(undefined8*)( unaff_RBP + 0x168 );
      }
 else {
         LOCK();
         plVar10 = (long*)( in_stack_00000118 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 != 0) goto LAB_00119590;
         in_stack_00000118 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
         uVar7 = *(undefined8*)( unaff_RBP + 0x168 );
      }

      cVar6 = RefCounted::reference();
      in_stack_00000130 = unaff_R12;
      if (cVar6 == '\0') {
         in_stack_00000130 = (Object*)0x0;
      }

      RendererRD::SkyRD::draw_sky(uVar7, unaff_RBP + 0x210, lVar8, in_stack_00000008, *(undefined8*)( unaff_RBX + 0x1c0 ), in_stack_00000030);
      if (( ( in_stack_00000130 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)in_stack_00000130 + 0x140 ))(in_stack_00000130);
      Memory::free_static(in_stack_00000130, false);
   }

   RenderingDevice::get_singleton();
   RenderingDevice::draw_command_end_label();
   LAB_001182b4:if (in_stack_00000038 == '\0') {
      RenderingDevice::get_singleton();
      RenderingDevice::draw_list_end();
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
      if (in_stack_00000058._3_1_ != '\0') {
         RendererSceneRenderRD::_process_compositor_effects();
      }

      if (unaff_RBP[12000] != (RenderForwardMobile)0x0) {
         RendererSceneRenderRD::_render_buffers_copy_screen_texture((RenderDataRD*)unaff_RBP);
      }

      if (unaff_RBP[0x2ee2] != (RenderForwardMobile)0x0) {
         RendererSceneRenderRD::_render_buffers_copy_depth_texture((RenderDataRD*)unaff_RBP);
      }

      if (*(int*)( unaff_RBP + 0x2f28 ) != 0) {
         uVar7 = RenderingDevice::get_singleton();
         in_stack_00000118 = 0;
         String::parse_latin1((StrRange*)&stack0x00000118);
         RenderingDevice::draw_command_begin_label(uVar7, (StrRange*)&stack0x00000118, in_stack_00000018);
         lVar8 = in_stack_00000118;
         if (in_stack_00000118 != 0) {
            LOCK();
            plVar10 = (long*)( in_stack_00000118 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               in_stack_00000118 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }

         }

         plVar10 = RenderingServerGlobals::utilities;
         if ((char)RenderingServerGlobals::utilities[1] != '\0') {
            pcVar4 = *(code**)( *RenderingServerGlobals::utilities + 0x68 );
            in_stack_00000118 = 0;
            String::parse_latin1((StrRange*)&stack0x00000118);
            ( *pcVar4 )(plVar10);
            lVar8 = in_stack_00000118;
            if (in_stack_00000118 != 0) {
               LOCK();
               plVar10 = (long*)( in_stack_00000118 + -0x10 );
               *plVar10 = *plVar10 + -1;
               UNLOCK();
               if (*plVar10 == 0) {
                  in_stack_00000118 = 0;
                  Memory::free_static((void*)( lVar8 + -0x10 ), false);
               }

            }

         }

         RendererSceneRenderImplementation::RenderForwardMobile::_setup_render_pass_uniform_set();
         uVar2 = *(uint*)( unaff_RBP + 0x2f18 );
         RenderingDevice::get_singleton();
         RenderingDevice::draw_list_get_current_pass();
         uVar7 = RenderingDevice::get_singleton();
         _in_stack_00000150 = Rect2i::operator_cast_to_Rect2(_in_stack_00000050);
         lVar8 = RenderingDevice::draw_list_begin(uVar7, in_stack_00000030, 0, in_stack_00000008, 0, &stack0x00000150, uStack0000000000000090);
         RendererSceneRenderImplementation::RenderForwardMobile::_render_list(unaff_RBP, lVar8, lVar9, (RenderListParameters*)in_stack_00000018, 0, uVar2);
         RenderingDevice::get_singleton();
         RenderingDevice::draw_list_end();
         RenderingDevice::get_singleton();
         RenderingDevice::draw_command_end_label();
      }

   }
 else {
      if (*(int*)( unaff_RBP + 0x2f28 ) != 0) {
         uVar7 = RenderingDevice::get_singleton();
         in_stack_00000118 = 0;
         String::parse_latin1((StrRange*)&stack0x00000118);
         RenderingDevice::draw_command_begin_label(uVar7, (StrRange*)&stack0x00000118, in_stack_00000018);
         lVar5 = in_stack_00000118;
         if (in_stack_00000118 != 0) {
            LOCK();
            plVar10 = (long*)( in_stack_00000118 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               in_stack_00000118 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }

         }

         RendererSceneRenderImplementation::RenderForwardMobile::_setup_render_pass_uniform_set();
         uVar2 = *(uint*)( unaff_RBP + 0x2f18 );
         RenderingDevice::get_singleton();
         RenderingDevice::draw_list_get_current_pass();
         RendererSceneRenderImplementation::RenderForwardMobile::_render_list(unaff_RBP, lVar8, lVar9, (RenderListParameters*)in_stack_00000018, 0, uVar2);
         RenderingDevice::get_singleton();
         RenderingDevice::draw_command_end_label();
      }

      if (( in_stack_00000010 != (Object*)0x0 ) && ( in_stack_00000028 != '\0' )) {
         pSVar3 = *(StringName**)( unaff_RBX + 0x178 );
         if ((const::{lambda()#2(iVar11 = __cxa_guard_acquire(&const::{lambda() * &const::{lambda()
         #2
         __cxa_atexit(StringName::~StringName, &const::{lambda(), #2) & const::{lambda()((const::{lambda()#1(iVar11 = __cxa_guard_acquire(&const::{lambda() * &const::{lambda()
      #1
      __cxa_atexit(StringName::~StringName, &const::{lambda(), #1) & RenderSceneBuffersRD::get_texture(pSVar3, (StringName *)&const::{lambda()
   #1
   RendererSceneRenderRD::_post_process_subpass();
}
RenderingDevice::get_singleton();RenderingDevice::draw_command_end_label();RenderingDevice::get_singleton();RenderingDevice::draw_list_end();}lVar8 = in_stack_00000128;if (in_stack_00000128 != 0), {
                  LOCK();
                  plVar10 = (long*)( in_stack_00000128 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     in_stack_00000128 = 0;
                     Memory::free_static((void*)( lVar8 + -0x10 ), false);
                  }

               }
, if (in_stack_00000010 == (Object*), 0x0){( **(code **)( *(long *), unaff_RBP + 0x1e8))();
   cVar6 = RefCounted::unreference();
}
 else{if (in_stack_00000028 == '\0') {
      uVar7 = RenderingDevice::get_singleton();
      in_stack_00000120 = 0;
      String::parse_latin1(unaff_R14);
      RenderingDevice::draw_command_begin_label(uVar7);
      lVar8 = in_stack_00000120;
      if (in_stack_00000120 != 0) {
         LOCK();
         plVar10 = (long*)( in_stack_00000120 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            in_stack_00000120 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      if (cStack000000000000010c != '\0') {
         RendererSceneRenderRD::_process_compositor_effects();
      }

      plVar10 = RenderingServerGlobals::utilities;
      if ((char)RenderingServerGlobals::utilities[1] != '\0') {
         pcVar4 = *(code**)( *RenderingServerGlobals::utilities + 0x68 );
         in_stack_00000120 = 0;
         String::parse_latin1(unaff_R14);
         ( *pcVar4 )(plVar10);
         lVar8 = in_stack_00000120;
         if (in_stack_00000120 != 0) {
            LOCK();
            plVar10 = (long*)( in_stack_00000120 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               in_stack_00000120 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }

         }

      }

      RendererSceneRenderRD::_render_buffers_post_process_and_tonemap((RenderDataRD*)unaff_RBP);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
   }

   RendererSceneRenderRD::_disable_clear_request((RenderDataRD*)unaff_RBP);
   ( **(code**)( *(long*)unaff_RBP + 0x1e8 ) )();
   cVar6 = RefCounted::unreference();
   if (cVar6 != '\0'){cVar6 = predelete_handler(in_stack_00000010);
      if (cVar6 != '\0') {
         ( **(code**)( *(long*)in_stack_00000010 + 0x140 ) )(in_stack_00000010);Memory::free_static(in_stack_00000010, false);}}, cVar6 = RefCounted::unreference()(cVar6 != '\0') = predelete_handler(unaff_R12)(cVar6 != '\0')(**(code**)( *(long*)unaff_R12 + 0x140 ))(), ;
      Memory::free_static(unaff_R12, false))( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* WARNING: Removing unreachable block (ram,0x0011826b) */
      /* WARNING: Removing unreachable block (ram,0x00119bdb) */
      /* WARNING: Removing unreachable block (ram,0x0011827f) */
      /* WARNING: Removing unreachable block (ram,0x001194d2) */
      /* WARNING: Removing unreachable block (ram,0x001185b0) */
      /* WARNING: Removing unreachable block (ram,0x00118fb6) */
      /* WARNING: Removing unreachable block (ram,0x00119e15) */
      /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
      void FUN_00119fc7(void) {
         long *plVar1;
         RenderForwardMobile *pRVar2;
         uint uVar3;
         StringName *pSVar4;
         code *pcVar5;
         float fVar6;
         long lVar7;
         char cVar8;
         long lVar9;
         undefined8 uVar10;
         long lVar11;
         int iVar12;
         RenderDataRD *unaff_RBX;
         RenderForwardMobile *unaff_RBP;
         Object *unaff_R12;
         StrRange *unaff_R14;
         long in_FS_OFFSET;
         undefined1 auVar13[16];
         undefined8 in_stack_00000008;
         Object *in_stack_00000010;
         Color *in_stack_00000018;
         Color *in_stack_00000020;
         char in_stack_00000028;
         undefined8 in_stack_00000030;
         char in_stack_00000038;
         char in_stack_00000040;
         int in_stack_00000048;
         Rect2i *pRStack0000000000000050;
         undefined8 in_stack_00000058;
         float fStack0000000000000060;
         float fStack0000000000000064;
         char cStack0000000000000078;
         char in_stack_00000080;
         float in_stack_00000088;
         undefined8 uStack0000000000000090;
         bool in_stack_00000098;
         Vector2i *in_stack_000000a8;
         undefined8 in_stack_00000108;
         long in_stack_00000118;
         long in_stack_00000120;
         long in_stack_00000128;
         Object *pOVar14;
         undefined8 in_stack_00000150;
         undefined8 in_stack_00000158;
         long in_stack_00000348;
         plVar1 = RenderingServerGlobals::utilities;
         if (in_stack_00000040 == '\0') {
            FUN_00119e6a();
            return;
         }

         cStack0000000000000078 = '\0';
         if ((char)RenderingServerGlobals::utilities[1] != '\0') {
            pcVar5 = *(code**)( *RenderingServerGlobals::utilities + 0x68 );
            in_stack_00000120 = 0;
            String::parse_latin1(unaff_R14);
            ( *pcVar5 )(plVar1);
            lVar11 = in_stack_00000120;
            if (in_stack_00000120 != 0) {
               LOCK();
               plVar1 = (long*)( in_stack_00000120 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  in_stack_00000120 = 0;
                  Memory::free_static((void*)( lVar11 + -0x10 ), false);
               }

            }

         }

         uVar10 = RenderingDevice::get_singleton();
         in_stack_00000120 = 0;
         String::parse_latin1(unaff_R14);
         RenderingDevice::draw_command_begin_label(uVar10);
         lVar11 = in_stack_00000120;
         if (in_stack_00000120 != 0) {
            LOCK();
            plVar1 = (long*)( in_stack_00000120 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               in_stack_00000120 = 0;
               Memory::free_static((void*)( lVar11 + -0x10 ), false);
            }

         }

         pRVar2 = unaff_RBP + 0x210;
         RendererRD::SkyRD::setup_sky(pRVar2);
         lVar11 = RendererSceneRender::environment_get_sky();
         if (lVar11 != 0) {
            lVar9 = *(long*)( unaff_RBX + 0x180 );
            uVar10 = *(undefined8*)( unaff_RBP + 0x168 );
            cVar8 = RefCounted::reference();
            pOVar14 = unaff_R12;
            if (cVar8 == '\0') {
               pOVar14 = (Object*)0x0;
            }

            RendererRD::SkyRD::update_radiance_buffers(uVar10, pRVar2, in_stack_00000008, *(undefined8*)( unaff_RBX + 0x1c0 ), lVar9 + 0x198);
            if (( ( pOVar14 != (Object*)0x0 ) && ( cVar8 = RefCounted::unreference() ),cVar8 != '\0' )) &&( cVar8 = cVar8 != '\0' )(**(code**)( *(long*)pOVar14 + 0x140 ))();
            Memory::free_static(pOVar14, false);
         }

         RendererRD::SkyRD::sky_get_radiance_texture_rd(pRVar2, lVar11);
         cStack0000000000000078 = in_stack_00000080;
      }

      if (cStack0000000000000078 != '\0') {
         uVar10 = *(undefined8*)( unaff_RBP + 0x168 );
         cVar8 = RefCounted::reference();
         pOVar14 = unaff_R12;
         if (cVar8 == '\0') {
            pOVar14 = (Object*)0x0;
         }

         RendererRD::SkyRD::update_res_buffers(uVar10, pRVar2, in_stack_00000008, *(undefined8*)( unaff_RBX + 0x1c0 ));
         if (( ( pOVar14 != (Object*)0x0 ) && ( cVar8 = RefCounted::unreference() ),cVar8 != '\0' )) &&( cVar8 = cVar8 != '\0' )(**(code**)( *(long*)pOVar14 + 0x140 ))(pOVar14);
         Memory::free_static(pOVar14, false);
      }

   }

   RenderingDevice::get_singleton();
   RenderingDevice::draw_command_end_label();
   RendererSceneRenderRD::_process_compositor_effects();
   RendererSceneRenderImplementation::RenderForwardMobile::_pre_opaque_render(unaff_RBP, unaff_RBX);
   if (*(int*)( unaff_RBX + 0x210 ) != 0) {
      iVar12 = 0;
      do {
         iVar12 = iVar12 + 1;
      }
 while ( *(int*)( unaff_RBX + 0x210 ) != iVar12 );
   }

   cVar8 = RendererSceneRender::is_environment();
   if (( cVar8 != '\0' ) && ( cVar8 = RendererSceneRender::environment_get_fog_enabled() ),cVar8 != '\0') {
      RendererSceneRender::environment_get_fog_aerial_perspective();
      RendererSceneRender::environment_get_fog_sun_scatter();
      RendererSceneRender::environment_get_fog_height_density();
      if (*(long*)( unaff_RBX + 0x1c0 ) != 0) {
         RendererSceneRender::environment_get_fog_mode();
      }

   }

   if (*(long*)( unaff_RBX + 0x178 ) != 0) {
      ( **(code**)( *(long*)unaff_RBP + 0x170 ) )();
   }

   if (in_stack_00000010 == (Object*)0x0) {
      uVar10 = RenderingDevice::get_singleton();
      in_stack_00000120 = 0;
      String::parse_latin1(unaff_R14);
      RenderingDevice::draw_command_begin_label(uVar10);
      lVar11 = in_stack_00000120;
      if (in_stack_00000120 != 0) {
         LOCK();
         plVar1 = (long*)( in_stack_00000120 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            in_stack_00000120 = 0;
            Memory::free_static((void*)( lVar11 + -0x10 ), false);
         }

      }

      uStack0000000000000090 = 0x10000;
   }
 else {
      uVar10 = RenderingDevice::get_singleton();
      in_stack_00000120 = 0;
      String::parse_latin1(unaff_R14);
      RenderingDevice::draw_command_begin_label(uVar10);
      lVar11 = in_stack_00000120;
      if (in_stack_00000120 != 0) {
         LOCK();
         plVar1 = (long*)( in_stack_00000120 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            in_stack_00000120 = 0;
            Memory::free_static((void*)( lVar11 + -0x10 ), false);
         }

      }

      uStack0000000000000090 = 0x60000;
   }

   uVar10 = RenderingDevice::get_singleton();
   in_stack_00000120 = 0;
   String::parse_latin1(unaff_R14);
   RenderingDevice::draw_command_begin_label(uVar10);
   lVar11 = in_stack_00000120;
   if (in_stack_00000120 != 0) {
      LOCK();
      plVar1 = (long*)( in_stack_00000120 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         in_stack_00000120 = 0;
         Memory::free_static((void*)( lVar11 + -0x10 ), false);
      }

   }

   *(undefined4*)( *(long*)( unaff_RBX + 0x180 ) + 0x3cc ) = *(undefined4*)( unaff_RBX + 0x210 );
   RendererSceneRenderImplementation::RenderForwardMobile::_update_render_base_uniform_set(unaff_RBP);
   RendererSceneRenderImplementation::RenderForwardMobile::_setup_environment(unaff_RBP, unaff_RBX, in_stack_00000098, in_stack_000000a8, in_stack_00000020, *(long*)( unaff_RBX + 0x178 ) != 0, false, 0);
   plVar1 = RenderingServerGlobals::utilities;
   if (in_stack_00000108._6_1_ == '\0') {
      if (in_stack_00000038 == '\0') {
         if ((char)RenderingServerGlobals::utilities[1] != '\0') {
            in_stack_00000020 = *(Color**)( *RenderingServerGlobals::utilities + 0x68 );
            LAB_0011863c:in_stack_00000120 = 0;
            String::parse_latin1(unaff_R14);
            ( *(code*)in_stack_00000020 )(plVar1);
            lVar11 = in_stack_00000120;
            if (in_stack_00000120 != 0) {
               LOCK();
               plVar1 = (long*)( in_stack_00000120 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  in_stack_00000120 = 0;
                  Memory::free_static((void*)( lVar11 + -0x10 ), false);
               }

            }

         }

      }
 else if ((char)RenderingServerGlobals::utilities[1] != '\0') {
         in_stack_00000020 = *(Color**)( *RenderingServerGlobals::utilities + 0x68 );
         goto LAB_0011863c;
      }

   }
 else if ((char)RenderingServerGlobals::utilities[1] != '\0') {
      in_stack_00000020 = *(Color**)( *RenderingServerGlobals::utilities + 0x68 );
      goto LAB_0011863c;
   }

   RendererSceneRenderImplementation::RenderForwardMobile::_setup_render_pass_uniform_set();
   fVar6 = _LC257;
   in_stack_00000128 = 0;
   if (_LC257 <= fStack0000000000000060) {
      powf((float)( ( (double)fStack0000000000000060 + __LC259 ) * __LC260 ), _LC261);
   }

   if (fVar6 <= fStack0000000000000064) {
      powf((float)( ( (double)fStack0000000000000064 + __LC259 ) * __LC260 ), _LC261);
   }

   if (fVar6 <= in_stack_00000058._4_4_) {
      powf((float)( ( (double)in_stack_00000058._4_4_ + __LC259 ) * __LC260 ), _LC261);
   }

   auVar13 = Color::operator *(in_stack_00000018, in_stack_00000088);
   if (in_stack_00000010 == (Object*)0x0) {
      LAB_001193cf:Vector<Color>::push_back(auVar13._0_8_, auVar13._8_8_);
   }
 else {
      Vector<Color>::push_back(auVar13._0_8_, auVar13._8_8_ & 0xffffffff);
      if (in_stack_00000048 != 0) {
         if (fVar6 <= fStack0000000000000060) {
            powf((float)( ( (double)fStack0000000000000060 + __LC259 ) * __LC260 ), _LC261);
         }

         if (fVar6 <= fStack0000000000000064) {
            powf((float)( ( (double)fStack0000000000000064 + __LC259 ) * __LC260 ), _LC261);
         }

         if (fVar6 <= in_stack_00000058._4_4_) {
            powf((float)( ( (double)in_stack_00000058._4_4_ + __LC259 ) * __LC260 ), _LC261);
         }

         Color::operator *(in_stack_00000018, in_stack_00000088);
         Vector<Color>::push_back();
      }

      if (in_stack_00000028 != '\0') {
         auVar13 = ZEXT816(0x3f80000000000000) << 0x40;
         goto LAB_001193cf;
      }

   }

   uVar10 = RenderingDevice::get_singleton();
   Rect2i::operator_cast_to_Rect2((Rect2i*)( unaff_RBX + 0x224 ));
   pRStack0000000000000050 = (Rect2i*)( unaff_RBX + 0x224 );
   lVar11 = RenderingDevice::draw_list_begin(0, uVar10, in_stack_00000030, 0x10001);
   uVar10 = RenderingDevice::get_singleton();
   lVar9 = RenderingDevice::framebuffer_get_format(uVar10);
   uVar3 = *(uint*)( unaff_RBP + 0x2ef8 );
   if (uVar3 != 0) {
      RenderingDevice::get_singleton();
      RenderingDevice::draw_list_get_current_pass();
      RendererSceneRenderImplementation::RenderForwardMobile::_render_list(unaff_RBP, lVar11, lVar9, (RenderListParameters*)in_stack_00000018, 0, uVar3);
   }

   RenderingDevice::get_singleton();
   RenderingDevice::draw_command_end_label();
   if (cStack0000000000000078 == '\0') goto LAB_001182b4;
   uVar10 = RenderingDevice::get_singleton();
   in_stack_00000118 = 0;
   String::parse_latin1((StrRange*)&stack0x00000118);
   RenderingDevice::draw_command_begin_label(uVar10, (StrRange*)&stack0x00000118, in_stack_00000018);
   lVar7 = in_stack_00000118;
   if (in_stack_00000118 == 0) {
      LAB_00119590:uVar10 = *(undefined8*)( unaff_RBP + 0x168 );
   }
 else {
      LOCK();
      plVar1 = (long*)( in_stack_00000118 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00119590;
      in_stack_00000118 = 0;
      Memory::free_static((void*)( lVar7 + -0x10 ), false);
      uVar10 = *(undefined8*)( unaff_RBP + 0x168 );
   }

   cVar8 = RefCounted::reference();
   pOVar14 = unaff_R12;
   if (cVar8 == '\0') {
      pOVar14 = (Object*)0x0;
   }

   RendererRD::SkyRD::draw_sky(uVar10, unaff_RBP + 0x210, lVar11, in_stack_00000008, *(undefined8*)( unaff_RBX + 0x1c0 ), in_stack_00000030);
   if (( ( pOVar14 != (Object*)0x0 ) && ( cVar8 = RefCounted::unreference() ),cVar8 != '\0' )) &&( cVar8 = cVar8 != '\0' )(**(code**)( *(long*)pOVar14 + 0x140 ))(pOVar14);
   Memory::free_static(pOVar14, false);
}
RenderingDevice::get_singleton();RenderingDevice::draw_command_end_label();LAB_001182b4:if (in_stack_00000038 == '\0') {
   RenderingDevice::get_singleton();
   RenderingDevice::draw_list_end();
   RenderingDevice::get_singleton();
   RenderingDevice::draw_command_end_label();
   if (in_stack_00000058._3_1_ != '\0') {
      RendererSceneRenderRD::_process_compositor_effects();
   }

   if (unaff_RBP[12000] != (RenderForwardMobile)0x0) {
      RendererSceneRenderRD::_render_buffers_copy_screen_texture((RenderDataRD*)unaff_RBP);
   }

   if (unaff_RBP[0x2ee2] != (RenderForwardMobile)0x0) {
      RendererSceneRenderRD::_render_buffers_copy_depth_texture((RenderDataRD*)unaff_RBP);
   }

   if (*(int*)( unaff_RBP + 0x2f28 ) != 0) {
      uVar10 = RenderingDevice::get_singleton();
      in_stack_00000118 = 0;
      String::parse_latin1((StrRange*)&stack0x00000118);
      RenderingDevice::draw_command_begin_label(uVar10, (StrRange*)&stack0x00000118, in_stack_00000018);
      lVar11 = in_stack_00000118;
      if (in_stack_00000118 != 0) {
         LOCK();
         plVar1 = (long*)( in_stack_00000118 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            in_stack_00000118 = 0;
            Memory::free_static((void*)( lVar11 + -0x10 ), false);
         }

      }

      plVar1 = RenderingServerGlobals::utilities;
      if ((char)RenderingServerGlobals::utilities[1] != '\0') {
         pcVar5 = *(code**)( *RenderingServerGlobals::utilities + 0x68 );
         in_stack_00000118 = 0;
         String::parse_latin1((StrRange*)&stack0x00000118);
         ( *pcVar5 )(plVar1);
         lVar11 = in_stack_00000118;
         if (in_stack_00000118 != 0) {
            LOCK();
            plVar1 = (long*)( in_stack_00000118 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               in_stack_00000118 = 0;
               Memory::free_static((void*)( lVar11 + -0x10 ), false);
            }

         }

      }

      RendererSceneRenderImplementation::RenderForwardMobile::_setup_render_pass_uniform_set();
      uVar3 = *(uint*)( unaff_RBP + 0x2f18 );
      RenderingDevice::get_singleton();
      RenderingDevice::draw_list_get_current_pass();
      uVar10 = RenderingDevice::get_singleton();
      _in_stack_00000150 = Rect2i::operator_cast_to_Rect2(pRStack0000000000000050);
      lVar11 = RenderingDevice::draw_list_begin(uVar10, in_stack_00000030, 0, in_stack_00000008, 0, &stack0x00000150, uStack0000000000000090);
      RendererSceneRenderImplementation::RenderForwardMobile::_render_list(unaff_RBP, lVar11, lVar9, (RenderListParameters*)in_stack_00000018, 0, uVar3);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_list_end();
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
   }

}
 else {
   if (*(int*)( unaff_RBP + 0x2f28 ) != 0) {
      uVar10 = RenderingDevice::get_singleton();
      in_stack_00000118 = 0;
      String::parse_latin1((StrRange*)&stack0x00000118);
      RenderingDevice::draw_command_begin_label(uVar10, (StrRange*)&stack0x00000118, in_stack_00000018);
      lVar7 = in_stack_00000118;
      if (in_stack_00000118 != 0) {
         LOCK();
         plVar1 = (long*)( in_stack_00000118 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            in_stack_00000118 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

      RendererSceneRenderImplementation::RenderForwardMobile::_setup_render_pass_uniform_set();
      uVar3 = *(uint*)( unaff_RBP + 0x2f18 );
      RenderingDevice::get_singleton();
      RenderingDevice::draw_list_get_current_pass();
      RendererSceneRenderImplementation::RenderForwardMobile::_render_list(unaff_RBP, lVar11, lVar9, (RenderListParameters*)in_stack_00000018, 0, uVar3);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
   }

   if (( in_stack_00000010 != (Object*)0x0 ) && ( in_stack_00000028 != '\0' )) {
      pSVar4 = *(StringName**)( unaff_RBX + 0x178 );
      if ((const::{lambda()#2(iVar12 = __cxa_guard_acquire(&const::{lambda() * &const::{lambda()
      #2
      __cxa_atexit(StringName::~StringName, &const::{lambda(), #2) & const::{lambda()((const::{lambda()#1(iVar12 = __cxa_guard_acquire(&const::{lambda() * &const::{lambda()
   #1
   __cxa_atexit(StringName::~StringName, &const::{lambda(), #1) & RenderSceneBuffersRD::get_texture(pSVar4, (StringName *)&const::{lambda()#1RendererSceneRenderRD::_post_process_subpass();}RenderingDevice::get_singleton();RenderingDevice::draw_command_end_label();RenderingDevice::get_singleton();RenderingDevice::draw_list_end();}lVar11 = in_stack_00000128;if (in_stack_00000128 != 0), {
               LOCK();
               plVar1 = (long*)( in_stack_00000128 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  in_stack_00000128 = 0;
                  Memory::free_static((void*)( lVar11 + -0x10 ), false);
               }

            }
, if (in_stack_00000010 == (Object*), 0x0){( **(code **)( *(long *), unaff_RBP + 0x1e8))();
   cVar8 = RefCounted::unreference();
}
 else{if (in_stack_00000028 == '\0') {
      uVar10 = RenderingDevice::get_singleton();
      in_stack_00000120 = 0;
      String::parse_latin1(unaff_R14);
      RenderingDevice::draw_command_begin_label(uVar10);
      lVar11 = in_stack_00000120;
      if (in_stack_00000120 != 0) {
         LOCK();
         plVar1 = (long*)( in_stack_00000120 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            in_stack_00000120 = 0;
            Memory::free_static((void*)( lVar11 + -0x10 ), false);
         }

      }

      if (in_stack_00000108._4_1_ != '\0') {
         RendererSceneRenderRD::_process_compositor_effects();
      }

      plVar1 = RenderingServerGlobals::utilities;
      if ((char)RenderingServerGlobals::utilities[1] != '\0') {
         pcVar5 = *(code**)( *RenderingServerGlobals::utilities + 0x68 );
         in_stack_00000120 = 0;
         String::parse_latin1(unaff_R14);
         ( *pcVar5 )(plVar1);
         lVar11 = in_stack_00000120;
         if (in_stack_00000120 != 0) {
            LOCK();
            plVar1 = (long*)( in_stack_00000120 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               in_stack_00000120 = 0;
               Memory::free_static((void*)( lVar11 + -0x10 ), false);
            }

         }

      }

      RendererSceneRenderRD::_render_buffers_post_process_and_tonemap((RenderDataRD*)unaff_RBP);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
   }

   RendererSceneRenderRD::_disable_clear_request((RenderDataRD*)unaff_RBP);
   ( **(code**)( *(long*)unaff_RBP + 0x1e8 ) )();
   cVar8 = RefCounted::unreference();
   if (cVar8 != '\0'){cVar8 = predelete_handler(in_stack_00000010);
      if (cVar8 != '\0') {
         ( **(code**)( *(long*)in_stack_00000010 + 0x140 ) )(in_stack_00000010);Memory::free_static(in_stack_00000010, false);}}, cVar8 = RefCounted::unreference()(cVar8 != '\0') = predelete_handler(unaff_R12)(cVar8 != '\0')(**(code**)( *(long*)unaff_R12 + 0x140 ))(), ;
      Memory::free_static(unaff_R12, false))( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* RendererSceneRenderImplementation::RenderForwardMobile::_render_material(Transform3D const&,
   Projection const&, bool, PagedArray<RenderGeometryInstance*> const&, RID, Rect2i const&, float)
    */
   void RendererSceneRenderImplementation::RenderForwardMobile::_render_material(undefined4 param_1_00, RenderForwardMobile *this, undefined1 (*param_1)[16], undefined8 *param_2, undefined8 param_5, undefined8 param_4, undefined8 param_7, Rect2i *param_8) {
      long *plVar1;
      uint uVar2;
      code *pcVar3;
      int iVar4;
      undefined8 uVar5;
      long lVar6;
      long lVar7;
      long lVar8;
      long in_FS_OFFSET;
      ulong uVar9;
      long local_7c0;
      char *local_7b8;
      long local_7b0[2];
      undefined8 local_7a0;
      undefined1 local_798[16];
      undefined1 local_788[16];
      undefined1 local_778[16];
      undefined1 local_768[16];
      undefined1 local_758[16];
      undefined8 local_748;
      undefined8 uStack_740;
      uint local_738;
      undefined1 local_734;
      undefined8 local_730;
      undefined8 local_728;
      undefined1 local_720;
      undefined8 local_71c;
      undefined8 local_714;
      undefined8 uStack_70c;
      undefined8 local_704;
      undefined8 local_6f8;
      undefined4 local_6f0;
      undefined4 local_6ec;
      code *local_6e8[47];
      undefined8 local_570;
      Object *local_568;
      undefined8 local_560;
      undefined8 local_558;
      undefined8 local_550;
      undefined8 local_548;
      undefined8 local_540;
      undefined8 local_538;
      undefined8 local_530;
      undefined1 local_528[16];
      undefined1 local_518[16];
      undefined1 local_508[16];
      undefined8 local_4f8;
      undefined4 local_4f0;
      undefined8 local_4e8;
      undefined8 local_4e0;
      undefined4 local_4d8;
      undefined2 local_4d4;
      undefined8 local_4d0;
      undefined1 local_4c8;
      undefined8 local_4c4;
      undefined8 local_4bc;
      undefined8 local_4b0;
      undefined4 local_4a8;
      undefined8 local_4a0;
      undefined8 local_498;
      undefined8 local_490;
      undefined8 local_488;
      undefined8 local_480;
      undefined1 local_478[16];
      undefined4 local_468;
      undefined8 local_460;
      undefined4 local_458;
      undefined8 local_448;
      uint uStack_440;
      uint uStack_43c;
      undefined1 local_2d7;
      undefined1 local_2d4[16];
      undefined1 local_2c4[16];
      undefined4 local_2b4;
      undefined4 uStack_2b0;
      undefined4 uStack_2ac;
      undefined4 uStack_2a8;
      undefined8 local_2a4;
      undefined8 uStack_29c;
      undefined8 local_294;
      undefined8 uStack_28c;
      undefined8 local_284;
      undefined8 uStack_27c;
      undefined8 local_274;
      undefined8 uStack_26c;
      undefined8 local_264;
      undefined4 local_25c;
      undefined2 local_254;
      undefined1 local_252;
      undefined1 local_250[16];
      undefined1 local_240[16];
      undefined4 local_230;
      undefined4 uStack_22c;
      undefined4 uStack_228;
      undefined4 uStack_224;
      undefined4 local_220;
      undefined8 local_21c;
      undefined4 local_214;
      undefined8 local_210;
      undefined4 local_208;
      undefined8 local_204;
      undefined8 uStack_1fc;
      undefined8 local_1f4;
      undefined8 uStack_1ec;
      undefined8 local_1e4;
      undefined8 uStack_1dc;
      undefined8 local_1d4;
      undefined8 uStack_1cc;
      Projection local_1c4[64];
      undefined1 local_184[16];
      undefined1 local_174[16];
      undefined4 local_164;
      undefined8 local_160;
      undefined4 local_158;
      Projection local_154[64];
      undefined8 local_114;
      Projection local_10c[64];
      Projection local_cc[64];
      undefined1 local_8c[16];
      undefined4 local_7c;
      undefined8 local_78;
      undefined1 local_70;
      undefined4 local_6c;
      undefined8 local_68;
      undefined8 local_60;
      undefined8 local_58;
      undefined8 local_50;
      long local_40;
      plVar1 = RenderingServerGlobals::utilities;
      local_798._8_8_ = local_798._0_8_;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if ((char)RenderingServerGlobals::utilities[1] != '\0') {
         pcVar3 = *(code**)( *RenderingServerGlobals::utilities + 0x68 );
         local_7c0 = 0;
         local_7b0[0] = 0x1b;
         local_7b8 = "Setup Rendering 3D Material";
         String::parse_latin1((StrRange*)&local_7c0);
         ( *pcVar3 )(plVar1);
         lVar6 = local_7c0;
         if (local_7c0 != 0) {
            LOCK();
            plVar1 = (long*)( local_7c0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_7c0 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }

      uVar5 = RenderingDevice::get_singleton();
      local_7c0 = 0;
      local_7b8 = "Render 3D Material";
      local_448 = (undefined**)CONCAT44(_LC74, _LC74);
      uStack_440 = _LC74;
      uStack_43c = _LC74;
      local_7b0[0] = 0x12;
      String::parse_latin1((StrRange*)&local_7c0);
      RenderingDevice::draw_command_begin_label(uVar5, (StrRange*)&local_7c0, (Object*)&local_448);
      lVar6 = local_7c0;
      if (local_7c0 != 0) {
         LOCK();
         plVar1 = (long*)( local_7c0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_7c0 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

      _update_render_base_uniform_set(this);
      Object::Object((Object*)&local_448);
      local_2d4 = ZEXT416(_LC74);
      local_2d7 = 0;
      local_448 = (undefined**)Vector2::operator_cast_to_Vector2i;
      local_2b4 = 0x3f800000;
      uStack_2b0 = 0;
      uStack_2ac = 0;
      uStack_2a8 = 0;
      local_2c4 = local_2d4;
      Projection::Projection((Projection*)&local_2a4);
      local_250 = ZEXT416(_LC74);
      local_254 = 0;
      local_264 = 0;
      local_25c = 0;
      local_252 = 0;
      local_230 = 0x3f800000;
      uStack_22c = 0;
      uStack_228 = 0;
      uStack_224 = 0;
      local_220 = 1;
      local_21c = 0;
      local_214 = 0;
      local_210 = 0;
      local_208 = 0;
      local_240 = local_250;
      Projection::Projection((Projection*)&local_204);
      Projection::Projection(local_1c4);
      local_184 = ZEXT416(_LC74);
      local_164 = 0x3f800000;
      local_160 = 0;
      local_158 = 0;
      local_174 = local_184;
      Projection::Projection(local_154);
      local_114 = 0;
      Projection::Projection(local_10c);
      Projection::Projection(local_cc);
      local_294 = param_2[2];
      uStack_28c = param_2[3];
      local_284 = param_2[4];
      uStack_27c = param_2[5];
      local_2a4 = *param_2;
      uStack_29c = param_2[1];
      local_250 = *param_1;
      local_2d4 = *param_1;
      local_8c = (undefined1[16])0x0;
      local_240 = param_1[1];
      local_2c4 = param_1[1];
      local_274 = param_2[6];
      uStack_26c = param_2[7];
      local_2b4 = ( undefined4 ) * (undefined8*)param_1[2];
      uStack_2b0 = ( undefined4 )(( ulong ) * (undefined8*)param_1[2] >> 0x20);
      uStack_2ac = ( undefined4 ) * (undefined8*)( param_1[2] + 8 );
      uStack_2a8 = ( undefined4 )(( ulong ) * (undefined8*)( param_1[2] + 8 ) >> 0x20);
      local_58 = CONCAT44((float)*(double*)( this + 0x170 ), (float)*(double*)( this + 0x168 ));
      local_7c = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_50 = 0;
      local_230 = local_2b4;
      uStack_22c = uStack_2b0;
      uStack_228 = uStack_2ac;
      uStack_224 = uStack_2a8;
      local_204 = local_2a4;
      uStack_1fc = uStack_29c;
      local_1f4 = local_294;
      uStack_1ec = uStack_28c;
      local_1e4 = local_284;
      uStack_1dc = uStack_27c;
      local_1d4 = local_274;
      uStack_1cc = uStack_26c;
      local_6c = param_1_00;
      Object::Object((Object*)local_6e8);
      local_6e8[0] = RendererSceneRender::is_environment;
      local_4d4 = 0;
      local_528 = (undefined1[16])0x0;
      local_518 = (undefined1[16])0x0;
      local_508 = (undefined1[16])0x0;
      local_478 = (undefined1[16])0x0;
      local_570 = 0;
      local_558 = 0;
      local_550 = 0;
      local_548 = 0;
      local_540 = 0;
      local_538 = 0;
      local_530 = 0;
      local_4f8 = 0;
      local_4f0 = 0;
      local_4e8 = 0;
      local_4e0 = 0;
      local_4d8 = 0;
      local_4d0 = 0;
      local_4c8 = 0;
      local_4c4 = 0;
      local_4bc = 0;
      local_4b0 = 0;
      local_4a8 = 0;
      local_4a0 = 0;
      local_498 = 0;
      local_490 = 0;
      local_488 = 0;
      local_480 = 0;
      local_468 = 0;
      local_460 = 0;
      local_458 = 0;
      local_748 = __LC138;
      uStack_740 = _UNK_0012a0f8;
      local_7a0 = _LC81;
      local_568 = (Object*)&local_448;
      local_560 = param_4;
      local_798._0_8_ = Vector2::operator_cast_to_Vector2i((Vector2*)&local_7a0);
      uVar9 = 0;
      _setup_environment(this, (RenderDataRD*)local_6e8, true, (Vector2i*)local_798, (Color*)&local_748, false, false, 0);
      _fill_render_list(this, 2, (Object*)local_6e8, 4, 0);
      RenderList::sort_by_key((RenderList*)( this + 0x2f38 ));
      _fill_instance_data(this, 2, 0, 0xffffffff, 1);
      lVar6 = RendererRD::MaterialStorage::get_singleton();
      uVar5 = _setup_render_pass_uniform_set(this, 2, 0, 0, lVar6 + 8, 0, uVar9 & 0xffffffff00000000);
      plVar1 = RenderingServerGlobals::utilities;
      if ((char)RenderingServerGlobals::utilities[1] != '\0') {
         pcVar3 = *(code**)( *RenderingServerGlobals::utilities + 0x68 );
         local_7b8 = "Render 3D Material";
         local_7c0 = 0;
         local_7b0[0] = 0x12;
         String::parse_latin1((StrRange*)&local_7c0);
         ( *pcVar3 )(plVar1);
         lVar6 = local_7c0;
         if (local_7c0 != 0) {
            LOCK();
            plVar1 = (long*)( local_7c0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_7c0 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }

      uVar2 = *(uint*)( this + 0x2f38 );
      local_748 = *(undefined8*)( this + 0x2f40 );
      local_714 = *(undefined8*)( this + 0x2bc0 );
      uStack_70c = *(undefined8*)( this + 0x2bc8 );
      local_6f8 = 0;
      uStack_740 = *(undefined8*)( this + 0x2f50 );
      local_6ec = 0;
      local_734 = 1;
      local_730 = _LC281;
      local_720 = 0;
      local_71c = 0;
      local_704 = 0;
      local_6f0 = 0;
      local_7b0[0] = 0;
      local_798 = (undefined1[16])0x0;
      local_788 = (undefined1[16])0x0;
      local_778 = (undefined1[16])0x0;
      local_768 = (undefined1[16])0x0;
      local_758 = (undefined1[16])0x0;
      local_738 = uVar2;
      local_728 = uVar5;
      iVar4 = CowData<Color>::resize<false>((CowData<Color>*)local_7b0, 5);
      if (iVar4 == 0) {
         lVar8 = 0;
         lVar6 = 0;
         do {
            if (local_7b0[0] == 0) {
               lVar7 = 0;
               LAB_0011b313:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar6, lVar7, "p_index", "size()", "", false, false);
            }
 else {
               lVar7 = *(long*)( local_7b0[0] + -8 );
               if (lVar7 <= lVar6) goto LAB_0011b313;
               CowData<Color>::_copy_on_write((CowData<Color>*)local_7b0);
               uVar5 = *(undefined8*)( local_798 + lVar8 + 8 );
               *(undefined8*)( local_7b0[0] + lVar8 ) = *(undefined8*)( (Vector2i*)local_798 + lVar8 );
               ( (undefined8*)( local_7b0[0] + lVar8 ) )[1] = uVar5;
            }

            lVar6 = lVar6 + 1;
            lVar8 = lVar8 + 0x10;
         }
 while ( lVar6 != 5 );
      }

      uVar5 = RenderingDevice::get_singleton();
      local_798 = Rect2i::operator_cast_to_Rect2(param_8);
      lVar6 = RenderingDevice::draw_list_begin(0, uVar5, param_7, 0x500ff, &local_7b8, 0, (Vector2i*)local_798, 0);
      uVar5 = RenderingDevice::get_singleton();
      lVar8 = RenderingDevice::framebuffer_get_format(uVar5, param_7);
      _render_list(this, lVar6, lVar8, (RenderListParameters*)&local_748, 0, uVar2);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_list_end();
      lVar6 = local_7b0[0];
      if (local_7b0[0] != 0) {
         LOCK();
         plVar1 = (long*)( local_7b0[0] + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_7b0[0] = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
      RenderDataRD::~RenderDataRD((RenderDataRD*)local_6e8);
      local_448 = (undefined**)Vector2::operator_cast_to_Vector2i;
      Projection::~Projection(local_cc);
      Projection::~Projection(local_10c);
      Projection::~Projection(local_154);
      Projection::~Projection(local_1c4);
      Projection::~Projection((Projection*)&local_204);
      Projection::~Projection((Projection*)&local_2a4);
      local_448 = &PTR__initialize_classv_00129358;
      Object::~Object((Object*)&local_448);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* RendererSceneRenderImplementation::RenderForwardMobile::_render_uv2(PagedArray<RenderGeometryInstance*>
   const&, RID, Rect2i const&) */
   void RendererSceneRenderImplementation::RenderForwardMobile::_render_uv2(RenderForwardMobile *this, undefined8 param_1, undefined8 param_3, Rect2i *param_4) {
      long *plVar1;
      code *pcVar2;
      uint uVar3;
      int iVar4;
      undefined8 uVar5;
      long lVar6;
      long lVar7;
      ulong *puVar8;
      long lVar9;
      long in_FS_OFFSET;
      undefined1 auVar10[16];
      undefined1 auVar11[16];
      ulong uVar12;
      long local_7c0;
      char *local_7b8;
      long local_7b0[2];
      undefined8 local_7a0;
      undefined1 local_798[16];
      undefined1 local_788[16];
      undefined1 local_778[16];
      undefined1 local_768[16];
      undefined1 local_758[16];
      undefined8 local_748;
      undefined8 uStack_740;
      uint local_738;
      undefined1 local_734;
      undefined8 local_730;
      undefined8 local_728;
      undefined1 local_720;
      undefined8 local_71c;
      undefined8 local_714;
      undefined8 uStack_70c;
      undefined8 local_704;
      undefined8 local_6f8;
      undefined4 local_6f0;
      undefined4 local_6ec;
      code *local_6e8[47];
      undefined8 local_570;
      Object *local_568;
      undefined8 local_560;
      undefined8 local_558;
      undefined8 local_550;
      undefined8 local_548;
      undefined8 local_540;
      undefined8 local_538;
      undefined8 local_530;
      undefined1 local_528[16];
      undefined1 local_518[16];
      undefined1 local_508[16];
      undefined8 local_4f8;
      undefined4 local_4f0;
      undefined8 local_4e8;
      undefined8 local_4e0;
      undefined4 local_4d8;
      undefined2 local_4d4;
      undefined8 local_4d0;
      undefined1 local_4c8;
      undefined8 local_4c4;
      undefined8 local_4bc;
      undefined8 local_4b0;
      undefined4 local_4a8;
      undefined8 local_4a0;
      undefined8 local_498;
      undefined8 local_490;
      undefined8 local_488;
      undefined8 local_480;
      undefined1 local_478[16];
      undefined4 local_468;
      undefined8 local_460;
      undefined4 local_458;
      undefined8 local_448;
      uint uStack_440;
      uint uStack_43c;
      undefined1 local_2d7;
      undefined1 local_2d4[16];
      undefined1 local_2c4[16];
      undefined4 local_2b4;
      undefined8 local_2b0;
      undefined4 local_2a8;
      Projection local_2a4[64];
      undefined8 local_264;
      undefined4 local_25c;
      undefined2 local_254;
      undefined1 local_252;
      undefined1 local_250[16];
      undefined1 local_240[16];
      undefined4 local_230;
      undefined8 local_22c;
      undefined4 local_224;
      undefined4 local_220;
      undefined8 local_21c;
      undefined4 local_214;
      undefined8 local_210;
      undefined4 local_208;
      Projection local_204[64];
      Projection local_1c4[64];
      undefined1 local_184[16];
      undefined1 local_174[16];
      undefined4 local_164;
      undefined8 local_160;
      undefined4 local_158;
      Projection local_154[64];
      undefined8 local_114;
      Projection local_10c[64];
      Projection local_cc[64];
      undefined1 local_8c[16];
      undefined4 local_7c;
      undefined8 local_78;
      undefined1 local_70;
      undefined4 local_6c;
      undefined8 local_68;
      undefined8 local_60;
      undefined8 local_50;
      long local_40;
      plVar1 = RenderingServerGlobals::utilities;
      local_798._8_8_ = local_798._0_8_;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if ((char)RenderingServerGlobals::utilities[1] != '\0') {
         pcVar2 = *(code**)( *RenderingServerGlobals::utilities + 0x68 );
         local_7c0 = 0;
         local_7b0[0] = 0x13;
         local_7b8 = "Setup Rendering UV2";
         String::parse_latin1((StrRange*)&local_7c0);
         ( *pcVar2 )(plVar1);
         lVar6 = local_7c0;
         if (local_7c0 != 0) {
            LOCK();
            plVar1 = (long*)( local_7c0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_7c0 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }

      uVar5 = RenderingDevice::get_singleton();
      local_7c0 = 0;
      local_7b8 = "Render UV2";
      local_448 = (undefined**)CONCAT44(_LC74, _LC74);
      uStack_440 = _LC74;
      uStack_43c = _LC74;
      local_7b0[0] = 10;
      String::parse_latin1((StrRange*)&local_7c0);
      RenderingDevice::draw_command_begin_label(uVar5, (StrRange*)&local_7c0, (Object*)&local_448);
      lVar6 = local_7c0;
      if (local_7c0 != 0) {
         LOCK();
         plVar1 = (long*)( local_7c0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_7c0 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

      _update_render_base_uniform_set(this);
      Object::Object((Object*)&local_448);
      local_2d4 = ZEXT416(_LC74);
      local_448 = (undefined**)Vector2::operator_cast_to_Vector2i;
      local_2d7 = 0;
      local_2b4 = 0x3f800000;
      local_2b0 = 0;
      local_2a8 = 0;
      local_2c4 = local_2d4;
      Projection::Projection(local_2a4);
      local_250 = ZEXT416(_LC74);
      local_254 = 0;
      local_264 = 0;
      local_25c = 0;
      local_252 = 0;
      local_230 = 0x3f800000;
      local_22c = 0;
      local_224 = 0;
      local_220 = 1;
      local_21c = 0;
      local_214 = 0;
      local_210 = 0;
      local_208 = 0;
      local_240 = local_250;
      Projection::Projection(local_204);
      Projection::Projection(local_1c4);
      local_184 = ZEXT416(_LC74);
      local_164 = 0x3f800000;
      local_160 = 0;
      local_158 = 0;
      local_174 = local_184;
      Projection::Projection(local_154);
      local_114 = 0;
      Projection::Projection(local_10c);
      Projection::Projection(local_cc);
      local_8c = (undefined1[16])0x0;
      local_7c = 0;
      local_78 = 0;
      local_68 = 0;
      local_60 = 0;
      local_50 = 0;
      local_70 = 1;
      local_6c = 0xbf800000;
      Object::Object((Object*)local_6e8);
      local_6e8[0] = RendererSceneRender::is_environment;
      local_4d4 = 0;
      local_528 = (undefined1[16])0x0;
      local_518 = (undefined1[16])0x0;
      local_508 = (undefined1[16])0x0;
      local_478 = (undefined1[16])0x0;
      local_570 = 0;
      local_558 = 0;
      local_550 = 0;
      local_548 = 0;
      local_540 = 0;
      local_538 = 0;
      local_530 = 0;
      local_4f8 = 0;
      local_4f0 = 0;
      local_4e8 = 0;
      local_4e0 = 0;
      local_4d8 = 0;
      local_4d0 = 0;
      local_4c8 = 0;
      local_4c4 = 0;
      local_4bc = 0;
      local_4b0 = 0;
      local_4a8 = 0;
      local_4a0 = 0;
      local_498 = 0;
      local_490 = 0;
      local_488 = 0;
      local_480 = 0;
      local_468 = 0;
      local_460 = 0;
      local_458 = 0;
      local_748 = __LC138;
      uStack_740 = _UNK_0012a0f8;
      local_7a0 = _LC81;
      local_568 = (Object*)&local_448;
      local_560 = param_1;
      local_798._0_8_ = Vector2::operator_cast_to_Vector2i((Vector2*)&local_7a0);
      uVar12 = 0;
      _setup_environment(this, (RenderDataRD*)local_6e8, true, (Vector2i*)local_798, (Color*)&local_748, false, false, 0);
      _fill_render_list(this, 2, (Object*)local_6e8, 4, 0);
      RenderList::sort_by_key((RenderList*)( this + 0x2f38 ));
      _fill_instance_data(this, 2, 0, 0xffffffff, 1);
      lVar6 = RendererRD::MaterialStorage::get_singleton();
      uVar5 = _setup_render_pass_uniform_set(this, 2, 0, 0, lVar6 + 8, 0, uVar12 & 0xffffffff00000000);
      plVar1 = RenderingServerGlobals::utilities;
      if ((char)RenderingServerGlobals::utilities[1] != '\0') {
         pcVar2 = *(code**)( *RenderingServerGlobals::utilities + 0x68 );
         local_7b8 = "Render 3D Material";
         local_7c0 = 0;
         local_7b0[0] = 0x12;
         String::parse_latin1((StrRange*)&local_7c0);
         ( *pcVar2 )(plVar1);
         lVar6 = local_7c0;
         if (local_7c0 != 0) {
            LOCK();
            plVar1 = (long*)( local_7c0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_7c0 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }

      local_738 = *(uint*)( this + 0x2f38 );
      local_714 = *(undefined8*)( this + 0x2bc0 );
      uStack_70c = *(undefined8*)( this + 0x2bc8 );
      lVar6 = 0;
      local_748 = *(undefined8*)( this + 0x2f40 );
      lVar9 = 0;
      uStack_740 = *(undefined8*)( this + 0x2f50 );
      local_734 = 1;
      local_730 = _LC281;
      local_6f8 = 0;
      local_6ec = 0;
      local_720 = 0;
      local_71c = 0;
      local_704 = 0;
      local_6f0 = 0;
      local_7b0[0] = 0;
      local_798 = (undefined1[16])0x0;
      local_788 = (undefined1[16])0x0;
      local_778 = (undefined1[16])0x0;
      local_768 = (undefined1[16])0x0;
      local_758 = (undefined1[16])0x0;
      local_728 = uVar5;
      iVar4 = CowData<Color>::resize<false>((CowData<Color>*)local_7b0, 5);
      if (iVar4 == 0) {
         do {
            if (local_7b0[0] == 0) {
               lVar7 = 0;
               LAB_0011bd2b:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar9, lVar7, "p_index", "size()", "", false, false);
            }
 else {
               lVar7 = *(long*)( local_7b0[0] + -8 );
               if (lVar7 <= lVar9) goto LAB_0011bd2b;
               CowData<Color>::_copy_on_write((CowData<Color>*)local_7b0);
               uVar5 = *(undefined8*)( local_798 + lVar6 + 8 );
               *(undefined8*)( local_7b0[0] + lVar6 ) = *(undefined8*)( (Vector2i*)local_798 + lVar6 );
               ( (undefined8*)( local_7b0[0] + lVar6 ) )[1] = uVar5;
            }

            lVar9 = lVar9 + 1;
            lVar6 = lVar6 + 0x10;
         }
 while ( lVar9 != 5 );
      }

      uVar5 = RenderingDevice::get_singleton();
      local_798 = Rect2i::operator_cast_to_Rect2(param_4);
      lVar6 = RenderingDevice::draw_list_begin(0, uVar5, param_3, 0x500ff, &local_7b8, 0, (Vector2i*)local_798);
      if ((_render_uv2(PagedArray<RenderGeometryInstance*> const &, RID, Rect2i_const &))&&( iVar4 = __cxa_guard_acquire(&_render_uv2(PagedArray<RenderGeometryInstance*> & RID, Rect2i_const & ::uv_offsets), iVar4 != 0) ) = 0;_render_uv2(PagedArray<RenderGeometryInstance*> & RID, Rect2i_const &), {
            LOCK();
            plVar1 = (long*)( local_7b0[0] + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_7b0[0] = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }
, RenderingDevice::get_singleton() ;;
      RenderingDevice::draw_command_end_label();
      RenderDataRD::~RenderDataRD((RenderDataRD*)local_6e8);
      local_448 = (undefined**)Vector2::operator_cast_to_Vector2i;
      Projection::~Projection(local_cc);
      Projection::~Projection(local_10c);
      Projection::~Projection(local_154);
      Projection::~Projection(local_1c4);
      Projection::~Projection(local_204);
      Projection::~Projection(local_2a4);
      local_448 = &PTR__initialize_classv_00129358;
      Object::~Object((Object*)&local_448);
      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::free(RID) */
   void RendererSceneRenderImplementation::RenderForwardMobile::free(void) {
      RendererSceneRenderRD::free();
      return;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::update() */
   void RendererSceneRenderImplementation::RenderForwardMobile::update(RenderForwardMobile *this) {
      uint uVar1;
      RendererSceneRenderRD::update();
      _update_global_pipeline_data_requirements_from_project(this);
      RendererRD::LightStorage::get_singleton();
      uVar1 = RendererRD::LightStorage::get_shadow_cubemaps_used();
      this[0x30cd] = ( RenderForwardMobile )((byte)this[0x30cd] & 0xf7 | ( byte )(( uVar1 & 1 ) << 3));
      uVar1 = RendererRD::LightStorage::get_shadow_dual_paraboloid_used();
      this[0x30cd] = ( RenderForwardMobile )((byte)this[0x30cd] & 0xef | ( byte )(( uVar1 & 1 ) << 4));
      return;
   }

   /* DefaultAllocator::alloc(unsigned long) */
   void DefaultAllocator::alloc(ulong param_1) {
      Memory::alloc_static(param_1, false);
      return;
   }

   /* StringName::~StringName() */
   void StringName::~StringName(StringName *this) {
      if (( configured != '\0' ) && ( *(long*)this != 0 )) {
         StringName::unref();
         return;
      }

      return;
   }

   /* Object::get_save_class() const */
   void Object::get_save_class(void) {
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

   /* RefCounted::is_class_ptr(void*) const */
   uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
      return (uint)CONCAT71(0x129d, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x129d, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
   }

   /* RefCounted::_getv(StringName const&, Variant&) const */
   undefined8 RefCounted::_getv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* RefCounted::_setv(StringName const&, Variant const&) */
   undefined8 RefCounted::_setv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* RefCounted::_validate_propertyv(PropertyInfo&) const */
   void RefCounted::_validate_propertyv(PropertyInfo *param_1) {
      return;
   }

   /* RefCounted::_property_can_revertv(StringName const&) const */
   undefined8 RefCounted::_property_can_revertv(StringName *param_1) {
      return 0;
   }

   /* RefCounted::_property_get_revertv(StringName const&, Variant&) const */
   undefined8 RefCounted::_property_get_revertv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* RefCounted::_notificationv(int, bool) */
   void RefCounted::_notificationv(int param_1, bool param_2) {
      return;
   }

   /* WorkerThreadPool::BaseTemplateUserdata::callback_indexed(unsigned int) */
   void WorkerThreadPool::BaseTemplateUserdata::callback_indexed(uint param_1) {
      return;
   }

   /* RenderSceneData::is_class_ptr(void*) const */
   uint RenderSceneData::is_class_ptr(RenderSceneData *this, void *param_1) {
      return (uint)CONCAT71(0x129d, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x129c, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
   }

   /* RenderSceneData::_getv(StringName const&, Variant&) const */
   undefined8 RenderSceneData::_getv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* RenderSceneData::_setv(StringName const&, Variant const&) */
   undefined8 RenderSceneData::_setv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* RenderSceneData::_validate_propertyv(PropertyInfo&) const */
   void RenderSceneData::_validate_propertyv(PropertyInfo *param_1) {
      return;
   }

   /* RenderSceneData::_property_can_revertv(StringName const&) const */
   undefined8 RenderSceneData::_property_can_revertv(StringName *param_1) {
      return 0;
   }

   /* RenderSceneData::_property_get_revertv(StringName const&, Variant&) const */
   undefined8 RenderSceneData::_property_get_revertv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* RenderSceneData::_notificationv(int, bool) */
   void RenderSceneData::_notificationv(int param_1, bool param_2) {
      return;
   }

   /* RenderData::is_class_ptr(void*) const */
   uint RenderData::is_class_ptr(RenderData *this, void *param_1) {
      return (uint)CONCAT71(0x129d, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x129c, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
   }

   /* RenderData::_getv(StringName const&, Variant&) const */
   undefined8 RenderData::_getv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* RenderData::_setv(StringName const&, Variant const&) */
   undefined8 RenderData::_setv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* RenderData::_validate_propertyv(PropertyInfo&) const */
   void RenderData::_validate_propertyv(PropertyInfo *param_1) {
      return;
   }

   /* RenderData::_property_can_revertv(StringName const&) const */
   undefined8 RenderData::_property_can_revertv(StringName *param_1) {
      return 0;
   }

   /* RenderData::_property_get_revertv(StringName const&, Variant&) const */
   undefined8 RenderData::_property_get_revertv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* RenderData::_notificationv(int, bool) */
   void RenderData::_notificationv(int param_1, bool param_2) {
      return;
   }

   /* RendererSceneRenderRD::setup_added_reflection_probe(Transform3D const&, Vector3 const&) */
   void RendererSceneRenderRD::setup_added_reflection_probe(Transform3D *param_1, Vector3 *param_2) {
      return;
   }

   /* RendererSceneRenderRD::setup_added_light(RenderingServer::LightType, Transform3D const&, float,
   float) */
   void RendererSceneRenderRD::setup_added_light(void) {
      return;
   }

   /* RendererSceneRenderRD::setup_added_decal(Transform3D const&, Vector3 const&) */
   void RendererSceneRenderRD::setup_added_decal(Transform3D *param_1, Vector3 *param_2) {
      return;
   }

   /* RendererSceneRenderRD::voxel_gi_set_quality(RenderingServer::VoxelGIQuality) */
   void RendererSceneRenderRD::voxel_gi_set_quality(RendererSceneRenderRD *this, undefined4 param_2) {
      *(undefined4*)( this + 0x21a0 ) = param_2;
      return;
   }

   /* RendererSceneRenderRD::set_scene_pass(unsigned long) */
   void RendererSceneRenderRD::set_scene_pass(RendererSceneRenderRD *this, ulong param_1) {
      *(ulong*)( this + 0x2498 ) = param_1;
      return;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::is_class_ptr(void*)
   const */
   uint RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::is_class_ptr(RenderBufferDataForwardMobile *this, void *param_1) {
      return (uint)CONCAT71(0x129d, (undefined4*)param_1 == &RenderBufferCustomDataRD::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x129c, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x129d, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x129d, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::_getv(StringName
   const&, Variant&) const */
   undefined8 RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::_getv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::_setv(StringName
   const&, Variant const&) */
   undefined8 RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::_setv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::_validate_propertyv(PropertyInfo&)
   const */
   void RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::_validate_propertyv(PropertyInfo *param_1) {
      return;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::_property_can_revertv(StringName
   const&) const */
   undefined8 RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::_property_can_revertv(StringName *param_1) {
      return 0;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::_property_get_revertv(StringName
   const&, Variant&) const */
   undefined8 RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::_property_get_revertv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::_notificationv(int,
   bool) */
   void RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::_notificationv(int param_1, bool param_2) {
      return;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::environment_set_ssao_quality(RenderingServer::EnvironmentSSAOQuality,
   bool, float, int, float, float) */
   void RendererSceneRenderImplementation::RenderForwardMobile::environment_set_ssao_quality(void) {
      return;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::environment_set_ssil_quality(RenderingServer::EnvironmentSSILQuality,
   bool, float, int, float, float) */
   void RendererSceneRenderImplementation::RenderForwardMobile::environment_set_ssil_quality(void) {
      return;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::environment_set_ssr_roughness_quality(RenderingServer::EnvironmentSSRRoughnessQuality)
    */
   void RendererSceneRenderImplementation::RenderForwardMobile::environment_set_ssr_roughness_quality(void) {
      return;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::sub_surface_scattering_set_quality(RenderingServer::SubSurfaceScatteringQuality)
    */
   void RendererSceneRenderImplementation::RenderForwardMobile::sub_surface_scattering_set_quality(void) {
      return;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::sub_surface_scattering_set_scale(float,
   float) */
   void RendererSceneRenderImplementation::RenderForwardMobile::sub_surface_scattering_set_scale(float param_1, float param_2) {
      return;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::pair_voxel_gi_instances(RID
   const*, unsigned int) */
   void RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::pair_voxel_gi_instances(RID *param_1, uint param_2) {
      return;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::ForwardIDStorageMobile::uses_forward_ids()
   const */
   undefined8 RendererSceneRenderImplementation::RenderForwardMobile::ForwardIDStorageMobile::uses_forward_ids(void) {
      return 1;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::sdfgi_update(Ref<RenderSceneBuffers>
   const&, RID, Vector3 const&) */
   void RendererSceneRenderImplementation::RenderForwardMobile::sdfgi_update(void) {
      return;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::sdfgi_get_pending_region_count(Ref<RenderSceneBuffers>
   const&) const */
   undefined8 RendererSceneRenderImplementation::RenderForwardMobile::sdfgi_get_pending_region_count(Ref *param_1) {
      return 0;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::sdfgi_get_pending_region_bounds(Ref<RenderSceneBuffers>
   const&, int) const */
   Ref *RendererSceneRenderImplementation::RenderForwardMobile::sdfgi_get_pending_region_bounds(Ref *param_1, int param_2) {
      *(undefined8*)param_1 = 0;
      *(undefined4*)( param_1 + 8 ) = 0;
      *(undefined8*)( param_1 + 0xc ) = 0;
      *(undefined4*)( param_1 + 0x14 ) = 0;
      return param_1;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::sdfgi_get_pending_region_cascade(Ref<RenderSceneBuffers>
   const&, int) const */
   undefined8 RendererSceneRenderImplementation::RenderForwardMobile::sdfgi_get_pending_region_cascade(Ref *param_1, int param_2) {
      return 0;
   }

   /* Vector<unsigned int>::~Vector() */
   void Vector<unsigned_int>::~Vector(Vector<unsigned_int> *this) {
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

   /* Vector<RenderingDevice::FramebufferPass>::~Vector() */
   void Vector<RenderingDevice::FramebufferPass>::~Vector(Vector<RenderingDevice::FramebufferPass> *this) {
      CowData<RenderingDevice::FramebufferPass>::_unref((CowData<RenderingDevice::FramebufferPass>*)( this + 8 ));
      return;
   }

   /* Vector<RenderingDevice::AttachmentFormat>::~Vector() */
   void Vector<RenderingDevice::AttachmentFormat>::~Vector(Vector<RenderingDevice::AttachmentFormat> *this) {
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

   /* LocalVector<RenderingDevice::AttachmentFormat, unsigned int, false, false>::~LocalVector() */
   void LocalVector<RenderingDevice::AttachmentFormat,unsigned_int,false,false>::~LocalVector(LocalVector<RenderingDevice::AttachmentFormat,unsigned_int,false,false> *this) {
      if (*(void**)( this + 8 ) != (void*)0x0) {
         if (*(int*)this != 0) {
            *(undefined4*)this = 0;
         }

         Memory::free_static(*(void**)( this + 8 ), false);
         return;
      }

      return;
   }

   /* WorkerThreadPool::TaskUserData<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,
   void 
   (RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey),
   RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>::~TaskUserData()
    */
   void WorkerThreadPool::TaskUserData<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey),RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>::~TaskUserData(TaskUserData<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey),RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey> *this) {
      return;
   }

   /* WorkerThreadPool::TaskUserData<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,
   void 
   (RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey),
   RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>::callback()
    */
   void WorkerThreadPool::TaskUserData<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey),RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>::callback(TaskUserData<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey),RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey> *this) {
      code *pcVar1;
      pcVar1 = *(code**)( this + 0x10 );
      if (( (ulong)pcVar1 & 1 ) != 0) {
         pcVar1 = *(code**)( pcVar1 + *(long*)( *(long*)( this + 0x18 ) + *(long*)( this + 8 ) ) + -1 );
      }

      ( *pcVar1 )();
      return;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::pair_decal_instances(RID
   const*, unsigned int) [clone .cold] */
   void RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::pair_decal_instances(GeometryInstanceForwardMobile *this, RID *param_1, uint param_2) {
      code *pcVar1;
      if (param_2 + 0x80000000 < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::pair_light_instances(RID
   const*, unsigned int) [clone .cold] */
   void RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::pair_light_instances(RID *param_1, uint param_2) {
      code *pcVar1;
      int in_EAX;
      if (in_EAX + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* CowData<unsigned int>::_copy_on_write() [clone .isra.0] [clone .cold] */
   void CowData<unsigned_int>::_copy_on_write(void) {
      code *pcVar1;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* CowData<RenderingDevice::AttachmentFormat>::_copy_on_write() [clone .isra.0] [clone .cold] */
   void CowData<RenderingDevice::AttachmentFormat>::_copy_on_write(void) {
      code *pcVar1;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* CowData<Pair<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData*,
   RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>
   >::_copy_on_write() [clone .isra.0] [clone .cold] */
   void CowData<Pair<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData*,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>>::_copy_on_write(void) {
      code *pcVar1;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::_geometry_instance_dependency_changed(Dependency::DependencyChangedNotification,
   DependencyTracker*) [clone .cold] */
   void RendererSceneRenderImplementation::RenderForwardMobile::_geometry_instance_dependency_changed(undefined8 param_1, undefined8 param_2, int param_3) {
      code *pcVar1;
      if (param_3 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */
   void CowData<int>::_copy_on_write(void) {
      code *pcVar1;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* CowData<Color>::_copy_on_write() [clone .isra.0] [clone .cold] */
   void CowData<Color>::_copy_on_write(void) {
      code *pcVar1;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* CowData<RID>::_copy_on_write() [clone .isra.0] [clone .cold] */
   void CowData<RID>::_copy_on_write(void) {
      code *pcVar1;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::_setup_lightmaps(RenderDataRD const*,
   PagedArray<RID> const&, Transform3D const&) [clone .cold] */
   void RendererSceneRenderImplementation::RenderForwardMobile::_setup_lightmaps(RenderDataRD *param_1, PagedArray *param_2, Transform3D *param_3) {
      code *pcVar1;
      int in_stack_00000020;
      if (in_stack_00000020 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::_geometry_instance_add_surface_with_material(RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile*,
   unsigned int, RendererSceneRenderImplementation::SceneShaderForwardMobile::MaterialData*,
   unsigned int, unsigned int, RID) [clone .cold] */
   void RendererSceneRenderImplementation::RenderForwardMobile::_geometry_instance_add_surface_with_material(void) {
      code *pcVar1;
      long unaff_RBX;
      long in_R8;
      uint unaff_R12D;
      _err_print_index_error("mesh_get_surface", "./servers/rendering/renderer_rd/storage_rd/mesh_storage.h", 0x1a7, (ulong)unaff_R12D, in_R8, "p_surface_index", "mesh->surface_count", "", false, false);
      *(undefined8*)( unaff_RBX + 0x20 ) = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::_geometry_instance_add_surface_with_material_chain(RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile*,
   unsigned int, RendererSceneRenderImplementation::SceneShaderForwardMobile::MaterialData*, RID,
   RID) [clone .cold] */
   void RendererSceneRenderImplementation::RenderForwardMobile::_geometry_instance_add_surface_with_material_chain(undefined8 param_1, undefined8 param_2, int param_3, undefined8 param_4) {
      code *pcVar1;
      if (param_3 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, param_4);
      }

      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* CowData<RenderingDevice::Uniform>::_copy_on_write() [clone .isra.0] [clone .cold] */
   void CowData<RenderingDevice::Uniform>::_copy_on_write(void) {
      code *pcVar1;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* CowData<RenderingDevice::FramebufferPass>::_copy_on_write() [clone .isra.0] [clone .cold] */
   void CowData<RenderingDevice::FramebufferPass>::_copy_on_write(void) {
      code *pcVar1;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::_setup_render_pass_uniform_set(RendererSceneRenderImplementation::RenderForwardMobile::RenderListType,
   RenderDataRD const*, RID, RendererRD::MaterialStorage::Samplers const&, bool, int) [clone .cold]
    */
   void RendererSceneRenderImplementation::RenderForwardMobile::_setup_render_pass_uniform_set(undefined8 param_1, undefined8 param_2) {
      FUN_001088b0(param_1, param_2, 0);
      return;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::_geometry_instance_update(RenderGeometryInstance*)
   [clone .cold] */
   void RendererSceneRenderImplementation::RenderForwardMobile::_geometry_instance_update(RenderGeometryInstance *param_1) {
      code *pcVar1;
      int in_EDX;
      if (in_EDX + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, param_1);
      }

      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::_render_shadow_pass(RID, RID, int,
   PagedArray<RenderGeometryInstance*> const&, float, float, bool, bool, bool,
   RenderingMethod::RenderInfo*, Transform3D const&) [clone .cold] */
   void RendererSceneRenderImplementation::RenderForwardMobile::_render_shadow_pass(void) {
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

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   void FUN_0011dfce(void) {
      code *pcVar1;
      undefined8 unaff_R14;
      undefined8 unaff_R15;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      _DAT_00000450 = unaff_R14;
      _DAT_00000458 = unaff_R15;
      ( *pcVar1 )();
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::_pre_opaque_render(RenderDataRD*) [clone
   .cold] */
   void RendererSceneRenderImplementation::RenderForwardMobile::_pre_opaque_render(RenderDataRD *param_1) {
      code *pcVar1;
      int in_EAX;
      if (in_EAX + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::_render_scene(RenderDataRD*, Color
   const&) [clone .cold] */
   void RendererSceneRenderImplementation::RenderForwardMobile::_render_scene(RenderDataRD *param_1, Color *param_2) {
      undefined1 uStack0000000000000080;
      uStack0000000000000080 = 0;
      FUN_00119fc7();
      return;
   }

   /* WorkerThreadPool::TaskUserData<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,
   void 
   (RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey),
   RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>::~TaskUserData()
    */
   void WorkerThreadPool::TaskUserData<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey),RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>::~TaskUserData(TaskUserData<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey),RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey> *this) {
      operator_delete(this, 0x58);
      return;
   }

   /* RefCounted::~RefCounted() */
   void RefCounted::~RefCounted(RefCounted *this) {
      *(undefined***)this = &PTR__initialize_classv_001291f8;
      Object::~Object((Object*)this);
      return;
   }

   /* RefCounted::~RefCounted() */
   void RefCounted::~RefCounted(RefCounted *this) {
      *(undefined***)this = &PTR__initialize_classv_001291f8;
      Object::~Object((Object*)this);
      operator_delete(this, 0x180);
      return;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::~RenderBufferDataForwardMobile()
    */
   void RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::~RenderBufferDataForwardMobile(RenderBufferDataForwardMobile *this) {
      *(undefined***)this = &PTR__initialize_classv_001291f8;
      Object::~Object((Object*)this);
      return;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::~RenderBufferDataForwardMobile()
    */
   void RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::~RenderBufferDataForwardMobile(RenderBufferDataForwardMobile *this) {
      *(undefined***)this = &PTR__initialize_classv_001291f8;
      Object::~Object((Object*)this);
      operator_delete(this, 0x188);
      return;
   }

   /* RendererRD::LightStorage::light_get_type(RID) const */
   undefined4 RendererRD::LightStorage::light_get_type(LightStorage *this, ulong param_2) {
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

      _err_print_error("light_get_type", "./servers/rendering/renderer_rd/storage_rd/light_storage.h", 0x1ff, "Parameter \"light\" is null.", 0, 0);
      return 0;
   }

   /* RendererRD::LightStorage::light_get_param(RID, RenderingServer::LightParam) */
   undefined4 RendererRD::LightStorage::light_get_param(LightStorage *this, ulong param_2, int param_3) {
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

      _err_print_error("light_get_param", "./servers/rendering/renderer_rd/storage_rd/light_storage.h", 0x207, "Parameter \"light\" is null.", 0, 0);
      return 0;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::create_forward_id_storage() */
   ForwardIDStorage *RendererSceneRenderImplementation::RenderForwardMobile::create_forward_id_storage(RenderForwardMobile *this);
   {
      ForwardIDStorage *this_00;
      ForwardIDStorage *pFVar1;
      ForwardIDStorage *pFVar2;
      this_00 = (ForwardIDStorage*)operator_new(200, "");
      RendererRD::ForwardIDStorage::ForwardIDStorage(this_00);
      *(undefined***)this_00 = &PTR__ForwardIDStorageMobile_00129668;
      pFVar1 = this_00 + 8;
      do {
         *(undefined8*)pFVar1 = 0;
         pFVar2 = pFVar1 + 0x30;
         for (int i = 0; i < 5; i++) {
            *(undefined8*)( pFVar1 + ( 8 * i + 8 ) ) = 0;
         }

         pFVar1 = pFVar2;
      }
 while ( pFVar2 != this_00 + 200 );
      *(ForwardIDStorage**)( this + 0x2f58 ) = this_00;
      return this_00;
   }

   /* RefCounted::_get_class_namev() const */
   undefined8 *RefCounted::_get_class_namev(void) {
      int iVar1;
      if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
         _get_class_namev();
         __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
         __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
      }

      if (_get_class_namev()::_class_name_static != 0) {
         if (*(long*)( _get_class_namev() ) != 0) {
            LAB_0011e783:return &_get_class_namev();
         }

         if (*(long*)( _get_class_namev() ) != 0) {
            if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0011e783;
            StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
            goto LAB_0011e7ee;
         }

      }

      StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
      LAB_0011e7ee:return &_get_class_namev();
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::~GeometryInstanceForwardMobile()
    */
   void RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::~GeometryInstanceForwardMobile(GeometryInstanceForwardMobile *this) {
      long *plVar1;
      long lVar2;
      long lVar3;
      *(undefined***)this = &PTR__GeometryInstanceForwardMobile_00129ac0;
      plVar1 = *(long**)( this + 0x188 );
      if (plVar1 != (long*)0x0) {
         lVar2 = *(long*)( this + 0x198 );
         if (lVar2 != 0) {
            *(undefined8*)( lVar2 + 0x18 ) = *(undefined8*)( this + 0x1a0 );
         }

         lVar3 = *(long*)( this + 0x1a0 );
         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }

         if (this + 0x188 == (GeometryInstanceForwardMobile*)*plVar1) {
            *plVar1 = *(long*)( this + 0x198 );
         }

         if (this + 0x188 == (GeometryInstanceForwardMobile*)plVar1[1]) {
            plVar1[1] = lVar3;
            return;
         }

      }

      return;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::~GeometryInstanceForwardMobile()
    */
   void RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::~GeometryInstanceForwardMobile(GeometryInstanceForwardMobile *this) {
      long *plVar1;
      long lVar2;
      long lVar3;
      *(undefined***)this = &PTR__GeometryInstanceForwardMobile_00129ac0;
      plVar1 = *(long**)( this + 0x188 );
      if (plVar1 != (long*)0x0) {
         lVar2 = *(long*)( this + 0x198 );
         if (lVar2 != 0) {
            *(undefined8*)( lVar2 + 0x18 ) = *(undefined8*)( this + 0x1a0 );
         }

         lVar3 = *(long*)( this + 0x1a0 );
         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }

         if (this + 0x188 == (GeometryInstanceForwardMobile*)*plVar1) {
            *plVar1 = *(long*)( this + 0x198 );
         }

         if (this + 0x188 == (GeometryInstanceForwardMobile*)plVar1[1]) {
            plVar1[1] = lVar3;
            operator_delete(this, 0x1a8);
            return;
         }

      }

      operator_delete(this, 0x1a8);
      return;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::_get_class_namev()
   const */
   undefined8 *RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::_get_class_namev(void) {
      int iVar1;
      if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
         _get_class_namev();
         __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
         __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
      }

      if (_get_class_namev()::_class_name_static != 0) {
         if (*(long*)( _get_class_namev() ) != 0) {
            LAB_0011e973:return &_get_class_namev();
         }

         if (*(long*)( _get_class_namev() ) != 0) {
            if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0011e973;
            StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RenderBufferDataForwardMobile");
            goto LAB_0011e9de;
         }

      }

      StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RenderBufferDataForwardMobile");
      LAB_0011e9de:return &_get_class_namev();
   }

   /* RenderSceneData::_get_class_namev() const */
   undefined8 *RenderSceneData::_get_class_namev(void) {
      int iVar1;
      if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
         _get_class_namev();
         __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
         __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
      }

      if (_get_class_namev()::_class_name_static != 0) {
         if (*(long*)( _get_class_namev() ) != 0) {
            LAB_0011ea63:return &_get_class_namev();
         }

         if (*(long*)( _get_class_namev() ) != 0) {
            if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0011ea63;
            StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RenderSceneData");
            goto LAB_0011eace;
         }

      }

      StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RenderSceneData");
      LAB_0011eace:return &_get_class_namev();
   }

   /* RenderData::_get_class_namev() const */
   undefined8 *RenderData::_get_class_namev(void) {
      int iVar1;
      if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
         _get_class_namev();
         __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
         __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
      }

      if (_get_class_namev()::_class_name_static != 0) {
         if (*(long*)( _get_class_namev() ) != 0) {
            LAB_0011eb43:return &_get_class_namev();
         }

         if (*(long*)( _get_class_namev() ) != 0) {
            if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0011eb43;
            StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RenderData");
            goto LAB_0011ebae;
         }

      }

      StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RenderData");
      LAB_0011ebae:return &_get_class_namev();
   }

   /* SortArray<RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceSurfaceDataCache*,
   RendererSceneRenderImplementation::RenderForwardMobile::RenderList::SortByReverseDepthAndPriority,
   true>::introsort(long, long,
   RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceSurfaceDataCache**, long)
   const [clone .isra.0] */
   void SortArray<RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceSurfaceDataCache*,RendererSceneRenderImplementation::RenderForwardMobile::RenderList::SortByReverseDepthAndPriority,true>::introsort(long param_1, long param_2, GeometryInstanceSurfaceDataCache **param_3, long param_4) {
      float *pfVar1;
      GeometryInstanceSurfaceDataCache GVar2;
      GeometryInstanceSurfaceDataCache GVar3;
      GeometryInstanceSurfaceDataCache *pGVar4;
      GeometryInstanceSurfaceDataCache *pGVar5;
      GeometryInstanceSurfaceDataCache GVar6;
      long lVar7;
      long lVar8;
      GeometryInstanceSurfaceDataCache GVar9;
      GeometryInstanceSurfaceDataCache **ppGVar10;
      long lVar11;
      GeometryInstanceSurfaceDataCache **ppGVar12;
      long lVar13;
      GeometryInstanceSurfaceDataCache *pGVar14;
      GeometryInstanceSurfaceDataCache **ppGVar15;
      long lVar16;
      long lVar17;
      GeometryInstanceSurfaceDataCache *pGVar18;
      bool bVar19;
      long local_58;
      lVar17 = param_2 - param_1;
      if (lVar17 < 0x11) {
         return;
      }

      if (param_4 == 0) {
         LAB_0011eeeb:lVar13 = lVar17 + -2 >> 1;
         lVar16 = lVar13 * 2 + 2;
         ppGVar10 = param_3 + param_1 + lVar13;
         pGVar14 = *ppGVar10;
         lVar7 = lVar13;
         lVar8 = lVar16;
         ppGVar12 = ppGVar10;
         if (lVar17 <= lVar16) goto LAB_0011f05d;
         LAB_0011ef45:do {
            ppGVar15 = param_3 + param_1 + lVar16;
            pGVar4 = *ppGVar15;
            pGVar5 = param_3[param_1 + lVar16 + -1];
            bVar19 = (byte)pGVar4[0xf] < (byte)pGVar5[0xf];
            if (pGVar4[0xf] == pGVar5[0xf]) {
               bVar19 = *(float*)( *(long*)( pGVar5 + 0x60 ) + 0x10 ) <= *(float*)( *(long*)( pGVar4 + 0x60 ) + 0x10 ) && *(float*)( *(long*)( pGVar4 + 0x60 ) + 0x10 ) != *(float*)( *(long*)( pGVar5 + 0x60 ) + 0x10 );
            }

            if (bVar19) {
               param_3[lVar7 + param_1] = pGVar5;
               lVar7 = lVar16 + -1;
               ppGVar15 = param_3 + param_1 + lVar16 + -1;
               lVar11 = lVar16;
            }
 else {
               lVar11 = lVar16 + 1;
               param_3[lVar7 + param_1] = pGVar4;
               lVar7 = lVar16;
            }

            lVar16 = lVar11 * 2;
         }
 while ( lVar16 < lVar17 );
         ppGVar10 = ppGVar15;
         if (lVar16 == lVar17) goto LAB_0011f063;
         do {
            lVar11 = lVar7 + -1;
            ppGVar10 = ppGVar15;
            lVar16 = lVar8;
            if (lVar7 <= lVar13) goto LAB_0011f1ed;
            GVar2 = pGVar14[0xf];
            do {
               lVar8 = lVar11 >> 1;
               pGVar4 = param_3[param_1 + lVar8];
               bVar19 = (byte)pGVar4[0xf] < (byte)GVar2;
               if (pGVar4[0xf] == GVar2) {
                  bVar19 = *(float*)( *(long*)( pGVar14 + 0x60 ) + 0x10 ) <= *(float*)( *(long*)( pGVar4 + 0x60 ) + 0x10 ) && *(float*)( *(long*)( pGVar4 + 0x60 ) + 0x10 ) != *(float*)( *(long*)( pGVar14 + 0x60 ) + 0x10 );
               }

               if (!bVar19) {
                  param_3[lVar7 + param_1] = pGVar14;
                  goto joined_r0x0011f03d;
               }

               param_3[lVar7 + param_1] = pGVar4;
               lVar11 = ( lVar8 + -1 ) - ( lVar8 + -1 >> 0x3f );
               lVar7 = lVar8;
            }
 while ( lVar13 < lVar8 );
            param_3[param_1 + lVar8] = pGVar14;
            joined_r0x0011f03d:if (lVar13 == 0) {
               ppGVar10 = param_3 + param_1;
               lVar17 = ( param_2 + -1 ) - param_1;
               goto LAB_0011f0a0;
            }

            while (true) {
               ppGVar10 = ppGVar12 + -1;
               lVar16 = lVar16 + -2;
               lVar13 = lVar13 + -1;
               pGVar14 = *ppGVar10;
               lVar7 = lVar13;
               lVar8 = lVar16;
               ppGVar12 = ppGVar10;
               if (lVar16 < lVar17) goto LAB_0011ef45;
               LAB_0011f05d:ppGVar12 = ppGVar10;
               lVar8 = lVar16;
               if (lVar16 == lVar17) break;
               LAB_0011f1ed:*ppGVar10 = pGVar14;
            }
;
            ;;
            LAB_0011f063:lVar7 = lVar16 + -1;
            ppGVar15 = param_3 + param_1 + lVar7;
            *ppGVar10 = *ppGVar15;
         }
 while ( true );
      }

      lVar7 = param_2;
      local_58 = param_4;
      LAB_0011ec44:local_58 = local_58 + -1;
      pGVar14 = param_3[( lVar17 >> 1 ) + param_1];
      pGVar4 = param_3[param_1];
      GVar2 = pGVar14[0xf];
      GVar9 = pGVar4[0xf];
      bVar19 = (byte)GVar9 < (byte)GVar2;
      if (GVar9 == GVar2) {
         bVar19 = *(float*)( *(long*)( pGVar14 + 0x60 ) + 0x10 ) <= *(float*)( *(long*)( pGVar4 + 0x60 ) + 0x10 ) && *(float*)( *(long*)( pGVar4 + 0x60 ) + 0x10 ) != *(float*)( *(long*)( pGVar14 + 0x60 ) + 0x10 );
      }

      pGVar5 = param_3[lVar7 + -1];
      GVar3 = pGVar5[0xf];
      if (bVar19) {
         bVar19 = (byte)GVar2 < (byte)GVar3;
         if (GVar2 == GVar3) {
            bVar19 = *(float*)( *(long*)( pGVar5 + 0x60 ) + 0x10 ) <= *(float*)( *(long*)( pGVar14 + 0x60 ) + 0x10 ) && *(float*)( *(long*)( pGVar14 + 0x60 ) + 0x10 ) != *(float*)( *(long*)( pGVar5 + 0x60 ) + 0x10 );
         }

         pGVar18 = pGVar14;
         GVar6 = GVar2;
         if (!bVar19) {
            bVar19 = (byte)GVar9 < (byte)GVar3;
            if (GVar9 == GVar3) {
               bVar19 = *(float*)( *(long*)( pGVar5 + 0x60 ) + 0x10 ) <= *(float*)( *(long*)( pGVar4 + 0x60 ) + 0x10 ) && *(float*)( *(long*)( pGVar4 + 0x60 ) + 0x10 ) != *(float*)( *(long*)( pGVar5 + 0x60 ) + 0x10 );
            }

            pGVar18 = pGVar5;
            GVar6 = GVar3;
            if (!bVar19) {
               pGVar18 = pGVar4;
               GVar6 = GVar9;
            }

         }

      }
 else {
         bVar19 = (byte)GVar9 < (byte)GVar3;
         if (GVar9 == GVar3) {
            bVar19 = *(float*)( *(long*)( pGVar5 + 0x60 ) + 0x10 ) <= *(float*)( *(long*)( pGVar4 + 0x60 ) + 0x10 ) && *(float*)( *(long*)( pGVar4 + 0x60 ) + 0x10 ) != *(float*)( *(long*)( pGVar5 + 0x60 ) + 0x10 );
         }

         pGVar18 = pGVar4;
         GVar6 = GVar9;
         if (!bVar19) {
            bVar19 = (byte)GVar2 < (byte)GVar3;
            if (GVar2 == GVar3) {
               bVar19 = *(float*)( *(long*)( pGVar5 + 0x60 ) + 0x10 ) <= *(float*)( *(long*)( pGVar14 + 0x60 ) + 0x10 ) && *(float*)( *(long*)( pGVar14 + 0x60 ) + 0x10 ) != *(float*)( *(long*)( pGVar5 + 0x60 ) + 0x10 );
            }

            pGVar18 = pGVar5;
            GVar6 = GVar3;
            if (!bVar19) {
               pGVar18 = pGVar14;
               GVar6 = GVar2;
            }

         }

      }

      lVar17 = lVar7;
      param_2 = param_1;
      do {
         if (GVar9 == GVar6) {
            if (*(float*)( *(long*)( param_3[param_2] + 0x60 ) + 0x10 ) < *(float*)( *(long*)( pGVar18 + 0x60 ) + 0x10 ) || *(float*)( *(long*)( param_3[param_2] + 0x60 ) + 0x10 ) == *(float*)( *(long*)( pGVar18 + 0x60 ) + 0x10 )) goto LAB_0011ed23;
            LAB_0011ecea:if (lVar7 + -1 == param_2) {
               _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
               GVar6 = pGVar18[0xf];
               goto LAB_0011ed23;
            }

         }
 else {
            if ((byte)GVar9 < (byte)GVar6) goto LAB_0011ecea;
            LAB_0011ed23:lVar17 = lVar17 + -1;
            ppGVar10 = param_3 + lVar17;
            while (true) {
               GVar2 = ( *ppGVar10 )[0xf];
               bVar19 = (byte)GVar6 < (byte)GVar2;
               if (GVar2 == GVar6) {
                  pfVar1 = (float*)( *(long*)( *ppGVar10 + 0x60 ) + 0x10 );
                  bVar19 = *pfVar1 <= *(float*)( *(long*)( pGVar18 + 0x60 ) + 0x10 ) && *(float*)( *(long*)( pGVar18 + 0x60 ) + 0x10 ) != *pfVar1;
               }

               if (!bVar19) goto joined_r0x0011ed6c;
               if (param_1 == lVar17) break;
               lVar17 = lVar17 + -1;
               ppGVar10 = ppGVar10 + -1;
            }
;
            ;;
            _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
            joined_r0x0011ed6c:if (lVar17 <= param_2) break;
            pGVar14 = param_3[param_2];
            GVar6 = pGVar18[0xf];
            param_3[param_2] = *ppGVar10;
            *ppGVar10 = pGVar14;
         }

         lVar16 = param_2 + 1;
         param_2 = param_2 + 1;
         GVar9 = param_3[lVar16][0xf];
      }
 while ( true );
      lVar17 = param_2 - param_1;
      introsort(param_2, lVar7, param_3, local_58);
      if (lVar17 < 0x11) {
         return;
      }

      lVar7 = param_2;
      if (local_58 == 0) goto LAB_0011eeeb;
      goto LAB_0011ec44;
      LAB_0011f0a0:pGVar14 = ppGVar10[lVar17];
      ppGVar10[lVar17] = *ppGVar10;
      if (lVar17 < 3) {
         if (lVar17 != 2) {
            *ppGVar10 = pGVar14;
            return;
         }

         lVar16 = param_1 + 1;
         lVar8 = 0;
         *ppGVar10 = param_3[lVar16];
         LAB_0011f159:GVar2 = pGVar14[0xf];
         while (true) {
            pGVar4 = param_3[param_1 + lVar8];
            bVar19 = (byte)pGVar4[0xf] < (byte)GVar2;
            if (pGVar4[0xf] == GVar2) {
               bVar19 = *(float*)( *(long*)( pGVar14 + 0x60 ) + 0x10 ) <= *(float*)( *(long*)( pGVar4 + 0x60 ) + 0x10 ) && *(float*)( *(long*)( pGVar4 + 0x60 ) + 0x10 ) != *(float*)( *(long*)( pGVar14 + 0x60 ) + 0x10 );
            }

            ppGVar12 = param_3 + lVar16;
            if (!bVar19) goto LAB_0011f1ba;
            *ppGVar12 = pGVar4;
            if (lVar8 == 0) break;
            lVar16 = param_1 + lVar8;
            lVar8 = ( lVar8 + -1 ) / 2;
         }
;
         ;;
         lVar17 = lVar17 + -1;
         param_3[param_1 + lVar8] = pGVar14;
         goto LAB_0011f0a0;
      }

      lVar7 = 0;
      lVar16 = 2;
      do {
         ppGVar12 = param_3 + param_1 + lVar16;
         pGVar4 = *ppGVar12;
         pGVar5 = param_3[param_1 + lVar16 + -1];
         bVar19 = (byte)pGVar4[0xf] < (byte)pGVar5[0xf];
         if (pGVar4[0xf] == pGVar5[0xf]) {
            bVar19 = *(float*)( *(long*)( pGVar5 + 0x60 ) + 0x10 ) <= *(float*)( *(long*)( pGVar4 + 0x60 ) + 0x10 ) && *(float*)( *(long*)( pGVar4 + 0x60 ) + 0x10 ) != *(float*)( *(long*)( pGVar5 + 0x60 ) + 0x10 );
         }

         if (bVar19) {
            param_3[lVar7 + param_1] = pGVar5;
            lVar7 = lVar16 + -1;
            ppGVar12 = param_3 + param_1 + lVar16 + -1;
            lVar8 = lVar16;
         }
 else {
            lVar8 = lVar16 + 1;
            param_3[lVar7 + param_1] = pGVar4;
            lVar7 = lVar16;
         }

         lVar16 = lVar8 * 2;
      }
 while ( lVar16 < lVar17 );
      if (lVar16 == lVar17) {
         lVar16 = lVar17 + -1 + param_1;
         lVar8 = lVar17 + -2 >> 1;
         *ppGVar12 = param_3[lVar16];
         goto LAB_0011f159;
      }

      lVar16 = param_1 + lVar7;
      lVar8 = ( lVar7 + -1 ) / 2;
      if (0 < lVar7) goto LAB_0011f159;
      LAB_0011f1ba:*ppGVar12 = pGVar14;
      lVar17 = lVar17 + -1;
      goto LAB_0011f0a0;
   }

   /* RenderData::is_class(String const&) const */
   undefined8 RenderData::is_class(RenderData *this, String *param_1) {
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
                     if (lVar5 == 0) goto LAB_0011f28f;
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

         LAB_0011f28f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_0011f343;
      }

      cVar6 = String::operator ==(param_1, "RenderData");
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
                        if (lVar5 == 0) goto LAB_0011f3f3;
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

            LAB_0011f3f3:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

            if (cVar6 != '\0') goto LAB_0011f343;
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = String::operator ==(param_1, "Object");
            return uVar7;
         }

      }
 else {
         LAB_0011f343:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return 1;
         }

      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* RefCounted::is_class(String const&) const */
   undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
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
                     if (lVar5 == 0) goto LAB_0011f51f;
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

         LAB_0011f51f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_0011f5d3;
      }

      cVar6 = String::operator ==(param_1, "RefCounted");
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
                        if (lVar5 == 0) goto LAB_0011f683;
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

            LAB_0011f683:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

            if (cVar6 != '\0') goto LAB_0011f5d3;
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = String::operator ==(param_1, "Object");
            return uVar7;
         }

      }
 else {
         LAB_0011f5d3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return 1;
         }

      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* RenderSceneData::is_class(String const&) const */
   undefined8 RenderSceneData::is_class(RenderSceneData *this, String *param_1) {
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
                     if (lVar5 == 0) goto LAB_0011f7af;
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

         LAB_0011f7af:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_0011f863;
      }

      cVar6 = String::operator ==(param_1, "RenderSceneData");
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
                        if (lVar5 == 0) goto LAB_0011f913;
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

            LAB_0011f913:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

            if (cVar6 != '\0') goto LAB_0011f863;
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = String::operator ==(param_1, "Object");
            return uVar7;
         }

      }
 else {
         LAB_0011f863:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return 1;
         }

      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* RenderData::get_class() const */
   void RenderData::get_class(void) {
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

   /* RenderSceneData::get_class() const */
   void RenderSceneData::get_class(void) {
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

   /* RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::get_class()
   const */
   void RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::get_class(void) {
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

   /* RefCounted::get_class() const */
   void RefCounted::get_class(void) {
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

   /* RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::is_class(String
   const&) const */
   undefined8 RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::is_class(RenderBufferDataForwardMobile *this, String *param_1) {
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
                     if (lVar5 == 0) goto LAB_0011fd9f;
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

         LAB_0011fd9f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_0011fe53;
      }

      cVar6 = String::operator ==(param_1, "RenderBufferDataForwardMobile");
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
                        if (lVar5 == 0) goto LAB_0011ff13;
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

            LAB_0011ff13:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

            if (cVar6 != '\0') goto LAB_0011fe53;
         }

         cVar6 = String::operator ==(param_1, "RenderBufferCustomDataRD");
         if (cVar6 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
               return uVar7;
            }

            goto LAB_0011ffbc;
         }

      }

      LAB_0011fe53:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

      LAB_0011ffbc:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* RenderSceneData::_initialize_classv() */
   void RenderSceneData::_initialize_classv(void) {
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
         StringName::StringName((StringName*)&local_40, (String*)&local_48, false);
         local_38 = "RenderSceneData";
         local_50 = 0;
         local_30 = 0xf;
         String::parse_latin1((StrRange*)&local_50);
         StringName::StringName((StringName*)&local_38, (String*)&local_50, false);
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
            RenderSceneData::_bind_methods();
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

   /* RefCounted::_initialize_classv() */
   void RefCounted::_initialize_classv(void) {
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
         StringName::StringName((StringName*)&local_40, (String*)&local_48, false);
         local_38 = "RefCounted";
         local_50 = 0;
         local_30 = 10;
         String::parse_latin1((StrRange*)&local_50);
         StringName::StringName((StringName*)&local_38, (String*)&local_50, false);
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

         if ((code*)PTR__bind_methods_0012f008 != Object::_bind_methods) {
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

   /* RenderData::_initialize_classv() */
   void RenderData::_initialize_classv(void) {
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
         StringName::StringName((StringName*)&local_40, (String*)&local_48, false);
         local_38 = "RenderData";
         local_50 = 0;
         local_30 = 10;
         String::parse_latin1((StrRange*)&local_50);
         StringName::StringName((StringName*)&local_38, (String*)&local_50, false);
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

         if ((code*)PTR__bind_methods_0012f010 != Object::_bind_methods) {
            RenderData::_bind_methods();
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

   /* RenderSceneData::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void RenderSceneData::_get_property_listv(List *param_1, bool param_2) {
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
      local_78 = "RenderSceneData";
      local_70 = 0xf;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "RenderSceneData";
      local_98 = 0;
      local_70 = 0xf;
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
         LAB_00120618:local_50 = 0x80;
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 != 0x11) goto LAB_00120618;
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 != local_80) {
            StringName::unref();
            lVar2 = *(long*)pLVar6;
            local_68 = local_80;
            goto joined_r0x00120636;
         }

         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }

      lVar2 = *(long*)pLVar6;
      joined_r0x00120636:if (lVar2 == 0) {
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

      StringName::StringName((StringName*)&local_78, "RenderSceneData", false);
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

   /* RenderData::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void RenderData::_get_property_listv(List *param_1, bool param_2) {
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
      local_78 = "RenderData";
      local_70 = 10;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "RenderData";
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
         LAB_00120a08:local_50 = 0x80;
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 != 0x11) goto LAB_00120a08;
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 != local_80) {
            StringName::unref();
            lVar2 = *(long*)pLVar6;
            local_68 = local_80;
            goto joined_r0x00120a26;
         }

         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }

      lVar2 = *(long*)pLVar6;
      joined_r0x00120a26:if (lVar2 == 0) {
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

      StringName::StringName((StringName*)&local_78, "RenderData", false);
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

   /* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void RefCounted::_get_property_listv(List *param_1, bool param_2) {
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
         LAB_00120df8:local_50 = 0x80;
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 != 0x11) goto LAB_00120df8;
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 != local_80) {
            StringName::unref();
            lVar2 = *(long*)pLVar6;
            local_68 = local_80;
            goto joined_r0x00120e16;
         }

         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }

      lVar2 = *(long*)pLVar6;
      joined_r0x00120e16:if (lVar2 == 0) {
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

   /* RendererSceneRenderImplementation::RenderForwardMobile::ForwardIDStorageMobile::~ForwardIDStorageMobile()
    */
   void RendererSceneRenderImplementation::RenderForwardMobile::ForwardIDStorageMobile::~ForwardIDStorageMobile(ForwardIDStorageMobile *this) {
      ForwardIDStorageMobile *pFVar1;
      pFVar1 = this + 0x98;
      *(undefined***)this = &PTR__ForwardIDStorageMobile_00129668;
      do {
         if (*(void**)( pFVar1 + 0x28 ) != (void*)0x0) {
            if (*(int*)( pFVar1 + 0x20 ) != 0) {
               *(int*)( pFVar1 + 0x20 ) = 0;
            }

            Memory::free_static(*(void**)( pFVar1 + 0x28 ), false);
         }

         if (*(void**)( pFVar1 + 0x18 ) != (void*)0x0) {
            if (*(int*)( pFVar1 + 0x10 ) != 0) {
               *(int*)( pFVar1 + 0x10 ) = 0;
            }

            Memory::free_static(*(void**)( pFVar1 + 0x18 ), false);
         }

         if (*(void**)( pFVar1 + 8 ) != (void*)0x0) {
            if (*(int*)pFVar1 != 0) {
               *(int*)pFVar1 = 0;
            }

            Memory::free_static(*(void**)( pFVar1 + 8 ), false);
         }

         pFVar1 = pFVar1 + -0x30;
      }
 while ( pFVar1 != this + -0x28 );
      RendererRD::ForwardIDStorage::~ForwardIDStorage((ForwardIDStorage*)this);
      return;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::ForwardIDStorageMobile::~ForwardIDStorageMobile()
    */
   void RendererSceneRenderImplementation::RenderForwardMobile::ForwardIDStorageMobile::~ForwardIDStorageMobile(ForwardIDStorageMobile *this) {
      ~ForwardIDStorageMobile(this)
      ;;
      ;;
      operator_delete(this, 200);
      return;
   }

   /* RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::_initialize_classv()
    */
   void RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::_initialize_classv(void) {
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
      if (initialize_class() != '\0') goto LAB_0012138a;
      if (RenderBufferCustomDataRD::initialize_class() == '\0') {
         if (RefCounted::initialize_class() == '\0') {
            Object::initialize_class();
            local_58 = 0;
            local_40 = 6;
            local_48 = "Object";
            String::parse_latin1((StrRange*)&local_58);
            StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
            local_48 = "RefCounted";
            local_60 = 0;
            local_40 = 10;
            String::parse_latin1((StrRange*)&local_60);
            StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
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

            if ((code*)PTR__bind_methods_0012f008 != Object::_bind_methods) {
               RefCounted::_bind_methods();
            }

            RefCounted::initialize_class()::initialized =
            '\x01';
         }

         local_48 = "RefCounted";
         local_58 = 0;
         local_40 = 10;
         String::parse_latin1((StrRange*)&local_58);
         StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
         local_48 = "RenderBufferCustomDataRD";
         local_60 = 0;
         local_40 = 0x18;
         String::parse_latin1((StrRange*)&local_60);
         StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
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
               goto LAB_0012128b;
            }

         }

         RenderBufferCustomDataRD::initialize_class()::initialized =
         '\x01';
      }

      LAB_0012128b:local_48 = "RenderBufferCustomDataRD";
      local_58 = 0;
      local_40 = 0x18;
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "RenderBufferDataForwardMobile";
      local_60 = 0;
      local_40 = 0x1d;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
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
      LAB_0012138a:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* DependencyTracker::update_end() */
   void DependencyTracker::update_end(DependencyTracker *this) {
      undefined1(*pauVar1)[16];
      uint *puVar2;
      undefined4 *puVar3;
      undefined4 *puVar4;
      uint *puVar5;
      undefined4 uVar6;
      long lVar7;
      long lVar8;
      long lVar9;
      void *pvVar10;
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
      uint uVar39;
      int iVar40;
      ulong uVar41;
      long *plVar42;
      uint *puVar43;
      uint uVar44;
      uint uVar45;
      long lVar46;
      long lVar47;
      ulong uVar48;
      ulong uVar49;
      uint *puVar50;
      long lVar51;
      uint uVar52;
      uint *puVar53;
      ulong uVar54;
      ulong uVar55;
      undefined1(*pauVar56)[16];
      undefined1(*pauVar57)[16];
      ulong uVar58;
      if (*(uint*)( this + 0x44 ) == 0) {
         return;
      }

      uVar58 = *(ulong*)( this + 0x20 );
      pauVar56 = (undefined1(*) [16])0x0;
      uVar55 = ( ulong ) * (uint*)( this + 0x44 );
      uVar41 = (long)this * 0x3ffff - 1;
      uVar41 = ( uVar41 ^ uVar41 >> 0x1f ) * 0x15;
      uVar41 = ( uVar41 ^ uVar41 >> 0xb ) * 0x41;
      uVar41 = uVar41 >> 0x16 ^ uVar41;
      uVar49 = uVar41 & 0xffffffff;
      if ((int)uVar41 == 0) {
         uVar49 = 1;
      }

      lVar51 = 0;
      do {
         lVar7 = *(long*)( uVar58 + lVar51 * 8 );
         lVar8 = *(long*)( lVar7 + 8 );
         if (( lVar8 != 0 ) && ( *(int*)( lVar7 + 0x2c ) != 0 )) {
            uVar41 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar7 + 0x28 ) * 4 ));
            lVar47 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar7 + 0x28 ) * 8 );
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar49 * lVar47;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar41;
            lVar46 = SUB168(auVar11 * auVar25, 8);
            uVar39 = *(uint*)( *(long*)( lVar7 + 0x10 ) + lVar46 * 4 );
            uVar44 = SUB164(auVar11 * auVar25, 8);
            if (uVar39 != 0) {
               uVar52 = 0;
               do {
                  if (( uVar39 == (uint)uVar49 ) && ( this == *(DependencyTracker**)( *(long*)( lVar8 + lVar46 * 8 ) + 0x10 ) )) {
                     lVar8 = *(long*)( lVar8 + (ulong)uVar44 * 8 );
                     if (lVar8 != 0) {
                        if (*(int*)( lVar8 + 0x18 ) != *(int*)( this + 0x18 )) {
                           lVar8 = *(long*)( lVar8 + 0x10 );
                           if (pauVar56 == (undefined1(*) [16])0x0) {
                              pauVar56 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                              *(undefined4*)pauVar56[1] = 0;
                              *pauVar56 = (undefined1[16])0x0;
                           }

                           plVar42 = (long*)operator_new(0x28, DefaultAllocator::alloc);
                           plVar42[2] = 0;
                           *plVar42 = lVar7;
                           plVar42[1] = lVar8;
                           lVar7 = *(long*)( *pauVar56 + 8 );
                           plVar42[4] = (long)pauVar56;
                           plVar42[3] = lVar7;
                           if (lVar7 != 0) {
                              *(long**)( lVar7 + 0x10 ) = plVar42;
                           }

                           lVar7 = *(long*)*pauVar56;
                           *(long**)( *pauVar56 + 8 ) = plVar42;
                           if (lVar7 == 0) {
                              *(long**)*pauVar56 = plVar42;
                           }

                           *(int*)pauVar56[1] = *(int*)pauVar56[1] + 1;
                        }

                        goto LAB_0012181c;
                     }

                     break;
                  }

                  uVar52 = uVar52 + 1;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(uVar44 + 1) * lVar47;
                  auVar26._8_8_ = 0;
                  auVar26._0_8_ = uVar41;
                  lVar46 = SUB168(auVar12 * auVar26, 8);
                  uVar39 = *(uint*)( *(long*)( lVar7 + 0x10 ) + lVar46 * 4 );
                  uVar44 = SUB164(auVar12 * auVar26, 8);
               }
 while ( ( uVar39 != 0 ) && ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar39 * lVar47,auVar27._8_8_ = 0,auVar27._0_8_ = uVar41,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar7 + 0x28 ) * 4 ) + uVar44 ) - SUB164(auVar13 * auVar27, 8)) * lVar47,auVar28._8_8_ = 0,auVar28._0_8_ = uVar41,uVar52 <= SUB164(auVar14 * auVar28, 8) );
            }

         }

         _err_print_error("update_end", "./servers/rendering/storage/utilities.h", 0x5a, "Condition \"!F\" is true. Continuing.", 0, 0);
         LAB_0012181c:if ((int)uVar55 <= (int)lVar51 + 1) goto code_r0x0012182b;
         lVar51 = lVar51 + 1;
      }
 while ( true );
      LAB_00121bd8:do {
         pvVar10 = *(void**)*pauVar56;
         while (true) {
            if (pvVar10 == (void*)0x0) {
               if (*(int*)pauVar57[1] != 0) {
                  _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                  return;
               }

               goto LAB_00121b2c;
            }

            if (pauVar56 != *(undefined1(**) [16])( (long)pvVar10 + 0x20 )) break;
            lVar51 = *(long*)( (long)pvVar10 + 0x10 );
            lVar7 = *(long*)( (long)pvVar10 + 0x18 );
            *(long*)*pauVar56 = lVar51;
            if (pvVar10 == *(void**)( *pauVar56 + 8 )) {
               *(long*)( *pauVar56 + 8 ) = lVar7;
            }

            if (lVar7 != 0) {
               *(long*)( lVar7 + 0x10 ) = lVar51;
               lVar51 = *(long*)( (long)pvVar10 + 0x10 );
            }

            if (lVar51 != 0) {
               *(long*)( lVar51 + 0x18 ) = lVar7;
            }

            Memory::free_static(pvVar10, false);
            pauVar1 = pauVar56 + 1;
            *(int*)*pauVar1 = *(int*)*pauVar1 + -1;
            if (*(int*)*pauVar1 == 0) goto LAB_00121b2c;
            pvVar10 = *(void**)*pauVar56;
         }
;
         ;;
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0, pauVar57, this, uVar58);
      }
 while ( *(int*)pauVar56[1] != 0 );
      goto LAB_00121b2c;
      LAB_00121918:uVar52 = uVar52 + 1;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = ( ulong )(iVar40 + 1) * lVar8;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar54;
      lVar47 = SUB168(auVar16 * auVar30, 8);
      uVar44 = *(uint*)( lVar7 + lVar47 * 4 );
      iVar40 = SUB164(auVar16 * auVar30, 8);
      if (( uVar44 == 0 ) || ( auVar17._8_8_ = 0 ),auVar17._0_8_ = (ulong)uVar44 * lVar8,auVar31._8_8_ = 0,auVar31._0_8_ = uVar54,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( uVar39 + iVar40 ) - SUB164(auVar17 * auVar31, 8)) * lVar8,auVar32._8_8_ = 0,auVar32._0_8_ = uVar54,SUB164(auVar18 * auVar32, 8) < uVar52) goto LAB_00121abd;
      goto LAB_00121968;
      code_r0x0012182b:if (pauVar56 == (undefined1(*) [16])0x0) {
         return;
      }

      LAB_00121836:do {
         pauVar57 = pauVar56;
         if (*(int*)pauVar56[1] == 0) goto LAB_00121bd8;
         HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>::erase((HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>*)**(undefined8**)*pauVar56, (DependencyTracker**)( *(undefined8**)*pauVar56 + 1 ));
         plVar42 = *(long**)*pauVar56;
         lVar51 = *(long*)( this + 0x20 );
         if (( lVar51 != 0 ) && ( *(int*)( this + 0x44 ) != 0 )) {
            lVar7 = *(long*)( this + 0x38 );
            uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x40 ) * 4 );
            uVar54 = CONCAT44(0, uVar39);
            lVar8 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x40 ) * 8 );
            uVar41 = *plVar42 * 0x3ffff - 1;
            uVar41 = ( uVar41 ^ uVar41 >> 0x1f ) * 0x15;
            uVar41 = ( uVar41 ^ uVar41 >> 0xb ) * 0x41;
            uVar41 = uVar41 >> 0x16 ^ uVar41;
            uVar49 = uVar41 & 0xffffffff;
            if ((int)uVar41 == 0) {
               uVar49 = 1;
            }

            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar49 * lVar8;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar54;
            lVar47 = SUB168(auVar15 * auVar29, 8);
            uVar44 = *(uint*)( lVar7 + lVar47 * 4 );
            iVar40 = SUB164(auVar15 * auVar29, 8);
            if (uVar44 != 0) {
               uVar52 = 0;
               LAB_00121968:if (uVar44 != (uint)uVar49) goto LAB_00121918;
               lVar46 = *(long*)( this + 0x28 );
               uVar44 = *(uint*)( lVar46 + lVar47 * 4 );
               uVar41 = (ulong)uVar44;
               if (*plVar42 != *(long*)( lVar51 + uVar41 * 8 )) goto LAB_00121918;
               uVar58 = (ulong)uVar44;
               lVar9 = *(long*)( this + 0x30 );
               puVar2 = (uint*)( lVar9 + uVar41 * 4 );
               uVar52 = *puVar2;
               uVar49 = (ulong)uVar52;
               auVar19._8_8_ = 0;
               auVar19._0_8_ = ( ulong )(uVar52 + 1) * lVar8;
               auVar33._8_8_ = 0;
               auVar33._0_8_ = uVar54;
               lVar47 = SUB168(auVar19 * auVar33, 8) * 4;
               uVar45 = SUB164(auVar19 * auVar33, 8);
               uVar55 = (ulong)uVar45;
               puVar50 = (uint*)( lVar7 + lVar47 );
               if (( *puVar50 == 0 ) || ( auVar20._8_8_ = 0 ),auVar20._0_8_ = ( ulong ) * puVar50 * lVar8,auVar34._8_8_ = 0,auVar34._0_8_ = uVar54,auVar21._8_8_ = 0,auVar21._0_8_ = ( ulong )(( uVar45 + uVar39 ) - SUB164(auVar20 * auVar34, 8)) * lVar8,auVar35._8_8_ = 0,auVar35._0_8_ = uVar54,SUB164(auVar21 * auVar35, 8) == 0) {
                  uVar55 = (ulong)uVar52;
               }
 else {
                  while (true) {
                     puVar43 = (uint*)( lVar47 + lVar46 );
                     puVar5 = (uint*)( lVar46 + uVar49 * 4 );
                     puVar53 = (uint*)( uVar49 * 4 + lVar7 );
                     puVar3 = (undefined4*)( lVar9 + ( ulong ) * puVar43 * 4 );
                     puVar4 = (undefined4*)( lVar9 + ( ulong ) * puVar5 * 4 );
                     uVar6 = *puVar4;
                     *puVar4 = *puVar3;
                     *puVar3 = uVar6;
                     uVar52 = *puVar50;
                     *puVar50 = *puVar53;
                     *puVar53 = uVar52;
                     uVar52 = *puVar43;
                     *puVar43 = *puVar5;
                     *puVar5 = uVar52;
                     auVar24._8_8_ = 0;
                     auVar24._0_8_ = ( ulong )((int)uVar55 + 1) * lVar8;
                     auVar38._8_8_ = 0;
                     auVar38._0_8_ = uVar54;
                     uVar48 = SUB168(auVar24 * auVar38, 8);
                     lVar47 = uVar48 * 4;
                     puVar50 = (uint*)( lVar7 + lVar47 );
                     if (( *puVar50 == 0 ) || ( auVar22._8_8_ = 0 ),auVar22._0_8_ = ( ulong ) * puVar50 * lVar8,auVar36._8_8_ = 0,auVar36._0_8_ = uVar54,auVar23._8_8_ = 0,auVar23._0_8_ = ( ulong )(( SUB164(auVar24 * auVar38, 8) + uVar39 ) - SUB164(auVar22 * auVar36, 8)) * lVar8,auVar37._8_8_ = 0,auVar37._0_8_ = uVar54,SUB164(auVar23 * auVar37, 8) == 0) break;
                     uVar49 = uVar55;
                     uVar55 = uVar48 & 0xffffffff;
                  }
;
                  ;;
               }

               *(undefined4*)( lVar7 + uVar55 * 4 ) = 0;
               uVar55 = ( ulong ) * (uint*)( this + 0x44 );
               uVar39 = *(uint*)( this + 0x44 ) - 1;
               *(uint*)( this + 0x44 ) = uVar39;
               if (uVar44 < uVar39) {
                  uVar52 = *(uint*)( lVar9 + (ulong)uVar39 * 4 );
                  *(undefined8*)( lVar51 + uVar41 * 8 ) = *(undefined8*)( lVar51 + (ulong)uVar39 * 8 );
                  *puVar2 = uVar52;
                  *(uint*)( lVar46 + ( ulong ) * (uint*)( lVar9 + ( ulong ) * (uint*)( this + 0x44 ) * 4 ) * 4 ) = uVar44;
               }

            }

         }

         LAB_00121abd:if (pauVar57 != (undefined1(*) [16])plVar42[4]) {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0, pauVar57, this, uVar58, uVar55);
            pauVar56 = pauVar57;
            if (*(int*)pauVar57[1] == 0) break;
            goto LAB_00121836;
         }

         lVar51 = plVar42[2];
         lVar7 = plVar42[3];
         *(long*)*pauVar57 = lVar51;
         if (plVar42 == *(long**)( *pauVar57 + 8 )) {
            *(long*)( *pauVar57 + 8 ) = lVar7;
         }

         if (lVar7 != 0) {
            *(long*)( lVar7 + 0x10 ) = lVar51;
            lVar51 = plVar42[2];
         }

         if (lVar51 != 0) {
            *(long*)( lVar51 + 0x18 ) = lVar7;
         }

         Memory::free_static(plVar42, false);
         uVar58 = ( ulong ) * (uint*)pauVar57[1];
         iVar40 = *(uint*)pauVar57[1] - 1;
         *(int*)pauVar57[1] = iVar40;
         pauVar56 = pauVar57;
      }
 while ( iVar40 != 0 );
      LAB_00121b2c:Memory::free_static(pauVar57, false);
      return;
   }

   /* RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey::hash()
   const */
   uint RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey::hash(PipelineKey *this) {
      float fVar1;
      uint uVar2;
      fVar1 = *(float*)( this + 0x24 );
      uVar2 = ( *(int*)this * 0x16a88000 | ( uint )(*(int*)this * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
      uVar2 = ( *(int*)( this + 8 ) * 0x16a88000 | ( uint )(*(int*)( this + 8 ) * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ ( uVar2 << 0xd | uVar2 >> 0x13 ) * 5 + 0xe6546b64;
      uVar2 = ( *(int*)( this + 0x10 ) * 0x16a88000 | ( uint )(*(int*)( this + 0x10 ) * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ ( uVar2 << 0xd | uVar2 >> 0x13 ) * 5 + 0xe6546b64;
      uVar2 = ( *(int*)( this + 0x14 ) * 0x16a88000 | ( uint )(*(int*)( this + 0x14 ) * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ ( uVar2 << 0xd | uVar2 >> 0x13 ) * 5 + 0xe6546b64;
      uVar2 = ( *(int*)( this + 0x18 ) * 0x16a88000 | ( uint )(*(int*)( this + 0x18 ) * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ ( uVar2 << 0xd | uVar2 >> 0x13 ) * 5 + 0xe6546b64;
      uVar2 = ( *(int*)( this + 0x1c ) * 0x16a88000 | ( uint )(*(int*)( this + 0x1c ) * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ ( uVar2 << 0xd | uVar2 >> 0x13 ) * 5 + 0xe6546b64;
      uVar2 = ( *(int*)( this + 0x20 ) * 0x16a88000 | ( uint )(*(int*)( this + 0x20 ) * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ ( uVar2 << 0xd | uVar2 >> 0x13 ) * 5 + 0xe6546b64;
      uVar2 = ( uVar2 << 0xd | uVar2 >> 0x13 ) * 5 + 0xe6546b64;
      if (fVar1 != 0.0) {
         if (NAN(fVar1)) {
            uVar2 = uVar2 ^ 0x2db3efa0;
         }
 else {
            uVar2 = uVar2 ^ ( (int)fVar1 * 0x16a88000 | ( uint )((int)fVar1 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
         }

      }

      for (int i = 0; i < 4; i++) {
         uVar2 = ( *(int*)( this + ( 4 * i + 40 ) ) * 380141568 | ( uint )(*(int*)( this + ( 4 * i + 40 ) ) * -862048943) >> 17 ) * 461845907 ^ ( uVar2 << 13 | uVar2 >> 19 ) * 5 + 3864292196;
      }

      uVar2 = ( uVar2 << 0xd | uVar2 >> 0x13 ) * 5 + 0xe6546b64;
      uVar2 = ( uVar2 >> 0x10 ^ uVar2 ) * -0x7a143595;
      uVar2 = ( uVar2 >> 0xd ^ uVar2 ) * -0x3d4d51cb;
      return uVar2 >> 0x10 ^ uVar2;
   }

   /* RenderBufferCustomDataRD::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */
   void RenderBufferCustomDataRD::_get_property_listv(RenderBufferCustomDataRD *this, List *param_1, bool param_2) {
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
         LAB_00122028:local_50 = 0x80;
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 != 0x11) goto LAB_00122028;
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 != local_80) {
            StringName::unref();
            lVar2 = *(long*)param_1;
            local_68 = local_80;
            goto joined_r0x00122045;
         }

         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }

      lVar2 = *(long*)param_1;
      joined_r0x00122045:if (lVar2 == 0) {
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

   /* RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::_get_property_listv(List<PropertyInfo,
   DefaultAllocator>*, bool) const */
   void RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::_get_property_listv(RenderBufferDataForwardMobile *this, List *param_1, bool param_2) {
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
      local_78 = "RenderBufferDataForwardMobile";
      local_70 = 0x1d;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "RenderBufferDataForwardMobile";
      local_98 = 0;
      local_70 = 0x1d;
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
         LAB_00122478:local_50 = 0x80;
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 != 0x11) goto LAB_00122478;
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 != local_80) {
            StringName::unref();
            lVar2 = *(long*)param_1;
            local_68 = local_80;
            goto joined_r0x00122495;
         }

         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }

      lVar2 = *(long*)param_1;
      joined_r0x00122495:if (lVar2 == 0) {
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

      StringName::StringName((StringName*)&local_78, "RenderBufferDataForwardMobile", false);
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

   /* RenderSceneBuffersRD::get_back_buffer_texture() const */
   undefined8 RenderSceneBuffersRD::get_back_buffer_texture(RenderSceneBuffersRD *this) {
      long lVar1;
      char cVar2;
      int iVar3;
      undefined8 uVar4;
      StringName *pSVar5;
      long in_FS_OFFSET;
      lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
      if (::{lambda ()
      #2
      iVar3 = __cxa_guard_acquire(&const::{lambda()
      #2
      if (iVar3 != 0), {
            _scs_create((char *)&const::{lambda()
            #2
            __cxa_atexit(StringName::~StringName, &const::{lambda() & const::{lambda()(const::{lambda() = __cxa_guard_acquire(&const::{lambda()
   #1
   if (iVar3 != 0), {
                        _scs_create((char *)&const::{lambda()
                        #1
                        __cxa_atexit(StringName::~StringName,&const::{lambda()
      #1
      __cxa_guard_release(&const::{lambda()
      #1
   }

}
cVar2 = RenderSceneBuffersRD::has_texture
                    ((StringName *)this,(StringName *)&const::{lambda()
                        #1if
                        if (::{lambda ()
   #6
   iVar3 = __cxa_guard_acquire(&const::{lambda()
   #6
   if (iVar3 != 0), {
                              _scs_create((char *)&const::{lambda()
                              #6
                              __cxa_atexit(StringName::~StringName, &const::{lambda(), #6);
                              ;;
                              __cxa_guard_release(&const::{lambda()
      #6
   }

}
if (const::{lambda()
                              #5iVar3
                              _scs_create((char *)&const::{lambda()
                              #5
                              __cxa_atexit(StringName::~StringName, &const::{lambda(), #5);
                              ;;
                              __cxa_guard_release(&const::{lambda()
   #5
}
}
    cVar2 = RenderSceneBuffersRD::has_texture
                      ((StringName *)this,(StringName *)&const::{lambda()
                              #5if
                              if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
                                 return 0;
                              }

                           }
, else {
   if (const::{lambda() = __cxa_guard_acquire(&const::{lambda()
   #8
   if (iVar3 != 0), {
                              _scs_create((char *)&const::{lambda()
                              #8
                              __cxa_atexit(StringName::~StringName, &const::{lambda() & __dso_handle);
                              __cxa_guard_release(&const::{lambda()
      #8
   }

}
if (const::{lambda()
                              #7iVar3
                              _scs_create((char *)&const::{lambda()
                              #7
                              __cxa_atexit(StringName::~StringName, &const::{lambda() & __dso_handle);
                              __cxa_guard_release(&const::{lambda()
   #7
}
}if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
   pSVar5 = (StringName *)&const::{lambda()
                              #7
                              goto LAB_0012280f;
                           }
, else {
   if (const::{lambda() = __cxa_guard_acquire(&const::{lambda()
   #4
   if (iVar3 != 0), {
                              _scs_create((char *)&const::{lambda()
                              #4
                              __cxa_atexit(StringName::~StringName, &const::{lambda(), #4);
                              ;;
                              __cxa_guard_release(&const::{lambda()
      #4
   }

}
if (const::{lambda()
                              #3iVar3
                              _scs_create((char *)&const::{lambda()
                              #3
                              __cxa_atexit(StringName::~StringName, &const::{lambda(), #3);
                              ;;
                              __cxa_guard_release(&const::{lambda()(lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) = (StringName*)&const::{lambda() = RenderSceneBuffersRD::get_texture((StringName*)this, pSVar5));
                              return uVar4;
                           }
, }/* WARNING: Subroutine does not return */__stack_chk_fail()}/* RendererSceneRenderImplementation::RenderForwardMobile::RenderList::sort_by_key() */void RendererSceneRenderImplementation::RenderForwardMobile::RenderList::sort_by_key(RenderList *this) lVar3 = puVar6[-1];
                        LAB_00125949:if (param_1 <= lVar3) goto LAB_001258c1;
                     }
, else {
      if (lVar7 != 0) = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false)(puVar5 == (undefined8*)0x0) = puVar5 + 2 * puVar5 = 1 * (undefined8**)this) = puVar6);
            lVar3 = puVar5[1];
            goto LAB_00125949;
         }
, puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false) ;;
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
   LAB_001258c1:puVar6[-1] = param_1;
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<int>::resize<false>(long) */undefined8 CowData<int>::resize<false>(CowData<int> *this, long param_1) {
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
      lVar3 = lVar7 * 4;
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
         if (lVar7 < param_1) {
            if (uVar4 + 1 == lVar3) {
               puVar5 = *(undefined8**)this;
               if (puVar5 == (undefined8*)0x0) goto LAB_00125c49;
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
                  if (puVar5 == (undefined8*)0x0) goto LAB_00125d30;
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
                  LAB_00125c49:_DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }
 else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_00125d30:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<unsigned int, long, HashMapHasherDefault, HashMapComparatorDefault<unsigned int>,
   DefaultTypedAllocator<HashMapElement<unsigned int, long> > >::insert(unsigned int const&, long
   const&, bool) */void HashMap<unsigned_int,long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,long>>>::insert(uint *param_1, long *param_2, bool param_3) {
   uint *puVar1;
   undefined8 *puVar2;
   void *pvVar3;
   void *__s;
   long lVar4;
   undefined8 uVar5;
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
   undefined1(*pauVar30)[16];
   uint uVar31;
   uint uVar32;
   uint uVar33;
   ulong uVar34;
   void *__s_00;
   undefined1(*pauVar35)[16];
   undefined8 *in_RCX;
   int iVar36;
   undefined7 in_register_00000011;
   uint *puVar37;
   ulong uVar38;
   long lVar39;
   long lVar40;
   long lVar41;
   ulong uVar42;
   undefined8 uVar43;
   char in_R8B;
   uint uVar44;
   uint uVar45;
   uint uVar46;
   undefined1(*pauVar47)[16];
   void *local_78;
   puVar37 = (uint*)CONCAT71(in_register_00000011, param_3);
   uVar32 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
   local_78 = (void*)param_2[1];
   if (local_78 == (void*)0x0) {
      uVar42 = (ulong)uVar32;
      uVar34 = uVar42 * 4;
      uVar38 = uVar42 * 8;
      lVar39 = Memory::alloc_static(uVar34, false);
      param_2[2] = lVar39;
      local_78 = (void*)Memory::alloc_static(uVar38, false);
      param_2[1] = (long)local_78;
      if (uVar32 != 0) {
         pvVar3 = (void*)param_2[2];
         if (( pvVar3 < (void*)( (long)local_78 + uVar38 ) ) && ( local_78 < (void*)( (long)pvVar3 + uVar34 ) )) {
            uVar34 = 0;
            do {
               *(undefined4*)( (long)pvVar3 + uVar34 * 4 ) = 0;
               *(undefined8*)( (long)local_78 + uVar34 * 8 ) = 0;
               uVar34 = uVar34 + 1;
            }
 while ( uVar42 != uVar34 );
            goto LAB_00125dcb;
         }

         memset(pvVar3, 0, uVar34);
         memset(local_78, 0, uVar38);
         uVar33 = *puVar37;
         iVar36 = *(int*)( (long)param_2 + 0x2c );
         goto LAB_00125ddb;
      }

      uVar33 = *puVar37;
      iVar36 = *(int*)( (long)param_2 + 0x2c );
      if (local_78 != (void*)0x0) goto LAB_00125ddb;
   }
 else {
      LAB_00125dcb:uVar33 = *puVar37;
      iVar36 = *(int*)( (long)param_2 + 0x2c );
      LAB_00125ddb:if (iVar36 != 0) {
         uVar34 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 5 ) * 8 );
         uVar31 = ( uVar33 >> 0x10 ^ uVar33 ) * -0x7a143595;
         uVar31 = ( uVar31 ^ uVar31 >> 0xd ) * -0x3d4d51cb;
         uVar46 = uVar31 ^ uVar31 >> 0x10;
         if (uVar31 == uVar31 >> 0x10) {
            uVar46 = 1;
            uVar38 = uVar34;
         }
 else {
            uVar38 = uVar46 * uVar34;
         }

         uVar42 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 ));
         uVar45 = 0;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = uVar42;
         auVar18._8_8_ = 0;
         auVar18._0_8_ = uVar38;
         lVar39 = SUB168(auVar6 * auVar18, 8);
         uVar44 = SUB164(auVar6 * auVar18, 8);
         uVar31 = *(uint*)( param_2[2] + lVar39 * 4 );
         if (uVar31 != 0) {
            do {
               if (( uVar46 == uVar31 ) && ( *(uint*)( *(long*)( (long)local_78 + lVar39 * 8 ) + 0x10 ) == uVar33 )) {
                  pauVar35 = *(undefined1(**) [16])( (long)local_78 + (ulong)uVar44 * 8 );
                  *(undefined8*)( pauVar35[1] + 8 ) = *in_RCX;
                  goto LAB_00126258;
               }

               uVar45 = uVar45 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( uVar44 + 1 ) * uVar34;
               auVar19._8_8_ = 0;
               auVar19._0_8_ = uVar42;
               lVar39 = SUB168(auVar7 * auVar19, 8);
               uVar31 = *(uint*)( param_2[2] + lVar39 * 4 );
               uVar44 = SUB164(auVar7 * auVar19, 8);
            }
 while ( ( uVar31 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = uVar31 * uVar34,auVar20._8_8_ = 0,auVar20._0_8_ = uVar42,auVar9._8_8_ = 0,auVar9._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 ) + uVar44 ) - SUB164(auVar8 * auVar20, 8) ) * uVar34,auVar21._8_8_ = 0,auVar21._0_8_ = uVar42,uVar45 <= SUB164(auVar9 * auVar21, 8) );
         }

      }

   }

   if ((float)uVar32 * __LC127 < (float)( iVar36 + 1 )) {
      uVar32 = *(uint*)( param_2 + 5 );
      if (uVar32 == 0x1c) {
         pauVar35 = (undefined1(*) [16])0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_00126258;
      }

      uVar34 = ( ulong )(uVar32 + 1);
      uVar33 = *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 );
      *(undefined4*)( (long)param_2 + 0x2c ) = 0;
      if (uVar32 + 1 < 2) {
         uVar34 = 2;
      }

      uVar32 = *(uint*)( hash_table_size_primes + uVar34 * 4 );
      *(int*)( param_2 + 5 ) = (int)uVar34;
      pvVar3 = (void*)param_2[2];
      uVar42 = (ulong)uVar32;
      uVar34 = uVar42 * 4;
      uVar38 = uVar42 * 8;
      lVar39 = Memory::alloc_static(uVar34, false);
      param_2[2] = lVar39;
      __s_00 = (void*)Memory::alloc_static(uVar38, false);
      param_2[1] = (long)__s_00;
      if (uVar32 != 0) {
         __s = (void*)param_2[2];
         if (( __s < (void*)( (long)__s_00 + uVar38 ) ) && ( __s_00 < (void*)( (long)__s + uVar34 ) )) {
            uVar34 = 0;
            do {
               *(undefined4*)( (long)__s + uVar34 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar34 * 8 ) = 0;
               uVar34 = uVar34 + 1;
            }
 while ( uVar34 != uVar42 );
         }
 else {
            memset(__s, 0, uVar34);
            memset(__s_00, 0, uVar38);
         }

      }

      uVar34 = 0;
      if (uVar33 != 0) {
         do {
            uVar32 = *(uint*)( (long)pvVar3 + uVar34 * 4 );
            if (uVar32 != 0) {
               uVar44 = 0;
               lVar39 = param_2[2];
               uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
               uVar38 = CONCAT44(0, uVar31);
               lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 5 ) * 8 );
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar32 * lVar4;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar38;
               lVar40 = SUB168(auVar10 * auVar22, 8);
               puVar1 = (uint*)( lVar39 + lVar40 * 4 );
               iVar36 = SUB164(auVar10 * auVar22, 8);
               uVar46 = *puVar1;
               uVar5 = *(undefined8*)( (long)local_78 + uVar34 * 8 );
               while (uVar46 != 0) {
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = (ulong)uVar46 * lVar4;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar38;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(( uVar31 + iVar36 ) - SUB164(auVar11 * auVar23, 8)) * lVar4;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar38;
                  uVar45 = SUB164(auVar12 * auVar24, 8);
                  uVar43 = uVar5;
                  if (uVar45 < uVar44) {
                     *puVar1 = uVar32;
                     puVar2 = (undefined8*)( (long)__s_00 + lVar40 * 8 );
                     uVar43 = *puVar2;
                     *puVar2 = uVar5;
                     uVar32 = uVar46;
                     uVar44 = uVar45;
                  }

                  uVar44 = uVar44 + 1;
                  auVar13._8_8_ = 0;
                  auVar13._0_8_ = ( ulong )(iVar36 + 1) * lVar4;
                  auVar25._8_8_ = 0;
                  auVar25._0_8_ = uVar38;
                  lVar40 = SUB168(auVar13 * auVar25, 8);
                  puVar1 = (uint*)( lVar39 + lVar40 * 4 );
                  iVar36 = SUB164(auVar13 * auVar25, 8);
                  uVar5 = uVar43;
                  uVar46 = *puVar1;
               }
;
               ;;
               *(undefined8*)( (long)__s_00 + lVar40 * 8 ) = uVar5;
               *puVar1 = uVar32;
               *(int*)( (long)param_2 + 0x2c ) = *(int*)( (long)param_2 + 0x2c ) + 1;
            }

            uVar34 = uVar34 + 1;
         }
 while ( uVar33 != uVar34 );
         Memory::free_static(local_78, false);
         Memory::free_static(pvVar3, false);
      }

   }

   uVar32 = *puVar37;
   uVar5 = *in_RCX;
   pauVar35 = (undefined1(*) [16])operator_new(0x20, "");
   *(uint*)pauVar35[1] = uVar32;
   *(undefined8*)( pauVar35[1] + 8 ) = uVar5;
   *pauVar35 = (undefined1[16])0x0;
   puVar2 = (undefined8*)param_2[4];
   if (puVar2 == (undefined8*)0x0) {
      param_2[3] = (long)pauVar35;
      param_2[4] = (long)pauVar35;
   }
 else if (in_R8B == '\0') {
      *puVar2 = pauVar35;
      *(undefined8**)( *pauVar35 + 8 ) = puVar2;
      param_2[4] = (long)pauVar35;
   }
 else {
      lVar39 = param_2[3];
      *(undefined1(**) [16])( lVar39 + 8 ) = pauVar35;
      *(long*)*pauVar35 = lVar39;
      param_2[3] = (long)pauVar35;
   }

   uVar32 = ( *puVar37 >> 0x10 ^ *puVar37 ) * -0x7a143595;
   uVar33 = ( uVar32 ^ uVar32 >> 0xd ) * -0x3d4d51cb;
   uVar32 = uVar33 ^ uVar33 >> 0x10;
   if (uVar33 == uVar33 >> 0x10) {
      uVar34 = 1;
      uVar32 = 1;
   }
 else {
      uVar34 = (ulong)uVar32;
   }

   uVar46 = 0;
   lVar39 = param_2[2];
   uVar33 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
   uVar38 = CONCAT44(0, uVar33);
   lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 5 ) * 8 );
   auVar14._8_8_ = 0;
   auVar14._0_8_ = uVar34 * lVar4;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar38;
   lVar41 = SUB168(auVar14 * auVar26, 8);
   lVar40 = param_2[1];
   puVar37 = (uint*)( lVar39 + lVar41 * 4 );
   iVar36 = SUB164(auVar14 * auVar26, 8);
   uVar31 = *puVar37;
   pauVar30 = pauVar35;
   while (uVar31 != 0) {
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (ulong)uVar31 * lVar4;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar38;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = ( ulong )(( uVar33 + iVar36 ) - SUB164(auVar15 * auVar27, 8)) * lVar4;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar38;
      uVar44 = SUB164(auVar16 * auVar28, 8);
      pauVar47 = pauVar30;
      if (uVar44 < uVar46) {
         *puVar37 = uVar32;
         puVar2 = (undefined8*)( lVar40 + lVar41 * 8 );
         pauVar47 = (undefined1(*) [16])*puVar2;
         *puVar2 = pauVar30;
         uVar32 = uVar31;
         uVar46 = uVar44;
      }

      uVar46 = uVar46 + 1;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ( ulong )(iVar36 + 1) * lVar4;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar38;
      lVar41 = SUB168(auVar17 * auVar29, 8);
      puVar37 = (uint*)( lVar39 + lVar41 * 4 );
      iVar36 = SUB164(auVar17 * auVar29, 8);
      pauVar30 = pauVar47;
      uVar31 = *puVar37;
   }
;
   ;;
   *(undefined1(**) [16])( lVar40 + lVar41 * 8 ) = pauVar30;
   *puVar37 = uVar32;
   *(int*)( (long)param_2 + 0x2c ) = *(int*)( (long)param_2 + 0x2c ) + 1;
   LAB_00126258:*(undefined1(**) [16])param_1 = pauVar35;
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
/* CowData<RenderingDevice::FramebufferPass>::_unref() */void CowData<RenderingDevice::FramebufferPass>::_unref(CowData<RenderingDevice::FramebufferPass> *this) {
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
               if (*(long*)( lVar6 + 0x38 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 0x38 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 0x38 );
                     *(undefined8*)( lVar6 + 0x38 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               if (*(long*)( lVar6 + 0x28 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 0x28 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 0x28 );
                     *(undefined8*)( lVar6 + 0x28 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

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
               lVar6 = lVar6 + 0x48;
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
      LAB_00126940:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar11 == 0) goto LAB_00126940;
   if (param_1 <= lVar8) {
      lVar8 = *(long*)this;
      uVar10 = param_1;
      while (lVar8 != 0) {
         if (*(ulong*)( lVar8 + -8 ) <= uVar10) {
            LAB_001267d1:if (lVar11 != lVar9) {
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
            if (*(ulong*)( lVar8 + -8 ) <= uVar10) goto LAB_001267d1;
         }
;
         ;;
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
      ;;
      goto LAB_00126996;
   }

   if (lVar11 == lVar9) {
      LAB_001268b3:puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) {
         LAB_00126996:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar8 = puVar7[-1];
      if (param_1 <= lVar8) goto LAB_00126890;
   }
 else {
      if (lVar8 != 0) {
         uVar4 = _realloc(this, lVar11);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_001268b3;
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

   uVar4 = _LC149;
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
   LAB_00126890:puVar7[-1] = param_1;
   return 0;
}
/* CowData<RenderingDevice::FramebufferPass>::_realloc(long) */undefined8 CowData<RenderingDevice::FramebufferPass>::_realloc(CowData<RenderingDevice::FramebufferPass> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<RenderingDevice::FramebufferPass>::resize<false>(long) */undefined8 CowData<RenderingDevice::FramebufferPass>::resize<false>(CowData<RenderingDevice::FramebufferPass> *this, long param_1) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   long lVar7;
   undefined8 *puVar8;
   long lVar9;
   ulong uVar10;
   ulong uVar11;
   long lVar12;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar7 = 0;
      lVar9 = 0;
   }
 else {
      lVar7 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar7) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar9 = lVar7 * 0x48;
      if (lVar9 != 0) {
         uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
         uVar10 = uVar10 | uVar10 >> 2;
         uVar10 = uVar10 | uVar10 >> 4;
         uVar10 = uVar10 | uVar10 >> 8;
         uVar10 = uVar10 | uVar10 >> 0x10;
         lVar9 = ( uVar10 | uVar10 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x48 == 0) {
      LAB_00126df0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar10 = param_1 * 0x48 - 1;
   uVar10 = uVar10 >> 1 | uVar10;
   uVar10 = uVar10 | uVar10 >> 2;
   uVar10 = uVar10 | uVar10 >> 4;
   uVar10 = uVar10 | uVar10 >> 8;
   uVar10 = uVar10 | uVar10 >> 0x10;
   uVar10 = uVar10 | uVar10 >> 0x20;
   lVar12 = uVar10 + 1;
   if (lVar12 == 0) goto LAB_00126df0;
   uVar11 = param_1;
   if (param_1 <= lVar7) {
      while (lVar7 = *(long*)this,lVar7 != 0) {
         if (*(ulong*)( lVar7 + -8 ) <= uVar11) {
            if (lVar12 != lVar9) {
               uVar6 = _realloc(this, lVar12);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               lVar7 = *(long*)this;
               if (lVar7 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

            }

            *(long*)( lVar7 + -8 ) = param_1;
            return 0;
         }

         lVar7 = lVar7 + uVar11 * 0x48;
         for (int i = 0; i < 4; i++) {
            if (*(long*)( lVar7 + ( -16 * i + 56 ) ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( lVar7 + ( -16 * i + 56 ) ) + -16 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar2 = *(long*)( lVar7 + ( -16 * i + 56 ) );
                  *(undefined8*)( lVar7 + ( -16 * i + 56 ) ) = 0;
                  Memory::free_static((void*)( lVar2 + -16 ), false);
               }

            }

         }

         uVar11 = uVar11 + 1;
      }
;
      ;;
      goto LAB_00126e46;
   }

   if (lVar12 == lVar9) {
      LAB_00126d63:puVar8 = *(undefined8**)this;
      if (puVar8 == (undefined8*)0x0) {
         LAB_00126e46:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar7 = puVar8[-1];
      if (param_1 <= lVar7) goto LAB_00126c2d;
   }
 else {
      if (lVar7 != 0) {
         uVar6 = _realloc(this, lVar12);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         goto LAB_00126d63;
      }

      puVar4 = (undefined8*)Memory::alloc_static(uVar10 + 0x11, false);
      if (puVar4 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar8 = puVar4 + 2;
      *puVar4 = 1;
      puVar4[1] = 0;
      *(undefined8**)this = puVar8;
      lVar7 = 0;
   }

   uVar6 = _LC72;
   puVar4 = puVar8 + lVar7 * 9;
   do {
      puVar4[1] = 0;
      puVar5 = puVar4 + 9;
      for (int i = 0; i < 3; i++) {
         puVar4[( 2 * i + 3 )] = 0;
      }

      puVar4[8] = uVar6;
      puVar4 = puVar5;
   }
 while ( puVar5 != puVar8 + param_1 * 9 );
   LAB_00126c2d:puVar8[-1] = param_1;
   return 0;
}
/* CowData<Color>::_realloc(long) */undefined8 CowData<Color>::_realloc(CowData<Color> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Color>::resize<false>(long) */undefined8 CowData<Color>::resize<false>(CowData<Color> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   undefined8 uVar3;
   long lVar4;
   ulong uVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   undefined8 uVar9;
   undefined8 *puVar10;
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
      lVar4 = lVar12 * 0x10;
      if (lVar4 != 0) {
         uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = uVar5 | uVar5 >> 0x10;
         lVar4 = ( uVar5 | uVar5 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x10 == 0) {
      LAB_00127130:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar5 = param_1 * 0x10 - 1;
   uVar5 = uVar5 >> 1 | uVar5;
   uVar5 = uVar5 | uVar5 >> 2;
   uVar5 = uVar5 | uVar5 >> 4;
   uVar5 = uVar5 | uVar5 >> 8;
   uVar5 = uVar5 | uVar5 >> 0x10;
   uVar5 = uVar5 | uVar5 >> 0x20;
   lVar11 = uVar5 + 1;
   if (lVar11 == 0) goto LAB_00127130;
   if (param_1 <= lVar12) {
      if (( lVar11 != lVar4 ) && ( uVar9 = _realloc(this, lVar11) ),(int)uVar9 != 0) {
         return uVar9;
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
      LAB_0012709c:puVar10 = *(undefined8**)this;
      if (puVar10 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar4 = puVar10[-1];
      if (param_1 <= lVar4) goto LAB_00127030;
   }
 else {
      if (lVar12 != 0) {
         uVar9 = _realloc(this, lVar11);
         if ((int)uVar9 != 0) {
            return uVar9;
         }

         goto LAB_0012709c;
      }

      puVar6 = (undefined8*)Memory::alloc_static(uVar5 + 0x11, false);
      if (puVar6 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar10 = puVar6 + 2;
      *puVar6 = 1;
      puVar6[1] = 0;
      *(undefined8**)this = puVar10;
      lVar4 = 0;
   }

   uVar3 = _UNK_0012a0f8;
   uVar9 = __LC138;
   puVar7 = puVar10 + lVar4 * 2;
   puVar6 = puVar7;
   if (( ( param_1 - lVar4 ) * 0x10 & 0x10U ) != 0) {
      *puVar7 = __LC138;
      puVar7[1] = uVar3;
      puVar6 = puVar7 + 2;
      if (puVar7 + ( param_1 - lVar4 ) * 2 == puVar7 + 2) goto LAB_00127030;
   }

   do {
      *puVar6 = uVar9;
      puVar6[1] = uVar3;
      puVar8 = puVar6 + 4;
      puVar6[2] = uVar9;
      puVar6[3] = uVar3;
      puVar6 = puVar8;
   }
 while ( puVar7 + ( param_1 - lVar4 ) * 2 != puVar8 );
   LAB_00127030:puVar10[-1] = param_1;
   return 0;
}
/* CowData<RenderingDevice::AttachmentFormat>::_realloc(long) */undefined8 CowData<RenderingDevice::AttachmentFormat>::_realloc(CowData<RenderingDevice::AttachmentFormat> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<RenderingDevice::AttachmentFormat>::resize<false>(long) */undefined8 CowData<RenderingDevice::AttachmentFormat>::resize<false>(CowData<RenderingDevice::AttachmentFormat> *this, long param_1) {
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
      LAB_00127470:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = lVar10 - 1U >> 1 | lVar10 - 1U;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar9 = uVar4 + 1;
   if (lVar9 == 0) goto LAB_00127470;
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
      LAB_001273dc:puVar8 = *(undefined8**)this;
      if (puVar8 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar8[-1];
      if (param_1 <= lVar3) goto LAB_0012736b;
   }
 else {
      if (lVar11 != 0) {
         uVar7 = _realloc(this, lVar9);
         if ((int)uVar7 != 0) {
            return uVar7;
         }

         goto LAB_001273dc;
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

   uVar7 = _LC206;
   puVar5 = (undefined8*)( (long)puVar8 + lVar3 * 0xc );
   do {
      *puVar5 = uVar7;
      puVar6 = (undefined8*)( (long)puVar5 + 0xc );
      *(undefined4*)( puVar5 + 1 ) = 0;
      puVar5 = puVar6;
   }
 while ( puVar6 != (undefined8*)( lVar10 + (long)puVar8 ) );
   LAB_0012736b:puVar8[-1] = param_1;
   return 0;
}
/* RBSet<unsigned int, Comparator<unsigned int>, DefaultAllocator>::_insert_rb_fix(RBSet<unsigned
   int, Comparator<unsigned int>, DefaultAllocator>::Element*) */void RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>::_insert_rb_fix(RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator> *this, Element *param_1) {
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
         if (*(int*)pEVar6 == 0) goto LAB_001275ed;
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
            if (pEVar5 == pEVar6) goto LAB_00127710;
            LAB_00127596:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_00127596;
            LAB_00127710:_err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
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
         LAB_001275d3:iVar1 = *(int*)pEVar7;
         param_1 = pEVar8;
      }
;
      ;;
      pEVar6 = *(Element**)( pEVar5 + 8 );
      if (*(int*)pEVar6 != 0) {
         if (*(Element**)( pEVar8 + 8 ) == param_1) {
            lVar2 = *(long*)( this + 8 );
            lVar3 = *(long*)( param_1 + 0x10 );
            *(long*)( pEVar8 + 8 ) = lVar3;
            if (lVar2 == lVar3) {
               *(Element**)( param_1 + 0x18 ) = pEVar5;
               pEVar7 = pEVar5;
               LAB_00127802:*(Element**)( pEVar7 + 0x10 ) = param_1;
            }
 else {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
               *(Element**)( param_1 + 0x18 ) = pEVar7;
               if (pEVar8 == *(Element**)( pEVar7 + 0x10 )) goto LAB_00127802;
               *(Element**)( pEVar7 + 8 ) = param_1;
            }

            *(Element**)( param_1 + 0x10 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_001277d0;
            LAB_00127660:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_00127660;
            LAB_001277d0:_err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
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
         goto LAB_001275d3;
      }

      LAB_001275ed:pEVar7 = *(Element**)( this + 8 );
      *(int*)pEVar8 = 1;
      *(int*)pEVar6 = 1;
      if (pEVar5 == pEVar7) {
         _err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
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
/* PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,
   RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData, void
   (RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>::compile_pipeline(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey
   const&, unsigned int, RenderingServer::PipelineSource, bool) */void PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>::compile_pipeline(PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)> *this, undefined8 *param_1, uint param_2, int param_4, byte param_5) {
   long *plVar1;
   int *piVar2;
   pthread_mutex_t *__mutex;
   undefined8 uVar3;
   undefined8 uVar4;
   Callable *pCVar5;
   uint uVar6;
   long lVar7;
   int iVar8;
   Element *pEVar9;
   Element *pEVar10;
   undefined8 *puVar11;
   undefined8 uVar12;
   Element *pEVar13;
   Element *pEVar14;
   Element *pEVar15;
   Element *pEVar16;
   Element *pEVar17;
   Element *pEVar18;
   long in_FS_OFFSET;
   bool bVar19;
   uint local_9c[3];
   long local_90;
   undefined8 local_88;
   undefined8 local_80;
   char *local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_9c[0] = param_2;
   iVar8 = pthread_mutex_lock((pthread_mutex_t*)( this + 0xc0 ));
   uVar6 = local_9c[0];
   if (iVar8 != 0) goto LAB_00127c87;
   pEVar15 = *(Element**)( this + 0x78 );
   pEVar14 = *(Element**)( this + 0x80 );
   if (pEVar15 == (Element*)0x0) {
      pEVar15 = (Element*)operator_new(0x38, DefaultAllocator::alloc);
      *(undefined1(*) [16])( pEVar15 + 0x20 ) = (undefined1[16])0x0;
      uVar12 = *(undefined8*)( this + 0x80 );
      *(Element**)( this + 0x78 ) = pEVar15;
      *(undefined4*)pEVar15 = 1;
      *(undefined8*)( pEVar15 + 0x18 ) = uVar12;
      *(undefined8*)( pEVar15 + 8 ) = uVar12;
      *(undefined8*)( pEVar15 + 0x10 ) = uVar12;
   }
 else {
      pEVar10 = *(Element**)( pEVar15 + 0x10 );
      pEVar9 = pEVar10;
      if (pEVar14 != pEVar10) {
         do {
            if (local_9c[0] < *(uint*)( pEVar9 + 0x30 )) {
               pEVar9 = *(Element**)( pEVar9 + 0x10 );
            }
 else {
               if (local_9c[0] <= *(uint*)( pEVar9 + 0x30 )) goto LAB_00127b5a;
               pEVar9 = *(Element**)( pEVar9 + 8 );
            }

         }
 while ( pEVar9 != pEVar14 );
         do {
            pEVar15 = pEVar10;
            if (local_9c[0] < *(uint*)( pEVar15 + 0x30 )) {
               pEVar10 = *(Element**)( pEVar15 + 0x10 );
            }
 else {
               if (local_9c[0] <= *(uint*)( pEVar15 + 0x30 )) goto LAB_001279cf;
               pEVar10 = *(Element**)( pEVar15 + 8 );
            }

         }
 while ( pEVar14 != pEVar10 );
      }

   }

   pEVar10 = (Element*)operator_new(0x38, DefaultAllocator::alloc);
   *(Element**)( pEVar10 + 0x18 ) = pEVar15;
   *(undefined1(*) [16])( pEVar10 + 0x20 ) = (undefined1[16])0x0;
   pEVar14 = *(Element**)( this + 0x80 );
   *(undefined4*)pEVar10 = 0;
   *(uint*)( pEVar10 + 0x30 ) = uVar6;
   *(Element**)( pEVar10 + 8 ) = pEVar14;
   *(Element**)( pEVar10 + 0x10 ) = pEVar14;
   if (( pEVar15 == *(Element**)( this + 0x78 ) ) || ( uVar6 < *(uint*)( pEVar15 + 0x30 ) )) {
      *(Element**)( pEVar15 + 0x10 ) = pEVar10;
      pEVar17 = *(Element**)( this + 0x80 );
      pEVar16 = *(Element**)( pEVar10 + 0x10 );
      pEVar18 = *(Element**)( this + 0x78 );
      pEVar9 = pEVar14;
      if (pEVar14 == pEVar17) {
         pEVar14 = pEVar15;
         pEVar13 = pEVar15;
         if (pEVar10 == *(Element**)( pEVar15 + 8 )) goto LAB_00127bc0;
         goto LAB_00127bcd;
      }

      LAB_00127970:do {
         pEVar18 = pEVar9 + 0x10;
         pEVar14 = pEVar9;
         pEVar9 = *(Element**)pEVar18;
      }
 while ( pEVar17 != *(Element**)pEVar18 );
   }
 else {
      *(Element**)( pEVar15 + 8 ) = pEVar10;
      pEVar9 = *(Element**)( pEVar10 + 8 );
      pEVar17 = *(Element**)( this + 0x80 );
      pEVar18 = *(Element**)( this + 0x78 );
      pEVar13 = pEVar15;
      pEVar16 = pEVar14;
      if (pEVar9 != pEVar17) goto LAB_00127970;
      LAB_00127bc0:do {
         pEVar14 = *(Element**)( pEVar13 + 0x18 );
         bVar19 = pEVar13 == *(Element**)( pEVar14 + 8 );
         pEVar13 = pEVar14;
      }
 while ( bVar19 );
      LAB_00127bcd:if (pEVar14 == pEVar18) {
         pEVar14 = (Element*)0x0;
      }

   }

   *(Element**)( pEVar10 + 0x20 ) = pEVar14;
   if (*(Element**)( this + 0x80 ) == pEVar16) {
      pEVar9 = pEVar10;
      pEVar17 = pEVar15;
      if (*(Element**)( pEVar15 + 0x10 ) == pEVar10) {
         do {
            pEVar15 = *(Element**)( pEVar17 + 0x18 );
            bVar19 = pEVar17 == *(Element**)( pEVar15 + 0x10 );
            pEVar9 = pEVar17;
            pEVar17 = pEVar15;
         }
 while ( bVar19 );
      }

      if (*(Element**)( this + 0x78 ) != pEVar9) goto LAB_001279a4;
      *(undefined8*)( pEVar10 + 0x28 ) = 0;
      if (pEVar14 != (Element*)0x0) goto LAB_001279ad;
   }
 else {
      do {
         pEVar15 = pEVar16;
         pEVar16 = *(Element**)( pEVar15 + 8 );
      }
 while ( *(Element**)( this + 0x80 ) != *(Element**)( pEVar15 + 8 ) );
      LAB_001279a4:*(Element**)( pEVar10 + 0x28 ) = pEVar15;
      if (pEVar14 != (Element*)0x0) {
         LAB_001279ad:*(Element**)( pEVar14 + 0x28 ) = pEVar10;
         pEVar15 = *(Element**)( pEVar10 + 0x28 );
         if (pEVar15 == (Element*)0x0) goto LAB_001279be;
      }

      *(Element**)( pEVar15 + 0x20 ) = pEVar10;
   }

   LAB_001279be:*(int*)( this + 0x88 ) = *(int*)( this + 0x88 ) + 1;
   RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>::_insert_rb_fix((RBSet<unsigned_int,Comparator<unsigned_int>,DefaultAllocator>*)( this + 0x78 ), pEVar10);
   LAB_001279cf:__mutex = *(pthread_mutex_t**)( this + 0x18 );
   if (__mutex != (pthread_mutex_t*)0x0) {
      iVar8 = pthread_mutex_lock(__mutex);
      if (iVar8 != 0) {
         LAB_00127c87:/* WARNING: Subroutine does not return */std::__throw_system_error(iVar8);
      }

      piVar2 = (int*)( *(long*)( this + 0x20 ) + (long)param_4 * 4 );
      *piVar2 = *piVar2 + 1;
      pthread_mutex_unlock(__mutex);
   }

   pCVar5 = WorkerThreadPool::singleton;
   local_90 = 0;
   uStack_70 = 0x13;
   local_78 = "PipelineCompilation";
   String::parse_latin1((StrRange*)&local_90);
   local_78 = (char*)*param_1;
   uStack_70 = param_1[1];
   local_68 = param_1[2];
   uStack_60 = param_1[3];
   local_58 = param_1[4];
   uStack_50 = param_1[5];
   uVar12 = *(undefined8*)this;
   uVar3 = *(undefined8*)( this + 8 );
   local_48 = param_1[6];
   uVar4 = *(undefined8*)( this + 0x10 );
   puVar11 = (undefined8*)operator_new(0x58, "");
   puVar11[3] = uVar4;
   puVar11[2] = uVar3;
   *puVar11 = &PTR_callback_00129bb0;
   puVar11[4] = local_78;
   puVar11[5] = uStack_70;
   puVar11[1] = uVar12;
   puVar11[6] = local_68;
   puVar11[7] = uStack_60;
   puVar11[8] = local_58;
   puVar11[9] = uStack_50;
   puVar11[10] = local_48;
   local_88 = 0;
   local_80 = 0;
   uVar12 = WorkerThreadPool::_add_task(pCVar5, (_func_void_void_ptr*)&local_88, (void*)0x0, (BaseTemplateUserdata*)0x0, SUB81(puVar11, 0), (String*)(ulong)param_5);
   Callable::~Callable((Callable*)&local_88);
   lVar7 = local_90;
   local_88 = uVar12;
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

   HashMap<unsigned_int,long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,long>>>::insert((uint*)&local_78, (long*)( this + 0x90 ), SUB81(local_9c, 0));
   LAB_00127b5a:pthread_mutex_unlock((pthread_mutex_t*)( this + 0xc0 ));
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<Pair<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData*,
   RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>
   >::_realloc(long) */undefined8 CowData<Pair<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData*,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>>::_realloc(CowData<Pair<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData*,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Pair<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData*,
   RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>
   >::resize<false>(long) */undefined8 CowData<Pair<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData*,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>>::resize<false>(CowData<Pair<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData*,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>> *this, long param_1) {
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
      lVar3 = lVar9 * 0x40;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x40 == 0) {
      LAB_00127f80:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 0x40 - 1;
   uVar4 = uVar4 >> 1 | uVar4;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar10 = uVar4 + 1;
   if (lVar10 == 0) goto LAB_00127f80;
   if (param_1 <= lVar9) {
      if (( lVar10 != lVar3 ) && ( uVar7 = _realloc(this, lVar10) ),(int)uVar7 != 0) {
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

   if (lVar10 == lVar3) {
      LAB_00127eec:puVar8 = *(undefined8**)this;
      if (puVar8 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar8[-1];
      if (param_1 <= lVar3) goto LAB_00127e84;
   }
 else {
      if (lVar9 != 0) {
         uVar7 = _realloc(this, lVar10);
         if ((int)uVar7 != 0) {
            return uVar7;
         }

         goto LAB_00127eec;
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

   uVar7 = _LC211;
   puVar5 = puVar8 + lVar3 * 8;
   do {
      *(undefined1(*) [16])( puVar5 + 5 ) = (undefined1[16])0x0;
      puVar6 = puVar5 + 8;
      *puVar5 = 0;
      *(undefined1(*) [16])( puVar5 + 1 ) = (undefined1[16])0x0;
      puVar5[7] = 0;
      puVar5[3] = uVar7;
      *(undefined1(*) [16])( puVar5 + 4 ) = (undefined1[16])0x0;
      *(undefined4*)( puVar5 + 6 ) = 8;
      puVar5 = puVar6;
   }
 while ( puVar6 != puVar8 + param_1 * 8 );
   LAB_00127e84:puVar8[-1] = param_1;
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned int>::resize<false>(long) */undefined8 CowData<unsigned_int>::resize<false>(CowData<unsigned_int> *this, long param_1) {
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
      lVar3 = lVar7 * 4;
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
         if (lVar7 < param_1) {
            if (uVar4 + 1 == lVar3) {
               puVar5 = *(undefined8**)this;
               if (puVar5 == (undefined8*)0x0) goto LAB_00128189;
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
                  if (puVar5 == (undefined8*)0x0) goto LAB_00128270;
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
                  LAB_00128189:_DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }
 else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_00128270:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
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
         if (*(int*)pEVar6 == 0) goto LAB_0012837d;
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
            if (pEVar5 == pEVar6) goto LAB_001284a0;
            LAB_00128326:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_00128326;
            LAB_001284a0:_err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
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
         LAB_00128363:iVar1 = *(int*)pEVar7;
         param_1 = pEVar8;
      }
;
      ;;
      pEVar6 = *(Element**)( pEVar5 + 8 );
      if (*(int*)pEVar6 != 0) {
         if (*(Element**)( pEVar8 + 8 ) == param_1) {
            lVar2 = *(long*)( this + 8 );
            lVar3 = *(long*)( param_1 + 0x10 );
            *(long*)( pEVar8 + 8 ) = lVar3;
            if (lVar2 == lVar3) {
               *(Element**)( param_1 + 0x18 ) = pEVar5;
               pEVar7 = pEVar5;
               LAB_00128592:*(Element**)( pEVar7 + 0x10 ) = param_1;
            }
 else {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
               *(Element**)( param_1 + 0x18 ) = pEVar7;
               if (pEVar8 == *(Element**)( pEVar7 + 0x10 )) goto LAB_00128592;
               *(Element**)( pEVar7 + 8 ) = param_1;
            }

            *(Element**)( param_1 + 0x10 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_00128560;
            LAB_001283f0:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_001283f0;
            LAB_00128560:_err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
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
         goto LAB_00128363;
      }

      LAB_0012837d:pEVar7 = *(Element**)( this + 8 );
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
/* RBMap<unsigned int, RID, Comparator<unsigned int>, DefaultAllocator>::operator[](unsigned int
   const&) */Element * __thiscall
RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::operator[]
          (RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator> *this,uint *param_1){
   uint uVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   Element *pEVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   Element *pEVar9;
   bool bVar10;
   pEVar5 = *(Element**)this;
   if (pEVar5 == (Element*)0x0) {
      pEVar5 = (Element*)operator_new(0x40, DefaultAllocator::alloc);
      *(undefined1(*) [16])( pEVar5 + 0x20 ) = (undefined1[16])0x0;
      pEVar4 = *(Element**)( this + 8 );
      *(undefined4*)( pEVar5 + 0x30 ) = 0;
      *(undefined8*)( pEVar5 + 0x38 ) = 0;
      *(Element**)this = pEVar5;
      *(Element**)( pEVar5 + 0x18 ) = pEVar4;
      *(undefined4*)pEVar5 = 1;
      *(Element**)( pEVar5 + 8 ) = pEVar4;
      *(Element**)( pEVar5 + 0x10 ) = pEVar4;
   }
 else {
      pEVar4 = *(Element**)( pEVar5 + 0x10 );
   }

   pEVar7 = *(Element**)( this + 8 );
   uVar1 = *param_1;
   pEVar2 = pEVar4;
   if (pEVar7 != pEVar4) {
      do {
         if (uVar1 < *(uint*)( pEVar2 + 0x30 )) {
            pEVar2 = *(Element**)( pEVar2 + 0x10 );
         }
 else {
            if (uVar1 <= *(uint*)( pEVar2 + 0x30 )) goto LAB_0012872f;
            pEVar2 = *(Element**)( pEVar2 + 8 );
         }

      }
 while ( pEVar2 != pEVar7 );
      do {
         pEVar5 = pEVar4;
         if (uVar1 < *(uint*)( pEVar5 + 0x30 )) {
            pEVar4 = *(Element**)( pEVar5 + 0x10 );
         }
 else {
            if (uVar1 <= *(uint*)( pEVar5 + 0x30 )) {
               *(undefined8*)( pEVar5 + 0x38 ) = 0;
               return pEVar5 + 0x38;
            }

            pEVar4 = *(Element**)( pEVar5 + 8 );
         }

      }
 while ( pEVar7 != pEVar4 );
   }

   pEVar2 = (Element*)operator_new(0x40, DefaultAllocator::alloc);
   uVar1 = *param_1;
   *(Element**)( pEVar2 + 0x18 ) = pEVar5;
   *(undefined1(*) [16])( pEVar2 + 0x20 ) = (undefined1[16])0x0;
   pEVar4 = *(Element**)( this + 8 );
   *(undefined4*)pEVar2 = 0;
   *(uint*)( pEVar2 + 0x30 ) = uVar1;
   *(undefined8*)( pEVar2 + 0x38 ) = 0;
   *(Element**)( pEVar2 + 8 ) = pEVar4;
   *(Element**)( pEVar2 + 0x10 ) = pEVar4;
   if (( pEVar5 == *(Element**)this ) || ( *param_1 < *(uint*)( pEVar5 + 0x30 ) )) {
      *(Element**)( pEVar5 + 0x10 ) = pEVar2;
      pEVar8 = *(Element**)( this + 8 );
      pEVar6 = *(Element**)( pEVar2 + 0x10 );
      pEVar9 = *(Element**)this;
      pEVar7 = pEVar4;
      if (pEVar8 == pEVar4) {
         pEVar4 = pEVar5;
         pEVar3 = pEVar5;
         if (pEVar2 == *(Element**)( pEVar5 + 8 )) goto LAB_00128750;
         goto LAB_0012875d;
      }

      LAB_001286d0:do {
         pEVar9 = pEVar7 + 0x10;
         pEVar4 = pEVar7;
         pEVar7 = *(Element**)pEVar9;
      }
 while ( *(Element**)pEVar9 != pEVar8 );
   }
 else {
      *(Element**)( pEVar5 + 8 ) = pEVar2;
      pEVar7 = *(Element**)( pEVar2 + 8 );
      pEVar8 = *(Element**)( this + 8 );
      pEVar9 = *(Element**)this;
      pEVar3 = pEVar5;
      pEVar6 = pEVar4;
      if (pEVar7 != pEVar8) goto LAB_001286d0;
      LAB_00128750:do {
         pEVar4 = *(Element**)( pEVar3 + 0x18 );
         bVar10 = *(Element**)( pEVar4 + 8 ) == pEVar3;
         pEVar3 = pEVar4;
      }
 while ( bVar10 );
      LAB_0012875d:if (pEVar4 == pEVar9) {
         pEVar4 = (Element*)0x0;
      }

   }

   *(Element**)( pEVar2 + 0x20 ) = pEVar4;
   if (*(Element**)( this + 8 ) == pEVar6) {
      pEVar7 = pEVar2;
      pEVar8 = pEVar5;
      if (pEVar2 == *(Element**)( pEVar5 + 0x10 )) {
         do {
            pEVar5 = *(Element**)( pEVar8 + 0x18 );
            bVar10 = *(Element**)( pEVar5 + 0x10 ) == pEVar8;
            pEVar7 = pEVar8;
            pEVar8 = pEVar5;
         }
 while ( bVar10 );
      }

      if (pEVar7 != *(Element**)this) goto LAB_00128704;
      *(undefined8*)( pEVar2 + 0x28 ) = 0;
      if (pEVar4 == (Element*)0x0) goto LAB_0012871e;
      LAB_0012870d:*(Element**)( pEVar4 + 0x28 ) = pEVar2;
      pEVar5 = *(Element**)( pEVar2 + 0x28 );
      if (pEVar5 == (Element*)0x0) goto LAB_0012871e;
   }
 else {
      do {
         pEVar5 = pEVar6;
         pEVar6 = *(Element**)( pEVar5 + 8 );
      }
 while ( *(Element**)( this + 8 ) != *(Element**)( pEVar5 + 8 ) );
      LAB_00128704:*(Element**)( pEVar2 + 0x28 ) = pEVar5;
      if (pEVar4 != (Element*)0x0) goto LAB_0012870d;
   }

   *(Element**)( pEVar5 + 0x20 ) = pEVar2;
   LAB_0012871e:*(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
   _insert_rb_fix(this, pEVar2);
   LAB_0012872f:return pEVar2 + 0x38;
}
/* PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,
   RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData, void
   (RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>::_add_new_pipelines_to_map()
    */undefined8 PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>::_add_new_pipelines_to_map(PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)> *this) {
   long *plVar1;
   CowData<unsigned_int> *pCVar2;
   ulong uVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   int iVar12;
   uint uVar13;
   uint uVar14;
   undefined8 *puVar15;
   undefined4 extraout_var;
   ulong uVar16;
   uint uVar17;
   uint *puVar18;
   uint uVar19;
   long lVar20;
   ulong uVar21;
   uint uVar22;
   uint *puVar23;
   long lVar24;
   long *in_FS_OFFSET;
   uint *local_50;
   if ((char)*in_FS_OFFSET == '\0') {
      lVar20 = *in_FS_OFFSET;
      *in_FS_OFFSET = 0;
      *(char*)in_FS_OFFSET = '\x01';
      __cxa_thread_atexit(Vector<unsigned_int>::~Vector, lVar20, &__dso_handle);
   }

   lVar20 = *in_FS_OFFSET;
   if (( lVar20 != 0 ) && ( *(long*)( lVar20 + -8 ) != 0 )) {
      LOCK();
      plVar1 = (long*)( lVar20 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar20 = *in_FS_OFFSET;
         *in_FS_OFFSET = 0;
         Memory::free_static((void*)( lVar20 + -0x10 ), false);
      }
 else {
         *in_FS_OFFSET = 0;
      }

   }

   iVar12 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x50 ));
   if (iVar12 == 0) {
      uVar13 = *(uint*)( this + 0x40 );
      puVar23 = *(uint**)( this + 0x48 );
      puVar18 = puVar23 + (ulong)uVar13 * 4;
      if (puVar18 != puVar23) {
         pCVar2 = (CowData<unsigned_int>*)*in_FS_OFFSET;
         do {
            puVar15 = (undefined8*)RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::operator []((RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>*)( this + 0x28 ), puVar23);
            uVar13 = *puVar23;
            *puVar15 = *(undefined8*)( puVar23 + 2 );
            if (in_FS_OFFSET[1] == 0) {
               lVar20 = 1;
            }
 else {
               lVar20 = *(long*)( in_FS_OFFSET[1] + -8 ) + 1;
            }

            iVar12 = CowData<unsigned_int>::resize<false>(pCVar2, lVar20);
            if (iVar12 == 0) {
               if (in_FS_OFFSET[1] == 0) {
                  lVar24 = -1;
                  lVar20 = 0;
               }
 else {
                  lVar20 = *(long*)( in_FS_OFFSET[1] + -8 );
                  lVar24 = lVar20 + -1;
                  if (-1 < lVar24) {
                     CowData<unsigned_int>::_copy_on_write(pCVar2);
                     *(uint*)( in_FS_OFFSET[1] + lVar24 * 4 ) = uVar13;
                     goto LAB_0012897e;
                  }

               }

               _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar24, lVar20, "p_index", "size()", "", false, false);
            }
 else {
               _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
            }

            LAB_0012897e:puVar23 = puVar23 + 4;
         }
 while ( puVar18 != puVar23 );
         uVar13 = *(uint*)( this + 0x40 );
      }

      if (uVar13 != 0) {
         *(undefined4*)( this + 0x40 ) = 0;
      }

      pthread_mutex_unlock((pthread_mutex_t*)( this + 0x50 ));
      iVar12 = pthread_mutex_lock((pthread_mutex_t*)( this + 0xc0 ));
      if (iVar12 == 0) {
         pCVar2 = (CowData<unsigned_int>*)*in_FS_OFFSET;
         CowData<unsigned_int>::_copy_on_write(pCVar2);
         puVar23 = (uint*)*in_FS_OFFSET;
         CowData<unsigned_int>::_copy_on_write(pCVar2);
         local_50 = (uint*)*in_FS_OFFSET;
         if (local_50 != (uint*)0x0) {
            local_50 = local_50 + *(long*)( local_50 + -2 );
         }

         do {
            if (puVar23 == local_50) {
               iVar12 = pthread_mutex_unlock((pthread_mutex_t*)( this + 0xc0 ));
               return CONCAT71(( int7 )(CONCAT44(extraout_var, iVar12) >> 8), *in_FS_OFFSET != 0);
            }

            lVar20 = *(long*)( this + 0x98 );
            if (( lVar20 != 0 ) && ( *(int*)( this + 0xbc ) != 0 )) {
               uVar13 = *puVar23;
               uVar3 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0xb8 ) * 8 );
               uVar14 = ( uVar13 >> 0x10 ^ uVar13 ) * -0x7a143595;
               uVar14 = ( uVar14 ^ uVar14 >> 0xd ) * -0x3d4d51cb;
               uVar19 = uVar14 ^ uVar14 >> 0x10;
               if (uVar14 == uVar14 >> 0x10) {
                  uVar19 = 1;
                  uVar16 = uVar3;
               }
 else {
                  uVar16 = uVar19 * uVar3;
               }

               uVar21 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xb8 ) * 4 ));
               auVar4._8_8_ = 0;
               auVar4._0_8_ = uVar21;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = uVar16;
               lVar24 = SUB168(auVar4 * auVar8, 8);
               uVar17 = SUB164(auVar4 * auVar8, 8);
               uVar14 = *(uint*)( *(long*)( this + 0xa0 ) + lVar24 * 4 );
               if (uVar14 != 0) {
                  uVar22 = 0;
                  while (( uVar14 != uVar19 || ( uVar13 != *(uint*)( *(long*)( lVar20 + lVar24 * 8 ) + 0x10 ) ) )) {
                     uVar22 = uVar22 + 1;
                     auVar5._8_8_ = 0;
                     auVar5._0_8_ = ( uVar17 + 1 ) * uVar3;
                     auVar9._8_8_ = 0;
                     auVar9._0_8_ = uVar21;
                     lVar24 = SUB168(auVar5 * auVar9, 8);
                     uVar14 = *(uint*)( *(long*)( this + 0xa0 ) + lVar24 * 4 );
                     uVar17 = SUB164(auVar5 * auVar9, 8);
                     if (( uVar14 == 0 ) || ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar14 * uVar3,auVar10._8_8_ = 0,auVar10._0_8_ = uVar21,auVar7._8_8_ = 0,auVar7._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xb8 ) * 4 ) + uVar17 ) - SUB164(auVar6 * auVar10, 8) ) * uVar3,auVar11._8_8_ = 0,auVar11._0_8_ = uVar21,SUB164(auVar7 * auVar11, 8) < uVar22) goto LAB_00128b39;
                  }
;
                  ;;
                  lVar20 = *(long*)( lVar20 + (ulong)uVar17 * 8 );
                  if (lVar20 != 0) {
                     HashMap<unsigned_int,long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,long>>>::erase((HashMap<unsigned_int,long,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,long>>>*)( this + 0x90 ), (uint*)( lVar20 + 0x10 ));
                  }

               }

            }

            LAB_00128b39:puVar23 = puVar23 + 1;
         }
 while ( true );
      }

   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar12);
}
/* PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,
   RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData, void
   (RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>::get_pipeline(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey
   const&, unsigned int, bool, RenderingServer::PipelineSource) */undefined8 PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)>::get_pipeline(PipelineHashMapRD<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey,RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey)> *this, undefined8 param_1, uint param_2, char param_3, undefined4 param_5) {
   char cVar1;
   long lVar2;
   undefined8 *puVar3;
   uint local_2c;
   lVar2 = *(long*)( this + 0x28 );
   if (lVar2 != 0) {
      while (lVar2 = *(long*)( lVar2 + 0x10 ),*(long*)( this + 0x30 ) != lVar2) {
         while (*(uint*)( lVar2 + 0x30 ) <= param_2) {
            if (param_2 <= *(uint*)( lVar2 + 0x30 )) goto LAB_00128d80;
            lVar2 = *(long*)( lVar2 + 8 );
            if (*(long*)( this + 0x30 ) == lVar2) goto LAB_00128cc1;
         }
;
         ;;
      }
;
      ;;
   }

   LAB_00128cc1:local_2c = param_2;
   cVar1 = _add_new_pipelines_to_map(this);
   if (( cVar1 != '\0' ) && ( lVar2 = lVar2 != 0 )) {
      while (lVar2 = *(long*)( lVar2 + 0x10 ),*(long*)( this + 0x30 ) != lVar2) {
         while (*(uint*)( lVar2 + 0x30 ) <= param_2) {
            if (param_2 <= *(uint*)( lVar2 + 0x30 )) goto LAB_00128d80;
            lVar2 = *(long*)( lVar2 + 8 );
            if (*(long*)( this + 0x30 ) == lVar2) goto LAB_00128d08;
         }
;
         ;;
      }
;
      ;;
   }

   LAB_00128d08:compile_pipeline(this, param_1, param_2, param_5, param_3);
   if (param_3 != '\0') {
      wait_for_pipeline(this, param_2);
      _add_new_pipelines_to_map(this);
      lVar2 = *(long*)( this + 0x28 );
      if (lVar2 != 0) {
         while (lVar2 = *(long*)( lVar2 + 0x10 ),*(long*)( this + 0x30 ) != lVar2) {
            while (*(uint*)( lVar2 + 0x30 ) <= param_2) {
               if (param_2 <= *(uint*)( lVar2 + 0x30 )) {
                  LAB_00128d80:return *(undefined8*)( lVar2 + 0x38 );
               }

               lVar2 = *(long*)( lVar2 + 8 );
               if (*(long*)( this + 0x30 ) == lVar2) goto LAB_00128d65;
            }
;
            ;;
         }
;
         ;;
      }

      LAB_00128d65:puVar3 = (undefined8*)RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>::operator []((RBMap<unsigned_int,RID,Comparator<unsigned_int>,DefaultAllocator>*)( this + 0x28 ), &local_2c);
      *puVar3 = 0;
   }

   return 0;
}
/* WARNING: Control flow encountered bad instruction data *//* RenderDataRD::~RenderDataRD() */void RenderDataRD::~RenderDataRD(RenderDataRD *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RendererSceneRenderImplementation::RenderForwardMobile::ForwardIDStorageMobile::~ForwardIDStorageMobile()
    */void RendererSceneRenderImplementation::RenderForwardMobile::ForwardIDStorageMobile::~ForwardIDStorageMobile(ForwardIDStorageMobile *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::~GeometryInstanceForwardMobile()
    */void RendererSceneRenderImplementation::RenderForwardMobile::GeometryInstanceForwardMobile::~GeometryInstanceForwardMobile(GeometryInstanceForwardMobile *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::~RenderBufferDataForwardMobile()
    */void RendererSceneRenderImplementation::RenderForwardMobile::RenderBufferDataForwardMobile::~RenderBufferDataForwardMobile(RenderBufferDataForwardMobile *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* WorkerThreadPool::TaskUserData<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,
   void 
   (RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey),
   RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>::~TaskUserData()
    */void WorkerThreadPool::TaskUserData<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey),RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey>::~TaskUserData(TaskUserData<RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData,void(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::*)(RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey),RendererSceneRenderImplementation::SceneShaderForwardMobile::ShaderData::PipelineKey> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* LocalVector<RenderingDevice::AttachmentFormat, unsigned int, false, false>::~LocalVector() */void LocalVector<RenderingDevice::AttachmentFormat,unsigned_int,false,false>::~LocalVector(LocalVector<RenderingDevice::AttachmentFormat,unsigned_int,false,false> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* Vector<RenderingDevice::AttachmentFormat>::~Vector() */void Vector<RenderingDevice::AttachmentFormat>::~Vector(Vector<RenderingDevice::AttachmentFormat> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* Vector<RenderingDevice::FramebufferPass>::~Vector() */void Vector<RenderingDevice::FramebufferPass>::~Vector(Vector<RenderingDevice::FramebufferPass> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* Vector<unsigned int>::~Vector() */void Vector<unsigned_int>::~Vector(Vector<unsigned_int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


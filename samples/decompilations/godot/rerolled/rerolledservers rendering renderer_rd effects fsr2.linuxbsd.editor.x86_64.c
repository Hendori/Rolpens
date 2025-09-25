/* get_device_capabilities_rd(FfxFsr2Interface*, FfxDeviceCapabilities*, void*) */undefined8 get_device_capabilities_rd(FfxFsr2Interface *param_1, FfxDeviceCapabilities *param_2, void *param_3) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)( (long)param_3 + 800 );
   *(undefined8*)param_2 = *(undefined8*)( (long)param_3 + 0x318 );
   *(undefined8*)( param_2 + 8 ) = uVar1;
   return 0;
}
/* destroy_pipeline_rd(FfxFsr2Interface*, FfxPipelineState*) */undefined8 destroy_pipeline_rd(FfxFsr2Interface *param_1, FfxPipelineState *param_2) {
   return 0;
}
/* schedule_gpu_job_rd(FfxFsr2Interface*, FfxGpuJobDescription const*) */undefined8 schedule_gpu_job_rd(FfxFsr2Interface *param_1, FfxGpuJobDescription *param_2) {
   uint uVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   void *pvVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   undefined1 auStack_37b8[14232];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (FfxFsr2Interface*)0x0) {
      _err_print_error("schedule_gpu_job_rd", "servers/rendering/renderer_rd/effects/fsr2.cpp", 0x15e, "Parameter \"p_backend_interface\" is null.", 0, 0);
   }
 else {
      if (param_2 != (FfxGpuJobDescription*)0x0) {
         lVar2 = *(long*)( param_1 + 0x60 );
         memcpy(auStack_37b8, param_2, 0x3798);
         uVar1 = *(uint*)( lVar2 + 0x60 );
         pvVar5 = *(void**)( lVar2 + 0x68 );
         if (uVar1 == *(uint*)( lVar2 + 100 )) {
            uVar6 = ( ulong )(uVar1 * 2);
            if (uVar1 * 2 == 0) {
               uVar6 = 1;
            }

            *(int*)( lVar2 + 100 ) = (int)uVar6;
            pvVar5 = (void*)Memory::realloc_static(pvVar5, uVar6 * 0x3798, false);
            *(void**)( lVar2 + 0x68 ) = pvVar5;
            if (pvVar5 == (void*)0x0) {
               _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            uVar1 = *(uint*)( lVar2 + 0x60 );
         }

         *(uint*)( lVar2 + 0x60 ) = uVar1 + 1;
         memcpy((void*)( (long)pvVar5 + (ulong)uVar1 * 0x3798 ), auStack_37b8, 0x3798);
         uVar4 = 0;
         goto LAB_001000c5;
      }

      _err_print_error("schedule_gpu_job_rd", "servers/rendering/renderer_rd/effects/fsr2.cpp", 0x15f, "Parameter \"p_job\" is null.", 0, 0);
   }

   uVar4 = 0x8000000a;
   LAB_001000c5:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* get_resource_description_rd(FfxFsr2Interface*, FfxResourceInternal) */undefined1(*)[16];get_resource_description_rd(undefined1 (*param_1)[16], long param_2, uint param_3) {
   uint uVar1;
   code *pcVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 *puVar6;
   if (param_3 == 0xffffffff) {
      *param_1 = (undefined1[16])0x0;
      *(undefined1(*) [16])( *param_1 + 0xc ) = (undefined1[16])0x0;
      return param_1;
   }

   uVar1 = *(uint*)( *(long*)( param_2 + 0x60 ) + 0x30 );
   if (param_3 < uVar1) {
      puVar6 = (undefined8*)( (ulong)param_3 * 0x1c + *(long*)( *(long*)( param_2 + 0x60 ) + 0x38 ) );
      uVar3 = puVar6[1];
      uVar4 = *(undefined8*)( (long)puVar6 + 0xc );
      uVar5 = *(undefined8*)( (long)puVar6 + 0x14 );
      *(undefined8*)*param_1 = *puVar6;
      *(undefined8*)( *param_1 + 8 ) = uVar3;
      *(undefined8*)( *param_1 + 0xc ) = uVar4;
      *(undefined8*)( param_1[1] + 4 ) = uVar5;
      return param_1;
   }

   _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)param_3, (ulong)uVar1, "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* destroy_backend_context_rd(FfxFsr2Interface*) */undefined8 destroy_backend_context_rd(FfxFsr2Interface *param_1) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong uVar4;
   lVar1 = *(long*)( param_1 + 0x60 );
   uVar4 = 0;
   do {
      uVar2 = RenderingDevice::get_singleton();
      uVar3 = (int)uVar4 + 1;
      RenderingDevice::free(uVar2, *(undefined8*)( lVar1 + 0x70 + uVar4 * 8 ));
      uVar4 = (ulong)uVar3;
   }
 while ( uVar3 != 0x90 );
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* create_pipeline_rd(FfxFsr2Interface*, FfxFsr2Pass, FfxPipelineDescription const*,
   FfxPipelineState*) */undefined8 create_pipeline_rd(long param_1, int param_2, byte *param_3, long *param_4) {
   long *plVar1;
   undefined8 *puVar2;
   long lVar3;
   Version *pVVar4;
   ulong uVar5;
   void *pvVar6;
   code *pcVar7;
   uint uVar8;
   long lVar9;
   undefined8 uVar10;
   ulong uVar11;
   ulong uVar12;
   size_t sVar13;
   long lVar14;
   int iVar15;
   long lVar16;
   long lVar17;
   long lVar18;
   long in_FS_OFFSET;
   long lVar19;
   long lVar20;
   undefined1 local_58[8];
   long local_50;
   long local_40;
   lVar18 = (long)param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = *(long*)( *(long*)( param_1 + 0x60 ) + 0x4f8 );
   lVar14 = lVar18 * 0x58;
   puVar2 = (undefined8*)( lVar3 + lVar14 );
   lVar19 = lVar14 + __LC36;
   lVar20 = lVar14 + _UNK_00282378;
   if (puVar2[4] == 0) {
      pVVar4 = (Version*)*puVar2;
      uVar8 = *(uint*)( puVar2 + 3 );
      uVar5 = puVar2[1];
      lVar9 = *(long*)( pVVar4 + 0x18 );
      if ((int)uVar8 < 0) {
         if (lVar9 == 0) goto LAB_00100880;
         lVar9 = *(long*)( lVar9 + -8 );
         LAB_001006ed:_err_print_index_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa6, (long)(int)uVar8, lVar9, "p_variant", "variant_defines.size()", "", false, false);
         *(undefined8*)( lVar3 + 0x10 + lVar18 * 0x58 ) = 0;
         LAB_001005c9:_err_print_error("create_pipeline_rd", "servers/rendering/renderer_rd/effects/fsr2.cpp", 0x133, "Condition \"effect_pass.root_signature.shader_rid.is_null()\" is true. Returning: FFX_ERROR_BACKEND_API_ERROR", 0, 0);
      }
 else {
         uVar11 = (ulong)uVar8;
         if (lVar9 == 0) {
            LAB_00100880:lVar9 = 0;
            goto LAB_001006ed;
         }

         lVar9 = *(long*)( lVar9 + -8 );
         if (lVar9 <= (long)uVar11) goto LAB_001006ed;
         lVar9 = *(long*)( pVVar4 + 0x28 );
         uVar12 = uVar11;
         if (lVar9 == 0) {
            LAB_00100740:lVar16 = 0;
            uVar12 = uVar11;
            LAB_0010075e:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar12, lVar16, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar7 = (code*)invalidInstructionException();
            ( *pcVar7 )();
         }

         lVar16 = *(long*)( lVar9 + -8 );
         if (lVar16 <= (long)uVar11) goto LAB_0010075e;
         if (*(char*)( lVar9 + uVar11 ) == '\0') {
            _err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa7, "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()", 0, 0);
            puVar2[2] = 0;
            goto LAB_001005c9;
         }

         if (( uVar5 == 0 ) || ( *(uint*)( pVVar4 + 0xd4 ) <= (uint)uVar5 )) {
            LAB_00100910:_err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xaa, "Parameter \"version\" is null.", 0, 0);
            *(undefined8*)( lVar3 + 0x10 + lVar18 * 0x58 ) = 0;
            goto LAB_001005c9;
         }

         lVar9 = ( ( uVar5 & 0xffffffff ) % ( ulong ) * (uint*)( pVVar4 + 0xd0 ) ) * 0xa0 + *(long*)( *(long*)( pVVar4 + 0xc0 ) + ( ( uVar5 & 0xffffffff ) / ( ulong ) * (uint*)( pVVar4 + 0xd0 ) ) * 8 );
         if (*(int*)( lVar9 + 0x98 ) != (int)( uVar5 >> 0x20 )) {
            if (*(int*)( lVar9 + 0x98 ) + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

            goto LAB_00100910;
         }

         iVar15 = (int)lVar9;
         if (*(char*)( lVar9 + 0x91 ) != '\0') {
            ShaderRD::_initialize_version(pVVar4);
            lVar16 = *(long*)( pVVar4 + 0x78 );
            for (lVar17 = 0; ( lVar16 != 0 && ( lVar17 < *(long*)( lVar16 + -8 ) ) ); lVar17 = lVar17 + 1) {
               if (*(char*)( lVar16 + lVar17 ) == '\0') {
                  ShaderRD::_allocate_placeholders(pVVar4, iVar15);
               }
 else {
                  ShaderRD::_compile_version_start(pVVar4, iVar15);
               }

               lVar16 = *(long*)( pVVar4 + 0x78 );
            }

         }

         lVar17 = *(long*)( pVVar4 + 0x38 );
         if (lVar17 == 0) goto LAB_00100740;
         lVar16 = *(long*)( lVar17 + -8 );
         if (lVar16 <= (long)uVar11) goto LAB_0010075e;
         uVar12 = ( ulong ) * (uint*)( lVar17 + uVar11 * 4 );
         lVar17 = *(long*)( lVar9 + 0x68 );
         if (lVar17 == 0) {
            lVar16 = 0;
            goto LAB_0010075e;
         }

         lVar16 = *(long*)( lVar17 + -8 );
         if (lVar16 <= (long)uVar12) goto LAB_0010075e;
         if (*(long*)( lVar17 + uVar12 * 8 ) != 0) {
            ShaderRD::_compile_version_end(pVVar4, iVar15);
         }

         if (*(char*)( lVar9 + 0x90 ) == '\0') {
            *(undefined8*)( lVar3 + 0x10 + lVar18 * 0x58 ) = 0;
            goto LAB_001005c9;
         }

         lVar9 = *(long*)( lVar9 + 0x88 );
         if (lVar9 == 0) goto LAB_00100740;
         lVar16 = *(long*)( lVar9 + -8 );
         uVar12 = uVar11;
         if (lVar16 <= (long)uVar11) goto LAB_0010075e;
         lVar9 = *(long*)( lVar9 + uVar11 * 8 );
         *(long*)( lVar3 + 0x10 + lVar18 * 0x58 ) = lVar9;
         if (lVar9 == 0) goto LAB_001005c9;
         uVar10 = RenderingDevice::get_singleton();
         local_50 = 0;
         uVar10 = RenderingDevice::compute_pipeline_create(uVar10, puVar2[2], local_58);
         lVar9 = local_50;
         puVar2[4] = uVar10;
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

         if (*(long*)( lVar3 + 0x20 + lVar18 * 0x58 ) != 0) goto LAB_001004aa;
         _err_print_error("create_pipeline_rd", "servers/rendering/renderer_rd/effects/fsr2.cpp", 0x136, "Condition \"effect_pass.pipeline.pipeline_rid.is_null()\" is true. Returning: FFX_ERROR_BACKEND_API_ERROR", 0, 0);
      }

      uVar10 = 0x8000000d;
      goto LAB_00100573;
   }

   LAB_001004aa:*param_4 = lVar19 + lVar3;
   param_4[1] = lVar20 + lVar3;
   pvVar6 = *(void**)( lVar3 + 0x30 + lVar14 );
   if (pvVar6 == (void*)0x0) {
      *(undefined4*)( (long)param_4 + 0x14 ) = 0;
      sVar13 = 0;
      LAB_001004e0:memcpy((void*)( (long)param_4 + 0x85c ), pvVar6, sVar13);
      pvVar6 = *(void**)( lVar3 + 0x40 + lVar14 );
      if (pvVar6 == (void*)0x0) {
         *(undefined4*)( param_4 + 2 ) = 0;
         sVar13 = 0;
      }
 else {
         uVar5 = *(ulong*)( (long)pvVar6 + -8 );
         uVar8 = (uint)uVar5;
         *(uint*)( param_4 + 2 ) = uVar8;
         if (8 < uVar8) {
            _err_print_error("create_pipeline_rd", "servers/rendering/renderer_rd/effects/fsr2.cpp", 0x143, "Condition \"p_out_pipeline->uavCount > 8\" is true. Returning: FFX_ERROR_OUT_OF_RANGE", 0, 0);
            goto LAB_001007ad;
         }

         sVar13 = ( uVar5 & 0xffffffff ) * 0x108;
      }

      memcpy((void*)( (long)param_4 + 0x1c ), pvVar6, sVar13);
      pvVar6 = *(void**)( lVar3 + 0x50 + lVar14 );
      if (pvVar6 == (void*)0x0) {
         *(undefined4*)( param_4 + 3 ) = 0;
         sVar13 = 0;
      }
 else {
         uVar5 = *(ulong*)( (long)pvVar6 + -8 );
         uVar8 = (uint)uVar5;
         *(uint*)( param_4 + 3 ) = uVar8;
         if (2 < uVar8) {
            _err_print_error("create_pipeline_rd", "servers/rendering/renderer_rd/effects/fsr2.cpp", 0x147, "Condition \"p_out_pipeline->constCount > 2\" is true. Returning: FFX_ERROR_OUT_OF_RANGE", 0, 0);
            goto LAB_001007ad;
         }

         sVar13 = ( uVar5 & 0xffffffff ) * 0x108;
      }

      memcpy((void*)( (long)param_4 + 0x18dc ), pvVar6, sVar13);
      if (( ( *param_3 & 2 ) == 0 ) && ( param_2 - 3U < 2 )) {
         wcscpy((wchar_t*)( (long)param_4 + 0xa74 ), L"r_dilated_motion_vectors");
      }

      uVar10 = 0;
   }
 else {
      uVar5 = *(ulong*)( (long)pvVar6 + -8 );
      uVar8 = (uint)uVar5;
      *(uint*)( (long)param_4 + 0x14 ) = uVar8;
      if (uVar8 < 0x11) {
         sVar13 = ( uVar5 & 0xffffffff ) * 0x108;
         goto LAB_001004e0;
      }

      _err_print_error("create_pipeline_rd", "servers/rendering/renderer_rd/effects/fsr2.cpp", 0x13f, "Condition \"p_out_pipeline->srvCount > 16\" is true. Returning: FFX_ERROR_OUT_OF_RANGE", 0, 0);
      LAB_001007ad:uVar10 = 0x8000000b;
   }

   LAB_00100573:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar10;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* get_resource_rd(RID*, wchar_t const*) */RID *get_resource_rd(RID *param_1, wchar_t *param_2) {
   long *plVar1;
   long lVar2;
   int iVar3;
   undefined8 uVar4;
   long lVar5;
   RID *pRVar6;
   long in_FS_OFFSET;
   uint uVar7;
   int local_68;
   undefined4 local_64;
   undefined4 local_60;
   undefined4 local_5c;
   undefined4 local_54;
   uint local_50;
   uint local_48;
   long local_38;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = *(long*)param_2;
   pRVar6 = param_1;
   for (lVar5 = 0x27; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined8*)pRVar6 = 0;
      pRVar6 = pRVar6 + 8;
   }

   if (lVar2 != 0) {
      __wcscpy_chk(param_1 + 8);
      uVar4 = RenderingDevice::get_singleton();
      RenderingDevice::texture_get_format(&local_68, uVar4, *(undefined8*)param_2);
      lVar2 = local_38;
      uVar7 = 0;
      iVar3 = local_50 + 1;
      if (2 < local_50) {
         iVar3 = 0;
      }

      *(int*)( param_1 + 0x108 ) = iVar3;
      if (local_68 - 8U < 0x72) {
         uVar7 = (uint)(byte)CSWTCH_230[local_68 - 8U];
      }

      *(wchar_t**)param_1 = param_2;
      *(undefined4*)( param_1 + 0x120 ) = 0;
      *(undefined4*)( param_1 + 0x11c ) = local_54;
      *(ulong*)( param_1 + 0x10c ) = CONCAT44(local_64, uVar7);
      *(ulong*)( param_1 + 0x114 ) = CONCAT44(local_5c, local_60);
      param_1[0x128] = ( RID )(( byte )(local_48 >> 2) & 1);
      if (local_38 != 0) {
         LOCK();
         plVar1 = (long*)( local_38 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* create_backend_context_rd(FfxFsr2Interface*, void*) */undefined8 create_backend_context_rd(FfxFsr2Interface *param_1, void *param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined8 uVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   undefined1 auStack_48[8];
   long local_40;
   long local_30;
   uVar5 = 0;
   lVar2 = *(long*)( param_1 + 0x60 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(void**)( lVar2 + 0x4f8 ) = param_2;
   while (true) {
      uVar4 = RenderingDevice::get_singleton();
      local_40 = 0;
      uVar4 = RenderingDevice::uniform_buffer_create(uVar4, 0x100, auStack_48, 0);
      lVar3 = local_40;
      *(undefined8*)( lVar2 + ( ( uVar5 & 0xffffffff ) + 0xe ) * 8 ) = uVar4;
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

      if (*(long*)( lVar2 + 0x70 + uVar5 * 8 ) == 0) break;
      uVar5 = uVar5 + 1;
      if (uVar5 == 0x90) {
         uVar4 = 0;
         LAB_00100ba0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return uVar4;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

   }
;
   _err_print_error("create_backend_context_rd", "servers/rendering/renderer_rd/effects/fsr2.cpp", 0xb5, "Condition \"scratch.ubo_ring_buffer[i].is_null()\" is true. Returning: FFX_ERROR_BACKEND_API_ERROR", 0, 0);
   uVar4 = 0x8000000d;
   goto LAB_00100ba0;
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
/* CowData<FfxResourceBinding>::_ref(CowData<FfxResourceBinding> const&) [clone .part.0] */void CowData<FfxResourceBinding>::_ref(CowData<FfxResourceBinding> *this, CowData *param_1) {
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
/* CowData<FfxResourceBinding>::_copy_on_write() [clone .isra.0] */void CowData<FfxResourceBinding>::_copy_on_write(CowData<FfxResourceBinding> *this) {
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
   __n = lVar2 * 0x108;
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
/* destroy_resource_rd(FfxFsr2Interface*, FfxResourceInternal) */undefined8 destroy_resource_rd(long param_1, uint param_2) {
   Resources *this;
   code *pcVar1;
   undefined8 uVar2;
   ulong uVar3;
   if (param_2 == 0xffffffff) {
      return 0;
   }

   this * (Resources**)( param_1 + 0x60 );
   if (*(uint*)this <= param_2) {
      _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)param_2, ( ulong ) * (uint*)this, "p_index", "count", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   uVar3 = (ulong)param_2;
   if (*(long*)( *(long*)( this + 8 ) + uVar3 * 8 ) == 0) {
      return 0;
   }

   uVar2 = RenderingDevice::get_singleton();
   if (param_2 < *(uint*)this) {
      RenderingDevice::free(uVar2, *(undefined8*)( *(long*)( this + 8 ) + uVar3 * 8 ));
      RendererRD::FSR2Context::Resources::remove(this, param_2);
      return 0;
   }

   _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar3, ( ulong ) * (uint*)this, "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* unregister_resources_rd(FfxFsr2Interface*) */undefined8 unregister_resources_rd(FfxFsr2Interface *param_1) {
   uint uVar1;
   Resources *this;
   long lVar2;
   code *pcVar3;
   uint uVar4;
   uint *puVar5;
   long lVar6;
   uint *puVar7;
   uint *puVar8;
   this * (Resources**)( param_1 + 0x60 );
   uVar1 = *(uint*)( this + 0x40 );
   if (uVar1 != 0) {
      uVar4 = uVar1 - 1 | uVar1 - 1 >> 1;
      uVar4 = uVar4 >> 2 | uVar4;
      uVar4 = uVar4 >> 4 | uVar4;
      uVar4 = uVar4 | uVar4 >> 8;
      puVar5 = (uint*)Memory::realloc_static((void*)0x0, ( ulong )(( uVar4 | uVar4 >> 0x10 ) + 1) << 2, false);
      if (puVar5 == (uint*)0x0) {
         _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      puVar7 = puVar5;
      if (*(int*)( this + 0x40 ) != 0) {
         lVar2 = *(long*)( this + 0x48 );
         lVar6 = 0;
         do {
            puVar5[lVar6] = *(uint*)( lVar2 + lVar6 * 4 );
            lVar6 = lVar6 + 1;
         }
 while ( (uint)lVar6 < *(uint*)( this + 0x40 ) );
      }

      do {
         puVar8 = puVar7 + 1;
         RendererRD::FSR2Context::Resources::remove(this, *puVar7);
         puVar7 = puVar8;
      }
 while ( puVar5 + uVar1 != puVar8 );
      Memory::free_static(puVar5, false);
   }

   return 0;
}
/* RendererRD::FSR2Effect::~FSR2Effect() */void RendererRD::FSR2Effect::~FSR2Effect(FSR2Effect *this) {
   long *plVar1;
   undefined8 uVar2;
   long lVar3;
   long lVar4;
   FSR2Effect *pFVar5;
   uVar2 = RenderingDevice::get_singleton();
   RenderingDevice::free(uVar2, *(undefined8*)( this + 0x1060 ));
   uVar2 = RenderingDevice::get_singleton();
   RenderingDevice::free(uVar2, *(undefined8*)( this + 0x1068 ));
   lVar3 = 0;
   do {
      lVar4 = lVar3 + 1;
      ShaderRD::version_free(*(undefined8*)( this + lVar3 * 0x58 + 0xd38 ));
      lVar3 = lVar4;
   }
 while ( lVar4 != 9 );
   pFVar5 = this + 0xff8;
   do {
      if (*(long*)( pFVar5 + 0x50 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( pFVar5 + 0x50 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( pFVar5 + 0x50 );
            *(undefined8*)( pFVar5 + 0x50 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (*(long*)( pFVar5 + 0x40 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( pFVar5 + 0x40 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( pFVar5 + 0x40 );
            *(undefined8*)( pFVar5 + 0x40 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (*(long*)( pFVar5 + 0x30 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( pFVar5 + 0x30 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( pFVar5 + 0x30 );
            *(undefined8*)( pFVar5 + 0x30 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      pFVar5 = pFVar5 + -0x58;
   }
 while ( pFVar5 != this + 0xce0 );
   *(undefined***)( this + 0xbc0 ) = &PTR__Fsr2TcrAutogenPassShaderRD_001105b8;
   ShaderRD::~ShaderRD((ShaderRD*)( this + 0xbc0 ));
   *(undefined***)( this + 0xa48 ) = &PTR__Fsr2AutogenReactivePassShaderRD_001104f8;
   ShaderRD::~ShaderRD((ShaderRD*)( this + 0xa48 ));
   *(undefined***)( this + 0x8d0 ) = &PTR__Fsr2ComputeLuminancePyramidPassShaderRD_00110518;
   ShaderRD::~ShaderRD((ShaderRD*)( this + 0x8d0 ));
   *(undefined***)( this + 0x758 ) = &PTR__Fsr2RcasPassShaderRD_00110578;
   ShaderRD::~ShaderRD((ShaderRD*)( this + 0x758 ));
   *(undefined***)( this + 0x5e0 ) = &PTR__Fsr2AccumulatePassShaderRD_001104d8;
   ShaderRD::~ShaderRD((ShaderRD*)( this + 0x5e0 ));
   *(undefined***)( this + 0x468 ) = &PTR__Fsr2AccumulatePassShaderRD_001104d8;
   ShaderRD::~ShaderRD((ShaderRD*)( this + 0x468 ));
   *(undefined***)( this + 0x2f0 ) = &PTR__Fsr2LockPassShaderRD_00110558;
   ShaderRD::~ShaderRD((ShaderRD*)( this + 0x2f0 ));
   *(undefined***)( this + 0x178 ) = &PTR__Fsr2ReconstructPreviousDepthPassShaderRD_00110598;
   ShaderRD::~ShaderRD((ShaderRD*)( this + 0x178 ));
   *(undefined***)this = &PTR__Fsr2DepthClipPassShaderRD_00110538;
   ShaderRD::~ShaderRD((ShaderRD*)this);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::FSR2Effect::upscale(RendererRD::FSR2Effect::Parameters const&) */void RendererRD::FSR2Effect::upscale(FSR2Effect *this, Parameters *param_1) {
   undefined4 uVar1;
   int iVar2;
   long lVar3;
   RID *pRVar4;
   undefined8 *puVar5;
   long in_FS_OFFSET;
   byte bVar6;
   RID aRStack_be8[320];
   undefined8 local_aa8;
   undefined8 local_aa0;
   undefined8 local_a98;
   undefined8 local_a90;
   undefined8 local_a88;
   undefined8 local_a80;
   undefined8 local_a78[40];
   undefined8 local_938[39];
   undefined8 local_800[39];
   undefined8 local_6c8[39];
   undefined8 local_590[39];
   undefined8 local_458[39];
   undefined8 local_320[39];
   undefined8 local_1e8;
   undefined8 uStack_1e0;
   undefined8 local_1d8;
   undefined1 local_1d0;
   undefined8 local_1cc;
   undefined4 local_1c4;
   Parameters local_1c0;
   undefined8 local_1bc;
   undefined4 local_1b4;
   undefined4 local_1b0;
   undefined1 local_1ac;
   undefined8 local_1a8[39];
   undefined4 local_70;
   undefined4 uStack_6c;
   undefined4 uStack_68;
   undefined4 uStack_64;
   undefined8 local_60;
   undefined8 uStack_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   undefined8 uStack_38;
   undefined8 local_30;
   undefined8 uStack_28;
   long local_20;
   bVar6 = 0;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar5 = local_a78;
   for (lVar3 = 0x14b; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
   }

   local_aa8 = *(undefined8*)( param_1 + 0x10 );
   local_aa0 = *(undefined8*)( param_1 + 0x18 );
   local_a98 = *(undefined8*)( param_1 + 0x20 );
   local_a90 = *(undefined8*)( param_1 + 0x28 );
   local_a88 = *(undefined8*)( param_1 + 0x30 );
   local_a80 = *(undefined8*)( param_1 + 0x38 );
   get_resource_rd(aRStack_be8, (wchar_t*)&local_aa8);
   pRVar4 = aRStack_be8;
   puVar5 = local_a78 + 1;
   for (lVar3 = 0x27; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *(undefined8*)pRVar4;
      pRVar4 = (RID*)( (long)pRVar4 + ( (ulong)bVar6 * -2 + 1 ) * 8 );
      puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
   }

   get_resource_rd(aRStack_be8, (wchar_t*)&local_aa0);
   pRVar4 = aRStack_be8;
   puVar5 = local_938;
   for (lVar3 = 0x27; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *(undefined8*)pRVar4;
      pRVar4 = (RID*)( (long)pRVar4 + ( (ulong)bVar6 * -2 + 1 ) * 8 );
      puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
   }

   get_resource_rd(aRStack_be8, (wchar_t*)&local_a98);
   pRVar4 = aRStack_be8;
   puVar5 = local_800;
   for (lVar3 = 0x27; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *(undefined8*)pRVar4;
      pRVar4 = (RID*)( (long)pRVar4 + ( (ulong)bVar6 * -2 + 1 ) * 8 );
      puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
   }

   get_resource_rd(aRStack_be8, (wchar_t*)&local_a90);
   pRVar4 = aRStack_be8;
   puVar5 = local_590;
   for (lVar3 = 0x27; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *(undefined8*)pRVar4;
      pRVar4 = (RID*)( (long)pRVar4 + ( (ulong)bVar6 * -2 + 1 ) * 8 );
      puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
   }

   get_resource_rd(aRStack_be8, (wchar_t*)&local_a88);
   pRVar4 = aRStack_be8;
   puVar5 = local_6c8;
   for (lVar3 = 0x27; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *(undefined8*)pRVar4;
      pRVar4 = (RID*)( (long)pRVar4 + ( (ulong)bVar6 * -2 + 1 ) * 8 );
      puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
   }

   puVar5 = local_458;
   for (lVar3 = 0x27; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
   }

   get_resource_rd(aRStack_be8, (wchar_t*)&local_a80);
   local_1d8 = *(undefined8*)( param_1 + 8 );
   pRVar4 = aRStack_be8;
   puVar5 = local_320;
   for (lVar3 = 0x27; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *(undefined8*)pRVar4;
      pRVar4 = (RID*)( (long)pRVar4 + ( (ulong)bVar6 * -2 + 1 ) * 8 );
      puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
   }

   uVar1 = *(undefined4*)( param_1 + 0x50 );
   puVar5 = local_1a8;
   for (lVar3 = 0x27; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
   }

   local_1c0 = param_1[0x5c];
   local_1ac = 0;
   local_1bc = *(undefined8*)( param_1 + 0x40 );
   uStack_1e0 = CONCAT44((float)(int)( (ulong)local_1d8 >> 0x20 ), (float)*(int*)( param_1 + 8 ));
   local_1e8 = CONCAT44(uVar1, *(undefined4*)( param_1 + 0x4c ));
   local_1cc = CONCAT44(*(undefined4*)( param_1 + 0x54 ), *(float*)( param_1 + 0x58 ));
   local_1b4 = *(undefined4*)( param_1 + 0x48 );
   local_1d0 = __LC79 < *(float*)( param_1 + 0x58 );
   local_1c4 = _LC80;
   local_1b0 = _LC80;
   local_70 = _LC80;
   uStack_6c = _LC80;
   uStack_68 = _LC80;
   uStack_64 = _LC80;
   local_60 = *(undefined8*)( param_1 + 0x60 );
   uStack_58 = *(undefined8*)( param_1 + 0x68 );
   local_50 = *(undefined8*)( param_1 + 0x70 );
   uStack_48 = *(undefined8*)( param_1 + 0x78 );
   local_40 = *(undefined8*)( param_1 + 0x80 );
   uStack_38 = *(undefined8*)( param_1 + 0x88 );
   local_30 = *(undefined8*)( param_1 + 0x90 );
   uStack_28 = *(undefined8*)( param_1 + 0x98 );
   iVar2 = ffxFsr2ContextDispatch(*(long*)param_1 + 0x500, local_a78);
   if (iVar2 != 0) {
      _err_print_error("upscale", "servers/rendering/renderer_rd/effects/fsr2.cpp", 0x376, "Condition \"result != FFX_OK\" is true.", 0, 0);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* register_resource_rd(FfxFsr2Interface*, FfxResource const*, FfxResourceInternal*) */undefined8 register_resource_rd(FfxFsr2Interface *param_1, FfxResource *param_2, FfxResourceInternal *param_3) {
   long *plVar1;
   undefined4 uVar2;
   undefined8 in_R8;
   undefined8 in_R9;
   plVar1 = *(long**)param_2;
   if (plVar1 == (long*)0x0) {
      *(undefined4*)param_3 = 0xffffffff;
   }
 else {
      if (*plVar1 == 0) {
         _err_print_error("register_resource_rd", "servers/rendering/renderer_rd/effects/fsr2.cpp", 0x104, "Condition \"rid.is_null()\" is true. Returning: FFX_ERROR_INVALID_ARGUMENT", 0, 0);
         return 0x8000000a;
      }

      uVar2 = RendererRD::FSR2Context::Resources::add(*(undefined8*)( param_1 + 0x60 ), *plVar1, 1, 0xffffffff, in_R8, in_R9, *(undefined8*)( param_2 + 0x108 ), (int)*(undefined8*)( param_2 + 0x110 ), (int)( ( ulong ) * (undefined8*)( param_2 + 0x114 ) >> 0x20 ), (int)( ( ulong ) * (undefined8*)( param_2 + 0x11c ) >> 0x20 ));
      *(undefined4*)param_3 = uVar2;
   }

   return 0;
}
/* RendererRD::FSR2Context::~FSR2Context() */void RendererRD::FSR2Context::~FSR2Context(FSR2Context *this) {
   ffxFsr2ContextDestroy(this + 0x500);
   for (int i = 0; i < 5; i++) {
      if (*(void**)( this + ( -16*i + 104 ) ) != (void*)0) {
         if (*(int*)( this + ( -16*i + 96 ) ) != 0) {
            *(undefined4*)( this + ( -16*i + 96 ) ) = 0;
         }

         Memory::free_static(*(void**)( this + ( -16*i + 104 ) ), false);
      }

   }

   if (*(long*)( this + 0x18 ) != 0) {
      LocalVector<LocalVector<RID,unsigned_int,false,false>,unsigned_int,false,false>::resize((LocalVector<LocalVector<RID,unsigned_int,false,false>,unsigned_int,false,false>*)( this + 0x10 ), 0);
      if (*(void**)( this + 0x18 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 0x18 ), false);
      }

   }

   if (*(void**)( this + 8 ) != (void*)0x0) {
      if (*(int*)this != 0) {
         *(undefined4*)this = 0;
      }

      Memory::free_static(*(void**)( this + 8 ), false);
      return;
   }

   return;
}
/* RendererRD::FSR2Effect::create_context(Vector2i, Vector2i) */Scratch * __thiscall
RendererRD::FSR2Effect::create_context(FSR2Effect *this,undefined8 param_2,undefined8 param_3){
   int iVar1;
   Scratch *this_00;
   ulong uVar2;
   undefined8 *puVar3;
   byte bVar4;
   bVar4 = 0;
   this_00 = (Scratch*)operator_new(0x107f8, "");
   *(undefined8*)this_00 = 0;
   for (int i = 0; i < 7; i++) {
      *(undefined8*)( this_00 + ( 16*i + 8 ) ) = 0;
      *(undefined8*)( this_00 + ( 16*i + 16 ) ) = 0;
   }

   *(undefined8*)( this_00 + 0x4e8 ) = 0;
   puVar3 = (undefined8*)( ( ulong )(this_00 + 0x78) & 0xfffffffffffffff8 );
   for (uVar2 = ( ulong )(( (int)this_00 - (int)(undefined8*)( ( ulong )(this_00 + 0x78) & 0xfffffffffffffff8 ) ) + 0x4f0U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
   }

   *(FSR2Effect**)( this_00 + 0x107e8 ) = this + 0xd38;
   *(undefined4*)( this_00 + 0x4f0 ) = 0;
   *(undefined8*)( this_00 + 0x4f8 ) = 0;
   *(code**)( this_00 + 0x10778 ) = create_backend_context_rd;
   *(undefined8*)( this_00 + 0x10780 ) = 0x100000;
   *(undefined4*)( this_00 + 0x10760 ) = 9;
   *(code**)( this_00 + 0x10788 ) = destroy_backend_context_rd;
   *(code**)( this_00 + 0x10790 ) = create_resource_rd;
   *(undefined8*)( this_00 + 0x10764 ) = param_2;
   *(code**)( this_00 + 0x10798 ) = register_resource_rd;
   *(code**)( this_00 + 0x107a0 ) = unregister_resources_rd;
   *(undefined8*)( this_00 + 0x1076c ) = param_3;
   *(code**)( this_00 + 0x107a8 ) = get_resource_description_rd;
   *(code**)( this_00 + 0x107b0 ) = destroy_resource_rd;
   *(Scratch**)( this_00 + 0x107d8 ) = this_00;
   *(code**)( this_00 + 0x107b8 ) = create_pipeline_rd;
   *(code**)( this_00 + 0x107c0 ) = destroy_pipeline_rd;
   *(undefined8*)( this_00 + 0x107e0 ) = 0x500;
   *(code**)( this_00 + 0x107c8 ) = schedule_gpu_job_rd;
   *(code**)( this_00 + 0x107d0 ) = execute_gpu_jobs_rd;
   iVar1 = ffxFsr2ContextCreate(this_00 + 0x500);
   if (iVar1 == 0) {
      return this_00;
   }

   ffxFsr2ContextDestroy(this_00 + 0x500);
   FSR2Context::Scratch::~Scratch(this_00);
   Memory::free_static(this_00, false);
   return (Scratch*)0x0;
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
/* CowData<Vector<unsigned char> >::_copy_on_write() [clone .isra.0] */void CowData<Vector<unsigned_char>>::_copy_on_write(CowData<Vector<unsigned_char>> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   long lVar4;
   ulong uVar5;
   CowData<unsigned_char> *this_00;
   long lVar6;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   if (lVar1 * 0x10 != 0) {
      uVar5 = lVar1 * 0x10 - 1;
      uVar5 = uVar5 | uVar5 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar3 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar3 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   this_00 = (CowData<unsigned_char>*)( puVar3 + 3 );
   lVar6 = 0;
   *puVar3 = 1;
   puVar3[1] = lVar1;
   if (lVar1 != 0) {
      do {
         lVar4 = lVar6 * 0x10 + *(long*)this;
         *(undefined8*)this_00 = 0;
         if (*(long*)( lVar4 + 8 ) != 0) {
            CowData<unsigned_char>::_ref(this_00, (CowData*)( lVar4 + 8 ));
         }

         lVar6 = lVar6 + 1;
         this_00 = this_00 + 0x10;
      }
 while ( lVar1 != lVar6 );
   }

   _unref(this);
   *(undefined8**)this = puVar3 + 2;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* execute_gpu_job_compute_rd(RendererRD::FSR2Context::Scratch&, FfxComputeJobDescription const&) */undefined8 execute_gpu_job_compute_rd(Scratch *param_1, FfxComputeJobDescription *param_2) {
   long *plVar1;
   undefined4 *puVar2;
   undefined4 uVar3;
   long *plVar4;
   long *plVar5;
   code *pcVar6;
   UniformSetCacheRD *pUVar7;
   undefined8 uVar8;
   long lVar9;
   undefined8 uVar10;
   ulong uVar11;
   void *pvVar12;
   undefined8 uVar13;
   uint uVar14;
   long lVar15;
   uint uVar16;
   ulong uVar17;
   uint uVar18;
   uint *puVar19;
   FfxComputeJobDescription *pFVar20;
   uint uVar21;
   long lVar22;
   FfxComputeJobDescription *pFVar23;
   uint *in_FS_OFFSET;
   undefined8 local_98;
   undefined1 local_90;
   long local_88;
   undefined8 local_78;
   undefined8 local_68;
   ulong uStack_60;
   long local_58;
   undefined8 local_48;
   long local_40;
   pUVar7 = UniformSetCacheRD::singleton;
   local_40 = *(long*)( in_FS_OFFSET + 10 );
   if (UniformSetCacheRD::singleton == (UniformSetCacheRD*)0x0) {
      _err_print_error("execute_gpu_job_compute_rd", "servers/rendering/renderer_rd/effects/fsr2.cpp", 0x185, "Parameter \"uniform_set_cache\" is null.", 0, 0);
      uVar8 = 0x8000000d;
   }
 else {
      plVar4 = *(long**)param_2;
      if (*plVar4 == 0) {
         _err_print_error("execute_gpu_job_compute_rd", "servers/rendering/renderer_rd/effects/fsr2.cpp", 0x188, "Condition \"root_signature.shader_rid.is_null()\" is true. Returning: FFX_ERROR_INVALID_ARGUMENT", 0, 0);
      }
 else {
         plVar5 = *(long**)( param_2 + 8 );
         if (*plVar5 != 0) {
            if ((char)*in_FS_OFFSET == '\0') {
               uVar8 = *(undefined8*)in_FS_OFFSET;
               in_FS_OFFSET[0] = 0;
               in_FS_OFFSET[1] = 0;
               in_FS_OFFSET[0] = 0;
               in_FS_OFFSET[1] = 0;
               *(undefined1*)in_FS_OFFSET = 1;
               __cxa_thread_atexit(LocalVector<RenderingDevice::Uniform,unsigned_int,false,false>::~LocalVector, uVar8, &__dso_handle);
               uVar21 = *in_FS_OFFSET;
            }
 else {
               uVar21 = *in_FS_OFFSET;
            }

            if (uVar21 != 0) {
               lVar22 = 0;
               uVar21 = 0;
               do {
                  lVar15 = *(long*)( in_FS_OFFSET + 2 ) + lVar22;
                  if (*(long*)( lVar15 + 0x20 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( lVar15 + 0x20 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar9 = *(long*)( lVar15 + 0x20 );
                        *(undefined8*)( lVar15 + 0x20 ) = 0;
                        Memory::free_static((void*)( lVar9 + -0x10 ), false);
                     }

                  }

                  uVar21 = uVar21 + 1;
                  lVar22 = lVar22 + 0x28;
               }
 while ( uVar21 < *in_FS_OFFSET );
               *in_FS_OFFSET = 0;
            }

            pFVar23 = param_2 + 0x85c;
            lVar22 = 0;
            if (*(int*)( param_2 + 0x14 ) != 0) {
               do {
                  uVar11 = ( ulong ) * (uint*)( param_2 + lVar22 * 4 + 0x1afc );
                  uVar17 = ( ulong ) * (uint*)param_1;
                  if (*(uint*)param_1 <= *(uint*)( param_2 + lVar22 * 4 + 0x1afc )) goto LAB_00102260;
                  uVar3 = *(undefined4*)pFVar23;
                  pvVar12 = *(void**)in_FS_OFFSET;
                  uVar8 = *(undefined8*)( *(long*)( param_1 + 8 ) + uVar11 * 8 );
                  uVar21 = *in_FS_OFFSET;
                  if (*in_FS_OFFSET == uVar21) {
                     uVar11 = ( ulong )(uVar21 * 2);
                     if (uVar21 * 2 == 0) {
                        uVar11 = 1;
                     }

                     *in_FS_OFFSET = (uint)uVar11;
                     pvVar12 = (void*)Memory::realloc_static(pvVar12, uVar11 * 0x28, false);
                     *(void**)in_FS_OFFSET = pvVar12;
                     if (pvVar12 == (void*)0x0) goto LAB_0010279f;
                     uVar21 = *in_FS_OFFSET;
                  }

                  lVar22 = lVar22 + 1;
                  pFVar23 = pFVar23 + 0x108;
                  puVar2 = (undefined4*)( (long)pvVar12 + (ulong)uVar21 * 0x28 );
                  *in_FS_OFFSET = uVar21 + 1;
                  *puVar2 = 2;
                  puVar2[1] = uVar3;
                  *(undefined1*)( puVar2 + 2 ) = 0;
                  *(undefined8*)( puVar2 + 4 ) = uVar8;
                  *(undefined8*)( puVar2 + 8 ) = 0;
               }
 while ( (uint)lVar22 < *(uint*)( param_2 + 0x14 ) );
            }

            if (*(int*)( param_2 + 0x10 ) == 0) {
               LAB_00102563:if (*(int*)( param_2 + 0x18 ) != 0) {
                  pFVar23 = param_2 + 0x3380;
                  pFVar20 = param_2 + 0x18dc;
                  uVar21 = 0;
                  do {
                     uVar8 = *(undefined8*)( param_1 + ( ulong ) * (uint*)( param_1 + 0x4f0 ) * 8 + 0x70 );
                     *(uint*)( param_1 + 0x4f0 ) = ( *(uint*)( param_1 + 0x4f0 ) + 1 ) % 0x90;
                     uVar10 = RenderingDevice::get_singleton();
                     RenderingDevice::buffer_update(uVar10, uVar8, 0, *(int*)( pFVar23 + -4 ) * 4, pFVar23);
                     uVar14 = *in_FS_OFFSET;
                     uVar3 = *(undefined4*)pFVar20;
                     if (uVar14 == in_FS_OFFSET[1]) {
                        uVar11 = ( ulong )(uVar14 * 2);
                        if (uVar14 * 2 == 0) {
                           uVar11 = 1;
                        }

                        in_FS_OFFSET[1] = (uint)uVar11;
                        lVar22 = Memory::realloc_static(*(void**)( in_FS_OFFSET + 2 ), uVar11 * 0x28, false);
                        *(long*)( in_FS_OFFSET + 2 ) = lVar22;
                        if (lVar22 == 0) {
                           LAB_0010279f:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                           _err_flush_stdout();
                           /* WARNING: Does not return */
                           pcVar6 = (code*)invalidInstructionException();
                           ( *pcVar6 )();
                        }

                        uVar14 = *in_FS_OFFSET;
                     }
 else {
                        lVar22 = *(long*)( in_FS_OFFSET + 2 );
                     }

                     uVar21 = uVar21 + 1;
                     pFVar23 = pFVar23 + 0x104;
                     puVar2 = (undefined4*)( lVar22 + (ulong)uVar14 * 0x28 );
                     *in_FS_OFFSET = uVar14 + 1;
                     pFVar20 = pFVar20 + 0x108;
                     *puVar2 = 7;
                     puVar2[1] = uVar3;
                     *(undefined1*)( puVar2 + 2 ) = 0;
                     *(undefined8*)( puVar2 + 4 ) = uVar8;
                     *(undefined8*)( puVar2 + 8 ) = 0;
                  }
 while ( uVar21 < *(uint*)( param_2 + 0x18 ) );
               }

               lVar22 = *(long*)( *(long*)( param_1 + 0x4f8 ) + 0x328 );
               lVar15 = *(long*)( *(long*)( param_1 + 0x4f8 ) + 0x330 );
               RenderingDevice::get_singleton();
               uVar8 = RenderingDevice::compute_list_begin();
               uVar10 = RenderingDevice::get_singleton();
               RenderingDevice::compute_list_bind_compute_pipeline(uVar10, uVar8, *plVar5);
               uVar10 = RenderingDevice::get_singleton();
               uStack_60 = uStack_60 & 0xffffffffffffff00;
               local_48 = 0;
               local_68 = _LC110;
               local_98 = 0;
               local_90 = 0;
               local_78 = 0;
               local_88 = lVar22;
               local_58 = lVar15;
               uVar13 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>(pUVar7, *plVar4, 0, &local_98, &local_68);
               RenderingDevice::compute_list_bind_uniform_set(uVar10, uVar8, uVar13, 0);
               uVar10 = RenderingDevice::get_singleton();
               uVar13 = UniformSetCacheRD::get_cache_vec<>(pUVar7, *plVar4, 1, *(undefined8*)in_FS_OFFSET);
               RenderingDevice::compute_list_bind_uniform_set(uVar10, uVar8, uVar13, 1);
               lVar22 = RenderingDevice::get_singleton();
               RenderingDevice::compute_list_dispatch(lVar22, (uint)uVar8, *(uint*)( param_2 + 0x1af0 ), *(uint*)( param_2 + 0x1af4 ));
               RenderingDevice::get_singleton();
               RenderingDevice::compute_list_end();
               uVar8 = 0;
               goto LAB_001026d2;
            }

            pFVar23 = param_2 + 0x1c;
            lVar22 = 0;
            LAB_00102354:uVar21 = *(uint*)( param_2 + lVar22 * 4 + 0x2b3c );
            uVar17 = ( ulong ) * (uint*)param_1;
            if (*(uint*)param_1 <= uVar21) {
               uVar11 = (ulong)uVar21;
               goto LAB_00102260;
            }

            uVar11 = (ulong)uVar21;
            uVar3 = *(undefined4*)pFVar23;
            lVar15 = *(long*)( *(long*)( param_1 + 8 ) + uVar11 * 8 );
            uVar14 = *(uint*)( param_2 + lVar22 * 4 + 0x2b5c );
            lVar9 = lVar15;
            if (uVar14 != 0) {
               uVar16 = *(uint*)( param_1 + 0x10 );
               if (uVar16 <= uVar21) {
                  LAB_001028ac:uVar17 = (ulong)uVar16;
                  LAB_00102260:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar11, uVar17, "p_index", "count", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar6 = (code*)invalidInstructionException();
                  ( *pcVar6 )();
               }

               puVar19 = (uint*)( uVar11 * 0x10 + *(long*)( param_1 + 0x18 ) );
               uVar16 = *puVar19;
               if (uVar16 == 0) {
                  uVar16 = *(uint*)( param_1 + 0x30 );
                  if (uVar16 <= uVar21) goto LAB_001028ac;
                  uVar16 = *(uint*)( *(long*)( param_1 + 0x38 ) + uVar11 * 0x1c + 0x14 );
                  if (uVar16 != 0) {
                     uVar18 = uVar16 - 1;
                     uVar21 = 0;
                     if (puVar19[1] < uVar16) {
                        pvVar12 = *(void**)( puVar19 + 2 );
                        uVar21 = uVar18 >> 1 | uVar18;
                        uVar21 = uVar21 >> 2 | uVar21;
                        uVar21 = uVar21 | uVar21 >> 4;
                        uVar21 = uVar21 | uVar21 >> 8;
                        uVar21 = ( uVar21 >> 0x10 | uVar21 ) + 1;
                        puVar19[1] = uVar21;
                        lVar9 = Memory::realloc_static(pvVar12, (ulong)uVar21 * 8, false);
                        *(long*)( puVar19 + 2 ) = lVar9;
                        if (lVar9 == 0) {
                           _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0, pvVar12);
                           _err_flush_stdout();
                           /* WARNING: Does not return */
                           pcVar6 = (code*)invalidInstructionException();
                           ( *pcVar6 )();
                        }

                        uVar21 = *puVar19;
                        uVar14 = *(uint*)( param_2 + lVar22 * 4 + 0x2b5c );
                        if (uVar21 < uVar16) goto LAB_001023e4;
                     }
 else {
                        LAB_001023e4:memset((void*)( *(long*)( puVar19 + 2 ) + (ulong)uVar21 * 8 ), 0, ( ulong )(uVar18 - uVar21) * 8 + 8);
                     }

                     *puVar19 = uVar16;
                     goto LAB_00102430;
                  }

               }
 else {
                  LAB_00102430:if (uVar14 < uVar16) {
                     lVar9 = *(long*)( *(long*)( puVar19 + 2 ) + (ulong)uVar14 * 8 );
                     if (lVar9 == 0) {
                        uVar8 = RenderingDevice::get_singleton();
                        local_58 = CONCAT44(local_58._4_4_, 6);
                        local_68 = __LC108;
                        uStack_60 = _UNK_00282388;
                        lVar9 = RenderingDevice::texture_create_shared_from_slice(uVar8, &local_68, lVar15, 0, *(undefined4*)( param_2 + lVar22 * 4 + 0x2b5c ), 1, 0, 0);
                        uVar21 = *(uint*)( param_2 + lVar22 * 4 + 0x2b5c );
                        uVar17 = ( ulong ) * puVar19;
                        if (uVar21 < *puVar19) {
                           *(long*)( *(long*)( puVar19 + 2 ) + (ulong)uVar21 * 8 ) = lVar9;
                           if (lVar9 != 0) goto LAB_001024f3;
                           _err_print_error("execute_gpu_job_compute_rd", "servers/rendering/renderer_rd/effects/fsr2.cpp", 0x1a8, "Condition \"mip_slice_rids[p_job.uavMip[i]].is_null()\" is true. Returning: FFX_ERROR_BACKEND_API_ERROR", 0, 0);
                           uVar8 = 0x8000000d;
                           goto LAB_001026d2;
                        }

                        uVar11 = (ulong)uVar21;
                        goto LAB_00102260;
                     }

                     goto LAB_001024f3;
                  }

               }

               _err_print_error("execute_gpu_job_compute_rd", "servers/rendering/renderer_rd/effects/fsr2.cpp", 0x1a2, "Condition \"p_job.uavMip[i] >= mip_slice_rids.size()\" is true. Returning: FFX_ERROR_INVALID_ARGUMENT", 0, 0);
               uVar8 = 0x8000000a;
               goto LAB_001026d2;
            }

            LAB_001024f3:uVar21 = *in_FS_OFFSET;
            pvVar12 = *(void**)in_FS_OFFSET;
            local_88 = lVar9;
            local_58 = lVar9;
            if (uVar21 == *in_FS_OFFSET) {
               uVar11 = ( ulong )(uVar21 * 2);
               if (uVar21 * 2 == 0) {
                  uVar11 = 1;
               }

               *in_FS_OFFSET = (uint)uVar11;
               pvVar12 = (void*)Memory::realloc_static(pvVar12, uVar11 * 0x28, false);
               *(void**)in_FS_OFFSET = pvVar12;
               if (pvVar12 == (void*)0x0) goto LAB_0010279f;
               uVar21 = *in_FS_OFFSET;
            }

            lVar22 = lVar22 + 1;
            pFVar23 = pFVar23 + 0x108;
            *in_FS_OFFSET = uVar21 + 1;
            puVar2 = (undefined4*)( (long)pvVar12 + (ulong)uVar21 * 0x28 );
            *puVar2 = 3;
            puVar2[1] = uVar3;
            *(undefined1*)( puVar2 + 2 ) = 0;
            *(long*)( puVar2 + 4 ) = local_58;
            *(undefined8*)( puVar2 + 8 ) = 0;
            if (*(uint*)( param_2 + 0x10 ) <= (uint)lVar22) goto LAB_00102563;
            goto LAB_00102354;
         }

         _err_print_error("execute_gpu_job_compute_rd", "servers/rendering/renderer_rd/effects/fsr2.cpp", 0x18b, "Condition \"backend_pipeline.pipeline_rid.is_null()\" is true. Returning: FFX_ERROR_INVALID_ARGUMENT", 0, 0);
      }

      uVar8 = 0x8000000a;
   }

   LAB_001026d2:if (local_40 == *(long*)( in_FS_OFFSET + 10 )) {
      return uVar8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* execute_gpu_jobs_rd(FfxFsr2Interface*, void*) */undefined8 execute_gpu_jobs_rd(FfxFsr2Interface *param_1, void *param_2) {
   FfxComputeJobDescription *pFVar1;
   int *piVar2;
   uint uVar3;
   Scratch *pSVar4;
   FfxComputeJobDescription *pFVar5;
   code *pcVar6;
   uint uVar7;
   uint uVar8;
   undefined8 uVar9;
   ulong uVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   FfxComputeJobDescription *pFVar13;
   uint uVar14;
   ulong uVar15;
   ulong uVar16;
   ulong uVar17;
   long in_FS_OFFSET;
   undefined8 *puVar18;
   undefined8 local_78;
   float local_70;
   undefined8 local_68;
   undefined4 local_60;
   undefined8 local_58;
   ulong uStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (FfxFsr2Interface*)0x0) {
      _err_print_error("execute_gpu_jobs_rd", "servers/rendering/renderer_rd/effects/fsr2.cpp", 0x1cb, "Parameter \"p_backend_interface\" is null.", 0, 0);
      uVar9 = 0x8000000a;
   }
 else {
      pSVar4 = *(Scratch**)( param_1 + 0x60 );
      uVar8 = *(uint*)( pSVar4 + 0x60 );
      pFVar5 = *(FfxComputeJobDescription**)( pSVar4 + 0x68 );
      if (pFVar5 + (ulong)uVar8 * 0x3798 == pFVar5) {
         LAB_00102d77:if (uVar8 != 0) {
            *(undefined4*)( pSVar4 + 0x60 ) = 0;
         }

         uVar9 = 0;
      }
 else {
         uVar7 = *(uint*)pFVar5;
         pFVar13 = pFVar5 + 8;
         if (uVar7 == 1) goto LAB_00102b9b;
         while (uVar7 == 2) {
            uVar9 = execute_gpu_job_compute_rd(pSVar4, pFVar13);
            if ((int)uVar9 != 0) goto LAB_00102aa9;
            LAB_00102b73:while (true) {
               pFVar1 = pFVar13 + 0x3798;
               if (pFVar5 + (ulong)uVar8 * 0x3798 == pFVar13 + 0x3790) {
                  uVar8 = *(uint*)( pSVar4 + 0x60 );
                  goto LAB_00102d77;
               }

               uVar7 = *(uint*)( pFVar13 + 0x3790 );
               pFVar13 = pFVar1;
               if (uVar7 != 1) break;
               LAB_00102b9b:uVar7 = *(uint*)pFVar13;
               uVar14 = *(uint*)pSVar4;
               uVar16 = (ulong)uVar14;
               uVar3 = *(uint*)( pFVar13 + 4 );
               if (uVar14 <= uVar7) {
                  uVar10 = (ulong)uVar7;
                  goto LAB_00102d1d;
               }

               uVar15 = (ulong)uVar7;
               uVar9 = *(undefined8*)( *(long*)( pSVar4 + 8 ) + uVar15 * 8 );
               uVar10 = (ulong)uVar3;
               if (uVar14 <= uVar3) goto LAB_00102d1d;
               uVar14 = *(uint*)( pSVar4 + 0x30 );
               uVar16 = (ulong)uVar14;
               uVar17 = (ulong)uVar3;
               uVar11 = *(undefined8*)( *(long*)( pSVar4 + 8 ) + uVar17 * 8 );
               uVar10 = uVar15;
               if (uVar14 <= uVar7) goto LAB_00102d1d;
               piVar2 = (int*)( *(long*)( pSVar4 + 0x38 ) + uVar15 * 0x1c );
               uVar10 = uVar17;
               if (uVar14 <= uVar3) goto LAB_00102d1d;
               if (*piVar2 == 0) {
                  _err_print_error("execute_gpu_job_copy_rd", "servers/rendering/renderer_rd/effects/fsr2.cpp", 0x179, "Condition \"src_desc.type == FFX_RESOURCE_TYPE_BUFFER\" is true. Returning: FFX_ERROR_INVALID_ARGUMENT", 0, 0);
                  goto LAB_00102aa4;
               }

               if (*(int*)( *(long*)( pSVar4 + 0x38 ) + uVar17 * 0x1c ) == 0) {
                  _err_print_error("execute_gpu_job_copy_rd", "servers/rendering/renderer_rd/effects/fsr2.cpp", 0x17a, "Condition \"dst_desc.type == FFX_RESOURCE_TYPE_BUFFER\" is true. Returning: FFX_ERROR_INVALID_ARGUMENT", 0, 0);
                  goto LAB_00102aa4;
               }

               if (piVar2[5] != 0) {
                  puVar18 = &local_78;
                  uVar7 = 0;
                  do {
                     uVar12 = RenderingDevice::get_singleton();
                     local_68 = 0;
                     local_70 = (float)(uint)piVar2[4];
                     local_60 = 0;
                     uStack_50 = uStack_50 & 0xffffffff00000000;
                     local_58 = 0;
                     local_78 = CONCAT44((float)(uint)piVar2[3], (float)(uint)piVar2[2]);
                     uVar14 = uVar7 + 1;
                     RenderingDevice::texture_copy(uVar12, uVar9, uVar11, &local_58, &local_68, puVar18, uVar7, uVar7, 0, 0, puVar18);
                     uVar7 = uVar14;
                  }
 while ( uVar14 < (uint)piVar2[5] );
               }

            }
;
         }
;
         if (uVar7 == 0) {
            uVar7 = *(uint*)( pFVar13 + 0x10 );
            uVar16 = ( ulong ) * (uint*)pSVar4;
            uVar10 = (ulong)uVar7;
            if (*(uint*)pSVar4 <= uVar7) {
               LAB_00102d1d:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar10, uVar16, "p_index", "count", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar6 = (code*)invalidInstructionException();
               ( *pcVar6 )();
            }

            uVar16 = ( ulong ) * (uint*)( pSVar4 + 0x30 );
            uVar10 = (ulong)uVar7;
            uVar9 = *(undefined8*)( *(long*)( pSVar4 + 8 ) + uVar10 * 8 );
            if (*(uint*)( pSVar4 + 0x30 ) <= uVar7) goto LAB_00102d1d;
            piVar2 = (int*)( *(long*)( pSVar4 + 0x38 ) + uVar10 * 0x1c );
            if (*piVar2 != 0) {
               local_58 = *(undefined8*)pFVar13;
               uStack_50 = *(ulong*)( pFVar13 + 8 );
               uVar11 = RenderingDevice::get_singleton();
               RenderingDevice::texture_clear(uVar11, uVar9, &local_58, 0, piVar2[5], 0, 1);
               goto LAB_00102b73;
            }

            _err_print_error("execute_gpu_job_clear_float_rd", "servers/rendering/renderer_rd/effects/fsr2.cpp", 0x16b, "Condition \"desc.type == FFX_RESOURCE_TYPE_BUFFER\" is true. Returning: FFX_ERROR_INVALID_ARGUMENT", 0, 0);
         }

         LAB_00102aa4:uVar9 = 0x8000000a;
         LAB_00102aa9:if (*(int*)( pSVar4 + 0x60 ) != 0) {
            *(undefined4*)( pSVar4 + 0x60 ) = 0;
         }

      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar9;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* create_resource_rd(FfxFsr2Interface*, FfxCreateResourceDescription const*, FfxResourceInternal*)
    */undefined8 create_resource_rd(FfxFsr2Interface *param_1, FfxCreateResourceDescription *param_2, FfxResourceInternal *param_3) {
   int *piVar1;
   ulong *__dest;
   uint uVar2;
   int iVar3;
   int iVar4;
   uint uVar5;
   undefined8 uVar6;
   ulong uVar7;
   size_t __n;
   undefined4 uVar8;
   int iVar9;
   TextureFormat *pTVar10;
   long lVar11;
   int *piVar12;
   ulong *puVar13;
   void *pvVar14;
   long *plVar15;
   undefined8 *puVar16;
   undefined8 uVar17;
   ulong uVar18;
   int iVar19;
   size_t __n_00;
   long lVar20;
   long in_FS_OFFSET;
   bool bVar21;
   double dVar22;
   uint uVar23;
   ulong *local_100;
   long local_e0[2];
   long local_d0;
   int *local_c8;
   long lStack_c0;
   undefined4 local_b8;
   undefined8 local_a8;
   undefined4 uStack_a0;
   undefined4 uStack_9c;
   undefined4 uStack_98;
   undefined8 local_94;
   undefined4 local_88;
   uint local_84;
   uint uStack_80;
   uint local_7c;
   undefined4 local_78;
   int local_74;
   uint local_70;
   undefined4 local_6c;
   uint local_68;
   long local_58;
   undefined1 local_50;
   undefined1 local_4f;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)param_2 == 0) {
      pTVar10 = (TextureFormat*)RenderingDevice::get_singleton();
      local_a8 = *(undefined8*)( param_2 + 4 );
      local_94 = *(undefined8*)( param_2 + 0x18 );
      uVar2 = *(uint*)( param_2 + 0x14 );
      iVar19 = *(int*)( param_2 + 0x18 );
      uVar6 = *(undefined8*)( param_1 + 0x60 );
      uStack_a0 = ( undefined4 ) * (undefined8*)( param_2 + 0xc );
      uStack_9c = ( undefined4 ) * (undefined8*)( param_2 + 0x10 );
      uStack_98 = ( undefined4 )(( ulong ) * (undefined8*)( param_2 + 0x10 ) >> 0x20);
      iVar3 = *(int*)( param_2 + 8 );
      uVar7 = *(ulong*)( param_2 + 0xc );
      iVar4 = *(int*)( param_2 + 4 );
      if (iVar4 - 1U < 3) {
         uVar23 = ( uint )(uVar7 >> 0x20);
         if (iVar19 == 0) {
            uVar18 = (ulong)uVar23;
            if (uVar23 < (uint)uVar7) {
               uVar18 = uVar7 & 0xffffffff;
            }

            if ((uint)uVar18 < uVar2) {
               uVar18 = (ulong)uVar2;
            }

            dVar22 = log2((double)uVar18);
            if ((double)( (ulong)dVar22 & _LC125 ) < _LC121) {
               iVar19 = (int)(long)( (double)( ( ulong )((double)(long)dVar22 - (double)( -(ulong)(dVar22 < (double)(long)dVar22) & (ulong)_LC123 )) | ~_LC125 & (ulong)dVar22 ) + _LC123 );
            }
 else {
               iVar19 = (int)(long)( dVar22 + _LC123 );
            }

         }

         uVar5 = *(uint*)( param_2 + 0x24 );
         local_d0 = 0;
         if (uVar5 != 0) {
            uVar18 = (ulong)uVar5 - 1;
            uVar18 = uVar18 | uVar18 >> 1;
            uVar18 = uVar18 | uVar18 >> 2;
            uVar18 = uVar18 | uVar18 >> 4;
            uVar18 = uVar18 | uVar18 >> 8;
            puVar13 = (ulong*)Memory::alloc_static(( uVar18 | uVar18 >> 0x10 ) + 0x11, false);
            if (puVar13 == (ulong*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               __n_00 = (size_t)*(uint*)( param_2 + 0x24 );
               pvVar14 = *(void**)( param_2 + 0x28 );
               local_100 = (ulong*)0x0;
            }
 else {
               local_100 = puVar13 + 2;
               *puVar13 = 1;
               puVar13[1] = (ulong)uVar5;
               pvVar14 = *(void**)( param_2 + 0x28 );
               __n_00 = (size_t)*(uint*)( param_2 + 0x24 );
               if (1 < *puVar13) {
                  __n = puVar13[1];
                  uVar18 = 0x10;
                  if (__n != 0) {
                     uVar18 = __n - 1 | __n - 1 >> 1;
                     uVar18 = uVar18 | uVar18 >> 2;
                     uVar18 = uVar18 | uVar18 >> 4;
                     uVar18 = uVar18 | uVar18 >> 8;
                     uVar18 = uVar18 | uVar18 >> 0x10;
                     uVar18 = ( uVar18 | uVar18 >> 0x20 ) + 0x11;
                  }

                  puVar16 = (undefined8*)Memory::alloc_static(uVar18, false);
                  if (puVar16 == (undefined8*)0x0) {
                     _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
                  }
 else {
                     __dest = puVar16 + 2;
                     *puVar16 = 1;
                     puVar16[1] = __n;
                     memcpy(__dest, local_100, __n);
                     LOCK();
                     *puVar13 = *puVar13 - 1;
                     UNLOCK();
                     local_100 = __dest;
                     if (*puVar13 == 0) {
                        Memory::free_static(puVar13, false);
                     }

                  }

               }

            }

            pvVar14 = memcpy(local_100, pvVar14, __n_00);
            uStack_80 = 0;
            local_7c = 0;
            plVar15 = (long*)( (long)pvVar14 + -0x10 );
            do {
               lVar11 = *plVar15;
               if (lVar11 == 0) goto LAB_00103538;
               LOCK();
               lVar20 = *plVar15;
               bVar21 = lVar11 == lVar20;
               if (bVar21) {
                  *plVar15 = lVar11 + 1;
                  lVar20 = lVar11;
               }

               UNLOCK();
            }
 while ( !bVar21 );
            if (lVar20 == -1) {
               LAB_00103538:local_100 = (ulong*)0x0;
            }
 else {
               uStack_80 = (uint)local_100;
               local_7c = ( uint )((ulong)local_100 >> 0x20);
            }

            if (local_d0 == 0) {
               lVar11 = 1;
            }
 else {
               lVar11 = *(long*)( local_d0 + -8 ) + 1;
            }

            iVar9 = CowData<Vector<unsigned_char>>::resize<false>((CowData<Vector<unsigned_char>>*)&local_d0, lVar11);
            if (iVar9 == 0) {
               if (local_d0 == 0) {
                  lVar20 = -1;
                  lVar11 = 0;
               }
 else {
                  lVar11 = *(long*)( local_d0 + -8 );
                  lVar20 = lVar11 + -1;
                  if (-1 < lVar20) {
                     CowData<Vector<unsigned_char>>::_copy_on_write((CowData<Vector<unsigned_char>>*)&local_d0);
                     lVar11 = lVar20 * 0x10 + local_d0;
                     if (*(ulong**)( lVar11 + 8 ) != local_100) {
                        CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( lVar11 + 8 ), (CowData*)&uStack_80);
                     }

                     goto LAB_001032ea;
                  }

               }

               _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar20, lVar11, "p_index", "size()", "", false, false);
            }
 else {
               _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
            }

            LAB_001032ea:if (local_100 != (ulong*)0x0) {
               LOCK();
               local_100 = local_100 + -2;
               *local_100 = *local_100 - 1;
               UNLOCK();
               if (*local_100 == 0) {
                  Memory::free_static((void*)( CONCAT44(local_7c, uStack_80) + -0x10 ), false);
               }

            }

            LOCK();
            *plVar15 = *plVar15 + -1;
            UNLOCK();
            if (*plVar15 == 0) {
               Memory::free_static(plVar15, false);
            }

         }

         local_78 = 1;
         local_88 = 0xe8;
         local_6c = 0;
         local_50 = 0;
         local_58 = 0;
         if (iVar3 - 1U < 0x13) {
            local_88 = *(undefined4*)( CSWTCH_228 + ( ulong )(iVar3 - 1U) * 4 );
         }

         local_4f = 1;
         local_b8 = 6;
         local_c8 = __LC108;
         lStack_c0 = _UNK_00282388;
         local_68 = ( -(uint)((*(uint *)(param_2 + 0x38) & 1) == 0) & 0xfffffffe ) + 0x43;
         if (( *(uint*)( param_2 + 0x38 ) & 2 ) != 0) {
            local_68 = local_68 | 0x188;
         }

         local_84 = (uint)uVar7;
         uStack_80 = uVar23;
         local_7c = uVar2;
         local_74 = iVar19;
         local_70 = iVar4 - 1U;
         lVar11 = RenderingDevice::texture_create(pTVar10, (TextureView*)&local_88, (Vector*)&local_c8);
         if (lVar11 == 0) {
            uVar17 = 0x8000000d;
            _err_print_error("create_resource_rd", "servers/rendering/renderer_rd/effects/fsr2.cpp", 0xf1, "Condition \"texture.is_null()\" is true. Returning: FFX_ERROR_BACKEND_API_ERROR", 0, 0);
         }
 else {
            local_e0[0] = 0;
            local_c8 = *(int**)( param_2 + 0x30 );
            lStack_c0 = 0;
            if (( local_c8 != (int*)0x0 ) && ( piVar12 = local_c8 * local_c8 != 0 )) {
               do {
                  piVar1 = piVar12 + 1;
                  piVar12 = piVar12 + 1;
               }
 while ( *piVar1 != 0 );
               lStack_c0 = (long)piVar12 - (long)local_c8 >> 2;
            }

            String::parse_utf32((StrRange*)local_e0);
            RenderingDevice::set_resource_name(pTVar10, lVar11, (StrRange*)local_e0);
            lVar20 = local_e0[0];
            if (local_e0[0] != 0) {
               LOCK();
               plVar15 = (long*)( local_e0[0] + -0x10 );
               *plVar15 = *plVar15 + -1;
               UNLOCK();
               if (*plVar15 == 0) {
                  local_e0[0] = 0;
                  Memory::free_static((void*)( lVar20 + -0x10 ), false);
               }

            }

            local_94 = CONCAT44(local_94._4_4_, iVar19);
            uVar17 = 0;
            uVar8 = RendererRD::FSR2Context::Resources::add(uVar6, lVar11, 0, *(undefined4*)( param_2 + 0x3c ));
            *(undefined4*)param_3 = uVar8;
         }

         lVar11 = local_58;
         if (local_58 != 0) {
            LOCK();
            plVar15 = (long*)( local_58 + -0x10 );
            *plVar15 = *plVar15 + -1;
            UNLOCK();
            if (*plVar15 == 0) {
               local_58 = 0;
               Memory::free_static((void*)( lVar11 + -0x10 ), false);
            }

         }

         CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>>*)&local_d0);
         goto LAB_00103114;
      }

      _err_print_error("create_resource_rd", "servers/rendering/renderer_rd/effects/fsr2.cpp", 0xd7, "Condition \"res_desc.type != FFX_RESOURCE_TYPE_TEXTURE1D && res_desc.type != FFX_RESOURCE_TYPE_TEXTURE2D && res_desc.type != FFX_RESOURCE_TYPE_TEXTURE3D\" is true. Returning: FFX_ERROR_INVALID_ARGUMENT", 0, 0);
   }
 else {
      _err_print_error("create_resource_rd", "servers/rendering/renderer_rd/effects/fsr2.cpp", 0xd0, "Condition \"p_create_resource_description->heapType != FFX_HEAP_TYPE_DEFAULT\" is true. Returning: FFX_ERROR_INVALID_ARGUMENT", 0, 0);
   }

   uVar17 = 0x8000000a;
   LAB_00103114:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar17;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::FSR2Effect::FSR2Effect() */void RendererRD::FSR2Effect::FSR2Effect(FSR2Effect *this) {
   long *plVar1;
   char *pcVar2;
   FSR2Effect FVar3;
   char cVar4;
   undefined4 uVar5;
   int iVar6;
   FSR2Effect *pFVar7;
   FSR2Effect *pFVar8;
   undefined8 uVar9;
   long lVar10;
   SamplerState *pSVar11;
   undefined8 *puVar12;
   long lVar13;
   ulong uVar14;
   undefined8 *puVar15;
   undefined8 *puVar16;
   long lVar17;
   long in_FS_OFFSET;
   bool bVar18;
   byte bVar19;
   long local_d20;
   long local_d18;
   long local_d10;
   Vector<String> local_d08[8];
   undefined8 local_d00;
   long local_cf8;
   undefined8 local_cf0;
   char *local_ce8;
   undefined8 *puStack_ce0;
   undefined8 local_cd8;
   undefined4 local_cd0;
   undefined1 local_ccc;
   undefined4 local_cc8;
   undefined1 local_cc4;
   undefined8 local_cc0;
   undefined8 local_cb8;
   undefined1 local_cb0;
   undefined8 local_ca8[32];
   undefined8 local_ba8[365];
   long local_40;
   bVar19 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   {
      unnamed_type
      
      #1
      pFVar7 = this + 0xd38;
      do {
         *(undefined4*)( pFVar7 + 0x18 ) = 0;
         pFVar8 = pFVar7 + 0x58;
         *(undefined1(*) [16])( pFVar7 + 8 ) = (undefined1[16])0x0;
         for (int i = 0; i < 4; i++) {
            *(undefined8*)( pFVar7 + ( 16*i + 32 ) ) = 0;
         }

         pFVar7 = pFVar8;
      }
 while ( pFVar8 != this + 0x1050 );
      *(undefined1(*) [16])( this + 0x1060 ) = (undefined1[16])0x0;
      uVar9 = RenderingDevice::get_singleton();
      lVar10 = RenderingDevice::limit_get(uVar9, 0x25);
      *(undefined4*)( this + 0x1050 ) = 0;
      uVar9 = RenderingDevice::get_singleton();
      uVar5 = RenderingDevice::limit_get(uVar9, 0x26);
      *(undefined4*)( this + 0x1054 ) = uVar5;
      uVar9 = RenderingDevice::get_singleton();
      uVar5 = RenderingDevice::limit_get(uVar9, 0x27);
      *(undefined4*)( this + 0x1058 ) = uVar5;
      uVar9 = RenderingDevice::get_singleton();
      FVar3 = (FSR2Effect)RenderingDevice::has_feature(uVar9, 1);
      this[0x105d] = (FSR2Effect)0x0;
      this[0x105c] = FVar3;
      bVar18 = false;
      if (lVar10 == 0x20) {
         bVar18 = *(int*)( this + 0x1058 ) == 0x40;
      }

      local_d20 = 0;
      puStack_ce0 = (undefined8*)0x127;
      local_ce8 = "\n#define FFX_GPU\n\n#define FFX_GLSL 1\n\n#define FFX_FSR2_OPTION_LOW_RESOLUTION_MOTION_VECTORS 1\n\n#define FFX_FSR2_OPTION_HDR_COLOR_INPUT 1\n\n#define FFX_FSR2_OPTION_INVERTED_DEPTH 1\n\n#define FFX_FSR2_OPTION_GODOT_REACTIVE_MASK_CLAMP 1\n\n#define FFX_FSR2_OPTION_GODOT_DERIVE_INVALID_MOTION_VECTORS 1\n";
      String::parse_latin1((StrRange*)&local_d20);
      if (lVar10 == 0x40 || bVar18) {
         String::operator +=((String*)&local_d20, "\n#define FFX_FSR2_OPTION_REPROJECT_USE_LANCZOS_TYPE 1\n");
      }

      local_d18 = 0;
      plVar1 = (long*)( local_d20 + -0x10 );
      if (local_d20 != 0) {
         do {
            lVar10 = *plVar1;
            if (lVar10 == 0) goto LAB_001037c9;
            LOCK();
            lVar17 = *plVar1;
            bVar18 = lVar10 == lVar17;
            if (bVar18) {
               *plVar1 = lVar10 + 1;
               lVar17 = lVar10;
            }

            UNLOCK();
         }
 while ( !bVar18 );
         if (lVar17 != -1) {
            local_d18 = local_d20;
         }

      }

      LAB_001037c9:if (this[0x105c] != (FSR2Effect)0x0) {
         String::operator +=((String*)&local_d18, "\n#define FFX_HALF 1\n");
      }

      local_d00 = 0;
      local_ce8 = "";
      local_cf8 = 0;
      puStack_ce0 = (undefined8*)0x0;
      String::parse_latin1((StrRange*)&local_cf8);
      Vector<String>::push_back(local_d08);
      lVar10 = local_cf8;
      if (local_cf8 != 0) {
         LOCK();
         plVar1 = (long*)( local_cf8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_cf8 = 0;
            Memory::free_static((void*)( lVar10 + -0x10 ), false);
         }

      }

      *(FSR2Effect**)( this + 0xd38 ) = this;
      puStack_ce0 = (undefined8*)0x0;
      ShaderRD::initialize((Vector*)this, local_d08, (Vector*)&local_d18);
      CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)&puStack_ce0);
      uVar9 = ShaderRD::version_create();
      puStack_ce0 = (undefined8*)0x0;
      *(undefined8*)( this + 0xd40 ) = uVar9;
      puVar15 = &DAT_0010afe0;
      puVar12 = local_ca8;
      for (lVar10 = 0x14a; lVar10 != 0; lVar10 = lVar10 + -1) {
         *puVar12 = *puVar15;
         puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
         puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
      }

      iVar6 = CowData<FfxResourceBinding>::resize<false>((CowData<FfxResourceBinding>*)&puStack_ce0, 10);
      puVar15 = puStack_ce0;
      if (iVar6 == 0) {
         lVar10 = 0;
         lVar17 = 0;
         do {
            if (puVar15 == (undefined8*)0x0) {
               lVar13 = 0;
               LAB_00105c83:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar10, lVar13, "p_index", "size()", "", false, false);
            }
 else {
               lVar13 = *(long*)( (long)puVar15 + -8 );
               if (lVar13 <= lVar10) goto LAB_00105c83;
               CowData<FfxResourceBinding>::_copy_on_write((CowData<FfxResourceBinding>*)&puStack_ce0);
               puVar15 = (undefined8*)( (long)local_ca8 + lVar17 );
               puVar12 = (undefined8*)( (long)puStack_ce0 + lVar17 );
               *puVar12 = *puVar15;
               puVar12[0x20] = *(undefined8*)( (long)local_ba8 + lVar17 );
               lVar13 = (long)puVar12 - (long)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               puVar16 = (undefined8*)( (long)puVar15 - lVar13 );
               puVar12 = (undefined8*)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               for (uVar14 = ( ulong )((int)lVar13 + 0x108U >> 3); puVar15 = puStack_ce0,uVar14 != 0; uVar14 = uVar14 - 1) {
                  *puVar12 = *puVar16;
                  puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
                  puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
               }

            }

            lVar17 = lVar17 + 0x108;
            lVar10 = lVar10 + 1;
         }
 while ( lVar17 != 0xa50 );
      }

      lVar10 = *(long*)( this + 0xd68 );
      if ((undefined8*)lVar10 == puVar15) {
         if (puVar15 != (undefined8*)0x0) {
            LOCK();
            plVar1 = (long*)( (long)puVar15 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( (long)puStack_ce0 + -0x10 ), false);
            }

         }

      }
 else {
         if (lVar10 != 0) {
            LOCK();
            plVar1 = (long*)( lVar10 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            puVar15 = puStack_ce0;
            if (*plVar1 == 0) {
               lVar10 = *(long*)( this + 0xd68 );
               *(undefined8*)( this + 0xd68 ) = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
               puVar15 = puStack_ce0;
            }

         }

         *(undefined8**)( this + 0xd68 ) = puVar15;
      }

      puStack_ce0 = (undefined8*)0x0;
      puVar15 = &DAT_0010ba40;
      puVar12 = local_ca8;
      for (lVar10 = 0x42; lVar10 != 0; lVar10 = lVar10 + -1) {
         *puVar12 = *puVar15;
         puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
         puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
      }

      iVar6 = CowData<FfxResourceBinding>::resize<false>((CowData<FfxResourceBinding>*)&puStack_ce0, 2);
      puVar15 = puStack_ce0;
      if (iVar6 == 0) {
         lVar17 = 0;
         lVar10 = 0;
         do {
            if (puVar15 == (undefined8*)0x0) {
               lVar13 = 0;
               LAB_00105e93:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar10, lVar13, "p_index", "size()", "", false, false);
            }
 else {
               lVar13 = *(long*)( (long)puVar15 + -8 );
               if (lVar13 <= lVar10) goto LAB_00105e93;
               CowData<FfxResourceBinding>::_copy_on_write((CowData<FfxResourceBinding>*)&puStack_ce0);
               puVar15 = (undefined8*)( (long)local_ca8 + lVar17 );
               puVar12 = (undefined8*)( (long)puStack_ce0 + lVar17 );
               *puVar12 = *puVar15;
               puVar12[0x20] = *(undefined8*)( (long)local_ba8 + lVar17 );
               lVar13 = (long)puVar12 - (long)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               puVar16 = (undefined8*)( (long)puVar15 - lVar13 );
               puVar12 = (undefined8*)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               for (uVar14 = ( ulong )((int)lVar13 + 0x108U >> 3); puVar15 = puStack_ce0,uVar14 != 0; uVar14 = uVar14 - 1) {
                  *puVar12 = *puVar16;
                  puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
                  puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
               }

            }

            lVar10 = lVar10 + 1;
            if (lVar17 == 0x108) break;
            lVar17 = 0x108;
         }
 while ( true );
      }

      lVar10 = *(long*)( this + 0xd78 );
      if ((undefined8*)lVar10 == puVar15) {
         if (puVar15 != (undefined8*)0x0) {
            LOCK();
            plVar1 = (long*)( (long)puVar15 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( (long)puStack_ce0 + -0x10 ), false);
            }

         }

      }
 else {
         if (lVar10 != 0) {
            LOCK();
            plVar1 = (long*)( lVar10 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            puVar15 = puStack_ce0;
            if (*plVar1 == 0) {
               lVar10 = *(long*)( this + 0xd78 );
               *(undefined8*)( this + 0xd78 ) = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
               puVar15 = puStack_ce0;
            }

         }

         *(undefined8**)( this + 0xd78 ) = puVar15;
      }

      puStack_ce0 = (undefined8*)0x0;
      puVar15 = &DAT_0010bc60;
      puVar12 = local_ca8;
      for (lVar10 = 0x21; lVar10 != 0; lVar10 = lVar10 + -1) {
         *puVar12 = *puVar15;
         puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
         puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
      }

      iVar6 = CowData<FfxResourceBinding>::resize<false>((CowData<FfxResourceBinding>*)&puStack_ce0, 1);
      puVar15 = puStack_ce0;
      if (iVar6 == 0) {
         if (puStack_ce0 == (undefined8*)0x0) {
            lVar10 = 0;
            LAB_0010560d:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, 0, lVar10, "p_index", "size()", "", false, false);
            goto LAB_00105640;
         }

         lVar10 = puStack_ce0[-1];
         if (lVar10 < 1) goto LAB_0010560d;
         CowData<FfxResourceBinding>::_copy_on_write((CowData<FfxResourceBinding>*)&puStack_ce0);
         *puStack_ce0 = local_ca8[0];
         puStack_ce0[0x20] = local_ba8[0];
         lVar10 = (long)puStack_ce0 - (long)( ( ulong )(puStack_ce0 + 1) & 0xfffffffffffffff8 );
         puVar12 = *(undefined8**)( this + 0xd88 );
         puVar15 = (undefined8*)( (long)local_ca8 - lVar10 );
         puVar16 = (undefined8*)( ( ulong )(puStack_ce0 + 1) & 0xfffffffffffffff8 );
         for (uVar14 = ( ulong )((int)lVar10 + 0x108U >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar16 = *puVar15;
            puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
            puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
         }

         if (puVar12 == puStack_ce0) goto LAB_00105659;
         LAB_00103b45:if (puVar12 != (undefined8*)0x0) {
            LOCK();
            plVar1 = puVar12 + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar10 = *(long*)( this + 0xd88 );
               *(undefined8*)( this + 0xd88 ) = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }

         }

         *(undefined8**)( this + 0xd88 ) = puStack_ce0;
      }
 else {
         LAB_00105640:puVar12 = *(undefined8**)( this + 0xd88 );
         if (puVar15 != puVar12) goto LAB_00103b45;
         if (puVar12 != (undefined8*)0x0) {
            LAB_00105659:LOCK();
            plVar1 = puVar12 + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static(puStack_ce0 + -2, false);
            }

         }

      }

      *(Vector**)( this + 0xd90 ) = (Vector*)( this + 0x178 );
      puStack_ce0 = (undefined8*)0x0;
      ShaderRD::initialize((Vector*)( this + 0x178 ), local_d08, (Vector*)&local_d18);
      CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)&puStack_ce0);
      uVar9 = ShaderRD::version_create();
      puVar15 = &DAT_0010bd80;
      puVar12 = local_ca8;
      for (lVar10 = 0xa5; lVar10 != 0; lVar10 = lVar10 + -1) {
         *puVar12 = *puVar15;
         puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
         puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
      }

      *(undefined8*)( this + 0xd98 ) = uVar9;
      puStack_ce0 = (undefined8*)0x0;
      iVar6 = CowData<FfxResourceBinding>::resize<false>((CowData<FfxResourceBinding>*)&puStack_ce0, 5);
      puVar15 = puStack_ce0;
      if (iVar6 == 0) {
         lVar10 = 0;
         lVar17 = 0;
         do {
            if (puVar15 == (undefined8*)0x0) {
               lVar13 = 0;
               LAB_00105e43:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar10, lVar13, "p_index", "size()", "", false, false);
            }
 else {
               lVar13 = *(long*)( (long)puVar15 + -8 );
               if (lVar13 <= lVar10) goto LAB_00105e43;
               CowData<FfxResourceBinding>::_copy_on_write((CowData<FfxResourceBinding>*)&puStack_ce0);
               puVar15 = (undefined8*)( (long)local_ca8 + lVar17 );
               puVar12 = (undefined8*)( (long)puStack_ce0 + lVar17 );
               *puVar12 = *puVar15;
               puVar12[0x20] = *(undefined8*)( (long)local_ba8 + lVar17 );
               lVar13 = (long)puVar12 - (long)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               puVar16 = (undefined8*)( (long)puVar15 - lVar13 );
               puVar12 = (undefined8*)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               for (uVar14 = ( ulong )((int)lVar13 + 0x108U >> 3); puVar15 = puStack_ce0,uVar14 != 0; uVar14 = uVar14 - 1) {
                  *puVar12 = *puVar16;
                  puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
                  puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
               }

            }

            lVar17 = lVar17 + 0x108;
            lVar10 = lVar10 + 1;
         }
 while ( lVar17 != 0x528 );
      }

      lVar10 = *(long*)( this + 0xdc0 );
      if ((undefined8*)lVar10 == puVar15) {
         if (puVar15 != (undefined8*)0x0) {
            LOCK();
            plVar1 = (long*)( (long)puVar15 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( (long)puStack_ce0 + -0x10 ), false);
            }

         }

      }
 else {
         if (lVar10 != 0) {
            LOCK();
            plVar1 = (long*)( lVar10 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            puVar15 = puStack_ce0;
            if (*plVar1 == 0) {
               lVar10 = *(long*)( this + 0xdc0 );
               *(undefined8*)( this + 0xdc0 ) = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
               puVar15 = puStack_ce0;
            }

         }

         *(undefined8**)( this + 0xdc0 ) = puVar15;
      }

      puStack_ce0 = (undefined8*)0x0;
      puVar15 = &DAT_0010c2c0;
      puVar12 = local_ca8;
      for (lVar10 = 0xc6; lVar10 != 0; lVar10 = lVar10 + -1) {
         *puVar12 = *puVar15;
         puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
         puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
      }

      iVar6 = CowData<FfxResourceBinding>::resize<false>((CowData<FfxResourceBinding>*)&puStack_ce0, 6);
      puVar15 = puStack_ce0;
      if (iVar6 == 0) {
         lVar10 = 0;
         lVar17 = 0;
         do {
            if (puVar15 == (undefined8*)0x0) {
               lVar13 = 0;
               LAB_00105df3:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar10, lVar13, "p_index", "size()", "", false, false);
            }
 else {
               lVar13 = *(long*)( (long)puVar15 + -8 );
               if (lVar13 <= lVar10) goto LAB_00105df3;
               CowData<FfxResourceBinding>::_copy_on_write((CowData<FfxResourceBinding>*)&puStack_ce0);
               puVar15 = (undefined8*)( (long)local_ca8 + lVar17 );
               puVar12 = (undefined8*)( (long)puStack_ce0 + lVar17 );
               *puVar12 = *puVar15;
               puVar12[0x20] = *(undefined8*)( (long)local_ba8 + lVar17 );
               lVar13 = (long)puVar12 - (long)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               puVar16 = (undefined8*)( (long)puVar15 - lVar13 );
               puVar12 = (undefined8*)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               for (uVar14 = ( ulong )((int)lVar13 + 0x108U >> 3); puVar15 = puStack_ce0,uVar14 != 0; uVar14 = uVar14 - 1) {
                  *puVar12 = *puVar16;
                  puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
                  puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
               }

            }

            lVar17 = lVar17 + 0x108;
            lVar10 = lVar10 + 1;
         }
 while ( lVar17 != 0x630 );
      }

      lVar10 = *(long*)( this + 0xdd0 );
      if ((undefined8*)lVar10 == puVar15) {
         if (puVar15 != (undefined8*)0x0) {
            LOCK();
            plVar1 = (long*)( (long)puVar15 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( (long)puStack_ce0 + -0x10 ), false);
            }

         }

      }
 else {
         if (lVar10 != 0) {
            LOCK();
            plVar1 = (long*)( lVar10 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            puVar15 = puStack_ce0;
            if (*plVar1 == 0) {
               lVar10 = *(long*)( this + 0xdd0 );
               *(undefined8*)( this + 0xdd0 ) = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
               puVar15 = puStack_ce0;
            }

         }

         *(undefined8**)( this + 0xdd0 ) = puVar15;
      }

      puStack_ce0 = (undefined8*)0x0;
      puVar15 = &DAT_0010c900;
      puVar12 = local_ca8;
      for (lVar10 = 0x21; lVar10 != 0; lVar10 = lVar10 + -1) {
         *puVar12 = *puVar15;
         puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
         puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
      }

      iVar6 = CowData<FfxResourceBinding>::resize<false>((CowData<FfxResourceBinding>*)&puStack_ce0, 1);
      puVar15 = puStack_ce0;
      if (iVar6 == 0) {
         if (puStack_ce0 == (undefined8*)0x0) {
            lVar10 = 0;
            LAB_0010559d:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, 0, lVar10, "p_index", "size()", "", false, false);
            goto LAB_001055d0;
         }

         lVar10 = puStack_ce0[-1];
         if (lVar10 < 1) goto LAB_0010559d;
         CowData<FfxResourceBinding>::_copy_on_write((CowData<FfxResourceBinding>*)&puStack_ce0);
         *puStack_ce0 = local_ca8[0];
         puStack_ce0[0x20] = local_ba8[0];
         lVar10 = (long)puStack_ce0 - (long)( ( ulong )(puStack_ce0 + 1) & 0xfffffffffffffff8 );
         puVar12 = *(undefined8**)( this + 0xde0 );
         puVar15 = (undefined8*)( (long)local_ca8 - lVar10 );
         puVar16 = (undefined8*)( ( ulong )(puStack_ce0 + 1) & 0xfffffffffffffff8 );
         for (uVar14 = ( ulong )((int)lVar10 + 0x108U >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar16 = *puVar15;
            puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
            puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
         }

         puVar15 = puStack_ce0;
         if (puVar12 == puStack_ce0) goto LAB_001055e9;
         LAB_00103e5e:if (puVar12 != (undefined8*)0x0) {
            LOCK();
            plVar1 = puVar12 + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar10 = *(long*)( this + 0xde0 );
               *(undefined8*)( this + 0xde0 ) = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }

         }

         *(undefined8**)( this + 0xde0 ) = puStack_ce0;
      }
 else {
         LAB_001055d0:puVar12 = *(undefined8**)( this + 0xde0 );
         if (puVar12 != puVar15) goto LAB_00103e5e;
         if (puVar15 != (undefined8*)0x0) {
            LAB_001055e9:LOCK();
            plVar1 = puVar15 + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static(puStack_ce0 + -2, false);
            }

         }

      }

      *(Vector**)( this + 0xde8 ) = (Vector*)( this + 0x2f0 );
      puStack_ce0 = (undefined8*)0x0;
      ShaderRD::initialize((Vector*)( this + 0x2f0 ), local_d08, (Vector*)&local_d18);
      CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)&puStack_ce0);
      uVar9 = ShaderRD::version_create();
      puVar15 = &DAT_0010ca20;
      puVar12 = local_ca8;
      for (lVar10 = 0x21; lVar10 != 0; lVar10 = lVar10 + -1) {
         *puVar12 = *puVar15;
         puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
         puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
      }

      *(undefined8*)( this + 0xdf0 ) = uVar9;
      puStack_ce0 = (undefined8*)0x0;
      iVar6 = CowData<FfxResourceBinding>::resize<false>((CowData<FfxResourceBinding>*)&puStack_ce0, 1);
      puVar15 = puStack_ce0;
      if (iVar6 == 0) {
         if (puStack_ce0 == (undefined8*)0x0) {
            lVar10 = 0;
            LAB_00105525:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, 0, lVar10, "p_index", "size()", "", false, false);
            goto LAB_00105560;
         }

         lVar10 = puStack_ce0[-1];
         if (lVar10 < 1) goto LAB_00105525;
         CowData<FfxResourceBinding>::_copy_on_write((CowData<FfxResourceBinding>*)&puStack_ce0);
         *puStack_ce0 = local_ca8[0];
         puStack_ce0[0x20] = local_ba8[0];
         lVar10 = (long)puStack_ce0 - (long)( ( ulong )(puStack_ce0 + 1) & 0xfffffffffffffff8 );
         puVar12 = *(undefined8**)( this + 0xe18 );
         puVar15 = (undefined8*)( (long)local_ca8 - lVar10 );
         puVar16 = (undefined8*)( ( ulong )(puStack_ce0 + 1) & 0xfffffffffffffff8 );
         for (uVar14 = ( ulong )((int)lVar10 + 0x108U >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar16 = *puVar15;
            puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
            puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
         }

         puVar15 = puStack_ce0;
         if (puVar12 == puStack_ce0) goto LAB_00105579;
         LAB_00103f7d:if (puVar12 != (undefined8*)0x0) {
            LOCK();
            plVar1 = puVar12 + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar10 = *(long*)( this + 0xe18 );
               *(undefined8*)( this + 0xe18 ) = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }

         }

         *(undefined8**)( this + 0xe18 ) = puStack_ce0;
      }
 else {
         LAB_00105560:puVar12 = *(undefined8**)( this + 0xe18 );
         if (puVar12 != puVar15) goto LAB_00103f7d;
         if (puVar15 != (undefined8*)0x0) {
            LAB_00105579:LOCK();
            plVar1 = puVar15 + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static(puStack_ce0 + -2, false);
            }

         }

      }

      puStack_ce0 = (undefined8*)0x0;
      puVar15 = &DAT_0010cb40;
      puVar12 = local_ca8;
      for (lVar10 = 0x42; lVar10 != 0; lVar10 = lVar10 + -1) {
         *puVar12 = *puVar15;
         puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
         puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
      }

      iVar6 = CowData<FfxResourceBinding>::resize<false>((CowData<FfxResourceBinding>*)&puStack_ce0, 2);
      puVar15 = puStack_ce0;
      if (iVar6 == 0) {
         lVar17 = 0;
         lVar10 = 0;
         do {
            if (puVar15 == (undefined8*)0x0) {
               lVar13 = 0;
               LAB_00105db3:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar10, lVar13, "p_index", "size()", "", false, false);
            }
 else {
               lVar13 = *(long*)( (long)puVar15 + -8 );
               if (lVar13 <= lVar10) goto LAB_00105db3;
               CowData<FfxResourceBinding>::_copy_on_write((CowData<FfxResourceBinding>*)&puStack_ce0);
               puVar15 = (undefined8*)( (long)local_ca8 + lVar17 );
               puVar12 = (undefined8*)( (long)puStack_ce0 + lVar17 );
               *puVar12 = *puVar15;
               puVar12[0x20] = *(undefined8*)( (long)local_ba8 + lVar17 );
               lVar13 = (long)puVar12 - (long)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               puVar16 = (undefined8*)( (long)puVar15 - lVar13 );
               puVar12 = (undefined8*)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               for (uVar14 = ( ulong )((int)lVar13 + 0x108U >> 3); puVar15 = puStack_ce0,uVar14 != 0; uVar14 = uVar14 - 1) {
                  *puVar12 = *puVar16;
                  puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
                  puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
               }

            }

            lVar10 = lVar10 + 1;
            if (lVar17 == 0x108) break;
            lVar17 = 0x108;
         }
 while ( true );
      }

      lVar10 = *(long*)( this + 0xe28 );
      if ((undefined8*)lVar10 == puVar15) {
         if (puVar15 != (undefined8*)0x0) {
            LOCK();
            plVar1 = (long*)( (long)puVar15 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( (long)puStack_ce0 + -0x10 ), false);
            }

         }

      }
 else {
         if (lVar10 != 0) {
            LOCK();
            plVar1 = (long*)( lVar10 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            puVar15 = puStack_ce0;
            if (*plVar1 == 0) {
               lVar10 = *(long*)( this + 0xe28 );
               *(undefined8*)( this + 0xe28 ) = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
               puVar15 = puStack_ce0;
            }

         }

         *(undefined8**)( this + 0xe28 ) = puVar15;
      }

      puStack_ce0 = (undefined8*)0x0;
      puVar15 = &DAT_0010cd60;
      puVar12 = local_ca8;
      for (lVar10 = 0x21; lVar10 != 0; lVar10 = lVar10 + -1) {
         *puVar12 = *puVar15;
         puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
         puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
      }

      iVar6 = CowData<FfxResourceBinding>::resize<false>((CowData<FfxResourceBinding>*)&puStack_ce0, 1);
      puVar15 = puStack_ce0;
      if (iVar6 == 0) {
         if (puStack_ce0 == (undefined8*)0x0) {
            lVar10 = 0;
            LAB_001054b1:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, 0, lVar10, "p_index", "size()", "", false, false);
            goto LAB_001054e8;
         }

         lVar10 = puStack_ce0[-1];
         if (lVar10 < 1) goto LAB_001054b1;
         CowData<FfxResourceBinding>::_copy_on_write((CowData<FfxResourceBinding>*)&puStack_ce0);
         *puStack_ce0 = local_ca8[0];
         puStack_ce0[0x20] = local_ba8[0];
         lVar10 = (long)puStack_ce0 - (long)( ( ulong )(puStack_ce0 + 1) & 0xfffffffffffffff8 );
         puVar12 = *(undefined8**)( this + 0xe38 );
         puVar15 = (undefined8*)( (long)local_ca8 - lVar10 );
         puVar16 = (undefined8*)( ( ulong )(puStack_ce0 + 1) & 0xfffffffffffffff8 );
         for (uVar14 = ( ulong )((int)lVar10 + 0x108U >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar16 = *puVar15;
            puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
            puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
         }

         puVar15 = puStack_ce0;
         if (puVar12 == puStack_ce0) goto LAB_00105501;
         LAB_0010416d:if (puVar12 != (undefined8*)0x0) {
            LOCK();
            plVar1 = puVar12 + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar10 = *(long*)( this + 0xe38 );
               *(undefined8*)( this + 0xe38 ) = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }

         }

         *(undefined8**)( this + 0xe38 ) = puStack_ce0;
      }
 else {
         LAB_001054e8:puVar12 = *(undefined8**)( this + 0xe38 );
         if (puVar12 != puVar15) goto LAB_0010416d;
         if (puVar15 != (undefined8*)0x0) {
            LAB_00105501:LOCK();
            plVar1 = puVar15 + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static(puStack_ce0 + -2, false);
            }

         }

      }

      local_cf0 = 0;
      local_ce8 = "\n";
      local_d10 = 0;
      puStack_ce0 = (undefined8*)0x1;
      String::parse_latin1((StrRange*)&local_d10);
      Vector<String>::push_back((Vector<String>*)&local_cf8);
      lVar10 = local_d10;
      if (local_d10 != 0) {
         LOCK();
         plVar1 = (long*)( local_d10 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_d10 = 0;
            Memory::free_static((void*)( lVar10 + -0x10 ), false);
         }

      }

      local_d10 = 0;
      local_ce8 = "\n#define FFX_FSR2_OPTION_APPLY_SHARPENING 1\n";
      puStack_ce0 = (undefined8*)0x2c;
      String::parse_latin1((StrRange*)&local_d10);
      Vector<String>::push_back((Vector<String>*)&local_cf8);
      lVar10 = local_d10;
      if (local_d10 != 0) {
         LOCK();
         plVar1 = (long*)( local_d10 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_d10 = 0;
            Memory::free_static((void*)( lVar10 + -0x10 ), false);
         }

      }

      local_d10 = 0;
      RenderingDevice::get_singleton();
      RenderingDevice::get_device_vendor_name();
      cVar4 = String::operator ==((String*)&local_ce8, "NVIDIA");
      pcVar2 = local_ce8;
      if (local_ce8 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_ce8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_ce8 = (char*)0x0;
            Memory::free_static(pcVar2 + -0x10, false);
         }

      }

      if (cVar4 == '\0') {
         if (local_d18 != local_d10) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_d10, (CowData*)&local_d18);
         }

      }
 else if (local_d20 != local_d10) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_d10, (CowData*)&local_d20);
      }

      *(Vector**)( this + 0xe40 ) = (Vector*)( this + 0x468 );
      puStack_ce0 = (undefined8*)0x0;
      ShaderRD::initialize((Vector*)( this + 0x468 ), (StrRange*)&local_cf8, (Vector*)&local_d10);
      CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)&puStack_ce0);
      uVar9 = ShaderRD::version_create();
      puVar15 = &DAT_0010ce80;
      puVar12 = local_ca8;
      for (lVar10 = 0x18c; lVar10 != 0; lVar10 = lVar10 + -1) {
         *puVar12 = *puVar15;
         puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
         puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
      }

      *(undefined8*)( this + 0xe48 ) = uVar9;
      puStack_ce0 = (undefined8*)0x0;
      iVar6 = CowData<FfxResourceBinding>::resize<false>((CowData<FfxResourceBinding>*)&puStack_ce0, 0xc);
      puVar15 = puStack_ce0;
      if (iVar6 == 0) {
         lVar10 = 0;
         lVar17 = 0;
         do {
            if (puVar15 == (undefined8*)0x0) {
               lVar13 = 0;
               LAB_00105f73:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar10, lVar13, "p_index", "size()", "", false, false);
            }
 else {
               lVar13 = *(long*)( (long)puVar15 + -8 );
               if (lVar13 <= lVar10) goto LAB_00105f73;
               CowData<FfxResourceBinding>::_copy_on_write((CowData<FfxResourceBinding>*)&puStack_ce0);
               puVar15 = (undefined8*)( (long)local_ca8 + lVar17 );
               puVar12 = (undefined8*)( (long)puStack_ce0 + lVar17 );
               *puVar12 = *puVar15;
               puVar12[0x20] = *(undefined8*)( (long)local_ba8 + lVar17 );
               lVar13 = (long)puVar12 - (long)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               puVar16 = (undefined8*)( (long)puVar15 - lVar13 );
               puVar12 = (undefined8*)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               for (uVar14 = ( ulong )((int)lVar13 + 0x108U >> 3); puVar15 = puStack_ce0,uVar14 != 0; uVar14 = uVar14 - 1) {
                  *puVar12 = *puVar16;
                  puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
                  puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
               }

            }

            lVar17 = lVar17 + 0x108;
            lVar10 = lVar10 + 1;
         }
 while ( lVar17 != 0xc60 );
      }

      lVar10 = *(long*)( this + 0xe70 );
      if (puVar15 == (undefined8*)lVar10) {
         if (puVar15 != (undefined8*)0x0) {
            LOCK();
            plVar1 = (long*)( (long)puVar15 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( (long)puStack_ce0 + -0x10 ), false);
            }

         }

      }
 else {
         if (lVar10 != 0) {
            LOCK();
            plVar1 = (long*)( lVar10 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            puVar15 = puStack_ce0;
            if (*plVar1 == 0) {
               lVar10 = *(long*)( this + 0xe70 );
               *(undefined8*)( this + 0xe70 ) = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
               puVar15 = puStack_ce0;
            }

         }

         *(undefined8**)( this + 0xe70 ) = puVar15;
      }

      puStack_ce0 = (undefined8*)0x0;
      puVar15 = &DAT_0010dae0;
      puVar12 = local_ca8;
      for (lVar10 = 0xa5; lVar10 != 0; lVar10 = lVar10 + -1) {
         *puVar12 = *puVar15;
         puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
         puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
      }

      iVar6 = CowData<FfxResourceBinding>::resize<false>((CowData<FfxResourceBinding>*)&puStack_ce0, 5);
      puVar15 = puStack_ce0;
      if (iVar6 == 0) {
         lVar10 = 0;
         lVar17 = 0;
         do {
            if (puVar15 == (undefined8*)0x0) {
               lVar13 = 0;
               LAB_00105f23:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar10, lVar13, "p_index", "size()", "", false, false);
            }
 else {
               lVar13 = *(long*)( (long)puVar15 + -8 );
               if (lVar13 <= lVar10) goto LAB_00105f23;
               CowData<FfxResourceBinding>::_copy_on_write((CowData<FfxResourceBinding>*)&puStack_ce0);
               puVar15 = (undefined8*)( (long)local_ca8 + lVar17 );
               puVar12 = (undefined8*)( (long)puStack_ce0 + lVar17 );
               *puVar12 = *puVar15;
               puVar12[0x20] = *(undefined8*)( (long)local_ba8 + lVar17 );
               lVar13 = (long)puVar12 - (long)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               puVar16 = (undefined8*)( (long)puVar15 - lVar13 );
               puVar12 = (undefined8*)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               for (uVar14 = ( ulong )((int)lVar13 + 0x108U >> 3); puVar15 = puStack_ce0,uVar14 != 0; uVar14 = uVar14 - 1) {
                  *puVar12 = *puVar16;
                  puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
                  puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
               }

            }

            lVar17 = lVar17 + 0x108;
            lVar10 = lVar10 + 1;
         }
 while ( lVar17 != 0x528 );
      }

      lVar10 = *(long*)( this + 0xe80 );
      if ((undefined8*)lVar10 == puVar15) {
         if (puVar15 != (undefined8*)0x0) {
            LOCK();
            plVar1 = (long*)( (long)puVar15 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( (long)puStack_ce0 + -0x10 ), false);
            }

         }

      }
 else {
         if (lVar10 != 0) {
            LOCK();
            plVar1 = (long*)( lVar10 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            puVar15 = puStack_ce0;
            if (*plVar1 == 0) {
               lVar10 = *(long*)( this + 0xe80 );
               *(undefined8*)( this + 0xe80 ) = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
               puVar15 = puStack_ce0;
            }

         }

         *(undefined8**)( this + 0xe80 ) = puVar15;
      }

      puStack_ce0 = (undefined8*)0x0;
      puVar15 = &DAT_0010e020;
      puVar12 = local_ca8;
      for (lVar10 = 0x21; lVar10 != 0; lVar10 = lVar10 + -1) {
         *puVar12 = *puVar15;
         puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
         puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
      }

      iVar6 = CowData<FfxResourceBinding>::resize<false>((CowData<FfxResourceBinding>*)&puStack_ce0, 1);
      puVar15 = puStack_ce0;
      if (iVar6 == 0) {
         if (puStack_ce0 == (undefined8*)0x0) {
            lVar10 = 0;
            LAB_0010575d:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, 0, lVar10, "p_index", "size()", "", false, false);
            goto LAB_00105790;
         }

         lVar10 = puStack_ce0[-1];
         if (lVar10 < 1) goto LAB_0010575d;
         CowData<FfxResourceBinding>::_copy_on_write((CowData<FfxResourceBinding>*)&puStack_ce0);
         *puStack_ce0 = local_ca8[0];
         puStack_ce0[0x20] = local_ba8[0];
         lVar10 = (long)puStack_ce0 - (long)( ( ulong )(puStack_ce0 + 1) & 0xfffffffffffffff8 );
         puVar12 = *(undefined8**)( this + 0xe90 );
         puVar15 = (undefined8*)( (long)local_ca8 - lVar10 );
         puVar16 = (undefined8*)( ( ulong )(puStack_ce0 + 1) & 0xfffffffffffffff8 );
         for (uVar14 = ( ulong )((int)lVar10 + 0x108U >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar16 = *puVar15;
            puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
            puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
         }

         puVar15 = puStack_ce0;
         if (puStack_ce0 == puVar12) goto LAB_001057a9;
         LAB_0010458e:if (puVar12 != (undefined8*)0x0) {
            LOCK();
            plVar1 = puVar12 + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar10 = *(long*)( this + 0xe90 );
               *(undefined8*)( this + 0xe90 ) = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }

         }

         *(undefined8**)( this + 0xe90 ) = puStack_ce0;
      }
 else {
         LAB_00105790:puVar12 = *(undefined8**)( this + 0xe90 );
         if (puVar12 != puVar15) goto LAB_0010458e;
         if (puVar15 != (undefined8*)0x0) {
            LAB_001057a9:LOCK();
            plVar1 = puVar15 + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static(puStack_ce0 + -2, false);
            }

         }

      }

      for (int i = 0; i < 3; i++) {
         *(undefined8*)( this + ( 8*i + 3736 ) ) = *(undefined8*)( this + ( 8*i + 3648 ) );
      }

      *(undefined4*)( this + 0xeb0 ) = *(undefined4*)( this + 0xe58 );
      *(undefined8*)( this + 0xeb8 ) = *(undefined8*)( this + 0xe60 );
      for (int i = 0; i < 3; i++) {
         if (*(long*)( this + ( 16*i + 3784 ) ) != *(long*)( this + ( 16*i + 3696 ) )) {
            CowData<FfxResourceBinding>::_ref((CowData<FfxResourceBinding>*)( this + ( 16*i + 3784 ) ), (CowData*)( this + ( 16*i + 3696 ) ));
         }

      }

      lVar10 = local_d10;
      *(undefined4*)( this + 0xeb0 ) = 1;
      if (local_d10 != 0) {
         LOCK();
         plVar1 = (long*)( local_d10 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_d10 = 0;
            Memory::free_static((void*)( lVar10 + -0x10 ), false);
         }

      }

      CowData<String>::_unref((CowData<String>*)&local_cf0);
      *(Vector**)( this + 0xef0 ) = (Vector*)( this + 0x758 );
      puStack_ce0 = (undefined8*)0x0;
      ShaderRD::initialize((Vector*)( this + 0x758 ), local_d08, (Vector*)&local_d20);
      CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)&puStack_ce0);
      uVar9 = ShaderRD::version_create();
      puVar15 = &DAT_0010e140;
      puVar12 = local_ca8;
      for (lVar10 = 0x42; lVar10 != 0; lVar10 = lVar10 + -1) {
         *puVar12 = *puVar15;
         puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
         puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
      }

      *(undefined8*)( this + 0xef8 ) = uVar9;
      puStack_ce0 = (undefined8*)0x0;
      iVar6 = CowData<FfxResourceBinding>::resize<false>((CowData<FfxResourceBinding>*)&puStack_ce0, 2);
      puVar15 = puStack_ce0;
      if (iVar6 == 0) {
         lVar17 = 0;
         lVar10 = 0;
         do {
            if (puVar15 == (undefined8*)0x0) {
               lVar13 = 0;
               LAB_00105b43:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar10, lVar13, "p_index", "size()", "", false, false);
            }
 else {
               lVar13 = *(long*)( (long)puVar15 + -8 );
               if (lVar13 <= lVar10) goto LAB_00105b43;
               CowData<FfxResourceBinding>::_copy_on_write((CowData<FfxResourceBinding>*)&puStack_ce0);
               puVar15 = (undefined8*)( (long)local_ca8 + lVar17 );
               puVar12 = (undefined8*)( (long)puStack_ce0 + lVar17 );
               *puVar12 = *puVar15;
               puVar12[0x20] = *(undefined8*)( (long)local_ba8 + lVar17 );
               lVar13 = (long)puVar12 - (long)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               puVar16 = (undefined8*)( (long)puVar15 - lVar13 );
               puVar12 = (undefined8*)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               for (uVar14 = ( ulong )((int)lVar13 + 0x108U >> 3); puVar15 = puStack_ce0,uVar14 != 0; uVar14 = uVar14 - 1) {
                  *puVar12 = *puVar16;
                  puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
                  puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
               }

            }

            lVar10 = lVar10 + 1;
            if (lVar17 == 0x108) break;
            lVar17 = 0x108;
         }
 while ( true );
      }

      lVar10 = *(long*)( this + 0xf20 );
      if ((undefined8*)lVar10 == puVar15) {
         if (puVar15 != (undefined8*)0x0) {
            LOCK();
            plVar1 = (long*)( (long)puVar15 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( (long)puStack_ce0 + -0x10 ), false);
            }

         }

      }
 else {
         if (lVar10 != 0) {
            LOCK();
            plVar1 = (long*)( lVar10 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            puVar15 = puStack_ce0;
            if (*plVar1 == 0) {
               lVar10 = *(long*)( this + 0xf20 );
               *(undefined8*)( this + 0xf20 ) = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
               puVar15 = puStack_ce0;
            }

         }

         *(undefined8**)( this + 0xf20 ) = puVar15;
      }

      puStack_ce0 = (undefined8*)0x0;
      puVar15 = &DAT_0010e360;
      puVar12 = local_ca8;
      for (lVar10 = 0x21; lVar10 != 0; lVar10 = lVar10 + -1) {
         *puVar12 = *puVar15;
         puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
         puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
      }

      iVar6 = CowData<FfxResourceBinding>::resize<false>((CowData<FfxResourceBinding>*)&puStack_ce0, 1);
      puVar15 = puStack_ce0;
      if (iVar6 == 0) {
         if (puStack_ce0 == (undefined8*)0x0) {
            lVar10 = 0;
            LAB_001057cd:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, 0, lVar10, "p_index", "size()", "", false, false);
            goto LAB_00105800;
         }

         lVar10 = puStack_ce0[-1];
         if (lVar10 < 1) goto LAB_001057cd;
         CowData<FfxResourceBinding>::_copy_on_write((CowData<FfxResourceBinding>*)&puStack_ce0);
         *puStack_ce0 = local_ca8[0];
         puStack_ce0[0x20] = local_ba8[0];
         lVar10 = (long)puStack_ce0 - (long)( ( ulong )(puStack_ce0 + 1) & 0xfffffffffffffff8 );
         puVar12 = *(undefined8**)( this + 0xf30 );
         puVar15 = (undefined8*)( (long)local_ca8 - lVar10 );
         puVar16 = (undefined8*)( ( ulong )(puStack_ce0 + 1) & 0xfffffffffffffff8 );
         for (uVar14 = ( ulong )((int)lVar10 + 0x108U >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar16 = *puVar15;
            puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
            puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
         }

         puVar15 = puStack_ce0;
         if (puVar12 == puStack_ce0) goto LAB_00105819;
         LAB_00104895:if (puVar12 != (undefined8*)0x0) {
            LOCK();
            plVar1 = puVar12 + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar10 = *(long*)( this + 0xf30 );
               *(undefined8*)( this + 0xf30 ) = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }

         }

         *(undefined8**)( this + 0xf30 ) = puStack_ce0;
      }
 else {
         LAB_00105800:puVar12 = *(undefined8**)( this + 0xf30 );
         if (puVar12 != puVar15) goto LAB_00104895;
         if (puVar15 != (undefined8*)0x0) {
            LAB_00105819:LOCK();
            plVar1 = puVar15 + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static(puStack_ce0 + -2, false);
            }

         }

      }

      puStack_ce0 = (undefined8*)0x0;
      puVar15 = &DAT_0010e480;
      puVar12 = local_ca8;
      for (lVar10 = 0x42; lVar10 != 0; lVar10 = lVar10 + -1) {
         *puVar12 = *puVar15;
         puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
         puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
      }

      iVar6 = CowData<FfxResourceBinding>::resize<false>((CowData<FfxResourceBinding>*)&puStack_ce0, 2);
      puVar15 = puStack_ce0;
      if (iVar6 == 0) {
         lVar17 = 0;
         lVar10 = 0;
         do {
            if (puVar15 == (undefined8*)0x0) {
               lVar13 = 0;
               LAB_00105c43:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar10, lVar13, "p_index", "size()", "", false, false);
            }
 else {
               lVar13 = *(long*)( (long)puVar15 + -8 );
               if (lVar13 <= lVar10) goto LAB_00105c43;
               CowData<FfxResourceBinding>::_copy_on_write((CowData<FfxResourceBinding>*)&puStack_ce0);
               puVar15 = (undefined8*)( (long)local_ca8 + lVar17 );
               puVar12 = (undefined8*)( (long)puStack_ce0 + lVar17 );
               *puVar12 = *puVar15;
               puVar12[0x20] = *(undefined8*)( (long)local_ba8 + lVar17 );
               lVar13 = (long)puVar12 - (long)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               puVar16 = (undefined8*)( (long)puVar15 - lVar13 );
               puVar12 = (undefined8*)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               for (uVar14 = ( ulong )((int)lVar13 + 0x108U >> 3); puVar15 = puStack_ce0,uVar14 != 0; uVar14 = uVar14 - 1) {
                  *puVar12 = *puVar16;
                  puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
                  puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
               }

            }

            lVar10 = lVar10 + 1;
            if (lVar17 == 0x108) break;
            lVar17 = 0x108;
         }
 while ( true );
      }

      lVar10 = *(long*)( this + 0xf40 );
      if (puVar15 == (undefined8*)lVar10) {
         if (puVar15 != (undefined8*)0x0) {
            LOCK();
            plVar1 = (long*)( (long)puVar15 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( (long)puStack_ce0 + -0x10 ), false);
            }

         }

      }
 else {
         if (lVar10 != 0) {
            LOCK();
            plVar1 = (long*)( lVar10 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            puVar15 = puStack_ce0;
            if (*plVar1 == 0) {
               lVar10 = *(long*)( this + 0xf40 );
               *(undefined8*)( this + 0xf40 ) = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
               puVar15 = puStack_ce0;
            }

         }

         *(undefined8**)( this + 0xf40 ) = puVar15;
      }

      *(Vector**)( this + 0xf48 ) = (Vector*)( this + 0x8d0 );
      puStack_ce0 = (undefined8*)0x0;
      ShaderRD::initialize((Vector*)( this + 0x8d0 ), local_d08, (Vector*)&local_d20);
      CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)&puStack_ce0);
      uVar9 = ShaderRD::version_create();
      puVar15 = &DAT_0010e6a0;
      puVar12 = local_ca8;
      for (lVar10 = 0x21; lVar10 != 0; lVar10 = lVar10 + -1) {
         *puVar12 = *puVar15;
         puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
         puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
      }

      *(undefined8*)( this + 0xf50 ) = uVar9;
      puStack_ce0 = (undefined8*)0x0;
      iVar6 = CowData<FfxResourceBinding>::resize<false>((CowData<FfxResourceBinding>*)&puStack_ce0, 1);
      puVar15 = puStack_ce0;
      if (iVar6 == 0) {
         if (puStack_ce0 == (undefined8*)0x0) {
            lVar10 = 0;
            LAB_001056ed:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, 0, lVar10, "p_index", "size()", "", false, false);
            goto LAB_00105720;
         }

         lVar10 = puStack_ce0[-1];
         if (lVar10 < 1) goto LAB_001056ed;
         CowData<FfxResourceBinding>::_copy_on_write((CowData<FfxResourceBinding>*)&puStack_ce0);
         *puStack_ce0 = local_ca8[0];
         puStack_ce0[0x20] = local_ba8[0];
         lVar10 = (long)puStack_ce0 - (long)( ( ulong )(puStack_ce0 + 1) & 0xfffffffffffffff8 );
         puVar12 = *(undefined8**)( this + 0xf78 );
         puVar15 = (undefined8*)( (long)local_ca8 - lVar10 );
         puVar16 = (undefined8*)( ( ulong )(puStack_ce0 + 1) & 0xfffffffffffffff8 );
         for (uVar14 = ( ulong )((int)lVar10 + 0x108U >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar16 = *puVar15;
            puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
            puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
         }

         if (puVar12 == puStack_ce0) goto LAB_00105739;
         LAB_00104ac8:if (puVar12 != (undefined8*)0x0) {
            LOCK();
            plVar1 = puVar12 + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar10 = *(long*)( this + 0xf78 );
               *(undefined8*)( this + 0xf78 ) = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }

         }

         *(undefined8**)( this + 0xf78 ) = puStack_ce0;
      }
 else {
         LAB_00105720:puVar12 = *(undefined8**)( this + 0xf78 );
         if (puVar15 != puVar12) goto LAB_00104ac8;
         if (puVar12 != (undefined8*)0x0) {
            LAB_00105739:LOCK();
            plVar1 = puVar12 + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static(puStack_ce0 + -2, false);
            }

         }

      }

      puStack_ce0 = (undefined8*)0x0;
      puVar15 = &DAT_0010e7c0;
      puVar12 = local_ca8;
      for (lVar10 = 0x84; lVar10 != 0; lVar10 = lVar10 + -1) {
         *puVar12 = *puVar15;
         puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
         puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
      }

      iVar6 = CowData<FfxResourceBinding>::resize<false>((CowData<FfxResourceBinding>*)&puStack_ce0, 4);
      puVar15 = puStack_ce0;
      if (iVar6 == 0) {
         lVar10 = 0;
         lVar17 = 0;
         do {
            if (puVar15 == (undefined8*)0x0) {
               lVar13 = 0;
               LAB_00105ed3:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar10, lVar13, "p_index", "size()", "", false, false);
            }
 else {
               lVar13 = *(long*)( (long)puVar15 + -8 );
               if (lVar13 <= lVar10) goto LAB_00105ed3;
               CowData<FfxResourceBinding>::_copy_on_write((CowData<FfxResourceBinding>*)&puStack_ce0);
               puVar15 = (undefined8*)( (long)local_ca8 + lVar17 );
               puVar12 = (undefined8*)( (long)puStack_ce0 + lVar17 );
               *puVar12 = *puVar15;
               puVar12[0x20] = *(undefined8*)( (long)local_ba8 + lVar17 );
               lVar13 = (long)puVar12 - (long)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               puVar16 = (undefined8*)( (long)puVar15 - lVar13 );
               puVar12 = (undefined8*)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               for (uVar14 = ( ulong )((int)lVar13 + 0x108U >> 3); puVar15 = puStack_ce0,uVar14 != 0; uVar14 = uVar14 - 1) {
                  *puVar12 = *puVar16;
                  puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
                  puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
               }

            }

            lVar17 = lVar17 + 0x108;
            lVar10 = lVar10 + 1;
         }
 while ( lVar17 != 0x420 );
      }

      lVar10 = *(long*)( this + 0xf88 );
      if (puVar15 == (undefined8*)lVar10) {
         if (puVar15 != (undefined8*)0x0) {
            LOCK();
            plVar1 = (long*)( (long)puVar15 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( (long)puStack_ce0 + -0x10 ), false);
            }

         }

      }
 else {
         if (lVar10 != 0) {
            LOCK();
            plVar1 = (long*)( lVar10 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            puVar15 = puStack_ce0;
            if (*plVar1 == 0) {
               lVar10 = *(long*)( this + 0xf88 );
               *(undefined8*)( this + 0xf88 ) = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
               puVar15 = puStack_ce0;
            }

         }

         *(undefined8**)( this + 0xf88 ) = puVar15;
      }

      puStack_ce0 = (undefined8*)0x0;
      puVar15 = &DAT_0010ebe0;
      puVar12 = local_ca8;
      for (lVar10 = 0x42; lVar10 != 0; lVar10 = lVar10 + -1) {
         *puVar12 = *puVar15;
         puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
         puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
      }

      iVar6 = CowData<FfxResourceBinding>::resize<false>((CowData<FfxResourceBinding>*)&puStack_ce0, 2);
      puVar15 = puStack_ce0;
      if (iVar6 == 0) {
         lVar17 = 0;
         lVar10 = 0;
         do {
            if (puVar15 == (undefined8*)0x0) {
               lVar13 = 0;
               LAB_00105c03:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar10, lVar13, "p_index", "size()", "", false, false);
            }
 else {
               lVar13 = *(long*)( (long)puVar15 + -8 );
               if (lVar13 <= lVar10) goto LAB_00105c03;
               CowData<FfxResourceBinding>::_copy_on_write((CowData<FfxResourceBinding>*)&puStack_ce0);
               puVar15 = (undefined8*)( (long)local_ca8 + lVar17 );
               puVar12 = (undefined8*)( (long)puStack_ce0 + lVar17 );
               *puVar12 = *puVar15;
               puVar12[0x20] = *(undefined8*)( (long)local_ba8 + lVar17 );
               lVar13 = (long)puVar12 - (long)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               puVar16 = (undefined8*)( (long)puVar15 - lVar13 );
               puVar12 = (undefined8*)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               for (uVar14 = ( ulong )((int)lVar13 + 0x108U >> 3); puVar15 = puStack_ce0,uVar14 != 0; uVar14 = uVar14 - 1) {
                  *puVar12 = *puVar16;
                  puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
                  puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
               }

            }

            lVar10 = lVar10 + 1;
            if (lVar17 == 0x108) break;
            lVar17 = 0x108;
         }
 while ( true );
      }

      lVar10 = *(long*)( this + 0xf98 );
      if ((undefined8*)lVar10 == puVar15) {
         if (puVar15 != (undefined8*)0x0) {
            LOCK();
            plVar1 = (long*)( (long)puVar15 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( (long)puStack_ce0 + -0x10 ), false);
            }

         }

      }
 else {
         if (lVar10 != 0) {
            LOCK();
            plVar1 = (long*)( lVar10 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            puVar15 = puStack_ce0;
            if (*plVar1 == 0) {
               lVar10 = *(long*)( this + 0xf98 );
               *(undefined8*)( this + 0xf98 ) = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
               puVar15 = puStack_ce0;
            }

         }

         *(undefined8**)( this + 0xf98 ) = puVar15;
      }

      *(Vector**)( this + 4000 ) = (Vector*)( this + 0xa48 );
      puStack_ce0 = (undefined8*)0x0;
      ShaderRD::initialize((Vector*)( this + 0xa48 ), local_d08, (Vector*)&local_d18);
      CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)&puStack_ce0);
      uVar9 = ShaderRD::version_create();
      puVar15 = &DAT_0010ee00;
      puVar12 = local_ca8;
      for (lVar10 = 0x42; lVar10 != 0; lVar10 = lVar10 + -1) {
         *puVar12 = *puVar15;
         puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
         puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
      }

      *(undefined8*)( this + 0xfa8 ) = uVar9;
      puStack_ce0 = (undefined8*)0x0;
      iVar6 = CowData<FfxResourceBinding>::resize<false>((CowData<FfxResourceBinding>*)&puStack_ce0, 2);
      puVar15 = puStack_ce0;
      if (iVar6 == 0) {
         lVar17 = 0;
         lVar10 = 0;
         do {
            if (puVar15 == (undefined8*)0x0) {
               lVar13 = 0;
               LAB_00105bc3:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar10, lVar13, "p_index", "size()", "", false, false);
            }
 else {
               lVar13 = *(long*)( (long)puVar15 + -8 );
               if (lVar13 <= lVar10) goto LAB_00105bc3;
               CowData<FfxResourceBinding>::_copy_on_write((CowData<FfxResourceBinding>*)&puStack_ce0);
               puVar15 = (undefined8*)( (long)local_ca8 + lVar17 );
               puVar12 = (undefined8*)( (long)puStack_ce0 + lVar17 );
               *puVar12 = *puVar15;
               puVar12[0x20] = *(undefined8*)( (long)local_ba8 + lVar17 );
               lVar13 = (long)puVar12 - (long)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               puVar16 = (undefined8*)( (long)puVar15 - lVar13 );
               puVar12 = (undefined8*)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               for (uVar14 = ( ulong )((int)lVar13 + 0x108U >> 3); puVar15 = puStack_ce0,uVar14 != 0; uVar14 = uVar14 - 1) {
                  *puVar12 = *puVar16;
                  puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
                  puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
               }

            }

            lVar10 = lVar10 + 1;
            if (lVar17 == 0x108) break;
            lVar17 = 0x108;
         }
 while ( true );
      }

      lVar10 = *(long*)( this + 0xfd0 );
      if (puVar15 == (undefined8*)lVar10) {
         if (puVar15 != (undefined8*)0x0) {
            LOCK();
            plVar1 = (long*)( (long)puVar15 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( (long)puStack_ce0 + -0x10 ), false);
            }

         }

      }
 else {
         if (lVar10 != 0) {
            LOCK();
            plVar1 = (long*)( lVar10 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            puVar15 = puStack_ce0;
            if (*plVar1 == 0) {
               lVar10 = *(long*)( this + 0xfd0 );
               *(undefined8*)( this + 0xfd0 ) = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
               puVar15 = puStack_ce0;
            }

         }

         *(undefined8**)( this + 0xfd0 ) = puVar15;
      }

      puStack_ce0 = (undefined8*)0x0;
      puVar15 = &DAT_0010f020;
      puVar12 = local_ca8;
      for (lVar10 = 0x21; lVar10 != 0; lVar10 = lVar10 + -1) {
         *puVar12 = *puVar15;
         puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
         puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
      }

      iVar6 = CowData<FfxResourceBinding>::resize<false>((CowData<FfxResourceBinding>*)&puStack_ce0, 1);
      puVar15 = puStack_ce0;
      if (iVar6 == 0) {
         if (puStack_ce0 == (undefined8*)0x0) {
            lVar10 = 0;
            LAB_0010567d:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, 0, lVar10, "p_index", "size()", "", false, false);
            goto LAB_001056b0;
         }

         lVar10 = puStack_ce0[-1];
         if (lVar10 < 1) goto LAB_0010567d;
         CowData<FfxResourceBinding>::_copy_on_write((CowData<FfxResourceBinding>*)&puStack_ce0);
         *puStack_ce0 = local_ca8[0];
         puStack_ce0[0x20] = local_ba8[0];
         lVar10 = (long)puStack_ce0 - (long)( ( ulong )(puStack_ce0 + 1) & 0xfffffffffffffff8 );
         puVar12 = *(undefined8**)( this + 0xfe0 );
         puVar15 = (undefined8*)( (long)local_ca8 - lVar10 );
         puVar16 = (undefined8*)( ( ulong )(puStack_ce0 + 1) & 0xfffffffffffffff8 );
         for (uVar14 = ( ulong )((int)lVar10 + 0x108U >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar16 = *puVar15;
            puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
            puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
         }

         if (puStack_ce0 == puVar12) goto LAB_001056c9;
      }
 else {
         LAB_001056b0:puVar12 = *(undefined8**)( this + 0xfe0 );
         if (puVar15 == puVar12) {
            if (puVar12 == (undefined8*)0x0) goto LAB_00104f3b;
            LAB_001056c9:LOCK();
            plVar1 = puVar12 + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static(puStack_ce0 + -2, false);
            }

            goto LAB_00104f3b;
         }

      }

      if (puVar12 != (undefined8*)0x0) {
         LOCK();
         plVar1 = puVar12 + -2;
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar10 = *(long*)( this + 0xfe0 );
            *(undefined8*)( this + 0xfe0 ) = 0;
            Memory::free_static((void*)( lVar10 + -0x10 ), false);
         }

      }

      *(undefined8**)( this + 0xfe0 ) = puStack_ce0;
      LAB_00104f3b:puStack_ce0 = (undefined8*)0x0;
      puVar15 = &DAT_0010f140;
      puVar12 = local_ca8;
      for (lVar10 = 0x42; lVar10 != 0; lVar10 = lVar10 + -1) {
         *puVar12 = *puVar15;
         puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
         puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
      }

      iVar6 = CowData<FfxResourceBinding>::resize<false>((CowData<FfxResourceBinding>*)&puStack_ce0, 2);
      puVar15 = puStack_ce0;
      if (iVar6 == 0) {
         lVar17 = 0;
         lVar10 = 0;
         do {
            if (puVar15 == (undefined8*)0x0) {
               lVar13 = 0;
               LAB_00105b83:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar10, lVar13, "p_index", "size()", "", false, false);
            }
 else {
               lVar13 = *(long*)( (long)puVar15 + -8 );
               if (lVar13 <= lVar10) goto LAB_00105b83;
               CowData<FfxResourceBinding>::_copy_on_write((CowData<FfxResourceBinding>*)&puStack_ce0);
               puVar15 = (undefined8*)( (long)local_ca8 + lVar17 );
               puVar12 = (undefined8*)( (long)puStack_ce0 + lVar17 );
               *puVar12 = *puVar15;
               puVar12[0x20] = *(undefined8*)( (long)local_ba8 + lVar17 );
               lVar13 = (long)puVar12 - (long)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               puVar16 = (undefined8*)( (long)puVar15 - lVar13 );
               puVar12 = (undefined8*)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               for (uVar14 = ( ulong )((int)lVar13 + 0x108U >> 3); puVar15 = puStack_ce0,uVar14 != 0; uVar14 = uVar14 - 1) {
                  *puVar12 = *puVar16;
                  puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
                  puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
               }

            }

            lVar10 = lVar10 + 1;
            if (lVar17 == 0x108) break;
            lVar17 = 0x108;
         }
 while ( true );
      }

      lVar10 = *(long*)( this + 0xff0 );
      if (puVar15 == (undefined8*)lVar10) {
         if (puVar15 != (undefined8*)0x0) {
            LOCK();
            plVar1 = (long*)( (long)puVar15 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( (long)puStack_ce0 + -0x10 ), false);
            }

         }

      }
 else {
         if (lVar10 != 0) {
            LOCK();
            plVar1 = (long*)( lVar10 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            puVar15 = puStack_ce0;
            if (*plVar1 == 0) {
               lVar10 = *(long*)( this + 0xff0 );
               *(undefined8*)( this + 0xff0 ) = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
               puVar15 = puStack_ce0;
            }

         }

         *(undefined8**)( this + 0xff0 ) = puVar15;
      }

      *(Vector**)( this + 0xff8 ) = (Vector*)( this + 0xbc0 );
      puStack_ce0 = (undefined8*)0x0;
      ShaderRD::initialize((Vector*)( this + 0xbc0 ), local_d08, (Vector*)&local_d18);
      CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)&puStack_ce0);
      uVar9 = ShaderRD::version_create();
      puVar15 = &DAT_0010f360;
      puVar12 = local_ca8;
      for (lVar10 = 0x108; lVar10 != 0; lVar10 = lVar10 + -1) {
         *puVar12 = *puVar15;
         puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
         puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
      }

      *(undefined8*)( this + 0x1000 ) = uVar9;
      puStack_ce0 = (undefined8*)0x0;
      iVar6 = CowData<FfxResourceBinding>::resize<false>((CowData<FfxResourceBinding>*)&puStack_ce0, 8);
      puVar15 = puStack_ce0;
      if (iVar6 == 0) {
         lVar10 = 0;
         lVar17 = 0;
         do {
            if (puVar15 == (undefined8*)0x0) {
               lVar13 = 0;
               LAB_00105d23:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar10, lVar13, "p_index", "size()", "", false, false);
            }
 else {
               lVar13 = *(long*)( (long)puVar15 + -8 );
               if (lVar13 <= lVar10) goto LAB_00105d23;
               CowData<FfxResourceBinding>::_copy_on_write((CowData<FfxResourceBinding>*)&puStack_ce0);
               puVar15 = (undefined8*)( (long)local_ca8 + lVar17 );
               puVar12 = (undefined8*)( (long)puStack_ce0 + lVar17 );
               *puVar12 = *puVar15;
               puVar12[0x20] = *(undefined8*)( (long)local_ba8 + lVar17 );
               lVar13 = (long)puVar12 - (long)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               puVar16 = (undefined8*)( (long)puVar15 - lVar13 );
               puVar12 = (undefined8*)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               for (uVar14 = ( ulong )((int)lVar13 + 0x108U >> 3); puVar15 = puStack_ce0,uVar14 != 0; uVar14 = uVar14 - 1) {
                  *puVar12 = *puVar16;
                  puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
                  puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
               }

            }

            lVar17 = lVar17 + 0x108;
            lVar10 = lVar10 + 1;
         }
 while ( lVar17 != 0x840 );
      }

      lVar10 = *(long*)( this + 0x1028 );
      if ((undefined8*)lVar10 == puVar15) {
         if (puVar15 != (undefined8*)0x0) {
            LOCK();
            plVar1 = (long*)( (long)puVar15 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( (long)puStack_ce0 + -0x10 ), false);
            }

         }

      }
 else {
         if (lVar10 != 0) {
            LOCK();
            plVar1 = (long*)( lVar10 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            puVar15 = puStack_ce0;
            if (*plVar1 == 0) {
               lVar10 = *(long*)( this + 0x1028 );
               *(undefined8*)( this + 0x1028 ) = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
               puVar15 = puStack_ce0;
            }

         }

         *(undefined8**)( this + 0x1028 ) = puVar15;
      }

      puStack_ce0 = (undefined8*)0x0;
      puVar15 = &DAT_0010fba0;
      puVar12 = local_ca8;
      for (lVar10 = 0x84; lVar10 != 0; lVar10 = lVar10 + -1) {
         *puVar12 = *puVar15;
         puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
         puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
      }

      iVar6 = CowData<FfxResourceBinding>::resize<false>((CowData<FfxResourceBinding>*)&puStack_ce0, 4);
      puVar15 = puStack_ce0;
      if (iVar6 == 0) {
         lVar10 = 0;
         lVar17 = 0;
         do {
            if (puVar15 == (undefined8*)0x0) {
               lVar13 = 0;
               LAB_00105cd3:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar10, lVar13, "p_index", "size()", "", false, false);
            }
 else {
               lVar13 = *(long*)( (long)puVar15 + -8 );
               if (lVar13 <= lVar10) goto LAB_00105cd3;
               CowData<FfxResourceBinding>::_copy_on_write((CowData<FfxResourceBinding>*)&puStack_ce0);
               puVar15 = (undefined8*)( (long)local_ca8 + lVar17 );
               puVar12 = (undefined8*)( (long)puStack_ce0 + lVar17 );
               *puVar12 = *puVar15;
               puVar12[0x20] = *(undefined8*)( (long)local_ba8 + lVar17 );
               lVar13 = (long)puVar12 - (long)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               puVar16 = (undefined8*)( (long)puVar15 - lVar13 );
               puVar12 = (undefined8*)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
               for (uVar14 = ( ulong )((int)lVar13 + 0x108U >> 3); puVar15 = puStack_ce0,uVar14 != 0; uVar14 = uVar14 - 1) {
                  *puVar12 = *puVar16;
                  puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
                  puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
               }

            }

            lVar17 = lVar17 + 0x108;
            lVar10 = lVar10 + 1;
         }
 while ( lVar17 != 0x420 );
      }

      lVar10 = *(long*)( this + 0x1038 );
      if (puVar15 == (undefined8*)lVar10) {
         if (puVar15 != (undefined8*)0x0) {
            LOCK();
            plVar1 = (long*)( (long)puVar15 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( (long)puStack_ce0 + -0x10 ), false);
            }

         }

      }
 else {
         if (lVar10 != 0) {
            LOCK();
            plVar1 = (long*)( lVar10 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            puVar15 = puStack_ce0;
            if (*plVar1 == 0) {
               lVar10 = *(long*)( this + 0x1038 );
               *(undefined8*)( this + 0x1038 ) = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
               puVar15 = puStack_ce0;
            }

         }

         *(undefined8**)( this + 0x1038 ) = puVar15;
      }

      puStack_ce0 = (undefined8*)0x0;
      puVar15 = &DAT_0010ffc0;
      puVar12 = local_ca8;
      for (lVar10 = 0x42; lVar10 != 0; lVar10 = lVar10 + -1) {
         *puVar12 = *puVar15;
         puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
         puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
      }

      iVar6 = CowData<FfxResourceBinding>::resize<false>((CowData<FfxResourceBinding>*)&puStack_ce0, 2);
      puVar15 = puStack_ce0;
      if (iVar6 != 0) {
         LAB_0010534f:lVar10 = *(long*)( this + 0x1048 );
         if (puVar15 == (undefined8*)lVar10) {
            if (puVar15 != (undefined8*)0x0) {
               LOCK();
               plVar1 = (long*)( (long)puVar15 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( (long)puStack_ce0 + -0x10 ), false);
               }

            }

         }
 else {
            if (lVar10 != 0) {
               LOCK();
               plVar1 = (long*)( lVar10 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               puVar15 = puStack_ce0;
               if (*plVar1 == 0) {
                  lVar10 = *(long*)( this + 0x1048 );
                  *(undefined8*)( this + 0x1048 ) = 0;
                  Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  puVar15 = puStack_ce0;
               }

            }

            *(undefined8**)( this + 0x1048 ) = puVar15;
         }

         local_cd0 = 0;
         local_ccc = 0;
         local_cd8 = _LC133;
         local_cc0 = 0xc47a000000000007;
         local_ce8 = (char*)__LC132;
         puStack_ce0 = (undefined8*)_UNK_00282398;
         local_cc8 = 0x3f800000;
         local_cc4 = 0;
         local_cb8 = 0x2447a0000;
         local_cb0 = 0;
         pSVar11 = (SamplerState*)RenderingDevice::get_singleton();
         lVar10 = RenderingDevice::sampler_create(pSVar11);
         *(long*)( this + 0x1060 ) = lVar10;
         if (lVar10 == 0) {
            _err_print_error("FSR2Effect", "servers/rendering/renderer_rd/effects/fsr2.cpp", 0x319, "Condition \"device.point_clamp_sampler.is_null()\" is true.", 0, 0);
         }
 else {
            local_ce8 = (char*)_LC136;
            pSVar11 = (SamplerState*)RenderingDevice::get_singleton();
            lVar10 = RenderingDevice::sampler_create(pSVar11);
            *(long*)( this + 0x1068 ) = lVar10;
            if (lVar10 == 0) {
               _err_print_error("FSR2Effect", "servers/rendering/renderer_rd/effects/fsr2.cpp", 0x31e, "Condition \"device.linear_clamp_sampler.is_null()\" is true.", 0, 0);
            }

         }

         CowData<String>::_unref((CowData<String>*)&local_d00);
         lVar10 = local_d18;
         if (local_d18 != 0) {
            LOCK();
            plVar1 = (long*)( local_d18 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_d18 = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }

         }

         lVar10 = local_d20;
         if (local_d20 != 0) {
            LOCK();
            plVar1 = (long*)( local_d20 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_d20 = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }

         }

         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }

      lVar17 = 0;
      lVar10 = 0;
      do {
         if (puVar15 == (undefined8*)0x0) {
            lVar13 = 0;
            LAB_00105d73:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar10, lVar13, "p_index", "size()", "", false, false);
         }
 else {
            lVar13 = *(long*)( (long)puVar15 + -8 );
            if (lVar13 <= lVar10) goto LAB_00105d73;
            CowData<FfxResourceBinding>::_copy_on_write((CowData<FfxResourceBinding>*)&puStack_ce0);
            puVar15 = (undefined8*)( (long)local_ca8 + lVar17 );
            puVar12 = (undefined8*)( (long)puStack_ce0 + lVar17 );
            *puVar12 = *puVar15;
            puVar12[0x20] = *(undefined8*)( (long)local_ba8 + lVar17 );
            lVar13 = (long)puVar12 - (long)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
            puVar16 = (undefined8*)( (long)puVar15 - lVar13 );
            puVar12 = (undefined8*)( ( ulong )(puVar12 + 1) & 0xfffffffffffffff8 );
            for (uVar14 = ( ulong )((int)lVar13 + 0x108U >> 3); puVar15 = puStack_ce0,uVar14 != 0; uVar14 = uVar14 - 1) {
               *puVar12 = *puVar16;
               puVar16 = puVar16 + (ulong)bVar19 * -2 + 1;
               puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
            }

         }

         lVar10 = lVar10 + 1;
         if (lVar17 == 0x108) goto LAB_0010534f;
         lVar17 = 0x108;
      }
 while ( true );
   }

   /* LocalVector<RenderingDevice::Uniform, unsigned int, false, false>::~LocalVector() */
   void LocalVector<RenderingDevice::Uniform,unsigned_int,false,false>::~LocalVector(LocalVector<RenderingDevice::Uniform,unsigned_int,false,false> *this) {
      long *plVar1;
      long lVar2;
      long lVar3;
      void *pvVar4;
      pvVar4 = *(void**)( this + 8 );
      if (pvVar4 == (void*)0x0) {
         return;
      }

      if (*(int*)this != 0) {
         lVar3 = 0;
         do {
            lVar2 = *(long*)( (long)pvVar4 + lVar3 * 0x28 + 0x20 );
            if (lVar2 != 0) {
               LOCK();
               plVar1 = (long*)( lVar2 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar2 = *(long*)( (long)pvVar4 + lVar3 * 0x28 + 0x20 );
                  *(undefined8*)( (long)pvVar4 + lVar3 * 0x28 + 0x20 ) = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

               pvVar4 = *(void**)( this + 8 );
            }

            lVar3 = lVar3 + 1;
         }
 while ( (uint)lVar3 < *(uint*)this );
         *(undefined4*)this = 0;
         if (pvVar4 == (void*)0x0) {
            return;
         }

      }

      Memory::free_static(pvVar4, false);
      return;
   }

   /* Fsr2DepthClipPassShaderRD::~Fsr2DepthClipPassShaderRD() */
   void Fsr2DepthClipPassShaderRD::~Fsr2DepthClipPassShaderRD(Fsr2DepthClipPassShaderRD *this) {
      *(undefined***)this = &PTR__Fsr2DepthClipPassShaderRD_00110538;
      ShaderRD::~ShaderRD((ShaderRD*)this);
      return;
   }

   /* Fsr2DepthClipPassShaderRD::~Fsr2DepthClipPassShaderRD() */
   void Fsr2DepthClipPassShaderRD::~Fsr2DepthClipPassShaderRD(Fsr2DepthClipPassShaderRD *this) {
      *(undefined***)this = &PTR__Fsr2DepthClipPassShaderRD_00110538;
      ShaderRD::~ShaderRD((ShaderRD*)this);
      operator_delete(this, 0x178);
      return;
   }

   /* Fsr2ReconstructPreviousDepthPassShaderRD::~Fsr2ReconstructPreviousDepthPassShaderRD() */
   void Fsr2ReconstructPreviousDepthPassShaderRD::~Fsr2ReconstructPreviousDepthPassShaderRD(Fsr2ReconstructPreviousDepthPassShaderRD *this) {
      *(undefined***)this = &PTR__Fsr2ReconstructPreviousDepthPassShaderRD_00110598;
      ShaderRD::~ShaderRD((ShaderRD*)this);
      return;
   }

   /* Fsr2ReconstructPreviousDepthPassShaderRD::~Fsr2ReconstructPreviousDepthPassShaderRD() */
   void Fsr2ReconstructPreviousDepthPassShaderRD::~Fsr2ReconstructPreviousDepthPassShaderRD(Fsr2ReconstructPreviousDepthPassShaderRD *this) {
      *(undefined***)this = &PTR__Fsr2ReconstructPreviousDepthPassShaderRD_00110598;
      ShaderRD::~ShaderRD((ShaderRD*)this);
      operator_delete(this, 0x178);
      return;
   }

   /* Fsr2LockPassShaderRD::~Fsr2LockPassShaderRD() */
   void Fsr2LockPassShaderRD::~Fsr2LockPassShaderRD(Fsr2LockPassShaderRD *this) {
      *(undefined***)this = &PTR__Fsr2LockPassShaderRD_00110558;
      ShaderRD::~ShaderRD((ShaderRD*)this);
      return;
   }

   /* Fsr2LockPassShaderRD::~Fsr2LockPassShaderRD() */
   void Fsr2LockPassShaderRD::~Fsr2LockPassShaderRD(Fsr2LockPassShaderRD *this) {
      *(undefined***)this = &PTR__Fsr2LockPassShaderRD_00110558;
      ShaderRD::~ShaderRD((ShaderRD*)this);
      operator_delete(this, 0x178);
      return;
   }

   /* Fsr2AccumulatePassShaderRD::~Fsr2AccumulatePassShaderRD() */
   void Fsr2AccumulatePassShaderRD::~Fsr2AccumulatePassShaderRD(Fsr2AccumulatePassShaderRD *this) {
      *(undefined***)this = &PTR__Fsr2AccumulatePassShaderRD_001104d8;
      ShaderRD::~ShaderRD((ShaderRD*)this);
      return;
   }

   /* Fsr2AccumulatePassShaderRD::~Fsr2AccumulatePassShaderRD() */
   void Fsr2AccumulatePassShaderRD::~Fsr2AccumulatePassShaderRD(Fsr2AccumulatePassShaderRD *this) {
      *(undefined***)this = &PTR__Fsr2AccumulatePassShaderRD_001104d8;
      ShaderRD::~ShaderRD((ShaderRD*)this);
      operator_delete(this, 0x178);
      return;
   }

   /* Fsr2RcasPassShaderRD::~Fsr2RcasPassShaderRD() */
   void Fsr2RcasPassShaderRD::~Fsr2RcasPassShaderRD(Fsr2RcasPassShaderRD *this) {
      *(undefined***)this = &PTR__Fsr2RcasPassShaderRD_00110578;
      ShaderRD::~ShaderRD((ShaderRD*)this);
      return;
   }

   /* Fsr2RcasPassShaderRD::~Fsr2RcasPassShaderRD() */
   void Fsr2RcasPassShaderRD::~Fsr2RcasPassShaderRD(Fsr2RcasPassShaderRD *this) {
      *(undefined***)this = &PTR__Fsr2RcasPassShaderRD_00110578;
      ShaderRD::~ShaderRD((ShaderRD*)this);
      operator_delete(this, 0x178);
      return;
   }

   /* Fsr2ComputeLuminancePyramidPassShaderRD::~Fsr2ComputeLuminancePyramidPassShaderRD() */
   void Fsr2ComputeLuminancePyramidPassShaderRD::~Fsr2ComputeLuminancePyramidPassShaderRD(Fsr2ComputeLuminancePyramidPassShaderRD *this) {
      *(undefined***)this = &PTR__Fsr2ComputeLuminancePyramidPassShaderRD_00110518;
      ShaderRD::~ShaderRD((ShaderRD*)this);
      return;
   }

   /* Fsr2ComputeLuminancePyramidPassShaderRD::~Fsr2ComputeLuminancePyramidPassShaderRD() */
   void Fsr2ComputeLuminancePyramidPassShaderRD::~Fsr2ComputeLuminancePyramidPassShaderRD(Fsr2ComputeLuminancePyramidPassShaderRD *this) {
      *(undefined***)this = &PTR__Fsr2ComputeLuminancePyramidPassShaderRD_00110518;
      ShaderRD::~ShaderRD((ShaderRD*)this);
      operator_delete(this, 0x178);
      return;
   }

   /* Fsr2AutogenReactivePassShaderRD::~Fsr2AutogenReactivePassShaderRD() */
   void Fsr2AutogenReactivePassShaderRD::~Fsr2AutogenReactivePassShaderRD(Fsr2AutogenReactivePassShaderRD *this) {
      *(undefined***)this = &PTR__Fsr2AutogenReactivePassShaderRD_001104f8;
      ShaderRD::~ShaderRD((ShaderRD*)this);
      return;
   }

   /* Fsr2AutogenReactivePassShaderRD::~Fsr2AutogenReactivePassShaderRD() */
   void Fsr2AutogenReactivePassShaderRD::~Fsr2AutogenReactivePassShaderRD(Fsr2AutogenReactivePassShaderRD *this) {
      *(undefined***)this = &PTR__Fsr2AutogenReactivePassShaderRD_001104f8;
      ShaderRD::~ShaderRD((ShaderRD*)this);
      operator_delete(this, 0x178);
      return;
   }

   /* Fsr2TcrAutogenPassShaderRD::~Fsr2TcrAutogenPassShaderRD() */
   void Fsr2TcrAutogenPassShaderRD::~Fsr2TcrAutogenPassShaderRD(Fsr2TcrAutogenPassShaderRD *this) {
      *(undefined***)this = &PTR__Fsr2TcrAutogenPassShaderRD_001105b8;
      ShaderRD::~ShaderRD((ShaderRD*)this);
      return;
   }

   /* Fsr2TcrAutogenPassShaderRD::~Fsr2TcrAutogenPassShaderRD() */
   void Fsr2TcrAutogenPassShaderRD::~Fsr2TcrAutogenPassShaderRD(Fsr2TcrAutogenPassShaderRD *this) {
      *(undefined***)this = &PTR__Fsr2TcrAutogenPassShaderRD_001105b8;
      ShaderRD::~ShaderRD((ShaderRD*)this);
      operator_delete(this, 0x178);
      return;
   }

   /* CowData<RID>::_copy_on_write() [clone .isra.0] [clone .cold] */
   void CowData<RID>::_copy_on_write(void) {
      code *pcVar1;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* CowData<FfxResourceBinding>::_copy_on_write() [clone .isra.0] [clone .cold] */
   void CowData<FfxResourceBinding>::_copy_on_write(void) {
      code *pcVar1;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */
   void CowData<String>::_copy_on_write(void) {
      code *pcVar1;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* CowData<Vector<unsigned char> >::_copy_on_write() [clone .isra.0] [clone .cold] */
   void CowData<Vector<unsigned_char>>::_copy_on_write(void) {
      code *pcVar1;
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

   /* RendererRD::FSR2Context::Resources::remove(unsigned int) */
   void RendererRD::FSR2Context::Resources::remove(Resources *this, uint param_1) {
      undefined1(*pauVar1)[16];
      long lVar2;
      code *pcVar3;
      int *piVar4;
      void *pvVar5;
      ulong uVar6;
      undefined4 *puVar7;
      ulong uVar8;
      uint uVar9;
      uVar8 = (ulong)param_1;
      uVar9 = *(uint*)( this + 0x50 );
      pvVar5 = *(void**)( this + 0x58 );
      if (uVar9 == *(uint*)( this + 0x54 )) {
         uVar6 = ( ulong )(uVar9 * 2);
         if (uVar9 * 2 == 0) {
            uVar6 = 1;
         }

         *(int*)( this + 0x54 ) = (int)uVar6;
         pvVar5 = (void*)Memory::realloc_static(pvVar5, uVar6 * 4, false);
         *(void**)( this + 0x58 ) = pvVar5;
         if (pvVar5 == (void*)0x0) {
            _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         uVar9 = *(uint*)( this + 0x50 );
      }

      *(uint*)( this + 0x50 ) = uVar9 + 1;
      *(uint*)( (long)pvVar5 + (ulong)uVar9 * 4 ) = param_1;
      uVar6 = ( ulong ) * (uint*)this;
      if (param_1 < *(uint*)this) {
         uVar9 = *(uint*)( this + 0x10 );
         uVar6 = (ulong)uVar9;
         *(undefined8*)( *(long*)( this + 8 ) + uVar8 * 8 ) = 0;
         if (param_1 < uVar9) {
            piVar4 = (int*)( uVar8 * 0x10 + *(long*)( this + 0x18 ) );
            if (*piVar4 != 0) {
               *piVar4 = 0;
            }

            uVar6 = ( ulong ) * (uint*)( this + 0x20 );
            if (param_1 < *(uint*)( this + 0x20 )) {
               *(undefined4*)( *(long*)( this + 0x28 ) + uVar8 * 4 ) = 0;
               uVar6 = ( ulong ) * (uint*)( this + 0x30 );
               if (param_1 < *(uint*)( this + 0x30 )) {
                  uVar6 = 0;
                  pauVar1 = (undefined1(*) [16])( *(long*)( this + 0x38 ) + uVar8 * 0x1c );
                  *pauVar1 = (undefined1[16])0x0;
                  *(undefined1(*) [16])( *pauVar1 + 0xc ) = (undefined1[16])0x0;
                  uVar9 = *(uint*)( this + 0x40 );
                  lVar2 = *(long*)( this + 0x48 );
                  if (uVar9 != 0) {
                     do {
                        if (*(uint*)( lVar2 + uVar6 * 4 ) == param_1) {
                           uVar8 = uVar6 & 0xffffffff;
                           if (uVar9 <= (uint)uVar6) {
                              _err_print_index_error("remove_at", "./core/templates/local_vector.h", 0x4c, uVar6, (ulong)uVar9, "p_index", "count", "", false, false);
                              return;
                           }

                           *(uint*)( this + 0x40 ) = uVar9 - 1;
                           if (uVar9 - 1 <= (uint)uVar6) {
                              return;
                           }

                           puVar7 = (undefined4*)( lVar2 + uVar6 * 4 );
                           do {
                              uVar9 = (int)uVar8 + 1;
                              uVar8 = (ulong)uVar9;
                              *puVar7 = *(undefined4*)( lVar2 + uVar8 * 4 );
                              puVar7 = puVar7 + 1;
                           }
 while ( uVar9 < *(uint*)( this + 0x40 ) );
                           return;
                        }

                        uVar6 = uVar6 + 1;
                     }
 while ( uVar9 != uVar6 );
                  }

                  return;
               }

            }

         }

      }

      _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar8, uVar6, "p_index", "count", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   /* RendererRD::FSR2Effect::{unnamed type#1}::FSR2Effect() */
   void RendererRD::FSR2Effect::{unnamed_type#1}::FSR2Effect(_unnamed_type_1_ *this) {
      ShaderRD::ShaderRD((ShaderRD*)this);
      *(undefined***)this = &PTR__Fsr2DepthClipPassShaderRD_00110538;
      ShaderRD::setup((char*)this, (char*)0x0, (char*)0x0, "\n#version 450\n\n#VERSION_DEFINES\n\nvec2 derive_motion_vector(vec2 uv, float depth, mat4 reprojection_matrix) {\n\tvec4 previous_pos_ndc = reprojection_matrix * vec4(uv * 2.0f - 1.0f, depth * 2.0f - 1.0f, 1.0f);\n\treturn 0.5f + (previous_pos_ndc.xy / previous_pos_ndc.w) * 0.5f - uv;\n}\n\n#define FFX_FSR2_OPTION_GODOT_DERIVE_INVALID_MOTION_VECTORS_FUNCTION(i, j, k) derive_motion_vector(i, j, k)\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n#extension GL_GOOGLE_include_directive : require\n#extension GL_EXT_samplerless_texture_functions : require\n\n#define FSR2_BIND_SRV_RECONSTRUCTED_PREV_NEAREST_DEPTH      0\n#define FSR2_BIND_SRV_DILATED_MOTION_VECTORS                1\n#define FSR2_BIND_SRV_DILATED_DEPTH                         2\n#define FSR2_BIND_SRV_REACTIVE_MASK                         3\n#define FSR2_BIND_SRV_TRANSPARENCY_AND_COMPOSITION_MASK     4\n#define FSR2_BIND_SRV_PREVIOUS_DILATED_MOTION_VECTORS       6\n#define FSR2_BIND_SRV_INPUT_MOTION_VECTORS                  7\n#define FSR2_BIND_SRV_INPUT_COLOR                           8\n#define FSR2_BIND_SRV_INPUT_DEPTH                           9\n#define FSR2_BIND_SRV_INPUT_EXPOSURE                        10\n\n#define FSR2_BIND_UAV_DEPTH_CLIP                            11\n#define FSR2_BIND_UAV_DILATED_REACTIVE_MASKS                12\n#define FSR2_BIND_UAV_PREPARED_INPUT_COLOR                  13\n\n#define FSR2_BIND_CB_FSR2                                   14\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n#ifndef FFX_FSR2_RESOURCES_H\n#define FFX_FSR2_RESOURCES_H\n\n#if defined(FFX_CPU) || defined(FFX_GPU)\n#define FFX_FSR2_RESOURCE_IDENTIFIER_NULL                                           0\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_OPAQUE_ONLY                              1\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_COLOR                                    2\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_MOTION_VECTORS                           3\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_DEPTH                                    4\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_EXPOSURE                              ...", /* TRUNCATED STRING LITERAL */);
      ShaderRD::ShaderRD((ShaderRD*)( this + 0x178 ));
      *(undefined***)( this + 0x178 ) = &PTR__Fsr2ReconstructPreviousDepthPassShaderRD_00110598;
      ShaderRD::setup((char*)( this + 0x178 ), (char*)0x0, (char*)0x0, "\n#version 450\n\n#VERSION_DEFINES\n\nvec2 derive_motion_vector(vec2 uv, float depth, mat4 reprojection_matrix) {\n\tvec4 previous_pos_ndc = reprojection_matrix * vec4(uv * 2.0f - 1.0f, depth * 2.0f - 1.0f, 1.0f);\n\treturn 0.5f + (previous_pos_ndc.xy / previous_pos_ndc.w) * 0.5f - uv;\n}\n\n#define FFX_FSR2_OPTION_GODOT_DERIVE_INVALID_MOTION_VECTORS_FUNCTION(i, j, k) derive_motion_vector(i, j, k)\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n#extension GL_GOOGLE_include_directive : require\n#extension GL_EXT_samplerless_texture_functions : require\n\n#define FSR2_BIND_SRV_INPUT_MOTION_VECTORS                  0\n#define FSR2_BIND_SRV_INPUT_DEPTH                           1\n#define FSR2_BIND_SRV_INPUT_COLOR                           2\n#define FSR2_BIND_SRV_INPUT_EXPOSURE                        3\n#define FSR2_BIND_SRV_LUMA_HISTORY                          4\n\n#define FSR2_BIND_UAV_RECONSTRUCTED_PREV_NEAREST_DEPTH      5\n#define FSR2_BIND_UAV_DILATED_MOTION_VECTORS                6\n#define FSR2_BIND_UAV_DILATED_DEPTH                         7\n#define FSR2_BIND_UAV_PREPARED_INPUT_COLOR                  8\n#define FSR2_BIND_UAV_LUMA_HISTORY                          9\n#define FSR2_BIND_UAV_LUMA_INSTABILITY                      10\n#define FSR2_BIND_UAV_LOCK_INPUT_LUMA                       11\n\n#define FSR2_BIND_CB_FSR2                                   12\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n#ifndef FFX_FSR2_RESOURCES_H\n#define FFX_FSR2_RESOURCES_H\n\n#if defined(FFX_CPU) || defined(FFX_GPU)\n#define FFX_FSR2_RESOURCE_IDENTIFIER_NULL                                           0\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_OPAQUE_ONLY                              1\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_COLOR                                    2\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_MOTION_VECTORS                           3\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_DEPTH                                    4\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_EXPOSURE                                 5\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_REACTIVE_MASK   ...", /* TRUNCATED STRING LITERAL */);
      ShaderRD::ShaderRD((ShaderRD*)( this + 0x2f0 ));
      *(undefined***)( this + 0x2f0 ) = &PTR__Fsr2LockPassShaderRD_00110558;
      ShaderRD::setup((char*)( this + 0x2f0 ), (char*)0x0, (char*)0x0, "\n#version 450\n\n#VERSION_DEFINES\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n#extension GL_GOOGLE_include_directive : require\n#extension GL_EXT_samplerless_texture_functions : require\n\n#define FSR2_BIND_SRV_LOCK_INPUT_LUMA                       0\n#define FSR2_BIND_UAV_NEW_LOCKS                             1\n#define FSR2_BIND_UAV_RECONSTRUCTED_PREV_NEAREST_DEPTH      2\n#define FSR2_BIND_CB_FSR2                                   3\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n#ifndef FFX_FSR2_RESOURCES_H\n#define FFX_FSR2_RESOURCES_H\n\n#if defined(FFX_CPU) || defined(FFX_GPU)\n#define FFX_FSR2_RESOURCE_IDENTIFIER_NULL                                           0\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_OPAQUE_ONLY                              1\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_COLOR                                    2\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_MOTION_VECTORS                           3\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_DEPTH                                    4\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_EXPOSURE                                 5\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_REACTIVE_MASK                            6\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_TRANSPARENCY_AND_COMPOSITION_MASK        7\n#define FFX_FSR2_RESOURCE_IDENTIFIER_RECONSTRUCTED_PREVIOUS_NEAREST_DEPTH           8\n#define FFX_FSR2_RESOURCE_IDENTIFIER_DILATED_MOTION_VECTORS                         9\n#define FFX_FSR2_RESOURCE_IDENTIFIER_DILATED_DEPTH                                  10\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INTERNAL_UPSCALED_COLOR                        11\n#define FFX_FSR2_RESOURCE_IDENTIFIER_LOCK_STATUS                                    12\n#define FFX_FSR2_RESOURCE_IDENTIFIER_NEW_LOCKS                                      13\n#define FFX_FSR2_RESOURCE_IDENTIFIER_PREPARED_INPUT_COLOR                           14\n#define FFX_FSR2_RESOURCE_IDENTIFIER_LUMA_HISTORY                                   15\n#define FFX_FSR2_RESOURCE_IDENTIFIER_DEBUG_OUTPUT                                   16\n#define FFX_FSR2_RESOURCE...", /* TRUNCATED STRING LITERAL */);
      ShaderRD::ShaderRD((ShaderRD*)( this + 0x468 ));
      *(undefined***)( this + 0x468 ) = &PTR__Fsr2AccumulatePassShaderRD_001104d8;
      ShaderRD::setup((char*)( this + 0x468 ), (char*)0x0, (char*)0x0, "\n#version 450\n\n#VERSION_DEFINES\n\nvec2 derive_motion_vector(vec2 uv, float depth, mat4 reprojection_matrix) {\n\tvec4 previous_pos_ndc = reprojection_matrix * vec4(uv * 2.0f - 1.0f, depth * 2.0f - 1.0f, 1.0f);\n\treturn 0.5f + (previous_pos_ndc.xy / previous_pos_ndc.w) * 0.5f - uv;\n}\n\n#define FFX_FSR2_OPTION_GODOT_DERIVE_INVALID_MOTION_VECTORS_FUNCTION(i, j, k) derive_motion_vector(i, j, k)\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n#extension GL_GOOGLE_include_directive : require\n#extension GL_EXT_samplerless_texture_functions : require\n\n#extension GL_EXT_shader_image_load_formatted : require\n\n#define FSR2_BIND_SRV_INPUT_EXPOSURE                         0\n#define FSR2_BIND_SRV_DILATED_REACTIVE_MASKS                 1\n#if FFX_FSR2_OPTION_LOW_RESOLUTION_MOTION_VECTORS\n#define FSR2_BIND_SRV_DILATED_MOTION_VECTORS                 2\n#else\n#define FSR2_BIND_SRV_INPUT_MOTION_VECTORS                   2\n#endif\n#define FSR2_BIND_SRV_INTERNAL_UPSCALED                      3\n#define FSR2_BIND_SRV_LOCK_STATUS                            4\n\n#define FSR2_BIND_SRV_PREPARED_INPUT_COLOR                   6\n#define FSR2_BIND_SRV_LUMA_INSTABILITY                       7\n#define FSR2_BIND_SRV_LANCZOS_LUT                            8\n#define FSR2_BIND_SRV_UPSCALE_MAXIMUM_BIAS_LUT               9\n#define FSR2_BIND_SRV_SCENE_LUMINANCE_MIPS                   10\n#define FSR2_BIND_SRV_AUTO_EXPOSURE                          11\n#define FSR2_BIND_SRV_LUMA_HISTORY                           12\n\n#define FSR2_BIND_UAV_INTERNAL_UPSCALED                      13\n#define FSR2_BIND_UAV_LOCK_STATUS                            14\n#define FSR2_BIND_UAV_UPSCALED_OUTPUT                        15\n#define FSR2_BIND_UAV_NEW_LOCKS                              16\n#define FSR2_BIND_UAV_LUMA_HISTORY                           17\n\n#define FSR2_BIND_CB_FSR2                                    18\n\n#if FFX_FSR2_OPTION_GODOT_DERIVE_INVALID_MOTION_VECTORS\n#define FSR2_BIND_SRV_INPUT_DEPTH                            5\n#endif\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n#ifndef FFX_FSR2_RESOURCES_H\n#...", /* TRUNCATED STRING LITERAL */);
      ShaderRD::ShaderRD((ShaderRD*)( this + 0x5e0 ));
      *(undefined***)( this + 0x5e0 ) = &PTR__Fsr2AccumulatePassShaderRD_001104d8;
      ShaderRD::setup((char*)( this + 0x5e0 ), (char*)0x0, (char*)0x0, "\n#version 450\n\n#VERSION_DEFINES\n\nvec2 derive_motion_vector(vec2 uv, float depth, mat4 reprojection_matrix) {\n\tvec4 previous_pos_ndc = reprojection_matrix * vec4(uv * 2.0f - 1.0f, depth * 2.0f - 1.0f, 1.0f);\n\treturn 0.5f + (previous_pos_ndc.xy / previous_pos_ndc.w) * 0.5f - uv;\n}\n\n#define FFX_FSR2_OPTION_GODOT_DERIVE_INVALID_MOTION_VECTORS_FUNCTION(i, j, k) derive_motion_vector(i, j, k)\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n#extension GL_GOOGLE_include_directive : require\n#extension GL_EXT_samplerless_texture_functions : require\n\n#extension GL_EXT_shader_image_load_formatted : require\n\n#define FSR2_BIND_SRV_INPUT_EXPOSURE                         0\n#define FSR2_BIND_SRV_DILATED_REACTIVE_MASKS                 1\n#if FFX_FSR2_OPTION_LOW_RESOLUTION_MOTION_VECTORS\n#define FSR2_BIND_SRV_DILATED_MOTION_VECTORS                 2\n#else\n#define FSR2_BIND_SRV_INPUT_MOTION_VECTORS                   2\n#endif\n#define FSR2_BIND_SRV_INTERNAL_UPSCALED                      3\n#define FSR2_BIND_SRV_LOCK_STATUS                            4\n\n#define FSR2_BIND_SRV_PREPARED_INPUT_COLOR                   6\n#define FSR2_BIND_SRV_LUMA_INSTABILITY                       7\n#define FSR2_BIND_SRV_LANCZOS_LUT                            8\n#define FSR2_BIND_SRV_UPSCALE_MAXIMUM_BIAS_LUT               9\n#define FSR2_BIND_SRV_SCENE_LUMINANCE_MIPS                   10\n#define FSR2_BIND_SRV_AUTO_EXPOSURE                          11\n#define FSR2_BIND_SRV_LUMA_HISTORY                           12\n\n#define FSR2_BIND_UAV_INTERNAL_UPSCALED                      13\n#define FSR2_BIND_UAV_LOCK_STATUS                            14\n#define FSR2_BIND_UAV_UPSCALED_OUTPUT                        15\n#define FSR2_BIND_UAV_NEW_LOCKS                              16\n#define FSR2_BIND_UAV_LUMA_HISTORY                           17\n\n#define FSR2_BIND_CB_FSR2                                    18\n\n#if FFX_FSR2_OPTION_GODOT_DERIVE_INVALID_MOTION_VECTORS\n#define FSR2_BIND_SRV_INPUT_DEPTH                            5\n#endif\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n#ifndef FFX_FSR2_RESOURCES_H\n#...", /* TRUNCATED STRING LITERAL */);
      ShaderRD::ShaderRD((ShaderRD*)( this + 0x758 ));
      *(undefined***)( this + 0x758 ) = &PTR__Fsr2RcasPassShaderRD_00110578;
      ShaderRD::setup((char*)( this + 0x758 ), (char*)0x0, (char*)0x0, "\n#version 450\n\n#VERSION_DEFINES\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n#extension GL_GOOGLE_include_directive : require\n#extension GL_EXT_samplerless_texture_functions : require\n\n#extension GL_EXT_shader_image_load_formatted : require\n\n#define FSR2_BIND_SRV_INPUT_EXPOSURE        0\n#define FSR2_BIND_SRV_RCAS_INPUT            1\n#define FSR2_BIND_UAV_UPSCALED_OUTPUT       2\n#define FSR2_BIND_CB_FSR2                   3\n#define FSR2_BIND_CB_RCAS                   4\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n#ifndef FFX_FSR2_RESOURCES_H\n#define FFX_FSR2_RESOURCES_H\n\n#if defined(FFX_CPU) || defined(FFX_GPU)\n#define FFX_FSR2_RESOURCE_IDENTIFIER_NULL                                           0\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_OPAQUE_ONLY                              1\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_COLOR                                    2\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_MOTION_VECTORS                           3\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_DEPTH                                    4\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_EXPOSURE                                 5\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_REACTIVE_MASK                            6\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_TRANSPARENCY_AND_COMPOSITION_MASK        7\n#define FFX_FSR2_RESOURCE_IDENTIFIER_RECONSTRUCTED_PREVIOUS_NEAREST_DEPTH           8\n#define FFX_FSR2_RESOURCE_IDENTIFIER_DILATED_MOTION_VECTORS                         9\n#define FFX_FSR2_RESOURCE_IDENTIFIER_DILATED_DEPTH                                  10\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INTERNAL_UPSCALED_COLOR                        11\n#define FFX_FSR2_RESOURCE_IDENTIFIER_LOCK_STATUS                                    12\n#define FFX_FSR2_RESOURCE_IDENTIFIER_NEW_LOCKS                                      13\n#define FFX_FSR2_RESOURCE_IDENTIFIER_PREPARED_INPUT_COLOR                           14\n#define FFX_FSR2_RESOURCE_IDENTIFIER_LUMA_HISTORY                                   15\n#define FFX_FSR2_RESOURCE_IDENTIFIER_DEBUG_OUTPUT                        ...", /* TRUNCATED STRING LITERAL */);
      ShaderRD::ShaderRD((ShaderRD*)( this + 0x8d0 ));
      *(undefined***)( this + 0x8d0 ) = &PTR__Fsr2ComputeLuminancePyramidPassShaderRD_00110518;
      ShaderRD::setup((char*)( this + 0x8d0 ), (char*)0x0, (char*)0x0, "\n#version 450\n\n#VERSION_DEFINES\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n#extension GL_GOOGLE_include_directive : require\n#extension GL_EXT_samplerless_texture_functions : require\n\n#define FSR2_BIND_SRV_INPUT_COLOR                     0\n#define FSR2_BIND_UAV_SPD_GLOBAL_ATOMIC               1\n#define FSR2_BIND_UAV_EXPOSURE_MIP_LUMA_CHANGE        2\n#define FSR2_BIND_UAV_EXPOSURE_MIP_5                  3\n#define FSR2_BIND_UAV_AUTO_EXPOSURE                   4\n#define FSR2_BIND_CB_FSR2                             5\n#define FSR2_BIND_CB_SPD                              6\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n#ifndef FFX_FSR2_RESOURCES_H\n#define FFX_FSR2_RESOURCES_H\n\n#if defined(FFX_CPU) || defined(FFX_GPU)\n#define FFX_FSR2_RESOURCE_IDENTIFIER_NULL                                           0\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_OPAQUE_ONLY                              1\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_COLOR                                    2\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_MOTION_VECTORS                           3\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_DEPTH                                    4\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_EXPOSURE                                 5\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_REACTIVE_MASK                            6\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_TRANSPARENCY_AND_COMPOSITION_MASK        7\n#define FFX_FSR2_RESOURCE_IDENTIFIER_RECONSTRUCTED_PREVIOUS_NEAREST_DEPTH           8\n#define FFX_FSR2_RESOURCE_IDENTIFIER_DILATED_MOTION_VECTORS                         9\n#define FFX_FSR2_RESOURCE_IDENTIFIER_DILATED_DEPTH                                  10\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INTERNAL_UPSCALED_COLOR                        11\n#define FFX_FSR2_RESOURCE_IDENTIFIER_LOCK_STATUS                                    12\n#define FFX_FSR2_RESOURCE_IDENTIFIER_NEW_LOCKS                                      13\n#define FFX_FSR2_RESOURCE_IDENTIFIER_PREPARED_INPUT_COLOR                           14\n#define FFX_FSR2_RESOURCE_IDENTIFIER_LUMA_HISTORY      ...", /* TRUNCATED STRING LITERAL */);
      ShaderRD::ShaderRD((ShaderRD*)( this + 0xa48 ));
      *(undefined***)( this + 0xa48 ) = &PTR__Fsr2AutogenReactivePassShaderRD_001104f8;
      ShaderRD::setup((char*)( this + 0xa48 ), (char*)0x0, (char*)0x0, "\n#version 450\n\n#VERSION_DEFINES\n\nvec2 derive_motion_vector(vec2 uv, float depth, mat4 reprojection_matrix) {\n\tvec4 previous_pos_ndc = reprojection_matrix * vec4(uv * 2.0f - 1.0f, depth * 2.0f - 1.0f, 1.0f);\n\treturn 0.5f + (previous_pos_ndc.xy / previous_pos_ndc.w) * 0.5f - uv;\n}\n\n#define FFX_FSR2_OPTION_GODOT_DERIVE_INVALID_MOTION_VECTORS_FUNCTION(i, j, k) derive_motion_vector(i, j, k)\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n#extension GL_GOOGLE_include_directive : require\n#extension GL_EXT_samplerless_texture_functions : require\n\n#define FSR2_BIND_SRV_INPUT_OPAQUE_ONLY                     0\n#define FSR2_BIND_SRV_INPUT_COLOR                           1\n#define FSR2_BIND_UAV_AUTOREACTIVE                          2\n#define FSR2_BIND_CB_REACTIVE                               3\n#define FSR2_BIND_CB_FSR2                                   4\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n#ifndef FFX_FSR2_RESOURCES_H\n#define FFX_FSR2_RESOURCES_H\n\n#if defined(FFX_CPU) || defined(FFX_GPU)\n#define FFX_FSR2_RESOURCE_IDENTIFIER_NULL                                           0\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_OPAQUE_ONLY                              1\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_COLOR                                    2\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_MOTION_VECTORS                           3\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_DEPTH                                    4\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_EXPOSURE                                 5\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_REACTIVE_MASK                            6\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_TRANSPARENCY_AND_COMPOSITION_MASK        7\n#define FFX_FSR2_RESOURCE_IDENTIFIER_RECONSTRUCTED_PREVIOUS_NEAREST_DEPTH           8\n#define FFX_FSR2_RESOURCE_IDENTIFIER_DILATED_MOTION_VECTORS                         9\n#define FFX_FSR2_RESOURCE_IDENTIFIER_DILATED_DEPTH                                  10\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INTERNAL_UPSCALED_COLOR                        11\n#define FFX_FSR2_RESOURCE_IDENTIFIER_LOCK_...", /* TRUNCATED STRING LITERAL */);
      ShaderRD::ShaderRD((ShaderRD*)( this + 0xbc0 ));
      *(undefined***)( this + 0xbc0 ) = &PTR__Fsr2TcrAutogenPassShaderRD_001105b8;
      ShaderRD::setup((char*)( this + 0xbc0 ), (char*)0x0, (char*)0x0, "\n#version 450\n\n#VERSION_DEFINES\n\nvec2 derive_motion_vector(vec2 uv, float depth, mat4 reprojection_matrix) {\n\tvec4 previous_pos_ndc = reprojection_matrix * vec4(uv * 2.0f - 1.0f, depth * 2.0f - 1.0f, 1.0f);\n\treturn 0.5f + (previous_pos_ndc.xy / previous_pos_ndc.w) * 0.5f - uv;\n}\n\n#define FFX_FSR2_OPTION_GODOT_DERIVE_INVALID_MOTION_VECTORS_FUNCTION(i, j, k) derive_motion_vector(i, j, k)\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n#extension GL_GOOGLE_include_directive : require\n#extension GL_EXT_samplerless_texture_functions : require\n\n#define FSR2_BIND_SRV_INPUT_OPAQUE_ONLY                     0\n#define FSR2_BIND_SRV_INPUT_COLOR                           1\n#define FSR2_BIND_SRV_INPUT_MOTION_VECTORS                  2\n#define FSR2_BIND_SRV_PREV_PRE_ALPHA_COLOR                  3\n#define FSR2_BIND_SRV_PREV_POST_ALPHA_COLOR                 4\n#define FSR2_BIND_SRV_REACTIVE_MASK                         5\n#define FSR2_BIND_SRV_TRANSPARENCY_AND_COMPOSITION_MASK     6\n\n#define FSR2_BIND_UAV_AUTOREACTIVE                          7\n#define FSR2_BIND_UAV_AUTOCOMPOSITION                       8\n#define FSR2_BIND_UAV_PREV_PRE_ALPHA_COLOR                  9\n#define FSR2_BIND_UAV_PREV_POST_ALPHA_COLOR                 10\n\n#define FSR2_BIND_CB_FSR2\t\t\t\t\t\t\t\t\t11\n#define FSR2_BIND_CB_REACTIVE                               12\n\n#if FFX_FSR2_OPTION_GODOT_DERIVE_INVALID_MOTION_VECTORS\n#define FSR2_BIND_SRV_INPUT_DEPTH                           13\n#endif\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n#ifndef FFX_FSR2_RESOURCES_H\n#define FFX_FSR2_RESOURCES_H\n\n#if defined(FFX_CPU) || defined(FFX_GPU)\n#define FFX_FSR2_RESOURCE_IDENTIFIER_NULL                                           0\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_OPAQUE_ONLY                              1\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_COLOR                                    2\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_MOTION_VECTORS                           3\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_DEPTH                                    4\n#define FFX_FSR2_RESOURCE_IDENTIFIER_INPUT_E...", /* TRUNCATED STRING LITERAL */);
      return;
   }

   /* LocalVector<LocalVector<RID, unsigned int, false, false>, unsigned int, false,
   false>::resize(unsigned int) */
   void LocalVector<LocalVector<RID,unsigned_int,false,false>,unsigned_int,false,false>::resize(LocalVector<LocalVector<RID,unsigned_int,false,false>,unsigned_int,false,false> *this, uint param_1) {
      code *pcVar1;
      int *piVar2;
      undefined8 *puVar3;
      undefined8 *puVar4;
      uint uVar5;
      long lVar6;
      uint uVar7;
      uVar7 = *(uint*)this;
      if (param_1 < uVar7) {
         lVar6 = (ulong)param_1 << 4;
         uVar7 = param_1;
         do {
            piVar2 = (int*)( *(long*)( this + 8 ) + lVar6 );
            if (*(void**)( piVar2 + 2 ) != (void*)0x0) {
               if (*piVar2 != 0) {
                  *piVar2 = 0;
               }

               Memory::free_static(*(void**)( piVar2 + 2 ), false);
            }

            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + 0x10;
         }
 while ( uVar7 < *(uint*)this );
      }
 else {
         if (param_1 <= uVar7) {
            return;
         }

         uVar5 = param_1 - 1;
         if (*(uint*)( this + 4 ) < param_1) {
            uVar7 = uVar5 >> 1 | uVar5;
            uVar7 = uVar7 >> 2 | uVar7;
            uVar7 = uVar7 >> 4 | uVar7;
            uVar7 = uVar7 >> 8 | uVar7;
            uVar7 = ( uVar7 | uVar7 >> 0x10 ) + 1;
            *(uint*)( this + 4 ) = uVar7;
            lVar6 = Memory::realloc_static(*(void**)( this + 8 ), (ulong)uVar7 << 4, false);
            *(long*)( this + 8 ) = lVar6;
            if (lVar6 == 0) {
               _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            uVar7 = *(uint*)this;
            if (param_1 <= uVar7) goto LAB_00107859;
         }

         lVar6 = *(long*)( this + 8 );
         puVar3 = (undefined8*)( (ulong)uVar7 * 0x10 + lVar6 );
         do {
            *puVar3 = 0;
            puVar4 = puVar3 + 2;
            puVar3[1] = 0;
            puVar3 = puVar4;
         }
 while ( puVar4 != (undefined8*)( lVar6 + 0x10 + ( ( ulong )(uVar5 - uVar7) + (ulong)uVar7 ) * 0x10 ) );
      }

      LAB_00107859:*(uint*)this = param_1;
      return;
   }

   /* RendererRD::FSR2Context::Resources::add(RID, bool, unsigned int, FfxResourceDescription) */
   uint RendererRD::FSR2Context::Resources::add(uint *param_1, undefined8 param_2, char param_3, undefined4 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined1 param_9[16]) {
      undefined8 *puVar1;
      code *pcVar2;
      uint uVar3;
      int *piVar4;
      long lVar5;
      void *pvVar6;
      uint uVar7;
      ulong uVar8;
      ulong uVar9;
      uint uVar10;
      uVar10 = *param_1;
      if (param_1[0x14] == 0) {
         uVar7 = uVar10 + 1;
         if (uVar10 != 0xffffffff) {
            uVar3 = uVar10;
            if (param_1[1] < uVar7) {
               uVar3 = uVar10 >> 1 | uVar10;
               uVar3 = uVar3 | uVar3 >> 2;
               uVar3 = uVar3 | uVar3 >> 4;
               uVar3 = uVar3 | uVar3 >> 8;
               uVar3 = ( uVar3 | uVar3 >> 0x10 ) + 1;
               param_1[1] = uVar3;
               lVar5 = Memory::realloc_static(*(void**)( param_1 + 2 ), (ulong)uVar3 * 8, false);
               *(long*)( param_1 + 2 ) = lVar5;
               if (lVar5 == 0) goto LAB_00107c29;
               uVar3 = *param_1;
               if (uVar3 < uVar7) goto LAB_00107994;
            }
 else {
               LAB_00107994:memset((void*)( *(long*)( param_1 + 2 ) + (ulong)uVar3 * 8 ), 0, ( ulong )(uVar10 - uVar3) * 8 + 8);
            }

            *param_1 = uVar7;
            LocalVector<LocalVector<RID,unsigned_int,false,false>,unsigned_int,false,false>::resize((LocalVector<LocalVector<RID,unsigned_int,false,false>,unsigned_int,false,false>*)( param_1 + 4 ), uVar7);
            if (uVar7 < param_1[8]) {
               LAB_001079d8:param_1[8] = uVar7;
            }
 else if (param_1[8] < uVar7) {
               if (param_1[9] < uVar7) {
                  uVar3 = uVar10 >> 1 | uVar10;
                  uVar3 = uVar3 | uVar3 >> 2;
                  uVar3 = uVar3 | uVar3 >> 4;
                  uVar3 = uVar3 | uVar3 >> 8;
                  uVar3 = ( uVar3 | uVar3 >> 0x10 ) + 1;
                  param_1[9] = uVar3;
                  lVar5 = Memory::realloc_static(*(void**)( param_1 + 10 ), (ulong)uVar3 * 4, false);
                  *(long*)( param_1 + 10 ) = lVar5;
                  if (lVar5 == 0) goto LAB_00107c29;
               }

               goto LAB_001079d8;
            }

            if (uVar7 < param_1[0xc]) {
               LAB_001079ef:param_1[0xc] = uVar7;
            }
 else if (param_1[0xc] < uVar7) {
               if (param_1[0xd] < uVar7) {
                  uVar3 = uVar10 >> 1 | uVar10;
                  uVar3 = uVar3 | uVar3 >> 2;
                  uVar3 = uVar3 | uVar3 >> 4;
                  uVar3 = uVar3 >> 8 | uVar3;
                  uVar3 = ( uVar3 >> 0x10 | uVar3 ) + 1;
                  param_1[0xd] = uVar3;
                  lVar5 = Memory::realloc_static(*(void**)( param_1 + 0xe ), (ulong)uVar3 * 0x1c, false);
                  *(long*)( param_1 + 0xe ) = lVar5;
                  if (lVar5 == 0) {
                     LAB_00107c29:_err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar2 = (code*)invalidInstructionException();
                     ( *pcVar2 )();
                  }

               }

               goto LAB_001079ef;
            }

            uVar3 = uVar10;
            uVar10 = *param_1;
            goto LAB_001079f5;
         }

         *param_1 = 0;
         LocalVector<LocalVector<RID,unsigned_int,false,false>,unsigned_int,false,false>::resize((LocalVector<LocalVector<RID,unsigned_int,false,false>,unsigned_int,false,false>*)( param_1 + 4 ), 0);
         if (param_1[8] == 0) {
            if (param_1[0xc] != 0) {
               param_1[0xc] = 0;
            }

         }
 else {
            param_1[8] = 0;
            if (param_1[0xc] != 0) goto LAB_001079ef;
         }

         uVar10 = *param_1;
         uVar3 = 0xffffffff;
      }
 else {
         uVar7 = param_1[0x14] - 1;
         uVar3 = *(uint*)( *(long*)( param_1 + 0x16 ) + (ulong)uVar7 * 4 );
         param_1[0x14] = uVar7;
         LAB_001079f5:if (uVar3 < uVar10) {
            uVar10 = param_1[4];
            uVar9 = (ulong)uVar10;
            uVar8 = (ulong)uVar3;
            *(undefined8*)( *(long*)( param_1 + 2 ) + uVar8 * 8 ) = param_2;
            if (uVar3 < uVar10) {
               piVar4 = (int*)( uVar8 * 0x10 + *(long*)( param_1 + 6 ) );
               if (*piVar4 != 0) {
                  *piVar4 = 0;
               }

               uVar9 = (ulong)param_1[8];
               if (uVar3 < param_1[8]) {
                  *(undefined4*)( *(long*)( param_1 + 10 ) + uVar8 * 4 ) = param_4;
                  uVar9 = (ulong)param_1[0xc];
                  if (uVar3 < param_1[0xc]) {
                     puVar1 = (undefined8*)( *(long*)( param_1 + 0xe ) + uVar8 * 0x1c );
                     *puVar1 = param_7;
                     puVar1[1] = param_8;
                     *(ulong*)( (long)puVar1 + 0xc ) = CONCAT44(param_9._0_4_, param_8._4_4_);
                     *(undefined8*)( (long)puVar1 + 0x14 ) = param_9._4_8_;
                     if (param_3 != '\0') {
                        uVar10 = param_1[0x10];
                        pvVar6 = *(void**)( param_1 + 0x12 );
                        if (uVar10 == param_1[0x11]) {
                           uVar8 = ( ulong )(uVar10 * 2);
                           if (uVar10 * 2 == 0) {
                              uVar8 = 1;
                           }

                           param_1[0x11] = (uint)uVar8;
                           pvVar6 = (void*)Memory::realloc_static(pvVar6, uVar8 * 4, false);
                           *(void**)( param_1 + 0x12 ) = pvVar6;
                           if (pvVar6 == (void*)0x0) {
                              _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                              _err_flush_stdout();
                              /* WARNING: Does not return */
                              pcVar2 = (code*)invalidInstructionException();
                              ( *pcVar2 )();
                           }

                           uVar10 = param_1[0x10];
                        }

                        param_1[0x10] = uVar10 + 1;
                        *(uint*)( (long)pvVar6 + (ulong)uVar10 * 4 ) = uVar3;
                     }

                     return uVar3;
                  }

               }

            }

            goto LAB_00107ad3;
         }

      }

      uVar8 = (ulong)uVar3;
      uVar9 = (ulong)uVar10;
      LAB_00107ad3:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar8, uVar9, "p_index", "count", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   /* RendererRD::FSR2Context::Scratch::~Scratch() */
   void RendererRD::FSR2Context::Scratch::~Scratch(Scratch *this) {
      if (*(void**)( this + 0x68 ) != (void*)0x0) {
         if (*(int*)( this + 0x60 ) != 0) {
            *(undefined4*)( this + 0x60 ) = 0;
         }

         Memory::free_static(*(void**)( this + 0x68 ), false);
      }

      if (*(void**)( this + 0x58 ) != (void*)0x0) {
         if (*(int*)( this + 0x50 ) != 0) {
            *(undefined4*)( this + 0x50 ) = 0;
         }

         Memory::free_static(*(void**)( this + 0x58 ), false);
      }

      if (*(void**)( this + 0x48 ) != (void*)0x0) {
         if (*(int*)( this + 0x40 ) != 0) {
            *(undefined4*)( this + 0x40 ) = 0;
         }

         Memory::free_static(*(void**)( this + 0x48 ), false);
      }

      if (*(void**)( this + 0x38 ) != (void*)0x0) {
         if (*(int*)( this + 0x30 ) != 0) {
            *(undefined4*)( this + 0x30 ) = 0;
         }

         Memory::free_static(*(void**)( this + 0x38 ), false);
      }

      if (*(void**)( this + 0x28 ) != (void*)0x0) {
         if (*(int*)( this + 0x20 ) != 0) {
            *(undefined4*)( this + 0x20 ) = 0;
         }

         Memory::free_static(*(void**)( this + 0x28 ), false);
      }

      if (*(long*)( this + 0x18 ) != 0) {
         LocalVector<LocalVector<RID,unsigned_int,false,false>,unsigned_int,false,false>::resize((LocalVector<LocalVector<RID,unsigned_int,false,false>,unsigned_int,false,false>*)( this + 0x10 ), 0);
         if (*(void**)( this + 0x18 ) != (void*)0x0) {
            Memory::free_static(*(void**)( this + 0x18 ), false);
         }

      }

      if (*(void**)( this + 8 ) != (void*)0x0) {
         if (*(int*)this != 0) {
            *(undefined4*)this = 0;
         }

         Memory::free_static(*(void**)( this + 8 ), false);
         return;
      }

      return;
   }

   /* RID UniformSetCacheRD::_allocate_from_uniforms<Vector<RenderingDevice::Uniform> >(RID, unsigned
   int, unsigned int, unsigned int, Vector<RenderingDevice::Uniform> const&) */
   long UniformSetCacheRD::_allocate_from_uniforms<Vector<RenderingDevice::Uniform>>(UniformSetCacheRD *this, undefined8 param_2, undefined4 param_3, undefined4 param_4, uint param_5, long param_6) {
      undefined1(*pauVar1)[16];
      long lVar2;
      code *pcVar3;
      uint uVar4;
      uint uVar5;
      int iVar6;
      undefined8 uVar7;
      long lVar8;
      long lVar9;
      ulong uVar10;
      undefined8 *puVar11;
      long *plVar12;
      undefined8 *puVar13;
      uint uVar14;
      long lVar15;
      uVar7 = RenderingDevice::get_singleton();
      lVar8 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>(uVar7, param_6, param_2, param_3, 0);
      if (lVar8 == 0) {
         _err_print_error("_allocate_from_uniforms", "servers/rendering/renderer_rd/effects/../uniform_set_cache_rd.h", 0x83, "Condition \"rid.is_null()\" is true. Returning: rid", 0, 0);
      }
 else {
         iVar6 = *(int*)( this + 0x18c );
         if (iVar6 == 0) {
            uVar5 = *(uint*)( this + 0x188 );
            uVar4 = uVar5 + 1;
            *(uint*)( this + 0x188 ) = uVar4;
            uVar7 = Memory::realloc_static(*(void**)( this + 0x178 ), (ulong)uVar4 * 8, false);
            *(undefined8*)( this + 0x178 ) = uVar7;
            uVar7 = Memory::realloc_static(*(void**)( this + 0x180 ), ( ulong ) * (uint*)( this + 0x188 ) << 3, false);
            lVar2 = *(long*)( this + 0x178 );
            *(undefined8*)( this + 0x180 ) = uVar7;
            lVar9 = (ulong)uVar5 * 8;
            uVar7 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x198 ) << 6, false);
            uVar4 = *(uint*)( this + 0x198 );
            *(undefined8*)( lVar2 + lVar9 ) = uVar7;
            lVar2 = *(long*)( this + 0x180 );
            uVar7 = Memory::alloc_static((ulong)uVar4 << 3, false);
            *(undefined8*)( lVar2 + lVar9 ) = uVar7;
            uVar4 = *(uint*)( this + 0x198 );
            if (uVar4 == 0) {
               plVar12 = *(long**)( this + 0x180 );
            }
 else {
               plVar12 = *(long**)( this + 0x180 );
               lVar2 = *(long*)( this + 0x178 );
               uVar10 = 0;
               lVar15 = *plVar12;
               do {
                  *(ulong*)( lVar15 + uVar10 * 8 ) = uVar10 * 0x40 + *(long*)( lVar2 + lVar9 );
                  uVar10 = uVar10 + 1;
               }
 while ( uVar4 != uVar10 );
            }

            iVar6 = uVar4 + *(int*)( this + 0x18c );
         }
 else {
            plVar12 = *(long**)( this + 0x180 );
         }

         uVar4 = iVar6 - 1;
         *(uint*)( this + 0x18c ) = uVar4;
         pauVar1 = *(undefined1(**) [16])( plVar12[uVar4 >> ( ( byte ) * (undefined4*)( this + 400 ) & 0x1f )] + ( ulong )(uVar4 & *(uint*)( this + 0x194 )) * 8 );
         pauVar1[1] = (undefined1[16])0x0;
         *(undefined4*)pauVar1[1] = param_4;
         lVar9 = *(long*)( param_6 + 8 );
         pauVar1[2] = (undefined1[16])0x0;
         *(undefined8*)( pauVar1[1] + 8 ) = param_2;
         *(undefined4*)pauVar1[2] = param_3;
         *(long*)( pauVar1[2] + 8 ) = lVar8;
         *pauVar1 = (undefined1[16])0x0;
         pauVar1[3] = (undefined1[16])0x0;
         if (( lVar9 != 0 ) && ( uVar4 = uVar4 != 0 )) {
            uVar14 = uVar4 - 1;
            uVar5 = uVar14 >> 1 | uVar14;
            uVar5 = uVar5 | uVar5 >> 2;
            uVar5 = uVar5 | uVar5 >> 4;
            uVar5 = uVar5 | uVar5 >> 8;
            uVar5 = ( uVar5 | uVar5 >> 0x10 ) + 1;
            *(uint*)( pauVar1[3] + 4 ) = uVar5;
            lVar9 = Memory::realloc_static((void*)0x0, (ulong)uVar5 * 0x28, false);
            *(long*)( pauVar1[3] + 8 ) = lVar9;
            uVar7 = _LC89;
            if (lVar9 == 0) {
               _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            uVar5 = *(uint*)pauVar1[3];
            if (uVar5 < uVar4) {
               puVar11 = (undefined8*)( lVar9 + (ulong)uVar5 * 0x28 );
               do {
                  *puVar11 = uVar7;
                  puVar13 = puVar11 + 5;
                  *(undefined1*)( puVar11 + 1 ) = 0;
                  puVar11[2] = 0;
                  puVar11[4] = 0;
                  puVar11 = puVar13;
               }
 while ( (undefined8*)( lVar9 + ( (ulong)uVar5 + 1 + ( ulong )(uVar14 - uVar5) ) * 0x28 ) != puVar13 );
            }

            *(uint*)pauVar1[3] = uVar4;
            lVar9 = 0;
            do {
               lVar2 = *(long*)( param_6 + 8 );
               if (lVar2 == 0) {
                  lVar15 = 0;
                  LAB_001080e3:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar15, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               lVar15 = *(long*)( lVar2 + -8 );
               if (lVar15 <= lVar9) goto LAB_001080e3;
               puVar11 = (undefined8*)( lVar2 + lVar9 * 0x28 );
               puVar13 = (undefined8*)( lVar9 * 0x28 + *(long*)( pauVar1[3] + 8 ) );
               *puVar13 = *puVar11;
               *(undefined1*)( puVar13 + 1 ) = *(undefined1*)( puVar11 + 1 );
               puVar13[2] = puVar11[2];
               if (puVar13[4] != puVar11[4]) {
                  CowData<RID>::_ref((CowData<RID>*)( puVar13 + 4 ), (CowData*)( puVar11 + 4 ));
               }

               lVar9 = lVar9 + 1;
            }
 while ( (uint)lVar9 < *(uint*)pauVar1[3] );
         }

         *(undefined8*)*pauVar1 = 0;
         puVar11 = *(undefined8**)( this + (ulong)param_5 * 8 + 0x1e0 );
         *(undefined8**)( *pauVar1 + 8 ) = puVar11;
         if (puVar11 != (undefined8*)0x0) {
            *puVar11 = pauVar1;
         }

         *(undefined1(**) [16])( this + (ulong)param_5 * 8 + 0x1e0 ) = pauVar1;
         uVar7 = RenderingDevice::get_singleton();
         RenderingDevice::uniform_set_set_invalidation_callback(uVar7, lVar8, UniformSetCacheRD::_uniform_set_invalidation_callback, pauVar1);
         *(int*)( this + 0x201c8 ) = *(int*)( this + 0x201c8 ) + 1;
      }

      return lVar8;
   }

   /* RID UniformSetCacheRD::_allocate_from_uniforms<LocalVector<RenderingDevice::Uniform, unsigned
   int, false, false> >(RID, unsigned int, unsigned int, unsigned int,
   LocalVector<RenderingDevice::Uniform, unsigned int, false, false> const&) */
   long UniformSetCacheRD::_allocate_from_uniforms<LocalVector<RenderingDevice::Uniform,unsigned_int,false,false>>(UniformSetCacheRD *this, undefined8 param_2, undefined4 param_3, undefined4 param_4, uint param_5, uint *param_6) {
      uint uVar1;
      undefined1(*pauVar2)[16];
      long lVar3;
      long lVar4;
      code *pcVar5;
      uint uVar6;
      uint uVar7;
      int iVar8;
      undefined8 uVar9;
      long lVar10;
      long lVar11;
      ulong uVar12;
      undefined8 *puVar13;
      long *plVar14;
      undefined8 *puVar15;
      uVar9 = RenderingDevice::get_singleton();
      lVar10 = RenderingDevice::uniform_set_create<LocalVector<RenderingDevice::Uniform,unsigned_int,false,false>>(uVar9, param_6, param_2, param_3, 0);
      if (lVar10 == 0) {
         _err_print_error("_allocate_from_uniforms", "servers/rendering/renderer_rd/effects/../uniform_set_cache_rd.h", 0x83, "Condition \"rid.is_null()\" is true. Returning: rid", 0, 0);
      }
 else {
         iVar8 = *(int*)( this + 0x18c );
         if (iVar8 == 0) {
            uVar1 = *(uint*)( this + 0x188 );
            uVar6 = uVar1 + 1;
            *(uint*)( this + 0x188 ) = uVar6;
            uVar9 = Memory::realloc_static(*(void**)( this + 0x178 ), (ulong)uVar6 * 8, false);
            *(undefined8*)( this + 0x178 ) = uVar9;
            uVar9 = Memory::realloc_static(*(void**)( this + 0x180 ), ( ulong ) * (uint*)( this + 0x188 ) << 3, false);
            lVar3 = *(long*)( this + 0x178 );
            *(undefined8*)( this + 0x180 ) = uVar9;
            lVar11 = (ulong)uVar1 * 8;
            uVar9 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x198 ) << 6, false);
            uVar6 = *(uint*)( this + 0x198 );
            *(undefined8*)( lVar3 + lVar11 ) = uVar9;
            lVar3 = *(long*)( this + 0x180 );
            uVar9 = Memory::alloc_static((ulong)uVar6 << 3, false);
            *(undefined8*)( lVar3 + lVar11 ) = uVar9;
            uVar6 = *(uint*)( this + 0x198 );
            if (uVar6 == 0) {
               plVar14 = *(long**)( this + 0x180 );
            }
 else {
               plVar14 = *(long**)( this + 0x180 );
               lVar3 = *(long*)( this + 0x178 );
               uVar12 = 0;
               lVar4 = *plVar14;
               do {
                  *(ulong*)( lVar4 + uVar12 * 8 ) = uVar12 * 0x40 + *(long*)( lVar3 + lVar11 );
                  uVar12 = uVar12 + 1;
               }
 while ( uVar6 != uVar12 );
            }

            iVar8 = uVar6 + *(int*)( this + 0x18c );
         }
 else {
            plVar14 = *(long**)( this + 0x180 );
         }

         uVar6 = iVar8 - 1;
         *(uint*)( this + 0x18c ) = uVar6;
         pauVar2 = *(undefined1(**) [16])( plVar14[uVar6 >> ( ( byte ) * (undefined4*)( this + 400 ) & 0x1f )] + ( ulong )(uVar6 & *(uint*)( this + 0x194 )) * 8 );
         pauVar2[1] = (undefined1[16])0x0;
         pauVar2[2] = (undefined1[16])0x0;
         *(undefined8*)( pauVar2[1] + 8 ) = param_2;
         *pauVar2 = (undefined1[16])0x0;
         pauVar2[3] = (undefined1[16])0x0;
         uVar6 = *param_6;
         *(undefined4*)pauVar2[1] = param_4;
         *(undefined4*)pauVar2[2] = param_3;
         *(long*)( pauVar2[2] + 8 ) = lVar10;
         if (uVar6 != 0) {
            uVar1 = uVar6 - 1;
            uVar7 = uVar1 >> 1 | uVar1;
            uVar7 = uVar7 | uVar7 >> 2;
            uVar7 = uVar7 | uVar7 >> 4;
            uVar7 = uVar7 | uVar7 >> 8;
            uVar7 = ( uVar7 | uVar7 >> 0x10 ) + 1;
            *(uint*)( pauVar2[3] + 4 ) = uVar7;
            lVar11 = Memory::realloc_static((void*)0x0, (ulong)uVar7 * 0x28, false);
            *(long*)( pauVar2[3] + 8 ) = lVar11;
            uVar9 = _LC89;
            if (lVar11 == 0) {
               _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar5 = (code*)invalidInstructionException();
               ( *pcVar5 )();
            }

            uVar7 = *(uint*)pauVar2[3];
            if (uVar7 < uVar6) {
               puVar13 = (undefined8*)( lVar11 + (ulong)uVar7 * 0x28 );
               do {
                  *puVar13 = uVar9;
                  puVar15 = puVar13 + 5;
                  *(undefined1*)( puVar13 + 1 ) = 0;
                  puVar13[2] = 0;
                  puVar13[4] = 0;
                  puVar13 = puVar15;
               }
 while ( (undefined8*)( lVar11 + ( (ulong)uVar7 + 1 + ( ulong )(uVar1 - uVar7) ) * 0x28 ) != puVar15 );
            }

            *(uint*)pauVar2[3] = uVar6;
            lVar11 = 0;
            uVar6 = 0;
            do {
               if (*param_6 <= uVar6) {
                  _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xae, (ulong)uVar6, ( ulong ) * param_6, "p_index", "count", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar5 = (code*)invalidInstructionException();
                  ( *pcVar5 )();
               }

               puVar13 = (undefined8*)( *(long*)( param_6 + 2 ) + lVar11 );
               puVar15 = (undefined8*)( *(long*)( pauVar2[3] + 8 ) + lVar11 );
               *puVar15 = *puVar13;
               *(undefined1*)( puVar15 + 1 ) = *(undefined1*)( puVar13 + 1 );
               puVar15[2] = puVar13[2];
               if (puVar15[4] != puVar13[4]) {
                  CowData<RID>::_ref((CowData<RID>*)( puVar15 + 4 ), (CowData*)( puVar13 + 4 ));
               }

               uVar6 = uVar6 + 1;
               lVar11 = lVar11 + 0x28;
            }
 while ( uVar6 < *(uint*)pauVar2[3] );
         }

         *(undefined8*)*pauVar2 = 0;
         puVar13 = *(undefined8**)( this + (ulong)param_5 * 8 + 0x1e0 );
         *(undefined8**)( *pauVar2 + 8 ) = puVar13;
         if (puVar13 != (undefined8*)0x0) {
            *puVar13 = pauVar2;
         }

         *(undefined1(**) [16])( this + (ulong)param_5 * 8 + 0x1e0 ) = pauVar2;
         uVar9 = RenderingDevice::get_singleton();
         RenderingDevice::uniform_set_set_invalidation_callback(uVar9, lVar10, UniformSetCacheRD::_uniform_set_invalidation_callback, pauVar2);
         *(int*)( this + 0x201c8 ) = *(int*)( this + 0x201c8 ) + 1;
      }

      return lVar10;
   }

   /* RID UniformSetCacheRD::get_cache_vec<>(RID, unsigned int, LocalVector<RenderingDevice::Uniform,
   unsigned int, false, false> const&) */
   undefined8 UniformSetCacheRD::get_cache_vec<>(UniformSetCacheRD *this, long param_2, int param_3, uint *param_4) {
      long lVar1;
      code *pcVar2;
      uint uVar3;
      undefined8 uVar4;
      long lVar5;
      long lVar6;
      int iVar7;
      uint uVar8;
      uint uVar9;
      long lVar10;
      int *piVar11;
      int *piVar12;
      ulong uVar13;
      ulong uVar14;
      long lVar15;
      iVar7 = (int)( (ulong)param_2 >> 0x20 );
      uVar3 = ( (int)param_2 * 0x16a88000 | ( uint )((int)param_2 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
      uVar3 = ( uVar3 << 0xd | uVar3 >> 0x13 ) * 5 + 0xe6546b64 ^ ( iVar7 * 0x16a88000 | ( uint )(iVar7 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
      uVar3 = ( param_3 * 0x16a88000 | ( uint )(param_3 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ ( uVar3 << 0xd | uVar3 >> 0x13 ) * 5 + 0xe6546b64;
      uVar3 = ( uVar3 << 0xd | uVar3 >> 0x13 ) * 5 + 0xe6546b64;
      uVar13 = (ulong)uVar3;
      if (*param_4 != 0) {
         lVar10 = 0;
         uVar13 = (ulong)uVar3;
         do {
            piVar11 = (int*)( *(long*)( param_4 + 2 ) + lVar10 * 0x28 );
            uVar3 = ( *piVar11 * 0x16a88000 | ( uint )(*piVar11 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ (uint)uVar13;
            uVar3 = ( uVar3 << 0xd | uVar3 >> 0x13 ) * 5 + 0xe6546b64 ^ ( piVar11[1] * 0x16a88000 | ( uint )(piVar11[1] * -0x3361d2af) >> 0x11 ) * 0x1b873593;
            lVar15 = *(long*)( piVar11 + 4 );
            uVar13 = ( ulong )(( uVar3 << 0xd | uVar3 >> 0x13 ) * 5 + 0xe6546b64);
            if (lVar15 != 0) {
               uVar3 = 1;
               LAB_00108832:uVar14 = 0;
               do {
                  uVar9 = (uint)uVar13;
                  if (lVar15 == 0) {
                     lVar15 = *(long*)( piVar11 + 8 );
                     if (lVar15 == 0) {
                        lVar6 = 0;
                        LAB_00108a91:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar14, lVar6, "p_index", "size()", "", false, true);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar2 = (code*)invalidInstructionException();
                        ( *pcVar2 )();
                     }

                     lVar6 = *(long*)( lVar15 + -8 );
                     if (lVar6 <= (long)uVar14) goto LAB_00108a91;
                     lVar15 = *(long*)( lVar15 + uVar14 * 8 );
                     LAB_00108849:iVar7 = (int)( (ulong)lVar15 >> 0x20 );
                     uVar8 = ( iVar7 * 0x16a88000 | ( uint )(iVar7 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
                     uVar9 = uVar9 ^ ( (int)lVar15 * 0x16a88000 | ( uint )((int)lVar15 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
                  }
 else {
                     if (uVar14 == 0) goto LAB_00108849;
                     _err_print_error("get_id", "./servers/rendering/rendering_device.h", 0x3ca, "Condition \"p_idx != 0\" is true. Returning: RID()", 0, 0);
                     uVar8 = 0;
                  }

                  uVar14 = uVar14 + 1;
                  uVar8 = uVar8 ^ ( uVar9 << 0xd | uVar9 >> 0x13 ) * 5 + 0xe6546b64;
                  uVar13 = ( ulong )(( uVar8 << 0xd | uVar8 >> 0x13 ) * 5 + 0xe6546b64);
                  if (uVar3 == uVar14) goto LAB_001088b8;
                  lVar15 = *(long*)( piVar11 + 4 );
               }
 while ( true );
            }

            if (( *(long*)( piVar11 + 8 ) != 0 ) && ( uVar3 = uVar3 != 0 )) goto LAB_00108832;
            LAB_001088b8:lVar10 = lVar10 + 1;
            uVar3 = ( ( uint )(uVar13 >> 0x10) ^ (uint)uVar13 ) * -0x7a143595;
            uVar3 = ( uVar3 ^ uVar3 >> 0xd ) * -0x3d4d51cb;
            uVar13 = ( ulong )(uVar3 >> 0x10 ^ uVar3);
         }
 while ( (uint)lVar10 < *param_4 );
      }

      uVar3 = ( (uint)uVar13 ^ ( uint )(uVar13 >> 0x10) ) * -0x7a143595;
      uVar3 = ( uVar3 ^ uVar3 >> 0xd ) * -0x3d4d51cb;
      uVar3 = uVar3 ^ uVar3 >> 0x10;
      lVar10 = *(long*)( this + ( ulong )(uVar3 % 0x3ffd) * 8 + 0x1e0 );
      while (true) {
         if (lVar10 == 0) {
            uVar4 = _allocate_from_uniforms<LocalVector<RenderingDevice::Uniform,unsigned_int,false,false>>(this, param_2, param_3, uVar3, uVar3 % 0x3ffd, param_4);
            return uVar4;
         }

         if (( ( ( *(uint*)( lVar10 + 0x10 ) == uVar3 ) && ( *(int*)( lVar10 + 0x20 ) == param_3 ) ) && ( param_2 == *(long*)( lVar10 + 0x18 ) ) ) && ( *(uint*)( lVar10 + 0x30 ) == *param_4 )) break;
         LAB_00108960:lVar10 = *(long*)( lVar10 + 8 );
      }
;
      if (*param_4 == 0) {
         LAB_00108cfd:return *(undefined8*)( lVar10 + 0x28 );
      }

      lVar15 = 0;
      uVar9 = 0;
      do {
         piVar12 = (int*)( *(long*)( lVar10 + 0x38 ) + lVar15 );
         piVar11 = (int*)( *(long*)( param_4 + 2 ) + lVar15 );
         if (( piVar11[1] != piVar12[1] ) || ( *piVar11 != *piVar12 )) goto LAB_00108960;
         lVar5 = *(long*)( piVar12 + 4 );
         if (*(long*)( piVar11 + 4 ) != 0) {
            if (lVar5 == 0) {
               if (( *(long*)( piVar12 + 8 ) == 0 ) || ( uVar8 = uVar8 != 1 )) goto LAB_00108960;
            }
 else {
               uVar8 = 1;
            }

            LAB_00108adb:uVar13 = 0;
            do {
               uVar14 = uVar13;
               if (lVar5 == 0) {
                  lVar5 = *(long*)( piVar12 + 8 );
                  if (lVar5 == 0) {
                     lVar6 = 0;
                     goto LAB_00108a91;
                  }

                  lVar6 = *(long*)( lVar5 + -8 );
                  if (lVar6 <= (long)uVar13) goto LAB_00108a91;
                  lVar6 = *(long*)( piVar11 + 4 );
                  lVar5 = *(long*)( lVar5 + uVar13 * 8 );
                  if (lVar6 == 0) goto LAB_00108b0d;
                  if (uVar13 != 0) goto LAB_00108b8e;
               }
 else if (uVar13 == 0) {
                  lVar6 = *(long*)( piVar11 + 4 );
                  uVar14 = 0;
                  if (lVar6 == 0) {
                     LAB_00108b0d:lVar1 = *(long*)( piVar11 + 8 );
                     if (lVar1 == 0) {
                        lVar6 = 0;
                        goto LAB_00108a91;
                     }

                     lVar6 = *(long*)( lVar1 + -8 );
                     if (lVar6 <= (long)uVar14) goto LAB_00108a91;
                     lVar6 = *(long*)( lVar1 + uVar13 * 8 );
                  }

               }
 else {
                  _err_print_error("get_id", "./servers/rendering/rendering_device.h", 0x3ca, "Condition \"p_idx != 0\" is true. Returning: RID()", 0, 0);
                  if (*(long*)( piVar11 + 4 ) == 0) {
                     lVar5 = 0;
                     goto LAB_00108b0d;
                  }

                  lVar5 = 0;
                  LAB_00108b8e:_err_print_error("get_id", "./servers/rendering/rendering_device.h", 0x3ca, "Condition \"p_idx != 0\" is true. Returning: RID()", 0, 0);
                  lVar6 = 0;
               }

               if (lVar6 != lVar5) goto LAB_00108960;
               uVar13 = uVar13 + 1;
               if (uVar8 <= (uint)uVar13) goto LAB_00108bf4;
               lVar5 = *(long*)( piVar12 + 4 );
            }
 while ( true );
         }

         if (*(long*)( piVar11 + 8 ) == 0) {
            if (lVar5 != 0) goto LAB_00108960;
            if (*(long*)( piVar12 + 8 ) != 0) {
               uVar8 = *(uint*)( *(long*)( piVar12 + 8 ) + -8 );
               joined_r0x00108cef:if (uVar8 != 0) goto LAB_00108960;
            }

         }
 else {
            uVar8 = ( uint ) * (undefined8*)( *(long*)( piVar11 + 8 ) + -8 );
            if (lVar5 != 0) {
               if (uVar8 == 1) goto LAB_00108adb;
               goto LAB_00108960;
            }

            if (*(long*)( piVar12 + 8 ) == 0) goto joined_r0x00108cef;
            if (*(uint*)( *(long*)( piVar12 + 8 ) + -8 ) != uVar8) goto LAB_00108960;
            if (uVar8 != 0) goto LAB_00108adb;
         }

         LAB_00108bf4:uVar9 = uVar9 + 1;
         lVar15 = lVar15 + 0x28;
         if (*param_4 <= uVar9) goto LAB_00108cfd;
         if (*(uint*)( lVar10 + 0x30 ) <= uVar9) {
            _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xae, (ulong)uVar9, ( ulong ) * (uint*)( lVar10 + 0x30 ), "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

      }
 while ( true );
   }

   /* CowData<String>::_unref() */
   void CowData<String>::_unref(CowData<String> *this) {
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

   /* CowData<String>::_realloc(long) */
   undefined8 CowData<String>::_realloc(CowData<String> *this, long param_1) {
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

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* Error CowData<String>::resize<false>(long) */
   undefined8 CowData<String>::resize<false>(CowData<String> *this, long param_1) {
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
         LAB_001091d0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
      if (lVar10 == 0) goto LAB_001091d0;
      if (param_1 <= lVar6) {
         lVar6 = *(long*)this;
         uVar8 = param_1;
         while (lVar6 != 0) {
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
               LAB_001090a9:if (lVar10 != lVar7) {
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
               if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_001090a9;
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
         goto LAB_00109226;
      }

      if (lVar10 == lVar7) {
         LAB_0010914f:puVar9 = *(undefined8**)this;
         if (puVar9 == (undefined8*)0x0) {
            LAB_00109226:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar6 = puVar9[-1];
         if (param_1 <= lVar6) goto LAB_0010913a;
      }
 else {
         if (lVar6 != 0) {
            uVar4 = _realloc(this, lVar10);
            if ((int)uVar4 != 0) {
               return uVar4;
            }

            goto LAB_0010914f;
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
      LAB_0010913a:puVar9[-1] = param_1;
      return 0;
   }

   /* CowData<RID>::_realloc(long) */
   undefined8 CowData<RID>::_realloc(CowData<RID> *this, long param_1) {
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

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* Error CowData<RID>::resize<false>(long) */
   undefined8 CowData<RID>::resize<false>(CowData<RID> *this, long param_1) {
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
         LAB_001094e0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
      if (lVar7 == 0) goto LAB_001094e0;
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
         LAB_0010944c:puVar9 = *(undefined8**)this;
         if (puVar9 == (undefined8*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar3 = puVar9[-1];
         if (param_1 <= lVar3) goto LAB_001093e1;
      }
 else {
         if (lVar8 != 0) {
            uVar6 = _realloc(this, lVar7);
            if ((int)uVar6 != 0) {
               return uVar6;
            }

            goto LAB_0010944c;
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
      LAB_001093e1:puVar9[-1] = param_1;
      return 0;
   }

   /* CowData<Vector<unsigned char> >::_unref() */
   void CowData<Vector<unsigned_char>>::_unref(CowData<Vector<unsigned_char>> *this) {
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

   /* CowData<RenderingDevice::Uniform>::_unref() */
   void CowData<RenderingDevice::Uniform>::_unref(CowData<RenderingDevice::Uniform> *this) {
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

   /* CowData<unsigned char>::_realloc(long) */
   undefined8 CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this, long param_1) {
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

   /* CowData<RenderingDevice::Uniform>::_realloc(long) */
   undefined8 CowData<RenderingDevice::Uniform>::_realloc(CowData<RenderingDevice::Uniform> *this, long param_1) {
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

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* Error CowData<RenderingDevice::Uniform>::resize<false>(long) */
   undefined8 CowData<RenderingDevice::Uniform>::resize<false>(CowData<RenderingDevice::Uniform> *this, long param_1) {
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
         LAB_00109a70:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
      if (lVar11 == 0) goto LAB_00109a70;
      if (param_1 <= lVar8) {
         lVar8 = *(long*)this;
         uVar10 = param_1;
         while (lVar8 != 0) {
            if (*(ulong*)( lVar8 + -8 ) <= uVar10) {
               LAB_00109901:if (lVar11 != lVar9) {
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
               if (*(ulong*)( lVar8 + -8 ) <= uVar10) goto LAB_00109901;
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
         goto LAB_00109ac6;
      }

      if (lVar11 == lVar9) {
         LAB_001099e3:puVar7 = *(undefined8**)this;
         if (puVar7 == (undefined8*)0x0) {
            LAB_00109ac6:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar8 = puVar7[-1];
         if (param_1 <= lVar8) goto LAB_001099c0;
      }
 else {
         if (lVar8 != 0) {
            uVar4 = _realloc(this, lVar11);
            if ((int)uVar4 != 0) {
               return uVar4;
            }

            goto LAB_001099e3;
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

      uVar4 = _LC89;
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
      LAB_001099c0:puVar7[-1] = param_1;
      return 0;
   }

   /* Vector<RenderingDevice::Uniform>::push_back(RenderingDevice::Uniform) [clone .isra.0] */
   void Vector<RenderingDevice::Uniform>::push_back(Vector<RenderingDevice::Uniform> *this, undefined8 *param_2) {
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

   /* RID UniformSetCacheRD::get_cache<RenderingDevice::Uniform, RenderingDevice::Uniform>(RID,
   unsigned int, RenderingDevice::Uniform, RenderingDevice::Uniform) */
   undefined8 UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>(UniformSetCacheRD *this, long param_2, int param_3, int *param_4, undefined8 *param_5) {
      CowData *pCVar1;
      long *plVar2;
      long lVar3;
      long lVar4;
      code *pcVar5;
      undefined1 uVar6;
      uint uVar7;
      int iVar8;
      ulong uVar9;
      undefined8 uVar10;
      int iVar11;
      int iVar12;
      long lVar13;
      uint uVar14;
      uint uVar15;
      int iVar16;
      long lVar17;
      int *piVar18;
      long lVar19;
      long lVar20;
      ulong uVar21;
      ulong uVar22;
      long in_FS_OFFSET;
      uint local_e8;
      Vector<RenderingDevice::Uniform> local_a8[8];
      undefined8 local_a0;
      undefined8 local_98;
      undefined1 local_90;
      long local_88;
      long local_78[2];
      undefined8 local_68;
      undefined1 local_60;
      long local_58;
      long local_48;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      local_48 = 0;
      iVar8 = (int)( (ulong)param_2 >> 0x20 );
      uVar7 = ( (int)param_2 * 0x16a88000 | ( uint )((int)param_2 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
      uVar7 = ( uVar7 << 0xd | uVar7 >> 0x13 ) * 5 + 0xe6546b64 ^ ( iVar8 * 0x16a88000 | ( uint )(iVar8 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
      uVar7 = ( param_3 * 0x16a88000 | ( uint )(param_3 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ ( uVar7 << 0xd | uVar7 >> 0x13 ) * 5 + 0xe6546b64;
      local_68 = *param_5;
      local_60 = *(undefined1*)( param_5 + 1 );
      local_58 = param_5[2];
      pCVar1 = (CowData*)( param_5 + 4 );
      if (param_5[4] != 0) {
         CowData<RID>::_ref((CowData<RID>*)&local_48, pCVar1);
      }

      uVar7 = ( *param_4 * 0x16a88000 | ( uint )(*param_4 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ ( uVar7 << 0xd | uVar7 >> 0x13 ) * 5 + 0xe6546b64;
      uVar7 = ( uVar7 << 0xd | uVar7 >> 0x13 ) * 5 + 0xe6546b64 ^ ( param_4[1] * 0x16a88000 | ( uint )(param_4[1] * -0x3361d2af) >> 0x11 ) * 0x1b873593;
      lVar13 = *(long*)( param_4 + 4 );
      uVar9 = ( ulong )(( uVar7 << 0xd | uVar7 >> 0x13 ) * 5 + 0xe6546b64);
      if (lVar13 != 0) {
         uVar7 = 1;
         LAB_00109ead:uVar21 = 0;
         do {
            uVar14 = (uint)uVar9;
            if (lVar13 == 0) {
               lVar13 = *(long*)( param_4 + 8 );
               if (lVar13 == 0) goto LAB_00109f30;
               lVar17 = *(long*)( lVar13 + -8 );
               if (lVar17 <= (long)uVar21) goto LAB_00109f51;
               lVar13 = *(long*)( lVar13 + uVar21 * 8 );
               LAB_00109ec1:iVar8 = (int)( (ulong)lVar13 >> 0x20 );
               uVar15 = ( iVar8 * 0x16a88000 | ( uint )(iVar8 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
               uVar14 = uVar14 ^ ( (int)lVar13 * 0x16a88000 | ( uint )((int)lVar13 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
            }
 else {
               if (uVar21 == 0) goto LAB_00109ec1;
               _err_print_error("get_id", "./servers/rendering/rendering_device.h", 0x3ca, "Condition \"p_idx != 0\" is true. Returning: RID()", 0, 0);
               uVar15 = 0;
            }

            uVar21 = uVar21 + 1;
            uVar15 = ( uVar14 << 0xd | uVar14 >> 0x13 ) * 5 + 0xe6546b64 ^ uVar15;
            uVar9 = ( ulong )(( uVar15 << 0xd | uVar15 >> 0x13 ) * 5 + 0xe6546b64);
            if (uVar21 == uVar7) goto LAB_00109d50;
            lVar13 = *(long*)( param_4 + 4 );
         }
 while ( true );
      }

      if (( *(long*)( param_4 + 8 ) != 0 ) && ( uVar7 = uVar7 != 0 )) goto LAB_00109ead;
      LAB_00109d50:lVar19 = local_48;
      lVar13 = local_58;
      uVar7 = ( ( uint )(uVar9 >> 0x10) ^ (uint)uVar9 ) * -0x7a143595;
      uVar7 = ( uVar7 ^ uVar7 >> 0xd ) * -0x3d4d51cb;
      uVar14 = ( (int)local_68 * 0x16a88000 | ( uint )((int)local_68 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ uVar7;
      uVar7 = ( ( uVar7 >> 0x10 ^ uVar14 ) << 0xd | uVar14 >> 0x13 ) * 5 + 0xe6546b64 ^ ( local_68._4_4_ * 0x16a88000 | ( uint )(local_68._4_4_ * -0x3361d2af) >> 0x11 ) * 0x1b873593;
      uVar7 = ( uVar7 << 0xd | uVar7 >> 0x13 ) * 5 + 0xe6546b64;
      if (local_58 == 0) {
         if (local_48 != 0) {
            uVar9 = *(ulong*)( local_48 + -8 ) & 0xffffffff;
            if ((int)*(ulong*)( local_48 + -8 ) != 0) goto LAB_00109ddf;
            uVar7 = ( uVar7 >> 0x10 ^ uVar7 ) * -0x7a143595;
            uVar7 = ( uVar7 >> 0xd ^ uVar7 ) * -0x3d4d51cb;
            uVar9 = ( ulong )(uVar7 ^ uVar7 >> 0x10);
            goto LAB_00109fe6;
         }

         uVar7 = ( uVar7 >> 0x10 ^ uVar7 ) * -0x7a143595;
         uVar7 = ( uVar7 ^ uVar7 >> 0xd ) * -0x3d4d51cb;
         uVar9 = ( ulong )(uVar7 ^ uVar7 >> 0x10);
      }
 else {
         uVar9 = 1;
         LAB_00109ddf:iVar16 = (int)local_58;
         uVar21 = 0;
         iVar8 = (int)( (ulong)local_58 >> 0x20 );
         do {
            if (lVar13 == 0) {
               if (lVar19 == 0) {
                  LAB_00109f30:lVar17 = 0;
                  LAB_00109f51:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar21, lVar17, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar5 = (code*)invalidInstructionException();
                  ( *pcVar5 )();
               }

               lVar17 = *(long*)( lVar19 + -8 );
               if (lVar17 <= (long)uVar21) goto LAB_00109f51;
               uVar10 = *(undefined8*)( lVar19 + uVar21 * 8 );
               iVar11 = (int)uVar10;
               iVar12 = (int)( (ulong)uVar10 >> 0x20 );
               uVar7 = uVar7 ^ ( iVar11 * 0x16a88000 | ( uint )(iVar11 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
               uVar14 = ( iVar12 * 0x16a88000 | ( uint )(iVar12 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
            }
 else if (uVar21 == 0) {
               uVar7 = uVar7 ^ ( iVar16 * 0x16a88000 | ( uint )(iVar16 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
               uVar14 = ( iVar8 * 0x16a88000 | ( uint )(iVar8 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
            }
 else {
               _err_print_error("get_id", "./servers/rendering/rendering_device.h", 0x3ca, "Condition \"p_idx != 0\" is true. Returning: RID()", 0, 0);
               uVar14 = 0;
            }

            uVar21 = uVar21 + 1;
            uVar14 = ( uVar7 << 0xd | uVar7 >> 0x13 ) * 5 + 0xe6546b64 ^ uVar14;
            uVar7 = ( uVar14 << 0xd | uVar14 >> 0x13 ) * 5 + 0xe6546b64;
         }
 while ( uVar21 != uVar9 );
         uVar7 = ( uVar7 >> 0x10 ^ uVar7 ) * -0x7a143595;
         uVar7 = ( uVar7 ^ uVar7 >> 0xd ) * -0x3d4d51cb;
         uVar9 = ( ulong )(uVar7 ^ uVar7 >> 0x10);
         if (lVar19 != 0) {
            LAB_00109fe6:LOCK();
            plVar2 = (long*)( lVar19 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               Memory::free_static((void*)( local_48 + -0x10 ), false);
            }

         }

      }

      iVar8 = (int)( uVar9 * 0xc0091 >> 0x20 );
      iVar16 = (int)uVar9;
      uVar7 = iVar16 + ( iVar8 + ( ( uint )(iVar16 - iVar8) >> 1 ) >> 0xd ) * -0x3ffd;
      uVar10 = local_68;
      uVar6 = local_60;
      for (lVar13 = *(long*)( this + (ulong)uVar7 * 8 + 0x1e0 ); lVar13 != 0; lVar13 = *(long*)( lVar13 + 8 )) {
         local_68 = *param_5;
         local_60 = *(undefined1*)( param_5 + 1 );
         if (( ( ( *(int*)( lVar13 + 0x10 ) == iVar16 ) && ( *(int*)( lVar13 + 0x20 ) == param_3 ) ) && ( param_2 == *(long*)( lVar13 + 0x18 ) ) ) && ( *(int*)( lVar13 + 0x30 ) == 2 )) {
            local_58 = param_5[2];
            local_48 = 0;
            if (param_5[4] == 0) {
               piVar18 = *(int**)( lVar13 + 0x38 );
               uVar10 = local_68;
               uVar6 = local_60;
               if (piVar18[1] != param_4[1]) goto LAB_0010a058;
               LAB_0010a0eb:if (*piVar18 == *param_4) {
                  lVar19 = *(long*)( param_4 + 4 );
                  if (*(long*)( piVar18 + 4 ) == 0) {
                     if (*(long*)( piVar18 + 8 ) == 0) {
                        if (lVar19 == 0) {
                           if (*(long*)( param_4 + 8 ) != 0) {
                              local_e8 = *(uint*)( *(long*)( param_4 + 8 ) + -8 );
                              joined_r0x0010a903:if (local_e8 != 0) goto LAB_0010a126;
                           }

                           LAB_0010a5ea:lVar19 = local_58;
                           uVar21 = ( ulong ) * (uint*)( lVar13 + 0x30 );
                           if (*(uint*)( lVar13 + 0x30 ) < 2) {
                              lVar13 = 1;
                              LAB_0010a49d:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xae, lVar13, uVar21, "p_index", "count", "", false, true);
                              _err_flush_stdout();
                              /* WARNING: Does not return */
                              pcVar5 = (code*)invalidInstructionException();
                              ( *pcVar5 )();
                           }

                           lVar3 = *(long*)( lVar13 + 0x38 );
                           if (( *(int*)( lVar3 + 0x2c ) == local_68._4_4_ ) && ( *(int*)( lVar3 + 0x28 ) == (int)local_68 )) {
                              uVar14 = 1;
                              if (*(long*)( lVar3 + 0x38 ) == 0) {
                                 if (*(long*)( lVar3 + 0x48 ) == 0) {
                                    uVar14 = 0;
                                 }
 else {
                                    uVar14 = ( uint ) * (undefined8*)( *(long*)( lVar3 + 0x48 ) + -8 );
                                 }

                              }

                              uVar15 = 1;
                              if (local_58 == 0) {
                                 if (local_48 == 0) {
                                    uVar15 = 0;
                                 }
 else {
                                    uVar15 = ( uint ) * (undefined8*)( local_48 + -8 );
                                 }

                              }

                              if (uVar15 == uVar14) {
                                 uVar21 = 0;
                                 do {
                                    if (uVar14 <= (uint)uVar21) {
                                       if (local_48 != 0) {
                                          LOCK();
                                          plVar2 = (long*)( local_48 + -0x10 );
                                          *plVar2 = *plVar2 + -1;
                                          UNLOCK();
                                          if (*plVar2 == 0) {
                                             Memory::free_static((void*)( local_48 + -0x10 ), false);
                                          }

                                       }

                                       uVar10 = *(undefined8*)( lVar13 + 0x28 );
                                       goto LAB_0010a351;
                                    }

                                    if (lVar19 == 0) {
                                       if (local_48 == 0) {
                                          LAB_0010a939:lVar17 = 0;
                                       }
 else {
                                          lVar17 = *(long*)( local_48 + -8 );
                                          if ((long)uVar21 < lVar17) {
                                             lVar20 = *(long*)( local_48 + uVar21 * 8 );
                                             lVar17 = *(long*)( lVar3 + 0x38 );
                                             if (lVar17 == 0) goto LAB_0010a6a7;
                                             if (uVar21 != 0) goto LAB_0010a89e;
                                             goto LAB_0010a6c5;
                                          }

                                       }

                                       goto LAB_00109f51;
                                    }

                                    if (uVar21 == 0) {
                                       lVar17 = *(long*)( lVar3 + 0x38 );
                                       lVar20 = lVar19;
                                       if (lVar17 == 0) {
                                          LAB_0010a6a7:lVar4 = *(long*)( lVar3 + 0x48 );
                                          if (lVar4 == 0) goto LAB_0010a939;
                                          lVar17 = *(long*)( lVar4 + -8 );
                                          if (lVar17 <= (long)uVar21) goto LAB_00109f51;
                                          lVar17 = *(long*)( lVar4 + uVar21 * 8 );
                                       }

                                    }
 else {
                                       _err_print_error("get_id", "./servers/rendering/rendering_device.h", 0x3ca, "Condition \"p_idx != 0\" is true. Returning: RID()", 0, 0);
                                       lVar20 = *(long*)( lVar3 + 0x38 );
                                       if (lVar20 == 0) goto LAB_0010a6a7;
                                       lVar20 = 0;
                                       LAB_0010a89e:_err_print_error("get_id", "./servers/rendering/rendering_device.h", 0x3ca, "Condition \"p_idx != 0\" is true. Returning: RID()", 0, 0);
                                       lVar17 = 0;
                                    }

                                    LAB_0010a6c5:uVar21 = uVar21 + 1;
                                 }
 while ( lVar17 == lVar20 );
                              }

                           }

                        }

                     }
 else {
                        local_e8 = ( uint ) * (undefined8*)( *(long*)( piVar18 + 8 ) + -8 );
                        if (lVar19 == 0) {
                           if (*(long*)( param_4 + 8 ) == 0) goto joined_r0x0010a903;
                           if (*(uint*)( *(long*)( param_4 + 8 ) + -8 ) == local_e8) {
                              if (local_e8 != 0) goto LAB_0010a4c8;
                              goto LAB_0010a5ea;
                           }

                        }
 else {
                           joined_r0x0010a120:if (local_e8 == 1) {
                              LAB_0010a4c8:uVar22 = 0;
                              do {
                                 uVar21 = uVar22;
                                 if (lVar19 == 0) {
                                    lVar19 = *(long*)( param_4 + 8 );
                                    if (lVar19 == 0) {
                                       lVar17 = 0;
                                       goto LAB_00109f51;
                                    }

                                    lVar17 = *(long*)( lVar19 + -8 );
                                    if (lVar17 <= (long)uVar22) goto LAB_00109f51;
                                    lVar19 = *(long*)( lVar19 + uVar22 * 8 );
                                    lVar17 = *(long*)( piVar18 + 4 );
                                    if (lVar17 == 0) goto LAB_0010a4fe;
                                    if (uVar22 != 0) goto LAB_0010a583;
                                 }
 else if (uVar22 == 0) {
                                    lVar17 = *(long*)( piVar18 + 4 );
                                    uVar21 = 0;
                                    if (lVar17 == 0) {
                                       LAB_0010a4fe:lVar3 = *(long*)( piVar18 + 8 );
                                       if (lVar3 == 0) {
                                          lVar17 = 0;
                                          goto LAB_00109f51;
                                       }

                                       lVar17 = *(long*)( lVar3 + -8 );
                                       if (lVar17 <= (long)uVar21) goto LAB_00109f51;
                                       lVar17 = *(long*)( lVar3 + uVar22 * 8 );
                                    }

                                 }
 else {
                                    _err_print_error("get_id", "./servers/rendering/rendering_device.h", 0x3ca, "Condition \"p_idx != 0\" is true. Returning: RID()", 0, 0);
                                    if (*(long*)( piVar18 + 4 ) == 0) {
                                       lVar19 = 0;
                                       goto LAB_0010a4fe;
                                    }

                                    lVar19 = 0;
                                    LAB_0010a583:_err_print_error("get_id", "./servers/rendering/rendering_device.h", 0x3ca, "Condition \"p_idx != 0\" is true. Returning: RID()", 0, 0);
                                    lVar17 = 0;
                                 }

                                 if (lVar19 != lVar17) break;
                                 uVar22 = uVar22 + 1;
                                 if (local_e8 <= (uint)uVar22) goto LAB_0010a5ea;
                                 lVar19 = *(long*)( param_4 + 4 );
                              }
 while ( true );
                           }

                        }

                     }

                  }
 else {
                     if (lVar19 != 0) {
                        local_e8 = 1;
                        goto LAB_0010a4c8;
                     }

                     if (*(long*)( param_4 + 8 ) != 0) {
                        local_e8 = ( uint ) * (undefined8*)( *(long*)( param_4 + 8 ) + -8 );
                        goto joined_r0x0010a120;
                     }

                  }

               }

            }
 else {
               CowData<RID>::_ref((CowData<RID>*)&local_48, pCVar1);
               if (*(int*)( lVar13 + 0x30 ) == 0) {
                  uVar21 = 0;
                  lVar13 = 0;
                  goto LAB_0010a49d;
               }

               piVar18 = *(int**)( lVar13 + 0x38 );
               if (piVar18[1] == param_4[1]) goto LAB_0010a0eb;
            }

            LAB_0010a126:uVar10 = local_68;
            uVar6 = local_60;
            if (local_48 != 0) {
               LOCK();
               plVar2 = (long*)( local_48 + -0x10 );
               *plVar2 = *plVar2 + -1;
               UNLOCK();
               if (*plVar2 == 0) {
                  Memory::free_static((void*)( local_48 + -0x10 ), false);
                  uVar10 = local_68;
                  uVar6 = local_60;
               }

            }

         }

         LAB_0010a058:local_60 = uVar6;
         local_68 = uVar10;
         uVar10 = local_68;
         uVar6 = local_60;
      }

      local_98 = *param_5;
      local_a0 = 0;
      local_78[0] = 0;
      local_90 = *(undefined1*)( param_5 + 1 );
      local_88 = param_5[2];
      if (param_5[4] != 0) {
         local_68 = uVar10;
         local_60 = uVar6;
         CowData<RID>::_ref((CowData<RID>*)local_78, pCVar1);
      }

      local_68 = *(undefined8*)param_4;
      local_48 = 0;
      local_60 = (undefined1)param_4[2];
      local_58 = *(long*)( param_4 + 4 );
      if (*(long*)( param_4 + 8 ) == 0) {
         Vector<RenderingDevice::Uniform>::push_back(local_a8, &local_68);
      }
 else {
         CowData<RID>::_ref((CowData<RID>*)&local_48, (CowData*)( param_4 + 8 ));
         lVar13 = local_48;
         Vector<RenderingDevice::Uniform>::push_back(local_a8);
         if (lVar13 != 0) {
            LOCK();
            plVar2 = (long*)( lVar13 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               Memory::free_static((void*)( local_48 + -0x10 ), false);
            }

         }

      }

      lVar13 = local_78[0];
      local_48 = 0;
      local_68 = local_98;
      local_60 = local_90;
      local_58 = local_88;
      if (local_78[0] == 0) {
         Vector<RenderingDevice::Uniform>::push_back(local_a8, &local_68);
      }
 else {
         CowData<RID>::_ref((CowData<RID>*)&local_48, (CowData*)local_78);
         lVar17 = local_48;
         Vector<RenderingDevice::Uniform>::push_back(local_a8);
         if (lVar17 != 0) {
            LOCK();
            plVar2 = (long*)( lVar17 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               Memory::free_static((void*)( local_48 + -0x10 ), false);
            }

            lVar13 = local_78[0];
            if (local_78[0] == 0) goto LAB_0010a32c;
         }

         LOCK();
         plVar2 = (long*)( lVar13 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 == 0) {
            Memory::free_static((void*)( local_78[0] + -0x10 ), false);
         }

      }

      LAB_0010a32c:uVar10 = _allocate_from_uniforms<Vector<RenderingDevice::Uniform>>(this, param_2, param_3, uVar9, uVar7, local_a8);
      CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)&local_a0);
      LAB_0010a351:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar10;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* CowData<Vector<unsigned char> >::_realloc(long) */
   undefined8 CowData<Vector<unsigned_char>>::_realloc(CowData<Vector<unsigned_char>> *this, long param_1) {
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

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* Error CowData<Vector<unsigned char> >::resize<false>(long) */
   undefined8 CowData<Vector<unsigned_char>>::resize<false>(CowData<Vector<unsigned_char>> *this, long param_1) {
      long *plVar1;
      code *pcVar2;
      long lVar3;
      undefined8 uVar4;
      undefined8 *puVar5;
      undefined8 *puVar6;
      long lVar7;
      undefined8 *puVar8;
      long lVar9;
      ulong uVar10;
      long lVar11;
      undefined8 *puVar12;
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
         lVar9 = lVar7 * 0x10;
         if (lVar9 != 0) {
            uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
            uVar10 = uVar10 | uVar10 >> 2;
            uVar10 = uVar10 | uVar10 >> 4;
            uVar10 = uVar10 | uVar10 >> 8;
            uVar10 = uVar10 | uVar10 >> 0x10;
            lVar9 = ( uVar10 | uVar10 >> 0x20 ) + 1;
         }

      }

      if (param_1 * 0x10 == 0) {
         LAB_0010ac90:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
         return 6;
      }

      uVar10 = param_1 * 0x10 - 1;
      uVar10 = uVar10 >> 1 | uVar10;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      uVar10 = uVar10 | uVar10 >> 0x20;
      lVar11 = uVar10 + 1;
      if (lVar11 == 0) goto LAB_0010ac90;
      if (param_1 <= lVar7) {
         lVar7 = *(long*)this;
         uVar10 = param_1;
         while (lVar7 != 0) {
            if (*(ulong*)( lVar7 + -8 ) <= uVar10) {
               LAB_0010ab22:if (lVar11 != lVar9) {
                  uVar4 = _realloc(this, lVar11);
                  if ((int)uVar4 != 0) {
                     return uVar4;
                  }

                  lVar7 = *(long*)this;
                  if (lVar7 == 0) {
                     _DAT_00000000 = 0;
                     /* WARNING: Does not return */
                     pcVar2 = (code*)invalidInstructionException();
                     ( *pcVar2 )();
                  }

               }

               *(long*)( lVar7 + -8 ) = param_1;
               return 0;
            }

            while (true) {
               lVar3 = uVar10 * 0x10 + lVar7;
               if (*(long*)( lVar3 + 8 ) != 0) break;
               uVar10 = uVar10 + 1;
               if (*(ulong*)( lVar7 + -8 ) <= uVar10) goto LAB_0010ab22;
            }
;
            LOCK();
            plVar1 = (long*)( *(long*)( lVar3 + 8 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar7 = *(long*)( lVar3 + 8 );
               *(undefined8*)( lVar3 + 8 ) = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }

            uVar10 = uVar10 + 1;
            lVar7 = *(long*)this;
         }
;
         goto LAB_0010ace6;
      }

      if (lVar11 == lVar9) {
         LAB_0010ac0b:puVar8 = *(undefined8**)this;
         if (puVar8 == (undefined8*)0x0) {
            LAB_0010ace6:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar7 = puVar8[-1];
         if (param_1 <= lVar7) goto LAB_0010abe9;
      }
 else {
         if (lVar7 != 0) {
            uVar4 = _realloc(this, lVar11);
            if ((int)uVar4 != 0) {
               return uVar4;
            }

            goto LAB_0010ac0b;
         }

         puVar5 = (undefined8*)Memory::alloc_static(uVar10 + 0x11, false);
         if (puVar5 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }

         puVar8 = puVar5 + 2;
         *puVar5 = 1;
         puVar5[1] = 0;
         *(undefined8**)this = puVar8;
         lVar7 = 0;
      }

      puVar12 = puVar8 + param_1 * 2;
      puVar5 = puVar8 + lVar7 * 2;
      puVar6 = puVar5;
      if (( (int)puVar12 - (int)puVar5 & 0x10U ) != 0) {
         puVar5[1] = 0;
         puVar6 = puVar5 + 2;
         if (puVar5 + 2 == puVar12) goto LAB_0010abe9;
      }

      do {
         puVar6[1] = 0;
         puVar5 = puVar6 + 4;
         puVar6[3] = 0;
         puVar6 = puVar5;
      }
 while ( puVar5 != puVar12 );
      LAB_0010abe9:puVar8[-1] = param_1;
      return 0;
   }

   /* CowData<FfxResourceBinding>::_realloc(long) */
   undefined8 CowData<FfxResourceBinding>::_realloc(CowData<FfxResourceBinding> *this, long param_1) {
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

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* Error CowData<FfxResourceBinding>::resize<false>(long) */
   undefined8 CowData<FfxResourceBinding>::resize<false>(CowData<FfxResourceBinding> *this, long param_1) {
      long *plVar1;
      code *pcVar2;
      undefined8 *puVar3;
      undefined8 uVar4;
      long lVar5;
      ulong uVar6;
      undefined8 *puVar7;
      long lVar8;
      long lVar9;
      if (param_1 < 0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
         return 0x1f;
      }

      lVar5 = *(long*)this;
      if (lVar5 == 0) {
         if (param_1 == 0) {
            return 0;
         }

         _copy_on_write(this);
         lVar9 = 0;
         lVar5 = 0;
      }
 else {
         lVar9 = *(long*)( lVar5 + -8 );
         if (param_1 == lVar9) {
            return 0;
         }

         if (param_1 == 0) {
            LOCK();
            plVar1 = (long*)( lVar5 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 != 0) {
               *(undefined8*)this = 0;
               return 0;
            }

            lVar5 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
            return 0;
         }

         _copy_on_write(this);
         lVar5 = lVar9 * 0x108;
         if (lVar5 != 0) {
            uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
            uVar6 = uVar6 | uVar6 >> 2;
            uVar6 = uVar6 | uVar6 >> 4;
            uVar6 = uVar6 | uVar6 >> 8;
            uVar6 = uVar6 | uVar6 >> 0x10;
            lVar5 = ( uVar6 | uVar6 >> 0x20 ) + 1;
         }

      }

      if (param_1 * 0x108 == 0) {
         LAB_0010af80:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
         return 6;
      }

      uVar6 = param_1 * 0x108 - 1;
      uVar6 = uVar6 | uVar6 >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar6 = uVar6 | uVar6 >> 0x20;
      lVar8 = uVar6 + 1;
      if (lVar8 == 0) goto LAB_0010af80;
      if (lVar9 < param_1) {
         if (lVar8 != lVar5) {
            if (lVar9 == 0) {
               puVar3 = (undefined8*)Memory::alloc_static(uVar6 + 0x11, false);
               if (puVar3 == (undefined8*)0x0) {
                  _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                  return 6;
               }

               puVar7 = puVar3 + 2;
               *puVar3 = 1;
               puVar3[1] = 0;
               *(undefined8**)this = puVar7;
               goto LAB_0010ae8f;
            }

            uVar4 = _realloc(this, lVar8);
            if ((int)uVar4 != 0) {
               return uVar4;
            }

         }

         puVar7 = *(undefined8**)this;
         if (puVar7 != (undefined8*)0x0) {
            LAB_0010ae8f:puVar7[-1] = param_1;
            return 0;
         }

      }
 else {
         if (( lVar8 != lVar5 ) && ( uVar4 = _realloc(this, lVar8) ),(int)uVar4 != 0) {
            return uVar4;
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

   /* WARNING: Control flow encountered bad instruction data */
   /* RendererRD::FSR2Context::Scratch::~Scratch() */
   void RendererRD::FSR2Context::Scratch::~Scratch(Scratch *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* RendererRD::FSR2Effect::{unnamed type#1}::FSR2Effect() */
   void RendererRD::FSR2Effect::{unnamed_type;
   #1
   {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* Fsr2TcrAutogenPassShaderRD::~Fsr2TcrAutogenPassShaderRD() */
   void Fsr2TcrAutogenPassShaderRD::~Fsr2TcrAutogenPassShaderRD(Fsr2TcrAutogenPassShaderRD *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* Fsr2AutogenReactivePassShaderRD::~Fsr2AutogenReactivePassShaderRD() */
   void Fsr2AutogenReactivePassShaderRD::~Fsr2AutogenReactivePassShaderRD(Fsr2AutogenReactivePassShaderRD *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* Fsr2ComputeLuminancePyramidPassShaderRD::~Fsr2ComputeLuminancePyramidPassShaderRD() */
   void Fsr2ComputeLuminancePyramidPassShaderRD::~Fsr2ComputeLuminancePyramidPassShaderRD(Fsr2ComputeLuminancePyramidPassShaderRD *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* Fsr2RcasPassShaderRD::~Fsr2RcasPassShaderRD() */
   void Fsr2RcasPassShaderRD::~Fsr2RcasPassShaderRD(Fsr2RcasPassShaderRD *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* Fsr2AccumulatePassShaderRD::~Fsr2AccumulatePassShaderRD() */
   void Fsr2AccumulatePassShaderRD::~Fsr2AccumulatePassShaderRD(Fsr2AccumulatePassShaderRD *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* Fsr2LockPassShaderRD::~Fsr2LockPassShaderRD() */
   void Fsr2LockPassShaderRD::~Fsr2LockPassShaderRD(Fsr2LockPassShaderRD *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* Fsr2ReconstructPreviousDepthPassShaderRD::~Fsr2ReconstructPreviousDepthPassShaderRD() */
   void Fsr2ReconstructPreviousDepthPassShaderRD::~Fsr2ReconstructPreviousDepthPassShaderRD(Fsr2ReconstructPreviousDepthPassShaderRD *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* Fsr2DepthClipPassShaderRD::~Fsr2DepthClipPassShaderRD() */
   void Fsr2DepthClipPassShaderRD::~Fsr2DepthClipPassShaderRD(Fsr2DepthClipPassShaderRD *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* LocalVector<RenderingDevice::Uniform, unsigned int, false, false>::~LocalVector() */
   void LocalVector<RenderingDevice::Uniform,unsigned_int,false,false>::~LocalVector(LocalVector<RenderingDevice::Uniform,unsigned_int,false,false> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

}


/* PipelineCacheRD::_clear() [clone .part.0] */void PipelineCacheRD::_clear(PipelineCacheRD *this) {
   char cVar1;
   undefined8 uVar2;
   uint uVar3;
   if (*(int*)( this + 0x130 ) != 0) {
      uVar3 = 0;
      do {
         while (true) {
            uVar2 = RenderingDevice::get_singleton();
            cVar1 = RenderingDevice::render_pipeline_is_valid(uVar2);
            if (cVar1 == '\0') break;
            uVar2 = RenderingDevice::get_singleton();
            uVar3 = uVar3 + 1;
            RenderingDevice::free(uVar2);
            if (*(uint*)( this + 0x130 ) <= uVar3) goto LAB_00100074;
         }
;
         uVar3 = uVar3 + 1;
      }
 while ( uVar3 < *(uint*)( this + 0x130 ) );
   }

   LAB_00100074:*(undefined4*)( this + 0x130 ) = 0;
   Memory::free_static(*(void**)( this + 0x128 ), false);
   *(undefined8*)( this + 0x128 ) = 0;
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
/* CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_ref(CowData<RenderingDeviceCommons::PipelineSpecializationConstant>
   const&) [clone .part.0] */void CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_ref(CowData<RenderingDeviceCommons::PipelineSpecializationConstant> *this, CowData *param_1) {
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
/* PipelineCacheRD::_clear() */void PipelineCacheRD::_clear(PipelineCacheRD *this) {
   if (*(long*)( this + 0x128 ) != 0) {
      _clear(this);
      return;
   }

   return;
}
/* PipelineCacheRD::setup(RID, RenderingDeviceCommons::RenderPrimitive,
   RenderingDeviceCommons::PipelineRasterizationState const&,
   RenderingDeviceCommons::PipelineMultisampleState,
   RenderingDeviceCommons::PipelineDepthStencilState const&,
   RenderingDeviceCommons::PipelineColorBlendState const&, int,
   Vector<RenderingDeviceCommons::PipelineSpecializationConstant> const&) */void PipelineCacheRD::setup(PipelineCacheRD *this, long param_2, undefined4 param_3, undefined8 *param_4, undefined4 *param_5, undefined8 *param_6, PipelineCacheRD *param_7, undefined4 param_8, long param_9) {
   undefined4 uVar1;
   PipelineCacheRD PVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long lVar5;
   long lVar6;
   long *plVar7;
   bool bVar8;
   if (param_2 == 0) {
      _err_print_error("setup", "servers/rendering/renderer_rd/pipeline_cache_rd.cpp", 0x59, "Condition \"p_shader.is_null()\" is true.", 0, 0);
      return;
   }

   if (*(long*)( this + 0x128 ) != 0) {
      _clear(this);
   }

   uVar3 = *param_4;
   uVar4 = param_4[1];
   *(long*)( this + 0x40 ) = param_2;
   *(undefined4*)( this + 0x48 ) = param_3;
   *(undefined8*)( this + 0x4c ) = uVar3;
   *(undefined8*)( this + 0x54 ) = uVar4;
   uVar3 = param_4[3];
   *(undefined8*)( this + 0x5c ) = param_4[2];
   *(undefined8*)( this + 100 ) = uVar3;
   *(undefined4*)( this + 0x6c ) = *(undefined4*)( param_4 + 4 );
   uVar1 = param_5[2];
   *(undefined4*)( this + 0x70 ) = *param_5;
   PVar2 = *(PipelineCacheRD*)( param_5 + 1 );
   *(undefined4*)( this + 0x78 ) = uVar1;
   this[0x74] = PVar2;
   if (*(long*)( this + 0x88 ) != *(long*)( param_5 + 6 )) {
      CowData<unsigned_int>::_ref((CowData<unsigned_int>*)( this + 0x88 ), (CowData*)( param_5 + 6 ));
   }

   lVar6 = *(long*)( param_7 + 0x10 );
   *(undefined2*)( this + 0x90 ) = *(undefined2*)( param_5 + 8 );
   uVar3 = param_6[1];
   *(undefined8*)( this + 0x98 ) = *param_6;
   *(undefined8*)( this + 0xa0 ) = uVar3;
   for (int i = 0; i < 4; i++) {
      uVar3 = param_6[( 2*i + 3 )];
      *(undefined8*)( this + ( 16*i + 168 ) ) = param_6[( 2*i + 2 )];
      *(undefined8*)( this + ( 16*i + 176 ) ) = uVar3;
   }

   this[0xe8] = *param_7;
   *(undefined4*)( this + 0xec ) = *(undefined4*)( param_7 + 4 );
   lVar5 = *(long*)( this + 0xf8 );
   if (lVar5 != lVar6) {
      if (lVar5 != 0) {
         LOCK();
         plVar7 = (long*)( lVar5 + -0x10 );
         *plVar7 = *plVar7 + -1;
         UNLOCK();
         if (*plVar7 == 0) {
            lVar6 = *(long*)( this + 0xf8 );
            *(undefined8*)( this + 0xf8 ) = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
            lVar6 = *(long*)( param_7 + 0x10 );
         }
 else {
            *(undefined8*)( this + 0xf8 ) = 0;
            lVar6 = *(long*)( param_7 + 0x10 );
         }

      }

      if (lVar6 != 0) {
         plVar7 = (long*)( lVar6 + -0x10 );
         do {
            lVar6 = *plVar7;
            if (lVar6 == 0) goto LAB_0010044f;
            LOCK();
            lVar5 = *plVar7;
            bVar8 = lVar6 == lVar5;
            if (bVar8) {
               *plVar7 = lVar6 + 1;
               lVar5 = lVar6;
            }

            UNLOCK();
         }
 while ( !bVar8 );
         if (lVar5 != -1) {
            *(undefined8*)( this + 0xf8 ) = *(undefined8*)( param_7 + 0x10 );
         }

      }

   }

   LAB_0010044f:uVar3 = *(undefined8*)( param_7 + 0x20 );
   *(undefined8*)( this + 0x100 ) = *(undefined8*)( param_7 + 0x18 );
   *(undefined8*)( this + 0x108 ) = uVar3;
   *(undefined4*)( this + 0x110 ) = param_8;
   if (*(long*)( this + 0x120 ) == *(long*)( param_9 + 8 )) {
      return;
   }

   CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_ref((CowData<RenderingDeviceCommons::PipelineSpecializationConstant>*)( this + 0x120 ), (CowData*)( param_9 + 8 ));
   return;
}
/* PipelineCacheRD::update_specialization_constants(Vector<RenderingDeviceCommons::PipelineSpecializationConstant>
   const&) */void PipelineCacheRD::update_specialization_constants(PipelineCacheRD *this, Vector *param_1) {
   if (*(long*)( this + 0x120 ) != *(long*)( param_1 + 8 )) {
      CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_ref((CowData<RenderingDeviceCommons::PipelineSpecializationConstant>*)( this + 0x120 ), (CowData*)( param_1 + 8 ));
   }

   if (*(long*)( this + 0x128 ) != 0) {
      _clear(this);
      return;
   }

   return;
}
/* PipelineCacheRD::update_shader(RID) */void PipelineCacheRD::update_shader(PipelineCacheRD *this, long param_2) {
   long *plVar1;
   undefined4 uVar2;
   long lVar3;
   long in_FS_OFFSET;
   undefined1 local_78[8];
   long local_70;
   undefined4 local_68;
   PipelineCacheRD local_64;
   undefined4 local_60;
   long local_50;
   undefined2 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("update_shader", "servers/rendering/renderer_rd/pipeline_cache_rd.cpp", 0x6a, "Condition \"p_shader.is_null()\" is true.", 0, 0);
         return;
      }

   }
 else {
      if (*(long*)( this + 0x128 ) != 0) {
         _clear(this);
      }

      local_68 = *(undefined4*)( this + 0x70 );
      local_60 = *(undefined4*)( this + 0x78 );
      local_70 = 0;
      uVar2 = *(undefined4*)( this + 0x110 );
      local_50 = 0;
      local_64 = this[0x74];
      if (*(long*)( this + 0x88 ) == 0) {
         local_48 = *(undefined2*)( this + 0x90 );
         setup(this, param_2, *(undefined4*)( this + 0x48 ), this + 0x4c, &local_68, this + 0x98, this + 0xe8, uVar2, local_78);
      }
 else {
         CowData<unsigned_int>::_ref((CowData<unsigned_int>*)&local_50, (CowData*)( this + 0x88 ));
         lVar3 = local_50;
         local_48 = *(undefined2*)( this + 0x90 );
         setup(this, param_2, *(undefined4*)( this + 0x48 ), this + 0x4c, &local_68, this + 0x98, this + 0xe8, uVar2, local_78);
         if (lVar3 != 0) {
            LOCK();
            plVar1 = (long*)( lVar3 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_50 + -0x10 ), false);
            }

            if (local_70 != 0) {
               LOCK();
               plVar1 = (long*)( local_70 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     Memory::free_static((void*)( local_70 + -0x10 ), false);
                     return;
                  }

                  goto LAB_00100773;
               }

            }

         }

      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   LAB_00100773:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* PipelineCacheRD::clear() */void PipelineCacheRD::clear(PipelineCacheRD *this) {
   if (*(long*)( this + 0x128 ) != 0) {
      _clear(this);
   }

   *(undefined8*)( this + 0x40 ) = 0;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* PipelineCacheRD::PipelineCacheRD() */void PipelineCacheRD::PipelineCacheRD(PipelineCacheRD *this) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   uVar4 = _UNK_00101328;
   uVar3 = __LC11;
   uVar2 = _UNK_00101318;
   uVar1 = __LC8;
   *this = (PipelineCacheRD)0x0;
   *(undefined8*)( this + 0xb0 ) = uVar3;
   *(undefined8*)( this + 0xb8 ) = uVar4;
   uVar4 = _UNK_00101338;
   uVar3 = __LC12;
   *(undefined8*)( this + 0x5c ) = uVar1;
   *(undefined8*)( this + 100 ) = uVar2;
   *(undefined8*)( this + 0xc0 ) = uVar3;
   *(undefined8*)( this + 200 ) = uVar4;
   uVar4 = _UNK_00101348;
   uVar3 = __LC13;
   *(undefined8*)( this + 0x100 ) = uVar1;
   *(undefined8*)( this + 0x108 ) = uVar2;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined2*)( this + 0x4c ) = 0;
   this[0x4e] = (PipelineCacheRD)0x0;
   *(undefined8*)( this + 0x50 ) = 0;
   this[0x58] = (PipelineCacheRD)0x0;
   *(undefined8*)( this + 0x6c ) = 1;
   this[0x74] = (PipelineCacheRD)0x0;
   *(undefined4*)( this + 0x78 ) = 0;
   *(undefined8*)( this + 0x88 ) = 0;
   *(undefined2*)( this + 0x90 ) = 0;
   *(undefined2*)( this + 0x98 ) = 0;
   *(undefined4*)( this + 0x9c ) = 7;
   this[0xa0] = (PipelineCacheRD)0x0;
   *(undefined8*)( this + 0xa4 ) = 0;
   this[0xac] = (PipelineCacheRD)0x0;
   *(undefined8*)( this + 0xe0 ) = 0;
   this[0xe8] = (PipelineCacheRD)0x0;
   *(undefined4*)( this + 0xec ) = 0;
   *(undefined8*)( this + 0xf8 ) = 0;
   *(undefined4*)( this + 0x110 ) = 0;
   *(undefined4*)( this + 0x130 ) = 0;
   *(undefined8*)( this + 0xd0 ) = uVar3;
   *(undefined8*)( this + 0xd8 ) = uVar4;
   *(undefined1(*) [16])( this + 0x120 ) = (undefined1[16])0x0;
   return;
}
/* PipelineCacheRD::~PipelineCacheRD() */void PipelineCacheRD::~PipelineCacheRD(PipelineCacheRD *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)( this + 0x128 ) != 0) {
      _clear(this);
   }

   if (*(long*)( this + 0x120 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x120 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x120 );
         *(undefined8*)( this + 0x120 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0xf8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0xf8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0xf8 );
         *(undefined8*)( this + 0xf8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x88 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x88 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x88 );
         *(undefined8*)( this + 0x88 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* PipelineCacheRD::_generate_version(long, long, bool, unsigned int, unsigned int) */long PipelineCacheRD::_generate_version(PipelineCacheRD *this, long param_1, long param_2, bool param_3, uint param_4, uint param_5) {
   long *plVar1;
   undefined4 *puVar2;
   int iVar3;
   long lVar4;
   undefined8 uVar5;
   long lVar6;
   uint uVar7;
   int iVar8;
   uint uVar9;
   long in_FS_OFFSET;
   bool bVar10;
   undefined1 local_a8[8];
   long local_a0;
   undefined2 local_98;
   bool bStack_96;
   undefined5 uStack_95;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined4 local_78;
   undefined4 local_68;
   PipelineCacheRD local_64;
   undefined4 local_60;
   long local_50;
   undefined2 local_48;
   long local_40;
   local_60 = *(undefined4*)( this + 0x78 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = *(undefined4*)( this + 0x70 );
   local_50 = 0;
   local_64 = this[0x74];
   if (*(long*)( this + 0x88 ) != 0) {
      CowData<unsigned_int>::_ref((CowData<unsigned_int>*)&local_50, (CowData*)( this + 0x88 ));
   }

   local_48 = *(undefined2*)( this + 0x90 );
   lVar4 = RenderingDevice::get_singleton();
   local_68 = RenderingDevice::framebuffer_format_get_texture_samples(lVar4, (uint)param_2);
   uStack_90 = *(undefined8*)( this + 0x54 );
   local_88 = *(undefined8*)( this + 0x5c );
   uStack_80 = *(undefined8*)( this + 100 );
   local_a0 = 0;
   local_78 = *(undefined4*)( this + 0x6c );
   uStack_95 = ( undefined5 )(( ulong ) * (undefined8*)( this + 0x4c ) >> 0x18);
   _local_98 = CONCAT12(param_3, (short)*(undefined8*)( this + 0x4c ));
   plVar1 = (long*)( *(long*)( this + 0x120 ) + -0x10 );
   if (*(long*)( this + 0x120 ) != 0) {
      do {
         lVar4 = *plVar1;
         if (lVar4 == 0) goto LAB_00100a8d;
         LOCK();
         lVar6 = *plVar1;
         bVar10 = lVar4 == lVar6;
         if (bVar10) {
            *plVar1 = lVar4 + 1;
            lVar6 = lVar4;
         }

         UNLOCK();
      }
 while ( !bVar10 );
      if (lVar6 != -1) {
         local_a0 = *(long*)( this + 0x120 );
      }

   }

   LAB_00100a8d:if (param_5 == 0) {
      LAB_00100b58:uVar5 = RenderingDevice::get_singleton();
      lVar4 = RenderingDevice::render_pipeline_create(uVar5, *(undefined8*)( this + 0x40 ), param_2, param_1, *(undefined4*)( this + 0x48 ), &local_98, &local_68, this + 0x98, this + 0xe8, (long)*(int*)( this + 0x110 ), param_4, local_a8);
      if (lVar4 == 0) {
         lVar4 = 0;
         _err_print_error("_generate_version", "servers/rendering/renderer_rd/pipeline_cache_rd.cpp", 0x3d, "Condition \"pipeline.is_null()\" is true. Returning: RID()", 0, 0);
      }
 else {
         lVar6 = Memory::realloc_static(*(void**)( this + 0x128 ), ( ulong )(*(int*)( this + 0x130 ) + 1) * 0x28, false);
         *(long*)( this + 0x128 ) = lVar6;
         plVar1 = (long*)( lVar6 + ( ulong ) * (uint*)( this + 0x130 ) * 0x28 );
         plVar1[1] = param_2;
         plVar1[4] = lVar4;
         *plVar1 = param_1;
         *(uint*)( plVar1 + 2 ) = param_4;
         *(bool*)( (long)plVar1 + 0x14 ) = param_3;
         *(uint*)( lVar6 + 0x18 + ( ulong ) * (uint*)( this + 0x130 ) * 0x28 ) = param_5;
         *(int*)( this + 0x130 ) = *(int*)( this + 0x130 ) + 1;
      }

      lVar6 = local_a0;
      if (local_a0 != 0) {
         LOCK();
         plVar1 = (long*)( local_a0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
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

      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return lVar4;
   }

   iVar8 = 0;
   uVar9 = param_5;
   do {
      uVar7 = 1 << ( (byte)iVar8 & 0x1f );
      if (( uVar7 & uVar9 ) != 0) {
         if (local_a0 == 0) {
            lVar4 = 1;
         }
 else {
            lVar4 = *(long*)( local_a0 + -8 ) + 1;
         }

         iVar3 = CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::resize<false>((CowData<RenderingDeviceCommons::PipelineSpecializationConstant>*)&local_a0, lVar4);
         if (iVar3 == 0) {
            if (local_a0 == 0) {
               lVar6 = -1;
               lVar4 = 0;
            }
 else {
               lVar4 = *(long*)( local_a0 + -8 );
               lVar6 = lVar4 + -1;
               if (-1 < lVar6) {
                  CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write((CowData<RenderingDeviceCommons::PipelineSpecializationConstant>*)&local_a0);
                  puVar2 = (undefined4*)( local_a0 + lVar6 * 0xc );
                  *puVar2 = 0;
                  puVar2[1] = iVar8;
                  puVar2[2] = 1;
                  goto LAB_00100b46;
               }

            }

            _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar6, lVar4, "p_index", "size()", "", false, false);
         }
 else {
            _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
         }

         LAB_00100b46:uVar9 = uVar9 & ~uVar7;
         if (uVar9 == 0) goto LAB_00100b58;
      }

      iVar8 = iVar8 + 1;
   }
 while ( true );
}
/* CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write() [clone .isra.0]
   [clone .cold] */void CowData<RenderingDeviceCommons::PipelineSpecializationConstant>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
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
      LAB_001012a0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = lVar10 - 1U >> 1 | lVar10 - 1U;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar9 = uVar4 + 1;
   if (lVar9 == 0) goto LAB_001012a0;
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
      LAB_0010120c:puVar8 = *(undefined8**)this;
      if (puVar8 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar8[-1];
      if (param_1 <= lVar3) goto LAB_0010119b;
   }
 else {
      if (lVar11 != 0) {
         uVar7 = _realloc(this, lVar9);
         if ((int)uVar7 != 0) {
            return uVar7;
         }

         goto LAB_0010120c;
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

   uVar7 = _LC19;
   puVar5 = (undefined8*)( (long)puVar8 + lVar3 * 0xc );
   do {
      *puVar5 = uVar7;
      puVar6 = (undefined8*)( (long)puVar5 + 0xc );
      *(undefined4*)( puVar5 + 1 ) = 0;
      puVar5 = puVar6;
   }
 while ( puVar6 != (undefined8*)( lVar10 + (long)puVar8 ) );
   LAB_0010119b:puVar8[-1] = param_1;
   return 0;
}


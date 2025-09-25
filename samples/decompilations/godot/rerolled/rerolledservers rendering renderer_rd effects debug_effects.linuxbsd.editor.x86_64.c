/* CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write() [clone .isra.0] */void CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write(CowData<RenderingDeviceCommons::VertexAttribute> *this) {
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
   __n = lVar2 * 0x14;
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
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */void CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this) {
   long *plVar1;
   size_t __n;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   __n = *(size_t*)( *(long*)this + -8 );
   uVar5 = 0x10;
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
      puVar4[1] = __n;
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
/* RendererRD::DebugEffects::~DebugEffects() */void RendererRD::DebugEffects::~DebugEffects(DebugEffects *this) {
   long lVar1;
   undefined8 uVar2;
   ShaderRD::version_free((ShaderRD*)( this + 0x38 ), *(undefined8*)( this + 0x1b0 ));
   if (*(long*)( this + 8 ) == 0) {
      lVar1 = *(long*)( this + 0x18 );
   }
 else {
      uVar2 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar2, *(undefined8*)( this + 8 ));
      lVar1 = *(long*)( this + 0x18 );
   }

   if (lVar1 == 0) {
      lVar1 = *(long*)( this + 0x28 );
   }
 else {
      uVar2 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar2, *(undefined8*)( this + 0x18 ));
      lVar1 = *(long*)( this + 0x28 );
   }

   if (lVar1 != 0) {
      uVar2 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar2, *(undefined8*)( this + 0x28 ));
   }

   ShaderRD::version_free((ShaderRD*)( this + 0x428 ), *(undefined8*)( this + 0x5a0 ));
   PipelineCacheRD::~PipelineCacheRD((PipelineCacheRD*)( this + 0x5a8 ));
   *(undefined***)( this + 0x428 ) = &PTR__MotionVectorsShaderRD_00107380;
   ShaderRD::~ShaderRD((ShaderRD*)( this + 0x428 ));
   PipelineCacheRD::~PipelineCacheRD((PipelineCacheRD*)( this + 0x2f0 ));
   PipelineCacheRD::~PipelineCacheRD((PipelineCacheRD*)( this + 0x1b8 ));
   *(undefined***)( this + 0x38 ) = &PTR__ShadowFrustumShaderRD_001073a0;
   ShaderRD::~ShaderRD((ShaderRD*)( this + 0x38 ));
   return;
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
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */void CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this, long param_1) {
   CowData<unsigned_char> *pCVar1;
   long *plVar2;
   long lVar3;
   int iVar4;
   ulong uVar5;
   CowData<unsigned_char> *pCVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   CowData<unsigned_char> *pCVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      LAB_00100ba6:lVar10 = 0;
      pCVar6 = (CowData<unsigned_char>*)0x0;
   }
 else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar2 = (long*)( lVar3 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      if (lVar10 == 0) goto LAB_00100ba6;
      uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar6 = (CowData<unsigned_char>*)( ( uVar5 | uVar5 >> 0x20 ) + 1 );
   }

   uVar5 = param_1 - 1U | param_1 - 1U >> 1;
   uVar5 = uVar5 | uVar5 >> 2;
   uVar5 = uVar5 | uVar5 >> 4;
   uVar5 = uVar5 | uVar5 >> 8;
   uVar5 = uVar5 | uVar5 >> 0x10;
   pCVar9 = (CowData<unsigned_char>*)( uVar5 | uVar5 >> 0x20 );
   pCVar1 = pCVar9 + 1;
   if (param_1 <= lVar10) {
      if (( pCVar1 != pCVar6 ) && ( iVar4 = iVar4 != 0 )) {
         return;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return;
      }

      FUN_00104834();
      return;
   }

   if (pCVar1 != pCVar6) {
      if (lVar10 == 0) {
         puVar7 = (undefined8*)Memory::alloc_static(( ulong )(pCVar9 + 0x11), false);
         if (puVar7 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            return;
         }

         puVar8 = puVar7 + 2;
         *puVar7 = 1;
         puVar7[1] = 0;
         *(undefined8**)this = puVar8;
         goto LAB_00100afc;
      }

      pCVar9 = this;
      iVar4 = _realloc(this, (long)pCVar1);
      if (iVar4 != 0) {
         return;
      }

   }

   puVar8 = *(undefined8**)this;
   if (puVar8 == (undefined8*)0x0) {
      resize<false>((long)pCVar9);
      return;
   }

   LAB_00100afc:puVar8[-1] = param_1;
   return;
}
/* Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back(RenderingDeviceCommons::PipelineColorBlendState::Attachment)
   [clone .isra.0] */void Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back(long param_1) {
   int iVar1;
   undefined8 *puVar2;
   long lVar3;
   long lVar4;
   undefined8 in_stack_00000008;
   undefined8 in_stack_00000010;
   undefined8 in_stack_00000018;
   undefined8 in_stack_00000020;
   if (*(long*)( param_1 + 8 ) == 0) {
      lVar4 = 1;
   }
 else {
      lVar4 = *(long*)( *(long*)( param_1 + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::resize<false>((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>*)( param_1 + 8 ), lVar4);
   if (iVar1 == 0) {
      if (*(long*)( param_1 + 8 ) == 0) {
         lVar3 = -1;
         lVar4 = 0;
      }
 else {
         lVar4 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
         lVar3 = lVar4 + -1;
         if (-1 < lVar3) {
            CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>*)( param_1 + 8 ));
            puVar2 = (undefined8*)( lVar3 * 0x20 + *(long*)( param_1 + 8 ) );
            *puVar2 = in_stack_00000008;
            puVar2[1] = in_stack_00000010;
            puVar2[2] = in_stack_00000018;
            puVar2[3] = in_stack_00000020;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar4, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::DebugEffects::DebugEffects() */void RendererRD::DebugEffects::DebugEffects(DebugEffects *this) {
   ShaderRD *this_00;
   long *plVar1;
   ShaderRD *this_01;
   char cVar2;
   char *pcVar3;
   uint *puVar4;
   undefined8 *puVar5;
   code *pcVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   ulong uVar10;
   long lVar11;
   int iVar12;
   long lVar13;
   long lVar14;
   long in_FS_OFFSET;
   Vector<String> local_138[8];
   undefined8 local_130;
   undefined1 local_128[8];
   long local_120;
   undefined2 local_118;
   undefined1 uStack_116;
   undefined1 uStack_115;
   undefined4 uStack_114;
   undefined4 uStack_110;
   uint uStack_10c;
   undefined8 local_108;
   undefined4 uStack_100;
   undefined4 uStack_fc;
   undefined4 uStack_f8;
   ulong local_e8;
   ulong local_e0[2];
   long local_d0;
   undefined2 local_c8;
   undefined4 local_b8;
   undefined4 uStack_b4;
   undefined4 uStack_b0;
   undefined4 uStack_ac;
   undefined4 uStack_a8;
   undefined4 uStack_a4;
   undefined4 uStack_a0;
   uint uStack_9c;
   undefined1 local_98[16];
   undefined4 local_88;
   undefined8 uStack_84;
   undefined4 uStack_7c;
   undefined4 local_78;
   undefined1 auStack_74[12];
   undefined1 local_68[4];
   undefined4 local_64;
   undefined1 local_60[8];
   long local_58;
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   this_00 = (ShaderRD*)( this + 0x38 );
   this_01 = (ShaderRD*)( this + 0x428 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 8 ) ) = (undefined1[16])0;
   }

   ShaderRD::ShaderRD(this_00);
   *(undefined***)( this + 0x38 ) = &PTR__ShadowFrustumShaderRD_001073a0;
   ShaderRD::setup((char*)this_00, "\n#version 450\n\n#VERSION_DEFINES\n\n/* clang-format on */\n\nlayout(push_constant, std430) uniform Info {\n\tmat4 mvp;\n\tvec4 color;\n}\ninfo;\n\nlayout(location = 0) in vec3 vertex_attrib;\n\nvoid main() {\n\tvec4 vertex = info.mvp * vec4(vertex_attrib, 1.0);\n\tvertex.xyz /= vertex.w;\n\tgl_Position = vec4(vertex.xy, 0.0, 1.0);\n}\n\n/* clang-format off */\n", "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(push_constant, std430) uniform Info {\n\tmat4 mvp;\n\tvec4 color;\n}\ninfo;\n\nlayout(location = 0) out vec4 frag_color;\n\nvoid main() {\n\tfrag_color = info.color;\n}\n", (char*)0x0);
   *(undefined8*)( this + 0x1b0 ) = 0;
   PipelineCacheRD::PipelineCacheRD((PipelineCacheRD*)( this + 0x1b8 ));
   PipelineCacheRD::PipelineCacheRD((PipelineCacheRD*)( this + 0x2f0 ));
   ShaderRD::ShaderRD(this_01);
   *(undefined***)( this + 0x428 ) = &PTR__MotionVectorsShaderRD_00107380;
   ShaderRD::setup((char*)this_01, "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(location = 0) out vec2 uv_interp;\n\nvoid main() {\n\tvec2 base_arr[3] = vec2[](vec2(-1.0, -1.0), vec2(-1.0, 3.0), vec2(3.0, -1.0));\n\tgl_Position = vec4(base_arr[gl_VertexIndex], 0.0, 1.0);\n\tuv_interp = clamp(gl_Position.xy, vec2(0.0, 0.0), vec2(1.0, 1.0)) * 2.0; \n}\n\n", "\n#version 450\n\n#VERSION_DEFINES\n\nvec2 derive_motion_vector(vec2 uv, float depth, mat4 reprojection_matrix) {\n\tvec4 previous_pos_ndc = reprojection_matrix * vec4(uv * 2.0f - 1.0f, depth * 2.0f - 1.0f, 1.0f);\n\treturn 0.5f + (previous_pos_ndc.xy / previous_pos_ndc.w) * 0.5f - uv;\n}\n\n#define FFX_FSR2_OPTION_GODOT_DERIVE_INVALID_MOTION_VECTORS_FUNCTION(i, j, k) derive_motion_vector(i, j, k)\n\nlayout(location = 0) in vec2 uv_interp;\n\nlayout(set = 0, binding = 0) uniform sampler2D source_velocity;\nlayout(set = 0, binding = 1) uniform sampler2D source_depth;\n\nlayout(location = 0) out vec4 frag_color;\n\nlayout(push_constant, std430) uniform Params {\n\thighp mat4 reprojection_matrix;\n\tvec2 resolution;\n\tbool force_derive_from_depth;\n}\nparams;\n\n\n\nfloat line_segment(in vec2 p, in vec2 a, in vec2 b) {\n\tvec2 aspect = vec2(params.resolution.x / params.resolution.y, 1.0f);\n\tvec2 ba = (b - a) * aspect;\n\tvec2 pa = (p - a) * aspect;\n\tfloat h = clamp(dot(pa, ba) / dot(ba, ba), 0.0f, 1.0f);\n\treturn length(pa - h * ba) * (params.resolution.y / 2.0f);\n}\n\nvoid main() {\n\t\n\tfloat cell_size = 32.0f;\n\tfloat circle_radius = 2.0f;\n\tvec3 nan_color = vec3(1.0f, 0.0f, 0.0f);\n\tvec3 active_color = vec3(1.0f, 0.8f, 0.1f);\n\tvec3 inactive_color = vec3(0.5f, 0.5f, 0.5f);\n\tvec2 pos_pixel = uv_interp * params.resolution;\n\tvec2 cell_pos_pixel = floor(pos_pixel / cell_size) * cell_size + (cell_size * 0.5f);\n\tvec2 cell_pos_uv = cell_pos_pixel / params.resolution;\n\tvec2 cell_pos_velocity = textureLod(source_velocity, cell_pos_uv, 0.0f).xy;\n\tbool derive_velocity = params.force_derive_from_depth || all(lessThanEqual(cell_pos_velocity, vec2(-1.0f, -1.0f)));\n\tif (derive_velocity) {\n\t\tfloat depth = textureLod(source_depth, cell_pos_uv, 0.0f).x;\n\t\tcell_pos_velocity = derive_motion_vector(cell_pos_uv, depth, params.reprojection_matrix);\n\t}\n\n\tvec2 cell_pos_previous_uv = cell_pos_uv + cell_pos_velocity;\n\n\t\n\tfloat epsilon = 1e-6f;\n\tvec2 cell_pos_delta_uv = cell_pos_uv - cell_pos_previous_uv;\n\tbool motion_active = length(cell_pos_delta_uv) > epsilon;\n\tvec3 color;\n\tif (any...", /* TRUNCATED STRING LITERAL */, (char*)0x0);
   *(undefined8*)( this + 0x5a0 ) = 0;
   PipelineCacheRD::PipelineCacheRD((PipelineCacheRD*)( this + 0x5a8 ));
   local_130 = 0;
   local_e8 = 0;
   local_b8 = 0x104a99;
   uStack_b4 = 0;
   uStack_b0 = 0;
   uStack_ac = 0;
   String::parse_latin1((StrRange*)&local_e8);
   Vector<String>::push_back();
   uVar10 = local_e8;
   if (local_e8 != 0) {
      LOCK();
      plVar1 = (long*)( local_e8 - 0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_e8 = 0;
         Memory::free_static((void*)( uVar10 - 0x10 ), false);
      }

   }

   local_e0[0] = 0;
   local_118 = 0;
   uStack_116 = 0;
   uStack_115 = 0;
   uStack_114 = 0;
   local_b8 = 0x104a99;
   uStack_b4 = 0;
   uStack_b0 = 0;
   uStack_ac = 0;
   String::parse_latin1((StrRange*)&local_118);
   ShaderRD::initialize((Vector*)this_00, local_138, (Vector*)&local_118);
   lVar13 = CONCAT44(uStack_114, CONCAT13(uStack_115, CONCAT12(uStack_116, local_118)));
   if (lVar13 != 0) {
      LOCK();
      plVar1 = (long*)( lVar13 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar13 = CONCAT44(uStack_114, CONCAT13(uStack_115, CONCAT12(uStack_116, local_118)));
         local_118 = 0;
         uStack_116 = 0;
         uStack_115 = 0;
         uStack_114 = 0;
         Memory::free_static((void*)( lVar13 + -0x10 ), false);
      }

   }

   CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)local_e0);
   uVar8 = ShaderRD::version_create();
   uStack_48 = _UNK_00108168;
   local_108 = __LC43;
   uStack_116 = 0;
   *(undefined8*)( this + 0x1b0 ) = uVar8;
   uStack_10c = uStack_10c & 0xffffff00;
   uStack_9c = _LC39;
   local_118 = 0;
   uStack_a4 = (undefined4)_LC45;
   uStack_a0 = ( undefined4 )((ulong)_LC45 >> 0x20);
   uStack_114 = 0;
   uStack_110 = 0;
   uStack_100 = (undefined4)uStack_48;
   uStack_fc = ( undefined4 )((ulong)uStack_48 >> 0x20);
   uStack_f8 = 1;
   local_120 = 0;
   local_68[0] = 0;
   local_64 = 0;
   local_58 = 0;
   local_50 = local_108;
   local_b8 = CONCAT31(local_b8._1_3_, 1);
   uStack_b4 = (undefined4)__LC44;
   uStack_b0 = ( undefined4 )((ulong)__LC44 >> 0x20);
   uStack_ac = (undefined4)_UNK_00108178;
   uStack_a8 = ( undefined4 )((ulong)_UNK_00108178 >> 0x20);
   uVar8 = CONCAT44(_LC39, uStack_a0);
   Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back();
   local_c8 = 0;
   local_b8 = 0;
   uStack_b0 = 0;
   uStack_ac = 0;
   uVar10 = *(ulong*)( this + 0x1b0 );
   uStack_a8 = 0;
   uStack_a4 = 0;
   local_88 = 0;
   auStack_74 = SUB1612((undefined1[16])0x0, 4);
   uStack_b4 = 7;
   local_e8 = local_e8 & 0xffffff0000000000;
   local_e0[0] = local_e0[0] & 0xffffffff00000000;
   local_d0 = 0;
   uStack_a0 = (undefined4)_LC64;
   uStack_9c = ( uint )((ulong)_LC64 >> 0x20);
   local_98._8_8_ = 0;
   local_98._0_8_ = _UNK_00108188;
   uStack_84 = _LC64;
   uStack_7c = (undefined4)_UNK_00108188;
   local_78 = ( undefined4 )(_UNK_00108188 >> 0x20);
   if (*(long*)( this + 0x50 ) == 0) {
      lVar13 = 0;
      LAB_00101a88:_err_print_index_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa6, 0, lVar13, "p_variant", "variant_defines.size()", "", false, false);
      LAB_00101abb:uVar8 = 0;
      LAB_00101176:PipelineCacheRD::setup((PipelineCacheRD*)( this + 0x1b8 ), uVar8, 5, (StrRange*)&local_118, (StrRange*)&local_e8, &local_b8, local_68, 0, local_128);
      lVar13 = local_d0;
      if (local_d0 != 0) {
         LOCK();
         plVar1 = (long*)( local_d0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_d0 = 0;
            Memory::free_static((void*)( lVar13 + -0x10 ), false);
         }

      }

      lVar13 = local_58;
      if (local_58 != 0) {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58 = 0;
            Memory::free_static((void*)( lVar13 + -0x10 ), false);
         }

      }

      lVar13 = local_120;
      if (local_120 != 0) {
         LOCK();
         plVar1 = (long*)( local_120 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_120 = 0;
            Memory::free_static((void*)( lVar13 + -0x10 ), false);
         }

      }

      uStack_116 = 1;
      local_b8 = 0;
      uStack_b4 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_9c = _LC39;
      local_120 = 0;
      local_68[0] = 0;
      local_64 = 0;
      local_58 = 0;
      local_50 = __LC43;
      uStack_48 = _UNK_00108168;
      lVar11 = (ulong)_LC39 << 0x20;
      Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back(local_60);
      local_b8 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      uVar10 = *(ulong*)( this + 0x1b0 );
      uStack_a8 = 0;
      uStack_a4 = 0;
      local_88 = 0;
      auStack_74 = SUB1612((undefined1[16])0x0, 4);
      uStack_b4 = 7;
      local_e8 = local_e8 & 0xffffff0000000000;
      local_e0[0] = local_e0[0] & 0xffffffff00000000;
      local_c8 = 0;
      local_d0 = 0;
      uStack_a0 = (undefined4)_LC64;
      uStack_9c = ( uint )((ulong)_LC64 >> 0x20);
      local_98._8_8_ = 0;
      local_98._0_8_ = _UNK_00108188;
      uStack_84 = _LC64;
      uStack_7c = (undefined4)_UNK_00108188;
      local_78 = ( undefined4 )(_UNK_00108188 >> 0x20);
      if (*(long*)( this + 0x50 ) == 0) {
         lVar13 = 0;
         LAB_00101cbf:_err_print_index_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa6, 0, lVar13, "p_variant", "variant_defines.size()", "", false, false);
         LAB_00101444:uVar8 = 0;
         LAB_00101446:PipelineCacheRD::setup((PipelineCacheRD*)( this + 0x2f0 ), uVar8, 1, (StrRange*)&local_118, (StrRange*)&local_e8, &local_b8, local_68, 0, local_128);
         lVar13 = local_d0;
         if (local_d0 != 0) {
            LOCK();
            plVar1 = (long*)( local_d0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_d0 = 0;
               Memory::free_static((void*)( lVar13 + -0x10 ), false);
            }

         }

         lVar13 = local_58;
         if (local_58 != 0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = 0;
               Memory::free_static((void*)( lVar13 + -0x10 ), false);
            }

         }

         lVar13 = local_120;
         if (local_120 != 0) {
            LOCK();
            plVar1 = (long*)( local_120 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_120 = 0;
               Memory::free_static((void*)( lVar13 + -0x10 ), false);
            }

         }

         CowData<String>::_unref((CowData<String>*)&local_130);
         local_130 = 0;
         local_e8 = 0;
         local_b8 = 0x104a99;
         uStack_b4 = 0;
         uStack_b0 = 0;
         uStack_ac = 0;
         String::parse_latin1((StrRange*)&local_e8);
         Vector<String>::push_back(local_138);
         uVar10 = local_e8;
         if (local_e8 != 0) {
            LOCK();
            plVar1 = (long*)( local_e8 - 0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_e8 = 0;
               Memory::free_static((void*)( uVar10 - 0x10 ), false);
            }

         }

         local_e0[0] = 0;
         local_118 = 0;
         uStack_116 = 0;
         uStack_115 = 0;
         uStack_114 = 0;
         local_b8 = 0x104a99;
         uStack_b4 = 0;
         uStack_b0 = 0;
         uStack_ac = 0;
         String::parse_latin1((StrRange*)&local_118);
         ShaderRD::initialize((Vector*)this_01, local_138, (Vector*)&local_118);
         lVar13 = CONCAT44(uStack_114, CONCAT13(uStack_115, CONCAT12(uStack_116, local_118)));
         if (lVar13 != 0) {
            LOCK();
            plVar1 = (long*)( lVar13 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar13 = CONCAT44(uStack_114, CONCAT13(uStack_115, CONCAT12(uStack_116, local_118)));
               local_118 = 0;
               uStack_116 = 0;
               uStack_115 = 0;
               uStack_114 = 0;
               Memory::free_static((void*)( lVar13 + -0x10 ), false);
            }

         }

         CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)local_e0);
         uVar9 = ShaderRD::version_create();
         uVar7 = _UNK_00108178;
         uVar8 = __LC44;
         uStack_48 = _UNK_00108168;
         local_50 = __LC43;
         local_120 = 0;
         *(undefined8*)( this + 0x5a0 ) = uVar9;
         local_68[0] = 0;
         uStack_9c = _LC39;
         local_64 = 0;
         uStack_a4 = (undefined4)_LC45;
         uStack_a0 = ( undefined4 )((ulong)_LC45 >> 0x20);
         local_58 = 0;
         local_b8 = CONCAT31(local_b8._1_3_, 1);
         uStack_b4 = (undefined4)uVar8;
         uStack_b0 = ( undefined4 )((ulong)uVar8 >> 0x20);
         uStack_ac = (undefined4)uVar7;
         uStack_a8 = ( undefined4 )((ulong)uVar7 >> 0x20);
         uVar8 = CONCAT44(_LC39, uStack_a0);
         Vector<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::push_back(local_60);
         uStack_fc = 0x3f800000;
         uStack_f8 = 1;
         local_c8 = 0;
         uVar10 = *(ulong*)( this + 0x5a0 );
         local_b8 = 0;
         uStack_b0 = 0;
         uStack_ac = 0;
         uStack_a8 = 0;
         uStack_a4 = 0;
         local_88 = 0;
         auStack_74 = SUB1612((undefined1[16])0x0, 4);
         local_118 = 0;
         uStack_116 = 0;
         uStack_115 = 0;
         uStack_114 = 0;
         uStack_110 = 0;
         uStack_b4 = 7;
         local_e8 = local_e8 & 0xffffff0000000000;
         local_e0[0] = local_e0[0] & 0xffffffff00000000;
         local_d0 = 0;
         uStack_a0 = (undefined4)_LC64;
         uStack_9c = ( uint )((ulong)_LC64 >> 0x20);
         local_98._8_8_ = 0;
         local_98._0_8_ = _UNK_00108188;
         uStack_84 = _LC64;
         uStack_7c = (undefined4)_UNK_00108188;
         local_78 = ( undefined4 )(_UNK_00108188 >> 0x20);
         uStack_10c = 0;
         local_108 = 0;
         uStack_100 = 0;
         if (*(long*)( this + 0x440 ) == 0) {
            lVar13 = 0;
         }
 else {
            lVar13 = *(long*)( *(long*)( this + 0x440 ) + -8 );
            if (0 < lVar13) {
               pcVar3 = *(char**)( this + 0x450 );
               if (pcVar3 == (char*)0x0) goto LAB_00101a48;
               lVar13 = *(long*)( pcVar3 + -8 );
               if (0 < lVar13) {
                  if (*pcVar3 == '\0') {
                     _err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa7, "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()", 0, 0);
                     uVar8 = 0;
                     goto LAB_0010186e;
                  }

                  if (( uVar10 != 0 ) && ( (uint)uVar10 < *(uint*)( this + 0x4fc ) )) {
                     lVar11 = ( ( uVar10 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x4f8 ) ) * 0xa0 + *(long*)( *(long*)( this + 0x4e8 ) + ( ( uVar10 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x4f8 ) ) * 8 );
                     if (*(int*)( lVar11 + 0x98 ) == (int)( uVar10 >> 0x20 )) {
                        iVar12 = (int)lVar11;
                        if (*(char*)( lVar11 + 0x91 ) != '\0') {
                           ShaderRD::_initialize_version((Version*)this_01);
                           lVar13 = *(long*)( this + 0x4a0 );
                           if (lVar13 != 0) {
                              lVar14 = 0;
                              do {
                                 if (*(long*)( lVar13 + -8 ) <= lVar14) break;
                                 if (*(char*)( lVar13 + lVar14 ) == '\0') {
                                    ShaderRD::_allocate_placeholders((Version*)this_01, iVar12);
                                 }
 else {
                                    ShaderRD::_compile_version_start((Version*)this_01, iVar12);
                                 }

                                 lVar13 = *(long*)( this + 0x4a0 );
                                 lVar14 = lVar14 + 1;
                              }
 while ( lVar13 != 0 );
                           }

                        }

                        puVar4 = *(uint**)( this + 0x460 );
                        if (puVar4 == (uint*)0x0) goto LAB_00101a48;
                        lVar13 = *(long*)( puVar4 + -2 );
                        if (0 < lVar13) {
                           uVar10 = ( ulong ) * puVar4;
                           lVar14 = *(long*)( lVar11 + 0x68 );
                           if (lVar14 == 0) goto LAB_00101bb8;
                           lVar13 = *(long*)( lVar14 + -8 );
                           if (lVar13 <= (long)uVar10) goto LAB_00101a62;
                           if (*(long*)( lVar14 + uVar10 * 8 ) == 0) {
                              cVar2 = *(char*)( lVar11 + 0x90 );
                           }
 else {
                              ShaderRD::_compile_version_end((Version*)this_01, iVar12);
                              cVar2 = *(char*)( lVar11 + 0x90 );
                           }

                           if (cVar2 == '\0') {
                              uVar8 = 0;
                              goto LAB_0010186e;
                           }

                           puVar5 = *(undefined8**)( lVar11 + 0x88 );
                           if (puVar5 == (undefined8*)0x0) goto LAB_00101a48;
                           lVar13 = puVar5[-1];
                           if (0 < lVar13) {
                              uVar8 = *puVar5;
                              goto LAB_0010186e;
                           }

                        }

                        goto LAB_00101a4b;
                     }

                     if (*(int*)( lVar11 + 0x98 ) + 0x80000000U < 0x7fffffff) {
                        _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, uVar8);
                     }

                  }

                  _err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xaa, "Parameter \"version\" is null.", 0, 0);
                  uVar8 = 0;
                  goto LAB_0010186e;
               }

               goto LAB_00101a4b;
            }

         }

         _err_print_index_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa6, 0, lVar13, "p_variant", "variant_defines.size()", "", false, false);
         uVar8 = 0;
         LAB_0010186e:PipelineCacheRD::setup((PipelineCacheRD*)( this + 0x5a8 ), uVar8, 5, (StrRange*)&local_118, (StrRange*)&local_e8, &local_b8, local_68, 0, local_128);
         lVar13 = local_d0;
         if (local_d0 != 0) {
            LOCK();
            plVar1 = (long*)( local_d0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_d0 = 0;
               Memory::free_static((void*)( lVar13 + -0x10 ), false);
            }

         }

         lVar13 = local_58;
         if (local_58 != 0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = 0;
               Memory::free_static((void*)( lVar13 + -0x10 ), false);
            }

         }

         lVar13 = local_120;
         if (local_120 != 0) {
            LOCK();
            plVar1 = (long*)( local_120 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_120 = 0;
               Memory::free_static((void*)( lVar13 + -0x10 ), false);
            }

         }

         CowData<String>::_unref((CowData<String>*)&local_130);
         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }

      lVar13 = *(long*)( *(long*)( this + 0x50 ) + -8 );
      if (lVar13 < 1) goto LAB_00101cbf;
      pcVar3 = *(char**)( this + 0x60 );
      if (pcVar3 == (char*)0x0) goto LAB_00101a48;
      lVar13 = *(long*)( pcVar3 + -8 );
      if (0 < lVar13) {
         if (*pcVar3 == '\0') {
            _err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa7, "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()", 0, 0);
            goto LAB_00101444;
         }

         if (( uVar10 == 0 ) || ( *(uint*)( this + 0x10c ) <= (uint)uVar10 )) {
            LAB_00101da0:_err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xaa, "Parameter \"version\" is null.", 0, 0);
            goto LAB_00101444;
         }

         lVar14 = ( ( uVar10 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x108 ) ) * 0xa0 + *(long*)( *(long*)( this + 0xf8 ) + ( ( uVar10 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x108 ) ) * 8 );
         if (*(int*)( lVar14 + 0x98 ) != (int)( uVar10 >> 0x20 )) {
            if (*(int*)( lVar14 + 0x98 ) + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, lVar11);
            }

            goto LAB_00101da0;
         }

         iVar12 = (int)lVar14;
         if (*(char*)( lVar14 + 0x91 ) != '\0') {
            ShaderRD::_initialize_version((Version*)this_00);
            lVar13 = *(long*)( this + 0xb0 );
            if (lVar13 != 0) {
               lVar11 = 0;
               do {
                  if (*(long*)( lVar13 + -8 ) <= lVar11) break;
                  if (*(char*)( lVar13 + lVar11 ) == '\0') {
                     ShaderRD::_allocate_placeholders((Version*)this_00, iVar12);
                  }
 else {
                     ShaderRD::_compile_version_start((Version*)this_00, iVar12);
                  }

                  lVar13 = *(long*)( this + 0xb0 );
                  lVar11 = lVar11 + 1;
               }
 while ( lVar13 != 0 );
            }

         }

         puVar4 = *(uint**)( this + 0x70 );
         if (puVar4 == (uint*)0x0) goto LAB_00101a48;
         lVar13 = *(long*)( puVar4 + -2 );
         if (lVar13 < 1) goto LAB_00101a4b;
         uVar10 = ( ulong ) * puVar4;
         lVar11 = *(long*)( lVar14 + 0x68 );
         if (lVar11 == 0) goto LAB_00101bb8;
         lVar13 = *(long*)( lVar11 + -8 );
         if (lVar13 <= (long)uVar10) goto LAB_00101a62;
         if (*(long*)( lVar11 + uVar10 * 8 ) != 0) {
            ShaderRD::_compile_version_end((Version*)this_00, iVar12);
         }

         if (*(char*)( lVar14 + 0x90 ) == '\0') goto LAB_00101444;
         puVar5 = *(undefined8**)( lVar14 + 0x88 );
         if (puVar5 == (undefined8*)0x0) goto LAB_00101a48;
         lVar13 = puVar5[-1];
         if (lVar13 < 1) goto LAB_00101a4b;
         uVar8 = *puVar5;
         goto LAB_00101446;
      }

   }
 else {
      lVar13 = *(long*)( *(long*)( this + 0x50 ) + -8 );
      if (lVar13 < 1) goto LAB_00101a88;
      pcVar3 = *(char**)( this + 0x60 );
      if (pcVar3 != (char*)0x0) {
         lVar13 = *(long*)( pcVar3 + -8 );
         if (lVar13 < 1) goto LAB_00101a4b;
         if (*pcVar3 == '\0') {
            _err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa7, "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()", 0, 0);
            uVar8 = 0;
            goto LAB_00101176;
         }

         if (( uVar10 == 0 ) || ( *(uint*)( this + 0x10c ) <= (uint)uVar10 )) {
            LAB_00101b00:_err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xaa, "Parameter \"version\" is null.", 0, 0);
            uVar8 = 0;
            goto LAB_00101176;
         }

         lVar11 = ( ( uVar10 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x108 ) ) * 0xa0 + *(long*)( *(long*)( this + 0xf8 ) + ( ( uVar10 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x108 ) ) * 8 );
         if (*(int*)( lVar11 + 0x98 ) != (int)( uVar10 >> 0x20 )) {
            if (*(int*)( lVar11 + 0x98 ) + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, uVar8);
            }

            goto LAB_00101b00;
         }

         iVar12 = (int)lVar11;
         if (*(char*)( lVar11 + 0x91 ) != '\0') {
            ShaderRD::_initialize_version((Version*)this_00);
            lVar13 = *(long*)( this + 0xb0 );
            if (lVar13 != 0) {
               lVar14 = 0;
               do {
                  if (*(long*)( lVar13 + -8 ) <= lVar14) break;
                  if (*(char*)( lVar13 + lVar14 ) == '\0') {
                     ShaderRD::_allocate_placeholders((Version*)this_00, iVar12);
                  }
 else {
                     ShaderRD::_compile_version_start((Version*)this_00, iVar12);
                  }

                  lVar13 = *(long*)( this + 0xb0 );
                  lVar14 = lVar14 + 1;
               }
 while ( lVar13 != 0 );
            }

         }

         puVar4 = *(uint**)( this + 0x70 );
         if (puVar4 == (uint*)0x0) goto LAB_00101a48;
         lVar13 = *(long*)( puVar4 + -2 );
         if (lVar13 < 1) goto LAB_00101a4b;
         uVar10 = ( ulong ) * puVar4;
         lVar14 = *(long*)( lVar11 + 0x68 );
         if (lVar14 != 0) {
            lVar13 = *(long*)( lVar14 + -8 );
            if (lVar13 <= (long)uVar10) goto LAB_00101a62;
            if (*(long*)( lVar14 + uVar10 * 8 ) == 0) {
               cVar2 = *(char*)( lVar11 + 0x90 );
            }
 else {
               ShaderRD::_compile_version_end((Version*)this_00, iVar12);
               cVar2 = *(char*)( lVar11 + 0x90 );
            }

            if (cVar2 != '\0') {
               puVar5 = *(undefined8**)( lVar11 + 0x88 );
               if (puVar5 == (undefined8*)0x0) goto LAB_00101a48;
               lVar13 = puVar5[-1];
               if (0 < lVar13) {
                  uVar8 = *puVar5;
                  goto LAB_00101176;
               }

               goto LAB_00101a4b;
            }

            goto LAB_00101abb;
         }

         LAB_00101bb8:lVar13 = 0;
         goto LAB_00101a62;
      }

      LAB_00101a48:lVar13 = 0;
   }

   LAB_00101a4b:uVar10 = 0;
   LAB_00101a62:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar10, lVar13, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar6 = (code*)invalidInstructionException();
   ( *pcVar6 )();
}
/* RendererRD::DebugEffects::draw_motion_vectors(RID, RID, RID, Projection const&, Transform3D
   const&, Projection const&, Transform3D const&, Vector2i) */void RendererRD::DebugEffects::draw_motion_vectors(DebugEffects *this, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, Transform3D *param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9) {
   long *plVar1;
   DebugEffects *pDVar2;
   Version *pVVar3;
   DebugEffects DVar4;
   uint *puVar5;
   undefined8 *puVar6;
   code *pcVar7;
   UniformSetCacheRD *pUVar8;
   int iVar9;
   uint uVar10;
   long lVar11;
   undefined8 uVar12;
   void *pvVar13;
   undefined8 uVar14;
   long *plVar15;
   ulong uVar16;
   char *pcVar17;
   long lVar18;
   long lVar19;
   long in_FS_OFFSET;
   bool bVar20;
   long local_358[2];
   ulong local_348;
   undefined1 local_340;
   undefined8 local_338;
   long local_328[2];
   undefined8 local_318;
   undefined1 local_310;
   undefined8 local_308;
   long local_2f8[2];
   ulong local_2e8;
   long local_2e0;
   undefined8 local_2d8;
   long local_2c8[2];
   Transform3D local_2b8[48];
   Projection local_288[64];
   undefined8 local_248;
   undefined8 uStack_240;
   undefined8 local_238;
   undefined8 uStack_230;
   undefined8 local_228;
   undefined8 uStack_220;
   undefined8 local_218;
   undefined8 uStack_210;
   Projection local_208[64];
   Projection local_1c8[64];
   Projection local_188[64];
   Projection local_148[64];
   Projection local_108[64];
   Projection local_c8[64];
   undefined8 local_88[9];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar11 = RendererRD::MaterialStorage::get_singleton();
   pUVar8 = UniformSetCacheRD::singleton;
   if (lVar11 == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar12 = 0x158;
         pcVar17 = "Parameter \"material_storage\" is null.";
         LAB_001029d4:_err_print_error("draw_motion_vectors", "servers/rendering/renderer_rd/effects/debug_effects.cpp", uVar12, pcVar17, 0, 0);
         return;
      }

      goto LAB_00102b0d;
   }

   if (UniformSetCacheRD::singleton == (UniformSetCacheRD*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar12 = 0x15b;
         pcVar17 = "Parameter \"uniform_set_cache\" is null.";
         goto LAB_001029d4;
      }

      goto LAB_00102b0d;
   }

   uVar12 = *(undefined8*)( lVar11 + 0x30 );
   local_2e0 = 0;
   local_88[0] = uVar12;
   local_88[1] = param_2;
   iVar9 = CowData<RID>::resize<false>((CowData<RID>*)&local_2e0, 2);
   lVar11 = local_2e0;
   if (iVar9 == 0) {
      lVar18 = 0;
      do {
         if (lVar11 == 0) {
            lVar19 = 0;
            LAB_00102809:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar18, lVar19, "p_index", "size()", "", false, false);
         }
 else {
            lVar19 = *(long*)( lVar11 + -8 );
            if (lVar19 <= lVar18) goto LAB_00102809;
            CowData<RID>::_copy_on_write((CowData<RID>*)&local_2e0);
            *(undefined8*)( local_2e0 + lVar18 * 8 ) = local_88[lVar18];
            lVar11 = local_2e0;
         }

         if (lVar18 != 0) break;
         lVar18 = 1;
      }
 while ( true );
   }

   plVar1 = (long*)( lVar11 + -0x10 );
   local_358[0] = 0;
   if (lVar11 != 0) {
      do {
         lVar11 = *plVar1;
         if (lVar11 == 0) goto LAB_00101fda;
         LOCK();
         lVar18 = *plVar1;
         bVar20 = lVar11 == lVar18;
         if (bVar20) {
            *plVar1 = lVar11 + 1;
            lVar18 = lVar11;
         }

         UNLOCK();
      }
 while ( !bVar20 );
      if (lVar18 != -1) {
         local_358[0] = local_2e0;
      }

      LAB_00101fda:if (local_2e0 != 0) {
         LOCK();
         plVar1 = (long*)( local_2e0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_2e0 + -0x10 ), false);
         }

      }

   }

   lVar18 = 0;
   local_2e0 = 0;
   local_88[0] = uVar12;
   local_88[1] = param_3;
   iVar9 = CowData<RID>::resize<false>((CowData<RID>*)&local_2e0, 2);
   lVar11 = local_2e0;
   if (iVar9 == 0) {
      do {
         if (lVar11 == 0) {
            lVar19 = 0;
            LAB_001027c7:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar18, lVar19, "p_index", "size()", "", false, false);
         }
 else {
            lVar19 = *(long*)( lVar11 + -8 );
            if (lVar19 <= lVar18) goto LAB_001027c7;
            CowData<RID>::_copy_on_write((CowData<RID>*)&local_2e0);
            *(undefined8*)( local_2e0 + lVar18 * 8 ) = *(undefined8*)( (Projection*)local_88 + lVar18 * 8 );
            lVar11 = local_2e0;
         }

         if (lVar18 != 0) break;
         lVar18 = 1;
      }
 while ( true );
   }

   plVar1 = (long*)( lVar11 + -0x10 );
   local_340 = 0;
   local_338 = 0;
   local_328[0] = 0;
   local_348 = _LC64;
   if (lVar11 != 0) {
      do {
         lVar11 = *plVar1;
         if (lVar11 == 0) goto LAB_001020a0;
         LOCK();
         lVar18 = *plVar1;
         bVar20 = lVar11 == lVar18;
         if (bVar20) {
            *plVar1 = lVar11 + 1;
            lVar18 = lVar11;
         }

         UNLOCK();
      }
 while ( !bVar20 );
      if (lVar18 != -1) {
         local_328[0] = local_2e0;
      }

      LAB_001020a0:if (local_2e0 != 0) {
         LOCK();
         plVar1 = (long*)( local_2e0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_2e0 + -0x10 ), false);
         }

      }

   }

   uVar12 = RenderingDevice::get_singleton();
   local_88[0] = 0;
   local_88[1] = 0;
   local_2e0 = 0;
   pvVar13 = (void*)RenderingDevice::draw_list_begin(_LC65, uVar12, param_4, 0, &local_2e8, 0, (Projection*)local_88, 0);
   lVar11 = local_2e0;
   if (local_2e0 != 0) {
      LOCK();
      plVar1 = (long*)( local_2e0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_2e0 = 0;
         Memory::free_static((void*)( lVar11 + -0x10 ), false);
      }

   }

   uVar12 = RenderingDevice::get_singleton();
   pDVar2 = this + 0x5a8;
   RenderingDevice::get_singleton();
   uVar10 = RenderingDevice::draw_list_get_current_pass();
   uVar14 = RenderingDevice::get_singleton();
   lVar11 = RenderingDevice::framebuffer_get_format(uVar14, param_4);
   if (*(long*)( this + 0x5e8 ) == 0) {
      _err_print_error("get_render_pipeline", "./servers/rendering/renderer_rd/pipeline_cache_rd.h", 0x49, "Condition \"shader.is_null()\" is true. Returning: RID()", "Attempted to use an unused shader variant (shader is null),", 0, 0);
      lVar11 = 0;
   }
 else {
      while (true) {
         uVar16 = local_2e8 >> 8;
         local_2e8 = uVar16 << 8;
         LOCK();
         DVar4 = *pDVar2;
         if (DVar4 == (DebugEffects)0x0) {
            *pDVar2 = (DebugEffects)0x1;
         }

         UNLOCK();
         if (DVar4 == (DebugEffects)0x0) break;
         local_2e8 = uVar16 << 8;
         do {} while ( *pDVar2 != (DebugEffects)0x0 );
      }
;
      if (*(uint*)( this + 0x6d8 ) != 0) {
         plVar15 = *(long**)( this + 0x6d0 );
         plVar1 = plVar15 + ( ulong ) * (uint*)( this + 0x6d8 ) * 5;
         do {
            if (( ( ( *plVar15 == -1 ) && ( lVar11 == plVar15[1] ) ) && ( this[0x5f6] == *(DebugEffects*)( (long)plVar15 + 0x14 ) ) ) && ( ( uVar10 == *(uint*)( plVar15 + 2 ) && ( (int)plVar15[3] == 0 ) ) )) {
               lVar11 = plVar15[4];
               this[0x5a8] = (DebugEffects)0x0;
               goto LAB_00102281;
            }

            plVar15 = plVar15 + 5;
         }
 while ( plVar1 != plVar15 );
      }

      lVar11 = PipelineCacheRD::_generate_version((long)pDVar2, -1, SUB81(lVar11, 0), (uint)(byte)this[0x5f6], uVar10);
      this[0x5a8] = (DebugEffects)0x0;
   }

   LAB_00102281:RenderingDevice::draw_list_bind_render_pipeline(uVar12, pvVar13, lVar11);
   Projection::Projection(local_288);
   Projection::set_depth_correction(SUB81(local_288, 0), true, true);
   Projection::operator *(local_c8, local_288);
   Projection::inverse();
   Projection::Projection(local_148, param_6);
   Transform3D::affine_inverse();
   Projection::Projection(local_1c8, local_2b8);
   Projection::operator *(local_208, local_288);
   Projection::operator *(local_188, local_208);
   Projection::operator *(local_108, local_188);
   Projection::operator *((Projection*)&local_248, local_108);
   Projection::~Projection(local_108);
   Projection::~Projection(local_188);
   Projection::~Projection(local_208);
   Projection::~Projection(local_1c8);
   Projection::~Projection(local_148);
   Projection::~Projection((Projection*)local_88);
   Projection::~Projection(local_c8);
   *(undefined8*)( this + 0x6e0 ) = local_248;
   *(undefined8*)( this + 0x6e8 ) = uStack_240;
   *(undefined8*)( this + 0x6f0 ) = local_238;
   *(undefined8*)( this + 0x6f8 ) = uStack_230;
   *(undefined8*)( this + 0x700 ) = local_228;
   *(undefined8*)( this + 0x708 ) = uStack_220;
   *(undefined8*)( this + 0x710 ) = local_218;
   *(undefined8*)( this + 0x718 ) = uStack_210;
   uVar16 = *(ulong*)( this + 0x5a0 );
   *(undefined4*)( this + 0x728 ) = 0;
   *(ulong*)( this + 0x720 ) = CONCAT44((float)(int)( (ulong)param_9 >> 0x20 ), (float)(int)param_9);
   if (*(long*)( this + 0x440 ) == 0) {
      lVar11 = 0;
      LAB_00102a68:_err_print_index_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa6, 0, lVar11, "p_variant", "variant_defines.size()", "", false, false);
      LAB_0010252d:uVar12 = 0;
   }
 else {
      lVar11 = *(long*)( *(long*)( this + 0x440 ) + -8 );
      if (lVar11 < 1) goto LAB_00102a68;
      pcVar17 = *(char**)( this + 0x450 );
      if (pcVar17 == (char*)0x0) {
         LAB_001028cd:lVar11 = 0;
         LAB_001028d0:uVar16 = 0;
         LAB_001028ed:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar16, lVar11, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar7 = (code*)invalidInstructionException();
         ( *pcVar7 )();
      }

      lVar11 = *(long*)( pcVar17 + -8 );
      if (lVar11 < 1) goto LAB_001028d0;
      if (*pcVar17 == '\0') {
         _err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa7, "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()", 0, 0);
         goto LAB_0010252d;
      }

      if (( uVar16 == 0 ) || ( *(uint*)( this + 0x4fc ) <= (uint)uVar16 )) {
         LAB_001028a3:_err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xaa, "Parameter \"version\" is null.", 0, 0);
         goto LAB_0010252d;
      }

      lVar18 = ( ( uVar16 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x4f8 ) ) * 0xa0 + *(long*)( *(long*)( this + 0x4e8 ) + ( ( uVar16 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x4f8 ) ) * 8 );
      if (*(int*)( lVar18 + 0x98 ) != (int)( uVar16 >> 0x20 )) {
         if (*(int*)( lVar18 + 0x98 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         goto LAB_001028a3;
      }

      pVVar3 = (Version*)( this + 0x428 );
      iVar9 = (int)lVar18;
      if (*(char*)( lVar18 + 0x91 ) != '\0') {
         ShaderRD::_initialize_version(pVVar3);
         lVar11 = *(long*)( this + 0x4a0 );
         if (lVar11 != 0) {
            lVar19 = 0;
            do {
               if (*(long*)( lVar11 + -8 ) <= lVar19) break;
               if (*(char*)( lVar11 + lVar19 ) == '\0') {
                  ShaderRD::_allocate_placeholders(pVVar3, iVar9);
               }
 else {
                  ShaderRD::_compile_version_start(pVVar3, iVar9);
               }

               lVar11 = *(long*)( this + 0x4a0 );
               lVar19 = lVar19 + 1;
            }
 while ( lVar11 != 0 );
         }

      }

      puVar5 = *(uint**)( this + 0x460 );
      if (puVar5 == (uint*)0x0) goto LAB_001028cd;
      lVar11 = *(long*)( puVar5 + -2 );
      if (lVar11 < 1) goto LAB_001028d0;
      uVar16 = ( ulong ) * puVar5;
      lVar19 = *(long*)( lVar18 + 0x68 );
      if (lVar19 == 0) {
         lVar11 = 0;
         goto LAB_001028ed;
      }

      lVar11 = *(long*)( lVar19 + -8 );
      if (lVar11 <= (long)uVar16) goto LAB_001028ed;
      if (*(long*)( lVar19 + uVar16 * 8 ) != 0) {
         ShaderRD::_compile_version_end(pVVar3, iVar9);
      }

      if (*(char*)( lVar18 + 0x90 ) == '\0') goto LAB_0010252d;
      puVar6 = *(undefined8**)( lVar18 + 0x88 );
      if (puVar6 == (undefined8*)0x0) goto LAB_001028cd;
      lVar11 = puVar6[-1];
      if (lVar11 < 1) goto LAB_001028d0;
      uVar12 = *puVar6;
   }

   uVar14 = RenderingDevice::get_singleton();
   local_2c8[0] = 0;
   local_2e8 = local_348;
   local_2e0 = CONCAT71(local_2e0._1_7_, local_340);
   local_2d8 = local_338;
   if (local_328[0] != 0) {
      CowData<RID>::_ref((CowData<RID>*)local_2c8, (CowData*)local_328);
   }

   local_2f8[0] = 0;
   local_318 = 1;
   local_310 = 0;
   local_308 = 0;
   if (local_358[0] == 0) {
      uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>(pUVar8, uVar12, 0, &local_318, &local_2e8);
      RenderingDevice::draw_list_bind_uniform_set(uVar14, pvVar13, uVar12, 0);
   }
 else {
      CowData<RID>::_ref((CowData<RID>*)local_2f8, (CowData*)local_358);
      lVar11 = local_2f8[0];
      uVar12 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>(pUVar8, uVar12, 0, &local_318, &local_2e8);
      RenderingDevice::draw_list_bind_uniform_set(uVar14, pvVar13, uVar12, 0);
      if (lVar11 != 0) {
         LOCK();
         plVar1 = (long*)( lVar11 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_2f8[0] + -0x10 ), false);
         }

      }

   }

   if (local_2c8[0] != 0) {
      LOCK();
      plVar1 = (long*)( local_2c8[0] + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_2c8[0] + -0x10 ), false);
      }

   }

   lVar11 = RenderingDevice::get_singleton();
   RenderingDevice::draw_list_set_push_constant(lVar11, pvVar13, (int)this + 0x6e0);
   lVar11 = RenderingDevice::get_singleton();
   RenderingDevice::draw_list_draw(lVar11, SUB81(pvVar13, 0), 0, 1);
   RenderingDevice::get_singleton();
   RenderingDevice::draw_list_end();
   Projection::~Projection((Projection*)&local_248);
   Projection::~Projection(local_288);
   if (local_328[0] != 0) {
      LOCK();
      plVar1 = (long*)( local_328[0] + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_328[0] + -0x10 ), false);
      }

   }

   if (local_358[0] != 0) {
      LOCK();
      plVar1 = (long*)( local_358[0] + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_358[0] + -0x10 ), false);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00102b0d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::DebugEffects::_create_frustum_arrays() */void RendererRD::DebugEffects::_create_frustum_arrays(DebugEffects *this) {
   long *plVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   int iVar4;
   uint uVar5;
   Vector *pVVar6;
   undefined8 uVar7;
   long lVar8;
   long lVar9;
   long in_FS_OFFSET;
   long local_a0;
   Vector local_98[8];
   long local_90;
   undefined1 local_88[8];
   undefined8 *local_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 8 ) == 0) {
      uVar7 = RenderingDevice::get_singleton();
      local_80 = (undefined8*)0x0;
      uVar7 = RenderingDevice::vertex_buffer_create(uVar7, 0x60, local_88, 0);
      puVar2 = local_80;
      *(undefined8*)( this + 8 ) = uVar7;
      if (local_80 != (undefined8*)0x0) {
         LOCK();
         plVar1 = (long*)( (long)local_80 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_80 = (undefined8*)0x0;
            Memory::free_static((void*)( (long)puVar2 + -0x10 ), false);
         }

      }

      local_a0 = 0;
      local_90 = 0;
      iVar4 = CowData<RenderingDeviceCommons::VertexAttribute>::resize<false>((CowData<RenderingDeviceCommons::VertexAttribute>*)&local_a0, 1);
      if (iVar4 == 0) {
         if (local_a0 == 0) {
            lVar9 = -1;
            lVar8 = 0;
         }
 else {
            lVar8 = *(long*)( local_a0 + -8 );
            lVar9 = lVar8 + -1;
            if (-1 < lVar9) {
               CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write((CowData<RenderingDeviceCommons::VertexAttribute>*)&local_a0);
               uVar3 = _UNK_001081a8;
               uVar7 = __LC71;
               puVar2 = (undefined8*)( local_a0 + lVar9 * 0x14 );
               *(undefined4*)( puVar2 + 2 ) = 0;
               *puVar2 = uVar7;
               puVar2[1] = uVar3;
               goto LAB_00102c3a;
            }

         }

         _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar9, lVar8, "p_index", "size()", "", false, false);
      }
 else {
         _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      }

      LAB_00102c3a:uVar7 = *(undefined8*)( this + 8 );
      if (local_90 == 0) {
         lVar8 = 1;
      }
 else {
         lVar8 = *(long*)( local_90 + -8 ) + 1;
      }

      iVar4 = CowData<RID>::resize<false>((CowData<RID>*)&local_90, lVar8);
      if (iVar4 == 0) {
         if (local_90 == 0) {
            lVar9 = -1;
            lVar8 = 0;
         }
 else {
            lVar8 = *(long*)( local_90 + -8 );
            lVar9 = lVar8 + -1;
            if (-1 < lVar9) {
               CowData<RID>::_copy_on_write((CowData<RID>*)&local_90);
               *(undefined8*)( local_90 + lVar9 * 8 ) = uVar7;
               goto LAB_00102c99;
            }

         }

         _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar9, lVar8, "p_index", "size()", "", false, false);
      }
 else {
         _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      }

      LAB_00102c99:pVVar6 = (Vector*)RenderingDevice::get_singleton();
      uVar7 = RenderingDevice::vertex_format_create(pVVar6);
      *(undefined8*)this = uVar7;
      uVar5 = RenderingDevice::get_singleton();
      local_80 = (undefined8*)0x0;
      uVar7 = RenderingDevice::vertex_array_create(uVar5, 8, *(Vector**)this, local_98);
      puVar2 = local_80;
      *(undefined8*)( this + 0x10 ) = uVar7;
      if (local_80 != (undefined8*)0x0) {
         LOCK();
         plVar1 = local_80 + -2;
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_80 = (undefined8*)0x0;
            Memory::free_static(puVar2 + -2, false);
         }

      }

      lVar8 = local_90;
      if (local_90 != 0) {
         LOCK();
         plVar1 = (long*)( local_90 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      lVar8 = local_a0;
      if (local_a0 == 0) goto LAB_00102b4a;
      LOCK();
      plVar1 = (long*)( local_a0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00102b4a;
      local_a0 = 0;
      Memory::free_static((void*)( lVar8 + -0x10 ), false);
      lVar8 = *(long*)( this + 0x18 );
   }
 else {
      LAB_00102b4a:lVar8 = *(long*)( this + 0x18 );
   }

   if (lVar8 == 0) {
      local_80 = (undefined8*)0x0;
      local_78 = __LC72;
      uStack_70 = _UNK_001081b8;
      local_68 = __LC73;
      uStack_60 = _UNK_001081c8;
      local_58 = __LC74;
      uStack_50 = _UNK_001081d8;
      local_48 = __LC75;
      uStack_40 = _UNK_001081e8;
      local_38 = _LC76;
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_80, 0x48);
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_80);
      local_80[8] = local_38;
      *local_80 = local_78;
      local_80[1] = uStack_70;
      local_80[2] = local_68;
      local_80[3] = uStack_60;
      local_80[4] = local_58;
      local_80[5] = uStack_50;
      local_80[6] = local_48;
      local_80[7] = uStack_40;
      uVar7 = RenderingDevice::get_singleton();
      uVar7 = RenderingDevice::index_buffer_create(uVar7, 0x24, 0, local_88, 0, 0);
      *(undefined8*)( this + 0x18 ) = uVar7;
      uVar7 = RenderingDevice::get_singleton();
      uVar7 = RenderingDevice::index_array_create(uVar7, *(undefined8*)( this + 0x18 ), 0, 0x24);
      puVar2 = local_80;
      *(undefined8*)( this + 0x20 ) = uVar7;
      if (local_80 != (undefined8*)0x0) {
         LOCK();
         plVar1 = local_80 + -2;
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_80 = (undefined8*)0x0;
            Memory::free_static(puVar2 + -2, false);
            lVar8 = *(long*)( this + 0x28 );
            goto joined_r0x00102b5a;
         }

      }

   }

   lVar8 = *(long*)( this + 0x28 );
   joined_r0x00102b5a:if (lVar8 == 0) {
      local_80 = (undefined8*)0x0;
      local_78 = __LC77;
      uStack_70 = _UNK_001081f8;
      local_68 = __LC78;
      uStack_60 = _UNK_00108208;
      local_58 = __LC79;
      uStack_50 = _UNK_00108218;
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_80, 0x30);
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_80);
      *local_80 = local_78;
      local_80[1] = uStack_70;
      local_80[2] = local_68;
      local_80[3] = uStack_60;
      local_80[4] = local_58;
      local_80[5] = uStack_50;
      uVar7 = RenderingDevice::get_singleton();
      uVar7 = RenderingDevice::index_buffer_create(uVar7, 0x18, 0, local_88, 0, 0);
      *(undefined8*)( this + 0x28 ) = uVar7;
      uVar7 = RenderingDevice::get_singleton();
      uVar7 = RenderingDevice::index_array_create(uVar7, *(undefined8*)( this + 0x28 ), 0, 0x18);
      puVar2 = local_80;
      *(undefined8*)( this + 0x30 ) = uVar7;
      if (local_80 != (undefined8*)0x0) {
         LOCK();
         plVar1 = local_80 + -2;
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_80 = (undefined8*)0x0;
            Memory::free_static(puVar2 + -2, false);
         }

      }

   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::DebugEffects::draw_shadow_frustum(RID, Projection const&, Transform3D const&, RID,
   Rect2) */void RendererRD::DebugEffects::draw_shadow_frustum(undefined8 param_1, undefined8 param_2, DebugEffects *param_3, ulong param_4, undefined8 param_5, Vector3 *param_6, undefined8 param_7, undefined8 param_8) {
   long *plVar1;
   DebugEffects *pDVar2;
   DebugEffects *pDVar3;
   DebugEffects DVar4;
   float fVar5;
   int iVar6;
   int iVar7;
   float fVar8;
   ulong uVar9;
   code *pcVar10;
   undefined8 uVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   byte bVar16;
   char cVar17;
   char cVar18;
   int iVar19;
   long *plVar20;
   long lVar21;
   undefined8 uVar22;
   void *pvVar23;
   long *plVar24;
   int iVar25;
   long lVar26;
   bool bVar27;
   uint uVar28;
   long lVar29;
   int *piVar30;
   long lVar31;
   uint uVar32;
   long lVar33;
   undefined4 *puVar34;
   undefined8 *puVar35;
   Projection *pPVar36;
   long in_FS_OFFSET;
   byte bVar37;
   float fVar38;
   float fVar39;
   undefined8 uVar40;
   float extraout_XMM0_Db;
   undefined8 extraout_XMM0_Qb;
   undefined1 auVar41[16];
   undefined1 auVar42[16];
   undefined8 extraout_XMM0_Qb_00;
   float fVar43;
   undefined1 auVar44[16];
   undefined8 *local_338;
   int local_2f8;
   float local_294;
   float local_290;
   long local_280;
   undefined1 local_278[8];
   long local_270;
   undefined8 local_268;
   undefined8 uStack_260;
   float local_258[8];
   undefined8 local_238;
   undefined8 uStack_230;
   undefined8 local_228;
   undefined8 uStack_220;
   undefined8 local_218;
   undefined8 uStack_210;
   Transform3D local_208[48];
   undefined8 local_1d8;
   undefined8 uStack_1d0;
   undefined8 local_1c8;
   undefined8 uStack_1c0;
   undefined8 local_1b8;
   undefined8 uStack_1b0;
   undefined8 local_1a8;
   undefined8 uStack_1a0;
   Projection local_198[64];
   undefined8 local_158;
   undefined8 uStack_150;
   undefined8 local_148;
   undefined8 uStack_140;
   undefined8 local_138;
   undefined8 uStack_130;
   undefined8 local_128;
   undefined8 uStack_120;
   Projection local_118[64];
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
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   bVar37 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar20 = (long*)RendererRD::LightStorage::get_singleton();
   if (( param_4 == 0 ) || ( uVar32 = (uint)param_4 * (uint*)( (long)plVar20 + 0x84 ) <= uVar32 )) {
      LAB_00104966:/* WARNING: Does not return */pcVar10 = (code*)invalidInstructionException();
      ( *pcVar10 )();
   }

   lVar29 = ( ( param_4 & 0xffffffff ) % ( ulong ) * (uint*)( plVar20 + 0x10 ) ) * 0x498 + *(long*)( plVar20[0xe] + ( ( param_4 & 0xffffffff ) / ( ulong ) * (uint*)( plVar20 + 0x10 ) ) * 8 );
   iVar6 = *(int*)( lVar29 + 0x490 );
   if (iVar6 != (int)( param_4 >> 0x20 )) {
      if (iVar6 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, param_8);
      }

      goto LAB_00104966;
   }

   uVar9 = *(ulong*)( lVar29 + 0x3d0 );
   uVar28 = (uint)uVar9;
   iVar25 = (int)( uVar9 >> 0x20 );
   if (*(code**)( *plVar20 + 0xf8 ) == LightStorage::light_get_type) {
      if (( uVar9 != 0 ) && ( uVar28 < *(uint*)( (long)plVar20 + 0x2c ) )) {
         piVar30 = (int*)( ( ( uVar9 & 0xffffffff ) % ( ulong ) * (uint*)( plVar20 + 5 ) ) * 0xe8 + *(long*)( plVar20[3] + ( ( uVar9 & 0xffffffff ) / ( ulong ) * (uint*)( plVar20 + 5 ) ) * 8 ) );
         iVar19 = piVar30[0x38];
         if (iVar25 == iVar19) {
            iVar19 = *piVar30;
            goto joined_r0x001041c6;
         }

         if (iVar19 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

      _err_print_error("light_get_type", "./servers/rendering/renderer_rd/storage_rd/light_storage.h", 0x1ff, "Parameter \"light\" is null.", 0, 0);
   }
 else {
      iVar19 = ( **(code**)( *plVar20 + 0xf8 ) )(plVar20, uVar9);
      joined_r0x001041c6:if (iVar19 != 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _err_print_error("draw_shadow_frustum", "servers/rendering/renderer_rd/effects/debug_effects.cpp", 0xb8, "Condition \"light_storage->light_get_type(base) != RenderingServer::LIGHT_DIRECTIONAL\" is true.", 0, 0);
            return;
         }

         goto LAB_0010438e;
      }

   }

   _create_frustum_arrays(param_3);
   local_280 = 0;
   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_280, 0x60);
   iVar19 = ( **(code**)( *plVar20 + 0xd8 ) )(plVar20, uVar9);
   bVar16 = ( **(code**)( *plVar20 + 0xc0 ) )(plVar20, uVar9);
   local_2f8 = 4;
   if (iVar19 != 2) {
      local_2f8 = ( iVar19 == 1 ) + 1;
   }

   cVar17 = Projection::is_orthogonal();
   fVar38 = (float)Projection::get_aspect();
   if (cVar17 == '\0') {
      local_290 = (float)Projection::get_fov();
      local_294 = 0.0;
   }
 else {
      Projection::get_viewport_half_extents();
      local_290 = 0.0;
      local_294 = extraout_XMM0_Db;
   }

   fVar39 = (float)Projection::get_z_near();
   uVar40 = Projection::get_z_far();
   auVar44._8_4_ = (int)extraout_XMM0_Qb;
   auVar44._0_8_ = uVar40;
   auVar44._12_4_ = (int)( (ulong)extraout_XMM0_Qb >> 0x20 );
   if (*(code**)( *RenderingServerGlobals::light_storage + 0x108 ) == LightStorage::light_get_param) {
      if (( uVar9 != 0 ) && ( uVar28 < *(uint*)( (long)RenderingServerGlobals::light_storage + 0x2c ) )) {
         lVar29 = ( ( uVar9 & 0xffffffff ) % ( ulong ) * (uint*)( RenderingServerGlobals::light_storage + 5 ) ) * 0xe8 + *(long*)( RenderingServerGlobals::light_storage[3] + ( ( uVar9 & 0xffffffff ) / ( ulong ) * (uint*)( RenderingServerGlobals::light_storage + 5 ) ) * 8 );
         iVar19 = *(int*)( lVar29 + 0xe0 );
         if (iVar25 == iVar19) {
            auVar41 = ZEXT416(*(uint*)( lVar29 + 0x28 ));
            goto LAB_00103300;
         }

         if (iVar19 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

      _err_print_error("light_get_param", "./servers/rendering/renderer_rd/storage_rd/light_storage.h", 0x207, "Parameter \"light\" is null.", 0, 0);
      auVar42 = ZEXT416((uint)uVar40);
   }
 else {
      auVar41._0_8_ = ( **(code**)( *RenderingServerGlobals::light_storage + 0x108 ) )(RenderingServerGlobals::light_storage, uVar9, 9);
      auVar41._8_8_ = extraout_XMM0_Qb_00;
      auVar44 = ZEXT416((uint)uVar40);
      LAB_00103300:auVar42 = auVar44;
      if (( ( 0.0 < auVar41._0_4_ ) && ( cVar17 == '\0' ) ) && ( auVar42 = auVar44._0_4_ <= auVar41._0_4_ )) {
         auVar42._4_12_ = auVar41._4_12_;
         auVar42._0_4_ = auVar44._0_4_;
      }

   }

   if ((double)auVar42._0_4_ <= (double)fVar39 + __LC82) {
      auVar42._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar42._0_4_ = (float)( (double)fVar39 + __LC82 );
   }

   fVar43 = auVar42._0_4_;
   fVar5 = fVar43;
   if (fVar39 < fVar43) {
      auVar42 = ZEXT416((uint)fVar39);
      fVar5 = fVar39;
   }

   lVar29 = (long)local_2f8;
   lVar33 = 0;
   local_258[0] = auVar42._0_4_;
   do {
      iVar19 = (int)lVar33 + 10;
      if (*(code**)( *RenderingServerGlobals::light_storage + 0x108 ) == LightStorage::light_get_param) {
         if (( uVar9 != 0 ) && ( uVar28 < *(uint*)( (long)RenderingServerGlobals::light_storage + 0x2c ) )) {
            lVar31 = ( ( uVar9 & 0xffffffff ) % ( ulong ) * (uint*)( RenderingServerGlobals::light_storage + 5 ) ) * 0xe8 + *(long*)( RenderingServerGlobals::light_storage[3] + ( ( uVar9 & 0xffffffff ) / ( ulong ) * (uint*)( RenderingServerGlobals::light_storage + 5 ) ) * 8 );
            iVar7 = *(int*)( lVar31 + 0xe0 );
            if (iVar25 == iVar7) {
               fVar39 = *(float*)( lVar31 + 4 + (long)iVar19 * 4 );
               goto LAB_001033fe;
            }

            if (iVar7 + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

         }

         _err_print_error("light_get_param", "./servers/rendering/renderer_rd/storage_rd/light_storage.h", 0x207, "Parameter \"light\" is null.", 0);
         auVar42 = ZEXT416(auVar42._0_4_);
         fVar39 = 0.0;
      }
 else {
         fVar39 = (float)( **(code**)( *RenderingServerGlobals::light_storage + 0x108 ) )(RenderingServerGlobals::light_storage, uVar9, iVar19);
         auVar42 = ZEXT416(auVar42._0_4_);
      }

      LAB_001033fe:local_258[lVar33 + 1] = fVar39 * ( fVar43 - fVar5 ) + auVar42._0_4_;
      lVar33 = lVar33 + 1;
   }
 while ( lVar33 != lVar29 );
   lVar33 = 0;
   local_1d8 = __LC83;
   uStack_1d0 = _UNK_00108228;
   local_258[lVar29] = fVar43;
   local_338 = &local_1d8;
   local_1c8 = __LC84;
   uStack_1c0 = _UNK_00108238;
   local_1b8 = __LC85;
   uStack_1b0 = _UNK_00108248;
   local_1a8 = __LC86;
   uStack_1a0 = _UNK_00108258;
   do {
      iVar19 = (int)lVar33;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_280);
      lVar31 = local_280;
      Projection::Projection(local_198);
      iVar25 = iVar19 + -1;
      if (( iVar19 != 0 & bVar16 ) == 0) {
         iVar25 = iVar19;
      }

      bVar27 = SUB81(local_198, 0);
      if (cVar17 == '\0') {
         Projection::set_perspective(local_290, fVar38, local_258[iVar25], local_258[lVar33 + 1], bVar27);
      }
 else {
         Projection::set_orthogonal(local_294 + local_294, fVar38, local_258[iVar25], local_258[lVar33 + 1], bVar27);
      }

      cVar18 = Projection::get_endpoints((Transform3D*)local_198, param_6);
      if (cVar18 == '\0') {
         _err_print_error("draw_shadow_frustum", "servers/rendering/renderer_rd/effects/debug_effects.cpp", 0xfd, "Condition \"!res\" is true. Continuing.", 0, 0);
         Projection::~Projection(local_198);
      }
 else {
         uVar40 = RenderingDevice::get_singleton();
         RenderingDevice::buffer_update(uVar40, *(undefined8*)( param_3 + 8 ), 0, 0x60);
         if (*(uint*)( (long)plVar20 + 0x84 ) <= uVar32) {
            LAB_0010484e:puVar34 = (undefined4*)( (long)iVar19 * 0x9c + 4 );
            puVar35 = &local_158;
            for (lVar29 = 0x10; lVar29 != 0; lVar29 = lVar29 + -1) {
               *(undefined4*)puVar35 = *puVar34;
               puVar34 = puVar34 + (ulong)bVar37 * -2 + 1;
               puVar35 = (undefined8*)( (long)puVar35 + (ulong)bVar37 * -8 + 4 );
            }

            /* WARNING: Does not return */
            pcVar10 = (code*)invalidInstructionException();
            ( *pcVar10 )();
         }

         lVar21 = ( ( param_4 & 0xffffffff ) % ( ulong ) * (uint*)( plVar20 + 0x10 ) ) * 0x498 + *(long*)( plVar20[0xe] + ( ( param_4 & 0xffffffff ) / ( ulong ) * (uint*)( plVar20 + 0x10 ) ) * 8 );
         iVar25 = *(int*)( lVar21 + 0x490 );
         if (iVar6 != iVar25) {
            if (iVar25 + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, lVar31);
            }

            goto LAB_0010484e;
         }

         lVar21 = lVar21 + (long)iVar19 * 0x9c;
         local_158 = *(undefined8*)( lVar21 + 4 );
         uStack_150 = *(undefined8*)( lVar21 + 0xc );
         local_148 = *(undefined8*)( lVar21 + 0x14 );
         uStack_140 = *(undefined8*)( lVar21 + 0x1c );
         local_128 = *(undefined8*)( lVar21 + 0x34 );
         uStack_120 = *(undefined8*)( lVar21 + 0x3c );
         local_218 = *(undefined8*)( lVar21 + 100 );
         uStack_210 = *(undefined8*)( lVar21 + 0x6c );
         local_138 = *(undefined8*)( lVar21 + 0x24 );
         uStack_130 = *(undefined8*)( lVar21 + 0x2c );
         fVar43 = *(float*)( lVar21 + 0x88 );
         local_238 = *(undefined8*)( lVar21 + 0x44 );
         uStack_230 = *(undefined8*)( lVar21 + 0x4c );
         fVar8 = *(float*)( lVar21 + 0x8c );
         local_228 = *(undefined8*)( lVar21 + 0x54 );
         uStack_220 = *(undefined8*)( lVar21 + 0x5c );
         fVar39 = *(float*)( lVar21 + 0x90 );
         fVar5 = *(float*)( lVar21 + 0x94 );
         if (cVar17 == '\0') {
            Transform3D::orthogonalize();
         }

         Transform3D::inverse();
         Projection::Projection(local_118, local_208);
         Projection::operator *((Projection*)&local_d8, (Projection*)&local_158);
         local_98 = local_d8;
         uStack_90 = uStack_d0;
         local_88 = local_c8;
         uStack_80 = uStack_c0;
         local_78 = local_b8;
         uStack_70 = uStack_b0;
         local_68 = local_a8;
         uStack_60 = uStack_a0;
         Projection::~Projection((Projection*)&local_d8);
         Projection::~Projection(local_118);
         uVar40 = *local_338;
         uVar11 = local_338[1];
         uStack_260._0_4_ = (float)param_2;
         fVar14 = (float)uStack_260;
         uStack_260._4_4_ = (float)( (ulong)param_2 >> 0x20 );
         fVar15 = uStack_260._4_4_;
         local_268._0_4_ = (float)param_1;
         fVar12 = (float)local_268;
         local_268._4_4_ = (float)( (ulong)param_1 >> 0x20 );
         fVar13 = local_268._4_4_;
         local_268 = CONCAT44(fVar8 * uStack_260._4_4_ + local_268._4_4_, fVar43 * (float)uStack_260 + (float)local_268);
         uStack_260 = CONCAT44(uStack_260._4_4_ * fVar5, (float)uStack_260 * fVar39);
         local_58 = uVar40;
         uStack_50 = uVar11;
         uVar22 = RenderingDevice::get_singleton();
         lVar21 = RenderingDevice::framebuffer_get_format(uVar22, param_7);
         uVar22 = RenderingDevice::get_singleton();
         local_270 = 0;
         pvVar23 = (void*)RenderingDevice::draw_list_begin(uVar22, param_7, 0, local_278, 0, &local_268, 0);
         lVar31 = local_270;
         if (local_270 != 0) {
            LOCK();
            plVar1 = (long*)( local_270 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_270 = 0;
               Memory::free_static((void*)( lVar31 + -0x10 ), false);
            }

         }

         pDVar2 = param_3 + 0x1b8;
         bVar27 = SUB81(lVar21, 0);
         if (*(long*)( param_3 + 0x1f8 ) == 0) {
            _err_print_error("get_render_pipeline", "./servers/rendering/renderer_rd/pipeline_cache_rd.h", 0x49, "Condition \"shader.is_null()\" is true. Returning: RID()", "Attempted to use an unused shader variant (shader is null),", 0, 0);
            lVar31 = 0;
         }
 else {
            while (true) {
               local_278[0] = 0;
               LOCK();
               DVar4 = *pDVar2;
               if (DVar4 == (DebugEffects)0x0) {
                  *pDVar2 = (DebugEffects)0x1;
               }

               UNLOCK();
               if (DVar4 == (DebugEffects)0x0) break;
               do {} while ( *pDVar2 != (DebugEffects)0x0 );
            }
;
            if (*(uint*)( param_3 + 0x2e8 ) != 0) {
               plVar24 = *(long**)( param_3 + 0x2e0 );
               plVar1 = plVar24 + ( ulong ) * (uint*)( param_3 + 0x2e8 ) * 5;
               do {
                  if (( ( *(long*)param_3 == *plVar24 ) && ( lVar21 == plVar24[1] ) ) && ( ( param_3[0x206] == *(DebugEffects*)( (long)plVar24 + 0x14 ) && ( ( (int)plVar24[2] == 0 && ( (int)plVar24[3] == 0 ) ) ) ) )) {
                     lVar31 = plVar24[4];
                     param_3[0x1b8] = (DebugEffects)0x0;
                     goto LAB_0010392c;
                  }

                  plVar24 = plVar24 + 5;
               }
 while ( plVar24 != plVar1 );
            }

            lVar31 = PipelineCacheRD::_generate_version((long)pDVar2, *(long*)param_3, bVar27, (uint)(byte)param_3[0x206], 0);
            param_3[0x1b8] = (DebugEffects)0x0;
         }

         LAB_0010392c:uVar22 = RenderingDevice::get_singleton();
         RenderingDevice::draw_list_bind_render_pipeline(uVar22, pvVar23, lVar31);
         uVar22 = RenderingDevice::get_singleton();
         RenderingDevice::draw_list_bind_vertex_array(uVar22, pvVar23, *(undefined8*)( param_3 + 0x10 ));
         uVar22 = RenderingDevice::get_singleton();
         RenderingDevice::draw_list_bind_index_array(uVar22, pvVar23, *(undefined8*)( param_3 + 0x20 ));
         lVar31 = RenderingDevice::get_singleton();
         uVar28 = ( uint ) & local_98;
         RenderingDevice::draw_list_set_push_constant(lVar31, pvVar23, uVar28);
         lVar31 = RenderingDevice::get_singleton();
         RenderingDevice::draw_list_draw(lVar31, SUB81(pvVar23, 0), 1, 1);
         pDVar3 = param_3 + 0x2f0;
         if (*(long*)( param_3 + 0x330 ) == 0) {
            _err_print_error("get_render_pipeline", "./servers/rendering/renderer_rd/pipeline_cache_rd.h", 0x49, "Condition \"shader.is_null()\" is true. Returning: RID()", "Attempted to use an unused shader variant (shader is null),", 0, 0);
            lVar31 = 0;
         }
 else {
            while (true) {
               local_278[0] = 0;
               LOCK();
               DVar4 = *pDVar3;
               if (DVar4 == (DebugEffects)0x0) {
                  *pDVar3 = (DebugEffects)0x1;
               }

               UNLOCK();
               if (DVar4 == (DebugEffects)0x0) break;
               do {} while ( *pDVar3 != (DebugEffects)0x0 );
            }
;
            if (*(uint*)( param_3 + 0x420 ) != 0) {
               plVar24 = *(long**)( param_3 + 0x418 );
               plVar1 = plVar24 + ( ulong ) * (uint*)( param_3 + 0x420 ) * 5;
               do {
                  if (( ( ( *(long*)param_3 == *plVar24 ) && ( lVar21 == plVar24[1] ) ) && ( param_3[0x33e] == *(DebugEffects*)( (long)plVar24 + 0x14 ) ) ) && ( ( (int)plVar24[2] == 0 && ( (int)plVar24[3] == 0 ) ) )) {
                     lVar31 = plVar24[4];
                     param_3[0x2f0] = (DebugEffects)0x0;
                     goto LAB_00103a79;
                  }

                  plVar24 = plVar24 + 5;
               }
 while ( plVar1 != plVar24 );
            }

            lVar31 = PipelineCacheRD::_generate_version((long)pDVar3, *(long*)param_3, bVar27, (uint)(byte)param_3[0x33e], 0);
            param_3[0x2f0] = (DebugEffects)0x0;
         }

         LAB_00103a79:uVar22 = RenderingDevice::get_singleton();
         RenderingDevice::draw_list_bind_render_pipeline(uVar22, pvVar23, lVar31);
         uVar22 = RenderingDevice::get_singleton();
         RenderingDevice::draw_list_bind_vertex_array(uVar22, pvVar23, *(undefined8*)( param_3 + 0x10 ));
         uVar22 = RenderingDevice::get_singleton();
         RenderingDevice::draw_list_bind_index_array(uVar22, pvVar23, *(undefined8*)( param_3 + 0x30 ));
         lVar31 = RenderingDevice::get_singleton();
         RenderingDevice::draw_list_set_push_constant(lVar31, pvVar23, uVar28);
         lVar31 = RenderingDevice::get_singleton();
         uVar22 = 0;
         RenderingDevice::draw_list_draw(lVar31, SUB81(pvVar23, 0), 1, 1);
         RenderingDevice::get_singleton();
         RenderingDevice::draw_list_end();
         iVar25 = local_2f8 + -1;
         if (iVar19 < iVar25) {
            if (*(uint*)( (long)plVar20 + 0x84 ) <= uVar32) {
               LAB_00104904:puVar34 = (undefined4*)( (long)iVar25 * 0x9c + 4 );
               pPVar36 = (Projection*)&local_d8;
               for (lVar29 = 0x10; lVar29 != 0; lVar29 = lVar29 + -1) {
                  *(undefined4*)pPVar36 = *puVar34;
                  puVar34 = puVar34 + (ulong)bVar37 * -2 + 1;
                  pPVar36 = pPVar36 + (ulong)bVar37 * -8 + 4;
               }

               /* WARNING: Does not return */
               pcVar10 = (code*)invalidInstructionException();
               ( *pcVar10 )();
            }

            lVar31 = ( ( param_4 & 0xffffffff ) % ( ulong ) * (uint*)( plVar20 + 0x10 ) ) * 0x498 + *(long*)( plVar20[0xe] + ( ( param_4 & 0xffffffff ) / ( ulong ) * (uint*)( plVar20 + 0x10 ) ) * 8 );
            iVar19 = *(int*)( lVar31 + 0x490 );
            if (iVar6 != iVar19) {
               if (iVar19 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, uVar22);
               }

               goto LAB_00104904;
            }

            lVar26 = (long)iVar25 * 0x9c;
            lVar31 = lVar31 + lVar26;
            local_158 = *(undefined8*)( lVar31 + 4 );
            uStack_150 = *(undefined8*)( lVar31 + 0xc );
            local_148 = *(undefined8*)( lVar31 + 0x14 );
            uStack_140 = *(undefined8*)( lVar31 + 0x1c );
            local_138 = *(undefined8*)( lVar31 + 0x24 );
            uStack_130 = *(undefined8*)( lVar31 + 0x2c );
            local_128 = *(undefined8*)( lVar31 + 0x34 );
            uStack_120 = *(undefined8*)( lVar31 + 0x3c );
            local_d8 = local_158;
            uStack_d0 = uStack_150;
            local_c8 = local_148;
            uStack_c0 = uStack_140;
            local_b8 = local_138;
            uStack_b0 = uStack_130;
            local_a8 = local_128;
            uStack_a0 = uStack_120;
            Projection::~Projection((Projection*)&local_d8);
            if (*(uint*)( (long)plVar20 + 0x84 ) <= uVar32) {
               LAB_001048ad:puVar34 = (undefined4*)( (long)iVar25 * 0x9c + 0x44 );
               pPVar36 = (Projection*)&local_d8;
               for (lVar29 = 0xc; lVar29 != 0; lVar29 = lVar29 + -1) {
                  *(undefined4*)pPVar36 = *puVar34;
                  puVar34 = puVar34 + (ulong)bVar37 * -2 + 1;
                  pPVar36 = pPVar36 + (ulong)bVar37 * -8 + 4;
               }

               /* WARNING: Does not return */
               pcVar10 = (code*)invalidInstructionException();
               ( *pcVar10 )();
            }

            lVar31 = ( ( param_4 & 0xffffffff ) % ( ulong ) * (uint*)( plVar20 + 0x10 ) ) * 0x498 + *(long*)( plVar20[0xe] + ( ( param_4 & 0xffffffff ) / ( ulong ) * (uint*)( plVar20 + 0x10 ) ) * 8 );
            iVar19 = *(int*)( lVar31 + 0x490 );
            if (iVar6 != iVar19) {
               if (iVar19 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, plVar20);
               }

               goto LAB_001048ad;
            }

            lVar31 = lVar31 + lVar26;
            local_238 = *(undefined8*)( lVar31 + 0x44 );
            uStack_230 = *(undefined8*)( lVar31 + 0x4c );
            fVar39 = *(float*)( lVar31 + 0x8c );
            fVar5 = *(float*)( lVar31 + 0x90 );
            fVar43 = *(float*)( lVar31 + 0x94 );
            local_228 = *(undefined8*)( lVar31 + 0x54 );
            uStack_220 = *(undefined8*)( lVar31 + 0x5c );
            fVar8 = *(float*)( lVar31 + 0x88 );
            local_218 = *(undefined8*)( lVar31 + 100 );
            uStack_210 = *(undefined8*)( lVar31 + 0x6c );
            local_d8 = local_238;
            uStack_d0 = uStack_230;
            local_c8 = local_228;
            uStack_c0 = uStack_220;
            local_b8 = local_218;
            uStack_b0 = uStack_210;
            if (cVar17 == '\0') {
               Transform3D::orthogonalize();
            }

            Transform3D::inverse();
            Projection::Projection(local_118, local_208);
            Projection::operator *((Projection*)&local_d8, (Projection*)&local_158);
            local_98 = local_d8;
            uStack_90 = uStack_d0;
            local_88 = local_c8;
            uStack_80 = uStack_c0;
            local_78 = local_b8;
            uStack_70 = uStack_b0;
            local_68 = local_a8;
            uStack_60 = uStack_a0;
            Projection::~Projection((Projection*)&local_d8);
            Projection::~Projection(local_118);
            local_268 = CONCAT44(fVar39 * fVar15 + fVar13, fVar8 * fVar14 + fVar12);
            uStack_260 = CONCAT44(fVar15 * fVar43, fVar14 * fVar5);
            local_58 = uVar40;
            uStack_50 = uVar11;
            uVar40 = RenderingDevice::get_singleton();
            local_270 = 0;
            pvVar23 = (void*)RenderingDevice::draw_list_begin(uVar40, param_7, 0, local_278, 0, &local_268, 0);
            lVar31 = local_270;
            if (local_270 != 0) {
               LOCK();
               plVar1 = (long*)( local_270 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_270 = 0;
                  Memory::free_static((void*)( lVar31 + -0x10 ), false);
               }

            }

            if (*(long*)( param_3 + 0x1f8 ) == 0) {
               _err_print_error("get_render_pipeline", "./servers/rendering/renderer_rd/pipeline_cache_rd.h", 0x49, "Condition \"shader.is_null()\" is true. Returning: RID()", "Attempted to use an unused shader variant (shader is null),", 0, 0);
               lVar31 = 0;
            }
 else {
               while (true) {
                  local_278[0] = 0;
                  LOCK();
                  DVar4 = *pDVar2;
                  if (DVar4 == (DebugEffects)0x0) {
                     *pDVar2 = (DebugEffects)0x1;
                  }

                  UNLOCK();
                  if (DVar4 == (DebugEffects)0x0) break;
                  do {} while ( *pDVar2 != (DebugEffects)0x0 );
               }
;
               if (*(uint*)( param_3 + 0x2e8 ) != 0) {
                  plVar24 = *(long**)( param_3 + 0x2e0 );
                  plVar1 = plVar24 + ( ulong ) * (uint*)( param_3 + 0x2e8 ) * 5;
                  do {
                     if (( ( *(long*)param_3 == *plVar24 ) && ( lVar21 == plVar24[1] ) ) && ( ( param_3[0x206] == *(DebugEffects*)( (long)plVar24 + 0x14 ) && ( ( (int)plVar24[2] == 0 && ( (int)plVar24[3] == 0 ) ) ) ) )) {
                        lVar31 = plVar24[4];
                        param_3[0x1b8] = (DebugEffects)0x0;
                        goto LAB_00103fa2;
                     }

                     plVar24 = plVar24 + 5;
                  }
 while ( plVar1 != plVar24 );
               }

               lVar31 = PipelineCacheRD::_generate_version((long)pDVar2, *(long*)param_3, bVar27, (uint)(byte)param_3[0x206], 0);
               param_3[0x1b8] = (DebugEffects)0x0;
            }

            LAB_00103fa2:uVar40 = RenderingDevice::get_singleton();
            RenderingDevice::draw_list_bind_render_pipeline(uVar40, pvVar23, lVar31);
            uVar40 = RenderingDevice::get_singleton();
            RenderingDevice::draw_list_bind_vertex_array(uVar40, pvVar23, *(undefined8*)( param_3 + 0x10 ));
            uVar40 = RenderingDevice::get_singleton();
            RenderingDevice::draw_list_bind_index_array(uVar40, pvVar23, *(undefined8*)( param_3 + 0x20 ));
            lVar31 = RenderingDevice::get_singleton();
            RenderingDevice::draw_list_set_push_constant(lVar31, pvVar23, uVar28);
            lVar31 = RenderingDevice::get_singleton();
            RenderingDevice::draw_list_draw(lVar31, SUB81(pvVar23, 0), 1, 1);
            RenderingDevice::get_singleton();
            RenderingDevice::draw_list_end();
         }

         Projection::~Projection((Projection*)&local_158);
         Projection::~Projection(local_198);
      }

      local_338 = local_338 + 2;
      lVar33 = lVar33 + 1;
   }
 while ( lVar29 != lVar33 );
   if (local_280 != 0) {
      LOCK();
      plVar20 = (long*)( local_280 + -0x10 );
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
         Memory::free_static((void*)( local_280 + -0x10 ), false);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010438e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* ShadowFrustumShaderRD::~ShadowFrustumShaderRD() */void ShadowFrustumShaderRD::~ShadowFrustumShaderRD(ShadowFrustumShaderRD *this) {
   *(undefined***)this = &PTR__ShadowFrustumShaderRD_001073a0;
   ShaderRD::~ShaderRD((ShaderRD*)this);
   return;
}
/* ShadowFrustumShaderRD::~ShadowFrustumShaderRD() */void ShadowFrustumShaderRD::~ShadowFrustumShaderRD(ShadowFrustumShaderRD *this) {
   *(undefined***)this = &PTR__ShadowFrustumShaderRD_001073a0;
   ShaderRD::~ShaderRD((ShaderRD*)this);
   operator_delete(this, 0x178);
   return;
}
/* MotionVectorsShaderRD::~MotionVectorsShaderRD() */void MotionVectorsShaderRD::~MotionVectorsShaderRD(MotionVectorsShaderRD *this) {
   *(undefined***)this = &PTR__MotionVectorsShaderRD_00107380;
   ShaderRD::~ShaderRD((ShaderRD*)this);
   return;
}
/* MotionVectorsShaderRD::~MotionVectorsShaderRD() */void MotionVectorsShaderRD::~MotionVectorsShaderRD(MotionVectorsShaderRD *this) {
   *(undefined***)this = &PTR__MotionVectorsShaderRD_00107380;
   ShaderRD::~ShaderRD((ShaderRD*)this);
   operator_delete(this, 0x178);
   return;
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

   _err_print_error("light_get_type", "./servers/rendering/renderer_rd/storage_rd/light_storage.h", 0x1ff, "Parameter \"light\" is null.", 0, 0);
   return 0;
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

   _err_print_error("light_get_param", "./servers/rendering/renderer_rd/storage_rd/light_storage.h", 0x207, "Parameter \"light\" is null.", 0, 0);
   return 0;
}
/* CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write() [clone .isra.0] [clone .cold]
    */void CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::_copy_on_write(void) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_00104834(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* RendererRD::DebugEffects::draw_shadow_frustum(RID, Projection const&, Transform3D const&, RID,
   Rect2) [clone .cold] */void RendererRD::DebugEffects::draw_shadow_frustum(undefined8 param_1, undefined8 param_2, int param_3) {
   code *pcVar1;
   long lVar2;
   int unaff_EBX;
   undefined4 *puVar3;
   undefined4 *puVar4;
   byte bVar5;
   bVar5 = 0;
   if (param_3 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0);
   }

   puVar3 = (undefined4*)( (long)unaff_EBX * 0x9c + 4 );
   puVar4 = (undefined4*)&stack0x00000200;
   for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (ulong)bVar5 * -2 + 1;
      puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
   }

   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* RID UniformSetCacheRD::_allocate_from_uniforms<Vector<RenderingDevice::Uniform> >(RID, unsigned
   int, unsigned int, unsigned int, Vector<RenderingDevice::Uniform> const&) */long UniformSetCacheRD::_allocate_from_uniforms<Vector<RenderingDevice::Uniform>>(UniformSetCacheRD *this, undefined8 param_2, undefined4 param_3, undefined4 param_4, uint param_5, long param_6) {
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
      _err_print_error("_allocate_from_uniforms", "./servers/rendering/renderer_rd/uniform_set_cache_rd.h", 0x83, "Condition \"rid.is_null()\" is true. Returning: rid", 0, 0);
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
         uVar7 = _LC23;
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
               LAB_00104c83:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar15, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            lVar15 = *(long*)( lVar2 + -8 );
            if (lVar15 <= lVar9) goto LAB_00104c83;
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
      LAB_001052d0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_001052d0;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_001051a9:if (lVar10 != lVar7) {
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
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_001051a9;
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
      goto LAB_00105326;
   }

   if (lVar10 == lVar7) {
      LAB_0010524f:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_00105326:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_0010523a;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_0010524f;
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
   LAB_0010523a:puVar9[-1] = param_1;
   return 0;
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
      LAB_00105850:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar7 == 0) goto LAB_00105850;
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
      LAB_001057bc:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar9[-1];
      if (param_1 <= lVar3) goto LAB_00105751;
   }
 else {
      if (lVar8 != 0) {
         uVar6 = _realloc(this, lVar7);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         goto LAB_001057bc;
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
   LAB_00105751:puVar9[-1] = param_1;
   return 0;
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
      LAB_00105cc0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar11 == 0) goto LAB_00105cc0;
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
      LAB_00105c2c:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar4 = puVar9[-1];
      if (param_1 <= lVar4) goto LAB_00105bc3;
   }
 else {
      if (lVar10 != 0) {
         uVar8 = _realloc(this, lVar11);
         if ((int)uVar8 != 0) {
            return uVar8;
         }

         goto LAB_00105c2c;
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

   uVar3 = _LC39;
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
   LAB_00105bc3:puVar9[-1] = param_1;
   return 0;
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
      LAB_00106060:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar11 == 0) goto LAB_00106060;
   if (param_1 <= lVar8) {
      lVar8 = *(long*)this;
      uVar10 = param_1;
      while (lVar8 != 0) {
         if (*(ulong*)( lVar8 + -8 ) <= uVar10) {
            LAB_00105ef1:if (lVar11 != lVar9) {
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
            if (*(ulong*)( lVar8 + -8 ) <= uVar10) goto LAB_00105ef1;
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
      goto LAB_001060b6;
   }

   if (lVar11 == lVar9) {
      LAB_00105fd3:puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) {
         LAB_001060b6:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar8 = puVar7[-1];
      if (param_1 <= lVar8) goto LAB_00105fb0;
   }
 else {
      if (lVar8 != 0) {
         uVar4 = _realloc(this, lVar11);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_00105fd3;
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

   uVar4 = _LC23;
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
   LAB_00105fb0:puVar7[-1] = param_1;
   return 0;
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
/* RID UniformSetCacheRD::get_cache<RenderingDevice::Uniform, RenderingDevice::Uniform>(RID,
   unsigned int, RenderingDevice::Uniform, RenderingDevice::Uniform) */undefined8 UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>(UniformSetCacheRD *this, long param_2, int param_3, int *param_4, undefined8 *param_5) {
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
      LAB_0010651d:uVar21 = 0;
      do {
         uVar14 = (uint)uVar9;
         if (lVar13 == 0) {
            lVar13 = *(long*)( param_4 + 8 );
            if (lVar13 == 0) goto LAB_001065a0;
            lVar17 = *(long*)( lVar13 + -8 );
            if (lVar17 <= (long)uVar21) goto LAB_001065c1;
            lVar13 = *(long*)( lVar13 + uVar21 * 8 );
            LAB_00106531:iVar8 = (int)( (ulong)lVar13 >> 0x20 );
            uVar15 = ( iVar8 * 0x16a88000 | ( uint )(iVar8 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
            uVar14 = uVar14 ^ ( (int)lVar13 * 0x16a88000 | ( uint )((int)lVar13 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
         }
 else {
            if (uVar21 == 0) goto LAB_00106531;
            _err_print_error("get_id", "./servers/rendering/rendering_device.h", 0x3ca, "Condition \"p_idx != 0\" is true. Returning: RID()", 0, 0);
            uVar15 = 0;
         }

         uVar21 = uVar21 + 1;
         uVar15 = ( uVar14 << 0xd | uVar14 >> 0x13 ) * 5 + 0xe6546b64 ^ uVar15;
         uVar9 = ( ulong )(( uVar15 << 0xd | uVar15 >> 0x13 ) * 5 + 0xe6546b64);
         if (uVar21 == uVar7) goto LAB_001063c0;
         lVar13 = *(long*)( param_4 + 4 );
      }
 while ( true );
   }

   if (( *(long*)( param_4 + 8 ) != 0 ) && ( uVar7 = uVar7 != 0 )) goto LAB_0010651d;
   LAB_001063c0:lVar19 = local_48;
   lVar13 = local_58;
   uVar7 = ( ( uint )(uVar9 >> 0x10) ^ (uint)uVar9 ) * -0x7a143595;
   uVar7 = ( uVar7 ^ uVar7 >> 0xd ) * -0x3d4d51cb;
   uVar14 = ( (int)local_68 * 0x16a88000 | ( uint )((int)local_68 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ uVar7;
   uVar7 = ( ( uVar7 >> 0x10 ^ uVar14 ) << 0xd | uVar14 >> 0x13 ) * 5 + 0xe6546b64 ^ ( local_68._4_4_ * 0x16a88000 | ( uint )(local_68._4_4_ * -0x3361d2af) >> 0x11 ) * 0x1b873593;
   uVar7 = ( uVar7 << 0xd | uVar7 >> 0x13 ) * 5 + 0xe6546b64;
   if (local_58 == 0) {
      if (local_48 != 0) {
         uVar9 = *(ulong*)( local_48 + -8 ) & 0xffffffff;
         if ((int)*(ulong*)( local_48 + -8 ) != 0) goto LAB_0010644f;
         uVar7 = ( uVar7 >> 0x10 ^ uVar7 ) * -0x7a143595;
         uVar7 = ( uVar7 >> 0xd ^ uVar7 ) * -0x3d4d51cb;
         uVar9 = ( ulong )(uVar7 ^ uVar7 >> 0x10);
         goto LAB_00106656;
      }

      uVar7 = ( uVar7 >> 0x10 ^ uVar7 ) * -0x7a143595;
      uVar7 = ( uVar7 ^ uVar7 >> 0xd ) * -0x3d4d51cb;
      uVar9 = ( ulong )(uVar7 ^ uVar7 >> 0x10);
   }
 else {
      uVar9 = 1;
      LAB_0010644f:iVar16 = (int)local_58;
      uVar21 = 0;
      iVar8 = (int)( (ulong)local_58 >> 0x20 );
      do {
         if (lVar13 == 0) {
            if (lVar19 == 0) {
               LAB_001065a0:lVar17 = 0;
               LAB_001065c1:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar21, lVar17, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar5 = (code*)invalidInstructionException();
               ( *pcVar5 )();
            }

            lVar17 = *(long*)( lVar19 + -8 );
            if (lVar17 <= (long)uVar21) goto LAB_001065c1;
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
         LAB_00106656:LOCK();
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
            if (piVar18[1] != param_4[1]) goto LAB_001066c8;
            LAB_0010675b:if (*piVar18 == *param_4) {
               lVar19 = *(long*)( param_4 + 4 );
               if (*(long*)( piVar18 + 4 ) == 0) {
                  if (*(long*)( piVar18 + 8 ) == 0) {
                     if (lVar19 == 0) {
                        if (*(long*)( param_4 + 8 ) != 0) {
                           local_e8 = *(uint*)( *(long*)( param_4 + 8 ) + -8 );
                           joined_r0x00106f73:if (local_e8 != 0) goto LAB_00106796;
                        }

                        LAB_00106c5a:lVar19 = local_58;
                        uVar21 = ( ulong ) * (uint*)( lVar13 + 0x30 );
                        if (*(uint*)( lVar13 + 0x30 ) < 2) {
                           lVar13 = 1;
                           LAB_00106b0d:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xae, lVar13, uVar21, "p_index", "count", "", false, true);
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
                                    goto LAB_001069c1;
                                 }

                                 if (lVar19 == 0) {
                                    if (local_48 == 0) {
                                       LAB_00106fa9:lVar17 = 0;
                                    }
 else {
                                       lVar17 = *(long*)( local_48 + -8 );
                                       if ((long)uVar21 < lVar17) {
                                          lVar20 = *(long*)( local_48 + uVar21 * 8 );
                                          lVar17 = *(long*)( lVar3 + 0x38 );
                                          if (lVar17 == 0) goto LAB_00106d17;
                                          if (uVar21 != 0) goto LAB_00106f0e;
                                          goto LAB_00106d35;
                                       }

                                    }

                                    goto LAB_001065c1;
                                 }

                                 if (uVar21 == 0) {
                                    lVar17 = *(long*)( lVar3 + 0x38 );
                                    lVar20 = lVar19;
                                    if (lVar17 == 0) {
                                       LAB_00106d17:lVar4 = *(long*)( lVar3 + 0x48 );
                                       if (lVar4 == 0) goto LAB_00106fa9;
                                       lVar17 = *(long*)( lVar4 + -8 );
                                       if (lVar17 <= (long)uVar21) goto LAB_001065c1;
                                       lVar17 = *(long*)( lVar4 + uVar21 * 8 );
                                    }

                                 }
 else {
                                    _err_print_error("get_id", "./servers/rendering/rendering_device.h", 0x3ca, "Condition \"p_idx != 0\" is true. Returning: RID()", 0, 0);
                                    lVar20 = *(long*)( lVar3 + 0x38 );
                                    if (lVar20 == 0) goto LAB_00106d17;
                                    lVar20 = 0;
                                    LAB_00106f0e:_err_print_error("get_id", "./servers/rendering/rendering_device.h", 0x3ca, "Condition \"p_idx != 0\" is true. Returning: RID()", 0, 0);
                                    lVar17 = 0;
                                 }

                                 LAB_00106d35:uVar21 = uVar21 + 1;
                              }
 while ( lVar17 == lVar20 );
                           }

                        }

                     }

                  }
 else {
                     local_e8 = ( uint ) * (undefined8*)( *(long*)( piVar18 + 8 ) + -8 );
                     if (lVar19 == 0) {
                        if (*(long*)( param_4 + 8 ) == 0) goto joined_r0x00106f73;
                        if (*(uint*)( *(long*)( param_4 + 8 ) + -8 ) == local_e8) {
                           if (local_e8 != 0) goto LAB_00106b38;
                           goto LAB_00106c5a;
                        }

                     }
 else {
                        joined_r0x00106790:if (local_e8 == 1) {
                           LAB_00106b38:uVar22 = 0;
                           do {
                              uVar21 = uVar22;
                              if (lVar19 == 0) {
                                 lVar19 = *(long*)( param_4 + 8 );
                                 if (lVar19 == 0) {
                                    lVar17 = 0;
                                    goto LAB_001065c1;
                                 }

                                 lVar17 = *(long*)( lVar19 + -8 );
                                 if (lVar17 <= (long)uVar22) goto LAB_001065c1;
                                 lVar19 = *(long*)( lVar19 + uVar22 * 8 );
                                 lVar17 = *(long*)( piVar18 + 4 );
                                 if (lVar17 == 0) goto LAB_00106b6e;
                                 if (uVar22 != 0) goto LAB_00106bf3;
                              }
 else if (uVar22 == 0) {
                                 lVar17 = *(long*)( piVar18 + 4 );
                                 uVar21 = 0;
                                 if (lVar17 == 0) {
                                    LAB_00106b6e:lVar3 = *(long*)( piVar18 + 8 );
                                    if (lVar3 == 0) {
                                       lVar17 = 0;
                                       goto LAB_001065c1;
                                    }

                                    lVar17 = *(long*)( lVar3 + -8 );
                                    if (lVar17 <= (long)uVar21) goto LAB_001065c1;
                                    lVar17 = *(long*)( lVar3 + uVar22 * 8 );
                                 }

                              }
 else {
                                 _err_print_error("get_id", "./servers/rendering/rendering_device.h", 0x3ca, "Condition \"p_idx != 0\" is true. Returning: RID()", 0, 0);
                                 if (*(long*)( piVar18 + 4 ) == 0) {
                                    lVar19 = 0;
                                    goto LAB_00106b6e;
                                 }

                                 lVar19 = 0;
                                 LAB_00106bf3:_err_print_error("get_id", "./servers/rendering/rendering_device.h", 0x3ca, "Condition \"p_idx != 0\" is true. Returning: RID()", 0, 0);
                                 lVar17 = 0;
                              }

                              if (lVar19 != lVar17) break;
                              uVar22 = uVar22 + 1;
                              if (local_e8 <= (uint)uVar22) goto LAB_00106c5a;
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
                     goto LAB_00106b38;
                  }

                  if (*(long*)( param_4 + 8 ) != 0) {
                     local_e8 = ( uint ) * (undefined8*)( *(long*)( param_4 + 8 ) + -8 );
                     goto joined_r0x00106790;
                  }

               }

            }

         }
 else {
            CowData<RID>::_ref((CowData<RID>*)&local_48, pCVar1);
            if (*(int*)( lVar13 + 0x30 ) == 0) {
               uVar21 = 0;
               lVar13 = 0;
               goto LAB_00106b0d;
            }

            piVar18 = *(int**)( lVar13 + 0x38 );
            if (piVar18[1] == param_4[1]) goto LAB_0010675b;
         }

         LAB_00106796:uVar10 = local_68;
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

      LAB_001066c8:local_60 = uVar6;
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
         if (local_78[0] == 0) goto LAB_0010699c;
      }

      LOCK();
      plVar2 = (long*)( lVar13 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         Memory::free_static((void*)( local_78[0] + -0x10 ), false);
      }

   }

   LAB_0010699c:uVar10 = _allocate_from_uniforms<Vector<RenderingDevice::Uniform>>(this, param_2, param_3, uVar9, uVar7, local_a8);
   CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)&local_a0);
   LAB_001069c1:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar10;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<RenderingDeviceCommons::VertexAttribute>::_realloc(long) */undefined8 CowData<RenderingDeviceCommons::VertexAttribute>::_realloc(CowData<RenderingDeviceCommons::VertexAttribute> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<RenderingDeviceCommons::VertexAttribute>::resize<false>(long) */undefined8 CowData<RenderingDeviceCommons::VertexAttribute>::resize<false>(CowData<RenderingDeviceCommons::VertexAttribute> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   undefined8 uVar3;
   long lVar4;
   ulong uVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   undefined8 uVar8;
   undefined8 *puVar9;
   long lVar10;
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
      lVar4 = lVar12 * 0x14;
      if (lVar4 != 0) {
         uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = uVar5 | uVar5 >> 0x10;
         lVar4 = ( uVar5 | uVar5 >> 0x20 ) + 1;
      }

   }

   lVar11 = param_1 * 0x14;
   if (lVar11 == 0) {
      LAB_001072a0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar5 = lVar11 - 1U >> 1 | lVar11 - 1U;
   uVar5 = uVar5 | uVar5 >> 2;
   uVar5 = uVar5 | uVar5 >> 4;
   uVar5 = uVar5 | uVar5 >> 8;
   uVar5 = uVar5 | uVar5 >> 0x10;
   uVar5 = uVar5 | uVar5 >> 0x20;
   lVar10 = uVar5 + 1;
   if (lVar10 == 0) goto LAB_001072a0;
   if (param_1 <= lVar12) {
      if (( lVar10 != lVar4 ) && ( uVar8 = _realloc(this, lVar10) ),(int)uVar8 != 0) {
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

   if (lVar10 == lVar4) {
      LAB_0010720c:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar4 = puVar9[-1];
      if (param_1 <= lVar4) goto LAB_0010719c;
   }
 else {
      if (lVar12 != 0) {
         uVar8 = _realloc(this, lVar10);
         if ((int)uVar8 != 0) {
            return uVar8;
         }

         goto LAB_0010720c;
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

   uVar3 = _UNK_00108198;
   uVar8 = __LC70;
   puVar6 = (undefined8*)( (long)puVar9 + lVar4 * 0x14 );
   do {
      *(undefined4*)( puVar6 + 2 ) = 0;
      puVar7 = (undefined8*)( (long)puVar6 + 0x14 );
      *puVar6 = uVar8;
      puVar6[1] = uVar3;
      puVar6 = puVar7;
   }
 while ( (undefined8*)( lVar11 + (long)puVar9 ) != puVar7 );
   LAB_0010719c:puVar9[-1] = param_1;
   return 0;
}
/* WARNING: Control flow encountered bad instruction data *//* MotionVectorsShaderRD::~MotionVectorsShaderRD() */void MotionVectorsShaderRD::~MotionVectorsShaderRD(MotionVectorsShaderRD *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ShadowFrustumShaderRD::~ShadowFrustumShaderRD() */void ShadowFrustumShaderRD::~ShadowFrustumShaderRD(ShadowFrustumShaderRD *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


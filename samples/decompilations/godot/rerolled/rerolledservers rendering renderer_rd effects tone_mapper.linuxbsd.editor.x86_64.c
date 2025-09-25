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
/* RendererRD::ToneMapper::~ToneMapper() */void RendererRD::ToneMapper::~ToneMapper(ToneMapper *this) {
   PipelineCacheRD *this_00;
   this_00 = (PipelineCacheRD*)( this + 0x1080 );
   ShaderRD::version_free((ShaderRD*)( this + 0x60 ), *(undefined8*)( this + 0x1d8 ));
   do {
      this_00 = this_00 + -0x138;
      PipelineCacheRD::~PipelineCacheRD(this_00);
   }
 while ( this_00 != (PipelineCacheRD*)( this + 0x1e0 ) );
   *(undefined***)( this + 0x60 ) = &PTR__TonemapShaderRD_001064f0;
   ShaderRD::~ShaderRD((ShaderRD*)( this + 0x60 ));
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::ToneMapper::ToneMapper() */void RendererRD::ToneMapper::ToneMapper(ToneMapper *this) {
   ShaderRD *this_00;
   long *plVar1;
   ulong uVar2;
   code *pcVar3;
   undefined1 auVar4[16];
   char cVar5;
   int iVar6;
   undefined8 uVar7;
   ulong uVar8;
   PipelineCacheRD *this_01;
   PipelineCacheRD *pPVar9;
   long lVar10;
   int iVar11;
   ulong uVar12;
   PipelineCacheRD *pPVar13;
   long lVar14;
   undefined8 *puVar15;
   long lVar16;
   long in_FS_OFFSET;
   Vector<String> local_138[8];
   undefined8 local_130[2];
   long local_120;
   long local_118;
   undefined4 uStack_110;
   undefined4 uStack_10c;
   undefined1 auStack_108[12];
   undefined8 local_fc;
   undefined4 local_e8;
   uint uStack_e4;
   undefined4 uStack_e0;
   undefined4 uStack_dc;
   undefined8 local_d8;
   undefined4 uStack_d0;
   uint uStack_cc;
   undefined2 local_c8;
   undefined1 local_b8[16];
   undefined1 local_a8[16];
   undefined1 local_98[16];
   undefined4 local_88;
   ulong uStack_84;
   undefined4 uStack_7c;
   undefined4 local_78;
   undefined1 auStack_74[12];
   undefined1 local_68;
   undefined4 local_64;
   long local_58;
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   this_00 = (ShaderRD*)( this + 0x60 );
   pPVar13 = (PipelineCacheRD*)( this + 0x1e0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ShaderRD::ShaderRD(this_00);
   *(undefined***)( this + 0x60 ) = &PTR__TonemapShaderRD_001064f0;
   ShaderRD::setup((char*)this_00, "\n#version 450\n\n#VERSION_DEFINES\n\n#ifdef USE_MULTIVIEW\n#ifdef has_VK_KHR_multiview\n#extension GL_EXT_multiview : enable\n#endif\n#endif\n\nlayout(location = 0) out vec2 uv_interp;\n\nvoid main() {\n\t\n\t\n\t\n\t\n\t\n\n\tvec2 vertex_base;\n\tif (gl_VertexIndex == 0) {\n\t\tvertex_base = vec2(-1.0, -1.0);\n\t} else if (gl_VertexIndex == 1) {\n\t\tvertex_base = vec2(-1.0, 3.0);\n\t} else {\n\t\tvertex_base = vec2(3.0, -1.0);\n\t}\n\tgl_Position = vec4(vertex_base, 0.0, 1.0);\n\tuv_interp = clamp(vertex_base, vec2(0.0, 0.0), vec2(1.0, 1.0)) * 2.0; \n}\n\n", "\n#version 450\n\n#VERSION_DEFINES\n\n#ifdef USE_MULTIVIEW\n#ifdef has_VK_KHR_multiview\n#extension GL_EXT_multiview : enable\n#define ViewIndex gl_ViewIndex\n#else \n#define ViewIndex 0\n#endif \n#endif \n\nlayout(location = 0) in vec2 uv_interp;\n\n#ifdef SUBPASS\nlayout(input_attachment_index = 0, set = 0, binding = 0) uniform subpassInput input_color;\n#elif defined(USE_MULTIVIEW)\nlayout(set = 0, binding = 0) uniform sampler2DArray source_color;\n#else\nlayout(set = 0, binding = 0) uniform sampler2D source_color;\n#endif\n\nlayout(set = 1, binding = 0) uniform sampler2D source_auto_exposure;\n#ifdef USE_MULTIVIEW\nlayout(set = 2, binding = 0) uniform sampler2DArray source_glow;\n#else\nlayout(set = 2, binding = 0) uniform sampler2D source_glow;\n#endif\nlayout(set = 2, binding = 1) uniform sampler2D glow_map;\n\n#ifdef USE_1D_LUT\nlayout(set = 3, binding = 0) uniform sampler2D source_color_correction;\n#else\nlayout(set = 3, binding = 0) uniform sampler3D source_color_correction;\n#endif\n\n#define FLAG_USE_BCS (1 << 0)\n#define FLAG_USE_GLOW (1 << 1)\n#define FLAG_USE_AUTO_EXPOSURE (1 << 2)\n#define FLAG_USE_COLOR_CORRECTION (1 << 3)\n#define FLAG_USE_FXAA (1 << 4)\n#define FLAG_USE_DEBANDING (1 << 5)\n#define FLAG_CONVERT_TO_SRGB (1 << 6)\n\nlayout(push_constant, std430) uniform Params {\n\tvec3 bcs;\n\tuint flags;\n\n\tvec2 pixel_size;\n\tuint tonemapper;\n\tuint pad;\n\n\tuvec2 glow_texture_size;\n\tfloat glow_intensity;\n\tfloat glow_map_strength;\n\n\tuint glow_mode;\n\tfloat glow_levels[7];\n\n\tfloat exposure;\n\tfloat white;\n\tfloat auto_exposure_scale;\n\tfloat luminance_multiplier;\n}\nparams;\n\nlayout(location = 0) out vec4 frag_color;\n\n#ifdef USE_GLOW_FILTER_BICUBIC\n\nfloat w0(float a) {\n\treturn (1.0f / 6.0f) * (a * (a * (-a + 3.0f) - 3.0f) + 1.0f);\n}\n\nfloat w1(float a) {\n\treturn (1.0f / 6.0f) * (a * a * (3.0f * a - 6.0f) + 4.0f);\n}\n\nfloat w2(float a) {\n\treturn (1.0f / 6.0f) * (a * (a * (-3.0f * a + 3.0f) + 3.0f) + 1.0f);\n}\n\nfloat w3(float a) {\n\treturn (1.0f / 6.0f) * (a * a * a);\n}\n\n\nfloat g0(float a) {\n\treturn w0(a) + w1(a);\n}\n\nfloat g1(float a) {\n\treturn w2(a) + w3(a);\n}\n...", /* TRUNCATED STRING LITERAL */, (char*)0x0);
   *(undefined8*)( this + 0x1d8 ) = 0;
   this_01 = pPVar13;
   do {
      pPVar9 = this_01 + 0x138;
      PipelineCacheRD::PipelineCacheRD(this_01);
      this_01 = pPVar9;
   }
 while ( pPVar9 != (PipelineCacheRD*)( this + 0x1080 ) );
   local_130[0] = 0;
   local_e8 = 0;
   uStack_e4 = 0;
   local_b8._0_8_ = &_LC30;
   local_b8._8_8_ = 1;
   String::parse_latin1((StrRange*)&local_e8);
   Vector<String>::push_back(local_138);
   if (CONCAT44(uStack_e4, local_e8) != 0) {
      LOCK();
      plVar1 = (long*)( CONCAT44(uStack_e4, local_e8) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar16 = CONCAT44(uStack_e4, local_e8);
         local_e8 = 0;
         uStack_e4 = 0;
         Memory::free_static((void*)( lVar16 + -0x10 ), false);
      }

   }

   local_e8 = 0;
   uStack_e4 = 0;
   local_b8._0_8_ = "\n#define USE_GLOW_FILTER_BICUBIC\n";
   local_b8._8_8_ = 0x21;
   String::parse_latin1((StrRange*)&local_e8);
   Vector<String>::push_back(local_138);
   if (CONCAT44(uStack_e4, local_e8) != 0) {
      LOCK();
      plVar1 = (long*)( CONCAT44(uStack_e4, local_e8) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar16 = CONCAT44(uStack_e4, local_e8);
         local_e8 = 0;
         uStack_e4 = 0;
         Memory::free_static((void*)( lVar16 + -0x10 ), false);
      }

   }

   local_e8 = 0;
   uStack_e4 = 0;
   local_b8._0_8_ = "\n#define USE_1D_LUT\n";
   local_b8._8_8_ = 0x14;
   String::parse_latin1((StrRange*)&local_e8);
   Vector<String>::push_back(local_138);
   if (CONCAT44(uStack_e4, local_e8) != 0) {
      LOCK();
      plVar1 = (long*)( CONCAT44(uStack_e4, local_e8) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar16 = CONCAT44(uStack_e4, local_e8);
         local_e8 = 0;
         uStack_e4 = 0;
         Memory::free_static((void*)( lVar16 + -0x10 ), false);
      }

   }

   local_e8 = 0;
   uStack_e4 = 0;
   local_b8._0_8_ = "\n#define USE_GLOW_FILTER_BICUBIC\n#define USE_1D_LUT\n";
   local_b8._8_8_ = 0x34;
   String::parse_latin1((StrRange*)&local_e8);
   Vector<String>::push_back(local_138);
   if (CONCAT44(uStack_e4, local_e8) != 0) {
      LOCK();
      plVar1 = (long*)( CONCAT44(uStack_e4, local_e8) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar16 = CONCAT44(uStack_e4, local_e8);
         local_e8 = 0;
         uStack_e4 = 0;
         Memory::free_static((void*)( lVar16 + -0x10 ), false);
      }

   }

   local_e8 = 0;
   uStack_e4 = 0;
   local_b8._0_8_ = "\n#define SUBPASS\n";
   local_b8._8_8_ = 0x11;
   String::parse_latin1((StrRange*)&local_e8);
   Vector<String>::push_back(local_138);
   if (CONCAT44(uStack_e4, local_e8) != 0) {
      LOCK();
      plVar1 = (long*)( CONCAT44(uStack_e4, local_e8) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar16 = CONCAT44(uStack_e4, local_e8);
         local_e8 = 0;
         uStack_e4 = 0;
         Memory::free_static((void*)( lVar16 + -0x10 ), false);
      }

   }

   local_e8 = 0;
   uStack_e4 = 0;
   local_b8._0_8_ = "\n#define SUBPASS\n#define USE_1D_LUT\n";
   local_b8._8_8_ = 0x24;
   String::parse_latin1((StrRange*)&local_e8);
   Vector<String>::push_back(local_138);
   if (CONCAT44(uStack_e4, local_e8) != 0) {
      LOCK();
      plVar1 = (long*)( CONCAT44(uStack_e4, local_e8) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar16 = CONCAT44(uStack_e4, local_e8);
         local_e8 = 0;
         uStack_e4 = 0;
         Memory::free_static((void*)( lVar16 + -0x10 ), false);
      }

   }

   local_e8 = 0;
   uStack_e4 = 0;
   local_b8._0_8_ = "\n#define USE_MULTIVIEW\n";
   local_b8._8_8_ = 0x17;
   String::parse_latin1((StrRange*)&local_e8);
   Vector<String>::push_back(local_138);
   if (CONCAT44(uStack_e4, local_e8) != 0) {
      LOCK();
      plVar1 = (long*)( CONCAT44(uStack_e4, local_e8) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar16 = CONCAT44(uStack_e4, local_e8);
         local_e8 = 0;
         uStack_e4 = 0;
         Memory::free_static((void*)( lVar16 + -0x10 ), false);
      }

   }

   local_e8 = 0;
   uStack_e4 = 0;
   local_b8._0_8_ = "\n#define USE_MULTIVIEW\n#define USE_GLOW_FILTER_BICUBIC\n";
   local_b8._8_8_ = 0x37;
   String::parse_latin1((StrRange*)&local_e8);
   Vector<String>::push_back(local_138);
   if (CONCAT44(uStack_e4, local_e8) != 0) {
      LOCK();
      plVar1 = (long*)( CONCAT44(uStack_e4, local_e8) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar16 = CONCAT44(uStack_e4, local_e8);
         local_e8 = 0;
         uStack_e4 = 0;
         Memory::free_static((void*)( lVar16 + -0x10 ), false);
      }

   }

   local_e8 = 0;
   uStack_e4 = 0;
   local_b8._0_8_ = "\n#define USE_MULTIVIEW\n#define USE_1D_LUT\n";
   local_b8._8_8_ = 0x2a;
   String::parse_latin1((StrRange*)&local_e8);
   Vector<String>::push_back(local_138);
   if (CONCAT44(uStack_e4, local_e8) != 0) {
      LOCK();
      plVar1 = (long*)( CONCAT44(uStack_e4, local_e8) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar16 = CONCAT44(uStack_e4, local_e8);
         local_e8 = 0;
         uStack_e4 = 0;
         Memory::free_static((void*)( lVar16 + -0x10 ), false);
      }

   }

   local_e8 = 0;
   uStack_e4 = 0;
   local_b8._0_8_ = "\n#define USE_MULTIVIEW\n#define USE_GLOW_FILTER_BICUBIC\n#define USE_1D_LUT\n";
   local_b8._8_8_ = 0x4a;
   String::parse_latin1((StrRange*)&local_e8);
   Vector<String>::push_back(local_138);
   if (CONCAT44(uStack_e4, local_e8) != 0) {
      LOCK();
      plVar1 = (long*)( CONCAT44(uStack_e4, local_e8) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar16 = CONCAT44(uStack_e4, local_e8);
         local_e8 = 0;
         uStack_e4 = 0;
         Memory::free_static((void*)( lVar16 + -0x10 ), false);
      }

   }

   local_e8 = 0;
   uStack_e4 = 0;
   local_b8._0_8_ = "\n#define USE_MULTIVIEW\n#define SUBPASS\n";
   local_b8._8_8_ = 0x27;
   String::parse_latin1((StrRange*)&local_e8);
   Vector<String>::push_back(local_138);
   if (CONCAT44(uStack_e4, local_e8) != 0) {
      LOCK();
      plVar1 = (long*)( CONCAT44(uStack_e4, local_e8) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar16 = CONCAT44(uStack_e4, local_e8);
         local_e8 = 0;
         uStack_e4 = 0;
         Memory::free_static((void*)( lVar16 + -0x10 ), false);
      }

   }

   local_e8 = 0;
   uStack_e4 = 0;
   local_b8._0_8_ = "\n#define USE_MULTIVIEW\n#define SUBPASS\n#define USE_1D_LUT\n";
   local_b8._8_8_ = 0x3a;
   String::parse_latin1((StrRange*)&local_e8);
   Vector<String>::push_back(local_138);
   if (CONCAT44(uStack_e4, local_e8) != 0) {
      LOCK();
      plVar1 = (long*)( CONCAT44(uStack_e4, local_e8) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar16 = CONCAT44(uStack_e4, local_e8);
         local_e8 = 0;
         uStack_e4 = 0;
         Memory::free_static((void*)( lVar16 + -0x10 ), false);
      }

   }

   uStack_e0 = 0;
   uStack_dc = 0;
   local_118 = 0;
   local_b8 = ZEXT816(0x103899);
   String::parse_latin1((StrRange*)&local_118);
   ShaderRD::initialize((Vector*)this_00, local_138, (Vector*)&local_118);
   lVar16 = local_118;
   if (local_118 != 0) {
      LOCK();
      plVar1 = (long*)( local_118 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_118 = 0;
         Memory::free_static((void*)( lVar16 + -0x10 ), false);
      }

   }

   CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)&uStack_e0);
   cVar5 = ( **(code**)( *RendererCompositorRD::singleton + 0xa8 ) )();
   iVar11 = (int)this_00;
   if (cVar5 == '\0') {
      for (int i = 0; i < 6; i++) {
         ShaderRD::set_variant_enabled(iVar11, true);
      }

   }

   uVar12 = 0;
   uVar7 = ShaderRD::version_create();
   *(undefined8*)( this + 0x1d8 ) = uVar7;
   do {
      cVar5 = ShaderRD::is_variant_enabled(iVar11);
      if (cVar5 == '\0') {
         PipelineCacheRD::clear();
      }
 else {
         local_e8 = 0;
         uStack_e4 = 0;
         uStack_e0 = 0;
         uStack_dc = 0;
         local_d8 = 0;
         uStack_d0 = 0;
         local_b8._0_8_ = 0;
         local_b8._8_8_ = 0;
         uStack_cc = _LC27;
         local_a8._8_8_ = (ulong)_LC27 << 0x20;
         local_120 = 0;
         local_68 = 0;
         local_64 = 0;
         local_58 = 0;
         local_50 = __LC42;
         uStack_48 = _UNK_0010a9d8;
         local_a8._0_8_ = 0;
         iVar6 = CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::resize<false>((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>*)&local_58, 1);
         if (iVar6 == 0) {
            if (local_58 == 0) {
               lVar14 = -1;
               lVar16 = 0;
            }
 else {
               lVar16 = *(long*)( local_58 + -8 );
               lVar14 = lVar16 + -1;
               if (-1 < lVar14) {
                  CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>*)&local_58);
                  puVar15 = (undefined8*)( lVar14 * 0x20 + local_58 );
                  *puVar15 = local_b8._0_8_;
                  puVar15[1] = local_b8._8_8_;
                  puVar15[2] = local_a8._0_8_;
                  puVar15[3] = local_a8._8_8_;
                  goto LAB_00100e63;
               }

            }

            _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar14, lVar16, "p_index", "size()", "", false, false);
         }
 else {
            _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
         }

         LAB_00100e63:local_fc = 0x13f800000;
         local_c8 = 0;
         uVar2 = *(ulong*)( this + 0x1d8 );
         local_88 = 0;
         auStack_74 = SUB1612((undefined1[16])0x0, 4);
         local_118 = 0;
         uStack_110 = 0;
         local_b8 = ZEXT816(0x700000000);
         local_e8 = 0;
         uStack_e4 = uStack_e4 & 0xffffff00;
         uStack_e0 = 0;
         uStack_d0 = 0;
         uStack_cc = 0;
         auVar4._8_8_ = 0;
         auVar4._0_8_ = _LC67;
         local_a8 = auVar4 << 0x40;
         local_98._8_8_ = 0;
         local_98._0_8_ = _UNK_0010a9e8;
         uStack_84 = _LC67;
         uStack_7c = (undefined4)_UNK_0010a9e8;
         local_78 = ( undefined4 )(_UNK_0010a9e8 >> 0x20);
         uStack_10c = 0;
         auStack_108 = SUB1612((undefined1[16])0x0, 4);
         if (*(long*)( this + 0x78 ) == 0) {
            lVar16 = 0;
            LAB_0010142d:_err_print_index_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa6, uVar12, lVar16, "p_variant", "variant_defines.size()", "", false, false);
            uVar7 = 0;
         }
 else {
            lVar16 = *(long*)( *(long*)( this + 0x78 ) + -8 );
            if (lVar16 <= (long)uVar12) goto LAB_0010142d;
            lVar16 = *(long*)( this + 0x88 );
            uVar8 = uVar12;
            if (lVar16 == 0) {
               LAB_00101330:lVar14 = 0;
               uVar8 = uVar12;
               LAB_00101351:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar8, lVar14, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            lVar14 = *(long*)( lVar16 + -8 );
            if (lVar14 <= (long)uVar12) goto LAB_00101351;
            if (*(char*)( lVar16 + uVar12 ) == '\0') {
               _err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa7, "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()", 0, 0);
               uVar7 = 0;
               goto LAB_0010100c;
            }

            if (( uVar2 == 0 ) || ( *(uint*)( this + 0x134 ) <= (uint)uVar2 )) {
               LAB_001014f0:_err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xaa, "Parameter \"version\" is null.", 0, 0);
               uVar7 = 0;
            }
 else {
               lVar16 = ( ( uVar2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0xa0 + *(long*)( *(long*)( this + 0x120 ) + ( ( uVar2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
               if (*(int*)( lVar16 + 0x98 ) != (int)( uVar2 >> 0x20 )) {
                  if (*(int*)( lVar16 + 0x98 ) + 0x80000000U < 0x7fffffff) {
                     _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                  }

                  goto LAB_001014f0;
               }

               iVar6 = (int)lVar16;
               if (*(char*)( lVar16 + 0x91 ) != '\0') {
                  ShaderRD::_initialize_version((Version*)this_00);
                  lVar14 = *(long*)( this + 0xd8 );
                  if (lVar14 != 0) {
                     lVar10 = 0;
                     do {
                        if (*(long*)( lVar14 + -8 ) <= lVar10) break;
                        if (*(char*)( lVar14 + lVar10 ) == '\0') {
                           ShaderRD::_allocate_placeholders((Version*)this_00, iVar6);
                        }
 else {
                           ShaderRD::_compile_version_start((Version*)this_00, iVar6);
                        }

                        lVar14 = *(long*)( this + 0xd8 );
                        lVar10 = lVar10 + 1;
                     }
 while ( lVar14 != 0 );
                  }

               }

               lVar10 = *(long*)( this + 0x98 );
               if (lVar10 == 0) goto LAB_00101330;
               lVar14 = *(long*)( lVar10 + -8 );
               if (lVar14 <= (long)uVar12) goto LAB_00101351;
               uVar8 = ( ulong ) * (uint*)( lVar10 + uVar12 * 4 );
               lVar10 = *(long*)( lVar16 + 0x68 );
               if (lVar10 == 0) {
                  lVar14 = 0;
                  goto LAB_00101351;
               }

               lVar14 = *(long*)( lVar10 + -8 );
               if (lVar14 <= (long)uVar8) goto LAB_00101351;
               if (*(long*)( lVar10 + uVar8 * 8 ) == 0) {
                  cVar5 = *(char*)( lVar16 + 0x90 );
               }
 else {
                  ShaderRD::_compile_version_end((Version*)this_00, iVar6);
                  cVar5 = *(char*)( lVar16 + 0x90 );
               }

               if (cVar5 == '\0') {
                  uVar7 = 0;
               }
 else {
                  lVar16 = *(long*)( lVar16 + 0x88 );
                  if (lVar16 == 0) goto LAB_00101330;
                  lVar14 = *(long*)( lVar16 + -8 );
                  uVar8 = uVar12;
                  if (lVar14 <= (long)uVar12) goto LAB_00101351;
                  uVar7 = *(undefined8*)( lVar16 + uVar12 * 8 );
               }

            }

         }

         LAB_0010100c:PipelineCacheRD::setup(pPVar13, uVar7, 5);
         if (CONCAT44(uStack_cc, uStack_d0) != 0) {
            LOCK();
            plVar1 = (long*)( CONCAT44(uStack_cc, uStack_d0) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar16 = CONCAT44(uStack_cc, uStack_d0);
               uStack_d0 = 0;
               uStack_cc = 0;
               Memory::free_static((void*)( lVar16 + -0x10 ), false);
            }

         }

         lVar16 = local_58;
         if (local_58 != 0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = 0;
               Memory::free_static((void*)( lVar16 + -0x10 ), false);
            }

         }

         lVar16 = local_120;
         if (local_120 != 0) {
            LOCK();
            plVar1 = (long*)( local_120 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_120 = 0;
               Memory::free_static((void*)( lVar16 + -0x10 ), false);
            }

         }

      }

      uVar12 = uVar12 + 1;
      pPVar13 = pPVar13 + 0x138;
      if (uVar12 == 0xc) {
         CowData<String>::_unref((CowData<String>*)local_130);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

   }
 while ( true );
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
/* RendererRD::ToneMapper::tonemapper(RID, RID, RendererRD::ToneMapper::TonemapSettings const&) */void RendererRD::ToneMapper::tonemapper(ToneMapper *this, undefined8 param_2, undefined8 param_3, byte *param_4) {
   long *plVar1;
   Version *pVVar2;
   ToneMapper *pTVar3;
   ToneMapper TVar4;
   undefined4 uVar5;
   byte bVar6;
   byte bVar7;
   byte bVar8;
   undefined4 uVar9;
   code *pcVar10;
   uint uVar11;
   ulong uVar12;
   UniformSetCacheRD *pUVar13;
   uint uVar14;
   int iVar15;
   long lVar16;
   long lVar17;
   undefined8 uVar18;
   void *pvVar19;
   undefined8 uVar20;
   long lVar21;
   long *plVar22;
   ulong uVar23;
   ulong uVar24;
   char *pcVar25;
   uint uVar26;
   long lVar27;
   undefined8 *puVar28;
   ulong uVar29;
   long in_FS_OFFSET;
   bool bVar30;
   byte bVar31;
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   long local_188[2];
   ulong local_178;
   undefined1 local_170;
   long local_168;
   Vector<RID> local_160[8];
   long local_158[2];
   ulong local_148;
   undefined1 local_140;
   long local_138;
   Vector<RID> local_130[8];
   long local_128[2];
   ulong local_118;
   undefined1 local_110;
   long local_108;
   Vector<RID> local_100[8];
   long local_f8[2];
   ulong local_e8;
   undefined1 local_e0;
   long local_d8;
   Vector<RID> local_d0[8];
   long local_c8[2];
   ulong local_b8;
   undefined1 local_b0;
   undefined8 local_a8;
   long local_98[2];
   ulong local_88;
   ulong local_80;
   undefined8 local_78;
   long local_68[2];
   long local_58[5];
   pUVar13 = UniformSetCacheRD::singleton;
   bVar31 = 0;
   local_58[3] = *(long*)( in_FS_OFFSET + 0x28 );
   if (UniformSetCacheRD::singleton == (UniformSetCacheRD*)0x0) {
      if (local_58[3] == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar18 = 0x56;
         pcVar25 = "Parameter \"uniform_set_cache\" is null.";
         LAB_001025a3:_err_print_error("tonemapper", "servers/rendering/renderer_rd/effects/tone_mapper.cpp", uVar18, pcVar25, 0, 0);
         return;
      }

      goto LAB_00102717;
   }

   lVar16 = RendererRD::MaterialStorage::get_singleton();
   if (lVar16 == 0) {
      if (local_58[3] == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar18 = 0x58;
         pcVar25 = "Parameter \"material_storage\" is null.";
         goto LAB_001025a3;
      }

      goto LAB_00102717;
   }

   *(undefined8*)this = 0;
   *(undefined8*)( this + 0x58 ) = 0;
   uVar11 = (uint)this;
   puVar28 = (undefined8*)( ( ulong )(this + 8) & 0xfffffffffffffff8 );
   for (uVar23 = ( ulong )(( uVar11 - (int)(undefined8*)( ( ulong )(this + 8) & 0xfffffffffffffff8 ) ) + 0x60 >> 3); uVar23 != 0; uVar23 = uVar23 - 1) {
      *puVar28 = 0;
      puVar28 = puVar28 + (ulong)bVar31 * -2 + 1;
   }

   bVar31 = param_4[0x6c];
   bVar6 = *param_4;
   *(undefined4*)this = *(undefined4*)( param_4 + 0x70 );
   *(undefined4*)( this + 4 ) = *(undefined4*)( param_4 + 0x74 );
   uVar5 = *(undefined4*)( param_4 + 0x78 );
   uVar26 = (uint)bVar6 * 2 | (uint)bVar31;
   *(uint*)( this + 0xc ) = uVar26;
   uVar9 = *(undefined4*)( param_4 + 0x2c );
   *(undefined4*)( this + 8 ) = uVar5;
   *(undefined4*)( this + 0x28 ) = *(undefined4*)( param_4 + 8 );
   *(undefined4*)( this + 0x2c ) = *(undefined4*)( param_4 + 0xc );
   *(undefined4*)( this + 0x34 ) = *(undefined4*)( param_4 + 0x10 );
   *(undefined4*)( this + 0x38 ) = *(undefined4*)( param_4 + 0x14 );
   *(undefined4*)( this + 0x3c ) = *(undefined4*)( param_4 + 0x18 );
   *(undefined4*)( this + 0x40 ) = *(undefined4*)( param_4 + 0x1c );
   *(undefined4*)( this + 0x44 ) = *(undefined4*)( param_4 + 0x20 );
   *(undefined4*)( this + 0x48 ) = *(undefined4*)( param_4 + 0x24 );
   uVar5 = *(undefined4*)( param_4 + 0x28 );
   *(undefined4*)( this + 0x20 ) = uVar9;
   *(undefined4*)( this + 0x4c ) = uVar5;
   bVar31 = param_4[0x7d];
   *(undefined4*)( this + 0x24 ) = *(undefined4*)( param_4 + 0x30 );
   *(undefined4*)( this + 0x30 ) = *(undefined4*)( param_4 + 4 );
   uVar14 = (uint)param_4[0x34];
   if (bVar31 != 0) {
      uVar14 = uVar14 + 2;
   }

   bVar31 = param_4[0x54];
   uVar5 = *(undefined4*)( param_4 + 0x4c );
   *(undefined4*)( this + 0x18 ) = *(undefined4*)( param_4 + 0x48 );
   bVar6 = param_4[0x7c];
   *(undefined4*)( this + 0x50 ) = uVar5;
   bVar7 = param_4[0x88];
   *(undefined4*)( this + 0x54 ) = *(undefined4*)( param_4 + 0x50 );
   *(undefined4*)( this + 0x58 ) = *(undefined4*)( param_4 + 0x58 );
   bVar8 = param_4[0x89];
   *(undefined4*)( this + 0x5c ) = *(undefined4*)( param_4 + 0x68 );
   auVar32._8_8_ = _LC65;
   auVar32._0_8_ = _LC65;
   uVar26 = (uint)bVar6 << 3 | (uint)bVar31 << 2 | (uint)bVar7 << 4 | (uint)bVar8 << 5 | uVar26;
   bVar31 = param_4[0x98];
   *(uint*)( this + 0xc ) = uVar26;
   auVar33._8_8_ = (double)(int)( ( ulong ) * (undefined8*)( param_4 + 0x8c ) >> 0x20 );
   auVar33._0_8_ = (double)(int)*(undefined8*)( param_4 + 0x8c );
   auVar33 = divpd(auVar32, auVar33);
   *(uint*)( this + 0xc ) = uVar26 | (uint)bVar31 << 6;
   uVar26 = *(uint*)( param_4 + 0x94 );
   *(ulong*)( this + 0x10 ) = CONCAT44((float)auVar33._8_8_, (float)auVar33._0_8_);
   if (1 < uVar26) {
      uVar14 = uVar14 + 6;
   }

   lVar21 = *(long*)( lVar16 + 0x50 );
   lVar16 = *(long*)( lVar16 + 0x90 );
   local_80 = 0;
   local_58[0] = lVar21;
   local_58[1] = param_2;
   iVar15 = CowData<RID>::resize<false>((CowData<RID>*)&local_80, 2);
   uVar23 = local_80;
   if (iVar15 == 0) {
      lVar27 = 0;
      do {
         if (uVar23 == 0) {
            lVar17 = 0;
            LAB_00101cbc:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar27, lVar17, "p_index", "size()", "", false, false);
         }
 else {
            lVar17 = *(long*)( uVar23 + -8 );
            if (lVar17 <= lVar27) goto LAB_00101cbc;
            CowData<RID>::_copy_on_write((CowData<RID>*)&local_80);
            *(long*)( local_80 + lVar27 * 8 ) = local_58[lVar27];
            uVar23 = local_80;
         }

         if (lVar27 != 0) break;
         lVar27 = 1;
      }
 while ( true );
   }

   uVar12 = _LC66;
   plVar1 = (long*)( uVar23 + -0x10 );
   local_188[0] = 0;
   if (uVar23 != 0) {
      do {
         lVar27 = *plVar1;
         if (lVar27 == 0) goto LAB_00101954;
         LOCK();
         lVar17 = *plVar1;
         bVar30 = lVar27 == lVar17;
         if (bVar30) {
            *plVar1 = lVar27 + 1;
            lVar17 = lVar27;
         }

         UNLOCK();
      }
 while ( !bVar30 );
      if (lVar17 != -1) {
         local_188[0] = local_80;
      }

      LAB_00101954:if (local_80 != 0) {
         LOCK();
         plVar1 = (long*)( local_80 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_80 + -0x10 ), false);
         }

      }

   }

   local_170 = 0;
   uVar18 = *(undefined8*)( param_4 + 0x60 );
   local_158[0] = 0;
   local_178 = uVar12;
   local_168 = uVar18;
   if (lVar21 != 0) {
      local_168 = lVar21;
      Vector<RID>::push_back(local_160, lVar21);
      Vector<RID>::push_back(local_160, uVar18);
      local_168 = 0;
   }

   local_140 = 0;
   uVar18 = *(undefined8*)( param_4 + 0x38 );
   local_128[0] = 0;
   local_148 = uVar12;
   if (lVar16 == 0) {
      local_108 = *(long*)( param_4 + 0x40 );
      local_110 = 0;
      local_f8[0] = 0;
      local_118 = _LC67;
      local_138 = uVar18;
   }
 else {
      local_138 = lVar16;
      Vector<RID>::push_back(local_130, lVar16);
      Vector<RID>::push_back(local_130, uVar18);
      uVar18 = *(undefined8*)( param_4 + 0x40 );
      local_138 = 0;
      local_118 = _LC67;
      local_110 = 0;
      local_f8[0] = 0;
      local_108 = lVar16;
      Vector<RID>::push_back(local_100, lVar16);
      Vector<RID>::push_back(local_100, uVar18);
      local_108 = 0;
   }

   local_e8 = uVar12;
   uVar18 = *(undefined8*)( param_4 + 0x80 );
   local_e0 = 0;
   local_c8[0] = 0;
   local_d8 = uVar18;
   if (lVar21 != 0) {
      local_d8 = lVar21;
      Vector<RID>::push_back(local_d0, lVar21);
      Vector<RID>::push_back(local_d0, uVar18);
      local_d8 = 0;
   }

   uVar23 = *(ulong*)( this + 0x1d8 );
   uVar29 = (ulong)(int)uVar14;
   if (*(long*)( this + 0x78 ) == 0) {
      lVar16 = 0;
      LAB_001025f5:_err_print_index_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa6, uVar29, lVar16, "p_variant", "variant_defines.size()", "", false, false);
      LAB_00101b3f:_err_print_error("tonemapper", "servers/rendering/renderer_rd/effects/tone_mapper.cpp", 0xa7, "Condition \"shader.is_null()\" is true.", 0, 0);
      if (local_c8[0] != 0) {
         LOCK();
         plVar1 = (long*)( local_c8[0] + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            LAB_00102441:Memory::free_static((void*)( local_c8[0] + -0x10 ), false);
         }

      }

   }
 else {
      lVar16 = *(long*)( *(long*)( this + 0x78 ) + -8 );
      if (lVar16 <= (long)uVar29) goto LAB_001025f5;
      lVar16 = *(long*)( this + 0x88 );
      uVar24 = uVar29;
      if (lVar16 == 0) {
         LAB_00101ff7:lVar21 = 0;
         uVar24 = uVar29;
         LAB_00102018:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar24, lVar21, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar10 = (code*)invalidInstructionException();
         ( *pcVar10 )();
      }

      lVar21 = *(long*)( lVar16 + -8 );
      if (lVar21 <= (long)uVar29) goto LAB_00102018;
      if (*(char*)( lVar16 + uVar29 ) == '\0') {
         _err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa7, "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()", 0, 0);
         goto LAB_00101b3f;
      }

      if (( uVar23 == 0 ) || ( *(uint*)( this + 0x134 ) <= (uint)uVar23 )) {
         LAB_00101fcd:_err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xaa, "Parameter \"version\" is null.", 0, 0);
         goto LAB_00101b3f;
      }

      lVar16 = ( ( uVar23 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0xa0 + *(long*)( *(long*)( this + 0x120 ) + ( ( uVar23 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      if (*(int*)( lVar16 + 0x98 ) != (int)( uVar23 >> 0x20 )) {
         if (*(int*)( lVar16 + 0x98 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         goto LAB_00101fcd;
      }

      pVVar2 = (Version*)( this + 0x60 );
      iVar15 = (int)lVar16;
      if (*(char*)( lVar16 + 0x91 ) != '\0') {
         ShaderRD::_initialize_version(pVVar2);
         lVar21 = *(long*)( this + 0xd8 );
         if (lVar21 != 0) {
            lVar27 = 0;
            do {
               if (*(long*)( lVar21 + -8 ) <= lVar27) break;
               if (*(char*)( lVar21 + lVar27 ) == '\0') {
                  ShaderRD::_allocate_placeholders(pVVar2, iVar15);
               }
 else {
                  ShaderRD::_compile_version_start(pVVar2, iVar15);
               }

               lVar21 = *(long*)( this + 0xd8 );
               lVar27 = lVar27 + 1;
            }
 while ( lVar21 != 0 );
         }

      }

      lVar27 = *(long*)( this + 0x98 );
      if (lVar27 == 0) goto LAB_00101ff7;
      lVar21 = *(long*)( lVar27 + -8 );
      if (lVar21 <= (long)uVar29) goto LAB_00102018;
      uVar24 = ( ulong ) * (uint*)( lVar27 + uVar29 * 4 );
      lVar27 = *(long*)( lVar16 + 0x68 );
      if (lVar27 == 0) {
         lVar21 = 0;
         goto LAB_00102018;
      }

      lVar21 = *(long*)( lVar27 + -8 );
      if (lVar21 <= (long)uVar24) goto LAB_00102018;
      if (*(long*)( lVar27 + uVar24 * 8 ) != 0) {
         ShaderRD::_compile_version_end(pVVar2, iVar15);
      }

      if (*(char*)( lVar16 + 0x90 ) == '\0') goto LAB_00101b3f;
      lVar16 = *(long*)( lVar16 + 0x88 );
      if (lVar16 == 0) goto LAB_00101ff7;
      lVar21 = *(long*)( lVar16 + -8 );
      uVar24 = uVar29;
      if (lVar21 <= (long)uVar29) goto LAB_00102018;
      lVar16 = *(long*)( lVar16 + uVar29 * 8 );
      if (lVar16 == 0) goto LAB_00101b3f;
      uVar18 = RenderingDevice::get_singleton();
      local_58[0] = 0;
      local_58[1] = 0;
      local_80 = 0;
      pvVar19 = (void*)RenderingDevice::draw_list_begin(uVar18, param_3, 0, &local_88, 0, local_58, 0);
      uVar23 = local_80;
      if (local_80 != 0) {
         LOCK();
         plVar1 = (long*)( local_80 - 0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_80 = 0;
            Memory::free_static((void*)( uVar23 - 0x10 ), false);
         }

      }

      uVar18 = RenderingDevice::get_singleton();
      pTVar3 = this + uVar29 * 0x138 + 0x1e0;
      RenderingDevice::get_singleton();
      uVar14 = RenderingDevice::draw_list_get_current_pass();
      uVar20 = RenderingDevice::get_singleton();
      lVar21 = RenderingDevice::framebuffer_get_format(uVar20, param_3);
      if (*(long*)( pTVar3 + 0x40 ) == 0) {
         _err_print_error("get_render_pipeline", "./servers/rendering/renderer_rd/pipeline_cache_rd.h", 0x49, "Condition \"shader.is_null()\" is true. Returning: RID()", "Attempted to use an unused shader variant (shader is null),", 0, 0);
         lVar21 = 0;
      }
 else {
         while (true) {
            uVar23 = local_88 >> 8;
            local_88 = uVar23 << 8;
            LOCK();
            TVar4 = *pTVar3;
            if (TVar4 == (ToneMapper)0x0) {
               *pTVar3 = (ToneMapper)0x1;
            }

            UNLOCK();
            if (TVar4 == (ToneMapper)0x0) break;
            local_88 = uVar23 << 8;
            do {} while ( *pTVar3 != (ToneMapper)0x0 );
         }
;
         if (*(uint*)( this + uVar29 * 0x138 + 0x310 ) != 0) {
            plVar22 = *(long**)( this + uVar29 * 0x138 + 0x308 );
            plVar1 = plVar22 + ( ulong ) * (uint*)( this + uVar29 * 0x138 + 0x310 ) * 5;
            do {
               if (( ( ( *plVar22 == -1 ) && ( lVar21 == plVar22[1] ) ) && ( this[uVar29 * 0x138 + 0x22e] == *(ToneMapper*)( (long)plVar22 + 0x14 ) ) ) && ( ( uVar14 == *(uint*)( plVar22 + 2 ) && ( (int)plVar22[3] == 0 ) ) )) {
                  lVar21 = plVar22[4];
                  *pTVar3 = (ToneMapper)0x0;
                  goto LAB_00102079;
               }

               plVar22 = plVar22 + 5;
            }
 while ( plVar22 != plVar1 );
         }

         lVar21 = PipelineCacheRD::_generate_version((long)pTVar3, -1, SUB81(lVar21, 0), (uint)(byte)this[uVar29 * 0x138 + 0x22e], uVar14);
         *pTVar3 = (ToneMapper)0x0;
      }

      LAB_00102079:RenderingDevice::draw_list_bind_render_pipeline(uVar18, pvVar19, lVar21);
      uVar18 = RenderingDevice::get_singleton();
      local_68[0] = 0;
      local_88 = uVar12;
      local_80 = local_80 & 0xffffffffffffff00;
      local_78 = 0;
      if (local_188[0] == 0) {
         uVar20 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar13, lVar16, 0, &local_88);
         RenderingDevice::draw_list_bind_uniform_set(uVar18, pvVar19, uVar20, 0);
      }
 else {
         CowData<RID>::_ref((CowData<RID>*)local_68, (CowData*)local_188);
         lVar21 = local_68[0];
         uVar20 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar13, lVar16, 0, &local_88);
         RenderingDevice::draw_list_bind_uniform_set(uVar18, pvVar19, uVar20, 0);
         if (lVar21 != 0) {
            LOCK();
            plVar1 = (long*)( lVar21 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_68[0] + -0x10 ), false);
            }

         }

      }

      uVar18 = RenderingDevice::get_singleton();
      local_68[0] = 0;
      local_88 = local_178;
      local_80 = CONCAT71(local_80._1_7_, local_170);
      local_78 = local_168;
      if (local_158[0] == 0) {
         uVar20 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar13, lVar16, 1, &local_88);
         RenderingDevice::draw_list_bind_uniform_set(uVar18, pvVar19, uVar20, 1);
      }
 else {
         CowData<RID>::_ref((CowData<RID>*)local_68, (CowData*)local_158);
         lVar21 = local_68[0];
         uVar20 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar13, lVar16, 1, &local_88);
         RenderingDevice::draw_list_bind_uniform_set(uVar18, pvVar19, uVar20, 1);
         if (lVar21 != 0) {
            LOCK();
            plVar1 = (long*)( lVar21 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_68[0] + -0x10 ), false);
            }

         }

      }

      uVar18 = RenderingDevice::get_singleton();
      local_68[0] = 0;
      local_88 = local_118;
      local_80 = CONCAT71(local_80._1_7_, local_110);
      local_78 = local_108;
      if (local_f8[0] != 0) {
         CowData<RID>::_ref((CowData<RID>*)local_68, (CowData*)local_f8);
      }

      local_98[0] = 0;
      local_b8 = local_148;
      local_b0 = local_140;
      local_a8 = local_138;
      if (local_128[0] == 0) {
         uVar20 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>(pUVar13, lVar16, 2, &local_b8, &local_88);
         RenderingDevice::draw_list_bind_uniform_set(uVar18, pvVar19, uVar20, 2);
      }
 else {
         CowData<RID>::_ref((CowData<RID>*)local_98, (CowData*)local_128);
         lVar21 = local_98[0];
         uVar20 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>(pUVar13, lVar16, 2, &local_b8, &local_88);
         RenderingDevice::draw_list_bind_uniform_set(uVar18, pvVar19, uVar20, 2);
         if (lVar21 != 0) {
            LOCK();
            plVar1 = (long*)( lVar21 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_98[0] + -0x10 ), false);
            }

         }

      }

      if (local_68[0] != 0) {
         LOCK();
         plVar1 = (long*)( local_68[0] + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_68[0] + -0x10 ), false);
         }

      }

      uVar18 = RenderingDevice::get_singleton();
      lVar21 = local_c8[0];
      local_68[0] = 0;
      local_88 = local_e8;
      local_80 = CONCAT71(local_80._1_7_, local_e0);
      local_78 = local_d8;
      if (local_c8[0] != 0) {
         CowData<RID>::_ref((CowData<RID>*)local_68, (CowData*)local_c8);
         lVar27 = local_68[0];
         uVar20 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar13, lVar16, 3, &local_88);
         RenderingDevice::draw_list_bind_uniform_set(uVar18, pvVar19, uVar20, 3);
         if (lVar27 != 0) {
            LOCK();
            plVar1 = (long*)( lVar27 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            lVar21 = local_c8[0];
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_68[0] + -0x10 ), false);
               lVar21 = local_c8[0];
            }

            goto LAB_001023ea;
         }

         lVar16 = RenderingDevice::get_singleton();
         RenderingDevice::draw_list_set_push_constant(lVar16, pvVar19, uVar11);
         lVar16 = RenderingDevice::get_singleton();
         RenderingDevice::draw_list_draw(lVar16, SUB81(pvVar19, 0), 0, 1);
         RenderingDevice::get_singleton();
         RenderingDevice::draw_list_end();
         LAB_00102435:LOCK();
         plVar1 = (long*)( lVar21 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_00101b80;
         goto LAB_00102441;
      }

      uVar20 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar13, lVar16, 3, &local_88);
      RenderingDevice::draw_list_bind_uniform_set(uVar18, pvVar19, uVar20, 3);
      LAB_001023ea:lVar16 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_set_push_constant(lVar16, pvVar19, uVar11);
      lVar16 = RenderingDevice::get_singleton();
      RenderingDevice::draw_list_draw(lVar16, SUB81(pvVar19, 0), 0, 1);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_list_end();
      if (lVar21 != 0) goto LAB_00102435;
   }

   LAB_00101b80:if (local_f8[0] != 0) {
      LOCK();
      plVar1 = (long*)( local_f8[0] + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_f8[0] + -0x10 ), false);
      }

   }

   if (local_128[0] != 0) {
      LOCK();
      plVar1 = (long*)( local_128[0] + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_128[0] + -0x10 ), false);
      }

   }

   if (local_158[0] != 0) {
      LOCK();
      plVar1 = (long*)( local_158[0] + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_158[0] + -0x10 ), false);
      }

   }

   if (local_188[0] != 0) {
      LOCK();
      plVar1 = (long*)( local_188[0] + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_58[3] == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static((void*)( local_188[0] + -0x10 ), false);
            return;
         }

         goto LAB_00102717;
      }

   }

   if (local_58[3] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00102717:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RendererRD::ToneMapper::tonemapper(long, RID, long, RendererRD::ToneMapper::TonemapSettings
   const&) */void RendererRD::ToneMapper::tonemapper(ToneMapper *this, void *param_1, undefined8 param_3, long param_4, char *param_5) {
   Version *pVVar1;
   long *plVar2;
   ToneMapper *pTVar3;
   ToneMapper TVar4;
   undefined4 uVar5;
   char cVar6;
   byte bVar7;
   byte bVar8;
   byte bVar9;
   byte bVar10;
   ulong uVar11;
   code *pcVar12;
   uint uVar13;
   UniformSetCacheRD *pUVar14;
   uint uVar15;
   long lVar16;
   undefined8 uVar17;
   long *plVar18;
   long lVar19;
   ulong uVar20;
   ulong uVar21;
   char *pcVar22;
   undefined8 *puVar23;
   long lVar24;
   int iVar25;
   ulong uVar26;
   long in_FS_OFFSET;
   byte bVar27;
   undefined8 uVar28;
   long local_168[2];
   ulong local_158;
   undefined1 local_150;
   long local_148;
   Vector<RID> local_140[8];
   long local_138[2];
   ulong local_128;
   undefined1 local_120;
   long local_118;
   Vector<RID> local_110[8];
   long local_108[2];
   ulong local_f8;
   undefined1 local_f0;
   long local_e8;
   Vector<RID> local_e0[8];
   long local_d8[2];
   ulong local_c8;
   undefined1 local_c0;
   long local_b8;
   Vector<RID> local_b0[8];
   long local_a8[2];
   ulong local_98;
   undefined1 local_90;
   undefined8 local_88;
   long local_78[2];
   ulong local_68;
   undefined1 local_60;
   undefined8 local_58;
   long local_48;
   long local_40;
   pUVar14 = UniformSetCacheRD::singleton;
   bVar27 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (UniformSetCacheRD::singleton == (UniformSetCacheRD*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar17 = 0xb7;
         pcVar22 = "Parameter \"uniform_set_cache\" is null.";
         LAB_00103496:_err_print_error("tonemapper", "servers/rendering/renderer_rd/effects/tone_mapper.cpp", uVar17, pcVar22, 0, 0);
         return;
      }

      goto LAB_001035d5;
   }

   lVar16 = RendererRD::MaterialStorage::get_singleton();
   if (lVar16 == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar17 = 0xb9;
         pcVar22 = "Parameter \"material_storage\" is null.";
         goto LAB_00103496;
      }

      goto LAB_001035d5;
   }

   *(undefined8*)this = 0;
   *(undefined8*)( this + 0x58 ) = 0;
   uVar13 = (uint)this;
   puVar23 = (undefined8*)( ( ulong )(this + 8) & 0xfffffffffffffff8 );
   for (uVar20 = ( ulong )(( uVar13 - (int)(undefined8*)( ( ulong )(this + 8) & 0xfffffffffffffff8 ) ) + 0x60 >> 3); uVar20 != 0; uVar20 = uVar20 - 1) {
      *puVar23 = 0;
      puVar23 = puVar23 + (ulong)bVar27 * -2 + 1;
   }

   bVar27 = param_5[0x6c];
   cVar6 = *param_5;
   *(undefined4*)this = *(undefined4*)( param_5 + 0x70 );
   uVar5 = *(undefined4*)( param_5 + 0x74 );
   *(uint*)( this + 0xc ) = (uint)bVar27;
   *(undefined4*)( this + 4 ) = uVar5;
   *(undefined4*)( this + 8 ) = *(undefined4*)( param_5 + 0x78 );
   uVar20 = _LC76;
   if (cVar6 == '\0') {
      iVar25 = (byte)param_5[0x7d] + 10;
      if (*(uint*)( param_5 + 0x94 ) < 2) {
         iVar25 = (byte)param_5[0x7d] + 4;
      }

      bVar7 = param_5[0x54];
      uVar5 = *(undefined4*)( param_5 + 0x4c );
      *(undefined4*)( this + 0x18 ) = *(undefined4*)( param_5 + 0x48 );
      bVar8 = param_5[0x7c];
      *(undefined4*)( this + 0x50 ) = uVar5;
      uVar11 = _LC66;
      uVar17 = *(undefined8*)( param_5 + 0x60 );
      bVar9 = param_5[0x89];
      *(undefined4*)( this + 0x54 ) = *(undefined4*)( param_5 + 0x50 );
      local_168[0] = 0;
      *(undefined4*)( this + 0x58 ) = *(undefined4*)( param_5 + 0x58 );
      bVar10 = param_5[0x98];
      local_150 = 0;
      local_138[0] = 0;
      local_158 = uVar11;
      *(undefined4*)( this + 0x5c ) = *(undefined4*)( param_5 + 0x68 );
      *(uint*)( this + 0xc ) = (uint)bVar8 << 3 | (uint)bVar7 << 2 | (uint)bVar27 | (uint)bVar9 << 5 | (uint)bVar10 << 6;
      lVar19 = *(long*)( lVar16 + 0x50 );
      lVar16 = *(long*)( lVar16 + 0x90 );
      local_148 = uVar17;
      if (lVar19 != 0) {
         local_148 = lVar19;
         Vector<RID>::push_back(local_140, lVar19);
         Vector<RID>::push_back(local_140, uVar17);
         local_148 = 0;
      }

      local_120 = 0;
      uVar17 = *(undefined8*)( param_5 + 0x38 );
      local_108[0] = 0;
      local_128 = uVar11;
      if (lVar16 == 0) {
         local_e8 = *(long*)( param_5 + 0x40 );
         local_f0 = 0;
         local_d8[0] = 0;
         local_f8 = _LC67;
         local_118 = uVar17;
      }
 else {
         local_118 = lVar16;
         Vector<RID>::push_back(local_110, lVar16);
         Vector<RID>::push_back(local_110, uVar17);
         uVar17 = *(undefined8*)( param_5 + 0x40 );
         local_f8 = _LC67;
         local_118 = 0;
         local_f0 = 0;
         local_d8[0] = 0;
         local_e8 = lVar16;
         Vector<RID>::push_back(local_e0, lVar16);
         Vector<RID>::push_back(local_e0, uVar17);
         local_e8 = 0;
      }

      local_c8 = uVar11;
      uVar17 = *(undefined8*)( param_5 + 0x80 );
      local_c0 = 0;
      local_a8[0] = 0;
      local_b8 = uVar17;
      if (lVar19 != 0) {
         local_b8 = lVar19;
         Vector<RID>::push_back(local_b0, lVar19);
         Vector<RID>::push_back(local_b0, uVar17);
         local_b8 = 0;
      }

      uVar11 = *(ulong*)( this + 0x1d8 );
      uVar26 = (ulong)iVar25;
      if (*(long*)( this + 0x78 ) == 0) {
         lVar16 = 0;
         LAB_00102c75:_err_print_index_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa6, uVar26, lVar16, "p_variant", "variant_defines.size()", "", false, false);
         LAB_00102cb0:_err_print_error("tonemapper", "servers/rendering/renderer_rd/effects/tone_mapper.cpp", 0xf9, "Condition \"shader.is_null()\" is true.", 0, 0);
         if (local_a8[0] != 0) {
            LOCK();
            plVar2 = (long*)( local_a8[0] + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               LAB_0010325e:Memory::free_static((void*)( local_a8[0] + -0x10 ), false);
            }

         }

      }
 else {
         lVar16 = *(long*)( *(long*)( this + 0x78 ) + -8 );
         if (lVar16 <= (long)uVar26) goto LAB_00102c75;
         lVar16 = *(long*)( this + 0x88 );
         uVar21 = uVar26;
         if (lVar16 == 0) {
            LAB_00103415:lVar19 = 0;
            uVar21 = uVar26;
            LAB_00103436:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar21, lVar19, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar12 = (code*)invalidInstructionException();
            ( *pcVar12 )();
         }

         lVar19 = *(long*)( lVar16 + -8 );
         if (lVar19 <= (long)uVar26) goto LAB_00103436;
         if (*(char*)( lVar16 + uVar26 ) == '\0') {
            _err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa7, "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()", 0, 0);
            goto LAB_00102cb0;
         }

         if (( uVar11 == 0 ) || ( *(uint*)( this + 0x134 ) <= (uint)uVar11 )) {
            LAB_0010354e:_err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xaa, "Parameter \"version\" is null.", 0, 0);
            goto LAB_00102cb0;
         }

         lVar16 = ( ( uVar11 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0xa0 + *(long*)( *(long*)( this + 0x120 ) + ( ( uVar11 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
         if (*(int*)( lVar16 + 0x98 ) != (int)( uVar11 >> 0x20 )) {
            if (*(int*)( lVar16 + 0x98 ) + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

            goto LAB_0010354e;
         }

         pVVar1 = (Version*)( this + 0x60 );
         iVar25 = (int)lVar16;
         if (*(char*)( lVar16 + 0x91 ) != '\0') {
            ShaderRD::_initialize_version(pVVar1);
            lVar19 = *(long*)( this + 0xd8 );
            if (lVar19 != 0) {
               lVar24 = 0;
               do {
                  if (*(long*)( lVar19 + -8 ) <= lVar24) break;
                  if (*(char*)( lVar19 + lVar24 ) == '\0') {
                     ShaderRD::_allocate_placeholders(pVVar1, iVar25);
                  }
 else {
                     ShaderRD::_compile_version_start(pVVar1, iVar25);
                  }

                  lVar19 = *(long*)( this + 0xd8 );
                  lVar24 = lVar24 + 1;
               }
 while ( lVar19 != 0 );
            }

         }

         lVar24 = *(long*)( this + 0x98 );
         if (lVar24 == 0) goto LAB_00103415;
         lVar19 = *(long*)( lVar24 + -8 );
         if (lVar19 <= (long)uVar26) goto LAB_00103436;
         uVar21 = ( ulong ) * (uint*)( lVar24 + uVar26 * 4 );
         lVar24 = *(long*)( lVar16 + 0x68 );
         if (lVar24 == 0) {
            lVar19 = 0;
            goto LAB_00103436;
         }

         lVar19 = *(long*)( lVar24 + -8 );
         if (lVar19 <= (long)uVar21) goto LAB_00103436;
         if (*(long*)( lVar24 + uVar21 * 8 ) != 0) {
            ShaderRD::_compile_version_end(pVVar1, iVar25);
         }

         if (*(char*)( lVar16 + 0x90 ) == '\0') goto LAB_00102cb0;
         lVar16 = *(long*)( lVar16 + 0x88 );
         if (lVar16 == 0) goto LAB_00103415;
         lVar19 = *(long*)( lVar16 + -8 );
         uVar21 = uVar26;
         if (lVar19 <= (long)uVar26) goto LAB_00103436;
         lVar16 = *(long*)( lVar16 + uVar26 * 8 );
         if (lVar16 == 0) goto LAB_00102cb0;
         uVar17 = RenderingDevice::get_singleton();
         pTVar3 = this + uVar26 * 0x138 + 0x1e0;
         RenderingDevice::get_singleton();
         uVar28 = 0x102aad;
         uVar15 = RenderingDevice::draw_list_get_current_pass();
         local_58 = param_3;
         if (*(long*)( pTVar3 + 0x40 ) == 0) {
            _err_print_error("get_render_pipeline", "./servers/rendering/renderer_rd/pipeline_cache_rd.h", 0x49, "Condition \"shader.is_null()\" is true. Returning: RID()", "Attempted to use an unused shader variant (shader is null),", 0, 0);
            RenderingDevice::draw_list_bind_render_pipeline(uVar17, param_1, 0);
            uVar17 = RenderingDevice::get_singleton();
            local_68 = _LC76;
            LAB_001033ec:local_60 = 0;
            local_48 = 0;
            uVar28 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar14, lVar16, 0, &local_68, uVar28);
            RenderingDevice::draw_list_bind_uniform_set(uVar17, param_1, uVar28, 0);
         }
 else {
            while (true) {
               uVar11 = local_68 >> 8;
               local_68 = uVar11 << 8;
               LOCK();
               TVar4 = *pTVar3;
               if (TVar4 == (ToneMapper)0x0) {
                  *pTVar3 = (ToneMapper)0x1;
               }

               UNLOCK();
               if (TVar4 == (ToneMapper)0x0) break;
               local_68 = uVar11 << 8;
               do {} while ( *pTVar3 != (ToneMapper)0x0 );
            }
;
            if (*(uint*)( this + uVar26 * 0x138 + 0x310 ) != 0) {
               plVar18 = *(long**)( this + uVar26 * 0x138 + 0x308 );
               plVar2 = plVar18 + ( ulong ) * (uint*)( this + uVar26 * 0x138 + 0x310 ) * 5;
               do {
                  if (( ( ( *plVar18 == -1 ) && ( param_4 == plVar18[1] ) ) && ( this[uVar26 * 0x138 + 0x22e] == *(ToneMapper*)( (long)plVar18 + 0x14 ) ) ) && ( ( uVar15 == *(uint*)( plVar18 + 2 ) && ( (int)plVar18[3] == 0 ) ) )) {
                     lVar19 = plVar18[4];
                     goto LAB_00102e58;
                  }

                  plVar18 = plVar18 + 5;
               }
 while ( plVar2 != plVar18 );
            }

            lVar19 = PipelineCacheRD::_generate_version((long)pTVar3, -1, SUB81(param_4, 0), (uint)(byte)this[uVar26 * 0x138 + 0x22e], uVar15);
            LAB_00102e58:lVar24 = local_168[0];
            *pTVar3 = (ToneMapper)0x0;
            RenderingDevice::draw_list_bind_render_pipeline(uVar17, param_1, lVar19);
            uVar17 = RenderingDevice::get_singleton();
            uVar28 = 0;
            local_48 = 0;
            local_68 = uVar20;
            local_60 = 0;
            if (lVar24 == 0) goto LAB_001033ec;
            CowData<RID>::_ref((CowData<RID>*)&local_48, (CowData*)local_168);
            lVar19 = local_48;
            uVar28 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar14, lVar16, 0, &local_68);
            RenderingDevice::draw_list_bind_uniform_set(uVar17, param_1, uVar28, 0);
            if (lVar19 != 0) {
               LOCK();
               plVar2 = (long*)( lVar19 + -0x10 );
               *plVar2 = *plVar2 + -1;
               UNLOCK();
               if (*plVar2 == 0) {
                  Memory::free_static((void*)( local_48 + -0x10 ), false);
               }

            }

         }

         uVar17 = RenderingDevice::get_singleton();
         local_48 = 0;
         local_68 = local_158;
         local_60 = local_150;
         local_58 = local_148;
         if (local_138[0] == 0) {
            uVar28 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar14, lVar16, 1, &local_68);
            RenderingDevice::draw_list_bind_uniform_set(uVar17, param_1, uVar28, 1);
         }
 else {
            CowData<RID>::_ref((CowData<RID>*)&local_48, (CowData*)local_138);
            lVar19 = local_48;
            uVar28 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar14, lVar16, 1, &local_68);
            RenderingDevice::draw_list_bind_uniform_set(uVar17, param_1, uVar28, 1);
            if (lVar19 != 0) {
               LOCK();
               plVar2 = (long*)( lVar19 + -0x10 );
               *plVar2 = *plVar2 + -1;
               UNLOCK();
               if (*plVar2 == 0) {
                  Memory::free_static((void*)( local_48 + -0x10 ), false);
               }

            }

         }

         uVar17 = RenderingDevice::get_singleton();
         local_48 = 0;
         local_68 = local_f8;
         local_60 = local_f0;
         local_58 = local_e8;
         if (local_d8[0] != 0) {
            CowData<RID>::_ref((CowData<RID>*)&local_48, (CowData*)local_d8);
         }

         local_78[0] = 0;
         local_98 = local_128;
         local_90 = local_120;
         local_88 = local_118;
         if (local_108[0] == 0) {
            uVar28 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>(pUVar14, lVar16, 2, &local_98, &local_68);
            RenderingDevice::draw_list_bind_uniform_set(uVar17, param_1, uVar28, 2);
         }
 else {
            CowData<RID>::_ref((CowData<RID>*)local_78, (CowData*)local_108);
            lVar19 = local_78[0];
            uVar28 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform,RenderingDevice::Uniform>(pUVar14, lVar16, 2, &local_98, &local_68);
            RenderingDevice::draw_list_bind_uniform_set(uVar17, param_1, uVar28, 2);
            if (lVar19 != 0) {
               LOCK();
               plVar2 = (long*)( lVar19 + -0x10 );
               *plVar2 = *plVar2 + -1;
               UNLOCK();
               if (*plVar2 == 0) {
                  Memory::free_static((void*)( local_78[0] + -0x10 ), false);
               }

            }

         }

         if (local_48 != 0) {
            LOCK();
            plVar2 = (long*)( local_48 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               Memory::free_static((void*)( local_48 + -0x10 ), false);
            }

         }

         uVar17 = RenderingDevice::get_singleton();
         lVar19 = local_a8[0];
         local_48 = 0;
         local_68 = local_c8;
         local_60 = local_c0;
         local_58 = local_b8;
         if (local_a8[0] != 0) {
            CowData<RID>::_ref((CowData<RID>*)&local_48, (CowData*)local_a8);
            lVar24 = local_48;
            uVar28 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar14, lVar16, 3, &local_68);
            RenderingDevice::draw_list_bind_uniform_set(uVar17, param_1, uVar28, 3);
            if (lVar24 != 0) {
               LOCK();
               plVar2 = (long*)( lVar24 + -0x10 );
               *plVar2 = *plVar2 + -1;
               UNLOCK();
               lVar19 = local_a8[0];
               if (*plVar2 == 0) {
                  Memory::free_static((void*)( local_48 + -0x10 ), false);
                  lVar19 = local_a8[0];
               }

               goto LAB_00103213;
            }

            lVar16 = RenderingDevice::get_singleton();
            RenderingDevice::draw_list_set_push_constant(lVar16, param_1, uVar13);
            lVar16 = RenderingDevice::get_singleton();
            RenderingDevice::draw_list_draw(lVar16, SUB81(param_1, 0), 0, 1);
            LAB_00103251:LOCK();
            plVar2 = (long*)( lVar19 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 != 0) goto LAB_00102cf0;
            goto LAB_0010325e;
         }

         uVar28 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(pUVar14, lVar16, 3, &local_68);
         RenderingDevice::draw_list_bind_uniform_set(uVar17, param_1, uVar28, 3);
         LAB_00103213:lVar16 = RenderingDevice::get_singleton();
         RenderingDevice::draw_list_set_push_constant(lVar16, param_1, uVar13);
         lVar16 = RenderingDevice::get_singleton();
         RenderingDevice::draw_list_draw(lVar16, SUB81(param_1, 0), 0, 1);
         if (lVar19 != 0) goto LAB_00103251;
      }

      LAB_00102cf0:if (local_d8[0] != 0) {
         LOCK();
         plVar2 = (long*)( local_d8[0] + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 == 0) {
            Memory::free_static((void*)( local_d8[0] + -0x10 ), false);
         }

      }

      if (local_108[0] != 0) {
         LOCK();
         plVar2 = (long*)( local_108[0] + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 == 0) {
            Memory::free_static((void*)( local_108[0] + -0x10 ), false);
         }

      }

      if (local_138[0] != 0) {
         LOCK();
         plVar2 = (long*)( local_138[0] + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 == 0) {
            Memory::free_static((void*)( local_138[0] + -0x10 ), false);
         }

      }

      if (local_168[0] != 0) {
         LOCK();
         plVar2 = (long*)( local_168[0] + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 == 0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Memory::free_static((void*)( local_168[0] + -0x10 ), false);
               return;
            }

            goto LAB_001035d5;
         }

      }

   }
 else {
      _err_print_error("tonemapper", "servers/rendering/renderer_rd/effects/tone_mapper.cpp", 0xc2, "Condition \"p_settings.use_glow\" is true.", "Glow is not supported when using subpasses.", 0, 0);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001035d5:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* TonemapShaderRD::~TonemapShaderRD() */void TonemapShaderRD::~TonemapShaderRD(TonemapShaderRD *this) {
   *(undefined***)this = &PTR__TonemapShaderRD_001064f0;
   ShaderRD::~ShaderRD((ShaderRD*)this);
   return;
}
/* TonemapShaderRD::~TonemapShaderRD() */void TonemapShaderRD::~TonemapShaderRD(TonemapShaderRD *this) {
   *(undefined***)this = &PTR__TonemapShaderRD_001064f0;
   ShaderRD::~ShaderRD((ShaderRD*)this);
   operator_delete(this, 0x178);
   return;
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
         uVar7 = _LC12;
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
               LAB_00103a83:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar15, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            lVar15 = *(long*)( lVar2 + -8 );
            if (lVar15 <= lVar9) goto LAB_00103a83;
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
      LAB_001040d0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_001040d0;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_00103fa9:if (lVar10 != lVar7) {
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
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_00103fa9;
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
      goto LAB_00104126;
   }

   if (lVar10 == lVar7) {
      LAB_0010404f:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_00104126:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_0010403a;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_0010404f;
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
   LAB_0010403a:puVar9[-1] = param_1;
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
      LAB_00104850:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar7 == 0) goto LAB_00104850;
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
      LAB_001047bc:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar9[-1];
      if (param_1 <= lVar3) goto LAB_00104751;
   }
 else {
      if (lVar8 != 0) {
         uVar6 = _realloc(this, lVar7);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         goto LAB_001047bc;
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
   LAB_00104751:puVar9[-1] = param_1;
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
      LAB_00104c50:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar11 == 0) goto LAB_00104c50;
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
      LAB_00104bbc:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar4 = puVar9[-1];
      if (param_1 <= lVar4) goto LAB_00104b53;
   }
 else {
      if (lVar10 != 0) {
         uVar8 = _realloc(this, lVar11);
         if ((int)uVar8 != 0) {
            return uVar8;
         }

         goto LAB_00104bbc;
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

   uVar3 = _LC27;
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
   LAB_00104b53:puVar9[-1] = param_1;
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
      LAB_00104ff0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar11 == 0) goto LAB_00104ff0;
   if (param_1 <= lVar8) {
      lVar8 = *(long*)this;
      uVar10 = param_1;
      while (lVar8 != 0) {
         if (*(ulong*)( lVar8 + -8 ) <= uVar10) {
            LAB_00104e81:if (lVar11 != lVar9) {
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
            if (*(ulong*)( lVar8 + -8 ) <= uVar10) goto LAB_00104e81;
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
      goto LAB_00105046;
   }

   if (lVar11 == lVar9) {
      LAB_00104f63:puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) {
         LAB_00105046:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar8 = puVar7[-1];
      if (param_1 <= lVar8) goto LAB_00104f40;
   }
 else {
      if (lVar8 != 0) {
         uVar4 = _realloc(this, lVar11);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_00104f63;
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

   uVar4 = _LC12;
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
   LAB_00104f40:puVar7[-1] = param_1;
   return 0;
}
/* RID UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(RID, unsigned int,
   RenderingDevice::Uniform) */undefined8 UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(UniformSetCacheRD *this, long param_2, int param_3, ulong *param_4) {
   long *plVar1;
   long lVar2;
   int *piVar3;
   long lVar4;
   code *pcVar5;
   undefined8 uVar6;
   uint uVar7;
   int iVar8;
   uint uVar9;
   undefined8 uVar10;
   ulong uVar11;
   long lVar12;
   ulong uVar13;
   ulong uVar14;
   ulong uVar15;
   long in_FS_OFFSET;
   int iVar17;
   undefined1 auVar16[16];
   Vector<RenderingDevice::Uniform> local_78[8];
   undefined8 local_70;
   undefined8 local_68;
   undefined1 local_60;
   ulong local_58;
   long local_48;
   long local_40;
   iVar8 = (int)( (ulong)param_2 >> 0x20 );
   auVar16._8_8_ = 0;
   auVar16._0_8_ = *param_4;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar17 = (int)( *param_4 >> 0x20 );
   uVar7 = ( (int)param_2 * 0x16a88000 | ( uint )((int)param_2 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
   uVar7 = ( iVar8 * 0x16a88000 | ( uint )(iVar8 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ ( uVar7 << 0xd | uVar7 >> 0x13 ) * 5 + 0xe6546b64;
   uVar7 = ( param_3 * 0x16a88000 | ( uint )(param_3 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ ( uVar7 << 0xd | uVar7 >> 0x13 ) * 5 + 0xe6546b64;
   uVar7 = ( (int)*param_4 * 0x16a88000 | ( uint )((int)*param_4 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ ( uVar7 << 0xd | uVar7 >> 0x13 ) * 5 + 0xe6546b64;
   uVar7 = ( iVar17 * 0x16a88000 | ( uint )(iVar17 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ ( uVar7 << 0xd | uVar7 >> 0x13 ) * 5 + 0xe6546b64;
   uVar7 = ( uVar7 << 0xd | uVar7 >> 0x13 ) * 5 + 0xe6546b64;
   uVar11 = param_4[2];
   if (uVar11 != 0) {
      uVar14 = 1;
      LAB_00105456:uVar15 = 0;
      do {
         if (uVar11 == 0) {
            uVar11 = param_4[4];
            if (uVar11 == 0) {
               lVar12 = 0;
               LAB_00105561:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar15, lVar12, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar5 = (code*)invalidInstructionException();
               ( *pcVar5 )();
            }

            lVar12 = *(long*)( uVar11 - 8 );
            if (lVar12 <= (long)uVar15) goto LAB_00105561;
            uVar11 = *(ulong*)( uVar11 + uVar15 * 8 );
            LAB_00105479:iVar8 = (int)( uVar11 >> 0x20 );
            uVar9 = ( iVar8 * 0x16a88000 | ( uint )(iVar8 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
            uVar7 = uVar7 ^ ( (int)uVar11 * 0x16a88000 | ( uint )((int)uVar11 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
         }
 else {
            if (uVar15 == 0) goto LAB_00105479;
            _err_print_error("get_id", "./servers/rendering/rendering_device.h", 0x3ca, "Condition \"p_idx != 0\" is true. Returning: RID()", 0, 0);
            uVar9 = 0;
         }

         uVar15 = uVar15 + 1;
         uVar9 = uVar9 ^ ( uVar7 << 0xd | uVar7 >> 0x13 ) * 5 + 0xe6546b64;
         uVar7 = ( uVar9 << 0xd | uVar9 >> 0x13 ) * 5 + 0xe6546b64;
         if (uVar15 == uVar14) goto LAB_001054e0;
         uVar11 = param_4[2];
      }
 while ( true );
   }

   if (( param_4[4] != 0 ) && ( uVar15 = *(ulong*)( param_4[4] - 8 ) ),uVar14 = uVar15 & 0xffffffff,(int)uVar15 != 0) goto LAB_00105456;
   goto LAB_001051c0;
   LAB_001054e0:auVar16._8_8_ = 0;
   auVar16._0_8_ = *param_4;
   LAB_001051c0:uVar7 = ( uVar7 >> 0x10 ^ uVar7 ) * -0x7a143595;
   uVar7 = ( uVar7 ^ uVar7 >> 0xd ) * -0x3d4d51cb;
   uVar7 = uVar7 ^ uVar7 >> 0x10;
   lVar2 = *(long*)( this + ( ulong )(uVar7 % 0x3ffd) * 8 + 0x1e0 );
   uVar6 = auVar16._0_8_;
   uVar10 = local_68;
   joined_r0x00105223:local_68 = uVar6;
   if (lVar2 == 0) {
      local_60 = (undefined1)param_4[1];
      local_70 = 0;
      local_48 = 0;
      local_58 = param_4[2];
      if (param_4[4] == 0) {
         Vector<RenderingDevice::Uniform>::push_back(local_78, &local_68);
      }
 else {
         CowData<RID>::_ref((CowData<RID>*)&local_48, (CowData*)( param_4 + 4 ));
         lVar12 = local_48;
         Vector<RenderingDevice::Uniform>::push_back(local_78);
         if (lVar12 != 0) {
            LOCK();
            plVar1 = (long*)( lVar12 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_48 + -0x10 ), false);
            }

         }

      }

      uVar10 = _allocate_from_uniforms<Vector<RenderingDevice::Uniform>>(this, param_2, param_3, uVar7, uVar7 % 0x3ffd, local_78);
      CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)&local_70);
      LAB_00105423:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar10;
   }

   local_68 = uVar10;
   if (( ( ( *(uint*)( lVar2 + 0x10 ) == uVar7 ) && ( *(int*)( lVar2 + 0x20 ) == param_3 ) ) && ( param_2 == *(long*)( lVar2 + 0x18 ) ) ) && ( *(int*)( lVar2 + 0x30 ) == 1 )) {
      piVar3 = *(int**)( lVar2 + 0x38 );
      if (( auVar16._4_4_ == piVar3[1] ) && ( auVar16._0_4_ == *piVar3 )) {
         uVar11 = param_4[2];
         if (*(long*)( piVar3 + 4 ) == 0) {
            if (*(long*)( piVar3 + 8 ) == 0) {
               if (uVar11 != 0) goto LAB_00105230;
               if (param_4[4] != 0) {
                  uVar9 = *(uint*)( param_4[4] - 8 );
                  joined_r0x001056e9:if (uVar9 != 0) goto LAB_00105230;
               }

               LAB_0010560d:uVar10 = *(undefined8*)( lVar2 + 0x28 );
               goto LAB_00105423;
            }

            uVar9 = ( uint ) * (undefined8*)( *(long*)( piVar3 + 8 ) + -8 );
            if (uVar11 == 0) {
               if (param_4[4] == 0) goto joined_r0x001056e9;
               if (*(uint*)( param_4[4] - 8 ) == uVar9) {
                  if (uVar9 != 0) goto LAB_001052a6;
                  goto LAB_0010560d;
               }

            }
 else if (uVar9 == 1) goto LAB_001052a6;
         }
 else {
            uVar9 = 1;
            if (uVar11 != 0) {
               LAB_001052a6:uVar14 = 0;
               do {
                  uVar15 = uVar14;
                  if (uVar11 == 0) {
                     uVar11 = param_4[4];
                     if (uVar11 == 0) {
                        lVar12 = 0;
                        goto LAB_00105561;
                     }

                     lVar12 = *(long*)( uVar11 - 8 );
                     if (lVar12 <= (long)uVar14) goto LAB_00105561;
                     uVar11 = *(ulong*)( uVar11 + uVar14 * 8 );
                     uVar13 = *(ulong*)( piVar3 + 4 );
                     if (uVar13 == 0) goto LAB_001052e3;
                     if (uVar14 != 0) goto LAB_00105364;
                  }
 else if (uVar14 == 0) {
                     uVar13 = *(ulong*)( piVar3 + 4 );
                     uVar15 = 0;
                     if (uVar13 == 0) {
                        LAB_001052e3:lVar4 = *(long*)( piVar3 + 8 );
                        if (lVar4 == 0) {
                           lVar12 = 0;
                           goto LAB_00105561;
                        }

                        lVar12 = *(long*)( lVar4 + -8 );
                        if (lVar12 <= (long)uVar15) goto LAB_00105561;
                        uVar13 = *(ulong*)( lVar4 + uVar14 * 8 );
                     }

                  }
 else {
                     _err_print_error("get_id", "./servers/rendering/rendering_device.h", 0x3ca, "Condition \"p_idx != 0\" is true. Returning: RID()", 0, 0);
                     if (*(long*)( piVar3 + 4 ) == 0) {
                        uVar11 = 0;
                        goto LAB_001052e3;
                     }

                     uVar11 = 0;
                     LAB_00105364:_err_print_error("get_id", "./servers/rendering/rendering_device.h", 0x3ca, "Condition \"p_idx != 0\" is true. Returning: RID()", 0, 0);
                     uVar13 = 0;
                  }

                  if (uVar13 != uVar11) goto LAB_0010570b;
                  uVar14 = uVar14 + 1;
                  if (uVar9 <= (uint)uVar14) goto LAB_0010560d;
                  uVar11 = param_4[2];
               }
 while ( true );
            }

            if (( param_4[4] != 0 ) && ( (int)*(undefined8*)( param_4[4] - 8 ) == 1 )) {
               uVar9 = 1;
               goto LAB_001052a6;
            }

         }

      }

   }

   LAB_00105230:lVar2 = *(long*)( lVar2 + 8 );
   uVar6 = auVar16._0_8_;
   uVar10 = local_68;
   goto joined_r0x00105223;
   LAB_0010570b:auVar16._8_8_ = 0;
   auVar16._0_8_ = *param_4;
   goto LAB_00105230;
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
      LAB_001059fd:uVar21 = 0;
      do {
         uVar14 = (uint)uVar9;
         if (lVar13 == 0) {
            lVar13 = *(long*)( param_4 + 8 );
            if (lVar13 == 0) goto LAB_00105a80;
            lVar17 = *(long*)( lVar13 + -8 );
            if (lVar17 <= (long)uVar21) goto LAB_00105aa1;
            lVar13 = *(long*)( lVar13 + uVar21 * 8 );
            LAB_00105a11:iVar8 = (int)( (ulong)lVar13 >> 0x20 );
            uVar15 = ( iVar8 * 0x16a88000 | ( uint )(iVar8 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
            uVar14 = uVar14 ^ ( (int)lVar13 * 0x16a88000 | ( uint )((int)lVar13 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
         }
 else {
            if (uVar21 == 0) goto LAB_00105a11;
            _err_print_error("get_id", "./servers/rendering/rendering_device.h", 0x3ca, "Condition \"p_idx != 0\" is true. Returning: RID()", 0, 0);
            uVar15 = 0;
         }

         uVar21 = uVar21 + 1;
         uVar15 = ( uVar14 << 0xd | uVar14 >> 0x13 ) * 5 + 0xe6546b64 ^ uVar15;
         uVar9 = ( ulong )(( uVar15 << 0xd | uVar15 >> 0x13 ) * 5 + 0xe6546b64);
         if (uVar21 == uVar7) goto LAB_001058a0;
         lVar13 = *(long*)( param_4 + 4 );
      }
 while ( true );
   }

   if (( *(long*)( param_4 + 8 ) != 0 ) && ( uVar7 = uVar7 != 0 )) goto LAB_001059fd;
   LAB_001058a0:lVar19 = local_48;
   lVar13 = local_58;
   uVar7 = ( ( uint )(uVar9 >> 0x10) ^ (uint)uVar9 ) * -0x7a143595;
   uVar7 = ( uVar7 ^ uVar7 >> 0xd ) * -0x3d4d51cb;
   uVar14 = ( (int)local_68 * 0x16a88000 | ( uint )((int)local_68 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ uVar7;
   uVar7 = ( ( uVar7 >> 0x10 ^ uVar14 ) << 0xd | uVar14 >> 0x13 ) * 5 + 0xe6546b64 ^ ( local_68._4_4_ * 0x16a88000 | ( uint )(local_68._4_4_ * -0x3361d2af) >> 0x11 ) * 0x1b873593;
   uVar7 = ( uVar7 << 0xd | uVar7 >> 0x13 ) * 5 + 0xe6546b64;
   if (local_58 == 0) {
      if (local_48 != 0) {
         uVar9 = *(ulong*)( local_48 + -8 ) & 0xffffffff;
         if ((int)*(ulong*)( local_48 + -8 ) != 0) goto LAB_0010592f;
         uVar7 = ( uVar7 >> 0x10 ^ uVar7 ) * -0x7a143595;
         uVar7 = ( uVar7 >> 0xd ^ uVar7 ) * -0x3d4d51cb;
         uVar9 = ( ulong )(uVar7 ^ uVar7 >> 0x10);
         goto LAB_00105b36;
      }

      uVar7 = ( uVar7 >> 0x10 ^ uVar7 ) * -0x7a143595;
      uVar7 = ( uVar7 ^ uVar7 >> 0xd ) * -0x3d4d51cb;
      uVar9 = ( ulong )(uVar7 ^ uVar7 >> 0x10);
   }
 else {
      uVar9 = 1;
      LAB_0010592f:iVar16 = (int)local_58;
      uVar21 = 0;
      iVar8 = (int)( (ulong)local_58 >> 0x20 );
      do {
         if (lVar13 == 0) {
            if (lVar19 == 0) {
               LAB_00105a80:lVar17 = 0;
               LAB_00105aa1:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar21, lVar17, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar5 = (code*)invalidInstructionException();
               ( *pcVar5 )();
            }

            lVar17 = *(long*)( lVar19 + -8 );
            if (lVar17 <= (long)uVar21) goto LAB_00105aa1;
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
         LAB_00105b36:LOCK();
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
            if (piVar18[1] != param_4[1]) goto LAB_00105ba8;
            LAB_00105c3b:if (*piVar18 == *param_4) {
               lVar19 = *(long*)( param_4 + 4 );
               if (*(long*)( piVar18 + 4 ) == 0) {
                  if (*(long*)( piVar18 + 8 ) == 0) {
                     if (lVar19 == 0) {
                        if (*(long*)( param_4 + 8 ) != 0) {
                           local_e8 = *(uint*)( *(long*)( param_4 + 8 ) + -8 );
                           joined_r0x00106453:if (local_e8 != 0) goto LAB_00105c76;
                        }

                        LAB_0010613a:lVar19 = local_58;
                        uVar21 = ( ulong ) * (uint*)( lVar13 + 0x30 );
                        if (*(uint*)( lVar13 + 0x30 ) < 2) {
                           lVar13 = 1;
                           LAB_00105fed:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xae, lVar13, uVar21, "p_index", "count", "", false, true);
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
                                    goto LAB_00105ea1;
                                 }

                                 if (lVar19 == 0) {
                                    if (local_48 == 0) {
                                       LAB_00106489:lVar17 = 0;
                                    }
 else {
                                       lVar17 = *(long*)( local_48 + -8 );
                                       if ((long)uVar21 < lVar17) {
                                          lVar20 = *(long*)( local_48 + uVar21 * 8 );
                                          lVar17 = *(long*)( lVar3 + 0x38 );
                                          if (lVar17 == 0) goto LAB_001061f7;
                                          if (uVar21 != 0) goto LAB_001063ee;
                                          goto LAB_00106215;
                                       }

                                    }

                                    goto LAB_00105aa1;
                                 }

                                 if (uVar21 == 0) {
                                    lVar17 = *(long*)( lVar3 + 0x38 );
                                    lVar20 = lVar19;
                                    if (lVar17 == 0) {
                                       LAB_001061f7:lVar4 = *(long*)( lVar3 + 0x48 );
                                       if (lVar4 == 0) goto LAB_00106489;
                                       lVar17 = *(long*)( lVar4 + -8 );
                                       if (lVar17 <= (long)uVar21) goto LAB_00105aa1;
                                       lVar17 = *(long*)( lVar4 + uVar21 * 8 );
                                    }

                                 }
 else {
                                    _err_print_error("get_id", "./servers/rendering/rendering_device.h", 0x3ca, "Condition \"p_idx != 0\" is true. Returning: RID()", 0, 0);
                                    lVar20 = *(long*)( lVar3 + 0x38 );
                                    if (lVar20 == 0) goto LAB_001061f7;
                                    lVar20 = 0;
                                    LAB_001063ee:_err_print_error("get_id", "./servers/rendering/rendering_device.h", 0x3ca, "Condition \"p_idx != 0\" is true. Returning: RID()", 0, 0);
                                    lVar17 = 0;
                                 }

                                 LAB_00106215:uVar21 = uVar21 + 1;
                              }
 while ( lVar17 == lVar20 );
                           }

                        }

                     }

                  }
 else {
                     local_e8 = ( uint ) * (undefined8*)( *(long*)( piVar18 + 8 ) + -8 );
                     if (lVar19 == 0) {
                        if (*(long*)( param_4 + 8 ) == 0) goto joined_r0x00106453;
                        if (*(uint*)( *(long*)( param_4 + 8 ) + -8 ) == local_e8) {
                           if (local_e8 != 0) goto LAB_00106018;
                           goto LAB_0010613a;
                        }

                     }
 else {
                        joined_r0x00105c70:if (local_e8 == 1) {
                           LAB_00106018:uVar22 = 0;
                           do {
                              uVar21 = uVar22;
                              if (lVar19 == 0) {
                                 lVar19 = *(long*)( param_4 + 8 );
                                 if (lVar19 == 0) {
                                    lVar17 = 0;
                                    goto LAB_00105aa1;
                                 }

                                 lVar17 = *(long*)( lVar19 + -8 );
                                 if (lVar17 <= (long)uVar22) goto LAB_00105aa1;
                                 lVar19 = *(long*)( lVar19 + uVar22 * 8 );
                                 lVar17 = *(long*)( piVar18 + 4 );
                                 if (lVar17 == 0) goto LAB_0010604e;
                                 if (uVar22 != 0) goto LAB_001060d3;
                              }
 else if (uVar22 == 0) {
                                 lVar17 = *(long*)( piVar18 + 4 );
                                 uVar21 = 0;
                                 if (lVar17 == 0) {
                                    LAB_0010604e:lVar3 = *(long*)( piVar18 + 8 );
                                    if (lVar3 == 0) {
                                       lVar17 = 0;
                                       goto LAB_00105aa1;
                                    }

                                    lVar17 = *(long*)( lVar3 + -8 );
                                    if (lVar17 <= (long)uVar21) goto LAB_00105aa1;
                                    lVar17 = *(long*)( lVar3 + uVar22 * 8 );
                                 }

                              }
 else {
                                 _err_print_error("get_id", "./servers/rendering/rendering_device.h", 0x3ca, "Condition \"p_idx != 0\" is true. Returning: RID()", 0, 0);
                                 if (*(long*)( piVar18 + 4 ) == 0) {
                                    lVar19 = 0;
                                    goto LAB_0010604e;
                                 }

                                 lVar19 = 0;
                                 LAB_001060d3:_err_print_error("get_id", "./servers/rendering/rendering_device.h", 0x3ca, "Condition \"p_idx != 0\" is true. Returning: RID()", 0, 0);
                                 lVar17 = 0;
                              }

                              if (lVar19 != lVar17) break;
                              uVar22 = uVar22 + 1;
                              if (local_e8 <= (uint)uVar22) goto LAB_0010613a;
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
                     goto LAB_00106018;
                  }

                  if (*(long*)( param_4 + 8 ) != 0) {
                     local_e8 = ( uint ) * (undefined8*)( *(long*)( param_4 + 8 ) + -8 );
                     goto joined_r0x00105c70;
                  }

               }

            }

         }
 else {
            CowData<RID>::_ref((CowData<RID>*)&local_48, pCVar1);
            if (*(int*)( lVar13 + 0x30 ) == 0) {
               uVar21 = 0;
               lVar13 = 0;
               goto LAB_00105fed;
            }

            piVar18 = *(int**)( lVar13 + 0x38 );
            if (piVar18[1] == param_4[1]) goto LAB_00105c3b;
         }

         LAB_00105c76:uVar10 = local_68;
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

      LAB_00105ba8:local_60 = uVar6;
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
         if (local_78[0] == 0) goto LAB_00105e7c;
      }

      LOCK();
      plVar2 = (long*)( lVar13 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         Memory::free_static((void*)( local_78[0] + -0x10 ), false);
      }

   }

   LAB_00105e7c:uVar10 = _allocate_from_uniforms<Vector<RenderingDevice::Uniform>>(this, param_2, param_3, uVar9, uVar7, local_a8);
   CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)&local_a0);
   LAB_00105ea1:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar10;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* TonemapShaderRD::~TonemapShaderRD() */void TonemapShaderRD::~TonemapShaderRD(TonemapShaderRD *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


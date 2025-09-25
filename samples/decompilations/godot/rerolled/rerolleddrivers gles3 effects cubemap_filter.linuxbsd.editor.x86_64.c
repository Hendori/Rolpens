/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::CubemapFilter::CubemapFilter() */void GLES3::CubemapFilter::CubemapFilter(CubemapFilter *this) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   uint uVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58;
   undefined4 uStack_54;
   undefined4 uStack_50;
   undefined4 uStack_4c;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ShaderGLES3::ShaderGLES3((ShaderGLES3*)this);
   *(undefined8*)( this + 0x130 ) = 0;
   *(undefined***)this = &PTR__init_001032b8;
   *(undefined8*)( this + 0x138 ) = 0;
   *(undefined4*)( this + 0x140 ) = 0x80;
   singleton = this;
   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_68, "rendering/reflections/sky_reflections/ggx_samples", false);
   ProjectSettings::get_setting_with_override((StringName*)&local_58);
   uVar4 = Variant::operator_cast_to_unsigned_int((Variant*)&local_58);
   *(uint*)( this + 0x140 ) = uVar4 << 2;
   if (Variant::needs_deinit[local_58] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
      StringName::unref();
   }

   local_88 = 0;
   local_68 = &_LC6;
   local_70 = 0;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_70);
   itos((long)&local_68);
   operator+((char *)&
   local_78,(String*)"\n#define MAX_SAMPLE_COUNT ";
   String::operator +((String*)&local_80, (String*)&local_78);
   String::operator +=((String*)&local_88, (String*)&local_80);
   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }

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

   ShaderGLES3::initialize((String*)this, (int)(String*)&local_88);
   uVar5 = ShaderGLES3::version_create();
   lVar2 = local_88;
   *(undefined8*)( this + 0x130 ) = uVar5;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   ( *_glad_glGenBuffers )(1, this + 0x138);
   ( *_glad_glBindBuffer )(0x8892, *(undefined4*)( this + 0x138 ));
   local_48 = _LC9;
   local_58 = __LC8;
   uStack_54 = _UNK_00103f94;
   uStack_50 = _UNK_00103f98;
   uStack_4c = _UNK_00103f9c;
   ( *_glad_glBufferData )(0x8892, 0x18, (StringName*)&local_58, 0x88e4);
   ( *_glad_glBindBuffer )(0x8892, 0);
   ( *_glad_glGenVertexArrays )(1, this + 0x13c);
   ( *_glad_glBindVertexArray )(*(undefined4*)( this + 0x13c ));
   ( *_glad_glBindBuffer )(0x8892, *(undefined4*)( this + 0x138 ));
   ( *_glad_glVertexAttribPointer )(0, 2, 0x1406, 0, 8, 0);
   ( *_glad_glEnableVertexAttribArray )(0);
   ( *_glad_glBindVertexArray )(0);
   ( *_glad_glBindBuffer )(0x8892, 0);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::CubemapFilter::~CubemapFilter() */void GLES3::CubemapFilter::~CubemapFilter(CubemapFilter *this) {
   ( *_glad_glDeleteBuffers )(1, this + 0x138);
   ( *_glad_glDeleteVertexArrays )(1, this + 0x13c);
   ShaderGLES3::version_free(this, *(undefined8*)( this + 0x130 ));
   singleton = 0;
   *(undefined***)this = &PTR__init_001032b8;
   ShaderGLES3::~ShaderGLES3((ShaderGLES3*)this);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* importance_sample_GGX(Vector2, float) */void importance_sample_GGX(undefined8 param_1, float param_2) {
   long in_FS_OFFSET;
   float fVar1;
   double dVar2;
   double dVar3;
   float local_30;
   float local_2c[5];
   float local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   dVar3 = (double)(float)param_1 * __LC10;
   dVar2 = (double)(float)( (ulong)param_1 >> 0x20 );
   dVar2 = ( _LC11 - dVar2 ) / ( ( (double)param_2 - _LC11 ) * dVar2 + _LC11 );
   if (dVar2 < 0.0) {
      dVar2 = sqrt(dVar2);
   }
 else {
      dVar2 = SQRT(dVar2);
   }

   fVar1 = (float)dVar2;
   dVar2 = _LC11 - (double)( fVar1 * fVar1 );
   if (dVar2 < 0.0) {
      sqrt(dVar2);
   }

   sincosf((float)dVar3, local_2c, &local_30);
   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      local_18 = fVar1;
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* distribution_GGX(float, float) */void distribution_GGX(float param_1, float param_2) {
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* radical_inverse_vdC(unsigned int) */undefined8 radical_inverse_vdC(uint param_1) {
   uint uVar1;
   undefined1 auVar2[16];
   uVar1 = param_1 << 0x10 | param_1 >> 0x10;
   uVar1 = uVar1 * 2 & 0xaaaaaaaa | uVar1 >> 1 & 0x55555555;
   uVar1 = uVar1 * 4 & 0xcccccccc | uVar1 >> 2 & 0x33333333;
   uVar1 = ( uVar1 & 0xf0f0f0f ) << 4 | uVar1 >> 4 & 0xf0f0f0f;
   auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
   auVar2._0_4_ = (float)( uVar1 >> 8 & 0xff00ff | ( uVar1 & 0xff00ff ) << 8 ) * __LC14;
   return auVar2._0_8_;
}
/* hammersley(unsigned int, unsigned int) */void hammersley(uint param_1, uint param_2) {
   radical_inverse_vdC(param_1);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::CubemapFilter::filter_radiance(unsigned int, unsigned int, unsigned int, int, int, int) */void GLES3::CubemapFilter::filter_radiance(CubemapFilter *this, uint param_1, uint param_2, uint param_3, int param_4, int param_5, int param_6) {
   code *pcVar1;
   int iVar2;
   uint uVar3;
   ulong uVar4;
   long lVar5;
   ulong uVar6;
   ulong uVar7;
   void *pvVar8;
   ulong uVar9;
   int iVar10;
   long lVar11;
   long lVar12;
   uint uVar13;
   undefined4 uVar14;
   uint uVar15;
   uint uVar16;
   uint uVar17;
   ulong uVar18;
   char *pcVar19;
   long *plVar20;
   long *plVar21;
   ulong uVar22;
   ulong uVar23;
   undefined4 *puVar24;
   long in_FS_OFFSET;
   bool bVar25;
   float fVar26;
   float fVar27;
   double dVar28;
   double dVar29;
   float fVar31;
   undefined1 auVar32[12];
   char *pcVar33;
   uint local_124;
   byte local_120;
   uint local_11c;
   long local_d0;
   long local_c8;
   long local_c0;
   long local_b8;
   ulong local_b0;
   char *local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined2 local_78;
   undefined1 local_64[8];
   undefined4 local_5c;
   uint uStack_58;
   undefined8 local_54;
   undefined8 uStack_4c;
   long local_40;
   float fVar30;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ( *_glad_glActiveTexture )(0x84c0);
   ( *_glad_glBindTexture )(0x8513, param_1);
   ( *_glad_glBindFramebuffer )(0x8d40, param_3);
   bVar25 = param_6 == 0;
   if (bVar25) {
      ( *_glad_glGenerateMipmap )(0x8513);
   }

   local_11c = (uint)bVar25;
   local_124 = (uint)bVar25;
   local_120 = (byte)param_6;
   uVar13 = param_4 >> ( local_120 & 0x1f );
   plVar21 = (long*)(ulong)uVar13;
   ( *_glad_glViewport )(0, 0, uVar13, plVar21);
   ( *_glad_glBindVertexArray )(*(undefined4*)( this + 0x13c ));
   local_b0 = 0;
   uVar7 = *(ulong*)( this + 0x130 );
   if ((int)local_11c < *(int*)( this + 0x120 )) {
      if (uVar7 != 0) {
         if ((uint)uVar7 < *(uint*)( this + 0x54 )) {
            uVar23 = ( ( uVar7 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x50 ) ) * 0x80 + *(long*)( *(long*)( this + 0x40 ) + ( ( uVar7 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x50 ) ) * 8 );
            if (*(int*)( uVar23 + 0x78 ) == (int)( uVar7 >> 0x20 )) {
               uVar15 = *(uint*)( uVar23 + 0x68 );
               if (uVar15 == 0) {
                  ShaderGLES3::_initialize_version((Version*)this);
                  uVar15 = *(uint*)( uVar23 + 0x68 );
               }

               uVar7 = local_b0;
               auVar32._8_4_ = local_5c;
               auVar32._0_8_ = local_64;
               uVar6 = (ulong)uVar15;
               if (uVar15 <= local_124) {
                  uVar4 = (ulong)local_124;
                  goto LAB_00101a76;
               }

               uVar4 = (ulong)local_124;
               lVar5 = uVar4 * 0x20;
               plVar20 = (long*)( *(long*)( uVar23 + 0x70 ) + lVar5 );
               uVar15 = *(uint*)( plVar20 + 3 );
               uVar9 = (ulong)uVar15;
               lVar11 = plVar20[2];
               uVar6 = local_b0 * 0x3ffff - 1;
               uVar6 = ( uVar6 ^ uVar6 >> 0x1f ) * 0x15;
               uVar6 = ( uVar6 ^ uVar6 >> 0xb ) * 0x41;
               uVar6 = uVar6 >> 0x16 ^ uVar6;
               uVar22 = uVar6 & 0xffffffff;
               if ((int)uVar6 == 0) {
                  uVar22 = 1;
               }

               uVar6 = uVar22 % uVar9;
               uVar17 = *(uint*)( lVar11 + uVar6 * 4 );
               if (uVar17 != 0) {
                  uVar3 = 0;
                  while (( uVar18 = (ulong)uVar17 ),uVar17 != (uint)uVar22 || ( local_b0 != *(ulong*)( plVar20[1] + uVar6 * 8 ) )) {
                     uVar3 = uVar3 + 1;
                     uVar6 = ( ulong )((int)uVar6 + 1) % uVar9;
                     uVar17 = *(uint*)( lVar11 + uVar6 * 4 );
                     if (( uVar17 == 0 ) || ( ( ( uVar15 + (int)uVar6 ) - uVar17 % uVar15 ) % uVar15 < uVar3 )) goto LAB_001018a8;
                  }
;
                  puVar24 = (undefined4*)( *plVar20 + uVar6 * 0x38 );
                  if (puVar24 != (undefined4*)0x0) {
                     if (*(char*)( puVar24 + 0xc ) == '\0') goto LAB_00100936;
                     uVar7 = *(long*)( this + 0x110 ) * 0x3ffff - 1;
                     uVar7 = ( uVar7 ^ uVar7 >> 0x1f ) * 0x15;
                     uVar7 = ( uVar7 ^ uVar7 >> 0xb ) * 0x41;
                     uVar7 = uVar7 >> 0x16 ^ uVar7;
                     uVar23 = uVar7 & 0xffffffff;
                     if ((int)uVar7 == 0) {
                        uVar23 = 1;
                     }

                     uVar3 = 0;
                     uVar7 = uVar23 % uVar9;
                     uVar17 = *(uint*)( lVar11 + uVar7 * 4 );
                     if (uVar17 == 0) goto LAB_00100e88;
                     goto LAB_00100913;
                  }

               }

               LAB_001018a8:local_78 = 0;
               local_a8 = (char*)0x0;
               local_a0 = 0;
               local_98 = 0;
               local_90 = 0;
               local_88 = 0;
               local_80 = 0;
               ShaderGLES3::_compile_specialization((Specialization*)this, (uint)(Specialization*)&local_a8, (Version*)(ulong)local_124, uVar23);
               uVar15 = *(uint*)( uVar23 + 0x68 );
               if (local_124 < uVar15) {
                  OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::insert((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( lVar5 + *(long*)( uVar23 + 0x70 ) ), &local_b0, (Specialization*)&local_a8);
                  uVar15 = *(uint*)( uVar23 + 0x68 );
                  if (local_124 < uVar15) {
                     plVar20 = (long*)( lVar5 + *(long*)( uVar23 + 0x70 ) );
                     uVar15 = *(uint*)( plVar20 + 3 );
                     uVar23 = uVar22 % (ulong)uVar15;
                     uVar17 = *(uint*)( plVar20[2] + uVar23 * 4 );
                     if (uVar17 != 0) {
                        uVar18 = 0;
                        LAB_001019c9:if (( uVar17 != (uint)uVar22 ) || ( uVar7 != *(ulong*)( plVar20[1] + uVar23 * 8 ) )) goto LAB_00101990;
                        puVar24 = (undefined4*)( *plVar20 + uVar23 * 0x38 );
                        if (this[0xa0] != (CubemapFilter)0x0) {
                           ShaderGLES3::_save_to_cache((Version*)this);
                        }

                        ShaderGLES3::Version::Specialization::~Specialization((Specialization*)&local_a8);
                        LAB_0010092d:if (puVar24 == (undefined4*)0x0) goto LAB_00100e88;
                        LAB_00100936:if (*(char*)( (long)puVar24 + 0x31 ) == '\0') goto LAB_00100e88;
                        ( *_glad_glUseProgram )(*puVar24);
                        *(undefined4**)( this + 0x128 ) = puVar24;
                        if (0 < param_6) {
                           uVar15 = *(uint*)( this + 0x140 );
                           lVar11 = 4;
                           if (param_6 < 5) {
                              lVar11 = (long)param_6;
                           }

                           local_54 = CONCAT44(uVar15 >> 3, uVar15 >> 4);
                           uStack_4c = CONCAT44(uVar15, uVar15 >> 2);
                           uVar15 = ( &uStack_58 )[lVar11];
                           uVar17 = uVar15 * 4;
                           if (uVar17 == 0) {
                              pvVar8 = (void*)0x0;
                           }
 else {
                              uVar3 = uVar17 - 1 | uVar17 - 1 >> 1;
                              uVar3 = uVar3 | uVar3 >> 2;
                              uVar3 = uVar3 | uVar3 >> 4;
                              uVar3 = uVar3 | uVar3 >> 8;
                              pvVar8 = (void*)Memory::realloc_static((void*)0x0, ( ulong )(( uVar3 | uVar3 >> 0x10 ) + 1) << 2, false);
                              if (pvVar8 == (void*)0x0) {
                                 _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0, this);
                                 _err_flush_stdout();
                                 /* WARNING: Does not return */
                                 pcVar1 = (code*)invalidInstructionException();
                                 ( *pcVar1 )();
                              }

                           }

                           auVar32._8_4_ = local_5c;
                           auVar32._0_8_ = local_64;
                           if (uVar15 != 0) {
                              iVar2 = 0;
                              plVar21 = (long*)0x0;
                              fVar26 = (float)param_6 / (float)( param_5 + -1 );
                              for (int i = 0; i < 3; i++) {
                                 fVar26 = fVar26 * fVar26;
                              }

                              dVar28 = _LC32 / (double)(int)( uVar13 * uVar13 * 6 );
                              do {
                                 _local_64 = auVar32;
                                 radical_inverse_vdC((uint)plVar21);
                                 auVar32 = importance_sample_GGX();
                                 fVar30 = auVar32._8_4_;
                                 local_64._4_4_ = auVar32._4_4_;
                                 local_64._0_4_ = auVar32._0_4_;
                                 fVar27 = fVar30 + fVar30;
                                 fVar31 = fVar27 * fVar30 - _LC17;
                                 if (0.0 < fVar31) {
                                    uVar13 = iVar2 * 4;
                                    if (uVar13 < uVar17) {
                                       *(float*)( (long)pvVar8 + (ulong)uVar13 * 4 ) = (float)local_64._0_4_ * fVar27;
                                       uVar7 = ( ulong )(uVar13 + 1);
                                       if (uVar13 + 1 < uVar17) {
                                          *(float*)( (long)pvVar8 + uVar7 * 4 ) = fVar27 * (float)local_64._4_4_;
                                          uVar7 = ( ulong )(uVar13 + 2);
                                          if (uVar13 + 2 < uVar17) {
                                             *(float*)( (long)pvVar8 + uVar7 * 4 ) = fVar31;
                                             dVar29 = (double)(float)( (double)( fVar30 * fVar30 ) * ( (double)fVar26 - _LC11 ) + _LC11 );
                                             _local_64 = auVar32;
                                             fVar27 = log2f((float)( _LC11 / ( (double)( (float)( (double)( ( fVar26 / (float)( _LC13 * dVar29 * dVar29 ) ) * fVar30 ) / ( (double)fVar30 * __LC33 ) + __LC34 ) * (float)uVar15 ) + __LC34 ) ) / (float)dVar28);
                                             iVar10 = param_6 + -3;
                                             if (iVar10 < 1) {
                                                iVar10 = 1;
                                             }

                                             dVar29 = (double)iVar10 + (double)fVar27 * __LC35;
                                             fVar27 = _LC17;
                                             if (_LC11 < dVar29) {
                                                fVar27 = (float)dVar29;
                                             }

                                             uVar13 = uVar13 + 3;
                                             auVar32 = _local_64;
                                             if (uVar13 < uVar17) {
                                                *(float*)( (long)pvVar8 + (ulong)uVar13 * 4 ) = fVar27;
                                                iVar2 = iVar2 + 1;
                                                goto LAB_001011d5;
                                             }

                                             uVar7 = (ulong)uVar13;
                                          }

                                       }

                                    }
 else {
                                       uVar7 = (ulong)uVar13;
                                    }

                                    uVar6 = (ulong)uVar17;
                                    uVar4 = uVar7;
                                    goto LAB_00101a76;
                                 }

                                 LAB_001011d5:uVar13 = (uint)plVar21 + 1;
                                 plVar21 = (long*)(ulong)uVar13;
                              }
 while ( uVar15 != uVar13 );
                           }

                           pcVar1 = _glad_glUniform4fv;
                           uVar7 = *(ulong*)( this + 0x130 );
                           _local_64 = auVar32;
                           if (2 < *(int*)( this + 0xd0 )) {
                              if (( uVar7 == 0 ) || ( *(uint*)( this + 0x54 ) <= (uint)uVar7 )) {
                                 LAB_00102226:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                                 goto LAB_00101faa;
                              }

                              lVar11 = ( ( uVar7 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x50 ) ) * 0x80 + *(long*)( *(long*)( this + 0x40 ) + ( ( uVar7 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x50 ) ) * 8 );
                              if (*(int*)( lVar11 + 0x78 ) != (int)( uVar7 >> 0x20 )) {
                                 if (*(int*)( lVar11 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                    _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, uVar18);
                                 }

                                 goto LAB_00102226;
                              }

                              uVar13 = *(uint*)( lVar11 + 0x68 );
                              if ((int)uVar13 <= (int)local_11c) {
                                 _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, uVar4, (long)(int)uVar13, "p_variant", "int(version->variants.size())", "", false, false);
                                 goto LAB_00101faa;
                              }

                              if (local_124 < uVar13) {
                                 plVar20 = (long*)( lVar5 + *(long*)( lVar11 + 0x70 ) );
                                 uVar13 = *(uint*)( plVar20 + 3 );
                                 plVar21 = (long*)plVar20[2];
                                 uVar7 = 0x2aeaa2ab % (ulong)uVar13;
                                 uVar17 = *(uint*)( (long)plVar21 + uVar7 * 4 );
                                 if (uVar17 == 0) {
                                    LAB_0010203d:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                                    goto LAB_00101faa;
                                 }

                                 uVar3 = 0;
                                 while (( uVar17 != 0x2aeaa2ab || ( *(long*)( plVar20[1] + uVar7 * 8 ) != 0 ) )) {
                                    uVar3 = uVar3 + 1;
                                    uVar7 = ( ulong )((int)uVar7 + 1) % (ulong)uVar13;
                                    uVar17 = *(uint*)( (long)plVar21 + uVar7 * 4 );
                                    if (( uVar17 == 0 ) || ( ( ( uVar13 + (int)uVar7 ) - uVar17 % uVar13 ) % uVar13 < uVar3 )) goto LAB_0010203d;
                                 }
;
                                 lVar11 = *plVar20 + uVar7 * 0x38;
                                 if (lVar11 == 0) goto LAB_0010203d;
                                 if (*(int*)( lVar11 + 0x10 ) < 3) {
                                    _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 2, (long)*(int*)( lVar11 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                    goto LAB_00101faa;
                                 }

                                 uVar14 = *(undefined4*)( *(long*)( lVar11 + 0x18 ) + 8 );
                                 goto LAB_00101320;
                              }

                              LAB_00101a50:uVar6 = 1;
                              uVar4 = 1;
                              goto LAB_00101a76;
                           }

                           _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 2, (long)*(int*)( this + 0xd0 ), "p_which", "uniform_count", "", false, false);
                           LAB_00101faa:uVar14 = 0xffffffff;
                           LAB_00101320:uVar23 = (ulong)uVar15;
                           ( *pcVar1 )(uVar14, uVar23, pvVar8);
                           pcVar1 = _glad_glUniform1f;
                           lVar11 = (long)*(int*)( this + 0xd0 );
                           uVar7 = *(ulong*)( this + 0x130 );
                           if (*(int*)( this + 0xd0 ) < 4) {
                              uVar7 = 3;
                              pcVar19 = "p_which";
                              iVar2 = 0xe4;
                              pcVar33 = "uniform_count";
                              LAB_00101fd9:_err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", iVar2, uVar7, lVar11, pcVar19, pcVar33, "", false, false);
                              lVar11 = (long)*(int*)( this + 0xd0 );
                           }
 else {
                              if (uVar7 != 0) {
                                 if ((uint)uVar7 < *(uint*)( this + 0x54 )) {
                                    lVar12 = ( ( uVar7 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x50 ) ) * 0x80 + *(long*)( *(long*)( this + 0x40 ) + ( ( uVar7 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x50 ) ) * 8 );
                                    iVar2 = *(int*)( lVar12 + 0x78 );
                                    if (iVar2 == (int)( uVar7 >> 0x20 )) {
                                       uVar13 = *(uint*)( lVar12 + 0x68 );
                                       lVar11 = (long)(int)uVar13;
                                       if ((int)uVar13 <= (int)local_11c) {
                                          iVar2 = 0xe7;
                                          pcVar19 = "p_variant";
                                          pcVar33 = "int(version->variants.size())";
                                          uVar7 = uVar4;
                                          goto LAB_00101fd9;
                                       }

                                       auVar32 = _local_64;
                                       if (uVar13 <= local_124) goto LAB_00101a50;
                                       plVar21 = (long*)( lVar5 + *(long*)( lVar12 + 0x70 ) );
                                       uVar13 = *(uint*)( plVar21 + 3 );
                                       uVar23 = 0x2aeaa2ab % (ulong)uVar13;
                                       uVar15 = *(uint*)( plVar21[2] + uVar23 * 4 );
                                       if (uVar15 != 0) {
                                          uVar17 = 0;
                                          while (( uVar15 != 0x2aeaa2ab || ( *(long*)( plVar21[1] + uVar23 * 8 ) != 0 ) )) {
                                             uVar17 = uVar17 + 1;
                                             uVar23 = ( ulong )((int)uVar23 + 1) % (ulong)uVar13;
                                             uVar15 = *(uint*)( plVar21[2] + uVar23 * 4 );
                                             if (( uVar15 == 0 ) || ( ( ( uVar13 + (int)uVar23 ) - uVar15 % uVar13 ) % uVar13 < uVar17 )) goto LAB_00101f2d;
                                          }
;
                                          lVar12 = *plVar21 + uVar23 * 0x38;
                                          if (lVar12 != 0) {
                                             lVar11 = (long)*(int*)( lVar12 + 0x10 );
                                             if (*(int*)( lVar12 + 0x10 ) < 4) {
                                                pcVar19 = "p_which";
                                                iVar2 = 0xea;
                                                pcVar33 = "int(spec->uniform_location.size())";
                                                uVar7 = 3;
                                                goto LAB_00101fd9;
                                             }

                                             lVar11 = (long)*(int*)( this + 0xd0 );
                                             if (*(int*)( *(long*)( lVar12 + 0x18 ) + 0xc ) < 0) goto LAB_001015a2;
                                             if (*(int*)( this + 0xd0 ) < 4) {
                                                _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 3, lVar11, "p_which", "uniform_count", "", false, false);
                                                LAB_00102177:uVar14 = 0xffffffff;
                                             }
 else {
                                                if (*(uint*)( this + 0x54 ) <= (uint)uVar7) {
                                                   LAB_00102152:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                                                   goto LAB_00102177;
                                                }

                                                lVar11 = ( ( uVar7 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x50 ) ) * 0x80 + *(long*)( *(long*)( this + 0x40 ) + ( ( uVar7 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x50 ) ) * 8 );
                                                if (iVar2 != *(int*)( lVar11 + 0x78 )) {
                                                   if (*(int*)( lVar11 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                                      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, lVar11);
                                                   }

                                                   goto LAB_00102152;
                                                }

                                                uVar13 = *(uint*)( lVar11 + 0x68 );
                                                if ((int)uVar13 <= (int)local_11c) {
                                                   _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, uVar4, (long)(int)uVar13, "p_variant", "int(version->variants.size())", "", false, false);
                                                   goto LAB_00102177;
                                                }

                                                if (uVar13 <= local_124) goto LAB_00101a50;
                                                plVar21 = (long*)( lVar5 + *(long*)( lVar11 + 0x70 ) );
                                                uVar13 = *(uint*)( plVar21 + 3 );
                                                uVar7 = 0x2aeaa2ab % (ulong)uVar13;
                                                uVar15 = *(uint*)( plVar21[2] + uVar7 * 4 );
                                                if (uVar15 == 0) {
                                                   LAB_0010253c:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                                                   goto LAB_00102177;
                                                }

                                                uVar17 = 0;
                                                while (( uVar15 != 0x2aeaa2ab || ( *(long*)( plVar21[1] + uVar7 * 8 ) != 0 ) )) {
                                                   uVar17 = uVar17 + 1;
                                                   uVar7 = ( ulong )((int)uVar7 + 1) % (ulong)uVar13;
                                                   uVar15 = *(uint*)( plVar21[2] + uVar7 * 4 );
                                                   if (( uVar15 == 0 ) || ( ( ( uVar13 + (int)uVar7 ) - uVar15 % uVar13 ) % uVar13 < uVar17 )) goto LAB_0010253c;
                                                }
;
                                                lVar11 = *plVar21 + uVar7 * 0x38;
                                                if (lVar11 == 0) goto LAB_0010253c;
                                                if (*(int*)( lVar11 + 0x10 ) < 4) {
                                                   _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 3, (long)*(int*)( lVar11 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                                   goto LAB_00102177;
                                                }

                                                uVar14 = *(undefined4*)( *(long*)( lVar11 + 0x18 ) + 0xc );
                                             }

                                             ( *pcVar1 )(uVar14);
                                             lVar11 = (long)*(int*)( this + 0xd0 );
                                             goto LAB_001015a2;
                                          }

                                       }

                                       LAB_00101f2d:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                                       lVar11 = (long)*(int*)( this + 0xd0 );
                                       goto LAB_001015a2;
                                    }

                                    if (iVar2 + 0x80000000U < 0x7fffffff) {
                                       _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, uVar23);
                                    }

                                 }

                              }

                              _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                              lVar11 = (long)*(int*)( this + 0xd0 );
                           }

                           LAB_001015a2:pcVar1 = _glad_glUniform1ui;
                           uVar7 = *(ulong*)( this + 0x130 );
                           if ((int)lVar11 < 2) {
                              _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 1, lVar11, "p_which", "uniform_count", "", false, false);
                              goto LAB_00101808;
                           }

                           if (uVar7 == 0) {
                              LAB_0010230f:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                           }
 else {
                              if (*(uint*)( this + 0x54 ) <= (uint)uVar7) goto LAB_0010230f;
                              lVar11 = ( ( uVar7 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x50 ) ) * 0x80 + *(long*)( *(long*)( this + 0x40 ) + ( ( uVar7 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x50 ) ) * 8 );
                              iVar2 = *(int*)( lVar11 + 0x78 );
                              if (iVar2 != (int)( uVar7 >> 0x20 )) {
                                 if (iVar2 + 0x80000000U < 0x7fffffff) {
                                    _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, plVar21);
                                 }

                                 goto LAB_0010230f;
                              }

                              uVar13 = *(uint*)( lVar11 + 0x68 );
                              if ((int)uVar13 <= (int)local_11c) {
                                 _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, uVar4, (long)(int)uVar13, "p_variant", "int(version->variants.size())", "", false, false);
                                 goto LAB_00101808;
                              }

                              auVar32 = _local_64;
                              if (uVar13 <= local_124) goto LAB_00101a50;
                              plVar21 = (long*)( lVar5 + *(long*)( lVar11 + 0x70 ) );
                              uVar13 = *(uint*)( plVar21 + 3 );
                              uVar23 = 0x2aeaa2ab % (ulong)uVar13;
                              uVar15 = *(uint*)( plVar21[2] + uVar23 * 4 );
                              if (uVar15 == 0) {
                                 LAB_00102291:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                              }
 else {
                                 uVar17 = 0;
                                 while (( uVar15 != 0x2aeaa2ab || ( *(long*)( plVar21[1] + uVar23 * 8 ) != 0 ) )) {
                                    uVar17 = uVar17 + 1;
                                    uVar23 = ( ulong )((int)uVar23 + 1) % (ulong)uVar13;
                                    uVar15 = *(uint*)( plVar21[2] + uVar23 * 4 );
                                    if (( uVar15 == 0 ) || ( ( ( uVar13 + (int)uVar23 ) - uVar15 % uVar13 ) % uVar13 < uVar17 )) goto LAB_00102291;
                                 }
;
                                 lVar11 = *plVar21 + uVar23 * 0x38;
                                 if (lVar11 == 0) goto LAB_00102291;
                                 if (*(int*)( lVar11 + 0x10 ) < 2) {
                                    _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 1, (long)*(int*)( lVar11 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                 }
 else if (-1 < *(int*)( *(long*)( lVar11 + 0x18 ) + 4 )) {
                                    iVar10 = *(int*)( this + 0xd0 );
                                    if (iVar10 < 2) {
                                       _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 1, (long)iVar10, "p_which", "uniform_count", "", false, false);
                                       LAB_00102375:uVar14 = 0xffffffff;
                                    }
 else {
                                       if (*(uint*)( this + 0x54 ) <= (uint)uVar7) {
                                          LAB_001024de:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                                          goto LAB_00102375;
                                       }

                                       lVar11 = ( ( uVar7 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x50 ) ) * 0x80 + *(long*)( *(long*)( this + 0x40 ) + ( ( uVar7 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x50 ) ) * 8 );
                                       if (iVar2 != *(int*)( lVar11 + 0x78 )) {
                                          if (*(int*)( lVar11 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                             _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, (long)iVar10);
                                          }

                                          goto LAB_001024de;
                                       }

                                       uVar13 = *(uint*)( lVar11 + 0x68 );
                                       if ((int)uVar13 <= (int)local_11c) {
                                          _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, uVar4, (long)(int)uVar13, "p_variant", "int(version->variants.size())", "", false, false);
                                          goto LAB_00102375;
                                       }

                                       if (uVar13 <= local_124) goto LAB_00101a50;
                                       plVar21 = (long*)( lVar5 + *(long*)( lVar11 + 0x70 ) );
                                       uVar13 = *(uint*)( plVar21 + 3 );
                                       uVar7 = 0x2aeaa2ab % (ulong)uVar13;
                                       uVar15 = *(uint*)( plVar21[2] + uVar7 * 4 );
                                       if (uVar15 == 0) {
                                          LAB_00102440:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                                          goto LAB_00102375;
                                       }

                                       uVar17 = 0;
                                       while (( uVar15 != 0x2aeaa2ab || ( *(long*)( plVar21[1] + uVar7 * 8 ) != 0 ) )) {
                                          uVar17 = uVar17 + 1;
                                          uVar7 = ( ulong )((int)uVar7 + 1) % (ulong)uVar13;
                                          uVar15 = *(uint*)( plVar21[2] + uVar7 * 4 );
                                          if (( uVar15 == 0 ) || ( ( ( uVar13 + (int)uVar7 ) - uVar15 % uVar13 ) % uVar13 < uVar17 )) goto LAB_00102440;
                                       }
;
                                       lVar11 = *plVar21 + uVar7 * 0x38;
                                       if (lVar11 == 0) goto LAB_00102440;
                                       if (*(int*)( lVar11 + 0x10 ) < 2) {
                                          _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 1, (long)*(int*)( lVar11 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                          goto LAB_00102375;
                                       }

                                       uVar14 = *(undefined4*)( *(long*)( lVar11 + 0x18 ) + 4 );
                                    }

                                    ( *pcVar1 )(uVar14);
                                 }

                              }

                           }

                           LAB_00101808:if (pvVar8 != (void*)0x0) {
                              Memory::free_static(pvVar8, false);
                           }

                        }

                        uVar7 = 0;
                        LAB_00100960:( *_glad_glFramebufferTexture2D )(0x8d40, 0x8ce0, (int)uVar7 + 0x8515, param_2, param_6);
                        iVar2 = ( *_glad_glCheckFramebufferStatus )(0x8d40);
                        if (iVar2 != 0x8cd5) {
                           GLES3::TextureStorage::get_singleton();
                           if (iVar2 == 0x8cd6) {
                              local_a8 = "GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT";
                              local_a0 = 0x24;
                              LAB_00101878:local_b0 = 0;
                              String::parse_latin1((StrRange*)&local_b0);
                           }
 else {
                              if (iVar2 == 0x8cd7) {
                                 local_a8 = "GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT";
                                 local_a0 = 0x2c;
                                 goto LAB_00101878;
                              }

                              if (iVar2 == 0x8cdb) {
                                 local_a8 = "GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER";
                                 local_a0 = 0x25;
                                 goto LAB_00101878;
                              }

                              if (iVar2 == 0x8cdc) {
                                 local_a8 = "GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER";
                                 local_a0 = 0x25;
                                 goto LAB_00101878;
                              }

                              itos((long)&local_b0);
                           }

                           local_c0 = 0;
                           local_a8 = ", status: ";
                           local_a0 = 10;
                           String::parse_latin1((StrRange*)&local_c0);
                           itos((long)&local_d0);
                           operator+((char *)&
                           local_c8,(String*)"Could not bind sky radiance face: ";
                           String::operator +((String*)&local_b8, (String*)&local_c8);
                           String::operator +((String*)&local_a8, (String*)&local_b8);
                           _err_print_error("filter_radiance", "drivers/gles3/effects/cubemap_filter.cpp", 0xca, (String*)&local_a8, 0);
                           pcVar19 = local_a8;
                           if (local_a8 != (char*)0x0) {
                              LOCK();
                              plVar21 = (long*)( local_a8 + -0x10 );
                              *plVar21 = *plVar21 + -1;
                              UNLOCK();
                              if (*plVar21 == 0) {
                                 local_a8 = (char*)0x0;
                                 Memory::free_static(pcVar19 + -0x10, false);
                              }

                           }

                           lVar11 = local_b8;
                           if (local_b8 != 0) {
                              LOCK();
                              plVar21 = (long*)( local_b8 + -0x10 );
                              *plVar21 = *plVar21 + -1;
                              UNLOCK();
                              if (*plVar21 == 0) {
                                 local_b8 = 0;
                                 Memory::free_static((void*)( lVar11 + -0x10 ), false);
                              }

                           }

                           lVar11 = local_c8;
                           if (local_c8 != 0) {
                              LOCK();
                              plVar21 = (long*)( local_c8 + -0x10 );
                              *plVar21 = *plVar21 + -1;
                              UNLOCK();
                              if (*plVar21 == 0) {
                                 local_c8 = 0;
                                 Memory::free_static((void*)( lVar11 + -0x10 ), false);
                              }

                           }

                           lVar11 = local_d0;
                           if (local_d0 != 0) {
                              LOCK();
                              plVar21 = (long*)( local_d0 + -0x10 );
                              *plVar21 = *plVar21 + -1;
                              UNLOCK();
                              if (*plVar21 == 0) {
                                 local_d0 = 0;
                                 Memory::free_static((void*)( lVar11 + -0x10 ), false);
                              }

                           }

                           lVar11 = local_c0;
                           if (local_c0 != 0) {
                              LOCK();
                              plVar21 = (long*)( local_c0 + -0x10 );
                              *plVar21 = *plVar21 + -1;
                              UNLOCK();
                              if (*plVar21 == 0) {
                                 local_c0 = 0;
                                 Memory::free_static((void*)( lVar11 + -0x10 ), false);
                              }

                           }

                           uVar23 = local_b0;
                           if (local_b0 != 0) {
                              LOCK();
                              plVar21 = (long*)( local_b0 - 0x10 );
                              *plVar21 = *plVar21 + -1;
                              UNLOCK();
                              if (*plVar21 == 0) {
                                 local_b0 = 0;
                                 Memory::free_static((void*)( uVar23 - 0x10 ), false);
                              }

                           }

                        }

                        pcVar1 = _glad_glUniform1i;
                        uVar23 = *(ulong*)( this + 0x130 );
                        if (*(int*)( this + 0xd0 ) < 1) {
                           _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 0, (long)*(int*)( this + 0xd0 ), "p_which", "uniform_count", "", false, false);
                        }
 else {
                           if (uVar23 != 0) {
                              if ((uint)uVar23 < *(uint*)( this + 0x54 )) {
                                 lVar11 = ( ( uVar23 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x50 ) ) * 0x80 + *(long*)( *(long*)( this + 0x40 ) + ( ( uVar23 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x50 ) ) * 8 );
                                 iVar2 = *(int*)( lVar11 + 0x78 );
                                 if (iVar2 == (int)( uVar23 >> 0x20 )) {
                                    uVar13 = *(uint*)( lVar11 + 0x68 );
                                    if ((int)local_11c < (int)uVar13) {
                                       auVar32 = _local_64;
                                       if (uVar13 <= local_124) goto LAB_00101a50;
                                       plVar21 = (long*)( lVar5 + *(long*)( lVar11 + 0x70 ) );
                                       uVar13 = *(uint*)( plVar21 + 3 );
                                       uVar6 = 0x2aeaa2ab % (ulong)uVar13;
                                       uVar15 = *(uint*)( plVar21[2] + uVar6 * 4 );
                                       if (uVar15 != 0) {
                                          uVar17 = 0;
                                          while (( uVar15 != 0x2aeaa2ab || ( *(long*)( plVar21[1] + uVar6 * 8 ) != 0 ) )) {
                                             uVar17 = uVar17 + 1;
                                             uVar6 = ( ulong )((int)uVar6 + 1) % (ulong)uVar13;
                                             uVar15 = *(uint*)( plVar21[2] + uVar6 * 4 );
                                             if (( uVar15 == 0 ) || ( ( ( uVar13 + (int)uVar6 ) - uVar15 % uVar13 ) % uVar13 < uVar17 )) goto LAB_00101c70;
                                          }
;
                                          lVar11 = *plVar21 + uVar6 * 0x38;
                                          if (lVar11 != 0) {
                                             if (*(int*)( lVar11 + 0x10 ) < 1) {
                                                _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 0, (long)*(int*)( lVar11 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                                goto LAB_00100df0;
                                             }

                                             if (**(int**)( lVar11 + 0x18 ) < 0) goto LAB_00100df0;
                                             if (*(int*)( this + 0xd0 ) < 1) {
                                                _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 0, (long)*(int*)( this + 0xd0 ), "p_which", "uniform_count", "", false, false);
                                                goto LAB_00101d38;
                                             }

                                             if ((uint)uVar23 < *(uint*)( this + 0x54 )) {
                                                lVar11 = ( ( uVar23 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x50 ) ) * 0x80 + *(long*)( *(long*)( this + 0x40 ) + ( ( uVar23 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x50 ) ) * 8 );
                                                if (iVar2 == *(int*)( lVar11 + 0x78 )) {
                                                   uVar13 = *(uint*)( lVar11 + 0x68 );
                                                   if ((int)uVar13 <= (int)local_11c) {
                                                      _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, uVar4, (long)(int)uVar13, "p_variant", "int(version->variants.size())", "", false, false);
                                                      goto LAB_00101d38;
                                                   }

                                                   if (uVar13 <= local_124) goto LAB_00101a50;
                                                   plVar21 = (long*)( lVar5 + *(long*)( lVar11 + 0x70 ) );
                                                   uVar13 = *(uint*)( plVar21 + 3 );
                                                   uVar23 = 0x2aeaa2ab % (ulong)uVar13;
                                                   uVar15 = *(uint*)( plVar21[2] + uVar23 * 4 );
                                                   if (uVar15 == 0) goto LAB_00101e70;
                                                   uVar17 = 0;
                                                   goto LAB_00100da9;
                                                }

                                                if (*(int*)( lVar11 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                                   _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                                }

                                             }

                                             _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                                             goto LAB_00101d38;
                                          }

                                       }

                                       LAB_00101c70:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                                    }
 else {
                                       _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, uVar4, (long)(int)uVar13, "p_variant", "int(version->variants.size())", "", false, false);
                                    }

                                    goto LAB_00100df0;
                                 }

                                 if (iVar2 + 0x80000000U < 0x7fffffff) {
                                    _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                 }

                              }

                           }

                           _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                        }

                        goto LAB_00100df0;
                     }

                     LAB_00100e6d:if (this[0xa0] == (CubemapFilter)0x0) {
                        ShaderGLES3::Version::Specialization::~Specialization((Specialization*)&local_a8);
                     }
 else {
                        ShaderGLES3::_save_to_cache((Version*)this);
                        ShaderGLES3::Version::Specialization::~Specialization((Specialization*)&local_a8);
                     }

                     goto LAB_00100e88;
                  }

               }

               auVar32._8_4_ = local_5c;
               auVar32._0_8_ = local_64;
               uVar6 = (ulong)uVar15;
               LAB_00101a76:_local_64 = auVar32;
               _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar4, uVar6, "p_index", "count", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            if (*(int*)( uVar23 + 0x78 ) + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

         }

      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("_version_bind_shader", "./drivers/gles3/shader_gles3.h", 0xbe, "Parameter \"version\" is null.", 0, 0);
         return;
      }

      goto LAB_001025a7;
   }

   _err_print_index_error("_version_bind_shader", "./drivers/gles3/shader_gles3.h", 0xbb, (ulong)local_124, (long)*(int*)( this + 0x120 ), "p_variant", "variant_count", "", false, false);
   goto LAB_00100e95;
   LAB_00100da9:if (( uVar15 != 0x2aeaa2ab ) || ( *(long*)( plVar21[1] + uVar23 * 8 ) != 0 )) {
      uVar17 = uVar17 + 1;
      uVar23 = ( ulong )((int)uVar23 + 1) % (ulong)uVar13;
      uVar15 = *(uint*)( plVar21[2] + uVar23 * 4 );
      if (( uVar15 == 0 ) || ( ( ( uVar13 + (int)uVar23 ) - uVar15 % uVar13 ) % uVar13 < uVar17 )) goto LAB_00101e70;
      goto LAB_00100da9;
   }

   lVar11 = *plVar21 + uVar23 * 0x38;
   if (lVar11 != 0) {
      if (*(int*)( lVar11 + 0x10 ) < 1) {
         _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 0, (long)*(int*)( lVar11 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
         goto LAB_00101d38;
      }

      uVar14 = **(undefined4**)( lVar11 + 0x18 );
      goto LAB_00100deb;
   }

   LAB_00101e70:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
   LAB_00101d38:uVar14 = 0xffffffff;
   LAB_00100deb:( *pcVar1 )(uVar14, uVar7 & 0xffffffff);
   LAB_00100df0:uVar7 = uVar7 + 1;
   ( *_glad_glDrawArrays )(4, 0, 3);
   if (uVar7 == 6) goto code_r0x00100e10;
   goto LAB_00100960;
   code_r0x00100e10:( *_glad_glBindVertexArray )(0);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00100e4b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *_glad_glBindFramebuffer )(0x8d40, (undefined4)TextureStorage::system_fbo);
      return;
   }

   goto LAB_001025a7;
   LAB_00101990:uVar3 = (int)uVar18 + 1;
   uVar18 = (ulong)uVar3;
   uVar23 = ( ulong )((int)uVar23 + 1) % (ulong)uVar15;
   uVar17 = *(uint*)( plVar20[2] + uVar23 * 4 );
   if (( uVar17 == 0 ) || ( ( ( uVar15 + (int)uVar23 ) - uVar17 % uVar15 ) % uVar15 < uVar3 )) goto LAB_00100e6d;
   goto LAB_001019c9;
   while (true) {
      uVar3 = uVar3 + 1;
      uVar7 = ( ulong )((int)uVar7 + 1) % uVar9;
      uVar17 = *(uint*)( lVar11 + uVar7 * 4 );
      if (( uVar17 == 0 ) || ( uVar16 = uVar15 + (int)uVar7 ),uVar18 = (ulong)uVar16,( uVar16 - uVar17 % uVar15 ) % uVar15 < uVar3) break;
      LAB_00100913:if (( uVar17 == (uint)uVar23 ) && ( *(long*)( this + 0x110 ) == *(long*)( plVar20[1] + uVar7 * 8 ) )) {
         puVar24 = (undefined4*)( *plVar20 + uVar7 * 0x38 );
         goto LAB_0010092d;
      }

   }
;
   LAB_00100e88:if (ShaderGLES3::_version_bind_shader(RID, ,int, unsigned_long) != '\0') {
      _err_print_error("_version_bind_shader", "./drivers/gles3/shader_gles3.h", 0xda, "shader failed to compile, unable to bind shader.", 0, 1);
      ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print =
      '\0';
   }

   LAB_00100e95:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001025a7:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CubemapFilterShaderGLES3::~CubemapFilterShaderGLES3() */void CubemapFilterShaderGLES3::~CubemapFilterShaderGLES3(CubemapFilterShaderGLES3 *this) {
   *(undefined***)this = &PTR__init_001032b8;
   ShaderGLES3::~ShaderGLES3((ShaderGLES3*)this);
   return;
}
/* CubemapFilterShaderGLES3::~CubemapFilterShaderGLES3() */void CubemapFilterShaderGLES3::~CubemapFilterShaderGLES3(CubemapFilterShaderGLES3 *this) {
   *(undefined***)this = &PTR__init_001032b8;
   ShaderGLES3::~ShaderGLES3((ShaderGLES3*)this);
   operator_delete(this, 0x130);
   return;
}
/* CubemapFilterShaderGLES3::_init() */void CubemapFilterShaderGLES3::_init(CubemapFilterShaderGLES3 *this) {
   ShaderGLES3::_setup((char*)this, "\nlayout(location = 0) in highp vec2 vertex_attrib;\n/* clang-format on */\n\nout highp vec2 uv_interp;\n\nvoid main() {\n\tuv_interp = vertex_attrib;\n\tgl_Position = vec4(uv_interp, 0.0, 1.0);\n}\n\n/* clang-format off */\n", "\n\n#define M_PI 3.14159265359\n\nuniform samplerCube source_cube; //texunit:0\n\n/* clang-format on */\n\nuniform int face_id;\n\n#ifndef MODE_DIRECT_WRITE\nuniform uint sample_count;\nuniform vec4 sample_directions_mip[MAX_SAMPLE_COUNT];\nuniform float weight;\n#endif\n\nin highp vec2 uv_interp;\n\nlayout(location = 0) out vec4 frag_color;\n\n#define M_PI 3.14159265359\n\n// Don\'t include tonemap_inc.glsl because all we want is these functions, we don\'t want the uniforms\nvec3 linear_to_srgb(vec3 color) {\n\treturn max(vec3(1.055) * pow(color, vec3(0.416666667)) - vec3(0.055), vec3(0.0));\n}\n\nvec3 srgb_to_linear(vec3 color) {\n\treturn color * (color * (color * 0.305306011 + 0.682171111) + 0.012522878);\n}\n\nvec3 texelCoordToVec(vec2 uv, int faceID) {\n\tmat3 faceUvVectors[6];\n\n\t// -x\n\tfaceUvVectors[1][0] = vec3(0.0, 0.0, 1.0); // u -> +z\n\tfaceUvVectors[1][1] = vec3(0.0, -1.0, 0.0); // v -> -y\n\tfaceUvVectors[1][2] = vec3(-1.0, 0.0, 0.0); // -x face\n\n\t// +x\n\tfaceUvVectors[0][0] = vec3(0.0, 0.0, -1.0); // u -> -z\n\tfaceUvVectors[0][1] = vec3(0.0, -1.0, 0.0); // v -> -y\n\tfaceUvVectors[0][2] = vec3(1.0, 0.0, 0.0); // +x face\n\n\t// -y\n\tfaceUvVectors[3][0] = vec3(1.0, 0.0, 0.0); // u -> +x\n\tfaceUvVectors[3][1] = vec3(0.0, 0.0, -1.0); // v -> -z\n\tfaceUvVectors[3][2] = vec3(0.0, -1.0, 0.0); // -y face\n\n\t// +y\n\tfaceUvVectors[2][0] = vec3(1.0, 0.0, 0.0); // u -> +x\n\tfaceUvVectors[2][1] = vec3(0.0, 0.0, 1.0); // v -> +z\n\tfaceUvVectors[2][2] = vec3(0.0, 1.0, 0.0); // +y face\n\n\t// -z\n\tfaceUvVectors[5][0] = vec3(-1.0, 0.0, 0.0); // u -> -x\n\tfaceUvVectors[5][1] = vec3(0.0, -1.0, 0.0); // v -> -y\n\tfaceUvVectors[5][2] = vec3(0.0, 0.0, -1.0); // -z face\n\n\t// +z\n\tfaceUvVectors[4][0] = vec3(1.0, 0.0, 0.0); // u -> +x\n\tfaceUvVectors[4][1] = vec3(0.0, -1.0, 0.0); // v -> -y\n\tfaceUvVectors[4][2] = vec3(0.0, 0.0, 1.0); // +z face\n\n\t// out = u * s_faceUv[0] + v * s_faceUv[1] + s_faceUv[2].\n\tvec3 result = (faceUvVectors[faceID][0] * uv.x) + (faceUvVectors[faceID][1] * uv.y) + faceUvVectors[faceID][2];\n\treturn normalize(result);\n}\n\nvoid main() {\n\tvec3 color = vec3(0.0);\n...", /* TRUNCATED STRING LITERAL */, 0x102675, (char**)0x4, 0x103f20, (UBOPair*)0x0, (int)_init(), ::_ubo_pairs, (Feedback*)0x0, (int)_init(), ::_feedbacks, (TexUnitPair*)0x1, 0x103ef0, (Specialization*)0x0, (int)_init(), ::_spec_pairs, (char**)0x2);
   return;
}
/* OAHashMap<unsigned long, ShaderGLES3::Version::Specialization, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned long> >::_insert_with_hash(unsigned int, unsigned long const&,
   ShaderGLES3::Version::Specialization const&) [clone .isra.0] */void OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::_insert_with_hash(OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>> *this, uint param_1, ulong *param_2, Specialization *param_3) {
   undefined8 *puVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   Specialization SVar4;
   Specialization SVar5;
   uint uVar6;
   undefined4 uVar7;
   long lVar8;
   undefined8 uVar9;
   code *pcVar10;
   void *pvVar11;
   long lVar12;
   void *pvVar13;
   ulong uVar14;
   uint uVar15;
   uint uVar16;
   long lVar17;
   void *pvVar18;
   ulong uVar19;
   uint uVar20;
   long lVar21;
   uint *puVar22;
   ulong *puVar23;
   void *pvVar24;
   undefined8 uVar25;
   undefined8 uVar26;
   undefined8 uVar27;
   Specialization local_70;
   undefined4 local_68;
   Specialization local_58;
   uint local_54;
   uVar25 = *(undefined8*)param_3;
   uVar19 = (ulong)param_1 % ( ulong ) * (uint*)( this + 0x18 );
   local_68 = *(undefined4*)( param_3 + 8 );
   local_54 = *(uint*)( param_3 + 0x10 );
   if (local_54 == 0) {
      uVar15 = 0;
      pvVar11 = (void*)0x0;
   }
 else {
      uVar15 = local_54 - 1 | local_54 - 1 >> 1;
      uVar15 = uVar15 | uVar15 >> 2;
      uVar15 = uVar15 >> 4 | uVar15;
      uVar15 = uVar15 | uVar15 >> 8;
      uVar15 = ( uVar15 | uVar15 >> 0x10 ) + 1;
      pvVar11 = (void*)Memory::realloc_static((void*)0x0, (ulong)uVar15 << 2, false);
      if (pvVar11 == (void*)0x0) goto LAB_00102c45;
      if (*(int*)( param_3 + 0x10 ) != 0) {
         lVar21 = *(long*)( param_3 + 0x18 );
         lVar12 = 0;
         do {
            *(undefined4*)( (long)pvVar11 + lVar12 * 4 ) = *(undefined4*)( lVar21 + lVar12 * 4 );
            lVar12 = lVar12 + 1;
         }
 while ( (uint)lVar12 < *(uint*)( param_3 + 0x10 ) );
      }

   }

   uVar6 = *(uint*)( param_3 + 0x20 );
   uVar26 = CONCAT44(uVar15, local_54);
   if (uVar6 == 0) {
      uVar15 = 0;
      pvVar13 = (void*)0x0;
   }
 else {
      uVar15 = uVar6 - 1 | uVar6 - 1 >> 1;
      uVar15 = uVar15 >> 2 | uVar15;
      uVar15 = uVar15 | uVar15 >> 4;
      uVar15 = uVar15 | uVar15 >> 8;
      uVar15 = ( uVar15 >> 0x10 | uVar15 ) + 1;
      pvVar13 = (void*)Memory::realloc_static((void*)0x0, (ulong)uVar15 << 2, false);
      if (pvVar13 == (void*)0x0) goto LAB_00102c45;
      if (*(int*)( param_3 + 0x20 ) != 0) {
         lVar21 = *(long*)( param_3 + 0x28 );
         lVar12 = 0;
         do {
            *(undefined4*)( (long)pvVar13 + lVar12 * 4 ) = *(undefined4*)( lVar21 + lVar12 * 4 );
            lVar12 = lVar12 + 1;
         }
 while ( (uint)lVar12 < *(uint*)( param_3 + 0x20 ) );
      }

   }

   local_58 = param_3[0x30];
   lVar21 = uVar19 * 4;
   local_70 = param_3[0x31];
   uVar27 = CONCAT44(uVar15, uVar6);
   lVar12 = *(long*)( this + 0x10 );
   puVar22 = (uint*)( lVar12 + lVar21 );
   lVar17 = *(long*)( this + 8 );
   uVar15 = *puVar22;
   lVar8 = *(long*)this;
   if (uVar15 != 0) {
      uVar14 = ( ulong ) * (uint*)( this + 0x18 );
      uVar20 = 0;
      pvVar18 = pvVar11;
      puVar23 = param_2;
      pvVar24 = pvVar13;
      do {
         uVar16 = ( uint )(( ulong )(uint)(( (int)uVar19 + (int)uVar14 ) - (int)( (ulong)uVar15 % uVar14 )) % uVar14);
         pvVar11 = pvVar18;
         param_2 = puVar23;
         pvVar13 = pvVar24;
         if (uVar16 < uVar20) {
            *puVar22 = param_1;
            puVar1 = (undefined8*)( lVar17 + uVar19 * 8 );
            param_2 = (ulong*)*puVar1;
            *puVar1 = puVar23;
            puVar1 = (undefined8*)( lVar8 + uVar19 * 0x38 );
            uVar6 = *(uint*)( puVar1 + 4 );
            local_54 = *(uint*)( puVar1 + 2 );
            pvVar11 = (void*)puVar1[3];
            uVar9 = puVar1[2];
            puVar1[3] = pvVar18;
            uVar2 = *puVar1;
            uVar3 = puVar1[4];
            SVar4 = *(Specialization*)( puVar1 + 6 );
            uVar7 = *(undefined4*)( puVar1 + 1 );
            *(Specialization*)( puVar1 + 6 ) = local_58;
            *puVar1 = uVar25;
            SVar5 = *(Specialization*)( (long)puVar1 + 0x31 );
            puVar1[2] = uVar26;
            *(Specialization*)( (long)puVar1 + 0x31 ) = local_70;
            puVar1[4] = uVar27;
            pvVar13 = (void*)puVar1[5];
            *(undefined4*)( puVar1 + 1 ) = local_68;
            puVar1[5] = pvVar24;
            uVar14 = ( ulong ) * (uint*)( this + 0x18 );
            param_1 = uVar15;
            uVar20 = uVar16;
            uVar25 = uVar2;
            uVar26 = uVar9;
            uVar27 = uVar3;
            local_58 = SVar4;
            local_70 = SVar5;
            local_68 = uVar7;
         }

         uVar20 = uVar20 + 1;
         uVar19 = ( ulong )((int)uVar19 + 1) % uVar14;
         lVar21 = uVar19 * 4;
         puVar22 = (uint*)( lVar12 + lVar21 );
         uVar15 = *puVar22;
         pvVar18 = pvVar11;
         puVar23 = param_2;
         pvVar24 = pvVar13;
      }
 while ( uVar15 != 0 );
   }

   *(ulong**)( lVar17 + uVar19 * 8 ) = param_2;
   puVar1 = (undefined8*)( lVar8 + uVar19 * 0x38 );
   puVar1[2] = 0;
   *(undefined4*)( puVar1 + 1 ) = local_68;
   puVar1[3] = 0;
   *puVar1 = uVar25;
   if (local_54 != 0) {
      uVar15 = local_54 - 1 | local_54 - 1 >> 1;
      uVar15 = uVar15 | uVar15 >> 2;
      uVar15 = uVar15 | uVar15 >> 4;
      uVar15 = uVar15 >> 8 | uVar15;
      uVar15 = ( uVar15 | uVar15 >> 0x10 ) + 1;
      *(uint*)( (long)puVar1 + 0x14 ) = uVar15;
      lVar12 = Memory::realloc_static((void*)0x0, (ulong)uVar15 * 4, false);
      puVar1[3] = lVar12;
      if (lVar12 == 0) goto LAB_00102c45;
      *(uint*)( puVar1 + 2 ) = local_54;
      lVar17 = 0;
      do {
         *(undefined4*)( lVar12 + lVar17 ) = *(undefined4*)( (long)pvVar11 + lVar17 );
         lVar17 = lVar17 + 4;
      }
 while ( lVar17 != (ulong)local_54 << 2 );
   }

   puVar1[4] = 0;
   puVar1[5] = 0;
   if (uVar6 == 0) {
      *(Specialization*)( puVar1 + 6 ) = local_58;
      *(Specialization*)( (long)puVar1 + 0x31 ) = local_70;
      *(uint*)( *(long*)( this + 0x10 ) + lVar21 ) = param_1;
      *(int*)( this + 0x1c ) = *(int*)( this + 0x1c ) + 1;
      if (pvVar13 == (void*)0x0) goto joined_r0x00102b87;
   }
 else {
      uVar15 = uVar6 - 1 >> 1 | uVar6 - 1;
      uVar15 = uVar15 >> 2 | uVar15;
      uVar15 = uVar15 | uVar15 >> 4;
      uVar15 = uVar15 | uVar15 >> 8;
      uVar15 = ( uVar15 | uVar15 >> 0x10 ) + 1;
      *(uint*)( (long)puVar1 + 0x24 ) = uVar15;
      lVar12 = Memory::realloc_static((void*)0x0, (ulong)uVar15 * 4, false);
      puVar1[5] = lVar12;
      if (lVar12 == 0) {
         LAB_00102c45:_err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar10 = (code*)invalidInstructionException();
         ( *pcVar10 )();
      }

      *(uint*)( puVar1 + 4 ) = uVar6;
      lVar17 = 0;
      do {
         *(undefined4*)( lVar12 + lVar17 ) = *(undefined4*)( (long)pvVar13 + lVar17 );
         lVar17 = lVar17 + 4;
      }
 while ( lVar17 != (ulong)uVar6 << 2 );
      *(Specialization*)( puVar1 + 6 ) = local_58;
      *(Specialization*)( (long)puVar1 + 0x31 ) = local_70;
      *(uint*)( *(long*)( this + 0x10 ) + lVar21 ) = param_1;
      *(int*)( this + 0x1c ) = *(int*)( this + 0x1c ) + 1;
   }

   Memory::free_static(pvVar13, false);
   joined_r0x00102b87:if (pvVar11 == (void*)0x0) {
      return;
   }

   Memory::free_static(pvVar11, false);
   return;
}
/* ShaderGLES3::Version::Specialization::~Specialization() */void ShaderGLES3::Version::Specialization::~Specialization(Specialization *this) {
   if (*(void**)( this + 0x28 ) != (void*)0x0) {
      if (*(int*)( this + 0x20 ) != 0) {
         *(undefined4*)( this + 0x20 ) = 0;
      }

      Memory::free_static(*(void**)( this + 0x28 ), false);
   }

   if (*(void**)( this + 0x18 ) != (void*)0x0) {
      if (*(int*)( this + 0x10 ) != 0) {
         *(undefined4*)( this + 0x10 ) = 0;
      }

      Memory::free_static(*(void**)( this + 0x18 ), false);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OAHashMap<unsigned long, ShaderGLES3::Version::Specialization, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned long> >::insert(unsigned long const&,
   ShaderGLES3::Version::Specialization const&) */void OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::insert(OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>> *this, ulong *param_1, Specialization *param_2) {
   undefined8 *puVar1;
   Specialization *pSVar2;
   uint *puVar3;
   ulong uVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   uint *puVar8;
   uint uVar9;
   Specialization *pSVar10;
   undefined8 *puVar11;
   uVar9 = *(uint*)( this + 0x18 );
   if ((double)uVar9 * __LC15 < (double)( *(int*)( this + 0x1c ) + 1 )) {
      uVar4 = ( ulong )(uVar9 * 2);
      *(undefined4*)( this + 0x1c ) = 0;
      if (uVar9 * 2 == 0) {
         uVar4 = 1;
      }

      puVar1 = *(undefined8**)( this + 8 );
      pSVar2 = *(Specialization**)this;
      *(int*)( this + 0x18 ) = (int)uVar4;
      puVar3 = *(uint**)( this + 0x10 );
      uVar5 = Memory::alloc_static(uVar4 << 3, false);
      *(undefined8*)( this + 8 ) = uVar5;
      uVar5 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0x38, false);
      *(undefined8*)this = uVar5;
      lVar6 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 2, false);
      *(long*)( this + 0x10 ) = lVar6;
      if (*(int*)( this + 0x18 ) != 0) {
         lVar7 = 0;
         do {
            *(undefined4*)( lVar6 + lVar7 * 4 ) = 0;
            lVar7 = lVar7 + 1;
         }
 while ( (uint)lVar7 < *(uint*)( this + 0x18 ) );
      }

      if (uVar9 != 0) {
         puVar8 = puVar3;
         pSVar10 = pSVar2;
         puVar11 = puVar1;
         do {
            if (*puVar8 != 0) {
               _insert_with_hash(this, *puVar8, (ulong*)*puVar11, pSVar10);
               if (*(void**)( pSVar10 + 0x28 ) != (void*)0x0) {
                  if (*(int*)( pSVar10 + 0x20 ) != 0) {
                     *(undefined4*)( pSVar10 + 0x20 ) = 0;
                  }

                  Memory::free_static(*(void**)( pSVar10 + 0x28 ), false);
               }

               if (*(void**)( pSVar10 + 0x18 ) != (void*)0x0) {
                  if (*(int*)( pSVar10 + 0x10 ) != 0) {
                     *(undefined4*)( pSVar10 + 0x10 ) = 0;
                  }

                  Memory::free_static(*(void**)( pSVar10 + 0x18 ), false);
               }

            }

            puVar11 = puVar11 + 1;
            puVar8 = puVar8 + 1;
            pSVar10 = pSVar10 + 0x38;
         }
 while ( puVar11 != puVar1 + uVar9 );
         Memory::free_static(puVar1, false);
         Memory::free_static(pSVar2, false);
         Memory::free_static(puVar3, false);
      }

   }

   uVar4 = (long)*param_1 * 0x3ffff - 1;
   uVar4 = ( uVar4 ^ uVar4 >> 0x1f ) * 0x15;
   uVar4 = ( uVar4 ^ uVar4 >> 0xb ) * 0x41;
   uVar9 = ( uint )(uVar4 >> 0x16) ^ (uint)uVar4;
   if (uVar9 == 0) {
      uVar9 = 1;
   }

   _insert_with_hash(this, uVar9, (ulong*)*param_1, param_2);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* ShaderGLES3::Version::Specialization::~Specialization() */void ShaderGLES3::Version::Specialization::~Specialization(Specialization *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CubemapFilterShaderGLES3::~CubemapFilterShaderGLES3() */void CubemapFilterShaderGLES3::~CubemapFilterShaderGLES3(CubemapFilterShaderGLES3 *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


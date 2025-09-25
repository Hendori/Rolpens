/* (anonymous namespace)::_is_triangle_hole(JPH::Array<JPH::Float3, JPH::STLAllocator<JPH::Float3> >
   const&, int, int, int) [clone .isra.0] */ulong(anonymous_namespace) {
   float fVar1;
   int3 iVar2;
   byte bVar3;
   uint uVar4;
   ulong uVar6;
   ulong uVar5;
   fVar1 = *(float*)( param_1 + (long)param_2 * 0xc + 4 );
   iVar2 = ( int3 )((uint)param_4 >> 8);
   uVar6 = (ulong)CONCAT31(iVar2, !NAN(fVar1) && !NAN(_LC1));
   if (fVar1 != _LC1) {
      uVar6 = 0;
   }

   bVar3 = NAN(fVar1) | (byte)uVar6;
   uVar5 = CONCAT71(( int7 )(( ulong )((long)param_2 * 3) >> 8), bVar3);
   if (bVar3 == 0) {
      fVar1 = *(float*)( param_1 + (long)param_3 * 0xc + 4 );
      uVar5 = uVar5 & 0xffffffff;
      if (fVar1 == _LC1) {
         uVar5 = CONCAT71(( int7 )(uVar6 >> 8), !NAN(fVar1) && !NAN(_LC1));
      }

      bVar3 = (byte)uVar5 | NAN(fVar1);
      uVar5 = CONCAT71(( int7 )(uVar5 >> 8), bVar3);
      if (bVar3 == 0) {
         fVar1 = *(float*)( param_1 + (long)param_4 * 0xc + 4 );
         uVar4 = (uint)uVar5;
         if (fVar1 == _LC1) {
            uVar4 = (uint)CONCAT71((int7)iVar2, !NAN(fVar1) && !NAN(_LC1));
         }

         return ( ulong )(uVar4 | (uint)CONCAT71(( int7 )(( ulong )((long)param_4 * 3) >> 8), NAN(fVar1)));
      }

   }

   return uVar5;
}
/* JoltHeightMapShape3D::get_data() const */void JoltHeightMapShape3D::get_data(void) {
   char cVar1;
   Variant *pVVar2;
   long in_RSI;
   Variant *in_RDI;
   long in_FS_OFFSET;
   Dictionary local_80[8];
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(local_80);
   Variant::Variant((Variant*)local_58, *(int*)( in_RSI + 0x98 ));
   Variant::Variant((Variant*)local_78, "width");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_80);
   if (pVVar2 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_58[0];
      *(undefined8*)( pVVar2 + 8 ) = local_50;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, *(int*)( in_RSI + 0x9c ));
   Variant::Variant((Variant*)local_78, "depth");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_80);
   if (pVVar2 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_58[0];
      *(undefined8*)( pVVar2 + 8 ) = local_50;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, (Vector*)( in_RSI + 0x88 ));
   Variant::Variant((Variant*)local_78, "heights");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_80);
   if (pVVar2 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_58[0];
      *(undefined8*)( pVVar2 + 8 ) = local_50;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant(in_RDI, local_80);
   Dictionary::~Dictionary(local_80);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltHeightMapShape3D::_calculate_aabb() const */void JoltHeightMapShape3D::_calculate_aabb(void) {
   float fVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   float fVar6;
   int iVar7;
   long lVar8;
   int iVar9;
   long in_RSI;
   float *in_RDI;
   long lVar10;
   int iVar11;
   int iVar12;
   long in_FS_OFFSET;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   fVar6 = _LC5;
   iVar12 = 0;
   iVar2 = *(int*)( in_RSI + 0x9c );
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar7 = *(int*)( in_RSI + 0x98 );
   for (int i = 0; i < 3; i++) {
      in_RDI[i] = 0;
   }

   iVar9 = 1 - iVar7;
   for (int i = 0; i < 3; i++) {
      in_RDI[( i + 3 )] = 0;
   }

   if (0 < iVar2) {
      do {
         if (0 < iVar7) {
            iVar11 = 0;
            fVar19 = (float)iVar12 + (float)( 1 - iVar2 ) * fVar6;
            LAB_0010042d:do {
               lVar4 = *(long*)( in_RSI + 0x90 );
               lVar8 = (long)( iVar7 * iVar12 + iVar11 );
               if (lVar4 == 0) {
                  lVar10 = 0;
                  LAB_001005f3:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar10, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar5 = (code*)invalidInstructionException();
                  ( *pcVar5 )();
               }

               lVar10 = *(long*)( lVar4 + -8 );
               if (lVar10 <= lVar8) goto LAB_001005f3;
               fVar17 = *(float*)( lVar4 + lVar8 * 4 );
               fVar16 = (float)iVar11 + (float)iVar9 * fVar6;
               if (iVar12 == 0 && iVar11 == 0) {
                  iVar11 = iVar11 + 1;
                  *(ulong*)in_RDI = CONCAT44(fVar17, fVar16);
                  in_RDI[2] = fVar19;
                  if (iVar7 <= iVar11) break;
                  goto LAB_0010042d;
               }

               fVar18 = in_RDI[3];
               if (( ( fVar18 < 0.0 ) || ( in_RDI[4] <= 0.0 && in_RDI[4] != 0.0 ) ) || ( in_RDI[5] <= 0.0 && in_RDI[5] != 0.0 )) {
                  _err_print_error("expand_to", "./core/math/aabb.h", 0x158, "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size.", 0, 0);
                  iVar7 = *(int*)( in_RSI + 0x98 );
               }

               fVar14 = *in_RDI;
               iVar11 = iVar11 + 1;
               fVar15 = in_RDI[1];
               fVar1 = in_RDI[2];
               fVar13 = fVar16;
               if (fVar14 <= fVar16) {
                  fVar13 = fVar14;
               }

               fVar18 = fVar18 + fVar14;
               if (fVar16 <= fVar18) {
                  fVar16 = fVar18;
               }

               fVar18 = fVar17;
               if (fVar15 <= fVar17) {
                  fVar18 = fVar15;
               }

               if (fVar17 <= in_RDI[4] + fVar15) {
                  fVar17 = in_RDI[4] + fVar15;
               }

               fVar14 = fVar19;
               if (fVar1 <= fVar19) {
                  fVar14 = fVar1;
               }

               fVar15 = fVar19;
               if (fVar19 <= in_RDI[5] + fVar1) {
                  fVar15 = in_RDI[5] + fVar1;
               }

               *in_RDI = fVar13;
               in_RDI[1] = fVar18;
               in_RDI[2] = fVar14;
               in_RDI[3] = fVar16 - fVar13;
               *(ulong*)( in_RDI + 4 ) = CONCAT44(fVar15 - fVar14, fVar17 - fVar18);
            }
 while ( iVar11 < iVar7 );
         }

         iVar12 = iVar12 + 1;
      }
 while ( iVar12 < *(int*)( in_RSI + 0x9c ) );
   }

   if (lVar3 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* JoltHeightMapShape3D::set_data(Variant const&) */void JoltHeightMapShape3D::set_data(JoltHeightMapShape3D *this, Variant *param_1) {
   long *plVar1;
   char cVar2;
   long lVar3;
   long lVar4;
   int iVar5;
   long in_FS_OFFSET;
   undefined8 local_118;
   undefined8 uStack_110;
   undefined8 local_108;
   Variant local_f0[8];
   Variant local_e8[8];
   long local_e0;
   int local_d8[8];
   int local_b8[8];
   int local_98[8];
   undefined8 local_78;
   undefined1 local_70[16];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)param_1 == 0x1b) {
      Variant::operator_cast_to_Dictionary(local_f0);
      local_70 = (undefined1[16])0x0;
      local_78 = 0;
      Variant::Variant((Variant*)local_58, "heights");
      Dictionary::get((Variant*)local_d8, local_f0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      if (local_d8[0] == 0x20) {
         local_78 = 0;
         local_70 = (undefined1[16])0x0;
         Variant::Variant((Variant*)local_58, "width");
         Dictionary::get((Variant*)local_b8, local_f0);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         if (local_b8[0] == 2) {
            local_78 = 0;
            local_70 = (undefined1[16])0x0;
            Variant::Variant((Variant*)local_58, "depth");
            Dictionary::get((Variant*)local_98, local_f0);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (Variant::needs_deinit[(int)local_78] != '\0') {
               Variant::_clear_internal();
            }

            if (local_98[0] == 2) {
               Variant::operator_cast_to_Vector(local_e8);
               lVar4 = local_e0;
               lVar3 = *(long*)( this + 0x90 );
               if (lVar3 == local_e0) {
                  if (lVar3 != 0) {
                     LOCK();
                     plVar1 = (long*)( lVar3 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_e0 = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }

                  }

               }
 else {
                  if (lVar3 != 0) {
                     LOCK();
                     plVar1 = (long*)( lVar3 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( this + 0x90 );
                        *(undefined8*)( this + 0x90 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  *(long*)( this + 0x90 ) = local_e0;
               }

               iVar5 = Variant::operator_cast_to_int((Variant*)local_b8);
               *(int*)( this + 0x98 ) = iVar5;
               iVar5 = Variant::operator_cast_to_int((Variant*)local_98);
               *(int*)( this + 0x9c ) = iVar5;
               _calculate_aabb();
               *(undefined8*)( this + 0x70 ) = local_118;
               *(undefined8*)( this + 0x78 ) = uStack_110;
               *(undefined8*)( this + 0x80 ) = local_108;
               JoltShape3D::destroy();
               cVar2 = Variant::needs_deinit[local_98[0]];
            }
 else {
               _err_print_error("set_data", "modules/jolt_physics/shapes/jolt_height_map_shape_3d.cpp", 0xdc, "Condition \"maybe_depth.get_type() != Variant::INT\" is true.", 0, 0);
               cVar2 = Variant::needs_deinit[local_98[0]];
            }

            if (cVar2 != '\0') {
               Variant::_clear_internal();
            }

         }
 else {
            _err_print_error("set_data", "modules/jolt_physics/shapes/jolt_height_map_shape_3d.cpp", 0xd9, "Condition \"maybe_width.get_type() != Variant::INT\" is true.", 0, 0);
         }

         if (Variant::needs_deinit[local_b8[0]] != '\0') {
            Variant::_clear_internal();
         }

      }
 else {
         _err_print_error("set_data", "modules/jolt_physics/shapes/jolt_height_map_shape_3d.cpp", 0xd5, "Condition \"maybe_heights.get_type() != Variant::PACKED_FLOAT32_ARRAY\" is true.", 0, 0);
      }

      if (Variant::needs_deinit[local_d8[0]] != '\0') {
         Variant::_clear_internal();
      }

      Dictionary::~Dictionary((Dictionary*)local_f0);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("set_data", "modules/jolt_physics/shapes/jolt_height_map_shape_3d.cpp", 0xcc, "Condition \"p_data.get_type() != Variant::DICTIONARY\" is true.", 0, 0);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltHeightMapShape3D::to_string() const */void JoltHeightMapShape3D::to_string(void) {
   long *plVar1;
   int iVar2;
   long lVar3;
   long in_RSI;
   String_conflict *in_RDI;
   int iVar4;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   iVar2 = *(int*)( in_RSI + 0x98 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 0x90 ) == 0) {
      iVar4 = 0;
   }
 else {
      iVar4 = (int)*(undefined8*)( *(long*)( in_RSI + 0x90 ) + -8 );
   }

   local_50 = 0;
   local_48 = "{height_count=%d width=%d depth=%d}";
   local_40 = 0x23;
   String::parse_latin1((StrRange*)&local_50);
   vformat<long,int,int>(in_RDI, (long)&local_50, iVar4, iVar2);
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

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltHeightMapShape3D::_build_height_field() const */void JoltHeightMapShape3D::_build_height_field(void) {
   long *plVar1;
   Vector3 *pVVar2;
   long *plVar3;
   long *plVar4;
   code *pcVar5;
   float fVar6;
   char *pcVar7;
   uint uVar8;
   void *pvVar9;
   long lVar10;
   void *pvVar11;
   long *plVar12;
   long in_RSI;
   Shape *in_RDI;
   float fVar13;
   int iVar14;
   long lVar15;
   int iVar16;
   int iVar17;
   long lVar18;
   long in_FS_OFFSET;
   float fVar19;
   HeightFieldShapeSettings *pHVar20;
   long local_198;
   long local_190;
   long local_188;
   long local_180;
   char *local_178;
   undefined8 uStack_170;
   long *local_168;
   undefined8 local_158;
   undefined4 local_150;
   Vector3 *local_148;
   Vector3 local_138[16];
   char local_128;
   code *local_118[3];
   long *local_100;
   long local_f0[2];
   char local_e0;
   undefined4 local_a4;
   undefined8 local_a0;
   long local_90;
   undefined8 local_88;
   long local_78;
   long local_70;
   long *local_60;
   undefined4 local_58;
   long local_40;
   iVar16 = *(int*)( in_RSI + 0x98 );
   iVar17 = *(int*)( in_RSI + 0x9c );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar18 = *(long*)( in_RSI + 0x90 );
   fVar19 = (float)( 1 - iVar17 ) * _LC5;
   pHVar20._0_4_ = (HeightFieldShapeSettings*)( (float)( 1 - iVar16 ) * _LC5 );
   if (( lVar18 == 0 ) || ( iVar14 = iVar14 == 0 )) {
      pvVar9 = (void*)0x0;
   }
 else {
      uVar8 = iVar14 - 1;
      uVar8 = uVar8 | uVar8 >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      pvVar9 = (void*)Memory::realloc_static((void*)0x0, ( ulong )(( uVar8 | uVar8 >> 0x10 ) + 1) << 2, false);
      if (pvVar9 == (void*)0x0) {
         _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar5 = (code*)invalidInstructionException();
         ( *pcVar5 )();
      }

      iVar16 = *(int*)( in_RSI + 0x98 );
      iVar17 = *(int*)( in_RSI + 0x9c );
      lVar18 = *(long*)( in_RSI + 0x90 );
   }

   fVar6 = _LC1;
   if (0 < iVar17) {
      lVar15 = 0;
      iVar14 = 0;
      pvVar11 = (void*)( (long)pvVar9 + (long)( ( iVar17 + -1 ) * iVar16 ) * 4 );
      do {
         lVar10 = 0;
         if (0 < iVar16) {
            do {
               fVar13 = *(float*)( lVar18 + lVar15 * 4 + lVar10 );
               if (NAN(fVar13)) {
                  fVar13 = fVar6;
               }

               *(float*)( (long)pvVar11 + lVar10 ) = fVar13;
               lVar10 = lVar10 + 4;
            }
 while ( (long)iVar16 * 4 - lVar10 != 0 );
         }

         iVar14 = iVar14 + 1;
         pvVar11 = (void*)( (long)pvVar11 + (long)-iVar16 * 4 );
         lVar15 = lVar15 + iVar16;
      }
 while ( iVar14 != iVar17 );
   }

   local_178 = (char*)0x0;
   uStack_170 = 0;
   local_168 = (long*)0x0;
   JPH::HeightFieldShapeSettings::HeightFieldShapeSettings(pHVar20._0_4_, CONCAT44(fVar19, fVar19), 0x3f8000003f800000, 0x3f8000003f800000, local_118, pvVar9, iVar16, 0, &local_178);
   if (local_168 != (long*)0x0) {
      if (local_178 != (char*)0x0) {
         plVar3 = local_168 + (long)local_178;
         plVar12 = local_168;
         joined_r0x00100da1:if (plVar12 < plVar3) {
            do {
               plVar4 = (long*)*plVar12;
               if (plVar4 != (long*)0x0) {
                  LOCK();
                  plVar1 = plVar4 + 1;
                  *(int*)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                     if (*(code**)( *plVar4 + 0x18 ) == JPH::PhysicsMaterial::~PhysicsMaterial) goto code_r0x00100ddf;
                     ( **(code**)( *plVar4 + 0x18 ) )();
                  }

               }

               plVar12 = plVar12 + 1;
               if (plVar3 <= plVar12) break;
            }
 while ( true );
         }

      }

      local_178 = (char*)0x0;
      ( *JPH::Free )(local_168);
   }

   local_a4 = JPH::HeightFieldShapeSettings::CalculateBitsPerSampleForError(0.0);
   local_58 = JoltProjectSettings::get_active_edge_threshold();
   JPH::HeightFieldShapeSettings::Create();
   if (local_128 == '\x02') {
      JoltShape3D::_owners_to_string();
      String::utf8((char*)&local_190, (int)local_148);
      to_string();
      local_180 = 0;
      local_178 = "Failed to build Jolt Physics height map shape with %s. It returned the following error: \'%s\'. This shape belongs to %s.";
      uStack_170 = 0x77;
      String::parse_latin1((StrRange*)&local_180);
      vformat<String,String,String>(&local_178, (StrRange*)&local_180, &local_198, &local_190, &local_188);
      _err_print_error("_build_height_field", "modules/jolt_physics/shapes/jolt_height_map_shape_3d.cpp", 0x70, "Condition \"shape_result.HasError()\" is true. Returning: nullptr", &local_178, 0, 0);
      pcVar7 = local_178;
      if (local_178 != (char*)0x0) {
         LOCK();
         plVar3 = (long*)( local_178 + -0x10 );
         *plVar3 = *plVar3 + -1;
         UNLOCK();
         if (*plVar3 == 0) {
            local_178 = (char*)0x0;
            Memory::free_static(pcVar7 + -0x10, false);
         }

      }

      lVar18 = local_180;
      if (local_180 != 0) {
         LOCK();
         plVar3 = (long*)( local_180 + -0x10 );
         *plVar3 = *plVar3 + -1;
         UNLOCK();
         if (*plVar3 == 0) {
            local_180 = 0;
            Memory::free_static((void*)( lVar18 + -0x10 ), false);
         }

      }

      lVar18 = local_198;
      if (local_198 != 0) {
         LOCK();
         plVar3 = (long*)( local_198 + -0x10 );
         *plVar3 = *plVar3 + -1;
         UNLOCK();
         if (*plVar3 == 0) {
            local_198 = 0;
            Memory::free_static((void*)( lVar18 + -0x10 ), false);
         }

      }

      lVar18 = local_190;
      if (local_190 != 0) {
         LOCK();
         plVar3 = (long*)( local_190 + -0x10 );
         *plVar3 = *plVar3 + -1;
         UNLOCK();
         if (*plVar3 == 0) {
            local_190 = 0;
            Memory::free_static((void*)( lVar18 + -0x10 ), false);
         }

      }

      lVar18 = local_188;
      if (local_188 != 0) {
         LOCK();
         plVar3 = (long*)( local_188 + -0x10 );
         *plVar3 = *plVar3 + -1;
         UNLOCK();
         if (*plVar3 == 0) {
            local_188 = 0;
            Memory::free_static((void*)( lVar18 + -0x10 ), false);
         }

      }

      *(undefined8*)in_RDI = 0;
   }
 else {
      local_150 = 0xbf800000;
      local_158 = _LC34;
      JoltShape3D::with_scale(in_RDI, local_148);
   }

   if (local_128 == '\x01') {
      if (local_148 != (Vector3*)0x0) {
         LOCK();
         pVVar2 = local_148 + 8;
         *(int*)pVVar2 = *(int*)pVVar2 + -1;
         UNLOCK();
         if (*(int*)pVVar2 == 0) {
            ( **(code**)( *(long*)local_148 + 8 ) )();
         }

      }

   }
 else if (( local_128 == '\x02' ) && ( local_148 != local_138 )) {
      ( *JPH::Free )();
   }

   local_118[0] = String::utf8;
   if (local_60 != (long*)0x0) {
      if (local_70 != 0) {
         plVar3 = local_60 + local_70;
         plVar12 = local_60;
         joined_r0x00100ec7:if (plVar12 < plVar3) {
            do {
               plVar4 = (long*)*plVar12;
               if (plVar4 != (long*)0x0) {
                  LOCK();
                  plVar1 = plVar4 + 1;
                  *(int*)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                     if (*(code**)( *plVar4 + 0x18 ) == JPH::PhysicsMaterial::~PhysicsMaterial) goto code_r0x00100f00;
                     ( **(code**)( *plVar4 + 0x18 ) )();
                  }

               }

               plVar12 = plVar12 + 1;
               if (plVar3 <= plVar12) break;
            }
 while ( true );
         }

      }

      local_70 = 0;
      ( *JPH::Free )(local_60);
   }

   if (local_78 != 0) {
      local_88 = 0;
      ( *JPH::Free )();
   }

   if (local_90 != 0) {
      local_a0 = 0;
      ( *JPH::Free )();
   }

   local_118[0] = _err_print_index_error;
   if (local_e0 == '\x01') {
      if (local_100 != (long*)0x0) {
         LOCK();
         plVar3 = local_100 + 1;
         *(int*)plVar3 = (int)*plVar3 + -1;
         UNLOCK();
         if ((int)*plVar3 == 0) {
            ( **(code**)( *local_100 + 8 ) )();
         }

      }

   }
 else if (( local_e0 == '\x02' ) && ( local_100 != local_f0 )) {
      ( *JPH::Free )();
   }

   if (pvVar9 != (void*)0x0) {
      Memory::free_static(pvVar9, false);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   code_r0x00100ddf:( *JPH::Free )();
   plVar12 = plVar12 + 1;
   goto joined_r0x00100da1;
   code_r0x00100f00:( *JPH::Free )();
   plVar12 = plVar12 + 1;
   goto joined_r0x00100ec7;
}
/* JoltHeightMapShape3D::_build_mesh() const */undefined8 *JoltHeightMapShape3D::_build_mesh(void) {
   int iVar1;
   int iVar2;
   long *plVar3;
   long *plVar4;
   int *piVar5;
   Array *pAVar6;
   undefined4 uVar7;
   long lVar8;
   long *plVar9;
   code *pcVar10;
   char *pcVar11;
   char cVar12;
   int iVar13;
   Array *pAVar14;
   ulong uVar15;
   long lVar16;
   int iVar17;
   ulong uVar18;
   int iVar19;
   ulong uVar20;
   long in_RSI;
   undefined8 *in_RDI;
   long lVar21;
   ulong uVar22;
   ulong uVar23;
   int iVar24;
   int iVar25;
   int iVar26;
   ulong uVar27;
   int iVar28;
   int iVar29;
   long *plVar30;
   long in_FS_OFFSET;
   float fVar31;
   float fVar32;
   long local_1a8;
   long local_178;
   long local_170;
   ulong local_168;
   ulong local_160;
   Array *local_158;
   ulong local_148;
   ulong local_140;
   long local_138;
   char *local_128;
   undefined8 uStack_120;
   long *local_118;
   long *local_108;
   long local_f8[2];
   char local_e8;
   MeshShapeSettings local_d8[140];
   undefined4 local_4c;
   long local_40;
   iVar17 = *(int*)( in_RSI + 0x98 );
   iVar28 = *(int*)( in_RSI + 0x9c );
   iVar1 = iVar28 + -1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = iVar17 + -1;
   if (*(long*)( in_RSI + 0x90 ) == 0) {
      uVar18 = 0;
      pAVar14 = (Array*)0x0;
   }
 else {
      uVar18 = ( ulong ) * (int*)( *(long*)( in_RSI + 0x90 ) + -8 );
      pAVar14 = (Array*)0x0;
      if (uVar18 != 0) {
         pAVar14 = (Array*)( *JPH::Reallocate )(0, 0, uVar18 * 0xc);
      }

   }

   local_1a8 = 0;
   uVar23 = ( ulong )(iVar2 * iVar1 * 2);
   if (uVar23 != 0) {
      local_1a8 = ( *JPH::Reallocate )(0, 0, uVar23 * 0x14);
   }

   uVar20 = 0;
   fVar32 = (float)( 1 - iVar28 ) * _LC5;
   fVar31 = (float)( 1 - iVar17 ) * _LC5;
   if (0 < *(int*)( in_RSI + 0x9c )) {
      iVar17 = *(int*)( in_RSI + 0x98 );
      iVar28 = 0;
      do {
         if (0 < iVar17) {
            iVar26 = 0;
            uVar15 = uVar18;
            do {
               uVar20 = uVar20 + 1;
               lVar8 = *(long*)( in_RSI + 0x90 );
               lVar16 = (long)( iVar17 * iVar28 + iVar26 );
               if (lVar8 == 0) {
                  lVar21 = 0;
                  LAB_001013f7:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar16, lVar21, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar10 = (code*)invalidInstructionException();
                  ( *pcVar10 )();
               }

               lVar21 = *(long*)( lVar8 + -8 );
               if (lVar21 <= lVar16) goto LAB_001013f7;
               uVar7 = *(undefined4*)( lVar8 + lVar16 * 4 );
               uVar18 = uVar15;
               if (uVar15 < uVar20) {
                  uVar18 = uVar20;
                  if (uVar20 <= uVar15 * 2) {
                     uVar18 = uVar15 * 2;
                  }

                  pAVar14 = (Array*)( *JPH::Reallocate )(pAVar14, uVar15 * 0xc, uVar18 * 0xc);
                  iVar17 = *(int*)( in_RSI + 0x98 );
               }

               pAVar6 = pAVar14 + uVar20 * 0xc + -0xc;
               if (pAVar6 != (Array*)0x0) {
                  *(ulong*)pAVar6 = CONCAT44(uVar7, (float)iVar26 + fVar31);
                  *(float*)( pAVar6 + 8 ) = (float)iVar28 + fVar32;
               }

               iVar26 = iVar26 + 1;
               uVar15 = uVar18;
            }
 while ( iVar26 < iVar17 );
         }

         iVar28 = iVar28 + 1;
      }
 while ( iVar28 < *(int*)( in_RSI + 0x9c ) );
   }

   uVar15 = 0;
   if (0 < iVar1) {
      iVar17 = 0;
      do {
         iVar28 = 0;
         iVar26 = iVar17 + 1;
         if (0 < iVar2) {
            do {
               while (true) {
                  iVar13 = iVar17 * *(int*)( in_RSI + 0x98 );
                  iVar19 = *(int*)( in_RSI + 0x98 ) + iVar13;
                  iVar24 = iVar28 + 1;
                  iVar25 = iVar28 + iVar19;
                  iVar29 = iVar13 + iVar24;
                  iVar19 = iVar19 + iVar24;
                  cVar12 = (anonymous_namespace)::_is_triangle_hole(pAVar14, iVar13 + iVar28, iVar25, iVar29);
                  uVar22 = uVar23;
                  uVar27 = uVar15;
                  if (cVar12 == '\0') {
                     uVar27 = uVar15 + 1;
                     if (uVar23 < uVar27) {
                        uVar22 = uVar23 * 2;
                        if (uVar23 * 2 < uVar27) {
                           uVar22 = uVar27;
                        }

                        local_1a8 = ( *JPH::Reallocate )(local_1a8, uVar23 * 0x14, uVar22 * 0x14);
                     }

                     piVar5 = (int*)( local_1a8 + uVar15 * 0x14 );
                     if (piVar5 != (int*)0x0) {
                        *piVar5 = iVar13 + iVar28;
                        piVar5[1] = iVar25;
                        piVar5[2] = iVar29;
                        piVar5[3] = 0;
                        piVar5[4] = 0;
                     }

                  }

                  cVar12 = (anonymous_namespace)::_is_triangle_hole(pAVar14, iVar29, iVar25, iVar19);
                  uVar23 = uVar22;
                  iVar28 = iVar24;
                  if (cVar12 == '\0') break;
                  uVar15 = uVar27;
                  if (iVar24 == iVar2) goto LAB_0010162d;
               }
;
               uVar15 = uVar27 + 1;
               if (uVar22 < uVar15) {
                  uVar23 = uVar22 * 2;
                  if (uVar22 * 2 < uVar15) {
                     uVar23 = uVar15;
                  }

                  local_1a8 = ( *JPH::Reallocate )(local_1a8, uVar22 * 0x14, uVar23 * 0x14);
               }

               piVar5 = (int*)( local_1a8 + uVar27 * 0x14 );
               if (piVar5 != (int*)0x0) {
                  *piVar5 = iVar29;
                  piVar5[1] = iVar25;
                  piVar5[2] = iVar19;
                  piVar5[3] = 0;
                  piVar5[4] = 0;
               }

            }
 while ( iVar24 != iVar2 );
         }

         LAB_0010162d:iVar17 = iVar26;
      }
 while ( iVar1 != iVar26 );
   }

   local_118 = (long*)0x0;
   local_138 = local_1a8;
   local_128 = (char*)0x0;
   uStack_120 = 0;
   local_168 = uVar20;
   local_160 = uVar18;
   local_158 = pAVar14;
   local_148 = uVar15;
   local_140 = uVar23;
   JPH::MeshShapeSettings::MeshShapeSettings(local_d8, &local_168, (StrRange*)&local_148, &local_128);
   if (local_158 != (Array*)0x0) {
      local_168 = 0;
      ( *JPH::Free )();
   }

   if (local_138 != 0) {
      local_148 = 0;
      ( *JPH::Free )();
   }

   if (local_118 != (long*)0x0) {
      if (local_128 != (char*)0x0) {
         plVar4 = local_118 + (long)local_128;
         for (plVar30 = local_118; plVar30 < plVar4; plVar30 = plVar30 + 1) {
            plVar9 = (long*)*plVar30;
            if (plVar9 != (long*)0x0) {
               LOCK();
               plVar3 = plVar9 + 1;
               *(int*)plVar3 = (int)*plVar3 + -1;
               UNLOCK();
               if ((int)*plVar3 == 0) {
                  if (*(code**)( *plVar9 + 0x18 ) == JPH::PhysicsMaterial::~PhysicsMaterial) {
                     ( *JPH::Free )();
                  }
 else {
                     ( **(code**)( *plVar9 + 0x18 ) )();
                  }

               }

            }

         }

      }

      local_128 = (char*)0x0;
      ( *JPH::Free )(local_118);
   }

   local_4c = JoltProjectSettings::get_active_edge_threshold();
   JPH::MeshShapeSettings::Create();
   if (local_e8 == '\x02') {
      JoltShape3D::_owners_to_string();
      String::utf8((char*)&local_170, (int)local_108);
      to_string();
      local_148 = 0;
      local_128 = "Failed to build Jolt Physics height map shape (as polygon) with %s. It returned the following error: \'%s\'. This shape belongs to %s.";
      uStack_120 = 0x84;
      String::parse_latin1((StrRange*)&local_148);
      vformat<String,String,String>(&local_128, (StrRange*)&local_148, &local_178, &local_170, &local_168);
      _err_print_error("_build_mesh", "modules/jolt_physics/shapes/jolt_height_map_shape_3d.cpp", 0xa6, "Condition \"shape_result.HasError()\" is true. Returning: nullptr", &local_128, 0, 0);
      pcVar11 = local_128;
      if (local_128 != (char*)0x0) {
         LOCK();
         plVar4 = (long*)( local_128 + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_128 = (char*)0x0;
            Memory::free_static(pcVar11 + -0x10, false);
         }

      }

      uVar18 = local_148;
      if (local_148 != 0) {
         LOCK();
         plVar4 = (long*)( local_148 - 0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_148 = 0;
            Memory::free_static((void*)( uVar18 - 0x10 ), false);
         }

      }

      lVar8 = local_178;
      if (local_178 != 0) {
         LOCK();
         plVar4 = (long*)( local_178 + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_178 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      lVar8 = local_170;
      if (local_170 != 0) {
         LOCK();
         plVar4 = (long*)( local_170 + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_170 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      uVar18 = local_168;
      if (local_168 != 0) {
         LOCK();
         plVar4 = (long*)( local_168 - 0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_168 = 0;
            Memory::free_static((void*)( uVar18 - 0x10 ), false);
         }

      }

      *in_RDI = 0;
   }
 else {
      *in_RDI = local_108;
      if (local_108 == (long*)0x0) goto LAB_00101824;
      LOCK();
      *(int*)( local_108 + 1 ) = (int)local_108[1] + 1;
      UNLOCK();
   }

   if (local_e8 == '\x01') {
      if (local_108 != (long*)0x0) {
         LOCK();
         plVar4 = local_108 + 1;
         *(int*)plVar4 = (int)*plVar4 + -1;
         UNLOCK();
         if ((int)*plVar4 == 0) {
            ( **(code**)( *local_108 + 8 ) )();
         }

      }

   }
 else if (( local_e8 == '\x02' ) && ( local_108 != local_f8 )) {
      ( *JPH::Free )();
   }

   LAB_00101824:JPH::MeshShapeSettings::~MeshShapeSettings(local_d8);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return in_RDI;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltHeightMapShape3D::_build() const */void JoltHeightMapShape3D::_build(void) {
   long *plVar1;
   long *plVar2;
   int iVar3;
   int iVar4;
   long lVar5;
   int iVar6;
   char *pcVar7;
   undefined8 uVar8;
   long in_RSI;
   Shape *in_RDI;
   long in_FS_OFFSET;
   long local_60;
   long local_58;
   long local_50;
   long *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( in_RSI + 0x90 ) != 0 ) && ( iVar6 = iVar6 != 0 )) {
      iVar3 = *(int*)( in_RSI + 0x98 );
      iVar4 = *(int*)( in_RSI + 0x9c );
      if (iVar3 * iVar4 == iVar6) {
         if (( 1 < iVar3 ) && ( 1 < iVar4 )) {
            if (( iVar3 == iVar4 ) && ( 3 < iVar3 )) {
               _build_height_field();
               JoltShape3D::with_double_sided(in_RDI, SUB81(local_48, 0));
               if (local_48 != (long*)0x0) {
                  LOCK();
                  plVar2 = local_48 + 1;
                  *(int*)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                     ( **(code**)( *local_48 + 8 ) )();
                  }

               }

            }
 else {
               _build_mesh();
               plVar2 = local_48;
               JoltShape3D::with_double_sided(in_RDI, SUB81(local_48, 0));
               if (plVar2 != (long*)0x0) {
                  LOCK();
                  plVar1 = plVar2 + 1;
                  *(int*)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                     ( **(code**)( *plVar2 + 8 ) )(plVar2);
                  }

               }

            }

            goto LAB_00101ae0;
         }

         JoltShape3D::_owners_to_string();
         to_string();
         local_48 = (long*)0x1025f0;
         local_50 = 0;
         local_40 = 0x75;
         String::parse_latin1((StrRange*)&local_50);
         vformat<String,String>(&local_48, (StrRange*)&local_50, &local_60, &local_58);
         pcVar7 = "Condition \"width < 2 || depth < 2\" is true. Returning: nullptr";
         uVar8 = 0x3b;
      }
 else {
         JoltShape3D::_owners_to_string();
         to_string();
         local_48 = (long*)0x102520;
         local_50 = 0;
         local_40 = 0x85;
         String::parse_latin1((StrRange*)&local_50);
         vformat<String,String>(&local_48, (StrRange*)&local_50, &local_60, &local_58);
         pcVar7 = "Condition \"height_count != width * depth\" is true. Returning: nullptr";
         uVar8 = 0x3a;
      }

      _err_print_error("_build", "modules/jolt_physics/shapes/jolt_height_map_shape_3d.cpp", uVar8, pcVar7, &local_48, 0, 0);
      plVar2 = local_48;
      if (local_48 != (long*)0x0) {
         LOCK();
         plVar1 = local_48 + -2;
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (long*)0x0;
            Memory::free_static(plVar2 + -2, false);
         }

      }

      lVar5 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar2 = (long*)( local_50 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      lVar5 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar2 = (long*)( local_60 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      lVar5 = local_58;
      if (local_58 != 0) {
         LOCK();
         plVar2 = (long*)( local_58 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 == 0) {
            local_58 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

   }

   *(undefined8*)in_RDI = 0;
   LAB_00101ae0:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* JoltHeightMapShape3D::get_type() const */undefined8 JoltHeightMapShape3D::get_type(void) {
   return 8;
}
/* JoltHeightMapShape3D::is_convex() const */undefined8 JoltHeightMapShape3D::is_convex(void) {
   return 0;
}
/* JoltHeightMapShape3D::get_margin() const */undefined8 JoltHeightMapShape3D::get_margin(void) {
   return 0;
}
/* JoltHeightMapShape3D::set_margin(float) */void JoltHeightMapShape3D::set_margin(float param_1) {
   return;
}
/* JoltHeightMapShape3D::get_aabb() const */void JoltHeightMapShape3D::get_aabb(void) {
   undefined8 uVar1;
   undefined8 uVar2;
   long in_RSI;
   undefined8 *in_RDI;
   uVar1 = *(undefined8*)( in_RSI + 0x70 );
   uVar2 = *(undefined8*)( in_RSI + 0x78 );
   in_RDI[2] = *(undefined8*)( in_RSI + 0x80 );
   *in_RDI = uVar1;
   in_RDI[1] = uVar2;
   return;
}
/* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   /* WARNING: Could not recover jumptable at 0x00101d94. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *Free )();
   return;
}
/* JoltHeightMapShape3D::~JoltHeightMapShape3D() */void JoltHeightMapShape3D::~JoltHeightMapShape3D(JoltHeightMapShape3D *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__build_00103440;
   if (*(long*)( this + 0x90 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x90 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x90 );
         *(undefined8*)( this + 0x90 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         JoltShape3D::~JoltShape3D((JoltShape3D*)this);
         return;
      }

   }

   JoltShape3D::~JoltShape3D((JoltShape3D*)this);
   return;
}
/* JoltHeightMapShape3D::~JoltHeightMapShape3D() */void JoltHeightMapShape3D::~JoltHeightMapShape3D(JoltHeightMapShape3D *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__build_00103440;
   if (*(long*)( this + 0x90 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x90 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x90 );
         *(undefined8*)( this + 0x90 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   JoltShape3D::~JoltShape3D((JoltShape3D*)this);
   operator_delete(this, 0xa0);
   return;
}
/* JPH::MeshShapeSettings::~MeshShapeSettings() */void JPH::MeshShapeSettings::~MeshShapeSettings(MeshShapeSettings *this) {
   long *plVar1;
   long *plVar2;
   long *plVar3;
   long *plVar4;
   plVar4 = *(long**)( this + 0x80 );
   *(code**)this = _err_print_error;
   if (plVar4 != (long*)0x0) {
      if (( *(long*)( this + 0x70 ) != 0 ) && ( plVar2 = plVar4 < plVar2 )) {
         do {
            while (plVar3 = (long*)*plVar4,plVar3 == (long*)0x0) {
               LAB_00101fe0:plVar4 = plVar4 + 1;
               if (plVar2 <= plVar4) goto LAB_00102018;
            }
;
            LOCK();
            plVar1 = plVar3 + 1;
            *(int*)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 != 0) goto LAB_00101fe0;
            if (*(code**)( *plVar3 + 0x18 ) != PhysicsMaterial::~PhysicsMaterial) {
               ( **(code**)( *plVar3 + 0x18 ) )();
               goto LAB_00101fe0;
            }

            ( *Free )();
            plVar4 = plVar4 + 1;
         }
 while ( plVar4 < plVar2 );
         LAB_00102018:plVar4 = *(long**)( this + 0x80 );
      }

      *(undefined8*)( this + 0x70 ) = 0;
      ( *Free )(plVar4);
   }

   if (*(long*)( this + 0x68 ) != 0) {
      *(undefined8*)( this + 0x58 ) = 0;
      ( *Free )();
   }

   if (*(long*)( this + 0x50 ) != 0) {
      *(undefined8*)( this + 0x40 ) = 0;
      ( *Free )();
   }

   *(code**)this = _err_print_index_error;
   if (this[0x38] == (MeshShapeSettings)0x1) {
      plVar4 = *(long**)( this + 0x18 );
      if (plVar4 != (long*)0x0) {
         LOCK();
         plVar2 = plVar4 + 1;
         *(int*)plVar2 = (int)*plVar2 + -1;
         UNLOCK();
         if ((int)*plVar2 == 0) {
            /* WARNING: Could not recover jumptable at 0x00102040. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *plVar4 + 8 ) )();
            return;
         }

      }

   }
 else if (( this[0x38] == (MeshShapeSettings)0x2 ) && ( *(MeshShapeSettings**)( this + 0x18 ) != this + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00101fa0. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *Free )();
      return;
   }

   return;
}
/* JPH::MeshShapeSettings::~MeshShapeSettings() */void JPH::MeshShapeSettings::~MeshShapeSettings(MeshShapeSettings *this) {
   long *plVar1;
   long *plVar2;
   long *plVar3;
   long *plVar4;
   plVar4 = *(long**)( this + 0x80 );
   *(code**)this = _err_print_error;
   if (plVar4 != (long*)0x0) {
      if (( *(long*)( this + 0x70 ) != 0 ) && ( plVar2 = plVar4 < plVar2 )) {
         do {
            while (plVar3 = (long*)*plVar4,plVar3 == (long*)0x0) {
               LAB_00102130:plVar4 = plVar4 + 1;
               if (plVar2 <= plVar4) goto LAB_00102168;
            }
;
            LOCK();
            plVar1 = plVar3 + 1;
            *(int*)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 != 0) goto LAB_00102130;
            if (*(code**)( *plVar3 + 0x18 ) != PhysicsMaterial::~PhysicsMaterial) {
               ( **(code**)( *plVar3 + 0x18 ) )();
               goto LAB_00102130;
            }

            ( *Free )();
            plVar4 = plVar4 + 1;
         }
 while ( plVar4 < plVar2 );
         LAB_00102168:plVar4 = *(long**)( this + 0x80 );
      }

      *(undefined8*)( this + 0x70 ) = 0;
      ( *Free )(plVar4);
   }

   if (*(long*)( this + 0x68 ) != 0) {
      *(undefined8*)( this + 0x58 ) = 0;
      ( *Free )();
   }

   if (*(long*)( this + 0x50 ) != 0) {
      *(undefined8*)( this + 0x40 ) = 0;
      ( *Free )();
   }

   *(code**)this = _err_print_index_error;
   if (this[0x38] == (MeshShapeSettings)0x1) {
      plVar4 = *(long**)( this + 0x18 );
      if (plVar4 != (long*)0x0) {
         LOCK();
         plVar2 = plVar4 + 1;
         *(int*)plVar2 = (int)*plVar2 + -1;
         UNLOCK();
         if ((int)*plVar2 == 0) {
            ( **(code**)( *plVar4 + 8 ) )();
         }

      }

   }
 else if (( this[0x38] == (MeshShapeSettings)0x2 ) && ( *(MeshShapeSettings**)( this + 0x18 ) != this + 0x28 )) {
      ( *Free )();
   }

   /* WARNING: Could not recover jumptable at 0x001020f1. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *Free )(this);
   return;
}
/* WARNING: Removing unreachable block (ram,0x00102870) *//* WARNING: Removing unreachable block (ram,0x001029a0) *//* WARNING: Removing unreachable block (ram,0x00102b19) *//* WARNING: Removing unreachable block (ram,0x001029ac) *//* WARNING: Removing unreachable block (ram,0x001029b6) *//* WARNING: Removing unreachable block (ram,0x00102afb) *//* WARNING: Removing unreachable block (ram,0x001029c2) *//* WARNING: Removing unreachable block (ram,0x001029cc) *//* WARNING: Removing unreachable block (ram,0x00102add) *//* WARNING: Removing unreachable block (ram,0x001029d8) *//* WARNING: Removing unreachable block (ram,0x001029e2) *//* WARNING: Removing unreachable block (ram,0x00102abf) *//* WARNING: Removing unreachable block (ram,0x001029ee) *//* WARNING: Removing unreachable block (ram,0x001029f8) *//* WARNING: Removing unreachable block (ram,0x00102aa1) *//* WARNING: Removing unreachable block (ram,0x00102a04) *//* WARNING: Removing unreachable block (ram,0x00102a0e) *//* WARNING: Removing unreachable block (ram,0x00102a83) *//* WARNING: Removing unreachable block (ram,0x00102a16) *//* WARNING: Removing unreachable block (ram,0x00102a20) *//* WARNING: Removing unreachable block (ram,0x00102a68) *//* WARNING: Removing unreachable block (ram,0x00102a28) *//* WARNING: Removing unreachable block (ram,0x00102a3e) *//* WARNING: Removing unreachable block (ram,0x00102a4a) *//* String vformat<String, String>(String const&, String const, String const) */undefined8 *vformat<String,String>(undefined8 *param_1, bool *param_2, String_conflict *param_3, String_conflict *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
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
   Variant::Variant(local_88, param_3);
   Variant::Variant(local_70, param_4);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, param_2);
   *param_1 = local_d0[0];
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
/* WARNING: Removing unreachable block (ram,0x00102c98) *//* WARNING: Removing unreachable block (ram,0x00102dc8) *//* WARNING: Removing unreachable block (ram,0x00102f40) *//* WARNING: Removing unreachable block (ram,0x00102dd4) *//* WARNING: Removing unreachable block (ram,0x00102dde) *//* WARNING: Removing unreachable block (ram,0x00102f22) *//* WARNING: Removing unreachable block (ram,0x00102dea) *//* WARNING: Removing unreachable block (ram,0x00102df4) *//* WARNING: Removing unreachable block (ram,0x00102f04) *//* WARNING: Removing unreachable block (ram,0x00102e00) *//* WARNING: Removing unreachable block (ram,0x00102e0a) *//* WARNING: Removing unreachable block (ram,0x00102ee6) *//* WARNING: Removing unreachable block (ram,0x00102e16) *//* WARNING: Removing unreachable block (ram,0x00102e20) *//* WARNING: Removing unreachable block (ram,0x00102ec8) *//* WARNING: Removing unreachable block (ram,0x00102e2c) *//* WARNING: Removing unreachable block (ram,0x00102e36) *//* WARNING: Removing unreachable block (ram,0x00102eaa) *//* WARNING: Removing unreachable block (ram,0x00102e3e) *//* WARNING: Removing unreachable block (ram,0x00102e48) *//* WARNING: Removing unreachable block (ram,0x00102e8f) *//* WARNING: Removing unreachable block (ram,0x00102e50) *//* WARNING: Removing unreachable block (ram,0x00102e65) *//* WARNING: Removing unreachable block (ram,0x00102e71) *//* String vformat<String, String, String>(String const&, String const, String const, String const)
    */undefined8 *vformat<String,String,String>(undefined8 *param_1, bool *param_2, String_conflict *param_3, String_conflict *param_4, String_conflict *param_5) {
   Variant *pVVar1;
   int iVar2;
   Variant *pVVar3;
   int iVar4;
   long in_FS_OFFSET;
   Array local_f8[8];
   undefined8 local_f0[9];
   Variant local_a8[24];
   Variant local_90[24];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_a8, param_3);
   Variant::Variant(local_90, param_4);
   iVar2 = 0;
   Variant::Variant(local_78, param_5);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_f8);
   iVar4 = (int)local_f8;
   Array::resize(iVar4);
   pVVar3 = local_a8;
   do {
      iVar2 = iVar2 + 1;
      pVVar1 = (Variant*)Array::operator [](iVar4);
      Variant::operator =(pVVar1, pVVar3);
      pVVar3 = pVVar3 + 0x18;
   }
 while ( iVar2 != 3 );
   String::sprintf((Array*)local_f0, param_2);
   *param_1 = local_f0[0];
   pVVar3 = local_48;
   Array::~Array(local_f8);
   do {
      pVVar1 = pVVar3 + -0x18;
      pVVar3 = pVVar3 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar3 != local_a8 );
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x001030c0) *//* WARNING: Removing unreachable block (ram,0x001031f0) *//* WARNING: Removing unreachable block (ram,0x00103368) *//* WARNING: Removing unreachable block (ram,0x001031fc) *//* WARNING: Removing unreachable block (ram,0x00103206) *//* WARNING: Removing unreachable block (ram,0x0010334a) *//* WARNING: Removing unreachable block (ram,0x00103212) *//* WARNING: Removing unreachable block (ram,0x0010321c) *//* WARNING: Removing unreachable block (ram,0x0010332c) *//* WARNING: Removing unreachable block (ram,0x00103228) *//* WARNING: Removing unreachable block (ram,0x00103232) *//* WARNING: Removing unreachable block (ram,0x0010330e) *//* WARNING: Removing unreachable block (ram,0x0010323e) *//* WARNING: Removing unreachable block (ram,0x00103248) *//* WARNING: Removing unreachable block (ram,0x001032f0) *//* WARNING: Removing unreachable block (ram,0x00103254) *//* WARNING: Removing unreachable block (ram,0x0010325e) *//* WARNING: Removing unreachable block (ram,0x001032d2) *//* WARNING: Removing unreachable block (ram,0x00103266) *//* WARNING: Removing unreachable block (ram,0x00103270) *//* WARNING: Removing unreachable block (ram,0x001032b7) *//* WARNING: Removing unreachable block (ram,0x00103278) *//* WARNING: Removing unreachable block (ram,0x0010328d) *//* WARNING: Removing unreachable block (ram,0x00103299) *//* String vformat<long, int, int>(String const&, long const, int const, int const) */String_conflict *vformat<long,int,int>(String_conflict *param_1, long param_2, int param_3, int param_4) {
   Variant *pVVar1;
   undefined4 in_register_00000014;
   int iVar2;
   Variant *pVVar3;
   int iVar4;
   int in_R8D;
   long in_FS_OFFSET;
   Array local_f8[8];
   undefined8 local_f0[9];
   Variant local_a8[24];
   Variant local_90[24];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_a8, CONCAT44(in_register_00000014, param_3));
   Variant::Variant(local_90, param_4);
   iVar2 = 0;
   Variant::Variant(local_78, in_R8D);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_f8);
   iVar4 = (int)local_f8;
   Array::resize(iVar4);
   pVVar3 = local_a8;
   do {
      iVar2 = iVar2 + 1;
      pVVar1 = (Variant*)Array::operator [](iVar4);
      Variant::operator =(pVVar1, pVVar3);
      pVVar3 = pVVar3 + 0x18;
   }
 while ( iVar2 != 3 );
   String::sprintf((Array*)local_f0, (bool*)param_2);
   *(undefined8*)param_1 = local_f0[0];
   pVVar3 = local_48;
   Array::~Array(local_f8);
   do {
      pVVar1 = pVVar3 + -0x18;
      pVVar3 = pVVar3 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar3 != local_a8 );
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   return;
}
/* JoltHeightMapShape3D::_build() const */void JoltHeightMapShape3D::_GLOBAL__sub_I__build(void) {
   if (JPH::DVec3::cTrue == '\0') {
      JPH::DVec3::cTrue = '\x01';
      JPH::DVec3::cTrue = _LC44;
   }

   return;
}
/* WARNING: Control flow encountered bad instruction data *//* JPH::MeshShapeSettings::~MeshShapeSettings() */void JPH::MeshShapeSettings::~MeshShapeSettings(MeshShapeSettings *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* JoltHeightMapShape3D::~JoltHeightMapShape3D() */void JoltHeightMapShape3D::~JoltHeightMapShape3D(JoltHeightMapShape3D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


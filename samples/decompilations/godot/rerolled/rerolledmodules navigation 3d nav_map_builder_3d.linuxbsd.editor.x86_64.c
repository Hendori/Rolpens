/* NavMapBuilder3D::get_point_key(Vector3 const&, Vector3 const&) */ulong NavMapBuilder3D::get_point_key(Vector3 *param_1, Vector3 *param_2) {
   float fVar1;
   float fVar2;
   float fVar3;
   fVar2 = *(float*)param_1 / *(float*)param_2;
   if ((float)( (uint)fVar2 & _LC1 ) < _LC0) {
      fVar2 = (float)( ( uint )((float)(int)fVar2 - (float)( -(uint)(fVar2 < (float)(int)fVar2) & _LC2 )) | ~_LC1 & (uint)fVar2 );
   }

   fVar3 = *(float*)( param_1 + 4 ) / *(float*)( param_2 + 4 );
   if ((float)( (uint)fVar3 & _LC1 ) < _LC0) {
      fVar3 = (float)( ( uint )((float)(int)fVar3 - (float)( -(uint)(fVar3 < (float)(int)fVar3) & _LC2 )) | ~_LC1 & (uint)fVar3 );
   }

   fVar1 = *(float*)( param_1 + 8 ) / *(float*)( param_2 + 8 );
   if ((float)( (uint)fVar1 & _LC1 ) < _LC0) {
      fVar1 = (float)( ( uint )((float)(int)fVar1 - (float)( -(uint)(fVar1 < (float)(int)fVar1) & _LC2 )) | ~_LC1 & (uint)fVar1 );
   }

   return ( ulong )((int)fVar3 & 0x3fffff) << 0x15 | ( ulong )((int)fVar2 & 0x1fffff) | (ulong)(uint)(int)fVar1 << 0x2b;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* NavMapBuilder3D::_build_update_map_iteration(NavMapIterationBuild&) */void NavMapBuilder3D::_build_update_map_iteration(NavMapIterationBuild *param_1) {
   uint uVar1;
   long *plVar2;
   void *pvVar3;
   code *pcVar4;
   undefined8 uVar5;
   uint uVar6;
   uint uVar7;
   int iVar8;
   long *plVar9;
   undefined8 *puVar10;
   undefined8 *puVar11;
   long lVar12;
   int *piVar13;
   int iVar14;
   ulong uVar15;
   long lVar16;
   uint *puVar17;
   uint *puVar18;
   lVar16 = *(long*)( param_1 + 0x88 );
   *(ulong*)( lVar16 + 0x80 ) = CONCAT44(*(undefined4*)( lVar16 + 0x50 ), *(undefined4*)( param_1 + 0x3c ));
   uVar6 = pthread_mutex_lock((pthread_mutex_t*)( lVar16 + 0xf8 ));
   uVar5 = _LC10;
   if (uVar6 == 0) {
      puVar18 = *(uint**)( lVar16 + 0xf0 );
      puVar17 = puVar18 + ( ulong ) * (uint*)( lVar16 + 0xe8 ) * 0xc;
      do {
         if (puVar17 == puVar18) {
            pthread_mutex_unlock((pthread_mutex_t*)( lVar16 + 0xf8 ));
            return;
         }

         uVar6 = puVar18[4];
         plVar2 = *(long**)( puVar18 + 6 );
         for (plVar9 = plVar2; plVar9 != plVar2 + uVar6; plVar9 = plVar9 + 1) {
            *(undefined4*)( *plVar9 + 8 ) = 0xffffffff;
         }

         if (uVar6 != 0) {
            puVar18[4] = 0;
         }

         uVar6 = (int)(long)( (double)*(int*)( lVar16 + 0x80 ) * __LC4 ) - 1;
         uVar6 = uVar6 >> 1 | uVar6;
         uVar6 = uVar6 >> 2 | uVar6;
         uVar6 = uVar6 >> 4 | uVar6;
         uVar6 = uVar6 | uVar6 >> 8;
         uVar6 = ( uVar6 | uVar6 >> 0x10 ) + 1;
         if (puVar18[5] < uVar6) {
            puVar18[5] = uVar6;
            lVar12 = Memory::realloc_static(plVar2, (ulong)uVar6 * 8, false);
            *(long*)( puVar18 + 6 ) = lVar12;
            if (lVar12 == 0) {
               _err_print_error("reserve", "./core/templates/local_vector.h", 0x92, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

         }

         if (*puVar18 != 0) {
            *puVar18 = 0;
         }

         uVar6 = *(int*)( lVar16 + 0x84 ) + *(int*)( lVar16 + 0x80 );
         if (uVar6 != 0) {
            uVar7 = 0;
            uVar1 = uVar6 - 1;
            if (puVar18[1] < uVar6) {
               uVar7 = uVar1 >> 1 | uVar1;
               uVar7 = uVar7 >> 2 | uVar7;
               uVar7 = uVar7 >> 4 | uVar7;
               uVar7 = uVar7 >> 8 | uVar7;
               uVar7 = ( uVar7 >> 0x10 | uVar7 ) + 1;
               puVar18[1] = uVar7;
               lVar12 = Memory::realloc_static(*(void**)( puVar18 + 2 ), (ulong)uVar7 << 6, false);
               *(long*)( puVar18 + 2 ) = lVar12;
               if (lVar12 == 0) {
                  _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar4 = (code*)invalidInstructionException();
                  ( *pcVar4 )();
               }

               uVar7 = *puVar18;
               if (uVar7 < uVar6) goto LAB_00100251;
            }
 else {
               LAB_00100251:lVar12 = *(long*)( puVar18 + 2 );
               puVar10 = (undefined8*)( (ulong)uVar7 * 0x40 + lVar12 );
               do {
                  *puVar10 = 0;
                  puVar11 = puVar10 + 8;
                  *(undefined4*)( puVar10 + 1 ) = 0xffffffff;
                  *(undefined8*)( (long)puVar10 + 0xc ) = uVar5;
                  *(undefined8*)( (long)puVar10 + 0x14 ) = 0;
                  *(undefined4*)( (long)puVar10 + 0x1c ) = 0;
                  puVar10[4] = 0;
                  *(undefined4*)( puVar10 + 5 ) = 0;
                  *(undefined8*)( (long)puVar10 + 0x2c ) = 0;
                  *(undefined4*)( (long)puVar10 + 0x34 ) = 0;
                  puVar10[7] = 0;
                  puVar10 = puVar11;
               }
 while ( (undefined8*)( lVar12 + 0x40 + ( ( ulong )(uVar1 - uVar7) + (ulong)uVar7 ) * 0x40 ) != puVar11 );
            }

            *puVar18 = uVar6;
         }

         puVar18 = puVar18 + 0xc;
      }
 while ( true );
   }

   uVar15 = (ulong)uVar6;
   std::__throw_system_error(uVar6);
   lVar16 = *(long*)( uVar15 + 0x88 );
   if (( *(long*)( lVar16 + 0x90 ) != 0 ) && ( *(int*)( lVar16 + 0xb4 ) != 0 )) {
      uVar6 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar16 + 0xb0 ) * 4 );
      if (uVar6 != 0) {
         lVar12 = 0;
         do {
            piVar13 = (int*)( *(long*)( lVar16 + 0x98 ) + lVar12 );
            if (*piVar13 != 0) {
               *piVar13 = 0;
               pvVar3 = *(void**)( *(long*)( lVar16 + 0x90 ) + lVar12 * 2 );
               if (*(void**)( (long)pvVar3 + 0x20 ) != (void*)0x0) {
                  if (*(int*)( (long)pvVar3 + 0x18 ) != 0) {
                     *(undefined4*)( (long)pvVar3 + 0x18 ) = 0;
                  }

                  Memory::free_static(*(void**)( (long)pvVar3 + 0x20 ), false);
               }

               Memory::free_static(pvVar3, false);
               *(undefined8*)( *(long*)( lVar16 + 0x90 ) + lVar12 * 2 ) = 0;
            }

            lVar12 = lVar12 + 4;
         }
 while ( (ulong)uVar6 * 4 - lVar12 != 0 );
      }

      *(undefined4*)( lVar16 + 0xb4 ) = 0;
      *(undefined1(*) [16])( lVar16 + 0xa0 ) = (undefined1[16])0x0;
   }

   puVar18 = *(uint**)( lVar16 + 0x68 );
   puVar17 = puVar18 + ( ulong ) * (uint*)( lVar16 + 0x60 ) * 0x24;
   if (puVar17 != puVar18) {
      do {
         piVar13 = (int*)HashMap<unsigned_int,LocalVector<gd::Edge::Connection,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,LocalVector<gd::Edge::Connection,unsigned_int,false,false>>>>::operator []((HashMap<unsigned_int,LocalVector<gd::Edge::Connection,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,LocalVector<gd::Edge::Connection,unsigned_int,false,false>>>>*)( lVar16 + 0x88 ), puVar18);
         if (*piVar13 != 0) {
            *piVar13 = 0;
         }

         if (*(void**)( piVar13 + 2 ) != (void*)0x0) {
            Memory::free_static(*(void**)( piVar13 + 2 ), false);
         }

         puVar18 = puVar18 + 0x24;
         piVar13[2] = 0;
         piVar13[3] = 0;
         piVar13[0] = 0;
         piVar13[1] = 0;
      }
 while ( puVar17 != puVar18 );
      lVar12 = *(long*)( lVar16 + 0x68 );
      lVar16 = ( ulong ) * (uint*)( lVar16 + 0x60 ) * 0x90 + lVar12;
      if (lVar16 != lVar12) {
         iVar8 = 0;
         do {
            while (( *(char*)( lVar12 + 4 ) != '\0' && ( *(int*)( lVar12 + 0x60 ) != 0 ) )) {
               piVar13 = *(int**)( lVar12 + 0x68 );
               iVar14 = *(int*)( lVar12 + 0x60 ) + iVar8;
               do {
                  *piVar13 = iVar8;
                  iVar8 = iVar8 + 1;
                  piVar13 = piVar13 + 0xe;
               }
 while ( iVar8 != iVar14 );
               lVar12 = lVar12 + 0x90;
               if (lVar16 == lVar12) goto LAB_001005a9;
            }
;
            lVar12 = lVar12 + 0x90;
         }
 while ( lVar16 != lVar12 );
         goto LAB_001005a9;
      }

   }

   iVar8 = 0;
   LAB_001005a9:*(int*)( uVar15 + 0x24 ) = iVar8;
   *(int*)( uVar15 + 0x3c ) = iVar8;
   return;
}
/* NavMapBuilder3D::_build_step_gather_region_polygons(NavMapIterationBuild&) */void NavMapBuilder3D::_build_step_gather_region_polygons(NavMapIterationBuild *param_1) {
   uint uVar1;
   void *pvVar2;
   int iVar3;
   int *piVar4;
   long lVar5;
   int iVar6;
   long lVar7;
   uint *puVar8;
   uint *puVar9;
   lVar7 = *(long*)( param_1 + 0x88 );
   if (( *(long*)( lVar7 + 0x90 ) != 0 ) && ( *(int*)( lVar7 + 0xb4 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar7 + 0xb0 ) * 4 );
      if (uVar1 != 0) {
         lVar5 = 0;
         do {
            piVar4 = (int*)( *(long*)( lVar7 + 0x98 ) + lVar5 );
            if (*piVar4 != 0) {
               *piVar4 = 0;
               pvVar2 = *(void**)( *(long*)( lVar7 + 0x90 ) + lVar5 * 2 );
               if (*(void**)( (long)pvVar2 + 0x20 ) != (void*)0x0) {
                  if (*(int*)( (long)pvVar2 + 0x18 ) != 0) {
                     *(undefined4*)( (long)pvVar2 + 0x18 ) = 0;
                  }

                  Memory::free_static(*(void**)( (long)pvVar2 + 0x20 ), false);
               }

               Memory::free_static(pvVar2, false);
               *(undefined8*)( *(long*)( lVar7 + 0x90 ) + lVar5 * 2 ) = 0;
            }

            lVar5 = lVar5 + 4;
         }
 while ( (ulong)uVar1 * 4 - lVar5 != 0 );
      }

      *(undefined4*)( lVar7 + 0xb4 ) = 0;
      *(undefined1(*) [16])( lVar7 + 0xa0 ) = (undefined1[16])0x0;
   }

   puVar9 = *(uint**)( lVar7 + 0x68 );
   puVar8 = puVar9 + ( ulong ) * (uint*)( lVar7 + 0x60 ) * 0x24;
   if (puVar8 != puVar9) {
      do {
         piVar4 = (int*)HashMap<unsigned_int,LocalVector<gd::Edge::Connection,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,LocalVector<gd::Edge::Connection,unsigned_int,false,false>>>>::operator []((HashMap<unsigned_int,LocalVector<gd::Edge::Connection,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,LocalVector<gd::Edge::Connection,unsigned_int,false,false>>>>*)( lVar7 + 0x88 ), puVar9);
         if (*piVar4 != 0) {
            *piVar4 = 0;
         }

         if (*(void**)( piVar4 + 2 ) != (void*)0x0) {
            Memory::free_static(*(void**)( piVar4 + 2 ), false);
         }

         puVar9 = puVar9 + 0x24;
         piVar4[2] = 0;
         piVar4[3] = 0;
         piVar4[0] = 0;
         piVar4[1] = 0;
      }
 while ( puVar8 != puVar9 );
      lVar5 = *(long*)( lVar7 + 0x68 );
      lVar7 = ( ulong ) * (uint*)( lVar7 + 0x60 ) * 0x90 + lVar5;
      if (lVar7 != lVar5) {
         iVar3 = 0;
         do {
            while (( *(char*)( lVar5 + 4 ) != '\0' && ( *(int*)( lVar5 + 0x60 ) != 0 ) )) {
               piVar4 = *(int**)( lVar5 + 0x68 );
               iVar6 = *(int*)( lVar5 + 0x60 ) + iVar3;
               do {
                  *piVar4 = iVar3;
                  iVar3 = iVar3 + 1;
                  piVar4 = piVar4 + 0xe;
               }
 while ( iVar3 != iVar6 );
               lVar5 = lVar5 + 0x90;
               if (lVar7 == lVar5) goto LAB_001005a9;
            }
;
            lVar5 = lVar5 + 0x90;
         }
 while ( lVar7 != lVar5 );
         goto LAB_001005a9;
      }

   }

   iVar3 = 0;
   LAB_001005a9:*(int*)( param_1 + 0x24 ) = iVar3;
   *(int*)( param_1 + 0x3c ) = iVar3;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* NavMapBuilder3D::_build_step_edge_connection_margin_connections(NavMapIterationBuild&) */void NavMapBuilder3D::_build_step_edge_connection_margin_connections(NavMapIterationBuild *param_1) {
   long *plVar1;
   float *pfVar2;
   undefined4 *puVar3;
   long *plVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   undefined8 uVar8;
   uint uVar9;
   uint uVar10;
   long lVar11;
   undefined8 uVar12;
   long lVar13;
   code *pcVar14;
   void *pvVar15;
   ulong uVar16;
   long lVar17;
   long lVar18;
   float fVar19;
   uint uVar20;
   long lVar21;
   uint *puVar22;
   long in_FS_OFFSET;
   float fVar23;
   float fVar24;
   float fVar25;
   float fVar26;
   float fVar27;
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
   float local_f4;
   double local_f0;
   uint local_cc;
   long local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 uStack_a8;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined4 local_88;
   undefined4 uStack_84;
   undefined4 uStack_80;
   undefined4 uStack_7c;
   long local_78;
   long local_68;
   long lStack_60;
   long local_58;
   long lStack_50;
   long local_48;
   long local_40;
   uVar20 = *(uint*)( param_1 + 0x78 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar11 = *(long*)( param_1 + 0x88 );
   fVar23 = *(float*)( param_1 + 0x10 ) * *(float*)( param_1 + 0x10 );
   *(uint*)( param_1 + 0x34 ) = uVar20;
   if (uVar20 == 0) {
      LAB_00100ca5:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   lVar21 = 0;
   LAB_0010062c:lVar17 = *(long*)( param_1 + 0x80 );
   plVar1 = (long*)( lVar17 + lVar21 * 0x28 );
   uVar9 = *(uint*)( plVar1 + 1 );
   uVar10 = *(uint*)( *plVar1 + 0x10 );
   if (uVar10 <= uVar9) {
      LAB_00100c22:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)uVar9, (ulong)uVar10, "p_index", "count", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar14 = (code*)invalidInstructionException();
      ( *pcVar14 )();
   }

   lVar18 = *(long*)( *plVar1 + 0x18 );
   pfVar2 = (float*)( lVar18 + (ulong)uVar9 * 0x18 );
   uVar12 = *(undefined8*)( pfVar2 + 1 );
   fVar5 = *pfVar2;
   fVar19 = (float)uVar12;
   fVar31 = (float)( (ulong)uVar12 >> 0x20 );
   pfVar2 = (float*)( lVar18 + ( ( ulong )(uVar9 + 1) % (ulong)uVar10 ) * 0x18 );
   fVar6 = *pfVar2;
   uVar12 = *(undefined8*)( pfVar2 + 1 );
   if (*(int*)( param_1 + 0x78 ) != 0) {
      lVar18 = 0;
      do {
         plVar4 = (long*)( lVar17 + lVar18 * 0x28 );
         if ((int)lVar18 != (int)lVar21) {
            lVar17 = *plVar4;
            lVar13 = *plVar1;
            if (*(long*)( lVar13 + 8 ) != *(long*)( lVar17 + 8 )) {
               uVar9 = *(uint*)( plVar4 + 1 );
               uVar10 = *(uint*)( lVar17 + 0x10 );
               if (uVar10 <= uVar9) goto LAB_00100c22;
               pfVar2 = (float*)( *(long*)( lVar17 + 0x18 ) + (ulong)uVar9 * 0x18 );
               uVar8 = *(undefined8*)( pfVar2 + 1 );
               fVar7 = *pfVar2;
               fVar38 = (float)uVar12 - fVar19;
               fVar39 = (float)( (ulong)uVar12 >> 0x20 ) - fVar31;
               fVar36 = (float)uVar8;
               fVar37 = (float)( (ulong)uVar8 >> 0x20 );
               pfVar2 = (float*)( *(long*)( lVar17 + 0x18 ) + ( ( ulong )(uVar9 + 1) % (ulong)uVar10 ) * 0x18 );
               fVar30 = pfVar2[1];
               fVar32 = pfVar2[2];
               fVar33 = *pfVar2;
               fVar26 = fVar6 - fVar5;
               fVar25 = fVar26 * fVar26 + fVar38 * fVar38 + fVar39 * fVar39;
               fVar24 = ( ( fVar37 - fVar31 ) * fVar39 + ( fVar36 - fVar19 ) * fVar38 + ( fVar7 - fVar5 ) * fVar26 ) / fVar25;
               fVar25 = ( ( fVar32 - fVar31 ) * fVar39 + ( fVar33 - fVar5 ) * fVar26 + ( fVar30 - fVar19 ) * fVar38 ) / fVar25;
               if (0.0 <= fVar24) {
                  if (fVar24 <= _LC2) {
                     fVar28 = fVar38 * fVar24 + fVar19;
                     fVar29 = fVar39 * fVar24 + fVar31;
                     local_f4 = fVar24 * fVar26 + fVar5;
                     fVar34 = fVar37;
                     fVar35 = fVar36;
                     fVar27 = fVar7;
                     if (fVar24 < 0.0) goto LAB_00100708;
                  }
 else {
                     if (_LC2 < fVar25) goto LAB_001009e0;
                     fVar28 = fVar38 + fVar19;
                     fVar29 = fVar39 + fVar31;
                     local_f4 = fVar5 + fVar26;
                     LAB_00100708:local_f0 = (double)fVar24;
                     fVar27 = (float)( ( _LC22 - local_f0 ) / (double)( fVar25 - fVar24 ) );
                     fVar34 = fVar37 + ( fVar32 - fVar37 ) * fVar27;
                     fVar35 = fVar36 + ( fVar30 - fVar36 ) * fVar27;
                     fVar27 = ( fVar33 - fVar7 ) * fVar27 + fVar7;
                  }

                  if (( local_f4 - fVar27 ) * ( local_f4 - fVar27 ) + ( fVar28 - fVar35 ) * ( fVar28 - fVar35 ) + ( fVar29 - fVar34 ) * ( fVar29 - fVar34 ) <= fVar23) {
                     if (0.0 <= fVar25) {
                        if (_LC2 < fVar25) {
                           fVar26 = fVar26 + fVar5;
                           fVar38 = fVar19 + fVar38;
                           fVar39 = fVar31 + fVar39;
                           goto LAB_001007cd;
                        }

                        fVar26 = fVar26 * fVar25 + fVar5;
                        fVar38 = fVar25 * fVar38 + fVar19;
                        fVar39 = fVar25 * fVar39 + fVar31;
                        if (fVar25 < 0.0) goto LAB_001007cd;
                     }
 else {
                        fVar38 = fVar38 * 0.0 + fVar19;
                        fVar39 = fVar39 * 0.0 + fVar31;
                        fVar26 = fVar26 * 0.0 + fVar5;
                        LAB_001007cd:fVar25 = ( 0.0 - fVar24 ) / ( fVar25 - fVar24 );
                        fVar33 = ( fVar33 - fVar7 ) * fVar25 + fVar7;
                        fVar30 = ( fVar30 - fVar36 ) * fVar25 + fVar36;
                        fVar32 = ( fVar32 - fVar37 ) * fVar25 + fVar37;
                     }

                     if (( fVar38 - fVar30 ) * ( fVar38 - fVar30 ) + ( fVar26 - fVar33 ) * ( fVar26 - fVar33 ) + ( fVar39 - fVar32 ) * ( fVar39 - fVar32 ) <= fVar23) {
                        uStack_a8 = plVar4[4];
                        uVar10 = *(uint*)( lVar13 + 0x20 );
                        uVar9 = *(uint*)( plVar1 + 1 );
                        local_c8 = *plVar4;
                        uStack_c0 = plVar4[1];
                        local_b8 = plVar4[2];
                        uStack_b0 = plVar4[3];
                        if (uVar10 <= uVar9) goto LAB_00100c22;
                        uStack_c0 = CONCAT44(( local_f4 + fVar27 ) * _LC26, (undefined4)uStack_c0);
                        local_b8 = CONCAT44(( fVar34 + fVar29 ) * _LC26, ( fVar35 + fVar28 ) * _LC26);
                        puVar22 = (uint*)( (ulong)uVar9 * 0x10 + *(long*)( lVar13 + 0x28 ) );
                        uStack_b0 = CONCAT44(( fVar38 + fVar30 ) * _LC26, ( fVar33 + fVar26 ) * _LC26);
                        uVar16 = (ulong)uStack_a8 >> 0x20;
                        uStack_a8 = CONCAT44((int)uVar16, ( fVar39 + fVar32 ) * _UNK_0010470c);
                        pvVar15 = *(void**)( puVar22 + 2 );
                        lStack_60 = uStack_c0;
                        local_48 = uStack_a8;
                        uVar20 = *puVar22;
                        local_58 = local_b8;
                        lStack_50 = uStack_b0;
                        local_68 = local_c8;
                        if (uVar20 == puVar22[1]) {
                           uVar16 = ( ulong )(uVar20 * 2);
                           if (uVar20 * 2 == 0) {
                              uVar16 = 1;
                           }

                           puVar22[1] = (uint)uVar16;
                           pvVar15 = (void*)Memory::realloc_static(pvVar15, uVar16 * 0x28, false);
                           *(void**)( puVar22 + 2 ) = pvVar15;
                           if (pvVar15 == (void*)0x0) goto LAB_00100d4e;
                           uVar20 = *puVar22;
                        }

                        *puVar22 = uVar20 + 1;
                        plVar4 = (long*)( (long)pvVar15 + (ulong)uVar20 * 0x28 );
                        *plVar4 = local_68;
                        plVar4[1] = lStack_60;
                        plVar4[4] = local_48;
                        plVar4[2] = local_58;
                        plVar4[3] = lStack_50;
                        local_cc = **(uint**)( *plVar1 + 8 );
                        puVar22 = (uint*)HashMap<unsigned_int,LocalVector<gd::Edge::Connection,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,LocalVector<gd::Edge::Connection,unsigned_int,false,false>>>>::operator []((HashMap<unsigned_int,LocalVector<gd::Edge::Connection,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,LocalVector<gd::Edge::Connection,unsigned_int,false,false>>>>*)( lVar11 + 0x88 ), &local_cc);
                        local_98 = local_c8;
                        uStack_90 = uStack_c0;
                        local_78 = uStack_a8;
                        uVar20 = *puVar22;
                        local_88 = (undefined4)local_b8;
                        uStack_84 = local_b8._4_4_;
                        uStack_80 = (undefined4)uStack_b0;
                        uStack_7c = uStack_b0._4_4_;
                        if (uVar20 == puVar22[1]) {
                           uVar16 = ( ulong )(uVar20 * 2);
                           if (uVar20 * 2 == 0) {
                              uVar16 = 1;
                           }

                           puVar22[1] = (uint)uVar16;
                           lVar17 = Memory::realloc_static(*(void**)( puVar22 + 2 ), uVar16 * 0x28, false);
                           *(long*)( puVar22 + 2 ) = lVar17;
                           if (lVar17 == 0) {
                              LAB_00100d4e:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                              _err_flush_stdout();
                              /* WARNING: Does not return */
                              pcVar14 = (code*)invalidInstructionException();
                              ( *pcVar14 )();
                           }

                           uVar20 = *puVar22;
                        }
 else {
                           lVar17 = *(long*)( puVar22 + 2 );
                        }

                        puVar3 = (undefined4*)( lVar17 + (ulong)uVar20 * 0x28 );
                        *puVar22 = uVar20 + 1;
                        *puVar3 = (undefined4)local_98;
                        puVar3[1] = local_98._4_4_;
                        puVar3[2] = (undefined4)uStack_90;
                        puVar3[3] = uStack_90._4_4_;
                        uVar20 = *(uint*)( param_1 + 0x78 );
                        *(long*)( puVar3 + 8 ) = local_78;
                        *(ulong*)( puVar3 + 4 ) = CONCAT44(uStack_84, local_88);
                        *(ulong*)( puVar3 + 6 ) = CONCAT44(uStack_7c, uStack_80);
                        *(int*)( param_1 + 0x30 ) = *(int*)( param_1 + 0x30 ) + 1;
                     }

                  }

               }
 else if (0.0 <= fVar25) {
                  fVar29 = fVar39 * 0.0 + fVar31;
                  fVar28 = fVar38 * 0.0 + fVar19;
                  local_f4 = fVar26 * 0.0 + fVar5;
                  goto LAB_00100708;
               }

            }

         }

         LAB_001009e0:lVar18 = lVar18 + 1;
         if (uVar20 <= (uint)lVar18) goto LAB_00100c98;
         lVar17 = *(long*)( param_1 + 0x80 );
      }
 while ( true );
   }

   goto LAB_00100ca5;
   LAB_00100c98:lVar21 = lVar21 + 1;
   if (uVar20 <= (uint)lVar21) goto LAB_00100ca5;
   goto LAB_0010062c;
}
/* NavMapBuilder3D::_build_step_merge_edge_connection_pairs(NavMapIterationBuild&) */void NavMapBuilder3D::_build_step_merge_edge_connection_pairs(NavMapIterationBuild *param_1) {
   long *plVar1;
   undefined8 *puVar2;
   NavMapIterationBuild NVar3;
   uint uVar4;
   undefined8 *puVar5;
   code *pcVar6;
   char *pcVar7;
   uint uVar8;
   long lVar9;
   ulong uVar10;
   void *pvVar11;
   uint *puVar12;
   long in_FS_OFFSET;
   long local_d0;
   char *local_c8;
   undefined8 local_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   long local_30;
   NVar3 = param_1[0xc];
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( param_1 + 0x78 ) != 0) {
      *(undefined4*)( param_1 + 0x78 ) = 0;
   }

   uVar8 = *(int*)( param_1 + 0x40 ) - 1U | *(int*)( param_1 + 0x40 ) - 1U >> 1;
   uVar8 = uVar8 | uVar8 >> 2;
   uVar8 = uVar8 | uVar8 >> 4;
   uVar8 = uVar8 >> 8 | uVar8;
   uVar8 = ( uVar8 >> 0x10 | uVar8 ) + 1;
   if (*(uint*)( param_1 + 0x7c ) < uVar8) {
      *(uint*)( param_1 + 0x7c ) = uVar8;
      lVar9 = Memory::realloc_static(*(void**)( param_1 + 0x80 ), (ulong)uVar8 * 0x28, false);
      *(long*)( param_1 + 0x80 ) = lVar9;
      if (lVar9 == 0) {
         _err_print_error("reserve", "./core/templates/local_vector.h", 0x92, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar6 = (code*)invalidInstructionException();
         ( *pcVar6 )();
      }

   }

   puVar5 = *(undefined8**)( param_1 + 0x60 );
   do {
      while (true) {
         if (puVar5 == (undefined8*)0x0) {
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         if (*(int*)( puVar5 + 0xe ) == 2) break;
         if (*(int*)( puVar5 + 0xe ) != 1) {
            local_d0 = 0;
            local_c0 = 0x24;
            local_c8 = "Number of connection != 1. Found: %d";
            String::parse_latin1((StrRange*)&local_d0);
            vformat<int>((String_conflict*)&local_c8, (int)(StrRange*)&local_d0);
            _err_print_error("_build_step_merge_edge_connection_pairs", "modules/navigation/3d/nav_map_builder_3d.cpp", 0xb6, "FATAL: Condition \"pair.size != 1\" is true.", (String_conflict*)&local_c8, 0, 0);
            pcVar7 = local_c8;
            if (local_c8 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_c8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_c8 = (char*)0x0;
                  Memory::free_static(pcVar7 + -0x10, false);
               }

            }

            lVar9 = local_d0;
            if (local_d0 != 0) {
               LOCK();
               plVar1 = (long*)( local_d0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_d0 = 0;
                  Memory::free_static((void*)( lVar9 + -0x10 ), false);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar6 = (code*)invalidInstructionException();
                  ( *pcVar6 )();
               }

            }

            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar6 = (code*)invalidInstructionException();
            ( *pcVar6 )();
         }

         if (( NVar3 != (NavMapIterationBuild)0x0 ) && ( *(char*)( *(long*)( puVar5[4] + 8 ) + 0x28 ) != '\0' )) {
            local_58 = puVar5[4];
            uStack_50 = puVar5[5];
            local_48 = puVar5[6];
            uStack_40 = puVar5[7];
            local_38 = puVar5[8];
            uVar8 = *(uint*)( param_1 + 0x78 );
            pvVar11 = *(void**)( param_1 + 0x80 );
            if (uVar8 == *(uint*)( param_1 + 0x7c )) {
               uVar10 = ( ulong )(uVar8 * 2);
               if (uVar8 * 2 == 0) {
                  uVar10 = 1;
               }

               *(int*)( param_1 + 0x7c ) = (int)uVar10;
               pvVar11 = (void*)Memory::realloc_static(pvVar11, uVar10 * 0x28, false);
               *(void**)( param_1 + 0x80 ) = pvVar11;
               if (pvVar11 == (void*)0x0) {
                  LAB_00101212:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar6 = (code*)invalidInstructionException();
                  ( *pcVar6 )();
               }

               uVar8 = *(uint*)( param_1 + 0x78 );
            }

            *(uint*)( param_1 + 0x78 ) = uVar8 + 1;
            puVar2 = (undefined8*)( (long)pvVar11 + (ulong)uVar8 * 0x28 );
            puVar2[4] = local_38;
            *puVar2 = local_58;
            puVar2[1] = uStack_50;
            puVar2[2] = local_48;
            puVar2[3] = uStack_40;
         }

         puVar5 = (undefined8*)*puVar5;
      }
;
      uVar10 = ( ulong ) * (uint*)( puVar5 + 5 );
      uVar8 = *(uint*)( puVar5[4] + 0x20 );
      if (uVar8 <= *(uint*)( puVar5 + 5 )) {
         LAB_00101080:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar10, (ulong)uVar8, "p_index", "count", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar6 = (code*)invalidInstructionException();
         ( *pcVar6 )();
      }

      local_88 = puVar5[9];
      uStack_80 = puVar5[10];
      local_78 = puVar5[0xb];
      uStack_70 = puVar5[0xc];
      puVar12 = (uint*)( uVar10 * 0x10 + *(long*)( puVar5[4] + 0x28 ) );
      local_68 = puVar5[0xd];
      pvVar11 = *(void**)( puVar12 + 2 );
      uVar8 = *puVar12;
      if (uVar8 == puVar12[1]) {
         uVar10 = ( ulong )(uVar8 * 2);
         if (uVar8 * 2 == 0) {
            uVar10 = 1;
         }

         puVar12[1] = (uint)uVar10;
         pvVar11 = (void*)Memory::realloc_static(pvVar11, uVar10 * 0x28, false);
         *(void**)( puVar12 + 2 ) = pvVar11;
         if (pvVar11 == (void*)0x0) goto LAB_00101212;
         uVar8 = *puVar12;
      }

      *puVar12 = uVar8 + 1;
      puVar2 = (undefined8*)( (long)pvVar11 + (ulong)uVar8 * 0x28 );
      *puVar2 = local_88;
      puVar2[1] = uStack_80;
      uVar4 = *(uint*)( puVar5 + 10 );
      uVar10 = (ulong)uVar4;
      puVar2[4] = local_68;
      puVar2[2] = local_78;
      puVar2[3] = uStack_70;
      uVar8 = *(uint*)( puVar5[9] + 0x20 );
      if (uVar8 <= uVar4) goto LAB_00101080;
      local_b8 = puVar5[4];
      uStack_b0 = puVar5[5];
      local_a8 = puVar5[6];
      uStack_a0 = puVar5[7];
      puVar12 = (uint*)( uVar10 * 0x10 + *(long*)( puVar5[9] + 0x28 ) );
      local_98 = puVar5[8];
      pvVar11 = *(void**)( puVar12 + 2 );
      uVar8 = *puVar12;
      if (uVar8 == puVar12[1]) {
         uVar10 = ( ulong )(uVar8 * 2);
         if (uVar8 * 2 == 0) {
            uVar10 = 1;
         }

         puVar12[1] = (uint)uVar10;
         pvVar11 = (void*)Memory::realloc_static(pvVar11, uVar10 * 0x28, false);
         *(void**)( puVar12 + 2 ) = pvVar11;
         if (pvVar11 == (void*)0x0) goto LAB_00101212;
         uVar8 = *puVar12;
      }

      puVar5 = (undefined8*)*puVar5;
      *puVar12 = uVar8 + 1;
      puVar2 = (undefined8*)( (long)pvVar11 + (ulong)uVar8 * 0x28 );
      *puVar2 = local_b8;
      puVar2[1] = uStack_b0;
      puVar2[2] = local_a8;
      puVar2[3] = uStack_a0;
      puVar2[4] = local_98;
      *(int*)( param_1 + 0x2c ) = *(int*)( param_1 + 0x2c ) + 1;
   }
 while ( true );
}
/* NavMapBuilder3D::_build_step_navlink_connections(NavMapIterationBuild&) */void NavMapBuilder3D::_build_step_navlink_connections(NavMapIterationBuild *param_1) {
   long lVar1;
   int *piVar2;
   undefined1(*pauVar3)[16];
   float fVar4;
   char cVar5;
   int iVar6;
   long lVar7;
   long *plVar8;
   uint *puVar9;
   code *pcVar10;
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   float fVar13;
   undefined1 auVar14[12];
   undefined1 auVar15[12];
   undefined1 auVar16[12];
   undefined1 auVar17[12];
   undefined1 auVar18[12];
   undefined1 auVar19[12];
   float fVar20;
   float fVar21;
   float fVar22;
   float fVar23;
   float fVar24;
   undefined8 uVar25;
   undefined1(*pauVar26)[12];
   undefined1(*pauVar27)[12];
   undefined4 *puVar28;
   undefined4 *puVar29;
   undefined8 *puVar30;
   undefined1(*pauVar31)[12];
   ulong uVar32;
   void *pvVar33;
   long lVar34;
   ulong uVar35;
   uint uVar36;
   uint uVar37;
   long lVar38;
   long lVar39;
   Vector3 *pVVar40;
   uint uVar41;
   Vector3 *pVVar42;
   uint uVar43;
   long lVar44;
   long lVar45;
   long lVar46;
   long in_FS_OFFSET;
   float fVar47;
   undefined1 auVar48[12];
   undefined1 auVar49[12];
   float local_2d4;
   long local_2d0;
   long local_2c8;
   uint local_27c;
   int local_274;
   undefined8 local_25c;
   undefined4 local_254;
   undefined8 local_250;
   float local_248;
   undefined8 local_244;
   float local_23c;
   undefined1 local_238[12];
   undefined1 local_22c[12];
   undefined1 local_220[12];
   undefined1 local_214[12];
   undefined1 local_208[12];
   undefined1 local_1fc[12];
   int *local_1f0;
   float local_1e8;
   undefined8 local_1e4;
   float local_1dc;
   float local_1d8;
   float local_1d4;
   float local_1d0;
   float local_1cc;
   float local_1c8;
   float local_1c4;
   int *local_1b8;
   undefined4 uStack_1b0;
   undefined4 uStack_1ac;
   undefined4 uStack_1a8;
   undefined4 uStack_1a4;
   undefined1 auStack_1a0[12];
   undefined4 uStack_194;
   long local_188;
   undefined4 uStack_180;
   undefined4 uStack_17c;
   undefined4 uStack_178;
   undefined4 uStack_174;
   undefined8 uStack_170;
   undefined4 local_168;
   undefined4 uStack_164;
   int *local_158;
   undefined4 uStack_150;
   undefined4 uStack_14c;
   undefined4 uStack_148;
   undefined4 uStack_144;
   long lStack_140;
   undefined4 local_138;
   undefined4 uStack_134;
   long local_128;
   undefined4 uStack_120;
   undefined4 uStack_11c;
   undefined4 uStack_118;
   undefined4 uStack_114;
   undefined8 uStack_110;
   undefined4 local_108;
   undefined4 uStack_104;
   long local_f8;
   undefined8 uStack_f0;
   undefined4 local_e8;
   undefined4 uStack_e4;
   undefined4 uStack_e0;
   undefined4 uStack_dc;
   undefined8 local_d8;
   int *local_c8;
   long lStack_c0;
   undefined1 local_b8[16];
   long local_a8;
   undefined1 local_98[8];
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   int *local_68;
   float fStack_60;
   undefined4 uStack_5c;
   undefined4 uStack_58;
   undefined4 uStack_54;
   long lStack_50;
   long local_48;
   long local_40;
   fVar4 = *(float*)( param_1 + 0x14 );
   lVar7 = *(long*)( param_1 + 0x88 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_25c = *(undefined8*)param_1;
   uVar36 = *(uint*)( lVar7 + 0x70 );
   uVar32 = (ulong)uVar36;
   uVar43 = *(uint*)( lVar7 + 0x50 );
   local_254 = *(undefined4*)( param_1 + 8 );
   local_274 = *(int*)( param_1 + 0x3c );
   if (uVar36 < uVar43) {
      lVar39 = uVar32 * 0x38;
      do {
         lVar38 = *(long*)( lVar7 + 0x58 ) + lVar39;
         if (*(long*)( lVar38 + 0x28 ) != 0) {
            LocalVector<gd::Edge,unsigned_int,false,false>::resize((LocalVector<gd::Edge,unsigned_int,false,false>*)( lVar38 + 0x20 ), 0);
            if (*(void**)( lVar38 + 0x28 ) != (void*)0x0) {
               Memory::free_static(*(void**)( lVar38 + 0x28 ), false);
            }

         }

         if (*(void**)( lVar38 + 0x18 ) != (void*)0x0) {
            if (*(int*)( lVar38 + 0x10 ) != 0) {
               *(undefined4*)( lVar38 + 0x10 ) = 0;
            }

            Memory::free_static(*(void**)( lVar38 + 0x18 ), false);
         }

         uVar43 = (int)uVar32 + 1;
         uVar32 = (ulong)uVar43;
         lVar39 = lVar39 + 0x38;
      }
 while ( uVar43 < *(uint*)( lVar7 + 0x50 ) );
      *(uint*)( lVar7 + 0x50 ) = uVar36;
      uVar32 = ( ulong ) * (uint*)( lVar7 + 0x70 );
      goto LAB_00101336;
   }

   if (uVar36 <= uVar43) goto LAB_00101336;
   uVar37 = uVar36 - 1;
   uVar41 = uVar36;
   if (*(uint*)( lVar7 + 0x54 ) < uVar36) {
      uVar43 = uVar37 >> 1 | uVar37;
      uVar43 = uVar43 | uVar43 >> 2;
      uVar43 = uVar43 | uVar43 >> 4;
      uVar43 = uVar43 | uVar43 >> 8;
      uVar43 = ( uVar43 | uVar43 >> 0x10 ) + 1;
      *(uint*)( lVar7 + 0x54 ) = uVar43;
      lVar39 = Memory::realloc_static(*(void**)( lVar7 + 0x58 ), (ulong)uVar43 * 0x38, false);
      *(long*)( lVar7 + 0x58 ) = lVar39;
      if (lVar39 == 0) {
         LAB_001023cc:_err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar10 = (code*)invalidInstructionException();
         ( *pcVar10 )();
      }

      uVar43 = *(uint*)( lVar7 + 0x50 );
      uVar41 = *(uint*)( lVar7 + 0x70 );
      if (uVar43 < uVar36) goto LAB_00101ddf;
   }
 else {
      LAB_00101ddf:lVar39 = *(long*)( lVar7 + 0x58 );
      puVar28 = (undefined4*)( lVar39 + (ulong)uVar43 * 0x38 );
      do {
         *puVar28 = 0xffffffff;
         puVar29 = puVar28 + 0xe;
         for (int i = 0; i < 5; i++) {
            *(undefined8*)( puVar28 + ( 2*i + 2 ) ) = 0;
         }

         puVar28[0xc] = 0;
         puVar28 = puVar29;
      }
 while ( (undefined4*)( lVar39 + 0x38 + ( ( ulong )(uVar37 - uVar43) + (ulong)uVar43 ) * 0x38 ) != puVar29 );
   }

   *(uint*)( lVar7 + 0x50 ) = uVar36;
   uVar32 = (ulong)uVar41;
   LAB_00101336:auVar49._8_4_ = uStack_1a4;
   auVar49._0_8_ = auStack_1a0._0_8_;
   auVar14._8_4_ = local_22c._8_4_;
   auVar14._0_8_ = local_22c._0_8_;
   auVar48._8_4_ = local_238._8_4_;
   auVar48._0_8_ = local_238._0_8_;
   lVar38 = *(long*)( lVar7 + 0x78 );
   lVar39 = lVar38 + uVar32 * 0x58;
   if (lVar38 != lVar39) {
      local_27c = 0;
      do {
         if (*(char*)( lVar38 + 4 ) != '\0') {
            local_250 = *(undefined8*)( lVar38 + 0x2c );
            local_248 = *(float*)( lVar38 + 0x34 );
            local_238 = ZEXT812(0);
            lVar45 = *(long*)( lVar7 + 0x68 );
            local_23c = *(float*)( lVar38 + 0x40 );
            local_244 = *(int**)( lVar38 + 0x38 );
            lVar34 = ( ulong ) * (uint*)( lVar7 + 0x60 ) * 0x90 + lVar45;
            local_22c = ZEXT812(0);
            local_1f0 = local_244;
            local_1e8 = local_23c;
            local_1e4 = local_250;
            local_1dc = local_248;
            local_68 = local_244;
            fStack_60 = local_23c;
            auVar48 = ZEXT812(0);
            auVar14 = ZEXT812(0);
            if (lVar34 != lVar45) {
               local_2c8 = 0;
               local_2d0 = 0;
               local_2d4 = fVar4 * fVar4;
               fVar13 = fVar4 * fVar4;
               do {
                  uStack_1a4 = auVar49._8_4_;
                  auStack_1a0._0_8_ = auVar49._0_8_;
                  if (*(char*)( lVar45 + 4 ) != '\0') {
                     local_68 = *(int**)( lVar45 + 0x74 );
                     fStack_60 = (float)*(undefined8*)( lVar45 + 0x7c );
                     uStack_5c = ( undefined4 )(( ulong ) * (undefined8*)( lVar45 + 0x7c ) >> 0x20);
                     uStack_58 = ( undefined4 ) * (undefined8*)( lVar45 + 0x84 );
                     uStack_54 = ( undefined4 )(( ulong ) * (undefined8*)( lVar45 + 0x84 ) >> 0x20);
                     AABB::grow(fVar4);
                     fVar24 = local_1c4;
                     fVar23 = local_1c8;
                     fVar22 = local_1cc;
                     fVar21 = local_1d0;
                     fVar20 = local_1d4;
                     fVar47 = local_1d8;
                     if (local_1cc < 0.0) {
                        _err_print_error("has_point", "./core/math/aabb.h", 0x13c, "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size.", 0, 0);
                        if (( ( (float)local_250 < fVar47 ) || ( local_250._4_4_ < fVar20 ) ) || ( local_248 < fVar21 )) goto LAB_00101ad2;
                        LAB_00101c57:if (( fVar22 + fVar47 < (float)local_250 ) || ( fVar20 + fVar23 < local_250._4_4_ )) {
                           LAB_00101c74:if (( 0.0 <= fVar22 ) && ( 0.0 <= fVar23 )) goto LAB_00101ab4;
                           goto LAB_00101ad2;
                        }

                        LAB_00101563:if (fVar24 + fVar21 < local_248) goto LAB_00101c74;
                     }
 else {
                        if (( local_1c8 < 0.0 ) || ( local_1c4 < 0.0 )) {
                           _err_print_error("has_point", "./core/math/aabb.h", 0x13c, "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size.", 0, 0);
                           if (( fVar47 <= (float)local_250 ) && ( fVar20 <= local_250._4_4_ )) {
                              if (fVar21 <= local_248) goto LAB_00101c57;
                              goto LAB_00101c74;
                           }

                           LAB_00101ad2:_err_print_error("has_point", "./core/math/aabb.h", 0x13c, "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size.", 0, 0);
                        }
 else if (( local_1d8 <= (float)local_250 ) && ( ( local_1d4 <= local_250._4_4_ && ( local_1d0 <= local_248 ) ) )) {
                           if (( (float)local_250 <= local_1cc + local_1d8 ) && ( local_250._4_4_ <= local_1d4 + local_1c8 )) goto LAB_00101563;
                           LAB_00101ab4:if (fVar24 < 0.0) goto LAB_00101ad2;
                        }

                        auVar19._8_4_ = uStack_1a4;
                        auVar19._0_8_ = auStack_1a0._0_8_;
                        auVar18._8_4_ = uStack_1a4;
                        auVar18._0_8_ = auStack_1a0._0_8_;
                        auVar17._8_4_ = uStack_1a4;
                        auVar17._0_8_ = auStack_1a0._0_8_;
                        auVar16._8_4_ = uStack_1a4;
                        auVar16._0_8_ = auStack_1a0._0_8_;
                        auVar15._8_4_ = uStack_1a4;
                        auVar15._0_8_ = auStack_1a0._0_8_;
                        auVar49._8_4_ = uStack_1a4;
                        auVar49._0_8_ = auStack_1a0._0_8_;
                        if (( ( ( ( (float)local_244 < fVar47 ) || ( auVar49 = auVar15 ),local_244._4_4_ < fVar20 ) ) || ( auVar49 = local_23c < fVar21 ) ) || ( ( auVar49 = auVar17 ),fVar22 + fVar47 < (float)local_244 || ( auVar49 = fVar20 + fVar23 < local_244._4_4_ ) )) goto LAB_001017d0;
                     }

                     auVar49._8_4_ = uStack_1a4;
                     auVar49._0_8_ = auStack_1a0._0_8_;
                     lVar46 = *(long*)( lVar45 + 0x68 );
                     lVar1 = lVar46 + ( ulong ) * (uint*)( lVar45 + 0x60 ) * 0x38;
                     for (; lVar1 != lVar46; lVar46 = lVar46 + 0x38) {
                        lVar44 = 0x30;
                        uVar36 = 2;
                        if (2 < *(uint*)( lVar46 + 0x10 )) {
                           do {
                              plVar8 = *(long**)( lVar46 + 0x18 );
                              local_68 = (int*)*plVar8;
                              fStack_60 = *(float*)( plVar8 + 1 );
                              uVar25 = *(undefined8*)( (long)plVar8 + lVar44 + -0x18 );
                              uStack_5c = (undefined4)uVar25;
                              uStack_58 = ( undefined4 )((ulong)uVar25 >> 0x20);
                              uStack_54 = *(undefined4*)( (long)plVar8 + lVar44 + -0x10 );
                              lStack_50 = *(long*)( (long)plVar8 + lVar44 );
                              local_48 = CONCAT44((int)( (ulong)local_48 >> 0x20 ), *(undefined4*)( (long)plVar8 + lVar44 + 8 ));
                              auVar48 = Face3::get_closest_point_to((Vector3*)&local_68);
                              local_98._4_4_ = auVar48._4_4_;
                              local_98._0_4_ = auVar48._0_4_;
                              fVar47 = local_248 - auVar48._8_4_;
                              fVar47 = ( (float)local_250 - (float)local_98._0_4_ ) * ( (float)local_250 - (float)local_98._0_4_ ) + ( local_250._4_4_ - (float)local_98._4_4_ ) * ( local_250._4_4_ - (float)local_98._4_4_ ) + fVar47 * fVar47;
                              if (fVar47 < fVar13) {
                                 local_2d0 = lVar46;
                                 fVar13 = fVar47;
                                 local_238 = auVar48;
                              }

                              _local_98 = auVar48;
                              auVar48 = Face3::get_closest_point_to((Vector3*)&local_68);
                              local_98._4_4_ = auVar48._4_4_;
                              local_98._0_4_ = auVar48._0_4_;
                              uStack_90 = CONCAT44(uStack_90._4_4_, auVar48._8_4_);
                              fVar47 = local_23c - auVar48._8_4_;
                              fVar47 = ( (float)local_244 - (float)local_98._0_4_ ) * ( (float)local_244 - (float)local_98._0_4_ ) + ( local_244._4_4_ - (float)local_98._4_4_ ) * ( local_244._4_4_ - (float)local_98._4_4_ ) + fVar47 * fVar47;
                              if (fVar47 < local_2d4) {
                                 local_2d4 = fVar47;
                                 local_2c8 = lVar46;
                                 local_22c = auVar48;
                              }

                              uVar36 = uVar36 + 1;
                              lVar44 = lVar44 + 0x18;
                              local_98 = (undefined1[8])auVar48._0_8_;
                           }
 while ( uVar36 < *(uint*)( lVar46 + 0x10 ) );
                        }

                        auVar49._8_4_ = uStack_1a4;
                        auVar49._0_8_ = auStack_1a0._0_8_;
                     }

                  }

                  LAB_001017d0:uStack_1a4 = auVar49._8_4_;
                  auStack_1a0._0_8_ = auVar49._0_8_;
                  lVar45 = lVar45 + 0x90;
               }
 while ( lVar34 != lVar45 );
               auVar48 = local_238;
               auVar14 = local_22c;
               if (( local_2d0 != 0 ) && ( local_2c8 != 0 )) {
                  uVar32 = ( ulong ) * (uint*)( lVar7 + 0x50 );
                  if (*(uint*)( lVar7 + 0x50 ) <= local_27c) {
                     uVar35 = (ulong)local_27c;
                     goto LAB_001020f5;
                  }

                  piVar2 = (int*)( *(long*)( lVar7 + 0x58 ) + (ulong)local_27c * 0x38 );
                  *(long*)( piVar2 + 2 ) = lVar38;
                  *piVar2 = local_274;
                  LocalVector<gd::Edge,unsigned_int,false,false>::resize((LocalVector<gd::Edge,unsigned_int,false,false>*)( piVar2 + 8 ), 0);
                  LocalVector<gd::Edge,unsigned_int,false,false>::resize((LocalVector<gd::Edge,unsigned_int,false,false>*)( piVar2 + 8 ), 4);
                  uVar36 = piVar2[4];
                  if (uVar36 < 5) {
                     pauVar31 = *(undefined1(**) [12])( piVar2 + 6 );
                     if (uVar36 != 4) {
                        if ((uint)piVar2[5] < 4) {
                           piVar2[5] = 4;
                           pauVar31 = (undefined1(*) [12])Memory::realloc_static(pauVar31, 0x60, false);
                           *(undefined1(**) [12])( piVar2 + 6 ) = pauVar31;
                           if (pauVar31 == (undefined1(*) [12])0x0) goto LAB_001023cc;
                           uVar36 = piVar2[4];
                           if (uVar36 < 4) goto LAB_00101d7c;
                        }
 else {
                           LAB_00101d7c:pauVar26 = pauVar31 + (ulong)uVar36 * 2;
                           do {
                              *(undefined8*)*pauVar26 = 0;
                              pauVar27 = pauVar26 + 2;
                              *(undefined4*)( (long)*pauVar26 + 8 ) = 0;
                              *(undefined8*)( pauVar26[1] + 4 ) = 0;
                              pauVar26 = pauVar27;
                           }
 while ( pauVar27 != pauVar31 + ( ( ulong )(3 - uVar36) + (ulong)uVar36 ) * 2 + 2 );
                        }

                        piVar2[4] = 4;
                     }

                  }
 else {
                     piVar2[4] = 4;
                     pauVar31 = *(undefined1(**) [12])( piVar2 + 6 );
                  }

                  pVVar40 = (Vector3*)&local_25c;
                  pVVar42 = (Vector3*)local_238;
                  auVar49 = local_238;
                  local_220 = local_238;
                  uVar25 = get_point_key(pVVar42, pVVar40);
                  *pauVar31 = auVar49;
                  *(undefined8*)( pauVar31[1] + 4 ) = uVar25;
                  local_214 = auVar49;
                  uVar25 = get_point_key(pVVar42, pVVar40);
                  pVVar42 = (Vector3*)local_22c;
                  pauVar31[2] = auVar49;
                  *(undefined8*)( pauVar31[3] + 4 ) = uVar25;
                  auVar48 = local_22c;
                  local_208 = local_22c;
                  uVar25 = get_point_key(pVVar42, pVVar40);
                  pauVar31[4] = auVar48;
                  *(undefined8*)( pauVar31[5] + 4 ) = uVar25;
                  local_1fc = auVar48;
                  uVar25 = get_point_key(pVVar42, pVVar40);
                  uStack_1a4 = auVar49._8_4_;
                  *(long*)pauVar31[6] = auVar48._0_8_;
                  *(undefined8*)( pauVar31[7] + 4 ) = uVar25;
                  *(int*)( pauVar31[6] + 8 ) = auVar48._8_4_;
                  uStack_1ac = auVar49._0_4_;
                  uStack_1a8 = auVar49._4_4_;
                  auStack_1a0._8_4_ = uStack_1a4;
                  if (*(int*)( local_2d0 + 0x20 ) == 0) goto LAB_0010213a;
                  uStack_1b0 = 0xffffffff;
                  local_a8 = CONCAT44(uStack_194, uStack_1a4);
                  lStack_c0 = CONCAT44(uStack_1ac, 0xffffffff);
                  puVar9 = *(uint**)( local_2d0 + 0x28 );
                  local_b8._8_8_ = auVar49._0_8_;
                  local_b8._0_8_ = auVar49._4_8_;
                  uVar36 = *puVar9;
                  local_1b8 = piVar2;
                  local_c8 = piVar2;
                  if (uVar36 == puVar9[1]) {
                     uVar32 = ( ulong )(uVar36 * 2);
                     if (uVar36 * 2 == 0) {
                        uVar32 = 1;
                     }

                     puVar9[1] = (uint)uVar32;
                     auStack_1a0 = auVar49;
                     lVar45 = Memory::realloc_static(*(void**)( puVar9 + 2 ), uVar32 * 0x28, false);
                     auVar49._8_4_ = uStack_1a4;
                     auVar49._0_8_ = auStack_1a0._0_8_;
                     *(long*)( puVar9 + 2 ) = lVar45;
                     if (lVar45 == 0) goto LAB_00102288;
                     uVar36 = piVar2[4];
                     uVar32 = (ulong)uVar36;
                     uStack_170 = 0;
                     local_168 = 0;
                     plVar8 = (long*)( lVar45 + ( ulong ) * puVar9 * 0x28 );
                     *puVar9 = *puVar9 + 1;
                     *plVar8 = (long)local_c8;
                     plVar8[1] = lStack_c0;
                     plVar8[4] = local_a8;
                     plVar8[2] = local_b8._0_8_;
                     plVar8[3] = local_b8._8_8_;
                     if (2 < uVar36) {
                        lVar45 = *(long*)( piVar2 + 6 );
                        uStack_17c = ( undefined4 ) * (undefined8*)( lVar45 + 0x30 );
                        uStack_178 = ( undefined4 )(( ulong ) * (undefined8*)( lVar45 + 0x30 ) >> 0x20);
                        uStack_174 = *(undefined4*)( lVar45 + 0x38 );
                        if (uVar36 != 3) goto LAB_001019e5;
                        LAB_001020cf:uVar35 = 3;
                        uVar32 = 3;
                        goto LAB_001020f5;
                     }

                  }
 else {
                     plVar8 = (long*)( (long)*(void**)( puVar9 + 2 ) + (ulong)uVar36 * 0x28 );
                     *puVar9 = uVar36 + 1;
                     plVar8[4] = local_a8;
                     *plVar8 = (long)piVar2;
                     plVar8[1] = lStack_c0;
                     *(undefined1(*) [16])( plVar8 + 2 ) = local_b8;
                     lVar45 = *(long*)( piVar2 + 6 );
                     uStack_17c = ( undefined4 ) * (undefined8*)( lVar45 + 0x30 );
                     uStack_178 = ( undefined4 )(( ulong ) * (undefined8*)( lVar45 + 0x30 ) >> 0x20);
                     uStack_174 = *(undefined4*)( lVar45 + 0x38 );
                     LAB_001019e5:uStack_1a4 = auVar49._8_4_;
                     auStack_1a0._0_8_ = auVar49._0_8_;
                     uStack_170 = *(undefined8*)( lVar45 + 0x48 );
                     uVar32 = (ulong)(uint)piVar2[8];
                     local_168 = *(undefined4*)( lVar45 + 0x50 );
                     if (2 < (uint)piVar2[8]) {
                        lVar45 = *(long*)( piVar2 + 10 );
                        uStack_180 = 0xffffffff;
                        uStack_170._4_4_ = ( undefined4 )((ulong)uStack_170 >> 0x20);
                        local_188 = local_2c8;
                        local_d8 = CONCAT44(uStack_164, local_168);
                        uStack_f0 = CONCAT44(uStack_17c, 0xffffffff);
                        pvVar33 = *(void**)( lVar45 + 0x28 );
                        local_e8 = uStack_178;
                        uStack_e4 = uStack_174;
                        uStack_e0 = (undefined4)uStack_170;
                        uStack_dc = uStack_170._4_4_;
                        uVar36 = *(uint*)( lVar45 + 0x20 );
                        local_f8 = local_2c8;
                        if (uVar36 == *(uint*)( lVar45 + 0x24 )) {
                           uVar32 = ( ulong )(uVar36 * 2);
                           if (uVar36 * 2 == 0) {
                              uVar32 = 1;
                           }

                           *(int*)( lVar45 + 0x24 ) = (int)uVar32;
                           pvVar33 = (void*)Memory::realloc_static(pvVar33, uVar32 * 0x28, false);
                           auVar49._8_4_ = uStack_1a4;
                           auVar49._0_8_ = auStack_1a0._0_8_;
                           *(void**)( lVar45 + 0x28 ) = pvVar33;
                           if (pvVar33 == (void*)0x0) goto LAB_00102288;
                           uVar36 = *(uint*)( lVar45 + 0x20 );
                        }

                        uStack_1a4 = auVar49._8_4_;
                        auStack_1a0._0_8_ = auVar49._0_8_;
                        cVar5 = *(char*)( lVar38 + 0x29 );
                        auVar11._8_8_ = uStack_f0;
                        auVar11._0_8_ = local_f8;
                        *(uint*)( lVar45 + 0x20 ) = uVar36 + 1;
                        pauVar3 = (undefined1(*) [16])( (long)pvVar33 + (ulong)uVar36 * 0x28 );
                        *pauVar3 = auVar11;
                        *(ulong*)pauVar3[1] = CONCAT44(uStack_e4, local_e8);
                        *(ulong*)( pauVar3[1] + 8 ) = CONCAT44(uStack_dc, uStack_e0);
                        *(undefined8*)pauVar3[2] = local_d8;
                        auVar48 = local_238;
                        auVar14 = local_22c;
                        if (cVar5 == '\0') {
                           LAB_00101aa5:local_27c = local_27c + 1;
                           local_274 = local_274 + 1;
                           goto LAB_00101370;
                        }

                        lStack_140 = 0;
                        uVar36 = piVar2[4];
                        uVar32 = (ulong)uVar36;
                        local_138 = 0;
                        if (2 < uVar36) {
                           puVar30 = *(undefined8**)( piVar2 + 6 );
                           uStack_14c = (undefined4)puVar30[6];
                           uStack_148 = ( undefined4 )((ulong)puVar30[6] >> 0x20);
                           uStack_144 = *(undefined4*)( puVar30 + 7 );
                           if (uVar36 == 3) goto LAB_001020cf;
                           lStack_140 = puVar30[9];
                           local_138 = *(undefined4*)( puVar30 + 10 );
                           if (*(int*)( local_2c8 + 0x20 ) != 0) {
                              puVar9 = *(uint**)( local_2c8 + 0x28 );
                              local_48 = CONCAT44(uStack_134, local_138);
                              uStack_150 = 0xffffffff;
                              uStack_58 = uStack_148;
                              uVar36 = *puVar9;
                              fStack_60 = -NAN;
                              uStack_5c = uStack_14c;
                              local_158 = piVar2;
                              local_68 = piVar2;
                              uStack_54 = uStack_144;
                              lStack_50 = lStack_140;
                              if (uVar36 == puVar9[1]) {
                                 uVar32 = ( ulong )(uVar36 * 2);
                                 if (uVar36 * 2 == 0) {
                                    uVar32 = 1;
                                 }

                                 puVar9[1] = (uint)uVar32;
                                 lVar45 = Memory::realloc_static(*(void**)( puVar9 + 2 ), uVar32 * 0x28, false);
                                 auVar49._8_4_ = uStack_1a4;
                                 auVar49._0_8_ = auStack_1a0._0_8_;
                                 *(long*)( puVar9 + 2 ) = lVar45;
                                 if (lVar45 == 0) goto LAB_00102288;
                                 iVar6 = piVar2[4];
                                 uStack_110 = 0;
                                 local_108 = 0;
                                 plVar8 = (long*)( lVar45 + ( ulong ) * puVar9 * 0x28 );
                                 *puVar9 = *puVar9 + 1;
                                 *plVar8 = (long)local_68;
                                 plVar8[1] = CONCAT44(uStack_5c, fStack_60);
                                 plVar8[2] = CONCAT44(uStack_54, uStack_58);
                                 plVar8[3] = lStack_50;
                                 plVar8[4] = local_48;
                                 if (iVar6 == 0) goto LAB_0010213a;
                                 puVar30 = *(undefined8**)( piVar2 + 6 );
                                 uStack_11c = ( undefined4 ) * puVar30;
                                 uStack_118 = ( undefined4 )(( ulong ) * puVar30 >> 0x20);
                                 uStack_114 = *(undefined4*)( puVar30 + 1 );
                                 if (iVar6 == 1) {
                                    uVar35 = 1;
                                    uVar32 = 1;
                                    goto LAB_001020f5;
                                 }

                              }
 else {
                                 plVar8 = (long*)( (long)*(void**)( puVar9 + 2 ) + (ulong)uVar36 * 0x28 );
                                 *puVar9 = uVar36 + 1;
                                 *plVar8 = (long)piVar2;
                                 plVar8[1] = CONCAT44(uStack_14c, 0xffffffff);
                                 plVar8[2] = CONCAT44(uStack_144, uStack_148);
                                 plVar8[3] = lStack_140;
                                 plVar8[4] = local_48;
                                 uStack_11c = ( undefined4 ) * puVar30;
                                 uStack_118 = ( undefined4 )(( ulong ) * puVar30 >> 0x20);
                                 uStack_114 = *(undefined4*)( puVar30 + 1 );
                              }

                              uStack_1a4 = auVar49._8_4_;
                              auStack_1a0._0_8_ = auVar49._0_8_;
                              uStack_110 = puVar30[3];
                              local_108 = *(undefined4*)( puVar30 + 4 );
                              if (piVar2[8] != 0) {
                                 puVar9 = *(uint**)( piVar2 + 10 );
                                 uStack_120 = 0xffffffff;
                                 local_88 = CONCAT44(uStack_114, uStack_118);
                                 local_128 = local_2d0;
                                 local_78 = CONCAT44(uStack_104, local_108);
                                 uStack_90 = CONCAT44(uStack_11c, 0xffffffff);
                                 pvVar33 = *(void**)( puVar9 + 2 );
                                 uVar36 = *puVar9;
                                 local_98 = (undefined1[8])local_2d0;
                                 uStack_80 = uStack_110;
                                 auVar48 = local_238;
                                 auVar14 = local_22c;
                                 if (uVar36 == puVar9[1]) {
                                    uVar32 = ( ulong )(uVar36 * 2);
                                    if (uVar36 * 2 == 0) {
                                       uVar32 = 1;
                                    }

                                    puVar9[1] = (uint)uVar32;
                                    pvVar33 = (void*)Memory::realloc_static(pvVar33, uVar32 * 0x28, false);
                                    auVar49._8_4_ = uStack_1a4;
                                    auVar49._0_8_ = auStack_1a0._0_8_;
                                    *(void**)( puVar9 + 2 ) = pvVar33;
                                    if (pvVar33 == (void*)0x0) {
                                       LAB_00102288:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                                       _err_flush_stdout();
                                       /* WARNING: Does not return */
                                       pcVar10 = (code*)invalidInstructionException();
                                       ( *pcVar10 )();
                                    }

                                    uVar36 = *puVar9;
                                    auVar48 = local_238;
                                    auVar14 = local_22c;
                                 }

                                 auVar12._8_8_ = uStack_80;
                                 auVar12._0_8_ = local_88;
                                 *puVar9 = uVar36 + 1;
                                 puVar28 = (undefined4*)( (long)pvVar33 + (ulong)uVar36 * 0x28 );
                                 *puVar28 = local_98._0_4_;
                                 puVar28[1] = local_98._4_4_;
                                 puVar28[2] = (undefined4)uStack_90;
                                 puVar28[3] = uStack_90._4_4_;
                                 *(undefined8*)( puVar28 + 8 ) = local_78;
                                 *(undefined1(*) [16])( puVar28 + 4 ) = auVar12;
                                 goto LAB_00101aa5;
                              }

                           }

                           LAB_0010213a:uVar32 = 0;
                           uVar35 = 0;
                           goto LAB_001020f5;
                        }

                     }

                  }

                  uVar35 = 2;
                  LAB_001020f5:uStack_1a4 = auVar49._8_4_;
                  auStack_1a0._0_8_ = auVar49._0_8_;
                  _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar35, uVar32, "p_index", "count", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar10 = (code*)invalidInstructionException();
                  ( *pcVar10 )();
               }

            }

         }

         LAB_00101370:lVar38 = lVar38 + 0x58;
      }
 while ( lVar39 != lVar38 );
   }

   uStack_1a4 = auVar49._8_4_;
   auStack_1a0._0_8_ = auVar49._0_8_;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   local_238 = auVar48;
   local_22c = auVar14;
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* NavMapBuilder3D::_build_step_find_edge_connection_pairs(NavMapIterationBuild&) */void NavMapBuilder3D::_build_step_find_edge_connection_pairs(NavMapIterationBuild *param_1) {
   int iVar1;
   long lVar2;
   uint uVar3;
   long lVar4;
   long lVar5;
   undefined8 uVar6;
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   code *pcVar15;
   uint uVar16;
   ulong uVar17;
   ulong uVar18;
   long lVar19;
   ulong uVar20;
   uint uVar21;
   long lVar22;
   long lVar23;
   uint uVar24;
   long *plVar25;
   uint uVar26;
   ulong uVar27;
   ulong uVar28;
   long in_FS_OFFSET;
   byte bVar29;
   int local_dc;
   long local_b0;
   ulong local_a8;
   ulong local_a0;
   long local_98;
   uint uStack_90;
   undefined4 uStack_8c;
   undefined4 uStack_88;
   undefined4 uStack_84;
   undefined8 uStack_80;
   undefined4 local_78;
   undefined4 local_68;
   long local_40;
   bVar29 = 0;
   lVar4 = *(long*)( param_1 + 0x88 );
   uVar3 = *(uint*)( param_1 + 0x3c );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar17 = ( ulong ) * (uint*)( param_1 + 0x70 );
   uVar16 = *(uint*)( hash_table_size_primes + uVar17 * 4 );
   if (( *(long*)( param_1 + 0x50 ) != 0 ) && ( *(int*)( param_1 + 0x74 ) != 0 )) {
      if (uVar16 != 0) {
         lVar23 = 0;
         do {
            if (*(int*)( *(long*)( param_1 + 0x58 ) + lVar23 ) != 0) {
               *(int*)( *(long*)( param_1 + 0x58 ) + lVar23 ) = 0;
               Memory::free_static(*(void**)( *(long*)( param_1 + 0x50 ) + lVar23 * 2 ), false);
               *(undefined8*)( *(long*)( param_1 + 0x50 ) + lVar23 * 2 ) = 0;
            }

            lVar23 = lVar23 + 4;
         }
 while ( lVar23 != (ulong)uVar16 * 4 );
         uVar17 = ( ulong ) * (uint*)( param_1 + 0x70 );
         uVar16 = *(uint*)( hash_table_size_primes + uVar17 * 4 );
      }

      *(undefined4*)( param_1 + 0x74 ) = 0;
      *(undefined1(*) [16])( param_1 + 0x60 ) = (undefined1[16])0x0;
   }

   if (uVar16 < uVar3) {
      uVar21 = (uint)uVar17;
      uVar16 = uVar21;
      do {
         if (uVar16 == 0x1c) {
            _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
            goto LAB_00102531;
         }

         uVar16 = (int)uVar17 + 1;
         uVar17 = (ulong)uVar16;
      }
 while ( *(uint*)( hash_table_size_primes + uVar17 * 4 ) < uVar3 );
      if (uVar16 != uVar21) {
         if (*(long*)( param_1 + 0x50 ) == 0) {
            *(uint*)( param_1 + 0x70 ) = uVar16;
         }
 else {
            HashMap<gd::EdgeKey,gd::EdgeConnectionPair,gd::EdgeKey,HashMapComparatorDefault<gd::EdgeKey>,DefaultTypedAllocator<HashMapElement<gd::EdgeKey,gd::EdgeConnectionPair>>>::_resize_and_rehash((HashMap<gd::EdgeKey,gd::EdgeConnectionPair,gd::EdgeKey,HashMapComparatorDefault<gd::EdgeKey>,DefaultTypedAllocator<HashMapElement<gd::EdgeKey,gd::EdgeConnectionPair>>>*)( param_1 + 0x48 ), uVar16);
         }

      }

   }

   LAB_00102531:lVar23 = *(long*)( lVar4 + 0x68 );
   local_dc = 0;
   lVar4 = lVar23 + ( ulong ) * (uint*)( lVar4 + 0x60 ) * 0x90;
   do {
      if (lVar23 == lVar4) {
         *(int*)( param_1 + 0x40 ) = local_dc;
         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }

      if (*(char*)( lVar23 + 4 ) != '\0') {
         lVar5 = *(long*)( lVar23 + 0x68 );
         lVar2 = lVar5 + ( ulong ) * (uint*)( lVar23 + 0x60 ) * 0x38;
         for (; lVar2 != lVar5; lVar5 = lVar5 + 0x38) {
            uVar28 = 0;
            uVar17 = ( ulong ) * (uint*)( lVar5 + 0x10 );
            if (*(uint*)( lVar5 + 0x10 ) != 0) {
               do {
                  uVar3 = (uint)uVar28;
                  uVar20 = ( ulong )(uVar3 + 1) % uVar17;
                  uVar17 = *(ulong*)( *(long*)( lVar5 + 0x18 ) + 0x10 + uVar20 * 0x18 );
                  local_a8 = *(ulong*)( *(long*)( lVar5 + 0x18 ) + 0x10 + uVar28 * 0x18 );
                  local_a0 = uVar17;
                  if (uVar17 < local_a8) {
                     local_a0 = local_a8;
                     local_a8 = uVar17;
                  }

                  lVar19 = *(long*)( param_1 + 0x50 );
                  if (( lVar19 != 0 ) && ( *(int*)( param_1 + 0x74 ) != 0 )) {
                     uVar27 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x70 ) * 4 ));
                     uVar17 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x70 ) * 8 );
                     uVar18 = local_a8 * 0x3ffff - 1;
                     uVar18 = ( uVar18 ^ uVar18 >> 0x1f ) * 0x15;
                     uVar18 = ( uVar18 ^ uVar18 >> 0xb ) * 0x41;
                     uVar21 = ( uint )(uVar18 >> 0x16) ^ (uint)uVar18;
                     uVar18 = local_a0 * 0x3ffff - 1;
                     uVar18 = ( uVar18 ^ uVar18 >> 0x1f ) * 0x15;
                     uVar18 = ( uVar18 >> 0xb ^ uVar18 ) * 0x41;
                     uVar16 = ( uint )(uVar18 >> 0x16) ^ (uint)uVar18;
                     uVar24 = uVar16 ^ uVar21;
                     if (uVar21 == uVar16) {
                        uVar24 = 1;
                        uVar18 = uVar17;
                     }
 else {
                        uVar18 = uVar24 * uVar17;
                     }

                     auVar7._8_8_ = 0;
                     auVar7._0_8_ = uVar27;
                     auVar11._8_8_ = 0;
                     auVar11._0_8_ = uVar18;
                     lVar22 = SUB168(auVar7 * auVar11, 8);
                     uVar21 = SUB164(auVar7 * auVar11, 8);
                     uVar16 = *(uint*)( *(long*)( param_1 + 0x58 ) + lVar22 * 4 );
                     if (uVar16 != 0) {
                        uVar26 = 0;
                        while (( ( uVar24 != uVar16 || ( lVar22 = *(long*)( lVar19 + lVar22 * 8 ) * (ulong*)( lVar22 + 0x10 ) != local_a8 ) ) || ( *(ulong*)( lVar22 + 0x18 ) != local_a0 ) )) {
                           uVar26 = uVar26 + 1;
                           auVar8._8_8_ = 0;
                           auVar8._0_8_ = ( uVar21 + 1 ) * uVar17;
                           auVar12._8_8_ = 0;
                           auVar12._0_8_ = uVar27;
                           lVar22 = SUB168(auVar8 * auVar12, 8);
                           uVar16 = *(uint*)( *(long*)( param_1 + 0x58 ) + lVar22 * 4 );
                           uVar21 = SUB164(auVar8 * auVar12, 8);
                           if (( uVar16 == 0 ) || ( auVar9._8_8_ = 0 ),auVar9._0_8_ = uVar16 * uVar17,auVar13._8_8_ = 0,auVar13._0_8_ = uVar27,auVar10._8_8_ = 0,auVar10._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x70 ) * 4 ) + uVar21 ) - SUB164(auVar9 * auVar13, 8) ) * uVar17,auVar14._8_8_ = 0,auVar14._0_8_ = uVar27,SUB164(auVar10 * auVar14, 8) < uVar26) goto LAB_00102940;
                        }
;
                        lVar19 = *(long*)( lVar19 + (ulong)uVar21 * 8 );
                        if (lVar19 != 0) goto LAB_001027db;
                     }

                  }

                  LAB_00102940:plVar25 = &local_98;
                  for (lVar19 = 0xb; lVar19 != 0; lVar19 = lVar19 + -1) {
                     *plVar25 = 0;
                     plVar25 = plVar25 + (ulong)bVar29 * -2 + 1;
                  }

                  uStack_90 = 0xffffffff;
                  local_68 = 0xffffffff;
                  HashMap<gd::EdgeKey,gd::EdgeConnectionPair,gd::EdgeKey,HashMapComparatorDefault<gd::EdgeKey>,DefaultTypedAllocator<HashMapElement<gd::EdgeKey,gd::EdgeConnectionPair>>>::insert((EdgeKey*)&local_b0, (EdgeConnectionPair*)( param_1 + 0x48 ), SUB81(&local_a8, 0));
                  local_dc = local_dc + 1;
                  *(int*)( param_1 + 0x28 ) = *(int*)( param_1 + 0x28 ) + 1;
                  lVar19 = local_b0;
                  LAB_001027db:if (*(int*)( lVar19 + 0x70 ) < 2) {
                     local_78 = 0;
                     uStack_80 = 0;
                     uVar16 = *(uint*)( lVar5 + 0x10 );
                     uVar17 = (ulong)uVar16;
                     if (uVar16 <= uVar3) {
                        uVar20 = uVar28 & 0xffffffff;
                        LAB_001029d3:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar20, uVar17, "p_index", "count", "", false, true);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar15 = (code*)invalidInstructionException();
                        ( *pcVar15 )();
                     }

                     lVar22 = *(long*)( lVar5 + 0x18 );
                     uVar6 = *(undefined8*)( lVar22 + uVar28 * 0x18 );
                     uStack_8c = (undefined4)uVar6;
                     uStack_88 = ( undefined4 )((ulong)uVar6 >> 0x20);
                     uStack_84 = *(undefined4*)( lVar22 + 8 + uVar28 * 0x18 );
                     if (uVar16 <= (uint)uVar20) goto LAB_001029d3;
                     uStack_80 = *(undefined8*)( lVar22 + uVar20 * 0x18 );
                     local_78 = *(undefined4*)( lVar22 + 8 + uVar20 * 0x18 );
                     lVar22 = lVar19 + (long)*(int*)( lVar19 + 0x70 ) * 0x28;
                     *(undefined4*)( lVar22 + 0x40 ) = local_78;
                     *(long*)( lVar22 + 0x20 ) = lVar5;
                     *(ulong*)( lVar22 + 0x28 ) = CONCAT44(uStack_8c, uVar3);
                     *(ulong*)( lVar22 + 0x30 ) = CONCAT44(uStack_84, uStack_88);
                     *(undefined8*)( lVar22 + 0x38 ) = uStack_80;
                     iVar1 = *(int*)( lVar19 + 0x70 ) + 1;
                     *(int*)( lVar19 + 0x70 ) = iVar1;
                     local_dc = local_dc - ( uint )(iVar1 == 2);
                     local_98 = lVar5;
                     uStack_90 = uVar3;
                  }
 else {
                     if (_build_step_find_edge_connection_pairs(NavMapIterationBuild & ::first_print != '\0') {
                        _err_print_error("_build_step_find_edge_connection_pairs", "modules/navigation/3d/nav_map_builder_3d.cpp", 0x97, "Navigation map synchronization error. Attempted to merge a navigation mesh polygon edge with another already-merged edge. This is usually caused by crossing edges, overlapping polygons, or a mismatch of the NavigationMesh / NavigationPolygon baked \'cell_size\' and navigation map \'cell_size\'. If you\'re certain none of above is the case, change \'navigation/3d/merge_rasterizer_cell_scale\' to 0.001.", 0, 0);
                        _build_step_find_edge_connection_pairs(NavMapIterationBuild&)::first_print =
                        '\0';
                     }

                     uVar17 = ( ulong ) * (uint*)( lVar5 + 0x10 );
                  }

                  uVar28 = uVar28 + 1;
               }
 while ( (uint)uVar28 < (uint)uVar17 );
            }

         }

      }

      lVar23 = lVar23 + 0x90;
   }
 while ( true );
}
/* NavMapBuilder3D::build_navmap_iteration(NavMapIterationBuild&) */void NavMapBuilder3D::build_navmap_iteration(NavMapIterationBuild *param_1) {
   *(undefined4*)( param_1 + 0x34 ) = 0;
   *(undefined1(*) [16])( param_1 + 0x24 ) = (undefined1[16])0x0;
   _build_step_gather_region_polygons(param_1);
   _build_step_find_edge_connection_pairs(param_1);
   _build_step_merge_edge_connection_pairs(param_1);
   _build_step_edge_connection_margin_connections(param_1);
   _build_step_navlink_connections(param_1);
   _build_update_map_iteration(param_1);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<unsigned int, LocalVector<gd::Edge::Connection, unsigned int, false, false>,
   HashMapHasherDefault, HashMapComparatorDefault<unsigned int>,
   DefaultTypedAllocator<HashMapElement<unsigned int, LocalVector<gd::Edge::Connection, unsigned
   int, false, false> > > >::operator[](unsigned int const&) */undefined1[16];HashMap<unsigned_int,LocalVector<gd::Edge::Connection,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,LocalVector<gd::Edge::Connection,unsigned_int,false,false>>>>::operator *this,uint*param_1 {
   uint *puVar1;
   undefined8 *puVar2;
   void *pvVar3;
   void *__s;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
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
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   undefined1 auVar34[16];
   undefined1 auVar35[16];
   undefined1(*pauVar36)[16];
   uint uVar37;
   uint uVar38;
   uint uVar39;
   ulong uVar40;
   undefined8 uVar41;
   void *__s_00;
   undefined1(*pauVar42)[16];
   ulong uVar43;
   int iVar44;
   ulong uVar45;
   long lVar46;
   long lVar47;
   ulong uVar48;
   undefined8 uVar49;
   uint uVar50;
   ulong uVar51;
   long lVar52;
   uint uVar53;
   uint uVar54;
   undefined1(*pauVar55)[16];
   undefined1 auVar56[16];
   undefined1 auVar57[16];
   long lStack_98;
   void *local_68;
   local_68 = *(void**)( this + 8 );
   uVar40 = ( ulong ) * (uint*)( this + 0x28 );
   uVar38 = *param_1;
   uVar39 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
   uVar51 = CONCAT44(0, uVar39);
   if (local_68 == (void*)0x0) {
      uVar40 = uVar51 * 4;
      uVar48 = uVar51 * 8;
      uVar41 = Memory::alloc_static(uVar40, false);
      *(undefined8*)( this + 0x10 ) = uVar41;
      local_68 = (void*)Memory::alloc_static(uVar48, false);
      *(void**)( this + 8 ) = local_68;
      if (uVar39 == 0) {
         uVar38 = *param_1;
         iVar44 = *(int*)( this + 0x2c );
         if (local_68 == (void*)0x0) goto LAB_00103070;
      }
 else {
         pvVar3 = *(void**)( this + 0x10 );
         if (( pvVar3 < (void*)( (long)local_68 + uVar48 ) ) && ( local_68 < (void*)( (long)pvVar3 + uVar40 ) )) {
            uVar40 = 0;
            do {
               *(undefined4*)( (long)pvVar3 + uVar40 * 4 ) = 0;
               *(undefined8*)( (long)local_68 + uVar40 * 8 ) = 0;
               uVar40 = uVar40 + 1;
            }
 while ( uVar51 != uVar40 );
            uVar38 = *param_1;
            iVar44 = *(int*)( this + 0x2c );
         }
 else {
            memset(pvVar3, 0, uVar40);
            memset(local_68, 0, uVar48);
            uVar38 = *param_1;
            iVar44 = *(int*)( this + 0x2c );
         }

      }

      if (iVar44 != 0) {
         uVar40 = ( ulong ) * (uint*)( this + 0x28 );
         lVar52 = *(long*)( this + 0x10 );
         goto LAB_001034c4;
      }

   }
 else {
      iVar44 = *(int*)( this + 0x2c );
      if (iVar44 != 0) {
         uVar48 = *(ulong*)( hash_table_size_primes_inv + uVar40 * 8 );
         uVar37 = ( uVar38 >> 0x10 ^ uVar38 ) * -0x7a143595;
         uVar37 = ( uVar37 ^ uVar37 >> 0xd ) * -0x3d4d51cb;
         uVar53 = uVar37 ^ uVar37 >> 0x10;
         if (uVar37 == uVar37 >> 0x10) {
            uVar53 = 1;
            uVar45 = uVar48;
         }
 else {
            uVar45 = uVar53 * uVar48;
         }

         auVar4._8_8_ = 0;
         auVar4._0_8_ = uVar51;
         auVar20._8_8_ = 0;
         auVar20._0_8_ = uVar45;
         lVar46 = SUB168(auVar4 * auVar20, 8);
         lVar52 = *(long*)( this + 0x10 );
         uVar54 = SUB164(auVar4 * auVar20, 8);
         uVar37 = *(uint*)( lVar52 + lVar46 * 4 );
         if (uVar37 != 0) {
            uVar50 = 0;
            lVar47 = lVar46;
            do {
               if (( uVar53 == uVar37 ) && ( uVar38 == *(uint*)( *(long*)( (long)local_68 + lVar46 * 8 ) + 0x10 ) )) {
                  auVar56._0_8_ = *(long*)( (long)local_68 + (ulong)uVar54 * 8 ) + 0x18;
                  auVar56._8_8_ = lVar47;
                  return auVar56;
               }

               uVar50 = uVar50 + 1;
               auVar5._8_8_ = 0;
               auVar5._0_8_ = ( uVar54 + 1 ) * uVar48;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = uVar51;
               lVar46 = SUB168(auVar5 * auVar21, 8);
               uVar37 = *(uint*)( lVar52 + lVar46 * 4 );
               uVar54 = SUB164(auVar5 * auVar21, 8);
            }
 while ( ( uVar37 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar37 * uVar48,auVar22._8_8_ = 0,auVar22._0_8_ = uVar51,auVar7._8_8_ = 0,auVar7._0_8_ = ( ( uVar54 + uVar39 ) - SUB164(auVar6 * auVar22, 8) ) * uVar48,auVar23._8_8_ = 0,auVar23._0_8_ = uVar51,lVar47 = SUB168(auVar7 * auVar23, 8),uVar50 <= SUB164(auVar7 * auVar23, 8) );
         }

         LAB_001034c4:uVar45 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar40 * 4 ));
         uVar48 = *(ulong*)( hash_table_size_primes_inv + uVar40 * 8 );
         uVar39 = ( uVar38 >> 0x10 ^ uVar38 ) * -0x7a143595;
         uVar39 = ( uVar39 ^ uVar39 >> 0xd ) * -0x3d4d51cb;
         uVar37 = uVar39 ^ uVar39 >> 0x10;
         if (uVar39 == uVar39 >> 0x10) {
            uVar37 = 1;
            uVar43 = uVar48;
         }
 else {
            uVar43 = uVar37 * uVar48;
         }

         auVar16._8_8_ = 0;
         auVar16._0_8_ = uVar45;
         auVar32._8_8_ = 0;
         auVar32._0_8_ = uVar43;
         lVar46 = SUB168(auVar16 * auVar32, 8);
         uVar39 = *(uint*)( lVar52 + lVar46 * 4 );
         uVar53 = SUB164(auVar16 * auVar32, 8);
         if (uVar39 != 0) {
            uVar54 = 0;
            lStack_98 = lVar46;
            do {
               if (( uVar37 == uVar39 ) && ( *(uint*)( *(long*)( (long)local_68 + lVar46 * 8 ) + 0x10 ) == uVar38 )) {
                  pauVar42 = *(undefined1(**) [16])( (long)local_68 + (ulong)uVar53 * 8 );
                  if (*(int*)( pauVar42[1] + 8 ) != 0) {
                     *(undefined4*)( pauVar42[1] + 8 ) = 0;
                  }

                  goto LAB_001033f3;
               }

               uVar54 = uVar54 + 1;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = ( uVar53 + 1 ) * uVar48;
               auVar33._8_8_ = 0;
               auVar33._0_8_ = uVar45;
               lVar46 = SUB168(auVar17 * auVar33, 8);
               uVar39 = *(uint*)( lVar52 + lVar46 * 4 );
               uVar53 = SUB164(auVar17 * auVar33, 8);
            }
 while ( ( uVar39 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = uVar39 * uVar48,auVar34._8_8_ = 0,auVar34._0_8_ = uVar45,auVar19._8_8_ = 0,auVar19._0_8_ = ( ( *(uint*)( hash_table_size_primes + uVar40 * 4 ) + uVar53 ) - SUB164(auVar18 * auVar34, 8) ) * uVar48,auVar35._8_8_ = 0,auVar35._0_8_ = uVar45,lStack_98 = SUB168(auVar19 * auVar35, 8),uVar54 <= SUB164(auVar19 * auVar35, 8) );
         }

      }

   }

   LAB_00103070:if ((float)uVar51 * __LC11 < (float)( iVar44 + 1 )) {
      uVar38 = *(uint*)( this + 0x28 );
      if (uVar38 == 0x1c) {
         pauVar42 = (undefined1(*) [16])0x0;
         lStack_98 = 0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0);
         goto LAB_001033f3;
      }

      uVar40 = ( ulong )(uVar38 + 1);
      uVar39 = *(uint*)( hash_table_size_primes + (ulong)uVar38 * 4 );
      *(undefined4*)( this + 0x2c ) = 0;
      if (uVar38 + 1 < 2) {
         uVar40 = 2;
      }

      uVar38 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
      *(int*)( this + 0x28 ) = (int)uVar40;
      pvVar3 = *(void**)( this + 0x10 );
      uVar48 = (ulong)uVar38;
      uVar40 = uVar48 * 4;
      uVar51 = uVar48 * 8;
      uVar41 = Memory::alloc_static(uVar40, false);
      *(undefined8*)( this + 0x10 ) = uVar41;
      __s_00 = (void*)Memory::alloc_static(uVar51, false);
      *(void**)( this + 8 ) = __s_00;
      if (uVar38 != 0) {
         __s = *(void**)( this + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar51 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
            uVar40 = 0;
            do {
               *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
               uVar40 = uVar40 + 1;
            }
 while ( uVar40 != uVar48 );
         }
 else {
            memset(__s, 0, uVar40);
            memset(__s_00, 0, uVar51);
         }

      }

      uVar40 = 0;
      if (uVar39 != 0) {
         do {
            uVar38 = *(uint*)( (long)pvVar3 + uVar40 * 4 );
            if (uVar38 != 0) {
               uVar54 = 0;
               lVar52 = *(long*)( this + 0x10 );
               uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
               uVar51 = CONCAT44(0, uVar37);
               lVar46 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               auVar8._8_8_ = 0;
               auVar8._0_8_ = (ulong)uVar38 * lVar46;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar51;
               lVar47 = SUB168(auVar8 * auVar24, 8);
               puVar1 = (uint*)( lVar52 + lVar47 * 4 );
               iVar44 = SUB164(auVar8 * auVar24, 8);
               uVar53 = *puVar1;
               uVar41 = *(undefined8*)( (long)local_68 + uVar40 * 8 );
               while (uVar53 != 0) {
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = (ulong)uVar53 * lVar46;
                  auVar25._8_8_ = 0;
                  auVar25._0_8_ = uVar51;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = ( ulong )(( uVar37 + iVar44 ) - SUB164(auVar9 * auVar25, 8)) * lVar46;
                  auVar26._8_8_ = 0;
                  auVar26._0_8_ = uVar51;
                  uVar50 = SUB164(auVar10 * auVar26, 8);
                  uVar49 = uVar41;
                  if (uVar50 < uVar54) {
                     *puVar1 = uVar38;
                     puVar2 = (undefined8*)( (long)__s_00 + lVar47 * 8 );
                     uVar49 = *puVar2;
                     *puVar2 = uVar41;
                     uVar38 = uVar53;
                     uVar54 = uVar50;
                  }

                  uVar54 = uVar54 + 1;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = ( ulong )(iVar44 + 1) * lVar46;
                  auVar27._8_8_ = 0;
                  auVar27._0_8_ = uVar51;
                  lVar47 = SUB168(auVar11 * auVar27, 8);
                  puVar1 = (uint*)( lVar52 + lVar47 * 4 );
                  iVar44 = SUB164(auVar11 * auVar27, 8);
                  uVar41 = uVar49;
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
         Memory::free_static(local_68, false);
         Memory::free_static(pvVar3, false);
      }

   }

   uVar38 = *param_1;
   pauVar42 = (undefined1(*) [16])operator_new(0x28, "");
   *(undefined8*)pauVar42[2] = 0;
   *(uint*)pauVar42[1] = uVar38;
   *(undefined8*)( pauVar42[1] + 8 ) = 0;
   *pauVar42 = (undefined1[16])0x0;
   puVar2 = *(undefined8**)( this + 0x20 );
   if (puVar2 == (undefined8*)0x0) {
      *(undefined1(**) [16])( this + 0x18 ) = pauVar42;
   }
 else {
      *puVar2 = pauVar42;
      *(undefined8**)( *pauVar42 + 8 ) = puVar2;
   }

   *(undefined1(**) [16])( this + 0x20 ) = pauVar42;
   uVar38 = ( *param_1 >> 0x10 ^ *param_1 ) * -0x7a143595;
   uVar39 = ( uVar38 ^ uVar38 >> 0xd ) * -0x3d4d51cb;
   uVar38 = uVar39 ^ uVar39 >> 0x10;
   if (uVar39 == uVar39 >> 0x10) {
      uVar40 = 1;
      uVar38 = 1;
   }
 else {
      uVar40 = (ulong)uVar38;
   }

   uVar53 = 0;
   lVar52 = *(long*)( this + 0x10 );
   uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   uVar51 = CONCAT44(0, uVar39);
   lVar46 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   auVar12._8_8_ = 0;
   auVar12._0_8_ = uVar40 * lVar46;
   auVar28._8_8_ = 0;
   auVar28._0_8_ = uVar51;
   lStack_98 = SUB168(auVar12 * auVar28, 8);
   lVar47 = *(long*)( this + 8 );
   puVar1 = (uint*)( lVar52 + lStack_98 * 4 );
   iVar44 = SUB164(auVar12 * auVar28, 8);
   uVar37 = *puVar1;
   pauVar36 = pauVar42;
   while (uVar37 != 0) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar37 * lVar46;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar51;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = ( ulong )(( iVar44 + uVar39 ) - SUB164(auVar13 * auVar29, 8)) * lVar46;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar51;
      uVar54 = SUB164(auVar14 * auVar30, 8);
      pauVar55 = pauVar36;
      if (uVar54 < uVar53) {
         *puVar1 = uVar38;
         puVar2 = (undefined8*)( lVar47 + lStack_98 * 8 );
         pauVar55 = (undefined1(*) [16])*puVar2;
         *puVar2 = pauVar36;
         uVar38 = uVar37;
         uVar53 = uVar54;
      }

      uVar53 = uVar53 + 1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(iVar44 + 1) * lVar46;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar51;
      lStack_98 = SUB168(auVar15 * auVar31, 8);
      puVar1 = (uint*)( lVar52 + lStack_98 * 4 );
      iVar44 = SUB164(auVar15 * auVar31, 8);
      pauVar36 = pauVar55;
      uVar37 = *puVar1;
   }
;
   *(undefined1(**) [16])( lVar47 + lStack_98 * 8 ) = pauVar36;
   *puVar1 = uVar38;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
   LAB_001033f3:auVar57._8_8_ = lStack_98;
   auVar57._0_8_ = pauVar42[1] + 8;
   return auVar57;
}
/* WARNING: Removing unreachable block (ram,0x00103828) *//* WARNING: Removing unreachable block (ram,0x00103958) *//* WARNING: Removing unreachable block (ram,0x00103b20) *//* WARNING: Removing unreachable block (ram,0x00103964) *//* WARNING: Removing unreachable block (ram,0x0010396e) *//* WARNING: Removing unreachable block (ram,0x00103b00) *//* WARNING: Removing unreachable block (ram,0x0010397a) *//* WARNING: Removing unreachable block (ram,0x00103984) *//* WARNING: Removing unreachable block (ram,0x00103ae0) *//* WARNING: Removing unreachable block (ram,0x00103990) *//* WARNING: Removing unreachable block (ram,0x0010399a) *//* WARNING: Removing unreachable block (ram,0x00103ac0) *//* WARNING: Removing unreachable block (ram,0x001039a6) *//* WARNING: Removing unreachable block (ram,0x001039b0) *//* WARNING: Removing unreachable block (ram,0x00103aa0) *//* WARNING: Removing unreachable block (ram,0x001039bc) *//* WARNING: Removing unreachable block (ram,0x001039c6) *//* WARNING: Removing unreachable block (ram,0x00103a80) *//* WARNING: Removing unreachable block (ram,0x001039d2) *//* WARNING: Removing unreachable block (ram,0x001039dc) *//* WARNING: Removing unreachable block (ram,0x00103a60) *//* WARNING: Removing unreachable block (ram,0x001039e4) *//* WARNING: Removing unreachable block (ram,0x001039fa) *//* WARNING: Removing unreachable block (ram,0x00103a06) *//* String vformat<int>(String const&, int const) */String_conflict *vformat<int>(String_conflict *param_1, int param_2) {
   char cVar1;
   Variant *this;
   int in_EDX;
   undefined4 in_register_00000034;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, in_EDX);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, (bool*)CONCAT44(in_register_00000034, param_2));
   *(undefined8*)param_1 = local_c0[0];
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
/* LocalVector<gd::Edge, unsigned int, false, false>::resize(unsigned int) */void LocalVector<gd::Edge,unsigned_int,false,false>::resize(LocalVector<gd::Edge,unsigned_int,false,false> *this, uint param_1) {
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
         if (param_1 <= uVar7) goto LAB_00103ba9;
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

   LAB_00103ba9:*(uint*)this = param_1;
   return;
}
/* HashMap<gd::EdgeKey, gd::EdgeConnectionPair, gd::EdgeKey, HashMapComparatorDefault<gd::EdgeKey>,
   DefaultTypedAllocator<HashMapElement<gd::EdgeKey, gd::EdgeConnectionPair> >
   >::_resize_and_rehash(unsigned int) */void HashMap<gd::EdgeKey,gd::EdgeConnectionPair,gd::EdgeKey,HashMapComparatorDefault<gd::EdgeKey>,DefaultTypedAllocator<HashMapElement<gd::EdgeKey,gd::EdgeConnectionPair>>>::_resize_and_rehash(HashMap<gd::EdgeKey,gd::EdgeConnectionPair,gd::EdgeKey,HashMapComparatorDefault<gd::EdgeKey>,DefaultTypedAllocator<HashMapElement<gd::EdgeKey,gd::EdgeConnectionPair>>> *this, uint param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<gd::EdgeKey, gd::EdgeConnectionPair, gd::EdgeKey, HashMapComparatorDefault<gd::EdgeKey>,
   DefaultTypedAllocator<HashMapElement<gd::EdgeKey, gd::EdgeConnectionPair> > >::insert(gd::EdgeKey
   const&, gd::EdgeConnectionPair const&, bool) */EdgeKey * HashMap<gd::EdgeKey,gd::EdgeConnectionPair,gd::EdgeKey,HashMapComparatorDefault<gd::EdgeKey>,DefaultTypedAllocator<HashMapElement<gd::EdgeKey,gd::EdgeConnectionPair>>>
          ::insert(EdgeKey *param_1,EdgeConnectionPair *param_2,bool param_3){
   uint *puVar1;
   long lVar2;
   undefined8 *puVar3;
   long lVar4;
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
   undefined8 uVar22;
   undefined8 uVar23;
   undefined8 uVar24;
   undefined8 uVar25;
   undefined8 uVar26;
   undefined8 uVar27;
   undefined8 uVar28;
   undefined8 uVar29;
   undefined8 uVar30;
   undefined8 uVar31;
   undefined1(*pauVar32)[16];
   ulong uVar33;
   undefined1(*pauVar34)[16];
   ulong uVar35;
   undefined8 uVar36;
   uint uVar37;
   undefined8 *in_RCX;
   uint uVar38;
   int iVar39;
   undefined7 in_register_00000011;
   long *plVar40;
   long lVar41;
   long lVar42;
   uint uVar43;
   char in_R8B;
   uint uVar44;
   uint uVar45;
   ulong uVar46;
   undefined1(*pauVar47)[16];
   long in_FS_OFFSET;
   void *local_f8;
   long local_e0;
   long local_d0;
   plVar40 = (long*)CONCAT71(in_register_00000011, param_3);
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar45 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   local_f8 = *(void**)( param_2 + 8 );
   if (local_f8 == (void*)0x0) {
      uVar46 = (ulong)uVar45;
      uVar35 = uVar46 * 4;
      uVar33 = uVar46 * 8;
      uVar36 = Memory::alloc_static(uVar35, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar36;
      local_f8 = (void*)Memory::alloc_static(uVar33, false);
      *(void**)( param_2 + 8 ) = local_f8;
      if (uVar45 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)local_f8 + uVar33 ) ) && ( local_f8 < (void*)( (long)__s + uVar35 ) )) {
            uVar35 = 0;
            do {
               *(undefined4*)( (long)__s + uVar35 * 4 ) = 0;
               *(undefined8*)( (long)local_f8 + uVar35 * 8 ) = 0;
               uVar35 = uVar35 + 1;
            }
 while ( uVar46 != uVar35 );
         }
 else {
            memset(__s, 0, uVar35);
            memset(local_f8, 0, uVar33);
         }

         goto LAB_00103f3d;
      }

      local_e0 = *plVar40;
      iVar39 = *(int*)( param_2 + 0x2c );
      local_d0 = plVar40[1];
      if (local_f8 != (void*)0x0) goto LAB_00103f52;
   }
 else {
      LAB_00103f3d:local_e0 = *plVar40;
      iVar39 = *(int*)( param_2 + 0x2c );
      local_d0 = plVar40[1];
      LAB_00103f52:if (iVar39 != 0) {
         uVar46 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 ));
         uVar35 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         uVar33 = local_e0 * 0x3ffff - 1;
         uVar33 = ( uVar33 ^ uVar33 >> 0x1f ) * 0x15;
         uVar33 = ( uVar33 ^ uVar33 >> 0xb ) * 0x41;
         uVar38 = ( uint )(uVar33 >> 0x16) ^ (uint)uVar33;
         uVar33 = local_d0 * 0x3ffff - 1;
         uVar33 = ( uVar33 ^ uVar33 >> 0x1f ) * 0x15;
         uVar33 = ( uVar33 >> 0xb ^ uVar33 ) * 0x41;
         uVar37 = ( uint )(uVar33 >> 0x16) ^ (uint)uVar33;
         uVar43 = uVar37 ^ uVar38;
         if (uVar38 == uVar37) {
            uVar43 = 1;
            uVar33 = uVar35;
         }
 else {
            uVar33 = uVar43 * uVar35;
         }

         auVar6._8_8_ = 0;
         auVar6._0_8_ = uVar46;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = uVar33;
         lVar41 = SUB168(auVar6 * auVar14, 8);
         uVar37 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar41 * 4 );
         uVar38 = SUB164(auVar6 * auVar14, 8);
         if (uVar37 != 0) {
            uVar44 = 0;
            do {
               if (( ( uVar37 == uVar43 ) && ( lVar41 = *(long*)( (long)local_f8 + lVar41 * 8 ) * (long*)( lVar41 + 0x10 ) == local_e0 ) ) && ( local_d0 == *(long*)( lVar41 + 0x18 ) )) {
                  uVar36 = in_RCX[1];
                  pauVar34 = *(undefined1(**) [16])( (long)local_f8 + (ulong)uVar38 * 8 );
                  *(undefined8*)pauVar34[2] = *in_RCX;
                  *(undefined8*)( pauVar34[2] + 8 ) = uVar36;
                  for (int i = 0; i < 4; i++) {
                     uVar36 = in_RCX[( 2*i + 3 )];
                     *(undefined8*)pauVar34[( i + 3 )] = in_RCX[( 2*i + 2 )];
                     *(undefined8*)( pauVar34[( i + 3 )] + 8 ) = uVar36;
                  }

                  *(undefined4*)pauVar34[7] = *(undefined4*)( in_RCX + 10 );
                  goto LAB_0010438b;
               }

               uVar44 = uVar44 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( uVar38 + 1 ) * uVar35;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar46;
               lVar41 = SUB168(auVar7 * auVar15, 8);
               uVar37 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar41 * 4 );
               uVar38 = SUB164(auVar7 * auVar15, 8);
            }
 while ( ( uVar37 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = uVar37 * uVar35,auVar16._8_8_ = 0,auVar16._0_8_ = uVar46,auVar9._8_8_ = 0,auVar9._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 ) + uVar38 ) - SUB164(auVar8 * auVar16, 8) ) * uVar35,auVar17._8_8_ = 0,auVar17._0_8_ = uVar46,uVar44 <= SUB164(auVar9 * auVar17, 8) );
         }

      }

   }

   if ((float)uVar45 * __LC11 < (float)( iVar39 + 1 )) {
      if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         pauVar34 = (undefined1(*) [16])0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_0010438b;
      }

      _resize_and_rehash((HashMap<gd::EdgeKey,gd::EdgeConnectionPair,gd::EdgeKey,HashMapComparatorDefault<gd::EdgeKey>,DefaultTypedAllocator<HashMapElement<gd::EdgeKey,gd::EdgeConnectionPair>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }

   lVar41 = *plVar40;
   lVar4 = plVar40[1];
   uVar22 = *in_RCX;
   uVar23 = in_RCX[1];
   uVar24 = in_RCX[2];
   uVar25 = in_RCX[3];
   uVar26 = in_RCX[4];
   uVar27 = in_RCX[5];
   uVar28 = in_RCX[6];
   uVar29 = in_RCX[7];
   uVar36 = in_RCX[10];
   uVar30 = in_RCX[8];
   uVar31 = in_RCX[9];
   pauVar34 = (undefined1(*) [16])operator_new(0x78, "");
   *pauVar34 = (undefined1[16])0x0;
   *(long*)pauVar34[1] = lVar41;
   *(long*)( pauVar34[1] + 8 ) = lVar4;
   *(undefined8*)pauVar34[2] = uVar22;
   *(undefined8*)( pauVar34[2] + 8 ) = uVar23;
   *(undefined8*)pauVar34[3] = uVar24;
   *(undefined8*)( pauVar34[3] + 8 ) = uVar25;
   *(undefined8*)pauVar34[4] = uVar26;
   *(undefined8*)( pauVar34[4] + 8 ) = uVar27;
   *(undefined8*)pauVar34[5] = uVar28;
   *(undefined8*)( pauVar34[5] + 8 ) = uVar29;
   *(undefined8*)pauVar34[6] = uVar30;
   *(undefined8*)( pauVar34[6] + 8 ) = uVar31;
   *(undefined8*)pauVar34[7] = uVar36;
   puVar3 = *(undefined8**)( param_2 + 0x20 );
   if (puVar3 == (undefined8*)0x0) {
      *(undefined1(**) [16])( param_2 + 0x18 ) = pauVar34;
      *(undefined1(**) [16])( param_2 + 0x20 ) = pauVar34;
   }
 else if (in_R8B == '\0') {
      *puVar3 = pauVar34;
      *(undefined8**)( *pauVar34 + 8 ) = puVar3;
      *(undefined1(**) [16])( param_2 + 0x20 ) = pauVar34;
   }
 else {
      lVar41 = *(long*)( param_2 + 0x18 );
      *(undefined1(**) [16])( lVar41 + 8 ) = pauVar34;
      *(long*)*pauVar34 = lVar41;
      *(undefined1(**) [16])( param_2 + 0x18 ) = pauVar34;
   }

   uVar35 = *plVar40 * 0x3ffff - 1;
   uVar35 = ( uVar35 ^ uVar35 >> 0x1f ) * 0x15;
   uVar35 = ( uVar35 ^ uVar35 >> 0xb ) * 0x41;
   uVar38 = ( uint )(uVar35 >> 0x16) ^ (uint)uVar35;
   uVar35 = plVar40[1] * 0x3ffff - 1;
   uVar35 = ( uVar35 ^ uVar35 >> 0x1f ) * 0x15;
   uVar35 = ( uVar35 ^ uVar35 >> 0xb ) * 0x41;
   uVar37 = ( uint )(uVar35 >> 0x16) ^ (uint)uVar35;
   uVar45 = uVar37 ^ uVar38;
   if (uVar38 == uVar37) {
      uVar35 = 1;
      uVar45 = 1;
   }
 else {
      uVar35 = (ulong)uVar45;
   }

   lVar41 = *(long*)( param_2 + 0x10 );
   uVar43 = 0;
   lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar33 = CONCAT44(0, uVar37);
   auVar10._8_8_ = 0;
   auVar10._0_8_ = uVar35 * lVar4;
   auVar18._8_8_ = 0;
   auVar18._0_8_ = uVar33;
   lVar42 = SUB168(auVar10 * auVar18, 8);
   lVar5 = *(long*)( param_2 + 8 );
   puVar1 = (uint*)( lVar41 + lVar42 * 4 );
   iVar39 = SUB164(auVar10 * auVar18, 8);
   uVar38 = *puVar1;
   pauVar32 = pauVar34;
   while (uVar38 != 0) {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar38 * lVar4;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar33;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(( uVar37 + iVar39 ) - SUB164(auVar11 * auVar19, 8)) * lVar4;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar33;
      uVar44 = SUB164(auVar12 * auVar20, 8);
      pauVar47 = pauVar32;
      if (uVar44 < uVar43) {
         *puVar1 = uVar45;
         puVar3 = (undefined8*)( lVar5 + lVar42 * 8 );
         pauVar47 = (undefined1(*) [16])*puVar3;
         *puVar3 = pauVar32;
         uVar45 = uVar38;
         uVar43 = uVar44;
      }

      uVar43 = uVar43 + 1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = ( ulong )(iVar39 + 1) * lVar4;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar33;
      lVar42 = SUB168(auVar13 * auVar21, 8);
      puVar1 = (uint*)( lVar41 + lVar42 * 4 );
      iVar39 = SUB164(auVar13 * auVar21, 8);
      pauVar32 = pauVar47;
      uVar38 = *puVar1;
   }
;
   *(undefined1(**) [16])( lVar5 + lVar42 * 8 ) = pauVar32;
   *puVar1 = uVar45;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_0010438b:*(undefined1(**) [16])param_1 = pauVar34;
   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}


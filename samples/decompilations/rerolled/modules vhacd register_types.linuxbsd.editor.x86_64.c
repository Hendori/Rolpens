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
}/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */void CowData<Vector3>::_copy_on_write(CowData<Vector3> *this) {
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
}/* initialize_vhacd_module(ModuleInitializationLevel) */void initialize_vhacd_module(int param_1) {
   if (param_1 == 2) {
      Mesh::convex_decomposition_function = convex_decompose;
   }
   return;
}/* uninitialize_vhacd_module(ModuleInitializationLevel) */void uninitialize_vhacd_module(int param_1) {
   if (param_1 == 2) {
      Mesh::convex_decomposition_function = 0;
   }
   return;
}/* CowData<Vector<Vector3> >::_copy_on_write() [clone .isra.0] */void CowData<Vector<Vector3>>::_copy_on_write(CowData<Vector<Vector3>> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   undefined8 *puVar9;
   ulong uVar10;
   bool bVar11;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }
   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }
   lVar2 = *(long*)( *(long*)this + -8 );
   uVar10 = 0x10;
   if (lVar2 * 0x10 != 0) {
      uVar10 = lVar2 * 0x10 - 1;
      uVar10 = uVar10 | uVar10 >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      uVar10 = ( uVar10 | uVar10 >> 0x20 ) + 0x11;
   }
   puVar5 = (undefined8*)Memory::alloc_static(uVar10, false);
   if (puVar5 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }
   lVar7 = 0;
   *puVar5 = 1;
   puVar5[1] = lVar2;
   puVar9 = puVar5 + 2;
   if (lVar2 != 0) {
      do {
         lVar8 = lVar7 * 0x10 + *(long*)this;
         puVar9[1] = 0;
         lVar3 = *(long*)( lVar8 + 8 );
         plVar1 = (long*)( lVar3 + -0x10 );
         if (lVar3 != 0) {
            do {
               lVar3 = *plVar1;
               if (lVar3 == 0) goto LAB_00100368;
               LOCK();
               lVar6 = *plVar1;
               bVar11 = lVar3 == lVar6;
               if (bVar11) {
                  *plVar1 = lVar3 + 1;
                  lVar6 = lVar3;
               }
               UNLOCK();
            } while ( !bVar11 );
            if (lVar6 != -1) {
               puVar9[1] = *(undefined8*)( lVar8 + 8 );
            }
         }
         LAB_00100368:lVar7 = lVar7 + 1;
         puVar9 = puVar9 + 2;
      } while ( lVar2 != lVar7 );
   }
   _unref(this);
   *(undefined8**)this = puVar5 + 2;
   return;
}/* CowData<Vector<unsigned int> >::_copy_on_write() [clone .isra.0] */void CowData<Vector<unsigned_int>>::_copy_on_write(CowData<Vector<unsigned_int>> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   undefined8 *puVar9;
   ulong uVar10;
   bool bVar11;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }
   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }
   lVar2 = *(long*)( *(long*)this + -8 );
   uVar10 = 0x10;
   if (lVar2 * 0x10 != 0) {
      uVar10 = lVar2 * 0x10 - 1;
      uVar10 = uVar10 | uVar10 >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      uVar10 = ( uVar10 | uVar10 >> 0x20 ) + 0x11;
   }
   puVar5 = (undefined8*)Memory::alloc_static(uVar10, false);
   if (puVar5 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }
   lVar7 = 0;
   *puVar5 = 1;
   puVar5[1] = lVar2;
   puVar9 = puVar5 + 2;
   if (lVar2 != 0) {
      do {
         lVar8 = lVar7 * 0x10 + *(long*)this;
         puVar9[1] = 0;
         lVar3 = *(long*)( lVar8 + 8 );
         plVar1 = (long*)( lVar3 + -0x10 );
         if (lVar3 != 0) {
            do {
               lVar3 = *plVar1;
               if (lVar3 == 0) goto LAB_00100498;
               LOCK();
               lVar6 = *plVar1;
               bVar11 = lVar3 == lVar6;
               if (bVar11) {
                  *plVar1 = lVar3 + 1;
                  lVar6 = lVar3;
               }
               UNLOCK();
            } while ( !bVar11 );
            if (lVar6 != -1) {
               puVar9[1] = *(undefined8*)( lVar8 + 8 );
            }
         }
         LAB_00100498:lVar7 = lVar7 + 1;
         puVar9 = puVar9 + 2;
      } while ( lVar2 != lVar7 );
   }
   _unref(this);
   *(undefined8**)this = puVar5 + 2;
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* convex_decompose(float const*, int, unsigned int const*, int,
   Ref<MeshConvexDecompositionSettings> const&, Vector<Vector<unsigned int> >*) */float *convex_decompose(float *param_1, int param_2, uint *param_3, int param_4, Ref *param_5, Vector *param_6) {
   CowData<Vector3> *this;
   CowData<unsigned_int> *this_00;
   long *plVar1;
   code *pcVar2;
   void *__src;
   byte bVar3;
   undefined4 uVar4;
   uint uVar5;
   int iVar6;
   long *plVar7;
   ulong uVar8;
   char *pcVar9;
   ulong uVar10;
   CowData<Vector3> *pCVar11;
   ulong uVar12;
   ulong uVar13;
   undefined8 *puVar14;
   undefined8 *puVar15;
   long lVar16;
   float *pfVar17;
   undefined4 in_register_0000000c;
   char *pcVar18;
   uint *puVar19;
   ulong uVar20;
   int iVar21;
   char *pcVar22;
   uint *puVar23;
   uint *extraout_RDX;
   ulong uVar24;
   undefined4 in_register_00000034;
   CowData<Vector3> *pCVar25;
   long lVar26;
   CowData<Vector3> *pCVar27;
   CowData<Vector<unsigned_int>> *this_01;
   Ref *pRVar28;
   Vector *pVVar29;
   long lVar30;
   long lVar31;
   long in_FS_OFFSET;
   float fVar32;
   long in_stack_00000008;
   double local_d8;
   double dStack_d0;
   double local_c8;
   double dStack_c0;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined4 local_88;
   undefined1 local_84;
   long local_78;
   void *local_70;
   uint local_68;
   int local_64;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_d8 = (double)__LC8;
   dStack_d0 = (double)_UNK_00101638;
   local_88 = 0x400;
   local_c8 = (double)__LC9;
   dStack_c0 = (double)_UNK_00101648;
   local_b8 = (undefined1[16])0x0;
   local_84 = 1;
   local_a8 = __LC10;
   uStack_a0 = _UNK_00101658;
   local_98 = __LC11;
   uStack_90 = _UNK_00101668;
   fVar32 = (float)MeshConvexDecompositionSettings::get_max_concavity();
   local_d8 = (double)fVar32;
   fVar32 = (float)MeshConvexDecompositionSettings::get_symmetry_planes_clipping_bias();
   dStack_d0 = (double)fVar32;
   fVar32 = (float)MeshConvexDecompositionSettings::get_revolution_axes_clipping_bias();
   local_c8 = (double)fVar32;
   fVar32 = (float)MeshConvexDecompositionSettings::get_min_volume_per_convex_hull();
   dStack_c0 = (double)fVar32;
   uVar4 = MeshConvexDecompositionSettings::get_resolution();
   local_a8 = CONCAT44(local_a8._4_4_, uVar4);
   uVar4 = MeshConvexDecompositionSettings::get_max_num_vertices_per_convex_hull();
   local_a8 = CONCAT44(uVar4, (undefined4)local_a8);
   uVar4 = MeshConvexDecompositionSettings::get_plane_downsampling();
   uStack_a0 = CONCAT44(uStack_a0._4_4_, uVar4);
   uVar4 = MeshConvexDecompositionSettings::get_convex_hull_downsampling();
   uStack_a0 = CONCAT44(uVar4, (undefined4)uStack_a0);
   bVar3 = MeshConvexDecompositionSettings::get_normalize_mesh();
   local_98 = CONCAT44(local_98._4_4_, (uint)bVar3);
   uVar4 = MeshConvexDecompositionSettings::get_mode();
   local_98 = CONCAT44(uVar4, (undefined4)local_98);
   bVar3 = MeshConvexDecompositionSettings::get_convex_hull_approximation();
   uStack_90 = CONCAT44(1, (uint)bVar3);
   local_88 = MeshConvexDecompositionSettings::get_max_convex_hulls();
   local_84 = MeshConvexDecompositionSettings::get_project_hull_vertices();
   plVar7 = (long*)VHACD::CreateVHACD();
   pRVar28 = (Ref*)( (ulong)param_5 & 0xffffffff );
   pVVar29 = (Vector*)&local_d8;
   ( **(code**)( *plVar7 + 8 ) )(plVar7, CONCAT44(in_register_00000034, param_2), (ulong)param_3 & 0xffffffff, CONCAT44(in_register_0000000c, param_4));
   uVar5 = ( **(code**)( *plVar7 + 0x18 ) )(plVar7);
   param_1[2] = 0.0;
   param_1[3] = 0.0;
   lVar30 = (long)(int)uVar5;
   if (lVar30 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      if (in_stack_00000008 != 0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      }
      goto LAB_00100c08;
   }
   if (lVar30 == 0) {
      if (in_stack_00000008 != 0) {
         if (( *(long*)( in_stack_00000008 + 8 ) != 0 ) && ( *(long*)( *(long*)( in_stack_00000008 + 8 ) + -8 ) != 0 )) {
            CowData<Vector<unsigned_int>>::_unref((CowData<Vector<unsigned_int>>*)( in_stack_00000008 + 8 ));
         }
      }
      goto LAB_00100c08;
   }
   CowData<Vector<Vector3>>::_copy_on_write((CowData<Vector<Vector3>>*)( param_1 + 2 ));
   uVar8 = (ulong)uVar5;
   uVar24 = uVar8 * 0x10 - 1;
   uVar24 = uVar24 | uVar24 >> 1;
   uVar24 = uVar24 | uVar24 >> 2;
   uVar24 = uVar24 | uVar24 >> 4;
   uVar24 = uVar24 | uVar24 >> 8;
   uVar24 = uVar24 | uVar24 >> 0x10;
   uVar24 = uVar24 | uVar24 >> 0x20;
   pcVar9 = (char*)Memory::alloc_static(uVar24 + 0x11, false);
   if (pcVar9 == (char*)0x0) {
      pVVar29 = (Vector*)0x0;
      pRVar28 = (Ref*)0x0;
      pcVar18 = "Parameter \"mem_new\" is null.";
      _err_print_error("resize", "./core/templates/cowdata.h", 0x171);
   } else {
      pcVar22 = pcVar9 + 0x10;
      for (int i_437 = 0; i_437 < 8; i_437++) {
         pcVar9[i_437] = '\x01';
      }
      *(char**)( param_1 + 2 ) = pcVar22;
      pcVar18 = pcVar9 + ( uVar8 + 1 ) * 0x10;
      if (( (int)pcVar18 - (int)pcVar22 & 0x10U ) == 0) goto LAB_0010074d;
      for (int i_438 = 0; i_438 < 8; i_438++) {
         pcVar9[( i_438 + 24 )] = '\0';
      }
      pcVar22 = pcVar9;
      while (pcVar22 = pcVar22 + 0x20,pcVar18 != pcVar22) {
         LAB_0010074d:pcVar22[8] = '\0';
         for (int i_440 = 0; i_440 < 7; i_440++) {
            pcVar22[( i_440 + 9 )] = '\0';
         }
         for (int i_439 = 0; i_439 < 8; i_439++) {
            pcVar22[( i_439 + 24 )] = '\0';
         }
      };
      *(ulong*)( pcVar9 + 8 ) = uVar8;
   }
   if (in_stack_00000008 != 0) {
      this_01 = (CowData<Vector<unsigned_int>>*)( in_stack_00000008 + 8 );
      if (*(long*)( in_stack_00000008 + 8 ) == 0) {
         CowData<Vector<unsigned_int>>::_copy_on_write(this_01);
         LAB_001010d4:puVar15 = (undefined8*)Memory::alloc_static(uVar24 + 0x11, false);
         if (puVar15 == (undefined8*)0x0) {
            pVVar29 = (Vector*)0x0;
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.");
         } else {
            puVar14 = puVar15 + 2;
            *puVar15 = 1;
            puVar15[1] = 0;
            lVar31 = 0;
            *(undefined8**)( in_stack_00000008 + 8 ) = puVar14;
            LAB_0010082a:puVar15 = puVar14 + lVar31 * 2;
            if (( (int)( puVar14 + uVar8 * 2 ) - (int)puVar15 & 0x10U ) == 0) goto LAB_00100859;
            puVar15[1] = 0;
            for (puVar15 = puVar15 + 2; puVar15 != puVar14 + uVar8 * 2; puVar15 = puVar15 + 4) {
               LAB_00100859:puVar15[1] = 0;
               puVar15[3] = 0;
            }
            LAB_00100872:puVar14[-1] = uVar8;
         }
      } else {
         lVar31 = *(long*)( *(long*)( in_stack_00000008 + 8 ) + -8 );
         if (lVar30 != lVar31) {
            lVar26 = uVar24 + 1;
            CowData<Vector<unsigned_int>>::_copy_on_write(this_01);
            if (lVar31 * 0x10 == 0) {
               lVar16 = 0;
               if (lVar31 < lVar30) {
                  LAB_00100c51:if (lVar31 == 0) goto LAB_001010d4;
                  iVar21 = CowData<Vector<unsigned_int>>::_realloc(this_01, lVar26);
                  if (iVar21 == 0) goto LAB_00100813;
                  goto LAB_0010087b;
               }
            } else {
               uVar10 = lVar31 * 0x10 - 1;
               uVar10 = uVar10 | uVar10 >> 1;
               uVar10 = uVar10 | uVar10 >> 2;
               uVar10 = uVar10 | uVar10 >> 4;
               uVar10 = uVar10 | uVar10 >> 8;
               uVar10 = uVar10 | uVar10 >> 0x10;
               pcVar18 = (char*)( uVar10 >> 0x20 );
               uVar10 = uVar10 | (ulong)pcVar18;
               if (lVar31 < lVar30) {
                  if (uVar24 != uVar10) goto LAB_00100c51;
                  LAB_00100813:puVar14 = *(undefined8**)( in_stack_00000008 + 8 );
                  if (puVar14 == (undefined8*)0x0) goto LAB_00101260;
                  lVar31 = puVar14[-1];
                  if (lVar31 < lVar30) goto LAB_0010082a;
                  goto LAB_00100872;
               }
               lVar16 = uVar10 + 1;
            }
            puVar14 = *(undefined8**)( in_stack_00000008 + 8 );
            uVar24 = uVar8;
            while (puVar14 != (undefined8*)0x0) {
               if ((ulong)puVar14[-1] <= uVar24) {
                  LAB_0010105e:iVar21 = (int)pcVar18;
                  if (lVar16 == lVar26) goto LAB_00100872;
                  iVar6 = CowData<Vector<unsigned_int>>::_realloc(this_01, lVar26);
                  if (iVar6 != 0) goto LAB_0010087b;
                  puVar14 = *(undefined8**)( in_stack_00000008 + 8 );
                  if (puVar14 == (undefined8*)0x0) {
                     pfVar17 = (float*)convex_decompose((float*)this_01, (int)lVar26, (uint*)0x0, iVar21, pRVar28, pVVar29);
                     return pfVar17;
                  }
                  goto LAB_00100872;
               }
               while (pcVar18 = (char*)puVar14[uVar24 * 2 + 1],pcVar18 == (char*)0x0) {
                  uVar24 = uVar24 + 1;
                  if ((ulong)puVar14[-1] <= uVar24) goto LAB_0010105e;
               };
               LOCK();
               plVar1 = (long*)( pcVar18 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar30 = puVar14[uVar24 * 2 + 1];
                  puVar14[uVar24 * 2 + 1] = 0;
                  Memory::free_static((void*)( lVar30 + -0x10 ), false);
               }
               uVar24 = uVar24 + 1;
               puVar14 = *(undefined8**)( in_stack_00000008 + 8 );
            };
            LAB_00101260:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
      }
   }
   LAB_0010087b:uVar24 = 0;
   do {
      ( **(code**)( *plVar7 + 0x20 ) )(plVar7, uVar24 & 0xffffffff, &local_78);
      if (*(long*)( param_1 + 2 ) == 0) {
         LAB_00100c70:pRVar28 = (Ref*)0x0;
         LAB_00100c73:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, uVar24, (long)pRVar28, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }
      pRVar28 = *(Ref**)( *(long*)( param_1 + 2 ) + -8 );
      if ((long)pRVar28 <= (long)uVar24) goto LAB_00100c73;
      CowData<Vector<Vector3>>::_copy_on_write((CowData<Vector<Vector3>>*)( param_1 + 2 ));
      uVar5 = local_68;
      puVar19 = (uint*)(ulong)local_68;
      lVar31 = *(long*)( param_1 + 2 ) + uVar24 * 0x10;
      lVar30 = *(long*)( lVar31 + 8 );
      this(CowData<Vector3> * )(lVar31 + 8);
      if (lVar30 == 0) {
         if (puVar19 != (uint*)0x0) {
            CowData<Vector3>::_copy_on_write(this);
            puVar23 = (uint*)0x0;
            LAB_00100cf4:uVar10 = (long)puVar19 * 0xc - 1;
            uVar10 = uVar10 | uVar10 >> 1;
            uVar10 = uVar10 >> 2 | uVar10;
            uVar10 = uVar10 >> 4 | uVar10;
            uVar10 = uVar10 >> 8 | uVar10;
            uVar10 = uVar10 >> 0x10 | uVar10;
            pCVar27 = (CowData<Vector3>*)( ( uVar10 >> 0x20 | uVar10 ) + 1 );
            if ((long)puVar23 < (long)puVar19) {
               LAB_00100d88:if (puVar23 == (uint*)0x0) {
                  puVar15 = (undefined8*)Memory::alloc_static(( ulong )(pCVar27 + 0x10), false);
                  if (puVar15 == (undefined8*)0x0) {
                     pVVar29 = (Vector*)0x0;
                     _err_print_error("resize", "./core/templates/cowdata.h", 0x171);
                  } else {
                     puVar14 = puVar15 + 2;
                     *puVar15 = 1;
                     puVar15[1] = 0;
                     *(undefined8**)( lVar31 + 8 ) = puVar14;
                     lVar30 = 0;
                     LAB_001009eb:if (lVar30 < (long)puVar19) {
                        memset((void*)( (long)puVar14 + lVar30 * 0xc ), 0, ( (long)puVar19 - lVar30 ) * 0xc);
                     }
                     puVar14[-1] = puVar19;
                  }
               } else {
                  iVar21 = CowData<Vector3>::_realloc(this, (long)pCVar27);
                  if (iVar21 == 0) {
                     LAB_001009da:puVar14 = *(undefined8**)( lVar31 + 8 );
                     if (puVar14 != (undefined8*)0x0) {
                        lVar30 = puVar14[-1];
                        goto LAB_001009eb;
                     }
                     goto LAB_00101260;
                  }
               }
            } else {
               LAB_00100d44:pCVar25 = pCVar27;
               pCVar27 = this;
               iVar21 = CowData<Vector3>::_realloc(this, (long)pCVar25);
               puVar23 = extraout_RDX;
               if (iVar21 == 0) goto LAB_00100d6b;
            }
         }
      } else {
         puVar23 = *(uint**)( lVar30 + -8 );
         if (puVar19 != puVar23) {
            if (puVar19 == (uint*)0x0) {
               LOCK();
               plVar1 = (long*)( lVar30 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar30 = *(long*)( lVar31 + 8 );
                  *(undefined8*)( lVar31 + 8 ) = 0;
                  Memory::free_static((void*)( lVar30 + -0x10 ), false);
               } else {
                  *(undefined8*)( lVar31 + 8 ) = 0;
               }
            } else {
               CowData<Vector3>::_copy_on_write(this);
               uVar10 = (long)puVar19 * 0xc - 1;
               uVar10 = uVar10 >> 1 | uVar10;
               uVar10 = uVar10 >> 2 | uVar10;
               uVar10 = uVar10 >> 4 | uVar10;
               uVar10 = uVar10 >> 8 | uVar10;
               uVar10 = uVar10 >> 0x10 | uVar10;
               pCVar25 = (CowData<Vector3>*)( uVar10 >> 0x20 | uVar10 );
               pCVar27 = pCVar25 + 1;
               if ((long)puVar23 * 0xc == 0) goto LAB_00100cf4;
               uVar10 = (long)puVar23 * 0xc - 1;
               uVar10 = uVar10 | uVar10 >> 1;
               uVar10 = uVar10 | uVar10 >> 2;
               uVar10 = uVar10 | uVar10 >> 4;
               uVar10 = uVar10 | uVar10 >> 8;
               uVar10 = uVar10 | uVar10 >> 0x10;
               pRVar28 = (Ref*)( uVar10 >> 0x20 );
               pCVar11 = (CowData<Vector3>*)( uVar10 | (ulong)pRVar28 );
               if ((long)puVar23 < (long)puVar19) {
                  if (pCVar11 != pCVar25) goto LAB_00100d88;
                  goto LAB_001009da;
               }
               if (pCVar11 != pCVar25) goto LAB_00100d44;
               LAB_00100d6b:if (*(long*)( lVar31 + 8 ) == 0) {
                  pfVar17 = (float*)convex_decompose((float*)pCVar27, (int)pCVar25, puVar23, uVar5, pRVar28, pVVar29);
                  return pfVar17;
               }
               *(uint**)( *(long*)( lVar31 + 8 ) + -8 ) = puVar19;
            }
         }
      }
      CowData<Vector3>::_copy_on_write(this);
      lVar30 = *(long*)( lVar31 + 8 );
      if (local_68 != 0) {
         iVar21 = 0;
         do {
            lVar31 = 0;
            do {
               *(float*)( lVar30 + lVar31 * 4 ) = (float)*(double*)( local_78 + ( ulong )(uint)(iVar21 + (int)lVar31) * 8 );
               lVar31 = lVar31 + 1;
            } while ( lVar31 != 3 );
            iVar21 = iVar21 + 3;
            lVar30 = lVar30 + 0xc;
         } while ( iVar21 != local_68 * 3 );
      }
      if (in_stack_00000008 != 0) {
         if (*(long*)( in_stack_00000008 + 8 ) == 0) goto LAB_00100c70;
         pRVar28 = *(Ref**)( *(long*)( in_stack_00000008 + 8 ) + -8 );
         if ((long)pRVar28 <= (long)uVar24) goto LAB_00100c73;
         CowData<Vector<unsigned_int>>::_copy_on_write((CowData<Vector<unsigned_int>>*)( in_stack_00000008 + 8 ));
         lVar31 = uVar24 * 0x10 + *(long*)( in_stack_00000008 + 8 );
         lVar30 = *(long*)( lVar31 + 8 );
         this_00 = (CowData<unsigned_int>*)( lVar31 + 8 );
         uVar5 = local_64 * 3;
         uVar10 = (ulong)uVar5;
         if (lVar30 == 0) {
            if (uVar10 == 0) {
               uVar5 = 0;
               goto LAB_00100bcd;
            }
            CowData<unsigned_int>::_copy_on_write(this_00);
            uVar20 = 0;
            LAB_00100e41:uVar12 = uVar10 * 4 - 1;
            uVar12 = uVar12 | uVar12 >> 1;
            uVar12 = uVar12 | uVar12 >> 2;
            uVar12 = uVar12 >> 4 | uVar12;
            uVar12 = uVar12 | uVar12 >> 8;
            uVar12 = uVar12 | uVar12 >> 0x10;
            lVar30 = ( uVar12 >> 0x20 | uVar12 ) + 1;
            if ((long)uVar20 < (long)uVar10) {
               LAB_00100e91:if (uVar20 != 0) goto LAB_00100ddf;
               puVar15 = (undefined8*)Memory::alloc_static(lVar30 + 0x10, false);
               if (puVar15 == (undefined8*)0x0) {
                  pVVar29 = (Vector*)0x0;
                  _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.");
                  uVar5 = local_64 * 3;
                  goto LAB_00100bcd;
               }
               puVar14 = puVar15 + 2;
               *puVar15 = 1;
               puVar15[1] = 0;
               *(undefined8**)( lVar31 + 8 ) = puVar14;
               LAB_00100bbf:puVar14[-1] = uVar10;
            } else {
               LAB_00100ddf:iVar21 = CowData<unsigned_int>::_realloc(this_00, lVar30);
               if (iVar21 == 0) goto LAB_00100bb2;
            }
            uVar5 = local_64 * 3;
         } else {
            uVar20 = *(ulong*)( lVar30 + -8 );
            if (uVar10 != uVar20) {
               if (uVar10 != 0) {
                  CowData<unsigned_int>::_copy_on_write(this_00);
                  uVar12 = uVar10 * 4 - 1;
                  uVar12 = uVar12 >> 1 | uVar12;
                  uVar12 = uVar12 >> 2 | uVar12;
                  uVar12 = uVar12 >> 4 | uVar12;
                  uVar12 = uVar12 >> 8 | uVar12;
                  uVar12 = uVar12 >> 0x10 | uVar12;
                  uVar12 = uVar12 >> 0x20 | uVar12;
                  lVar30 = uVar12 + 1;
                  if (uVar20 * 4 == 0) goto LAB_00100e41;
                  uVar13 = uVar20 * 4 - 1;
                  uVar13 = uVar13 | uVar13 >> 1;
                  uVar13 = uVar13 | uVar13 >> 2;
                  uVar13 = uVar13 | uVar13 >> 4;
                  uVar13 = uVar13 | uVar13 >> 8;
                  uVar13 = uVar13 | uVar13 >> 0x10;
                  uVar13 = uVar13 | uVar13 >> 0x20;
                  if ((long)uVar20 < (long)uVar10) {
                     if (uVar13 != uVar12) goto LAB_00100e91;
                  } else if (uVar13 != uVar12) goto LAB_00100ddf;
                  LAB_00100bb2:puVar14 = *(undefined8**)( lVar31 + 8 );
                  if (puVar14 == (undefined8*)0x0) {
                     _DAT_00000000 = 0;
                     /* WARNING: Does not return */
                     pcVar2 = (code*)invalidInstructionException();
                     ( *pcVar2 )();
                  }
                  goto LAB_00100bbf;
               }
               LOCK();
               plVar1 = (long*)( lVar30 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar30 = *(long*)( lVar31 + 8 );
                  *(undefined8*)( lVar31 + 8 ) = 0;
                  Memory::free_static((void*)( lVar30 + -0x10 ), false);
                  uVar5 = local_64 * 3;
               } else {
                  *(undefined8*)( lVar31 + 8 ) = 0;
                  uVar5 = local_64 * 3;
               }
            }
         }
         LAB_00100bcd:__src = local_70;
         CowData<unsigned_int>::_copy_on_write(this_00);
         memcpy(*(void**)( lVar31 + 8 ), __src, (ulong)uVar5 * 4);
      }
      uVar24 = uVar24 + 1;
   } while ( uVar8 != uVar24 );
   LAB_00100c08:( **(code**)( *plVar7 + 0x28 ) )(plVar7);
   ( **(code**)( *plVar7 + 0x30 ) )(plVar7);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* CowData<unsigned int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector3>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<Vector<Vector3> >::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector<Vector3>>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<Vector<unsigned int> >::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector<unsigned_int>>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* convex_decompose(float const*, int, unsigned int const*, int,
   Ref<MeshConvexDecompositionSettings> const&, Vector<Vector<unsigned int> >*) [clone .cold] */void convex_decompose(float *param_1, int param_2, uint *param_3, int param_4, Ref *param_5, Vector *param_6) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<Vector3>::_realloc(long) */undefined8 CowData<Vector3>::_realloc(CowData<Vector3> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }
   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}/* CowData<Vector<Vector3> >::_unref() */void CowData<Vector<Vector3>>::_unref(CowData<Vector<Vector3>> *this) {
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
            } while ( lVar3 != lVar7 );
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
}/* CowData<Vector<Vector3> >::_realloc(long) */undefined8 CowData<Vector<Vector3>>::_realloc(CowData<Vector<Vector3>> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }
   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}/* CowData<Vector<unsigned int> >::_unref() */void CowData<Vector<unsigned_int>>::_unref(CowData<Vector<unsigned_int>> *this) {
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
            } while ( lVar3 != lVar7 );
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
}/* CowData<Vector<unsigned int> >::_realloc(long) */undefined8 CowData<Vector<unsigned_int>>::_realloc(CowData<Vector<unsigned_int>> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }
   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}/* CowData<unsigned int>::_realloc(long) */undefined8 CowData<unsigned_int>::_realloc(CowData<unsigned_int> *this, long param_1) {
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

/* CowData<CSGBrush::Face>::_copy_on_write() [clone .isra.0] */void CowData<CSGBrush::Face>::_copy_on_write(CowData<CSGBrush::Face> *this) {
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
   __n = lVar2 * 0x5c;
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
/* CSGBrush::copy_from(CSGBrush const&, Transform3D const&) */void CSGBrush::copy_from(CSGBrush *this, CSGBrush *param_1, Transform3D *param_2) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   code *pcVar12;
   long lVar13;
   long *plVar14;
   long lVar15;
   long lVar16;
   long lVar17;
   undefined8 *puVar18;
   long lVar19;
   bool bVar20;
   float fVar21;
   float fVar22;
   lVar13 = *(long*)( param_1 + 8 );
   lVar19 = *(long*)( this + 8 );
   if (lVar19 != lVar13) {
      if (lVar19 != 0) {
         LOCK();
         plVar14 = (long*)( lVar19 + -0x10 );
         *plVar14 = *plVar14 + -1;
         UNLOCK();
         if (*plVar14 == 0) {
            lVar13 = *(long*)( this + 8 );
            *(undefined8*)( this + 8 ) = 0;
            Memory::free_static((void*)( lVar13 + -0x10 ), false);
            lVar13 = *(long*)( param_1 + 8 );
         }
 else {
            *(undefined8*)( this + 8 ) = 0;
            lVar13 = *(long*)( param_1 + 8 );
         }

      }

      if (lVar13 != 0) {
         plVar14 = (long*)( lVar13 + -0x10 );
         do {
            lVar13 = *plVar14;
            if (lVar13 == 0) goto LAB_00100198;
            LOCK();
            lVar19 = *plVar14;
            bVar20 = lVar13 == lVar19;
            if (bVar20) {
               *plVar14 = lVar13 + 1;
               lVar19 = lVar13;
            }

            UNLOCK();
         }
 while ( !bVar20 );
         if (lVar19 != -1) {
            *(undefined8*)( this + 8 ) = *(undefined8*)( param_1 + 8 );
         }

      }

   }

   LAB_00100198:if (*(long*)( this + 0x18 ) != *(long*)( param_1 + 0x18 )) {
      CowData<Ref<Material>>::_unref((CowData<Ref<Material>>*)( this + 0x18 ));
      if (*(long*)( param_1 + 0x18 ) != 0) {
         plVar14 = (long*)( *(long*)( param_1 + 0x18 ) + -0x10 );
         do {
            lVar13 = *plVar14;
            if (lVar13 == 0) goto LAB_001001d9;
            LOCK();
            lVar19 = *plVar14;
            bVar20 = lVar13 == lVar19;
            if (bVar20) {
               *plVar14 = lVar13 + 1;
               lVar19 = lVar13;
            }

            UNLOCK();
         }
 while ( !bVar20 );
         if (lVar19 != -1) {
            *(undefined8*)( this + 0x18 ) = *(undefined8*)( param_1 + 0x18 );
         }

      }

   }

   LAB_001001d9:lVar13 = *(long*)( this + 8 );
   lVar19 = 0;
   do {
      if (( lVar13 == 0 ) || ( *(long*)( lVar13 + -8 ) <= lVar19 )) {
         _regen_face_aabbs(this);
         return;
      }

      lVar15 = 0;
      do {
         lVar16 = *(long*)( param_1 + 8 );
         if (lVar16 == 0) {
            lVar17 = 0;
            LAB_0010033b:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar19, lVar17, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar12 = (code*)invalidInstructionException();
            ( *pcVar12 )();
         }

         lVar17 = *(long*)( lVar16 + -8 );
         if (lVar17 <= lVar19) goto LAB_0010033b;
         lVar16 = lVar16 + lVar19 * 0x5c;
         fVar1 = *(float*)( param_2 + 0x18 );
         fVar2 = *(float*)( param_2 + 0x1c );
         uVar8 = *(undefined8*)( lVar16 + (long)(int)lVar15 * 0xc );
         uVar9 = *(undefined8*)( param_2 + 8 );
         lVar17 = lVar15 * 0xc;
         uVar10 = *(undefined8*)param_2;
         fVar3 = *(float*)( param_2 + 0x10 );
         fVar21 = (float)uVar8;
         fVar22 = (float)( (ulong)uVar8 >> 0x20 );
         fVar4 = *(float*)( lVar16 + 8 + lVar17 );
         fVar5 = *(float*)( param_2 + 0x20 );
         fVar6 = *(float*)( param_2 + 0x2c );
         fVar7 = *(float*)( param_2 + 4 );
         uVar8 = *(undefined8*)( param_2 + 0x10 );
         uVar11 = *(undefined8*)( param_2 + 0x24 );
         if (lVar13 == 0) {
            lVar13 = 0;
            LAB_00100383:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar19, lVar13, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar12 = (code*)invalidInstructionException();
            ( *pcVar12 )();
         }

         lVar13 = *(long*)( lVar13 + -8 );
         if (lVar13 <= lVar19) goto LAB_00100383;
         lVar15 = lVar15 + 1;
         CowData<CSGBrush::Face>::_copy_on_write((CowData<CSGBrush::Face>*)( this + 8 ));
         lVar13 = *(long*)( this + 8 );
         puVar18 = (undefined8*)( lVar17 + lVar19 * 0x5c + lVar13 );
         *puVar18 = CONCAT44((float)( (ulong)uVar9 >> 0x20 ) * fVar21 + fVar22 * fVar3 + (float)( (ulong)uVar8 >> 0x20 ) * fVar4 + (float)( (ulong)uVar11 >> 0x20 ), (float)uVar10 * fVar21 + fVar22 * fVar7 + (float)uVar9 * fVar4 + (float)uVar11);
         *(float*)( puVar18 + 1 ) = fVar5 * fVar4 + fVar1 * fVar21 + fVar2 * fVar22 + fVar6;
      }
 while ( lVar15 != 3 );
      lVar19 = lVar19 + 1;
   }
 while ( true );
}
/* CowData<Ref<Material> >::_copy_on_write() [clone .isra.0] */void CowData<Ref<Material>>::_copy_on_write(CowData<Ref<Material>> *this) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   char cVar4;
   undefined8 *puVar5;
   long *plVar6;
   ulong uVar7;
   long lVar8;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar1 * 8 != 0) {
      uVar7 = lVar1 * 8 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }

   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   lVar8 = 0;
   *puVar5 = 1;
   puVar5[1] = lVar1;
   plVar6 = puVar5 + 2;
   if (lVar1 != 0) {
      do {
         lVar2 = *(long*)this;
         *plVar6 = 0;
         lVar2 = *(long*)( lVar2 + lVar8 * 8 );
         if (lVar2 != 0) {
            *plVar6 = lVar2;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
               *plVar6 = 0;
            }

         }

         lVar8 = lVar8 + 1;
         plVar6 = plVar6 + 1;
      }
 while ( lVar1 != lVar8 );
   }

   _unref(this);
   *(undefined8**)this = puVar5 + 2;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CSGBrush::build_from_faces(Vector<Vector3> const&, Vector<Vector2> const&, Vector<bool> const&,
   Vector<Ref<Material> > const&, Vector<bool> const&) */void CSGBrush::build_from_faces(CSGBrush *this, Vector *param_1, Vector *param_2, Vector *param_3, Vector *param_4, Vector *param_5) {
   CowData<CSGBrush::Face> *this_00;
   long *plVar1;
   CowData<Ref<Material>> *this_01;
   int *piVar2;
   long lVar3;
   long lVar4;
   Object *pOVar5;
   Object *pOVar6;
   void *pvVar7;
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   code *pcVar16;
   undefined8 uVar17;
   undefined1 uVar18;
   char cVar19;
   int iVar20;
   uint uVar21;
   long lVar22;
   ulong uVar23;
   ulong uVar24;
   ulong uVar25;
   undefined8 *puVar26;
   uint *puVar27;
   long lVar28;
   char *pcVar29;
   uint uVar30;
   uint uVar31;
   undefined8 *puVar32;
   undefined8 uVar33;
   undefined8 *puVar34;
   int *piVar35;
   ulong uVar36;
   long lVar37;
   long lVar38;
   uint uVar39;
   long lVar40;
   undefined8 *puVar41;
   long lVar42;
   undefined8 *puVar43;
   long in_FS_OFFSET;
   int local_f0;
   int local_e0;
   int local_dc;
   int local_d8;
   int local_d4;
   uint local_a8;
   Object *local_80;
   HashMap<Ref<Material>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Material>>,DefaultTypedAllocator<HashMapElement<Ref<Material>,int>>> local_78[8];
   undefined1 local_70[16];
   undefined1 local_60[16];
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (CowData<CSGBrush::Face>*)( this + 8 );
   lVar42 = *(long*)( this + 8 );
   if (( lVar42 != 0 ) && ( *(long*)( lVar42 + -8 ) != 0 )) {
      LOCK();
      plVar1 = (long*)( lVar42 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar42 = *(long*)( this + 8 );
         *(undefined8*)( this + 8 ) = 0;
         Memory::free_static((void*)( lVar42 + -0x10 ), false);
      }
 else {
         *(undefined8*)( this + 8 ) = 0;
      }

   }

   puVar41 = *(undefined8**)( param_1 + 8 );
   if (puVar41 == (undefined8*)0x0) {
      local_f0 = 0;
      lVar37 = 0;
      lVar42 = 0;
   }
 else {
      lVar42 = puVar41[-1];
      local_f0 = (int)lVar42;
      if (0x55555554 < local_f0 * -0x55555555 + 0x2aaaaaaaU) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _err_print_error("build_from_faces", "modules/csg/csg.cpp", 0x28, "Condition \"(vc % 3) != 0\" is true.", 0, 0);
            return;
         }

         goto LAB_00101312;
      }

      lVar37 = lVar42 / 3;
   }

   puVar43 = *(undefined8**)( param_2 + 8 );
   if (puVar43 == (undefined8*)0x0) {
      local_dc = 0;
   }
 else {
      local_dc = *(int*)( puVar43 + -1 );
   }

   lVar28 = *(long*)( param_3 + 8 );
   if (lVar28 == 0) {
      local_d4 = 0;
   }
 else {
      local_d4 = *(int*)( lVar28 + -8 );
   }

   lVar3 = *(long*)( param_4 + 8 );
   if (lVar3 == 0) {
      local_d8 = 0;
   }
 else {
      local_d8 = *(int*)( lVar3 + -8 );
   }

   lVar4 = *(long*)( param_5 + 8 );
   if (lVar4 == 0) {
      local_e0 = 0;
   }
 else {
      local_e0 = *(int*)( lVar4 + -8 );
   }

   local_50 = 2;
   local_70 = (undefined1[16])0x0;
   local_60 = (undefined1[16])0x0;
   if (lVar42 < -2) {
      uVar33 = 0x157;
      pcVar29 = "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER";
      LAB_00101157:_err_print_error("resize", "./core/templates/cowdata.h", uVar33, pcVar29, 0, 0);
      puVar32 = *(undefined8**)( this + 8 );
      local_a8 = 0;
      LAB_0010117b:if (puVar32 != (undefined8*)0x0) {
         LAB_00100780:lVar42 = 0;
         iVar20 = local_f0 / 3;
         do {
            if ((long)puVar32[-1] <= lVar42) break;
            CowData<CSGBrush::Face>::_copy_on_write(this_00);
            puVar32 = *(undefined8**)( this + 8 );
            puVar34 = (undefined8*)( lVar42 * 0x5c + (long)puVar32 );
            *puVar34 = *puVar41;
            *(undefined4*)( puVar34 + 1 ) = *(undefined4*)( puVar41 + 1 );
            *(undefined8*)( (long)puVar34 + 0xc ) = *(undefined8*)( (long)puVar41 + 0xc );
            *(undefined4*)( (long)puVar34 + 0x14 ) = *(undefined4*)( (long)puVar41 + 0x14 );
            puVar34[3] = puVar41[3];
            *(undefined4*)( puVar34 + 4 ) = *(undefined4*)( puVar41 + 4 );
            if (local_f0 == local_dc) {
               *(undefined8*)( (long)puVar34 + 0x24 ) = *puVar43;
               *(undefined8*)( (long)puVar34 + 0x2c ) = puVar43[1];
               *(undefined8*)( (long)puVar34 + 0x34 ) = puVar43[2];
            }

            uVar18 = 0;
            if (iVar20 == local_d4) {
               uVar18 = *(undefined1*)( lVar28 + lVar42 );
            }

            *(undefined1*)( (long)puVar34 + 0x54 ) = uVar18;
            uVar18 = 0;
            if (iVar20 == local_e0) {
               uVar18 = *(undefined1*)( lVar4 + lVar42 );
            }

            *(undefined1*)( (long)puVar34 + 0x55 ) = uVar18;
            if (iVar20 == local_d8) {
               pOVar5 = *(Object**)( lVar3 + lVar42 * 8 );
               if (pOVar5 != (Object*)0x0) {
                  local_80 = pOVar5;
                  cVar19 = RefCounted::reference();
                  if (cVar19 != '\0') {
                     if (( local_70._0_8_ != 0 ) && ( local_a8 != 0 )) {
                        uVar36 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ));
                        lVar37 = *(long*)( hash_table_size_primes_inv + ( local_50 & 0xffffffff ) * 8 );
                        uVar23 = (long)pOVar5 * 0x3ffff - 1;
                        uVar23 = ( uVar23 ^ uVar23 >> 0x1f ) * 0x15;
                        uVar23 = ( uVar23 ^ uVar23 >> 0xb ) * 0x41;
                        uVar30 = ( uint )(uVar23 >> 0x16) ^ (uint)uVar23;
                        uVar21 = 1;
                        if (uVar30 != 0) {
                           uVar21 = uVar30;
                        }

                        auVar8._8_8_ = 0;
                        auVar8._0_8_ = (ulong)uVar21 * lVar37;
                        auVar12._8_8_ = 0;
                        auVar12._0_8_ = uVar36;
                        lVar22 = SUB168(auVar8 * auVar12, 8);
                        uVar30 = *(uint*)( local_70._8_8_ + lVar22 * 4 );
                        uVar31 = SUB164(auVar8 * auVar12, 8);
                        if (uVar30 != 0) {
                           uVar39 = 0;
                           while (( uVar30 != uVar21 || ( pOVar5 != *(Object**)( *(long*)( local_70._0_8_ + lVar22 * 8 ) + 0x10 ) ) )) {
                              uVar39 = uVar39 + 1;
                              auVar9._8_8_ = 0;
                              auVar9._0_8_ = ( ulong )(uVar31 + 1) * lVar37;
                              auVar13._8_8_ = 0;
                              auVar13._0_8_ = uVar36;
                              lVar22 = SUB168(auVar9 * auVar13, 8);
                              uVar30 = *(uint*)( local_70._8_8_ + lVar22 * 4 );
                              uVar31 = SUB164(auVar9 * auVar13, 8);
                              if (( uVar30 == 0 ) || ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar30 * lVar37,auVar14._8_8_ = 0,auVar14._0_8_ = uVar36,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ) + uVar31 ) - SUB164(auVar10 * auVar14, 8)) * lVar37,auVar15._8_8_ = 0,auVar15._0_8_ = uVar36,SUB164(auVar11 * auVar15, 8) < uVar39) goto LAB_00100e9c;
                           }
;
                           lVar37 = *(long*)( local_70._0_8_ + (ulong)uVar31 * 8 );
                           if (lVar37 != 0) {
                              *(undefined4*)( puVar34 + 0xb ) = *(undefined4*)( lVar37 + 0x18 );
                              cVar19 = RefCounted::unreference();
                              goto joined_r0x00100ec7;
                           }

                        }

                     }

                     LAB_00100e9c:*(uint*)( puVar34 + 0xb ) = local_a8;
                     puVar27 = (uint*)HashMap<Ref<Material>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Material>>,DefaultTypedAllocator<HashMapElement<Ref<Material>,int>>>::operator [](local_78, (Ref*)&local_80);
                     *puVar27 = local_a8;
                     cVar19 = RefCounted::unreference();
                     joined_r0x00100ec7:if (cVar19 == '\0') {
                        local_50._4_4_ = ( uint )(local_50 >> 0x20);
                        local_a8 = local_50._4_4_;
                        puVar32 = *(undefined8**)( this + 8 );
                     }
 else {
                        cVar19 = predelete_handler(pOVar5);
                        local_a8 = local_50._4_4_;
                        if (cVar19 != '\0') {
                           ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                           Memory::free_static(pOVar5, false);
                        }

                        puVar32 = *(undefined8**)( this + 8 );
                     }

                     goto LAB_001007b0;
                  }

                  puVar32 = *(undefined8**)( this + 8 );
               }

               *(undefined4*)( puVar34 + 0xb ) = 0xffffffff;
            }

            LAB_001007b0:lVar42 = lVar42 + 1;
            puVar41 = (undefined8*)( (long)puVar41 + 0x24 );
            puVar43 = puVar43 + 3;
         }
 while ( puVar32 != (undefined8*)0x0 );
      }

      LAB_00100900:uVar23 = (ulong)local_a8;
      this_01 = (CowData<Ref<Material>>*)( this + 0x18 );
      if (*(long*)( this + 0x18 ) == 0) {
         if (uVar23 != 0) {
            uVar36 = 0;
            CowData<Ref<Material>>::_copy_on_write(this_01);
            LAB_00100f50:uVar24 = uVar23 * 8 - 1;
            uVar24 = uVar24 | uVar24 >> 1;
            uVar24 = uVar24 | uVar24 >> 2;
            uVar24 = uVar24 | uVar24 >> 4;
            uVar24 = uVar24 | uVar24 >> 8;
            uVar24 = uVar24 >> 0x10 | uVar24;
            lVar42 = ( uVar24 >> 0x20 | uVar24 ) + 1;
            if ((long)uVar23 <= (long)uVar36) {
               lVar37 = 0;
               goto LAB_00100fa3;
            }

            LAB_00101070:if (uVar36 == 0) {
               puVar41 = (undefined8*)Memory::alloc_static(lVar42 + 0x10, false);
               if (puVar41 == (undefined8*)0x0) {
                  _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               }
 else {
                  puVar43 = puVar41 + 2;
                  *puVar41 = 1;
                  puVar41[1] = 0;
                  *(undefined8**)( this + 0x18 ) = puVar43;
                  lVar42 = 0;
                  LAB_001009e9:if (lVar42 < (long)uVar23) {
                     memset(puVar43 + lVar42, 0, ( uVar23 - lVar42 ) * 8);
                  }

                  puVar43[-1] = uVar23;
               }

            }
 else {
               iVar20 = CowData<Ref<Material>>::_realloc(this_01, lVar42);
               if (iVar20 == 0) {
                  LAB_001009d8:puVar43 = *(undefined8**)( this + 0x18 );
                  if (puVar43 == (undefined8*)0x0) goto LAB_001013aa;
                  lVar42 = puVar43[-1];
                  goto LAB_001009e9;
               }

            }

         }

      }
 else {
         uVar36 = *(ulong*)( *(long*)( this + 0x18 ) + -8 );
         if (uVar23 != uVar36) {
            if (uVar23 == 0) goto LAB_00100f30;
            CowData<Ref<Material>>::_copy_on_write(this_01);
            uVar24 = uVar23 * 8 - 1;
            uVar24 = uVar24 >> 1 | uVar24;
            uVar24 = uVar24 >> 2 | uVar24;
            uVar24 = uVar24 >> 4 | uVar24;
            uVar24 = uVar24 >> 8 | uVar24;
            uVar24 = uVar24 >> 0x10 | uVar24;
            uVar24 = uVar24 >> 0x20 | uVar24;
            lVar42 = uVar24 + 1;
            if (uVar36 * 8 == 0) goto LAB_00100f50;
            uVar25 = uVar36 * 8 - 1;
            uVar25 = uVar25 | uVar25 >> 1;
            uVar25 = uVar25 | uVar25 >> 2;
            uVar25 = uVar25 | uVar25 >> 4;
            uVar25 = uVar25 | uVar25 >> 8;
            uVar25 = uVar25 | uVar25 >> 0x10;
            uVar25 = uVar25 | uVar25 >> 0x20;
            lVar37 = uVar25 + 1;
            if ((long)uVar36 < (long)uVar23) {
               if (uVar24 != uVar25) goto LAB_00101070;
               goto LAB_001009d8;
            }

            LAB_00100fa3:lVar28 = *(long*)( this + 0x18 );
            uVar36 = uVar23;
            if (lVar28 == 0) {
               LAB_001013aa:/* WARNING: Does not return */pcVar16 = (code*)invalidInstructionException();
               ( *pcVar16 )();
            }

            for (; uVar36 < *(ulong*)( lVar28 + -8 ); uVar36 = uVar36 + 1) {
               while (plVar1 = (long*)( lVar28 + uVar36 * 8 ),*plVar1 != 0) {
                  cVar19 = RefCounted::unreference();
                  if (cVar19 != '\0') {
                     pOVar5 = (Object*)*plVar1;
                     cVar19 = predelete_handler(pOVar5);
                     if (cVar19 != '\0') {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }

                  }

                  lVar28 = *(long*)( this + 0x18 );
                  uVar36 = uVar36 + 1;
                  if (lVar28 == 0) goto LAB_001013aa;
                  if (*(ulong*)( lVar28 + -8 ) <= uVar36) goto LAB_00100feb;
               }
;
            }

            LAB_00100feb:if (lVar42 != lVar37) {
               iVar20 = CowData<Ref<Material>>::_realloc(this_01, lVar42);
               if (iVar20 != 0) goto LAB_00100a08;
               lVar28 = *(long*)( this + 0x18 );
               if (lVar28 == 0) {
                  CSGBrush_build_from_faces:_DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar16 = (code*)invalidInstructionException();
                  ( *pcVar16 )();
               }

            }

            *(ulong*)( lVar28 + -8 ) = uVar23;
         }

      }

   }
 else {
      puVar32 = *(undefined8**)( this + 8 );
      if (puVar32 != (undefined8*)0x0) {
         lVar42 = puVar32[-1];
         if (lVar42 == lVar37) {
            local_a8 = 0;
            goto LAB_00100780;
         }

         if (lVar37 != 0) {
            CowData<CSGBrush::Face>::_copy_on_write(this_00);
            lVar22 = lVar42 * 0x5c;
            if (lVar22 != 0) {
               uVar23 = lVar22 - 1U | lVar22 - 1U >> 1;
               uVar23 = uVar23 | uVar23 >> 2;
               uVar23 = uVar23 | uVar23 >> 4;
               uVar23 = uVar23 | uVar23 >> 8;
               uVar23 = uVar23 | uVar23 >> 0x10;
               lVar22 = ( uVar23 | uVar23 >> 0x20 ) + 1;
            }

            goto LAB_001006d9;
         }

         LOCK();
         plVar1 = puVar32 + -2;
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar42 = *(long*)( this + 8 );
            *(undefined8*)( this + 8 ) = 0;
            Memory::free_static((void*)( lVar42 + -0x10 ), false);
            local_a8 = local_50._4_4_;
            puVar32 = *(undefined8**)( this + 8 );
            goto LAB_0010117b;
         }

         *(undefined8*)( this + 8 ) = 0;
         local_50._4_4_ = 0;
         local_a8 = local_50._4_4_;
         goto LAB_00100900;
      }

      if (lVar37 != 0) {
         lVar42 = 0;
         CowData<CSGBrush::Face>::_copy_on_write(this_00);
         lVar22 = 0;
         LAB_001006d9:lVar40 = lVar37 * 0x5c;
         if (lVar40 != 0) {
            uVar23 = lVar40 - 1U | lVar40 - 1U >> 1;
            uVar23 = uVar23 | uVar23 >> 2;
            uVar23 = uVar23 | uVar23 >> 4;
            uVar23 = uVar23 | uVar23 >> 8;
            uVar23 = uVar23 | uVar23 >> 0x10;
            uVar23 = uVar23 | uVar23 >> 0x20;
            lVar38 = uVar23 + 1;
            if (lVar38 != 0) {
               if (lVar37 <= lVar42) {
                  if (( lVar38 == lVar22 ) || ( iVar20 = iVar20 == 0 )) {
                     puVar32 = *(undefined8**)( this + 8 );
                     if (puVar32 == (undefined8*)0x0) goto CSGBrush_build_from_faces;
                     puVar32[-1] = lVar37;
                     local_a8 = 0;
                     goto LAB_00100780;
                  }

                  LAB_00101232:local_a8 = 0;
                  puVar32 = *(undefined8**)( this + 8 );
                  goto LAB_0010117b;
               }

               if (lVar38 == lVar22) {
                  LAB_001010c0:puVar32 = *(undefined8**)( this + 8 );
                  if (puVar32 == (undefined8*)0x0) goto LAB_001013aa;
                  lVar42 = puVar32[-1];
                  local_a8 = 0;
                  if (lVar42 < lVar37) goto LAB_00100bc2;
               }
 else {
                  if (lVar42 != 0) {
                     iVar20 = CowData<CSGBrush::Face>::_realloc(this_00, lVar38);
                     if (iVar20 != 0) goto LAB_00101232;
                     goto LAB_001010c0;
                  }

                  puVar34 = (undefined8*)Memory::alloc_static(uVar23 + 0x11, false);
                  if (puVar34 == (undefined8*)0x0) {
                     uVar33 = 0x171;
                     pcVar29 = "Parameter \"mem_new\" is null.";
                     goto LAB_00101157;
                  }

                  puVar32 = puVar34 + 2;
                  *puVar34 = 1;
                  puVar34[1] = 0;
                  *(undefined8**)( this + 8 ) = puVar32;
                  local_a8 = local_50._4_4_;
                  lVar42 = 0;
                  LAB_00100bc2:puVar34 = (undefined8*)( lVar42 * 0x5c + (long)puVar32 );
                  do {
                     *puVar34 = 0;
                     puVar26 = (undefined8*)( (long)puVar34 + 0x5c );
                     *(undefined4*)( puVar34 + 1 ) = 0;
                     *(undefined8*)( (long)puVar34 + 0xc ) = 0;
                     *(undefined4*)( (long)puVar34 + 0x14 ) = 0;
                     puVar34[3] = 0;
                     *(undefined4*)( puVar34 + 4 ) = 0;
                     for (int i = 0; i < 4; i++) {
                        *(undefined8*)( (long)puVar34 + ( 8*i + 36 ) ) = 0;
                     }

                     *(undefined4*)( (long)puVar34 + 0x44 ) = 0;
                     puVar34[9] = 0;
                     *(undefined4*)( puVar34 + 10 ) = 0;
                     *(undefined2*)( (long)puVar34 + 0x54 ) = 0;
                     *(undefined4*)( puVar34 + 0xb ) = 0;
                     puVar34 = puVar26;
                  }
 while ( (undefined8*)( lVar40 + (long)puVar32 ) != puVar26 );
               }

               puVar32[-1] = lVar37;
               goto LAB_00100780;
            }

         }

         uVar33 = 0x16a;
         pcVar29 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
         goto LAB_00101157;
      }

      if (( *(long*)( this + 0x18 ) != 0 ) && ( *(long*)( *(long*)( this + 0x18 ) + -8 ) != 0 )) {
         LAB_00100f30:CowData<Ref<Material>>::_unref((CowData<Ref<Material>>*)( this + 0x18 ));
      }

   }

   LAB_00100a08:for (puVar41 = (undefined8*)local_60._0_8_; puVar41 != (undefined8*)0x0; puVar41 = (undefined8*)*puVar41) {
      lVar37 = (long)*(int*)( puVar41 + 3 );
      lVar42 = *(long*)( this + 0x18 );
      if (lVar37 < 0) {
         if (lVar42 != 0) {
            LAB_00100e05:lVar42 = *(long*)( lVar42 + -8 );
            goto LAB_00100e09;
         }

         LAB_00100e80:lVar42 = 0;
         LAB_00100e09:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar37, lVar42, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar16 = (code*)invalidInstructionException();
         ( *pcVar16 )();
      }

      if (lVar42 == 0) goto LAB_00100e80;
      if (*(long*)( lVar42 + -8 ) <= lVar37) goto LAB_00100e05;
      CowData<Ref<Material>>::_copy_on_write((CowData<Ref<Material>>*)( this + 0x18 ));
      pOVar5 = (Object*)puVar41[2];
      plVar1 = (long*)( *(long*)( this + 0x18 ) + lVar37 * 8 );
      pOVar6 = (Object*)*plVar1;
      if (pOVar5 != pOVar6) {
         *plVar1 = (long)pOVar5;
         if (( pOVar5 != (Object*)0x0 ) && ( cVar19 = cVar19 == '\0' )) {
            *plVar1 = 0;
         }

         if (( ( pOVar6 != (Object*)0x0 ) && ( cVar19 = RefCounted::unreference() ),cVar19 != '\0' )) &&( cVar19 = cVar19 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
         Memory::free_static(pOVar6, false);
      }

   }

}
_regen_face_aabbs(this);uVar33 = local_70._0_8_;if ((undefined8*)local_70._0_8_ == (undefined8*)0x0) {
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

}
 else {
   uVar17 = local_70._8_8_;
   if (( local_50._4_4_ != 0 ) && ( *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ) != 0 )) {
      piVar2 = (int*)( local_70._8_8_ + ( ulong ) * (uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ) * 4 );
      piVar35 = (int*)local_70._8_8_;
      puVar41 = (undefined8*)local_70._0_8_;
      do {
         if (*piVar35 != 0) {
            pvVar7 = (void*)*puVar41;
            *piVar35 = 0;
            if (( *(long*)( (long)pvVar7 + 0x10 ) != 0 ) && ( cVar19 = cVar19 != '\0' )) {
               pOVar5 = *(Object**)( (long)pvVar7 + 0x10 );
               cVar19 = predelete_handler(pOVar5);
               if (cVar19 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

            Memory::free_static(pvVar7, false);
            *puVar41 = 0;
         }

         piVar35 = piVar35 + 1;
         puVar41 = puVar41 + 1;
      }
 while ( piVar35 != piVar2 );
   }

   Memory::free_static((void*)uVar33, false);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Memory::free_static((void*)uVar17, false);
      return;
   }

}
LAB_00101312:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* CowData<CSGBrush::Face>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<CSGBrush::Face>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Ref<Material> >::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Ref<Material>>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CSGBrush::build_from_faces(Vector<Vector3> const&, Vector<Vector2> const&, Vector<bool> const&,
   Vector<Ref<Material> > const&, Vector<bool> const&) [clone .cold] */void CSGBrush::build_from_faces(Vector *param_1, Vector *param_2, Vector *param_3, Vector *param_4, Vector *param_5) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CSGBrush::_regen_face_aabbs() */void CSGBrush::_regen_face_aabbs(CSGBrush *this) {
   CowData<CSGBrush::Face> *this_00;
   undefined8 *puVar1;
   float fVar2;
   long lVar3;
   code *pcVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   long in_FS_OFFSET;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar6 = *(long*)( this + 8 );
   if (lVar6 != 0) {
      lVar9 = 0;
      this_00 = (CowData<CSGBrush::Face>*)( this + 8 );
      lVar7 = 0;
      do {
         if (*(long*)( lVar6 + -8 ) <= lVar7) break;
         CowData<CSGBrush::Face>::_copy_on_write(this_00);
         lVar6 = *(long*)( this + 8 );
         puVar1 = (undefined8*)( lVar6 + lVar9 );
         *(undefined8*)( (long)puVar1 + 0x4c ) = 0;
         *(undefined8*)( (long)puVar1 + 0x3c ) = 0;
         *(undefined8*)( (long)puVar1 + 0x44 ) = 0;
         if (lVar6 == 0) {
            LAB_00101768:lVar8 = 0;
            LAB_0010176b:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar8, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar8 = *(long*)( lVar6 + -8 );
         if (lVar8 <= lVar7) goto LAB_0010176b;
         CowData<CSGBrush::Face>::_copy_on_write(this_00);
         lVar6 = *(long*)( this + 8 );
         *(undefined8*)( lVar6 + 0x3c + lVar9 ) = *puVar1;
         *(undefined4*)( lVar6 + 0x44 + lVar9 ) = *(undefined4*)( puVar1 + 1 );
         if (lVar6 == 0) {
            LAB_001017f0:lVar6 = 0;
            LAB_001017f3:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar7, lVar6, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar6 = *(long*)( lVar6 + -8 );
         if (lVar6 <= lVar7) goto LAB_001017f3;
         CowData<CSGBrush::Face>::_copy_on_write(this_00);
         lVar5 = *(long*)( this + 8 );
         lVar6 = lVar5 + lVar9;
         if (lVar5 == 0) goto LAB_00101768;
         lVar8 = *(long*)( lVar5 + -8 );
         if (lVar8 <= lVar7) goto LAB_0010176b;
         fVar10 = *(float*)( lVar6 + 0x48 );
         if (( ( fVar10 < 0.0 ) || ( fVar14 = fVar14 < 0.0 ) ) || ( fVar17 = fVar17 < 0.0 )) {
            _err_print_error("expand_to", "./core/math/aabb.h", 0x158, "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size.", 0, 0);
            lVar5 = *(long*)( this + 8 );
            fVar17 = *(float*)( lVar6 + 0x50 );
            fVar14 = *(float*)( lVar6 + 0x4c );
            fVar10 = *(float*)( lVar6 + 0x48 );
         }

         fVar2 = *(float*)( lVar6 + 0x44 );
         fVar12 = *(float*)( lVar6 + 0x3c );
         fVar15 = *(float*)( lVar6 + 0x10 );
         fVar11 = *(float*)( lVar6 + 0x40 );
         fVar13 = *(float*)( lVar6 + 0xc );
         fVar16 = fVar13;
         if (fVar13 <= fVar10 + fVar12) {
            fVar16 = fVar10 + fVar12;
         }

         if (fVar12 <= fVar13) {
            fVar13 = fVar12;
         }

         fVar10 = fVar15;
         if (fVar15 <= fVar14 + fVar11) {
            fVar10 = fVar14 + fVar11;
         }

         if (fVar11 <= fVar15) {
            fVar15 = fVar11;
         }

         fVar14 = *(float*)( lVar6 + 0x14 );
         fVar12 = fVar14;
         if (fVar14 <= fVar17 + fVar2) {
            fVar12 = fVar17 + fVar2;
         }

         if (fVar2 <= fVar14) {
            fVar14 = fVar2;
         }

         *(ulong*)( lVar6 + 0x3c ) = CONCAT44(fVar15, fVar13);
         *(ulong*)( lVar6 + 0x44 ) = CONCAT44(fVar16 - fVar13, fVar14);
         *(ulong*)( lVar6 + 0x4c ) = CONCAT44(fVar12 - fVar14, fVar10 - fVar15);
         if (lVar5 == 0) goto LAB_001017f0;
         lVar6 = *(long*)( lVar5 + -8 );
         if (lVar6 <= lVar7) goto LAB_001017f3;
         CowData<CSGBrush::Face>::_copy_on_write(this_00);
         lVar6 = *(long*)( this + 8 );
         lVar5 = lVar6 + lVar9;
         if (lVar6 == 0) goto LAB_00101768;
         lVar8 = *(long*)( lVar6 + -8 );
         if (lVar8 <= lVar7) goto LAB_0010176b;
         fVar10 = *(float*)( lVar5 + 0x48 );
         if (( ( fVar10 < 0.0 ) || ( fVar14 = fVar14 < 0.0 ) ) || ( fVar17 = fVar17 < 0.0 )) {
            _err_print_error("expand_to", "./core/math/aabb.h", 0x158, "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size.", 0, 0);
            fVar17 = *(float*)( lVar5 + 0x50 );
            fVar14 = *(float*)( lVar5 + 0x4c );
            fVar10 = *(float*)( lVar5 + 0x48 );
            lVar6 = *(long*)( this + 8 );
         }

         fVar2 = *(float*)( lVar5 + 0x44 );
         fVar12 = *(float*)( lVar5 + 0x3c );
         fVar15 = *(float*)( lVar5 + 0x40 );
         lVar7 = lVar7 + 1;
         lVar9 = lVar9 + 0x5c;
         fVar11 = *(float*)( lVar5 + 0x18 );
         fVar13 = fVar11;
         if (fVar11 <= fVar10 + fVar12) {
            fVar13 = fVar10 + fVar12;
         }

         if (fVar12 <= fVar11) {
            fVar11 = fVar12;
         }

         fVar10 = *(float*)( lVar5 + 0x1c );
         fVar12 = fVar10;
         if (fVar10 <= fVar14 + fVar15) {
            fVar12 = fVar14 + fVar15;
         }

         if (fVar15 <= fVar10) {
            fVar10 = fVar15;
         }

         fVar14 = *(float*)( lVar5 + 0x20 );
         fVar15 = fVar14;
         if (fVar14 <= fVar17 + fVar2) {
            fVar15 = fVar17 + fVar2;
         }

         if (fVar2 <= fVar14) {
            fVar14 = fVar2;
         }

         *(ulong*)( lVar5 + 0x3c ) = CONCAT44(fVar10, fVar11);
         *(ulong*)( lVar5 + 0x44 ) = CONCAT44(fVar13 - fVar11, fVar14);
         *(ulong*)( lVar5 + 0x4c ) = CONCAT44(fVar15 - fVar14, fVar12 - fVar10);
      }
 while ( lVar6 != 0 );
   }

   if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<Ref<Material>, int, HashMapHasherDefault, HashMapComparatorDefault<Ref<Material> >,
   DefaultTypedAllocator<HashMapElement<Ref<Material>, int> > >::operator[](Ref<Material> const&) */undefined1[16];HashMap<Ref<Material>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Material>>,DefaultTypedAllocator<HashMapElement<Ref<Material>,int>>>::operator [](HashMap<Ref<Material>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Material>>,DefaultTypedAllocator<HashMapElement<Ref<Material>,int>>>
             *this,Ref*param_1)

{
  uint *puVar1;
  long lVar2;
  void *pvVar3;
  void *__s;
  undefined1 auVar4 [16];
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
  undefined1 auVar35[16](*, pauVar36)[16](*, pauVar42)[16](*, pauVar58)[16];
  undefined1 auVar59[16];
  undefined1 auVar60[16](ulong)(local_70 = = (void*)0x0) {
   uVar40 = uVar56 * 4;
   uVar39 = uVar56 * 8;
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   lStack_90 = 0x102013;
   local_70 = (void*)Memory::alloc_static(uVar39, false);
   *(void**)( this + 8 ) = local_70;
   if (uVar48 == 0) {
      iVar44 = *(int*)( this + 0x2c );
      pOVar50 = *(Object**)param_1;
      if (local_70 == (void*)0x0) goto LAB_00101aa3;
   }
 else {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)local_70 + uVar39 ) ) && ( local_70 < (void*)( (long)pvVar3 + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)local_70 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar56 != uVar40 );
         iVar44 = *(int*)( this + 0x2c );
         pOVar50 = *(Object**)param_1;
      }
 else {
         memset(pvVar3, 0, uVar40);
         lStack_90 = 0x10205c;
         memset(local_70, 0, uVar39);
         iVar44 = *(int*)( this + 0x2c );
         pOVar50 = *(Object**)param_1;
      }

   }

   if (iVar44 != 0) {
      uVar40 = ( ulong ) * (uint*)( this + 0x28 );
      lVar53 = *(long*)( this + 0x10 );
      goto LAB_00101eb3;
   }

}
else{iVar44 = *(int*)( this + 0x2c );if (iVar44 != 0) {
   lVar53 = *(long*)( this + 0x10 );
   lVar2 = *(long*)( hash_table_size_primes_inv + uVar40 * 8 );
   uVar39 = (long)pOVar50 * 0x3ffff - 1;
   uVar39 = ( uVar39 ^ uVar39 >> 0x1f ) * 0x15;
   uVar39 = ( uVar39 ^ uVar39 >> 0xb ) * 0x41;
   uVar39 = uVar39 >> 0x16 ^ uVar39;
   uVar55 = uVar39 & 0xffffffff;
   if ((int)uVar39 == 0) {
      uVar55 = 1;
   }

   auVar4._8_8_ = 0;
   auVar4._0_8_ = uVar55 * lVar2;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar56;
   lVar46 = SUB168(auVar4 * auVar20, 8);
   uVar45 = *(uint*)( lVar53 + lVar46 * 4 );
   uVar54 = SUB164(auVar4 * auVar20, 8);
   if (uVar45 != 0) {
      uVar52 = 0;
      lVar47 = lVar46;
      do {
         if (( uVar45 == (uint)uVar55 ) && ( pOVar50 == *(Object**)( *(long*)( (long)local_70 + lVar46 * 8 ) + 0x10 ) )) {
            auVar59._0_8_ = *(long*)( (long)local_70 + (ulong)uVar54 * 8 ) + 0x18;
            auVar59._8_8_ = lVar47;
            return auVar59;
         }

         uVar52 = uVar52 + 1;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = ( ulong )(uVar54 + 1) * lVar2;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar56;
         lVar46 = SUB168(auVar5 * auVar21, 8);
         uVar45 = *(uint*)( lVar53 + lVar46 * 4 );
         uVar54 = SUB164(auVar5 * auVar21, 8);
      }
 while ( ( uVar45 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar45 * lVar2,auVar22._8_8_ = 0,auVar22._0_8_ = uVar56,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar54 + uVar48 ) - SUB164(auVar6 * auVar22, 8)) * lVar2,auVar23._8_8_ = 0,auVar23._0_8_ = uVar56,lVar47 = SUB168(auVar7 * auVar23, 8),uVar52 <= SUB164(auVar7 * auVar23, 8) );
   }

   LAB_00101eb3:uVar55 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar40 * 4 ));
   lVar2 = *(long*)( hash_table_size_primes_inv + uVar40 * 8 );
   uVar39 = (long)pOVar50 * 0x3ffff - 1;
   uVar39 = ( uVar39 ^ uVar39 >> 0x1f ) * 0x15;
   uVar39 = ( uVar39 ^ uVar39 >> 0xb ) * 0x41;
   uVar39 = uVar39 >> 0x16 ^ uVar39;
   uVar57 = uVar39 & 0xffffffff;
   if ((int)uVar39 == 0) {
      uVar57 = 1;
   }

   auVar16._8_8_ = 0;
   auVar16._0_8_ = uVar57 * lVar2;
   auVar32._8_8_ = 0;
   auVar32._0_8_ = uVar55;
   lVar46 = SUB168(auVar16 * auVar32, 8);
   uVar48 = *(uint*)( lVar53 + lVar46 * 4 );
   uVar45 = SUB164(auVar16 * auVar32, 8);
   if (uVar48 != 0) {
      uVar54 = 0;
      lVar47 = lVar46;
      do {
         if (( uVar48 == (uint)uVar57 ) && ( *(Object**)( *(long*)( (long)local_70 + lVar46 * 8 ) + 0x10 ) == pOVar50 )) {
            pauVar42 = *(undefined1(**) [16])( (long)local_70 + (ulong)uVar45 * 8 );
            *(undefined4*)( pauVar42[1] + 8 ) = 0;
            lStack_90 = lVar47;
            goto LAB_00101e97;
         }

         uVar54 = uVar54 + 1;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = ( ulong )(uVar45 + 1) * lVar2;
         auVar33._8_8_ = 0;
         auVar33._0_8_ = uVar55;
         lVar46 = SUB168(auVar17 * auVar33, 8);
         uVar48 = *(uint*)( lVar53 + lVar46 * 4 );
         uVar45 = SUB164(auVar17 * auVar33, 8);
      }
 while ( ( uVar48 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = (ulong)uVar48 * lVar2,auVar34._8_8_ = 0,auVar34._0_8_ = uVar55,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + uVar40 * 4 ) + uVar45 ) - SUB164(auVar18 * auVar34, 8)) * lVar2,auVar35._8_8_ = 0,auVar35._0_8_ = uVar55,lVar47 = SUB168(auVar19 * auVar35, 8),uVar54 <= SUB164(auVar19 * auVar35, 8) );
   }

}
}LAB_00101aa3:if ((float)uVar56 * __LC15 < (float)( iVar44 + 1 )) {
   uVar48 = *(uint*)( this + 0x28 );
   if (uVar48 == 0x1c) {
      pauVar42 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_00101e97;
   }

   uVar40 = ( ulong )(uVar48 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar45 = *(uint*)( hash_table_size_primes + (ulong)uVar48 * 4 );
   if (uVar48 + 1 < 2) {
      uVar40 = 2;
   }

   uVar48 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
   uVar39 = (ulong)uVar48;
   *(int*)( this + 0x28 ) = (int)uVar40;
   pvVar3 = *(void**)( this + 0x10 );
   uVar40 = uVar39 * 4;
   uVar56 = uVar39 * 8;
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   __s_00 = (void*)Memory::alloc_static(uVar56, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar48 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar56 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar39 != uVar40 );
      }
 else {
         memset(__s, 0, uVar40);
         memset(__s_00, 0, uVar56);
      }

   }

   if (uVar45 == 0) {
      pOVar50 = *(Object**)param_1;
   }
 else {
      uVar40 = 0;
      do {
         uVar48 = *(uint*)( (long)pvVar3 + uVar40 * 4 );
         if (uVar48 != 0) {
            lVar53 = *(long*)( this + 0x10 );
            uVar51 = 0;
            uVar54 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar56 = CONCAT44(0, uVar54);
            lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar48 * lVar2;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar56;
            lVar46 = SUB168(auVar8 * auVar24, 8);
            puVar1 = (uint*)( lVar53 + lVar46 * 4 );
            iVar44 = SUB164(auVar8 * auVar24, 8);
            uVar52 = *puVar1;
            uVar41 = *(undefined8*)( (long)local_70 + uVar40 * 8 );
            while (uVar52 != 0) {
               auVar9._8_8_ = 0;
               auVar9._0_8_ = (ulong)uVar52 * lVar2;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar56;
               auVar10._8_8_ = 0;
               auVar10._0_8_ = ( ulong )(( iVar44 + uVar54 ) - SUB164(auVar9 * auVar25, 8)) * lVar2;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar56;
               uVar38 = SUB164(auVar10 * auVar26, 8);
               uVar49 = uVar41;
               if (uVar38 < uVar51) {
                  *puVar1 = uVar48;
                  puVar43 = (undefined8*)( (long)__s_00 + lVar46 * 8 );
                  uVar49 = *puVar43;
                  *puVar43 = uVar41;
                  uVar48 = uVar52;
                  uVar51 = uVar38;
               }

               uVar51 = uVar51 + 1;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(iVar44 + 1) * lVar2;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar56;
               lVar46 = SUB168(auVar11 * auVar27, 8);
               puVar1 = (uint*)( lVar53 + lVar46 * 4 );
               iVar44 = SUB164(auVar11 * auVar27, 8);
               uVar41 = uVar49;
               uVar52 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar46 * 8 ) = uVar41;
            *puVar1 = uVar48;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar40 = uVar40 + 1;
      }
 while ( uVar40 != uVar45 );
      Memory::free_static(local_70, false);
      Memory::free_static(pvVar3, false);
      pOVar50 = *(Object**)param_1;
   }

}
if (( pOVar50 == (Object*)0x0 ) || ( cVar37 = cVar37 == '\0' )) {
   pauVar42 = (undefined1(*) [16])operator_new(0x20, "");
   *(undefined8*)pauVar42[1] = 0;
   *pauVar42 = (undefined1[16])0x0;
   puVar43 = *(undefined8**)( this + 0x20 );
   *(undefined4*)( pauVar42[1] + 8 ) = 0;
   if (puVar43 == (undefined8*)0x0) goto LAB_00101d03;
   LAB_00101d53:*puVar43 = pauVar42;
   *(undefined8**)( *pauVar42 + 8 ) = puVar43;
}
 else {
   pauVar42 = (undefined1(*) [16])operator_new(0x20, "");
   *(Object**)pauVar42[1] = pOVar50;
   *pauVar42 = (undefined1[16])0x0;
   cVar37 = RefCounted::reference();
   if (cVar37 == '\0') {
      *(undefined8*)pauVar42[1] = 0;
   }

   *(undefined4*)( pauVar42[1] + 8 ) = 0;
   cVar37 = RefCounted::unreference();
   if (( cVar37 != '\0' ) && ( cVar37 = cVar37 != '\0' )) {
      ( **(code**)( *(long*)pOVar50 + 0x140 ) )(pOVar50);
      Memory::free_static(pOVar50, false);
   }

   puVar43 = *(undefined8**)( this + 0x20 );
   if (puVar43 != (undefined8*)0x0) goto LAB_00101d53;
   LAB_00101d03:*(undefined1(**) [16])( this + 0x18 ) = pauVar42;
}
lVar53 = *(long*)( this + 0x10 );*(undefined1(**) [16])( this + 0x20 ) = pauVar42;uVar40 = *(long*)param_1 * 0x3ffff - 1;uVar40 = ( uVar40 ^ uVar40 >> 0x1f ) * 0x15;uVar40 = ( uVar40 ^ uVar40 >> 0xb ) * 0x41;uVar40 = uVar40 >> 0x16 ^ uVar40;uVar56 = uVar40 & 0xffffffff;if ((int)uVar40 == 0) {
   uVar56 = 1;
}
uVar52 = 0;uVar48 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar48);uVar54 = (uint)uVar56;lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar12._8_8_ = 0;auVar12._0_8_ = uVar56 * lVar2;auVar28._8_8_ = 0;auVar28._0_8_ = uVar40;lStack_90 = SUB168(auVar12 * auVar28, 8);lVar46 = *(long*)( this + 8 );puVar1 = (uint*)( lVar53 + lStack_90 * 4 );iVar44 = SUB164(auVar12 * auVar28, 8);uVar45 = *puVar1;pauVar36 = pauVar42;while (uVar45 != 0) {
   auVar13._8_8_ = 0;
   auVar13._0_8_ = (ulong)uVar45 * lVar2;
   auVar29._8_8_ = 0;
   auVar29._0_8_ = uVar40;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(( uVar48 + iVar44 ) - SUB164(auVar13 * auVar29, 8)) * lVar2;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = uVar40;
   uVar54 = SUB164(auVar14 * auVar30, 8);
   pauVar58 = pauVar36;
   if (uVar54 < uVar52) {
      *puVar1 = (uint)uVar56;
      uVar56 = (ulong)uVar45;
      puVar43 = (undefined8*)( lVar46 + lStack_90 * 8 );
      pauVar58 = (undefined1(*) [16])*puVar43;
      *puVar43 = pauVar36;
      uVar52 = uVar54;
   }

   uVar54 = (uint)uVar56;
   uVar52 = uVar52 + 1;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(iVar44 + 1) * lVar2;
   auVar31._8_8_ = 0;
   auVar31._0_8_ = uVar40;
   lStack_90 = SUB168(auVar15 * auVar31, 8);
   puVar1 = (uint*)( lVar53 + lStack_90 * 4 );
   iVar44 = SUB164(auVar15 * auVar31, 8);
   pauVar36 = pauVar58;
   uVar45 = *puVar1;
}
;*(undefined1(**) [16])( lVar46 + lStack_90 * 8 ) = pauVar36;*puVar1 = uVar54;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00101e97:auVar60._8_8_ = lStack_90;auVar60._0_8_ = pauVar42[1] + 8;return auVar60;}/* CowData<CSGBrush::Face>::_realloc(long) */undefined8 CowData<CSGBrush::Face>::_realloc(CowData<CSGBrush::Face> *this, long param_1) {
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
/* CowData<Ref<Material> >::_unref() */void CowData<Ref<Material>>::_unref(CowData<Ref<Material>> *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   code *pcVar4;
   char cVar5;
   long *plVar6;
   long lVar7;
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

   plVar1 = *(long**)this;
   if (plVar1 == (long*)0x0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   lVar2 = plVar1[-1];
   *(undefined8*)this = 0;
   if (lVar2 != 0) {
      lVar7 = 0;
      plVar6 = plVar1;
      LAB_0010225d:do {
         if (*plVar6 != 0) {
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
               pOVar3 = (Object*)*plVar6;
               cVar5 = predelete_handler(pOVar3);
               if (cVar5 != '\0') {
                  lVar7 = lVar7 + 1;
                  plVar6 = plVar6 + 1;
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
                  if (lVar2 == lVar7) break;
                  goto LAB_0010225d;
               }

            }

         }

         lVar7 = lVar7 + 1;
         plVar6 = plVar6 + 1;
      }
 while ( lVar2 != lVar7 );
   }

   Memory::free_static(plVar1 + -2, false);
   return;
}
/* CowData<Ref<Material> >::_realloc(long) */undefined8 CowData<Ref<Material>>::_realloc(CowData<Ref<Material>> *this, long param_1) {
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


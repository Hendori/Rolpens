/* edt(float*, int, int) */void edt(float *param_1, int param_2, int param_3) {
   float *pfVar1;
   long lVar2;
   long lVar3;
   undefined8 uVar4;
   undefined1 *puVar5;
   long lVar6;
   float fVar7;
   ulong uVar8;
   int iVar9;
   int iVar10;
   long lVar11;
   ulong uVar12;
   float *pfVar13;
   undefined1 *puVar14;
   float *pfVar16;
   float *pfVar17;
   float fVar18;
   long lVar19;
   long lVar20;
   long in_FS_OFFSET;
   float fVar21;
   float fVar22;
   float fVar23;
   float fVar24;
   undefined1 auStack_58[8];
   long local_50;
   long local_40;
   undefined1 *puVar15;
   lVar19 = (long)param_3;
   puVar14 = auStack_58;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar12 = ( (long)( param_3 + 1 ) + lVar19 * 2 ) * 4 + 0x17;
   puVar15 = auStack_58;
   puVar5 = auStack_58;
   while (puVar15 != auStack_58 + -(uVar12 & 0xfffffffffffff000)) {
      puVar14 = puVar5 + -0x1000;
      *(undefined8*)( puVar5 + -8 ) = *(undefined8*)( puVar5 + -8 );
      puVar15 = puVar5 + -0x1000;
      puVar5 = puVar5 + -0x1000;
   }
;
   uVar12 = ( ulong )((uint)uVar12 & 0xff0);
   lVar2 = -uVar12;
   if (uVar12 != 0) {
      *(undefined8*)( puVar14 + -8 ) = *(undefined8*)( puVar14 + -8 );
   }

   uVar4 = CONCAT44(_LC0._4_4_, (float)_LC0);
   pfVar13 = (float*)( ( ulong )(puVar14 + lVar2 + 0xf) & 0xfffffffffffffff0 );
   pfVar1 = pfVar13 + lVar19;
   pfVar16 = pfVar1 + lVar19;
   *pfVar1 = 0.0;
   *(undefined8*)pfVar16 = uVar4;
   fVar7 = _LC2;
   fVar22 = _LC0._4_4_;
   if (param_3 < 2) {
      if (param_3 != 1) goto LAB_00100255;
   }
 else {
      fVar18 = 1.4013e-45;
      uVar12 = 0;
      pfVar17 = param_1;
      fVar24 = (float)_LC0;
      while (true) {
         fVar23 = (float)( (int)fVar18 * (int)fVar18 ) + pfVar17[param_2];
         fVar21 = ( fVar23 - ( (float)( ( (int)fVar18 + -1 ) * ( (int)fVar18 + -1 ) ) + *pfVar17 ) ) * fVar7;
         uVar8 = (long)(int)uVar12;
         if (fVar24 < fVar21) {
            uVar12 = ( ulong )((int)uVar12 + 1);
         }
 else {
            do {
               uVar12 = uVar8;
               fVar24 = pfVar1[uVar12 - 1];
               fVar21 = ( fVar23 - ( (float)( (int)fVar24 * (int)fVar24 ) + param_1[(int)fVar24 * param_2] ) ) / (float)( ( (int)fVar18 - (int)fVar24 ) * 2 );
               uVar8 = uVar12 - 1;
            }
 while ( fVar21 <= pfVar16[uVar12 - 1] );
         }

         lVar20 = (long)(int)uVar12;
         pfVar17 = pfVar17 + param_2;
         pfVar1[lVar20] = fVar18;
         fVar18 = (float)( (int)fVar18 + 1 );
         pfVar16[lVar20] = fVar21;
         pfVar16[lVar20 + 1] = fVar22;
         local_50 = lVar19;
         if ((float)param_3 == fVar18) break;
         fVar24 = pfVar16[lVar20];
      }
;
   }

   lVar20 = 0;
   iVar9 = 0;
   do {
      lVar11 = (long)iVar9;
      fVar22 = (float)(int)lVar20;
      lVar3 = lVar11;
      if (pfVar16[lVar11 + 1] <= fVar22 && fVar22 != pfVar16[lVar11 + 1]) {
         do {
            lVar11 = lVar3 + 1;
            lVar6 = lVar3 + 2;
            lVar3 = lVar11;
         }
 while ( pfVar16[lVar6] <= fVar22 && fVar22 != pfVar16[lVar6] );
         iVar9 = (int)lVar11;
      }

      iVar10 = (int)lVar20 - (int)pfVar1[lVar11];
      pfVar13[lVar20] = (float)( iVar10 * iVar10 ) + param_1[(int)pfVar1[lVar11] * param_2];
      lVar20 = lVar20 + 1;
   }
 while ( lVar19 != lVar20 );
   do {
      fVar22 = *pfVar13;
      pfVar13 = pfVar13 + 1;
      *param_1 = fVar22;
      param_1 = param_1 + param_2;
   }
 while ( pfVar13 != pfVar1 );
   LAB_00100255:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      *(undefined**)( puVar14 + lVar2 + -8 ) = &UNK_0010028e;
      __stack_chk_fail();
   }

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
/* CowData<Voxelizer::Cell>::_copy_on_write() [clone .isra.0] */void CowData<Voxelizer::Cell>::_copy_on_write(CowData<Voxelizer::Cell> *this) {
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
   __n = lVar2 * 0x54;
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
/* SortArray<Voxelizer::CellSort, _DefaultComparator<Voxelizer::CellSort>, true>::introsort(long,
   long, Voxelizer::CellSort*, long) const [clone .isra.0] */void SortArray<Voxelizer::CellSort,_DefaultComparator<Voxelizer::CellSort>,true>::introsort(long param_1, long param_2, CellSort *param_3, long param_4) {
   ulong uVar1;
   long lVar2;
   long lVar3;
   CellSort *pCVar4;
   long lVar5;
   ulong uVar6;
   CellSort *pCVar7;
   long lVar8;
   undefined4 uVar9;
   CellSort *pCVar10;
   long lVar11;
   long lVar12;
   long lVar13;
   CellSort *pCVar14;
   ulong uVar15;
   bool bVar16;
   undefined4 uStack_70;
   lVar5 = param_2 - param_1;
   if (lVar5 < 0x11) {
      return;
   }

   if (param_4 != 0) {
      lVar8 = param_2;
      LAB_001004f5:param_4 = param_4 + -1;
      uVar15 = *(ulong*)( param_3 + param_1 * 0x10 );
      uVar6 = *(ulong*)( param_3 + ( ( lVar5 >> 1 ) + param_1 ) * 0x10 );
      uVar1 = *(ulong*)( param_3 + lVar8 * 0x10 + -0x10 );
      if (uVar15 < uVar6) {
         if (uVar15 < uVar1) {
            uVar15 = uVar1;
         }

         if (uVar6 < uVar1) {
            uVar15 = uVar6;
         }

      }
 else {
         if (uVar6 < uVar1) {
            uVar6 = uVar1;
         }

         if (uVar1 <= uVar15) {
            uVar15 = uVar6;
         }

      }

      lVar5 = lVar8;
      param_2 = param_1;
      do {
         lVar13 = param_2 * 0x10;
         if (*(ulong*)( param_3 + lVar13 ) < uVar15) {
            if (lVar8 + -1 == param_2) {
               _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
               goto LAB_0010056f;
            }

         }
 else {
            LAB_0010056f:lVar5 = lVar5 + -1;
            pCVar14 = param_3 + lVar5 * 0x10;
            if (uVar15 < *(ulong*)pCVar14) {
               pCVar4 = param_3 + lVar5 * 0x10 + -0x10;
               while (param_1 != lVar5) {
                  lVar5 = lVar5 + -1;
                  pCVar14 = pCVar4;
                  if (*(ulong*)pCVar4 <= uVar15) goto LAB_001005dc;
                  pCVar4 = pCVar4 + -0x10;
               }
;
               _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
            }

            LAB_001005dc:if (lVar5 <= param_2) goto LAB_00100610;
            uVar6 = *(ulong*)( param_3 + lVar13 );
            uVar1 = *(ulong*)( param_3 + lVar13 + 8 );
            *(ulong*)( param_3 + lVar13 ) = *(ulong*)pCVar14;
            *(undefined4*)( param_3 + lVar13 + 8 ) = *(undefined4*)( pCVar14 + 8 );
            *(ulong*)pCVar14 = uVar6;
            uStack_70 = (undefined4)uVar1;
            *(undefined4*)( pCVar14 + 8 ) = uStack_70;
         }

         param_2 = param_2 + 1;
      }
 while ( true );
   }

   LAB_001007f3:lVar13 = lVar5 + -2 >> 1;
   lVar8 = lVar13 * 2 + 2;
   pCVar14 = param_3 + ( param_1 + lVar13 ) * 0x10;
   do {
      uVar15 = *(ulong*)pCVar14;
      uVar6 = *(ulong*)( pCVar14 + 8 );
      lVar12 = lVar13;
      lVar2 = lVar8;
      if (lVar8 < lVar5) {
         do {
            lVar3 = lVar2 + -1;
            pCVar4 = param_3 + ( param_1 + lVar2 + -1 ) * 0x10;
            lVar11 = lVar2;
            if (*(ulong*)( param_3 + ( param_1 + lVar2 + -1 ) * 0x10 ) <= *(ulong*)( param_3 + ( param_1 + lVar2 ) * 0x10 )) {
               lVar11 = lVar2 + 1;
               lVar3 = lVar2;
               pCVar4 = param_3 + ( param_1 + lVar2 ) * 0x10;
            }

            lVar2 = lVar11 * 2;
            *(ulong*)( param_3 + ( lVar12 + param_1 ) * 0x10 ) = *(ulong*)pCVar4;
            *(undefined4*)( param_3 + ( lVar12 + param_1 ) * 0x10 + 8 ) = *(undefined4*)( pCVar4 + 8 );
            lVar12 = lVar3;
         }
 while ( lVar5 != lVar2 && SBORROW8(lVar5, lVar2) == lVar5 + lVar11 * -2 < 0 );
         pCVar7 = pCVar4;
         if (lVar5 == lVar2) {
            LAB_0010091d:lVar3 = lVar2 + -1;
            pCVar4 = param_3 + ( param_1 + lVar3 ) * 0x10;
            *(ulong*)pCVar7 = *(ulong*)pCVar4;
            *(undefined4*)( pCVar7 + 8 ) = *(undefined4*)( pCVar4 + 8 );
         }

         lVar2 = lVar3 + -1;
         if (lVar3 <= lVar13) goto LAB_0010097c;
         do {
            lVar12 = lVar2 >> 1;
            pCVar7 = param_3 + ( param_1 + lVar12 ) * 0x10;
            pCVar4 = param_3 + ( lVar3 + param_1 ) * 0x10;
            if (uVar15 <= *(ulong*)pCVar7) break;
            *(ulong*)pCVar4 = *(ulong*)pCVar7;
            *(undefined4*)( pCVar4 + 8 ) = *(undefined4*)( pCVar7 + 8 );
            lVar2 = ( lVar12 + -1 ) - ( lVar12 + -1 >> 0x3f );
            pCVar4 = pCVar7;
            lVar3 = lVar12;
         }
 while ( lVar13 < lVar12 );
         *(ulong*)pCVar4 = uVar15;
         *(int*)( pCVar4 + 8 ) = (int)uVar6;
         if (lVar13 == 0) goto LAB_0010069f;
      }
 else {
         pCVar7 = pCVar14;
         pCVar4 = pCVar14;
         if (lVar8 == lVar5) goto LAB_0010091d;
         LAB_0010097c:*(ulong*)pCVar4 = uVar15;
         *(int*)( pCVar4 + 8 ) = (int)uVar6;
      }

      lVar13 = lVar13 + -1;
      pCVar14 = pCVar14 + -0x10;
      lVar8 = lVar8 + -2;
   }
 while ( true );
   LAB_00100610:introsort(param_2, lVar8, param_3, param_4);
   lVar5 = param_2 - param_1;
   if (lVar5 < 0x11) {
      return;
   }

   lVar8 = param_2;
   if (param_4 == 0) goto LAB_001007f3;
   goto LAB_001004f5;
   LAB_0010069f:pCVar4 = param_3 + param_1 * 0x10;
   pCVar14 = param_3 + ( param_2 + -2 ) * 0x10;
   lVar5 = ( param_2 + -1 ) - param_1;
   LAB_001006c0:do {
      uVar15 = *(ulong*)( pCVar14 + 0x10 );
      uVar6 = *(ulong*)( pCVar14 + 0x18 );
      *(ulong*)( pCVar14 + 0x10 ) = *(ulong*)pCVar4;
      *(undefined4*)( pCVar14 + 0x18 ) = *(undefined4*)( pCVar4 + 8 );
      uVar9 = (undefined4)uVar6;
      if (lVar5 < 3) {
         pCVar7 = pCVar4;
         if (lVar5 != 2) {
            *(ulong*)pCVar4 = uVar15;
            *(undefined4*)( pCVar4 + 8 ) = uVar9;
            return;
         }

         LAB_00100950:*(ulong*)pCVar7 = *(ulong*)pCVar14;
         *(undefined4*)( pCVar7 + 8 ) = *(undefined4*)( pCVar14 + 8 );
         lVar2 = lVar5 + -1;
         lVar8 = lVar5 + -2 >> 1;
      }
 else {
         lVar8 = 2;
         lVar13 = 0;
         do {
            lVar2 = lVar8 + -1;
            lVar12 = lVar8;
            pCVar7 = param_3 + ( param_1 + lVar8 + -1 ) * 0x10;
            if (*(ulong*)( param_3 + ( param_1 + lVar8 + -1 ) * 0x10 ) <= *(ulong*)( param_3 + ( param_1 + lVar8 ) * 0x10 )) {
               lVar12 = lVar8 + 1;
               lVar2 = lVar8;
               pCVar7 = param_3 + ( param_1 + lVar8 ) * 0x10;
            }

            lVar8 = lVar12 * 2;
            *(ulong*)( param_3 + ( lVar13 + param_1 ) * 0x10 ) = *(ulong*)pCVar7;
            *(undefined4*)( param_3 + ( lVar13 + param_1 ) * 0x10 + 8 ) = *(undefined4*)( pCVar7 + 8 );
            lVar13 = lVar2;
         }
 while ( lVar8 < lVar5 );
         if (lVar8 == lVar5) goto LAB_00100950;
         lVar8 = ( lVar2 + -1 ) / 2;
         if (lVar2 == 0) {
            lVar5 = lVar5 + -1;
            pCVar14 = pCVar14 + -0x10;
            *(ulong*)pCVar7 = uVar15;
            *(undefined4*)( pCVar7 + 8 ) = uVar9;
            goto LAB_001006c0;
         }

      }

      do {
         pCVar10 = param_3 + ( param_1 + lVar8 ) * 0x10;
         pCVar7 = param_3 + ( lVar2 + param_1 ) * 0x10;
         if (uVar15 <= *(ulong*)pCVar10) break;
         *(ulong*)pCVar7 = *(ulong*)pCVar10;
         *(undefined4*)( pCVar7 + 8 ) = *(undefined4*)( pCVar10 + 8 );
         bVar16 = lVar8 != 0;
         pCVar7 = pCVar10;
         lVar2 = lVar8;
         lVar8 = ( lVar8 + -1 ) / 2;
      }
 while ( bVar16 );
      pCVar14 = pCVar14 + -0x10;
      *(ulong*)pCVar7 = uVar15;
      *(undefined4*)( pCVar7 + 8 ) = uVar9;
      bVar16 = lVar5 < 2;
      lVar5 = lVar5 + -1;
      if (bVar16) {
         return;
      }

   }
 while ( true );
}
/* CowData<Voxelizer::CellSort>::_copy_on_write() [clone .isra.0] */void CowData<Voxelizer::CellSort>::_copy_on_write(CowData<Voxelizer::CellSort> *this) {
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
   __n = lVar2 * 0x10;
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
/* CowData<Color>::_ref(CowData<Color> const&) [clone .part.0] */void CowData<Color>::_ref(CowData<Color> *this, CowData *param_1) {
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
/* CowData<int>::_copy_on_write() [clone .isra.0] */void CowData<int>::_copy_on_write(CowData<int> *this) {
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
/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */void CowData<Vector3>::_copy_on_write(CowData<Vector3> *this) {
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
/* CowData<Color>::_copy_on_write() [clone .isra.0] */void CowData<Color>::_copy_on_write(CowData<Color> *this) {
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
   __n = lVar2 * 0x10;
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
/* Voxelizer::get_bake_steps(Ref<Mesh>&) const */int Voxelizer::get_bake_steps(Voxelizer *this, Ref *param_1) {
   long *plVar1;
   long lVar2;
   int iVar3;
   int iVar4;
   long lVar5;
   int iVar6;
   long in_FS_OFFSET;
   Array local_60[8];
   Variant local_58[8];
   long local_50;
   Variant local_48[8];
   long local_40;
   long local_30;
   iVar6 = 0;
   iVar4 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      iVar3 = ( **(code**)( **(long**)param_1 + 0x1c8 ) )();
      if (iVar3 <= iVar4) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return iVar6;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      iVar3 = ( **(code**)( **(long**)param_1 + 0x200 ) )(*(long**)param_1, iVar4);
      if (iVar3 == 3) {
         ( **(code**)( **(long**)param_1 + 0x1e0 ) )(local_60, *(long**)param_1, iVar4);
         iVar3 = (int)local_60;
         Array::operator [](iVar3);
         Variant::operator_cast_to_Vector(local_58);
         Array::operator [](iVar3);
         Variant::operator_cast_to_Vector(local_48);
         lVar2 = local_40;
         if (local_40 == 0) {
            if (local_50 != 0) {
               iVar6 = iVar6 + (int)( *(long*)( local_50 + -8 ) / 3 );
               goto LAB_00100fb3;
            }

         }
 else {
            lVar5 = *(long*)( local_40 + -8 );
            if (lVar5 < 1) {
               if (local_50 != 0) {
                  lVar5 = *(long*)( local_50 + -8 );
                  goto LAB_00100f78;
               }

            }
 else {
               LAB_00100f78:iVar6 = iVar6 + (int)( lVar5 / 3 );
            }

            LOCK();
            plVar1 = (long*)( local_40 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_40 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

            if (local_50 != 0) {
               LAB_00100fb3:lVar2 = local_50;
               LOCK();
               plVar1 = (long*)( local_50 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

            }

         }

         Array::~Array(local_60);
      }

      iVar4 = iVar4 + 1;
   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Voxelizer::_fixup_plot(int, int) */void Voxelizer::_fixup_plot(Voxelizer *this, int param_1, int param_2) {
   CowData<Voxelizer::Cell> *pCVar1;
   uint uVar2;
   code *pcVar3;
   ulong uVar4;
   ulong uVar5;
   long lVar6;
   long lVar7;
   int iVar8;
   long lVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float local_40;
   uVar5 = (ulong)param_1;
   lVar6 = *(long*)( this + 8 );
   uVar4 = uVar5;
   if (*(int*)( this + 0x10 ) != param_2) {
      if (param_1 < 0) {
         if (lVar6 != 0) {
            lVar6 = *(long*)( lVar6 + -8 );
            goto LAB_0010147b;
         }

      }
 else if (lVar6 != 0) {
         lVar6 = *(long*)( lVar6 + -8 );
         if (lVar6 <= (long)uVar5) goto LAB_0010147b;
         pCVar1 = (CowData<Voxelizer::Cell>*)( this + 8 );
         CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
         lVar6 = *(long*)( this + 8 );
         lVar9 = uVar5 * 0x54;
         *(undefined4*)( lVar6 + 0x2c + lVar9 ) = 0;
         if (lVar6 != 0) {
            lVar6 = *(long*)( lVar6 + -8 );
            if (lVar6 <= (long)uVar5) goto LAB_0010147b;
            CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
            lVar6 = *(long*)( this + 8 );
            *(undefined4*)( lVar6 + 0x30 + lVar9 ) = 0;
            if (lVar6 != 0) {
               lVar6 = *(long*)( lVar6 + -8 );
               if (lVar6 <= (long)uVar5) goto LAB_0010147b;
               CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
               lVar6 = *(long*)( this + 8 );
               *(undefined4*)( lVar6 + 0x34 + lVar9 ) = 0;
               if (lVar6 != 0) {
                  lVar6 = *(long*)( lVar6 + -8 );
                  if (lVar6 <= (long)uVar5) goto LAB_0010147b;
                  CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                  lVar6 = *(long*)( this + 8 );
                  *(undefined4*)( lVar6 + 0x38 + lVar9 ) = 0;
                  if (lVar6 != 0) {
                     lVar6 = *(long*)( lVar6 + -8 );
                     if (lVar6 <= (long)uVar5) goto LAB_0010147b;
                     CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                     lVar6 = *(long*)( this + 8 );
                     *(undefined4*)( lVar6 + 0x3c + lVar9 ) = 0;
                     if (lVar6 != 0) {
                        lVar6 = *(long*)( lVar6 + -8 );
                        if (lVar6 <= (long)uVar5) goto LAB_0010147b;
                        CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                        lVar6 = *(long*)( this + 8 );
                        *(undefined4*)( lVar6 + 0x40 + lVar9 ) = 0;
                        if (lVar6 != 0) {
                           lVar6 = *(long*)( lVar6 + -8 );
                           if (lVar6 <= (long)uVar5) goto LAB_0010147b;
                           CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                           lVar6 = *(long*)( this + 8 );
                           *(undefined4*)( lVar6 + 0x20 + lVar9 ) = 0;
                           if (lVar6 != 0) {
                              lVar6 = *(long*)( lVar6 + -8 );
                              if (lVar6 <= (long)uVar5) goto LAB_0010147b;
                              CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                              lVar6 = *(long*)( this + 8 );
                              *(undefined4*)( lVar6 + 0x24 + lVar9 ) = 0;
                              if (lVar6 != 0) {
                                 lVar6 = *(long*)( lVar6 + -8 );
                                 if (lVar6 <= (long)uVar5) goto LAB_0010147b;
                                 CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                                 lVar6 = *(long*)( this + 8 );
                                 *(undefined4*)( lVar6 + 0x28 + lVar9 ) = 0;
                                 if (lVar6 != 0) {
                                    iVar8 = 0;
                                    fVar10 = 0.0;
                                    do {
                                       lVar7 = *(long*)( lVar6 + -8 );
                                       uVar4 = uVar5;
                                       if (lVar7 <= (long)uVar5) goto LAB_001016f1;
                                       uVar2 = *(uint*)( lVar6 + (long)iVar8 * 4 + lVar9 );
                                       if (uVar2 != 0xffffffff) {
                                          _fixup_plot(this, uVar2, param_2 + 1);
                                          lVar6 = *(long*)( this + 8 );
                                          uVar4 = (ulong)uVar2;
                                          if (lVar6 == 0) {
                                             lVar7 = 0;
                                             goto LAB_001016f1;
                                          }

                                          lVar7 = *(long*)( lVar6 + -8 );
                                          if (lVar7 <= (long)uVar4) goto LAB_001016f1;
                                          fVar10 = fVar10 + *(float*)( lVar6 + 0x48 + uVar4 * 0x54 );
                                       }

                                       iVar8 = iVar8 + 1;
                                    }
 while ( iVar8 != 8 );
                                    fVar10 = fVar10 * __LC33;
                                    lVar6 = *(long*)( lVar6 + -8 );
                                    if ((long)uVar5 < lVar6) {
                                       CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                                       *(float*)( *(long*)( this + 8 ) + 0x48 + lVar9 ) = fVar10;
                                       return;
                                    }

                                    goto LAB_0010147b;
                                 }

                                 goto LAB_001016d0;
                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

      LAB_00101478:lVar6 = 0;
      LAB_0010147b:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, uVar5, lVar6, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   *(int*)( this + 200 ) = *(int*)( this + 200 ) + 1;
   if ((long)uVar5 < 0) {
      if (lVar6 != 0) {
         lVar7 = *(long*)( lVar6 + -8 );
         goto LAB_001016f1;
      }

   }
 else if (lVar6 != 0) {
      lVar7 = *(long*)( lVar6 + -8 );
      if (lVar7 <= (long)uVar5) goto LAB_001016f1;
      pCVar1 = (CowData<Voxelizer::Cell>*)( this + 8 );
      lVar9 = uVar5 * 0x54;
      local_40 = *(float*)( lVar6 + 0x48 + lVar9 );
      CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
      lVar6 = *(long*)( this + 8 );
      *(float*)( lVar6 + lVar9 + 0x20 ) = *(float*)( lVar6 + lVar9 + 0x20 ) / local_40;
      if (lVar6 != 0) {
         lVar6 = *(long*)( lVar6 + -8 );
         if (lVar6 <= (long)uVar5) goto LAB_0010147b;
         CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
         lVar6 = *(long*)( this + 8 );
         *(float*)( lVar6 + lVar9 + 0x24 ) = *(float*)( lVar6 + lVar9 + 0x24 ) / local_40;
         if (lVar6 != 0) {
            lVar6 = *(long*)( lVar6 + -8 );
            if (lVar6 <= (long)uVar5) goto LAB_0010147b;
            CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
            lVar6 = *(long*)( this + 8 );
            *(float*)( lVar6 + lVar9 + 0x28 ) = *(float*)( lVar6 + lVar9 + 0x28 ) / local_40;
            if (lVar6 != 0) {
               lVar6 = *(long*)( lVar6 + -8 );
               if (lVar6 <= (long)uVar5) goto LAB_0010147b;
               CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
               lVar6 = *(long*)( this + 8 );
               *(float*)( lVar6 + lVar9 + 0x2c ) = *(float*)( lVar6 + lVar9 + 0x2c ) / local_40;
               if (lVar6 != 0) {
                  lVar6 = *(long*)( lVar6 + -8 );
                  if (lVar6 <= (long)uVar5) goto LAB_0010147b;
                  CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                  lVar6 = *(long*)( this + 8 );
                  *(float*)( lVar6 + lVar9 + 0x30 ) = *(float*)( lVar6 + lVar9 + 0x30 ) / local_40;
                  if (lVar6 != 0) {
                     lVar6 = *(long*)( lVar6 + -8 );
                     if (lVar6 <= (long)uVar5) goto LAB_0010147b;
                     CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                     lVar6 = *(long*)( this + 8 );
                     *(float*)( lVar6 + lVar9 + 0x34 ) = *(float*)( lVar6 + lVar9 + 0x34 ) / local_40;
                     if (lVar6 != 0) {
                        lVar6 = *(long*)( lVar6 + -8 );
                        if (lVar6 <= (long)uVar5) goto LAB_0010147b;
                        CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                        lVar6 = *(long*)( this + 8 );
                        *(float*)( lVar6 + lVar9 + 0x38 ) = *(float*)( lVar6 + lVar9 + 0x38 ) / local_40;
                        if (lVar6 != 0) {
                           lVar6 = *(long*)( lVar6 + -8 );
                           if (lVar6 <= (long)uVar5) goto LAB_0010147b;
                           CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                           lVar6 = *(long*)( this + 8 );
                           *(float*)( lVar6 + lVar9 + 0x3c ) = *(float*)( lVar6 + lVar9 + 0x3c ) / local_40;
                           if (lVar6 != 0) {
                              lVar6 = *(long*)( lVar6 + -8 );
                              if (lVar6 <= (long)uVar5) goto LAB_0010147b;
                              CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                              lVar7 = *(long*)( this + 8 );
                              lVar6 = lVar7 + lVar9;
                              local_40 = *(float*)( lVar6 + 0x40 ) / local_40;
                              *(float*)( lVar6 + 0x40 ) = local_40;
                              if (lVar7 == 0) goto LAB_001016d0;
                              lVar7 = *(long*)( lVar7 + -8 );
                              if (lVar7 <= (long)uVar5) goto LAB_001016f1;
                              fVar10 = *(float*)( lVar6 + 0x3c );
                              fVar12 = *(float*)( lVar6 + 0x38 );
                              fVar11 = fVar12 * fVar12 + fVar10 * fVar10 + local_40 * local_40;
                              fVar13 = SQRT(fVar11);
                              if ((double)fVar13 < _LC31) {
                                 CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                                 lVar6 = *(long*)( this + 8 );
                                 *(undefined4*)( lVar6 + 0x38 + lVar9 ) = 0;
                                 if (lVar6 != 0) {
                                    lVar6 = *(long*)( lVar6 + -8 );
                                    if (lVar6 <= (long)uVar5) goto LAB_0010147b;
                                    CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                                    lVar6 = *(long*)( this + 8 );
                                    *(undefined4*)( lVar6 + 0x3c + lVar9 ) = 0;
                                    if (lVar6 != 0) {
                                       lVar6 = *(long*)( lVar6 + -8 );
                                       if (lVar6 <= (long)uVar5) goto LAB_0010147b;
                                       CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                                       lVar6 = *(long*)( this + 8 );
                                       *(undefined4*)( lVar6 + 0x40 + lVar9 ) = 0;
                                       goto LAB_0010169f;
                                    }

                                 }

                              }
 else {
                                 if (fVar11 == 0.0) {
                                    local_40 = 0.0;
                                    fVar10 = 0.0;
                                    fVar12 = 0.0;
                                 }
 else {
                                    fVar12 = fVar12 / fVar13;
                                    fVar10 = fVar10 / fVar13;
                                    local_40 = local_40 / fVar13;
                                 }

                                 CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                                 lVar6 = *(long*)( this + 8 );
                                 *(float*)( lVar6 + 0x38 + lVar9 ) = fVar12;
                                 if (lVar6 != 0) {
                                    lVar6 = *(long*)( lVar6 + -8 );
                                    if (lVar6 <= (long)uVar5) goto LAB_0010147b;
                                    CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                                    lVar6 = *(long*)( this + 8 );
                                    *(float*)( lVar6 + 0x3c + lVar9 ) = fVar10;
                                    if (lVar6 != 0) {
                                       lVar6 = *(long*)( lVar6 + -8 );
                                       if (lVar6 <= (long)uVar5) goto LAB_0010147b;
                                       CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                                       lVar6 = *(long*)( this + 8 );
                                       *(float*)( lVar6 + 0x40 + lVar9 ) = local_40;
                                       LAB_0010169f:if (lVar6 != 0) {
                                          lVar6 = *(long*)( lVar6 + -8 );
                                          if ((long)uVar5 < lVar6) {
                                             CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                                             *(undefined4*)( *(long*)( this + 8 ) + 0x48 + lVar9 ) = 0x3f800000;
                                             return;
                                          }

                                          goto LAB_0010147b;
                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

      goto LAB_00101478;
   }

   LAB_001016d0:lVar7 = 0;
   LAB_001016f1:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar4, lVar7, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}
/* Voxelizer::get_voxel_gi_octree_depth() const */undefined4 Voxelizer::get_voxel_gi_octree_depth(Voxelizer *this) {
   return *(undefined4*)( this + 0x10 );
}
/* Voxelizer::get_voxel_gi_octree_size() const */undefined8 Voxelizer::get_voxel_gi_octree_size(void) {
   undefined8 in_RSI;
   long in_RDI;
   long in_FS_OFFSET;
   if (*(long*)( in_FS_OFFSET + 0x28 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      return *(undefined8*)( in_RDI + 0x7c );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail(in_RDI, in_RSI, *(undefined4*)( in_RDI + 0x84 ));
}
/* Voxelizer::get_voxel_gi_cell_count() const */undefined4 Voxelizer::get_voxel_gi_cell_count(Voxelizer *this) {
   if (*(long*)( this + 8 ) != 0) {
      return *(undefined4*)( *(long*)( this + 8 ) + -8 );
   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Voxelizer::_debug_mesh(int, int, AABB const&, Ref<MultiMesh>&, int&) */void Voxelizer::_debug_mesh(Voxelizer *this, int param_1, int param_2, AABB *param_3, Ref *param_4, int *param_5) {
   uint uVar1;
   code *pcVar2;
   long lVar3;
   uint uVar4;
   long lVar5;
   long in_FS_OFFSET;
   float fVar6;
   float fVar7;
   float local_78;
   float fStack_74;
   float fStack_70;
   float fStack_6c;
   float fStack_68;
   float fStack_64;
   undefined8 uStack_60;
   undefined4 local_58;
   undefined8 local_54;
   float local_4c;
   long local_40;
   lVar5 = (long)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x10 ) + -1 == param_2) {
      local_78 = _LC32;
      fStack_74 = 0.0;
      fStack_70 = 0.0;
      fStack_6c = 0.0;
      fStack_68 = _LC32;
      fStack_64 = 0.0;
      uStack_60 = 0;
      local_58 = 0x3f800000;
      local_4c = *(float*)( param_3 + 8 ) + _LC2 * *(float*)( param_3 + 0x14 );
      local_54 = CONCAT44((float)( ( ulong ) * (undefined8*)param_3 >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( param_3 + 0xc ) >> 0x20 ) * _UNK_0010ef2c, (float)*(undefined8*)param_3 + (float)*(undefined8*)( param_3 + 0xc ) * _LC2);
      Basis::scale((Vector3*)&local_78);
      MultiMesh::set_instance_transform((int)*(undefined8*)param_4, (Transform3D*)( ulong )(uint) * param_5);
      lVar3 = *(long*)( this + 8 );
      if (lVar5 < 0) {
         if (lVar3 != 0) {
            lVar3 = *(long*)( lVar3 + -8 );
            goto LAB_00101a18;
         }

      }
 else if (lVar3 != 0) {
         lVar3 = *(long*)( lVar3 + -8 );
         if (lVar5 < lVar3) {
            MultiMesh::set_instance_color((int)*(undefined8*)param_4, (Color*)( ulong )(uint) * param_5);
            *param_5 = *param_5 + 1;
            LAB_001019c4:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return;
         }

         goto LAB_00101a18;
      }

      lVar3 = 0;
   }
 else {
      lVar3 = *(long*)( this + 8 );
      if (param_1 < 0) {
         if (lVar3 != 0) {
            LAB_001019f9:lVar3 = *(long*)( lVar3 + -8 );
            goto LAB_00101a18;
         }

      }
 else {
         uVar4 = 0;
         fVar6 = _LC2;
         fVar7 = _UNK_0010ef2c;
         while (lVar3 != 0) {
            if (*(long*)( lVar3 + -8 ) <= lVar5) goto LAB_001019f9;
            uVar1 = *(uint*)( lVar3 + (long)(int)uVar4 * 4 + lVar5 * 0x54 );
            if (( uVar1 != 0xffffffff ) && ( uVar1 < *(uint*)( this + 0xc4 ) )) {
               fStack_68 = (float)*(undefined8*)( param_3 + 0x10 );
               fStack_64 = (float)( ( ulong ) * (undefined8*)( param_3 + 0x10 ) >> 0x20 );
               fStack_64 = _LC2 * fStack_64;
               local_78 = (float)*(undefined8*)param_3;
               fStack_74 = (float)( ( ulong ) * (undefined8*)param_3 >> 0x20 );
               fStack_70 = (float)*(undefined8*)( param_3 + 8 );
               fStack_6c = (float)( ( ulong ) * (undefined8*)( param_3 + 8 ) >> 0x20 );
               fStack_6c = fStack_6c * fVar6;
               fStack_68 = fStack_68 * fVar7;
               if (( uVar4 & 1 ) != 0) {
                  local_78 = local_78 + fStack_6c;
               }

               if (( uVar4 & 2 ) != 0) {
                  fStack_74 = fStack_68 + fStack_74;
               }

               if (( uVar4 & 4 ) != 0) {
                  fStack_70 = fStack_64 + fStack_70;
               }

               _debug_mesh(this, uVar1, param_2 + 1, (AABB*)&local_78, param_4, param_5);
               fVar6 = _LC2;
               fVar7 = _UNK_0010ef2c;
            }

            uVar4 = uVar4 + 1;
            if (uVar4 == 8) goto LAB_001019c4;
            lVar3 = *(long*)( this + 8 );
         }
;
      }

      lVar3 = 0;
   }

   LAB_00101a18:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar5, lVar3, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* Voxelizer::get_to_cell_space_xform() const */void Voxelizer::get_to_cell_space_xform(void) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long in_RSI;
   undefined8 *in_RDI;
   uVar1 = *(undefined8*)( in_RSI + 0x90 );
   uVar2 = *(undefined8*)( in_RSI + 0x98 );
   uVar3 = *(undefined8*)( in_RSI + 0xa0 );
   uVar4 = *(undefined8*)( in_RSI + 0xa8 );
   uVar5 = *(undefined8*)( in_RSI + 0xb0 );
   *in_RDI = *(undefined8*)( in_RSI + 0x88 );
   in_RDI[1] = uVar1;
   in_RDI[2] = uVar2;
   in_RDI[3] = uVar3;
   in_RDI[4] = uVar4;
   in_RDI[5] = uVar5;
   return;
}
/* Voxelizer::Voxelizer() */void Voxelizer::Voxelizer(Voxelizer *this) {
   undefined8 uVar1;
   uint uVar2;
   uint uVar3;
   uVar2 = _LC32;
   uVar1 = _LC38;
   *(undefined8*)( this + 8 ) = 0;
   *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   uVar3 = _LC32;
   *(undefined4*)( this + 0x10 ) = 0;
   *(undefined8*)( this + 0x40 ) = 2;
   *(undefined8*)( this + 0x4c ) = 0;
   *(undefined4*)( this + 0x54 ) = 0;
   *(undefined8*)( this + 0x58 ) = 0;
   *(undefined4*)( this + 0x60 ) = 0;
   *(undefined8*)( this + 100 ) = 0;
   *(undefined4*)( this + 0x6c ) = 0;
   *(undefined8*)( this + 0x70 ) = 0;
   *(undefined4*)( this + 0x78 ) = 0;
   *(undefined8*)( this + 0x7c ) = 0;
   *(undefined4*)( this + 0x84 ) = 0;
   *(undefined8*)( this + 0xac ) = 0;
   *(undefined4*)( this + 0xb4 ) = 0;
   *(undefined8*)( this + 0xb8 ) = uVar1;
   *(undefined4*)( this + 0xc0 ) = 0;
   *(undefined8*)( this + 0xc4 ) = 0;
   this[0xcc] = (Voxelizer)0x0;
   *(uint*)( this + 0x48 ) = uVar3;
   *(undefined1(*) [16])( this + 0x88 ) = ZEXT416(uVar2);
   *(undefined1(*) [16])( this + 0x98 ) = ZEXT416(uVar2);
   *(uint*)( this + 0xa8 ) = uVar3;
   return;
}
/* Vector<Vector3>::push_back(Vector3) [clone .isra.0] */void Vector<Vector3>::push_back(undefined8 param_1, undefined4 param_2, long param_3) {
   undefined8 *puVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   if (*(long*)( param_3 + 8 ) == 0) {
      lVar3 = 1;
   }
 else {
      lVar3 = *(long*)( *(long*)( param_3 + 8 ) + -8 ) + 1;
   }

   iVar2 = CowData<Vector3>::resize<false>((CowData<Vector3>*)( param_3 + 8 ), lVar3);
   if (iVar2 == 0) {
      if (*(long*)( param_3 + 8 ) == 0) {
         lVar4 = -1;
         lVar3 = 0;
      }
 else {
         lVar3 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
         lVar4 = lVar3 + -1;
         if (-1 < lVar4) {
            CowData<Vector3>::_copy_on_write((CowData<Vector3>*)( param_3 + 8 ));
            puVar1 = (undefined8*)( *(long*)( param_3 + 8 ) + lVar4 * 0xc );
            *puVar1 = param_1;
            *(undefined4*)( puVar1 + 1 ) = param_2;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar4, lVar3, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* Voxelizer::get_voxel_gi_level_cell_count() const */void Voxelizer::get_voxel_gi_level_cell_count(void) {
   ushort *puVar1;
   int *piVar2;
   long lVar3;
   undefined8 *puVar4;
   long lVar5;
   long lVar6;
   long in_RSI;
   long in_RDI;
   ulong uVar7;
   ulong uVar8;
   int iVar9;
   lVar6 = *(long*)( in_RSI + 8 );
   if (lVar6 == 0) {
      uVar8 = 0;
   }
 else {
      uVar8 = ( ulong ) * (uint*)( lVar6 + -8 );
   }

   iVar9 = *(int*)( in_RSI + 0x10 );
   *(undefined8*)( in_RDI + 8 ) = 0;
   iVar9 = iVar9 + 1;
   if (iVar9 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
   }
 else if (iVar9 != 0) {
      CowData<int>::_copy_on_write((CowData<int>*)( in_RDI + 8 ));
      uVar7 = (long)iVar9 * 4 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      puVar4 = (undefined8*)Memory::alloc_static(( uVar7 | uVar7 >> 0x20 ) + 0x11, false);
      if (puVar4 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
      }
 else {
         *puVar4 = 1;
         *(undefined8**)( in_RDI + 8 ) = puVar4 + 2;
         puVar4[1] = (long)iVar9;
      }

   }

   CowData<int>::_copy_on_write((CowData<int>*)( in_RDI + 8 ));
   lVar3 = *(long*)( in_RDI + 8 );
   lVar5 = 0;
   if (-1 < *(int*)( in_RSI + 0x10 )) {
      do {
         *(undefined4*)( lVar3 + lVar5 * 4 ) = 0;
         lVar5 = lVar5 + 1;
      }
 while ( (int)lVar5 <= *(int*)( in_RSI + 0x10 ) );
   }

   if ((int)uVar8 != 0) {
      lVar5 = lVar6 + uVar8 * 0x54;
      do {
         puVar1 = (ushort*)( lVar6 + 0x52 );
         lVar6 = lVar6 + 0x54;
         piVar2 = (int*)( lVar3 + ( ulong ) * puVar1 * 4 );
         *piVar2 = *piVar2 + 1;
      }
 while ( lVar6 != lVar5 );
   }

   return;
}
/* Error CowData<Voxelizer::Cell>::resize<false>(long) [clone .isra.0] */void CowData<Voxelizer::Cell>::resize<false>(CowData<Voxelizer::Cell> *this, long param_1) {
   long *plVar1;
   int iVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined4 *puVar6;
   undefined4 *puVar7;
   char *pcVar8;
   undefined8 *puVar9;
   undefined8 uVar10;
   long lVar11;
   CowData<Voxelizer::Cell> *pCVar12;
   long lVar13;
   long lVar14;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar3 = *(long*)this;
   pCVar12 = this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar14 = 0;
      lVar3 = 0;
   }
 else {
      lVar14 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar14) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      lVar3 = lVar14 * 0x54;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   lVar13 = param_1 * 0x54;
   if (lVar13 != 0) {
      uVar4 = lVar13 - 1U | lVar13 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      lVar11 = uVar4 + 1;
      if (lVar11 != 0) {
         if (param_1 <= lVar14) {
            if (( lVar11 != lVar3 ) && ( iVar2 = iVar2 != 0 )) {
               return;
            }

            if (*(long*)this != 0) {
               *(long*)( *(long*)this + -8 ) = param_1;
               return;
            }

            FUN_0010ae7e();
            return;
         }

         if (lVar11 == lVar3) {
            LAB_0010213b:puVar9 = *(undefined8**)this;
            if (puVar9 == (undefined8*)0x0) {
               resize<false>((long)pCVar12);
               return;
            }

            lVar3 = puVar9[-1];
            if (param_1 <= lVar3) goto LAB_001020d4;
         }
 else {
            if (lVar14 != 0) {
               pCVar12 = this;
               iVar2 = _realloc(this, lVar11);
               if (iVar2 != 0) {
                  return;
               }

               goto LAB_0010213b;
            }

            puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               uVar10 = 0x171;
               pcVar8 = "Parameter \"mem_new\" is null.";
               goto LAB_001021d2;
            }

            puVar9 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)this = puVar9;
            lVar3 = 0;
         }

         puVar6 = (undefined4*)( (long)puVar9 + lVar3 * 0x54 );
         do {
            *(undefined8*)( puVar6 + 8 ) = 0;
            puVar7 = puVar6 + 0x15;
            puVar6[10] = 0;
            *(undefined8*)( puVar6 + 0xb ) = 0;
            puVar6[0xd] = 0;
            *(undefined8*)( puVar6 + 0xe ) = 0;
            for (int i = 0; i < 3; i++) {
               puVar6[( i + 16 )] = 0;
            }

            *(undefined8*)( puVar6 + 0x13 ) = 0;
            *puVar6 = 0xffffffff;
            for (int i = 0; i < 7; i++) {
               puVar6[( i + 1 )] = 4294967295;
            }

            puVar6 = puVar7;
         }
 while ( (undefined4*)( lVar13 + (long)puVar9 ) != puVar7 );
         LAB_001020d4:puVar9[-1] = param_1;
         return;
      }

   }

   uVar10 = 0x16a;
   pcVar8 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_001021d2:_err_print_error("resize", "./core/templates/cowdata.h", uVar10, pcVar8, 0, 0);
   return;
}
/* Voxelizer::begin_bake(int, AABB const&, float) */void Voxelizer::begin_bake(Voxelizer *this, int param_1, AABB *param_2, float param_3) {
   long *plVar1;
   float fVar2;
   uint uVar3;
   undefined8 uVar4;
   void *pvVar5;
   long lVar6;
   Object *pOVar7;
   undefined8 uVar8;
   float fVar9;
   double dVar10;
   char cVar11;
   int iVar12;
   int iVar13;
   long lVar14;
   long in_FS_OFFSET;
   float fVar15;
   undefined8 local_108;
   undefined8 uStack_100;
   undefined8 local_f8;
   undefined8 uStack_f0;
   undefined8 local_e8;
   undefined8 uStack_e0;
   undefined1 local_d8[16];
   undefined1 local_c8[16];
   undefined4 local_b8;
   undefined8 local_b4;
   undefined4 local_ac;
   Transform3D local_a8[16];
   undefined1 local_98[16];
   undefined4 local_88;
   undefined8 local_84;
   undefined4 local_7c;
   undefined8 local_78;
   float local_70;
   long local_40;
   uVar4 = *(undefined8*)param_2;
   uVar8 = *(undefined8*)( param_2 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this[0xcc] = (Voxelizer)0x0;
   *(undefined8*)( this + 0x4c ) = uVar4;
   *(undefined8*)( this + 0x54 ) = uVar8;
   uVar4 = *(undefined8*)( param_2 + 0x10 );
   *(int*)( this + 0x10 ) = param_1;
   *(undefined8*)( this + 0x5c ) = uVar4;
   *(float*)( this + 0x48 ) = param_3;
   CowData<Voxelizer::Cell>::resize<false>((CowData<Voxelizer::Cell>*)( this + 8 ), 1);
   if (( *(long*)( this + 0x20 ) != 0 ) && ( *(int*)( this + 0x44 ) != 0 )) {
      lVar14 = 0;
      uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x40 ) * 4 );
      if (uVar3 != 0) {
         do {
            if (*(int*)( *(long*)( this + 0x28 ) + lVar14 ) != 0) {
               *(int*)( *(long*)( this + 0x28 ) + lVar14 ) = 0;
               pvVar5 = *(void**)( *(long*)( this + 0x20 ) + lVar14 * 2 );
               if (*(long*)( (long)pvVar5 + 0x30 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x30 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar6 = *(long*)( (long)pvVar5 + 0x30 );
                     *(undefined8*)( (long)pvVar5 + 0x30 ) = 0;
                     Memory::free_static((void*)( lVar6 + -0x10 ), false);
                  }

               }

               if (*(long*)( (long)pvVar5 + 0x20 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x20 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar6 = *(long*)( (long)pvVar5 + 0x20 );
                     *(undefined8*)( (long)pvVar5 + 0x20 ) = 0;
                     Memory::free_static((void*)( lVar6 + -0x10 ), false);
                  }

               }

               if (*(long*)( (long)pvVar5 + 0x10 ) != 0) {
                  cVar11 = RefCounted::unreference();
                  if (cVar11 != '\0') {
                     pOVar7 = *(Object**)( (long)pvVar5 + 0x10 );
                     cVar11 = predelete_handler(pOVar7);
                     if (cVar11 != '\0') {
                        ( **(code**)( *(long*)pOVar7 + 0x140 ) )();
                        Memory::free_static(pOVar7, false);
                     }

                  }

               }

               Memory::free_static(pvVar5, false);
               *(undefined8*)( *(long*)( this + 0x20 ) + lVar14 * 2 ) = 0;
            }

            lVar14 = lVar14 + 4;
         }
 while ( (ulong)uVar3 << 2 != lVar14 );
      }

      *(undefined4*)( this + 0x44 ) = 0;
      *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   }

   uVar4 = *(undefined8*)( param_2 + 8 );
   *(undefined8*)( this + 100 ) = *(undefined8*)param_2;
   *(undefined8*)( this + 0x6c ) = uVar4;
   *(undefined8*)( this + 0x74 ) = *(undefined8*)( param_2 + 0x10 );
   iVar12 = AABB::get_longest_axis_index();
   dVar10 = _LC53;
   fVar9 = _LC2;
   lVar14 = 0;
   *(int*)( this + (long)iVar12 * 4 + 0x7c ) = 1 << ( ( byte ) * (undefined4*)( this + 0x10 ) & 0x1f );
   *(undefined4*)( this + 200 ) = 0;
   do {
      if (iVar12 != (int)lVar14) {
         fVar2 = *(float*)( this + (long)iVar12 * 4 + 0x70 );
         iVar13 = *(int*)( this + (long)iVar12 * 4 + 0x7c );
         *(int*)( this + lVar14 * 4 + 0x7c ) = iVar13;
         fVar15 = fVar2;
         if ((double)*(float*)( this + lVar14 * 4 + 0x70 ) <= (double)fVar2 * dVar10) {
            do {
               fVar15 = fVar15 * fVar9;
               iVar13 = iVar13 >> 1;
            }
 while ( (double)*(float*)( this + lVar14 * 4 + 0x70 ) <= (double)fVar15 * dVar10 );
            *(int*)( this + lVar14 * 4 + 0x7c ) = iVar13;
         }

         *(float*)( this + lVar14 * 4 + 0x70 ) = fVar2;
      }

      lVar14 = lVar14 + 1;
   }
 while ( lVar14 != 3 );
   local_70 = *(float*)( this + (long)iVar12 * 4 + 0x70 );
   local_d8 = ZEXT416(_LC32);
   local_78 = CONCAT44(local_70, local_70);
   local_b8 = 0x3f800000;
   local_b4 = 0;
   local_ac = 0;
   local_c8 = local_d8;
   Basis::scale(local_d8);
   local_b4 = *(undefined8*)( this + 100 );
   local_a8 = (Transform3D[16])ZEXT416(_LC32);
   local_88 = 0x3f800000;
   local_70 = (float)*(int*)( this + (long)iVar12 * 4 + 0x7c );
   local_ac = *(undefined4*)( this + 0x6c );
   local_84 = 0;
   local_7c = 0;
   local_78 = CONCAT44(local_70, local_70);
   local_98 = (undefined1[16])local_a8;
   Basis::scale(local_a8);
   Transform3D::affine_inverse();
   Transform3D::operator *((Transform3D*)&local_108, local_a8);
   *(undefined8*)( this + 0x88 ) = local_108;
   *(undefined8*)( this + 0x90 ) = uStack_100;
   *(undefined8*)( this + 0x98 ) = local_f8;
   *(undefined8*)( this + 0xa0 ) = uStack_f0;
   *(undefined8*)( this + 0xa8 ) = local_e8;
   *(undefined8*)( this + 0xb0 ) = uStack_e0;
   *(float*)( this + 0xc0 ) = *(float*)( this + (long)iVar12 * 4 + 0x70 ) / (float)*(int*)( this + (long)iVar12 * 4 + 0x7c );
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Voxelizer::_plot_face(int, int, int, int, int, Vector3 const*, Vector3 const*, Vector2 const*,
   Voxelizer::MaterialCache const&, AABB const&) */void Voxelizer::_plot_face(Voxelizer *this, int param_1, int param_2, int param_3, int param_4, int param_5, Vector3 *param_6, Vector3 *param_7, Vector2 *param_8, MaterialCache *param_9, AABB *param_10) {
   CowData<Voxelizer::Cell> *pCVar1;
   uint uVar2;
   int iVar3;
   code *pcVar4;
   undefined1 auVar5[12];
   char cVar6;
   int iVar7;
   int iVar8;
   int iVar9;
   long lVar10;
   float *pfVar11;
   int iVar12;
   long lVar13;
   long lVar14;
   int iVar15;
   ulong uVar16;
   uint uVar17;
   int iVar18;
   long lVar19;
   int iVar20;
   long in_FS_OFFSET;
   ushort in_FPUStatusWord;
   float fVar21;
   uint uVar22;
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
   uint uVar36;
   float fVar37;
   float fVar38;
   float fVar39;
   float fVar40;
   float fVar41;
   float fVar42;
   float fVar43;
   float fVar44;
   float fVar45;
   float fVar46;
   float fVar47;
   float fVar48;
   float fVar49;
   float fVar50;
   float fVar51;
   float fVar52;
   float fVar53;
   float fVar54;
   float fVar55;
   float fVar56;
   float fVar57;
   float fVar58;
   float fVar59;
   float fVar60;
   float fVar61;
   float fVar62;
   float fVar63;
   float fVar64;
   float fVar65;
   float fVar66;
   undefined1 auVar67[12];
   float local_1b0;
   float local_164;
   float local_160;
   float local_140;
   float local_13c;
   float local_124;
   float local_120;
   float local_11c;
   float local_118;
   float local_114;
   float local_110;
   float local_10c;
   float local_108;
   float local_104;
   float local_100;
   float local_e8[4];
   float local_d8[4];
   float local_c8[4];
   undefined8 local_b8;
   float local_b0;
   float local_a8[4];
   undefined8 local_98;
   float local_90;
   undefined1 local_88[8];
   float local_80;
   float local_78[4];
   float local_68[4];
   float fStack_58;
   float fStack_54;
   undefined8 local_50;
   undefined4 local_48;
   long local_40;
   uVar17 = _LC54;
   fVar24 = _UNK_0010ef2c;
   fVar23 = _LC2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x10 ) != param_2) {
      uVar17 = 0;
      iVar7 = ( 1 << ( ( byte ) * (int*)( this + 0x10 ) & 0x1f ) ) >> ( ( byte )(param_2 + 1) & 0x1f );
      do {
         fStack_58 = (float)*(undefined8*)( param_10 + 0x10 );
         local_68[0] = (float)*(undefined8*)param_10;
         local_68[1] = (float)( ( ulong ) * (undefined8*)param_10 >> 0x20 );
         local_68[2] = (float)*(undefined8*)( param_10 + 8 );
         local_68[3] = (float)( ( ulong ) * (undefined8*)( param_10 + 8 ) >> 0x20 );
         fStack_54 = (float)( ( ulong ) * (undefined8*)( param_10 + 0x10 ) >> 0x20 ) * fVar24;
         local_68[3] = local_68[3] * fVar23;
         fVar26 = fStack_58 * fVar24;
         iVar18 = param_3;
         if (( uVar17 & 1 ) != 0) {
            iVar18 = iVar7 + param_3;
            local_68[0] = local_68[0] + local_68[3];
         }

         iVar20 = param_4;
         if (( uVar17 & 2 ) != 0) {
            iVar20 = iVar7 + param_4;
            local_68[1] = fVar26 + local_68[1];
         }

         iVar15 = param_5;
         if (( uVar17 & 4 ) != 0) {
            local_68[2] = fStack_54 + local_68[2];
            iVar15 = iVar7 + param_5;
         }

         if (( ( ( -1 < iVar18 ) && ( iVar18 < *(int*)( this + 0x7c ) ) ) && ( -1 < iVar20 ) ) && ( ( ( iVar20 < *(int*)( this + 0x80 ) && ( -1 < iVar15 ) ) && ( iVar15 < *(int*)( this + 0x84 ) ) ) )) {
            fVar28 = fStack_58 * fVar23 * fVar23;
            fVar30 = fStack_54 * fVar24;
            fVar25 = local_68[1] + fVar28;
            fVar27 = local_68[2] + fVar30;
            fVar32 = (float)*(undefined8*)( param_6 + 4 ) - fVar25;
            fVar35 = (float)( ( ulong ) * (undefined8*)( param_6 + 4 ) >> 0x20 ) - fVar27;
            fVar29 = (float)*(undefined8*)( param_6 + 0x10 ) - fVar25;
            fVar31 = (float)( ( ulong ) * (undefined8*)( param_6 + 0x10 ) >> 0x20 ) - fVar27;
            fVar25 = *(float*)( param_6 + 0x1c ) - fVar25;
            fVar45 = fVar29 - fVar32;
            fVar48 = fVar31 - fVar35;
            fVar27 = *(float*)( param_6 + 0x20 ) - fVar27;
            fVar46 = fVar48 * fVar32 - fVar45 * fVar35;
            fVar54 = fVar48 * fVar25 - fVar45 * fVar27;
            fVar64 = fVar46;
            if (fVar46 < fVar54) {
               fVar64 = fVar54;
               fVar54 = fVar46;
            }

            fVar46 = ABS(fVar48) * fVar28 + ABS(fVar45) * fVar30;
            if (( fVar54 <= fVar46 ) && ( (float)( (uint)fVar46 ^ _LC54 ) <= fVar64 )) {
               fVar21 = local_68[3] * _LC2;
               fVar37 = local_68[0] + fVar21;
               fVar64 = *(float*)( param_6 + 0x18 ) - fVar37;
               fVar47 = *(float*)( param_6 + 0xc ) - fVar37;
               fVar37 = *(float*)param_6 - fVar37;
               fVar65 = fVar47 - fVar37;
               fVar46 = fVar37 * (float)( (uint)fVar48 ^ _LC54 ) + fVar65 * fVar35;
               fVar38 = (float)( (uint)fVar48 ^ _LC54 ) * fVar64 + fVar65 * fVar27;
               fVar54 = fVar38;
               if (fVar46 < fVar38) {
                  fVar54 = fVar46;
                  fVar46 = fVar38;
               }

               fVar38 = ABS(fVar48) * fVar21 + ABS(fVar65) * fVar30;
               if (( fVar54 <= fVar38 ) && ( (float)( (uint)fVar38 ^ _LC54 ) <= fVar46 )) {
                  fVar46 = fVar45 * fVar47 - fVar65 * fVar29;
                  fVar38 = fVar45 * fVar64 - fVar65 * fVar25;
                  fVar54 = fVar38;
                  if (fVar38 < fVar46) {
                     fVar54 = fVar46;
                     fVar46 = fVar38;
                  }

                  fVar38 = ABS(fVar65) * fVar28 + ABS(fVar45) * fVar21;
                  if (( fVar46 <= fVar38 ) && ( (float)( (uint)fVar38 ^ _LC54 ) <= fVar54 )) {
                     fVar60 = fVar25 - fVar29;
                     fVar38 = fVar27 - fVar31;
                     fVar61 = fVar38 * fVar32 - fVar60 * fVar35;
                     fVar46 = fVar38 * fVar25 - fVar60 * fVar27;
                     fVar54 = fVar61;
                     if (fVar61 < fVar46) {
                        fVar54 = fVar46;
                        fVar46 = fVar61;
                     }

                     fVar61 = ABS(fVar38) * fVar28 + ABS(fVar60) * fVar30;
                     if (( fVar46 <= fVar61 ) && ( (float)( (uint)fVar61 ^ _LC54 ) <= fVar54 )) {
                        fVar66 = fVar64 - fVar47;
                        fVar46 = fVar37 * (float)( (uint)fVar38 ^ _LC54 ) + fVar66 * fVar35;
                        fVar61 = fVar66 * fVar27 + (float)( (uint)fVar38 ^ _LC54 ) * fVar64;
                        fVar54 = fVar61;
                        if (fVar46 < fVar61) {
                           fVar54 = fVar46;
                           fVar46 = fVar61;
                        }

                        fVar61 = ABS(fVar38) * fVar21 + ABS(fVar66) * fVar30;
                        if (( fVar54 <= fVar61 ) && ( (float)( (uint)fVar61 ^ _LC54 ) <= fVar46 )) {
                           fVar46 = fVar60 * fVar37 - fVar66 * fVar32;
                           fVar61 = fVar60 * fVar47 - fVar66 * fVar29;
                           fVar54 = fVar61;
                           if (fVar46 < fVar61) {
                              fVar54 = fVar46;
                              fVar46 = fVar61;
                           }

                           fVar61 = ABS(fVar66) * fVar28 + ABS(fVar60) * fVar21;
                           if (( fVar54 <= fVar61 ) && ( (float)( (uint)fVar61 ^ _LC54 ) <= fVar46 )) {
                              fVar61 = fVar35 - fVar27;
                              fVar55 = fVar32 - fVar25;
                              fVar62 = fVar61 * fVar32 - fVar55 * fVar35;
                              fVar46 = fVar61 * fVar29 - fVar55 * fVar31;
                              fVar54 = fVar62;
                              if (fVar62 < fVar46) {
                                 fVar54 = fVar46;
                                 fVar46 = fVar62;
                              }

                              fVar62 = ABS(fVar61) * fVar28 + ABS(fVar55) * fVar30;
                              if (( fVar46 <= fVar62 ) && ( (float)( (uint)fVar62 ^ _LC54 ) <= fVar54 )) {
                                 fVar62 = fVar37 - fVar64;
                                 fVar46 = fVar37 * (float)( (uint)fVar61 ^ _LC54 ) + fVar62 * fVar35;
                                 fVar63 = fVar62 * fVar31 + (float)( (uint)fVar61 ^ _LC54 ) * fVar47;
                                 fVar54 = fVar63;
                                 if (fVar46 < fVar63) {
                                    fVar54 = fVar46;
                                    fVar46 = fVar63;
                                 }

                                 fVar61 = ABS(fVar61) * fVar21 + ABS(fVar62) * fVar30;
                                 if (( fVar54 <= fVar61 ) && ( (float)( (uint)fVar61 ^ _LC54 ) <= fVar46 )) {
                                    fVar46 = fVar55 * fVar47 - fVar62 * fVar29;
                                    fVar61 = fVar55 * fVar64 - fVar62 * fVar25;
                                    fVar54 = fVar61;
                                    if (fVar61 < fVar46) {
                                       fVar54 = fVar46;
                                       fVar46 = fVar61;
                                    }

                                    fVar61 = ABS(fVar62) * fVar28 + ABS(fVar55) * fVar21;
                                    if (( fVar46 <= fVar61 ) && ( (float)( (uint)fVar61 ^ _LC54 ) <= fVar54 )) {
                                       fVar54 = fVar47;
                                       fVar46 = fVar37;
                                       if (( fVar37 <= fVar47 ) && ( fVar54= fVar37,fVar46 = fVar47,fVar47 <= fVar37 )) {
                                          fVar46 = fVar37;
                                       }

                                       fVar47 = fVar64;
                                       if (fVar64 <= fVar46) {
                                          fVar47 = fVar46;
                                       }

                                       if (fVar54 <= fVar64) {
                                          fVar64 = fVar54;
                                       }

                                       if (( fVar64 <= fVar21 ) && ( (float)( (uint)fVar21 ^ _LC54 ) <= fVar47 )) {
                                          fVar54 = fVar32;
                                          fVar64 = fVar29;
                                          if (( fVar32 <= fVar29 ) && ( fVar64 = fVar32 < fVar29 )) {
                                             fVar54 = fVar29;
                                          }

                                          fVar29 = fVar25;
                                          if (fVar25 <= fVar54) {
                                             fVar29 = fVar54;
                                          }

                                          if (fVar64 <= fVar25) {
                                             fVar25 = fVar64;
                                          }

                                          if (( fVar25 <= fVar28 ) && ( (float)( (uint)fVar28 ^ _LC54 ) <= fVar29 )) {
                                             fVar64 = fVar35;
                                             fVar25 = fVar31;
                                             if (( fVar35 <= fVar31 ) && ( fVar25 = fVar35 < fVar31 )) {
                                                fVar64 = fVar31;
                                             }

                                             fVar54 = fVar27;
                                             if (fVar27 <= fVar64) {
                                                fVar54 = fVar64;
                                             }

                                             if (fVar25 <= fVar27) {
                                                fVar27 = fVar25;
                                             }

                                             if (( fVar27 <= fVar30 ) && ( (float)( (uint)fVar30 ^ _LC54 ) <= fVar54 )) {
                                                local_88 = (undefined1[8])0x0;
                                                local_80 = 0.0;
                                                local_78[2] = 0.0;
                                                lVar10 = 0;
                                                local_a8[2] = fVar30;
                                                local_b0 = fVar65 * fVar60 - fVar45 * fVar66;
                                                local_78[0] = 0.0;
                                                local_78[1] = 0.0;
                                                local_90 = local_b0;
                                                fVar27 = fVar38 * fVar45 - fVar48 * fVar60;
                                                fVar64 = fVar66 * fVar48 - fVar65 * fVar38;
                                                local_b8 = CONCAT44(fVar64, fVar27);
                                                local_98 = local_b8;
                                                fVar25 = fVar37 * fVar27 + fVar32 * fVar64 + fVar35 * local_b0;
                                                local_a8[0] = fVar21;
                                                local_a8[1] = _LC2 * fStack_58 * _LC2;
                                                do {
                                                   uVar2 = *(uint*)( (long)local_a8 + lVar10 );
                                                   uVar22 = uVar2;
                                                   uVar36 = uVar2 ^ _LC54;
                                                   if (*(float*)( (long)&local_98 + lVar10 ) <= 0.0) {
                                                      uVar22 = uVar2 ^ _LC54;
                                                      uVar36 = uVar2;
                                                   }

                                                   *(uint*)( (long)local_78 + lVar10 ) = uVar22;
                                                   *(uint*)( local_88 + lVar10 ) = uVar36;
                                                   auVar5._8_4_ = local_80;
                                                   auVar5._0_8_ = local_88;
                                                   auVar67._8_4_ = local_80;
                                                   auVar67._0_8_ = local_88;
                                                   lVar10 = lVar10 + 4;
                                                }
 while ( lVar10 != 0xc );
                                                if (( (float)local_88._0_4_ * fVar27 + (float)local_88._4_4_ * fVar64 + local_80 * local_b0 ) - fVar25 <= 0.0) {
                                                   if (0.0 <= ( fVar27 * local_78[0] + fVar64 * local_78[1] + local_b0 * local_78[2] ) - fVar25) {
                                                      lVar13 = (long)param_1;
                                                      lVar10 = *(long*)( this + 8 );
                                                      fStack_58 = fVar26;
                                                      if (lVar13 < 0) {
                                                         if (lVar10 != 0) {
                                                            uVar16 = *(ulong*)( lVar10 + -8 );
                                                            _local_88 = auVar5;
                                                            goto LAB_00104ec7;
                                                         }

                                                      }
 else if (lVar10 != 0) {
                                                         uVar16 = *(ulong*)( lVar10 + -8 );
                                                         _local_88 = auVar67;
                                                         if ((long)uVar16 <= lVar13) goto LAB_00104ec7;
                                                         lVar19 = lVar13 * 0x54;
                                                         lVar14 = (long)(int)uVar17 * 4;
                                                         if (*(int*)( lVar10 + lVar14 + lVar19 ) != -1) {
                                                            LAB_0010303e:uVar16 = *(ulong*)( lVar10 + -8 );
                                                            if (lVar13 < (long)uVar16) {
                                                               _plot_face(this, *(int*)( lVar10 + (long)(int)uVar17 * 4 + lVar19 ), param_2 + 1, iVar18, iVar20, iVar15, param_6, param_7, param_8, param_9, (AABB*)local_68);
                                                               fVar26 = fStack_58;
                                                               goto LAB_001030b0;
                                                            }

                                                            goto LAB_00104ec7;
                                                         }

                                                         pCVar1 = (CowData<Voxelizer::Cell>*)( this + 8 );
                                                         CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                                                         lVar10 = *(long*)( this + 8 );
                                                         *(int*)( lVar14 + lVar10 + lVar19 ) = (int)uVar16;
                                                         if (lVar10 == 0) {
                                                            lVar10 = 0;
                                                         }
 else {
                                                            lVar10 = *(long*)( lVar10 + -8 );
                                                         }

                                                         CowData<Voxelizer::Cell>::resize<false>(pCVar1, lVar10 + 1);
                                                         uVar16 = uVar16 & 0xffffffff;
                                                         if (*(long*)( this + 8 ) != 0) {
                                                            lVar10 = *(long*)( *(long*)( this + 8 ) + -8 );
                                                            if (lVar10 <= (long)uVar16) goto LAB_001048d1;
                                                            CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                                                            lVar10 = *(long*)( this + 8 );
                                                            lVar14 = uVar16 * 0x54;
                                                            *(short*)( lVar10 + 0x52 + lVar14 ) = (short)param_2 + 1;
                                                            if (lVar10 != 0) {
                                                               lVar10 = *(long*)( lVar10 + -8 );
                                                               if (lVar10 <= (long)uVar16) goto LAB_001048d1;
                                                               CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                                                               lVar10 = *(long*)( this + 8 );
                                                               *(short*)( lVar10 + 0x4c + lVar14 ) = (short)( iVar18 / iVar7 );
                                                               if (lVar10 != 0) {
                                                                  lVar10 = *(long*)( lVar10 + -8 );
                                                                  if (lVar10 <= (long)uVar16) goto LAB_001048d1;
                                                                  CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                                                                  lVar10 = *(long*)( this + 8 );
                                                                  *(short*)( lVar10 + 0x4e + lVar14 ) = (short)( iVar20 / iVar7 );
                                                                  if (lVar10 != 0) {
                                                                     lVar10 = *(long*)( lVar10 + -8 );
                                                                     if ((long)uVar16 < lVar10) {
                                                                        CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                                                                        *(short*)( *(long*)( this + 8 ) + 0x50 + lVar14 ) = (short)( iVar15 / iVar7 );
                                                                        lVar10 = *(long*)( this + 8 );
                                                                        if (lVar10 == 0) goto LAB_00105152;
                                                                        goto LAB_0010303e;
                                                                     }

                                                                     goto LAB_001048d1;
                                                                  }

                                                               }

                                                            }

                                                         }

                                                         lVar10 = 0;
                                                         goto LAB_001048d1;
                                                      }

                                                      LAB_00105152:uVar16 = 0;
                                                      goto LAB_00104ec7;
                                                   }

                                                }

                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

         LAB_001030b0:fStack_58 = fVar26;
         uVar17 = uVar17 + 1;
      }
 while ( uVar17 != 8 );
      goto LAB_001030bc;
   }

   fVar23 = *(float*)( param_6 + 4 );
   fVar24 = *(float*)( param_6 + 8 );
   fVar26 = *(float*)param_6;
   local_78[2] = ( fVar23 - *(float*)( param_6 + 0x10 ) ) * ( fVar26 - *(float*)( param_6 + 0x18 ) ) - ( fVar23 - *(float*)( param_6 + 0x1c ) ) * ( fVar26 - *(float*)( param_6 + 0xc ) );
   local_13c = ( fVar26 - *(float*)( param_6 + 0xc ) ) * ( fVar24 - *(float*)( param_6 + 0x20 ) ) - ( fVar26 - *(float*)( param_6 + 0x18 ) ) * ( fVar24 - *(float*)( param_6 + 0x14 ) );
   local_140 = ( fVar23 - *(float*)( param_6 + 0x1c ) ) * ( fVar24 - *(float*)( param_6 + 0x14 ) ) - ( fVar24 - *(float*)( param_6 + 0x20 ) ) * ( fVar23 - *(float*)( param_6 + 0x10 ) );
   fVar25 = local_140 * local_140 + local_13c * local_13c + local_78[2] * local_78[2];
   if (fVar25 == 0.0) {
      for (int i = 0; i < 3; i++) {
         local_78[i] = 0;
      }

      local_13c = 0.0;
      local_140 = 0.0;
   }
 else {
      fVar25 = SQRT(fVar25);
      local_140 = local_140 / fVar25;
      local_13c = local_13c / fVar25;
      local_78[2] = local_78[2] / fVar25;
      local_78[1] = local_13c;
      local_78[0] = local_140;
   }

   fVar25 = local_78[2];
   lVar13 = 0;
   lVar10 = 0;
   local_78[3] = fVar26 * local_140 + fVar23 * local_13c + fVar24 * local_78[2];
   fVar23 = 0.0;
   while (true) {
      while (true) {
         for (int i = 0; i < 3; i++) {
            local_68[i] = 0;
         }

         local_68[lVar13] = 1.0;
         fVar26 = _UNK_0010ef2c;
         fVar24 = _LC2;
         fVar27 = local_13c * 0.0 + local_140 * 0.0 + local_78[2] * 0.0;
         if (fVar27 < 0.0) {
            fVar27 = (float)( (uint)fVar27 ^ uVar17 );
         }

         if (lVar13 != 0) break;
         lVar13 = 1;
         lVar10 = 0;
         fVar23 = fVar27;
      }
;
      if (fVar23 < fVar27) {
         lVar10 = lVar13;
         fVar23 = fVar27;
      }

      if (lVar13 == 2) break;
      lVar13 = 2;
   }
;
   iVar18 = (int)lVar10;
   for (int i = 0; i < 3; i++) {
      local_d8[i] = 0;
   }

   for (int i = 0; i < 3; i++) {
      local_c8[i] = 0;
   }

   for (int i = 0; i < 3; i++) {
      local_e8[i] = 0;
   }

   local_e8[iVar18] = 1.0;
   lVar10 = (long)(int)( ( iVar18 + 1U ) % 3 );
   fVar23 = *(float*)( param_10 + lVar10 * 4 + 0xc );
   local_d8[lVar10] = 1.0;
   iVar7 = *(int*)( this + 0xb8 );
   lVar10 = (long)(int)( ( iVar18 + 2U ) % 3 );
   local_c8[lVar10] = 1.0;
   fVar23 = fVar23 / (float)iVar7;
   fVar28 = local_d8[0] * fVar23;
   fVar29 = local_d8[1] * fVar23;
   fVar23 = local_d8[2] * fVar23;
   fVar27 = *(float*)( param_10 + lVar10 * 4 + 0xc ) / (float)iVar7;
   fVar64 = local_c8[0] * fVar27;
   fVar54 = local_c8[1] * fVar27;
   fVar27 = local_c8[2] * fVar27;
   if (iVar7 < 1) {
      LAB_001047ab:local_68[0] = (float)*(undefined8*)param_6;
      local_68[1] = (float)( ( ulong ) * (undefined8*)param_6 >> 0x20 );
      local_68[2] = *(float*)( param_6 + 8 );
      local_68[3] = (float)*(undefined8*)( param_6 + 0xc );
      fStack_58 = (float)( ( ulong ) * (undefined8*)( param_6 + 0xc ) >> 0x20 );
      fStack_54 = *(float*)( param_6 + 0x14 );
      local_90 = _LC2 * *(float*)( param_10 + 0x14 ) + *(float*)( param_10 + 8 );
      local_50 = *(undefined8*)( param_6 + 0x18 );
      local_98 = CONCAT44((float)( ( ulong ) * (undefined8*)( param_10 + 0xc ) >> 0x20 ) * fVar26 + (float)( ( ulong ) * (undefined8*)param_10 >> 0x20 ), (float)*(undefined8*)( param_10 + 0xc ) * fVar24 + (float)*(undefined8*)param_10);
      local_48 = *(undefined4*)( param_6 + 0x20 );
      auVar67 = Face3::get_closest_point_to((Vector3*)local_68);
      _local_88 = auVar67;
      cVar6 = Vector3::is_equal_approx(local_88);
      if (cVar6 == '\0') {
         cVar6 = Vector3::is_equal_approx(local_88);
         if (cVar6 == '\0') {
            cVar6 = Vector3::is_equal_approx(local_88);
            if (cVar6 == '\0') {
               fVar23 = *(float*)( param_6 + 4 );
               fVar24 = *(float*)param_6;
               fVar26 = *(float*)( param_6 + 8 );
               fVar29 = *(float*)( param_6 + 0x10 ) - fVar23;
               fVar54 = *(float*)( param_6 + 0xc ) - fVar24;
               fVar28 = *(float*)( param_6 + 0x14 ) - fVar26;
               fVar35 = *(float*)( param_6 + 0x1c ) - fVar23;
               fVar27 = *(float*)( param_6 + 0x18 ) - fVar24;
               fVar32 = *(float*)( param_6 + 0x20 ) - fVar26;
               fVar30 = fVar54 * fVar54 + fVar29 * fVar29 + fVar28 * fVar28;
               fVar31 = fVar54 * fVar27 + fVar29 * fVar35 + fVar28 * fVar32;
               fVar25 = fVar27 * fVar27 + fVar35 * fVar35 + fVar32 * fVar32;
               fVar64 = fVar30 * fVar25 - fVar31 * fVar31;
               if (fVar64 == 0.0) goto LAB_0010493f;
               fVar54 = fVar54 * ( (float)local_88._0_4_ - fVar24 ) + fVar29 * ( (float)local_88._4_4_ - fVar23 ) + fVar28 * ( local_80 - fVar26 );
               fVar23 = fVar27 * ( (float)local_88._0_4_ - fVar24 ) + fVar35 * ( (float)local_88._4_4_ - fVar23 ) + fVar32 * ( local_80 - fVar26 );
               fVar26 = ( fVar25 * fVar54 - fVar31 * fVar23 ) / fVar64;
               fVar64 = ( fVar23 * fVar30 - fVar54 * fVar31 ) / fVar64;
               fVar25 = ( _LC32 - fVar26 ) - fVar64;
               fVar24 = *(float*)( param_8 + 0xc ) * fVar26 + *(float*)( param_8 + 4 ) * fVar25 + *(float*)( param_8 + 0x14 ) * fVar64;
               fVar23 = *(float*)( param_8 + 8 ) * fVar26 + *(float*)param_8 * fVar25 + *(float*)( param_8 + 0x10 ) * fVar64;
               local_1b0 = *(float*)( param_7 + 0x14 ) * fVar26 + *(float*)( param_7 + 8 ) * fVar25 + *(float*)( param_7 + 0x20 ) * fVar64;
               local_108 = *(float*)( param_7 + 0x10 ) * fVar26 + *(float*)( param_7 + 4 ) * fVar25 + *(float*)( param_7 + 0x1c ) * fVar64;
               local_11c = fVar26 * *(float*)( param_7 + 0xc ) + fVar25 * *(float*)param_7 + fVar64 * *(float*)( param_7 + 0x18 );
               fVar26 = local_11c * local_11c + local_108 * local_108 + local_1b0 * local_1b0;
               if (fVar26 == 0.0) {
                  local_1b0 = 0.0;
                  local_108 = 0.0;
                  local_11c = 0.0;
               }
 else {
                  fVar26 = SQRT(fVar26);
                  local_11c = local_11c / fVar26;
                  local_108 = local_108 / fVar26;
                  local_1b0 = local_1b0 / fVar26;
               }

            }
 else {
               fVar23 = *(float*)( param_8 + 0x10 );
               fVar24 = *(float*)( param_8 + 0x14 );
               local_11c = *(float*)( param_7 + 0x18 );
               local_108 = *(float*)( param_7 + 0x1c );
               local_1b0 = *(float*)( param_7 + 0x20 );
            }

         }
 else {
            fVar23 = *(float*)( param_8 + 8 );
            fVar24 = *(float*)( param_8 + 0xc );
            local_11c = *(float*)( param_7 + 0xc );
            local_108 = *(float*)( param_7 + 0x10 );
            local_1b0 = *(float*)( param_7 + 0x14 );
         }

      }
 else {
         LAB_0010493f:fVar23 = *(float*)param_8;
         fVar24 = *(float*)( param_8 + 4 );
         local_11c = *(float*)param_7;
         local_108 = *(float*)( param_7 + 4 );
         local_1b0 = *(float*)( param_7 + 8 );
      }

      iVar7 = *(int*)( this + 0xbc );
      fVar26 = fVar23;
      do {
         fVar26 = fVar26 - ( fVar26 / 1.0 ) * 1.0;
      }
 while ( ( in_FPUStatusWord & 0x400 ) != 0 );
      if (NAN(fVar26)) {
         fmodf(fVar23, _LC32);
         fVar23 = ( fVar26 + 0.0 ) * (float)iVar7;
         LAB_00104c22:iVar18 = (int)fVar23;
      }
 else {
         if (fVar26 < 0.0) {
            fVar26 = fVar26 + _LC32;
         }

         iVar18 = 0;
         fVar23 = ( fVar26 + 0.0 ) * (float)iVar7;
         if (0.0 <= fVar23) {
            fVar26 = (float)( iVar7 + -1 );
            if (fVar23 <= fVar26) goto LAB_00104c22;
            iVar18 = (int)fVar26;
         }

      }

      fVar23 = fVar24;
      do {
         fVar23 = fVar23 - ( fVar23 / 1.0 ) * 1.0;
      }
 while ( ( in_FPUStatusWord & 0x400 ) != 0 );
      if (NAN(fVar23)) {
         fmodf(fVar24, _LC32);
         fVar23 = (float)iVar7 * ( fVar23 + 0.0 );
         LAB_00104bb6:iVar18 = iVar18 + (int)fVar23 * iVar7;
      }
 else {
         if (fVar23 < 0.0) {
            fVar23 = fVar23 + _LC32;
         }

         fVar23 = (float)iVar7 * ( fVar23 + 0.0 );
         if (0.0 <= fVar23) {
            fVar24 = (float)( iVar7 + -1 );
            if (fVar23 <= fVar24) goto LAB_00104bb6;
            iVar18 = iVar18 + (int)fVar24 * iVar7;
         }

      }

      lVar13 = (long)iVar18;
      lVar10 = *(long*)( param_9 + 8 );
      local_124 = (float)( _LC56 / (double)( *(int*)( this + 0xb8 ) * *(int*)( this + 0xb8 ) ) );
      if (lVar13 < 0) {
         LAB_00104ea3:if (lVar10 != 0) {
            LAB_00104ea8:uVar16 = *(ulong*)( lVar10 + -8 );
            goto LAB_00104ec7;
         }

      }
 else if (lVar10 != 0) {
         uVar16 = *(ulong*)( lVar10 + -8 );
         if ((long)uVar16 <= lVar13) goto LAB_00104ec7;
         pfVar11 = (float*)( lVar10 + lVar13 * 0x10 );
         local_118 = *pfVar11 * local_124;
         local_120 = pfVar11[1] * local_124;
         local_10c = local_124 * pfVar11[2];
         lVar10 = *(long*)( param_9 + 0x18 );
         if (lVar10 != 0) {
            uVar16 = *(ulong*)( lVar10 + -8 );
            if ((long)uVar16 <= lVar13) goto LAB_00104ec7;
            pfVar11 = (float*)( lVar10 + lVar13 * 0x10 );
            local_1b0 = local_1b0 * local_124;
            local_100 = *pfVar11 * local_124;
            local_108 = local_108 * local_124;
            local_11c = local_11c * local_124;
            local_104 = pfVar11[1] * local_124;
            local_114 = pfVar11[2] * local_124;
            goto LAB_001044f3;
         }

      }

      LAB_00104eea:uVar16 = 0;
      LAB_00104ec7:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar13, uVar16, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   iVar20 = 0;
   local_110 = 0.0;
   local_108 = 0.0;
   local_120 = 0.0;
   local_10c = 0.0;
   local_100 = 0.0;
   local_104 = 0.0;
   local_114 = 0.0;
   local_11c = 0.0;
   local_124 = 0.0;
   local_118 = 0.0;
   do {
      fVar32 = local_e8[2];
      fVar31 = local_e8[1];
      fVar30 = local_e8[0];
      iVar15 = 0;
      fVar35 = (float)iVar20;
      do {
         fVar56 = (float)iVar15;
         fVar45 = *(float*)( param_10 + (long)iVar18 * 4 + 0xc );
         fVar66 = fVar45 * fVar31;
         fVar49 = fVar45 * fVar32;
         fVar65 = (float)*(undefined8*)( param_10 + 4 ) + fVar35 * fVar29 + fVar56 * fVar54;
         fVar60 = (float)( ( ulong ) * (undefined8*)( param_10 + 4 ) >> 0x20 ) + fVar35 * fVar23 + fVar56 * fVar27;
         fVar38 = ( ( fVar29 + fVar65 + fVar54 + fVar66 ) - fVar65 ) * fVar24;
         fVar47 = ( ( fVar23 + fVar60 + fVar27 + fVar49 ) - fVar60 ) * fVar26;
         fVar46 = fVar38 + fVar65;
         fVar48 = fVar47 + fVar60;
         fVar63 = (float)*(undefined8*)( param_6 + 0x10 ) - fVar46;
         fVar44 = (float)( ( ulong ) * (undefined8*)( param_6 + 0x10 ) >> 0x20 ) - fVar48;
         fVar61 = (float)*(undefined8*)( param_6 + 4 ) - fVar46;
         fVar55 = (float)( ( ulong ) * (undefined8*)( param_6 + 4 ) >> 0x20 ) - fVar48;
         fVar52 = fVar63 - fVar61;
         fVar53 = fVar44 - fVar55;
         fVar48 = *(float*)( param_6 + 0x20 ) - fVar48;
         fVar46 = *(float*)( param_6 + 0x1c ) - fVar46;
         fVar37 = fVar61 * fVar53 - fVar52 * fVar55;
         fVar62 = fVar46 * fVar53 - fVar48 * fVar52;
         fVar21 = fVar62;
         if (fVar37 < fVar62) {
            fVar21 = fVar37;
            fVar37 = fVar62;
         }

         fVar62 = ABS(fVar53) * fVar38 + ABS(fVar52) * fVar47;
         if (( fVar21 <= fVar62 ) && ( (float)( (uint)fVar62 ^ _LC54 ) <= fVar37 )) {
            fVar57 = fVar30 * fVar45;
            fVar33 = *(float*)param_10 + fVar35 * fVar28 + fVar56 * fVar64;
            fVar21 = ( ( fVar28 + fVar33 + fVar64 + fVar57 ) - fVar33 ) * _LC2;
            fVar37 = fVar33 + fVar21;
            fVar34 = *(float*)param_6 - fVar37;
            fVar58 = *(float*)( param_6 + 0xc ) - fVar37;
            fVar37 = *(float*)( param_6 + 0x18 ) - fVar37;
            fVar59 = fVar58 - fVar34;
            fVar56 = fVar59 * fVar55 + fVar34 * (float)( (uint)fVar53 ^ _LC54 );
            fVar50 = (float)( (uint)fVar53 ^ _LC54 ) * fVar37 + fVar59 * fVar48;
            fVar62 = fVar50;
            if (fVar56 < fVar50) {
               fVar62 = fVar56;
               fVar56 = fVar50;
            }

            fVar50 = ABS(fVar53) * fVar21 + ABS(fVar59) * fVar47;
            if (( fVar62 <= fVar50 ) && ( (float)( (uint)fVar50 ^ _LC54 ) <= fVar56 )) {
               fVar56 = fVar58 * fVar52 - fVar59 * fVar63;
               fVar50 = fVar37 * fVar52 - fVar59 * fVar46;
               fVar62 = fVar50;
               if (fVar50 < fVar56) {
                  fVar62 = fVar56;
                  fVar56 = fVar50;
               }

               fVar50 = ABS(fVar52) * fVar21 + ABS(fVar59) * fVar38;
               if (( fVar56 <= fVar50 ) && ( (float)( (uint)fVar50 ^ _LC54 ) <= fVar62 )) {
                  fVar50 = fVar48 - fVar44;
                  fVar39 = fVar46 - fVar63;
                  fVar40 = fVar50 * fVar61 - fVar39 * fVar55;
                  fVar56 = fVar50 * fVar46 - fVar39 * fVar48;
                  fVar62 = fVar40;
                  if (fVar40 < fVar56) {
                     fVar62 = fVar56;
                     fVar56 = fVar40;
                  }

                  fVar40 = ABS(fVar39) * fVar47 + ABS(fVar50) * fVar38;
                  if (( fVar56 <= fVar40 ) && ( (float)( (uint)fVar40 ^ _LC54 ) <= fVar62 )) {
                     fVar40 = fVar37 - fVar58;
                     fVar56 = fVar34 * (float)( (uint)fVar50 ^ _LC54 ) + fVar40 * fVar55;
                     fVar41 = fVar40 * fVar48 + (float)( (uint)fVar50 ^ _LC54 ) * fVar37;
                     fVar62 = fVar41;
                     if (fVar56 < fVar41) {
                        fVar62 = fVar56;
                        fVar56 = fVar41;
                     }

                     fVar41 = ABS(fVar40) * fVar47 + ABS(fVar50) * fVar21;
                     if (( fVar62 <= fVar41 ) && ( (float)( (uint)fVar41 ^ _LC54 ) <= fVar56 )) {
                        fVar56 = fVar39 * fVar34 - fVar40 * fVar61;
                        fVar41 = fVar39 * fVar58 - fVar40 * fVar63;
                        fVar62 = fVar41;
                        if (fVar56 < fVar41) {
                           fVar62 = fVar56;
                           fVar56 = fVar41;
                        }

                        fVar41 = ABS(fVar39) * fVar21 + ABS(fVar40) * fVar38;
                        if (( fVar62 <= fVar41 ) && ( (float)( (uint)fVar41 ^ _LC54 ) <= fVar56 )) {
                           fVar42 = fVar55 - fVar48;
                           fVar41 = fVar61 - fVar46;
                           fVar51 = fVar42 * fVar61 - fVar41 * fVar55;
                           fVar56 = fVar42 * fVar63 - fVar41 * fVar44;
                           fVar62 = fVar51;
                           if (fVar51 < fVar56) {
                              fVar62 = fVar56;
                              fVar56 = fVar51;
                           }

                           fVar51 = ABS(fVar42) * fVar38 + ABS(fVar41) * fVar47;
                           if (( fVar56 <= fVar51 ) && ( (float)( (uint)fVar51 ^ _LC54 ) <= fVar62 )) {
                              fVar51 = fVar34 - fVar37;
                              fVar43 = fVar34 * (float)( (uint)fVar42 ^ _LC54 ) + fVar51 * fVar55;
                              fVar56 = fVar58 * (float)( (uint)fVar42 ^ _LC54 ) + fVar51 * fVar44;
                              fVar62 = fVar43;
                              if (fVar43 < fVar56) {
                                 fVar62 = fVar56;
                                 fVar56 = fVar43;
                              }

                              fVar42 = ABS(fVar51) * fVar47 + ABS(fVar42) * fVar21;
                              if (( fVar56 <= fVar42 ) && ( (float)( (uint)fVar42 ^ _LC54 ) <= fVar62 )) {
                                 fVar42 = fVar41 * fVar58 - fVar51 * fVar63;
                                 fVar56 = fVar41 * fVar37 - fVar51 * fVar46;
                                 fVar62 = fVar42;
                                 if (fVar56 < fVar42) {
                                    fVar62 = fVar56;
                                    fVar56 = fVar42;
                                 }

                                 fVar41 = ABS(fVar51) * fVar38 + ABS(fVar41) * fVar21;
                                 if (( fVar62 <= fVar41 ) && ( (float)( (uint)fVar41 ^ _LC54 ) <= fVar56 )) {
                                    fVar56 = fVar34;
                                    fVar62 = fVar58;
                                    if (( fVar34 <= fVar58 ) && ( fVar62 = fVar34 < fVar58 )) {
                                       fVar56 = fVar58;
                                    }

                                    fVar58 = fVar37;
                                    if (fVar62 <= fVar37) {
                                       fVar58 = fVar62;
                                    }

                                    if (fVar37 <= fVar56) {
                                       fVar37 = fVar56;
                                    }

                                    if (( fVar58 <= fVar21 ) && ( (float)( (uint)fVar21 ^ _LC54 ) <= fVar37 )) {
                                       fVar37 = fVar63;
                                       local_164 = fVar61;
                                       if (( fVar61 <= fVar63 ) && ( fVar37= fVar61,local_164 = fVar63,fVar63 <= fVar61 )) {
                                          local_164 = fVar61;
                                       }

                                       fVar62 = fVar46;
                                       if (fVar46 <= local_164) {
                                          fVar62 = local_164;
                                       }

                                       if (fVar37 <= fVar46) {
                                          fVar46 = fVar37;
                                       }

                                       if (( fVar46 <= fVar38 ) && ( (float)( (uint)fVar38 ^ _LC54 ) <= fVar62 )) {
                                          fVar46 = fVar55;
                                          local_160 = fVar44;
                                          if (( fVar55 <= fVar44 ) && ( local_160 = fVar55 < fVar44 )) {
                                             fVar46 = fVar44;
                                          }

                                          fVar37 = fVar48;
                                          if (local_160 <= fVar48) {
                                             fVar37 = local_160;
                                          }

                                          if (fVar48 <= fVar46) {
                                             fVar48 = fVar46;
                                          }

                                          if (( fVar37 <= fVar47 ) && ( (float)( (uint)fVar47 ^ _LC54 ) <= fVar48 )) {
                                             for (int i = 0; i < 3; i++) {
                                                local_68[i] = 0;
                                             }

                                             local_a8[1] = fVar38;
                                             local_a8[2] = fVar47;
                                             local_b0 = fVar59 * fVar39 - fVar40 * fVar52;
                                             local_90 = local_b0;
                                             fVar46 = fVar50 * fVar52 - fVar39 * fVar53;
                                             fVar48 = fVar40 * fVar53 - fVar59 * fVar50;
                                             local_b8 = CONCAT44(fVar48, fVar46);
                                             local_98 = local_b8;
                                             fVar37 = fVar61 * fVar48 + fVar34 * fVar46 + fVar55 * local_b0;
                                             lVar10 = 0;
                                             while (true) {
                                                fVar38 = fVar21;
                                                fVar47 = (float)( (uint)fVar21 ^ _LC54 );
                                                if (*(float*)( (long)&local_98 + lVar10 ) <= 0.0) {
                                                   fVar38 = (float)( (uint)fVar21 ^ _LC54 );
                                                   fVar47 = fVar21;
                                                }

                                                *(float*)( (long)local_68 + lVar10 ) = fVar38;
                                                *(float*)( local_88 + lVar10 ) = fVar47;
                                                if (lVar10 + 4 == 0xc) break;
                                                fVar21 = *(float*)( (long)local_a8 + lVar10 + 4 );
                                                lVar10 = lVar10 + 4;
                                             }
;
                                             _local_88 = ZEXT812(0);
                                             if (( ( fVar48 * 0.0 + fVar46 * 0.0 + local_b0 * 0.0 ) - fVar37 <= 0.0 ) && ( _local_88 = ZEXT812(0) ),0.0 <= ( fVar48 * 0.0 + fVar46 * 0.0 + local_b0 * 0.0 ) - fVar37) {
                                                fVar45 = fVar45 * fVar31;
                                                fVar66 = ( ( fVar29 + fVar54 ) * _LC2 + fVar65 ) - fVar66;
                                                fVar48 = ( ( fVar64 + fVar28 ) * _LC2 + fVar33 ) - fVar57;
                                                fVar46 = ( ( fVar23 + fVar27 ) * _LC2 + fVar60 ) - fVar49;
                                                local_90 = fVar49 + fVar49 + fVar46;
                                                fVar21 = fVar57 + fVar57 + fVar48;
                                                fVar45 = fVar45 + fVar45 + fVar66;
                                                local_98 = CONCAT44(fVar45, fVar21);
                                                local_a8[0] = fVar48;
                                                local_a8[1] = fVar66;
                                                local_a8[2] = fVar46;
                                                if (( fVar46 - local_90 ) * fVar25 + ( fVar48 - fVar21 ) * local_140 + ( fVar66 - fVar45 ) * local_13c < 0.0) {
                                                   local_98 = CONCAT44(fVar66, fVar48);
                                                   local_a8[0] = fVar21;
                                                   local_a8[1] = fVar45;
                                                   local_a8[2] = local_90;
                                                   local_90 = fVar46;
                                                   local_68[0] = fVar48;
                                                   local_68[1] = fVar66;
                                                   local_68[2] = fVar46;
                                                }

                                                local_88 = (undefined1[8])0x0;
                                                local_80 = 0.0;
                                                cVar6 = Plane::intersects_segment((Vector3*)local_78, (Vector3*)local_a8, (Vector3*)&local_98);
                                                if (cVar6 == '\0') {
                                                   fVar21 = SUB84(local_78._0_8_, 4);
                                                   fVar48 = ( local_78[2] * local_a8[2] + local_a8[1] * fVar21 + local_a8[0] * local_78[0] ) - local_78[3];
                                                   fVar46 = (float)( (ulong)local_98 >> 0x20 );
                                                   fVar45 = ( fVar46 * fVar21 + local_78[0] * (float)local_98 + local_90 * local_78[2] ) - local_78[3];
                                                   if ((float)( ( (uint)fVar45 ^ _LC54 ) & -(uint)(fVar45 < 0.0) | ~-(uint)(fVar45 < 0.0) & (uint)fVar45 ) <= (float)( ( (uint)fVar48 ^ _LC54 ) & -(uint)(fVar48 < 0.0) | ~-(uint)(fVar48 < 0.0) & (uint)fVar48 )) {
                                                      local_80 = local_90 - fVar45 * local_78[2];
                                                      local_88 = (undefined1[8])CONCAT44(fVar46 - fVar45 * fVar21, (float)local_98 - fVar45 * local_78[0]);
                                                   }
 else {
                                                      local_80 = local_a8[2] - fVar48 * local_78[2];
                                                      local_88 = (undefined1[8])CONCAT44(local_a8[1] - fVar48 * fVar21, local_a8[0] - fVar48 * local_78[0]);
                                                   }

                                                }

                                                local_68[0] = (float)*(undefined8*)param_6;
                                                local_68[1] = (float)( ( ulong ) * (undefined8*)param_6 >> 0x20 );
                                                local_68[2] = *(float*)( param_6 + 8 );
                                                local_68[3] = (float)*(undefined8*)( param_6 + 0xc );
                                                fStack_58 = (float)( ( ulong ) * (undefined8*)( param_6 + 0xc ) >> 0x20 );
                                                fStack_54 = *(float*)( param_6 + 0x14 );
                                                local_50 = *(undefined8*)( param_6 + 0x18 );
                                                local_48 = *(undefined4*)( param_6 + 0x20 );
                                                _local_88 = Face3::get_closest_point_to((Vector3*)local_68);
                                                cVar6 = Vector3::is_equal_approx(local_88);
                                                if (cVar6 == '\0') {
                                                   cVar6 = Vector3::is_equal_approx(local_88);
                                                   if (cVar6 != '\0') {
                                                      fVar45 = *(float*)( param_8 + 8 );
                                                      fVar46 = *(float*)( param_8 + 0xc );
                                                      fVar48 = *(float*)( param_7 + 0xc );
                                                      fVar21 = *(float*)( param_7 + 0x10 );
                                                      fVar37 = *(float*)( param_7 + 0x14 );
                                                      goto LAB_001041bc;
                                                   }

                                                   cVar6 = Vector3::is_equal_approx(local_88);
                                                   if (cVar6 != '\0') {
                                                      fVar45 = *(float*)( param_8 + 0x10 );
                                                      fVar46 = *(float*)( param_8 + 0x14 );
                                                      fVar48 = *(float*)( param_7 + 0x18 );
                                                      fVar21 = *(float*)( param_7 + 0x1c );
                                                      fVar37 = *(float*)( param_7 + 0x20 );
                                                      goto LAB_001041bc;
                                                   }

                                                   fVar45 = *(float*)( param_6 + 4 );
                                                   fVar46 = *(float*)param_6;
                                                   fVar48 = *(float*)( param_6 + 8 );
                                                   fVar37 = *(float*)( param_6 + 0x10 ) - fVar45;
                                                   fVar60 = *(float*)( param_6 + 0xc ) - fVar46;
                                                   fVar65 = *(float*)( param_6 + 0x14 ) - fVar48;
                                                   fVar47 = *(float*)( param_6 + 0x1c ) - fVar45;
                                                   fVar62 = *(float*)( param_6 + 0x20 ) - fVar48;
                                                   fVar21 = *(float*)( param_6 + 0x18 ) - fVar46;
                                                   fVar61 = fVar37 * fVar37 + fVar60 * fVar60 + fVar65 * fVar65;
                                                   fVar66 = fVar37 * fVar47 + fVar60 * fVar21 + fVar65 * fVar62;
                                                   fVar55 = fVar47 * fVar47 + fVar21 * fVar21 + fVar62 * fVar62;
                                                   fVar38 = fVar61 * fVar55 - fVar66 * fVar66;
                                                   if (fVar38 == 0.0) goto LAB_001055e3;
                                                   fVar21 = fVar62 * ( local_80 - fVar48 ) + fVar21 * ( (float)local_88._0_4_ - fVar46 ) + fVar47 * ( (float)local_88._4_4_ - fVar45 );
                                                   fVar45 = fVar37 * ( (float)local_88._4_4_ - fVar45 ) + fVar60 * ( (float)local_88._0_4_ - fVar46 ) + fVar65 * ( local_80 - fVar48 );
                                                   fVar48 = ( fVar55 * fVar45 - fVar66 * fVar21 ) / fVar38;
                                                   fVar38 = ( fVar61 * fVar21 - fVar66 * fVar45 ) / fVar38;
                                                   fVar21 = ( _LC32 - fVar48 ) - fVar38;
                                                   fVar46 = *(float*)( param_8 + 0xc ) * fVar48 + *(float*)( param_8 + 4 ) * fVar21 + *(float*)( param_8 + 0x14 ) * fVar38;
                                                   fVar45 = *(float*)( param_8 + 8 ) * fVar48 + *(float*)param_8 * fVar21 + *(float*)( param_8 + 0x10 ) * fVar38;
                                                   fVar65 = *(float*)( param_7 + 0x14 ) * fVar48 + *(float*)( param_7 + 8 ) * fVar21 + *(float*)( param_7 + 0x20 ) * fVar38;
                                                   fVar60 = *(float*)( param_7 + 4 ) * fVar21 + *(float*)( param_7 + 0x10 ) * fVar48 + *(float*)( param_7 + 0x1c ) * fVar38;
                                                   fVar38 = fVar48 * *(float*)( param_7 + 0xc ) + fVar21 * *(float*)param_7 + fVar38 * *(float*)( param_7 + 0x18 );
                                                   fVar47 = fVar38 * fVar38 + fVar60 * fVar60 + fVar65 * fVar65;
                                                   fVar48 = local_140;
                                                   fVar37 = fVar25;
                                                   fVar21 = local_13c;
                                                   if (fVar47 != 0.0) {
                                                      fVar37 = sqrtf(fVar47);
                                                      fVar48 = fVar38 / fVar37;
                                                      fVar21 = fVar60 / fVar37;
                                                      fVar37 = fVar65 / fVar37;
                                                      goto LAB_001041bc;
                                                   }

                                                }
 else {
                                                   LAB_001055e3:fVar45 = *(float*)param_8;
                                                   fVar46 = *(float*)( param_8 + 4 );
                                                   fVar48 = *(float*)param_7;
                                                   fVar21 = *(float*)( param_7 + 4 );
                                                   fVar37 = *(float*)( param_7 + 8 );
                                                   LAB_001041bc:if (( ( fVar48 == 0.0 ) && ( fVar21 == 0.0 ) ) && ( fVar37 == 0.0 )) {
                                                      fVar48 = local_140;
                                                      fVar37 = fVar25;
                                                      fVar21 = local_13c;
                                                   }

                                                }

                                                iVar3 = *(int*)( this + 0xbc );
                                                iVar7 = iVar3 + -1;
                                                fVar38 = fVar45;
                                                do {
                                                   fVar38 = fVar38 - ( fVar38 / 1.0 ) * 1.0;
                                                }
 while ( ( in_FPUStatusWord & 0x400 ) != 0 );
                                                if (NAN(fVar38)) {
                                                   fmodf(fVar45, _LC32);
                                                }
 else if (fVar38 < 0.0) {
                                                   fVar38 = fVar38 + _LC32;
                                                }

                                                iVar8 = (int)( ( fVar38 + 0.0 ) * (float)iVar3 );
                                                iVar9 = iVar8;
                                                if (iVar7 <= iVar8) {
                                                   iVar9 = iVar7;
                                                }

                                                fVar45 = fVar46;
                                                iVar12 = 0;
                                                if (-1 < iVar8) {
                                                   iVar12 = iVar9;
                                                }

                                                do {
                                                   fVar45 = fVar45 - ( fVar45 / 1.0 ) * 1.0;
                                                }
 while ( ( in_FPUStatusWord & 0x400 ) != 0 );
                                                if (NAN(fVar45)) {
                                                   fmodf(fVar46, _LC32);
                                                }
 else if (fVar45 < 0.0) {
                                                   fVar45 = fVar45 + _LC32;
                                                }

                                                iVar9 = (int)( ( fVar45 + 0.0 ) * (float)iVar3 );
                                                if (-1 < iVar9) {
                                                   if (iVar7 <= iVar9) {
                                                      iVar9 = iVar7;
                                                   }

                                                   iVar12 = iVar12 + iVar9 * iVar3;
                                                }

                                                lVar13 = (long)iVar12;
                                                lVar10 = *(long*)( param_9 + 8 );
                                                if (lVar13 < 0) goto LAB_00104ea3;
                                                if (lVar10 == 0) goto LAB_00104eea;
                                                if (*(long*)( lVar10 + -8 ) <= lVar13) goto LAB_00104ea8;
                                                pfVar11 = (float*)( lVar10 + lVar13 * 0x10 );
                                                local_118 = local_118 + *pfVar11;
                                                local_120 = local_120 + pfVar11[1];
                                                local_10c = local_10c + pfVar11[2];
                                                lVar10 = *(long*)( param_9 + 0x18 );
                                                if (lVar10 == 0) goto LAB_00104eea;
                                                uVar16 = *(ulong*)( lVar10 + -8 );
                                                if ((long)uVar16 <= lVar13) goto LAB_00104ec7;
                                                pfVar11 = (float*)( lVar10 + lVar13 * 0x10 );
                                                local_11c = fVar48 + local_11c;
                                                local_108 = fVar21 + local_108;
                                                local_100 = local_100 + *pfVar11;
                                                local_110 = fVar37 + local_110;
                                                local_104 = local_104 + pfVar11[1];
                                                local_114 = local_114 + pfVar11[2];
                                                iVar7 = *(int*)( this + 0xb8 );
                                                local_124 = _LC32 + local_124;
                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

         iVar15 = iVar15 + 1;
      }
 while ( iVar15 < iVar7 );
      iVar20 = iVar20 + 1;
   }
 while ( iVar20 < iVar7 );
   if (local_124 == 0.0) goto LAB_001047ab;
   local_1b0 = (float)( _LC56 / (double)( iVar7 * iVar7 ) );
   local_120 = local_120 * local_1b0;
   local_124 = local_124 * local_1b0;
   local_10c = local_10c * local_1b0;
   local_118 = local_118 * local_1b0;
   local_100 = local_100 * local_1b0;
   local_104 = local_104 * local_1b0;
   local_114 = local_114 * local_1b0;
   local_11c = local_11c * local_1b0;
   local_108 = local_108 * local_1b0;
   local_1b0 = local_1b0 * local_110;
   LAB_001044f3:uVar16 = (ulong)param_1;
   lVar10 = *(long*)( this + 8 );
   if ((long)uVar16 < 0) {
      if (lVar10 != 0) {
         lVar10 = *(long*)( lVar10 + -8 );
         goto LAB_001048d1;
      }

   }
 else if (lVar10 != 0) {
      lVar10 = *(long*)( lVar10 + -8 );
      if (lVar10 <= (long)uVar16) goto LAB_001048d1;
      pCVar1 = (CowData<Voxelizer::Cell>*)( this + 8 );
      CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
      lVar10 = *(long*)( this + 8 );
      lVar13 = uVar16 * 0x54;
      *(float*)( lVar10 + lVar13 + 0x20 ) = local_118 + *(float*)( lVar10 + lVar13 + 0x20 );
      if (lVar10 != 0) {
         lVar10 = *(long*)( lVar10 + -8 );
         if (lVar10 <= (long)uVar16) goto LAB_001048d1;
         CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
         lVar10 = *(long*)( this + 8 );
         *(float*)( lVar10 + lVar13 + 0x24 ) = local_120 + *(float*)( lVar10 + lVar13 + 0x24 );
         if (lVar10 != 0) {
            lVar10 = *(long*)( lVar10 + -8 );
            if (lVar10 <= (long)uVar16) goto LAB_001048d1;
            CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
            lVar10 = *(long*)( this + 8 );
            *(float*)( lVar10 + lVar13 + 0x28 ) = local_10c + *(float*)( lVar10 + lVar13 + 0x28 );
            if (lVar10 != 0) {
               lVar10 = *(long*)( lVar10 + -8 );
               if (lVar10 <= (long)uVar16) goto LAB_001048d1;
               CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
               lVar10 = *(long*)( this + 8 );
               *(float*)( lVar10 + lVar13 + 0x2c ) = local_100 + *(float*)( lVar10 + lVar13 + 0x2c );
               if (lVar10 != 0) {
                  lVar10 = *(long*)( lVar10 + -8 );
                  if (lVar10 <= (long)uVar16) goto LAB_001048d1;
                  CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                  lVar10 = *(long*)( this + 8 );
                  *(float*)( lVar10 + lVar13 + 0x30 ) = local_104 + *(float*)( lVar10 + lVar13 + 0x30 );
                  if (lVar10 != 0) {
                     lVar10 = *(long*)( lVar10 + -8 );
                     if (lVar10 <= (long)uVar16) goto LAB_001048d1;
                     CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                     lVar10 = *(long*)( this + 8 );
                     *(float*)( lVar10 + lVar13 + 0x34 ) = local_114 + *(float*)( lVar10 + lVar13 + 0x34 );
                     if (lVar10 != 0) {
                        lVar10 = *(long*)( lVar10 + -8 );
                        if (lVar10 <= (long)uVar16) goto LAB_001048d1;
                        CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                        lVar10 = *(long*)( this + 8 );
                        *(float*)( lVar10 + lVar13 + 0x38 ) = local_11c + *(float*)( lVar10 + lVar13 + 0x38 );
                        if (lVar10 != 0) {
                           lVar10 = *(long*)( lVar10 + -8 );
                           if (lVar10 <= (long)uVar16) goto LAB_001048d1;
                           CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                           lVar10 = *(long*)( this + 8 );
                           *(float*)( lVar10 + lVar13 + 0x3c ) = local_108 + *(float*)( lVar10 + lVar13 + 0x3c );
                           if (lVar10 != 0) {
                              lVar10 = *(long*)( lVar10 + -8 );
                              if (lVar10 <= (long)uVar16) goto LAB_001048d1;
                              CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                              lVar10 = *(long*)( this + 8 );
                              *(float*)( lVar10 + lVar13 + 0x40 ) = local_1b0 + *(float*)( lVar10 + lVar13 + 0x40 );
                              if (lVar10 != 0) {
                                 lVar10 = *(long*)( lVar10 + -8 );
                                 if ((long)uVar16 < lVar10) {
                                    CowData<Voxelizer::Cell>::_copy_on_write(pCVar1);
                                    *(float*)( lVar13 + *(long*)( this + 8 ) + 0x48 ) = local_124 + *(float*)( lVar13 + *(long*)( this + 8 ) + 0x48 );
                                    LAB_001030bc:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                                       return;
                                    }

                                    /* WARNING: Subroutine does not return */
                                    __stack_chk_fail();
                                 }

                                 goto LAB_001048d1;
                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   lVar10 = 0;
   LAB_001048d1:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, uVar16, lVar10, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar4 = (code*)invalidInstructionException();
   ( *pcVar4 )();
}
/* Voxelizer::_get_bake_texture(Ref<Image>, Color const&, Color const&) */long Voxelizer::_get_bake_texture(long param_1, long param_2, long *param_3, float *param_4, float *param_5) {
   long *plVar1;
   undefined8 *puVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   code *pcVar9;
   undefined8 uVar10;
   char cVar11;
   long lVar12;
   Image *pIVar13;
   long lVar14;
   long lVar15;
   Image *pIVar16;
   long lVar17;
   long in_FS_OFFSET;
   double dVar18;
   double dVar19;
   double dVar20;
   double dVar21;
   double dVar22;
   Object *local_58;
   long local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( param_1 + 8 ) = 0;
   if (( *param_3 == 0 ) || ( cVar11 = cVar11 != '\0' )) {
      CowData<Color>::resize<false>((CowData<Color>*)( param_1 + 8 ), (long)( *(int*)( param_2 + 0xbc ) * *(int*)( param_2 + 0xbc ) ));
      if (*(int*)( param_2 + 0xbc ) * *(int*)( param_2 + 0xbc ) != 0) {
         lVar15 = *(long*)( param_1 + 8 );
         lVar17 = 0;
         do {
            if (lVar15 == 0) {
               lVar12 = 0;
               LAB_0010574a:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar17, lVar12, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar9 = (code*)invalidInstructionException();
               ( *pcVar9 )();
            }

            lVar12 = *(long*)( lVar15 + -8 );
            if (lVar12 <= lVar17) goto LAB_0010574a;
            CowData<Color>::_copy_on_write((CowData<Color>*)( param_1 + 8 ));
            lVar15 = *(long*)( param_1 + 8 );
            uVar10 = *(undefined8*)( param_5 + 2 );
            lVar12 = lVar17 * 0x10;
            lVar17 = lVar17 + 1;
            puVar2 = (undefined8*)( lVar15 + lVar12 );
            *puVar2 = *(undefined8*)param_5;
            puVar2[1] = uVar10;
         }
 while ( (int)lVar17 < *(int*)( param_2 + 0xbc ) * *(int*)( param_2 + 0xbc ) );
      }

      goto LAB_001059e0;
   }

   ( **(code**)( *(long*)*param_3 + 0x198 ) )(&local_58, (long*)*param_3, 0);
   if (local_58 == (Object*)0x0) {
      pIVar16 = (Image*)*param_3;
      if (pIVar16 != (Image*)0x0) {
         *param_3 = 0;
         goto LAB_00105a73;
      }

   }
 else {
      pIVar13 = (Image*)__dynamic_cast(local_58, &Object::typeinfo, &Image::typeinfo, 0);
      pIVar16 = (Image*)*param_3;
      if (pIVar16 != pIVar13) {
         *param_3 = (long)pIVar13;
         if (pIVar13 == (Image*)0x0) {
            if (pIVar16 != (Image*)0x0) goto LAB_00105a73;
         }
 else {
            cVar11 = RefCounted::reference();
            if (cVar11 == '\0') {
               *param_3 = 0;
            }

            if (pIVar16 != (Image*)0x0) {
               LAB_00105a73:cVar11 = RefCounted::unreference();
               if (cVar11 != '\0') {
                  memdelete<Image>(pIVar16);
               }

            }

            if (local_58 == (Object*)0x0) goto LAB_00105801;
         }

      }

      cVar11 = RefCounted::unreference();
      if (( cVar11 != '\0' ) && ( cVar11 = cVar11 != '\0' )) {
         ( **(code**)( *(long*)local_58 + 0x140 ) )();
         Memory::free_static(local_58, false);
      }

   }

   LAB_00105801:cVar11 = Image::is_compressed();
   if (cVar11 != '\0') {
      Image::decompress();
   }

   Image::convert(*param_3, 5);
   Image::resize(*param_3, *(undefined4*)( param_2 + 0xbc ), *(undefined4*)( param_2 + 0xbc ), 2);
   Image::get_data();
   lVar15 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar15 + -0x10 ), false);
      }

   }

   CowData<Color>::resize<false>((CowData<Color>*)( param_1 + 8 ), (long)( *(int*)( param_2 + 0xbc ) * *(int*)( param_2 + 0xbc ) ));
   if (*(int*)( param_2 + 0xbc ) * *(int*)( param_2 + 0xbc ) != 0) {
      lVar12 = *(long*)( param_1 + 8 );
      lVar17 = 0;
      dVar21 = _LC58;
      do {
         fVar3 = *param_4;
         fVar4 = param_4[1];
         dVar18 = (double)*(byte*)( lVar15 + lVar17 * 4 ) / dVar21;
         fVar5 = *param_5;
         dVar19 = (double)*(byte*)( lVar15 + 1 + lVar17 * 4 ) / dVar21;
         fVar6 = param_5[1];
         fVar7 = param_4[2];
         dVar20 = (double)*(byte*)( lVar15 + 2 + lVar17 * 4 ) / dVar21;
         fVar8 = param_5[2];
         dVar22 = (double)*(byte*)( lVar15 + 3 + lVar17 * 4 ) / dVar21;
         if (lVar12 == 0) {
            lVar12 = 0;
            goto LAB_0010574a;
         }

         lVar12 = *(long*)( lVar12 + -8 );
         if (lVar12 <= lVar17) goto LAB_0010574a;
         CowData<Color>::_copy_on_write((CowData<Color>*)( param_1 + 8 ));
         dVar21 = _LC58;
         lVar12 = *(long*)( param_1 + 8 );
         lVar14 = lVar17 * 0x10;
         lVar17 = lVar17 + 1;
         puVar2 = (undefined8*)( lVar12 + lVar14 );
         *puVar2 = CONCAT44((float)( dVar19 * (double)fVar4 + (double)fVar6 ), (float)( dVar18 * (double)fVar3 + (double)fVar5 ));
         puVar2[1] = CONCAT44((float)dVar22, (float)( dVar20 * (double)fVar7 + (double)fVar8 ));
      }
 while ( (int)lVar17 < *(int*)( param_2 + 0xbc ) * *(int*)( param_2 + 0xbc ) );
   }

   LAB_001059e0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Voxelizer::_get_material_cache(Ref<Material>) */long Voxelizer::_get_material_cache(undefined8 param_1, undefined8 param_2, long param_3, long param_4, Ref *param_5) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   Image *pIVar9;
   char cVar10;
   bool bVar11;
   int iVar12;
   Object *pOVar13;
   Object *pOVar14;
   long lVar15;
   ulong uVar16;
   long lVar17;
   uint uVar18;
   Color *this;
   uint uVar19;
   uint uVar20;
   ulong uVar21;
   Image *pIVar22;
   Image *pIVar23;
   long lVar24;
   long in_FS_OFFSET;
   float fVar25;
   HashMap<Ref<Material>,Voxelizer::MaterialCache,HashMapHasherDefault,HashMapComparatorDefault<Ref<Material>>,DefaultTypedAllocator<HashMapElement<Ref<Material>,Voxelizer::MaterialCache>>> *local_110;
   float local_dc;
   Object *local_d8;
   Object *local_d0;
   Object *local_c8;
   Image *local_c0;
   Image *local_b8;
   long local_b0[2];
   long local_a0[2];
   long local_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined4 local_78;
   undefined4 uStack_74;
   undefined4 uStack_70;
   undefined4 uStack_6c;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)param_5 == 0) {
      lVar15 = *(long*)( param_4 + 0x20 );
      local_d8 = (Object*)0x0;
      if (( lVar15 != 0 ) && ( *(int*)( param_4 + 0x44 ) != 0 )) {
         pOVar14 = (Object*)0x0;
         pOVar13 = (Object*)0x0;
         LAB_00105be9:uVar16 = (long)pOVar14 * 0x3ffff - 1;
         uVar16 = ( uVar16 ^ uVar16 >> 0x1f ) * 0x15;
         uVar21 = ( uVar16 >> 0xb ^ uVar16 ) * 0x41;
         uVar21 = uVar21 >> 0x16 ^ uVar21;
         uVar16 = uVar21 & 0xffffffff;
         if ((int)uVar21 == 0) {
            uVar16 = 1;
         }

         uVar20 = (uint)uVar16;
         goto LAB_00105c36;
      }

      LAB_001066e8:local_d8 = (Object*)0x0;
      pOVar14 = (Object*)0x0;
      LAB_00106199:local_90 = 0;
      local_a0[0] = 0;
      local_c0 = (Image*)0x0;
      local_58 = CONCAT44(_LC32, _LC32);
      uStack_50 = CONCAT44(_LC32, _LC32);
      local_68 = CONCAT44(_UNK_0010ef94, __LC36);
      uStack_60 = CONCAT44(_UNK_0010ef9c, _UNK_0010ef98);
      _get_bake_texture(&local_b8, param_4, &local_c0);
      if (local_b0[0] != 0) {
         CowData<Color>::_unref((CowData<Color>*)local_a0);
         local_a0[0] = local_b0[0];
         local_b0[0] = 0;
      }

      CowData<Color>::_unref((CowData<Color>*)local_b0);
      pIVar22 = local_c0;
      if (( local_c0 != (Image*)0x0 ) && ( cVar10 = cVar10 != '\0' )) {
         memdelete<Image>(pIVar22);
      }

      local_c0 = (Image*)0x0;
      local_58 = CONCAT44(_UNK_0010ef94, __LC36);
      uStack_50 = CONCAT44(_UNK_0010ef9c, _UNK_0010ef98);
      local_68 = CONCAT44(_UNK_0010ef94, __LC36);
      uStack_60 = CONCAT44(_UNK_0010ef9c, _UNK_0010ef98);
      _get_bake_texture(&local_b8, param_4, &local_c0, &local_68, &local_58);
      lVar15 = local_b0[0];
      if (local_90 != local_b0[0]) {
         CowData<Color>::_unref((CowData<Color>*)&local_90);
         local_90 = lVar15;
         local_b0[0] = 0;
      }

      CowData<Color>::_unref((CowData<Color>*)local_b0);
      pIVar22 = local_c0;
      if (( local_c0 != (Image*)0x0 ) && ( cVar10 = cVar10 != '\0' )) {
         memdelete<Image>(pIVar22);
      }

      pOVar13 = (Object*)0x0;
      goto LAB_001062e1;
   }

   pOVar13 = (Object*)__dynamic_cast(*(long*)param_5, &Object::typeinfo, &BaseMaterial3D::typeinfo, 0);
   if (( pOVar13 == (Object*)0x0 ) || ( cVar10 = cVar10 == '\0' )) {
      local_d8 = (Object*)0x0;
      lVar15 = *(long*)( param_4 + 0x20 );
      if (( lVar15 == 0 ) || ( *(int*)( param_4 + 0x44 ) == 0 )) goto LAB_001066e8;
      uVar16 = 0x2aeaa2ab;
      uVar20 = 0x2aeaa2ab;
      pOVar14 = (Object*)0x0;
      pOVar13 = (Object*)0x0;
      LAB_00105c36:local_110 = (HashMap<Ref<Material>,Voxelizer::MaterialCache,HashMapHasherDefault,HashMapComparatorDefault<Ref<Material>>,DefaultTypedAllocator<HashMapElement<Ref<Material>,Voxelizer::MaterialCache>>>*)( param_4 + 0x18 );
      uVar21 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_4 + 0x40 ) * 4 ));
      lVar24 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_4 + 0x40 ) * 8 );
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar16 * lVar24;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar21;
      lVar17 = SUB168(auVar1 * auVar5, 8);
      uVar18 = *(uint*)( *(long*)( param_4 + 0x28 ) + lVar17 * 4 );
      iVar12 = SUB164(auVar1 * auVar5, 8);
      if (uVar18 != 0) {
         uVar19 = 0;
         do {
            if (( uVar20 == uVar18 ) && ( *(Object**)( *(long*)( lVar15 + lVar17 * 8 ) + 0x10 ) == pOVar14 )) {
               lVar15 = HashMap<Ref<Material>,Voxelizer::MaterialCache,HashMapHasherDefault,HashMapComparatorDefault<Ref<Material>>,DefaultTypedAllocator<HashMapElement<Ref<Material>,Voxelizer::MaterialCache>>>::operator [](local_110, (Ref*)&local_d8);
               *(undefined8*)( param_3 + 8 ) = 0;
               if (*(long*)( lVar15 + 8 ) != 0) {
                  CowData<Color>::_ref((CowData<Color>*)( param_3 + 8 ), (CowData*)( lVar15 + 8 ));
               }

               *(undefined8*)( param_3 + 0x18 ) = 0;
               if (*(long*)( lVar15 + 0x18 ) != 0) {
                  CowData<Color>::_ref((CowData<Color>*)( param_3 + 0x18 ), (CowData*)( lVar15 + 0x18 ));
               }

               goto LAB_00105d36;
            }

            uVar19 = uVar19 + 1;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = ( ulong )(iVar12 + 1) * lVar24;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar21;
            lVar17 = SUB168(auVar2 * auVar6, 8);
            uVar18 = *(uint*)( *(long*)( param_4 + 0x28 ) + lVar17 * 4 );
            iVar12 = SUB164(auVar2 * auVar6, 8);
         }
 while ( ( uVar18 != 0 ) && ( auVar3._8_8_ = 0 ),auVar3._0_8_ = (ulong)uVar18 * lVar24,auVar7._8_8_ = 0,auVar7._0_8_ = uVar21,auVar4._8_8_ = 0,auVar4._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_4 + 0x40 ) * 4 ) + iVar12 ) - SUB164(auVar3 * auVar7, 8)) * lVar24,auVar8._8_8_ = 0,auVar8._0_8_ = uVar21,uVar19 <= SUB164(auVar4 * auVar8, 8) );
      }

      if (pOVar13 == (Object*)0x0) goto LAB_00106199;
   }
 else {
      local_d8 = (Object*)0x0;
      pOVar14 = (Object*)__dynamic_cast(pOVar13, &Object::typeinfo, &Material::typeinfo, 0);
      if (pOVar14 == (Object*)0x0) {
         LAB_00105d99:pOVar14 = (Object*)0x0;
      }
 else {
         local_d8 = pOVar14;
         cVar10 = RefCounted::reference();
         if (cVar10 == '\0') {
            local_d8 = (Object*)0x0;
            goto LAB_00105d99;
         }

      }

      lVar15 = *(long*)( param_4 + 0x20 );
      if (( lVar15 != 0 ) && ( *(int*)( param_4 + 0x44 ) != 0 )) goto LAB_00105be9;
   }

   local_90 = 0;
   local_a0[0] = 0;
   BaseMaterial3D::get_texture(&local_d0, pOVar13, 0);
   if (local_d0 == (Object*)0x0) {
      local_58 = BaseMaterial3D::get_albedo();
      local_c0 = (Image*)0x0;
      local_68 = CONCAT44(_LC32, _LC32);
      uStack_60 = CONCAT44(_LC32, _LC32);
      pIVar22 = (Image*)0x0;
      uStack_50 = param_2;
   }
 else {
      if (( *(code**)( *(long*)local_d0 + 0x210 ) == Texture2D::get_image ) || ( ( **(code**)( *(long*)local_d0 + 0x210 ) )(&local_b8, local_d0),pIVar22 = local_b8,local_b8 == (Image*)0x0 )) {
         LAB_00105df1:local_58 = CONCAT44(_UNK_0010ef94, __LC36);
         uStack_50 = CONCAT44(_UNK_0010ef9c, _UNK_0010ef98);
         local_68 = BaseMaterial3D::get_albedo();
      }
 else {
         cVar10 = RefCounted::reference();
         if (cVar10 == '\0') {
            pIVar22 = (Image*)0x0;
            if (local_b8 != (Image*)0x0) goto LAB_00106351;
            goto LAB_00105df1;
         }

         if (local_b8 == (Image*)0x0) {
            local_58 = CONCAT44(_UNK_0010ef94, __LC36);
            uStack_50 = CONCAT44(_UNK_0010ef9c, _UNK_0010ef98);
            local_68 = BaseMaterial3D::get_albedo();
            LAB_00105e89:local_c0 = pIVar22;
            uStack_60 = param_2;
            cVar10 = RefCounted::reference();
            if (cVar10 == '\0') {
               local_c0 = (Image*)0x0;
            }

            goto LAB_00105ea3;
         }

         LAB_00106351:cVar10 = RefCounted::unreference();
         if (cVar10 != '\0') {
            memdelete<Image>(local_b8);
         }

         local_58 = CONCAT44(_UNK_0010ef94, __LC36);
         uStack_50 = CONCAT44(_UNK_0010ef9c, _UNK_0010ef98);
         local_68 = BaseMaterial3D::get_albedo();
         if (pIVar22 != (Image*)0x0) goto LAB_00105e89;
      }

      local_c0 = (Image*)0x0;
      pIVar22 = (Image*)0x0;
      uStack_60 = param_2;
   }

   LAB_00105ea3:_get_bake_texture((StringName*)&local_b8, param_4, &local_c0);
   lVar24 = local_b0[0];
   if (local_b0[0] != 0) {
      CowData<Color>::_unref((CowData<Color>*)local_a0);
      local_a0[0] = local_b0[0];
      local_b0[0] = 0;
      lVar24 = local_90;
   }

   CowData<Color>::_unref((CowData<Color>*)local_b0);
   pIVar23 = local_c0;
   if (( local_c0 != (Image*)0x0 ) && ( cVar10 = cVar10 != '\0' )) {
      memdelete<Image>(pIVar23);
   }

   cVar10 = BaseMaterial3D::get_feature(pOVar13, 0);
   if (cVar10 == '\0') {
      local_c0 = (Image*)0x0;
      local_58 = CONCAT44(_UNK_0010ef94, __LC36);
      uStack_50 = CONCAT44(_UNK_0010ef9c, _UNK_0010ef98);
      local_68 = CONCAT44(_UNK_0010ef94, __LC36);
      uStack_60 = CONCAT44(_UNK_0010ef9c, _UNK_0010ef98);
      _get_bake_texture((StringName*)&local_b8, param_4, &local_c0, &local_68, (StringName*)&local_58);
      lVar15 = local_b0[0];
      if (local_b0[0] != lVar24) {
         CowData<Color>::_unref((CowData<Color>*)&local_90);
         local_90 = lVar15;
         local_b0[0] = 0;
      }

      CowData<Color>::_unref((CowData<Color>*)local_b0);
      pIVar23 = local_c0;
      if (( local_c0 != (Image*)0x0 ) && ( cVar10 = cVar10 != '\0' )) {
         memdelete<Image>(pIVar23);
      }

   }
 else {
      BaseMaterial3D::get_texture(&local_c8, pOVar13, 3);
      local_88 = BaseMaterial3D::get_emission();
      local_80 = param_2;
      local_dc = (float)BaseMaterial3D::get_emission_energy_multiplier();
      local_dc = local_dc * *(float*)( param_4 + 0x48 );
      ProjectSettings::get_singleton();
      StringName::StringName((StringName*)&local_b8, "rendering/lights_and_shadows/use_physical_light_units", false);
      ProjectSettings::get_setting_with_override((StringName*)&local_58);
      bVar11 = Variant::operator_cast_to_bool((Variant*)&local_58);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_b8 != (Image*)0x0 )) {
         StringName::unref();
      }

      if (bVar11) {
         fVar25 = (float)BaseMaterial3D::get_emission_intensity();
         local_dc = fVar25 * local_dc;
      }

      if (local_c8 == (Object*)0x0) {
         iVar12 = BaseMaterial3D::get_emission_operator();
         if (iVar12 != 0) {
            LAB_00106034:local_58 = CONCAT44(_UNK_0010ef94, __LC36);
            uStack_50 = CONCAT44(_UNK_0010ef9c, _UNK_0010ef98);
            local_68 = Color::operator *((Color*)&local_88, local_dc);
            uStack_60 = param_2;
            goto LAB_00106068;
         }

         local_58 = Color::operator *((Color*)&local_88, local_dc);
         local_78 = _LC32;
         uStack_74 = _LC32;
         uStack_70 = _LC32;
         uStack_6c = _LC32;
         uStack_50 = param_2;
         local_68 = Color::operator *((Color*)&local_78, local_dc);
         local_c0 = (Image*)0x0;
         pIVar23 = (Image*)0x0;
         uStack_60 = param_2;
      }
 else {
         if (( *(code**)( *(long*)local_c8 + 0x210 ) == Texture2D::get_image ) || ( ( **(code**)( *(long*)local_c8 + 0x210 ) )((StringName*)&local_b8, local_c8),pIVar23 = local_b8,local_b8 == (Image*)0x0 )) {
            iVar12 = BaseMaterial3D::get_emission_operator();
            if (iVar12 != 0) goto LAB_00106034;
            local_58 = Color::operator *((Color*)&local_88, local_dc);
            local_78 = _LC32;
            uStack_74 = _LC32;
            uStack_70 = _LC32;
            uStack_6c = _LC32;
            uStack_50 = param_2;
            local_68 = Color::operator *((Color*)&local_78, local_dc);
            uStack_60 = param_2;
         }
 else {
            cVar10 = RefCounted::reference();
            if (cVar10 == '\0') {
               pIVar23 = (Image*)0x0;
            }

            if (( local_b8 != (Image*)0x0 ) && ( cVar10 = cVar10 != '\0' )) {
               memdelete<Image>(local_b8);
            }

            iVar12 = BaseMaterial3D::get_emission_operator();
            if (iVar12 == 0) {
               local_58 = Color::operator *((Color*)&local_88, local_dc);
               this(Color * ) & local_78;
               local_78 = _LC32;
               uStack_74 = _LC32;
               uStack_70 = _LC32;
               uStack_6c = _LC32;
               uStack_50 = param_2;
            }
 else {
               local_58 = CONCAT44(_UNK_0010ef94, __LC36);
               uStack_50 = CONCAT44(_UNK_0010ef9c, _UNK_0010ef98);
               this(Color * ) & local_88;
            }

            local_68 = Color::operator *(this, local_dc);
            uStack_60 = param_2;
            if (pIVar23 != (Image*)0x0) {
               local_c0 = pIVar23;
               cVar10 = RefCounted::reference();
               if (cVar10 == '\0') {
                  local_c0 = (Image*)0x0;
               }

               goto LAB_00106078;
            }

         }

         LAB_00106068:local_c0 = (Image*)0x0;
         pIVar23 = (Image*)0x0;
      }

      LAB_00106078:_get_bake_texture((StringName*)&local_b8, param_4, &local_c0, &local_68, (StringName*)&local_58);
      lVar15 = local_b0[0];
      if (local_b0[0] != lVar24) {
         CowData<Color>::_unref((CowData<Color>*)&local_90);
         local_90 = lVar15;
         local_b0[0] = 0;
      }

      CowData<Color>::_unref((CowData<Color>*)local_b0);
      pIVar9 = local_c0;
      if (( local_c0 != (Image*)0x0 ) && ( cVar10 = cVar10 != '\0' )) {
         memdelete<Image>(pIVar9);
      }

      if (( pIVar23 != (Image*)0x0 ) && ( cVar10 = cVar10 != '\0' )) {
         memdelete<Image>(pIVar23);
      }

      if (( ( local_c8 != (Object*)0x0 ) && ( cVar10 = RefCounted::unreference() ),cVar10 != '\0' )) &&( cVar10 = cVar10 != '\0' )(**(code**)( *(long*)local_c8 + 0x140 ))(local_c8);
      Memory::free_static(local_c8, false);
   }

}
if (( pIVar22 != (Image*)0x0 ) && ( cVar10 = cVar10 != '\0' )) {
   memdelete<Image>(pIVar22);
}
if (( ( local_d0 != (Object*)0x0 ) && ( cVar10 = RefCounted::unreference() ),cVar10 != '\0' )) &&( cVar10 = cVar10 != '\0' )(**(code**)( *(long*)local_d0 + 0x140 ))(local_d0);Memory::free_static(local_d0, false);}LAB_001062e1:local_110 = (HashMap<Ref<Material>,Voxelizer::MaterialCache,HashMapHasherDefault,HashMapComparatorDefault<Ref<Material>>,DefaultTypedAllocator<HashMapElement<Ref<Material>,Voxelizer::MaterialCache>>>*)( param_4 + 0x18 );lVar17 = HashMap<Ref<Material>,Voxelizer::MaterialCache,HashMapHasherDefault,HashMapComparatorDefault<Ref<Material>>,DefaultTypedAllocator<HashMapElement<Ref<Material>,Voxelizer::MaterialCache>>>::operator [](local_110, param_5);lVar24 = local_a0[0];if (*(long*)( lVar17 + 8 ) != local_a0[0]) {
   CowData<Color>::_ref((CowData<Color>*)( lVar17 + 8 ), (CowData*)local_a0);
}
if (*(long*)( lVar17 + 0x18 ) != lVar15) {
   CowData<Color>::_ref((CowData<Color>*)( lVar17 + 0x18 ), (CowData*)&local_90);
}
*(long*)( param_3 + 8 ) = lVar24;*(long*)( param_3 + 0x18 ) = lVar15;LAB_00105d36:if (( ( pOVar14 != (Object*)0x0 ) && ( cVar10 = RefCounted::unreference() ),cVar10 != '\0' )) &&( cVar10 = cVar10 != '\0' )(**(code**)( *(long*)pOVar14 + 0x140 ))(pOVar14);Memory::free_static(pOVar14, false);}if (( ( pOVar13 != (Object*)0x0 ) && ( cVar10 = RefCounted::unreference() ),cVar10 != '\0' )) &&( cVar10 = cVar10 != '\0' )(**(code**)( *(long*)pOVar13 + 0x140 ))(pOVar13);Memory::free_static(pOVar13, false);}if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_3;}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Voxelizer::plot_mesh(Transform3D const&, Ref<Mesh>&, Vector<Ref<Material> > const&, Ref<Material>
   const&, bool (*)(int, int)) */undefined8 Voxelizer::plot_mesh(Voxelizer *this, Transform3D *param_1, Ref *param_2, Vector *param_3, Ref *param_4, _func_bool_int_int *param_5) {
   long *plVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   char cVar7;
   bool bVar8;
   int iVar9;
   int iVar10;
   undefined4 uVar11;
   float *pfVar12;
   float *pfVar13;
   long lVar14;
   undefined8 uVar15;
   long lVar16;
   int *piVar17;
   undefined8 *puVar18;
   uint uVar19;
   int *piVar20;
   long lVar21;
   long lVar22;
   long lVar23;
   Object *pOVar24;
   uint uVar25;
   long in_FS_OFFSET;
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
   float fVar40;
   float fVar41;
   float fVar42;
   float fVar43;
   float fVar44;
   float fVar45;
   float fVar46;
   float fVar47;
   float fVar48;
   float fVar49;
   ulong local_1e8;
   Object *local_1e0;
   MaterialCache *local_1c0;
   float local_1a0;
   Array local_190[8];
   Variant local_188[8];
   long local_180;
   Variant local_178[8];
   long local_170;
   Variant local_168[8];
   long local_160;
   Object *local_158;
   int *local_150;
   Object *local_148;
   long local_140[2];
   long local_130;
   float local_128;
   float fStack_124;
   float local_120;
   float local_114[11];
   undefined8 local_e8[4];
   float local_c8;
   float local_c4;
   float local_c0;
   float local_bc;
   float local_b8;
   float local_b4;
   float local_b0;
   float local_ac;
   float local_a8;
   float local_98;
   float fStack_94;
   float local_90;
   float local_8c;
   float fStack_88;
   float local_84;
   undefined8 local_80;
   float local_78;
   float local_74[3];
   float local_68[10];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar7 = Transform3D::is_finite();
   if (cVar7 == '\0') {
      _err_print_error("plot_mesh", "scene/3d/voxelizer.cpp", 400, "Condition \"!p_xform.is_finite()\" is true. Returning: BAKE_RESULT_INVALID_PARAMETER", "Invalid mesh bake transform.", 0, 0);
      uVar15 = 1;
   }
 else {
      uVar25 = 0;
      Basis::inverse();
      Basis::transposed();
      iVar9 = get_bake_steps(this, param_2);
      local_1e8 = 0;
      while (true) {
         iVar10 = ( **(code**)( **(long**)param_2 + 0x1c8 ) )();
         if (iVar10 <= (int)local_1e8) break;
         iVar10 = ( **(code**)( **(long**)param_2 + 0x200 ) )(*(long**)param_2, local_1e8 & 0xffffffff);
         if (iVar10 == 3) {
            local_1e0 = *(Object**)param_4;
            if (local_1e0 == (Object*)0x0) {
               lVar6 = *(long*)( param_3 + 8 );
               if (( ( lVar6 == 0 ) || ( *(long*)( lVar6 + -8 ) <= (long)local_1e8 ) ) || ( pOVar24 = *(Object**)( lVar6 + local_1e8 * 8 ) ),pOVar24 == (Object*)0x0) {
                  ( **(code**)( **(long**)param_2 + 0x210 ) )(&local_148, *(long**)param_2, local_1e8 & 0xffffffff);
                  pOVar24 = local_148;
                  if (local_148 == (Object*)0x0) goto LAB_0010692a;
                  cVar7 = RefCounted::reference();
                  if (cVar7 != '\0') {
                     local_1e0 = pOVar24;
                     if (( ( local_148 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),pOVar24 = local_148,cVar7 != '\0' )) {
                        LAB_0010876e:( **(code**)( *(long*)pOVar24 + 0x140 ) )(pOVar24);
                        Memory::free_static(pOVar24, false);
                        if (local_1e0 == (Object*)0x0) goto LAB_0010692a;
                     }

                     goto LAB_00107967;
                  }

                  if (local_148 == (Object*)0x0) goto LAB_0010692a;
                  cVar7 = RefCounted::unreference();
                  pOVar24 = local_148;
                  if (cVar7 != '\0') {
                     cVar7 = predelete_handler(local_148);
                     if (cVar7 != '\0') goto LAB_0010876e;
                     goto LAB_0010692a;
                  }

                  local_158 = (Object*)0x0;
                  _get_material_cache(&local_148, this, &local_158);
               }
 else {
                  cVar7 = RefCounted::reference();
                  local_1e0 = pOVar24;
                  if (cVar7 != '\0') goto LAB_00107967;
                  LAB_0010692a:local_1c0 = (MaterialCache*)&local_148;
                  local_158 = (Object*)0x0;
                  _get_material_cache(local_1c0, this, &local_158);
               }

               local_1e0 = (Object*)0x0;
            }
 else {
               cVar7 = RefCounted::reference();
               if (cVar7 == '\0') goto LAB_0010692a;
               LAB_00107967:local_1c0 = (MaterialCache*)&local_148;
               local_158 = local_1e0;
               cVar7 = RefCounted::reference();
               if (cVar7 == '\0') {
                  local_158 = (Object*)0x0;
                  _get_material_cache(local_1c0, this, &local_158);
               }
 else {
                  _get_material_cache(local_1c0, this, &local_158);
                  cVar7 = RefCounted::unreference();
                  if (( cVar7 != '\0' ) && ( cVar7 = cVar7 != '\0' )) {
                     ( **(code**)( *(long*)local_1e0 + 0x140 ) )(local_1e0);
                     Memory::free_static(local_1e0, false);
                  }

               }

            }

            local_1c0 = (MaterialCache*)&local_148;
            ( **(code**)( **(long**)param_2 + 0x1e0 ) )(local_190, *(long**)param_2, local_1e8 & 0xffffffff);
            iVar10 = (int)local_190;
            Array::operator [](iVar10);
            Variant::operator_cast_to_Vector(local_188);
            lVar6 = local_180;
            Array::operator [](iVar10);
            Variant::operator_cast_to_Vector(local_178);
            Array::operator [](iVar10);
            Variant::operator_cast_to_Vector(local_168);
            Array::operator [](iVar10);
            Variant::operator_cast_to_Vector((Variant*)&local_158);
            lVar21 = local_170;
            if (( local_170 != 0 ) && ( *(long*)( local_170 + -8 ) == 0 )) {
               lVar21 = 0;
            }

            lVar22 = local_160;
            if (( local_160 != 0 ) && ( lVar22 = 0 * (long*)( local_160 + -8 ) != 0 )) {
               lVar22 = local_160;
            }

            if (local_150 == (int*)0x0) {
               if (( local_180 != 0 ) && ( iVar10= (int)(*(long *)(local_180 + -8) / 3),0 < iVar10 )) {
                  LAB_00107a51:uVar19 = uVar25 + iVar10;
                  lVar23 = 0;
                  lVar14 = lVar21;
                  do {
                     local_98 = 0.0;
                     fStack_94 = 0.0;
                     uVar25 = uVar25 + 1;
                     local_90 = 0.0;
                     local_8c = 0.0;
                     fStack_88 = 0.0;
                     local_84 = 0.0;
                     local_80 = 0;
                     local_78 = 0.0;
                     for (int i = 0; i < 3; i++) {
                        local_e8[i] = 0;
                     }

                     for (int i = 0; i < 9; i++) {
                        local_68[i] = 0;
                     }

                     if (( ( param_5 != (_func_bool_int_int*)0x0 ) && ( ( uVar25 & 0x7ff ) == 1 ) ) && ( bVar8 = bVar8 )) {
                        if (local_150 == (int*)0x0) goto LAB_00107812;
                        goto LAB_001077eb;
                     }

                     uVar15 = *(undefined8*)( param_1 + 8 );
                     uVar2 = *(undefined8*)( param_1 + 0x10 );
                     uVar3 = *(undefined8*)param_1;
                     fVar31 = *(float*)( param_1 + 4 );
                     fVar43 = *(float*)( param_1 + 0x10 );
                     puVar18 = (undefined8*)( lVar6 + lVar23 );
                     fVar36 = *(float*)( param_1 + 0x18 );
                     fVar30 = *(float*)( param_1 + 0x1c );
                     fVar26 = *(float*)( param_1 + 0x20 );
                     fVar27 = *(float*)( param_1 + 0x2c );
                     uVar4 = *(undefined8*)( param_1 + 0x24 );
                     pfVar12 = &local_98;
                     do {
                        uVar5 = *puVar18;
                        fVar28 = *(float*)( puVar18 + 1 );
                        pfVar13 = pfVar12 + 3;
                        puVar18 = (undefined8*)( (long)puVar18 + 0xc );
                        fVar29 = (float)uVar5;
                        fVar32 = (float)( (ulong)uVar5 >> 0x20 );
                        *(ulong*)pfVar12 = CONCAT44(fVar32 * fVar43 + fVar29 * (float)( (ulong)uVar15 >> 0x20 ) + fVar28 * (float)( (ulong)uVar2 >> 0x20 ) + (float)( (ulong)uVar4 >> 0x20 ), fVar32 * fVar31 + fVar29 * (float)uVar3 + fVar28 * (float)uVar15 + (float)uVar4);
                        pfVar12[2] = fVar29 * fVar36 + fVar32 * fVar30 + fVar28 * fVar26 + fVar27;
                        pfVar12 = pfVar13;
                     }
 while ( local_74 != pfVar13 );
                     if (lVar21 != 0) {
                        lVar16 = 0;
                        do {
                           *(undefined8*)( (long)local_e8 + lVar16 ) = *(undefined8*)( lVar14 + lVar16 );
                           lVar16 = lVar16 + 8;
                        }
 while ( lVar16 != 0x18 );
                     }

                     if (lVar22 != 0) {
                        lVar16 = 0;
                        do {
                           *(undefined8*)( (long)local_68 + lVar16 ) = *(undefined8*)( lVar22 + lVar23 + lVar16 );
                           *(undefined4*)( (long)local_68 + lVar16 + 8 ) = *(undefined4*)( lVar22 + lVar23 + 8 + lVar16 );
                           lVar16 = lVar16 + 0xc;
                        }
 while ( lVar16 != 0x24 );
                     }

                     fVar26 = (float)*(undefined8*)( this + 0x5c ) * _LC2;
                     fVar27 = (float)( ( ulong ) * (undefined8*)( this + 0x5c ) >> 0x20 ) * _UNK_0010ef2c;
                     fVar43 = (float)*(undefined8*)( this + 0x50 ) + fVar26;
                     fVar31 = (float)( ( ulong ) * (undefined8*)( this + 0x50 ) >> 0x20 ) + fVar27;
                     fVar32 = fStack_88 - fVar43;
                     fVar35 = local_84 - fVar31;
                     fVar28 = fStack_94 - fVar43;
                     fVar29 = local_90 - fVar31;
                     fVar44 = fVar32 - fVar28;
                     fVar45 = fVar35 - fVar29;
                     fVar31 = local_78 - fVar31;
                     fVar43 = local_80._4_4_ - fVar43;
                     fVar30 = fVar28 * fVar45 - fVar44 * fVar29;
                     fVar39 = fVar43 * fVar45 - fVar31 * fVar44;
                     fVar36 = fVar39;
                     if (fVar30 < fVar39) {
                        fVar36 = fVar30;
                        fVar30 = fVar39;
                     }

                     fVar39 = ABS(fVar45) * fVar26 + ABS(fVar44) * fVar27;
                     if (( fVar36 <= fVar39 ) && ( (float)( (uint)fVar39 ^ _LC54 ) <= fVar30 )) {
                        fVar36 = *(float*)( this + 0x58 ) * _LC2;
                        fVar47 = *(float*)( this + 0x4c ) + fVar36;
                        fVar46 = local_98 - fVar47;
                        fVar39 = (float)local_80 - fVar47;
                        fVar47 = local_8c - fVar47;
                        fVar48 = fVar47 - fVar46;
                        fVar37 = (float)( (uint)fVar45 ^ _LC54 ) * fVar39 + fVar31 * fVar48;
                        fVar49 = fVar48 * fVar29 + fVar46 * (float)( (uint)fVar45 ^ _LC54 );
                        fVar30 = fVar49;
                        if (fVar49 < fVar37) {
                           fVar30 = fVar37;
                           fVar37 = fVar49;
                        }

                        fVar49 = ABS(fVar45) * fVar36 + ABS(fVar48) * fVar27;
                        if (( fVar37 <= fVar49 ) && ( (float)( (uint)fVar49 ^ _LC54 ) <= fVar30 )) {
                           fVar37 = fVar47 * fVar44 - fVar32 * fVar48;
                           fVar49 = fVar39 * fVar44 - fVar43 * fVar48;
                           fVar30 = fVar49;
                           if (fVar49 < fVar37) {
                              fVar30 = fVar37;
                              fVar37 = fVar49;
                           }

                           fVar49 = ABS(fVar48) * fVar26 + ABS(fVar44) * fVar36;
                           if (( fVar37 <= fVar49 ) && ( (float)( (uint)fVar49 ^ _LC54 ) <= fVar30 )) {
                              fVar49 = fVar31 - fVar35;
                              fVar33 = fVar43 - fVar32;
                              fVar38 = fVar49 * fVar28 - fVar33 * fVar29;
                              fVar37 = fVar49 * fVar43 - fVar33 * fVar31;
                              fVar30 = fVar38;
                              if (fVar38 < fVar37) {
                                 fVar30 = fVar37;
                                 fVar37 = fVar38;
                              }

                              fVar38 = ABS(fVar33) * fVar27 + ABS(fVar49) * fVar26;
                              if (( fVar37 <= fVar38 ) && ( (float)( (uint)fVar38 ^ _LC54 ) <= fVar30 )) {
                                 fVar38 = fVar39 - fVar47;
                                 fVar40 = fVar46 * (float)( (uint)fVar49 ^ _LC54 ) + fVar38 * fVar29;
                                 fVar37 = fVar38 * fVar31 + (float)( (uint)fVar49 ^ _LC54 ) * fVar39;
                                 fVar30 = fVar40;
                                 if (fVar40 < fVar37) {
                                    fVar30 = fVar37;
                                    fVar37 = fVar40;
                                 }

                                 fVar40 = ABS(fVar49) * fVar36 + ABS(fVar38) * fVar27;
                                 if (( fVar37 <= fVar40 ) && ( (float)( (uint)fVar40 ^ _LC54 ) <= fVar30 )) {
                                    fVar40 = fVar33 * fVar46 - fVar38 * fVar28;
                                    fVar37 = fVar33 * fVar47 - fVar38 * fVar32;
                                    fVar30 = fVar40;
                                    if (fVar40 < fVar37) {
                                       fVar30 = fVar37;
                                       fVar37 = fVar40;
                                    }

                                    fVar40 = ABS(fVar33) * fVar36 + ABS(fVar38) * fVar26;
                                    if (( fVar37 <= fVar40 ) && ( (float)( (uint)fVar40 ^ _LC54 ) <= fVar30 )) {
                                       fVar40 = fVar29 - fVar31;
                                       fVar41 = fVar28 - fVar43;
                                       fVar42 = fVar40 * fVar28 - fVar41 * fVar29;
                                       fVar37 = fVar40 * fVar32 - fVar41 * fVar35;
                                       fVar30 = fVar42;
                                       if (fVar42 < fVar37) {
                                          fVar30 = fVar37;
                                          fVar37 = fVar42;
                                       }

                                       fVar42 = ABS(fVar40) * fVar26 + ABS(fVar41) * fVar27;
                                       if (( fVar37 <= fVar42 ) && ( (float)( (uint)fVar42 ^ _LC54 ) <= fVar30 )) {
                                          fVar42 = fVar46 - fVar39;
                                          fVar37 = fVar46 * (float)( (uint)fVar40 ^ _LC54 ) + fVar42 * fVar29;
                                          fVar34 = (float)( (uint)fVar40 ^ _LC54 ) * fVar47 + fVar42 * fVar35;
                                          fVar30 = fVar34;
                                          if (fVar37 < fVar34) {
                                             fVar30 = fVar37;
                                             fVar37 = fVar34;
                                          }

                                          fVar40 = ABS(fVar42) * fVar27 + ABS(fVar40) * fVar36;
                                          if (( fVar30 <= fVar40 ) && ( (float)( (uint)fVar40 ^ _LC54 ) <= fVar37 )) {
                                             fVar37 = fVar41 * fVar47 - fVar32 * fVar42;
                                             fVar40 = fVar41 * fVar39 - fVar42 * fVar43;
                                             fVar30 = fVar40;
                                             if (fVar40 < fVar37) {
                                                fVar30 = fVar37;
                                                fVar37 = fVar40;
                                             }

                                             fVar40 = ABS(fVar41) * fVar36 + ABS(fVar42) * fVar26;
                                             if (( fVar37 <= fVar40 ) && ( (float)( (uint)fVar40 ^ _LC54 ) <= fVar30 )) {
                                                fVar30 = fVar46;
                                                fVar37 = fVar47;
                                                if (( fVar46 <= fVar47 ) && ( fVar30= fVar47,fVar37 = fVar46,fVar47 <= fVar46 )) {
                                                   fVar30 = fVar46;
                                                }

                                                fVar47 = fVar39;
                                                if (fVar39 <= fVar30) {
                                                   fVar47 = fVar30;
                                                }

                                                if (fVar37 <= fVar39) {
                                                   fVar39 = fVar37;
                                                }

                                                if (( fVar39 <= fVar36 ) && ( (float)( (uint)fVar36 ^ _LC54 ) <= fVar47 )) {
                                                   fVar30 = fVar28;
                                                   local_1a0 = fVar32;
                                                   if (( fVar28 <= fVar32 ) && ( local_1a0 = fVar28 < fVar32 )) {
                                                      fVar30 = fVar32;
                                                   }

                                                   fVar32 = fVar43;
                                                   if (fVar43 <= fVar30) {
                                                      fVar32 = fVar30;
                                                   }

                                                   if (local_1a0 <= fVar43) {
                                                      fVar43 = local_1a0;
                                                   }

                                                   if (( fVar43 <= fVar26 ) && ( (float)( (uint)fVar26 ^ _LC54 ) <= fVar32 )) {
                                                      fVar43 = fVar29;
                                                      if (( fVar29 <= fVar35 ) && ( fVar29 < fVar35 )) {
                                                         fVar43 = fVar35;
                                                      }

                                                      fVar30 = fVar31;
                                                      if (fVar35 <= fVar31) {
                                                         fVar30 = fVar35;
                                                      }

                                                      if (fVar31 <= fVar43) {
                                                         fVar31 = fVar43;
                                                      }

                                                      if (( fVar30 <= fVar27 ) && ( (float)( (uint)fVar27 ^ _LC54 ) <= fVar31 )) {
                                                         for (int i = 0; i < 5; i++) {
                                                            local_114[( i + 5 )] = 0;
                                                         }

                                                         local_114[0] = fVar26;
                                                         local_114[1] = fVar27;
                                                         local_114[10] = 0.0;
                                                         local_120 = fVar33 * fVar48 - fVar38 * fVar44;
                                                         local_114[4] = local_120;
                                                         local_128 = fVar49 * fVar44 - fVar33 * fVar45;
                                                         fStack_124 = fVar38 * fVar45 - fVar49 * fVar48;
                                                         local_114[2] = local_128;
                                                         local_114[3] = fStack_124;
                                                         fVar31 = fVar46 * local_128 + fVar28 * fStack_124 + fVar29 * local_120;
                                                         lVar16 = 0;
                                                         while (true) {
                                                            fVar43 = fVar36;
                                                            fVar30 = (float)( (uint)fVar36 ^ _LC54 );
                                                            if (*(float*)( (long)local_114 + lVar16 + 8 ) <= 0.0) {
                                                               fVar43 = (float)( (uint)fVar36 ^ _LC54 );
                                                               fVar30 = fVar36;
                                                            }

                                                            *(float*)( (long)local_114 + lVar16 + 0x20 ) = fVar43;
                                                            *(float*)( (long)local_114 + lVar16 + 0x14 ) = fVar30;
                                                            if (lVar16 + 4 == 0xc) break;
                                                            fVar36 = *(float*)( (long)local_114 + lVar16 );
                                                            lVar16 = lVar16 + 4;
                                                         }
;
                                                         if (( local_114[5] * local_128 + local_114[6] * fStack_124 + local_114[7] * local_120 ) - fVar31 <= 0.0) {
                                                            if (0.0 <= ( local_128 * local_114[8] + fStack_124 * local_114[9] + local_120 * local_114[10] ) - fVar31) {
                                                               _plot_face(this, 0, 0, 0, 0, 0, (Vector3*)&local_98, (Vector3*)local_68, (Vector2*)local_e8, local_1c0, (AABB*)( this + 100 ));
                                                            }

                                                         }

                                                      }

                                                   }

                                                }

                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                     lVar14 = lVar14 + 0x18;
                     lVar23 = lVar23 + 0x24;
                  }
 while ( uVar25 != uVar19 );
                  LAB_001074c9:if (local_150 != (int*)0x0) goto LAB_001074d6;
               }

            }
 else {
               if (*(long*)( local_150 + -2 ) == 0) {
                  if (( local_180 != 0 ) && ( iVar10= (int)(*(long *)(local_180 + -8) / 3),0 < iVar10 )) goto LAB_00107a51;
               }
 else {
                  iVar10 = (int)( *(long*)( local_150 + -2 ) / 3 );
                  if (0 < iVar10) {
                     uVar19 = uVar25 + iVar10;
                     piVar20 = local_150;
                     do if (lVar21 != 0) if (( fVar43 <= fVar39 ) && ( (float)( (uint)fVar39 ^ _LC54 ) <= fVar36 )) {
                        fVar43 = *(float*)( this + 0x58 ) * _LC2;
                        fVar36 = *(float*)( this + 0x4c ) + fVar43;
                        fVar46 = local_98 - fVar36;
                        fVar48 = local_8c - fVar36;
                        fVar36 = (float)local_80 - fVar36;
                        fVar47 = fVar48 - fVar46;
                        fVar37 = (float)( (uint)fVar45 ^ _LC54 ) * fVar36 + fVar31 * fVar47;
                        fVar49 = fVar47 * fVar29 + fVar46 * (float)( (uint)fVar45 ^ _LC54 );
                        fVar39 = fVar49;
                        if (fVar49 < fVar37) {
                           fVar39 = fVar37;
                           fVar37 = fVar49;
                        }

                        fVar49 = ABS(fVar45) * fVar43 + ABS(fVar47) * fVar27;
                        if (( fVar37 <= fVar49 ) && ( (float)( (uint)fVar49 ^ _LC54 ) <= fVar39 )) {
                           fVar37 = fVar48 * fVar44 - fVar32 * fVar47;
                           fVar49 = fVar36 * fVar44 - fVar30 * fVar47;
                           fVar39 = fVar49;
                           if (fVar49 < fVar37) {
                              fVar39 = fVar37;
                              fVar37 = fVar49;
                           }

                           fVar49 = ABS(fVar47) * fVar26 + ABS(fVar44) * fVar43;
                           if (( fVar37 <= fVar49 ) && ( (float)( (uint)fVar49 ^ _LC54 ) <= fVar39 )) {
                              fVar49 = fVar31 - fVar35;
                              fVar33 = fVar30 - fVar32;
                              fVar38 = fVar49 * fVar28 - fVar33 * fVar29;
                              fVar37 = fVar49 * fVar30 - fVar33 * fVar31;
                              fVar39 = fVar38;
                              if (fVar38 < fVar37) {
                                 fVar39 = fVar37;
                                 fVar37 = fVar38;
                              }

                              fVar38 = ABS(fVar33) * fVar27 + ABS(fVar49) * fVar26;
                              if (( fVar37 <= fVar38 ) && ( (float)( (uint)fVar38 ^ _LC54 ) <= fVar39 )) {
                                 fVar38 = fVar36 - fVar48;
                                 fVar40 = fVar46 * (float)( (uint)fVar49 ^ _LC54 ) + fVar38 * fVar29;
                                 fVar37 = (float)( (uint)fVar49 ^ _LC54 ) * fVar36 + fVar38 * fVar31;
                                 fVar39 = fVar40;
                                 if (fVar40 < fVar37) {
                                    fVar39 = fVar37;
                                    fVar37 = fVar40;
                                 }

                                 fVar40 = ABS(fVar49) * fVar43 + ABS(fVar38) * fVar27;
                                 if (( fVar37 <= fVar40 ) && ( (float)( (uint)fVar40 ^ _LC54 ) <= fVar39 )) {
                                    fVar40 = fVar33 * fVar46 - fVar38 * fVar28;
                                    fVar37 = fVar33 * fVar48 - fVar38 * fVar32;
                                    fVar39 = fVar40;
                                    if (fVar40 < fVar37) {
                                       fVar39 = fVar37;
                                       fVar37 = fVar40;
                                    }

                                    fVar40 = ABS(fVar33) * fVar43 + ABS(fVar38) * fVar26;
                                    if (( fVar37 <= fVar40 ) && ( (float)( (uint)fVar40 ^ _LC54 ) <= fVar39 )) {
                                       fVar40 = fVar29 - fVar31;
                                       fVar41 = fVar28 - fVar30;
                                       fVar37 = fVar40 * fVar28 - fVar41 * fVar29;
                                       fVar42 = fVar40 * fVar32 - fVar35 * fVar41;
                                       fVar39 = fVar42;
                                       if (fVar37 < fVar42) {
                                          fVar39 = fVar37;
                                          fVar37 = fVar42;
                                       }

                                       fVar42 = ABS(fVar40) * fVar26 + ABS(fVar41) * fVar27;
                                       if (( fVar39 <= fVar42 ) && ( (float)( (uint)fVar42 ^ _LC54 ) <= fVar37 )) {
                                          fVar42 = fVar46 - fVar36;
                                          fVar37 = fVar46 * (float)( (uint)fVar40 ^ _LC54 ) + fVar42 * fVar29;
                                          fVar34 = (float)( (uint)fVar40 ^ _LC54 ) * fVar48 + fVar42 * fVar35;
                                          fVar39 = fVar34;
                                          if (fVar37 < fVar34) {
                                             fVar39 = fVar37;
                                             fVar37 = fVar34;
                                          }

                                          fVar40 = ABS(fVar42) * fVar27 + ABS(fVar40) * fVar43;
                                          if (( fVar39 <= fVar40 ) && ( (float)( (uint)fVar40 ^ _LC54 ) <= fVar37 )) {
                                             fVar37 = fVar41 * fVar48 - fVar42 * fVar32;
                                             fVar40 = fVar41 * fVar36 - fVar42 * fVar30;
                                             fVar39 = fVar40;
                                             if (fVar40 < fVar37) {
                                                fVar39 = fVar37;
                                                fVar37 = fVar40;
                                             }

                                             fVar40 = ABS(fVar42) * fVar26 + ABS(fVar41) * fVar43;
                                             if (( fVar37 <= fVar40 ) && ( (float)( (uint)fVar40 ^ _LC54 ) <= fVar39 )) {
                                                fVar39 = fVar46;
                                                fVar37 = fVar48;
                                                if (( fVar46 <= fVar48 ) && ( fVar39= fVar48,fVar37 = fVar46,fVar48 <= fVar46 )) {
                                                   fVar39 = fVar46;
                                                }

                                                fVar48 = fVar36;
                                                if (fVar36 <= fVar39) {
                                                   fVar48 = fVar39;
                                                }

                                                if (fVar37 <= fVar36) {
                                                   fVar36 = fVar37;
                                                }

                                                if (( fVar36 <= fVar43 ) && ( (float)( (uint)fVar43 ^ _LC54 ) <= fVar48 )) {
                                                   fVar39 = fVar28;
                                                   fVar36 = fVar32;
                                                   if (( fVar28 <= fVar32 ) && ( fVar36 = fVar28 < fVar32 )) {
                                                      fVar39 = fVar32;
                                                   }

                                                   fVar32 = fVar30;
                                                   if (fVar36 <= fVar30) {
                                                      fVar32 = fVar36;
                                                   }

                                                   if (fVar30 <= fVar39) {
                                                      fVar30 = fVar39;
                                                   }

                                                   if (( fVar32 <= fVar26 ) && ( (float)( (uint)fVar26 ^ _LC54 ) <= fVar30 )) {
                                                      fVar36 = fVar29;
                                                      if (( fVar29 <= fVar35 ) && ( fVar29 < fVar35 )) {
                                                         fVar36 = fVar35;
                                                      }

                                                      fVar30 = fVar31;
                                                      if (fVar35 <= fVar31) {
                                                         fVar30 = fVar35;
                                                      }

                                                      if (fVar31 <= fVar36) {
                                                         fVar31 = fVar36;
                                                      }

                                                      if (( fVar30 <= fVar27 ) && ( (float)( (uint)fVar27 ^ _LC54 ) <= fVar31 )) {
                                                         for (int i = 0; i < 5; i++) {
                                                            local_114[( i + 5 )] = 0;
                                                         }

                                                         local_114[0] = fVar26;
                                                         local_114[1] = fVar27;
                                                         local_114[10] = 0.0;
                                                         local_120 = fVar33 * fVar47 - fVar38 * fVar44;
                                                         local_114[4] = local_120;
                                                         local_128 = fVar49 * fVar44 - fVar33 * fVar45;
                                                         fStack_124 = fVar38 * fVar45 - fVar49 * fVar47;
                                                         local_114[2] = local_128;
                                                         local_114[3] = fStack_124;
                                                         fVar31 = fVar46 * local_128 + fVar28 * fStack_124 + fVar29 * local_120;
                                                         lVar14 = 0;
                                                         while (true) {
                                                            fVar36 = (float)( (uint)fVar43 ^ _LC54 );
                                                            if (*(float*)( (long)local_114 + lVar14 + 8 ) <= 0.0) {
                                                               fVar36 = fVar43;
                                                               fVar43 = (float)( (uint)fVar43 ^ _LC54 );
                                                            }

                                                            *(float*)( (long)local_114 + lVar14 + 0x20 ) = fVar43;
                                                            *(float*)( (long)local_114 + lVar14 + 0x14 ) = fVar36;
                                                            if (lVar14 + 4 == 0xc) break;
                                                            fVar43 = *(float*)( (long)local_114 + lVar14 );
                                                            lVar14 = lVar14 + 4;
                                                         }
;
                                                         if (( local_114[5] * local_128 + local_114[6] * fStack_124 + local_114[7] * local_120 ) - fVar31 <= 0.0) {
                                                            if (0.0 <= ( local_128 * local_114[8] + fStack_124 * local_114[9] + local_120 * local_114[10] ) - fVar31) {
                                                               _plot_face(this, 0, 0, 0, 0, 0, (Vector3*)&local_98, (Vector3*)local_68, (Vector2*)local_e8, local_1c0, (AABB*)( this + 100 ));
                                                            }

                                                         }

                                                      }

                                                   }

                                                }

                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }
 while ( uVar25 != uVar19 );
                     goto LAB_001074c9;
                  }

               }

               LAB_001074d6:piVar20 = local_150;
               LOCK();
               plVar1 = (long*)( local_150 + -4 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_150 = (int*)0x0;
                  Memory::free_static(piVar20 + -4, false);
               }

            }

            lVar6 = local_160;
            if (local_160 != 0) {
               LOCK();
               plVar1 = (long*)( local_160 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_160 = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

            }

            lVar6 = local_170;
            if (local_170 != 0) {
               LOCK();
               plVar1 = (long*)( local_170 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_170 = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

            }

            lVar6 = local_180;
            if (local_180 != 0) {
               LOCK();
               plVar1 = (long*)( local_180 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_180 = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

            }

            Array::~Array(local_190);
            lVar6 = local_130;
            if (local_130 != 0) {
               LOCK();
               plVar1 = (long*)( local_130 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_130 = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

            }

            lVar6 = local_140[0];
            if (local_140[0] != 0) {
               LOCK();
               plVar1 = (long*)( local_140[0] + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_140[0] = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

            }

            if (( ( local_1e0 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)local_1e0 + 0x140 ))(local_1e0);
            Memory::free_static(local_1e0, false);
         }

      }
;
      local_1e8 = local_1e8 + 1;
   }

   if (*(long*)( this + 8 ) == 0) {
      uVar11 = 0;
   }
 else {
      uVar11 = *(undefined4*)( *(long*)( this + 8 ) + -8 );
   }

   *(undefined4*)( this + 0xc4 ) = uVar11;
   uVar15 = 0;
}
LAB_001078f1:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return uVar15;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* Vector<Color>::push_back(Color) [clone .isra.0] */void Vector<Color>::push_back(undefined8 param_1, undefined8 param_2, long param_3) {
   int iVar1;
   undefined8 *puVar2;
   long lVar3;
   long lVar4;
   if (*(long*)( param_3 + 8 ) == 0) {
      lVar4 = 1;
   }
 else {
      lVar4 = *(long*)( *(long*)( param_3 + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<Color>::resize<false>((CowData<Color>*)( param_3 + 8 ), lVar4);
   if (iVar1 == 0) {
      if (*(long*)( param_3 + 8 ) == 0) {
         lVar3 = -1;
         lVar4 = 0;
      }
 else {
         lVar4 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
         lVar3 = lVar4 + -1;
         if (-1 < lVar3) {
            CowData<Color>::_copy_on_write((CowData<Color>*)( param_3 + 8 ));
            puVar2 = (undefined8*)( lVar3 * 0x10 + *(long*)( param_3 + 8 ) );
            *puVar2 = param_1;
            puVar2[1] = param_2;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar4, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* Voxelizer::create_debug_multimesh() */Ref *Voxelizer::create_debug_multimesh(void) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   char cVar4;
   MultiMesh *this;
   ArrayMesh *this_00;
   Variant *pVVar5;
   BaseMaterial3D *this_01;
   Object *pOVar6;
   int iVar7;
   int iVar8;
   Ref *pRVar9;
   Object *pOVar10;
   Color *pCVar11;
   Voxelizer *in_RSI;
   uint *puVar12;
   int iVar13;
   uint uVar14;
   Ref *in_RDI;
   int iVar15;
   code *pcVar16;
   int iVar17;
   long in_FS_OFFSET;
   Object *local_f0;
   Array local_c8[8];
   Array local_c0[8];
   Dictionary local_b8[8];
   long local_b0;
   Vector local_a8[8];
   long local_a0;
   Object *local_98;
   long local_90;
   uint local_84;
   float local_80;
   float local_7c;
   undefined8 local_78;
   undefined1 auStack_70[16];
   undefined8 local_60;
   undefined4 local_58;
   undefined8 local_54;
   undefined4 local_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)in_RDI = 0;
   this(MultiMesh * operator_new(0x280, ""));
   MultiMesh::MultiMesh(this);
   postinitialize_handler((Object*)this);
   cVar4 = RefCounted::init_ref();
   if (cVar4 == '\0') {
      pOVar6 = *(Object**)in_RDI;
      if (pOVar6 != (Object*)0x0) {
         *(undefined8*)in_RDI = 0;
         cVar4 = RefCounted::unreference();
         if (cVar4 != '\0') {
            this(MultiMesh * 0x0);
            cVar4 = predelete_handler(pOVar6);
            if (cVar4 != '\0') {
               LAB_0010935d:( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
               Memory::free_static(pOVar6, false);
               pOVar10 = (Object*)this;
               if (this != (MultiMesh*)0x0) goto LAB_0010926e;
            }

         }

         goto LAB_001089e2;
      }

   }
 else {
      pOVar6 = *(Object**)in_RDI;
      pOVar10 = pOVar6;
      if (this != (MultiMesh*)pOVar6) {
         *(MultiMesh**)in_RDI = this;
         cVar4 = RefCounted::reference();
         pOVar10 = (Object*)this;
         if (cVar4 == '\0') {
            *(undefined8*)in_RDI = 0;
            if (pOVar6 != (Object*)0x0) {
               cVar4 = RefCounted::unreference();
               joined_r0x0010930f:if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) goto LAB_0010935d;
            }

         }
 else if (pOVar6 != (Object*)0x0) {
            cVar4 = RefCounted::unreference();
            goto joined_r0x0010930f;
         }

      }

      LAB_0010926e:cVar4 = RefCounted::unreference();
      if (( cVar4 == '\0' ) || ( cVar4 = cVar4 == '\0' )) {
         LAB_001089e2:pOVar6 = *(Object**)in_RDI;
      }
 else {
         ( **(code**)( *(long*)pOVar10 + 0x140 ) )(pOVar10);
         Memory::free_static(pOVar10, false);
         pOVar6 = *(Object**)in_RDI;
      }

   }

   MultiMesh::set_transform_format(pOVar6, 1);
   MultiMesh::set_use_colors(SUB81(*(undefined8*)in_RDI, 0));
   MultiMesh::set_instance_count((int)*(undefined8*)in_RDI);
   this_00 = (ArrayMesh*)operator_new(0x430, "");
   ArrayMesh::ArrayMesh(this_00);
   postinitialize_handler((Object*)this_00);
   cVar4 = RefCounted::init_ref();
   local_f0 = (Object*)0x0;
   if (cVar4 != '\0') {
      cVar4 = RefCounted::reference();
      local_f0 = (Object*)(ArrayMesh*)0x0;
      if (cVar4 != '\0') {
         local_f0 = (Object*)this_00;
      }

      cVar4 = RefCounted::unreference();
      if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler((Object*)this_00) ),cVar4 != '\0') {
         ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
         Memory::free_static(this_00, false);
      }

   }

   iVar17 = 3;
   iVar15 = 0;
   Array::Array(local_c8);
   iVar13 = (int)local_c8;
   Array::resize(iVar13);
   local_a0 = 0;
   local_90 = 0;
   do {
      local_78 = 0;
      uVar14 = 0;
      auStack_70._0_12_ = ZEXT412(0);
      auStack_70._12_4_ = 0;
      local_60 = 0;
      local_58 = 0;
      local_54 = 0;
      local_4c = 0;
      do {
         local_84 = _LC32;
         local_80 = (float)(int)( 1 - ( uVar14 & 0xfffffffe ) );
         local_7c = (float)(int)( ( uVar14 & 1 ) * -2 + 1 ) * local_80;
         if (iVar15 < 3) {
            puVar12 = &local_84;
            iVar7 = iVar15;
            do {
               uVar2 = *puVar12;
               iVar8 = iVar7 + 1;
               puVar12 = puVar12 + 1;
               *(uint*)( auStack_70 + ( (long)( iVar7 % 3 ) + (long)(int)uVar14 * 3 ) * 4 + -8 ) = uVar2;
               iVar7 = iVar8;
            }
 while ( iVar17 != iVar8 );
         }
 else {
            puVar12 = &local_84;
            iVar7 = iVar15;
            do {
               uVar2 = *puVar12;
               iVar8 = iVar7 + 1;
               puVar12 = puVar12 + 1;
               *(uint*)( auStack_70 + ( (long)( iVar7 % 3 ) + (long)(int)( 3 - uVar14 ) * 3 ) * 4 + -8 ) = uVar2 ^ _LC54;
               iVar7 = iVar8;
            }
 while ( iVar17 != iVar8 );
         }

         uVar14 = uVar14 + 1;
      }
 while ( uVar14 != 4 );
      iVar15 = iVar15 + 1;
      iVar17 = iVar17 + 1;
      Vector<Vector3>::push_back(local_78, auStack_70._0_4_, local_a8);
      Vector<Color>::push_back(0x3f8000003f800000, 0x3f8000003f800000, (Vector*)&local_98);
      Vector<Vector3>::push_back(auStack_70._4_8_, auStack_70._12_4_, local_a8);
      Vector<Color>::push_back(0x3f8000003f800000, 0x3f8000003f800000, (Vector*)&local_98);
      Vector<Vector3>::push_back(local_60, local_58, local_a8);
      Vector<Color>::push_back(0x3f8000003f800000, 0x3f8000003f800000, (Vector*)&local_98);
      Vector<Vector3>::push_back(local_60, local_58, local_a8);
      Vector<Color>::push_back(0x3f8000003f800000, 0x3f8000003f800000, (Vector*)&local_98);
      Vector<Vector3>::push_back(local_54, local_4c, local_a8);
      Vector<Color>::push_back(0x3f8000003f800000, 0x3f8000003f800000, (Vector*)&local_98);
      Vector<Vector3>::push_back(local_78, auStack_70._0_4_, local_a8);
      Vector<Color>::push_back(0x3f8000003f800000, 0x3f8000003f800000);
   }
 while ( iVar15 != 6 );
   Variant::Variant((Variant*)&local_78, local_a8);
   pVVar5 = (Variant*)Array::operator [](iVar13);
   if (pVVar5 == (Variant*)&local_78) {
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

   }
 else {
      if (Variant::needs_deinit[*(int*)pVVar5] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar5 = 0;
      *(int*)pVVar5 = (int)local_78;
      *(undefined8*)( pVVar5 + 8 ) = auStack_70._0_8_;
      *(undefined8*)( pVVar5 + 0x10 ) = auStack_70._8_8_;
   }

   Variant::Variant((Variant*)&local_78, (Vector*)&local_98);
   pVVar5 = (Variant*)Array::operator [](iVar13);
   if (pVVar5 == (Variant*)&local_78) {
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

   }
 else {
      if (Variant::needs_deinit[*(int*)pVVar5] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar5 = 0;
      *(int*)pVVar5 = (int)local_78;
      *(undefined8*)( pVVar5 + 8 ) = auStack_70._0_8_;
      *(undefined8*)( pVVar5 + 0x10 ) = auStack_70._8_8_;
   }

   Dictionary::Dictionary(local_b8);
   Array::Array(local_c0);
   local_78 = 0;
   local_b0 = 0;
   auStack_70 = (undefined1[16])0x0;
   Array::set_typed((uint)local_c0, (StringName*)0x1c, (Variant*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   ArrayMesh::add_surface_from_arrays(local_f0, 3, local_c8, local_c0, local_b8, 0);
   Array::~Array(local_c0);
   Dictionary::~Dictionary(local_b8);
   lVar3 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar1 = (long*)( local_a0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   Array::~Array(local_c8);
   this_01 = (BaseMaterial3D*)operator_new(0x558, "");
   BaseMaterial3D::BaseMaterial3D(this_01, false);
   *(undefined***)this_01 = &PTR__initialize_classv_0010eb30;
   postinitialize_handler((Object*)this_01);
   cVar4 = RefCounted::init_ref();
   if (cVar4 == '\0') {
      BaseMaterial3D::set_flag(0, 2, 1);
      BaseMaterial3D::set_flag(0, 1, 1);
      BaseMaterial3D::set_shading_mode(0, 0);
      BaseMaterial3D::set_flag(0, 0x15, 1);
      local_78 = CONCAT44(_LC32, _LC32);
      auStack_70._4_4_ = _LC32;
      auStack_70._0_4_ = _LC32;
      BaseMaterial3D::set_albedo((Color*)0x0);
      pcVar16 = *(code**)( *(long*)local_f0 + 0x208 );
      LAB_00108f96:local_98 = (Object*)0x0;
      ( *pcVar16 )(local_f0, 0, (Vector*)&local_98);
      if (( local_98 != (Object*)0x0 ) && ( cVar4 = cVar4 != '\0' )) {
         pCVar11 = (Color*)0x0;
         LAB_0010938d:pOVar6 = local_98;
         cVar4 = predelete_handler(local_98);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
            Memory::free_static(pOVar6, false);
         }

         if (pCVar11 != (Color*)0x0) goto LAB_001091e2;
      }

   }
 else {
      cVar4 = RefCounted::reference();
      pCVar11 = (Color*)0x0;
      if (cVar4 != '\0') {
         pCVar11 = (Color*)this_01;
      }

      cVar4 = RefCounted::unreference();
      if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler((Object*)this_01) ),cVar4 != '\0') {
         ( **(code**)( *(long*)this_01 + 0x140 ) )(this_01);
         Memory::free_static(this_01, false);
      }

      BaseMaterial3D::set_flag(pCVar11, 2, 1);
      BaseMaterial3D::set_flag(pCVar11, 1, 1);
      BaseMaterial3D::set_shading_mode(pCVar11, 0);
      BaseMaterial3D::set_flag(pCVar11, 0x15, 1);
      local_78 = CONCAT44(_LC32, _LC32);
      auStack_70._4_4_ = _LC32;
      auStack_70._0_4_ = _LC32;
      BaseMaterial3D::set_albedo(pCVar11);
      pcVar16 = *(code**)( *(long*)local_f0 + 0x208 );
      local_98 = (Object*)0x0;
      if (pCVar11 == (Color*)0x0) goto LAB_00108f96;
      pOVar6 = (Object*)__dynamic_cast(pCVar11, &Object::typeinfo, &Material::typeinfo, 0);
      if (( pOVar6 != (Object*)0x0 ) && ( local_98 = pOVar6 ),cVar4 = RefCounted::reference(),cVar4 == '\0') {
         local_98 = (Object*)0x0;
      }

      ( *pcVar16 )(local_f0, 0, (Vector*)&local_98);
      if (( local_98 != (Object*)0x0 ) && ( cVar4 = cVar4 != '\0' )) goto LAB_0010938d;
      LAB_001091e2:cVar4 = RefCounted::unreference();
      if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler((Object*)pCVar11) ),cVar4 != '\0') {
         ( **(code**)( *(long*)pCVar11 + 0x140 ) )(pCVar11);
         Memory::free_static(pCVar11, false);
         pRVar9 = *(Ref**)in_RDI;
         goto LAB_00108fd2;
      }

   }

   pRVar9 = *(Ref**)in_RDI;
   LAB_00108fd2:local_98 = (Object*)0x0;
   pOVar6 = (Object*)__dynamic_cast(local_f0, &Object::typeinfo, &Mesh::typeinfo, 0);
   if (( pOVar6 != (Object*)0x0 ) && ( local_98 = pOVar6 ),cVar4 = RefCounted::reference(),cVar4 == '\0') {
      local_98 = (Object*)0x0;
   }

   MultiMesh::set_mesh(pRVar9);
   if (( ( local_98 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar6 = local_98,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
   Memory::free_static(pOVar6, false);
}
local_98 = (Object*)( (ulong)local_98 & 0xffffffff00000000 );_debug_mesh(in_RSI, 0, 0, (AABB*)( in_RSI + 100 ), in_RDI, (int*)&local_98);cVar4 = RefCounted::unreference();if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) {
   ( **(code**)( *(long*)local_f0 + 0x140 ) )(local_f0);
   Memory::free_static(local_f0, false);
}
if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return in_RDI;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* Voxelizer::_sort() */void Voxelizer::_sort(Voxelizer *this) {
   ulong *__dest;
   int iVar1;
   ulong uVar2;
   code *pcVar3;
   undefined8 uVar4;
   ulong uVar5;
   uint uVar6;
   ulong uVar7;
   undefined8 *puVar8;
   CellSort *pCVar9;
   uint *puVar10;
   long lVar11;
   CellSort *pCVar12;
   long lVar13;
   long lVar14;
   ulong *puVar15;
   uint *puVar16;
   size_t __n;
   undefined8 *puVar17;
   undefined8 *puVar18;
   long *plVar19;
   long lVar20;
   CellSort *pCVar21;
   CellSort *pCVar22;
   long lVar23;
   uint uVar24;
   ulong *puVar25;
   long lVar26;
   CellSort *pCVar27;
   long in_FS_OFFSET;
   bool bVar28;
   undefined1 auVar29[16];
   ulong local_c8;
   undefined4 uStack_a0;
   undefined4 uStack_90;
   undefined4 uStack_70;
   CellSort *local_60[2];
   long local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60[0] = (CellSort*)0x0;
   if (*(long*)( this + 8 ) == 0) {
      uVar24 = 0;
      CowData<Voxelizer::CellSort>::_copy_on_write((CowData<Voxelizer::CellSort>*)local_60);
      local_c8 = 0;
   }
 else {
      local_c8 = *(ulong*)( *(long*)( this + 8 ) + -8 );
      uVar24 = (uint)local_c8;
      local_c8 = local_c8 & 0xffffffff;
      if (uVar24 == 0) {
         CowData<Voxelizer::CellSort>::_copy_on_write((CowData<Voxelizer::CellSort>*)local_60);
      }
 else {
         CowData<Voxelizer::CellSort>::_copy_on_write((CowData<Voxelizer::CellSort>*)local_60);
         uVar7 = local_c8 * 0x10 - 1;
         uVar7 = uVar7 | uVar7 >> 1;
         uVar7 = uVar7 | uVar7 >> 2;
         uVar7 = uVar7 | uVar7 >> 4;
         uVar7 = uVar7 | uVar7 >> 8;
         uVar7 = uVar7 | uVar7 >> 0x10;
         puVar8 = (undefined8*)Memory::alloc_static(( uVar7 | uVar7 >> 0x20 ) + 0x11, false);
         if (puVar8 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         }
 else {
            local_60[0] = (CellSort*)( puVar8 + 2 );
            *puVar8 = 1;
            puVar17 = puVar8;
            do {
               puVar17[2] = 0;
               puVar18 = puVar17 + 2;
               *(undefined4*)( puVar17 + 3 ) = 0;
               puVar17 = puVar18;
            }
 while ( puVar18 != puVar8 + local_c8 * 2 );
            puVar8[1] = local_c8;
         }

         CowData<Voxelizer::CellSort>::_copy_on_write((CowData<Voxelizer::CellSort>*)local_60);
         puVar15 = (ulong*)( *(long*)( this + 8 ) + 0x4c );
         uVar6 = 0;
         pCVar21 = local_60[0];
         do {
            auVar29._8_8_ = 0;
            auVar29._0_8_ = *puVar15;
            *(uint*)( pCVar21 + 8 ) = uVar6;
            uVar6 = uVar6 + 1;
            puVar15 = (ulong*)( (long)puVar15 + 0x54 );
            auVar29 = pshuflw(auVar29, auVar29, 0xc6);
            *(long*)pCVar21 = auVar29._0_8_;
            pCVar21 = pCVar21 + 0x10;
         }
 while ( uVar24 != uVar6 );
      }

   }

   pCVar21 = local_60[0];
   if (( local_60[0] == (CellSort*)0x0 ) || ( lVar23 = lVar23 == 0 )) {
      LAB_00109632:if (pCVar21 == (CellSort*)0x0) {
         lVar23 = 0;
         goto LAB_00109ccf;
      }

   }
 else {
      CowData<Voxelizer::CellSort>::_copy_on_write((CowData<Voxelizer::CellSort>*)local_60);
      pCVar21 = local_60[0];
      if (lVar23 == 1) {
         SortArray<Voxelizer::CellSort,_DefaultComparator<Voxelizer::CellSort>,true>::introsort(0, 1, local_60[0], 0);
         goto LAB_00109632;
      }

      lVar11 = 0;
      lVar26 = lVar23;
      do {
         lVar26 = lVar26 >> 1;
         lVar11 = lVar11 + 1;
      }
 while ( lVar26 != 1 );
      SortArray<Voxelizer::CellSort,_DefaultComparator<Voxelizer::CellSort>,true>::introsort(0, lVar23, local_60[0], lVar11 * 2);
      pCVar9 = pCVar21 + 0x10;
      if (lVar23 < 0x11) {
         lVar26 = 1;
         pCVar27 = pCVar9;
         do {
            uVar2 = *(ulong*)pCVar27;
            uVar7 = *(ulong*)pCVar27;
            uStack_a0 = ( undefined4 ) * (ulong*)( pCVar27 + 8 );
            pCVar22 = pCVar27;
            if (uVar7 < *(ulong*)pCVar21) {
               do {
                  pCVar12 = pCVar22 + -0x10;
                  *(ulong*)pCVar22 = *(ulong*)( pCVar22 + -0x10 );
                  *(undefined4*)( pCVar22 + 8 ) = *(undefined4*)( pCVar22 + -8 );
                  pCVar22 = pCVar12;
               }
 while ( pCVar12 != pCVar21 );
               *(ulong*)pCVar21 = uVar2;
               *(undefined4*)( pCVar21 + 8 ) = uStack_a0;
            }
 else {
               if (uVar7 < *(ulong*)( pCVar27 + -0x10 )) {
                  if (lVar26 + -1 != 0) {
                     lVar14 = lVar26 << 4;
                     lVar11 = lVar26 + -1;
                     do {
                        *(undefined8*)( pCVar21 + lVar14 ) = *(undefined8*)( pCVar21 + lVar14 + -0x10 );
                        *(undefined4*)( pCVar21 + lVar14 + 8 ) = *(undefined4*)( pCVar21 + lVar14 + -8 );
                        lVar13 = lVar11 + -1;
                        if (*(ulong*)( pCVar21 + lVar14 + -0x20 ) <= uVar7) {
                           pCVar22 = pCVar21 + lVar11 * 0x10;
                           goto LAB_00109ca0;
                        }

                        lVar14 = lVar14 + -0x10;
                        lVar11 = lVar13;
                     }
 while ( lVar13 != 0 );
                  }

                  _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                  pCVar22 = pCVar9;
               }

               LAB_00109ca0:*(ulong*)pCVar22 = uVar2;
               *(undefined4*)( pCVar22 + 8 ) = uStack_a0;
            }

            lVar26 = lVar26 + 1;
            pCVar27 = pCVar27 + 0x10;
         }
 while ( lVar23 != lVar26 );
      }
 else {
         lVar26 = 1;
         pCVar27 = pCVar9;
         do {
            uVar2 = *(ulong*)pCVar27;
            uVar7 = *(ulong*)pCVar27;
            uStack_70 = ( undefined4 ) * (ulong*)( pCVar27 + 8 );
            pCVar22 = pCVar27;
            if (uVar7 < *(ulong*)pCVar21) {
               do {
                  pCVar12 = pCVar22 + -0x10;
                  *(ulong*)pCVar22 = *(ulong*)( pCVar22 + -0x10 );
                  *(undefined4*)( pCVar22 + 8 ) = *(undefined4*)( pCVar22 + -8 );
                  pCVar22 = pCVar12;
               }
 while ( pCVar12 != pCVar21 );
               *(ulong*)pCVar21 = uVar2;
               *(undefined4*)( pCVar21 + 8 ) = uStack_70;
            }
 else {
               if (uVar7 < *(ulong*)( pCVar27 + -0x10 )) {
                  if (lVar26 + -1 != 0) {
                     lVar14 = lVar26 << 4;
                     lVar11 = lVar26 + -1;
                     do {
                        *(undefined8*)( pCVar21 + lVar14 ) = *(undefined8*)( pCVar21 + lVar14 + -0x10 );
                        *(undefined4*)( pCVar21 + lVar14 + 8 ) = *(undefined4*)( pCVar21 + lVar14 + -8 );
                        lVar13 = lVar11 + -1;
                        if (*(ulong*)( pCVar21 + lVar14 + -0x20 ) <= uVar7) {
                           pCVar22 = pCVar21 + lVar11 * 0x10;
                           goto LAB_00109b5f;
                        }

                        lVar14 = lVar14 + -0x10;
                        lVar11 = lVar13;
                     }
 while ( lVar13 != 0 );
                  }

                  _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                  pCVar22 = pCVar9;
               }

               LAB_00109b5f:*(ulong*)pCVar22 = uVar2;
               *(undefined4*)( pCVar22 + 8 ) = uStack_70;
            }

            lVar26 = lVar26 + 1;
            pCVar27 = pCVar27 + 0x10;
         }
 while ( lVar26 != 0x10 );
         pCVar27 = pCVar21 + 0x100;
         lVar11 = -0x100;
         lVar26 = 0x10;
         do {
            uVar2 = *(ulong*)pCVar27;
            uVar5 = *(ulong*)( pCVar27 + 8 );
            uVar7 = *(ulong*)pCVar27;
            lVar14 = lVar26 + -1;
            lVar13 = lVar26 << 4;
            pCVar22 = pCVar27;
            if (uVar7 < *(ulong*)( pCVar27 + -0x10 )) {
               do {
                  *(undefined8*)( pCVar21 + lVar13 ) = *(undefined8*)( pCVar27 + lVar13 + lVar11 + -0x10 );
                  *(undefined4*)( pCVar21 + lVar13 + 8 ) = *(undefined4*)( pCVar27 + lVar13 + lVar11 + -8 );
                  lVar20 = lVar14 + -1;
                  if (*(ulong*)( pCVar21 + lVar13 + -0x20 ) <= uVar7) {
                     pCVar22 = pCVar21 + lVar14 * 0x10;
                     goto LAB_00109a14;
                  }

                  lVar13 = lVar13 + -0x10;
                  lVar14 = lVar20;
               }
 while ( lVar20 != 0 );
               _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
               pCVar22 = pCVar9;
            }

            LAB_00109a14:lVar26 = lVar26 + 1;
            pCVar27 = pCVar27 + 0x10;
            lVar11 = lVar11 + -0x10;
            *(ulong*)pCVar22 = uVar2;
            uStack_90 = (undefined4)uVar5;
            *(undefined4*)( pCVar22 + 8 ) = uStack_90;
         }
 while ( lVar23 != lVar26 );
      }

   }

   lVar23 = *(long*)( pCVar21 + -8 );
   if (lVar23 < 1) {
      LAB_00109ccf:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar23, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   if (*(short*)( pCVar21 + 6 ) == 0) {
      local_50[0] = 0;
      CowData<Voxelizer::Cell>::resize<false>((CowData<Voxelizer::Cell>*)local_50, local_c8);
      if (local_c8 == 0) {
         LAB_001098af:puVar25 = (ulong*)0x0;
      }
 else {
         uVar7 = local_c8 * 4 - 1;
         uVar7 = uVar7 | uVar7 >> 1;
         uVar7 = uVar7 | uVar7 >> 2;
         uVar7 = uVar7 | uVar7 >> 4;
         uVar7 = uVar7 | uVar7 >> 8;
         uVar7 = uVar7 | uVar7 >> 0x10;
         puVar15 = (ulong*)Memory::alloc_static(( uVar7 | uVar7 >> 0x20 ) + 0x11, false);
         if (puVar15 == (ulong*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            goto LAB_001098af;
         }

         puVar25 = puVar15 + 2;
         *puVar15 = 1;
         puVar15[1] = local_c8;
         if (1 < *puVar15) {
            uVar2 = puVar15[1];
            uVar7 = 0x10;
            __n = uVar2 * 4;
            if (__n != 0) {
               uVar7 = __n - 1 | __n - 1 >> 1;
               uVar7 = uVar7 | uVar7 >> 2;
               uVar7 = uVar7 | uVar7 >> 4;
               uVar7 = uVar7 | uVar7 >> 8;
               uVar7 = uVar7 | uVar7 >> 0x10;
               uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
            }

            puVar8 = (undefined8*)Memory::alloc_static(uVar7, false);
            if (puVar8 == (undefined8*)0x0) {
               _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
            }
 else {
               __dest = puVar8 + 2;
               *puVar8 = 1;
               puVar8[1] = uVar2;
               memcpy(__dest, puVar25, __n);
               LOCK();
               *puVar15 = *puVar15 - 1;
               UNLOCK();
               puVar25 = __dest;
               if (*puVar15 == 0) {
                  Memory::free_static(puVar15, false);
               }

            }

         }

      }

      if (uVar24 == 0) {
         CowData<Voxelizer::Cell>::_copy_on_write((CowData<Voxelizer::Cell>*)local_50);
      }
 else {
         pCVar9 = pCVar21 + 8;
         uVar7 = 0;
         do {
            iVar1 = *(int*)pCVar9;
            pCVar9 = pCVar9 + 0x10;
            *(int*)( (long)puVar25 + (long)iVar1 * 4 ) = (int)uVar7;
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulong)uVar6;
         }
 while ( uVar6 != uVar24 );
         lVar23 = *(long*)( this + 8 );
         CowData<Voxelizer::Cell>::_copy_on_write((CowData<Voxelizer::Cell>*)local_50);
         pCVar9 = pCVar21 + uVar7 * 0x10;
         puVar16 = (uint*)( local_50[0] + 0x20 );
         do {
            puVar8 = (undefined8*)( lVar23 + (long)*(int*)( pCVar21 + 8 ) * 0x54 );
            uVar4 = puVar8[1];
            *(undefined8*)( puVar16 + -8 ) = *puVar8;
            *(undefined8*)( puVar16 + -6 ) = uVar4;
            uVar4 = puVar8[3];
            *(undefined8*)( puVar16 + -4 ) = puVar8[2];
            *(undefined8*)( puVar16 + -2 ) = uVar4;
            uVar4 = puVar8[5];
            *(undefined8*)puVar16 = puVar8[4];
            *(undefined8*)( puVar16 + 2 ) = uVar4;
            uVar4 = puVar8[7];
            *(undefined8*)( puVar16 + 4 ) = puVar8[6];
            *(undefined8*)( puVar16 + 6 ) = uVar4;
            uVar4 = puVar8[9];
            *(undefined8*)( puVar16 + 8 ) = puVar8[8];
            *(undefined8*)( puVar16 + 10 ) = uVar4;
            puVar16[0xc] = *(uint*)( puVar8 + 10 );
            puVar10 = puVar16 + -8;
            do {
               if (*puVar10 != 0xffffffff) {
                  *puVar10 = *(uint*)( (long)puVar25 + ( ulong ) * puVar10 * 4 );
               }

               puVar10 = puVar10 + 1;
            }
 while ( puVar10 != puVar16 );
            pCVar21 = pCVar21 + 0x10;
            puVar16 = puVar16 + 0x15;
         }
 while ( pCVar9 != pCVar21 );
      }

      lVar23 = *(long*)( this + 8 );
      if (lVar23 != local_50[0]) {
         if (lVar23 != 0) {
            LOCK();
            plVar19 = (long*)( lVar23 + -0x10 );
            *plVar19 = *plVar19 + -1;
            UNLOCK();
            if (*plVar19 == 0) {
               lVar23 = *(long*)( this + 8 );
               *(undefined8*)( this + 8 ) = 0;
               Memory::free_static((void*)( lVar23 + -0x10 ), false);
            }
 else {
               *(undefined8*)( this + 8 ) = 0;
            }

         }

         if (local_50[0] != 0) {
            plVar19 = (long*)( local_50[0] + -0x10 );
            do {
               lVar23 = *plVar19;
               if (lVar23 == 0) goto LAB_00109813;
               LOCK();
               lVar26 = *plVar19;
               bVar28 = lVar23 == lVar26;
               if (bVar28) {
                  *plVar19 = lVar23 + 1;
                  lVar26 = lVar23;
               }

               UNLOCK();
            }
 while ( !bVar28 );
            if (lVar26 != -1) {
               *(long*)( this + 8 ) = local_50[0];
            }

         }

      }

      LAB_00109813:this[0xcc] = (Voxelizer)0x1;
      if (puVar25 != (ulong*)0x0) {
         puVar25 = puVar25 + -2;
         LOCK();
         *puVar25 = *puVar25 - 1;
         UNLOCK();
         if (*puVar25 == 0) {
            Memory::free_static(puVar25, false);
         }

      }

      if (local_50[0] != 0) {
         LOCK();
         plVar19 = (long*)( local_50[0] + -0x10 );
         *plVar19 = *plVar19 + -1;
         UNLOCK();
         if (*plVar19 == 0) {
            Memory::free_static((void*)( local_50[0] + -0x10 ), false);
         }

      }

      if (local_60[0] != (CellSort*)0x0) {
         LOCK();
         pCVar21 = local_60[0] + -0x10;
         *(long*)pCVar21 = *(long*)pCVar21 + -1;
         lVar23 = *(long*)pCVar21;
         UNLOCK();
         goto joined_r0x00109a73;
      }

   }
 else {
      _err_print_error("_sort", "scene/3d/voxelizer.cpp", 0x227, "Condition \"sorted_cells[0].level != 0\" is true.", 0, 0);
      LOCK();
      pCVar21 = pCVar21 + -0x10;
      *(long*)pCVar21 = *(long*)pCVar21 + -1;
      lVar23 = *(long*)pCVar21;
      UNLOCK();
      joined_r0x00109a73:if (lVar23 == 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static(local_60[0] + -0x10, false);
            return;
         }

         goto LAB_00109e75;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00109e75:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Voxelizer::end_bake() */void Voxelizer::end_bake(Voxelizer *this) {
   if (this[0xcc] != (Voxelizer)0x0) {
      _fixup_plot(this, 0, 0);
      return;
   }

   _sort(this);
   _fixup_plot(this, 0, 0);
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
      LAB_0010a076:lVar10 = 0;
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
      if (lVar10 == 0) goto LAB_0010a076;
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

      FUN_0010ae96();
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
         goto LAB_00109fcc;
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

   LAB_00109fcc:puVar8[-1] = param_1;
   return;
}
/* Voxelizer::get_sdf_3d_image(Vector<unsigned char>&, bool (*)(int, int)) const */undefined8 Voxelizer::get_sdf_3d_image(Voxelizer *this, Vector *param_1, _func_bool_int_int *param_2) {
   int iVar1;
   long lVar2;
   undefined4 uVar3;
   bool bVar4;
   char cVar5;
   uint uVar6;
   int iVar7;
   undefined4 *puVar10;
   undefined4 *puVar11;
   undefined4 *puVar12;
   ushort *puVar13;
   int iVar14;
   uint uVar15;
   ulong uVar16;
   int iVar17;
   uint uVar18;
   int iVar19;
   int iVar20;
   ulong uVar21;
   float fVar22;
   uint local_58;
   uint local_54;
   uint uVar8;
   ulong uVar9;
   puVar10 = (undefined4*)0x0;
   iVar20 = *(int*)( this + 0x80 );
   uVar8 = *(uint*)( this + 0x7c );
   iVar1 = *(int*)( this + 0x84 );
   uVar6 = iVar20 * uVar8 * iVar1;
   uVar9 = (ulong)uVar6;
   if (uVar9 != 0) {
      puVar10 = (undefined4*)Memory::alloc_static(uVar9 * 4, true);
      if (puVar10 == (undefined4*)0x0) {
         _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
      }
 else {
         *(ulong*)( puVar10 + -2 ) = uVar9;
      }

      uVar3 = _LC0._4_4_;
      puVar11 = puVar10;
      if (( uVar6 & 1 ) != 0) {
         *puVar10 = _LC0._4_4_;
         puVar11 = puVar10 + 1;
         if (puVar10 + 1 == puVar10 + uVar9) goto LAB_0010a18a;
      }

      do {
         *puVar11 = uVar3;
         puVar12 = puVar11 + 2;
         puVar11[1] = uVar3;
         puVar11 = puVar12;
      }
 while ( puVar12 != puVar10 + uVar9 );
   }

   LAB_0010a18a:lVar2 = *(long*)( this + 8 );
   iVar7 = iVar20 * uVar8;
   if (( lVar2 != 0 ) && ( iVar14 = iVar14 != 0 )) {
      iVar19 = *(int*)( this + 0x10 );
      puVar13 = (ushort*)( lVar2 + 0x4c );
      do {
         if (iVar19 <= (int)(uint)puVar13[3]) {
            puVar10[(uint)puVar13[2] * iVar7 + puVar13[1] * uVar8 + ( uint ) * puVar13] = 0;
         }

         puVar13 = puVar13 + 0x2a;
      }
 while ( (ushort*)( lVar2 + 0xa0 + ( ulong )(iVar14 - 1) * 0x54 ) != puVar13 );
   }

   iVar14 = iVar20 + uVar8 * 2;
   if ((int)uVar8 < 1) {
      local_58 = 0;
   }
 else {
      uVar16 = 0;
      if (param_2 != (_func_bool_int_int*)0x0) goto LAB_0010a3da;
      if (0 < iVar20) {
         while (true) {
            iVar19 = 0;
            uVar21 = uVar16;
            do {
               iVar19 = iVar19 + 1;
               edt((float*)( puVar10 + uVar21 ), iVar20 * uVar8, iVar1);
               uVar21 = ( ulong )((int)uVar21 + uVar8);
            }
 while ( iVar19 != iVar20 );
            uVar15 = (int)uVar16 + 1;
            uVar16 = (ulong)uVar15;
            if (uVar8 == uVar15) break;
            if (param_2 != (_func_bool_int_int*)0x0) {
               LAB_0010a3da:while (true) {
                  bVar4 = ( *param_2 )((int)uVar16, iVar14);
                  if (bVar4) goto LAB_0010a440;
                  if (0 < iVar20) break;
                  uVar15 = (int)uVar16 + 1;
                  uVar16 = (ulong)uVar15;
                  if (uVar8 == uVar15) goto LAB_0010a221;
               }
;
            }

         }
;
      }

      LAB_0010a221:uVar16 = 0;
      local_58 = uVar8;
      do {
         iVar19 = (int)uVar16;
         if (( param_2 != (_func_bool_int_int*)0x0 ) && ( bVar4 = bVar4 )) goto LAB_0010a440;
         iVar17 = 0;
         if (0 < iVar1) {
            do {
               iVar17 = iVar17 + 1;
               edt((float*)( puVar10 + uVar16 ), uVar8, iVar20);
               uVar16 = ( ulong )(uint)((int)uVar16 + iVar7);
            }
 while ( iVar17 != iVar1 );
         }

         uVar15 = iVar19 + 1;
         uVar16 = (ulong)uVar15;
         local_58 = local_58 + 1;
      }
 while ( uVar15 != uVar8 );
   }

   local_54 = 0;
   uVar15 = local_58 + iVar20;
   if (0 < iVar20) {
      do {
         if (( param_2 != (_func_bool_int_int*)0x0 ) && ( bVar4 = bVar4 )) {
            LAB_0010a440:Memory::free_static(puVar10, true);
            return 2;
         }

         iVar20 = 0;
         uVar18 = local_54;
         if (0 < iVar1) {
            do {
               uVar16 = (ulong)uVar18;
               iVar20 = iVar20 + 1;
               uVar18 = uVar18 + iVar7;
               edt((float*)( puVar10 + uVar16 ), 1, uVar8);
            }
 while ( iVar20 != iVar1 );
         }

         local_58 = local_58 + 1;
         local_54 = local_54 + uVar8;
      }
 while ( local_58 != uVar15 );
   }

   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( param_1 + 8 ), uVar9);
   uVar16 = 0;
   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( param_1 + 8 ));
   lVar2 = *(long*)( param_1 + 8 );
   if (uVar6 != 0) {
      do {
         fVar22 = (float)puVar10[uVar16];
         if (fVar22 < 0.0) {
            fVar22 = sqrtf(fVar22);
         }
 else {
            fVar22 = SQRT(fVar22);
         }

         uVar6 = (uint)(long)fVar22;
         uVar8 = 0xfe;
         if (uVar6 < 0xff) {
            uVar8 = uVar6;
         }

         cVar5 = (char)uVar8 + '\x01';
         if (uVar6 == 0) {
            cVar5 = '\0';
         }

         *(char*)( lVar2 + uVar16 ) = cVar5;
         uVar16 = uVar16 + 1;
      }
 while ( uVar16 != uVar9 );
   }

   Memory::free_static(puVar10, true);
   return 0;
}
/* Voxelizer::get_voxel_gi_data_cells() const */void Voxelizer::get_voxel_gi_data_cells(void) {
   uint *puVar1;
   long lVar2;
   ulong uVar3;
   code *pcVar4;
   double dVar5;
   double dVar6;
   double dVar7;
   float fVar8;
   float *pfVar9;
   uint uVar10;
   uint uVar11;
   ulong uVar12;
   float fVar13;
   long in_RSI;
   long lVar14;
   ulong uVar15;
   long in_RDI;
   uint uVar16;
   float fVar17;
   double dVar18;
   float fVar19;
   double dVar20;
   float fVar21;
   float fVar22;
   lVar14 = *(long*)( in_RSI + 8 );
   *(undefined8*)( in_RDI + 8 ) = 0;
   if (lVar14 == 0) {
      lVar14 = 0;
   }
 else {
      lVar14 = *(long*)( lVar14 + -8 ) << 4;
   }

   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( in_RDI + 8 ), lVar14);
   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( in_RDI + 8 ));
   fVar8 = _LC76;
   dVar7 = _LC78;
   dVar6 = _LC77;
   dVar5 = _LC58;
   lVar14 = *(long*)( in_RSI + 8 );
   lVar2 = *(long*)( in_RDI + 8 );
   if (( lVar14 != 0 ) && ( uVar3 = *(ulong*)( lVar14 + -8 ) ),(int)uVar3 != 0) {
      pfVar9 = (float*)( lVar14 + 0x20 );
      uVar10 = 0;
      uVar15 = 0;
      do {
         dVar18 = (double)pfVar9[10] * dVar5;
         *(uint*)( lVar2 + (ulong)uVar10 * 4 ) = ( uint ) * (ushort*)( (long)pfVar9 + 0x2e ) << 0xb | ( uint ) * (ushort*)( pfVar9 + 0xc ) << 0x15 | ( uint ) * (ushort*)( pfVar9 + 0xb );
         uVar12 = 0;
         if (( 0.0 <= dVar18 ) && ( uVar12 = dVar18 <= dVar5 )) {
            uVar12 = ( ulong )(uint)((int)(long)dVar18 << 0x18);
         }

         dVar18 = (double)pfVar9[2] * dVar5;
         if (0.0 <= dVar18) {
            if (dVar5 < dVar18) {
               uVar12 = ( ulong )((uint)uVar12 | 0xff0000);
            }
 else {
               uVar12 = ( ulong )((uint)uVar12 | (int)(long)dVar18 << 0x10);
            }

         }

         dVar18 = (double)pfVar9[1] * dVar5;
         if (0.0 <= dVar18) {
            if (dVar5 < dVar18) {
               uVar12 = CONCAT62(( int6 )(uVar12 >> 0x10), 0xff00);
            }
 else {
               uVar12 = ( ulong )((uint)uVar12 | (int)(long)dVar18 << 8);
            }

         }

         uVar11 = (uint)uVar12;
         dVar18 = (double)*pfVar9 * dVar5;
         if (0.0 <= dVar18) {
            if (dVar5 < dVar18) {
               uVar11 = (uint)CONCAT71(( int7 )(uVar12 >> 8), 0xff);
            }
 else {
               uVar11 = uVar11 | (uint)(long)dVar18;
            }

         }

         fVar13 = pfVar9[3];
         fVar19 = pfVar9[5];
         *(uint*)( lVar2 + ( ulong )(uVar10 + 1) * 4 ) = uVar11;
         fVar17 = pfVar9[4];
         puVar1 = (uint*)( lVar2 + ( ulong )(uVar10 + 2) * 4 );
         fVar21 = _LC74;
         if (fVar13 < 0.0) {
            if (0.0 <= fVar17) {
               fVar22 = 0.0;
               goto LAB_0010a895;
            }

            uVar11 = 0;
            if (0.0 <= fVar19) {
               fVar22 = 0.0;
               fVar17 = 0.0;
               goto joined_r0x0010a568;
            }

            LAB_0010a593:*puVar1 = uVar11;
         }
 else {
            if (fVar13 <= _LC73) {
               fVar22 = fVar13;
               if (0.0 <= fVar17) goto LAB_0010a895;
               if (0.0 <= fVar19) {
                  fVar17 = 0.0;
                  goto joined_r0x0010a568;
               }

               if (fVar13 <= 0.0) {
                  uVar11 = ( uint )(fVar13 + _LC2) & 0x1ff;
                  goto LAB_0010a593;
               }

               fVar19 = 0.0;
               fVar17 = 0.0;
            }
 else {
               fVar22 = _LC73;
               if (0.0 <= fVar17) {
                  LAB_0010a895:if (_LC73 < fVar17) {
                     fVar17 = _LC73;
                     if (fVar19 < 0.0) {
                        uVar11 = ( uint )(fVar22 + _LC76) & 0x1ff | 0xf803fe00;
                        goto LAB_0010a593;
                     }

                     goto joined_r0x0010a568;
                  }

                  if (0.0 <= fVar19) goto joined_r0x0010a568;
                  fVar19 = 0.0;
               }
 else {
                  uVar11 = 0xf80001ff;
                  if (fVar19 < 0.0) goto LAB_0010a593;
                  fVar17 = 0.0;
                  joined_r0x0010a568:if (_LC73 < fVar19) {
                     uVar11 = (int)( fVar17 + fVar8 ) << 9 | ( uint )(fVar22 + fVar8) & 0x1ff | 0xfffc0000;
                     goto LAB_0010a593;
                  }

                  fVar21 = fVar19;
                  if (fVar19 <= _LC74) {
                     fVar21 = _LC74;
                  }

               }

               fVar13 = fVar22;
               if (fVar22 <= fVar17) {
                  fVar13 = fVar17;
               }

            }

            if (fVar13 <= fVar21) {
               fVar13 = (float)( (int)fVar21 + 0x7804000U & 0x7f800000 );
               uVar11 = (int)( fVar17 + fVar13 ) << 9 | (int)( fVar19 + fVar13 ) << 0x12 | (int)fVar13 * 0x10 + 0x10000000U | ( uint )(fVar22 + fVar13) & 0x1ff;
               goto LAB_0010a593;
            }

            fVar13 = (float)( (int)fVar13 + 0x7804000U & 0x7f800000 );
            *puVar1 = (int)( fVar17 + fVar13 ) << 9 | (int)( fVar19 + fVar13 ) << 0x12 | (int)fVar13 * 0x10 + 0x10000000U | ( uint )(fVar22 + fVar13) & 0x1ff;
         }

         if ((long)uVar3 <= (long)uVar15) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar15, uVar3, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         fVar13 = pfVar9[7];
         fVar19 = pfVar9[6];
         fVar17 = pfVar9[8];
         fVar21 = fVar19 * fVar19 + fVar13 * fVar13 + fVar17 * fVar17;
         if (fVar21 == 0.0) {
            dVar18 = 0.0;
            uVar11 = 0;
            LAB_0010a5ef:uVar16 = 0x7f0000;
            if (dVar18 <= dVar6) {
               uVar16 = ( (int)dVar18 & 0xffU ) << 0x10;
            }

         }
 else {
            fVar21 = SQRT(fVar21);
            uVar11 = 0x80;
            dVar20 = (double)( fVar19 / fVar21 ) * dVar6;
            dVar18 = (double)( fVar17 / fVar21 ) * dVar6;
            if (dVar7 <= dVar20) {
               if (dVar20 <= dVar6) {
                  uVar11 = (int)dVar20 & 0xff;
               }
 else {
                  uVar11 = 0x7f;
               }

            }

            uVar16 = 0x8000;
            dVar20 = (double)( fVar13 / fVar21 ) * dVar6;
            if (dVar7 <= dVar20) {
               if (dVar20 <= dVar6) {
                  uVar16 = ( (int)dVar20 & 0xffU ) << 8;
               }
 else {
                  uVar16 = 0x7f00;
               }

            }

            uVar11 = uVar11 | uVar16;
            uVar16 = 0x800000;
            if (dVar7 <= dVar18) goto LAB_0010a5ef;
         }

         uVar15 = uVar15 + 1;
         pfVar9 = pfVar9 + 0x15;
         *(uint*)( lVar2 + ( ulong )(uVar10 + 3) * 4 ) = uVar11 | uVar16;
         uVar10 = uVar10 + 4;
      }
 while ( uVar15 != ( uVar3 & 0xffffffff ) );
   }

   return;
}
/* Voxelizer::get_voxel_gi_octree_cells() const */void Voxelizer::get_voxel_gi_octree_cells(void) {
   long lVar1;
   long lVar2;
   long lVar3;
   int iVar4;
   int iVar5;
   long lVar6;
   long in_RSI;
   long lVar7;
   int iVar8;
   long in_RDI;
   lVar7 = *(long*)( in_RSI + 8 );
   *(undefined8*)( in_RDI + 8 ) = 0;
   if (lVar7 == 0) {
      lVar7 = 0;
   }
 else {
      lVar7 = *(long*)( lVar7 + -8 ) << 5;
   }

   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( in_RDI + 8 ), lVar7);
   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( in_RDI + 8 ));
   lVar7 = *(long*)( in_RSI + 8 );
   lVar3 = *(long*)( in_RDI + 8 );
   if (( lVar7 != 0 ) && ( iVar5 = iVar5 != 0 )) {
      iVar8 = 0;
      lVar2 = lVar7 + 0x54;
      do {
         lVar6 = 0;
         do {
            lVar1 = lVar6 * 4;
            iVar4 = (int)lVar6;
            lVar6 = lVar6 + 1;
            *(undefined4*)( lVar3 + ( ulong )(uint)(iVar8 + iVar4) * 4 ) = *(undefined4*)( lVar7 + lVar1 );
         }
 while ( lVar6 != 8 );
         lVar7 = lVar7 + 0x54;
         iVar8 = iVar8 + 8;
      }
 while ( lVar7 != lVar2 + ( ulong )(iVar5 - 1) * 0x54 );
   }

   return;
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }

   return;
}
/* Object::_set(StringName const&, Variant const&) */undefined8 Object::_set(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_validate_property(PropertyInfo&) const */void Object::_validate_property(PropertyInfo *param_1) {
   return;
}
/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}
/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}
/* Texture2D::get_image() const */Texture2D * __thiscall Texture2D::get_image(Texture2D *this){
   *(undefined8*)this = 0;
   return this;
}
/* BaseMaterial3D::_can_do_next_pass() const */undefined8 BaseMaterial3D::_can_do_next_pass(void) {
   return 1;
}
/* BaseMaterial3D::_can_use_render_priority() const */undefined8 BaseMaterial3D::_can_use_render_priority(void) {
   return 1;
}
/* StandardMaterial3D::is_class_ptr(void*) const */uint StandardMaterial3D::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   return (uint)CONCAT71(0x10ed, in_RSI == &BaseMaterial3D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10ed, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10ed, in_RSI == &Material::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10ed, in_RSI == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10ed, in_RSI == &RefCounted::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* StandardMaterial3D::_getv(StringName const&, Variant&) const */undefined8 StandardMaterial3D::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* StandardMaterial3D::_property_can_revertv(StringName const&) const */undefined8 StandardMaterial3D::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* StandardMaterial3D::_property_get_revertv(StringName const&, Variant&) const */undefined8 StandardMaterial3D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* StandardMaterial3D::_notificationv(int, bool) */void StandardMaterial3D::_notificationv(int param_1, bool param_2) {
   return;
}
/* StandardMaterial3D::~StandardMaterial3D() */void StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this) {
   *(undefined***)this = &PTR__initialize_classv_0010eb30;
   BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D*)this);
   return;
}
/* StandardMaterial3D::~StandardMaterial3D() */void StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this) {
   *(undefined***)this = &PTR__initialize_classv_0010eb30;
   BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D*)this);
   operator_delete(this, 0x558);
   return;
}
/* StandardMaterial3D::_setv(StringName const&, Variant const&) */undefined8 StandardMaterial3D::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_set) {
      uVar1 = StandardMaterial3D::_set(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Voxelizer::Cell>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Voxelizer::Cell>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Voxelizer::CellSort>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Voxelizer::CellSort>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector3>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Color>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Color>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* Error CowData<Voxelizer::Cell>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<Voxelizer::Cell>::resize<false>(long param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_0010ae7e(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_0010ae96(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* StandardMaterial3D::_get_class_namev() const */undefined8 *StandardMaterial3D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010aef3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010aef3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "StandardMaterial3D");
         goto LAB_0010af5e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "StandardMaterial3D");
   LAB_0010af5e:return &_get_class_namev();
}
/* StandardMaterial3D::_validate_propertyv(PropertyInfo&) const */void StandardMaterial3D::_validate_propertyv(PropertyInfo *param_1) {
   Material::_validate_property(param_1);
   if ((code*)PTR__validate_property_00112008 == Material::_validate_property) {
      return;
   }

   BaseMaterial3D::_validate_property(param_1);
   return;
}
/* Image::~Image() */void Image::~Image(Image *this) {
   long *plVar1;
   long lVar2;
   *(code**)this = String::parse_latin1;
   if (*(long*)( this + 0x250 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x250 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x250 );
         *(undefined8*)( this + 0x250 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         Resource::~Resource((Resource*)this);
         return;
      }

   }

   Resource::~Resource((Resource*)this);
   return;
}
/* Material::get_save_class() const */Material * __thiscall Material::get_save_class(Material *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   String::parse_latin1((StrRange*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Material::get_base_extension() const */Material * __thiscall Material::get_base_extension(Material *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   String::parse_latin1((StrRange*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* StandardMaterial3D::get_class() const */void StandardMaterial3D::get_class(void) {
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
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_0010b3af;
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

      LAB_0010b3af:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010b463;
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
                     if (lVar5 == 0) goto LAB_0010b513;
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

         LAB_0010b513:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_0010b463;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_0010b463:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
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
      LAB_0010b738:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010b738;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x0010b756;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x0010b756:if (lVar2 == 0) {
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
/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Resource::_get_property_listv(Resource *this, List *param_1, bool param_2) {
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
   local_78 = "Resource";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Resource";
   local_98 = 0;
   local_70 = 8;
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
      LAB_0010bb38:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010bb38;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010bb55;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010bb55:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "Resource", false);
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
/* Image::~Image() */void Image::~Image(Image *this) {
   long *plVar1;
   long lVar2;
   *(code**)this = String::parse_latin1;
   if (*(long*)( this + 0x250 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x250 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x250 );
         *(undefined8*)( this + 0x250 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x268);
   return;
}
/* Material::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Material::_get_property_listv(Material *this, List *param_1, bool param_2) {
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
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Material";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Material";
   local_98 = 0;
   local_70 = 8;
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
      LAB_0010bfe8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010bfe8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010c005;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010c005:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "Material", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Resource::_get_property_listv((Resource*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* BaseMaterial3D::is_class(String const&) const */undefined8 BaseMaterial3D::is_class(BaseMaterial3D *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_0010c33f;
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

      LAB_0010c33f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010c3f3;
   }

   cVar6 = String::operator ==(param_1, "BaseMaterial3D");
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
                     if (lVar5 == 0) goto LAB_0010c4db;
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

         LAB_0010c4db:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_0010c3f3;
      }

      cVar6 = String::operator ==(param_1, "Material");
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
                        if (lVar5 == 0) goto LAB_0010c5bb;
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

            LAB_0010c5bb:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

            if (cVar6 != '\0') goto LAB_0010c3f3;
         }

         cVar6 = String::operator ==(param_1, "Resource");
         if (cVar6 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
               return uVar7;
            }

            goto LAB_0010c664;
         }

      }

   }

   LAB_0010c3f3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010c664:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* StandardMaterial3D::is_class(String const&) const */undefined8 StandardMaterial3D::is_class(StandardMaterial3D *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   long lVar4;
   char cVar5;
   long lVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar3 = *(long*)( lVar2 + 0x20 );
      if (lVar3 == 0) {
         local_60 = 0;
      }
 else {
         __s = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (__s == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_0010c6df;
                  LOCK();
                  lVar6 = *plVar1;
                  bVar8 = lVar4 == lVar6;
                  if (bVar8) {
                     *plVar1 = lVar4 + 1;
                     lVar6 = lVar4;
                  }

                  UNLOCK();
               }
 while ( !bVar8 );
               if (lVar6 != -1) {
                  local_60 = *(long*)( lVar3 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010c6df:cVar5 = String::operator ==(param_1, (String*)&local_60);
      lVar3 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (cVar5 != '\0') goto LAB_0010c793;
   }

   cVar5 = String::operator ==(param_1, "StandardMaterial3D");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = BaseMaterial3D::is_class((BaseMaterial3D*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_0010c793:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* BaseMaterial3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void BaseMaterial3D::_get_property_listv(BaseMaterial3D *this, List *param_1, bool param_2) {
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
      Material::_get_property_listv((Material*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "BaseMaterial3D";
   local_70 = 0xe;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "BaseMaterial3D";
   local_98 = 0;
   local_70 = 0xe;
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
      LAB_0010c968:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010c968;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010c985;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010c985:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "BaseMaterial3D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Material::_get_property_listv((Material*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* StandardMaterial3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void StandardMaterial3D::_get_property_listv(StandardMaterial3D *this, List *param_1, bool param_2) {
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
      BaseMaterial3D::_get_property_listv((BaseMaterial3D*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "StandardMaterial3D";
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "StandardMaterial3D";
   local_98 = 0;
   local_70 = 0x12;
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
      LAB_0010cdb8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010cdb8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010cdd5;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010cdd5:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "StandardMaterial3D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         BaseMaterial3D::_get_property_listv((BaseMaterial3D*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<Ref<Material>, Voxelizer::MaterialCache, HashMapHasherDefault,
   HashMapComparatorDefault<Ref<Material> >, DefaultTypedAllocator<HashMapElement<Ref<Material>,
   Voxelizer::MaterialCache> > >::operator[](Ref<Material> const&) */undefined1 * __thiscallHashMap<Ref<Material>,Voxelizer::MaterialCache,HashMapHasherDefault,HashMapComparatorDefault<Ref<Material>>,DefaultTypedAllocator<HashMapElement<Ref<Material>,Voxelizer::MaterialCache>>>::operator [](HashMap<Ref<Material>,Voxelizer::MaterialCache,HashMapHasherDefault,HashMapComparatorDefault<Ref<Material>>,DefaultTypedAllocator<HashMapElement<Ref<Material>,Voxelizer::MaterialCache>>> * this, Ref * param_1) * plVar1 ;uint *puVar2long lVar3void *pvVar4void *__sundefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]undefined1(*pauVar37)[16];char cVar38uint uVar39ulong uVar40undefined1 *puVar41ulong uVar42undefined8 uVar43void *__s_00undefined1(*pauVar44)[16];undefined8 *puVar45int iVar46uint uVar47long lVar48long lVar49uint uVar50undefined8 uVar51Object *pOVar52uint uVar53uint uVar54uint uVar55ulong uVar56long lVar57ulong uVar58ulong uVar59undefined1(*pauVar60)[16];long in_FS_OFFSETvoid *local_98long local_60[2]undefined8 local_50[2]long local_40local_98 = *(void**)( this + 8 );pOVar52 = *(Object**)param_1;local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar42 = ( ulong ) * (uint*)( this + 0x28 );uVar50 = *(uint*)( hash_table_size_primes + uVar42 * 4 );uVar58 = CONCAT44(0, uVar50);if (local_98 == (void*)0x0) {
   local_60[0] = 0;
   uVar42 = uVar58 * 4;
   uVar40 = uVar58 * 8;
   local_50[0] = 0;
   uVar43 = Memory::alloc_static(uVar42, false);
   *(undefined8*)( this + 0x10 ) = uVar43;
   local_98 = (void*)Memory::alloc_static(uVar40, false);
   *(void**)( this + 8 ) = local_98;
   if (uVar50 == 0) {
      pOVar52 = *(Object**)param_1;
      iVar46 = *(int*)( this + 0x2c );
      if (local_98 == (void*)0x0) goto LAB_0010d2e5;
   }
 else {
      pvVar4 = *(void**)( this + 0x10 );
      if (( local_98 < (void*)( (long)pvVar4 + uVar42 ) ) && ( pvVar4 < (void*)( (long)local_98 + uVar40 ) )) {
         uVar42 = 0;
         do {
            *(undefined4*)( (long)pvVar4 + uVar42 * 4 ) = 0;
            *(undefined8*)( (long)local_98 + uVar42 * 8 ) = 0;
            uVar42 = uVar42 + 1;
         }
 while ( uVar58 != uVar42 );
         pOVar52 = *(Object**)param_1;
         iVar46 = *(int*)( this + 0x2c );
      }
 else {
         memset(pvVar4, 0, uVar42);
         memset(local_98, 0, uVar40);
         pOVar52 = *(Object**)param_1;
         iVar46 = *(int*)( this + 0x2c );
      }

   }

   if (iVar46 != 0) {
      uVar42 = ( ulong ) * (uint*)( this + 0x28 );
      lVar57 = *(long*)( this + 0x10 );
      goto LAB_0010d77a;
   }

}
 else {
   iVar46 = *(int*)( this + 0x2c );
   if (iVar46 == 0) {
      local_60[0] = 0;
      local_50[0] = 0;
   }
 else {
      lVar3 = *(long*)( hash_table_size_primes_inv + uVar42 * 8 );
      uVar40 = (long)pOVar52 * 0x3ffff - 1;
      uVar40 = ( uVar40 ^ uVar40 >> 0x1f ) * 0x15;
      uVar40 = ( uVar40 ^ uVar40 >> 0xb ) * 0x41;
      uVar40 = uVar40 >> 0x16 ^ uVar40;
      uVar56 = uVar40 & 0xffffffff;
      if ((int)uVar40 == 0) {
         uVar56 = 1;
      }

      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar56 * lVar3;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar58;
      lVar48 = SUB168(auVar5 * auVar21, 8);
      lVar57 = *(long*)( this + 0x10 );
      uVar55 = SUB164(auVar5 * auVar21, 8);
      uVar47 = *(uint*)( lVar57 + lVar48 * 4 );
      if (uVar47 != 0) {
         uVar54 = 0;
         do {
            if (( uVar47 == (uint)uVar56 ) && ( pOVar52 == *(Object**)( *(long*)( (long)local_98 + lVar48 * 8 ) + 0x10 ) )) {
               puVar41 = (undefined1*)( *(long*)( (long)local_98 + (ulong)uVar55 * 8 ) + 0x18 );
               goto LAB_0010d2a3;
            }

            uVar54 = uVar54 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(uVar55 + 1) * lVar3;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar58;
            lVar48 = SUB168(auVar6 * auVar22, 8);
            uVar47 = *(uint*)( lVar57 + lVar48 * 4 );
            uVar55 = SUB164(auVar6 * auVar22, 8);
         }
 while ( ( uVar47 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar47 * lVar3,auVar23._8_8_ = 0,auVar23._0_8_ = uVar58,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar55 + uVar50 ) - SUB164(auVar7 * auVar23, 8)) * lVar3,auVar24._8_8_ = 0,auVar24._0_8_ = uVar58,uVar54 <= SUB164(auVar8 * auVar24, 8) );
      }

      local_60[0] = 0;
      local_50[0] = 0;
      LAB_0010d77a:uVar56 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar42 * 4 ));
      lVar3 = *(long*)( hash_table_size_primes_inv + uVar42 * 8 );
      uVar40 = (long)pOVar52 * 0x3ffff - 1;
      uVar40 = ( uVar40 ^ uVar40 >> 0x1f ) * 0x15;
      uVar40 = ( uVar40 ^ uVar40 >> 0xb ) * 0x41;
      uVar40 = uVar40 >> 0x16 ^ uVar40;
      uVar59 = uVar40 & 0xffffffff;
      if ((int)uVar40 == 0) {
         uVar59 = 1;
      }

      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar59 * lVar3;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar56;
      lVar48 = SUB168(auVar17 * auVar33, 8);
      uVar50 = *(uint*)( lVar57 + lVar48 * 4 );
      uVar47 = SUB164(auVar17 * auVar33, 8);
      if (uVar50 != 0) {
         uVar55 = 0;
         do {
            if (( uVar50 == (uint)uVar59 ) && ( *(Object**)( *(long*)( (long)local_98 + lVar48 * 8 ) + 0x10 ) == pOVar52 )) {
               lVar57 = *(long*)( (long)local_98 + (ulong)uVar47 * 8 );
               if (*(long*)( lVar57 + 0x20 ) != 0) {
                  CowData<Color>::_ref((CowData<Color>*)( lVar57 + 0x20 ), (CowData*)local_60);
               }

               if (*(long*)( lVar57 + 0x30 ) != 0) {
                  CowData<Color>::_ref((CowData<Color>*)( lVar57 + 0x30 ), (CowData*)local_50);
               }

               pauVar44 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar47 * 8 );
               goto LAB_0010d706;
            }

            uVar55 = uVar55 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = ( ulong )(uVar47 + 1) * lVar3;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar56;
            lVar48 = SUB168(auVar18 * auVar34, 8);
            uVar50 = *(uint*)( lVar57 + lVar48 * 4 );
            uVar47 = SUB164(auVar18 * auVar34, 8);
         }
 while ( ( uVar50 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar50 * lVar3,auVar35._8_8_ = 0,auVar35._0_8_ = uVar56,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + uVar42 * 4 ) + uVar47 ) - SUB164(auVar19 * auVar35, 8)) * lVar3,auVar36._8_8_ = 0,auVar36._0_8_ = uVar56,uVar55 <= SUB164(auVar20 * auVar36, 8) );
      }

   }

}
LAB_0010d2e5:if ((float)uVar58 * __LC40 < (float)( iVar46 + 1 )) {
   uVar50 = *(uint*)( this + 0x28 );
   if (uVar50 == 0x1c) {
      pauVar44 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0010d706;
   }

   uVar42 = ( ulong )(uVar50 + 1);
   uVar47 = *(uint*)( hash_table_size_primes + (ulong)uVar50 * 4 );
   *(undefined4*)( this + 0x2c ) = 0;
   if (uVar50 + 1 < 2) {
      uVar42 = 2;
   }

   uVar50 = *(uint*)( hash_table_size_primes + uVar42 * 4 );
   *(int*)( this + 0x28 ) = (int)uVar42;
   pvVar4 = *(void**)( this + 0x10 );
   uVar40 = (ulong)uVar50;
   uVar42 = uVar40 * 4;
   uVar58 = uVar40 * 8;
   uVar43 = Memory::alloc_static(uVar42, false);
   *(undefined8*)( this + 0x10 ) = uVar43;
   __s_00 = (void*)Memory::alloc_static(uVar58, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar50 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar58 ) ) && ( __s_00 < (void*)( (long)__s + uVar42 ) )) {
         uVar42 = 0;
         do {
            *(undefined4*)( (long)__s + uVar42 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar42 * 8 ) = 0;
            uVar42 = uVar42 + 1;
         }
 while ( uVar42 != uVar40 );
      }
 else {
         memset(__s, 0, uVar42);
         memset(__s_00, 0, uVar58);
      }

   }

   if (uVar47 == 0) {
      pOVar52 = *(Object**)param_1;
   }
 else {
      uVar42 = 0;
      do {
         uVar50 = *(uint*)( (long)pvVar4 + uVar42 * 4 );
         if (uVar50 != 0) {
            uVar53 = 0;
            lVar57 = *(long*)( this + 0x10 );
            uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar58 = CONCAT44(0, uVar55);
            lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar50 * lVar3;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar58;
            lVar48 = SUB168(auVar9 * auVar25, 8);
            puVar2 = (uint*)( lVar57 + lVar48 * 4 );
            iVar46 = SUB164(auVar9 * auVar25, 8);
            uVar54 = *puVar2;
            uVar43 = *(undefined8*)( (long)local_98 + uVar42 * 8 );
            while (uVar54 != 0) {
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar54 * lVar3;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar58;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(( iVar46 + uVar55 ) - SUB164(auVar10 * auVar26, 8)) * lVar3;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar58;
               uVar39 = SUB164(auVar11 * auVar27, 8);
               uVar51 = uVar43;
               if (uVar39 < uVar53) {
                  *puVar2 = uVar50;
                  puVar45 = (undefined8*)( (long)__s_00 + lVar48 * 8 );
                  uVar51 = *puVar45;
                  *puVar45 = uVar43;
                  uVar50 = uVar54;
                  uVar53 = uVar39;
               }

               uVar53 = uVar53 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(iVar46 + 1) * lVar3;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar58;
               lVar48 = SUB168(auVar12 * auVar28, 8);
               puVar2 = (uint*)( lVar57 + lVar48 * 4 );
               iVar46 = SUB164(auVar12 * auVar28, 8);
               uVar43 = uVar51;
               uVar54 = *puVar2;
            }
;
            *(undefined8*)( (long)__s_00 + lVar48 * 8 ) = uVar43;
            *puVar2 = uVar50;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar42 = uVar42 + 1;
      }
 while ( uVar42 != uVar47 );
      Memory::free_static(local_98, false);
      Memory::free_static(pvVar4, false);
      pOVar52 = *(Object**)param_1;
   }

}
if (( pOVar52 == (Object*)0x0 ) || ( cVar38 = cVar38 == '\0' )) {
   pauVar44 = (undefined1(*) [16])operator_new(0x38, "");
   *(undefined8*)pauVar44[2] = 0;
   *(undefined8*)pauVar44[1] = 0;
   *(undefined8*)pauVar44[3] = 0;
   *pauVar44 = (undefined1[16])0x0;
   puVar45 = *(undefined8**)( this + 0x20 );
   if (puVar45 != (undefined8*)0x0) goto LAB_0010d5cd;
   LAB_0010d562:*(undefined1(**) [16])( this + 0x18 ) = pauVar44;
}
 else {
   pauVar44 = (undefined1(*) [16])operator_new(0x38, "");
   *(Object**)pauVar44[1] = pOVar52;
   *pauVar44 = (undefined1[16])0x0;
   cVar38 = RefCounted::reference();
   if (cVar38 == '\0') {
      *(undefined8*)pauVar44[1] = 0;
   }

   *(undefined8*)pauVar44[2] = 0;
   *(undefined8*)pauVar44[3] = 0;
   cVar38 = RefCounted::unreference();
   if (( cVar38 != '\0' ) && ( cVar38 = cVar38 != '\0' )) {
      ( **(code**)( *(long*)pOVar52 + 0x140 ) )(pOVar52);
      Memory::free_static(pOVar52, false);
   }

   puVar45 = *(undefined8**)( this + 0x20 );
   if (puVar45 == (undefined8*)0x0) goto LAB_0010d562;
   LAB_0010d5cd:*puVar45 = pauVar44;
   *(undefined8**)( *pauVar44 + 8 ) = puVar45;
}
lVar57 = *(long*)param_1;lVar3 = *(long*)( this + 0x10 );*(undefined1(**) [16])( this + 0x20 ) = pauVar44;uVar42 = lVar57 * 0x3ffff - 1;uVar42 = ( uVar42 ^ uVar42 >> 0x1f ) * 0x15;uVar42 = ( uVar42 ^ uVar42 >> 0xb ) * 0x41;uVar42 = uVar42 >> 0x16 ^ uVar42;uVar58 = uVar42 & 0xffffffff;if ((int)uVar42 == 0) {
   uVar58 = 1;
}
uVar54 = 0;uVar50 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar42 = CONCAT44(0, uVar50);uVar55 = (uint)uVar58;lVar57 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar13._8_8_ = 0;auVar13._0_8_ = uVar58 * lVar57;auVar29._8_8_ = 0;auVar29._0_8_ = uVar42;lVar49 = SUB168(auVar13 * auVar29, 8);lVar48 = *(long*)( this + 8 );puVar2 = (uint*)( lVar3 + lVar49 * 4 );iVar46 = SUB164(auVar13 * auVar29, 8);uVar47 = *puVar2;pauVar37 = pauVar44;while (uVar47 != 0) {
   auVar14._8_8_ = 0;
   auVar14._0_8_ = (ulong)uVar47 * lVar57;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = uVar42;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(( uVar50 + iVar46 ) - SUB164(auVar14 * auVar30, 8)) * lVar57;
   auVar31._8_8_ = 0;
   auVar31._0_8_ = uVar42;
   uVar55 = SUB164(auVar15 * auVar31, 8);
   pauVar60 = pauVar37;
   if (uVar55 < uVar54) {
      *puVar2 = (uint)uVar58;
      uVar58 = (ulong)uVar47;
      puVar45 = (undefined8*)( lVar48 + lVar49 * 8 );
      pauVar60 = (undefined1(*) [16])*puVar45;
      *puVar45 = pauVar37;
      uVar54 = uVar55;
   }

   uVar55 = (uint)uVar58;
   uVar54 = uVar54 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(iVar46 + 1) * lVar57;
   auVar32._8_8_ = 0;
   auVar32._0_8_ = uVar42;
   lVar49 = SUB168(auVar16 * auVar32, 8);
   puVar2 = (uint*)( lVar3 + lVar49 * 4 );
   iVar46 = SUB164(auVar16 * auVar32, 8);
   pauVar37 = pauVar60;
   uVar47 = *puVar2;
}
;*(undefined1(**) [16])( lVar48 + lVar49 * 8 ) = pauVar37;*puVar2 = uVar55;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0010d706:puVar41 = pauVar44[1] + 8;if (local_60[0] != 0) {
   LOCK();
   plVar1 = (long*)( local_60[0] + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      Memory::free_static((void*)( local_60[0] + -0x10 ), false);
   }

}
LAB_0010d2a3:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return puVar41;}/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
   long *plVar1;
   long lVar2;
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

   lVar2 = *(long*)this;
   *(undefined8*)this = 0;
   Memory::free_static((void*)( lVar2 + -0x10 ), false);
   return;
}
/* StandardMaterial3D::_initialize_classv() */void StandardMaterial3D::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (BaseMaterial3D::initialize_class() == '\0') {
         if (Material::initialize_class() == '\0') {
            if (Resource::initialize_class() == '\0') {
               if (RefCounted::initialize_class() == '\0') {
                  Object::initialize_class();
                  local_68 = 0;
                  local_50 = 6;
                  local_58 = "Object";
                  String::parse_latin1((StrRange*)&local_68);
                  StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
                  local_58 = "RefCounted";
                  local_70 = 0;
                  local_50 = 10;
                  String::parse_latin1((StrRange*)&local_70);
                  StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
                  ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
                  if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                  if ((code*)PTR__bind_methods_00112018 != RefCounted::_bind_methods) {
                     RefCounted::_bind_methods();
                  }

                  RefCounted::initialize_class()::initialized =
                  '\x01';
               }

               local_58 = "RefCounted";
               local_68 = 0;
               local_50 = 10;
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
               local_58 = "Resource";
               local_70 = 0;
               local_50 = 8;
               String::parse_latin1((StrRange*)&local_70);
               StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               Resource::_bind_methods();
               Resource::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "Resource";
            local_50 = 8;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "Material";
            local_70 = 0;
            local_50 = 8;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
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

            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            Material::_bind_methods();
            Material::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Material";
         local_68 = 0;
         local_50 = 8;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "BaseMaterial3D";
         local_70 = 0;
         local_50 = 0xe;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
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

         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         lVar2 = local_68;
         if (local_68 != 0) {
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if ((code*)PTR__bind_methods_00112010 != Material::_bind_methods) {
            BaseMaterial3D::_bind_methods();
         }

         BaseMaterial3D::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "BaseMaterial3D";
      local_68 = 0;
      local_50 = 0xe;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "StandardMaterial3D";
      local_70 = 0;
      local_50 = 0x12;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
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

      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      lVar2 = local_68;
      if (local_68 != 0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<Vector3>::_realloc(long) */undefined8 CowData<Vector3>::_realloc(CowData<Vector3> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Vector3>::resize<false>(long) */undefined8 CowData<Vector3>::resize<false>(CowData<Vector3> *this, long param_1) {
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
      lVar3 = lVar8 * 0xc;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0xc == 0) {
      LAB_0010e420:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 0xc - 1;
   uVar4 = uVar4 >> 1 | uVar4;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar7 = uVar4 + 1;
   if (lVar7 == 0) goto LAB_0010e420;
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
      LAB_0010e38c:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar9[-1];
      if (param_1 <= lVar3) goto LAB_0010e31b;
   }
 else {
      if (lVar8 != 0) {
         uVar6 = _realloc(this, lVar7);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         goto LAB_0010e38c;
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

   memset((void*)( (long)puVar9 + lVar3 * 0xc ), 0, ( param_1 - lVar3 ) * 0xc);
   LAB_0010e31b:puVar9[-1] = param_1;
   return 0;
}
/* CowData<Color>::_unref() */void CowData<Color>::_unref(CowData<Color> *this) {
   long *plVar1;
   long lVar2;
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

   lVar2 = *(long*)this;
   *(undefined8*)this = 0;
   Memory::free_static((void*)( lVar2 + -0x10 ), false);
   return;
}
/* CowData<int>::_realloc(long) */undefined8 CowData<int>::_realloc(CowData<int> *this, long param_1) {
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
/* void memdelete<Image>(Image*) */void memdelete<Image>(Image *param_1) {
   long *plVar1;
   long lVar2;
   char cVar3;
   cVar3 = predelete_handler((Object*)param_1);
   if (cVar3 == '\0') {
      return;
   }

   if (*(code**)( *(long*)param_1 + 0x140 ) == Image::~Image) {
      *(code**)param_1 = String::parse_latin1;
      if (*(long*)( param_1 + 0x250 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( param_1 + 0x250 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( param_1 + 0x250 );
            *(undefined8*)( param_1 + 0x250 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      Resource::~Resource((Resource*)param_1);
      Memory::free_static(param_1, false);
      return;
   }

   ( **(code**)( *(long*)param_1 + 0x140 ) )(param_1);
   Memory::free_static(param_1, false);
   return;
}
/* CowData<Voxelizer::Cell>::_realloc(long) */undefined8 CowData<Voxelizer::Cell>::_realloc(CowData<Voxelizer::Cell> *this, long param_1) {
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
      LAB_0010e930:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar11 == 0) goto LAB_0010e930;
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
      LAB_0010e89c:puVar10 = *(undefined8**)this;
      if (puVar10 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar4 = puVar10[-1];
      if (param_1 <= lVar4) goto LAB_0010e830;
   }
 else {
      if (lVar12 != 0) {
         uVar9 = _realloc(this, lVar11);
         if ((int)uVar9 != 0) {
            return uVar9;
         }

         goto LAB_0010e89c;
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

   uVar3 = _UNK_0010ef98;
   uVar9 = __LC36;
   puVar7 = puVar10 + lVar4 * 2;
   puVar6 = puVar7;
   if (( ( param_1 - lVar4 ) * 0x10 & 0x10U ) != 0) {
      *puVar7 = __LC36;
      puVar7[1] = uVar3;
      puVar6 = puVar7 + 2;
      if (puVar7 + ( param_1 - lVar4 ) * 2 == puVar7 + 2) goto LAB_0010e830;
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
   LAB_0010e830:puVar10[-1] = param_1;
   return 0;
}
/* CowData<Voxelizer::CellSort>::_realloc(long) */undefined8 CowData<Voxelizer::CellSort>::_realloc(CowData<Voxelizer::CellSort> *this, long param_1) {
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
/* CowData<unsigned int>::_realloc(long) */undefined8 CowData<unsigned_int>::_realloc(CowData<unsigned_int> *this, long param_1) {
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
/* WARNING: Control flow encountered bad instruction data *//* Image::~Image() */void Image::~Image(Image *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StandardMaterial3D::~StandardMaterial3D() */void StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


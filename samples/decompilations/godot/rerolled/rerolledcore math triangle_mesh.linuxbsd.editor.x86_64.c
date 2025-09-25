/* CowData<TriangleMesh::BVH>::_copy_on_write() [clone .isra.0] */void CowData<TriangleMesh::BVH>::_copy_on_write(CowData<TriangleMesh::BVH> *this) {
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
   __n = lVar2 * 0x30;
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
/* CowData<TriangleMesh::Triangle>::_copy_on_write() [clone .isra.0] */void CowData<TriangleMesh::Triangle>::_copy_on_write(CowData<TriangleMesh::Triangle> *this) {
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
   __n = lVar2 * 0x1c;
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
/* TriangleMesh::_create_bvh(TriangleMesh::BVH*, TriangleMesh::BVH**, int, int, int, int&, int&) */int TriangleMesh::_create_bvh(TriangleMesh *this, BVH *param_1, BVH **param_2, int param_3, int param_4, int param_5, int *param_6, int *param_7) {
   BVH **ppBVar1;
   BVH *pBVar2;
   int iVar3;
   undefined4 uVar4;
   undefined4 uVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   BVH **ppBVar9;
   long lVar10;
   int iVar11;
   BVH *pBVar12;
   long lVar13;
   long lVar14;
   long lVar15;
   long lVar16;
   BVH **ppBVar17;
   BVH *pBVar18;
   long lVar19;
   long lVar20;
   size_t sVar21;
   BVH *pBVar22;
   long in_FS_OFFSET;
   bool bVar23;
   float fVar24;
   float fVar25;
   float fVar26;
   float fVar27;
   long local_b0;
   undefined8 local_58;
   float fStack_50;
   float fStack_4c;
   float fStack_48;
   float fStack_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_6 < param_5) {
      *param_6 = param_5;
   }

   if (param_4 == 1) {
      iVar3 = (int)( (long)param_2[param_3] - (long)param_1 >> 4 ) * -0x55555555;
      goto LAB_001006f7;
   }

   if (param_4 == 0) {
      iVar3 = -1;
      goto LAB_001006f7;
   }

   ppBVar1 = param_2 + param_3;
   pBVar22 = *ppBVar1;
   local_58 = *(undefined8*)pBVar22;
   fStack_50 = (float)*(undefined8*)( pBVar22 + 8 );
   fStack_4c = (float)( ( ulong ) * (undefined8*)( pBVar22 + 8 ) >> 0x20 );
   fStack_48 = (float)*(undefined8*)( pBVar22 + 0x10 );
   fStack_44 = (float)( ( ulong ) * (undefined8*)( pBVar22 + 0x10 ) >> 0x20 );
   if (1 < param_4) {
      ppBVar17 = ppBVar1;
      do {
         ppBVar17 = ppBVar17 + 1;
         AABB::merge_with((AABB*)&local_58);
      }
 while ( param_2 + ( ulong )(param_4 - 2) + (long)param_3 + 1 != ppBVar17 );
   }

   iVar3 = AABB::get_longest_axis_index();
   iVar11 = param_4 / 2;
   if (iVar3 == 1) {
      lVar14 = (long)iVar11;
      lVar10 = (long)param_4;
      if (lVar14 != lVar10) {
         lVar19 = 0;
         lVar16 = lVar10;
         do {
            lVar16 = lVar16 >> 1;
            lVar19 = lVar19 + 1;
         }
 while ( lVar16 != 1 );
         lVar19 = lVar19 * 2;
         lVar13 = 0;
         lVar16 = 1;
         lVar15 = lVar10;
         ppBVar17 = ppBVar1;
         if (3 < lVar10) {
            LAB_00100e28:pBVar22 = ppBVar1[lVar13];
            lVar19 = lVar19 + -1;
            pBVar12 = ppBVar1[lVar10 + -1];
            pBVar2 = ppBVar1[( lVar15 >> 1 ) + lVar13];
            fVar24 = *(float*)( pBVar22 + 0x1c );
            fVar25 = *(float*)( pBVar12 + 0x1c );
            fVar27 = *(float*)( pBVar2 + 0x1c );
            if (fVar27 <= fVar24) {
               pBVar18 = pBVar22;
               fVar26 = fVar24;
               if (( fVar25 <= fVar24 ) && ( pBVar18= pBVar12,fVar26 = fVar25,fVar25 <= fVar27 )) {
                  pBVar18 = pBVar2;
                  fVar26 = fVar27;
               }

            }
 else {
               pBVar18 = pBVar2;
               fVar26 = fVar27;
               if (( fVar25 <= fVar27 ) && ( pBVar18= pBVar12,fVar26 = fVar25,fVar25 <= fVar24 )) {
                  pBVar18 = pBVar22;
                  fVar26 = fVar24;
               }

            }

            lVar16 = lVar10;
            lVar15 = lVar13;
            do {
               if (fVar24 < fVar26) {
                  if (lVar10 + -1 == lVar15) {
                     _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
                     fVar26 = *(float*)( pBVar18 + 0x1c );
                     goto LAB_00100eb6;
                  }

               }
 else {
                  LAB_00100eb6:lVar20 = lVar16 + -1;
                  ppBVar17 = ppBVar1 + lVar20;
                  if (fVar26 < *(float*)( *ppBVar17 + 0x1c )) {
                     ppBVar9 = ppBVar1 + lVar16 + -2;
                     while (lVar20 != lVar13) {
                        lVar20 = lVar20 + -1;
                        ppBVar17 = ppBVar9;
                        if (*(float*)( *ppBVar9 + 0x1c ) <= fVar26) goto LAB_00100f25;
                        ppBVar9 = ppBVar9 + -1;
                     }
;
                     _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
                     lVar20 = lVar13;
                  }

                  LAB_00100f25:if (lVar20 <= lVar15) goto LAB_00100f48;
                  pBVar22 = ppBVar1[lVar15];
                  fVar26 = *(float*)( pBVar18 + 0x1c );
                  ppBVar1[lVar15] = *ppBVar17;
                  *ppBVar17 = pBVar22;
                  lVar16 = lVar20;
               }

               lVar20 = lVar15 + 1;
               lVar15 = lVar15 + 1;
               fVar24 = *(float*)( ppBVar1[lVar20] + 0x1c );
            }
 while ( true );
         }

         LAB_00101360:sVar21 = ( lVar16 - lVar13 ) * 8;
         do {
            pBVar22 = ppBVar1[lVar16];
            fVar24 = *(float*)( pBVar22 + 0x1c );
            if (fVar24 < *(float*)( *ppBVar17 + 0x1c )) {
               if (lVar13 < lVar16) {
                  memmove(ppBVar1 + lVar13 + 1, ppBVar1 + lVar13, sVar21);
               }

               *ppBVar17 = pBVar22;
            }
 else {
               pBVar12 = ppBVar1[lVar16 + -1];
               lVar14 = lVar16 + -1;
               if (fVar24 < *(float*)( pBVar12 + 0x1c )) {
                  do {
                     lVar19 = lVar14;
                     if (lVar19 == 0) {
                        _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                        ppBVar9 = ppBVar1 + 1;
                        goto LAB_0010144e;
                     }

                     ppBVar1[lVar19 + 1] = pBVar12;
                     pBVar12 = ppBVar1[lVar19 + -1];
                     lVar14 = lVar19 + -1;
                  }
 while ( fVar24 < *(float*)( pBVar12 + 0x1c ) );
                  ppBVar9 = ppBVar1 + lVar19;
               }
 else {
                  ppBVar9 = ppBVar1 + lVar16;
               }

               LAB_0010144e:*ppBVar9 = pBVar22;
            }

            lVar16 = lVar16 + 1;
            sVar21 = sVar21 + 8;
         }
 while ( lVar16 != lVar10 );
      }

   }
 else if (iVar3 == 2) {
      lVar14 = (long)iVar11;
      lVar10 = (long)param_4;
      if (lVar14 != lVar10) {
         lVar19 = 0;
         lVar16 = lVar10;
         do {
            lVar16 = lVar16 >> 1;
            lVar19 = lVar19 + 1;
         }
 while ( lVar16 != 1 );
         lVar19 = lVar19 * 2;
         lVar13 = 0;
         lVar16 = 1;
         lVar15 = lVar10;
         ppBVar17 = ppBVar1;
         if (3 < lVar10) {
            LAB_00100910:pBVar22 = ppBVar1[lVar13];
            lVar19 = lVar19 + -1;
            pBVar12 = ppBVar1[lVar10 + -1];
            pBVar2 = ppBVar1[( lVar15 >> 1 ) + lVar13];
            fVar24 = *(float*)( pBVar22 + 0x20 );
            fVar25 = *(float*)( pBVar12 + 0x20 );
            fVar27 = *(float*)( pBVar2 + 0x20 );
            if (fVar27 <= fVar24) {
               pBVar18 = pBVar22;
               fVar26 = fVar24;
               if (( fVar25 <= fVar24 ) && ( pBVar18= pBVar12,fVar26 = fVar25,fVar25 <= fVar27 )) {
                  pBVar18 = pBVar2;
                  fVar26 = fVar27;
               }

            }
 else {
               pBVar18 = pBVar2;
               fVar26 = fVar27;
               if (( fVar25 <= fVar27 ) && ( pBVar18= pBVar12,fVar26 = fVar25,fVar25 <= fVar24 )) {
                  pBVar18 = pBVar22;
                  fVar26 = fVar24;
               }

            }

            lVar16 = lVar13;
            lVar15 = lVar10;
            do {
               if (fVar24 < fVar26) {
                  if (lVar10 + -1 == lVar16) {
                     _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
                     fVar26 = *(float*)( pBVar18 + 0x20 );
                     goto LAB_0010099e;
                  }

               }
 else {
                  LAB_0010099e:lVar20 = lVar15 + -1;
                  ppBVar17 = ppBVar1 + lVar20;
                  if (fVar26 < *(float*)( *ppBVar17 + 0x20 )) {
                     ppBVar9 = ppBVar1 + lVar15 + -2;
                     while (lVar20 != lVar13) {
                        lVar20 = lVar20 + -1;
                        ppBVar17 = ppBVar9;
                        if (*(float*)( *ppBVar9 + 0x20 ) <= fVar26) goto LAB_00100a15;
                        ppBVar9 = ppBVar9 + -1;
                     }
;
                     _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
                     lVar20 = lVar13;
                  }

                  LAB_00100a15:if (lVar20 <= lVar16) goto LAB_00100a38;
                  pBVar22 = ppBVar1[lVar16];
                  fVar26 = *(float*)( pBVar18 + 0x20 );
                  ppBVar1[lVar16] = *ppBVar17;
                  *ppBVar17 = pBVar22;
                  lVar15 = lVar20;
               }

               lVar20 = lVar16 + 1;
               lVar16 = lVar16 + 1;
               fVar24 = *(float*)( ppBVar1[lVar20] + 0x20 );
            }
 while ( true );
         }

         LAB_00101253:sVar21 = ( lVar16 - lVar13 ) * 8;
         do {
            pBVar22 = ppBVar1[lVar16];
            fVar24 = *(float*)( pBVar22 + 0x20 );
            if (fVar24 < *(float*)( *ppBVar17 + 0x20 )) {
               if (lVar13 < lVar16) {
                  memmove(ppBVar1 + lVar13 + 1, ppBVar1 + lVar13, sVar21);
               }

               *ppBVar17 = pBVar22;
            }
 else {
               pBVar12 = ppBVar1[lVar16 + -1];
               lVar14 = lVar16 + -1;
               if (fVar24 < *(float*)( pBVar12 + 0x20 )) {
                  do {
                     lVar19 = lVar14;
                     if (lVar19 == 0) {
                        _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                        ppBVar9 = ppBVar1 + 1;
                        goto LAB_0010132c;
                     }

                     ppBVar1[lVar19 + 1] = pBVar12;
                     pBVar12 = ppBVar1[lVar19 + -1];
                     lVar14 = lVar19 + -1;
                  }
 while ( fVar24 < *(float*)( pBVar12 + 0x20 ) );
                  ppBVar9 = ppBVar1 + lVar19;
               }
 else {
                  ppBVar9 = ppBVar1 + lVar16;
               }

               LAB_0010132c:*ppBVar9 = pBVar22;
            }

            lVar16 = lVar16 + 1;
            sVar21 = sVar21 + 8;
         }
 while ( lVar10 != lVar16 );
      }

   }
 else if (iVar3 == 0) {
      lVar14 = (long)param_4;
      lVar16 = (long)iVar11;
      lVar10 = 0;
      lVar19 = lVar14;
      if (lVar16 != lVar14) {
         do {
            lVar19 = lVar19 >> 1;
            lVar10 = lVar10 + 1;
         }
 while ( lVar19 != 1 );
         lVar10 = lVar10 * 2;
         lVar13 = 0;
         lVar19 = 1;
         lVar15 = lVar14;
         ppBVar17 = ppBVar1;
         if (3 < lVar14) {
            LAB_00100798:pBVar22 = ppBVar1[lVar13];
            lVar10 = lVar10 + -1;
            pBVar12 = ppBVar1[lVar14 + -1];
            pBVar2 = ppBVar1[( lVar15 >> 1 ) + lVar13];
            fVar24 = *(float*)( pBVar22 + 0x18 );
            fVar25 = *(float*)( pBVar12 + 0x18 );
            fVar27 = *(float*)( pBVar2 + 0x18 );
            if (fVar27 <= fVar24) {
               pBVar18 = pBVar22;
               fVar26 = fVar24;
               if (( fVar25 <= fVar24 ) && ( pBVar18= pBVar12,fVar26 = fVar25,fVar25 <= fVar27 )) {
                  pBVar18 = pBVar2;
                  fVar26 = fVar27;
               }

            }
 else {
               pBVar18 = pBVar2;
               fVar26 = fVar27;
               if (( fVar25 <= fVar27 ) && ( pBVar18= pBVar12,fVar26 = fVar25,fVar25 <= fVar24 )) {
                  pBVar18 = pBVar22;
                  fVar26 = fVar24;
               }

            }

            lVar19 = lVar13;
            lVar15 = lVar14;
            do {
               if (fVar24 < fVar26) {
                  if (lVar14 + -1 == lVar19) {
                     _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
                     fVar26 = *(float*)( pBVar18 + 0x18 );
                     goto LAB_00100826;
                  }

               }
 else {
                  LAB_00100826:lVar20 = lVar15 + -1;
                  ppBVar17 = ppBVar1 + lVar20;
                  if (fVar26 < *(float*)( *ppBVar17 + 0x18 )) {
                     ppBVar9 = ppBVar1 + lVar15 + -2;
                     while (lVar20 != lVar13) {
                        lVar20 = lVar20 + -1;
                        ppBVar17 = ppBVar9;
                        if (*(float*)( *ppBVar9 + 0x18 ) <= fVar26) goto LAB_00100895;
                        ppBVar9 = ppBVar9 + -1;
                     }
;
                     _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
                     lVar20 = lVar13;
                  }

                  LAB_00100895:if (lVar20 <= lVar19) goto LAB_00100bb8;
                  pBVar22 = ppBVar1[lVar19];
                  fVar26 = *(float*)( pBVar18 + 0x18 );
                  ppBVar1[lVar19] = *ppBVar17;
                  *ppBVar17 = pBVar22;
                  lVar15 = lVar20;
               }

               lVar20 = lVar19 + 1;
               lVar19 = lVar19 + 1;
               fVar24 = *(float*)( ppBVar1[lVar20] + 0x18 );
            }
 while ( true );
         }

         LAB_00101482:sVar21 = ( lVar19 - lVar13 ) * 8;
         do {
            pBVar22 = ppBVar1[lVar19];
            fVar24 = *(float*)( pBVar22 + 0x18 );
            if (fVar24 < *(float*)( *ppBVar17 + 0x18 )) {
               if (lVar13 < lVar19) {
                  memmove(ppBVar1 + lVar13 + 1, ppBVar1 + lVar13, sVar21);
               }

               *ppBVar17 = pBVar22;
            }
 else {
               pBVar12 = ppBVar1[lVar19 + -1];
               lVar10 = lVar19 + -1;
               if (fVar24 < *(float*)( pBVar12 + 0x18 )) {
                  do {
                     lVar16 = lVar10;
                     if (lVar16 == 0) {
                        _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                        ppBVar9 = ppBVar1 + 1;
                        goto LAB_0010156a;
                     }

                     ppBVar1[lVar16 + 1] = pBVar12;
                     pBVar12 = ppBVar1[lVar16 + -1];
                     lVar10 = lVar16 + -1;
                  }
 while ( fVar24 < *(float*)( pBVar12 + 0x18 ) );
                  ppBVar9 = ppBVar1 + lVar16;
               }
 else {
                  ppBVar9 = ppBVar1 + lVar19;
               }

               LAB_0010156a:*ppBVar9 = pBVar22;
            }

            lVar19 = lVar19 + 1;
            sVar21 = sVar21 + 8;
         }
 while ( lVar19 != lVar14 );
      }

   }

   goto LAB_00100603;
   LAB_00100f48:if (lVar14 < lVar15) {
      lVar10 = lVar15;
      lVar15 = lVar13;
   }

   lVar13 = lVar15;
   lVar15 = lVar10 - lVar13;
   if (lVar15 < 4) {
      if (( lVar10 == lVar13 ) || ( lVar16 = lVar10 == lVar16 )) goto LAB_00100603;
      ppBVar17 = ppBVar1 + lVar13;
      goto LAB_00101360;
   }

   if (lVar19 == 0) goto code_r0x00100f7e;
   goto LAB_00100e28;
   code_r0x00100f7e:lVar20 = lVar15 + -2 >> 1;
   lVar19 = lVar20 * 2 + 2;
   ppBVar17 = ppBVar1 + lVar20 + lVar13;
   lVar16 = lVar20;
   do {
      pBVar22 = *ppBVar17;
      lVar8 = lVar19;
      lVar7 = lVar16;
      if (lVar19 < lVar15) {
         do {
            pBVar2 = ppBVar1[lVar13 + lVar8];
            pBVar18 = ppBVar1[lVar13 + lVar8 + -1];
            fVar24 = *(float*)( pBVar18 + 0x1c );
            pBVar12 = pBVar2 + 0x1c;
            lVar6 = lVar8;
            ppBVar9 = ppBVar1 + lVar13 + lVar8 + -1;
            local_b0 = lVar8 + -1;
            if (fVar24 < *(float*)pBVar12 || fVar24 == *(float*)pBVar12) {
               lVar6 = lVar8 + 1;
               ppBVar9 = ppBVar1 + lVar13 + lVar8;
               local_b0 = lVar8;
               pBVar18 = pBVar2;
            }

            lVar8 = lVar6 * 2;
            ppBVar1[lVar7 + lVar13] = pBVar18;
            lVar7 = local_b0;
         }
 while ( lVar15 != lVar8 && SBORROW8(lVar15, lVar8) == lVar15 + lVar6 * -2 < 0 );
         if (lVar15 != lVar8) {
            lVar7 = ( local_b0 + -1 ) - ( local_b0 + -1 >> 0x3f );
            if (local_b0 <= lVar16) goto LAB_001010a4;
            local_b0 = lVar13 + local_b0;
            LAB_00101056:fVar24 = *(float*)( pBVar22 + 0x1c );
            while (true) {
               lVar8 = lVar7 >> 1;
               pBVar2 = ppBVar1[lVar13 + lVar8];
               pBVar12 = pBVar2 + 0x1c;
               ppBVar9 = ppBVar1 + local_b0;
               if (fVar24 < *(float*)pBVar12 || fVar24 == *(float*)pBVar12) break;
               ppBVar1[local_b0] = pBVar2;
               lVar7 = ( lVar8 + -1 ) - ( lVar8 + -1 >> 0x3f );
               ppBVar9 = ppBVar1 + lVar13 + lVar8;
               if (lVar8 <= lVar16) break;
               local_b0 = lVar8 + lVar13;
            }
;
            goto LAB_001010a4;
         }

         LAB_001011e6:lVar7 = lVar8 + -2;
         local_b0 = lVar8 + -1 + lVar13;
         *ppBVar9 = ppBVar1[local_b0];
         if (lVar16 < lVar8 + -1) goto LAB_00101056;
         ppBVar1[local_b0] = pBVar22;
      }
 else {
         ppBVar9 = ppBVar17;
         if (lVar15 == lVar19) goto LAB_001011e6;
         LAB_001010a4:*ppBVar9 = pBVar22;
         if (lVar16 == 0) break;
      }

      ppBVar17 = ppBVar17 + -1;
      lVar19 = lVar19 + -2;
      lVar16 = lVar16 + -1;
   }
 while ( true );
   if (lVar10 < lVar14 + 1) {
      lVar19 = lVar15 + -1 + lVar13;
      ppBVar17 = ppBVar1 + lVar10;
      do {
         pBVar22 = *ppBVar17;
         fVar24 = *(float*)( pBVar22 + 0x1c );
         if (fVar24 < *(float*)( ppBVar1[lVar13] + 0x1c )) {
            *ppBVar17 = ppBVar1[lVar13];
            lVar10 = 2;
            lVar16 = 0;
            do {
               pBVar2 = ppBVar1[lVar13 + lVar10];
               pBVar18 = ppBVar1[lVar13 + lVar10 + -1];
               fVar25 = *(float*)( pBVar18 + 0x1c );
               pBVar12 = pBVar2 + 0x1c;
               lVar8 = lVar10;
               ppBVar9 = ppBVar1 + lVar13 + lVar10 + -1;
               lVar7 = lVar10 + -1;
               if (fVar25 < *(float*)pBVar12 || fVar25 == *(float*)pBVar12) {
                  lVar8 = lVar10 + 1;
                  ppBVar9 = ppBVar1 + lVar13 + lVar10;
                  lVar7 = lVar10;
                  pBVar18 = pBVar2;
               }

               lVar10 = lVar8 * 2;
               ppBVar1[lVar16 + lVar13] = pBVar18;
               lVar16 = lVar7;
            }
 while ( lVar15 != lVar10 && SBORROW8(lVar15, lVar10) == lVar15 + lVar8 * -2 < 0 );
            if (lVar15 == lVar10) {
               *ppBVar9 = ppBVar1[lVar19];
               lVar10 = lVar19;
               lVar16 = lVar20;
               LAB_001016bb:while (true) {
                  ppBVar9 = ppBVar1 + lVar10;
                  pBVar2 = ppBVar1[lVar13 + lVar16];
                  pBVar12 = pBVar2 + 0x1c;
                  if (fVar24 < *(float*)pBVar12 || fVar24 == *(float*)pBVar12) break;
                  *ppBVar9 = pBVar2;
                  ppBVar9 = ppBVar1 + lVar13 + lVar16;
                  if (lVar16 == 0) break;
                  lVar10 = lVar13 + lVar16;
                  lVar16 = ( lVar16 + -1 ) / 2;
               }
;
            }
 else {
               lVar10 = lVar13 + lVar7;
               lVar16 = ( lVar7 + -1 ) / 2;
               if (0 < lVar7) goto LAB_001016bb;
            }

            *ppBVar9 = pBVar22;
         }

         bVar23 = ppBVar17 != ppBVar1 + lVar14;
         ppBVar17 = ppBVar17 + 1;
      }
 while ( bVar23 );
   }

   goto LAB_00100603;
   LAB_00100a38:if (lVar14 < lVar16) {
      lVar10 = lVar16;
      lVar16 = lVar13;
   }

   lVar13 = lVar16;
   lVar15 = lVar10 - lVar13;
   if (lVar15 < 4) {
      if (( lVar13 == lVar10 ) || ( lVar16 = lVar10 == lVar16 )) goto LAB_00100603;
      ppBVar17 = ppBVar1 + lVar13;
      goto LAB_00101253;
   }

   if (lVar19 == 0) goto code_r0x00100a6e;
   goto LAB_00100910;
   code_r0x00100a6e:lVar20 = lVar15 + -2 >> 1;
   lVar19 = lVar20 * 2 + 2;
   ppBVar17 = ppBVar1 + lVar13 + lVar20;
   lVar16 = lVar20;
   do {
      pBVar22 = *ppBVar17;
      lVar8 = lVar19;
      lVar7 = lVar16;
      if (lVar19 < lVar15) {
         do {
            pBVar2 = ppBVar1[lVar13 + lVar8];
            pBVar18 = ppBVar1[lVar13 + lVar8 + -1];
            fVar24 = *(float*)( pBVar18 + 0x20 );
            pBVar12 = pBVar2 + 0x20;
            lVar6 = lVar8;
            ppBVar9 = ppBVar1 + lVar13 + lVar8 + -1;
            local_b0 = lVar8 + -1;
            if (fVar24 < *(float*)pBVar12 || fVar24 == *(float*)pBVar12) {
               lVar6 = lVar8 + 1;
               ppBVar9 = ppBVar1 + lVar13 + lVar8;
               local_b0 = lVar8;
               pBVar18 = pBVar2;
            }

            lVar8 = lVar6 * 2;
            ppBVar1[lVar7 + lVar13] = pBVar18;
            lVar7 = local_b0;
         }
 while ( lVar15 != lVar8 && SBORROW8(lVar15, lVar8) == lVar15 + lVar6 * -2 < 0 );
         if (lVar15 != lVar8) {
            lVar7 = ( local_b0 + -1 ) - ( local_b0 + -1 >> 0x3f );
            if (local_b0 <= lVar16) goto LAB_00100b94;
            local_b0 = lVar13 + local_b0;
            LAB_00100b46:fVar24 = *(float*)( pBVar22 + 0x20 );
            while (true) {
               lVar8 = lVar7 >> 1;
               pBVar2 = ppBVar1[lVar13 + lVar8];
               pBVar12 = pBVar2 + 0x20;
               ppBVar9 = ppBVar1 + local_b0;
               if (fVar24 < *(float*)pBVar12 || fVar24 == *(float*)pBVar12) break;
               ppBVar1[local_b0] = pBVar2;
               lVar7 = ( lVar8 + -1 ) - ( lVar8 + -1 >> 0x3f );
               ppBVar9 = ppBVar1 + lVar13 + lVar8;
               if (lVar8 <= lVar16) break;
               local_b0 = lVar8 + lVar13;
            }
;
            goto LAB_00100b94;
         }

         LAB_001011a9:lVar7 = lVar8 + -2;
         local_b0 = lVar13 + lVar8 + -1;
         *ppBVar9 = ppBVar1[local_b0];
         if (lVar16 < lVar8 + -1) goto LAB_00100b46;
         ppBVar1[local_b0] = pBVar22;
      }
 else {
         ppBVar9 = ppBVar17;
         if (lVar15 == lVar19) goto LAB_001011a9;
         LAB_00100b94:*ppBVar9 = pBVar22;
         if (lVar16 == 0) break;
      }

      ppBVar17 = ppBVar17 + -1;
      lVar19 = lVar19 + -2;
      lVar16 = lVar16 + -1;
   }
 while ( true );
   if (lVar10 < lVar14 + 1) {
      lVar19 = lVar13 + -1 + lVar15;
      ppBVar17 = ppBVar1 + lVar10;
      do {
         pBVar22 = *ppBVar17;
         fVar24 = *(float*)( pBVar22 + 0x20 );
         if (fVar24 < *(float*)( ppBVar1[lVar13] + 0x20 )) {
            *ppBVar17 = ppBVar1[lVar13];
            lVar10 = 2;
            lVar16 = 0;
            do {
               pBVar2 = ppBVar1[lVar13 + lVar10];
               pBVar18 = ppBVar1[lVar13 + lVar10 + -1];
               fVar25 = *(float*)( pBVar18 + 0x20 );
               pBVar12 = pBVar2 + 0x20;
               lVar8 = lVar10;
               ppBVar9 = ppBVar1 + lVar13 + lVar10 + -1;
               lVar7 = lVar10 + -1;
               if (fVar25 < *(float*)pBVar12 || fVar25 == *(float*)pBVar12) {
                  lVar8 = lVar10 + 1;
                  ppBVar9 = ppBVar1 + lVar13 + lVar10;
                  lVar7 = lVar10;
                  pBVar18 = pBVar2;
               }

               lVar10 = lVar8 * 2;
               ppBVar1[lVar16 + lVar13] = pBVar18;
               lVar16 = lVar7;
            }
 while ( lVar15 != lVar10 && SBORROW8(lVar15, lVar10) == lVar15 + lVar8 * -2 < 0 );
            if (lVar15 == lVar10) {
               *ppBVar9 = ppBVar1[lVar19];
               lVar10 = lVar19;
               lVar16 = lVar20;
               LAB_00101973:while (true) {
                  ppBVar9 = ppBVar1 + lVar10;
                  pBVar2 = ppBVar1[lVar13 + lVar16];
                  pBVar12 = pBVar2 + 0x20;
                  if (fVar24 < *(float*)pBVar12 || fVar24 == *(float*)pBVar12) break;
                  *ppBVar9 = pBVar2;
                  ppBVar9 = ppBVar1 + lVar13 + lVar16;
                  if (lVar16 == 0) break;
                  lVar10 = lVar13 + lVar16;
                  lVar16 = ( lVar16 + -1 ) / 2;
               }
;
            }
 else {
               lVar10 = lVar13 + lVar7;
               lVar16 = ( lVar7 + -1 ) / 2;
               if (0 < lVar7) goto LAB_00101973;
            }

            *ppBVar9 = pBVar22;
         }

         bVar23 = ppBVar1 + lVar14 != ppBVar17;
         ppBVar17 = ppBVar17 + 1;
      }
 while ( bVar23 );
   }

   goto LAB_00100603;
   LAB_00100bb8:if (lVar19 <= lVar16) {
      lVar13 = lVar19;
      lVar19 = lVar14;
   }

   lVar14 = lVar19;
   lVar15 = lVar14 - lVar13;
   if (lVar15 < 4) {
      if (( lVar13 == lVar14 ) || ( lVar19 = lVar19 == lVar14 )) goto LAB_00100603;
      ppBVar17 = ppBVar1 + lVar13;
      goto LAB_00101482;
   }

   if (lVar10 == 0) goto code_r0x00100bf1;
   goto LAB_00100798;
   code_r0x00100bf1:lVar20 = lVar15 + -2 >> 1;
   lVar10 = lVar20 * 2 + 2;
   ppBVar17 = ppBVar1 + lVar13 + lVar20;
   lVar19 = lVar20;
   do {
      pBVar22 = *ppBVar17;
      lVar8 = lVar10;
      lVar7 = lVar19;
      if (lVar10 < lVar15) {
         do {
            pBVar2 = ppBVar1[lVar13 + lVar8];
            pBVar18 = ppBVar1[lVar13 + lVar8 + -1];
            fVar24 = *(float*)( pBVar18 + 0x18 );
            pBVar12 = pBVar2 + 0x18;
            lVar6 = lVar8;
            ppBVar9 = ppBVar1 + lVar13 + lVar8 + -1;
            local_b0 = lVar8 + -1;
            if (fVar24 < *(float*)pBVar12 || fVar24 == *(float*)pBVar12) {
               lVar6 = lVar8 + 1;
               ppBVar9 = ppBVar1 + lVar13 + lVar8;
               local_b0 = lVar8;
               pBVar18 = pBVar2;
            }

            lVar8 = lVar6 * 2;
            ppBVar1[lVar7 + lVar13] = pBVar18;
            lVar7 = local_b0;
         }
 while ( lVar15 != lVar8 && SBORROW8(lVar15, lVar8) == lVar15 + lVar6 * -2 < 0 );
         if (lVar15 != lVar8) {
            lVar7 = ( local_b0 + -1 ) - ( local_b0 + -1 >> 0x3f );
            if (local_b0 <= lVar19) goto LAB_00100d14;
            local_b0 = lVar13 + local_b0;
            LAB_00100cc6:fVar24 = *(float*)( pBVar22 + 0x18 );
            while (true) {
               lVar8 = lVar7 >> 1;
               pBVar2 = ppBVar1[lVar8 + lVar13];
               pBVar12 = pBVar2 + 0x18;
               ppBVar9 = ppBVar1 + local_b0;
               if (fVar24 < *(float*)pBVar12 || fVar24 == *(float*)pBVar12) break;
               ppBVar1[local_b0] = pBVar2;
               lVar7 = ( lVar8 + -1 ) - ( lVar8 + -1 >> 0x3f );
               ppBVar9 = ppBVar1 + lVar8 + lVar13;
               if (lVar8 <= lVar19) break;
               local_b0 = lVar8 + lVar13;
            }
;
            goto LAB_00100d14;
         }

         LAB_0010116c:lVar7 = lVar8 + -2;
         local_b0 = lVar13 + lVar8 + -1;
         *ppBVar9 = ppBVar1[local_b0];
         if (lVar19 < lVar8 + -1) goto LAB_00100cc6;
         ppBVar1[local_b0] = pBVar22;
      }
 else {
         ppBVar9 = ppBVar17;
         if (lVar15 == lVar10) goto LAB_0010116c;
         LAB_00100d14:*ppBVar9 = pBVar22;
         if (lVar19 == 0) break;
      }

      ppBVar17 = ppBVar17 + -1;
      lVar10 = lVar10 + -2;
      lVar19 = lVar19 + -1;
   }
 while ( true );
   if (lVar14 < lVar16 + 1) {
      lVar10 = lVar15 + -1 + lVar13;
      ppBVar17 = ppBVar1 + lVar14;
      do {
         pBVar22 = *ppBVar17;
         fVar24 = *(float*)( pBVar22 + 0x18 );
         if (fVar24 < *(float*)( ppBVar1[lVar13] + 0x18 )) {
            *ppBVar17 = ppBVar1[lVar13];
            lVar14 = 2;
            lVar19 = 0;
            do {
               pBVar2 = ppBVar1[lVar13 + lVar14];
               pBVar18 = ppBVar1[lVar13 + lVar14 + -1];
               fVar25 = *(float*)( pBVar18 + 0x18 );
               pBVar12 = pBVar2 + 0x18;
               lVar8 = lVar14;
               ppBVar9 = ppBVar1 + lVar13 + lVar14 + -1;
               lVar7 = lVar14 + -1;
               if (fVar25 < *(float*)pBVar12 || fVar25 == *(float*)pBVar12) {
                  lVar8 = lVar14 + 1;
                  ppBVar9 = ppBVar1 + lVar13 + lVar14;
                  lVar7 = lVar14;
                  pBVar18 = pBVar2;
               }

               lVar14 = lVar8 * 2;
               ppBVar1[lVar19 + lVar13] = pBVar18;
               lVar19 = lVar7;
            }
 while ( lVar15 != lVar14 && SBORROW8(lVar15, lVar14) == lVar15 + lVar8 * -2 < 0 );
            if (lVar15 == lVar14) {
               *ppBVar9 = ppBVar1[lVar10];
               lVar14 = lVar10;
               lVar19 = lVar20;
               LAB_0010181b:while (true) {
                  ppBVar9 = ppBVar1 + lVar14;
                  pBVar2 = ppBVar1[lVar19 + lVar13];
                  pBVar12 = pBVar2 + 0x18;
                  if (fVar24 < *(float*)pBVar12 || fVar24 == *(float*)pBVar12) break;
                  *ppBVar9 = pBVar2;
                  ppBVar9 = ppBVar1 + lVar19 + lVar13;
                  if (lVar19 == 0) break;
                  lVar14 = lVar13 + lVar19;
                  lVar19 = ( lVar19 + -1 ) / 2;
               }
;
            }
 else {
               lVar14 = lVar13 + lVar7;
               lVar19 = ( lVar7 + -1 ) / 2;
               if (0 < lVar7) goto LAB_0010181b;
            }

            *ppBVar9 = pBVar22;
         }

         bVar23 = ppBVar1 + lVar16 != ppBVar17;
         ppBVar17 = ppBVar17 + 1;
      }
 while ( bVar23 );
   }

   LAB_00100603:uVar4 = _create_bvh(this, param_1, param_2, param_3, iVar11, param_5 + 1, param_6, param_7);
   uVar5 = _create_bvh(this, param_1, param_2, param_3 + iVar11, param_4 - iVar11, param_5 + 1, param_6, param_7);
   iVar3 = *param_7;
   fVar24 = (float)_LC14 * fStack_44;
   fVar25 = fStack_4c * (float)_LC14;
   fVar27 = fStack_48 * _LC14._4_4_;
   *param_7 = iVar3 + 1;
   pBVar22 = param_1 + (long)iVar3 * 0x30;
   *(ulong*)( pBVar22 + 0x10 ) = CONCAT44(fStack_44, fStack_48);
   *(undefined4*)( pBVar22 + 0x2c ) = 0xffffffff;
   *(undefined4*)( pBVar22 + 0x24 ) = uVar4;
   *(undefined4*)( pBVar22 + 0x28 ) = uVar5;
   *(undefined8*)pBVar22 = local_58;
   *(ulong*)( pBVar22 + 8 ) = CONCAT44(fStack_4c, fStack_50);
   *(ulong*)( pBVar22 + 0x18 ) = CONCAT44(fVar27 + (float)( (ulong)local_58 >> 0x20 ), fVar25 + (float)local_58);
   *(float*)( pBVar22 + 0x20 ) = fVar24 + fStack_50;
   LAB_001006f7:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TriangleMesh::intersect_segment(Vector3 const&, Vector3 const&, Vector3&, Vector3&, int*) const
    */char TriangleMesh::intersect_segment(TriangleMesh *this, Vector3 *param_1, Vector3 *param_2, Vector3 *param_3, Vector3 *param_4, int *param_5) {
   Vector3 *pVVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   long lVar5;
   long lVar6;
   undefined1 *puVar7;
   undefined1 auVar8[16];
   undefined4 uVar9;
   char cVar10;
   uint uVar11;
   uint uVar12;
   uint uVar13;
   undefined1 *puVar14;
   ulong uVar16;
   Vector3 *pVVar17;
   Vector3 *pVVar18;
   int iVar19;
   long lVar20;
   Vector3 *pVVar21;
   long in_FS_OFFSET;
   float fVar22;
   undefined1 auVar23[16];
   undefined1 auStack_118[8];
   Vector3 *local_110;
   Vector3 *local_108;
   int *local_100;
   Vector3 *local_f8;
   long local_f0;
   long local_e8;
   Vector3 *local_e0;
   float local_d8;
   float local_d4;
   Vector3 *local_d0;
   Vector3 *local_c8;
   Vector3 *local_c0;
   Vector3 *local_b8;
   float local_b0;
   char local_a9;
   undefined8 local_9c;
   float local_94;
   undefined8 local_90;
   float local_88;
   undefined8 local_84;
   float local_7c;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined4 local_60;
   undefined8 local_5c;
   undefined4 local_54;
   undefined8 local_50;
   undefined4 local_48;
   long local_40;
   undefined1 *puVar15;
   uVar9 = _LC17;
   auVar23._8_8_ = local_70;
   auVar23._0_8_ = local_90;
   puVar14 = auStack_118;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar16 = (long)*(int*)( this + 0x1b0 ) * 4 + 0x17;
   puVar15 = auStack_118;
   puVar7 = auStack_118;
   while (puVar15 != auStack_118 + -(uVar16 & 0xfffffffffffff000)) {
      puVar14 = puVar7 + -0x1000;
      *(undefined8*)( puVar7 + -8 ) = *(undefined8*)( puVar7 + -8 );
      puVar15 = puVar7 + -0x1000;
      puVar7 = puVar7 + -0x1000;
   }
;
   uVar16 = ( ulong )((uint)uVar16 & 0xff0);
   lVar6 = -uVar16;
   if (uVar16 != 0) {
      *(undefined8*)( puVar14 + -8 ) = *(undefined8*)( puVar14 + -8 );
   }

   local_d4 = *(float*)( param_2 + 4 ) - *(float*)( param_1 + 4 );
   local_b0 = *(float*)param_2 - *(float*)param_1;
   local_d8 = *(float*)( param_2 + 8 ) - *(float*)( param_1 + 8 );
   fVar22 = local_b0 * local_b0 + local_d4 * local_d4 + local_d8 * local_d8;
   if (fVar22 == 0.0) {
      local_d8 = 0.0;
      local_d4 = 0.0;
      local_b0 = 0.0;
   }
 else {
      fVar22 = SQRT(fVar22);
      local_b0 = local_b0 / fVar22;
      local_d4 = local_d4 / fVar22;
      local_d8 = local_d8 / fVar22;
   }

   local_f0 = *(long*)( this + 0x188 );
   pVVar17 = *(Vector3**)( this + 0x1a8 );
   local_e8 = *(long*)( this + 0x198 );
   if (pVVar17 == (Vector3*)0x0) {
      uVar11 = 0xffffffff;
   }
 else {
      uVar11 = *(uint*)( pVVar17 + -8 ) - 1;
   }

   *(uint*)( ( ulong )(puVar14 + lVar6 + 0xf) & 0xfffffffffffffff0 ) = uVar11;
   iVar19 = 0;
   lVar20 = 0;
   local_a9 = '\0';
   local_f8 = (Vector3*)CONCAT44(local_f8._4_4_, uVar9);
   pVVar18 = (Vector3*)( ( ulong )(puVar14 + lVar6 + 0xf) & 0xfffffffffffffff0 );
   local_108 = param_3;
   local_100 = param_5;
   local_e0 = param_4;
   do {
      while (true) {
         while (true) {
            while (true) {
               while (true) {
                  local_70 = auVar23._8_8_;
                  local_90 = auVar23._0_8_;
                  lVar5 = lVar20 * 4;
                  uVar12 = uVar11 >> 0x1d;
                  uVar13 = uVar11 & 0x1fffffff;
                  pVVar1 = pVVar18 + lVar5;
                  pVVar21 = pVVar17 + (ulong)uVar13 * 0x30;
                  if (uVar12 != 2) break;
                  uVar12 = *(uint*)( pVVar21 + 0x28 );
                  iVar19 = iVar19 + 1;
                  lVar20 = (long)iVar19;
                  *(ulong*)pVVar1 = CONCAT44(uVar12, uVar11) & 0xffffffff1fffffff | 0x60000000;
                  uVar11 = uVar12;
               }
;
               if (uVar12 < 3) break;
               do {} while ( uVar12 != 3 );
               if (iVar19 == 0) {
                  if (local_a9 != '\0') {
                     fVar22 = (float)( ( ulong ) * (undefined8*)local_e0 >> 0x20 );
                     if (0.0 < local_b0 * *(float*)local_e0 + local_d4 * fVar22 + local_d8 * *(float*)( local_e0 + 8 )) {
                        uVar11 = ( uint ) * (undefined8*)local_e0 ^ (uint)_LC18;
                        uVar12 = (uint)fVar22 ^ _LC18._4_4_;
                        *(uint*)( local_e0 + 8 ) = ( uint ) * (float*)( local_e0 + 8 ) ^ _LC19;
                        *(ulong*)local_e0 = CONCAT44(uVar12, uVar11);
                     }

                  }

                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return local_a9;
                  }

                  /* WARNING: Subroutine does not return */
                  *(undefined**)( puVar14 + lVar6 + -8 ) = &UNK_00101f7f;
                  __stack_chk_fail();
               }

               iVar19 = iVar19 + -1;
               lVar20 = (long)iVar19;
               uVar11 = *(uint*)( pVVar18 + lVar5 + -4 );
            }
;
            if (uVar11 >> 0x1d == 0) break;
            uVar12 = *(uint*)( pVVar21 + 0x24 );
            iVar19 = iVar19 + 1;
            lVar20 = (long)iVar19;
            *(ulong*)pVVar1 = CONCAT44(uVar12, uVar11) & 0xffffffff1fffffff | 0x40000000;
            uVar11 = uVar12;
         }
;
         *(undefined8*)( puVar14 + lVar6 + -8 ) = 0x101c9c;
         local_d0 = pVVar18;
         local_c8 = pVVar17;
         local_c0 = param_2;
         local_b8 = param_1;
         cVar10 = AABB::intersects_segment(pVVar21, param_1, param_2, (Vector3*)0x0);
         auVar23._8_8_ = local_70;
         auVar23._0_8_ = local_90;
         param_2 = local_c0;
         pVVar17 = local_c8;
         pVVar18 = local_d0;
         param_1 = local_b8;
         if (cVar10 != '\0') break;
         LAB_00101de0:*(uint*)pVVar1 = uVar13 | 0x60000000;
         uVar11 = uVar13 | 0x60000000;
      }
;
      if (-1 < *(int*)( pVVar21 + 0x2c )) {
         lVar5 = local_f0 + (long)*(int*)( pVVar21 + 0x2c ) * 0x1c;
         puVar2 = (undefined8*)( local_e8 + (long)*(int*)( lVar5 + 0x14 ) * 0xc );
         puVar3 = (undefined8*)( local_e8 + (long)*(int*)( lVar5 + 0x10 ) * 0xc );
         puVar4 = (undefined8*)( local_e8 + (long)*(int*)( lVar5 + 0xc ) * 0xc );
         local_68 = *puVar4;
         local_60 = *(undefined4*)( puVar4 + 1 );
         local_110 = (Vector3*)&local_68;
         local_5c = *puVar3;
         local_54 = *(undefined4*)( puVar3 + 1 );
         local_50 = *puVar2;
         local_48 = *(undefined4*)( puVar2 + 1 );
         local_9c = 0;
         local_94 = 0.0;
         *(undefined8*)( puVar14 + lVar6 + -8 ) = 0x101dc0;
         cVar10 = Face3::intersects_segment(local_110, local_b8, local_c0);
         pVVar17 = local_c8;
         auVar8._8_8_ = local_70;
         auVar8._0_8_ = local_90;
         auVar23._8_8_ = local_70;
         auVar23._0_8_ = local_90;
         param_2 = local_c0;
         pVVar18 = local_d0;
         param_1 = local_b8;
         if (cVar10 != '\0') {
            fVar22 = local_b0 * (float)local_9c + local_d4 * local_9c._4_4_ + local_d8 * local_94;
            auVar23 = auVar8;
            if (fVar22 < local_f8._0_4_) {
               local_f8 = local_d0;
               local_d0 = local_c0;
               *(undefined8*)local_108 = local_9c;
               local_c8 = local_b8;
               *(float*)( local_108 + 8 ) = local_94;
               local_c0 = pVVar17;
               local_b8 = (Vector3*)CONCAT44(local_b8._4_4_, fVar22);
               *(undefined8*)( puVar14 + lVar6 + -8 ) = 0x101ee3;
               local_a9 = cVar10;
               auVar23 = Face3::get_plane(local_110, 0);
               pVVar18 = local_f8;
               local_84 = auVar23._0_8_;
               *(undefined8*)local_e0 = local_84;
               local_88 = auVar23._8_4_;
               *(float*)( local_e0 + 8 ) = local_88;
               if (local_100 != (int*)0x0) {
                  *local_100 = *(int*)( lVar5 + 0x18 );
               }

               local_f8 = (Vector3*)CONCAT44(local_f8._4_4_, local_b8._0_4_);
               param_2 = local_d0;
               pVVar17 = local_c0;
               param_1 = local_c8;
               local_7c = local_88;
               local_78 = local_84;
            }

         }

         goto LAB_00101de0;
      }

      *(uint*)pVVar1 = uVar13 | 0x20000000;
      uVar11 = uVar13 | 0x20000000;
   }
 while ( true );
}
/* TriangleMesh::intersect_ray(Vector3 const&, Vector3 const&, Vector3&, Vector3&, int*) const */char TriangleMesh::intersect_ray(TriangleMesh *this, Vector3 *param_1, Vector3 *param_2, Vector3 *param_3, Vector3 *param_4, int *param_5) {
   Vector3 *pVVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   long lVar5;
   long lVar6;
   Vector3 **ppVVar7;
   undefined1 auVar8[16];
   char cVar9;
   uint uVar10;
   uint uVar11;
   ulong uVar12;
   uint uVar13;
   Vector3 **ppVVar14;
   Vector3 *pVVar16;
   long lVar17;
   int iVar18;
   long lVar19;
   Vector3 *pVVar20;
   long in_FS_OFFSET;
   float fVar21;
   undefined1 auVar22[16];
   Vector3 *local_118;
   long local_110;
   long local_108;
   float local_100;
   float local_fc;
   Vector3 *local_f8;
   int *local_f0;
   Vector3 *local_e8;
   Vector3 *local_e0;
   Vector3 *local_d8;
   Vector3 *local_d0;
   Vector3 *local_c8;
   long local_c0;
   Vector3 *local_b8;
   float local_b0;
   char local_a9;
   Vector3 local_9d;
   undefined8 local_9c;
   float local_94;
   undefined8 local_90;
   float local_88;
   undefined8 local_84;
   float local_7c;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined4 local_60;
   undefined8 local_5c;
   undefined4 local_54;
   undefined8 local_50;
   undefined4 local_48;
   long local_40;
   Vector3 **ppVVar15;
   auVar22._8_8_ = local_70;
   auVar22._0_8_ = local_90;
   ppVVar14 = &local_118;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar12 = (long)*(int*)( this + 0x1b0 ) * 4 + 0x17;
   ppVVar15 = &local_118;
   ppVVar7 = &local_118;
   while (ppVVar15 != (Vector3**)( (long)&local_118 - ( uVar12 & 0xfffffffffffff000 ) )) {
      ppVVar14 = (Vector3**)( (long)ppVVar7 + -0x1000 );
      *(undefined8*)( (long)ppVVar7 + -8 ) = *(undefined8*)( (long)ppVVar7 + -8 );
      ppVVar15 = (Vector3**)( (long)ppVVar7 + -0x1000 );
      ppVVar7 = (Vector3**)( (long)ppVVar7 + -0x1000 );
   }
;
   uVar12 = ( ulong )((uint)uVar12 & 0xff0);
   lVar6 = -uVar12;
   if (uVar12 != 0) {
      *(undefined8*)( (long)ppVVar14 + -8 ) = *(undefined8*)( (long)ppVVar14 + -8 );
   }

   local_100 = *(float*)param_2;
   local_110 = *(long*)( this + 0x188 );
   local_fc = *(float*)( param_2 + 4 );
   lVar17 = *(long*)( this + 0x1a8 );
   local_108 = *(long*)( this + 0x198 );
   local_b0 = *(float*)( param_2 + 8 );
   if (lVar17 == 0) {
      uVar10 = 0xffffffff;
   }
 else {
      uVar10 = *(int*)( lVar17 + -8 ) - 1;
   }

   local_d8 = &local_9d;
   *(uint*)( ( ulong )((long)ppVVar14 + lVar6 + 0xf) & 0xfffffffffffffff0 ) = uVar10;
   iVar18 = 0;
   lVar19 = 0;
   local_a9 = '\0';
   local_e8 = (Vector3*)CONCAT44(local_e8._4_4_, _LC20);
   pVVar16 = (Vector3*)( ( ulong )((long)ppVVar14 + lVar6 + 0xf) & 0xfffffffffffffff0 );
   local_f8 = param_3;
   local_f0 = param_5;
   local_e0 = param_4;
   local_d0 = param_1;
   do {
      while (true) {
         while (true) {
            while (true) {
               while (true) {
                  local_70 = auVar22._8_8_;
                  local_90 = auVar22._0_8_;
                  lVar5 = lVar19 * 4;
                  uVar11 = uVar10 >> 0x1d;
                  uVar13 = uVar10 & 0x1fffffff;
                  pVVar1 = pVVar16 + lVar5;
                  pVVar20 = (Vector3*)( (ulong)uVar13 * 0x30 + lVar17 );
                  if (uVar11 != 2) break;
                  uVar11 = *(uint*)( pVVar20 + 0x28 );
                  iVar18 = iVar18 + 1;
                  lVar19 = (long)iVar18;
                  *(ulong*)pVVar1 = CONCAT44(uVar11, uVar10) & 0xffffffff1fffffff | 0x60000000;
                  uVar10 = uVar11;
               }
;
               if (uVar11 < 3) break;
               do {} while ( uVar11 != 3 );
               if (iVar18 == 0) {
                  if (local_a9 != '\0') {
                     fVar21 = (float)( ( ulong ) * (undefined8*)local_e0 >> 0x20 );
                     if (0.0 < local_100 * *(float*)local_e0 + local_fc * fVar21 + local_b0 * *(float*)( local_e0 + 8 )) {
                        uVar10 = ( uint ) * (undefined8*)local_e0 ^ (uint)_LC18;
                        uVar11 = (uint)fVar21 ^ _LC18._4_4_;
                        *(uint*)( local_e0 + 8 ) = ( uint ) * (float*)( local_e0 + 8 ) ^ _LC19;
                        *(ulong*)local_e0 = CONCAT44(uVar11, uVar10);
                     }

                  }

                  if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     *(undefined**)( (long)ppVVar14 + lVar6 + -8 ) = &UNK_0010248f;
                     __stack_chk_fail();
                  }

                  return local_a9;
               }

               iVar18 = iVar18 + -1;
               lVar19 = (long)iVar18;
               uVar10 = *(uint*)( pVVar16 + lVar5 + -4 );
            }
;
            if (uVar10 >> 0x1d == 0) break;
            uVar11 = *(uint*)( pVVar20 + 0x24 );
            iVar18 = iVar18 + 1;
            lVar19 = (long)iVar18;
            *(ulong*)pVVar1 = CONCAT44(uVar11, uVar10) & 0xffffffff1fffffff | 0x40000000;
            uVar10 = uVar11;
         }
;
         *(undefined8*)( (long)ppVVar14 + lVar6 + -8 ) = 0x102211;
         local_c8 = pVVar16;
         local_c0 = lVar17;
         local_b8 = param_2;
         cVar9 = AABB::find_intersects_ray(pVVar20, local_d0, (bool*)param_2, local_d8, (Vector3*)0x0);
         auVar22._8_8_ = local_70;
         auVar22._0_8_ = local_90;
         param_2 = local_b8;
         pVVar16 = local_c8;
         if (cVar9 != '\0') break;
         LAB_00102340:*(uint*)pVVar1 = uVar13 | 0x60000000;
         lVar17 = local_c0;
         uVar10 = uVar13 | 0x60000000;
      }
;
      if (-1 < *(int*)( pVVar20 + 0x2c )) {
         lVar17 = local_110 + (long)*(int*)( pVVar20 + 0x2c ) * 0x1c;
         puVar2 = (undefined8*)( local_108 + (long)*(int*)( lVar17 + 0x14 ) * 0xc );
         puVar3 = (undefined8*)( local_108 + (long)*(int*)( lVar17 + 0x10 ) * 0xc );
         puVar4 = (undefined8*)( local_108 + (long)*(int*)( lVar17 + 0xc ) * 0xc );
         local_68 = *puVar4;
         local_60 = *(undefined4*)( puVar4 + 1 );
         local_118 = (Vector3*)&local_68;
         local_5c = *puVar3;
         local_54 = *(undefined4*)( puVar3 + 1 );
         local_50 = *puVar2;
         local_48 = *(undefined4*)( puVar2 + 1 );
         local_9c = 0;
         local_94 = 0.0;
         *(undefined8*)( (long)ppVVar14 + lVar6 + -8 ) = 0x102325;
         cVar9 = Face3::intersects_ray(local_118, local_d0, local_b8);
         auVar8._8_8_ = local_70;
         auVar8._0_8_ = local_90;
         auVar22._8_8_ = local_70;
         auVar22._0_8_ = local_90;
         param_2 = local_b8;
         pVVar16 = local_c8;
         if (cVar9 != '\0') {
            fVar21 = local_100 * (float)local_9c + local_fc * local_9c._4_4_ + local_b0 * local_94;
            auVar22 = auVar8;
            if (fVar21 < local_e8._0_4_) {
               local_e8 = local_c8;
               local_c8 = local_b8;
               *(undefined8*)local_f8 = local_9c;
               local_b8 = (Vector3*)CONCAT44(local_b8._4_4_, fVar21);
               *(float*)( local_f8 + 8 ) = local_94;
               *(undefined8*)( (long)ppVVar14 + lVar6 + -8 ) = 0x102401;
               local_a9 = cVar9;
               auVar22 = Face3::get_plane(local_118, 0);
               pVVar16 = local_e8;
               local_84 = auVar22._0_8_;
               *(undefined8*)local_e0 = local_84;
               local_88 = auVar22._8_4_;
               *(float*)( local_e0 + 8 ) = local_88;
               if (local_f0 != (int*)0x0) {
                  *local_f0 = *(int*)( lVar17 + 0x18 );
               }

               local_e8 = (Vector3*)CONCAT44(local_e8._4_4_, local_b8._0_4_);
               param_2 = local_c8;
               local_7c = local_88;
               local_78 = local_84;
            }

         }

         goto LAB_00102340;
      }

      *(uint*)pVVar1 = uVar13 | 0x20000000;
      lVar17 = local_c0;
      uVar10 = uVar13 | 0x20000000;
   }
 while ( true );
}
/* TriangleMesh::inside_convex_shape(Plane const*, int, Vector3 const*, int, Vector3) const */undefined8 TriangleMesh::inside_convex_shape(undefined8 param_1_00, undefined4 param_2, long param_1, float *param_4, int param_5, long param_6, int param_7) {
   uint *puVar1;
   long lVar2;
   long *plVar3;
   uint uVar4;
   uint uVar5;
   undefined8 uVar6;
   float *pfVar7;
   uint uVar8;
   int iVar9;
   long lVar10;
   float *pfVar11;
   ulong uVar12;
   undefined8 *puVar13;
   long *plVar14;
   long lVar16;
   int *piVar17;
   Transform3D *pTVar18;
   Vector3 *pVVar19;
   int iVar20;
   long lVar21;
   long in_FS_OFFSET;
   uint uVar22;
   float fVar23;
   float fVar24;
   float fVar25;
   float fVar26;
   float fVar27;
   float fVar28;
   long local_168;
   long local_160;
   uint local_154;
   Transform3D *local_150;
   undefined8 local_148;
   int *local_140;
   int local_138;
   int local_134;
   float *local_130;
   long local_128;
   long local_120;
   uint *local_118;
   undefined8 local_110;
   undefined8 local_108;
   undefined4 local_100;
   undefined8 local_f8;
   float local_f0;
   undefined8 local_e8;
   float local_e0;
   undefined1 local_d8[16];
   undefined1 local_c8[16];
   undefined4 local_b8;
   undefined8 local_a8;
   float local_a0;
   float local_78;
   float local_74;
   float local_70;
   float local_6c;
   float local_68;
   float local_64;
   float local_60;
   float local_5c;
   float local_58;
   float local_54[5];
   long local_40;
   long *plVar15;
   plVar14 = &local_168;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar12 = (long)*(int*)( param_1 + 0x1b0 ) * 4 + 0x17;
   plVar15 = &local_168;
   plVar3 = &local_168;
   while (plVar15 != (long*)( (long)&local_168 - ( uVar12 & 0xfffffffffffff000 ) )) {
      plVar14 = (long*)( (long)plVar3 + -0x1000 );
      *(undefined8*)( (long)plVar3 + -8 ) = *(undefined8*)( (long)plVar3 + -8 );
      plVar15 = (long*)( (long)plVar3 + -0x1000 );
      plVar3 = (long*)( (long)plVar3 + -0x1000 );
   }
;
   uVar12 = ( ulong )((uint)uVar12 & 0xff0);
   lVar2 = -uVar12;
   if (uVar12 != 0) {
      *(undefined8*)( (long)plVar14 + -8 ) = *(undefined8*)( (long)plVar14 + -8 );
   }

   local_d8 = ZEXT416(_LC21);
   local_e8 = 0;
   local_118 = (uint*)( ( ulong )((long)plVar14 + lVar2 + 0xf) & 0xfffffffffffffff0 );
   local_160 = *(long*)( param_1 + 0x188 );
   local_168 = *(long*)( param_1 + 0x198 );
   local_e0 = 0.0;
   local_120 = *(long*)( param_1 + 0x1a8 );
   local_b8 = 0x3f800000;
   local_140 = (int*)local_d8;
   *(undefined8*)( (long)plVar14 + lVar2 + -8 ) = 0x1025d3;
   local_138 = param_7;
   local_134 = param_5;
   local_130 = param_4;
   local_128 = param_6;
   local_108 = param_1_00;
   local_100 = param_2;
   local_c8 = local_d8;
   Basis::scaled((Vector3*)&local_a8);
   local_150 = (Transform3D*)&local_78;
   *(undefined8*)( (long)plVar14 + lVar2 + -8 ) = 0x1025ec;
   Transform3D::Transform3D(local_150, (Basis*)&local_a8, (Vector3*)&local_e8);
   if (*(long*)( param_1 + 0x1a8 ) == 0) {
      uVar4 = 0xffffffff;
   }
 else {
      uVar4 = (int)*(undefined8*)( *(long*)( param_1 + 0x1a8 ) + -8 ) - 1;
   }

   iVar20 = 0;
   *local_118 = uVar4;
   lVar21 = 0;
   LAB_00102615:do {
      puVar1 = local_118 + lVar21;
      uVar8 = uVar4 >> 0x1d;
      uVar5 = uVar4 & 0x1fffffff;
      puVar13 = (undefined8*)( (ulong)uVar5 * 0x30 + local_120 );
      if (uVar8 == 2) {
         uVar4 = *(uint*)( puVar13 + 5 );
         uVar5 = uVar5 | 0x60000000;
         LAB_0010265d:iVar20 = iVar20 + 1;
         *puVar1 = uVar5;
         puVar1[1] = uVar4;
         lVar21 = (long)iVar20;
         goto LAB_00102615;
      }

      if (uVar8 < 3) {
         if (uVar8 != 0) {
            uVar4 = *(uint*)( (long)puVar13 + 0x24 );
            uVar5 = uVar5 | 0x40000000;
            goto LAB_0010265d;
         }

         local_148 = local_54;
         lVar16 = 0;
         local_a8 = *puVar13;
         local_a0 = *(float*)( puVar13 + 1 );
         fVar26 = *(float*)( (long)puVar13 + 0x14 ) + *(float*)( puVar13 + 1 );
         local_e8 = 0;
         local_e0 = 0.0;
         uVar6 = CONCAT44((float)( ( ulong ) * (undefined8*)( (long)puVar13 + 0xc ) >> 0x20 ) + (float)( ( ulong ) * puVar13 >> 0x20 ), (float)*(undefined8*)( (long)puVar13 + 0xc ) + (float)*puVar13);
         local_d8._0_12_ = ZEXT812(0);
         local_f0 = fVar26;
         local_f8 = uVar6;
         pTVar18 = local_150;
         do {
            fVar24 = *(float*)( (long)local_148 + lVar16 );
            lVar10 = 0;
            fVar28 = fVar24;
            do {
               fVar27 = *(float*)( (Vector3*)&local_a8 + lVar10 ) * *(float*)( pTVar18 + lVar10 );
               fVar23 = *(float*)( pTVar18 + lVar10 ) * *(float*)( (long)&local_f8 + lVar10 );
               fVar25 = fVar23;
               if (fVar27 < fVar23) {
                  fVar25 = fVar27;
                  fVar27 = fVar23;
               }

               fVar28 = fVar28 + fVar27;
               fVar24 = fVar24 + fVar25;
               lVar10 = lVar10 + 4;
            }
 while ( lVar10 != 0xc );
            *(float*)( (long)local_140 + lVar16 ) = fVar28;
            pTVar18 = pTVar18 + 0xc;
            *(float*)( (Vector3*)&local_e8 + lVar16 ) = fVar24;
            lVar16 = lVar16 + 4;
         }
 while ( lVar16 != 0xc );
         fVar27 = (float)( (ulong)local_e8 >> 0x20 );
         local_f0 = ( 0.0 - local_e0 ) * (float)_LC14;
         fVar24 = ( 0.0 - (float)local_e8 ) * (float)_LC14;
         fVar28 = ( 0.0 - fVar27 ) * _LC14._4_4_;
         local_e0 = local_e0 + local_f0;
         fVar25 = (float)local_e8 + fVar24;
         fVar27 = fVar27 + fVar28;
         local_f8 = CONCAT44(fVar28, fVar24);
         local_e8 = CONCAT44(fVar27, fVar25);
         local_110 = (uint*)CONCAT44(local_110._4_4_, fVar27);
         if (0 < local_134) {
            pfVar11 = local_130;
            do {
               uVar4 = -(uint)(0.0 < pfVar11[2]);
               uVar8 = -(uint)(0.0 < pfVar11[1]);
               uVar22 = -(uint)(0.0 < *pfVar11);
               fVar23 = ( (float)( ~uVar8 & (uint)fVar28 | ( (uint)fVar28 ^ _LC19 ) & uVar8 ) + fVar27 ) * pfVar11[1] + ( (float)( ~uVar22 & (uint)fVar24 | ( _LC19 ^ (uint)fVar24 ) & uVar22 ) + fVar25 ) * *pfVar11 + ( (float)( ~uVar4 & (uint)local_f0 | ( (uint)local_f0 ^ _LC19 ) & uVar4 ) + local_e0 ) * pfVar11[2];
               if (pfVar11[3] <= fVar23 && fVar23 != pfVar11[3]) goto LAB_00102921;
               pfVar11 = pfVar11 + 4;
            }
 while ( local_130 + (long)local_134 * 4 != pfVar11 );
         }

         local_d8._0_12_ = ZEXT812(0);
         local_a8 = 0;
         pfVar11 = (float*)( local_128 + (long)local_138 * 0xc );
         lVar16 = 0;
         iVar9 = 0;
         local_a0 = 0.0;
         piVar17 = local_140;
         pVVar19 = (Vector3*)&local_a8;
         while (true) {
            if (0 < local_138) {
               fVar24 = *(float*)( (Vector3*)&local_e8 + lVar16 );
               fVar28 = *(float*)( (long)&local_f8 + lVar16 );
               pfVar7 = (float*)( local_128 + lVar16 );
               do {
                  fVar25 = *pfVar7;
                  if (fVar24 + fVar28 < fVar25) {
                     *piVar17 = *piVar17 + 1;
                  }

                  if (fVar25 < fVar24 - fVar28) {
                     iVar9 = iVar9 + 1;
                     *(int*)pVVar19 = iVar9;
                  }

                  pfVar7 = pfVar7 + 3;
               }
 while ( pfVar7 != pfVar11 );
            }

            local_154 = uVar5;
            local_110 = puVar1;
            if (( local_138 == iVar9 ) || ( local_138 == *piVar17 )) goto LAB_00102921;
            pVVar19 = pVVar19 + 4;
            piVar17 = piVar17 + 1;
            pfVar11 = pfVar11 + 1;
            if (lVar16 == 8) break;
            iVar9 = *(int*)pVVar19;
            lVar16 = lVar16 + 4;
         }
;
         lVar16 = 0;
         local_f8 = uVar6;
         local_f0 = fVar26;
         local_e8 = *puVar13;
         local_e0 = *(float*)( puVar13 + 1 );
         local_d8._0_12_ = ZEXT812(0);
         local_a8 = 0;
         local_a0 = 0.0;
         pTVar18 = local_150;
         do {
            fVar26 = *(float*)( (long)local_148 + lVar16 );
            lVar10 = 0;
            fVar24 = fVar26;
            do {
               fVar25 = *(float*)( (Vector3*)&local_e8 + lVar10 ) * *(float*)( pTVar18 + lVar10 );
               fVar27 = *(float*)( pTVar18 + lVar10 ) * *(float*)( (long)&local_f8 + lVar10 );
               fVar28 = fVar27;
               if (fVar25 < fVar27) {
                  fVar28 = fVar25;
                  fVar25 = fVar27;
               }

               fVar24 = fVar24 + fVar25;
               fVar26 = fVar26 + fVar28;
               lVar10 = lVar10 + 4;
            }
 while ( lVar10 != 0xc );
            *(float*)( (Vector3*)&local_a8 + lVar16 ) = fVar24;
            pTVar18 = pTVar18 + 0xc;
            *(float*)( (long)local_140 + lVar16 ) = fVar26;
            lVar16 = lVar16 + 4;
         }
 while ( lVar16 != 0xc );
         fVar28 = ( local_a0 - 0.0 ) * (float)_LC14;
         fVar26 = ( (float)local_a8 - 0.0 ) * (float)_LC14;
         fVar24 = ( local_a8._4_4_ - 0.0 ) * (float)_LC14;
         local_110._4_4_ = ( undefined4 )((ulong)puVar1 >> 0x20);
         local_110 = (uint*)CONCAT44(local_110._4_4_, fVar28 + 0.0);
         if (0 < local_134) {
            pfVar11 = local_130;
            LAB_00102bad:uVar4 = -(uint)(pfVar11[2] < 0.0);
            uVar8 = -(uint)(pfVar11[1] < 0.0);
            uVar22 = -(uint)(*pfVar11 < 0.0);
            fVar25 = ( (float)( ~uVar22 & (uint)fVar26 | ( _LC19 ^ (uint)fVar26 ) & uVar22 ) + fVar26 + 0.0 ) * *pfVar11 + ( (float)( ~uVar8 & (uint)fVar24 | ( (uint)fVar24 ^ _LC19 ) & uVar8 ) + fVar24 + 0.0 ) * pfVar11[1] + ( (float)( ~uVar4 & (uint)fVar28 | ( (uint)fVar28 ^ _LC19 ) & uVar4 ) + fVar28 + 0.0 ) * pfVar11[2];
            if (fVar25 < pfVar11[3] || fVar25 == pfVar11[3]) goto LAB_00102ba0;
            if (-1 < *(int*)( (long)puVar13 + 0x2c )) {
               lVar16 = local_160 + (long)*(int*)( (long)puVar13 + 0x2c ) * 0x1c;
               local_110 = (uint*)CONCAT44(local_110._4_4_, local_70);
               piVar17 = (int*)( lVar16 + 0xc );
               uVar12 = (ulong)local_148 >> 0x20;
               local_148 = (float*)CONCAT44((int)uVar12, local_54[0]);
               do {
                  pfVar11 = (float*)( local_168 + (long)*piVar17 * 0xc );
                  fVar26 = *pfVar11;
                  fVar24 = pfVar11[1];
                  fVar28 = pfVar11[2];
                  pfVar11 = local_130;
                  do {
                     fVar25 = *pfVar11 * ( fVar28 * local_70 + fVar26 * local_78 + fVar24 * local_74 + local_54[0] ) + pfVar11[1] * ( fVar26 * local_6c + fVar24 * local_68 + fVar28 * local_64 + local_54[1] ) + pfVar11[2] * ( local_60 * fVar26 + local_5c * fVar24 + local_58 * fVar28 + local_54[2] );
                     if (pfVar11[3] <= fVar25 && fVar25 != pfVar11[3]) {
                        uVar6 = 0;
                        goto LAB_0010268b;
                     }

                     pfVar11 = pfVar11 + 4;
                  }
 while ( local_130 + (long)local_134 * 4 != pfVar11 );
                  piVar17 = piVar17 + 1;
               }
 while ( piVar17 != (int*)( lVar16 + 0x18 ) );
               goto LAB_00102de0;
            }

            uVar4 = uVar5 | 0x20000000;
            *puVar1 = uVar4;
            goto LAB_00102615;
         }

         LAB_00102de0:uVar4 = uVar5 | 0x60000000;
         *puVar1 = uVar4;
      }
 else {
         do {} while ( uVar8 != 3 );
         if (iVar20 == 0) {
            uVar6 = 1;
            LAB_0010268b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return uVar6;
            }

            /* WARNING: Subroutine does not return */
            *(undefined**)( (long)plVar14 + lVar2 + -8 ) = &UNK_00102dfe;
            __stack_chk_fail();
         }

         iVar20 = iVar20 + -1;
         uVar4 = local_118[lVar21 + -1];
         lVar21 = (long)iVar20;
      }

   }
 while ( true );
   LAB_00102921:uVar6 = 0;
   goto LAB_0010268b;
   LAB_00102ba0:pfVar11 = pfVar11 + 4;
   if (local_130 + (long)local_134 * 4 == pfVar11) goto LAB_00102de0;
   goto LAB_00102bad;
}
/* TriangleMesh::is_valid() const */TriangleMesh TriangleMesh::is_valid(TriangleMesh *this) {
   return this[0x1b4];
}
/* TriangleMesh::TriangleMesh() */void TriangleMesh::TriangleMesh(TriangleMesh *this) {
   RefCounted::RefCounted((RefCounted*)this);
   *(undefined8*)( this + 0x188 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_001070e8;
   *(undefined8*)( this + 0x198 ) = 0;
   *(undefined8*)( this + 0x1a8 ) = 0;
   this[0x1b4] = (TriangleMesh)0x0;
   *(undefined4*)( this + 0x1b0 ) = 0;
   return;
}
/* TriangleMesh::get_faces() const */void TriangleMesh::get_faces(void) {
   ulong *__src;
   long lVar1;
   long lVar2;
   ulong uVar3;
   long lVar4;
   ulong uVar5;
   long lVar6;
   ulong uVar7;
   ulong *puVar8;
   ulong *puVar9;
   long lVar10;
   undefined8 *puVar11;
   ulong *puVar12;
   long in_RSI;
   long in_RDI;
   long lVar13;
   size_t __n;
   if (*(char*)( in_RSI + 0x1b4 ) == '\0') {
      *(undefined8*)( in_RDI + 8 ) = 0;
      return;
   }

   puVar12 = *(ulong**)( in_RSI + 0x188 );
   if (puVar12 == (ulong*)0x0) goto LAB_00102ff8;
   uVar3 = puVar12[-1];
   if ((long)uVar3 < 0) {
      puVar12 = (ulong*)0x0;
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      lVar13 = *(long*)( in_RSI + 0x188 );
   }
 else {
      if (uVar3 == 0) {
         puVar12 = (ulong*)0x0;
         goto LAB_00102ff8;
      }

      lVar13 = uVar3 * 0x24;
      if (( lVar13 == 0 ) || ( uVar7 = lVar13 - 1U | lVar13 - 1U >> 1 ),uVar7 = uVar7 | uVar7 >> 2,uVar7 = uVar7 | uVar7 >> 4,uVar7 = uVar7 | uVar7 >> 8,uVar7 = uVar7 | uVar7 >> 0x10,uVar7 = uVar7 | uVar7 >> 0x20,uVar7 == 0xffffffffffffffff) {
         puVar12 = (ulong*)0x0;
         _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
         lVar13 = *(long*)( in_RSI + 0x188 );
      }
 else {
         puVar8 = (ulong*)Memory::alloc_static(uVar7 + 0x11, false);
         if (puVar8 == (ulong*)0x0) {
            puVar12 = (ulong*)0x0;
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            lVar13 = *(long*)( in_RSI + 0x188 );
         }
 else {
            __src = puVar8 + 2;
            *puVar8 = 1;
            puVar12 = __src;
            do {
               *puVar12 = 0;
               puVar9 = (ulong*)( (long)puVar12 + 0x24 );
               *(undefined4*)( puVar12 + 1 ) = 0;
               *(undefined8*)( (long)puVar12 + 0xc ) = 0;
               *(undefined4*)( (long)puVar12 + 0x14 ) = 0;
               puVar12[3] = 0;
               *(undefined4*)( puVar12 + 4 ) = 0;
               puVar12 = puVar9;
            }
 while ( (ulong*)( (long)puVar8 + lVar13 + 0x10 ) != puVar9 );
            puVar8[1] = uVar3;
            if (1 < *puVar8) {
               uVar5 = puVar8[1];
               uVar7 = 0x10;
               __n = uVar5 * 0x24;
               if (__n != 0) {
                  uVar7 = __n - 1 | __n - 1 >> 1;
                  uVar7 = uVar7 | uVar7 >> 2;
                  uVar7 = uVar7 | uVar7 >> 4;
                  uVar7 = uVar7 | uVar7 >> 8;
                  uVar7 = uVar7 | uVar7 >> 0x10;
                  uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
               }

               puVar11 = (undefined8*)Memory::alloc_static(uVar7, false);
               if (puVar11 != (undefined8*)0x0) {
                  puVar12 = puVar11 + 2;
                  *puVar11 = 1;
                  puVar11[1] = uVar5;
                  memcpy(puVar12, __src, __n);
                  LOCK();
                  *puVar8 = *puVar8 - 1;
                  UNLOCK();
                  if (*puVar8 == 0) {
                     Memory::free_static(puVar8, false);
                  }

                  lVar13 = *(long*)( in_RSI + 0x188 );
                  goto LAB_00102f9d;
               }

               _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
            }

            lVar13 = *(long*)( in_RSI + 0x188 );
            puVar12 = __src;
         }

      }

   }

   LAB_00102f9d:lVar4 = *(long*)( in_RSI + 0x198 );
   if (0 < (int)uVar3) {
      lVar1 = lVar13 + (long)(int)uVar3 * 0x1c;
      puVar8 = puVar12;
      do {
         lVar10 = 0;
         do {
            lVar2 = lVar10 + 0xc;
            lVar6 = lVar10 * 3;
            lVar10 = lVar10 + 4;
            puVar11 = (undefined8*)( lVar4 + (long)*(int*)( lVar2 + lVar13 ) * 0xc );
            *(undefined8*)( (long)puVar8 + lVar6 ) = *puVar11;
            *(undefined4*)( (long)puVar8 + lVar6 + 8 ) = *(undefined4*)( puVar11 + 1 );
         }
 while ( lVar10 != 0xc );
         lVar13 = lVar13 + 0x1c;
         puVar8 = (ulong*)( (long)puVar8 + 0x24 );
      }
 while ( lVar1 != lVar13 );
   }

   LAB_00102ff8:*(ulong**)( in_RDI + 8 ) = puVar12;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* TriangleMesh::get_indices(Vector<int>*) const */void TriangleMesh::get_indices(TriangleMesh *this, Vector *param_1) {
   CowData<int> *this_00;
   long *plVar1;
   long lVar2;
   undefined4 *puVar3;
   code *pcVar4;
   int iVar5;
   int iVar6;
   ulong uVar7;
   ulong uVar8;
   undefined4 *puVar9;
   undefined4 *puVar10;
   undefined8 *puVar11;
   undefined4 *puVar12;
   undefined8 *puVar13;
   long lVar14;
   long lVar15;
   long lVar16;
   if (this[0x1b4] == (TriangleMesh)0x0) {
      return;
   }

   lVar2 = *(long*)( this + 0x188 );
   if (lVar2 == 0) {
      lVar14 = *(long*)( param_1 + 8 );
      if (( lVar14 == 0 ) || ( *(long*)( lVar14 + -8 ) == 0 )) goto LAB_00103391;
      LAB_0010337a:LOCK();
      plVar1 = (long*)( lVar14 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( param_1 + 8 );
         *(undefined8*)( param_1 + 8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
 else {
         *(undefined8*)( param_1 + 8 ) = 0;
      }

      LAB_00103391:CowData<int>::_copy_on_write((CowData<int>*)( param_1 + 8 ));
      return;
   }

   this_00 = (CowData<int>*)( param_1 + 8 );
   iVar5 = (int)*(undefined8*)( lVar2 + -8 );
   lVar15 = (long)( iVar5 * 3 );
   if (lVar15 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      goto LAB_00103391;
   }

   lVar14 = *(long*)( param_1 + 8 );
   if (lVar14 == 0) {
      if (lVar15 == 0) goto LAB_00103391;
      CowData<int>::_copy_on_write(this_00);
      lVar16 = 0;
      LAB_001033b4:uVar7 = lVar15 * 4 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      lVar14 = ( uVar7 | uVar7 >> 0x20 ) + 1;
      if (lVar16 < lVar15) {
         LAB_00103330:if (lVar16 == 0) {
            puVar11 = (undefined8*)Memory::alloc_static(lVar14 + 0x10, false);
            if (puVar11 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               goto LAB_001032b7;
            }

            puVar13 = puVar11 + 2;
            *puVar11 = 1;
            puVar11[1] = 0;
            *(undefined8**)( param_1 + 8 ) = puVar13;
         }
 else {
            iVar6 = CowData<int>::_realloc(this_00, lVar14);
            if (iVar6 != 0) goto LAB_001032b7;
            LAB_0010331d:puVar13 = *(undefined8**)( param_1 + 8 );
            if (puVar13 == (undefined8*)0x0) {
               _DAT_00000000 = 0;
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

         }

         puVar13[-1] = lVar15;
         goto LAB_001032b7;
      }

      LAB_00103404:iVar6 = CowData<int>::_realloc(this_00, lVar14);
      if (iVar6 != 0) goto LAB_001032b7;
   }
 else {
      lVar16 = *(long*)( lVar14 + -8 );
      if (lVar15 == lVar16) goto LAB_001032b7;
      if (lVar15 == 0) goto LAB_0010337a;
      CowData<int>::_copy_on_write(this_00);
      uVar7 = lVar15 * 4 - 1;
      uVar7 = uVar7 >> 1 | uVar7;
      uVar7 = uVar7 >> 2 | uVar7;
      uVar7 = uVar7 >> 4 | uVar7;
      uVar7 = uVar7 >> 8 | uVar7;
      uVar7 = uVar7 >> 0x10 | uVar7;
      uVar7 = uVar7 >> 0x20 | uVar7;
      lVar14 = uVar7 + 1;
      if (lVar16 * 4 == 0) goto LAB_001033b4;
      uVar8 = lVar16 * 4 - 1;
      uVar8 = uVar8 | uVar8 >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      uVar8 = uVar8 | uVar8 >> 0x20;
      if (lVar16 < lVar15) {
         if (uVar8 != uVar7) goto LAB_00103330;
         goto LAB_0010331d;
      }

      if (uVar8 != uVar7) goto LAB_00103404;
   }

   if (*(long*)( param_1 + 8 ) == 0) {
      FUN_00104a3a();
      return;
   }

   *(long*)( *(long*)( param_1 + 8 ) + -8 ) = lVar15;
   LAB_001032b7:CowData<int>::_copy_on_write(this_00);
   puVar3 = *(undefined4**)( param_1 + 8 );
   if (iVar5 != 0) {
      puVar9 = puVar3;
      puVar12 = (undefined4*)( lVar2 + 0xc );
      do {
         puVar10 = puVar9 + 3;
         *puVar9 = *puVar12;
         puVar9[1] = puVar12[1];
         puVar9[2] = puVar12[2];
         puVar9 = puVar10;
         puVar12 = puVar12 + 7;
      }
 while ( puVar3 + (long)iVar5 * 3 != puVar10 );
   }

   return;
}
/* Error CowData<TriangleMesh::BVH>::resize<false>(long) [clone .isra.0] */void CowData<TriangleMesh::BVH>::resize<false>(CowData<TriangleMesh::BVH> *this, long param_1) {
   long *plVar1;
   int iVar2;
   CowData<TriangleMesh::BVH> *pCVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   char *pcVar7;
   undefined8 *puVar8;
   undefined8 uVar9;
   CowData<TriangleMesh::BVH> *pCVar10;
   CowData<TriangleMesh::BVH> *pCVar11;
   long lVar12;
   long lVar13;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar12 = *(long*)this;
   if (lVar12 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar13 = 0;
      pCVar3 = (CowData<TriangleMesh::BVH>*)0x0;
   }
 else {
      lVar13 = *(long*)( lVar12 + -8 );
      if (param_1 == lVar13) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar12 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar12 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      pCVar3 = (CowData<TriangleMesh::BVH>*)( lVar13 * 0x30 );
      if (pCVar3 != (CowData<TriangleMesh::BVH>*)0x0) {
         uVar4 = ( ulong )(pCVar3 + -1) | ( ulong )(pCVar3 + -1) >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         pCVar3 = (CowData<TriangleMesh::BVH>*)( ( uVar4 | uVar4 >> 0x20 ) + 1 );
      }

   }

   if (param_1 * 0x30 != 0) {
      uVar4 = param_1 * 0x30 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      pCVar11 = (CowData<TriangleMesh::BVH>*)( uVar4 | uVar4 >> 0x20 );
      pCVar10 = pCVar11 + 1;
      if (pCVar10 != (CowData<TriangleMesh::BVH>*)0x0) {
         if (param_1 <= lVar13) {
            if (( pCVar10 != pCVar3 ) && ( iVar2 = iVar2 != 0 )) {
               return;
            }

            if (*(long*)this != 0) {
               *(long*)( *(long*)this + -8 ) = param_1;
               return;
            }

            FUN_00104a50();
            return;
         }

         if (pCVar10 == pCVar3) {
            LAB_0010369c:puVar8 = *(undefined8**)this;
            if (puVar8 == (undefined8*)0x0) {
               resize<false>((long)pCVar11);
               return;
            }

            lVar12 = puVar8[-1];
            if (param_1 <= lVar12) goto LAB_00103625;
         }
 else {
            if (lVar13 != 0) {
               pCVar11 = this;
               iVar2 = _realloc(this, (long)pCVar10);
               if (iVar2 != 0) {
                  return;
               }

               goto LAB_0010369c;
            }

            puVar5 = (undefined8*)Memory::alloc_static(( ulong )(pCVar11 + 0x11), false);
            if (puVar5 == (undefined8*)0x0) {
               uVar9 = 0x171;
               pcVar7 = "Parameter \"mem_new\" is null.";
               goto LAB_00103742;
            }

            puVar8 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)this = puVar8;
            lVar12 = 0;
         }

         puVar5 = puVar8 + lVar12 * 6;
         do {
            *puVar5 = 0;
            puVar6 = puVar5 + 6;
            *(undefined4*)( puVar5 + 1 ) = 0;
            *(undefined8*)( (long)puVar5 + 0xc ) = 0;
            *(undefined4*)( (long)puVar5 + 0x14 ) = 0;
            puVar5[3] = 0;
            *(undefined4*)( puVar5 + 4 ) = 0;
            puVar5 = puVar6;
         }
 while ( puVar6 != puVar8 + param_1 * 6 );
         LAB_00103625:puVar8[-1] = param_1;
         return;
      }

   }

   uVar9 = 0x16a;
   pcVar7 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_00103742:_err_print_error("resize", "./core/templates/cowdata.h", uVar9, pcVar7, 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* TriangleMesh::create(Vector<Vector3> const&, Vector<int> const&) */void TriangleMesh::create(Vector *param_1, Vector *param_2) {
   long *plVar1;
   BVH **__dest;
   CowData<TriangleMesh::Triangle> *this;
   CowData<Vector3> *this_00;
   undefined8 *puVar2;
   int *piVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   long lVar7;
   code *pcVar8;
   int iVar9;
   char cVar10;
   int iVar11;
   int iVar12;
   ulong uVar13;
   ulong uVar14;
   undefined8 *puVar15;
   uint *puVar16;
   ulong uVar17;
   ulong uVar18;
   ulong *puVar19;
   long lVar20;
   ulong uVar21;
   char *pcVar22;
   undefined4 uVar23;
   long in_RDX;
   BVH *pBVar24;
   undefined8 uVar25;
   undefined8 *puVar26;
   float fVar27;
   long lVar28;
   long lVar29;
   int *piVar30;
   BVH **ppBVar31;
   undefined8 *puVar32;
   size_t __n;
   long in_FS_OFFSET;
   float fVar33;
   float fVar34;
   float in_XMM1_Da;
   float fVar35;
   float fVar36;
   float fVar37;
   int *local_120;
   uint local_10c;
   BVH *local_f0;
   CowData<TriangleMesh::BVH> *local_e8;
   uint local_cc;
   int local_c8[2];
   undefined1 local_c0[16];
   undefined1 local_b0[16];
   undefined8 local_a0;
   undefined8 local_90;
   float local_88;
   undefined8 local_84;
   float local_7c;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   float local_60;
   undefined8 local_5c;
   undefined4 local_54;
   undefined8 local_50;
   undefined4 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar20 = *(long*)( in_RDX + 8 );
   param_1[0x1b4] = (Vector)0x0;
   lVar28 = *(long*)( param_2 + 8 );
   if (( lVar20 == 0 ) || ( lVar20 = lVar20 == 0 )) {
      if (lVar28 != 0) {
         lVar28 = *(long*)( lVar28 + -8 );
         goto LAB_001037df;
      }

   }
 else {
      if (( lVar28 == 0 ) || ( lVar28 = lVar20 != lVar28 )) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar25 = 0x6e;
            pcVar22 = "Condition \"p_surface_indices.size() && p_surface_indices.size() != p_faces.size()\" is true.";
            goto LAB_001041e7;
         }

         goto LAB_00104743;
      }

      LAB_001037df:iVar11 = (int)lVar28;
      if (iVar11 != 0) {
         iVar9 = iVar11 / 3;
         if (iVar9 * 3 == iVar11) {
            uVar13 = (ulong)iVar9;
            this(CowData<TriangleMesh::Triangle> * )(param_1 + 0x188);
            local_c8[0] = iVar9;
            if (iVar11 < -2) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
               CowData<TriangleMesh::BVH>::resize<false>((CowData<TriangleMesh::BVH>*)( param_1 + 0x1a8 ), (long)( iVar9 * 3 ));
               CowData<TriangleMesh::BVH>::_copy_on_write((CowData<TriangleMesh::BVH>*)( param_1 + 0x1a8 ));
               local_f0 = *(BVH**)( param_1 + 0x1a8 );
               CowData<TriangleMesh::Triangle>::_copy_on_write(this);
            }
 else {
               lVar20 = *(long*)( param_1 + 0x188 );
               if (lVar20 == 0) {
                  if (iVar9 != 0) {
                     uVar18 = 0;
                     CowData<TriangleMesh::Triangle>::_copy_on_write(this);
                     LAB_00104383:uVar21 = uVar13 * 0x1c - 1;
                     uVar21 = uVar21 | uVar21 >> 1;
                     uVar21 = uVar21 | uVar21 >> 2;
                     uVar21 = uVar21 | uVar21 >> 4;
                     uVar21 = uVar21 | uVar21 >> 8;
                     uVar21 = uVar21 >> 0x10 | uVar21;
                     lVar20 = ( uVar21 | uVar21 >> 0x20 ) + 1;
                     if ((long)uVar18 < (long)uVar13) {
                        LAB_001043fc:if (uVar18 == 0) {
                           puVar32 = (undefined8*)Memory::alloc_static(lVar20 + 0x10, false);
                           if (puVar32 == (undefined8*)0x0) {
                              _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                           }
 else {
                              puVar26 = puVar32 + 2;
                              *puVar32 = 1;
                              puVar32[1] = 0;
                              *(undefined8**)( param_1 + 0x188 ) = puVar26;
                              lVar20 = 0;
                              LAB_00103934:if (lVar20 < (long)uVar13) {
                                 puVar32 = (undefined8*)( (long)puVar26 + lVar20 * 0x1c );
                                 do {
                                    *puVar32 = 0;
                                    puVar15 = (undefined8*)( (long)puVar32 + 0x1c );
                                    *(undefined4*)( puVar32 + 1 ) = 0;
                                    puVar32 = puVar15;
                                 }
 while ( (undefined8*)( (long)puVar26 + uVar13 * 0x1c ) != puVar15 );
                              }

                              puVar26[-1] = uVar13;
                           }

                        }
 else {
                           iVar12 = CowData<TriangleMesh::Triangle>::_realloc(this, lVar20);
                           if (iVar12 == 0) {
                              LAB_00103920:puVar26 = *(undefined8**)( param_1 + 0x188 );
                              if (puVar26 == (undefined8*)0x0) {
                                 TriangleMesh_create:/* WARNING: Does not return */pcVar8 = (code*)invalidInstructionException();
                                 ( *pcVar8 )();
                              }

                              lVar20 = puVar26[-1];
                              goto LAB_00103934;
                           }

                        }

                     }
 else {
                        LAB_001043df:iVar12 = CowData<TriangleMesh::Triangle>::_realloc(this, lVar20);
                        if (iVar12 == 0) goto LAB_001041a0;
                     }

                  }

               }
 else {
                  uVar18 = *(ulong*)( lVar20 + -8 );
                  if (uVar13 != uVar18) {
                     if (iVar9 == 0) {
                        LOCK();
                        plVar1 = (long*)( lVar20 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           lVar20 = *(long*)( param_1 + 0x188 );
                           *(undefined8*)( param_1 + 0x188 ) = 0;
                           Memory::free_static((void*)( lVar20 + -0x10 ), false);
                        }
 else {
                           *(undefined8*)( param_1 + 0x188 ) = 0;
                        }

                     }
 else {
                        CowData<TriangleMesh::Triangle>::_copy_on_write(this);
                        if (uVar18 * 0x1c == 0) goto LAB_00104383;
                        uVar14 = uVar18 * 0x1c - 1;
                        uVar21 = uVar13 * 0x1c - 1;
                        uVar21 = uVar21 >> 1 | uVar21;
                        uVar21 = uVar21 >> 2 | uVar21;
                        uVar21 = uVar21 >> 4 | uVar21;
                        uVar21 = uVar21 >> 8 | uVar21;
                        uVar21 = uVar21 >> 0x10 | uVar21;
                        uVar21 = uVar21 >> 0x20 | uVar21;
                        lVar20 = uVar21 + 1;
                        uVar14 = uVar14 | uVar14 >> 1;
                        uVar14 = uVar14 | uVar14 >> 2;
                        uVar14 = uVar14 | uVar14 >> 4;
                        uVar14 = uVar14 | uVar14 >> 8;
                        uVar14 = uVar14 | uVar14 >> 0x10;
                        uVar14 = uVar14 | uVar14 >> 0x20;
                        if ((long)uVar18 < (long)uVar13) {
                           if (uVar14 != uVar21) goto LAB_001043fc;
                           goto LAB_00103920;
                        }

                        if (uVar14 != uVar21) goto LAB_001043df;
                        LAB_001041a0:if (*(long*)( param_1 + 0x188 ) == 0) {
                           FUN_00104a66();
                           return;
                        }

                        *(ulong*)( *(long*)( param_1 + 0x188 ) + -8 ) = uVar13;
                     }

                  }

               }

               CowData<TriangleMesh::BVH>::resize<false>((CowData<TriangleMesh::BVH>*)( param_1 + 0x1a8 ), (long)( iVar9 * 3 ));
               CowData<TriangleMesh::BVH>::_copy_on_write((CowData<TriangleMesh::BVH>*)( param_1 + 0x1a8 ));
               local_f0 = *(BVH**)( param_1 + 0x1a8 );
               puVar32 = *(undefined8**)( param_2 + 8 );
               lVar20 = *(long*)( in_RDX + 8 );
               CowData<TriangleMesh::Triangle>::_copy_on_write(this);
               local_a0 = 2;
               puVar26 = *(undefined8**)( param_1 + 0x188 );
               local_c0 = (undefined1[16])0x0;
               local_b0 = (undefined1[16])0x0;
               if (2 < iVar11) {
                  lVar28 = 0;
                  local_10c = 0;
                  pBVar24 = local_f0;
                  LAB_00103c91:fVar27 = (float)lVar28;
                  lVar29 = 0;
                  fVar35 = in_XMM1_Da;
                  do {
                     while (true) {
                        local_68 = Vector3::snappedf(_LC41);
                        local_cc = 0;
                        local_60 = fVar35;
                        cVar10 = HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>::_lookup_pos((HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>*)local_c8, (Vector3*)&local_68, &local_cc);
                        if (cVar10 == '\0') break;
                        lVar7 = *(long*)( local_c0._0_8_ + (ulong)local_cc * 8 );
                        if (lVar7 == 0) break;
                        *(undefined4*)( (long)puVar26 + lVar29 * 4 + 0xc ) = *(undefined4*)( lVar7 + 0x1c );
                        if (lVar29 != 0) goto LAB_00103a78;
                        LAB_00103d08:lVar29 = 1;
                        *(undefined8*)pBVar24 = local_68;
                        *(float*)( pBVar24 + 8 ) = local_60;
                     }
;
                     puVar16 = (uint*)HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>::operator []((HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>*)local_c8, (Vector3*)&local_68);
                     *puVar16 = local_10c;
                     *(uint*)( (long)puVar26 + lVar29 * 4 + 0xc ) = local_10c;
                     local_10c = local_a0._4_4_;
                     if (lVar29 == 0) goto LAB_00103d08;
                     LAB_00103a78:fVar35 = *(float*)( pBVar24 + 0xc );
                     if (( ( fVar35 < 0.0 ) || ( fVar33 = fVar33 < 0.0 ) ) || ( fVar34 = fVar34 < 0.0 )) {
                        _err_print_error("expand_to", "./core/math/aabb.h", 0x158, "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size.", 0, 0);
                        fVar34 = *(float*)( pBVar24 + 0x14 );
                        fVar33 = *(float*)( pBVar24 + 0x10 );
                        fVar35 = *(float*)( pBVar24 + 0xc );
                     }

                     fVar4 = *(float*)( pBVar24 + 8 );
                     fVar36 = *(float*)pBVar24;
                     fVar5 = *(float*)( pBVar24 + 4 );
                     fVar37 = (float)local_68;
                     if ((float)local_68 <= fVar35 + fVar36) {
                        fVar37 = fVar35 + fVar36;
                     }

                     fVar6 = (float)local_68;
                     if (fVar36 <= (float)local_68) {
                        fVar6 = fVar36;
                     }

                     fVar35 = local_68._4_4_;
                     if (local_68._4_4_ <= fVar33 + fVar5) {
                        fVar35 = fVar33 + fVar5;
                     }

                     fVar33 = local_68._4_4_;
                     if (fVar5 <= local_68._4_4_) {
                        fVar33 = fVar5;
                     }

                     fVar35 = fVar35 - fVar33;
                     fVar36 = local_60;
                     if (local_60 <= fVar34 + fVar4) {
                        fVar36 = fVar34 + fVar4;
                     }

                     fVar34 = local_60;
                     if (fVar4 <= local_60) {
                        fVar34 = fVar4;
                     }

                     fVar36 = fVar36 - fVar34;
                     *(ulong*)pBVar24 = CONCAT44(fVar33, fVar6);
                     *(ulong*)( pBVar24 + 8 ) = CONCAT44(fVar37 - fVar6, fVar34);
                     *(ulong*)( pBVar24 + 0x10 ) = CONCAT44(fVar36, fVar35);
                     if (lVar29 == 2) goto code_r0x00103b45;
                     lVar29 = 2;
                  }
 while ( true );
               }

            }

            local_a0 = 2;
            local_b0 = (undefined1[16])0x0;
            local_c0 = (undefined1[16])0x0;
            lVar20 = *(long*)( param_1 + 0x198 );
            if (lVar20 != 0) {
               if (*(long*)( lVar20 + -8 ) == 0) goto LAB_00103ee8;
               goto LAB_001042b4;
            }

            CowData<Vector3>::_copy_on_write((CowData<Vector3>*)( param_1 + 0x198 ));
            if (iVar11 < -2) goto LAB_001044e5;
            goto LAB_00104512;
         }

      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar25 = 0x71;
      pcVar22 = "Condition \"!fc || ((fc % 3) != 0)\" is true.";
      LAB_001041e7:_err_print_error("create", "core/math/triangle_mesh.cpp", uVar25, pcVar22, 0, 0);
      return;
   }

   goto LAB_00104743;
   code_r0x00103b45:local_68 = *puVar32;
   local_60 = *(float*)( puVar32 + 1 );
   local_5c = *(undefined8*)( (long)puVar32 + 0xc );
   local_54 = *(undefined4*)( (long)puVar32 + 0x14 );
   local_50 = puVar32[3];
   local_48 = *(undefined4*)( puVar32 + 4 );
   local_90 = Face3::get_plane((Vector3*)&local_68);
   uVar23 = 0;
   local_70 = CONCAT44(fVar36, fVar35);
   *puVar26 = local_90;
   *(float*)( puVar26 + 1 ) = fVar35;
   if (lVar20 != 0) {
      uVar23 = *(undefined4*)( lVar20 + lVar28 * 4 );
   }

   uVar25 = *(undefined8*)pBVar24;
   *(undefined4*)( puVar26 + 3 ) = uVar23;
   lVar28 = lVar28 + 1;
   puVar26 = (undefined8*)( (long)puVar26 + 0x1c );
   puVar32 = (undefined8*)( (long)puVar32 + 0x24 );
   fVar33 = (float)*(undefined8*)( pBVar24 + 0xc ) * (float)_LC14;
   fVar34 = (float)( ( ulong ) * (undefined8*)( pBVar24 + 0xc ) >> 0x20 ) * _LC14._4_4_;
   in_XMM1_Da = (float)_LC14 * *(float*)( pBVar24 + 0x14 );
   *(undefined8*)( pBVar24 + 0x24 ) = _LC45;
   in_XMM1_Da = in_XMM1_Da + *(float*)( pBVar24 + 8 );
   *(float*)( pBVar24 + 0x2c ) = fVar27;
   *(float*)( pBVar24 + 0x20 ) = in_XMM1_Da;
   *(ulong*)( pBVar24 + 0x18 ) = CONCAT44(fVar34 + (float)( (ulong)uVar25 >> 0x20 ), fVar33 + (float)uVar25);
   pBVar24 = pBVar24 + 0x30;
   local_88 = fVar35;
   local_84 = local_90;
   local_7c = fVar35;
   local_78 = local_90;
   if (iVar9 <= (int)lVar28) goto LAB_00103d80;
   goto LAB_00103c91;
   LAB_00103d80:uVar18 = (ulong)local_10c;
   lVar20 = *(long*)( param_1 + 0x198 );
   this_00 = (CowData<Vector3>*)( param_1 + 0x198 );
   if (lVar20 == 0) {
      if (uVar18 == 0) {
         LAB_00103ee8:puVar32 = (undefined8*)local_b0._0_8_;
         puVar26 = (undefined8*)local_c0._0_8_;
      }
 else {
         uVar21 = 0;
         CowData<Vector3>::_copy_on_write(this_00);
         LAB_001042f6:uVar14 = uVar18 * 0xc - 1;
         uVar14 = uVar14 >> 1 | uVar14;
         uVar14 = uVar14 >> 2 | uVar14;
         uVar14 = uVar14 >> 4 | uVar14;
         uVar14 = uVar14 >> 8 | uVar14;
         uVar14 = uVar14 >> 0x10 | uVar14;
         lVar20 = ( uVar14 >> 0x20 | uVar14 ) + 1;
         if ((long)uVar18 <= (long)uVar21) {
            LAB_0010434a:iVar12 = CowData<Vector3>::_realloc(this_00, lVar20);
            if (iVar12 == 0) goto LAB_00103ed4;
            goto LAB_00103ee8;
         }

         LAB_00104440:if (uVar21 != 0) {
            iVar12 = CowData<Vector3>::_realloc(this_00, lVar20);
            if (iVar12 == 0) {
               LAB_00103e72:puVar26 = *(undefined8**)( param_1 + 0x198 );
               if (puVar26 == (undefined8*)0x0) goto TriangleMesh_create;
               lVar20 = puVar26[-1];
               goto LAB_00103e86;
            }

            goto LAB_00103ee8;
         }

         puVar32 = (undefined8*)Memory::alloc_static(lVar20 + 0x10, false);
         if (puVar32 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            puVar32 = (undefined8*)local_b0._0_8_;
            puVar26 = (undefined8*)local_c0._0_8_;
         }
 else {
            puVar26 = puVar32 + 2;
            *puVar32 = 1;
            puVar32[1] = 0;
            *(undefined8**)( param_1 + 0x198 ) = puVar26;
            lVar20 = 0;
            LAB_00103e86:if (lVar20 < (long)uVar18) {
               memset((void*)( (long)puVar26 + lVar20 * 0xc ), 0, ( uVar18 - lVar20 ) * 0xc);
            }

            puVar26[-1] = uVar18;
            puVar32 = (undefined8*)local_b0._0_8_;
            puVar26 = (undefined8*)local_c0._0_8_;
         }

      }

   }
 else {
      uVar21 = *(ulong*)( lVar20 + -8 );
      if (uVar18 == uVar21) goto LAB_00103ee8;
      if (uVar18 != 0) {
         CowData<Vector3>::_copy_on_write(this_00);
         uVar14 = uVar18 * 0xc - 1;
         uVar14 = uVar14 >> 1 | uVar14;
         uVar14 = uVar14 >> 2 | uVar14;
         uVar14 = uVar14 >> 4 | uVar14;
         uVar14 = uVar14 >> 8 | uVar14;
         uVar14 = uVar14 >> 0x10 | uVar14;
         uVar14 = uVar14 >> 0x20 | uVar14;
         lVar20 = uVar14 + 1;
         if (uVar21 * 0xc == 0) goto LAB_001042f6;
         uVar17 = uVar21 * 0xc - 1;
         uVar17 = uVar17 | uVar17 >> 1;
         uVar17 = uVar17 | uVar17 >> 2;
         uVar17 = uVar17 | uVar17 >> 4;
         uVar17 = uVar17 | uVar17 >> 8;
         uVar17 = uVar17 | uVar17 >> 0x10;
         uVar17 = uVar17 | uVar17 >> 0x20;
         if ((long)uVar21 < (long)uVar18) {
            if (uVar17 != uVar14) goto LAB_00104440;
            goto LAB_00103e72;
         }

         if (uVar17 != uVar14) goto LAB_0010434a;
         LAB_00103ed4:if (*(long*)( param_1 + 0x198 ) == 0) {
            _DAT_00000000 = 0;
            /* WARNING: Does not return */
            pcVar8 = (code*)invalidInstructionException();
            ( *pcVar8 )();
         }

         *(ulong*)( *(long*)( param_1 + 0x198 ) + -8 ) = uVar18;
         goto LAB_00103ee8;
      }

      LAB_001042b4:LOCK();
      plVar1 = (long*)( lVar20 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar20 = *(long*)( param_1 + 0x198 );
         *(undefined8*)( param_1 + 0x198 ) = 0;
         Memory::free_static((void*)( lVar20 + -0x10 ), false);
         puVar32 = (undefined8*)local_b0._0_8_;
         puVar26 = (undefined8*)local_c0._0_8_;
      }
 else {
         *(undefined8*)( param_1 + 0x198 ) = 0;
         puVar32 = (undefined8*)local_b0._0_8_;
         puVar26 = (undefined8*)local_c0._0_8_;
      }

   }

   local_e8 = (CowData<TriangleMesh::BVH>*)( param_1 + 0x1a8 );
   local_120 = local_c8;
   CowData<Vector3>::_copy_on_write((CowData<Vector3>*)( param_1 + 0x198 ));
   lVar20 = *(long*)( param_1 + 0x198 );
   while (puVar32 != (undefined8*)0x0) {
      puVar2 = (undefined8*)( lVar20 + (long)*(int*)( (long)puVar32 + 0x1c ) * 0xc );
      *puVar2 = puVar32[2];
      puVar15 = puVar32 + 3;
      puVar32 = (undefined8*)*puVar32;
      *(undefined4*)( puVar2 + 1 ) = *(undefined4*)puVar15;
   }
;
   if (puVar26 != (undefined8*)0x0) {
      uVar25 = local_c0._8_8_;
      if (( local_a0._4_4_ != 0 ) && ( *(uint*)( hash_table_size_primes + ( local_a0 & 0xffffffff ) * 4 ) != 0 )) {
         piVar3 = (int*)( local_c0._8_8_ + ( ulong ) * (uint*)( hash_table_size_primes + ( local_a0 & 0xffffffff ) * 4 ) * 4 );
         puVar32 = puVar26;
         piVar30 = (int*)local_c0._8_8_;
         do {
            if (*piVar30 != 0) {
               *piVar30 = 0;
               Memory::free_static((void*)*puVar32, false);
               *puVar32 = 0;
            }

            piVar30 = piVar30 + 1;
            puVar32 = puVar32 + 1;
         }
 while ( piVar30 != piVar3 );
      }

      Memory::free_static(puVar26, false);
      Memory::free_static((void*)uVar25, false);
   }

   if (iVar11 < -2) {
      LAB_001044e5:_err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      LAB_00104512:local_e8 = (CowData<TriangleMesh::BVH>*)( param_1 + 0x1a8 );
      local_120 = local_c8;
      *(undefined4*)( param_1 + 0x1b0 ) = 0;
      _create_bvh((TriangleMesh*)param_1, local_f0, (BVH**)0x0, 0, iVar9, 1, (int*)( param_1 + 0x1b0 ), local_120);
      CowData<TriangleMesh::BVH>::resize<false>(local_e8, (long)local_c8[0]);
      param_1[0x1b4] = (Vector)0x1;
   }
 else {
      if (iVar9 == 0) {
         LAB_001040c9:ppBVar31 = (BVH**)0x0;
         if (iVar11 < 3) goto LAB_00104512;
         LAB_001040d7:lVar20 = 0;
         pBVar24 = local_f0;
         do {
            ppBVar31[lVar20] = pBVar24;
            lVar20 = lVar20 + 1;
            pBVar24 = pBVar24 + 0x30;
         }
 while ( (int)lVar20 < iVar9 );
         *(undefined4*)( param_1 + 0x1b0 ) = 0;
      }
 else {
         uVar18 = uVar13 * 8 - 1;
         uVar18 = uVar18 | uVar18 >> 1;
         uVar18 = uVar18 | uVar18 >> 2;
         uVar18 = uVar18 | uVar18 >> 4;
         uVar18 = uVar18 | uVar18 >> 8;
         uVar18 = uVar18 | uVar18 >> 0x10;
         puVar19 = (ulong*)Memory::alloc_static(( uVar18 | uVar18 >> 0x20 ) + 0x11, false);
         if (puVar19 == (ulong*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            goto LAB_001040c9;
         }

         ppBVar31 = (BVH**)( puVar19 + 2 );
         *puVar19 = 1;
         puVar19[1] = uVar13;
         if (1 < *puVar19) {
            uVar18 = puVar19[1];
            uVar13 = 0x10;
            __n = uVar18 * 8;
            if (__n != 0) {
               uVar13 = __n - 1 | __n - 1 >> 1;
               uVar13 = uVar13 | uVar13 >> 2;
               uVar13 = uVar13 | uVar13 >> 4;
               uVar13 = uVar13 | uVar13 >> 8;
               uVar13 = uVar13 | uVar13 >> 0x10;
               uVar13 = ( uVar13 | uVar13 >> 0x20 ) + 0x11;
            }

            puVar32 = (undefined8*)Memory::alloc_static(uVar13, false);
            if (puVar32 == (undefined8*)0x0) {
               _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
            }
 else {
               __dest = (BVH**)( puVar32 + 2 );
               *puVar32 = 1;
               puVar32[1] = uVar18;
               memcpy(__dest, ppBVar31, __n);
               LOCK();
               *puVar19 = *puVar19 - 1;
               UNLOCK();
               ppBVar31 = __dest;
               if (*puVar19 == 0) {
                  Memory::free_static(puVar19, false);
               }

            }

         }

         if (2 < iVar11) goto LAB_001040d7;
         *(undefined4*)( param_1 + 0x1b0 ) = 0;
         local_c8[0] = 0;
      }

      _create_bvh((TriangleMesh*)param_1, local_f0, ppBVar31, 0, local_c8[0], 1, (int*)( param_1 + 0x1b0 ), local_120);
      CowData<TriangleMesh::BVH>::resize<false>(local_e8, (long)local_c8[0]);
      param_1[0x1b4] = (Vector)0x1;
      ppBVar31 = ppBVar31 + -2;
      LOCK();
      *ppBVar31 = *ppBVar31 + -1;
      UNLOCK();
      if (*ppBVar31 == (BVH*)0x0) {
         Memory::free_static(ppBVar31, false);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00104743:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
/* Object::get_save_class() const */void Object::get_save_class(void) {
   long lVar1;
   long *in_RSI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *in_RSI + 0x48 ) )();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x1072, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1072, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* RefCounted::_getv(StringName const&, Variant&) const */undefined8 RefCounted::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_setv(StringName const&, Variant const&) */undefined8 RefCounted::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_validate_propertyv(PropertyInfo&) const */void RefCounted::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* RefCounted::_property_can_revertv(StringName const&) const */undefined8 RefCounted::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */undefined8 RefCounted::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_notificationv(int, bool) */void RefCounted::_notificationv(int param_1, bool param_2) {
   return;
}
/* TriangleMesh::is_class_ptr(void*) const */uint TriangleMesh::is_class_ptr(TriangleMesh *this, void *param_1) {
   return (uint)CONCAT71(0x1072, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1072, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1072, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* TriangleMesh::_getv(StringName const&, Variant&) const */undefined8 TriangleMesh::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* TriangleMesh::_setv(StringName const&, Variant const&) */undefined8 TriangleMesh::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* TriangleMesh::_validate_propertyv(PropertyInfo&) const */void TriangleMesh::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* TriangleMesh::_property_can_revertv(StringName const&) const */undefined8 TriangleMesh::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* TriangleMesh::_property_get_revertv(StringName const&, Variant&) const */undefined8 TriangleMesh::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* TriangleMesh::_notificationv(int, bool) */void TriangleMesh::_notificationv(int param_1, bool param_2) {
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00106f88;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00106f88;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* CowData<TriangleMesh::BVH>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<TriangleMesh::BVH>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<TriangleMesh::Triangle>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<TriangleMesh::Triangle>::_copy_on_write(void) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* TriangleMesh::get_indices(Vector<int>*) const [clone .cold] */void TriangleMesh::get_indices(Vector *param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_00104a3a(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* Error CowData<TriangleMesh::BVH>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<TriangleMesh::BVH>::resize<false>(long param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_00104a50(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* TriangleMesh::create(Vector<Vector3> const&, Vector<int> const&) [clone .cold] */void TriangleMesh::create(Vector *param_1, Vector *param_2) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_00104a66(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* RefCounted::_get_class_namev() const */undefined8 *RefCounted::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00104ab3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00104ab3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_00104b1e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_00104b1e:return &_get_class_namev();
}
/* TriangleMesh::_get_class_namev() const */undefined8 *TriangleMesh::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00104ba3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00104ba3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "TriangleMesh");
         goto LAB_00104c0e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "TriangleMesh");
   LAB_00104c0e:return &_get_class_namev();
}
/* TriangleMesh::~TriangleMesh() */void TriangleMesh::~TriangleMesh(TriangleMesh *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_001070e8;
   for (int i = 0; i < 3; i++) {
      if (*(long*)( this + ( -16*i + 424 ) ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + ( -16*i + 424 ) ) + -16 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( this + ( -16*i + 424 ) );
            *(undefined8*)( this + ( -16*i + 424 ) ) = 0;
            Memory::free_static((void*)( lVar2 + -16 ), false);
         }

      }

   }

   *(undefined***)this = &PTR__initialize_classv_00106f88;
   Object::~Object((Object*)this);
   return;
}
/* TriangleMesh::~TriangleMesh() */void TriangleMesh::~TriangleMesh(TriangleMesh *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_001070e8;
   for (int i = 0; i < 3; i++) {
      if (*(long*)( this + ( -16*i + 424 ) ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + ( -16*i + 424 ) ) + -16 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( this + ( -16*i + 424 ) );
            *(undefined8*)( this + ( -16*i + 424 ) ) = 0;
            Memory::free_static((void*)( lVar2 + -16 ), false);
         }

      }

   }

   *(undefined***)this = &PTR__initialize_classv_00106f88;
   Object::~Object((Object*)this);
   operator_delete(this, 0x1b8);
   return;
}
/* TriangleMesh::get_class() const */void TriangleMesh::get_class(void) {
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
/* RefCounted::get_class() const */void RefCounted::get_class(void) {
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
                  if (lVar5 == 0) goto LAB_0010503f;
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

      LAB_0010503f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_001050f3;
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
                     if (lVar5 == 0) goto LAB_001051a3;
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

         LAB_001051a3:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_001050f3;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_001050f3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TriangleMesh::is_class(String const&) const */undefined8 TriangleMesh::is_class(TriangleMesh *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_001052cf;
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

      LAB_001052cf:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00105383;
   }

   cVar5 = String::operator ==(param_1, "TriangleMesh");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00105383:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      Object::initialize_class();
      local_48 = 0;
      local_38 = "Object";
      local_30 = 6;
      String::parse_latin1((StrRange*)&local_48);
      StringName::StringName((StringName*)&local_40, (String*)&local_48, false);
      local_38 = "RefCounted";
      local_50 = 0;
      local_30 = 10;
      String::parse_latin1((StrRange*)&local_50);
      StringName::StringName((StringName*)&local_38, (String*)&local_50, false);
      ClassDB::_add_class2((StringName*)&local_38, (StringName*)&local_40);
      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

      lVar2 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_40 != 0 )) {
         StringName::unref();
      }

      lVar2 = local_48;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
         RefCounted::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
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
      LAB_001056e8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001056e8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00105706;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x00105706:if (lVar2 == 0) {
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
/* TriangleMesh::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void TriangleMesh::_get_property_listv(TriangleMesh *this, List *param_1, bool param_2) {
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
   local_78 = "TriangleMesh";
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "TriangleMesh";
   local_98 = 0;
   local_70 = 0xc;
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
      LAB_00105ae8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00105ae8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00105b05;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00105b05:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "TriangleMesh", false);
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
/* TriangleMesh::_initialize_classv() */void TriangleMesh::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_60;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() != '\0') goto LAB_00105f14;
   if (RefCounted::initialize_class() == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "RefCounted";
      local_60 = 0;
      local_40 = 10;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      lVar2 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      lVar2 = local_58;
      if (local_58 == 0) {
         LAB_0010601e:if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
            LAB_0010602e:RefCounted::_bind_methods();
         }

      }
 else {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_0010601e;
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_0010602e;
      }

      RefCounted::initialize_class()::initialized =
      '\x01';
   }

   local_48 = "RefCounted";
   local_58 = 0;
   local_40 = 10;
   String::parse_latin1((StrRange*)&local_58);
   StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
   local_48 = "TriangleMesh";
   local_60 = 0;
   local_40 = 0xc;
   String::parse_latin1((StrRange*)&local_60);
   StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
   ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   lVar2 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   initialize_class()::initialized =
   '\x01';
   LAB_00105f14:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* HashMap<Vector3, int, HashMapHasherDefault, HashMapComparatorDefault<Vector3>,
   DefaultTypedAllocator<HashMapElement<Vector3, int> > >::_lookup_pos(Vector3 const&, unsigned
   int&) const */undefined8 HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>::_lookup_pos(HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>> *this, Vector3 *param_1, uint *param_2) {
   float fVar1;
   float fVar2;
   float fVar3;
   ulong uVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   uint uVar13;
   uint uVar14;
   ulong uVar15;
   long lVar16;
   ulong uVar17;
   uint uVar18;
   uint uVar19;
   if (*(long*)( this + 8 ) != 0) {
      if (*(int*)( this + 0x2c ) == 0) {
         return 0;
      }

      fVar1 = *(float*)param_1;
      uVar4 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar13 = 0x3413905a;
      if (( fVar1 != 0.0 ) && ( uVar13 = !NAN(fVar1) )) {
         uVar13 = ( (int)fVar1 * 0x16a88000 | ( uint )((int)fVar1 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
         uVar13 = ( uVar13 << 0xd | uVar13 >> 0x13 ) * 5 + 0xe6546b64;
      }

      fVar2 = *(float*)( param_1 + 4 );
      if (fVar2 != 0.0) {
         if (NAN(fVar2)) {
            uVar13 = uVar13 ^ 0x2db3efa0;
         }
 else {
            uVar13 = uVar13 ^ ( (int)fVar2 * 0x16a88000 | ( uint )((int)fVar2 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
         }

      }

      fVar3 = *(float*)( param_1 + 8 );
      uVar13 = ( uVar13 << 0xd | uVar13 >> 0x13 ) * 5 + 0xe6546b64;
      if (fVar3 != 0.0) {
         if (NAN(fVar3)) {
            uVar13 = uVar13 ^ 0x2db3efa0;
         }
 else {
            uVar13 = uVar13 ^ ( (int)fVar3 * 0x16a88000 | ( uint )((int)fVar3 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
         }

      }

      uVar13 = ( uVar13 << 0xd | uVar13 >> 0x13 ) * 5 + 0xe6546b64;
      uVar13 = ( uVar13 >> 0x10 ^ uVar13 ) * -0x7a143595;
      uVar13 = ( uVar13 ^ uVar13 >> 0xd ) * -0x3d4d51cb;
      uVar19 = uVar13 ^ uVar13 >> 0x10;
      if (uVar13 == uVar13 >> 0x10) {
         uVar19 = 1;
         uVar15 = uVar4;
      }
 else {
         uVar15 = uVar19 * uVar4;
      }

      uVar17 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 ));
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar17;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar15;
      lVar16 = SUB168(auVar5 * auVar9, 8);
      uVar13 = *(uint*)( *(long*)( this + 0x10 ) + lVar16 * 4 );
      uVar14 = SUB164(auVar5 * auVar9, 8);
      if (uVar13 != 0) {
         uVar18 = 0;
         do {
            if (uVar19 == uVar13) {
               lVar16 = *(long*)( *(long*)( this + 8 ) + lVar16 * 8 );
               if (( ( ( fVar1 == *(float*)( lVar16 + 0x10 ) ) || ( ( NAN(*(float*)( lVar16 + 0x10 )) && ( NAN(fVar1) ) ) ) ) && ( ( fVar2 == *(float*)( lVar16 + 0x14 ) || ( ( NAN(*(float*)( lVar16 + 0x14 )) && ( NAN(fVar2) ) ) ) ) ) ) && ( ( fVar3 == *(float*)( lVar16 + 0x18 ) || ( ( NAN(fVar3) && ( NAN(*(float*)( lVar16 + 0x18 )) ) ) ) ) )) {
                  *param_2 = uVar14;
                  return 1;
               }

            }

            uVar18 = uVar18 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( uVar14 + 1 ) * uVar4;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar17;
            lVar16 = SUB168(auVar6 * auVar10, 8);
            uVar13 = *(uint*)( *(long*)( this + 0x10 ) + lVar16 * 4 );
            uVar14 = SUB164(auVar6 * auVar10, 8);
         }
 while ( ( uVar13 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = uVar13 * uVar4,auVar11._8_8_ = 0,auVar11._0_8_ = uVar17,auVar8._8_8_ = 0,auVar8._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 ) + uVar14 ) - SUB164(auVar7 * auVar11, 8) ) * uVar4,auVar12._8_8_ = 0,auVar12._0_8_ = uVar17,uVar18 <= SUB164(auVar8 * auVar12, 8) );
      }

   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<Vector3, int, HashMapHasherDefault, HashMapComparatorDefault<Vector3>,
   DefaultTypedAllocator<HashMapElement<Vector3, int> > >::operator[](Vector3 const&) */undefined1 * __thiscall
HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
::operator[](HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
             *this,Vector3 *param_1){
   uint *puVar1;
   undefined8 *puVar2;
   float fVar3;
   uint uVar4;
   void *pvVar5;
   void *__s;
   long lVar6;
   long lVar7;
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
   undefined1(*pauVar24)[16];
   char cVar25;
   uint uVar26;
   uint uVar27;
   ulong uVar28;
   undefined8 uVar29;
   void *__s_00;
   undefined1(*pauVar30)[16];
   void *pvVar31;
   int iVar32;
   long lVar33;
   long lVar34;
   ulong uVar35;
   undefined8 uVar36;
   uint uVar37;
   uint uVar38;
   ulong uVar39;
   undefined1(*pauVar40)[16];
   long in_FS_OFFSET;
   uint local_c8;
   uint local_70;
   uint local_6c[5];
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   cVar25 = _lookup_pos(this, param_1, &local_70);
   if (cVar25 == '\0') {
      uVar26 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (*(long*)( this + 8 ) == 0) {
         uVar35 = (ulong)uVar26;
         uVar28 = uVar35 * 4;
         uVar39 = uVar35 * 8;
         uVar29 = Memory::alloc_static(uVar28, false);
         *(undefined8*)( this + 0x10 ) = uVar29;
         pvVar31 = (void*)Memory::alloc_static(uVar39, false);
         *(void**)( this + 8 ) = pvVar31;
         if (uVar26 != 0) {
            pvVar5 = *(void**)( this + 0x10 );
            if (( pvVar5 < (void*)( (long)pvVar31 + uVar39 ) ) && ( pvVar31 < (void*)( (long)pvVar5 + uVar28 ) )) {
               uVar28 = 0;
               do {
                  *(undefined4*)( (long)pvVar5 + uVar28 * 4 ) = 0;
                  *(undefined8*)( (long)pvVar31 + uVar28 * 8 ) = 0;
                  uVar28 = uVar28 + 1;
               }
 while ( uVar35 != uVar28 );
            }
 else {
               memset(pvVar5, 0, uVar28);
               memset(pvVar31, 0, uVar39);
            }

         }

      }

      local_6c[0] = 0;
      cVar25 = _lookup_pos(this, param_1, local_6c);
      if (cVar25 == '\0') {
         if ((float)uVar26 * __LC23 < (float)( *(int*)( this + 0x2c ) + 1 )) {
            uVar26 = *(uint*)( this + 0x28 );
            if (uVar26 == 0x1c) {
               pauVar30 = (undefined1(*) [16])0x0;
               _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
               goto LAB_00106a77;
            }

            uVar28 = ( ulong )(uVar26 + 1);
            *(undefined4*)( this + 0x2c ) = 0;
            uVar27 = *(uint*)( hash_table_size_primes + (ulong)uVar26 * 4 );
            if (uVar26 + 1 < 2) {
               uVar28 = 2;
            }

            uVar26 = *(uint*)( hash_table_size_primes + uVar28 * 4 );
            uVar35 = (ulong)uVar26;
            *(int*)( this + 0x28 ) = (int)uVar28;
            pvVar31 = *(void**)( this + 8 );
            uVar28 = uVar35 * 4;
            uVar39 = uVar35 * 8;
            pvVar5 = *(void**)( this + 0x10 );
            uVar29 = Memory::alloc_static(uVar28, false);
            *(undefined8*)( this + 0x10 ) = uVar29;
            __s_00 = (void*)Memory::alloc_static(uVar39, false);
            *(void**)( this + 8 ) = __s_00;
            if (uVar26 != 0) {
               __s = *(void**)( this + 0x10 );
               if (( __s < (void*)( (long)__s_00 + uVar39 ) ) && ( __s_00 < (void*)( (long)__s + uVar28 ) )) {
                  uVar28 = 0;
                  do {
                     *(undefined4*)( (long)__s + uVar28 * 4 ) = 0;
                     *(undefined8*)( (long)__s_00 + uVar28 * 8 ) = 0;
                     uVar28 = uVar28 + 1;
                  }
 while ( uVar35 != uVar28 );
               }
 else {
                  memset(__s, 0, uVar28);
                  memset(__s_00, 0, uVar39);
               }

            }

            if (uVar27 != 0) {
               uVar28 = 0;
               do {
                  uVar26 = *(uint*)( (long)pvVar5 + uVar28 * 4 );
                  if (uVar26 != 0) {
                     lVar6 = *(long*)( this + 0x10 );
                     uVar37 = 0;
                     uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
                     uVar39 = CONCAT44(0, uVar4);
                     lVar7 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                     auVar8._8_8_ = 0;
                     auVar8._0_8_ = (ulong)uVar26 * lVar7;
                     auVar16._8_8_ = 0;
                     auVar16._0_8_ = uVar39;
                     lVar33 = SUB168(auVar8 * auVar16, 8);
                     puVar1 = (uint*)( lVar6 + lVar33 * 4 );
                     iVar32 = SUB164(auVar8 * auVar16, 8);
                     uVar38 = *puVar1;
                     uVar29 = *(undefined8*)( (long)pvVar31 + uVar28 * 8 );
                     while (uVar38 != 0) {
                        auVar9._8_8_ = 0;
                        auVar9._0_8_ = (ulong)uVar38 * lVar7;
                        auVar17._8_8_ = 0;
                        auVar17._0_8_ = uVar39;
                        auVar10._8_8_ = 0;
                        auVar10._0_8_ = ( ulong )(( uVar4 + iVar32 ) - SUB164(auVar9 * auVar17, 8)) * lVar7;
                        auVar18._8_8_ = 0;
                        auVar18._0_8_ = uVar39;
                        local_c8 = SUB164(auVar10 * auVar18, 8);
                        uVar36 = uVar29;
                        if (local_c8 < uVar37) {
                           *puVar1 = uVar26;
                           puVar2 = (undefined8*)( (long)__s_00 + lVar33 * 8 );
                           uVar36 = *puVar2;
                           *puVar2 = uVar29;
                           uVar26 = uVar38;
                           uVar37 = local_c8;
                        }

                        uVar37 = uVar37 + 1;
                        auVar11._8_8_ = 0;
                        auVar11._0_8_ = ( ulong )(iVar32 + 1) * lVar7;
                        auVar19._8_8_ = 0;
                        auVar19._0_8_ = uVar39;
                        lVar33 = SUB168(auVar11 * auVar19, 8);
                        puVar1 = (uint*)( lVar6 + lVar33 * 4 );
                        iVar32 = SUB164(auVar11 * auVar19, 8);
                        uVar29 = uVar36;
                        uVar38 = *puVar1;
                     }
;
                     *(undefined8*)( (long)__s_00 + lVar33 * 8 ) = uVar29;
                     *puVar1 = uVar26;
                     *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
                  }

                  uVar28 = uVar28 + 1;
               }
 while ( uVar28 != uVar27 );
               Memory::free_static(pvVar31, false);
               Memory::free_static(pvVar5, false);
            }

         }

         local_58 = *(undefined8*)param_1;
         local_50 = *(undefined4*)( param_1 + 8 );
         pauVar30 = (undefined1(*) [16])operator_new(0x20, "");
         *pauVar30 = (undefined1[16])0x0;
         *(undefined4*)( pauVar30[1] + 0xc ) = 0;
         *(undefined8*)pauVar30[1] = local_58;
         *(undefined4*)( pauVar30[1] + 8 ) = local_50;
         puVar2 = *(undefined8**)( this + 0x20 );
         if (puVar2 == (undefined8*)0x0) {
            *(undefined1(**) [16])( this + 0x18 ) = pauVar30;
         }
 else {
            *puVar2 = pauVar30;
            *(undefined8**)( *pauVar30 + 8 ) = puVar2;
         }

         fVar3 = *(float*)param_1;
         *(undefined1(**) [16])( this + 0x20 ) = pauVar30;
         uVar26 = 0x3413905a;
         if (( fVar3 != 0.0 ) && ( uVar26 = !NAN(fVar3) )) {
            uVar26 = ( (int)fVar3 * 0x16a88000 | ( uint )((int)fVar3 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
            uVar26 = ( uVar26 << 0xd | uVar26 >> 0x13 ) * 5 + 0xe6546b64;
         }

         fVar3 = *(float*)( param_1 + 4 );
         if (fVar3 != 0.0) {
            if (NAN(fVar3)) {
               uVar26 = uVar26 ^ 0x2db3efa0;
            }
 else {
               uVar26 = uVar26 ^ ( (int)fVar3 * 0x16a88000 | ( uint )((int)fVar3 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
            }

         }

         fVar3 = *(float*)( param_1 + 8 );
         uVar26 = ( uVar26 << 0xd | uVar26 >> 0x13 ) * 5 + 0xe6546b64;
         if (fVar3 != 0.0) {
            if (NAN(fVar3)) {
               uVar26 = uVar26 ^ 0x2db3efa0;
            }
 else {
               uVar26 = uVar26 ^ ( (int)fVar3 * 0x16a88000 | ( uint )((int)fVar3 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
            }

         }

         uVar26 = ( uVar26 << 0xd | uVar26 >> 0x13 ) * 5 + 0xe6546b64;
         uVar26 = ( uVar26 >> 0x10 ^ uVar26 ) * -0x7a143595;
         uVar27 = ( uVar26 ^ uVar26 >> 0xd ) * -0x3d4d51cb;
         uVar26 = uVar27 ^ uVar27 >> 0x10;
         if (uVar27 == uVar27 >> 0x10) {
            uVar28 = 1;
            uVar26 = 1;
         }
 else {
            uVar28 = (ulong)uVar26;
         }

         uVar38 = 0;
         lVar6 = *(long*)( this + 0x10 );
         lVar7 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar27 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar39 = CONCAT44(0, uVar27);
         auVar12._8_8_ = 0;
         auVar12._0_8_ = uVar28 * lVar7;
         auVar20._8_8_ = 0;
         auVar20._0_8_ = uVar39;
         lVar34 = SUB168(auVar12 * auVar20, 8);
         lVar33 = *(long*)( this + 8 );
         puVar1 = (uint*)( lVar6 + lVar34 * 4 );
         iVar32 = SUB164(auVar12 * auVar20, 8);
         uVar4 = *puVar1;
         pauVar24 = pauVar30;
         while (uVar4 != 0) {
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar4 * lVar7;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar39;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = ( ulong )(( uVar27 + iVar32 ) - SUB164(auVar13 * auVar21, 8)) * lVar7;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar39;
            local_c8 = SUB164(auVar14 * auVar22, 8);
            pauVar40 = pauVar24;
            if (local_c8 < uVar38) {
               *puVar1 = uVar26;
               puVar2 = (undefined8*)( lVar33 + lVar34 * 8 );
               pauVar40 = (undefined1(*) [16])*puVar2;
               *puVar2 = pauVar24;
               uVar26 = uVar4;
               uVar38 = local_c8;
            }

            uVar38 = uVar38 + 1;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = ( ulong )(iVar32 + 1) * lVar7;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar39;
            lVar34 = SUB168(auVar15 * auVar23, 8);
            puVar1 = (uint*)( lVar6 + lVar34 * 4 );
            iVar32 = SUB164(auVar15 * auVar23, 8);
            pauVar24 = pauVar40;
            uVar4 = *puVar1;
         }
;
         *(undefined1(**) [16])( lVar33 + lVar34 * 8 ) = pauVar24;
         *puVar1 = uVar26;
         *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
      }
 else {
         pauVar30 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)local_6c[0] * 8 );
         *(undefined4*)( pauVar30[1] + 0xc ) = 0;
      }

   }
 else {
      pauVar30 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)local_70 * 8 );
   }

   LAB_00106a77:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pauVar30[1] + 0xc;
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
/* CowData<Face3>::_realloc(long) */undefined8 CowData<Face3>::_realloc(CowData<Face3> *this, long param_1) {
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
/* CowData<TriangleMesh::Triangle>::_realloc(long) */undefined8 CowData<TriangleMesh::Triangle>::_realloc(CowData<TriangleMesh::Triangle> *this, long param_1) {
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
/* CowData<TriangleMesh::BVH>::_realloc(long) */undefined8 CowData<TriangleMesh::BVH>::_realloc(CowData<TriangleMesh::BVH> *this, long param_1) {
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
/* CowData<TriangleMesh::BVH*>::_realloc(long) */undefined8 CowData<TriangleMesh::BVH*>::_realloc(CowData<TriangleMesh::BVH*> *this, long param_1) {
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
/* WARNING: Control flow encountered bad instruction data *//* TriangleMesh::~TriangleMesh() */void TriangleMesh::~TriangleMesh(TriangleMesh *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


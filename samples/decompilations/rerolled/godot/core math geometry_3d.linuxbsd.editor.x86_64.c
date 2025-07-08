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
      if (param_3 != 1) goto LAB_00100565;
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
   LAB_00100565:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      *(undefined**)( puVar14 + lVar2 + -8 ) = &UNK_0010059e;
      __stack_chk_fail();
   }

   return;
}
/* LocalVector<int, unsigned int, false, false>::resize(unsigned int) [clone .part.0] */void LocalVector<int,unsigned_int,false,false>::resize(uint param_1) {
   code *pcVar1;
   _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Face3>::_copy_on_write() [clone .isra.0] */void CowData<Face3>::_copy_on_write(CowData<Face3> *this) {
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
   __n = lVar2 * 0x24;
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
/* CowData<Plane>::_copy_on_write() [clone .isra.0] */void CowData<Plane>::_copy_on_write(CowData<Plane> *this) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Geometry3D::get_closest_points_between_segments(Vector3 const&, Vector3 const&, Vector3 const&,
   Vector3 const&, Vector3&, Vector3&) */void Geometry3D::get_closest_points_between_segments(Vector3 *param_1, Vector3 *param_2, Vector3 *param_3, Vector3 *param_4, Vector3 *param_5, Vector3 *param_6) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   undefined8 uVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   undefined8 uVar17;
   uVar13 = *(undefined8*)param_2;
   uVar17 = *(undefined8*)param_1;
   fVar12 = (float)uVar13;
   fVar16 = (float)uVar17;
   fVar5 = *(float*)( param_2 + 4 ) - *(float*)( param_1 + 4 );
   fVar2 = fVar12 - fVar16;
   fVar9 = *(float*)param_4 - *(float*)param_3;
   fVar1 = fVar16 - *(float*)param_3;
   fVar15 = *(float*)( param_2 + 8 );
   fVar11 = *(float*)( param_1 + 8 );
   fVar8 = *(float*)( param_4 + 4 ) - *(float*)( param_3 + 4 );
   fVar6 = *(float*)( param_1 + 4 ) - *(float*)( param_3 + 4 );
   fVar10 = fVar15 - fVar11;
   fVar7 = *(float*)( param_4 + 8 ) - *(float*)( param_3 + 8 );
   fVar14 = fVar11 - *(float*)( param_3 + 8 );
   fVar3 = fVar2 * fVar2 + fVar5 * fVar5 + fVar10 * fVar10;
   fVar4 = fVar9 * fVar2 + fVar8 * fVar5 + fVar7 * fVar10;
   fVar10 = fVar2 * fVar1 + fVar5 * fVar6 + fVar10 * fVar14;
   fVar14 = fVar14 * fVar7 + fVar1 * fVar9 + fVar6 * fVar8;
   fVar8 = fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9;
   fVar7 = fVar3 * fVar8 - fVar4 * fVar4;
   fVar1 = (float)( (ulong)uVar13 >> 0x20 );
   fVar2 = (float)( (ulong)uVar17 >> 0x20 );
   fVar5 = _LC23;
   fVar6 = _LC23;
   if ((double)fVar7 <= __LC25) {
      if (fVar14 <= 0.0) {
         joined_r0x00100f83:if (0.0 <= fVar10) {
            uVar13 = CONCAT44(fVar1 * 0.0, fVar12 * 0.0);
            fVar15 = fVar15 * 0.0;
            fVar5 = 0.0;
            goto LAB_00100f2e;
         }

         if (fVar3 <= (float)( (uint)fVar10 ^ _LC26 )) {
            uVar17 = CONCAT44(fVar2 * 0.0, fVar16 * 0.0);
            fVar11 = fVar11 * 0.0;
            fVar5 = 0.0;
            goto LAB_00100f2e;
         }

         goto LAB_00101040;
      }

      if (fVar8 <= fVar14) {
         if (fVar4 - fVar10 <= 0.0) {
            LAB_00101020:fVar15 = fVar15 * 0.0;
            uVar13 = CONCAT44(fVar1 * 0.0, fVar12 * 0.0);
            fVar6 = 0.0;
            goto LAB_00100f2e;
         }

         LAB_00100ee1:if (fVar4 - fVar10 < fVar3) goto LAB_00100e13;
         LAB_00100eec:fVar11 = fVar11 * 0.0;
         uVar17 = CONCAT44(fVar2 * 0.0, fVar16 * 0.0);
         fVar6 = 0.0;
         goto LAB_00100f2e;
      }

   }
 else {
      if (fVar10 * fVar8 < fVar14 * fVar4) {
         fVar9 = fVar14 * fVar4 - fVar10 * fVar8;
         if (fVar9 < fVar7) {
            if (fVar10 * fVar4 < fVar14 * fVar3) {
               fVar6 = fVar14 * fVar3 - fVar10 * fVar4;
               if (fVar6 < fVar7) {
                  fVar9 = fVar9 / fVar7;
                  fVar5 = fVar6 / fVar7;
                  fVar15 = fVar15 * fVar9;
                  uVar13 = CONCAT44(fVar1 * fVar9, fVar12 * fVar9);
                  fVar9 = _LC23 - fVar9;
                  fVar11 = fVar11 * fVar9;
                  uVar17 = CONCAT44(fVar2 * fVar9, fVar16 * fVar9);
                  fVar6 = _LC23 - fVar5;
                  goto LAB_00100f2e;
               }

               if (fVar4 - fVar10 <= 0.0) {
                  fVar15 = fVar15 * 0.0;
                  fVar6 = 0.0;
                  uVar13 = CONCAT44(fVar1 * 0.0, fVar12 * 0.0);
                  goto LAB_00100f2e;
               }

               goto LAB_00100ee1;
            }

            goto joined_r0x00100f83;
         }

         fVar14 = fVar14 + fVar4;
         if (0.0 < fVar14) {
            if (fVar14 < fVar8) {
               uVar17 = CONCAT44(fVar2 * 0.0, fVar16 * 0.0);
               fVar11 = fVar11 * 0.0;
               fVar5 = fVar14 / fVar8;
               fVar6 = _LC23 - fVar14 / fVar8;
               goto LAB_00100f2e;
            }

            if (fVar4 - fVar10 <= 0.0) {
               fVar15 = fVar15 * 0.0;
               uVar13 = CONCAT44(fVar1 * 0.0, fVar12 * 0.0);
               fVar6 = 0.0;
               goto LAB_00100f2e;
            }

            if (fVar3 <= fVar4 - fVar10) {
               fVar11 = fVar11 * 0.0;
               uVar17 = CONCAT44(fVar2 * 0.0, fVar16 * 0.0);
               fVar6 = 0.0;
               goto LAB_00100f2e;
            }

            LAB_00100e13:fVar3 = ( fVar4 - fVar10 ) / fVar3;
            uVar13 = CONCAT44(fVar1 * fVar3, fVar12 * fVar3);
            fVar15 = fVar15 * fVar3;
            fVar3 = _LC23 - fVar3;
            fVar11 = fVar11 * fVar3;
            uVar17 = CONCAT44(fVar2 * fVar3, fVar16 * fVar3);
            fVar6 = 0.0;
            goto LAB_00100f2e;
         }

         if (0.0 <= fVar10) {
            uVar13 = CONCAT44(fVar1 * 0.0, fVar12 * 0.0);
            fVar15 = fVar15 * 0.0;
            fVar5 = 0.0;
            goto LAB_00100f2e;
         }

         if (fVar3 <= (float)( (uint)fVar10 ^ _LC26 )) {
            uVar17 = CONCAT44(fVar2 * 0.0, fVar16 * 0.0);
            fVar11 = fVar11 * 0.0;
            fVar5 = 0.0;
            goto LAB_00100f2e;
         }

         LAB_00101040:fVar3 = (float)( (uint)fVar10 ^ _LC26 ) / fVar3;
         uVar13 = CONCAT44(fVar1 * fVar3, fVar12 * fVar3);
         fVar15 = fVar15 * fVar3;
         fVar3 = _LC23 - fVar3;
         fVar11 = fVar11 * fVar3;
         uVar17 = CONCAT44(fVar2 * fVar3, fVar16 * fVar3);
         fVar5 = 0.0;
         goto LAB_00100f2e;
      }

      if (fVar14 <= 0.0) {
         if ((float)( (uint)fVar10 ^ _LC26 ) < fVar3) {
            if (fVar10 < 0.0) {
               fVar3 = (float)( (uint)fVar10 ^ _LC26 ) / fVar3;
               uVar13 = CONCAT44(fVar1 * fVar3, fVar12 * fVar3);
               fVar15 = fVar15 * fVar3;
               fVar3 = _LC23 - fVar3;
               fVar11 = fVar11 * fVar3;
               uVar17 = CONCAT44(fVar2 * fVar3, fVar16 * fVar3);
               fVar5 = 0.0;
            }
 else {
               uVar13 = CONCAT44(fVar1 * 0.0, fVar12 * 0.0);
               fVar15 = fVar15 * 0.0;
               fVar5 = 0.0;
            }

         }
 else {
            uVar17 = CONCAT44(fVar2 * 0.0, fVar16 * 0.0);
            fVar11 = fVar11 * 0.0;
            fVar5 = 0.0;
         }

         goto LAB_00100f2e;
      }

      if (fVar8 <= fVar14) {
         if (fVar4 - fVar10 < fVar3) {
            if (fVar4 - fVar10 <= 0.0) goto LAB_00101020;
            goto LAB_00100e13;
         }

         goto LAB_00100eec;
      }

   }

   uVar13 = CONCAT44(fVar1 * 0.0, fVar12 * 0.0);
   fVar15 = fVar15 * 0.0;
   fVar5 = fVar14 / fVar8;
   fVar6 = _LC23 - fVar14 / fVar8;
   LAB_00100f2e:*(ulong*)param_5 = CONCAT44((float)( (ulong)uVar13 >> 0x20 ) + (float)( (ulong)uVar17 >> 0x20 ), (float)uVar13 + (float)uVar17);
   *(float*)( param_5 + 8 ) = fVar11 + fVar15;
   uVar13 = *(undefined8*)param_4;
   uVar17 = *(undefined8*)param_3;
   *(float*)( param_6 + 8 ) = *(float*)( param_3 + 8 ) * fVar6 + *(float*)( param_4 + 8 ) * fVar5;
   *(ulong*)param_6 = CONCAT44(fVar5 * (float)( (ulong)uVar13 >> 0x20 ) + (float)( (ulong)uVar17 >> 0x20 ) * fVar6, fVar5 * (float)uVar13 + (float)uVar17 * fVar6);
   return;
}
/* Geometry3D::get_closest_distance_between_segments(Vector3 const&, Vector3 const&, Vector3 const&,
   Vector3 const&) */float Geometry3D::get_closest_distance_between_segments(Vector3 *param_1, Vector3 *param_2, Vector3 *param_3, Vector3 *param_4) {
   long in_FS_OFFSET;
   float local_28;
   float local_24;
   float local_20;
   float local_1c;
   float local_18;
   float local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   get_closest_points_between_segments(param_1, param_2, param_3, param_4, (Vector3*)&local_28, (Vector3*)&local_1c);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return SQRT(( local_14 - local_20 ) * ( local_14 - local_20 ) + ( local_1c - local_28 ) * ( local_1c - local_28 ) + ( local_18 - local_24 ) * ( local_18 - local_24 ));
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Geometry3D::build_convex_mesh(Vector<Plane> const&) */Geometry3D * __thiscall Geometry3D::build_convex_mesh(Geometry3D *this,Vector *param_1){
   undefined8 *puVar1;
   float fVar2;
   float fVar3;
   ulong uVar4;
   undefined4 uVar5;
   float fVar6;
   int iVar7;
   undefined8 uVar8;
   code *pcVar9;
   int iVar10;
   uint uVar11;
   uint uVar12;
   float *pfVar13;
   long lVar14;
   float *pfVar15;
   float *pfVar16;
   void *pvVar17;
   void *pvVar18;
   ulong uVar19;
   int *piVar20;
   int *piVar21;
   void *pvVar22;
   long lVar23;
   ulong uVar24;
   ulong uVar25;
   uint uVar26;
   float *pfVar27;
   int iVar28;
   ulong uVar29;
   ulong uVar30;
   long lVar31;
   long in_FS_OFFSET;
   float fVar32;
   float fVar33;
   float extraout_XMM1_Da;
   float fVar34;
   float fVar35;
   float fVar36;
   float fVar37;
   undefined1 auVar38[16];
   float fVar39;
   float fVar40;
   float fVar41;
   float fVar42;
   float fVar43;
   float fVar44;
   long local_100;
   float *local_f8;
   void *local_f0;
   uint local_94;
   undefined8 local_78;
   float local_70[4];
   float local_60;
   float local_5c;
   float local_58;
   float local_54;
   float local_50;
   float local_4c;
   long local_40;
   lVar14 = *(long*)( param_1 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   for (int i = 0; i < 5; i++) {
      *(undefined8*)( this + ( 8*i + 8 ) ) = 0;
   }

   local_100 = 0;
   do {
      if (( lVar14 == 0 ) || ( *(long*)( lVar14 + -8 ) <= local_100 )) {
         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return this;
      }

      pfVar13 = (float*)( local_100 * 0x10 + lVar14 );
      fVar44 = *pfVar13;
      fVar2 = pfVar13[2];
      fVar43 = pfVar13[1];
      fVar3 = pfVar13[3];
      local_f0 = (void*)(ulong)(uint)fVar44;
      fVar42 = fVar44 * 0.0;
      fVar41 = fVar2 * 0.0;
      local_f8 = (float*)(ulong)(uint)fVar43;
      fVar36 = fVar43 + fVar42 + fVar41;
      if (fVar36 < 0.0) {
         fVar36 = (float)( (uint)fVar36 ^ _LC26 );
      }

      fVar37 = fVar43;
      fVar40 = fVar44;
      fVar32 = fVar41;
      if (fVar36 <= __LC27) {
         fVar37 = fVar43 * 0.0;
         fVar40 = fVar42;
         fVar32 = fVar2;
         fVar42 = fVar44;
      }

      fVar37 = fVar37 - fVar32;
      fVar41 = fVar41 - fVar40;
      fVar42 = fVar42 - fVar43 * 0.0;
      fVar36 = fVar37 * fVar37 + fVar41 * fVar41 + fVar42 * fVar42;
      if (fVar36 == 0.0) {
         auVar38 = (undefined1[16])0x0;
         fVar44 = 0.0;
         fVar41 = 0.0;
         local_70[0] = 0.0;
         fVar43 = 0.0;
         fVar42 = 0.0;
      }
 else {
         fVar36 = SQRT(fVar36);
         fVar42 = fVar42 / fVar36;
         fVar37 = fVar37 / fVar36;
         fVar41 = fVar41 / fVar36;
         fVar40 = fVar2 * fVar37 - fVar44 * fVar42;
         fVar36 = fVar43 * fVar42 - fVar2 * fVar41;
         fVar43 = fVar44 * fVar41 - fVar43 * fVar37;
         fVar44 = fVar36 * fVar36 + fVar40 * fVar40 + fVar43 * fVar43;
         fVar42 = fVar42 * _LC28;
         fVar41 = fVar41 * _LC28;
         auVar38 = ZEXT416(( uint )(fVar37 * _LC28));
         if (fVar44 == 0.0) goto LAB_0010217c;
         fVar44 = SQRT(fVar44);
         local_70[0] = ( fVar43 / fVar44 ) * _LC28;
         fVar43 = ( fVar40 / fVar44 ) * _LC28;
         fVar44 = ( fVar36 / fVar44 ) * _LC28;
      }

      LAB_00101412:local_60 = local_f0._0_4_ * fVar3 + fVar44;
      fVar44 = local_f0._0_4_ * fVar3 - fVar44;
      local_5c = local_f8._0_4_ * fVar3 + fVar43;
      fVar43 = local_f8._0_4_ * fVar3 - fVar43;
      local_58 = fVar2 * fVar3 + local_70[0];
      local_70[0] = fVar2 * fVar3 - local_70[0];
      fVar36 = auVar38._0_4_;
      local_70[1] = fVar44 - fVar36;
      local_70[2] = fVar43 - fVar41;
      local_78 = CONCAT44(fVar43 + fVar41, fVar44 + fVar36);
      local_70[3] = local_70[0] - fVar42;
      local_70[0] = local_70[0] + fVar42;
      local_54 = local_60 + fVar36;
      local_60 = local_60 - fVar36;
      local_50 = local_5c + fVar41;
      local_5c = local_5c - fVar41;
      local_4c = local_58 + fVar42;
      local_58 = local_58 - fVar42;
      pfVar13 = (float*)Memory::realloc_static((void*)0x0, 0x30, false);
      fVar44 = _LC31;
      if (pfVar13 == (float*)0x0) {
         _err_print_error("reserve", "./core/templates/local_vector.h", 0x92, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar9 = (code*)invalidInstructionException();
         ( *pcVar9 )();
      }

      lVar14 = 0;
      iVar28 = 0;
      do {
         uVar5 = *(undefined4*)( (long)local_70 + lVar14 );
         iVar28 = iVar28 + 1;
         *(undefined8*)( (long)pfVar13 + lVar14 ) = *(undefined8*)( (long)&local_78 + lVar14 );
         *(undefined4*)( (long)pfVar13 + lVar14 + 8 ) = uVar5;
         lVar14 = lVar14 + 0xc;
      }
 while ( iVar28 != 4 );
      lVar14 = *(long*)( param_1 + 8 );
      if (lVar14 == 0) {
         uVar29 = 4;
         LAB_00101b6f:uVar11 = *(uint*)( this + 0x20 );
         pvVar17 = (void*)0x0;
         pfVar15 = *(float**)( this + 0x28 );
         uVar26 = 0;
         uVar24 = 0;
         pfVar27 = pfVar13;
         fVar44 = _LC32;
         if (uVar11 == 0) goto LAB_00101c48;
         LAB_00101bb0:uVar12 = 0;
         pfVar16 = pfVar15;
         do {
            fVar43 = ( pfVar27[1] - pfVar16[1] ) * ( pfVar27[1] - pfVar16[1] );
            auVar38 = ZEXT416((uint)fVar43);
            if (SQRT(( *pfVar27 - *pfVar16 ) * ( *pfVar27 - *pfVar16 ) + fVar43 + ( pfVar27[2] - pfVar16[2] ) * ( pfVar27[2] - pfVar16[2] )) < fVar44) {
               uVar19 = uVar24;
               uVar11 = uVar12;
               if ((uint)uVar24 == uVar26) goto LAB_00101c94;
               goto LAB_00101c18;
            }

            uVar12 = uVar12 + 1;
            pfVar16 = pfVar16 + 3;
         }
 while ( uVar12 != uVar11 );
         LAB_00101c48:local_78 = *(undefined8*)pfVar27;
         local_70[0] = pfVar27[2];
         uVar12 = uVar11;
         if (*(uint*)( this + 0x24 ) == uVar11) {
            uVar19 = ( ulong )(uVar11 * 2);
            if (uVar11 * 2 == 0) {
               uVar19 = 1;
            }

            *(int*)( this + 0x24 ) = (int)uVar19;
            pfVar15 = (float*)Memory::realloc_static(pfVar15, uVar19 * 0xc, false);
            *(float**)( this + 0x28 ) = pfVar15;
            if (pfVar15 == (float*)0x0) goto LAB_0010196c;
            uVar12 = *(uint*)( this + 0x20 );
            fVar44 = _LC32;
         }

         *(uint*)( this + 0x20 ) = uVar12 + 1;
         *(undefined8*)( pfVar15 + (ulong)uVar12 * 3 ) = local_78;
         ( pfVar15 + (ulong)uVar12 * 3 )[2] = local_70[0];
         uVar19 = uVar24;
         if ((uint)uVar24 == uVar26) {
            LAB_00101c94:uVar26 = (int)uVar19 * 2;
            if (uVar26 == 0) {
               uVar26 = 1;
            }

            pvVar17 = (void*)Memory::realloc_static(pvVar17, (ulong)uVar26 << 2, false);
            fVar44 = _LC32;
            if (pvVar17 == (void*)0x0) goto LAB_0010196c;
         }

         LAB_00101c18:uVar12 = (uint)uVar19;
         pfVar27 = pfVar27 + 3;
         fVar43 = (float)( uVar12 + 1 );
         uVar24 = (ulong)(uint)fVar43;
         *(uint*)( (long)pvVar17 + uVar19 * 4 ) = uVar11;
         if (pfVar13 + uVar29 * 3 != pfVar27) break;
         if (fVar43 == 0.0) {
            pvVar18 = (void*)0x0;
         }
 else {
            uVar26 = 0;
            uVar11 = ( uint )(uVar19 >> 1) | uVar12;
            uVar11 = uVar11 >> 2 | uVar11;
            uVar11 = uVar11 >> 4 | uVar11;
            uVar11 = uVar11 | uVar11 >> 8;
            pvVar18 = (void*)Memory::realloc_static((void*)0x0, ( ulong )(( uVar11 | uVar11 >> 0x10 ) + 1) << 2, false);
            pfVar15 = local_f8;
            pvVar22 = local_f0;
            if (pvVar18 == (void*)0x0) goto LAB_00102177;
            lVar14 = 0;
            do {
               *(undefined4*)( (long)pvVar18 + lVar14 ) = *(undefined4*)( (long)pvVar17 + lVar14 );
               lVar14 = lVar14 + 4;
            }
 while ( lVar14 != uVar24 << 2 );
         }

         uVar11 = *(uint*)this;
         pvVar22 = *(void**)( this + 8 );
         if (uVar11 == *(uint*)( this + 4 )) {
            uVar29 = ( ulong )(uVar11 * 2);
            if (uVar11 * 2 == 0) {
               uVar29 = 1;
            }

            *(int*)( this + 4 ) = (int)uVar29;
            pvVar22 = (void*)Memory::realloc_static(pvVar22, uVar29 << 5, false);
            *(void**)( this + 8 ) = pvVar22;
            if (pvVar22 == (void*)0x0) goto LAB_0010196c;
            uVar11 = *(uint*)this;
         }

         *(uint*)this = uVar11 + 1;
         pfVar15 = (float*)( (ulong)uVar11 * 0x20 + (long)pvVar22 );
         *pfVar15 = local_f0._0_4_;
         pfVar15[4] = 0.0;
         pfVar15[5] = 0.0;
         pfVar15[1] = local_f8._0_4_;
         pfVar15[6] = 0.0;
         pfVar15[7] = 0.0;
         pfVar15[2] = fVar2;
         pfVar15[3] = fVar3;
         if (fVar43 == 0.0) {
            if (pvVar18 != (void*)0x0) {
               Memory::free_static(pvVar18, false);
            }

            if (pvVar17 != (void*)0x0) goto LAB_00101fea;
            goto LAB_00102014;
         }

         uVar26 = 0;
         uVar12 = ( uint )(uVar19 >> 1) | uVar12;
         uVar12 = uVar12 | uVar12 >> 2;
         uVar12 = uVar12 | uVar12 >> 4;
         uVar12 = uVar12 >> 8 | uVar12;
         fVar44 = (float)( ( uVar12 >> 0x10 | uVar12 ) + 1 );
         pfVar15[5] = fVar44;
         lVar14 = Memory::realloc_static((void*)0x0, (ulong)(uint)fVar44 * 4, false);
         *(long*)( pfVar15 + 6 ) = lVar14;
         pvVar22 = pvVar17;
         if (lVar14 != 0) {
            pfVar15[4] = fVar43;
            lVar31 = 0;
            do {
               *(undefined4*)( lVar14 + lVar31 ) = *(undefined4*)( (long)pvVar18 + lVar31 );
               lVar31 = lVar31 + 4;
            }
 while ( lVar31 != uVar24 * 4 );
            Memory::free_static(pvVar18, false);
            uVar29 = 0;
            do {
               iVar10 = (int)uVar29;
               uVar11 = *(uint*)( this + 0x10 );
               uVar19 = (ulong)uVar11;
               iVar28 = *(int*)( (long)pvVar17 + uVar29 * 4 );
               piVar21 = *(int**)( this + 0x18 );
               iVar7 = *(int*)( (long)pvVar17 + ( ( ulong )(iVar10 + 1) % uVar24 ) * 4 );
               if (uVar11 == 0) {
                  LAB_00102060:if (*(uint*)( this + 0x14 ) == uVar11) {
                     uVar19 = ( ulong )(uVar11 * 2);
                     if (uVar11 * 2 == 0) {
                        uVar19 = 1;
                     }

                     *(int*)( this + 0x14 ) = (int)uVar19;
                     piVar21 = (int*)Memory::realloc_static(piVar21, uVar19 << 4, false);
                     *(int**)( this + 0x18 ) = piVar21;
                     if (piVar21 == (int*)0x0) {
                        LAB_0010196c:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar9 = (code*)invalidInstructionException();
                        ( *pcVar9 )();
                     }

                     uVar19 = ( ulong ) * (uint*)( this + 0x10 );
                  }

                  piVar21 = piVar21 + uVar19 * 4;
                  *(int*)( this + 0x10 ) = (int)uVar19 + 1;
                  piVar21[2] = iVar10;
                  piVar21[3] = -1;
                  *(ulong*)piVar21 = CONCAT44(iVar7, iVar28);
               }
 else {
                  uVar25 = 0;
                  piVar20 = piVar21;
                  while (true) {
                     if (( ( *piVar20 == iVar28 ) && ( iVar7 == piVar20[1] ) ) || ( ( *piVar20 == iVar7 && ( iVar28 == piVar20[1] ) ) )) break;
                     uVar26 = (uint)uVar25 + 1;
                     uVar25 = (ulong)uVar26;
                     piVar20 = piVar20 + 4;
                     if (uVar26 == uVar11) goto LAB_00102060;
                  }
;
                  if (uVar11 <= (uint)uVar25) {
                     _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar25, uVar19, "p_index", "count", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar9 = (code*)invalidInstructionException();
                     ( *pcVar9 )();
                  }

                  piVar21[uVar25 * 4 + 3] = iVar10;
               }

               uVar29 = uVar29 + 1;
            }
 while ( uVar29 != uVar24 );
            LAB_00101fea:Memory::free_static(pvVar17, false);
            LAB_00102014:if (pfVar13 != (float*)0x0) goto LAB_00101864;
            goto LAB_0010186e;
         }

         LAB_00102177:local_f0 = pvVar22;
         local_f8 = pfVar15;
         fVar42 = (float)LocalVector<int,unsigned_int,false,false>::resize(uVar26);
         fVar41 = extraout_XMM1_Da;
         LAB_0010217c:fVar44 = 0.0;
         local_70[0] = 0.0;
         fVar43 = 0.0;
         goto LAB_00101412;
      }

      lVar31 = 0;
      local_94 = 4;
      uVar24 = 4;
      do {
         while (true) {
            uVar29 = uVar24;
            if (*(long*)( lVar14 + -8 ) <= lVar31) goto LAB_00101850;
            if ((int)local_100 != (int)lVar31) break;
            LAB_001015a8:lVar31 = lVar31 + 1;
            uVar29 = uVar24;
            if (lVar14 == 0) goto LAB_00101850;
         }
;
         pfVar15 = (float*)( lVar31 * 0x10 + lVar14 );
         fVar43 = *pfVar15;
         fVar42 = pfVar15[1];
         fVar41 = pfVar15[2];
         fVar36 = pfVar15[3];
         if (__LC27 < local_f0._0_4_ * fVar43 + local_f8._0_4_ * fVar42 + fVar2 * fVar41) goto LAB_001015a8;
         uVar11 = (uint)uVar24;
         if (uVar11 < 3) goto joined_r0x00101dba;
         pvVar17 = (void*)0x0;
         uVar19 = 0;
         uVar29 = 0;
         uVar25 = 0;
         pfVar15 = pfVar13;
         do {
            while (true) {
               uVar26 = (int)uVar25 + 1;
               uVar25 = (ulong)uVar26;
               fVar37 = pfVar15[2];
               fVar39 = (float)*(undefined8*)pfVar15;
               fVar34 = (float)( ( ulong ) * (undefined8*)pfVar15 >> 0x20 );
               uVar4 = *(ulong*)( pfVar13 + ( uVar25 % uVar24 ) * 3 );
               auVar38._8_8_ = 0;
               auVar38._0_8_ = uVar4;
               fVar40 = ( pfVar13 + ( uVar25 % uVar24 ) * 3 )[2];
               fVar32 = ( fVar39 * fVar43 + fVar34 * fVar42 + fVar41 * fVar37 ) - fVar36;
               fVar35 = (float)( uVar4 >> 0x20 );
               fVar33 = ( (float)uVar4 * fVar43 + fVar35 * fVar42 + fVar41 * fVar40 ) - fVar36;
               if (fVar32 <= 0.0) break;
               uVar30 = uVar29;
               if (fVar33 * fVar32 < 0.0) goto LAB_0010173c;
               LAB_00101656:pfVar15 = pfVar15 + 3;
               if (uVar26 == uVar11) goto LAB_001017d4;
            }
;
            uVar8 = *(undefined8*)pfVar15;
            fVar6 = pfVar15[2];
            iVar28 = (int)uVar29;
            if (iVar28 == (int)uVar19) {
               uVar12 = iVar28 * 2;
               if (iVar28 * 2 == 0) {
                  uVar12 = 1;
               }

               uVar19 = (ulong)uVar12;
               pvVar17 = (void*)Memory::realloc_static(pvVar17, uVar19 * 0xc, false);
               fVar44 = _LC31;
               if (pvVar17 == (void*)0x0) goto LAB_0010196c;
            }

            auVar38._8_8_ = 0;
            puVar1 = (undefined8*)( (long)pvVar17 + uVar29 * 0xc );
            *puVar1 = uVar8;
            *(float*)( puVar1 + 1 ) = fVar6;
            uVar30 = ( ulong )(iVar28 + 1);
            uVar29 = ( ulong )(iVar28 + 1);
            if (0.0 <= fVar33 * fVar32) goto LAB_00101656;
            LAB_0010173c:auVar38._0_4_ = (float)uVar4 - fVar39;
            auVar38._4_4_ = fVar35 - fVar34;
            auVar38._8_8_ = 0;
            fVar40 = fVar40 - fVar37;
            fVar33 = auVar38._0_4_ * fVar43 + auVar38._4_4_ * fVar42 + fVar40 * fVar41;
            uVar29 = uVar30;
            if (ABS(fVar33) < fVar44) goto LAB_00101656;
            fVar33 = (float)( (uint)fVar32 ^ _LC26 ) / fVar33;
            fVar32 = fVar33 * auVar38._0_4_;
            fVar35 = fVar33 * auVar38._4_4_;
            if ((int)uVar19 == (int)uVar30) {
               uVar12 = (int)uVar19 * 2;
               if (uVar12 == 0) {
                  uVar12 = 1;
               }

               uVar19 = (ulong)uVar12;
               pvVar17 = (void*)Memory::realloc_static(pvVar17, uVar19 * 0xc, false);
               fVar44 = _LC31;
               if (pvVar17 == (void*)0x0) goto LAB_0010196c;
            }

            pfVar15 = pfVar15 + 3;
            uVar29 = ( ulong )((int)uVar30 + 1);
            puVar1 = (undefined8*)( (long)pvVar17 + uVar30 * 0xc );
            *puVar1 = CONCAT44(fVar35 + fVar34, fVar32 + fVar39);
            *(float*)( puVar1 + 1 ) = fVar33 * fVar40 + fVar37;
         }
 while ( uVar26 != uVar11 );
         LAB_001017d4:uVar12 = (uint)uVar29;
         if (uVar12 < uVar11) {
            uVar24 = uVar29;
            if (uVar12 != 0) goto LAB_001017f4;
            if (pvVar17 == (void*)0x0) {
               lVar14 = *(long*)( param_1 + 8 );
               goto LAB_001015a8;
            }

         }
 else {
            if (uVar26 < uVar12) {
               if (local_94 < uVar12) {
                  uVar26 = uVar12 - 1 | uVar12 - 1 >> 1;
                  uVar26 = uVar26 | uVar26 >> 2;
                  uVar26 = uVar26 >> 4 | uVar26;
                  uVar26 = uVar26 >> 8 | uVar26;
                  local_94 = ( uVar26 | uVar26 >> 0x10 ) + 1;
                  pfVar13 = (float*)Memory::realloc_static(pfVar13, (ulong)local_94 * 0xc, false);
                  if (pfVar13 == (float*)0x0) {
                     _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar9 = (code*)invalidInstructionException();
                     ( *pcVar9 )();
                  }

               }

               memset(pfVar13 + uVar24 * 3, 0, ( ( ulong )(( uVar12 - uVar11 ) - 1) * 3 + 3 ) * 4);
               uVar24 = uVar29;
            }

            LAB_001017f4:lVar14 = 0;
            lVar23 = uVar29 * 0xc;
            do {
               *(undefined8*)( (long)pfVar13 + lVar14 ) = *(undefined8*)( (long)pvVar17 + lVar14 );
               *(undefined4*)( (long)pfVar13 + lVar14 + 8 ) = *(undefined4*)( (long)pvVar17 + lVar14 + 8 );
               lVar14 = lVar14 + 0xc;
               uVar29 = uVar24;
            }
 while ( lVar14 != lVar23 );
         }

         lVar31 = lVar31 + 1;
         Memory::free_static(pvVar17, false);
         lVar14 = *(long*)( param_1 + 8 );
         uVar24 = uVar29;
         fVar44 = _LC31;
      }
 while ( lVar14 != 0 );
      LAB_00101850:if (2 < (uint)uVar29) goto LAB_00101b6f;
      joined_r0x00101dba:if (pfVar13 != (float*)0x0) {
         LAB_00101864:Memory::free_static(pfVar13, false);
         LAB_0010186e:lVar14 = *(long*)( param_1 + 8 );
      }

      local_100 = local_100 + 1;
   }
 while ( true );
   uVar11 = *(uint*)( this + 0x20 );
   pfVar15 = *(float**)( this + 0x28 );
   if (uVar11 != 0) goto LAB_00101bb0;
   goto LAB_00101c48;
}
/* Geometry3D::MeshData::optimize_vertices() */void Geometry3D::MeshData::optimize_vertices(MeshData *this) {
   int *piVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
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
   code *pcVar34;
   undefined8 uVar35;
   undefined8 uVar36;
   uint uVar37;
   uint *puVar38;
   uint *puVar39;
   uint *puVar40;
   void *__s;
   uint *puVar41;
   ulong uVar42;
   int iVar43;
   ulong uVar44;
   long lVar45;
   long lVar46;
   uint uVar47;
   long lVar48;
   ulong uVar49;
   int *piVar50;
   uint uVar51;
   undefined8 *puVar52;
   uint uVar53;
   long in_FS_OFFSET;
   uint *local_a8;
   uint local_90;
   uint local_80;
   uint local_7c;
   HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>> local_78[8];
   undefined1 local_70[16];
   undefined1 local_60[16];
   undefined8 local_50;
   long local_40;
   lVar48 = *(long*)( this + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = (undefined1[16])0x0;
   local_50 = 2;
   local_60 = (undefined1[16])0x0;
   lVar46 = lVar48 + ( ulong ) * (uint*)this * 0x20;
   if (lVar46 != lVar48) {
      local_90 = 0;
      do {
         puVar40 = *(uint**)( lVar48 + 0x18 );
         puVar41 = puVar40 + *(uint*)( lVar48 + 0x10 );
         if (puVar41 != puVar40) {
            uVar51 = *puVar40;
            if (local_70._0_8_ == 0) goto LAB_00102370;
            do {
               if (local_90 == 0) goto LAB_00102370;
               uVar42 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ));
               uVar49 = *(ulong*)( hash_table_size_primes_inv + ( local_50 & 0xffffffff ) * 8 );
               uVar37 = ( uVar51 >> 0x10 ^ uVar51 ) * -0x7a143595;
               uVar37 = ( uVar37 ^ uVar37 >> 0xd ) * -0x3d4d51cb;
               uVar47 = uVar37 ^ uVar37 >> 0x10;
               if (uVar37 == uVar37 >> 0x10) {
                  uVar47 = 1;
                  uVar44 = uVar49;
               }
 else {
                  uVar44 = uVar47 * uVar49;
               }

               auVar2._8_8_ = 0;
               auVar2._0_8_ = uVar42;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = uVar44;
               lVar45 = SUB168(auVar2 * auVar18, 8);
               uVar37 = *(uint*)( local_70._8_8_ + lVar45 * 4 );
               iVar43 = SUB164(auVar2 * auVar18, 8);
               if (uVar37 == 0) goto LAB_00102370;
               uVar53 = 0;
               while (( uVar47 != uVar37 || ( puVar39 = puVar40 ),uVar51 != *(uint*)( *(long*)( local_70._0_8_ + lVar45 * 8 ) + 0x10 ) )) {
                  uVar53 = uVar53 + 1;
                  auVar3._8_8_ = 0;
                  auVar3._0_8_ = ( iVar43 + 1 ) * uVar49;
                  auVar19._8_8_ = 0;
                  auVar19._0_8_ = uVar42;
                  lVar45 = SUB168(auVar3 * auVar19, 8);
                  uVar37 = *(uint*)( local_70._8_8_ + lVar45 * 4 );
                  iVar43 = SUB164(auVar3 * auVar19, 8);
                  if (uVar37 == 0) goto LAB_00102370;
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = uVar37 * uVar49;
                  auVar20._8_8_ = 0;
                  auVar20._0_8_ = uVar42;
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ) + iVar43 ) - SUB164(auVar4 * auVar20, 8) ) * uVar49;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = uVar42;
                  if (SUB164(auVar5 * auVar21, 8) < uVar53) goto LAB_00102370;
               }
;
               while (true) {
                  puVar40 = puVar39 + 1;
                  puVar38 = (uint*)HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>::operator [](local_78, (int*)puVar39);
                  *puVar39 = *puVar38;
                  if (puVar41 == puVar40) {
                     local_90 = local_50._4_4_;
                     goto LAB_00102398;
                  }

                  local_90 = local_50._4_4_;
                  uVar51 = *puVar40;
                  if (local_70._0_8_ != 0) break;
                  LAB_00102370:puVar39 = (uint*)HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>::operator [](local_78, (int*)puVar40);
                  *puVar39 = local_90;
                  puVar39 = puVar40;
               }
;
            }
 while ( true );
         }

         LAB_00102398:lVar48 = lVar48 + 0x20;
      }
 while ( lVar46 != lVar48 );
      puVar41 = *(uint**)( this + 0x18 );
      local_a8 = puVar41 + ( ulong ) * (uint*)( this + 0x10 ) * 4;
      if (local_a8 != puVar41) goto LAB_001023c9;
      LAB_0010261f:if (local_90 == 0) goto LAB_00102998;
      uVar51 = local_90 - 1;
      uVar37 = uVar51 >> 1 | uVar51;
      uVar37 = uVar37 >> 2 | uVar37;
      uVar37 = uVar37 >> 4 | uVar37;
      uVar37 = uVar37 | uVar37 >> 8;
      __s = (void*)Memory::realloc_static((void*)0x0, ( ulong )(( uVar37 | uVar37 >> 0x10 ) + 1) * 0xc, false);
      if (__s == (void*)0x0) goto LAB_00102b36;
      uVar49 = (ulong)local_90;
      memset(__s, 0, uVar49 * 0xc);
      if (*(int*)( this + 0x20 ) != 0) goto LAB_0010269a;
      if (*(uint*)( this + 0x24 ) < local_90) goto LAB_00102ad9;
      uVar42 = 0;
      goto LAB_00102a3b;
   }

   local_90 = 0;
   puVar41 = *(uint**)( this + 0x18 );
   local_a8 = puVar41 + ( ulong ) * (uint*)( this + 0x10 ) * 4;
   if (local_a8 != puVar41) {
      LAB_001023c9:do {
         uVar51 = puVar41[1];
         local_80 = *puVar41;
         local_7c = uVar51;
         if (( local_70._0_8_ != 0 ) && ( local_90 != 0 )) {
            uVar42 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ));
            uVar49 = *(ulong*)( hash_table_size_primes_inv + ( local_50 & 0xffffffff ) * 8 );
            uVar37 = ( local_80 >> 0x10 ^ local_80 ) * -0x7a143595;
            uVar37 = ( uVar37 ^ uVar37 >> 0xd ) * -0x3d4d51cb;
            uVar47 = uVar37 ^ uVar37 >> 0x10;
            if (uVar37 == uVar37 >> 0x10) {
               uVar47 = 1;
               uVar44 = uVar49;
            }
 else {
               uVar44 = uVar47 * uVar49;
            }

            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar42;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar44;
            lVar46 = SUB168(auVar6 * auVar22, 8);
            uVar37 = *(uint*)( local_70._8_8_ + lVar46 * 4 );
            iVar43 = SUB164(auVar6 * auVar22, 8);
            if (uVar37 != 0) {
               uVar53 = 0;
               do {
                  if (( uVar47 == uVar37 ) && ( local_80 == *(uint*)( *(long*)( local_70._0_8_ + lVar46 * 8 ) + 0x10 ) )) goto LAB_0010250c;
                  uVar53 = uVar53 + 1;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = ( iVar43 + 1 ) * uVar49;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar42;
                  lVar46 = SUB168(auVar7 * auVar23, 8);
                  uVar37 = *(uint*)( local_70._8_8_ + lVar46 * 4 );
                  iVar43 = SUB164(auVar7 * auVar23, 8);
               }
 while ( ( uVar37 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = uVar37 * uVar49,auVar24._8_8_ = 0,auVar24._0_8_ = uVar42,auVar9._8_8_ = 0,auVar9._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ) + iVar43 ) - SUB164(auVar8 * auVar24, 8) ) * uVar49,auVar25._8_8_ = 0,auVar25._0_8_ = uVar42,uVar53 <= SUB164(auVar9 * auVar25, 8) );
            }

         }

         puVar40 = (uint*)HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>::operator [](local_78, (int*)&local_80);
         *puVar40 = local_90;
         local_90 = local_50._4_4_;
         if (( local_70._0_8_ != 0 ) && ( local_50._4_4_ != 0 )) {
            LAB_0010250c:uVar49 = *(ulong*)( hash_table_size_primes_inv + (ulong)(uint)local_50 * 8 );
            uVar37 = ( uVar51 >> 0x10 ^ uVar51 ) * -0x7a143595;
            uVar37 = ( uVar37 ^ uVar37 >> 0xd ) * -0x3d4d51cb;
            uVar47 = uVar37 ^ uVar37 >> 0x10;
            if (uVar37 == uVar37 >> 0x10) {
               uVar47 = 1;
               uVar42 = uVar49;
            }
 else {
               uVar42 = uVar47 * uVar49;
            }

            uVar44 = CONCAT44(0, *(uint*)( hash_table_size_primes + (ulong)(uint)local_50 * 4 ));
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar44;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar42;
            lVar46 = SUB168(auVar10 * auVar26, 8);
            uVar37 = *(uint*)( local_70._8_8_ + lVar46 * 4 );
            iVar43 = SUB164(auVar10 * auVar26, 8);
            if (uVar37 != 0) {
               uVar53 = 0;
               do {
                  if (( uVar47 == uVar37 ) && ( uVar51 == *(uint*)( *(long*)( local_70._0_8_ + lVar46 * 8 ) + 0x10 ) )) goto LAB_001025d8;
                  uVar53 = uVar53 + 1;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = ( iVar43 + 1 ) * uVar49;
                  auVar27._8_8_ = 0;
                  auVar27._0_8_ = uVar44;
                  lVar46 = SUB168(auVar11 * auVar27, 8);
                  uVar37 = *(uint*)( local_70._8_8_ + lVar46 * 4 );
                  iVar43 = SUB164(auVar11 * auVar27, 8);
               }
 while ( ( uVar37 != 0 ) && ( auVar12._8_8_ = 0 ),auVar12._0_8_ = uVar37 * uVar49,auVar28._8_8_ = 0,auVar28._0_8_ = uVar44,auVar13._8_8_ = 0,auVar13._0_8_ = ( ( *(uint*)( hash_table_size_primes + (ulong)(uint)local_50 * 4 ) + iVar43 ) - SUB164(auVar12 * auVar28, 8) ) * uVar49,auVar29._8_8_ = 0,auVar29._0_8_ = uVar44,uVar53 <= SUB164(auVar13 * auVar29, 8) );
            }

         }

         puVar40 = (uint*)HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>::operator [](local_78, (int*)&local_7c);
         *puVar40 = local_90;
         LAB_001025d8:puVar39 = puVar41 + 4;
         puVar40 = (uint*)HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>::operator [](local_78, (int*)&local_80);
         *puVar41 = *puVar40;
         puVar40 = (uint*)HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>::operator [](local_78, (int*)&local_7c);
         puVar41[1] = *puVar40;
         local_90 = local_50._4_4_;
         puVar41 = puVar39;
      }
 while ( local_a8 != puVar39 );
      goto LAB_0010261f;
   }

   LAB_00102998:if (*(int*)( this + 0x20 ) == 0) goto LAB_0010285c;
   local_90 = 0;
   __s = (void*)0x0;
   LAB_0010269a:lVar46 = 0;
   uVar51 = 0;
   do {
      if (( local_70._0_8_ != 0 ) && ( local_50._4_4_ != 0 )) {
         uVar49 = *(ulong*)( hash_table_size_primes_inv + ( local_50 & 0xffffffff ) * 8 );
         uVar37 = ( uVar51 >> 0x10 ^ uVar51 ) * -0x7a143595;
         uVar37 = ( uVar37 ^ uVar37 >> 0xd ) * -0x3d4d51cb;
         uVar47 = uVar37 ^ uVar37 >> 0x10;
         if (uVar37 == uVar37 >> 0x10) {
            uVar47 = 1;
            uVar42 = uVar49;
         }
 else {
            uVar42 = uVar47 * uVar49;
         }

         uVar44 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ));
         auVar14._8_8_ = 0;
         auVar14._0_8_ = uVar44;
         auVar30._8_8_ = 0;
         auVar30._0_8_ = uVar42;
         lVar48 = SUB168(auVar14 * auVar30, 8);
         uVar37 = *(uint*)( local_70._8_8_ + lVar48 * 4 );
         iVar43 = SUB164(auVar14 * auVar30, 8);
         if (uVar37 != 0) {
            uVar53 = 0;
            while (( uVar37 != uVar47 || ( uVar51 != *(uint*)( *(long*)( local_70._0_8_ + lVar48 * 8 ) + 0x10 ) ) )) {
               uVar53 = uVar53 + 1;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = ( iVar43 + 1 ) * uVar49;
               auVar31._8_8_ = 0;
               auVar31._0_8_ = uVar44;
               lVar48 = SUB168(auVar15 * auVar31, 8);
               uVar37 = *(uint*)( local_70._8_8_ + lVar48 * 4 );
               iVar43 = SUB164(auVar15 * auVar31, 8);
               if (( uVar37 == 0 ) || ( auVar16._8_8_ = 0 ),auVar16._0_8_ = uVar37 * uVar49,auVar32._8_8_ = 0,auVar32._0_8_ = uVar44,auVar17._8_8_ = 0,auVar17._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ) + iVar43 ) - SUB164(auVar16 * auVar32, 8) ) * uVar49,auVar33._8_8_ = 0,auVar33._0_8_ = uVar44,SUB164(auVar17 * auVar33, 8) < uVar53) goto LAB_001027e5;
            }
;
            lVar48 = *(long*)( this + 0x28 );
            local_7c = uVar51;
            puVar41 = (uint*)HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>::operator [](local_78, (int*)&local_7c);
            uVar37 = *puVar41;
            if (local_90 <= uVar37) {
               _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)uVar37, (ulong)local_90, "p_index", "count", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar34 = (code*)invalidInstructionException();
               ( *pcVar34 )();
            }

            puVar52 = (undefined8*)( (long)__s + (ulong)uVar37 * 0xc );
            *puVar52 = *(undefined8*)( lVar48 + lVar46 );
            *(undefined4*)( puVar52 + 1 ) = *(undefined4*)( (undefined8*)( lVar48 + lVar46 ) + 1 );
         }

      }

      LAB_001027e5:uVar51 = uVar51 + 1;
      lVar46 = lVar46 + 0xc;
      uVar37 = *(uint*)( this + 0x20 );
      uVar42 = (ulong)uVar37;
   }
 while ( uVar51 < uVar37 );
   if (local_90 < uVar37) {
      *(uint*)( this + 0x20 ) = local_90;
      LAB_00102815:uVar49 = (ulong)local_90;
      if (local_90 != 0) goto LAB_00102821;
      if (__s == (void*)0x0) goto LAB_0010285c;
   }
 else {
      if (local_90 <= uVar37) goto LAB_00102815;
      uVar49 = (ulong)local_90;
      if (*(uint*)( this + 0x24 ) < local_90) {
         uVar51 = local_90 - 1;
         LAB_00102ad9:uVar51 = uVar51 >> 1 | uVar51;
         uVar51 = uVar51 >> 2 | uVar51;
         uVar51 = uVar51 | uVar51 >> 4;
         uVar51 = uVar51 >> 8 | uVar51;
         uVar51 = ( uVar51 >> 0x10 | uVar51 ) + 1;
         *(uint*)( this + 0x24 ) = uVar51;
         lVar46 = Memory::realloc_static(*(void**)( this + 0x28 ), (ulong)uVar51 * 0xc, false);
         *(long*)( this + 0x28 ) = lVar46;
         if (lVar46 == 0) {
            LAB_00102b36:_err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar34 = (code*)invalidInstructionException();
            ( *pcVar34 )();
         }

         uVar42 = ( ulong ) * (uint*)( this + 0x20 );
         uVar49 = (ulong)local_90;
         if (*(uint*)( this + 0x20 ) < local_90) goto LAB_00102a3b;
      }
 else {
         LAB_00102a3b:memset((void*)( *(long*)( this + 0x28 ) + uVar42 * 0xc ), 0, ( ( ulong )(( local_90 - (int)uVar42 ) - 1) * 3 + 3 ) * 4);
      }

      *(uint*)( this + 0x20 ) = local_90;
      LAB_00102821:lVar46 = *(long*)( this + 0x28 );
      lVar48 = 0;
      do {
         *(undefined8*)( lVar46 + lVar48 ) = *(undefined8*)( (long)__s + lVar48 );
         *(undefined4*)( lVar46 + 8 + lVar48 ) = *(undefined4*)( (long)__s + lVar48 + 8 );
         lVar48 = lVar48 + 0xc;
      }
 while ( lVar48 != uVar49 * 0xc );
   }

   Memory::free_static(__s, false);
   LAB_0010285c:uVar35 = local_70._0_8_;
   if ((undefined8*)local_70._0_8_ == (undefined8*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      uVar36 = local_70._8_8_;
      if (( local_50._4_4_ != 0 ) && ( *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ) != 0 )) {
         piVar1 = (int*)( local_70._8_8_ + ( ulong ) * (uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ) * 4 );
         piVar50 = (int*)local_70._8_8_;
         puVar52 = (undefined8*)local_70._0_8_;
         do {
            if (*piVar50 != 0) {
               *piVar50 = 0;
               Memory::free_static((void*)*puVar52, false);
               *puVar52 = 0;
            }

            piVar50 = piVar50 + 1;
            puVar52 = puVar52 + 1;
         }
 while ( piVar50 != piVar1 );
      }

      Memory::free_static((void*)uVar35, false);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static((void*)uVar36, false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Geometry3D::compute_convex_mesh_points(Plane const*, int) */Geometry3D * __thiscall
Geometry3D::compute_convex_mesh_points(Geometry3D *this,Plane *param_1,int param_2){
   long lVar1;
   Plane *pPVar2;
   char cVar3;
   int iVar4;
   undefined8 *puVar5;
   int iVar6;
   long lVar7;
   Plane *pPVar8;
   Plane *pPVar9;
   int iVar10;
   long lVar11;
   int iVar12;
   int iVar13;
   Plane *pPVar14;
   long in_FS_OFFSET;
   bool bVar15;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 8 ) = 0;
   iVar12 = param_2 + -1;
   if (( -1 < iVar12 ) && ( iVar13 = param_2 != 1 )) {
      pPVar2 = param_1 + (long)iVar12 * 0x10;
      for (; iVar13 != 0; iVar13 = iVar13 + -1) {
         pPVar8 = pPVar2 + -0x10;
         iVar6 = iVar13;
         do {
            pPVar14 = pPVar8 + -0x10;
            iVar10 = iVar6 + -1;
            LAB_00102c60:do {
               cVar3 = Plane::intersect_3(pPVar2, pPVar8, (Vector3*)pPVar14);
               if (cVar3 != '\0') {
                  iVar4 = 0;
                  pPVar9 = param_1;
                  do {
                     if (( ( iVar12 != iVar4 && iVar6 != iVar4 ) && ( iVar10 != iVar4 ) ) && ( _LC31 < ( *(float*)pPVar9 * 0.0 + *(float*)( pPVar9 + 4 ) * 0.0 + *(float*)( pPVar9 + 8 ) * 0.0 ) - *(float*)( pPVar9 + 0xc ) )) goto LAB_00102c50;
                     iVar4 = iVar4 + 1;
                     pPVar9 = pPVar9 + 0x10;
                  }
 while ( param_2 != iVar4 );
                  if (*(long*)( this + 8 ) == 0) {
                     lVar11 = 1;
                  }
 else {
                     lVar11 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
                  }

                  iVar4 = CowData<Vector3>::resize<false>((CowData<Vector3>*)( this + 8 ), lVar11);
                  if (iVar4 == 0) {
                     if (*(long*)( this + 8 ) == 0) {
                        lVar7 = -1;
                        lVar11 = 0;
                     }
 else {
                        lVar11 = *(long*)( *(long*)( this + 8 ) + -8 );
                        lVar7 = lVar11 + -1;
                        if (-1 < lVar7) {
                           iVar10 = iVar10 + -1;
                           pPVar14 = (Plane*)( (Vector3*)pPVar14 + -0x10 );
                           CowData<Vector3>::_copy_on_write((CowData<Vector3>*)( this + 8 ));
                           puVar5 = (undefined8*)( lVar7 * 0xc + *(long*)( this + 8 ) );
                           *puVar5 = 0;
                           *(undefined4*)( puVar5 + 1 ) = 0;
                           if (iVar10 == -1) break;
                           goto LAB_00102c60;
                        }

                     }

                     _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar7, lVar11, "p_index", "size()", "", false, false);
                  }
 else {
                     _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
                  }

               }

               LAB_00102c50:iVar10 = iVar10 + -1;
               pPVar14 = (Plane*)( (Vector3*)pPVar14 + -0x10 );
            }
 while ( iVar10 != -1 );
            bVar15 = iVar6 != 1;
            pPVar8 = pPVar8 + -0x10;
            iVar6 = iVar6 + -1;
         }
 while ( bVar15 );
         iVar12 = iVar12 + -1;
         pPVar2 = pPVar2 + -0x10;
      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Geometry3D::build_box_planes(Vector3 const&) */Geometry3D * __thiscall Geometry3D::build_box_planes(Geometry3D *this,Vector3 *param_1){
   long *plVar1;
   undefined4 uVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   long local_88[9];
   undefined4 local_40;
   undefined4 uStack_3c;
   undefined8 local_38;
   undefined4 local_30;
   undefined4 uStack_2c;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88[4] = 0x3f80000000000000;
   local_88[1] = ( ulong ) * (uint*)param_1 << 0x20;
   local_88[3] = ( ulong ) * (uint*)param_1 << 0x20;
   local_88[5] = ( ulong ) * (uint*)( param_1 + 4 ) << 0x20;
   local_88[7] = ( ulong ) * (uint*)( param_1 + 4 ) << 0x20;
   uVar2 = *(undefined4*)( param_1 + 8 );
   *(undefined8*)( this + 8 ) = 0;
   local_88[0] = 0x3f800000;
   local_88[2] = 0xbf800000;
   local_88[6] = 0xbf80000000000000;
   local_88[8] = 0;
   local_38 = 0;
   _local_40 = CONCAT44(uVar2, 0x3f800000);
   _local_30 = CONCAT44(uVar2, 0xbf800000);
   iVar3 = CowData<Plane>::resize<false>((CowData<Plane>*)( this + 8 ), 6);
   if (iVar3 == 0) {
      lVar4 = 0;
      do {
         if (*(long*)( this + 8 ) == 0) {
            lVar5 = 0;
            LAB_00102fd3:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar4, lVar5, "p_index", "size()", "", false, false);
         }
 else {
            lVar5 = *(long*)( *(long*)( this + 8 ) + -8 );
            if (lVar5 <= lVar4) goto LAB_00102fd3;
            CowData<Plane>::_copy_on_write((CowData<Plane>*)( this + 8 ));
            lVar5 = local_88[lVar4 * 2 + 1];
            plVar1 = (long*)( *(long*)( this + 8 ) + lVar4 * 0x10 );
            *plVar1 = local_88[lVar4 * 2];
            plVar1[1] = lVar5;
         }

         lVar4 = lVar4 + 1;
      }
 while ( lVar4 != 6 );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Vector<Plane>::push_back(Plane) [clone .isra.0] */void Vector<Plane>::push_back(undefined8 param_1, undefined8 param_2, long param_3) {
   int iVar1;
   long lVar2;
   undefined8 *puVar3;
   long lVar4;
   if (*(long*)( param_3 + 8 ) == 0) {
      lVar4 = 1;
   }
 else {
      lVar4 = *(long*)( *(long*)( param_3 + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<Plane>::resize<false>((CowData<Plane>*)( param_3 + 8 ), lVar4);
   if (iVar1 == 0) {
      if (*(long*)( param_3 + 8 ) == 0) {
         lVar2 = -1;
         lVar4 = 0;
      }
 else {
         lVar4 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
         lVar2 = lVar4 + -1;
         if (-1 < lVar2) {
            CowData<Plane>::_copy_on_write((CowData<Plane>*)( param_3 + 8 ));
            puVar3 = (undefined8*)( lVar2 * 0x10 + *(long*)( param_3 + 8 ) );
            *puVar3 = param_1;
            puVar3[1] = param_2;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar2, lVar4, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* Geometry3D::build_capsule_planes(float, float, int, int, Vector3::Axis) */Geometry3D * __thiscall
Geometry3D::build_capsule_planes
          (float param_1,float param_2,Geometry3D *this,int param_3,int param_4,uint param_6){
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   long lVar7;
   int iVar8;
   long lVar9;
   int iVar10;
   long in_FS_OFFSET;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   double dVar20;
   float fVar21;
   float fVar22;
   float fVar23;
   double local_a8;
   double local_a0;
   undefined1 local_98[8];
   undefined8 local_90;
   float local_7c[6];
   undefined8 local_64;
   float local_5c;
   undefined8 local_58;
   float fStack_50;
   float fStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_6 < 3) {
      local_7c[3] = 0.0;
      local_7c[4] = 0.0;
      local_7c[5] = 0.0;
      local_7c[0] = 0.0;
      local_7c[1] = 0.0;
      local_7c[2] = 0.0;
      local_7c[(int)param_6] = _LC23;
      local_90 = 0;
      lVar9 = (long)(int)( ( param_6 + 1 ) % 3 );
      local_7c[lVar9 + 3] = _LC23;
      lVar7 = (long)(int)( ( param_6 + 2 ) % 3 );
      local_7c[lVar7 + 3] = _LC23;
      local_7c[(long)(int)param_6 + 3] = -1.0;
      dVar20 = _LC56 / (double)param_3;
      if (0 < param_3) {
         iVar8 = 0;
         do {
            local_64 = 0;
            local_5c = 0.0;
            sincos((double)iVar8 * dVar20, &local_a0, &local_a8);
            *(float*)( (long)&local_64 + lVar9 * 4 ) = (float)local_a8;
            fStack_4c = param_1;
            *(float*)( (long)&local_64 + lVar7 * 4 ) = (float)local_a0;
            fStack_50 = local_5c;
            local_58 = local_64;
            Vector<Plane>::push_back(local_64, CONCAT44(fStack_4c, local_5c), local_98);
            fVar6 = local_5c;
            fVar3 = local_7c[5];
            if (0 < param_4) {
               iVar10 = 1;
               fVar4 = (float)local_64;
               fVar5 = local_64._4_4_;
               fVar2 = local_7c[4];
               fVar1 = local_7c[3];
               fVar14 = local_7c[2] - local_5c;
               fVar11 = param_2 * local_7c[2] * _LC2;
               fVar18 = local_7c[0] - (float)local_64;
               fVar16 = _LC2 * param_2 * local_7c[0];
               fVar12 = local_7c[1] - local_64._4_4_;
               fVar13 = param_2 * local_7c[1] * _LC2;
               do {
                  fVar17 = (float)iVar10 / (float)param_4;
                  fVar15 = fVar18 * fVar17 + fVar4;
                  fVar21 = fVar12 * fVar17 + fVar5;
                  fVar17 = fVar17 * fVar14 + fVar6;
                  fVar19 = fVar15 * fVar15 + fVar21 * fVar21 + fVar17 * fVar17;
                  if (fVar19 == 0.0) {
                     fVar17 = 0.0;
                     fVar15 = 0.0;
                     fVar19 = fVar15;
                  }
 else {
                     fVar19 = SQRT(fVar19);
                     fVar15 = fVar15 / fVar19;
                     fVar17 = fVar17 / fVar19;
                     fVar19 = fVar21 / fVar19;
                  }

                  iVar10 = iVar10 + 1;
                  fVar23 = param_1 * fVar19 + fVar13;
                  fVar21 = param_1 * fVar15 + fVar16;
                  fVar22 = param_1 * fVar17 + fVar11;
                  fStack_4c = fVar21 * fVar15 + fVar23 * fVar19 + fVar22 * fVar17;
                  local_58 = CONCAT44(fVar19, fVar15);
                  fStack_50 = fVar17;
                  Vector<Plane>::push_back(CONCAT44(fVar19, fVar15), CONCAT44(fStack_4c, fVar17), local_98);
                  fVar15 = fVar15 * fVar1;
                  fVar19 = fVar19 * fVar2;
                  fStack_50 = fVar17 * fVar3;
                  fStack_4c = fVar21 * fVar1 * fVar15 + fVar23 * fVar2 * fVar19 + fVar22 * fVar3 * fStack_50;
                  local_58 = CONCAT44(fVar19, fVar15);
                  Vector<Plane>::push_back(CONCAT44(fVar19, fVar15), CONCAT44(fStack_4c, fStack_50), local_98);
               }
 while ( iVar10 <= param_4 );
            }

            iVar8 = iVar8 + 1;
         }
 while ( param_3 != iVar8 );
      }

      *(undefined8*)( this + 8 ) = local_90;
   }
 else {
      _err_print_index_error("build_capsule_planes", "core/math/geometry_3d.cpp", 0x31b, (ulong)param_6, 3, "p_axis", "3", "", false, false);
      *(undefined8*)( this + 8 ) = 0;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Geometry3D::build_sphere_planes(float, int, int, Vector3::Axis) */Geometry3D * __thiscall
Geometry3D::build_sphere_planes
          (undefined4 param_1,Geometry3D *this,int param_2,int param_3,uint param_5){
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   long lVar7;
   int iVar8;
   long lVar9;
   int iVar10;
   long in_FS_OFFSET;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   double dVar17;
   float fVar18;
   double local_a8;
   double local_a0;
   undefined1 local_98[8];
   undefined8 local_90;
   float local_7c[6];
   undefined8 local_64;
   float local_5c;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_5 < 3) {
      local_7c[3] = 0.0;
      local_7c[4] = 0.0;
      local_7c[5] = 0.0;
      local_7c[0] = 0.0;
      local_7c[1] = 0.0;
      local_7c[2] = 0.0;
      local_7c[(int)param_5] = _LC23;
      local_90 = 0;
      lVar9 = (long)(int)( ( param_5 + 1 ) % 3 );
      local_7c[lVar9 + 3] = _LC23;
      lVar7 = (long)(int)( ( param_5 + 2 ) % 3 );
      local_7c[lVar7 + 3] = _LC23;
      local_7c[(long)(int)param_5 + 3] = -1.0;
      dVar17 = _LC56 / (double)param_3;
      if (0 < param_3) {
         iVar10 = 0;
         do {
            local_64 = 0;
            local_5c = 0.0;
            sincos((double)iVar10 * dVar17, &local_a0, &local_a8);
            *(float*)( (long)&local_64 + lVar9 * 4 ) = (float)local_a8;
            *(float*)( (long)&local_64 + lVar7 * 4 ) = (float)local_a0;
            uStack_50 = CONCAT44(param_1, local_5c);
            local_58 = local_64;
            Vector<Plane>::push_back(local_64, uStack_50, local_98);
            fVar6 = local_5c;
            fVar3 = local_7c[5];
            if (0 < param_2) {
               fVar4 = (float)local_64;
               iVar8 = 1;
               fVar5 = local_64._4_4_;
               fVar11 = local_7c[0] - (float)local_64;
               fVar12 = local_7c[1] - local_64._4_4_;
               fVar2 = local_7c[4];
               fVar1 = local_7c[3];
               fVar13 = local_7c[2] - local_5c;
               do {
                  fVar14 = (float)iVar8 / (float)param_2;
                  fVar15 = fVar11 * fVar14 + fVar4;
                  fVar16 = fVar12 * fVar14 + fVar5;
                  fVar14 = fVar14 * fVar13 + fVar6;
                  fVar18 = fVar15 * fVar15 + fVar16 * fVar16 + fVar14 * fVar14;
                  if (fVar18 == 0.0) {
                     fVar14 = 0.0;
                     fVar15 = 0.0;
                     fVar16 = 0.0;
                  }
 else {
                     fVar18 = SQRT(fVar18);
                     fVar16 = fVar16 / fVar18;
                     fVar15 = fVar15 / fVar18;
                     fVar14 = fVar14 / fVar18;
                  }

                  local_58 = CONCAT44(fVar16, fVar15);
                  iVar8 = iVar8 + 1;
                  uStack_50 = CONCAT44(param_1, fVar14);
                  Vector<Plane>::push_back(local_58, uStack_50, local_98);
                  uStack_50 = CONCAT44(param_1, fVar14 * fVar3);
                  local_58 = CONCAT44(fVar16 * fVar2, fVar15 * fVar1);
                  Vector<Plane>::push_back(local_58, uStack_50, local_98);
               }
 while ( iVar8 <= param_2 );
            }

            iVar10 = iVar10 + 1;
         }
 while ( param_3 != iVar10 );
      }

      *(undefined8*)( this + 8 ) = local_90;
   }
 else {
      _err_print_index_error("build_sphere_planes", "core/math/geometry_3d.cpp", 0x2fc, (ulong)param_5, 3, "p_axis", "3", "", false, false);
      *(undefined8*)( this + 8 ) = 0;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Geometry3D::build_cylinder_planes(float, float, int, Vector3::Axis) */Geometry3D * __thiscall
Geometry3D::build_cylinder_planes
          (undefined4 param_1,float param_2,Geometry3D *this,int param_3,uint param_5){
   int iVar1;
   long in_FS_OFFSET;
   double dVar2;
   double dVar3;
   double local_88;
   double local_80;
   undefined1 local_78[8];
   undefined8 local_70;
   undefined8 local_64;
   uint local_5c;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_5 < 3) {
      local_70 = 0;
      dVar3 = _LC56 / (double)param_3;
      if (0 < param_3) {
         iVar1 = 0;
         do {
            local_64 = 0;
            dVar2 = (double)iVar1;
            iVar1 = iVar1 + 1;
            local_5c = 0;
            sincos(dVar2 * dVar3, &local_80, &local_88);
            *(float*)( (long)&local_64 + (long)(int)( ( param_5 + 1 ) % 3 ) * 4 ) = (float)local_88;
            *(float*)( (long)&local_64 + (long)(int)( ( param_5 + 2 ) % 3 ) * 4 ) = (float)local_80;
            uStack_50 = CONCAT44(param_1, local_5c);
            local_58 = local_64;
            Vector<Plane>::push_back(local_64, uStack_50, local_78);
         }
 while ( param_3 != iVar1 );
      }

      local_64 = 0;
      param_2 = param_2 * _LC2;
      local_5c = 0;
      *(undefined4*)( (long)&local_64 + (long)(int)param_5 * 4 ) = 0x3f800000;
      local_58 = local_64;
      uStack_50 = CONCAT44(param_2, local_5c);
      Vector<Plane>::push_back(local_64, uStack_50, local_78);
      local_58 = CONCAT44(local_64._4_4_ ^ _LC26, (uint)local_64 ^ _LC26);
      uStack_50 = CONCAT44(param_2, local_5c ^ _LC26);
      Vector<Plane>::push_back(local_58, uStack_50, local_78);
      *(undefined8*)( this + 8 ) = local_70;
   }
 else {
      _err_print_index_error("build_cylinder_planes", "core/math/geometry_3d.cpp", 0x2e5, (ulong)param_5, 3, "p_axis", "3", "", false, false);
      *(undefined8*)( this + 8 ) = 0;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* Vector<Face3>::push_back(Face3) [clone .isra.0] */void Vector<Face3>::push_back(long param_1) {
   undefined8 *puVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   undefined8 in_stack_00000008;
   undefined8 in_stack_00000010;
   undefined8 in_stack_00000018;
   undefined8 in_stack_00000020;
   undefined4 in_stack_00000028;
   if (*(long*)( param_1 + 8 ) == 0) {
      lVar3 = 1;
   }
 else {
      lVar3 = *(long*)( *(long*)( param_1 + 8 ) + -8 ) + 1;
   }

   iVar2 = CowData<Face3>::resize<false>((CowData<Face3>*)( param_1 + 8 ), lVar3);
   if (iVar2 == 0) {
      if (*(long*)( param_1 + 8 ) == 0) {
         lVar4 = -1;
         lVar3 = 0;
      }
 else {
         lVar3 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
         lVar4 = lVar3 + -1;
         if (-1 < lVar4) {
            CowData<Face3>::_copy_on_write((CowData<Face3>*)( param_1 + 8 ));
            puVar1 = (undefined8*)( *(long*)( param_1 + 8 ) + lVar4 * 0x24 );
            *puVar1 = in_stack_00000008;
            puVar1[1] = in_stack_00000010;
            *(undefined4*)( puVar1 + 4 ) = in_stack_00000028;
            puVar1[2] = in_stack_00000018;
            puVar1[3] = in_stack_00000020;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar4, lVar3, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Geometry3D::wrap_geometry(Vector<Face3> const&, float*) */Geometry3D * __thiscall Geometry3D::wrap_geometry(Geometry3D *this,Vector *param_1,float *param_2){
   float *pfVar1;
   undefined8 *puVar2;
   float fVar3;
   float fVar4;
   byte bVar5;
   undefined8 uVar6;
   int iVar7;
   int iVar8;
   uchar ***pppuVar9;
   uchar *puVar10;
   ulong uVar11;
   Face3 *pFVar12;
   Face3 *pFVar13;
   float *pfVar14;
   float *pfVar15;
   int iVar16;
   float *pfVar17;
   int iVar18;
   ulong uVar19;
   float *pfVar20;
   ulong uVar21;
   long lVar22;
   int iVar23;
   uchar **ppuVar24;
   uchar ***pppuVar25;
   uchar ***pppuVar26;
   uchar ***pppuVar27;
   int iVar28;
   byte *pbVar29;
   ulong uVar30;
   int iVar31;
   long lVar32;
   int iVar33;
   uchar *puVar34;
   long lVar35;
   long in_FS_OFFSET;
   undefined1 auVar36[16];
   float fVar37;
   undefined1 auVar38[16];
   float fVar39;
   float fVar40;
   float fVar41;
   float fVar42;
   float fVar43;
   int local_150;
   int local_14c;
   int local_148;
   ulong local_120;
   int local_110;
   int local_10c;
   int local_104;
   undefined8 local_d8;
   float local_d0;
   undefined8 local_c8;
   float fStack_c0;
   float fStack_bc;
   float fStack_b8;
   float fStack_b4;
   undefined8 local_a8;
   float fStack_a0;
   float fStack_9c;
   float fStack_98;
   float fStack_94;
   undefined8 uStack_90;
   float local_88;
   undefined8 local_78;
   float fStack_70;
   float fStack_6c;
   float fStack_68;
   float fStack_64;
   undefined8 uStack_60;
   float local_58;
   undefined8 local_54;
   undefined4 local_4c;
   float local_48[2];
   long local_40;
   pfVar14 = *(float**)( param_1 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar39 = __LC60;
   fVar41 = _UNK_00107254;
   if (pfVar14 == (float*)0x0) {
      uVar19 = CONCAT44(_LC59._4_4_, (float)_LC59);
      auVar36._8_8_ = 0;
      auVar36._0_8_ = uVar19;
      local_148 = 0;
      fStack_c0 = _UNK_00107258;
      fStack_bc = _UNK_0010725c;
   }
 else {
      local_c8 = 0;
      fStack_c0 = 0.0;
      local_148 = (int)*(undefined8*)( pfVar14 + -2 );
      fStack_bc = 0.0;
      fStack_b8 = 0.0;
      fStack_b4 = 0.0;
      if (local_148 < 1) {
         uVar19 = CONCAT44(_LC59._4_4_, (float)_LC59);
         auVar36._8_8_ = 0;
         auVar36._0_8_ = uVar19;
         fStack_c0 = _UNK_00107258;
         fStack_bc = _UNK_0010725c;
      }
 else {
         fVar39 = pfVar14[3];
         fVar41 = *pfVar14;
         fVar43 = pfVar14[1];
         fVar42 = pfVar14[2];
         fVar3 = fVar39;
         if (fVar41 <= fVar39) {
            fVar3 = fVar41;
         }

         fVar4 = pfVar14[4];
         if (fVar39 <= fVar41 + 0.0) {
            fVar39 = fVar41 + 0.0;
         }

         fVar41 = fVar4;
         if (fVar4 <= fVar43 + 0.0) {
            fVar41 = fVar43 + 0.0;
         }

         if (fVar43 <= fVar4) {
            fVar4 = fVar43;
         }

         fVar43 = pfVar14[5];
         fVar37 = fVar43;
         if (fVar43 <= fVar42 + 0.0) {
            fVar37 = fVar42 + 0.0;
         }

         if (fVar42 <= fVar43) {
            fVar43 = fVar42;
         }

         if (( ( fVar39 - fVar3 < 0.0 ) || ( fVar41 - fVar4 < 0.0 ) ) || ( fVar37 - fVar43 < 0.0 )) {
            _err_print_error("expand_to", "./core/math/aabb.h", 0x158, "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size.", 0, 0);
         }

         local_c8._4_4_ = pfVar14[7];
         fVar42 = ( fVar39 - fVar3 ) + fVar3;
         fVar39 = ( fVar37 - fVar43 ) + fVar43;
         local_c8._0_4_ = pfVar14[6];
         fVar41 = ( fVar41 - fVar4 ) + fVar4;
         iVar31 = 1;
         fStack_bc = (float)local_c8;
         if ((float)local_c8 <= fVar42) {
            fStack_bc = fVar42;
         }

         if (fVar3 <= (float)local_c8) {
            local_c8._0_4_ = fVar3;
         }

         fStack_b8 = local_c8._4_4_;
         if (local_c8._4_4_ <= fVar41) {
            fStack_b8 = fVar41;
         }

         if (fVar4 <= local_c8._4_4_) {
            local_c8._4_4_ = fVar4;
         }

         fStack_bc = fStack_bc - (float)local_c8;
         fStack_c0 = pfVar14[8];
         fStack_b8 = fStack_b8 - local_c8._4_4_;
         fStack_b4 = fStack_c0;
         if (fStack_c0 <= fVar39) {
            fStack_b4 = fVar39;
         }

         if (fVar43 <= fStack_c0) {
            fStack_c0 = fVar43;
         }

         fStack_b4 = fStack_b4 - fStack_c0;
         pfVar17 = pfVar14;
         if (local_148 != 1) {
            do {
               uVar6 = *(undefined8*)( pfVar17 + 9 );
               fStack_70 = pfVar17[0xb];
               local_78._0_4_ = (float)uVar6;
               local_78._4_4_ = (float)( (ulong)uVar6 >> 0x20 );
               fVar39 = pfVar17[0xc];
               fVar41 = pfVar17[0xd];
               fVar43 = pfVar17[0xe];
               fVar42 = fVar39;
               if ((float)local_78 <= fVar39) {
                  fVar42 = (float)local_78;
               }

               fVar3 = fVar41;
               if (local_78._4_4_ <= fVar41) {
                  fVar3 = local_78._4_4_;
               }

               fVar4 = fVar43;
               if (fStack_70 <= fVar43) {
                  fVar4 = fStack_70;
               }

               if (fVar39 <= (float)local_78 + 0.0) {
                  fVar39 = (float)local_78 + 0.0;
               }

               if (fVar41 <= local_78._4_4_ + 0.0) {
                  fVar41 = local_78._4_4_ + 0.0;
               }

               if (fVar43 <= fStack_70 + 0.0) {
                  fVar43 = fStack_70 + 0.0;
               }

               if (( ( fVar39 - fVar42 < 0.0 ) || ( fVar41 - fVar3 < 0.0 ) ) || ( fVar43 - fVar4 < 0.0 )) {
                  local_78 = uVar6;
                  _err_print_error("expand_to", "./core/math/aabb.h", 0x158, "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size.", 0, 0);
               }

               fVar40 = ( fVar39 - fVar42 ) + fVar42;
               fVar37 = ( fVar43 - fVar4 ) + fVar4;
               iVar31 = iVar31 + 1;
               fVar39 = pfVar17[0xf];
               fVar43 = pfVar17[0x10];
               fVar41 = ( fVar41 - fVar3 ) + fVar3;
               fStack_70 = pfVar17[0x11];
               fStack_6c = fVar39;
               if (fVar39 <= fVar40) {
                  fStack_6c = fVar40;
               }

               if (fVar42 <= fVar39) {
                  fVar39 = fVar42;
               }

               fStack_68 = fVar43;
               if (fVar43 <= fVar41) {
                  fStack_68 = fVar41;
               }

               if (fVar3 <= fVar43) {
                  fVar43 = fVar3;
               }

               fStack_6c = fStack_6c - fVar39;
               fStack_64 = fStack_70;
               if (fStack_70 <= fVar37) {
                  fStack_64 = fVar37;
               }

               if (fVar4 <= fStack_70) {
                  fStack_70 = fVar4;
               }

               fStack_68 = fStack_68 - fVar43;
               local_78 = CONCAT44(fVar43, fVar39);
               fStack_64 = fStack_64 - fStack_70;
               AABB::merge_with((AABB*)&local_c8);
               pfVar17 = pfVar17 + 9;
            }
 while ( local_148 != iVar31 );
         }

         uVar19 = CONCAT44(fStack_b4 + _LC59._4_4_, fStack_b8 + (float)_LC59);
         auVar36._0_4_ = fStack_bc + (float)_LC59;
         auVar36._4_4_ = fStack_b8 + _LC59._4_4_;
         auVar36._8_8_ = 0;
         fVar39 = __LC65 + (float)local_c8;
         fVar41 = _UNK_00107264 + local_c8._4_4_;
         fStack_c0 = _UNK_00107268 + fStack_c0;
         fStack_bc = fStack_bc + _UNK_0010727c;
      }

   }

   local_c8 = CONCAT44(fVar41, fVar39);
   fStack_b4 = (float)( uVar19 >> 0x20 );
   fStack_b8 = (float)uVar19;
   if (_LC61 <= fStack_bc) {
      local_150 = 0x14;
      ppuVar24 = (uchar**)0x14;
      fVar39 = _LC61;
   }
 else {
      local_150 = (int)fStack_bc + 1;
      ppuVar24 = (uchar**)(long)local_150;
      fVar39 = (float)local_150;
   }

   if (_LC61 <= fStack_b8) {
      iVar31 = 0x14;
      fVar41 = _LC61;
   }
 else {
      iVar31 = (int)fStack_b8 + 1;
      fVar41 = (float)iVar31;
   }

   auVar38._4_4_ = fVar41;
   auVar38._0_4_ = fVar39;
   if (_LC61 <= fStack_b4) {
      local_14c = 0x14;
      local_d0 = _LC61;
   }
 else {
      local_14c = (int)fStack_b4 + 1;
      local_d0 = (float)local_14c;
   }

   local_d0 = fStack_b4 / local_d0;
   auVar38._8_8_ = __LC23;
   auVar36 = divps(auVar36, auVar38);
   local_d8 = auVar36._0_8_;
   if (ppuVar24 == (uchar**)0x0) {
      pppuVar9 = (uchar***)0x0;
      LAB_00104ffa:if (0 < local_148) goto LAB_001044f3;
      if (local_14c < 1) {
         *(undefined8*)( this + 8 ) = 0;
         CowData<Face3>::_copy_on_write((CowData<Face3>*)( this + 8 ));
         if (0 < local_150) {
            LAB_00104ec6:pppuVar26 = pppuVar9;
            do {
               lVar35 = 0;
               if (0 < iVar31) {
                  do {
                     puVar2 = (undefined8*)( (long)*pppuVar26 + lVar35 );
                     lVar35 = lVar35 + 8;
                     Memory::free_static((void*)*puVar2, true);
                  }
 while ( lVar35 != (long)iVar31 * 8 );
               }

               ppuVar24 = *pppuVar26;
               pppuVar26 = pppuVar26 + 1;
               Memory::free_static(ppuVar24, true);
            }
 while ( pppuVar26 != pppuVar9 + local_150 );
         }

         goto LAB_00104f0b;
      }

   }
 else {
      pppuVar9 = (uchar***)Memory::alloc_static((long)ppuVar24 * 8, true);
      if (pppuVar9 == (uchar***)0x0) {
         _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
      }
 else {
         pppuVar9[-1] = ppuVar24;
      }

      if (local_150 < 1) goto LAB_00104ffa;
      puVar34 = (uchar*)(long)iVar31;
      pppuVar26 = pppuVar9 + local_150;
      uVar30 = (ulong)local_14c;
      uVar19 = (long)puVar34 * 8;
      pppuVar25 = pppuVar9;
      if (puVar34 == (uchar*)0x0) {
         if (( (long)pppuVar26 - (long)pppuVar9 & 8U ) != 0) {
            *pppuVar9 = (uchar**)0x0;
            pppuVar25 = pppuVar9 + 1;
            if (pppuVar9 + 1 == pppuVar26) goto LAB_001044e7;
         }

         do {
            *pppuVar25 = (uchar**)0x0;
            pppuVar27 = pppuVar25 + 2;
            pppuVar25[1] = (uchar**)0x0;
            pppuVar25 = pppuVar27;
         }
 while ( pppuVar27 != pppuVar26 );
      }
 else {
         do {
            while (true) {
               ppuVar24 = (uchar**)Memory::alloc_static(uVar19, true);
               if (ppuVar24 == (uchar**)0x0) {
                  _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
               }
 else {
                  ppuVar24[-1] = puVar34;
               }

               *pppuVar25 = ppuVar24;
               if (0 < iVar31) break;
               LAB_001044cb:pppuVar25 = pppuVar25 + 1;
               if (pppuVar25 == pppuVar26) goto LAB_001044e7;
            }
;
            uVar21 = 0;
            while (true) {
               if (local_14c == 0) {
                  *ppuVar24 = (uchar*)0x0;
               }
 else {
                  while (true) {
                     puVar10 = (uchar*)Memory::alloc_static(uVar30, true);
                     if (puVar10 == (uchar*)0x0) {
                        _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
                        *ppuVar24 = (uchar*)0x0;
                     }
 else {
                        *(ulong*)( puVar10 + -8 ) = uVar30;
                        *ppuVar24 = puVar10;
                     }

                     if (local_14c < 1) break;
                     uVar11 = 0;
                     do {
                        *(undefined1*)( *(long*)( (long)*pppuVar25 + uVar21 ) + uVar11 ) = 0;
                        uVar11 = uVar11 + 1;
                     }
 while ( uVar11 != uVar30 );
                     uVar21 = uVar21 + 8;
                     if (uVar21 == uVar19) goto LAB_001044cb;
                     ppuVar24 = (uchar**)( (long)*pppuVar25 + uVar21 );
                  }
;
               }

               uVar21 = uVar21 + 8;
               if (uVar21 == uVar19) break;
               ppuVar24 = (uchar**)( (long)*pppuVar25 + uVar21 );
            }
;
            pppuVar25 = pppuVar25 + 1;
         }
 while ( pppuVar25 != pppuVar26 );
      }

      LAB_001044e7:if (local_148 < 1) goto LAB_001045c2;
      LAB_001044f3:iVar23 = 0;
      do {
         local_78 = *(undefined8*)pfVar14;
         fStack_70 = (float)*(undefined8*)( pfVar14 + 2 );
         fStack_6c = (float)( ( ulong ) * (undefined8*)( pfVar14 + 2 ) >> 0x20 );
         fStack_68 = (float)*(undefined8*)( pfVar14 + 4 );
         fStack_64 = (float)( ( ulong ) * (undefined8*)( pfVar14 + 4 ) >> 0x20 );
         uStack_60 = *(undefined8*)( pfVar14 + 6 );
         local_58 = pfVar14[8];
         pFVar12 = (Face3*)&local_78;
         do {
            pFVar13 = pFVar12 + 0xc;
            *(ulong*)pFVar12 = CONCAT44((float)( ( ulong ) * (undefined8*)pFVar12 >> 0x20 ) - (float)( (ulong)local_c8 >> 0x20 ), (float)*(undefined8*)pFVar12 - (float)local_c8);
            *(float*)( pFVar12 + 8 ) = *(float*)( pFVar12 + 8 ) - fStack_c0;
            pFVar12 = pFVar13;
         }
 while ( (Face3*)&local_54 != pFVar13 );
         iVar23 = iVar23 + 1;
         pfVar14 = pfVar14 + 9;
         _plot_face(pppuVar9, 0, 0, 0, local_150, iVar31, local_14c, (Vector3*)&local_d8, (Face3*)&local_78);
      }
 while ( iVar23 < local_148 );
      if (0 < local_150) {
         LAB_001045c2:iVar23 = 0;
         pppuVar26 = pppuVar9;
         LAB_001045c7:if (iVar31 < 1) goto LAB_00104945;
         do {
            lVar35 = 0;
            do {
               pbVar29 = ( *pppuVar26 )[lVar35];
               if (( *pbVar29 & 3 ) == 0) {
                  *pbVar29 = 0xe0;
                  _mark_outside(pppuVar9, iVar23, (int)lVar35, 0, local_150, iVar31, local_14c);
                  pbVar29 = ( *pppuVar26 )[lVar35];
               }

               if (( pbVar29[local_14c + -1] & 3 ) == 0) {
                  pbVar29[local_14c + -1] = 0xe0;
                  _mark_outside(pppuVar9, iVar23, (int)lVar35, local_14c + -1, local_150, iVar31, local_14c);
               }

               lVar35 = lVar35 + 1;
            }
 while ( iVar31 != lVar35 );
            iVar23 = iVar23 + 1;
            pppuVar26 = pppuVar26 + 1;
         }
 while ( local_150 != iVar23 );
         LAB_00104696:if (0 < local_14c) goto LAB_001046a2;
         goto LAB_00104810;
      }

      if (local_14c < 1) {
         LAB_00105073:*(undefined8*)( this + 8 ) = 0;
         CowData<Face3>::_copy_on_write((CowData<Face3>*)( this + 8 ));
         LAB_00104f0b:Memory::free_static(pppuVar9, true);
         if (param_2 != (float*)0x0) {
            *param_2 = SQRT((float)local_d8 * (float)local_d8 + local_d8._4_4_ * local_d8._4_4_ + local_d0 * local_d0);
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return this;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

   }

   LAB_001046a2:lVar35 = 0;
   LAB_001046b6:if (iVar31 < 1) goto LAB_00104932;
   do {
      lVar22 = 0;
      do {
         if (( ( *pppuVar9 )[lVar22][lVar35] & 3 ) == 0) {
            ( *pppuVar9 )[lVar22][lVar35] = 0xe0;
            _mark_outside(pppuVar9, 0, (int)lVar22, (int)lVar35, local_150, iVar31, local_14c);
         }

         if (( pppuVar9[local_150 + -1][lVar22][lVar35] & 3 ) == 0) {
            pppuVar9[local_150 + -1][lVar22][lVar35] = 0xe0;
            _mark_outside(pppuVar9, local_150 + -1, (int)lVar22, (int)lVar35, local_150, iVar31, local_14c);
         }

         lVar22 = lVar22 + 1;
      }
 while ( iVar31 != lVar22 );
      lVar35 = lVar35 + 1;
   }
 while ( (int)lVar35 < local_14c );
   LAB_00104802:if (local_150 < 1) goto LAB_00105073;
   LAB_00104810:lVar35 = 0;
   do {
      if (0 < local_14c) goto LAB_0010484a;
      lVar35 = lVar35 + 1;
   }
 while ( local_150 != lVar35 );
   LAB_0010490e:lVar22 = 0;
   *(undefined8*)( this + 8 ) = 0;
   do {
      if (0 < iVar31) {
         local_10c = (int)lVar22;
         local_110 = local_10c + 1;
         goto LAB_00104984;
      }

      lVar22 = lVar22 + 1;
   }
 while ( lVar22 != lVar35 );
   LAB_00104e15:if (*(long*)( this + 8 ) == 0) {
      CowData<Face3>::_copy_on_write((CowData<Face3>*)( this + 8 ));
   }
 else {
      uVar6 = *(undefined8*)( *(long*)( this + 8 ) + -8 );
      CowData<Face3>::_copy_on_write((CowData<Face3>*)( this + 8 ));
      pfVar14 = *(float**)( this + 8 );
      iVar23 = (int)uVar6;
      if (0 < iVar23) {
         pfVar17 = pfVar14 + 9;
         pfVar1 = pfVar17 + ( ulong )(iVar23 - 1) * 9;
         pfVar20 = pfVar14;
         do {
            do {
               fVar39 = pfVar14[2];
               pfVar15 = pfVar14 + 3;
               pfVar14[2] = fVar39 * local_d0;
               *(ulong*)pfVar14 = CONCAT44((float)( ( ulong ) * (undefined8*)pfVar14 >> 0x20 ) * (float)( (ulong)local_d8 >> 0x20 ), (float)*(undefined8*)pfVar14 * (float)local_d8);
               *pfVar14 = *pfVar14 + (float)local_c8;
               pfVar14[1] = pfVar14[1] + local_c8._4_4_;
               pfVar14[2] = fVar39 * local_d0 + fStack_c0;
               pfVar14 = pfVar15;
            }
 while ( pfVar15 != pfVar17 );
            pfVar14 = pfVar20 + 9;
            pfVar17 = pfVar17 + 9;
            pfVar20 = pfVar14;
         }
 while ( pfVar14 != pfVar1 );
      }

   }

   goto LAB_00104ec6;
   LAB_00104945:iVar23 = iVar23 + 1;
   pppuVar26 = pppuVar26 + 1;
   if (local_150 == iVar23) goto LAB_00104696;
   goto LAB_001045c7;
   LAB_00104932:lVar35 = lVar35 + 1;
   if (local_14c <= (int)lVar35) goto LAB_00104802;
   goto LAB_001046b6;
   LAB_0010484a:do {
      lVar22 = 0;
      do {
         ppuVar24 = pppuVar9[lVar35];
         if (( ( *ppuVar24 )[lVar22] & 3 ) == 0) {
            ( *ppuVar24 )[lVar22] = 0xe0;
            _mark_outside(pppuVar9, (int)lVar35, 0, (int)lVar22, local_150, iVar31, local_14c);
            ppuVar24 = pppuVar9[lVar35];
         }

         if (( ppuVar24[iVar31 + -1][lVar22] & 3 ) == 0) {
            ppuVar24[iVar31 + -1][lVar22] = 0xe0;
            _mark_outside(pppuVar9, (int)lVar35, iVar31 + -1, (int)lVar22, local_150, iVar31, local_14c);
         }

         lVar22 = lVar22 + 1;
      }
 while ( local_14c != lVar22 );
      lVar35 = lVar35 + 1;
   }
 while ( local_150 != lVar35 );
   goto LAB_0010490e;
   LAB_00104984:iVar23 = (int)lVar22;
   if (0 < local_14c) {
      local_104 = 1;
      local_120 = 0;
      iVar18 = 0;
      uVar19 = 0;
      do {
         lVar32 = 0;
         do {
            if (( pppuVar9[lVar22][uVar19][lVar32] & 2 ) == 0) {
               iVar7 = (int)lVar32;
               uVar30 = 0;
               do {
                  iVar33 = (int)uVar30;
                  local_78 = 0;
                  fStack_70 = 0.0;
                  fStack_6c = 0.0;
                  fStack_68 = 0.0;
                  fStack_64 = 0.0;
                  uStack_60 = 0;
                  local_58 = 0.0;
                  local_54 = 0;
                  local_4c = 0;
                  iVar8 = iVar18;
                  iVar16 = iVar7;
                  if (( uint )(iVar33 * -0x55555555) < 0x55555556) {
                     if (uVar30 < 3) {
                        iVar28 = local_110;
                        iVar8 = ( uint )(iVar33 == 1) + iVar18;
                        LAB_00104ac0:if (( 0x55555554 < ( iVar33 + -2 ) * -0x55555555 + 0x2aaaaaaaU ) || ( iVar16 = uVar30 < 3 )) goto LAB_00104ae8;
                     }
 else {
                        iVar28 = local_10c + -1;
                        if (( iVar33 + -1 ) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
                           LAB_00104daa:iVar8 = (int)local_120 + -1;
                           iVar16 = iVar7 - ( uint )(( uint )(( iVar33 + -2 ) * -0x55555555) < 0x55555556);
                           goto LAB_00104ae8;
                        }

                        if (0x55555555 < ( uint )(( iVar33 + -2 ) * -0x55555555)) goto LAB_00104ae8;
                     }

                     iVar16 = iVar7 + -1;
                  }
 else {
                     iVar28 = iVar23;
                     if (0x55555554 < ( iVar33 + -1 ) * -0x55555555 + 0x2aaaaaaaU) goto LAB_00104ac0;
                     if (2 < uVar30) goto LAB_00104daa;
                     iVar8 = local_104;
                     iVar16 = ( uint )(iVar33 != 1) + iVar7;
                  }

                  LAB_00104ae8:if (( ( ( iVar31 <= iVar8 ) || ( (char)( ( byte )((uint)iVar28 >> 0x18) | ( byte )((uint)iVar8 >> 0x18) | ( byte )((uint)iVar16 >> 0x18) ) < '\0' || local_150 <= iVar28 ) ) || ( local_14c <= iVar16 ) ) || ( ( pppuVar9[iVar28][iVar8][iVar16] & 2 ) != 0 )) {
                     pbVar29 = &_build_faces(unsigned_char * **,int,int,int,int,int,int,Vector<Face3> & ::indices + uVar30 * 4);
                     pfVar14 = (float*)&local_78;
                     do {
                        bVar5 = *pbVar29;
                        pfVar17 = pfVar14 + 3;
                        pbVar29 = pbVar29 + 1;
                        *pfVar14 = (float)( bVar5 >> 2 & 1 ) + (float)iVar23;
                        pfVar14[1] = (float)( bVar5 >> 1 & 1 ) + (float)iVar18;
                        pfVar14[2] = (float)( bVar5 & 1 ) + (float)iVar7;
                        pfVar14 = pfVar17;
                     }
 while ( pfVar17 != local_48 );
                     local_a8 = local_78;
                     fStack_a0 = fStack_70;
                     fStack_9c = fStack_6c;
                     fStack_98 = fStack_68;
                     fStack_94 = fStack_64;
                     uStack_90 = uStack_60;
                     local_88 = local_58;
                     Vector<Face3>::push_back(this);
                     local_a8 = uStack_60;
                     fStack_a0 = local_58;
                     fStack_9c = (float)local_54;
                     fStack_98 = (float)( (ulong)local_54 >> 0x20 );
                     fStack_94 = (float)local_4c;
                     uStack_90 = local_78;
                     local_88 = fStack_70;
                     Vector<Face3>::push_back(this);
                  }

                  uVar30 = uVar30 + 1;
               }
 while ( uVar30 != 6 );
            }

            lVar32 = lVar32 + 1;
         }
 while ( local_14c != lVar32 );
         uVar30 = uVar19 + 1;
         if (uVar30 == (long)iVar31) break;
         local_104 = (int)uVar19 + 2;
         iVar18 = (int)uVar30;
         local_120 = uVar30 & 0xffffffff;
         uVar19 = uVar30;
      }
 while ( true );
   }

   lVar22 = lVar22 + 1;
   if (lVar22 == lVar35) goto LAB_00104e15;
   local_110 = iVar23 + 2;
   local_10c = (int)lVar22;
   goto LAB_00104984;
}
/* Geometry3D::generate_edf(Vector<bool> const&, Vector3i const&, bool) */Geometry3D * __thiscall
Geometry3D::generate_edf(Geometry3D *this,Vector *param_1,Vector3i *param_2,bool param_3){
   ulong *__dest;
   uint uVar1;
   int iVar2;
   long lVar3;
   undefined4 uVar4;
   byte bVar5;
   uint uVar6;
   undefined4 *puVar7;
   undefined4 *puVar8;
   ulong *puVar9;
   undefined8 *puVar10;
   ulong uVar11;
   uint uVar12;
   int iVar13;
   ulong *__src;
   int iVar14;
   int iVar15;
   int iVar16;
   ulong uVar17;
   uint uVar18;
   size_t __n;
   float fVar19;
   ulong local_40;
   uVar12 = *(uint*)param_2;
   iVar14 = *(int*)( param_2 + 4 );
   iVar2 = *(int*)( param_2 + 8 );
   iVar13 = uVar12 * iVar14;
   uVar6 = iVar2 * iVar13;
   if (*(long*)( param_1 + 8 ) == 0) {
      if (uVar6 != 0) goto LAB_001054b2;
      LAB_0010548e:local_40 = 0;
      puVar7 = (undefined4*)0x0;
      if ((int)uVar12 < 1) {
         if (0 < iVar14) goto LAB_001052d3;
      }
 else {
         LAB_00105223:if (0 < iVar14) {
            uVar1 = 0;
            do {
               iVar15 = 0;
               uVar18 = uVar1;
               do {
                  uVar17 = (ulong)uVar18;
                  iVar15 = iVar15 + 1;
                  uVar18 = uVar18 + uVar12;
                  edt((float*)( puVar7 + uVar17 ), iVar13, iVar2);
               }
 while ( iVar15 != iVar14 );
               uVar1 = uVar1 + 1;
            }
 while ( uVar1 != uVar12 );
         }

         if (0 < iVar2) {
            uVar1 = 0;
            do {
               iVar15 = 0;
               uVar18 = uVar1;
               do {
                  uVar17 = (ulong)uVar18;
                  iVar15 = iVar15 + 1;
                  uVar18 = uVar18 + iVar13;
                  edt((float*)( puVar7 + uVar17 ), uVar12, iVar14);
               }
 while ( iVar15 != iVar2 );
               uVar1 = uVar1 + 1;
            }
 while ( uVar12 != uVar1 );
         }

         if (0 < iVar14) {
            LAB_001052d3:if (0 < iVar2) {
               iVar15 = 0;
               uVar1 = 0;
               do {
                  iVar16 = 0;
                  uVar18 = uVar1;
                  do {
                     uVar17 = (ulong)uVar18;
                     iVar16 = iVar16 + 1;
                     uVar18 = uVar18 + iVar13;
                     edt((float*)( puVar7 + uVar17 ), 1, uVar12);
                  }
 while ( iVar16 != iVar2 );
                  iVar15 = iVar15 + 1;
                  uVar1 = uVar1 + uVar12;
               }
 while ( iVar15 != iVar14 );
            }

         }

         if (uVar6 != 0) {
            uVar17 = local_40 << 2;
            if (local_40 != 0) goto LAB_0010534f;
            __src = (ulong*)0x0;
            _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
            goto LAB_001053d3;
         }

      }

      __src = (ulong*)0x0;
   }
 else {
      if (uVar6 != *(uint*)( *(long*)( param_1 + 8 ) + -8 )) {
         LAB_001054b2:_err_print_error("generate_edf", "core/math/geometry_3d.cpp", 0x38a, "Condition \"(uint32_t)p_voxels.size() != float_count\" is true. Returning: Vector<uint32_t>()", 0, 0);
         *(undefined8*)( this + 8 ) = 0;
         return this;
      }

      local_40 = (ulong)uVar6;
      if (local_40 == 0) goto LAB_0010548e;
      uVar17 = local_40 * 4;
      puVar7 = (undefined4*)Memory::alloc_static(uVar17, true);
      if (puVar7 == (undefined4*)0x0) {
         _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
      }
 else {
         *(ulong*)( puVar7 + -2 ) = local_40;
      }

      uVar4 = _LC0._4_4_;
      puVar8 = puVar7;
      if (( uVar6 & 1 ) == 0) goto LAB_001051c0;
      *puVar7 = _LC0._4_4_;
      for (puVar8 = puVar7 + 1; puVar7 + local_40 != puVar8; puVar8 = puVar8 + 2) {
         LAB_001051c0:*puVar8 = uVar4;
         puVar8[1] = uVar4;
      }

      iVar14 = *(int*)( param_2 + 4 );
      uVar12 = *(uint*)param_2;
      uVar11 = 0;
      iVar13 = iVar14 * uVar12;
      lVar3 = *(long*)( param_1 + 8 );
      do {
         bVar5 = *(byte*)( lVar3 + uVar11 );
         if (param_3) {
            bVar5 = *(byte*)( lVar3 + uVar11 ) ^ 1;
         }

         if (bVar5 != 0) {
            puVar7[uVar11] = 0;
         }

         uVar11 = uVar11 + 1;
      }
 while ( local_40 != uVar11 );
      if (0 < (int)uVar12) {
         iVar2 = *(int*)( param_2 + 8 );
         goto LAB_00105223;
      }

      if (0 < iVar14) {
         iVar2 = *(int*)( param_2 + 8 );
         goto LAB_001052d3;
      }

      LAB_0010534f:uVar17 = uVar17 - 1 | uVar17 - 1 >> 1;
      uVar17 = uVar17 | uVar17 >> 2;
      uVar17 = uVar17 | uVar17 >> 4;
      uVar17 = uVar17 | uVar17 >> 8;
      uVar17 = uVar17 | uVar17 >> 0x10;
      puVar9 = (ulong*)Memory::alloc_static(( uVar17 | uVar17 >> 0x20 ) + 0x11, false);
      if (puVar9 == (ulong*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         __src = (ulong*)0x0;
      }
 else {
         __src = puVar9 + 2;
         *puVar9 = 1;
         puVar9[1] = local_40;
         if (1 < *puVar9) {
            uVar11 = puVar9[1];
            uVar17 = 0x10;
            __n = uVar11 * 4;
            if (__n != 0) {
               uVar17 = __n - 1 | __n - 1 >> 1;
               uVar17 = uVar17 | uVar17 >> 2;
               uVar17 = uVar17 | uVar17 >> 4;
               uVar17 = uVar17 | uVar17 >> 8;
               uVar17 = uVar17 | uVar17 >> 0x10;
               uVar17 = ( uVar17 | uVar17 >> 0x20 ) + 0x11;
            }

            puVar10 = (undefined8*)Memory::alloc_static(uVar17, false);
            if (puVar10 == (undefined8*)0x0) {
               _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
            }
 else {
               __dest = puVar10 + 2;
               *puVar10 = 1;
               puVar10[1] = uVar11;
               memcpy(__dest, __src, __n);
               LOCK();
               *puVar9 = *puVar9 - 1;
               UNLOCK();
               __src = __dest;
               if (*puVar9 == 0) {
                  Memory::free_static(puVar9, false);
               }

            }

         }

      }

      if (uVar6 == 0) goto LAB_00105405;
      LAB_001053d3:uVar17 = 0;
      do {
         fVar19 = (float)puVar7[uVar17];
         if (fVar19 < 0.0) {
            fVar19 = sqrtf(fVar19);
         }
 else {
            fVar19 = SQRT(fVar19);
         }

         *(int*)( (long)__src + uVar17 * 4 ) = (int)(long)fVar19;
         uVar17 = uVar17 + 1;
      }
 while ( uVar17 != uVar6 );
   }

   LAB_00105405:Memory::free_static(puVar7, true);
   *(ulong**)( this + 8 ) = __src;
   return this;
}
/* Geometry3D::generate_sdf8(Vector<unsigned int> const&, Vector<unsigned int> const&) */Geometry3D * __thiscall Geometry3D::generate_sdf8(Geometry3D *this,Vector *param_1,Vector *param_2){
   ulong *__dest;
   size_t __n;
   undefined1 uVar1;
   int iVar2;
   ulong *puVar3;
   undefined8 *puVar4;
   ulong uVar5;
   long lVar6;
   ulong uVar7;
   long lVar8;
   ulong *__src;
   lVar8 = *(long*)( param_2 + 8 );
   if (*(long*)( param_1 + 8 ) == 0) {
      if (lVar8 != 0) {
         lVar6 = *(long*)( lVar8 + -8 );
         goto joined_r0x0010572a;
      }

   }
 else {
      lVar6 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
      if (lVar8 == 0) {
         joined_r0x0010572a:if (lVar6 != 0) {
            LAB_00105730:_err_print_error("generate_sdf8", "core/math/geometry_3d.cpp", 0x3ca, "Condition \"p_positive.size() != p_negative.size()\" is true. Returning: Vector<int8_t>()", 0, 0);
            *(undefined8*)( this + 8 ) = 0;
            return this;
         }

      }
 else {
         if (lVar6 != *(long*)( lVar8 + -8 )) goto LAB_00105730;
         uVar5 = (ulong)(int)lVar6;
         if ((long)uVar5 < 0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
         }
 else if (uVar5 != 0) {
            uVar7 = uVar5 - 1 | uVar5 - 1 >> 1;
            uVar7 = uVar7 | uVar7 >> 2;
            uVar7 = uVar7 | uVar7 >> 4;
            uVar7 = uVar7 | uVar7 >> 8;
            puVar3 = (ulong*)Memory::alloc_static(( uVar7 | uVar7 >> 0x10 ) + 0x11, false);
            if (puVar3 == (ulong*)0x0) {
               __src = (ulong*)0x0;
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               lVar6 = *(long*)( param_2 + 8 );
               lVar8 = *(long*)( param_1 + 8 );
            }
 else {
               __src = puVar3 + 2;
               *puVar3 = 1;
               puVar3[1] = uVar5;
               lVar8 = *(long*)( param_1 + 8 );
               lVar6 = *(long*)( param_2 + 8 );
               if (1 < *puVar3) {
                  __n = puVar3[1];
                  uVar7 = 0x10;
                  if (__n != 0) {
                     uVar7 = __n - 1 | __n - 1 >> 1;
                     uVar7 = uVar7 | uVar7 >> 2;
                     uVar7 = uVar7 | uVar7 >> 4;
                     uVar7 = uVar7 | uVar7 >> 8;
                     uVar7 = uVar7 | uVar7 >> 0x10;
                     uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
                  }

                  puVar4 = (undefined8*)Memory::alloc_static(uVar7, false);
                  if (puVar4 == (undefined8*)0x0) {
                     _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
                  }
 else {
                     __dest = puVar4 + 2;
                     *puVar4 = 1;
                     puVar4[1] = __n;
                     memcpy(__dest, __src, __n);
                     LOCK();
                     *puVar3 = *puVar3 - 1;
                     UNLOCK();
                     __src = __dest;
                     if (*puVar3 == 0) {
                        Memory::free_static(puVar3, false);
                     }

                  }

               }

            }

            uVar7 = 0;
            do {
               iVar2 = *(int*)( lVar8 + uVar7 * 4 ) - *(int*)( lVar6 + uVar7 * 4 );
               if (0x7f < iVar2) {
                  iVar2 = 0x7f;
               }

               uVar1 = (undefined1)iVar2;
               if (iVar2 < -0x80) {
                  uVar1 = 0x80;
               }

               *(undefined1*)( (long)__src + uVar7 ) = uVar1;
               uVar7 = uVar7 + 1;
            }
 while ( uVar7 != uVar5 );
            goto LAB_00105709;
         }

      }

   }

   __src = (ulong*)0x0;
   LAB_00105709:*(ulong**)( this + 8 ) = __src;
   return this;
}
/* CowData<Face3>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Face3>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Plane>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Plane>::_copy_on_write(void) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, int> > >::operator[](int const&) */undefined1[16];HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>::operator [](HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
             *this,int*param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
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
  undefined1 auVar35[16](*, pauVar36)[16](*, pauVar42)[16](*, pauVar55)[16];
  undefined1 auVar56[16];
  undefined1 auVar57[16](ulong)(local_70 = = (void*)0x0) {
   uVar40 = uVar51 * 4;
   uVar48 = uVar51 * 8;
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   lStack_90 = 0x1063cb;
   local_70 = (void*)Memory::alloc_static(uVar48, false);
   *(void**)( this + 8 ) = local_70;
   if (uVar39 == 0) {
      iVar44 = *(int*)( this + 0x2c );
      uVar38 = *param_1;
      if (local_70 == (void*)0x0) goto LAB_00105f33;
   }
 else {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)local_70 + uVar48 ) ) && ( local_70 < (void*)( (long)pvVar3 + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)local_70 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar51 != uVar40 );
         iVar44 = *(int*)( this + 0x2c );
         uVar38 = *param_1;
      }
 else {
         memset(pvVar3, 0, uVar40);
         lStack_90 = 0x106414;
         memset(local_70, 0, uVar48);
         iVar44 = *(int*)( this + 0x2c );
         uVar38 = *param_1;
      }

   }

   if (iVar44 != 0) {
      uVar40 = ( ulong ) * (uint*)( this + 0x28 );
      lVar52 = *(long*)( this + 0x10 );
      goto LAB_001062b3;
   }

}
else{iVar44 = *(int*)( this + 0x2c );if (iVar44 != 0) {
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

   lVar52 = *(long*)( this + 0x10 );
   auVar4._8_8_ = 0;
   auVar4._0_8_ = uVar51;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar45;
   lVar46 = SUB168(auVar4 * auVar20, 8);
   uVar37 = *(uint*)( lVar52 + lVar46 * 4 );
   uVar54 = SUB164(auVar4 * auVar20, 8);
   if (uVar37 != 0) {
      uVar50 = 0;
      lVar47 = lVar46;
      do {
         if (( uVar53 == uVar37 ) && ( uVar38 == *(uint*)( *(long*)( (long)local_70 + lVar46 * 8 ) + 0x10 ) )) {
            auVar56._0_8_ = *(long*)( (long)local_70 + (ulong)uVar54 * 8 ) + 0x14;
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

   LAB_001062b3:uVar45 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar40 * 4 ));
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
      lVar47 = lVar46;
      do {
         if (( uVar37 == uVar39 ) && ( *(uint*)( *(long*)( (long)local_70 + lVar46 * 8 ) + 0x10 ) == uVar38 )) {
            pauVar42 = *(undefined1(**) [16])( (long)local_70 + (ulong)uVar53 * 8 );
            *(undefined4*)( pauVar42[1] + 4 ) = 0;
            lStack_90 = lVar47;
            goto LAB_00106294;
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
 while ( ( uVar39 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = uVar39 * uVar48,auVar34._8_8_ = 0,auVar34._0_8_ = uVar45,auVar19._8_8_ = 0,auVar19._0_8_ = ( ( *(uint*)( hash_table_size_primes + uVar40 * 4 ) + uVar53 ) - SUB164(auVar18 * auVar34, 8) ) * uVar48,auVar35._8_8_ = 0,auVar35._0_8_ = uVar45,lVar47 = SUB168(auVar19 * auVar35, 8),uVar54 <= SUB164(auVar19 * auVar35, 8) );
   }

}
}LAB_00105f33:if ((float)uVar51 * __LC37 < (float)( iVar44 + 1 )) {
   uVar38 = *(uint*)( this + 0x28 );
   if (uVar38 == 0x1c) {
      pauVar42 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_00106294;
   }

   uVar40 = ( ulong )(uVar38 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar39 = *(uint*)( hash_table_size_primes + (ulong)uVar38 * 4 );
   if (uVar38 + 1 < 2) {
      uVar40 = 2;
   }

   uVar38 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
   uVar48 = (ulong)uVar38;
   *(int*)( this + 0x28 ) = (int)uVar40;
   pvVar3 = *(void**)( this + 0x10 );
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

   if (uVar39 != 0) {
      uVar40 = 0;
      do {
         uVar38 = *(uint*)( (long)pvVar3 + uVar40 * 4 );
         if (uVar38 != 0) {
            lVar52 = *(long*)( this + 0x10 );
            uVar54 = 0;
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
            uVar41 = *(undefined8*)( (long)local_70 + uVar40 * 8 );
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
      Memory::free_static(local_70, false);
      Memory::free_static(pvVar3, false);
   }

}
iVar44 = *param_1;pauVar42 = (undefined1(*) [16])operator_new(0x18, "");*(int*)pauVar42[1] = iVar44;*(undefined4*)( pauVar42[1] + 4 ) = 0;*pauVar42 = (undefined1[16])0x0;puVar2 = *(undefined8**)( this + 0x20 );if (puVar2 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar42;
}
 else {
   *puVar2 = pauVar42;
   *(undefined8**)( *pauVar42 + 8 ) = puVar2;
}
*(undefined1(**) [16])( this + 0x20 ) = pauVar42;uVar38 = ( ( uint ) * param_1 >> 0x10 ^ *param_1 ) * -0x7a143595;uVar39 = ( uVar38 ^ uVar38 >> 0xd ) * -0x3d4d51cb;uVar38 = uVar39 ^ uVar39 >> 0x10;if (uVar39 == uVar39 >> 0x10) {
   uVar40 = 1;
   uVar38 = 1;
}
 else {
   uVar40 = (ulong)uVar38;
}
uVar53 = 0;lVar52 = *(long*)( this + 0x10 );lVar46 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar51 = CONCAT44(0, uVar39);auVar12._8_8_ = 0;auVar12._0_8_ = uVar40 * lVar46;auVar28._8_8_ = 0;auVar28._0_8_ = uVar51;lStack_90 = SUB168(auVar12 * auVar28, 8);lVar47 = *(long*)( this + 8 );puVar1 = (uint*)( lVar52 + lStack_90 * 4 );iVar44 = SUB164(auVar12 * auVar28, 8);uVar37 = *puVar1;pauVar36 = pauVar42;while (uVar37 != 0) {
   auVar13._8_8_ = 0;
   auVar13._0_8_ = (ulong)uVar37 * lVar46;
   auVar29._8_8_ = 0;
   auVar29._0_8_ = uVar51;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(( uVar39 + iVar44 ) - SUB164(auVar13 * auVar29, 8)) * lVar46;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = uVar51;
   uVar54 = SUB164(auVar14 * auVar30, 8);
   pauVar55 = pauVar36;
   if (uVar54 < uVar53) {
      *puVar1 = uVar38;
      puVar2 = (undefined8*)( lVar47 + lStack_90 * 8 );
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
   lStack_90 = SUB168(auVar15 * auVar31, 8);
   puVar1 = (uint*)( lVar52 + lStack_90 * 4 );
   iVar44 = SUB164(auVar15 * auVar31, 8);
   pauVar36 = pauVar55;
   uVar37 = *puVar1;
}
;*(undefined1(**) [16])( lVar47 + lStack_90 * 8 ) = pauVar36;*puVar1 = uVar38;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00106294:auVar57._8_8_ = lStack_90;auVar57._0_8_ = pauVar42[1] + 4;return auVar57;}/* CowData<Vector3>::_realloc(long) */undefined8 CowData<Vector3>::_realloc(CowData<Vector3> *this, long param_1) {
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
      LAB_00106890:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar7 == 0) goto LAB_00106890;
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
      LAB_001067fc:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar9[-1];
      if (param_1 <= lVar3) goto LAB_0010678b;
   }
 else {
      if (lVar8 != 0) {
         uVar6 = _realloc(this, lVar7);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         goto LAB_001067fc;
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
   LAB_0010678b:puVar9[-1] = param_1;
   return 0;
}
/* CowData<Plane>::_realloc(long) */undefined8 CowData<Plane>::_realloc(CowData<Plane> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Plane>::resize<false>(long) */undefined8 CowData<Plane>::resize<false>(CowData<Plane> *this, long param_1) {
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
      lVar9 = 0;
      lVar3 = 0;
   }
 else {
      lVar9 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar9) {
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
      lVar3 = lVar9 * 0x10;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x10 == 0) {
      LAB_00106bd0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 0x10 - 1;
   uVar4 = uVar4 >> 1 | uVar4;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar10 = uVar4 + 1;
   if (lVar10 == 0) goto LAB_00106bd0;
   if (param_1 <= lVar9) {
      if (( lVar10 != lVar3 ) && ( uVar7 = _realloc(this, lVar10) ),(int)uVar7 != 0) {
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

   if (lVar10 == lVar3) {
      LAB_00106b3c:puVar8 = *(undefined8**)this;
      if (puVar8 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar8[-1];
      if (param_1 <= lVar3) goto LAB_00106ace;
   }
 else {
      if (lVar9 != 0) {
         uVar7 = _realloc(this, lVar10);
         if ((int)uVar7 != 0) {
            return uVar7;
         }

         goto LAB_00106b3c;
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

   puVar5 = puVar8 + lVar3 * 2;
   do {
      *puVar5 = 0;
      puVar6 = puVar5 + 2;
      *(undefined4*)( puVar5 + 1 ) = 0;
      *(undefined4*)( (long)puVar5 + 0xc ) = 0;
      puVar5 = puVar6;
   }
 while ( puVar6 != puVar8 + param_1 * 2 );
   LAB_00106ace:puVar8[-1] = param_1;
   return 0;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Face3>::resize<false>(long) */undefined8 CowData<Face3>::resize<false>(CowData<Face3> *this, long param_1) {
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
      lVar3 = lVar11 * 0x24;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   lVar10 = param_1 * 0x24;
   if (lVar10 == 0) {
      LAB_00106f30:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = lVar10 - 1U >> 1 | lVar10 - 1U;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar9 = uVar4 + 1;
   if (lVar9 == 0) goto LAB_00106f30;
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
      LAB_00106e9c:puVar8 = *(undefined8**)this;
      if (puVar8 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar8[-1];
      if (param_1 <= lVar3) goto LAB_00106e25;
   }
 else {
      if (lVar11 != 0) {
         uVar7 = _realloc(this, lVar9);
         if ((int)uVar7 != 0) {
            return uVar7;
         }

         goto LAB_00106e9c;
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

   puVar5 = (undefined8*)( (long)puVar8 + lVar3 * 0x24 );
   do {
      *puVar5 = 0;
      puVar6 = (undefined8*)( (long)puVar5 + 0x24 );
      *(undefined4*)( puVar5 + 1 ) = 0;
      *(undefined8*)( (long)puVar5 + 0xc ) = 0;
      *(undefined4*)( (long)puVar5 + 0x14 ) = 0;
      puVar5[3] = 0;
      *(undefined4*)( puVar5 + 4 ) = 0;
      puVar5 = puVar6;
   }
 while ( (undefined8*)( lVar10 + (long)puVar8 ) != puVar6 );
   LAB_00106e25:puVar8[-1] = param_1;
   return 0;
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
/* CowData<signed char>::_realloc(long) */undefined8 CowData<signed_char>::_realloc(CowData<signed_char> *this, long param_1) {
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


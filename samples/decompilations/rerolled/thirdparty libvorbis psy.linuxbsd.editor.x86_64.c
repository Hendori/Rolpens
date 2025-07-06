int apsort(undefined8 *param_1, undefined8 *param_2) {
   return ( uint )(*(float*)*param_1 < *(float*)*param_2) - ( uint )(*(float*)*param_2 < *(float*)*param_1);
}
void bark_noise_hybridmp(float param_1, uint param_2, long param_3, float *param_4, long param_5, int param_6) {
   bool bVar1;
   long lVar2;
   int *piVar3;
   undefined1 *puVar4;
   float fVar5;
   uint uVar6;
   int iVar7;
   ulong uVar8;
   ulong uVar9;
   float *pfVar10;
   float *pfVar11;
   float *pfVar12;
   float *pfVar13;
   int iVar14;
   long lVar15;
   int *piVar16;
   undefined1 *puVar18;
   undefined1 *puVar20;
   undefined1 *puVar22;
   undefined1 *puVar23;
   undefined4 *puVar24;
   float *pfVar25;
   undefined4 *puVar26;
   int iVar27;
   long lVar28;
   int iVar29;
   int iVar30;
   long in_FS_OFFSET;
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
   int local_58;
   int local_54;
   ulong local_50;
   long local_40;
   int *piVar17;
   undefined1 *puVar19;
   undefined1 *puVar21;
   fVar5 = _LC1;
   piVar16 = &local_58;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar8 = (long)(int)param_2 * 4 + 0x17;
   uVar6 = (uint)uVar8;
   piVar17 = &local_58;
   piVar3 = &local_58;
   while (piVar17 != (int*)( (long)&local_58 - ( uVar8 & 0xfffffffffffff000 ) )) {
      piVar16 = (int*)( (long)piVar3 + -0x1000 );
      *(undefined8*)( (long)piVar3 + -8 ) = *(undefined8*)( (long)piVar3 + -8 );
      piVar17 = (int*)( (long)piVar3 + -0x1000 );
      piVar3 = (int*)( (long)piVar3 + -0x1000 );
   }
;
   lVar2 = -(ulong)(uVar6 & 0xff0);
   puVar18 = (undefined1*)( (long)piVar16 + lVar2 );
   puVar19 = (undefined1*)( (long)piVar16 + lVar2 );
   if (( ulong )(uVar6 & 0xff0) != 0) {
      *(undefined8*)( (long)piVar16 + -8 ) = *(undefined8*)( (long)piVar16 + -8 );
   }

   pfVar13 = (float*)( ( ulong )((long)piVar16 + lVar2 + 0xf) & 0xfffffffffffffff0 );
   puVar20 = (undefined1*)( (long)piVar16 + lVar2 );
   while (puVar19 != (undefined1*)( (long)piVar16 + ( lVar2 - ( uVar8 & 0xfffffffffffff000 ) ) )) {
      puVar18 = puVar20 + -0x1000;
      *(undefined8*)( puVar20 + -8 ) = *(undefined8*)( puVar20 + -8 );
      puVar19 = puVar20 + -0x1000;
      puVar20 = puVar20 + -0x1000;
   }
;
   lVar2 = -(ulong)(uVar6 & 0xff0);
   puVar20 = puVar18 + lVar2;
   puVar21 = puVar18 + lVar2;
   if (( ulong )(uVar6 & 0xff0) != 0) {
      *(undefined8*)( puVar18 + -8 ) = *(undefined8*)( puVar18 + -8 );
   }

   pfVar12 = (float*)( ( ulong )(puVar18 + lVar2 + 0xf) & 0xfffffffffffffff0 );
   puVar4 = puVar18 + lVar2;
   while (puVar21 != puVar18 + ( lVar2 - ( uVar8 & 0xfffffffffffff000 ) )) {
      puVar20 = puVar4 + -0x1000;
      *(undefined8*)( puVar4 + -8 ) = *(undefined8*)( puVar4 + -8 );
      puVar21 = puVar4 + -0x1000;
      puVar4 = puVar4 + -0x1000;
   }
;
   lVar2 = -(ulong)(uVar6 & 0xff0);
   puVar18 = puVar20 + lVar2;
   puVar22 = puVar20 + lVar2;
   if (( ulong )(uVar6 & 0xff0) != 0) {
      *(undefined8*)( puVar20 + -8 ) = *(undefined8*)( puVar20 + -8 );
   }

   puVar24 = (undefined4*)( ( ulong )(puVar20 + lVar2 + 0xf) & 0xfffffffffffffff0 );
   puVar4 = puVar20 + lVar2;
   while (puVar22 != puVar20 + ( lVar2 - ( uVar8 & 0xfffffffffffff000 ) )) {
      puVar18 = puVar4 + -0x1000;
      *(undefined8*)( puVar4 + -8 ) = *(undefined8*)( puVar4 + -8 );
      puVar22 = puVar4 + -0x1000;
      puVar4 = puVar4 + -0x1000;
   }
;
   lVar2 = -(ulong)(uVar6 & 0xff0);
   puVar20 = puVar18 + lVar2;
   puVar23 = puVar18 + lVar2;
   if (( ulong )(uVar6 & 0xff0) != 0) {
      *(undefined8*)( puVar18 + -8 ) = *(undefined8*)( puVar18 + -8 );
   }

   pfVar25 = (float*)( ( ulong )(puVar18 + lVar2 + 0xf) & 0xfffffffffffffff0 );
   puVar4 = puVar18 + lVar2;
   while (puVar23 != puVar18 + ( lVar2 - ( uVar8 & 0xfffffffffffff000 ) )) {
      puVar20 = puVar4 + -0x1000;
      *(undefined8*)( puVar4 + -8 ) = *(undefined8*)( puVar4 + -8 );
      puVar23 = puVar4 + -0x1000;
      puVar4 = puVar4 + -0x1000;
   }
;
   lVar2 = -(ulong)(uVar6 & 0xff0);
   if (( ulong )(uVar6 & 0xff0) != 0) {
      *(undefined8*)( puVar20 + -8 ) = *(undefined8*)( puVar20 + -8 );
   }

   puVar26 = (undefined4*)( ( ulong )(puVar20 + lVar2 + 0xf) & 0xfffffffffffffff0 );
   fVar35 = *param_4 + param_1;
   fVar40 = _LC0;
   fVar31 = _LC0;
   if (_LC1 <= fVar35) {
      fVar31 = fVar35 * fVar35 * _LC0;
      fVar40 = fVar31 + 0.0;
      fVar31 = fVar35 * fVar31 + 0.0;
   }

   *puVar24 = 0;
   *puVar26 = 0;
   *pfVar13 = fVar40;
   *pfVar12 = fVar40;
   *pfVar25 = fVar31;
   if ((int)param_2 < 2) {
      if (param_2 != 1) goto LAB_001007cd;
   }
 else {
      fVar39 = 0.0;
      uVar8 = 1;
      fVar38 = 0.0;
      fVar35 = fVar5;
      fVar36 = fVar40;
      do {
         fVar33 = param_4[uVar8] + param_1;
         fVar32 = fVar35;
         fVar41 = fVar5;
         fVar34 = fVar35;
         fVar37 = fVar5;
         if (fVar5 <= fVar33) {
            fVar37 = fVar33 * fVar33;
            fVar32 = fVar33 * fVar35 * fVar37;
            fVar41 = fVar33 * fVar37;
            fVar34 = fVar35 * fVar37;
         }

         fVar40 = fVar40 + fVar34;
         fVar34 = fVar34 * fVar35;
         fVar36 = fVar36 + fVar37;
         fVar31 = fVar31 + fVar41;
         fVar39 = fVar39 + fVar32;
         fVar35 = fVar35 + fVar5;
         pfVar13[uVar8] = fVar36;
         pfVar12[uVar8] = fVar40;
         fVar38 = fVar38 + fVar34;
         pfVar25[uVar8] = fVar31;
         puVar26[uVar8] = fVar39;
         puVar24[uVar8] = fVar38;
         uVar8 = uVar8 + 1;
      }
 while ( param_2 != uVar8 );
   }

   fVar36 = 0.0;
   fVar35 = 0.0;
   lVar15 = 0;
   fVar40 = fVar35;
   fVar31 = fVar5;
   do {
      uVar8 = *(ulong*)( param_3 + lVar15 * 8 );
      iVar29 = (int)lVar15;
      uVar9 = uVar8 & 0xffff;
      iVar27 = (int)( uVar8 >> 0x10 );
      if (-1 < iVar27) goto LAB_00100411;
      iVar27 = -iVar27;
      iVar7 = (int)uVar9;
      if ((int)uVar9 <= iVar27) {
         iVar7 = iVar27;
      }

      if ((int)param_2 <= iVar7) goto LAB_00100411;
      fVar31 = pfVar12[uVar9] - pfVar12[iVar27];
      fVar40 = ( (float)puVar24[uVar9] + (float)puVar24[iVar27] ) * ( pfVar25[uVar9] + pfVar25[iVar27] ) - fVar31 * ( (float)puVar26[uVar9] - (float)puVar26[iVar27] );
      fVar35 = ( (float)puVar26[uVar9] - (float)puVar26[iVar27] ) * ( pfVar13[uVar9] + pfVar13[iVar27] ) - ( pfVar25[uVar9] + pfVar25[iVar27] ) * fVar31;
      fVar31 = ( pfVar13[uVar9] + pfVar13[iVar27] ) * ( (float)puVar24[uVar9] + (float)puVar24[iVar27] ) - fVar31 * fVar31;
      fVar38 = ( fVar35 * fVar36 + fVar40 ) / fVar31;
      if (fVar38 < 0.0) {
         fVar38 = 0.0;
      }

      lVar28 = lVar15 + 1;
      fVar36 = fVar36 + fVar5;
      *(float*)( param_5 + lVar15 * 4 ) = fVar38 - param_1;
      lVar15 = lVar28;
   }
 while ( (int)param_2 != lVar28 );
   iVar29 = iVar29 + 1;
   LAB_00100411:if (iVar29 < (int)param_2) {
      uVar8 = (long)iVar29;
      do {
         uVar9 = uVar8;
         lVar15 = *(long*)( param_3 + uVar9 * 8 );
         uVar6 = (uint)(ushort)lVar15;
         iVar29 = (int)( (ulong)lVar15 >> 0x10 );
         if (( (int)param_2 <= iVar29 || ( ( ulong )(lVar15 >> 0x10) >> 0x1f & 1 ) != 0 ) || ( (int)param_2 <= (int)uVar6 )) goto LAB_00100500;
         fVar31 = pfVar12[uVar6] - pfVar12[iVar29];
         fVar40 = ( (float)puVar24[uVar6] - (float)puVar24[iVar29] ) * ( pfVar25[uVar6] - pfVar25[iVar29] ) - fVar31 * ( (float)puVar26[uVar6] - (float)puVar26[iVar29] );
         fVar35 = ( (float)puVar26[uVar6] - (float)puVar26[iVar29] ) * ( pfVar13[uVar6] - pfVar13[iVar29] ) - ( pfVar25[uVar6] - pfVar25[iVar29] ) * fVar31;
         fVar31 = ( pfVar13[uVar6] - pfVar13[iVar29] ) * ( (float)puVar24[uVar6] - (float)puVar24[iVar29] ) - fVar31 * fVar31;
         fVar38 = ( fVar35 * fVar36 + fVar40 ) / fVar31;
         if (fVar38 < 0.0) {
            fVar38 = 0.0;
         }

         fVar36 = fVar36 + fVar5;
         *(float*)( param_5 + uVar9 * 4 ) = fVar38 - param_1;
         uVar8 = uVar9 + 1;
      }
 while ( (int)( uVar9 + 1 ) < (int)param_2 );
      uVar9 = ( ulong )((int)uVar9 + 1);
      LAB_00100500:iVar29 = (int)uVar9;
      if (iVar29 < (int)param_2) {
         pfVar10 = (float*)( param_5 + (long)iVar29 * 4 );
         do {
            fVar38 = ( fVar35 * fVar36 + fVar40 ) / fVar31;
            if (fVar38 < 0.0) {
               fVar38 = 0.0;
            }

            pfVar11 = pfVar10 + 1;
            fVar36 = fVar36 + fVar5;
            *pfVar10 = fVar38 - param_1;
            pfVar10 = pfVar11;
         }
 while ( (float*)( param_5 + ( ( ulong )(param_2 - iVar29) + (long)iVar29 ) * 4 ) != pfVar11 );
      }

   }

   if (0 < param_6) {
      iVar29 = param_6 >> 1;
      bVar1 = (int)param_2 <= iVar29;
      iVar27 = iVar29 - param_6;
      if (( -1 < iVar27 ) || ( bVar1 )) {
         fVar36 = 0.0;
         iVar14 = 0;
         iVar7 = iVar29;
      }
 else {
         lVar28 = (long)( iVar29 + 1 );
         fVar36 = 0.0;
         local_50 = (ulong)param_2;
         lVar15 = ( (long)param_6 - (long)iVar29 ) * 4;
         uVar8 = 1;
         do {
            fVar39 = pfVar12[lVar28 + -1] - *(float*)( (long)pfVar12 + lVar15 );
            fVar34 = (float)puVar24[lVar28 + -1] + *(float*)( (long)puVar24 + lVar15 );
            fVar38 = pfVar13[lVar28 + -1] + *(float*)( (long)pfVar13 + lVar15 );
            fVar35 = pfVar25[lVar28 + -1] + *(float*)( (long)pfVar25 + lVar15 );
            fVar31 = (float)puVar26[lVar28 + -1] - *(float*)( (long)puVar26 + lVar15 );
            fVar40 = fVar34 * fVar35 - fVar39 * fVar31;
            fVar35 = fVar31 * fVar38 - fVar35 * fVar39;
            fVar31 = fVar38 * fVar34 - fVar39 * fVar39;
            fVar38 = ( fVar35 * fVar36 + fVar40 ) / fVar31 - param_1;
            if (fVar38 < *(float*)( param_5 + -4 + uVar8 * 4 )) {
               *(float*)( param_5 + -4 + uVar8 * 4 ) = fVar38;
            }

            fVar36 = fVar36 + fVar5;
            iVar14 = (int)uVar8;
            if (local_50 == uVar8) break;
            uVar8 = uVar8 + 1;
            iVar7 = (int)lVar28;
            lVar28 = lVar28 + 1;
            lVar15 = lVar15 + -4;
         }
 while ( iVar27 + iVar14 < 0 && iVar7 < (int)param_2 );
         local_58 = iVar29;
         if ((int)param_2 <= iVar14) goto LAB_001007cd;
         iVar7 = iVar14 + iVar29;
         iVar27 = iVar7 - param_6;
         bVar1 = (int)param_2 <= iVar7;
      }

      if (( -1 < iVar27 ) && ( !bVar1 )) {
         iVar29 = iVar14 + 1 + iVar29;
         lVar15 = (long)( iVar14 + 1 );
         iVar30 = iVar29 - param_6;
         while (true) {
            fVar31 = pfVar12[iVar7] - pfVar12[iVar27];
            fVar40 = ( (float)puVar24[iVar7] - (float)puVar24[iVar27] ) * ( pfVar25[iVar7] - pfVar25[iVar27] ) - fVar31 * ( (float)puVar26[iVar7] - (float)puVar26[iVar27] );
            fVar35 = ( (float)puVar26[iVar7] - (float)puVar26[iVar27] ) * ( pfVar13[iVar7] - pfVar13[iVar27] ) - ( pfVar25[iVar7] - pfVar25[iVar27] ) * fVar31;
            fVar31 = ( pfVar13[iVar7] - pfVar13[iVar27] ) * ( (float)puVar24[iVar7] - (float)puVar24[iVar27] ) - fVar31 * fVar31;
            fVar38 = ( fVar35 * fVar36 + fVar40 ) / fVar31 - param_1;
            if (fVar38 < *(float*)( param_5 + -4 + lVar15 * 4 )) {
               *(float*)( param_5 + -4 + lVar15 * 4 ) = fVar38;
            }

            fVar36 = fVar36 + fVar5;
            iVar14 = (int)lVar15;
            if ((int)param_2 <= iVar14) break;
            lVar15 = lVar15 + 1;
            if (( iVar30 < 0 ) || ( bVar1 = (int)param_2 <= iVar29 ),iVar7 = iVar29,iVar27 = iVar30,iVar30 = iVar30 + 1,iVar29 = iVar29 + 1,bVar1) break;
         }
;
      }

      if (iVar14 < (int)param_2) {
         pfVar13 = (float*)( param_5 + (long)iVar14 * 4 );
         do {
            fVar38 = ( fVar35 * fVar36 + fVar40 ) / fVar31 - param_1;
            if (fVar38 < *pfVar13) {
               *pfVar13 = fVar38;
            }

            pfVar13 = pfVar13 + 1;
            fVar36 = fVar36 + fVar5;
         }
 while ( pfVar13 != (float*)( param_5 + ( ( ulong )(param_2 - iVar14) + (long)iVar14 ) * 4 ) );
      }

   }

   LAB_001007cd:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   *(undefined**)( puVar20 + lVar2 + -8 ) = &UNK_0010082e;
   local_54 = param_6;
   __stack_chk_fail();
}
void seed_chase(long param_1, int param_2, long param_3) {
   float *pfVar1;
   undefined4 *puVar2;
   float fVar3;
   undefined4 uVar4;
   long lVar5;
   undefined1 *puVar6;
   long lVar7;
   long lVar8;
   undefined4 *puVar9;
   long lVar10;
   undefined1 *puVar11;
   undefined1 *puVar13;
   long lVar15;
   long lVar16;
   ulong uVar17;
   ulong uVar18;
   long in_FS_OFFSET;
   float fVar19;
   float fVar20;
   undefined1 auStack_38[8];
   long local_30;
   undefined1 *puVar12;
   undefined1 *puVar14;
   puVar11 = auStack_38;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar17 = param_3 * 8 + 0x17;
   puVar12 = auStack_38;
   puVar13 = auStack_38;
   while (puVar12 != auStack_38 + -(uVar17 & 0xfffffffffffff000)) {
      puVar11 = puVar13 + -0x1000;
      *(undefined8*)( puVar13 + -8 ) = *(undefined8*)( puVar13 + -8 );
      puVar12 = puVar13 + -0x1000;
      puVar13 = puVar13 + -0x1000;
   }
;
   uVar17 = ( ulong )((uint)uVar17 & 0xff0);
   lVar5 = -uVar17;
   puVar13 = puVar11 + lVar5;
   puVar14 = puVar11 + lVar5;
   if (uVar17 != 0) {
      *(undefined8*)( puVar11 + -8 ) = *(undefined8*)( puVar11 + -8 );
   }

   uVar17 = param_3 * 4 + 0x17;
   uVar18 = ( ulong )(puVar11 + lVar5 + 0xf) & 0xfffffffffffffff0;
   puVar6 = puVar11 + lVar5;
   while (puVar14 != puVar11 + ( lVar5 - ( uVar17 & 0xfffffffffffff000 ) )) {
      puVar13 = puVar6 + -0x1000;
      *(undefined8*)( puVar6 + -8 ) = *(undefined8*)( puVar6 + -8 );
      puVar14 = puVar6 + -0x1000;
      puVar6 = puVar6 + -0x1000;
   }
;
   uVar17 = ( ulong )((uint)uVar17 & 0xff0);
   lVar5 = -uVar17;
   if (uVar17 != 0) {
      *(undefined8*)( puVar13 + -8 ) = *(undefined8*)( puVar13 + -8 );
   }

   lVar16 = 0;
   uVar17 = ( ulong )(puVar13 + lVar5 + 0xf) & 0xfffffffffffffff0;
   lVar8 = 0;
   if (0 < param_3) {
      do {
         fVar19 = *(float*)( param_1 + lVar8 * 4 );
         lVar7 = lVar16 * 4;
         if (lVar16 == 2) {
            lVar7 = 8;
            lVar16 = 2;
            goto LAB_00100974;
         }

         *(long*)( uVar18 + lVar16 * 8 ) = lVar8;
         lVar15 = lVar8 + 1;
         lVar16 = lVar16 + 1;
         *(float*)( uVar17 + lVar7 ) = fVar19;
         lVar8 = lVar15;
      }
 while ( param_3 != lVar15 );
      LAB_001009f0:lVar7 = 0;
      lVar8 = 0;
      do {
         if (( lVar16 + -1 <= lVar7 ) || ( fVar19 = *(float*)( uVar17 + 4 + lVar7 * 4 ) ),pfVar1 = (float*)( uVar17 + lVar7 * 4 ),fVar19 < *pfVar1 || fVar19 == *pfVar1) {
            lVar10 = *(long*)( uVar18 + lVar7 * 8 ) + (long)param_2 + 1;
         }
 else {
            lVar10 = *(long*)( uVar18 + 8 + lVar7 * 8 );
         }

         if (lVar15 <= lVar10) {
            lVar10 = lVar15;
         }

         if (lVar8 < lVar10) {
            puVar2 = (undefined4*)( param_1 + lVar10 * 4 );
            puVar9 = (undefined4*)( param_1 + lVar8 * 4 );
            uVar4 = *(undefined4*)( uVar17 + lVar7 * 4 );
            if (( (int)puVar2 - (int)puVar9 & 4U ) == 0) goto LAB_00100a50;
            *puVar9 = uVar4;
            for (puVar9 = puVar9 + 1; lVar8 = lVar10,puVar2 != puVar9; puVar9 = puVar9 + 2) {
               LAB_00100a50:*puVar9 = uVar4;
               puVar9[1] = uVar4;
            }

         }

         lVar7 = lVar7 + 1;
      }
 while ( lVar16 != lVar7 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   *(undefined**)( puVar13 + lVar5 + -8 ) = &UNK_00100ac5;
   __stack_chk_fail();
   LAB_00100974:fVar20 = *(float*)( ( uVar17 - 4 ) + lVar7 );
   if (fVar19 < fVar20) {
      lVar15 = lVar16 + 1;
   }
 else {
      do {
         lVar15 = lVar16;
         lVar10 = lVar7 * 2;
         if (*(long*)( ( uVar18 - 8 ) + lVar15 * 8 ) + (long)param_2 <= lVar8) {
            LAB_00100948:lVar16 = lVar15 + 1;
            LAB_0010094c:*(long*)( uVar18 + lVar10 ) = lVar8;
            *(float*)( uVar17 + lVar7 ) = fVar19;
            goto joined_r0x0010095d;
         }

         if (lVar15 == 1) {
            lVar16 = 2;
            lVar10 = 8;
            lVar7 = 4;
            goto LAB_0010094c;
         }

         fVar3 = *(float*)( ( uVar17 - 8 ) + lVar7 );
         if (( fVar3 < fVar20 ) || ( *(long*)( ( uVar18 - 0x10 ) + lVar7 * 2 ) + (long)param_2 <= lVar8 )) goto LAB_00100948;
         lVar7 = lVar7 + -4;
         lVar16 = lVar15 + -1;
         fVar20 = fVar3;
      }
 while ( fVar3 <= fVar19 );
   }

   *(long*)( uVar18 + lVar16 * 8 ) = lVar8;
   *(float*)( uVar17 + lVar7 ) = fVar19;
   lVar16 = lVar15;
   joined_r0x0010095d:lVar15 = lVar8 + 1;
   if (param_3 == lVar15) goto LAB_001009f0;
   lVar8 = lVar8 + 1;
   fVar19 = *(float*)( param_1 + lVar8 * 4 );
   lVar7 = lVar16 * 4;
   goto LAB_00100974;
}
void noise_normalize_isra_0(float *param_1, int param_2, long param_3, long param_4, long param_5, float *param_6, int param_7, int param_8, long param_9) {
   float *pfVar1;
   int *piVar2;
   long lVar3;
   undefined1 *puVar4;
   int iVar5;
   ulong uVar6;
   long lVar7;
   long lVar8;
   int iVar9;
   long lVar10;
   undefined1 *puVar11;
   float *pfVar13;
   float *pfVar14;
   float *pfVar15;
   long in_FS_OFFSET;
   float fVar16;
   undefined4 uVar17;
   double dVar18;
   ulong uVar19;
   ulong uVar20;
   float fVar21;
   float fVar22;
   undefined1 auStack_98[8];
   float *local_90;
   long local_88;
   float *local_80;
   long local_78;
   float *local_70;
   long local_68;
   float *local_60;
   float *local_58;
   long local_50;
   long local_40;
   undefined1 *puVar12;
   puVar11 = auStack_98;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = (long)param_8 * 8 + 0x17;
   puVar12 = auStack_98;
   puVar4 = auStack_98;
   while (puVar12 != auStack_98 + -(uVar6 & 0xfffffffffffff000)) {
      puVar11 = puVar4 + -0x1000;
      *(undefined8*)( puVar4 + -8 ) = *(undefined8*)( puVar4 + -8 );
      puVar12 = puVar4 + -0x1000;
      puVar4 = puVar4 + -0x1000;
   }
;
   uVar6 = ( ulong )((uint)uVar6 & 0xff0);
   lVar3 = -uVar6;
   if (uVar6 != 0) {
      *(undefined8*)( puVar11 + -8 ) = *(undefined8*)( puVar11 + -8 );
   }

   pfVar13 = (float*)( ( ulong )(puVar11 + lVar3 + 0xf) & 0xfffffffffffffff0 );
   if (param_1[0x7d] == 0.0) {
      iVar5 = param_8;
      if (0 < param_8) goto LAB_00100b75;
      LAB_00100d98:iVar5 = 0;
      if (param_8 < 1) goto LAB_00100d54;
   }
 else {
      iVar5 = (int)param_1[0x7e] - param_7;
      if (param_8 < (int)param_1[0x7e] - param_7) {
         iVar5 = param_8;
      }

      if (iVar5 < 1) goto LAB_00100d98;
      LAB_00100b75:lVar10 = 0;
      lVar8 = (long)iVar5 << 2;
      uVar6 = _LC8;
      uVar19 = _LC8;
      uVar20 = _LC6;
      do {
         if (param_6 != (float*)0x0) {
            while (*(int*)( (long)param_6 + lVar10 ) != 0) {
               lVar10 = lVar10 + 4;
               if (lVar8 == lVar10) goto LAB_00100c21;
            }
;
         }

         dVar18 = (double)( *(float*)( param_4 + lVar10 ) / *(float*)( param_5 + lVar10 ) );
         if (*(float*)( param_3 + lVar10 ) <= 0.0 && *(float*)( param_3 + lVar10 ) != 0.0) {
            if (dVar18 < 0.0) {
               local_68 = CONCAT44(local_68._4_4_, param_2);
               local_58 = (float*)CONCAT44(local_58._4_4_, iVar5);
               *(undefined8*)( puVar11 + lVar3 + -8 ) = 0x101026;
               local_80 = pfVar13;
               local_78 = param_9;
               local_70 = param_6;
               local_60 = param_1;
               local_50 = lVar8;
               dVar18 = sqrt(dVar18);
               param_1 = local_60;
               lVar8 = local_50;
               pfVar13 = local_80;
               param_9 = local_78;
               param_6 = local_70;
               uVar6 = _LC8;
               iVar5 = (int)local_58._0_4_;
               param_2 = (int)local_68;
               uVar19 = _LC8;
               uVar20 = _LC6;
            }
 else {
               dVar18 = SQRT(dVar18);
            }

            if ((double)( (ulong)dVar18 & uVar6 ) < _LC4) {
               dVar18 = (double)( ( ulong )(( (double)( (ulong)dVar18 & uVar6 ) + _LC4 ) - _LC4) | ~uVar6 & (ulong)dVar18 );
            }

            dVar18 = (double)( (ulong)dVar18 ^ uVar20 );
         }
 else {
            if (dVar18 < 0.0) {
               local_68 = CONCAT44(local_68._4_4_, param_2);
               local_58 = (float*)CONCAT44(local_58._4_4_, iVar5);
               *(undefined8*)( puVar11 + lVar3 + -8 ) = 0x100f4e;
               local_80 = pfVar13;
               local_78 = param_9;
               local_70 = param_6;
               local_60 = param_1;
               local_50 = lVar8;
               dVar18 = sqrt(dVar18);
               param_1 = local_60;
               lVar8 = local_50;
               pfVar13 = local_80;
               param_9 = local_78;
               param_6 = local_70;
               uVar6 = _LC8;
               iVar5 = (int)local_58._0_4_;
               param_2 = (int)local_68;
               uVar19 = _LC8;
               uVar20 = _LC6;
            }
 else {
               dVar18 = SQRT(dVar18);
            }

            if ((double)( (ulong)dVar18 & uVar19 ) < _LC4) {
               dVar18 = (double)( ( ulong )(( (double)( (ulong)dVar18 & uVar19 ) + _LC4 ) - _LC4) | ~uVar19 & (ulong)dVar18 );
            }

         }

         *(int*)( param_9 + lVar10 ) = (int)dVar18;
         lVar10 = lVar10 + 4;
      }
 while ( lVar8 != lVar10 );
      LAB_00100c21:if (param_8 <= iVar5) goto LAB_00100d54;
   }

   lVar8 = (long)iVar5;
   iVar9 = 0;
   pfVar14 = (float*)( param_4 + lVar8 * 4 );
   lVar10 = ( ulong )(uint)(param_8 - iVar5) + lVar8;
   fVar21 = 0.0;
   uVar6 = _LC8;
   uVar19 = _LC8;
   uVar20 = _LC6;
   do {
      while (param_6 != (float*)0x0) {
         if (param_6[lVar8] != 0.0) goto LAB_00100c94;
         fVar22 = *(float*)( param_5 + lVar8 * 4 );
         fVar16 = *pfVar14 / fVar22;
         if (( fVar16 < _LC7 ) && ( param_2 - param_7 <= (int)lVar8 )) goto LAB_00100c86;
         LAB_00100cc7:pfVar1 = (float*)( param_3 + lVar8 * 4 );
         dVar18 = (double)fVar16;
         pfVar15 = pfVar14;
         if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
            if (dVar18 < 0.0) {
               local_78 = CONCAT44(local_78._4_4_, param_2);
               local_58 = (float*)CONCAT44(local_58._4_4_, fVar21);
               local_50 = CONCAT44(local_50._4_4_, fVar22);
               *(undefined8*)( puVar11 + lVar3 + -8 ) = 0x101092;
               local_90 = pfVar13;
               local_88 = param_9;
               local_80 = param_6;
               local_70 = param_1;
               local_68 = lVar8;
               local_60 = pfVar14;
               dVar18 = sqrt(dVar18);
               param_1 = local_70;
               lVar8 = local_68;
               pfVar13 = local_90;
               param_9 = local_88;
               param_6 = local_80;
               pfVar15 = local_60;
               uVar6 = _LC8;
               param_2 = (int)local_78;
               uVar19 = _LC8;
               uVar20 = _LC6;
               fVar21 = local_58._0_4_;
               fVar22 = (float)local_50;
            }
 else {
               dVar18 = SQRT(dVar18);
            }

            if ((double)( (ulong)dVar18 & uVar6 ) < _LC4) {
               dVar18 = (double)( ( ulong )(( (double)( (ulong)dVar18 & uVar6 ) + _LC4 ) - _LC4) | ~uVar6 & (ulong)dVar18 );
            }

            dVar18 = (double)( (ulong)dVar18 ^ uVar20 );
         }
 else {
            if (dVar18 < 0.0) {
               local_78 = CONCAT44(local_78._4_4_, param_2);
               local_58 = (float*)CONCAT44(local_58._4_4_, fVar21);
               local_50 = CONCAT44(local_50._4_4_, fVar22);
               *(undefined8*)( puVar11 + lVar3 + -8 ) = 0x100fba;
               local_90 = pfVar13;
               local_88 = param_9;
               local_80 = param_6;
               local_70 = param_1;
               local_68 = lVar8;
               local_60 = pfVar14;
               dVar18 = sqrt(dVar18);
               param_1 = local_70;
               lVar8 = local_68;
               pfVar13 = local_90;
               param_9 = local_88;
               param_6 = local_80;
               pfVar15 = local_60;
               uVar6 = _LC8;
               param_2 = (int)local_78;
               uVar19 = _LC8;
               uVar20 = _LC6;
               fVar21 = local_58._0_4_;
               fVar22 = (float)local_50;
            }
 else {
               dVar18 = SQRT(dVar18);
            }

            if ((double)( (ulong)dVar18 & uVar19 ) < _LC4) {
               dVar18 = (double)( ( ulong )(( (double)( (ulong)dVar18 & uVar19 ) + _LC4 ) - _LC4) | ~uVar19 & (ulong)dVar18 );
            }

         }

         iVar5 = (int)dVar18;
         *(int*)( param_9 + lVar8 * 4 ) = iVar5;
         lVar8 = lVar8 + 1;
         pfVar14 = pfVar15 + 1;
         *pfVar15 = (float)( iVar5 * iVar5 ) * fVar22;
         if (lVar10 == lVar8) goto LAB_00100d4c;
      }
;
      fVar22 = *(float*)( param_5 + lVar8 * 4 );
      fVar16 = *pfVar14 / fVar22;
      if (_LC7 <= fVar16) goto LAB_00100cc7;
      LAB_00100c86:lVar7 = (long)iVar9;
      fVar21 = fVar21 + fVar16;
      iVar9 = iVar9 + 1;
      *(float**)( pfVar13 + lVar7 * 2 ) = pfVar14;
      LAB_00100c94:lVar8 = lVar8 + 1;
      pfVar14 = pfVar14 + 1;
   }
 while ( lVar10 != lVar8 );
   LAB_00100d4c:if (iVar9 != 0) {
      local_50 = CONCAT44(local_50._4_4_, fVar21);
      *(undefined8*)( puVar11 + lVar3 + -8 ) = 0x100e78;
      local_68 = param_9;
      local_60 = param_1;
      local_58 = pfVar13;
      qsort(pfVar13, (long)iVar9, 8, apsort);
      fVar21 = _LC1;
      if (0 < iVar9) {
         dVar18 = *(double*)( local_60 + 0x80 );
         pfVar13 = local_58;
         fVar22 = (float)local_50;
         do {
            lVar8 = (long)(int)( *(long*)pfVar13 - param_4 >> 2 );
            piVar2 = (int*)( local_68 + lVar8 * 4 );
            if (dVar18 <= (double)fVar22) {
               fVar22 = fVar22 - fVar21;
               uVar17 = *(undefined4*)( param_5 + lVar8 * 4 );
               *piVar2 = (int)(float)( *(uint*)( param_3 + lVar8 * 4 ) & 0x80000000 | 0x3f800000 );
            }
 else {
               *piVar2 = 0;
               uVar17 = 0;
            }

            pfVar13 = pfVar13 + 2;
            *(undefined4*)( lVar8 * 4 + param_4 ) = uVar17;
         }
 while ( local_58 + (long)iVar9 * 2 != pfVar13 );
      }

   }

   LAB_00100d54:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   *(code**)( puVar11 + lVar3 + -8 ) = setup_tone_curves;
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void *setup_tone_curves(float param_1, float param_2, float param_3, float *param_4, int param_5) {
   float *pfVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   undefined4 *puVar4;
   long lVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   undefined8 uVar14;
   undefined8 uVar15;
   undefined8 uVar16;
   undefined8 uVar17;
   undefined8 uVar18;
   undefined8 uVar19;
   undefined8 uVar20;
   undefined8 uVar21;
   undefined8 uVar22;
   undefined8 uVar23;
   undefined8 uVar24;
   undefined8 uVar25;
   undefined8 uVar26;
   undefined8 uVar27;
   undefined8 uVar28;
   undefined8 uVar29;
   bool bVar30;
   bool bVar31;
   bool bVar32;
   bool bVar33;
   int iVar34;
   ulong uVar35;
   undefined4 *puVar36;
   void *pvVar37;
   float *pfVar38;
   undefined4 *puVar39;
   undefined4 *puVar40;
   float *pfVar41;
   float *pfVar42;
   float *pfVar43;
   long lVar44;
   float *pfVar45;
   undefined1 *puVar46;
   undefined1 *puVar47;
   undefined1 *puVar49;
   long lVar50;
   float *pfVar51;
   int iVar52;
   float *pfVar53;
   long lVar54;
   float *pfVar55;
   long in_FS_OFFSET;
   uint uVar56;
   float fVar57;
   uint uVar62;
   float fVar63;
   double dVar58;
   double dVar59;
   double dVar60;
   double dVar61;
   uint uVar64;
   float fVar65;
   uint uVar66;
   float fVar67;
   uint uVar68;
   uint uVar70;
   double dVar69;
   uint uVar71;
   uint uVar72;
   int iVar73;
   int iVar74;
   int iVar75;
   double dVar76;
   undefined8 *local_7fc8;
   long local_7f98;
   long local_7f88;
   float *local_7f30;
   undefined8 local_7f28;
   undefined8 uStack_7f20;
   undefined8 local_7f18;
   undefined8 uStack_7f10;
   undefined8 local_7f08;
   undefined8 uStack_7f00;
   undefined8 local_7ef8;
   undefined8 uStack_7ef0;
   undefined8 local_7ee8;
   undefined8 uStack_7ee0;
   undefined8 local_7ed8;
   undefined8 uStack_7ed0;
   undefined8 local_7ec8;
   undefined8 uStack_7ec0;
   undefined8 local_7eb8;
   undefined8 uStack_7eb0;
   undefined8 local_7ea8;
   undefined8 uStack_7ea0;
   undefined8 local_7e98;
   undefined8 uStack_7e90;
   undefined8 local_7e88;
   undefined8 uStack_7e80;
   undefined8 local_7e78;
   undefined8 uStack_7e70;
   undefined8 local_7e68;
   undefined8 uStack_7e60;
   undefined8 local_7e58;
   undefined8 uStack_7e50;
   float local_7e48[56];
   float local_7d68[392];
   float local_7748[56];
   float local_7668[398];
   undefined1 local_7030[28656];
   long local_40;
   undefined1 *puVar48;
   puVar49 = &stack0xffffffffffffffd0;
   do {
      puVar46 = puVar49;
      *(undefined8*)( puVar46 + -0x1000 ) = *(undefined8*)( puVar46 + -0x1000 );
      puVar49 = puVar46 + -0x1000;
   }
 while ( puVar46 + -0x1000 != local_7030 );
   puVar47 = puVar46 + -0x1fc8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar35 = (long)param_5 * 4 + 0x17;
   puVar48 = puVar46 + -0x1fc8;
   puVar49 = puVar46 + -0x1fc8;
   while (puVar48 != puVar46 + ( -0x1fc8 - ( uVar35 & 0xfffffffffffff000 ) )) {
      puVar47 = puVar49 + -0x1000;
      *(undefined8*)( puVar49 + -8 ) = *(undefined8*)( puVar49 + -8 );
      puVar48 = puVar49 + -0x1000;
      puVar49 = puVar49 + -0x1000;
   }
;
   uVar35 = ( ulong )((uint)uVar35 & 0xff0);
   lVar5 = -uVar35;
   if (uVar35 != 0) {
      *(undefined8*)( puVar47 + -8 ) = *(undefined8*)( puVar47 + -8 );
   }

   puVar36 = (undefined4*)( ( ulong )(puVar47 + lVar5 + 0xf) & 0xfffffffffffffff0 );
   *(undefined8*)( puVar47 + lVar5 + -8 ) = 0x1011a9;
   pvVar37 = malloc(0x88);
   *(undefined8*)( puVar47 + lVar5 + -8 ) = 0x1011bf;
   memset(local_7748, 0, 0x7700);
   iVar34 = 0;
   lVar54 = 0;
   puVar49 = tonemasks;
   pfVar38 = local_7668;
   pfVar41 = local_7748;
   do {
      lVar44 = 0;
      iVar52 = iVar34;
      do {
         lVar50 = 0;
         fVar57 = _LC9;
         do {
            fVar63 = fVar57;
            if (iVar52 + (int)lVar50 < 0x58) {
               LAB_00101299:fVar57 = (float)( &ATH )[iVar52 + lVar50];
               if (fVar63 <= (float)( &ATH )[iVar52 + lVar50]) {
                  fVar57 = fVar63;
               }

            }
 else if (_LC10 < fVar57) {
               lVar50 = lVar50 + 1;
               fVar57 = _LC10;
               if (lVar50 == 4) break;
               fVar63 = _LC10;
               if (iVar52 + (int)lVar50 < 0x58) goto LAB_00101299;
            }

            lVar50 = lVar50 + 1;
         }
 while ( lVar50 != 4 );
         iVar52 = iVar52 + 1;
         *(float*)( (long)&local_7f28 + lVar44 * 4 ) = fVar57;
         lVar44 = lVar44 + 1;
      }
 while ( lVar44 != 0x38 );
      lVar44 = 0;
      do {
         puVar2 = (undefined8*)( lVar44 + (long)puVar49 );
         puVar3 = (undefined8*)( (long)pfVar41 + lVar44 + 0x1c0 );
         lVar44 = lVar44 + 0xe0;
         uVar6 = puVar2[1];
         uVar7 = puVar2[0xc];
         uVar8 = puVar2[0xd];
         *puVar3 = *puVar2;
         puVar3[1] = uVar6;
         uVar6 = puVar2[2];
         uVar9 = puVar2[3];
         puVar3[0xc] = uVar7;
         puVar3[0xd] = uVar8;
         for (int i = 0; i < 3; i++) {
            uVar7 = puVar2[( 4*i + 16 )];
            uVar8 = puVar2[( 4*i + 17 )];
            puVar3[( 2*i + 2 )] = uVar6;
            puVar3[( 2*i + 3 )] = uVar9;
            uVar6 = puVar2[( 2*i + 4 )];
            uVar9 = puVar2[( 2*i + 5 )];
            puVar3[( 4*i + 16 )] = uVar7;
            puVar3[( 4*i + 17 )] = uVar8;
         }

         puVar3[8] = uVar6;
         puVar3[9] = uVar9;
         for (int i = 0; i < 5; i++) {
            uVar6 = puVar2[( 4*i + 11 )];
            puVar3[( 4*i + 10 )] = puVar2[( 4*i + 10 )];
            puVar3[( 4*i + 11 )] = uVar6;
         }

      }
 while ( lVar44 != 0x540 );
      uVar6 = *(undefined8*)( (long)puVar49 + 0xa0 );
      uVar7 = *(undefined8*)( (long)puVar49 + 0xa8 );
      uVar8 = *(undefined8*)( (long)puVar49 + 0x50 );
      uVar9 = *(undefined8*)( (long)puVar49 + 0x58 );
      pfVar1 = pfVar38 + 0x1c0;
      uVar10 = *(undefined8*)( (long)puVar49 + 0x60 );
      uVar11 = *(undefined8*)( (long)puVar49 + 0x68 );
      uVar12 = *(undefined8*)( (long)puVar49 + 0x70 );
      uVar13 = *(undefined8*)( (long)puVar49 + 0x78 );
      uVar14 = *(undefined8*)puVar49;
      uVar15 = *(undefined8*)( (long)puVar49 + 8 );
      uVar16 = *(undefined8*)( (long)puVar49 + 0x10 );
      uVar17 = *(undefined8*)( (long)puVar49 + 0x18 );
      *(undefined8*)( pfVar41 + 0x14 ) = uVar8;
      *(undefined8*)( pfVar41 + 0x16 ) = uVar9;
      uVar18 = *(undefined8*)( (long)puVar49 + 0x20 );
      uVar19 = *(undefined8*)( (long)puVar49 + 0x28 );
      uVar20 = *(undefined8*)( (long)puVar49 + 0x40 );
      uVar21 = *(undefined8*)( (long)puVar49 + 0x48 );
      *(undefined8*)( pfVar41 + 0x28 ) = uVar6;
      *(undefined8*)( pfVar41 + 0x2a ) = uVar7;
      uVar22 = *(undefined8*)( (long)puVar49 + 0xb0 );
      uVar23 = *(undefined8*)( (long)puVar49 + 0xb8 );
      uVar24 = *(undefined8*)( (long)puVar49 + 0x80 );
      uVar25 = *(undefined8*)( (long)puVar49 + 0x88 );
      uVar26 = *(undefined8*)( (long)puVar49 + 0x90 );
      uVar27 = *(undefined8*)( (long)puVar49 + 0x98 );
      uVar28 = *(undefined8*)( (long)puVar49 + 0x30 );
      uVar29 = *(undefined8*)( (long)puVar49 + 0x38 );
      *(undefined8*)( pfVar41 + 0x18 ) = uVar10;
      *(undefined8*)( pfVar41 + 0x1a ) = uVar11;
      *(undefined8*)( pfVar41 + 0x2c ) = uVar22;
      *(undefined8*)( pfVar41 + 0x2e ) = uVar23;
      uVar22 = *(undefined8*)( (long)puVar49 + 0xc0 );
      uVar23 = *(undefined8*)( (long)puVar49 + 200 );
      *(undefined8*)( pfVar41 + 0x1c ) = uVar12;
      *(undefined8*)( pfVar41 + 0x1e ) = uVar13;
      *(undefined8*)( pfVar41 + 0x30 ) = uVar22;
      *(undefined8*)( pfVar41 + 0x32 ) = uVar23;
      uVar22 = *(undefined8*)( (long)puVar49 + 0xd0 );
      uVar23 = *(undefined8*)( (long)puVar49 + 0xd8 );
      *(undefined8*)pfVar41 = uVar14;
      *(undefined8*)( pfVar41 + 2 ) = uVar15;
      *(undefined8*)( pfVar41 + 4 ) = uVar16;
      *(undefined8*)( pfVar41 + 6 ) = uVar17;
      *(undefined8*)( pfVar41 + 8 ) = uVar18;
      *(undefined8*)( pfVar41 + 10 ) = uVar19;
      *(undefined8*)( pfVar41 + 0xc ) = uVar28;
      *(undefined8*)( pfVar41 + 0xe ) = uVar29;
      *(undefined8*)( pfVar41 + 0x10 ) = uVar20;
      *(undefined8*)( pfVar41 + 0x12 ) = uVar21;
      *(undefined8*)( pfVar41 + 0x20 ) = uVar24;
      *(undefined8*)( pfVar41 + 0x22 ) = uVar25;
      *(undefined8*)( pfVar41 + 0x24 ) = uVar26;
      *(undefined8*)( pfVar41 + 0x26 ) = uVar27;
      *(undefined8*)( pfVar41 + 0x34 ) = uVar22;
      *(undefined8*)( pfVar41 + 0x36 ) = uVar23;
      *(undefined8*)pfVar38 = uVar14;
      *(undefined8*)( pfVar38 + 2 ) = uVar15;
      *(undefined8*)( pfVar38 + 4 ) = uVar16;
      *(undefined8*)( pfVar38 + 6 ) = uVar17;
      *(undefined8*)( pfVar38 + 8 ) = uVar18;
      *(undefined8*)( pfVar38 + 10 ) = uVar19;
      *(undefined8*)( pfVar38 + 0xc ) = uVar28;
      *(undefined8*)( pfVar38 + 0xe ) = uVar29;
      *(undefined8*)( pfVar38 + 0x1c ) = uVar12;
      *(undefined8*)( pfVar38 + 0x1e ) = uVar13;
      uVar12 = *(undefined8*)( (long)puVar49 + 0xb0 );
      uVar13 = *(undefined8*)( (long)puVar49 + 0xb8 );
      *(undefined8*)( pfVar38 + 0x14 ) = uVar8;
      *(undefined8*)( pfVar38 + 0x16 ) = uVar9;
      *(undefined8*)( pfVar38 + 0x18 ) = uVar10;
      *(undefined8*)( pfVar38 + 0x1a ) = uVar11;
      *(undefined8*)( pfVar38 + 0x2c ) = uVar12;
      *(undefined8*)( pfVar38 + 0x2e ) = uVar13;
      *(undefined8*)( pfVar38 + 0x28 ) = uVar6;
      *(undefined8*)( pfVar38 + 0x2a ) = uVar7;
      uVar6 = *(undefined8*)( (long)puVar49 + 0xc0 );
      uVar7 = *(undefined8*)( (long)puVar49 + 200 );
      *(undefined8*)( pfVar38 + 0x10 ) = uVar20;
      *(undefined8*)( pfVar38 + 0x12 ) = uVar21;
      *(undefined8*)( pfVar38 + 0x20 ) = uVar24;
      *(undefined8*)( pfVar38 + 0x22 ) = uVar25;
      *(undefined8*)( pfVar38 + 0x24 ) = uVar26;
      *(undefined8*)( pfVar38 + 0x26 ) = uVar27;
      *(undefined8*)( pfVar38 + 0x30 ) = uVar6;
      *(undefined8*)( pfVar38 + 0x32 ) = uVar7;
      *(undefined8*)( pfVar38 + 0x34 ) = uVar22;
      *(undefined8*)( pfVar38 + 0x36 ) = uVar23;
      pfVar45 = pfVar38;
      do {
         pfVar51 = pfVar45 + -0x38;
         iVar52 = __LC11;
         iVar73 = _UNK_0010a1b4;
         iVar74 = _UNK_0010a1b8;
         iVar75 = _UNK_0010a1bc;
         do {
            pfVar53 = pfVar51;
            uVar56 = __LC17 - iVar52;
            uVar62 = _UNK_0010a1d4 - iVar73;
            uVar64 = _UNK_0010a1d8 - iVar74;
            uVar66 = _UNK_0010a1dc - iVar75;
            iVar52 = iVar52 + __LC16;
            iVar73 = iVar73 + _UNK_0010a1c4;
            iVar74 = iVar74 + _UNK_0010a1c8;
            iVar75 = iVar75 + _UNK_0010a1cc;
            uVar68 = (int)uVar56 >> 0x1f;
            uVar70 = (int)uVar62 >> 0x1f;
            uVar71 = (int)uVar64 >> 0x1f;
            uVar72 = (int)uVar66 >> 0x1f;
            fVar57 = (float)(int)( ( uVar56 ^ uVar68 ) - uVar68 ) * param_3 + param_2;
            fVar63 = (float)(int)( ( uVar62 ^ uVar70 ) - uVar70 ) * param_3 + param_2;
            fVar65 = (float)(int)( ( uVar64 ^ uVar71 ) - uVar71 ) * param_3 + param_2;
            fVar67 = (float)(int)( ( uVar66 ^ uVar72 ) - uVar72 ) * param_3 + param_2;
            bVar32 = 0.0 < fVar57 && param_2 < 0.0;
            bVar33 = 0.0 < fVar63 && param_2 < 0.0;
            bVar30 = 0.0 < fVar65 && param_2 < 0.0;
            bVar31 = 0.0 < fVar67 && param_2 < 0.0;
            *pfVar53 = (float)( ~-(uint)(bVar32 != (fVar57 < 0.0 && 0.0 < param_2 != bVar32)) & (uint)fVar57 ) + *pfVar53;
            pfVar53[1] = (float)( ~-(uint)(bVar33 != (fVar63 < 0.0 && 0.0 < param_2 != bVar33)) & (uint)fVar63 ) + pfVar53[1];
            pfVar53[2] = (float)( ~-(uint)(bVar30 != (fVar65 < 0.0 && 0.0 < param_2 != bVar30)) & (uint)fVar65 ) + pfVar53[2];
            pfVar53[3] = (float)( ~-(uint)(bVar31 != (fVar67 < 0.0 && 0.0 < param_2 != bVar31)) & (uint)fVar67 ) + pfVar53[3];
            pfVar51 = pfVar53 + 4;
         }
 while ( pfVar53 + 4 != pfVar45 );
         pfVar45 = pfVar53 + 0x3c;
      }
 while ( pfVar45 != pfVar1 );
      fVar57 = *param_4;
      iVar52 = 0;
      pfVar45 = pfVar38;
      pfVar51 = local_7e48;
      pfVar53 = pfVar41;
      pfVar55 = local_7d68;
      dVar76 = _LC12;
      while (true) {
         fVar63 = (float)( ( ( (double)fVar57 + _LC18 ) - dVar76 ) - _LC20 );
         pfVar43 = pfVar53;
         do {
            pfVar42 = pfVar43 + 4;
            *pfVar43 = *pfVar43 + fVar63;
            for (int i = 0; i < 3; i++) {
               pfVar43[( i + 1 )] = pfVar43[( i + 1 )] + fVar63;
            }

            pfVar43 = pfVar42;
         }
 while ( pfVar45 != pfVar42 );
         *(undefined8*)pfVar51 = local_7f28;
         *(undefined8*)( pfVar51 + 2 ) = uStack_7f20;
         *(undefined8*)( pfVar51 + 4 ) = local_7f18;
         *(undefined8*)( pfVar51 + 6 ) = uStack_7f10;
         *(undefined8*)( pfVar51 + 0x20 ) = local_7ea8;
         *(undefined8*)( pfVar51 + 0x22 ) = uStack_7ea0;
         *(undefined8*)( pfVar51 + 8 ) = local_7f08;
         *(undefined8*)( pfVar51 + 10 ) = uStack_7f00;
         *(undefined8*)( pfVar51 + 0x24 ) = local_7e98;
         *(undefined8*)( pfVar51 + 0x26 ) = uStack_7e90;
         *(undefined8*)( pfVar51 + 0xc ) = local_7ef8;
         *(undefined8*)( pfVar51 + 0xe ) = uStack_7ef0;
         *(undefined8*)( pfVar51 + 0x28 ) = local_7e88;
         *(undefined8*)( pfVar51 + 0x2a ) = uStack_7e80;
         *(undefined8*)( pfVar51 + 0x10 ) = local_7ee8;
         *(undefined8*)( pfVar51 + 0x12 ) = uStack_7ee0;
         *(undefined8*)( pfVar51 + 0x2c ) = local_7e78;
         *(undefined8*)( pfVar51 + 0x2e ) = uStack_7e70;
         *(undefined8*)( pfVar51 + 0x14 ) = local_7ed8;
         *(undefined8*)( pfVar51 + 0x16 ) = uStack_7ed0;
         *(undefined8*)( pfVar51 + 0x30 ) = local_7e68;
         *(undefined8*)( pfVar51 + 0x32 ) = uStack_7e60;
         *(undefined8*)( pfVar51 + 0x18 ) = local_7ec8;
         *(undefined8*)( pfVar51 + 0x1a ) = uStack_7ec0;
         *(undefined8*)( pfVar51 + 0x34 ) = local_7e58;
         *(undefined8*)( pfVar51 + 0x36 ) = uStack_7e50;
         *(undefined8*)( pfVar51 + 0x1c ) = local_7eb8;
         *(undefined8*)( pfVar51 + 0x1e ) = uStack_7eb0;
         fVar63 = (float)( ( _LC18 - (double)( (float)iVar52 * __LC21 ) ) - _LC20 );
         pfVar43 = pfVar51;
         do {
            pfVar42 = pfVar43 + 4;
            *pfVar43 = *pfVar43 + fVar63;
            for (int i = 0; i < 3; i++) {
               pfVar43[( i + 1 )] = pfVar43[( i + 1 )] + fVar63;
            }

            pfVar43 = pfVar42;
         }
 while ( pfVar42 != pfVar55 );
         lVar44 = 0;
         do {
            fVar63 = *(float*)( (long)pfVar53 + lVar44 );
            if (*(float*)( (long)pfVar51 + lVar44 ) <= fVar63 && fVar63 != *(float*)( (long)pfVar51 + lVar44 )) {
               *(float*)( (long)pfVar51 + lVar44 ) = fVar63;
            }

            lVar44 = lVar44 + 4;
         }
 while ( lVar44 != 0xe0 );
         iVar52 = iVar52 + 1;
         pfVar53 = pfVar53 + 0x38;
         pfVar51 = pfVar51 + 0x38;
         pfVar55 = pfVar55 + 0x38;
         pfVar45 = pfVar45 + 0x38;
         pfVar43 = local_7d68;
         if (iVar52 == 8) break;
         dVar76 = _LC12;
         if (iVar52 != 1) {
            dVar76 = (double)iVar52 * __LC19;
         }

      }
;
      do {
         lVar44 = 0;
         do {
            fVar57 = *(float*)( (long)pfVar43 + lVar44 + -0xe0 );
            if (fVar57 < *(float*)( (long)pfVar43 + lVar44 )) {
               *(float*)( (long)pfVar43 + lVar44 ) = fVar57;
            }

            lVar44 = lVar44 + 4;
         }
 while ( lVar44 != 0xe0 );
         lVar44 = 0;
         do {
            if (*(float*)( (long)pfVar43 + lVar44 ) < *(float*)( (long)pfVar38 + lVar44 )) {
               *(float*)( (long)pfVar38 + lVar44 ) = *(float*)( (long)pfVar43 + lVar44 );
            }

            lVar44 = lVar44 + 4;
         }
 while ( lVar44 != 0xe0 );
         pfVar43 = pfVar43 + 0x38;
         pfVar38 = pfVar38 + 0x38;
      }
 while ( pfVar43 != local_7748 );
      lVar54 = lVar54 + 0x700;
      param_4 = param_4 + 1;
      iVar34 = iVar34 + 4;
      pfVar41 = pfVar41 + 0x1c0;
      puVar49 = (undefined1*)( (long)puVar49 + 0x540 );
      pfVar38 = pfVar1;
   }
 while ( lVar54 != 0x7700 );
   dVar76 = (double)param_1;
   local_7f98 = 0;
   puVar4 = puVar36 + param_5;
   local_7f30 = local_7748;
   do {
      *(undefined8*)( puVar47 + lVar5 + -8 ) = 0x1018c9;
      local_7fc8 = (undefined8*)malloc(0x40);
      dVar58 = (double)(int)local_7f98 * _LC22;
      *(undefined8**)( (long)pvVar37 + local_7f98 * 8 ) = local_7fc8;
      *(undefined8*)( puVar47 + lVar5 + -8 ) = 0x101913;
      dVar59 = exp(( _LC23 + dVar58 ) * __LC24);
      dVar59 = dVar59 / dVar76;
      if ((double)( _LC8 & (ulong)dVar59 ) < _LC4) {
         dVar59 = (double)( ( ulong )((double)(long)dVar59 - (double)( -(ulong)(dVar59 < (double)(long)dVar59) & (ulong)_LC25 )) | ~_LC8 & (ulong)dVar59 );
      }

      *(undefined8*)( puVar47 + lVar5 + -8 ) = 0x10199b;
      dVar60 = log((double)( (float)(int)dVar59 * param_1 + _LC1 ));
      dVar60 = _LC26 * dVar60 - _LC23;
      dVar60 = dVar60 + dVar60;
      if ((double)( _LC8 & (ulong)dVar60 ) < _LC4) {
         dVar60 = (double)( ( ulong )((double)(long)dVar60 + (double)( -(ulong)((double)(long)dVar60 < dVar60) & (ulong)_LC25 )) | ~_LC8 & (ulong)dVar60 );
      }

      *(undefined8*)( puVar47 + lVar5 + -8 ) = 0x101a32;
      dVar59 = log((double)( (float)( (int)dVar59 + 1 ) * param_1 ));
      dVar59 = dVar59 * _LC26 - _LC23;
      dVar59 = dVar59 + dVar59;
      if ((double)( _LC8 & (ulong)dVar59 ) < _LC4) {
         dVar59 = (double)( ( ulong )((double)(long)dVar59 - (double)( -(ulong)(dVar59 < (double)(long)dVar59) & (ulong)_LC25 )) | ~_LC8 & (ulong)dVar59 );
      }

      local_7f88 = 0;
      iVar34 = (int)dVar60;
      if ((int)local_7f98 < (int)dVar60) {
         iVar34 = (int)local_7f98;
      }

      if (iVar34 < 0) {
         iVar34 = 0;
      }

      iVar52 = 0x10;
      if ((int)dVar59 < 0x11) {
         iVar52 = (int)dVar59;
      }

      do {
         *(undefined8*)( puVar47 + lVar5 + -8 ) = 0x101b27;
         pfVar38 = (float*)malloc(0xe8);
         *local_7fc8 = pfVar38;
         if (0 < param_5) {
            puVar39 = puVar36;
            if (( (ulong)puVar4 & 4 ) != 0) {
               *puVar36 = 0x4479c000;
               puVar39 = puVar36 + 1;
               if (puVar4 == puVar36 + 1) goto LAB_00101b75;
            }

            do {
               *puVar39 = 0x4479c000;
               puVar40 = puVar39 + 2;
               puVar39[1] = 0x4479c000;
               puVar39 = puVar40;
            }
 while ( puVar4 != puVar40 );
         }

         LAB_00101b75:dVar59 = _LC29;
         if (iVar34 <= iVar52) {
            lVar54 = (long)local_7748 + local_7f88 + (long)iVar34 * 0x700;
            iVar73 = iVar34;
            do {
               lVar44 = 0;
               dVar60 = (double)iVar73 * _LC22;
               iVar74 = 0;
               do {
                  while (true) {
                     dVar69 = (double)(int)lVar44 * __LC27 + dVar60;
                     *(undefined8*)( puVar47 + lVar5 + -8 ) = 0x101c41;
                     dVar61 = exp(( ( dVar69 - __LC28 ) + _LC23 ) * __LC24);
                     *(undefined8*)( puVar47 + lVar5 + -8 ) = 0x101c72;
                     dVar69 = exp(( _LC23 + ( dVar69 - dVar59 ) ) * __LC24);
                     iVar75 = (int)( dVar61 / dVar76 );
                     if ((int)( dVar61 / dVar76 ) < 0) {
                        iVar75 = 0;
                     }

                     if (param_5 <= iVar74) {
                        iVar74 = param_5;
                     }

                     if (iVar75 <= iVar74) {
                        iVar74 = iVar75;
                     }

                     iVar75 = (int)( dVar69 / dVar76 + _LC25 );
                     if (iVar75 < 0) {
                        iVar75 = 0;
                     }

                     if (param_5 < iVar75) {
                        iVar75 = param_5;
                     }

                     if (iVar75 <= iVar74) break;
                     fVar57 = *(float*)( lVar54 + lVar44 * 4 );
                     pfVar41 = (float*)( puVar36 + iVar74 );
                     do {
                        if (fVar57 < *pfVar41) {
                           *pfVar41 = fVar57;
                        }

                        pfVar41 = pfVar41 + 1;
                     }
 while ( pfVar41 != (float*)( puVar36 + ( ulong )(uint)(iVar75 - iVar74) + (long)iVar74 ) );
                     lVar44 = lVar44 + 1;
                     iVar74 = iVar75;
                     if (lVar44 == 0x38) goto LAB_00101d14;
                  }
;
                  lVar44 = lVar44 + 1;
               }
 while ( lVar44 != 0x38 );
               LAB_00101d14:if (iVar74 < param_5) {
                  fVar57 = *(float*)( lVar54 + 0xdc );
                  pfVar41 = (float*)( puVar36 + iVar74 );
                  do {
                     if (fVar57 < *pfVar41) {
                        *pfVar41 = fVar57;
                     }

                     pfVar41 = pfVar41 + 1;
                  }
 while ( pfVar41 != (float*)( puVar36 + ( ulong )(uint)(param_5 - iVar74) + (long)iVar74 ) );
               }

               iVar73 = iVar73 + 1;
               lVar54 = lVar54 + 0x700;
            }
 while ( iVar73 != iVar52 + 1 );
         }

         dVar60 = _LC29;
         dVar59 = _LC25;
         if (local_7f98 != 0x10) {
            lVar54 = 0;
            iVar73 = 0;
            do {
               while (true) {
                  dVar69 = (double)(int)lVar54 * __LC27 + dVar58;
                  *(undefined8*)( puVar47 + lVar5 + -8 ) = 0x101e1c;
                  dVar61 = exp(( ( dVar69 - __LC28 ) + _LC23 ) * __LC24);
                  *(undefined8*)( puVar47 + lVar5 + -8 ) = 0x101e4d;
                  dVar69 = exp(( _LC23 + ( dVar69 - dVar60 ) ) * __LC24);
                  iVar74 = (int)( dVar61 / dVar76 );
                  if (iVar74 < 0) {
                     iVar74 = 0;
                  }

                  iVar75 = iVar73;
                  if (param_5 <= iVar73) {
                     iVar75 = param_5;
                  }

                  iVar73 = iVar74;
                  if (iVar75 < iVar74) {
                     iVar73 = iVar75;
                  }

                  iVar74 = (int)( dVar69 / dVar76 + dVar59 );
                  if (iVar74 < 0) {
                     iVar74 = 0;
                  }

                  if (param_5 < iVar74) {
                     iVar74 = param_5;
                  }

                  if (iVar74 <= iVar73) break;
                  fVar57 = *(float*)( (long)( local_7f30 + 0x1c0 ) + lVar54 * 4 + local_7f88 );
                  pfVar41 = (float*)( puVar36 + iVar73 );
                  do {
                     if (fVar57 < *pfVar41) {
                        *pfVar41 = fVar57;
                     }

                     pfVar41 = pfVar41 + 1;
                  }
 while ( pfVar41 != (float*)( puVar36 + ( ulong )(uint)(iVar74 - iVar73) + (long)iVar73 ) );
                  lVar54 = lVar54 + 1;
                  iVar73 = iVar74;
                  if (lVar54 == 0x38) goto LAB_00101ee4;
               }
;
               lVar54 = lVar54 + 1;
            }
 while ( lVar54 != 0x38 );
            LAB_00101ee4:if (iVar73 < param_5) {
               fVar57 = *(float*)( (long)local_7f30 + local_7f88 + 0x7dc );
               pfVar41 = (float*)( puVar36 + iVar73 );
               do {
                  if (fVar57 < *pfVar41) {
                     *pfVar41 = fVar57;
                  }

                  pfVar41 = pfVar41 + 1;
               }
 while ( (float*)( puVar36 + ( ulong )(uint)(param_5 - iVar73) + (long)iVar73 ) != pfVar41 );
            }

         }

         lVar54 = 0;
         do {
            *(undefined8*)( puVar47 + lVar5 + -8 ) = 0x101f75;
            dVar59 = exp(( ( ( (double)(int)lVar54 * __LC27 + dVar58 ) - __LC30 ) + _LC23 ) * __LC24);
            iVar73 = (int)( dVar59 / dVar76 );
            fVar57 = _LC13;
            if (( -1 < iVar73 ) && ( iVar73 < param_5 )) {
               fVar57 = (float)puVar36[iVar73];
            }

            pfVar38[lVar54 + 2] = fVar57;
            lVar54 = lVar54 + 1;
         }
 while ( lVar54 != 0x38 );
         lVar54 = 0;
         do {
            if (__LC31 < pfVar38[lVar54 + 2]) {
               fVar57 = (float)(int)lVar54;
               break;
            }

            lVar54 = lVar54 + 1;
            fVar57 = _LC14;
         }
 while ( lVar54 != 0x10 );
         *pfVar38 = fVar57;
         lVar54 = 0x37;
         do {
            if (__LC31 < pfVar38[lVar54 + 2]) {
               fVar57 = (float)(int)lVar54;
               break;
            }

            lVar54 = lVar54 + -1;
            fVar57 = _LC15;
         }
 while ( lVar54 != 0x11 );
         local_7f88 = local_7f88 + 0xe0;
         local_7fc8 = local_7fc8 + 1;
         pfVar38[1] = fVar57;
      }
 while ( local_7f88 != 0x700 );
      local_7f98 = local_7f98 + 1;
      local_7f30 = local_7f30 + 0x1c0;
      if (local_7f98 == 0x11) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return pvVar37;
         }

         /* WARNING: Subroutine does not return */
         *(undefined**)( puVar47 + lVar5 + -8 ) = &UNK_001020e6;
         __stack_chk_fail();
      }

   }
 while ( true );
}


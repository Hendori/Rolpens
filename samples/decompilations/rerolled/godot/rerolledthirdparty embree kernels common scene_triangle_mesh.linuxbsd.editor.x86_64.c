/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* embree::TriangleMesh::interpolate(RTCInterpolateArguments const*) */void embree::TriangleMesh::interpolate(TriangleMesh *this, RTCInterpolateArguments *param_1) {
   uint *puVar1;
   float fVar2;
   float fVar3;
   uint uVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   uint uVar10;
   uint uVar11;
   uint uVar12;
   uint uVar13;
   int iVar14;
   int iVar15;
   int iVar16;
   int iVar17;
   long *plVar18;
   long lVar19;
   long lVar20;
   long lVar21;
   int iVar22;
   ulong uVar23;
   uint uVar24;
   uint *puVar25;
   ulong uVar26;
   long lVar27;
   uint uVar28;
   uint uVar29;
   uint uVar30;
   uint uVar31;
   uint uVar32;
   uint uVar33;
   uint uVar34;
   uint uVar35;
   uint uVar36;
   uint uVar37;
   uint uVar38;
   float fVar39;
   float fVar40;
   float fVar41;
   float fVar42;
   float fVar43;
   iVar17 = _UNK_00103aec;
   iVar16 = _UNK_00103ae8;
   iVar15 = _UNK_00103ae4;
   iVar14 = __LC0;
   lVar21 = *(long*)( param_1 + 0x30 );
   uVar24 = *(uint*)( param_1 + 8 );
   fVar2 = *(float*)( param_1 + 0xc );
   fVar3 = *(float*)( param_1 + 0x10 );
   lVar5 = *(long*)( param_1 + 0x20 );
   lVar6 = *(long*)( param_1 + 0x28 );
   lVar7 = *(long*)( param_1 + 0x38 );
   lVar8 = *(long*)( param_1 + 0x40 );
   lVar9 = *(long*)( param_1 + 0x48 );
   uVar4 = *(uint*)( param_1 + 0x50 );
   if (*(int*)( param_1 + 0x14 ) == 2) {
      plVar18 = (long*)( ( ulong ) * (uint*)( param_1 + 0x18 ) * 0x30 + *(long*)( this + 0xf0 ) );
      lVar27 = *plVar18;
      uVar29 = *(uint*)( plVar18 + 1 );
   }
 else {
      plVar18 = (long*)( ( ulong ) * (uint*)( param_1 + 0x18 ) * 0x30 + *(long*)( this + 0xd0 ) );
      lVar27 = *plVar18;
      uVar29 = *(uint*)( plVar18 + 1 );
   }

   uVar26 = (ulong)uVar29;
   if (uVar4 != 0) {
      if (lVar5 == 0) {
         if (lVar6 != 0) {
            uVar23 = 0;
            do {
               iVar22 = (int)uVar23;
               lVar20 = uVar23 * 4;
               puVar25 = (uint*)( *(long*)( this + 0x60 ) * (ulong)uVar24 + *(long*)( this + 0x58 ) );
               lVar5 = lVar27 + lVar20;
               uVar36 = -(uint)(iVar22 + iVar14 < (int)uVar4);
               uVar31 = -(uint)(iVar22 + iVar15 < (int)uVar4);
               uVar34 = -(uint)(iVar22 + iVar16 < (int)uVar4);
               uVar37 = -(uint)(iVar22 + iVar17 < (int)uVar4);
               puVar1 = (uint*)( lVar5 + *puVar25 * uVar26 );
               uVar29 = *puVar1;
               uVar32 = puVar1[1];
               uVar35 = puVar1[2];
               uVar38 = puVar1[3];
               puVar1 = (uint*)( lVar5 + puVar25[1] * uVar26 );
               uVar10 = puVar1[1];
               uVar11 = puVar1[2];
               uVar12 = puVar1[3];
               puVar25 = (uint*)( lVar5 + puVar25[2] * uVar26 );
               uVar13 = *puVar25;
               uVar28 = puVar25[1];
               uVar30 = puVar25[2];
               uVar33 = puVar25[3];
               puVar25 = (uint*)( lVar6 + lVar20 );
               *puVar25 = ( uint )((float)( *puVar1 & uVar36 ) - (float)( uVar29 & uVar36 )) & uVar36 | ~uVar36 & *puVar25;
               puVar25[1] = ( uint )((float)( uVar10 & uVar31 ) - (float)( uVar32 & uVar31 )) & uVar31 | ~uVar31 & puVar25[1];
               puVar25[2] = ( uint )((float)( uVar11 & uVar34 ) - (float)( uVar35 & uVar34 )) & uVar34 | ~uVar34 & puVar25[2];
               puVar25[3] = ( uint )((float)( uVar12 & uVar37 ) - (float)( uVar38 & uVar37 )) & uVar37 | ~uVar37 & puVar25[3];
               puVar1 = (uint*)( lVar21 + lVar20 );
               *puVar1 = ( uint )((float)( uVar13 & uVar36 ) - (float)( uVar29 & uVar36 )) & uVar36 | ~uVar36 & *puVar1;
               puVar1[1] = ( uint )((float)( uVar28 & uVar31 ) - (float)( uVar32 & uVar31 )) & uVar31 | ~uVar31 & puVar1[1];
               puVar1[2] = ( uint )((float)( uVar30 & uVar34 ) - (float)( uVar35 & uVar34 )) & uVar34 | ~uVar34 & puVar1[2];
               puVar1[3] = ( uint )((float)( uVar33 & uVar37 ) - (float)( uVar38 & uVar37 )) & uVar37 | ~uVar37 & puVar1[3];
               if (lVar7 != 0) {
                  puVar1 = (uint*)( lVar7 + lVar20 );
                  *puVar1 = ~uVar36 & *puVar1;
                  puVar1[1] = ~uVar31 & puVar1[1];
                  puVar1[2] = ~uVar34 & puVar1[2];
                  puVar1[3] = ~uVar37 & puVar1[3];
                  puVar1 = (uint*)( lVar8 + lVar20 );
                  puVar25 = (uint*)( lVar20 + lVar9 );
                  *puVar1 = ~uVar36 & *puVar1;
                  puVar1[1] = ~uVar31 & puVar1[1];
                  puVar1[2] = ~uVar34 & puVar1[2];
                  puVar1[3] = ~uVar37 & puVar1[3];
                  *puVar25 = ~uVar36 & *puVar25;
                  puVar25[1] = ~uVar31 & puVar25[1];
                  puVar25[2] = ~uVar34 & puVar25[2];
                  puVar25[3] = ~uVar37 & puVar25[3];
               }

               uVar23 = ( ulong )(iVar22 + 4U);
            }
 while ( iVar22 + 4U < uVar4 );
            return;
         }

         uVar24 = 0;
         do {
            if (lVar7 != 0) {
               lVar21 = (ulong)uVar24 * 4;
               puVar1 = (uint*)( lVar7 + lVar21 );
               uVar29 = -(uint)((int)(uVar24 + iVar14) < (int)uVar4);
               uVar32 = -(uint)((int)(uVar24 + iVar15) < (int)uVar4);
               uVar35 = -(uint)((int)(uVar24 + iVar16) < (int)uVar4);
               uVar38 = -(uint)((int)(uVar24 + iVar17) < (int)uVar4);
               *puVar1 = ~uVar29 & *puVar1;
               puVar1[1] = ~uVar32 & puVar1[1];
               puVar1[2] = ~uVar35 & puVar1[2];
               puVar1[3] = ~uVar38 & puVar1[3];
               puVar1 = (uint*)( lVar8 + lVar21 );
               puVar25 = (uint*)( lVar21 + lVar9 );
               *puVar1 = ~uVar29 & *puVar1;
               puVar1[1] = ~uVar32 & puVar1[1];
               puVar1[2] = ~uVar35 & puVar1[2];
               puVar1[3] = ~uVar38 & puVar1[3];
               *puVar25 = ~uVar29 & *puVar25;
               puVar25[1] = ~uVar32 & puVar25[1];
               puVar25[2] = ~uVar35 & puVar25[2];
               puVar25[3] = ~uVar38 & puVar25[3];
            }

            uVar24 = uVar24 + 4;
         }
 while ( uVar24 < uVar4 );
      }
 else {
         uVar23 = 0;
         fVar39 = ( _LC1 - fVar2 ) - fVar3;
         do {
            iVar22 = (int)uVar23;
            lVar19 = uVar23 * 4;
            puVar25 = (uint*)( *(long*)( this + 0x60 ) * (ulong)uVar24 + *(long*)( this + 0x58 ) );
            lVar20 = lVar27 + lVar19;
            uVar28 = -(uint)(iVar22 + iVar14 < (int)uVar4);
            uVar30 = -(uint)(iVar22 + iVar15 < (int)uVar4);
            uVar33 = -(uint)(iVar22 + iVar16 < (int)uVar4);
            uVar36 = -(uint)(iVar22 + iVar17 < (int)uVar4);
            puVar1 = (uint*)( lVar20 + *puVar25 * uVar26 );
            fVar40 = (float)( *puVar1 & uVar28 );
            fVar41 = (float)( puVar1[1] & uVar30 );
            fVar42 = (float)( puVar1[2] & uVar33 );
            fVar43 = (float)( puVar1[3] & uVar36 );
            puVar1 = (uint*)( lVar20 + puVar25[1] * uVar26 );
            uVar29 = *puVar1;
            uVar32 = puVar1[1];
            uVar35 = puVar1[2];
            uVar38 = puVar1[3];
            puVar1 = (uint*)( lVar20 + puVar25[2] * uVar26 );
            uVar10 = *puVar1;
            uVar11 = puVar1[1];
            uVar12 = puVar1[2];
            uVar13 = puVar1[3];
            puVar1 = (uint*)( lVar5 + lVar19 );
            *puVar1 = ( uint )(fVar3 * (float)( uVar10 & uVar28 ) + fVar2 * (float)( uVar29 & uVar28 ) + fVar39 * fVar40) & uVar28 | ~uVar28 & *puVar1;
            puVar1[1] = ( uint )(fVar3 * (float)( uVar11 & uVar30 ) + fVar2 * (float)( uVar32 & uVar30 ) + fVar39 * fVar41) & uVar30 | ~uVar30 & puVar1[1];
            puVar1[2] = ( uint )(fVar3 * (float)( uVar12 & uVar33 ) + fVar2 * (float)( uVar35 & uVar33 ) + fVar39 * fVar42) & uVar33 | ~uVar33 & puVar1[2];
            puVar1[3] = ( uint )(fVar3 * (float)( uVar13 & uVar36 ) + fVar2 * (float)( uVar38 & uVar36 ) + fVar39 * fVar43) & uVar36 | ~uVar36 & puVar1[3];
            if (lVar6 != 0) {
               puVar1 = (uint*)( lVar6 + lVar19 );
               *puVar1 = ( uint )((float)( uVar29 & uVar28 ) - fVar40) & uVar28 | ~uVar28 & *puVar1;
               puVar1[1] = ( uint )((float)( uVar32 & uVar30 ) - fVar41) & uVar30 | ~uVar30 & puVar1[1];
               puVar1[2] = ( uint )((float)( uVar35 & uVar33 ) - fVar42) & uVar33 | ~uVar33 & puVar1[2];
               puVar1[3] = ( uint )((float)( uVar38 & uVar36 ) - fVar43) & uVar36 | ~uVar36 & puVar1[3];
               puVar1 = (uint*)( lVar21 + lVar19 );
               *puVar1 = ( uint )((float)( uVar10 & uVar28 ) - fVar40) & uVar28 | ~uVar28 & *puVar1;
               puVar1[1] = ( uint )((float)( uVar11 & uVar30 ) - fVar41) & uVar30 | ~uVar30 & puVar1[1];
               puVar1[2] = ( uint )((float)( uVar12 & uVar33 ) - fVar42) & uVar33 | ~uVar33 & puVar1[2];
               puVar1[3] = ( uint )((float)( uVar13 & uVar36 ) - fVar43) & uVar36 | ~uVar36 & puVar1[3];
            }

            if (lVar7 != 0) {
               puVar1 = (uint*)( lVar7 + lVar19 );
               *puVar1 = ~uVar28 & *puVar1;
               puVar1[1] = ~uVar30 & puVar1[1];
               puVar1[2] = ~uVar33 & puVar1[2];
               puVar1[3] = ~uVar36 & puVar1[3];
               puVar1 = (uint*)( lVar8 + lVar19 );
               puVar25 = (uint*)( lVar19 + lVar9 );
               *puVar1 = ~uVar28 & *puVar1;
               puVar1[1] = ~uVar30 & puVar1[1];
               puVar1[2] = ~uVar33 & puVar1[2];
               puVar1[3] = ~uVar36 & puVar1[3];
               *puVar25 = ~uVar28 & *puVar25;
               puVar25[1] = ~uVar30 & puVar25[1];
               puVar25[2] = ~uVar33 & puVar25[2];
               puVar25[3] = ~uVar36 & puVar25[3];
            }

            uVar23 = ( ulong )(iVar22 + 4U);
         }
 while ( iVar22 + 4U < uVar4 );
      }

   }

   return;
}
/* embree::TriangleMesh::verify() */undefined8 embree::TriangleMesh::verify(TriangleMesh *this) {
   long *plVar1;
   ulong uVar2;
   undefined1 auVar3[16];
   uint uVar4;
   undefined8 *puVar5;
   uint *puVar6;
   ulong uVar7;
   float *pfVar8;
   undefined8 *puVar9;
   undefined8 uVar10;
   uint *puVar11;
   long lVar12;
   undefined8 *puVar13;
   uVar10 = 0;
   if (*(long*)( this + 0xc0 ) != 0) {
      puVar13 = *(undefined8**)( this + 0xd0 );
      puVar9 = puVar13 + *(long*)( this + 0xc0 ) * 6;
      if (puVar9 == puVar13) {
         LAB_00100390:puVar6 = *(uint**)( this + 0xf0 );
         puVar11 = puVar6 + *(long*)( this + 0xe0 ) * 0xc;
         if (puVar6 != puVar11) {
            do {
               if (*(long*)( puVar6 + 4 ) != puVar13[2]) goto LAB_00100387;
               puVar6 = puVar6 + 0xc;
            }
 while ( puVar11 != puVar6 );
         }

         if (*(uint*)( this + 0x20 ) != 0) {
            puVar6 = *(uint**)( this + 0x58 );
            uVar7 = 0;
            uVar2 = puVar13[2];
            do {
               if (( ( uVar2 <= *puVar6 ) || ( uVar2 <= puVar6[1] ) ) || ( uVar2 <= puVar6[2] )) goto LAB_00100387;
               uVar7 = uVar7 + 1;
               puVar6 = (uint*)( (long)puVar6 + *(long*)( this + 0x60 ) );
            }
 while ( uVar7 != *(uint*)( this + 0x20 ) );
         }

         for (; puVar9 != puVar13; puVar13 = puVar13 + 6) {
            if (puVar13[2] != 0) {
               pfVar8 = (float*)*puVar13;
               lVar12 = 0;
               do {
                  auVar3._4_4_ = -(uint)(_LC5 < pfVar8[1] && pfVar8[1] < _LC3);
                  auVar3._0_4_ = -(uint)(_LC5 < *pfVar8 && *pfVar8 < _LC3);
                  auVar3._8_4_ = -(uint)(_LC5 < pfVar8[2] && pfVar8[2] < _LC3);
                  auVar3._12_4_ = -(uint)(_LC5 < pfVar8[3] && pfVar8[3] < _LC3);
                  uVar4 = movmskps((int)puVar6, auVar3);
                  puVar6 = (uint*)(ulong)~uVar4;
                  if (( ~uVar4 & 7 ) != 0) goto LAB_00100387;
                  lVar12 = lVar12 + 1;
                  pfVar8 = (float*)( (long)pfVar8 + puVar13[1] );
               }
 while ( lVar12 != puVar13[2] );
            }

         }

         uVar10 = 1;
      }
 else {
         puVar5 = puVar13;
         do {
            if (puVar9 == puVar5 + 6) goto LAB_00100390;
            plVar1 = puVar5 + 8;
            puVar5 = puVar5 + 6;
         }
 while ( *plVar1 == puVar13[2] );
         LAB_00100387:uVar10 = 0;
      }

   }

   return uVar10;
}
/* embree::TriangleMesh::setMask(unsigned int) */void embree::TriangleMesh::setMask(TriangleMesh *this, uint param_1) {
   *(uint*)( this + 0x34 ) = param_1;
   embree::Geometry::update();
   return;
}
/* embree::TriangleMesh::updateBuffer(RTCBufferType, unsigned int) */void embree::TriangleMesh::updateBuffer(TriangleMesh *this, int param_2, uint param_3) {
   int *piVar1;
   long lVar2;
   if (param_2 == 0) {
      if (param_3 == 0) {
         *(int*)( this + 0x74 ) = *(int*)( this + 0x74 ) + 1;
         this[0x78] = (TriangleMesh)0x1;
         embree::Geometry::update();
         return;
      }

   }
 else if (param_2 == 1) {
      if ((ulong)param_3 < *(ulong*)( this + 0xc0 )) {
         lVar2 = (ulong)param_3 * 0x30 + *(long*)( this + 0xd0 );
         piVar1 = (int*)( lVar2 + 0x1c );
         *piVar1 = *piVar1 + 1;
         *(undefined1*)( lVar2 + 0x20 ) = 1;
         embree::Geometry::update();
         return;
      }

   }
 else if (( param_2 == 2 ) && ( (ulong)param_3 < *(ulong*)( this + 0xe0 ) )) {
      lVar2 = (ulong)param_3 * 0x30 + *(long*)( this + 0xf0 );
      piVar1 = (int*)( lVar2 + 0x1c );
      *piVar1 = *piVar1 + 1;
      *(undefined1*)( lVar2 + 0x20 ) = 1;
      embree::Geometry::update();
      return;
   }

   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::TriangleMesh::commit() */void embree::TriangleMesh::commit(TriangleMesh *this) {
   undefined8 uVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   undefined8 uVar4;
   if (*(uint*)( this + 0x24 ) != 0) {
      uVar1 = *(undefined8*)( *(long*)( this + 0xd0 ) + 8 );
      puVar2 = (undefined8*)( *(long*)( this + 0xd0 ) + 0x38 );
      puVar3 = puVar2;
      uVar4 = uVar1;
      while (true) {
         if ((int)uVar1 != (int)uVar4) {
            /* WARNING: Subroutine does not return */
            abort();
         }

         if (puVar3 + 6 == puVar2 + ( ulong ) * (uint*)( this + 0x24 ) * 6) break;
         uVar4 = *puVar3;
         puVar3 = puVar3 + 6;
      }
;
   }

   embree::Geometry::commit();
   return;
}
/* embree::TriangleMesh::getBuffer(RTCBufferType, unsigned int) */undefined8 embree::TriangleMesh::getBuffer(TriangleMesh *this, int param_2, uint param_3) {
   if (param_2 == 0) {
      if (param_3 == 0) {
         return *(undefined8*)( this + 0x58 );
      }

   }
 else if (param_2 == 1) {
      if ((ulong)param_3 < *(ulong*)( this + 0xc0 )) {
         return *(undefined8*)( (ulong)param_3 * 0x30 + *(long*)( this + 0xd0 ) );
      }

   }
 else if (( param_2 == 2 ) && ( (ulong)param_3 < *(ulong*)( this + 0xe0 ) )) {
      return *(undefined8*)( (ulong)param_3 * 0x30 + *(long*)( this + 0xf0 ) );
   }

   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::TriangleMesh::addElementsToCount(embree::GeometryCounts&) const */void embree::TriangleMesh::addElementsToCount(TriangleMesh *this, GeometryCounts *param_1) {
   if (*(int*)( this + 0x24 ) != 1) {
      *(ulong*)( param_1 + 0x10 ) = *(long*)( param_1 + 0x10 ) + ( ulong ) * (uint*)( this + 0x20 );
      return;
   }

   *(ulong*)( param_1 + 8 ) = *(long*)( param_1 + 8 ) + ( ulong ) * (uint*)( this + 0x20 );
   return;
}
/* embree::RefCount::refDec() [clone .constprop.0] */void embree::RefCount::refDec(RefCount *this) {
   RefCount *pRVar1;
   LOCK();
   pRVar1 = this + 8;
   *(long*)pRVar1 = *(long*)pRVar1 + -1;
   UNLOCK();
   if (( this != (RefCount*)0x0 ) && ( *(long*)pRVar1 == 0 )) {
      /* WARNING: Could not recover jumptable at 0x00100635. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *(long*)this + 8 ) )();
      return;
   }

   return;
}
/* embree::TriangleMesh::setBuffer(RTCBufferType, unsigned int, RTCFormat,
   embree::Ref<embree::Buffer> const&, unsigned long, unsigned long, unsigned int) */void embree::TriangleMesh::setBuffer(TriangleMesh *this, int param_2, uint param_3, int param_4, long *param_5, long param_6, long param_7, uint param_8) {
   long lVar1;
   RefCount *pRVar2;
   long *plVar3;
   undefined8 *puVar4;
   ulong uVar5;
   long lVar6;
   long *plVar7;
   ulong uVar8;
   uVar5 = (ulong)param_3;
   lVar1 = *param_5;
   uVar8 = (ulong)param_8;
   lVar6 = *(long*)( lVar1 + 0x18 ) + param_6;
   if (( ( (uint)lVar6 | (uint)param_7 ) & 3 ) == 0) {
      if (param_2 == 1) {
         if (( ( ( param_4 == 0x9003 ) && ( uVar8 * param_7 < 0x400000001 ) ) && ( uVar5 < *(ulong*)( this + 0xc0 ) ) ) && ( plVar7 = (long*)( *(long*)( this + 0xd0 ) + uVar5 * 0x30 ) ),uVar8 * param_7 + param_6 <= ( ulong )(*(long*)( lVar1 + 0x20 ) * param_7)) {
            *(int*)( (long)plVar7 + 0x1c ) = *(int*)( (long)plVar7 + 0x1c ) + 1;
            *plVar7 = lVar6;
            plVar7[1] = param_7;
            plVar7[2] = uVar8;
            *(undefined4*)( plVar7 + 3 ) = 0x9003;
            *(undefined1*)( plVar7 + 4 ) = 1;
            plVar3 = (long*)*param_5;
            if (plVar3 != (long*)0x0) {
               if (*(code**)( *plVar3 + 0x10 ) == RefCount::refInc) {
                  LOCK();
                  plVar3[1] = plVar3[1] + 1;
                  UNLOCK();
               }
 else {
                  ( **(code**)( *plVar3 + 0x10 ) )();
               }

            }

            pRVar2 = (RefCount*)plVar7[5];
            if (pRVar2 != (RefCount*)0x0) {
               if (*(code**)( *(long*)pRVar2 + 0x18 ) == RefCount::refDec) {
                  RefCount::refDec(pRVar2);
               }
 else {
                  ( **(code**)( *(long*)pRVar2 + 0x18 ) )();
               }

            }

            plVar7[5] = *param_5;
            puVar4 = *(undefined8**)( this + 0xd0 );
            *(undefined8*)( this + 0x88 ) = *puVar4;
            *(undefined8*)( this + 0x90 ) = puVar4[1];
            *(undefined8*)( this + 0x98 ) = puVar4[2];
            *(undefined4*)( this + 0xa0 ) = *(undefined4*)( puVar4 + 3 );
            *(undefined4*)( this + 0xa4 ) = *(undefined4*)( (long)puVar4 + 0x1c );
            this[0xa8] = *(TriangleMesh*)( puVar4 + 4 );
            *(undefined4*)( this + 0xac ) = *(undefined4*)( (long)puVar4 + 0x24 );
            plVar7 = (long*)puVar4[5];
            if (plVar7 != (long*)0x0) {
               if (*(code**)( *plVar7 + 0x10 ) == RefCount::refInc) {
                  LOCK();
                  plVar7[1] = plVar7[1] + 1;
                  UNLOCK();
               }
 else {
                  ( **(code**)( *plVar7 + 0x10 ) )();
               }

            }

            pRVar2 = *(RefCount**)( this + 0xb0 );
            if (pRVar2 != (RefCount*)0x0) {
               if (*(code**)( *(long*)pRVar2 + 0x18 ) == RefCount::refDec) {
                  RefCount::refDec(pRVar2);
               }
 else {
                  ( **(code**)( *(long*)pRVar2 + 0x18 ) )();
               }

            }

            *(undefined8*)( this + 0xb0 ) = puVar4[5];
            return;
         }

      }
 else if (param_2 == 2) {
         if (( ( param_4 - 0x9001U < 0x10 ) && ( uVar5 < *(ulong*)( this + 0xe0 ) ) ) && ( plVar7 = (long*)( *(long*)( this + 0xf0 ) + uVar5 * 0x30 ) ),uVar8 * param_7 + param_6 <= ( ulong )(*(long*)( lVar1 + 0x20 ) * param_7)) {
            *(int*)( (long)plVar7 + 0x1c ) = *(int*)( (long)plVar7 + 0x1c ) + 1;
            *plVar7 = lVar6;
            plVar7[1] = param_7;
            plVar7[2] = uVar8;
            *(int*)( plVar7 + 3 ) = param_4;
            *(undefined1*)( plVar7 + 4 ) = 1;
            plVar3 = (long*)*param_5;
            if (plVar3 != (long*)0x0) {
               if (*(code**)( *plVar3 + 0x10 ) == RefCount::refInc) {
                  LOCK();
                  plVar3[1] = plVar3[1] + 1;
                  UNLOCK();
               }
 else {
                  ( **(code**)( *plVar3 + 0x10 ) )();
               }

            }

            pRVar2 = (RefCount*)plVar7[5];
            if (pRVar2 != (RefCount*)0x0) {
               if (*(code**)( *(long*)pRVar2 + 0x18 ) == RefCount::refDec) {
                  RefCount::refDec(pRVar2);
               }
 else {
                  ( **(code**)( *(long*)pRVar2 + 0x18 ) )();
               }

            }

            plVar7[5] = *param_5;
            return;
         }

      }
 else if (( ( param_3 == 0 && param_2 == 0 ) && ( param_4 == 0x5003 ) ) && ( uVar8 * param_7 + param_6 <= ( ulong )(*(long*)( lVar1 + 0x20 ) * param_7) )) {
         *(int*)( this + 0x74 ) = *(int*)( this + 0x74 ) + 1;
         *(long*)( this + 0x58 ) = lVar6;
         *(long*)( this + 0x60 ) = param_7;
         *(ulong*)( this + 0x68 ) = uVar8;
         *(undefined4*)( this + 0x70 ) = 0x5003;
         this[0x78] = (TriangleMesh)0x1;
         plVar7 = (long*)*param_5;
         if (plVar7 != (long*)0x0) {
            if (*(code**)( *plVar7 + 0x10 ) == RefCount::refInc) {
               LOCK();
               plVar7[1] = plVar7[1] + 1;
               UNLOCK();
            }
 else {
               ( **(code**)( *plVar7 + 0x10 ) )();
            }

         }

         pRVar2 = *(RefCount**)( this + 0x80 );
         if (pRVar2 != (RefCount*)0x0) {
            if (*(code**)( *(long*)pRVar2 + 0x18 ) == RefCount::refDec) {
               RefCount::refDec(pRVar2);
            }
 else {
               ( **(code**)( *(long*)pRVar2 + 0x18 ) )();
            }

         }

         *(long*)( this + 0x80 ) = *param_5;
         /* WARNING: Could not recover jumptable at 0x0010075e. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( **(code**)( *(long*)this + 0x20 ) )(this, uVar8);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::TriangleMesh::setVertexAttributeCount(unsigned int) */void embree::TriangleMesh::setVertexAttributeCount(TriangleMesh *this, uint param_1) {
   long *plVar1;
   long *plVar2;
   ulong uVar3;
   long lVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   ulong uVar8;
   long lVar9;
   ulong uVar10;
   ulong uVar11;
   uVar3 = (ulong)param_1;
   uVar10 = *(ulong*)( this + 0xe8 );
   uVar8 = *(ulong*)( this + 0xe0 );
   uVar11 = uVar3;
   if (uVar10 < uVar3) {
      if (uVar10 != 0) {
         do {
            uVar10 = uVar10 * 2;
         }
 while ( uVar10 < uVar3 );
         if (uVar3 < uVar8) goto LAB_00100b03;
         goto LAB_00100b54;
      }

      uVar10 = uVar3;
      if (uVar3 < uVar8) goto LAB_00100b03;
      puVar7 = *(undefined8**)( this + 0xf0 );
      lVar4 = ( **(code**)( **(long**)( this + 0xd8 ) + 0x38 ) )(*(long**)( this + 0xd8 ), uVar3 * 0x30, 8);
      *(long*)( this + 0xf0 ) = lVar4;
      if (*(long*)( this + 0xe0 ) != 0) goto LAB_00100b88;
      uVar8 = 0;
   }
 else {
      if (uVar8 <= uVar3) {
         if (uVar8 < uVar3) {
            lVar4 = uVar8 * 0x30;
            do {
               uVar8 = uVar8 + 1;
               puVar7 = (undefined8*)( *(long*)( this + 0xf0 ) + lVar4 );
               lVar4 = lVar4 + 0x30;
               *puVar7 = 0;
               puVar7[1] = 0;
               puVar7[2] = 0;
               puVar7[3] = 0x100000000;
               *(undefined1*)( puVar7 + 4 ) = 1;
               *(undefined4*)( (long)puVar7 + 0x24 ) = 0;
               puVar7[5] = 0;
            }
 while ( uVar3 != uVar8 );
         }

         goto LAB_00100d45;
      }

      LAB_00100b03:do {
         while (plVar2 = *(long**)( uVar11 * 0x30 + *(long*)( this + 0xf0 ) + 0x28 ),plVar2 == (long*)0x0) {
            LAB_00100af6:uVar11 = uVar11 + 1;
            if (*(ulong*)( this + 0xe0 ) <= uVar11) goto LAB_00100b40;
         }
;
         if (*(code**)( *plVar2 + 0x18 ) == RefCount::refDec) {
            LOCK();
            plVar1 = plVar2 + 1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               ( **(code**)( *plVar2 + 8 ) )();
            }

            goto LAB_00100af6;
         }

         ( **(code**)( *plVar2 + 0x18 ) )();
         uVar11 = uVar11 + 1;
      }
 while ( uVar11 < *(ulong*)( this + 0xe0 ) );
      LAB_00100b40:*(ulong*)( this + 0xe0 ) = uVar3;
      if (uVar10 == *(ulong*)( this + 0xe8 )) {
         LAB_00100d45:*(ulong*)( this + 0xe0 ) = uVar3;
         embree::Geometry::update();
         return;
      }

      LAB_00100b54:puVar7 = *(undefined8**)( this + 0xf0 );
      lVar4 = ( **(code**)( **(long**)( this + 0xd8 ) + 0x38 ) )(*(long**)( this + 0xd8 ), uVar10 * 0x30, 8);
      uVar8 = *(ulong*)( this + 0xe0 );
      *(long*)( this + 0xf0 ) = lVar4;
      if (uVar8 != 0) {
         LAB_00100b88:lVar9 = 0;
         uVar11 = 0;
         puVar6 = puVar7;
         while (true) {
            puVar5 = (undefined8*)( lVar4 + lVar9 );
            uVar11 = uVar11 + 1;
            lVar9 = lVar9 + 0x30;
            *puVar5 = *puVar6;
            puVar5[1] = puVar6[1];
            puVar5[2] = puVar6[2];
            *(undefined4*)( puVar5 + 3 ) = *(undefined4*)( puVar6 + 3 );
            *(undefined4*)( (long)puVar5 + 0x1c ) = *(undefined4*)( (long)puVar6 + 0x1c );
            *(undefined1*)( puVar5 + 4 ) = *(undefined1*)( puVar6 + 4 );
            *(undefined4*)( (long)puVar5 + 0x24 ) = *(undefined4*)( (long)puVar6 + 0x24 );
            puVar5[5] = puVar6[5];
            uVar8 = *(ulong*)( this + 0xe0 );
            if (uVar8 <= uVar11) break;
            lVar4 = *(long*)( this + 0xf0 );
            puVar6 = puVar6 + 6;
         }
;
      }

      if (uVar3 <= uVar8) goto LAB_00100c55;
   }

   lVar4 = uVar8 * 0x30;
   do {
      uVar8 = uVar8 + 1;
      puVar6 = (undefined8*)( *(long*)( this + 0xf0 ) + lVar4 );
      lVar4 = lVar4 + 0x30;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0x100000000;
      *(undefined1*)( puVar6 + 4 ) = 1;
      *(undefined4*)( (long)puVar6 + 0x24 ) = 0;
      puVar6[5] = 0;
   }
 while ( uVar3 != uVar8 );
   LAB_00100c55:plVar2 = *(long**)( this + 0xd8 );
   if (plVar2 != (long*)0x0) {
      ( **(code**)( *plVar2 + 0x40 ) )(plVar2, puVar7);
   }

   *(ulong*)( this + 0xe0 ) = uVar3;
   *(ulong*)( this + 0xe8 ) = uVar10;
   embree::Geometry::update();
   return;
}
/* embree::TriangleMesh::setNumTimeSteps(unsigned int) */void embree::TriangleMesh::setNumTimeSteps(TriangleMesh *this, uint param_1) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   ulong uVar7;
   long lVar8;
   ulong uVar9;
   ulong uVar10;
   ulong uVar11;
   uVar9 = (ulong)param_1;
   uVar10 = *(ulong*)( this + 200 );
   uVar7 = *(ulong*)( this + 0xc0 );
   uVar11 = uVar9;
   if (uVar9 <= uVar10) {
      if (uVar9 < uVar7) goto LAB_00100ddb;
      if (uVar7 < uVar9) {
         lVar3 = uVar7 * 0x30;
         do {
            uVar7 = uVar7 + 1;
            puVar6 = (undefined8*)( *(long*)( this + 0xd0 ) + lVar3 );
            lVar3 = lVar3 + 0x30;
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            puVar6[3] = 0x100000000;
            *(undefined1*)( puVar6 + 4 ) = 1;
            *(undefined4*)( (long)puVar6 + 0x24 ) = 0;
            puVar6[5] = 0;
         }
 while ( uVar9 != uVar7 );
      }

      LAB_00101015:*(ulong*)( this + 0xc0 ) = uVar9;
      goto LAB_00100f48;
   }

   if (uVar10 == 0) {
      uVar10 = uVar9;
      if (uVar9 < uVar7) goto LAB_00100ddb;
      puVar6 = *(undefined8**)( this + 0xd0 );
      lVar3 = ( **(code**)( **(long**)( this + 0xb8 ) + 0x38 ) )(*(long**)( this + 0xb8 ), uVar9 * 0x30, 8);
      *(long*)( this + 0xd0 ) = lVar3;
      if (*(long*)( this + 0xc0 ) != 0) goto LAB_00100e59;
      uVar7 = 0;
      LAB_00100ec6:lVar3 = uVar7 * 0x30;
      do {
         uVar7 = uVar7 + 1;
         puVar5 = (undefined8*)( *(long*)( this + 0xd0 ) + lVar3 );
         lVar3 = lVar3 + 0x30;
         *puVar5 = 0;
         puVar5[1] = 0;
         puVar5[2] = 0;
         puVar5[3] = 0x100000000;
         *(undefined1*)( puVar5 + 4 ) = 1;
         *(undefined4*)( (long)puVar5 + 0x24 ) = 0;
         puVar5[5] = 0;
      }
 while ( uVar9 != uVar7 );
   }
 else {
      do {
         uVar10 = uVar10 * 2;
      }
 while ( uVar10 < uVar9 );
      if (uVar9 < uVar7) {
         LAB_00100ddb:do {
            while (plVar2 = *(long**)( uVar11 * 0x30 + *(long*)( this + 0xd0 ) + 0x28 ),plVar2 == (long*)0x0) {
               LAB_00100dce:uVar11 = uVar11 + 1;
               if (*(ulong*)( this + 0xc0 ) <= uVar11) goto LAB_00100e10;
            }
;
            if (*(code**)( *plVar2 + 0x18 ) == RefCount::refDec) {
               LOCK();
               plVar1 = plVar2 + 1;
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  ( **(code**)( *plVar2 + 8 ) )();
               }

               goto LAB_00100dce;
            }

            ( **(code**)( *plVar2 + 0x18 ) )();
            uVar11 = uVar11 + 1;
         }
 while ( uVar11 < *(ulong*)( this + 0xc0 ) );
         LAB_00100e10:*(ulong*)( this + 0xc0 ) = uVar9;
         if (uVar10 == *(ulong*)( this + 200 )) goto LAB_00101015;
      }

      puVar6 = *(undefined8**)( this + 0xd0 );
      lVar3 = ( **(code**)( **(long**)( this + 0xb8 ) + 0x38 ) )(*(long**)( this + 0xb8 ), uVar10 * 0x30, 8);
      uVar7 = *(ulong*)( this + 0xc0 );
      *(long*)( this + 0xd0 ) = lVar3;
      if (uVar7 != 0) {
         LAB_00100e59:lVar8 = 0;
         uVar11 = 0;
         puVar5 = puVar6;
         while (true) {
            puVar4 = (undefined8*)( lVar3 + lVar8 );
            uVar11 = uVar11 + 1;
            lVar8 = lVar8 + 0x30;
            *puVar4 = *puVar5;
            puVar4[1] = puVar5[1];
            puVar4[2] = puVar5[2];
            *(undefined4*)( puVar4 + 3 ) = *(undefined4*)( puVar5 + 3 );
            *(undefined4*)( (long)puVar4 + 0x1c ) = *(undefined4*)( (long)puVar5 + 0x1c );
            *(undefined1*)( puVar4 + 4 ) = *(undefined1*)( puVar5 + 4 );
            *(undefined4*)( (long)puVar4 + 0x24 ) = *(undefined4*)( (long)puVar5 + 0x24 );
            puVar4[5] = puVar5[5];
            uVar7 = *(ulong*)( this + 0xc0 );
            if (uVar7 <= uVar11) break;
            lVar3 = *(long*)( this + 0xd0 );
            puVar5 = puVar5 + 6;
         }
;
      }

      if (uVar7 < uVar9) goto LAB_00100ec6;
   }

   plVar2 = *(long**)( this + 0xb8 );
   if (plVar2 != (long*)0x0) {
      ( **(code**)( *plVar2 + 0x40 ) )(plVar2, puVar6);
   }

   *(ulong*)( this + 0xc0 ) = uVar9;
   *(ulong*)( this + 200 ) = uVar10;
   LAB_00100f48:embree::Geometry::setNumTimeSteps((uint)this);
   return;
}
/* embree::TriangleMesh::TriangleMesh(embree::Device*) */void embree::TriangleMesh::TriangleMesh(TriangleMesh *this, Device *param_1) {
   undefined1 uVar1;
   undefined4 uVar2;
   long *plVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   long lVar7;
   undefined8 *puVar8;
   undefined8 *puVar9;
   ulong uVar10;
   ulong uVar11;
   ulong uVar12;
   embree::Geometry::Geometry((Geometry*)this, param_1, 0x14, 0, 1);
   plVar3 = *(long**)( this + 0x10 );
   uVar11 = ( ulong ) * (uint*)( this + 0x24 );
   this[0x78] = (TriangleMesh)0x1;
   *(undefined8*)( this + 0x58 ) = 0;
   *(undefined***)this = &PTR__TriangleMesh_001038e8;
   *(undefined8*)( this + 0x60 ) = 0;
   *(undefined8*)( this + 0x68 ) = 0;
   *(undefined8*)( this + 0x70 ) = 0x100000000;
   *(undefined4*)( this + 0x7c ) = 0;
   *(undefined8*)( this + 0x80 ) = 0;
   *(undefined8*)( this + 0x88 ) = 0;
   *(undefined8*)( this + 0x90 ) = 0;
   *(undefined8*)( this + 0x98 ) = 0;
   *(undefined8*)( this + 0xa0 ) = 0x100000000;
   this[0xa8] = (TriangleMesh)0x1;
   *(undefined4*)( this + 0xac ) = 0;
   *(undefined8*)( this + 0xb0 ) = 0;
   *(long**)( this + 0xb8 ) = plVar3;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 8*i + 192 ) ) = 0;
   }

   *(long**)( this + 0xd8 ) = plVar3;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 8*i + 224 ) ) = 0;
   }

   if (uVar11 == 0) {
      return;
   }

   lVar7 = ( **(code**)( *plVar3 + 0x38 ) )(plVar3, uVar11 * 0x30, 8);
   uVar10 = *(ulong*)( this + 0xc0 );
   *(long*)( this + 0xd0 ) = lVar7;
   if (uVar10 != 0) {
      uVar12 = 0;
      puVar9 = (undefined8*)0x0;
      while (true) {
         uVar1 = *(undefined1*)( puVar9 + 4 );
         puVar8 = (undefined8*)( lVar7 + (long)puVar9 );
         uVar12 = uVar12 + 1;
         uVar4 = puVar9[1];
         uVar5 = *puVar9;
         puVar8[2] = puVar9[2];
         uVar6 = puVar9[3];
         *(undefined1*)( puVar8 + 4 ) = uVar1;
         uVar2 = *(undefined4*)( (long)puVar9 + 0x24 );
         *puVar8 = uVar5;
         puVar8[1] = uVar4;
         puVar8[3] = uVar6;
         *(undefined4*)( (long)puVar8 + 0x24 ) = uVar2;
         puVar8[5] = puVar9[5];
         uVar10 = *(ulong*)( this + 0xc0 );
         if (uVar10 <= uVar12) break;
         lVar7 = *(long*)( this + 0xd0 );
         puVar9 = puVar9 + 6;
      }
;
      if (uVar11 <= uVar10) goto LAB_00101225;
   }

   lVar7 = uVar10 * 0x30;
   do {
      uVar10 = uVar10 + 1;
      puVar9 = (undefined8*)( *(long*)( this + 0xd0 ) + lVar7 );
      lVar7 = lVar7 + 0x30;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0x100000000;
      *(undefined1*)( puVar9 + 4 ) = 1;
      *(undefined4*)( (long)puVar9 + 0x24 ) = 0;
      puVar9[5] = 0;
   }
 while ( uVar11 != uVar10 );
   LAB_00101225:plVar3 = *(long**)( this + 0xb8 );
   if (plVar3 != (long*)0x0) {
      ( **(code**)( *plVar3 + 0x40 ) )(plVar3, 0);
   }

   *(ulong*)( this + 0xc0 ) = uVar11;
   *(ulong*)( this + 200 ) = uVar11;
   return;
}
/* embree::sse2::createTriangleMesh(embree::Device*) */TriangleMesh *embree::sse2::createTriangleMesh(Device *param_1) {
   TriangleMesh *this;
   this(TriangleMesh * embree::alignedUSMMalloc(0xf8, 0x10, 1));
   TriangleMesh::TriangleMesh(this, param_1);
   *(undefined***)this = &PTR__TriangleMeshISA_001036e8;
   return this;
}
/* embree::Geometry::enableFilterFunctionFromArguments(bool) */void embree::Geometry::enableFilterFunctionFromArguments(Geometry *this, bool param_1) {
   this[0x3e] = ( Geometry )((byte)this[0x3e] & 0xbf | ( byte )(( param_1 & 1 ) << 6));
   return;
}
/* embree::Geometry::createPrimRefArray(embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&, embree::range<unsigned
   long> const&, unsigned long, unsigned int) const */vector_t *embree::Geometry::createPrimRefArray(vector_t *param_1, vector_t *param_2, range *param_3, ulong param_4, uint param_5) {
   long lVar1;
   undefined4 in_register_00000084;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *(long*)param_2 + 0x168 ) )(param_1, param_2, *(undefined8*)( param_3 + 0x20 ), CONCAT44(in_register_00000084, param_5));
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* embree::Geometry::createPrimRefMBArray(embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&,
   embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&, embree::BBox<float>
   const&, embree::range<unsigned long> const&, unsigned long, unsigned int) const */vector_t *embree::Geometry::createPrimRefMBArray(vector_t *param_1, vector_t *param_2, BBox *param_3, range *param_4, ulong param_5, uint param_6) {
   long lVar1;
   undefined4 in_register_0000008c;
   long in_FS_OFFSET;
   undefined8 in_stack_00000008;
   undefined4 in_stack_00000010;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *(long*)param_2 + 0x188 ) )(param_1, param_2, param_3, param_5, CONCAT44(in_register_0000008c, param_6), in_stack_00000008, in_stack_00000010);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* embree::Geometry::vlinearBounds(unsigned long, embree::BBox<float> const&,
   embree::SubGridBuildData const*) const */ulong embree::Geometry::vlinearBounds(ulong param_1, BBox *param_2, SubGridBuildData *param_3) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *(long*)param_2 + 0x1d0 ) )();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* embree::TriangleMesh::getCompactVertexArray() const */undefined8 embree::TriangleMesh::getCompactVertexArray(TriangleMesh *this) {
   return *(undefined8*)( this + 0x88 );
}
/* embree::Geometry::vlinearBounds(embree::Vec3fa const&, float, float,
   embree::LinearSpace3<embree::Vec3fa> const&, unsigned long, embree::BBox<float> const&) const */void embree::Geometry::vlinearBounds(Vec3fa *param_1, float param_2, float param_3, LinearSpace3 *param_4, ulong param_5, BBox *param_6) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::vlinearBounds(unsigned long, embree::BBox<float> const&) const */void embree::Geometry::vlinearBounds(ulong param_1, BBox *param_2) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::vbounds(embree::Vec3fa const&, float, float,
   embree::LinearSpace3<embree::Vec3fa> const&, unsigned long, unsigned long) const */void embree::Geometry::vbounds(Vec3fa *param_1, float param_2, float param_3, LinearSpace3 *param_4, ulong param_5, ulong param_6) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::computeAlignedSpaceMB(unsigned long, embree::BBox<float>) const */void embree::Geometry::computeAlignedSpaceMB(void) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::computeAlignedSpace(unsigned long) const */void embree::Geometry::computeAlignedSpace(ulong param_1) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::createPrimRefMBArray(embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&, embree::BBox<float> const&,
   embree::range<unsigned long> const&, unsigned long, unsigned int) const */void embree::Geometry::createPrimRefMBArray(vector_t *param_1, BBox *param_2, range *param_3, ulong param_4, uint param_5) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::createPrimRefArray(embree::PrimRef*, embree::range<unsigned long> const&,
   unsigned long, unsigned int) const */void embree::Geometry::createPrimRefArray(PrimRef *param_1, range *param_2, ulong param_3, uint param_4) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::setOccludedFunctionN(void (*)(RTCOccludedFunctionNArguments const*)) */void embree::Geometry::setOccludedFunctionN(_func_void_RTCOccludedFunctionNArguments_ptr *param_1) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::setIntersectFunctionN(void (*)(RTCIntersectFunctionNArguments const*)) */void embree::Geometry::setIntersectFunctionN(_func_void_RTCIntersectFunctionNArguments_ptr *param_1) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::setBoundsFunction(void (*)(RTCBoundsFunctionArguments const*), void*) */void embree::Geometry::setBoundsFunction(_func_void_RTCBoundsFunctionArguments_ptr *param_1, void *param_2) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::getTransform(unsigned long, float) */void embree::Geometry::getTransform(ulong param_1, float param_2) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::getTransform(float) */void embree::Geometry::getTransform(float param_1) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::setQuaternionDecomposition(embree::AffineSpaceT<embree::LinearSpace3<embree::Vec3fx>
   > const&, unsigned int) */void embree::Geometry::setQuaternionDecomposition(AffineSpaceT *param_1, uint param_2) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::setTransform(embree::AffineSpaceT<embree::LinearSpace3<embree::Vec3fa> >
   const&, unsigned int) */void embree::Geometry::setTransform(AffineSpaceT *param_1, uint param_2) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::setInstancedScenes(RTCSceneTy* const*, unsigned long) */void embree::Geometry::setInstancedScenes(RTCSceneTy **param_1, ulong param_2) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::setInstancedScene(embree::Ref<embree::Scene> const&) */void embree::Geometry::setInstancedScene(Ref *param_1) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::getOppositeHalfEdge(unsigned int, unsigned int) */void embree::Geometry::getOppositeHalfEdge(uint param_1, uint param_2) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::getPreviousHalfEdge(unsigned int) */void embree::Geometry::getPreviousHalfEdge(uint param_1) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::getNextHalfEdge(unsigned int) */void embree::Geometry::getNextHalfEdge(uint param_1) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::getFace(unsigned int) */void embree::Geometry::getFace(uint param_1) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::getFirstHalfEdge(unsigned int) */void embree::Geometry::getFirstHalfEdge(uint param_1) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::setDisplacementFunction(void (*)(RTCDisplacementFunctionNArguments const*)) */void embree::Geometry::setDisplacementFunction(_func_void_RTCDisplacementFunctionNArguments_ptr *param_1) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::setVertexAttributeTopology(unsigned int, unsigned int) */void embree::Geometry::setVertexAttributeTopology(uint param_1, uint param_2) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::setSubdivisionMode(unsigned int, RTCSubdivisionMode) */void embree::Geometry::setSubdivisionMode(void) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::setTessellationRate(float) */void embree::Geometry::setTessellationRate(float param_1) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::setTopologyCount(unsigned int) */void embree::Geometry::setTopologyCount(uint param_1) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::vlinearBounds(embree::LinearSpace3<embree::Vec3fa> const&, unsigned long,
   embree::BBox<float> const&) const */void embree::Geometry::vlinearBounds(LinearSpace3 *param_1, ulong param_2, BBox *param_3) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::vbounds(embree::LinearSpace3<embree::Vec3fa> const&, unsigned long) const */void embree::Geometry::vbounds(LinearSpace3 *param_1, ulong param_2) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::vbounds(unsigned long) const */void embree::Geometry::vbounds(ulong param_1) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::computeDirection(unsigned int, unsigned long) const */void embree::Geometry::computeDirection(uint param_1, ulong param_2) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::computeDirection(unsigned int) const */void embree::Geometry::computeDirection(uint param_1) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::createPrimRefArrayMB(embree::PrimRef*, embree::BBox<float> const&,
   embree::range<unsigned long> const&, unsigned long, unsigned int) const */void embree::Geometry::createPrimRefArrayMB(PrimRef *param_1, BBox *param_2, range *param_3, ulong param_4, uint param_5) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::createPrimRefArrayMB(embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&, unsigned long,
   embree::range<unsigned long> const&, unsigned long, unsigned int) const */void embree::Geometry::createPrimRefArrayMB(vector_t *param_1, ulong param_2, range *param_3, ulong param_4, uint param_5) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Geometry::setMaxRadiusScale(float) */void embree::Geometry::setMaxRadiusScale(float param_1) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::sse2::TriangleMeshISA::createPrimRefArray(embree::PrimRef*, embree::range<unsigned long>
   const&, unsigned long, unsigned int) const */PrimRef *embree::sse2::TriangleMeshISA::createPrimRefArray(PrimRef *param_1, range *param_2, ulong param_3, uint param_4) {
   float *pfVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   float fVar5;
   float fVar6;
   undefined4 uVar7;
   undefined4 in_register_0000000c;
   ulong *puVar8;
   long *plVar9;
   long lVar10;
   undefined1(*pauVar11)[16];
   uint *puVar12;
   float *pfVar13;
   uint uVar14;
   ulong uVar15;
   long in_R8;
   float in_R9D;
   ulong uVar16;
   ulong uVar17;
   ulong uVar18;
   ulong uVar19;
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   float fVar24;
   float fVar25;
   float fVar26;
   float fVar27;
   ulong local_50;
   undefined1 local_48[24];
   uVar7 = _LC7;
   fVar6 = _LC5;
   fVar5 = _LC3;
   puVar8 = (ulong*)CONCAT44(in_register_0000000c, param_4);
   auVar20._4_4_ = _LC9;
   auVar20._0_4_ = _LC9;
   auVar20._8_4_ = _LC9;
   auVar20._12_4_ = _LC9;
   *(undefined8*)( param_1 + 0x40 ) = 0;
   *(undefined8*)( param_1 + 0x48 ) = 0;
   *(undefined4*)param_1 = uVar7;
   for (int i = 0; i < 3; i++) {
      *(undefined4*)( param_1 + ( 4*i + 4 ) ) = uVar7;
   }

   *(undefined1(*) [16])( param_1 + 0x10 ) = auVar20;
   for (int i = 0; i < 4; i++) {
      *(undefined4*)( param_1 + ( 4*i + 32 ) ) = uVar7;
   }

   *(undefined1(*) [16])( param_1 + 0x30 ) = auVar20;
   uVar15 = *puVar8;
   local_50 = puVar8[1];
   if (uVar15 < local_50) {
      LAB_00101600:do {
         plVar9 = *(long**)( param_2 + 0xd0 );
         puVar12 = (uint*)( *(long*)( param_2 + 0x60 ) * uVar15 + *(long*)( param_2 + 0x58 ) );
         uVar16 = plVar9[2];
         uVar17 = ( ulong ) * puVar12;
         if (( ( uVar17 < uVar16 ) && ( uVar18 = (ulong)puVar12[1] ),uVar18 < uVar16 )) {
            if (*(uint*)( param_2 + 0x24 ) != 0) {
               uVar16 = 0;
               do {
                  lVar10 = plVar9[1];
                  lVar2 = *plVar9;
                  pfVar13 = (float*)( lVar2 + uVar17 * lVar10 );
                  pfVar1 = (float*)( lVar2 + uVar18 * lVar10 );
                  auVar21._0_4_ = -(uint)(fVar6 < *pfVar13 && *pfVar13 < fVar5);
                  auVar21._4_4_ = -(uint)(fVar6 < pfVar13[1] && pfVar13[1] < fVar5);
                  auVar21._8_4_ = -(uint)(fVar6 < pfVar13[2] && pfVar13[2] < fVar5);
                  auVar21._12_4_ = -(uint)(fVar6 < pfVar13[3] && pfVar13[3] < fVar5);
                  pfVar13 = (float*)( lVar10 * uVar19 + lVar2 );
                  uVar14 = movmskps((int)lVar2, auVar21);
                  if (( ( ( ~uVar14 & 7 ) != 0 ) || ( auVar23._4_4_ = -(uint)(fVar6 < pfVar1[1] && pfVar1[1] < fVar5) ),auVar23._0_4_ = -(uint)(fVar6 < *pfVar1 && *pfVar1 < fVar5),auVar23._8_4_ = -(uint)(fVar6 < pfVar1[2] && pfVar1[2] < fVar5),auVar23._12_4_ = -(uint)(fVar6 < pfVar1[3] && pfVar1[3] < fVar5),uVar14 = movmskps(0, auVar23),( ~uVar14 & 7 ) != 0 )) {
                     uVar15 = uVar15 + 1;
                     if (local_50 <= uVar15) {
                        return param_1;
                     }

                     goto LAB_00101600;
                  }

                  uVar16 = uVar16 + 1;
                  plVar9 = plVar9 + 6;
               }
 while ( *(uint*)( param_2 + 0x24 ) != uVar16 );
            }

            lVar10 = *(long*)( param_2 + 0x90 );
            lVar2 = *(long*)( param_2 + 0x88 );
            auVar20 = *(undefined1(*) [16])( lVar2 + uVar17 * lVar10 );
            auVar21 = *(undefined1(*) [16])( lVar2 + uVar18 * lVar10 );
            auVar23 = *(undefined1(*) [16])( lVar2 + uVar19 * lVar10 );
            *(long*)( param_1 + 0x48 ) = *(long*)( param_1 + 0x48 ) + 1;
            auVar22 = maxps(auVar20, auVar21);
            auVar20 = minps(auVar20, auVar21);
            lVar10 = in_R8 * 0x20;
            in_R8 = in_R8 + 1;
            pauVar11 = (undefined1(*) [16])( lVar10 + param_3 );
            auVar22 = maxps(auVar22, auVar23);
            auVar21 = minps(auVar20, auVar23);
            local_48._0_12_ = auVar21._0_12_;
            local_48._12_4_ = in_R9D;
            auVar20 = local_48._0_16_;
            local_48._0_12_ = auVar22._0_12_;
            local_48._12_4_ = (float)uVar15;
            auVar23 = minps(*(undefined1(*) [16])param_1, auVar20);
            fVar24 = auVar21._0_4_ + auVar22._0_4_;
            fVar25 = auVar21._4_4_ + auVar22._4_4_;
            fVar26 = auVar21._8_4_ + auVar22._8_4_;
            fVar27 = in_R9D + (float)uVar15;
            *(undefined1(*) [16])param_1 = auVar23;
            auVar21 = maxps(*(undefined1(*) [16])( param_1 + 0x10 ), local_48._0_16_);
            *(undefined1(*) [16])( param_1 + 0x10 ) = auVar21;
            auVar3._4_4_ = fVar25;
            auVar3._0_4_ = fVar24;
            auVar3._8_4_ = fVar26;
            auVar3._12_4_ = fVar27;
            auVar21 = minps(*(undefined1(*) [16])( param_1 + 0x20 ), auVar3);
            *(undefined1(*) [16])( param_1 + 0x20 ) = auVar21;
            auVar4._4_4_ = fVar25;
            auVar4._0_4_ = fVar24;
            auVar4._8_4_ = fVar26;
            auVar4._12_4_ = fVar27;
            auVar21 = maxps(*(undefined1(*) [16])( param_1 + 0x30 ), auVar4);
            *(undefined1(*) [16])( param_1 + 0x30 ) = auVar21;
            *pauVar11 = auVar20;
            pauVar11[1] = local_48._0_16_;
            local_50 = puVar8[1];
         }

         uVar15 = uVar15 + 1;
      }
 while ( uVar15 < local_50 );
   }

   return param_1;
}
/* embree::sse2::TriangleMeshISA::createPrimRefArrayMB(embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&, unsigned long,
   embree::range<unsigned long> const&, unsigned long, unsigned int) const */void embree::sse2::TriangleMeshISA::createPrimRefArrayMB(vector_t *param_1, ulong param_2, range *param_3, ulong param_4, uint param_5) {
   float *pfVar1;
   ulong uVar2;
   long lVar3;
   long lVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   float fVar10;
   float fVar11;
   undefined4 uVar12;
   ulong uVar13;
   long *plVar14;
   long lVar15;
   undefined1(*pauVar16)[16];
   uint uVar17;
   ulong uVar18;
   ulong uVar19;
   undefined4 in_register_00000084;
   long in_R9;
   uint *puVar20;
   ulong uVar21;
   ulong uVar22;
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   float fVar26;
   float fVar27;
   float fVar28;
   float fVar29;
   undefined1 auVar30[16];
   float in_stack_00000008;
   undefined1 local_48[24];
   uVar12 = _LC7;
   auVar30._4_4_ = _LC9;
   auVar30._0_4_ = _LC9;
   auVar30._8_4_ = _LC9;
   auVar30._12_4_ = _LC9;
   *(undefined8*)( param_1 + 0x40 ) = 0;
   *(undefined8*)( param_1 + 0x48 ) = 0;
   *(undefined4*)param_1 = uVar12;
   for (int i = 0; i < 3; i++) {
      *(undefined4*)( param_1 + ( 4*i + 4 ) ) = uVar12;
   }

   *(undefined1(*) [16])( param_1 + 0x10 ) = auVar30;
   for (int i = 0; i < 4; i++) {
      *(undefined4*)( param_1 + ( 4*i + 32 ) ) = uVar12;
   }

   *(undefined1(*) [16])( param_1 + 0x30 ) = auVar30;
   fVar11 = _LC5;
   fVar10 = _LC3;
   uVar18 = *(ulong*)CONCAT44(in_register_00000084, param_5);
   uVar22 = *(ulong*)( CONCAT44(in_register_00000084, param_5) + 8 );
   if (uVar18 < uVar22) {
      do {
         lVar15 = *(long*)( param_2 + 0xd0 );
         puVar20 = (uint*)( *(long*)( param_2 + 0x60 ) * uVar18 + *(long*)( param_2 + 0x58 ) );
         uVar2 = *(ulong*)( lVar15 + 0x10 );
         uVar13 = ( ulong ) * puVar20;
         if (( ( uVar13 < uVar2 ) && ( uVar19 = (ulong)puVar20[1] ),uVar19 < uVar2 )) {
            plVar14 = (long*)( lVar15 + param_4 * 0x30 );
            lVar3 = *plVar14;
            lVar4 = plVar14[1];
            auVar30 = *(undefined1(*) [16])( lVar3 + uVar13 * lVar4 );
            auVar24._4_4_ = -(uint)(fVar11 < auVar30._4_4_ && auVar30._4_4_ < fVar10);
            auVar24._0_4_ = -(uint)(fVar11 < auVar30._0_4_ && auVar30._0_4_ < fVar10);
            auVar24._8_4_ = -(uint)(fVar11 < auVar30._8_4_ && auVar30._8_4_ < fVar10);
            auVar24._12_4_ = -(uint)(fVar11 < auVar30._12_4_ && auVar30._12_4_ < fVar10);
            uVar17 = movmskps((int)( uVar13 * lVar4 ), auVar24);
            if (( ~uVar17 & 7 ) == 0) {
               auVar24 = *(undefined1(*) [16])( lVar3 + uVar19 * lVar4 );
               auVar25._4_4_ = -(uint)(fVar11 < auVar24._4_4_ && auVar24._4_4_ < fVar10);
               auVar25._0_4_ = -(uint)(fVar11 < auVar24._0_4_ && auVar24._0_4_ < fVar10);
               auVar25._8_4_ = -(uint)(fVar11 < auVar24._8_4_ && auVar24._8_4_ < fVar10);
               auVar25._12_4_ = -(uint)(fVar11 < auVar24._12_4_ && auVar24._12_4_ < fVar10);
               uVar17 = movmskps((int)( uVar19 * lVar4 ), auVar25);
               if (( ~uVar17 & 7 ) == 0) {
                  auVar25 = *(undefined1(*) [16])( lVar3 + lVar4 * uVar21 );
                  auVar23._4_4_ = -(uint)(fVar11 < auVar25._4_4_ && auVar25._4_4_ < fVar10);
                  auVar23._0_4_ = -(uint)(fVar11 < auVar25._0_4_ && auVar25._0_4_ < fVar10);
                  auVar23._8_4_ = -(uint)(fVar11 < auVar25._8_4_ && auVar25._8_4_ < fVar10);
                  auVar23._12_4_ = -(uint)(fVar11 < auVar25._12_4_ && auVar25._12_4_ < fVar10);
                  uVar17 = movmskps((int)( lVar4 * uVar21 ), auVar23);
                  if (( ~uVar17 & 7 ) == 0) {
                     plVar14 = (long*)( lVar15 + param_4 * 0x30 + 0x30 );
                     lVar15 = *plVar14;
                     lVar3 = plVar14[1];
                     pfVar1 = (float*)( lVar15 + uVar13 * lVar3 );
                     auVar5._4_4_ = -(uint)(fVar11 < pfVar1[1] && pfVar1[1] < fVar10);
                     auVar5._0_4_ = -(uint)(fVar11 < *pfVar1 && *pfVar1 < fVar10);
                     auVar5._8_4_ = -(uint)(fVar11 < pfVar1[2] && pfVar1[2] < fVar10);
                     auVar5._12_4_ = -(uint)(fVar11 < pfVar1[3] && pfVar1[3] < fVar10);
                     uVar17 = movmskps((int)( uVar13 * lVar3 ), auVar5);
                     if (( ~uVar17 & 7 ) == 0) {
                        pfVar1 = (float*)( lVar15 + uVar19 * lVar3 );
                        auVar6._4_4_ = -(uint)(fVar11 < pfVar1[1] && pfVar1[1] < fVar10);
                        auVar6._0_4_ = -(uint)(fVar11 < *pfVar1 && *pfVar1 < fVar10);
                        auVar6._8_4_ = -(uint)(fVar11 < pfVar1[2] && pfVar1[2] < fVar10);
                        auVar6._12_4_ = -(uint)(fVar11 < pfVar1[3] && pfVar1[3] < fVar10);
                        uVar17 = movmskps(0, auVar6);
                        if (( ~uVar17 & 7 ) == 0) {
                           pfVar1 = (float*)( lVar15 + uVar21 * lVar3 );
                           auVar7._4_4_ = -(uint)(fVar11 < pfVar1[1] && pfVar1[1] < fVar10);
                           auVar7._0_4_ = -(uint)(fVar11 < *pfVar1 && *pfVar1 < fVar10);
                           auVar7._8_4_ = -(uint)(fVar11 < pfVar1[2] && pfVar1[2] < fVar10);
                           auVar7._12_4_ = -(uint)(fVar11 < pfVar1[3] && pfVar1[3] < fVar10);
                           uVar17 = movmskps((int)lVar3, auVar7);
                           if (( ~uVar17 & 7 ) == 0) {
                              auVar23 = minps(auVar30, auVar24);
                              auVar30 = maxps(auVar30, auVar24);
                              *(long*)( param_1 + 0x48 ) = *(long*)( param_1 + 0x48 ) + 1;
                              lVar15 = in_R9 * 0x20;
                              in_R9 = in_R9 + 1;
                              auVar24 = minps(auVar23, auVar25);
                              auVar23 = maxps(auVar30, auVar25);
                              local_48._0_12_ = auVar24._0_12_;
                              local_48._12_4_ = in_stack_00000008;
                              auVar30 = local_48._0_16_;
                              auVar25 = minps(*(undefined1(*) [16])param_1, local_48._0_16_);
                              local_48._0_12_ = auVar23._0_12_;
                              local_48._12_4_ = (float)uVar18;
                              fVar26 = auVar24._0_4_ + auVar23._0_4_;
                              fVar27 = auVar24._4_4_ + auVar23._4_4_;
                              fVar28 = auVar24._8_4_ + auVar23._8_4_;
                              fVar29 = in_stack_00000008 + (float)uVar18;
                              *(undefined1(*) [16])param_1 = auVar25;
                              auVar24 = maxps(*(undefined1(*) [16])( param_1 + 0x10 ), local_48._0_16_);
                              *(undefined1(*) [16])( param_1 + 0x10 ) = auVar24;
                              auVar8._4_4_ = fVar27;
                              auVar8._0_4_ = fVar26;
                              auVar8._8_4_ = fVar28;
                              auVar8._12_4_ = fVar29;
                              auVar24 = minps(*(undefined1(*) [16])( param_1 + 0x20 ), auVar8);
                              *(undefined1(*) [16])( param_1 + 0x20 ) = auVar24;
                              auVar9._4_4_ = fVar27;
                              auVar9._0_4_ = fVar26;
                              auVar9._8_4_ = fVar28;
                              auVar9._12_4_ = fVar29;
                              auVar24 = maxps(*(undefined1(*) [16])( param_1 + 0x30 ), auVar9);
                              *(undefined1(*) [16])( param_1 + 0x30 ) = auVar24;
                              pauVar16 = (undefined1(*) [16])( lVar15 + *(long*)( param_3 + 0x20 ) );
                              *pauVar16 = auVar30;
                              pauVar16[1] = local_48._0_16_;
                              uVar22 = *(ulong*)( CONCAT44(in_register_00000084, param_5) + 8 );
                           }

                        }

                     }

                  }

               }

            }

         }

         uVar18 = uVar18 + 1;
      }
 while ( uVar18 < uVar22 );
   }

   return;
}
/* embree::TriangleMesh::updateBuffer(RTCBufferType, unsigned int) [clone .cold] */void embree::TriangleMesh::updateBuffer(void) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::TriangleMesh::commit() [clone .cold] */void embree::TriangleMesh::commit(void) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::TriangleMesh::getBuffer(RTCBufferType, unsigned int) [clone .cold] */void embree::TriangleMesh::getBuffer(void) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::TriangleMesh::setBuffer(RTCBufferType, unsigned int, RTCFormat,
   embree::Ref<embree::Buffer> const&, unsigned long, unsigned long, unsigned int) [clone .cold] */void embree::TriangleMesh::setBuffer(void) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::RefCount::refInc() */RefCount * __thiscall embree::RefCount::refInc(RefCount *this){
   LOCK();
   *(long*)( this + 8 ) = *(long*)( this + 8 ) + 1;
   UNLOCK();
   return this;
}
/* embree::RefCount::refDec() */void embree::RefCount::refDec(RefCount *this) {
   RefCount *pRVar1;
   LOCK();
   pRVar1 = this + 8;
   *(long*)pRVar1 = *(long*)pRVar1 + -1;
   UNLOCK();
   if (( this != (RefCount*)0x0 ) && ( *(long*)pRVar1 == 0 )) {
      /* WARNING: Could not recover jumptable at 0x00101a79. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *(long*)this + 8 ) )();
      return;
   }

   return;
}
/* embree::TriangleMesh::~TriangleMesh() */void embree::TriangleMesh::~TriangleMesh(TriangleMesh *this) {
   long *plVar1;
   long *plVar2;
   ulong uVar3;
   *(undefined***)this = &PTR__TriangleMesh_001038e8;
   if (*(long*)( this + 0xe0 ) != 0) {
      uVar3 = 0;
      LAB_00101adb:do {
         plVar2 = *(long**)( uVar3 * 0x30 + *(long*)( this + 0xf0 ) + 0x28 );
         if (plVar2 != (long*)0x0) {
            if (*(code**)( *plVar2 + 0x18 ) != RefCount::refDec) {
               ( **(code**)( *plVar2 + 0x18 ) )();
               uVar3 = uVar3 + 1;
               if (*(ulong*)( this + 0xe0 ) <= uVar3) break;
               goto LAB_00101adb;
            }

            LOCK();
            plVar1 = plVar2 + 1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               ( **(code**)( *plVar2 + 8 ) )();
            }

         }

         uVar3 = uVar3 + 1;
      }
 while ( uVar3 < *(ulong*)( this + 0xe0 ) );
   }

   plVar2 = *(long**)( this + 0xd8 );
   if (plVar2 != (long*)0x0) {
      ( **(code**)( *plVar2 + 0x40 ) )(plVar2, *(undefined8*)( this + 0xf0 ));
   }

   if (*(long*)( this + 0xc0 ) != 0) {
      uVar3 = 0;
      LAB_00101b5b:do {
         plVar2 = *(long**)( uVar3 * 0x30 + *(long*)( this + 0xd0 ) + 0x28 );
         if (plVar2 != (long*)0x0) {
            if (*(code**)( *plVar2 + 0x18 ) != RefCount::refDec) {
               ( **(code**)( *plVar2 + 0x18 ) )();
               uVar3 = uVar3 + 1;
               if (*(ulong*)( this + 0xc0 ) <= uVar3) break;
               goto LAB_00101b5b;
            }

            LOCK();
            plVar1 = plVar2 + 1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               ( **(code**)( *plVar2 + 8 ) )();
            }

         }

         uVar3 = uVar3 + 1;
      }
 while ( uVar3 < *(ulong*)( this + 0xc0 ) );
   }

   plVar2 = *(long**)( this + 0xb8 );
   if (plVar2 != (long*)0x0) {
      ( **(code**)( *plVar2 + 0x40 ) )(plVar2, *(undefined8*)( this + 0xd0 ));
   }

   plVar2 = *(long**)( this + 0xb0 );
   if (plVar2 != (long*)0x0) {
      if (*(code**)( *plVar2 + 0x18 ) == RefCount::refDec) {
         LOCK();
         plVar1 = plVar2 + 1;
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            ( **(code**)( *plVar2 + 8 ) )();
         }

      }
 else {
         ( **(code**)( *plVar2 + 0x18 ) )();
      }

   }

   plVar2 = *(long**)( this + 0x80 );
   if (plVar2 != (long*)0x0) {
      if (*(code**)( *plVar2 + 0x18 ) != RefCount::refDec) {
         ( **(code**)( *plVar2 + 0x18 ) )();
         embree::Geometry::~Geometry((Geometry*)this);
         return;
      }

      LOCK();
      plVar1 = plVar2 + 1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         ( **(code**)( *plVar2 + 8 ) )();
      }

   }

   embree::Geometry::~Geometry((Geometry*)this);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* embree::sse2::TriangleMeshISA::createPrimRefMBArray(embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&, embree::BBox<float> const&,
   embree::range<unsigned long> const&, unsigned long, unsigned int) const */vector_t *embree::sse2::TriangleMeshISA::createPrimRefMBArray(vector_t *param_1, BBox *param_2, range *param_3, ulong param_4, uint param_5) {
   float *pfVar1;
   float fVar2;
   float fVar3;
   undefined1 auVar4[16];
   ulong uVar5;
   long lVar6;
   long lVar7;
   float fVar8;
   undefined4 uVar9;
   undefined4 uVar10;
   ulong uVar11;
   undefined1(*pauVar12)[16];
   uint *puVar13;
   ulong uVar14;
   ulong uVar15;
   uint uVar16;
   int iVar17;
   long *plVar18;
   int iVar19;
   float fVar20;
   undefined4 in_register_00000084;
   ulong *puVar21;
   long in_R9;
   ulong uVar22;
   long *plVar23;
   ulong uVar24;
   float fVar25;
   float fVar26;
   float fVar27;
   float fVar28;
   float fVar29;
   float fVar30;
   float fVar31;
   float fVar34;
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   float fVar35;
   float fVar36;
   float fVar37;
   float fVar38;
   undefined1 auVar39[16];
   undefined1 auVar40[16];
   float fVar41;
   undefined1 auVar42[16];
   float fVar43;
   float fVar44;
   float fVar47;
   float fVar48;
   undefined1 auVar45[16];
   undefined1 auVar46[16];
   float fVar49;
   float fVar50;
   float fVar53;
   float fVar54;
   undefined1 auVar51[16];
   undefined1 auVar52[16];
   float in_stack_00000008;
   float local_b8;
   float fStack_b4;
   float fStack_b0;
   float fStack_ac;
   float local_a8;
   float fStack_a4;
   float fStack_a0;
   float fStack_9c;
   int local_94;
   uVar10 = _LC9;
   uVar9 = _LC7;
   puVar21 = (ulong*)CONCAT44(in_register_00000084, param_5);
   *(undefined8*)( param_1 + 0x60 ) = 0;
   *(undefined8*)( param_1 + 0x68 ) = 0;
   *(undefined8*)( param_1 + 0x70 ) = 0;
   *(undefined8*)( param_1 + 0x78 ) = 0;
   *(undefined8*)( param_1 + 0x80 ) = 0x3f80000000000000;
   *(undefined8*)( param_1 + 0x88 ) = 0x3f800000;
   *(undefined4*)param_1 = uVar9;
   for (int i = 0; i < 3; i++) {
      *(undefined4*)( param_1 + ( 4*i + 4 ) ) = uVar9;
   }

   for (int i = 0; i < 4; i++) {
      *(undefined4*)( param_1 + ( 4*i + 16 ) ) = uVar10;
   }

   for (int i = 0; i < 4; i++) {
      *(undefined4*)( param_1 + ( 4*i + 32 ) ) = uVar9;
   }

   for (int i = 0; i < 4; i++) {
      *(undefined4*)( param_1 + ( 4*i + 48 ) ) = uVar10;
   }

   for (int i = 0; i < 4; i++) {
      *(undefined4*)( param_1 + ( 4*i + 64 ) ) = uVar9;
   }

   for (int i = 0; i < 4; i++) {
      *(undefined4*)( param_1 + ( 4*i + 80 ) ) = uVar10;
   }

   fVar8 = _LC3;
   uVar22 = *puVar21;
   if (uVar22 < puVar21[1]) {
      do {
         while (true) {
            fVar2 = *(float*)( param_2 + 0x2c );
            fVar3 = *(float*)( param_2 + 0x30 );
            fVar31 = *(float*)( param_2 + 0x28 );
            fVar37 = ( *(float*)param_4 - fVar2 ) / ( fVar3 - fVar2 );
            fVar36 = ( *(float*)( param_4 + 4 ) - fVar2 ) / ( fVar3 - fVar2 );
            fVar25 = _LC15 * fVar37 * fVar31;
            if ((float)( _LC21 & (uint)fVar25 ) < _LC16) {
               fVar25 = (float)( ( uint )((float)(int)fVar25 - (float)( -(uint)(fVar25 < (float)(int)fVar25) & (uint)_LC1 )) | ~_LC21 & (uint)fVar25 );
            }

            uVar24 = 0;
            if (0.0 <= fVar25) {
               uVar24 = (ulong)(int)fVar25;
            }

            fVar25 = _LC18 * fVar36 * fVar31;
            if ((float)( _LC21 & (uint)fVar25 ) < _LC16) {
               fVar25 = (float)( ( uint )((float)(int)fVar25 + (float)( -(uint)((float)(int)fVar25 < fVar25) & (uint)_LC1 )) | ~_LC21 & (uint)fVar25 );
            }

            plVar23 = *(long**)( param_2 + 0xd0 );
            if (fVar31 <= fVar25) {
               fVar25 = fVar31;
            }

            puVar13 = (uint*)( *(long*)( param_2 + 0x60 ) * uVar22 + *(long*)( param_2 + 0x58 ) );
            uVar5 = plVar23[2];
            uVar11 = ( ulong ) * puVar13;
            if (( ( uVar11 < uVar5 ) && ( uVar15 = (ulong)puVar13[1] ),uVar15 < uVar5 )) &&( uVar14 = uVar14 < uVar5 );
            LAB_00101ef0:uVar22 = uVar22 + 1;
            if (puVar21[1] <= uVar22) {
               return param_1;
            }

         }
;
         if (uVar24 <= (ulong)(long)(int)fVar25) {
            plVar18 = plVar23 + uVar24 * 6;
            do {
               lVar6 = plVar18[1];
               lVar7 = *plVar18;
               pfVar1 = (float*)( lVar7 + uVar11 * lVar6 );
               auVar51._0_4_ = -(uint)(_LC5 < *pfVar1 && *pfVar1 < fVar8);
               auVar51._4_4_ = -(uint)(_LC5 < pfVar1[1] && pfVar1[1] < fVar8);
               auVar51._8_4_ = -(uint)(_LC5 < pfVar1[2] && pfVar1[2] < fVar8);
               auVar51._12_4_ = -(uint)(_LC5 < pfVar1[3] && pfVar1[3] < fVar8);
               uVar16 = movmskps((int)( uVar11 * lVar6 ), auVar51);
               if (( ~uVar16 & 7 ) != 0) goto LAB_00101ef0;
               pfVar1 = (float*)( lVar7 + uVar15 * lVar6 );
               auVar40._0_4_ = -(uint)(_LC5 < *pfVar1 && *pfVar1 < fVar8);
               auVar40._4_4_ = -(uint)(_LC5 < pfVar1[1] && pfVar1[1] < fVar8);
               auVar40._8_4_ = -(uint)(_LC5 < pfVar1[2] && pfVar1[2] < fVar8);
               auVar40._12_4_ = -(uint)(_LC5 < pfVar1[3] && pfVar1[3] < fVar8);
               uVar16 = movmskps((int)( uVar15 * lVar6 ), auVar40);
               if (( ~uVar16 & 7 ) != 0) goto LAB_00101ef0;
               pfVar1 = (float*)( lVar7 + lVar6 * uVar14 );
               auVar45._0_4_ = -(uint)(_LC5 < *pfVar1 && *pfVar1 < fVar8);
               auVar45._4_4_ = -(uint)(_LC5 < pfVar1[1] && pfVar1[1] < fVar8);
               auVar45._8_4_ = -(uint)(_LC5 < pfVar1[2] && pfVar1[2] < fVar8);
               auVar45._12_4_ = -(uint)(_LC5 < pfVar1[3] && pfVar1[3] < fVar8);
               uVar16 = movmskps((int)( lVar6 * uVar14 ), auVar45);
               if (( ~uVar16 & 7 ) != 0) goto LAB_00101ef0;
               uVar24 = uVar24 + 1;
               plVar18 = plVar18 + 6;
            }
 while ( uVar24 <= (ulong)(long)(int)fVar25 );
         }

         fVar26 = fVar31 * fVar37;
         fVar43 = fVar31 * fVar36;
         fVar20 = (float)( *(int*)( param_2 + 0x24 ) + -1 );
         fVar25 = fVar26;
         if ((float)( _LC21 & (uint)fVar26 ) < _LC16) {
            fVar25 = (float)( ~_LC21 & (uint)fVar26 | ( uint )((float)(int)fVar26 - (float)( -(uint)(fVar26 < (float)(int)fVar26) & (uint)_LC1 )) );
         }

         fVar34 = fVar43;
         if ((float)( _LC21 & (uint)fVar43 ) < _LC16) {
            fVar34 = (float)( ~_LC21 & (uint)fVar43 | ( uint )((float)(int)fVar43 + (float)( -(uint)((float)(int)fVar43 < fVar43) & (uint)_LC1 )) );
         }

         iVar19 = (int)fVar25;
         if (fVar25 <= 0.0) {
            local_94 = 0;
            plVar18 = plVar23;
         }
 else {
            fVar26 = fVar26 - fVar25;
            plVar18 = plVar23 + (long)iVar19 * 6;
            local_94 = iVar19;
         }

         iVar17 = -1;
         if (-1 < iVar19) {
            iVar17 = iVar19;
         }

         fVar25 = fVar34;
         if (fVar31 <= fVar34) {
            fVar25 = fVar31;
         }

         iVar19 = (int)fVar31 + 1;
         if ((int)fVar34 < (int)fVar31 + 1) {
            iVar19 = (int)fVar34;
         }

         lVar6 = *plVar18;
         lVar7 = plVar18[1];
         auVar51 = *(undefined1(*) [16])( lVar6 + uVar11 * lVar7 );
         auVar40 = *(undefined1(*) [16])( lVar6 + uVar15 * lVar7 );
         auVar45 = *(undefined1(*) [16])( lVar6 + lVar7 * uVar14 );
         auVar32 = minps(auVar51, auVar40);
         auVar51 = maxps(auVar51, auVar40);
         lVar6 = plVar23[(long)(int)fVar25 * 6];
         lVar7 = ( plVar23 + (long)(int)fVar25 * 6 )[1];
         auVar32 = minps(auVar32, auVar45);
         auVar52 = maxps(auVar51, auVar45);
         auVar51 = *(undefined1(*) [16])( lVar6 + uVar11 * lVar7 );
         auVar40 = *(undefined1(*) [16])( lVar6 + uVar15 * lVar7 );
         auVar45 = *(undefined1(*) [16])( lVar6 + lVar7 * uVar14 );
         auVar33 = minps(auVar51, auVar40);
         auVar40 = maxps(auVar51, auVar40);
         auVar51 = minps(auVar33, auVar45);
         auVar40 = maxps(auVar40, auVar45);
         fVar54 = auVar52._0_4_;
         fVar34 = auVar40._0_4_;
         fVar50 = auVar40._4_4_;
         fVar53 = auVar40._8_4_;
         fVar30 = auVar52._4_4_;
         fVar49 = auVar52._8_4_;
         fStack_a4 = auVar32._4_4_;
         fStack_a0 = auVar32._8_4_;
         fStack_b4 = auVar51._4_4_;
         fStack_b0 = auVar51._8_4_;
         local_a8 = auVar32._0_4_;
         local_b8 = auVar51._0_4_;
         if (iVar19 - iVar17 == 1) {
            if (0.0 < fVar26) {
               fVar31 = _LC1 - fVar26;
            }
 else {
               fVar26 = 0.0;
               fVar31 = _LC1;
            }

            fVar27 = fVar26 * local_b8 + fVar31 * local_a8;
            fVar28 = fVar26 * fStack_b4 + fVar31 * fStack_a4;
            fVar29 = fVar26 * fStack_b0 + fVar31 * fStack_a0;
            fVar25 = fVar25 - fVar43;
            fVar44 = fVar26 * fVar34 + fVar31 * fVar54;
            fVar47 = fVar26 * fVar50 + fVar31 * fVar30;
            fVar48 = fVar26 * fVar53 + fVar31 * fVar49;
            if (fVar25 <= 0.0) {
               fVar25 = 0.0;
               fVar31 = _LC1;
            }
 else {
               fVar31 = _LC1 - fVar25;
            }

            fVar26 = fVar54 * fVar25 + fVar34 * fVar31;
            fVar43 = fVar30 * fVar25 + fVar50 * fVar31;
            fVar34 = fVar49 * fVar25 + fVar53 * fVar31;
            fVar50 = local_a8 * fVar25 + fVar31 * local_b8;
            fVar53 = fStack_a4 * fVar25 + fVar31 * fStack_b4;
            fVar54 = fStack_a0 * fVar25 + fVar31 * fStack_b0;
         }
 else {
            lVar6 = plVar23[(long)( local_94 + 1 ) * 6];
            lVar7 = ( plVar23 + (long)( local_94 + 1 ) * 6 )[1];
            auVar45 = *(undefined1(*) [16])( lVar6 + uVar11 * lVar7 );
            auVar33 = *(undefined1(*) [16])( lVar6 + uVar15 * lVar7 );
            auVar4 = *(undefined1(*) [16])( lVar6 + lVar7 * uVar14 );
            lVar6 = plVar23[(long)( (int)fVar25 + -1 ) * 6];
            lVar7 = ( plVar23 + (long)( (int)fVar25 + -1 ) * 6 )[1];
            auVar42 = minps(auVar45, auVar33);
            auVar45 = maxps(auVar45, auVar33);
            auVar46 = maxps(auVar45, auVar4);
            auVar39 = minps(auVar42, auVar4);
            auVar45 = *(undefined1(*) [16])( lVar6 + uVar11 * lVar7 );
            auVar33 = *(undefined1(*) [16])( lVar6 + uVar15 * lVar7 );
            auVar4 = *(undefined1(*) [16])( lVar6 + lVar7 * uVar14 );
            auVar42 = maxps(auVar45, auVar33);
            auVar33 = minps(auVar45, auVar33);
            auVar45 = maxps(auVar42, auVar4);
            auVar33 = minps(auVar33, auVar4);
            if (fVar26 <= 0.0) {
               fVar26 = 0.0;
               fVar38 = _LC1;
            }
 else {
               fVar38 = _LC1 - fVar26;
            }

            fStack_9c = auVar32._12_4_;
            fVar44 = auVar46._0_4_ * fVar26 + fVar54 * fVar38;
            fVar47 = auVar46._4_4_ * fVar26 + fVar30 * fVar38;
            fVar48 = auVar46._8_4_ * fVar26 + fVar49 * fVar38;
            fVar49 = auVar46._12_4_ * fVar26 + auVar52._12_4_ * fVar38;
            fVar25 = fVar25 - fVar43;
            fVar27 = fVar26 * auVar39._0_4_ + fVar38 * local_a8;
            fVar28 = fVar26 * auVar39._4_4_ + fVar38 * fStack_a4;
            fVar29 = fVar26 * auVar39._8_4_ + fVar38 * fStack_a0;
            fVar30 = fVar26 * auVar39._12_4_ + fVar38 * fStack_9c;
            if (fVar25 <= 0.0) {
               fVar25 = 0.0;
               fVar38 = _LC1;
            }
 else {
               fVar38 = _LC1 - fVar25;
            }

            iVar17 = iVar17 + 1;
            fStack_ac = auVar51._12_4_;
            fVar26 = auVar45._0_4_ * fVar25 + fVar34 * fVar38;
            fVar43 = auVar45._4_4_ * fVar25 + fVar50 * fVar38;
            fVar34 = auVar45._8_4_ * fVar25 + fVar53 * fVar38;
            fVar35 = auVar45._12_4_ * fVar25 + auVar40._12_4_ * fVar38;
            fVar50 = fVar25 * auVar33._0_4_ + fVar38 * local_b8;
            fVar53 = fVar25 * auVar33._4_4_ + fVar38 * fStack_b4;
            fVar54 = fVar25 * auVar33._8_4_ + fVar38 * fStack_b0;
            fVar25 = fVar25 * auVar33._12_4_ + fVar38 * fStack_ac;
            if (iVar17 < iVar19) {
               plVar23 = plVar23 + (long)iVar17 * 6;
               do {
                  lVar6 = plVar23[1];
                  lVar7 = *plVar23;
                  fVar38 = (float)iVar17;
                  iVar17 = iVar17 + 1;
                  plVar23 = plVar23 + 6;
                  fVar38 = ( fVar38 / fVar31 - fVar37 ) / ( fVar36 - fVar37 );
                  fVar41 = _LC1 - fVar38;
                  auVar51 = *(undefined1(*) [16])( lVar7 + uVar11 * lVar6 );
                  auVar40 = *(undefined1(*) [16])( lVar7 + uVar15 * lVar6 );
                  auVar45 = *(undefined1(*) [16])( lVar7 + lVar6 * uVar14 );
                  auVar32 = maxps(auVar51, auVar40);
                  auVar51 = minps(auVar51, auVar40);
                  auVar40 = maxps(auVar32, auVar45);
                  auVar51 = minps(auVar51, auVar45);
                  auVar32._0_4_ = auVar51._0_4_ - ( fVar38 * fVar50 + fVar41 * fVar27 );
                  auVar32._4_4_ = auVar51._4_4_ - ( fVar38 * fVar53 + fVar41 * fVar28 );
                  auVar32._8_4_ = auVar51._8_4_ - ( fVar38 * fVar54 + fVar41 * fVar29 );
                  auVar32._12_4_ = auVar51._12_4_ - ( fVar38 * fVar25 + fVar41 * fVar30 );
                  auVar33._0_4_ = auVar40._0_4_ - ( fVar38 * fVar26 + fVar41 * fVar44 );
                  auVar33._4_4_ = auVar40._4_4_ - ( fVar38 * fVar43 + fVar41 * fVar47 );
                  auVar33._8_4_ = auVar40._8_4_ - ( fVar38 * fVar34 + fVar41 * fVar48 );
                  auVar33._12_4_ = auVar40._12_4_ - ( fVar38 * fVar35 + fVar41 * fVar49 );
                  auVar51 = minps(auVar32, (undefined1[16])0x0);
                  auVar40 = maxps(auVar33, (undefined1[16])0x0);
                  fVar27 = fVar27 + auVar51._0_4_;
                  fVar28 = fVar28 + auVar51._4_4_;
                  fVar29 = fVar29 + auVar51._8_4_;
                  fVar30 = fVar30 + auVar51._12_4_;
                  fVar50 = fVar50 + auVar51._0_4_;
                  fVar53 = fVar53 + auVar51._4_4_;
                  fVar54 = fVar54 + auVar51._8_4_;
                  fVar25 = fVar25 + auVar51._12_4_;
                  fVar44 = fVar44 + auVar40._0_4_;
                  fVar47 = fVar47 + auVar40._4_4_;
                  fVar48 = fVar48 + auVar40._8_4_;
                  fVar49 = fVar49 + auVar40._12_4_;
                  fVar26 = fVar26 + auVar40._0_4_;
                  fVar43 = fVar43 + auVar40._4_4_;
                  fVar34 = fVar34 + auVar40._8_4_;
                  fVar35 = fVar35 + auVar40._12_4_;
               }
 while ( iVar19 != iVar17 );
            }

         }

         auVar39._4_4_ = fVar43;
         auVar39._0_4_ = fVar26;
         auVar39._8_4_ = fVar34;
         auVar39._12_4_ = fVar20;
         auVar4._4_4_ = fVar47;
         auVar4._0_4_ = fVar44;
         auVar4._8_4_ = fVar48;
         auVar4._12_4_ = (float)uVar22;
         uVar24 = (ulong)(uint)fVar20;
         auVar52._4_4_ = fVar28;
         auVar52._0_4_ = fVar27;
         auVar52._8_4_ = fVar29;
         auVar52._12_4_ = in_stack_00000008;
         auVar42._4_4_ = fVar53;
         auVar42._0_4_ = fVar50;
         auVar42._8_4_ = fVar54;
         auVar42._12_4_ = fVar20;
         auVar46._0_4_ = __LC19 * fVar26 + __LC19 * fVar44 + __LC19 * fVar50 + __LC19 * fVar27;
         auVar46._4_4_ = _UNK_00103b04 * fVar43 + _UNK_00103b04 * fVar47 + _UNK_00103b04 * fVar53 + _UNK_00103b04 * fVar28;
         auVar46._8_4_ = _UNK_00103b08 * fVar34 + _UNK_00103b08 * fVar48 + _UNK_00103b08 * fVar54 + _UNK_00103b08 * fVar29;
         auVar46._12_4_ = _UNK_00103b0c * fVar20 + _UNK_00103b0c * (float)uVar22 + _UNK_00103b0c * fVar20 + _UNK_00103b0c * in_stack_00000008;
         auVar51 = minps(*(undefined1(*) [16])param_1, auVar52);
         *(undefined1(*) [16])param_1 = auVar51;
         auVar51 = maxps(*(undefined1(*) [16])( param_1 + 0x10 ), auVar4);
         *(undefined1(*) [16])( param_1 + 0x10 ) = auVar51;
         auVar51 = minps(*(undefined1(*) [16])( param_1 + 0x20 ), auVar42);
         *(undefined1(*) [16])( param_1 + 0x20 ) = auVar51;
         auVar51 = maxps(*(undefined1(*) [16])( param_1 + 0x30 ), auVar39);
         *(undefined1(*) [16])( param_1 + 0x30 ) = auVar51;
         auVar51 = minps(*(undefined1(*) [16])( param_1 + 0x40 ), auVar46);
         *(undefined1(*) [16])( param_1 + 0x40 ) = auVar51;
         auVar51 = maxps(*(undefined1(*) [16])( param_1 + 0x50 ), auVar46);
         fVar31 = *(float*)( param_1 + 0x88 );
         if (fVar2 <= *(float*)( param_1 + 0x88 )) {
            fVar31 = fVar2;
         }

         *(undefined1(*) [16])( param_1 + 0x50 ) = auVar51;
         *(float*)( param_1 + 0x88 ) = fVar31;
         *(long*)( param_1 + 0x68 ) = *(long*)( param_1 + 0x68 ) + 1;
         *(ulong*)( param_1 + 0x70 ) = *(long*)( param_1 + 0x70 ) + uVar24;
         fVar31 = fVar3;
         if (fVar3 <= *(float*)( param_1 + 0x8c )) {
            fVar31 = *(float*)( param_1 + 0x8c );
         }

         *(float*)( param_1 + 0x8c ) = fVar31;
         if (*(ulong*)( param_1 + 0x78 ) < uVar24) {
            *(ulong*)( param_1 + 0x78 ) = uVar24;
            *(float*)( param_1 + 0x80 ) = fVar2;
            *(float*)( param_1 + 0x84 ) = fVar3;
         }

         uVar22 = uVar22 + 1;
         pauVar12 = (undefined1(*) [16])( in_R9 * 0x50 + *(long*)( param_3 + 0x20 ) );
         *pauVar12 = auVar52;
         pauVar12[1] = auVar4;
         *(float*)pauVar12[4] = fVar2;
         pauVar12[2] = auVar42;
         pauVar12[3] = auVar39;
         *(float*)( pauVar12[4] + 4 ) = fVar3;
         in_R9 = in_R9 + 1;
      }
 while ( uVar22 < puVar21[1] );
   }

   return param_1;
}
/* embree::sse2::TriangleMeshISA::createPrimRefArrayMB(embree::PrimRef*, embree::BBox<float> const&,
   embree::range<unsigned long> const&, unsigned long, unsigned int) const */PrimRef *embree::sse2::TriangleMeshISA::createPrimRefArrayMB(PrimRef *param_1, BBox *param_2, range *param_3, ulong param_4, uint param_5) {
   float *pfVar1;
   ulong uVar2;
   long lVar3;
   long lVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   int iVar7;
   float fVar8;
   float fVar9;
   undefined4 uVar10;
   undefined4 uVar11;
   int iVar12;
   uint *puVar13;
   ulong uVar14;
   ulong uVar15;
   ulong uVar16;
   long *plVar17;
   uint uVar18;
   int iVar19;
   undefined4 in_register_00000084;
   ulong *puVar20;
   long in_R9;
   ulong uVar21;
   long *plVar22;
   ulong uVar23;
   float fVar24;
   undefined8 uVar25;
   float fVar27;
   float fVar28;
   float fVar31;
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   float fVar32;
   float fVar33;
   undefined1 auVar34[16];
   float fVar35;
   float fVar36;
   float fVar37;
   float fVar40;
   float fVar41;
   undefined1 auVar38[16];
   undefined1 auVar39[16];
   float fVar42;
   undefined1 auVar43[16];
   undefined1 auVar44[16];
   float fVar45;
   float fVar46;
   float fVar47;
   float fVar48;
   float fVar51;
   undefined1 auVar49[16];
   undefined1 auVar50[16];
   float fVar52;
   float in_stack_00000008;
   float local_88;
   float fStack_84;
   float fStack_80;
   float fStack_7c;
   float local_78;
   float fStack_74;
   float fStack_70;
   float fStack_6c;
   float local_68;
   float fStack_64;
   float fStack_60;
   float fStack_5c;
   undefined1 local_48[24];
   float fVar26;
   puVar20 = (ulong*)CONCAT44(in_register_00000084, param_5);
   *(undefined8*)( param_1 + 0x40 ) = 0;
   uVar10 = _LC7;
   *(undefined8*)( param_1 + 0x48 ) = 0;
   uVar11 = _LC9;
   *(undefined4*)param_1 = uVar10;
   *(undefined4*)( param_1 + 4 ) = uVar10;
   *(undefined4*)( param_1 + 8 ) = uVar10;
   *(undefined4*)( param_1 + 0xc ) = uVar10;
   *(undefined4*)( param_1 + 0x20 ) = uVar10;
   *(undefined4*)( param_1 + 0x24 ) = uVar10;
   *(undefined4*)( param_1 + 0x28 ) = uVar10;
   *(undefined4*)( param_1 + 0x2c ) = uVar10;
   *(undefined4*)( param_1 + 0x10 ) = uVar11;
   *(undefined4*)( param_1 + 0x14 ) = uVar11;
   *(undefined4*)( param_1 + 0x18 ) = uVar11;
   *(undefined4*)( param_1 + 0x1c ) = uVar11;
   *(undefined4*)( param_1 + 0x30 ) = uVar11;
   *(undefined4*)( param_1 + 0x34 ) = uVar11;
   *(undefined4*)( param_1 + 0x38 ) = uVar11;
   *(undefined4*)( param_1 + 0x3c ) = uVar11;
   uVar25 = embree::Geometry::getTimeRange();
   fVar9 = _LC5;
   fVar8 = _LC3;
   fVar26 = (float)( (ulong)uVar25 >> 0x20 );
   fVar24 = *(float*)param_4;
   if (*(float*)param_4 <= (float)uVar25) {
      fVar24 = (float)uVar25;
   }

   if (*(float*)( param_4 + 4 ) <= fVar26) {
      fVar26 = *(float*)( param_4 + 4 );
   }

   if (( fVar24 <= fVar26 ) && ( uVar21 = *puVar20 ),uVar21 < puVar20[1]) {
      do {
         while (true) {
            fVar27 = *(float*)( param_2 + 0x2c );
            fVar36 = *(float*)( param_2 + 0x28 );
            fVar37 = ( fVar24 - fVar27 ) / ( *(float*)( param_2 + 0x30 ) - fVar27 );
            fVar35 = ( fVar26 - fVar27 ) / ( *(float*)( param_2 + 0x30 ) - fVar27 );
            fVar27 = _LC15 * fVar37 * fVar36;
            if ((float)( _LC21 & (uint)fVar27 ) < _LC16) {
               fVar27 = (float)( ( uint )((float)(int)fVar27 - (float)( -(uint)(fVar27 < (float)(int)fVar27) & _LC1 )) | ~_LC21 & (uint)fVar27 );
            }

            uVar23 = 0;
            if (0.0 <= fVar27) {
               uVar23 = (ulong)(int)fVar27;
            }

            fVar27 = _LC18 * fVar35 * fVar36;
            if ((float)( _LC21 & (uint)fVar27 ) < _LC16) {
               fVar27 = (float)( ( uint )((float)(int)fVar27 + (float)( -(uint)((float)(int)fVar27 < fVar27) & _LC1 )) | ~_LC21 & (uint)fVar27 );
            }

            plVar22 = *(long**)( param_2 + 0xd0 );
            if (fVar36 <= fVar27) {
               fVar27 = fVar36;
            }

            puVar13 = (uint*)( *(long*)( param_2 + 0x60 ) * uVar21 + *(long*)( param_2 + 0x58 ) );
            uVar2 = plVar22[2];
            uVar15 = ( ulong ) * puVar13;
            if (( ( uVar15 < uVar2 ) && ( uVar14 = (ulong)puVar13[1] ),uVar14 < uVar2 )) &&( uVar16 = uVar16 < uVar2 );
            LAB_001027a9:uVar21 = uVar21 + 1;
            if (puVar20[1] <= uVar21) {
               return param_1;
            }

         }
;
         if (uVar23 <= (ulong)(long)(int)fVar27) {
            plVar17 = plVar22 + uVar23 * 6;
            do {
               lVar3 = plVar17[1];
               lVar4 = *plVar17;
               pfVar1 = (float*)( lVar4 + uVar15 * lVar3 );
               auVar49._0_4_ = -(uint)(fVar9 < *pfVar1 && *pfVar1 < fVar8);
               auVar49._4_4_ = -(uint)(fVar9 < pfVar1[1] && pfVar1[1] < fVar8);
               auVar49._8_4_ = -(uint)(fVar9 < pfVar1[2] && pfVar1[2] < fVar8);
               auVar49._12_4_ = -(uint)(fVar9 < pfVar1[3] && pfVar1[3] < fVar8);
               uVar18 = movmskps((int)( uVar15 * lVar3 ), auVar49);
               if (( ~uVar18 & 7 ) != 0) goto LAB_001027a9;
               pfVar1 = (float*)( lVar4 + uVar14 * lVar3 );
               auVar38._0_4_ = -(uint)(fVar9 < *pfVar1 && *pfVar1 < fVar8);
               auVar38._4_4_ = -(uint)(fVar9 < pfVar1[1] && pfVar1[1] < fVar8);
               auVar38._8_4_ = -(uint)(fVar9 < pfVar1[2] && pfVar1[2] < fVar8);
               auVar38._12_4_ = -(uint)(fVar9 < pfVar1[3] && pfVar1[3] < fVar8);
               uVar18 = movmskps((int)( uVar14 * lVar3 ), auVar38);
               if (( ~uVar18 & 7 ) != 0) goto LAB_001027a9;
               pfVar1 = (float*)( lVar4 + lVar3 * uVar16 );
               auVar34._0_4_ = -(uint)(fVar9 < *pfVar1 && *pfVar1 < fVar8);
               auVar34._4_4_ = -(uint)(fVar9 < pfVar1[1] && pfVar1[1] < fVar8);
               auVar34._8_4_ = -(uint)(fVar9 < pfVar1[2] && pfVar1[2] < fVar8);
               auVar34._12_4_ = -(uint)(fVar9 < pfVar1[3] && pfVar1[3] < fVar8);
               uVar18 = movmskps((int)( lVar3 * uVar16 ), auVar34);
               if (( ~uVar18 & 7 ) != 0) goto LAB_001027a9;
               uVar23 = uVar23 + 1;
               plVar17 = plVar17 + 6;
            }
 while ( uVar23 <= (ulong)(long)(int)fVar27 );
         }

         fVar28 = fVar36 * fVar37;
         fVar45 = fVar36 * fVar35;
         fVar27 = fVar28;
         if ((float)( _LC21 & (uint)fVar28 ) < _LC16) {
            fVar27 = (float)( ~_LC21 & (uint)fVar28 | ( uint )((float)(int)fVar28 - (float)( -(uint)(fVar28 < (float)(int)fVar28) & _LC1 )) );
         }

         fVar31 = fVar45;
         if ((float)( _LC21 & (uint)fVar45 ) < _LC16) {
            fVar31 = (float)( ~_LC21 & (uint)fVar45 | ( uint )((float)(int)fVar45 + (float)( -(uint)((float)(int)fVar45 < fVar45) & 0x3f800000 )) );
         }

         iVar12 = (int)fVar27;
         if (fVar27 <= 0.0) {
            iVar19 = 0;
            plVar17 = plVar22;
         }
 else {
            fVar28 = fVar28 - fVar27;
            plVar17 = plVar22 + (long)iVar12 * 6;
            iVar19 = iVar12;
         }

         if (iVar12 < 0) {
            iVar12 = -1;
         }

         fVar27 = fVar31;
         if (fVar36 <= fVar31) {
            fVar27 = fVar36;
         }

         iVar7 = (int)fVar36 + 1;
         if ((int)fVar31 < (int)fVar36 + 1) {
            iVar7 = (int)fVar31;
         }

         lVar3 = *plVar17;
         lVar4 = plVar17[1];
         auVar49 = *(undefined1(*) [16])( lVar3 + uVar15 * lVar4 );
         auVar38 = *(undefined1(*) [16])( lVar3 + uVar14 * lVar4 );
         auVar34 = *(undefined1(*) [16])( lVar3 + lVar4 * uVar16 );
         auVar29 = minps(auVar49, auVar38);
         auVar49 = maxps(auVar49, auVar38);
         lVar3 = plVar22[(long)(int)fVar27 * 6];
         lVar4 = ( plVar22 + (long)(int)fVar27 * 6 )[1];
         auVar29 = minps(auVar29, auVar34);
         auVar50 = maxps(auVar49, auVar34);
         auVar49 = *(undefined1(*) [16])( lVar3 + uVar15 * lVar4 );
         auVar38 = *(undefined1(*) [16])( lVar3 + uVar14 * lVar4 );
         auVar34 = *(undefined1(*) [16])( lVar3 + lVar4 * uVar16 );
         auVar30 = minps(auVar49, auVar38);
         auVar38 = maxps(auVar49, auVar38);
         auVar49 = minps(auVar30, auVar34);
         auVar38 = maxps(auVar38, auVar34);
         fVar41 = auVar50._0_4_;
         fVar31 = auVar38._0_4_;
         fVar42 = auVar50._4_4_;
         fVar32 = auVar38._4_4_;
         fVar33 = auVar38._8_4_;
         fVar40 = auVar38._12_4_;
         fVar47 = auVar50._12_4_;
         fVar46 = auVar50._8_4_;
         fStack_74 = auVar29._4_4_;
         fStack_70 = auVar29._8_4_;
         fStack_6c = auVar29._12_4_;
         fStack_84 = auVar49._4_4_;
         fStack_80 = auVar49._8_4_;
         fStack_7c = auVar49._12_4_;
         local_78 = auVar29._0_4_;
         local_88 = auVar49._0_4_;
         if (iVar7 - iVar12 == 1) {
            fVar36 = 1.0;
            if (fVar28 <= 0.0) {
               fVar28 = 0.0;
            }
 else {
               fVar36 = 1.0 - fVar28;
            }

            auVar29._0_4_ = fVar28 * local_88 + fVar36 * local_78;
            auVar29._4_4_ = fVar28 * fStack_84 + fVar36 * fStack_74;
            auVar29._8_4_ = fVar28 * fStack_80 + fVar36 * fStack_70;
            auVar29._12_4_ = fVar28 * fStack_7c + fVar36 * fStack_6c;
            fVar27 = fVar27 - fVar45;
            auVar30._0_4_ = fVar28 * fVar31 + fVar36 * fVar41;
            auVar30._4_4_ = fVar28 * fVar32 + fVar36 * fVar42;
            auVar30._8_4_ = fVar28 * fVar33 + fVar36 * fVar46;
            auVar30._12_4_ = fVar28 * fVar40 + fVar36 * fVar47;
            fVar36 = 1.0;
            if (fVar27 <= 0.0) {
               fVar27 = 0.0;
            }
 else {
               fVar36 = 1.0 - fVar27;
            }

            auVar50._0_4_ = fVar41 * fVar27 + fVar31 * fVar36;
            auVar50._4_4_ = fVar42 * fVar27 + fVar32 * fVar36;
            auVar50._8_4_ = fVar46 * fVar27 + fVar33 * fVar36;
            auVar50._12_4_ = fVar47 * fVar27 + fVar40 * fVar36;
            auVar39._0_4_ = local_78 * fVar27 + fVar36 * local_88;
            auVar39._4_4_ = fStack_74 * fVar27 + fVar36 * fStack_84;
            auVar39._8_4_ = fStack_70 * fVar27 + fVar36 * fStack_80;
            auVar39._12_4_ = fStack_6c * fVar27 + fVar36 * fStack_7c;
         }
 else {
            lVar3 = plVar22[(long)( iVar19 + 1 ) * 6];
            lVar4 = ( plVar22 + (long)( iVar19 + 1 ) * 6 )[1];
            auVar49 = *(undefined1(*) [16])( lVar3 + uVar15 * lVar4 );
            auVar38 = *(undefined1(*) [16])( lVar3 + uVar14 * lVar4 );
            auVar34 = *(undefined1(*) [16])( lVar3 + lVar4 * uVar16 );
            lVar3 = plVar22[(long)( (int)fVar27 + -1 ) * 6];
            lVar4 = ( plVar22 + (long)( (int)fVar27 + -1 ) * 6 )[1];
            auVar29 = minps(auVar49, auVar38);
            auVar49 = maxps(auVar49, auVar38);
            auVar30 = minps(auVar29, auVar34);
            auVar50 = maxps(auVar49, auVar34);
            auVar49 = *(undefined1(*) [16])( lVar3 + uVar15 * lVar4 );
            auVar38 = *(undefined1(*) [16])( lVar3 + uVar14 * lVar4 );
            auVar34 = *(undefined1(*) [16])( lVar3 + lVar4 * uVar16 );
            auVar29 = maxps(auVar49, auVar38);
            auVar38 = minps(auVar49, auVar38);
            auVar49 = maxps(auVar29, auVar34);
            auVar38 = minps(auVar38, auVar34);
            fVar52 = 1.0;
            if (fVar28 <= 0.0) {
               fVar28 = 0.0;
            }
 else {
               fVar52 = 1.0 - fVar28;
            }

            fVar27 = fVar27 - fVar45;
            fVar45 = 1.0;
            local_68 = auVar30._0_4_;
            fStack_64 = auVar30._4_4_;
            fStack_60 = auVar30._8_4_;
            fStack_5c = auVar30._12_4_;
            auVar30._0_4_ = auVar50._0_4_ * fVar28 + fVar41 * fVar52;
            auVar30._4_4_ = auVar50._4_4_ * fVar28 + fVar42 * fVar52;
            auVar30._8_4_ = auVar50._8_4_ * fVar28 + fVar46 * fVar52;
            auVar30._12_4_ = auVar50._12_4_ * fVar28 + fVar47 * fVar52;
            auVar29._0_4_ = fVar28 * local_68 + fVar52 * local_78;
            auVar29._4_4_ = fVar28 * fStack_64 + fVar52 * fStack_74;
            auVar29._8_4_ = fVar28 * fStack_60 + fVar52 * fStack_70;
            auVar29._12_4_ = fVar28 * fStack_5c + fVar52 * fStack_6c;
            if (fVar27 <= 0.0) {
               fVar27 = 0.0;
            }
 else {
               fVar45 = 1.0 - fVar27;
            }

            iVar12 = iVar12 + 1;
            auVar50._0_4_ = auVar49._0_4_ * fVar27 + fVar31 * fVar45;
            auVar50._4_4_ = auVar49._4_4_ * fVar27 + fVar32 * fVar45;
            auVar50._8_4_ = auVar49._8_4_ * fVar27 + fVar33 * fVar45;
            auVar50._12_4_ = auVar49._12_4_ * fVar27 + fVar40 * fVar45;
            auVar39._0_4_ = fVar27 * auVar38._0_4_ + fVar45 * local_88;
            auVar39._4_4_ = fVar27 * auVar38._4_4_ + fVar45 * fStack_84;
            auVar39._8_4_ = fVar27 * auVar38._8_4_ + fVar45 * fStack_80;
            auVar39._12_4_ = fVar27 * auVar38._12_4_ + fVar45 * fStack_7c;
            if (iVar12 < iVar7) {
               plVar22 = plVar22 + (long)iVar12 * 6;
               do {
                  lVar3 = plVar22[1];
                  lVar4 = *plVar22;
                  fVar27 = (float)iVar12;
                  iVar12 = iVar12 + 1;
                  plVar22 = plVar22 + 6;
                  fVar33 = ( fVar27 / fVar36 - fVar37 ) / ( fVar35 - fVar37 );
                  fVar46 = 1.0 - fVar33;
                  auVar49 = *(undefined1(*) [16])( lVar4 + uVar15 * lVar3 );
                  auVar38 = *(undefined1(*) [16])( lVar4 + uVar14 * lVar3 );
                  auVar34 = *(undefined1(*) [16])( lVar4 + lVar3 * uVar16 );
                  auVar43 = maxps(auVar49, auVar38);
                  auVar49 = minps(auVar49, auVar38);
                  fVar40 = auVar39._4_4_;
                  fVar41 = auVar39._8_4_;
                  fVar42 = auVar39._12_4_;
                  fVar45 = auVar50._4_4_;
                  fVar31 = auVar50._8_4_;
                  fVar32 = auVar50._12_4_;
                  auVar38 = maxps(auVar43, auVar34);
                  auVar49 = minps(auVar49, auVar34);
                  fVar27 = auVar29._4_4_;
                  fVar28 = auVar29._12_4_;
                  fVar51 = auVar29._8_4_;
                  fVar47 = auVar30._4_4_;
                  fVar52 = auVar30._8_4_;
                  fVar48 = auVar30._12_4_;
                  auVar43._0_4_ = auVar49._0_4_ - ( auVar29._0_4_ * fVar46 + fVar33 * auVar39._0_4_ );
                  auVar43._4_4_ = auVar49._4_4_ - ( fVar27 * fVar46 + fVar33 * fVar40 );
                  auVar43._8_4_ = auVar49._8_4_ - ( fVar51 * fVar46 + fVar33 * fVar41 );
                  auVar43._12_4_ = auVar49._12_4_ - ( fVar28 * fVar46 + fVar33 * fVar42 );
                  auVar44._0_4_ = auVar38._0_4_ - ( fVar33 * auVar50._0_4_ + fVar46 * auVar30._0_4_ );
                  auVar44._4_4_ = auVar38._4_4_ - ( fVar33 * fVar45 + fVar46 * fVar47 );
                  auVar44._8_4_ = auVar38._8_4_ - ( fVar33 * fVar31 + fVar46 * fVar52 );
                  auVar44._12_4_ = auVar38._12_4_ - ( fVar33 * fVar32 + fVar46 * fVar48 );
                  auVar49 = minps(auVar43, (undefined1[16])0x0);
                  auVar38 = maxps(auVar44, (undefined1[16])0x0);
                  auVar29._0_4_ = auVar29._0_4_ + auVar49._0_4_;
                  auVar29._4_4_ = fVar27 + auVar49._4_4_;
                  auVar29._8_4_ = fVar51 + auVar49._8_4_;
                  auVar29._12_4_ = fVar28 + auVar49._12_4_;
                  auVar39._0_4_ = auVar39._0_4_ + auVar49._0_4_;
                  auVar39._4_4_ = fVar40 + auVar49._4_4_;
                  auVar39._8_4_ = fVar41 + auVar49._8_4_;
                  auVar39._12_4_ = fVar42 + auVar49._12_4_;
                  auVar30._0_4_ = auVar30._0_4_ + auVar38._0_4_;
                  auVar30._4_4_ = fVar47 + auVar38._4_4_;
                  auVar30._8_4_ = fVar52 + auVar38._8_4_;
                  auVar30._12_4_ = fVar48 + auVar38._12_4_;
                  auVar50._0_4_ = auVar50._0_4_ + auVar38._0_4_;
                  auVar50._4_4_ = fVar45 + auVar38._4_4_;
                  auVar50._8_4_ = fVar31 + auVar38._8_4_;
                  auVar50._12_4_ = fVar32 + auVar38._12_4_;
               }
 while ( iVar7 != iVar12 );
            }

         }

         auVar38 = minps(auVar29, auVar39);
         auVar29 = maxps(auVar30, auVar50);
         *(long*)( param_1 + 0x48 ) = *(long*)( param_1 + 0x48 ) + 1;
         local_48._0_12_ = auVar38._0_12_;
         local_48._12_4_ = in_stack_00000008;
         auVar49 = local_48._0_16_;
         auVar34 = minps(*(undefined1(*) [16])param_1, local_48._0_16_);
         local_48._12_4_ = (undefined4)uVar21;
         local_48._0_12_ = auVar29._0_12_;
         uVar21 = uVar21 + 1;
         fVar27 = auVar38._0_4_ + auVar29._0_4_;
         fVar36 = auVar38._4_4_ + auVar29._4_4_;
         fVar35 = auVar38._8_4_ + auVar29._8_4_;
         fVar37 = in_stack_00000008 + (float)local_48._12_4_;
         *(undefined1(*) [16])param_1 = auVar34;
         auVar38 = maxps(*(undefined1(*) [16])( param_1 + 0x10 ), local_48._0_16_);
         *(undefined1(*) [16])( param_1 + 0x10 ) = auVar38;
         auVar5._4_4_ = fVar36;
         auVar5._0_4_ = fVar27;
         auVar5._8_4_ = fVar35;
         auVar5._12_4_ = fVar37;
         auVar38 = minps(*(undefined1(*) [16])( param_1 + 0x20 ), auVar5);
         *(undefined1(*) [16])( param_1 + 0x20 ) = auVar38;
         auVar6._4_4_ = fVar36;
         auVar6._0_4_ = fVar27;
         auVar6._8_4_ = fVar35;
         auVar6._12_4_ = fVar37;
         auVar38 = maxps(*(undefined1(*) [16])( param_1 + 0x30 ), auVar6);
         *(undefined1(*) [16])( param_1 + 0x30 ) = auVar38;
         *(undefined1(*) [16])( param_3 + in_R9 * 0x20 ) = auVar49;
         *(undefined1(*) [16])( param_3 + in_R9 * 0x20 + 0x10 ) = local_48._0_16_;
         in_R9 = in_R9 + 1;
      }
 while ( uVar21 < puVar20[1] );
   }

   return param_1;
}
/* embree::sse2::TriangleMeshISA::vlinearBounds(unsigned long, embree::BBox<float> const&) const */ulong embree::sse2::TriangleMeshISA::vlinearBounds(ulong param_1, BBox *param_2) {
   long lVar1;
   long lVar2;
   int iVar3;
   float *in_RCX;
   int iVar4;
   long in_RDX;
   ulong uVar5;
   uint *puVar6;
   long *plVar7;
   ulong uVar8;
   long lVar9;
   ulong uVar10;
   int iVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   float fVar20;
   float fVar21;
   float fVar22;
   float fVar23;
   float fVar24;
   float fVar25;
   float fVar26;
   float fVar27;
   float fVar28;
   float fVar29;
   undefined1 auVar30[16];
   float fVar31;
   float fVar32;
   float fVar35;
   float fVar36;
   undefined1 auVar33[16];
   undefined1 auVar34[16];
   float fVar37;
   float fVar38;
   undefined1 auVar39[16];
   float fVar40;
   float fVar41;
   float fVar44;
   float fVar45;
   undefined1 auVar42[16];
   undefined1 auVar43[16];
   float fVar46;
   fVar12 = *(float*)( param_2 + 0x2c );
   fVar14 = *(float*)( param_2 + 0x28 );
   fVar31 = ( *in_RCX - fVar12 ) / ( *(float*)( param_2 + 0x30 ) - fVar12 );
   fVar29 = ( in_RCX[1] - fVar12 ) / ( *(float*)( param_2 + 0x30 ) - fVar12 );
   fVar15 = fVar14 * fVar31;
   fVar40 = fVar14 * fVar29;
   fVar12 = fVar15;
   if ((float)( (uint)fVar15 & _LC21 ) < _LC16) {
      fVar12 = (float)( ( uint )((float)(int)fVar15 - (float)( -(uint)(fVar15 < (float)(int)fVar15) & (uint)_LC1 )) | ~_LC21 & (uint)fVar15 );
   }

   fVar20 = fVar40;
   if ((float)( (uint)fVar40 & _LC21 ) < _LC16) {
      fVar20 = (float)( ( uint )((float)( -(uint)((float)(int)fVar40 < fVar40) & (uint)_LC1 ) + (float)(int)fVar40) | ~_LC21 & (uint)fVar40 );
   }

   iVar4 = (int)fVar12;
   if (fVar12 <= 0.0) {
      lVar9 = 0;
      iVar11 = 0;
   }
 else {
      fVar15 = fVar15 - fVar12;
      lVar9 = (long)iVar4 * 0x30;
      iVar11 = iVar4;
   }

   if (iVar4 < 0) {
      iVar4 = -1;
   }

   fVar12 = fVar20;
   if (fVar14 <= fVar20) {
      fVar12 = fVar14;
   }

   iVar3 = (int)fVar14 + 1;
   if ((int)fVar20 < (int)fVar14 + 1) {
      iVar3 = (int)fVar20;
   }

   lVar1 = *(long*)( param_2 + 0xd0 );
   puVar6 = (uint*)( in_RDX * *(long*)( param_2 + 0x60 ) + *(long*)( param_2 + 0x58 ) );
   uVar8 = ( ulong ) * puVar6;
   lVar2 = *(long*)( lVar1 + lVar9 );
   lVar9 = ( (long*)( lVar1 + lVar9 ) )[1];
   auVar30 = *(undefined1(*) [16])( lVar2 + uVar8 * lVar9 );
   uVar10 = (ulong)puVar6[1];
   auVar33 = *(undefined1(*) [16])( lVar2 + lVar9 * uVar10 );
   uVar5 = (ulong)puVar6[2];
   auVar42 = maxps(auVar30, auVar33);
   plVar7 = (long*)( (long)(int)fVar12 * 0x30 + lVar1 );
   auVar33 = minps(auVar30, auVar33);
   auVar30 = *(undefined1(*) [16])( lVar2 + lVar9 * uVar5 );
   lVar9 = *plVar7;
   lVar2 = plVar7[1];
   auVar43 = maxps(auVar42, auVar30);
   auVar34 = minps(auVar33, auVar30);
   auVar30 = *(undefined1(*) [16])( lVar9 + lVar2 * uVar8 );
   auVar33 = *(undefined1(*) [16])( lVar9 + lVar2 * uVar5 );
   auVar42 = *(undefined1(*) [16])( lVar9 + lVar2 * uVar10 );
   auVar39 = maxps(auVar30, auVar42);
   auVar30 = minps(auVar30, auVar42);
   auVar42 = maxps(auVar39, auVar33);
   auVar30 = minps(auVar30, auVar33);
   fVar32 = auVar34._0_4_;
   fVar35 = auVar34._4_4_;
   fVar36 = auVar34._8_4_;
   fVar37 = auVar34._12_4_;
   fVar20 = auVar30._0_4_;
   fVar21 = auVar30._4_4_;
   fVar13 = auVar30._8_4_;
   fVar38 = auVar30._12_4_;
   fVar41 = auVar43._0_4_;
   fVar25 = auVar42._0_4_;
   fVar44 = auVar43._4_4_;
   fVar45 = auVar43._8_4_;
   fVar46 = auVar43._12_4_;
   fVar26 = auVar42._4_4_;
   fVar27 = auVar42._8_4_;
   fVar28 = auVar42._12_4_;
   if (iVar3 - iVar4 == 1) {
      if (0.0 < fVar15) {
         fVar14 = _LC1 - fVar15;
      }
 else {
         fVar15 = 0.0;
         fVar14 = _LC1;
      }

      fVar16 = fVar15 * fVar20 + fVar14 * fVar32;
      fVar17 = fVar15 * fVar21 + fVar14 * fVar35;
      fVar18 = fVar15 * fVar13 + fVar14 * fVar36;
      fVar19 = fVar15 * fVar38 + fVar14 * fVar37;
      fVar12 = fVar12 - fVar40;
      fVar40 = fVar15 * fVar25 + fVar14 * fVar41;
      fVar22 = fVar15 * fVar26 + fVar14 * fVar44;
      fVar23 = fVar15 * fVar27 + fVar14 * fVar45;
      fVar24 = fVar15 * fVar28 + fVar14 * fVar46;
      if (fVar12 <= 0.0) {
         fVar12 = 0.0;
         fVar14 = _LC1;
      }
 else {
         fVar14 = _LC1 - fVar12;
      }

      fVar25 = fVar41 * fVar12 + fVar25 * fVar14;
      fVar26 = fVar44 * fVar12 + fVar26 * fVar14;
      fVar27 = fVar45 * fVar12 + fVar27 * fVar14;
      fVar28 = fVar46 * fVar12 + fVar28 * fVar14;
      fVar15 = fVar12 * fVar32 + fVar14 * fVar20;
      fVar20 = fVar12 * fVar35 + fVar14 * fVar21;
      fVar21 = fVar12 * fVar36 + fVar14 * fVar13;
      fVar12 = fVar12 * fVar37 + fVar14 * fVar38;
   }
 else {
      plVar7 = (long*)( (long)( iVar11 + 1 ) * 0x30 + lVar1 );
      lVar9 = *plVar7;
      lVar2 = plVar7[1];
      auVar30 = *(undefined1(*) [16])( lVar9 + uVar8 * lVar2 );
      auVar33 = *(undefined1(*) [16])( lVar9 + uVar10 * lVar2 );
      auVar42 = *(undefined1(*) [16])( lVar9 + lVar2 * uVar5 );
      auVar34 = maxps(auVar30, auVar33);
      auVar30 = minps(auVar30, auVar33);
      plVar7 = (long*)( (long)( (int)fVar12 + -1 ) * 0x30 + lVar1 );
      lVar9 = *plVar7;
      lVar2 = plVar7[1];
      auVar39 = maxps(auVar34, auVar42);
      auVar34 = minps(auVar30, auVar42);
      auVar30 = *(undefined1(*) [16])( lVar9 + uVar8 * lVar2 );
      auVar33 = *(undefined1(*) [16])( lVar9 + uVar10 * lVar2 );
      auVar42 = *(undefined1(*) [16])( lVar9 + lVar2 * uVar5 );
      auVar43 = maxps(auVar30, auVar33);
      auVar33 = minps(auVar30, auVar33);
      auVar30 = maxps(auVar43, auVar42);
      auVar33 = minps(auVar33, auVar42);
      if (0.0 < fVar15) {
         fVar19 = _LC1 - fVar15;
      }
 else {
         fVar15 = 0.0;
         fVar19 = _LC1;
      }

      fVar12 = fVar12 - fVar40;
      fVar40 = auVar39._0_4_ * fVar15 + fVar41 * fVar19;
      fVar22 = auVar39._4_4_ * fVar15 + fVar44 * fVar19;
      fVar23 = auVar39._8_4_ * fVar15 + fVar45 * fVar19;
      fVar24 = auVar39._12_4_ * fVar15 + fVar46 * fVar19;
      fVar16 = fVar15 * auVar34._0_4_ + fVar19 * fVar32;
      fVar17 = fVar15 * auVar34._4_4_ + fVar19 * fVar35;
      fVar18 = fVar15 * auVar34._8_4_ + fVar19 * fVar36;
      fVar19 = fVar15 * auVar34._12_4_ + fVar19 * fVar37;
      if (fVar12 <= 0.0) {
         fVar12 = 0.0;
         fVar32 = _LC1;
      }
 else {
         fVar32 = _LC1 - fVar12;
      }

      iVar4 = iVar4 + 1;
      fVar25 = auVar30._0_4_ * fVar12 + fVar25 * fVar32;
      fVar26 = auVar30._4_4_ * fVar12 + fVar26 * fVar32;
      fVar27 = auVar30._8_4_ * fVar12 + fVar27 * fVar32;
      fVar28 = auVar30._12_4_ * fVar12 + fVar28 * fVar32;
      fVar15 = fVar12 * auVar33._0_4_ + fVar32 * fVar20;
      fVar20 = fVar12 * auVar33._4_4_ + fVar32 * fVar21;
      fVar21 = fVar12 * auVar33._8_4_ + fVar32 * fVar13;
      fVar12 = fVar12 * auVar33._12_4_ + fVar32 * fVar38;
      if (iVar4 < iVar3) {
         plVar7 = (long*)( lVar1 + (long)iVar4 * 0x30 );
         do {
            lVar9 = plVar7[1];
            lVar1 = *plVar7;
            fVar13 = (float)iVar4;
            iVar4 = iVar4 + 1;
            plVar7 = plVar7 + 6;
            fVar13 = ( fVar13 / fVar14 - fVar31 ) / ( fVar29 - fVar31 );
            fVar38 = _LC1 - fVar13;
            auVar30 = *(undefined1(*) [16])( lVar1 + uVar8 * lVar9 );
            auVar33 = *(undefined1(*) [16])( lVar1 + uVar10 * lVar9 );
            auVar42 = *(undefined1(*) [16])( lVar1 + lVar9 * uVar5 );
            auVar34 = maxps(auVar30, auVar33);
            auVar30 = minps(auVar30, auVar33);
            auVar34 = maxps(auVar34, auVar42);
            auVar30 = minps(auVar30, auVar42);
            auVar33._0_4_ = auVar30._0_4_ - ( fVar13 * fVar15 + fVar38 * fVar16 );
            auVar33._4_4_ = auVar30._4_4_ - ( fVar13 * fVar20 + fVar38 * fVar17 );
            auVar33._8_4_ = auVar30._8_4_ - ( fVar13 * fVar21 + fVar38 * fVar18 );
            auVar33._12_4_ = auVar30._12_4_ - ( fVar13 * fVar12 + fVar38 * fVar19 );
            auVar42._0_4_ = auVar34._0_4_ - ( fVar13 * fVar25 + fVar38 * fVar40 );
            auVar42._4_4_ = auVar34._4_4_ - ( fVar13 * fVar26 + fVar38 * fVar22 );
            auVar42._8_4_ = auVar34._8_4_ - ( fVar13 * fVar27 + fVar38 * fVar23 );
            auVar42._12_4_ = auVar34._12_4_ - ( fVar13 * fVar28 + fVar38 * fVar24 );
            auVar30 = minps(auVar33, (undefined1[16])0x0);
            auVar33 = maxps(auVar42, (undefined1[16])0x0);
            fVar16 = fVar16 + auVar30._0_4_;
            fVar17 = fVar17 + auVar30._4_4_;
            fVar18 = fVar18 + auVar30._8_4_;
            fVar19 = fVar19 + auVar30._12_4_;
            fVar15 = fVar15 + auVar30._0_4_;
            fVar20 = fVar20 + auVar30._4_4_;
            fVar21 = fVar21 + auVar30._8_4_;
            fVar12 = fVar12 + auVar30._12_4_;
            fVar40 = fVar40 + auVar33._0_4_;
            fVar22 = fVar22 + auVar33._4_4_;
            fVar23 = fVar23 + auVar33._8_4_;
            fVar24 = fVar24 + auVar33._12_4_;
            fVar25 = fVar25 + auVar33._0_4_;
            fVar26 = fVar26 + auVar33._4_4_;
            fVar27 = fVar27 + auVar33._8_4_;
            fVar28 = fVar28 + auVar33._12_4_;
         }
 while ( iVar3 != iVar4 );
      }

   }

   *(float*)param_1 = fVar16;
   *(float*)( param_1 + 4 ) = fVar17;
   *(float*)( param_1 + 8 ) = fVar18;
   *(float*)( param_1 + 0xc ) = fVar19;
   *(float*)( param_1 + 0x10 ) = fVar40;
   *(float*)( param_1 + 0x14 ) = fVar22;
   *(float*)( param_1 + 0x18 ) = fVar23;
   *(float*)( param_1 + 0x1c ) = fVar24;
   *(float*)( param_1 + 0x20 ) = fVar15;
   *(float*)( param_1 + 0x24 ) = fVar20;
   *(float*)( param_1 + 0x28 ) = fVar21;
   *(float*)( param_1 + 0x2c ) = fVar12;
   *(float*)( param_1 + 0x30 ) = fVar25;
   *(float*)( param_1 + 0x34 ) = fVar26;
   *(float*)( param_1 + 0x38 ) = fVar27;
   *(float*)( param_1 + 0x3c ) = fVar28;
   return param_1;
}
/* embree::sse2::TriangleMeshISA::~TriangleMeshISA() */void embree::sse2::TriangleMeshISA::~TriangleMeshISA(TriangleMeshISA *this) {
   long *plVar1;
   long *plVar2;
   ulong uVar3;
   *(undefined***)this = &PTR__TriangleMesh_001038e8;
   if (*(long*)( this + 0xe0 ) != 0) {
      uVar3 = 0;
      LAB_001031cb:do {
         plVar2 = *(long**)( uVar3 * 0x30 + *(long*)( this + 0xf0 ) + 0x28 );
         if (plVar2 != (long*)0x0) {
            if (*(code**)( *plVar2 + 0x18 ) != RefCount::refDec) {
               ( **(code**)( *plVar2 + 0x18 ) )();
               uVar3 = uVar3 + 1;
               if (*(ulong*)( this + 0xe0 ) <= uVar3) break;
               goto LAB_001031cb;
            }

            LOCK();
            plVar1 = plVar2 + 1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               ( **(code**)( *plVar2 + 8 ) )();
            }

         }

         uVar3 = uVar3 + 1;
      }
 while ( uVar3 < *(ulong*)( this + 0xe0 ) );
   }

   plVar2 = *(long**)( this + 0xd8 );
   if (plVar2 != (long*)0x0) {
      ( **(code**)( *plVar2 + 0x40 ) )(plVar2, *(undefined8*)( this + 0xf0 ));
   }

   if (*(long*)( this + 0xc0 ) != 0) {
      uVar3 = 0;
      LAB_0010324b:do {
         plVar2 = *(long**)( uVar3 * 0x30 + *(long*)( this + 0xd0 ) + 0x28 );
         if (plVar2 != (long*)0x0) {
            if (*(code**)( *plVar2 + 0x18 ) != RefCount::refDec) {
               ( **(code**)( *plVar2 + 0x18 ) )();
               uVar3 = uVar3 + 1;
               if (*(ulong*)( this + 0xc0 ) <= uVar3) break;
               goto LAB_0010324b;
            }

            LOCK();
            plVar1 = plVar2 + 1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               ( **(code**)( *plVar2 + 8 ) )();
            }

         }

         uVar3 = uVar3 + 1;
      }
 while ( uVar3 < *(ulong*)( this + 0xc0 ) );
   }

   plVar2 = *(long**)( this + 0xb8 );
   if (plVar2 != (long*)0x0) {
      ( **(code**)( *plVar2 + 0x40 ) )(plVar2, *(undefined8*)( this + 0xd0 ));
   }

   plVar2 = *(long**)( this + 0xb0 );
   if (plVar2 != (long*)0x0) {
      if (*(code**)( *plVar2 + 0x18 ) == RefCount::refDec) {
         LOCK();
         plVar1 = plVar2 + 1;
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            ( **(code**)( *plVar2 + 8 ) )();
         }

      }
 else {
         ( **(code**)( *plVar2 + 0x18 ) )();
      }

   }

   plVar2 = *(long**)( this + 0x80 );
   if (plVar2 != (long*)0x0) {
      if (*(code**)( *plVar2 + 0x18 ) != RefCount::refDec) {
         ( **(code**)( *plVar2 + 0x18 ) )();
         embree::Geometry::~Geometry((Geometry*)this);
         return;
      }

      LOCK();
      plVar1 = plVar2 + 1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         ( **(code**)( *plVar2 + 8 ) )();
      }

   }

   embree::Geometry::~Geometry((Geometry*)this);
   return;
}
/* embree::TriangleMesh::~TriangleMesh() */void embree::TriangleMesh::~TriangleMesh(TriangleMesh *this) {
   long *plVar1;
   long *plVar2;
   ulong uVar3;
   *(undefined***)this = &PTR__TriangleMesh_001038e8;
   if (*(long*)( this + 0xe0 ) != 0) {
      uVar3 = 0;
      LAB_0010337b:do {
         plVar2 = *(long**)( uVar3 * 0x30 + *(long*)( this + 0xf0 ) + 0x28 );
         if (plVar2 != (long*)0x0) {
            if (*(code**)( *plVar2 + 0x18 ) != RefCount::refDec) {
               ( **(code**)( *plVar2 + 0x18 ) )();
               uVar3 = uVar3 + 1;
               if (*(ulong*)( this + 0xe0 ) <= uVar3) break;
               goto LAB_0010337b;
            }

            LOCK();
            plVar1 = plVar2 + 1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               ( **(code**)( *plVar2 + 8 ) )();
            }

         }

         uVar3 = uVar3 + 1;
      }
 while ( uVar3 < *(ulong*)( this + 0xe0 ) );
   }

   plVar2 = *(long**)( this + 0xd8 );
   if (plVar2 != (long*)0x0) {
      ( **(code**)( *plVar2 + 0x40 ) )(plVar2, *(undefined8*)( this + 0xf0 ));
   }

   if (*(long*)( this + 0xc0 ) != 0) {
      uVar3 = 0;
      LAB_001033fb:do {
         plVar2 = *(long**)( uVar3 * 0x30 + *(long*)( this + 0xd0 ) + 0x28 );
         if (plVar2 != (long*)0x0) {
            if (*(code**)( *plVar2 + 0x18 ) != RefCount::refDec) {
               ( **(code**)( *plVar2 + 0x18 ) )();
               uVar3 = uVar3 + 1;
               if (*(ulong*)( this + 0xc0 ) <= uVar3) break;
               goto LAB_001033fb;
            }

            LOCK();
            plVar1 = plVar2 + 1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               ( **(code**)( *plVar2 + 8 ) )();
            }

         }

         uVar3 = uVar3 + 1;
      }
 while ( uVar3 < *(ulong*)( this + 0xc0 ) );
   }

   plVar2 = *(long**)( this + 0xb8 );
   if (plVar2 != (long*)0x0) {
      ( **(code**)( *plVar2 + 0x40 ) )(plVar2, *(undefined8*)( this + 0xd0 ));
   }

   plVar2 = *(long**)( this + 0xb0 );
   if (plVar2 != (long*)0x0) {
      if (*(code**)( *plVar2 + 0x18 ) == RefCount::refDec) {
         LOCK();
         plVar1 = plVar2 + 1;
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            ( **(code**)( *plVar2 + 8 ) )();
         }

      }
 else {
         ( **(code**)( *plVar2 + 0x18 ) )();
      }

   }

   plVar2 = *(long**)( this + 0x80 );
   if (plVar2 != (long*)0x0) {
      if (*(code**)( *plVar2 + 0x18 ) == RefCount::refDec) {
         LOCK();
         plVar1 = plVar2 + 1;
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            ( **(code**)( *plVar2 + 8 ) )();
         }

      }
 else {
         ( **(code**)( *plVar2 + 0x18 ) )();
      }

   }

   embree::Geometry::~Geometry((Geometry*)this);
   embree::alignedUSMFree(this);
   return;
}
/* embree::sse2::TriangleMeshISA::~TriangleMeshISA() */void embree::sse2::TriangleMeshISA::~TriangleMeshISA(TriangleMeshISA *this) {
   long *plVar1;
   long *plVar2;
   ulong uVar3;
   *(undefined***)this = &PTR__TriangleMesh_001038e8;
   if (*(long*)( this + 0xe0 ) != 0) {
      uVar3 = 0;
      LAB_0010351b:do {
         plVar2 = *(long**)( uVar3 * 0x30 + *(long*)( this + 0xf0 ) + 0x28 );
         if (plVar2 != (long*)0x0) {
            if (*(code**)( *plVar2 + 0x18 ) != RefCount::refDec) {
               ( **(code**)( *plVar2 + 0x18 ) )();
               uVar3 = uVar3 + 1;
               if (*(ulong*)( this + 0xe0 ) <= uVar3) break;
               goto LAB_0010351b;
            }

            LOCK();
            plVar1 = plVar2 + 1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               ( **(code**)( *plVar2 + 8 ) )();
            }

         }

         uVar3 = uVar3 + 1;
      }
 while ( uVar3 < *(ulong*)( this + 0xe0 ) );
   }

   plVar2 = *(long**)( this + 0xd8 );
   if (plVar2 != (long*)0x0) {
      ( **(code**)( *plVar2 + 0x40 ) )(plVar2, *(undefined8*)( this + 0xf0 ));
   }

   if (*(long*)( this + 0xc0 ) != 0) {
      uVar3 = 0;
      LAB_0010359b:do {
         plVar2 = *(long**)( uVar3 * 0x30 + *(long*)( this + 0xd0 ) + 0x28 );
         if (plVar2 != (long*)0x0) {
            if (*(code**)( *plVar2 + 0x18 ) != RefCount::refDec) {
               ( **(code**)( *plVar2 + 0x18 ) )();
               uVar3 = uVar3 + 1;
               if (*(ulong*)( this + 0xc0 ) <= uVar3) break;
               goto LAB_0010359b;
            }

            LOCK();
            plVar1 = plVar2 + 1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               ( **(code**)( *plVar2 + 8 ) )();
            }

         }

         uVar3 = uVar3 + 1;
      }
 while ( uVar3 < *(ulong*)( this + 0xc0 ) );
   }

   plVar2 = *(long**)( this + 0xb8 );
   if (plVar2 != (long*)0x0) {
      ( **(code**)( *plVar2 + 0x40 ) )(plVar2, *(undefined8*)( this + 0xd0 ));
   }

   plVar2 = *(long**)( this + 0xb0 );
   if (plVar2 != (long*)0x0) {
      if (*(code**)( *plVar2 + 0x18 ) == RefCount::refDec) {
         LOCK();
         plVar1 = plVar2 + 1;
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            ( **(code**)( *plVar2 + 8 ) )();
         }

      }
 else {
         ( **(code**)( *plVar2 + 0x18 ) )();
      }

   }

   plVar2 = *(long**)( this + 0x80 );
   if (plVar2 != (long*)0x0) {
      if (*(code**)( *plVar2 + 0x18 ) == RefCount::refDec) {
         LOCK();
         plVar1 = plVar2 + 1;
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            ( **(code**)( *plVar2 + 8 ) )();
         }

      }
 else {
         ( **(code**)( *plVar2 + 0x18 ) )();
      }

   }

   embree::Geometry::~Geometry((Geometry*)this);
   embree::alignedUSMFree(this);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* embree::TriangleMesh::~TriangleMesh() */void embree::TriangleMesh::~TriangleMesh(TriangleMesh *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* embree::sse2::TriangleMeshISA::~TriangleMeshISA() */void embree::sse2::TriangleMeshISA::~TriangleMeshISA(TriangleMeshISA *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


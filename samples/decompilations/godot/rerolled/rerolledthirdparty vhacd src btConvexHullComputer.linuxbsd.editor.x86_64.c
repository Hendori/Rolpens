/* VHACD::pointCmp(VHACD::btConvexHullInternal::Point32 const&, VHACD::btConvexHullInternal::Point32
   const&) */undefined4 VHACD::pointCmp(Point32 *param_1, Point32 *param_2) {
   undefined4 uVar1;
   uVar1 = 1;
   if (( *(int*)( param_2 + 4 ) <= *(int*)( param_1 + 4 ) ) && ( uVar1 = 0 * (int*)( param_1 + 4 ) == *(int*)( param_2 + 4 ) )) {
      uVar1 = 1;
      if (( *(int*)param_2 <= *(int*)param_1 ) && ( uVar1 = 0 * (int*)param_1 == *(int*)param_2 )) {
         return CONCAT31(( int3 )(( uint ) * (int*)( param_2 + 8 ) >> 8), *(int*)( param_1 + 8 ) < *(int*)( param_2 + 8 ));
      }

   }

   return uVar1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* VHACD::btConvexHullInternal::Int128::toScalar() const [clone .isra.0] */undefined8 VHACD::btConvexHullInternal::Int128::toScalar(void) {
   long lVar1;
   long in_RSI;
   ulong in_RDI;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   float fVar4;
   if (in_RSI < 0) {
      while (true) {
         lVar1 = ( ulong )(in_RDI == 0) - in_RSI;
         in_RSI = -0x8000000000000000;
         lVar1 = lVar1 + -1;
         if (-1 < lVar1) break;
         in_RDI = 0;
      }
;
      if ((long)in_RDI < 1) {
         fVar4 = (float)(long)-in_RDI;
      }
 else {
         fVar4 = (float)-in_RDI;
      }

      return CONCAT44(_UNK_001093a4, ( uint )((float)lVar1 * _LC0 + fVar4) ^ __LC1);
   }

   auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
   if (-1 < (long)in_RDI) {
      auVar2._0_4_ = (float)in_RSI * _LC0 + (float)(long)in_RDI;
      return auVar2._0_8_;
   }

   auVar3._0_4_ = (float)in_RSI * _LC0 + (float)in_RDI;
   auVar3._4_12_ = auVar2._4_12_;
   return auVar3._0_8_;
}
/* VHACD::btConvexHullInternal::Int128::TEMPNAMEPLACEHOLDERVALUE(long) const */undefined1[16];VHACD::btConvexHullInternal::Int128::operator *(Int128 *this,long param_1) {
   byte bVar1;
   ulong uVar2;
   long lVar3;
   ulong uVar4;
   long lVar5;
   ulong uVar6;
   ulong uVar7;
   ulong uVar8;
   ulong uVar9;
   bool bVar10;
   undefined1 auVar11[16];
   lVar3 = *(long*)( this + 8 );
   uVar7 = *(ulong*)this;
   lVar5 = lVar3;
   if (lVar3 < 0) {
      bVar10 = uVar7 == 0;
      uVar7 = -uVar7;
      lVar5 = ( (ulong)bVar10 - lVar3 ) + -1;
   }

   bVar1 = ( byte )((ulong)lVar3 >> 0x38);
   if (param_1 < 0) {
      bVar1 = ~bVar1;
      param_1 = -param_1;
   }

   uVar4 = ( uVar7 & 0xffffffff ) * ( (ulong)param_1 >> 0x20 );
   uVar6 = ( param_1 & 0xffffffffU ) * ( uVar7 >> 0x20 );
   uVar2 = ( uVar7 & 0xffffffff ) * ( param_1 & 0xffffffffU );
   uVar9 = ( uVar4 & 0xffffffff ) + ( uVar6 & 0xffffffff );
   uVar8 = uVar9 << 0x20;
   lVar3 = uVar2 + uVar8;
   lVar5 = param_1 * lVar5 + ( ( ( uVar4 >> 0x20 ) + ( uVar6 >> 0x20 ) + ( (ulong)param_1 >> 0x20 ) * ( uVar7 >> 0x20 ) + ( uVar9 >> 0x20 ) + 1 ) - (ulong)!CARRY8(uVar2,uVar8) );
   if ((char)bVar1 < '\0') {
      bVar10 = lVar3 != 0;
      lVar3 = -lVar3;
      lVar5 = -lVar5 - (ulong)bVar10;
   }

   auVar11._8_8_ = lVar5;
   auVar11._0_8_ = lVar3;
   return auVar11;
}
/* VHACD::btConvexHullInternal::Int128::mul(long, long) */undefined1[16];VHACD::btConvexHullInternal::Int128::mul(long param_1, long param_2) {
   byte bVar1;
   ulong uVar2;
   long lVar3;
   ulong uVar4;
   long lVar5;
   ulong uVar6;
   long lVar7;
   ulong uVar8;
   ulong uVar9;
   undefined1 auVar10[16];
   uVar4 = -param_1;
   if (0 < param_1) {
      uVar4 = param_1;
   }

   bVar1 = ( byte )((ulong)param_1 >> 0x38);
   if (param_2 < 0) {
      bVar1 = ~bVar1;
      param_2 = -param_2;
   }

   uVar6 = ( uVar4 & 0xffffffff ) * ( (ulong)param_2 >> 0x20 );
   uVar9 = ( param_2 & 0xffffffffU ) * ( uVar4 >> 0x20 );
   uVar2 = ( uVar4 & 0xffffffff ) * ( param_2 & 0xffffffffU );
   uVar8 = ( uVar6 & 0xffffffff ) + ( uVar9 & 0xffffffff );
   lVar5 = ( uVar8 >> 0x20 ) + ( uVar6 >> 0x20 ) + ( uVar9 >> 0x20 ) + ( (ulong)param_2 >> 0x20 ) * ( uVar4 >> 0x20 );
   uVar8 = uVar8 << 0x20;
   lVar3 = uVar2 + uVar8;
   if (CARRY8(uVar2, uVar8)) {
      lVar5 = lVar5 + 1;
   }

   lVar7 = lVar3;
   if ((char)bVar1 < '\0') {
      lVar7 = -lVar3;
      lVar5 = -lVar5 - ( ulong )(lVar3 != 0);
   }

   auVar10._8_8_ = lVar5;
   auVar10._0_8_ = lVar7;
   return auVar10;
}
/* VHACD::btConvexHullInternal::Int128::mul(unsigned long, unsigned long) */undefined1[16];VHACD::btConvexHullInternal::Int128::mul(ulong param_1, ulong param_2) {
   ulong uVar1;
   ulong uVar2;
   long lVar3;
   ulong uVar4;
   ulong uVar5;
   undefined1 auVar6[16];
   uVar4 = ( param_1 & 0xffffffff ) * ( param_2 >> 0x20 );
   uVar2 = ( param_2 & 0xffffffff ) * ( param_1 >> 0x20 );
   uVar1 = ( param_1 & 0xffffffff ) * ( param_2 & 0xffffffff );
   uVar5 = ( uVar4 & 0xffffffff ) + ( uVar2 & 0xffffffff );
   lVar3 = ( uVar2 >> 0x20 ) + ( uVar4 >> 0x20 ) + ( param_2 >> 0x20 ) * ( param_1 >> 0x20 ) + ( uVar5 >> 0x20 );
   uVar5 = uVar5 << 0x20;
   auVar6._0_8_ = uVar1 + uVar5;
   if (CARRY8(uVar1, uVar5)) {
      lVar3 = lVar3 + 1;
   }

   auVar6._8_8_ = lVar3;
   return auVar6;
}
/* VHACD::btConvexHullInternal::Rational64::compare(VHACD::btConvexHullInternal::Rational64 const&)
   const */int VHACD::btConvexHullInternal::Rational64::compare(Rational64 *this, Rational64 *param_1) {
   int iVar1;
   ulong uVar2;
   ulong uVar3;
   ulong uVar4;
   ulong uVar5;
   ulong uVar6;
   ulong uVar7;
   ulong uVar8;
   ulong uVar9;
   ulong uVar10;
   ulong uVar11;
   iVar1 = *(int*)( this + 0x10 );
   if (iVar1 != *(int*)( param_1 + 0x10 )) {
      return iVar1 - *(int*)( param_1 + 0x10 );
   }

   if (iVar1 == 0) {
      return iVar1;
   }

   uVar2 = *(ulong*)( param_1 + 8 ) & 0xffffffff;
   uVar4 = *(ulong*)( param_1 + 8 ) >> 0x20;
   uVar5 = *(ulong*)this & 0xffffffff;
   uVar9 = *(ulong*)this >> 0x20;
   uVar10 = uVar2 * uVar9;
   uVar3 = uVar5 * uVar4;
   uVar6 = ( uVar3 & 0xffffffff ) + ( uVar10 & 0xffffffff );
   uVar7 = uVar6 << 0x20;
   uVar5 = uVar5 * uVar2;
   uVar8 = uVar7 + uVar5;
   uVar2 = *(ulong*)( this + 8 ) & 0xffffffff;
   uVar5 = ( uVar3 >> 0x20 ) + ( uVar10 >> 0x20 ) + uVar4 * uVar9 + ( uVar6 >> 0x20 ) + (ulong)CARRY8(uVar7, uVar5);
   uVar10 = *(ulong*)( this + 8 ) >> 0x20;
   uVar3 = *(ulong*)param_1 & 0xffffffff;
   uVar6 = *(ulong*)param_1 >> 0x20;
   uVar4 = uVar2 * uVar6;
   uVar11 = uVar3 * uVar10;
   uVar2 = uVar2 * uVar3;
   uVar9 = ( uVar4 & 0xffffffff ) + ( uVar11 & 0xffffffff );
   uVar7 = uVar9 << 0x20;
   uVar3 = uVar2 + uVar7;
   uVar2 = ( uVar4 >> 0x20 ) + ( uVar11 >> 0x20 ) + uVar6 * uVar10 + ( uVar9 >> 0x20 ) + (ulong)CARRY8(uVar2, uVar7);
   if (uVar2 <= uVar5) {
      if (uVar5 <= uVar2) {
         if (uVar8 < uVar3) goto LAB_001003c0;
         if (uVar8 <= uVar3) {
            iVar1 = 0;
         }

      }

      return iVar1;
   }

   LAB_001003c0:return -iVar1;
}
/* VHACD::btConvexHullInternal::Rational128::compare(long) const */int VHACD::btConvexHullInternal::Rational128::compare(Rational128 *this, long param_1) {
   int iVar1;
   int iVar2;
   undefined1 auVar3[16];
   iVar2 = *(int*)( this + 0x20 );
   if (this[0x24] != (Rational128)0x0) {
      iVar1 = -(uint)((long)iVar2 * *(long *)this < param_1);
      if (param_1 < (long)iVar2 * *(long*)this) {
         iVar1 = 1;
      }

      return iVar1;
   }

   if (param_1 < 1) {
      if (param_1 == 0) {
         return iVar2;
      }

      if (-1 < iVar2) {
         return 1;
      }

      param_1 = -param_1;
   }
 else if (iVar2 < 1) {
      return -1;
   }

   auVar3 = Int128::operator *((Int128*)( this + 0x10 ), param_1);
   if (*(ulong*)( this + 8 ) < auVar3._8_8_) {
      LAB_00100440:return -iVar2;
   }

   if (*(ulong*)( this + 8 ) <= auVar3._8_8_) {
      if (*(ulong*)this < auVar3._0_8_) goto LAB_00100440;
      if (*(ulong*)this <= auVar3._0_8_) {
         iVar2 = 0;
      }

   }

   return iVar2;
}
/* VHACD::btConvexHullInternal::newEdgePair(VHACD::btConvexHullInternal::Vertex*,
   VHACD::btConvexHullInternal::Vertex*) */undefined1 (*) [16] __thiscallVHACD::btConvexHullInternal::newEdgePair(btConvexHullInternal *this, Vertex *param_1, Vertex *param_2) {
   undefined4 uVar1;
   undefined8 uVar2;
   undefined1(*pauVar3)[16];
   int iVar4;
   undefined1(*pauVar5)[16];
   undefined8 *puVar6;
   undefined1(*pauVar7)[16];
   int iVar8;
   undefined1(*pauVar9)[16];
   pauVar5 = *(undefined1(**) [16])( this + 0x50 );
   if (pauVar5 == (undefined1(*) [16])0x0) {
      puVar6 = *(undefined8**)( this + 0x48 );
      if (puVar6 == (undefined8*)0x0) {
         puVar6 = (undefined8*)VHACD::btAlignedAllocInternal(0x18, 0x10);
         iVar4 = *(int*)( this + 0x58 );
         puVar6[2] = 0;
         *(int*)( puVar6 + 1 ) = iVar4;
         pauVar5 = (undefined1(*) [16])VHACD::btAlignedAllocInternal((long)iVar4 * 0x30, 0x10);
         *puVar6 = pauVar5;
         puVar6[2] = *(undefined8*)( this + 0x40 );
         *(undefined8**)( this + 0x40 ) = puVar6;
      }
 else {
         pauVar5 = (undefined1(*) [16])*puVar6;
         *(undefined8*)( this + 0x48 ) = puVar6[2];
      }

      iVar4 = *(int*)( puVar6 + 1 );
      iVar8 = 0;
      pauVar7 = pauVar5;
      if (0 < iVar4) {
         do {
            while (true) {
               iVar8 = iVar8 + 1;
               pauVar9 = pauVar7 + 3;
               if (iVar4 <= iVar8) break;
               *(undefined1(**) [16])*pauVar7 = pauVar9;
               pauVar7 = pauVar9;
            }
;
            *(undefined8*)*pauVar7 = 0;
            pauVar7 = pauVar9;
         }
 while ( iVar4 != iVar8 );
      }

   }

   pauVar7 = *(undefined1(**) [16])*pauVar5;
   *(undefined1(**) [16])( this + 0x50 ) = pauVar7;
   *(undefined8*)pauVar5[2] = 0;
   *(undefined4*)( pauVar5[2] + 8 ) = 0;
   *pauVar5 = (undefined1[16])0x0;
   pauVar5[1] = (undefined1[16])0x0;
   if (pauVar7 == (undefined1(*) [16])0x0) {
      puVar6 = *(undefined8**)( this + 0x48 );
      if (puVar6 == (undefined8*)0x0) {
         puVar6 = (undefined8*)VHACD::btAlignedAllocInternal(0x18, 0x10);
         iVar4 = *(int*)( this + 0x58 );
         puVar6[2] = 0;
         *(int*)( puVar6 + 1 ) = iVar4;
         pauVar7 = (undefined1(*) [16])VHACD::btAlignedAllocInternal((long)iVar4 * 0x30, 0x10);
         uVar2 = *(undefined8*)( this + 0x40 );
         *puVar6 = pauVar7;
         puVar6[2] = uVar2;
         *(undefined8**)( this + 0x40 ) = puVar6;
      }
 else {
         *(undefined8*)( this + 0x48 ) = puVar6[2];
         pauVar7 = (undefined1(*) [16])*puVar6;
      }

      iVar4 = *(int*)( puVar6 + 1 );
      iVar8 = 0;
      pauVar9 = pauVar7;
      if (0 < iVar4) {
         do {
            while (true) {
               iVar8 = iVar8 + 1;
               pauVar3 = pauVar9 + 3;
               if (iVar4 <= iVar8) break;
               *(undefined1(**) [16])*pauVar9 = pauVar3;
               pauVar9 = pauVar3;
            }
;
            *(undefined8*)*pauVar9 = 0;
            pauVar9 = pauVar3;
         }
 while ( iVar8 != iVar4 );
      }

   }

   *(undefined8*)( this + 0x50 ) = *(undefined8*)*pauVar7;
   uVar1 = *(undefined4*)( this + 0xa0 );
   *pauVar7 = (undefined1[16])0x0;
   *(undefined1(**) [16])pauVar5[1] = pauVar7;
   *(undefined1(**) [16])pauVar7[1] = pauVar5;
   *(undefined4*)( pauVar5[2] + 8 ) = uVar1;
   *(undefined4*)( pauVar7[2] + 8 ) = uVar1;
   *(Vertex**)( pauVar5[1] + 8 ) = param_2;
   *(Vertex**)( pauVar7[1] + 8 ) = param_1;
   *(undefined8*)pauVar5[2] = 0;
   *(undefined8*)pauVar7[2] = 0;
   iVar4 = *(int*)( this + 0xb0 ) + 1;
   *(int*)( this + 0xb0 ) = iVar4;
   if (*(int*)( this + 0xb4 ) < iVar4) {
      *(int*)( this + 0xb4 ) = iVar4;
   }

   return pauVar5;
}
/* VHACD::btConvexHullInternal::mergeProjection(VHACD::btConvexHullInternal::IntermediateHull&,
   VHACD::btConvexHullInternal::IntermediateHull&, VHACD::btConvexHullInternal::Vertex*&,
   VHACD::btConvexHullInternal::Vertex*&) */undefined8 VHACD::btConvexHullInternal::mergeProjection(btConvexHullInternal *this, IntermediateHull *param_1, IntermediateHull *param_2, Vertex **param_3, Vertex **param_4) {
   int iVar1;
   Vertex *pVVar2;
   Vertex *pVVar3;
   Vertex *pVVar4;
   bool bVar5;
   bool bVar6;
   Vertex *pVVar7;
   Vertex *pVVar8;
   undefined8 uVar9;
   Vertex *pVVar10;
   Vertex *pVVar11;
   int iVar12;
   Vertex *pVVar13;
   int iVar14;
   Vertex *pVVar15;
   int iVar16;
   Vertex *pVVar17;
   Vertex *pVVar18;
   int iVar19;
   int iVar20;
   int iVar21;
   int iVar22;
   int iVar23;
   int iVar24;
   int iVar25;
   pVVar15 = *(Vertex**)( param_2 + 0x10 );
   if (*(long*)( *(Vertex**)( param_1 + 0x18 ) + 0x68 ) == *(long*)( pVVar15 + 0x68 )) {
      pVVar17 = *(Vertex**)( pVVar15 + 8 );
      if (pVVar15 == pVVar17) {
         *param_3 = *(Vertex**)( param_1 + 0x18 );
         if (*(long*)( pVVar15 + 0x10 ) != 0) {
            pVVar15 = *(Vertex**)( *(long*)( pVVar15 + 0x10 ) + 0x18 );
         }

         uVar9 = 0;
         goto LAB_0010089f;
      }

      pVVar2 = *(Vertex**)pVVar15;
      *(Vertex**)pVVar17 = pVVar2;
      *(Vertex**)( pVVar2 + 8 ) = pVVar17;
      if (*(Vertex**)param_2 == pVVar15) {
         if (( *(int*)( pVVar2 + 0x68 ) < *(int*)( pVVar17 + 0x68 ) ) || ( ( *(int*)( pVVar2 + 0x68 ) == *(int*)( pVVar17 + 0x68 ) && ( *(int*)( pVVar2 + 0x6c ) < *(int*)( pVVar17 + 0x6c ) ) ) )) {
            *(Vertex**)param_2 = pVVar2;
         }
 else {
            *(Vertex**)param_2 = pVVar17;
         }

      }

      pVVar3 = *(Vertex**)( param_2 + 8 );
      if (pVVar3 == pVVar15) {
         iVar1 = *(int*)( pVVar2 + 0x68 );
         iVar21 = *(int*)( pVVar17 + 0x68 );
         if (iVar21 < iVar1) {
            iVar12 = *(int*)( pVVar2 + 0x6c );
         }
 else {
            iVar19 = *(int*)( pVVar17 + 0x6c );
            if (( iVar1 != iVar21 ) || ( iVar12 = *(int*)( pVVar2 + 0x6c ) * (int*)( pVVar2 + 0x6c ) <= iVar19 )) {
               *(Vertex**)( param_2 + 8 ) = pVVar17;
               goto LAB_001006df;
            }

         }

         iVar19 = iVar12;
         *(Vertex**)( param_2 + 8 ) = pVVar2;
         pVVar17 = pVVar2;
         iVar21 = iVar1;
      }
 else {
         iVar19 = *(int*)( pVVar3 + 0x6c );
         pVVar17 = pVVar3;
         iVar21 = *(int*)( pVVar3 + 0x68 );
      }

   }
 else {
      pVVar17 = *(Vertex**)( param_2 + 8 );
      iVar19 = *(int*)( pVVar17 + 0x6c );
      iVar21 = *(int*)( pVVar17 + 0x68 );
   }

   LAB_001006df:pVVar2 = *(Vertex**)( param_1 + 8 );
   pVVar3 = *(Vertex**)param_2;
   pVVar4 = *(Vertex**)param_1;
   bVar6 = false;
   iVar1 = *(int*)( pVVar3 + 0x68 );
   iVar22 = 1;
   pVVar10 = pVVar2;
   pVVar11 = (Vertex*)0x0;
   pVVar18 = pVVar17;
   pVVar15 = (Vertex*)0x0;
   iVar12 = iVar21;
   do {
      iVar25 = *(int*)( pVVar10 + 0x68 );
      iVar20 = *(int*)( pVVar10 + 0x6c );
      iVar12 = ( iVar12 - iVar25 ) * iVar22;
      if (0 < iVar12) {
         iVar25 = iVar19 - iVar20;
         pVVar8 = pVVar10;
         if (!bVar6) goto LAB_0010090d;
         LAB_001007d3:pVVar10 = *(Vertex**)pVVar8;
         pVVar7 = pVVar8;
         pVVar13 = pVVar18;
         if (( pVVar8 != pVVar10 ) && ( iVar16 = *(int*)( pVVar10 + 0x6c ) - iVar20 ),pVVar8 = pVVar10,iVar16 < 1) goto LAB_001008b8;
         do {
            pVVar18 = *(Vertex**)pVVar13;
            pVVar8 = pVVar7;
            while (true) {
               if (pVVar13 == pVVar18) goto LAB_00100846;
               iVar16 = *(int*)( pVVar18 + 0x6c );
               iVar23 = ( *(int*)( pVVar18 + 0x68 ) - *(int*)( pVVar8 + 0x68 ) ) * iVar22;
               iVar24 = iVar16 - iVar19;
               iVar14 = ( *(int*)( pVVar18 + 0x68 ) - *(int*)( pVVar13 + 0x68 ) ) * iVar22;
               if (( ( iVar23 < 1 ) || ( -1 < iVar24 ) ) || ( ( iVar19 = iVar16 ),iVar14 != 0 && ( ( -1 < iVar14 || ( iVar14 * iVar25 <= iVar24 * iVar12 ) ) ) )) goto LAB_00100846;
               while (true) {
                  iVar12 = iVar23;
                  iVar25 = iVar19 - iVar20;
                  if (bVar6) goto LAB_001007d3;
                  LAB_0010090d:pVVar10 = *(Vertex**)( pVVar8 + 8 );
                  pVVar7 = pVVar8;
                  pVVar13 = pVVar18;
                  if (( pVVar8 == pVVar10 ) || ( iVar16 = *(int*)( pVVar10 + 0x6c ) - iVar20 ),pVVar8 = pVVar10,0 < iVar16) goto LAB_00100920;
                  LAB_001008b8:iVar23 = ( *(int*)( pVVar8 + 0x68 ) - *(int*)( pVVar7 + 0x68 ) ) * iVar22;
                  if (( iVar23 != 0 ) && ( ( -1 < iVar23 || ( iVar23 * iVar25 < iVar16 * iVar12 ) ) )) break;
                  iVar20 = *(int*)( pVVar8 + 0x6c );
                  iVar23 = ( *(int*)( pVVar18 + 0x68 ) - *(int*)( pVVar8 + 0x68 ) ) * iVar22;
               }
;
               pVVar13 = pVVar18;
               if (bVar6) break;
               LAB_00100920:pVVar18 = *(Vertex**)( pVVar13 + 8 );
               pVVar8 = pVVar7;
            }
;
         }
 while ( true );
      }

      pVVar13 = pVVar10;
      if (iVar12 != 0) {
         iVar25 = iVar19 - iVar20;
         if (!bVar6) goto LAB_001009fd;
         LAB_00100953:pVVar13 = *(Vertex**)( pVVar18 + 8 );
         if (pVVar18 == pVVar13) goto LAB_00100989;
         iVar16 = *(int*)( pVVar13 + 0x6c ) - iVar19;
         if (iVar16 < 0) goto LAB_00100989;
         do {
            iVar23 = ( *(int*)( pVVar13 + 0x68 ) - *(int*)( pVVar18 + 0x68 ) ) * iVar22;
            if (( iVar23 == 0 ) || ( ( iVar23 < 0 && ( iVar16 * iVar12 <= iVar23 * iVar25 ) ) )) {
               iVar19 = *(int*)( pVVar13 + 0x6c );
               iVar16 = ( *(int*)( pVVar13 + 0x68 ) - *(int*)( pVVar10 + 0x68 ) ) * iVar22;
               goto LAB_001009ee;
            }

            if (!bVar6) goto LAB_00100a10;
            LAB_00100989:pVVar8 = pVVar10;
            pVVar10 = *(Vertex**)( pVVar10 + 8 );
            pVVar13 = pVVar18;
            while (true) {
               if (pVVar8 == pVVar10) goto LAB_00100846;
               iVar23 = *(int*)( pVVar10 + 0x6c );
               iVar24 = iVar23 - iVar20;
               iVar14 = ( *(int*)( pVVar10 + 0x68 ) - *(int*)( pVVar8 + 0x68 ) ) * iVar22;
               iVar16 = ( *(int*)( pVVar13 + 0x68 ) - *(int*)( pVVar10 + 0x68 ) ) * iVar22;
               if (( ( -1 < iVar16 ) || ( iVar24 < 1 ) ) || ( ( iVar20 = iVar23 ),iVar14 != 0 && ( ( -1 < iVar14 || ( iVar14 * iVar25 <= iVar24 * iVar12 ) ) ) )) goto LAB_00100846;
               LAB_001009ee:iVar12 = iVar16;
               iVar25 = iVar19 - iVar20;
               pVVar18 = pVVar13;
               if (bVar6) goto LAB_00100953;
               LAB_001009fd:pVVar13 = *(Vertex**)pVVar18;
               if (( pVVar18 != pVVar13 ) && ( iVar16 = -1 < iVar16 )) break;
               LAB_00100a10:pVVar8 = pVVar10;
               pVVar10 = *(Vertex**)pVVar10;
               pVVar13 = pVVar18;
            }
;
         }
 while ( true );
      }

      do {
         pVVar8 = pVVar13;
         pVVar13 = *(Vertex**)( pVVar8 + 8 );
         if (bVar6) {
            pVVar13 = *(Vertex**)pVVar8;
         }

         pVVar7 = pVVar18;
      }
 while ( ( ( pVVar13 != pVVar10 ) && ( iVar25 == *(int*)( pVVar13 + 0x68 ) ) ) && ( bVar5 = *(int*)( pVVar13 + 0x6c ) <= iVar20 ),iVar20 = *(int*)( pVVar13 + 0x6c ),bVar5 );
      do {
         pVVar13 = pVVar7;
         if (bVar6) {
            pVVar7 = *(Vertex**)( pVVar13 + 8 );
            if (pVVar7 == pVVar18) goto LAB_0010085f;
         }
 else {
            pVVar7 = *(Vertex**)pVVar13;
            if (pVVar7 == pVVar18) goto LAB_00100a26;
         }

      }
 while ( ( iVar25 == *(int*)( pVVar7 + 0x68 ) ) && ( bVar5 = iVar19 <= *(int*)( pVVar7 + 0x6c ) ),iVar19 = *(int*)( pVVar7 + 0x6c ),bVar5 );
      LAB_00100846:if (bVar6) break;
      LAB_00100a26:iVar19 = *(int*)( pVVar3 + 0x6c );
      bVar6 = true;
      iVar22 = -1;
      pVVar10 = pVVar4;
      pVVar11 = pVVar8;
      pVVar18 = pVVar3;
      pVVar15 = pVVar13;
      iVar12 = iVar1;
   }
 while ( true );
   LAB_0010085f:*(Vertex**)( pVVar8 + 8 ) = pVVar13;
   *(Vertex**)pVVar13 = pVVar8;
   *(Vertex**)pVVar11 = pVVar15;
   *(Vertex**)( pVVar15 + 8 ) = pVVar11;
   if (iVar1 < *(int*)( pVVar4 + 0x68 )) {
      *(Vertex**)param_1 = pVVar3;
   }

   if (*(int*)( pVVar2 + 0x68 ) <= iVar21) {
      *(Vertex**)( param_1 + 8 ) = pVVar17;
   }

   *(undefined8*)( param_1 + 0x18 ) = *(undefined8*)( param_2 + 0x18 );
   *param_3 = pVVar11;
   uVar9 = 1;
   LAB_0010089f:*param_4 = pVVar15;
   return uVar9;
}
/* VHACD::btConvexHullInternal::getOrientation(VHACD::btConvexHullInternal::Edge const*,
   VHACD::btConvexHullInternal::Edge const*, VHACD::btConvexHullInternal::Point32 const&,
   VHACD::btConvexHullInternal::Point32 const&) */char VHACD::btConvexHullInternal::getOrientation(Edge *param_1, Edge *param_2, Point32 *param_3, Point32 *param_4) {
   long lVar1;
   long lVar2;
   long lVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   int iVar9;
   char cVar10;
   cVar10 = param_2 == *(Edge**)( param_1 + 8 );
   if (( *(Edge**)param_1 == param_2 ) && ( cVar10 = '\x02' ),param_2 == *(Edge**)( param_1 + 8 )) {
      lVar1 = *(long*)( param_2 + 0x18 );
      lVar2 = *(long*)( param_1 + 0x18 );
      lVar3 = *(long*)( *(long*)( param_2 + 0x10 ) + 0x18 );
      iVar5 = *(int*)( lVar2 + 0x70 ) - *(int*)( lVar3 + 0x70 );
      iVar9 = *(int*)( lVar1 + 0x70 ) - *(int*)( lVar3 + 0x70 );
      iVar8 = *(int*)( lVar2 + 0x6c ) - *(int*)( lVar3 + 0x6c );
      iVar7 = *(int*)( lVar1 + 0x6c ) - *(int*)( lVar3 + 0x6c );
      iVar4 = *(int*)( lVar2 + 0x68 ) - *(int*)( lVar3 + 0x68 );
      iVar6 = *(int*)( lVar1 + 0x68 ) - *(int*)( lVar3 + 0x68 );
      return ( 0 < (long)( iVar5 * iVar6 - iVar9 * iVar4 ) * (long)( *(int*)( param_4 + 8 ) * *(int*)param_3 - *(int*)( param_3 + 8 ) * *(int*)param_4 ) + (long)( iVar8 * iVar9 - iVar5 * iVar7 ) * (long)( *(int*)( param_3 + 8 ) * *(int*)( param_4 + 4 ) - *(int*)( param_3 + 4 ) * *(int*)( param_4 + 8 ) ) + (long)( iVar4 * iVar7 - iVar8 * iVar6 ) * (long)( *(int*)( param_3 + 4 ) * *(int*)param_4 - *(int*)param_3 * *(int*)( param_4 + 4 ) ) ) + '\x01';
   }

   return cVar10;
}
/* VHACD::btConvexHullInternal::findMaxAngle(bool, VHACD::btConvexHullInternal::Vertex const*,
   VHACD::btConvexHullInternal::Point32 const&, VHACD::btConvexHullInternal::Point64 const&,
   VHACD::btConvexHullInternal::Point64 const&, VHACD::btConvexHullInternal::Rational64&) */Edge * __thiscall
VHACD::btConvexHullInternal::findMaxAngle
          (btConvexHullInternal *this,bool param_1,Vertex *param_2,Point32 *param_3,Point64 *param_4
          ,Point64 *param_5,Rational64 *param_6){
   undefined8 uVar1;
   int iVar2;
   Edge *pEVar3;
   Edge *pEVar4;
   Edge *pEVar5;
   Edge *pEVar6;
   long in_FS_OFFSET;
   int iVar7;
   int iVar8;
   undefined8 local_68;
   int local_60;
   undefined4 local_5c;
   long local_58;
   long lStack_50;
   int local_48;
   long local_40;
   pEVar3 = *(Edge**)( param_2 + 0x10 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (pEVar3 == (Edge*)0x0) {
      pEVar6 = (Edge*)0x0;
   }
 else {
      iVar2 = *(int*)( this + 0xa0 );
      pEVar4 = pEVar3;
      pEVar5 = (Edge*)0x0;
      do {
         while (pEVar6 = pEVar5,*(int*)( pEVar4 + 0x28 ) <= iVar2) {
            LAB_00100d00:pEVar4 = *(Edge**)pEVar4;
            pEVar5 = pEVar6;
            if (pEVar3 == pEVar4) goto LAB_00100e28;
         }
;
         local_5c = 0xffffffff;
         uVar1 = *(undefined8*)( *(long*)( pEVar4 + 0x18 ) + 0x68 );
         local_60 = *(int*)( *(long*)( pEVar4 + 0x18 ) + 0x70 ) - *(int*)( param_2 + 0x70 );
         iVar7 = (int)uVar1 - (int)*(undefined8*)( param_2 + 0x68 );
         iVar8 = (int)( (ulong)uVar1 >> 0x20 ) - (int)( ( ulong ) * (undefined8*)( param_2 + 0x68 ) >> 0x20 );
         local_68 = CONCAT44(iVar8, iVar7);
         lStack_50 = *(long*)param_4 * (long)iVar7 + *(long*)( param_4 + 8 ) * (long)iVar8 + *(long*)( param_4 + 0x10 ) * (long)local_60;
         local_58 = (long)iVar7 * *(long*)param_5 + (long)iVar8 * *(long*)( param_5 + 8 ) + (long)local_60 * *(long*)( param_5 + 0x10 );
         local_48 = 1;
         if (local_58 < 1) {
            if (local_58 == 0) {
               local_58 = 0;
               local_48 = 0;
            }
 else {
               local_58 = -local_58;
               local_48 = -1;
            }

         }

         if (lStack_50 < 1) {
            if (lStack_50 == 0) {
               lStack_50 = 0;
               if (local_48 == 0) goto LAB_00100d00;
            }
 else {
               local_48 = -local_48;
               lStack_50 = -lStack_50;
            }

         }

         pEVar6 = pEVar4;
         if (pEVar5 == (Edge*)0x0) {
            *(int*)( param_6 + 0x10 ) = local_48;
            *(long*)param_6 = local_58;
            *(long*)( param_6 + 8 ) = lStack_50;
            goto LAB_00100d00;
         }

         iVar7 = Rational64::compare((Rational64*)&local_58, param_6);
         if (iVar7 < 0) {
            *(long*)param_6 = local_58;
            *(long*)( param_6 + 8 ) = lStack_50;
            *(int*)( param_6 + 0x10 ) = local_48;
            goto LAB_00100d00;
         }

         pEVar6 = pEVar5;
         if (( iVar7 != 0 ) || ( iVar7 = getOrientation(pEVar5, pEVar4, param_3, (Point32*)&local_68) ),pEVar6 = pEVar4,( iVar7 == 2 ) == param_1) goto LAB_00100d00;
         pEVar4 = *(Edge**)pEVar4;
         pEVar6 = pEVar5;
      }
 while ( pEVar3 != pEVar4 );
   }

   LAB_00100e28:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pEVar6;
}
/* VHACD::btConvexHullInternal::findEdgeForCoplanarFaces(VHACD::btConvexHullInternal::Vertex*,
   VHACD::btConvexHullInternal::Vertex*, VHACD::btConvexHullInternal::Edge*&,
   VHACD::btConvexHullInternal::Edge*&, VHACD::btConvexHullInternal::Vertex*,
   VHACD::btConvexHullInternal::Vertex*) */void VHACD::btConvexHullInternal::findEdgeForCoplanarFaces(btConvexHullInternal *this, Vertex *param_1, Vertex *param_2, Edge **param_3, Edge **param_4, Vertex *param_5, Vertex *param_6) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   int iVar4;
   Vertex *pVVar5;
   Vertex *pVVar6;
   ulong uVar7;
   ulong uVar8;
   long lVar9;
   Edge *pEVar10;
   long lVar11;
   long lVar12;
   ulong uVar13;
   int iVar14;
   int iVar15;
   long lVar16;
   long lVar17;
   Edge *pEVar18;
   int iVar19;
   long lVar20;
   ulong uVar21;
   ulong uVar22;
   int iVar23;
   long lVar24;
   long lVar25;
   ulong uVar26;
   ulong uVar27;
   Edge *pEVar28;
   Edge *pEVar29;
   int iVar30;
   int iVar31;
   ulong uVar32;
   int iVar33;
   int iVar34;
   long lVar35;
   long lVar36;
   long in_FS_OFFSET;
   bool bVar37;
   uint local_a8;
   long local_a0;
   ulong local_98;
   uint local_90;
   long local_78;
   long local_70;
   undefined4 local_68;
   long local_58;
   long local_50;
   int local_48;
   long local_40;
   pEVar29 = *param_3;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pEVar28 = *param_4;
   pVVar5 = param_1 + 0x68;
   if (pEVar29 != (Edge*)0x0) {
      pVVar5 = (Vertex*)( *(long*)( pEVar29 + 0x18 ) + 0x68 );
   }

   uVar26 = ( ulong ) * (uint*)pVVar5;
   uVar7 = ( ulong ) * (uint*)( pVVar5 + 4 );
   uVar21 = ( ulong ) * (uint*)( pVVar5 + 8 );
   pVVar6 = param_2 + 0x68;
   if (pEVar28 != (Edge*)0x0) {
      pVVar6 = (Vertex*)( *(long*)( pEVar28 + 0x18 ) + 0x68 );
   }

   iVar4 = *(int*)( param_1 + 0x70 );
   local_a8 = *(uint*)pVVar6;
   iVar33 = *(int*)( param_2 + 0x70 ) - iVar4;
   uVar1 = *(uint*)( pVVar6 + 4 );
   local_90 = *(uint*)( pVVar6 + 8 );
   iVar15 = *(int*)( param_1 + 0x6c );
   iVar31 = *(int*)( param_1 + 0x68 );
   iVar30 = *(int*)( param_2 + 0x6c ) - iVar15;
   iVar14 = *(int*)( param_2 + 0x68 ) - iVar31;
   pEVar10 = pEVar29;
   if (pEVar29 == (Edge*)0x0) {
      pEVar10 = pEVar28;
   }

   lVar9 = *(long*)( pEVar10 + 0x18 );
   iVar34 = *(int*)( lVar9 + 0x6c ) - iVar15;
   iVar19 = *(int*)( lVar9 + 0x70 ) - iVar4;
   iVar23 = *(int*)( lVar9 + 0x68 ) - iVar31;
   lVar16 = (long)( iVar30 * iVar23 - iVar14 * iVar34 );
   lVar24 = (long)( iVar14 * iVar19 - iVar23 * iVar33 );
   lVar20 = (long)( iVar34 * iVar33 - iVar19 * iVar30 );
   lVar9 = iVar15 * lVar24 + iVar31 * lVar20 + iVar4 * lVar16;
   lVar17 = lVar24 * iVar14 - lVar20 * iVar30;
   lVar35 = lVar20 * iVar33 - iVar14 * lVar16;
   lVar25 = iVar30 * lVar16 - iVar33 * lVar24;
   local_a0 = (int)*(uint*)( pVVar5 + 8 ) * lVar17 + (int)*(uint*)( pVVar5 + 4 ) * lVar35 + (int)*(uint*)pVVar5 * lVar25;
   pEVar10 = pEVar28;
   if (( pEVar29 != (Edge*)0x0 ) && ( pEVar18 = pEVar29 ),lVar36 = local_a0,uVar13 = uVar26,uVar32 = uVar21,uVar8 = uVar7,param_5 != *(Vertex**)( pEVar29 + 0x18 )) {
      do {
         pEVar18 = *(Edge**)( *(long*)( pEVar18 + 0x10 ) + 8 );
         pVVar5 = *(Vertex**)( pEVar18 + 0x18 );
         uVar26 = ( ulong ) * (int*)( pVVar5 + 0x68 );
         uVar7 = ( ulong ) * (int*)( pVVar5 + 0x6c );
         uVar21 = ( ulong ) * (int*)( pVVar5 + 0x70 );
         if (( (long)( lVar24 * uVar7 + lVar20 * uVar26 + lVar16 * uVar21 ) < lVar9 ) || ( ( *(int*)( pEVar18 + 0x28 ) == *(int*)( this + 0xa0 ) || ( local_a0 = uVar7 * lVar35 + uVar26 * lVar25 + uVar21 * lVar17 ),local_a0 <= lVar36 ) )) {
            uVar21 = uVar32 & 0xffffffff;
            uVar7 = uVar8 & 0xffffffff;
            uVar26 = uVar13 & 0xffffffff;
            pEVar10 = *param_4;
            local_a0 = lVar36;
            goto LAB_001011d0;
         }

         *param_3 = pEVar18;
         lVar36 = local_a0;
         uVar13 = uVar26;
         uVar32 = uVar21;
         uVar8 = uVar7;
      }
 while ( pVVar5 != param_5 );
      pEVar10 = *param_4;
   }

   LAB_001011d0:local_98 = (ulong)uVar1;
   lVar36 = (int)local_a8 * lVar25 + (int)uVar1 * lVar35 + (int)local_90 * lVar17;
   if (( pEVar10 != (Edge*)0x0 ) && ( uVar13 = (ulong)local_90 ),uVar32 = (ulong)local_a8,lVar11 = lVar36,param_6 != *(Vertex**)( pEVar10 + 0x18 )) {
      do {
         pEVar10 = (Edge*)**(long**)( pEVar10 + 0x10 );
         pVVar5 = *(Vertex**)( pEVar10 + 0x18 );
         local_a8 = *(uint*)( pVVar5 + 0x68 );
         uVar27 = (ulong)(int)local_a8;
         uVar1 = *(uint*)( pVVar5 + 0x6c );
         uVar8 = (ulong)(int)uVar1;
         local_90 = *(uint*)( pVVar5 + 0x70 );
         uVar22 = (ulong)(int)local_90;
         if (( (long)( lVar24 * uVar8 + lVar20 * uVar27 + lVar16 * uVar22 ) < lVar9 ) || ( ( *(int*)( pEVar10 + 0x28 ) == *(int*)( this + 0xa0 ) || ( lVar36 = uVar8 * lVar35 + uVar27 * lVar25 + uVar22 * lVar17 ),lVar36 <= lVar11 ) )) {
            local_a8 = (uint)uVar32;
            uVar7 = uVar7 & 0xffffffff;
            local_98 = local_98 & 0xffffffff;
            uVar26 = uVar26 & 0xffffffff;
            local_90 = (uint)uVar13;
            uVar21 = uVar21 & 0xffffffff;
            lVar36 = lVar11;
            goto LAB_00101301;
         }

         *param_4 = pEVar10;
         uVar13 = uVar22;
         uVar32 = uVar27;
         local_98 = uVar8;
         lVar11 = lVar36;
      }
 while ( pVVar5 != param_6 );
      uVar26 = uVar26 & 0xffffffff;
      uVar7 = uVar7 & 0xffffffff;
      local_98 = (ulong)uVar1;
      uVar21 = uVar21 & 0xffffffff;
   }

   LAB_00101301:local_a0 = lVar36 - local_a0;
   if (0 < local_a0) {
      uVar21 = uVar21 & 0xffffffff;
      uVar26 = uVar26 & 0xffffffff;
      pEVar28 = *param_3;
      LAB_00101338:do {
         iVar31 = (int)uVar7;
         iVar15 = (int)uVar26;
         iVar4 = (int)uVar21;
         lVar9 = (long)(int)( ( local_a8 - iVar15 ) * iVar14 + ( (int)local_98 - iVar31 ) * iVar30 + ( local_90 - iVar4 ) * iVar33 );
         if (( ( pEVar28 != (Edge*)0x0 ) && ( *(Vertex**)( pEVar28 + 0x18 ) != param_5 ) ) && ( pEVar10 = *(Edge**)( *(long*)pEVar28 + 0x10 ) * (int*)( this + 0xa0 ) < *(int*)( pEVar10 + 0x28 ) )) {
            lVar36 = *(long*)( pEVar10 + 0x18 );
            uVar1 = *(uint*)( lVar36 + 0x68 );
            uVar2 = *(uint*)( lVar36 + 0x6c );
            uVar3 = *(uint*)( lVar36 + 0x70 );
            lVar36 = (long)(int)( ( uVar2 - iVar31 ) * iVar30 + ( uVar1 - iVar15 ) * iVar14 + ( uVar3 - iVar4 ) * iVar33 );
            lVar11 = (int)( uVar3 - iVar4 ) * lVar17 + (int)( uVar1 - iVar15 ) * lVar25 + (int)( uVar2 - iVar31 ) * lVar35;
            if (lVar11 == 0) {
               if (lVar36 < 0) {
                  LAB_00101b06:uVar21 = (ulong)uVar3;
                  uVar7 = (ulong)uVar2;
                  uVar26 = (ulong)uVar1;
                  local_a0 = (int)( local_a8 - uVar1 ) * lVar25 + (int)( (int)local_98 - uVar2 ) * lVar35 + (int)( local_90 - uVar3 ) * lVar17;
                  bVar37 = pEVar29 != pEVar28;
                  pEVar28 = (Edge*)0x0;
                  if (bVar37) {
                     pEVar28 = pEVar10;
                  }

                  *param_3 = pEVar28;
                  goto LAB_00101338;
               }

            }
 else if (lVar11 < 0) {
               local_68 = 0xffffffff;
               if (lVar36 < 1) {
                  if (lVar36 == 0) {
                     lVar36 = 0;
                     local_68 = 0;
                  }
 else {
                     lVar36 = -lVar36;
                     local_68 = 1;
                  }

               }

               local_70 = -lVar11;
               if (lVar9 < 1) {
                  if (lVar9 == 0) {
                     local_48 = 0;
                     local_58 = 0;
                  }
 else {
                     local_48 = -1;
                     local_58 = -lVar9;
                  }

               }
 else {
                  local_48 = 1;
                  local_58 = lVar9;
               }

               if (local_a0 < 1) {
                  if (local_a0 == 0) {
                     local_50 = 0;
                  }
 else {
                     local_48 = -local_48;
                     local_50 = -local_a0;
                  }

               }
 else {
                  local_50 = local_a0;
               }

               local_78 = lVar36;
               iVar19 = Rational64::compare((Rational64*)&local_78, (Rational64*)&local_58);
               if (-1 < iVar19) goto LAB_00101b06;
            }

         }

         pEVar28 = *param_4;
         if (( ( pEVar28 == (Edge*)0x0 ) || ( *(Vertex**)( pEVar28 + 0x18 ) == param_6 ) ) || ( pEVar28 = (Edge*)**(long**)( pEVar28 + 0x10 ) * (int*)( pEVar28 + 0x28 ) <= *(int*)( this + 0xa0 ) )) goto LAB_001015b7;
         lVar36 = *(long*)( pEVar28 + 0x18 );
         iVar19 = *(int*)( lVar36 + 0x6c );
         uVar1 = *(uint*)( lVar36 + 0x68 );
         uVar2 = *(uint*)( lVar36 + 0x70 );
         local_98._0_4_ = iVar19 - (int)local_98;
         iVar34 = uVar1 - local_a8;
         iVar23 = uVar2 - local_90;
         if (lVar24 * (int)local_98 + lVar20 * iVar34 + lVar16 * iVar23 != 0) goto LAB_001015b7;
         lVar12 = iVar23 * lVar17 + (int)local_98 * lVar35 + iVar34 * lVar25;
         lVar36 = (long)( (int)local_98 * iVar30 + iVar34 * iVar14 + iVar23 * iVar33 );
         lVar11 = (int)( uVar1 - iVar15 ) * lVar25 + ( iVar19 - iVar31 ) * lVar35 + (int)( uVar2 - iVar4 ) * lVar17;
         if (lVar11 < 1) goto LAB_001015b7;
         if (lVar12 == 0) {
            if (-1 < lVar36) goto LAB_001015b7;
         }
 else {
            if (-1 < lVar12) goto LAB_001015b7;
            local_68 = 0xffffffff;
            if (lVar36 < 1) {
               if (lVar36 == 0) {
                  lVar36 = 0;
                  local_68 = 0;
               }
 else {
                  lVar36 = -lVar36;
                  local_68 = 1;
               }

            }

            local_70 = -lVar12;
            local_48 = 1;
            if (lVar9 < 1) {
               if (lVar9 == 0) {
                  local_48 = 0;
                  lVar9 = 0;
               }
 else {
                  local_48 = -1;
                  lVar9 = -lVar9;
               }

            }

            local_50 = local_a0;
            if (local_a0 < 1) {
               if (local_a0 == 0) {
                  local_50 = 0;
               }
 else {
                  local_48 = -local_48;
                  local_50 = -local_a0;
               }

            }

            local_78 = lVar36;
            local_58 = lVar9;
            iVar4 = Rational64::compare((Rational64*)&local_78, (Rational64*)&local_58);
            if (iVar4 < 1) goto LAB_001015b7;
         }

         *param_4 = pEVar28;
         pEVar28 = *param_3;
         local_98._0_4_ = iVar19;
         local_90 = uVar2;
         local_a8 = uVar1;
         local_a0 = lVar11;
      }
 while ( true );
   }

   if (local_a0 == 0) {
      LAB_001015b7:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   pEVar29 = *param_4;
   do {
      while (true) {
         iVar15 = (int)uVar26;
         iVar4 = (int)uVar7;
         iVar31 = (int)uVar21;
         lVar9 = (long)(int)( ( local_a8 - iVar15 ) * iVar14 + ( (int)local_98 - iVar4 ) * iVar30 + ( local_90 - iVar31 ) * iVar33 );
         if (( ( pEVar29 == (Edge*)0x0 ) || ( *(Vertex**)( pEVar29 + 0x18 ) == param_6 ) ) || ( pEVar10 = *(Edge**)( *(long*)( pEVar29 + 8 ) + 0x10 ) * (int*)( pEVar10 + 0x28 ) <= *(int*)( this + 0xa0 ) )) break;
         lVar36 = *(long*)( pEVar10 + 0x18 );
         uVar1 = *(uint*)( lVar36 + 0x70 );
         uVar2 = *(uint*)( lVar36 + 0x6c );
         uVar3 = *(uint*)( lVar36 + 0x68 );
         lVar36 = (long)(int)( ( uVar2 - (int)local_98 ) * iVar30 + ( uVar3 - local_a8 ) * iVar14 + ( uVar1 - local_90 ) * iVar33 );
         lVar11 = (int)( uVar1 - local_90 ) * lVar17 + (int)( uVar3 - local_a8 ) * lVar25 + (int)( uVar2 - (int)local_98 ) * lVar35;
         if (lVar11 != 0) {
            if (lVar11 < 0) {
               local_68 = 0xffffffff;
               if (lVar36 < 1) {
                  if (lVar36 == 0) {
                     lVar36 = 0;
                     local_68 = 0;
                  }
 else {
                     lVar36 = -lVar36;
                     local_68 = 1;
                  }

               }

               local_70 = -lVar11;
               if (lVar9 < 1) {
                  if (lVar9 == 0) {
                     local_48 = 0;
                     local_58 = 0;
                  }
 else {
                     local_48 = -1;
                     local_58 = -lVar9;
                  }

               }
 else {
                  local_48 = 1;
                  local_58 = lVar9;
               }

               local_50 = local_a0;
               if (local_a0 < 1) {
                  if (local_a0 == 0) {
                     local_50 = 0;
                  }
 else {
                     local_48 = -local_48;
                     local_50 = -local_a0;
                  }

               }

               local_78 = lVar36;
               iVar19 = Rational64::compare((Rational64*)&local_78, (Rational64*)&local_58);
               if (iVar19 < 1) goto LAB_001017bb;
            }

            break;
         }

         if (lVar36 < 1) break;
         LAB_001017bb:local_98 = (ulong)uVar2;
         bVar37 = pEVar28 != pEVar29;
         pEVar29 = (Edge*)0x0;
         if (bVar37) {
            pEVar29 = pEVar10;
         }

         *param_4 = pEVar29;
         local_a0 = (int)( uVar3 - iVar15 ) * lVar25 + (int)( uVar2 - iVar4 ) * lVar35 + (int)( uVar1 - iVar31 ) * lVar17;
         local_a8 = uVar3;
         local_90 = uVar1;
      }
;
      pEVar29 = *param_3;
      if (( ( pEVar29 == (Edge*)0x0 ) || ( *(Vertex**)( pEVar29 + 0x18 ) == param_5 ) ) || ( pEVar29 = *(Edge**)( *(long*)( pEVar29 + 0x10 ) + 8 ) * (int*)( pEVar29 + 0x28 ) <= *(int*)( this + 0xa0 ) )) goto LAB_001015b7;
      lVar36 = *(long*)( pEVar29 + 0x18 );
      uVar1 = *(uint*)( lVar36 + 0x70 );
      uVar2 = *(uint*)( lVar36 + 0x6c );
      uVar3 = *(uint*)( lVar36 + 0x68 );
      iVar31 = uVar1 - iVar31;
      iVar4 = uVar2 - iVar4;
      iVar15 = uVar3 - iVar15;
      if (lVar24 * iVar4 + lVar20 * iVar15 + lVar16 * iVar31 != 0) goto LAB_001015b7;
      lVar12 = iVar31 * lVar17 + iVar4 * lVar35 + iVar15 * lVar25;
      lVar36 = (long)( iVar4 * iVar30 + iVar15 * iVar14 + iVar31 * iVar33 );
      lVar11 = (int)( local_a8 - uVar3 ) * lVar25 + (int)( (int)local_98 - uVar2 ) * lVar35 + (int)( local_90 - uVar1 ) * lVar17;
      if (-1 < lVar11) goto LAB_001015b7;
      if (lVar12 == 0) {
         if (lVar36 < 1) goto LAB_001015b7;
      }
 else {
         if (-1 < lVar12) goto LAB_001015b7;
         local_68 = 0xffffffff;
         if (lVar36 < 1) {
            if (lVar36 == 0) {
               lVar36 = 0;
               local_68 = 0;
            }
 else {
               lVar36 = -lVar36;
               local_68 = 1;
            }

         }

         local_70 = -lVar12;
         local_48 = 1;
         if (lVar9 < 1) {
            if (lVar9 == 0) {
               local_48 = 0;
               lVar9 = 0;
            }
 else {
               lVar9 = -lVar9;
               local_48 = -1;
            }

         }

         local_50 = local_a0;
         if (local_a0 < 1) {
            if (local_a0 == 0) {
               local_50 = 0;
            }
 else {
               local_48 = -local_48;
               local_50 = -local_a0;
            }

         }

         local_78 = lVar36;
         local_58 = lVar9;
         iVar4 = Rational64::compare((Rational64*)&local_78, (Rational64*)&local_58);
         if (-1 < iVar4) goto LAB_001015b7;
      }

      uVar7 = (ulong)uVar2;
      uVar21 = (ulong)uVar1;
      uVar26 = (ulong)uVar3;
      *param_3 = pEVar29;
      pEVar29 = *param_4;
      local_a0 = lVar11;
   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* VHACD::btConvexHullInternal::merge(VHACD::btConvexHullInternal::IntermediateHull&,
   VHACD::btConvexHullInternal::IntermediateHull&) [clone .part.0] */void VHACD::btConvexHullInternal::merge(btConvexHullInternal *this, IntermediateHull *param_1, IntermediateHull *param_2) {
   long lVar1;
   undefined8 *puVar2;
   Edge *pEVar3;
   undefined8 *puVar4;
   char cVar5;
   int iVar6;
   int iVar7;
   long lVar8;
   long lVar9;
   Edge *pEVar10;
   Edge *pEVar11;
   Edge *pEVar12;
   Edge *pEVar13;
   undefined8 *puVar14;
   int iVar15;
   long lVar16;
   long lVar17;
   int iVar18;
   Edge *pEVar19;
   undefined8 *puVar20;
   int iVar21;
   Edge *pEVar22;
   long lVar23;
   long lVar24;
   Vertex *pVVar25;
   long lVar26;
   Vertex *pVVar27;
   int iVar28;
   long in_FS_OFFSET;
   bool bVar29;
   undefined8 extraout_XMM0_Qa;
   undefined8 uVar30;
   undefined8 extraout_XMM0_Qa_00;
   undefined8 extraout_XMM0_Qb;
   undefined8 uVar31;
   undefined8 extraout_XMM0_Qb_00;
   Edge *local_170;
   Edge *local_168;
   Point64 *local_160;
   Point64 *local_158;
   int local_150;
   int local_14c;
   int local_148;
   undefined8 *local_140;
   Point32 *local_138;
   Point32 *local_130;
   Vertex *local_128;
   Edge *local_120;
   long local_118;
   Edge *local_110;
   Vertex *local_108;
   Edge *local_f8;
   Edge *local_f0;
   Vertex *local_e8;
   Vertex *local_e0;
   Edge *local_d8;
   Edge *local_d0;
   int local_c8;
   int local_c4;
   int local_c0;
   undefined4 local_bc;
   Edge *local_b8;
   long local_b0;
   long local_a8;
   Edge *local_98;
   long local_90;
   long local_88;
   undefined1 local_78[16];
   int local_68;
   undefined1 local_58[16];
   int local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(int*)( this + 0xa0 ) = *(int*)( this + 0xa0 ) + -1;
   local_e8 = (Vertex*)0x0;
   cVar5 = mergeProjection(this, param_1, param_2, &local_e8, &local_e0);
   pVVar25 = local_e0;
   pVVar27 = local_e8;
   if (cVar5 == '\0') {
      local_108 = local_e0;
      local_c8 = *(int*)( local_e0 + 0x68 );
      local_150 = *(int*)( local_e0 + 0x6c );
      iVar7 = *(int*)( local_e0 + 0x70 );
      local_14c = local_c8 + 1;
      local_128 = local_e8;
      iVar21 = *(int*)( local_e8 + 0x70 );
      iVar18 = *(int*)( local_e8 + 0x6c );
      iVar28 = *(int*)( local_e8 + 0x68 );
      local_148 = iVar7;
   }
 else {
      local_78._12_4_ = 0xffffffff;
      local_b8 = (Edge*)0x0;
      local_150 = *(int*)( local_e0 + 0x6c );
      iVar7 = *(int*)( local_e0 + 0x70 );
      local_108 = local_e0;
      iVar28 = *(int*)( local_e8 + 0x68 );
      local_14c = *(int*)( local_e0 + 0x68 );
      local_128 = local_e8;
      iVar18 = *(int*)( local_e8 + 0x6c );
      iVar21 = *(int*)( local_e8 + 0x70 );
      pEVar13 = *(Edge**)( local_e8 + 0x10 );
      iVar6 = iVar7 - iVar21;
      iVar15 = local_14c - iVar28;
      lVar24 = (long)( local_150 - iVar18 );
      lVar26 = (long)( iVar28 - local_14c );
      local_78._0_4_ = iVar15;
      local_78._8_4_ = iVar6;
      local_78._12_4_ = 0xffffffff;
      local_78._4_4_ = local_150 - iVar18;
      lVar23 = iVar6 * lVar24;
      lVar16 = iVar15 * lVar26 - lVar24 * lVar24;
      lVar8 = -(iVar6 * lVar26);
      if (pEVar13 == (Edge*)0x0) {
         pEVar13 = *(Edge**)( local_e0 + 0x10 );
         if (pEVar13 != (Edge*)0x0) {
            local_168 = (Edge*)0x0;
            goto LAB_00101f8e;
         }

      }
 else {
         local_168 = (Edge*)0x0;
         pEVar10 = pEVar13;
         uVar30 = __LC2;
         uVar31 = _LC6;
         do {
            lVar1 = *(long*)( pEVar10 + 0x18 );
            lVar9 = (long)( *(int*)( lVar1 + 0x68 ) - iVar28 );
            lVar17 = (long)( *(int*)( lVar1 + 0x6c ) - iVar18 );
            if (( lVar9 * lVar24 + lVar17 * lVar26 == 0 ) && ( 0 < lVar9 * lVar8 + lVar17 * lVar23 + ( *(int*)( lVar1 + 0x70 ) - iVar21 ) * lVar16 )) {
               if (local_168 != (Edge*)0x0) {
                  local_58._8_8_ = uVar31;
                  local_58._0_8_ = uVar30;
                  iVar6 = getOrientation(local_168, pEVar10, (Point32*)local_78, (Point32*)local_58);
                  uVar30 = extraout_XMM0_Qa;
                  uVar31 = extraout_XMM0_Qb;
                  if (iVar6 != 1) goto LAB_00101f60;
               }

               local_168 = pEVar10;
               local_b8 = pEVar10;
            }

            LAB_00101f60:pEVar10 = *(Edge**)pEVar10;
         }
 while ( pEVar13 != pEVar10 );
         local_98 = (Edge*)0x0;
         pEVar13 = *(Edge**)( pVVar25 + 0x10 );
         if (pEVar13 == (Edge*)0x0) {
            joined_r0x00102b90:if (local_168 == (Edge*)0x0) goto LAB_0010212a;
         }
 else {
            LAB_00101f8e:local_130 = (Point32*)local_58;
            local_138 = (Point32*)local_78;
            local_98 = (Edge*)0x0;
            pEVar10 = pEVar13;
            uVar30 = __LC2;
            uVar31 = _LC6;
            do {
               lVar1 = *(long*)( pEVar10 + 0x18 );
               lVar9 = (long)( *(int*)( lVar1 + 0x68 ) - local_14c );
               lVar17 = (long)( *(int*)( lVar1 + 0x6c ) - local_150 );
               if (( lVar9 * lVar24 + lVar17 * lVar26 == 0 ) && ( 0 < lVar9 * lVar8 + lVar17 * lVar23 + ( *(int*)( lVar1 + 0x70 ) - iVar7 ) * lVar16 )) {
                  if (local_98 != (Edge*)0x0) {
                     local_58._8_8_ = uVar31;
                     local_58._0_8_ = uVar30;
                     iVar6 = getOrientation(local_98, pEVar10, local_138, local_130);
                     uVar30 = extraout_XMM0_Qa_00;
                     uVar31 = extraout_XMM0_Qb_00;
                     if (iVar6 != 2) goto LAB_00102060;
                  }

                  local_98 = pEVar10;
               }

               LAB_00102060:pEVar10 = *(Edge**)pEVar10;
            }
 while ( pEVar10 != pEVar13 );
            bVar29 = local_168 == (Edge*)0x0;
            local_168 = local_98;
            if (bVar29) goto joined_r0x00102b90;
         }

         findEdgeForCoplanarFaces(this, pVVar27, pVVar25, &local_b8, &local_98, (Vertex*)0x0, (Vertex*)0x0);
         if (local_b8 != (Edge*)0x0) {
            local_e8 = *(Vertex**)( local_b8 + 0x18 );
         }

         if (local_98 != (Edge*)0x0) {
            local_108 = *(Vertex**)( local_98 + 0x18 );
            local_14c = *(int*)( local_108 + 0x68 );
            local_150 = *(int*)( local_108 + 0x6c );
            iVar7 = *(int*)( local_108 + 0x70 );
            local_e0 = local_108;
         }

         iVar21 = *(int*)( local_e8 + 0x70 );
         iVar18 = *(int*)( local_e8 + 0x6c );
         local_128 = local_e8;
         iVar28 = *(int*)( local_e8 + 0x68 );
      }

      LAB_0010212a:local_c8 = local_14c;
      local_148 = iVar7 + 1;
   }

   local_158 = (Point64*)&local_98;
   local_160 = (Point64*)&local_b8;
   local_130 = (Point32*)local_58;
   local_138 = (Point32*)local_78;
   pEVar13 = (Edge*)0x0;
   bVar29 = true;
   local_120 = (Edge*)0x0;
   local_f8 = (Edge*)0x0;
   local_140 = (undefined8*)0x0;
   local_110 = (Edge*)0x0;
   local_f0 = (Edge*)0x0;
   local_118 = 0;
   local_170 = (Edge*)0x0;
   pVVar25 = local_108;
   pVVar27 = local_128;
   local_c4 = local_150;
   while (true) {
      local_c0 = iVar7 - iVar21;
      local_c4 = local_c4 - iVar18;
      local_c8 = local_c8 - iVar28;
      local_78 = (undefined1[16])0x0;
      local_bc = 0xffffffff;
      local_68 = 0;
      local_a8 = (long)( local_c4 * ( local_14c - iVar28 ) - local_c8 * ( local_150 - iVar18 ) );
      local_b0 = (long)( local_c8 * ( local_148 - iVar21 ) - ( local_14c - iVar28 ) * local_c0 );
      local_b8 = (Edge*)(long)( ( local_150 - iVar18 ) * local_c0 - ( local_148 - iVar21 ) * local_c4 );
      local_98 = (Edge*)( local_c4 * local_a8 - local_c0 * local_b0 );
      local_90 = (long)local_c0 * (long)local_b8 - local_a8 * local_c8;
      local_88 = local_c8 * local_b0 - (long)local_c4 * (long)local_b8;
      pEVar10 = (Edge*)findMaxAngle(this, false, pVVar27, (Point32*)&local_c8, local_160, local_158, (Rational64*)local_138);
      local_48 = 0;
      local_58 = (undefined1[16])0x0;
      pEVar11 = (Edge*)findMaxAngle(this, true, pVVar25, (Point32*)&local_c8, local_160, local_158, (Rational64*)local_130);
      if (pEVar11 == (Edge*)0x0 && pEVar10 == (Edge*)0x0) break;
      if (pEVar10 == (Edge*)0x0) {
         iVar7 = 1;
         iVar21 = 1;
         if (bVar29) {
            LAB_00102410:pEVar12 = (Edge*)newEdgePair(this, pVVar27, pVVar25);
            pEVar19 = pEVar12;
            if (local_170 != (Edge*)0x0) {
               *(Edge**)( local_170 + 8 ) = pEVar12;
               pEVar19 = local_110;
            }

            local_110 = pEVar19;
            pEVar19 = *(Edge**)( pEVar12 + 0x10 );
            *(Edge**)pEVar12 = local_170;
            pEVar3 = pEVar19;
            if (pEVar13 != (Edge*)0x0) {
               *(Edge**)pEVar13 = pEVar19;
               pEVar3 = local_120;
            }

            local_120 = pEVar3;
            *(Edge**)( pEVar19 + 8 ) = pEVar13;
            local_170 = pEVar12;
            pEVar13 = pEVar19;
            if (iVar7 == 0) goto LAB_00102470;
            local_d8 = pEVar10;
            local_d0 = pEVar11;
            if (iVar7 < 0) goto joined_r0x001021cc;
            LAB_00102686:local_d8 = pEVar10;
            local_d0 = pEVar11;
            pEVar12 = local_120;
            pEVar13 = pEVar19;
            if (pEVar11 != (Edge*)0x0) goto joined_r0x0010269b;
         }
 else {
            LAB_0010264f:iVar7 = iVar21;
            if (( -1 < local_48 ) || ( local_58._8_8_ != 0 )) goto LAB_00102410;
            pEVar19 = pEVar13;
            if (iVar7 != 0) goto LAB_00102686;
            LAB_00102470:local_d8 = pEVar10;
            local_d0 = pEVar11;
            findEdgeForCoplanarFaces(this, pVVar27, pVVar25, &local_d8, &local_d0, (Vertex*)0x0, (Vertex*)0x0);
            iVar7 = 0;
            pEVar19 = pEVar13;
            pEVar12 = local_120;
            if (local_d0 != (Edge*)0x0) {
               joined_r0x0010269b:local_120 = pEVar12;
               if (local_140 == (undefined8*)0x0) {
                  local_f8 = pEVar11;
                  if (pEVar19 != (Edge*)0x0) {
                     local_140 = *(undefined8**)( pEVar11 + 8 );
                     *local_140 = pEVar12;
                     local_f8 = pEVar12;
                     LAB_001024ef:local_120 = (Edge*)0x0;
                     *(undefined8**)( pEVar12 + 8 ) = local_140;
                     *(Edge**)pEVar19 = pEVar11;
                     *(Edge**)( pEVar11 + 8 ) = pEVar19;
                  }

               }
 else {
                  if (pEVar11 != (Edge*)*local_140) {
                     iVar21 = *(int*)( this + 0xb0 );
                     pEVar13 = (Edge*)*local_140;
                     puVar14 = *(undefined8**)( this + 0x50 );
                     do {
                        iVar21 = iVar21 + -1;
                        pEVar3 = *(Edge**)pEVar13;
                        puVar2 = *(undefined8**)( pEVar13 + 0x10 );
                        lVar8 = puVar2[3];
                        pEVar22 = (Edge*)0x0;
                        if (pEVar3 != pEVar13) {
                           puVar20 = *(undefined8**)( pEVar13 + 8 );
                           *(undefined8**)( pEVar3 + 8 ) = puVar20;
                           *puVar20 = pEVar3;
                           pEVar22 = pEVar3;
                        }

                        *(Edge**)( lVar8 + 0x10 ) = pEVar22;
                        puVar20 = (undefined8*)*puVar2;
                        lVar8 = *(long*)( pEVar13 + 0x18 );
                        if (puVar2 == puVar20) {
                           puVar20 = (undefined8*)0x0;
                        }
 else {
                           puVar4 = (undefined8*)puVar2[1];
                           puVar20[1] = puVar4;
                           *puVar4 = puVar20;
                        }

                        *(undefined8**)( lVar8 + 0x10 ) = puVar20;
                        *(undefined8**)pEVar13 = puVar14;
                        *puVar2 = pEVar13;
                        pEVar13 = pEVar3;
                        puVar14 = puVar2;
                     }
 while ( pEVar11 != pEVar3 );
                     *(undefined8**)( this + 0x50 ) = puVar2;
                     *(int*)( this + 0xb0 ) = iVar21;
                  }

                  if (pEVar19 != (Edge*)0x0) {
                     *local_140 = pEVar12;
                     goto LAB_001024ef;
                  }

               }

               local_14c = *(int*)( pVVar25 + 0x68 );
               local_150 = *(int*)( pVVar25 + 0x6c );
               local_148 = *(int*)( pVVar25 + 0x70 );
               pVVar25 = *(Vertex**)( local_d0 + 0x18 );
               local_140 = *(undefined8**)( local_d0 + 0x10 );
               pEVar13 = (Edge*)0x0;
               local_e0 = pVVar25;
               if (iVar7 != 0) goto joined_r0x00102575;
               pEVar13 = (Edge*)0x0;
            }

            joined_r0x001021cc:if (local_d8 != (Edge*)0x0) {
               if (local_118 != 0) goto LAB_001027b8;
               LAB_001021de:local_f0 = pEVar10;
               if (local_170 != (Edge*)0x0) {
                  lVar8 = *(long*)pEVar10;
                  local_f0 = local_110;
                  *(long*)local_110 = lVar8;
                  *(Edge**)( lVar8 + 8 ) = local_110;
                  goto LAB_001021ff;
               }

               goto LAB_00102210;
            }

         }

      }
 else {
         if (pEVar11 != (Edge*)0x0) {
            iVar7 = Rational64::compare((Rational64*)local_138, (Rational64*)local_130);
            if (!bVar29) {
               iVar21 = iVar7;
               if (-1 < iVar7) goto LAB_0010264f;
               if (local_68 < 0) goto LAB_0010277e;
            }

            goto LAB_00102410;
         }

         iVar7 = -1;
         if (( bVar29 ) || ( iVar21 = -1 < local_68 )) goto LAB_00102410;
         LAB_0010277e:iVar7 = iVar21;
         if (local_78._8_8_ != 0) goto LAB_00102410;
         local_d8 = pEVar10;
         local_d0 = pEVar11;
         if (local_118 == 0) goto LAB_001021de;
         LAB_001027b8:if (pEVar10 != *(Edge**)( local_118 + 8 )) {
            iVar7 = *(int*)( this + 0xb0 );
            puVar14 = *(undefined8**)( this + 0x50 );
            pEVar11 = *(Edge**)( local_118 + 8 );
            do {
               pEVar19 = *(Edge**)( pEVar11 + 8 );
               puVar2 = *(undefined8**)( pEVar11 + 0x10 );
               pEVar12 = *(Edge**)pEVar11;
               lVar8 = puVar2[3];
               if (pEVar11 == pEVar12) {
                  lVar16 = *(long*)( pEVar11 + 0x18 );
                  *(undefined8*)( lVar8 + 0x10 ) = 0;
                  puVar20 = (undefined8*)*puVar2;
                  if (puVar2 == puVar20) goto LAB_00102842;
                  LAB_001027f7:puVar4 = (undefined8*)puVar2[1];
                  puVar20[1] = puVar4;
                  *puVar4 = puVar20;
               }
 else {
                  *(Edge**)( pEVar12 + 8 ) = pEVar19;
                  lVar16 = *(long*)( pEVar11 + 0x18 );
                  *(Edge**)pEVar19 = pEVar12;
                  *(Edge**)( lVar8 + 0x10 ) = pEVar12;
                  puVar20 = (undefined8*)*puVar2;
                  if (puVar2 != puVar20) goto LAB_001027f7;
                  LAB_00102842:puVar20 = (undefined8*)0x0;
               }

               *(undefined8**)( lVar16 + 0x10 ) = puVar20;
               iVar7 = iVar7 + -1;
               *(undefined8**)pEVar11 = puVar14;
               *puVar2 = pEVar11;
               puVar14 = puVar2;
               pEVar11 = pEVar19;
            }
 while ( pEVar10 != pEVar19 );
            *(undefined8**)( this + 0x50 ) = puVar2;
            *(int*)( this + 0xb0 ) = iVar7;
         }

         if (local_170 != (Edge*)0x0) {
            *(long*)local_110 = local_118;
            *(Edge**)( local_118 + 8 ) = local_110;
            LAB_001021ff:*(Edge**)pEVar10 = local_170;
            local_110 = (Edge*)0x0;
            *(Edge**)( local_170 + 8 ) = pEVar10;
         }

         LAB_00102210:local_170 = (Edge*)0x0;
         local_14c = *(int*)( pVVar27 + 0x68 );
         local_150 = *(int*)( pVVar27 + 0x6c );
         local_148 = *(int*)( pVVar27 + 0x70 );
         pVVar27 = *(Vertex**)( local_d8 + 0x18 );
         local_118 = *(long*)( local_d8 + 0x10 );
         local_e8 = pVVar27;
      }

      joined_r0x00102575:if (( local_128 == pVVar27 ) && ( local_108 == pVVar25 )) {
         if (local_118 == 0) {
            *(Edge**)local_110 = local_170;
            *(Edge**)( local_170 + 8 ) = local_110;
            *(Edge**)( local_128 + 0x10 ) = local_170;
            goto LAB_00102a7b;
         }

         if (*(Edge**)( local_118 + 8 ) == local_f0) goto LAB_00102b1f;
         iVar7 = *(int*)( this + 0xb0 );
         puVar14 = *(undefined8**)( this + 0x50 );
         pEVar10 = *(Edge**)( local_118 + 8 );
         goto LAB_00102609;
      }

      iVar7 = *(int*)( pVVar25 + 0x70 );
      iVar21 = *(int*)( pVVar27 + 0x70 );
      bVar29 = false;
      local_c4 = *(int*)( pVVar25 + 0x6c );
      iVar18 = *(int*)( pVVar27 + 0x6c );
      local_c8 = *(int*)( pVVar25 + 0x68 );
      iVar28 = *(int*)( pVVar27 + 0x68 );
   }
;
   lVar8 = newEdgePair(this, pVVar27, pVVar25);
   *(long*)lVar8 = lVar8;
   *(long*)( lVar8 + 8 ) = lVar8;
   *(long*)( pVVar27 + 0x10 ) = lVar8;
   lVar8 = *(long*)( lVar8 + 0x10 );
   *(long*)lVar8 = lVar8;
   *(long*)( lVar8 + 8 ) = lVar8;
   *(long*)( pVVar25 + 0x10 ) = lVar8;
   LAB_00102904:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00102609:do {
      pEVar11 = *(Edge**)( pEVar10 + 8 );
      puVar2 = *(undefined8**)( pEVar10 + 0x10 );
      pEVar19 = *(Edge**)pEVar10;
      lVar8 = puVar2[3];
      if (pEVar10 == pEVar19) {
         lVar16 = *(long*)( pEVar10 + 0x18 );
         *(undefined8*)( lVar8 + 0x10 ) = 0;
         puVar20 = (undefined8*)*puVar2;
         if (puVar2 == puVar20) goto LAB_00102636;
         LAB_001025e7:puVar4 = (undefined8*)puVar2[1];
         puVar20[1] = puVar4;
         *puVar4 = puVar20;
      }
 else {
         *(Edge**)( pEVar19 + 8 ) = pEVar11;
         lVar16 = *(long*)( pEVar10 + 0x18 );
         *(Edge**)pEVar11 = pEVar19;
         *(Edge**)( lVar8 + 0x10 ) = pEVar19;
         puVar20 = (undefined8*)*puVar2;
         if (puVar2 != puVar20) goto LAB_001025e7;
         LAB_00102636:puVar20 = (undefined8*)0x0;
      }

      *(undefined8**)( lVar16 + 0x10 ) = puVar20;
      iVar7 = iVar7 + -1;
      *(undefined8**)pEVar10 = puVar14;
      *puVar2 = pEVar10;
      puVar14 = puVar2;
      pEVar10 = pEVar11;
   }
 while ( pEVar11 != local_f0 );
   *(undefined8**)( this + 0x50 ) = puVar2;
   *(int*)( this + 0xb0 ) = iVar7;
   LAB_00102b1f:if (local_170 != (Edge*)0x0) {
      *(long*)local_110 = local_118;
      *(Edge**)( local_118 + 8 ) = local_110;
      *(Edge**)local_f0 = local_170;
      *(Edge**)( local_170 + 8 ) = local_f0;
   }

   LAB_00102a7b:if (local_140 == (undefined8*)0x0) {
      *(Edge**)pEVar13 = local_120;
      *(Edge**)( local_120 + 8 ) = pEVar13;
      *(Edge**)( pVVar25 + 0x10 ) = pEVar13;
   }
 else {
      if ((Edge*)*local_140 != local_f8) {
         iVar7 = *(int*)( this + 0xb0 );
         pEVar10 = (Edge*)*local_140;
         puVar14 = *(undefined8**)( this + 0x50 );
         do {
            pEVar11 = *(Edge**)pEVar10;
            puVar2 = *(undefined8**)( pEVar10 + 0x10 );
            lVar8 = puVar2[3];
            pEVar19 = (Edge*)0x0;
            if (pEVar11 != pEVar10) {
               puVar20 = *(undefined8**)( pEVar10 + 8 );
               *(undefined8**)( pEVar11 + 8 ) = puVar20;
               *puVar20 = pEVar11;
               pEVar19 = pEVar11;
            }

            *(Edge**)( lVar8 + 0x10 ) = pEVar19;
            puVar20 = (undefined8*)*puVar2;
            lVar8 = *(long*)( pEVar10 + 0x18 );
            if (puVar2 == puVar20) {
               puVar20 = (undefined8*)0x0;
            }
 else {
               puVar4 = (undefined8*)puVar2[1];
               puVar20[1] = puVar4;
               *puVar4 = puVar20;
            }

            *(undefined8**)( lVar8 + 0x10 ) = puVar20;
            iVar7 = iVar7 + -1;
            *(undefined8**)pEVar10 = puVar14;
            *puVar2 = pEVar10;
            pEVar10 = pEVar11;
            puVar14 = puVar2;
         }
 while ( pEVar11 != local_f8 );
         *(undefined8**)( this + 0x50 ) = puVar2;
         *(int*)( this + 0xb0 ) = iVar7;
      }

      if (pEVar13 != (Edge*)0x0) {
         *local_140 = local_120;
         *(undefined8**)( local_120 + 8 ) = local_140;
         *(Edge**)pEVar13 = local_f8;
         *(Edge**)( local_f8 + 8 ) = pEVar13;
      }

   }

   goto LAB_00102904;
}
/* VHACD::btConvexHullInternal::computeInternal(int, int,
   VHACD::btConvexHullInternal::IntermediateHull&) */void VHACD::btConvexHullInternal::computeInternal(btConvexHullInternal *this, int param_1, int param_2, IntermediateHull *param_3) {
   long lVar1;
   int iVar2;
   Vertex *pVVar3;
   long lVar4;
   long *plVar5;
   int iVar6;
   Vertex *pVVar7;
   Vertex *pVVar8;
   Vertex *pVVar9;
   Vertex *pVVar10;
   long in_FS_OFFSET;
   undefined1 local_58[16];
   undefined1 local_48[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = param_2 - param_1;
   if (iVar2 == 1) {
      pVVar8 = *(Vertex**)( *(long*)( this + 0x90 ) + (long)param_1 * 8 );
      LAB_00102d07:*(long*)( pVVar8 + 0x10 ) = 0;
      *(Vertex**)pVVar8 = pVVar8;
      *(Vertex**)( pVVar8 + 8 ) = pVVar8;
      *(Vertex**)param_3 = pVVar8;
      for (int i = 0; i < 3; i++) {
         *(Vertex**)( param_3 + ( 8*i + 8 ) ) = pVVar8;
      }

      goto LAB_00102c39;
   }

   if (iVar2 != 2) {
      if (iVar2 == 0) {
         *(undefined1(*) [16])param_3 = (undefined1[16])0x0;
         *(undefined1(*) [16])( param_3 + 0x10 ) = (undefined1[16])0x0;
      }
 else {
         iVar6 = iVar2 / 2 + param_1;
         lVar4 = *(long*)( *(long*)( this + 0x90 ) + (long)( iVar6 + -1 ) * 8 );
         iVar2 = iVar6;
         if (iVar6 < param_2) {
            plVar5 = (long*)( *(long*)( this + 0x90 ) + (long)iVar6 * 8 );
            do {
               lVar1 = *plVar5;
               if (( ( *(int*)( lVar4 + 0x68 ) != *(int*)( lVar1 + 0x68 ) ) || ( *(int*)( lVar4 + 0x6c ) != *(int*)( lVar1 + 0x6c ) ) ) || ( *(int*)( lVar4 + 0x70 ) != *(int*)( lVar1 + 0x70 ) )) break;
               iVar2 = iVar2 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( param_2 != iVar2 );
         }

         computeInternal(this, param_1, iVar6, param_3);
         local_58 = (undefined1[16])0x0;
         local_48 = (undefined1[16])0x0;
         computeInternal(this, iVar2, param_2, (IntermediateHull*)local_58);
         if (local_58._8_8_ != 0) {
            if (*(long*)( param_3 + 8 ) == 0) {
               *(undefined8*)param_3 = local_58._0_8_;
               *(undefined8*)( param_3 + 8 ) = local_58._8_8_;
               *(undefined8*)( param_3 + 0x10 ) = local_48._0_8_;
               *(undefined8*)( param_3 + 0x18 ) = local_48._8_8_;
            }
 else {
               merge(this, param_3, (IntermediateHull*)local_58);
            }

         }

      }

      goto LAB_00102c39;
   }

   pVVar8 = *(Vertex**)( *(long*)( this + 0x90 ) + (long)param_1 * 8 );
   pVVar9 = pVVar8 + 0x80;
   pVVar3 = pVVar9;
   pVVar7 = pVVar8;
   if (*(int*)( pVVar8 + 0xe8 ) == *(int*)( pVVar8 + 0x68 )) {
      if (*(int*)( pVVar8 + 0xec ) == *(int*)( pVVar8 + 0x6c )) {
         if (*(int*)( pVVar8 + 0xf0 ) == *(int*)( pVVar8 + 0x70 )) goto LAB_00102d07;
         pVVar10 = pVVar9;
         if (*(int*)( pVVar8 + 0xf0 ) < *(int*)( pVVar8 + 0x70 )) {
            pVVar10 = pVVar8;
            pVVar8 = pVVar9;
         }

         *(Vertex**)pVVar8 = pVVar8;
         *(Vertex**)( pVVar8 + 8 ) = pVVar8;
         *(Vertex**)param_3 = pVVar8;
         *(Vertex**)( param_3 + 8 ) = pVVar8;
         pVVar3 = pVVar8;
         pVVar7 = pVVar8;
         pVVar9 = pVVar10;
      }
 else {
         *(Vertex**)pVVar8 = pVVar9;
         *(Vertex**)( pVVar8 + 8 ) = pVVar9;
         *(Vertex**)( pVVar8 + 0x80 ) = pVVar8;
         *(Vertex**)( pVVar8 + 0x88 ) = pVVar8;
         if (*(int*)( pVVar8 + 0xec ) <= *(int*)( pVVar8 + 0x6c )) {
            *(Vertex**)param_3 = pVVar9;
            *(Vertex**)( param_3 + 8 ) = pVVar8;
            goto LAB_00102cde;
         }

         *(Vertex**)param_3 = pVVar8;
         *(Vertex**)( param_3 + 8 ) = pVVar9;
      }

   }
 else {
      iVar2 = *(int*)( pVVar8 + 0x6c );
      *(Vertex**)pVVar8 = pVVar9;
      *(Vertex**)( pVVar8 + 8 ) = pVVar9;
      iVar6 = *(int*)( pVVar8 + 0xec );
      *(Vertex**)( pVVar8 + 0x80 ) = pVVar8;
      *(Vertex**)( pVVar8 + 0x88 ) = pVVar8;
      if (*(int*)( pVVar8 + 0x68 ) < *(int*)( pVVar8 + 0xe8 )) {
         *(Vertex**)param_3 = pVVar8;
         *(Vertex**)( param_3 + 8 ) = pVVar9;
         if (0 < iVar2 - iVar6) goto LAB_00102cde;
      }
 else {
         *(Vertex**)param_3 = pVVar9;
         *(Vertex**)( param_3 + 8 ) = pVVar8;
         if (-1 < iVar2 - iVar6) {
            LAB_00102cde:pVVar3 = pVVar8;
            pVVar7 = pVVar9;
         }

      }

   }

   *(Vertex**)( param_3 + 0x10 ) = pVVar7;
   *(Vertex**)( param_3 + 0x18 ) = pVVar3;
   lVar4 = newEdgePair(this, pVVar8, pVVar9);
   *(long*)lVar4 = lVar4;
   *(long*)( lVar4 + 8 ) = lVar4;
   *(long*)( pVVar8 + 0x10 ) = lVar4;
   lVar4 = *(long*)( lVar4 + 0x10 );
   *(long*)lVar4 = lVar4;
   *(long*)( lVar4 + 8 ) = lVar4;
   *(long*)( pVVar9 + 0x10 ) = lVar4;
   LAB_00102c39:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* VHACD::btConvexHullInternal::merge(VHACD::btConvexHullInternal::IntermediateHull&,
   VHACD::btConvexHullInternal::IntermediateHull&) */void VHACD::btConvexHullInternal::merge(btConvexHullInternal *this, IntermediateHull *param_1, IntermediateHull *param_2) {
   undefined8 uVar1;
   if (*(long*)( param_2 + 8 ) == 0) {
      return;
   }

   if (*(long*)( param_1 + 8 ) != 0) {
      merge(this, param_1, param_2);
      return;
   }

   uVar1 = *(undefined8*)( param_2 + 8 );
   *(undefined8*)param_1 = *(undefined8*)param_2;
   *(undefined8*)( param_1 + 8 ) = uVar1;
   uVar1 = *(undefined8*)( param_2 + 0x18 );
   *(undefined8*)( param_1 + 0x10 ) = *(undefined8*)( param_2 + 0x10 );
   *(undefined8*)( param_1 + 0x18 ) = uVar1;
   return;
}
/* VHACD::btConvexHullInternal::toBtVector(VHACD::btConvexHullInternal::Point32 const&) */void VHACD::btConvexHullInternal::toBtVector(btConvexHullInternal *this, Point32 *param_1) {
   long in_FS_OFFSET;
   float local_28[6];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28[*(int*)( this + 0xa8 )] = (float)*(int*)param_1;
   local_28[*(int*)( this + 0xac )] = (float)*(int*)( param_1 + 4 );
   local_28[*(int*)( this + 0xa4 )] = (float)*(int*)( param_1 + 8 );
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VHACD::btConvexHullInternal::getBtNormal(VHACD::btConvexHullInternal::Face*) */void VHACD::btConvexHullInternal::getBtNormal(btConvexHullInternal *this, Face *param_1) {
   toBtVector(this, (Point32*)( param_1 + 0x28 ));
   toBtVector(this, (Point32*)( param_1 + 0x38 ));
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* VHACD::btConvexHullInternal::getCoordinates(VHACD::btConvexHullInternal::Vertex const*) */void VHACD::btConvexHullInternal::getCoordinates(btConvexHullInternal *this, Vertex *param_1) {
   ulong uVar1;
   long lVar2;
   btConvexHullInternal *extraout_RDX;
   btConvexHullInternal *extraout_RDX_00;
   btConvexHullInternal *extraout_RDX_01;
   btConvexHullInternal *extraout_RDX_02;
   btConvexHullInternal *extraout_RDX_03;
   btConvexHullInternal *extraout_RDX_04;
   long lVar3;
   ulong uVar4;
   float *pfVar5;
   float *pfVar6;
   long in_FS_OFFSET;
   float fVar7;
   float fVar8;
   float local_28[6];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   pfVar5 = local_28 + *(int*)( this + 0xac );
   pfVar6 = local_28 + *(int*)( this + 0xa8 );
   if (*(int*)( param_1 + 0x74 ) < 0) {
      lVar2 = *(long*)( param_1 + 0x30 );
      uVar4 = *(ulong*)( param_1 + 0x28 );
      if (lVar2 < 0) {
         lVar2 = ( ( ulong )(uVar4 == 0) - lVar2 ) + -1;
         if (lVar2 < 0) {
            fVar8 = (float)Int128::toScalar();
            this =
            extraout_RDX_02;
         }
 else {
            if ((long)uVar4 < 1) {
               fVar8 = (float)(long)-uVar4;
            }
 else {
               fVar8 = (float)-uVar4;
            }

            fVar8 = (float)lVar2 * _LC0 + fVar8;
         }

         fVar8 = (float)( (uint)fVar8 ^ __LC1 );
      }
 else {
         fVar8 = (float)lVar2 * _LC0 + (float)uVar4;
      }

      lVar2 = *(long*)( param_1 + 0x60 );
      uVar4 = *(ulong*)( param_1 + 0x58 );
      if (lVar2 < 0) {
         lVar3 = ( ( ulong )(uVar4 == 0) - lVar2 ) + -1;
         if (lVar3 < 0) {
            fVar7 = (float)Int128::toScalar();
            this =
            extraout_RDX_03;
         }
 else {
            if ((long)uVar4 < 1) {
               fVar7 = (float)(long)-uVar4;
            }
 else {
               fVar7 = (float)-uVar4;
            }

            fVar7 = (float)lVar3 * _LC0 + fVar7;
         }

         fVar7 = (float)( (uint)fVar7 ^ __LC1 );
      }
 else {
         fVar7 = (float)lVar2 * _LC0 + (float)uVar4;
      }

      lVar3 = *(long*)( param_1 + 0x40 );
      uVar1 = *(ulong*)( param_1 + 0x38 );
      *pfVar6 = fVar8 / fVar7;
      if (lVar3 < 0) {
         lVar3 = ( ( ulong )(uVar1 == 0) - lVar3 ) + -1;
         if (lVar3 < 0) {
            fVar8 = (float)Int128::toScalar();
            this =
            extraout_RDX_04;
         }
 else {
            if ((long)uVar1 < 1) {
               fVar8 = (float)(long)-uVar1;
            }
 else {
               fVar8 = (float)-uVar1;
            }

            fVar8 = (float)lVar3 * _LC0 + fVar8;
         }

         fVar8 = (float)( (uint)fVar8 ^ __LC1 );
      }
 else {
         fVar8 = (float)lVar3 * _LC0 + (float)uVar1;
      }

      if (lVar2 < 0) {
         lVar3 = ( ( ulong )(uVar4 == 0) - lVar2 ) + -1;
         if (lVar3 < 0) {
            fVar7 = (float)Int128::toScalar();
            this =
            extraout_RDX;
         }
 else {
            if ((long)uVar4 < 1) {
               fVar7 = (float)(long)-uVar4;
            }
 else {
               fVar7 = (float)-uVar4;
            }

            fVar7 = (float)lVar3 * _LC0 + fVar7;
         }

         fVar7 = (float)( (uint)fVar7 ^ __LC1 );
      }
 else {
         fVar7 = (float)lVar2 * _LC0 + (float)uVar4;
      }

      uVar1 = *(ulong*)( param_1 + 0x48 );
      lVar3 = *(long*)( param_1 + 0x50 );
      *pfVar5 = fVar8 / fVar7;
      if (lVar3 < 0) {
         lVar3 = ( ( ulong )(uVar1 == 0) - lVar3 ) + -1;
         if (lVar3 < 0) {
            fVar8 = (float)Int128::toScalar();
            this =
            extraout_RDX_00;
         }
 else {
            if ((long)uVar1 < 1) {
               fVar8 = (float)(long)-uVar1;
            }
 else {
               fVar8 = (float)-uVar1;
            }

            fVar8 = (float)lVar3 * _LC0 + fVar8;
         }

         fVar8 = (float)( (uint)fVar8 ^ __LC1 );
      }
 else {
         fVar8 = (float)lVar3 * _LC0 + (float)uVar1;
      }

      if (lVar2 < 0) {
         lVar2 = ( ( ulong )(uVar4 == 0) - lVar2 ) + -1;
         if (lVar2 < 0) {
            fVar7 = (float)Int128::toScalar();
            this =
            extraout_RDX_01;
         }
 else {
            if ((long)uVar4 < 1) {
               fVar7 = (float)(long)-uVar4;
            }
 else {
               fVar7 = (float)-uVar4;
            }

            fVar7 = (float)lVar2 * _LC0 + fVar7;
         }

         fVar7 = (float)( (uint)fVar7 ^ __LC1 );
      }
 else {
         fVar7 = (float)lVar2 * _LC0 + (float)uVar4;
      }

      fVar8 = fVar8 / fVar7;
   }
 else {
      fVar8 = (float)*(int*)( param_1 + 0x70 );
      *pfVar6 = (float)*(int*)( param_1 + 0x68 );
      *pfVar5 = (float)*(int*)( param_1 + 0x6c );
   }

   local_28[*(int*)( this + 0xa4 )] = fVar8;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VHACD::btConvexHullInternal::Rational128::compare(VHACD::btConvexHullInternal::Rational128
   const&) const */int VHACD::btConvexHullInternal::Rational128::compare(Rational128 *this, Rational128 *param_1) {
   int iVar1;
   long in_FS_OFFSET;
   ulong local_68;
   ulong local_60;
   ulong local_58;
   ulong local_50;
   ulong local_48;
   ulong local_40;
   ulong local_38;
   ulong local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = *(int*)( this + 0x20 );
   if (iVar1 == *(int*)( param_1 + 0x20 )) {
      if (iVar1 != 0) {
         if (this[0x24] == (Rational128)0x0) {
            DMul<VHACD::btConvexHullInternal::Int128,unsigned_long>::mul(*(undefined8*)this, *(undefined8*)( this + 8 ), *(undefined8*)( param_1 + 0x10 ), *(undefined8*)( param_1 + 0x18 ), &local_68, &local_58);
            DMul<VHACD::btConvexHullInternal::Int128,unsigned_long>::mul(*(undefined8*)( this + 0x10 ), *(undefined8*)( this + 0x18 ), *(undefined8*)param_1, *(undefined8*)( param_1 + 8 ), &local_48, &local_38);
            if (local_30 <= local_50) {
               if (local_30 < local_50) goto LAB_00103714;
               if (local_38 <= local_58) {
                  if (local_38 < local_58) goto LAB_00103714;
                  if (local_40 <= local_60) {
                     if (local_40 < local_60) goto LAB_00103714;
                     if (local_48 <= local_68) {
                        if (local_68 <= local_48) {
                           iVar1 = 0;
                        }

                        goto LAB_00103714;
                     }

                  }

               }

            }

            iVar1 = -iVar1;
         }
 else {
            iVar1 = compare(param_1, (long)iVar1 * *(long*)this);
            iVar1 = -iVar1;
         }

      }

   }
 else {
      iVar1 = iVar1 - *(int*)( param_1 + 0x20 );
   }

   LAB_00103714:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* VHACD::btConvexHullInternal::shiftFace(VHACD::btConvexHullInternal::Face*, float,
   VHACD::btAlignedObjectArray<VHACD::btConvexHullInternal::Vertex*>) */undefined8 VHACD::btConvexHullInternal::shiftFace(uint param_2, btConvexHullInternal *this, Face *param_1, long param_4) {
   Vertex *pVVar1;
   undefined8 *puVar2;
   bool bVar3;
   long *plVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   undefined8 uVar8;
   long lVar9;
   long *plVar10;
   undefined1(*pauVar11)[16];
   undefined1(*pauVar12)[16];
   long *plVar13;
   undefined8 *puVar14;
   undefined1(*pauVar15)[16];
   long lVar16;
   long lVar17;
   long *plVar18;
   undefined8 *puVar19;
   int iVar20;
   long lVar21;
   long lVar22;
   long *plVar23;
   ulong uVar24;
   long lVar25;
   long lVar26;
   ulong uVar27;
   void *pvVar28;
   int iVar29;
   long lVar30;
   ulong uVar31;
   int iVar32;
   long lVar33;
   long lVar34;
   long lVar35;
   ulong uVar36;
   ulong uVar37;
   ulong uVar38;
   ulong uVar39;
   long lVar40;
   long lVar41;
   int iVar42;
   long *plVar43;
   long in_FS_OFFSET;
   float fVar44;
   float fVar45;
   float fVar46;
   undefined1 auVar47[16];
   undefined1 auVar48[16];
   undefined1 auVar49[16];
   undefined1 auVar50[16];
   undefined1 auVar51[16];
   undefined1 auVar52[12];
   long *local_1e0;
   int local_1c0;
   long *local_1b8;
   long *local_190;
   int local_158;
   ulong local_b8;
   long lStack_b0;
   undefined8 local_a8;
   ulong local_88;
   long lStack_80;
   undefined8 local_78;
   undefined8 local_58;
   float local_50;
   undefined4 local_4c;
   long local_40;
   fVar46 = (float)( param_2 ^ __LC1 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   auVar52 = getBtNormal(this, param_1);
   fVar44 = auVar52._0_4_ * fVar46;
   fVar45 = auVar52._4_4_ * fVar46;
   local_4c = 0;
   local_50 = fVar46 * auVar52._8_4_;
   local_58 = CONCAT44(fVar45, fVar44);
   if (*(float*)this != 0.0) {
      local_58 = CONCAT44(fVar45, fVar44 / *(float*)this);
   }

   if (*(float*)( this + 4 ) != 0.0) {
      local_58 = CONCAT44(fVar45 / *(float*)( this + 4 ), (undefined4)local_58);
   }

   if (*(float*)( this + 8 ) != 0.0) {
      local_50 = local_50 / *(float*)( this + 8 );
   }

   iVar42 = (int)*(float*)( (long)&local_58 + (long)*(int*)( this + 0xa4 ) * 4 );
   iVar32 = (int)*(float*)( (long)&local_58 + (long)*(int*)( this + 0xac ) * 4 );
   iVar29 = (int)*(float*)( (long)&local_58 + (long)*(int*)( this + 0xa8 ) * 4 );
   if (( iVar42 != 0 || iVar32 != 0 ) || iVar29 != 0) {
      iVar29 = iVar29 + *(int*)( param_1 + 0x18 );
      lVar21 = (long)( *(int*)( param_1 + 0x38 ) * *(int*)( param_1 + 0x30 ) - *(int*)( param_1 + 0x28 ) * *(int*)( param_1 + 0x40 ) );
      iVar42 = iVar42 + *(int*)( param_1 + 0x20 );
      lVar16 = (long)( *(int*)( param_1 + 0x40 ) * *(int*)( param_1 + 0x2c ) - *(int*)( param_1 + 0x30 ) * *(int*)( param_1 + 0x3c ) );
      iVar32 = iVar32 + *(int*)( param_1 + 0x1c );
      lVar26 = (long)( *(int*)( param_1 + 0x28 ) * *(int*)( param_1 + 0x3c ) - *(int*)( param_1 + 0x2c ) * *(int*)( param_1 + 0x38 ) );
      lVar25 = iVar29 * lVar16 + iVar32 * lVar21 + iVar42 * lVar26;
      if (lVar25 < *(int*)( param_1 + 0x18 ) * lVar16 + lVar21 * *(int*)( param_1 + 0x1c ) + *(int*)( param_1 + 0x20 ) * lVar26) {
         plVar23 = *(long**)( *(long*)( param_1 + 8 ) + 0x10 );
         Vertex::dot((Point64*)&local_b8);
         local_158 = Rational128::compare((Rational128*)&local_b8, lVar25);
         plVar13 = plVar23;
         if (local_158 < 0) {
            do {
               Vertex::dot((Point64*)&local_88);
               iVar5 = Rational128::compare((Rational128*)&local_88, (Rational128*)&local_b8);
               plVar18 = plVar13;
               if (0 < iVar5) {
                  local_158 = Rational128::compare((Rational128*)&local_88, lVar25);
                  if (-1 < local_158) goto LAB_00103bff;
                  plVar23 = (long*)plVar13[2];
                  local_a8 = local_78;
                  local_b8 = local_88;
                  lStack_b0 = lStack_80;
                  plVar18 = plVar23;
               }

               plVar13 = (long*)plVar18[1];
            }
 while ( plVar23 != (long*)plVar18[1] );
            goto LAB_00103afa;
         }

         do {
            while (true) {
               Vertex::dot((Point64*)&local_88);
               iVar5 = Rational128::compare((Rational128*)&local_88, (Rational128*)&local_b8);
               if (iVar5 < 0) break;
               plVar13 = (long*)plVar13[1];
               if (plVar23 == plVar13) goto LAB_00103b8d;
            }
;
            iVar5 = Rational128::compare((Rational128*)&local_88, lVar25);
            plVar23 = (long*)plVar13[2];
            local_b8 = local_88;
            lStack_b0 = lStack_80;
            local_a8 = local_78;
            if (iVar5 < 0) {
               plVar13 = plVar23;
               if (plVar23 != (long*)0x0) goto LAB_00103bff;
               break;
            }

            plVar13 = (long*)plVar23[1];
            local_158 = iVar5;
         }
 while ( plVar23 != plVar13 );
      }

      LAB_00103b8d:uVar8 = 0;
      goto LAB_00103b8f;
   }

   LAB_00103afa:uVar8 = 1;
   LAB_00103b8f:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00103bff:if (local_158 != 0) {
      LAB_00103c4c:local_1b8 = (long*)0x0;
      local_1e0 = (long*)0x0;
      local_190 = (long*)0x0;
      plVar23 = local_1e0;
      plVar18 = local_190;
      while (true) {
         plVar4 = local_1b8;
         if (local_158 == 0) {
            plVar10 = *(long**)plVar13[2];
            plVar43 = plVar10;
            while (true) {
               Vertex::dot((Point64*)&local_88);
               iVar5 = Rational128::compare((Rational128*)&local_88, lVar25);
               if (-1 < iVar5) break;
               plVar13 = (long*)plVar43[2];
               plVar43 = (long*)*plVar43;
               if (plVar10 == plVar43) goto LAB_00103afa;
            }
;
         }

         local_190 = plVar13;
         if (( plVar18 != (long*)0x0 ) && ( local_190 = plVar13 == plVar18 )) break;
         local_1e0 = (long*)plVar13[2];
         plVar18 = local_1e0;
         do {
            plVar18 = *(long**)( plVar18[2] + 8 );
            pVVar1 = (Vertex*)plVar18[3];
            Vertex::dot((Point64*)&local_88);
            iVar5 = Rational128::compare((Rational128*)&local_88, lVar25);
         }
 while ( iVar5 < 0 );
         if (iVar5 == 0) {
            if (local_158 != 0) {
               local_1e0 = (long*)newEdgePair(this, (Vertex*)plVar13[3], pVVar1);
               if (plVar23 != (long*)0x0) {
                  puVar14 = (undefined8*)plVar13[2];
                  lVar16 = plVar18[2];
                  *puVar14 = local_1e0;
                  local_1e0[1] = (long)puVar14;
                  plVar13 = (long*)local_1e0[2];
                  puVar14 = *(undefined8**)( lVar16 + 8 );
                  *puVar14 = plVar13;
                  plVar13[1] = (long)puVar14;
                  *plVar13 = lVar16;
                  *(long**)( lVar16 + 8 ) = plVar13;
                  goto LAB_001047b5;
               }

               lVar16 = plVar18[2];
               plVar10 = (long*)local_1e0[2];
               puVar14 = *(undefined8**)( lVar16 + 8 );
               *puVar14 = plVar10;
               plVar10[1] = (long)puVar14;
               LAB_00104691:*plVar10 = lVar16;
               *(long**)( lVar16 + 8 ) = plVar10;
               goto LAB_0010469d;
            }

            local_1e0 = (long*)*local_1e0;
            if (pVVar1 != (Vertex*)local_1e0[3]) {
               local_1e0 = (long*)newEdgePair(this, (Vertex*)plVar13[3], pVVar1);
               plVar13 = (long*)plVar13[2];
               lVar16 = *plVar13;
               *local_1e0 = lVar16;
               *(long**)( lVar16 + 8 ) = local_1e0;
               lVar16 = plVar18[2];
               *plVar13 = (long)local_1e0;
               local_1e0[1] = (long)plVar13;
               plVar10 = (long*)local_1e0[2];
               puVar14 = *(undefined8**)( lVar16 + 8 );
               *puVar14 = plVar10;
               plVar10[1] = (long)puVar14;
               *plVar10 = lVar16;
               *(long**)( lVar16 + 8 ) = plVar10;
               if (plVar23 != (long*)0x0) goto LAB_001047b5;
               goto LAB_0010469d;
            }

            if (plVar23 == (long*)0x0) goto LAB_001047f1;
            plVar13 = (long*)plVar23[2];
            LAB_001047ec:if (plVar13 == local_1e0) goto LAB_001047f1;
            LAB_00104836:iVar7 = *(int*)( param_4 + 4 );
            if (iVar7 == *(int*)( param_4 + 8 )) {
               iVar20 = iVar7 * 2;
               if (iVar7 == 0) {
                  iVar20 = 1;
               }

               if (iVar20 <= iVar7) goto LAB_00104846;
               lVar16 = VHACD::btAlignedAllocInternal((long)iVar20 << 3, 0x10);
               pvVar28 = *(void**)( param_4 + 0x10 );
               iVar7 = *(int*)( param_4 + 4 );
               if (iVar7 < 1) {
                  if (pvVar28 != (void*)0x0) goto LAB_00105331;
               }
 else {
                  lVar21 = 0;
                  do {
                     *(undefined8*)( lVar16 + lVar21 ) = *(undefined8*)( (long)pvVar28 + lVar21 );
                     lVar21 = lVar21 + 8;
                  }
 while ( lVar21 != (long)iVar7 * 8 );
                  LAB_00105331:if (*(char*)( param_4 + 0x18 ) != '\0') {
                     VHACD::btAlignedFreeInternal(pvVar28);
                     iVar7 = *(int*)( param_4 + 4 );
                  }

               }

               *(undefined1*)( param_4 + 0x18 ) = 1;
               *(long*)( param_4 + 0x10 ) = lVar16;
               *(int*)( param_4 + 8 ) = iVar20;
               plVar13 = (long*)plVar23[2];
            }
 else {
               LAB_00104846:lVar16 = *(long*)( param_4 + 0x10 );
               iVar20 = *(int*)( param_4 + 8 );
            }

            iVar6 = iVar7 + 1;
            *(long*)( lVar16 + (long)iVar7 * 8 ) = plVar23[3];
            plVar10 = (long*)*local_1e0;
            *(int*)( param_4 + 4 ) = iVar6;
            if (plVar10 != plVar13) {
               do {
                  puVar14 = (undefined8*)plVar10[2];
                  plVar13 = (long*)*plVar10;
                  lVar16 = plVar10[3];
                  lVar21 = puVar14[3];
                  if (plVar13 == plVar10) {
                     plVar13 = (long*)0x0;
                  }
 else {
                     puVar19 = (undefined8*)plVar10[1];
                     plVar13[1] = (long)puVar19;
                     *puVar19 = plVar13;
                  }

                  *(long**)( lVar21 + 0x10 ) = plVar13;
                  puVar19 = (undefined8*)*puVar14;
                  if (puVar14 == puVar19) {
                     puVar19 = (undefined8*)0x0;
                  }
 else {
                     puVar2 = (undefined8*)puVar14[1];
                     puVar19[1] = puVar2;
                     *puVar2 = puVar19;
                  }

                  *(undefined8**)( lVar16 + 0x10 ) = puVar19;
                  *plVar10 = *(long*)( this + 0x50 );
                  *puVar14 = plVar10;
                  *(int*)( this + 0xb0 ) = *(int*)( this + 0xb0 ) + -1;
                  *(undefined8**)( this + 0x50 ) = puVar14;
                  if (iVar20 == iVar6) {
                     iVar7 = 1;
                     if (iVar20 != 0) {
                        iVar7 = iVar20 * 2;
                     }

                     if (iVar7 <= iVar20) goto LAB_00104884;
                     lVar21 = VHACD::btAlignedAllocInternal((long)iVar7 << 3, 0x10);
                     pvVar28 = *(void**)( param_4 + 0x10 );
                     iVar6 = *(int*)( param_4 + 4 );
                     if (iVar6 < 1) {
                        if (pvVar28 != (void*)0x0) goto LAB_0010495c;
                     }
 else {
                        lVar26 = 0;
                        do {
                           *(undefined8*)( lVar21 + lVar26 ) = *(undefined8*)( (long)pvVar28 + lVar26 );
                           lVar26 = lVar26 + 8;
                        }
 while ( lVar26 != (long)iVar6 * 8 );
                        LAB_0010495c:if (*(char*)( param_4 + 0x18 ) != '\0') {
                           VHACD::btAlignedFreeInternal(pvVar28);
                           iVar6 = *(int*)( param_4 + 4 );
                        }

                     }

                     *(undefined1*)( param_4 + 0x18 ) = 1;
                     *(long*)( param_4 + 0x10 ) = lVar21;
                     *(int*)( param_4 + 8 ) = iVar7;
                     iVar20 = iVar7;
                  }
 else {
                     LAB_00104884:lVar21 = *(long*)( param_4 + 0x10 );
                  }

                  lVar26 = (long)iVar6;
                  iVar6 = iVar6 + 1;
                  *(long*)( lVar21 + lVar26 * 8 ) = lVar16;
                  *(int*)( param_4 + 4 ) = iVar6;
                  plVar10 = (long*)*local_1e0;
               }
 while ( plVar10 != (long*)plVar23[2] );
            }

            if (iVar20 == iVar6) {
               iVar7 = 1;
               if (iVar6 != 0) {
                  iVar7 = iVar6 * 2;
               }

               if (iVar7 <= iVar6) goto LAB_00104f33;
               lVar16 = VHACD::btAlignedAllocInternal((long)iVar7 << 3, 0x10);
               pvVar28 = *(void**)( param_4 + 0x10 );
               iVar6 = *(int*)( param_4 + 4 );
               if (iVar6 < 1) {
                  if (pvVar28 != (void*)0x0) goto LAB_001053b8;
               }
 else {
                  lVar21 = 0;
                  do {
                     *(undefined8*)( lVar16 + lVar21 ) = *(undefined8*)( (long)pvVar28 + lVar21 );
                     lVar21 = lVar21 + 8;
                  }
 while ( lVar21 != (long)iVar6 * 8 );
                  LAB_001053b8:if (*(char*)( param_4 + 0x18 ) != '\0') {
                     VHACD::btAlignedFreeInternal(pvVar28);
                     iVar6 = *(int*)( param_4 + 4 );
                  }

               }

               *(undefined1*)( param_4 + 0x18 ) = 1;
               *(long*)( param_4 + 0x10 ) = lVar16;
               *(int*)( param_4 + 8 ) = iVar7;
            }
 else {
               LAB_00104f33:lVar16 = *(long*)( param_4 + 0x10 );
            }

            *(undefined8*)( lVar16 + (long)iVar6 * 8 ) = 0;
            *(int*)( param_4 + 4 ) = iVar6 + 1;
            LAB_001047f1:plVar10 = (long*)local_1e0[2];
         }
 else {
            plVar10 = (long*)plVar18[2];
            plVar43 = (long*)plVar10[1];
            if (plVar43 == plVar10) {
               *(undefined8*)( pVVar1 + 0x10 ) = 0;
            }
 else {
               *(long**)( pVVar1 + 0x10 ) = plVar43;
               lVar16 = *plVar10;
               *plVar43 = lVar16;
               *(long**)( lVar16 + 8 ) = plVar43;
               *plVar10 = (long)plVar10;
               plVar10[1] = (long)plVar10;
            }

            lVar21 = plVar18[4];
            lVar9 = (long)( *(int*)( lVar21 + 0x38 ) * *(int*)( lVar21 + 0x30 ) - *(int*)( lVar21 + 0x28 ) * *(int*)( lVar21 + 0x40 ) );
            lVar40 = (long)( *(int*)( lVar21 + 0x28 ) * *(int*)( lVar21 + 0x3c ) - *(int*)( lVar21 + 0x2c ) * *(int*)( lVar21 + 0x38 ) );
            lVar22 = (long)( *(int*)( lVar21 + 0x2c ) * *(int*)( lVar21 + 0x40 ) - *(int*)( lVar21 + 0x30 ) * *(int*)( lVar21 + 0x3c ) );
            lVar26 = plVar10[4];
            lVar17 = (long)( *(int*)( lVar26 + 0x28 ) * *(int*)( lVar26 + 0x3c ) - *(int*)( lVar26 + 0x2c ) * *(int*)( lVar26 + 0x38 ) );
            lVar30 = (long)( *(int*)( lVar26 + 0x30 ) * *(int*)( lVar26 + 0x38 ) - *(int*)( lVar26 + 0x28 ) * *(int*)( lVar26 + 0x40 ) );
            lVar33 = (long)( *(int*)( lVar26 + 0x2c ) * *(int*)( lVar26 + 0x40 ) - *(int*)( lVar26 + 0x3c ) * *(int*)( lVar26 + 0x30 ) );
            lVar34 = *(int*)( param_1 + 0x2c ) * lVar9 + *(int*)( param_1 + 0x28 ) * lVar22 + lVar40 * *(int*)( param_1 + 0x30 );
            lVar41 = lVar40 * *(int*)( param_1 + 0x40 ) + *(int*)( param_1 + 0x3c ) * lVar9 + *(int*)( param_1 + 0x38 ) * lVar22;
            lVar35 = *(int*)( param_1 + 0x2c ) * lVar30 + *(int*)( param_1 + 0x28 ) * lVar33 + *(int*)( param_1 + 0x30 ) * lVar17;
            lVar16 = *(int*)( param_1 + 0x3c ) * lVar30 + *(int*)( param_1 + 0x38 ) * lVar33 + *(int*)( param_1 + 0x40 ) * lVar17;
            lVar21 = ( *(int*)( lVar21 + 0x20 ) - iVar42 ) * lVar40 + ( *(int*)( lVar21 + 0x1c ) - iVar32 ) * lVar9 + ( *(int*)( lVar21 + 0x18 ) - iVar29 ) * lVar22;
            lVar26 = ( *(int*)( lVar26 + 0x18 ) - iVar29 ) * lVar33 + ( *(int*)( lVar26 + 0x1c ) - iVar32 ) * lVar30 + ( *(int*)( lVar26 + 0x20 ) - iVar42 ) * lVar17;
            auVar47 = Int128::mul(lVar41, lVar35);
            auVar48 = Int128::mul(lVar34, lVar16);
            uVar36 = auVar48._0_8_ - auVar47._0_8_;
            lVar9 = ( ( auVar48._8_8_ + -1 ) - auVar47._8_8_ ) + ( ulong )(uVar36 < auVar48._0_8_) + ( ulong )(auVar47._0_8_ == 0);
            pauVar15 = *(undefined1(**) [16])( this + 0x30 );
            local_88 = uVar36;
            lStack_80 = lVar9;
            if (pauVar15 == (undefined1(*) [16])0x0) {
               puVar14 = *(undefined8**)( this + 0x28 );
               if (puVar14 == (undefined8*)0x0) {
                  puVar14 = (undefined8*)VHACD::btAlignedAllocInternal(0x18, 0x10);
                  iVar7 = *(int*)( this + 0x38 );
                  puVar14[2] = 0;
                  *(int*)( puVar14 + 1 ) = iVar7;
                  pauVar15 = (undefined1(*) [16])VHACD::btAlignedAllocInternal((long)iVar7 << 7, 0x10);
                  *puVar14 = pauVar15;
                  puVar14[2] = *(undefined8*)( this + 0x20 );
                  *(undefined8**)( this + 0x20 ) = puVar14;
               }
 else {
                  pauVar15 = (undefined1(*) [16])*puVar14;
                  *(undefined8*)( this + 0x28 ) = puVar14[2];
               }

               iVar7 = *(int*)( puVar14 + 1 );
               if (0 < iVar7) {
                  iVar20 = 0;
                  pauVar11 = pauVar15;
                  do {
                     while (true) {
                        iVar20 = iVar20 + 1;
                        pauVar12 = pauVar11 + 8;
                        if (iVar7 <= iVar20) break;
                        *(undefined1(**) [16])*pauVar11 = pauVar12;
                        pauVar11 = pauVar12;
                     }
;
                     *(undefined8*)*pauVar11 = 0;
                     pauVar11 = pauVar12;
                  }
 while ( iVar20 != iVar7 );
               }

            }

            *(undefined8*)( this + 0x30 ) = *(undefined8*)*pauVar15;
            uVar8 = _LC6;
            *pauVar15 = (undefined1[16])0x0;
            *(undefined8*)( pauVar15[7] + 4 ) = uVar8;
            *(undefined1(*) [16])( pauVar15[1] + 8 ) = (undefined1[16])0x0;
            auVar47 = Int128::operator *((Int128*)&local_88, (long)iVar42);
            iVar7 = *(int*)( param_1 + 0x40 );
            auVar48 = Int128::mul(lVar21 * iVar7, lVar35);
            auVar49 = Int128::mul(lVar26 * iVar7, lVar34);
            iVar7 = *(int*)( param_1 + 0x30 );
            auVar50 = Int128::mul(lVar26 * iVar7, lVar41);
            auVar51 = Int128::mul(lVar21 * iVar7, lVar16);
            uVar37 = auVar51._0_8_ - auVar50._0_8_;
            uVar31 = auVar49._0_8_ + uVar37;
            uVar38 = uVar31 - auVar48._0_8_;
            uVar24 = auVar47._0_8_ + uVar38;
            lVar17 = (ulong)CARRY8(auVar47._0_8_, uVar38) + ( ( ( auVar49._8_8_ + -2 + auVar51._8_8_ + auVar47._8_8_ ) - auVar50._8_8_ ) - auVar48._8_8_ ) + ( ulong )(auVar48._0_8_ == 0) + ( ulong )(auVar50._0_8_ == 0) + (ulong)CARRY8(auVar49._0_8_, uVar37) + ( ulong )(uVar37 < auVar51._0_8_) + ( ulong )(uVar38 < uVar31);
            auVar47 = Int128::operator *((Int128*)&local_88, (long)iVar32);
            iVar7 = *(int*)( param_1 + 0x3c );
            auVar48 = Int128::mul(lVar21 * iVar7, lVar35);
            auVar49 = Int128::mul(lVar26 * iVar7, lVar34);
            iVar7 = *(int*)( param_1 + 0x2c );
            auVar50 = Int128::mul(lVar26 * iVar7, lVar41);
            auVar51 = Int128::mul(lVar21 * iVar7, lVar16);
            uVar37 = auVar51._0_8_ - auVar50._0_8_;
            uVar31 = auVar49._0_8_ + uVar37;
            uVar38 = uVar31 - auVar48._0_8_;
            uVar39 = auVar47._0_8_ + uVar38;
            lVar22 = (ulong)CARRY8(auVar47._0_8_, uVar38) + ( ( ( auVar49._8_8_ + -2 + auVar51._8_8_ + auVar47._8_8_ ) - auVar50._8_8_ ) - auVar48._8_8_ ) + ( ulong )(auVar48._0_8_ == 0) + ( ulong )(auVar50._0_8_ == 0) + (ulong)CARRY8(auVar49._0_8_, uVar37) + ( ulong )(uVar37 < auVar51._0_8_) + ( ulong )(uVar38 < uVar31);
            auVar47 = Int128::operator *((Int128*)&local_88, (long)iVar29);
            iVar7 = *(int*)( param_1 + 0x38 );
            auVar48 = Int128::mul(lVar21 * iVar7, lVar35);
            auVar49 = Int128::mul(lVar26 * iVar7, lVar34);
            iVar7 = *(int*)( param_1 + 0x28 );
            auVar50 = Int128::mul(lVar26 * iVar7, lVar41);
            auVar51 = Int128::mul(lVar21 * iVar7, lVar16);
            uVar27 = auVar51._0_8_ - auVar50._0_8_;
            uVar37 = auVar49._0_8_ + uVar27;
            uVar38 = uVar37 - auVar48._0_8_;
            uVar31 = auVar47._0_8_ + uVar38;
            *(ulong*)( pauVar15[3] + 8 ) = uVar39;
            *(ulong*)( pauVar15[2] + 8 ) = uVar31;
            lVar16 = ( ( ( auVar49._8_8_ + -2 + auVar51._8_8_ + auVar47._8_8_ ) - auVar50._8_8_ ) - auVar48._8_8_ ) + ( ulong )(auVar48._0_8_ == 0) + ( ulong )(auVar50._0_8_ == 0) + (ulong)CARRY8(auVar49._0_8_, uVar27) + ( ulong )(uVar27 < auVar51._0_8_) + (ulong)CARRY8(auVar47._0_8_, uVar38) + ( ulong )(uVar38 < uVar37);
            *(long*)pauVar15[3] = lVar16;
            *(long*)pauVar15[4] = lVar22;
            *(ulong*)( pauVar15[4] + 8 ) = uVar24;
            *(long*)pauVar15[5] = lVar17;
            *(ulong*)( pauVar15[5] + 8 ) = uVar36;
            *(long*)pauVar15[6] = lVar9;
            if (lVar16 < 0) {
               lVar16 = -lVar16 - ( ulong )(uVar31 != 0);
               if (lVar16 < 0) {
                  fVar44 = (float)Int128::toScalar();
               }
 else {
                  if ((long)uVar31 < 1) {
                     fVar44 = (float)(long)-uVar31;
                  }
 else {
                     fVar44 = (float)-uVar31;
                  }

                  fVar44 = (float)lVar16 * _LC0 + fVar44;
               }

               fVar44 = (float)( (uint)fVar44 ^ __LC1 );
               if (lVar9 < 0) goto LAB_00104b9c;
               LAB_001044bd:fVar45 = (float)lVar9 * _LC0 + (float)uVar36;
            }
 else {
               fVar44 = (float)lVar16 * _LC0 + (float)uVar31;
               if (-1 < lVar9) goto LAB_001044bd;
               LAB_00104b9c:lVar16 = -lVar9 - ( ulong )(uVar36 != 0);
               if (lVar16 < 0) {
                  fVar45 = (float)Int128::toScalar();
               }
 else {
                  if ((long)uVar36 < 1) {
                     fVar45 = (float)(long)-uVar36;
                  }
 else {
                     fVar45 = (float)-uVar36;
                  }

                  fVar45 = (float)lVar16 * _LC0 + fVar45;
               }

               fVar45 = (float)( (uint)fVar45 ^ __LC1 );
            }

            *(int*)( pauVar15[6] + 8 ) = (int)( fVar44 / fVar45 );
            if (lVar22 < 0) {
               lVar16 = -lVar22 - ( ulong )(uVar39 != 0);
               if (lVar16 < 0) {
                  fVar44 = (float)Int128::toScalar();
               }
 else {
                  if ((long)uVar39 < 1) {
                     fVar44 = (float)(long)-uVar39;
                  }
 else {
                     fVar44 = (float)-uVar39;
                  }

                  fVar44 = (float)lVar16 * _LC0 + fVar44;
               }

               fVar44 = (float)( (uint)fVar44 ^ __LC1 );
               if (lVar9 < 0) goto LAB_00104da4;
               LAB_0010453e:fVar45 = (float)lVar9 * _LC0 + (float)uVar36;
            }
 else {
               fVar44 = (float)lVar22 * _LC0 + (float)uVar39;
               if (-1 < lVar9) goto LAB_0010453e;
               LAB_00104da4:lVar16 = -lVar9 - ( ulong )(uVar36 != 0);
               if (lVar16 < 0) {
                  fVar45 = (float)Int128::toScalar();
               }
 else {
                  if ((long)uVar36 < 1) {
                     fVar45 = (float)(long)-uVar36;
                  }
 else {
                     fVar45 = (float)-uVar36;
                  }

                  fVar45 = (float)lVar16 * _LC0 + fVar45;
               }

               fVar45 = (float)( (uint)fVar45 ^ __LC1 );
            }

            *(int*)( pauVar15[6] + 0xc ) = (int)( fVar44 / fVar45 );
            if (lVar17 < 0) {
               lVar16 = -lVar17 - ( ulong )(uVar24 != 0);
               if (lVar16 < 0) {
                  fVar44 = (float)Int128::toScalar();
               }
 else {
                  if ((long)uVar24 < 1) {
                     fVar44 = (float)(long)-uVar24;
                  }
 else {
                     fVar44 = (float)-uVar24;
                  }

                  fVar44 = (float)lVar16 * _LC0 + fVar44;
               }

               fVar44 = (float)( (uint)fVar44 ^ __LC1 );
            }
 else {
               fVar44 = (float)lVar17 * _LC0 + (float)uVar24;
            }

            if (lVar9 < 0) {
               lVar16 = -lVar9 - ( ulong )(uVar36 != 0);
               if (lVar16 < 0) {
                  fVar45 = (float)Int128::toScalar();
               }
 else {
                  if ((long)uVar36 < 1) {
                     fVar45 = (float)(long)-uVar36;
                  }
 else {
                     fVar45 = (float)-uVar36;
                  }

                  fVar45 = (float)lVar16 * _LC0 + fVar45;
               }

               fVar45 = (float)( (uint)fVar45 ^ __LC1 );
            }
 else {
               fVar45 = (float)lVar9 * _LC0 + (float)uVar36;
            }

            iVar7 = *(int*)( param_4 + 8 );
            *(int*)pauVar15[7] = (int)( fVar44 / fVar45 );
            plVar18[3] = (long)pauVar15;
            *(long**)pauVar15[1] = plVar10;
            iVar20 = *(int*)( param_4 + 4 );
            if (iVar20 == iVar7) {
               iVar20 = 1;
               if (iVar7 != 0) {
                  iVar20 = iVar7 * 2;
               }

               if (iVar20 <= iVar7) {
                  lVar16 = *(long*)( param_4 + 0x10 );
                  *(undefined1(**) [16])( lVar16 + (long)iVar7 * 8 ) = pauVar15;
                  iVar20 = iVar7;
                  iVar6 = iVar7 + 1;
                  goto LAB_0010462b;
               }

               lVar16 = VHACD::btAlignedAllocInternal((long)iVar20 << 3, 0x10);
               pvVar28 = *(void**)( param_4 + 0x10 );
               iVar6 = *(int*)( param_4 + 4 );
               if (iVar6 < 1) {
                  if (pvVar28 != (void*)0x0) goto LAB_001049ee;
               }
 else {
                  lVar21 = 0;
                  do {
                     *(undefined8*)( lVar16 + lVar21 ) = *(undefined8*)( (long)pvVar28 + lVar21 );
                     lVar21 = lVar21 + 8;
                  }
 while ( lVar21 != (long)iVar6 * 8 );
                  LAB_001049ee:if (*(char*)( param_4 + 0x18 ) != '\0') {
                     VHACD::btAlignedFreeInternal(pvVar28);
                     iVar6 = *(int*)( param_4 + 4 );
                  }

               }

               iVar7 = iVar6 + 1;
               *(undefined1*)( param_4 + 0x18 ) = 1;
               *(long*)( param_4 + 0x10 ) = lVar16;
               *(int*)( param_4 + 8 ) = iVar20;
               *(undefined1(**) [16])( lVar16 + (long)iVar6 * 8 ) = pauVar15;
               *(int*)( param_4 + 4 ) = iVar7;
               iVar6 = iVar7;
               if (iVar20 != iVar7) goto LAB_0010462b;
               LAB_00104e5d:iVar20 = iVar7 * 2;
               if (iVar20 != iVar7 && SBORROW4(iVar20, iVar7) == iVar7 < 0) goto LAB_00104bf8;
               iVar7 = iVar6 + 1;
               *(Vertex**)( lVar16 + (long)iVar6 * 8 ) = pVVar1;
            }
 else {
               lVar16 = *(long*)( param_4 + 0x10 );
               iVar6 = iVar20 + 1;
               *(undefined1(**) [16])( lVar16 + (long)iVar20 * 8 ) = pauVar15;
               *(int*)( param_4 + 4 ) = iVar6;
               iVar20 = iVar7;
               if (iVar7 == iVar6) {
                  if (iVar7 != 0) goto LAB_00104e5d;
                  iVar20 = 1;
                  LAB_00104bf8:lVar16 = VHACD::btAlignedAllocInternal((long)iVar20 << 3, 0x10);
                  pvVar28 = *(void**)( param_4 + 0x10 );
                  iVar6 = *(int*)( param_4 + 4 );
                  if (iVar6 < 1) {
                     if (pvVar28 != (void*)0x0) goto LAB_00104c4a;
                  }
 else {
                     lVar21 = 0;
                     do {
                        *(undefined8*)( lVar16 + lVar21 ) = *(undefined8*)( (long)pvVar28 + lVar21 );
                        lVar21 = lVar21 + 8;
                     }
 while ( lVar21 != (long)iVar6 * 8 );
                     LAB_00104c4a:if (*(char*)( param_4 + 0x18 ) != '\0') {
                        VHACD::btAlignedFreeInternal(pvVar28);
                        iVar6 = *(int*)( param_4 + 4 );
                     }

                  }

                  iVar7 = iVar6 + 1;
                  *(undefined1*)( param_4 + 0x18 ) = 1;
                  *(long*)( param_4 + 0x10 ) = lVar16;
                  *(int*)( param_4 + 8 ) = iVar20;
                  *(Vertex**)( lVar16 + (long)iVar6 * 8 ) = pVVar1;
                  *(int*)( param_4 + 4 ) = iVar7;
                  if (iVar7 == iVar20) {
                     LAB_00104c7e:iVar6 = iVar20 * 2;
                     if (iVar6 != iVar20 && SBORROW4(iVar6, iVar20) == iVar20 < 0) goto LAB_00104c8b;
                  }

               }
 else {
                  LAB_0010462b:iVar7 = iVar6 + 1;
                  *(Vertex**)( lVar16 + (long)iVar6 * 8 ) = pVVar1;
                  *(int*)( param_4 + 4 ) = iVar7;
                  if (iVar7 != iVar20) goto LAB_00104647;
                  iVar6 = 1;
                  if (iVar20 != 0) goto LAB_00104c7e;
                  LAB_00104c8b:lVar16 = VHACD::btAlignedAllocInternal((long)iVar6 << 3, 0x10);
                  pvVar28 = *(void**)( param_4 + 0x10 );
                  iVar7 = *(int*)( param_4 + 4 );
                  if (iVar7 < 1) {
                     if (pvVar28 != (void*)0x0) goto LAB_00104cc9;
                  }
 else {
                     lVar21 = 0;
                     do {
                        *(undefined8*)( lVar16 + lVar21 ) = *(undefined8*)( (long)pvVar28 + lVar21 );
                        lVar21 = lVar21 + 8;
                     }
 while ( lVar21 != (long)iVar7 * 8 );
                     LAB_00104cc9:if (*(char*)( param_4 + 0x18 ) != '\0') {
                        VHACD::btAlignedFreeInternal(pvVar28);
                        iVar7 = *(int*)( param_4 + 4 );
                     }

                  }

                  *(undefined1*)( param_4 + 0x18 ) = 1;
                  *(long*)( param_4 + 0x10 ) = lVar16;
                  *(int*)( param_4 + 8 ) = iVar6;
               }

            }

            LAB_00104647:*(undefined8*)( lVar16 + (long)iVar7 * 8 ) = 0;
            pVVar1 = (Vertex*)plVar18[3];
            *(int*)( param_4 + 4 ) = iVar7 + 1;
            local_1e0 = (long*)newEdgePair(this, (Vertex*)plVar13[3], pVVar1);
            if (local_158 == 0) {
               plVar13 = (long*)plVar13[2];
               lVar16 = *plVar13;
               *local_1e0 = lVar16;
               *(long**)( lVar16 + 8 ) = local_1e0;
               lVar16 = plVar18[2];
               *plVar13 = (long)local_1e0;
               local_1e0[1] = (long)plVar13;
               plVar10 = (long*)local_1e0[2];
               *plVar10 = lVar16;
               *(long**)( lVar16 + 8 ) = plVar10;
               if (plVar23 != (long*)0x0) {
                  plVar13 = (long*)plVar23[2];
                  if (plVar13 != local_1e0) goto LAB_00104836;
                  goto LAB_001047f1;
               }

            }
 else {
               plVar10 = (long*)local_1e0[2];
               lVar16 = plVar18[2];
               if (plVar23 == (long*)0x0) goto LAB_00104691;
               puVar14 = (undefined8*)plVar13[2];
               *puVar14 = local_1e0;
               local_1e0[1] = (long)puVar14;
               *plVar10 = lVar16;
               *(long**)( lVar16 + 8 ) = plVar10;
               LAB_001047b5:plVar13 = (long*)plVar23[2];
               if (local_158 < 1) goto LAB_001047ec;
               *local_1e0 = (long)plVar13;
               plVar13[1] = (long)local_1e0;
               plVar10 = (long*)local_1e0[2];
            }

         }

         LAB_0010469d:local_1e0[4] = (long)param_1;
         plVar10[4] = plVar18[4];
         plVar13 = plVar18;
         local_1b8 = local_1e0;
         plVar23 = local_1e0;
         plVar18 = local_190;
         local_158 = iVar5;
         if (plVar4 != (long*)0x0) {
            local_1b8 = plVar4;
         }

      }
;
      iVar5 = *(int*)( param_4 + 4 );
      plVar18 = (long*)plVar23[2];
      if (local_158 < 1) {
         if (plVar4 == plVar18) {
            puVar14 = *(undefined8**)( param_4 + 0x10 );
         }
 else {
            if (iVar5 == *(int*)( param_4 + 8 )) {
               iVar7 = iVar5 * 2;
               if (iVar5 == 0) {
                  iVar7 = 1;
               }

               if (iVar7 <= iVar5) goto LAB_001053ec;
               lVar25 = VHACD::btAlignedAllocInternal((long)iVar7 << 3, 0x10);
               iVar5 = *(int*)( param_4 + 4 );
               pvVar28 = *(void**)( param_4 + 0x10 );
               if (iVar5 < 1) {
                  if (pvVar28 != (void*)0x0) goto LAB_001059b3;
               }
 else {
                  lVar16 = 0;
                  do {
                     *(undefined8*)( lVar25 + lVar16 ) = *(undefined8*)( (long)pvVar28 + lVar16 );
                     lVar16 = lVar16 + 8;
                  }
 while ( lVar16 != (long)iVar5 * 8 );
                  LAB_001059b3:if (*(char*)( param_4 + 0x18 ) != '\0') {
                     VHACD::btAlignedFreeInternal(pvVar28);
                     iVar5 = *(int*)( param_4 + 4 );
                  }

               }

               *(undefined1*)( param_4 + 0x18 ) = 1;
               *(long*)( param_4 + 0x10 ) = lVar25;
               *(int*)( param_4 + 8 ) = iVar7;
               plVar18 = (long*)plVar23[2];
            }
 else {
               LAB_001053ec:lVar25 = *(long*)( param_4 + 0x10 );
               iVar7 = *(int*)( param_4 + 8 );
            }

            iVar20 = iVar5 + 1;
            *(long*)( lVar25 + (long)iVar5 * 8 ) = plVar23[3];
            *(int*)( param_4 + 4 ) = iVar20;
            plVar13 = (long*)*plVar4;
            if (plVar13 != plVar18) {
               do {
                  puVar14 = (undefined8*)plVar13[2];
                  plVar18 = (long*)*plVar13;
                  lVar25 = plVar13[3];
                  lVar16 = puVar14[3];
                  if (plVar18 == plVar13) {
                     plVar18 = (long*)0x0;
                  }
 else {
                     puVar19 = (undefined8*)plVar13[1];
                     plVar18[1] = (long)puVar19;
                     *puVar19 = plVar18;
                  }

                  *(long**)( lVar16 + 0x10 ) = plVar18;
                  puVar19 = (undefined8*)*puVar14;
                  if (puVar14 == puVar19) {
                     puVar19 = (undefined8*)0x0;
                  }
 else {
                     puVar2 = (undefined8*)puVar14[1];
                     puVar19[1] = puVar2;
                     *puVar2 = puVar19;
                  }

                  *(undefined8**)( lVar25 + 0x10 ) = puVar19;
                  *plVar13 = *(long*)( this + 0x50 );
                  *puVar14 = plVar13;
                  *(int*)( this + 0xb0 ) = *(int*)( this + 0xb0 ) + -1;
                  *(undefined8**)( this + 0x50 ) = puVar14;
                  if (iVar7 == iVar20) {
                     iVar5 = iVar7 * 2;
                     if (iVar7 == 0) {
                        iVar5 = 1;
                     }

                     if (iVar5 <= iVar7) goto LAB_0010541d;
                     lVar16 = VHACD::btAlignedAllocInternal((long)iVar5 << 3, 0x10);
                     iVar20 = *(int*)( param_4 + 4 );
                     pvVar28 = *(void**)( param_4 + 0x10 );
                     if (iVar20 < 1) {
                        if (pvVar28 != (void*)0x0) goto LAB_001054ff;
                     }
 else {
                        lVar21 = 0;
                        do {
                           *(undefined8*)( lVar16 + lVar21 ) = *(undefined8*)( (long)pvVar28 + lVar21 );
                           lVar21 = lVar21 + 8;
                        }
 while ( lVar21 != (long)iVar20 * 8 );
                        LAB_001054ff:if (*(char*)( param_4 + 0x18 ) != '\0') {
                           VHACD::btAlignedFreeInternal(pvVar28);
                           iVar20 = *(int*)( param_4 + 4 );
                        }

                     }

                     *(undefined1*)( param_4 + 0x18 ) = 1;
                     *(long*)( param_4 + 0x10 ) = lVar16;
                     *(int*)( param_4 + 8 ) = iVar5;
                     iVar7 = iVar5;
                  }
 else {
                     LAB_0010541d:lVar16 = *(long*)( param_4 + 0x10 );
                  }

                  lVar21 = (long)iVar20;
                  iVar20 = iVar20 + 1;
                  *(long*)( lVar16 + lVar21 * 8 ) = lVar25;
                  *(int*)( param_4 + 4 ) = iVar20;
                  plVar13 = (long*)*plVar4;
               }
 while ( plVar13 != (long*)plVar23[2] );
            }

            if (iVar7 == iVar20) {
               iVar5 = iVar20 * 2;
               if (iVar20 == 0) {
                  iVar5 = 1;
               }

               if (iVar5 <= iVar20) goto LAB_0010593b;
               puVar14 = (undefined8*)VHACD::btAlignedAllocInternal((long)iVar5 << 3, 0x10);
               iVar20 = *(int*)( param_4 + 4 );
               pvVar28 = *(void**)( param_4 + 0x10 );
               if (iVar20 < 1) {
                  if (pvVar28 != (void*)0x0) goto LAB_00105a34;
               }
 else {
                  lVar25 = 0;
                  do {
                     *(undefined8*)( (long)puVar14 + lVar25 ) = *(undefined8*)( (long)pvVar28 + lVar25 );
                     lVar25 = lVar25 + 8;
                  }
 while ( lVar25 != (long)iVar20 * 8 );
                  LAB_00105a34:if (*(char*)( param_4 + 0x18 ) != '\0') {
                     VHACD::btAlignedFreeInternal(pvVar28);
                     iVar20 = *(int*)( param_4 + 4 );
                  }

               }

               *(undefined1*)( param_4 + 0x18 ) = 1;
               *(undefined8**)( param_4 + 0x10 ) = puVar14;
               *(int*)( param_4 + 8 ) = iVar5;
            }
 else {
               LAB_0010593b:puVar14 = *(undefined8**)( param_4 + 0x10 );
            }

            iVar5 = iVar20 + 1;
            puVar14[iVar20] = 0;
            *(int*)( param_4 + 4 ) = iVar5;
         }

      }
 else {
         puVar14 = *(undefined8**)( param_4 + 0x10 );
         *(long*)( plVar4[2] + 0x18 ) = plVar23[3];
         puVar19 = (undefined8*)plVar13[2];
         *puVar19 = plVar4;
         *plVar4 = (long)plVar18;
         plVar4[1] = (long)puVar19;
         plVar18[1] = (long)plVar4;
      }

      *(undefined8*)( this + 0xb8 ) = *puVar14;
      if (0 < iVar5) {
         local_158 = 0;
         local_1c0 = iVar5;
         LAB_00105000:lVar21 = (long)local_158;
         local_158 = local_158 + 2;
         lVar25 = lVar21 * 8;
         lVar16 = *(long*)( *(long*)( param_4 + 0x10 ) + 8 + lVar25 );
         lVar21 = *(long*)( *(long*)( param_4 + 0x10 ) + lVar21 * 8 );
         if (lVar16 != 0) {
            lVar25 = lVar25 + 0x10;
            bVar3 = false;
            LAB_00105040:lVar26 = *(long*)( lVar16 + 0x18 );
            if (*(long*)( lVar21 + 0x20 ) == 0) {
               *(long*)( lVar21 + 0x18 ) = lVar26;
            }
 else {
               *(long*)( *(long*)( lVar21 + 0x20 ) + 0x10 ) = lVar26;
            }

            if (*(long*)( lVar16 + 0x20 ) != 0) {
               *(long*)( lVar21 + 0x20 ) = *(long*)( lVar16 + 0x20 );
            }

            for (; lVar26 != 0; lVar26 = *(long*)( lVar26 + 0x10 )) {
               *(long*)( lVar26 + 8 ) = lVar21;
            }

            *(undefined1(*) [16])( lVar16 + 0x18 ) = (undefined1[16])0x0;
            if (*(long*)( lVar16 + 0x10 ) != 0) {
               iVar7 = *(int*)( param_4 + 8 );
               if (bVar3) goto LAB_00105141;
               if (iVar7 == iVar5) {
                  if (iVar5 == 0) {
                     iVar7 = 1;
                  }
 else {
                     iVar7 = iVar5 * 2;
                     if (SBORROW4(iVar5, iVar7) == 0 < iVar5) {
                        lVar26 = *(long*)( param_4 + 0x10 );
                        iVar7 = iVar5;
                        goto LAB_001050ad;
                     }

                  }

                  lVar26 = VHACD::btAlignedAllocInternal((long)iVar7 << 3, 0x10);
                  iVar5 = *(int*)( param_4 + 4 );
                  pvVar28 = *(void**)( param_4 + 0x10 );
                  if (iVar5 < 1) {
                     if (pvVar28 != (void*)0x0) goto LAB_00105609;
                  }
 else {
                     lVar9 = 0;
                     do {
                        *(undefined8*)( lVar26 + lVar9 ) = *(undefined8*)( (long)pvVar28 + lVar9 );
                        lVar9 = lVar9 + 8;
                     }
 while ( lVar9 != (long)iVar5 * 8 );
                     LAB_00105609:if (*(char*)( param_4 + 0x18 ) != '\0') {
                        VHACD::btAlignedFreeInternal(pvVar28);
                        iVar5 = *(int*)( param_4 + 4 );
                     }

                  }

                  *(undefined1*)( param_4 + 0x18 ) = 1;
                  *(long*)( param_4 + 0x10 ) = lVar26;
                  *(int*)( param_4 + 8 ) = iVar7;
               }
 else {
                  lVar26 = *(long*)( param_4 + 0x10 );
               }

               LAB_001050ad:lVar9 = (long)iVar5;
               iVar5 = iVar5 + 1;
               *(long*)( lVar26 + lVar9 * 8 ) = lVar21;
               *(int*)( param_4 + 4 ) = iVar5;
               LAB_00105141:do {
                  plVar23 = *(long**)( lVar16 + 0x10 );
                  if (iVar7 == iVar5) {
                     iVar7 = iVar5 * 2;
                     if (iVar5 == 0) {
                        iVar7 = 1;
                     }

                     if (iVar7 <= iVar5) goto LAB_001050c0;
                     lVar26 = VHACD::btAlignedAllocInternal((long)iVar7 << 3, 0x10);
                     iVar5 = *(int*)( param_4 + 4 );
                     pvVar28 = *(void**)( param_4 + 0x10 );
                     if (iVar5 < 1) {
                        if (pvVar28 != (void*)0x0) goto LAB_001051c1;
                     }
 else {
                        lVar9 = 0;
                        do {
                           *(undefined8*)( lVar26 + lVar9 ) = *(undefined8*)( (long)pvVar28 + lVar9 );
                           lVar9 = lVar9 + 8;
                        }
 while ( lVar9 != (long)iVar5 * 8 );
                        LAB_001051c1:if (*(char*)( param_4 + 0x18 ) != '\0') {
                           VHACD::btAlignedFreeInternal(pvVar28);
                           iVar5 = *(int*)( param_4 + 4 );
                        }

                     }

                     *(undefined1*)( param_4 + 0x18 ) = 1;
                     plVar13 = *(long**)( lVar16 + 0x10 );
                     *(long*)( param_4 + 0x10 ) = lVar26;
                     *(int*)( param_4 + 8 ) = iVar7;
                  }
 else {
                     LAB_001050c0:lVar26 = *(long*)( param_4 + 0x10 );
                     plVar13 = plVar23;
                  }

                  lVar9 = (long)iVar5;
                  iVar5 = iVar5 + 1;
                  *(long*)( lVar26 + lVar9 * 8 ) = plVar23[3];
                  plVar23 = (long*)*plVar13;
                  *(int*)( param_4 + 4 ) = iVar5;
                  puVar14 = (undefined8*)plVar13[2];
                  if (plVar13 == plVar23) {
                     *(undefined8*)( puVar14[3] + 0x10 ) = 0;
                  }
 else {
                     plVar18 = (long*)plVar13[1];
                     plVar23[1] = (long)plVar18;
                     *plVar18 = (long)plVar23;
                     *(long**)( puVar14[3] + 0x10 ) = plVar23;
                  }

                  puVar19 = (undefined8*)*puVar14;
                  lVar9 = plVar13[3];
                  if (puVar14 == puVar19) {
                     puVar19 = (undefined8*)0x0;
                  }
 else {
                     puVar2 = (undefined8*)puVar14[1];
                     puVar19[1] = puVar2;
                     *puVar2 = puVar19;
                  }

                  *(undefined8**)( lVar9 + 0x10 ) = puVar19;
                  *plVar13 = *(long*)( this + 0x50 );
                  *puVar14 = plVar13;
                  *(int*)( this + 0xb0 ) = *(int*)( this + 0xb0 ) + -1;
                  lVar9 = *(long*)( lVar16 + 0x10 );
                  *(undefined8**)( this + 0x50 ) = puVar14;
                  if (lVar9 == 0) goto LAB_00105568;
                  iVar7 = *(int*)( param_4 + 8 );
               }
 while ( true );
            }

            lVar26 = *(long*)( param_4 + 0x10 );
            goto LAB_0010556d;
         }

         goto LAB_00105596;
      }

      goto LAB_00105798;
   }

   puVar14 = (undefined8*)plVar13[2];
   puVar19 = (undefined8*)*puVar14;
   do {
      Vertex::dot((Point64*)&local_88);
      iVar5 = Rational128::compare((Rational128*)&local_88, lVar25);
      if (0 < iVar5) goto LAB_00103c4c;
      puVar19 = (undefined8*)*puVar19;
   }
 while ( puVar14 != puVar19 );
   goto LAB_00103afa;
   LAB_00105568:bVar3 = true;
   LAB_0010556d:lVar16 = *(long*)( lVar26 + lVar25 );
   local_158 = local_158 + 1;
   lVar25 = lVar25 + 8;
   if (lVar16 == 0) goto code_r0x00105586;
   goto LAB_00105040;
   code_r0x00105586:if (bVar3) {
      if (iVar5 == *(int*)( param_4 + 8 )) {
         if (iVar5 == 0) {
            iVar7 = 1;
         }
 else {
            iVar7 = iVar5 * 2;
            if (SBORROW4(iVar5, iVar7) == 0 < iVar5) goto LAB_001056b4;
         }

         lVar26 = VHACD::btAlignedAllocInternal((long)iVar7 << 3, 0x10);
         iVar5 = *(int*)( param_4 + 4 );
         pvVar28 = *(void**)( param_4 + 0x10 );
         if (iVar5 < 1) {
            if (pvVar28 != (void*)0x0) goto LAB_00105718;
         }
 else {
            lVar25 = 0;
            do {
               *(undefined8*)( lVar26 + lVar25 ) = *(undefined8*)( (long)pvVar28 + lVar25 );
               lVar25 = lVar25 + 8;
            }
 while ( lVar25 != (long)iVar5 * 8 );
            LAB_00105718:if (*(char*)( param_4 + 0x18 ) != '\0') {
               VHACD::btAlignedFreeInternal(pvVar28);
               iVar5 = *(int*)( param_4 + 4 );
            }

         }

         *(undefined1*)( param_4 + 0x18 ) = 1;
         *(long*)( param_4 + 0x10 ) = lVar26;
         *(int*)( param_4 + 8 ) = iVar7;
      }

      LAB_001056b4:lVar25 = (long)iVar5;
      iVar5 = iVar5 + 1;
      *(undefined8*)( lVar26 + lVar25 * 8 ) = 0;
      *(int*)( param_4 + 4 ) = iVar5;
   }

   LAB_00105596:if (( local_158 < local_1c0 ) || ( local_1c0 = local_158 < iVar5 )) goto LAB_00105000;
   if (iVar5 < 1) {
      LAB_00105798:if (iVar5 != 0) {
         pvVar28 = *(void**)( param_4 + 0x10 );
         if (*(int*)( param_4 + 8 ) < 0) {
            if (( pvVar28 != (void*)0x0 ) && ( *(char*)( param_4 + 0x18 ) != '\0' )) {
               VHACD::btAlignedFreeInternal(pvVar28);
            }

            *(undefined1*)( param_4 + 0x18 ) = 1;
            pvVar28 = (void*)0x0;
            *(undefined8*)( param_4 + 0x10 ) = 0;
            *(undefined4*)( param_4 + 8 ) = 0;
         }

         memset((void*)( (long)pvVar28 + (long)iVar5 * 8 ), 0, ( ulong )(uint) - iVar5 << 3);
      }

   }

   *(undefined4*)( param_4 + 4 ) = 0;
   *(int*)( param_1 + 0x18 ) = iVar29;
   *(undefined4*)( param_1 + 0x24 ) = 0xffffffff;
   *(int*)( param_1 + 0x1c ) = iVar32;
   *(int*)( param_1 + 0x20 ) = iVar42;
   goto LAB_00103afa;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* VHACD::btConvexHullInternal::shrink(float, float) */void VHACD::btConvexHullInternal::shrink(btConvexHullInternal *this, float param_1, float param_2) {
   long *plVar1;
   undefined8 uVar2;
   int iVar3;
   int iVar4;
   long lVar5;
   Face *pFVar6;
   undefined8 uVar7;
   undefined8 *puVar8;
   char cVar9;
   int iVar10;
   int iVar11;
   ulong uVar12;
   long *plVar13;
   undefined8 *puVar14;
   undefined8 *puVar15;
   uint uVar16;
   ulong uVar17;
   int iVar18;
   int iVar19;
   int iVar20;
   long lVar21;
   int iVar22;
   ulong uVar23;
   int iVar24;
   undefined8 *puVar25;
   int iVar26;
   int iVar27;
   long lVar28;
   long *plVar29;
   long *plVar30;
   long in_FS_OFFSET;
   bool bVar31;
   float fVar32;
   float fVar33;
   float fVar34;
   float fVar35;
   float fVar36;
   undefined1 auVar37[12];
   undefined1 auVar38[12];
   long local_128;
   long local_120;
   long local_118;
   long local_110;
   long local_108;
   ulong local_e8;
   ulong local_e0;
   ulong local_d8;
   ulong local_d0;
   int local_b8;
   uint local_b4;
   long *local_b0;
   uint local_90;
   undefined1 local_78[4];
   int local_74;
   undefined4 local_70;
   void *local_68;
   char local_60;
   undefined8 local_58;
   float local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xb8 ) == 0) {
      LAB_00106075:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   iVar19 = *(int*)( this + 0xa0 ) + -1;
   *(int*)( this + 0xa0 ) = iVar19;
   *(int*)( *(long*)( this + 0xb8 ) + 0x78 ) = iVar19;
   local_b0 = (long*)VHACD::btAlignedAllocInternal(8, 0x10);
   puVar25 = (undefined8*)0x0;
   local_120 = 0;
   lVar28 = *(long*)( this + 0xb8 );
   local_b4 = 0;
   local_e8 = 0;
   local_118 = 0;
   iVar26 = *(int*)( lVar28 + 0x68 );
   *local_b0 = lVar28;
   local_d8 = 0;
   iVar3 = *(int*)( lVar28 + 0x6c );
   iVar4 = *(int*)( lVar28 + 0x70 );
   local_b8 = 1;
   local_108 = 0;
   local_d0 = 0;
   local_110 = 0;
   local_e0 = 0;
   local_90 = 0;
   iVar20 = 1;
   LAB_00105c6c:lVar28 = (long)local_b8;
   while (local_b8 = (int)lVar28,0 < local_b8) {
      lVar5 = local_b0[lVar28 + -1];
      lVar28 = lVar28 + -1;
      plVar30 = *(long**)( lVar5 + 0x10 );
      if (plVar30 != (long*)0x0) goto LAB_001060b0;
   }
;
   uVar12 = (ulong)local_b4;
   if (( local_120 < 0 ) || ( local_120 == 0 && local_e8 == 0 )) goto joined_r0x00106040;
   if (local_110 < 0) {
      lVar28 = ( ( ulong )(local_e0 == 0) - local_110 ) + -1;
      if (lVar28 < 0) {
         fVar32 = (float)Int128::toScalar();
      }
 else {
         if ((long)local_e0 < 1) {
            fVar32 = (float)(long)-local_e0;
         }
 else {
            fVar32 = (float)-local_e0;
         }

         fVar32 = (float)lVar28 * _LC0 + fVar32;
      }

      fVar32 = (float)( (uint)fVar32 ^ __LC1 );
   }
 else {
      fVar32 = (float)local_110 * _LC0 + (float)local_e0;
   }

   *(float*)( (long)&local_58 + (long)*(int*)( this + 0xa8 ) * 4 ) = fVar32;
   fVar32 = _LC0;
   if (local_108 < 0) {
      lVar28 = ( ( ulong )(local_d0 == 0) - local_108 ) + -1;
      if (lVar28 < 0) {
         fVar33 = (float)Int128::toScalar();
      }
 else {
         if ((long)local_d0 < 1) {
            fVar33 = (float)(long)-local_d0;
         }
 else {
            fVar33 = (float)-local_d0;
         }

         fVar33 = (float)lVar28 * _LC0 + fVar33;
      }

      fVar33 = (float)( (uint)fVar33 ^ __LC1 );
   }
 else {
      fVar33 = (float)local_108 * _LC0 + (float)local_d0;
   }

   *(float*)( (long)&local_58 + (long)*(int*)( this + 0xac ) * 4 ) = fVar33;
   if (local_118 < 0) {
      lVar28 = ( ( ulong )(local_d8 == 0) - local_118 ) + -1;
      if (lVar28 < 0) {
         fVar33 = (float)Int128::toScalar();
      }
 else {
         if ((long)local_d8 < 1) {
            fVar33 = (float)(long)-local_d8;
         }
 else {
            fVar33 = (float)-local_d8;
         }

         fVar33 = (float)lVar28 * fVar32 + fVar33;
      }

      fVar33 = (float)( (uint)fVar33 ^ __LC1 );
   }
 else {
      fVar33 = (float)local_118 * fVar32 + (float)local_d8;
   }

   *(float*)( (long)&local_58 + (long)*(int*)( this + 0xa4 ) * 4 ) = fVar33;
   fVar32 = _LC4 / ( ( (float)local_120 * fVar32 + (float)local_e8 ) * __LC8 );
   fVar36 = local_50 * fVar32 * *(float*)( this + 8 );
   fVar33 = fVar32 * (float)local_58 * (float)*(undefined8*)this;
   fVar32 = fVar32 * (float)( (ulong)local_58 >> 0x20 ) * (float)( ( ulong ) * (undefined8*)this >> 0x20 );
   local_58 = CONCAT44(fVar32, fVar33);
   iVar26 = (int)uVar12;
   local_50 = fVar36;
   if (param_2 <= 0.0) {
      if (iVar26 < 1) goto joined_r0x00106040;
      goto LAB_00105f56;
   }

   if (iVar26 < 1) goto joined_r0x00106040;
   puVar15 = puVar25;
   fVar35 = _LC7;
   do {
      pFVar6 = (Face*)*puVar15;
      puVar15 = puVar15 + 1;
      auVar37 = getBtNormal(this, pFVar6);
      auVar38 = toBtVector(this, (Point32*)( pFVar6 + 0x18 ));
      fVar34 = ( auVar38._4_4_ - fVar32 ) * auVar37._4_4_ + auVar37._0_4_ * ( auVar38._0_4_ - fVar33 ) + ( auVar38._8_4_ - fVar36 ) * auVar37._8_4_;
      if (fVar35 <= fVar34) {
         fVar34 = fVar35;
      }

      fVar35 = fVar34;
   }
 while ( puVar25 + iVar26 != puVar15 );
   uVar12 = uVar12 & 0xffffffff;
   if (0.0 < fVar35) {
      LAB_00105f56:uVar16 = 0x3b7f7;
      puVar15 = puVar25;
      do {
         puVar14 = puVar15 + 1;
         uVar17 = (ulong)uVar16;
         uVar16 = uVar16 * 0x19660d + 0x3c6ef35f;
         uVar7 = *puVar15;
         *puVar15 = puVar25[uVar17 % ( uVar12 & 0xffffffff )];
         puVar25[uVar17 % ( uVar12 & 0xffffffff )] = uVar7;
         puVar15 = puVar14;
      }
 while ( puVar25 + iVar26 != puVar14 );
      puVar15 = puVar25;
      do {
         local_60 = '\x01';
         local_68 = (void*)0x0;
         local_70 = 0;
         local_74 = local_b8;
         cVar9 = shiftFace(this, *puVar15, local_78);
         if (( local_68 != (void*)0x0 ) && ( local_60 != '\0' )) {
            VHACD::btAlignedFreeInternal(local_68);
            if (cVar9 != '\0') goto LAB_00105fb4;
            break;
         }

         if (cVar9 == '\0') break;
         LAB_00105fb4:puVar15 = puVar15 + 1;
      }
 while ( puVar15 != puVar25 + iVar26 );
   }

   joined_r0x00106040:if (puVar25 != (undefined8*)0x0) {
      VHACD::btAlignedFreeInternal(puVar25);
   }

   if (local_b0 != (long*)0x0) {
      VHACD::btAlignedFreeInternal(local_b0);
   }

   goto LAB_00106075;
   LAB_001060b0:local_b8 = local_b8 + -1;
   LAB_001060ee:do {
      lVar28 = plVar30[3];
      if (iVar19 != *(int*)( lVar28 + 0x78 )) {
         *(int*)( lVar28 + 0x78 ) = iVar19;
         if (iVar20 == local_b8) {
            if (local_b8 == 0) {
               iVar10 = 1;
               plVar13 = (long*)VHACD::btAlignedAllocInternal(8, 0x10);
               LAB_00106674:iVar20 = iVar10;
               if (local_b0 != (long*)0x0) {
                  LAB_001064c1:VHACD::btAlignedFreeInternal(local_b0);
                  iVar20 = iVar10;
               }

               local_b0 = plVar13;
               lVar28 = plVar30[3];
            }
 else {
               iVar10 = local_b8 * 2;
               if (SBORROW4(local_b8, iVar10) != 0 < local_b8) {
                  plVar13 = (long*)VHACD::btAlignedAllocInternal((long)iVar10 << 3, 0x10);
                  if (local_b8 < 1) goto LAB_00106674;
                  lVar28 = 0;
                  do {
                     *(undefined8*)( (long)plVar13 + lVar28 ) = *(undefined8*)( (long)local_b0 + lVar28 );
                     lVar28 = lVar28 + 8;
                  }
 while ( lVar28 != (long)local_b8 * 8 );
                  goto LAB_001064c1;
               }

            }

         }

         lVar21 = (long)local_b8;
         local_b8 = local_b8 + 1;
         local_b0[lVar21] = lVar28;
      }

      if (iVar19 != (int)plVar30[5]) {
         puVar15 = *(undefined8**)( this + 0x70 );
         if (puVar15 == (undefined8*)0x0) {
            puVar14 = *(undefined8**)( this + 0x68 );
            if (puVar14 == (undefined8*)0x0) {
               puVar14 = (undefined8*)VHACD::btAlignedAllocInternal(0x18, 0x10);
               iVar10 = *(int*)( this + 0x78 );
               puVar14[2] = 0;
               *(int*)( puVar14 + 1 ) = iVar10;
               puVar15 = (undefined8*)VHACD::btAlignedAllocInternal((long)iVar10 * 0x48, 0x10);
               *puVar14 = puVar15;
               puVar14[2] = *(undefined8*)( this + 0x60 );
               *(undefined8**)( this + 0x60 ) = puVar14;
            }
 else {
               puVar15 = (undefined8*)*puVar14;
               *(undefined8*)( this + 0x68 ) = puVar14[2];
            }

            iVar10 = *(int*)( puVar14 + 1 );
            iVar11 = 0;
            puVar14 = puVar15;
            if (0 < iVar10) {
               do {
                  while (true) {
                     iVar11 = iVar11 + 1;
                     puVar8 = puVar14 + 9;
                     if (iVar10 <= iVar11) break;
                     *puVar14 = puVar8;
                     puVar14 = puVar8;
                  }
;
                  *puVar14 = 0;
                  puVar14 = puVar8;
               }
 while ( iVar11 != iVar10 );
            }

         }

         local_128 = plVar30[3];
         *(undefined8*)( this + 0x70 ) = *puVar15;
         lVar28 = plVar30[2];
         uVar7 = *(undefined8*)( local_128 + 0x68 );
         uVar2 = *(undefined8*)( local_128 + 0x70 );
         *puVar15 = 0;
         plVar13 = *(long**)( lVar28 + 8 );
         puVar15[2] = 0;
         lVar28 = plVar13[3];
         puVar15[3] = uVar7;
         puVar15[4] = uVar2;
         uVar7 = *(undefined8*)( local_128 + 0x68 );
         puVar15[1] = local_128;
         uVar2 = *(undefined8*)( lVar28 + 0x68 );
         iVar10 = *(int*)( lVar28 + 0x70 );
         iVar11 = *(int*)( local_128 + 0x70 );
         *(undefined4*)( (long)puVar15 + 0x34 ) = 0xffffffff;
         *(int*)( puVar15 + 6 ) = iVar10 - iVar11;
         puVar15[5] = CONCAT44((int)( (ulong)uVar2 >> 0x20 ) - (int)( (ulong)uVar7 >> 0x20 ), (int)uVar2 - (int)uVar7);
         iVar10 = *(int*)( lVar5 + 0x6c );
         iVar11 = *(int*)( lVar5 + 0x68 );
         iVar18 = *(int*)( local_128 + 0x6c );
         iVar22 = *(int*)( local_128 + 0x68 );
         *(int*)( puVar15 + 8 ) = *(int*)( lVar5 + 0x70 ) - *(int*)( local_128 + 0x70 );
         lVar28 = *(long*)( local_128 + 0x20 );
         *(int*)( puVar15 + 7 ) = iVar11 - iVar22;
         *(int*)( (long)puVar15 + 0x3c ) = iVar10 - iVar18;
         *(undefined4*)( (long)puVar15 + 0x44 ) = 0xffffffff;
         if (lVar28 == 0) {
            *(undefined8**)( local_128 + 0x18 ) = puVar15;
         }
 else {
            *(undefined8**)( lVar28 + 0x10 ) = puVar15;
         }

         *(undefined8**)( local_128 + 0x20 ) = puVar15;
         if (local_90 == local_b4) {
            if (local_b4 == 0) {
               puVar14 = (undefined8*)VHACD::btAlignedAllocInternal(8, 0x10);
               local_90 = 1;
               LAB_001068f3:if (puVar25 != (undefined8*)0x0) {
                  LAB_00106581:VHACD::btAlignedFreeInternal(puVar25);
               }

               local_128 = plVar30[3];
               plVar13 = *(long**)( plVar30[2] + 8 );
               puVar25 = puVar14;
            }
 else {
               uVar16 = local_b4 * 2;
               if (uVar16 != local_b4 && SBORROW4(uVar16, local_b4) == (int)local_b4 < 0) {
                  puVar14 = (undefined8*)VHACD::btAlignedAllocInternal((long)(int)uVar16 << 3, 0x10);
                  local_90 = uVar16;
                  if ((int)local_b4 < 1) goto LAB_001068f3;
                  lVar28 = 0;
                  do {
                     *(undefined8*)( (long)puVar14 + lVar28 ) = *(undefined8*)( (long)puVar25 + lVar28 );
                     lVar28 = lVar28 + 8;
                  }
 while ( (long)(int)local_b4 * 8 - lVar28 != 0 );
                  goto LAB_00106581;
               }

            }

         }

         puVar25[(int)local_b4] = puVar15;
         local_b4 = local_b4 + 1;
         lVar28 = 0;
         lVar21 = 0;
         plVar29 = plVar30;
         while (true) {
            if (( lVar28 != 0 ) && ( lVar21 != 0 )) {
               iVar22 = *(int*)( lVar21 + 0x70 ) - iVar4;
               iVar18 = *(int*)( lVar28 + 0x6c ) - iVar3;
               iVar24 = *(int*)( lVar28 + 0x70 ) - iVar4;
               iVar10 = *(int*)( lVar28 + 0x68 ) - iVar26;
               iVar27 = *(int*)( lVar21 + 0x68 ) - iVar26;
               iVar11 = *(int*)( lVar21 + 0x6c ) - iVar3;
               uVar12 = (long)( iVar11 * iVar10 - iVar27 * iVar18 ) * (long)( *(int*)( lVar5 + 0x70 ) - iVar4 ) + (long)( *(int*)( lVar5 + 0x68 ) - iVar26 ) * (long)( iVar22 * iVar18 - iVar11 * iVar24 ) + (long)( iVar24 * iVar27 - iVar22 * iVar10 ) * (long)( *(int*)( lVar5 + 0x6c ) - iVar3 );
               uVar23 = (long)( *(int*)( lVar28 + 0x68 ) + *(int*)( lVar5 + 0x68 ) + *(int*)( lVar21 + 0x68 ) + iVar26 ) * uVar12;
               bVar31 = CARRY8(uVar23, local_e0);
               local_e0 = uVar23 + local_e0;
               uVar17 = (long)( *(int*)( lVar28 + 0x6c ) + *(int*)( lVar5 + 0x6c ) + *(int*)( lVar21 + 0x6c ) + iVar3 ) * uVar12;
               local_110 = ( ( local_110 + 1 ) - (ulong)!bVar31 ) + ( (long)uVar23 >> 0x3f );
               bVar31 = CARRY8(uVar17, local_d0);
               local_d0 = uVar17 + local_d0;
               uVar23 = (long)( *(int*)( lVar28 + 0x70 ) + *(int*)( lVar5 + 0x70 ) + *(int*)( lVar21 + 0x70 ) + iVar4 ) * uVar12;
               local_108 = ( ( local_108 + 1 ) - (ulong)!bVar31 ) + ( (long)uVar17 >> 0x3f );
               bVar31 = CARRY8(uVar23, local_d8);
               local_d8 = uVar23 + local_d8;
               local_118 = ( ( local_118 + 1 ) - (ulong)!bVar31 ) + ( (long)uVar23 >> 0x3f );
               bVar31 = CARRY8(uVar12, local_e8);
               local_e8 = uVar12 + local_e8;
               local_120 = ( ( local_120 + 1 ) - (ulong)!bVar31 ) + ( (long)uVar12 >> 0x3f );
            }

            *(int*)( plVar29 + 5 ) = iVar19;
            plVar29[4] = (long)puVar15;
            if (plVar30 == plVar13) break;
            plVar1 = plVar13 + 3;
            lVar28 = lVar21;
            lVar21 = local_128;
            plVar29 = plVar13;
            plVar13 = *(long**)( plVar13[2] + 8 );
            local_128 = *plVar1;
         }
;
         plVar30 = (long*)*plVar30;
         if (*(long**)( lVar5 + 0x10 ) == plVar30) break;
         goto LAB_001060ee;
      }

      plVar30 = (long*)*plVar30;
   }
 while ( (long*)*(long*)( lVar5 + 0x10 ) != plVar30 );
   goto LAB_00105c6c;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* VHACD::btConvexHullInternal::compute(void const*, bool, int, int) */void VHACD::btConvexHullInternal::compute(btConvexHullInternal *this, void *param_1, bool param_2, int param_3, int param_4) {
   float *pfVar1;
   float *pfVar2;
   float *pfVar3;
   int iVar4;
   void *pvVar5;
   double dVar6;
   double *pdVar7;
   undefined8 uVar8;
   int iVar9;
   int iVar10;
   uint uVar11;
   undefined4 uVar12;
   float *pfVar13;
   undefined1(*pauVar14)[16];
   long lVar15;
   undefined1(*pauVar16)[16];
   double *pdVar17;
   undefined8 *puVar18;
   int iVar19;
   int iVar20;
   long lVar21;
   int iVar22;
   undefined4 uVar23;
   undefined4 uVar24;
   undefined1(*pauVar25)[16];
   int iVar26;
   int iVar27;
   int iVar28;
   int iVar29;
   int iVar30;
   int iVar31;
   int iVar32;
   long in_FS_OFFSET;
   undefined8 uVar33;
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
   btAlignedObjectArray<VHACD::btConvexHullInternal::Point32> local_98[4];
   undefined8 local_94;
   undefined1(*local_88)[16];
   char local_80;
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined8 local_58;
   float local_50;
   undefined4 local_4c;
   long local_40;
   fVar35 = (float)_LC11;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2) {
      if (param_4 < 1) goto LAB_001073ee;
      iVar22 = 0;
      pdVar17 = (double*)param_1;
      fVar35 = _LC9;
      fVar37 = _LC10;
      fVar39 = _LC9;
      fVar34 = _LC10;
      fVar40 = _LC10;
      fVar42 = _LC9;
      do {
         iVar22 = iVar22 + 1;
         fVar36 = (float)pdVar17[2];
         fVar38 = (float)pdVar17[1];
         fVar41 = (float)*pdVar17;
         pdVar17 = (double*)( (long)pdVar17 + (long)param_3 );
         fVar45 = fVar41;
         if (fVar40 <= fVar41) {
            fVar45 = fVar40;
         }

         fVar46 = fVar38;
         if (fVar37 <= fVar38) {
            fVar46 = fVar37;
         }

         fVar43 = fVar36;
         if (fVar34 <= fVar36) {
            fVar43 = fVar34;
         }

         if (fVar41 <= fVar42) {
            fVar41 = fVar42;
         }

         if (fVar38 <= fVar35) {
            fVar38 = fVar35;
         }

         if (fVar36 <= fVar39) {
            fVar36 = fVar39;
         }

         fVar35 = fVar38;
         fVar37 = fVar46;
         fVar39 = fVar36;
         fVar34 = fVar43;
         fVar40 = fVar45;
         fVar42 = fVar41;
      }
 while ( param_4 != iVar22 );
      LAB_00106ad7:fVar42 = fVar41 - fVar45;
      fVar40 = fVar38 - fVar46;
      fVar44 = fVar36 - fVar43;
      fVar34 = ( fVar36 + fVar43 ) * (float)_LC16;
      fVar37 = fVar42 * _LC14;
      fVar39 = fVar40 * _UNK_001093cc;
      uVar33 = CONCAT44(( fVar38 + fVar46 ) * _LC16._4_4_, ( fVar41 + fVar45 ) * (float)_LC16);
      fVar35 = _LC14 * fVar44;
      if (fVar40 <= fVar42) {
         if (fVar44 <= fVar42) {
            *(undefined4*)( this + 0xac ) = 0;
            if (fVar42 < fVar40) {
               uVar24 = 2;
               uVar12 = 1;
               if (fVar42 < fVar44) goto LAB_001072c7;
            }
 else if (fVar40 < fVar44) {
               uVar24 = 1;
               uVar12 = 2;
               goto LAB_0010727a;
            }

            goto LAB_0010740f;
         }

         uVar12 = 0;
         uVar23 = 1;
         uVar24 = 1;
         *(undefined4*)( this + 0xac ) = 2;
         if (fVar44 <= fVar40) {
            LAB_001072c7:*(undefined4*)( this + 0xa4 ) = uVar12;
            *(undefined4*)( this + 0xa8 ) = uVar24;
            goto LAB_00106b96;
         }

         goto LAB_001072a2;
      }

      if (fVar44 <= fVar40) {
         *(undefined4*)( this + 0xac ) = 1;
         uVar11 = ( uint )(fVar44 <= fVar42);
         *(uint*)( this + 0xa4 ) = uVar11 * 2;
         *(uint*)( this + 0xa8 ) = uVar11 * -2 + 2;
         if (0xaaaaaaaa < ( uVar11 * -2 + 3 ) * -0x55555555) goto LAB_00106b96;
         goto LAB_00106b84;
      }

      *(undefined4*)( this + 0xac ) = 2;
      uVar24 = 0;
      uVar12 = 1;
      LAB_0010727a:*(undefined4*)( this + 0xa4 ) = uVar24;
      *(undefined4*)( this + 0xa8 ) = uVar12;
   }
 else {
      if (0 < param_4) {
         iVar22 = 0;
         pfVar13 = (float*)param_1;
         fVar35 = _LC9;
         fVar37 = _LC10;
         fVar39 = _LC9;
         fVar34 = _LC10;
         fVar40 = _LC10;
         fVar42 = _LC9;
         do {
            fVar45 = *pfVar13;
            fVar38 = pfVar13[1];
            iVar22 = iVar22 + 1;
            fVar36 = pfVar13[2];
            pfVar13 = (float*)( (long)pfVar13 + (long)param_3 );
            fVar41 = fVar45;
            if (fVar45 <= fVar42) {
               fVar41 = fVar42;
            }

            if (fVar40 <= fVar45) {
               fVar45 = fVar40;
            }

            fVar46 = fVar38;
            if (fVar37 <= fVar38) {
               fVar46 = fVar37;
            }

            fVar43 = fVar36;
            if (fVar34 <= fVar36) {
               fVar43 = fVar34;
            }

            if (fVar38 <= fVar35) {
               fVar38 = fVar35;
            }

            if (fVar36 <= fVar39) {
               fVar36 = fVar39;
            }

            fVar35 = fVar38;
            fVar37 = fVar46;
            fVar39 = fVar36;
            fVar34 = fVar43;
            fVar40 = fVar45;
            fVar42 = fVar41;
         }
 while ( param_4 != iVar22 );
         goto LAB_00106ad7;
      }

      LAB_001073ee:fVar34 = 0.0;
      uVar33 = 0;
      *(undefined4*)( this + 0xac ) = 0;
      fVar37 = (float)_LC11;
      fVar39 = _LC11._4_4_;
      LAB_0010740f:uVar23 = 2;
      uVar12 = 1;
      LAB_001072a2:*(undefined4*)( this + 0xa4 ) = uVar23;
      *(undefined4*)( this + 0xa8 ) = uVar12;
      LAB_00106b84:fVar35 = (float)( (uint)fVar35 ^ __LC1 );
      fVar37 = (float)( (uint)fVar37 ^ (uint)_LC17 );
      fVar39 = (float)( (uint)fVar39 ^ _LC17._4_4_ );
   }

   LAB_00106b96:*(undefined4*)( this + 0xc ) = 0;
   *(float*)this = fVar37;
   *(float*)( this + 4 ) = fVar39;
   *(float*)( this + 8 ) = fVar35;
   if (fVar37 != 0.0) {
      fVar37 = _LC4 / fVar37;
   }

   if (fVar39 != 0.0) {
      fVar39 = _LC4 / fVar39;
   }

   if (fVar35 != 0.0) {
      fVar35 = _LC4 / fVar35;
   }

   *(undefined4*)( this + 0x1c ) = 0;
   local_80 = '\x01';
   local_88 = (undefined1(*) [16])0x0;
   local_94 = 0;
   *(undefined8*)( this + 0x10 ) = uVar33;
   *(float*)( this + 0x18 ) = fVar34;
   uVar11 = param_4;
   if (-1 < param_4) {
      if (param_4 != 0) {
         lVar21 = (long)param_4;
         pauVar14 = (undefined1(*) [16])VHACD::btAlignedAllocInternal(lVar21 << 4, 0x10);
         if ((int)local_94 < 1) {
            if (local_88 != (undefined1(*) [16])0x0) goto LAB_00106cab;
         }
 else {
            lVar15 = 0;
            do {
               uVar33 = *(undefined8*)( (long)( *local_88 + lVar15 ) + 8 );
               *(undefined8*)( *pauVar14 + lVar15 ) = *(undefined8*)( *local_88 + lVar15 );
               *(undefined8*)( (long)( *pauVar14 + lVar15 ) + 8 ) = uVar33;
               lVar15 = lVar15 + 0x10;
            }
 while ( (long)(int)local_94 * 0x10 != lVar15 );
            LAB_00106cab:if (local_80 != '\0') {
               VHACD::btAlignedFreeInternal(local_88);
            }

         }

         local_80 = '\x01';
         pauVar16 = pauVar14;
         if (( lVar21 * 0x10 & 0x10U ) == 0) goto LAB_00106cf0;
         *pauVar14 = (undefined1[16])0x0;
         for (pauVar16 = pauVar14 + 1; pauVar14 + lVar21 != pauVar16; pauVar16 = pauVar16 + 2) {
            LAB_00106cf0:*pauVar16 = (undefined1[16])0x0;
            pauVar16[1] = (undefined1[16])0x0;
         }

         local_94 = CONCAT44(param_4, param_4);
         fVar34 = *(float*)( this + 0x18 );
         pfVar13 = (float*)( (long)&local_58 + (long)*(int*)( this + 0xa8 ) * 4 );
         pfVar1 = (float*)( (long)&local_58 + (long)*(int*)( this + 0xac ) * 4 );
         pfVar2 = (float*)( (long)&local_58 + (long)*(int*)( this + 0xa4 ) * 4 );
         fVar40 = (float)*(undefined8*)( this + 0x10 );
         fVar42 = (float)( ( ulong ) * (undefined8*)( this + 0x10 ) >> 0x20 );
         pauVar16 = pauVar14;
         iVar22 = 0;
         if (param_2) {
            do {
               /* WARNING: Load size is inaccurate */
               dVar6 = *param_1;
               pdVar7 = (double*)( (long)param_1 + 8 );
               local_4c = 0;
               pdVar17 = (double*)( (long)param_1 + 0x10 );
               param_1 = (void*)( (long)param_1 + (long)param_3 );
               iVar9 = iVar22 + 1;
               local_58 = CONCAT44(( (float)*pdVar7 - fVar42 ) * fVar39, ( (float)dVar6 - fVar40 ) * fVar37);
               local_50 = ( (float)*pdVar17 - fVar34 ) * fVar35;
               fVar45 = *pfVar2;
               *(ulong*)*pauVar16 = CONCAT44((int)*pfVar1, (int)*pfVar13);
               *(ulong*)( *pauVar16 + 8 ) = CONCAT44(iVar22, (int)fVar45);
               pauVar16 = pauVar16 + 1;
               iVar22 = iVar9;
            }
 while ( param_4 != iVar9 );
         }
 else {
            do {
               /* WARNING: Load size is inaccurate */
               uVar33 = *param_1;
               local_4c = 0;
               iVar9 = iVar22 + 1;
               pfVar3 = (float*)( (long)param_1 + 8 );
               param_1 = (void*)( (long)param_1 + (long)param_3 );
               local_58 = CONCAT44(( (float)( (ulong)uVar33 >> 0x20 ) - fVar42 ) * fVar39, ( (float)uVar33 - fVar40 ) * fVar37);
               local_50 = ( *pfVar3 - fVar34 ) * fVar35;
               fVar45 = *pfVar2;
               *(ulong*)*pauVar16 = CONCAT44((int)*pfVar1, (int)*pfVar13);
               *(ulong*)( *pauVar16 + 8 ) = CONCAT44(iVar22, (int)fVar45);
               pauVar16 = pauVar16 + 1;
               iVar22 = iVar9;
            }
 while ( param_4 != iVar9 );
         }

         local_4c = 0;
         local_88 = pauVar14;
         if (param_4 != 1) {
            iVar10 = param_4 + -1;
            iVar19 = 1;
            iVar20 = 0;
            pauVar16 = pauVar14 + ( iVar10 >> 1 );
            iVar22 = *(int*)*pauVar16;
            iVar9 = *(int*)( *pauVar16 + 4 );
            iVar4 = *(int*)( *pauVar16 + 8 );
            pauVar16 = pauVar14;
            iVar28 = iVar10;
            LAB_00106df0:while (true) {
               iVar26 = *(int*)( *pauVar16 + 4 );
               if (iVar9 <= iVar26) break;
               LAB_001074b1:iVar20 = iVar20 + 1;
               pauVar16 = pauVar16 + 1;
               iVar19 = iVar19 + 1;
            }
;
            if (iVar26 == iVar9) {
               if (*(int*)*pauVar16 < iVar22) goto LAB_001074b1;
               if (( *(int*)*pauVar16 != iVar22 ) || ( iVar4 <= *(int*)( *pauVar16 + 8 ) )) goto LAB_00106e03;
               iVar20 = iVar20 + 1;
               pauVar16 = pauVar16 + 1;
               iVar19 = iVar19 + 1;
               goto LAB_00106df0;
            }

            LAB_00106e03:for (pauVar25 = pauVar14 + iVar28; ( iVar31 = *(int*)( *pauVar25 + 4 ) ),iVar31 != iVar9 && iVar9 <= iVar31 || ( ( iVar31 == iVar9 && ( ( iVar22 < *(int*)*pauVar25 || ( ( *(int*)*pauVar25 == iVar22 && ( iVar4 < *(int*)( *pauVar25 + 8 ) ) ) ) ) ) ) ); pauVar25 = pauVar25 + -1) {
               iVar28 = iVar28 + -1;
            }

            iVar31 = iVar20;
            if (iVar20 <= iVar28) {
               uVar33 = *(undefined8*)( *pauVar16 + 8 );
               uVar12 = *(undefined4*)*pauVar16;
               uVar8 = *(undefined8*)( *pauVar25 + 8 );
               iVar28 = iVar28 + -1;
               *(undefined8*)*pauVar16 = *(undefined8*)*pauVar25;
               *(undefined8*)( *pauVar16 + 8 ) = uVar8;
               *(ulong*)*pauVar25 = CONCAT44(iVar26, uVar12);
               *(undefined8*)( *pauVar25 + 8 ) = uVar33;
               iVar31 = iVar19;
               if (iVar19 <= iVar28) goto LAB_001074b1;
            }

            if (0 < iVar28) {
               iVar26 = 1;
               iVar19 = 0;
               pauVar16 = pauVar14 + ( iVar28 >> 1 );
               iVar22 = *(int*)( *pauVar16 + 8 );
               iVar9 = *(int*)*pauVar16;
               iVar4 = *(int*)( *pauVar16 + 4 );
               pauVar16 = pauVar14;
               iVar20 = iVar28;
               do {
                  iVar30 = *(int*)( *pauVar16 + 4 );
                  if (( iVar4 <= iVar30 ) && ( ( iVar30 != iVar4 || ( ( iVar9 <= *(int*)*pauVar16 && ( ( *(int*)*pauVar16 != iVar9 || ( iVar22 <= *(int*)( *pauVar16 + 8 ) ) ) ) ) ) ) )) {
                     for (pauVar25 = pauVar14 + iVar20; ( iVar27 = *(int*)( *pauVar25 + 4 ) ),iVar27 != iVar4 && iVar4 <= iVar27 || ( ( iVar27 == iVar4 && ( ( iVar9 < *(int*)*pauVar25 || ( ( *(int*)*pauVar25 == iVar9 && ( iVar22 < *(int*)( *pauVar25 + 8 ) ) ) ) ) ) ) ); pauVar25 = pauVar25 + -1) {
                        iVar20 = iVar20 + -1;
                     }

                     iVar27 = iVar19;
                     if (iVar20 < iVar19) goto LAB_001075ce;
                     uVar33 = *(undefined8*)( *pauVar16 + 8 );
                     uVar12 = *(undefined4*)*pauVar16;
                     iVar20 = iVar20 + -1;
                     uVar8 = *(undefined8*)( *pauVar25 + 8 );
                     *(undefined8*)*pauVar16 = *(undefined8*)*pauVar25;
                     *(undefined8*)( *pauVar16 + 8 ) = uVar8;
                     *(ulong*)*pauVar25 = CONCAT44(iVar30, uVar12);
                     *(undefined8*)( *pauVar25 + 8 ) = uVar33;
                     iVar27 = iVar26;
                     if (iVar20 < iVar26) goto LAB_001075ce;
                  }

                  iVar19 = iVar19 + 1;
                  pauVar16 = pauVar16 + 1;
                  iVar26 = iVar26 + 1;
               }
 while ( true );
            }

            goto LAB_00106e34;
         }

         goto LAB_00107026;
      }

      uVar11 = 0;
   }

   local_94 = (ulong)uVar11;
   goto LAB_00107026;
   LAB_001075ce:if (0 < iVar20) {
      iVar30 = 1;
      iVar26 = 0;
      pauVar16 = pauVar14 + ( iVar20 >> 1 );
      iVar22 = *(int*)*pauVar16;
      iVar9 = *(int*)( *pauVar16 + 8 );
      iVar4 = *(int*)( *pauVar16 + 4 );
      pauVar16 = pauVar14;
      iVar19 = iVar20;
      do {
         iVar32 = *(int*)( *pauVar16 + 4 );
         if (( iVar4 <= iVar32 ) && ( ( iVar32 != iVar4 || ( ( iVar22 <= *(int*)*pauVar16 && ( ( *(int*)*pauVar16 != iVar22 || ( iVar9 <= *(int*)( *pauVar16 + 8 ) ) ) ) ) ) ) )) {
            for (pauVar25 = pauVar14 + iVar19; ( iVar29 = *(int*)( *pauVar25 + 4 ) ),iVar29 != iVar4 && iVar4 <= iVar29 || ( ( iVar29 == iVar4 && ( ( iVar22 < *(int*)*pauVar25 || ( ( *(int*)*pauVar25 == iVar22 && ( iVar9 < *(int*)( *pauVar25 + 8 ) ) ) ) ) ) ) ); pauVar25 = pauVar25 + -1) {
               iVar19 = iVar19 + -1;
            }

            iVar29 = iVar26;
            if (iVar19 < iVar26) goto LAB_00107a07;
            uVar33 = *(undefined8*)( *pauVar16 + 8 );
            iVar19 = iVar19 + -1;
            uVar12 = *(undefined4*)*pauVar16;
            uVar8 = *(undefined8*)( *pauVar25 + 8 );
            *(undefined8*)*pauVar16 = *(undefined8*)*pauVar25;
            *(undefined8*)( *pauVar16 + 8 ) = uVar8;
            *(ulong*)*pauVar25 = CONCAT44(iVar32, uVar12);
            *(undefined8*)( *pauVar25 + 8 ) = uVar33;
            iVar29 = iVar30;
            if (iVar19 < iVar30) goto LAB_00107a07;
         }

         iVar26 = iVar26 + 1;
         pauVar16 = pauVar16 + 1;
         iVar30 = iVar30 + 1;
      }
 while ( true );
   }

   LAB_001075d7:if (iVar27 < iVar28) {
      pauVar14 = local_88 + ( iVar28 + iVar27 >> 1 );
      iVar22 = *(int*)( *pauVar14 + 8 );
      iVar9 = *(int*)*pauVar14;
      iVar4 = *(int*)( *pauVar14 + 4 );
      pauVar14 = local_88 + iVar27;
      iVar20 = iVar27;
      iVar19 = iVar27;
      iVar26 = iVar28;
      do {
         iVar19 = iVar19 + 1;
         iVar30 = *(int*)( *pauVar14 + 4 );
         if (( iVar4 == iVar30 || iVar4 < iVar30 ) && ( ( iVar4 != iVar30 || ( ( iVar9 <= *(int*)*pauVar14 && ( ( *(int*)*pauVar14 != iVar9 || ( iVar22 <= *(int*)( *pauVar14 + 8 ) ) ) ) ) ) ) )) {
            for (pauVar16 = local_88 + iVar26; ( iVar4 < *(int*)( *pauVar16 + 4 ) || ( ( iVar4 == *(int*)( *pauVar16 + 4 ) && ( ( iVar9 < *(int*)*pauVar16 || ( ( *(int*)*pauVar16 == iVar9 && ( iVar22 < *(int*)( *pauVar16 + 8 ) ) ) ) ) ) ) ) ); pauVar16 = pauVar16 + -1) {
               iVar26 = iVar26 + -1;
            }

            iVar32 = iVar20;
            if (iVar26 < iVar20) goto LAB_00107663;
            uVar33 = *(undefined8*)( *pauVar14 + 8 );
            iVar26 = iVar26 + -1;
            uVar12 = *(undefined4*)*pauVar14;
            uVar8 = *(undefined8*)( *pauVar16 + 8 );
            *(undefined8*)*pauVar14 = *(undefined8*)*pauVar16;
            *(undefined8*)( *pauVar14 + 8 ) = uVar8;
            *(ulong*)*pauVar16 = CONCAT44(iVar30, uVar12);
            *(undefined8*)( *pauVar16 + 8 ) = uVar33;
            iVar32 = iVar19;
            if (iVar26 < iVar19) goto LAB_00107663;
         }

         pauVar14 = pauVar14 + 1;
         iVar20 = iVar20 + 1;
      }
 while ( true );
   }

   LAB_00106e34:if (iVar31 < iVar10) {
      pauVar16 = local_88 + iVar31;
      pauVar14 = local_88 + ( iVar10 + iVar31 >> 1 );
      iVar22 = *(int*)( *pauVar14 + 8 );
      iVar9 = *(int*)*pauVar14;
      iVar4 = *(int*)( *pauVar14 + 4 );
      iVar26 = iVar31 + 1;
      pauVar14 = pauVar16;
      iVar28 = iVar26;
      iVar20 = iVar31;
      iVar19 = iVar10;
      do {
         iVar30 = *(int*)( *pauVar14 + 4 );
         if (( iVar4 <= iVar30 ) && ( ( iVar30 != iVar4 || ( ( iVar9 <= *(int*)*pauVar14 && ( ( iVar9 != *(int*)*pauVar14 || ( iVar22 <= *(int*)( *pauVar14 + 8 ) ) ) ) ) ) ) )) {
            for (pauVar25 = local_88 + iVar19; ( iVar27 = *(int*)( *pauVar25 + 4 ) ),iVar27 != iVar4 && iVar4 <= iVar27 || ( ( iVar27 == iVar4 && ( ( iVar9 < *(int*)*pauVar25 || ( ( iVar9 == *(int*)*pauVar25 && ( iVar22 < *(int*)( *pauVar25 + 8 ) ) ) ) ) ) ) ); pauVar25 = pauVar25 + -1) {
               iVar19 = iVar19 + -1;
            }

            iVar27 = iVar20;
            if (iVar19 < iVar20) goto LAB_00106ec3;
            uVar12 = *(undefined4*)*pauVar14;
            iVar19 = iVar19 + -1;
            uVar33 = *(undefined8*)( *pauVar14 + 8 );
            uVar8 = *(undefined8*)( *pauVar25 + 8 );
            *(undefined8*)*pauVar14 = *(undefined8*)*pauVar25;
            *(undefined8*)( *pauVar14 + 8 ) = uVar8;
            *(ulong*)*pauVar25 = CONCAT44(iVar30, uVar12);
            *(undefined8*)( *pauVar25 + 8 ) = uVar33;
            iVar27 = iVar28;
            if (iVar19 < iVar28) goto LAB_00106ec3;
         }

         pauVar14 = pauVar14 + 1;
         iVar28 = iVar28 + 1;
         iVar20 = iVar20 + 1;
      }
 while ( true );
   }

   goto LAB_00107026;
   LAB_00107a07:if (0 < iVar19) {
      btAlignedObjectArray<VHACD::btConvexHullInternal::Point32>::quickSortInternal<bool(VHACD::btConvexHullInternal::Point32_const &, VHACD::btConvexHullInternal::Point32_const &)>(local_98, pointCmp, 0, iVar19);
   }

   if (iVar29 < iVar20) {
      btAlignedObjectArray<VHACD::btConvexHullInternal::Point32>::quickSortInternal<bool(VHACD::btConvexHullInternal::Point32_const &, VHACD::btConvexHullInternal::Point32_const &)>(local_98, pointCmp, iVar29, iVar20);
   }

   goto LAB_001075d7;
   LAB_00107663:if (iVar27 < iVar26) {
      btAlignedObjectArray<VHACD::btConvexHullInternal::Point32>::quickSortInternal<bool(VHACD::btConvexHullInternal::Point32_const &, VHACD::btConvexHullInternal::Point32_const &)>(local_98, pointCmp, iVar27, iVar26);
   }

   if (iVar32 < iVar28) {
      btAlignedObjectArray<VHACD::btConvexHullInternal::Point32>::quickSortInternal<bool(VHACD::btConvexHullInternal::Point32_const &, VHACD::btConvexHullInternal::Point32_const &)>(local_98, pointCmp, iVar32, iVar28);
   }

   goto LAB_00106e34;
   LAB_001078cf:if (iVar31 < iVar20) {
      btAlignedObjectArray<VHACD::btConvexHullInternal::Point32>::quickSortInternal<bool(VHACD::btConvexHullInternal::Point32_const &, VHACD::btConvexHullInternal::Point32_const &)>(local_98, pointCmp, iVar31, iVar20);
   }

   if (iVar32 < iVar19) {
      btAlignedObjectArray<VHACD::btConvexHullInternal::Point32>::quickSortInternal<bool(VHACD::btConvexHullInternal::Point32_const &, VHACD::btConvexHullInternal::Point32_const &)>(local_98, pointCmp, iVar32, iVar19);
   }

   goto LAB_00106ed1;
   LAB_00106f4b:if (iVar27 < iVar19) {
      btAlignedObjectArray<VHACD::btConvexHullInternal::Point32>::quickSortInternal<bool(VHACD::btConvexHullInternal::Point32_const &, VHACD::btConvexHullInternal::Point32_const &)>(local_98, pointCmp, iVar27, iVar19);
   }

   if (iVar31 < iVar10) {
      btAlignedObjectArray<VHACD::btConvexHullInternal::Point32>::quickSortInternal<bool(VHACD::btConvexHullInternal::Point32_const &, VHACD::btConvexHullInternal::Point32_const &)>(local_98, pointCmp, iVar31, iVar10);
   }

   goto LAB_00107026;
   LAB_00106ec3:if (iVar31 < iVar19) {
      pauVar14 = local_88 + ( iVar31 + iVar19 >> 1 );
      iVar22 = *(int*)( *pauVar14 + 8 );
      iVar9 = *(int*)*pauVar14;
      iVar4 = *(int*)( *pauVar14 + 4 );
      iVar28 = iVar31;
      iVar20 = iVar19;
      do {
         iVar30 = *(int*)( *pauVar16 + 4 );
         if (( iVar4 <= iVar30 ) && ( ( iVar30 != iVar4 || ( ( iVar9 <= *(int*)*pauVar16 && ( ( *(int*)*pauVar16 != iVar9 || ( iVar22 <= *(int*)( *pauVar16 + 8 ) ) ) ) ) ) ) )) {
            for (pauVar14 = local_88 + iVar20; ( iVar32 = *(int*)( *pauVar14 + 4 ) ),iVar32 != iVar4 && iVar4 <= iVar32 || ( ( iVar32 == iVar4 && ( ( iVar9 < *(int*)*pauVar14 || ( ( *(int*)*pauVar14 == iVar9 && ( iVar22 < *(int*)( *pauVar14 + 8 ) ) ) ) ) ) ) ); pauVar14 = pauVar14 + -1) {
               iVar20 = iVar20 + -1;
            }

            iVar32 = iVar28;
            if (iVar20 < iVar28) goto LAB_001078cf;
            iVar20 = iVar20 + -1;
            uVar33 = *(undefined8*)( *pauVar16 + 8 );
            uVar12 = *(undefined4*)*pauVar16;
            uVar8 = *(undefined8*)( *pauVar14 + 8 );
            *(undefined8*)*pauVar16 = *(undefined8*)*pauVar14;
            *(undefined8*)( *pauVar16 + 8 ) = uVar8;
            *(ulong*)*pauVar14 = CONCAT44(iVar30, uVar12);
            *(undefined8*)( *pauVar14 + 8 ) = uVar33;
            iVar32 = iVar26;
            if (iVar20 < iVar26) goto LAB_001078cf;
         }

         pauVar16 = pauVar16 + 1;
         iVar26 = iVar26 + 1;
         iVar28 = iVar28 + 1;
      }
 while ( true );
   }

   LAB_00106ed1:if (iVar27 < iVar10) {
      pauVar16 = local_88 + iVar27;
      pauVar14 = local_88 + ( iVar10 + iVar27 >> 1 );
      iVar22 = *(int*)*pauVar14;
      iVar9 = *(int*)( *pauVar14 + 4 );
      iVar4 = *(int*)( *pauVar14 + 8 );
      iVar28 = iVar27;
      iVar20 = iVar27;
      iVar19 = iVar10;
      do {
         iVar20 = iVar20 + 1;
         iVar26 = *(int*)( *pauVar16 + 4 );
         if (( iVar9 <= iVar26 ) && ( ( iVar26 != iVar9 || ( ( iVar22 <= *(int*)*pauVar16 && ( ( *(int*)*pauVar16 != iVar22 || ( iVar4 <= *(int*)( *pauVar16 + 8 ) ) ) ) ) ) ) )) {
            for (pauVar14 = local_88 + iVar19; ( iVar31 = *(int*)( *pauVar14 + 4 ) ),iVar31 != iVar9 && iVar9 <= iVar31 || ( ( iVar31 == iVar9 && ( ( iVar22 < *(int*)*pauVar14 || ( ( *(int*)*pauVar14 == iVar22 && ( iVar4 < *(int*)( *pauVar14 + 8 ) ) ) ) ) ) ) ); pauVar14 = pauVar14 + -1) {
               iVar19 = iVar19 + -1;
            }

            iVar31 = iVar28;
            if (iVar19 < iVar28) goto LAB_00106f4b;
            uVar33 = *(undefined8*)( *pauVar16 + 8 );
            iVar19 = iVar19 + -1;
            uVar12 = *(undefined4*)*pauVar16;
            uVar8 = *(undefined8*)( *pauVar14 + 8 );
            *(undefined8*)*pauVar16 = *(undefined8*)*pauVar14;
            *(undefined8*)( *pauVar16 + 8 ) = uVar8;
            *(ulong*)*pauVar14 = CONCAT44(iVar26, uVar12);
            *(undefined8*)( *pauVar14 + 8 ) = uVar33;
            iVar31 = iVar20;
            if (iVar19 < iVar20) goto LAB_00106f4b;
         }

         pauVar16 = pauVar16 + 1;
         iVar28 = iVar28 + 1;
      }
 while ( true );
   }

   LAB_00107026:iVar22 = *(int*)( this + 0x84 );
   *(undefined8*)( this + 0x30 ) = 0;
   *(int*)( this + 0x38 ) = param_4;
   *(undefined8*)( this + 0x28 ) = *(undefined8*)( this + 0x20 );
   if (( param_4 < iVar22 ) || ( param_4 <= iVar22 )) goto LAB_00107075;
   if (*(int*)( this + 0x88 ) < param_4) {
      if (param_4 == 0) {
         lVar21 = 0;
         iVar9 = iVar22;
      }
 else {
         lVar21 = VHACD::btAlignedAllocInternal((long)param_4 << 3, 0x10);
         iVar9 = *(int*)( this + 0x84 );
      }

      pvVar5 = *(void**)( this + 0x90 );
      lVar15 = 0;
      if (iVar9 < 1) {
         if (pvVar5 != (void*)0x0) goto LAB_00107342;
      }
 else {
         do {
            *(undefined8*)( lVar21 + lVar15 ) = *(undefined8*)( (long)pvVar5 + lVar15 );
            lVar15 = lVar15 + 8;
         }
 while ( lVar15 != (long)iVar9 * 8 );
         LAB_00107342:if (this[0x98] != (btConvexHullInternal)0x0) {
            VHACD::btAlignedFreeInternal(pvVar5);
         }

      }

      this[0x98] = (btConvexHullInternal)0x1;
      *(long*)( this + 0x90 ) = lVar21;
      *(int*)( this + 0x88 ) = param_4;
   }

   memset((void*)( *(long*)( this + 0x90 ) + (long)iVar22 * 8 ), 0, ( ulong )(( param_4 - iVar22 ) - 1) * 8 + 8);
   LAB_00107075:*(int*)( this + 0x84 ) = param_4;
   if (0 < param_4) {
      lVar21 = 0;
      do {
         pauVar14 = *(undefined1(**) [16])( this + 0x30 );
         if (pauVar14 == (undefined1(*) [16])0x0) {
            puVar18 = *(undefined8**)( this + 0x28 );
            if (puVar18 == (undefined8*)0x0) {
               puVar18 = (undefined8*)VHACD::btAlignedAllocInternal(0x18, 0x10);
               iVar22 = *(int*)( this + 0x38 );
               puVar18[2] = 0;
               *(int*)( puVar18 + 1 ) = iVar22;
               pauVar14 = (undefined1(*) [16])VHACD::btAlignedAllocInternal((long)iVar22 << 7, 0x10);
               uVar33 = *(undefined8*)( this + 0x20 );
               *puVar18 = pauVar14;
               puVar18[2] = uVar33;
               *(undefined8**)( this + 0x20 ) = puVar18;
            }
 else {
               *(undefined8*)( this + 0x28 ) = puVar18[2];
               pauVar14 = (undefined1(*) [16])*puVar18;
            }

            iVar22 = *(int*)( puVar18 + 1 );
            if (0 < iVar22) {
               iVar9 = 0;
               pauVar16 = pauVar14;
               do {
                  while (true) {
                     iVar9 = iVar9 + 1;
                     pauVar25 = pauVar16 + 8;
                     if (iVar22 <= iVar9) break;
                     *(undefined1(**) [16])*pauVar16 = pauVar25;
                     pauVar16 = pauVar25;
                  }
;
                  *(undefined8*)*pauVar16 = 0;
                  pauVar16 = pauVar25;
               }
 while ( iVar22 != iVar9 );
            }

         }

         *(undefined8*)( this + 0x30 ) = *(undefined8*)*pauVar14;
         *pauVar14 = (undefined1[16])0x0;
         pauVar14[1] = (undefined1[16])0x0;
         lVar15 = *(long*)( this + 0x90 );
         *(undefined8*)pauVar14[2] = 0;
         uVar33 = *(undefined8*)( *local_88 + lVar21 * 2 );
         uVar8 = *(undefined8*)( (long)( *local_88 + lVar21 * 2 ) + 8 );
         *(undefined4*)( pauVar14[7] + 8 ) = 0xffffffff;
         *(undefined8*)( pauVar14[6] + 8 ) = uVar33;
         *(undefined8*)pauVar14[7] = uVar8;
         *(undefined1(**) [16])( lVar15 + lVar21 ) = pauVar14;
         lVar21 = lVar21 + 8;
      }
 while ( lVar21 != (long)param_4 * 8 );
   }

   if (( local_88 != (undefined1(*) [16])0x0 ) && ( local_80 != '\0' )) {
      VHACD::btAlignedFreeInternal(local_88);
   }

   *(undefined8*)( this + 0x50 ) = 0;
   local_80 = '\x01';
   *(undefined8*)( this + 0x48 ) = *(undefined8*)( this + 0x40 );
   local_78 = (undefined1[16])0x0;
   *(int*)( this + 0x58 ) = param_4 * 6;
   *(undefined8*)( this + 0xb0 ) = 0;
   *(undefined4*)( this + 0xa0 ) = 0xfffffffd;
   local_88 = (undefined1(*) [16])0x0;
   local_94 = 0;
   local_68 = (undefined1[16])0x0;
   computeInternal(this, 0, param_4, (IntermediateHull*)local_78);
   *(undefined8*)( this + 0xb8 ) = local_78._0_8_;
   if (( local_88 != (undefined1(*) [16])0x0 ) && ( local_80 != '\0' )) {
      VHACD::btAlignedFreeInternal(local_88);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VHACD::btConvexHullComputer::compute(void const*, bool, int, int, float, float) */void VHACD::btConvexHullComputer::compute(btConvexHullComputer *this, void *param_1, bool param_2, int param_3, int param_4, float param_5, float param_6) {
   undefined8 *puVar1;
   uint uVar2;
   long *plVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   undefined1(*pauVar9)[16];
   undefined1(*pauVar10)[16];
   undefined1(*pauVar11)[16];
   undefined8 *puVar12;
   undefined8 *puVar13;
   long *plVar14;
   long lVar15;
   long *plVar16;
   long lVar17;
   int iVar18;
   long lVar19;
   long lVar20;
   long *plVar21;
   int iVar22;
   int iVar23;
   void *pvVar24;
   int iVar25;
   int iVar26;
   Vertex *pVVar27;
   long lVar28;
   long in_FS_OFFSET;
   float fVar29;
   undefined8 uVar30;
   float fVar31;
   undefined4 in_XMM1_Db;
   long *local_158;
   int local_110;
   btConvexHullInternal local_108[32];
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined4 local_d0;
   undefined1 local_c8[16];
   undefined8 local_b8;
   undefined4 local_b0;
   undefined1 local_a8[16];
   undefined8 local_98;
   undefined4 local_90;
   undefined8 local_84;
   void *local_78;
   char local_70;
   Vertex *local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_4 < 1) {
      for (int i = 0; i < 3; i++) {
         if (( *(void**)( this + ( 32*i + 16 ) ) != (void*)0 ) && ( this[( 32*i + 24 )] != (btConvexHullComputer)0 )) {
            VHACD::btAlignedFreeInternal(*(void**)( this + ( 32*i + 16 ) ));
         }

         this[( 32*i + 24 )] = (btConvexHullComputer)1;
         *(undefined8*)( this + ( 32*i + 16 ) ) = 0;
         *(undefined8*)( this + ( 32*i + 4 ) ) = 0;
      }

      goto LAB_00107ee9;
   }

   local_e8 = (undefined1[16])0x0;
   local_c8 = (undefined1[16])0x0;
   local_a8 = (undefined1[16])0x0;
   local_d8 = 0;
   local_d0 = 0x100;
   local_b8 = 0;
   local_b0 = 0x100;
   local_98 = 0;
   local_90 = 0x100;
   local_70 = '\x01';
   local_78 = (void*)0x0;
   local_84 = 0;
   fVar31 = param_6;
   btConvexHullInternal::compute(local_108, param_1, param_2, param_3, param_4);
   if (0.0 < param_5) {
      in_XMM1_Db = 0;
      fVar29 = (float)btConvexHullInternal::shrink(local_108, param_5, param_6);
      fVar31 = param_6;
      if (fVar29 < 0.0) {
         for (int i = 0; i < 3; i++) {
            if (( *(void**)( this + ( 32*i + 16 ) ) != (void*)0 ) && ( this[( 32*i + 24 )] != (btConvexHullComputer)0 )) {
               VHACD::btAlignedFreeInternal(*(void**)( this + ( 32*i + 16 ) ));
            }

            this[( 32*i + 24 )] = (btConvexHullComputer)1;
            *(undefined8*)( this + ( 32*i + 16 ) ) = 0;
            *(undefined8*)( this + ( 32*i + 4 ) ) = 0;
         }

         goto LAB_00107e16;
      }

   }

   iVar6 = *(int*)( this + 4 );
   if (iVar6 < 0) {
      pvVar24 = *(void**)( this + 0x10 );
      if (*(int*)( this + 8 ) < 0) {
         if (( pvVar24 != (void*)0x0 ) && ( this[0x18] != (btConvexHullComputer)0x0 )) {
            VHACD::btAlignedFreeInternal(pvVar24);
         }

         this[0x18] = (btConvexHullComputer)0x1;
         pvVar24 = (void*)0x0;
         *(undefined8*)( this + 0x10 ) = 0;
         *(undefined4*)( this + 8 ) = 0;
      }

      pauVar9 = (undefined1(*) [16])( (long)iVar6 * 0x10 + (long)pvVar24 );
      pauVar10 = pauVar9;
      if (( (ulong)(uint)-iVar6 * 0x10 & 0x10 ) != 0) {
         *pauVar9 = (undefined1[16])0x0;
         pauVar10 = pauVar9 + 1;
         if (pauVar10 == pauVar9 + ( uint ) - iVar6) goto LAB_00107d50;
      }

      do {
         *pauVar10 = (undefined1[16])0x0;
         pauVar11 = pauVar10 + 2;
         pauVar10[1] = (undefined1[16])0x0;
         pauVar10 = pauVar11;
      }
 while ( pauVar11 != pauVar9 + ( uint ) - iVar6 );
   }

   LAB_00107d50:uVar2 = *(uint*)( this + 0x24 );
   *(undefined4*)( this + 4 ) = 0;
   if ((int)uVar2 < 0) {
      pvVar24 = *(void**)( this + 0x30 );
      if (*(int*)( this + 0x28 ) < 0) {
         if (( pvVar24 != (void*)0x0 ) && ( this[0x38] != (btConvexHullComputer)0x0 )) {
            VHACD::btAlignedFreeInternal(pvVar24);
         }

         this[0x38] = (btConvexHullComputer)0x1;
         pvVar24 = (void*)0x0;
         *(undefined8*)( this + 0x30 ) = 0;
         *(undefined4*)( this + 0x28 ) = 0;
      }

      puVar12 = (undefined8*)( (long)pvVar24 + (long)(int)uVar2 * 0xc );
      do {
         *puVar12 = 0;
         puVar13 = (undefined8*)( (long)puVar12 + 0xc );
         *(undefined4*)( puVar12 + 1 ) = 0;
         puVar12 = puVar13;
      }
 while ( (undefined8*)( (long)pvVar24 + ( (long)(int)uVar2 + 1 + (ulong)~uVar2 ) * 0xc ) != puVar13 );
   }

   iVar6 = *(int*)( this + 0x44 );
   *(undefined4*)( this + 0x24 ) = 0;
   if (iVar6 < 0) {
      pvVar24 = *(void**)( this + 0x50 );
      if (*(int*)( this + 0x48 ) < 0) {
         if (( pvVar24 != (void*)0x0 ) && ( this[0x58] != (btConvexHullComputer)0x0 )) {
            VHACD::btAlignedFreeInternal(pvVar24);
         }

         this[0x58] = (btConvexHullComputer)0x1;
         pvVar24 = (void*)0x0;
         *(undefined8*)( this + 0x50 ) = 0;
         *(undefined4*)( this + 0x48 ) = 0;
      }

      memset((void*)( (long)pvVar24 + (long)iVar6 * 4 ), 0, ( ulong )(uint) - iVar6 << 2);
   }

   *(undefined4*)( this + 0x44 ) = 0;
   if (*(int*)( local_50 + 0x78 ) < 0) {
      *(undefined4*)( local_50 + 0x78 ) = 0;
      lVar28 = 0;
      local_158 = (long*)VHACD::btAlignedAllocInternal(8, 0x10);
      *local_158 = (long)local_50;
      local_110 = 1;
      iVar6 = 1;
      pVVar27 = local_50;
      do {
         uVar30 = btConvexHullInternal::getCoordinates(local_108, pVVar27);
         iVar7 = *(int*)( this + 4 );
         uVar4 = CONCAT44(in_XMM1_Db, fVar31);
         if (iVar7 == *(int*)( this + 8 )) {
            iVar25 = iVar7 * 2;
            if (iVar7 == 0) {
               iVar25 = 1;
            }

            if (iVar25 <= iVar7) goto LAB_00108049;
            lVar19 = VHACD::btAlignedAllocInternal((long)iVar25 << 4, 0x10);
            pvVar24 = *(void**)( this + 0x10 );
            iVar7 = *(int*)( this + 4 );
            if (iVar7 < 1) {
               if (pvVar24 != (void*)0x0) goto LAB_001082e3;
            }
 else {
               lVar15 = 0;
               do {
                  uVar5 = ( (undefined8*)( (long)pvVar24 + lVar15 ) )[1];
                  *(undefined8*)( lVar19 + lVar15 ) = *(undefined8*)( (long)pvVar24 + lVar15 );
                  ( (undefined8*)( lVar19 + lVar15 ) )[1] = uVar5;
                  lVar15 = lVar15 + 0x10;
               }
 while ( lVar15 != (long)iVar7 * 0x10 );
               LAB_001082e3:if (this[0x18] != (btConvexHullComputer)0x0) {
                  VHACD::btAlignedFreeInternal(pvVar24);
                  iVar7 = *(int*)( this + 4 );
               }

            }

            this[0x18] = (btConvexHullComputer)0x1;
            *(long*)( this + 0x10 ) = lVar19;
            *(int*)( this + 8 ) = iVar25;
         }
 else {
            LAB_00108049:lVar19 = *(long*)( this + 0x10 );
         }

         puVar12 = *(undefined8**)( pVVar27 + 0x10 );
         puVar13 = (undefined8*)( lVar19 + (long)iVar7 * 0x10 );
         *puVar13 = uVar30;
         puVar13[1] = uVar4;
         *(int*)( this + 4 ) = iVar7 + 1;
         iVar7 = (int)lVar28;
         if (puVar12 == (undefined8*)0x0) {
            if (iVar6 <= iVar7 + 1) goto LAB_001080fb;
         }
 else {
            iVar25 = -1;
            puVar13 = puVar12;
            iVar26 = -1;
            do {
               iVar8 = *(int*)( puVar13 + 5 );
               if (iVar8 < 0) {
                  iVar8 = *(int*)( this + 0x24 );
                  iVar18 = *(int*)( this + 0x28 );
                  if (iVar8 == iVar18) {
                     iVar18 = iVar8 * 2;
                     if (iVar8 == 0) {
                        iVar18 = 1;
                     }

                     if (iVar18 <= iVar8) {
                        lVar19 = *(long*)( this + 0x30 );
                        iVar23 = iVar8 + 1;
                        puVar1 = (undefined8*)( lVar19 + (long)iVar8 * 0xc );
                        *puVar1 = 0;
                        *(undefined4*)( puVar1 + 1 ) = 0;
                        goto LAB_001081bf;
                     }

                     lVar19 = VHACD::btAlignedAllocInternal((long)iVar18 * 0xc, 0x10);
                     iVar22 = *(int*)( this + 0x24 );
                     pvVar24 = *(void**)( this + 0x30 );
                     if (iVar22 < 1) {
                        if (pvVar24 != (void*)0x0) goto LAB_0010844c;
                     }
 else {
                        lVar15 = 0;
                        do {
                           *(undefined8*)( lVar19 + lVar15 ) = *(undefined8*)( (long)pvVar24 + lVar15 );
                           *(undefined4*)( lVar19 + 8 + lVar15 ) = *(undefined4*)( (long)pvVar24 + lVar15 + 8 );
                           lVar15 = lVar15 + 0xc;
                        }
 while ( lVar15 != (long)iVar22 * 0xc );
                        LAB_0010844c:if (this[0x38] != (btConvexHullComputer)0x0) {
                           VHACD::btAlignedFreeInternal(pvVar24);
                           iVar22 = *(int*)( this + 0x24 );
                        }

                     }

                     iVar23 = iVar22 + 1;
                     *(int*)( this + 0x28 ) = iVar18;
                     this[0x38] = (btConvexHullComputer)0x1;
                     puVar1 = (undefined8*)( lVar19 + (long)iVar22 * 0xc );
                     *(long*)( this + 0x30 ) = lVar19;
                     *puVar1 = 0;
                     *(undefined4*)( puVar1 + 1 ) = 0;
                     *(int*)( this + 0x24 ) = iVar23;
                     if (iVar18 == iVar23) {
                        LAB_00108492:iVar18 = iVar23 * 2;
                        if (SBORROW4(iVar23, iVar18) != 0 < iVar23) goto LAB_0010830e;
                     }

                  }
 else {
                     lVar19 = *(long*)( this + 0x30 );
                     puVar1 = (undefined8*)( lVar19 + (long)iVar8 * 0xc );
                     *puVar1 = 0;
                     *(undefined4*)( puVar1 + 1 ) = 0;
                     iVar23 = iVar8 + 1;
                     *(int*)( this + 0x24 ) = iVar23;
                     if (iVar18 == iVar23) {
                        iVar18 = 1;
                        if (iVar23 != 0) goto LAB_00108492;
                        LAB_0010830e:lVar19 = VHACD::btAlignedAllocInternal((long)iVar18 * 0xc, 0x10);
                        iVar23 = *(int*)( this + 0x24 );
                        pvVar24 = *(void**)( this + 0x30 );
                        if (iVar23 < 1) {
                           if (pvVar24 != (void*)0x0) goto LAB_00108397;
                        }
 else {
                           lVar15 = 0;
                           do {
                              *(undefined8*)( lVar19 + lVar15 ) = *(undefined8*)( (long)pvVar24 + lVar15 );
                              *(undefined4*)( lVar19 + 8 + lVar15 ) = *(undefined4*)( (long)pvVar24 + lVar15 + 8 );
                              lVar15 = lVar15 + 0xc;
                           }
 while ( lVar15 != (long)iVar23 * 0xc );
                           LAB_00108397:if (this[0x38] != (btConvexHullComputer)0x0) {
                              VHACD::btAlignedFreeInternal(pvVar24);
                              iVar23 = *(int*)( this + 0x24 );
                           }

                        }

                        this[0x38] = (btConvexHullComputer)0x1;
                        *(long*)( this + 0x30 ) = lVar19;
                        *(int*)( this + 0x28 ) = iVar18;
                     }

                  }

                  LAB_001081bf:puVar1 = (undefined8*)( lVar19 + (long)iVar23 * 0xc );
                  *puVar1 = 0;
                  *(undefined4*)( puVar1 + 1 ) = 0;
                  *(int*)( this + 0x24 ) = iVar23 + 1;
                  lVar15 = lVar19 + (long)iVar8 * 0xc;
                  *(int*)( puVar13 + 5 ) = iVar8;
                  lVar19 = lVar19 + 0xc + (long)iVar8 * 0xc;
                  lVar20 = puVar13[3];
                  *(int*)( puVar13[2] + 0x28 ) = iVar8 + 1;
                  iVar8 = *(int*)( lVar20 + 0x78 );
                  *(undefined4*)( lVar15 + 4 ) = 1;
                  *(undefined4*)( lVar19 + 4 ) = 0xffffffff;
                  iVar18 = iVar6;
                  if (iVar8 < 0) {
                     *(int*)( lVar20 + 0x78 ) = iVar6;
                     plVar16 = local_158;
                     if (local_110 == iVar6) {
                        if (iVar6 == 0) {
                           plVar16 = (long*)VHACD::btAlignedAllocInternal(8, 0x10);
                           local_110 = 1;
                           LAB_00108566:if (local_158 != (long*)0x0) {
                              LAB_00108656:VHACD::btAlignedFreeInternal(local_158);
                           }

                        }
 else {
                           iVar8 = iVar6 * 2;
                           if (SBORROW4(iVar6, iVar8) != 0 < iVar6) {
                              plVar16 = (long*)VHACD::btAlignedAllocInternal((long)iVar8 << 3, 0x10);
                              local_110 = iVar8;
                              if (iVar6 < 1) goto LAB_00108566;
                              lVar17 = 0;
                              do {
                                 *(undefined8*)( (long)plVar16 + lVar17 ) = *(undefined8*)( (long)local_158 + lVar17 );
                                 lVar17 = lVar17 + 8;
                              }
 while ( lVar17 != (long)iVar6 * 8 );
                              goto LAB_00108656;
                           }

                        }

                     }

                     local_158 = plVar16;
                     local_158[iVar6] = lVar20;
                     iVar18 = iVar6 + 1;
                     iVar8 = iVar6;
                  }

                  *(int*)( lVar15 + 8 ) = iVar8;
                  *(int*)( lVar19 + 8 ) = iVar7;
                  iVar8 = *(int*)( puVar13 + 5 );
                  iVar6 = iVar18;
               }

               if (iVar26 < 0) {
                  puVar13 = (undefined8*)*puVar13;
                  iVar25 = iVar8;
               }
 else {
                  puVar13 = (undefined8*)*puVar13;
                  *(int*)( *(long*)( this + 0x30 ) + (long)iVar8 * 0xc ) = iVar26 - iVar8;
               }

               iVar26 = iVar8;
            }
 while ( puVar12 != puVar13 );
            *(int*)( *(long*)( this + 0x30 ) + (long)iVar25 * 0xc ) = iVar8 - iVar25;
            if (iVar6 <= iVar7 + 1) goto LAB_001080fb;
         }

         lVar28 = lVar28 + 1;
         pVVar27 = (Vertex*)local_158[lVar28];
      }
 while ( true );
   }

   goto LAB_00107e16;
   LAB_001080fb:plVar16 = local_158;
   do {
      plVar3 = *(long**)( *plVar16 + 0x10 );
      plVar21 = plVar3;
      if (plVar3 != (long*)0x0) {
         do {
            iVar6 = (int)plVar21[5];
            if (-1 < iVar6) {
               iVar7 = *(int*)( this + 0x44 );
               lVar19 = (long)iVar7;
               if (iVar7 == *(int*)( this + 0x48 )) {
                  iVar25 = iVar7 * 2;
                  if (iVar7 == 0) {
                     iVar25 = 1;
                  }

                  if (iVar25 <= iVar7) goto LAB_0010814d;
                  lVar15 = VHACD::btAlignedAllocInternal((long)iVar25 << 2, 0x10);
                  lVar19 = (long)*(int*)( this + 0x44 );
                  pvVar24 = *(void**)( this + 0x50 );
                  if (*(int*)( this + 0x44 ) < 1) {
                     if (pvVar24 != (void*)0x0) goto LAB_00108501;
                  }
 else {
                     lVar20 = 0;
                     do {
                        *(undefined4*)( lVar15 + lVar20 ) = *(undefined4*)( (long)pvVar24 + lVar20 );
                        lVar20 = lVar20 + 4;
                     }
 while ( lVar20 != lVar19 * 4 );
                     LAB_00108501:if (this[0x58] == (btConvexHullComputer)0x0) {
                        lVar19 = (long)*(int*)( this + 0x44 );
                     }
 else {
                        VHACD::btAlignedFreeInternal(pvVar24);
                        lVar19 = (long)*(int*)( this + 0x44 );
                     }

                  }

                  *(int*)( this + 0x48 ) = iVar25;
                  iVar6 = (int)plVar21[5];
                  this[0x58] = (btConvexHullComputer)0x1;
                  *(long*)( this + 0x50 ) = lVar15;
               }
 else {
                  LAB_0010814d:lVar15 = *(long*)( this + 0x50 );
               }

               *(int*)( lVar15 + lVar19 * 4 ) = iVar6;
               *(int*)( this + 0x44 ) = *(int*)( this + 0x44 ) + 1;
               plVar14 = plVar21;
               do {
                  *(undefined4*)( plVar14 + 5 ) = 0xffffffff;
                  plVar14 = *(long**)( plVar14[2] + 8 );
               }
 while ( plVar21 != plVar14 );
            }

            plVar21 = (long*)*plVar21;
         }
 while ( plVar3 != plVar21 );
      }

      plVar16 = plVar16 + 1;
   }
 while ( plVar16 != local_158 + lVar28 + 1 );
   if (local_158 != (long*)0x0) {
      VHACD::btAlignedFreeInternal(local_158);
   }

   LAB_00107e16:if (( local_78 != (void*)0x0 ) && ( local_70 != '\0' )) {
      VHACD::btAlignedFreeInternal(local_78);
   }

   puVar12 = (undefined8*)local_a8._0_8_;
   if ((undefined8*)local_a8._0_8_ == (undefined8*)0x0) goto LAB_00107e9c;
   do {
      local_a8._0_8_ = puVar12[2];
      VHACD::btAlignedFreeInternal((void*)*puVar12);
      VHACD::btAlignedFreeInternal(puVar12);
      puVar12 = (undefined8*)local_a8._0_8_;
   }
 while ( (undefined8*)local_a8._0_8_ != (undefined8*)0x0 );
   puVar12 = (undefined8*)local_c8._0_8_;
   if ((undefined8*)local_c8._0_8_ == (undefined8*)0x0) goto LAB_00107edc;
   do {
      local_c8._0_8_ = puVar12[2];
      VHACD::btAlignedFreeInternal((void*)*puVar12);
      VHACD::btAlignedFreeInternal(puVar12);
      LAB_00107e9c:puVar12 = (undefined8*)local_c8._0_8_;
   }
 while ( (undefined8*)local_c8._0_8_ != (undefined8*)0x0 );
   puVar12 = (undefined8*)local_e8._0_8_;
   while (puVar12 != (undefined8*)0x0) {
      local_e8._0_8_ = puVar12[2];
      VHACD::btAlignedFreeInternal((void*)*puVar12);
      VHACD::btAlignedFreeInternal(puVar12);
      LAB_00107edc:puVar12 = (undefined8*)local_e8._0_8_;
   }
;
   LAB_00107ee9:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* VHACD::btConvexHullInternal::Vertex::dot(VHACD::btConvexHullInternal::Point64 const&) const */Point64 *VHACD::btConvexHullInternal::Vertex::dot(Point64 *param_1) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   long lVar4;
   ulong uVar5;
   undefined4 uVar6;
   long *in_RDX;
   long in_RSI;
   long lVar7;
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   lVar4 = in_RDX[1];
   lVar7 = *in_RDX;
   if (*(int*)( in_RSI + 0x74 ) < 0) {
      auVar8 = Int128::operator *((Int128*)( in_RSI + 0x48 ), in_RDX[2]);
      auVar9 = Int128::operator *((Int128*)( in_RSI + 0x38 ), lVar4);
      auVar10 = Int128::operator *((Int128*)( in_RSI + 0x28 ), lVar7);
      uVar5 = auVar10._0_8_ + auVar9._0_8_;
      lVar7 = auVar8._0_8_ + uVar5;
      lVar4 = auVar10._8_8_ + auVar9._8_8_ + auVar8._8_8_ + (ulong)CARRY8(auVar10._0_8_, auVar9._0_8_) + (ulong)CARRY8(auVar8._0_8_, uVar5);
      if (lVar4 < 0) {
         *(undefined4*)( param_1 + 0x20 ) = 0xffffffff;
         *(long*)param_1 = -lVar7;
         lVar1 = *(long*)( in_RSI + 0x60 );
         *(ulong*)( param_1 + 8 ) = -lVar4 - ( ulong )(lVar7 != 0);
         uVar3 = 0xffffffff;
      }
 else {
         if (lVar7 == 0 && lVar4 == 0) {
            *(undefined4*)( param_1 + 0x20 ) = 0;
         }
 else {
            *(undefined4*)( param_1 + 0x20 ) = 1;
         }

         uVar3 = ( uint )(lVar7 != 0 || lVar4 != 0);
         *(long*)( param_1 + 8 ) = lVar4;
         lVar1 = *(long*)( in_RSI + 0x60 );
         *(long*)param_1 = lVar7;
      }

      if (lVar1 < 0) {
         *(uint*)( param_1 + 0x20 ) = -uVar3;
         lVar4 = *(long*)( in_RSI + 0x58 );
         *(long*)( param_1 + 0x10 ) = -lVar4;
         *(ulong*)( param_1 + 0x18 ) = ( ( ulong )(lVar4 == 0) - lVar1 ) + -1;
      }
 else {
         uVar2 = *(undefined8*)( in_RSI + 0x60 );
         *(undefined8*)( param_1 + 0x10 ) = *(undefined8*)( in_RSI + 0x58 );
         *(undefined8*)( param_1 + 0x18 ) = uVar2;
      }

      param_1[0x24] = (Point64)0x0;
      return param_1;
   }

   lVar4 = *(int*)( in_RSI + 0x68 ) * lVar7 + *(int*)( in_RSI + 0x6c ) * lVar4 + (long)*(int*)( in_RSI + 0x70 ) * in_RDX[2];
   uVar6 = 1;
   if (lVar4 < 1) {
      if (lVar4 == 0) {
         uVar6 = 0;
         lVar4 = 0;
      }
 else {
         lVar4 = -lVar4;
         uVar6 = 0xffffffff;
      }

   }

   *(undefined4*)( param_1 + 0x20 ) = uVar6;
   *(long*)param_1 = lVar4;
   *(undefined8*)( param_1 + 8 ) = 0;
   *(undefined8*)( param_1 + 0x10 ) = 1;
   *(undefined8*)( param_1 + 0x18 ) = 0;
   param_1[0x24] = (Point64)0x1;
   return param_1;
}
/* VHACD::btConvexHullInternal::DMul<VHACD::btConvexHullInternal::Int128, unsigned
   long>::mul(VHACD::btConvexHullInternal::Int128, VHACD::btConvexHullInternal::Int128,
   VHACD::btConvexHullInternal::Int128&, VHACD::btConvexHullInternal::Int128&) */void VHACD::btConvexHullInternal::DMul<VHACD::btConvexHullInternal::Int128,unsigned_long>::mul(ulong param_1, ulong param_2, ulong param_3, ulong param_4, long *param_5, long *param_6) {
   long lVar1;
   ulong uVar2;
   ulong uVar3;
   ulong uVar4;
   ulong uVar5;
   ulong uVar6;
   long lVar7;
   ulong uVar8;
   ulong uVar9;
   ulong uVar10;
   ulong uVar11;
   ulong uVar12;
   ulong uVar13;
   ulong uVar14;
   ulong uVar15;
   ulong uVar16;
   ulong uVar17;
   uVar2 = param_1 & 0xffffffff;
   param_1 = param_1 >> 0x20;
   uVar5 = param_3 & 0xffffffff;
   param_3 = param_3 >> 0x20;
   uVar8 = ( uVar2 * param_3 & 0xffffffff ) + ( uVar5 * param_1 & 0xffffffff );
   uVar9 = uVar8 << 0x20;
   uVar10 = param_4 & 0xffffffff;
   uVar8 = ( uVar2 * param_3 >> 0x20 ) + ( uVar5 * param_1 >> 0x20 ) + param_3 * param_1 + ( uVar8 >> 0x20 ) + (ulong)CARRY8(uVar2 * uVar5, uVar9);
   param_4 = param_4 >> 0x20;
   uVar12 = ( uVar2 * param_4 & 0xffffffff ) + ( param_1 * uVar10 & 0xffffffff );
   uVar13 = uVar12 << 0x20;
   uVar3 = uVar2 * uVar10 + uVar13;
   uVar14 = param_2 & 0xffffffff;
   uVar12 = ( uVar2 * param_4 >> 0x20 ) + ( param_1 * uVar10 >> 0x20 ) + param_1 * param_4 + ( uVar12 >> 0x20 ) + (ulong)CARRY8(uVar2 * uVar10, uVar13);
   param_2 = param_2 >> 0x20;
   uVar13 = ( uVar5 * param_2 & 0xffffffff ) + ( param_3 * uVar14 & 0xffffffff );
   uVar15 = uVar13 << 0x20;
   uVar6 = uVar5 * uVar14 + uVar15;
   uVar4 = param_3 * param_2 + ( param_3 * uVar14 >> 0x20 ) + ( uVar5 * param_2 >> 0x20 ) + ( uVar13 >> 0x20 ) + (ulong)CARRY8(uVar5 * uVar14, uVar15);
   uVar16 = ( uVar10 * param_2 & 0xffffffff ) + ( param_4 * uVar14 & 0xffffffff );
   uVar17 = uVar16 << 0x20;
   uVar11 = uVar10 * uVar14 + uVar17;
   uVar15 = uVar3 + uVar6;
   uVar13 = uVar12 + uVar11;
   lVar7 = ( uVar16 >> 0x20 ) + param_4 * param_2 + ( param_4 * uVar14 >> 0x20 ) + ( uVar10 * param_2 >> 0x20 ) + (ulong)CARRY8(uVar10 * uVar14, uVar17) + (ulong)CARRY8(uVar12, uVar11);
   uVar12 = uVar13 + uVar4;
   uVar3 = (ulong)CARRY8(uVar3, uVar6);
   uVar6 = (ulong)CARRY8(uVar15, uVar8);
   lVar1 = uVar12 + uVar3;
   if (CARRY8(uVar13, uVar4)) {
      lVar7 = lVar7 + 1;
   }
 else if (CARRY8(uVar12, uVar3)) {
      lVar7 = lVar7 + 1;
      lVar1 = lVar1 + uVar6;
      goto LAB_00108b60;
   }

   if (uVar6 != 0) {
      lVar1 = lVar1 + 1;
      lVar7 = lVar7 + ( ulong )(lVar1 == 0);
   }

   LAB_00108b60:*param_5 = uVar2 * uVar5 + uVar9;
   param_5[1] = uVar15 + uVar8;
   *param_6 = lVar1;
   param_6[1] = lVar7;
   return;
}
/* void VHACD::btAlignedObjectArray<VHACD::btConvexHullInternal::Point32>::quickSortInternal<bool
   (VHACD::btConvexHullInternal::Point32 const&, VHACD::btConvexHullInternal::Point32 const&)>(bool
   ( const&)(VHACD::btConvexHullInternal::Point32 const&, VHACD::btConvexHullInternal::Point32
   const&), int, int) */void VHACD::btAlignedObjectArray<VHACD::btConvexHullInternal::Point32>::quickSortInternal<bool(VHACD::btConvexHullInternal::Point32_const &, VHACD::btConvexHullInternal::Point32_const &)>(btAlignedObjectArray<VHACD::btConvexHullInternal::Point32> *this, _func_bool_Point32_ptr_Point32_ptr *param_1, int param_2, int param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   bool bVar4;
   long lVar5;
   long lVar6;
   undefined8 *puVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   long lVar11;
   undefined8 *puVar12;
   long in_FS_OFFSET;
   long local_a0;
   int local_98;
   int local_94;
   long local_90;
   int local_88;
   int local_84;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar5 = *(long*)( this + 0x10 );
   puVar7 = (undefined8*)( lVar5 + (long)( ( param_3 + param_2 ) / 2 ) * 0x10 );
   local_78 = *puVar7;
   uStack_70 = puVar7[1];
   local_90 = (long)param_2 << 4;
   local_84 = param_2 + 1;
   lVar6 = local_90;
   iVar8 = param_3;
   local_a0._0_4_ = local_84;
   do {
      bVar4 = ( *param_1 )((Point32*)( lVar5 + lVar6 ), (Point32*)&local_78);
      if (bVar4) {
         lVar5 = *(long*)( this + 0x10 );
      }
 else {
         lVar11 = (long)iVar8 << 4;
         while (true) {
            bVar4 = ( *param_1 )((Point32*)&local_78, (Point32*)( *(long*)( this + 0x10 ) + lVar11 ));
            if (!bVar4) break;
            iVar8 = iVar8 + -1;
            lVar11 = lVar11 + -0x10;
         }
;
         local_98 = (int)local_a0 + -1;
         if (iVar8 < local_98) break;
         lVar5 = *(long*)( this + 0x10 );
         iVar8 = iVar8 + -1;
         puVar7 = (undefined8*)( lVar5 + lVar11 );
         puVar12 = (undefined8*)( lVar5 + lVar6 );
         uVar3 = puVar7[1];
         uVar1 = *puVar12;
         uVar2 = puVar12[1];
         *puVar12 = *puVar7;
         puVar12[1] = uVar3;
         *puVar7 = uVar1;
         puVar7[1] = uVar2;
         local_98 = (int)local_a0;
         if (iVar8 < (int)local_a0) break;
      }

      local_a0._0_4_ = (int)local_a0 + 1;
      lVar6 = lVar6 + 0x10;
   }
 while ( true );
   if (param_2 < iVar8) {
      lVar5 = *(long*)( this + 0x10 );
      puVar7 = (undefined8*)( lVar5 + (long)( ( param_2 + iVar8 ) / 2 ) * 0x10 );
      local_68 = *puVar7;
      uStack_60 = puVar7[1];
      local_a0 = local_90;
      local_94 = local_84;
      iVar9 = iVar8;
      do {
         bVar4 = ( *param_1 )((Point32*)( lVar5 + local_a0 ), (Point32*)&local_68);
         if (bVar4) {
            lVar5 = *(long*)( this + 0x10 );
         }
 else {
            lVar6 = (long)iVar9 << 4;
            while (true) {
               bVar4 = ( *param_1 )((Point32*)&local_68, (Point32*)( *(long*)( this + 0x10 ) + lVar6 ));
               if (!bVar4) break;
               iVar9 = iVar9 + -1;
               lVar6 = lVar6 + -0x10;
            }
;
            local_88 = local_94 + -1;
            if (iVar9 < local_88) goto LAB_00108d87;
            lVar5 = *(long*)( this + 0x10 );
            iVar9 = iVar9 + -1;
            puVar7 = (undefined8*)( lVar5 + lVar6 );
            puVar12 = (undefined8*)( local_a0 + lVar5 );
            uVar3 = puVar7[1];
            uVar1 = *puVar12;
            uVar2 = puVar12[1];
            *puVar12 = *puVar7;
            puVar12[1] = uVar3;
            *puVar7 = uVar1;
            puVar7[1] = uVar2;
            local_88 = local_94;
            if (iVar9 < local_94) goto LAB_00108d87;
         }

         local_a0 = local_a0 + 0x10;
         local_94 = local_94 + 1;
      }
 while ( true );
   }

   goto LAB_00108c6a;
   LAB_0010927d:if (param_2 < (int)local_a0) {
      quickSortInternal<bool(VHACD::btConvexHullInternal::Point32_const &, VHACD::btConvexHullInternal::Point32_const &)>(this, param_1, param_2, (int)local_a0);
   }

   if (iVar10 < iVar9) {
      quickSortInternal<bool(VHACD::btConvexHullInternal::Point32_const &, VHACD::btConvexHullInternal::Point32_const &)>(this, param_1, iVar10, iVar9);
   }

   goto LAB_00108d92;
   LAB_00108e34:if (local_88 < iVar10) {
      quickSortInternal<bool(VHACD::btConvexHullInternal::Point32_const &, VHACD::btConvexHullInternal::Point32_const &)>(this, param_1, local_88, iVar10);
   }

   if (iVar9 < iVar8) {
      quickSortInternal<bool(VHACD::btConvexHullInternal::Point32_const &, VHACD::btConvexHullInternal::Point32_const &)>(this, param_1, iVar9, iVar8);
   }

   goto LAB_00108c6a;
   LAB_00108f4f:if (local_98 < iVar8) {
      lVar5 = *(long*)( this + 0x10 );
      puVar7 = (undefined8*)( lVar5 + (long)( ( iVar8 + local_98 ) / 2 ) * 0x10 );
      local_58 = *puVar7;
      uStack_50 = puVar7[1];
      iVar9 = iVar8;
      do {
         bVar4 = ( *param_1 )((Point32*)( lVar5 + local_90 ), (Point32*)&local_58);
         if (bVar4) {
            lVar5 = *(long*)( this + 0x10 );
         }
 else {
            lVar6 = (long)iVar9 << 4;
            while (true) {
               bVar4 = ( *param_1 )((Point32*)&local_58, (Point32*)( *(long*)( this + 0x10 ) + lVar6 ));
               if (!bVar4) break;
               iVar9 = iVar9 + -1;
               lVar6 = lVar6 + -0x10;
            }
;
            iVar10 = local_88 + -1;
            if (iVar9 < local_88 + -1) goto LAB_00109188;
            lVar5 = *(long*)( this + 0x10 );
            iVar9 = iVar9 + -1;
            puVar12 = (undefined8*)( lVar6 + lVar5 );
            puVar7 = (undefined8*)( local_90 + lVar5 );
            uVar3 = puVar12[1];
            uVar1 = *puVar7;
            uVar2 = puVar7[1];
            *puVar7 = *puVar12;
            puVar7[1] = uVar3;
            *puVar12 = uVar1;
            puVar12[1] = uVar2;
            iVar10 = local_88;
            if (iVar9 < local_88) goto LAB_00109188;
         }

         local_90 = local_90 + 0x10;
         local_88 = local_88 + 1;
      }
 while ( true );
   }

   LAB_00108f5c:if (local_94 < param_3) {
      lVar5 = *(long*)( this + 0x10 );
      puVar7 = (undefined8*)( lVar5 + (long)( ( param_3 + local_94 ) / 2 ) * 0x10 );
      local_58 = *puVar7;
      uStack_50 = puVar7[1];
      lVar6 = (long)local_94 << 4;
      iVar9 = param_3;
      iVar8 = local_94;
      do {
         local_a0._0_4_ = iVar8 + 1;
         bVar4 = ( *param_1 )((Point32*)( lVar5 + lVar6 ), (Point32*)&local_58);
         if (bVar4) {
            lVar5 = *(long*)( this + 0x10 );
         }
 else {
            lVar11 = (long)iVar9 << 4;
            while (true) {
               bVar4 = ( *param_1 )((Point32*)&local_58, (Point32*)( *(long*)( this + 0x10 ) + lVar11 ));
               if (!bVar4) break;
               iVar9 = iVar9 + -1;
               lVar11 = lVar11 + -0x10;
            }
;
            if (iVar9 < iVar8) goto LAB_00108ffc;
            lVar5 = *(long*)( this + 0x10 );
            iVar9 = iVar9 + -1;
            puVar7 = (undefined8*)( lVar5 + lVar11 );
            puVar12 = (undefined8*)( lVar5 + lVar6 );
            uVar1 = puVar7[1];
            uVar2 = *puVar12;
            uVar3 = puVar12[1];
            *puVar12 = *puVar7;
            puVar12[1] = uVar1;
            *puVar7 = uVar2;
            puVar7[1] = uVar3;
            iVar8 = (int)local_a0;
            if (iVar9 < (int)local_a0) goto LAB_00108ffc;
         }

         lVar6 = lVar6 + 0x10;
         iVar8 = (int)local_a0;
      }
 while ( true );
   }

   goto LAB_00108c78;
   LAB_00109188:if (local_98 < iVar9) {
      quickSortInternal<bool(VHACD::btConvexHullInternal::Point32_const &, VHACD::btConvexHullInternal::Point32_const &)>(this, param_1, local_98, iVar9);
   }

   if (iVar10 < iVar8) {
      quickSortInternal<bool(VHACD::btConvexHullInternal::Point32_const &, VHACD::btConvexHullInternal::Point32_const &)>(this, param_1, iVar10, iVar8);
   }

   goto LAB_00108f5c;
   LAB_00108ffc:if (local_94 < iVar9) {
      quickSortInternal<bool(VHACD::btConvexHullInternal::Point32_const &, VHACD::btConvexHullInternal::Point32_const &)>(this, param_1, local_94, iVar9);
   }

   if (iVar8 < param_3) {
      quickSortInternal<bool(VHACD::btConvexHullInternal::Point32_const &, VHACD::btConvexHullInternal::Point32_const &)>(this, param_1, iVar8, param_3);
   }

   goto LAB_00108c78;
   LAB_00108d87:if (param_2 < iVar9) {
      lVar5 = *(long*)( this + 0x10 );
      puVar7 = (undefined8*)( lVar5 + (long)( ( param_2 + iVar9 ) / 2 ) * 0x10 );
      local_58 = *puVar7;
      uStack_50 = puVar7[1];
      local_a0._0_4_ = iVar9;
      do {
         bVar4 = ( *param_1 )((Point32*)( lVar5 + local_90 ), (Point32*)&local_58);
         if (bVar4) {
            lVar5 = *(long*)( this + 0x10 );
         }
 else {
            lVar6 = (long)(int)local_a0 << 4;
            while (true) {
               bVar4 = ( *param_1 )((Point32*)&local_58, (Point32*)( *(long*)( this + 0x10 ) + lVar6 ));
               if (!bVar4) break;
               local_a0._0_4_ = (int)local_a0 + -1;
               lVar6 = lVar6 + -0x10;
            }
;
            iVar10 = local_84 + -1;
            if ((int)local_a0 < local_84 + -1) goto LAB_0010927d;
            lVar5 = *(long*)( this + 0x10 );
            local_a0._0_4_ = (int)local_a0 + -1;
            puVar7 = (undefined8*)( lVar5 + local_90 );
            puVar12 = (undefined8*)( lVar5 + lVar6 );
            uVar3 = puVar12[1];
            uVar1 = *puVar7;
            uVar2 = puVar7[1];
            *puVar7 = *puVar12;
            puVar7[1] = uVar3;
            *puVar12 = uVar1;
            puVar12[1] = uVar2;
            iVar10 = local_84;
            if ((int)local_a0 < local_84) goto LAB_0010927d;
         }

         local_90 = local_90 + 0x10;
         local_84 = local_84 + 1;
      }
 while ( true );
   }

   LAB_00108d92:if (local_88 < iVar8) {
      lVar5 = *(long*)( this + 0x10 );
      puVar7 = (undefined8*)( lVar5 + (long)( ( iVar8 + local_88 ) / 2 ) * 0x10 );
      local_58 = *puVar7;
      uStack_50 = puVar7[1];
      local_a0 = (long)local_88 << 4;
      iVar10 = iVar8;
      iVar9 = local_88;
      do {
         local_94 = iVar9 + 1;
         bVar4 = ( *param_1 )((Point32*)( lVar5 + local_a0 ), (Point32*)&local_58);
         if (bVar4) {
            lVar5 = *(long*)( this + 0x10 );
         }
 else {
            lVar6 = (long)iVar10 << 4;
            while (true) {
               bVar4 = ( *param_1 )((Point32*)&local_58, (Point32*)( *(long*)( this + 0x10 ) + lVar6 ));
               if (!bVar4) break;
               iVar10 = iVar10 + -1;
               lVar6 = lVar6 + -0x10;
            }
;
            if (iVar10 < iVar9) goto LAB_00108e34;
            lVar5 = *(long*)( this + 0x10 );
            iVar10 = iVar10 + -1;
            puVar7 = (undefined8*)( lVar5 + local_a0 );
            puVar12 = (undefined8*)( lVar5 + lVar6 );
            uVar1 = puVar12[1];
            uVar2 = *puVar7;
            uVar3 = puVar7[1];
            *puVar7 = *puVar12;
            puVar7[1] = uVar1;
            *puVar12 = uVar2;
            puVar12[1] = uVar3;
            iVar9 = local_94;
            if (iVar10 < local_94) goto LAB_00108e34;
         }

         local_a0 = local_a0 + 0x10;
         iVar9 = local_94;
      }
 while ( true );
   }

   LAB_00108c6a:if (local_98 < param_3) {
      lVar5 = *(long*)( this + 0x10 );
      puVar7 = (undefined8*)( lVar5 + (long)( ( param_3 + local_98 ) / 2 ) * 0x10 );
      local_68 = *puVar7;
      uStack_60 = puVar7[1];
      local_90 = (long)local_98 << 4;
      local_88 = local_98 + 1;
      lVar6 = local_90;
      iVar8 = param_3;
      local_a0._0_4_ = local_88;
      do {
         bVar4 = ( *param_1 )((Point32*)( lVar5 + lVar6 ), (Point32*)&local_68);
         if (bVar4) {
            lVar5 = *(long*)( this + 0x10 );
         }
 else {
            lVar11 = (long)iVar8 << 4;
            while (true) {
               bVar4 = ( *param_1 )((Point32*)&local_68, (Point32*)( *(long*)( this + 0x10 ) + lVar11 ));
               if (!bVar4) break;
               iVar8 = iVar8 + -1;
               lVar11 = lVar11 + -0x10;
            }
;
            local_94 = (int)local_a0 + -1;
            if (iVar8 < local_94) goto LAB_00108f4f;
            lVar5 = *(long*)( this + 0x10 );
            iVar8 = iVar8 + -1;
            puVar7 = (undefined8*)( lVar5 + lVar11 );
            puVar12 = (undefined8*)( lVar5 + lVar6 );
            uVar3 = puVar7[1];
            uVar1 = *puVar12;
            uVar2 = puVar12[1];
            *puVar12 = *puVar7;
            puVar12[1] = uVar3;
            *puVar7 = uVar1;
            puVar7[1] = uVar2;
            local_94 = (int)local_a0;
            if (iVar8 < (int)local_a0) goto LAB_00108f4f;
         }

         local_a0._0_4_ = (int)local_a0 + 1;
         lVar6 = lVar6 + 0x10;
      }
 while ( true );
   }

   LAB_00108c78:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}


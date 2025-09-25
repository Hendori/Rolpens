/* VHACD::ICHull::AddPoints(VHACD::Vec3<double> const*, unsigned long) [clone .part.0] */undefined8 VHACD::ICHull::AddPoints(ICHull *this, Vec3 *param_1, ulong param_2) {
   undefined8 uVar1;
   long lVar2;
   long lVar3;
   TMMVertex *pTVar4;
   ulong uVar5;
   if (param_2 != 0) {
      uVar5 = 0;
      lVar3 = *(long*)( this + 0x10 );
      do {
         if (lVar3 == 0) {
            pTVar4 = (TMMVertex*)operator_new(0x48);
            VHACD::TMMVertex::TMMVertex(pTVar4);
            *(TMMVertex**)( this + 8 ) = pTVar4;
            *(TMMVertex**)( pTVar4 + 0x38 ) = pTVar4;
            *(TMMVertex**)( pTVar4 + 0x40 ) = pTVar4;
         }
 else {
            lVar3 = *(long*)( this + 8 );
            lVar2 = *(long*)( lVar3 + 0x38 );
            pTVar4 = (TMMVertex*)operator_new(0x48);
            VHACD::TMMVertex::TMMVertex(pTVar4);
            *(TMMVertex**)( this + 8 ) = pTVar4;
            *(long*)( pTVar4 + 0x38 ) = lVar2;
            *(long*)( pTVar4 + 0x40 ) = lVar3;
            *(TMMVertex**)( lVar3 + 0x38 ) = pTVar4;
            *(TMMVertex**)( lVar2 + 0x40 ) = pTVar4;
            pTVar4 = *(TMMVertex**)( this + 8 );
         }

         uVar1 = *(undefined8*)param_1;
         lVar3 = *(long*)( this + 0x10 ) + 1;
         *(long*)( this + 0x10 ) = lVar3;
         *(undefined8*)pTVar4 = uVar1;
         *(undefined8*)( pTVar4 + 8 ) = *(undefined8*)( param_1 + 8 );
         uVar1 = *(undefined8*)( param_1 + 0x10 );
         *(int*)( pTVar4 + 0x18 ) = (int)uVar5;
         uVar5 = uVar5 + 1;
         *(undefined8*)( pTVar4 + 0x10 ) = uVar1;
         param_1 = param_1 + 0x18;
      }
 while ( uVar5 != param_2 );
      return 1;
   }

   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* VHACD::ICHull::ICHull() */void VHACD::ICHull::ICHull(ICHull *this) {
   undefined8 uVar1;
   undefined8 uVar2;
   VHACD::TMMesh::TMMesh((TMMesh*)this);
   uVar2 = _UNK_001035b8;
   uVar1 = __LC0;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 536*i + 568 ) ) = 0;
   }

   this[0x698] = (ICHull)0x0;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 536*i + 576 ) ) = uVar1;
      *(undefined8*)( this + ( 536*i + 584 ) ) = uVar2;
   }

   return;
}
/* VHACD::ICHull::AddPoints(VHACD::Vec3<double> const*, unsigned long) */undefined8 VHACD::ICHull::AddPoints(ICHull *this, Vec3 *param_1, ulong param_2) {
   undefined8 uVar1;
   if (param_1 != (Vec3*)0x0) {
      uVar1 = AddPoints(this, param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* VHACD::ICHull::AddPoint(VHACD::Vec3<double> const&, int) */void VHACD::ICHull::AddPoint(ICHull *this, Vec3 *param_1, int param_2) {
   char cVar1;
   cVar1 = AddPoints(this, param_1, 1);
   if (cVar1 != '\0') {
      *(int*)( *(long*)( this + 8 ) + 0x18 ) = param_2;
   }

   return;
}
/* VHACD::ICHull::MakeFace(VHACD::CircularListElement<VHACD::TMMVertex>*,
   VHACD::CircularListElement<VHACD::TMMVertex>*, VHACD::CircularListElement<VHACD::TMMVertex>*,
   VHACD::CircularListElement<VHACD::TMMTriangle>*) */TMMTriangle * __thiscall
VHACD::ICHull::MakeFace
          (ICHull *this,CircularListElement *param_1,CircularListElement *param_2,
          CircularListElement *param_3,CircularListElement *param_4){
   ICHull *pIVar1;
   long lVar2;
   long lVar3;
   TMMTriangle *pTVar4;
   TMMEdge *pTVar5;
   TMMEdge *pTVar6;
   TMMEdge *pTVar7;
   long lVar8;
   if (param_4 == (CircularListElement*)0x0) {
      if (*(long*)( this + 0x20 ) == 0) {
         pTVar5 = (TMMEdge*)operator_new(0x40);
         VHACD::TMMEdge::TMMEdge(pTVar5);
         *(TMMEdge**)( this + 0x18 ) = pTVar5;
         *(TMMEdge**)( pTVar5 + 0x30 ) = pTVar5;
         *(TMMEdge**)( pTVar5 + 0x38 ) = pTVar5;
      }
 else {
         lVar8 = *(long*)( this + 0x18 );
         lVar3 = *(long*)( lVar8 + 0x30 );
         pTVar5 = (TMMEdge*)operator_new(0x40);
         VHACD::TMMEdge::TMMEdge(pTVar5);
         *(TMMEdge**)( this + 0x18 ) = pTVar5;
         *(long*)( pTVar5 + 0x30 ) = lVar3;
         *(long*)( pTVar5 + 0x38 ) = lVar8;
         *(TMMEdge**)( lVar8 + 0x30 ) = pTVar5;
         *(TMMEdge**)( lVar3 + 0x38 ) = pTVar5;
         pTVar5 = *(TMMEdge**)( this + 0x18 );
      }

      pIVar1 = this + 0x20;
      *(long*)pIVar1 = *(long*)pIVar1 + 1;
      if (*(long*)pIVar1 == 0) {
         pTVar6 = (TMMEdge*)operator_new(0x40);
         VHACD::TMMEdge::TMMEdge(pTVar6);
         *(TMMEdge**)( this + 0x18 ) = pTVar6;
         *(TMMEdge**)( pTVar6 + 0x30 ) = pTVar6;
         *(TMMEdge**)( pTVar6 + 0x38 ) = pTVar6;
      }
 else {
         lVar8 = *(long*)( pTVar5 + 0x30 );
         pTVar6 = (TMMEdge*)operator_new(0x40);
         VHACD::TMMEdge::TMMEdge(pTVar6);
         *(TMMEdge**)( this + 0x18 ) = pTVar6;
         *(long*)( pTVar6 + 0x30 ) = lVar8;
         *(TMMEdge**)( pTVar6 + 0x38 ) = pTVar5;
         *(TMMEdge**)( pTVar5 + 0x30 ) = pTVar6;
         *(TMMEdge**)( lVar8 + 0x38 ) = pTVar6;
         pTVar6 = *(TMMEdge**)( this + 0x18 );
      }

      pIVar1 = this + 0x20;
      *(long*)pIVar1 = *(long*)pIVar1 + 1;
      if (*(long*)pIVar1 == 0) {
         pTVar7 = (TMMEdge*)operator_new(0x40);
         VHACD::TMMEdge::TMMEdge(pTVar7);
         *(TMMEdge**)( this + 0x18 ) = pTVar7;
         *(TMMEdge**)( pTVar7 + 0x30 ) = pTVar7;
         *(TMMEdge**)( pTVar7 + 0x38 ) = pTVar7;
      }
 else {
         lVar8 = *(long*)( pTVar6 + 0x30 );
         pTVar7 = (TMMEdge*)operator_new(0x40);
         VHACD::TMMEdge::TMMEdge(pTVar7);
         *(TMMEdge**)( this + 0x18 ) = pTVar7;
         *(long*)( pTVar7 + 0x30 ) = lVar8;
         *(TMMEdge**)( pTVar7 + 0x38 ) = pTVar6;
         *(TMMEdge**)( pTVar6 + 0x30 ) = pTVar7;
         *(TMMEdge**)( lVar8 + 0x38 ) = pTVar7;
         pTVar7 = *(TMMEdge**)( this + 0x18 );
      }

      *(long*)( this + 0x20 ) = *(long*)( this + 0x20 ) + 1;
      lVar8 = 0;
   }
 else {
      pTVar5 = *(TMMEdge**)( param_4 + 0x18 );
      pTVar6 = *(TMMEdge**)( param_4 + 0x10 );
      lVar8 = 1;
      pTVar7 = *(TMMEdge**)( param_4 + 8 );
   }

   lVar3 = *(long*)( this + 0x30 );
   *(CircularListElement**)( pTVar5 + 0x18 ) = param_1;
   *(CircularListElement**)( pTVar5 + 0x20 ) = param_2;
   *(CircularListElement**)( pTVar6 + 0x18 ) = param_2;
   *(CircularListElement**)( pTVar6 + 0x20 ) = param_3;
   *(CircularListElement**)( pTVar7 + 0x18 ) = param_3;
   *(CircularListElement**)( pTVar7 + 0x20 ) = param_1;
   if (lVar3 == 0) {
      pTVar4 = (TMMTriangle*)operator_new(0x50);
      VHACD::TMMTriangle::TMMTriangle(pTVar4);
      *(TMMTriangle**)( this + 0x28 ) = pTVar4;
      *(TMMTriangle**)( pTVar4 + 0x40 ) = pTVar4;
      *(TMMTriangle**)( pTVar4 + 0x48 ) = pTVar4;
   }
 else {
      lVar3 = *(long*)( this + 0x28 );
      lVar2 = *(long*)( lVar3 + 0x40 );
      pTVar4 = (TMMTriangle*)operator_new(0x50);
      VHACD::TMMTriangle::TMMTriangle(pTVar4);
      *(TMMTriangle**)( this + 0x28 ) = pTVar4;
      *(long*)( pTVar4 + 0x40 ) = lVar2;
      *(long*)( pTVar4 + 0x48 ) = lVar3;
      *(TMMTriangle**)( lVar3 + 0x40 ) = pTVar4;
      *(TMMTriangle**)( lVar2 + 0x48 ) = pTVar4;
      pTVar4 = *(TMMTriangle**)( this + 0x28 );
   }

   *(long*)( this + 0x30 ) = *(long*)( this + 0x30 ) + 1;
   *(TMMEdge**)( pTVar4 + 8 ) = pTVar5;
   *(TMMEdge**)( pTVar4 + 0x10 ) = pTVar6;
   *(TMMEdge**)( pTVar4 + 0x18 ) = pTVar7;
   *(CircularListElement**)( pTVar4 + 0x20 ) = param_1;
   *(CircularListElement**)( pTVar4 + 0x28 ) = param_2;
   *(CircularListElement**)( pTVar4 + 0x30 ) = param_3;
   *(TMMTriangle**)( pTVar7 + lVar8 * 8 + 8 ) = pTVar4;
   *(TMMTriangle**)( pTVar6 + lVar8 * 8 + 8 ) = pTVar4;
   *(TMMTriangle**)( pTVar5 + lVar8 * 8 + 8 ) = pTVar4;
   return pTVar4;
}
/* VHACD::ICHull::DoubleTriangle() */undefined8 VHACD::ICHull::DoubleTriangle(ICHull *this) {
   double dVar1;
   double dVar2;
   undefined4 uVar3;
   CircularListElement *pCVar4;
   double *pdVar5;
   undefined1 auVar6[16];
   double dVar7;
   double dVar8;
   double dVar9;
   double dVar10;
   double dVar11;
   double dVar12;
   char cVar13;
   CircularListElement *pCVar14;
   undefined8 uVar15;
   CircularListElement *pCVar16;
   CircularListElement *pCVar17;
   double *pdVar18;
   long in_FS_OFFSET;
   undefined1 auVar19[16];
   double dVar20;
   double dVar21;
   double dVar22;
   double dVar23;
   double dVar24;
   undefined1 auVar25[16];
   double dVar26;
   double dVar27;
   double dVar28;
   undefined1 auVar29[16];
   double dVar30;
   double dVar31;
   double local_68;
   double dStack_60;
   double local_58;
   undefined4 local_50;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pCVar14 = *(CircularListElement**)( this + 8 );
   this[0x698] = (ICHull)0x0;
   pCVar4 = *(CircularListElement**)( pCVar14 + 0x38 );
   pCVar17 = pCVar14;
   dVar23 = *(double*)( pCVar14 + 0x10 );
   dVar24 = *(double*)( pCVar4 + 0x10 );
   dVar21 = *(double*)( pCVar4 + 8 );
   dVar30 = *(double*)( pCVar14 + 8 );
   do {
      dVar26 = dVar21;
      pCVar16 = pCVar4;
      pCVar4 = *(CircularListElement**)( pCVar16 + 0x38 );
      dVar28 = dVar26 - dVar30;
      dVar21 = *(double*)( pCVar4 + 0x10 ) - dVar23;
      dVar30 = *(double*)( pCVar4 + 8 ) - dVar30;
      if (dVar21 * dVar28 - ( dVar24 - dVar23 ) * dVar30 != 0.0) {
         LAB_00100662:pCVar4[0x31] = (CircularListElement)0x1;
         pCVar16[0x31] = (CircularListElement)0x1;
         pCVar17[0x31] = (CircularListElement)0x1;
         pCVar14 = (CircularListElement*)MakeFace(this, pCVar17, pCVar16, pCVar4, (CircularListElement*)0x0);
         MakeFace(this, pCVar4, pCVar16, pCVar17, pCVar14);
         dVar31 = *(double*)( pCVar4 + 8 );
         dVar7 = *(double*)( pCVar4 + 0x10 );
         pdVar5 = *(double**)( pCVar4 + 0x38 );
         dVar23 = *(double*)( pCVar4 + 0x10 );
         dVar24 = *(double*)pCVar16;
         dVar27 = *(double*)( pCVar16 + 8 );
         dVar8 = *(double*)( pCVar16 + 0x10 );
         dVar21 = *(double*)pCVar4;
         dVar30 = *pdVar5;
         dVar26 = *(double*)( pCVar16 + 0x10 );
         dVar28 = pdVar5[2];
         dVar20 = pdVar5[1];
         dVar22 = pdVar5[1];
         dVar9 = *(double*)pCVar17;
         dVar10 = *(double*)( pCVar17 + 8 );
         dVar1 = pdVar5[2];
         dVar11 = *(double*)( pCVar17 + 8 );
         dVar12 = *(double*)( pCVar17 + 0x10 );
         *(double**)( this + 8 ) = pdVar5;
         dVar2 = *(double*)( pCVar17 + 0x10 );
         pdVar18 = pdVar5;
         if ((double)( ( ulong )(( ( dVar31 - dVar20 ) * ( dVar24 - dVar30 ) - ( dVar27 - dVar22 ) * ( dVar21 - dVar30 ) ) * ( dVar2 - pdVar5[2] ) + ( *(double*)( pCVar17 + 8 ) - pdVar5[1] ) * ( ( dVar26 - dVar1 ) * ( dVar21 - dVar30 ) - ( dVar23 - dVar28 ) * ( dVar24 - dVar30 ) ) + ( ( dVar23 - dVar28 ) * ( dVar27 - dVar22 ) - ( dVar31 - dVar20 ) * ( dVar26 - dVar1 ) ) * ( dVar9 - dVar30 )) & _LC2 ) < _LC3) goto LAB_00100899;
         goto LAB_00100a2f;
      }

      dVar20 = *(double*)pCVar4 - *(double*)pCVar17;
      dVar22 = *(double*)pCVar16 - *(double*)pCVar17;
      if (( ( dVar24 - dVar23 ) * dVar20 - dVar21 * dVar22 != 0.0 ) || ( dVar22 * dVar30 - dVar28 * dVar20 != 0.0 )) goto LAB_00100662;
      pCVar17 = pCVar16;
      dVar23 = dVar24;
      dVar24 = *(double*)( pCVar4 + 0x10 );
      dVar21 = *(double*)( pCVar4 + 8 );
      dVar30 = dVar26;
   }
 while ( pCVar14 != pCVar16 );
   uVar15 = 1;
   goto LAB_00100a3d;
   LAB_00100899:pdVar18 = (double*)pdVar18[7];
   if (*(char*)( (long)pdVar18 + 0x31 ) == '\0') goto LAB_001007d0;
   auVar19._0_8_ = dVar9 + 0.0;
   auVar19._8_8_ = dVar10 + 0.0;
   dVar30 = dVar2 + 0.0;
   for (pCVar14 = *(CircularListElement**)( pCVar17 + 0x38 ); pCVar17 != pCVar14; pCVar14 = *(CircularListElement**)( pCVar14 + 0x38 )) {
      dVar30 = dVar30 + *(double*)( pCVar14 + 0x10 );
      dVar28 = auVar19._8_8_;
      auVar19._0_8_ = auVar19._0_8_ + *(double*)pCVar14;
      auVar19._8_8_ = dVar28 + *(double*)( pCVar14 + 8 );
   }

   dVar27 = dVar27 - dVar11;
   dVar31 = dVar31 - dVar11;
   auVar29._0_8_ = dVar27 * ( dVar23 - dVar2 ) - ( dVar26 - dVar2 ) * dVar31;
   auVar29._8_8_ = ( dVar8 - dVar12 ) * ( dVar21 - dVar9 ) - ( dVar24 - dVar9 ) * ( dVar7 - dVar12 );
   dVar23 = (double)*(ulong*)( this + 0x10 );
   *(undefined1(*) [16])( this + 0x680 ) = auVar29;
   local_58 = ( dVar24 - dVar9 ) * dVar31 - ( dVar21 - dVar9 ) * dVar27;
   *(double*)( this + 0x690 ) = local_58;
   dVar24 = SQRT(local_58 * local_58 + auVar29._0_8_ * auVar29._0_8_ + auVar29._8_8_ * auVar29._8_8_);
   auVar6._8_8_ = dVar23;
   auVar6._0_8_ = dVar23;
   auVar19 = divpd(auVar19, auVar6);
   if (dVar24 != 0.0) {
      auVar25._8_8_ = dVar24;
      auVar25._0_8_ = dVar24;
      auVar29 = divpd(auVar29, auVar25);
      local_58 = local_58 / dVar24;
      *(undefined1(*) [16])( this + 0x680 ) = auVar29;
      *(double*)( this + 0x690 ) = local_58;
   }

   local_68 = auVar19._0_8_ + auVar29._0_8_;
   dStack_60 = auVar19._8_8_ + auVar29._8_8_;
   local_58 = dVar30 / dVar23 + local_58;
   *(CircularListElement**)( this + 8 ) = pCVar4;
   cVar13 = AddPoints(this, (Vec3*)&local_68, 1);
   if (cVar13 != '\0') {
      *(undefined4*)( *(long*)( this + 8 ) + 0x18 ) = 0x7fffffff;
   }

   this[0x698] = (ICHull)0x1;
   goto LAB_00100a2f;
   LAB_001007d0:if (_LC3 <= (double)( ( ulong )(( ( dVar24 - *pdVar18 ) * ( dVar31 - pdVar18[1] ) - ( dVar21 - *pdVar18 ) * ( dVar27 - pdVar18[1] ) ) * ( dVar2 - pdVar18[2] ) + ( ( dVar26 - pdVar18[2] ) * ( dVar21 - *pdVar18 ) - ( dVar23 - pdVar18[2] ) * ( dVar24 - *pdVar18 ) ) * ( *(double*)( pCVar17 + 8 ) - pdVar18[1] ) + ( dVar9 - *pdVar18 ) * ( ( dVar23 - pdVar18[2] ) * ( dVar27 - pdVar18[1] ) - ( dVar31 - pdVar18[1] ) * ( dVar26 - pdVar18[2] ) )) & _LC2 )) goto LAB_00100a60;
   goto LAB_00100899;
   LAB_00100a60:if (pdVar18 == pdVar5) {
      LAB_00100a2f:uVar15 = 0;
   }
 else {
      VHACD::TMMVertex::TMMVertex((TMMVertex*)&local_68);
      local_50 = *(undefined4*)( pdVar18 + 3 );
      local_68 = *pdVar18;
      dStack_60 = pdVar18[1];
      local_58 = pdVar18[2];
      pdVar5 = *(double**)( this + 8 );
      dVar23 = pdVar5[1];
      uVar3 = *(undefined4*)( pdVar5 + 3 );
      *pdVar18 = *pdVar5;
      pdVar18[1] = dVar23;
      dVar23 = pdVar5[2];
      *(undefined4*)( pdVar18 + 3 ) = uVar3;
      pdVar18[2] = dVar23;
      *(undefined4*)( pdVar5 + 3 ) = local_50;
      *pdVar5 = local_68;
      pdVar5[1] = dStack_60;
      pdVar5[2] = local_58;
      VHACD::TMMVertex::~TMMVertex((TMMVertex*)&local_68);
      uVar15 = 0;
   }

   LAB_00100a3d:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar15;
}
/* VHACD::ICHull::ComputePointVolume(double&, bool) */undefined8 VHACD::ICHull::ComputePointVolume(ICHull *this, double *param_1, bool param_2) {
   double dVar1;
   double dVar2;
   double dVar3;
   double *pdVar4;
   double *pdVar5;
   double *pdVar6;
   TMMVertex *pTVar7;
   void *pvVar8;
   ulong uVar9;
   long lVar10;
   ulong uVar11;
   ICHull *pIVar12;
   long lVar13;
   byte bVar14;
   ulong uVar15;
   double dVar16;
   double dVar17;
   dVar17 = _LC4;
   pdVar4 = *(double**)( this + 8 );
   lVar10 = *(long*)( this + 0x28 );
   uVar11 = *(ulong*)( this + 0x670 );
   dVar1 = pdVar4[2];
   dVar2 = pdVar4[1];
   dVar3 = *pdVar4;
   *param_1 = 0.0;
   lVar13 = lVar10;
   uVar9 = _LC2;
   bVar14 = 0;
   do {
      while (true) {
         pdVar4 = *(double**)( lVar13 + 0x30 );
         pdVar5 = *(double**)( lVar13 + 0x28 );
         pdVar6 = *(double**)( lVar13 + 0x20 );
         dVar16 = ( ( pdVar5[2] - dVar1 ) * ( *pdVar4 - dVar3 ) - ( pdVar4[2] - dVar1 ) * ( *pdVar5 - dVar3 ) ) * ( pdVar6[1] - dVar2 ) + ( ( pdVar4[2] - dVar1 ) * ( pdVar5[1] - dVar2 ) - ( pdVar4[1] - dVar2 ) * ( pdVar5[2] - dVar1 ) ) * ( *pdVar6 - dVar3 ) + ( ( pdVar4[1] - dVar2 ) * ( *pdVar5 - dVar3 ) - ( *pdVar4 - dVar3 ) * ( pdVar5[1] - dVar2 ) ) * ( pdVar6[2] - dVar1 );
         if (dVar16 < dVar17) break;
         LAB_00100b60:lVar13 = *(long*)( lVar13 + 0x40 );
         if (lVar13 == lVar10) goto LAB_00100c90;
      }
;
      bVar14 = 1;
      *param_1 = (double)( (ulong)dVar16 & uVar9 ) + *param_1;
      if (!param_2) goto LAB_00100b60;
      uVar15 = *(ulong*)( this + 0x678 );
      *(undefined1*)( lVar13 + 0x38 ) = 1;
      if (uVar15 == uVar11) {
         uVar15 = uVar11 * 2;
         uVar11 = uVar11 << 4;
         if (0xfffffffffffffff < uVar15) {
            uVar11 = 0xffffffffffffffff;
         }

         pvVar8 = operator_new__(uVar11);
         pIVar12 = this + 0x468;
         if (*(long*)( this + 0x678 ) != 0x40) {
            pIVar12 = *(ICHull**)( this + 0x668 );
         }

         __memcpy_chk(pvVar8, pIVar12, *(long*)( this + 0x678 ) * 8, uVar11);
         if (*(void**)( this + 0x668 ) != (void*)0x0) {
            operator_delete__(*(void**)( this + 0x668 ));
         }

         dVar17 = _LC4;
         uVar9 = _LC2;
         *(ulong*)( this + 0x678 ) = uVar15;
         uVar11 = *(ulong*)( this + 0x670 );
         *(void**)( this + 0x668 ) = pvVar8;
      }

      pIVar12 = this + 0x468;
      if (uVar15 != 0x40) {
         pIVar12 = *(ICHull**)( this + 0x668 );
      }

      uVar15 = uVar11 + 1;
      *(ulong*)( this + 0x670 ) = uVar15;
      *(long*)( pIVar12 + uVar11 * 8 ) = lVar13;
      lVar13 = *(long*)( lVar13 + 0x40 );
      uVar11 = uVar15;
      bVar14 = param_2;
   }
 while ( lVar13 != lVar10 );
   LAB_00100c90:if (uVar11 == *(ulong*)( this + 0x30 )) {
      if (uVar11 != 0) {
         lVar10 = *(long*)( this + 0x678 );
         uVar9 = 0;
         do {
            pIVar12 = this + 0x468;
            if (lVar10 != 0x40) {
               pIVar12 = *(ICHull**)( this + 0x668 );
            }

            lVar13 = uVar9 * 8;
            uVar9 = uVar9 + 1;
            *(undefined1*)( *(long*)( pIVar12 + lVar13 ) + 0x38 ) = 0;
         }
 while ( uVar11 != uVar9 );
      }

   }
 else {
      param_2 = (bool)( param_2 & ( bVar14 ^ 1 ) );
   }

   if (param_2 != false) {
      if (*(ulong*)( this + 0x10 ) < 2) {
         if (*(ulong*)( this + 0x10 ) == 1) {
            pTVar7 = *(TMMVertex**)( this + 8 );
            lVar10 = 1;
            if (pTVar7 != (TMMVertex*)0x0) {
               VHACD::TMMVertex::~TMMVertex(pTVar7);
               operator_delete(pTVar7, 0x48);
               lVar10 = *(long*)( this + 0x10 );
            }

            *(undefined8*)( this + 8 ) = 0;
            *(long*)( this + 0x10 ) = lVar10 + -1;
         }

      }
 else {
         pTVar7 = *(TMMVertex**)( this + 8 );
         lVar10 = *(long*)( pTVar7 + 0x38 );
         lVar13 = *(long*)( pTVar7 + 0x40 );
         VHACD::TMMVertex::~TMMVertex(pTVar7);
         operator_delete(pTVar7, 0x48);
         *(long*)( this + 0x10 ) = *(long*)( this + 0x10 ) + -1;
         *(long*)( this + 8 ) = lVar10;
         *(long*)( lVar10 + 0x40 ) = lVar13;
         *(long*)( lVar13 + 0x38 ) = lVar10;
      }

      *(undefined8*)( this + 0x670 ) = 0;
      return 0;
   }

   return 1;
}
/* VHACD::ICHull::FindMaxVolumePoint(double) */char VHACD::ICHull::FindMaxVolumePoint(ICHull *this, double param_1) {
   undefined8 uVar1;
   undefined4 uVar2;
   long lVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   char cVar8;
   long lVar9;
   undefined8 *puVar10;
   long in_FS_OFFSET;
   double local_40;
   double local_38;
   long local_30;
   puVar10 = (undefined8*)0x0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar9 = *(long*)( this + 8 );
   local_38 = 0.0;
   lVar3 = *(long*)( lVar9 + 0x40 );
   local_40 = param_1;
   while (cVar8 = *(char*)( lVar9 + 0x31 ),cVar8 == '\0') {
      cVar8 = ComputePointVolume(this, &local_38, false);
      if (cVar8 == '\0') {
         lVar9 = *(long*)( this + 8 );
      }
 else {
         if (local_40 < local_38) {
            puVar10 = *(undefined8**)( this + 8 );
            local_40 = local_38;
         }

         lVar9 = *(long*)( this + 8 );
         if (*(long*)( this + 0x10 ) != 0) {
            lVar9 = *(long*)( lVar9 + 0x38 );
            *(long*)( this + 8 ) = lVar9;
         }

      }

   }
;
   puVar4 = *(undefined8**)( lVar3 + 0x38 );
   *(undefined8**)( this + 8 ) = puVar4;
   if (puVar10 == (undefined8*)0x0) {
      cVar8 = '\0';
   }
 else if (puVar4 != puVar10) {
      uVar5 = puVar10[1];
      uVar6 = *puVar4;
      uVar7 = puVar4[1];
      uVar1 = puVar4[2];
      uVar2 = *(undefined4*)( puVar4 + 3 );
      *puVar4 = *puVar10;
      puVar4[1] = uVar5;
      puVar4[2] = puVar10[2];
      *puVar10 = uVar6;
      puVar10[1] = uVar7;
      puVar10[2] = uVar1;
      *(undefined4*)( puVar4 + 3 ) = uVar2;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return cVar8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VHACD::ICHull::MakeCCW(VHACD::CircularListElement<VHACD::TMMTriangle>*,
   VHACD::CircularListElement<VHACD::TMMEdge>*, VHACD::CircularListElement<VHACD::TMMVertex>*) */undefined8 VHACD::ICHull::MakeCCW(ICHull *this, CircularListElement *param_1, CircularListElement *param_2, CircularListElement *param_3) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   long lVar4;
   long lVar5;
   bool bVar6;
   lVar4 = *(long*)( param_2 + 8 );
   if (*(char*)( lVar4 + 0x38 ) == '\0') {
      lVar4 = *(long*)( param_2 + 0x10 );
   }

   lVar1 = *(long*)( param_2 + 0x18 );
   lVar2 = *(long*)( lVar4 + 0x28 );
   if (( lVar1 != *(long*)( lVar4 + 0x20 ) ) && ( bVar6 = lVar2 == lVar1 ),lVar2 = *(long*)( lVar4 + 0x20 ),bVar6) {
      lVar2 = *(long*)( lVar4 + 0x30 );
   }

   lVar4 = lVar1;
   lVar5 = *(long*)( param_2 + 0x20 );
   if (lVar2 == *(long*)( param_2 + 0x20 )) {
      uVar3 = *(undefined8*)( param_1 + 8 );
      *(undefined8*)( param_1 + 8 ) = *(undefined8*)( param_1 + 0x10 );
      *(undefined8*)( param_1 + 0x10 ) = uVar3;
      lVar4 = lVar2;
      lVar5 = lVar1;
   }

   *(long*)( param_1 + 0x28 ) = lVar4;
   *(long*)( param_1 + 0x20 ) = lVar5;
   *(CircularListElement**)( param_1 + 0x30 ) = param_3;
   return 1;
}
/* VHACD::ICHull::MakeConeFace(VHACD::CircularListElement<VHACD::TMMEdge>*,
   VHACD::CircularListElement<VHACD::TMMVertex>*) */CircularListElement * __thiscall
VHACD::ICHull::MakeConeFace(ICHull *this,CircularListElement *param_1,CircularListElement *param_2){
   undefined8 uVar1;
   long lVar2;
   long lVar3;
   CircularListElement *this_00;
   TMMTriangle *this_01;
   TMMEdge *pTVar4;
   long lVar5;
   long in_FS_OFFSET;
   long local_58[5];
   lVar5 = 0;
   local_58[3] = *(long*)( in_FS_OFFSET + 0x28 );
   while (true) {
      lVar2 = *(long*)( *(long*)( param_1 + lVar5 + 0x18 ) + 0x28 );
      *(long*)( (long)local_58 + lVar5 ) = lVar2;
      if (lVar2 == 0) {
         if (*(long*)( this + 0x20 ) == 0) {
            pTVar4 = (TMMEdge*)operator_new(0x40);
            VHACD::TMMEdge::TMMEdge(pTVar4);
            *(TMMEdge**)( this + 0x18 ) = pTVar4;
            *(TMMEdge**)( pTVar4 + 0x30 ) = pTVar4;
            *(TMMEdge**)( pTVar4 + 0x38 ) = pTVar4;
         }
 else {
            lVar2 = *(long*)( this + 0x18 );
            lVar3 = *(long*)( lVar2 + 0x30 );
            pTVar4 = (TMMEdge*)operator_new(0x40);
            VHACD::TMMEdge::TMMEdge(pTVar4);
            *(TMMEdge**)( this + 0x18 ) = pTVar4;
            *(long*)( pTVar4 + 0x30 ) = lVar3;
            *(long*)( pTVar4 + 0x38 ) = lVar2;
            *(TMMEdge**)( lVar2 + 0x30 ) = pTVar4;
            *(TMMEdge**)( lVar3 + 0x38 ) = pTVar4;
            pTVar4 = *(TMMEdge**)( this + 0x18 );
         }

         uVar1 = *(undefined8*)( param_1 + lVar5 + 0x18 );
         *(long*)( this + 0x20 ) = *(long*)( this + 0x20 ) + 1;
         *(TMMEdge**)( (long)local_58 + lVar5 ) = pTVar4;
         *(undefined8*)( pTVar4 + 0x18 ) = uVar1;
         *(CircularListElement**)( pTVar4 + 0x20 ) = param_2;
         *(TMMEdge**)( *(long*)( param_1 + lVar5 + 0x18 ) + 0x28 ) = pTVar4;
      }

      if (lVar5 == 8) break;
      lVar5 = 8;
   }
;
   if (*(long*)( this + 0x30 ) == 0) {
      this_00 = (CircularListElement*)operator_new(0x50);
      VHACD::TMMTriangle::TMMTriangle((TMMTriangle*)this_00);
      *(CircularListElement**)( this + 0x28 ) = this_00;
      *(CircularListElement**)( (TMMTriangle*)this_00 + 0x40 ) = this_00;
      *(CircularListElement**)( (TMMTriangle*)this_00 + 0x48 ) = this_00;
   }
 else {
      lVar5 = *(long*)( this + 0x28 );
      lVar2 = *(long*)( lVar5 + 0x40 );
      this_01 = (TMMTriangle*)operator_new(0x50);
      VHACD::TMMTriangle::TMMTriangle(this_01);
      *(TMMTriangle**)( this + 0x28 ) = this_01;
      *(long*)( this_01 + 0x40 ) = lVar2;
      *(long*)( this_01 + 0x48 ) = lVar5;
      *(TMMTriangle**)( lVar5 + 0x40 ) = this_01;
      *(TMMTriangle**)( lVar2 + 0x48 ) = this_01;
      this_00 = *(CircularListElement**)( this + 0x28 );
   }

   *(long*)( this + 0x30 ) = *(long*)( this + 0x30 ) + 1;
   *(long*)( this_00 + 0x18 ) = local_58[1];
   *(CircularListElement**)( this_00 + 8 ) = param_1;
   *(long*)( this_00 + 0x10 ) = local_58[0];
   MakeCCW(this, this_00, param_1, param_2);
   if (*(long*)( local_58[0] + 8 ) == 0) {
      lVar5 = 0;
      LAB_001012aa:*(CircularListElement**)( local_58[0] + 8 + lVar5 * 8 ) = this_00;
   }
 else {
      lVar5 = 1;
      if (*(long*)( local_58[0] + 0x10 ) == 0) goto LAB_001012aa;
   }

   if (*(long*)( local_58[1] + 8 ) == 0) {
      lVar5 = 0;
   }
 else {
      lVar5 = 1;
      if (*(long*)( local_58[1] + 0x10 ) != 0) goto LAB_0010115e;
   }

   *(CircularListElement**)( local_58[1] + 8 + lVar5 * 8 ) = this_00;
   LAB_0010115e:if (local_58[3] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this_00;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VHACD::ICHull::ProcessPoint() [clone .part.0] */undefined8 VHACD::ICHull::ProcessPoint(ICHull *this) {
   CircularListElement *pCVar1;
   CircularListElement *pCVar2;
   CircularListElement *pCVar3;
   undefined8 uVar4;
   ulong uVar5;
   void *pvVar6;
   ICHull *pIVar7;
   ulong uVar8;
   CircularListElement *pCVar9;
   ulong uVar10;
   pCVar1 = *(CircularListElement**)( this + 0x18 );
   pCVar2 = *(CircularListElement**)( this + 8 );
   *(undefined8*)( this + 0x240 ) = 0;
   *(undefined8*)( this + 0x458 ) = 0;
   pCVar9 = pCVar1;
   do {
      while (true) {
         pCVar3 = *(CircularListElement**)( pCVar9 + 0x30 );
         if (*(char*)( *(long*)( pCVar9 + 0x10 ) + 0x38 ) == '\0') break;
         if (*(char*)( *(long*)( pCVar9 + 8 ) + 0x38 ) != '\0') {
            uVar5 = *(ulong*)( this + 0x240 );
            uVar8 = *(ulong*)( this + 0x248 );
            uVar10 = uVar8;
            if (uVar5 == uVar8) {
               uVar10 = uVar8 * 2;
               uVar8 = uVar8 << 4;
               if (0xfffffffffffffff < uVar10) {
                  uVar8 = 0xffffffffffffffff;
               }

               pvVar6 = operator_new__(uVar8);
               pIVar7 = this + 0x38;
               if (*(long*)( this + 0x248 ) != 0x40) {
                  pIVar7 = *(ICHull**)( this + 0x238 );
               }

               __memcpy_chk(pvVar6, pIVar7, *(long*)( this + 0x248 ) * 8, uVar8);
               if (*(void**)( this + 0x238 ) != (void*)0x0) {
                  operator_delete__(*(void**)( this + 0x238 ));
               }

               *(ulong*)( this + 0x248 ) = uVar10;
               *(void**)( this + 0x238 ) = pvVar6;
               uVar5 = *(ulong*)( this + 0x240 );
            }

            pIVar7 = this + 0x38;
            if (uVar10 != 0x40) {
               pIVar7 = *(ICHull**)( this + 0x238 );
            }

            *(ulong*)( this + 0x240 ) = uVar5 + 1;
            *(CircularListElement**)( pIVar7 + uVar5 * 8 ) = pCVar9;
            goto LAB_0010130c;
         }

         LAB_0010132e:uVar4 = MakeConeFace(this, pCVar9, pCVar2);
         uVar8 = *(ulong*)( this + 0x460 );
         *(undefined8*)( pCVar9 + 0x28 ) = uVar4;
         uVar5 = *(ulong*)( this + 0x458 );
         uVar10 = uVar8;
         if (uVar5 == uVar8) {
            uVar10 = uVar8 * 2;
            uVar8 = uVar8 << 4;
            if (0xfffffffffffffff < uVar10) {
               uVar8 = 0xffffffffffffffff;
            }

            pvVar6 = operator_new__(uVar8);
            pIVar7 = this + 0x250;
            if (*(long*)( this + 0x460 ) != 0x40) {
               pIVar7 = *(ICHull**)( this + 0x450 );
            }

            __memcpy_chk(pvVar6, pIVar7, *(long*)( this + 0x460 ) * 8, uVar8);
            if (*(void**)( this + 0x450 ) != (void*)0x0) {
               operator_delete__(*(void**)( this + 0x450 ));
            }

            *(ulong*)( this + 0x460 ) = uVar10;
            *(void**)( this + 0x450 ) = pvVar6;
            uVar5 = *(ulong*)( this + 0x458 );
         }

         pIVar7 = this + 0x250;
         if (uVar10 != 0x40) {
            pIVar7 = *(ICHull**)( this + 0x450 );
         }

         *(ulong*)( this + 0x458 ) = uVar5 + 1;
         *(CircularListElement**)( pIVar7 + uVar5 * 8 ) = pCVar9;
         pCVar9 = pCVar3;
         if (pCVar1 == pCVar3) {
            return 1;
         }

      }
;
      if (*(char*)( *(long*)( pCVar9 + 8 ) + 0x38 ) != '\0') goto LAB_0010132e;
      LAB_0010130c:pCVar9 = pCVar3;
      if (pCVar1 == pCVar3) {
         return 1;
      }

   }
 while ( true );
}
/* VHACD::ICHull::ProcessPoint() */undefined8 VHACD::ICHull::ProcessPoint(ICHull *this) {
   char cVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   double local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_18 = 0.0;
   cVar1 = ComputePointVolume(this, &local_18, true);
   if (cVar1 == '\0') {
      if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 0;
      }

   }
 else if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar2 = ProcessPoint(this);
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VHACD::ICHull::CleanEdges() */undefined8 VHACD::ICHull::CleanEdges(ICHull *this) {
   long lVar1;
   long lVar2;
   long lVar3;
   TMMEdge *pTVar4;
   long lVar5;
   ICHull *pIVar6;
   long lVar7;
   lVar1 = *(long*)( this + 0x458 );
   if (lVar1 != 0) {
      lVar7 = *(long*)( this + 0x460 );
      lVar5 = 0;
      do {
         pIVar6 = this + 0x250;
         if (lVar7 != 0x40) {
            pIVar6 = *(ICHull**)( this + 0x450 );
         }

         lVar2 = *(long*)( pIVar6 + lVar5 * 8 );
         lVar3 = *(long*)( lVar2 + 0x28 );
         if (lVar3 != 0) {
            if (*(char*)( *(long*)( lVar2 + 8 ) + 0x38 ) == '\0') {
               *(long*)( lVar2 + 0x10 ) = lVar3;
            }
 else {
               *(long*)( lVar2 + 8 ) = lVar3;
            }

            *(undefined8*)( lVar2 + 0x28 ) = 0;
         }

         lVar5 = lVar5 + 1;
      }
 while ( lVar1 != lVar5 );
   }

   lVar1 = *(long*)( this + 0x240 );
   lVar7 = 0;
   if (lVar1 != 0) {
      do {
         while (true) {
            pIVar6 = this + 0x38;
            if (*(long*)( this + 0x248 ) != 0x40) {
               pIVar6 = *(ICHull**)( this + 0x238 );
            }

            pTVar4 = *(TMMEdge**)( pIVar6 + lVar7 * 8 );
            if (pTVar4 != (TMMEdge*)0x0) break;
            LAB_00101646:lVar7 = lVar7 + 1;
            if (lVar7 == lVar1) goto LAB_001016b3;
         }
;
         if (*(ulong*)( this + 0x20 ) < 2) {
            if (*(ulong*)( this + 0x20 ) == 1) {
               pTVar4 = *(TMMEdge**)( this + 0x18 );
               lVar5 = 1;
               if (pTVar4 != (TMMEdge*)0x0) {
                  VHACD::TMMEdge::~TMMEdge(pTVar4);
                  operator_delete(pTVar4, 0x40);
                  lVar5 = *(long*)( this + 0x20 );
               }

               *(undefined8*)( this + 0x18 ) = 0;
               *(long*)( this + 0x20 ) = lVar5 + -1;
            }

            goto LAB_00101646;
         }

         lVar5 = *(long*)( pTVar4 + 0x30 );
         lVar2 = *(long*)( pTVar4 + 0x38 );
         VHACD::TMMEdge::~TMMEdge(pTVar4);
         operator_delete(pTVar4, 0x40);
         *(long*)( this + 0x20 ) = *(long*)( this + 0x20 ) + -1;
         if (pTVar4 == *(TMMEdge**)( this + 0x18 )) {
            *(long*)( this + 0x18 ) = lVar5;
         }

         lVar7 = lVar7 + 1;
         *(long*)( lVar5 + 0x38 ) = lVar2;
         *(long*)( lVar2 + 0x30 ) = lVar5;
      }
 while ( lVar7 != lVar1 );
   }

   LAB_001016b3:*(undefined8*)( this + 0x240 ) = 0;
   *(undefined8*)( this + 0x458 ) = 0;
   return 1;
}
/* VHACD::ICHull::CleanTriangles() */undefined8 VHACD::ICHull::CleanTriangles(ICHull *this) {
   long lVar1;
   TMMTriangle *pTVar2;
   long lVar3;
   ICHull *pIVar4;
   long lVar5;
   long lVar6;
   lVar1 = *(long*)( this + 0x670 );
   if (lVar1 != 0) {
      lVar6 = 0;
      LAB_00101777:do {
         pIVar4 = this + 0x468;
         if (*(long*)( this + 0x678 ) != 0x40) {
            pIVar4 = *(ICHull**)( this + 0x668 );
         }

         pTVar2 = *(TMMTriangle**)( pIVar4 + lVar6 * 8 );
         if (pTVar2 != (TMMTriangle*)0x0) {
            if (1 < *(ulong*)( this + 0x30 )) {
               lVar5 = *(long*)( pTVar2 + 0x40 );
               lVar3 = *(long*)( pTVar2 + 0x48 );
               VHACD::TMMTriangle::~TMMTriangle(pTVar2);
               operator_delete(pTVar2, 0x50);
               *(long*)( this + 0x30 ) = *(long*)( this + 0x30 ) + -1;
               if (pTVar2 == *(TMMTriangle**)( this + 0x28 )) {
                  *(long*)( this + 0x28 ) = lVar5;
               }

               lVar6 = lVar6 + 1;
               *(long*)( lVar5 + 0x48 ) = lVar3;
               *(long*)( lVar3 + 0x40 ) = lVar5;
               if (lVar1 == lVar6) break;
               goto LAB_00101777;
            }

            if (*(ulong*)( this + 0x30 ) == 1) {
               pTVar2 = *(TMMTriangle**)( this + 0x28 );
               lVar5 = 1;
               if (pTVar2 != (TMMTriangle*)0x0) {
                  VHACD::TMMTriangle::~TMMTriangle(pTVar2);
                  operator_delete(pTVar2, 0x50);
                  lVar5 = *(long*)( this + 0x30 );
               }

               *(undefined8*)( this + 0x28 ) = 0;
               *(long*)( this + 0x30 ) = lVar5 + -1;
            }

         }

         lVar6 = lVar6 + 1;
      }
 while ( lVar1 != lVar6 );
   }

   *(undefined8*)( this + 0x670 ) = 0;
   return 1;
}
/* VHACD::ICHull::CleanVertices(unsigned int&) */undefined8 VHACD::ICHull::CleanVertices(ICHull *this, uint *param_1) {
   long *plVar1;
   TMMVertex TVar2;
   TMMVertex *pTVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   TMMVertex *pTVar7;
   TMMVertex *pTVar8;
   lVar6 = 0;
   lVar5 = *(long*)( this + 0x20 );
   lVar4 = *(long*)( this + 0x18 );
   if (lVar5 != 0) {
      do {
         lVar6 = lVar6 + 1;
         *(undefined1*)( *(long*)( lVar4 + 0x18 ) + 0x30 ) = 1;
         plVar1 = (long*)( lVar4 + 0x20 );
         lVar4 = *(long*)( lVar4 + 0x30 );
         *(undefined1*)( *plVar1 + 0x30 ) = 1;
      }
 while ( lVar5 != lVar6 );
   }

   pTVar3 = *(TMMVertex**)( this + 8 );
   pTVar7 = *(TMMVertex**)( pTVar3 + 0x40 );
   pTVar8 = *(TMMVertex**)( pTVar7 + 0x40 );
   if (pTVar7[0x31] != (TMMVertex)0x0) goto LAB_001018ce;
   do {
      TVar2 = pTVar8[0x31];
      *(undefined8*)( pTVar7 + 0x28 ) = 0;
      pTVar7[0x30] = (TMMVertex)0x0;
      pTVar7 = pTVar8;
      while (true) {
         if (( TVar2 == (TMMVertex)0x0 ) || ( pTVar3 == pTVar7 )) {
            return 1;
         }

         pTVar8 = *(TMMVertex**)( pTVar7 + 0x40 );
         LAB_001018ce:if (pTVar7[0x30] != (TMMVertex)0x0) break;
         if (*(ulong*)( this + 0x10 ) < 2) {
            if (*(ulong*)( this + 0x10 ) == 1) {
               pTVar7 = *(TMMVertex**)( this + 8 );
               lVar5 = 1;
               if (pTVar7 != (TMMVertex*)0x0) {
                  VHACD::TMMVertex::~TMMVertex(pTVar7);
                  operator_delete(pTVar7, 0x48);
                  lVar5 = *(long*)( this + 0x10 );
               }

               *(undefined8*)( this + 8 ) = 0;
               *(long*)( this + 0x10 ) = lVar5 + -1;
            }

         }
 else {
            lVar5 = *(long*)( pTVar7 + 0x38 );
            VHACD::TMMVertex::~TMMVertex(pTVar7);
            operator_delete(pTVar7, 0x48);
            *(long*)( this + 0x10 ) = *(long*)( this + 0x10 ) + -1;
            if (*(TMMVertex**)( this + 8 ) == pTVar7) {
               *(long*)( this + 8 ) = lVar5;
            }

            *(TMMVertex**)( lVar5 + 0x40 ) = pTVar8;
            *(long*)( pTVar8 + 0x38 ) = lVar5;
         }

         *param_1 = *param_1 - 1;
         TVar2 = pTVar8[0x31];
         pTVar7 = pTVar8;
      }
;
   }
 while ( true );
}
/* VHACD::ICHull::CleanUp(unsigned int&) */byte VHACD::ICHull::CleanUp(ICHull *this, uint *param_1) {
   byte bVar1;
   byte bVar2;
   byte bVar3;
   byte bVar4;
   bVar2 = CleanEdges(this);
   bVar3 = CleanTriangles(this);
   bVar4 = CleanVertices(this, param_1);
   bVar1 = bVar2 & bVar3;
   if (( bVar2 & bVar3 ) != 0) {
      bVar1 = bVar4;
   }

   return bVar1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* VHACD::ICHull::Process() */undefined8 VHACD::ICHull::Process(ICHull *this) {
   TMMEdge *pTVar1;
   double *pdVar2;
   double *pdVar3;
   double *pdVar4;
   char cVar5;
   undefined8 uVar6;
   long lVar7;
   undefined1 *puVar8;
   long *plVar9;
   undefined1 *puVar10;
   long lVar11;
   TMMTriangle *pTVar12;
   TMMTriangle *pTVar13;
   void *pvVar14;
   ICHull *pIVar15;
   ulong uVar16;
   ulong uVar17;
   long lVar18;
   long lVar19;
   long lVar20;
   TMMVertex *pTVar21;
   ulong uVar22;
   ulong uVar23;
   long in_FS_OFFSET;
   double dVar24;
   double dVar25;
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   uint local_264;
   double local_260;
   undefined1 local_258[512];
   undefined1 *local_58;
   ulong local_50;
   ulong uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_264 = 0;
   uVar6 = 4;
   if (*(ulong*)( this + 0x10 ) < 3) goto LAB_00101a7f;
   if (*(ulong*)( this + 0x10 ) == 3) {
      this[0x698] = (ICHull)0x1;
      if (*(long*)( this + 0x30 ) == 0) {
         pTVar12 = (TMMTriangle*)operator_new(0x50);
         VHACD::TMMTriangle::TMMTriangle(pTVar12);
         *(TMMTriangle**)( this + 0x28 ) = pTVar12;
         *(TMMTriangle**)( pTVar12 + 0x40 ) = pTVar12;
         *(TMMTriangle**)( pTVar12 + 0x48 ) = pTVar12;
      }
 else {
         lVar11 = *(long*)( this + 0x28 );
         lVar7 = *(long*)( lVar11 + 0x40 );
         pTVar12 = (TMMTriangle*)operator_new(0x50);
         VHACD::TMMTriangle::TMMTriangle(pTVar12);
         *(TMMTriangle**)( this + 0x28 ) = pTVar12;
         *(long*)( pTVar12 + 0x40 ) = lVar7;
         *(long*)( pTVar12 + 0x48 ) = lVar11;
         *(TMMTriangle**)( lVar11 + 0x40 ) = pTVar12;
         *(TMMTriangle**)( lVar7 + 0x48 ) = pTVar12;
         pTVar12 = *(TMMTriangle**)( this + 0x28 );
      }

      pIVar15 = this + 0x30;
      *(long*)pIVar15 = *(long*)pIVar15 + 1;
      if (*(long*)pIVar15 == 0) {
         pTVar13 = (TMMTriangle*)operator_new(0x50);
         VHACD::TMMTriangle::TMMTriangle(pTVar13);
         *(TMMTriangle**)( this + 0x28 ) = pTVar13;
         *(TMMTriangle**)( pTVar13 + 0x40 ) = pTVar13;
         *(TMMTriangle**)( pTVar13 + 0x48 ) = pTVar13;
      }
 else {
         lVar11 = *(long*)( pTVar12 + 0x40 );
         pTVar13 = (TMMTriangle*)operator_new(0x50);
         VHACD::TMMTriangle::TMMTriangle(pTVar13);
         *(TMMTriangle**)( this + 0x28 ) = pTVar13;
         *(long*)( pTVar13 + 0x40 ) = lVar11;
         *(TMMTriangle**)( pTVar13 + 0x48 ) = pTVar12;
         *(TMMTriangle**)( pTVar12 + 0x40 ) = pTVar13;
         *(TMMTriangle**)( lVar11 + 0x48 ) = pTVar13;
         pTVar13 = *(TMMTriangle**)( this + 0x28 );
      }

      pdVar2 = *(double**)( this + 8 );
      *(long*)( this + 0x30 ) = *(long*)( this + 0x30 ) + 1;
      pdVar3 = (double*)pdVar2[7];
      dVar24 = pdVar2[2];
      pdVar4 = (double*)pdVar3[7];
      auVar27._0_8_ = ( pdVar4[2] - dVar24 ) * ( pdVar3[1] - pdVar2[1] ) - ( pdVar3[2] - dVar24 ) * ( pdVar4[1] - pdVar2[1] );
      auVar27._8_8_ = ( *pdVar4 - *pdVar2 ) * ( pdVar3[2] - pdVar2[2] ) - ( pdVar4[2] - dVar24 ) * ( *pdVar3 - *pdVar2 );
      dVar25 = ( pdVar4[1] - pdVar2[1] ) * ( *pdVar3 - *pdVar2 ) - ( *pdVar4 - *pdVar2 ) * ( pdVar3[1] - pdVar2[1] );
      *(undefined1(*) [16])( this + 0x680 ) = auVar27;
      *(double*)( this + 0x690 ) = dVar25;
      dVar24 = SQRT(auVar27._0_8_ * auVar27._0_8_ + auVar27._8_8_ * auVar27._8_8_ + dVar25 * dVar25);
      if (dVar24 != 0.0) {
         auVar26._8_8_ = dVar24;
         auVar26._0_8_ = dVar24;
         auVar27 = divpd(auVar27, auVar26);
         *(double*)( this + 0x690 ) = dVar25 / dVar24;
         *(undefined1(*) [16])( this + 0x680 ) = auVar27;
      }

      *(double**)( pTVar12 + 0x30 ) = pdVar4;
      uVar6 = 0;
      *(double**)( pTVar12 + 0x20 ) = pdVar2;
      *(double**)( pTVar12 + 0x28 ) = pdVar3;
      *(double**)( pTVar13 + 0x30 ) = pdVar4;
      *(double**)( pTVar13 + 0x20 ) = pdVar3;
      *(double**)( pTVar13 + 0x28 ) = pdVar4;
      goto LAB_00101a7f;
   }

   if (this[0x698] == (ICHull)0x0) {
      if (*(long*)( this + 0x30 ) == 0) goto LAB_00101a58;
   }
 else {
      uVar17 = *(ulong*)( this + 0x20 );
      while (true) {
         while (1 < uVar17) {
            pTVar1 = *(TMMEdge**)( this + 0x18 );
            lVar11 = *(long*)( pTVar1 + 0x30 );
            lVar7 = *(long*)( pTVar1 + 0x38 );
            VHACD::TMMEdge::~TMMEdge(pTVar1);
            operator_delete(pTVar1, 0x40);
            *(long*)( this + 0x18 ) = lVar11;
            uVar17 = *(long*)( this + 0x20 ) - 1;
            *(ulong*)( this + 0x20 ) = uVar17;
            *(long*)( lVar11 + 0x38 ) = lVar7;
            *(long*)( lVar7 + 0x30 ) = lVar11;
         }
;
         if (uVar17 != 1) goto LAB_00101a3d;
         pTVar1 = *(TMMEdge**)( this + 0x18 );
         if (pTVar1 == (TMMEdge*)0x0) break;
         VHACD::TMMEdge::~TMMEdge(pTVar1);
         operator_delete(pTVar1, 0x40);
         *(undefined8*)( this + 0x18 ) = 0;
         uVar17 = *(long*)( this + 0x20 ) - 1;
         *(ulong*)( this + 0x20 ) = uVar17;
      }
;
      *(undefined8*)( this + 0x20 ) = 0;
      LAB_00101a3d:uVar17 = *(ulong*)( this + 0x30 );
      while (true) {
         while (1 < uVar17) {
            pTVar12 = *(TMMTriangle**)( this + 0x28 );
            lVar11 = *(long*)( pTVar12 + 0x40 );
            lVar7 = *(long*)( pTVar12 + 0x48 );
            VHACD::TMMTriangle::~TMMTriangle(pTVar12);
            operator_delete(pTVar12, 0x50);
            *(long*)( this + 0x28 ) = lVar11;
            uVar17 = *(long*)( this + 0x30 ) - 1;
            *(ulong*)( this + 0x30 ) = uVar17;
            *(long*)( lVar11 + 0x48 ) = lVar7;
            *(long*)( lVar7 + 0x40 ) = lVar11;
         }
;
         if (uVar17 != 1) goto LAB_00101a51;
         pTVar12 = *(TMMTriangle**)( this + 0x28 );
         if (pTVar12 == (TMMTriangle*)0x0) break;
         VHACD::TMMTriangle::~TMMTriangle(pTVar12);
         operator_delete(pTVar12, 0x50);
         *(undefined8*)( this + 0x28 ) = 0;
         uVar17 = *(long*)( this + 0x30 ) - 1;
         *(ulong*)( this + 0x30 ) = uVar17;
      }
;
      *(undefined8*)( this + 0x30 ) = 0;
      LAB_00101a51:this[0x698] = (ICHull)0x0;
      LAB_00101a58:uVar6 = DoubleTriangle(this);
      if ((int)uVar6 != 0) goto LAB_00101a7f;
      local_264 = 3;
   }

   lVar11 = *(long*)( this + 8 );
   while (lVar7 = *(long*)( lVar11 + 0x40 ),*(char*)( lVar7 + 0x31 ) == '\0') {
      do {} while ( *(long*)( this + 0x10 ) == 0 );
      *(long*)( this + 8 ) = lVar7;
      lVar11 = lVar7;
   }
;
   while (*(char*)( lVar11 + 0x31 ) == '\0') {
      *(undefined1*)( lVar11 + 0x31 ) = 1;
      local_260 = 0.0;
      cVar5 = ComputePointVolume(this, &local_260, true);
      if (( cVar5 != '\0' ) && ( cVar5 = cVar5 != '\0' )) {
         local_264 = local_264 + 1;
         CleanEdges(this);
         CleanTriangles(this);
         CleanVertices(this, &local_264);
         if (*(long*)( this + 0x10 ) != 0) {
            *(undefined8*)( this + 8 ) = *(undefined8*)( *(long*)( this + 8 ) + 0x38 );
         }

         cVar5 = VHACD::TMMesh::CheckConsistancy();
         if (cVar5 == '\0') {
            lVar11 = *(long*)( this + 0x10 );
            if (lVar11 == 0) goto LAB_00101bb6;
            pTVar21 = *(TMMVertex**)( this + 8 );
            lVar7 = 0;
            goto LAB_00101b81;
         }

      }

      lVar11 = *(long*)( this + 8 );
   }
;
   if (this[0x698] != (ICHull)0x0) {
      lVar11 = *(long*)( this + 0x30 );
      local_58 = (undefined1*)0x0;
      local_50 = __LC0;
      uStack_48 = _UNK_001035b8;
      if (lVar11 == 0) {
         uVar17 = 0;
         puVar10 = (undefined1*)0x0;
      }
 else {
         lVar7 = 0;
         uVar23 = 0;
         puVar8 = (undefined1*)0x0;
         do {
            uVar17 = uStack_48;
            lVar20 = *(long*)( this + 0x28 );
            puVar10 = puVar8;
            if (( ( *(int*)( *(long*)( lVar20 + 0x20 ) + 0x18 ) == 0x7fffffff ) || ( *(int*)( *(long*)( lVar20 + 0x28 ) + 0x18 ) == 0x7fffffff ) ) || ( *(int*)( *(long*)( lVar20 + 0x30 ) + 0x18 ) == 0x7fffffff )) {
               uVar16 = *(ulong*)( this + 0x670 );
               uVar17 = *(ulong*)( this + 0x678 );
               lVar19 = lVar20;
               uVar22 = uVar17;
               if (uVar16 == uVar17) {
                  uVar22 = uVar17 * 2;
                  uVar17 = uVar17 << 4;
                  if (0xfffffffffffffff < uVar22) {
                     uVar17 = 0xffffffffffffffff;
                  }

                  pvVar14 = operator_new__(uVar17);
                  pIVar15 = this + 0x468;
                  if (*(long*)( this + 0x678 ) != 0x40) {
                     pIVar15 = *(ICHull**)( this + 0x668 );
                  }

                  __memcpy_chk(pvVar14, pIVar15, *(long*)( this + 0x678 ) * 8, uVar17);
                  if (*(void**)( this + 0x668 ) != (void*)0x0) {
                     operator_delete__(*(void**)( this + 0x668 ));
                  }

                  lVar19 = *(long*)( this + 0x28 );
                  *(ulong*)( this + 0x678 ) = uVar22;
                  *(void**)( this + 0x668 ) = pvVar14;
                  uVar16 = *(ulong*)( this + 0x670 );
               }

               pIVar15 = this + 0x468;
               if (uVar22 != 0x40) {
                  pIVar15 = *(ICHull**)( this + 0x668 );
               }

               *(ulong*)( this + 0x670 ) = uVar16 + 1;
               *(long*)( pIVar15 + uVar16 * 8 ) = lVar19;
               lVar19 = *(long*)( lVar20 + 8 );
               plVar9 = (long*)( lVar20 + 8 );
               lVar18 = *(long*)( this + 0x28 );
               if (*(long*)( lVar19 + 8 ) == lVar18) goto LAB_00101df3;
               do {
                  if (*(long*)( lVar19 + 0x10 ) == lVar18) {
                     lVar18 = 1;
                     goto LAB_00101df5;
                  }

                  while (true) {
                     plVar9 = plVar9 + 1;
                     uVar17 = uVar23;
                     if (plVar9 == (long*)( lVar20 + 0x20 )) goto LAB_00101d31;
                     lVar19 = *plVar9;
                     lVar18 = *(long*)( this + 0x28 );
                     if (*(long*)( lVar19 + 8 ) != lVar18) break;
                     LAB_00101df3:lVar18 = 0;
                     LAB_00101df5:*(undefined8*)( lVar19 + 8 + lVar18 * 8 ) = 0;
                  }
;
               }
 while ( true );
            }

            if (uVar23 == uStack_48) {
               if (uVar23 * 2 < 0x1000000000000000) {
                  uVar16 = uVar23 << 4;
                  pvVar14 = operator_new__(uVar16);
                  if (uVar23 != 0x40) goto LAB_00101e36;
                  lVar20 = 0x200;
                  uVar16 = 0x400;
                  puVar10 = local_258;
               }
 else {
                  pvVar14 = operator_new__(0xffffffffffffffff);
                  uVar16 = 0xffffffffffffffff;
                  LAB_00101e36:lVar20 = uVar17 << 3;
               }

               puVar10 = (undefined1*)__memcpy_chk(pvVar14, puVar10, lVar20, uVar16);
               if (puVar8 != (undefined1*)0x0) {
                  operator_delete__(puVar8);
               }

               lVar20 = *(long*)( this + 0x28 );
               local_58 = puVar10;
               uStack_48 = uVar23 * 2;
            }

            uVar17 = uVar23 + 1;
            puVar8 = local_258;
            if (uStack_48 != 0x40) {
               puVar8 = puVar10;
            }

            local_50 = uVar17;
            *(long*)( puVar8 + uVar23 * 8 ) = lVar20;
            LAB_00101d31:if (*(long*)( this + 0x30 ) != 0) {
               *(undefined8*)( this + 0x28 ) = *(undefined8*)( *(long*)( this + 0x28 ) + 0x40 );
            }

            lVar7 = lVar7 + 1;
            uVar23 = uVar17;
            puVar8 = puVar10;
         }
 while ( lVar7 != lVar11 );
      }

      lVar11 = *(long*)( this + 0x20 );
      lVar7 = 0;
      if (lVar11 != 0) {
         do {
            lVar20 = *(long*)( this + 0x18 );
            if (( *(long*)( lVar20 + 8 ) == 0 ) && ( *(long*)( lVar20 + 0x10 ) == 0 )) {
               uVar16 = *(ulong*)( this + 0x240 );
               uVar23 = *(ulong*)( this + 0x248 );
               uVar22 = uVar23;
               if (uVar16 == uVar23) {
                  uVar22 = uVar23 * 2;
                  uVar23 = uVar23 << 4;
                  if (0xfffffffffffffff < uVar22) {
                     uVar23 = 0xffffffffffffffff;
                  }

                  pvVar14 = operator_new__(uVar23);
                  pIVar15 = this + 0x38;
                  if (*(long*)( this + 0x248 ) != 0x40) {
                     pIVar15 = *(ICHull**)( this + 0x238 );
                  }

                  __memcpy_chk(pvVar14, pIVar15, *(long*)( this + 0x248 ) * 8, uVar23);
                  if (*(void**)( this + 0x238 ) != (void*)0x0) {
                     operator_delete__(*(void**)( this + 0x238 ));
                  }

                  *(ulong*)( this + 0x248 ) = uVar22;
                  uVar16 = *(ulong*)( this + 0x240 );
                  *(void**)( this + 0x238 ) = pvVar14;
                  lVar20 = *(long*)( this + 0x18 );
               }

               pIVar15 = this + 0x38;
               if (uVar22 != 0x40) {
                  pIVar15 = *(ICHull**)( this + 0x238 );
               }

               *(ulong*)( this + 0x240 ) = uVar16 + 1;
               *(long*)( pIVar15 + uVar16 * 8 ) = lVar20;
            }

            if (*(long*)( this + 0x20 ) != 0) {
               *(undefined8*)( this + 0x18 ) = *(undefined8*)( *(long*)( this + 0x18 ) + 0x30 );
            }

            lVar7 = lVar7 + 1;
         }
 while ( lVar7 != lVar11 );
      }

      uVar23 = *(ulong*)( this + 0x10 );
      lVar11 = 0;
      uVar16 = uVar23;
      if (uVar23 != 0) {
         while (true) {
            pTVar21 = *(TMMVertex**)( this + 8 );
            if (*(int*)( pTVar21 + 0x18 ) == 0x7fffffff) {
               if (uVar16 < 2) {
                  if (uVar16 == 1) {
                     VHACD::TMMVertex::~TMMVertex(pTVar21);
                     operator_delete(pTVar21, 0x48);
                     *(long*)( this + 0x10 ) = *(long*)( this + 0x10 ) + -1;
                     *(undefined8*)( this + 8 ) = 0;
                  }

               }
 else {
                  lVar7 = *(long*)( pTVar21 + 0x38 );
                  lVar20 = *(long*)( pTVar21 + 0x40 );
                  VHACD::TMMVertex::~TMMVertex(pTVar21);
                  operator_delete(pTVar21, 0x48);
                  *(long*)( this + 0x10 ) = *(long*)( this + 0x10 ) + -1;
                  *(long*)( this + 8 ) = lVar7;
                  *(long*)( lVar7 + 0x40 ) = lVar20;
                  *(long*)( lVar20 + 0x38 ) = lVar7;
               }

            }
 else {
               pTVar21[0x31] = (TMMVertex)0x0;
               if (uVar16 != 0) {
                  *(undefined8*)( this + 8 ) = *(undefined8*)( pTVar21 + 0x38 );
               }

            }

            if (lVar11 + 1U == uVar23) break;
            lVar11 = lVar11 + 1;
            uVar16 = *(ulong*)( this + 0x10 );
         }
;
      }

      CleanEdges(this);
      CleanTriangles(this);
      if (uVar17 != 0) {
         lVar11 = *(long*)( this + 0x30 );
         puVar8 = local_258;
         if (uStack_48 != 0x40) {
            puVar8 = puVar10;
         }

         uVar23 = 0;
         do {
            if (lVar11 == 0) {
               pTVar12 = (TMMTriangle*)operator_new(0x50);
               VHACD::TMMTriangle::TMMTriangle(pTVar12);
               *(TMMTriangle**)( this + 0x28 ) = pTVar12;
               *(TMMTriangle**)( pTVar12 + 0x40 ) = pTVar12;
               *(TMMTriangle**)( pTVar12 + 0x48 ) = pTVar12;
            }
 else {
               lVar11 = *(long*)( this + 0x28 );
               lVar7 = *(long*)( lVar11 + 0x40 );
               pTVar12 = (TMMTriangle*)operator_new(0x50);
               VHACD::TMMTriangle::TMMTriangle(pTVar12);
               *(TMMTriangle**)( this + 0x28 ) = pTVar12;
               *(long*)( pTVar12 + 0x40 ) = lVar7;
               *(long*)( pTVar12 + 0x48 ) = lVar11;
               *(TMMTriangle**)( lVar11 + 0x40 ) = pTVar12;
               *(TMMTriangle**)( lVar7 + 0x48 ) = pTVar12;
               pTVar12 = *(TMMTriangle**)( this + 0x28 );
            }

            lVar7 = *(long*)( puVar8 + uVar23 * 8 );
            uVar23 = uVar23 + 1;
            uVar6 = *(undefined8*)( lVar7 + 0x28 );
            lVar11 = *(long*)( this + 0x30 ) + 1;
            *(long*)( this + 0x30 ) = lVar11;
            *(undefined8*)( pTVar12 + 0x20 ) = uVar6;
            uVar6 = *(undefined8*)( lVar7 + 0x30 );
            *(undefined8*)( pTVar12 + 0x28 ) = *(undefined8*)( lVar7 + 0x20 );
            *(undefined8*)( pTVar12 + 0x30 ) = uVar6;
         }
 while ( uVar23 != uVar17 );
      }

      if (puVar10 != (undefined1*)0x0) {
         operator_delete__(puVar10);
      }

   }

   uVar6 = 0;
   LAB_00101a7f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
   while (true) {
      pTVar21 = *(TMMVertex**)( pTVar21 + 0x38 );
      lVar7 = lVar7 + 1;
      *(TMMVertex**)( this + 8 ) = pTVar21;
      if (lVar7 == lVar11) break;
      LAB_00101b81:if (*(int*)( pTVar21 + 0x18 ) == 0x7fffffff) {
         if (lVar11 == 1) {
            VHACD::TMMVertex::~TMMVertex(pTVar21);
            operator_delete(pTVar21, 0x48);
            *(long*)( this + 0x10 ) = *(long*)( this + 0x10 ) + -1;
            *(undefined8*)( this + 8 ) = 0;
         }
 else {
            lVar11 = *(long*)( pTVar21 + 0x38 );
            lVar7 = *(long*)( pTVar21 + 0x40 );
            VHACD::TMMVertex::~TMMVertex(pTVar21);
            operator_delete(pTVar21, 0x48);
            *(long*)( this + 0x10 ) = *(long*)( this + 0x10 ) + -1;
            *(long*)( this + 8 ) = lVar11;
            *(long*)( lVar11 + 0x40 ) = lVar7;
            *(long*)( lVar7 + 0x38 ) = lVar11;
         }

         break;
      }

   }
;
   LAB_00101bb6:uVar6 = 3;
   goto LAB_00101a7f;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* VHACD::ICHull::Process(unsigned int, double) */undefined8 VHACD::ICHull::Process(ICHull *this, uint param_1, double param_2) {
   TMMVertex TVar1;
   TMMEdge *pTVar2;
   double *pdVar3;
   double *pdVar4;
   double *pdVar5;
   uint uVar6;
   char cVar7;
   undefined8 uVar8;
   undefined1 *puVar9;
   long *plVar10;
   undefined1 *puVar11;
   long lVar12;
   TMMTriangle *pTVar13;
   TMMTriangle *pTVar14;
   void *pvVar15;
   long lVar16;
   ulong uVar17;
   ulong uVar18;
   long lVar19;
   long lVar20;
   long lVar21;
   TMMVertex *pTVar22;
   TMMVertex *pTVar23;
   ICHull *pIVar24;
   ulong uVar25;
   ulong uVar26;
   long in_FS_OFFSET;
   double dVar27;
   undefined1 auVar28[16];
   double dVar29;
   double dVar30;
   undefined1 auVar31[16];
   double dVar32;
   double dVar33;
   uint local_264;
   double local_260;
   undefined1 local_258[512];
   undefined1 *local_58;
   ulong local_50;
   ulong uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_264 = 0;
   uVar8 = 4;
   if (( 2 < param_1 ) && ( 2 < *(ulong*)( this + 0x10 ) )) {
      uVar18 = *(ulong*)( this + 0x30 );
      if (*(ulong*)( this + 0x10 ) == 3) {
         this[0x698] = (ICHull)0x1;
         if (uVar18 == 0) {
            pTVar13 = (TMMTriangle*)operator_new(0x50);
            VHACD::TMMTriangle::TMMTriangle(pTVar13);
            *(TMMTriangle**)( this + 0x28 ) = pTVar13;
            *(TMMTriangle**)( pTVar13 + 0x40 ) = pTVar13;
            *(TMMTriangle**)( pTVar13 + 0x48 ) = pTVar13;
         }
 else {
            lVar12 = *(long*)( this + 0x28 );
            lVar16 = *(long*)( lVar12 + 0x40 );
            pTVar13 = (TMMTriangle*)operator_new(0x50);
            VHACD::TMMTriangle::TMMTriangle(pTVar13);
            *(TMMTriangle**)( this + 0x28 ) = pTVar13;
            *(long*)( pTVar13 + 0x40 ) = lVar16;
            *(long*)( pTVar13 + 0x48 ) = lVar12;
            *(TMMTriangle**)( lVar12 + 0x40 ) = pTVar13;
            *(TMMTriangle**)( lVar16 + 0x48 ) = pTVar13;
            pTVar13 = *(TMMTriangle**)( this + 0x28 );
         }

         pIVar24 = this + 0x30;
         *(long*)pIVar24 = *(long*)pIVar24 + 1;
         if (*(long*)pIVar24 == 0) {
            pTVar14 = (TMMTriangle*)operator_new(0x50);
            VHACD::TMMTriangle::TMMTriangle(pTVar14);
            *(TMMTriangle**)( this + 0x28 ) = pTVar14;
            *(TMMTriangle**)( pTVar14 + 0x40 ) = pTVar14;
            *(TMMTriangle**)( pTVar14 + 0x48 ) = pTVar14;
         }
 else {
            lVar12 = *(long*)( pTVar13 + 0x40 );
            pTVar14 = (TMMTriangle*)operator_new(0x50);
            VHACD::TMMTriangle::TMMTriangle(pTVar14);
            *(TMMTriangle**)( this + 0x28 ) = pTVar14;
            *(long*)( pTVar14 + 0x40 ) = lVar12;
            *(TMMTriangle**)( pTVar14 + 0x48 ) = pTVar13;
            *(TMMTriangle**)( pTVar13 + 0x40 ) = pTVar14;
            *(TMMTriangle**)( lVar12 + 0x48 ) = pTVar14;
            pTVar14 = *(TMMTriangle**)( this + 0x28 );
         }

         pdVar3 = *(double**)( this + 8 );
         *(long*)( this + 0x30 ) = *(long*)( this + 0x30 ) + 1;
         pdVar4 = (double*)pdVar3[7];
         dVar27 = pdVar3[2];
         pdVar5 = (double*)pdVar4[7];
         dVar32 = pdVar4[1] - pdVar3[1];
         dVar33 = *pdVar5 - *pdVar3;
         dVar29 = pdVar5[1] - pdVar3[1];
         dVar30 = *pdVar4 - *pdVar3;
         auVar28._0_8_ = ( pdVar5[2] - dVar27 ) * dVar32 - ( pdVar4[2] - dVar27 ) * dVar29;
         auVar28._8_8_ = ( pdVar4[2] - dVar27 ) * dVar33 - ( pdVar5[2] - dVar27 ) * dVar30;
         *(undefined1(*) [16])( this + 0x680 ) = auVar28;
         dVar29 = dVar29 * dVar30 - dVar32 * dVar33;
         *(double*)( this + 0x690 ) = dVar29;
         dVar27 = SQRT(auVar28._0_8_ * auVar28._0_8_ + auVar28._8_8_ * auVar28._8_8_ + dVar29 * dVar29);
         if (dVar27 != 0.0) {
            auVar31._8_8_ = dVar27;
            auVar31._0_8_ = dVar27;
            auVar28 = divpd(auVar28, auVar31);
            *(double*)( this + 0x690 ) = dVar29 / dVar27;
            *(undefined1(*) [16])( this + 0x680 ) = auVar28;
         }

         *(double**)( pTVar13 + 0x30 ) = pdVar5;
         *(double**)( pTVar13 + 0x20 ) = pdVar3;
         *(double**)( pTVar13 + 0x28 ) = pdVar4;
         *(double**)( pTVar14 + 0x30 ) = pdVar5;
         uVar8 = 0;
         *(double**)( pTVar14 + 0x20 ) = pdVar4;
         *(double**)( pTVar14 + 0x28 ) = pdVar3;
      }
 else {
         if (this[0x698] != (ICHull)0x0) {
            while (true) {
               while (1 < uVar18) {
                  pTVar13 = *(TMMTriangle**)( this + 0x28 );
                  lVar12 = *(long*)( pTVar13 + 0x40 );
                  lVar16 = *(long*)( pTVar13 + 0x48 );
                  VHACD::TMMTriangle::~TMMTriangle(pTVar13);
                  operator_delete(pTVar13, 0x50);
                  *(long*)( this + 0x28 ) = lVar12;
                  uVar18 = *(long*)( this + 0x30 ) - 1;
                  *(ulong*)( this + 0x30 ) = uVar18;
                  *(long*)( lVar12 + 0x48 ) = lVar16;
                  *(long*)( lVar16 + 0x40 ) = lVar12;
               }
;
               if (uVar18 != 1) goto LAB_0010259e;
               pTVar13 = *(TMMTriangle**)( this + 0x28 );
               if (pTVar13 == (TMMTriangle*)0x0) break;
               VHACD::TMMTriangle::~TMMTriangle(pTVar13);
               operator_delete(pTVar13, 0x50);
               *(undefined8*)( this + 0x28 ) = 0;
               uVar18 = *(long*)( this + 0x30 ) - 1;
               *(ulong*)( this + 0x30 ) = uVar18;
            }
;
            *(undefined8*)( this + 0x30 ) = 0;
            LAB_0010259e:uVar18 = *(ulong*)( this + 0x20 );
            while (true) {
               while (1 < uVar18) {
                  pTVar2 = *(TMMEdge**)( this + 0x18 );
                  lVar12 = *(long*)( pTVar2 + 0x30 );
                  lVar16 = *(long*)( pTVar2 + 0x38 );
                  VHACD::TMMEdge::~TMMEdge(pTVar2);
                  operator_delete(pTVar2, 0x40);
                  *(long*)( this + 0x18 ) = lVar12;
                  uVar18 = *(long*)( this + 0x20 ) - 1;
                  *(ulong*)( this + 0x20 ) = uVar18;
                  *(long*)( lVar12 + 0x38 ) = lVar16;
                  *(long*)( lVar16 + 0x30 ) = lVar12;
               }
;
               if (uVar18 != 1) goto LAB_001025b2;
               pTVar2 = *(TMMEdge**)( this + 0x18 );
               if (pTVar2 == (TMMEdge*)0x0) break;
               VHACD::TMMEdge::~TMMEdge(pTVar2);
               operator_delete(pTVar2, 0x40);
               *(undefined8*)( this + 0x18 ) = 0;
               uVar18 = *(long*)( this + 0x20 ) - 1;
               *(ulong*)( this + 0x20 ) = uVar18;
            }
;
            *(undefined8*)( this + 0x20 ) = 0;
            LAB_001025b2:this[0x698] = (ICHull)0x0;
         }

         if (*(long*)( this + 0x30 ) == 0) {
            uVar8 = DoubleTriangle(this);
            if ((int)uVar8 != 0) goto LAB_0010269f;
            local_264 = 3;
         }

         pTVar23 = *(TMMVertex**)( this + 8 );
         while (uVar6 = local_264,pTVar23[0x31] == (TMMVertex)0x0) {
            if (param_1 <= local_264) goto LAB_001027e0;
            dVar27 = 0.0;
            if (4 < local_264) {
               dVar27 = param_2;
            }

            cVar7 = FindMaxVolumePoint(this, dVar27);
            if (cVar7 == '\0') {
               do {
                  pTVar22 = *(TMMVertex**)( this + 8 );
                  while (true) {
                     TVar1 = pTVar22[0x31];
                     pTVar23 = pTVar22;
                     while (true) {
                        if (TVar1 != (TMMVertex)0x0) goto LAB_00102820;
                        LAB_001027e0:if (*(ulong*)( this + 0x10 ) < 2) break;
                        lVar12 = *(long*)( pTVar23 + 0x38 );
                        lVar16 = *(long*)( pTVar23 + 0x40 );
                        VHACD::TMMVertex::~TMMVertex(pTVar23);
                        operator_delete(pTVar23, 0x48);
                        *(long*)( this + 0x10 ) = *(long*)( this + 0x10 ) + -1;
                        *(long*)( this + 8 ) = lVar12;
                        *(long*)( lVar12 + 0x40 ) = lVar16;
                        *(long*)( lVar16 + 0x38 ) = lVar12;
                        pTVar23 = *(TMMVertex**)( this + 8 );
                        TVar1 = pTVar23[0x31];
                     }
;
                     if (*(ulong*)( this + 0x10 ) != 1) break;
                     VHACD::TMMVertex::~TMMVertex(pTVar23);
                     pTVar22 = (TMMVertex*)0x0;
                     operator_delete(pTVar23, 0x48);
                     *(long*)( this + 0x10 ) = *(long*)( this + 0x10 ) + -1;
                     *(undefined8*)( this + 8 ) = 0;
                  }
;
               }
 while ( true );
            }

            local_260 = 0.0;
            *(undefined1*)( *(long*)( this + 8 ) + 0x31 ) = 1;
            cVar7 = ComputePointVolume(this, &local_260, true);
            if (( cVar7 == '\0' ) || ( cVar7 = cVar7 == '\0' )) {
               pTVar23 = *(TMMVertex**)( this + 8 );
            }
 else {
               local_264 = uVar6 + 1;
               CleanEdges(this);
               CleanTriangles(this);
               CleanVertices(this, &local_264);
               cVar7 = VHACD::TMMesh::CheckConsistancy();
               if (cVar7 == '\0') {
                  lVar12 = *(long*)( this + 0x10 );
                  if (lVar12 == 0) goto LAB_001030cf;
                  pTVar23 = *(TMMVertex**)( this + 8 );
                  lVar16 = 0;
                  goto LAB_001030a0;
               }

               pTVar23 = *(TMMVertex**)( this + 8 );
               if (*(long*)( this + 0x10 ) != 0) {
                  pTVar23 = *(TMMVertex**)( pTVar23 + 0x38 );
                  *(TMMVertex**)( this + 8 ) = pTVar23;
               }

            }

         }
;
         LAB_00102820:if (this[0x698] != (ICHull)0x0) {
            lVar12 = *(long*)( this + 0x30 );
            local_58 = (undefined1*)0x0;
            local_50 = __LC0;
            uStack_48 = _UNK_001035b8;
            if (lVar12 == 0) {
               uVar18 = 0;
               puVar11 = (undefined1*)0x0;
            }
 else {
               lVar16 = 0;
               uVar26 = 0;
               puVar9 = (undefined1*)0x0;
               do {
                  uVar18 = uStack_48;
                  lVar21 = *(long*)( this + 0x28 );
                  puVar11 = puVar9;
                  if (( ( *(int*)( *(long*)( lVar21 + 0x20 ) + 0x18 ) == 0x7fffffff ) || ( *(int*)( *(long*)( lVar21 + 0x28 ) + 0x18 ) == 0x7fffffff ) ) || ( *(int*)( *(long*)( lVar21 + 0x30 ) + 0x18 ) == 0x7fffffff )) {
                     uVar17 = *(ulong*)( this + 0x670 );
                     uVar18 = *(ulong*)( this + 0x678 );
                     lVar20 = lVar21;
                     uVar25 = uVar18;
                     if (uVar17 == uVar18) {
                        uVar25 = uVar18 * 2;
                        uVar18 = uVar18 << 4;
                        if (0xfffffffffffffff < uVar25) {
                           uVar18 = 0xffffffffffffffff;
                        }

                        pvVar15 = operator_new__(uVar18);
                        pIVar24 = this + 0x468;
                        if (*(long*)( this + 0x678 ) != 0x40) {
                           pIVar24 = *(ICHull**)( this + 0x668 );
                        }

                        __memcpy_chk(pvVar15, pIVar24, *(long*)( this + 0x678 ) * 8, uVar18);
                        if (*(void**)( this + 0x668 ) != (void*)0x0) {
                           operator_delete__(*(void**)( this + 0x668 ));
                        }

                        lVar20 = *(long*)( this + 0x28 );
                        *(ulong*)( this + 0x678 ) = uVar25;
                        *(void**)( this + 0x668 ) = pvVar15;
                        uVar17 = *(ulong*)( this + 0x670 );
                     }

                     pIVar24 = this + 0x468;
                     if (uVar25 != 0x40) {
                        pIVar24 = *(ICHull**)( this + 0x668 );
                     }

                     *(ulong*)( this + 0x670 ) = uVar17 + 1;
                     *(long*)( pIVar24 + uVar17 * 8 ) = lVar20;
                     lVar20 = *(long*)( lVar21 + 8 );
                     plVar10 = (long*)( lVar21 + 8 );
                     lVar19 = *(long*)( this + 0x28 );
                     if (*(long*)( lVar20 + 8 ) == lVar19) goto LAB_00102953;
                     do {
                        if (*(long*)( lVar20 + 0x10 ) == lVar19) {
                           lVar19 = 1;
                           goto LAB_00102955;
                        }

                        while (true) {
                           plVar10 = plVar10 + 1;
                           uVar18 = uVar26;
                           if (plVar10 == (long*)( lVar21 + 0x20 )) goto LAB_00102891;
                           lVar20 = *plVar10;
                           lVar19 = *(long*)( this + 0x28 );
                           if (*(long*)( lVar20 + 8 ) != lVar19) break;
                           LAB_00102953:lVar19 = 0;
                           LAB_00102955:*(undefined8*)( lVar20 + 8 + lVar19 * 8 ) = 0;
                        }
;
                     }
 while ( true );
                  }

                  if (uVar26 == uStack_48) {
                     if (uVar26 * 2 < 0x1000000000000000) {
                        uVar17 = uVar26 << 4;
                        pvVar15 = operator_new__(uVar17);
                        if (uVar26 != 0x40) goto LAB_001029e6;
                        lVar21 = 0x200;
                        uVar17 = 0x400;
                        puVar11 = local_258;
                     }
 else {
                        pvVar15 = operator_new__(0xffffffffffffffff);
                        uVar17 = 0xffffffffffffffff;
                        LAB_001029e6:lVar21 = uVar18 << 3;
                     }

                     puVar11 = (undefined1*)__memcpy_chk(pvVar15, puVar11, lVar21, uVar17);
                     if (puVar9 != (undefined1*)0x0) {
                        operator_delete__(puVar9);
                     }

                     lVar21 = *(long*)( this + 0x28 );
                     local_58 = puVar11;
                     uStack_48 = uVar26 * 2;
                  }

                  uVar18 = uVar26 + 1;
                  puVar9 = local_258;
                  if (uStack_48 != 0x40) {
                     puVar9 = puVar11;
                  }

                  local_50 = uVar18;
                  *(long*)( puVar9 + uVar26 * 8 ) = lVar21;
                  LAB_00102891:if (*(long*)( this + 0x30 ) != 0) {
                     *(undefined8*)( this + 0x28 ) = *(undefined8*)( *(long*)( this + 0x28 ) + 0x40 );
                  }

                  lVar16 = lVar16 + 1;
                  uVar26 = uVar18;
                  puVar9 = puVar11;
               }
 while ( lVar16 != lVar12 );
            }

            lVar12 = *(long*)( this + 0x20 );
            lVar16 = 0;
            if (lVar12 != 0) {
               do {
                  lVar21 = *(long*)( this + 0x18 );
                  if (( *(long*)( lVar21 + 8 ) == 0 ) && ( *(long*)( lVar21 + 0x10 ) == 0 )) {
                     uVar17 = *(ulong*)( this + 0x240 );
                     uVar26 = *(ulong*)( this + 0x248 );
                     uVar25 = uVar26;
                     if (uVar17 == uVar26) {
                        uVar25 = uVar26 * 2;
                        uVar26 = uVar26 << 4;
                        if (0xfffffffffffffff < uVar25) {
                           uVar26 = 0xffffffffffffffff;
                        }

                        pvVar15 = operator_new__(uVar26);
                        pIVar24 = this + 0x38;
                        if (*(long*)( this + 0x248 ) != 0x40) {
                           pIVar24 = *(ICHull**)( this + 0x238 );
                        }

                        __memcpy_chk(pvVar15, pIVar24, *(long*)( this + 0x248 ) * 8, uVar26);
                        if (*(void**)( this + 0x238 ) != (void*)0x0) {
                           operator_delete__(*(void**)( this + 0x238 ));
                        }

                        *(ulong*)( this + 0x248 ) = uVar25;
                        uVar17 = *(ulong*)( this + 0x240 );
                        *(void**)( this + 0x238 ) = pvVar15;
                        lVar21 = *(long*)( this + 0x18 );
                     }

                     pIVar24 = this + 0x38;
                     if (uVar25 != 0x40) {
                        pIVar24 = *(ICHull**)( this + 0x238 );
                     }

                     *(ulong*)( this + 0x240 ) = uVar17 + 1;
                     *(long*)( pIVar24 + uVar17 * 8 ) = lVar21;
                  }

                  if (*(long*)( this + 0x20 ) != 0) {
                     *(undefined8*)( this + 0x18 ) = *(undefined8*)( *(long*)( this + 0x18 ) + 0x30 );
                  }

                  lVar16 = lVar16 + 1;
               }
 while ( lVar16 != lVar12 );
            }

            uVar26 = *(ulong*)( this + 0x10 );
            uVar25 = 0;
            uVar17 = uVar26;
            if (uVar26 != 0) {
               while (true) {
                  pTVar23 = *(TMMVertex**)( this + 8 );
                  if (*(int*)( pTVar23 + 0x18 ) == 0x7fffffff) {
                     if (uVar17 < 2) {
                        if (uVar17 == 1) {
                           VHACD::TMMVertex::~TMMVertex(pTVar23);
                           operator_delete(pTVar23, 0x48);
                           *(long*)( this + 0x10 ) = *(long*)( this + 0x10 ) + -1;
                           *(undefined8*)( this + 8 ) = 0;
                        }

                     }
 else {
                        lVar12 = *(long*)( pTVar23 + 0x38 );
                        lVar16 = *(long*)( pTVar23 + 0x40 );
                        VHACD::TMMVertex::~TMMVertex(pTVar23);
                        operator_delete(pTVar23, 0x48);
                        *(long*)( this + 0x10 ) = *(long*)( this + 0x10 ) + -1;
                        *(long*)( this + 8 ) = lVar12;
                        *(long*)( lVar12 + 0x40 ) = lVar16;
                        *(long*)( lVar16 + 0x38 ) = lVar12;
                     }

                  }
 else {
                     pTVar23[0x31] = (TMMVertex)0x0;
                     if (uVar17 != 0) {
                        *(undefined8*)( this + 8 ) = *(undefined8*)( pTVar23 + 0x38 );
                     }

                  }

                  uVar25 = uVar25 + 1;
                  if (uVar25 == uVar26) break;
                  uVar17 = *(ulong*)( this + 0x10 );
               }
;
            }

            CleanEdges(this);
            CleanTriangles(this);
            if (uVar18 != 0) {
               lVar12 = *(long*)( this + 0x30 );
               puVar9 = local_258;
               if (uStack_48 != 0x40) {
                  puVar9 = puVar11;
               }

               uVar26 = 0;
               do {
                  if (lVar12 == 0) {
                     pTVar13 = (TMMTriangle*)operator_new(0x50);
                     VHACD::TMMTriangle::TMMTriangle(pTVar13);
                     *(TMMTriangle**)( this + 0x28 ) = pTVar13;
                     *(TMMTriangle**)( pTVar13 + 0x40 ) = pTVar13;
                     *(TMMTriangle**)( pTVar13 + 0x48 ) = pTVar13;
                  }
 else {
                     lVar12 = *(long*)( this + 0x28 );
                     lVar16 = *(long*)( lVar12 + 0x40 );
                     pTVar13 = (TMMTriangle*)operator_new(0x50);
                     VHACD::TMMTriangle::TMMTriangle(pTVar13);
                     *(TMMTriangle**)( this + 0x28 ) = pTVar13;
                     *(long*)( pTVar13 + 0x40 ) = lVar16;
                     *(long*)( pTVar13 + 0x48 ) = lVar12;
                     *(TMMTriangle**)( lVar12 + 0x40 ) = pTVar13;
                     *(TMMTriangle**)( lVar16 + 0x48 ) = pTVar13;
                     pTVar13 = *(TMMTriangle**)( this + 0x28 );
                  }

                  lVar16 = *(long*)( puVar9 + uVar26 * 8 );
                  uVar26 = uVar26 + 1;
                  uVar8 = *(undefined8*)( lVar16 + 0x28 );
                  lVar12 = *(long*)( this + 0x30 ) + 1;
                  *(long*)( this + 0x30 ) = lVar12;
                  *(undefined8*)( pTVar13 + 0x20 ) = uVar8;
                  uVar8 = *(undefined8*)( lVar16 + 0x30 );
                  *(undefined8*)( pTVar13 + 0x28 ) = *(undefined8*)( lVar16 + 0x20 );
                  *(undefined8*)( pTVar13 + 0x30 ) = uVar8;
               }
 while ( uVar26 != uVar18 );
            }

            if (puVar11 != (undefined1*)0x0) {
               operator_delete__(puVar11);
            }

         }

         uVar8 = 0;
      }

   }

   goto LAB_0010269f;
   while (true) {
      pTVar23 = *(TMMVertex**)( pTVar23 + 0x38 );
      lVar16 = lVar16 + 1;
      *(TMMVertex**)( this + 8 ) = pTVar23;
      if (lVar16 == lVar12) break;
      LAB_001030a0:if (*(int*)( pTVar23 + 0x18 ) == 0x7fffffff) {
         if (lVar12 == 1) {
            VHACD::TMMVertex::~TMMVertex(pTVar23);
            operator_delete(pTVar23, 0x48);
            *(long*)( this + 0x10 ) = *(long*)( this + 0x10 ) + -1;
            *(undefined8*)( this + 8 ) = 0;
         }
 else {
            lVar12 = *(long*)( pTVar23 + 0x38 );
            lVar16 = *(long*)( pTVar23 + 0x40 );
            VHACD::TMMVertex::~TMMVertex(pTVar23);
            operator_delete(pTVar23, 0x48);
            *(long*)( this + 0x10 ) = *(long*)( this + 0x10 ) + -1;
            *(long*)( this + 8 ) = lVar12;
            *(long*)( lVar12 + 0x40 ) = lVar16;
            *(long*)( lVar16 + 0x38 ) = lVar12;
         }

         break;
      }

   }
;
   LAB_001030cf:uVar8 = 3;
   LAB_0010269f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar8;
}
/* VHACD::ICHull::Clear() */void VHACD::ICHull::Clear(ICHull *this) {
   VHACD::TMMesh::Clear();
   this[0x698] = (ICHull)0x0;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 536*i + 576 ) ) = 0;
   }

   return;
}
/* VHACD::ICHull::TEMPNAMEPLACEHOLDERVALUE(VHACD::ICHull&) */ICHull * __thiscall VHACD::ICHull::operator=(ICHull *this,ICHull *param_1){
   void *pvVar1;
   ulong uVar2;
   ICHull *pIVar3;
   ulong uVar4;
   ICHull *pIVar5;
   if (param_1 != this) {
      VHACD::TMMesh::Copy((TMMesh*)this);
      for (int i = 0; i < 3; i++) {
         uVar4 = *(ulong*)( this + ( 536*i + 584 ) );
         uVar2 = *(ulong*)( param_1 + ( 536*i + 576 ) );
         if (uVar4 < uVar2) {
            if (*(void**)( this + ( 536*i + 568 ) ) != (void*)0) {
               operator_delete__(*(void**)( this + ( 536*i + 568 ) ));
            }

            uVar2 = *(ulong*)( param_1 + ( 536*i + 584 ) );
            *(ulong*)( this + ( 536*i + 584 ) ) = uVar2;
            uVar4 = uVar2 * 8;
            if (1152921504606846975 < uVar2) {
               uVar4 = 18446744073709551615;
            }

            pvVar1 = operator_new__(uVar4);
            uVar2 = *(ulong*)( param_1 + ( 536*i + 576 ) );
            *(void**)( this + ( 536*i + 568 ) ) = pvVar1;
            uVar4 = *(ulong*)( this + ( 536*i + 584 ) );
         }

         *(ulong*)( this + ( 536*i + 576 ) ) = uVar2;
         pIVar3 = param_1 + ( 536*i + 56 );
         if (*(long*)( param_1 + ( 536*i + 584 ) ) != 64) {
            pIVar3 = *(ICHull**)( param_1 + ( 536*i + 568 ) );
         }

         pIVar5 = this + ( 536*i + 56 );
         if (uVar4 != 64) {
            pIVar5 = *(ICHull**)( this + ( 536*i + 568 ) );
         }

         memcpy(pIVar5, pIVar3, uVar2 << 3);
      }

      this[0x698] = param_1[0x698];
   }

   return this;
}
/* VHACD::ICHull::IsInside(VHACD::Vec3<double> const&, double) */undefined8 VHACD::ICHull::IsInside(ICHull *this, Vec3 *param_1, double param_2) {
   double dVar1;
   double dVar2;
   double dVar3;
   double dVar4;
   double dVar5;
   long lVar6;
   double *pdVar7;
   double *pdVar8;
   double *pdVar9;
   double dVar10;
   long lVar11;
   long lVar12;
   double dVar13;
   double dVar14;
   dVar10 = _LC5;
   dVar1 = *(double*)( param_1 + 0x10 );
   dVar2 = *(double*)( param_1 + 8 );
   dVar3 = *(double*)param_1;
   lVar6 = *(long*)( this + 0x30 );
   if (this[0x698] == (ICHull)0x0) {
      if (lVar6 != 0) {
         lVar11 = *(long*)( this + 0x28 );
         lVar12 = 0;
         do {
            pdVar7 = *(double**)( lVar11 + 0x30 );
            pdVar8 = *(double**)( lVar11 + 0x28 );
            pdVar9 = *(double**)( lVar11 + 0x20 );
            if (( ( pdVar8[2] - dVar1 ) * ( *pdVar7 - dVar3 ) - ( pdVar7[2] - dVar1 ) * ( *pdVar8 - dVar3 ) ) * ( pdVar9[1] - dVar2 ) + ( ( pdVar7[2] - dVar1 ) * ( pdVar8[1] - dVar2 ) - ( pdVar7[1] - dVar2 ) * ( pdVar8[2] - dVar1 ) ) * ( *pdVar9 - dVar3 ) + ( ( pdVar7[1] - dVar2 ) * ( *pdVar8 - dVar3 ) - ( *pdVar7 - dVar3 ) * ( pdVar8[1] - dVar2 ) ) * ( pdVar9[2] - dVar1 ) < param_2) {
               return 0;
            }

            lVar11 = *(long*)( lVar11 + 0x40 );
            lVar12 = lVar12 + 1;
            *(long*)( this + 0x28 ) = lVar11;
         }
 while ( lVar12 != lVar6 );
      }

      return 1;
   }

   if (lVar6 != 0) {
      lVar11 = *(long*)( this + 0x28 );
      lVar12 = 0;
      do {
         pdVar7 = *(double**)( lVar11 + 0x20 );
         pdVar8 = *(double**)( lVar11 + 0x30 );
         dVar14 = *pdVar7;
         dVar4 = pdVar7[1];
         dVar5 = pdVar7[2];
         pdVar7 = *(double**)( lVar11 + 0x28 );
         dVar13 = ( *pdVar7 - dVar14 ) * ( dVar3 - dVar14 ) + ( pdVar7[1] - dVar4 ) * ( dVar2 - dVar4 ) + ( pdVar7[2] - dVar5 ) * ( dVar1 - dVar5 );
         if (( ( ( 0.0 <= dVar13 ) && ( dVar13 <= dVar10 ) ) && ( dVar14 = ( pdVar8[1] - dVar4 ) * ( dVar2 - dVar4 ) + ( *pdVar8 - dVar14 ) * ( dVar3 - dVar14 ) + ( pdVar8[2] - dVar5 ) * ( dVar1 - dVar5 ) ),0.0 <= dVar14 )) {
            return 1;
         }

         lVar11 = *(long*)( lVar11 + 0x40 );
         lVar12 = lVar12 + 1;
         *(long*)( this + 0x28 ) = lVar11;
      }
 while ( lVar12 != lVar6 );
   }

   return 0;
}


/* JPH::ConvexHullShape::GetMassProperties() const */void JPH::ConvexHullShape::GetMassProperties(void) {
   float *pfVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   long lVar6;
   long in_RSI;
   float *in_RDI;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   undefined8 uStack_30;
   undefined8 local_28;
   undefined8 uStack_20;
   long local_10;
   fVar2 = *(float*)( in_RSI + 0x28 );
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar6 = 0;
   *in_RDI = *(float*)( in_RSI + 0x104 ) * fVar2;
   do {
      pfVar1 = (float*)( in_RSI + 0x40 + lVar6 );
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      *(float*)( (long)&local_58 + lVar6 ) = *pfVar1 * fVar2;
      *(float*)( (long)&local_58 + lVar6 + 4 ) = fVar3 * fVar2;
      *(float*)( (long)&uStack_50 + lVar6 ) = fVar4 * fVar2;
      *(float*)( (long)&uStack_50 + lVar6 + 4 ) = fVar5 * fVar2;
      lVar6 = lVar6 + 0x10;
   }
 while ( lVar6 != 0x40 );
   *(undefined8*)( in_RDI + 0x10 ) = local_28;
   *(undefined8*)( in_RDI + 0x12 ) = uStack_20;
   in_RDI[0x13] = 1.0;
   *(undefined8*)( in_RDI + 4 ) = local_58;
   *(undefined8*)( in_RDI + 6 ) = uStack_50;
   *(undefined8*)( in_RDI + 8 ) = local_48;
   *(undefined8*)( in_RDI + 10 ) = uStack_40;
   *(undefined8*)( in_RDI + 0xc ) = local_38;
   *(undefined8*)( in_RDI + 0xe ) = uStack_30;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::ConvexHullShape::GetTrianglesNext(JPH::Shape::GetTrianglesContext&, int, JPH::Float3*,
   JPH::PhysicsMaterial const**) const */int JPH::ConvexHullShape::GetTrianglesNext(ConvexHullShape *this, GetTrianglesContext *param_1, int param_2, Float3 *param_3, PhysicsMaterial **param_4) {
   ushort *puVar1;
   float *pfVar2;
   PhysicsMaterial **ppPVar3;
   GetTrianglesContext GVar4;
   ushort uVar5;
   ulong uVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   float fVar10;
   float fVar11;
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
   PhysicsMaterial *pPVar24;
   Float3 *pFVar25;
   int iVar26;
   byte *pbVar27;
   byte *pbVar28;
   int iVar29;
   byte *pbVar30;
   PhysicsMaterial **ppPVar31;
   PhysicsMaterial **ppPVar32;
   byte *pbVar33;
   ulong uVar34;
   int iVar35;
   float fVar36;
   float fVar37;
   float fVar38;
   float fVar39;
   float fVar40;
   float fVar41;
   float fVar42;
   float fVar43;
   float fVar44;
   uVar34 = *(ulong*)( param_1 + 0x48 );
   uVar6 = *(ulong*)( this + 0xb8 );
   if (uVar34 < uVar6) {
      lVar7 = *(long*)( this + 200 );
      lVar8 = *(long*)( this + 0xf8 );
      puVar1 = (ushort*)( lVar7 + uVar34 * 4 );
      uVar5 = puVar1[1];
      pbVar33 = (byte*)( ( ulong ) * puVar1 + lVar8 );
      iVar26 = uVar5 - 2;
      pbVar30 = pbVar33 + uVar5;
      iVar35 = param_2 - iVar26;
      if (-1 < iVar35) {
         iVar29 = 0;
         GVar4 = param_1[0x40];
         lVar9 = *(long*)( this + 0xb0 );
         do {
            uVar34 = uVar34 + 1;
            iVar29 = iVar29 + iVar26;
            fVar10 = *(float*)param_1;
            fVar11 = *(float*)( param_1 + 4 );
            fVar12 = *(float*)( param_1 + 8 );
            pFVar25 = param_3 + 0x24;
            fVar13 = *(float*)( param_1 + 0x10 );
            fVar14 = *(float*)( param_1 + 0x14 );
            fVar15 = *(float*)( param_1 + 0x18 );
            fVar16 = *(float*)( param_1 + 0x20 );
            fVar17 = *(float*)( param_1 + 0x24 );
            fVar18 = *(float*)( param_1 + 0x28 );
            fVar36 = *(float*)( param_1 + 0x30 );
            fVar37 = *(float*)( param_1 + 0x34 );
            fVar38 = *(float*)( param_1 + 0x38 );
            pfVar2 = (float*)( lVar9 + ( ulong ) * pbVar33 * 0x20 );
            fVar19 = *pfVar2;
            fVar20 = pfVar2[1];
            fVar21 = pfVar2[2];
            pfVar2 = (float*)( lVar9 + (ulong)pbVar33[1] * 0x20 );
            fVar44 = *pfVar2;
            fVar22 = pfVar2[1];
            fVar23 = pfVar2[2];
            fVar39 = fVar19 * fVar10 + fVar20 * fVar13 + fVar21 * fVar16 + fVar36;
            fVar40 = fVar19 * fVar11 + fVar20 * fVar14 + fVar21 * fVar17 + fVar37;
            fVar41 = fVar19 * fVar12 + fVar20 * fVar15 + fVar21 * fVar18 + fVar38;
            pfVar2 = (float*)( lVar9 + (ulong)pbVar33[2] * 0x20 );
            fVar19 = *pfVar2;
            fVar20 = pfVar2[1];
            fVar21 = pfVar2[2];
            *(ulong*)param_3 = CONCAT44(fVar40, fVar39);
            *(float*)( param_3 + 8 ) = fVar41;
            pbVar28 = pbVar33 + 3;
            fVar42 = fVar44 * fVar10 + fVar22 * fVar13 + fVar23 * fVar16 + fVar36;
            fVar43 = fVar44 * fVar11 + fVar22 * fVar14 + fVar23 * fVar17 + fVar37;
            fVar44 = fVar44 * fVar12 + fVar22 * fVar15 + fVar23 * fVar18 + fVar38;
            fVar36 = fVar19 * fVar10 + fVar13 * fVar20 + fVar21 * fVar16 + fVar36;
            fVar37 = fVar19 * fVar11 + fVar14 * fVar20 + fVar21 * fVar17 + fVar37;
            fVar38 = fVar19 * fVar12 + fVar15 * fVar20 + fVar21 * fVar18 + fVar38;
            if (GVar4 == (GetTrianglesContext)0x0) {
               *(ulong*)( param_3 + 0x1c ) = CONCAT44(fVar38, fVar37);
               *(float*)( param_3 + 0xc ) = fVar42;
               *(float*)( param_3 + 0x10 ) = fVar43;
               *(float*)( param_3 + 0x14 ) = fVar44;
               *(float*)( param_3 + 0x18 ) = fVar36;
               if (pbVar28 < pbVar30) {
                  do {
                     *(float*)pFVar25 = fVar39;
                     pbVar27 = pbVar28 + 1;
                     *(float*)( pFVar25 + 4 ) = fVar40;
                     *(float*)( pFVar25 + 8 ) = fVar41;
                     pfVar2 = (float*)( lVar9 + (ulong)pbVar28[-1] * 0x20 );
                     fVar10 = *pfVar2;
                     fVar11 = pfVar2[1];
                     fVar12 = pfVar2[2];
                     fVar13 = *(float*)( param_1 + 4 );
                     fVar14 = *(float*)( param_1 + 8 );
                     fVar15 = *(float*)( param_1 + 0x14 );
                     fVar16 = *(float*)( param_1 + 0x18 );
                     fVar17 = *(float*)( param_1 + 0x24 );
                     fVar18 = *(float*)( param_1 + 0x28 );
                     fVar36 = *(float*)( param_1 + 0x34 );
                     fVar37 = *(float*)( param_1 + 0x38 );
                     *(float*)( pFVar25 + 0xc ) = fVar10 * *(float*)param_1 + fVar11 * *(float*)( param_1 + 0x10 ) + fVar12 * *(float*)( param_1 + 0x20 ) + *(float*)( param_1 + 0x30 );
                     *(float*)( pFVar25 + 0x10 ) = fVar10 * fVar13 + fVar11 * fVar15 + fVar12 * fVar17 + fVar36;
                     *(float*)( pFVar25 + 0x14 ) = fVar10 * fVar14 + fVar11 * fVar16 + fVar12 * fVar18 + fVar37;
                     pfVar2 = (float*)( lVar9 + ( ulong ) * pbVar28 * 0x20 );
                     fVar10 = *pfVar2;
                     fVar11 = pfVar2[1];
                     fVar12 = pfVar2[2];
                     fVar13 = *(float*)( param_1 + 4 );
                     fVar14 = *(float*)( param_1 + 8 );
                     fVar15 = *(float*)( param_1 + 0x14 );
                     fVar16 = *(float*)( param_1 + 0x18 );
                     fVar17 = *(float*)( param_1 + 0x24 );
                     fVar18 = *(float*)( param_1 + 0x28 );
                     fVar36 = *(float*)( param_1 + 0x34 );
                     fVar37 = *(float*)( param_1 + 0x38 );
                     *(float*)( pFVar25 + 0x18 ) = fVar10 * *(float*)param_1 + fVar11 * *(float*)( param_1 + 0x10 ) + fVar12 * *(float*)( param_1 + 0x20 ) + *(float*)( param_1 + 0x30 );
                     *(float*)( pFVar25 + 0x1c ) = fVar10 * fVar13 + fVar11 * fVar15 + fVar12 * fVar17 + fVar36;
                     *(float*)( pFVar25 + 0x20 ) = fVar10 * fVar14 + fVar11 * fVar16 + fVar12 * fVar18 + fVar37;
                     pFVar25 = pFVar25 + 0x24;
                     pbVar28 = pbVar27;
                  }
 while ( pbVar27 != pbVar30 );
                  goto LAB_001002db;
               }

            }
 else {
               *(ulong*)( param_3 + 0x1c ) = CONCAT44(fVar44, fVar43);
               *(float*)( param_3 + 0xc ) = fVar36;
               *(float*)( param_3 + 0x10 ) = fVar37;
               *(float*)( param_3 + 0x14 ) = fVar38;
               *(float*)( param_3 + 0x18 ) = fVar42;
               if (pbVar28 < pbVar30) {
                  do {
                     *(float*)pFVar25 = fVar39;
                     pbVar27 = pbVar28 + 1;
                     *(float*)( pFVar25 + 4 ) = fVar40;
                     *(float*)( pFVar25 + 8 ) = fVar41;
                     pfVar2 = (float*)( lVar9 + ( ulong ) * pbVar28 * 0x20 );
                     fVar10 = *pfVar2;
                     fVar11 = pfVar2[1];
                     fVar12 = pfVar2[2];
                     fVar13 = *(float*)( param_1 + 4 );
                     fVar14 = *(float*)( param_1 + 8 );
                     fVar15 = *(float*)( param_1 + 0x14 );
                     fVar16 = *(float*)( param_1 + 0x18 );
                     fVar17 = *(float*)( param_1 + 0x24 );
                     fVar18 = *(float*)( param_1 + 0x28 );
                     fVar36 = *(float*)( param_1 + 0x34 );
                     fVar37 = *(float*)( param_1 + 0x38 );
                     *(float*)( pFVar25 + 0xc ) = fVar10 * *(float*)param_1 + fVar11 * *(float*)( param_1 + 0x10 ) + fVar12 * *(float*)( param_1 + 0x20 ) + *(float*)( param_1 + 0x30 );
                     *(float*)( pFVar25 + 0x10 ) = fVar10 * fVar13 + fVar11 * fVar15 + fVar12 * fVar17 + fVar36;
                     *(float*)( pFVar25 + 0x14 ) = fVar10 * fVar14 + fVar11 * fVar16 + fVar12 * fVar18 + fVar37;
                     pfVar2 = (float*)( lVar9 + (ulong)pbVar28[-1] * 0x20 );
                     fVar10 = *pfVar2;
                     fVar11 = pfVar2[1];
                     fVar12 = pfVar2[2];
                     fVar13 = *(float*)( param_1 + 4 );
                     fVar14 = *(float*)( param_1 + 8 );
                     fVar15 = *(float*)( param_1 + 0x14 );
                     fVar16 = *(float*)( param_1 + 0x18 );
                     fVar17 = *(float*)( param_1 + 0x24 );
                     fVar18 = *(float*)( param_1 + 0x28 );
                     fVar36 = *(float*)( param_1 + 0x34 );
                     fVar37 = *(float*)( param_1 + 0x38 );
                     *(float*)( pFVar25 + 0x18 ) = fVar10 * *(float*)param_1 + fVar11 * *(float*)( param_1 + 0x10 ) + fVar12 * *(float*)( param_1 + 0x20 ) + *(float*)( param_1 + 0x30 );
                     *(float*)( pFVar25 + 0x1c ) = fVar10 * fVar13 + fVar11 * fVar15 + fVar12 * fVar17 + fVar36;
                     *(float*)( pFVar25 + 0x20 ) = fVar10 * fVar14 + fVar11 * fVar16 + fVar12 * fVar18 + fVar37;
                     pFVar25 = pFVar25 + 0x24;
                     pbVar28 = pbVar27;
                  }
 while ( pbVar27 != pbVar30 );
                  LAB_001002db:pFVar25 = param_3 + ( (long)pbVar27 - (long)pbVar33 ) * 0x24 + -0x48;
               }

            }

            *(ulong*)( param_1 + 0x48 ) = uVar34;
            if (uVar6 == uVar34) break;
            uVar5 = *(ushort*)( lVar7 + 2 + uVar34 * 4 );
            pbVar33 = (byte*)( ( ulong ) * (ushort*)( lVar7 + uVar34 * 4 ) + lVar8 );
            iVar26 = uVar5 - 2;
            pbVar30 = pbVar33 + uVar5;
            iVar35 = iVar35 - iVar26;
            param_3 = pFVar25;
         }
 while ( -1 < iVar35 );
         goto LAB_0010031e;
      }

   }

   iVar29 = 0;
   LAB_0010031e:if (param_4 != (PhysicsMaterial**)0x0) {
      ppPVar3 = param_4 + iVar29;
      pPVar24 = *(PhysicsMaterial**)( this + 0x20 );
      if (*(PhysicsMaterial**)( this + 0x20 ) == (PhysicsMaterial*)0x0) {
         pPVar24 = PhysicsMaterial::sDefault;
      }

      if (param_4 < ppPVar3) {
         *param_4 = pPVar24;
         ppPVar31 = param_4 + 1;
         if (ppPVar31 < ppPVar3) {
            if (( ~(ulong)param_4 + (long)ppPVar3 >> 3 & 1 ) != 0) {
               *ppPVar31 = pPVar24;
               ppPVar31 = param_4 + 2;
               if (ppPVar3 <= ppPVar31) {
                  return iVar29;
               }

            }

            do {
               *ppPVar31 = pPVar24;
               ppPVar32 = ppPVar31 + 2;
               ppPVar31[1] = pPVar24;
               ppPVar31 = ppPVar32;
            }
 while ( ppPVar32 < ppPVar3 );
         }

      }

   }

   return iVar29;
}
/* JPH::ConvexHullShape::GetStats() const */undefined1[16];JPH::ConvexHullShape::GetStats (ConvexHullShape *this) {
   ushort *puVar1;
   long lVar2;
   long lVar3;
   ulong uVar4;
   undefined1 auVar5[16];
   lVar3 = *(long*)( this + 200 );
   lVar2 = lVar3 + *(long*)( this + 0xb8 ) * 4;
   if (lVar3 == lVar2) {
      uVar4 = 0;
   }
 else {
      uVar4 = 0;
      do {
         puVar1 = (ushort*)( lVar3 + 2 );
         lVar3 = lVar3 + 4;
         uVar4 = ( ulong )((int)uVar4 + -2 + ( uint ) * puVar1);
      }
 while ( lVar2 != lVar3 );
   }

   auVar5._8_8_ = uVar4;
   auVar5._0_8_ = *(long*)( this + 0xe8 ) + ( *(long*)( this + 0xb8 ) + ( *(long*)( this + 0xd0 ) + 0x12 + *(long*)( this + 0xa0 ) * 2 ) * 4 ) * 4;
   return auVar5;
}
/* JPH::ConvexHullShapeSettings::sCreateRTTI(JPH::RTTI&) */void JPH::ConvexHullShapeSettings::sCreateRTTI(RTTI *param_1) {
   int iVar1;
   iVar1 = JPH::GetRTTIOfType((ConvexShapeSettings*)0x0);
   JPH::RTTI::AddBaseClass(param_1, iVar1);
   return;
}
/* JPH::ConvexHullShape::SaveBinaryState(JPH::StreamOut&) const */void JPH::ConvexHullShape::SaveBinaryState(ConvexHullShape *this, StreamOut *param_1) {
   char cVar1;
   long in_FS_OFFSET;
   uint local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   JPH::ConvexShape::SaveBinaryState((StreamOut*)this);
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x30, 0xc);
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x40, 0x40);
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x80, 0xc);
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x90, 0xc);
   local_24 = ( uint ) * (undefined8*)( this + 0xa0 );
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_24, 4);
   cVar1 = ( **(code**)( *(long*)param_1 + 0x18 ) )(param_1);
   if (cVar1 == '\0') {
      ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, *(undefined8*)( this + 0xb0 ), (ulong)local_24 << 5);
   }

   local_24 = ( uint ) * (undefined8*)( this + 0xb8 );
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_24, 4);
   cVar1 = ( **(code**)( *(long*)param_1 + 0x18 ) )(param_1);
   if (cVar1 == '\0') {
      ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, *(undefined8*)( this + 200 ), (ulong)local_24 << 2);
   }

   local_24 = ( uint ) * (undefined8*)( this + 0xd0 );
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_24, 4);
   cVar1 = ( **(code**)( *(long*)param_1 + 0x18 ) )(param_1);
   if (cVar1 == '\0') {
      ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, *(undefined8*)( this + 0xe0 ), (ulong)local_24 << 4);
   }

   local_24 = ( uint ) * (undefined8*)( this + 0xe8 );
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_24, 4);
   cVar1 = ( **(code**)( *(long*)param_1 + 0x18 ) )(param_1);
   if (cVar1 == '\0') {
      ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, *(undefined8*)( this + 0xf8 ), local_24);
   }

   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x100, 4);
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x104, 4);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x001006e2. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x108, 4);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::ConvexHullShape::RestoreBinaryState(JPH::StreamIn&) */void JPH::ConvexHullShape::RestoreBinaryState(ConvexHullShape *this, StreamIn *param_1) {
   undefined8 uVar1;
   char cVar2;
   ulong uVar3;
   ulong uVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   ulong uVar8;
   long lVar9;
   ulong uVar10;
   long in_FS_OFFSET;
   uint local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   JPH::ConvexShape::RestoreBinaryState((StreamIn*)this);
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x30, 0xc);
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x40, 0x40);
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x80, 0xc);
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x90, 0xc);
   local_34 = ( uint ) * (undefined8*)( this + 0xa0 );
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_34, 4);
   cVar2 = ( **(code**)( *(long*)param_1 + 0x18 ) )(param_1);
   if (cVar2 == '\0') {
      cVar2 = ( **(code**)( *(long*)param_1 + 0x20 ) )(param_1);
      if (cVar2 != '\0') goto LAB_001007a8;
      uVar8 = (ulong)local_34;
      lVar7 = *(long*)( this + 0xb0 );
      lVar9 = uVar8 * 0x20;
      lVar6 = lVar9;
      if (*(ulong*)( this + 0xa8 ) < uVar8) {
         lVar7 = ( *Reallocate )(lVar7, *(ulong*)( this + 0xa8 ) << 5, lVar9);
         *(ulong*)( this + 0xa8 ) = uVar8;
         *(long*)( this + 0xb0 ) = lVar7;
         lVar6 = (ulong)local_34 << 5;
      }

      uVar1 = _LC96;
      uVar5 = __LC3;
      uVar10 = lVar7 + lVar9;
      uVar4 = *(long*)( this + 0xa0 ) * 0x20 + lVar7;
      if (uVar4 < uVar10) {
         *(undefined8*)( uVar4 + 0x10 ) = __LC3;
         *(undefined8*)( uVar4 + 0x18 ) = uVar1;
         if (uVar4 + 0x20 < uVar10) {
            uVar3 = uVar4 + 0x20;
            if (( ~uVar4 + uVar10 >> 5 & 1 ) != 0) {
               *(undefined8*)( uVar4 + 0x30 ) = uVar5;
               *(undefined8*)( uVar4 + 0x38 ) = uVar1;
               uVar3 = uVar4 + 0x40;
               if (uVar10 <= uVar4 + 0x40) goto LAB_00100a91;
            }

            do {
               *(undefined8*)( uVar3 + 0x10 ) = uVar5;
               *(undefined8*)( uVar3 + 0x18 ) = uVar1;
               uVar4 = uVar3 + 0x40;
               *(undefined8*)( uVar3 + 0x30 ) = uVar5;
               *(undefined8*)( uVar3 + 0x38 ) = uVar1;
               uVar3 = uVar4;
            }
 while ( uVar4 < uVar10 );
         }

      }

      LAB_00100a91:lVar9 = *(long*)param_1;
      *(ulong*)( this + 0xa0 ) = uVar8;
      ( **(code**)( lVar9 + 0x10 ) )(param_1, lVar7, lVar6);
   }
 else {
      LAB_001007a8:*(undefined8*)( this + 0xa0 ) = 0;
   }

   local_34 = ( uint ) * (undefined8*)( this + 0xb8 );
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_34, 4);
   cVar2 = ( **(code**)( *(long*)param_1 + 0x18 ) )(param_1);
   if (cVar2 == '\0') {
      cVar2 = ( **(code**)( *(long*)param_1 + 0x20 ) )(param_1);
      if (cVar2 != '\0') goto LAB_001007ed;
      uVar8 = (ulong)local_34;
      lVar6 = *(long*)( this + 200 );
      lVar7 = uVar8 * 4;
      lVar9 = lVar7;
      if (*(ulong*)( this + 0xc0 ) < uVar8) {
         lVar6 = ( *Reallocate )(lVar6, *(ulong*)( this + 0xc0 ) << 2, lVar7);
         *(ulong*)( this + 0xc0 ) = uVar8;
         *(long*)( this + 200 ) = lVar6;
         lVar9 = (ulong)local_34 << 2;
      }

      uVar10 = lVar6 + lVar7;
      uVar4 = lVar6 + *(long*)( this + 0xb8 ) * 4;
      if (uVar4 < uVar10) {
         *(undefined2*)( uVar4 + 2 ) = 0;
         if (uVar4 + 4 < uVar10) {
            uVar3 = uVar4 + 4;
            if (( ~uVar4 + uVar10 >> 2 & 1 ) != 0) {
               *(undefined2*)( uVar4 + 6 ) = 0;
               uVar3 = uVar4 + 8;
               if (uVar10 <= uVar4 + 8) goto LAB_001009e7;
            }

            do {
               uVar4 = uVar3 + 8;
               *(undefined2*)( uVar3 + 2 ) = 0;
               *(undefined2*)( uVar3 + 6 ) = 0;
               uVar3 = uVar4;
            }
 while ( uVar4 < uVar10 );
         }

      }

      LAB_001009e7:lVar7 = *(long*)param_1;
      *(ulong*)( this + 0xb8 ) = uVar8;
      ( **(code**)( lVar7 + 0x10 ) )(param_1, lVar6, lVar9);
   }
 else {
      LAB_001007ed:*(undefined8*)( this + 0xb8 ) = 0;
   }

   local_34 = ( uint ) * (undefined8*)( this + 0xd0 );
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_34, 4);
   cVar2 = ( **(code**)( *(long*)param_1 + 0x18 ) )(param_1);
   if (cVar2 == '\0') {
      cVar2 = ( **(code**)( *(long*)param_1 + 0x20 ) )(param_1);
      if (cVar2 != '\0') goto LAB_00100832;
      uVar10 = (ulong)local_34;
      uVar5 = *(undefined8*)( this + 0xe0 );
      uVar8 = uVar10;
      if (*(ulong*)( this + 0xd8 ) < uVar10) {
         uVar5 = ( *Reallocate )(uVar5, *(ulong*)( this + 0xd8 ) << 4, uVar10 << 4);
         *(ulong*)( this + 0xd8 ) = uVar10;
         uVar8 = (ulong)local_34;
         *(undefined8*)( this + 0xe0 ) = uVar5;
      }

      lVar7 = *(long*)param_1;
      *(ulong*)( this + 0xd0 ) = uVar10;
      ( **(code**)( lVar7 + 0x10 ) )(param_1, uVar5, uVar8 << 4);
   }
 else {
      LAB_00100832:*(undefined8*)( this + 0xd0 ) = 0;
   }

   local_34 = ( uint ) * (undefined8*)( this + 0xe8 );
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_34, 4);
   cVar2 = ( **(code**)( *(long*)param_1 + 0x18 ) )(param_1);
   if (cVar2 == '\0') {
      cVar2 = ( **(code**)( *(long*)param_1 + 0x20 ) )(param_1);
      if (cVar2 == '\0') {
         uVar10 = (ulong)local_34;
         uVar5 = *(undefined8*)( this + 0xf8 );
         uVar8 = uVar10;
         if (*(ulong*)( this + 0xf0 ) < uVar10) {
            uVar5 = ( *Reallocate )(uVar5, *(ulong*)( this + 0xf0 ), uVar10);
            *(ulong*)( this + 0xf0 ) = uVar10;
            uVar8 = (ulong)local_34;
            *(undefined8*)( this + 0xf8 ) = uVar5;
         }

         lVar7 = *(long*)param_1;
         *(ulong*)( this + 0xe8 ) = uVar10;
         ( **(code**)( lVar7 + 0x10 ) )(param_1, uVar5, uVar8);
         goto LAB_0010087e;
      }

   }

   *(undefined8*)( this + 0xe8 ) = 0;
   LAB_0010087e:( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x100, 4);
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x104, 4);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x001008de. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x108, 4);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::ConvexHullShape::GetTrianglesStart(JPH::Shape::GetTrianglesContext&, JPH::AABox const&,
   JPH::Vec3, JPH::Quat, JPH::Vec3) const */void JPH::ConvexHullShape::GetTrianglesStart(undefined8 param_1, float param_2_00, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 *param_2) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   long lVar5;
   float fVar6;
   float fVar7;
   undefined4 unaff_EBX;
   undefined4 uVar8;
   long in_FS_OFFSET;
   float fVar9;
   undefined1 auVar10[16];
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float local_a8;
   float fStack_a4;
   float local_98[4];
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   undefined8 uStack_30;
   undefined8 local_28;
   undefined8 uStack_20;
   long local_10;
   fVar7 = (float)( (ulong)param_5 >> 0x20 );
   fVar13 = (float)( (ulong)param_4 >> 0x20 );
   fVar11 = (float)param_4;
   fVar6 = (float)param_3;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   auVar10._4_4_ = -(uint)(fVar7 < 0.0);
   auVar10._0_4_ = -(uint)((float)param_5 < 0.0);
   auVar10._8_4_ = -(uint)((float)param_6 < 0.0);
   auVar10._12_4_ = -(uint)((float)((ulong)param_6 >> 0x20) < 0.0);
   local_98[0] = (float)param_5;
   for (int i = 0; i < 3; i++) {
      local_98[( i + 1 )] = 0;
   }

   uVar8 = movmskps(unaff_EBX, auVar10);
   local_78 = ZEXT416((uint)(float)param_6) << 0x40;
   local_68 = __LC4;
   uStack_60 = CONCAT44(_LC0, _UNK_00109ab8);
   fVar9 = fVar6 + fVar6;
   fVar15 = fVar11 * ( fVar11 + fVar11 );
   local_88 = ZEXT416((uint)fVar7) << 0x20;
   fVar7 = (float)( (ulong)param_3 >> 0x20 );
   fVar14 = fVar7 + fVar7;
   lVar5 = 0;
   fVar12 = fVar13 * ( fVar11 + fVar11 );
   local_a8 = (float)param_1;
   fStack_a4 = (float)( (ulong)param_1 >> 0x20 );
   do {
      fVar1 = *(float*)( (long)local_98 + lVar5 );
      fVar2 = *(float*)( (long)local_98 + lVar5 + 4 );
      fVar3 = *(float*)( (long)local_98 + lVar5 + 8 );
      fVar4 = *(float*)( local_88 + lVar5 + -4 );
      *(float*)( (long)&local_58 + lVar5 ) = fVar4 * local_a8 + fVar1 * ( ( _LC0 - fVar7 * fVar14 ) - fVar15 ) + fVar2 * ( fVar7 * fVar9 - fVar12 ) + fVar3 * ( fVar11 * fVar9 + fVar14 * fVar13 );
      *(float*)( (long)&local_58 + lVar5 + 4 ) = fVar4 * fStack_a4 + fVar1 * ( fVar7 * fVar9 + fVar12 ) + fVar2 * ( ( _LC0 - fVar15 ) - fVar6 * fVar9 ) + fVar3 * ( fVar11 * fVar14 - fVar9 * fVar13 );
      *(float*)( (long)&uStack_50 + lVar5 ) = fVar4 * param_2_00 + fVar1 * ( fVar11 * fVar9 - fVar14 * fVar13 ) + fVar2 * ( fVar11 * fVar14 + fVar9 * fVar13 ) + fVar3 * ( ( _LC0 - fVar6 * fVar9 ) - fVar7 * fVar14 );
      *(float*)( (long)&uStack_50 + lVar5 + 4 ) = fVar4 * 1.0 + fVar1 * 0.0 + fVar2 * 0.0 + fVar3 * 0.0;
      lVar5 = lVar5 + 0x10;
   }
 while ( lVar5 != 0x40 );
   *(bool*)( param_2 + 8 ) = ( POPCOUNT((byte)uVar8 & 7) & 1U ) != 0;
   param_2[9] = 0;
   *param_2 = local_58;
   param_2[1] = uStack_50;
   param_2[2] = local_48;
   param_2[3] = uStack_40;
   param_2[4] = local_38;
   param_2[5] = uStack_30;
   param_2[6] = local_28;
   param_2[7] = uStack_20;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::ConvexHullShape::GetSupportingFace(JPH::SubShapeID const&, JPH::Vec3, JPH::Vec3, JPH::Mat44
   const&, JPH::StaticArray<JPH::Vec3, 32u>&) const */void JPH::ConvexHullShape::GetSupportingFace(undefined8 param_1_00, float param_2, undefined8 param_3, undefined8 param_4, long param_1, undefined8 param_6, float *param_7, uint *param_8) {
   float *pfVar1;
   byte bVar2;
   ushort uVar3;
   float *pfVar4;
   undefined1 auVar5[16];
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   ulong uVar20;
   byte *pbVar21;
   undefined4 uVar22;
   ulong uVar23;
   long lVar24;
   ushort *puVar25;
   int iVar26;
   uint uVar27;
   byte *pbVar28;
   float fVar29;
   float fVar30;
   float fVar31;
   float fVar32;
   float fVar33;
   undefined1 auVar34[16];
   undefined1 auVar35[16];
   float fVar36;
   float fVar37;
   float fVar38;
   fVar30 = (float)( (ulong)param_1_00 >> 0x20 );
   auVar35._8_8_ = param_4;
   auVar35._0_8_ = param_3;
   fVar36 = (float)param_3;
   fVar37 = (float)( (ulong)param_3 >> 0x20 );
   fVar38 = (float)param_4;
   pfVar4 = *(float**)( param_1 + 0xe0 );
   auVar34._4_4_ = _LC0;
   auVar34._0_4_ = _LC0;
   auVar34._8_4_ = _LC0;
   auVar34._12_4_ = _LC0;
   auVar35 = divps(auVar34, auVar35);
   fVar29 = *pfVar4 * auVar35._0_4_;
   fVar31 = pfVar4[1] * auVar35._4_4_;
   fVar32 = pfVar4[2] * auVar35._8_4_;
   fVar29 = ( param_2 * fVar32 + fVar31 * fVar30 + (float)param_1_00 * fVar29 + 0.0 ) / SQRT(fVar32 * fVar32 + fVar31 * fVar31 + fVar29 * fVar29 + 0.0);
   if (*(ulong*)( param_1 + 0xd0 ) < 2) {
      lVar24 = 0;
   }
 else {
      uVar20 = 1;
      uVar23 = 0;
      do {
         pfVar1 = pfVar4 + uVar20 * 4;
         fVar31 = *pfVar1 * auVar35._0_4_;
         fVar32 = pfVar1[1] * auVar35._4_4_;
         fVar33 = pfVar1[2] * auVar35._8_4_;
         fVar31 = ( param_2 * fVar33 + fVar32 * fVar30 + fVar31 * (float)param_1_00 + 0.0 ) / SQRT(fVar33 * fVar33 + fVar32 * fVar32 + fVar31 * fVar31 + 0.0);
         if (fVar31 < fVar29) {
            uVar23 = uVar20 & 0xffffffff;
            fVar29 = fVar31;
         }

         uVar20 = uVar20 + 1;
      }
 while ( uVar20 != *(ulong*)( param_1 + 0xd0 ) );
      lVar24 = (long)(int)uVar23 << 2;
   }

   puVar25 = (ushort*)( lVar24 + *(long*)( param_1 + 200 ) );
   fVar29 = param_7[0xc];
   fVar30 = param_7[0xd];
   fVar31 = param_7[0xe];
   fVar32 = param_7[0xf];
   uVar3 = puVar25[1];
   fVar33 = *param_7;
   fVar6 = param_7[1];
   fVar7 = param_7[2];
   fVar8 = param_7[3];
   pbVar21 = (byte*)( ( ulong ) * puVar25 + *(long*)( param_1 + 0xf8 ) );
   pbVar28 = pbVar21 + uVar3;
   iVar26 = (int)( uVar3 + 0x10 ) >> 4;
   fVar9 = param_7[8];
   fVar10 = param_7[9];
   fVar11 = param_7[10];
   fVar12 = param_7[0xb];
   auVar5._4_4_ = -(uint)(fVar37 < 0.0);
   auVar5._0_4_ = -(uint)(fVar36 < 0.0);
   auVar5._8_4_ = -(uint)(fVar38 < 0.0);
   auVar5._12_4_ = -(uint)((float)((ulong)param_4 >> 0x20) < 0.0);
   uVar22 = movmskps(fVar36, auVar5);
   fVar13 = param_7[4];
   fVar14 = param_7[5];
   fVar15 = param_7[6];
   fVar16 = param_7[7];
   if (( POPCOUNT((byte)uVar22 & 7) & 1U ) == 0) {
      if (pbVar28 <= pbVar21) {
         return;
      }

      lVar24 = *(long*)( param_1 + 0xb0 );
      uVar27 = *param_8;
      do {
         bVar2 = *pbVar21;
         pbVar21 = pbVar21 + iVar26;
         pfVar4 = (float*)( lVar24 + (ulong)bVar2 * 0x20 );
         fVar17 = *pfVar4;
         fVar18 = pfVar4[1];
         fVar19 = pfVar4[2];
         uVar20 = (ulong)uVar27;
         uVar27 = uVar27 + 1;
         *param_8 = uVar27;
         pfVar4 = (float*)( param_8 + uVar20 * 4 + 4 );
         *pfVar4 = fVar19 * fVar38 * fVar9 + fVar17 * fVar36 * fVar33 + fVar18 * fVar37 * fVar13 + fVar29;
         pfVar4[1] = fVar19 * fVar38 * fVar10 + fVar17 * fVar36 * fVar6 + fVar18 * fVar37 * fVar14 + fVar30;
         pfVar4[2] = fVar19 * fVar38 * fVar11 + fVar17 * fVar36 * fVar7 + fVar18 * fVar37 * fVar15 + fVar31;
         pfVar4[3] = fVar19 * fVar38 * fVar12 + fVar17 * fVar36 * fVar8 + fVar18 * fVar37 * fVar16 + fVar32;
      }
 while ( pbVar21 < pbVar28 );
   }
 else {
      pbVar28 = pbVar28 + -1;
      if (pbVar21 <= pbVar28) {
         lVar24 = *(long*)( param_1 + 0xb0 );
         uVar27 = *param_8;
         do {
            bVar2 = *pbVar28;
            pbVar28 = pbVar28 + -(long)iVar26;
            pfVar4 = (float*)( lVar24 + (ulong)bVar2 * 0x20 );
            fVar17 = *pfVar4;
            fVar18 = pfVar4[1];
            fVar19 = pfVar4[2];
            uVar20 = (ulong)uVar27;
            uVar27 = uVar27 + 1;
            *param_8 = uVar27;
            pfVar4 = (float*)( param_8 + uVar20 * 4 + 4 );
            *pfVar4 = fVar19 * fVar38 * fVar9 + fVar17 * fVar36 * fVar33 + fVar18 * fVar37 * fVar13 + fVar29;
            pfVar4[1] = fVar19 * fVar38 * fVar10 + fVar17 * fVar36 * fVar6 + fVar18 * fVar37 * fVar14 + fVar30;
            pfVar4[2] = fVar19 * fVar38 * fVar11 + fVar17 * fVar36 * fVar7 + fVar18 * fVar37 * fVar15 + fVar31;
            pfVar4[3] = fVar19 * fVar38 * fVar12 + fVar17 * fVar36 * fVar8 + fVar18 * fVar37 * fVar16 + fVar32;
         }
 while ( pbVar21 <= pbVar28 );
         return;
      }

   }

   return;
}
/* _FUN() */void JPH::ConvexHullShape::sRegister()::{lambda()#1}::_FUN(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*Allocate)(0x120);
  uVar1 = _LC9;
  *(undefined2 *)(puVar2 + 3) = 0x600;
  *(undefined4 *)(puVar2 + 0x10) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x84) = uVar1;
  *(undefined4 *)(puVar2 + 0x11) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x8c) = uVar1;
  uVar1 = _LC1;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)(puVar2 + 0x12) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x94) = uVar1;
  *(undefined4 *)(puVar2 + 0x13) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x9c) = uVar1;
  puVar2[2] = 0;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 0x447a0000;
  *puVar2 = &PTR__ConvexHullShape_00109890;
  puVar2[0x16] = 0;
  puVar2[0x19] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1f] = 0;
  *(undefined4 *)(puVar2 + 0x20) = 0;
  *(undefined4 *)(puVar2 + 0x21) = 0x7f7fffff;
  puVar2[0x22] = 0;
  *(undefined1 (*) [16])(puVar2 + 0x14) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 0x17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 0x1a) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 0x1d) = (undefined1  [16])0x0;
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::ConvexHullShapeSettings*)::{lambda()#1}::_FUN(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*Allocate)(0x78);
  uVar1 = _LC12;
  *(undefined4 *)(puVar2 + 1) = 0;
  puVar2[2] = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 9) = 0x447a0000;
  *puVar2 = &PTR_GetRTTI_00109858;
  puVar2[0xc] = 0;
  puVar2[0xd] = uVar1;
  *(undefined4 *)(puVar2 + 0xe) = 0x3a83126f;
  *(undefined1 (*) [16])(puVar2 + 10) = (undefined1  [16])0x0;
  return;
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::_M_create(unsigned long&, unsigned long) [clone .isra.0] */

void std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_create
               (ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::_M_create");
  }
  if ((param_2 < uVar1) && (uVar2 = param_2 * 2, uVar1 < uVar2)) {
    if (-1 < (long)uVar2) {
      *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x001011f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*JPH::Allocate)(uVar2 + 1);
      return;
    }
    *param_1 = 0x7fffffffffffffff;
                    /* WARNING: Could not recover jumptable at 0x00101227. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*JPH::Allocate)(0x8000000000000000);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00101204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*JPH::Allocate)(uVar1 + 1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HashTable<int, std::pair<int, unsigned char>, JPH::UnorderedMapDetail<int, unsigned char>,
   JPH::Hash<int>, std::equal_to<int> >::rehash(unsigned int) [clone .isra.0] */

void JPH::
     HashTable<int,std::pair<int,unsigned_char>,JPH::UnorderedMapDetail<int,unsigned_char>,JPH::Hash<int>,std::equal_to<int>>
     ::rehash(uint param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  ushort uVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  long lVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  undefined4 in_register_0000003c;
  long *plVar18;
  ulong uVar19;
  undefined1 *puVar20;
  uint uVar21;
  char cVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  byte *pbVar26;
  undefined1 auVar27 [16];
  
  plVar18 = (long *)CONCAT44(in_register_0000003c,param_1);
  puVar20 = (undefined1 *)plVar18[1];
  uVar19 = (ulong)*(uint *)((long)plVar18 + 0x14);
  if (*(uint *)((long)plVar18 + 0x14) != 0) {
    lVar11 = 0;
    do {
      while( true ) {
        pcVar1 = puVar20 + lVar11;
        if (*pcVar1 != '\0') break;
LAB_0010126a:
        lVar11 = lVar11 + 1;
        if ((uint)uVar19 <= (uint)lVar11) goto LAB_00101294;
      }
      if (*pcVar1 == '\x7f') {
        *pcVar1 = '\0';
        puVar20 = (undefined1 *)plVar18[1];
        uVar19 = (ulong)*(uint *)((long)plVar18 + 0x14);
        goto LAB_0010126a;
      }
      *pcVar1 = '\x7f';
      uVar19 = (ulong)*(uint *)((long)plVar18 + 0x14);
      lVar11 = lVar11 + 1;
      puVar20 = (undefined1 *)plVar18[1];
    } while ((uint)lVar11 < *(uint *)((long)plVar18 + 0x14));
  }
LAB_00101294:
  puVar20[uVar19] = *puVar20;
  lVar11 = 1;
  do {
    iVar14 = (int)lVar11;
    puVar20 = (undefined1 *)(plVar18[1] + lVar11);
    lVar11 = lVar11 + 1;
    *(undefined1 *)(plVar18[1] + (ulong)(uint)(iVar14 + *(int *)((long)plVar18 + 0x14))) = *puVar20;
    auVar9 = __LC15;
  } while (lVar11 != 0xf);
  uVar21 = *(uint *)((long)plVar18 + 0x14);
  uVar19 = (ulong)uVar21;
  uVar17 = uVar21 - 1;
  if (uVar21 != 0) {
    uVar21 = 0xfffffff1;
    lVar11 = 0;
    do {
      lVar15 = plVar18[1];
      if (*(char *)(lVar15 + lVar11) == '\x7f') {
        lVar3 = lVar11 * 8;
        pbVar12 = (byte *)(*plVar18 + lVar3);
        pbVar26 = pbVar12 + 4;
        if (pbVar26 <= pbVar12) goto LAB_00101440;
        do {
          uVar24 = 0xcbf29ce484222325;
          do {
            bVar4 = *pbVar12;
            pbVar12 = pbVar12 + 1;
            uVar24 = (bVar4 ^ uVar24) * 0x100000001b3;
          } while (pbVar12 != pbVar26);
          uVar23 = (uint)uVar24 | 0xffffff80;
          uVar24 = uVar24 >> 7;
          while( true ) {
            uVar25 = (int)uVar19 - 1U & (uint)uVar24;
            auVar27 = *(undefined1 (*) [16])(lVar15 + (ulong)uVar25) & auVar9;
            uVar8 = (ushort)(SUB161(auVar27 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar27[0xf] >> 7) << 0xf;
            uVar10 = uVar25;
            while (uVar8 == 0xffff) {
              uVar10 = uVar10 + 0x10 & uVar17;
              auVar27 = *(undefined1 (*) [16])(lVar15 + (ulong)uVar10) & auVar9;
              uVar8 = (ushort)(SUB161(auVar27 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar27[0xf] >> 7) << 0xf;
            }
            iVar14 = 0;
            for (uVar16 = uVar8 ^ 0xffff; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
              iVar14 = iVar14 + 1;
            }
            uVar10 = iVar14 + uVar10 & uVar17;
            cVar22 = (char)uVar23;
            if (((uVar10 - uVar25 ^ (int)lVar11 - uVar25) & uVar17 & 0xfffffff0) == 0) {
              *(char *)(lVar15 + lVar11) = cVar22;
              *(char *)(plVar18[1] + (ulong)((*(int *)((long)plVar18 + 0x14) - 1U & uVar21) + 0xf))
                   = cVar22;
              uVar19 = (ulong)*(uint *)((long)plVar18 + 0x14);
              goto LAB_00101300;
            }
            uVar24 = (ulong)uVar10;
            cVar5 = *(char *)(lVar15 + uVar24);
            *(char *)(lVar15 + uVar24) = cVar22;
            if (cVar5 == '\0') {
              *(char *)(plVar18[1] +
                       (ulong)((*(int *)((long)plVar18 + 0x14) - 1U & uVar10 - 0xf) + 0xf)) = cVar22
              ;
              *(undefined1 *)(plVar18[1] + lVar11) = 0;
              *(undefined1 *)
               (plVar18[1] + (ulong)((*(int *)((long)plVar18 + 0x14) - 1U & uVar21) + 0xf)) = 0;
              uVar19 = (ulong)*(uint *)((long)plVar18 + 0x14);
              *(undefined8 *)(*plVar18 + uVar24 * 8) = *(undefined8 *)(*plVar18 + lVar3);
              goto LAB_00101300;
            }
            *(char *)(plVar18[1] +
                     (ulong)((*(int *)((long)plVar18 + 0x14) - 1U & uVar10 - 0xf) + 0xf)) = cVar22;
            puVar2 = (undefined4 *)(*plVar18 + uVar24 * 8);
            puVar13 = (undefined4 *)(*plVar18 + lVar3);
            uVar7 = *puVar13;
            *puVar13 = *puVar2;
            *puVar2 = uVar7;
            uVar6 = *(undefined1 *)(puVar13 + 1);
            *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(puVar2 + 1);
            *(undefined1 *)(puVar2 + 1) = uVar6;
            uVar19 = (ulong)*(uint *)((long)plVar18 + 0x14);
            lVar15 = plVar18[1];
            pbVar12 = (byte *)(*plVar18 + lVar3);
            pbVar26 = pbVar12 + 4;
            if (pbVar12 < pbVar26) break;
LAB_00101440:
            uVar23 = 0xffffffa5;
            uVar24 = 0xc9084446;
          }
        } while( true );
      }
LAB_00101300:
      lVar11 = lVar11 + 1;
      uVar21 = uVar21 + 1;
    } while ((uint)lVar11 < (uint)uVar19);
  }
  *(int *)(plVar18 + 3) = (int)(uVar19 * 7 >> 3) - (int)plVar18[2];
  return;
}



/* JPH::ConvexHullShape::CollidePoint(JPH::Vec3, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::CollidePointResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) const */

void JPH::ConvexHullShape::CollidePoint
               (undefined8 param_1,float param_2,long param_3,undefined4 *param_4,long *param_5,
               long *param_6)

{
  char cVar1;
  float *pfVar2;
  float *pfVar3;
  long in_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = (**(code **)(*param_6 + 0x10))(param_6,param_3,param_4);
  if (cVar1 != '\0') {
    pfVar2 = *(float **)(param_3 + 0xe0);
    pfVar3 = pfVar2 + *(long *)(param_3 + 0xd0) * 4;
    for (; pfVar2 != pfVar3; pfVar2 = pfVar2 + 4) {
      if (0.0 < pfVar2[2] * param_2 +
                pfVar2[1] * (float)((ulong)param_1 >> 0x20) + *pfVar2 * (float)param_1 + 0.0 +
                pfVar2[3]) goto LAB_00101591;
    }
    local_38 = 0xffffffff;
    if (param_5[2] != 0) {
      local_38 = *(undefined4 *)(param_5[2] + 0x34);
    }
    local_34 = *param_4;
    (**(code **)(*param_5 + 0x28))(param_5,&local_38);
  }
LAB_00101591:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::ConvexHullShape::GetSurfaceNormal(JPH::SubShapeID const&, JPH::Vec3) const */

undefined1  [16] __thiscall
JPH::ConvexHullShape::GetSurfaceNormal(undefined8 param_1,float param_2,ConvexHullShape *this)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  fVar5 = (float)((ulong)param_1 >> 0x20);
  pfVar1 = *(float **)(this + 0xe0);
  local_18 = *pfVar1;
  fStack_14 = pfVar1[1];
  fStack_10 = pfVar1[2];
  fStack_c = pfVar1[3];
  fVar6 = (float)((uint)(fStack_10 * param_2 + fStack_14 * fVar5 + local_18 * (float)param_1 + 0.0 +
                        pfVar1[3]) & _LC16);
  if (1 < *(ulong *)(this + 0xb8)) {
    pfVar3 = pfVar1 + 4;
    do {
      fVar4 = (float)((uint)(pfVar3[2] * param_2 +
                             pfVar3[1] * fVar5 + *pfVar3 * (float)param_1 + 0.0 + pfVar3[3]) & _LC16
                     );
      if (fVar4 < fVar6) {
        fVar6 = fVar4;
        local_18 = *pfVar3;
        fStack_14 = pfVar3[1];
        fStack_10 = pfVar3[2];
        fStack_c = pfVar3[3];
      }
      pfVar3 = pfVar3 + 4;
    } while (pfVar3 != pfVar1 + *(ulong *)(this + 0xb8) * 4);
  }
  auVar2._4_4_ = fStack_14;
  auVar2._0_4_ = local_18;
  auVar2._8_4_ = fStack_10;
  auVar2._12_4_ = fStack_c;
  return auVar2;
}



/* JPH::ConvexHullShapeSettings::GetRTTI() const */

undefined1 * JPH::ConvexHullShapeSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::ConvexHullShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::ConvexHullShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::ConvexHullShapeSettings*)::rtti,
                      "ConvexHullShapeSettings",0x78,
                      GetRTTIOfType(JPH::ConvexHullShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::ConvexHullShapeSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::ConvexHullShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::ConvexHullShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::ConvexHullShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::ConvexHullShapeSettings*)::rtti;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::ConvexHullShapeSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 != (void *)0x0) {
    *(undefined ***)param_1 = &PTR_GetRTTI_00109858;
    if (*(long *)((long)param_1 + 0x60) != 0) {
      *(undefined8 *)((long)param_1 + 0x50) = 0;
      (*Free)();
    }
    plVar2 = *(long **)((long)param_1 + 0x40);
    *(undefined8 **)param_1 = &Color::sWhite;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
          (*Free)();
        }
        else {
          (**(code **)(*plVar2 + 0x18))();
        }
      }
    }
    *(code **)param_1 = JPH::DebugRenderer::Triangle::Triangle;
    if (*(char *)((long)param_1 + 0x38) == '\x01') {
      plVar2 = *(long **)((long)param_1 + 0x18);
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
      }
    }
    else if ((*(char *)((long)param_1 + 0x38) == '\x02') &&
            (*(long *)((long)param_1 + 0x18) != (long)param_1 + 0x28)) {
      (*Free)();
    }
                    /* WARNING: Could not recover jumptable at 0x001017e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ConvexHullShape::CollideSoftBodyVertices(JPH::Mat44 const&, JPH::Vec3,
   JPH::CollideSoftBodyVertexIterator const&, unsigned int, int) const */

void JPH::ConvexHullShape::CollideSoftBodyVertices
               (undefined8 param_1_00,undefined8 param_2,long param_1,float *param_4,long *param_5,
               int param_6,undefined4 param_7)

{
  float *pfVar1;
  ushort *puVar2;
  float *pfVar3;
  float fVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined1 (*pauVar22) [16];
  byte *pbVar23;
  undefined4 uVar25;
  float fVar26;
  ulong uVar27;
  float *pfVar28;
  byte *pbVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  undefined4 *puVar33;
  float *pfVar34;
  byte *pbVar35;
  byte *pbVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar40 [16];
  float fVar51;
  undefined1 auVar48 [12];
  float fVar50;
  float fVar52;
  undefined1 auVar49 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar65 [16];
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  byte *pbVar24;
  
  fVar9 = *param_4;
  fVar10 = param_4[1];
  auVar65._8_8_ = param_2;
  auVar65._0_8_ = param_1_00;
  fVar71 = (float)param_1_00;
  fVar72 = (float)((ulong)param_1_00 >> 0x20);
  fVar73 = (float)param_2;
  fVar74 = (float)((ulong)param_2 >> 0x20);
  fVar50 = (float)*(undefined8 *)(param_4 + 4);
  fVar52 = (float)((ulong)*(undefined8 *)(param_4 + 4) >> 0x20);
  fVar37 = (float)*(undefined8 *)(param_4 + 8);
  fVar41 = (float)((ulong)*(undefined8 *)(param_4 + 8) >> 0x20);
  fVar11 = param_4[10];
  fVar12 = param_4[2];
  fVar4 = param_4[6];
  fVar13 = param_4[0xc];
  fVar14 = param_4[0xd];
  fVar15 = param_4[0xe];
  fVar44 = 0.0 - (fVar14 * fVar41 + fVar13 * fVar37 + fVar15 * fVar11);
  pfVar30 = (float *)*param_5;
  pfVar31 = (float *)param_5[2];
  lVar16 = param_5[3];
  auVar62._4_4_ = _LC0;
  auVar62._0_4_ = _LC0;
  auVar62._8_4_ = _LC0;
  auVar62._12_4_ = _LC0;
  fVar38 = _LC0 - fVar71;
  fVar42 = _LC0 - fVar72;
  fVar45 = _LC0 - fVar73;
  pfVar34 = (float *)param_5[4];
  lVar17 = param_5[5];
  pfVar32 = (float *)param_5[6];
  auVar65 = divps(auVar62,auVar65);
  lVar18 = param_5[7];
  puVar33 = (undefined4 *)param_5[8];
  auVar49._4_4_ = -(uint)(fVar72 < 0.0);
  auVar49._0_4_ = -(uint)(fVar71 < 0.0);
  auVar49._8_4_ = -(uint)(fVar73 < 0.0);
  auVar49._12_4_ = -(uint)(fVar74 < 0.0);
  uVar25 = movmskps(fVar44,auVar49);
  fVar26 = _LC0;
  if ((POPCOUNT((byte)uVar25 & 7) & 1U) != 0) {
    fVar26 = _LC18;
  }
  lVar19 = param_5[9];
  lVar20 = param_5[1];
  pfVar28 = (float *)((long)(param_6 * (int)lVar20) + (long)pfVar30);
  if (pfVar30 != pfVar28) {
    do {
      if (0.0 < *pfVar31) {
        fVar53 = *pfVar30;
        fVar47 = pfVar30[1];
        fVar58 = pfVar30[2];
        uVar5 = *(ulong *)(param_1 + 0xd0);
        fVar39 = fVar53 * fVar9 + fVar47 * fVar10 + fVar58 * fVar12 +
                 (0.0 - (fVar14 * fVar10 + fVar13 * fVar9 + fVar15 * fVar12));
        fVar43 = fVar53 * fVar50 + fVar47 * fVar52 + fVar58 * fVar4 +
                 (0.0 - (fVar14 * fVar52 + fVar13 * fVar50 + fVar15 * fVar4));
        fVar46 = fVar53 * fVar37 + fVar47 * fVar41 + fVar58 * fVar11 + fVar44;
        fVar47 = fVar53 * 0.0 + fVar47 * 0.0 + fVar58 * 0.0 + 1.0;
        fVar53 = _LC1;
        if (fVar45 * fVar45 + fVar42 * fVar42 + fVar38 * fVar38 + 0.0 <= _LC19) {
          pauVar6 = *(undefined1 (**) [16])(param_1 + 0xe0);
          if (pauVar6 + uVar5 != pauVar6) {
            uVar27 = 0;
            auVar49 = (undefined1  [16])0x0;
            pauVar22 = pauVar6;
            do {
              auVar62 = *pauVar22;
              fVar58 = auVar62._8_4_ * fVar46 +
                       auVar62._4_4_ * fVar43 + auVar62._0_4_ * fVar39 + 0.0 +
                       *(float *)(*pauVar22 + 0xc);
              if (fVar53 < fVar58) {
                uVar27 = (long)pauVar22 - (long)pauVar6 >> 4;
                auVar49 = auVar62;
                fVar53 = fVar58;
              }
              pauVar22 = pauVar22 + 1;
            } while (pauVar22 != pauVar6 + uVar5);
            goto LAB_00101baf;
          }
LAB_00102075:
          auVar48 = SUB1612((undefined1  [16])0x0,0);
          local_98 = fVar39 + 0.0;
          fStack_94 = fVar43 + 0.0;
          fStack_90 = fVar46 + 0.0;
          fStack_8c = fVar47 + 0.0;
        }
        else {
          if ((int)uVar5 == 0) goto LAB_00102075;
          uVar21 = 0;
          auVar49 = (undefined1  [16])0x0;
          uVar27 = 0;
          do {
            pfVar1 = (float *)(*(long *)(param_1 + 0xe0) + uVar21 * 0x10);
            auVar61._0_4_ = *pfVar1 * auVar65._0_4_;
            auVar61._4_4_ = pfVar1[1] * auVar65._4_4_;
            auVar61._8_4_ = pfVar1[2] * auVar65._8_4_;
            auVar61._12_4_ = pfVar1[3] * auVar65._12_4_;
            pfVar1 = (float *)(*(long *)(param_1 + 0xb0) +
                              (ulong)*(byte *)(*(long *)(param_1 + 0xf8) +
                                              (ulong)*(ushort *)
                                                      (*(long *)(param_1 + 200) + uVar21 * 4)) *
                              0x20);
            fVar58 = SQRT(auVar61._8_4_ * auVar61._8_4_ +
                          auVar61._4_4_ * auVar61._4_4_ + auVar61._0_4_ * auVar61._0_4_ + 0.0);
            auVar7._4_4_ = fVar58;
            auVar7._0_4_ = fVar58;
            auVar7._8_4_ = fVar58;
            auVar7._12_4_ = fVar58;
            auVar62 = divps(auVar61,auVar7);
            fVar58 = (fVar46 - pfVar1[2] * fVar73) * auVar62._8_4_ +
                     (fVar43 - pfVar1[1] * fVar72) * auVar62._4_4_ +
                     (fVar39 - *pfVar1 * fVar71) * auVar62._0_4_ + 0.0;
            if (fVar53 < fVar58) {
              uVar27 = uVar21 & 0xffffffff;
              auVar49 = auVar62;
              fVar53 = fVar58;
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 != (uVar5 & 0xffffffff));
LAB_00101baf:
          auVar48 = auVar49._0_12_;
          fVar58 = auVar49._0_4_;
          fVar60 = auVar49._4_4_;
          fVar51 = auVar49._8_4_;
          local_98 = fVar39 - fVar53 * fVar58;
          fStack_94 = fVar43 - fVar53 * fVar60;
          fStack_90 = fVar46 - fVar53 * fVar51;
          fStack_8c = fVar47 - fVar53 * auVar49._12_4_;
          if (0.0 < fVar53) {
            puVar2 = (ushort *)(*(long *)(param_1 + 200) + (uVar27 & 0xffffffff) * 4);
            pbVar36 = (byte *)((ulong)*puVar2 + *(long *)(param_1 + 0xf8));
            pbVar29 = pbVar36 + puVar2[1];
            if (pbVar36 < pbVar29) {
              pbVar24 = pbVar36;
              do {
                while( true ) {
                  pbVar23 = pbVar24 + 1;
                  pbVar35 = pbVar23;
                  if (pbVar29 == pbVar23) {
                    pbVar35 = pbVar36;
                  }
                  pfVar1 = (float *)(*(long *)(param_1 + 0xb0) + (ulong)*pbVar24 * 0x20);
                  fVar54 = *pfVar1 * fVar71;
                  fVar55 = pfVar1[1] * fVar72;
                  fVar56 = pfVar1[2] * fVar73;
                  pfVar3 = (float *)(*(long *)(param_1 + 0xb0) + (ulong)*pbVar35 * 0x20);
                  fVar63 = *pfVar3 * fVar71 - fVar54;
                  fVar66 = pfVar3[1] * fVar72 - fVar55;
                  fVar68 = pfVar3[2] * fVar73 - fVar56;
                  pbVar24 = pbVar23;
                  if (0.0 < ((fVar46 - fVar56) * (fVar63 * fVar60 - fVar66 * fVar58) +
                            (fVar43 - fVar55) * (fVar68 * fVar58 - fVar63 * fVar51) +
                            (fVar39 - fVar54) * (fVar66 * fVar51 - fVar68 * fVar60) + 0.0) * fVar26)
                  break;
LAB_00101e08:
                  if (pbVar29 == pbVar23) goto LAB_00101bc9;
                }
                fVar63 = *pfVar3 * fVar71 - fVar39;
                fVar66 = pfVar3[1] * fVar72 - fVar43;
                fVar68 = pfVar3[2] * fVar73 - fVar46;
                fVar59 = pfVar3[3] * fVar74 - fVar47;
                fVar54 = fVar54 - fVar39;
                fVar55 = fVar55 - fVar43;
                fVar56 = fVar56 - fVar46;
                fVar57 = pfVar1[3] * fVar74 - fVar47;
                fVar64 = fVar63 - fVar54;
                fVar67 = fVar66 - fVar55;
                fVar69 = fVar68 - fVar56;
                fVar70 = fVar69 * fVar69 + fVar67 * fVar67 + fVar64 * fVar64 + 0.0;
                if (fVar70 < _LC20) {
                  if (fVar68 * fVar68 + fVar66 * fVar66 + fVar63 * fVar63 + 0.0 <=
                      fVar56 * fVar56 + fVar55 * fVar55 + fVar54 * fVar54 + 0.0) goto LAB_00101f79;
                }
                else {
                  fVar70 = (float)((uint)(fVar56 * fVar69 + fVar55 * fVar67 + fVar64 * fVar54 + 0.0)
                                  ^ _LC21) / fVar70;
                  if (0.0 < fVar70) {
                    fVar64 = _LC0 - fVar70;
                    if (0.0 < fVar64) {
                      fVar63 = fVar70 * fVar63 + fVar64 * fVar54;
                      fVar66 = fVar70 * fVar66 + fVar64 * fVar55;
                      fVar68 = fVar70 * fVar68 + fVar64 * fVar56;
                      fVar59 = fVar70 * fVar59 + fVar64 * fVar57;
                    }
LAB_00101f79:
                    fVar57 = fVar59;
                    fVar56 = fVar68;
                    fVar55 = fVar66;
                    fVar54 = fVar63;
                  }
                }
                if (_LC9 <= fVar56 * fVar56 + fVar55 * fVar55 + fVar54 * fVar54 + 0.0)
                goto LAB_00101e08;
                local_98 = fVar54 + fVar39;
                fStack_94 = fVar55 + fVar43;
                fStack_90 = fVar56 + fVar46;
                fStack_8c = fVar57 + fVar47;
              } while (pbVar29 != pbVar23);
            }
          }
        }
LAB_00101bc9:
        auVar40._0_4_ = fVar39 - local_98;
        auVar40._4_4_ = fVar43 - fStack_94;
        auVar40._8_4_ = fVar46 - fStack_90;
        auVar40._12_4_ = fVar47 - fStack_8c;
        fVar58 = SQRT(auVar40._4_4_ * auVar40._4_4_ + auVar40._0_4_ * auVar40._0_4_ + 0.0 +
                      auVar40._8_4_ * auVar40._8_4_);
        fVar47 = (float)((uint)fVar58 ^ _LC21);
        if (fVar53 <= 0.0) {
          auVar40._4_4_ = 0.0 - auVar40._4_4_;
          auVar40._0_4_ = 0.0 - auVar40._0_4_;
          auVar40._8_4_ = 0.0 - auVar40._8_4_;
          auVar40._12_4_ = 0.0 - auVar40._12_4_;
          fVar47 = fVar58;
        }
        if (*pfVar32 < fVar47) {
          *pfVar32 = fVar47;
          if (0.0 < fVar58) {
            auVar8._4_4_ = fVar58;
            auVar8._0_4_ = fVar58;
            auVar8._8_4_ = fVar58;
            auVar8._12_4_ = fVar58;
            auVar49 = divps(auVar40,auVar8);
            auVar48 = auVar49._0_12_;
          }
          fVar47 = auVar48._0_4_;
          fVar58 = auVar48._4_4_;
          fVar60 = auVar48._8_4_;
          fVar53 = param_4[0xc];
          fVar39 = fVar47 * *param_4 + fVar58 * param_4[4] + fVar60 * param_4[8];
          fVar43 = fVar47 * param_4[1] + fVar58 * param_4[5] + fVar60 * param_4[9];
          fVar46 = fVar47 * param_4[2] + fVar58 * param_4[6] + fVar60 * param_4[10];
          fVar60 = (float)((uint)(fStack_90 * fVar60 + fStack_94 * fVar58 + local_98 * fVar47 + 0.0)
                          ^ _LC21);
          fVar47 = param_4[0xd];
          fVar58 = param_4[0xe];
          *pfVar34 = fVar39;
          pfVar34[1] = fVar43;
          pfVar34[2] = fVar46;
          pfVar34[3] = fVar60 - (fVar46 * fVar58 + fVar43 * fVar47 + fVar53 * fVar39 + 0.0);
          *puVar33 = param_7;
        }
      }
      pfVar30 = (float *)((long)pfVar30 + (long)(int)lVar20);
      pfVar31 = (float *)((long)pfVar31 + (long)(int)lVar16);
      pfVar34 = (float *)((long)pfVar34 + (long)(int)lVar17);
      pfVar32 = (float *)((long)pfVar32 + (long)(int)lVar18);
      puVar33 = (undefined4 *)((long)puVar33 + (long)(int)lVar19);
    } while (pfVar28 != pfVar30);
  }
  return;
}



/* JPH::ConvexHullShape::GetSupportFunction(JPH::ConvexShape::ESupportMode,
   JPH::ConvexShape::SupportBuffer&, JPH::Vec3) const */

undefined8 *
JPH::ConvexHullShape::GetSupportFunction
          (undefined8 param_1,undefined8 param_2,long param_3,int param_4,undefined8 *param_5)

{
  float *pfVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  float fVar8;
  float fVar11;
  float fVar12;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar13;
  float fVar20;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar21;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
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
  undefined4 uVar47;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  
  fVar43 = *(float *)(param_3 + 0x100);
  auVar48._8_8_ = param_2;
  auVar48._0_8_ = param_1;
  fVar35 = (float)param_1;
  fVar36 = (float)((ulong)param_1 >> 0x20);
  fVar37 = (float)param_2;
  fVar38 = (float)((ulong)param_2 >> 0x20);
  if (fVar43 == 0.0) {
    if (_LC19 < (_LC0 - fVar37) * (_LC0 - fVar37) +
                (_LC0 - fVar36) * (_LC0 - fVar36) + (_LC0 - fVar35) * (_LC0 - fVar35) + 0.0) {
      *param_5 = &PTR__HullWithConvexScaled_00109a38;
      param_5[1] = param_3;
      param_5[2] = param_1;
      param_5[3] = param_2;
      return param_5;
    }
  }
  else {
    if (param_4 == 0) {
      auVar10._4_4_ = _LC0;
      auVar10._0_4_ = _LC0;
      auVar10._8_4_ = _LC0;
      auVar10._12_4_ = _LC0;
      if ((_LC0 - fVar37) * (_LC0 - fVar37) +
          (_LC0 - fVar36) * (_LC0 - fVar36) + (_LC0 - fVar35) * (_LC0 - fVar35) + 0.0 <= _LC19) {
        lVar2 = *(long *)(param_3 + 0xa0);
        pfVar5 = *(float **)(param_3 + 0xb0);
        *(undefined4 *)(param_5 + 2) = 0;
        *param_5 = &PTR__HullNoConvex_001099d8;
        *(float *)(param_5 + 1) = fVar43;
        uVar3 = _LC21;
        pfVar7 = pfVar5 + lVar2 * 8;
        if (pfVar7 == pfVar5) {
          return param_5;
        }
        lVar2 = *(long *)(param_3 + 0xe0);
        uVar4 = 0;
        while( true ) {
          fVar43 = *(float *)(param_3 + 0x100);
          pfVar1 = (float *)(lVar2 + (long)(int)pfVar5[5] * 0x10);
          if (pfVar5[4] == 1.4013e-45) {
            auVar23._0_4_ = *pfVar5 - fVar43 * *pfVar1;
            auVar23._4_4_ = pfVar5[1] - fVar43 * pfVar1[1];
            auVar23._8_4_ = pfVar5[2] - fVar43 * pfVar1[2];
            auVar23._12_4_ = pfVar5[3] - fVar43 * pfVar1[3];
          }
          else {
            fVar35 = (float)((uint)fVar43 ^ uVar3);
            fVar39 = *pfVar1 - 0.0;
            fVar40 = pfVar1[1] - 0.0;
            fVar41 = pfVar1[2] - 0.0;
            fVar42 = pfVar1[3] - fVar35;
            pfVar1 = (float *)(lVar2 + (long)(int)pfVar5[6] * 0x10);
            fVar36 = *pfVar1 - 0.0;
            fVar37 = pfVar1[1] - 0.0;
            fVar38 = pfVar1[2] - 0.0;
            fVar28 = pfVar1[3] - fVar35;
            if (pfVar5[4] == 4.2039e-45) {
              pfVar1 = (float *)(lVar2 + (long)(int)pfVar5[7] * 0x10);
              fVar11 = *pfVar1 - 0.0;
              fVar12 = pfVar1[1] - 0.0;
              fVar8 = pfVar1[2] - 0.0;
              fVar35 = pfVar1[3] - fVar35;
            }
            else {
              fVar8 = fVar37 * fVar39 - fVar40 * fVar36;
              fVar11 = fVar38 * fVar40 - fVar41 * fVar37;
              fVar12 = fVar36 * fVar41 - fVar39 * fVar38;
              fVar35 = (float)((uint)(pfVar5[2] * fVar8 +
                                     fVar12 * pfVar5[1] + fVar11 * *pfVar5 + 0.0) ^ uVar3);
            }
            auVar14._0_4_ =
                 (fVar12 * fVar36 - fVar37 * fVar11) * fVar41 +
                 fVar40 * (fVar11 * fVar38 - fVar36 * fVar8) +
                 (fVar8 * fVar37 - fVar38 * fVar12) * fVar39 + 0.0;
            if (auVar14._0_4_ == 0.0) {
              auVar23._0_4_ = *pfVar5 - fVar43 * fVar39;
              auVar23._4_4_ = pfVar5[1] - fVar43 * fVar40;
              auVar23._8_4_ = pfVar5[2] - fVar43 * fVar41;
              auVar23._12_4_ = pfVar5[3] - fVar43 * fVar42;
            }
            else {
              auVar14._4_4_ = auVar14._0_4_;
              auVar14._8_4_ = auVar14._0_4_;
              auVar14._12_4_ = auVar14._0_4_;
              auVar22._4_4_ =
                   (fVar35 * fVar38 - fVar8 * fVar28) * fVar39 +
                   (fVar8 * fVar36 - fVar11 * fVar38) * fVar42 +
                   fVar41 * (fVar11 * fVar28 - fVar35 * fVar36);
              auVar22._0_4_ =
                   (fVar8 * fVar28 - fVar35 * fVar38) * fVar40 +
                   (fVar12 * fVar38 - fVar8 * fVar37) * fVar42 +
                   fVar41 * (fVar35 * fVar37 - fVar12 * fVar28);
              auVar22._8_4_ =
                   (fVar12 * fVar28 - fVar35 * fVar37) * fVar39 +
                   (fVar11 * fVar37 - fVar12 * fVar36) * fVar42 +
                   fVar40 * (fVar35 * fVar36 - fVar11 * fVar28);
              auVar22._12_4_ =
                   (fVar8 * fVar38 - fVar8 * fVar38) * fVar41 +
                   (fVar8 * fVar38 - fVar8 * fVar38) * fVar42 +
                   fVar41 * (fVar8 * fVar38 - fVar8 * fVar38);
              auVar23 = divps(auVar22,auVar14);
            }
          }
          uVar6 = (int)uVar4 + 1;
          pfVar5 = pfVar5 + 8;
          *(uint *)(param_5 + 2) = uVar6;
          *(undefined1 (*) [16])(param_5 + uVar4 * 2 + 4) = auVar23;
          if (pfVar7 == pfVar5) break;
          uVar4 = (ulong)uVar6;
        }
        return param_5;
      }
      auVar44._0_4_ = 0.0 - fVar35;
      auVar44._4_4_ = 0.0 - fVar36;
      auVar44._8_4_ = 0.0 - fVar37;
      auVar44._12_4_ = 0.0 - fVar38;
      auVar45 = maxps(auVar44,auVar48);
      auVar46._0_8_ = auVar45._4_8_;
      auVar46._8_4_ = auVar45._8_4_;
      auVar46._12_4_ = auVar45._8_4_;
      auVar46 = minps(auVar45,auVar46);
      uVar47 = auVar46._8_4_;
      auVar45._4_4_ = uVar47;
      auVar45._0_4_ = uVar47;
      auVar45._8_4_ = uVar47;
      auVar45._12_4_ = uVar47;
      auVar46 = minps(auVar46,auVar45);
      fVar43 = auVar46._0_4_ * fVar43;
      if (_LC12._4_4_ < fVar43) {
        fVar43 = _LC12._4_4_;
      }
      auVar48 = divps(auVar10,auVar48);
      pfVar5 = *(float **)(param_3 + 0xb0);
      *(undefined4 *)(param_5 + 2) = 0;
      *param_5 = &PTR__HullNoConvex_001099d8;
      lVar2 = *(long *)(param_3 + 0xa0);
      *(float *)(param_5 + 1) = fVar43;
      uVar3 = _LC21;
      pfVar7 = pfVar5 + lVar2 * 8;
      if (pfVar7 == pfVar5) {
        return param_5;
      }
      lVar2 = *(long *)(param_3 + 0xe0);
      uVar4 = 0;
      fVar28 = (float)((uint)fVar43 ^ _LC21);
      do {
        fVar42 = *pfVar5 * fVar35;
        fVar8 = pfVar5[1] * fVar36;
        fVar11 = pfVar5[2] * fVar37;
        pfVar1 = (float *)(lVar2 + (long)(int)pfVar5[5] * 0x10);
        fVar12 = auVar48._0_4_;
        auVar9._0_4_ = *pfVar1 * fVar12;
        fVar21 = auVar48._4_4_;
        auVar9._4_4_ = pfVar1[1] * fVar21;
        fVar26 = auVar48._8_4_;
        auVar9._8_4_ = pfVar1[2] * fVar26;
        fVar27 = auVar48._12_4_;
        auVar9._12_4_ = pfVar1[3] * fVar27;
        auVar15._0_4_ =
             SQRT(auVar9._8_4_ * auVar9._8_4_ +
                  auVar9._4_4_ * auVar9._4_4_ + auVar9._0_4_ * auVar9._0_4_ + 0.0);
        auVar15._4_4_ = auVar15._0_4_;
        auVar15._8_4_ = auVar15._0_4_;
        auVar15._12_4_ = auVar15._0_4_;
        auVar10 = divps(auVar9,auVar15);
        fVar39 = auVar10._0_4_;
        fVar40 = auVar10._4_4_;
        fVar41 = auVar10._8_4_;
        if (pfVar5[4] == 1.4013e-45) {
LAB_00102530:
          auVar30._0_4_ = fVar42 - fVar39 * fVar43;
          auVar30._4_4_ = fVar8 - fVar40 * fVar43;
          auVar30._8_4_ = fVar11 - fVar41 * fVar43;
          auVar30._12_4_ = pfVar5[3] * fVar38 - auVar10._12_4_ * fVar43;
        }
        else {
          pfVar1 = (float *)(lVar2 + (long)(int)pfVar5[6] * 0x10);
          auVar16._0_4_ = *pfVar1 * fVar12;
          auVar16._4_4_ = pfVar1[1] * fVar21;
          auVar16._8_4_ = pfVar1[2] * fVar26;
          auVar16._12_4_ = pfVar1[3] * fVar27;
          auVar24._0_4_ =
               SQRT(auVar16._8_4_ * auVar16._8_4_ +
                    auVar16._4_4_ * auVar16._4_4_ + auVar16._0_4_ * auVar16._0_4_ + 0.0);
          auVar24._4_4_ = auVar24._0_4_;
          auVar24._8_4_ = auVar24._0_4_;
          auVar24._12_4_ = auVar24._0_4_;
          auVar46 = divps(auVar16,auVar24);
          fVar13 = auVar46._0_4_;
          fVar19 = auVar46._4_4_;
          fVar20 = auVar46._8_4_;
          fVar31 = fVar39 - 0.0;
          fVar32 = fVar40 - 0.0;
          fVar33 = fVar41 - 0.0;
          fVar34 = (float)((uint)(fVar41 * fVar11 + fVar40 * fVar8 + fVar39 * fVar42 + 0.0) ^ uVar3)
                   - fVar28;
          fVar49 = fVar13 - 0.0;
          fVar50 = fVar19 - 0.0;
          fVar51 = fVar20 - 0.0;
          fVar52 = (float)((uint)(fVar20 * fVar11 + fVar19 * fVar8 + fVar13 * fVar42 + 0.0) ^ uVar3)
                   - fVar28;
          if (pfVar5[4] == 4.2039e-45) {
            pfVar1 = (float *)(lVar2 + (long)(int)pfVar5[7] * 0x10);
            auVar25._0_4_ = *pfVar1 * fVar12;
            auVar25._4_4_ = pfVar1[1] * fVar21;
            auVar25._8_4_ = pfVar1[2] * fVar26;
            auVar25._12_4_ = pfVar1[3] * fVar27;
            auVar18._0_4_ =
                 SQRT(auVar25._8_4_ * auVar25._8_4_ +
                      auVar25._4_4_ * auVar25._4_4_ + auVar25._0_4_ * auVar25._0_4_ + 0.0);
            auVar18._4_4_ = auVar18._0_4_;
            auVar18._8_4_ = auVar18._0_4_;
            auVar18._12_4_ = auVar18._0_4_;
            auVar46 = divps(auVar25,auVar18);
            fVar26 = auVar46._0_4_ - 0.0;
            fVar27 = auVar46._4_4_ - 0.0;
            fVar21 = auVar46._8_4_ - 0.0;
            fVar12 = (float)((uint)(auVar46._8_4_ * fVar11 +
                                   auVar46._4_4_ * fVar8 + auVar46._0_4_ * fVar42 + 0.0) ^ uVar3) -
                     fVar28;
          }
          else {
            fVar21 = fVar19 * fVar39 - fVar13 * fVar40;
            fVar26 = fVar20 * fVar40 - fVar19 * fVar41;
            fVar27 = fVar13 * fVar41 - fVar20 * fVar39;
            fVar12 = (float)((uint)(fVar21 * fVar11 + fVar8 * fVar27 + fVar42 * fVar26 + 0.0) ^
                            uVar3);
          }
          auVar17._0_4_ =
               (fVar27 * fVar49 - fVar50 * fVar26) * fVar33 +
               (fVar26 * fVar51 - fVar49 * fVar21) * fVar32 +
               (fVar21 * fVar50 - fVar51 * fVar27) * fVar31 + 0.0;
          if (auVar17._0_4_ == 0.0) goto LAB_00102530;
          auVar17._4_4_ = auVar17._0_4_;
          auVar17._8_4_ = auVar17._0_4_;
          auVar17._12_4_ = auVar17._0_4_;
          auVar29._0_4_ =
               (fVar21 * fVar52 - fVar12 * fVar51) * fVar32 +
               (fVar27 * fVar51 - fVar21 * fVar50) * fVar34 +
               (fVar12 * fVar50 - fVar27 * fVar52) * fVar33;
          auVar29._4_4_ =
               (fVar12 * fVar51 - fVar21 * fVar52) * fVar31 +
               (fVar21 * fVar49 - fVar26 * fVar51) * fVar34 +
               (fVar26 * fVar52 - fVar12 * fVar49) * fVar33;
          auVar29._8_4_ =
               (fVar27 * fVar52 - fVar12 * fVar50) * fVar31 +
               (fVar26 * fVar50 - fVar27 * fVar49) * fVar34 +
               (fVar12 * fVar49 - fVar26 * fVar52) * fVar32;
          auVar29._12_4_ =
               (fVar21 * fVar51 - fVar21 * fVar51) * fVar33 +
               (fVar21 * fVar51 - fVar21 * fVar51) * fVar34 +
               (fVar21 * fVar51 - fVar21 * fVar51) * fVar33;
          auVar30 = divps(auVar29,auVar17);
        }
        uVar6 = (int)uVar4 + 1;
        pfVar5 = pfVar5 + 8;
        *(uint *)(param_5 + 2) = uVar6;
        *(undefined1 (*) [16])(param_5 + uVar4 * 2 + 4) = auVar30;
        if (pfVar7 == pfVar5) {
          return param_5;
        }
        uVar4 = (ulong)uVar6;
      } while( true );
    }
    if (1 < param_4 - 1U) {
      return (undefined8 *)0x0;
    }
    if (_LC19 < (_LC0 - fVar37) * (_LC0 - fVar37) +
                (_LC0 - fVar36) * (_LC0 - fVar36) + (_LC0 - fVar35) * (_LC0 - fVar35) + 0.0) {
      param_5[1] = param_3;
      *param_5 = &PTR__HullWithConvexScaled_00109a38;
      *(undefined1 (*) [16])(param_5 + 2) = auVar48;
      return param_5;
    }
  }
  param_5[1] = param_3;
  *param_5 = &PTR__HullWithConvex_00109a08;
  return param_5;
}



/* JPH::ConvexHullShape::Draw(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3, JPH::Color, bool,
   bool) const */

void __thiscall
JPH::ConvexHullShape::Draw
          (undefined8 param_1_00,undefined8 param_2_00,ConvexHullShape *this,long *param_1,
          float *param_2,undefined4 param_6,char param_7)

{
  float *pfVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  ushort *puVar4;
  float fVar5;
  float fVar6;
  long lVar7;
  Geometry *pGVar8;
  float fVar9;
  float fVar10;
  Triangle *pTVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  Geometry *this_00;
  code *pcVar16;
  AABox *pAVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  ushort *puVar27;
  long lVar28;
  long in_FS_OFFSET;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar35;
  undefined1 auVar34 [16];
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  ushort *local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  long *local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pAVar17 = (AABox *)&local_b8;
  if (*(long *)(this + 0x110) == 0) {
    local_140 = *(ushort **)(this + 200);
    puVar4 = local_140 + *(long *)(this + 0xb8) * 2;
    lVar14 = 0;
    if (puVar4 == local_140) {
      lVar15 = 0;
      this_00 = (Geometry *)(*Allocate)(0x40);
      uVar19 = 0;
      local_b8 = *(undefined8 *)(this + 0x80);
      uStack_b0 = *(undefined8 *)(this + 0x88);
      local_a8 = *(undefined8 *)(this + 0x90);
      uStack_a0 = *(undefined8 *)(this + 0x98);
      pcVar16 = *(code **)(*param_1 + 0x20);
    }
    else {
      pbVar22 = (byte *)0x0;
      lVar15 = 0;
      pbVar21 = (byte *)0x0;
      do {
        lVar28 = *(long *)(this + 0xb0);
        pbVar25 = (byte *)((ulong)*local_140 + *(long *)(this + 0xf8));
        pbVar2 = pbVar25 + local_140[1];
        puVar3 = (undefined8 *)(lVar28 + (ulong)*pbVar25 * 0x20);
        pTVar11 = (Triangle *)*puVar3;
        uVar12 = puVar3[1];
        pfVar1 = (float *)(lVar28 + (ulong)pbVar25[1] * 0x20);
        local_178._0_4_ = SUB84(pTVar11,0);
        local_178._4_4_ = (float)((ulong)pTVar11 >> 0x20);
        uStack_170._0_4_ = (float)uVar12;
        uStack_170._4_4_ = (float)((ulong)uVar12 >> 0x20);
        auVar38._0_4_ = *pfVar1 - (float)local_178;
        auVar38._4_4_ = pfVar1[1] - local_178._4_4_;
        auVar38._8_4_ = pfVar1[2] - (float)uStack_170;
        auVar38._12_4_ = pfVar1[3] - uStack_170._4_4_;
        auVar31._0_4_ =
             SQRT(auVar38._8_4_ * auVar38._8_4_ +
                  auVar38._4_4_ * auVar38._4_4_ + auVar38._0_4_ * auVar38._0_4_ + 0.0);
        auVar31._4_4_ = auVar31._0_4_;
        auVar31._8_4_ = auVar31._0_4_;
        auVar31._12_4_ = auVar31._0_4_;
        auVar31 = divps(auVar38,auVar31);
        JPH::DebugRenderer::Triangle::Triangle
                  (pTVar11,uVar12,*(undefined8 *)pfVar1,*(undefined8 *)(pfVar1 + 2),
                   *(undefined8 *)(lVar28 + (ulong)pbVar25[2] * 0x20),
                   *(undefined8 *)(lVar28 + 8 + (ulong)pbVar25[2] * 0x20),pTVar11,uVar12,
                   (AABox *)&local_b8,(undefined4)Color::sWhite);
        uStack_190 = auVar31._8_8_;
        pbVar24 = pbVar21 + 1;
        local_198 = auVar31._0_8_;
        if (pbVar22 < pbVar24) {
          pbVar23 = pbVar24;
          if (pbVar24 <= (byte *)((long)pbVar22 * 2)) {
            pbVar23 = (byte *)((long)pbVar22 * 2);
          }
          lVar15 = (*Reallocate)(lVar15,(long)pbVar22 * 0x6c,(long)pbVar23 * 0x6c,(long)pbVar22 * 3,
                                 uStack_190);
          pbVar22 = pbVar23;
        }
        pbVar23 = pbVar25 + 3;
        puVar3 = (undefined8 *)(lVar15 + (long)pbVar21 * 0x6c);
        *puVar3 = local_b8;
        puVar3[1] = uStack_b0;
        lVar28 = (long)pbVar21 * 0x6c;
        puVar3 = (undefined8 *)(lVar15 + 0x10 + lVar28);
        *puVar3 = local_a8;
        puVar3[1] = uStack_a0;
        puVar3 = (undefined8 *)(lVar15 + 0x20 + lVar28);
        *puVar3 = CONCAT44(fStack_94,local_98);
        puVar3[1] = CONCAT44(fStack_8c,fStack_90);
        puVar3 = (undefined8 *)(lVar15 + 0x30 + lVar28);
        *puVar3 = CONCAT44(fStack_84,local_88);
        puVar3[1] = CONCAT44(fStack_7c,fStack_80);
        puVar3 = (undefined8 *)(lVar15 + 0x40 + lVar28);
        *puVar3 = local_78;
        puVar3[1] = uStack_70;
        puVar3 = (undefined8 *)(lVar15 + 0x50 + lVar28);
        *puVar3 = local_68;
        puVar3[1] = CONCAT44(uStack_5c,uStack_60);
        puVar3 = (undefined8 *)(lVar15 + 0x5c + lVar28);
        *puVar3 = CONCAT44(uStack_58,uStack_5c);
        puVar3[1] = uStack_54;
        pbVar26 = pbVar22;
        if (pbVar23 < pbVar2) {
          do {
            lVar28 = lVar28 + 0x6c;
            lVar7 = *(long *)(this + 0xb0);
            pbVar24 = pbVar24 + 1;
            JPH::DebugRenderer::Triangle::Triangle
                      (pTVar11,uVar12,*(undefined8 *)(lVar7 + (ulong)pbVar23[-1] * 0x20),
                       *(undefined8 *)(lVar7 + 8 + (ulong)pbVar23[-1] * 0x20),
                       *(undefined8 *)(lVar7 + (ulong)*pbVar23 * 0x20),
                       *(undefined8 *)(lVar7 + 8 + (ulong)*pbVar23 * 0x20),pTVar11,uVar12,
                       (AABox *)&local_b8,(undefined4)Color::sWhite);
            pbVar22 = pbVar26;
            if (pbVar26 < pbVar24) {
              pbVar22 = pbVar24;
              if (pbVar24 <= (byte *)((long)pbVar26 * 2)) {
                pbVar22 = (byte *)((long)pbVar26 * 2);
              }
              lVar15 = (*Reallocate)(lVar15,(long)pbVar26 * 0x6c,(long)pbVar22 * 0x6c,local_198);
            }
            pbVar23 = pbVar23 + 1;
            *(undefined8 *)(lVar15 + lVar28) = local_b8;
            ((undefined8 *)(lVar15 + lVar28))[1] = uStack_b0;
            puVar3 = (undefined8 *)(lVar15 + 0x10 + lVar28);
            *puVar3 = local_a8;
            puVar3[1] = uStack_a0;
            puVar3 = (undefined8 *)(lVar15 + 0x20 + lVar28);
            *puVar3 = CONCAT44(fStack_94,local_98);
            puVar3[1] = CONCAT44(fStack_8c,fStack_90);
            puVar3 = (undefined8 *)(lVar15 + 0x30 + lVar28);
            *puVar3 = CONCAT44(fStack_84,local_88);
            puVar3[1] = CONCAT44(fStack_7c,fStack_80);
            puVar3 = (undefined8 *)(lVar15 + 0x40 + lVar28);
            *puVar3 = local_78;
            puVar3[1] = uStack_70;
            puVar3 = (undefined8 *)(lVar15 + 0x50 + lVar28);
            *puVar3 = local_68;
            puVar3[1] = CONCAT44(uStack_5c,uStack_60);
            puVar3 = (undefined8 *)(lVar15 + 0x5c + lVar28);
            *puVar3 = CONCAT44(uStack_58,uStack_5c);
            puVar3[1] = uStack_54;
            pbVar26 = pbVar22;
          } while (pbVar2 != pbVar23);
          pbVar24 = pbVar2 + (long)(pbVar21 + (-2 - (long)pbVar25));
        }
        local_140 = local_140 + 2;
        pbVar21 = pbVar24;
      } while (puVar4 != local_140);
      this_00 = (Geometry *)(*Allocate)(0x40);
      uVar19 = 0;
      local_b8 = *(undefined8 *)(this + 0x80);
      uStack_b0 = *(undefined8 *)(this + 0x88);
      if (pbVar24 != (byte *)0x0) {
        uVar19 = (ulong)pbVar24 & 0xffffffff;
        lVar14 = lVar15;
      }
      local_a8 = *(undefined8 *)(this + 0x90);
      uStack_a0 = *(undefined8 *)(this + 0x98);
      pcVar16 = *(code **)(*param_1 + 0x20);
    }
    (*pcVar16)((Ref *)&local_e0,param_1,lVar14,uVar19);
    pAVar17 = (AABox *)DebugRenderer::Geometry::Geometry
                                 (this_00,(Ref *)&local_e0,(AABox *)&local_b8);
    pGVar8 = *(Geometry **)(this + 0x110);
    if (pGVar8 != this_00) {
      if (pGVar8 != (Geometry *)0x0) {
        LOCK();
        *(int *)pGVar8 = *(int *)pGVar8 + -1;
        UNLOCK();
        if (*(int *)pGVar8 == 0) {
          plVar18 = *(long **)(pGVar8 + 0x18);
          if (plVar18 != (long *)0x0) {
            if ((*(long *)(pGVar8 + 8) != 0) &&
               (plVar20 = plVar18 + *(long *)(pGVar8 + 8) * 2, plVar18 < plVar20)) {
              do {
                if ((long *)*plVar18 != (long *)0x0) {
                  (**(code **)(*(long *)*plVar18 + 0x18))();
                }
                plVar18 = plVar18 + 2;
              } while (plVar18 < plVar20);
              plVar18 = *(long **)(pGVar8 + 0x18);
            }
            *(undefined8 *)(pGVar8 + 8) = 0;
            (*Free)(plVar18);
          }
          pAVar17 = (AABox *)(*Free)(pGVar8);
        }
      }
      *(Geometry **)(this + 0x110) = this_00;
      LOCK();
      *(int *)this_00 = *(int *)this_00 + 1;
      UNLOCK();
    }
    if (local_e0 != (long *)0x0) {
      pAVar17 = (AABox *)(**(code **)(*local_e0 + 0x18))();
    }
    if (lVar15 != 0) {
      pAVar17 = (AABox *)(*Free)(lVar15);
    }
  }
  local_138 = (float)param_1_00;
  fStack_134 = (float)((ulong)param_1_00 >> 0x20);
  fStack_130 = (float)param_2_00;
  fStack_12c = (float)((ulong)param_2_00 >> 0x20);
  auVar29._4_4_ = -(uint)(fStack_134 < 0.0);
  auVar29._0_4_ = -(uint)(local_138 < 0.0);
  auVar29._8_4_ = -(uint)(fStack_130 < 0.0);
  auVar29._12_4_ = -(uint)(fStack_12c < 0.0);
  uVar13 = movmskps((int)pAVar17,auVar29);
  if (param_7 != '\0') {
    plVar18 = *(long **)(this + 0x20);
    if (*(long **)(this + 0x20) == (long *)0x0) {
      plVar18 = PhysicsMaterial::sDefault;
    }
    param_6 = (undefined4)Color::sGrey;
    if (*(code **)(*plVar18 + 0x28) != PhysicsMaterial::GetDebugColor) {
      param_6 = (**(code **)(*plVar18 + 0x28))();
    }
  }
  local_88 = param_2[0xc];
  fStack_84 = param_2[0xd];
  fStack_80 = param_2[0xe];
  fStack_7c = param_2[0xf];
  local_98 = fStack_130 * param_2[8];
  fStack_94 = fStack_130 * param_2[9];
  fStack_90 = fStack_130 * param_2[10];
  fStack_8c = fStack_130 * param_2[0xb];
  local_b8 = CONCAT44(local_138 * param_2[1],local_138 * *param_2);
  uStack_b0 = CONCAT44(local_138 * param_2[3],local_138 * param_2[2]);
  lVar14 = 0;
  local_a8 = CONCAT44(fStack_134 * param_2[5],fStack_134 * param_2[4]);
  uStack_a0 = CONCAT44(fStack_134 * param_2[7],fStack_134 * param_2[6]);
  local_d8 = local_88;
  fStack_d4 = fStack_84;
  fStack_d0 = fStack_80;
  fStack_cc = fStack_7c;
  local_c8 = local_88;
  fStack_c4 = fStack_84;
  fStack_c0 = fStack_80;
  fStack_bc = fStack_7c;
  do {
    fVar5 = *(float *)(*(long *)(this + 0x110) + 0x20 + lVar14);
    fVar6 = *(float *)(*(long *)(this + 0x110) + 0x30 + lVar14);
    lVar15 = lVar14 * 4;
    auVar30._0_8_ =
         CONCAT44(fVar5 * *(float *)((long)&local_b8 + lVar15 + 4),
                  fVar5 * *(float *)((AABox *)&local_b8 + lVar15));
    auVar30._8_4_ = fVar5 * *(float *)((long)&uStack_b0 + lVar15);
    auVar30._12_4_ = fVar5 * *(float *)((long)&uStack_b0 + lVar15 + 4);
    lVar15 = lVar14 * 4;
    auVar34._0_4_ = fVar6 * *(float *)((AABox *)&local_b8 + lVar15);
    auVar34._4_4_ = fVar6 * *(float *)((long)&local_b8 + lVar15 + 4);
    auVar34._8_4_ = fVar6 * *(float *)((long)&uStack_b0 + lVar15);
    auVar34._12_4_ = fVar6 * *(float *)((long)&uStack_b0 + lVar15 + 4);
    lVar14 = lVar14 + 4;
    auVar37._8_4_ = auVar30._8_4_;
    auVar37._0_8_ = auVar30._0_8_;
    auVar37._12_4_ = auVar30._12_4_;
    auVar38 = minps(auVar37,auVar34);
    auVar31 = maxps(auVar30,auVar34);
    local_d8 = local_d8 + auVar38._0_4_;
    fStack_d4 = fStack_d4 + auVar38._4_4_;
    fStack_d0 = fStack_d0 + auVar38._8_4_;
    fStack_cc = fStack_cc + auVar38._12_4_;
    local_c8 = local_c8 + auVar31._0_4_;
    fStack_c4 = fStack_c4 + auVar31._4_4_;
    fStack_c0 = fStack_c0 + auVar31._8_4_;
    fStack_bc = fStack_bc + auVar31._12_4_;
  } while (lVar14 != 0xc);
  (**(code **)(*param_1 + 0x30))
            (param_1,(AABox *)&local_b8,&local_d8,param_6,this + 0x110,
             (POPCOUNT((byte)uVar13 & 7) & 1U) != 0);
  if (sDrawFaceOutlines != '\0') {
    puVar27 = *(ushort **)(this + 200);
    puVar4 = puVar27 + *(long *)(this + 0xb8) * 2;
    for (; puVar4 != puVar27; puVar27 = puVar27 + 2) {
      pbVar21 = (byte *)((ulong)*puVar27 + *(long *)(this + 0xf8));
      pfVar1 = (float *)(*(long *)(this + 0xb0) + (ulong)*pbVar21 * 0x20);
      fVar5 = *pfVar1;
      fVar6 = pfVar1[1];
      fVar9 = pfVar1[2];
      pbVar24 = pbVar21 + puVar27[1];
      local_a8._4_4_ = (float)((ulong)local_a8 >> 0x20);
      uStack_a0._4_4_ = (float)((ulong)uStack_a0 >> 0x20);
      fVar35 = fVar6 * (float)uStack_a0;
      fVar36 = fVar6 * uStack_a0._4_4_;
      local_b8._4_4_ = (float)((ulong)local_b8 >> 0x20);
      uStack_b0._4_4_ = (float)((ulong)uStack_b0 >> 0x20);
      fVar32 = fVar5 * (float)uStack_b0;
      fVar33 = fVar5 * uStack_b0._4_4_;
      local_188 = CONCAT44(fVar9 * fStack_94 + fVar5 * local_b8._4_4_ + fVar6 * local_a8._4_4_ +
                           fStack_84,
                           fVar9 * local_98 + fVar5 * (float)local_b8 + fVar6 * (float)local_a8 +
                           local_88);
      pfVar1 = (float *)(*(long *)(this + 0xb0) + (ulong)pbVar24[-1] * 0x20);
      fVar5 = *pfVar1;
      fVar6 = pfVar1[1];
      fVar10 = pfVar1[2];
      local_178 = CONCAT44(fVar10 * fStack_94 + fVar5 * local_b8._4_4_ + fVar6 * local_a8._4_4_ +
                           fStack_84,
                           fVar10 * local_98 + fVar5 * (float)local_b8 + fVar6 * (float)local_a8 +
                           local_88);
      uStack_170 = CONCAT44(fVar10 * fStack_8c + fVar5 * uStack_b0._4_4_ + fVar6 * uStack_a0._4_4_ +
                            fStack_7c,
                            fVar10 * fStack_90 + fVar5 * (float)uStack_b0 + fVar6 * (float)uStack_a0
                            + fStack_80);
      (**(code **)(*param_1 + 0x10))
                (local_178,uStack_170,local_188,
                 CONCAT44(fVar9 * fStack_8c + fVar33 + fVar36 + fStack_7c,
                          fVar9 * fStack_90 + fVar32 + fVar35 + fStack_80),param_1,
                 (undefined4)Color::sGrey);
      pbVar22 = pbVar21 + 1;
      if (pbVar21 + 1 < pbVar24) {
        do {
          pbVar21 = pbVar22 + 1;
          pfVar1 = (float *)(*(long *)(this + 0xb0) + (ulong)*pbVar22 * 0x20);
          fVar5 = *pfVar1;
          fVar6 = pfVar1[1];
          fVar9 = pfVar1[2];
          local_188 = CONCAT44(fVar9 * fStack_94 + fVar5 * local_b8._4_4_ + fVar6 * local_a8._4_4_ +
                               fStack_84,
                               fVar9 * local_98 + fVar5 * (float)local_b8 + fVar6 * (float)local_a8
                               + local_88);
          pfVar1 = (float *)(*(long *)(this + 0xb0) + (ulong)pbVar22[-1] * 0x20);
          fVar10 = *pfVar1;
          fVar32 = pfVar1[1];
          fVar33 = pfVar1[2];
          local_178 = CONCAT44(fVar33 * fStack_94 +
                               fVar10 * local_b8._4_4_ + fVar32 * local_a8._4_4_ + fStack_84,
                               fVar33 * local_98 +
                               fVar10 * (float)local_b8 + fVar32 * (float)local_a8 + local_88);
          uStack_170 = CONCAT44(fVar33 * fStack_8c +
                                fVar10 * uStack_b0._4_4_ + fVar32 * uStack_a0._4_4_ + fStack_7c,
                                fVar33 * fStack_90 +
                                fVar10 * (float)uStack_b0 + fVar32 * (float)uStack_a0 + fStack_80);
          (**(code **)(*param_1 + 0x10))
                    (local_178,uStack_170,local_188,
                     CONCAT44(fVar9 * fStack_8c + fVar5 * uStack_b0._4_4_ + fVar6 * uStack_a0._4_4_
                              + fStack_7c,
                              fVar9 * fStack_90 +
                              fVar5 * (float)uStack_b0 + fVar6 * (float)uStack_a0 + fStack_80),
                     param_1,(undefined4)Color::sGrey);
          pbVar22 = pbVar21;
        } while (pbVar24 != pbVar21);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ConvexHullShape::GetSubmergedVolume(JPH::Mat44 const&, JPH::Vec3, JPH::Plane const&, float&,
   float&, JPH::Vec3&, JPH::Vec3) const */

void JPH::ConvexHullShape::GetSubmergedVolume
               (PolyhedronSubmergedVolumeCalculator *param_1_00,undefined8 param_2,ushort *param_3,
               undefined8 param_4,long param_1,float *param_6,float *param_7,float *param_8,
               float *param_9,undefined1 (*param_10) [16])

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  bool bVar17;
  char cVar18;
  undefined4 uVar19;
  ulong uVar20;
  float *pfVar21;
  byte *pbVar22;
  uint uVar23;
  long lVar24;
  byte *pbVar25;
  byte bVar26;
  float *pfVar27;
  float *pfVar29;
  byte bVar30;
  uint in_R10D;
  uint uVar31;
  ushort *puVar32;
  long in_FS_OFFSET;
  float fVar33;
  float fVar38;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar37;
  undefined1 auVar36 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 (*local_148) [16];
  uint local_13c;
  float *local_138;
  long local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  float fStack_110;
  float fStack_10c;
  float *local_108;
  undefined2 local_100;
  undefined8 local_fc;
  undefined1 local_e8 [16];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8 [4];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88 [18];
  long local_40;
  float *pfVar28;
  
  pfVar27 = &local_158;
  pfVar28 = &local_158;
  local_118._0_4_ = SUB84(param_1_00,0);
  local_118._4_4_ = (float)((ulong)param_1_00 >> 0x20);
  fStack_110 = (float)param_2;
  fStack_10c = (float)((ulong)param_2 >> 0x20);
  auVar35._8_4_ = fStack_110;
  auVar35._0_8_ = param_1_00;
  auVar35._12_4_ = fStack_10c;
  auVar34._0_4_ = 0.0 - (float)local_118;
  auVar34._4_4_ = 0.0 - local_118._4_4_;
  auVar34._8_4_ = 0.0 - fStack_110;
  auVar34._12_4_ = 0.0 - fStack_10c;
  uVar31 = (uint)*(undefined8 *)(param_1 + 0xa0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  auVar35 = maxps(auVar34,auVar35);
  uVar20 = (long)(int)uVar31 * 0x20 + 0x10;
  *param_8 = *(float *)(param_1 + 0x104) * auVar35._0_4_ * auVar35._4_4_ * auVar35._8_4_;
  pfVar29 = &local_158;
  while (pfVar28 != (float *)((long)&local_158 - (uVar20 & 0xfffffffffffff000))) {
    pfVar27 = (float *)((long)pfVar29 + -0x1000);
    *(undefined8 *)((long)pfVar29 + -8) = *(undefined8 *)((long)pfVar29 + -8);
    pfVar28 = (float *)((long)pfVar29 + -0x1000);
    pfVar29 = (float *)((long)pfVar29 + -0x1000);
  }
  uVar20 = (ulong)((uint)uVar20 & 0xfff);
  lVar8 = -uVar20;
  if (uVar20 != 0) {
    *(undefined8 *)((long)pfVar27 + -8) = *(undefined8 *)((long)pfVar27 + -8);
  }
  fVar42 = *param_6;
  fVar43 = param_6[1];
  fVar44 = param_6[2];
  fVar45 = param_6[3];
  fVar40 = param_6[4];
  fVar2 = param_6[5];
  fVar3 = param_6[6];
  fVar4 = param_6[7];
  local_108 = (float *)((ulong)((long)pfVar27 + lVar8 + 0xf) & 0xfffffffffffffff0);
  fVar41 = param_6[8];
  fVar9 = param_6[9];
  fVar10 = param_6[10];
  fVar11 = param_6[0xb];
  fVar33 = param_6[0xc];
  fVar37 = param_6[0xd];
  fVar38 = param_6[0xe];
  fVar39 = param_6[0xf];
  local_c8[0] = (float)local_118;
  local_c8[1] = 0.0;
  local_c8[2] = 0.0;
  local_c8[3] = 0.0;
  pfVar29 = *(float **)(param_1 + 0xb0);
  local_a8 = ZEXT416((uint)fStack_110) << 0x40;
  lVar24 = 0;
  local_b8 = ZEXT416((uint)local_118._4_4_) << 0x20;
  local_98 = __LC4;
  uStack_90 = _UNK_00109ab8;
  do {
    fVar12 = *(float *)((long)local_c8 + lVar24);
    fVar13 = *(float *)((long)local_c8 + lVar24 + 4);
    fVar14 = *(float *)((long)local_c8 + lVar24 + 8);
    fVar15 = *(float *)(local_b8 + lVar24 + -4);
    *(float *)((long)local_88 + lVar24) =
         fVar15 * fVar33 + fVar13 * fVar40 + fVar12 * fVar42 + fVar14 * fVar41;
    *(float *)((long)local_88 + lVar24 + 4) =
         fVar15 * fVar37 + fVar13 * fVar2 + fVar12 * fVar43 + fVar14 * fVar9;
    *(float *)((long)local_88 + lVar24 + 8) =
         fVar15 * fVar38 + fVar13 * fVar3 + fVar12 * fVar44 + fVar14 * fVar10;
    *(float *)((long)local_88 + lVar24 + 0xc) =
         fVar15 * fVar39 + fVar13 * fVar4 + fVar12 * fVar45 + fVar14 * fVar11;
    lVar24 = lVar24 + 0x10;
  } while (lVar24 != 0x40);
  local_128._0_4_ = SUB84(param_3,0);
  local_128._4_4_ = (float)((ulong)param_3 >> 0x20);
  uStack_120._0_4_ = (float)param_4;
  uStack_120._4_4_ = (float)((ulong)param_4 >> 0x20);
  local_100 = 0x101;
  local_fc = 0;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (float)local_128;
  fStack_d4 = local_128._4_4_;
  fStack_d0 = (float)uStack_120;
  fStack_cc = uStack_120._4_4_;
  fVar42 = (float)local_128;
  fVar43 = local_128._4_4_;
  fVar44 = (float)uStack_120;
  fVar45 = uStack_120._4_4_;
  local_138 = param_9;
  local_130 = param_1;
  local_118 = param_1_00;
  if (0 < (int)uVar31) {
    bVar17 = false;
    uVar23 = 0;
    bVar30 = 1;
    fVar40 = *param_7;
    fVar2 = param_7[2];
    fVar3 = param_7[1];
    fVar4 = param_7[3];
    bVar26 = 1;
    pfVar21 = local_108;
    fVar41 = _LC9;
    do {
      fVar9 = *pfVar29;
      fVar10 = pfVar29[1];
      fVar11 = pfVar29[2];
      fVar33 = fVar9 * local_88[0] + fVar10 * local_88[4] + fVar11 * local_88[8] + local_88[0xc];
      fVar37 = fVar9 * local_88[1] + fVar10 * local_88[5] + fVar11 * local_88[9] + local_88[0xd];
      fVar38 = fVar9 * local_88[2] + fVar10 * local_88[6] + fVar11 * local_88[10] + local_88[0xe];
      fVar39 = fVar38 * fVar2 + fVar37 * fVar3 + fVar33 * fVar40 + 0.0 + fVar4;
      bVar6 = 0.0 <= fVar39;
      bVar30 = bVar30 & bVar6;
      bVar26 = bVar26 & !bVar6;
      if (fVar39 < fVar41) {
        bVar17 = true;
        fVar41 = fVar39;
        in_R10D = uVar23;
      }
      uVar23 = uVar23 + 1;
      *(bool *)(pfVar21 + 5) = bVar6;
      pfVar29 = pfVar29 + 8;
      *pfVar21 = fVar33;
      pfVar21[1] = fVar37;
      pfVar21[2] = fVar38;
      pfVar21[3] = fVar9 * local_88[3] + fVar10 * local_88[7] + fVar11 * local_88[0xb] +
                   local_88[0xf];
      pfVar21[4] = fVar39;
      pfVar21 = pfVar21 + 8;
    } while (uVar31 != uVar23);
    local_100 = CONCAT11(bVar30,bVar26);
    if (bVar17) {
      local_fc = (ulong)in_R10D;
    }
    if (bVar30 == 0) {
      if (bVar26 == 0) {
        uVar31 = (uint)local_fc;
        puVar32 = *(ushort **)(param_1 + 200);
        uStack_120 = param_4;
        if (puVar32 + *(long *)(param_1 + 0xb8) * 2 == puVar32) {
          fVar40 = 0.0;
          auVar35 = (undefined1  [16])0x0;
          local_128 = param_3;
        }
        else {
          local_158 = (float)local_128;
          fStack_154 = local_128._4_4_;
          fStack_150 = (float)uStack_120;
          fStack_14c = uStack_120._4_4_;
          auVar7._4_4_ = -(uint)(local_118._4_4_ < 0.0);
          auVar7._0_4_ = -(uint)((float)local_118 < 0.0);
          auVar7._8_4_ = -(uint)(fStack_110 < 0.0);
          auVar7._12_4_ = -(uint)(fStack_10c < 0.0);
          uVar19 = movmskps((int)*(long *)(param_1 + 0xb8),auVar7);
          local_13c = (uint)((POPCOUNT((byte)uVar19 & 7) & 1U) != 0);
          local_148 = param_10;
          local_128 = puVar32 + *(long *)(param_1 + 0xb8) * 2;
          local_118 = (PolyhedronSubmergedVolumeCalculator *)&local_108;
          do {
            while( true ) {
              pbVar22 = (byte *)((ulong)*puVar32 + *(long *)(local_130 + 0xf8));
              pbVar1 = pbVar22 + puVar32[1];
              pbVar25 = pbVar22;
              if (pbVar22 < pbVar1) {
                do {
                  if (*pbVar25 == uVar31) goto LAB_001037a1;
                  pbVar25 = pbVar25 + 1;
                } while (pbVar1 != pbVar25);
              }
              bVar26 = *pbVar22;
              pbVar22 = pbVar22 + 2;
              if (local_13c == 0) break;
              if (pbVar22 < pbVar1) {
                do {
                  bVar30 = pbVar22[-1];
                  bVar5 = *pbVar22;
                  pbVar22 = pbVar22 + 1;
                  *(undefined8 *)((long)pfVar27 + lVar8 + -8) = 0x10384d;
                  PolyhedronSubmergedVolumeCalculator::AddFace
                            (local_118,(uint)bVar26,(uint)bVar5,(uint)bVar30);
                } while (pbVar1 != pbVar22);
                puVar32 = puVar32 + 2;
                if (local_128 == puVar32) goto LAB_001037ae;
              }
              else {
LAB_001037a1:
                puVar32 = puVar32 + 2;
                if (local_128 == puVar32) goto LAB_001037ae;
              }
            }
            if (pbVar1 <= pbVar22) goto LAB_001037a1;
            do {
              bVar30 = *pbVar22;
              bVar5 = pbVar22[-1];
              pbVar22 = pbVar22 + 1;
              *(undefined8 *)((long)pfVar27 + lVar8 + -8) = 0x10389d;
              PolyhedronSubmergedVolumeCalculator::AddFace
                        (local_118,(uint)bVar26,(uint)bVar5,(uint)bVar30);
            } while (pbVar1 != pbVar22);
            puVar32 = puVar32 + 2;
          } while (local_128 != puVar32);
LAB_001037ae:
          fVar40 = local_fc._4_4_ / __LC25;
          param_10 = local_148;
          fVar42 = local_158;
          fVar43 = fStack_154;
          fVar44 = fStack_150;
          fVar45 = fStack_14c;
          if (local_fc._4_4_ <= 0.0) {
            auVar35 = (undefined1  [16])0x0;
          }
          else {
            auVar36._0_4_ = local_fc._4_4_ * __LC26;
            auVar36._4_4_ = auVar36._0_4_;
            auVar36._8_4_ = auVar36._0_4_;
            auVar36._12_4_ = auVar36._0_4_;
            auVar35 = divps(local_e8,auVar36);
          }
        }
        *param_10 = auVar35;
        *local_138 = fVar40;
        cVar18 = (char)Shape::sDrawSubmergedVolumes;
      }
      else {
        *param_9 = *param_8;
        uVar16 = *(undefined8 *)(param_6 + 0xe);
        *(undefined8 *)*param_10 = *(undefined8 *)(param_6 + 0xc);
        *(undefined8 *)(*param_10 + 8) = uVar16;
        local_128 = param_3;
        uStack_120 = param_4;
        cVar18 = (char)Shape::sDrawSubmergedVolumes;
      }
      goto joined_r0x001036ac;
    }
  }
  cVar18 = (char)Shape::sDrawSubmergedVolumes;
  *param_9 = 0.0;
  *param_10 = (undefined1  [16])0x0;
  local_128 = param_3;
  uStack_120 = param_4;
joined_r0x001036ac:
  if (cVar18 != '\0') {
    local_118._0_4_ = fVar42 + *(float *)*param_10;
    local_118._4_4_ = fVar43 + *(float *)(*param_10 + 4);
    fStack_110 = fVar44 + *(float *)(*param_10 + 8);
    fStack_10c = fVar45 + *(float *)(*param_10 + 0xc);
    *(undefined8 *)((long)pfVar27 + lVar8 + -8) = 0x1036e9;
    JPH::DebugRenderer::DrawWireSphere
              (CONCAT44(local_118._4_4_,(float)local_118),CONCAT44(fStack_10c,fStack_110),
               DebugRenderer::sInstance,(undefined4)Color::sRed,1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)pfVar27 + lVar8 + -8) = &UNK_001038de;
  __stack_chk_fail();
}



/* JPH::GetRTTIOfType(JPH::ConvexHullShapeSettings*) */

undefined1 * JPH::GetRTTIOfType(ConvexHullShapeSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::ConvexHullShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::ConvexHullShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::ConvexHullShapeSettings*)::rtti,
                      "ConvexHullShapeSettings",0x78,
                      GetRTTIOfType(JPH::ConvexHullShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::ConvexHullShapeSettings*)::{lambda(void*)#1}::_FUN,
                      ConvexHullShapeSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::ConvexHullShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::ConvexHullShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::ConvexHullShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::ConvexHullShapeSettings*)::rtti;
}



/* JPH::ConvexHullShapeSettings::CastTo(JPH::RTTI const*) const */

void JPH::ConvexHullShapeSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((ConvexHullShapeSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ConvexHullShape::CastRayHelper(JPH::RayCast const&, float&, float&) const */

bool __thiscall
JPH::ConvexHullShape::CastRayHelper
          (ConvexHullShape *this,RayCast *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar14 = _LC28;
  pfVar1 = *(float **)(this + 0xe0);
  if (*(long *)(this + 0xb8) == 2) {
    fVar14 = *pfVar1;
    fVar15 = pfVar1[1];
    fVar16 = pfVar1[2];
    fVar7 = *(float *)(param_1 + 0x18) * fVar16 +
            *(float *)(param_1 + 0x14) * fVar15 + *(float *)(param_1 + 0x10) * fVar14 + 0.0;
    if ((((float)((uint)fVar7 & _LC16) < __LC29) ||
        (fVar7 = (float)((uint)(*(float *)(param_1 + 4) * fVar15 + *(float *)param_1 * fVar14 + 0.0
                                + *(float *)(param_1 + 8) * fVar16 + pfVar1[3]) ^ _LC21) / fVar7,
        fVar7 < 0.0)) || (_LC0 < fVar7)) {
LAB_00103c77:
      fVar7 = 0.0;
      bVar4 = false;
      fVar14 = _LC28;
    }
    else {
      pbVar2 = (byte *)((ulong)**(ushort **)(this + 200) + *(long *)(this + 0xf8));
      pbVar3 = pbVar2 + (*(ushort **)(this + 200))[1];
      pfVar1 = (float *)(*(long *)(this + 0xb0) + (ulong)*pbVar3 * 0x20);
      fVar8 = *pfVar1;
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      if (pbVar2 < pbVar3) {
        do {
          fVar11 = (fVar7 * *(float *)(param_1 + 0x10) + *(float *)param_1) - fVar8;
          fVar12 = (fVar7 * *(float *)(param_1 + 0x14) + *(float *)(param_1 + 4)) - fVar9;
          fVar13 = (fVar7 * *(float *)(param_1 + 0x18) + *(float *)(param_1 + 8)) - fVar10;
          pfVar1 = (float *)(*(long *)(this + 0xb0) + (ulong)*pbVar2 * 0x20);
          fVar8 = *pfVar1 - fVar8;
          fVar9 = pfVar1[1] - fVar9;
          fVar10 = pfVar1[2] - fVar10;
          if ((fVar12 * fVar8 - fVar9 * fVar11) * fVar16 +
              (fVar11 * fVar10 - fVar8 * fVar13) * fVar15 +
              (fVar13 * fVar9 - fVar10 * fVar12) * fVar14 + 0.0 < 0.0) goto LAB_00103c77;
          pbVar2 = pbVar2 + 1;
          fVar8 = *pfVar1;
          fVar9 = pfVar1[1];
          fVar10 = pfVar1[2];
        } while (pbVar3 != pbVar2);
      }
      bVar4 = true;
      fVar14 = fVar7;
    }
    *param_2 = fVar7;
    *param_3 = fVar14;
    return bVar4;
  }
  pfVar6 = pfVar1 + *(long *)(this + 0xd0) * 4;
  if (pfVar6 == pfVar1) {
    bVar4 = true;
  }
  else {
    fVar15 = 0.0;
    bVar4 = true;
    uVar5 = 0;
    fVar16 = _LC28;
    do {
      while( true ) {
        fVar7 = *(float *)(param_1 + 8) * pfVar1[2] +
                *(float *)(param_1 + 4) * pfVar1[1] + *(float *)param_1 * *pfVar1 + 0.0 + pfVar1[3];
        fVar8 = pfVar1[2] * *(float *)(param_1 + 0x18) +
                pfVar1[1] * *(float *)(param_1 + 0x14) + *pfVar1 * *(float *)(param_1 + 0x10) + 0.0;
        bVar4 = (bool)(bVar4 & fVar7 <= 0.0);
        if (__LC29 <= (float)((uint)fVar8 & _LC16)) break;
        if (0.0 < fVar7) goto LAB_00103ae6;
LAB_00103a59:
        pfVar1 = pfVar1 + 4;
        if (pfVar6 == pfVar1) goto LAB_00103b05;
      }
      fVar7 = (float)((uint)fVar7 ^ _LC21) / fVar8;
      if (0.0 <= fVar8) {
        if (fVar7 <= fVar16) {
          fVar16 = fVar7;
        }
        uVar5 = uVar5 | 2;
        goto LAB_00103a59;
      }
      pfVar1 = pfVar1 + 4;
      if (fVar15 <= fVar7) {
        fVar15 = fVar7;
      }
      uVar5 = uVar5 | 1;
    } while (pfVar6 != pfVar1);
LAB_00103b05:
    if (uVar5 == 3) {
      *param_2 = fVar15;
      *param_3 = fVar16;
      if (fVar16 < fVar15) {
LAB_00103ae6:
        bVar4 = false;
      }
      else {
        bVar4 = 0.0 <= fVar16;
      }
      return bVar4;
    }
  }
  *param_2 = 0.0;
  *param_3 = fVar14;
  return bVar4;
}



/* JPH::ConvexHullShape::CastRay(JPH::RayCast const&, JPH::SubShapeIDCreator const&,
   JPH::RayCastResult&) const */

undefined8 __thiscall
JPH::ConvexHullShape::CastRay
          (ConvexHullShape *this,RayCast *param_1,SubShapeIDCreator *param_2,RayCastResult *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  float local_18;
  float local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = CastRayHelper(this,param_1,&local_18,&local_14);
  if ((char)uVar2 != '\0') {
    if (local_18 < *(float *)(param_3 + 4)) {
      uVar1 = *(undefined4 *)param_2;
      *(float *)(param_3 + 4) = local_18;
      *(undefined4 *)(param_3 + 8) = uVar1;
    }
    else {
      uVar2 = 0;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::ConvexHullShape::CastRay(JPH::RayCast const&, JPH::RayCastSettings const&,
   JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay>&, JPH::ShapeFilter const&) const */

void __thiscall
JPH::ConvexHullShape::CastRay
          (ConvexHullShape *this,RayCast *param_1,RayCastSettings *param_2,
          SubShapeIDCreator *param_3,CollisionCollector *param_4,ShapeFilter *param_5)

{
  char cVar1;
  long in_FS_OFFSET;
  float local_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = (**(code **)(*(long *)param_5 + 0x10))(param_5,this,param_3);
  if (cVar1 != '\0') {
    cVar1 = CastRayHelper(this,param_1,&local_44,&local_40);
    if ((cVar1 != '\0') && (local_44 < *(float *)(param_4 + 8))) {
      local_3c = 0xffffffff;
      if (*(long *)(param_4 + 0x10) != 0) {
        local_3c = *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x34);
      }
      local_34 = *(undefined4 *)param_3;
      if ((param_2[2] != (RayCastSettings)0x0) || (0.0 < local_44)) {
        local_38 = local_44;
        (**(code **)(*(long *)param_4 + 0x28))(param_4,&local_3c);
      }
      if ((param_2[1] == (RayCastSettings)0x1) && (local_40 < *(float *)(param_4 + 8))) {
        local_38 = local_40;
        (**(code **)(*(long *)param_4 + 0x28))(param_4,&local_3c);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ConvexHullShape::sRegister() */

void JPH::ConvexHullShape::sRegister(void)

{
  _ios_base = sRegister()::{lambda()#1}::_FUN;
  _init = (undefined4)Color::sGreen;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* JPH::ConvexHullShape::ConvexHullShape(JPH::ConvexHullShapeSettings const&,
   JPH::Result<JPH::Ref<JPH::Shape> >&) */

void __thiscall
JPH::ConvexHullShape::ConvexHullShape
          (ConvexHullShape *this,ConvexHullShapeSettings *param_1,Result *param_2)

{
  undefined2 *puVar1;
  ushort *puVar2;
  undefined4 uVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  float fVar8;
  byte bVar9;
  Result *pRVar10;
  undefined8 uVar11;
  undefined1 auVar12 [4];
  bool bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  byte *pbVar22;
  undefined8 *puVar23;
  float *pfVar24;
  undefined8 *puVar25;
  size_t __n;
  Result *__dest;
  float fVar26;
  uint uVar27;
  float *pfVar28;
  float *pfVar29;
  long *plVar30;
  ulong uVar31;
  long *plVar32;
  int iVar33;
  float fVar34;
  undefined1 (*pauVar35) [16];
  undefined1 (*pauVar36) [16];
  undefined8 uVar37;
  float *pfVar38;
  float *pfVar39;
  float *pfVar40;
  ulong uVar41;
  short sVar42;
  undefined1 uVar43;
  long in_FS_OFFSET;
  byte bVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar51;
  float fVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar53;
  float fVar54;
  float fVar59;
  float fVar60;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [12];
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float local_308;
  float fStack_304;
  float fStack_300;
  undefined2 local_2e8;
  float fStack_2a8;
  float fStack_2a4;
  float local_23c;
  float local_238;
  float local_234;
  Result *local_230;
  undefined1 local_228 [16];
  int local_218;
  uint uStack_214;
  undefined4 uStack_210;
  ConvexHullBuilder local_208 [8];
  long local_200;
  long *local_1f0;
  undefined8 uStack_1e8;
  long lStack_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined1 local_188 [4];
  float afStack_184 [3];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  float local_148 [32];
  undefined1 local_c8 [4];
  float afStack_c4 [3];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88 [4];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar37 = *(undefined8 *)(param_1 + 0x10);
  *(undefined2 *)(this + 0x18) = 0x600;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = uVar37;
  *(code **)this = JPH::RTTI::RTTI;
  lVar18 = *(long *)(param_1 + 0x40);
  *(long *)(this + 0x20) = lVar18;
  if (lVar18 != 0) {
    LOCK();
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  *(undefined ***)this = &PTR__ConvexHullShape_00109890;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0x28) = uVar3;
  fVar46 = _LC9;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(float *)(this + 0x80) = fVar46;
  *(float *)(this + 0x84) = fVar46;
  *(float *)(this + 0x88) = fVar46;
  *(float *)(this + 0x8c) = fVar46;
  uVar3 = _LC1;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0x108) = 0x7f7fffff;
  *(undefined4 *)(this + 0x90) = uVar3;
  *(undefined4 *)(this + 0x94) = uVar3;
  *(undefined4 *)(this + 0x98) = uVar3;
  *(undefined4 *)(this + 0x9c) = uVar3;
  *(undefined1 (*) [16])(this + 0xa0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xd0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe8) = (undefined1  [16])0x0;
  fVar46 = *(float *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x110) = 0;
  *(float *)(this + 0x100) = fVar46;
  if (fVar46 < 0.0) {
    if (param_2[0x20] == (Result)0x1) {
      plVar30 = *(long **)param_2;
      if (plVar30 != (long *)0x0) {
        LOCK();
        plVar32 = plVar30 + 1;
        *(int *)plVar32 = (int)*plVar32 + -1;
        UNLOCK();
        if ((int)*plVar32 == 0) {
          (**(code **)(*plVar30 + 8))();
        }
      }
    }
    else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
      (*Free)();
    }
    param_2[0x20] = (Result)0x0;
    *(Result **)param_2 = param_2 + 0x10;
    puVar23 = (undefined8 *)(*Allocate)(0x16);
    uVar11 = _UNK_00109b78;
    uVar37 = __LC87;
    *(undefined8 *)(param_2 + 0x10) = 0x15;
    *(undefined8 **)param_2 = puVar23;
    *puVar23 = uVar37;
    puVar23[1] = uVar11;
    *(undefined8 *)((long)puVar23 + 0xd) = 0x7375696461722078;
    *(undefined8 *)(param_2 + 8) = 0x15;
    *(undefined1 *)(*(long *)param_2 + 0x15) = 0;
    param_2[0x20] = (Result)0x2;
  }
  else {
    local_230 = (Result *)0x0;
    JPH::ConvexHullBuilder::ConvexHullBuilder(local_208,(Array *)(param_1 + 0x50));
    uVar14 = JPH::ConvexHullBuilder::Initialize
                       ((int)local_208,*(float *)(param_1 + 0x70),(char **)0x100);
    pRVar10 = local_230;
    if (uVar14 < 2) {
      if (uVar14 == 0) {
        JPH::ConvexHullBuilder::DetermineMaxError
                  ((Face **)local_208,(float *)local_228,(int *)&local_23c,&local_234);
        fVar46 = *(float *)(param_1 + 0x70);
        fVar26 = fVar46;
        if (fVar46 <= local_238) {
          fVar26 = local_238;
        }
        if (fVar26 * __LC26 < local_23c) {
          JPH::StringFormat_abi_cxx11_
                    ((char *)local_88,(double)local_23c,(double)(local_23c / fVar46),
                     "Hull building failed, point %d had an error of %g (relative to tolerance: %g)"
                     ,(ulong)(uint)local_234);
          if (param_2[0x20] == (Result)0x1) {
            plVar30 = *(long **)param_2;
            if (plVar30 != (long *)0x0) {
              LOCK();
              plVar32 = plVar30 + 1;
              *(int *)plVar32 = (int)*plVar32 + -1;
              UNLOCK();
              if ((int)*plVar32 == 0) {
                (**(code **)(*plVar30 + 8))();
              }
            }
          }
          else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
            (*Free)();
          }
          pRVar10 = (Result *)CONCAT44(local_88[1],local_88[0]);
          param_2[0x20] = (Result)0x0;
          *(Result **)param_2 = param_2 + 0x10;
          if (pRVar10 == (Result *)&local_78) {
            uVar20 = CONCAT44(local_88[3],local_88[2]) + 1;
            uVar14 = (uint)uVar20;
            if (uVar14 < 8) {
              if ((uVar20 & 4) == 0) {
                if ((uVar14 != 0) && (param_2[0x10] = *pRVar10, (uVar20 & 2) != 0)) {
                  *(undefined2 *)(param_2 + (uVar20 & 0xffffffff) + 0xe) =
                       *(undefined2 *)(pRVar10 + ((uVar20 & 0xffffffff) - 2));
                }
              }
              else {
                *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)pRVar10;
                *(undefined4 *)(param_2 + (uVar20 & 0xffffffff) + 0xc) =
                     *(undefined4 *)(pRVar10 + ((uVar20 & 0xffffffff) - 4));
              }
            }
            else {
              *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)pRVar10;
              *(undefined8 *)(param_2 + (uVar20 & 0xffffffff) + 8) =
                   *(undefined8 *)(pRVar10 + ((uVar20 & 0xffffffff) - 8));
              lVar18 = (long)(param_2 + 0x10) - ((ulong)(param_2 + 0x18) & 0xfffffffffffffff8);
              uVar14 = uVar14 + (int)lVar18 & 0xfffffff8;
              if (7 < uVar14) {
                uVar15 = 0;
                do {
                  uVar20 = (ulong)uVar15;
                  uVar15 = uVar15 + 8;
                  *(undefined8 *)(((ulong)(param_2 + 0x18) & 0xfffffffffffffff8) + uVar20) =
                       *(undefined8 *)(pRVar10 + (uVar20 - lVar18));
                } while (uVar15 < uVar14);
              }
            }
          }
          else {
            *(Result **)param_2 = pRVar10;
            *(ulong *)(param_2 + 0x10) = CONCAT44(fStack_74,local_78);
          }
          *(long *)(param_2 + 8) = CONCAT44(local_88[3],local_88[2]);
          param_2[0x20] = (Result)0x2;
          goto LAB_0010554f;
        }
      }
      JPH::ConvexHullBuilder::GetCenterOfMassAndVolume(local_208,(float *)(this + 0x30));
      local_1c8 = __LC34;
      uStack_1c0 = _UNK_00109b18;
      local_198 = __LC4;
      fStack_194 = _UNK_00109ab4;
      fStack_190 = _UNK_00109ab8;
      fStack_18c = _LC0;
      local_1b8 = __LC35;
      uStack_1b0 = _UNK_00109b28;
      local_1a8 = __LC36;
      uStack_1a0 = _UNK_00109b38;
      _local_188 = (undefined1  [16])0x0;
      local_178 = (undefined1  [16])0x0;
      local_168 = (undefined1  [16])0x0;
      local_158 = (undefined1  [16])0x0;
      if (local_1f0 + local_200 == local_1f0) {
        fVar46 = 0.0;
      }
      else {
        fVar46 = *(float *)(this + 0x30);
        fVar26 = *(float *)(this + 0x34);
        fVar68 = *(float *)(this + 0x38);
        pfVar28 = local_148 + 0x10;
        lVar18 = *(long *)(param_1 + 0x60);
        plVar30 = local_1f0;
        do {
          lVar21 = *(long *)(*plVar30 + 0x38);
          pfVar38 = (float *)(lVar18 + (long)*(int *)(lVar21 + 0x18) * 0x10);
          fVar53 = *pfVar38 - fVar46;
          fVar59 = pfVar38[1] - fVar26;
          fVar60 = pfVar38[2] - fVar68;
          pfVar38 = (float *)(lVar18 + (long)*(int *)(*(long *)(lVar21 + 8) + 0x18) * 0x10);
          fVar69 = *pfVar38 - fVar46;
          fVar34 = pfVar38[1] - fVar26;
          fVar61 = pfVar38[2] - fVar68;
          for (lVar19 = *(long *)(*(long *)(lVar21 + 8) + 8); lVar21 != lVar19;
              lVar19 = *(long *)(lVar19 + 8)) {
            pfVar38 = (float *)(lVar18 + (long)*(int *)(lVar19 + 0x18) * 0x10);
            fVar45 = *pfVar38 - fVar46;
            fVar51 = pfVar38[1] - fVar26;
            fVar52 = pfVar38[2] - fVar68;
            lVar17 = 0;
            fVar54 = (fVar51 * fVar69 - fVar34 * fVar45) * fVar60 +
                     (fVar45 * fVar61 - fVar69 * fVar52) * fVar59 +
                     (fVar52 * fVar34 - fVar61 * fVar51) * fVar53 + 0.0;
            local_78 = fVar59;
            fStack_74 = fVar34;
            fStack_70 = fVar51;
            fStack_6c = _UNK_00109ab4;
            local_88[0] = fVar53;
            local_88[1] = fVar69;
            local_88[2] = fVar45;
            local_88[3] = __LC4;
            local_68 = fVar60;
            fStack_64 = fVar61;
            fStack_60 = fVar52;
            fStack_5c = _UNK_00109ab8;
            local_58 = 0;
            uStack_54 = 0;
            uStack_50 = 0;
            fStack_4c = _LC0;
            do {
              fVar8 = *(float *)((long)&local_1c8 + lVar17);
              fVar66 = *(float *)((long)&local_1c8 + lVar17 + 4);
              fVar47 = *(float *)((long)&uStack_1c0 + lVar17);
              fVar67 = *(float *)((long)&uStack_1c0 + lVar17 + 4);
              *(float *)(local_c8 + lVar17) =
                   fVar67 * __LC4 + fVar8 * fVar53 + fVar66 * fVar69 + fVar47 * fVar45;
              *(float *)(local_c8 + lVar17 + 4) =
                   fVar67 * _UNK_00109ab4 + fVar8 * fVar59 + fVar66 * fVar34 + fVar47 * fVar51;
              *(float *)(local_c8 + lVar17 + 8) =
                   fVar67 * _UNK_00109ab8 + fVar8 * fVar60 + fVar66 * fVar61 + fVar47 * fVar52;
              *(float *)(local_c8 + lVar17 + 0xc) =
                   fVar67 * _LC0 + fVar8 * 0.0 + fVar66 * 0.0 + fVar47 * 0.0;
              lVar17 = lVar17 + 0x10;
            } while (lVar17 != 0x40);
            auVar12 = local_c8;
            fVar69 = afStack_c4[0];
            fVar34 = afStack_c4[1];
            fVar61 = afStack_c4[2];
            lVar17 = 0;
            do {
              fVar8 = *(float *)((long)local_88 + lVar17);
              fVar66 = *(float *)((long)local_88 + lVar17 + 4);
              fVar47 = *(float *)((long)local_88 + lVar17 + 8);
              fVar67 = *(float *)((long)local_88 + lVar17 + 0xc);
              *(float *)((long)pfVar28 + lVar17) =
                   fVar67 * local_98 +
                   fVar8 * (float)auVar12 + fVar66 * (float)local_b8 + fVar47 * (float)local_a8;
              *(float *)((long)local_148 + lVar17 + 0x44) =
                   fVar67 * fStack_94 +
                   fVar8 * fVar69 + fVar66 * local_b8._4_4_ + fVar47 * local_a8._4_4_;
              *(float *)((long)local_148 + lVar17 + 0x48) =
                   fVar67 * fStack_90 +
                   fVar8 * fVar34 + fVar66 * (float)uStack_b0 + fVar47 * (float)uStack_a0;
              *(float *)((long)local_148 + lVar17 + 0x4c) =
                   fVar67 * fStack_8c +
                   fVar8 * fVar61 + fVar66 * uStack_b0._4_4_ + fVar47 * uStack_a0._4_4_;
              lVar17 = lVar17 + 0x10;
            } while (lVar17 != 0x40);
            lVar17 = 0;
            do {
              *(float *)((long)local_148 + lVar17) = *(float *)((long)pfVar28 + lVar17) * fVar54;
              *(float *)((long)local_148 + lVar17 + 4) =
                   *(float *)((long)local_148 + lVar17 + 0x44) * fVar54;
              *(float *)((long)local_148 + lVar17 + 8) =
                   *(float *)((long)local_148 + lVar17 + 0x48) * fVar54;
              *(float *)((long)local_148 + lVar17 + 0xc) =
                   *(float *)((long)local_148 + lVar17 + 0x4c) * fVar54;
              lVar17 = lVar17 + 0x10;
              pfVar38 = (float *)local_188;
              pfVar24 = local_148;
            } while (lVar17 != 0x40);
            do {
              fVar69 = pfVar24[1];
              fVar34 = pfVar24[2];
              fVar61 = pfVar24[3];
              pfVar29 = pfVar24 + 4;
              *pfVar38 = *pfVar38 + *pfVar24;
              pfVar38[1] = pfVar38[1] + fVar69;
              pfVar38[2] = pfVar38[2] + fVar34;
              pfVar38[3] = pfVar38[3] + fVar61;
              pfVar38 = pfVar38 + 4;
              pfVar24 = pfVar29;
            } while (pfVar29 != pfVar28);
            fVar69 = fVar45;
            fVar34 = fVar51;
            fVar61 = fVar52;
          }
          plVar30 = plVar30 + 1;
        } while (plVar30 != local_1f0 + local_200);
        fVar46 = (float)local_188 + (float)local_178._4_4_ + (float)local_168._8_4_;
      }
      lVar18 = 0;
      local_98 = __LC4;
      fStack_94 = _UNK_00109ab4;
      fStack_90 = _UNK_00109ab8;
      fStack_8c = _LC0;
      _local_c8 = ZEXT416(_LC37);
      local_b8 = __LC38;
      uStack_b0 = _UNK_00109b58;
      local_a8 = __LC39;
      uStack_a0 = _UNK_00109b68;
      do {
        fVar26 = *(float *)(local_c8 + lVar18 + 4);
        fVar68 = *(float *)(local_c8 + lVar18 + 8);
        fVar69 = *(float *)(local_c8 + lVar18 + 0xc);
        *(float *)((long)local_148 + lVar18 + 0x40) = *(float *)(local_c8 + lVar18) * fVar46;
        *(float *)((long)local_148 + lVar18 + 0x44) = fVar26 * fVar46;
        *(float *)((long)local_148 + lVar18 + 0x48) = fVar68 * fVar46;
        *(float *)((long)local_148 + lVar18 + 0x4c) = fVar69 * fVar46;
        lVar18 = lVar18 + 0x10;
      } while (lVar18 != 0x40);
      lVar18 = 0;
      do {
        fVar46 = *(float *)((long)local_148 + lVar18 + 0x44);
        fVar26 = *(float *)((long)local_148 + lVar18 + 0x48);
        fVar68 = *(float *)((long)local_148 + lVar18 + 0x4c);
        fVar69 = *(float *)(local_188 + lVar18 + 4);
        fVar34 = *(float *)(local_188 + lVar18 + 8);
        fVar61 = *(float *)(local_188 + lVar18 + 0xc);
        *(float *)((long)local_88 + lVar18) =
             *(float *)((long)local_148 + lVar18 + 0x40) - *(float *)(local_188 + lVar18);
        *(float *)((long)local_88 + lVar18 + 4) = fVar46 - fVar69;
        *(float *)((long)local_88 + lVar18 + 8) = fVar26 - fVar34;
        *(float *)((long)local_88 + lVar18 + 0xc) = fVar68 - fVar61;
        lVar18 = lVar18 + 0x10;
      } while (lVar18 != 0x40);
      uVar14 = *(uint *)(param_1 + 0x50);
      local_228 = (undefined1  [16])0x0;
      *(ulong *)(this + 0x40) = CONCAT44(local_88[1],local_88[0]);
      *(ulong *)(this + 0x48) = CONCAT44(local_88[3],local_88[2]);
      local_218 = 0;
      *(ulong *)(this + 0x50) = CONCAT44(fStack_74,local_78);
      *(ulong *)(this + 0x58) = CONCAT44(fStack_6c,fStack_70);
      *(ulong *)(this + 0x60) = CONCAT44(fStack_64,local_68);
      *(ulong *)(this + 0x68) = CONCAT44(fStack_5c,fStack_60);
      auVar56._4_4_ = uStack_54;
      auVar56._0_4_ = local_58;
      auVar56._8_4_ = uStack_50;
      auVar56._12_4_ = fStack_4c;
      uVar14 = (uint)(((ulong)uVar14 << 3) / 7);
      *(undefined1 (*) [16])(this + 0x70) = auVar56;
      if (uVar14 < 0x10) {
        uVar14 = 0x10;
      }
      iVar33 = 0x1f;
      if (uVar14 - 1 != 0) {
        for (; uVar14 - 1 >> iVar33 == 0; iVar33 = iVar33 + -1) {
        }
      }
      uStack_214 = 1 << ((char)iVar33 + 1U & 0x1f);
      uStack_210 = (undefined4)((ulong)uStack_214 * 7 >> 3);
      local_228._0_8_ = (*Allocate)((ulong)uStack_214 * 9 + 0xf);
      local_228._8_8_ = local_228._0_8_ + (ulong)uStack_214 * 8;
      memset((void *)local_228._8_8_,0,(ulong)(uStack_214 + 0xf));
      plVar30 = local_1f0 + local_200;
      fVar46 = __LC4;
      fVar26 = _UNK_00109ab4;
      fVar68 = _UNK_00109ab8;
      fVar69 = _LC0;
      for (plVar32 = local_1f0; plVar30 != plVar32; plVar32 = plVar32 + 1) {
        pauVar36 = (undefined1 (*) [16])*plVar32;
        uVar37 = *(undefined8 *)(this + 0xe8);
        sVar42 = 0;
        lVar18 = *(long *)(pauVar36[3] + 8);
        do {
          fVar34 = *(float *)(lVar18 + 0x18);
          local_238 = fVar34;
          if (local_218 != 0) {
            uVar20 = 0xcbf29ce484222325;
            pfVar28 = &local_238;
            do {
              bVar44 = *(byte *)pfVar28;
              pfVar28 = (float *)((long)pfVar28 + 1);
              uVar20 = (uVar20 ^ bVar44) * 0x100000001b3;
            } while (pfVar28 != &local_234);
            bVar44 = (byte)uVar20 | 0x80;
            uVar14 = (uint)(uVar20 >> 7);
            while( true ) {
              uVar14 = uVar14 & uStack_214 - 1;
              pbVar22 = (byte *)(local_228._8_8_ + (ulong)uVar14);
              bVar9 = pbVar22[0xf];
              auVar62[0] = -(bVar44 == *pbVar22);
              auVar62[1] = -(bVar44 == pbVar22[1]);
              auVar62[2] = -(bVar44 == pbVar22[2]);
              auVar62[3] = -(bVar44 == pbVar22[3]);
              auVar62[4] = -(bVar44 == pbVar22[4]);
              auVar62[5] = -(bVar44 == pbVar22[5]);
              auVar62[6] = -(bVar44 == pbVar22[6]);
              auVar62[7] = -(bVar44 == pbVar22[7]);
              auVar62[8] = -(bVar44 == pbVar22[8]);
              auVar62[9] = -(bVar44 == pbVar22[9]);
              auVar62[10] = -(bVar44 == pbVar22[10]);
              auVar62[0xb] = -(bVar44 == pbVar22[0xb]);
              auVar62[0xc] = -(bVar44 == pbVar22[0xc]);
              auVar62[0xd] = -(bVar44 == pbVar22[0xd]);
              auVar62[0xe] = -(bVar44 == pbVar22[0xe]);
              auVar62[0xf] = -(bVar44 == bVar9);
              uVar5 = (ushort)(SUB161(auVar62 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar62[0xf] >> 7) << 0xf;
              uVar27 = (uint)uVar5;
              uVar15 = uVar14;
              if (uVar5 != 0) {
                do {
                  iVar33 = 0;
                  for (uVar6 = uVar27; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                    iVar33 = iVar33 + 1;
                  }
                  uVar15 = uVar15 + iVar33 & uStack_214 - 1;
                  pfVar28 = (float *)(local_228._0_8_ + (ulong)uVar15 * 8);
                  if (fVar34 == *pfVar28) {
                    if (uStack_214 == uVar15) goto LAB_00104586;
                    uVar43 = *(undefined1 *)(pfVar28 + 1);
                    goto LAB_00104691;
                  }
                  bVar4 = (char)iVar33 + 1U & 0x1f;
                  uVar6 = uVar27 >> bVar4;
                  uVar27 = uVar27 >> bVar4;
                  uVar15 = uVar15 + 1;
                } while (uVar6 != 0);
              }
              auVar55[0] = -(*pbVar22 == 0);
              auVar55[1] = -(pbVar22[1] == 0);
              auVar55[2] = -(pbVar22[2] == 0);
              auVar55[3] = -(pbVar22[3] == 0);
              auVar55[4] = -(pbVar22[4] == 0);
              auVar55[5] = -(pbVar22[5] == 0);
              auVar55[6] = -(pbVar22[6] == 0);
              auVar55[7] = -(pbVar22[7] == 0);
              auVar55[8] = -(pbVar22[8] == 0);
              auVar55[9] = -(pbVar22[9] == 0);
              auVar55[10] = -(pbVar22[10] == 0);
              auVar55[0xb] = -(pbVar22[0xb] == 0);
              auVar55[0xc] = -(pbVar22[0xc] == 0);
              auVar55[0xd] = -(pbVar22[0xd] == 0);
              auVar55[0xe] = -(pbVar22[0xe] == 0);
              auVar55[0xf] = -(bVar9 == 0);
              if ((((((((((((((((auVar55 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                               (auVar55 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                              (auVar55 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                             (auVar55 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar55 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar55 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar55 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar55 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar55 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar55 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar55 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar55 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar55 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar55 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar55 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar9 == 0)
              break;
              uVar14 = uVar14 + 0x10;
            }
          }
LAB_00104586:
          uVar41 = *(ulong *)(this + 0xa8);
          lVar21 = *(long *)(this + 0xb0);
          pfVar28 = (float *)((long)(int)fVar34 * 0x10 + *(long *)(param_1 + 0x60));
          lVar19 = *(long *)(this + 0xa0);
          auVar48._0_4_ = *pfVar28 - *(float *)(this + 0x30);
          auVar48._4_4_ = pfVar28[1] - *(float *)(this + 0x34);
          auVar48._8_4_ = pfVar28[2] - *(float *)(this + 0x38);
          auVar48._12_4_ = pfVar28[3] - *(float *)(this + 0x3c);
          uVar20 = lVar19 + 1;
          uVar43 = (undefined1)lVar19;
          auVar56 = minps(*(undefined1 (*) [16])(this + 0x80),auVar48);
          *(undefined1 (*) [16])(this + 0x80) = auVar56;
          auVar56 = maxps(*(undefined1 (*) [16])(this + 0x90),auVar48);
          *(undefined1 (*) [16])(this + 0x90) = auVar56;
          if (uVar41 < uVar20) {
            if (uVar20 <= uVar41 * 2) {
              uVar20 = uVar41 * 2;
            }
            lVar21 = (*Reallocate)(lVar21,uVar41 << 5,uVar20 << 5);
            lVar19 = *(long *)(this + 0xa0);
            *(long *)(this + 0xb0) = lVar21;
            *(ulong *)(this + 0xa8) = uVar20;
            uVar20 = lVar19 + 1;
          }
          *(ulong *)(this + 0xa0) = uVar20;
          auVar56 = __LC3;
          pauVar35 = (undefined1 (*) [16])(lVar21 + lVar19 * 0x20);
          *pauVar35 = auVar48;
          pauVar35[1] = auVar56;
          bVar13 = HashTable<int,std::pair<int,unsigned_char>,JPH::UnorderedMapDetail<int,unsigned_char>,JPH::Hash<int>,std::equal_to<int>>
                   ::InsertKey<false>((HashTable<int,std::pair<int,unsigned_char>,JPH::UnorderedMapDetail<int,unsigned_char>,JPH::Hash<int>,std::equal_to<int>>
                                       *)local_228,(int *)&local_238,(uint *)&local_234);
          fVar69 = _LC0;
          fVar68 = _UNK_00109ab8;
          fVar26 = _UNK_00109ab4;
          fVar46 = __LC4;
          pfVar28 = (float *)(local_228._0_8_ + (ulong)(uint)local_234 * 8);
          if (bVar13) {
            *pfVar28 = fVar34;
          }
          *(undefined1 *)(pfVar28 + 1) = uVar43;
LAB_00104691:
          lVar21 = *(long *)(this + 0xe8);
          uVar41 = *(ulong *)(this + 0xf0);
          lVar19 = *(long *)(this + 0xf8);
          uVar20 = lVar21 + 1;
          if (uVar41 < uVar20) {
            uVar31 = uVar41 * 2;
            if (uVar41 * 2 < uVar20) {
              uVar31 = uVar20;
            }
            lVar19 = (*Reallocate)(lVar19,uVar41,uVar31);
            lVar21 = *(long *)(this + 0xe8);
            *(ulong *)(this + 0xf0) = uVar31;
            fVar69 = _LC0;
            fVar68 = _UNK_00109ab8;
            fVar26 = _UNK_00109ab4;
            fVar46 = __LC4;
            *(long *)(this + 0xf8) = lVar19;
            uVar20 = lVar21 + 1;
          }
          *(ulong *)(this + 0xe8) = uVar20;
          sVar42 = sVar42 + 1;
          *(undefined1 *)(lVar19 + lVar21) = uVar43;
          lVar18 = *(long *)(lVar18 + 8);
        } while (*(long *)(pauVar36[3] + 8) != lVar18);
        lVar18 = *(long *)(this + 0xb8);
        uVar41 = *(ulong *)(this + 0xc0);
        lVar21 = *(long *)(this + 200);
        uVar20 = lVar18 + 1;
        if (uVar41 < uVar20) {
          if (uVar20 <= uVar41 * 2) {
            uVar20 = uVar41 * 2;
          }
          lVar21 = (*Reallocate)(lVar21,uVar41 * 4,uVar20 * 4);
          lVar18 = *(long *)(this + 0xb8);
          *(ulong *)(this + 0xc0) = uVar20;
          fVar69 = _LC0;
          fVar68 = _UNK_00109ab8;
          fVar26 = _UNK_00109ab4;
          fVar46 = __LC4;
          *(long *)(this + 200) = lVar21;
          uVar20 = lVar18 + 1;
        }
        local_2e8 = (undefined2)uVar37;
        auVar56 = *(undefined1 (*) [16])(this + 0x30);
        *(ulong *)(this + 0xb8) = uVar20;
        puVar1 = (undefined2 *)(lVar21 + lVar18 * 4);
        fVar34 = *(float *)*pauVar36;
        uVar41 = *(ulong *)(this + 0xd8);
        puVar1[1] = sVar42;
        fVar61 = *(float *)(*pauVar36 + 4);
        fVar53 = *(float *)(*pauVar36 + 8);
        *puVar1 = local_2e8;
        lVar18 = *(long *)(this + 0xd0);
        auVar62 = *pauVar36;
        fVar59 = *(float *)pauVar36[1];
        fVar60 = *(float *)(pauVar36[1] + 4);
        fVar45 = *(float *)(pauVar36[1] + 8);
        lVar21 = *(long *)(this + 0xe0);
        uVar20 = lVar18 + 1;
        if (uVar41 < uVar20) {
          if (uVar20 <= uVar41 * 2) {
            uVar20 = uVar41 * 2;
          }
          lVar21 = (*Reallocate)(lVar21,uVar41 << 4,uVar20 << 4);
          lVar18 = *(long *)(this + 0xd0);
          *(ulong *)(this + 0xd8) = uVar20;
          fVar69 = _LC0;
          fVar68 = _UNK_00109ab8;
          fVar26 = _UNK_00109ab4;
          fVar46 = __LC4;
          *(long *)(this + 0xe0) = lVar21;
          uVar20 = lVar18 + 1;
        }
        *(ulong *)(this + 0xd0) = uVar20;
        pauVar36 = (undefined1 (*) [16])(lVar21 + lVar18 * 0x10);
        if (pauVar36 != (undefined1 (*) [16])0x0) {
          local_308 = auVar56._0_4_;
          fStack_304 = auVar56._4_4_;
          fStack_300 = auVar56._8_4_;
          auVar63._0_4_ = SQRT(fVar53 * fVar53 + fVar61 * fVar61 + fVar34 * fVar34 + 0.0);
          auVar63._4_4_ = auVar63._0_4_;
          auVar63._8_4_ = auVar63._0_4_;
          auVar63._12_4_ = auVar63._0_4_;
          auVar56 = divps(auVar62,auVar63);
          auVar57._0_12_ = auVar56._0_12_;
          auVar57._12_4_ =
               (uint)((fVar45 - fStack_300) * auVar56._8_4_ +
                     (fVar60 - fStack_304) * auVar56._4_4_ +
                     (fVar59 - local_308) * auVar56._0_4_ + 0.0) ^ _LC21;
          *pauVar36 = auVar57;
        }
      }
      uVar20 = *(ulong *)(this + 0xa0);
      if (uVar20 < 0x101) {
        lVar18 = 0;
        if ((int)uVar20 == 0) {
          lVar21 = 0;
        }
        else {
          do {
            uVar37 = *(undefined8 *)(this + 0xb8);
            if ((int)uVar37 < 1) {
              puVar23 = (undefined8 *)0x0;
LAB_00105249:
              if (param_2[0x20] == (Result)0x1) {
                plVar30 = *(long **)param_2;
                if (plVar30 != (long *)0x0) {
                  LOCK();
                  plVar32 = plVar30 + 1;
                  *(int *)plVar32 = (int)*plVar32 + -1;
                  UNLOCK();
                  if ((int)*plVar32 == 0) {
                    (**(code **)(*plVar30 + 8))();
                  }
                }
              }
              else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
                (*Free)();
              }
              param_2[0x20] = (Result)0x0;
              *(Result **)param_2 = param_2 + 0x10;
              puVar25 = (undefined8 *)(*Allocate)(0x2e);
              uVar11 = _UNK_00109b88;
              uVar37 = __LC88;
              *(undefined8 *)(param_2 + 0x10) = 0x2d;
              *(undefined8 **)param_2 = puVar25;
              *puVar25 = uVar37;
              puVar25[1] = uVar11;
              uVar37 = _UNK_00109b98;
              puVar25[2] = __LC89;
              puVar25[3] = uVar37;
              uVar37 = _UNK_00109ba8;
              *(undefined8 *)((long)puVar25 + 0x1d) = __LC90;
              *(undefined8 *)((long)puVar25 + 0x25) = uVar37;
              *(undefined8 *)(param_2 + 8) = 0x2d;
              *(undefined1 *)(*(long *)param_2 + 0x2d) = 0;
              param_2[0x20] = (Result)0x2;
              if (puVar23 != (undefined8 *)0x0) {
                (*Free)(puVar23);
              }
              goto LAB_001052df;
            }
            lVar21 = 0;
            puVar23 = (undefined8 *)0x0;
            uVar20 = 0;
            uVar41 = 0;
            uVar14 = _LC16;
            do {
              puVar2 = (ushort *)(*(long *)(this + 200) + lVar21 * 4);
              uVar5 = puVar2[1];
              if (uVar5 != 0) {
                uVar31 = (ulong)*puVar2;
                pbVar22 = (byte *)(*(long *)(this + 0xf8) + uVar31);
                do {
                  if ((uint)*pbVar22 == (uint)lVar18) {
                    uVar31 = uVar41 + 1;
                    if (uVar20 < uVar31) {
                      uVar7 = uVar20 * 2;
                      lVar19 = uVar20 * 4;
                      uVar20 = uVar7;
                      if (uVar7 < uVar31) {
                        uVar20 = uVar31;
                      }
                      puVar23 = (undefined8 *)(*Reallocate)(puVar23,lVar19,uVar20 * 4);
                      uVar37 = *(undefined8 *)(this + 0xb8);
                      uVar14 = _LC16;
                    }
                    *(int *)((long)puVar23 + uVar41 * 4) = (int)lVar21;
                    uVar41 = uVar31;
                    break;
                  }
                  pbVar22 = pbVar22 + 1;
                } while (pbVar22 !=
                         (byte *)(*(long *)(this + 0xf8) + 1 + uVar31 + (ulong)(uVar5 - 1)));
              }
              lVar21 = lVar21 + 1;
            } while ((int)lVar21 < (int)uVar37);
            if (uVar41 < 2) goto LAB_00105249;
            iVar33 = (int)uVar41;
            if (iVar33 < 1) {
LAB_001051d4:
              uVar3 = *(undefined4 *)puVar23;
              if (uVar20 == 0) {
                puVar23 = (undefined8 *)(*Reallocate)(puVar23,0,4);
              }
              *(undefined4 *)puVar23 = uVar3;
              iVar33 = 1;
              lVar21 = lVar18 * 0x20 + *(long *)(this + 0xb0);
              *(undefined4 *)(lVar21 + 0x10) = 1;
            }
            else {
              fVar46 = -NAN;
              lVar21 = *(long *)(this + 0xe0);
              fVar68 = -NAN;
              fVar34 = -NAN;
              fVar69 = -NAN;
              lVar19 = 1;
              fVar26 = -NAN;
              fVar61 = _LC86;
              fVar53 = _LC12._4_4_;
              do {
                fVar59 = *(float *)((long)puVar23 + lVar19 * 4 + -4);
                auVar56 = *(undefined1 (*) [16])(lVar21 + (long)(int)fVar59 * 0x10);
                fVar60 = auVar56._0_4_;
                fVar45 = auVar56._4_4_;
                fVar51 = auVar56._8_4_;
                iVar16 = (int)lVar19;
                if (iVar16 < iVar33) {
                  uVar41 = (ulong)(iVar16 + 1);
                  uVar15 = (iVar33 + -2) - iVar16;
                  while( true ) {
                    fVar52 = *(float *)((long)puVar23 + uVar41 * 4 + -4);
                    pfVar28 = (float *)(lVar21 + (long)(int)fVar52 * 0x10);
                    fVar54 = *pfVar28;
                    fVar8 = pfVar28[1];
                    fVar66 = pfVar28[2];
                    fVar47 = fVar66 * fVar51 + fVar8 * fVar45 + fVar54 * fVar60 + 0.0;
                    if (fVar47 < fVar61) {
                      fVar26 = fVar52;
                      fVar61 = fVar47;
                      fVar46 = fVar59;
                    }
                    if (uVar15 == 0xffffffff) break;
                    pfVar28 = (float *)((long)puVar23 + uVar41 * 4);
                    do {
                      pfVar38 = (float *)((long)(int)*pfVar28 * 0x10 + lVar21);
                      fVar47 = (float)((uint)(pfVar38[2] * (fVar8 * fVar60 - fVar54 * fVar45) +
                                             pfVar38[1] * (fVar54 * fVar51 - fVar66 * fVar60) +
                                             *pfVar38 * (fVar66 * fVar45 - fVar8 * fVar51) + 0.0) &
                                      uVar14);
                      if (fVar53 < fVar47) {
                        fVar68 = fVar59;
                        fVar69 = *pfVar28;
                        fVar34 = fVar52;
                        fVar53 = fVar47;
                      }
                      pfVar28 = pfVar28 + 1;
                    } while ((float *)((long)puVar23 + ((uVar41 - 1) + (ulong)uVar15) * 4 + 8) !=
                             pfVar28);
                    uVar15 = uVar15 - 1;
                    uVar41 = uVar41 + 1;
                  }
                }
                lVar19 = lVar19 + 1;
              } while ((ulong)(iVar33 - 1) + 2 != lVar19);
              if (fVar68 == -NAN) {
                if (fVar46 == -NAN) goto LAB_001051d4;
                if (uVar20 < 2) {
                  puVar23 = (undefined8 *)(*Reallocate)(puVar23,uVar20 * 4,8);
                }
                *puVar23 = CONCAT44(fVar26,fVar46);
                iVar33 = 2;
                lVar21 = lVar18 * 0x20 + *(long *)(this + 0xb0);
                *(undefined4 *)(lVar21 + 0x10) = 2;
              }
              else {
                local_88[0] = fVar68;
                local_88[1] = fVar34;
                local_88[2] = fVar69;
                if (uVar20 < 3) {
                  puVar23 = (undefined8 *)(*Reallocate)(puVar23,uVar20 * 4,0xc);
                }
                *puVar23 = CONCAT44(local_88[1],local_88[0]);
                iVar33 = 3;
                *(float *)(puVar23 + 1) = local_88[2];
                lVar21 = lVar18 * 0x20 + *(long *)(this + 0xb0);
                *(undefined4 *)(lVar21 + 0x10) = 3;
              }
            }
            lVar19 = 0;
            do {
              *(undefined4 *)(lVar21 + 0x14 + lVar19 * 4) =
                   *(undefined4 *)((long)puVar23 + lVar19 * 4);
              lVar19 = lVar19 + 1;
            } while (lVar19 != iVar33);
            lVar18 = lVar18 + 1;
            (*Free)(puVar23);
            lVar21 = *(long *)(this + 0xa0);
            fVar46 = __LC4;
            fVar26 = _UNK_00109ab4;
            fVar68 = _UNK_00109ab8;
            fVar69 = _LC0;
          } while ((int)lVar18 < (int)lVar21);
        }
        fVar34 = *(float *)(this + 0x100);
        pfVar28 = *(float **)(this + 0xe0);
        pfVar38 = pfVar28 + *(long *)(this + 0xd0) * 4;
        if (0.0 < fVar34) {
          if (pfVar28 == pfVar38) {
            if (fVar34 <= __LC66) {
              pfVar24 = *(float **)(this + 0xb0);
              goto LAB_00104e97;
            }
            *(undefined4 *)(this + 0x100) = 0x7effffff;
            pfVar24 = *(float **)(this + 0xb0);
          }
          else {
            pfVar24 = *(float **)(this + 0xb0);
            auVar49 = ZEXT416((uint)_LC9);
            pfVar29 = pfVar28;
            do {
              if (pfVar24 + lVar21 * 8 == pfVar24) {
                auVar56 = (undefined1  [16])0x0;
              }
              else {
                auVar56 = (undefined1  [16])0x0;
                pfVar39 = pfVar24;
                do {
                  pfVar40 = pfVar39 + 8;
                  fVar61 = (float)((uint)(pfVar39[2] * pfVar29[2] +
                                          pfVar39[1] * pfVar29[1] + *pfVar39 * *pfVar29 + 0.0 +
                                         pfVar29[3]) ^ _LC21);
                  if (fVar61 <= auVar56._0_4_) {
                    fVar61 = auVar56._0_4_;
                  }
                  auVar56 = ZEXT416((uint)fVar61);
                  pfVar39 = pfVar40;
                } while (pfVar40 != pfVar24 + lVar21 * 8);
              }
              fVar61 = auVar49._0_4_;
              auVar49 = auVar56;
              if (fVar61 <= auVar56._0_4_) {
                auVar49._4_12_ = auVar56._4_12_;
                auVar49._0_4_ = fVar61;
              }
              pfVar29 = pfVar29 + 4;
            } while (pfVar38 != pfVar29);
            fVar61 = auVar49._0_4_ * __LC46;
            if (fVar61 < fVar34) {
              *(float *)(this + 0x100) = fVar61;
              if (0.0 < fVar61) goto LAB_00104ea4;
              goto LAB_0010569e;
            }
LAB_00104e97:
            *(float *)(this + 0x100) = fVar34;
          }
LAB_00104ea4:
          fVar59 = _UNK_00109b08;
          fVar53 = _UNK_00109b04;
          fVar61 = __LC31;
          fVar34 = _LC0;
          pfVar29 = pfVar24 + lVar21 * 8;
          for (; pfVar29 != pfVar24; pfVar24 = pfVar24 + 8) {
            if (pfVar24[4] != 1.4013e-45) {
              pfVar39 = pfVar28 + (long)(int)pfVar24[5] * 4;
              fVar60 = *pfVar39;
              fVar45 = pfVar39[1];
              fVar51 = pfVar39[2];
              pfVar39 = pfVar28 + (long)(int)pfVar24[6] * 4;
              fVar52 = *pfVar39;
              fVar54 = pfVar39[1];
              fVar8 = pfVar39[2];
              if (pfVar24[4] == 4.2039e-45) {
                auVar64 = SUB1612(*(undefined1 (*) [16])(pfVar28 + (long)(int)pfVar24[7] * 4),0);
                fVar66 = fVar34;
                fVar47 = fVar34;
                fVar67 = fVar34;
              }
              else {
                auVar64._4_4_ = fVar52 * fVar51 - fVar60 * fVar8;
                auVar64._0_4_ = fVar8 * fVar45 - fVar51 * fVar54;
                auVar64._8_4_ = fVar54 * fVar60 - fVar45 * fVar52;
                fVar66 = fVar61;
                fVar47 = fVar53;
                fVar67 = fVar59;
              }
              fVar65 = auVar64._8_4_;
              fStack_2a8 = auVar64._0_4_;
              fStack_2a4 = auVar64._4_4_;
              auVar58._0_4_ =
                   (fVar8 * fVar45 - fVar54 * fVar51) * fStack_2a8 +
                   (fVar51 * fStack_2a4 - fVar45 * fVar65) * fVar52 +
                   (fVar65 * fVar54 - fStack_2a4 * fVar8) * fVar60 + 0.0;
              if (auVar58._0_4_ == 0.0) {
                *(undefined4 *)(this + 0x100) = 0;
                break;
              }
              auVar58._4_4_ = auVar58._0_4_;
              auVar58._8_4_ = auVar58._0_4_;
              auVar58._12_4_ = auVar58._0_4_;
              auVar50._0_4_ =
                   (fVar54 * fVar65 - fVar8 * fStack_2a4) * fVar66 +
                   (fStack_2a4 * fVar51 - fVar65 * fVar45) * fVar47 +
                   (fVar45 * fVar8 - fVar51 * fVar54) * fVar67 + fVar46;
              auVar50._4_4_ =
                   (fVar8 * fStack_2a8 - fVar52 * fVar65) * fVar66 +
                   (fVar65 * fVar60 - fStack_2a8 * fVar51) * fVar47 +
                   (fVar51 * fVar52 - fVar60 * fVar8) * fVar67 + fVar26;
              auVar50._8_4_ =
                   (fVar52 * fStack_2a4 - fVar54 * fStack_2a8) * fVar66 +
                   (fStack_2a8 * fVar45 - fStack_2a4 * fVar60) * fVar47 +
                   (fVar60 * fVar54 - fVar45 * fVar52) * fVar67 + fVar68;
              auVar50._12_4_ = fVar66 * 0.0 + fVar47 * 0.0 + fVar67 * 0.0 + fVar69;
              auVar56 = divps(auVar50,auVar58);
              fVar60 = *(float *)(param_1 + 0x6c) /
                       (SQRT(auVar56._8_4_ * auVar56._8_4_ +
                             auVar56._4_4_ * auVar56._4_4_ + auVar56._0_4_ * auVar56._0_4_ + 0.0) -
                       _LC0);
              if (*(float *)(this + 0x100) <= fVar60) {
                fVar60 = *(float *)(this + 0x100);
              }
              *(float *)(this + 0x100) = fVar60;
            }
          }
        }
LAB_0010569e:
        fVar46 = _LC9;
        *(undefined4 *)(this + 0x108) = 0x7f7fffff;
        uVar14 = _LC21;
        fVar26 = fVar46;
        if (pfVar28 != pfVar38) {
          do {
            pfVar24 = pfVar28 + 3;
            pfVar28 = pfVar28 + 4;
            fVar46 = (float)((uint)*pfVar24 ^ uVar14);
            if (fVar26 <= (float)((uint)*pfVar24 ^ uVar14)) {
              fVar46 = fVar26;
            }
            *(float *)(this + 0x108) = fVar46;
            fVar26 = fVar46;
          } while (pfVar28 != pfVar38);
          if (fVar46 <= 0.0) {
            fVar46 = 0.0;
          }
        }
        *(float *)(this + 0x108) = fVar46;
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
        if (param_2[0x20] == (Result)0x1) {
          plVar30 = *(long **)param_2;
          if (plVar30 != (long *)0x0) {
            LOCK();
            plVar32 = plVar30 + 1;
            *(int *)plVar32 = (int)*plVar32 + -1;
            UNLOCK();
            if ((int)*plVar32 == 0) {
              (**(code **)(*plVar30 + 8))();
            }
          }
        }
        else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
          (*Free)();
        }
        *(ConvexHullShape **)param_2 = this;
        param_2[0x20] = (Result)0x1;
      }
      else {
        JPH::StringFormat_abi_cxx11_
                  ((char *)local_88,"Internal error: Too many points in hull (%u), max allowed %d",
                   uVar20 & 0xffffffff,0x100);
        if (param_2[0x20] == (Result)0x1) {
          plVar30 = *(long **)param_2;
          if (plVar30 != (long *)0x0) {
            LOCK();
            plVar32 = plVar30 + 1;
            *(int *)plVar32 = (int)*plVar32 + -1;
            UNLOCK();
            if ((int)*plVar32 == 0) {
              (**(code **)(*plVar30 + 8))();
            }
          }
        }
        else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
          (*Free)();
        }
        pRVar10 = (Result *)CONCAT44(local_88[1],local_88[0]);
        param_2[0x20] = (Result)0x0;
        *(Result **)param_2 = param_2 + 0x10;
        if (pRVar10 == (Result *)&local_78) {
          uVar20 = CONCAT44(local_88[3],local_88[2]) + 1;
          uVar14 = (uint)uVar20;
          if (uVar14 < 8) {
            if ((uVar20 & 4) == 0) {
              if ((uVar14 != 0) && (param_2[0x10] = *pRVar10, (uVar20 & 2) != 0)) {
                *(undefined2 *)(param_2 + (uVar20 & 0xffffffff) + 0xe) =
                     *(undefined2 *)(pRVar10 + ((uVar20 & 0xffffffff) - 2));
              }
            }
            else {
              *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)pRVar10;
              *(undefined4 *)(param_2 + (uVar20 & 0xffffffff) + 0xc) =
                   *(undefined4 *)(pRVar10 + ((uVar20 & 0xffffffff) - 4));
            }
          }
          else {
            *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)pRVar10;
            *(undefined8 *)(param_2 + (uVar20 & 0xffffffff) + 8) =
                 *(undefined8 *)(pRVar10 + ((uVar20 & 0xffffffff) - 8));
            lVar18 = (long)(param_2 + 0x10) - ((ulong)(param_2 + 0x18) & 0xfffffffffffffff8);
            uVar14 = uVar14 + (int)lVar18 & 0xfffffff8;
            if (7 < uVar14) {
              uVar15 = 0;
              do {
                uVar20 = (ulong)uVar15;
                uVar15 = uVar15 + 8;
                *(undefined8 *)(((ulong)(param_2 + 0x18) & 0xfffffffffffffff8) + uVar20) =
                     *(undefined8 *)(pRVar10 + (uVar20 - lVar18));
              } while (uVar15 < uVar14);
            }
          }
        }
        else {
          *(Result **)param_2 = pRVar10;
          *(ulong *)(param_2 + 0x10) = CONCAT44(fStack_74,local_78);
        }
        *(long *)(param_2 + 8) = CONCAT44(local_88[3],local_88[2]);
        param_2[0x20] = (Result)0x2;
LAB_001052df:
      }
      if (local_228._0_8_ != 0) {
        (*Free)();
      }
    }
    else {
      if (param_2[0x20] == (Result)0x1) {
        plVar30 = *(long **)param_2;
        if (plVar30 != (long *)0x0) {
          LOCK();
          plVar32 = plVar30 + 1;
          *(int *)plVar32 = (int)*plVar32 + -1;
          UNLOCK();
          if ((int)*plVar32 == 0) {
            (**(code **)(*plVar30 + 8))();
          }
        }
      }
      else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
        (*Free)();
      }
      __dest = param_2 + 0x10;
      param_2[0x20] = (Result)0x0;
      *(Result **)param_2 = __dest;
      if (pRVar10 == (Result *)0x0) {
        std::__throw_logic_error("basic_string: construction from null is not valid");
        goto LAB_00105a06;
      }
      __n = strlen((char *)pRVar10);
      if (__n < 0x10) {
        if (__n == 1) {
          param_2[0x10] = *pRVar10;
        }
        else if (__n != 0) goto LAB_001055b7;
      }
      else {
        __dest = (Result *)(*Allocate)(__n + 1);
        *(Result **)param_2 = __dest;
        *(size_t *)(param_2 + 0x10) = __n;
LAB_001055b7:
        memcpy(__dest,pRVar10,__n);
        __dest = *(Result **)param_2;
      }
      *(size_t *)(param_2 + 8) = __n;
      __dest[__n] = (Result)0x0;
      param_2[0x20] = (Result)0x2;
    }
LAB_0010554f:
    JPH::ConvexHullBuilder::FreeFaces();
    if (lStack_1d8 != 0) {
      uStack_1e8 = 0;
      (*Free)();
    }
    if (local_1f0 != (long *)0x0) {
      local_200 = 0;
      (*Free)();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105a06:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::ConvexHullShapeSettings::Create() const */

void JPH::ConvexHullShapeSettings::Create(void)

{
  ConvexHullShape *pCVar1;
  undefined1 *__src;
  ulong __n;
  long lVar2;
  ConvexHullShapeSettings CVar3;
  ConvexHullShape *this;
  long *__dest;
  ConvexHullShapeSettings *in_RSI;
  long *in_RDI;
  
  CVar3 = in_RSI[0x38];
  if (CVar3 == (ConvexHullShapeSettings)0x0) {
    this = (ConvexHullShape *)(*Allocate)(0x120);
    ConvexHullShape::ConvexHullShape(this,in_RSI,(Result *)(in_RSI + 0x18));
    pCVar1 = this + 8;
    LOCK();
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    UNLOCK();
    if (*(int *)pCVar1 == 0) {
      (**(code **)(*(long *)this + 8))(this);
    }
    CVar3 = in_RSI[0x38];
  }
  *(ConvexHullShapeSettings *)(in_RDI + 4) = CVar3;
  if (CVar3 == (ConvexHullShapeSettings)0x1) {
    lVar2 = *(long *)(in_RSI + 0x18);
    *in_RDI = lVar2;
    if (lVar2 == 0) {
      return;
    }
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    return;
  }
  if (CVar3 != (ConvexHullShapeSettings)0x2) {
    return;
  }
  __dest = in_RDI + 2;
  *in_RDI = (long)__dest;
  __src = *(undefined1 **)(in_RSI + 0x18);
  __n = *(ulong *)(in_RSI + 0x20);
  if (__n < 0x10) {
    if (__n == 1) {
      *(undefined1 *)(in_RDI + 2) = *__src;
      goto LAB_00105af7;
    }
    if (__n == 0) goto LAB_00105af7;
  }
  else {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    __dest = (long *)(*Allocate)(__n + 1);
    in_RDI[2] = __n;
    *in_RDI = (long)__dest;
  }
  memcpy(__dest,__src,__n);
  __dest = (long *)*in_RDI;
LAB_00105af7:
  in_RDI[1] = __n;
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::_M_replace(unsigned long, unsigned long, char const*, unsigned long) [clone .isra.0] */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_replace
          (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *this,ulong param_1,
          ulong param_2,char *param_3,ulong param_4)

{
  basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *__dest;
  long lVar1;
  basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *pbVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(this + 8);
  if (param_4 <= (param_2 + 0x7fffffffffffffff) - lVar1) {
    pbVar2 = *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)this;
    uVar3 = (param_4 - param_2) + lVar1;
    if (pbVar2 == this + 0x10) {
      uVar4 = 0xf;
    }
    else {
      uVar4 = *(ulong *)(this + 0x10);
    }
    if (uVar4 < uVar3) {
      _M_mutate(this,param_1,param_2,param_3,param_4);
    }
    else {
      __dest = pbVar2 + param_1;
      uVar4 = lVar1 - (param_1 + param_2);
      if ((param_3 < pbVar2) || (pbVar2 + lVar1 < param_3)) {
        if ((uVar4 != 0) && (param_2 != param_4)) {
          if (uVar4 == 1) {
            __dest[param_4] = __dest[param_2];
          }
          else {
            memmove(__dest + param_4,__dest + param_2,uVar4);
          }
        }
        if (param_4 != 0) {
          if (param_4 == 1) {
            *__dest = (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>)*param_3;
          }
          else {
            memcpy(__dest,param_3,param_4);
          }
        }
      }
      else {
        _M_replace_cold(this,(char *)__dest,param_2,param_3,param_4,uVar4);
      }
    }
    *(ulong *)(this + 8) = uVar3;
    *(undefined1 *)(*(long *)this + uVar3) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_length_error("basic_string::_M_replace");
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ConvexHullShape::DrawShrunkShape(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3) const */

void JPH::ConvexHullShape::DrawShrunkShape
               (undefined8 param_1_00,undefined8 param_2_00,long param_1,long *param_2,
               float *param_5)

{
  code *pcVar1;
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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  float *pfVar21;
  float *pfVar22;
  long lVar23;
  long in_FS_OFFSET;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_11b8;
  undefined8 uStack_11b0;
  float local_11a8;
  float fStack_11a4;
  float fStack_11a0;
  float fStack_119c;
  float local_1188;
  float fStack_1184;
  float fStack_1180;
  float fStack_117c;
  float local_1178;
  float fStack_1174;
  float fStack_1170;
  float fStack_116c;
  float local_1168;
  float fStack_1164;
  float fStack_1160;
  float fStack_115c;
  float local_1158;
  float fStack_1154;
  float fStack_1150;
  float fStack_114c;
  int local_111c;
  undefined8 local_1118;
  undefined8 local_1110;
  float local_1108 [16];
  undefined4 local_10c8;
  float afStack_10c4 [3];
  undefined1 local_10b8 [16];
  undefined1 local_10a8 [16];
  undefined8 local_1098;
  undefined8 uStack_1090;
  undefined1 local_1088 [4168];
  long local_40;
  
  lVar19 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0.0 < *(float *)(param_1 + 0x100)) {
    lVar19 = GetSupportFunction(param_1_00,param_2_00,param_1,0,local_1088);
  }
  local_11b8._0_4_ = (undefined4)param_1_00;
  fVar27 = param_5[4];
  fVar2 = param_5[5];
  fVar3 = param_5[6];
  fVar24 = param_5[7];
  fVar25 = param_5[8];
  fVar26 = param_5[9];
  fVar4 = param_5[10];
  fVar5 = param_5[0xb];
  fVar6 = param_5[0xc];
  fVar7 = param_5[0xd];
  fVar8 = param_5[0xe];
  fVar9 = param_5[0xf];
  local_10a8 = ZEXT416((uint)param_2_00) << 0x40;
  fVar10 = *param_5;
  fVar11 = param_5[1];
  fVar12 = param_5[2];
  fVar13 = param_5[3];
  local_10c8 = (undefined4)local_11b8;
  afStack_10c4[0] = 0.0;
  afStack_10c4[1] = 0.0;
  afStack_10c4[2] = 0.0;
  local_1098 = __LC4;
  uStack_1090 = _UNK_00109ab8;
  lVar20 = 0;
  local_10b8 = ZEXT416((uint)((ulong)param_1_00 >> 0x20)) << 0x20;
  do {
    fVar14 = *(float *)((JPH *)&local_10c8 + lVar20);
    fVar15 = *(float *)((long)afStack_10c4 + lVar20);
    fVar16 = *(float *)((long)afStack_10c4 + lVar20 + 4);
    fVar17 = *(float *)(local_10b8 + lVar20 + -4);
    *(float *)((long)local_1108 + lVar20) =
         fVar17 * fVar6 + fVar14 * fVar10 + fVar15 * fVar27 + fVar16 * fVar25;
    *(float *)((long)local_1108 + lVar20 + 4) =
         fVar17 * fVar7 + fVar14 * fVar11 + fVar15 * fVar2 + fVar16 * fVar26;
    *(float *)((long)local_1108 + lVar20 + 8) =
         fVar17 * fVar8 + fVar14 * fVar12 + fVar15 * fVar3 + fVar16 * fVar4;
    *(float *)((long)local_1108 + lVar20 + 0xc) =
         fVar17 * fVar9 + fVar14 * fVar13 + fVar15 * fVar24 + fVar16 * fVar5;
    lVar20 = lVar20 + 0x10;
  } while (lVar20 != 0x40);
  local_111c = 0;
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar20 = 0;
    do {
      local_1188 = (float)local_1108._0_8_;
      fStack_1184 = SUB84(local_1108._0_8_,4);
      fStack_1180 = (float)local_1108._8_8_;
      fStack_117c = SUB84(local_1108._8_8_,4);
      local_1178 = (float)local_1108._16_8_;
      fStack_1174 = SUB84(local_1108._16_8_,4);
      fStack_1170 = (float)local_1108._24_8_;
      fStack_116c = SUB84(local_1108._24_8_,4);
      local_1168 = (float)local_1108._32_8_;
      fStack_1164 = SUB84(local_1108._32_8_,4);
      fStack_1160 = (float)local_1108._40_8_;
      fStack_115c = SUB84(local_1108._40_8_,4);
      local_1158 = (float)local_1108._48_8_;
      fStack_1154 = SUB84(local_1108._48_8_,4);
      fStack_1150 = (float)local_1108._56_8_;
      fStack_114c = SUB84(local_1108._56_8_,4);
      pfVar22 = (float *)(lVar20 * 0x20 + *(long *)(param_1 + 0xb0));
      fVar27 = *pfVar22;
      fVar2 = pfVar22[1];
      fVar3 = pfVar22[2];
      fVar24 = fVar3 * local_1168 + fVar27 * local_1188 + fVar2 * local_1178 + local_1158;
      fVar25 = fVar3 * fStack_1164 + fVar27 * fStack_1184 + fVar2 * fStack_1174 + fStack_1154;
      fVar26 = fVar3 * fStack_1160 + fVar27 * fStack_1180 + fVar2 * fStack_1170 + fStack_1150;
      fVar27 = fVar3 * fStack_115c + fVar27 * fStack_117c + fVar2 * fStack_116c + fStack_114c;
      local_11b8 = CONCAT44(fVar25,fVar24);
      uStack_11b0 = CONCAT44(fVar27,fVar26);
      local_11a8 = fVar24;
      fStack_11a4 = fVar25;
      fStack_11a0 = fVar26;
      fStack_119c = fVar27;
      if (lVar19 != 0) {
        pfVar21 = (float *)(lVar19 + 0x20 + lVar20 * 0x10);
        fVar2 = *pfVar21;
        fVar3 = pfVar21[1];
        fVar4 = pfVar21[2];
        local_11a8 = fVar4 * local_1168 + fVar2 * local_1188 + fVar3 * local_1178 + local_1158;
        fStack_11a4 = fVar4 * fStack_1164 + fVar2 * fStack_1184 + fVar3 * fStack_1174 + fStack_1154;
        fStack_11a0 = fVar4 * fStack_1160 + fVar2 * fStack_1180 + fVar3 * fStack_1170 + fStack_1150;
        fStack_119c = fVar4 * fStack_115c + fVar2 * fStack_117c + fVar3 * fStack_116c + fStack_114c;
      }
      lVar23 = 0;
      (**(code **)(*param_2 + 0x10))
                (local_11b8,uStack_11b0,CONCAT44(fStack_11a4,local_11a8),
                 CONCAT44(fStack_119c,fStack_11a0),param_2,(undefined4)Color::sGreen);
      if (0 < (int)pfVar22[4]) {
        do {
          lVar18 = lVar23 + 5;
          lVar23 = lVar23 + 1;
          pfVar21 = (float *)((long)(int)pfVar22[lVar18] * 0x10 + *(long *)(param_1 + 0xe0));
          (**(code **)(*param_2 + 0x10))
                    (local_11b8,uStack_11b0,
                     CONCAT44(pfVar21[1] * _LC94 + fVar25,*pfVar21 * _LC94 + fVar24),
                     CONCAT44(pfVar21[3] * _LC94 + fVar27,pfVar21[2] * _LC94 + fVar26),param_2,
                     (undefined4)Color::sYellow);
        } while ((int)lVar23 < (int)pfVar22[4]);
      }
      pcVar1 = *(code **)(*param_2 + 0x38);
      ConvertToString<int>((JPH *)&local_10c8,&local_111c);
      local_1118 = CONCAT44(afStack_10c4[2],afStack_10c4[1]);
      local_1110 = CONCAT44(afStack_10c4[0],local_10c8);
      (*pcVar1)(local_11b8,uStack_11b0,param_2,&local_1118,(undefined4)Color::sWhite);
      if ((undefined1 *)CONCAT44(afStack_10c4[0],local_10c8) != local_10b8) {
        (*Free)();
      }
      local_111c = (int)lVar20 + 1;
      lVar20 = lVar20 + 1;
    } while ((int)lVar20 < *(int *)(param_1 + 0xa0));
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::Shape::MustBeStatic() const */

undefined8 JPH::Shape::MustBeStatic(void)

{
  return 0;
}



/* JPH::Shape::GetSubShapeUserData(JPH::SubShapeID const&) const */

undefined8 JPH::Shape::GetSubShapeUserData(SubShapeID *param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* JPH::Shape::SaveSubShapeState(JPH::Array<JPH::RefConst<JPH::Shape>,
   JPH::STLAllocator<JPH::RefConst<JPH::Shape> > >&) const */

void JPH::Shape::SaveSubShapeState(Array *param_1)

{
  return;
}



/* JPH::Shape::RestoreSubShapeState(JPH::RefConst<JPH::Shape> const*, unsigned int) */

void JPH::Shape::RestoreSubShapeState(RefConst *param_1,uint param_2)

{
  return;
}



/* JPH::PhysicsMaterial::GetDebugColor() const */

undefined4 JPH::PhysicsMaterial::GetDebugColor(void)

{
  return (undefined4)Color::sGrey;
}



/* JPH::ConvexShape::GetSubShapeIDBitsRecursive() const */

undefined8 JPH::ConvexShape::GetSubShapeIDBitsRecursive(void)

{
  return 0;
}



/* JPH::ConvexShape::GetMaterial(JPH::SubShapeID const&) const */

long JPH::ConvexShape::GetMaterial(SubShapeID *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar1 = PhysicsMaterial::sDefault;
  }
  return lVar1;
}



/* JPH::ConvexHullShape::GetCenterOfMass() const */

undefined1  [16] __thiscall JPH::ConvexHullShape::GetCenterOfMass(ConvexHullShape *this)

{
  return *(undefined1 (*) [16])(this + 0x30);
}



/* JPH::ConvexHullShape::GetLocalBounds() const */

void JPH::ConvexHullShape::GetLocalBounds(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_RSI;
  undefined8 *in_RDI;
  
  uVar1 = *(undefined8 *)(in_RSI + 0x88);
  uVar2 = *(undefined8 *)(in_RSI + 0x90);
  uVar3 = *(undefined8 *)(in_RSI + 0x98);
  *in_RDI = *(undefined8 *)(in_RSI + 0x80);
  in_RDI[1] = uVar1;
  in_RDI[2] = uVar2;
  in_RDI[3] = uVar3;
  return;
}



/* JPH::ConvexHullShape::GetInnerRadius() const */

undefined4 __thiscall JPH::ConvexHullShape::GetInnerRadius(ConvexHullShape *this)

{
  return *(undefined4 *)(this + 0x108);
}



/* JPH::ConvexHullShape::GetVolume() const */

undefined4 __thiscall JPH::ConvexHullShape::GetVolume(ConvexHullShape *this)

{
  return *(undefined4 *)(this + 0x104);
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::ConvexHullShape::HullNoConvex::GetSupport(JPH::Vec3) const */

undefined1  [16]
JPH::ConvexHullShape::HullNoConvex::GetSupport(undefined8 param_1,float param_2,long param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  float fVar3;
  float fVar4;
  undefined1 local_18 [16];
  
  pauVar2 = (undefined1 (*) [16])(param_3 + 0x20);
  pauVar1 = pauVar2 + *(uint *)(param_3 + 0x10);
  if ((ulong)*(uint *)(param_3 + 0x10) != 0) {
    local_18 = (undefined1  [16])0x0;
    fVar4 = _LC1;
    do {
      fVar3 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20) * (float)((ulong)param_1 >> 0x20) +
              (float)*(undefined8 *)*pauVar2 * (float)param_1 + 0.0 +
              (float)*(undefined8 *)(*pauVar2 + 8) * param_2;
      if (fVar4 < fVar3) {
        fVar4 = fVar3;
        local_18 = *pauVar2;
      }
      pauVar2 = pauVar2 + 1;
    } while (pauVar2 != pauVar1);
    return local_18;
  }
  return (undefined1  [16])0x0;
}



/* JPH::ConvexHullShape::HullNoConvex::GetConvexRadius() const */

undefined4 __thiscall JPH::ConvexHullShape::HullNoConvex::GetConvexRadius(HullNoConvex *this)

{
  return *(undefined4 *)(this + 8);
}



/* JPH::ConvexHullShape::HullWithConvex::GetSupport(JPH::Vec3) const */

undefined1  [16]
JPH::ConvexHullShape::HullWithConvex::GetSupport(undefined8 param_1,float param_2,long param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  float fVar3;
  float fVar4;
  undefined1 local_18 [16];
  
  pauVar1 = *(undefined1 (**) [16])(*(long *)(param_3 + 8) + 0xb0);
  pauVar2 = pauVar1 + *(long *)(*(long *)(param_3 + 8) + 0xa0) * 2;
  if (pauVar2 != pauVar1) {
    local_18 = (undefined1  [16])0x0;
    fVar4 = _LC1;
    do {
      fVar3 = *(float *)(*pauVar1 + 8) * param_2 +
              *(float *)(*pauVar1 + 4) * (float)((ulong)param_1 >> 0x20) +
              *(float *)*pauVar1 * (float)param_1 + 0.0;
      if (fVar4 < fVar3) {
        local_18 = *pauVar1;
        fVar4 = fVar3;
      }
      pauVar1 = pauVar1 + 2;
    } while (pauVar1 != pauVar2);
    return local_18;
  }
  return (undefined1  [16])0x0;
}



/* JPH::ConvexHullShape::HullWithConvex::GetConvexRadius() const */

undefined8 JPH::ConvexHullShape::HullWithConvex::GetConvexRadius(void)

{
  return 0;
}



/* JPH::ConvexHullShape::HullWithConvexScaled::GetSupport(JPH::Vec3) const */

undefined1  [16]
JPH::ConvexHullShape::HullWithConvexScaled::GetSupport
          (undefined8 param_1,float param_2,long param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_18 [8];
  float fStack_10;
  float fStack_c;
  
  pfVar1 = *(float **)(*(long *)(param_3 + 8) + 0xb0);
  pfVar2 = pfVar1 + *(long *)(*(long *)(param_3 + 8) + 0xa0) * 8;
  if (pfVar2 != pfVar1) {
    _local_18 = (undefined1  [16])0x0;
    fVar7 = _LC1;
    do {
      fVar4 = *pfVar1 * *(float *)(param_3 + 0x10);
      fVar5 = pfVar1[1] * *(float *)(param_3 + 0x14);
      fVar6 = pfVar1[2] * *(float *)(param_3 + 0x18);
      fVar3 = fVar6 * param_2 +
              fVar5 * (float)((ulong)param_1 >> 0x20) + fVar4 * (float)param_1 + 0.0;
      if (fVar7 < fVar3) {
        local_18._4_4_ = fVar5;
        local_18._0_4_ = fVar4;
        fStack_10 = fVar6;
        fStack_c = pfVar1[3] * *(float *)(param_3 + 0x1c);
        fVar7 = fVar3;
      }
      pfVar1 = pfVar1 + 8;
    } while (pfVar2 != pfVar1);
    return _local_18;
  }
  return (undefined1  [16])0x0;
}



/* JPH::ConvexHullShape::HullWithConvexScaled::GetConvexRadius() const */

undefined8 JPH::ConvexHullShape::HullWithConvexScaled::GetConvexRadius(void)

{
  return 0;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x00106464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::ConvexHullShape::HullWithConvexScaled::~HullWithConvexScaled() */

void __thiscall
JPH::ConvexHullShape::HullWithConvexScaled::~HullWithConvexScaled(HullWithConvexScaled *this)

{
  return;
}



/* JPH::ConvexHullShape::HullWithConvex::~HullWithConvex() */

void __thiscall JPH::ConvexHullShape::HullWithConvex::~HullWithConvex(HullWithConvex *this)

{
  return;
}



/* JPH::ConvexHullShape::HullNoConvex::~HullNoConvex() */

void __thiscall JPH::ConvexHullShape::HullNoConvex::~HullNoConvex(HullNoConvex *this)

{
  return;
}



/* std::__cxx11::basic_stringbuf<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::pbackfail(int) */

int __thiscall
std::__cxx11::basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>>::pbackfail
          (basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> *this,int param_1)

{
  char cVar1;
  ulong uVar2;
  char cVar3;
  
  uVar2 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 8) < uVar2) {
    if (param_1 == -1) {
      *(ulong *)(this + 0x10) = uVar2 - 1;
      return 0;
    }
    cVar1 = *(char *)(uVar2 - 1);
    cVar3 = (char)param_1;
    if ((((byte)this[0x40] & 0x10) != 0) || (cVar1 == cVar3)) {
      *(ulong *)(this + 0x10) = uVar2 - 1;
      if (cVar1 != cVar3) {
        *(char *)(uVar2 - 1) = cVar3;
      }
      return param_1;
    }
  }
  return -1;
}



/* std::__cxx11::basic_stringbuf<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::seekoff(long, std::_Ios_Seekdir, std::_Ios_Openmode) */

undefined1  [16] __thiscall
std::__cxx11::basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>>::seekoff
          (basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> *this,ulong param_1,
          int param_3,uint param_4)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  byte bVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  
  uVar9 = *(uint *)(this + 0x40) & 8;
  bVar12 = (param_4 & uVar9) != 0;
  bVar4 = (byte)((*(uint *)(this + 0x40) & param_4) >> 4);
  bVar11 = bVar12 & bVar4 & param_3 != 1;
  bVar4 = ((byte)(param_4 >> 3) ^ 1) & 1 & bVar4;
  bVar6 = ((byte)(param_4 >> 4) ^ 1) & bVar12;
  if (bVar6 == 0) {
    lVar8 = *(long *)(this + 0x20);
    if (((lVar8 != 0) || (param_1 == 0)) && (bVar4 != 0 || bVar11 != 0)) goto LAB_00106563;
  }
  else {
    lVar8 = *(long *)(this + 8);
    if ((lVar8 != 0) || (param_1 == 0)) {
LAB_00106563:
      uVar10 = *(ulong *)(this + 0x28);
      if ((uVar10 != 0) && ((*(ulong *)(this + 0x18) == 0 || (*(ulong *)(this + 0x18) < uVar10)))) {
        if (uVar9 == 0) {
          *(ulong *)(this + 8) = uVar10;
          *(ulong *)(this + 0x10) = uVar10;
        }
        *(ulong *)(this + 0x18) = uVar10;
      }
      if (param_3 == 1) {
        uVar10 = (uVar10 - lVar8) + param_1;
        param_1 = param_1 + (*(long *)(this + 0x10) - lVar8);
      }
      else {
        uVar10 = param_1;
        if (param_3 == 2) {
          param_1 = param_1 + (*(long *)(this + 0x18) - lVar8);
          uVar10 = param_1;
        }
      }
      if (((bVar6 == 0 && bVar11 == 0) || ((long)param_1 < 0)) ||
         (*(long *)(this + 0x18) - lVar8 < (long)param_1)) {
        param_1 = 0xffffffffffffffff;
      }
      else {
        *(ulong *)(this + 0x10) = *(long *)(this + 8) + param_1;
      }
      if (((-1 < (long)uVar10) && (bVar4 != 0 || bVar11 != 0)) &&
         ((long)uVar10 <= *(long *)(this + 0x18) - lVar8)) {
        lVar8 = *(long *)(this + 0x20);
        uVar3 = uVar10;
        if (0x7fffffff < (long)uVar10) {
          auVar1._8_8_ = 0;
          auVar1._0_8_ = uVar10 - 0x80000000;
          lVar7 = SUB168(ZEXT816(0x200000005) * auVar1,8);
          uVar3 = uVar10 - 0x7fffffff;
          uVar5 = uVar10;
          if (0x7fffffff < (long)uVar3) {
            uVar5 = uVar3;
            uVar2 = uVar10;
            if ((lVar7 + ((uVar10 - 0x80000000) - lVar7 >> 1) >> 0x1e & 1) == 0) goto LAB_00106638;
            while (uVar3 = uVar2 - 0xfffffffe, 0x7fffffff < (long)uVar3) {
LAB_00106638:
              uVar5 = uVar3 - 0x7fffffff;
              uVar2 = uVar3;
            }
          }
          lVar8 = (lVar8 + 0x7fffffff + uVar10) - uVar5;
        }
        *(ulong *)(this + 0x28) = uVar3 + lVar8;
        param_1 = uVar10;
      }
      goto LAB_0010667c;
    }
  }
  param_1 = 0xffffffffffffffff;
LAB_0010667c:
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_1;
  return auVar13;
}



/* JPH::ConvexHullShape::HullWithConvex::~HullWithConvex() */

void __thiscall JPH::ConvexHullShape::HullWithConvex::~HullWithConvex(HullWithConvex *this)

{
  operator_delete(this,0x10);
  return;
}



/* JPH::ConvexHullShape::HullWithConvexScaled::~HullWithConvexScaled() */

void __thiscall
JPH::ConvexHullShape::HullWithConvexScaled::~HullWithConvexScaled(HullWithConvexScaled *this)

{
  operator_delete(this,0x20);
  return;
}



/* JPH::ConvexHullShape::HullNoConvex::~HullNoConvex() */

void __thiscall JPH::ConvexHullShape::HullNoConvex::~HullNoConvex(HullNoConvex *this)

{
  operator_delete(this,0x1020);
  return;
}



/* JPH::Shape::GetWorldSpaceBounds(JPH::Mat44 const&, JPH::Vec3) const */

float * JPH::Shape::GetWorldSpaceBounds
                  (undefined8 param_1_00,undefined8 param_2,float *param_1,long *param_4,
                  long param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 auVar11 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float local_78;
  float fStack_74;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  fVar15 = (float)((ulong)param_2 >> 0x20);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*param_4 + 0x20) == ConvexHullShape::GetLocalBounds) {
    local_68 = *(float *)(param_4 + 0x10);
    fStack_64 = *(float *)((long)param_4 + 0x84);
    fStack_60 = *(float *)(param_4 + 0x11);
    fStack_5c = *(float *)((long)param_4 + 0x8c);
    local_58 = *(float *)(param_4 + 0x12);
    fStack_54 = *(float *)((long)param_4 + 0x94);
    fStack_50 = *(float *)(param_4 + 0x13);
    fStack_4c = *(float *)((long)param_4 + 0x9c);
  }
  else {
    (**(code **)(*param_4 + 0x20))(&local_68);
  }
  local_78 = (float)param_1_00;
  fStack_74 = (float)((ulong)param_1_00 >> 0x20);
  auVar7._0_8_ = CONCAT44(fStack_64 * fStack_74,local_68 * local_78);
  auVar7._8_4_ = fStack_60 * (float)param_2;
  auVar7._12_4_ = fStack_5c * fVar15;
  lVar6 = 0;
  fStack_50 = fStack_50 * (float)param_2;
  fStack_4c = fStack_4c * fVar15;
  auVar11._8_4_ = auVar7._8_4_;
  auVar11._0_8_ = auVar7._0_8_;
  auVar11._12_4_ = auVar7._12_4_;
  auVar9._4_4_ = fStack_54 * fStack_74;
  auVar9._0_4_ = local_58 * local_78;
  auVar9._8_4_ = fStack_50;
  auVar9._12_4_ = fStack_4c;
  local_38 = maxps(auVar11,auVar9);
  auVar20._4_4_ = fStack_54 * fStack_74;
  auVar20._0_4_ = local_58 * local_78;
  auVar20._8_4_ = fStack_50;
  auVar20._12_4_ = fStack_4c;
  local_48 = minps(auVar7,auVar20);
  fVar15 = *(float *)(param_5 + 0x30);
  fVar16 = *(float *)(param_5 + 0x34);
  fVar17 = *(float *)(param_5 + 0x38);
  fVar18 = *(float *)(param_5 + 0x3c);
  fVar10 = fVar15;
  fVar12 = fVar16;
  fVar13 = fVar17;
  fVar14 = fVar18;
  do {
    fVar2 = *(float *)(local_48 + lVar6);
    fVar3 = *(float *)(local_38 + lVar6);
    pfVar1 = (float *)(param_5 + lVar6 * 4);
    auVar8._0_8_ = CONCAT44(fVar2 * pfVar1[1],fVar2 * *pfVar1);
    auVar8._8_4_ = fVar2 * pfVar1[2];
    auVar8._12_4_ = fVar2 * pfVar1[3];
    pfVar1 = (float *)(param_5 + lVar6 * 4);
    lVar6 = lVar6 + 4;
    auVar19._8_4_ = auVar8._8_4_;
    auVar19._0_8_ = auVar8._0_8_;
    auVar19._12_4_ = auVar8._12_4_;
    auVar4._4_4_ = fVar3 * pfVar1[1];
    auVar4._0_4_ = fVar3 * *pfVar1;
    auVar4._8_4_ = fVar3 * pfVar1[2];
    auVar4._12_4_ = fVar3 * pfVar1[3];
    auVar20 = minps(auVar19,auVar4);
    auVar5._4_4_ = fVar3 * pfVar1[1];
    auVar5._0_4_ = fVar3 * *pfVar1;
    auVar5._8_4_ = fVar3 * pfVar1[2];
    auVar5._12_4_ = fVar3 * pfVar1[3];
    auVar9 = maxps(auVar8,auVar5);
    fVar10 = fVar10 + auVar20._0_4_;
    fVar12 = fVar12 + auVar20._4_4_;
    fVar13 = fVar13 + auVar20._8_4_;
    fVar14 = fVar14 + auVar20._12_4_;
    fVar15 = fVar15 + auVar9._0_4_;
    fVar16 = fVar16 + auVar9._4_4_;
    fVar17 = fVar17 + auVar9._8_4_;
    fVar18 = fVar18 + auVar9._12_4_;
  } while (lVar6 != 0xc);
  *param_1 = fVar10;
  param_1[1] = fVar12;
  param_1[2] = fVar13;
  param_1[3] = fVar14;
  param_1[4] = fVar15;
  param_1[5] = fVar16;
  param_1[6] = fVar17;
  param_1[7] = fVar18;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::__cxx11::basic_stringbuf<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::showmanyc() */

long __thiscall
std::__cxx11::basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>>::showmanyc
          (basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> *this)

{
  ulong uVar1;
  ulong uVar2;
  
  if (((byte)this[0x40] & 8) == 0) {
    return -1;
  }
  uVar1 = *(ulong *)(this + 0x28);
  uVar2 = *(ulong *)(this + 0x18);
  if ((uVar1 != 0) && ((uVar2 == 0 || (uVar2 < uVar1)))) {
    *(ulong *)(this + 0x18) = uVar1;
    return uVar1 - *(long *)(this + 0x10);
  }
  return uVar2 - *(long *)(this + 0x10);
}



/* std::__cxx11::basic_stringbuf<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::underflow() */

ulong __thiscall
std::__cxx11::basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>>::underflow
          (basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> *this)

{
  byte *pbVar1;
  byte *pbVar2;
  
  if (((byte)this[0x40] & 8) != 0) {
    pbVar1 = *(byte **)(this + 0x28);
    pbVar2 = *(byte **)(this + 0x18);
    if ((pbVar1 != (byte *)0x0) && ((pbVar2 == (byte *)0x0 || (pbVar2 < pbVar1)))) {
      *(byte **)(this + 0x18) = pbVar1;
      pbVar2 = pbVar1;
    }
    if (*(byte **)(this + 0x10) < pbVar2) {
      return (ulong)**(byte **)(this + 0x10);
    }
  }
  return 0xffffffff;
}



/* std::__cxx11::basic_stringbuf<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::~basic_stringbuf() */

void __thiscall
std::__cxx11::basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>>::~basic_stringbuf
          (basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> *this)

{
  *(undefined ***)this = &PTR__basic_stringbuf_00109718;
  if (*(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(this + 0x48) !=
      this + 0x58) {
    (*JPH::Free)();
  }
  *(undefined **)this = &ios::vtable;
  std::locale::~locale((locale *)(this + 0x38));
  return;
}



/* std::__cxx11::basic_stringbuf<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::~basic_stringbuf() */

void __thiscall
std::__cxx11::basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>>::~basic_stringbuf
          (basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> *this)

{
  *(undefined ***)this = &PTR__basic_stringbuf_00109718;
  if (*(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(this + 0x48) !=
      this + 0x58) {
    (*JPH::Free)();
  }
  *(undefined **)this = &ios::vtable;
  std::locale::~locale((locale *)(this + 0x38));
  operator_delete(this,0x68);
  return;
}



/* std::__cxx11::basic_ostringstream<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::~basic_ostringstream() */

void __thiscall
std::__cxx11::basic_ostringstream<char,std::char_traits<char>,JPH::STLAllocator<char>>::
~basic_ostringstream(basic_ostringstream<char,std::char_traits<char>,JPH::STLAllocator<char>> *this)

{
  *(undefined8 *)(this + 0x70) = 0x109838;
  *(undefined8 *)this = 0x109810;
  *(undefined ***)(this + 8) = &PTR__basic_stringbuf_00109718;
  if (*(basic_ostringstream<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(this + 0x50) !=
      this + 0x60) {
    (*JPH::Free)();
  }
  *(undefined **)(this + 8) = &ios::vtable;
  std::locale::~locale((locale *)(this + 0x40));
  *(undefined8 *)this = 0x1097a0;
  *(undefined **)(this + 0x70) = &JPH::ConvexShape::vtable;
  std::ios_base::~ios_base((ios_base *)(this + 0x70));
  return;
}



/* virtual thunk to std::__cxx11::basic_ostringstream<char, std::char_traits<char>,
   JPH::STLAllocator<char> >::~basic_ostringstream() */

void __thiscall
std::__cxx11::basic_ostringstream<char,std::char_traits<char>,JPH::STLAllocator<char>>::
~basic_ostringstream(basic_ostringstream<char,std::char_traits<char>,JPH::STLAllocator<char>> *this)

{
  basic_ostringstream<char,std::char_traits<char>,JPH::STLAllocator<char>> *pbVar1;
  
  pbVar1 = this + *(long *)(*(long *)this + -0x18);
  *(undefined8 *)(pbVar1 + 0x70) = 0x109838;
  *(undefined8 *)pbVar1 = 0x109810;
  *(undefined ***)(pbVar1 + 8) = &PTR__basic_stringbuf_00109718;
  if (*(basic_ostringstream<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(pbVar1 + 0x50)
      != pbVar1 + 0x60) {
    (*JPH::Free)();
  }
  *(undefined **)(pbVar1 + 8) = &ios::vtable;
  std::locale::~locale((locale *)(pbVar1 + 0x40));
  *(undefined8 *)pbVar1 = 0x1097a0;
  *(undefined **)(pbVar1 + 0x70) = &JPH::ConvexShape::vtable;
  std::ios_base::~ios_base((ios_base *)(pbVar1 + 0x70));
  return;
}



/* std::__cxx11::basic_ostringstream<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::~basic_ostringstream() */

void __thiscall
std::__cxx11::basic_ostringstream<char,std::char_traits<char>,JPH::STLAllocator<char>>::
~basic_ostringstream(basic_ostringstream<char,std::char_traits<char>,JPH::STLAllocator<char>> *this)

{
  *(undefined8 *)(this + 0x70) = 0x109838;
  *(undefined8 *)this = 0x109810;
  *(undefined ***)(this + 8) = &PTR__basic_stringbuf_00109718;
  if (*(basic_ostringstream<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(this + 0x50) !=
      this + 0x60) {
    (*JPH::Free)();
  }
  *(undefined **)(this + 8) = &ios::vtable;
  std::locale::~locale((locale *)(this + 0x40));
  *(undefined8 *)this = 0x1097a0;
  *(undefined **)(this + 0x70) = &JPH::ConvexShape::vtable;
  std::ios_base::~ios_base((ios_base *)(this + 0x70));
  operator_delete(this,0x178);
  return;
}



/* virtual thunk to std::__cxx11::basic_ostringstream<char, std::char_traits<char>,
   JPH::STLAllocator<char> >::~basic_ostringstream() */

void __thiscall
std::__cxx11::basic_ostringstream<char,std::char_traits<char>,JPH::STLAllocator<char>>::
~basic_ostringstream(basic_ostringstream<char,std::char_traits<char>,JPH::STLAllocator<char>> *this)

{
  basic_ostringstream<char,std::char_traits<char>,JPH::STLAllocator<char>> *pbVar1;
  
  pbVar1 = this + *(long *)(*(long *)this + -0x18);
  *(undefined8 *)(pbVar1 + 0x70) = 0x109838;
  *(undefined8 *)pbVar1 = 0x109810;
  *(undefined ***)(pbVar1 + 8) = &PTR__basic_stringbuf_00109718;
  if (*(basic_ostringstream<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(pbVar1 + 0x50)
      != pbVar1 + 0x60) {
    (*JPH::Free)();
  }
  *(undefined **)(pbVar1 + 8) = &ios::vtable;
  std::locale::~locale((locale *)(pbVar1 + 0x40));
  *(undefined8 *)pbVar1 = 0x1097a0;
  *(undefined **)(pbVar1 + 0x70) = &JPH::ConvexShape::vtable;
  std::ios_base::~ios_base((ios_base *)(pbVar1 + 0x70));
  operator_delete(pbVar1,0x178);
  return;
}



/* JPH::ConvexHullShape::~ConvexHullShape() */

void __thiscall JPH::ConvexHullShape::~ConvexHullShape(ConvexHullShape *this)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  
  piVar1 = *(int **)(this + 0x110);
  *(undefined ***)this = &PTR__ConvexHullShape_00109890;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      plVar2 = *(long **)(piVar1 + 6);
      if (plVar2 != (long *)0x0) {
        if ((*(long *)(piVar1 + 2) != 0) &&
           (plVar3 = plVar2 + *(long *)(piVar1 + 2) * 2, plVar2 < plVar3)) {
          do {
            if ((long *)*plVar2 != (long *)0x0) {
              (**(code **)(*(long *)*plVar2 + 0x18))();
            }
            plVar2 = plVar2 + 2;
          } while (plVar2 < plVar3);
          plVar2 = *(long **)(piVar1 + 6);
        }
        piVar1[2] = 0;
        piVar1[3] = 0;
        (*Free)(plVar2);
      }
      (*Free)(piVar1);
    }
  }
  if (*(long *)(this + 0xf8) != 0) {
    *(undefined8 *)(this + 0xe8) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0xe0) != 0) {
    *(undefined8 *)(this + 0xd0) = 0;
    (*Free)();
  }
  if (*(long *)(this + 200) != 0) {
    *(undefined8 *)(this + 0xb8) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0xb0) != 0) {
    *(undefined8 *)(this + 0xa0) = 0;
    (*Free)();
  }
  plVar2 = *(long **)(this + 0x20);
  *(code **)this = JPH::RTTI::RTTI;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      if (*(code **)(*plVar2 + 0x18) != PhysicsMaterial::~PhysicsMaterial) {
                    /* WARNING: Could not recover jumptable at 0x00106d3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x18))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00106cbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)();
      return;
    }
  }
  return;
}



/* JPH::ConvexHullShape::~ConvexHullShape() */

void __thiscall JPH::ConvexHullShape::~ConvexHullShape(ConvexHullShape *this)

{
  ~ConvexHullShape(this);
                    /* WARNING: Could not recover jumptable at 0x00106d51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* std::__cxx11::basic_stringbuf<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::seekpos(std::fpos<__mbstate_t>, std::_Ios_Openmode) */

undefined1  [16]
std::__cxx11::basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>>::seekpos
          (long param_1,long param_2,ulong param_3,uint param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  uVar2 = *(uint *)(param_1 + 0x40) & param_4;
  uVar5 = *(uint *)(param_1 + 0x40) & 8;
  if ((param_4 & uVar5) == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 == 0) goto LAB_00106db1;
LAB_00106d89:
    if ((uVar2 & 0x18) == 0) goto LAB_00106d8d;
    uVar6 = *(ulong *)(param_1 + 0x28);
    if ((uVar6 != 0) && ((*(ulong *)(param_1 + 0x18) == 0 || (*(ulong *)(param_1 + 0x18) < uVar6))))
    {
      if (uVar5 != 0) {
        *(ulong *)(param_1 + 0x18) = uVar6;
        goto LAB_00106dff;
      }
      *(ulong *)(param_1 + 0x18) = uVar6;
      *(ulong *)(param_1 + 8) = uVar6;
      *(ulong *)(param_1 + 0x10) = uVar6;
      if (param_2 < 0) goto LAB_00106d8d;
LAB_00106ed7:
      if ((long)(uVar6 - lVar3) < param_2) goto LAB_00106d8d;
      goto LAB_00106e23;
    }
LAB_00106dff:
    if (-1 < param_2) {
LAB_00106e04:
      uVar8 = *(ulong *)(param_1 + 0x18);
      goto LAB_00106e08;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != 0) goto LAB_00106d89;
LAB_00106db1:
    if ((param_2 != 0) || ((uVar2 & 0x18) == 0)) goto LAB_00106d8d;
    uVar6 = *(ulong *)(param_1 + 0x28);
    uVar8 = *(ulong *)(param_1 + 0x18);
    if ((uVar6 != 0) && ((uVar8 == 0 || (uVar8 < uVar6)))) {
      if (uVar5 == 0) {
        *(ulong *)(param_1 + 0x18) = uVar6;
        *(ulong *)(param_1 + 8) = uVar6;
        *(ulong *)(param_1 + 0x10) = uVar6;
        goto LAB_00106ed7;
      }
      *(ulong *)(param_1 + 0x18) = uVar6;
      goto LAB_00106e04;
    }
LAB_00106e08:
    if (param_2 <= (long)(uVar8 - lVar3)) {
      if ((param_4 & uVar5) != 0) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8) + param_2;
      }
LAB_00106e23:
      if ((uVar2 & 0x10) != 0) {
        lVar9 = *(long *)(param_1 + 0x20);
        lVar3 = param_2;
        if (0x7fffffff < param_2) {
          auVar1._8_8_ = 0;
          auVar1._0_8_ = param_2 - 0x80000000U;
          lVar7 = SUB168(ZEXT816(0x200000005) * auVar1,8);
          lVar3 = param_2 + -0x7fffffff;
          lVar4 = param_2;
          if (0x7fffffff < lVar3) {
            if ((lVar7 + ((param_2 - 0x80000000U) - lVar7 >> 1) >> 0x1e & 1) == 0)
            goto LAB_00106e80;
            lVar4 = lVar3;
            for (lVar3 = param_2 + -0xfffffffe; 0x7fffffff < lVar3; lVar3 = lVar3 + -0xfffffffe) {
LAB_00106e80:
              lVar4 = lVar3 + -0x7fffffff;
            }
          }
          lVar9 = (lVar9 + 0x7fffffff + param_2) - lVar4;
        }
        *(long *)(param_1 + 0x28) = lVar3 + lVar9;
      }
      uVar6 = param_3 & 0xffffffff;
      param_3 = param_3 >> 0x20;
      goto LAB_00106d98;
    }
  }
LAB_00106d8d:
  param_3 = 0;
  uVar6 = 0;
  param_2 = -1;
LAB_00106d98:
  auVar10._8_8_ = uVar6 | param_3 << 0x20;
  auVar10._0_8_ = param_2;
  return auVar10;
}



/* JPH::ConvexHullShapeSettings::~ConvexHullShapeSettings() */

void __thiscall
JPH::ConvexHullShapeSettings::~ConvexHullShapeSettings(ConvexHullShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR_GetRTTI_00109858;
  if (*(long *)(this + 0x60) != 0) {
    *(undefined8 *)(this + 0x50) = 0;
    (*Free)();
  }
  plVar2 = *(long **)(this + 0x40);
  *(undefined8 **)this = &Color::sWhite;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
        (*Free)();
      }
      else {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
  }
  *(code **)this = JPH::DebugRenderer::Triangle::Triangle;
  if (this[0x38] == (ConvexHullShapeSettings)0x1) {
    plVar2 = *(long **)(this + 0x18);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00106faf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))();
        return;
      }
    }
  }
  else if ((this[0x38] == (ConvexHullShapeSettings)0x2) &&
          (*(ConvexHullShapeSettings **)(this + 0x18) != this + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00106f87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::ConvexHullShapeSettings::~ConvexHullShapeSettings() */

void __thiscall
JPH::ConvexHullShapeSettings::~ConvexHullShapeSettings(ConvexHullShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR_GetRTTI_00109858;
  if (*(long *)(this + 0x60) != 0) {
    *(undefined8 *)(this + 0x50) = 0;
    (*Free)();
  }
  plVar2 = *(long **)(this + 0x40);
  *(undefined8 **)this = &Color::sWhite;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
        (*Free)();
      }
      else {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
  }
  *(code **)this = JPH::DebugRenderer::Triangle::Triangle;
  if (this[0x38] == (ConvexHullShapeSettings)0x1) {
    plVar2 = *(long **)(this + 0x18);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
  }
  else if ((this[0x38] == (ConvexHullShapeSettings)0x2) &&
          (*(ConvexHullShapeSettings **)(this + 0x18) != this + 0x28)) {
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x00107044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::DebugRenderer::Geometry::Geometry(JPH::Ref<JPH::RefTargetVirtual> const&, JPH::AABox const&)
    */

void __thiscall JPH::DebugRenderer::Geometry::Geometry(Geometry *this,Ref *param_1,AABox *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  
  uVar3 = *(undefined8 *)param_2;
  uVar5 = *(undefined8 *)(param_2 + 8);
  plVar2 = *(long **)param_1;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = uVar3;
  *(undefined8 *)(this + 0x28) = uVar5;
  *(undefined8 *)(this + 0x30) = uVar6;
  *(undefined8 *)(this + 0x38) = uVar7;
  if (plVar2 == (long *)0x0) {
    lVar12 = 0x10;
    uVar13 = 1;
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar12 = *(long *)(this + 8);
    uVar13 = lVar12 + 1;
    if (uVar13 <= *(ulong *)(this + 0x10)) {
      puVar8 = *(undefined8 **)(this + 0x18);
      goto LAB_00107133;
    }
    uVar4 = *(ulong *)(this + 0x10) * 2;
    if (uVar13 <= uVar4) {
      uVar13 = uVar4;
    }
    lVar12 = uVar13 << 4;
  }
  puVar8 = (undefined8 *)(*Allocate)(lVar12);
  puVar11 = *(undefined8 **)(this + 0x18);
  if (puVar11 != (undefined8 *)0x0) {
    lVar12 = *(long *)(this + 8);
    if (puVar8 < puVar11) {
      for (puVar9 = puVar8; puVar9 < puVar8 + lVar12 * 2; puVar9 = puVar9 + 2) {
        uVar3 = *puVar11;
        uVar1 = *(undefined4 *)(puVar11 + 1);
        puVar11 = puVar11 + 2;
        *puVar9 = uVar3;
        *(undefined4 *)(puVar9 + 1) = uVar1;
      }
    }
    else {
      puVar11 = puVar11 + lVar12 * 2 + -2;
      puVar9 = puVar8 + lVar12 * 2 + -2;
      if (!CARRY8(lVar12 * 0x10 - 0x10,(ulong)puVar8)) {
        do {
          uVar3 = *puVar11;
          uVar1 = *(undefined4 *)(puVar11 + 1);
          puVar10 = puVar9 + -2;
          puVar11 = puVar11 + -2;
          *puVar9 = uVar3;
          *(undefined4 *)(puVar9 + 1) = uVar1;
          puVar9 = puVar10;
        } while (puVar8 <= puVar10);
      }
    }
    (*Free)();
  }
  lVar12 = *(long *)(this + 8);
  *(undefined8 **)(this + 0x18) = puVar8;
  *(ulong *)(this + 0x10) = uVar13;
  uVar13 = lVar12 + 1;
LAB_00107133:
  *(ulong *)(this + 8) = uVar13;
  puVar8[lVar12 * 2] = plVar2;
  *(undefined4 *)(puVar8 + lVar12 * 2 + 1) = 0x7f7fffff;
  return;
}



/* JPH::PolyhedronSubmergedVolumeCalculator::sTetrahedronVolume2(JPH::Vec3, float, JPH::Vec3, float,
   JPH::Vec3, float, JPH::Vec3, float, float&, JPH::Vec3&) */

void __thiscall
JPH::PolyhedronSubmergedVolumeCalculator::sTetrahedronVolume2
          (undefined8 param_1,undefined8 param_2,float param_3,undefined8 param_4,undefined8 param_5
          ,float param_6,undefined8 param_7,undefined8 param_8,
          PolyhedronSubmergedVolumeCalculator *this,float *param_10,undefined1 (*param_11) [16])

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
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
  float in_stack_00000008;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_88;
  
  fVar22 = (float)((ulong)param_8 >> 0x20);
  fVar19 = (float)((ulong)param_7 >> 0x20);
  local_d8 = (float)param_1;
  fVar4 = local_d8;
  fStack_d4 = (float)((ulong)param_1 >> 0x20);
  fVar5 = fStack_d4;
  fStack_d0 = (float)param_2;
  fVar6 = fStack_d0;
  fStack_cc = (float)((ulong)param_2 >> 0x20);
  fVar7 = fStack_cc;
  auVar13._0_4_ = param_3 - in_stack_00000008;
  local_b8._0_4_ = (float)param_4;
  fVar8 = (float)local_b8;
  local_b8._4_4_ = (float)((ulong)param_4 >> 0x20);
  fVar9 = local_b8._4_4_;
  uStack_b0._0_4_ = (float)param_5;
  fVar10 = (float)uStack_b0;
  uStack_b0._4_4_ = (float)((ulong)param_5 >> 0x20);
  fVar11 = uStack_b0._4_4_;
  fVar31 = local_d8;
  fVar32 = fStack_d4;
  fVar33 = fStack_d0;
  fVar34 = fStack_cc;
  if (_LC23 <= (float)((uint)auVar13._0_4_ & _LC16)) {
    auVar13._4_4_ = auVar13._0_4_;
    auVar13._8_4_ = auVar13._0_4_;
    auVar13._12_4_ = auVar13._0_4_;
    auVar12._0_4_ = ((float)param_7 - local_d8) * param_3;
    auVar12._4_4_ = (fVar19 - fStack_d4) * param_3;
    auVar12._8_4_ = ((float)param_8 - fStack_d0) * param_3;
    auVar12._12_4_ = (fVar22 - fStack_cc) * param_3;
    auVar13 = divps(auVar12,auVar13);
    fVar31 = local_d8 + auVar13._0_4_;
    fVar32 = fStack_d4 + auVar13._4_4_;
    fVar33 = fStack_d0 + auVar13._8_4_;
    fVar34 = fStack_cc + auVar13._12_4_;
  }
  auVar14._0_4_ = param_3 - in_stack_00000028;
  if (_LC23 <= (float)((uint)auVar14._0_4_ & _LC16)) {
    auVar14._4_4_ = auVar14._0_4_;
    auVar14._8_4_ = auVar14._0_4_;
    auVar14._12_4_ = auVar14._0_4_;
    auVar20._0_4_ = param_3 * (fStack0000000000000018 - local_d8);
    auVar20._4_4_ = param_3 * (fStack000000000000001c - fStack_d4);
    auVar20._8_4_ = param_3 * (fStack0000000000000020 - fStack_d0);
    auVar20._12_4_ = param_3 * (fStack0000000000000024 - fStack_cc);
    auVar13 = divps(auVar20,auVar14);
    local_d8 = auVar13._0_4_ + local_d8;
    fStack_d4 = auVar13._4_4_ + fStack_d4;
    fStack_d0 = auVar13._8_4_ + fStack_d0;
    fStack_cc = auVar13._12_4_ + fStack_cc;
  }
  auVar21._0_4_ = param_6 - in_stack_00000028;
  fVar27 = (float)local_b8;
  fVar28 = local_b8._4_4_;
  fVar29 = (float)uStack_b0;
  fVar30 = uStack_b0._4_4_;
  if (_LC23 <= (float)((uint)auVar21._0_4_ & _LC16)) {
    auVar21._4_4_ = auVar21._0_4_;
    auVar21._8_4_ = auVar21._0_4_;
    auVar21._12_4_ = auVar21._0_4_;
    auVar15._0_4_ = (fStack0000000000000018 - (float)local_b8) * param_6;
    auVar15._4_4_ = (fStack000000000000001c - local_b8._4_4_) * param_6;
    auVar15._8_4_ = (fStack0000000000000020 - (float)uStack_b0) * param_6;
    auVar15._12_4_ = (fStack0000000000000024 - uStack_b0._4_4_) * param_6;
    auVar13 = divps(auVar15,auVar21);
    fVar27 = auVar13._0_4_ + (float)local_b8;
    fVar28 = auVar13._4_4_ + local_b8._4_4_;
    fVar29 = auVar13._8_4_ + (float)uStack_b0;
    fVar30 = auVar13._12_4_ + uStack_b0._4_4_;
  }
  local_c8 = (float)local_b8;
  fStack_c4 = local_b8._4_4_;
  fStack_c0 = (float)uStack_b0;
  fStack_bc = uStack_b0._4_4_;
  auVar16._0_4_ = param_6 - in_stack_00000008;
  if (_LC23 <= (float)(_LC16 & (uint)auVar16._0_4_)) {
    auVar16._4_4_ = auVar16._0_4_;
    auVar16._8_4_ = auVar16._0_4_;
    auVar16._12_4_ = auVar16._0_4_;
    auVar25._0_4_ = ((float)param_7 - (float)local_b8) * param_6;
    auVar25._4_4_ = (fVar19 - local_b8._4_4_) * param_6;
    auVar25._8_4_ = ((float)param_8 - (float)uStack_b0) * param_6;
    auVar25._12_4_ = (fVar22 - uStack_b0._4_4_) * param_6;
    auVar13 = divps(auVar25,auVar16);
    local_c8 = auVar13._0_4_ + (float)local_b8;
    fStack_c4 = auVar13._4_4_ + local_b8._4_4_;
    fStack_c0 = auVar13._8_4_ + (float)uStack_b0;
    fStack_bc = auVar13._12_4_ + uStack_b0._4_4_;
  }
  if ((char)Shape::sDrawSubmergedVolumes != '\0') {
    fVar19 = *(float *)(this + 0x30);
    fVar22 = *(float *)(this + 0x34);
    fVar23 = *(float *)(this + 0x38);
    fVar24 = *(float *)(this + 0x3c);
    local_88 = CONCAT44(fVar32 + fVar22,fVar31 + fVar19);
    uVar3 = CONCAT44(fVar34 + fVar24,fVar33 + fVar23);
    local_a8 = CONCAT44(fStack_d4 + fVar22,local_d8 + fVar19);
    uVar1 = CONCAT44(fStack_cc + fVar24,fStack_d0 + fVar23);
    local_b8 = CONCAT44(fVar28 + fVar22,fVar27 + fVar19);
    uStack_b0 = CONCAT44(fVar30 + fVar24,fVar29 + fVar23);
    (**(code **)(*DebugRenderer::sInstance + 0x18))
              (local_88,uVar3,local_b8,uStack_b0,local_a8,uVar1,DebugRenderer::sInstance,
               (undefined4)Color::sGreen,1);
    uVar2 = CONCAT44(fVar24 + fStack_bc,fVar23 + fStack_c0);
    (**(code **)(*DebugRenderer::sInstance + 0x18))
              (local_88,uVar3,CONCAT44(fVar22 + fStack_c4,fVar19 + local_c8),uVar2,local_b8,
               uStack_b0,DebugRenderer::sInstance,(undefined4)Color::sGreen,1);
    JPH::DebugRenderer::DrawWireTriangle
              (local_88,uVar3,local_b8,uStack_b0,local_a8,uVar1,DebugRenderer::sInstance,
               (undefined4)Color::sWhite);
    JPH::DebugRenderer::DrawWireTriangle
              (local_88,uVar3,CONCAT44(fVar22 + fStack_c4,fVar19 + local_c8),uVar2,local_b8,
               uStack_b0,DebugRenderer::sInstance,(undefined4)Color::sWhite);
  }
  fVar38 = fVar8 - fVar31;
  fVar39 = fVar9 - fVar32;
  fVar40 = fVar10 - fVar33;
  fVar22 = fVar27 - fVar31;
  fVar23 = fVar28 - fVar32;
  fVar24 = fVar29 - fVar33;
  fVar19 = ((local_c8 - fVar31) * fVar39 - (fStack_c4 - fVar32) * fVar38) * fVar24 +
           ((fStack_c0 - fVar33) * fVar38 - (local_c8 - fVar31) * fVar40) * fVar23 +
           ((fStack_c4 - fVar32) * fVar40 - (fStack_c0 - fVar33) * fVar39) * fVar22 + 0.0;
  if (fVar19 < 0.0) {
    fVar19 = 0.0;
  }
  fVar35 = fVar4 - fVar31;
  fVar36 = fVar5 - fVar32;
  fVar37 = fVar6 - fVar33;
  fVar17 = ((fStack_d4 - fVar32) * fVar35 - (local_d8 - fVar31) * fVar36) * fVar24 +
           ((local_d8 - fVar31) * fVar37 - (fStack_d0 - fVar33) * fVar35) * fVar23 +
           ((fStack_d0 - fVar33) * fVar36 - (fStack_d4 - fVar32) * fVar37) * fVar22 + 0.0;
  if (fVar17 < 0.0) {
    fVar17 = 0.0;
  }
  fVar22 = (fVar36 * fVar38 - fVar35 * fVar39) * fVar24 +
           (fVar35 * fVar40 - fVar37 * fVar38) * fVar23 +
           (fVar37 * fVar39 - fVar36 * fVar40) * fVar22 + 0.0;
  if (fVar22 < 0.0) {
    fVar22 = 0.0;
  }
  auVar26._0_4_ = fVar17 + fVar19 + fVar22;
  *param_10 = auVar26._0_4_;
  if (auVar26._0_4_ <= 0.0) {
    auVar13 = (undefined1  [16])0x0;
  }
  else {
    auVar26._4_4_ = auVar26._0_4_;
    auVar26._8_4_ = auVar26._0_4_;
    auVar26._12_4_ = auVar26._0_4_;
    auVar18._0_4_ =
         fVar17 * (fVar4 + fVar27 + local_d8 + fVar31) +
         fVar19 * (local_c8 + fVar27 + fVar8 + fVar31) + fVar22 * (fVar27 + fVar8 + fVar4 + fVar31);
    auVar18._4_4_ =
         fVar17 * (fVar5 + fVar28 + fStack_d4 + fVar32) +
         fVar19 * (fStack_c4 + fVar28 + fVar9 + fVar32) + fVar22 * (fVar28 + fVar9 + fVar5 + fVar32)
    ;
    auVar18._8_4_ =
         fVar17 * (fVar6 + fVar29 + fStack_d0 + fVar33) +
         fVar19 * (fStack_c0 + fVar29 + fVar10 + fVar33) +
         fVar22 * (fVar29 + fVar10 + fVar6 + fVar33);
    auVar18._12_4_ =
         fVar17 * (fVar7 + fVar30 + fStack_cc + fVar34) +
         fVar19 * (fStack_bc + fVar30 + fVar11 + fVar34) +
         fVar22 * (fVar30 + fVar11 + fVar7 + fVar34);
    auVar13 = divps(auVar18,auVar26);
  }
  *param_11 = auVar13;
  return;
}



/* JPH::PolyhedronSubmergedVolumeCalculator::sTetrahedronVolume3(JPH::Vec3, float, JPH::Vec3, float,
   JPH::Vec3, float, JPH::Vec3, float, float&, JPH::Vec3&) */

void __thiscall
JPH::PolyhedronSubmergedVolumeCalculator::sTetrahedronVolume3
          (undefined8 param_1,undefined8 param_2,float param_3,undefined8 param_4,undefined8 param_5
          ,float param_6,undefined8 param_7,undefined8 param_8,
          PolyhedronSubmergedVolumeCalculator *this,float *param_10,undefined1 (*param_11) [16])

{
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
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar29;
  float fVar30;
  float fVar32;
  float fVar33;
  undefined1 auVar31 [16];
  float fVar34;
  float fVar35;
  float fVar37;
  float fVar38;
  undefined1 auVar36 [16];
  float fVar39;
  float in_stack_00000008;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  auVar26._0_4_ = param_3 - in_stack_00000028;
  local_b8._0_4_ = (float)param_1;
  fVar1 = (float)local_b8;
  local_b8._4_4_ = (float)((ulong)param_1 >> 0x20);
  fVar2 = local_b8._4_4_;
  uStack_b0._0_4_ = (float)param_2;
  fVar3 = (float)uStack_b0;
  uStack_b0._4_4_ = (float)((ulong)param_2 >> 0x20);
  fVar4 = uStack_b0._4_4_;
  fVar24 = (float)local_b8;
  fVar27 = local_b8._4_4_;
  fVar28 = (float)uStack_b0;
  fVar29 = uStack_b0._4_4_;
  if (_LC23 <= (float)((uint)auVar26._0_4_ & _LC16)) {
    auVar26._4_4_ = auVar26._0_4_;
    auVar26._8_4_ = auVar26._0_4_;
    auVar26._12_4_ = auVar26._0_4_;
    auVar25._0_4_ = (fStack0000000000000018 - (float)local_b8) * param_3;
    auVar25._4_4_ = (fStack000000000000001c - local_b8._4_4_) * param_3;
    auVar25._8_4_ = (fStack0000000000000020 - (float)uStack_b0) * param_3;
    auVar25._12_4_ = (fStack0000000000000024 - uStack_b0._4_4_) * param_3;
    auVar26 = divps(auVar25,auVar26);
    fVar24 = auVar26._0_4_ + (float)local_b8;
    fVar27 = auVar26._4_4_ + local_b8._4_4_;
    fVar28 = auVar26._8_4_ + (float)uStack_b0;
    fVar29 = auVar26._12_4_ + uStack_b0._4_4_;
  }
  local_a8._0_4_ = (float)param_4;
  fVar5 = (float)local_a8;
  local_a8._4_4_ = (float)((ulong)param_4 >> 0x20);
  fVar6 = local_a8._4_4_;
  uStack_a0._0_4_ = (float)param_5;
  fVar7 = (float)uStack_a0;
  uStack_a0._4_4_ = (float)((ulong)param_5 >> 0x20);
  fVar8 = uStack_a0._4_4_;
  auVar15._0_4_ = param_6 - in_stack_00000028;
  fVar35 = (float)local_a8;
  fVar37 = local_a8._4_4_;
  fVar38 = (float)uStack_a0;
  fVar39 = uStack_a0._4_4_;
  if (_LC23 <= (float)((uint)auVar15._0_4_ & _LC16)) {
    auVar15._4_4_ = auVar15._0_4_;
    auVar15._8_4_ = auVar15._0_4_;
    auVar15._12_4_ = auVar15._0_4_;
    auVar36._0_4_ = (fStack0000000000000018 - (float)local_a8) * param_6;
    auVar36._4_4_ = (fStack000000000000001c - local_a8._4_4_) * param_6;
    auVar36._8_4_ = (fStack0000000000000020 - (float)uStack_a0) * param_6;
    auVar36._12_4_ = (fStack0000000000000024 - uStack_a0._4_4_) * param_6;
    auVar26 = divps(auVar36,auVar15);
    fVar35 = auVar26._0_4_ + (float)local_a8;
    fVar37 = auVar26._4_4_ + local_a8._4_4_;
    fVar38 = auVar26._8_4_ + (float)uStack_a0;
    fVar39 = auVar26._12_4_ + uStack_a0._4_4_;
  }
  local_98._0_4_ = (float)param_7;
  fVar9 = (float)local_98;
  local_98._4_4_ = (float)((ulong)param_7 >> 0x20);
  fVar10 = local_98._4_4_;
  uStack_90._0_4_ = (float)param_8;
  fVar11 = (float)uStack_90;
  uStack_90._4_4_ = (float)((ulong)param_8 >> 0x20);
  fVar12 = uStack_90._4_4_;
  auVar16._0_4_ = in_stack_00000008 - in_stack_00000028;
  fVar30 = (float)local_98;
  fVar32 = local_98._4_4_;
  fVar33 = (float)uStack_90;
  fVar34 = uStack_90._4_4_;
  if (_LC23 <= (float)(_LC16 & (uint)auVar16._0_4_)) {
    auVar16._4_4_ = auVar16._0_4_;
    auVar16._8_4_ = auVar16._0_4_;
    auVar16._12_4_ = auVar16._0_4_;
    auVar31._0_4_ = (fStack0000000000000018 - (float)local_98) * in_stack_00000008;
    auVar31._4_4_ = (fStack000000000000001c - local_98._4_4_) * in_stack_00000008;
    auVar31._8_4_ = (fStack0000000000000020 - (float)uStack_90) * in_stack_00000008;
    auVar31._12_4_ = (fStack0000000000000024 - uStack_90._4_4_) * in_stack_00000008;
    auVar26 = divps(auVar31,auVar16);
    fVar30 = auVar26._0_4_ + (float)local_98;
    fVar32 = auVar26._4_4_ + local_98._4_4_;
    fVar33 = auVar26._8_4_ + (float)uStack_90;
    fVar34 = auVar26._12_4_ + uStack_90._4_4_;
  }
  if ((char)Shape::sDrawSubmergedVolumes != '\0') {
    fVar14 = *(float *)(this + 0x30);
    fVar18 = *(float *)(this + 0x34);
    fVar19 = *(float *)(this + 0x38);
    fVar20 = *(float *)(this + 0x3c);
    local_b8 = CONCAT44(fVar27 + fVar18,fVar24 + fVar14);
    uStack_b0 = CONCAT44(fVar29 + fVar20,fVar28 + fVar19);
    local_a8 = CONCAT44(fVar37 + fVar18,fVar35 + fVar14);
    uStack_a0 = CONCAT44(fVar39 + fVar20,fVar38 + fVar19);
    local_98 = CONCAT44(fVar18 + fVar32,fVar14 + fVar30);
    uStack_90 = CONCAT44(fVar20 + fVar34,fVar19 + fVar33);
    (**(code **)(*DebugRenderer::sInstance + 0x18))
              (local_98,uStack_90,local_a8,uStack_a0,local_b8,DebugRenderer::sInstance,
               (undefined4)Color::sGreen,1);
    JPH::DebugRenderer::DrawWireTriangle
              (local_98,uStack_90,local_a8,uStack_a0,local_b8,uStack_b0,DebugRenderer::sInstance,
               (undefined4)Color::sWhite);
  }
  fVar14 = (fVar28 - fStack0000000000000020) *
           ((fVar32 - fStack000000000000001c) * (fVar35 - fStack0000000000000018) -
           (fVar37 - fStack000000000000001c) * (fVar30 - fStack0000000000000018)) +
           (fVar27 - fStack000000000000001c) *
           ((fVar30 - fStack0000000000000018) * (fVar38 - fStack0000000000000020) -
           (fVar35 - fStack0000000000000018) * (fVar33 - fStack0000000000000020)) +
           (fVar24 - fStack0000000000000018) *
           ((fVar33 - fStack0000000000000020) * (fVar37 - fStack000000000000001c) -
           (fVar38 - fStack0000000000000020) * (fVar32 - fStack000000000000001c)) + 0.0;
  if (fVar14 < 0.0) {
    fVar14 = 0.0;
  }
  fVar21 = fVar9 - fStack0000000000000018;
  fVar22 = fVar10 - fStack000000000000001c;
  fVar23 = fVar11 - fStack0000000000000020;
  fVar18 = fVar5 - fStack0000000000000018;
  fVar19 = fVar6 - fStack000000000000001c;
  fVar20 = fVar7 - fStack0000000000000020;
  fVar18 = (fVar3 - fStack0000000000000020) * (fVar22 * fVar18 - fVar19 * fVar21) +
           (fVar2 - fStack000000000000001c) * (fVar21 * fVar20 - fVar18 * fVar23) +
           (fVar1 - fStack0000000000000018) * (fVar23 * fVar19 - fVar20 * fVar22) + 0.0;
  if (fVar18 < 0.0) {
    fVar19 = 0.0 - fVar14;
    if (fVar19 < 0.0) goto LAB_00107a04;
  }
  else {
    fVar19 = fVar18 - fVar14;
    if (fVar19 < 0.0) {
LAB_00107a04:
      fVar19 = 0.0;
      auVar26 = (undefined1  [16])0x0;
      goto LAB_001079dd;
    }
    if (0.0 < fVar19) {
      auVar13._0_4_ =
           fVar18 * (fVar5 + fVar1 + fVar9 + fStack0000000000000018) -
           fVar14 * (fVar24 + fVar35 + fVar30 + fStack0000000000000018);
      auVar13._4_4_ =
           fVar18 * (fVar6 + fVar2 + fVar10 + fStack000000000000001c) -
           fVar14 * (fVar27 + fVar37 + fVar32 + fStack000000000000001c);
      auVar13._8_4_ =
           fVar18 * (fVar7 + fVar3 + fVar11 + fStack0000000000000020) -
           fVar14 * (fVar28 + fVar38 + fVar33 + fStack0000000000000020);
      auVar13._12_4_ =
           fVar18 * (fVar8 + fVar4 + fVar12 + fStack0000000000000024) -
           fVar14 * (fVar29 + fVar39 + fVar34 + fStack0000000000000024);
      auVar17._4_4_ = fVar19;
      auVar17._0_4_ = fVar19;
      auVar17._8_4_ = fVar19;
      auVar17._12_4_ = fVar19;
      auVar26 = divps(auVar13,auVar17);
      goto LAB_001079dd;
    }
  }
  auVar26 = (undefined1  [16])0x0;
LAB_001079dd:
  *param_10 = fVar19;
  *param_11 = auVar26;
  return;
}



/* JPH::PolyhedronSubmergedVolumeCalculator::AddFace(int, int, int) */

void __thiscall
JPH::PolyhedronSubmergedVolumeCalculator::AddFace
          (PolyhedronSubmergedVolumeCalculator *this,int param_1,int param_2,int param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  long in_FS_OFFSET;
  PolyhedronSubmergedVolumeCalculator *pPVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar16;
  float fVar18;
  undefined1 auVar14 [16];
  float fVar17;
  float fVar19;
  float fVar20;
  undefined1 auVar15 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
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
  undefined8 local_a8;
  float local_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)this;
  pfVar6 = (float *)((long)param_3 * 0x20 + lVar1);
  pfVar7 = (float *)((long)param_2 * 0x20 + lVar1);
  pfVar8 = (float *)((long)param_1 * 0x20 + lVar1);
  pfVar9 = (float *)((long)*(int *)(this + 0xc) * 0x20 + lVar1);
  switch((uint)(*(byte *)(pfVar7 + 5) ^ 1) * 2 | (uint)(*(byte *)(pfVar6 + 5) ^ 1) << 2 |
         (uint)(*(byte *)(pfVar8 + 5) ^ 1)) {
  default:
    fVar13 = pfVar9[4];
    fVar16 = *pfVar9;
    fVar18 = pfVar9[1];
    fVar28 = pfVar9[2];
    fVar30 = pfVar9[3];
    fVar34 = fVar13 - pfVar6[4];
    fVar24 = fVar16;
    fVar25 = fVar18;
    fVar26 = fVar28;
    fVar27 = fVar30;
    if (_LC23 <= (float)((uint)fVar34 & _LC16)) {
      auVar21._0_4_ = (*pfVar6 - fVar16) * fVar13;
      auVar21._4_4_ = (pfVar6[1] - fVar18) * fVar13;
      auVar21._8_4_ = (pfVar6[2] - fVar28) * fVar13;
      auVar21._12_4_ = (pfVar6[3] - fVar30) * fVar13;
      auVar22._4_4_ = fVar34;
      auVar22._0_4_ = fVar34;
      auVar22._8_4_ = fVar34;
      auVar22._12_4_ = fVar34;
      auVar22 = divps(auVar21,auVar22);
      fVar24 = auVar22._0_4_ + fVar16;
      fVar25 = auVar22._4_4_ + fVar18;
      fVar26 = auVar22._8_4_ + fVar28;
      fVar27 = auVar22._12_4_ + fVar30;
    }
    auVar23._0_4_ = fVar13 - pfVar7[4];
    fVar34 = fVar16;
    fVar17 = fVar18;
    fVar19 = fVar28;
    fVar20 = fVar30;
    if (_LC23 <= (float)((uint)auVar23._0_4_ & _LC16)) {
      auVar23._4_4_ = auVar23._0_4_;
      auVar23._8_4_ = auVar23._0_4_;
      auVar23._12_4_ = auVar23._0_4_;
      auVar14._0_4_ = (*pfVar7 - fVar16) * fVar13;
      auVar14._4_4_ = (pfVar7[1] - fVar18) * fVar13;
      auVar14._8_4_ = (pfVar7[2] - fVar28) * fVar13;
      auVar14._12_4_ = (pfVar7[3] - fVar30) * fVar13;
      auVar22 = divps(auVar14,auVar23);
      fVar34 = auVar22._0_4_ + fVar16;
      fVar17 = auVar22._4_4_ + fVar18;
      fVar19 = auVar22._8_4_ + fVar28;
      fVar20 = auVar22._12_4_ + fVar30;
    }
    auVar15._0_4_ = fVar13 - pfVar8[4];
    fVar29 = fVar16;
    fVar31 = fVar18;
    fVar32 = fVar28;
    fVar33 = fVar30;
    if (_LC23 <= (float)(_LC16 & (uint)auVar15._0_4_)) {
      auVar15._4_4_ = auVar15._0_4_;
      auVar15._8_4_ = auVar15._0_4_;
      auVar15._12_4_ = auVar15._0_4_;
      auVar12._0_4_ = (*pfVar8 - fVar16) * fVar13;
      auVar12._4_4_ = (pfVar8[1] - fVar18) * fVar13;
      auVar12._8_4_ = (pfVar8[2] - fVar28) * fVar13;
      auVar12._12_4_ = (pfVar8[3] - fVar30) * fVar13;
      auVar22 = divps(auVar12,auVar15);
      fVar29 = auVar22._0_4_ + fVar16;
      fVar31 = auVar22._4_4_ + fVar18;
      fVar32 = auVar22._8_4_ + fVar28;
      fVar33 = auVar22._12_4_ + fVar30;
    }
    if ((char)Shape::sDrawSubmergedVolumes != '\0') {
      fVar13 = *(float *)(this + 0x30);
      fVar2 = *(float *)(this + 0x34);
      fVar3 = *(float *)(this + 0x38);
      fVar4 = *(float *)(this + 0x3c);
      local_a8 = CONCAT44(fVar2 + fVar31,fVar13 + fVar29);
      uVar5 = CONCAT44(fVar4 + fVar33,fVar3 + fVar32);
      uVar11 = CONCAT44(fVar4 + fVar20,fVar3 + fVar19);
      (**(code **)(*DebugRenderer::sInstance + 0x18))
                (local_a8,uVar5,CONCAT44(fVar2 + fVar17,fVar13 + fVar34),uVar11,
                 CONCAT44(fVar2 + fVar25,fVar13 + fVar24),DebugRenderer::sInstance,
                 (undefined4)Color::sGreen,1);
      JPH::DebugRenderer::DrawWireTriangle
                (local_a8,uVar5,CONCAT44(fVar2 + fVar17,fVar13 + fVar34),uVar11,
                 CONCAT44(fVar2 + fVar25,fVar13 + fVar24),CONCAT44(fVar4 + fVar27,fVar3 + fVar26),
                 DebugRenderer::sInstance,(undefined4)Color::sWhite);
    }
    local_3c = (fVar28 - fVar32) *
               ((fVar17 - fVar31) * (fVar24 - fVar29) - (fVar25 - fVar31) * (fVar34 - fVar29)) +
               ((fVar34 - fVar29) * (fVar26 - fVar32) - (fVar24 - fVar29) * (fVar19 - fVar32)) *
               (fVar18 - fVar31) +
               ((fVar19 - fVar32) * (fVar25 - fVar31) - (fVar26 - fVar32) * (fVar17 - fVar31)) *
               (fVar16 - fVar29) + 0.0;
    if (local_3c < 0.0) {
      local_3c = 0.0;
    }
    local_38 = fVar24 + fVar16 + fVar34 + fVar29;
    fStack_34 = fVar25 + fVar18 + fVar17 + fVar31;
    fStack_30 = fVar26 + fVar28 + fVar19 + fVar32;
    fStack_2c = fVar27 + fVar30 + fVar20 + fVar33;
    goto LAB_00107bc0;
  case 1:
    pPVar10 = *(PolyhedronSubmergedVolumeCalculator **)pfVar9;
    uVar11 = *(undefined8 *)(pfVar9 + 2);
    break;
  case 2:
    pPVar10 = *(PolyhedronSubmergedVolumeCalculator **)pfVar9;
    uVar11 = *(undefined8 *)(pfVar9 + 2);
    break;
  case 3:
    pPVar10 = *(PolyhedronSubmergedVolumeCalculator **)pfVar9;
    uVar11 = *(undefined8 *)(pfVar9 + 2);
    goto LAB_00107cb7;
  case 4:
    pPVar10 = *(PolyhedronSubmergedVolumeCalculator **)pfVar9;
    uVar11 = *(undefined8 *)(pfVar9 + 2);
    break;
  case 5:
    pPVar10 = *(PolyhedronSubmergedVolumeCalculator **)pfVar9;
    uVar11 = *(undefined8 *)(pfVar9 + 2);
    goto LAB_00107cb7;
  case 6:
    pPVar10 = *(PolyhedronSubmergedVolumeCalculator **)pfVar9;
    uVar11 = *(undefined8 *)(pfVar9 + 2);
LAB_00107cb7:
    sTetrahedronVolume3(pPVar10,uVar11,this,&local_3c,&local_38);
    goto LAB_00107bc0;
  case 7:
    local_38 = *pfVar8;
    fStack_34 = pfVar8[1];
    fStack_30 = pfVar8[2];
    fVar28 = *pfVar7 - local_38;
    fVar30 = pfVar7[1] - fStack_34;
    fVar24 = pfVar7[2] - fStack_30;
    fVar13 = *pfVar6 - local_38;
    fVar16 = pfVar6[1] - fStack_34;
    fVar18 = pfVar6[2] - fStack_30;
    local_3c = (fVar30 * fVar13 - fVar16 * fVar28) * (pfVar9[2] - fStack_30) +
               (pfVar9[1] - fStack_34) * (fVar28 * fVar18 - fVar13 * fVar24) +
               (*pfVar9 - local_38) * (fVar24 * fVar16 - fVar18 * fVar30) + 0.0;
    if (local_3c < 0.0) {
      local_3c = 0.0;
    }
    local_38 = *pfVar6 + *pfVar9 + *pfVar7 + local_38;
    fStack_34 = pfVar6[1] + pfVar9[1] + pfVar7[1] + fStack_34;
    fStack_30 = pfVar6[2] + pfVar9[2] + pfVar7[2] + fStack_30;
    fStack_2c = pfVar6[3] + pfVar9[3] + pfVar7[3] + pfVar8[3];
    goto LAB_00107bc0;
  }
  sTetrahedronVolume2(pPVar10,uVar11,this,&local_3c,&local_38);
LAB_00107bc0:
  *(float *)(this + 0x10) = *(float *)(this + 0x10) + local_3c;
  *(float *)(this + 0x20) = local_3c * local_38 + *(float *)(this + 0x20);
  *(float *)(this + 0x24) = local_3c * fStack_34 + *(float *)(this + 0x24);
  *(float *)(this + 0x28) = local_3c * fStack_30 + *(float *)(this + 0x28);
  *(float *)(this + 0x2c) = local_3c * fStack_2c + *(float *)(this + 0x2c);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* JPH::HashTable<int, std::pair<int, unsigned char>, JPH::UnorderedMapDetail<int, unsigned char>,
   JPH::Hash<int>, std::equal_to<int> >::GrowTable() */

void __thiscall
JPH::
HashTable<int,std::pair<int,unsigned_char>,JPH::UnorderedMapDetail<int,unsigned_char>,JPH::Hash<int>,std::equal_to<int>>
::GrowTable(HashTable<int,std::pair<int,unsigned_char>,JPH::UnorderedMapDetail<int,unsigned_char>,JPH::Hash<int>,std::equal_to<int>>
            *this)

{
  void *__s;
  char *pcVar1;
  uint uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  uint uVar11;
  byte bVar12;
  byte *pbVar13;
  int iVar14;
  byte *pbVar15;
  char *pcVar16;
  undefined1 auVar17 [16];
  
  uVar2 = *(uint *)(this + 0x14);
  uVar8 = (ulong)(uVar2 * 2);
  if (uVar2 * 2 < 0x10) {
    uVar8 = 0x10;
  }
  if (uVar2 <= (uint)uVar8) {
    pbVar3 = *(byte **)this;
    pcVar16 = *(char **)(this + 8);
    *(undefined4 *)(this + 0x10) = 0;
    *(uint *)(this + 0x14) = (uint)uVar8;
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    *(int *)(this + 0x18) = (int)(uVar8 * 7 >> 3);
    lVar9 = (*Allocate)(uVar8 * 9 + 0xf);
    *(long *)this = lVar9;
    __s = (void *)(lVar9 + (ulong)*(uint *)(this + 0x14) * 8);
    *(void **)(this + 8) = __s;
    memset(__s,0,(ulong)(*(uint *)(this + 0x14) + 0xf));
    if (pbVar3 != (byte *)0x0) {
      if (uVar2 != 0) {
        pbVar13 = pbVar3 + 4;
        pbVar15 = pbVar3;
        do {
          if (*pcVar16 < '\0') {
            iVar14 = *(int *)(this + 0x18);
            if (iVar14 == 0) {
              if ((ulong)*(uint *)(this + 0x14) <
                  (ulong)(uint)((int)((ulong)*(uint *)(this + 0x14) * 7 >> 3) -
                               *(int *)(this + 0x10)) << 3) {
                rehash((uint)this);
                iVar14 = *(int *)(this + 0x18);
              }
              else {
                GrowTable(this);
                iVar14 = *(int *)(this + 0x18);
              }
            }
            if (pbVar15 < pbVar13) {
              uVar8 = 0xcbf29ce484222325;
              pbVar10 = pbVar15;
              do {
                bVar12 = *pbVar10;
                pbVar10 = pbVar10 + 1;
                uVar8 = (uVar8 ^ bVar12) * 0x100000001b3;
              } while (pbVar10 != pbVar13);
              bVar12 = (byte)uVar8 | 0x80;
              uVar7 = (uint)(uVar8 >> 7);
            }
            else {
              bVar12 = 0xa5;
              uVar7 = 0xc9084446;
            }
            while( true ) {
              uVar7 = uVar7 & *(int *)(this + 0x14) - 1U;
              pcVar1 = (char *)(*(long *)(this + 8) + (ulong)uVar7);
              auVar17[0] = -(*pcVar1 == '\0');
              auVar17[1] = -(pcVar1[1] == '\0');
              auVar17[2] = -(pcVar1[2] == '\0');
              auVar17[3] = -(pcVar1[3] == '\0');
              auVar17[4] = -(pcVar1[4] == '\0');
              auVar17[5] = -(pcVar1[5] == '\0');
              auVar17[6] = -(pcVar1[6] == '\0');
              auVar17[7] = -(pcVar1[7] == '\0');
              auVar17[8] = -(pcVar1[8] == '\0');
              auVar17[9] = -(pcVar1[9] == '\0');
              auVar17[10] = -(pcVar1[10] == '\0');
              auVar17[0xb] = -(pcVar1[0xb] == '\0');
              auVar17[0xc] = -(pcVar1[0xc] == '\0');
              auVar17[0xd] = -(pcVar1[0xd] == '\0');
              auVar17[0xe] = -(pcVar1[0xe] == '\0');
              auVar17[0xf] = -(pcVar1[0xf] == '\0');
              uVar5 = (ushort)(SUB161(auVar17 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar17[0xf] >> 7) << 0xf;
              if (uVar5 != 0) break;
              uVar7 = uVar7 + 0x10;
            }
            iVar6 = 0;
            for (uVar11 = (uint)uVar5; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
              iVar6 = iVar6 + 1;
            }
            *(int *)(this + 0x18) = iVar14 + -1;
            uVar7 = iVar6 + uVar7 & *(int *)(this + 0x14) - 1U;
            *(byte *)(*(long *)(this + 8) + (ulong)uVar7) = bVar12;
            *(byte *)(*(long *)(this + 8) +
                     (ulong)((*(int *)(this + 0x14) - 1U & uVar7 - 0xf) + 0xf)) = bVar12;
            uVar4 = *(undefined8 *)pbVar15;
            *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
            *(undefined8 *)(*(long *)this + (ulong)uVar7 * 8) = uVar4;
          }
          pbVar15 = pbVar15 + 8;
          pcVar16 = pcVar16 + 1;
          pbVar13 = pbVar13 + 8;
        } while (pbVar3 + (ulong)uVar2 * 8 != pbVar15);
      }
                    /* WARNING: Could not recover jumptable at 0x00108251. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(pbVar3);
      return;
    }
  }
  return;
}



/* bool JPH::HashTable<int, std::pair<int, unsigned char>, JPH::UnorderedMapDetail<int, unsigned
   char>, JPH::Hash<int>, std::equal_to<int> >::InsertKey<false>(int const&, unsigned int&) */

bool __thiscall
JPH::
HashTable<int,std::pair<int,unsigned_char>,JPH::UnorderedMapDetail<int,unsigned_char>,JPH::Hash<int>,std::equal_to<int>>
::InsertKey<false>(HashTable<int,std::pair<int,unsigned_char>,JPH::UnorderedMapDetail<int,unsigned_char>,JPH::Hash<int>,std::equal_to<int>>
                   *this,int *param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  uint uVar22;
  uint uVar23;
  byte *pbVar24;
  bool bVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  byte bVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  if (*(int *)(this + 0x18) == 0) {
    if ((ulong)*(uint *)(this + 0x14) <
        (ulong)(uint)((int)((ulong)*(uint *)(this + 0x14) * 7 >> 3) - *(int *)(this + 0x10)) << 3) {
      rehash((uint)this);
    }
    else {
      GrowTable(this);
    }
  }
  uVar27 = 0xcbf29ce484222325;
  pbVar24 = (byte *)param_1;
  do {
    bVar29 = *pbVar24;
    pbVar24 = pbVar24 + 1;
    uVar27 = (uVar27 ^ bVar29) * 0x100000001b3;
  } while (pbVar24 != (byte *)(param_1 + 1));
  bVar29 = (byte)uVar27 | 0x80;
  uVar23 = 0xffffffff;
  uVar1 = *(int *)(this + 0x14) - 1;
  uVar28 = (uint)(uVar27 >> 7);
  while( true ) {
    uVar28 = uVar28 & uVar1;
    pbVar24 = (byte *)(*(long *)(this + 8) + (ulong)uVar28);
    bVar6 = *pbVar24;
    bVar7 = pbVar24[1];
    bVar8 = pbVar24[2];
    bVar9 = pbVar24[3];
    bVar10 = pbVar24[4];
    bVar11 = pbVar24[5];
    bVar12 = pbVar24[6];
    bVar13 = pbVar24[7];
    bVar14 = pbVar24[8];
    bVar15 = pbVar24[9];
    bVar16 = pbVar24[10];
    bVar17 = pbVar24[0xb];
    bVar18 = pbVar24[0xc];
    bVar19 = pbVar24[0xd];
    bVar20 = pbVar24[0xe];
    bVar21 = pbVar24[0xf];
    auVar31[0] = -(bVar29 == bVar6);
    auVar31[1] = -(bVar29 == bVar7);
    auVar31[2] = -(bVar29 == bVar8);
    auVar31[3] = -(bVar29 == bVar9);
    auVar31[4] = -(bVar29 == bVar10);
    auVar31[5] = -(bVar29 == bVar11);
    auVar31[6] = -(bVar29 == bVar12);
    auVar31[7] = -(bVar29 == bVar13);
    auVar31[8] = -(bVar29 == bVar14);
    auVar31[9] = -(bVar29 == bVar15);
    auVar31[10] = -(bVar29 == bVar16);
    auVar31[0xb] = -(bVar29 == bVar17);
    auVar31[0xc] = -(bVar29 == bVar18);
    auVar31[0xd] = -(bVar29 == bVar19);
    auVar31[0xe] = -(bVar29 == bVar20);
    auVar31[0xf] = -(bVar29 == bVar21);
    uVar3 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
    if (uVar3 != 0) {
      uVar26 = (uint)uVar3;
      uVar22 = uVar28;
      do {
        iVar4 = 0;
        for (uVar5 = uVar26; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          iVar4 = iVar4 + 1;
        }
        uVar22 = uVar22 + iVar4 & uVar1;
        if (*(int *)(*(long *)this + (ulong)uVar22 * 8) == *param_1) {
          bVar25 = false;
          goto LAB_00108381;
        }
        uVar22 = uVar22 + 1;
        bVar2 = (char)iVar4 + 1U & 0x1f;
        uVar5 = uVar26 >> bVar2;
        uVar26 = uVar26 >> bVar2;
      } while (uVar5 != 0);
    }
    if (uVar23 == 0xffffffff) {
      auVar32[0] = -(bVar6 == _LC30);
      auVar32[1] = -(bVar7 == UNK_00109af1);
      auVar32[2] = -(bVar8 == UNK_00109af2);
      auVar32[3] = -(bVar9 == UNK_00109af3);
      auVar32[4] = -(bVar10 == UNK_00109af4);
      auVar32[5] = -(bVar11 == UNK_00109af5);
      auVar32[6] = -(bVar12 == UNK_00109af6);
      auVar32[7] = -(bVar13 == UNK_00109af7);
      auVar32[8] = -(bVar14 == UNK_00109af8);
      auVar32[9] = -(bVar15 == UNK_00109af9);
      auVar32[10] = -(bVar16 == UNK_00109afa);
      auVar32[0xb] = -(bVar17 == UNK_00109afb);
      auVar32[0xc] = -(bVar18 == UNK_00109afc);
      auVar32[0xd] = -(bVar19 == UNK_00109afd);
      auVar32[0xe] = -(bVar20 == UNK_00109afe);
      auVar32[0xf] = -(bVar21 == UNK_00109aff);
      iVar4 = 0;
      uVar26 = (uint)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar32[0xf] >> 7) << 0xf);
      for (uVar22 = uVar26; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x80000000) {
        iVar4 = iVar4 + 1;
      }
      if (uVar26 != 0) {
        uVar23 = iVar4 + uVar28;
      }
    }
    auVar30[0] = -(bVar6 == 0);
    auVar30[1] = -(bVar7 == 0);
    auVar30[2] = -(bVar8 == 0);
    auVar30[3] = -(bVar9 == 0);
    auVar30[4] = -(bVar10 == 0);
    auVar30[5] = -(bVar11 == 0);
    auVar30[6] = -(bVar12 == 0);
    auVar30[7] = -(bVar13 == 0);
    auVar30[8] = -(bVar14 == 0);
    auVar30[9] = -(bVar15 == 0);
    auVar30[10] = -(bVar16 == 0);
    auVar30[0xb] = -(bVar17 == 0);
    auVar30[0xc] = -(bVar18 == 0);
    auVar30[0xd] = -(bVar19 == 0);
    auVar30[0xe] = -(bVar20 == 0);
    auVar30[0xf] = -(bVar21 == 0);
    uVar3 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf;
    if (uVar3 != 0) break;
    uVar28 = uVar28 + 0x10;
  }
  if (uVar23 == 0xffffffff) {
    iVar4 = 0;
    for (uVar23 = (uint)uVar3; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
      iVar4 = iVar4 + 1;
    }
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
    uVar23 = iVar4 + uVar28;
  }
  uVar22 = uVar1 & uVar23;
  *(byte *)(*(long *)(this + 8) + (ulong)uVar22) = bVar29;
  *(byte *)(*(long *)(this + 8) + (ulong)((*(int *)(this + 0x14) - 1U & uVar22 - 0xf) + 0xf)) =
       bVar29;
  bVar25 = true;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
LAB_00108381:
  *param_2 = uVar22;
  return bVar25;
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::_M_replace_cold(char*, unsigned long, char const*, unsigned long, unsigned long) */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_replace_cold
          (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *this,char *param_1,
          ulong param_2,char *param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  char *pcVar2;
  size_t __n;
  byte bVar3;
  
  bVar3 = 0;
  if (param_4 - 1 < param_2) {
    if (param_4 == 1) {
      *param_1 = *param_3;
    }
    else {
      memmove(param_1,param_3,param_4);
    }
  }
  if ((param_5 != 0) && (param_4 != param_2)) {
    if (param_5 == 1) {
      param_1[param_4] = param_1[param_2];
    }
    else {
      memmove(param_1 + param_4,param_1 + param_2,param_5);
    }
  }
  if (param_2 < param_4) {
    pcVar2 = param_1 + param_2;
    if (pcVar2 < param_3 + param_4) {
      if (param_3 < pcVar2) {
        __n = (long)pcVar2 - (long)param_3;
        if (__n == 1) {
          *param_1 = *param_3;
        }
        else {
          memmove(param_1,param_3,__n);
        }
        pcVar2 = param_1 + param_4;
        param_1 = param_1 + __n;
        lVar1 = param_4 - __n;
        if (lVar1 != 1) {
          if (lVar1 == 0) {
            return;
          }
          for (; lVar1 != 0; lVar1 = lVar1 + -1) {
            *param_1 = *pcVar2;
            pcVar2 = pcVar2 + (ulong)bVar3 * -2 + 1;
            param_1 = param_1 + (ulong)bVar3 * -2 + 1;
          }
          return;
        }
      }
      else {
        pcVar2 = param_3 + (param_4 - param_2);
        if (param_4 != 1) {
          for (; param_4 != 0; param_4 = param_4 - 1) {
            *param_1 = *pcVar2;
            pcVar2 = pcVar2 + (ulong)bVar3 * -2 + 1;
            param_1 = param_1 + (ulong)bVar3 * -2 + 1;
          }
          return;
        }
      }
      *param_1 = *pcVar2;
    }
    else {
      if (param_4 != 1) {
        memmove(param_1,param_3,param_4);
        return;
      }
      *param_1 = *param_3;
    }
  }
  return;
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::_M_mutate(unsigned long, unsigned long, char const*, unsigned long) */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_mutate
          (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *this,ulong param_1,
          ulong param_2,char *param_3,ulong param_4)

{
  size_t __n;
  undefined1 *__dest;
  ulong uVar1;
  undefined1 *__src;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __n = *(long *)(this + 8) - (param_1 + param_2);
  local_48 = (param_4 - param_2) + *(long *)(this + 8);
  if (this + 0x10 == *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)this) {
    uVar1 = 0xf;
  }
  else {
    uVar1 = *(ulong *)(this + 0x10);
  }
  __dest = (undefined1 *)_M_create(&local_48,uVar1);
  if (param_1 != 0) {
    if (param_1 == 1) {
      *__dest = **(undefined1 **)this;
    }
    else {
      memcpy(__dest,*(undefined1 **)this,param_1);
    }
  }
  if ((param_3 != (char *)0x0) && (param_4 != 0)) {
    if (param_4 == 1) {
      __dest[param_1] = *param_3;
    }
    else {
      memcpy(__dest + param_1,param_3,param_4);
    }
  }
  if (__n != 0) {
    __src = (undefined1 *)(param_1 + param_2 + *(long *)this);
    if (__n == 1) {
      __dest[param_1 + param_4] = *__src;
    }
    else {
      memcpy(__dest + param_1 + param_4,__src,__n);
    }
  }
  if (this + 0x10 != *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)this) {
    (*JPH::Free)();
  }
  *(undefined1 **)this = __dest;
  *(ulong *)(this + 0x10) = local_48;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::_M_replace(unsigned long, unsigned long, char const*, unsigned long) [clone .isra.0] [clone
   .cold] */

void std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_replace
               (ulong param_1,ulong param_2,char *param_3,ulong param_4)

{
  basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *unaff_RBX;
  long unaff_RBP;
  ulong in_R8;
  ulong in_R9;
  char *unaff_R12;
  char *unaff_R13;
  
  _M_replace_cold(unaff_RBX,unaff_R13,(ulong)param_3,unaff_R12,in_R8,in_R9);
  *(long *)(unaff_RBX + 8) = unaff_RBP;
  *(undefined1 *)(*(long *)unaff_RBX + unaff_RBP) = 0;
  return;
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, JPH::STLAllocator<char> >
   JPH::ConvertToString<int>(int const&) */

JPH * __thiscall JPH::ConvertToString<int>(JPH *this,int *param_1)

{
  pointer_____offset_0x10___ puVar1;
  JPH *pJVar2;
  JPH *__dest;
  ulong uVar3;
  long in_FS_OFFSET;
  ulong local_1c0;
  undefined8 local_1b8;
  pointer_____offset_0x10___ puStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  locale local_178 [8];
  undefined4 local_170;
  JPH *local_168;
  ulong local_160;
  JPH local_158 [16];
  undefined *local_148 [27];
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  puVar1 = PTR_vtable_00109bb8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_148);
  local_68 = 0;
  local_148[0] = (undefined *)0x1097c8;
  local_60 = (undefined1  [16])0x0;
  local_50 = (undefined1  [16])0x0;
  local_70 = 0;
  local_1b8 = 0x1097a0;
  std::ios::init((streambuf *)local_148);
  local_1a8 = (undefined1  [16])0x0;
  local_1b8 = 0x109810;
  puStack_1b0 = puVar1;
  local_198 = (undefined1  [16])0x0;
  local_188 = (undefined1  [16])0x0;
  local_148[0] = (undefined *)0x109838;
  std::locale::locale(local_178);
  puStack_1b0 = (pointer_____offset_0x10___)&PTR__basic_stringbuf_00109718;
  local_158[0] = (JPH)0x0;
  local_170 = 0x10;
  local_160 = 0;
  local_168 = local_158;
  std::ios::init((streambuf *)local_148);
  std::ostream::operator<<((ostream *)&local_1b8,*param_1);
  uVar3 = local_160;
  __dest = this + 0x10;
  *(undefined8 *)(this + 8) = 0;
  *(JPH **)this = __dest;
  this[0x10] = (JPH)0x0;
  if (local_188._0_8_ != 0) {
    uVar3 = local_188._0_8_;
    if ((ulong)local_188._0_8_ <= (ulong)local_198._0_8_) {
      uVar3 = local_198._0_8_;
    }
    if (local_198._0_8_ == 0) {
      uVar3 = local_188._0_8_;
    }
    std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_replace
              ((basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)this,0,0,
               (char *)local_198._8_8_,uVar3 - local_198._8_8_);
    goto LAB_00108920;
  }
  if (local_160 < 0x10) {
    if (local_160 != 0) {
      if (local_160 != 1) goto LAB_00108a25;
      this[0x10] = *local_168;
    }
  }
  else {
    local_1c0 = local_160;
    pJVar2 = (JPH *)std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>
                    ::_M_create(&local_1c0,0xf);
    if (__dest != *(JPH **)this) {
      (*Free)();
    }
    *(JPH **)this = pJVar2;
    *(ulong *)(this + 0x10) = local_1c0;
    __dest = pJVar2;
LAB_00108a25:
    memcpy(__dest,local_168,uVar3);
    __dest = *(JPH **)this;
  }
  *(ulong *)(this + 8) = uVar3;
  __dest[uVar3] = (JPH)0x0;
LAB_00108920:
  local_148[0] = (undefined *)0x109838;
  local_1b8 = 0x109810;
  puStack_1b0 = (pointer_____offset_0x10___)&PTR__basic_stringbuf_00109718;
  if (local_168 != local_158) {
    (*Free)();
  }
  puStack_1b0 = &std::ios::vtable;
  std::locale::~locale(local_178);
  local_1b8 = 0x1097a0;
  local_148[0] = &ConvexShape::vtable;
  std::ios_base::~ios_base((ios_base *)local_148);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* std::__cxx11::basic_stringbuf<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::_M_sync(char*, unsigned long, unsigned long) */

void __thiscall
std::__cxx11::basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_sync
          (basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> *this,char *param_1,
          ulong param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  
  pcVar6 = param_1 + *(long *)(this + 0x50);
  uVar5 = *(uint *)(this + 0x40) & 8;
  if (*(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(this + 0x48) ==
      this + 0x58) {
    lVar4 = 0xf;
  }
  else {
    lVar4 = *(long *)(this + 0x58);
  }
  if ((basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> *)param_1 ==
      *(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(this + 0x48)) {
    pcVar7 = param_1 + lVar4;
  }
  else {
    pcVar6 = pcVar6 + param_2;
    param_2 = 0;
    pcVar7 = pcVar6;
  }
  if (uVar5 != 0) {
    *(char **)(this + 8) = param_1;
    *(char **)(this + 0x10) = param_1 + param_2;
    *(char **)(this + 0x18) = pcVar6;
  }
  if ((*(uint *)(this + 0x40) & 0x10) != 0) {
    *(char **)(this + 0x30) = pcVar7;
    iVar2 = (int)param_3;
    *(char **)(this + 0x20) = param_1;
    *(char **)(this + 0x28) = param_1;
    if (0x7fffffff < (long)param_3) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_3 - 0x80000000;
      lVar4 = SUB168(ZEXT816(0x200000005) * auVar1,8);
      uVar3 = param_3 - 0x7fffffff;
      uVar8 = param_3;
      if (0x7fffffff < (long)uVar3) {
        if ((lVar4 + ((param_3 - 0x80000000) - lVar4 >> 1) >> 0x1e & 1) == 0) goto LAB_00108b30;
        uVar8 = uVar3;
        for (uVar3 = param_3 - 0xfffffffe; 0x7fffffff < (long)uVar3; uVar3 = uVar3 - 0xfffffffe) {
LAB_00108b30:
          uVar8 = uVar3 - 0x7fffffff;
        }
      }
      iVar2 = (int)uVar3;
      param_1 = param_1 + ((param_3 + 0x7fffffff) - uVar8);
    }
    *(char **)(this + 0x28) = param_1 + iVar2;
    if (uVar5 == 0) {
      *(char **)(this + 0x18) = pcVar6;
      *(char **)(this + 8) = pcVar6;
      *(char **)(this + 0x10) = pcVar6;
    }
  }
  return;
}



/* std::__cxx11::basic_stringbuf<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::setbuf(char*, long) */

basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> * __thiscall
std::__cxx11::basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>>::setbuf
          (basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> *this,char *param_1,
          long param_2)

{
  if ((param_1 != (char *)0x0) && (-1 < param_2)) {
    *(undefined8 *)(this + 0x50) = 0;
    **(undefined1 **)(this + 0x48) = 0;
    _M_sync(this,param_1,param_2,0);
    return this;
  }
  return this;
}



/* std::__cxx11::basic_stringbuf<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::overflow(int) */

int __thiscall
std::__cxx11::basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>>::overflow
          (basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> *this,int param_1)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int iVar4;
  basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> *pbVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> *pbVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> bVar14;
  uint uVar15;
  uint uVar16;
  basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> *pbVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> *pbVar21;
  undefined8 *puVar22;
  basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> *pbVar23;
  long in_FS_OFFSET;
  ulong local_80;
  basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> *local_78;
  undefined8 local_70;
  ulong local_68;
  undefined4 uStack_5c;
  undefined8 local_58;
  long local_40;
  long lVar5;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(uint *)(this + 0x40) & 0x10) == 0) {
LAB_00108ed0:
    param_1 = -1;
    goto LAB_00108c53;
  }
  if (param_1 == -1) {
    param_1 = 0;
    goto LAB_00108c53;
  }
  pbVar21 = *(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(this + 0x48);
  pbVar10 = this + 0x58;
  if (pbVar10 == pbVar21) {
    uVar7 = 0xf;
  }
  else {
    uVar7 = *(ulong *)(this + 0x58);
  }
  pbVar6 = *(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(this + 0x28);
  bVar14 = SUB41(param_1,0);
  if ((ulong)((long)*(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
                     (this + 0x30) - *(long *)(this + 0x20)) < uVar7) {
    lVar19 = (long)pbVar6 - *(long *)(this + 0x20);
    *(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(this + 0x30) =
         pbVar21 + uVar7;
    *(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(this + 0x20) =
         pbVar21;
    *(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(this + 0x28) =
         pbVar21;
    if (lVar19 < 0x80000000) {
      iVar4 = (int)lVar19;
      pbVar10 = pbVar21;
    }
    else {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = lVar19 - 0x80000000U;
      lVar11 = SUB168(ZEXT816(0x200000005) * auVar2,8);
      lVar5 = lVar19 + -0x7fffffff;
      lVar20 = lVar19;
      if (0x7fffffff < lVar5) {
        lVar20 = lVar5;
        lVar3 = lVar19;
        if ((lVar11 + ((lVar19 - 0x80000000U) - lVar11 >> 1) >> 0x1e & 1) == 0) goto LAB_00108cf0;
        while (lVar5 = lVar3 + -0xfffffffe, 0x7fffffff < lVar5) {
LAB_00108cf0:
          lVar20 = lVar5 + -0x7fffffff;
          lVar3 = lVar5;
        }
      }
      iVar4 = (int)lVar5;
      pbVar10 = pbVar21 + ((lVar19 + 0x7fffffff) - lVar20);
    }
    *(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(this + 0x28) =
         pbVar10 + iVar4;
    if ((*(uint *)(this + 0x40) & 8) != 0) {
      lVar19 = *(long *)(this + 8);
      *(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(this + 0x18) =
           pbVar21 + (*(long *)(this + 0x18) - lVar19) + 1;
      *(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(this + 8) = pbVar21
      ;
      *(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(this + 0x10) =
           pbVar21 + (*(long *)(this + 0x10) - lVar19);
    }
    pbVar10[iVar4] = bVar14;
    lVar19 = *(long *)(this + 0x28);
  }
  else {
    if (pbVar6 < *(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
                  (this + 0x30)) {
      *pbVar6 = bVar14;
    }
    else {
      if (uVar7 == 0x7fffffffffffffff) goto LAB_00108ed0;
      local_80 = uVar7 * 2;
      if (local_80 < 0x200) {
        local_80 = 0x200;
      }
      else if ((long)local_80 < 0) {
        local_80 = 0x7fffffffffffffff;
      }
      local_70 = 0;
      pbVar21 = (basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> *)&local_68;
      local_68 = local_68 & 0xffffffffffffff00;
      local_78 = pbVar21;
      pbVar6 = (basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> *)
               basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_create
                         (&local_80,0xf);
      if (local_70 == 0) {
        *pbVar6 = *local_78;
      }
      else if (local_70 + 1 != 0) {
        memcpy(pbVar6,local_78,local_70 + 1);
      }
      if (local_78 != pbVar21) {
        (*JPH::Free)();
      }
      pcVar1 = *(char **)(this + 0x20);
      local_68 = local_80;
      local_78 = pbVar6;
      if (pcVar1 != (char *)0x0) {
        basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_replace
                  ((basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)&local_78,0,
                   local_70,pcVar1,*(long *)(this + 0x30) - (long)pcVar1);
      }
      uVar13 = local_70;
      uVar7 = local_70 + 1;
      uVar12 = local_68;
      if (local_78 == pbVar21) {
        uVar12 = 0xf;
      }
      if (uVar12 < uVar7) {
        basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_mutate
                  ((basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)&local_78,
                   local_70,0,(char *)0x0,1);
        local_78[uVar13] = bVar14;
        local_70 = uVar7;
        local_78[uVar13 + 1] =
             (basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>>)0x0;
        pbVar6 = *(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
                  (this + 0x48);
        if (pbVar10 == pbVar6) goto LAB_00108f6a;
LAB_00108e61:
        uVar12 = *(ulong *)(this + 0x58);
        if (local_78 == pbVar21) {
          uVar13 = uVar13 + 2;
          uVar15 = (uint)uVar13;
          if (uVar15 < 8) {
            if ((uVar13 & 4) == 0) {
              if (uVar15 != 0) {
                this[0x58] = local_68._0_1_;
                if ((uVar13 & 2) != 0) {
                  *(undefined2 *)(this + (uVar13 & 0xffffffff) + 0x56) =
                       *(undefined2 *)((long)&local_70 + (uVar13 & 0xffffffff) + 6);
                }
              }
            }
            else {
              *(undefined4 *)(this + 0x58) = (undefined4)local_68;
              *(undefined4 *)(this + (uVar13 & 0xffffffff) + 0x54) =
                   *(undefined4 *)((long)&local_70 + (uVar13 & 0xffffffff) + 4);
            }
          }
          else {
            *(ulong *)(this + 0x58) = local_68;
            *(undefined8 *)(this + (uVar13 & 0xffffffff) + 0x50) =
                 *(undefined8 *)((long)&local_70 + (uVar13 & 0xffffffff));
            lVar19 = (long)pbVar10 - ((ulong)(this + 0x60) & 0xfffffffffffffff8);
            uVar15 = uVar15 + (int)lVar19 & 0xfffffff8;
            if (7 < uVar15) {
              uVar18 = 0;
              do {
                uVar13 = (ulong)uVar18;
                uVar18 = uVar18 + 8;
                *(undefined8 *)(((ulong)(this + 0x60) & 0xfffffffffffffff8) + uVar13) =
                     *(undefined8 *)(pbVar21 + (uVar13 - lVar19));
              } while (uVar18 < uVar15);
            }
          }
          *(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(this + 0x48) =
               pbVar10;
        }
        else {
          *(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(this + 0x48) =
               local_78;
          *(ulong *)(this + 0x58) = local_68;
          pbVar10 = local_78;
        }
        local_70 = *(ulong *)(this + 0x50);
        pbVar17 = pbVar10;
        pbVar23 = pbVar6;
        local_78 = pbVar6;
        local_68 = uVar12;
LAB_00108e93:
        *(ulong *)(this + 0x50) = uVar7;
        pbVar6 = pbVar17;
      }
      else {
        local_78[local_70] = bVar14;
        local_70 = uVar7;
        local_78[uVar13 + 1] =
             (basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>>)0x0;
        pbVar6 = *(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
                  (this + 0x48);
        if (pbVar6 != pbVar10) goto LAB_00108e61;
LAB_00108f6a:
        uVar12 = local_68;
        local_70 = *(ulong *)(this + 0x50);
        if (local_78 != pbVar21) {
          uVar13 = local_70 + 1;
          pbVar6 = pbVar21;
          if (7 < (uint)uVar13) {
            uVar8 = 0;
            do {
              uVar15 = (int)uVar8 + 8;
              uVar9 = (ulong)uVar15;
              *(undefined8 *)(pbVar21 + uVar8) = *(undefined8 *)(pbVar10 + uVar8);
              uVar8 = uVar9;
            } while (uVar15 < ((uint)uVar13 & 0xfffffff8));
            pbVar6 = pbVar21 + uVar9;
            pbVar10 = pbVar10 + uVar9;
          }
          lVar19 = 0;
          if ((uVar13 & 4) != 0) {
            *(undefined4 *)pbVar6 = *(undefined4 *)pbVar10;
            lVar19 = 4;
          }
          if ((uVar13 & 2) != 0) {
            *(undefined2 *)(pbVar6 + lVar19) = *(undefined2 *)(pbVar10 + lVar19);
            lVar19 = lVar19 + 2;
          }
          if ((uVar13 & 1) != 0) {
            pbVar6[lVar19] = pbVar10[lVar19];
          }
          *(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(this + 0x48) =
               local_78;
          *(ulong *)(this + 0x58) = uVar12;
          pbVar17 = local_78;
          pbVar23 = (basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> *)
                    &local_68;
          local_78 = pbVar21;
          goto LAB_00108e93;
        }
        pbVar17 = pbVar6;
        pbVar23 = local_78;
        if (local_70 == 0) {
          pbVar23 = pbVar21;
          if (uVar7 == 0) goto LAB_00108e93;
          uVar13 = uVar13 + 2;
          uVar15 = (uint)uVar13;
          if (uVar15 < 8) {
            if ((uVar13 & 4) == 0) {
              if (uVar15 != 0) {
                this[0x58] = local_68._0_1_;
                if ((uVar13 & 2) != 0) {
                  *(undefined2 *)(this + (uVar13 & 0xffffffff) + 0x56) =
                       *(undefined2 *)((long)&local_70 + (uVar13 & 0xffffffff) + 6);
                  pbVar6 = *(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> **
                            )(this + 0x48);
                }
              }
            }
            else {
              *(undefined4 *)(this + 0x58) = (undefined4)local_68;
              *(undefined4 *)(this + (uVar13 & 0xffffffff) + 0x54) =
                   *(undefined4 *)((long)&local_70 + (uVar13 & 0xffffffff) + 4);
              pbVar6 = *(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
                        (this + 0x48);
            }
          }
          else {
            *(ulong *)(this + 0x58) = local_68;
            *(undefined8 *)(this + (uVar13 & 0xffffffff) + 0x50) =
                 *(undefined8 *)((long)&local_70 + (uVar13 & 0xffffffff));
            lVar19 = (long)pbVar10 - ((ulong)(this + 0x60) & 0xfffffffffffffff8);
            uVar15 = uVar15 + (int)lVar19 & 0xfffffff8;
            if (7 < uVar15) {
              uVar18 = 0;
              do {
                uVar13 = (ulong)uVar18;
                uVar18 = uVar18 + 8;
                *(undefined8 *)(((ulong)(this + 0x60) & 0xfffffffffffffff8) + uVar13) =
                     *(undefined8 *)(pbVar21 + (uVar13 - lVar19));
              } while (uVar18 < uVar15);
            }
            pbVar6 = *(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
                      (this + 0x48);
          }
          *(ulong *)(this + 0x50) = uVar7;
          local_70 = 0;
          local_68 = local_68 & 0xffffffffffffff00;
          pbVar23 = local_78;
        }
        else {
          uVar12 = local_70 + 1;
          uVar15 = (uint)uVar12;
          if (uVar7 != 0) {
            uVar13 = uVar13 + 2;
            uVar18 = (uint)uVar13;
            pbVar6 = pbVar21;
            puVar22 = &local_58;
            if (7 < uVar18) {
              uVar8 = 0;
              do {
                uVar16 = (int)uVar8 + 8;
                uVar9 = (ulong)uVar16;
                *(undefined8 *)((long)&local_58 + uVar8) = *(undefined8 *)(pbVar21 + uVar8);
                uVar8 = uVar9;
              } while (uVar16 < (uVar18 & 0xfffffff8));
              puVar22 = (undefined8 *)((long)&local_58 + uVar9);
              pbVar6 = pbVar21 + uVar9;
            }
            lVar19 = 0;
            if ((uVar13 & 4) != 0) {
              *(undefined4 *)puVar22 = *(undefined4 *)pbVar6;
              lVar19 = 4;
            }
            if ((uVar13 & 2) != 0) {
              *(undefined2 *)((long)puVar22 + lVar19) = *(undefined2 *)(pbVar6 + lVar19);
              lVar19 = lVar19 + 2;
            }
            if ((uVar13 & 1) != 0) {
              *(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> *)
               ((long)puVar22 + lVar19) = pbVar6[lVar19];
            }
            pbVar6 = pbVar10;
            if (7 < uVar15) {
              uVar8 = 0;
              do {
                uVar16 = (int)uVar8 + 8;
                uVar9 = (ulong)uVar16;
                *(undefined8 *)(pbVar21 + uVar8) = *(undefined8 *)(pbVar10 + uVar8);
                uVar8 = uVar9;
              } while (uVar16 < (uVar15 & 0xfffffff8));
              pbVar21 = pbVar21 + uVar9;
              pbVar6 = pbVar10 + uVar9;
            }
            lVar19 = 0;
            if ((uVar12 & 4) != 0) {
              *(undefined4 *)pbVar21 = *(undefined4 *)pbVar6;
              lVar19 = 4;
            }
            if ((uVar12 & 2) != 0) {
              *(undefined2 *)(pbVar21 + lVar19) = *(undefined2 *)(pbVar6 + lVar19);
              lVar19 = lVar19 + 2;
            }
            if ((uVar12 & 1) != 0) {
              pbVar21[lVar19] = pbVar6[lVar19];
            }
            if (uVar18 < 8) {
              if ((uVar13 & 4) == 0) {
                if (uVar18 != 0) {
                  this[0x58] = local_58._0_1_;
                  if ((uVar13 & 2) != 0) {
                    *(undefined2 *)(this + (uVar13 & 0xffffffff) + 0x56) =
                         *(undefined2 *)((long)&uStack_5c + (uVar13 & 0xffffffff) + 2);
                    pbVar17 = *(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>>
                                **)(this + 0x48);
                    local_70 = *(ulong *)(this + 0x50);
                  }
                }
              }
              else {
                *(undefined4 *)(this + 0x58) = (undefined4)local_58;
                *(undefined4 *)(this + (uVar13 & 0xffffffff) + 0x54) =
                     *(undefined4 *)((long)&uStack_5c + (uVar13 & 0xffffffff));
                pbVar17 = *(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
                           (this + 0x48);
                local_70 = *(ulong *)(this + 0x50);
              }
            }
            else {
              *(ulong *)(this + 0x58) = CONCAT44(local_58._4_4_,(undefined4)local_58);
              *(undefined8 *)(this + (uVar13 & 0xffffffff) + 0x50) =
                   *(undefined8 *)(&stack0xffffffffffffffa0 + (uVar13 & 0xffffffff));
              lVar19 = (long)pbVar10 - ((ulong)(this + 0x60) & 0xfffffffffffffff8);
              uVar15 = uVar18 + (int)lVar19 & 0xfffffff8;
              if (7 < uVar15) {
                uVar18 = 0;
                do {
                  uVar13 = (ulong)uVar18;
                  uVar18 = uVar18 + 8;
                  *(undefined8 *)(((ulong)(this + 0x60) & 0xfffffffffffffff8) + uVar13) =
                       *(undefined8 *)((long)&local_58 + (uVar13 - lVar19));
                } while (uVar18 < uVar15);
              }
              pbVar17 = *(basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
                         (this + 0x48);
              local_70 = *(ulong *)(this + 0x50);
            }
            goto LAB_00108e93;
          }
          if (7 < uVar15) {
            uVar7 = 0;
            do {
              uVar18 = (int)uVar7 + 8;
              uVar13 = (ulong)uVar18;
              *(undefined8 *)(pbVar21 + uVar7) = *(undefined8 *)(pbVar10 + uVar7);
              uVar7 = uVar13;
            } while (uVar18 < (uVar15 & 0xfffffff8));
            pbVar21 = pbVar21 + uVar13;
            pbVar10 = pbVar10 + uVar13;
          }
          lVar19 = 0;
          if ((uVar12 & 4) != 0) {
            *(undefined4 *)pbVar21 = *(undefined4 *)pbVar10;
            lVar19 = 4;
          }
          if ((uVar12 & 2) != 0) {
            *(undefined2 *)(pbVar21 + lVar19) = *(undefined2 *)(pbVar10 + lVar19);
            lVar19 = lVar19 + 2;
          }
          if ((uVar12 & 1) != 0) {
            pbVar21[lVar19] = pbVar10[lVar19];
          }
          this[0x58] = (basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>>)0x0;
          *(undefined8 *)(this + 0x50) = 0;
        }
      }
      _M_sync(this,(char *)pbVar6,*(long *)(this + 0x10) - *(long *)(this + 8),
              *(long *)(this + 0x28) - *(long *)(this + 0x20));
      if (pbVar23 !=
          (basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> *)&local_68) {
        (*JPH::Free)(pbVar23);
      }
    }
    lVar19 = *(long *)(this + 0x28);
  }
  *(long *)(this + 0x28) = lVar19 + 1;
LAB_00108c53:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::GetRTTIOfType(JPH::ConvexHullShapeSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC96;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::DebugRenderer::Geometry::Geometry(JPH::Ref<JPH::RefTargetVirtual> const&, JPH::AABox const&)
    */

void __thiscall JPH::DebugRenderer::Geometry::Geometry(Geometry *this,Ref *param_1,AABox *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::ConvexHullShapeSettings::~ConvexHullShapeSettings() */

void __thiscall
JPH::ConvexHullShapeSettings::~ConvexHullShapeSettings(ConvexHullShapeSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::ConvexHullShape::~ConvexHullShape() */

void __thiscall JPH::ConvexHullShape::~ConvexHullShape(ConvexHullShape *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::__cxx11::basic_stringbuf<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::~basic_stringbuf() */

void __thiscall
std::__cxx11::basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>>::~basic_stringbuf
          (basic_stringbuf<char,std::char_traits<char>,JPH::STLAllocator<char>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::ConvexHullShape::HullNoConvex::~HullNoConvex() */

void __thiscall JPH::ConvexHullShape::HullNoConvex::~HullNoConvex(HullNoConvex *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::ConvexHullShape::HullWithConvex::~HullWithConvex() */

void __thiscall JPH::ConvexHullShape::HullWithConvex::~HullWithConvex(HullWithConvex *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::ConvexHullShape::HullWithConvexScaled::~HullWithConvexScaled() */

void __thiscall
JPH::ConvexHullShape::HullWithConvexScaled::~HullWithConvexScaled(HullWithConvexScaled *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

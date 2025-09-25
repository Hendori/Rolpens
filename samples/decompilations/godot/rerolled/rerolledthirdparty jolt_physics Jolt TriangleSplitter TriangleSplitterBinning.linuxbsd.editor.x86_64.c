/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::TriangleSplitterBinning::Split(JPH::TriangleSplitter::Range const&,
   JPH::TriangleSplitter::Range&, JPH::TriangleSplitter::Range&) */undefined8 JPH::TriangleSplitterBinning::Split(Range *param_1, Range *param_2, Range *param_3) {
   uint *puVar1;
   undefined4 uVar2;
   float fVar3;
   uint uVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   uint uVar9;
   float fVar10;
   float fVar11;
   int iVar12;
   uint uVar13;
   int iVar14;
   uint *puVar15;
   float *pfVar16;
   undefined8 uVar17;
   undefined1(*pauVar18)[16];
   undefined1(*pauVar19)[16];
   undefined1(*pauVar20)[16];
   Range *pRVar21;
   ulong uVar22;
   long lVar23;
   ulong uVar24;
   ulong uVar25;
   uint uVar26;
   long lVar27;
   int iVar28;
   int iVar29;
   int iVar30;
   long in_FS_OFFSET;
   uint uVar31;
   float fVar32;
   float fVar33;
   uint uVar37;
   float fVar38;
   float fVar39;
   uint uVar40;
   float fVar41;
   float fVar42;
   undefined1 auVar34[16];
   uint uVar43;
   undefined1 auVar35[16];
   undefined1 auVar36[16];
   undefined1 auVar44[16];
   undefined1 auVar45[16];
   undefined1 auVar46[16];
   undefined1 auVar47[16];
   float fVar48;
   undefined1 auVar49[16];
   undefined1 auVar50[16];
   undefined1 auVar51[16];
   undefined1 auVar52[16];
   float fVar53;
   int iVar54;
   int iVar55;
   int iVar56;
   int iVar57;
   uint uVar58;
   uint uVar61;
   uint uVar62;
   undefined1 auVar59[16];
   undefined1 auVar60[16];
   uint uVar63;
   undefined1 local_88[16];
   undefined1 local_78[16];
   float local_68[4];
   uint local_58[6];
   long local_40;
   fVar11 = _LC4;
   fVar10 = _LC2;
   uVar26 = *(uint*)param_2;
   uVar4 = *(uint*)( param_2 + 4 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (uVar26 < uVar4) {
      lVar5 = *(long*)( param_1 + 0x28 );
      puVar15 = (uint*)( *(long*)( param_1 + 0x40 ) + (ulong)uVar26 * 4 );
      local_88._4_4_ = _LC2;
      local_88._0_4_ = _LC2;
      local_88._8_4_ = _LC2;
      local_88._12_4_ = _LC2;
      auVar51._4_4_ = _LC4;
      auVar51._0_4_ = _LC4;
      auVar51._8_4_ = _LC4;
      auVar51._12_4_ = _LC4;
      do {
         uVar25 = ( ulong ) * puVar15;
         puVar15 = puVar15 + 1;
         uVar2 = *(undefined4*)( lVar5 + 8 + uVar25 * 0xc );
         auVar45._4_4_ = *(undefined4*)( lVar5 + 4 + uVar25 * 0xc );
         auVar45._0_4_ = *(undefined4*)( lVar5 + uVar25 * 0xc );
         auVar45._8_4_ = uVar2;
         auVar45._12_4_ = uVar2;
         local_88 = minps(local_88, auVar45);
         auVar51 = maxps(auVar51, auVar45);
      }
 while ( puVar15 != (uint*)( *(long*)( param_1 + 0x40 ) + 4 + ( ( ulong )(( uVar4 - 1 ) - uVar26) + (ulong)uVar26 ) * 4 ) );
   }
 else {
      local_88._4_4_ = _LC2;
      local_88._0_4_ = _LC2;
      local_88._8_4_ = _LC2;
      local_88._12_4_ = _LC2;
      auVar51._4_4_ = _LC4;
      auVar51._0_4_ = _LC4;
      auVar51._8_4_ = _LC4;
      auVar51._12_4_ = _LC4;
   }

   auVar52._0_4_ = auVar51._0_4_ - local_88._0_4_;
   auVar52._4_4_ = auVar51._4_4_ - local_88._4_4_;
   auVar52._8_4_ = auVar51._8_4_ - local_88._8_4_;
   auVar52._12_4_ = auVar51._12_4_ - local_88._12_4_;
   lVar5 = *(long*)( param_1 + 0x68 );
   uVar13 = ( uVar4 - uVar26 ) / *(uint*)( param_1 + 0x50 );
   auVar50._4_4_ = _LC7;
   auVar50._0_4_ = _LC7;
   auVar50._8_4_ = _LC7;
   auVar50._12_4_ = _LC7;
   local_78 = maxps(auVar52, auVar50);
   if (uVar13 < *(uint*)( param_1 + 0x48 )) {
      uVar13 = *(uint*)( param_1 + 0x48 );
   }

   uVar9 = *(uint*)( param_1 + 0x4c );
   if (uVar13 <= *(uint*)( param_1 + 0x4c )) {
      uVar9 = uVar13;
   }

   uVar24 = (ulong)uVar9;
   lVar27 = 0;
   uVar25 = 0;
   do {
      fVar53 = *(float*)( local_88 + lVar27 );
      fVar3 = *(float*)( local_78 + lVar27 );
      if (uVar9 != 0) {
         uVar13 = 0;
         pfVar16 = (float*)( uVar25 * 0x80 + lVar5 );
         do {
            uVar13 = uVar13 + 1;
            *pfVar16 = fVar10;
            for (int i = 0; i < 3; i++) {
               pfVar16[( i + 1 )] = fVar10;
            }

            for (int i = 0; i < 4; i++) {
               pfVar16[( i + 4 )] = fVar11;
            }

            pfVar16[9] = 0.0;
            pfVar16[8] = ( (float)uVar13 * fVar3 ) / (float)uVar24 + fVar53;
            pfVar16 = pfVar16 + 0x20;
         }
 while ( uVar13 != uVar9 );
      }

      iVar12 = _UNK_001008bc;
      iVar29 = _UNK_001008b8;
      iVar28 = _UNK_001008b4;
      iVar14 = __LC8;
      lVar27 = lVar27 + 4;
      uVar25 = ( ulong )((int)uVar25 + uVar9);
   }
 while ( lVar27 != 0xc );
   if (uVar26 < uVar4) {
      fVar53 = (float)uVar24;
      lVar27 = *(long*)( param_1 + 0x40 );
      lVar6 = *(long*)( *(long*)( param_1 + 0x10 ) + 0x10 );
      lVar7 = *(long*)( param_1 + 0x28 );
      puVar15 = (uint*)( lVar27 + (ulong)uVar26 * 4 );
      lVar8 = *(long*)( *(long*)( param_1 + 8 ) + 0x10 );
      uVar13 = uVar9 - 1;
      iVar54 = uVar13 - __LC8;
      iVar55 = uVar13 - _UNK_001008b4;
      iVar56 = uVar13 - _UNK_001008b8;
      iVar57 = uVar13 - _UNK_001008bc;
      do {
         uVar25 = ( ulong ) * puVar15;
         iVar30 = 0;
         local_68[1] = *(float*)( lVar7 + 4 + uVar25 * 0xc );
         local_68[0] = *(float*)( lVar7 + uVar25 * 0xc );
         puVar1 = (uint*)( lVar6 + uVar25 * 0x14 );
         local_68[3] = *(float*)( lVar7 + 8 + uVar25 * 0xc );
         uVar25 = (ulong)puVar1[1];
         local_68[2] = local_68[3];
         auVar34._0_4_ = local_68[0] - local_88._0_4_;
         auVar34._4_4_ = local_68[1] - local_88._4_4_;
         auVar34._8_4_ = local_68[3] - local_88._8_4_;
         auVar34._12_4_ = local_68[3] - local_88._12_4_;
         auVar51 = divps(auVar34, local_78);
         uVar2 = *(undefined4*)( lVar8 + 8 + uVar25 * 0xc );
         uVar22 = ( ulong ) * puVar1;
         auVar59._4_4_ = *(undefined4*)( lVar8 + 4 + uVar25 * 0xc );
         auVar59._0_4_ = *(undefined4*)( lVar8 + uVar25 * 0xc );
         auVar59._8_4_ = uVar2;
         auVar59._12_4_ = uVar2;
         uVar25 = (ulong)puVar1[2];
         uVar2 = *(undefined4*)( lVar8 + 8 + uVar22 * 0xc );
         lVar23 = 0;
         auVar44._0_8_ = CONCAT44(*(undefined4*)( lVar8 + 4 + uVar22 * 0xc ), *(undefined4*)( lVar8 + uVar22 * 0xc ));
         auVar44._8_4_ = uVar2;
         auVar44._12_4_ = uVar2;
         auVar49._8_4_ = uVar2;
         auVar49._0_8_ = auVar44._0_8_;
         auVar49._12_4_ = uVar2;
         auVar45 = minps(auVar44, auVar59);
         auVar50 = maxps(auVar49, auVar59);
         uVar2 = *(undefined4*)( lVar8 + 8 + uVar25 * 0xc );
         auVar60._4_4_ = *(undefined4*)( lVar8 + 4 + uVar25 * 0xc );
         auVar60._0_4_ = *(undefined4*)( lVar8 + uVar25 * 0xc );
         auVar60._8_4_ = uVar2;
         auVar60._12_4_ = uVar2;
         auVar45 = minps(auVar45, auVar60);
         auVar50 = maxps(auVar50, auVar60);
         uVar31 = ( uint )(auVar51._0_4_ * fVar53);
         uVar37 = ( uint )(auVar51._4_4_ * fVar53);
         uVar40 = ( uint )(auVar51._8_4_ * fVar53);
         uVar43 = ( uint )(auVar51._12_4_ * fVar53);
         uVar58 = -(uint)(iVar54 < (int)(uVar31 - iVar14));
         uVar61 = -(uint)(iVar55 < (int)(uVar37 - iVar28));
         uVar62 = -(uint)(iVar56 < (int)(uVar40 - iVar29));
         uVar63 = -(uint)(iVar57 < (int)(uVar43 - iVar12));
         local_58[3] = ~uVar63 & uVar43 | uVar13 & uVar63;
         local_58[0] = ~uVar58 & uVar31 | uVar13 & uVar58;
         local_58[1] = ~uVar61 & uVar37 | uVar13 & uVar61;
         local_58[2] = ~uVar62 & uVar40 | uVar13 & uVar62;
         do {
            uVar31 = iVar30 + *(int*)( (long)local_58 + lVar23 );
            iVar30 = iVar30 + uVar9;
            pauVar18 = (undefined1(*) [16])( (ulong)uVar31 * 0x80 + lVar5 );
            auVar51 = *pauVar18;
            *(int*)( pauVar18[2] + 4 ) = *(int*)( pauVar18[2] + 4 ) + 1;
            auVar51 = minps(auVar51, auVar45);
            *pauVar18 = auVar51;
            auVar51 = maxps(pauVar18[1], auVar50);
            pauVar18[1] = auVar51;
            fVar3 = *(float*)( (long)local_68 + lVar23 );
            if (*(float*)pauVar18[2] <= *(float*)( (long)local_68 + lVar23 )) {
               fVar3 = *(float*)pauVar18[2];
            }

            lVar23 = lVar23 + 4;
            *(float*)pauVar18[2] = fVar3;
         }
 while ( lVar23 != 0xc );
         puVar15 = puVar15 + 1;
      }
 while ( (uint*)( lVar27 + 4 + ( ( ulong )(( uVar4 - 1 ) - uVar26) + (ulong)uVar26 ) * 4 ) != puVar15 );
   }

   fVar3 = _LC7;
   iVar14 = uVar9 - 1;
   uVar26 = 0;
   uVar25 = 0;
   fVar53 = 0.0;
   pRVar21 = (Range*)0xffffffff;
   fVar48 = _LC2;
   do {
      if (( fVar3 < local_68[uVar25 - 4] ) && ( pauVar18 = uVar9 != 0 )) {
         auVar46._4_4_ = fVar11;
         auVar46._0_4_ = fVar11;
         auVar46._8_4_ = fVar11;
         auVar46._12_4_ = fVar11;
         iVar28 = 0;
         auVar35._4_4_ = fVar10;
         auVar35._0_4_ = fVar10;
         auVar35._8_4_ = fVar10;
         auVar35._12_4_ = fVar10;
         pauVar20 = pauVar18;
         do {
            *(int*)pauVar20[7] = iVar28;
            iVar28 = iVar28 + *(int*)( pauVar20[2] + 4 );
            pauVar19 = pauVar20 + 8;
            pauVar20[3] = auVar35;
            auVar35 = minps(auVar35, *pauVar20);
            pauVar20[4] = auVar46;
            auVar46 = maxps(auVar46, pauVar20[1]);
            pauVar20 = pauVar19;
         }
 while ( pauVar18 + uVar24 * 8 != pauVar19 );
         if (-1 < iVar14) {
            auVar47._4_4_ = fVar10;
            auVar47._0_4_ = fVar10;
            auVar47._8_4_ = fVar10;
            auVar47._12_4_ = fVar10;
            auVar36._4_4_ = fVar11;
            auVar36._0_4_ = fVar11;
            auVar36._8_4_ = fVar11;
            auVar36._12_4_ = fVar11;
            iVar29 = 0;
            pauVar20 = pauVar18 + (long)iVar14 * 8;
            iVar28 = iVar14;
            do {
               auVar47 = minps(auVar47, *pauVar20);
               auVar36 = maxps(auVar36, pauVar20[1]);
               iVar28 = iVar28 + -1;
               iVar29 = iVar29 + *(int*)( pauVar20[2] + 4 );
               *(int*)( pauVar20[7] + 4 ) = iVar29;
               pauVar20[5] = auVar47;
               pauVar20[6] = auVar36;
               pauVar20 = pauVar20 + -8;
            }
 while ( iVar28 != -1 );
            if (uVar9 == 1) goto LAB_00100360;
         }

         pauVar20 = pauVar18 + 10;
         do {
            fVar32 = *(float*)pauVar20[2] - *(float*)pauVar20[1];
            fVar38 = *(float*)( pauVar20[2] + 4 ) - *(float*)( pauVar20[1] + 4 );
            fVar41 = *(float*)( pauVar20[2] + 8 ) - *(float*)( pauVar20[1] + 8 );
            fVar33 = *(float*)pauVar20[4] - *(float*)pauVar20[3];
            fVar39 = *(float*)( pauVar20[4] + 4 ) - *(float*)( pauVar20[3] + 4 );
            fVar42 = *(float*)( pauVar20[4] + 8 ) - *(float*)( pauVar20[3] + 8 );
            fVar33 = fVar42 * fVar33 + fVar33 * fVar39 + fVar42 * fVar39;
            fVar32 = fVar41 * fVar32 + fVar32 * fVar38 + fVar41 * fVar38;
            fVar32 = ( fVar33 + fVar33 ) * (float)*(uint*)( pauVar20[5] + 4 ) + ( fVar32 + fVar32 ) * (float)*(uint*)pauVar20[5];
            if (fVar32 < fVar48) {
               fVar53 = *(float*)*pauVar20;
               pRVar21 = (Range*)( uVar25 & 0xffffffff );
               fVar48 = fVar32;
            }

            pauVar20 = pauVar20 + 8;
         }
 while ( pauVar20 != pauVar18 + ( ulong )(uVar9 - 2) * 8 + 0x12 );
      }

      LAB_00100360:uVar25 = uVar25 + 1;
      uVar26 = uVar26 + uVar9;
      if (uVar25 == 3) {
         if ((int)pRVar21 == -1) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return 0;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar17 = JPH::TriangleSplitter::SplitInternal(param_1, (uint)param_2, fVar53, pRVar21, param_3);
            return uVar17;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

   }
 while ( true );
}
/* JPH::TriangleSplitterBinning::TriangleSplitterBinning(JPH::Array<JPH::Float3,
   JPH::STLAllocator<JPH::Float3> > const&, JPH::Array<JPH::IndexedTriangle,
   JPH::STLAllocator<JPH::IndexedTriangle> > const&, unsigned int, unsigned int, unsigned int) */void JPH::TriangleSplitterBinning::TriangleSplitterBinning(TriangleSplitterBinning *this, Array *param_1, Array *param_2, uint param_3, uint param_4, uint param_5) {
   undefined4 uVar1;
   undefined4 uVar2;
   long lVar3;
   undefined4 *puVar4;
   undefined4 *puVar5;
   undefined4 *puVar6;
   ulong uVar7;
   JPH::TriangleSplitter::TriangleSplitter((TriangleSplitter*)this, param_1, param_2);
   *(uint*)( this + 0x4c ) = param_4;
   uVar7 = ( ulong )(param_4 * 3);
   *(undefined***)this = &PTR__TriangleSplitterBinning_00100878;
   *(uint*)( this + 0x48 ) = param_3;
   *(uint*)( this + 0x50 ) = param_5;
   *(undefined8*)( this + 0x68 ) = 0;
   *(undefined1(*) [16])( this + 0x58 ) = (undefined1[16])0x0;
   if (uVar7 != 0) {
      lVar3 = ( *Reallocate )(0, 0, uVar7 * 0x80);
      *(ulong*)( this + 0x60 ) = uVar7;
      *(long*)( this + 0x68 ) = lVar3;
      uVar2 = _LC4;
      uVar1 = _LC2;
      puVar5 = (undefined4*)( *(long*)( this + 0x58 ) * 0x80 + lVar3 );
      puVar4 = (undefined4*)( lVar3 + uVar7 * 0x80 );
      if (puVar5 < puVar4) {
         do {
            *puVar5 = uVar1;
            for (int i = 0; i < 3; i++) {
               puVar5[( i + 1 )] = uVar1;
            }

            puVar6 = puVar5 + 0x20;
            for (int i = 0; i < 4; i++) {
               puVar5[( i + 4 )] = uVar2;
            }

            for (int i = 0; i < 4; i++) {
               puVar5[( i + 12 )] = uVar1;
            }

            for (int i = 0; i < 4; i++) {
               puVar5[( i + 16 )] = uVar2;
            }

            for (int i = 0; i < 4; i++) {
               puVar5[( i + 20 )] = uVar1;
            }

            for (int i = 0; i < 4; i++) {
               puVar5[( i + 24 )] = uVar2;
            }

            puVar5 = puVar6;
         }
 while ( puVar6 < puVar4 );
         *(ulong*)( this + 0x58 ) = uVar7;
         return;
      }

   }

   *(ulong*)( this + 0x58 ) = uVar7;
   return;
}
/* JPH::TriangleSplitterBinning::GetStats(JPH::TriangleSplitter::Stats&) const */void JPH::TriangleSplitterBinning::GetStats(TriangleSplitterBinning *this, Stats *param_1) {
   *(char**)param_1 = "TriangleSplitterBinning";
   return;
}
/* JPH::TriangleSplitterBinning::~TriangleSplitterBinning() */void JPH::TriangleSplitterBinning::~TriangleSplitterBinning(TriangleSplitterBinning *this) {
   *(undefined***)this = &PTR__TriangleSplitterBinning_00100878;
   if (*(long*)( this + 0x68 ) != 0) {
      *(undefined8*)( this + 0x58 ) = 0;
      ( *Free )();
   }

   *(undefined**)this = &DAT_00100848;
   if (*(long*)( this + 0x40 ) != 0) {
      *(undefined8*)( this + 0x30 ) = 0;
      ( *Free )();
   }

   if (*(long*)( this + 0x28 ) != 0) {
      *(undefined8*)( this + 0x18 ) = 0;
      /* WARNING: Could not recover jumptable at 0x001006dc. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *Free )();
      return;
   }

   return;
}
/* JPH::TriangleSplitterBinning::~TriangleSplitterBinning() */void JPH::TriangleSplitterBinning::~TriangleSplitterBinning(TriangleSplitterBinning *this) {
   *(undefined***)this = &PTR__TriangleSplitterBinning_00100878;
   if (*(long*)( this + 0x68 ) != 0) {
      *(undefined8*)( this + 0x58 ) = 0;
      ( *Free )();
   }

   *(undefined**)this = &DAT_00100848;
   if (*(long*)( this + 0x40 ) != 0) {
      *(undefined8*)( this + 0x30 ) = 0;
      ( *Free )();
   }

   if (*(long*)( this + 0x28 ) != 0) {
      *(undefined8*)( this + 0x18 ) = 0;
      ( *Free )();
   }

   operator_delete(this, 0x70);
   return;
}
/* JPH::TriangleSplitterBinning::TriangleSplitterBinning(JPH::Array<JPH::Float3,
   JPH::STLAllocator<JPH::Float3> > const&, JPH::Array<JPH::IndexedTriangle,
   JPH::STLAllocator<JPH::IndexedTriangle> > const&, unsigned int, unsigned int, unsigned int) */void JPH::TriangleSplitterBinning::_GLOBAL__sub_I_TriangleSplitterBinning(void) {
   if (DVec3::cTrue == '\0') {
      DVec3::cTrue = '\x01';
      DVec3::cTrue = _LC10;
   }

   return;
}
/* WARNING: Control flow encountered bad instruction data *//* JPH::TriangleSplitterBinning::~TriangleSplitterBinning() */void JPH::TriangleSplitterBinning::~TriangleSplitterBinning(TriangleSplitterBinning *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


/* JPH::TriangleSplitterLongestAxis::Split(JPH::TriangleSplitter::Range const&,
   JPH::TriangleSplitter::Range&, JPH::TriangleSplitter::Range&) */void JPH::TriangleSplitterLongestAxis::Split(Range *param_1, Range *param_2, Range *param_3) {
   uint *puVar1;
   undefined4 uVar2;
   long lVar3;
   uint *puVar4;
   uint uVar5;
   ulong uVar6;
   uint *puVar7;
   long in_FS_OFFSET;
   undefined1 auVar8[16];
   float fVar9;
   float fVar13;
   undefined1 auVar10[12];
   float fVar12;
   undefined1 auVar11[16];
   undefined1 auVar14[12];
   undefined1 auVar15[16];
   float local_38[6];
   long local_20;
   uVar5 = *(uint*)param_2;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (uVar5 < *(uint*)( param_2 + 4 )) {
      puVar7 = (uint*)( *(long*)( param_1 + 0x40 ) + (ulong)uVar5 * 4 );
      auVar11._4_4_ = _LC2;
      auVar11._0_4_ = _LC2;
      auVar11._8_4_ = _LC2;
      auVar11._12_4_ = _LC2;
      auVar15._4_4_ = _LC4;
      auVar15._0_4_ = _LC4;
      auVar15._8_4_ = _LC4;
      auVar15._12_4_ = _LC4;
      lVar3 = *(long*)( *(long*)( param_1 + 8 ) + 0x10 );
      do {
         puVar4 = (uint*)( *(long*)( *(long*)( param_1 + 0x10 ) + 0x10 ) + ( ulong ) * puVar7 * 0x14 );
         puVar1 = puVar4 + 3;
         do {
            uVar6 = ( ulong ) * puVar4;
            puVar4 = puVar4 + 1;
            uVar2 = *(undefined4*)( lVar3 + 8 + uVar6 * 0xc );
            auVar8._4_4_ = *(undefined4*)( lVar3 + 4 + uVar6 * 0xc );
            auVar8._0_4_ = *(undefined4*)( lVar3 + uVar6 * 0xc );
            auVar8._8_4_ = uVar2;
            auVar8._12_4_ = uVar2;
            auVar15 = minps(auVar15, auVar8);
            auVar14 = auVar15._0_12_;
            auVar11 = maxps(auVar11, auVar8);
            auVar10 = auVar11._0_12_;
         }
 while ( puVar1 != puVar4 );
         puVar7 = puVar7 + 1;
      }
 while ( (uint*)( *(long*)( param_1 + 0x40 ) + 4 + ( ( ulong )(( *(uint*)( param_2 + 4 ) - 1 ) - uVar5) + (ulong)uVar5 ) * 4 ) != puVar7 );
      local_38[0] = ( auVar15._0_4_ + auVar11._0_4_ ) * _LC6;
      local_38[1] = ( auVar15._4_4_ + auVar11._4_4_ ) * _LC6;
      local_38[2] = ( auVar15._8_4_ + auVar11._8_4_ ) * _LC6;
      local_38[3] = ( auVar15._12_4_ + auVar11._12_4_ ) * _LC6;
   }
 else {
      for (int i = 0; i < 4; i++) {
         local_38[i] = 0;
      }

      auVar10._4_4_ = _LC2;
      auVar10._0_4_ = _LC2;
      auVar10._8_4_ = _LC2;
      auVar14._4_4_ = _LC4;
      auVar14._0_4_ = _LC4;
      auVar14._8_4_ = _LC4;
   }

   fVar9 = ( auVar10._0_4_ - auVar14._0_4_ ) * _LC6;
   fVar12 = ( auVar10._4_4_ - auVar14._4_4_ ) * _LC6;
   fVar13 = ( auVar10._8_4_ - auVar14._8_4_ ) * _LC6;
   if (fVar9 <= fVar12) {
      uVar5 = ( fVar12 < fVar13 ) + 1;
   }
 else {
      uVar5 = ( uint )(fVar9 < fVar13) * 2;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      JPH::TriangleSplitter::SplitInternal(param_1, (uint)param_2, local_38[(long)(ulong)uVar5], (Range*)(ulong)uVar5, param_3);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::TriangleSplitterLongestAxis::TriangleSplitterLongestAxis(JPH::Array<JPH::Float3,
   JPH::STLAllocator<JPH::Float3> > const&, JPH::Array<JPH::IndexedTriangle,
   JPH::STLAllocator<JPH::IndexedTriangle> > const&) */void JPH::TriangleSplitterLongestAxis::TriangleSplitterLongestAxis(TriangleSplitterLongestAxis *this, Array *param_1, Array *param_2) {
   JPH::TriangleSplitter::TriangleSplitter((TriangleSplitter*)this, param_1, param_2);
   *(undefined***)this = &PTR__TriangleSplitterLongestAxis_00100380;
   return;
}
/* JPH::TriangleSplitterLongestAxis::GetStats(JPH::TriangleSplitter::Stats&) const */void JPH::TriangleSplitterLongestAxis::GetStats(TriangleSplitterLongestAxis *this, Stats *param_1) {
   *(char**)param_1 = "TriangleSplitterLongestAxis";
   return;
}
/* JPH::TriangleSplitterLongestAxis::~TriangleSplitterLongestAxis() */void JPH::TriangleSplitterLongestAxis::~TriangleSplitterLongestAxis(TriangleSplitterLongestAxis *this) {
   *(undefined**)this = &DAT_00100350;
   if (*(long*)( this + 0x40 ) != 0) {
      *(undefined8*)( this + 0x30 ) = 0;
      ( *Free )();
   }

   if (*(long*)( this + 0x28 ) != 0) {
      *(undefined8*)( this + 0x18 ) = 0;
      /* WARNING: Could not recover jumptable at 0x001001fb. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *Free )();
      return;
   }

   return;
}
/* JPH::TriangleSplitterLongestAxis::~TriangleSplitterLongestAxis() */void JPH::TriangleSplitterLongestAxis::~TriangleSplitterLongestAxis(TriangleSplitterLongestAxis *this) {
   *(undefined**)this = &DAT_00100350;
   if (*(long*)( this + 0x40 ) != 0) {
      *(undefined8*)( this + 0x30 ) = 0;
      ( *Free )();
   }

   if (*(long*)( this + 0x28 ) != 0) {
      *(undefined8*)( this + 0x18 ) = 0;
      ( *Free )();
   }

   operator_delete(this, 0x48);
   return;
}
/* JPH::TriangleSplitterLongestAxis::TriangleSplitterLongestAxis(JPH::Array<JPH::Float3,
   JPH::STLAllocator<JPH::Float3> > const&, JPH::Array<JPH::IndexedTriangle,
   JPH::STLAllocator<JPH::IndexedTriangle> > const&) */void JPH::TriangleSplitterLongestAxis::_GLOBAL__sub_I_TriangleSplitterLongestAxis(void) {
   if (DVec3::cTrue == '\0') {
      DVec3::cTrue = '\x01';
      DVec3::cTrue = _LC7;
   }

   return;
}
/* WARNING: Control flow encountered bad instruction data *//* JPH::TriangleSplitterLongestAxis::~TriangleSplitterLongestAxis() */void JPH::TriangleSplitterLongestAxis::~TriangleSplitterLongestAxis(TriangleSplitterLongestAxis *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


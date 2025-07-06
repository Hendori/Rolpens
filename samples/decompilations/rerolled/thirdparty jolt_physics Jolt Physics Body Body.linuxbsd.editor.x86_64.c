/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::Body::Body(bool) */void JPH::Body::Body(Body *this, bool param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined4 uVar3;
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   uVar2 = _LC46;
   uVar1 = __LC6;
   *(undefined1**)( this + 0x40 ) = sFixedToWorldShape;
   *(undefined8*)( this + 0x10 ) = uVar1;
   *(undefined8*)( this + 0x18 ) = uVar2;
   uVar3 = _LC8;
   *(undefined4*)( this + 0x20 ) = _LC8;
   for (int i = 0; i < 3; i++) {
      *(undefined4*)( this + ( 4*i + 36 ) ) = uVar3;
   }
   uVar3 = _LC10;
   *(undefined4*)( this + 0x30 ) = _LC10;
   for (int i = 0; i < 3; i++) {
      *(undefined4*)( this + ( 4*i + 52 ) ) = uVar3;
   }
   LOCK();
   sFixedToWorldShape._8_4_ = sFixedToWorldShape._8_4_ + 1;
   UNLOCK();
   *(undefined8*)( this + 0x48 ) = 0;
   *(undefined8*)( this + 0x50 ) = 0;
   *(undefined8*)( this + 0x58 ) = 0;
   *(undefined8*)( this + 0x60 ) = 0xffffffffffffffff;
   *(undefined8*)( this + 0x68 ) = 0;
   *(undefined4*)( this + 0x70 ) = 0xffffffff;
   *(undefined2*)( this + 0x74 ) = 0xffff;
   *(undefined2*)( this + 0x78 ) = 0;
   LOCK();
   sFixedToWorldShape._8_4_ = sFixedToWorldShape._8_4_ + 0xebedded;
   UNLOCK();
   return;
}/* JPH::Body::SetMotionType(JPH::EMotionType) */void JPH::Body::SetMotionType(Body *this, Body param_2) {
   undefined1(*pauVar1)[16];
   if (this[0x78] != param_2) {
      pauVar1 = *(undefined1(**) [16])( this + 0x48 );
      this[0x78] = param_2;
      if (pauVar1 != (undefined1(*) [16])0x0) {
         if (param_2 == (Body)0x0) {
            *pauVar1 = (undefined1[16])0x0;
            pauVar1[1] = (undefined1[16])0x0;
         } else if (param_2 != (Body)0x1) {
            return;
         }
         *(undefined8*)pauVar1[5] = 0;
         pauVar1[4] = (undefined1[16])0x0;
      }
   }
   return;
}/* JPH::Body::SetAllowSleeping(bool) */void JPH::Body::SetAllowSleeping(Body *this, bool param_1) {
   long lVar1;
   long in_FS_OFFSET;
   undefined8 local_48;
   undefined4 local_40;
   undefined8 local_38;
   undefined4 local_30;
   undefined8 local_28;
   undefined4 local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *(bool*)( *(long*)( this + 0x48 ) + 0x79 ) = param_1;
   if (param_1) {
      GetSleepTestPoints(this, (Vec3*)&local_48);
      lVar1 = *(long*)( this + 0x48 );
      *(undefined8*)( lVar1 + 0x80 ) = local_48;
      *(undefined4*)( lVar1 + 0x88 ) = local_40;
      *(undefined8*)( lVar1 + 0x90 ) = local_38;
      *(undefined4*)( lVar1 + 0x98 ) = local_30;
      *(undefined4*)( lVar1 + 0x8c ) = 0;
      *(undefined4*)( lVar1 + 0x9c ) = 0;
      *(undefined8*)( lVar1 + 0xa0 ) = local_28;
      *(undefined8*)( lVar1 + 0xac ) = 0;
      *(undefined4*)( lVar1 + 0xa8 ) = local_20;
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::Body::MoveKinematic(JPH::Vec3, JPH::Quat, float) */void JPH::Body::MoveKinematic(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, float param_5, float *param_6) {
   byte bVar1;
   uint *puVar2;
   bool bVar3;
   bool bVar4;
   bool bVar5;
   undefined1 auVar6[16];
   uint uVar7;
   float fVar8;
   float fVar10;
   undefined1 auVar9[16];
   undefined1 auVar11[16];
   float fVar12;
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   float fVar16;
   float fVar18;
   float fVar19;
   float fVar20;
   undefined1 auVar17[16];
   float fVar21;
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   float fVar24;
   uint uVar25;
   float fVar26;
   float fVar27;
   float fVar28;
   float fVar29;
   float fVar30;
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   undefined1 auVar33[12];
   float local_48;
   float fStack_44;
   float fStack_3c;
   float local_38;
   float fStack_34;
   float fStack_30;
   float fStack_2c;
   float local_20;
   float fStack_1c;
   auVar33 = ( **(code**)( **(long**)( param_6 + 0x10 ) + 0x18 ) )();
   uVar7 = _LC15;
   fVar8 = auVar33._8_4_;
   fVar10 = (float)param_4;
   local_48 = (float)param_3;
   fStack_44 = (float)( (ulong)param_3 >> 0x20 );
   fStack_3c = (float)( (ulong)param_4 >> 0x20 );
   local_20 = auVar33._0_4_;
   fStack_1c = auVar33._4_4_;
   puVar2 = *(uint**)( param_6 + 0x12 );
   bVar1 = *(byte*)( (long)puVar2 + 0x7a );
   fVar16 = (float)( (uint)local_48 ^ _LC15 );
   fVar18 = (float)( (uint)fStack_44 ^ _UNK_00102f14 );
   fVar19 = (float)( (uint)fVar10 ^ _UNK_00102f18 );
   fVar20 = (float)( (uint)fStack_3c ^ _UNK_00102f1c );
   fVar24 = (float)( _LC15 ^ (uint)param_6[4] );
   fVar26 = (float)( _UNK_00102f14 ^ (uint)param_6[5] );
   fVar27 = (float)( _UNK_00102f18 ^ (uint)param_6[6] );
   fVar28 = (float)( _UNK_00102f1c ^ (uint)param_6[7] );
   fVar21 = ( fStack_3c * local_20 + local_48 * 0.0 + fStack_44 * fVar8 ) - fVar10 * fStack_1c;
   fVar30 = fStack_44 * 0.0 + ( fStack_3c * fStack_1c - local_48 * fVar8 ) + fVar10 * local_20;
   fVar12 = ( ( fStack_3c * fVar8 + fStack_1c * local_48 ) - fStack_44 * local_20 ) + fVar10 * 0.0;
   fVar8 = ( ( fStack_3c * 0.0 - local_20 * local_48 ) - fStack_44 * fStack_1c ) - fVar10 * fVar8;
   auVar17._1_3_ = 0;
   auVar17[0] = bVar1;
   auVar17[4] = bVar1;
   auVar17._5_3_ = 0;
   auVar17[8] = bVar1;
   auVar17._9_3_ = 0;
   auVar17[0xc] = bVar1;
   auVar17._13_3_ = 0;
   auVar22 = (undefined1[16])0x0;
   fVar29 = ( ( fStack_3c * fVar28 - fVar24 * local_48 ) - fVar26 * fStack_44 ) - fVar27 * fVar10;
   local_38 = (float)param_1;
   fStack_34 = (float)( (ulong)param_1 >> 0x20 );
   fStack_30 = (float)param_2;
   fStack_2c = (float)( (ulong)param_2 >> 0x20 );
   auVar9._0_4_ = ( ( ( fVar21 * fVar20 + fVar16 * fVar8 + fVar30 * fVar19 ) - fVar12 * fVar18 ) + local_38 ) - *param_6;
   auVar9._4_4_ = ( fVar12 * fVar16 + ( fVar18 * fVar8 - fVar21 * fVar19 ) + fVar30 * fVar20 + fStack_34 ) - param_6[1];
   auVar9._8_4_ = ( fVar12 * fVar20 + ( ( fVar21 * fVar18 + fVar19 * fVar8 ) - fVar30 * fVar16 ) + fStack_30 ) - param_6[2];
   auVar9._12_4_ = ( ( ( ( fVar20 * fVar8 - fVar21 * fVar16 ) - fVar30 * fVar18 ) - fVar12 * fVar19 ) + fStack_2c ) - param_6[3];
   auVar13._4_4_ = param_5;
   auVar13._0_4_ = param_5;
   auVar13._8_4_ = param_5;
   auVar13._12_4_ = param_5;
   auVar9 = divps(auVar9, auVar13);
   auVar14._4_4_ = _UNK_00102f34;
   auVar14._0_4_ = __LC13;
   auVar14._8_4_ = _UNK_00102f38;
   auVar14._12_4_ = _UNK_00102f3c;
   auVar14 = auVar14 & auVar17;
   bVar3 = auVar14._4_4_ == _UNK_00102f34;
   bVar4 = auVar14._8_4_ == _UNK_00102f38;
   bVar5 = auVar14._12_4_ == _UNK_00102f3c;
   *puVar2 = auVar9._0_4_ & -(uint)(auVar14._0_4_ == __LC13);
   puVar2[1] = auVar9._4_4_ & -(uint)bVar3;
   puVar2[2] = auVar9._8_4_ & -(uint)bVar4;
   puVar2[3] = auVar9._12_4_ & -(uint)bVar5;
   fVar8 = (float)( (uint)fVar29 & uVar7 ^ ( uint )(( fVar27 * fStack_44 + fStack_3c * fVar24 + fVar28 * local_48 ) - fVar26 * fVar10) );
   fVar12 = (float)( (uint)fVar29 & uVar7 ^ ( uint )(fVar24 * fVar10 + fVar28 * fStack_44 + ( fStack_3c * fVar26 - fVar27 * local_48 )) );
   auVar23._4_4_ = fVar12;
   auVar23._0_4_ = fVar8;
   fVar10 = (float)( (uint)fVar29 & uVar7 ^ ( uint )(fVar28 * fVar10 + ( ( fStack_3c * fVar27 + fVar26 * local_48 ) - fVar24 * fStack_44 )) );
   fVar29 = (float)( (uint)fVar29 & uVar7 ^ (uint)fVar29 );
   fVar16 = 0.0;
   if (fVar29 < _LC46._4_4_) {
      auVar15._0_8_ = CONCAT44((uint)fVar29 ^ uVar7 & (uint)fVar29, (uint)fVar29 ^ uVar7 & (uint)fVar29);
      auVar15._8_4_ = (uint)fVar29 ^ uVar7 & (uint)fVar29;
      auVar15._12_4_ = (uint)fVar29 ^ uVar7 & (uint)fVar29;
      auVar11._8_4_ = auVar15._8_4_;
      auVar11._0_8_ = auVar15._0_8_;
      auVar11._12_4_ = auVar15._12_4_;
      auVar31._4_4_ = _LC46._4_4_;
      auVar31._0_4_ = _LC46._4_4_;
      auVar31._8_4_ = _LC46._4_4_;
      auVar31._12_4_ = _LC46._4_4_;
      auVar14 = minps(auVar11, auVar31);
      fVar16 = auVar14._0_4_;
      auVar32._0_4_ = ( _LC46._4_4_ - fVar16 ) * _LC4;
      auVar32._4_4_ = ( _LC46._4_4_ - auVar14._4_4_ ) * _LC4;
      auVar32._8_4_ = ( _LC46._4_4_ - auVar14._8_4_ ) * _LC4;
      auVar32._12_4_ = ( _LC46._4_4_ - auVar14._12_4_ ) * _LC4;
      uVar25 = (int)-(uint)(_LC4 < fVar16) >> 0x1f;
      auVar14 = sqrtps(auVar15, auVar32);
      fVar18 = (float)( (uint)auVar32._0_4_ & uVar25 | ~uVar25 & ( uint )(fVar16 * fVar16) );
      fVar16 = (float)( auVar14._0_4_ & uVar25 | ~uVar25 & (uint)fVar16 );
      fVar16 = ( ( ( ( _LC18 * fVar18 + _LC20 ) * fVar18 + _LC22 ) * fVar18 + _LC24 ) * fVar18 + _LC26 ) * fVar18 * fVar16 + fVar16;
      fVar16 = _LC28 - (float)( ( ( uint )(_LC28 - ( fVar16 + fVar16 )) & uVar25 | ~uVar25 & (uint)fVar16 ) ^ uVar7 & (uint)fVar29 );
      fVar16 = fVar16 + fVar16;
      fVar8 = fVar10 * fVar10 + fVar8 * fVar8 + 0.0 + fVar12 * fVar12;
      if (_LC29 < fVar8) {
         auVar22._0_4_ = SQRT(fVar8);
         auVar23._8_4_ = fVar10;
         auVar23._12_4_ = fVar29;
         auVar22._4_4_ = auVar22._0_4_;
         auVar22._8_4_ = auVar22._0_4_;
         auVar22._12_4_ = auVar22._0_4_;
         auVar22 = divps(auVar23, auVar22);
      }
   }
   auVar6._4_4_ = _UNK_00102f44;
   auVar6._0_4_ = __LC31;
   auVar6._8_4_ = _UNK_00102f48;
   auVar6._12_4_ = _UNK_00102f4c;
   auVar17 = auVar17 & auVar6;
   fVar16 = fVar16 / param_5;
   bVar3 = auVar17._4_4_ == _UNK_00102f44;
   bVar4 = auVar17._8_4_ == _UNK_00102f48;
   bVar5 = auVar17._12_4_ == _UNK_00102f4c;
   puVar2[4] = ( uint )(fVar16 * auVar22._0_4_) & -(uint)(auVar17._0_4_ == __LC31);
   puVar2[5] = ( uint )(fVar16 * auVar22._4_4_) & -(uint)bVar3;
   puVar2[6] = ( uint )(fVar16 * auVar22._8_4_) & -(uint)bVar4;
   puVar2[7] = ( uint )(fVar16 * auVar22._12_4_) & -(uint)bVar5;
   return;
}/* JPH::Body::CalculateWorldSpaceBoundsInternal() */void JPH::Body::CalculateWorldSpaceBoundsInternal(Body *this) {
   float fVar1;
   float fVar2;
   long lVar3;
   code *pcVar4;
   float *pfVar5;
   float *pfVar6;
   float *pfVar7;
   long in_FS_OFFSET;
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   undefined1 auVar15[16];
   float fVar16;
   float fVar17;
   float fVar18;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[8];
   float afStack_50[2];
   undefined8 local_48;
   ulong uStack_40;
   undefined1 local_38[16];
   undefined8 local_28;
   float fStack_20;
   float fStack_1c;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar13 = (float)*(undefined8*)( this + 0x18 );
   lVar3 = **(long**)( this + 0x40 );
   fVar11 = (float)*(undefined8*)( this + 0x10 );
   fVar12 = (float)( ( ulong ) * (undefined8*)( this + 0x10 ) >> 0x20 );
   pcVar4 = *(code**)( lVar3 + 0x30 );
   fVar16 = fVar11 + fVar11;
   fVar17 = fVar12 + fVar12;
   fVar14 = (float)( ( ulong ) * (undefined8*)( this + 0x18 ) >> 0x20 );
   local_28 = *(undefined8*)this;
   fVar18 = fVar13 * ( fVar13 + fVar13 );
   fStack_20 = *(float*)( this + 8 );
   fStack_1c = _LC46._4_4_;
   fVar10 = ( fVar13 + fVar13 ) * fVar14;
   local_58._0_4_ = ( _LC46._4_4_ - fVar12 * fVar17 ) - fVar18;
   local_58._4_4_ = fVar12 * fVar16 + fVar10;
   register0x00001248 = fVar13 * fVar16 - fVar17 * fVar14;
   register0x0000124c = 0;
   local_48 = CONCAT44(( _LC46._4_4_ - fVar18 ) - fVar11 * fVar16, fVar12 * fVar16 - fVar10);
   uStack_40 = ( ulong )(uint)(fVar16 * fVar14 + fVar13 * fVar17);
   local_38._4_4_ = fVar13 * fVar17 - fVar16 * fVar14;
   local_38._0_4_ = fVar13 * fVar16 + fVar17 * fVar14;
   local_38._8_4_ = ( _LC46._4_4_ - fVar11 * fVar16 ) - fVar12 * fVar17;
   local_38._12_4_ = 0;
   if (pcVar4 == Shape::GetWorldSpaceBounds) {
      pcVar4 = *(code**)( lVar3 + 0x20 );
      auVar8 = ZEXT816(0);
      auVar9 = (undefined1[16])0x0;
      if (pcVar4 != EmptyShape::GetLocalBounds) {
         ( *pcVar4 )(local_78);
         auVar8 = local_78;
         auVar9 = local_68;
      }
      local_98 = minps(auVar8, auVar9);
      local_88 = maxps(auVar8, auVar9);
      pfVar5 = (float*)local_98;
      pfVar6 = (float*)local_58;
      fVar11 = (float)local_28;
      fVar12 = local_28._4_4_;
      fVar13 = fStack_20;
      fVar14 = fStack_1c;
      fVar10 = (float)local_28;
      fVar16 = local_28._4_4_;
      fVar17 = fStack_20;
      fVar18 = fStack_1c;
      do {
         fVar1 = *pfVar5;
         fVar2 = pfVar5[4];
         pfVar7 = pfVar6 + 4;
         pfVar5 = pfVar5 + 1;
         auVar8._0_8_ = CONCAT44(fVar1 * pfVar6[1], fVar1 * *pfVar6);
         auVar8._8_4_ = fVar1 * pfVar6[2];
         auVar8._12_4_ = fVar1 * pfVar6[3];
         auVar9._0_4_ = fVar2 * *pfVar6;
         auVar9._4_4_ = fVar2 * pfVar6[1];
         auVar9._8_4_ = fVar2 * pfVar6[2];
         auVar9._12_4_ = fVar2 * pfVar6[3];
         auVar15._8_4_ = auVar8._8_4_;
         auVar15._0_8_ = auVar8._0_8_;
         auVar15._12_4_ = auVar8._12_4_;
         auVar15 = minps(auVar15, auVar9);
         auVar8 = maxps(auVar8, auVar9);
         fVar11 = fVar11 + auVar15._0_4_;
         fVar12 = fVar12 + auVar15._4_4_;
         fVar13 = fVar13 + auVar15._8_4_;
         fVar14 = fVar14 + auVar15._12_4_;
         fVar10 = fVar10 + auVar8._0_4_;
         fVar16 = fVar16 + auVar8._4_4_;
         fVar17 = fVar17 + auVar8._8_4_;
         fVar18 = fVar18 + auVar8._12_4_;
         pfVar6 = pfVar7;
      } while ( pfVar7 != (float*)&local_28 );
      *(float*)( this + 0x20 ) = fVar11;
      *(float*)( this + 0x24 ) = fVar12;
      *(float*)( this + 0x28 ) = fVar13;
      *(float*)( this + 0x2c ) = fVar14;
      *(float*)( this + 0x30 ) = fVar10;
      *(float*)( this + 0x34 ) = fVar16;
      *(float*)( this + 0x38 ) = fVar17;
      *(float*)( this + 0x3c ) = fVar18;
   } else {
      ( *pcVar4 )(0x3f8000003f800000, &local_b8, *(long**)( this + 0x40 ), local_58);
      *(undefined8*)( this + 0x20 ) = local_b8;
      *(undefined8*)( this + 0x28 ) = uStack_b0;
      *(undefined8*)( this + 0x30 ) = local_a8;
      *(undefined8*)( this + 0x38 ) = uStack_a0;
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::Body::SetPositionAndRotationInternal(JPH::Vec3, JPH::Quat, bool) */void JPH::Body::SetPositionAndRotationInternal(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, Body *param_5, char param_6) {
   long lVar1;
   long in_FS_OFFSET;
   float fVar2;
   undefined8 uVar3;
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
   float local_78;
   float fStack_74;
   float local_60;
   float fStack_5c;
   undefined8 local_58;
   undefined4 local_50;
   undefined8 local_48;
   undefined4 local_40;
   undefined8 local_38;
   undefined4 local_30;
   long local_20;
   fVar9 = (float)( (ulong)param_4 >> 0x20 );
   fVar7 = (float)param_4;
   fVar6 = (float)( (ulong)param_3 >> 0x20 );
   fVar4 = (float)param_3;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar2 = (float)param_2;
   uVar3 = ( **(code**)( **(long**)( param_5 + 0x40 ) + 0x18 ) )();
   local_60 = (float)uVar3;
   fStack_5c = (float)( (ulong)uVar3 >> 0x20 );
   fVar10 = (float)( (uint)fVar4 ^ _LC15 );
   fVar11 = (float)( (uint)fVar6 ^ _UNK_00102f14 );
   fVar12 = (float)( (uint)fVar7 ^ _UNK_00102f18 );
   fVar13 = (float)( (uint)fVar9 ^ _UNK_00102f1c );
   fVar14 = ( fVar9 * local_60 + fVar4 * 0.0 + fVar6 * fVar2 ) - fVar7 * fStack_5c;
   fVar8 = ( fVar9 * fStack_5c - fVar4 * fVar2 ) + fVar6 * 0.0 + fVar7 * local_60;
   *(undefined8*)( param_5 + 0x10 ) = param_3;
   *(undefined8*)( param_5 + 0x18 ) = param_4;
   fVar5 = ( ( fVar9 * fVar2 + fVar4 * fStack_5c ) - fVar6 * local_60 ) + fVar7 * 0.0;
   fVar2 = ( ( fVar9 * 0.0 - fVar4 * local_60 ) - fVar6 * fStack_5c ) - fVar7 * fVar2;
   local_78 = (float)param_1;
   fStack_74 = (float)( (ulong)param_1 >> 0x20 );
   *(float*)param_5 = ( ( fVar10 * fVar2 + fVar14 * fVar13 + fVar8 * fVar12 ) - fVar5 * fVar11 ) + local_78;
   *(float*)( param_5 + 4 ) = fVar5 * fVar10 + ( fVar11 * fVar2 - fVar14 * fVar12 ) + fVar8 * fVar13 + fStack_74;
   *(float*)( param_5 + 8 ) = fVar5 * fVar13 + ( ( fVar12 * fVar2 + fVar14 * fVar11 ) - fVar8 * fVar10 ) + (float)param_2;
   *(float*)( param_5 + 0xc ) = ( ( ( fVar13 * fVar2 - fVar14 * fVar10 ) - fVar8 * fVar11 ) - fVar5 * fVar12 ) + (float)( (ulong)param_2 >> 0x20 );
   CalculateWorldSpaceBoundsInternal(param_5);
   if (( param_6 != '\0' ) && ( *(long*)( param_5 + 0x48 ) != 0 )) {
      GetSleepTestPoints(param_5, (Vec3*)&local_58);
      lVar1 = *(long*)( param_5 + 0x48 );
      *(undefined8*)( lVar1 + 0x80 ) = local_58;
      *(undefined4*)( lVar1 + 0x88 ) = local_50;
      *(undefined8*)( lVar1 + 0x90 ) = local_48;
      *(undefined4*)( lVar1 + 0x98 ) = local_40;
      *(undefined4*)( lVar1 + 0x8c ) = 0;
      *(undefined4*)( lVar1 + 0x9c ) = 0;
      *(undefined8*)( lVar1 + 0xa0 ) = local_38;
      *(undefined8*)( lVar1 + 0xac ) = 0;
      *(undefined4*)( lVar1 + 0xa8 ) = local_30;
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::Body::UpdateCenterOfMassInternal(JPH::Vec3, bool) */void JPH::Body::UpdateCenterOfMassInternal(undefined8 param_1, float param_2, float *param_3, char param_4) {
   float fVar1;
   float fVar2;
   float fVar3;
   long lVar4;
   long in_FS_OFFSET;
   float fVar5;
   undefined8 uVar6;
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
   undefined1 local_78[88];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar13 = param_2;
   uVar6 = ( **(code**)( **(long**)( param_3 + 0x10 ) + 0x18 ) )();
   fVar5 = param_3[4];
   fVar1 = param_3[5];
   fVar2 = param_3[7];
   fVar3 = param_3[6];
   fVar11 = (float)uVar6 - (float)param_1;
   fVar12 = (float)( (ulong)uVar6 >> 0x20 ) - (float)( (ulong)param_1 >> 0x20 );
   fVar13 = fVar13 - param_2;
   fVar7 = (float)( (uint)param_3[4] ^ _LC15 );
   fVar8 = (float)( (uint)param_3[5] ^ _UNK_00102f14 );
   fVar9 = (float)( (uint)param_3[6] ^ _UNK_00102f18 );
   fVar10 = (float)( (uint)param_3[7] ^ _UNK_00102f1c );
   fVar16 = ( fVar2 * fVar11 + fVar5 * 0.0 + fVar1 * fVar13 ) - fVar3 * fVar12;
   fVar15 = ( fVar2 * fVar12 - fVar5 * fVar13 ) + fVar1 * 0.0 + fVar3 * fVar11;
   fVar14 = ( ( fVar2 * fVar13 + fVar5 * fVar12 ) - fVar1 * fVar11 ) + fVar3 * 0.0;
   fVar5 = ( ( fVar2 * 0.0 - fVar5 * fVar11 ) - fVar1 * fVar12 ) - fVar3 * fVar13;
   *param_3 = ( ( fVar15 * fVar9 + fVar16 * fVar10 + fVar5 * fVar7 ) - fVar14 * fVar8 ) + *param_3;
   param_3[1] = fVar14 * fVar7 + fVar15 * fVar10 + ( fVar5 * fVar8 - fVar16 * fVar9 ) + param_3[1];
   param_3[2] = fVar14 * fVar10 + ( ( fVar16 * fVar8 + fVar5 * fVar9 ) - fVar15 * fVar7 ) + param_3[2];
   param_3[3] = ( ( ( fVar5 * fVar10 - fVar16 * fVar7 ) - fVar15 * fVar8 ) - fVar14 * fVar9 ) + param_3[3];
   if (( param_4 != '\0' ) && ( lVar4 = lVar4 != 0 )) {
      ( **(code**)( **(long**)( param_3 + 0x10 ) + 0x40 ) )(local_78);
      JPH::MotionProperties::SetMassProperties(lVar4, *(undefined1*)( *(long*)( param_3 + 0x12 ) + 0x7a ), local_78);
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* JPH::Body::SetShapeInternal(JPH::Shape const*, bool) */void JPH::Body::SetShapeInternal(Body *this, Shape *param_1, bool param_2) {
   Shape *pSVar1;
   Shape *pSVar2;
   undefined1 auVar3[16];
   auVar3 = ( **(code**)( **(long**)( this + 0x40 ) + 0x18 ) )();
   pSVar2 = *(Shape**)( this + 0x40 );
   if (param_1 == pSVar2) goto LAB_00100ca2;
   if (pSVar2 == (Shape*)0x0) {
      LAB_00100c94:*(Shape**)( this + 0x40 ) = param_1;
   } else {
      LOCK();
      pSVar1 = pSVar2 + 8;
      *(int*)pSVar1 = *(int*)pSVar1 + -1;
      UNLOCK();
      if (*(int*)pSVar1 != 0) goto LAB_00100c94;
      ( **(code**)( *(long*)pSVar2 + 8 ) )();
      *(Shape**)( this + 0x40 ) = param_1;
   }
   if (param_1 != (Shape*)0x0) {
      LOCK();
      *(int*)( param_1 + 8 ) = *(int*)( param_1 + 8 ) + 1;
      UNLOCK();
   }
   LAB_00100ca2:UpdateCenterOfMassInternal(auVar3._0_8_, auVar3._8_8_, this, param_2);
   CalculateWorldSpaceBoundsInternal(this);
   return;
}/* JPH::Body::UpdateSleepStateInternal(float, float, float) */bool JPH::Body::UpdateSleepStateInternal(Body *this, float param_1, float param_2, float param_3) {
   long lVar1;
   bool bVar2;
   float *pfVar3;
   float *pfVar4;
   long in_FS_OFFSET;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   undefined8 local_58;
   float afStack_50[2];
   undefined8 local_48;
   undefined4 local_40;
   undefined8 local_38;
   undefined4 local_30;
   float local_28[2];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(char*)( *(long*)( this + 0x48 ) + 0x79 ) == '\0' ) || ( ( (byte)this[0x79] & 1 ) != 0 )) {
      bVar2 = false;
   } else {
      pfVar3 = (float*)&local_58;
      GetSleepTestPoints(this, (Vec3*)pfVar3);
      lVar1 = *(long*)( this + 0x48 );
      pfVar4 = (float*)( lVar1 + 0x80 );
      do {
         fVar6 = *pfVar3 - *pfVar4;
         fVar7 = pfVar3[1] - pfVar4[1];
         fVar8 = pfVar3[2] - pfVar4[2];
         fVar5 = fVar8 * fVar8 + fVar6 * fVar6 + 0.0 + fVar7 * fVar7;
         fVar9 = pfVar4[3];
         fVar10 = fVar9;
         if (fVar9 * fVar9 < fVar5) {
            fVar5 = SQRT(fVar5);
            fVar10 = ( fVar9 + fVar5 ) * _LC4;
            pfVar4[3] = fVar10;
            fVar5 = ( fVar10 - fVar9 ) / fVar5;
            *(ulong*)pfVar4 = CONCAT44(fVar5 * fVar7 + pfVar4[1], fVar5 * fVar6 + *pfVar4);
            pfVar4[2] = fVar5 * fVar8 + pfVar4[2];
         }
         if (param_2 < fVar10) {
            *(undefined4*)( lVar1 + 0x8c ) = 0;
            *(undefined4*)( lVar1 + 0x9c ) = 0;
            *(undefined8*)( lVar1 + 0x80 ) = local_58;
            *(float*)( lVar1 + 0x88 ) = afStack_50[0];
            *(undefined8*)( lVar1 + 0x90 ) = local_48;
            *(undefined4*)( lVar1 + 0x98 ) = local_40;
            *(undefined8*)( lVar1 + 0xa0 ) = local_38;
            bVar2 = false;
            *(undefined8*)( lVar1 + 0xac ) = 0;
            *(undefined4*)( lVar1 + 0xa8 ) = local_30;
            goto LAB_00100de7;
         }
         pfVar3 = pfVar3 + 4;
         pfVar4 = pfVar4 + 4;
      } while ( local_28 != pfVar3 );
      fVar9 = param_1 + *(float*)( lVar1 + 0xb0 );
      bVar2 = param_3 <= fVar9;
      *(float*)( lVar1 + 0xb0 ) = fVar9;
   }
   LAB_00100de7:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::Body::GetSubmergedVolume(JPH::Vec3, JPH::Vec3, float&, float&, JPH::Vec3&) const */void JPH::Body::GetSubmergedVolume(undefined8 param_1, float param_2, undefined8 param_3, float param_4, float *param_5, undefined4 *param_6, undefined4 *param_7, undefined1 (*param_8)[16]) {
   code *pcVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   long in_FS_OFFSET;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined1 local_58[16];
   undefined8 local_48;
   ulong uStack_40;
   undefined1 local_38[16];
   undefined8 local_28;
   undefined8 uStack_20;
   long local_10;
   fVar4 = (float)*(undefined8*)( param_5 + 6 );
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar5 = (float)( ( ulong ) * (undefined8*)( param_5 + 6 ) >> 0x20 );
   fVar9 = fVar4 * ( fVar4 + fVar4 );
   fVar6 = ( fVar4 + fVar4 ) * fVar5;
   fVar2 = (float)*(undefined8*)( param_5 + 4 );
   fVar3 = (float)( ( ulong ) * (undefined8*)( param_5 + 4 ) >> 0x20 );
   fVar7 = fVar2 + fVar2;
   fVar8 = fVar3 + fVar3;
   local_58._0_4_ = ( _LC46._4_4_ - fVar3 * fVar8 ) - fVar9;
   local_58._4_4_ = fVar3 * fVar7 + fVar6;
   local_58._8_4_ = fVar4 * fVar7 - fVar8 * fVar5;
   local_58._12_4_ = 0;
   uStack_40 = ( ulong )(uint)(fVar7 * fVar5 + fVar4 * fVar8);
   local_48 = CONCAT44(( _LC46._4_4_ - fVar9 ) - fVar2 * fVar7, fVar3 * fVar7 - fVar6);
   local_38._4_4_ = fVar4 * fVar8 - fVar7 * fVar5;
   local_38._0_4_ = fVar4 * fVar7 + fVar8 * fVar5;
   local_38._8_4_ = ( _LC46._4_4_ - fVar2 * fVar7 ) - fVar3 * fVar8;
   local_38._12_4_ = 0;
   uStack_20 = CONCAT44(_LC46._4_4_, (undefined4)_LC46);
   local_28 = __LC6;
   pcVar1 = *(code**)( **(long**)( param_5 + 0x10 ) + 0x78 );
   uStack_60 = CONCAT44(( uint )(( param_2 - param_5[2] ) * param_4 + ( (float)( (ulong)param_1 >> 0x20 ) - param_5[1] ) * (float)( (ulong)param_3 >> 0x20 ) + ( (float)param_1 - *param_5 ) * (float)param_3 + 0.0) ^ __LC32, param_4);
   local_68 = param_3;
   if (pcVar1 == EmptyShape::GetSubmergedVolume) {
      *param_6 = 0;
      *param_7 = 0;
      *param_8 = (undefined1[16])0x0;
   } else {
      ( *pcVar1 )(0x3f8000003f800000, 0x3f8000003f800000, *(undefined8*)param_5, *(undefined8*)( param_5 + 2 ), *(long**)( param_5 + 0x10 ), local_58, &local_68, param_6, param_7, param_8, param_1);
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::Body::ApplyBuoyancyImpulse(float, float, JPH::Vec3, float, float, float, JPH::Vec3,
   JPH::Vec3, float) */undefined8 JPH::Body::ApplyBuoyancyImpulse(float param_1, float param_2, undefined8 param_3, undefined8 param_4, float param_5, float param_6, uint param_7, float param_8, float *param_9) {
   byte bVar1;
   undefined8 uVar2;
   code *pcVar3;
   bool bVar4;
   bool bVar5;
   bool bVar6;
   long *plVar7;
   long lVar8;
   undefined8 uVar9;
   float *pfVar10;
   long in_FS_OFFSET;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar18;
   float fVar19;
   float fVar20;
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   float fVar21;
   float fVar22;
   float fVar23;
   float fVar24;
   float fVar26;
   float fVar27;
   undefined1 auVar25[16];
   uint uVar28;
   uint uVar29;
   uint uVar30;
   uint uVar31;
   float fVar32;
   float fVar33;
   float fVar34;
   float fVar35;
   float fVar36;
   undefined1 auVar37[16];
   float fVar38;
   float fVar39;
   undefined1 auVar40[12];
   float fVar41;
   float fVar42;
   float fVar43;
   float fVar44;
   float fStack0000000000000008;
   float fStack000000000000000c;
   float fStack0000000000000010;
   float fStack0000000000000014;
   float fStack0000000000000018;
   float fStack000000000000001c;
   float fStack0000000000000020;
   float fStack0000000000000024;
   undefined8 local_1a8;
   undefined8 uStack_1a0;
   float local_188;
   float fStack_184;
   float fStack_180;
   float fStack_17c;
   uint uStack_174;
   uint uStack_170;
   uint uStack_16c;
   float local_104;
   undefined8 local_f8;
   undefined8 *local_f0;
   float local_e8;
   float fStack_e4;
   float fStack_e0;
   float local_d8;
   float fStack_d4;
   float fStack_d0;
   float local_c8[16];
   undefined1 local_88[4];
   float fStack_84;
   undefined8 uStack_80;
   undefined8 local_78;
   ulong uStack_70;
   undefined8 local_68;
   ulong uStack_60;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar9 = 0;
   if (0.0 < param_2) {
      local_1a8._0_4_ = (float)param_3;
      fVar22 = (float)local_1a8;
      local_1a8._4_4_ = (float)( (ulong)param_3 >> 0x20 );
      fVar21 = local_1a8._4_4_;
      uStack_1a0._0_4_ = (float)param_4;
      fVar23 = (float)uStack_1a0;
      uStack_1a0._4_4_ = (float)( (ulong)param_4 >> 0x20 );
      if ((char)Shape::sDrawSubmergedVolumes != '\0') {
         local_1a8 = CONCAT44(local_1a8._4_4_ + param_9[1], (float)local_1a8 + *param_9);
         uStack_1a0 = CONCAT44(uStack_1a0._4_4_ + param_9[3], (float)uStack_1a0 + param_9[2]);
         JPH::DebugRenderer::DrawMarker(local_1a8, uStack_1a0, DebugRenderer::sInstance, (undefined4)Color::sWhite);
         plVar7 = DebugRenderer::sInstance;
         pcVar3 = *(code**)( *DebugRenderer::sInstance + 0x38 );
         JPH::StringFormat_abi_cxx11_(local_88, (double)param_2, (double)param_1, "%.3f / %.3f");
         local_f8 = uStack_80;
         local_f0 = _local_88;
         ( *pcVar3 )(local_1a8, uStack_1a0, plVar7, &local_f8, (undefined4)Color::sWhite);
         if (_local_88 != &local_78) {
            ( *Free )();
         }
      }
      pfVar10 = *(float**)( param_9 + 0x12 );
      local_104 = 0.0;
      fVar15 = pfVar10[0x16];
      auVar40 = SUB1612((undefined1[16])0x0, 0);
      param_5 = param_5 / ( param_1 * fVar15 );
      fVar11 = (float)( (uint)param_5 ^ __LC32 ) * param_2 * pfVar10[0x1b];
      local_1a8._0_4_ = (float)*(undefined8*)( pfVar10 + 4 );
      local_1a8._4_4_ = (float)( ( ulong ) * (undefined8*)( pfVar10 + 4 ) >> 0x20 );
      uStack_1a0._0_4_ = (float)*(undefined8*)( pfVar10 + 6 );
      fVar12 = (float)local_1a8 * fVar21 - local_1a8._4_4_ * fVar22;
      local_188 = (float)*(undefined8*)pfVar10;
      fStack_184 = (float)( ( ulong ) * (undefined8*)pfVar10 >> 0x20 );
      fStack_180 = (float)*(undefined8*)( pfVar10 + 2 );
      fStack_17c = (float)( ( ulong ) * (undefined8*)( pfVar10 + 2 ) >> 0x20 );
      fStack0000000000000008 = fStack0000000000000008 - ( ( local_1a8._4_4_ * fVar23 - (float)uStack_1a0 * fVar21 ) + local_188 );
      fStack000000000000000c = fStack000000000000000c - ( ( (float)uStack_1a0 * fVar22 - (float)local_1a8 * fVar23 ) + fStack_184 );
      fStack0000000000000010 = fStack0000000000000010 - ( fVar12 + fStack_180 );
      if (*(code**)( **(long**)( param_9 + 0x10 ) + 0x20 ) != EmptyShape::GetLocalBounds) {
         ( **(code**)( **(long**)( param_9 + 0x10 ) + 0x20 ) )(&local_e8);
         pfVar10 = *(float**)( param_9 + 0x12 );
         auVar40._0_4_ = local_d8 - local_e8;
         auVar40._4_4_ = fStack_d4 - fStack_e4;
         auVar40._8_4_ = fStack_d0 - fStack_e0;
         local_104 = ( auVar40._0_4_ + auVar40._4_4_ + auVar40._8_4_ ) / __LC35;
         local_104 = local_104 * local_104;
      }
      fVar13 = fStack0000000000000010 * fStack0000000000000010 + fStack000000000000000c * fStack000000000000000c + fStack0000000000000008 * fStack0000000000000008 + 0.0;
      fVar32 = SQRT(fVar13);
      if (fVar13 <= __LC36) {
         fVar13 = 0.0;
      } else {
         fVar13 = param_9[4];
         fVar24 = param_9[5];
         fVar26 = param_9[6];
         fVar27 = param_9[7];
         fVar14 = (float)( (uint)fVar13 ^ _LC15 );
         fVar18 = (float)( (uint)fVar24 ^ _UNK_00102f14 );
         fVar19 = (float)( (uint)fVar26 ^ _UNK_00102f18 );
         fVar20 = (float)( (uint)fVar27 ^ _UNK_00102f1c );
         fVar33 = ( fVar14 * 0.0 + fStack0000000000000008 * fVar20 + fVar18 * fStack0000000000000010 ) - fStack000000000000000c * fVar19;
         fVar34 = fVar18 * 0.0 + ( fStack000000000000000c * fVar20 - fVar14 * fStack0000000000000010 ) + fStack0000000000000008 * fVar19;
         fVar35 = ( ( fVar20 * fStack0000000000000010 + fVar14 * fStack000000000000000c ) - fStack0000000000000008 * fVar18 ) + fVar19 * 0.0;
         fVar14 = ( ( fVar20 * 0.0 - fVar14 * fStack0000000000000008 ) - fStack000000000000000c * fVar18 ) - fVar19 * fStack0000000000000010;
         fVar19 = fVar34 * fVar27 + ( fVar14 * fVar24 - fVar33 * fVar26 ) + fVar35 * fVar13;
         fVar20 = ( ( fVar33 * fVar24 + fVar14 * fVar26 ) - fVar34 * fVar13 ) + fVar35 * fVar27;
         fVar18 = ( fVar34 * fVar26 + fVar33 * fVar27 + fVar14 * fVar13 ) - fVar35 * fVar24;
         fVar13 = ( ( fVar14 * fVar27 - fVar33 * fVar13 ) - fVar34 * fVar24 ) - fVar35 * fVar26;
         auVar25._4_4_ = fVar19;
         auVar25._0_4_ = fVar18;
         auVar25._8_4_ = fVar20;
         auVar25._12_4_ = fVar13;
         auVar16._0_4_ = 0.0 - fVar18;
         auVar16._4_4_ = 0.0 - fVar19;
         auVar16._8_4_ = 0.0 - fVar20;
         auVar16._12_4_ = 0.0 - fVar13;
         auVar16 = maxps(auVar16, auVar25);
         fVar13 = ( auVar40._4_4_ * auVar40._0_4_ * auVar16._8_4_ + auVar40._0_4_ * auVar40._8_4_ * auVar16._4_4_ + auVar16._0_4_ * auVar40._8_4_ * auVar40._4_4_ + 0.0 ) / fVar32;
      }
      fVar13 = param_6 * param_5 * _LC4 * fVar13 * param_8;
      fVar24 = fVar13 * fStack0000000000000008 * fVar32;
      fVar26 = fVar13 * fStack000000000000000c * fVar32;
      fVar27 = fVar13 * fStack0000000000000010 * fVar32;
      fVar32 = fVar13 * ( fStack0000000000000014 - ( fVar12 + fStack_17c ) ) * fVar32;
      fVar13 = fStack_180 * fStack_180 + fStack_184 * fStack_184 + local_188 * local_188 + 0.0;
      fVar12 = fVar15 * fVar27 * fVar15 * fVar27 + fVar15 * fVar26 * fVar15 * fVar26 + fVar15 * fVar24 * fVar15 * fVar24 + 0.0;
      if (fVar13 < fVar12) {
         fVar12 = SQRT(fVar13 / fVar12);
         fVar24 = fVar24 * fVar12;
         fVar26 = fVar26 * fVar12;
         fVar27 = fVar27 * fVar12;
         fVar32 = fVar32 * fVar12;
      }
      bVar1 = *(byte*)( (long)pfVar10 + 0x7a );
      fVar24 = fVar24 + fVar11 * fStack0000000000000018 * param_8;
      fVar26 = fVar26 + fVar11 * fStack000000000000001c * param_8;
      fVar27 = fVar27 + fVar11 * fStack0000000000000020 * param_8;
      auVar17._4_4_ = _UNK_00102f34;
      auVar17._0_4_ = __LC13;
      auVar17._8_4_ = _UNK_00102f38;
      auVar17._12_4_ = _UNK_00102f3c;
      uVar9 = *(undefined8*)( param_9 + 6 );
      uVar2 = *(undefined8*)( param_9 + 4 );
      auVar37[4] = bVar1;
      auVar37._0_4_ = CONCAT31(0, bVar1);
      auVar37._5_3_ = 0;
      auVar37[8] = bVar1;
      auVar37._9_3_ = 0;
      auVar37[0xc] = bVar1;
      auVar37._13_3_ = 0;
      fVar14 = (float)uVar9;
      auVar17 = auVar17 & auVar37;
      fVar12 = (float)uVar2;
      bVar4 = auVar17._4_4_ == _UNK_00102f34;
      bVar5 = auVar17._8_4_ == _UNK_00102f38;
      bVar6 = auVar17._12_4_ == _UNK_00102f3c;
      fVar34 = fVar12 + fVar12;
      *pfVar10 = (float)( ( uint )(fVar15 * fVar24 + *pfVar10) & -(uint)(auVar17._0_4_ == __LC13) );
      pfVar10[1] = (float)( ( uint )(fVar15 * fVar26 + pfVar10[1]) & -(uint)bVar4 );
      pfVar10[2] = (float)( ( uint )(fVar15 * fVar27 + pfVar10[2]) & -(uint)bVar5 );
      pfVar10[3] = (float)( ( uint )(fVar15 * ( fVar32 + fVar11 * fStack0000000000000024 * param_8 ) + pfVar10[3]) & -(uint)bVar6 );
      fVar11 = (float)( (ulong)uVar2 >> 0x20 );
      fVar41 = fVar14 * ( fVar14 + fVar14 );
      fVar38 = fVar11 + fVar11;
      fVar35 = (float)( (ulong)uVar9 >> 0x20 );
      fVar15 = ( ( ( (float)( param_7 ^ __LC32 ) * param_2 ) / param_1 ) * param_8 * local_104 ) / fVar15;
      fVar33 = fVar35 * ( fVar14 + fVar14 );
      fVar18 = (float)*(undefined8*)( pfVar10 + 0xc );
      fVar19 = fVar15 * (float)local_1a8;
      fVar20 = fVar15 * local_1a8._4_4_;
      fVar15 = fVar15 * (float)uStack_1a0;
      fVar13 = (float)*(undefined8*)( pfVar10 + 0xe );
      fVar39 = fVar18 + fVar18;
      fVar36 = (float)( ( ulong ) * (undefined8*)( pfVar10 + 0xc ) >> 0x20 );
      fVar42 = fVar36 + fVar36;
      fVar32 = (float)( ( ulong ) * (undefined8*)( pfVar10 + 0xe ) >> 0x20 );
      lVar8 = 0;
      fVar43 = fVar13 * ( fVar13 + fVar13 );
      fVar44 = ( fVar13 + fVar13 ) * fVar32;
      local_88 = ( _LC46._4_4_ - fVar36 * fVar42 ) - fVar43;
      register0x00001404 = fVar36 * fVar39 + fVar44;
      register0x00001408 = fVar13 * fVar39 - fVar42 * fVar32;
      register0x0000140c = 0;
      uStack_174 = (uint)bVar1;
      uStack_170 = (uint)bVar1;
      uStack_16c = (uint)bVar1;
      local_78 = CONCAT44(( _LC46._4_4_ - fVar43 ) - fVar18 * fVar39, fVar36 * fVar39 - fVar44);
      uStack_70 = ( ulong )(uint)(fVar39 * fVar32 + fVar13 * fVar42);
      local_68 = CONCAT44(fVar13 * fVar42 - fVar39 * fVar32, fVar13 * fVar39 + fVar42 * fVar32);
      uStack_60 = ( ulong )(uint)(( _LC46._4_4_ - fVar18 * fVar39 ) - fVar36 * fVar42);
      do {
         fVar13 = *(float*)( local_88 + lVar8 );
         fVar32 = *(float*)( local_88 + lVar8 + 4 );
         fVar18 = *(float*)( local_88 + lVar8 + 8 );
         *(float*)( (long)local_c8 + lVar8 ) = fVar18 * ( fVar14 * fVar34 + fVar38 * fVar35 ) + fVar13 * ( ( _LC46._4_4_ - fVar11 * fVar38 ) - fVar41 ) + fVar32 * ( fVar11 * fVar34 - fVar33 );
         *(float*)( (long)local_c8 + lVar8 + 4 ) = fVar18 * ( fVar14 * fVar38 - fVar34 * fVar35 ) + fVar13 * ( fVar11 * fVar34 + fVar33 ) + fVar32 * ( ( _LC46._4_4_ - fVar41 ) - fVar12 * fVar34 );
         *(float*)( (long)local_c8 + lVar8 + 8 ) = fVar18 * ( ( _LC46._4_4_ - fVar12 * fVar34 ) - fVar11 * fVar38 ) + fVar13 * ( fVar14 * fVar34 - fVar38 * fVar35 ) + fVar32 * ( fVar34 * fVar35 + fVar14 * fVar38 );
         *(float*)( (long)local_c8 + lVar8 + 0xc ) = fVar18 * 0.0 + fVar13 * 0.0 + fVar32 * 0.0;
         lVar8 = lVar8 + 0x10;
      } while ( lVar8 != 0x30 );
      fVar11 = pfVar10[8];
      fVar12 = pfVar10[9];
      fVar13 = pfVar10[10];
      fVar18 = fVar12 * local_c8[4];
      fVar33 = fVar12 * local_c8[5];
      fVar12 = fVar12 * local_c8[6];
      fVar32 = fVar11 * local_c8[0];
      fVar14 = fVar11 * local_c8[1];
      fVar11 = fVar11 * local_c8[2];
      uVar28 = -(uint)((CONCAT31(0,bVar1) & __LC31) == __LC31);
      uVar29 = -(uint)((uStack_174 & _UNK_00102f44) == _UNK_00102f44);
      uVar30 = -(uint)((uStack_170 & _UNK_00102f48) == _UNK_00102f48);
      uVar31 = -(uint)((uStack_16c & _UNK_00102f4c) == _UNK_00102f4c);
      fVar34 = fVar13 * local_c8[8];
      fVar39 = fVar13 * local_c8[9];
      fVar13 = fVar13 * local_c8[10];
      fVar41 = (float)( ( uint )(fVar18 * local_c8[4] + fVar32 * local_c8[0] + fVar34 * local_c8[8]) & uVar28 );
      fVar42 = (float)( ( uint )(fVar18 * local_c8[5] + fVar32 * local_c8[1] + fVar34 * local_c8[9]) & uVar28 & uVar29 );
      fVar43 = (float)( ( uint )(fVar18 * local_c8[6] + fVar32 * local_c8[2] + fVar34 * local_c8[10]) & uVar28 & uVar30 );
      fVar44 = (float)( ( uint )(fVar18 * local_c8[7] + fVar32 * local_c8[3] + fVar34 * local_c8[0xb]) & uVar28 & uVar31 );
      fVar35 = (float)( ( uint )(fVar33 * local_c8[4] + fVar14 * local_c8[0] + fVar39 * local_c8[8]) & uVar29 & uVar28 );
      fVar36 = (float)( ( uint )(fVar33 * local_c8[5] + fVar14 * local_c8[1] + fVar39 * local_c8[9]) & uVar29 );
      fVar38 = (float)( ( uint )(fVar33 * local_c8[6] + fVar14 * local_c8[2] + fVar39 * local_c8[10]) & uVar29 & uVar30 );
      fVar39 = (float)( ( uint )(fVar33 * local_c8[7] + fVar14 * local_c8[3] + fVar39 * local_c8[0xb]) & uVar29 & uVar31 );
      fVar14 = (float)( ( uint )(fVar12 * local_c8[4] + fVar11 * local_c8[0] + fVar13 * local_c8[8]) & uVar28 & uVar30 );
      fVar18 = (float)( ( uint )(fVar12 * local_c8[5] + fVar11 * local_c8[1] + fVar13 * local_c8[9]) & uVar29 & uVar30 );
      fVar33 = (float)( ( uint )(fVar12 * local_c8[6] + fVar11 * local_c8[2] + fVar13 * local_c8[10]) & uVar30 );
      fVar34 = (float)( ( uint )(fVar12 * local_c8[7] + fVar11 * local_c8[3] + fVar13 * local_c8[0xb]) & uVar31 & uVar30 );
      fVar11 = fVar15 * fVar14 + fVar19 * fVar41 + fVar20 * fVar35 + __LC6;
      fVar12 = fVar15 * fVar18 + fVar19 * fVar42 + fVar20 * fVar36 + _UNK_00102f24;
      fVar13 = fVar15 * fVar33 + fVar19 * fVar43 + fVar20 * fVar38 + (float)_LC46;
      fVar15 = fVar15 * fVar34 + fVar19 * fVar44 + fVar20 * fVar39 + _LC46._4_4_;
      fVar32 = local_1a8._4_4_ * local_1a8._4_4_ + (float)local_1a8 * (float)local_1a8 + 0.0 + (float)uStack_1a0 * (float)uStack_1a0;
      fVar19 = fVar13 * fVar13 + fVar11 * fVar11 + 0.0 + fVar12 * fVar12;
      if (fVar32 < fVar19) {
         fVar32 = SQRT(fVar32 / fVar19);
         fVar11 = fVar11 * fVar32;
         fVar12 = fVar12 * fVar32;
         fVar13 = fVar13 * fVar32;
         fVar15 = fVar15 * fVar32;
      }
      uVar9 = 1;
      fVar32 = fVar26 * fVar22 - fVar24 * fVar21;
      fVar21 = fVar27 * fVar21 - fVar26 * fVar23;
      fVar23 = fVar24 * fVar23 - fVar27 * fVar22;
      fVar22 = fVar32 * fVar18 + fVar21 * fVar42 + fVar36 * fVar23 + _UNK_00102f24;
      fVar24 = fVar32 * fVar33 + fVar21 * fVar43 + fVar38 * fVar23 + (float)_LC46;
      fVar26 = fVar32 * fVar34 + fVar21 * fVar44 + fVar39 * fVar23 + _LC46._4_4_;
      pfVar10[4] = fVar11 + fVar32 * fVar14 + fVar21 * fVar41 + fVar35 * fVar23 + __LC6 + pfVar10[4];
      pfVar10[5] = fVar12 + fVar22 + pfVar10[5];
      pfVar10[6] = fVar13 + fVar24 + pfVar10[6];
      pfVar10[7] = fVar15 + fVar26 + pfVar10[7];
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar9;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* JPH::Body::ApplyBuoyancyImpulse(JPH::Vec3, JPH::Vec3, float, float, float, JPH::Vec3, JPH::Vec3,
   float) */void JPH::Body::ApplyBuoyancyImpulse(undefined8 param_1) {
   long in_FS_OFFSET;
   undefined4 local_30;
   undefined1 local_2c[4];
   undefined1 local_28[24];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   GetSubmergedVolume(param_1, &local_30, local_2c, local_28);
   ApplyBuoyancyImpulse(local_30, param_1);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* JPH::Body::SaveState(JPH::StateRecorder&) const */void JPH::Body::SaveState(Body *this, StateRecorder *param_1) {
   StateRecorder *pSVar1;
   ( **(code**)( *(long*)( param_1 + 8 ) + 0x10 ) )(param_1 + 8, this, 0xc);
   ( **(code**)( *(long*)( param_1 + 8 ) + 0x10 ) )(param_1 + 8, this + 0x10, 0x10);
   pSVar1 = *(StateRecorder**)( this + 0x48 );
   if (pSVar1 == (StateRecorder*)0x0) {
      return;
   }
   if (this[0x76] != (Body)0x1) {
      JPH::MotionProperties::SaveState(pSVar1);
      return;
   }
   JPH::SoftBodyMotionProperties::SaveState(pSVar1);
   return;
}/* JPH::Body::RestoreState(JPH::StateRecorder&) */void JPH::Body::RestoreState(Body *this, StateRecorder *param_1) {
   StateRecorder *pSVar1;
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this, 0xc);
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x10, 0x10);
   pSVar1 = *(StateRecorder**)( this + 0x48 );
   if (pSVar1 != (StateRecorder*)0x0) {
      if (this[0x76] == (Body)0x1) {
         JPH::SoftBodyMotionProperties::RestoreState(pSVar1);
         CalculateWorldSpaceBoundsInternal(this);
         return;
      }
      JPH::MotionProperties::RestoreState(pSVar1);
   }
   CalculateWorldSpaceBoundsInternal(this);
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::Body::GetBodyCreationSettings() const */void JPH::Body::GetBodyCreationSettings(void) {
   long *plVar1;
   float fVar2;
   byte bVar3;
   undefined2 uVar4;
   long *plVar5;
   undefined8 uVar6;
   undefined1 uVar7;
   long *plVar8;
   undefined8 *puVar9;
   Body *in_RSI;
   undefined1(*in_RDI)[16];
   float fVar10;
   float fVar11;
   float fVar12;
   undefined8 uVar13;
   undefined8 uVar16;
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar17[16];
   float fVar18;
   float fVar19;
   float fVar20;
   float fVar21;
   float fVar22;
   float fVar23;
   undefined8 uVar24;
   undefined8 uVar25;
   float fVar26;
   undefined1 auVar27[16];
   float fVar28;
   float fVar29;
   float fVar30;
   float fVar31;
   float fVar33;
   undefined1 auVar32[16];
   float fVar34;
   float fVar35;
   undefined1 auVar36[16];
   float fVar37;
   float fVar38;
   float fVar39;
   float fVar40;
   undefined1 auVar41[16];
   *(undefined2*)( in_RDI[4] + 8 ) = 0;
   uVar16 = _UNK_00102f68;
   uVar13 = __LC38;
   *(undefined8*)in_RDI[6] = 0x10000003f02;
   uVar6 = _LC39;
   fVar26 = _LC46._4_4_;
   *(undefined2*)( in_RDI[6] + 8 ) = 0x100;
   uVar24 = __LC6;
   uVar25 = CONCAT44(_LC46._4_4_, (undefined4)_LC46);
   *(undefined8*)in_RDI[4] = 0;
   *(undefined8*)in_RDI[5] = 0;
   *(undefined8*)( in_RDI[5] + 8 ) = 0xffffffffffffffff;
   *(undefined8*)( in_RDI[7] + 0xc ) = uVar6;
   *(undefined8*)( in_RDI[8] + 8 ) = 0;
   in_RDI[9][0] = 0;
   *(undefined4*)in_RDI[10] = 0;
   *(undefined8*)( in_RDI[6] + 0xc ) = uVar13;
   *(undefined8*)( in_RDI[7] + 4 ) = uVar16;
   *(undefined8*)in_RDI[1] = uVar24;
   *(undefined8*)( in_RDI[1] + 8 ) = uVar25;
   *(float*)( in_RDI[8] + 4 ) = fVar26;
   *(float*)( in_RDI[9] + 4 ) = fVar26;
   *in_RDI = (undefined1[16])0x0;
   in_RDI[2] = (undefined1[16])0x0;
   in_RDI[3] = (undefined1[16])0x0;
   in_RDI[0xb] = (undefined1[16])0x0;
   in_RDI[0xc] = (undefined1[16])0x0;
   in_RDI[0xd] = (undefined1[16])0x0;
   in_RDI[0xe] = (undefined1[16])0x0;
   in_RDI[0xf] = (undefined1[16])0x0;
   auVar41 = GetPosition(in_RSI);
   fVar26 = _LC46._4_4_;
   puVar9 = *(undefined8**)( in_RSI + 0x48 );
   uVar25 = *(undefined8*)( in_RSI + 0x10 );
   uVar24 = *(undefined8*)( in_RSI + 0x18 );
   *(long*)*in_RDI = auVar41._0_8_;
   *(undefined8*)in_RDI[1] = uVar25;
   *(undefined8*)( in_RDI[1] + 8 ) = uVar24;
   uVar24 = __LC6;
   uVar25 = CONCAT44(_LC46._4_4_, (undefined4)_LC46);
   *(long*)( *in_RDI + 8 ) = auVar41._8_8_;
   if (puVar9 == (undefined8*)0x0) {
      uVar13 = 0;
      uVar16 = 0;
      in_RDI[2] = (undefined1[16])0x0;
   } else {
      uVar6 = puVar9[1];
      uVar13 = puVar9[2];
      uVar16 = puVar9[3];
      *(undefined8*)in_RDI[2] = *puVar9;
      *(undefined8*)( in_RDI[2] + 8 ) = uVar6;
   }
   uVar4 = *(undefined2*)( in_RSI + 0x74 );
   plVar5 = *(long**)in_RDI[5];
   *(undefined8*)in_RDI[3] = uVar13;
   *(undefined8*)( in_RDI[3] + 8 ) = uVar16;
   *(undefined2*)( in_RDI[4] + 8 ) = uVar4;
   *(undefined8*)in_RDI[4] = *(undefined8*)( in_RSI + 0x50 );
   plVar8 = *(long**)( in_RSI + 0x58 );
   if (plVar5 == plVar8) goto LAB_00101f48;
   if (plVar5 == (long*)0x0) {
      LAB_00101f36:*(long**)in_RDI[5] = plVar8;
   } else {
      LOCK();
      plVar8 = plVar5 + 1;
      *(int*)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 != 0) {
         plVar8 = *(long**)( in_RSI + 0x58 );
         goto LAB_00101f36;
      }
      ( **(code**)( *plVar5 + 0x18 ) )();
      fVar26 = _LC46._4_4_;
      uVar24 = __LC6;
      plVar8 = *(long**)( in_RSI + 0x58 );
      uVar25 = CONCAT44(_LC46._4_4_, (undefined4)_LC46);
      *(long**)in_RDI[5] = plVar8;
   }
   if (plVar8 != (long*)0x0) {
      LOCK();
      *(int*)( plVar8 + 1 ) = (int)plVar8[1] + 1;
      UNLOCK();
   }
   puVar9 = *(undefined8**)( in_RSI + 0x48 );
   LAB_00101f48:*(undefined8*)( in_RDI[5] + 8 ) = *(undefined8*)( in_RSI + 0x60 );
   *(Body*)( in_RDI + 6 ) = in_RSI[0x78];
   uVar7 = 0x3f;
   if (puVar9 != (undefined8*)0x0) {
      uVar7 = *(undefined1*)( (long)puVar9 + 0x7a );
   }
   in_RDI[6][1] = uVar7;
   in_RDI[6][2] = puVar9 != (undefined8*)0x0;
   in_RDI[6][3] = (byte)in_RSI[0x79] & 1;
   in_RDI[6][4] = (byte)in_RSI[0x79] >> 1 & 1;
   in_RDI[6][5] = (byte)in_RSI[0x79] >> 4 & 1;
   in_RDI[6][6] = (byte)in_RSI[0x79] >> 5 & 1;
   uVar7 = 0;
   if (puVar9 != (undefined8*)0x0) {
      uVar7 = *(undefined1*)( puVar9 + 0xf );
   }
   in_RDI[6][7] = uVar7;
   in_RDI[6][8] = (byte)in_RSI[0x79] >> 6 & 1;
   if (puVar9 == (undefined8*)0x0) {
      uVar13 = *(undefined8*)( in_RSI + 0x68 );
      in_RDI[6][9] = 1;
      *(undefined1(*) [16])( in_RDI[7] + 4 ) = (undefined1[16])0x0;
      in_RDI[0xb] = ZEXT416((uint)_LC8);
      uVar6 = _UNK_00102f88;
      uVar16 = __LC41;
      *(undefined8*)( in_RDI[6] + 0xc ) = uVar13;
      *(undefined8*)in_RDI[0xc] = uVar16;
      *(undefined8*)( in_RDI[0xc] + 8 ) = uVar6;
      uVar16 = _UNK_00102f98;
      uVar13 = __LC42;
      *(undefined8*)( in_RDI[8] + 8 ) = 0;
      in_RDI[9][0] = 2;
      *(undefined4*)in_RDI[10] = 0x7f7fffff;
      *(float*)( in_RDI[8] + 4 ) = fVar26;
      *(undefined8*)in_RDI[0xd] = uVar13;
      *(undefined8*)( in_RDI[0xd] + 8 ) = uVar16;
   } else {
      uVar13 = *(undefined8*)( (long)puVar9 + 0x5c );
      uVar16 = *(undefined8*)( in_RSI + 0x68 );
      in_RDI[6][9] = *(undefined1*)( (long)puVar9 + 0x79 );
      *(undefined8*)( in_RDI[6] + 0xc ) = uVar16;
      *(undefined8*)( in_RDI[7] + 4 ) = uVar13;
      *(undefined8*)( in_RDI[7] + 0xc ) = *(undefined8*)( (long)puVar9 + 100 );
      uVar13 = puVar9[7];
      fVar2 = *(float*)( puVar9 + 0xb );
      *(undefined4*)( in_RDI[8] + 4 ) = *(undefined4*)( (long)puVar9 + 0x6c );
      fVar29 = (float)uVar13;
      *(uint*)( in_RDI[8] + 8 ) = ( uint ) * (byte*)( (long)puVar9 + 0x7b );
      bVar3 = *(byte*)( (long)puVar9 + 0x7c );
      fVar21 = (float)( (ulong)uVar13 >> 0x20 );
      in_RDI[9][0] = 2;
      *(uint*)( in_RDI[8] + 0xc ) = (uint)bVar3;
      fVar35 = fVar29 * ( fVar29 + fVar29 );
      fVar12 = (float)puVar9[6];
      fVar19 = (float)( (ulong)puVar9[6] >> 0x20 );
      fVar10 = fVar12 + fVar12;
      fVar31 = fVar19 + fVar19;
      fVar28 = fVar21 * ( fVar29 + fVar29 );
      fVar37 = ( fVar26 - fVar12 * fVar10 ) - fVar19 * fVar31;
      fVar34 = fVar29 * fVar10 + fVar31 * fVar21;
      fVar39 = fVar29 * fVar31 - fVar10 * fVar21;
      fVar11 = fVar10 * fVar21 + fVar29 * fVar31;
      fVar38 = fVar19 * fVar10 - fVar28;
      fVar28 = fVar19 * fVar10 + fVar28;
      fVar30 = *(float*)( puVar9 + 4 );
      fVar23 = *(float*)( (long)puVar9 + 0x24 );
      fVar22 = *(float*)( puVar9 + 5 );
      fVar40 = ( fVar26 - fVar35 ) - fVar12 * fVar10;
      fVar18 = fVar22 * fVar34;
      fVar20 = fVar22 * fVar39;
      fVar22 = fVar22 * fVar37;
      fVar35 = ( fVar26 - fVar19 * fVar31 ) - fVar35;
      fVar12 = fVar29 * fVar10 - fVar31 * fVar21;
      fVar19 = fVar23 * fVar38;
      fVar21 = fVar23 * fVar40;
      fVar23 = fVar23 * fVar11;
      fVar29 = fVar30 * fVar35;
      fVar10 = fVar30 * fVar28;
      fVar30 = fVar30 * fVar12;
      fVar31 = fVar19 * fVar38 + fVar29 * fVar35 + fVar18 * fVar34;
      fVar33 = fVar19 * fVar40 + fVar29 * fVar28 + fVar18 * fVar39;
      fVar18 = fVar19 * fVar11 + fVar29 * fVar12 + fVar18 * fVar37;
      fVar19 = fVar30 * fVar35 + fVar23 * fVar38 + fVar22 * fVar34;
      fVar29 = fVar30 * fVar28 + fVar23 * fVar40 + fVar22 * fVar39;
      fVar23 = fVar30 * fVar12 + fVar23 * fVar11 + fVar22 * fVar37;
      fVar22 = fVar20 * fVar34 + fVar21 * fVar38 + fVar10 * fVar35;
      fVar28 = fVar20 * fVar39 + fVar21 * fVar40 + fVar10 * fVar28;
      fVar12 = fVar20 * fVar37 + fVar21 * fVar11 + fVar10 * fVar12;
      fVar30 = _LC8;
      if (fVar2 != 0.0) {
         fVar30 = fVar26 / fVar2;
      }
      *(float*)in_RDI[10] = fVar30;
      auVar41._0_4_ = ( fVar29 * fVar22 - fVar28 * fVar19 ) * fVar18 + ( fVar19 * fVar12 - fVar22 * fVar23 ) * fVar33 + ( fVar23 * fVar28 - fVar12 * fVar29 ) * fVar31 + 0.0;
      if (auVar41._0_4_ == 0.0) {
         auVar36._4_4_ = fVar28;
         auVar36._0_4_ = fVar31;
         auVar36._12_4_ = fVar23;
         auVar36._8_4_ = fVar23;
         auVar15._4_4_ = _LC29;
         auVar15._0_4_ = _LC29;
         auVar15._8_4_ = _LC29;
         auVar15._12_4_ = _LC29;
         auVar41 = maxps(auVar36, auVar15);
         auVar17._4_4_ = _LC46._4_4_;
         auVar17._0_4_ = _LC46._4_4_;
         auVar17._8_4_ = _LC46._4_4_;
         auVar17._12_4_ = _LC46._4_4_;
         auVar41 = divps(auVar17, auVar41);
         in_RDI[0xb] = ZEXT416(auVar41._0_4_);
         in_RDI[0xc] = ZEXT416(auVar41._4_4_) << 0x20;
         in_RDI[0xd] = ZEXT416(auVar41._8_4_) << 0x40;
      } else {
         auVar41._4_4_ = auVar41._0_4_;
         auVar41._8_4_ = auVar41._0_4_;
         auVar41._12_4_ = auVar41._0_4_;
         auVar32._0_4_ = fVar28 * fVar23 - fVar29 * fVar12;
         auVar32._4_4_ = fVar29 * fVar18 - fVar33 * fVar23;
         auVar32._8_4_ = fVar33 * fVar12 - fVar28 * fVar18;
         auVar32._12_4_ = 0;
         auVar14._0_4_ = fVar12 * fVar19 - fVar23 * fVar22;
         auVar14._4_4_ = fVar23 * fVar31 - fVar18 * fVar19;
         auVar14._8_4_ = fVar18 * fVar22 - fVar12 * fVar31;
         auVar14._12_4_ = 0;
         auVar32 = divps(auVar32, auVar41);
         auVar27._0_4_ = fVar29 * fVar22 - fVar28 * fVar19;
         auVar27._4_4_ = fVar33 * fVar19 - fVar29 * fVar31;
         auVar27._8_4_ = fVar28 * fVar31 - fVar33 * fVar22;
         auVar27._12_4_ = 0;
         auVar14 = divps(auVar14, auVar41);
         in_RDI[0xb] = auVar32;
         auVar41 = divps(auVar27, auVar41);
         in_RDI[0xc] = auVar14;
         in_RDI[0xd] = auVar41;
      }
   }
   plVar5 = *(long**)( in_RSI + 0x40 );
   plVar8 = *(long**)( in_RDI[0xf] + 8 );
   *(undefined8*)in_RDI[0xe] = uVar24;
   *(undefined8*)( in_RDI[0xe] + 8 ) = uVar25;
   if (plVar5 != plVar8) {
      if (plVar8 != (long*)0x0) {
         LOCK();
         plVar1 = plVar8 + 1;
         *(int*)plVar1 = (int)*plVar1 + -1;
         UNLOCK();
         if ((int)*plVar1 == 0) {
            ( **(code**)( *plVar8 + 8 ) )();
         }
      }
      *(long**)( in_RDI[0xf] + 8 ) = plVar5;
      if (plVar5 != (long*)0x0) {
         LOCK();
         *(int*)( plVar5 + 1 ) = (int)plVar5[1] + 1;
         UNLOCK();
      }
   }
   plVar5 = *(long**)in_RDI[0xf];
   if (plVar5 != (long*)0x0) {
      LOCK();
      plVar8 = plVar5 + 1;
      *(int*)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
         ( **(code**)( *plVar5 + 0x18 ) )();
      }
      *(undefined8*)in_RDI[0xf] = 0;
   }
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::Body::GetSoftBodyCreationSettings() const */void JPH::Body::GetSoftBodyCreationSettings(void) {
   undefined4 uVar1;
   undefined4 uVar2;
   undefined4 uVar3;
   undefined4 uVar4;
   undefined1 uVar5;
   undefined2 uVar6;
   undefined8 uVar7;
   long *plVar8;
   SoftBodySharedSettings *this;
   long lVar9;
   SoftBodySharedSettings *pSVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   long *plVar13;
   Body *in_RSI;
   undefined8 *in_RDI;
   undefined8 uVar14;
   undefined4 in_XMM1_Da;
   undefined4 in_XMM1_Db;
   *(undefined2*)( in_RDI + 7 ) = 0;
   uVar11 = _LC46;
   *(undefined1(*) [16])( in_RDI + 2 ) = (undefined1[16])0x0;
   uVar12 = _LC46;
   uVar7 = __LC6;
   *(undefined8*)( (long)in_RDI + 100 ) = uVar11;
   in_RDI[4] = uVar7;
   in_RDI[5] = uVar12;
   uVar11 = _UNK_00102fa8;
   uVar7 = __LC45;
   *in_RDI = 0;
   in_RDI[6] = 0;
   in_RDI[8] = 0;
   in_RDI[9] = 0xffffffffffffffff;
   *(undefined4*)( in_RDI + 10 ) = 5;
   *(undefined2*)( (long)in_RDI + 0x6c ) = 0x101;
   *(undefined1*)( (long)in_RDI + 0x6e ) = 1;
   *(undefined8*)( (long)in_RDI + 0x54 ) = uVar7;
   *(undefined8*)( (long)in_RDI + 0x5c ) = uVar11;
   uVar14 = GetPosition(in_RSI);
   uVar7 = *(undefined8*)( in_RSI + 0x50 );
   uVar11 = *(undefined8*)( in_RSI + 0x10 );
   uVar12 = *(undefined8*)( in_RSI + 0x18 );
   plVar8 = (long*)in_RDI[8];
   in_RDI[2] = uVar14;
   in_RDI[6] = uVar7;
   uVar6 = *(undefined2*)( in_RSI + 0x74 );
   in_RDI[3] = CONCAT44(in_XMM1_Db, in_XMM1_Da);
   *(undefined2*)( in_RDI + 7 ) = uVar6;
   plVar13 = *(long**)( in_RSI + 0x58 );
   in_RDI[4] = uVar11;
   in_RDI[5] = uVar12;
   if (plVar8 != plVar13) {
      if (plVar8 != (long*)0x0) {
         LOCK();
         plVar13 = plVar8 + 1;
         *(int*)plVar13 = (int)*plVar13 + -1;
         UNLOCK();
         if ((int)*plVar13 == 0) {
            ( **(code**)( *plVar8 + 0x18 ) )();
         }
         plVar13 = *(long**)( in_RSI + 0x58 );
      }
      in_RDI[8] = plVar13;
      if (plVar13 != (long*)0x0) {
         LOCK();
         *(int*)( plVar13 + 1 ) = (int)plVar13[1] + 1;
         UNLOCK();
      }
   }
   uVar1 = *(undefined4*)( in_RSI + 0x68 );
   uVar2 = *(undefined4*)( in_RSI + 0x6c );
   this(SoftBodySharedSettings * ) * in_RDI;
   in_RDI[9] = *(undefined8*)( in_RSI + 0x60 );
   lVar9 = *(long*)( in_RSI + 0x48 );
   uVar3 = *(undefined4*)( lVar9 + 100 );
   uVar4 = *(undefined4*)( lVar9 + 0x5c );
   pSVar10 = *(SoftBodySharedSettings**)( lVar9 + 0x100 );
   *(undefined4*)( in_RDI + 10 ) = *(undefined4*)( lVar9 + 0x1b0 );
   uVar5 = *(undefined1*)( lVar9 + 0x1bc );
   *(ulong*)( (long)in_RDI + 0x54 ) = CONCAT44(uVar3, uVar4);
   *(ulong*)( (long)in_RDI + 0x5c ) = CONCAT44(uVar1, uVar2);
   uVar1 = *(undefined4*)( lVar9 + 0x6c );
   uVar2 = *(undefined4*)( lVar9 + 0x1b4 );
   *(undefined1*)( (long)in_RDI + 0x6c ) = uVar5;
   *(ulong*)( (long)in_RDI + 100 ) = CONCAT44(uVar1, uVar2);
   if (pSVar10 == this) {
      return;
   }
   if (this != (SoftBodySharedSettings*)0x0) {
      LOCK();
      *(int*)this = *(int*)this + -1;
      UNLOCK();
      if (*(int*)this == 0) {
         SoftBodySharedSettings::~SoftBodySharedSettings(this);
         ( *Free )(this);
         *in_RDI = pSVar10;
         goto joined_r0x00102610;
      }
   }
   *in_RDI = pSVar10;
   joined_r0x00102610:if (pSVar10 != (SoftBodySharedSettings*)0x0) {
      LOCK();
      *(int*)pSVar10 = *(int*)pSVar10 + 1;
      UNLOCK();
   }
   return;
}/* JPH::EmptyShape::GetLocalBounds() const */EmptyShape * __thiscall JPH::EmptyShape::GetLocalBounds(EmptyShape *this){
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   return this;
}/* JPH::EmptyShape::GetSubmergedVolume(JPH::Mat44 const&, JPH::Vec3, JPH::Plane const&, float&,
   float&, JPH::Vec3&, JPH::Vec3) const */void JPH::EmptyShape::GetSubmergedVolume(void) {
   undefined4 *in_RCX;
   undefined4 *in_R8;
   undefined1(*in_R9)[16];
   *in_RCX = 0;
   *in_R8 = 0;
   *in_R9 = (undefined1[16])0x0;
   return;
}/* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   /* WARNING: Could not recover jumptable at 0x00102754. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *Free )();
   return;
}/* JPH::EmptyShape::~EmptyShape() */void JPH::EmptyShape::~EmptyShape(EmptyShape *this) {
   return;
}/* JPH::Shape::GetWorldSpaceBounds(JPH::Mat44 const&, JPH::Vec3) const */float *JPH::Shape::GetWorldSpaceBounds(undefined8 param_1_00, undefined8 param_2, float *param_1, long *param_4, long param_5) {
   float *pfVar1;
   float fVar2;
   float fVar3;
   long lVar4;
   long in_FS_OFFSET;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   float fVar8;
   float fVar10;
   float fVar11;
   undefined1 auVar9[16];
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   float local_78;
   float fStack_74;
   float fStack_70;
   float fStack_6c;
   float local_68;
   float fStack_64;
   float fStack_60;
   float fStack_5c;
   float local_58;
   float fStack_54;
   float fStack_50;
   float fStack_4c;
   undefined1 local_48[16];
   undefined1 local_38[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar13 = 0.0;
   fVar14 = 0.0;
   fVar15 = 0.0;
   fVar16 = 0.0;
   fVar8 = 0.0;
   fVar10 = 0.0;
   fVar11 = 0.0;
   fVar12 = 0.0;
   if (*(code**)( *param_4 + 0x20 ) != EmptyShape::GetLocalBounds) {
      ( **(code**)( *param_4 + 0x20 ) )(&local_68);
      fVar13 = local_68;
      fVar14 = fStack_64;
      fVar15 = fStack_60;
      fVar16 = fStack_5c;
      fVar8 = local_58;
      fVar10 = fStack_54;
      fVar11 = fStack_50;
      fVar12 = fStack_4c;
   }
   local_78 = (float)param_1_00;
   fStack_74 = (float)( (ulong)param_1_00 >> 0x20 );
   fStack_70 = (float)param_2;
   fStack_6c = (float)( (ulong)param_2 >> 0x20 );
   auVar6._0_8_ = CONCAT44(fVar14 * fStack_74, fVar13 * local_78);
   auVar6._8_4_ = fVar15 * fStack_70;
   auVar6._12_4_ = fVar16 * fStack_6c;
   lVar4 = 0;
   auVar18._0_4_ = fVar8 * local_78;
   auVar18._4_4_ = fVar10 * fStack_74;
   auVar18._8_4_ = fVar11 * fStack_70;
   auVar18._12_4_ = fVar12 * fStack_6c;
   auVar9._8_4_ = auVar6._8_4_;
   auVar9._0_8_ = auVar6._0_8_;
   auVar9._12_4_ = auVar6._12_4_;
   local_38 = maxps(auVar9, auVar18);
   local_48 = minps(auVar6, auVar18);
   fVar13 = *(float*)( param_5 + 0x30 );
   fVar14 = *(float*)( param_5 + 0x34 );
   fVar15 = *(float*)( param_5 + 0x38 );
   fVar16 = *(float*)( param_5 + 0x3c );
   fVar8 = fVar13;
   fVar10 = fVar14;
   fVar11 = fVar15;
   fVar12 = fVar16;
   do {
      fVar2 = *(float*)( local_48 + lVar4 );
      fVar3 = *(float*)( local_38 + lVar4 );
      pfVar1 = (float*)( param_5 + lVar4 * 4 );
      auVar5._0_8_ = CONCAT44(fVar2 * pfVar1[1], fVar2 * *pfVar1);
      auVar5._8_4_ = fVar2 * pfVar1[2];
      auVar5._12_4_ = fVar2 * pfVar1[3];
      pfVar1 = (float*)( param_5 + lVar4 * 4 );
      auVar7._0_4_ = fVar3 * *pfVar1;
      auVar7._4_4_ = fVar3 * pfVar1[1];
      auVar7._8_4_ = fVar3 * pfVar1[2];
      auVar7._12_4_ = fVar3 * pfVar1[3];
      lVar4 = lVar4 + 4;
      auVar17._8_4_ = auVar5._8_4_;
      auVar17._0_8_ = auVar5._0_8_;
      auVar17._12_4_ = auVar5._12_4_;
      auVar18 = minps(auVar17, auVar7);
      auVar6 = maxps(auVar5, auVar7);
      fVar8 = fVar8 + auVar18._0_4_;
      fVar10 = fVar10 + auVar18._4_4_;
      fVar11 = fVar11 + auVar18._8_4_;
      fVar12 = fVar12 + auVar18._12_4_;
      fVar13 = fVar13 + auVar6._0_4_;
      fVar14 = fVar14 + auVar6._4_4_;
      fVar15 = fVar15 + auVar6._8_4_;
      fVar16 = fVar16 + auVar6._12_4_;
   } while ( lVar4 != 0xc );
   *param_1 = fVar8;
   param_1[1] = fVar10;
   param_1[2] = fVar11;
   param_1[3] = fVar12;
   param_1[4] = fVar13;
   param_1[5] = fVar14;
   param_1[6] = fVar15;
   param_1[7] = fVar16;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* JPH::Body::~Body() */void JPH::Body::~Body(Body *this) {
   long *plVar1;
   long *plVar2;
   plVar2 = *(long**)( this + 0x58 );
   if (plVar2 != (long*)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int*)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
         ( **(code**)( *plVar2 + 0x18 ) )();
      }
   }
   plVar2 = *(long**)( this + 0x40 );
   if (plVar2 != (long*)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int*)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
         /* WARNING: Could not recover jumptable at 0x00102898. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( **(code**)( *plVar2 + 8 ) )();
         return;
      }
   }
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::Body::GetPosition() const */undefined1[16];JPH::Body::GetPosition (Body *this) {
   float fVar1;
   float fVar2;
   float fVar3;
   undefined1 auVar4[16];
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   undefined1 auVar14[12];
   float local_18;
   float fStack_14;
   auVar14 = ( **(code**)( **(long**)( this + 0x40 ) + 0x18 ) )();
   fVar6 = auVar14._8_4_;
   fVar7 = *(float*)( this + 0x10 );
   fVar1 = *(float*)( this + 0x1c );
   local_18 = auVar14._0_4_;
   fStack_14 = auVar14._4_4_;
   fVar2 = *(float*)( this + 0x18 );
   fVar3 = *(float*)( this + 0x14 );
   fVar9 = (float)( *(uint*)( this + 0x10 ) ^ _LC15 );
   fVar10 = (float)( *(uint*)( this + 0x14 ) ^ _UNK_00102f14 );
   fVar11 = (float)( *(uint*)( this + 0x18 ) ^ _UNK_00102f18 );
   fVar12 = (float)( *(uint*)( this + 0x1c ) ^ _UNK_00102f1c );
   fVar13 = ( fVar1 * local_18 + fVar7 * 0.0 + fVar3 * fVar6 ) - fVar2 * fStack_14;
   fVar8 = ( fVar1 * fStack_14 - fVar7 * fVar6 ) + fVar3 * 0.0 + fVar2 * local_18;
   fVar5 = ( ( fVar1 * fVar6 + fVar7 * fStack_14 ) - fVar3 * local_18 ) + fVar2 * 0.0;
   fVar7 = ( ( fVar1 * 0.0 - fVar7 * local_18 ) - fVar3 * fStack_14 ) - fVar2 * fVar6;
   auVar4._4_4_ = *(float*)( this + 4 ) - ( fVar5 * fVar9 + fVar8 * fVar12 + ( fVar10 * fVar7 - fVar13 * fVar11 ) );
   auVar4._0_4_ = *(float*)this - ( ( fVar8 * fVar11 + fVar9 * fVar7 + fVar13 * fVar12 ) - fVar5 * fVar10 );
   auVar4._8_4_ = *(float*)( this + 8 ) - ( fVar5 * fVar12 + ( ( fVar11 * fVar7 + fVar13 * fVar10 ) - fVar8 * fVar9 ) );
   auVar4._12_4_ = *(float*)( this + 0xc ) - ( ( ( fVar12 * fVar7 - fVar13 * fVar9 ) - fVar8 * fVar10 ) - fVar5 * fVar11 );
   return auVar4;
}/* JPH::Body::GetSleepTestPoints(JPH::Vec3*) const */void JPH::Body::GetSleepTestPoints(Body *this, Vec3 *param_1) {
   undefined8 uVar1;
   float fVar2;
   char cVar3;
   float fVar4;
   float fVar5;
   long in_FS_OFFSET;
   float fVar6;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   undefined1 auVar7[12];
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
   float local_48;
   float fStack_44;
   float fStack_40;
   float local_38;
   float fStack_34;
   float fStack_30;
   long local_20;
   auVar7 = SUB1612((undefined1[16])0x0, 0);
   uVar1 = *(undefined8*)( this + 8 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)param_1 = *(undefined8*)this;
   *(undefined8*)( param_1 + 8 ) = uVar1;
   if (*(code**)( **(long**)( this + 0x40 ) + 0x20 ) == EmptyShape::GetLocalBounds) {
      LAB_00102a56:cVar3 = '\x01';
   } else {
      ( **(code**)( **(long**)( this + 0x40 ) + 0x20 ) )(&local_48);
      auVar7._0_4_ = ( local_38 - local_48 ) * _LC4;
      auVar7._4_4_ = ( fStack_34 - fStack_44 ) * _LC4;
      auVar7._8_4_ = ( fStack_30 - fStack_40 ) * _LC4;
      if (auVar7._4_4_ <= auVar7._0_4_) {
         if (auVar7._4_4_ <= auVar7._8_4_) goto LAB_00102a56;
         cVar3 = '\x02';
      } else {
         cVar3 = ( auVar7._8_4_ < auVar7._0_4_ ) * '\x02';
      }
   }
   fVar4 = (float)*(undefined8*)( this + 0x18 );
   fVar15 = (float)*(undefined8*)( this + 0x10 );
   fVar2 = (float)( ( ulong ) * (undefined8*)( this + 0x10 ) >> 0x20 );
   fVar16 = fVar15 + fVar15;
   fVar21 = fVar2 + fVar2;
   fVar5 = (float)( ( ulong ) * (undefined8*)( this + 0x18 ) >> 0x20 );
   fVar19 = ( fVar4 + fVar4 ) * fVar4;
   fVar20 = ( fVar4 + fVar4 ) * fVar5;
   fVar13 = _LC46._4_4_ - fVar15 * fVar16;
   fVar22 = fVar2 * fVar16 + fVar20;
   fVar6 = *(float*)( this + 4 );
   fVar9 = *(float*)( this + 8 );
   fVar11 = *(float*)( this + 0xc );
   fVar14 = fVar4 * fVar16 - fVar21 * fVar5;
   fVar18 = ( _LC46._4_4_ - fVar21 * fVar2 ) - fVar19;
   fVar12 = auVar7._0_4_;
   fVar8 = auVar7._4_4_;
   fVar10 = auVar7._8_4_;
   if (cVar3 == '\x01') {
      fVar20 = fVar12 * fVar18;
      fVar15 = fVar12 * fVar22;
      fVar17 = fVar12 * fVar14;
   } else {
      fVar20 = fVar2 * fVar16 - fVar20;
      fVar17 = fVar16 * fVar5 + fVar4 * fVar21;
      fVar15 = ( _LC46._4_4_ - fVar19 ) - fVar15 * fVar16;
      if (cVar3 == '\x02') {
         *(float*)( param_1 + 0x10 ) = fVar12 * fVar18 + *(float*)this;
         *(float*)( param_1 + 0x14 ) = fVar12 * fVar22 + fVar6;
         *(float*)( param_1 + 0x18 ) = fVar12 * fVar14 + fVar9;
         *(float*)( param_1 + 0x1c ) = fVar12 * 0.0 + fVar11;
         fVar6 = fVar8 * fVar20 + *(float*)this;
         fVar9 = fVar8 * fVar15 + *(float*)( this + 4 );
         fVar11 = fVar8 * fVar17 + *(float*)( this + 8 );
         fVar12 = fVar8 * 0.0 + *(float*)( this + 0xc );
         goto LAB_00102b78;
      }
      fVar20 = fVar20 * fVar8;
      fVar15 = fVar15 * fVar8;
      fVar17 = fVar17 * fVar8;
      fVar12 = fVar8;
   }
   *(float*)( param_1 + 0x10 ) = fVar20 + *(float*)this;
   *(float*)( param_1 + 0x14 ) = fVar15 + fVar6;
   *(float*)( param_1 + 0x18 ) = fVar17 + fVar9;
   *(float*)( param_1 + 0x1c ) = fVar12 * 0.0 + fVar11;
   fVar6 = fVar10 * ( fVar4 * fVar16 + fVar21 * fVar5 ) + *(float*)this;
   fVar9 = fVar10 * ( fVar4 * fVar21 - fVar16 * fVar5 ) + *(float*)( this + 4 );
   fVar11 = fVar10 * ( fVar13 - fVar21 * fVar2 ) + *(float*)( this + 8 );
   fVar12 = fVar10 * 0.0 + *(float*)( this + 0xc );
   LAB_00102b78:*(float*)( param_1 + 0x20 ) = fVar6;
   *(float*)( param_1 + 0x24 ) = fVar9;
   *(float*)( param_1 + 0x28 ) = fVar11;
   *(float*)( param_1 + 0x2c ) = fVar12;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   return;
}/* JPH::SoftBodySharedSettings::~SoftBodySharedSettings() */void JPH::SoftBodySharedSettings::~SoftBodySharedSettings(SoftBodySharedSettings *this) {
   long *plVar1;
   long *plVar2;
   long *plVar3;
   long *plVar4;
   for (int i = 0; i < 3; i++) {
      if (*(long*)( this + ( -24*i + 296 ) ) != 0) {
         *(undefined8*)( this + ( -24*i + 280 ) ) = 0;
         ( *Free )();
      }
   }
   plVar4 = *(long**)( this + 0xd8 );
   if (plVar4 != (long*)0x0) {
      if (( *(long*)( this + 200 ) != 0 ) && ( plVar2 = plVar4 < plVar2 )) {
         do {
            while (plVar3 = (long*)*plVar4,plVar3 == (long*)0x0) {
               LAB_00102de0:plVar4 = plVar4 + 1;
               if (plVar2 <= plVar4) goto LAB_00102e18;
            };
            LOCK();
            plVar1 = plVar3 + 1;
            *(int*)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 != 0) goto LAB_00102de0;
            if (*(code**)( *plVar3 + 0x18 ) != PhysicsMaterial::~PhysicsMaterial) {
               ( **(code**)( *plVar3 + 0x18 ) )();
               goto LAB_00102de0;
            }
            ( *Free )();
            plVar4 = plVar4 + 1;
         } while ( plVar4 < plVar2 );
         LAB_00102e18:plVar4 = *(long**)( this + 0xd8 );
      }
      *(undefined8*)( this + 200 ) = 0;
      ( *Free )(plVar4);
   }
   for (int i = 0; i < 7; i++) {
      if (*(long*)( this + ( -24*i + 192 ) ) != 0) {
         *(undefined8*)( this + ( -24*i + 176 ) ) = 0;
         ( *Free )();
      }
   }
   if (*(long*)( this + 0x18 ) == 0) {
      return;
   }
   *(undefined8*)( this + 8 ) = 0;
   /* WARNING: Could not recover jumptable at 0x00102dba. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *Free )();
   return;
}/* JPH::EmptyShape::~EmptyShape() */void JPH::EmptyShape::~EmptyShape(EmptyShape *this) {
   /* WARNING: Could not recover jumptable at 0x00102e44. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *Free )();
   return;
}/* JPH::Body::sFixedToWorld */void JPH::Body::_GLOBAL__sub_I_sFixedToWorld(void) {
   undefined1 *puVar1;
   if (DVec3::cTrue == '\0') {
      DVec3::cTrue = '\x01';
      DVec3::cTrue = _LC48;
   }
   sFixedToWorldShape._8_4_ = 0;
   sFixedToWorldShape._24_2_ = 0x210b;
   sFixedToWorldShape._32_16_ = (undefined1[16])0x0;
   sFixedToWorldShape._16_8_ = 0;
   sFixedToWorldShape._0_8_ = 0x104078;
   __cxa_atexit(EmptyShape::~EmptyShape, sFixedToWorldShape, &__dso_handle);
   puVar1 = sFixedToWorld;
   Body((Body*)sFixedToWorld, false);
   __cxa_atexit(~Body, puVar1, &__dso_handle);
   return;
}/* WARNING: Control flow encountered bad instruction data *//* JPH::SoftBodySharedSettings::~SoftBodySharedSettings() */void JPH::SoftBodySharedSettings::~SoftBodySharedSettings(SoftBodySharedSettings *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* JPH::Body::~Body() */void JPH::Body::~Body(Body *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* JPH::EmptyShape::~EmptyShape() */void JPH::EmptyShape::~EmptyShape(EmptyShape *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

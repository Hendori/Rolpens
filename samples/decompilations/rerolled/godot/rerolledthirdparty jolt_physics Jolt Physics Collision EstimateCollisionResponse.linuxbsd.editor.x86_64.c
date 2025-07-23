/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::MotionProperties::GetInverseInertiaForRotation(JPH::Mat44 const&) const [clone .isra.0] */Mat44 *JPH::MotionProperties::GetInverseInertiaForRotation(Mat44 *param_1) {
   byte bVar1;
   undefined8 uVar2;
   undefined1 auVar3[16];
   long lVar4;
   long in_RSI;
   long in_FS_OFFSET;
   float in_XMM0_Da;
   float fVar5;
   float in_XMM0_Db;
   float in_XMM0_Dc;
   float fVar6;
   float in_XMM0_Dd;
   float in_XMM1_Da;
   float in_XMM1_Db;
   float in_XMM1_Dc;
   float fVar7;
   float in_XMM1_Dd;
   float in_XMM2_Da;
   uint uVar8;
   float in_XMM2_Db;
   uint uVar10;
   float in_XMM2_Dc;
   uint uVar11;
   float in_XMM2_Dd;
   undefined1 auVar9[16];
   uint uVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float local_98[16];
   undefined1 local_58[4];
   float afStack_54[3];
   undefined1 local_48[16];
   undefined1 local_38[16];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar14 = (float)*(undefined8*)( in_RSI + 0x38 );
   fVar5 = (float)( ( ulong ) * (undefined8*)( in_RSI + 0x38 ) >> 0x20 );
   fVar6 = (float)*(undefined8*)( in_RSI + 0x30 );
   fVar18 = fVar14 * ( fVar14 + fVar14 );
   fVar7 = (float)( ( ulong ) * (undefined8*)( in_RSI + 0x30 ) >> 0x20 );
   fVar16 = fVar6 + fVar6;
   fVar17 = fVar7 + fVar7;
   fVar15 = ( fVar14 + fVar14 ) * fVar5;
   local_58 = ( _LC0 - fVar7 * fVar17 ) - fVar18;
   lVar4 = 0;
   register0x00001304 = fVar7 * fVar16 + fVar15;
   register0x00001308 = fVar14 * fVar16 - fVar17 * fVar5;
   register0x0000130c = 0;
   local_48._4_4_ = ( _LC0 - fVar18 ) - fVar6 * fVar16;
   local_48._0_4_ = fVar7 * fVar16 - fVar15;
   local_48._8_4_ = fVar16 * fVar5 + fVar14 * fVar17;
   local_48._12_4_ = 0;
   local_38._4_4_ = fVar14 * fVar17 - fVar16 * fVar5;
   local_38._0_4_ = fVar14 * fVar16 + fVar17 * fVar5;
   local_38._8_4_ = ( _LC0 - fVar6 * fVar16 ) - fVar7 * fVar17;
   local_38._12_4_ = 0;
   do {
      fVar6 = *(float*)( local_58 + lVar4 );
      fVar7 = *(float*)( local_58 + lVar4 + 4 );
      fVar14 = *(float*)( local_58 + lVar4 + 8 );
      *(float*)( (long)local_98 + lVar4 ) = fVar14 * in_XMM2_Da + fVar6 * in_XMM0_Da + fVar7 * in_XMM1_Da;
      *(float*)( (long)local_98 + lVar4 + 4 ) = fVar14 * in_XMM2_Db + fVar6 * in_XMM0_Db + fVar7 * in_XMM1_Db;
      *(float*)( (long)local_98 + lVar4 + 8 ) = fVar14 * in_XMM2_Dc + fVar6 * in_XMM0_Dc + fVar7 * in_XMM1_Dc;
      *(float*)( (long)local_98 + lVar4 + 0xc ) = fVar14 * in_XMM2_Dd + fVar6 * in_XMM0_Dd + fVar7 * in_XMM1_Dd;
      lVar4 = lVar4 + 0x10;
   }
 while ( lVar4 != 0x30 );
   fVar6 = *(float*)( in_RSI + 0x20 );
   fVar7 = *(float*)( in_RSI + 0x24 );
   fVar14 = *(float*)( in_RSI + 0x28 );
   bVar1 = *(byte*)( in_RSI + 0x7a );
   fVar16 = fVar7 * local_98[4];
   fVar17 = fVar7 * local_98[5];
   fVar7 = fVar7 * local_98[6];
   uVar2 = CONCAT44(_LC0, _UNK_00101238);
   fVar5 = fVar6 * local_98[0];
   fVar15 = fVar6 * local_98[1];
   fVar6 = fVar6 * local_98[2];
   fVar18 = fVar14 * local_98[8];
   fVar13 = fVar14 * local_98[9];
   fVar14 = fVar14 * local_98[10];
   *(undefined8*)( param_1 + 0x30 ) = __LC2;
   *(undefined8*)( param_1 + 0x38 ) = uVar2;
   auVar9._1_3_ = 0;
   auVar9[0] = bVar1;
   auVar9[4] = bVar1;
   auVar9._5_3_ = 0;
   auVar9[8] = bVar1;
   auVar9._9_3_ = 0;
   auVar9[0xc] = bVar1;
   auVar9._13_3_ = 0;
   auVar3._4_4_ = _UNK_00101244;
   auVar3._0_4_ = __LC4;
   auVar3._8_4_ = _UNK_00101248;
   auVar3._12_4_ = _UNK_0010124c;
   auVar9 = auVar9 & auVar3;
   uVar8 = -(uint)(auVar9._0_4_ == __LC4);
   uVar10 = -(uint)(auVar9._4_4_ == _UNK_00101244);
   uVar11 = -(uint)(auVar9._8_4_ == _UNK_00101248);
   uVar12 = -(uint)(auVar9._12_4_ == _UNK_0010124c);
   *(uint*)param_1 = ( uint )(fVar16 * local_98[4] + fVar5 * local_98[0] + fVar18 * local_98[8]) & uVar8;
   *(uint*)( param_1 + 4 ) = ( uint )(fVar16 * local_98[5] + fVar5 * local_98[1] + fVar18 * local_98[9]) & uVar8 & uVar10;
   *(uint*)( param_1 + 8 ) = ( uint )(fVar16 * local_98[6] + fVar5 * local_98[2] + fVar18 * local_98[10]) & uVar8 & uVar11;
   *(uint*)( param_1 + 0xc ) = ( uint )(fVar16 * local_98[7] + fVar5 * local_98[3] + fVar18 * local_98[0xb]) & uVar8 & uVar12;
   *(uint*)( param_1 + 0x10 ) = ( uint )(fVar17 * local_98[4] + fVar15 * local_98[0] + fVar13 * local_98[8]) & uVar10 & uVar8;
   *(uint*)( param_1 + 0x14 ) = ( uint )(fVar17 * local_98[5] + fVar15 * local_98[1] + fVar13 * local_98[9]) & uVar10;
   *(uint*)( param_1 + 0x18 ) = ( uint )(fVar17 * local_98[6] + fVar15 * local_98[2] + fVar13 * local_98[10]) & uVar10 & uVar11;
   *(uint*)( param_1 + 0x1c ) = ( uint )(fVar17 * local_98[7] + fVar15 * local_98[3] + fVar13 * local_98[0xb]) & uVar10 & uVar12;
   *(uint*)( param_1 + 0x20 ) = ( uint )(fVar7 * local_98[4] + fVar6 * local_98[0] + fVar14 * local_98[8]) & uVar11 & uVar8;
   *(uint*)( param_1 + 0x24 ) = ( uint )(fVar7 * local_98[5] + fVar6 * local_98[1] + fVar14 * local_98[9]) & uVar11 & uVar10;
   *(uint*)( param_1 + 0x28 ) = ( uint )(fVar7 * local_98[6] + fVar6 * local_98[2] + fVar14 * local_98[10]) & uVar11;
   *(uint*)( param_1 + 0x2c ) = ( uint )(fVar7 * local_98[7] + fVar6 * local_98[3] + fVar14 * local_98[0xb]) & uVar11 & uVar12;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::EstimateCollisionResponse(JPH::Body const&, JPH::Body const&, JPH::ContactManifold const&,
   JPH::CollisionEstimationResult&, float, float, float, unsigned int) */void JPH::EstimateCollisionResponse(Body *param_1, Body *param_2, ContactManifold *param_3, CollisionEstimationResult *param_4, float param_5, float param_6, float param_7, uint param_8) {
   CollisionEstimationResult *__s;
   Body BVar1;
   Body BVar2;
   uint uVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   float *pfVar6;
   float *pfVar7;
   ulong uVar8;
   CollisionEstimationResult *pCVar9;
   CollisionEstimationResult *pCVar10;
   float fVar11;
   ContactManifold *pCVar12;
   CollisionEstimationResult *pCVar13;
   uint uVar14;
   long in_FS_OFFSET;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   float fVar20;
   float fVar23;
   float fVar24;
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   float fVar25;
   float fVar26;
   float fVar29;
   float fVar30;
   undefined1 auVar27[16];
   float fVar31;
   undefined1 auVar28[16];
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
   float fVar44;
   undefined8 uVar45;
   undefined1 auVar46[16];
   float fVar47;
   float fVar48;
   float fVar49;
   float fVar50;
   float fVar51;
   float fVar52;
   float fVar53;
   undefined1 local_3cd8[8];
   undefined8 uStack_3cd0;
   undefined1 local_3cc8[8];
   undefined8 uStack_3cc0;
   undefined1 local_3cb8[8];
   undefined8 uStack_3cb0;
   undefined1 local_3ca8[8];
   undefined8 uStack_3ca0;
   float local_3c48[4];
   undefined8 local_3c38;
   undefined8 uStack_3c30;
   float local_3c28;
   float fStack_3c24;
   float fStack_3c20;
   float fStack_3c1c;
   float local_3bf8[3822];
   long local_40;
   uVar3 = *(uint*)( param_3 + 0x30 );
   uVar8 = (ulong)uVar3;
   __s = param_4 + 100;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(uint*)( param_4 + 0x60 ) = uVar3;
   memset(__s, 0, uVar8 * 0xc);
   uVar14 = _LC7;
   fVar33 = *(float*)( param_3 + 0x14 );
   fVar44 = *(float*)( param_3 + 0x10 );
   if ((float)( _LC6 & (uint)fVar44 ) <= (float)( (uint)fVar33 & _LC6 )) {
      fVar44 = *(float*)( param_3 + 0x18 );
      auVar22._8_4_ = (uint)fVar33 ^ _LC7;
      auVar22._4_4_ = (uint)fVar33 ^ _LC7;
      auVar22._0_4_ = fVar44;
      auVar22._12_4_ = 0;
      fVar33 = SQRT(fVar44 * fVar44 + fVar33 * fVar33);
      auVar28._4_4_ = fVar33;
      auVar28._0_4_ = fVar33;
      auVar28._8_4_ = fVar33;
      auVar28._12_4_ = fVar33;
      auVar22 = divps(auVar22 << 0x20, auVar28);
   }
 else {
      fVar33 = *(float*)( param_3 + 0x18 );
      auVar21._12_4_ = (uint)fVar44 ^ _LC7;
      auVar21._8_4_ = (uint)fVar44 ^ _LC7;
      auVar21._4_4_ = 0;
      auVar21._0_4_ = fVar33;
      auVar27._0_4_ = SQRT(fVar33 * fVar33 + fVar44 * fVar44);
      auVar27._4_4_ = auVar27._0_4_;
      auVar27._8_4_ = auVar27._0_4_;
      auVar27._12_4_ = auVar27._0_4_;
      auVar22 = divps(auVar21, auVar27);
   }

   *(undefined1(*) [16])( param_4 + 0x40 ) = auVar22;
   fVar33 = *(float*)( param_3 + 0x10 );
   fVar44 = *(float*)( param_3 + 0x18 );
   puVar4 = *(undefined8**)( param_1 + 0x48 );
   BVar1 = param_1[0x78];
   puVar5 = *(undefined8**)( param_2 + 0x48 );
   BVar2 = param_2[0x78];
   fVar25 = auVar22._4_4_ * fVar33 - *(float*)( param_3 + 0x14 ) * auVar22._0_4_;
   *(float*)( param_4 + 0x50 ) = auVar22._8_4_ * *(float*)( param_3 + 0x14 ) - fVar44 * auVar22._4_4_;
   *(float*)( param_4 + 0x54 ) = auVar22._0_4_ * fVar44 - fVar33 * auVar22._8_4_;
   *(float*)( param_4 + 0x58 ) = fVar25;
   *(float*)( param_4 + 0x5c ) = fVar25;
   if (BVar1 == (Body)0x0) {
      *(undefined1(*) [16])( param_4 + 0x10 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])param_4 = (undefined1[16])0x0;
      if (BVar2 == (Body)0x0) {
         *(undefined1(*) [16])( param_4 + 0x30 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( param_4 + 0x20 ) = (undefined1[16])0x0;
         LAB_00100c86:fVar33 = 0.0;
         _local_3ca8 = (undefined1[16])0x0;
         _local_3cc8 = (undefined1[16])0x0;
         _local_3cd8 = (undefined1[16])0x0;
      }
 else {
         uVar45 = puVar5[1];
         *(undefined8*)( param_4 + 0x20 ) = *puVar5;
         *(undefined8*)( param_4 + 0x28 ) = uVar45;
         uVar45 = puVar5[3];
         *(undefined8*)( param_4 + 0x30 ) = puVar5[2];
         *(undefined8*)( param_4 + 0x38 ) = uVar45;
         LAB_00100c47:fVar33 = 0.0;
         _local_3ca8 = (undefined1[16])0x0;
         _local_3cc8 = (undefined1[16])0x0;
         _local_3cd8 = (undefined1[16])0x0;
         if (BVar2 == (Body)0x2) goto LAB_0010058e;
      }

      LAB_00100c66:local_3c28 = 0.0;
      fStack_3c24 = 0.0;
      fStack_3c20 = 0.0;
      fStack_3c1c = 0.0;
      fVar44 = 0.0;
      _local_3cb8 = (undefined1[16])0x0;
      for (int i = 0; i < 4; i++) {
         local_3c48[i] = 0;
      }

   }
 else {
      uVar45 = puVar4[1];
      *(undefined8*)param_4 = *puVar4;
      *(undefined8*)( param_4 + 8 ) = uVar45;
      uVar45 = puVar4[3];
      *(undefined8*)( param_4 + 0x10 ) = puVar4[2];
      *(undefined8*)( param_4 + 0x18 ) = uVar45;
      if (BVar2 == (Body)0x0) {
         *(undefined1(*) [16])( param_4 + 0x30 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( param_4 + 0x20 ) = (undefined1[16])0x0;
         if (BVar1 != (Body)0x2) goto LAB_00100c86;
      }
 else {
         uVar45 = puVar5[1];
         *(undefined8*)( param_4 + 0x20 ) = *puVar5;
         *(undefined8*)( param_4 + 0x28 ) = uVar45;
         uVar45 = puVar5[3];
         *(undefined8*)( param_4 + 0x30 ) = puVar5[2];
         *(undefined8*)( param_4 + 0x38 ) = uVar45;
         if (BVar1 != (Body)0x2) goto LAB_00100c47;
      }

      fVar33 = *(float*)( puVar4 + 0xb );
      MotionProperties::GetInverseInertiaForRotation((Mat44*)local_3c48);
      local_3cd8._4_4_ = local_3c48[1];
      local_3cd8._0_4_ = local_3c48[0];
      uStack_3cd0._4_4_ = local_3c48[3];
      uStack_3cd0._0_4_ = local_3c48[2];
      uStack_3cc0 = uStack_3c30;
      local_3cc8 = (undefined1[8])local_3c38;
      local_3ca8._4_4_ = fStack_3c24;
      local_3ca8._0_4_ = local_3c28;
      uStack_3ca0._4_4_ = fStack_3c1c;
      uStack_3ca0._0_4_ = fStack_3c20;
      if (BVar2 != (Body)0x2) goto LAB_00100c66;
      LAB_0010058e:fVar44 = *(float*)( puVar5 + 0xb );
      MotionProperties::GetInverseInertiaForRotation((Mat44*)local_3c48);
      uStack_3cb0 = uStack_3c30;
      local_3cb8 = (undefined1[8])local_3c38;
   }

   fVar25 = *(float*)param_1;
   fVar40 = *(float*)( param_1 + 4 );
   fVar42 = *(float*)( param_1 + 8 );
   fVar43 = *(float*)param_3;
   fVar48 = *(float*)( param_3 + 4 );
   fVar49 = *(float*)( param_3 + 8 );
   fVar50 = *(float*)param_2;
   fVar51 = *(float*)( param_2 + 4 );
   fVar16 = *(float*)( param_2 + 8 );
   fVar47 = *(float*)param_3;
   fVar52 = *(float*)( param_3 + 4 );
   fVar53 = *(float*)( param_3 + 8 );
   if (uVar3 == 0) {
      LAB_00100ccf:if ((int)param_8 < 1) goto LAB_00100edd;
   }
 else {
      fVar19 = *(float*)( param_3 + 0x10 );
      fVar20 = *(float*)( param_3 + 0x14 );
      fVar11 = *(float*)( param_3 + 0x18 );
      pfVar6 = local_3c48;
      pCVar12 = param_3;
      do {
         fVar15 = *(float*)( pCVar12 + 0x40 );
         fVar23 = *(float*)( pCVar12 + 0x44 );
         fVar24 = *(float*)( pCVar12 + 0x48 );
         fVar26 = *(float*)( pCVar12 + 0x450 );
         fVar29 = *(float*)( pCVar12 + 0x454 );
         fVar31 = *(float*)( pCVar12 + 0x458 );
         pfVar6[0x11] = 0.0;
         fVar32 = ( fVar15 + fVar26 ) * __LC8;
         fVar36 = ( fVar23 + fVar29 ) * _UNK_00101274;
         fVar37 = ( fVar24 + fVar31 ) * _UNK_00101278;
         fVar38 = fVar32 - ( fVar25 - fVar43 );
         fVar39 = fVar36 - ( fVar40 - fVar48 );
         fVar41 = fVar37 - ( fVar42 - fVar49 );
         fVar32 = fVar32 - ( fVar50 - fVar47 );
         fVar36 = fVar36 - ( fVar51 - fVar52 );
         fVar37 = fVar37 - ( fVar16 - fVar53 );
         fVar26 = fVar38 * fVar20 - fVar39 * fVar19;
         fVar29 = fVar39 * fVar11 - fVar41 * fVar20;
         fVar31 = fVar41 * fVar19 - fVar38 * fVar11;
         *pfVar6 = fVar29;
         pfVar6[1] = fVar31;
         pfVar6[2] = fVar26;
         pfVar6[3] = fVar26;
         fVar15 = fVar32 * fVar20 - fVar36 * fVar19;
         fVar23 = fVar36 * fVar11 - fVar37 * fVar20;
         fVar24 = fVar37 * fVar19 - fVar32 * fVar11;
         pfVar6[4] = fVar23;
         pfVar6[5] = fVar24;
         pfVar6[6] = fVar15;
         pfVar6[7] = fVar15;
         pfVar6[8] = fVar31 * (float)local_3cc8._0_4_ + fVar29 * (float)local_3cd8._0_4_ + fVar26 * (float)local_3ca8._0_4_;
         pfVar6[9] = fVar31 * (float)local_3cc8._4_4_ + fVar29 * (float)local_3cd8._4_4_ + fVar26 * (float)local_3ca8._4_4_;
         pfVar6[10] = fVar31 * (float)uStack_3cc0 + fVar29 * (float)uStack_3cd0 + fVar26 * (float)uStack_3ca0;
         pfVar6[0xb] = fVar31 * uStack_3cc0._4_4_ + fVar29 * uStack_3cd0._4_4_ + fVar26 * uStack_3ca0._4_4_;
         pfVar6[0xc] = fVar24 * (float)local_3cb8._0_4_ + fVar23 * local_3c48[0] + fVar15 * local_3c28;
         pfVar6[0xd] = fVar24 * (float)local_3cb8._4_4_ + fVar23 * local_3c48[1] + fVar15 * fStack_3c24;
         pfVar6[0xe] = fVar24 * (float)uStack_3cb0 + fVar23 * local_3c48[2] + fVar15 * fStack_3c20;
         pfVar6[0xf] = fVar24 * uStack_3cb0._4_4_ + fVar23 * local_3c48[3] + fVar15 * fStack_3c1c;
         pfVar6[0x10] = _LC0 / ( pfVar6[10] * pfVar6[2] + fVar31 * pfVar6[9] + fVar29 * pfVar6[8] + 0.0 + fVar33 + fVar44 + fVar24 * pfVar6[0xd] + fVar23 * pfVar6[0xc] + 0.0 + pfVar6[0xe] * pfVar6[6] );
         if (( 0.0 < param_6 ) && ( fVar15 = ( ( ( ( *(float*)( param_4 + 0x30 ) * fVar36 - *(float*)( param_4 + 0x34 ) * fVar32 ) + *(float*)( param_4 + 0x28 ) ) - *(float*)( param_4 + 8 ) ) - ( *(float*)( param_4 + 0x10 ) * fVar39 - *(float*)( param_4 + 0x14 ) * fVar38 ) ) * *(float*)( param_3 + 0x18 ) + ( ( ( ( *(float*)( param_4 + 0x38 ) * fVar32 - *(float*)( param_4 + 0x30 ) * fVar37 ) + *(float*)( param_4 + 0x24 ) ) - *(float*)( param_4 + 4 ) ) - ( *(float*)( param_4 + 0x18 ) * fVar38 - *(float*)( param_4 + 0x10 ) * fVar41 ) ) * *(float*)( param_3 + 0x14 ) + *(float*)( param_3 + 0x10 ) * ( ( ( ( *(float*)( param_4 + 0x34 ) * fVar37 - *(float*)( param_4 + 0x38 ) * fVar36 ) + *(float*)( param_4 + 0x20 ) ) - *(float*)param_4 ) - ( *(float*)( param_4 + 0x14 ) * fVar41 - *(float*)( param_4 + 0x18 ) * fVar39 ) ) + 0.0 ),fVar15 < (float)( (uint)param_7 ^ uVar14 )) {
            pfVar6[0x11] = fVar15 * param_6;
         }

         if (0.0 < param_5) {
            fVar15 = *(float*)( param_4 + 0x40 );
            fVar23 = *(float*)( param_4 + 0x44 );
            fVar24 = *(float*)( param_4 + 0x48 );
            pfVar6[0x25] = 0.0;
            fVar29 = fVar38 * fVar23 - fVar39 * fVar15;
            fVar31 = fVar39 * fVar24 - fVar41 * fVar23;
            fVar30 = fVar41 * fVar15 - fVar38 * fVar24;
            fVar26 = fVar23 * fVar32 - fVar15 * fVar36;
            fVar23 = fVar24 * fVar36 - fVar23 * fVar37;
            fVar15 = fVar15 * fVar37 - fVar24 * fVar32;
            pfVar6[0x14] = fVar31;
            pfVar6[0x15] = fVar30;
            pfVar6[0x16] = fVar29;
            pfVar6[0x17] = fVar29;
            pfVar6[0x18] = fVar23;
            pfVar6[0x19] = fVar15;
            pfVar6[0x1a] = fVar26;
            pfVar6[0x1b] = fVar26;
            pfVar6[0x1c] = fVar30 * (float)local_3cc8._0_4_ + fVar31 * (float)local_3cd8._0_4_ + fVar29 * (float)local_3ca8._0_4_;
            pfVar6[0x1d] = fVar30 * (float)local_3cc8._4_4_ + fVar31 * (float)local_3cd8._4_4_ + fVar29 * (float)local_3ca8._4_4_;
            pfVar6[0x1e] = fVar30 * (float)uStack_3cc0 + fVar31 * (float)uStack_3cd0 + fVar29 * (float)uStack_3ca0;
            pfVar6[0x1f] = fVar30 * uStack_3cc0._4_4_ + fVar31 * uStack_3cd0._4_4_ + fVar29 * uStack_3ca0._4_4_;
            pfVar6[0x20] = fVar15 * (float)local_3cb8._0_4_ + fVar23 * local_3c48[0] + fVar26 * local_3c28;
            pfVar6[0x21] = fVar15 * (float)local_3cb8._4_4_ + fVar23 * local_3c48[1] + fVar26 * fStack_3c24;
            pfVar6[0x22] = fVar15 * (float)uStack_3cb0 + fVar23 * local_3c48[2] + fVar26 * fStack_3c20;
            pfVar6[0x23] = fVar15 * uStack_3cb0._4_4_ + fVar23 * local_3c48[3] + fVar26 * fStack_3c1c;
            pfVar6[0x24] = _LC0 / ( pfVar6[0x1e] * pfVar6[0x16] + fVar30 * pfVar6[0x1d] + fVar31 * pfVar6[0x1c] + 0.0 + fVar33 + fVar44 + fVar15 * pfVar6[0x21] + fVar23 * pfVar6[0x20] + 0.0 + pfVar6[0x22] * pfVar6[0x1a] );
            fVar15 = *(float*)( param_4 + 0x50 );
            fVar23 = *(float*)( param_4 + 0x54 );
            fVar24 = *(float*)( param_4 + 0x58 );
            fVar26 = fVar23 * fVar32 - fVar36 * fVar15;
            fVar29 = fVar24 * fVar36 - fVar37 * fVar23;
            fVar31 = fVar15 * fVar37 - fVar32 * fVar24;
            fVar32 = fVar38 * fVar23 - fVar39 * fVar15;
            fVar23 = fVar39 * fVar24 - fVar41 * fVar23;
            fVar15 = fVar41 * fVar15 - fVar38 * fVar24;
            pfVar6[0x2c] = fVar29;
            pfVar6[0x2d] = fVar31;
            pfVar6[0x2e] = fVar26;
            pfVar6[0x2f] = fVar26;
            pfVar6[0x28] = fVar23;
            pfVar6[0x29] = fVar15;
            pfVar6[0x2a] = fVar32;
            pfVar6[0x2b] = fVar32;
            pfVar6[0x30] = fVar15 * (float)local_3cc8._0_4_ + fVar23 * (float)local_3cd8._0_4_ + fVar32 * (float)local_3ca8._0_4_;
            pfVar6[0x31] = fVar15 * (float)local_3cc8._4_4_ + fVar23 * (float)local_3cd8._4_4_ + fVar32 * (float)local_3ca8._4_4_;
            pfVar6[0x32] = fVar15 * (float)uStack_3cc0 + fVar23 * (float)uStack_3cd0 + fVar32 * (float)uStack_3ca0;
            pfVar6[0x33] = fVar15 * uStack_3cc0._4_4_ + fVar23 * uStack_3cd0._4_4_ + fVar32 * uStack_3ca0._4_4_;
            pfVar6[0x34] = fVar26 * local_3c28 + fVar31 * (float)local_3cb8._0_4_ + fVar29 * local_3c48[0];
            pfVar6[0x35] = fVar26 * fStack_3c24 + fVar31 * (float)local_3cb8._4_4_ + fVar29 * local_3c48[1];
            pfVar6[0x36] = fVar26 * fStack_3c20 + fVar31 * (float)uStack_3cb0 + fVar29 * local_3c48[2];
            pfVar6[0x37] = fVar26 * fStack_3c1c + fVar31 * uStack_3cb0._4_4_ + fVar29 * local_3c48[3];
            pfVar6[0x39] = 0.0;
            pfVar6[0x38] = _LC0 / ( pfVar6[0x32] * pfVar6[0x2a] + fVar15 * pfVar6[0x31] + fVar23 * pfVar6[0x30] + 0.0 + fVar33 + fVar44 + fVar31 * pfVar6[0x35] + fVar29 * pfVar6[0x34] + 0.0 + pfVar6[0x36] * pfVar6[0x2e] );
         }

         pCVar12 = pCVar12 + 0x10;
         pfVar6 = pfVar6 + 0x3c;
      }
 while ( param_3 + uVar8 * 0x10 != pCVar12 );
      if (( 0.0 < param_5 ) || ( uVar3 != 1 )) goto LAB_00100ccf;
      param_8 = 1;
   }

   uVar14 = 0;
   do {
      pfVar6 = local_3c48;
      pCVar13 = __s;
      if (( uVar14 == 0 ) || ( param_5 <= 0.0 )) {
         if (uVar3 != 0) goto LAB_00100dd3;
      }
 else if (uVar3 != 0) {
         fVar48 = *(float*)param_4;
         fVar49 = *(float*)( param_4 + 4 );
         fVar50 = *(float*)( param_4 + 8 );
         fVar51 = *(float*)( param_4 + 0xc );
         fVar16 = *(float*)( param_4 + 0x10 );
         fVar47 = *(float*)( param_4 + 0x14 );
         fVar52 = *(float*)( param_4 + 0x18 );
         fVar53 = *(float*)( param_4 + 0x1c );
         fVar25 = *(float*)( param_4 + 0x30 );
         fVar40 = *(float*)( param_4 + 0x34 );
         fVar42 = *(float*)( param_4 + 0x38 );
         fVar43 = *(float*)( param_4 + 0x3c );
         pfVar7 = local_3bf8;
         pCVar10 = __s;
         do {
            fVar15 = fVar48 - *(float*)( param_4 + 0x20 );
            fVar23 = fVar49 - *(float*)( param_4 + 0x24 );
            fVar24 = fVar50 - *(float*)( param_4 + 0x28 );
            fVar19 = (float)*(undefined8*)( param_4 + 0x10 );
            fVar29 = (float)( ( ulong ) * (undefined8*)( param_4 + 0x10 ) >> 0x20 );
            fVar20 = (float)*(undefined8*)( param_4 + 0x30 );
            fVar11 = (float)( ( ulong ) * (undefined8*)( param_4 + 0x30 ) >> 0x20 );
            fVar26 = ( ( ( *(float*)( param_4 + 0x48 ) * fVar24 + *(float*)( param_4 + 0x44 ) * fVar23 + *(float*)( param_4 + 0x40 ) * fVar15 + 0.0 + pfVar7[2] * *(float*)( param_4 + 0x18 ) + pfVar7[1] * fVar29 + *pfVar7 * fVar19 + 0.0 ) - ( fVar11 * pfVar7[5] + pfVar7[4] * fVar20 + 0.0 + pfVar7[6] * *(float*)( param_4 + 0x38 ) ) ) - pfVar7[0x11] ) * pfVar7[0x10] + *(float*)( pCVar10 + 4 );
            fVar31 = param_5 * *(float*)pCVar10;
            fVar19 = ( ( ( fVar24 * *(float*)( param_4 + 0x58 ) + fVar23 * *(float*)( param_4 + 0x54 ) + fVar15 * *(float*)( param_4 + 0x50 ) + 0.0 + pfVar7[0x16] * *(float*)( param_4 + 0x18 ) + fVar29 * pfVar7[0x15] + pfVar7[0x14] * fVar19 + 0.0 ) - ( pfVar7[0x1a] * *(float*)( param_4 + 0x38 ) + fVar11 * pfVar7[0x19] + pfVar7[0x18] * fVar20 + 0.0 ) ) - pfVar7[0x25] ) * pfVar7[0x24] + *(float*)( pCVar10 + 8 );
            uVar45 = CONCAT44(fVar19, fVar26);
            fVar20 = fVar19 * fVar19 + fVar26 * fVar26;
            if (fVar31 * fVar31 < fVar20) {
               fVar31 = fVar31 / SQRT(fVar20);
               uVar45 = CONCAT44(fVar19 * fVar31, fVar26 * fVar31);
            }

            fVar19 = pfVar7[8];
            fVar20 = pfVar7[9];
            fVar11 = pfVar7[10];
            fVar15 = pfVar7[0xb];
            pCVar9 = pCVar10 + 0xc;
            fVar17 = (float)uVar45 - *(float*)( pCVar10 + 4 );
            fVar39 = fVar33 * fVar17;
            fVar23 = pfVar7[0xc];
            fVar24 = pfVar7[0xd];
            fVar26 = pfVar7[0xe];
            fVar29 = pfVar7[0xf];
            fVar18 = fVar17 * fVar44;
            fVar34 = (float)( (ulong)uVar45 >> 0x20 ) - *(float*)( pCVar10 + 8 );
            fVar31 = pfVar7[0x1c];
            fVar32 = pfVar7[0x1d];
            fVar36 = pfVar7[0x1e];
            fVar37 = pfVar7[0x1f];
            fVar38 = fVar33 * fVar34;
            fVar48 = ( fVar48 - fVar39 * *(float*)( param_4 + 0x40 ) ) - fVar38 * *(float*)( param_4 + 0x50 );
            fVar49 = ( fVar49 - fVar39 * *(float*)( param_4 + 0x44 ) ) - fVar38 * *(float*)( param_4 + 0x54 );
            fVar50 = ( fVar50 - fVar39 * *(float*)( param_4 + 0x48 ) ) - fVar38 * *(float*)( param_4 + 0x58 );
            fVar51 = ( fVar51 - fVar39 * *(float*)( param_4 + 0x4c ) ) - fVar38 * *(float*)( param_4 + 0x5c );
            fVar35 = fVar34 * fVar44;
            fVar38 = pfVar7[0x20];
            fVar39 = pfVar7[0x21];
            fVar41 = pfVar7[0x22];
            fVar30 = pfVar7[0x23];
            *(float*)param_4 = fVar48;
            *(float*)( param_4 + 4 ) = fVar49;
            *(float*)( param_4 + 8 ) = fVar50;
            *(float*)( param_4 + 0xc ) = fVar51;
            fVar16 = ( fVar16 - fVar19 * fVar17 ) - fVar31 * fVar34;
            fVar47 = ( fVar47 - fVar20 * fVar17 ) - fVar32 * fVar34;
            fVar52 = ( fVar52 - fVar11 * fVar17 ) - fVar36 * fVar34;
            fVar53 = ( fVar53 - fVar15 * fVar17 ) - fVar37 * fVar34;
            fVar25 = fVar34 * fVar38 + fVar17 * fVar23 + fVar25;
            fVar40 = fVar34 * fVar39 + fVar17 * fVar24 + fVar40;
            fVar42 = fVar34 * fVar41 + fVar17 * fVar26 + fVar42;
            fVar43 = fVar34 * fVar30 + fVar17 * fVar29 + fVar43;
            *(float*)( param_4 + 0x10 ) = fVar16;
            *(float*)( param_4 + 0x14 ) = fVar47;
            *(float*)( param_4 + 0x18 ) = fVar52;
            *(float*)( param_4 + 0x1c ) = fVar53;
            *(float*)( param_4 + 0x30 ) = fVar25;
            *(float*)( param_4 + 0x34 ) = fVar40;
            *(float*)( param_4 + 0x38 ) = fVar42;
            *(float*)( param_4 + 0x3c ) = fVar43;
            for (int i = 0; i < 4; i++) {
               *(float*)( param_4 + ( 4*i + 32 ) ) = fVar18 * *(float*)( param_4 + ( 4*i + 64 ) ) + *(float*)( param_4 + ( 4*i + 32 ) ) + fVar35 * *(float*)( param_4 + ( 4*i + 80 ) );
            }

            *(undefined8*)( pCVar10 + 4 ) = uVar45;
            pfVar7 = pfVar7 + 0x3c;
            pCVar10 = pCVar9;
         }
 while ( __s + uVar8 * 0xc != pCVar9 );
         LAB_00100dd3:do {
            fVar40 = (float)*(undefined8*)( param_3 + 0x10 );
            fVar42 = (float)( ( ulong ) * (undefined8*)( param_3 + 0x10 ) >> 0x20 );
            fVar43 = (float)*(undefined8*)( param_3 + 0x18 );
            fVar25 = ( ( ( ( *(float*)( param_4 + 8 ) - *(float*)( param_4 + 0x28 ) ) * fVar43 + ( *(float*)( param_4 + 4 ) - *(float*)( param_4 + 0x24 ) ) * fVar42 + ( *(float*)param_4 - *(float*)( param_4 + 0x20 ) ) * fVar40 + 0.0 + pfVar6[2] * *(float*)( param_4 + 0x18 ) + (float)( ( ulong ) * (undefined8*)( param_4 + 0x10 ) >> 0x20 ) * pfVar6[1] + (float)*(undefined8*)( param_4 + 0x10 ) * *pfVar6 + 0.0 ) - ( pfVar6[6] * *(float*)( param_4 + 0x38 ) + (float)( ( ulong ) * (undefined8*)( param_4 + 0x30 ) >> 0x20 ) * pfVar6[5] + (float)*(undefined8*)( param_4 + 0x30 ) * pfVar6[4] + 0.0 ) ) - pfVar6[0x11] ) * pfVar6[0x10] + *(float*)pCVar13;
            if (0.0 <= fVar25) {
               if (_LC5 < fVar25) {
                  fVar25 = _LC5;
               }

            }
 else {
               fVar25 = 0.0;
            }

            fVar48 = pfVar6[8];
            fVar49 = pfVar6[9];
            fVar50 = pfVar6[10];
            fVar51 = pfVar6[0xb];
            pfVar7 = pfVar6 + 0x3c;
            fVar16 = fVar25 - *(float*)pCVar13;
            fVar47 = fVar33 * fVar16;
            uStack_3cd0._4_4_ = (float)( ( ulong ) * (undefined8*)( param_3 + 0x18 ) >> 0x20 );
            *(float*)param_4 = *(float*)param_4 - fVar47 * fVar40;
            *(float*)( param_4 + 4 ) = *(float*)( param_4 + 4 ) - fVar47 * fVar42;
            *(float*)( param_4 + 8 ) = *(float*)( param_4 + 8 ) - fVar47 * fVar43;
            *(float*)( param_4 + 0xc ) = *(float*)( param_4 + 0xc ) - fVar47 * uStack_3cd0._4_4_;
            fVar47 = fVar16 * fVar44;
            auVar46._0_4_ = fVar16 * pfVar6[0xc] + *(float*)( param_4 + 0x30 );
            auVar46._4_4_ = fVar16 * pfVar6[0xd] + *(float*)( param_4 + 0x34 );
            auVar46._8_4_ = fVar16 * pfVar6[0xe] + *(float*)( param_4 + 0x38 );
            auVar46._12_4_ = fVar16 * pfVar6[0xf] + *(float*)( param_4 + 0x3c );
            *(undefined1(*) [16])( param_4 + 0x30 ) = auVar46;
            *(float*)( param_4 + 0x10 ) = *(float*)( param_4 + 0x10 ) - fVar48 * fVar16;
            *(float*)( param_4 + 0x14 ) = *(float*)( param_4 + 0x14 ) - fVar49 * fVar16;
            *(float*)( param_4 + 0x18 ) = *(float*)( param_4 + 0x18 ) - fVar50 * fVar16;
            *(float*)( param_4 + 0x1c ) = *(float*)( param_4 + 0x1c ) - fVar51 * fVar16;
            *(float*)( param_4 + 0x20 ) = fVar47 * fVar40 + *(float*)( param_4 + 0x20 );
            *(float*)( param_4 + 0x24 ) = fVar47 * fVar42 + *(float*)( param_4 + 0x24 );
            *(float*)( param_4 + 0x28 ) = fVar47 * fVar43 + *(float*)( param_4 + 0x28 );
            *(float*)( param_4 + 0x2c ) = fVar47 * uStack_3cd0._4_4_ + *(float*)( param_4 + 0x2c );
            *(float*)pCVar13 = fVar25;
            pfVar6 = pfVar7;
            pCVar13 = pCVar13 + 0xc;
         }
 while ( pfVar7 != local_3c48 + uVar8 * 0x3c );
      }

      uVar14 = uVar14 + 1;
   }
 while ( uVar14 != param_8 );
   LAB_00100edd:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* JPH::EstimateCollisionResponse(JPH::Body const&, JPH::Body const&, JPH::ContactManifold const&,
   JPH::CollisionEstimationResult&, float, float, float, unsigned int) */void JPH::_GLOBAL__sub_I_EstimateCollisionResponse(void) {
   if (DVec3::cTrue == '\0') {
      DVec3::cTrue = '\x01';
      DVec3::cTrue = _LC12;
   }

   return;
}


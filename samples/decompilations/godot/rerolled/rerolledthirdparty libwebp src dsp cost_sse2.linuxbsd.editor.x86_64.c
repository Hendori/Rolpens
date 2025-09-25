uint GetResidualCost_SSE2(int param_1, int *param_2) {
   byte bVar1;
   int iVar2;
   short *psVar3;
   byte bVar4;
   byte bVar5;
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
   short sVar19;
   short sVar20;
   short sVar21;
   short sVar22;
   short sVar23;
   short sVar24;
   short sVar25;
   short sVar26;
   short sVar27;
   short sVar28;
   short sVar29;
   short sVar30;
   short sVar31;
   short sVar32;
   short sVar33;
   short sVar34;
   short sVar35;
   short sVar36;
   short sVar37;
   short sVar38;
   short sVar39;
   short sVar40;
   short sVar41;
   short sVar42;
   short sVar43;
   short sVar44;
   short sVar45;
   short sVar46;
   short sVar47;
   short sVar48;
   short sVar49;
   short sVar50;
   ulong uVar51;
   long lVar52;
   long lVar53;
   uint uVar54;
   uint uVar55;
   long lVar56;
   int iVar57;
   long in_FS_OFFSET;
   undefined1 auVar58[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   byte local_48[4];
   byte bStack_44;
   byte bStack_43;
   byte bStack_42;
   byte bStack_41;
   byte bStack_40;
   byte bStack_3f;
   byte bStack_3e;
   byte bStack_3d;
   byte bStack_3c;
   byte bStack_3b;
   byte bStack_3a;
   byte bStack_39;
   byte local_38[4];
   byte bStack_34;
   byte bStack_33;
   byte bStack_32;
   byte bStack_31;
   byte bStack_30;
   byte bStack_2f;
   byte bStack_2e;
   byte bStack_2d;
   byte bStack_2c;
   byte bStack_2b;
   byte bStack_2a;
   byte bStack_29;
   long local_20;
   iVar57 = *param_2;
   lVar56 = (long)iVar57;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   bVar1 = *(byte*)( lVar56 * 0x21 + *(long*)( param_2 + 6 ) + (long)param_1 * 0xb );
   uVar55 = 0;
   if (param_1 == 0) {
      uVar55 = ( uint ) * (ushort*)( &VP8EntropyCost + ( ulong )(~(uint)bVar1 & 0xff) * 2 );
   }

   iVar2 = param_2[1];
   if (iVar2 < 0) {
      uVar55 = ( uint ) * (ushort*)( &VP8EntropyCost + (ulong)bVar1 * 2 );
   }
 else {
      psVar3 = *(short**)( param_2 + 2 );
      sVar35 = *psVar3;
      sVar36 = psVar3[1];
      sVar37 = psVar3[2];
      sVar38 = psVar3[3];
      sVar39 = psVar3[4];
      sVar40 = psVar3[5];
      sVar41 = psVar3[6];
      sVar42 = psVar3[7];
      sVar43 = psVar3[8];
      sVar44 = psVar3[9];
      sVar45 = psVar3[10];
      sVar46 = psVar3[0xb];
      sVar47 = psVar3[0xc];
      sVar48 = psVar3[0xd];
      sVar49 = psVar3[0xe];
      sVar50 = psVar3[0xf];
      lVar53 = *(long*)( *(long*)( param_2 + 10 ) + (long)param_1 * 8 + lVar56 * 0x18 );
      sVar19 = -sVar35;
      sVar20 = -sVar36;
      sVar21 = -sVar37;
      sVar22 = -sVar38;
      sVar23 = -sVar39;
      sVar24 = -sVar40;
      sVar25 = -sVar41;
      sVar26 = -sVar42;
      sVar27 = -sVar43;
      sVar28 = -sVar44;
      sVar29 = -sVar45;
      sVar30 = -sVar46;
      sVar31 = -sVar47;
      sVar32 = -sVar48;
      sVar33 = -sVar49;
      sVar34 = -sVar50;
      local_68._0_2_ = ( ushort )(sVar35 < sVar19) * sVar19 | ( ushort )(sVar35 >= sVar19) * sVar35;
      local_68._2_2_ = ( ushort )(sVar36 < sVar20) * sVar20 | ( ushort )(sVar36 >= sVar20) * sVar36;
      local_68._4_2_ = ( ushort )(sVar37 < sVar21) * sVar21 | ( ushort )(sVar37 >= sVar21) * sVar37;
      local_68._6_2_ = ( ushort )(sVar38 < sVar22) * sVar22 | ( ushort )(sVar38 >= sVar22) * sVar38;
      local_68._8_2_ = ( ushort )(sVar39 < sVar23) * sVar23 | ( ushort )(sVar39 >= sVar23) * sVar39;
      local_68._10_2_ = ( ushort )(sVar40 < sVar24) * sVar24 | ( ushort )(sVar40 >= sVar24) * sVar40;
      local_68._12_2_ = ( ushort )(sVar41 < sVar25) * sVar25 | ( ushort )(sVar41 >= sVar25) * sVar41;
      local_68._14_2_ = ( ushort )(sVar42 < sVar26) * sVar26 | ( ushort )(sVar42 >= sVar26) * sVar42;
      local_58._0_2_ = ( ushort )(sVar43 < sVar27) * sVar27 | ( ushort )(sVar43 >= sVar27) * sVar43;
      local_58._2_2_ = ( ushort )(sVar44 < sVar28) * sVar28 | ( ushort )(sVar44 >= sVar28) * sVar44;
      local_58._4_2_ = ( ushort )(sVar45 < sVar29) * sVar29 | ( ushort )(sVar45 >= sVar29) * sVar45;
      local_58._6_2_ = ( ushort )(sVar46 < sVar30) * sVar30 | ( ushort )(sVar46 >= sVar30) * sVar46;
      local_58._8_2_ = ( ushort )(sVar47 < sVar31) * sVar31 | ( ushort )(sVar47 >= sVar31) * sVar47;
      local_58._10_2_ = ( ushort )(sVar48 < sVar32) * sVar32 | ( ushort )(sVar48 >= sVar32) * sVar48;
      local_58._12_2_ = ( ushort )(sVar49 < sVar33) * sVar33 | ( ushort )(sVar49 >= sVar33) * sVar49;
      local_58._14_2_ = ( ushort )(sVar50 < sVar34) * sVar34 | ( ushort )(sVar50 >= sVar34) * sVar50;
      auVar58 = packsswb(local_68, local_58);
      bVar1 = auVar58[0];
      bVar4 = auVar58[1];
      bVar5 = auVar58[2];
      bVar6 = auVar58[3];
      bVar7 = auVar58[4];
      bVar8 = auVar58[5];
      bVar9 = auVar58[6];
      bVar10 = auVar58[7];
      bVar11 = auVar58[8];
      bVar12 = auVar58[9];
      bVar13 = auVar58[10];
      bVar14 = auVar58[0xb];
      bVar15 = auVar58[0xc];
      bVar16 = auVar58[0xd];
      bVar17 = auVar58[0xe];
      bVar18 = auVar58[0xf];
      local_38[0] = ( bVar1 < _LC0 ) * bVar1 | ( bVar1 >= _LC0 ) * _LC0;
      local_38[1] = ( bVar4 < UNK_00100251 ) * bVar4 | ( bVar4 >= UNK_00100251 ) * UNK_00100251;
      local_38[2] = ( bVar5 < UNK_00100252 ) * bVar5 | ( bVar5 >= UNK_00100252 ) * UNK_00100252;
      local_38[3] = ( bVar6 < UNK_00100253 ) * bVar6 | ( bVar6 >= UNK_00100253 ) * UNK_00100253;
      bStack_34 = ( bVar7 < UNK_00100254 ) * bVar7 | ( bVar7 >= UNK_00100254 ) * UNK_00100254;
      bStack_33 = ( bVar8 < UNK_00100255 ) * bVar8 | ( bVar8 >= UNK_00100255 ) * UNK_00100255;
      bStack_32 = ( bVar9 < UNK_00100256 ) * bVar9 | ( bVar9 >= UNK_00100256 ) * UNK_00100256;
      bStack_31 = ( bVar10 < UNK_00100257 ) * bVar10 | ( bVar10 >= UNK_00100257 ) * UNK_00100257;
      bStack_30 = ( bVar11 < UNK_00100258 ) * bVar11 | ( bVar11 >= UNK_00100258 ) * UNK_00100258;
      bStack_2f = ( bVar12 < UNK_00100259 ) * bVar12 | ( bVar12 >= UNK_00100259 ) * UNK_00100259;
      bStack_2e = ( bVar13 < UNK_0010025a ) * bVar13 | ( bVar13 >= UNK_0010025a ) * UNK_0010025a;
      bStack_2d = ( bVar14 < UNK_0010025b ) * bVar14 | ( bVar14 >= UNK_0010025b ) * UNK_0010025b;
      bStack_2c = ( bVar15 < UNK_0010025c ) * bVar15 | ( bVar15 >= UNK_0010025c ) * UNK_0010025c;
      bStack_2b = ( bVar16 < UNK_0010025d ) * bVar16 | ( bVar16 >= UNK_0010025d ) * UNK_0010025d;
      bStack_2a = ( bVar17 < UNK_0010025e ) * bVar17 | ( bVar17 >= UNK_0010025e ) * UNK_0010025e;
      bStack_29 = ( bVar18 < UNK_0010025f ) * bVar18 | ( bVar18 >= UNK_0010025f ) * UNK_0010025f;
      local_48[0] = ( _LC1 < bVar1 ) * _LC1 | ( _LC1 >= bVar1 ) * bVar1;
      local_48[1] = ( UNK_00100261 < bVar4 ) * UNK_00100261 | ( UNK_00100261 >= bVar4 ) * bVar4;
      local_48[2] = ( UNK_00100262 < bVar5 ) * UNK_00100262 | ( UNK_00100262 >= bVar5 ) * bVar5;
      local_48[3] = ( UNK_00100263 < bVar6 ) * UNK_00100263 | ( UNK_00100263 >= bVar6 ) * bVar6;
      bStack_44 = ( UNK_00100264 < bVar7 ) * UNK_00100264 | ( UNK_00100264 >= bVar7 ) * bVar7;
      bStack_43 = ( UNK_00100265 < bVar8 ) * UNK_00100265 | ( UNK_00100265 >= bVar8 ) * bVar8;
      bStack_42 = ( UNK_00100266 < bVar9 ) * UNK_00100266 | ( UNK_00100266 >= bVar9 ) * bVar9;
      bStack_41 = ( UNK_00100267 < bVar10 ) * UNK_00100267 | ( UNK_00100267 >= bVar10 ) * bVar10;
      bStack_40 = ( UNK_00100268 < bVar11 ) * UNK_00100268 | ( UNK_00100268 >= bVar11 ) * bVar11;
      bStack_3f = ( UNK_00100269 < bVar12 ) * UNK_00100269 | ( UNK_00100269 >= bVar12 ) * bVar12;
      bStack_3e = ( UNK_0010026a < bVar13 ) * UNK_0010026a | ( UNK_0010026a >= bVar13 ) * bVar13;
      bStack_3d = ( UNK_0010026b < bVar14 ) * UNK_0010026b | ( UNK_0010026b >= bVar14 ) * bVar14;
      bStack_3c = ( UNK_0010026c < bVar15 ) * UNK_0010026c | ( UNK_0010026c >= bVar15 ) * bVar15;
      bStack_3b = ( UNK_0010026d < bVar16 ) * UNK_0010026d | ( UNK_0010026d >= bVar16 ) * bVar16;
      bStack_3a = ( UNK_0010026e < bVar17 ) * UNK_0010026e | ( UNK_0010026e >= bVar17 ) * bVar17;
      bStack_39 = ( UNK_0010026f < bVar18 ) * UNK_0010026f | ( UNK_0010026f >= bVar18 ) * bVar18;
      if (iVar57 < iVar2) {
         lVar52 = *(long*)( param_2 + 10 ) + 0x18 + lVar56 * 0x18;
         uVar51 = 0;
         uVar54 = iVar2 - iVar57;
         do {
            uVar55 = uVar55 + ( uint ) * (ushort*)( lVar53 + (ulong)local_48[uVar51 + lVar56] * 2 ) + ( uint ) * (ushort*)( &VP8LevelFixedCosts + ( ulong ) * (ushort*)( local_68 + uVar51 * 2 + lVar56 * 2 ) * 2 );
            lVar53 = uVar51 + lVar56;
            uVar51 = uVar51 + 1;
            lVar53 = *(long*)( lVar52 + (ulong)local_38[lVar53] * 8 );
            lVar52 = lVar52 + 0x18;
            iVar57 = iVar2;
         }
 while ( uVar54 != uVar51 );
      }

      lVar56 = (long)iVar57;
      uVar55 = ( uint ) * (ushort*)( lVar53 + (ulong)local_48[lVar56] * 2 ) + ( uint ) * (ushort*)( &VP8LevelFixedCosts + ( ulong ) * (ushort*)( local_68 + lVar56 * 2 ) * 2 ) + uVar55;
      if (iVar57 < 0xf) {
         uVar55 = uVar55 + *(ushort*)( &VP8EntropyCost + ( ulong ) * (byte*)( *(long*)( param_2 + 6 ) + ( ulong )(byte)(&VP8EncBands)[iVar57 + 1] * 0x21 + (ulong)local_38[lVar56] * 0xb ) * 2 );
      }

   }

   if (*(long*)( in_FS_OFFSET + 0x28 ) != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar55;
}
void SetResidualCoeffs_SSE2(undefined1 (*param_1)[16], long param_2) {
   uint uVar1;
   int iVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   iVar2 = -1;
   auVar3 = packsswb(*param_1, param_1[1]);
   for (int i = 0; i < 16; i++) {
      auVar4[i] = -(auVar3[0] == '\0');
   }

   uVar1 = ( uint )(ushort)(( ushort )(SUB161(auVar4 >> 7, 0) & 1) | ( ushort )(SUB161(auVar4 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar4 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar4 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar4 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar4 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar4 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar4 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar4 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar4 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar4 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar4 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar4 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar4 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar4 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar4[0xf] >> 7) << 0xf);
   if (uVar1 != 0xffff) {
      uVar1 = uVar1 ^ 0xffff;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
         for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {}
      }

   }

   *(int*)( param_2 + 4 ) = iVar2;
   *(undefined1(**) [16])( param_2 + 8 ) = param_1;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void VP8EncDspCostInitSSE2(void) {
   _VP8SetResidualCoeffs = SetResidualCoeffs_SSE2;
   _VP8GetResidualCost = 0x100000;
   return;
}


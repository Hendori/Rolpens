/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */uint ossl_rsaz_avx512ifma_eligible(void) {
   uint uVar1;
   uVar1 = 0;
   if (( _DAT_00102008 & 0x80230000 ) == 0x80230000) {
      uVar1 = _DAT_00102008 & 0x80230000;
   }

   return uVar1;
}
/* WARNING: Control flow encountered bad instruction data */void ossl_rsaz_amm52x20_x1_ifma256(void) {
   undefined1 auVar1[32];
   undefined1 in_ZMM0[64];
   auVar1 = vpxord_avx512vl(in_ZMM0._0_32_, in_ZMM0._0_32_);
   vmovdqa64_avx512vl(auVar1);
   auVar1 = vmovdqa64_avx512vl(auVar1);
   for (int i = 0; i < 3; i++) {
      vmovdqa64_avx512vl(auVar1);
   }

   vpbroadcastq_avx512vl();
   vpbroadcastq_avx512vl();
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data */void ossl_rsaz_amm52x20_x2_ifma256(void) {
   undefined1 auVar1[32];
   undefined1 in_ZMM0[64];
   auVar1 = vpxord_avx512vl(in_ZMM0._0_32_, in_ZMM0._0_32_);
   vmovdqa64_avx512vl(auVar1);
   auVar1 = vmovdqa64_avx512vl(auVar1);
   for (int i = 0; i < 8; i++) {
      vmovdqa64_avx512vl(auVar1);
   }

   vpbroadcastq_avx512vl();
   vpbroadcastq_avx512vl();
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void ossl_extract_multiplier_2x20_win5(undefined1 (*param_1)[32], undefined1 (*param_2)[32]) {
   undefined1(*pauVar1)[32];
   byte bVar2;
   bool bVar3;
   byte in_K0;
   ulong uVar4;
   ulong uVar5;
   undefined1 auVar6[32];
   undefined1 auVar7[32];
   undefined1 auVar8[32];
   undefined1 auVar9[32];
   undefined1 auVar10[32];
   undefined1 auVar11[32];
   undefined1 auVar12[32];
   undefined1 auVar13[32];
   undefined1 auVar14[32];
   undefined1 auVar15[32];
   undefined1 auVar16[32];
   undefined1 auVar17[32];
   undefined1 auVar18[32];
   auVar6 = vmovdqa64_avx512vl(_DAT_00100f40);
   auVar7 = vpbroadcastq_avx512vl();
   auVar8 = vpbroadcastq_avx512vl();
   pauVar1 = param_2 + 0x140;
   auVar13 = SUB6432(ZEXT1664((undefined1[16])0x0), 0);
   for (int i = 0; i < 5; i++) {
      vmovdqa64_avx512vl(auVar13);
   }

   auVar9 = vmovdqa64_avx512vl(auVar13);
   auVar10 = vmovdqa64_avx512vl(auVar13);
   auVar11 = vmovdqa64_avx512vl(auVar10);
   auVar12 = vmovdqa64_avx512vl(auVar10);
   auVar13 = vmovdqa64_avx512vl(auVar10);
   do {
      uVar4 = vpcmpq_avx512vl(auVar7, auVar9, 0);
      uVar4 = ( in_K0 & 0xf ) & uVar4;
      uVar5 = vpcmpq_avx512vl(auVar8, auVar9, 0);
      uVar5 = ( in_K0 & 0xf ) & uVar5;
      auVar14 = vmovdqu64_avx512vl(*param_2);
      auVar15 = vpblendmq_avx512vl(auVar10, auVar14);
      bVar2 = (byte)uVar4;
      auVar14._0_8_ = ( ulong )(bVar2 & 1) * auVar15._0_8_ | (ulong)!(bool)(bVar2 & 1) * auVar10._0_8_;
      bVar3 = (bool)( ( byte )(uVar4 >> 1) & 1 );
      auVar14._8_8_ = (ulong)bVar3 * auVar15._8_8_ | (ulong)!bVar3 * auVar10._8_8_;
      bVar3 = (bool)( ( byte )(uVar4 >> 2) & 1 );
      auVar14._16_8_ = (ulong)bVar3 * auVar15._16_8_ | (ulong)!bVar3 * auVar10._16_8_;
      auVar14._24_8_ = ( uVar4 >> 3 ) * auVar15._24_8_ | (ulong)!SUB81(uVar4 >> 3,0) * auVar10._24_8_;
      auVar10 = vmovdqu64_avx512vl(param_2[1]);
      auVar10 = vpblendmq_avx512vl(auVar11, auVar10);
      auVar15._0_8_ = ( ulong )(bVar2 & 1) * auVar10._0_8_ | (ulong)!(bool)(bVar2 & 1) * auVar11._0_8_;
      bVar3 = (bool)( ( byte )(uVar4 >> 1) & 1 );
      auVar15._8_8_ = (ulong)bVar3 * auVar10._8_8_ | (ulong)!bVar3 * auVar11._8_8_;
      bVar3 = (bool)( ( byte )(uVar4 >> 2) & 1 );
      auVar15._16_8_ = (ulong)bVar3 * auVar10._16_8_ | (ulong)!bVar3 * auVar11._16_8_;
      auVar15._24_8_ = ( uVar4 >> 3 ) * auVar10._24_8_ | (ulong)!SUB81(uVar4 >> 3,0) * auVar11._24_8_;
      auVar11 = vmovdqu64_avx512vl(param_2[2]);
      auVar11 = vpblendmq_avx512vl(auVar12, auVar11);
      auVar16._0_8_ = ( ulong )(bVar2 & 1) * auVar11._0_8_ | (ulong)!(bool)(bVar2 & 1) * auVar12._0_8_;
      bVar3 = (bool)( ( byte )(uVar4 >> 1) & 1 );
      auVar16._8_8_ = (ulong)bVar3 * auVar11._8_8_ | (ulong)!bVar3 * auVar12._8_8_;
      bVar3 = (bool)( ( byte )(uVar4 >> 2) & 1 );
      auVar16._16_8_ = (ulong)bVar3 * auVar11._16_8_ | (ulong)!bVar3 * auVar12._16_8_;
      auVar16._24_8_ = ( uVar4 >> 3 ) * auVar11._24_8_ | (ulong)!SUB81(uVar4 >> 3,0) * auVar12._24_8_;
      auVar12 = vmovdqu64_avx512vl(param_2[3]);
      auVar12 = vpblendmq_avx512vl(auVar13, auVar12);
      auVar17._0_8_ = ( ulong )(bVar2 & 1) * auVar12._0_8_ | (ulong)!(bool)(bVar2 & 1) * auVar13._0_8_;
      bVar3 = (bool)( ( byte )(uVar4 >> 1) & 1 );
      auVar17._8_8_ = (ulong)bVar3 * auVar12._8_8_ | (ulong)!bVar3 * auVar13._8_8_;
      bVar3 = (bool)( ( byte )(uVar4 >> 2) & 1 );
      auVar17._16_8_ = (ulong)bVar3 * auVar12._16_8_ | (ulong)!bVar3 * auVar13._16_8_;
      auVar17._24_8_ = ( uVar4 >> 3 ) * auVar12._24_8_ | (ulong)!SUB81(uVar4 >> 3,0) * auVar13._24_8_;
      auVar13 = vmovdqu64_avx512vl(param_2[4]);
      vpblendmq_avx512vl(auVar13, auVar13);
      auVar13 = vmovdqu64_avx512vl(param_2[5]);
      auVar13 = vpblendmq_avx512vl(auVar9, auVar13);
      bVar2 = (byte)uVar5;
      auVar18._0_8_ = ( ulong )(bVar2 & 1) * auVar13._0_8_ | (ulong)!(bool)(bVar2 & 1) * auVar9._0_8_;
      bVar3 = (bool)( ( byte )(uVar5 >> 1) & 1 );
      auVar18._8_8_ = (ulong)bVar3 * auVar13._8_8_ | (ulong)!bVar3 * auVar9._8_8_;
      bVar3 = (bool)( ( byte )(uVar5 >> 2) & 1 );
      auVar18._16_8_ = (ulong)bVar3 * auVar13._16_8_ | (ulong)!bVar3 * auVar9._16_8_;
      auVar18._24_8_ = ( uVar5 >> 3 ) * auVar13._24_8_ | (ulong)!SUB81(uVar5 >> 3,0) * auVar9._24_8_;
      auVar13 = vmovdqu64_avx512vl(param_2[6]);
      auVar13 = vpblendmq_avx512vl(auVar14, auVar13);
      auVar10._0_8_ = ( ulong )(bVar2 & 1) * auVar13._0_8_ | !(bool)(bVar2 & 1) * auVar14._0_8_;
      bVar3 = (bool)( ( byte )(uVar5 >> 1) & 1 );
      auVar10._8_8_ = (ulong)bVar3 * auVar13._8_8_ | !bVar3 * auVar14._8_8_;
      bVar3 = (bool)( ( byte )(uVar5 >> 2) & 1 );
      auVar10._16_8_ = (ulong)bVar3 * auVar13._16_8_ | !bVar3 * auVar14._16_8_;
      auVar10._24_8_ = ( uVar5 >> 3 ) * auVar13._24_8_ | !SUB81(uVar5 >> 3,0) * auVar14._24_8_;
      auVar13 = vmovdqu64_avx512vl(param_2[7]);
      auVar13 = vpblendmq_avx512vl(auVar15, auVar13);
      auVar11._0_8_ = ( ulong )(bVar2 & 1) * auVar13._0_8_ | !(bool)(bVar2 & 1) * auVar15._0_8_;
      bVar3 = (bool)( ( byte )(uVar5 >> 1) & 1 );
      auVar11._8_8_ = (ulong)bVar3 * auVar13._8_8_ | !bVar3 * auVar15._8_8_;
      bVar3 = (bool)( ( byte )(uVar5 >> 2) & 1 );
      auVar11._16_8_ = (ulong)bVar3 * auVar13._16_8_ | !bVar3 * auVar15._16_8_;
      auVar11._24_8_ = ( uVar5 >> 3 ) * auVar13._24_8_ | !SUB81(uVar5 >> 3,0) * auVar15._24_8_;
      auVar13 = vmovdqu64_avx512vl(param_2[8]);
      auVar13 = vpblendmq_avx512vl(auVar16, auVar13);
      auVar12._0_8_ = ( ulong )(bVar2 & 1) * auVar13._0_8_ | !(bool)(bVar2 & 1) * auVar16._0_8_;
      bVar3 = (bool)( ( byte )(uVar5 >> 1) & 1 );
      auVar12._8_8_ = (ulong)bVar3 * auVar13._8_8_ | !bVar3 * auVar16._8_8_;
      bVar3 = (bool)( ( byte )(uVar5 >> 2) & 1 );
      auVar12._16_8_ = (ulong)bVar3 * auVar13._16_8_ | !bVar3 * auVar16._16_8_;
      auVar12._24_8_ = ( uVar5 >> 3 ) * auVar13._24_8_ | !SUB81(uVar5 >> 3,0) * auVar16._24_8_;
      auVar14 = vmovdqu64_avx512vl(param_2[9]);
      auVar9 = vpblendmq_avx512vl(auVar17, auVar14);
      auVar13._0_8_ = ( ulong )(bVar2 & 1) * auVar9._0_8_ | !(bool)(bVar2 & 1) * auVar17._0_8_;
      bVar3 = (bool)( ( byte )(uVar5 >> 1) & 1 );
      auVar13._8_8_ = (ulong)bVar3 * auVar9._8_8_ | !bVar3 * auVar17._8_8_;
      bVar3 = (bool)( ( byte )(uVar5 >> 2) & 1 );
      auVar13._16_8_ = (ulong)bVar3 * auVar9._16_8_ | !bVar3 * auVar17._16_8_;
      auVar13._24_8_ = ( uVar5 >> 3 ) * auVar9._24_8_ | !SUB81(uVar5 >> 3,0) * auVar17._24_8_;
      auVar9 = vpaddq_avx512vl(auVar18, auVar6);
      param_2 = param_2 + 10;
   }
 while ( pauVar1 != param_2 );
   auVar6 = vmovdqu64_avx512vl(auVar10);
   *param_1 = auVar6;
   auVar6 = vmovdqu64_avx512vl(auVar11);
   param_1[1] = auVar6;
   auVar6 = vmovdqu64_avx512vl(auVar12);
   param_1[2] = auVar6;
   auVar6 = vmovdqu64_avx512vl(auVar13);
   param_1[3] = auVar6;
   auVar6 = vmovdqu64_avx512vl(auVar14);
   param_1[4] = auVar6;
   auVar6 = vmovdqu64_avx512vl(auVar9);
   param_1[5] = auVar6;
   auVar6 = vmovdqu64_avx512vl(auVar10);
   param_1[6] = auVar6;
   auVar6 = vmovdqu64_avx512vl(auVar11);
   param_1[7] = auVar6;
   auVar6 = vmovdqu64_avx512vl(auVar12);
   param_1[8] = auVar6;
   auVar6 = vmovdqu64_avx512vl(auVar13);
   param_1[9] = auVar6;
   return;
}


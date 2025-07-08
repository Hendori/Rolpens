/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */uint aesni_xts_avx512_eligible(void) {
   uint uVar1;
   uVar1 = 0;
   if (( ( _DAT_0010a008 & 0xc0030000 ) == 0xc0030000 ) && ( ( _DAT_0010a00c & 0x640 ) == 0x640 )) {
      uVar1 = _DAT_0010a00c & 0x640;
   }

   return uVar1;
}
/* WARNING: Control flow encountered bad instruction data *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void aesni_xts_128_encrypt_avx512(undefined1 (*param_1)[64], undefined1 (*param_2)[16], ulong param_3, undefined1 (*param_4)[16], undefined1 (*param_5)[16], undefined1 (*param_6)[16]) {
   undefined1 auVar1[16];
   undefined1 *puVar2;
   undefined1 auVar3[32];
   undefined1 auVar4[32];
   undefined1 auVar5[64];
   undefined1 auVar6[64];
   undefined1 auVar7[64];
   undefined1 auVar8[64];
   undefined1 in_ZMM0[64];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 in_register_000012b0;
   undefined1 in_register_000012b1;
   undefined1 in_register_000012b2;
   undefined1 in_register_000012b3;
   undefined1 in_register_000012b4;
   undefined1 in_register_000012b5;
   undefined1 in_register_000012b6;
   undefined1 in_register_000012b7;
   undefined1 in_register_000012b8;
   undefined1 in_register_000012b9;
   undefined1 in_register_000012ba;
   undefined1 in_register_000012bb;
   undefined1 in_register_000012bc;
   undefined1 in_register_000012bd;
   undefined1 in_register_000012be;
   undefined1 in_register_000012bf;
   undefined1 in_ZMM10[64];
   auVar9 = aesenc(*param_6 ^ *param_5, param_5[1]);
   for (int i = 0; i < 8; i++) {
      auVar9 = aesenc(auVar9, param_5[( i + 2 )]);
   }

   auVar9 = aesenclast(auVar9, param_5[10]);
   if ((long)param_3 < 0x80) {
      vpbroadcastq_avx512f();
      if (0xf < param_3) {
         auVar5 = vbroadcasti32x4_avx512f(auVar9);
         auVar7 = vbroadcasti32x4_avx512f(_shufb_15_7);
         param_3 = param_3 & 0x70;
         for (int i = 0; i < 6; i++) {
            if (param_3 == ( -16*i + 96 )) {
               auVar7 = vpshufb_avx512bw(auVar5, auVar7);
               vpsllvq_avx512f(auVar5, _const_dq3210);
               vpsrlvq_avx512f(auVar7, _const_dq5678);
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }

         }

         auVar7 = vpshufb_avx512bw(auVar5, auVar7);
         vpsllvq_avx512f(auVar5, _const_dq3210);
         vpsrlvq_avx512f(auVar7, _const_dq5678);
         /* WARNING: Bad instruction - Truncating control flow here */
         halt_baddata();
      }

   }
 else {
      auVar5 = vpbroadcastq_avx512f();
      if (0xff < (long)param_3) {
         auVar5 = vbroadcasti32x4_avx512f(auVar9);
         auVar7 = vbroadcasti32x4_avx512f(_shufb_15_7);
         auVar7 = vpshufb_avx512bw(auVar5, auVar7);
         vpsllvq_avx512f(auVar5, _const_dq3210);
         vpsrlvq_avx512f(auVar7, _const_dq5678);
         /* WARNING: Bad instruction - Truncating control flow here */
         halt_baddata();
      }

      if (0x7f < (long)param_3) {
         auVar5 = vbroadcasti32x4_avx512f(auVar9);
         auVar7 = vbroadcasti32x4_avx512f(_shufb_15_7);
         auVar7 = vpshufb_avx512bw(auVar5, auVar7);
         vpsllvq_avx512f(auVar5, _const_dq3210);
         vpsrlvq_avx512f(auVar7, _const_dq5678);
         /* WARNING: Bad instruction - Truncating control flow here */
         halt_baddata();
      }

      if (param_3 != 0) {
         if (0x6f < (long)param_3) {
            auVar7 = vmovdqu8_avx512bw(*param_1);
            auVar8 = vmovdqu8_avx512bw(param_1[1]);
            auVar8[0x30] = in_register_000012b0;
            auVar8[0x31] = in_register_000012b1;
            auVar8[0x32] = in_register_000012b2;
            auVar8[0x33] = in_register_000012b3;
            auVar8[0x34] = in_register_000012b4;
            auVar8[0x35] = in_register_000012b5;
            auVar8[0x36] = in_register_000012b6;
            auVar8[0x37] = in_register_000012b7;
            auVar8[0x38] = in_register_000012b8;
            auVar8[0x39] = in_register_000012b9;
            auVar8[0x3a] = in_register_000012ba;
            auVar8[0x3b] = in_register_000012bb;
            auVar8[0x3c] = in_register_000012bc;
            auVar8[0x3d] = in_register_000012bd;
            auVar8[0x3e] = in_register_000012be;
            auVar8[0x3f] = in_register_000012bf;
            auVar6 = vbroadcasti32x4_avx512f(*param_4);
            vpternlogq_avx512f(auVar7, auVar5, auVar6, 0x96);
            vpternlogq_avx512f(auVar8, in_ZMM10, auVar6, 0x96);
            vbroadcasti32x4_avx512f(*(undefined1(*) [16])( *param_4 + 4 ));
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }

         if (0x5f < (long)param_3) {
            auVar7 = vmovdqu8_avx512bw(*param_1);
            auVar3 = vmovdqu8_avx512vl(*(undefined1(*) [32])param_1[1]);
            auVar8 = vbroadcasti32x4_avx512f(*param_4);
            vpternlogq_avx512f(auVar7, auVar5, auVar8, 0x96);
            vpternlogq_avx512f(ZEXT3264(auVar3), in_ZMM10, auVar8, 0x96);
            vbroadcasti32x4_avx512f(*(undefined1(*) [16])( *param_4 + 4 ));
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }

         if (0x4f < (long)param_3) {
            auVar7 = vmovdqu8_avx512bw(*param_1);
            auVar8 = vbroadcasti32x4_avx512f(*param_4);
            vpternlogq_avx512f(auVar7, auVar5, auVar8, 0x96);
            vpternlogq_avx512f(ZEXT1664(*(undefined1(*) [16])param_1[1]), in_ZMM10, auVar8, 0x96);
            vbroadcasti32x4_avx512f(*(undefined1(*) [16])( *param_4 + 4 ));
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }

         if (0x3f < (long)param_3) {
            auVar7 = vmovdqu8_avx512bw(*param_1);
            auVar8 = vbroadcasti32x4_avx512f(*param_4);
            vpternlogq_avx512f(auVar7, auVar5, auVar8, 0x96);
            vbroadcasti32x4_avx512f(*(undefined1(*) [16])( *param_4 + 4 ));
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }

         if (0x2f < (long)param_3) {
            auVar7 = vmovdqu8_avx512bw(*param_1);
            auVar8 = vbroadcasti32x4_avx512f(*param_4);
            vpternlogq_avx512f(ZEXT4864(auVar7._0_48_), auVar5, auVar8, 0x96);
            vbroadcasti32x4_avx512f(*(undefined1(*) [16])( *param_4 + 4 ));
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }

         if (0x1f < (long)param_3) {
            auVar3 = vmovdqu8_avx512vl(*(undefined1(*) [32])*param_1);
            auVar4 = vbroadcasti32x4_avx512vl(*param_4);
            vpternlogq_avx512vl(auVar3, auVar5._0_32_, auVar4, 0x96);
            vbroadcasti32x4_avx512vl(*(undefined1(*) [16])( *param_4 + 4 ));
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }

         auVar9 = auVar5._0_16_;
         if ((long)param_3 < 0x10) {
            auVar10 = in_ZMM0._0_16_;
            in_ZMM0 = ZEXT1664(auVar9);
         }
 else {
            puVar2 = *param_1;
            param_1 = (undefined1(*) [64])( *param_1 + 0x10 );
            auVar10 = aesenc(*(undefined1(*) [16])puVar2 ^ auVar9 ^ *param_4, param_4[1]);
            for (int i = 0; i < 8; i++) {
               auVar10 = aesenc(auVar10, param_4[( i + 2 )]);
            }

            auVar10 = aesenclast(auVar10, param_4[10]);
            auVar10 = auVar10 ^ auVar9;
            *param_2 = auVar10;
            param_2 = param_2 + 1;
            auVar9 = vextracti32x4_avx512f(auVar5, 1);
            in_ZMM0 = ZEXT1664(auVar9);
            param_3 = param_3 & 0xf;
            if (param_3 == 0) goto LAB_00100cfe;
         }

         auVar1 = vpshufb_avx(auVar10, *(undefined1(*) [16])( &vpshufb_shf_table + param_3 ));
         auVar9 = *(undefined1(*) [16])( param_1[-1] + param_3 + 0x30 );
         *(undefined1(*) [16])( param_2[-1] + param_3 ) = auVar1;
         auVar9 = vpshufb_avx(auVar9, *(undefined1(*) [16])( &UNK_00109810 + -param_3 ) ^ _mask1);
         auVar9 = vpblendvb_avx(auVar9, auVar10, *(undefined1(*) [16])( &UNK_00109810 + -param_3 ) ^ _mask1);
         auVar9 = aesenc(auVar9 ^ in_ZMM0._0_16_ ^ *param_4, param_4[1]);
         for (int i = 0; i < 8; i++) {
            auVar9 = aesenc(auVar9, param_4[( i + 2 )]);
         }

         auVar9 = aesenclast(auVar9, param_4[10]);
         param_2[-1] = auVar9 ^ in_ZMM0._0_16_;
      }

   }

   LAB_00100cfe:vpxorq_avx512f(in_ZMM0, in_ZMM0);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void aesni_xts_128_decrypt_avx512(undefined1 (*param_1)[16], undefined1 (*param_2)[16], ulong param_3, undefined1 (*param_4)[16], undefined1 (*param_5)[16], undefined1 (*param_6)[16]) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   ulong uVar14;
   ulong uVar15;
   undefined1(*pauVar16)[16];
   ulong uVar17;
   ulong uVar18;
   undefined1 auVar19[16];
   undefined1 auVar20[64];
   undefined1 auVar21[64];
   undefined1 in_ZMM0[64];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   undefined1 auVar34[16];
   undefined1 auVar35[16];
   long local_c0;
   ulong uStack_b8;
   auVar22 = aesenc(*param_6 ^ *param_5, param_5[1]);
   for (int i = 0; i < 8; i++) {
      auVar22 = aesenc(auVar22, param_5[( i + 2 )]);
   }

   auVar22 = aesenclast(auVar22, param_5[10]);
   if (0x7f < param_3) {
      vpbroadcastq_avx512f();
      if ((long)param_3 < 0x100) {
         auVar20 = vbroadcasti32x4_avx512f(auVar22);
         auVar21 = vbroadcasti32x4_avx512f(_shufb_15_7);
         auVar21 = vpshufb_avx512bw(auVar20, auVar21);
         vpsllvq_avx512f(auVar20, _const_dq3210);
         vpsrlvq_avx512f(auVar21, _const_dq5678);
         /* WARNING: Bad instruction - Truncating control flow here */
         halt_baddata();
      }

      auVar20 = vbroadcasti32x4_avx512f(auVar22);
      auVar21 = vbroadcasti32x4_avx512f(_shufb_15_7);
      auVar21 = vpshufb_avx512bw(auVar20, auVar21);
      vpsllvq_avx512f(auVar20, _const_dq3210);
      vpsrlvq_avx512f(auVar21, _const_dq5678);
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   if (param_3 < 0x10) goto LAB_00102bbb;
   uVar17 = param_3 & 0x70;
   local_c0 = auVar22._0_8_;
   uStack_b8 = auVar22._8_8_;
   if (uVar17 == 0x60) {
      uVar17 = 0;
      uVar14 = uStack_b8 * 2 + ( ulong )(local_c0 < 0);
      if (CARRY8(uStack_b8, uStack_b8) || CARRY8(uStack_b8 * 2, ( ulong )(local_c0 < 0))) {
         uVar17 = 0x87;
      }

      uVar17 = local_c0 << 1 ^ uVar17;
      auVar19._8_8_ = uVar14;
      auVar19._0_8_ = uVar17;
      uVar18 = 0;
      uVar15 = uVar14 * 2 + ( ulong )((long)uVar17 < 0);
      if (CARRY8(uVar14, uVar14) || CARRY8(uVar14 * 2, ( ulong )((long)uVar17 < 0))) {
         uVar18 = 0x87;
      }

      uVar18 = uVar17 << 1 ^ uVar18;
      auVar24._8_8_ = uVar15;
      auVar24._0_8_ = uVar18;
      uVar17 = 0;
      uVar14 = uVar15 * 2 + ( ulong )((long)uVar18 < 0);
      if (CARRY8(uVar15, uVar15) || CARRY8(uVar15 * 2, ( ulong )((long)uVar18 < 0))) {
         uVar17 = 0x87;
      }

      uVar17 = uVar18 << 1 ^ uVar17;
      auVar23._8_8_ = uVar14;
      auVar23._0_8_ = uVar17;
      uVar18 = 0;
      uVar15 = uVar14 * 2 + ( ulong )((long)uVar17 < 0);
      if (CARRY8(uVar14, uVar14) || CARRY8(uVar14 * 2, ( ulong )((long)uVar17 < 0))) {
         uVar18 = 0x87;
      }

      uVar18 = uVar17 << 1 ^ uVar18;
      auVar25._8_8_ = uVar15;
      auVar25._0_8_ = uVar18;
      uVar17 = 0;
      uVar14 = uVar15 * 2 + ( ulong )((long)uVar18 < 0);
      if (CARRY8(uVar15, uVar15) || CARRY8(uVar15 * 2, ( ulong )((long)uVar18 < 0))) {
         uVar17 = 0x87;
      }

      uVar17 = uVar18 << 1 ^ uVar17;
      auVar27._8_8_ = uVar14;
      auVar27._0_8_ = uVar17;
      pauVar16 = param_1 + 6;
      if (( param_3 & 0xf ) != 0) {
         uVar18 = 0;
         if (CARRY8(uVar14, uVar14) || CARRY8(uVar14 * 2, ( ulong )((long)uVar17 < 0))) {
            uVar18 = 0x87;
         }

         auVar33 = vmovdqa64_avx512vl(auVar27);
         auVar30._8_8_ = uVar14 * 2 + ( ulong )((long)uVar17 < 0);
         auVar30._0_8_ = uVar17 << 1 ^ uVar18;
         auVar27 = *param_4;
         auVar28 = param_4[1];
         auVar35 = aesdec(*param_1 ^ auVar22 ^ auVar27, auVar28);
         auVar26 = aesdec(param_1[1] ^ auVar19 ^ auVar27, auVar28);
         auVar29 = aesdec(param_1[2] ^ auVar24 ^ auVar27, auVar28);
         auVar32 = aesdec(param_1[3] ^ auVar23 ^ auVar27, auVar28);
         auVar31 = aesdec(param_1[4] ^ auVar25 ^ auVar27, auVar28);
         auVar34 = aesdec(param_1[5] ^ auVar30 ^ auVar27, auVar28);
         auVar27 = param_4[2];
         auVar28 = aesdec(auVar35, auVar27);
         auVar35 = aesdec(auVar26, auVar27);
         auVar26 = aesdec(auVar29, auVar27);
         auVar29 = aesdec(auVar32, auVar27);
         auVar32 = aesdec(auVar31, auVar27);
         auVar31 = aesdec(auVar34, auVar27);
         auVar27 = param_4[3];
         for (int i = 0; i < 7; i++) {
            auVar28 = aesdec(auVar28, auVar27);
            auVar35 = aesdec(auVar35, auVar27);
            auVar26 = aesdec(auVar26, auVar27);
            auVar29 = aesdec(auVar29, auVar27);
            auVar32 = aesdec(auVar32, auVar27);
            auVar31 = aesdec(auVar31, auVar27);
            auVar27 = param_4[( i + 4 )];
         }

         auVar28 = aesdeclast(auVar28, auVar27);
         auVar35 = aesdeclast(auVar35, auVar27);
         auVar26 = aesdeclast(auVar26, auVar27);
         auVar29 = aesdeclast(auVar29, auVar27);
         auVar32 = aesdeclast(auVar32, auVar27);
         auVar27 = aesdeclast(auVar31, auVar27);
         auVar27 = auVar27 ^ auVar30;
         *param_2 = auVar28 ^ auVar22;
         param_2[1] = auVar35 ^ auVar19;
         param_2[2] = auVar26 ^ auVar24;
         param_2[3] = auVar29 ^ auVar23;
         param_2[4] = auVar32 ^ auVar25;
         param_2 = param_2 + 6;
         in_ZMM0 = ZEXT1664(auVar33);
         goto LAB_00102b1f;
      }

      auVar28 = *param_4;
      auVar30 = param_4[1];
      auVar33 = aesdec(*param_1 ^ auVar22 ^ auVar28, auVar30);
      auVar35 = aesdec(param_1[1] ^ auVar19 ^ auVar28, auVar30);
      auVar26 = aesdec(param_1[2] ^ auVar24 ^ auVar28, auVar30);
      auVar29 = aesdec(param_1[3] ^ auVar23 ^ auVar28, auVar30);
      auVar32 = aesdec(param_1[4] ^ auVar25 ^ auVar28, auVar30);
      auVar31 = aesdec(param_1[5] ^ auVar27 ^ auVar28, auVar30);
      auVar28 = param_4[2];
      auVar30 = aesdec(auVar33, auVar28);
      auVar33 = aesdec(auVar35, auVar28);
      auVar35 = aesdec(auVar26, auVar28);
      auVar26 = aesdec(auVar29, auVar28);
      auVar29 = aesdec(auVar32, auVar28);
      auVar32 = aesdec(auVar31, auVar28);
      auVar28 = param_4[3];
      for (int i = 0; i < 7; i++) {
         auVar30 = aesdec(auVar30, auVar28);
         auVar33 = aesdec(auVar33, auVar28);
         auVar35 = aesdec(auVar35, auVar28);
         auVar26 = aesdec(auVar26, auVar28);
         auVar29 = aesdec(auVar29, auVar28);
         auVar32 = aesdec(auVar32, auVar28);
         auVar28 = param_4[( i + 4 )];
      }

      in_ZMM0 = ZEXT1664(auVar28);
      auVar30 = aesdeclast(auVar30, auVar28);
      auVar33 = aesdeclast(auVar33, auVar28);
      auVar35 = aesdeclast(auVar35, auVar28);
      auVar26 = aesdeclast(auVar26, auVar28);
      auVar29 = aesdeclast(auVar29, auVar28);
      auVar28 = aesdeclast(auVar32, auVar28);
      auVar28 = auVar28 ^ auVar27;
      *param_2 = auVar30 ^ auVar22;
      param_2[1] = auVar33 ^ auVar19;
      param_2[2] = auVar35 ^ auVar24;
      param_2[3] = auVar26 ^ auVar23;
      param_2[4] = auVar29 ^ auVar25;
      param_2 = param_2 + 6;
   }
 else if (uVar17 == 0x50) {
      uVar17 = 0;
      uVar14 = uStack_b8 * 2 + ( ulong )(local_c0 < 0);
      if (CARRY8(uStack_b8, uStack_b8) || CARRY8(uStack_b8 * 2, ( ulong )(local_c0 < 0))) {
         uVar17 = 0x87;
      }

      uVar17 = local_c0 << 1 ^ uVar17;
      auVar33._8_8_ = uVar14;
      auVar33._0_8_ = uVar17;
      uVar18 = 0;
      uVar15 = uVar14 * 2 + ( ulong )((long)uVar17 < 0);
      if (CARRY8(uVar14, uVar14) || CARRY8(uVar14 * 2, ( ulong )((long)uVar17 < 0))) {
         uVar18 = 0x87;
      }

      uVar18 = uVar17 << 1 ^ uVar18;
      auVar35._8_8_ = uVar15;
      auVar35._0_8_ = uVar18;
      uVar17 = 0;
      uVar14 = uVar15 * 2 + ( ulong )((long)uVar18 < 0);
      if (CARRY8(uVar15, uVar15) || CARRY8(uVar15 * 2, ( ulong )((long)uVar18 < 0))) {
         uVar17 = 0x87;
      }

      uVar17 = uVar18 << 1 ^ uVar17;
      auVar26._8_8_ = uVar14;
      auVar26._0_8_ = uVar17;
      uVar18 = 0;
      uVar15 = uVar14 * 2 + ( ulong )((long)uVar17 < 0);
      if (CARRY8(uVar14, uVar14) || CARRY8(uVar14 * 2, ( ulong )((long)uVar17 < 0))) {
         uVar18 = 0x87;
      }

      uVar18 = uVar17 << 1 ^ uVar18;
      auVar29._8_8_ = uVar15;
      auVar29._0_8_ = uVar18;
      pauVar16 = param_1 + 5;
      if (( param_3 & 0xf ) != 0) {
         uVar17 = 0;
         if (CARRY8(uVar15, uVar15) || CARRY8(uVar15 * 2, ( ulong )((long)uVar18 < 0))) {
            uVar17 = 0x87;
         }

         auVar23 = vmovdqa64_avx512vl(auVar29);
         auVar28._8_8_ = uVar15 * 2 + ( ulong )((long)uVar18 < 0);
         auVar28._0_8_ = uVar18 << 1 ^ uVar17;
         auVar19 = *param_4;
         auVar24 = param_4[1];
         auVar25 = aesdec(*param_1 ^ auVar22 ^ auVar19, auVar24);
         auVar27 = aesdec(param_1[1] ^ auVar33 ^ auVar19, auVar24);
         auVar30 = aesdec(param_1[2] ^ auVar35 ^ auVar19, auVar24);
         auVar29 = aesdec(param_1[3] ^ auVar26 ^ auVar19, auVar24);
         auVar32 = aesdec(param_1[4] ^ auVar28 ^ auVar19, auVar24);
         auVar19 = param_4[2];
         auVar24 = aesdec(auVar25, auVar19);
         auVar25 = aesdec(auVar27, auVar19);
         auVar27 = aesdec(auVar30, auVar19);
         auVar30 = aesdec(auVar29, auVar19);
         auVar29 = aesdec(auVar32, auVar19);
         auVar19 = param_4[3];
         auVar24 = aesdec(auVar24, auVar19);
         auVar25 = aesdec(auVar25, auVar19);
         auVar27 = aesdec(auVar27, auVar19);
         auVar30 = aesdec(auVar30, auVar19);
         for (int i = 0; i < 5; i++) {
            auVar29 = aesdec(auVar29, auVar19);
            auVar19 = param_4[( i + 4 )];
            auVar24 = aesdec(auVar24, auVar19);
            auVar25 = aesdec(auVar25, auVar19);
            auVar27 = aesdec(auVar27, auVar19);
            auVar30 = aesdec(auVar30, auVar19);
         }

         auVar32 = aesdec(auVar29, auVar19);
         auVar19 = param_4[9];
         auVar24 = aesdec(auVar24, auVar19);
         auVar25 = aesdec(auVar25, auVar19);
         auVar27 = aesdec(auVar27, auVar19);
         auVar29 = aesdec(auVar30, auVar19);
         auVar32 = aesdec(auVar32, auVar19);
         auVar19 = param_4[10];
         auVar24 = aesdeclast(auVar24, auVar19);
         auVar25 = aesdeclast(auVar25, auVar19);
         auVar30 = aesdeclast(auVar27, auVar19);
         auVar29 = aesdeclast(auVar29, auVar19);
         auVar27 = aesdeclast(auVar32, auVar19);
         auVar27 = auVar27 ^ auVar28;
         *param_2 = auVar24 ^ auVar22;
         param_2[1] = auVar25 ^ auVar33;
         param_2[2] = auVar30 ^ auVar35;
         param_2[3] = auVar29 ^ auVar26;
         param_2 = param_2 + 5;
         in_ZMM0 = ZEXT1664(auVar23);
         goto LAB_00102b1f;
      }

      auVar19 = *param_4;
      auVar24 = param_4[1];
      auVar23 = aesdec(*param_1 ^ auVar22 ^ auVar19, auVar24);
      auVar25 = aesdec(param_1[1] ^ auVar33 ^ auVar19, auVar24);
      auVar27 = aesdec(param_1[2] ^ auVar35 ^ auVar19, auVar24);
      auVar28 = aesdec(param_1[3] ^ auVar26 ^ auVar19, auVar24);
      auVar30 = aesdec(param_1[4] ^ auVar29 ^ auVar19, auVar24);
      auVar19 = param_4[2];
      auVar24 = aesdec(auVar23, auVar19);
      auVar23 = aesdec(auVar25, auVar19);
      auVar25 = aesdec(auVar27, auVar19);
      auVar27 = aesdec(auVar28, auVar19);
      auVar28 = aesdec(auVar30, auVar19);
      auVar19 = param_4[3];
      for (int i = 0; i < 7; i++) {
         auVar24 = aesdec(auVar24, auVar19);
         auVar23 = aesdec(auVar23, auVar19);
         auVar25 = aesdec(auVar25, auVar19);
         auVar27 = aesdec(auVar27, auVar19);
         auVar28 = aesdec(auVar28, auVar19);
         auVar19 = param_4[( i + 4 )];
      }

      in_ZMM0 = ZEXT1664(auVar19);
      auVar24 = aesdeclast(auVar24, auVar19);
      auVar23 = aesdeclast(auVar23, auVar19);
      auVar25 = aesdeclast(auVar25, auVar19);
      auVar27 = aesdeclast(auVar27, auVar19);
      auVar28 = aesdeclast(auVar28, auVar19);
      auVar28 = auVar28 ^ auVar29;
      *param_2 = auVar24 ^ auVar22;
      param_2[1] = auVar23 ^ auVar33;
      param_2[2] = auVar25 ^ auVar35;
      param_2[3] = auVar27 ^ auVar26;
      param_2 = param_2 + 5;
   }
 else if (uVar17 == 0x40) {
      uVar17 = 0;
      uVar14 = uStack_b8 * 2 + ( ulong )(local_c0 < 0);
      if (CARRY8(uStack_b8, uStack_b8) || CARRY8(uStack_b8 * 2, ( ulong )(local_c0 < 0))) {
         uVar17 = 0x87;
      }

      uVar17 = local_c0 << 1 ^ uVar17;
      auVar32._8_8_ = uVar14;
      auVar32._0_8_ = uVar17;
      uVar18 = 0;
      uVar15 = uVar14 * 2 + ( ulong )((long)uVar17 < 0);
      if (CARRY8(uVar14, uVar14) || CARRY8(uVar14 * 2, ( ulong )((long)uVar17 < 0))) {
         uVar18 = 0x87;
      }

      uVar18 = uVar17 << 1 ^ uVar18;
      auVar31._8_8_ = uVar15;
      auVar31._0_8_ = uVar18;
      uVar17 = 0;
      uVar14 = uVar15 * 2 + ( ulong )((long)uVar18 < 0);
      if (CARRY8(uVar15, uVar15) || CARRY8(uVar15 * 2, ( ulong )((long)uVar18 < 0))) {
         uVar17 = 0x87;
      }

      uVar17 = uVar18 << 1 ^ uVar17;
      auVar34._8_8_ = uVar14;
      auVar34._0_8_ = uVar17;
      pauVar16 = param_1 + 4;
      if (( param_3 & 0xf ) != 0) {
         uVar18 = 0;
         if (CARRY8(uVar14, uVar14) || CARRY8(uVar14 * 2, ( ulong )((long)uVar17 < 0))) {
            uVar18 = 0x87;
         }

         auVar23 = vmovdqa64_avx512vl(auVar34);
         auVar3._8_8_ = uVar14 * 2 + ( ulong )((long)uVar17 < 0);
         auVar3._0_8_ = uVar17 << 1 ^ uVar18;
         auVar19 = *param_4;
         auVar24 = param_4[1];
         auVar25 = aesdec(*param_1 ^ auVar22 ^ auVar19, auVar24);
         auVar27 = aesdec(param_1[1] ^ auVar32 ^ auVar19, auVar24);
         auVar28 = aesdec(param_1[2] ^ auVar31 ^ auVar19, auVar24);
         auVar30 = aesdec(param_1[3] ^ auVar3 ^ auVar19, auVar24);
         auVar19 = param_4[2];
         auVar24 = aesdec(auVar25, auVar19);
         auVar25 = aesdec(auVar27, auVar19);
         auVar27 = aesdec(auVar28, auVar19);
         auVar28 = aesdec(auVar30, auVar19);
         auVar19 = param_4[3];
         auVar24 = aesdec(auVar24, auVar19);
         auVar25 = aesdec(auVar25, auVar19);
         auVar27 = aesdec(auVar27, auVar19);
         for (int i = 0; i < 6; i++) {
            auVar28 = aesdec(auVar28, auVar19);
            auVar19 = param_4[( i + 4 )];
            auVar24 = aesdec(auVar24, auVar19);
            auVar25 = aesdec(auVar25, auVar19);
            auVar27 = aesdec(auVar27, auVar19);
         }

         auVar30 = aesdec(auVar28, auVar19);
         auVar19 = param_4[10];
         auVar24 = aesdeclast(auVar24, auVar19);
         auVar25 = aesdeclast(auVar25, auVar19);
         auVar28 = aesdeclast(auVar27, auVar19);
         auVar27 = aesdeclast(auVar30, auVar19);
         auVar27 = auVar27 ^ auVar3;
         *param_2 = auVar24 ^ auVar22;
         param_2[1] = auVar25 ^ auVar32;
         param_2[2] = auVar28 ^ auVar31;
         param_2 = param_2 + 4;
         in_ZMM0 = ZEXT1664(auVar23);
         goto LAB_00102b1f;
      }

      auVar19 = *param_4;
      auVar24 = param_4[1];
      auVar23 = aesdec(*param_1 ^ auVar22 ^ auVar19, auVar24);
      auVar25 = aesdec(param_1[1] ^ auVar32 ^ auVar19, auVar24);
      auVar27 = aesdec(param_1[2] ^ auVar31 ^ auVar19, auVar24);
      auVar28 = aesdec(param_1[3] ^ auVar34 ^ auVar19, auVar24);
      auVar19 = param_4[2];
      auVar24 = aesdec(auVar23, auVar19);
      auVar23 = aesdec(auVar25, auVar19);
      auVar25 = aesdec(auVar27, auVar19);
      auVar27 = aesdec(auVar28, auVar19);
      auVar19 = param_4[3];
      for (int i = 0; i < 7; i++) {
         auVar24 = aesdec(auVar24, auVar19);
         auVar23 = aesdec(auVar23, auVar19);
         auVar25 = aesdec(auVar25, auVar19);
         auVar27 = aesdec(auVar27, auVar19);
         auVar19 = param_4[( i + 4 )];
      }

      in_ZMM0 = ZEXT1664(auVar19);
      auVar24 = aesdeclast(auVar24, auVar19);
      auVar23 = aesdeclast(auVar23, auVar19);
      auVar25 = aesdeclast(auVar25, auVar19);
      auVar28 = aesdeclast(auVar27, auVar19);
      auVar28 = auVar28 ^ auVar34;
      *param_2 = auVar24 ^ auVar22;
      param_2[1] = auVar23 ^ auVar32;
      param_2[2] = auVar25 ^ auVar31;
      param_2 = param_2 + 4;
   }
 else if (uVar17 == 0x30) {
      uVar17 = 0;
      uVar14 = uStack_b8 * 2 + ( ulong )(local_c0 < 0);
      if (CARRY8(uStack_b8, uStack_b8) || CARRY8(uStack_b8 * 2, ( ulong )(local_c0 < 0))) {
         uVar17 = 0x87;
      }

      uVar17 = local_c0 << 1 ^ uVar17;
      auVar4._8_8_ = uVar14;
      auVar4._0_8_ = uVar17;
      uVar18 = 0;
      uVar15 = uVar14 * 2 + ( ulong )((long)uVar17 < 0);
      if (CARRY8(uVar14, uVar14) || CARRY8(uVar14 * 2, ( ulong )((long)uVar17 < 0))) {
         uVar18 = 0x87;
      }

      uVar18 = uVar17 << 1 ^ uVar18;
      auVar9._8_8_ = uVar15;
      auVar9._0_8_ = uVar18;
      pauVar16 = param_1 + 3;
      if (( param_3 & 0xf ) != 0) {
         uVar17 = 0;
         if (CARRY8(uVar15, uVar15) || CARRY8(uVar15 * 2, ( ulong )((long)uVar18 < 0))) {
            uVar17 = 0x87;
         }

         auVar23 = vmovdqa64_avx512vl(auVar9);
         auVar5._8_8_ = uVar15 * 2 + ( ulong )((long)uVar18 < 0);
         auVar5._0_8_ = uVar18 << 1 ^ uVar17;
         auVar19 = *param_4;
         auVar24 = param_4[1];
         auVar25 = aesdec(*param_1 ^ auVar22 ^ auVar19, auVar24);
         auVar27 = aesdec(param_1[1] ^ auVar4 ^ auVar19, auVar24);
         auVar28 = aesdec(param_1[2] ^ auVar5 ^ auVar19, auVar24);
         auVar19 = param_4[2];
         auVar24 = aesdec(auVar25, auVar19);
         auVar25 = aesdec(auVar27, auVar19);
         auVar27 = aesdec(auVar28, auVar19);
         auVar19 = param_4[3];
         for (int i = 0; i < 7; i++) {
            auVar24 = aesdec(auVar24, auVar19);
            auVar25 = aesdec(auVar25, auVar19);
            auVar27 = aesdec(auVar27, auVar19);
            auVar19 = param_4[( i + 4 )];
         }

         auVar24 = aesdeclast(auVar24, auVar19);
         auVar25 = aesdeclast(auVar25, auVar19);
         auVar27 = aesdeclast(auVar27, auVar19);
         auVar27 = auVar27 ^ auVar5;
         *param_2 = auVar24 ^ auVar22;
         param_2[1] = auVar25 ^ auVar4;
         param_2 = param_2 + 3;
         in_ZMM0 = ZEXT1664(auVar23);
         goto LAB_00102b1f;
      }

      auVar19 = *param_4;
      auVar24 = param_4[1];
      auVar23 = aesdec(*param_1 ^ auVar22 ^ auVar19, auVar24);
      auVar25 = aesdec(param_1[1] ^ auVar4 ^ auVar19, auVar24);
      auVar27 = aesdec(param_1[2] ^ auVar9 ^ auVar19, auVar24);
      auVar19 = param_4[2];
      auVar24 = aesdec(auVar23, auVar19);
      auVar23 = aesdec(auVar25, auVar19);
      auVar25 = aesdec(auVar27, auVar19);
      auVar19 = param_4[3];
      for (int i = 0; i < 7; i++) {
         auVar24 = aesdec(auVar24, auVar19);
         auVar23 = aesdec(auVar23, auVar19);
         auVar25 = aesdec(auVar25, auVar19);
         auVar19 = param_4[( i + 4 )];
      }

      in_ZMM0 = ZEXT1664(auVar19);
      auVar24 = aesdeclast(auVar24, auVar19);
      auVar23 = aesdeclast(auVar23, auVar19);
      auVar28 = aesdeclast(auVar25, auVar19);
      auVar28 = auVar28 ^ auVar9;
      *param_2 = auVar24 ^ auVar22;
      param_2[1] = auVar23 ^ auVar4;
      param_2 = param_2 + 3;
   }
 else if (uVar17 == 0x20) {
      uVar17 = 0;
      uVar14 = uStack_b8 * 2 + ( ulong )(local_c0 < 0);
      if (CARRY8(uStack_b8, uStack_b8) || CARRY8(uStack_b8 * 2, ( ulong )(local_c0 < 0))) {
         uVar17 = 0x87;
      }

      uVar17 = local_c0 << 1 ^ uVar17;
      auVar6._8_8_ = uVar14;
      auVar6._0_8_ = uVar17;
      pauVar16 = param_1 + 2;
      if (( param_3 & 0xf ) != 0) {
         uVar18 = 0;
         if (CARRY8(uVar14, uVar14) || CARRY8(uVar14 * 2, ( ulong )((long)uVar17 < 0))) {
            uVar18 = 0x87;
         }

         auVar19 = vmovdqa64_avx512vl(auVar6);
         auVar7._8_8_ = uVar14 * 2 + ( ulong )((long)uVar17 < 0);
         auVar7._0_8_ = uVar17 << 1 ^ uVar18;
         auVar24 = aesdec(*param_1 ^ auVar22 ^ *param_4, param_4[1]);
         auVar23 = aesdec(param_1[1] ^ auVar7 ^ *param_4, param_4[1]);
         for (int i = 0; i < 8; i++) {
            auVar24 = aesdec(auVar24, param_4[( i + 2 )]);
            auVar23 = aesdec(auVar23, param_4[( i + 2 )]);
         }

         auVar24 = aesdeclast(auVar24, param_4[10]);
         auVar27 = aesdeclast(auVar23, param_4[10]);
         auVar27 = auVar27 ^ auVar7;
         *param_2 = auVar24 ^ auVar22;
         param_2 = param_2 + 2;
         in_ZMM0 = ZEXT1664(auVar19);
         goto LAB_00102b1f;
      }

      auVar19 = aesdec(*param_1 ^ auVar22 ^ *param_4, param_4[1]);
      auVar24 = aesdec(param_1[1] ^ auVar6 ^ *param_4, param_4[1]);
      auVar19 = aesdec(auVar19, param_4[2]);
      for (int i = 0; i < 6; i++) {
         auVar24 = aesdec(auVar24, param_4[( i + 2 )]);
         auVar19 = aesdec(auVar19, param_4[( i + 3 )]);
      }

      auVar23 = aesdec(auVar24, param_4[8]);
      auVar24 = aesdec(auVar19, param_4[9]);
      auVar23 = aesdec(auVar23, param_4[9]);
      auVar19 = param_4[10];
      in_ZMM0 = ZEXT1664(auVar19);
      auVar24 = aesdeclast(auVar24, auVar19);
      auVar28 = aesdeclast(auVar23, auVar19);
      auVar28 = auVar28 ^ auVar6;
      *param_2 = auVar24 ^ auVar22;
      param_2 = param_2 + 2;
   }
 else if (uVar17 == 0x10) {
      pauVar16 = param_1 + 1;
      if (( param_3 & 0xf ) != 0) {
         uVar17 = 0;
         if (CARRY8(uStack_b8, uStack_b8) || CARRY8(uStack_b8 * 2, ( ulong )(local_c0 < 0))) {
            uVar17 = 0x87;
         }

         auVar19 = vmovdqa64_avx512vl(auVar22);
         auVar22._8_8_ = uStack_b8 * 2 + ( ulong )(local_c0 < 0);
         auVar22._0_8_ = local_c0 << 1 ^ uVar17;
         auVar24 = aesdec(*param_1 ^ auVar22 ^ *param_4, param_4[1]);
         for (int i = 0; i < 8; i++) {
            auVar24 = aesdec(auVar24, param_4[( i + 2 )]);
         }

         auVar27 = aesdeclast(auVar24, param_4[10]);
         auVar27 = auVar27 ^ auVar22;
         param_2 = param_2 + 1;
         in_ZMM0 = ZEXT1664(auVar19);
         goto LAB_00102b1f;
      }

      auVar19 = aesdec(*param_1 ^ auVar22 ^ *param_4, param_4[1]);
      for (int i = 0; i < 8; i++) {
         auVar19 = aesdec(auVar19, param_4[( i + 2 )]);
      }

      in_ZMM0 = ZEXT1664(param_4[10]);
      auVar28 = aesdeclast(auVar19, param_4[10]);
      auVar28 = auVar28 ^ auVar22;
      param_2 = param_2 + 1;
   }
 else {
      uVar17 = 0;
      uVar14 = uStack_b8 * 2 + ( ulong )(local_c0 < 0);
      if (CARRY8(uStack_b8, uStack_b8) || CARRY8(uStack_b8 * 2, ( ulong )(local_c0 < 0))) {
         uVar17 = 0x87;
      }

      uVar17 = local_c0 << 1 ^ uVar17;
      auVar1._8_8_ = uVar14;
      auVar1._0_8_ = uVar17;
      uVar18 = 0;
      uVar15 = uVar14 * 2 + ( ulong )((long)uVar17 < 0);
      if (CARRY8(uVar14, uVar14) || CARRY8(uVar14 * 2, ( ulong )((long)uVar17 < 0))) {
         uVar18 = 0x87;
      }

      uVar18 = uVar17 << 1 ^ uVar18;
      auVar8._8_8_ = uVar15;
      auVar8._0_8_ = uVar18;
      uVar17 = 0;
      uVar14 = uVar15 * 2 + ( ulong )((long)uVar18 < 0);
      if (CARRY8(uVar15, uVar15) || CARRY8(uVar15 * 2, ( ulong )((long)uVar18 < 0))) {
         uVar17 = 0x87;
      }

      uVar17 = uVar18 << 1 ^ uVar17;
      auVar10._8_8_ = uVar14;
      auVar10._0_8_ = uVar17;
      uVar18 = 0;
      uVar15 = uVar14 * 2 + ( ulong )((long)uVar17 < 0);
      if (CARRY8(uVar14, uVar14) || CARRY8(uVar14 * 2, ( ulong )((long)uVar17 < 0))) {
         uVar18 = 0x87;
      }

      uVar18 = uVar17 << 1 ^ uVar18;
      auVar11._8_8_ = uVar15;
      auVar11._0_8_ = uVar18;
      uVar17 = 0;
      uVar14 = uVar15 * 2 + ( ulong )((long)uVar18 < 0);
      if (CARRY8(uVar15, uVar15) || CARRY8(uVar15 * 2, ( ulong )((long)uVar18 < 0))) {
         uVar17 = 0x87;
      }

      uVar17 = uVar18 << 1 ^ uVar17;
      auVar12._8_8_ = uVar14;
      auVar12._0_8_ = uVar17;
      uVar18 = 0;
      uVar15 = uVar14 * 2 + ( ulong )((long)uVar17 < 0);
      if (CARRY8(uVar14, uVar14) || CARRY8(uVar14 * 2, ( ulong )((long)uVar17 < 0))) {
         uVar18 = 0x87;
      }

      uVar18 = uVar17 << 1 ^ uVar18;
      auVar13._8_8_ = uVar15;
      auVar13._0_8_ = uVar18;
      pauVar16 = param_1 + 7;
      if (( param_3 & 0xf ) == 0) {
         auVar19 = *param_4;
         auVar24 = param_4[1];
         auVar23 = aesdec(*param_1 ^ auVar22 ^ auVar19, auVar24);
         auVar25 = aesdec(param_1[1] ^ auVar1 ^ auVar19, auVar24);
         auVar27 = aesdec(param_1[2] ^ auVar8 ^ auVar19, auVar24);
         auVar28 = aesdec(param_1[3] ^ auVar10 ^ auVar19, auVar24);
         auVar30 = aesdec(param_1[4] ^ auVar11 ^ auVar19, auVar24);
         auVar33 = aesdec(param_1[5] ^ auVar12 ^ auVar19, auVar24);
         auVar35 = aesdec(param_1[6] ^ auVar13 ^ auVar19, auVar24);
         auVar19 = param_4[2];
         auVar24 = aesdec(auVar23, auVar19);
         auVar23 = aesdec(auVar25, auVar19);
         auVar25 = aesdec(auVar27, auVar19);
         auVar27 = aesdec(auVar28, auVar19);
         auVar28 = aesdec(auVar30, auVar19);
         auVar30 = aesdec(auVar33, auVar19);
         auVar33 = aesdec(auVar35, auVar19);
         auVar19 = param_4[3];
         auVar24 = aesdec(auVar24, auVar19);
         auVar23 = aesdec(auVar23, auVar19);
         auVar25 = aesdec(auVar25, auVar19);
         auVar27 = aesdec(auVar27, auVar19);
         auVar28 = aesdec(auVar28, auVar19);
         auVar30 = aesdec(auVar30, auVar19);
         for (int i = 0; i < 5; i++) {
            auVar33 = aesdec(auVar33, auVar19);
            auVar19 = param_4[( i + 4 )];
            auVar24 = aesdec(auVar24, auVar19);
            auVar23 = aesdec(auVar23, auVar19);
            auVar25 = aesdec(auVar25, auVar19);
            auVar27 = aesdec(auVar27, auVar19);
            auVar28 = aesdec(auVar28, auVar19);
            auVar30 = aesdec(auVar30, auVar19);
         }

         auVar35 = aesdec(auVar33, auVar19);
         auVar19 = param_4[9];
         auVar24 = aesdec(auVar24, auVar19);
         auVar23 = aesdec(auVar23, auVar19);
         auVar25 = aesdec(auVar25, auVar19);
         auVar27 = aesdec(auVar27, auVar19);
         auVar28 = aesdec(auVar28, auVar19);
         auVar33 = aesdec(auVar30, auVar19);
         auVar35 = aesdec(auVar35, auVar19);
         auVar19 = param_4[10];
         in_ZMM0 = ZEXT1664(auVar19);
         auVar24 = aesdeclast(auVar24, auVar19);
         auVar23 = aesdeclast(auVar23, auVar19);
         auVar25 = aesdeclast(auVar25, auVar19);
         auVar27 = aesdeclast(auVar27, auVar19);
         auVar30 = aesdeclast(auVar28, auVar19);
         auVar33 = aesdeclast(auVar33, auVar19);
         auVar28 = aesdeclast(auVar35, auVar19);
         auVar28 = auVar28 ^ auVar13;
         *param_2 = auVar24 ^ auVar22;
         param_2[1] = auVar23 ^ auVar1;
         param_2[2] = auVar25 ^ auVar8;
         param_2[3] = auVar27 ^ auVar10;
         param_2[4] = auVar30 ^ auVar11;
         param_2[5] = auVar33 ^ auVar12;
         param_2 = param_2 + 7;
      }
 else {
         uVar17 = 0;
         if (CARRY8(uVar15, uVar15) || CARRY8(uVar15 * 2, ( ulong )((long)uVar18 < 0))) {
            uVar17 = 0x87;
         }

         vmovdqa64_avx512vl(auVar13);
         auVar2._8_8_ = uVar15 * 2 + ( ulong )((long)uVar18 < 0);
         auVar2._0_8_ = uVar18 << 1 ^ uVar17;
         auVar19 = *param_4;
         auVar24 = param_4[1];
         auVar23 = aesdec(*param_1 ^ auVar22 ^ auVar19, auVar24);
         auVar25 = aesdec(param_1[1] ^ auVar1 ^ auVar19, auVar24);
         auVar27 = aesdec(param_1[2] ^ auVar8 ^ auVar19, auVar24);
         auVar28 = aesdec(param_1[3] ^ auVar10 ^ auVar19, auVar24);
         auVar30 = aesdec(param_1[4] ^ auVar11 ^ auVar19, auVar24);
         auVar33 = aesdec(param_1[5] ^ auVar12 ^ auVar19, auVar24);
         auVar35 = aesdec(param_1[6] ^ auVar2 ^ auVar19, auVar24);
         auVar19 = param_4[2];
         auVar24 = aesdec(auVar23, auVar19);
         auVar23 = aesdec(auVar25, auVar19);
         auVar25 = aesdec(auVar27, auVar19);
         auVar27 = aesdec(auVar28, auVar19);
         auVar28 = aesdec(auVar30, auVar19);
         auVar30 = aesdec(auVar33, auVar19);
         auVar33 = aesdec(auVar35, auVar19);
         auVar19 = param_4[3];
         auVar24 = aesdec(auVar24, auVar19);
         auVar23 = aesdec(auVar23, auVar19);
         auVar25 = aesdec(auVar25, auVar19);
         auVar27 = aesdec(auVar27, auVar19);
         auVar28 = aesdec(auVar28, auVar19);
         auVar30 = aesdec(auVar30, auVar19);
         for (int i = 0; i < 4; i++) {
            auVar33 = aesdec(auVar33, auVar19);
            auVar19 = param_4[( i + 4 )];
            auVar24 = aesdec(auVar24, auVar19);
            auVar23 = aesdec(auVar23, auVar19);
            auVar25 = aesdec(auVar25, auVar19);
            auVar27 = aesdec(auVar27, auVar19);
            auVar28 = aesdec(auVar28, auVar19);
            auVar30 = aesdec(auVar30, auVar19);
         }

         auVar35 = aesdec(auVar33, auVar19);
         auVar19 = param_4[8];
         auVar24 = aesdec(auVar24, auVar19);
         auVar23 = aesdec(auVar23, auVar19);
         auVar25 = aesdec(auVar25, auVar19);
         auVar27 = aesdec(auVar27, auVar19);
         auVar28 = aesdec(auVar28, auVar19);
         auVar33 = aesdec(auVar30, auVar19);
         auVar35 = aesdec(auVar35, auVar19);
         auVar19 = param_4[9];
         auVar24 = aesdec(auVar24, auVar19);
         auVar23 = aesdec(auVar23, auVar19);
         auVar25 = aesdec(auVar25, auVar19);
         auVar27 = aesdec(auVar27, auVar19);
         auVar30 = aesdec(auVar28, auVar19);
         auVar33 = aesdec(auVar33, auVar19);
         auVar35 = aesdec(auVar35, auVar19);
         auVar19 = param_4[10];
         auVar24 = aesdeclast(auVar24, auVar19);
         auVar23 = aesdeclast(auVar23, auVar19);
         auVar25 = aesdeclast(auVar25, auVar19);
         auVar28 = aesdeclast(auVar27, auVar19);
         auVar30 = aesdeclast(auVar30, auVar19);
         auVar33 = aesdeclast(auVar33, auVar19);
         auVar27 = aesdeclast(auVar35, auVar19);
         auVar27 = auVar27 ^ auVar2;
         *param_2 = auVar24 ^ auVar22;
         param_2[1] = auVar23 ^ auVar1;
         param_2[2] = auVar25 ^ auVar8;
         param_2[3] = auVar28 ^ auVar10;
         param_2[4] = auVar30 ^ auVar11;
         param_2[5] = auVar33 ^ auVar12;
         param_2 = param_2 + 7;
         auVar22 = vmovdqa64_avx512vl(auVar19);
         in_ZMM0 = ZEXT1664(auVar22);
         LAB_00102b1f:param_3 = param_3 & 0xf;
         auVar19 = vpshufb_avx(auVar27, *(undefined1(*) [16])( &vpshufb_shf_table + param_3 ));
         auVar22 = *(undefined1(*) [16])( pauVar16[-1] + param_3 );
         *(undefined1(*) [16])( param_2[-1] + param_3 ) = auVar19;
         auVar22 = vpshufb_avx(auVar22, *(undefined1(*) [16])( &UNK_00109810 + -param_3 ) ^ _mask1);
         auVar22 = vpblendvb_avx(auVar22, auVar27, *(undefined1(*) [16])( &UNK_00109810 + -param_3 ) ^ _mask1);
         auVar22 = aesdec(auVar22 ^ in_ZMM0._0_16_ ^ *param_4, param_4[1]);
         for (int i = 0; i < 8; i++) {
            auVar22 = aesdec(auVar22, param_4[( i + 2 )]);
         }

         auVar28 = aesdeclast(auVar22, param_4[10]);
         auVar28 = auVar28 ^ in_ZMM0._0_16_;
      }

   }

   param_2[-1] = auVar28;
   LAB_00102bbb:vpxorq_avx512f(in_ZMM0, in_ZMM0);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void aesni_xts_256_encrypt_avx512(undefined1 (*param_1)[64], undefined1 (*param_2)[16], ulong param_3, undefined1 (*param_4)[16], undefined1 (*param_5)[16], undefined1 (*param_6)[16]) {
   undefined1 auVar1[16];
   undefined1 *puVar2;
   undefined1 auVar3[32];
   undefined1 auVar4[32];
   undefined1 auVar5[64];
   undefined1 auVar6[64];
   undefined1 auVar7[64];
   undefined1 auVar8[64];
   undefined1 in_ZMM0[64];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 in_register_000012b0;
   undefined1 in_register_000012b1;
   undefined1 in_register_000012b2;
   undefined1 in_register_000012b3;
   undefined1 in_register_000012b4;
   undefined1 in_register_000012b5;
   undefined1 in_register_000012b6;
   undefined1 in_register_000012b7;
   undefined1 in_register_000012b8;
   undefined1 in_register_000012b9;
   undefined1 in_register_000012ba;
   undefined1 in_register_000012bb;
   undefined1 in_register_000012bc;
   undefined1 in_register_000012bd;
   undefined1 in_register_000012be;
   undefined1 in_register_000012bf;
   undefined1 in_ZMM10[64];
   auVar9 = aesenc(*param_6 ^ *param_5, param_5[1]);
   for (int i = 0; i < 12; i++) {
      auVar9 = aesenc(auVar9, param_5[( i + 2 )]);
   }

   auVar9 = aesenclast(auVar9, param_5[0xe]);
   if ((long)param_3 < 0x80) {
      vpbroadcastq_avx512f();
      if (0xf < param_3) {
         auVar5 = vbroadcasti32x4_avx512f(auVar9);
         auVar7 = vbroadcasti32x4_avx512f(_shufb_15_7);
         param_3 = param_3 & 0x70;
         for (int i = 0; i < 6; i++) {
            if (param_3 == ( -16*i + 96 )) {
               auVar7 = vpshufb_avx512bw(auVar5, auVar7);
               vpsllvq_avx512f(auVar5, _const_dq3210);
               vpsrlvq_avx512f(auVar7, _const_dq5678);
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }

         }

         auVar7 = vpshufb_avx512bw(auVar5, auVar7);
         vpsllvq_avx512f(auVar5, _const_dq3210);
         vpsrlvq_avx512f(auVar7, _const_dq5678);
         /* WARNING: Bad instruction - Truncating control flow here */
         halt_baddata();
      }

   }
 else {
      auVar5 = vpbroadcastq_avx512f();
      if (0xff < (long)param_3) {
         auVar5 = vbroadcasti32x4_avx512f(auVar9);
         auVar7 = vbroadcasti32x4_avx512f(_shufb_15_7);
         auVar7 = vpshufb_avx512bw(auVar5, auVar7);
         vpsllvq_avx512f(auVar5, _const_dq3210);
         vpsrlvq_avx512f(auVar7, _const_dq5678);
         /* WARNING: Bad instruction - Truncating control flow here */
         halt_baddata();
      }

      if (0x7f < (long)param_3) {
         auVar5 = vbroadcasti32x4_avx512f(auVar9);
         auVar7 = vbroadcasti32x4_avx512f(_shufb_15_7);
         auVar7 = vpshufb_avx512bw(auVar5, auVar7);
         vpsllvq_avx512f(auVar5, _const_dq3210);
         vpsrlvq_avx512f(auVar7, _const_dq5678);
         /* WARNING: Bad instruction - Truncating control flow here */
         halt_baddata();
      }

      if (param_3 != 0) {
         if (0x6f < (long)param_3) {
            auVar7 = vmovdqu8_avx512bw(*param_1);
            auVar8 = vmovdqu8_avx512bw(param_1[1]);
            auVar8[0x30] = in_register_000012b0;
            auVar8[0x31] = in_register_000012b1;
            auVar8[0x32] = in_register_000012b2;
            auVar8[0x33] = in_register_000012b3;
            auVar8[0x34] = in_register_000012b4;
            auVar8[0x35] = in_register_000012b5;
            auVar8[0x36] = in_register_000012b6;
            auVar8[0x37] = in_register_000012b7;
            auVar8[0x38] = in_register_000012b8;
            auVar8[0x39] = in_register_000012b9;
            auVar8[0x3a] = in_register_000012ba;
            auVar8[0x3b] = in_register_000012bb;
            auVar8[0x3c] = in_register_000012bc;
            auVar8[0x3d] = in_register_000012bd;
            auVar8[0x3e] = in_register_000012be;
            auVar8[0x3f] = in_register_000012bf;
            auVar6 = vbroadcasti32x4_avx512f(*param_4);
            vpternlogq_avx512f(auVar7, auVar5, auVar6, 0x96);
            vpternlogq_avx512f(auVar8, in_ZMM10, auVar6, 0x96);
            vbroadcasti32x4_avx512f(*(undefined1(*) [16])( *param_4 + 4 ));
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }

         if (0x5f < (long)param_3) {
            auVar7 = vmovdqu8_avx512bw(*param_1);
            auVar3 = vmovdqu8_avx512vl(*(undefined1(*) [32])param_1[1]);
            auVar8 = vbroadcasti32x4_avx512f(*param_4);
            vpternlogq_avx512f(auVar7, auVar5, auVar8, 0x96);
            vpternlogq_avx512f(ZEXT3264(auVar3), in_ZMM10, auVar8, 0x96);
            vbroadcasti32x4_avx512f(*(undefined1(*) [16])( *param_4 + 4 ));
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }

         if (0x4f < (long)param_3) {
            auVar7 = vmovdqu8_avx512bw(*param_1);
            auVar8 = vbroadcasti32x4_avx512f(*param_4);
            vpternlogq_avx512f(auVar7, auVar5, auVar8, 0x96);
            vpternlogq_avx512f(ZEXT1664(*(undefined1(*) [16])param_1[1]), in_ZMM10, auVar8, 0x96);
            vbroadcasti32x4_avx512f(*(undefined1(*) [16])( *param_4 + 4 ));
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }

         if (0x3f < (long)param_3) {
            auVar7 = vmovdqu8_avx512bw(*param_1);
            auVar8 = vbroadcasti32x4_avx512f(*param_4);
            vpternlogq_avx512f(auVar7, auVar5, auVar8, 0x96);
            vbroadcasti32x4_avx512f(*(undefined1(*) [16])( *param_4 + 4 ));
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }

         if (0x2f < (long)param_3) {
            auVar7 = vmovdqu8_avx512bw(*param_1);
            auVar8 = vbroadcasti32x4_avx512f(*param_4);
            vpternlogq_avx512f(ZEXT4864(auVar7._0_48_), auVar5, auVar8, 0x96);
            vbroadcasti32x4_avx512f(*(undefined1(*) [16])( *param_4 + 4 ));
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }

         if (0x1f < (long)param_3) {
            auVar3 = vmovdqu8_avx512vl(*(undefined1(*) [32])*param_1);
            auVar4 = vbroadcasti32x4_avx512vl(*param_4);
            vpternlogq_avx512vl(auVar3, auVar5._0_32_, auVar4, 0x96);
            vbroadcasti32x4_avx512vl(*(undefined1(*) [16])( *param_4 + 4 ));
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }

         auVar9 = auVar5._0_16_;
         if ((long)param_3 < 0x10) {
            auVar10 = in_ZMM0._0_16_;
            in_ZMM0 = ZEXT1664(auVar9);
         }
 else {
            puVar2 = *param_1;
            param_1 = (undefined1(*) [64])( *param_1 + 0x10 );
            auVar10 = aesenc(*(undefined1(*) [16])puVar2 ^ auVar9 ^ *param_4, param_4[1]);
            for (int i = 0; i < 12; i++) {
               auVar10 = aesenc(auVar10, param_4[( i + 2 )]);
            }

            auVar10 = aesenclast(auVar10, param_4[0xe]);
            auVar10 = auVar10 ^ auVar9;
            *param_2 = auVar10;
            param_2 = param_2 + 1;
            auVar9 = vextracti32x4_avx512f(auVar5, 1);
            in_ZMM0 = ZEXT1664(auVar9);
            param_3 = param_3 & 0xf;
            if (param_3 == 0) goto LAB_001053ae;
         }

         auVar1 = vpshufb_avx(auVar10, *(undefined1(*) [16])( &vpshufb_shf_table + param_3 ));
         auVar9 = *(undefined1(*) [16])( param_1[-1] + param_3 + 0x30 );
         *(undefined1(*) [16])( param_2[-1] + param_3 ) = auVar1;
         auVar9 = vpshufb_avx(auVar9, *(undefined1(*) [16])( &UNK_00109810 + -param_3 ) ^ _mask1);
         auVar9 = vpblendvb_avx(auVar9, auVar10, *(undefined1(*) [16])( &UNK_00109810 + -param_3 ) ^ _mask1);
         auVar9 = aesenc(auVar9 ^ in_ZMM0._0_16_ ^ *param_4, param_4[1]);
         for (int i = 0; i < 12; i++) {
            auVar9 = aesenc(auVar9, param_4[( i + 2 )]);
         }

         auVar9 = aesenclast(auVar9, param_4[0xe]);
         param_2[-1] = auVar9 ^ in_ZMM0._0_16_;
      }

   }

   LAB_001053ae:vpxorq_avx512f(in_ZMM0, in_ZMM0);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void aesni_xts_256_decrypt_avx512(undefined1 (*param_1)[16], undefined1 (*param_2)[16], ulong param_3, undefined1 (*param_4)[16], undefined1 (*param_5)[16], undefined1 (*param_6)[16]) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   ulong uVar14;
   ulong uVar15;
   undefined1(*pauVar16)[16];
   ulong uVar17;
   ulong uVar18;
   undefined1 auVar19[16];
   undefined1 auVar20[64];
   undefined1 auVar21[64];
   undefined1 in_ZMM0[64];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   undefined1 auVar34[16];
   undefined1 auVar35[16];
   long local_c0;
   ulong uStack_b8;
   auVar22 = aesenc(*param_6 ^ *param_5, param_5[1]);
   for (int i = 0; i < 12; i++) {
      auVar22 = aesenc(auVar22, param_5[( i + 2 )]);
   }

   auVar22 = aesenclast(auVar22, param_5[0xe]);
   if (0x7f < param_3) {
      vpbroadcastq_avx512f();
      if ((long)param_3 < 0x100) {
         auVar20 = vbroadcasti32x4_avx512f(auVar22);
         auVar21 = vbroadcasti32x4_avx512f(_shufb_15_7);
         auVar21 = vpshufb_avx512bw(auVar20, auVar21);
         vpsllvq_avx512f(auVar20, _const_dq3210);
         vpsrlvq_avx512f(auVar21, _const_dq5678);
         /* WARNING: Bad instruction - Truncating control flow here */
         halt_baddata();
      }

      auVar20 = vbroadcasti32x4_avx512f(auVar22);
      auVar21 = vbroadcasti32x4_avx512f(_shufb_15_7);
      auVar21 = vpshufb_avx512bw(auVar20, auVar21);
      vpsllvq_avx512f(auVar20, _const_dq3210);
      vpsrlvq_avx512f(auVar21, _const_dq5678);
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   if (param_3 < 0x10) goto LAB_0010796f;
   uVar17 = param_3 & 0x70;
   local_c0 = auVar22._0_8_;
   uStack_b8 = auVar22._8_8_;
   if (uVar17 == 0x60) {
      uVar17 = 0;
      uVar14 = uStack_b8 * 2 + ( ulong )(local_c0 < 0);
      if (CARRY8(uStack_b8, uStack_b8) || CARRY8(uStack_b8 * 2, ( ulong )(local_c0 < 0))) {
         uVar17 = 0x87;
      }

      uVar17 = local_c0 << 1 ^ uVar17;
      auVar19._8_8_ = uVar14;
      auVar19._0_8_ = uVar17;
      uVar18 = 0;
      uVar15 = uVar14 * 2 + ( ulong )((long)uVar17 < 0);
      if (CARRY8(uVar14, uVar14) || CARRY8(uVar14 * 2, ( ulong )((long)uVar17 < 0))) {
         uVar18 = 0x87;
      }

      uVar18 = uVar17 << 1 ^ uVar18;
      auVar24._8_8_ = uVar15;
      auVar24._0_8_ = uVar18;
      uVar17 = 0;
      uVar14 = uVar15 * 2 + ( ulong )((long)uVar18 < 0);
      if (CARRY8(uVar15, uVar15) || CARRY8(uVar15 * 2, ( ulong )((long)uVar18 < 0))) {
         uVar17 = 0x87;
      }

      uVar17 = uVar18 << 1 ^ uVar17;
      auVar23._8_8_ = uVar14;
      auVar23._0_8_ = uVar17;
      uVar18 = 0;
      uVar15 = uVar14 * 2 + ( ulong )((long)uVar17 < 0);
      if (CARRY8(uVar14, uVar14) || CARRY8(uVar14 * 2, ( ulong )((long)uVar17 < 0))) {
         uVar18 = 0x87;
      }

      uVar18 = uVar17 << 1 ^ uVar18;
      auVar25._8_8_ = uVar15;
      auVar25._0_8_ = uVar18;
      uVar17 = 0;
      uVar14 = uVar15 * 2 + ( ulong )((long)uVar18 < 0);
      if (CARRY8(uVar15, uVar15) || CARRY8(uVar15 * 2, ( ulong )((long)uVar18 < 0))) {
         uVar17 = 0x87;
      }

      uVar17 = uVar18 << 1 ^ uVar17;
      auVar27._8_8_ = uVar14;
      auVar27._0_8_ = uVar17;
      pauVar16 = param_1 + 6;
      if (( param_3 & 0xf ) != 0) {
         uVar18 = 0;
         if (CARRY8(uVar14, uVar14) || CARRY8(uVar14 * 2, ( ulong )((long)uVar17 < 0))) {
            uVar18 = 0x87;
         }

         auVar33 = vmovdqa64_avx512vl(auVar27);
         auVar30._8_8_ = uVar14 * 2 + ( ulong )((long)uVar17 < 0);
         auVar30._0_8_ = uVar17 << 1 ^ uVar18;
         auVar27 = *param_4;
         auVar28 = param_4[1];
         auVar35 = aesdec(*param_1 ^ auVar22 ^ auVar27, auVar28);
         auVar26 = aesdec(param_1[1] ^ auVar19 ^ auVar27, auVar28);
         auVar29 = aesdec(param_1[2] ^ auVar24 ^ auVar27, auVar28);
         auVar32 = aesdec(param_1[3] ^ auVar23 ^ auVar27, auVar28);
         auVar31 = aesdec(param_1[4] ^ auVar25 ^ auVar27, auVar28);
         auVar34 = aesdec(param_1[5] ^ auVar30 ^ auVar27, auVar28);
         auVar27 = param_4[2];
         auVar28 = aesdec(auVar35, auVar27);
         auVar35 = aesdec(auVar26, auVar27);
         auVar26 = aesdec(auVar29, auVar27);
         auVar29 = aesdec(auVar32, auVar27);
         auVar32 = aesdec(auVar31, auVar27);
         auVar31 = aesdec(auVar34, auVar27);
         auVar27 = param_4[3];
         for (int i = 0; i < 11; i++) {
            auVar28 = aesdec(auVar28, auVar27);
            auVar35 = aesdec(auVar35, auVar27);
            auVar26 = aesdec(auVar26, auVar27);
            auVar29 = aesdec(auVar29, auVar27);
            auVar32 = aesdec(auVar32, auVar27);
            auVar31 = aesdec(auVar31, auVar27);
            auVar27 = param_4[( i + 4 )];
         }

         auVar28 = aesdeclast(auVar28, auVar27);
         auVar35 = aesdeclast(auVar35, auVar27);
         auVar26 = aesdeclast(auVar26, auVar27);
         auVar29 = aesdeclast(auVar29, auVar27);
         auVar32 = aesdeclast(auVar32, auVar27);
         auVar27 = aesdeclast(auVar31, auVar27);
         auVar27 = auVar27 ^ auVar30;
         *param_2 = auVar28 ^ auVar22;
         param_2[1] = auVar35 ^ auVar19;
         param_2[2] = auVar26 ^ auVar24;
         param_2[3] = auVar29 ^ auVar23;
         param_2[4] = auVar32 ^ auVar25;
         param_2 = param_2 + 6;
         in_ZMM0 = ZEXT1664(auVar33);
         goto LAB_001078af;
      }

      auVar28 = *param_4;
      auVar30 = param_4[1];
      auVar33 = aesdec(*param_1 ^ auVar22 ^ auVar28, auVar30);
      auVar35 = aesdec(param_1[1] ^ auVar19 ^ auVar28, auVar30);
      auVar26 = aesdec(param_1[2] ^ auVar24 ^ auVar28, auVar30);
      auVar29 = aesdec(param_1[3] ^ auVar23 ^ auVar28, auVar30);
      auVar32 = aesdec(param_1[4] ^ auVar25 ^ auVar28, auVar30);
      auVar31 = aesdec(param_1[5] ^ auVar27 ^ auVar28, auVar30);
      auVar28 = param_4[2];
      auVar30 = aesdec(auVar33, auVar28);
      auVar33 = aesdec(auVar35, auVar28);
      auVar35 = aesdec(auVar26, auVar28);
      auVar26 = aesdec(auVar29, auVar28);
      auVar29 = aesdec(auVar32, auVar28);
      auVar32 = aesdec(auVar31, auVar28);
      auVar28 = param_4[3];
      for (int i = 0; i < 11; i++) {
         auVar30 = aesdec(auVar30, auVar28);
         auVar33 = aesdec(auVar33, auVar28);
         auVar35 = aesdec(auVar35, auVar28);
         auVar26 = aesdec(auVar26, auVar28);
         auVar29 = aesdec(auVar29, auVar28);
         auVar32 = aesdec(auVar32, auVar28);
         auVar28 = param_4[( i + 4 )];
      }

      in_ZMM0 = ZEXT1664(auVar28);
      auVar30 = aesdeclast(auVar30, auVar28);
      auVar33 = aesdeclast(auVar33, auVar28);
      auVar35 = aesdeclast(auVar35, auVar28);
      auVar26 = aesdeclast(auVar26, auVar28);
      auVar29 = aesdeclast(auVar29, auVar28);
      auVar28 = aesdeclast(auVar32, auVar28);
      auVar28 = auVar28 ^ auVar27;
      *param_2 = auVar30 ^ auVar22;
      param_2[1] = auVar33 ^ auVar19;
      param_2[2] = auVar35 ^ auVar24;
      param_2[3] = auVar26 ^ auVar23;
      param_2[4] = auVar29 ^ auVar25;
      param_2 = param_2 + 6;
   }
 else if (uVar17 == 0x50) {
      uVar17 = 0;
      uVar14 = uStack_b8 * 2 + ( ulong )(local_c0 < 0);
      if (CARRY8(uStack_b8, uStack_b8) || CARRY8(uStack_b8 * 2, ( ulong )(local_c0 < 0))) {
         uVar17 = 0x87;
      }

      uVar17 = local_c0 << 1 ^ uVar17;
      auVar33._8_8_ = uVar14;
      auVar33._0_8_ = uVar17;
      uVar18 = 0;
      uVar15 = uVar14 * 2 + ( ulong )((long)uVar17 < 0);
      if (CARRY8(uVar14, uVar14) || CARRY8(uVar14 * 2, ( ulong )((long)uVar17 < 0))) {
         uVar18 = 0x87;
      }

      uVar18 = uVar17 << 1 ^ uVar18;
      auVar35._8_8_ = uVar15;
      auVar35._0_8_ = uVar18;
      uVar17 = 0;
      uVar14 = uVar15 * 2 + ( ulong )((long)uVar18 < 0);
      if (CARRY8(uVar15, uVar15) || CARRY8(uVar15 * 2, ( ulong )((long)uVar18 < 0))) {
         uVar17 = 0x87;
      }

      uVar17 = uVar18 << 1 ^ uVar17;
      auVar26._8_8_ = uVar14;
      auVar26._0_8_ = uVar17;
      uVar18 = 0;
      uVar15 = uVar14 * 2 + ( ulong )((long)uVar17 < 0);
      if (CARRY8(uVar14, uVar14) || CARRY8(uVar14 * 2, ( ulong )((long)uVar17 < 0))) {
         uVar18 = 0x87;
      }

      uVar18 = uVar17 << 1 ^ uVar18;
      auVar29._8_8_ = uVar15;
      auVar29._0_8_ = uVar18;
      pauVar16 = param_1 + 5;
      if (( param_3 & 0xf ) != 0) {
         uVar17 = 0;
         if (CARRY8(uVar15, uVar15) || CARRY8(uVar15 * 2, ( ulong )((long)uVar18 < 0))) {
            uVar17 = 0x87;
         }

         auVar23 = vmovdqa64_avx512vl(auVar29);
         auVar28._8_8_ = uVar15 * 2 + ( ulong )((long)uVar18 < 0);
         auVar28._0_8_ = uVar18 << 1 ^ uVar17;
         auVar19 = *param_4;
         auVar24 = param_4[1];
         auVar25 = aesdec(*param_1 ^ auVar22 ^ auVar19, auVar24);
         auVar27 = aesdec(param_1[1] ^ auVar33 ^ auVar19, auVar24);
         auVar30 = aesdec(param_1[2] ^ auVar35 ^ auVar19, auVar24);
         auVar29 = aesdec(param_1[3] ^ auVar26 ^ auVar19, auVar24);
         auVar32 = aesdec(param_1[4] ^ auVar28 ^ auVar19, auVar24);
         auVar19 = param_4[2];
         auVar24 = aesdec(auVar25, auVar19);
         auVar25 = aesdec(auVar27, auVar19);
         auVar27 = aesdec(auVar30, auVar19);
         auVar30 = aesdec(auVar29, auVar19);
         auVar29 = aesdec(auVar32, auVar19);
         auVar19 = param_4[3];
         auVar24 = aesdec(auVar24, auVar19);
         auVar25 = aesdec(auVar25, auVar19);
         auVar27 = aesdec(auVar27, auVar19);
         auVar30 = aesdec(auVar30, auVar19);
         for (int i = 0; i < 9; i++) {
            auVar29 = aesdec(auVar29, auVar19);
            auVar19 = param_4[( i + 4 )];
            auVar24 = aesdec(auVar24, auVar19);
            auVar25 = aesdec(auVar25, auVar19);
            auVar27 = aesdec(auVar27, auVar19);
            auVar30 = aesdec(auVar30, auVar19);
         }

         auVar32 = aesdec(auVar29, auVar19);
         auVar19 = param_4[0xd];
         auVar24 = aesdec(auVar24, auVar19);
         auVar25 = aesdec(auVar25, auVar19);
         auVar27 = aesdec(auVar27, auVar19);
         auVar29 = aesdec(auVar30, auVar19);
         auVar32 = aesdec(auVar32, auVar19);
         auVar19 = param_4[0xe];
         auVar24 = aesdeclast(auVar24, auVar19);
         auVar25 = aesdeclast(auVar25, auVar19);
         auVar30 = aesdeclast(auVar27, auVar19);
         auVar29 = aesdeclast(auVar29, auVar19);
         auVar27 = aesdeclast(auVar32, auVar19);
         auVar27 = auVar27 ^ auVar28;
         *param_2 = auVar24 ^ auVar22;
         param_2[1] = auVar25 ^ auVar33;
         param_2[2] = auVar30 ^ auVar35;
         param_2[3] = auVar29 ^ auVar26;
         param_2 = param_2 + 5;
         in_ZMM0 = ZEXT1664(auVar23);
         goto LAB_001078af;
      }

      auVar19 = *param_4;
      auVar24 = param_4[1];
      auVar23 = aesdec(*param_1 ^ auVar22 ^ auVar19, auVar24);
      auVar25 = aesdec(param_1[1] ^ auVar33 ^ auVar19, auVar24);
      auVar27 = aesdec(param_1[2] ^ auVar35 ^ auVar19, auVar24);
      auVar28 = aesdec(param_1[3] ^ auVar26 ^ auVar19, auVar24);
      auVar30 = aesdec(param_1[4] ^ auVar29 ^ auVar19, auVar24);
      auVar19 = param_4[2];
      auVar24 = aesdec(auVar23, auVar19);
      auVar23 = aesdec(auVar25, auVar19);
      auVar25 = aesdec(auVar27, auVar19);
      auVar27 = aesdec(auVar28, auVar19);
      auVar28 = aesdec(auVar30, auVar19);
      auVar19 = param_4[3];
      for (int i = 0; i < 11; i++) {
         auVar24 = aesdec(auVar24, auVar19);
         auVar23 = aesdec(auVar23, auVar19);
         auVar25 = aesdec(auVar25, auVar19);
         auVar27 = aesdec(auVar27, auVar19);
         auVar28 = aesdec(auVar28, auVar19);
         auVar19 = param_4[( i + 4 )];
      }

      in_ZMM0 = ZEXT1664(auVar19);
      auVar24 = aesdeclast(auVar24, auVar19);
      auVar23 = aesdeclast(auVar23, auVar19);
      auVar25 = aesdeclast(auVar25, auVar19);
      auVar27 = aesdeclast(auVar27, auVar19);
      auVar28 = aesdeclast(auVar28, auVar19);
      auVar28 = auVar28 ^ auVar29;
      *param_2 = auVar24 ^ auVar22;
      param_2[1] = auVar23 ^ auVar33;
      param_2[2] = auVar25 ^ auVar35;
      param_2[3] = auVar27 ^ auVar26;
      param_2 = param_2 + 5;
   }
 else if (uVar17 == 0x40) {
      uVar17 = 0;
      uVar14 = uStack_b8 * 2 + ( ulong )(local_c0 < 0);
      if (CARRY8(uStack_b8, uStack_b8) || CARRY8(uStack_b8 * 2, ( ulong )(local_c0 < 0))) {
         uVar17 = 0x87;
      }

      uVar17 = local_c0 << 1 ^ uVar17;
      auVar32._8_8_ = uVar14;
      auVar32._0_8_ = uVar17;
      uVar18 = 0;
      uVar15 = uVar14 * 2 + ( ulong )((long)uVar17 < 0);
      if (CARRY8(uVar14, uVar14) || CARRY8(uVar14 * 2, ( ulong )((long)uVar17 < 0))) {
         uVar18 = 0x87;
      }

      uVar18 = uVar17 << 1 ^ uVar18;
      auVar31._8_8_ = uVar15;
      auVar31._0_8_ = uVar18;
      uVar17 = 0;
      uVar14 = uVar15 * 2 + ( ulong )((long)uVar18 < 0);
      if (CARRY8(uVar15, uVar15) || CARRY8(uVar15 * 2, ( ulong )((long)uVar18 < 0))) {
         uVar17 = 0x87;
      }

      uVar17 = uVar18 << 1 ^ uVar17;
      auVar34._8_8_ = uVar14;
      auVar34._0_8_ = uVar17;
      pauVar16 = param_1 + 4;
      if (( param_3 & 0xf ) != 0) {
         uVar18 = 0;
         if (CARRY8(uVar14, uVar14) || CARRY8(uVar14 * 2, ( ulong )((long)uVar17 < 0))) {
            uVar18 = 0x87;
         }

         auVar23 = vmovdqa64_avx512vl(auVar34);
         auVar3._8_8_ = uVar14 * 2 + ( ulong )((long)uVar17 < 0);
         auVar3._0_8_ = uVar17 << 1 ^ uVar18;
         auVar19 = *param_4;
         auVar24 = param_4[1];
         auVar25 = aesdec(*param_1 ^ auVar22 ^ auVar19, auVar24);
         auVar27 = aesdec(param_1[1] ^ auVar32 ^ auVar19, auVar24);
         auVar28 = aesdec(param_1[2] ^ auVar31 ^ auVar19, auVar24);
         auVar30 = aesdec(param_1[3] ^ auVar3 ^ auVar19, auVar24);
         auVar19 = param_4[2];
         auVar24 = aesdec(auVar25, auVar19);
         auVar25 = aesdec(auVar27, auVar19);
         auVar27 = aesdec(auVar28, auVar19);
         auVar28 = aesdec(auVar30, auVar19);
         auVar19 = param_4[3];
         auVar24 = aesdec(auVar24, auVar19);
         auVar25 = aesdec(auVar25, auVar19);
         auVar27 = aesdec(auVar27, auVar19);
         for (int i = 0; i < 10; i++) {
            auVar28 = aesdec(auVar28, auVar19);
            auVar19 = param_4[( i + 4 )];
            auVar24 = aesdec(auVar24, auVar19);
            auVar25 = aesdec(auVar25, auVar19);
            auVar27 = aesdec(auVar27, auVar19);
         }

         auVar30 = aesdec(auVar28, auVar19);
         auVar19 = param_4[0xe];
         auVar24 = aesdeclast(auVar24, auVar19);
         auVar25 = aesdeclast(auVar25, auVar19);
         auVar28 = aesdeclast(auVar27, auVar19);
         auVar27 = aesdeclast(auVar30, auVar19);
         auVar27 = auVar27 ^ auVar3;
         *param_2 = auVar24 ^ auVar22;
         param_2[1] = auVar25 ^ auVar32;
         param_2[2] = auVar28 ^ auVar31;
         param_2 = param_2 + 4;
         in_ZMM0 = ZEXT1664(auVar23);
         goto LAB_001078af;
      }

      auVar19 = *param_4;
      auVar24 = param_4[1];
      auVar23 = aesdec(*param_1 ^ auVar22 ^ auVar19, auVar24);
      auVar25 = aesdec(param_1[1] ^ auVar32 ^ auVar19, auVar24);
      auVar27 = aesdec(param_1[2] ^ auVar31 ^ auVar19, auVar24);
      auVar28 = aesdec(param_1[3] ^ auVar34 ^ auVar19, auVar24);
      auVar19 = param_4[2];
      auVar24 = aesdec(auVar23, auVar19);
      auVar23 = aesdec(auVar25, auVar19);
      auVar25 = aesdec(auVar27, auVar19);
      auVar27 = aesdec(auVar28, auVar19);
      auVar19 = param_4[3];
      for (int i = 0; i < 11; i++) {
         auVar24 = aesdec(auVar24, auVar19);
         auVar23 = aesdec(auVar23, auVar19);
         auVar25 = aesdec(auVar25, auVar19);
         auVar27 = aesdec(auVar27, auVar19);
         auVar19 = param_4[( i + 4 )];
      }

      in_ZMM0 = ZEXT1664(auVar19);
      auVar24 = aesdeclast(auVar24, auVar19);
      auVar23 = aesdeclast(auVar23, auVar19);
      auVar25 = aesdeclast(auVar25, auVar19);
      auVar28 = aesdeclast(auVar27, auVar19);
      auVar28 = auVar28 ^ auVar34;
      *param_2 = auVar24 ^ auVar22;
      param_2[1] = auVar23 ^ auVar32;
      param_2[2] = auVar25 ^ auVar31;
      param_2 = param_2 + 4;
   }
 else if (uVar17 == 0x30) {
      uVar17 = 0;
      uVar14 = uStack_b8 * 2 + ( ulong )(local_c0 < 0);
      if (CARRY8(uStack_b8, uStack_b8) || CARRY8(uStack_b8 * 2, ( ulong )(local_c0 < 0))) {
         uVar17 = 0x87;
      }

      uVar17 = local_c0 << 1 ^ uVar17;
      auVar4._8_8_ = uVar14;
      auVar4._0_8_ = uVar17;
      uVar18 = 0;
      uVar15 = uVar14 * 2 + ( ulong )((long)uVar17 < 0);
      if (CARRY8(uVar14, uVar14) || CARRY8(uVar14 * 2, ( ulong )((long)uVar17 < 0))) {
         uVar18 = 0x87;
      }

      uVar18 = uVar17 << 1 ^ uVar18;
      auVar9._8_8_ = uVar15;
      auVar9._0_8_ = uVar18;
      pauVar16 = param_1 + 3;
      if (( param_3 & 0xf ) != 0) {
         uVar17 = 0;
         if (CARRY8(uVar15, uVar15) || CARRY8(uVar15 * 2, ( ulong )((long)uVar18 < 0))) {
            uVar17 = 0x87;
         }

         auVar23 = vmovdqa64_avx512vl(auVar9);
         auVar5._8_8_ = uVar15 * 2 + ( ulong )((long)uVar18 < 0);
         auVar5._0_8_ = uVar18 << 1 ^ uVar17;
         auVar19 = *param_4;
         auVar24 = param_4[1];
         auVar25 = aesdec(*param_1 ^ auVar22 ^ auVar19, auVar24);
         auVar27 = aesdec(param_1[1] ^ auVar4 ^ auVar19, auVar24);
         auVar28 = aesdec(param_1[2] ^ auVar5 ^ auVar19, auVar24);
         auVar19 = param_4[2];
         auVar24 = aesdec(auVar25, auVar19);
         auVar25 = aesdec(auVar27, auVar19);
         auVar27 = aesdec(auVar28, auVar19);
         auVar19 = param_4[3];
         for (int i = 0; i < 11; i++) {
            auVar24 = aesdec(auVar24, auVar19);
            auVar25 = aesdec(auVar25, auVar19);
            auVar27 = aesdec(auVar27, auVar19);
            auVar19 = param_4[( i + 4 )];
         }

         auVar24 = aesdeclast(auVar24, auVar19);
         auVar25 = aesdeclast(auVar25, auVar19);
         auVar27 = aesdeclast(auVar27, auVar19);
         auVar27 = auVar27 ^ auVar5;
         *param_2 = auVar24 ^ auVar22;
         param_2[1] = auVar25 ^ auVar4;
         param_2 = param_2 + 3;
         in_ZMM0 = ZEXT1664(auVar23);
         goto LAB_001078af;
      }

      auVar19 = *param_4;
      auVar24 = param_4[1];
      auVar23 = aesdec(*param_1 ^ auVar22 ^ auVar19, auVar24);
      auVar25 = aesdec(param_1[1] ^ auVar4 ^ auVar19, auVar24);
      auVar27 = aesdec(param_1[2] ^ auVar9 ^ auVar19, auVar24);
      auVar19 = param_4[2];
      auVar24 = aesdec(auVar23, auVar19);
      auVar23 = aesdec(auVar25, auVar19);
      auVar25 = aesdec(auVar27, auVar19);
      auVar19 = param_4[3];
      for (int i = 0; i < 11; i++) {
         auVar24 = aesdec(auVar24, auVar19);
         auVar23 = aesdec(auVar23, auVar19);
         auVar25 = aesdec(auVar25, auVar19);
         auVar19 = param_4[( i + 4 )];
      }

      in_ZMM0 = ZEXT1664(auVar19);
      auVar24 = aesdeclast(auVar24, auVar19);
      auVar23 = aesdeclast(auVar23, auVar19);
      auVar28 = aesdeclast(auVar25, auVar19);
      auVar28 = auVar28 ^ auVar9;
      *param_2 = auVar24 ^ auVar22;
      param_2[1] = auVar23 ^ auVar4;
      param_2 = param_2 + 3;
   }
 else if (uVar17 == 0x20) {
      uVar17 = 0;
      uVar14 = uStack_b8 * 2 + ( ulong )(local_c0 < 0);
      if (CARRY8(uStack_b8, uStack_b8) || CARRY8(uStack_b8 * 2, ( ulong )(local_c0 < 0))) {
         uVar17 = 0x87;
      }

      uVar17 = local_c0 << 1 ^ uVar17;
      auVar6._8_8_ = uVar14;
      auVar6._0_8_ = uVar17;
      pauVar16 = param_1 + 2;
      if (( param_3 & 0xf ) != 0) {
         uVar18 = 0;
         if (CARRY8(uVar14, uVar14) || CARRY8(uVar14 * 2, ( ulong )((long)uVar17 < 0))) {
            uVar18 = 0x87;
         }

         auVar19 = vmovdqa64_avx512vl(auVar6);
         auVar7._8_8_ = uVar14 * 2 + ( ulong )((long)uVar17 < 0);
         auVar7._0_8_ = uVar17 << 1 ^ uVar18;
         auVar24 = aesdec(*param_1 ^ auVar22 ^ *param_4, param_4[1]);
         auVar23 = aesdec(param_1[1] ^ auVar7 ^ *param_4, param_4[1]);
         for (int i = 0; i < 12; i++) {
            auVar24 = aesdec(auVar24, param_4[( i + 2 )]);
            auVar23 = aesdec(auVar23, param_4[( i + 2 )]);
         }

         auVar24 = aesdeclast(auVar24, param_4[0xe]);
         auVar27 = aesdeclast(auVar23, param_4[0xe]);
         auVar27 = auVar27 ^ auVar7;
         *param_2 = auVar24 ^ auVar22;
         param_2 = param_2 + 2;
         in_ZMM0 = ZEXT1664(auVar19);
         goto LAB_001078af;
      }

      auVar19 = aesdec(*param_1 ^ auVar22 ^ *param_4, param_4[1]);
      auVar24 = aesdec(param_1[1] ^ auVar6 ^ *param_4, param_4[1]);
      auVar19 = aesdec(auVar19, param_4[2]);
      for (int i = 0; i < 10; i++) {
         auVar24 = aesdec(auVar24, param_4[( i + 2 )]);
         auVar19 = aesdec(auVar19, param_4[( i + 3 )]);
      }

      auVar23 = aesdec(auVar24, param_4[0xc]);
      auVar24 = aesdec(auVar19, param_4[0xd]);
      auVar23 = aesdec(auVar23, param_4[0xd]);
      auVar19 = param_4[0xe];
      in_ZMM0 = ZEXT1664(auVar19);
      auVar24 = aesdeclast(auVar24, auVar19);
      auVar28 = aesdeclast(auVar23, auVar19);
      auVar28 = auVar28 ^ auVar6;
      *param_2 = auVar24 ^ auVar22;
      param_2 = param_2 + 2;
   }
 else if (uVar17 == 0x10) {
      pauVar16 = param_1 + 1;
      if (( param_3 & 0xf ) != 0) {
         uVar17 = 0;
         if (CARRY8(uStack_b8, uStack_b8) || CARRY8(uStack_b8 * 2, ( ulong )(local_c0 < 0))) {
            uVar17 = 0x87;
         }

         auVar19 = vmovdqa64_avx512vl(auVar22);
         auVar22._8_8_ = uStack_b8 * 2 + ( ulong )(local_c0 < 0);
         auVar22._0_8_ = local_c0 << 1 ^ uVar17;
         auVar24 = aesdec(*param_1 ^ auVar22 ^ *param_4, param_4[1]);
         for (int i = 0; i < 12; i++) {
            auVar24 = aesdec(auVar24, param_4[( i + 2 )]);
         }

         auVar27 = aesdeclast(auVar24, param_4[0xe]);
         auVar27 = auVar27 ^ auVar22;
         param_2 = param_2 + 1;
         in_ZMM0 = ZEXT1664(auVar19);
         goto LAB_001078af;
      }

      auVar19 = aesdec(*param_1 ^ auVar22 ^ *param_4, param_4[1]);
      for (int i = 0; i < 12; i++) {
         auVar19 = aesdec(auVar19, param_4[( i + 2 )]);
      }

      in_ZMM0 = ZEXT1664(param_4[0xe]);
      auVar28 = aesdeclast(auVar19, param_4[0xe]);
      auVar28 = auVar28 ^ auVar22;
      param_2 = param_2 + 1;
   }
 else {
      uVar17 = 0;
      uVar14 = uStack_b8 * 2 + ( ulong )(local_c0 < 0);
      if (CARRY8(uStack_b8, uStack_b8) || CARRY8(uStack_b8 * 2, ( ulong )(local_c0 < 0))) {
         uVar17 = 0x87;
      }

      uVar17 = local_c0 << 1 ^ uVar17;
      auVar1._8_8_ = uVar14;
      auVar1._0_8_ = uVar17;
      uVar18 = 0;
      uVar15 = uVar14 * 2 + ( ulong )((long)uVar17 < 0);
      if (CARRY8(uVar14, uVar14) || CARRY8(uVar14 * 2, ( ulong )((long)uVar17 < 0))) {
         uVar18 = 0x87;
      }

      uVar18 = uVar17 << 1 ^ uVar18;
      auVar8._8_8_ = uVar15;
      auVar8._0_8_ = uVar18;
      uVar17 = 0;
      uVar14 = uVar15 * 2 + ( ulong )((long)uVar18 < 0);
      if (CARRY8(uVar15, uVar15) || CARRY8(uVar15 * 2, ( ulong )((long)uVar18 < 0))) {
         uVar17 = 0x87;
      }

      uVar17 = uVar18 << 1 ^ uVar17;
      auVar10._8_8_ = uVar14;
      auVar10._0_8_ = uVar17;
      uVar18 = 0;
      uVar15 = uVar14 * 2 + ( ulong )((long)uVar17 < 0);
      if (CARRY8(uVar14, uVar14) || CARRY8(uVar14 * 2, ( ulong )((long)uVar17 < 0))) {
         uVar18 = 0x87;
      }

      uVar18 = uVar17 << 1 ^ uVar18;
      auVar11._8_8_ = uVar15;
      auVar11._0_8_ = uVar18;
      uVar17 = 0;
      uVar14 = uVar15 * 2 + ( ulong )((long)uVar18 < 0);
      if (CARRY8(uVar15, uVar15) || CARRY8(uVar15 * 2, ( ulong )((long)uVar18 < 0))) {
         uVar17 = 0x87;
      }

      uVar17 = uVar18 << 1 ^ uVar17;
      auVar12._8_8_ = uVar14;
      auVar12._0_8_ = uVar17;
      uVar18 = 0;
      uVar15 = uVar14 * 2 + ( ulong )((long)uVar17 < 0);
      if (CARRY8(uVar14, uVar14) || CARRY8(uVar14 * 2, ( ulong )((long)uVar17 < 0))) {
         uVar18 = 0x87;
      }

      uVar18 = uVar17 << 1 ^ uVar18;
      auVar13._8_8_ = uVar15;
      auVar13._0_8_ = uVar18;
      pauVar16 = param_1 + 7;
      if (( param_3 & 0xf ) == 0) {
         auVar19 = *param_4;
         auVar24 = param_4[1];
         auVar23 = aesdec(*param_1 ^ auVar22 ^ auVar19, auVar24);
         auVar25 = aesdec(param_1[1] ^ auVar1 ^ auVar19, auVar24);
         auVar27 = aesdec(param_1[2] ^ auVar8 ^ auVar19, auVar24);
         auVar28 = aesdec(param_1[3] ^ auVar10 ^ auVar19, auVar24);
         auVar30 = aesdec(param_1[4] ^ auVar11 ^ auVar19, auVar24);
         auVar33 = aesdec(param_1[5] ^ auVar12 ^ auVar19, auVar24);
         auVar35 = aesdec(param_1[6] ^ auVar13 ^ auVar19, auVar24);
         auVar19 = param_4[2];
         auVar24 = aesdec(auVar23, auVar19);
         auVar23 = aesdec(auVar25, auVar19);
         auVar25 = aesdec(auVar27, auVar19);
         auVar27 = aesdec(auVar28, auVar19);
         auVar28 = aesdec(auVar30, auVar19);
         auVar30 = aesdec(auVar33, auVar19);
         auVar33 = aesdec(auVar35, auVar19);
         auVar19 = param_4[3];
         auVar24 = aesdec(auVar24, auVar19);
         auVar23 = aesdec(auVar23, auVar19);
         auVar25 = aesdec(auVar25, auVar19);
         auVar27 = aesdec(auVar27, auVar19);
         auVar28 = aesdec(auVar28, auVar19);
         auVar30 = aesdec(auVar30, auVar19);
         for (int i = 0; i < 9; i++) {
            auVar33 = aesdec(auVar33, auVar19);
            auVar19 = param_4[( i + 4 )];
            auVar24 = aesdec(auVar24, auVar19);
            auVar23 = aesdec(auVar23, auVar19);
            auVar25 = aesdec(auVar25, auVar19);
            auVar27 = aesdec(auVar27, auVar19);
            auVar28 = aesdec(auVar28, auVar19);
            auVar30 = aesdec(auVar30, auVar19);
         }

         auVar35 = aesdec(auVar33, auVar19);
         auVar19 = param_4[0xd];
         auVar24 = aesdec(auVar24, auVar19);
         auVar23 = aesdec(auVar23, auVar19);
         auVar25 = aesdec(auVar25, auVar19);
         auVar27 = aesdec(auVar27, auVar19);
         auVar28 = aesdec(auVar28, auVar19);
         auVar33 = aesdec(auVar30, auVar19);
         auVar35 = aesdec(auVar35, auVar19);
         auVar19 = param_4[0xe];
         in_ZMM0 = ZEXT1664(auVar19);
         auVar24 = aesdeclast(auVar24, auVar19);
         auVar23 = aesdeclast(auVar23, auVar19);
         auVar25 = aesdeclast(auVar25, auVar19);
         auVar27 = aesdeclast(auVar27, auVar19);
         auVar30 = aesdeclast(auVar28, auVar19);
         auVar33 = aesdeclast(auVar33, auVar19);
         auVar28 = aesdeclast(auVar35, auVar19);
         auVar28 = auVar28 ^ auVar13;
         *param_2 = auVar24 ^ auVar22;
         param_2[1] = auVar23 ^ auVar1;
         param_2[2] = auVar25 ^ auVar8;
         param_2[3] = auVar27 ^ auVar10;
         param_2[4] = auVar30 ^ auVar11;
         param_2[5] = auVar33 ^ auVar12;
         param_2 = param_2 + 7;
      }
 else {
         uVar17 = 0;
         if (CARRY8(uVar15, uVar15) || CARRY8(uVar15 * 2, ( ulong )((long)uVar18 < 0))) {
            uVar17 = 0x87;
         }

         vmovdqa64_avx512vl(auVar13);
         auVar2._8_8_ = uVar15 * 2 + ( ulong )((long)uVar18 < 0);
         auVar2._0_8_ = uVar18 << 1 ^ uVar17;
         auVar19 = *param_4;
         auVar24 = param_4[1];
         auVar23 = aesdec(*param_1 ^ auVar22 ^ auVar19, auVar24);
         auVar25 = aesdec(param_1[1] ^ auVar1 ^ auVar19, auVar24);
         auVar27 = aesdec(param_1[2] ^ auVar8 ^ auVar19, auVar24);
         auVar28 = aesdec(param_1[3] ^ auVar10 ^ auVar19, auVar24);
         auVar30 = aesdec(param_1[4] ^ auVar11 ^ auVar19, auVar24);
         auVar33 = aesdec(param_1[5] ^ auVar12 ^ auVar19, auVar24);
         auVar35 = aesdec(param_1[6] ^ auVar2 ^ auVar19, auVar24);
         auVar19 = param_4[2];
         auVar24 = aesdec(auVar23, auVar19);
         auVar23 = aesdec(auVar25, auVar19);
         auVar25 = aesdec(auVar27, auVar19);
         auVar27 = aesdec(auVar28, auVar19);
         auVar28 = aesdec(auVar30, auVar19);
         auVar30 = aesdec(auVar33, auVar19);
         auVar33 = aesdec(auVar35, auVar19);
         auVar19 = param_4[3];
         auVar24 = aesdec(auVar24, auVar19);
         auVar23 = aesdec(auVar23, auVar19);
         auVar25 = aesdec(auVar25, auVar19);
         auVar27 = aesdec(auVar27, auVar19);
         auVar28 = aesdec(auVar28, auVar19);
         auVar30 = aesdec(auVar30, auVar19);
         for (int i = 0; i < 8; i++) {
            auVar33 = aesdec(auVar33, auVar19);
            auVar19 = param_4[( i + 4 )];
            auVar24 = aesdec(auVar24, auVar19);
            auVar23 = aesdec(auVar23, auVar19);
            auVar25 = aesdec(auVar25, auVar19);
            auVar27 = aesdec(auVar27, auVar19);
            auVar28 = aesdec(auVar28, auVar19);
            auVar30 = aesdec(auVar30, auVar19);
         }

         auVar35 = aesdec(auVar33, auVar19);
         auVar19 = param_4[0xc];
         auVar24 = aesdec(auVar24, auVar19);
         auVar23 = aesdec(auVar23, auVar19);
         auVar25 = aesdec(auVar25, auVar19);
         auVar27 = aesdec(auVar27, auVar19);
         auVar28 = aesdec(auVar28, auVar19);
         auVar33 = aesdec(auVar30, auVar19);
         auVar35 = aesdec(auVar35, auVar19);
         auVar19 = param_4[0xd];
         auVar24 = aesdec(auVar24, auVar19);
         auVar23 = aesdec(auVar23, auVar19);
         auVar25 = aesdec(auVar25, auVar19);
         auVar27 = aesdec(auVar27, auVar19);
         auVar30 = aesdec(auVar28, auVar19);
         auVar33 = aesdec(auVar33, auVar19);
         auVar35 = aesdec(auVar35, auVar19);
         auVar19 = param_4[0xe];
         auVar24 = aesdeclast(auVar24, auVar19);
         auVar23 = aesdeclast(auVar23, auVar19);
         auVar25 = aesdeclast(auVar25, auVar19);
         auVar28 = aesdeclast(auVar27, auVar19);
         auVar30 = aesdeclast(auVar30, auVar19);
         auVar33 = aesdeclast(auVar33, auVar19);
         auVar27 = aesdeclast(auVar35, auVar19);
         auVar27 = auVar27 ^ auVar2;
         *param_2 = auVar24 ^ auVar22;
         param_2[1] = auVar23 ^ auVar1;
         param_2[2] = auVar25 ^ auVar8;
         param_2[3] = auVar28 ^ auVar10;
         param_2[4] = auVar30 ^ auVar11;
         param_2[5] = auVar33 ^ auVar12;
         param_2 = param_2 + 7;
         auVar22 = vmovdqa64_avx512vl(auVar19);
         in_ZMM0 = ZEXT1664(auVar22);
         LAB_001078af:param_3 = param_3 & 0xf;
         auVar19 = vpshufb_avx(auVar27, *(undefined1(*) [16])( &vpshufb_shf_table + param_3 ));
         auVar22 = *(undefined1(*) [16])( pauVar16[-1] + param_3 );
         *(undefined1(*) [16])( param_2[-1] + param_3 ) = auVar19;
         auVar22 = vpshufb_avx(auVar22, *(undefined1(*) [16])( &UNK_00109810 + -param_3 ) ^ _mask1);
         auVar22 = vpblendvb_avx(auVar22, auVar27, *(undefined1(*) [16])( &UNK_00109810 + -param_3 ) ^ _mask1);
         auVar22 = aesdec(auVar22 ^ in_ZMM0._0_16_ ^ *param_4, param_4[1]);
         for (int i = 0; i < 12; i++) {
            auVar22 = aesdec(auVar22, param_4[( i + 2 )]);
         }

         auVar28 = aesdeclast(auVar22, param_4[0xe]);
         auVar28 = auVar28 ^ in_ZMM0._0_16_;
      }

   }

   param_2[-1] = auVar28;
   LAB_0010796f:vpxorq_avx512f(in_ZMM0, in_ZMM0);
   return;
}


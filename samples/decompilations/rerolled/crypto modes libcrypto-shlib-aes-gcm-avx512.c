/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 ossl_vaes_vpclmulqdq_capable(void) {
   undefined8 uVar1;
   uVar1 = 0;
   if (( _DAT_001ab008 & 0x600c0030000 ) == 0x600c0030000) {
      uVar1 = 0x600c0030000;
   }
   return uVar1;
}/* WARNING: Control flow encountered bad instruction data *//* WARNING: Instruction at (ram,0x00100262) overlaps instruction at (ram,0x00100261)
    *//* WARNING: Removing unreachable block (ram,0x001002b9) *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void ossl_aes_gcm_init_avx512(undefined1 (*param_1)[16], undefined4 *param_2, undefined2 param_3, undefined8 param_4) {
   char cVar1;
   uint uVar2;
   code *pcVar3;
   byte bVar5;
   char *pcVar4;
   char unaff_BH;
   bool bVar6;
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[32];
   longdouble in_ST0;
   undefined1 in_ZMM0[64];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   auVar7 = vpxorq_avx512vl(in_ZMM0._0_16_, in_ZMM0._0_16_);
   uVar2 = *(uint*)param_1[0xf];
   pcVar4 = (char*)(ulong)uVar2;
   if (uVar2 == 9) {
      vpxorq_avx512vl(auVar7, *param_1);
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   if (uVar2 == 0xb) {
      vpxorq_avx512vl(auVar7, *param_1);
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   if (uVar2 == 0xd) {
      vpxorq_avx512vl(auVar7, *param_1);
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   auVar7 = vpshufb_avx512vl(auVar7, _SHUF_MASK);
   auVar8 = vmovdqa64_avx512vl(auVar7);
   auVar7 = vpsllq_avx512vl(auVar7, 1);
   auVar8 = vpsrlq_avx(auVar8, 0x3f);
   auVar11 = vpslldq_avx(auVar8, 8);
   auVar10 = vpsrldq_avx(auVar8, 8);
   auVar8 = vporq_avx512vl(auVar7, auVar11);
   auVar7 = vpshufd_avx(auVar10, 0x24);
   auVar7 = vpcmpeqd_avx(auVar7, _TWOONE);
   auVar7 = vpand_avx(auVar7, _POLY);
   auVar8 = vpxorq_avx512vl(auVar8, auVar7);
   auVar7 = vmovdqu64_avx512vl(auVar8);
   *(undefined1(*) [16])( param_2 + 0x54 ) = auVar7;
   auVar9 = vshufi32x4_avx512vl(ZEXT1632(auVar8), ZEXT1632(auVar8));
   out(*param_2, param_3);
   if (CONCAT62(( int6 )((ulong)param_4 >> 0x10), CONCAT11((char)( (ulong)param_4 >> 8 ) + (char)uVar2, (char)param_4)) == 0) {
      bVar5 = ( byte )(uVar2 >> 8);
      bVar6 = DAT_fffffffff172992e < bVar5;
      DAT_fffffffff172992e = DAT_fffffffff172992e - bVar5;
      cVar1 = *pcVar4;
      *pcVar4 = *pcVar4 + -1;
      if (*pcVar4 == '\0' || SBORROW1(cVar1, '\x01') != *pcVar4 < '\0') {
         pcVar4 = (char*)(ulong)CONCAT31(( int3 )(uVar2 >> 8), (char)uVar2 + 'b' + bVar6);
         *pcVar4 = *pcVar4 - unaff_BH;
         if (*pcVar4 != '\0') {
            pcVar3 = (code*)swi(1);
            ( *pcVar3 )();
            return;
         }
         vmovdqa64_avx512vl(auVar9);
         /* WARNING: Bad instruction - Truncating control flow here */
         halt_baddata();
      }
      *(long*)( pcVar4 + -0x11 ) = (long)in_ST0;
      if (*pcVar4 == '\0') {
         /* WARNING: Bad instruction - Truncating control flow here */
         halt_baddata();
      }
      pcVar3 = (code*)swi(1);
      ( *pcVar3 )(param_1, param_2 + -1);
      return;
   }
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* WARNING: Removing unreachable block (ram,0x00100fbb) *//* WARNING: Removing unreachable block (ram,0x001009a6) *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void ossl_aes_gcm_setiv_avx512(undefined1 (*param_1)[16], undefined1 (*param_2)[16], undefined1 (*param_3)[64], ulong param_4) {
   long lVar1;
   ulong *puVar2;
   ulong uVar3;
   int iVar4;
   byte bVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
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
   char cVar33;
   ulong in_RAX;
   uint uVar34;
   undefined1 auVar36[16];
   undefined1 auVar37[16];
   undefined1 auVar38[16];
   undefined1 auVar39[16];
   undefined1 auVar40[32];
   undefined1 auVar41[64];
   undefined1 auVar42[64];
   undefined1 auVar43[64];
   undefined1 auVar44[64];
   undefined1 auVar45[64];
   undefined1 auVar46[64];
   undefined1 auVar47[64];
   undefined1 auVar49[64];
   undefined1 auVar35[16];
   undefined1 auVar50[64];
   undefined1 auVar51[64];
   undefined1 auVar53[64];
   undefined1 auVar54[64];
   undefined1 auVar55[64];
   undefined1 auVar57[64];
   undefined1 in_ZMM1[64];
   undefined1 auVar58[64];
   undefined1 auVar59[64];
   undefined1 auVar60[16];
   undefined1 in_ZMM6[64];
   undefined1 auVar61[64];
   undefined1 in_ZMM7[64];
   undefined1 auVar62[64];
   undefined1 auVar63[16];
   undefined8 in_register_00001420;
   undefined8 in_register_00001428;
   undefined8 in_register_00001430;
   undefined8 in_register_00001438;
   undefined1 auVar48[64];
   undefined1 auVar52[64];
   undefined1 auVar56[64];
   if (param_4 == 0xc) {
      auVar35 = vmovdqu8_avx512vl(_ONEf);
      auVar38 = vmovdqu8_avx512vl(*(undefined1(*) [16])*param_3);
      for (int i_1320 = 0; i_1320 < 4; i_1320++) {
         auVar38[( i_1320 + 12 )] = auVar35[( i_1320 + 12 )];
      }
   } else {
      auVar59 = ZEXT1664((undefined1[16])0x0);
      auVar38 = (undefined1[16])0x0;
      if (param_4 != 0) {
         auVar41._16_48_ = _UNK_001a9fd0;
         auVar41._0_16_ = _SHUF_MASK;
         auVar41 = vmovdqa64_avx512f(auVar41);
         cVar33 = (char)( in_RAX >> 8 );
         if (0x2ff < (long)param_4) {
            auVar59 = vmovdqu64_avx512f(*param_3);
            auVar42 = vmovdqu64_avx512f(param_3[1]);
            auVar43 = vmovdqu64_avx512f(param_3[2]);
            auVar44 = vmovdqu64_avx512f(param_3[3]);
            vpshufb_avx512bw(auVar59, auVar41);
            vpshufb_avx512bw(auVar42, auVar41);
            vpshufb_avx512bw(auVar43, auVar41);
            vpshufb_avx512bw(auVar44, auVar41);
            auVar59 = vmovdqu64_avx512f(*(undefined1(*) [64])( param_2 + 0x12 ));
            vmovdqu64_avx512f(auVar59);
            auVar59 = vmovdqu64_avx512f(*(undefined1(*) [64])( param_2 + 0xe ));
            vmovdqu64_avx512f(auVar59);
            vshufi64x2_avx512f(auVar59, auVar59);
            param_3[1][0x31] = param_3[1][0x31] + cVar33;
            *(char*)( in_RAX + 0x6f ) = *(char*)( in_RAX + 0x6f ) + -1;
            auVar59 = vmovdqu64_avx512f(*(undefined1(*) [64])( ( in_RAX & 0xffffffff ) + 0x60 ));
            vmovdqu64_avx512f(auVar59);
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }
         if (0x1ff < (long)param_4) {
            auVar59 = vmovdqu64_avx512f(*param_3);
            auVar42 = vmovdqu64_avx512f(param_3[1]);
            auVar43 = vmovdqu64_avx512f(param_3[2]);
            auVar44 = vmovdqu64_avx512f(param_3[3]);
            vpshufb_avx512bw(auVar59, auVar41);
            vpshufb_avx512bw(auVar42, auVar41);
            vpshufb_avx512bw(auVar43, auVar41);
            vpshufb_avx512bw(auVar44, auVar41);
            auVar59 = vmovdqu64_avx512f(*(undefined1(*) [64])( param_2 + 0x12 ));
            vmovdqu64_avx512f(auVar59);
            auVar59 = vmovdqu64_avx512f(*(undefined1(*) [64])( param_2 + 0xe ));
            vmovdqu64_avx512f(auVar59);
            vshufi64x2_avx512f(auVar59, auVar59);
            param_3[1][0x31] = param_3[1][0x31] + cVar33;
            *(char*)( in_RAX + 0x6f ) = *(char*)( in_RAX + 0x6f ) + -1;
            auVar59 = vmovdqu64_avx512f(*(undefined1(*) [64])( ( in_RAX & 0xffffffff ) + 0x60 ));
            vmovdqu64_avx512f(auVar59);
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }
         if (0xff < (long)param_4) {
            auVar42 = vmovdqu64_avx512f(*param_3);
            auVar43 = vmovdqu64_avx512f(param_3[1]);
            auVar44 = vmovdqu64_avx512f(param_3[2]);
            auVar45 = vmovdqu64_avx512f(param_3[3]);
            auVar42 = vpshufb_avx512bw(auVar42, auVar41);
            vpshufb_avx512bw(auVar43, auVar41);
            vpshufb_avx512bw(auVar44, auVar41);
            vpshufb_avx512bw(auVar45, auVar41);
            vpxorq_avx512f(auVar42, auVar59);
            vmovdqu64_avx512f(*(undefined1(*) [64])( param_2 + 6 ));
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }
         lVar1 = param_4 * 8;
         puVar2 = (ulong*)( &byte64_len_to_mask_table + lVar1 );
         uVar34 = (int)param_4 + 0xfU >> 4;
         auVar38 = auVar41._0_16_;
         if (1 < uVar34) {
            auVar40 = auVar41._0_32_;
            if (uVar34 == 2) {
               uVar3 = *puVar2;
               auVar43._32_32_ = auVar41._32_32_;
               auVar43._0_32_ = vmovdqu8_avx512vl(*(undefined1(*) [32])*param_3);
               auVar42[1] = ( ( byte )(uVar3 >> 1) & 1 ) * SUB321(auVar43._0_32_, 1);
               auVar42[0] = ( (byte)uVar3 & 1 ) * SUB321(auVar43._0_32_, 0);
               for (int i_1324 = 0; i_1324 < 27; i_1324++) {
                  auVar42[( i_1324 + 2 )] = ( ( byte )(uVar3 >> ( i_1324 + 2 )) & 1 ) * SUB321(auVar43._0_32_, ( i_1324 + 2 ));
               }
               auVar42._30_34_ = auVar43._30_34_;
               auVar42[0x1d] = ( ( byte )(uVar3 >> 0x1d) & 1 ) * SUB321(auVar43._0_32_, 0x1d);
               auVar40 = vpshufb_avx512vl(auVar42._0_32_, auVar40);
               vpxorq_avx512f(ZEXT3264(auVar40), auVar59);
               vmovdqu64_avx512vl(*(undefined1(*) [32])( param_2 + 0x14 ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar34 < 4) {
               uVar3 = *puVar2;
               auVar42 = vmovdqu8_avx512bw(*param_3);
               auVar44[1] = ( ( byte )(uVar3 >> 1) & 1 ) * auVar42[1];
               auVar44[0] = ( (byte)uVar3 & 1 ) * auVar42[0];
               for (int i_1325 = 0; i_1325 < 54; i_1325++) {
                  auVar44[( i_1325 + 2 )] = ( ( byte )(uVar3 >> ( i_1325 + 2 )) & 1 ) * auVar42[( i_1325 + 2 )];
               }
               bVar5 = ( byte )(uVar3 >> 0x38);
               auVar44[0x38] = ( bVar5 & 1 ) * auVar42[0x38];
               for (int i_1326 = 0; i_1326 < 6; i_1326++) {
                  auVar44[( i_1326 + 57 )] = ( bVar5 >> ( i_1326 + 1 ) & 1 ) * auVar42[( i_1326 + 57 )];
               }
               auVar44[0x3f] = -((char)bVar5 >> 7) * auVar42[0x3f];
               auVar41 = vpshufb_avx512bw(auVar44, auVar41);
               vpxorq_avx512f(auVar41, auVar59);
               auVar40 = vmovdqu64_avx512vl(*(undefined1(*) [32])( param_2 + 0x13 ));
               vinserti64x2_avx512dq(ZEXT3264(auVar40), param_2[0x15], 2);
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar34 == 4) {
               uVar3 = *puVar2;
               auVar42 = vmovdqu8_avx512bw(*param_3);
               auVar45[1] = ( ( byte )(uVar3 >> 1) & 1 ) * auVar42[1];
               auVar45[0] = ( (byte)uVar3 & 1 ) * auVar42[0];
               for (int i_1327 = 0; i_1327 < 54; i_1327++) {
                  auVar45[( i_1327 + 2 )] = ( ( byte )(uVar3 >> ( i_1327 + 2 )) & 1 ) * auVar42[( i_1327 + 2 )];
               }
               bVar5 = ( byte )(uVar3 >> 0x38);
               auVar45[0x38] = ( bVar5 & 1 ) * auVar42[0x38];
               for (int i_1328 = 0; i_1328 < 6; i_1328++) {
                  auVar45[( i_1328 + 57 )] = ( bVar5 >> ( i_1328 + 1 ) & 1 ) * auVar42[( i_1328 + 57 )];
               }
               auVar45[0x3f] = -((char)bVar5 >> 7) * auVar42[0x3f];
               auVar41 = vpshufb_avx512bw(auVar45, auVar41);
               vpxorq_avx512f(auVar41, auVar59);
               vmovdqu64_avx512f(*(undefined1(*) [64])( param_2 + 0x12 ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar34 < 6) {
               uVar3 = *(ulong*)( &ONEf + lVar1 );
               auVar42 = vmovdqu8_avx512bw(*param_3);
               auVar36 = vmovdqu8_avx512vl(*(undefined1(*) [16])param_3[1]);
               auVar35[1] = ( ( byte )(uVar3 >> 1) & 1 ) * auVar36[1];
               auVar35[0] = ( (byte)uVar3 & 1 ) * auVar36[0];
               for (int i_1329 = 0; i_1329 < 14; i_1329++) {
                  auVar35[( i_1329 + 2 )] = ( ( byte )(uVar3 >> ( i_1329 + 2 )) & 1 ) * auVar36[( i_1329 + 2 )];
               }
               auVar41 = vpshufb_avx512bw(auVar42, auVar41);
               vpshufb_avx512vl(auVar35, auVar38);
               vpxorq_avx512f(auVar41, auVar59);
               vmovdqu64_avx512f(*(undefined1(*) [64])( param_2 + 0x11 ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar34 == 6) {
               uVar3 = *(ulong*)( &ONEf + lVar1 );
               auVar42 = vmovdqu8_avx512bw(*param_3);
               auVar56._32_32_ = auVar42._32_32_;
               auVar56._0_32_ = vmovdqu8_avx512vl(*(undefined1(*) [32])param_3[1]);
               auVar57[1] = ( ( byte )(uVar3 >> 1) & 1 ) * SUB321(auVar56._0_32_, 1);
               auVar57[0] = ( (byte)uVar3 & 1 ) * SUB321(auVar56._0_32_, 0);
               for (int i_1330 = 0; i_1330 < 27; i_1330++) {
                  auVar57[( i_1330 + 2 )] = ( ( byte )(uVar3 >> ( i_1330 + 2 )) & 1 ) * SUB321(auVar56._0_32_, ( i_1330 + 2 ));
               }
               auVar57._30_34_ = auVar56._30_34_;
               auVar57[0x1d] = ( ( byte )(uVar3 >> 0x1d) & 1 ) * SUB321(auVar56._0_32_, 0x1d);
               auVar41 = vpshufb_avx512bw(auVar42, auVar41);
               vpshufb_avx512vl(auVar57._0_32_, auVar40);
               vpxorq_avx512f(auVar41, auVar59);
               vmovdqu64_avx512f(*(undefined1(*) [64])( param_2 + 0x10 ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar34 < 8) {
               uVar3 = *(ulong*)( &ONEf + lVar1 );
               auVar42 = vmovdqu8_avx512bw(*param_3);
               auVar43 = vmovdqu8_avx512bw(param_3[1]);
               auVar55[1] = ( ( byte )(uVar3 >> 1) & 1 ) * auVar43[1];
               auVar55[0] = ( (byte)uVar3 & 1 ) * auVar43[0];
               for (int i_1331 = 0; i_1331 < 54; i_1331++) {
                  auVar55[( i_1331 + 2 )] = ( ( byte )(uVar3 >> ( i_1331 + 2 )) & 1 ) * auVar43[( i_1331 + 2 )];
               }
               bVar5 = ( byte )(uVar3 >> 0x38);
               auVar55[0x38] = ( bVar5 & 1 ) * auVar43[0x38];
               for (int i_1332 = 0; i_1332 < 6; i_1332++) {
                  auVar55[( i_1332 + 57 )] = ( bVar5 >> ( i_1332 + 1 ) & 1 ) * auVar43[( i_1332 + 57 )];
               }
               auVar55[0x3f] = -((char)bVar5 >> 7) * auVar43[0x3f];
               auVar42 = vpshufb_avx512bw(auVar42, auVar41);
               vpshufb_avx512bw(auVar55, auVar41);
               vpxorq_avx512f(auVar42, auVar59);
               vmovdqu64_avx512f(*(undefined1(*) [64])( param_2 + 0xf ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar34 == 8) {
               uVar3 = *(ulong*)( &ONEf + lVar1 );
               auVar42 = vmovdqu8_avx512bw(*param_3);
               auVar43 = vmovdqu8_avx512bw(param_3[1]);
               auVar54[1] = ( ( byte )(uVar3 >> 1) & 1 ) * auVar43[1];
               auVar54[0] = ( (byte)uVar3 & 1 ) * auVar43[0];
               for (int i_1333 = 0; i_1333 < 54; i_1333++) {
                  auVar54[( i_1333 + 2 )] = ( ( byte )(uVar3 >> ( i_1333 + 2 )) & 1 ) * auVar43[( i_1333 + 2 )];
               }
               bVar5 = ( byte )(uVar3 >> 0x38);
               auVar54[0x38] = ( bVar5 & 1 ) * auVar43[0x38];
               for (int i_1334 = 0; i_1334 < 6; i_1334++) {
                  auVar54[( i_1334 + 57 )] = ( bVar5 >> ( i_1334 + 1 ) & 1 ) * auVar43[( i_1334 + 57 )];
               }
               auVar54[0x3f] = -((char)bVar5 >> 7) * auVar43[0x3f];
               auVar42 = vpshufb_avx512bw(auVar42, auVar41);
               vpshufb_avx512bw(auVar54, auVar41);
               vpxorq_avx512f(auVar42, auVar59);
               vmovdqu64_avx512f(*(undefined1(*) [64])( param_2 + 0xe ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar34 < 10) {
               uVar3 = *(ulong*)( &DAT_001a9e40 + lVar1 );
               auVar42 = vmovdqu8_avx512bw(*param_3);
               auVar43 = vmovdqu8_avx512bw(param_3[1]);
               auVar35 = vmovdqu8_avx512vl(*(undefined1(*) [16])param_3[2]);
               auVar39[1] = ( ( byte )(uVar3 >> 1) & 1 ) * auVar35[1];
               auVar39[0] = ( (byte)uVar3 & 1 ) * auVar35[0];
               for (int i_1335 = 0; i_1335 < 14; i_1335++) {
                  auVar39[( i_1335 + 2 )] = ( ( byte )(uVar3 >> ( i_1335 + 2 )) & 1 ) * auVar35[( i_1335 + 2 )];
               }
               auVar42 = vpshufb_avx512bw(auVar42, auVar41);
               vpshufb_avx512bw(auVar43, auVar41);
               vpshufb_avx512vl(auVar39, auVar38);
               vpxorq_avx512f(auVar42, auVar59);
               vmovdqu64_avx512f(*(undefined1(*) [64])( param_2 + 0xd ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar34 == 10) {
               uVar3 = *(ulong*)( &DAT_001a9e40 + lVar1 );
               auVar42 = vmovdqu8_avx512bw(*param_3);
               auVar43 = vmovdqu8_avx512bw(param_3[1]);
               auVar52._32_32_ = auVar43._32_32_;
               auVar52._0_32_ = vmovdqu8_avx512vl(*(undefined1(*) [32])param_3[2]);
               auVar53[1] = ( ( byte )(uVar3 >> 1) & 1 ) * SUB321(auVar52._0_32_, 1);
               auVar53[0] = ( (byte)uVar3 & 1 ) * SUB321(auVar52._0_32_, 0);
               for (int i_1336 = 0; i_1336 < 27; i_1336++) {
                  auVar53[( i_1336 + 2 )] = ( ( byte )(uVar3 >> ( i_1336 + 2 )) & 1 ) * SUB321(auVar52._0_32_, ( i_1336 + 2 ));
               }
               auVar53._30_34_ = auVar52._30_34_;
               auVar53[0x1d] = ( ( byte )(uVar3 >> 0x1d) & 1 ) * SUB321(auVar52._0_32_, 0x1d);
               auVar42 = vpshufb_avx512bw(auVar42, auVar41);
               vpshufb_avx512bw(auVar43, auVar41);
               vpshufb_avx512vl(auVar53._0_32_, auVar40);
               vpxorq_avx512f(auVar42, auVar59);
               vmovdqu64_avx512f(*(undefined1(*) [64])( param_2 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar34 < 0xc) {
               uVar3 = *(ulong*)( &DAT_001a9e40 + lVar1 );
               auVar42 = vmovdqu8_avx512bw(*param_3);
               auVar43 = vmovdqu8_avx512bw(param_3[1]);
               auVar44 = vmovdqu8_avx512bw(param_3[2]);
               auVar51[1] = ( ( byte )(uVar3 >> 1) & 1 ) * auVar44[1];
               auVar51[0] = ( (byte)uVar3 & 1 ) * auVar44[0];
               for (int i_1337 = 0; i_1337 < 54; i_1337++) {
                  auVar51[( i_1337 + 2 )] = ( ( byte )(uVar3 >> ( i_1337 + 2 )) & 1 ) * auVar44[( i_1337 + 2 )];
               }
               bVar5 = ( byte )(uVar3 >> 0x38);
               auVar51[0x38] = ( bVar5 & 1 ) * auVar44[0x38];
               for (int i_1338 = 0; i_1338 < 6; i_1338++) {
                  auVar51[( i_1338 + 57 )] = ( bVar5 >> ( i_1338 + 1 ) & 1 ) * auVar44[( i_1338 + 57 )];
               }
               auVar51[0x3f] = -((char)bVar5 >> 7) * auVar44[0x3f];
               auVar42 = vpshufb_avx512bw(auVar42, auVar41);
               vpshufb_avx512bw(auVar43, auVar41);
               vpshufb_avx512bw(auVar51, auVar41);
               vpxorq_avx512f(auVar42, auVar59);
               vmovdqu64_avx512f(*(undefined1(*) [64])( param_2 + 0xb ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar34 == 0xc) {
               uVar3 = *(ulong*)( &DAT_001a9e40 + lVar1 );
               auVar42 = vmovdqu8_avx512bw(*param_3);
               auVar43 = vmovdqu8_avx512bw(param_3[1]);
               auVar44 = vmovdqu8_avx512bw(param_3[2]);
               auVar50[1] = ( ( byte )(uVar3 >> 1) & 1 ) * auVar44[1];
               auVar50[0] = ( (byte)uVar3 & 1 ) * auVar44[0];
               for (int i_1339 = 0; i_1339 < 54; i_1339++) {
                  auVar50[( i_1339 + 2 )] = ( ( byte )(uVar3 >> ( i_1339 + 2 )) & 1 ) * auVar44[( i_1339 + 2 )];
               }
               bVar5 = ( byte )(uVar3 >> 0x38);
               auVar50[0x38] = ( bVar5 & 1 ) * auVar44[0x38];
               for (int i_1340 = 0; i_1340 < 6; i_1340++) {
                  auVar50[( i_1340 + 57 )] = ( bVar5 >> ( i_1340 + 1 ) & 1 ) * auVar44[( i_1340 + 57 )];
               }
               auVar50[0x3f] = -((char)bVar5 >> 7) * auVar44[0x3f];
               auVar42 = vpshufb_avx512bw(auVar42, auVar41);
               vpshufb_avx512bw(auVar43, auVar41);
               vpshufb_avx512bw(auVar50, auVar41);
               vpxorq_avx512f(auVar42, auVar59);
               vmovdqu64_avx512f(*(undefined1(*) [64])( param_2 + 10 ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar34 < 0xe) {
               uVar3 = *(ulong*)( &DAT_001a9c40 + lVar1 );
               auVar42 = vmovdqu8_avx512bw(*param_3);
               auVar43 = vmovdqu8_avx512bw(param_3[1]);
               auVar44 = vmovdqu8_avx512bw(param_3[2]);
               auVar35 = vmovdqu8_avx512vl(*(undefined1(*) [16])param_3[3]);
               auVar36[1] = ( ( byte )(uVar3 >> 1) & 1 ) * auVar35[1];
               auVar36[0] = ( (byte)uVar3 & 1 ) * auVar35[0];
               for (int i_1341 = 0; i_1341 < 14; i_1341++) {
                  auVar36[( i_1341 + 2 )] = ( ( byte )(uVar3 >> ( i_1341 + 2 )) & 1 ) * auVar35[( i_1341 + 2 )];
               }
               auVar42 = vpshufb_avx512bw(auVar42, auVar41);
               vpshufb_avx512bw(auVar43, auVar41);
               vpshufb_avx512bw(auVar44, auVar41);
               vpshufb_avx512vl(auVar36, auVar38);
               vpxorq_avx512f(auVar42, auVar59);
               vmovdqu64_avx512f(*(undefined1(*) [64])( param_2 + 9 ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar34 == 0xe) {
               uVar3 = *(ulong*)( &DAT_001a9c40 + lVar1 );
               auVar42 = vmovdqu8_avx512bw(*param_3);
               auVar43 = vmovdqu8_avx512bw(param_3[1]);
               auVar44 = vmovdqu8_avx512bw(param_3[2]);
               auVar48._32_32_ = auVar44._32_32_;
               auVar48._0_32_ = vmovdqu8_avx512vl(*(undefined1(*) [32])param_3[3]);
               auVar49[1] = ( ( byte )(uVar3 >> 1) & 1 ) * SUB321(auVar48._0_32_, 1);
               auVar49[0] = ( (byte)uVar3 & 1 ) * SUB321(auVar48._0_32_, 0);
               for (int i_1342 = 0; i_1342 < 27; i_1342++) {
                  auVar49[( i_1342 + 2 )] = ( ( byte )(uVar3 >> ( i_1342 + 2 )) & 1 ) * SUB321(auVar48._0_32_, ( i_1342 + 2 ));
               }
               auVar49._30_34_ = auVar48._30_34_;
               auVar49[0x1d] = ( ( byte )(uVar3 >> 0x1d) & 1 ) * SUB321(auVar48._0_32_, 0x1d);
               auVar42 = vpshufb_avx512bw(auVar42, auVar41);
               vpshufb_avx512bw(auVar43, auVar41);
               vpshufb_avx512bw(auVar44, auVar41);
               vpshufb_avx512vl(auVar49._0_32_, auVar40);
               vpxorq_avx512f(auVar42, auVar59);
               vmovdqu64_avx512f(*(undefined1(*) [64])( param_2 + 8 ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar34 == 0xf) {
               uVar3 = *(ulong*)( &DAT_001a9c40 + lVar1 );
               auVar42 = vmovdqu8_avx512bw(*param_3);
               auVar43 = vmovdqu8_avx512bw(param_3[1]);
               auVar44 = vmovdqu8_avx512bw(param_3[2]);
               auVar45 = vmovdqu8_avx512bw(param_3[3]);
               auVar47[1] = ( ( byte )(uVar3 >> 1) & 1 ) * auVar45[1];
               auVar47[0] = ( (byte)uVar3 & 1 ) * auVar45[0];
               for (int i_1343 = 0; i_1343 < 54; i_1343++) {
                  auVar47[( i_1343 + 2 )] = ( ( byte )(uVar3 >> ( i_1343 + 2 )) & 1 ) * auVar45[( i_1343 + 2 )];
               }
               bVar5 = ( byte )(uVar3 >> 0x38);
               auVar47[0x38] = ( bVar5 & 1 ) * auVar45[0x38];
               for (int i_1344 = 0; i_1344 < 6; i_1344++) {
                  auVar47[( i_1344 + 57 )] = ( bVar5 >> ( i_1344 + 1 ) & 1 ) * auVar45[( i_1344 + 57 )];
               }
               auVar47[0x3f] = -((char)bVar5 >> 7) * auVar45[0x3f];
               auVar42 = vpshufb_avx512bw(auVar42, auVar41);
               vpshufb_avx512bw(auVar43, auVar41);
               vpshufb_avx512bw(auVar44, auVar41);
               vpshufb_avx512bw(auVar47, auVar41);
               vpxorq_avx512f(auVar42, auVar59);
               vmovdqu64_avx512f(*(undefined1(*) [64])( param_2 + 7 ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            uVar3 = *(ulong*)( &DAT_001a9c40 + lVar1 );
            auVar42 = vmovdqu8_avx512bw(*param_3);
            auVar43 = vmovdqu8_avx512bw(param_3[1]);
            auVar44 = vmovdqu8_avx512bw(param_3[2]);
            auVar45 = vmovdqu8_avx512bw(param_3[3]);
            auVar46[1] = ( ( byte )(uVar3 >> 1) & 1 ) * auVar45[1];
            auVar46[0] = ( (byte)uVar3 & 1 ) * auVar45[0];
            for (int i_1322 = 0; i_1322 < 54; i_1322++) {
               auVar46[( i_1322 + 2 )] = ( ( byte )(uVar3 >> ( i_1322 + 2 )) & 1 ) * auVar45[( i_1322 + 2 )];
            }
            bVar5 = ( byte )(uVar3 >> 0x38);
            auVar46[0x38] = ( bVar5 & 1 ) * auVar45[0x38];
            for (int i_1323 = 0; i_1323 < 6; i_1323++) {
               auVar46[( i_1323 + 57 )] = ( bVar5 >> ( i_1323 + 1 ) & 1 ) * auVar45[( i_1323 + 57 )];
            }
            auVar46[0x3f] = -((char)bVar5 >> 7) * auVar45[0x3f];
            auVar42 = vpshufb_avx512bw(auVar42, auVar41);
            vpshufb_avx512bw(auVar43, auVar41);
            vpshufb_avx512bw(auVar44, auVar41);
            vpshufb_avx512bw(auVar46, auVar41);
            vpxorq_avx512f(auVar42, auVar59);
            vmovdqu64_avx512f(*(undefined1(*) [64])( param_2 + 6 ));
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }
         uVar3 = *puVar2;
         auVar35 = vmovdqu8_avx512vl(*(undefined1(*) [16])*param_3);
         auVar37[1] = ( ( byte )(uVar3 >> 1) & 1 ) * auVar35[1];
         auVar37[0] = ( (byte)uVar3 & 1 ) * auVar35[0];
         for (int i_1321 = 0; i_1321 < 14; i_1321++) {
            auVar37[( i_1321 + 2 )] = ( ( byte )(uVar3 >> ( i_1321 + 2 )) & 1 ) * auVar35[( i_1321 + 2 )];
         }
         auVar38 = vpshufb_avx512vl(auVar37, auVar38);
         auVar59 = vpxorq_avx512f(ZEXT1664(auVar38), auVar59);
         auVar35 = vmovdqu64_avx512vl(param_2[0x15]);
         auVar63._8_8_ = 0;
         auVar63._0_8_ = auVar59._8_8_;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = auVar35._0_8_;
         auVar38 = (undefined1[16])0x0;
         for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
            if (( auVar63 & (undefined1[16])0x1 << uVar34 ) != (undefined1[16])0x0) {
               auVar38 = auVar38 ^ auVar17 << uVar34;
            }
         }
         auVar62._32_32_ = in_ZMM7._32_32_;
         auVar62._0_32_ = ZEXT1632(auVar38);
         auVar21._8_8_ = 0;
         auVar21._0_8_ = auVar59._0_8_;
         auVar25._8_8_ = 0;
         auVar25._0_8_ = auVar35._8_8_;
         auVar38 = (undefined1[16])0x0;
         for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
            if (( auVar21 & (undefined1[16])0x1 << uVar34 ) != (undefined1[16])0x0) {
               auVar38 = auVar38 ^ auVar25 << uVar34;
            }
         }
         auVar29._8_8_ = 0;
         auVar29._0_8_ = auVar59._8_8_;
         auVar31._8_8_ = 0;
         auVar31._0_8_ = auVar35._8_8_;
         auVar36 = (undefined1[16])0x0;
         for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
            if (( auVar29 & (undefined1[16])0x1 << uVar34 ) != (undefined1[16])0x0) {
               auVar36 = auVar36 ^ auVar31 << uVar34;
            }
         }
         auVar58._32_32_ = in_ZMM1._32_32_;
         auVar58._0_32_ = ZEXT1632(auVar36);
         auVar6._8_8_ = 0;
         auVar6._0_8_ = auVar59._0_8_;
         auVar10._8_8_ = 0;
         auVar10._0_8_ = auVar35._0_8_;
         auVar35 = (undefined1[16])0x0;
         for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
            if (( auVar6 & (undefined1[16])0x1 << uVar34 ) != (undefined1[16])0x0) {
               auVar35 = auVar35 ^ auVar10 << uVar34;
            }
         }
         auVar61._32_32_ = in_ZMM6._32_32_;
         auVar61._0_32_ = ZEXT1632(auVar35);
         auVar59._32_8_ = in_register_00001420;
         auVar59._0_32_ = ZEXT1632(auVar38);
         auVar59._40_8_ = in_register_00001428;
         auVar59._48_8_ = in_register_00001430;
         auVar59._56_8_ = in_register_00001438;
         auVar59 = vpxorq_avx512f(auVar62, auVar59);
         auVar41 = vpsrldq_avx512bw(auVar59, 8);
         auVar42 = vpslldq_avx512bw(auVar59, 8);
         auVar59 = vpxorq_avx512f(auVar58, auVar41);
         auVar41 = vpxorq_avx512f(auVar61, auVar42);
         auVar40 = vextracti64x4_avx512f(auVar59, 1);
         auVar40 = vpxorq_avx512vl(auVar59._0_32_, auVar40);
         auVar38 = vextracti32x4_avx512vl(auVar40, 1);
         auVar35 = vpxorq_avx512vl(auVar40._0_16_, auVar38);
         auVar40 = vextracti64x4_avx512f(auVar41, 1);
         auVar40 = vpxorq_avx512vl(auVar41._0_32_, auVar40);
         auVar38 = vextracti32x4_avx512vl(auVar40, 1);
         auVar36 = vpxorq_avx512vl(auVar40._0_16_, auVar38);
         auVar39 = vmovdqa64_avx512vl(_POLY2);
         auVar14._8_8_ = 0;
         auVar14._0_8_ = auVar39._8_8_;
         auVar18._8_8_ = 0;
         auVar18._0_8_ = auVar36._0_8_;
         auVar38 = (undefined1[16])0x0;
         for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
            if (( auVar14 & (undefined1[16])0x1 << uVar34 ) != (undefined1[16])0x0) {
               auVar38 = auVar38 ^ auVar18 << uVar34;
            }
         }
         auVar38 = vpslldq_avx(auVar38, 8);
         auVar36 = vpxorq_avx512vl(auVar36, auVar38);
         auVar7._8_8_ = 0;
         auVar7._0_8_ = auVar39._0_8_;
         auVar11._8_8_ = 0;
         auVar11._0_8_ = auVar36._0_8_;
         auVar38 = (undefined1[16])0x0;
         for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
            if (( auVar7 & (undefined1[16])0x1 << uVar34 ) != (undefined1[16])0x0) {
               auVar38 = auVar38 ^ auVar11 << uVar34;
            }
         }
         auVar63 = vpsrldq_avx(auVar38, 4);
         auVar22._8_8_ = 0;
         auVar22._0_8_ = auVar39._0_8_;
         auVar26._8_8_ = 0;
         auVar26._0_8_ = auVar36._8_8_;
         auVar38 = (undefined1[16])0x0;
         for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
            if (( auVar22 & (undefined1[16])0x1 << uVar34 ) != (undefined1[16])0x0) {
               auVar38 = auVar38 ^ auVar26 << uVar34;
            }
         }
         auVar38 = vpslldq_avx(auVar38, 4);
         auVar38 = vpternlogq_avx512vl(auVar38, auVar63, auVar35, 0x96);
      }
      auVar60._8_8_ = 0;
      auVar60._0_8_ = param_4 << 3;
      auVar35 = vpxorq_avx512vl(auVar60, auVar38);
      auVar36 = vmovdqu64_avx512vl(param_2[0x15]);
      auVar30._8_8_ = 0;
      auVar30._0_8_ = auVar35._8_8_;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = auVar36._8_8_;
      auVar38 = (undefined1[16])0x0;
      for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
         if (( auVar30 & (undefined1[16])0x1 << uVar34 ) != (undefined1[16])0x0) {
            auVar38 = auVar38 ^ auVar32 << uVar34;
         }
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = auVar35._0_8_;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = auVar36._0_8_;
      auVar39 = (undefined1[16])0x0;
      for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
         if (( auVar8 & (undefined1[16])0x1 << uVar34 ) != (undefined1[16])0x0) {
            auVar39 = auVar39 ^ auVar12 << uVar34;
         }
      }
      auVar15._8_8_ = 0;
      auVar15._0_8_ = auVar35._8_8_;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = auVar36._0_8_;
      auVar63 = (undefined1[16])0x0;
      for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
         if (( auVar15 & (undefined1[16])0x1 << uVar34 ) != (undefined1[16])0x0) {
            auVar63 = auVar63 ^ auVar19 << uVar34;
         }
      }
      auVar23._8_8_ = 0;
      auVar23._0_8_ = auVar35._0_8_;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = auVar36._8_8_;
      auVar35 = (undefined1[16])0x0;
      for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
         if (( auVar23 & (undefined1[16])0x1 << uVar34 ) != (undefined1[16])0x0) {
            auVar35 = auVar35 ^ auVar27 << uVar34;
         }
      }
      auVar35 = vpxorq_avx512vl(auVar35, auVar63);
      auVar63 = vpsrldq_avx(auVar35, 8);
      auVar36 = vpslldq_avx(auVar35, 8);
      auVar35 = vpxorq_avx512vl(auVar38, auVar63);
      auVar36 = vpxorq_avx512vl(auVar36, auVar39);
      auVar39 = vmovdqu64_avx512vl(_POLY2);
      auVar16._8_8_ = 0;
      auVar16._0_8_ = auVar39._8_8_;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = auVar36._0_8_;
      auVar38 = (undefined1[16])0x0;
      for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
         if (( auVar16 & (undefined1[16])0x1 << uVar34 ) != (undefined1[16])0x0) {
            auVar38 = auVar38 ^ auVar20 << uVar34;
         }
      }
      auVar38 = vpslldq_avx(auVar38, 8);
      auVar36 = vpxorq_avx512vl(auVar36, auVar38);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = auVar39._0_8_;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = auVar36._0_8_;
      auVar38 = (undefined1[16])0x0;
      for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
         if (( auVar9 & (undefined1[16])0x1 << uVar34 ) != (undefined1[16])0x0) {
            auVar38 = auVar38 ^ auVar13 << uVar34;
         }
      }
      auVar63 = vpsrldq_avx(auVar38, 4);
      auVar24._8_8_ = 0;
      auVar24._0_8_ = auVar39._0_8_;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = auVar36._8_8_;
      auVar38 = (undefined1[16])0x0;
      for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
         if (( auVar24 & (undefined1[16])0x1 << uVar34 ) != (undefined1[16])0x0) {
            auVar38 = auVar38 ^ auVar28 << uVar34;
         }
      }
      auVar38 = vpslldq_avx(auVar38, 4);
      auVar38 = vpternlogq_avx512vl(auVar38, auVar35, auVar63, 0x96);
      auVar38 = vpshufb_avx(auVar38, _SHUF_MASK);
   }
   iVar4 = *(int*)param_1[0xf];
   if (iVar4 == 9) {
      auVar35 = vpxorq_avx512vl(auVar38, *param_1);
      for (int i_1345 = 0; i_1345 < 9; i_1345++) {
         auVar35 = aesenc(auVar35, param_1[( i_1345 + 1 )]);
      }
      auVar35 = aesenclast(auVar35, param_1[10]);
   } else if (iVar4 == 0xb) {
      auVar35 = vpxorq_avx512vl(auVar38, *param_1);
      for (int i_1346 = 0; i_1346 < 11; i_1346++) {
         auVar35 = aesenc(auVar35, param_1[( i_1346 + 1 )]);
      }
      auVar35 = aesenclast(auVar35, param_1[0xc]);
   } else {
      auVar35 = auVar38;
      if (iVar4 == 0xd) {
         auVar35 = vpxorq_avx512vl(auVar38, *param_1);
         for (int i_1347 = 0; i_1347 < 13; i_1347++) {
            auVar35 = aesenc(auVar35, param_1[( i_1347 + 1 )]);
         }
         auVar35 = aesenclast(auVar35, param_1[0xe]);
      }
   }
   param_2[2] = auVar35;
   auVar38 = vpshufb_avx(auVar38, _SHUF_MASK);
   *param_2 = auVar38;
   if (0x100 < param_4) {
      auVar59 = ZEXT1664((undefined1[16])0x0);
      for (int i_1348 = 0; i_1348 < 12; i_1348++) {
         vmovdqa64_avx512f(auVar59);
      }
   }
   return;
}/* WARNING: Control flow encountered bad instruction data *//* WARNING: Removing unreachable block (ram,0x00103615) *//* WARNING: Removing unreachable block (ram,0x00102fff) *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void ossl_aes_gcm_update_aad_avx512(long param_1, undefined1 (*param_2)[64], ulong param_3) {
   long lVar1;
   ulong *puVar2;
   ulong uVar3;
   byte bVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   char cVar18;
   ulong in_RAX;
   uint uVar19;
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar20[16];
   undefined1 auVar25[32];
   undefined1 auVar26[64];
   undefined1 auVar27[64];
   undefined1 auVar28[64];
   undefined1 auVar29[64];
   undefined1 auVar30[64];
   undefined1 auVar31[64];
   undefined1 auVar32[64];
   undefined1 auVar34[64];
   undefined1 auVar21[16];
   undefined1 auVar35[64];
   undefined1 auVar36[64];
   undefined1 auVar38[64];
   undefined1 auVar39[64];
   undefined1 auVar40[64];
   undefined1 auVar41[64];
   undefined1 in_ZMM1[64];
   undefined1 auVar42[64];
   undefined1 in_ZMM6[64];
   undefined1 auVar43[64];
   undefined1 in_ZMM7[64];
   undefined1 auVar44[64];
   undefined1 auVar45[16];
   undefined8 in_register_00001420;
   undefined8 in_register_00001428;
   undefined8 in_register_00001430;
   undefined8 in_register_00001438;
   undefined1 auVar46[64];
   undefined1 auVar33[64];
   undefined1 auVar37[64];
   auVar20 = vmovdqu64_avx512vl(*(undefined1(*) [16])( param_1 + 0x40 ));
   auVar46 = ZEXT1664(auVar20);
   if (param_3 != 0) {
      auVar26 = vmovdqa64_avx512f(_SHUF_MASK);
      cVar18 = (char)( in_RAX >> 8 );
      if (0x2ff < (long)param_3) {
         auVar46 = vmovdqu64_avx512f(*param_2);
         auVar27 = vmovdqu64_avx512f(param_2[1]);
         auVar28 = vmovdqu64_avx512f(param_2[2]);
         auVar29 = vmovdqu64_avx512f(param_2[3]);
         vpshufb_avx512bw(auVar46, auVar26);
         vpshufb_avx512bw(auVar27, auVar26);
         vpshufb_avx512bw(auVar28, auVar26);
         vpshufb_avx512bw(auVar29, auVar26);
         auVar46 = vmovdqu64_avx512f(*(undefined1(*) [64])( param_1 + 0x120 ));
         vmovdqu64_avx512f(auVar46);
         auVar46 = vmovdqu64_avx512f(*(undefined1(*) [64])( param_1 + 0xe0 ));
         vmovdqu64_avx512f(auVar46);
         vshufi64x2_avx512f(auVar46, auVar46);
         *(char*)( param_3 + 0x71 ) = *(char*)( param_3 + 0x71 ) + cVar18;
         *(char*)( in_RAX + 0x6f ) = *(char*)( in_RAX + 0x6f ) + -1;
         auVar46 = vmovdqu64_avx512f(*(undefined1(*) [64])( ( in_RAX & 0xffffffff ) + 0x60 ));
         vmovdqu64_avx512f(auVar46);
         /* WARNING: Bad instruction - Truncating control flow here */
         halt_baddata();
      }
      if (0x1ff < (long)param_3) {
         auVar46 = vmovdqu64_avx512f(*param_2);
         auVar27 = vmovdqu64_avx512f(param_2[1]);
         auVar28 = vmovdqu64_avx512f(param_2[2]);
         auVar29 = vmovdqu64_avx512f(param_2[3]);
         vpshufb_avx512bw(auVar46, auVar26);
         vpshufb_avx512bw(auVar27, auVar26);
         vpshufb_avx512bw(auVar28, auVar26);
         vpshufb_avx512bw(auVar29, auVar26);
         auVar46 = vmovdqu64_avx512f(*(undefined1(*) [64])( param_1 + 0x120 ));
         vmovdqu64_avx512f(auVar46);
         auVar46 = vmovdqu64_avx512f(*(undefined1(*) [64])( param_1 + 0xe0 ));
         vmovdqu64_avx512f(auVar46);
         vshufi64x2_avx512f(auVar46, auVar46);
         *(char*)( param_3 + 0x71 ) = *(char*)( param_3 + 0x71 ) + cVar18;
         *(char*)( in_RAX + 0x6f ) = *(char*)( in_RAX + 0x6f ) + -1;
         auVar46 = vmovdqu64_avx512f(*(undefined1(*) [64])( ( in_RAX & 0xffffffff ) + 0x60 ));
         vmovdqu64_avx512f(auVar46);
         /* WARNING: Bad instruction - Truncating control flow here */
         halt_baddata();
      }
      if (0xff < (long)param_3) {
         auVar27 = vmovdqu64_avx512f(*param_2);
         auVar28 = vmovdqu64_avx512f(param_2[1]);
         auVar29 = vmovdqu64_avx512f(param_2[2]);
         auVar30 = vmovdqu64_avx512f(param_2[3]);
         auVar27 = vpshufb_avx512bw(auVar27, auVar26);
         vpshufb_avx512bw(auVar28, auVar26);
         vpshufb_avx512bw(auVar29, auVar26);
         vpshufb_avx512bw(auVar30, auVar26);
         vpxorq_avx512f(auVar27, auVar46);
         vmovdqu64_avx512f(*(undefined1(*) [64])( param_1 + 0x60 ));
         /* WARNING: Bad instruction - Truncating control flow here */
         halt_baddata();
      }
      lVar1 = param_3 * 8;
      puVar2 = (ulong*)( &byte64_len_to_mask_table + lVar1 );
      uVar19 = (int)param_3 + 0xfU >> 4;
      auVar20 = auVar26._0_16_;
      if (1 < uVar19) {
         auVar25 = auVar26._0_32_;
         if (uVar19 == 2) {
            uVar3 = *puVar2;
            auVar27._32_32_ = auVar26._32_32_;
            auVar27._0_32_ = vmovdqu8_avx512vl(*(undefined1(*) [32])*param_2);
            auVar26[1] = ( ( byte )(uVar3 >> 1) & 1 ) * SUB321(auVar27._0_32_, 1);
            auVar26[0] = ( (byte)uVar3 & 1 ) * SUB321(auVar27._0_32_, 0);
            for (int i_1351 = 0; i_1351 < 27; i_1351++) {
               auVar26[( i_1351 + 2 )] = ( ( byte )(uVar3 >> ( i_1351 + 2 )) & 1 ) * SUB321(auVar27._0_32_, ( i_1351 + 2 ));
            }
            auVar26._30_34_ = auVar27._30_34_;
            auVar26[0x1d] = ( ( byte )(uVar3 >> 0x1d) & 1 ) * SUB321(auVar27._0_32_, 0x1d);
            auVar25 = vpshufb_avx512vl(auVar26._0_32_, auVar25);
            vpxorq_avx512f(ZEXT3264(auVar25), auVar46);
            vmovdqu64_avx512vl(*(undefined1(*) [32])( param_1 + 0x140 ));
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }
         if (uVar19 < 4) {
            uVar3 = *puVar2;
            auVar27 = vmovdqu8_avx512bw(*param_2);
            auVar28[1] = ( ( byte )(uVar3 >> 1) & 1 ) * auVar27[1];
            auVar28[0] = ( (byte)uVar3 & 1 ) * auVar27[0];
            for (int i_1352 = 0; i_1352 < 54; i_1352++) {
               auVar28[( i_1352 + 2 )] = ( ( byte )(uVar3 >> ( i_1352 + 2 )) & 1 ) * auVar27[( i_1352 + 2 )];
            }
            bVar4 = ( byte )(uVar3 >> 0x38);
            auVar28[0x38] = ( bVar4 & 1 ) * auVar27[0x38];
            for (int i_1353 = 0; i_1353 < 6; i_1353++) {
               auVar28[( i_1353 + 57 )] = ( bVar4 >> ( i_1353 + 1 ) & 1 ) * auVar27[( i_1353 + 57 )];
            }
            auVar28[0x3f] = -((char)bVar4 >> 7) * auVar27[0x3f];
            auVar26 = vpshufb_avx512bw(auVar28, auVar26);
            vpxorq_avx512f(auVar26, auVar46);
            auVar25 = vmovdqu64_avx512vl(*(undefined1(*) [32])( param_1 + 0x130 ));
            vinserti64x2_avx512dq(ZEXT3264(auVar25), *(undefined1(*) [16])( param_1 + 0x150 ), 2);
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }
         if (uVar19 == 4) {
            uVar3 = *puVar2;
            auVar27 = vmovdqu8_avx512bw(*param_2);
            auVar29[1] = ( ( byte )(uVar3 >> 1) & 1 ) * auVar27[1];
            auVar29[0] = ( (byte)uVar3 & 1 ) * auVar27[0];
            for (int i_1354 = 0; i_1354 < 54; i_1354++) {
               auVar29[( i_1354 + 2 )] = ( ( byte )(uVar3 >> ( i_1354 + 2 )) & 1 ) * auVar27[( i_1354 + 2 )];
            }
            bVar4 = ( byte )(uVar3 >> 0x38);
            auVar29[0x38] = ( bVar4 & 1 ) * auVar27[0x38];
            for (int i_1355 = 0; i_1355 < 6; i_1355++) {
               auVar29[( i_1355 + 57 )] = ( bVar4 >> ( i_1355 + 1 ) & 1 ) * auVar27[( i_1355 + 57 )];
            }
            auVar29[0x3f] = -((char)bVar4 >> 7) * auVar27[0x3f];
            auVar26 = vpshufb_avx512bw(auVar29, auVar26);
            vpxorq_avx512f(auVar26, auVar46);
            vmovdqu64_avx512f(*(undefined1(*) [64])( param_1 + 0x120 ));
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }
         if (uVar19 < 6) {
            uVar3 = *(ulong*)( &ONEf + lVar1 );
            auVar27 = vmovdqu8_avx512bw(*param_2);
            auVar22 = vmovdqu8_avx512vl(*(undefined1(*) [16])param_2[1]);
            auVar21[1] = ( ( byte )(uVar3 >> 1) & 1 ) * auVar22[1];
            auVar21[0] = ( (byte)uVar3 & 1 ) * auVar22[0];
            for (int i_1356 = 0; i_1356 < 14; i_1356++) {
               auVar21[( i_1356 + 2 )] = ( ( byte )(uVar3 >> ( i_1356 + 2 )) & 1 ) * auVar22[( i_1356 + 2 )];
            }
            auVar26 = vpshufb_avx512bw(auVar27, auVar26);
            vpshufb_avx512vl(auVar21, auVar20);
            vpxorq_avx512f(auVar26, auVar46);
            vmovdqu64_avx512f(*(undefined1(*) [64])( param_1 + 0x110 ));
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }
         if (uVar19 == 6) {
            uVar3 = *(ulong*)( &ONEf + lVar1 );
            auVar27 = vmovdqu8_avx512bw(*param_2);
            auVar41._32_32_ = auVar27._32_32_;
            auVar41._0_32_ = vmovdqu8_avx512vl(*(undefined1(*) [32])param_2[1]);
            auVar30[1] = ( ( byte )(uVar3 >> 1) & 1 ) * SUB321(auVar41._0_32_, 1);
            auVar30[0] = ( (byte)uVar3 & 1 ) * SUB321(auVar41._0_32_, 0);
            for (int i_1357 = 0; i_1357 < 27; i_1357++) {
               auVar30[( i_1357 + 2 )] = ( ( byte )(uVar3 >> ( i_1357 + 2 )) & 1 ) * SUB321(auVar41._0_32_, ( i_1357 + 2 ));
            }
            auVar30._30_34_ = auVar41._30_34_;
            auVar30[0x1d] = ( ( byte )(uVar3 >> 0x1d) & 1 ) * SUB321(auVar41._0_32_, 0x1d);
            auVar26 = vpshufb_avx512bw(auVar27, auVar26);
            vpshufb_avx512vl(auVar30._0_32_, auVar25);
            vpxorq_avx512f(auVar26, auVar46);
            vmovdqu64_avx512f(*(undefined1(*) [64])( param_1 + 0x100 ));
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }
         if (uVar19 < 8) {
            uVar3 = *(ulong*)( &ONEf + lVar1 );
            auVar27 = vmovdqu8_avx512bw(*param_2);
            auVar28 = vmovdqu8_avx512bw(param_2[1]);
            auVar40[1] = ( ( byte )(uVar3 >> 1) & 1 ) * auVar28[1];
            auVar40[0] = ( (byte)uVar3 & 1 ) * auVar28[0];
            for (int i_1358 = 0; i_1358 < 54; i_1358++) {
               auVar40[( i_1358 + 2 )] = ( ( byte )(uVar3 >> ( i_1358 + 2 )) & 1 ) * auVar28[( i_1358 + 2 )];
            }
            bVar4 = ( byte )(uVar3 >> 0x38);
            auVar40[0x38] = ( bVar4 & 1 ) * auVar28[0x38];
            for (int i_1359 = 0; i_1359 < 6; i_1359++) {
               auVar40[( i_1359 + 57 )] = ( bVar4 >> ( i_1359 + 1 ) & 1 ) * auVar28[( i_1359 + 57 )];
            }
            auVar40[0x3f] = -((char)bVar4 >> 7) * auVar28[0x3f];
            auVar27 = vpshufb_avx512bw(auVar27, auVar26);
            vpshufb_avx512bw(auVar40, auVar26);
            vpxorq_avx512f(auVar27, auVar46);
            vmovdqu64_avx512f(*(undefined1(*) [64])( param_1 + 0xf0 ));
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }
         if (uVar19 == 8) {
            uVar3 = *(ulong*)( &ONEf + lVar1 );
            auVar27 = vmovdqu8_avx512bw(*param_2);
            auVar28 = vmovdqu8_avx512bw(param_2[1]);
            auVar39[1] = ( ( byte )(uVar3 >> 1) & 1 ) * auVar28[1];
            auVar39[0] = ( (byte)uVar3 & 1 ) * auVar28[0];
            for (int i_1360 = 0; i_1360 < 54; i_1360++) {
               auVar39[( i_1360 + 2 )] = ( ( byte )(uVar3 >> ( i_1360 + 2 )) & 1 ) * auVar28[( i_1360 + 2 )];
            }
            bVar4 = ( byte )(uVar3 >> 0x38);
            auVar39[0x38] = ( bVar4 & 1 ) * auVar28[0x38];
            for (int i_1361 = 0; i_1361 < 6; i_1361++) {
               auVar39[( i_1361 + 57 )] = ( bVar4 >> ( i_1361 + 1 ) & 1 ) * auVar28[( i_1361 + 57 )];
            }
            auVar39[0x3f] = -((char)bVar4 >> 7) * auVar28[0x3f];
            auVar27 = vpshufb_avx512bw(auVar27, auVar26);
            vpshufb_avx512bw(auVar39, auVar26);
            vpxorq_avx512f(auVar27, auVar46);
            vmovdqu64_avx512f(*(undefined1(*) [64])( param_1 + 0xe0 ));
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }
         if (9 < uVar19) {
            if (uVar19 == 10) {
               uVar3 = *(ulong*)( &DAT_001a9e40 + lVar1 );
               auVar27 = vmovdqu8_avx512bw(*param_2);
               auVar28 = vmovdqu8_avx512bw(param_2[1]);
               auVar37._32_32_ = auVar28._32_32_;
               auVar37._0_32_ = vmovdqu8_avx512vl(*(undefined1(*) [32])param_2[2]);
               auVar38[1] = ( ( byte )(uVar3 >> 1) & 1 ) * SUB321(auVar37._0_32_, 1);
               auVar38[0] = ( (byte)uVar3 & 1 ) * SUB321(auVar37._0_32_, 0);
               for (int i_1363 = 0; i_1363 < 27; i_1363++) {
                  auVar38[( i_1363 + 2 )] = ( ( byte )(uVar3 >> ( i_1363 + 2 )) & 1 ) * SUB321(auVar37._0_32_, ( i_1363 + 2 ));
               }
               auVar38._30_34_ = auVar37._30_34_;
               auVar38[0x1d] = ( ( byte )(uVar3 >> 0x1d) & 1 ) * SUB321(auVar37._0_32_, 0x1d);
               auVar27 = vpshufb_avx512bw(auVar27, auVar26);
               vpshufb_avx512bw(auVar28, auVar26);
               vpshufb_avx512vl(auVar38._0_32_, auVar25);
               vpxorq_avx512f(auVar27, auVar46);
               vmovdqu64_avx512f(*(undefined1(*) [64])( param_1 + 0xc0 ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar19 < 0xc) {
               uVar3 = *(ulong*)( &DAT_001a9e40 + lVar1 );
               auVar27 = vmovdqu8_avx512bw(*param_2);
               auVar28 = vmovdqu8_avx512bw(param_2[1]);
               auVar29 = vmovdqu8_avx512bw(param_2[2]);
               auVar36[1] = ( ( byte )(uVar3 >> 1) & 1 ) * auVar29[1];
               auVar36[0] = ( (byte)uVar3 & 1 ) * auVar29[0];
               for (int i_1364 = 0; i_1364 < 54; i_1364++) {
                  auVar36[( i_1364 + 2 )] = ( ( byte )(uVar3 >> ( i_1364 + 2 )) & 1 ) * auVar29[( i_1364 + 2 )];
               }
               bVar4 = ( byte )(uVar3 >> 0x38);
               auVar36[0x38] = ( bVar4 & 1 ) * auVar29[0x38];
               for (int i_1365 = 0; i_1365 < 6; i_1365++) {
                  auVar36[( i_1365 + 57 )] = ( bVar4 >> ( i_1365 + 1 ) & 1 ) * auVar29[( i_1365 + 57 )];
               }
               auVar36[0x3f] = -((char)bVar4 >> 7) * auVar29[0x3f];
               auVar27 = vpshufb_avx512bw(auVar27, auVar26);
               vpshufb_avx512bw(auVar28, auVar26);
               vpshufb_avx512bw(auVar36, auVar26);
               vpxorq_avx512f(auVar27, auVar46);
               vmovdqu64_avx512f(*(undefined1(*) [64])( param_1 + 0xb0 ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar19 == 0xc) {
               uVar3 = *(ulong*)( &DAT_001a9e40 + lVar1 );
               auVar27 = vmovdqu8_avx512bw(*param_2);
               auVar28 = vmovdqu8_avx512bw(param_2[1]);
               auVar29 = vmovdqu8_avx512bw(param_2[2]);
               auVar35[1] = ( ( byte )(uVar3 >> 1) & 1 ) * auVar29[1];
               auVar35[0] = ( (byte)uVar3 & 1 ) * auVar29[0];
               for (int i_1366 = 0; i_1366 < 54; i_1366++) {
                  auVar35[( i_1366 + 2 )] = ( ( byte )(uVar3 >> ( i_1366 + 2 )) & 1 ) * auVar29[( i_1366 + 2 )];
               }
               bVar4 = ( byte )(uVar3 >> 0x38);
               auVar35[0x38] = ( bVar4 & 1 ) * auVar29[0x38];
               for (int i_1367 = 0; i_1367 < 6; i_1367++) {
                  auVar35[( i_1367 + 57 )] = ( bVar4 >> ( i_1367 + 1 ) & 1 ) * auVar29[( i_1367 + 57 )];
               }
               auVar35[0x3f] = -((char)bVar4 >> 7) * auVar29[0x3f];
               auVar27 = vpshufb_avx512bw(auVar27, auVar26);
               vpshufb_avx512bw(auVar28, auVar26);
               vpshufb_avx512bw(auVar35, auVar26);
               vpxorq_avx512f(auVar27, auVar46);
               vmovdqu64_avx512f(*(undefined1(*) [64])( param_1 + 0xa0 ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (0xd < uVar19) {
               if (uVar19 == 0xe) {
                  uVar3 = *(ulong*)( &DAT_001a9c40 + lVar1 );
                  auVar27 = vmovdqu8_avx512bw(*param_2);
                  auVar28 = vmovdqu8_avx512bw(param_2[1]);
                  auVar29 = vmovdqu8_avx512bw(param_2[2]);
                  auVar33._32_32_ = auVar29._32_32_;
                  auVar33._0_32_ = vmovdqu8_avx512vl(*(undefined1(*) [32])param_2[3]);
                  auVar34[1] = ( ( byte )(uVar3 >> 1) & 1 ) * SUB321(auVar33._0_32_, 1);
                  auVar34[0] = ( (byte)uVar3 & 1 ) * SUB321(auVar33._0_32_, 0);
                  for (int i_1370 = 0; i_1370 < 27; i_1370++) {
                     auVar34[( i_1370 + 2 )] = ( ( byte )(uVar3 >> ( i_1370 + 2 )) & 1 ) * SUB321(auVar33._0_32_, ( i_1370 + 2 ));
                  }
                  auVar34._30_34_ = auVar33._30_34_;
                  auVar34[0x1d] = ( ( byte )(uVar3 >> 0x1d) & 1 ) * SUB321(auVar33._0_32_, 0x1d);
                  auVar27 = vpshufb_avx512bw(auVar27, auVar26);
                  vpshufb_avx512bw(auVar28, auVar26);
                  vpshufb_avx512bw(auVar29, auVar26);
                  vpshufb_avx512vl(auVar34._0_32_, auVar25);
                  vpxorq_avx512f(auVar27, auVar46);
                  vmovdqu64_avx512f(*(undefined1(*) [64])( param_1 + 0x80 ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar19 != 0xf) {
                  uVar3 = *(ulong*)( &DAT_001a9c40 + lVar1 );
                  auVar27 = vmovdqu8_avx512bw(*param_2);
                  auVar28 = vmovdqu8_avx512bw(param_2[1]);
                  auVar29 = vmovdqu8_avx512bw(param_2[2]);
                  auVar30 = vmovdqu8_avx512bw(param_2[3]);
                  auVar31[1] = ( ( byte )(uVar3 >> 1) & 1 ) * auVar30[1];
                  auVar31[0] = ( (byte)uVar3 & 1 ) * auVar30[0];
                  for (int i_1371 = 0; i_1371 < 54; i_1371++) {
                     auVar31[( i_1371 + 2 )] = ( ( byte )(uVar3 >> ( i_1371 + 2 )) & 1 ) * auVar30[( i_1371 + 2 )];
                  }
                  bVar4 = ( byte )(uVar3 >> 0x38);
                  auVar31[0x38] = ( bVar4 & 1 ) * auVar30[0x38];
                  for (int i_1372 = 0; i_1372 < 6; i_1372++) {
                     auVar31[( i_1372 + 57 )] = ( bVar4 >> ( i_1372 + 1 ) & 1 ) * auVar30[( i_1372 + 57 )];
                  }
                  auVar31[0x3f] = -((char)bVar4 >> 7) * auVar30[0x3f];
                  auVar27 = vpshufb_avx512bw(auVar27, auVar26);
                  vpshufb_avx512bw(auVar28, auVar26);
                  vpshufb_avx512bw(auVar29, auVar26);
                  vpshufb_avx512bw(auVar31, auVar26);
                  vpxorq_avx512f(auVar27, auVar46);
                  vmovdqu64_avx512f(*(undefined1(*) [64])( param_1 + 0x60 ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               uVar3 = *(ulong*)( &DAT_001a9c40 + lVar1 );
               auVar27 = vmovdqu8_avx512bw(*param_2);
               auVar28 = vmovdqu8_avx512bw(param_2[1]);
               auVar29 = vmovdqu8_avx512bw(param_2[2]);
               auVar30 = vmovdqu8_avx512bw(param_2[3]);
               auVar32[1] = ( ( byte )(uVar3 >> 1) & 1 ) * auVar30[1];
               auVar32[0] = ( (byte)uVar3 & 1 ) * auVar30[0];
               for (int i_1368 = 0; i_1368 < 54; i_1368++) {
                  auVar32[( i_1368 + 2 )] = ( ( byte )(uVar3 >> ( i_1368 + 2 )) & 1 ) * auVar30[( i_1368 + 2 )];
               }
               bVar4 = ( byte )(uVar3 >> 0x38);
               auVar32[0x38] = ( bVar4 & 1 ) * auVar30[0x38];
               for (int i_1369 = 0; i_1369 < 6; i_1369++) {
                  auVar32[( i_1369 + 57 )] = ( bVar4 >> ( i_1369 + 1 ) & 1 ) * auVar30[( i_1369 + 57 )];
               }
               auVar32[0x3f] = -((char)bVar4 >> 7) * auVar30[0x3f];
               auVar27 = vpshufb_avx512bw(auVar27, auVar26);
               vpshufb_avx512bw(auVar28, auVar26);
               vpshufb_avx512bw(auVar29, auVar26);
               vpshufb_avx512bw(auVar32, auVar26);
               vpxorq_avx512f(auVar27, auVar46);
               vmovdqu64_avx512f(*(undefined1(*) [64])( param_1 + 0x70 ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            uVar3 = *(ulong*)( &DAT_001a9c40 + lVar1 );
            auVar27 = vmovdqu8_avx512bw(*param_2);
            auVar28 = vmovdqu8_avx512bw(param_2[1]);
            auVar29 = vmovdqu8_avx512bw(param_2[2]);
            auVar21 = vmovdqu8_avx512vl(*(undefined1(*) [16])param_2[3]);
            auVar24[1] = ( ( byte )(uVar3 >> 1) & 1 ) * auVar21[1];
            auVar24[0] = ( (byte)uVar3 & 1 ) * auVar21[0];
            for (int i_1362 = 0; i_1362 < 14; i_1362++) {
               auVar24[( i_1362 + 2 )] = ( ( byte )(uVar3 >> ( i_1362 + 2 )) & 1 ) * auVar21[( i_1362 + 2 )];
            }
            auVar27 = vpshufb_avx512bw(auVar27, auVar26);
            vpshufb_avx512bw(auVar28, auVar26);
            vpshufb_avx512bw(auVar29, auVar26);
            vpshufb_avx512vl(auVar24, auVar20);
            vpxorq_avx512f(auVar27, auVar46);
            vmovdqu64_avx512f(*(undefined1(*) [64])( param_1 + 0x90 ));
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }
         uVar3 = *(ulong*)( &DAT_001a9e40 + lVar1 );
         auVar27 = vmovdqu8_avx512bw(*param_2);
         auVar28 = vmovdqu8_avx512bw(param_2[1]);
         auVar21 = vmovdqu8_avx512vl(*(undefined1(*) [16])param_2[2]);
         auVar22[1] = ( ( byte )(uVar3 >> 1) & 1 ) * auVar21[1];
         auVar22[0] = ( (byte)uVar3 & 1 ) * auVar21[0];
         for (int i_1350 = 0; i_1350 < 14; i_1350++) {
            auVar22[( i_1350 + 2 )] = ( ( byte )(uVar3 >> ( i_1350 + 2 )) & 1 ) * auVar21[( i_1350 + 2 )];
         }
         auVar27 = vpshufb_avx512bw(auVar27, auVar26);
         vpshufb_avx512bw(auVar28, auVar26);
         vpshufb_avx512vl(auVar22, auVar20);
         vpxorq_avx512f(auVar27, auVar46);
         vmovdqu64_avx512f(*(undefined1(*) [64])( param_1 + 0xd0 ));
         /* WARNING: Bad instruction - Truncating control flow here */
         halt_baddata();
      }
      uVar3 = *puVar2;
      auVar21 = vmovdqu8_avx512vl(*(undefined1(*) [16])*param_2);
      auVar23[1] = ( ( byte )(uVar3 >> 1) & 1 ) * auVar21[1];
      auVar23[0] = ( (byte)uVar3 & 1 ) * auVar21[0];
      for (int i_1349 = 0; i_1349 < 14; i_1349++) {
         auVar23[( i_1349 + 2 )] = ( ( byte )(uVar3 >> ( i_1349 + 2 )) & 1 ) * auVar21[( i_1349 + 2 )];
      }
      auVar20 = vpshufb_avx512vl(auVar23, auVar20);
      auVar46 = vpxorq_avx512f(ZEXT1664(auVar20), auVar46);
      auVar21 = vmovdqu64_avx512vl(*(undefined1(*) [16])( param_1 + 0x150 ));
      auVar45._8_8_ = 0;
      auVar45._0_8_ = auVar46._8_8_;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = auVar21._0_8_;
      auVar20 = (undefined1[16])0x0;
      for (uVar19 = 0; uVar19 < 0x40; uVar19 = uVar19 + 1) {
         if (( auVar45 & (undefined1[16])0x1 << uVar19 ) != (undefined1[16])0x0) {
            auVar20 = auVar20 ^ auVar10 << uVar19;
         }
      }
      auVar44._32_32_ = in_ZMM7._32_32_;
      auVar44._0_32_ = ZEXT1632(auVar20);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = auVar46._0_8_;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = auVar21._8_8_;
      auVar20 = (undefined1[16])0x0;
      for (uVar19 = 0; uVar19 < 0x40; uVar19 = uVar19 + 1) {
         if (( auVar12 & (undefined1[16])0x1 << uVar19 ) != (undefined1[16])0x0) {
            auVar20 = auVar20 ^ auVar14 << uVar19;
         }
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = auVar46._8_8_;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = auVar21._8_8_;
      auVar22 = (undefined1[16])0x0;
      for (uVar19 = 0; uVar19 < 0x40; uVar19 = uVar19 + 1) {
         if (( auVar16 & (undefined1[16])0x1 << uVar19 ) != (undefined1[16])0x0) {
            auVar22 = auVar22 ^ auVar17 << uVar19;
         }
      }
      auVar42._32_32_ = in_ZMM1._32_32_;
      auVar42._0_32_ = ZEXT1632(auVar22);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = auVar46._0_8_;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = auVar21._0_8_;
      auVar21 = (undefined1[16])0x0;
      for (uVar19 = 0; uVar19 < 0x40; uVar19 = uVar19 + 1) {
         if (( auVar5 & (undefined1[16])0x1 << uVar19 ) != (undefined1[16])0x0) {
            auVar21 = auVar21 ^ auVar7 << uVar19;
         }
      }
      auVar43._32_32_ = in_ZMM6._32_32_;
      auVar43._0_32_ = ZEXT1632(auVar21);
      auVar46._32_8_ = in_register_00001420;
      auVar46._0_32_ = ZEXT1632(auVar20);
      auVar46._40_8_ = in_register_00001428;
      auVar46._48_8_ = in_register_00001430;
      auVar46._56_8_ = in_register_00001438;
      auVar46 = vpxorq_avx512f(auVar44, auVar46);
      auVar26 = vpsrldq_avx512bw(auVar46, 8);
      auVar27 = vpslldq_avx512bw(auVar46, 8);
      auVar46 = vpxorq_avx512f(auVar42, auVar26);
      auVar26 = vpxorq_avx512f(auVar43, auVar27);
      auVar25 = vextracti64x4_avx512f(auVar46, 1);
      auVar25 = vpxorq_avx512vl(auVar46._0_32_, auVar25);
      auVar20 = vextracti32x4_avx512vl(auVar25, 1);
      auVar21 = vpxorq_avx512vl(auVar25._0_16_, auVar20);
      auVar25 = vextracti64x4_avx512f(auVar26, 1);
      auVar25 = vpxorq_avx512vl(auVar26._0_32_, auVar25);
      auVar20 = vextracti32x4_avx512vl(auVar25, 1);
      auVar22 = vpxorq_avx512vl(auVar25._0_16_, auVar20);
      auVar24 = vmovdqa64_avx512vl(_POLY2);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = auVar24._8_8_;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = auVar22._0_8_;
      auVar20 = (undefined1[16])0x0;
      for (uVar19 = 0; uVar19 < 0x40; uVar19 = uVar19 + 1) {
         if (( auVar9 & (undefined1[16])0x1 << uVar19 ) != (undefined1[16])0x0) {
            auVar20 = auVar20 ^ auVar11 << uVar19;
         }
      }
      auVar20 = vpslldq_avx(auVar20, 8);
      auVar22 = vpxorq_avx512vl(auVar22, auVar20);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auVar24._0_8_;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = auVar22._0_8_;
      auVar20 = (undefined1[16])0x0;
      for (uVar19 = 0; uVar19 < 0x40; uVar19 = uVar19 + 1) {
         if (( auVar6 & (undefined1[16])0x1 << uVar19 ) != (undefined1[16])0x0) {
            auVar20 = auVar20 ^ auVar8 << uVar19;
         }
      }
      auVar45 = vpsrldq_avx(auVar20, 4);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = auVar24._0_8_;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = auVar22._8_8_;
      auVar20 = (undefined1[16])0x0;
      for (uVar19 = 0; uVar19 < 0x40; uVar19 = uVar19 + 1) {
         if (( auVar13 & (undefined1[16])0x1 << uVar19 ) != (undefined1[16])0x0) {
            auVar20 = auVar20 ^ auVar15 << uVar19;
         }
      }
      auVar20 = vpslldq_avx(auVar20, 4);
      auVar20 = vpternlogq_avx512vl(auVar20, auVar45, auVar21, 0x96);
   }
   auVar20 = vmovdqu64_avx512vl(auVar20);
   *(undefined1(*) [16])( param_1 + 0x40 ) = auVar20;
   if (0x100 < param_3) {
      auVar46 = ZEXT1664((undefined1[16])0x0);
      for (int i_1373 = 0; i_1373 < 12; i_1373++) {
         vmovdqa64_avx512f(auVar46);
      }
   }
   return;
}/* WARNING: Control flow encountered bad instruction data *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int ossl_aes_gcm_encrypt_avx512(undefined1 (*param_1)[16], undefined1 (*param_2)[16], ulong *param_3, undefined1 (*param_4)[16], ulong param_5, undefined1 (*param_6)[16]) {
   ushort uVar1;
   undefined4 uVar2;
   byte bVar3;
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
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
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
   undefined1 auVar36[16];
   undefined1 auVar37[16];
   undefined1 auVar38[16];
   undefined1 auVar39[16];
   undefined1 auVar40[16];
   undefined1 auVar41[16];
   undefined1 auVar42[16];
   undefined2 uVar43;
   undefined1 auVar44[32];
   undefined1 auVar45[64];
   undefined1 auVar46[64];
   undefined1 auVar47[64];
   undefined1 auVar48[64];
   undefined1 auVar49[64];
   undefined1 auVar50[64];
   undefined1 auVar51[64];
   undefined1 auVar52[64];
   undefined1 auVar53[64];
   undefined1 auVar54[64];
   undefined1 auVar55[64];
   undefined1 auVar56[64];
   undefined1 auVar57[64];
   undefined1 auVar58[64];
   undefined1 auVar59[64];
   undefined1 auVar60[64];
   undefined1 auVar61[64];
   undefined1 auVar62[64];
   undefined1 auVar63[64];
   undefined1 auVar64[64];
   undefined1 auVar65[64];
   undefined1 auVar66[64];
   undefined1 auVar67[64];
   undefined1 auVar68[64];
   undefined1 auVar69[64];
   undefined1 auVar70[64];
   undefined1 auVar71[64];
   undefined1 auVar72[64];
   undefined1 auVar73[64];
   undefined1 auVar74[64];
   undefined1 auVar75[64];
   undefined1 auVar76[64];
   undefined1 auVar77[64];
   undefined1 auVar78[64];
   undefined1 auVar79[64];
   undefined1 auVar80[64];
   undefined1 auVar81[64];
   undefined1 auVar82[64];
   undefined1 auVar83[64];
   undefined1 auVar84[64];
   undefined1 auVar85[64];
   undefined1 auVar86[64];
   undefined1 auVar87[64];
   char cVar88;
   char cVar90;
   int iVar89;
   undefined1 uVar91;
   char cVar92;
   undefined6 uVar93;
   ulong uVar94;
   ulong uVar95;
   uint uVar96;
   undefined1(*pauVar97)[16];
   long lVar98;
   undefined1 auVar99[16];
   undefined1 auVar100[16];
   undefined1 auVar101[16];
   undefined1 auVar102[16];
   undefined1 auVar103[16];
   undefined1 auVar105[16];
   undefined1 auVar106[16];
   undefined1 auVar107[16];
   undefined1 auVar108[16];
   undefined1 auVar109[16];
   undefined1 auVar110[16];
   undefined1 auVar111[32];
   undefined1 auVar112[32];
   undefined1 auVar113[64];
   undefined1 auVar114[64];
   undefined1 auVar115[64];
   undefined1 auVar116[64];
   undefined1 in_ZMM0[64];
   undefined1 auVar117[64];
   undefined1 auVar118[16];
   undefined1 auVar104[16];
   uVar93 = ( undefined6 )((ulong)param_4 >> 0x10);
   cVar92 = (char)( (ulong)param_4 >> 8 );
   uVar91 = SUB81(param_4, 0);
   iVar89 = *(int*)param_1[0xf];
   cVar88 = (char)iVar89;
   cVar90 = (char)( (uint)iVar89 >> 8 );
   uVar43 = SUB82(param_3, 0);
   if (iVar89 == 9) {
      if (param_5 != 0) {
         auVar102 = vmovdqu64_avx512vl(param_2[4]);
         uVar95 = *param_3;
         if (uVar95 != 0) {
            uVar94 = 0x10;
            if (param_5 < 0x10) {
               uVar94 = param_5;
            }
            uVar1 = *(ushort*)( &byte_len_to_mask_table + uVar94 * 2 );
            auVar103 = vmovdqu8_avx512vl(*param_4);
            auVar105[1] = ( ( byte )(uVar1 >> 1) & 1 ) * auVar103[1];
            auVar105[0] = ( (byte)uVar1 & 1 ) * auVar103[0];
            for (int i_1374 = 0; i_1374 < 6; i_1374++) {
               auVar105[( i_1374 + 2 )] = ( ( byte )(uVar1 >> ( i_1374 + 2 )) & 1 ) * auVar103[( i_1374 + 2 )];
            }
            bVar3 = ( byte )(uVar1 >> 8);
            auVar105[8] = ( bVar3 & 1 ) * auVar103[8];
            for (int i_1375 = 0; i_1375 < 6; i_1375++) {
               auVar105[( i_1375 + 9 )] = ( bVar3 >> ( i_1375 + 1 ) & 1 ) * auVar103[( i_1375 + 9 )];
            }
            auVar105[0xf] = -((char)bVar3 >> 7) * auVar103[0xf];
            auVar103 = vmovdqu64_avx512vl(param_2[1]);
            auVar106 = vmovdqu64_avx512vl(param_2[0x15]);
            pauVar97 = (undefined1(*) [16])( &SHIFT_MASK + uVar95 );
            auVar107 = vmovdqu64_avx512vl(*pauVar97);
            auVar103 = vpshufb_avx(auVar103, auVar107);
            auVar103 = vpxorq_avx512vl(auVar103, auVar105);
            lVar98 = param_5 + uVar95 + -0x10;
            if ((long)( param_5 + uVar95 ) < 0x10) {
               pauVar97 = (undefined1(*) [16])( (long)pauVar97 - lVar98 );
            }
            auVar105 = vmovdqu64_avx512vl(pauVar97[1]);
            in_ZMM0 = ZEXT1664(auVar105);
            auVar103 = vpand_avx(auVar103, auVar105);
            auVar103 = vpshufb_avx(auVar103, _SHUF_MASK);
            auVar103 = vpshufb_avx(auVar103, auVar107);
            auVar102 = vpxorq_avx512vl(auVar102, auVar103);
            if (lVar98 < 0) {
               *param_3 = *param_3 + param_5;
               uVar95 = param_5;
            } else {
               auVar108._8_8_ = 0;
               auVar108._0_8_ = auVar102._8_8_;
               auVar118._8_8_ = 0;
               auVar118._0_8_ = auVar106._8_8_;
               auVar105 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar108 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar105 = auVar105 ^ auVar118 << uVar96;
                  }
               }
               auVar4._8_8_ = 0;
               auVar4._0_8_ = auVar102._0_8_;
               auVar10._8_8_ = 0;
               auVar10._0_8_ = auVar106._0_8_;
               auVar108 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar4 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar108 = auVar108 ^ auVar10 << uVar96;
                  }
               }
               auVar16._8_8_ = 0;
               auVar16._0_8_ = auVar102._8_8_;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = auVar106._0_8_;
               auVar118 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar16 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar118 = auVar118 ^ auVar21 << uVar96;
                  }
               }
               auVar27._8_8_ = 0;
               auVar27._0_8_ = auVar102._0_8_;
               auVar33._8_8_ = 0;
               auVar33._0_8_ = auVar106._8_8_;
               auVar102 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar27 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar102 = auVar102 ^ auVar33 << uVar96;
                  }
               }
               auVar102 = vpxorq_avx512vl(auVar102, auVar118);
               auVar106 = vpsrldq_avx(auVar102, 8);
               auVar102 = vpslldq_avx(auVar102, 8);
               auVar105 = vpxorq_avx512vl(auVar105, auVar106);
               auVar108 = vpxorq_avx512vl(auVar102, auVar108);
               auVar118 = vmovdqu64_avx512vl(_POLY2);
               auVar106._8_8_ = 0;
               auVar106._0_8_ = auVar118._8_8_;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = auVar108._0_8_;
               auVar102 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar106 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar102 = auVar102 ^ auVar22 << uVar96;
                  }
               }
               auVar102 = vpslldq_avx(auVar102, 8);
               auVar106 = vpxorq_avx512vl(auVar108, auVar102);
               auVar5._8_8_ = 0;
               auVar5._0_8_ = auVar118._0_8_;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = auVar106._0_8_;
               auVar102 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar5 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar102 = auVar102 ^ auVar11 << uVar96;
                  }
               }
               auVar108 = vpsrldq_avx(auVar102, 4);
               auVar28._8_8_ = 0;
               auVar28._0_8_ = auVar118._0_8_;
               auVar34._8_8_ = 0;
               auVar34._0_8_ = auVar106._8_8_;
               auVar102 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar28 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar102 = auVar102 ^ auVar34 << uVar96;
                  }
               }
               auVar102 = vpslldq_avx(auVar102, 4);
               auVar102 = vpternlogq_avx512vl(auVar102, auVar105, auVar108, 0x96);
               *param_3 = 0;
               uVar95 = 0x10 - uVar95;
            }
            auVar105 = vmovdqu64_avx512vl(auVar102);
            param_2[4] = auVar105;
            auVar103 = vpshufb_avx(auVar103, _SHUF_MASK);
            auVar103 = vpshufb_avx(auVar103, auVar107);
            auVar103 = vmovdqu8_avx512vl(auVar103);
            *param_6 = auVar103;
         }
         auVar103 = vmovdqu64_avx512vl(*param_2);
         auVar117 = ZEXT1664(auVar103);
         param_5 = param_5 - uVar95;
         if (param_5 != 0) {
            if (0x100 < param_5) {
               auVar113._16_16_ = _UNK_001a9fd0;
               auVar113._0_16_ = _SHUF_MASK;
               auVar113._32_32_ = _UNK_001a9fe0;
               auVar113 = vmovdqa64_avx512f(auVar113);
               auVar114 = vmovdqa64_avx512f(_ddq_addbe_4444);
               auVar115 = vmovdqa64_avx512f(_ddq_addbe_1234);
               auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
               *(char*)( (long)param_3 + -0x6e ) = *(char*)( (long)param_3 + -0x6e ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               if (auVar103[0] < 0xf0) {
                  auVar117 = vpaddd_avx512f(auVar117, auVar115);
                  for (int i_1381 = 0; i_1381 < 2; i_1381++) {
                     auVar117 = vpaddd_avx512f(auVar117, auVar114);
                  }
                  auVar117 = vpaddd_avx512f(auVar117, auVar117);
               } else {
                  auVar114 = vpshufb_avx512bw(auVar117, auVar113);
                  auVar115 = vmovdqa64_avx512f(_ddq_add_4444);
                  auVar117._1_63_ = _UNK_001aa081;
                  auVar117[0] = ddq_add_1234;
                  auVar117 = vpaddd_avx512f(auVar114, auVar117);
                  auVar114 = vpaddd_avx512f(auVar117, auVar115);
                  auVar116 = vpaddd_avx512f(auVar114, auVar115);
                  auVar115 = vpaddd_avx512f(auVar116, auVar115);
                  vpshufb_avx512bw(auVar117, auVar113);
                  vpshufb_avx512bw(auVar114, auVar113);
                  vpshufb_avx512bw(auVar116, auVar113);
                  auVar117 = vpshufb_avx512bw(auVar115, auVar113);
               }
               vshufi64x2_avx512f(auVar117, auVar117);
               *(int*)param_4[-8] = *(int*)param_4[-8] + 1;
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            uVar96 = (int)param_5 + 0xfU >> 4;
            if (uVar96 == 8) {
               auVar114._16_16_ = _UNK_001a9fd0;
               auVar114._0_16_ = _SHUF_MASK;
               auVar114._32_32_ = _UNK_001a9fe0;
               auVar113 = vmovdqa64_avx512f(auVar114);
               auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
               vextracti32x4_avx512f(auVar117, 3);
               auVar114 = vpshufb_avx512bw(in_ZMM0, auVar113);
               auVar117 = vpshufb_avx512bw(auVar117, auVar113);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
               auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar114, auVar113);
               vpxorq_avx512f(auVar117, auVar113);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (7 < uVar96) {
               if (uVar96 == 0xc) {
                  auVar115._16_16_ = _UNK_001a9fd0;
                  auVar115._0_16_ = _SHUF_MASK;
                  auVar115._32_32_ = _UNK_001a9fe0;
                  auVar113 = vmovdqa64_avx512f(auVar115);
                  auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                  auVar114 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar114, 3);
                  auVar115 = vpshufb_avx512bw(in_ZMM0, auVar113);
                  auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                  auVar113 = vpshufb_avx512bw(auVar114, auVar113);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                  auVar114 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar115, auVar114);
                  vpxorq_avx512f(auVar117, auVar114);
                  vpxorq_avx512f(auVar113, auVar114);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 < 0xc) {
                  if (uVar96 == 0xb) {
                     auVar116._16_16_ = _UNK_001a9fd0;
                     auVar116._0_16_ = _SHUF_MASK;
                     auVar116._32_32_ = _UNK_001a9fe0;
                     auVar113 = vmovdqa64_avx512f(auVar116);
                     auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                     *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                     uVar2 = in(uVar43);
                     *(undefined4*)*param_1 = uVar2;
                     ddq_add_1234 = ddq_add_1234 + '\x01';
                     auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                     auVar114 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                     vextracti32x4_avx512f(auVar114, 2);
                     auVar115 = vpshufb_avx512bw(in_ZMM0, auVar113);
                     auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                     auVar113 = vpshufb_avx512bw(auVar114, auVar113);
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                     auVar114 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                     vpxorq_avx512f(auVar115, auVar114);
                     vpxorq_avx512f(auVar117, auVar114);
                     vpxorq_avx512f(auVar113, auVar114);
                     vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                     /* WARNING: Bad instruction - Truncating control flow here */
                     halt_baddata();
                  }
                  if (uVar96 == 10) {
                     auVar80._16_16_ = _UNK_001a9fd0;
                     auVar80._0_16_ = _SHUF_MASK;
                     auVar80._32_32_ = _UNK_001a9fe0;
                     auVar113 = vmovdqa64_avx512f(auVar80);
                     auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                     *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                     uVar2 = in(uVar43);
                     *(undefined4*)*param_1 = uVar2;
                     ddq_add_1234 = ddq_add_1234 + '\x01';
                     auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                     auVar114 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                     vextracti32x4_avx512f(auVar114, 1);
                     auVar115 = vpshufb_avx512bw(in_ZMM0, auVar113);
                     auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                     auVar112 = vpshufb_avx512vl(auVar114._0_32_, auVar113._0_32_);
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                     vmovdqu8_avx512vl(*(undefined1(*) [32])( param_4[8] + uVar95 ));
                     auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                     vpxorq_avx512f(auVar115, auVar113);
                     vpxorq_avx512f(auVar117, auVar113);
                     vpxorq_avx512vl(auVar112, auVar113._0_32_);
                     vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                     /* WARNING: Bad instruction - Truncating control flow here */
                     halt_baddata();
                  }
                  auVar79._16_16_ = _UNK_001a9fd0;
                  auVar79._0_16_ = _SHUF_MASK;
                  auVar79._32_32_ = _UNK_001a9fe0;
                  auVar113 = vmovdqa64_avx512f(auVar79);
                  auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                  auVar114 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar114, 0);
                  auVar115 = vpshufb_avx512bw(in_ZMM0, auVar113);
                  auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                  auVar102 = vpshufb_avx512vl(auVar114._0_16_, auVar113._0_16_);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512vl(*(undefined1(*) [16])( param_4[8] + uVar95 ));
                  auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar115, auVar113);
                  vpxorq_avx512f(auVar117, auVar113);
                  vpxorq_avx512vl(auVar102, auVar113._0_16_);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 == 0x10) {
                  auVar78._16_16_ = _UNK_001a9fd0;
                  auVar78._0_16_ = _SHUF_MASK;
                  auVar78._32_32_ = _UNK_001a9fe0;
                  auVar113 = vmovdqa64_avx512f(auVar78);
                  auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                  auVar114 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  auVar115 = vpaddd_avx512f(auVar117, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar115, 3);
                  auVar116 = vpshufb_avx512bw(in_ZMM0, auVar113);
                  auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                  auVar114 = vpshufb_avx512bw(auVar114, auVar113);
                  auVar113 = vpshufb_avx512bw(auVar115, auVar113);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[0xc] + uVar95 ));
                  auVar115 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar116, auVar115);
                  vpxorq_avx512f(auVar117, auVar115);
                  vpxorq_avx512f(auVar114, auVar115);
                  vpxorq_avx512f(auVar113, auVar115);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 == 0xf) {
                  auVar77._16_16_ = _UNK_001a9fd0;
                  auVar77._0_16_ = _SHUF_MASK;
                  auVar77._32_32_ = _UNK_001a9fe0;
                  auVar113 = vmovdqa64_avx512f(auVar77);
                  auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                  auVar114 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  auVar115 = vpaddd_avx512f(auVar117, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar115, 2);
                  auVar116 = vpshufb_avx512bw(in_ZMM0, auVar113);
                  auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                  auVar114 = vpshufb_avx512bw(auVar114, auVar113);
                  auVar113 = vpshufb_avx512bw(auVar115, auVar113);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[0xc] + uVar95 ));
                  auVar115 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar116, auVar115);
                  vpxorq_avx512f(auVar117, auVar115);
                  vpxorq_avx512f(auVar114, auVar115);
                  vpxorq_avx512f(auVar113, auVar115);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 == 0xe) {
                  auVar76._16_16_ = _UNK_001a9fd0;
                  auVar76._0_16_ = _SHUF_MASK;
                  auVar76._32_32_ = _UNK_001a9fe0;
                  auVar113 = vmovdqa64_avx512f(auVar76);
                  auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                  auVar114 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  auVar115 = vpaddd_avx512f(auVar117, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar115, 1);
                  auVar116 = vpshufb_avx512bw(in_ZMM0, auVar113);
                  auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                  auVar114 = vpshufb_avx512bw(auVar114, auVar113);
                  auVar112 = vpshufb_avx512vl(auVar115._0_32_, auVar113._0_32_);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                  vmovdqu8_avx512vl(*(undefined1(*) [32])( param_4[0xc] + uVar95 ));
                  auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar116, auVar113);
                  vpxorq_avx512f(auVar117, auVar113);
                  vpxorq_avx512f(auVar114, auVar113);
                  vpxorq_avx512vl(auVar112, auVar113._0_32_);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               auVar75._16_16_ = _UNK_001a9fd0;
               auVar75._0_16_ = _SHUF_MASK;
               auVar75._32_32_ = _UNK_001a9fe0;
               auVar113 = vmovdqa64_avx512f(auVar75);
               auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
               auVar114 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
               auVar115 = vpaddd_avx512f(auVar117, _ddq_add_8888);
               vextracti32x4_avx512f(auVar115, 0);
               auVar116 = vpshufb_avx512bw(in_ZMM0, auVar113);
               auVar117 = vpshufb_avx512bw(auVar117, auVar113);
               auVar114 = vpshufb_avx512bw(auVar114, auVar113);
               auVar102 = vpshufb_avx512vl(auVar115._0_16_, auVar113._0_16_);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
               vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
               vmovdqu8_avx512vl(*(undefined1(*) [16])( param_4[0xc] + uVar95 ));
               auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar116, auVar113);
               vpxorq_avx512f(auVar117, auVar113);
               vpxorq_avx512f(auVar114, auVar113);
               vpxorq_avx512vl(auVar102, auVar113._0_16_);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar96 == 4) {
               auVar85._16_16_ = _UNK_001a9fd0;
               auVar85._0_16_ = _SHUF_MASK;
               auVar85._32_32_ = _UNK_001a9fe0;
               auVar113 = vmovdqa64_avx512f(auVar85);
               vshufi64x2_avx512f(auVar117, auVar117);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               vextracti32x4_avx512f(in_ZMM0, 3);
               auVar117 = vpshufb_avx512bw(in_ZMM0, auVar113);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar117, auVar113);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (3 < uVar96) {
               if (uVar96 == 7) {
                  auVar83._16_16_ = _UNK_001a9fd0;
                  auVar83._0_16_ = _SHUF_MASK;
                  auVar83._32_32_ = _UNK_001a9fe0;
                  auVar113 = vmovdqa64_avx512f(auVar83);
                  auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                  vextracti32x4_avx512f(auVar117, 2);
                  auVar114 = vpshufb_avx512bw(in_ZMM0, auVar113);
                  auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar114, auVar113);
                  vpxorq_avx512f(auVar117, auVar113);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 == 6) {
                  auVar82._16_16_ = _UNK_001a9fd0;
                  auVar82._0_16_ = _SHUF_MASK;
                  auVar82._32_32_ = _UNK_001a9fe0;
                  auVar113 = vmovdqa64_avx512f(auVar82);
                  auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                  vextracti32x4_avx512f(auVar117, 1);
                  auVar114 = vpshufb_avx512bw(in_ZMM0, auVar113);
                  auVar112 = vpshufb_avx512vl(auVar117._0_32_, auVar113._0_32_);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512vl(*(undefined1(*) [32])( param_4[4] + uVar95 ));
                  auVar117 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar114, auVar117);
                  vpxorq_avx512vl(auVar112, auVar117._0_32_);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               auVar81._16_16_ = _UNK_001a9fd0;
               auVar81._0_16_ = _SHUF_MASK;
               auVar81._32_32_ = _UNK_001a9fe0;
               auVar113 = vmovdqa64_avx512f(auVar81);
               auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
               vextracti32x4_avx512f(auVar117, 0);
               auVar114 = vpshufb_avx512bw(in_ZMM0, auVar113);
               auVar102 = vpshufb_avx512vl(auVar117._0_16_, auVar113._0_16_);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               vmovdqu8_avx512vl(*(undefined1(*) [16])( param_4[4] + uVar95 ));
               auVar117 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar114, auVar117);
               vpxorq_avx512vl(auVar102, auVar117._0_16_);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar96 == 3) {
               auVar84._16_16_ = _UNK_001a9fd0;
               auVar84._0_16_ = _SHUF_MASK;
               auVar84._32_32_ = _UNK_001a9fe0;
               auVar113 = vmovdqa64_avx512f(auVar84);
               vshufi64x2_avx512f(auVar117, auVar117);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               vextracti32x4_avx512f(in_ZMM0, 2);
               auVar117 = vpshufb_avx512bw(in_ZMM0, auVar113);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar117, auVar113);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar96 == 2) {
               auVar112._16_16_ = _UNK_001a9fd0;
               auVar112._0_16_ = _SHUF_MASK;
               auVar112 = vmovdqa64_avx512vl(auVar112);
               auVar111 = vshufi64x2_avx512vl(ZEXT1632(auVar103), ZEXT1632(auVar103));
               ddq_add_1234 = ddq_add_1234 + '\x01';
               vextracti32x4_avx512f(ZEXT3264(auVar111), 1);
               auVar112 = vpshufb_avx512vl(auVar111, auVar112);
               vmovdqu8_avx512vl(*(undefined1(*) [32])( CONCAT62(uVar93, CONCAT11(cVar92 + cVar88, uVar91)) + uVar95 ));
               auVar117 = vbroadcastf64x2_avx512dq(*param_1);
               vpxorq_avx512vl(auVar112, auVar117._0_32_);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 8 ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            auVar105 = vmovdqa64_avx512vl(_SHUF_MASK);
            auVar103 = vpaddd_avx(auVar103, _ONE);
            uVar94 = *(ulong*)( &byte64_len_to_mask_table + param_5 * 8 );
            auVar106 = vextracti32x4_avx512f(ZEXT1664(auVar103), 0);
            auVar103 = vpshufb_avx512vl(auVar103, auVar105);
            auVar108 = vmovdqu8_avx512vl(*(undefined1(*) [16])( *param_4 + uVar95 ));
            auVar107[1] = ( ( byte )(uVar94 >> 1) & 1 ) * auVar108[1];
            auVar107[0] = ( (byte)uVar94 & 1 ) * auVar108[0];
            for (int i_1379 = 0; i_1379 < 6; i_1379++) {
               auVar107[( i_1379 + 2 )] = ( ( byte )(uVar94 >> ( i_1379 + 2 )) & 1 ) * auVar108[( i_1379 + 2 )];
            }
            bVar3 = ( byte )(uVar94 >> 8);
            auVar107[8] = ( bVar3 & 1 ) * auVar108[8];
            for (int i_1377 = 0; i_1377 < 7; i_1377++) {
               auVar107[( i_1377 + 9 )] = ( ( byte )(uVar94 >> ( i_1377 + 9 )) & 1 ) * auVar108[( i_1377 + 9 )];
            }
            auVar117 = vbroadcastf64x2_avx512dq(*param_1);
            auVar103 = vpxorq_avx512vl(auVar103, auVar117._0_16_);
            auVar117 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 8 ));
            for (int i_1376 = 0; i_1376 < 4; i_1376++) {
               auVar103 = aesenc(auVar103, auVar117._0_16_);
               auVar117 = vbroadcastf64x2_avx512dq(param_1[( i_1376 + 1 )]);
               auVar103 = aesenc(auVar103, auVar117._0_16_);
               auVar117 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( param_1[( i_1376 + 1 )] + 8 ));
            }
            auVar103 = aesenc(auVar103, auVar117._0_16_);
            auVar117 = vbroadcastf64x2_avx512dq(param_1[5]);
            auVar103 = aesenclast(auVar103, auVar117._0_16_);
            auVar107 = vpxorq_avx512vl(auVar103, auVar107);
            auVar108 = vextracti32x4_avx512f(ZEXT1664(auVar107), 0);
            auVar103 = vmovdqu8_avx512vl(auVar107);
            *(undefined1(*) [16])( *param_6 + uVar95 ) = auVar103;
            auVar117 = vmovdqu8_avx512bw(ZEXT1664(auVar107));
            auVar103[1] = ( ( byte )(uVar94 >> 1) & 1 ) * auVar117[1];
            auVar103[0] = ( (byte)uVar94 & 1 ) * auVar117[0];
            for (int i_1380 = 0; i_1380 < 6; i_1380++) {
               auVar103[( i_1380 + 2 )] = ( ( byte )(uVar94 >> ( i_1380 + 2 )) & 1 ) * auVar117[( i_1380 + 2 )];
            }
            auVar103[8] = ( bVar3 & 1 ) * auVar117[8];
            for (int i_1378 = 0; i_1378 < 7; i_1378++) {
               auVar103[( i_1378 + 9 )] = ( ( byte )(uVar94 >> ( i_1378 + 9 )) & 1 ) * auVar117[( i_1378 + 9 )];
            }
            auVar103 = vpshufb_avx512vl(auVar103, auVar105);
            auVar105 = vextracti32x4_avx512f(ZEXT1664(auVar103), 0);
            if (0xf < (long)param_5) {
               *param_3 = 0;
               vpxorq_avx512f(ZEXT1664(auVar103), ZEXT1664(auVar102));
               vmovdqu64_avx512vl(param_2[0x15]);
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            *param_3 = param_5;
            auVar103 = vmovdqu64_avx512vl(auVar108);
            param_2[1] = auVar103;
            auVar103 = vpxorq_avx512vl(auVar102, auVar105);
            auVar102 = vmovdqu64_avx512vl(auVar106);
            *param_2 = auVar102;
            auVar102 = vmovdqu64_avx512vl(auVar103);
            param_2[4] = auVar102;
         }
      }
   } else if (iVar89 == 0xb) {
      if (param_5 != 0) {
         auVar102 = vmovdqu64_avx512vl(param_2[4]);
         uVar95 = *param_3;
         if (uVar95 != 0) {
            uVar94 = 0x10;
            if (param_5 < 0x10) {
               uVar94 = param_5;
            }
            uVar1 = *(ushort*)( &byte_len_to_mask_table + uVar94 * 2 );
            auVar103 = vmovdqu8_avx512vl(*param_4);
            auVar99[1] = ( ( byte )(uVar1 >> 1) & 1 ) * auVar103[1];
            auVar99[0] = ( (byte)uVar1 & 1 ) * auVar103[0];
            for (int i_1382 = 0; i_1382 < 6; i_1382++) {
               auVar99[( i_1382 + 2 )] = ( ( byte )(uVar1 >> ( i_1382 + 2 )) & 1 ) * auVar103[( i_1382 + 2 )];
            }
            bVar3 = ( byte )(uVar1 >> 8);
            auVar99[8] = ( bVar3 & 1 ) * auVar103[8];
            for (int i_1383 = 0; i_1383 < 6; i_1383++) {
               auVar99[( i_1383 + 9 )] = ( bVar3 >> ( i_1383 + 1 ) & 1 ) * auVar103[( i_1383 + 9 )];
            }
            auVar99[0xf] = -((char)bVar3 >> 7) * auVar103[0xf];
            auVar103 = vmovdqu64_avx512vl(param_2[1]);
            auVar105 = vmovdqu64_avx512vl(param_2[0x15]);
            pauVar97 = (undefined1(*) [16])( &SHIFT_MASK + uVar95 );
            auVar106 = vmovdqu64_avx512vl(*pauVar97);
            auVar103 = vpshufb_avx(auVar103, auVar106);
            auVar103 = vpxorq_avx512vl(auVar103, auVar99);
            lVar98 = param_5 + uVar95 + -0x10;
            if ((long)( param_5 + uVar95 ) < 0x10) {
               pauVar97 = (undefined1(*) [16])( (long)pauVar97 - lVar98 );
            }
            auVar107 = vmovdqu64_avx512vl(pauVar97[1]);
            in_ZMM0 = ZEXT1664(auVar107);
            auVar103 = vpand_avx(auVar103, auVar107);
            auVar103 = vpshufb_avx(auVar103, _SHUF_MASK);
            auVar103 = vpshufb_avx(auVar103, auVar106);
            auVar102 = vpxorq_avx512vl(auVar102, auVar103);
            if (lVar98 < 0) {
               *param_3 = *param_3 + param_5;
               uVar95 = param_5;
            } else {
               auVar39._8_8_ = 0;
               auVar39._0_8_ = auVar102._8_8_;
               auVar41._8_8_ = 0;
               auVar41._0_8_ = auVar105._8_8_;
               auVar107 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar39 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar107 = auVar107 ^ auVar41 << uVar96;
                  }
               }
               auVar6._8_8_ = 0;
               auVar6._0_8_ = auVar102._0_8_;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = auVar105._0_8_;
               auVar108 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar6 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar108 = auVar108 ^ auVar12 << uVar96;
                  }
               }
               auVar17._8_8_ = 0;
               auVar17._0_8_ = auVar102._8_8_;
               auVar23._8_8_ = 0;
               auVar23._0_8_ = auVar105._0_8_;
               auVar118 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar17 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar118 = auVar118 ^ auVar23 << uVar96;
                  }
               }
               auVar29._8_8_ = 0;
               auVar29._0_8_ = auVar102._0_8_;
               auVar35._8_8_ = 0;
               auVar35._0_8_ = auVar105._8_8_;
               auVar102 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar29 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar102 = auVar102 ^ auVar35 << uVar96;
                  }
               }
               auVar102 = vpxorq_avx512vl(auVar102, auVar118);
               auVar105 = vpsrldq_avx(auVar102, 8);
               auVar102 = vpslldq_avx(auVar102, 8);
               auVar105 = vpxorq_avx512vl(auVar107, auVar105);
               auVar107 = vpxorq_avx512vl(auVar102, auVar108);
               auVar108 = vmovdqu64_avx512vl(_POLY2);
               auVar18._8_8_ = 0;
               auVar18._0_8_ = auVar108._8_8_;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = auVar107._0_8_;
               auVar102 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar18 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar102 = auVar102 ^ auVar24 << uVar96;
                  }
               }
               auVar102 = vpslldq_avx(auVar102, 8);
               auVar107 = vpxorq_avx512vl(auVar107, auVar102);
               auVar7._8_8_ = 0;
               auVar7._0_8_ = auVar108._0_8_;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = auVar107._0_8_;
               auVar102 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar7 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar102 = auVar102 ^ auVar13 << uVar96;
                  }
               }
               auVar118 = vpsrldq_avx(auVar102, 4);
               auVar30._8_8_ = 0;
               auVar30._0_8_ = auVar108._0_8_;
               auVar36._8_8_ = 0;
               auVar36._0_8_ = auVar107._8_8_;
               auVar102 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar30 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar102 = auVar102 ^ auVar36 << uVar96;
                  }
               }
               auVar102 = vpslldq_avx(auVar102, 4);
               auVar102 = vpternlogq_avx512vl(auVar102, auVar105, auVar118, 0x96);
               *param_3 = 0;
               uVar95 = 0x10 - uVar95;
            }
            auVar105 = vmovdqu64_avx512vl(auVar102);
            param_2[4] = auVar105;
            auVar103 = vpshufb_avx(auVar103, _SHUF_MASK);
            auVar103 = vpshufb_avx(auVar103, auVar106);
            auVar103 = vmovdqu8_avx512vl(auVar103);
            *param_6 = auVar103;
         }
         auVar103 = vmovdqu64_avx512vl(*param_2);
         auVar117 = ZEXT1664(auVar103);
         param_5 = param_5 - uVar95;
         if (param_5 != 0) {
            if (0x100 < param_5) {
               auVar60._16_16_ = _UNK_001a9fd0;
               auVar60._0_16_ = _SHUF_MASK;
               auVar60._32_32_ = _UNK_001a9fe0;
               auVar113 = vmovdqa64_avx512f(auVar60);
               auVar114 = vmovdqa64_avx512f(_ddq_addbe_4444);
               auVar115 = vmovdqa64_avx512f(_ddq_addbe_1234);
               auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
               *(char*)( (long)param_3 + -0x6e ) = *(char*)( (long)param_3 + -0x6e ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               if (auVar103[0] < 0xf0) {
                  auVar117 = vpaddd_avx512f(auVar117, auVar115);
                  for (int i_1389 = 0; i_1389 < 2; i_1389++) {
                     auVar117 = vpaddd_avx512f(auVar117, auVar114);
                  }
                  auVar117 = vpaddd_avx512f(auVar117, auVar117);
               } else {
                  auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                  auVar114 = vmovdqa64_avx512f(_ddq_add_4444);
                  auVar87._1_63_ = _UNK_001aa081;
                  auVar87[0] = ddq_add_1234;
                  auVar117 = vpaddd_avx512f(auVar117, auVar87);
                  auVar115 = vpaddd_avx512f(auVar117, auVar114);
                  auVar116 = vpaddd_avx512f(auVar115, auVar114);
                  auVar114 = vpaddd_avx512f(auVar116, auVar114);
                  vpshufb_avx512bw(auVar117, auVar113);
                  vpshufb_avx512bw(auVar115, auVar113);
                  vpshufb_avx512bw(auVar116, auVar113);
                  auVar117 = vpshufb_avx512bw(auVar114, auVar113);
               }
               vshufi64x2_avx512f(auVar117, auVar117);
               *(int*)param_4[-8] = *(int*)param_4[-8] + 1;
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            uVar96 = (int)param_5 + 0xfU >> 4;
            if (uVar96 == 8) {
               auVar74._16_16_ = _UNK_001a9fd0;
               auVar74._0_16_ = _SHUF_MASK;
               auVar74._32_32_ = _UNK_001a9fe0;
               auVar113 = vmovdqa64_avx512f(auVar74);
               auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
               vextracti32x4_avx512f(auVar117, 3);
               auVar114 = vpshufb_avx512bw(in_ZMM0, auVar113);
               auVar117 = vpshufb_avx512bw(auVar117, auVar113);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
               auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar114, auVar113);
               vpxorq_avx512f(auVar117, auVar113);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (7 < uVar96) {
               if (uVar96 == 0xc) {
                  auVar68._16_16_ = _UNK_001a9fd0;
                  auVar68._0_16_ = _SHUF_MASK;
                  auVar68._32_32_ = _UNK_001a9fe0;
                  auVar113 = vmovdqa64_avx512f(auVar68);
                  auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                  auVar114 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar114, 3);
                  auVar115 = vpshufb_avx512bw(in_ZMM0, auVar113);
                  auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                  auVar113 = vpshufb_avx512bw(auVar114, auVar113);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                  auVar114 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar115, auVar114);
                  vpxorq_avx512f(auVar117, auVar114);
                  vpxorq_avx512f(auVar113, auVar114);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 < 0xc) {
                  if (uVar96 == 0xb) {
                     auVar67._16_16_ = _UNK_001a9fd0;
                     auVar67._0_16_ = _SHUF_MASK;
                     auVar67._32_32_ = _UNK_001a9fe0;
                     auVar113 = vmovdqa64_avx512f(auVar67);
                     auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                     *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                     uVar2 = in(uVar43);
                     *(undefined4*)*param_1 = uVar2;
                     ddq_add_1234 = ddq_add_1234 + '\x01';
                     auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                     auVar114 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                     vextracti32x4_avx512f(auVar114, 2);
                     auVar115 = vpshufb_avx512bw(in_ZMM0, auVar113);
                     auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                     auVar113 = vpshufb_avx512bw(auVar114, auVar113);
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                     auVar114 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                     vpxorq_avx512f(auVar115, auVar114);
                     vpxorq_avx512f(auVar117, auVar114);
                     vpxorq_avx512f(auVar113, auVar114);
                     vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                     /* WARNING: Bad instruction - Truncating control flow here */
                     halt_baddata();
                  }
                  if (uVar96 == 10) {
                     auVar66._16_16_ = _UNK_001a9fd0;
                     auVar66._0_16_ = _SHUF_MASK;
                     auVar66._32_32_ = _UNK_001a9fe0;
                     auVar113 = vmovdqa64_avx512f(auVar66);
                     auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                     *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                     uVar2 = in(uVar43);
                     *(undefined4*)*param_1 = uVar2;
                     ddq_add_1234 = ddq_add_1234 + '\x01';
                     auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                     auVar114 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                     vextracti32x4_avx512f(auVar114, 1);
                     auVar115 = vpshufb_avx512bw(in_ZMM0, auVar113);
                     auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                     auVar112 = vpshufb_avx512vl(auVar114._0_32_, auVar113._0_32_);
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                     vmovdqu8_avx512vl(*(undefined1(*) [32])( param_4[8] + uVar95 ));
                     auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                     vpxorq_avx512f(auVar115, auVar113);
                     vpxorq_avx512f(auVar117, auVar113);
                     vpxorq_avx512vl(auVar112, auVar113._0_32_);
                     vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                     /* WARNING: Bad instruction - Truncating control flow here */
                     halt_baddata();
                  }
                  auVar65._16_16_ = _UNK_001a9fd0;
                  auVar65._0_16_ = _SHUF_MASK;
                  auVar65._32_32_ = _UNK_001a9fe0;
                  auVar113 = vmovdqa64_avx512f(auVar65);
                  auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                  auVar114 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar114, 0);
                  auVar115 = vpshufb_avx512bw(in_ZMM0, auVar113);
                  auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                  auVar102 = vpshufb_avx512vl(auVar114._0_16_, auVar113._0_16_);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512vl(*(undefined1(*) [16])( param_4[8] + uVar95 ));
                  auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar115, auVar113);
                  vpxorq_avx512f(auVar117, auVar113);
                  vpxorq_avx512vl(auVar102, auVar113._0_16_);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 == 0x10) {
                  auVar64._16_16_ = _UNK_001a9fd0;
                  auVar64._0_16_ = _SHUF_MASK;
                  auVar64._32_32_ = _UNK_001a9fe0;
                  auVar113 = vmovdqa64_avx512f(auVar64);
                  auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                  auVar114 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  auVar115 = vpaddd_avx512f(auVar117, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar115, 3);
                  auVar116 = vpshufb_avx512bw(in_ZMM0, auVar113);
                  auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                  auVar114 = vpshufb_avx512bw(auVar114, auVar113);
                  auVar113 = vpshufb_avx512bw(auVar115, auVar113);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[0xc] + uVar95 ));
                  auVar115 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar116, auVar115);
                  vpxorq_avx512f(auVar117, auVar115);
                  vpxorq_avx512f(auVar114, auVar115);
                  vpxorq_avx512f(auVar113, auVar115);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 == 0xf) {
                  auVar63._16_16_ = _UNK_001a9fd0;
                  auVar63._0_16_ = _SHUF_MASK;
                  auVar63._32_32_ = _UNK_001a9fe0;
                  auVar113 = vmovdqa64_avx512f(auVar63);
                  auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                  auVar114 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  auVar115 = vpaddd_avx512f(auVar117, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar115, 2);
                  auVar116 = vpshufb_avx512bw(in_ZMM0, auVar113);
                  auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                  auVar114 = vpshufb_avx512bw(auVar114, auVar113);
                  auVar113 = vpshufb_avx512bw(auVar115, auVar113);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[0xc] + uVar95 ));
                  auVar115 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar116, auVar115);
                  vpxorq_avx512f(auVar117, auVar115);
                  vpxorq_avx512f(auVar114, auVar115);
                  vpxorq_avx512f(auVar113, auVar115);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 == 0xe) {
                  auVar62._16_16_ = _UNK_001a9fd0;
                  auVar62._0_16_ = _SHUF_MASK;
                  auVar62._32_32_ = _UNK_001a9fe0;
                  auVar113 = vmovdqa64_avx512f(auVar62);
                  auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                  auVar114 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  auVar115 = vpaddd_avx512f(auVar117, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar115, 1);
                  auVar116 = vpshufb_avx512bw(in_ZMM0, auVar113);
                  auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                  auVar114 = vpshufb_avx512bw(auVar114, auVar113);
                  auVar112 = vpshufb_avx512vl(auVar115._0_32_, auVar113._0_32_);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                  vmovdqu8_avx512vl(*(undefined1(*) [32])( param_4[0xc] + uVar95 ));
                  auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar116, auVar113);
                  vpxorq_avx512f(auVar117, auVar113);
                  vpxorq_avx512f(auVar114, auVar113);
                  vpxorq_avx512vl(auVar112, auVar113._0_32_);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               auVar61._16_16_ = _UNK_001a9fd0;
               auVar61._0_16_ = _SHUF_MASK;
               auVar61._32_32_ = _UNK_001a9fe0;
               auVar113 = vmovdqa64_avx512f(auVar61);
               auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
               auVar114 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
               auVar115 = vpaddd_avx512f(auVar117, _ddq_add_8888);
               vextracti32x4_avx512f(auVar115, 0);
               auVar116 = vpshufb_avx512bw(in_ZMM0, auVar113);
               auVar117 = vpshufb_avx512bw(auVar117, auVar113);
               auVar114 = vpshufb_avx512bw(auVar114, auVar113);
               auVar102 = vpshufb_avx512vl(auVar115._0_16_, auVar113._0_16_);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
               vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
               vmovdqu8_avx512vl(*(undefined1(*) [16])( param_4[0xc] + uVar95 ));
               auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar116, auVar113);
               vpxorq_avx512f(auVar117, auVar113);
               vpxorq_avx512f(auVar114, auVar113);
               vpxorq_avx512vl(auVar102, auVar113._0_16_);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar96 == 4) {
               auVar73._16_16_ = _UNK_001a9fd0;
               auVar73._0_16_ = _SHUF_MASK;
               auVar73._32_32_ = _UNK_001a9fe0;
               auVar113 = vmovdqa64_avx512f(auVar73);
               vshufi64x2_avx512f(auVar117, auVar117);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               vextracti32x4_avx512f(in_ZMM0, 3);
               auVar117 = vpshufb_avx512bw(in_ZMM0, auVar113);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar117, auVar113);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (3 < uVar96) {
               if (uVar96 == 7) {
                  auVar71._16_16_ = _UNK_001a9fd0;
                  auVar71._0_16_ = _SHUF_MASK;
                  auVar71._32_32_ = _UNK_001a9fe0;
                  auVar113 = vmovdqa64_avx512f(auVar71);
                  auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                  vextracti32x4_avx512f(auVar117, 2);
                  auVar114 = vpshufb_avx512bw(in_ZMM0, auVar113);
                  auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar114, auVar113);
                  vpxorq_avx512f(auVar117, auVar113);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 == 6) {
                  auVar70._16_16_ = _UNK_001a9fd0;
                  auVar70._0_16_ = _SHUF_MASK;
                  auVar70._32_32_ = _UNK_001a9fe0;
                  auVar113 = vmovdqa64_avx512f(auVar70);
                  auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                  vextracti32x4_avx512f(auVar117, 1);
                  auVar114 = vpshufb_avx512bw(in_ZMM0, auVar113);
                  auVar112 = vpshufb_avx512vl(auVar117._0_32_, auVar113._0_32_);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512vl(*(undefined1(*) [32])( param_4[4] + uVar95 ));
                  auVar117 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar114, auVar117);
                  vpxorq_avx512vl(auVar112, auVar117._0_32_);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               auVar69._16_16_ = _UNK_001a9fd0;
               auVar69._0_16_ = _SHUF_MASK;
               auVar69._32_32_ = _UNK_001a9fe0;
               auVar113 = vmovdqa64_avx512f(auVar69);
               auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
               vextracti32x4_avx512f(auVar117, 0);
               auVar114 = vpshufb_avx512bw(in_ZMM0, auVar113);
               auVar102 = vpshufb_avx512vl(auVar117._0_16_, auVar113._0_16_);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               vmovdqu8_avx512vl(*(undefined1(*) [16])( param_4[4] + uVar95 ));
               auVar117 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar114, auVar117);
               vpxorq_avx512vl(auVar102, auVar117._0_16_);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar96 == 3) {
               auVar72._16_16_ = _UNK_001a9fd0;
               auVar72._0_16_ = _SHUF_MASK;
               auVar72._32_32_ = _UNK_001a9fe0;
               auVar113 = vmovdqa64_avx512f(auVar72);
               vshufi64x2_avx512f(auVar117, auVar117);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               vextracti32x4_avx512f(in_ZMM0, 2);
               auVar117 = vpshufb_avx512bw(in_ZMM0, auVar113);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar117, auVar113);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar96 == 2) {
               auVar111._16_16_ = _UNK_001a9fd0;
               auVar111._0_16_ = _SHUF_MASK;
               auVar112 = vmovdqa64_avx512vl(auVar111);
               auVar111 = vshufi64x2_avx512vl(ZEXT1632(auVar103), ZEXT1632(auVar103));
               ddq_add_1234 = ddq_add_1234 + '\x01';
               vextracti32x4_avx512f(ZEXT3264(auVar111), 1);
               auVar112 = vpshufb_avx512vl(auVar111, auVar112);
               vmovdqu8_avx512vl(*(undefined1(*) [32])( CONCAT62(uVar93, CONCAT11(cVar92 + cVar88, uVar91)) + uVar95 ));
               auVar117 = vbroadcastf64x2_avx512dq(*param_1);
               vpxorq_avx512vl(auVar112, auVar117._0_32_);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 8 ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            auVar105 = vmovdqa64_avx512vl(_SHUF_MASK);
            auVar103 = vpaddd_avx(auVar103, _ONE);
            uVar94 = *(ulong*)( &byte64_len_to_mask_table + param_5 * 8 );
            auVar106 = vextracti32x4_avx512f(ZEXT1664(auVar103), 0);
            auVar103 = vpshufb_avx512vl(auVar103, auVar105);
            auVar107 = vmovdqu8_avx512vl(*(undefined1(*) [16])( *param_4 + uVar95 ));
            auVar100[1] = ( ( byte )(uVar94 >> 1) & 1 ) * auVar107[1];
            auVar100[0] = ( (byte)uVar94 & 1 ) * auVar107[0];
            for (int i_1387 = 0; i_1387 < 6; i_1387++) {
               auVar100[( i_1387 + 2 )] = ( ( byte )(uVar94 >> ( i_1387 + 2 )) & 1 ) * auVar107[( i_1387 + 2 )];
            }
            bVar3 = ( byte )(uVar94 >> 8);
            auVar100[8] = ( bVar3 & 1 ) * auVar107[8];
            for (int i_1385 = 0; i_1385 < 7; i_1385++) {
               auVar100[( i_1385 + 9 )] = ( ( byte )(uVar94 >> ( i_1385 + 9 )) & 1 ) * auVar107[( i_1385 + 9 )];
            }
            auVar117 = vbroadcastf64x2_avx512dq(*param_1);
            auVar103 = vpxorq_avx512vl(auVar103, auVar117._0_16_);
            auVar117 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 8 ));
            for (int i_1384 = 0; i_1384 < 5; i_1384++) {
               auVar103 = aesenc(auVar103, auVar117._0_16_);
               auVar117 = vbroadcastf64x2_avx512dq(param_1[( i_1384 + 1 )]);
               auVar103 = aesenc(auVar103, auVar117._0_16_);
               auVar117 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( param_1[( i_1384 + 1 )] + 8 ));
            }
            auVar103 = aesenc(auVar103, auVar117._0_16_);
            auVar117 = vbroadcastf64x2_avx512dq(param_1[6]);
            auVar103 = aesenclast(auVar103, auVar117._0_16_);
            auVar107 = vpxorq_avx512vl(auVar103, auVar100);
            auVar108 = vextracti32x4_avx512f(ZEXT1664(auVar107), 0);
            auVar103 = vmovdqu8_avx512vl(auVar107);
            *(undefined1(*) [16])( *param_6 + uVar95 ) = auVar103;
            auVar117 = vmovdqu8_avx512bw(ZEXT1664(auVar107));
            auVar101[1] = ( ( byte )(uVar94 >> 1) & 1 ) * auVar117[1];
            auVar101[0] = ( (byte)uVar94 & 1 ) * auVar117[0];
            for (int i_1388 = 0; i_1388 < 6; i_1388++) {
               auVar101[( i_1388 + 2 )] = ( ( byte )(uVar94 >> ( i_1388 + 2 )) & 1 ) * auVar117[( i_1388 + 2 )];
            }
            auVar101[8] = ( bVar3 & 1 ) * auVar117[8];
            for (int i_1386 = 0; i_1386 < 7; i_1386++) {
               auVar101[( i_1386 + 9 )] = ( ( byte )(uVar94 >> ( i_1386 + 9 )) & 1 ) * auVar117[( i_1386 + 9 )];
            }
            auVar103 = vpshufb_avx512vl(auVar101, auVar105);
            auVar105 = vextracti32x4_avx512f(ZEXT1664(auVar103), 0);
            if (0xf < (long)param_5) {
               *param_3 = 0;
               vpxorq_avx512f(ZEXT1664(auVar103), ZEXT1664(auVar102));
               vmovdqu64_avx512vl(param_2[0x15]);
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            *param_3 = param_5;
            auVar103 = vmovdqu64_avx512vl(auVar108);
            param_2[1] = auVar103;
            auVar103 = vpxorq_avx512vl(auVar102, auVar105);
            auVar102 = vmovdqu64_avx512vl(auVar106);
            *param_2 = auVar102;
            auVar102 = vmovdqu64_avx512vl(auVar103);
            param_2[4] = auVar102;
         }
      }
   } else if (iVar89 == 0xd) {
      if (param_5 != 0) {
         auVar102 = vmovdqu64_avx512vl(param_2[4]);
         uVar95 = *param_3;
         if (uVar95 != 0) {
            uVar94 = 0x10;
            if (param_5 < 0x10) {
               uVar94 = param_5;
            }
            uVar1 = *(ushort*)( &byte_len_to_mask_table + uVar94 * 2 );
            auVar103 = vmovdqu8_avx512vl(*param_4);
            auVar104[1] = ( ( byte )(uVar1 >> 1) & 1 ) * auVar103[1];
            auVar104[0] = ( (byte)uVar1 & 1 ) * auVar103[0];
            for (int i_1390 = 0; i_1390 < 6; i_1390++) {
               auVar104[( i_1390 + 2 )] = ( ( byte )(uVar1 >> ( i_1390 + 2 )) & 1 ) * auVar103[( i_1390 + 2 )];
            }
            bVar3 = ( byte )(uVar1 >> 8);
            auVar104[8] = ( bVar3 & 1 ) * auVar103[8];
            for (int i_1391 = 0; i_1391 < 6; i_1391++) {
               auVar104[( i_1391 + 9 )] = ( bVar3 >> ( i_1391 + 1 ) & 1 ) * auVar103[( i_1391 + 9 )];
            }
            auVar104[0xf] = -((char)bVar3 >> 7) * auVar103[0xf];
            auVar103 = vmovdqu64_avx512vl(param_2[1]);
            auVar105 = vmovdqu64_avx512vl(param_2[0x15]);
            pauVar97 = (undefined1(*) [16])( &SHIFT_MASK + uVar95 );
            auVar106 = vmovdqu64_avx512vl(*pauVar97);
            auVar103 = vpshufb_avx(auVar103, auVar106);
            auVar103 = vpxorq_avx512vl(auVar103, auVar104);
            lVar98 = param_5 + uVar95 + -0x10;
            if ((long)( param_5 + uVar95 ) < 0x10) {
               pauVar97 = (undefined1(*) [16])( (long)pauVar97 - lVar98 );
            }
            auVar107 = vmovdqu64_avx512vl(pauVar97[1]);
            in_ZMM0 = ZEXT1664(auVar107);
            auVar103 = vpand_avx(auVar103, auVar107);
            auVar103 = vpshufb_avx(auVar103, _SHUF_MASK);
            auVar103 = vpshufb_avx(auVar103, auVar106);
            auVar102 = vpxorq_avx512vl(auVar102, auVar103);
            if (lVar98 < 0) {
               *param_3 = *param_3 + param_5;
               uVar95 = param_5;
            } else {
               auVar40._8_8_ = 0;
               auVar40._0_8_ = auVar102._8_8_;
               auVar42._8_8_ = 0;
               auVar42._0_8_ = auVar105._8_8_;
               auVar107 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar40 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar107 = auVar107 ^ auVar42 << uVar96;
                  }
               }
               auVar8._8_8_ = 0;
               auVar8._0_8_ = auVar102._0_8_;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = auVar105._0_8_;
               auVar108 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar8 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar108 = auVar108 ^ auVar14 << uVar96;
                  }
               }
               auVar19._8_8_ = 0;
               auVar19._0_8_ = auVar102._8_8_;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = auVar105._0_8_;
               auVar118 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar19 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar118 = auVar118 ^ auVar25 << uVar96;
                  }
               }
               auVar31._8_8_ = 0;
               auVar31._0_8_ = auVar102._0_8_;
               auVar37._8_8_ = 0;
               auVar37._0_8_ = auVar105._8_8_;
               auVar102 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar31 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar102 = auVar102 ^ auVar37 << uVar96;
                  }
               }
               auVar102 = vpxorq_avx512vl(auVar102, auVar118);
               auVar105 = vpsrldq_avx(auVar102, 8);
               auVar102 = vpslldq_avx(auVar102, 8);
               auVar105 = vpxorq_avx512vl(auVar107, auVar105);
               auVar107 = vpxorq_avx512vl(auVar102, auVar108);
               auVar108 = vmovdqu64_avx512vl(_POLY2);
               auVar20._8_8_ = 0;
               auVar20._0_8_ = auVar108._8_8_;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = auVar107._0_8_;
               auVar102 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar20 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar102 = auVar102 ^ auVar26 << uVar96;
                  }
               }
               auVar102 = vpslldq_avx(auVar102, 8);
               auVar107 = vpxorq_avx512vl(auVar107, auVar102);
               auVar9._8_8_ = 0;
               auVar9._0_8_ = auVar108._0_8_;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = auVar107._0_8_;
               auVar102 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar9 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar102 = auVar102 ^ auVar15 << uVar96;
                  }
               }
               auVar118 = vpsrldq_avx(auVar102, 4);
               auVar32._8_8_ = 0;
               auVar32._0_8_ = auVar108._0_8_;
               auVar38._8_8_ = 0;
               auVar38._0_8_ = auVar107._8_8_;
               auVar102 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar32 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar102 = auVar102 ^ auVar38 << uVar96;
                  }
               }
               auVar102 = vpslldq_avx(auVar102, 4);
               auVar102 = vpternlogq_avx512vl(auVar102, auVar105, auVar118, 0x96);
               *param_3 = 0;
               uVar95 = 0x10 - uVar95;
            }
            auVar105 = vmovdqu64_avx512vl(auVar102);
            param_2[4] = auVar105;
            auVar103 = vpshufb_avx(auVar103, _SHUF_MASK);
            auVar103 = vpshufb_avx(auVar103, auVar106);
            auVar103 = vmovdqu8_avx512vl(auVar103);
            *param_6 = auVar103;
         }
         auVar103 = vmovdqu64_avx512vl(*param_2);
         auVar117 = ZEXT1664(auVar103);
         param_5 = param_5 - uVar95;
         if (param_5 != 0) {
            if (0x100 < param_5) {
               auVar45._16_16_ = _UNK_001a9fd0;
               auVar45._0_16_ = _SHUF_MASK;
               auVar45._32_32_ = _UNK_001a9fe0;
               auVar113 = vmovdqa64_avx512f(auVar45);
               auVar114 = vmovdqa64_avx512f(_ddq_addbe_4444);
               auVar115 = vmovdqa64_avx512f(_ddq_addbe_1234);
               auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
               *(char*)( (long)param_3 + -0x6e ) = *(char*)( (long)param_3 + -0x6e ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               if (auVar103[0] < 0xf0) {
                  auVar117 = vpaddd_avx512f(auVar117, auVar115);
                  for (int i_1397 = 0; i_1397 < 2; i_1397++) {
                     auVar117 = vpaddd_avx512f(auVar117, auVar114);
                  }
                  auVar117 = vpaddd_avx512f(auVar117, auVar117);
               } else {
                  auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                  auVar114 = vmovdqa64_avx512f(_ddq_add_4444);
                  auVar86._1_63_ = _UNK_001aa081;
                  auVar86[0] = ddq_add_1234;
                  auVar117 = vpaddd_avx512f(auVar117, auVar86);
                  auVar115 = vpaddd_avx512f(auVar117, auVar114);
                  auVar116 = vpaddd_avx512f(auVar115, auVar114);
                  auVar114 = vpaddd_avx512f(auVar116, auVar114);
                  vpshufb_avx512bw(auVar117, auVar113);
                  vpshufb_avx512bw(auVar115, auVar113);
                  vpshufb_avx512bw(auVar116, auVar113);
                  auVar117 = vpshufb_avx512bw(auVar114, auVar113);
               }
               vshufi64x2_avx512f(auVar117, auVar117);
               *(int*)param_4[-8] = *(int*)param_4[-8] + 1;
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            uVar96 = (int)param_5 + 0xfU >> 4;
            if (uVar96 == 8) {
               auVar59._16_16_ = _UNK_001a9fd0;
               auVar59._0_16_ = _SHUF_MASK;
               auVar59._32_32_ = _UNK_001a9fe0;
               auVar113 = vmovdqa64_avx512f(auVar59);
               auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
               vextracti32x4_avx512f(auVar117, 3);
               auVar114 = vpshufb_avx512bw(in_ZMM0, auVar113);
               auVar117 = vpshufb_avx512bw(auVar117, auVar113);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
               auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar114, auVar113);
               vpxorq_avx512f(auVar117, auVar113);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (7 < uVar96) {
               if (uVar96 == 0xc) {
                  auVar53._16_16_ = _UNK_001a9fd0;
                  auVar53._0_16_ = _SHUF_MASK;
                  auVar53._32_32_ = _UNK_001a9fe0;
                  auVar113 = vmovdqa64_avx512f(auVar53);
                  auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                  auVar114 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar114, 3);
                  auVar115 = vpshufb_avx512bw(in_ZMM0, auVar113);
                  auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                  auVar113 = vpshufb_avx512bw(auVar114, auVar113);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                  auVar114 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar115, auVar114);
                  vpxorq_avx512f(auVar117, auVar114);
                  vpxorq_avx512f(auVar113, auVar114);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 < 0xc) {
                  if (uVar96 == 0xb) {
                     auVar52._16_16_ = _UNK_001a9fd0;
                     auVar52._0_16_ = _SHUF_MASK;
                     auVar52._32_32_ = _UNK_001a9fe0;
                     auVar113 = vmovdqa64_avx512f(auVar52);
                     auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                     *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                     uVar2 = in(uVar43);
                     *(undefined4*)*param_1 = uVar2;
                     ddq_add_1234 = ddq_add_1234 + '\x01';
                     auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                     auVar114 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                     vextracti32x4_avx512f(auVar114, 2);
                     auVar115 = vpshufb_avx512bw(in_ZMM0, auVar113);
                     auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                     auVar113 = vpshufb_avx512bw(auVar114, auVar113);
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                     auVar114 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                     vpxorq_avx512f(auVar115, auVar114);
                     vpxorq_avx512f(auVar117, auVar114);
                     vpxorq_avx512f(auVar113, auVar114);
                     vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                     /* WARNING: Bad instruction - Truncating control flow here */
                     halt_baddata();
                  }
                  if (uVar96 == 10) {
                     auVar51._16_16_ = _UNK_001a9fd0;
                     auVar51._0_16_ = _SHUF_MASK;
                     auVar51._32_32_ = _UNK_001a9fe0;
                     auVar113 = vmovdqa64_avx512f(auVar51);
                     auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                     *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                     uVar2 = in(uVar43);
                     *(undefined4*)*param_1 = uVar2;
                     ddq_add_1234 = ddq_add_1234 + '\x01';
                     auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                     auVar114 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                     vextracti32x4_avx512f(auVar114, 1);
                     auVar115 = vpshufb_avx512bw(in_ZMM0, auVar113);
                     auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                     auVar112 = vpshufb_avx512vl(auVar114._0_32_, auVar113._0_32_);
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                     vmovdqu8_avx512vl(*(undefined1(*) [32])( param_4[8] + uVar95 ));
                     auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                     vpxorq_avx512f(auVar115, auVar113);
                     vpxorq_avx512f(auVar117, auVar113);
                     vpxorq_avx512vl(auVar112, auVar113._0_32_);
                     vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                     /* WARNING: Bad instruction - Truncating control flow here */
                     halt_baddata();
                  }
                  auVar50._16_16_ = _UNK_001a9fd0;
                  auVar50._0_16_ = _SHUF_MASK;
                  auVar50._32_32_ = _UNK_001a9fe0;
                  auVar113 = vmovdqa64_avx512f(auVar50);
                  auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                  auVar114 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar114, 0);
                  auVar115 = vpshufb_avx512bw(in_ZMM0, auVar113);
                  auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                  auVar102 = vpshufb_avx512vl(auVar114._0_16_, auVar113._0_16_);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512vl(*(undefined1(*) [16])( param_4[8] + uVar95 ));
                  auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar115, auVar113);
                  vpxorq_avx512f(auVar117, auVar113);
                  vpxorq_avx512vl(auVar102, auVar113._0_16_);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 == 0x10) {
                  auVar49._16_16_ = _UNK_001a9fd0;
                  auVar49._0_16_ = _SHUF_MASK;
                  auVar49._32_32_ = _UNK_001a9fe0;
                  auVar113 = vmovdqa64_avx512f(auVar49);
                  auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                  auVar114 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  auVar115 = vpaddd_avx512f(auVar117, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar115, 3);
                  auVar116 = vpshufb_avx512bw(in_ZMM0, auVar113);
                  auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                  auVar114 = vpshufb_avx512bw(auVar114, auVar113);
                  auVar113 = vpshufb_avx512bw(auVar115, auVar113);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[0xc] + uVar95 ));
                  auVar115 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar116, auVar115);
                  vpxorq_avx512f(auVar117, auVar115);
                  vpxorq_avx512f(auVar114, auVar115);
                  vpxorq_avx512f(auVar113, auVar115);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 == 0xf) {
                  auVar48._16_16_ = _UNK_001a9fd0;
                  auVar48._0_16_ = _SHUF_MASK;
                  auVar48._32_32_ = _UNK_001a9fe0;
                  auVar113 = vmovdqa64_avx512f(auVar48);
                  auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                  auVar114 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  auVar115 = vpaddd_avx512f(auVar117, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar115, 2);
                  auVar116 = vpshufb_avx512bw(in_ZMM0, auVar113);
                  auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                  auVar114 = vpshufb_avx512bw(auVar114, auVar113);
                  auVar113 = vpshufb_avx512bw(auVar115, auVar113);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[0xc] + uVar95 ));
                  auVar115 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar116, auVar115);
                  vpxorq_avx512f(auVar117, auVar115);
                  vpxorq_avx512f(auVar114, auVar115);
                  vpxorq_avx512f(auVar113, auVar115);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 == 0xe) {
                  auVar47._16_16_ = _UNK_001a9fd0;
                  auVar47._0_16_ = _SHUF_MASK;
                  auVar47._32_32_ = _UNK_001a9fe0;
                  auVar113 = vmovdqa64_avx512f(auVar47);
                  auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                  auVar114 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  auVar115 = vpaddd_avx512f(auVar117, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar115, 1);
                  auVar116 = vpshufb_avx512bw(in_ZMM0, auVar113);
                  auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                  auVar114 = vpshufb_avx512bw(auVar114, auVar113);
                  auVar112 = vpshufb_avx512vl(auVar115._0_32_, auVar113._0_32_);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                  vmovdqu8_avx512vl(*(undefined1(*) [32])( param_4[0xc] + uVar95 ));
                  auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar116, auVar113);
                  vpxorq_avx512f(auVar117, auVar113);
                  vpxorq_avx512f(auVar114, auVar113);
                  vpxorq_avx512vl(auVar112, auVar113._0_32_);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               auVar46._16_16_ = _UNK_001a9fd0;
               auVar46._0_16_ = _SHUF_MASK;
               auVar46._32_32_ = _UNK_001a9fe0;
               auVar113 = vmovdqa64_avx512f(auVar46);
               auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
               auVar114 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
               auVar115 = vpaddd_avx512f(auVar117, _ddq_add_8888);
               vextracti32x4_avx512f(auVar115, 0);
               auVar116 = vpshufb_avx512bw(in_ZMM0, auVar113);
               auVar117 = vpshufb_avx512bw(auVar117, auVar113);
               auVar114 = vpshufb_avx512bw(auVar114, auVar113);
               auVar102 = vpshufb_avx512vl(auVar115._0_16_, auVar113._0_16_);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
               vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
               vmovdqu8_avx512vl(*(undefined1(*) [16])( param_4[0xc] + uVar95 ));
               auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar116, auVar113);
               vpxorq_avx512f(auVar117, auVar113);
               vpxorq_avx512f(auVar114, auVar113);
               vpxorq_avx512vl(auVar102, auVar113._0_16_);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar96 == 4) {
               auVar58._16_16_ = _UNK_001a9fd0;
               auVar58._0_16_ = _SHUF_MASK;
               auVar58._32_32_ = _UNK_001a9fe0;
               auVar113 = vmovdqa64_avx512f(auVar58);
               vshufi64x2_avx512f(auVar117, auVar117);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               vextracti32x4_avx512f(in_ZMM0, 3);
               auVar117 = vpshufb_avx512bw(in_ZMM0, auVar113);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar117, auVar113);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (3 < uVar96) {
               if (uVar96 == 7) {
                  auVar56._16_16_ = _UNK_001a9fd0;
                  auVar56._0_16_ = _SHUF_MASK;
                  auVar56._32_32_ = _UNK_001a9fe0;
                  auVar113 = vmovdqa64_avx512f(auVar56);
                  auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                  vextracti32x4_avx512f(auVar117, 2);
                  auVar114 = vpshufb_avx512bw(in_ZMM0, auVar113);
                  auVar117 = vpshufb_avx512bw(auVar117, auVar113);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar114, auVar113);
                  vpxorq_avx512f(auVar117, auVar113);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 == 6) {
                  auVar55._16_16_ = _UNK_001a9fd0;
                  auVar55._0_16_ = _SHUF_MASK;
                  auVar55._32_32_ = _UNK_001a9fe0;
                  auVar113 = vmovdqa64_avx512f(auVar55);
                  auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
                  vextracti32x4_avx512f(auVar117, 1);
                  auVar114 = vpshufb_avx512bw(in_ZMM0, auVar113);
                  auVar112 = vpshufb_avx512vl(auVar117._0_32_, auVar113._0_32_);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512vl(*(undefined1(*) [32])( param_4[4] + uVar95 ));
                  auVar117 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar114, auVar117);
                  vpxorq_avx512vl(auVar112, auVar117._0_32_);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               auVar54._16_16_ = _UNK_001a9fd0;
               auVar54._0_16_ = _SHUF_MASK;
               auVar54._32_32_ = _UNK_001a9fe0;
               auVar113 = vmovdqa64_avx512f(auVar54);
               auVar117 = vshufi64x2_avx512f(auVar117, auVar117);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               auVar117 = vpaddd_avx512f(auVar117, _ddq_add_5678);
               vextracti32x4_avx512f(auVar117, 0);
               auVar114 = vpshufb_avx512bw(in_ZMM0, auVar113);
               auVar102 = vpshufb_avx512vl(auVar117._0_16_, auVar113._0_16_);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               vmovdqu8_avx512vl(*(undefined1(*) [16])( param_4[4] + uVar95 ));
               auVar117 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar114, auVar117);
               vpxorq_avx512vl(auVar102, auVar117._0_16_);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar96 == 3) {
               auVar57._16_16_ = _UNK_001a9fd0;
               auVar57._0_16_ = _SHUF_MASK;
               auVar57._32_32_ = _UNK_001a9fe0;
               auVar113 = vmovdqa64_avx512f(auVar57);
               vshufi64x2_avx512f(auVar117, auVar117);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               vextracti32x4_avx512f(in_ZMM0, 2);
               auVar117 = vpshufb_avx512bw(in_ZMM0, auVar113);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar117, auVar113);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar96 == 2) {
               auVar44._16_16_ = _UNK_001a9fd0;
               auVar44._0_16_ = _SHUF_MASK;
               auVar112 = vmovdqa64_avx512vl(auVar44);
               auVar111 = vshufi64x2_avx512vl(ZEXT1632(auVar103), ZEXT1632(auVar103));
               ddq_add_1234 = ddq_add_1234 + '\x01';
               vextracti32x4_avx512f(ZEXT3264(auVar111), 1);
               auVar112 = vpshufb_avx512vl(auVar111, auVar112);
               vmovdqu8_avx512vl(*(undefined1(*) [32])( CONCAT62(uVar93, CONCAT11(cVar92 + cVar88, uVar91)) + uVar95 ));
               auVar117 = vbroadcastf64x2_avx512dq(*param_1);
               vpxorq_avx512vl(auVar112, auVar117._0_32_);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 8 ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            auVar105 = vmovdqa64_avx512vl(_SHUF_MASK);
            auVar103 = vpaddd_avx(auVar103, _ONE);
            uVar94 = *(ulong*)( &byte64_len_to_mask_table + param_5 * 8 );
            auVar106 = vextracti32x4_avx512f(ZEXT1664(auVar103), 0);
            auVar103 = vpshufb_avx512vl(auVar103, auVar105);
            auVar107 = vmovdqu8_avx512vl(*(undefined1(*) [16])( *param_4 + uVar95 ));
            auVar109[1] = ( ( byte )(uVar94 >> 1) & 1 ) * auVar107[1];
            auVar109[0] = ( (byte)uVar94 & 1 ) * auVar107[0];
            for (int i_1395 = 0; i_1395 < 6; i_1395++) {
               auVar109[( i_1395 + 2 )] = ( ( byte )(uVar94 >> ( i_1395 + 2 )) & 1 ) * auVar107[( i_1395 + 2 )];
            }
            bVar3 = ( byte )(uVar94 >> 8);
            auVar109[8] = ( bVar3 & 1 ) * auVar107[8];
            for (int i_1393 = 0; i_1393 < 7; i_1393++) {
               auVar109[( i_1393 + 9 )] = ( ( byte )(uVar94 >> ( i_1393 + 9 )) & 1 ) * auVar107[( i_1393 + 9 )];
            }
            auVar117 = vbroadcastf64x2_avx512dq(*param_1);
            auVar103 = vpxorq_avx512vl(auVar103, auVar117._0_16_);
            auVar117 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 8 ));
            for (int i_1392 = 0; i_1392 < 6; i_1392++) {
               auVar103 = aesenc(auVar103, auVar117._0_16_);
               auVar117 = vbroadcastf64x2_avx512dq(param_1[( i_1392 + 1 )]);
               auVar103 = aesenc(auVar103, auVar117._0_16_);
               auVar117 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( param_1[( i_1392 + 1 )] + 8 ));
            }
            auVar103 = aesenc(auVar103, auVar117._0_16_);
            auVar117 = vbroadcastf64x2_avx512dq(param_1[7]);
            auVar103 = aesenclast(auVar103, auVar117._0_16_);
            auVar107 = vpxorq_avx512vl(auVar103, auVar109);
            auVar108 = vextracti32x4_avx512f(ZEXT1664(auVar107), 0);
            auVar103 = vmovdqu8_avx512vl(auVar107);
            *(undefined1(*) [16])( *param_6 + uVar95 ) = auVar103;
            auVar117 = vmovdqu8_avx512bw(ZEXT1664(auVar107));
            auVar110[1] = ( ( byte )(uVar94 >> 1) & 1 ) * auVar117[1];
            auVar110[0] = ( (byte)uVar94 & 1 ) * auVar117[0];
            for (int i_1396 = 0; i_1396 < 6; i_1396++) {
               auVar110[( i_1396 + 2 )] = ( ( byte )(uVar94 >> ( i_1396 + 2 )) & 1 ) * auVar117[( i_1396 + 2 )];
            }
            auVar110[8] = ( bVar3 & 1 ) * auVar117[8];
            for (int i_1394 = 0; i_1394 < 7; i_1394++) {
               auVar110[( i_1394 + 9 )] = ( ( byte )(uVar94 >> ( i_1394 + 9 )) & 1 ) * auVar117[( i_1394 + 9 )];
            }
            auVar103 = vpshufb_avx512vl(auVar110, auVar105);
            auVar105 = vextracti32x4_avx512f(ZEXT1664(auVar103), 0);
            if (0xf < (long)param_5) {
               *param_3 = 0;
               vpxorq_avx512f(ZEXT1664(auVar103), ZEXT1664(auVar102));
               vmovdqu64_avx512vl(param_2[0x15]);
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            *param_3 = param_5;
            auVar103 = vmovdqu64_avx512vl(auVar108);
            param_2[1] = auVar103;
            auVar103 = vpxorq_avx512vl(auVar102, auVar105);
            auVar102 = vmovdqu64_avx512vl(auVar106);
            *param_2 = auVar102;
            auVar102 = vmovdqu64_avx512vl(auVar103);
            param_2[4] = auVar102;
         }
      }
   } else {
      iVar89 = 0;
   }
   if (0x100 < param_5) {
      auVar117 = ZEXT1664((undefined1[16])0x0);
      for (int i_1398 = 0; i_1398 < 12; i_1398++) {
         vmovdqa64_avx512f(auVar117);
      }
   }
   return iVar89;
}/* WARNING: Control flow encountered bad instruction data *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int ossl_aes_gcm_decrypt_avx512(undefined1 (*param_1)[16], undefined1 (*param_2)[16], ulong *param_3, undefined1 (*param_4)[16], ulong param_5, undefined1 (*param_6)[16]) {
   ushort uVar1;
   undefined4 uVar2;
   byte bVar3;
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
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
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
   undefined1 auVar36[16];
   undefined1 auVar37[16];
   undefined1 auVar38[16];
   undefined1 auVar39[16];
   undefined1 auVar40[16];
   undefined1 auVar41[16];
   undefined1 auVar42[16];
   undefined2 uVar43;
   undefined1 auVar44[32];
   undefined1 auVar45[64];
   undefined1 auVar46[64];
   undefined1 auVar47[64];
   undefined1 auVar48[64];
   undefined1 auVar49[64];
   undefined1 auVar50[64];
   undefined1 auVar51[64];
   undefined1 auVar52[64];
   undefined1 auVar53[64];
   undefined1 auVar54[64];
   undefined1 auVar55[64];
   undefined1 auVar56[64];
   undefined1 auVar57[64];
   undefined1 auVar58[64];
   undefined1 auVar59[64];
   undefined1 auVar60[64];
   undefined1 auVar61[64];
   undefined1 auVar62[64];
   undefined1 auVar63[64];
   undefined1 auVar64[64];
   undefined1 auVar65[64];
   undefined1 auVar66[64];
   undefined1 auVar67[64];
   undefined1 auVar68[64];
   undefined1 auVar69[64];
   undefined1 auVar70[64];
   undefined1 auVar71[64];
   undefined1 auVar72[64];
   undefined1 auVar73[64];
   undefined1 auVar74[64];
   undefined1 auVar75[64];
   undefined1 auVar76[64];
   undefined1 auVar77[64];
   undefined1 auVar78[64];
   undefined1 auVar79[64];
   undefined1 auVar80[64];
   undefined1 auVar81[64];
   undefined1 auVar82[64];
   undefined1 auVar83[64];
   undefined1 auVar84[64];
   undefined1 auVar85[64];
   undefined1 auVar86[64];
   undefined1 auVar87[64];
   char cVar88;
   char cVar90;
   int iVar89;
   undefined1 uVar91;
   char cVar92;
   undefined6 uVar93;
   ulong uVar94;
   ulong uVar95;
   uint uVar96;
   undefined1(*pauVar97)[16];
   long lVar98;
   undefined1 auVar99[16];
   undefined1 auVar100[16];
   undefined1 auVar101[16];
   undefined1 auVar102[16];
   undefined1 auVar104[16];
   undefined1 auVar105[16];
   undefined1 auVar106[16];
   undefined1 auVar107[16];
   undefined1 auVar108[16];
   undefined1 auVar109[16];
   undefined1 auVar110[32];
   undefined1 auVar111[32];
   undefined1 auVar112[64];
   undefined1 auVar113[64];
   undefined1 auVar114[64];
   undefined1 auVar115[64];
   undefined1 in_ZMM0[64];
   undefined1 auVar116[64];
   undefined1 auVar103[16];
   uVar93 = ( undefined6 )((ulong)param_4 >> 0x10);
   cVar92 = (char)( (ulong)param_4 >> 8 );
   uVar91 = SUB81(param_4, 0);
   iVar89 = *(int*)param_1[0xf];
   cVar88 = (char)iVar89;
   cVar90 = (char)( (uint)iVar89 >> 8 );
   uVar43 = SUB82(param_3, 0);
   if (iVar89 == 9) {
      if (param_5 != 0) {
         auVar102 = vmovdqu64_avx512vl(param_2[4]);
         uVar95 = *param_3;
         if (uVar95 != 0) {
            uVar94 = 0x10;
            if (param_5 < 0x10) {
               uVar94 = param_5;
            }
            uVar1 = *(ushort*)( &byte_len_to_mask_table + uVar94 * 2 );
            auVar103 = vmovdqu8_avx512vl(*param_4);
            auVar105[1] = ( ( byte )(uVar1 >> 1) & 1 ) * auVar103[1];
            auVar105[0] = ( (byte)uVar1 & 1 ) * auVar103[0];
            for (int i_1399 = 0; i_1399 < 6; i_1399++) {
               auVar105[( i_1399 + 2 )] = ( ( byte )(uVar1 >> ( i_1399 + 2 )) & 1 ) * auVar103[( i_1399 + 2 )];
            }
            bVar3 = ( byte )(uVar1 >> 8);
            auVar105[8] = ( bVar3 & 1 ) * auVar103[8];
            for (int i_1400 = 0; i_1400 < 6; i_1400++) {
               auVar105[( i_1400 + 9 )] = ( bVar3 >> ( i_1400 + 1 ) & 1 ) * auVar103[( i_1400 + 9 )];
            }
            auVar105[0xf] = -((char)bVar3 >> 7) * auVar103[0xf];
            auVar103 = vmovdqu64_avx512vl(param_2[1]);
            auVar106 = vmovdqu64_avx512vl(param_2[0x15]);
            pauVar97 = (undefined1(*) [16])( &SHIFT_MASK + uVar95 );
            auVar107 = vmovdqu64_avx512vl(*pauVar97);
            auVar103 = vpshufb_avx(auVar103, auVar107);
            auVar108 = vmovdqa64_avx512vl(auVar105);
            auVar103 = vpxorq_avx512vl(auVar103, auVar105);
            lVar98 = param_5 + uVar95 + -0x10;
            if ((long)( param_5 + uVar95 ) < 0x10) {
               pauVar97 = (undefined1(*) [16])( (long)pauVar97 - lVar98 );
            }
            auVar105 = vmovdqu64_avx512vl(pauVar97[1]);
            in_ZMM0 = ZEXT1664(auVar105);
            auVar103 = vpand_avx(auVar103, auVar105);
            auVar105 = vpand_avx(auVar108, auVar105);
            auVar105 = vpshufb_avx(auVar105, _SHUF_MASK);
            auVar105 = vpshufb_avx(auVar105, auVar107);
            auVar102 = vpxorq_avx512vl(auVar102, auVar105);
            if (lVar98 < 0) {
               *param_3 = *param_3 + param_5;
               uVar95 = param_5;
            } else {
               auVar107._8_8_ = 0;
               auVar107._0_8_ = auVar102._8_8_;
               auVar108._8_8_ = 0;
               auVar108._0_8_ = auVar106._8_8_;
               auVar105 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar107 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar105 = auVar105 ^ auVar108 << uVar96;
                  }
               }
               auVar4._8_8_ = 0;
               auVar4._0_8_ = auVar102._0_8_;
               auVar10._8_8_ = 0;
               auVar10._0_8_ = auVar106._0_8_;
               auVar107 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar4 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar107 = auVar107 ^ auVar10 << uVar96;
                  }
               }
               auVar16._8_8_ = 0;
               auVar16._0_8_ = auVar102._8_8_;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = auVar106._0_8_;
               auVar108 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar16 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar108 = auVar108 ^ auVar21 << uVar96;
                  }
               }
               auVar27._8_8_ = 0;
               auVar27._0_8_ = auVar102._0_8_;
               auVar33._8_8_ = 0;
               auVar33._0_8_ = auVar106._8_8_;
               auVar102 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar27 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar102 = auVar102 ^ auVar33 << uVar96;
                  }
               }
               auVar102 = vpxorq_avx512vl(auVar102, auVar108);
               auVar106 = vpsrldq_avx(auVar102, 8);
               auVar102 = vpslldq_avx(auVar102, 8);
               auVar105 = vpxorq_avx512vl(auVar105, auVar106);
               auVar107 = vpxorq_avx512vl(auVar102, auVar107);
               auVar108 = vmovdqu64_avx512vl(_POLY2);
               auVar106._8_8_ = 0;
               auVar106._0_8_ = auVar108._8_8_;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = auVar107._0_8_;
               auVar102 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar106 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar102 = auVar102 ^ auVar22 << uVar96;
                  }
               }
               auVar102 = vpslldq_avx(auVar102, 8);
               auVar106 = vpxorq_avx512vl(auVar107, auVar102);
               auVar5._8_8_ = 0;
               auVar5._0_8_ = auVar108._0_8_;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = auVar106._0_8_;
               auVar102 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar5 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar102 = auVar102 ^ auVar11 << uVar96;
                  }
               }
               auVar107 = vpsrldq_avx(auVar102, 4);
               auVar28._8_8_ = 0;
               auVar28._0_8_ = auVar108._0_8_;
               auVar34._8_8_ = 0;
               auVar34._0_8_ = auVar106._8_8_;
               auVar102 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar28 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar102 = auVar102 ^ auVar34 << uVar96;
                  }
               }
               auVar102 = vpslldq_avx(auVar102, 4);
               auVar102 = vpternlogq_avx512vl(auVar102, auVar105, auVar107, 0x96);
               *param_3 = 0;
               uVar95 = 0x10 - uVar95;
            }
            auVar105 = vmovdqu64_avx512vl(auVar102);
            param_2[4] = auVar105;
            auVar103 = vmovdqu8_avx512vl(auVar103);
            *param_6 = auVar103;
         }
         auVar103 = vmovdqu64_avx512vl(*param_2);
         auVar116 = ZEXT1664(auVar103);
         param_5 = param_5 - uVar95;
         if (param_5 != 0) {
            if (0x100 < param_5) {
               auVar112._16_16_ = _UNK_001a9fd0;
               auVar112._0_16_ = _SHUF_MASK;
               auVar112._32_32_ = _UNK_001a9fe0;
               auVar112 = vmovdqa64_avx512f(auVar112);
               auVar113 = vmovdqa64_avx512f(_ddq_addbe_4444);
               auVar114 = vmovdqa64_avx512f(_ddq_addbe_1234);
               auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
               *(char*)( (long)param_3 + -0x6e ) = *(char*)( (long)param_3 + -0x6e ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               if (auVar103[0] < 0xf0) {
                  auVar116 = vpaddd_avx512f(auVar116, auVar114);
                  for (int i_1403 = 0; i_1403 < 2; i_1403++) {
                     auVar116 = vpaddd_avx512f(auVar116, auVar113);
                  }
                  auVar116 = vpaddd_avx512f(auVar116, auVar116);
               } else {
                  auVar113 = vpshufb_avx512bw(auVar116, auVar112);
                  auVar114 = vmovdqa64_avx512f(_ddq_add_4444);
                  auVar116._1_63_ = _UNK_001aa081;
                  auVar116[0] = ddq_add_1234;
                  auVar116 = vpaddd_avx512f(auVar113, auVar116);
                  auVar113 = vpaddd_avx512f(auVar116, auVar114);
                  auVar115 = vpaddd_avx512f(auVar113, auVar114);
                  auVar114 = vpaddd_avx512f(auVar115, auVar114);
                  vpshufb_avx512bw(auVar116, auVar112);
                  vpshufb_avx512bw(auVar113, auVar112);
                  vpshufb_avx512bw(auVar115, auVar112);
                  auVar116 = vpshufb_avx512bw(auVar114, auVar112);
               }
               vshufi64x2_avx512f(auVar116, auVar116);
               *(int*)param_4[-8] = *(int*)param_4[-8] + 1;
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            uVar96 = (int)param_5 + 0xfU >> 4;
            if (uVar96 == 8) {
               auVar113._16_16_ = _UNK_001a9fd0;
               auVar113._0_16_ = _SHUF_MASK;
               auVar113._32_32_ = _UNK_001a9fe0;
               auVar112 = vmovdqa64_avx512f(auVar113);
               auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
               vextracti32x4_avx512f(auVar116, 3);
               auVar113 = vpshufb_avx512bw(in_ZMM0, auVar112);
               auVar116 = vpshufb_avx512bw(auVar116, auVar112);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
               auVar112 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar113, auVar112);
               vpxorq_avx512f(auVar116, auVar112);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (7 < uVar96) {
               if (uVar96 == 0xc) {
                  auVar114._16_16_ = _UNK_001a9fd0;
                  auVar114._0_16_ = _SHUF_MASK;
                  auVar114._32_32_ = _UNK_001a9fe0;
                  auVar112 = vmovdqa64_avx512f(auVar114);
                  auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                  auVar113 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar113, 3);
                  auVar114 = vpshufb_avx512bw(in_ZMM0, auVar112);
                  auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                  auVar112 = vpshufb_avx512bw(auVar113, auVar112);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                  auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar114, auVar113);
                  vpxorq_avx512f(auVar116, auVar113);
                  vpxorq_avx512f(auVar112, auVar113);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 < 0xc) {
                  if (uVar96 == 0xb) {
                     auVar115._16_16_ = _UNK_001a9fd0;
                     auVar115._0_16_ = _SHUF_MASK;
                     auVar115._32_32_ = _UNK_001a9fe0;
                     auVar112 = vmovdqa64_avx512f(auVar115);
                     auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                     *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                     uVar2 = in(uVar43);
                     *(undefined4*)*param_1 = uVar2;
                     ddq_add_1234 = ddq_add_1234 + '\x01';
                     auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                     auVar113 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                     vextracti32x4_avx512f(auVar113, 2);
                     auVar114 = vpshufb_avx512bw(in_ZMM0, auVar112);
                     auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                     auVar112 = vpshufb_avx512bw(auVar113, auVar112);
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                     auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                     vpxorq_avx512f(auVar114, auVar113);
                     vpxorq_avx512f(auVar116, auVar113);
                     vpxorq_avx512f(auVar112, auVar113);
                     vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                     /* WARNING: Bad instruction - Truncating control flow here */
                     halt_baddata();
                  }
                  if (uVar96 == 10) {
                     auVar80._16_16_ = _UNK_001a9fd0;
                     auVar80._0_16_ = _SHUF_MASK;
                     auVar80._32_32_ = _UNK_001a9fe0;
                     auVar112 = vmovdqa64_avx512f(auVar80);
                     auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                     *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                     uVar2 = in(uVar43);
                     *(undefined4*)*param_1 = uVar2;
                     ddq_add_1234 = ddq_add_1234 + '\x01';
                     auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                     auVar113 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                     vextracti32x4_avx512f(auVar113, 1);
                     auVar114 = vpshufb_avx512bw(in_ZMM0, auVar112);
                     auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                     auVar111 = vpshufb_avx512vl(auVar113._0_32_, auVar112._0_32_);
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                     vmovdqu8_avx512vl(*(undefined1(*) [32])( param_4[8] + uVar95 ));
                     auVar112 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                     vpxorq_avx512f(auVar114, auVar112);
                     vpxorq_avx512f(auVar116, auVar112);
                     vpxorq_avx512vl(auVar111, auVar112._0_32_);
                     vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                     /* WARNING: Bad instruction - Truncating control flow here */
                     halt_baddata();
                  }
                  auVar79._16_16_ = _UNK_001a9fd0;
                  auVar79._0_16_ = _SHUF_MASK;
                  auVar79._32_32_ = _UNK_001a9fe0;
                  auVar112 = vmovdqa64_avx512f(auVar79);
                  auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                  auVar113 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar113, 0);
                  auVar114 = vpshufb_avx512bw(in_ZMM0, auVar112);
                  auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                  auVar102 = vpshufb_avx512vl(auVar113._0_16_, auVar112._0_16_);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512vl(*(undefined1(*) [16])( param_4[8] + uVar95 ));
                  auVar112 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar114, auVar112);
                  vpxorq_avx512f(auVar116, auVar112);
                  vpxorq_avx512vl(auVar102, auVar112._0_16_);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 == 0x10) {
                  auVar78._16_16_ = _UNK_001a9fd0;
                  auVar78._0_16_ = _SHUF_MASK;
                  auVar78._32_32_ = _UNK_001a9fe0;
                  auVar112 = vmovdqa64_avx512f(auVar78);
                  auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                  auVar113 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  auVar114 = vpaddd_avx512f(auVar116, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar114, 3);
                  auVar115 = vpshufb_avx512bw(in_ZMM0, auVar112);
                  auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                  auVar113 = vpshufb_avx512bw(auVar113, auVar112);
                  auVar112 = vpshufb_avx512bw(auVar114, auVar112);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[0xc] + uVar95 ));
                  auVar114 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar115, auVar114);
                  vpxorq_avx512f(auVar116, auVar114);
                  vpxorq_avx512f(auVar113, auVar114);
                  vpxorq_avx512f(auVar112, auVar114);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 == 0xf) {
                  auVar77._16_16_ = _UNK_001a9fd0;
                  auVar77._0_16_ = _SHUF_MASK;
                  auVar77._32_32_ = _UNK_001a9fe0;
                  auVar112 = vmovdqa64_avx512f(auVar77);
                  auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                  auVar113 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  auVar114 = vpaddd_avx512f(auVar116, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar114, 2);
                  auVar115 = vpshufb_avx512bw(in_ZMM0, auVar112);
                  auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                  auVar113 = vpshufb_avx512bw(auVar113, auVar112);
                  auVar112 = vpshufb_avx512bw(auVar114, auVar112);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[0xc] + uVar95 ));
                  auVar114 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar115, auVar114);
                  vpxorq_avx512f(auVar116, auVar114);
                  vpxorq_avx512f(auVar113, auVar114);
                  vpxorq_avx512f(auVar112, auVar114);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 == 0xe) {
                  auVar76._16_16_ = _UNK_001a9fd0;
                  auVar76._0_16_ = _SHUF_MASK;
                  auVar76._32_32_ = _UNK_001a9fe0;
                  auVar112 = vmovdqa64_avx512f(auVar76);
                  auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                  auVar113 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  auVar114 = vpaddd_avx512f(auVar116, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar114, 1);
                  auVar115 = vpshufb_avx512bw(in_ZMM0, auVar112);
                  auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                  auVar113 = vpshufb_avx512bw(auVar113, auVar112);
                  auVar111 = vpshufb_avx512vl(auVar114._0_32_, auVar112._0_32_);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                  vmovdqu8_avx512vl(*(undefined1(*) [32])( param_4[0xc] + uVar95 ));
                  auVar112 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar115, auVar112);
                  vpxorq_avx512f(auVar116, auVar112);
                  vpxorq_avx512f(auVar113, auVar112);
                  vpxorq_avx512vl(auVar111, auVar112._0_32_);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               auVar75._16_16_ = _UNK_001a9fd0;
               auVar75._0_16_ = _SHUF_MASK;
               auVar75._32_32_ = _UNK_001a9fe0;
               auVar112 = vmovdqa64_avx512f(auVar75);
               auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
               auVar113 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
               auVar114 = vpaddd_avx512f(auVar116, _ddq_add_8888);
               vextracti32x4_avx512f(auVar114, 0);
               auVar115 = vpshufb_avx512bw(in_ZMM0, auVar112);
               auVar116 = vpshufb_avx512bw(auVar116, auVar112);
               auVar113 = vpshufb_avx512bw(auVar113, auVar112);
               auVar102 = vpshufb_avx512vl(auVar114._0_16_, auVar112._0_16_);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
               vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
               vmovdqu8_avx512vl(*(undefined1(*) [16])( param_4[0xc] + uVar95 ));
               auVar112 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar115, auVar112);
               vpxorq_avx512f(auVar116, auVar112);
               vpxorq_avx512f(auVar113, auVar112);
               vpxorq_avx512vl(auVar102, auVar112._0_16_);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar96 == 4) {
               auVar85._16_16_ = _UNK_001a9fd0;
               auVar85._0_16_ = _SHUF_MASK;
               auVar85._32_32_ = _UNK_001a9fe0;
               auVar112 = vmovdqa64_avx512f(auVar85);
               vshufi64x2_avx512f(auVar116, auVar116);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               vextracti32x4_avx512f(in_ZMM0, 3);
               auVar116 = vpshufb_avx512bw(in_ZMM0, auVar112);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               auVar112 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar116, auVar112);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (3 < uVar96) {
               if (uVar96 == 7) {
                  auVar83._16_16_ = _UNK_001a9fd0;
                  auVar83._0_16_ = _SHUF_MASK;
                  auVar83._32_32_ = _UNK_001a9fe0;
                  auVar112 = vmovdqa64_avx512f(auVar83);
                  auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                  vextracti32x4_avx512f(auVar116, 2);
                  auVar113 = vpshufb_avx512bw(in_ZMM0, auVar112);
                  auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  auVar112 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar113, auVar112);
                  vpxorq_avx512f(auVar116, auVar112);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 == 6) {
                  auVar82._16_16_ = _UNK_001a9fd0;
                  auVar82._0_16_ = _SHUF_MASK;
                  auVar82._32_32_ = _UNK_001a9fe0;
                  auVar112 = vmovdqa64_avx512f(auVar82);
                  auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                  vextracti32x4_avx512f(auVar116, 1);
                  auVar113 = vpshufb_avx512bw(in_ZMM0, auVar112);
                  auVar111 = vpshufb_avx512vl(auVar116._0_32_, auVar112._0_32_);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512vl(*(undefined1(*) [32])( param_4[4] + uVar95 ));
                  auVar116 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar113, auVar116);
                  vpxorq_avx512vl(auVar111, auVar116._0_32_);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               auVar81._16_16_ = _UNK_001a9fd0;
               auVar81._0_16_ = _SHUF_MASK;
               auVar81._32_32_ = _UNK_001a9fe0;
               auVar112 = vmovdqa64_avx512f(auVar81);
               auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
               vextracti32x4_avx512f(auVar116, 0);
               auVar113 = vpshufb_avx512bw(in_ZMM0, auVar112);
               auVar102 = vpshufb_avx512vl(auVar116._0_16_, auVar112._0_16_);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               vmovdqu8_avx512vl(*(undefined1(*) [16])( param_4[4] + uVar95 ));
               auVar116 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar113, auVar116);
               vpxorq_avx512vl(auVar102, auVar116._0_16_);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar96 == 3) {
               auVar84._16_16_ = _UNK_001a9fd0;
               auVar84._0_16_ = _SHUF_MASK;
               auVar84._32_32_ = _UNK_001a9fe0;
               auVar112 = vmovdqa64_avx512f(auVar84);
               vshufi64x2_avx512f(auVar116, auVar116);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               vextracti32x4_avx512f(in_ZMM0, 2);
               auVar116 = vpshufb_avx512bw(in_ZMM0, auVar112);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               auVar112 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar116, auVar112);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar96 == 2) {
               auVar111._16_16_ = _UNK_001a9fd0;
               auVar111._0_16_ = _SHUF_MASK;
               auVar111 = vmovdqa64_avx512vl(auVar111);
               auVar110 = vshufi64x2_avx512vl(ZEXT1632(auVar103), ZEXT1632(auVar103));
               ddq_add_1234 = ddq_add_1234 + '\x01';
               vextracti32x4_avx512f(ZEXT3264(auVar110), 1);
               auVar111 = vpshufb_avx512vl(auVar110, auVar111);
               vmovdqu8_avx512vl(*(undefined1(*) [32])( CONCAT62(uVar93, CONCAT11(cVar92 + cVar88, uVar91)) + uVar95 ));
               auVar116 = vbroadcastf64x2_avx512dq(*param_1);
               vpxorq_avx512vl(auVar111, auVar116._0_32_);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 8 ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            auVar105 = vmovdqa64_avx512vl(_SHUF_MASK);
            auVar103 = vpaddd_avx(auVar103, _ONE);
            uVar94 = *(ulong*)( &byte64_len_to_mask_table + param_5 * 8 );
            auVar106 = vextracti32x4_avx512f(ZEXT1664(auVar103), 0);
            auVar103 = vpshufb_avx512vl(auVar103, auVar105);
            auVar107 = vmovdqu8_avx512vl(*(undefined1(*) [16])( *param_4 + uVar95 ));
            auVar99[1] = ( ( byte )(uVar94 >> 1) & 1 ) * auVar107[1];
            auVar99[0] = ( (byte)uVar94 & 1 ) * auVar107[0];
            for (int i_1401 = 0; i_1401 < 14; i_1401++) {
               auVar99[( i_1401 + 2 )] = ( ( byte )(uVar94 >> ( i_1401 + 2 )) & 1 ) * auVar107[( i_1401 + 2 )];
            }
            auVar116 = vbroadcastf64x2_avx512dq(*param_1);
            auVar103 = vpxorq_avx512vl(auVar103, auVar116._0_16_);
            auVar116 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 8 ));
            for (int i_1402 = 0; i_1402 < 4; i_1402++) {
               auVar103 = aesenc(auVar103, auVar116._0_16_);
               auVar116 = vbroadcastf64x2_avx512dq(param_1[( i_1402 + 1 )]);
               auVar103 = aesenc(auVar103, auVar116._0_16_);
               auVar116 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( param_1[( i_1402 + 1 )] + 8 ));
            }
            auVar103 = aesenc(auVar103, auVar116._0_16_);
            auVar116 = vbroadcastf64x2_avx512dq(param_1[5]);
            auVar103 = aesenclast(auVar103, auVar116._0_16_);
            auVar107 = vpxorq_avx512vl(auVar103, auVar99);
            auVar108 = vextracti32x4_avx512f(ZEXT1664(auVar107), 0);
            auVar103 = vmovdqu8_avx512vl(auVar107);
            *(undefined1(*) [16])( *param_6 + uVar95 ) = auVar103;
            vmovdqu8_avx512bw(ZEXT1664(auVar107));
            auVar103 = vpshufb_avx512vl(auVar99, auVar105);
            auVar105 = vextracti32x4_avx512f(ZEXT1664(auVar103), 0);
            if (0xf < (long)param_5) {
               *param_3 = 0;
               vpxorq_avx512f(ZEXT1664(auVar103), ZEXT1664(auVar102));
               vmovdqu64_avx512vl(param_2[0x15]);
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            *param_3 = param_5;
            auVar103 = vmovdqu64_avx512vl(auVar108);
            param_2[1] = auVar103;
            auVar103 = vpxorq_avx512vl(auVar102, auVar105);
            auVar102 = vmovdqu64_avx512vl(auVar106);
            *param_2 = auVar102;
            auVar102 = vmovdqu64_avx512vl(auVar103);
            param_2[4] = auVar102;
         }
      }
   } else if (iVar89 == 0xb) {
      if (param_5 != 0) {
         auVar102 = vmovdqu64_avx512vl(param_2[4]);
         uVar95 = *param_3;
         if (uVar95 != 0) {
            uVar94 = 0x10;
            if (param_5 < 0x10) {
               uVar94 = param_5;
            }
            uVar1 = *(ushort*)( &byte_len_to_mask_table + uVar94 * 2 );
            auVar103 = vmovdqu8_avx512vl(*param_4);
            auVar100[1] = ( ( byte )(uVar1 >> 1) & 1 ) * auVar103[1];
            auVar100[0] = ( (byte)uVar1 & 1 ) * auVar103[0];
            for (int i_1404 = 0; i_1404 < 6; i_1404++) {
               auVar100[( i_1404 + 2 )] = ( ( byte )(uVar1 >> ( i_1404 + 2 )) & 1 ) * auVar103[( i_1404 + 2 )];
            }
            bVar3 = ( byte )(uVar1 >> 8);
            auVar100[8] = ( bVar3 & 1 ) * auVar103[8];
            for (int i_1405 = 0; i_1405 < 6; i_1405++) {
               auVar100[( i_1405 + 9 )] = ( bVar3 >> ( i_1405 + 1 ) & 1 ) * auVar103[( i_1405 + 9 )];
            }
            auVar100[0xf] = -((char)bVar3 >> 7) * auVar103[0xf];
            auVar103 = vmovdqu64_avx512vl(param_2[1]);
            auVar105 = vmovdqu64_avx512vl(param_2[0x15]);
            pauVar97 = (undefined1(*) [16])( &SHIFT_MASK + uVar95 );
            auVar106 = vmovdqu64_avx512vl(*pauVar97);
            auVar103 = vpshufb_avx(auVar103, auVar106);
            auVar107 = vmovdqa64_avx512vl(auVar100);
            auVar103 = vpxorq_avx512vl(auVar103, auVar100);
            lVar98 = param_5 + uVar95 + -0x10;
            if ((long)( param_5 + uVar95 ) < 0x10) {
               pauVar97 = (undefined1(*) [16])( (long)pauVar97 - lVar98 );
            }
            auVar108 = vmovdqu64_avx512vl(pauVar97[1]);
            in_ZMM0 = ZEXT1664(auVar108);
            auVar103 = vpand_avx(auVar103, auVar108);
            auVar107 = vpand_avx(auVar107, auVar108);
            auVar107 = vpshufb_avx(auVar107, _SHUF_MASK);
            auVar106 = vpshufb_avx(auVar107, auVar106);
            auVar102 = vpxorq_avx512vl(auVar102, auVar106);
            if (lVar98 < 0) {
               *param_3 = *param_3 + param_5;
               uVar95 = param_5;
            } else {
               auVar39._8_8_ = 0;
               auVar39._0_8_ = auVar102._8_8_;
               auVar41._8_8_ = 0;
               auVar41._0_8_ = auVar105._8_8_;
               auVar106 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar39 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar106 = auVar106 ^ auVar41 << uVar96;
                  }
               }
               auVar6._8_8_ = 0;
               auVar6._0_8_ = auVar102._0_8_;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = auVar105._0_8_;
               auVar107 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar6 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar107 = auVar107 ^ auVar12 << uVar96;
                  }
               }
               auVar17._8_8_ = 0;
               auVar17._0_8_ = auVar102._8_8_;
               auVar23._8_8_ = 0;
               auVar23._0_8_ = auVar105._0_8_;
               auVar108 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar17 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar108 = auVar108 ^ auVar23 << uVar96;
                  }
               }
               auVar29._8_8_ = 0;
               auVar29._0_8_ = auVar102._0_8_;
               auVar35._8_8_ = 0;
               auVar35._0_8_ = auVar105._8_8_;
               auVar102 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar29 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar102 = auVar102 ^ auVar35 << uVar96;
                  }
               }
               auVar102 = vpxorq_avx512vl(auVar102, auVar108);
               auVar105 = vpsrldq_avx(auVar102, 8);
               auVar102 = vpslldq_avx(auVar102, 8);
               auVar105 = vpxorq_avx512vl(auVar106, auVar105);
               auVar106 = vpxorq_avx512vl(auVar102, auVar107);
               auVar107 = vmovdqu64_avx512vl(_POLY2);
               auVar18._8_8_ = 0;
               auVar18._0_8_ = auVar107._8_8_;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = auVar106._0_8_;
               auVar102 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar18 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar102 = auVar102 ^ auVar24 << uVar96;
                  }
               }
               auVar102 = vpslldq_avx(auVar102, 8);
               auVar106 = vpxorq_avx512vl(auVar106, auVar102);
               auVar7._8_8_ = 0;
               auVar7._0_8_ = auVar107._0_8_;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = auVar106._0_8_;
               auVar102 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar7 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar102 = auVar102 ^ auVar13 << uVar96;
                  }
               }
               auVar108 = vpsrldq_avx(auVar102, 4);
               auVar30._8_8_ = 0;
               auVar30._0_8_ = auVar107._0_8_;
               auVar36._8_8_ = 0;
               auVar36._0_8_ = auVar106._8_8_;
               auVar102 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar30 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar102 = auVar102 ^ auVar36 << uVar96;
                  }
               }
               auVar102 = vpslldq_avx(auVar102, 4);
               auVar102 = vpternlogq_avx512vl(auVar102, auVar105, auVar108, 0x96);
               *param_3 = 0;
               uVar95 = 0x10 - uVar95;
            }
            auVar105 = vmovdqu64_avx512vl(auVar102);
            param_2[4] = auVar105;
            auVar103 = vmovdqu8_avx512vl(auVar103);
            *param_6 = auVar103;
         }
         auVar103 = vmovdqu64_avx512vl(*param_2);
         auVar116 = ZEXT1664(auVar103);
         param_5 = param_5 - uVar95;
         if (param_5 != 0) {
            if (0x100 < param_5) {
               auVar60._16_16_ = _UNK_001a9fd0;
               auVar60._0_16_ = _SHUF_MASK;
               auVar60._32_32_ = _UNK_001a9fe0;
               auVar112 = vmovdqa64_avx512f(auVar60);
               auVar113 = vmovdqa64_avx512f(_ddq_addbe_4444);
               auVar114 = vmovdqa64_avx512f(_ddq_addbe_1234);
               auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
               *(char*)( (long)param_3 + -0x6e ) = *(char*)( (long)param_3 + -0x6e ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               if (auVar103[0] < 0xf0) {
                  auVar116 = vpaddd_avx512f(auVar116, auVar114);
                  for (int i_1408 = 0; i_1408 < 2; i_1408++) {
                     auVar116 = vpaddd_avx512f(auVar116, auVar113);
                  }
                  auVar116 = vpaddd_avx512f(auVar116, auVar116);
               } else {
                  auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                  auVar113 = vmovdqa64_avx512f(_ddq_add_4444);
                  auVar87._1_63_ = _UNK_001aa081;
                  auVar87[0] = ddq_add_1234;
                  auVar116 = vpaddd_avx512f(auVar116, auVar87);
                  auVar114 = vpaddd_avx512f(auVar116, auVar113);
                  auVar115 = vpaddd_avx512f(auVar114, auVar113);
                  auVar113 = vpaddd_avx512f(auVar115, auVar113);
                  vpshufb_avx512bw(auVar116, auVar112);
                  vpshufb_avx512bw(auVar114, auVar112);
                  vpshufb_avx512bw(auVar115, auVar112);
                  auVar116 = vpshufb_avx512bw(auVar113, auVar112);
               }
               vshufi64x2_avx512f(auVar116, auVar116);
               *(int*)param_4[-8] = *(int*)param_4[-8] + 1;
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            uVar96 = (int)param_5 + 0xfU >> 4;
            if (uVar96 == 8) {
               auVar74._16_16_ = _UNK_001a9fd0;
               auVar74._0_16_ = _SHUF_MASK;
               auVar74._32_32_ = _UNK_001a9fe0;
               auVar112 = vmovdqa64_avx512f(auVar74);
               auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
               vextracti32x4_avx512f(auVar116, 3);
               auVar113 = vpshufb_avx512bw(in_ZMM0, auVar112);
               auVar116 = vpshufb_avx512bw(auVar116, auVar112);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
               auVar112 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar113, auVar112);
               vpxorq_avx512f(auVar116, auVar112);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (7 < uVar96) {
               if (uVar96 == 0xc) {
                  auVar68._16_16_ = _UNK_001a9fd0;
                  auVar68._0_16_ = _SHUF_MASK;
                  auVar68._32_32_ = _UNK_001a9fe0;
                  auVar112 = vmovdqa64_avx512f(auVar68);
                  auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                  auVar113 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar113, 3);
                  auVar114 = vpshufb_avx512bw(in_ZMM0, auVar112);
                  auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                  auVar112 = vpshufb_avx512bw(auVar113, auVar112);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                  auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar114, auVar113);
                  vpxorq_avx512f(auVar116, auVar113);
                  vpxorq_avx512f(auVar112, auVar113);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 < 0xc) {
                  if (uVar96 == 0xb) {
                     auVar67._16_16_ = _UNK_001a9fd0;
                     auVar67._0_16_ = _SHUF_MASK;
                     auVar67._32_32_ = _UNK_001a9fe0;
                     auVar112 = vmovdqa64_avx512f(auVar67);
                     auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                     *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                     uVar2 = in(uVar43);
                     *(undefined4*)*param_1 = uVar2;
                     ddq_add_1234 = ddq_add_1234 + '\x01';
                     auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                     auVar113 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                     vextracti32x4_avx512f(auVar113, 2);
                     auVar114 = vpshufb_avx512bw(in_ZMM0, auVar112);
                     auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                     auVar112 = vpshufb_avx512bw(auVar113, auVar112);
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                     auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                     vpxorq_avx512f(auVar114, auVar113);
                     vpxorq_avx512f(auVar116, auVar113);
                     vpxorq_avx512f(auVar112, auVar113);
                     vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                     /* WARNING: Bad instruction - Truncating control flow here */
                     halt_baddata();
                  }
                  if (uVar96 == 10) {
                     auVar66._16_16_ = _UNK_001a9fd0;
                     auVar66._0_16_ = _SHUF_MASK;
                     auVar66._32_32_ = _UNK_001a9fe0;
                     auVar112 = vmovdqa64_avx512f(auVar66);
                     auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                     *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                     uVar2 = in(uVar43);
                     *(undefined4*)*param_1 = uVar2;
                     ddq_add_1234 = ddq_add_1234 + '\x01';
                     auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                     auVar113 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                     vextracti32x4_avx512f(auVar113, 1);
                     auVar114 = vpshufb_avx512bw(in_ZMM0, auVar112);
                     auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                     auVar111 = vpshufb_avx512vl(auVar113._0_32_, auVar112._0_32_);
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                     vmovdqu8_avx512vl(*(undefined1(*) [32])( param_4[8] + uVar95 ));
                     auVar112 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                     vpxorq_avx512f(auVar114, auVar112);
                     vpxorq_avx512f(auVar116, auVar112);
                     vpxorq_avx512vl(auVar111, auVar112._0_32_);
                     vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                     /* WARNING: Bad instruction - Truncating control flow here */
                     halt_baddata();
                  }
                  auVar65._16_16_ = _UNK_001a9fd0;
                  auVar65._0_16_ = _SHUF_MASK;
                  auVar65._32_32_ = _UNK_001a9fe0;
                  auVar112 = vmovdqa64_avx512f(auVar65);
                  auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                  auVar113 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar113, 0);
                  auVar114 = vpshufb_avx512bw(in_ZMM0, auVar112);
                  auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                  auVar102 = vpshufb_avx512vl(auVar113._0_16_, auVar112._0_16_);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512vl(*(undefined1(*) [16])( param_4[8] + uVar95 ));
                  auVar112 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar114, auVar112);
                  vpxorq_avx512f(auVar116, auVar112);
                  vpxorq_avx512vl(auVar102, auVar112._0_16_);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 == 0x10) {
                  auVar64._16_16_ = _UNK_001a9fd0;
                  auVar64._0_16_ = _SHUF_MASK;
                  auVar64._32_32_ = _UNK_001a9fe0;
                  auVar112 = vmovdqa64_avx512f(auVar64);
                  auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                  auVar113 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  auVar114 = vpaddd_avx512f(auVar116, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar114, 3);
                  auVar115 = vpshufb_avx512bw(in_ZMM0, auVar112);
                  auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                  auVar113 = vpshufb_avx512bw(auVar113, auVar112);
                  auVar112 = vpshufb_avx512bw(auVar114, auVar112);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[0xc] + uVar95 ));
                  auVar114 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar115, auVar114);
                  vpxorq_avx512f(auVar116, auVar114);
                  vpxorq_avx512f(auVar113, auVar114);
                  vpxorq_avx512f(auVar112, auVar114);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 == 0xf) {
                  auVar63._16_16_ = _UNK_001a9fd0;
                  auVar63._0_16_ = _SHUF_MASK;
                  auVar63._32_32_ = _UNK_001a9fe0;
                  auVar112 = vmovdqa64_avx512f(auVar63);
                  auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                  auVar113 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  auVar114 = vpaddd_avx512f(auVar116, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar114, 2);
                  auVar115 = vpshufb_avx512bw(in_ZMM0, auVar112);
                  auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                  auVar113 = vpshufb_avx512bw(auVar113, auVar112);
                  auVar112 = vpshufb_avx512bw(auVar114, auVar112);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[0xc] + uVar95 ));
                  auVar114 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar115, auVar114);
                  vpxorq_avx512f(auVar116, auVar114);
                  vpxorq_avx512f(auVar113, auVar114);
                  vpxorq_avx512f(auVar112, auVar114);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 == 0xe) {
                  auVar62._16_16_ = _UNK_001a9fd0;
                  auVar62._0_16_ = _SHUF_MASK;
                  auVar62._32_32_ = _UNK_001a9fe0;
                  auVar112 = vmovdqa64_avx512f(auVar62);
                  auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                  auVar113 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  auVar114 = vpaddd_avx512f(auVar116, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar114, 1);
                  auVar115 = vpshufb_avx512bw(in_ZMM0, auVar112);
                  auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                  auVar113 = vpshufb_avx512bw(auVar113, auVar112);
                  auVar111 = vpshufb_avx512vl(auVar114._0_32_, auVar112._0_32_);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                  vmovdqu8_avx512vl(*(undefined1(*) [32])( param_4[0xc] + uVar95 ));
                  auVar112 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar115, auVar112);
                  vpxorq_avx512f(auVar116, auVar112);
                  vpxorq_avx512f(auVar113, auVar112);
                  vpxorq_avx512vl(auVar111, auVar112._0_32_);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               auVar61._16_16_ = _UNK_001a9fd0;
               auVar61._0_16_ = _SHUF_MASK;
               auVar61._32_32_ = _UNK_001a9fe0;
               auVar112 = vmovdqa64_avx512f(auVar61);
               auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
               auVar113 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
               auVar114 = vpaddd_avx512f(auVar116, _ddq_add_8888);
               vextracti32x4_avx512f(auVar114, 0);
               auVar115 = vpshufb_avx512bw(in_ZMM0, auVar112);
               auVar116 = vpshufb_avx512bw(auVar116, auVar112);
               auVar113 = vpshufb_avx512bw(auVar113, auVar112);
               auVar102 = vpshufb_avx512vl(auVar114._0_16_, auVar112._0_16_);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
               vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
               vmovdqu8_avx512vl(*(undefined1(*) [16])( param_4[0xc] + uVar95 ));
               auVar112 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar115, auVar112);
               vpxorq_avx512f(auVar116, auVar112);
               vpxorq_avx512f(auVar113, auVar112);
               vpxorq_avx512vl(auVar102, auVar112._0_16_);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar96 == 4) {
               auVar73._16_16_ = _UNK_001a9fd0;
               auVar73._0_16_ = _SHUF_MASK;
               auVar73._32_32_ = _UNK_001a9fe0;
               auVar112 = vmovdqa64_avx512f(auVar73);
               vshufi64x2_avx512f(auVar116, auVar116);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               vextracti32x4_avx512f(in_ZMM0, 3);
               auVar116 = vpshufb_avx512bw(in_ZMM0, auVar112);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               auVar112 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar116, auVar112);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (3 < uVar96) {
               if (uVar96 == 7) {
                  auVar71._16_16_ = _UNK_001a9fd0;
                  auVar71._0_16_ = _SHUF_MASK;
                  auVar71._32_32_ = _UNK_001a9fe0;
                  auVar112 = vmovdqa64_avx512f(auVar71);
                  auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                  vextracti32x4_avx512f(auVar116, 2);
                  auVar113 = vpshufb_avx512bw(in_ZMM0, auVar112);
                  auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  auVar112 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar113, auVar112);
                  vpxorq_avx512f(auVar116, auVar112);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 == 6) {
                  auVar70._16_16_ = _UNK_001a9fd0;
                  auVar70._0_16_ = _SHUF_MASK;
                  auVar70._32_32_ = _UNK_001a9fe0;
                  auVar112 = vmovdqa64_avx512f(auVar70);
                  auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                  vextracti32x4_avx512f(auVar116, 1);
                  auVar113 = vpshufb_avx512bw(in_ZMM0, auVar112);
                  auVar111 = vpshufb_avx512vl(auVar116._0_32_, auVar112._0_32_);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512vl(*(undefined1(*) [32])( param_4[4] + uVar95 ));
                  auVar116 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar113, auVar116);
                  vpxorq_avx512vl(auVar111, auVar116._0_32_);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               auVar69._16_16_ = _UNK_001a9fd0;
               auVar69._0_16_ = _SHUF_MASK;
               auVar69._32_32_ = _UNK_001a9fe0;
               auVar112 = vmovdqa64_avx512f(auVar69);
               auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
               vextracti32x4_avx512f(auVar116, 0);
               auVar113 = vpshufb_avx512bw(in_ZMM0, auVar112);
               auVar102 = vpshufb_avx512vl(auVar116._0_16_, auVar112._0_16_);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               vmovdqu8_avx512vl(*(undefined1(*) [16])( param_4[4] + uVar95 ));
               auVar116 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar113, auVar116);
               vpxorq_avx512vl(auVar102, auVar116._0_16_);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar96 == 3) {
               auVar72._16_16_ = _UNK_001a9fd0;
               auVar72._0_16_ = _SHUF_MASK;
               auVar72._32_32_ = _UNK_001a9fe0;
               auVar112 = vmovdqa64_avx512f(auVar72);
               vshufi64x2_avx512f(auVar116, auVar116);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               vextracti32x4_avx512f(in_ZMM0, 2);
               auVar116 = vpshufb_avx512bw(in_ZMM0, auVar112);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               auVar112 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar116, auVar112);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar96 == 2) {
               auVar110._16_16_ = _UNK_001a9fd0;
               auVar110._0_16_ = _SHUF_MASK;
               auVar111 = vmovdqa64_avx512vl(auVar110);
               auVar110 = vshufi64x2_avx512vl(ZEXT1632(auVar103), ZEXT1632(auVar103));
               ddq_add_1234 = ddq_add_1234 + '\x01';
               vextracti32x4_avx512f(ZEXT3264(auVar110), 1);
               auVar111 = vpshufb_avx512vl(auVar110, auVar111);
               vmovdqu8_avx512vl(*(undefined1(*) [32])( CONCAT62(uVar93, CONCAT11(cVar92 + cVar88, uVar91)) + uVar95 ));
               auVar116 = vbroadcastf64x2_avx512dq(*param_1);
               vpxorq_avx512vl(auVar111, auVar116._0_32_);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 8 ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            auVar105 = vmovdqa64_avx512vl(_SHUF_MASK);
            auVar103 = vpaddd_avx(auVar103, _ONE);
            uVar94 = *(ulong*)( &byte64_len_to_mask_table + param_5 * 8 );
            auVar106 = vextracti32x4_avx512f(ZEXT1664(auVar103), 0);
            auVar103 = vpshufb_avx512vl(auVar103, auVar105);
            auVar107 = vmovdqu8_avx512vl(*(undefined1(*) [16])( *param_4 + uVar95 ));
            auVar101[1] = ( ( byte )(uVar94 >> 1) & 1 ) * auVar107[1];
            auVar101[0] = ( (byte)uVar94 & 1 ) * auVar107[0];
            for (int i_1407 = 0; i_1407 < 14; i_1407++) {
               auVar101[( i_1407 + 2 )] = ( ( byte )(uVar94 >> ( i_1407 + 2 )) & 1 ) * auVar107[( i_1407 + 2 )];
            }
            auVar116 = vbroadcastf64x2_avx512dq(*param_1);
            auVar103 = vpxorq_avx512vl(auVar103, auVar116._0_16_);
            auVar116 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 8 ));
            for (int i_1406 = 0; i_1406 < 5; i_1406++) {
               auVar103 = aesenc(auVar103, auVar116._0_16_);
               auVar116 = vbroadcastf64x2_avx512dq(param_1[( i_1406 + 1 )]);
               auVar103 = aesenc(auVar103, auVar116._0_16_);
               auVar116 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( param_1[( i_1406 + 1 )] + 8 ));
            }
            auVar103 = aesenc(auVar103, auVar116._0_16_);
            auVar116 = vbroadcastf64x2_avx512dq(param_1[6]);
            auVar103 = aesenclast(auVar103, auVar116._0_16_);
            auVar107 = vpxorq_avx512vl(auVar103, auVar101);
            auVar108 = vextracti32x4_avx512f(ZEXT1664(auVar107), 0);
            auVar103 = vmovdqu8_avx512vl(auVar107);
            *(undefined1(*) [16])( *param_6 + uVar95 ) = auVar103;
            vmovdqu8_avx512bw(ZEXT1664(auVar107));
            auVar103 = vpshufb_avx512vl(auVar101, auVar105);
            auVar105 = vextracti32x4_avx512f(ZEXT1664(auVar103), 0);
            if (0xf < (long)param_5) {
               *param_3 = 0;
               vpxorq_avx512f(ZEXT1664(auVar103), ZEXT1664(auVar102));
               vmovdqu64_avx512vl(param_2[0x15]);
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            *param_3 = param_5;
            auVar103 = vmovdqu64_avx512vl(auVar108);
            param_2[1] = auVar103;
            auVar103 = vpxorq_avx512vl(auVar102, auVar105);
            auVar102 = vmovdqu64_avx512vl(auVar106);
            *param_2 = auVar102;
            auVar102 = vmovdqu64_avx512vl(auVar103);
            param_2[4] = auVar102;
         }
      }
   } else if (iVar89 == 0xd) {
      if (param_5 != 0) {
         auVar102 = vmovdqu64_avx512vl(param_2[4]);
         uVar95 = *param_3;
         if (uVar95 != 0) {
            uVar94 = 0x10;
            if (param_5 < 0x10) {
               uVar94 = param_5;
            }
            uVar1 = *(ushort*)( &byte_len_to_mask_table + uVar94 * 2 );
            auVar103 = vmovdqu8_avx512vl(*param_4);
            auVar104[1] = ( ( byte )(uVar1 >> 1) & 1 ) * auVar103[1];
            auVar104[0] = ( (byte)uVar1 & 1 ) * auVar103[0];
            for (int i_1409 = 0; i_1409 < 6; i_1409++) {
               auVar104[( i_1409 + 2 )] = ( ( byte )(uVar1 >> ( i_1409 + 2 )) & 1 ) * auVar103[( i_1409 + 2 )];
            }
            bVar3 = ( byte )(uVar1 >> 8);
            auVar104[8] = ( bVar3 & 1 ) * auVar103[8];
            for (int i_1410 = 0; i_1410 < 6; i_1410++) {
               auVar104[( i_1410 + 9 )] = ( bVar3 >> ( i_1410 + 1 ) & 1 ) * auVar103[( i_1410 + 9 )];
            }
            auVar104[0xf] = -((char)bVar3 >> 7) * auVar103[0xf];
            auVar103 = vmovdqu64_avx512vl(param_2[1]);
            auVar105 = vmovdqu64_avx512vl(param_2[0x15]);
            pauVar97 = (undefined1(*) [16])( &SHIFT_MASK + uVar95 );
            auVar106 = vmovdqu64_avx512vl(*pauVar97);
            auVar103 = vpshufb_avx(auVar103, auVar106);
            auVar107 = vmovdqa64_avx512vl(auVar104);
            auVar103 = vpxorq_avx512vl(auVar103, auVar104);
            lVar98 = param_5 + uVar95 + -0x10;
            if ((long)( param_5 + uVar95 ) < 0x10) {
               pauVar97 = (undefined1(*) [16])( (long)pauVar97 - lVar98 );
            }
            auVar108 = vmovdqu64_avx512vl(pauVar97[1]);
            in_ZMM0 = ZEXT1664(auVar108);
            auVar103 = vpand_avx(auVar103, auVar108);
            auVar107 = vpand_avx(auVar107, auVar108);
            auVar107 = vpshufb_avx(auVar107, _SHUF_MASK);
            auVar106 = vpshufb_avx(auVar107, auVar106);
            auVar102 = vpxorq_avx512vl(auVar102, auVar106);
            if (lVar98 < 0) {
               *param_3 = *param_3 + param_5;
               uVar95 = param_5;
            } else {
               auVar40._8_8_ = 0;
               auVar40._0_8_ = auVar102._8_8_;
               auVar42._8_8_ = 0;
               auVar42._0_8_ = auVar105._8_8_;
               auVar106 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar40 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar106 = auVar106 ^ auVar42 << uVar96;
                  }
               }
               auVar8._8_8_ = 0;
               auVar8._0_8_ = auVar102._0_8_;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = auVar105._0_8_;
               auVar107 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar8 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar107 = auVar107 ^ auVar14 << uVar96;
                  }
               }
               auVar19._8_8_ = 0;
               auVar19._0_8_ = auVar102._8_8_;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = auVar105._0_8_;
               auVar108 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar19 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar108 = auVar108 ^ auVar25 << uVar96;
                  }
               }
               auVar31._8_8_ = 0;
               auVar31._0_8_ = auVar102._0_8_;
               auVar37._8_8_ = 0;
               auVar37._0_8_ = auVar105._8_8_;
               auVar102 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar31 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar102 = auVar102 ^ auVar37 << uVar96;
                  }
               }
               auVar102 = vpxorq_avx512vl(auVar102, auVar108);
               auVar105 = vpsrldq_avx(auVar102, 8);
               auVar102 = vpslldq_avx(auVar102, 8);
               auVar105 = vpxorq_avx512vl(auVar106, auVar105);
               auVar106 = vpxorq_avx512vl(auVar102, auVar107);
               auVar107 = vmovdqu64_avx512vl(_POLY2);
               auVar20._8_8_ = 0;
               auVar20._0_8_ = auVar107._8_8_;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = auVar106._0_8_;
               auVar102 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar20 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar102 = auVar102 ^ auVar26 << uVar96;
                  }
               }
               auVar102 = vpslldq_avx(auVar102, 8);
               auVar106 = vpxorq_avx512vl(auVar106, auVar102);
               auVar9._8_8_ = 0;
               auVar9._0_8_ = auVar107._0_8_;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = auVar106._0_8_;
               auVar102 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar9 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar102 = auVar102 ^ auVar15 << uVar96;
                  }
               }
               auVar108 = vpsrldq_avx(auVar102, 4);
               auVar32._8_8_ = 0;
               auVar32._0_8_ = auVar107._0_8_;
               auVar38._8_8_ = 0;
               auVar38._0_8_ = auVar106._8_8_;
               auVar102 = (undefined1[16])0x0;
               for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
                  if (( auVar32 & (undefined1[16])0x1 << uVar96 ) != (undefined1[16])0x0) {
                     auVar102 = auVar102 ^ auVar38 << uVar96;
                  }
               }
               auVar102 = vpslldq_avx(auVar102, 4);
               auVar102 = vpternlogq_avx512vl(auVar102, auVar105, auVar108, 0x96);
               *param_3 = 0;
               uVar95 = 0x10 - uVar95;
            }
            auVar105 = vmovdqu64_avx512vl(auVar102);
            param_2[4] = auVar105;
            auVar103 = vmovdqu8_avx512vl(auVar103);
            *param_6 = auVar103;
         }
         auVar103 = vmovdqu64_avx512vl(*param_2);
         auVar116 = ZEXT1664(auVar103);
         param_5 = param_5 - uVar95;
         if (param_5 != 0) {
            if (0x100 < param_5) {
               auVar45._16_16_ = _UNK_001a9fd0;
               auVar45._0_16_ = _SHUF_MASK;
               auVar45._32_32_ = _UNK_001a9fe0;
               auVar112 = vmovdqa64_avx512f(auVar45);
               auVar113 = vmovdqa64_avx512f(_ddq_addbe_4444);
               auVar114 = vmovdqa64_avx512f(_ddq_addbe_1234);
               auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
               *(char*)( (long)param_3 + -0x6e ) = *(char*)( (long)param_3 + -0x6e ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               if (auVar103[0] < 0xf0) {
                  auVar116 = vpaddd_avx512f(auVar116, auVar114);
                  for (int i_1413 = 0; i_1413 < 2; i_1413++) {
                     auVar116 = vpaddd_avx512f(auVar116, auVar113);
                  }
                  auVar116 = vpaddd_avx512f(auVar116, auVar116);
               } else {
                  auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                  auVar113 = vmovdqa64_avx512f(_ddq_add_4444);
                  auVar86._1_63_ = _UNK_001aa081;
                  auVar86[0] = ddq_add_1234;
                  auVar116 = vpaddd_avx512f(auVar116, auVar86);
                  auVar114 = vpaddd_avx512f(auVar116, auVar113);
                  auVar115 = vpaddd_avx512f(auVar114, auVar113);
                  auVar113 = vpaddd_avx512f(auVar115, auVar113);
                  vpshufb_avx512bw(auVar116, auVar112);
                  vpshufb_avx512bw(auVar114, auVar112);
                  vpshufb_avx512bw(auVar115, auVar112);
                  auVar116 = vpshufb_avx512bw(auVar113, auVar112);
               }
               vshufi64x2_avx512f(auVar116, auVar116);
               *(int*)param_4[-8] = *(int*)param_4[-8] + 1;
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            uVar96 = (int)param_5 + 0xfU >> 4;
            if (uVar96 == 8) {
               auVar59._16_16_ = _UNK_001a9fd0;
               auVar59._0_16_ = _SHUF_MASK;
               auVar59._32_32_ = _UNK_001a9fe0;
               auVar112 = vmovdqa64_avx512f(auVar59);
               auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
               vextracti32x4_avx512f(auVar116, 3);
               auVar113 = vpshufb_avx512bw(in_ZMM0, auVar112);
               auVar116 = vpshufb_avx512bw(auVar116, auVar112);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
               auVar112 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar113, auVar112);
               vpxorq_avx512f(auVar116, auVar112);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (7 < uVar96) {
               if (uVar96 == 0xc) {
                  auVar53._16_16_ = _UNK_001a9fd0;
                  auVar53._0_16_ = _SHUF_MASK;
                  auVar53._32_32_ = _UNK_001a9fe0;
                  auVar112 = vmovdqa64_avx512f(auVar53);
                  auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                  auVar113 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar113, 3);
                  auVar114 = vpshufb_avx512bw(in_ZMM0, auVar112);
                  auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                  auVar112 = vpshufb_avx512bw(auVar113, auVar112);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                  auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar114, auVar113);
                  vpxorq_avx512f(auVar116, auVar113);
                  vpxorq_avx512f(auVar112, auVar113);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 < 0xc) {
                  if (uVar96 == 0xb) {
                     auVar52._16_16_ = _UNK_001a9fd0;
                     auVar52._0_16_ = _SHUF_MASK;
                     auVar52._32_32_ = _UNK_001a9fe0;
                     auVar112 = vmovdqa64_avx512f(auVar52);
                     auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                     *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                     uVar2 = in(uVar43);
                     *(undefined4*)*param_1 = uVar2;
                     ddq_add_1234 = ddq_add_1234 + '\x01';
                     auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                     auVar113 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                     vextracti32x4_avx512f(auVar113, 2);
                     auVar114 = vpshufb_avx512bw(in_ZMM0, auVar112);
                     auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                     auVar112 = vpshufb_avx512bw(auVar113, auVar112);
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                     auVar113 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                     vpxorq_avx512f(auVar114, auVar113);
                     vpxorq_avx512f(auVar116, auVar113);
                     vpxorq_avx512f(auVar112, auVar113);
                     vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                     /* WARNING: Bad instruction - Truncating control flow here */
                     halt_baddata();
                  }
                  if (uVar96 == 10) {
                     auVar51._16_16_ = _UNK_001a9fd0;
                     auVar51._0_16_ = _SHUF_MASK;
                     auVar51._32_32_ = _UNK_001a9fe0;
                     auVar112 = vmovdqa64_avx512f(auVar51);
                     auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                     *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                     uVar2 = in(uVar43);
                     *(undefined4*)*param_1 = uVar2;
                     ddq_add_1234 = ddq_add_1234 + '\x01';
                     auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                     auVar113 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                     vextracti32x4_avx512f(auVar113, 1);
                     auVar114 = vpshufb_avx512bw(in_ZMM0, auVar112);
                     auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                     auVar111 = vpshufb_avx512vl(auVar113._0_32_, auVar112._0_32_);
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                     vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                     vmovdqu8_avx512vl(*(undefined1(*) [32])( param_4[8] + uVar95 ));
                     auVar112 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                     vpxorq_avx512f(auVar114, auVar112);
                     vpxorq_avx512f(auVar116, auVar112);
                     vpxorq_avx512vl(auVar111, auVar112._0_32_);
                     vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                     /* WARNING: Bad instruction - Truncating control flow here */
                     halt_baddata();
                  }
                  auVar50._16_16_ = _UNK_001a9fd0;
                  auVar50._0_16_ = _SHUF_MASK;
                  auVar50._32_32_ = _UNK_001a9fe0;
                  auVar112 = vmovdqa64_avx512f(auVar50);
                  auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                  auVar113 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar113, 0);
                  auVar114 = vpshufb_avx512bw(in_ZMM0, auVar112);
                  auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                  auVar102 = vpshufb_avx512vl(auVar113._0_16_, auVar112._0_16_);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512vl(*(undefined1(*) [16])( param_4[8] + uVar95 ));
                  auVar112 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar114, auVar112);
                  vpxorq_avx512f(auVar116, auVar112);
                  vpxorq_avx512vl(auVar102, auVar112._0_16_);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 == 0x10) {
                  auVar49._16_16_ = _UNK_001a9fd0;
                  auVar49._0_16_ = _SHUF_MASK;
                  auVar49._32_32_ = _UNK_001a9fe0;
                  auVar112 = vmovdqa64_avx512f(auVar49);
                  auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                  auVar113 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  auVar114 = vpaddd_avx512f(auVar116, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar114, 3);
                  auVar115 = vpshufb_avx512bw(in_ZMM0, auVar112);
                  auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                  auVar113 = vpshufb_avx512bw(auVar113, auVar112);
                  auVar112 = vpshufb_avx512bw(auVar114, auVar112);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[0xc] + uVar95 ));
                  auVar114 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar115, auVar114);
                  vpxorq_avx512f(auVar116, auVar114);
                  vpxorq_avx512f(auVar113, auVar114);
                  vpxorq_avx512f(auVar112, auVar114);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 == 0xf) {
                  auVar48._16_16_ = _UNK_001a9fd0;
                  auVar48._0_16_ = _SHUF_MASK;
                  auVar48._32_32_ = _UNK_001a9fe0;
                  auVar112 = vmovdqa64_avx512f(auVar48);
                  auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                  auVar113 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  auVar114 = vpaddd_avx512f(auVar116, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar114, 2);
                  auVar115 = vpshufb_avx512bw(in_ZMM0, auVar112);
                  auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                  auVar113 = vpshufb_avx512bw(auVar113, auVar112);
                  auVar112 = vpshufb_avx512bw(auVar114, auVar112);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[0xc] + uVar95 ));
                  auVar114 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar115, auVar114);
                  vpxorq_avx512f(auVar116, auVar114);
                  vpxorq_avx512f(auVar113, auVar114);
                  vpxorq_avx512f(auVar112, auVar114);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 == 0xe) {
                  auVar47._16_16_ = _UNK_001a9fd0;
                  auVar47._0_16_ = _SHUF_MASK;
                  auVar47._32_32_ = _UNK_001a9fe0;
                  auVar112 = vmovdqa64_avx512f(auVar47);
                  auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                  auVar113 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
                  auVar114 = vpaddd_avx512f(auVar116, _ddq_add_8888);
                  vextracti32x4_avx512f(auVar114, 1);
                  auVar115 = vpshufb_avx512bw(in_ZMM0, auVar112);
                  auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                  auVar113 = vpshufb_avx512bw(auVar113, auVar112);
                  auVar111 = vpshufb_avx512vl(auVar114._0_32_, auVar112._0_32_);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
                  vmovdqu8_avx512vl(*(undefined1(*) [32])( param_4[0xc] + uVar95 ));
                  auVar112 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar115, auVar112);
                  vpxorq_avx512f(auVar116, auVar112);
                  vpxorq_avx512f(auVar113, auVar112);
                  vpxorq_avx512vl(auVar111, auVar112._0_32_);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               auVar46._16_16_ = _UNK_001a9fd0;
               auVar46._0_16_ = _SHUF_MASK;
               auVar46._32_32_ = _UNK_001a9fe0;
               auVar112 = vmovdqa64_avx512f(auVar46);
               auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
               auVar113 = vpaddd_avx512f(in_ZMM0, _ddq_add_8888);
               auVar114 = vpaddd_avx512f(auVar116, _ddq_add_8888);
               vextracti32x4_avx512f(auVar114, 0);
               auVar115 = vpshufb_avx512bw(in_ZMM0, auVar112);
               auVar116 = vpshufb_avx512bw(auVar116, auVar112);
               auVar113 = vpshufb_avx512bw(auVar113, auVar112);
               auVar102 = vpshufb_avx512vl(auVar114._0_16_, auVar112._0_16_);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
               vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[8] + uVar95 ));
               vmovdqu8_avx512vl(*(undefined1(*) [16])( param_4[0xc] + uVar95 ));
               auVar112 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar115, auVar112);
               vpxorq_avx512f(auVar116, auVar112);
               vpxorq_avx512f(auVar113, auVar112);
               vpxorq_avx512vl(auVar102, auVar112._0_16_);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar96 == 4) {
               auVar58._16_16_ = _UNK_001a9fd0;
               auVar58._0_16_ = _SHUF_MASK;
               auVar58._32_32_ = _UNK_001a9fe0;
               auVar112 = vmovdqa64_avx512f(auVar58);
               vshufi64x2_avx512f(auVar116, auVar116);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               vextracti32x4_avx512f(in_ZMM0, 3);
               auVar116 = vpshufb_avx512bw(in_ZMM0, auVar112);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               auVar112 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar116, auVar112);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (3 < uVar96) {
               if (uVar96 == 7) {
                  auVar56._16_16_ = _UNK_001a9fd0;
                  auVar56._0_16_ = _SHUF_MASK;
                  auVar56._32_32_ = _UNK_001a9fe0;
                  auVar112 = vmovdqa64_avx512f(auVar56);
                  auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                  vextracti32x4_avx512f(auVar116, 2);
                  auVar113 = vpshufb_avx512bw(in_ZMM0, auVar112);
                  auVar116 = vpshufb_avx512bw(auVar116, auVar112);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( param_4[4] + uVar95 ));
                  auVar112 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar113, auVar112);
                  vpxorq_avx512f(auVar116, auVar112);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               if (uVar96 == 6) {
                  auVar55._16_16_ = _UNK_001a9fd0;
                  auVar55._0_16_ = _SHUF_MASK;
                  auVar55._32_32_ = _UNK_001a9fe0;
                  auVar112 = vmovdqa64_avx512f(auVar55);
                  auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
                  *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
                  uVar2 = in(uVar43);
                  *(undefined4*)*param_1 = uVar2;
                  ddq_add_1234 = ddq_add_1234 + '\x01';
                  auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
                  vextracti32x4_avx512f(auVar116, 1);
                  auVar113 = vpshufb_avx512bw(in_ZMM0, auVar112);
                  auVar111 = vpshufb_avx512vl(auVar116._0_32_, auVar112._0_32_);
                  vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
                  vmovdqu8_avx512vl(*(undefined1(*) [32])( param_4[4] + uVar95 ));
                  auVar116 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
                  vpxorq_avx512f(auVar113, auVar116);
                  vpxorq_avx512vl(auVar111, auVar116._0_32_);
                  vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
                  /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
               }
               auVar54._16_16_ = _UNK_001a9fd0;
               auVar54._0_16_ = _SHUF_MASK;
               auVar54._32_32_ = _UNK_001a9fe0;
               auVar112 = vmovdqa64_avx512f(auVar54);
               auVar116 = vshufi64x2_avx512f(auVar116, auVar116);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               auVar116 = vpaddd_avx512f(auVar116, _ddq_add_5678);
               vextracti32x4_avx512f(auVar116, 0);
               auVar113 = vpshufb_avx512bw(in_ZMM0, auVar112);
               auVar102 = vpshufb_avx512vl(auVar116._0_16_, auVar112._0_16_);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               vmovdqu8_avx512vl(*(undefined1(*) [16])( param_4[4] + uVar95 ));
               auVar116 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar113, auVar116);
               vpxorq_avx512vl(auVar102, auVar116._0_16_);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar96 == 3) {
               auVar57._16_16_ = _UNK_001a9fd0;
               auVar57._0_16_ = _SHUF_MASK;
               auVar57._32_32_ = _UNK_001a9fe0;
               auVar112 = vmovdqa64_avx512f(auVar57);
               vshufi64x2_avx512f(auVar116, auVar116);
               *(char*)( (long)param_3 + -0xf ) = *(char*)( (long)param_3 + -0xf ) + cVar90;
               uVar2 = in(uVar43);
               *(undefined4*)*param_1 = uVar2;
               ddq_add_1234 = ddq_add_1234 + '\x01';
               vextracti32x4_avx512f(in_ZMM0, 2);
               auVar116 = vpshufb_avx512bw(in_ZMM0, auVar112);
               vmovdqu8_avx512bw(*(undefined1(*) [64])( *param_4 + uVar95 ));
               auVar112 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 4 ));
               vpxorq_avx512f(auVar116, auVar112);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 0xc ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            if (uVar96 == 2) {
               auVar44._16_16_ = _UNK_001a9fd0;
               auVar44._0_16_ = _SHUF_MASK;
               auVar111 = vmovdqa64_avx512vl(auVar44);
               auVar110 = vshufi64x2_avx512vl(ZEXT1632(auVar103), ZEXT1632(auVar103));
               ddq_add_1234 = ddq_add_1234 + '\x01';
               vextracti32x4_avx512f(ZEXT3264(auVar110), 1);
               auVar111 = vpshufb_avx512vl(auVar110, auVar111);
               vmovdqu8_avx512vl(*(undefined1(*) [32])( CONCAT62(uVar93, CONCAT11(cVar92 + cVar88, uVar91)) + uVar95 ));
               auVar116 = vbroadcastf64x2_avx512dq(*param_1);
               vpxorq_avx512vl(auVar111, auVar116._0_32_);
               vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 8 ));
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            auVar105 = vmovdqa64_avx512vl(_SHUF_MASK);
            auVar103 = vpaddd_avx(auVar103, _ONE);
            uVar94 = *(ulong*)( &byte64_len_to_mask_table + param_5 * 8 );
            auVar106 = vextracti32x4_avx512f(ZEXT1664(auVar103), 0);
            auVar103 = vpshufb_avx512vl(auVar103, auVar105);
            auVar107 = vmovdqu8_avx512vl(*(undefined1(*) [16])( *param_4 + uVar95 ));
            auVar109[1] = ( ( byte )(uVar94 >> 1) & 1 ) * auVar107[1];
            auVar109[0] = ( (byte)uVar94 & 1 ) * auVar107[0];
            for (int i_1412 = 0; i_1412 < 14; i_1412++) {
               auVar109[( i_1412 + 2 )] = ( ( byte )(uVar94 >> ( i_1412 + 2 )) & 1 ) * auVar107[( i_1412 + 2 )];
            }
            auVar116 = vbroadcastf64x2_avx512dq(*param_1);
            auVar103 = vpxorq_avx512vl(auVar103, auVar116._0_16_);
            auVar116 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( *param_1 + 8 ));
            for (int i_1411 = 0; i_1411 < 6; i_1411++) {
               auVar103 = aesenc(auVar103, auVar116._0_16_);
               auVar116 = vbroadcastf64x2_avx512dq(param_1[( i_1411 + 1 )]);
               auVar103 = aesenc(auVar103, auVar116._0_16_);
               auVar116 = vbroadcastf64x2_avx512dq(*(undefined1(*) [16])( param_1[( i_1411 + 1 )] + 8 ));
            }
            auVar103 = aesenc(auVar103, auVar116._0_16_);
            auVar116 = vbroadcastf64x2_avx512dq(param_1[7]);
            auVar103 = aesenclast(auVar103, auVar116._0_16_);
            auVar107 = vpxorq_avx512vl(auVar103, auVar109);
            auVar108 = vextracti32x4_avx512f(ZEXT1664(auVar107), 0);
            auVar103 = vmovdqu8_avx512vl(auVar107);
            *(undefined1(*) [16])( *param_6 + uVar95 ) = auVar103;
            vmovdqu8_avx512bw(ZEXT1664(auVar107));
            auVar103 = vpshufb_avx512vl(auVar109, auVar105);
            auVar105 = vextracti32x4_avx512f(ZEXT1664(auVar103), 0);
            if (0xf < (long)param_5) {
               *param_3 = 0;
               vpxorq_avx512f(ZEXT1664(auVar103), ZEXT1664(auVar102));
               vmovdqu64_avx512vl(param_2[0x15]);
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }
            *param_3 = param_5;
            auVar103 = vmovdqu64_avx512vl(auVar108);
            param_2[1] = auVar103;
            auVar103 = vpxorq_avx512vl(auVar102, auVar105);
            auVar102 = vmovdqu64_avx512vl(auVar106);
            *param_2 = auVar102;
            auVar102 = vmovdqu64_avx512vl(auVar103);
            param_2[4] = auVar102;
         }
      }
   } else {
      iVar89 = 0;
   }
   if (0x100 < param_5) {
      auVar116 = ZEXT1664((undefined1[16])0x0);
      for (int i_1414 = 0; i_1414 < 12; i_1414++) {
         vmovdqa64_avx512f(auVar116);
      }
   }
   return iVar89;
}/* WARNING: Control flow encountered bad instruction data */void ossl_aes_gcm_finalize_avx512(long param_1, long param_2) {
   uint uVar1;
   undefined1 auVar2[16];
   if (param_2 != 0) {
      for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {}
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   auVar2._8_8_ = 0;
   auVar2._0_8_ = *(ulong*)( param_1 + 0x38 );
   auVar2 = vpinsrq_avx(auVar2, *(undefined8*)( param_1 + 0x30 ), 1);
   vpsllq_avx(auVar2, 3);
   for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {}
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void ossl_gcm_gmult_avx512(undefined1 (*param_1)[16], long param_2) {
   uint uVar1;
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
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   auVar11 = vmovdqu64_avx512vl(*param_1);
   auVar12 = vmovdqu64_avx512vl(*(undefined1(*) [16])( param_2 + 0x150 ));
   auVar14._8_8_ = 0;
   auVar14._0_8_ = auVar11._8_8_;
   auVar13._8_8_ = 0;
   auVar13._0_8_ = auVar12._8_8_;
   auVar16 = (undefined1[16])0x0;
   for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if (( auVar14 & (undefined1[16])0x1 << uVar1 ) != (undefined1[16])0x0) {
         auVar16 = auVar16 ^ auVar13 << uVar1;
      }
   }
   auVar15._8_8_ = 0;
   auVar15._0_8_ = auVar11._0_8_;
   auVar3._8_8_ = 0;
   auVar3._0_8_ = auVar12._0_8_;
   auVar14 = (undefined1[16])0x0;
   for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if (( auVar15 & (undefined1[16])0x1 << uVar1 ) != (undefined1[16])0x0) {
         auVar14 = auVar14 ^ auVar3 << uVar1;
      }
   }
   auVar5._8_8_ = 0;
   auVar5._0_8_ = auVar11._8_8_;
   auVar6._8_8_ = 0;
   auVar6._0_8_ = auVar12._0_8_;
   auVar13 = (undefined1[16])0x0;
   for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if (( auVar5 & (undefined1[16])0x1 << uVar1 ) != (undefined1[16])0x0) {
         auVar13 = auVar13 ^ auVar6 << uVar1;
      }
   }
   auVar7._8_8_ = 0;
   auVar7._0_8_ = auVar11._0_8_;
   auVar9._8_8_ = 0;
   auVar9._0_8_ = auVar12._8_8_;
   auVar11 = (undefined1[16])0x0;
   for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if (( auVar7 & (undefined1[16])0x1 << uVar1 ) != (undefined1[16])0x0) {
         auVar11 = auVar11 ^ auVar9 << uVar1;
      }
   }
   auVar13 = vpxorq_avx512vl(auVar11, auVar13);
   auVar12 = vpsrldq_avx(auVar13, 8);
   auVar11 = vpslldq_avx(auVar13, 8);
   auVar13 = vpxorq_avx512vl(auVar16, auVar12);
   auVar14 = vpxorq_avx512vl(auVar11, auVar14);
   auVar15 = vmovdqu64_avx512vl(_POLY2);
   auVar11._8_8_ = 0;
   auVar11._0_8_ = auVar15._8_8_;
   auVar12._8_8_ = 0;
   auVar12._0_8_ = auVar14._0_8_;
   auVar16 = (undefined1[16])0x0;
   for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if (( auVar11 & (undefined1[16])0x1 << uVar1 ) != (undefined1[16])0x0) {
         auVar16 = auVar16 ^ auVar12 << uVar1;
      }
   }
   auVar16 = vpslldq_avx(auVar16, 8);
   auVar14 = vpxorq_avx512vl(auVar14, auVar16);
   auVar2._8_8_ = 0;
   auVar2._0_8_ = auVar15._0_8_;
   auVar4._8_8_ = 0;
   auVar4._0_8_ = auVar14._0_8_;
   auVar16 = (undefined1[16])0x0;
   for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if (( auVar2 & (undefined1[16])0x1 << uVar1 ) != (undefined1[16])0x0) {
         auVar16 = auVar16 ^ auVar4 << uVar1;
      }
   }
   auVar11 = vpsrldq_avx(auVar16, 4);
   auVar8._8_8_ = 0;
   auVar8._0_8_ = auVar15._0_8_;
   auVar10._8_8_ = 0;
   auVar10._0_8_ = auVar14._8_8_;
   auVar16 = (undefined1[16])0x0;
   for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if (( auVar8 & (undefined1[16])0x1 << uVar1 ) != (undefined1[16])0x0) {
         auVar16 = auVar16 ^ auVar10 << uVar1;
      }
   }
   auVar16 = vpslldq_avx(auVar16, 4);
   auVar16 = vpternlogq_avx512vl(auVar16, auVar13, auVar11, 0x96);
   auVar16 = vmovdqu64_avx512vl(auVar16);
   *param_1 = auVar16;
   return;
}

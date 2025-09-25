/* meshopt::decodeVertexBlock(unsigned char const*, unsigned char const*, unsigned char*, unsigned
   long, unsigned long, unsigned char*) */byte *meshopt::decodeVertexBlock(uchar *param_1, uchar *param_2, uchar *param_3, ulong param_4, ulong param_5, uchar *param_6) {
   uint uVar1;
   byte *pbVar2;
   uchar uVar3;
   byte bVar4;
   byte bVar5;
   ulong uVar6;
   byte bVar7;
   ulong uVar8;
   byte bVar9;
   ulong uVar10;
   uchar *puVar11;
   ulong uVar12;
   ulong uVar13;
   byte *pbVar14;
   byte *pbVar15;
   long in_FS_OFFSET;
   byte local_2148[256];
   uchar local_2048[8200];
   long local_40;
   uVar12 = param_4 + 0xf & 0xfffffffffffffff0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_5 == 0) {
      LAB_0010021c:memcpy(param_3, local_2048, param_4 * param_5);
      memcpy(param_6, local_2048 + ( param_4 - 1 ) * param_5, param_5);
   }
 else {
      uVar13 = ( param_4 + 0xf >> 4 ) + 3 >> 2;
      if (uVar13 <= ( ulong )((long)param_2 - (long)param_1)) {
         pbVar15 = param_1 + uVar13;
         if (uVar12 == 0) {
            if (pbVar15 != (byte*)0x0) {
               uVar10 = 0;
               uVar3 = *param_6;
               if (param_4 == 0) goto LAB_0010020b;
               goto LAB_0010019b;
            }

         }
 else {
            uVar10 = 0;
            LAB_001000a0:if (0x17 < ( ulong )((long)param_2 - (long)pbVar15)) {
               pbVar2 = local_2148;
               uVar8 = 0;
               while (true) {
                  uVar1 = (int)(uint)param_1[uVar8 >> 6] >> ( ( byte )(uVar8 >> 3) & 6 ) & 3;
                  if (uVar1 == 2) {
                     bVar7 = *pbVar15;
                     bVar9 = bVar7 >> 4;
                     bVar4 = pbVar15[8];
                     if (bVar9 != 0xf) {
                        bVar4 = bVar9;
                     }

                     *pbVar2 = bVar4;
                     bVar7 = bVar7 & 0xf;
                     pbVar14 = pbVar15 + ( ulong )(bVar9 == 0xf) + 8;
                     bVar4 = *pbVar14;
                     if (bVar7 != 0xf) {
                        bVar4 = bVar7;
                     }

                     pbVar14 = pbVar14 + ( bVar7 == 0xf );
                     bVar7 = pbVar15[1];
                     pbVar2[1] = bVar4;
                     bVar9 = bVar7 >> 4;
                     bVar4 = *pbVar14;
                     if (bVar9 != 0xf) {
                        bVar4 = bVar9;
                     }

                     pbVar2[2] = bVar4;
                     bVar7 = bVar7 & 0xf;
                     for (int i = 0; i < 6; i++) {
                        pbVar14 = pbVar14 + ( bVar9 == 15 );
                        bVar4 = *pbVar14;
                        if (bVar7 != 15) {
                           bVar4 = bVar7;
                        }

                        pbVar14 = pbVar14 + ( bVar7 == 15 );
                        bVar7 = pbVar15[( i + 2 )];
                        pbVar2[( 2*i + 3 )] = bVar4;
                        bVar9 = bVar7 >> 4;
                        bVar4 = *pbVar14;
                        if (bVar9 != 15) {
                           bVar4 = bVar9;
                        }

                        pbVar2[( 2*i + 4 )] = bVar4;
                        bVar7 = bVar7 & 15;
                     }

                     bVar4 = pbVar14[bVar9 == 0xf];
                     if (bVar7 != 0xf) {
                        bVar4 = bVar7;
                     }

                     pbVar15 = pbVar14 + ( bVar9 == 0xf ) + ( bVar7 == 0xf );
                     pbVar2[0xf] = bVar4;
                  }
 else {
                     uVar6 = 0x100;
                     if (0xff < uVar8) {
                        uVar6 = uVar8;
                     }

                     if (uVar1 == 3) {
                        pbVar2 = (byte*)__memcpy_chk(pbVar2, pbVar15, 0x10);
                        pbVar15 = pbVar15 + 0x10;
                     }
 else if (uVar1 == 1) {
                        bVar7 = *pbVar15;
                        bVar9 = bVar7 >> 6;
                        bVar4 = pbVar15[4];
                        if (bVar9 != 3) {
                           bVar4 = bVar9;
                        }

                        *pbVar2 = bVar4;
                        bVar5 = ( byte )(bVar7 * '\x04') >> 6;
                        pbVar14 = pbVar15 + ( ulong )(bVar9 == 3) + 4;
                        bVar4 = *pbVar14;
                        if (bVar5 != 3) {
                           bVar4 = bVar5;
                        }

                        bVar9 = ( byte )(bVar7 << 4) >> 6;
                        pbVar14 = pbVar14 + ( bVar5 == 3 );
                        pbVar2[1] = bVar4;
                        bVar4 = *pbVar14;
                        if (bVar9 != 3) {
                           bVar4 = bVar9;
                        }

                        bVar7 = bVar7 & 3;
                        pbVar14 = pbVar14 + ( bVar9 == 3 );
                        pbVar2[2] = bVar4;
                        bVar4 = *pbVar14;
                        if (bVar7 != 3) {
                           bVar4 = bVar7;
                        }

                        pbVar14 = pbVar14 + ( bVar7 == 3 );
                        bVar7 = pbVar15[1];
                        pbVar2[3] = bVar4;
                        bVar9 = bVar7 >> 6;
                        bVar4 = *pbVar14;
                        if (bVar9 != 3) {
                           bVar4 = bVar9;
                        }

                        pbVar2[4] = bVar4;
                        bVar5 = ( byte )(bVar7 * '\x04') >> 6;
                        pbVar14 = pbVar14 + ( bVar9 == 3 );
                        bVar4 = *pbVar14;
                        if (bVar5 != 3) {
                           bVar4 = bVar5;
                        }

                        bVar9 = ( byte )(bVar7 << 4) >> 6;
                        pbVar14 = pbVar14 + ( bVar5 == 3 );
                        pbVar2[5] = bVar4;
                        bVar4 = *pbVar14;
                        if (bVar9 != 3) {
                           bVar4 = bVar9;
                        }

                        pbVar2[6] = bVar4;
                        bVar7 = bVar7 & 3;
                        pbVar14 = pbVar14 + ( bVar9 == 3 );
                        bVar4 = *pbVar14;
                        if (bVar7 != 3) {
                           bVar4 = bVar7;
                        }

                        pbVar14 = pbVar14 + ( bVar7 == 3 );
                        bVar7 = pbVar15[2];
                        pbVar2[7] = bVar4;
                        bVar9 = bVar7 >> 6;
                        bVar4 = *pbVar14;
                        if (bVar9 != 3) {
                           bVar4 = bVar9;
                        }

                        pbVar2[8] = bVar4;
                        bVar5 = ( byte )(bVar7 * '\x04') >> 6;
                        pbVar14 = pbVar14 + ( bVar9 == 3 );
                        bVar4 = *pbVar14;
                        if (bVar5 != 3) {
                           bVar4 = bVar5;
                        }

                        bVar9 = ( byte )(bVar7 << 4) >> 6;
                        pbVar14 = pbVar14 + ( bVar5 == 3 );
                        pbVar2[9] = bVar4;
                        bVar4 = *pbVar14;
                        if (bVar9 != 3) {
                           bVar4 = bVar9;
                        }

                        pbVar2[10] = bVar4;
                        bVar7 = bVar7 & 3;
                        pbVar14 = pbVar14 + ( bVar9 == 3 );
                        bVar4 = *pbVar14;
                        if (bVar7 != 3) {
                           bVar4 = bVar7;
                        }

                        pbVar14 = pbVar14 + ( bVar7 == 3 );
                        bVar7 = pbVar15[3];
                        pbVar2[0xb] = bVar4;
                        bVar9 = bVar7 >> 6;
                        bVar4 = *pbVar14;
                        if (bVar9 != 3) {
                           bVar4 = bVar9;
                        }

                        pbVar2[0xc] = bVar4;
                        bVar5 = ( byte )(bVar7 * '\x04') >> 6;
                        pbVar14 = pbVar14 + ( bVar9 == 3 );
                        bVar4 = *pbVar14;
                        if (bVar5 != 3) {
                           bVar4 = bVar5;
                        }

                        bVar9 = ( byte )(bVar7 << 4) >> 6;
                        pbVar14 = pbVar14 + ( bVar5 == 3 );
                        pbVar2[0xd] = bVar4;
                        bVar4 = *pbVar14;
                        if (bVar9 != 3) {
                           bVar4 = bVar9;
                        }

                        bVar7 = bVar7 & 3;
                        pbVar2[0xe] = bVar4;
                        bVar4 = pbVar14[bVar9 == 3];
                        if (bVar7 != 3) {
                           bVar4 = bVar7;
                        }

                        pbVar2[0xf] = bVar4;
                        pbVar15 = pbVar14 + ( bVar9 == 3 ) + ( bVar7 == 3 );
                     }
 else {
                        pbVar2 = (byte*)__memset_chk(pbVar2, 0, 0x10, uVar6 - uVar8);
                     }

                  }

                  if (uVar12 <= uVar8 + 0x10) break;
                  uVar8 = uVar8 + 0x10;
                  pbVar2 = pbVar2 + 0x10;
                  if (( ulong )((long)param_2 - (long)pbVar15) < 0x18) goto LAB_00100630;
               }
;
               if (pbVar15 != (byte*)0x0) {
                  uVar3 = param_6[uVar10];
                  LAB_0010019b:while (true) {
                     pbVar14 = local_2148;
                     pbVar2 = pbVar14 + param_4;
                     puVar11 = local_2048 + uVar10;
                     do {
                        bVar7 = *pbVar14;
                        pbVar14 = pbVar14 + 1;
                        uVar3 = uVar3 + ( -(bVar7 & 1) ^ bVar7 >> 1 );
                        *puVar11 = uVar3;
                        puVar11 = puVar11 + param_5;
                     }
 while ( pbVar2 != pbVar14 );
                     uVar10 = uVar10 + 1;
                     param_1 = pbVar15;
                     if (param_5 == uVar10) break;
                     if (( ulong )((long)param_2 - (long)pbVar15) < uVar13) goto LAB_00100630;
                     while (true) {
                        pbVar15 = param_1 + uVar13;
                        if (uVar12 != 0) goto LAB_001000a0;
                        uVar3 = param_6[uVar10];
                        if (param_4 != 0) break;
                        LAB_0010020b:uVar10 = uVar10 + 1;
                        param_1 = pbVar15;
                        if (param_5 == uVar10) goto LAB_0010021c;
                     }
;
                  }
;
                  goto LAB_0010021c;
               }

            }

         }

      }

      LAB_00100630:param_1 = (byte*)0x0;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* meshopt::decodeBytesGroupSimd(unsigned char const*, unsigned char*, int) */uchar *meshopt::decodeBytesGroupSimd(uchar *param_1, uchar *param_2, int param_3) {
   undefined8 uVar1;
   uint uVar2;
   ulong uVar3;
   undefined1 auVar4[16];
   undefined4 uVar5;
   byte bVar6;
   uint uVar7;
   ulong uVar8;
   byte bVar12;
   byte bVar13;
   byte bVar14;
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 uVar15;
   ushort uVar16;
   undefined1 uVar17;
   ushort uVar34;
   undefined1 auVar18[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar33[16];
   undefined1 auVar35[16];
   undefined1 auVar36[16];
   undefined1 auVar19[16];
   undefined1 auVar27[16];
   undefined1 auVar20[16];
   undefined1 auVar28[16];
   undefined1 auVar21[16];
   undefined1 auVar29[16];
   undefined1 auVar22[16];
   undefined1 auVar30[16];
   undefined1 auVar23[16];
   undefined1 auVar31[16];
   undefined1 auVar24[16];
   undefined1 auVar32[16];
   if (param_3 == 2) {
      uVar3 = *(ulong*)param_1;
      auVar26._0_2_ = (ushort)uVar3 >> 4;
      uVar34 = ( ushort )(uVar3 >> 0x34);
      auVar28._0_10_ = (unkuint10)uVar34 << 0x30;
      auVar30._0_12_ = ZEXT212(uVar34) << 0x30;
      auVar32._0_14_ = ZEXT214(uVar34) << 0x30;
      uVar8 = uVar3 >> 1 & uVar3;
      bVar6 = ( byte )(uVar3 >> 0x38);
      auVar32[0xe] = bVar6 >> 4;
      auVar32[0xf] = bVar6;
      auVar31._14_2_ = auVar32._14_2_;
      auVar31._0_13_ = ZEXT213(uVar34) << 0x30;
      auVar31[0xd] = (char)( uVar3 >> 0x30 );
      auVar30._13_3_ = auVar31._13_3_;
      auVar30[0xc] = (char)uVar34;
      bVar6 = ( byte )(uVar3 >> 0x28);
      auVar29._12_4_ = auVar30._12_4_;
      auVar29._0_11_ = ZEXT211(uVar34) << 0x30;
      auVar29[0xb] = bVar6;
      auVar28._11_5_ = auVar29._11_5_;
      auVar28[10] = bVar6 >> 4;
      auVar27._10_6_ = auVar28._10_6_;
      auVar27._0_9_ = (unkuint9)uVar34 << 0x30;
      auVar27[9] = (char)( uVar3 >> 0x20 );
      bVar6 = ( byte )(uVar3 >> 0x18);
      auVar26._8_8_ = ( undefined8 )(CONCAT73(auVar27._9_7_, CONCAT12((char)( ( ushort )(uVar3 >> 0x20) >> 4 ), uVar34)) >> 0x10);
      auVar26[7] = bVar6;
      auVar26[6] = bVar6 >> 4;
      auVar26[5] = (char)( uVar3 >> 0x10 );
      auVar26[4] = (char)( ( ushort )(uVar3 >> 0x10) >> 4 );
      bVar6 = ( byte )(uVar3 >> 8);
      auVar26[3] = bVar6;
      auVar26[2] = bVar6 >> 4;
      auVar33._2_14_ = auVar26._2_14_;
      auVar33[0] = (undefined1)auVar26._0_2_;
      auVar33[1] = (char)uVar3;
      auVar9[1] = UNK_00102181;
      auVar9[0] = _LC3;
      auVar9[2] = UNK_00102182;
      auVar9[3] = UNK_00102183;
      auVar9[4] = UNK_00102184;
      auVar9[5] = UNK_00102185;
      auVar9[6] = UNK_00102186;
      auVar9[7] = UNK_00102187;
      auVar9[8] = UNK_00102188;
      auVar9[9] = UNK_00102189;
      auVar9[10] = UNK_0010218a;
      auVar9[0xb] = UNK_0010218b;
      auVar9[0xc] = UNK_0010218c;
      auVar9[0xd] = UNK_0010218d;
      auVar9[0xe] = UNK_0010218e;
      auVar9[0xf] = UNK_0010218f;
      auVar33 = auVar33 & auVar9;
      auVar11[0] = -(auVar33[0] == _LC3);
      auVar11[1] = -(auVar33[1] == UNK_00102181);
      auVar11[2] = -(auVar33[2] == UNK_00102182);
      auVar11[3] = -(auVar33[3] == UNK_00102183);
      auVar11[4] = -(auVar33[4] == UNK_00102184);
      auVar11[5] = -(auVar33[5] == UNK_00102185);
      auVar11[6] = -(auVar33[6] == UNK_00102186);
      auVar11[7] = -(auVar33[7] == UNK_00102187);
      auVar11[8] = -(auVar33[8] == UNK_00102188);
      auVar11[9] = -(auVar33[9] == UNK_00102189);
      auVar11[10] = -(auVar33[10] == UNK_0010218a);
      auVar11[0xb] = -(auVar33[0xb] == UNK_0010218b);
      auVar11[0xc] = -(auVar33[0xc] == UNK_0010218c);
      auVar11[0xd] = -(auVar33[0xd] == UNK_0010218d);
      auVar11[0xe] = -(auVar33[0xe] == UNK_0010218e);
      auVar11[0xf] = -(auVar33[0xf] == UNK_0010218f);
      bVar6 = SUB161(auVar11 >> 7, 0) & 1 | ( SUB161(auVar11 >> 0xf, 0) & 1 ) << 1 | ( SUB161(auVar11 >> 0x17, 0) & 1 ) << 2 | ( SUB161(auVar11 >> 0x1f, 0) & 1 ) << 3 | ( SUB161(auVar11 >> 0x27, 0) & 1 ) << 4 | ( SUB161(auVar11 >> 0x2f, 0) & 1 ) << 5 | ( SUB161(auVar11 >> 0x37, 0) & 1 ) << 6 | SUB161(auVar11 >> 0x3f, 0) << 7;
      uVar1 = ( &kDecodeBytesGroupShuffle )[( byte )(SUB161(auVar11 >> 0x47, 0) & 1 | ( byte )(( ushort )(( ushort )(SUB161(auVar11 >> 0x4f, 0) & 1) << 9) >> 8) | ( byte )(( ushort )(( ushort )(SUB161(auVar11 >> 0x57, 0) & 1) << 10) >> 8) | ( byte )(( ushort )(( ushort )(SUB161(auVar11 >> 0x5f, 0) & 1) << 0xb) >> 8) | ( byte )(( ushort )(( ushort )(SUB161(auVar11 >> 0x67, 0) & 1) << 0xc) >> 8) | ( byte )(( ushort )(( ushort )(SUB161(auVar11 >> 0x6f, 0) & 1) << 0xd) >> 8) | ( byte )(( ushort )(( ushort )(SUB161(auVar11 >> 0x77, 0) & 1) << 0xe) >> 8) | ( byte )(( ushort )(( ushort )(auVar11[0xf] >> 7) << 0xf) >> 8))];
      auVar9 = pshufb(ZEXT116(( byte )(&kDecodeBytesGroupCount)[bVar6]), (undefined1[16])0x0);
      auVar36[9] = auVar9[1] + (char)( (ulong)uVar1 >> 8 );
      auVar36[8] = auVar9[0] + (char)uVar1;
      for (int i = 0; i < 6; i++) {
         auVar36[( i + 10 )] = auVar9[( i + 2 )] + (char)( (ulong)uVar1 >> ( 8*i + 16 ) );
      }

      auVar36._0_8_ = ( &kDecodeBytesGroupShuffle )[bVar6];
      auVar9 = pshufb(*(undefined1(*) [16])( param_1 + 8 ), auVar36);
      *(undefined1(*) [16])param_2 = ~auVar11 & auVar33 | auVar9;
      return param_1 + ( ( uVar8 >> 2 & uVar8 & 0x1111111111111111 ) * 0x1111111111111111 >> 0x3c ) + 8;
   }

   if (param_3 != 3) {
      auVar9 = (undefined1[16])0x0;
      if (param_3 == 1) {
         uVar2 = *(uint*)param_1;
         uVar16 = (ushort)uVar2 >> 4;
         uVar7 = uVar2 >> 1 & uVar2;
         bVar14 = ( byte )(uVar2 >> 0x18);
         uVar34 = CONCAT11(bVar14, bVar14 >> 4);
         bVar13 = ( byte )(uVar2 >> 0x10);
         uVar17 = ( undefined1 )(ushort)(uVar2 >> 0x14);
         uVar5 = CONCAT31(CONCAT21(uVar34, bVar13), uVar17);
         bVar12 = ( byte )(uVar2 >> 8);
         bVar6 = (byte)uVar2;
         uVar15 = (undefined1)uVar16;
         auVar18._0_2_ = CONCAT11(bVar6, uVar15) >> 2;
         uVar34 = uVar34 >> 2;
         auVar20._0_10_ = (unkuint10)uVar34 << 0x30;
         auVar22._0_12_ = ZEXT212(uVar34) << 0x30;
         auVar24._0_14_ = ZEXT214(uVar34) << 0x30;
         auVar24[0xe] = bVar14 >> 2;
         auVar24[0xf] = bVar14;
         auVar23._14_2_ = auVar24._14_2_;
         auVar23._0_13_ = ZEXT213(uVar34) << 0x30;
         auVar23[0xd] = bVar14 >> 4;
         auVar22._13_3_ = auVar23._13_3_;
         auVar22[0xc] = (char)uVar34;
         auVar21._12_4_ = auVar22._12_4_;
         auVar21._0_11_ = ZEXT211(uVar34) << 0x30;
         auVar21[0xb] = bVar13;
         auVar20._11_5_ = auVar21._11_5_;
         auVar20[10] = bVar13 >> 2;
         auVar19._10_6_ = auVar20._10_6_;
         auVar19._0_9_ = (unkuint9)uVar34 << 0x30;
         auVar19[9] = uVar17;
         auVar18._8_8_ = ( undefined8 )(CONCAT73(auVar19._9_7_, CONCAT12((char)( (ushort)uVar5 >> 2 ), uVar34)) >> 0x10);
         auVar18[7] = bVar12;
         auVar18[6] = bVar12 >> 2;
         auVar18[5] = bVar12 >> 4;
         auVar18[4] = (char)( ( ushort )(CONCAT53(CONCAT41(uVar5, bVar12), CONCAT12(bVar12 >> 4, uVar16)) >> 0x10) >> 2 );
         auVar18[3] = bVar6;
         auVar18[2] = bVar6 >> 2;
         auVar25._2_14_ = auVar18._2_14_;
         auVar25[0] = (undefined1)auVar18._0_2_;
         auVar25[1] = uVar15;
         auVar4[1] = UNK_00102171;
         auVar4[0] = _LC1;
         auVar4[2] = UNK_00102172;
         auVar4[3] = UNK_00102173;
         auVar4[4] = UNK_00102174;
         auVar4[5] = UNK_00102175;
         auVar4[6] = UNK_00102176;
         auVar4[7] = UNK_00102177;
         auVar4[8] = UNK_00102178;
         auVar4[9] = UNK_00102179;
         auVar4[10] = UNK_0010217a;
         auVar4[0xb] = UNK_0010217b;
         auVar4[0xc] = UNK_0010217c;
         auVar4[0xd] = UNK_0010217d;
         auVar4[0xe] = UNK_0010217e;
         auVar4[0xf] = UNK_0010217f;
         auVar25 = auVar25 & auVar4;
         auVar10[0] = -(auVar25[0] == _LC1);
         auVar10[1] = -(auVar25[1] == UNK_00102171);
         auVar10[2] = -(auVar25[2] == UNK_00102172);
         auVar10[3] = -(auVar25[3] == UNK_00102173);
         auVar10[4] = -(auVar25[4] == UNK_00102174);
         auVar10[5] = -(auVar25[5] == UNK_00102175);
         auVar10[6] = -(auVar25[6] == UNK_00102176);
         auVar10[7] = -(auVar25[7] == UNK_00102177);
         auVar10[8] = -(auVar25[8] == UNK_00102178);
         auVar10[9] = -(auVar25[9] == UNK_00102179);
         auVar10[10] = -(auVar25[10] == UNK_0010217a);
         auVar10[0xb] = -(auVar25[0xb] == UNK_0010217b);
         auVar10[0xc] = -(auVar25[0xc] == UNK_0010217c);
         auVar10[0xd] = -(auVar25[0xd] == UNK_0010217d);
         auVar10[0xe] = -(auVar25[0xe] == UNK_0010217e);
         auVar10[0xf] = -(auVar25[0xf] == UNK_0010217f);
         bVar6 = SUB161(auVar10 >> 7, 0) & 1 | ( SUB161(auVar10 >> 0xf, 0) & 1 ) << 1 | ( SUB161(auVar10 >> 0x17, 0) & 1 ) << 2 | ( SUB161(auVar10 >> 0x1f, 0) & 1 ) << 3 | ( SUB161(auVar10 >> 0x27, 0) & 1 ) << 4 | ( SUB161(auVar10 >> 0x2f, 0) & 1 ) << 5 | ( SUB161(auVar10 >> 0x37, 0) & 1 ) << 6 | SUB161(auVar10 >> 0x3f, 0) << 7;
         uVar1 = ( &kDecodeBytesGroupShuffle )[( byte )(SUB161(auVar10 >> 0x47, 0) & 1 | ( byte )(( ushort )(( ushort )(SUB161(auVar10 >> 0x4f, 0) & 1) << 9) >> 8) | ( byte )(( ushort )(( ushort )(SUB161(auVar10 >> 0x57, 0) & 1) << 10) >> 8) | ( byte )(( ushort )(( ushort )(SUB161(auVar10 >> 0x5f, 0) & 1) << 0xb) >> 8) | ( byte )(( ushort )(( ushort )(SUB161(auVar10 >> 0x67, 0) & 1) << 0xc) >> 8) | ( byte )(( ushort )(( ushort )(SUB161(auVar10 >> 0x6f, 0) & 1) << 0xd) >> 8) | ( byte )(( ushort )(( ushort )(SUB161(auVar10 >> 0x77, 0) & 1) << 0xe) >> 8) | ( byte )(( ushort )(( ushort )(auVar10[0xf] >> 7) << 0xf) >> 8))];
         auVar9 = pshufb(ZEXT116(( byte )(&kDecodeBytesGroupCount)[bVar6]), (undefined1[16])0x0);
         auVar35[9] = auVar9[1] + (char)( (ulong)uVar1 >> 8 );
         auVar35[8] = auVar9[0] + (char)uVar1;
         for (int i = 0; i < 6; i++) {
            auVar35[( i + 10 )] = auVar9[( i + 2 )] + (char)( (ulong)uVar1 >> ( 8*i + 16 ) );
         }

         auVar35._0_8_ = ( &kDecodeBytesGroupShuffle )[bVar6];
         auVar9 = pshufb(*(undefined1(*) [16])( param_1 + 4 ), auVar35);
         auVar9 = ~auVar10 & auVar25 | auVar9;
         param_1 = param_1 + ( ( ( (ulong)uVar7 << 0x1e | ( ulong )(uVar7 & 0x3fffffff) ) & 0x1111111111111111 ) * 0x1111111111111111 >> 0x3c ) + 4;
      }

      *(undefined1(*) [16])param_2 = auVar9;
      return param_1;
   }

   uVar1 = *(undefined8*)( param_1 + 8 );
   *(undefined8*)param_2 = *(undefined8*)param_1;
   *(undefined8*)( param_2 + 8 ) = uVar1;
   return param_1 + 0x10;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* meshopt::decodeVertexBlockSimd(unsigned char const*, unsigned char const*, unsigned char*,
   unsigned long, unsigned long, unsigned char*) */uchar *meshopt::decodeVertexBlockSimd(uchar *param_1, uchar *param_2, uchar *param_3, ulong param_4, ulong param_5, uchar *param_6) {
   ulong uVar1;
   uchar *puVar2;
   ulong uVar3;
   undefined4 *puVar4;
   long lVar5;
   uint uVar6;
   ulong uVar7;
   ulong uVar8;
   uchar *puVar9;
   uchar *puVar10;
   ulong uVar11;
   ulong uVar12;
   long in_FS_OFFSET;
   uchar uVar13;
   uchar uVar15;
   uchar uVar16;
   uchar uVar17;
   undefined1 auVar14[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   char cVar24;
   char cVar25;
   char cVar26;
   char cVar27;
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   char cVar30;
   char cVar31;
   char cVar32;
   char cVar33;
   char cVar34;
   char cVar36;
   char cVar37;
   char cVar38;
   undefined1 auVar35[16];
   undefined1 auVar39[16];
   uchar local_2448[1024];
   undefined4 local_2048[2050];
   long local_40;
   uVar12 = param_4 + 0xf & 0xfffffffffffffff0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_5 == 0) {
      LAB_00100cfc:memcpy(param_3, local_2048, param_4 * param_5);
      memcpy(param_6, (undefined4*)( (long)local_2048 + ( param_4 - 1 ) * param_5 ), param_5);
      LAB_00100a5e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return param_1;
   }

   uVar8 = 0;
   uVar1 = ( param_4 + 0xf >> 4 ) + 3 >> 2;
   auVar28 = __LC5;
   auVar29 = __LC6;
   LAB_001008fb:if (uVar1 <= ( ulong )((long)param_2 - (long)param_1)) {
      lVar5 = 4;
      puVar10 = local_2448;
      do {
         puVar2 = param_1 + uVar1;
         puVar9 = puVar10;
         if (uVar12 < 0x40) {
            uVar11 = 0;
            LAB_001009e9:if (uVar11 < uVar12) {
               uVar3 = (long)param_2 - (long)puVar2;
               goto joined_r0x001009f8;
            }

         }
 else {
            uVar3 = (long)param_2 - (long)puVar2;
            if (0x5f < uVar3) {
               uVar3 = 0x40;
               do {
                  uVar11 = uVar3;
                  uVar3 = (ulong)param_1[uVar11 - 0x40 >> 6];
                  puVar2 = (uchar*)decodeBytesGroupSimd(puVar2, puVar10, param_1[uVar11 - 0x40 >> 6] & 3);
                  puVar2 = (uchar*)decodeBytesGroupSimd(puVar2, puVar10 + 0x10, ( uint )(( uVar3 & 0xffffffff ) >> 2) & 3);
                  uVar6 = ( uint )(uVar3 >> 6) & 3;
                  puVar2 = (uchar*)decodeBytesGroupSimd(puVar2, puVar10 + 0x20, ( uint )(( uVar3 & 0xffffffff ) >> 4) & 3);
                  uVar3 = uVar11 + 0x40;
                  puVar2 = (uchar*)decodeBytesGroupSimd(puVar2, puVar10 + 0x30, uVar6 & 0xff);
                  if (uVar12 < uVar3) break;
                  puVar10 = puVar10 + 0x40;
               }
 while ( 0x5f < ( ulong )((long)param_2 - (long)puVar2) );
               goto LAB_001009e9;
            }

            uVar11 = 0;
            joined_r0x001009f8:while (true) {
               if (uVar3 < 0x18) goto LAB_00100a5c;
               uVar7 = uVar11 + 0x10;
               puVar2 = (uchar*)decodeBytesGroupSimd(puVar2, puVar9 + uVar11, (int)(uint)param_1[uVar11 >> 6] >> ( ( byte )(uVar11 >> 3) & 6 ) & 3);
               if (uVar12 <= uVar7) break;
               uVar3 = (long)param_2 - (long)puVar2;
               uVar11 = uVar7;
            }
;
         }

         param_1 = puVar2;
         if (param_1 == (uchar*)0x0) break;
         lVar5 = lVar5 + -1;
         if (lVar5 == 0) goto LAB_00100a90;
         puVar10 = puVar9 + uVar12;
         if (( ulong )((long)param_2 - (long)param_1) < uVar1) break;
      }
 while ( true );
   }

   LAB_00100a5c:param_1 = (uchar*)0x0;
   goto LAB_00100a5e;
   LAB_00100a90:puVar10 = param_6 + uVar8;
   uVar13 = *puVar10;
   uVar15 = puVar10[1];
   uVar16 = puVar10[2];
   uVar17 = puVar10[3];
   if (uVar12 != 0) {
      uVar11 = 0;
      puVar4 = (undefined4*)( (long)local_2048 + uVar8 );
      do {
         auVar14 = *(undefined1(*) [16])( local_2448 + uVar11 );
         auVar19 = *(undefined1(*) [16])( local_2448 + uVar11 + uVar12 );
         auVar20 = *(undefined1(*) [16])( local_2448 + uVar11 + uVar12 * 3 );
         auVar23 = *(undefined1(*) [16])( local_2448 + uVar11 + uVar12 * 2 );
         uVar11 = uVar11 + 0x10;
         auVar39 = auVar19 & auVar29;
         auVar21[1] = -auVar39[1];
         auVar21[0] = -auVar39[0];
         for (int i = 0; i < 4; i++) {
            auVar21[( 3*i + 2 )] = -auVar39[2];
            auVar21[( 3*i + 3 )] = -auVar39[3];
            auVar21[( 3*i + 4 )] = -auVar39[4];
         }

         auVar21[0xe] = -auVar39[0xe];
         auVar21[0xf] = -auVar39[0xf];
         auVar18 = auVar14 & auVar29;
         auVar39._0_2_ = auVar14._0_2_ >> 1;
         auVar39._2_2_ = auVar14._2_2_ >> 1;
         auVar39._4_2_ = auVar14._4_2_ >> 1;
         auVar39._6_2_ = auVar14._6_2_ >> 1;
         auVar39._8_2_ = auVar14._8_2_ >> 1;
         auVar39._10_2_ = auVar14._10_2_ >> 1;
         auVar39._12_2_ = auVar14._12_2_ >> 1;
         auVar39._14_2_ = auVar14._14_2_ >> 1;
         auVar14[1] = -auVar18[1];
         auVar14[0] = -auVar18[0];
         for (int i = 0; i < 4; i++) {
            auVar14[( 3*i + 2 )] = -auVar18[2];
            auVar14[( 3*i + 3 )] = -auVar18[3];
            auVar14[( 3*i + 4 )] = -auVar18[4];
         }

         auVar14[0xe] = -auVar18[0xe];
         auVar14[0xf] = -auVar18[0xf];
         auVar18._0_2_ = auVar19._0_2_ >> 1;
         auVar18._2_2_ = auVar19._2_2_ >> 1;
         auVar18._4_2_ = auVar19._4_2_ >> 1;
         auVar18._6_2_ = auVar19._6_2_ >> 1;
         auVar18._8_2_ = auVar19._8_2_ >> 1;
         auVar18._10_2_ = auVar19._10_2_ >> 1;
         auVar18._12_2_ = auVar19._12_2_ >> 1;
         auVar18._14_2_ = auVar19._14_2_ >> 1;
         auVar35 = auVar20 & auVar29;
         auVar14 = auVar39 & auVar28 ^ auVar14;
         auVar21 = auVar18 & auVar28 ^ auVar21;
         auVar39 = auVar23 & auVar29;
         auVar19._0_2_ = auVar20._0_2_ >> 1;
         auVar19._2_2_ = auVar20._2_2_ >> 1;
         auVar19._4_2_ = auVar20._4_2_ >> 1;
         auVar19._6_2_ = auVar20._6_2_ >> 1;
         auVar19._8_2_ = auVar20._8_2_ >> 1;
         auVar19._10_2_ = auVar20._10_2_ >> 1;
         auVar19._12_2_ = auVar20._12_2_ >> 1;
         auVar19._14_2_ = auVar20._14_2_ >> 1;
         auVar22._0_2_ = auVar23._0_2_ >> 1;
         auVar22._2_2_ = auVar23._2_2_ >> 1;
         auVar22._4_2_ = auVar23._4_2_ >> 1;
         auVar22._6_2_ = auVar23._6_2_ >> 1;
         auVar22._8_2_ = auVar23._8_2_ >> 1;
         auVar22._10_2_ = auVar23._10_2_ >> 1;
         auVar22._12_2_ = auVar23._12_2_ >> 1;
         auVar22._14_2_ = auVar23._14_2_ >> 1;
         auVar20[1] = -auVar35[1];
         auVar20[0] = -auVar35[0];
         for (int i = 0; i < 4; i++) {
            auVar20[( 3*i + 2 )] = -auVar35[2];
            auVar20[( 3*i + 3 )] = -auVar35[3];
            auVar20[( 3*i + 4 )] = -auVar35[4];
         }

         auVar20[0xe] = -auVar35[0xe];
         auVar20[0xf] = -auVar35[0xf];
         auVar20 = auVar19 & auVar28 ^ auVar20;
         auVar23[1] = -auVar39[1];
         auVar23[0] = -auVar39[0];
         for (int i = 0; i < 4; i++) {
            auVar23[( 3*i + 2 )] = -auVar39[2];
            auVar23[( 3*i + 3 )] = -auVar39[3];
            auVar23[( 3*i + 4 )] = -auVar39[4];
         }

         auVar23[0xe] = -auVar39[0xe];
         auVar23[0xf] = -auVar39[0xf];
         auVar23 = auVar22 & auVar28 ^ auVar23;
         cVar30 = uVar13 + auVar14[0];
         cVar31 = uVar15 + auVar21[0];
         cVar32 = uVar16 + auVar23[0];
         cVar33 = uVar17 + auVar20[0];
         cVar34 = auVar14[1] + cVar30;
         cVar36 = auVar21[1] + cVar31;
         cVar37 = auVar23[1] + cVar32;
         cVar38 = auVar20[1] + cVar33;
         *puVar4 = CONCAT13(cVar33, CONCAT12(cVar32, CONCAT11(cVar31, cVar30)));
         cVar30 = auVar14[2] + cVar34;
         cVar31 = auVar21[2] + cVar36;
         cVar32 = auVar23[2] + cVar37;
         cVar33 = auVar20[2] + cVar38;
         *(uint*)( (long)puVar4 + param_5 ) = CONCAT13(cVar38, CONCAT12(cVar37, CONCAT11(cVar36, cVar34)));
         cVar34 = auVar14[3] + cVar30;
         cVar37 = auVar21[3] + cVar31;
         cVar24 = auVar23[3] + cVar32;
         cVar26 = auVar20[3] + cVar33;
         *(uint*)( (long)puVar4 + param_5 * 2 ) = CONCAT13(cVar33, CONCAT12(cVar32, CONCAT11(cVar31, cVar30)));
         *(uint*)( (long)puVar4 + param_5 * 3 ) = CONCAT13(cVar26, CONCAT12(cVar24, CONCAT11(cVar37, cVar34)));
         cVar34 = cVar34 + auVar14[4];
         cVar37 = cVar37 + auVar21[4];
         cVar24 = cVar24 + auVar23[4];
         cVar26 = cVar26 + auVar20[4];
         cVar30 = auVar14[5] + cVar34;
         cVar31 = auVar21[5] + cVar37;
         cVar32 = auVar23[5] + cVar24;
         cVar33 = auVar20[5] + cVar26;
         cVar36 = auVar14[6] + cVar30;
         cVar38 = auVar21[6] + cVar31;
         cVar25 = auVar23[6] + cVar32;
         cVar27 = auVar20[6] + cVar33;
         puVar4[param_5] = CONCAT13(cVar26, CONCAT12(cVar24, CONCAT11(cVar37, cVar34)));
         *(uint*)( (long)puVar4 + param_5 * 5 ) = CONCAT13(cVar33, CONCAT12(cVar32, CONCAT11(cVar31, cVar30)));
         cVar30 = auVar14[7] + cVar36;
         cVar31 = auVar21[7] + cVar38;
         cVar32 = auVar23[7] + cVar25;
         cVar33 = auVar20[7] + cVar27;
         *(uint*)( (long)puVar4 + param_5 * 6 ) = CONCAT13(cVar27, CONCAT12(cVar25, CONCAT11(cVar38, cVar36)));
         *(uint*)( (long)puVar4 + param_5 * 7 ) = CONCAT13(cVar33, CONCAT12(cVar32, CONCAT11(cVar31, cVar30)));
         cVar30 = cVar30 + auVar14[8];
         cVar31 = cVar31 + auVar21[8];
         cVar32 = cVar32 + auVar23[8];
         cVar33 = cVar33 + auVar20[8];
         cVar24 = auVar14[9] + cVar30;
         cVar25 = auVar21[9] + cVar31;
         cVar26 = auVar23[9] + cVar32;
         cVar27 = auVar20[9] + cVar33;
         puVar4[param_5 * 2] = CONCAT13(cVar33, CONCAT12(cVar32, CONCAT11(cVar31, cVar30)));
         cVar34 = auVar14[10] + cVar24;
         cVar36 = auVar21[10] + cVar25;
         cVar37 = auVar23[10] + cVar26;
         cVar38 = auVar20[10] + cVar27;
         *(uint*)( (long)puVar4 + param_5 * 9 ) = CONCAT13(cVar27, CONCAT12(cVar26, CONCAT11(cVar25, cVar24)));
         cVar30 = auVar14[0xb] + cVar34;
         cVar31 = auVar21[0xb] + cVar36;
         cVar32 = auVar23[0xb] + cVar37;
         cVar33 = auVar20[0xb] + cVar38;
         *(uint*)( (long)puVar4 + param_5 * 10 ) = CONCAT13(cVar38, CONCAT12(cVar37, CONCAT11(cVar36, cVar34)));
         *(uint*)( (long)puVar4 + param_5 * 0xb ) = CONCAT13(cVar33, CONCAT12(cVar32, CONCAT11(cVar31, cVar30)));
         cVar30 = cVar30 + auVar14[0xc];
         cVar31 = cVar31 + auVar21[0xc];
         cVar32 = cVar32 + auVar23[0xc];
         cVar33 = cVar33 + auVar20[0xc];
         cVar34 = auVar14[0xd] + cVar30;
         cVar36 = auVar21[0xd] + cVar31;
         cVar37 = auVar23[0xd] + cVar32;
         cVar38 = auVar20[0xd] + cVar33;
         puVar4[param_5 * 3] = CONCAT13(cVar33, CONCAT12(cVar32, CONCAT11(cVar31, cVar30)));
         cVar30 = auVar14[0xe] + cVar34;
         cVar31 = auVar21[0xe] + cVar36;
         cVar32 = auVar23[0xe] + cVar37;
         cVar33 = auVar20[0xe] + cVar38;
         *(uint*)( (long)puVar4 + param_5 * 0xd ) = CONCAT13(cVar38, CONCAT12(cVar37, CONCAT11(cVar36, cVar34)));
         uVar13 = auVar14[0xf] + cVar30;
         uVar15 = auVar21[0xf] + cVar31;
         uVar16 = auVar23[0xf] + cVar32;
         uVar17 = auVar20[0xf] + cVar33;
         *(uint*)( (long)puVar4 + param_5 * 0xe ) = CONCAT13(cVar33, CONCAT12(cVar32, CONCAT11(cVar31, cVar30)));
         puVar10 = (uchar*)( (long)puVar4 + param_5 * 0xf );
         *puVar10 = uVar13;
         puVar10[1] = uVar15;
         puVar10[2] = uVar16;
         puVar10[3] = uVar17;
         puVar4 = puVar4 + param_5 * 4;
      }
 while ( uVar11 < uVar12 );
   }

   uVar8 = uVar8 + 4;
   if (param_5 <= uVar8) goto LAB_00100cfc;
   goto LAB_001008fb;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */byte *meshopt_encodeVertexBuffer(byte *param_1, byte *param_2, long param_3, ulong param_4, byte *param_5) {
   byte bVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[15];
   undefined1 auVar4[14];
   undefined1 auVar5[15];
   undefined1 auVar6[15];
   undefined1 auVar7[15];
   undefined1 auVar8[13];
   undefined1 auVar9[13];
   uint5 uVar10;
   undefined1 auVar11[13];
   undefined1 auVar12[14];
   undefined1 auVar13[15];
   undefined1 auVar14[13];
   undefined1 auVar15[14];
   undefined1 auVar16[15];
   uint7 uVar17;
   undefined1 auVar18[15];
   undefined1 auVar19[15];
   undefined8 uVar20;
   undefined1 auVar21[15];
   unkuint9 Var22;
   undefined1 auVar23[11];
   undefined1 auVar24[13];
   undefined1 auVar25[14];
   undefined1 auVar26[15];
   undefined1 auVar27[15];
   uint6 uVar28;
   undefined1 *puVar29;
   uint uVar30;
   ulong uVar31;
   long lVar32;
   byte *pbVar33;
   ulong uVar34;
   undefined1(*pauVar35)[16];
   undefined1(*pauVar36)[16];
   byte *pbVar37;
   ulong uVar38;
   int iVar39;
   uint uVar40;
   long lVar41;
   uint uVar42;
   undefined1(*pauVar43)[16];
   byte *pbVar44;
   undefined1(*pauVar45)[16];
   ulong uVar46;
   ulong uVar47;
   int iVar48;
   undefined1(*pauVar49)[16];
   int iVar50;
   byte *__s;
   byte bVar51;
   byte *pbVar52;
   long in_FS_OFFSET;
   byte bVar53;
   char cVar54;
   undefined2 uVar55;
   undefined1 auVar56[16];
   undefined1 auVar57[16];
   ulong local_3d8;
   undefined1 local_348[16];
   undefined1 local_338[16];
   undefined1 local_328[16];
   undefined1 local_318[16];
   undefined1 local_308[16];
   undefined1 local_2f8[16];
   undefined1 local_2e8[16];
   undefined1 local_2d8[16];
   undefined1 local_2c8[16];
   undefined1 local_2b8[16];
   undefined1 local_2a8[16];
   undefined1 local_298[16];
   undefined1 local_288[16];
   undefined1 local_278[16];
   undefined1 local_268[16];
   undefined1 local_258[16];
   undefined1 local_248[16];
   undefined1 local_238[16];
   undefined1 local_228[16];
   undefined1 local_218[16];
   undefined1 local_208[16];
   undefined1 local_1f8[16];
   undefined1 local_1e8[16];
   undefined1 local_1d8[16];
   undefined1 local_1c8[16];
   undefined1 local_1b8[16];
   undefined1 local_1a8[16];
   undefined1 local_198[16];
   undefined1 local_188[16];
   undefined1 local_178[16];
   undefined1 local_168[16];
   undefined1 local_158[16];
   undefined8 local_148[33];
   long local_40;
   bVar53 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_5 + 1 <= param_2) {
      pbVar37 = param_1 + 1;
      local_348 = (undefined1[16])0x0;
      local_338 = (undefined1[16])0x0;
      *param_1 = meshopt::gEncodeVertexVersion | 0xa0;
      local_328 = (undefined1[16])0x0;
      local_318 = (undefined1[16])0x0;
      local_308 = (undefined1[16])0x0;
      local_2f8 = (undefined1[16])0x0;
      local_2e8 = (undefined1[16])0x0;
      local_2d8 = (undefined1[16])0x0;
      local_2c8 = (undefined1[16])0x0;
      local_2b8 = (undefined1[16])0x0;
      local_2a8 = (undefined1[16])0x0;
      local_298 = (undefined1[16])0x0;
      local_288 = (undefined1[16])0x0;
      local_278 = (undefined1[16])0x0;
      local_268 = (undefined1[16])0x0;
      local_258 = (undefined1[16])0x0;
      if (param_4 == 0) {
         local_248 = (undefined1[16])0x0;
         local_238 = (undefined1[16])0x0;
         local_228 = (undefined1[16])0x0;
         local_218 = (undefined1[16])0x0;
         local_208 = (undefined1[16])0x0;
         local_1f8 = (undefined1[16])0x0;
         local_1e8 = (undefined1[16])0x0;
         local_1d8 = (undefined1[16])0x0;
         local_1c8 = (undefined1[16])0x0;
         local_1b8 = (undefined1[16])0x0;
         local_1a8 = (undefined1[16])0x0;
         local_198 = (undefined1[16])0x0;
         local_188 = (undefined1[16])0x0;
         local_178 = (undefined1[16])0x0;
         local_168 = (undefined1[16])0x0;
         local_158 = (undefined1[16])0x0;
         __memcpy_chk(local_248, local_348, param_5);
      }
 else {
         __memcpy_chk(local_348, param_3, param_5, 0x100);
         local_248 = (undefined1[16])0x0;
         local_238 = (undefined1[16])0x0;
         local_228 = (undefined1[16])0x0;
         local_218 = (undefined1[16])0x0;
         local_208 = (undefined1[16])0x0;
         local_1f8 = (undefined1[16])0x0;
         local_1e8 = (undefined1[16])0x0;
         local_1d8 = (undefined1[16])0x0;
         local_1c8 = (undefined1[16])0x0;
         local_1b8 = (undefined1[16])0x0;
         local_1a8 = (undefined1[16])0x0;
         local_198 = (undefined1[16])0x0;
         local_188 = (undefined1[16])0x0;
         local_178 = (undefined1[16])0x0;
         local_168 = (undefined1[16])0x0;
         local_158 = (undefined1[16])0x0;
         __memcpy_chk(local_248, local_348, param_5, 0x100);
         auVar2._8_8_ = 0;
         auVar2._0_8_ = param_5;
         uVar38 = SUB168(( ZEXT816(0) << 0x40 | ZEXT816(0x2000) ) / auVar2, 0) & 0xfffffffffffffff0;
         if (0x100 < uVar38) {
            uVar38 = 0x100;
         }

         uVar46 = 0;
         do {
            lVar41 = 0x20;
            uVar31 = param_4 - uVar46;
            if (uVar38 + uVar46 < param_4) {
               uVar31 = uVar38;
            }

            lVar32 = (long)param_5 * uVar46 + param_3;
            pauVar43 = (undefined1(*) [16])local_148;
            for (; lVar41 != 0; lVar41 = lVar41 + -1) {
               *(undefined8*)*pauVar43 = 0;
               pauVar43 = (undefined1(*) [16])( pauVar43[-(ulong)bVar53] + 8 );
            }

            if (param_5 != (byte*)0x0) {
               pbVar52 = (byte*)0x0;
               pbVar33 = (byte*)( ( uVar31 + 0xf >> 4 ) + 3 >> 2 );
               do {
                  bVar51 = local_248[(long)pbVar52];
                  __s = pbVar37;
                  if (uVar31 != 0) goto LAB_00101080;
                  pbVar52 = pbVar52 + 1;
               }
 while ( param_5 != pbVar52 );
            }

            LAB_00101406:uVar46 = uVar46 + uVar31;
            __memcpy_chk(local_248, lVar32 + ( uVar31 - 1 ) * (long)param_5, param_5);
         }
 while ( uVar46 < param_4 );
      }

      pbVar33 = (byte*)0x20;
      if ((byte*)0x1f < param_5) {
         pbVar33 = param_5;
      }

      if (pbVar33 <= param_1 + ( (long)param_2 - (long)pbVar37 )) {
         if (param_5 < (byte*)0x20) {
            uVar38 = 0x20 - (long)param_5;
            uVar42 = (uint)uVar38;
            if (uVar42 < 8) {
               if (( uVar38 & 4 ) == 0) {
                  if (( uVar42 != 0 ) && ( *pbVar37 = 0(uVar38 & 2) != 0 )) {
                     ( pbVar37 + ( ( uVar38 & 0xffffffff ) - 2 ) )[0] = 0;
                     ( pbVar37 + ( ( uVar38 & 0xffffffff ) - 2 ) )[1] = 0;
                  }

               }
 else {
                  for (int i = 0; i < 4; i++) {
                     pbVar37[i] = 0;
                  }

                  pbVar33 = pbVar37 + ( ( uVar38 & 0xffffffff ) - 4 );
                  for (int i = 0; i < 4; i++) {
                     pbVar33[i] = 0;
                  }

               }

            }
 else {
               for (int i = 0; i < 8; i++) {
                  pbVar37[i] = 0;
               }

               pbVar33 = pbVar37 + ( ( uVar38 & 0xffffffff ) - 8 );
               for (int i = 0; i < 8; i++) {
                  pbVar33[i] = 0;
               }

               uVar42 = ( (int)pbVar37 - (int)( ( ulong )(pbVar37 + 8) & 0xfffffffffffffff8 ) ) + uVar42 & 0xfffffff8;
               if (7 < uVar42) {
                  uVar40 = 0;
                  do {
                     uVar46 = (ulong)uVar40;
                     uVar40 = uVar40 + 8;
                     *(undefined8*)( ( ( ulong )(pbVar37 + 8) & 0xfffffffffffffff8 ) + uVar46 ) = 0;
                  }
 while ( uVar40 < uVar42 );
               }

            }

            pbVar37 = pbVar37 + uVar38;
         }

         memcpy(pbVar37, local_348, (size_t)param_5);
         pbVar37 = pbVar37 + ( (long)param_5 - (long)param_1 );
         goto LAB_00101329;
      }

   }

   LAB_00101327:pbVar37 = (byte*)0x0;
   LAB_00101329:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pbVar37;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00101080:pbVar37 = pbVar52 + lVar32;
   pauVar43 = (undefined1(*) [16])local_148;
   do {
      bVar1 = *pbVar37;
      puVar29 = *pauVar43;
      pbVar37 = pbVar37 + (long)param_5;
      cVar54 = bVar1 - bVar51;
      ( *pauVar43 )[0] = cVar54 * '\x02' ^ cVar54 >> 7;
      pauVar43 = (undefined1(*) [16])( puVar29 + 1 );
      bVar51 = bVar1;
   }
 while ( (undefined1(*) [16])( puVar29 + 1 ) != (undefined1(*) [16])( *(undefined1(*) [16])local_148 + uVar31 ) );
   if (pbVar33 <= param_1 + ( (long)param_2 - (long)__s )) {
      pbVar37 = __s + (long)pbVar33;
      memset(__s, 0, (size_t)pbVar33);
      auVar2 = __LC6;
      if ((byte*)0x17 < param_1 + ( (long)param_2 - (long)pbVar37 )) {
         local_3d8 = 0;
         pauVar45 = (undefined1(*) [16])local_148;
         pauVar43 = (undefined1(*) [16])local_148;
         do {
            pauVar43 = pauVar43 + 1;
            iVar48 = 3;
            iVar50 = 8;
            uVar47 = 0x10;
            iVar39 = 1;
            do {
               pauVar36 = pauVar45;
               if (iVar39 == 1) {
                  do {
                     if (( *pauVar36 )[0] != '\0') goto LAB_00101225;
                     puVar29 = *pauVar36;
                     pauVar36 = (undefined1(*) [16])( puVar29 + 1 );
                  }
 while ( (undefined1(*) [16])( puVar29 + 1 ) != pauVar43 );
                  uVar34 = 0;
               }
 else {
                  cVar54 = (char)( 1 << ( (byte)iVar39 & 0x1f ) ) + -1;
                  uVar55 = CONCAT11(cVar54, cVar54);
                  auVar56._0_4_ = CONCAT22(uVar55, uVar55);
                  auVar56._4_4_ = auVar56._0_4_;
                  auVar56._8_4_ = auVar56._0_4_;
                  auVar56._12_4_ = auVar56._0_4_;
                  auVar56 = psubusb(auVar56, *pauVar45);
                  for (int i = 0; i < 16; i++) {
                     auVar57[i] = -(auVar56[0] == '\0');
                  }

                  auVar57 = auVar57 & auVar2;
                  uVar42 = CONCAT13(0, CONCAT12(auVar57[9], (ushort)auVar57[8]));
                  auVar3[0xd] = 0;
                  auVar3._0_13_ = auVar57._0_13_;
                  auVar3[0xe] = auVar57[7];
                  auVar5[0xc] = auVar57[6];
                  auVar5._0_12_ = auVar57._0_12_;
                  auVar5._13_2_ = auVar3._13_2_;
                  auVar6[0xb] = 0;
                  auVar6._0_11_ = auVar57._0_11_;
                  auVar6._12_3_ = auVar5._12_3_;
                  auVar7[10] = auVar57[5];
                  auVar7._0_10_ = auVar57._0_10_;
                  auVar7._11_4_ = auVar6._11_4_;
                  auVar13[9] = 0;
                  auVar13._0_9_ = auVar57._0_9_;
                  auVar13._10_5_ = auVar7._10_5_;
                  auVar16[8] = auVar57[4];
                  auVar16._0_8_ = auVar57._0_8_;
                  auVar16._9_6_ = auVar13._9_6_;
                  uVar17 = auVar16._8_7_;
                  auVar21._7_8_ = 0;
                  auVar21._0_7_ = uVar17;
                  Var22 = CONCAT81(SUB158(auVar21 << 0x40, 7), auVar57[3]);
                  auVar26._9_6_ = 0;
                  auVar26._0_9_ = Var22;
                  auVar23._1_10_ = SUB1510(auVar26 << 0x30, 5);
                  auVar23[0] = auVar57[2];
                  auVar27._11_4_ = 0;
                  auVar27._0_11_ = auVar23;
                  auVar18[2] = auVar57[1];
                  auVar18._0_2_ = auVar57._0_2_;
                  auVar18._3_12_ = SUB1512(auVar27 << 0x20, 3);
                  auVar19._2_13_ = auVar18._2_13_;
                  auVar19._0_2_ = auVar57._0_2_ & 0xff;
                  auVar8[0xc] = auVar57[0xb];
                  auVar8._0_12_ = ZEXT112(auVar57[0xc]) << 0x40;
                  auVar9._10_3_ = auVar8._10_3_;
                  auVar9._0_10_ = (unkuint10)auVar57[10] << 0x40;
                  uVar10 = auVar9._8_5_;
                  auVar24._5_8_ = 0;
                  auVar24._0_5_ = uVar10;
                  auVar11[4] = auVar57[9];
                  auVar11._0_4_ = uVar42;
                  auVar11[5] = 0;
                  auVar11._6_7_ = SUB137(auVar24 << 0x40, 6);
                  auVar14._4_9_ = auVar11._4_9_;
                  auVar14._0_4_ = uVar42 & 0xffff;
                  auVar4._10_2_ = 0;
                  auVar4._0_10_ = auVar19._0_10_;
                  auVar4._12_2_ = (short)Var22;
                  uVar28 = CONCAT42(auVar4._10_4_, auVar23._0_2_);
                  auVar25._6_8_ = 0;
                  auVar25._0_6_ = uVar28;
                  auVar12._4_2_ = auVar18._2_2_;
                  auVar12._0_4_ = auVar19._0_4_;
                  auVar12._6_8_ = SUB148(auVar25 << 0x40, 6);
                  auVar15._4_10_ = auVar12._4_10_;
                  auVar15._0_4_ = auVar19._0_4_ & 0xffff;
                  uVar34 = ( (ulong)CONCAT14(auVar57[0xd], (uint)auVar57[0xc]) & 0xffffffff ) + (ulong)auVar57[0xe] + ( (ulong)CONCAT24(auVar7._10_2_, (uint)auVar16._8_2_) & 0xffffffff ) + ( ( ulong )(uVar17 >> 0x20) & 0xffff ) + ( auVar15._0_8_ & 0xffffffff ) + ( (ulong)uVar28 & 0xffffffff ) + ( auVar14._0_8_ & 0xffffffff ) + ( (ulong)uVar10 & 0xffffffff ) + (ulong)auVar57[0xd] + (ulong)auVar57[0xf] + (ulong)auVar7._10_2_ + ( ulong )(uVar17 >> 0x30) + (ulong)auVar12._4_4_ + ( ulong )(auVar4._10_4_ >> 0x10) + (ulong)auVar11._4_4_ + ( ulong )(uVar10 >> 0x20) + ( ( ulong )((long)iVar39 << 4) >> 3 );
               }

               if (uVar34 < uVar47) {
                  uVar47 = uVar34;
                  iVar50 = iVar39;
               }

               LAB_00101225:iVar39 = iVar39 * 2;
               iVar48 = iVar48 + -1;
            }
 while ( iVar48 != 0 );
            if (iVar50 - 1U < 4) {
               __s[local_3d8 >> 6] = __s[local_3d8 >> 6] | ( byte )(( &CSWTCH_224 )[iVar50 - 1U] << ( ( byte )(local_3d8 >> 3) & 6 ));
               if (iVar50 != 1) {
                  LAB_0010126c:uVar42 = ( 1 << ( (byte)iVar50 & 0x1f ) ) - 1;
                  lVar41 = (long)(int)( 8 / (long)iVar50 );
                  if (lVar41 == 0) {
                     do {
                        *pbVar37 = 0;
                        pbVar37 = pbVar37 + 1;
                     }
 while ( true );
                  }

                  uVar47 = 0;
                  pbVar44 = pbVar37;
                  pauVar49 = pauVar45;
                  pauVar36 = pauVar45;
                  do {
                     pauVar36 = (undefined1(*) [16])( *pauVar36 + lVar41 );
                     uVar40 = 0;
                     pauVar35 = pauVar49;
                     do {
                        bVar51 = (byte)uVar42;
                        uVar30 = ( uint )(byte)(*pauVar35)[0];
                        if (bVar51 <= ( byte )(*pauVar35)[0]) {
                           uVar30 = uVar42;
                        }

                        pauVar35 = (undefined1(*) [16])( *pauVar35 + 1 );
                        uVar40 = uVar30 | ( uVar40 & 0xff ) << ( (byte)iVar50 & 0x1f );
                     }
 while ( pauVar36 != pauVar35 );
                     uVar47 = uVar47 + lVar41;
                     pbVar37 = pbVar44 + 1;
                     pauVar49 = (undefined1(*) [16])( *pauVar49 + lVar41 );
                     *pbVar44 = (byte)uVar40;
                     pauVar35 = pauVar45;
                     pbVar44 = pbVar37;
                  }
 while ( uVar47 < 0x10 );
                  do {
                     if (bVar51 <= ( byte )(*pauVar35)[0]) {
                        *pbVar37 = ( *pauVar35 )[0];
                        pbVar37 = pbVar37 + 1;
                     }

                     puVar29 = *pauVar35;
                     pauVar35 = (undefined1(*) [16])( puVar29 + 1 );
                  }
 while ( pauVar43 != (undefined1(*) [16])( puVar29 + 1 ) );
               }

            }
 else {
               __s[local_3d8 >> 6] = __s[local_3d8 >> 6] | ( byte )(3 << ( ( byte )(local_3d8 >> 3) & 6 ));
               if (iVar50 != 8) goto LAB_0010126c;
               uVar20 = *(undefined8*)( *pauVar45 + 8 );
               *(undefined8*)pbVar37 = *(undefined8*)*pauVar45;
               *(undefined8*)( pbVar37 + 8 ) = uVar20;
               pbVar37 = pbVar37 + 0x10;
            }

            if (( uVar31 + 0xf & 0xfffffffffffffff0 ) <= local_3d8 + 0x10) goto LAB_001013c2;
            local_3d8 = local_3d8 + 0x10;
            pauVar45 = pauVar45 + 1;
            if (param_1 + ( (long)param_2 - (long)pbVar37 ) < (byte*)0x18) break;
         }
 while ( true );
      }

   }

   goto LAB_00101327;
   LAB_001013c2:if (pbVar37 == (byte*)0x0) goto LAB_00101327;
   pbVar52 = pbVar52 + 1;
   if (param_5 == pbVar52) goto LAB_00101406;
   bVar51 = local_248[(long)pbVar52];
   __s = pbVar37;
   goto LAB_00101080;
}
long meshopt_encodeVertexBufferBound(long param_1, ulong param_2) {
   undefined1 auVar1[16];
   ulong uVar2;
   long lVar3;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = param_2;
   uVar2 = SUB168(( ZEXT816(0) << 0x40 | ZEXT816(0x2000) ) / auVar1, 0) & 0xfffffffffffffff0;
   if (0x100 < uVar2) {
      uVar2 = 0x100;
   }

   lVar3 = ( ( ( uVar2 - 1 ) + param_1 ) / uVar2 ) * param_2;
   if (param_2 < 0x20) {
      param_2 = 0x20;
   }

   return lVar3 * ( ( ( uVar2 >> 4 ) + 3 >> 2 ) + uVar2 ) + 1 + param_2;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void meshopt_encodeVertexVersion(undefined4 param_1) {
   _gEncodeVertexVersion = param_1;
   return;
}
int meshopt_decodeVertexBuffer(long param_1, ulong param_2, ulong param_3, byte *param_4, ulong param_5) {
   byte *pbVar1;
   undefined1 auVar2[16];
   int iVar3;
   ulong uVar4;
   byte *pbVar5;
   ulong uVar6;
   code *pcVar7;
   long in_FS_OFFSET;
   undefined1 local_148[264];
   long local_40;
   pcVar7 = meshopt::decodeVertexBlock;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( meshopt::cpuid._1_1_ & 2 ) != 0) {
      pcVar7 = meshopt::decodeVertexBlockSimd;
   }

   pbVar1 = param_4 + param_5;
   if (param_3 + 1 <= param_5) {
      pbVar5 = param_4 + 1;
      if (( ( *param_4 & 0xf0 ) != 0xa0 ) || ( ( *param_4 & 0xf ) != 0 )) {
         iVar3 = -1;
         goto LAB_001016e8;
      }

      __memcpy_chk(local_148, (long)pbVar1 - param_3, param_3, 0x100);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = param_3;
      uVar4 = SUB168(( ZEXT816(0) << 0x40 | ZEXT816(0x2000) ) / auVar2, 0) & 0xfffffffffffffff0;
      if (0x100 < uVar4) {
         uVar4 = 0x100;
      }

      if (param_2 == 0) {
         LAB_001016c8:if (param_3 < 0x20) {
            param_3 = 0x20;
         }

         iVar3 = ( uint )((long)pbVar1 - (long)pbVar5 == param_3) * 3 + -3;
         goto LAB_001016e8;
      }

      uVar6 = 0;
      do {
         if (param_2 <= uVar4 + uVar6) {
            pbVar5 = (byte*)( *pcVar7 )(pbVar5, pbVar1, uVar6 * param_3 + param_1, param_2 - uVar6, param_3);
            if (pbVar5 != (byte*)0x0) goto LAB_001016c8;
            break;
         }

         pbVar5 = (byte*)( *pcVar7 )(pbVar5, pbVar1, uVar6 * param_3 + param_1, uVar4, param_3);
         uVar6 = uVar4 + uVar6;
      }
 while ( pbVar5 != (byte*)0x0 );
   }

   iVar3 = -2;
   LAB_001016e8:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar3;
}


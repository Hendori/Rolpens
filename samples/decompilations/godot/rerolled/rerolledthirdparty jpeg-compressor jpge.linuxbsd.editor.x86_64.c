/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* jpge::DCT2D(int*) */void jpge::DCT2D(int *param_1) {
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
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[12];
   undefined1 auVar24[12];
   undefined1 auVar25[12];
   undefined1 auVar26[12];
   undefined1 auVar27[12];
   undefined1 auVar28[12];
   undefined1 auVar29[12];
   undefined1 auVar30[12];
   undefined1 auVar31[12];
   undefined1 auVar32[12];
   undefined1 auVar33[12];
   undefined1 auVar34[12];
   undefined1 auVar35[12];
   undefined1 auVar36[12];
   undefined1 auVar37[12];
   undefined1 auVar38[12];
   undefined1 auVar39[12];
   undefined1 auVar40[12];
   unkbyte10 Var41;
   unkbyte10 Var42;
   short sVar43;
   short sVar44;
   short sVar45;
   short sVar46;
   short sVar47;
   short sVar48;
   short sVar49;
   short sVar50;
   int iVar51;
   int iVar52;
   int iVar53;
   int iVar54;
   int iVar55;
   undefined1 auVar56[12];
   undefined1 auVar58[12];
   undefined1 auVar59[12];
   undefined1 auVar60[12];
   int iVar68;
   int iVar69;
   int iVar70;
   undefined1 auVar61[16];
   undefined1 auVar63[16];
   undefined1 auVar71[16];
   undefined1 auVar72[16];
   undefined1 auVar73[16];
   int iVar74;
   int iVar75;
   int iVar76;
   undefined1 auVar77[12];
   int iVar81;
   int iVar82;
   int iVar83;
   int iVar84;
   int iVar85;
   int iVar86;
   int iVar87;
   int iVar88;
   int iVar89;
   undefined1 auVar78[16];
   undefined1 auVar80[16];
   short sVar90;
   int iVar91;
   undefined1 auVar92[12];
   short sVar101;
   short sVar104;
   short sVar107;
   undefined1 auVar93[12];
   undefined1 auVar94[12];
   short sVar102;
   int iVar103;
   short sVar105;
   int iVar106;
   short sVar108;
   int iVar109;
   undefined1 auVar95[16];
   undefined1 auVar96[16];
   undefined1 auVar97[16];
   short sVar110;
   undefined1 auVar111[12];
   undefined1 auVar113[16];
   undefined1 auVar112[12];
   int iVar118;
   int iVar119;
   undefined1 auVar116[16];
   undefined1 auVar117[16];
   int iVar120;
   int iVar121;
   int iVar127;
   undefined1 auVar122[12];
   int iVar125;
   int iVar126;
   int iVar128;
   undefined1 auVar123[16];
   int iVar129;
   int iVar130;
   undefined1 auVar131[12];
   undefined1 auVar132[16];
   undefined1 auVar133[16];
   int iVar135;
   int iVar143;
   int iVar144;
   int iVar145;
   undefined1 auVar136[12];
   undefined1 auVar137[12];
   undefined1 auVar138[12];
   int iVar146;
   undefined1 auVar141[16];
   int iVar147;
   int iVar148;
   int iVar149;
   int iVar150;
   int iVar151;
   int iVar152;
   undefined1 auVar153[12];
   int iVar156;
   int iVar157;
   int iVar158;
   int iVar159;
   int iVar160;
   int iVar161;
   int iVar162;
   undefined1 auVar154[16];
   int iVar163;
   int iVar164;
   int iVar165;
   int iVar166;
   int iVar172;
   int iVar174;
   undefined1 auVar167[12];
   int iVar171;
   int iVar173;
   int iVar175;
   int iVar176;
   undefined1 auVar168[16];
   undefined1 auVar169[16];
   int iVar177;
   int iVar178;
   int iVar179;
   int iVar180;
   int iVar182;
   int iVar183;
   undefined1 auVar181[16];
   short sVar184;
   int iVar185;
   short sVar190;
   int iVar191;
   short sVar193;
   int iVar194;
   short sVar196;
   undefined1 auVar186[16];
   undefined1 auVar187[16];
   short sVar189;
   short sVar192;
   short sVar195;
   int iVar197;
   short sVar198;
   undefined1 auVar188[16];
   short sVar199;
   int iVar200;
   short sVar203;
   short sVar204;
   int iVar205;
   short sVar206;
   short sVar207;
   int iVar208;
   short sVar209;
   short sVar210;
   int iVar211;
   undefined1 auVar201[16];
   undefined1 auVar202[16];
   short sVar212;
   undefined4 local_c8;
   undefined4 uStack_c4;
   undefined4 uStack_c0;
   undefined4 uStack_bc;
   undefined4 local_b8;
   undefined4 uStack_b4;
   undefined4 uStack_b0;
   undefined4 uStack_ac;
   undefined4 local_a8;
   undefined4 uStack_a4;
   undefined4 uStack_a0;
   undefined4 uStack_9c;
   undefined4 local_98;
   undefined4 uStack_94;
   undefined4 uStack_90;
   undefined4 uStack_8c;
   undefined4 local_88;
   undefined4 uStack_84;
   undefined4 uStack_80;
   undefined4 uStack_7c;
   undefined4 local_58;
   undefined4 uStack_54;
   undefined4 uStack_50;
   undefined4 uStack_4c;
   undefined4 local_48;
   undefined4 uStack_44;
   undefined4 uStack_40;
   undefined4 uStack_3c;
   undefined4 local_38;
   undefined4 uStack_34;
   undefined4 uStack_30;
   undefined4 uStack_2c;
   undefined1 auVar57[12];
   undefined1 auVar62[16];
   undefined1 auVar64[16];
   undefined1 auVar65[16];
   undefined1 auVar66[16];
   undefined1 auVar67[16];
   undefined1 auVar79[16];
   undefined1 auVar98[16];
   undefined1 auVar99[16];
   undefined1 auVar100[16];
   undefined1 auVar114[16];
   undefined1 auVar115[16];
   undefined1 auVar124[16];
   undefined1 auVar134[16];
   undefined1 auVar139[16];
   undefined1 auVar140[16];
   undefined1 auVar142[16];
   undefined1 auVar155[16];
   undefined1 auVar170[16];
   iVar53 = _UNK_0010523c;
   iVar52 = _UNK_00105238;
   iVar51 = _LC24._4_4_;
   iVar55 = (int)_LC24;
   iVar74 = *param_1 + param_1[7];
   iVar81 = param_1[8] + param_1[0xf];
   iVar84 = param_1[0x10] + param_1[0x17];
   iVar87 = param_1[0x18] + param_1[0x1f];
   iVar164 = param_1[0x20] + param_1[0x27];
   iVar171 = param_1[0x28] + param_1[0x2f];
   iVar173 = param_1[0x30] + param_1[0x37];
   iVar176 = param_1[0x38] + param_1[0x3f];
   iVar75 = param_1[0x21] + param_1[0x26];
   iVar82 = param_1[0x29] + param_1[0x2e];
   iVar85 = param_1[0x31] + param_1[0x36];
   iVar88 = param_1[0x39] + param_1[0x3e];
   auVar186._0_2_ = (short)*param_1 - (short)param_1[7];
   auVar186._2_2_ = (short)param_1[8] - (short)param_1[0xf];
   auVar186._4_2_ = (short)param_1[0x10] - (short)param_1[0x17];
   auVar186._6_2_ = (short)param_1[0x18] - (short)param_1[0x1f];
   auVar186._8_2_ = (short)param_1[0x20] - (short)param_1[0x27];
   auVar186._10_2_ = (short)param_1[0x28] - (short)param_1[0x2f];
   auVar186._12_2_ = (short)param_1[0x30] - (short)param_1[0x37];
   auVar186._14_2_ = (short)param_1[0x38] - (short)param_1[0x3f];
   iVar54 = param_1[1] + param_1[6];
   iVar68 = param_1[9] + param_1[0xe];
   iVar69 = param_1[0x11] + param_1[0x16];
   iVar70 = param_1[0x19] + param_1[0x1e];
   local_c8._0_2_ = (short)param_1[5];
   uStack_c4._0_2_ = (short)param_1[0xd];
   uStack_c0._0_2_ = (short)param_1[0x15];
   uStack_bc._0_2_ = (short)param_1[0x1d];
   auVar123._0_2_ = (short)param_1[1] - (short)param_1[6];
   auVar123._2_2_ = (short)param_1[9] - (short)param_1[0xe];
   auVar123._4_2_ = (short)param_1[0x11] - (short)param_1[0x16];
   auVar123._6_2_ = (short)param_1[0x19] - (short)param_1[0x1e];
   auVar123._8_2_ = (short)param_1[0x21] - (short)param_1[0x26];
   auVar123._10_2_ = (short)param_1[0x29] - (short)param_1[0x2e];
   auVar123._12_2_ = (short)param_1[0x31] - (short)param_1[0x36];
   auVar123._14_2_ = (short)param_1[0x39] - (short)param_1[0x3e];
   iVar91 = param_1[5] + param_1[2];
   iVar103 = param_1[0xd] + param_1[10];
   iVar106 = param_1[0x15] + param_1[0x12];
   iVar109 = param_1[0x1d] + param_1[0x1a];
   iVar120 = param_1[0x25] + param_1[0x22];
   iVar125 = param_1[0x2d] + param_1[0x2a];
   iVar127 = param_1[0x35] + param_1[0x32];
   iVar129 = param_1[0x3d] + param_1[0x3a];
   auVar71._0_2_ = (short)param_1[2] - (short)local_c8;
   auVar71._2_2_ = (short)param_1[10] - (short)uStack_c4;
   auVar71._4_2_ = (short)param_1[0x12] - (short)uStack_c0;
   auVar71._6_2_ = (short)param_1[0x1a] - (short)uStack_bc;
   auVar71._8_2_ = (short)param_1[0x22] - (short)param_1[0x25];
   auVar71._10_2_ = (short)param_1[0x2a] - (short)param_1[0x2d];
   auVar71._12_2_ = (short)param_1[0x32] - (short)param_1[0x35];
   auVar71._14_2_ = (short)param_1[0x3a] - (short)param_1[0x3d];
   iVar151 = param_1[0x24] + param_1[0x23];
   iVar156 = param_1[0x2c] + param_1[0x2b];
   iVar158 = param_1[0x34] + param_1[0x33];
   iVar162 = param_1[0x3c] + param_1[0x3b];
   iVar135 = param_1[3] + param_1[4];
   iVar143 = param_1[0xb] + param_1[0xc];
   iVar144 = param_1[0x13] + param_1[0x14];
   iVar146 = param_1[0x1b] + param_1[0x1c];
   iVar76 = iVar74 + iVar135;
   iVar83 = iVar81 + iVar143;
   iVar86 = iVar84 + iVar144;
   iVar89 = iVar87 + iVar146;
   iVar147 = iVar164 + iVar151;
   iVar148 = iVar171 + iVar156;
   iVar149 = iVar173 + iVar158;
   iVar150 = iVar176 + iVar162;
   iVar200 = iVar75 + iVar120;
   iVar205 = iVar82 + iVar125;
   iVar208 = iVar85 + iVar127;
   iVar211 = iVar88 + iVar129;
   auVar132._0_2_ = (short)param_1[3] - (short)param_1[4];
   auVar132._2_2_ = (short)param_1[0xb] - (short)param_1[0xc];
   auVar132._4_2_ = (short)param_1[0x13] - (short)param_1[0x14];
   auVar132._6_2_ = (short)param_1[0x1b] - (short)param_1[0x1c];
   auVar132._8_2_ = (short)param_1[0x23] - (short)param_1[0x24];
   auVar132._10_2_ = (short)param_1[0x2b] - (short)param_1[0x2c];
   auVar132._12_2_ = (short)param_1[0x33] - (short)param_1[0x34];
   auVar132._14_2_ = (short)param_1[0x3b] - (short)param_1[0x3c];
   auVar168._0_2_ = auVar186._0_2_ + auVar132._0_2_;
   auVar168._2_2_ = auVar186._2_2_ + auVar132._2_2_;
   auVar168._4_2_ = auVar186._4_2_ + auVar132._4_2_;
   auVar168._6_2_ = auVar186._6_2_ + auVar132._6_2_;
   auVar168._8_2_ = auVar186._8_2_ + auVar132._8_2_;
   auVar168._10_2_ = auVar186._10_2_ + auVar132._10_2_;
   auVar168._12_2_ = auVar186._12_2_ + auVar132._12_2_;
   auVar168._14_2_ = auVar186._14_2_ + auVar132._14_2_;
   auVar78._0_2_ = (short)iVar74 - (short)iVar135;
   auVar78._2_2_ = (short)iVar81 - (short)iVar143;
   auVar78._4_2_ = (short)iVar84 - (short)iVar144;
   auVar78._6_2_ = (short)iVar87 - (short)iVar146;
   auVar78._8_2_ = (short)iVar164 - (short)iVar151;
   auVar78._10_2_ = (short)iVar171 - (short)iVar156;
   auVar78._12_2_ = (short)iVar173 - (short)iVar158;
   auVar78._14_2_ = (short)iVar176 - (short)iVar162;
   iVar81 = iVar54 + iVar91;
   iVar84 = iVar68 + iVar103;
   iVar145 = iVar69 + iVar106;
   auVar154._0_2_ = auVar123._0_2_ + auVar71._0_2_;
   auVar154._2_2_ = auVar123._2_2_ + auVar71._2_2_;
   auVar154._4_2_ = auVar123._4_2_ + auVar71._4_2_;
   auVar154._6_2_ = auVar123._6_2_ + auVar71._6_2_;
   auVar154._8_2_ = auVar123._8_2_ + auVar71._8_2_;
   auVar154._10_2_ = auVar123._10_2_ + auVar71._10_2_;
   auVar154._12_2_ = auVar123._12_2_ + auVar71._12_2_;
   auVar154._14_2_ = auVar123._14_2_ + auVar71._14_2_;
   auVar61._0_2_ = (short)iVar54 - (short)iVar91;
   auVar61._2_2_ = (short)iVar68 - (short)iVar103;
   auVar61._4_2_ = (short)iVar69 - (short)iVar106;
   auVar61._6_2_ = (short)iVar70 - (short)iVar109;
   auVar61._8_2_ = (short)iVar75 - (short)iVar120;
   auVar61._10_2_ = (short)iVar82 - (short)iVar125;
   auVar61._12_2_ = (short)iVar85 - (short)iVar127;
   auVar61._14_2_ = (short)iVar88 - (short)iVar129;
   auVar95._0_2_ = auVar78._0_2_ + auVar61._0_2_;
   auVar95._2_2_ = auVar78._2_2_ + auVar61._2_2_;
   auVar95._4_2_ = auVar78._4_2_ + auVar61._4_2_;
   auVar95._6_2_ = auVar78._6_2_ + auVar61._6_2_;
   auVar95._8_2_ = auVar78._8_2_ + auVar61._8_2_;
   auVar95._10_2_ = auVar78._10_2_ + auVar61._10_2_;
   auVar95._12_2_ = auVar78._12_2_ + auVar61._12_2_;
   auVar95._14_2_ = auVar78._14_2_ + auVar61._14_2_;
   auVar202._2_2_ = _UNK_00105162;
   auVar202._0_2_ = __LC0;
   auVar202._4_2_ = _UNK_00105164;
   auVar202._6_2_ = _UNK_00105166;
   auVar202._8_2_ = _UNK_00105168;
   auVar202._10_2_ = _UNK_0010516a;
   auVar202._12_2_ = _UNK_0010516c;
   auVar202._14_2_ = _UNK_0010516e;
   auVar96 = pmulhw(auVar95, auVar202);
   auVar113._0_2_ = auVar123._0_2_ + auVar132._0_2_;
   auVar113._2_2_ = auVar123._2_2_ + auVar132._2_2_;
   auVar113._4_2_ = auVar123._4_2_ + auVar132._4_2_;
   auVar113._6_2_ = auVar123._6_2_ + auVar132._6_2_;
   auVar113._8_2_ = auVar123._8_2_ + auVar132._8_2_;
   auVar113._10_2_ = auVar123._10_2_ + auVar132._10_2_;
   auVar113._12_2_ = auVar123._12_2_ + auVar132._12_2_;
   auVar113._14_2_ = auVar123._14_2_ + auVar132._14_2_;
   auVar97._0_2_ = auVar186._0_2_ + auVar71._0_2_;
   auVar97._2_2_ = auVar186._2_2_ + auVar71._2_2_;
   auVar97._4_2_ = auVar186._4_2_ + auVar71._4_2_;
   auVar97._6_2_ = auVar186._6_2_ + auVar71._6_2_;
   auVar97._8_2_ = auVar186._8_2_ + auVar71._8_2_;
   auVar97._10_2_ = auVar186._10_2_ + auVar71._10_2_;
   auVar97._12_2_ = auVar186._12_2_ + auVar71._12_2_;
   auVar97._14_2_ = auVar186._14_2_ + auVar71._14_2_;
   local_88 = CONCAT22(auVar96._0_2_, __LC0 * auVar95._0_2_);
   uStack_84 = CONCAT22(auVar96._2_2_, _UNK_00105162 * auVar95._2_2_);
   uStack_80 = CONCAT22(auVar96._4_2_, _UNK_00105164 * auVar95._4_2_);
   uStack_7c = CONCAT22(auVar96._6_2_, _UNK_00105166 * auVar95._6_2_);
   auVar201._0_2_ = auVar113._0_2_ + auVar97._0_2_;
   auVar201._2_2_ = auVar113._2_2_ + auVar97._2_2_;
   auVar201._4_2_ = auVar113._4_2_ + auVar97._4_2_;
   auVar201._6_2_ = auVar113._6_2_ + auVar97._6_2_;
   auVar201._8_2_ = auVar113._8_2_ + auVar97._8_2_;
   auVar201._10_2_ = auVar113._10_2_ + auVar97._10_2_;
   auVar201._12_2_ = auVar113._12_2_ + auVar97._12_2_;
   auVar201._14_2_ = auVar113._14_2_ + auVar97._14_2_;
   auVar169._2_2_ = _UNK_00105172;
   auVar169._0_2_ = __LC1;
   auVar169._4_2_ = _UNK_00105174;
   auVar169._6_2_ = _UNK_00105176;
   auVar169._8_2_ = _UNK_00105178;
   auVar169._10_2_ = _UNK_0010517a;
   auVar169._12_2_ = _UNK_0010517c;
   auVar169._14_2_ = _UNK_0010517e;
   auVar202 = pmulhw(auVar201, auVar169);
   iVar74 = CONCAT22(auVar202._8_2_, _UNK_00105178 * auVar201._8_2_);
   auVar122._0_8_ = CONCAT26(auVar202._10_2_, CONCAT24(_UNK_0010517a * auVar201._10_2_, iVar74));
   auVar122._8_2_ = _UNK_0010517c * auVar201._12_2_;
   auVar122._10_2_ = auVar202._12_2_;
   auVar124._12_2_ = _UNK_0010517e * auVar201._14_2_;
   auVar124._0_12_ = auVar122;
   auVar124._14_2_ = auVar202._14_2_;
   iVar54 = CONCAT22(auVar202._6_2_, _UNK_00105176 * auVar201._6_2_);
   Var41 = CONCAT64(CONCAT42(iVar54, auVar202._4_2_), CONCAT22(_UNK_00105174 * auVar201._4_2_, _UNK_00105176 * auVar201._6_2_));
   auVar23._4_8_ = (long)( (unkuint10)Var41 >> 0x10 );
   auVar23._2_2_ = auVar202._2_2_;
   auVar23._0_2_ = _UNK_00105172 * auVar201._2_2_;
   iVar82 = CONCAT22(auVar202._0_2_, __LC1 * auVar201._0_2_);
   auVar1._2_2_ = _UNK_00105182;
   auVar1._0_2_ = __LC2;
   auVar1._4_2_ = _UNK_00105184;
   auVar1._6_2_ = _UNK_00105186;
   auVar1._8_2_ = _UNK_00105188;
   auVar1._10_2_ = _UNK_0010518a;
   auVar1._12_2_ = _UNK_0010518c;
   auVar1._14_2_ = _UNK_0010518e;
   auVar169 = pmulhw(auVar168, auVar1);
   local_58 = CONCAT22(auVar169._8_2_, _UNK_00105188 * auVar168._8_2_);
   uStack_54 = CONCAT22(auVar169._10_2_, _UNK_0010518a * auVar168._10_2_);
   uStack_50 = CONCAT22(auVar169._12_2_, _UNK_0010518c * auVar168._12_2_);
   uStack_4c = CONCAT22(auVar169._14_2_, _UNK_0010518e * auVar168._14_2_);
   auVar3._2_2_ = _UNK_00105192;
   auVar3._0_2_ = __LC3;
   auVar3._4_2_ = _UNK_00105194;
   auVar3._6_2_ = _UNK_00105196;
   auVar3._8_2_ = _UNK_00105198;
   auVar3._10_2_ = _UNK_0010519a;
   auVar3._12_2_ = _UNK_0010519c;
   auVar3._14_2_ = _UNK_0010519e;
   auVar202 = pmulhw(auVar154, auVar3);
   local_38 = CONCAT22(auVar202._8_2_, _UNK_00105198 * auVar154._8_2_);
   uStack_34 = CONCAT22(auVar202._10_2_, _UNK_0010519a * auVar154._10_2_);
   uStack_30 = CONCAT22(auVar202._12_2_, _UNK_0010519c * auVar154._12_2_);
   uStack_2c = CONCAT22(auVar202._14_2_, _UNK_0010519e * auVar154._14_2_);
   local_48 = CONCAT22(auVar202._0_2_, __LC3 * auVar154._0_2_);
   uStack_44 = CONCAT22(auVar202._2_2_, _UNK_00105192 * auVar154._2_2_);
   uStack_40 = CONCAT22(auVar202._4_2_, _UNK_00105194 * auVar154._4_2_);
   uStack_3c = CONCAT22(auVar202._6_2_, _UNK_00105196 * auVar154._6_2_);
   auVar5._2_2_ = _UNK_001051a2;
   auVar5._0_2_ = __LC4;
   auVar5._4_2_ = _UNK_001051a4;
   auVar5._6_2_ = _UNK_001051a6;
   auVar5._8_2_ = _UNK_001051a8;
   auVar5._10_2_ = _UNK_001051aa;
   auVar5._12_2_ = _UNK_001051ac;
   auVar5._14_2_ = _UNK_001051ae;
   auVar202 = pmulhw(auVar113, auVar5);
   iVar152 = CONCAT22(auVar202._8_2_, _UNK_001051a8 * auVar113._8_2_);
   auVar153._0_8_ = CONCAT26(auVar202._10_2_, CONCAT24(_UNK_001051aa * auVar113._10_2_, iVar152));
   auVar153._8_2_ = _UNK_001051ac * auVar113._12_2_;
   auVar153._10_2_ = auVar202._12_2_;
   auVar155._12_2_ = _UNK_001051ae * auVar113._14_2_;
   auVar155._0_12_ = auVar153;
   auVar155._14_2_ = auVar202._14_2_;
   iVar68 = CONCAT22(auVar202._6_2_, _UNK_001051a6 * auVar113._6_2_);
   Var42 = CONCAT64(CONCAT42(iVar68, auVar202._4_2_), CONCAT22(_UNK_001051a4 * auVar113._4_2_, _UNK_001051a6 * auVar113._6_2_));
   auVar24._4_8_ = (long)( (unkuint10)Var42 >> 0x10 );
   auVar24._2_2_ = auVar202._2_2_;
   auVar24._0_2_ = _UNK_001051a2 * auVar113._2_2_;
   iVar152 = iVar152 + iVar74;
   iVar75 = (int)( (ulong)auVar122._0_8_ >> 0x20 );
   iVar157 = (int)( (ulong)auVar153._0_8_ >> 0x20 ) + iVar75;
   iVar159 = auVar153._8_4_ + auVar122._8_4_;
   iVar163 = auVar155._12_4_ + auVar124._12_4_;
   iVar165 = CONCAT22(auVar202._0_2_, __LC4 * auVar113._0_2_) + iVar82;
   iVar172 = auVar24._0_4_ + auVar23._0_4_;
   iVar160 = (int)( (unkuint10)Var41 >> 0x10 );
   iVar174 = (int)( (unkuint10)Var42 >> 0x10 ) + iVar160;
   iVar68 = iVar68 + iVar54;
   auVar7._2_2_ = _UNK_001051b2;
   auVar7._0_2_ = __LC5;
   auVar7._4_2_ = _UNK_001051b4;
   auVar7._6_2_ = _UNK_001051b6;
   auVar7._8_2_ = _UNK_001051b8;
   auVar7._10_2_ = _UNK_001051ba;
   auVar7._12_2_ = _UNK_001051bc;
   auVar7._14_2_ = _UNK_001051be;
   auVar202 = pmulhw(auVar97, auVar7);
   iVar69 = CONCAT22(auVar202._6_2_, _UNK_001051b6 * auVar97._6_2_);
   Var41 = CONCAT64(CONCAT42(iVar69, auVar202._4_2_), CONCAT22(_UNK_001051b4 * auVar97._4_2_, _UNK_001051b6 * auVar97._6_2_));
   auVar25._4_8_ = (long)( (unkuint10)Var41 >> 0x10 );
   auVar25._2_2_ = auVar202._2_2_;
   auVar25._0_2_ = _UNK_001051b2 * auVar97._2_2_;
   iVar166 = CONCAT22(auVar202._8_2_, _UNK_001051b8 * auVar97._8_2_);
   auVar167._0_8_ = CONCAT26(auVar202._10_2_, CONCAT24(_UNK_001051ba * auVar97._10_2_, iVar166));
   auVar167._8_2_ = _UNK_001051bc * auVar97._12_2_;
   auVar167._10_2_ = auVar202._12_2_;
   auVar170._12_2_ = _UNK_001051be * auVar97._14_2_;
   auVar170._0_12_ = auVar167;
   auVar170._14_2_ = auVar202._14_2_;
   iVar82 = CONCAT22(auVar202._0_2_, __LC5 * auVar97._0_2_) + iVar82;
   iVar85 = auVar25._0_4_ + auVar23._0_4_;
   iVar160 = (int)( (unkuint10)Var41 >> 0x10 ) + iVar160;
   iVar166 = iVar166 + iVar74;
   iVar75 = (int)( (ulong)auVar167._0_8_ >> 0x20 ) + iVar75;
   iVar175 = auVar167._8_4_ + auVar122._8_4_;
   iVar177 = auVar170._12_4_ + auVar124._12_4_;
   auVar9._2_2_ = _UNK_001051c2;
   auVar9._0_2_ = __LC6;
   auVar9._4_2_ = _UNK_001051c4;
   auVar9._6_2_ = _UNK_001051c6;
   auVar9._8_2_ = _UNK_001051c8;
   auVar9._10_2_ = _UNK_001051ca;
   auVar9._12_2_ = _UNK_001051cc;
   auVar9._14_2_ = _UNK_001051ce;
   auVar187 = pmulhw(auVar186, auVar9);
   iVar127 = ( iVar200 + iVar147 ) * 4;
   iVar135 = ( iVar205 + iVar148 ) * 4;
   iVar144 = ( iVar208 + iVar149 ) * 4;
   iVar151 = ( iVar211 + iVar150 ) * 4;
   iVar121 = ( iVar76 + iVar81 ) * 4;
   iVar126 = ( iVar83 + iVar84 ) * 4;
   iVar128 = ( iVar86 + iVar145 ) * 4;
   iVar130 = ( iVar89 + iVar70 + iVar109 ) * 4;
   iVar74 = CONCAT22(auVar187._8_2_, _UNK_001051c8 * auVar186._8_2_);
   auVar111._0_8_ = CONCAT26(auVar187._10_2_, CONCAT24(_UNK_001051ca * auVar186._10_2_, iVar74));
   auVar111._8_2_ = _UNK_001051cc * auVar186._12_2_;
   auVar111._10_2_ = auVar187._12_2_;
   auVar114._12_2_ = _UNK_001051ce * auVar186._14_2_;
   auVar114._0_12_ = auVar111;
   auVar114._14_2_ = auVar187._14_2_;
   iVar70 = CONCAT22(auVar187._6_2_, _UNK_001051c6 * auVar186._6_2_);
   Var41 = CONCAT64(CONCAT42(iVar70, auVar187._4_2_), CONCAT22(_UNK_001051c4 * auVar186._4_2_, _UNK_001051c6 * auVar186._6_2_));
   auVar26._4_8_ = (long)( (unkuint10)Var41 >> 0x10 );
   auVar26._2_2_ = auVar187._2_2_;
   auVar26._0_2_ = _UNK_001051c2 * auVar186._2_2_;
   auVar11._2_2_ = _UNK_001051e2;
   auVar11._0_2_ = __LC8;
   auVar11._4_2_ = _UNK_001051e4;
   auVar11._6_2_ = _UNK_001051e6;
   auVar11._8_2_ = _UNK_001051e8;
   auVar11._10_2_ = _UNK_001051ea;
   auVar11._12_2_ = _UNK_001051ec;
   auVar11._14_2_ = _UNK_001051ee;
   auVar202 = pmulhw(auVar78, auVar11);
   iVar158 = iVar74 + local_58 + iVar166 + __LC7 >> 0xb;
   iVar164 = (int)( (ulong)auVar111._0_8_ >> 0x20 ) + uStack_54 + iVar75 + _UNK_001051d4 >> 0xb;
   iVar173 = auVar111._8_4_ + uStack_50 + iVar175 + _UNK_001051d8 >> 0xb;
   iVar118 = auVar114._12_4_ + uStack_4c + iVar177 + _UNK_001051dc >> 0xb;
   iVar129 = CONCAT22(auVar187._0_2_, __LC6 * auVar186._0_2_) + CONCAT22(auVar169._0_2_, __LC2 * auVar168._0_2_) + iVar82 + __LC7 >> 0xb;
   iVar143 = auVar26._0_4_ + CONCAT22(auVar169._2_2_, _UNK_00105182 * auVar168._2_2_) + iVar85 + _UNK_001051d4 >> 0xb;
   iVar146 = (int)( (unkuint10)Var41 >> 0x10 ) + CONCAT22(auVar169._4_2_, _UNK_00105184 * auVar168._4_2_) + iVar160 + _UNK_001051d8 >> 0xb;
   iVar156 = iVar70 + CONCAT22(auVar169._6_2_, _UNK_00105186 * auVar168._6_2_) + iVar69 + iVar54 + _UNK_001051dc >> 0xb;
   iVar54 = CONCAT22(auVar202._6_2_, _UNK_001051e6 * auVar78._6_2_);
   Var41 = CONCAT64(CONCAT42(iVar54, auVar202._4_2_), CONCAT22(_UNK_001051e4 * auVar78._4_2_, _UNK_001051e6 * auVar78._6_2_));
   auVar27._4_8_ = (long)( (unkuint10)Var41 >> 0x10 );
   auVar27._2_2_ = auVar202._2_2_;
   auVar27._0_2_ = _UNK_001051e2 * auVar78._2_2_;
   iVar69 = CONCAT22(auVar202._8_2_, _UNK_001051e8 * auVar78._8_2_);
   auVar112._0_8_ = CONCAT26(auVar202._10_2_, CONCAT24(_UNK_001051ea * auVar78._10_2_, iVar69));
   auVar112._8_2_ = _UNK_001051ec * auVar78._12_2_;
   auVar112._10_2_ = auVar202._12_2_;
   auVar115._12_2_ = _UNK_001051ee * auVar78._14_2_;
   auVar115._0_12_ = auVar112;
   auVar115._14_2_ = auVar202._14_2_;
   iVar185 = CONCAT22(auVar202._0_2_, __LC8 * auVar78._0_2_) + local_88 + __LC7 >> 0xb;
   iVar191 = auVar27._0_4_ + uStack_84 + _UNK_001051d4 >> 0xb;
   iVar194 = (int)( (unkuint10)Var41 >> 0x10 ) + uStack_80 + _UNK_001051d8 >> 0xb;
   iVar197 = iVar54 + uStack_7c + _UNK_001051dc >> 0xb;
   iVar87 = iVar69 + CONCAT22(auVar96._8_2_, _UNK_00105168 * auVar95._8_2_) + __LC7 >> 0xb;
   iVar91 = (int)( (ulong)auVar112._0_8_ >> 0x20 ) + CONCAT22(auVar96._10_2_, _UNK_0010516a * auVar95._10_2_) + _UNK_001051d4 >> 0xb;
   iVar106 = auVar112._8_4_ + CONCAT22(auVar96._12_2_, _UNK_0010516c * auVar95._12_2_) + _UNK_001051d8 >> 0xb;
   iVar120 = auVar115._12_4_ + CONCAT22(auVar96._14_2_, _UNK_0010516e * auVar95._14_2_) + _UNK_001051dc >> 0xb;
   auVar13._2_2_ = _UNK_001051f2;
   auVar13._0_2_ = __LC9;
   auVar13._4_2_ = _UNK_001051f4;
   auVar13._6_2_ = _UNK_001051f6;
   auVar13._8_2_ = _UNK_001051f8;
   auVar13._10_2_ = _UNK_001051fa;
   auVar13._12_2_ = _UNK_001051fc;
   auVar13._14_2_ = _UNK_001051fe;
   auVar202 = pmulhw(auVar123, auVar13);
   iVar69 = CONCAT22(auVar202._8_2_, _UNK_001051f8 * auVar123._8_2_);
   auVar77._0_8_ = CONCAT26(auVar202._10_2_, CONCAT24(_UNK_001051fa * auVar123._10_2_, iVar69));
   auVar77._8_2_ = _UNK_001051fc * auVar123._12_2_;
   auVar77._10_2_ = auVar202._12_2_;
   auVar79._12_2_ = _UNK_001051fe * auVar123._14_2_;
   auVar79._0_12_ = auVar77;
   auVar79._14_2_ = auVar202._14_2_;
   iVar54 = CONCAT22(auVar202._6_2_, _UNK_001051f6 * auVar123._6_2_);
   Var41 = CONCAT64(CONCAT42(iVar54, auVar202._4_2_), CONCAT22(_UNK_001051f4 * auVar123._4_2_, _UNK_001051f6 * auVar123._6_2_));
   auVar28._4_8_ = (long)( (unkuint10)Var41 >> 0x10 );
   auVar28._2_2_ = auVar202._2_2_;
   auVar28._0_2_ = _UNK_001051f2 * auVar123._2_2_;
   iVar162 = CONCAT22(auVar202._0_2_, __LC9 * auVar123._0_2_) + local_48 + iVar165 + __LC7 >> 0xb;
   iVar171 = auVar28._0_4_ + uStack_44 + iVar172 + _UNK_001051d4 >> 0xb;
   iVar176 = (int)( (unkuint10)Var41 >> 0x10 ) + uStack_40 + iVar174 + _UNK_001051d8 >> 0xb;
   iVar119 = iVar54 + uStack_3c + iVar68 + _UNK_001051dc >> 0xb;
   iVar178 = ( iVar76 - iVar81 ) * 4;
   iVar179 = ( iVar83 - iVar84 ) * 4;
   iVar180 = ( iVar86 - iVar145 ) * 4;
   auVar15._2_2_ = _UNK_00105202;
   auVar15._0_2_ = __LC10;
   auVar15._4_2_ = _UNK_00105204;
   auVar15._6_2_ = _UNK_00105206;
   auVar15._8_2_ = _UNK_00105208;
   auVar15._10_2_ = _UNK_0010520a;
   auVar15._12_2_ = _UNK_0010520c;
   auVar15._14_2_ = _UNK_0010520e;
   auVar187 = pmulhw(auVar71, auVar15);
   iVar200 = ( iVar147 - iVar200 ) * 4;
   iVar205 = ( iVar148 - iVar205 ) * 4;
   iVar208 = ( iVar149 - iVar208 ) * 4;
   iVar147 = ( iVar150 - iVar211 ) * 4;
   iVar88 = iVar69 + local_38 + iVar152 + __LC7 >> 0xb;
   iVar103 = (int)( (ulong)auVar77._0_8_ >> 0x20 ) + uStack_34 + iVar157 + _UNK_001051d4 >> 0xb;
   iVar109 = auVar77._8_4_ + uStack_30 + iVar159 + _UNK_001051d8 >> 0xb;
   iVar125 = auVar79._12_4_ + uStack_2c + iVar163 + _UNK_001051dc >> 0xb;
   iVar54 = CONCAT22(auVar187._8_2_, _UNK_00105208 * auVar71._8_2_);
   auVar136._0_8_ = CONCAT26(auVar187._10_2_, CONCAT24(_UNK_0010520a * auVar71._10_2_, iVar54));
   auVar136._8_2_ = _UNK_0010520c * auVar71._12_2_;
   auVar136._10_2_ = auVar187._12_2_;
   auVar139._12_2_ = _UNK_0010520e * auVar71._14_2_;
   auVar139._0_12_ = auVar136;
   auVar139._14_2_ = auVar187._14_2_;
   Var41 = CONCAT64(CONCAT42(CONCAT22(auVar187._6_2_, _UNK_00105206 * auVar71._6_2_), auVar187._4_2_), CONCAT22(_UNK_00105204 * auVar71._4_2_, _UNK_00105206 * auVar71._6_2_));
   auVar29._4_8_ = (long)( (unkuint10)Var41 >> 0x10 );
   auVar29._2_2_ = auVar187._2_2_;
   auVar29._0_2_ = _UNK_00105202 * auVar71._2_2_;
   auVar17._2_2_ = _UNK_00105212;
   auVar17._0_2_ = __LC11;
   auVar17._4_2_ = _UNK_00105214;
   auVar17._6_2_ = _UNK_00105216;
   auVar17._8_2_ = _UNK_00105218;
   auVar17._10_2_ = _UNK_0010521a;
   auVar17._12_2_ = _UNK_0010521c;
   auVar17._14_2_ = _UNK_0010521e;
   auVar202 = pmulhw(auVar61, auVar17);
   iVar148 = iVar82 + CONCAT22(auVar187._0_2_, __LC10 * auVar71._0_2_) + local_48 + __LC7 >> 0xb;
   iVar211 = iVar85 + auVar29._0_4_ + uStack_44 + _UNK_001051d4 >> 0xb;
   iVar161 = iVar160 + (int)( (unkuint10)Var41 >> 0x10 ) + uStack_40 + _UNK_001051d8 >> 0xb;
   iVar82 = iVar54 + local_38 + iVar166 + __LC7 >> 0xb;
   iVar83 = (int)( (ulong)auVar136._0_8_ >> 0x20 ) + uStack_34 + iVar75 + _UNK_001051d4 >> 0xb;
   iVar84 = auVar136._8_4_ + uStack_30 + iVar175 + _UNK_001051d8 >> 0xb;
   iVar85 = auVar139._12_4_ + uStack_2c + iVar177 + _UNK_001051dc >> 0xb;
   iVar69 = CONCAT22(auVar202._8_2_, _UNK_00105218 * auVar61._8_2_);
   auVar137._0_8_ = CONCAT26(auVar202._10_2_, CONCAT24(_UNK_0010521a * auVar61._10_2_, iVar69));
   auVar137._8_2_ = _UNK_0010521c * auVar61._12_2_;
   auVar137._10_2_ = auVar202._12_2_;
   auVar140._12_2_ = _UNK_0010521e * auVar61._14_2_;
   auVar140._0_12_ = auVar137;
   auVar140._14_2_ = auVar202._14_2_;
   iVar54 = CONCAT22(auVar202._6_2_, _UNK_00105216 * auVar61._6_2_);
   Var41 = CONCAT64(CONCAT42(iVar54, auVar202._4_2_), CONCAT22(_UNK_00105214 * auVar61._4_2_, _UNK_00105216 * auVar61._6_2_));
   auVar30._4_8_ = (long)( (unkuint10)Var41 >> 0x10 );
   auVar30._2_2_ = auVar202._2_2_;
   auVar30._0_2_ = _UNK_00105212 * auVar61._2_2_;
   iVar150 = iVar69 + CONCAT22(auVar96._8_2_, _UNK_00105168 * auVar95._8_2_) + __LC7 >> 0xb;
   iVar160 = (int)( (ulong)auVar137._0_8_ >> 0x20 ) + CONCAT22(auVar96._10_2_, _UNK_0010516a * auVar95._10_2_) + _UNK_001051d4 >> 0xb;
   iVar166 = auVar137._8_4_ + CONCAT22(auVar96._12_2_, _UNK_0010516c * auVar95._12_2_) + _UNK_001051d8 >> 0xb;
   iVar145 = auVar140._12_4_ + CONCAT22(auVar96._14_2_, _UNK_0010516e * auVar95._14_2_) + _UNK_001051dc >> 0xb;
   auVar19._2_2_ = _UNK_00105222;
   auVar19._0_2_ = __LC12;
   auVar19._4_2_ = _UNK_00105224;
   auVar19._6_2_ = _UNK_00105226;
   auVar19._8_2_ = _UNK_00105228;
   auVar19._10_2_ = _UNK_0010522a;
   auVar19._12_2_ = _UNK_0010522c;
   auVar19._14_2_ = _UNK_0010522e;
   auVar187 = pmulhw(auVar132, auVar19);
   iVar175 = CONCAT22(auVar202._0_2_, __LC11 * auVar61._0_2_) + local_88 + __LC7 >> 0xb;
   iVar177 = auVar30._0_4_ + uStack_84 + _UNK_001051d4 >> 0xb;
   iVar182 = (int)( (unkuint10)Var41 >> 0x10 ) + uStack_80 + _UNK_001051d8 >> 0xb;
   iVar183 = iVar54 + uStack_7c + _UNK_001051dc >> 0xb;
   iVar69 = CONCAT22(auVar187._8_2_, _UNK_00105228 * auVar132._8_2_);
   auVar56._0_8_ = CONCAT26(auVar187._10_2_, CONCAT24(_UNK_0010522a * auVar132._10_2_, iVar69));
   auVar56._8_2_ = _UNK_0010522c * auVar132._12_2_;
   auVar56._10_2_ = auVar187._12_2_;
   auVar62._12_2_ = _UNK_0010522e * auVar132._14_2_;
   auVar62._0_12_ = auVar56;
   auVar62._14_2_ = auVar187._14_2_;
   iVar54 = CONCAT22(auVar187._6_2_, _UNK_00105226 * auVar132._6_2_);
   Var41 = CONCAT64(CONCAT42(iVar54, auVar187._4_2_), CONCAT22(_UNK_00105224 * auVar132._4_2_, _UNK_00105226 * auVar132._6_2_));
   auVar31._4_8_ = (long)( (unkuint10)Var41 >> 0x10 );
   auVar31._2_2_ = auVar187._2_2_;
   auVar31._0_2_ = _UNK_00105222 * auVar132._2_2_;
   iVar149 = CONCAT22(auVar187._0_2_, __LC12 * auVar132._0_2_) + CONCAT22(auVar169._0_2_, __LC2 * auVar168._0_2_) + iVar165 + __LC7 >> 0xb;
   iVar165 = auVar31._0_4_ + CONCAT22(auVar169._2_2_, _UNK_00105182 * auVar168._2_2_) + iVar172 + _UNK_001051d4 >> 0xb;
   iVar172 = (int)( (unkuint10)Var41 >> 0x10 ) + CONCAT22(auVar169._4_2_, _UNK_00105184 * auVar168._4_2_) + iVar174 + _UNK_001051d8 >> 0xb;
   iVar174 = iVar54 + CONCAT22(auVar169._6_2_, _UNK_00105186 * auVar168._6_2_) + iVar68 + _UNK_001051dc >> 0xb;
   iVar54 = iVar69 + local_58 + iVar152 + __LC7 >> 0xb;
   iVar69 = (int)( (ulong)auVar56._0_8_ >> 0x20 ) + uStack_54 + iVar157 + _UNK_001051d4 >> 0xb;
   iVar74 = auVar56._8_4_ + uStack_50 + iVar159 + _UNK_001051d8 >> 0xb;
   iVar76 = auVar62._12_4_ + uStack_4c + iVar163 + _UNK_001051dc >> 0xb;
   iVar68 = iVar121 + iVar151;
   iVar70 = iVar129 + iVar118;
   iVar75 = iVar185 + iVar120;
   iVar81 = iVar162 + iVar125;
   iVar152 = iVar178 + iVar147;
   iVar157 = iVar148 + iVar85;
   iVar159 = iVar175 + iVar145;
   iVar163 = iVar149 + iVar76;
   auVar116._0_2_ = (short)iVar121 - (short)iVar151;
   auVar116._2_2_ = (short)iVar129 - (short)iVar118;
   auVar116._4_2_ = (short)iVar185 - (short)iVar120;
   auVar116._6_2_ = (short)iVar162 - (short)iVar125;
   auVar116._8_2_ = (short)iVar178 - (short)iVar147;
   auVar116._10_2_ = (short)iVar148 - (short)iVar85;
   auVar116._12_2_ = (short)iVar175 - (short)iVar145;
   auVar116._14_2_ = (short)iVar149 - (short)iVar76;
   iVar151 = iVar179 + iVar208;
   iVar162 = iVar211 + iVar84;
   iVar118 = iVar177 + iVar166;
   iVar121 = iVar165 + iVar74;
   iVar85 = iVar126 + iVar144;
   iVar120 = iVar143 + iVar173;
   iVar125 = iVar191 + iVar106;
   iVar129 = iVar171 + iVar109;
   iVar145 = iVar128 + iVar135;
   iVar147 = iVar146 + iVar164;
   iVar148 = iVar194 + iVar91;
   iVar149 = iVar176 + iVar103;
   sVar184 = (short)iVar126 - (short)iVar144;
   sVar189 = (short)iVar143 - (short)iVar173;
   sVar190 = (short)iVar191 - (short)iVar106;
   sVar192 = (short)iVar171 - (short)iVar109;
   sVar193 = (short)iVar179 - (short)iVar208;
   sVar195 = (short)iVar211 - (short)iVar84;
   sVar196 = (short)iVar177 - (short)iVar166;
   sVar198 = (short)iVar165 - (short)iVar74;
   iVar84 = iVar180 + iVar205;
   iVar106 = iVar161 + iVar83;
   iVar109 = iVar182 + iVar160;
   iVar143 = iVar172 + iVar69;
   sVar199 = (short)iVar128 - (short)iVar135;
   sVar203 = (short)iVar146 - (short)iVar164;
   sVar204 = (short)iVar194 - (short)iVar91;
   sVar206 = (short)iVar176 - (short)iVar103;
   sVar207 = (short)iVar180 - (short)iVar205;
   sVar209 = (short)iVar161 - (short)iVar83;
   sVar210 = (short)iVar182 - (short)iVar160;
   sVar212 = (short)iVar172 - (short)iVar69;
   iVar103 = iVar197 + iVar200;
   iVar135 = iVar119 + iVar82;
   iVar144 = iVar183 + iVar150;
   iVar146 = iVar174 + iVar54;
   iVar69 = iVar130 + iVar127;
   iVar74 = iVar156 + iVar158;
   iVar76 = iVar86 + iVar87;
   iVar83 = iVar89 + iVar88;
   iVar164 = iVar103 + iVar152;
   iVar171 = iVar135 + iVar157;
   iVar173 = iVar144 + iVar159;
   iVar176 = iVar146 + iVar163;
   auVar80._0_2_ = (short)iVar130 - (short)iVar127;
   auVar80._2_2_ = (short)iVar156 - (short)iVar158;
   auVar80._4_2_ = (short)iVar86 - (short)iVar87;
   auVar80._6_2_ = (short)iVar89 - (short)iVar88;
   auVar80._8_2_ = (short)iVar197 - (short)iVar200;
   auVar80._10_2_ = (short)iVar119 - (short)iVar82;
   auVar80._12_2_ = (short)iVar183 - (short)iVar150;
   auVar80._14_2_ = (short)iVar174 - (short)iVar54;
   iVar88 = iVar69 + iVar68;
   iVar91 = iVar74 + iVar70;
   iVar86 = iVar76 + iVar75;
   iVar119 = iVar83 + iVar81;
   auVar181._0_2_ = auVar80._0_2_ + auVar116._0_2_;
   auVar181._2_2_ = auVar80._2_2_ + auVar116._2_2_;
   auVar181._4_2_ = auVar80._4_2_ + auVar116._4_2_;
   auVar181._6_2_ = auVar80._6_2_ + auVar116._6_2_;
   auVar181._8_2_ = auVar80._8_2_ + auVar116._8_2_;
   auVar181._10_2_ = auVar80._10_2_ + auVar116._10_2_;
   auVar181._12_2_ = auVar80._12_2_ + auVar116._12_2_;
   auVar181._14_2_ = auVar80._14_2_ + auVar116._14_2_;
   iVar126 = iVar145 + iVar85;
   iVar158 = iVar147 + iVar120;
   iVar128 = iVar148 + iVar125;
   iVar130 = iVar149 + iVar129;
   auVar63._0_2_ = (short)iVar68 - (short)iVar69;
   auVar63._2_2_ = (short)iVar70 - (short)iVar74;
   auVar63._4_2_ = (short)iVar75 - (short)iVar76;
   auVar63._6_2_ = (short)iVar81 - (short)iVar83;
   auVar63._8_2_ = (short)iVar152 - (short)iVar103;
   auVar63._10_2_ = (short)iVar157 - (short)iVar135;
   auVar63._12_2_ = (short)iVar159 - (short)iVar144;
   auVar63._14_2_ = (short)iVar163 - (short)iVar146;
   auVar141._0_2_ = sVar184 + auVar80._0_2_;
   auVar141._2_2_ = sVar189 + auVar80._2_2_;
   auVar141._4_2_ = sVar190 + auVar80._4_2_;
   auVar141._6_2_ = sVar192 + auVar80._6_2_;
   auVar141._8_2_ = sVar193 + auVar80._8_2_;
   auVar141._10_2_ = sVar195 + auVar80._10_2_;
   auVar141._12_2_ = sVar196 + auVar80._12_2_;
   auVar141._14_2_ = sVar198 + auVar80._14_2_;
   iVar135 = iVar84 + iVar151;
   iVar144 = iVar106 + iVar162;
   iVar146 = iVar109 + iVar118;
   iVar156 = iVar143 + iVar121;
   auVar117._0_2_ = (short)iVar85 - (short)iVar145;
   auVar117._2_2_ = (short)iVar120 - (short)iVar147;
   auVar117._4_2_ = (short)iVar125 - (short)iVar148;
   auVar117._6_2_ = (short)iVar129 - (short)iVar149;
   auVar117._8_2_ = (short)iVar151 - (short)iVar84;
   auVar117._10_2_ = (short)iVar162 - (short)iVar106;
   auVar117._12_2_ = (short)iVar118 - (short)iVar109;
   auVar117._14_2_ = (short)iVar121 - (short)iVar143;
   auVar72._0_2_ = auVar117._0_2_ + auVar63._0_2_;
   auVar72._2_2_ = auVar117._2_2_ + auVar63._2_2_;
   auVar72._4_2_ = auVar117._4_2_ + auVar63._4_2_;
   auVar72._6_2_ = auVar117._6_2_ + auVar63._6_2_;
   auVar72._8_2_ = auVar117._8_2_ + auVar63._8_2_;
   auVar72._10_2_ = auVar117._10_2_ + auVar63._10_2_;
   auVar72._12_2_ = auVar117._12_2_ + auVar63._12_2_;
   auVar72._14_2_ = auVar117._14_2_ + auVar63._14_2_;
   auVar187._2_2_ = _UNK_00105162;
   auVar187._0_2_ = __LC0;
   auVar187._4_2_ = _UNK_00105164;
   auVar187._6_2_ = _UNK_00105166;
   auVar187._8_2_ = _UNK_00105168;
   auVar187._10_2_ = _UNK_0010516a;
   auVar187._12_2_ = _UNK_0010516c;
   auVar187._14_2_ = _UNK_0010516e;
   auVar202 = pmulhw(auVar72, auVar187);
   local_c8 = CONCAT22(auVar202._8_2_, _UNK_00105168 * auVar72._8_2_);
   _local_c8 = CONCAT26(auVar202._10_2_, CONCAT24(_UNK_0010516a * auVar72._10_2_, local_c8));
   uStack_c0 = CONCAT22(auVar202._12_2_, _UNK_0010516c * auVar72._12_2_);
   uStack_bc = CONCAT22(auVar202._14_2_, _UNK_0010516e * auVar72._14_2_);
   auVar73._0_2_ = sVar199 + auVar116._0_2_;
   auVar73._2_2_ = sVar203 + auVar116._2_2_;
   auVar73._4_2_ = sVar204 + auVar116._4_2_;
   auVar73._6_2_ = sVar206 + auVar116._6_2_;
   auVar73._8_2_ = sVar207 + auVar116._8_2_;
   auVar73._10_2_ = sVar209 + auVar116._10_2_;
   auVar73._12_2_ = sVar210 + auVar116._12_2_;
   auVar73._14_2_ = sVar212 + auVar116._14_2_;
   local_58 = CONCAT22(auVar202._0_2_, __LC0 * auVar72._0_2_);
   uStack_54 = CONCAT22(auVar202._2_2_, _UNK_00105162 * auVar72._2_2_);
   uStack_50 = CONCAT22(auVar202._4_2_, _UNK_00105164 * auVar72._4_2_);
   uStack_4c = CONCAT22(auVar202._6_2_, _UNK_00105166 * auVar72._6_2_);
   auVar133._0_2_ = sVar199 + sVar184;
   auVar133._2_2_ = sVar203 + sVar189;
   auVar133._4_2_ = sVar204 + sVar190;
   auVar133._6_2_ = sVar206 + sVar192;
   auVar133._8_2_ = sVar207 + sVar193;
   auVar133._10_2_ = sVar209 + sVar195;
   auVar133._12_2_ = sVar210 + sVar196;
   auVar133._14_2_ = sVar212 + sVar198;
   auVar188._0_2_ = auVar73._0_2_ + auVar141._0_2_;
   auVar188._2_2_ = auVar73._2_2_ + auVar141._2_2_;
   auVar188._4_2_ = auVar73._4_2_ + auVar141._4_2_;
   auVar188._6_2_ = auVar73._6_2_ + auVar141._6_2_;
   auVar188._8_2_ = auVar73._8_2_ + auVar141._8_2_;
   auVar188._10_2_ = auVar73._10_2_ + auVar141._10_2_;
   auVar188._12_2_ = auVar73._12_2_ + auVar141._12_2_;
   auVar188._14_2_ = auVar73._14_2_ + auVar141._14_2_;
   auVar96._2_2_ = _UNK_00105172;
   auVar96._0_2_ = __LC1;
   auVar96._4_2_ = _UNK_00105174;
   auVar96._6_2_ = _UNK_00105176;
   auVar96._8_2_ = _UNK_00105178;
   auVar96._10_2_ = _UNK_0010517a;
   auVar96._12_2_ = _UNK_0010517c;
   auVar96._14_2_ = _UNK_0010517e;
   auVar202 = pmulhw(auVar188, auVar96);
   iVar69 = CONCAT22(auVar202._8_2_, _UNK_00105178 * auVar188._8_2_);
   auVar92._0_8_ = CONCAT26(auVar202._10_2_, CONCAT24(_UNK_0010517a * auVar188._10_2_, iVar69));
   auVar92._8_2_ = _UNK_0010517c * auVar188._12_2_;
   auVar92._10_2_ = auVar202._12_2_;
   auVar98._12_2_ = _UNK_0010517e * auVar188._14_2_;
   auVar98._0_12_ = auVar92;
   auVar98._14_2_ = auVar202._14_2_;
   iVar54 = CONCAT22(auVar202._6_2_, _UNK_00105176 * auVar188._6_2_);
   Var41 = CONCAT64(CONCAT42(iVar54, auVar202._4_2_), CONCAT22(_UNK_00105174 * auVar188._4_2_, _UNK_00105176 * auVar188._6_2_));
   auVar32._4_8_ = (long)( (unkuint10)Var41 >> 0x10 );
   auVar32._2_2_ = auVar202._2_2_;
   auVar32._0_2_ = _UNK_00105172 * auVar188._2_2_;
   iVar87 = CONCAT22(auVar202._0_2_, __LC1 * auVar188._0_2_);
   auVar2._2_2_ = _UNK_00105182;
   auVar2._0_2_ = __LC2;
   auVar2._4_2_ = _UNK_00105184;
   auVar2._6_2_ = _UNK_00105186;
   auVar2._8_2_ = _UNK_00105188;
   auVar2._10_2_ = _UNK_0010518a;
   auVar2._12_2_ = _UNK_0010518c;
   auVar2._14_2_ = _UNK_0010518e;
   auVar202 = pmulhw(auVar181, auVar2);
   local_a8 = CONCAT22(auVar202._8_2_, _UNK_00105188 * auVar181._8_2_);
   uStack_a4 = CONCAT22(auVar202._10_2_, _UNK_0010518a * auVar181._10_2_);
   uStack_a0 = CONCAT22(auVar202._12_2_, _UNK_0010518c * auVar181._12_2_);
   uStack_9c = CONCAT22(auVar202._14_2_, _UNK_0010518e * auVar181._14_2_);
   local_b8 = CONCAT22(auVar202._0_2_, __LC2 * auVar181._0_2_);
   uStack_b4 = CONCAT22(auVar202._2_2_, _UNK_00105182 * auVar181._2_2_);
   uStack_b0 = CONCAT22(auVar202._4_2_, _UNK_00105184 * auVar181._4_2_);
   uStack_ac = CONCAT22(auVar202._6_2_, _UNK_00105186 * auVar181._6_2_);
   auVar4._2_2_ = _UNK_00105192;
   auVar4._0_2_ = __LC3;
   auVar4._4_2_ = _UNK_00105194;
   auVar4._6_2_ = _UNK_00105196;
   auVar4._8_2_ = _UNK_00105198;
   auVar4._10_2_ = _UNK_0010519a;
   auVar4._12_2_ = _UNK_0010519c;
   auVar4._14_2_ = _UNK_0010519e;
   auVar202 = pmulhw(auVar133, auVar4);
   local_88 = CONCAT22(auVar202._8_2_, _UNK_00105198 * auVar133._8_2_);
   uStack_84 = CONCAT22(auVar202._10_2_, _UNK_0010519a * auVar133._10_2_);
   uStack_80 = CONCAT22(auVar202._12_2_, _UNK_0010519c * auVar133._12_2_);
   uStack_7c = CONCAT22(auVar202._14_2_, _UNK_0010519e * auVar133._14_2_);
   local_98 = CONCAT22(auVar202._0_2_, __LC3 * auVar133._0_2_);
   uStack_94 = CONCAT22(auVar202._2_2_, _UNK_00105192 * auVar133._2_2_);
   uStack_90 = CONCAT22(auVar202._4_2_, _UNK_00105194 * auVar133._4_2_);
   uStack_8c = CONCAT22(auVar202._6_2_, _UNK_00105196 * auVar133._6_2_);
   auVar6._2_2_ = _UNK_001051a2;
   auVar6._0_2_ = __LC4;
   auVar6._4_2_ = _UNK_001051a4;
   auVar6._6_2_ = _UNK_001051a6;
   auVar6._8_2_ = _UNK_001051a8;
   auVar6._10_2_ = _UNK_001051aa;
   auVar6._12_2_ = _UNK_001051ac;
   auVar6._14_2_ = _UNK_001051ae;
   auVar202 = pmulhw(auVar141, auVar6);
   iVar106 = CONCAT22(auVar202._8_2_, _UNK_001051a8 * auVar141._8_2_);
   auVar131._0_8_ = CONCAT26(auVar202._10_2_, CONCAT24(_UNK_001051aa * auVar141._10_2_, iVar106));
   auVar131._8_2_ = _UNK_001051ac * auVar141._12_2_;
   auVar131._10_2_ = auVar202._12_2_;
   auVar134._12_2_ = _UNK_001051ae * auVar141._14_2_;
   auVar134._0_12_ = auVar131;
   auVar134._14_2_ = auVar202._14_2_;
   iVar68 = CONCAT22(auVar202._6_2_, _UNK_001051a6 * auVar141._6_2_);
   Var42 = CONCAT64(CONCAT42(iVar68, auVar202._4_2_), CONCAT22(_UNK_001051a4 * auVar141._4_2_, _UNK_001051a6 * auVar141._6_2_));
   auVar33._4_8_ = (long)( (unkuint10)Var42 >> 0x10 );
   auVar33._2_2_ = auVar202._2_2_;
   auVar33._0_2_ = _UNK_001051a2 * auVar141._2_2_;
   iVar106 = iVar106 + iVar69;
   iVar82 = (int)( (ulong)auVar92._0_8_ >> 0x20 );
   iVar109 = (int)( (ulong)auVar131._0_8_ >> 0x20 ) + iVar82;
   iVar89 = auVar131._8_4_ + auVar92._8_4_;
   iVar120 = auVar134._12_4_ + auVar98._12_4_;
   iVar118 = CONCAT22(auVar202._0_2_, __LC4 * auVar141._0_2_) + iVar87;
   iVar121 = auVar33._0_4_ + auVar32._0_4_;
   iVar103 = (int)( (unkuint10)Var41 >> 0x10 );
   iVar145 = (int)( (unkuint10)Var42 >> 0x10 ) + iVar103;
   iVar68 = iVar68 + iVar54;
   auVar8._2_2_ = _UNK_001051b2;
   auVar8._0_2_ = __LC5;
   auVar8._4_2_ = _UNK_001051b4;
   auVar8._6_2_ = _UNK_001051b6;
   auVar8._8_2_ = _UNK_001051b8;
   auVar8._10_2_ = _UNK_001051ba;
   auVar8._12_2_ = _UNK_001051bc;
   auVar8._14_2_ = _UNK_001051be;
   auVar202 = pmulhw(auVar73, auVar8);
   iVar125 = CONCAT22(auVar202._8_2_, _UNK_001051b8 * auVar73._8_2_);
   auVar138._0_8_ = CONCAT26(auVar202._10_2_, CONCAT24(_UNK_001051ba * auVar73._10_2_, iVar125));
   auVar138._8_2_ = _UNK_001051bc * auVar73._12_2_;
   auVar138._10_2_ = auVar202._12_2_;
   auVar142._12_2_ = _UNK_001051be * auVar73._14_2_;
   auVar142._0_12_ = auVar138;
   auVar142._14_2_ = auVar202._14_2_;
   iVar125 = iVar125 + iVar69;
   iVar82 = (int)( (ulong)auVar138._0_8_ >> 0x20 ) + iVar82;
   iVar127 = auVar138._8_4_ + auVar92._8_4_;
   iVar129 = auVar142._12_4_ + auVar98._12_4_;
   iVar69 = CONCAT22(auVar202._6_2_, _UNK_001051b6 * auVar73._6_2_);
   Var41 = CONCAT64(CONCAT42(iVar69, auVar202._4_2_), CONCAT22(_UNK_001051b4 * auVar73._4_2_, _UNK_001051b6 * auVar73._6_2_));
   auVar34._4_8_ = (long)( (unkuint10)Var41 >> 0x10 );
   auVar34._2_2_ = auVar202._2_2_;
   auVar34._0_2_ = _UNK_001051b2 * auVar73._2_2_;
   iVar87 = CONCAT22(auVar202._0_2_, __LC5 * auVar73._0_2_) + iVar87;
   iVar147 = auVar34._0_4_ + auVar32._0_4_;
   iVar103 = (int)( (unkuint10)Var41 >> 0x10 ) + iVar103;
   iVar69 = iVar69 + iVar54;
   sVar90 = __LC6 * auVar116._0_2_;
   sVar101 = _UNK_001051c2 * auVar116._2_2_;
   sVar102 = _UNK_001051c4 * auVar116._4_2_;
   sVar104 = _UNK_001051c6 * auVar116._6_2_;
   sVar105 = _UNK_001051c8 * auVar116._8_2_;
   sVar107 = _UNK_001051ca * auVar116._10_2_;
   sVar108 = _UNK_001051cc * auVar116._12_2_;
   sVar110 = _UNK_001051ce * auVar116._14_2_;
   iVar54 = iVar158 + iVar91 + _LC24._4_4_;
   iVar70 = iVar128 + iVar86 + _UNK_00105238;
   iVar74 = iVar130 + iVar119 + _UNK_0010523c;
   auVar10._2_2_ = _UNK_001051c2;
   auVar10._0_2_ = __LC6;
   auVar10._4_2_ = _UNK_001051c4;
   auVar10._6_2_ = _UNK_001051c6;
   auVar10._8_2_ = _UNK_001051c8;
   auVar10._10_2_ = _UNK_001051ca;
   auVar10._12_2_ = _UNK_001051cc;
   auVar10._14_2_ = _UNK_001051ce;
   auVar202 = pmulhw(auVar116, auVar10);
   iVar143 = ( iVar88 - iVar126 ) + (int)_LC24;
   iVar151 = ( iVar91 - iVar158 ) + _LC24._4_4_;
   iVar158 = ( iVar86 - iVar128 ) + _UNK_00105238;
   iVar162 = ( iVar119 - iVar130 ) + _UNK_0010523c;
   *param_1 = iVar126 + iVar88 + (int)_LC24 >> 5;
   param_1[1] = iVar54 >> 5;
   param_1[2] = iVar70 >> 5;
   param_1[3] = iVar74 >> 5;
   iVar81 = CONCAT22(auVar202._8_2_, sVar105);
   auVar93._0_8_ = CONCAT26(auVar202._10_2_, CONCAT24(sVar107, iVar81));
   auVar93._8_2_ = sVar108;
   auVar93._10_2_ = auVar202._12_2_;
   auVar99._12_2_ = sVar110;
   auVar99._0_12_ = auVar93;
   auVar99._14_2_ = auVar202._14_2_;
   param_1[4] = iVar135 + iVar164 + iVar55 >> 5;
   param_1[5] = iVar144 + iVar171 + iVar51 >> 5;
   param_1[6] = iVar146 + iVar173 + iVar52 >> 5;
   param_1[7] = iVar156 + iVar176 + iVar53 >> 5;
   iVar76 = _UNK_0010524c;
   iVar75 = _UNK_00105248;
   iVar74 = _UNK_00105244;
   iVar70 = __LC14;
   iVar54 = CONCAT22(auVar202._6_2_, sVar104);
   Var41 = CONCAT64(CONCAT42(iVar54, auVar202._4_2_), CONCAT22(sVar102, sVar104));
   auVar35._4_8_ = (long)( (unkuint10)Var41 >> 0x10 );
   auVar35._2_2_ = auVar202._2_2_;
   auVar35._0_2_ = sVar101;
   iVar83 = (int)( (ulong)auVar93._0_8_ >> 0x20 ) + uStack_a4 + iVar82 + _UNK_00105244;
   iVar84 = auVar93._8_4_ + uStack_a0 + iVar127 + _UNK_00105248;
   iVar85 = auVar99._12_4_ + uStack_9c + iVar129 + _UNK_0010524c;
   iVar88 = CONCAT22(auVar202._0_2_, sVar90) + local_b8 + iVar87 + __LC14;
   iVar91 = auVar35._0_4_ + uStack_b4 + iVar147 + _UNK_00105244;
   iVar86 = (int)( (unkuint10)Var41 >> 0x10 ) + uStack_b0 + iVar103 + _UNK_00105248;
   iVar54 = iVar54 + uStack_ac + iVar69 + _UNK_0010524c;
   param_1[0xc] = iVar81 + local_a8 + iVar125 + __LC14 >> 0x12;
   param_1[0xd] = iVar83 >> 0x12;
   param_1[0xe] = iVar84 >> 0x12;
   param_1[0xf] = iVar85 >> 0x12;
   sVar110 = _UNK_001051ee;
   sVar108 = _UNK_001051ec;
   sVar107 = _UNK_001051ea;
   sVar105 = _UNK_001051e8;
   sVar104 = _UNK_001051e6;
   sVar102 = _UNK_001051e4;
   sVar101 = _UNK_001051e2;
   sVar90 = __LC8;
   param_1[8] = iVar88 >> 0x12;
   param_1[9] = iVar91 >> 0x12;
   param_1[10] = iVar86 >> 0x12;
   param_1[0xb] = iVar54 >> 0x12;
   sVar50 = _UNK_001051fe;
   sVar49 = _UNK_001051fc;
   sVar48 = _UNK_001051fa;
   sVar47 = _UNK_001051f8;
   sVar46 = _UNK_001051f6;
   sVar45 = _UNK_001051f4;
   sVar44 = _UNK_001051f2;
   sVar43 = __LC9;
   auVar12._2_2_ = _UNK_001051e2;
   auVar12._0_2_ = __LC8;
   auVar12._4_2_ = _UNK_001051e4;
   auVar12._6_2_ = _UNK_001051e6;
   auVar12._8_2_ = _UNK_001051e8;
   auVar12._10_2_ = _UNK_001051ea;
   auVar12._12_2_ = _UNK_001051ec;
   auVar12._14_2_ = _UNK_001051ee;
   auVar202 = pmulhw(auVar63, auVar12);
   iVar81 = CONCAT22(auVar202._8_2_, sVar105 * auVar63._8_2_);
   auVar94._0_8_ = CONCAT26(auVar202._10_2_, CONCAT24(sVar107 * auVar63._10_2_, iVar81));
   auVar94._8_2_ = sVar108 * auVar63._12_2_;
   auVar94._10_2_ = auVar202._12_2_;
   auVar100._12_2_ = sVar110 * auVar63._14_2_;
   auVar100._0_12_ = auVar94;
   auVar100._14_2_ = auVar202._14_2_;
   iVar54 = CONCAT22(auVar202._6_2_, sVar104 * auVar63._6_2_);
   Var41 = CONCAT64(CONCAT42(iVar54, auVar202._4_2_), CONCAT22(sVar102 * auVar63._4_2_, sVar104 * auVar63._6_2_));
   auVar36._4_8_ = (long)( (unkuint10)Var41 >> 0x10 );
   auVar36._2_2_ = auVar202._2_2_;
   auVar36._0_2_ = sVar101 * auVar63._2_2_;
   param_1[0x14] = iVar81 + local_c8 + iVar70 >> 0x12;
   param_1[0x15] = (int)( (ulong)auVar94._0_8_ >> 0x20 ) + uStack_c4 + iVar74 >> 0x12;
   param_1[0x16] = auVar94._8_4_ + uStack_c0 + iVar75 >> 0x12;
   param_1[0x17] = auVar100._12_4_ + uStack_bc + iVar76 >> 0x12;
   param_1[0x10] = CONCAT22(auVar202._0_2_, sVar90 * auVar63._0_2_) + local_58 + iVar70 >> 0x12;
   param_1[0x11] = auVar36._0_4_ + uStack_54 + iVar74 >> 0x12;
   param_1[0x12] = (int)( (unkuint10)Var41 >> 0x10 ) + uStack_50 + iVar75 >> 0x12;
   param_1[0x13] = iVar54 + uStack_4c + iVar76 >> 0x12;
   auVar22._2_2_ = sVar189;
   auVar22._0_2_ = sVar184;
   auVar22._4_2_ = sVar190;
   auVar22._6_2_ = sVar192;
   auVar22._8_2_ = sVar193;
   auVar22._10_2_ = sVar195;
   auVar22._12_2_ = sVar196;
   auVar22._14_2_ = sVar198;
   auVar14._2_2_ = _UNK_001051f2;
   auVar14._0_2_ = __LC9;
   auVar14._4_2_ = _UNK_001051f4;
   auVar14._6_2_ = _UNK_001051f6;
   auVar14._8_2_ = _UNK_001051f8;
   auVar14._10_2_ = _UNK_001051fa;
   auVar14._12_2_ = _UNK_001051fc;
   auVar14._14_2_ = _UNK_001051fe;
   auVar202 = pmulhw(auVar22, auVar14);
   auVar21._2_2_ = sVar203;
   auVar21._0_2_ = sVar199;
   auVar21._4_2_ = sVar204;
   auVar21._6_2_ = sVar206;
   auVar21._8_2_ = sVar207;
   auVar21._10_2_ = sVar209;
   auVar21._12_2_ = sVar210;
   auVar21._14_2_ = sVar212;
   param_1[0x20] = iVar143 >> 5;
   param_1[0x21] = iVar151 >> 5;
   param_1[0x22] = iVar158 >> 5;
   param_1[0x23] = iVar162 >> 5;
   param_1[0x24] = ( iVar164 - iVar135 ) + iVar55 >> 5;
   param_1[0x25] = ( iVar171 - iVar144 ) + iVar51 >> 5;
   param_1[0x26] = ( iVar173 - iVar146 ) + iVar52 >> 5;
   param_1[0x27] = ( iVar176 - iVar156 ) + iVar53 >> 5;
   iVar55 = CONCAT22(auVar202._8_2_, sVar47 * sVar193);
   auVar57._0_8_ = CONCAT26(auVar202._10_2_, CONCAT24(sVar48 * sVar195, iVar55));
   auVar57._8_2_ = sVar49 * sVar196;
   auVar57._10_2_ = auVar202._12_2_;
   auVar64._12_2_ = sVar50 * sVar198;
   auVar64._0_12_ = auVar57;
   auVar64._14_2_ = auVar202._14_2_;
   iVar54 = CONCAT22(auVar202._6_2_, sVar46 * sVar192);
   Var41 = CONCAT64(CONCAT42(iVar54, auVar202._4_2_), CONCAT22(sVar45 * sVar190, sVar46 * sVar192));
   auVar37._4_8_ = (long)( (unkuint10)Var41 >> 0x10 );
   auVar37._2_2_ = auVar202._2_2_;
   auVar37._0_2_ = sVar44 * sVar189;
   param_1[0x1c] = iVar55 + local_88 + iVar106 + iVar70 >> 0x12;
   param_1[0x1d] = (int)( (ulong)auVar57._0_8_ >> 0x20 ) + uStack_84 + iVar109 + iVar74 >> 0x12;
   param_1[0x1e] = auVar57._8_4_ + uStack_80 + iVar89 + iVar75 >> 0x12;
   param_1[0x1f] = auVar64._12_4_ + uStack_7c + iVar120 + iVar76 >> 0x12;
   sVar110 = _UNK_0010520e;
   sVar108 = _UNK_0010520c;
   sVar107 = _UNK_0010520a;
   sVar105 = _UNK_00105208;
   sVar104 = _UNK_00105206;
   sVar102 = _UNK_00105204;
   sVar101 = _UNK_00105202;
   sVar90 = __LC10;
   param_1[0x18] = CONCAT22(auVar202._0_2_, sVar43 * sVar184) + local_98 + iVar118 + iVar70 >> 0x12;
   param_1[0x19] = auVar37._0_4_ + uStack_94 + iVar121 + iVar74 >> 0x12;
   param_1[0x1a] = (int)( (unkuint10)Var41 >> 0x10 ) + uStack_90 + iVar145 + iVar75 >> 0x12;
   param_1[0x1b] = iVar54 + uStack_8c + iVar68 + iVar76 >> 0x12;
   auVar16._2_2_ = _UNK_00105202;
   auVar16._0_2_ = __LC10;
   auVar16._4_2_ = _UNK_00105204;
   auVar16._6_2_ = _UNK_00105206;
   auVar16._8_2_ = _UNK_00105208;
   auVar16._10_2_ = _UNK_0010520a;
   auVar16._12_2_ = _UNK_0010520c;
   auVar16._14_2_ = _UNK_0010520e;
   auVar202 = pmulhw(auVar21, auVar16);
   iVar55 = CONCAT22(auVar202._8_2_, sVar105 * sVar207);
   auVar58._0_8_ = CONCAT26(auVar202._10_2_, CONCAT24(sVar107 * sVar209, iVar55));
   auVar58._8_2_ = sVar108 * sVar210;
   auVar58._10_2_ = auVar202._12_2_;
   auVar65._12_2_ = sVar110 * sVar212;
   auVar65._0_12_ = auVar58;
   auVar65._14_2_ = auVar202._14_2_;
   iVar54 = CONCAT22(auVar202._6_2_, sVar104 * sVar206);
   Var41 = CONCAT64(CONCAT42(iVar54, auVar202._4_2_), CONCAT22(sVar102 * sVar204, sVar104 * sVar206));
   auVar38._4_8_ = (long)( (unkuint10)Var41 >> 0x10 );
   auVar38._2_2_ = auVar202._2_2_;
   auVar38._0_2_ = sVar101 * sVar203;
   param_1[0x2c] = iVar55 + local_88 + iVar125 + iVar70 >> 0x12;
   param_1[0x2d] = (int)( (ulong)auVar58._0_8_ >> 0x20 ) + uStack_84 + iVar82 + iVar74 >> 0x12;
   param_1[0x2e] = auVar58._8_4_ + uStack_80 + iVar127 + iVar75 >> 0x12;
   param_1[0x2f] = auVar65._12_4_ + uStack_7c + iVar129 + iVar76 >> 0x12;
   sVar43 = _UNK_0010521e;
   sVar110 = _UNK_0010521c;
   sVar108 = _UNK_0010521a;
   sVar107 = _UNK_00105218;
   sVar105 = _UNK_00105216;
   sVar104 = _UNK_00105214;
   sVar102 = _UNK_00105212;
   sVar101 = __LC11;
   param_1[0x28] = CONCAT22(auVar202._0_2_, sVar90 * sVar199) + local_98 + iVar87 + iVar70 >> 0x12;
   param_1[0x29] = auVar38._0_4_ + uStack_94 + iVar147 + iVar74 >> 0x12;
   param_1[0x2a] = (int)( (unkuint10)Var41 >> 0x10 ) + uStack_90 + iVar103 + iVar75 >> 0x12;
   param_1[0x2b] = iVar54 + uStack_8c + iVar69 + iVar76 >> 0x12;
   auVar18._2_2_ = _UNK_00105212;
   auVar18._0_2_ = __LC11;
   auVar18._4_2_ = _UNK_00105214;
   auVar18._6_2_ = _UNK_00105216;
   auVar18._8_2_ = _UNK_00105218;
   auVar18._10_2_ = _UNK_0010521a;
   auVar18._12_2_ = _UNK_0010521c;
   auVar18._14_2_ = _UNK_0010521e;
   auVar202 = pmulhw(auVar117, auVar18);
   iVar69 = CONCAT22(auVar202._8_2_, sVar107 * auVar117._8_2_);
   auVar59._0_8_ = CONCAT26(auVar202._10_2_, CONCAT24(sVar108 * auVar117._10_2_, iVar69));
   auVar59._8_2_ = sVar110 * auVar117._12_2_;
   auVar59._10_2_ = auVar202._12_2_;
   auVar66._12_2_ = sVar43 * auVar117._14_2_;
   auVar66._0_12_ = auVar59;
   auVar66._14_2_ = auVar202._14_2_;
   iVar54 = CONCAT22(auVar202._6_2_, sVar105 * auVar117._6_2_);
   Var41 = CONCAT64(CONCAT42(iVar54, auVar202._4_2_), CONCAT22(sVar104 * auVar117._4_2_, sVar105 * auVar117._6_2_));
   auVar39._4_8_ = (long)( (unkuint10)Var41 >> 0x10 );
   auVar39._2_2_ = auVar202._2_2_;
   auVar39._0_2_ = sVar102 * auVar117._2_2_;
   param_1[0x34] = iVar69 + local_c8 + iVar70 >> 0x12;
   param_1[0x35] = (int)( (ulong)auVar59._0_8_ >> 0x20 ) + uStack_c4 + iVar74 >> 0x12;
   param_1[0x36] = auVar59._8_4_ + uStack_c0 + iVar75 >> 0x12;
   param_1[0x37] = auVar66._12_4_ + uStack_bc + iVar76 >> 0x12;
   sVar43 = _UNK_0010522e;
   sVar110 = _UNK_0010522c;
   sVar108 = _UNK_0010522a;
   sVar107 = _UNK_00105228;
   sVar105 = _UNK_00105226;
   sVar104 = _UNK_00105224;
   sVar102 = _UNK_00105222;
   sVar90 = __LC12;
   param_1[0x30] = CONCAT22(auVar202._0_2_, sVar101 * auVar117._0_2_) + local_58 + iVar70 >> 0x12;
   param_1[0x31] = auVar39._0_4_ + uStack_54 + iVar74 >> 0x12;
   param_1[0x32] = (int)( (unkuint10)Var41 >> 0x10 ) + uStack_50 + iVar75 >> 0x12;
   param_1[0x33] = iVar54 + uStack_4c + iVar76 >> 0x12;
   auVar20._2_2_ = _UNK_00105222;
   auVar20._0_2_ = __LC12;
   auVar20._4_2_ = _UNK_00105224;
   auVar20._6_2_ = _UNK_00105226;
   auVar20._8_2_ = _UNK_00105228;
   auVar20._10_2_ = _UNK_0010522a;
   auVar20._12_2_ = _UNK_0010522c;
   auVar20._14_2_ = _UNK_0010522e;
   auVar202 = pmulhw(auVar80, auVar20);
   iVar69 = CONCAT22(auVar202._8_2_, sVar107 * auVar80._8_2_);
   auVar60._0_8_ = CONCAT26(auVar202._10_2_, CONCAT24(sVar108 * auVar80._10_2_, iVar69));
   auVar60._8_2_ = sVar110 * auVar80._12_2_;
   auVar60._10_2_ = auVar202._12_2_;
   auVar67._12_2_ = sVar43 * auVar80._14_2_;
   auVar67._0_12_ = auVar60;
   auVar67._14_2_ = auVar202._14_2_;
   iVar54 = CONCAT22(auVar202._6_2_, sVar105 * auVar80._6_2_);
   Var41 = CONCAT64(CONCAT42(iVar54, auVar202._4_2_), CONCAT22(sVar104 * auVar80._4_2_, sVar105 * auVar80._6_2_));
   auVar40._4_8_ = (long)( (unkuint10)Var41 >> 0x10 );
   auVar40._2_2_ = auVar202._2_2_;
   auVar40._0_2_ = sVar102 * auVar80._2_2_;
   param_1[0x3c] = iVar69 + local_a8 + iVar106 + iVar70 >> 0x12;
   param_1[0x3d] = (int)( (ulong)auVar60._0_8_ >> 0x20 ) + uStack_a4 + iVar109 + iVar74 >> 0x12;
   param_1[0x3e] = auVar60._8_4_ + uStack_a0 + iVar89 + iVar75 >> 0x12;
   param_1[0x3f] = auVar67._12_4_ + uStack_9c + iVar120 + iVar76 >> 0x12;
   param_1[0x38] = CONCAT22(auVar202._0_2_, sVar90 * auVar80._0_2_) + local_b8 + iVar118 + iVar70 >> 0x12;
   param_1[0x39] = auVar40._0_4_ + uStack_b4 + iVar121 + iVar74 >> 0x12;
   param_1[0x3a] = (int)( (unkuint10)Var41 >> 0x10 ) + uStack_b0 + iVar145 + iVar75 >> 0x12;
   param_1[0x3b] = iVar54 + uStack_ac + iVar68 + iVar76 >> 0x12;
   return;
}
/* jpge::jpeg_encoder::code_coefficients_pass_one(int) [clone .part.0] */void jpge::jpeg_encoder::code_coefficients_pass_one(jpeg_encoder *this, int param_1) {
   ushort uVar1;
   int iVar2;
   int iVar3;
   ushort uVar4;
   int iVar5;
   uint uVar6;
   uint uVar7;
   jpeg_encoder *pjVar8;
   jpeg_encoder *pjVar9;
   jpeg_encoder *pjVar10;
   jpeg_encoder *pjVar11;
   if (param_1 == 0) {
      pjVar10 = this + 0x1c90;
      pjVar11 = this + 0x2490;
   }
 else {
      pjVar10 = this + 0x2090;
      pjVar11 = this + 0x2890;
   }

   iVar2 = (int)*(short*)( this + 0x1cc );
   iVar5 = *(int*)( this + ( (long)param_1 + 0xb24 ) * 4 );
   *(int*)( this + ( (long)param_1 + 0xb24 ) * 4 ) = iVar2;
   iVar3 = iVar2 - iVar5;
   if (iVar3 < 0) {
      iVar3 = iVar5 - iVar2;
   }

   iVar5 = 0;
   if (iVar3 != 0) {
      do {
         iVar5 = iVar5 + 1;
         iVar3 = iVar3 >> 1;
      }
 while ( iVar3 != 0 );
      pjVar10 = pjVar10 + (long)iVar5 * 4;
   }

   pjVar9 = this + 0x1ce;
   *(int*)pjVar10 = *(int*)pjVar10 + 1;
   uVar7 = 0;
   pjVar10 = this + 0x24c;
   do {
      while (uVar4 = *(ushort*)pjVar9,uVar4 == 0) {
         pjVar9 = pjVar9 + 2;
         uVar7 = uVar7 + 1;
         if (pjVar9 == pjVar10) goto LAB_00100ffb;
      }
;
      if (0xf < (int)uVar7) {
         uVar6 = uVar7 - 0x10;
         uVar7 = uVar6 & 0xf;
         *(uint*)( pjVar11 + 0x3c0 ) = ( uVar6 >> 4 ) + 1 + *(int*)( pjVar11 + 0x3c0 );
      }

      do {
         pjVar8 = pjVar9;
         uVar1 = -uVar4;
         if (0 < (short)uVar4) {
            uVar1 = uVar4;
         }

         iVar5 = 1;
         uVar6 = (uint)uVar1;
         while (uVar6 = (int)uVar6 >> 1,uVar6 != 0) {
            iVar5 = iVar5 + 1;
         }
;
         pjVar9 = pjVar8 + 2;
         *(int*)( pjVar11 + (long)(int)( uVar7 * 0x10 + iVar5 ) * 4 ) = *(int*)( pjVar11 + (long)(int)( uVar7 * 0x10 + iVar5 ) * 4 ) + 1;
         if (pjVar10 == pjVar9) {
            return;
         }

         uVar4 = *(ushort*)pjVar9;
         uVar7 = 0;
      }
 while ( uVar4 != 0 );
      pjVar9 = pjVar8 + 4;
      uVar7 = 1;
   }
 while ( pjVar9 != pjVar10 );
   LAB_00100ffb:if (uVar7 != 0) {
      *(int*)pjVar11 = *(int*)pjVar11 + 1;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* jpge::jpeg_encoder::optimize_huffman_table(int, int) */void jpge::jpeg_encoder::optimize_huffman_table(jpeg_encoder *this, int param_1, int param_2) {
   jpeg_encoder *pjVar1;
   short sVar2;
   short sVar3;
   short sVar4;
   short sVar5;
   short sVar6;
   short sVar7;
   short sVar8;
   short sVar9;
   short sVar10;
   short sVar11;
   short sVar12;
   short sVar13;
   short sVar14;
   short sVar15;
   short sVar16;
   short sVar17;
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   uint uVar23;
   int *piVar24;
   uint *puVar25;
   byte bVar26;
   int iVar27;
   int iVar28;
   int iVar29;
   long lVar30;
   ulong uVar31;
   long lVar32;
   uint uVar33;
   uint *puVar34;
   uint *puVar35;
   long lVar36;
   uint *puVar37;
   int iVar38;
   uint uVar39;
   ulong uVar40;
   uint uVar41;
   int iVar42;
   long in_FS_OFFSET;
   bool bVar43;
   undefined1 auVar44[16];
   undefined1 auVar48[16];
   undefined1 auVar52[16];
   undefined1 auVar55[16];
   undefined1 auVar56[16];
   undefined1 auVar60[16];
   undefined1 auVar64[16];
   undefined1 auVar67[16];
   undefined2 uVar68;
   undefined2 uVar69;
   uint local_2468[256];
   uint local_2068[2];
   undefined8 local_2060[257];
   uint local_1858[516];
   int local_1048[2];
   undefined1 auStack_1040[12];
   undefined4 local_1034;
   undefined8 uStack_1030;
   undefined4 uStack_1028;
   undefined1 local_1024[16];
   undefined1 local_1014[12];
   int aiStack_1008[17];
   int local_fc4[223];
   int local_c48[256];
   int local_848[256];
   int local_448[258];
   long local_40;
   undefined1 auVar45[16];
   undefined1 auVar49[16];
   undefined1 auVar46[16];
   undefined1 auVar50[16];
   undefined1 auVar53[16];
   undefined1 auVar47[16];
   undefined1 auVar51[16];
   undefined1 auVar54[16];
   undefined1 auVar57[16];
   undefined1 auVar61[16];
   undefined1 auVar58[16];
   undefined1 auVar62[16];
   undefined1 auVar65[16];
   undefined1 auVar59[16];
   undefined1 auVar63[16];
   undefined1 auVar66[16];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar32 = (long)param_1;
   local_2068[0] = 1;
   local_2068[1] = 0;
   if (param_2 < 1) {
      iVar29 = 1;
      uVar40 = 1;
      piVar24 = local_1048;
      for (lVar30 = 0x200; lVar30 != 0; lVar30 = lVar30 + -1) {
         piVar24[0] = 0;
         piVar24[1] = 0;
         piVar24 = piVar24 + 2;
      }

      LAB_001010f9:puVar34 = local_2068;
      uVar41 = 0;
      iVar27 = 0;
      puVar25 = puVar34 + uVar40 * 2;
      iVar38 = 0;
      iVar28 = 0;
      iVar42 = 0;
      uVar31 = 1;
      while (true) {
         *(int*)( auStack_1040 + uVar31 * 4 + -8 ) = iVar42 + 1;
         puVar34 = puVar34 + 2;
         local_c48[uVar41 >> 8 & 0xff] = iVar28 + 1;
         local_848[uVar41 >> 0x10 & 0xff] = iVar38 + 1;
         *(int*)( auStack_1040 + ( ulong )(( uVar41 >> 0x18 ) + 0x300) * 4 + -8 ) = iVar27 + 1;
         if (puVar25 == puVar34) break;
         uVar41 = *puVar34;
         uVar31 = ( ulong )(uVar41 & 0xff);
         iVar42 = *(int*)( auStack_1040 + uVar31 * 4 + -8 );
         iVar28 = local_c48[uVar41 >> 8 & 0xff];
         iVar38 = local_848[uVar41 >> 0x10 & 0xff];
         iVar27 = *(int*)( auStack_1040 + ( ulong )(( uVar41 >> 0x18 ) + 0x300) * 4 + -8 );
      }
;
      uVar31 = uVar40;
      if (local_448[0] == (int)uVar40) {
         if ((int)uVar40 == local_848[0]) goto LAB_001011c4;
         iVar42 = 3;
      }
 else {
         iVar42 = 4;
      }

   }
 else {
      uVar40 = 1;
      lVar30 = 1;
      do {
         if (*(int*)( this + lVar30 * 4 + lVar32 * 0x400 + 0x1c8c ) != 0) {
            iVar29 = (int)uVar40;
            uVar40 = ( ulong )(iVar29 + 1);
            local_2060[(long)iVar29 + -1] = CONCAT44((int)lVar30, *(int*)( this + lVar30 * 4 + lVar32 * 0x400 + 0x1c8c ));
         }

         iVar29 = (int)uVar40;
         bVar43 = param_2 != lVar30;
         lVar30 = lVar30 + 1;
      }
 while ( bVar43 );
      piVar24 = local_1048;
      for (lVar30 = 0x200; lVar30 != 0; lVar30 = lVar30 + -1) {
         piVar24[0] = 0;
         piVar24[1] = 0;
         piVar24 = piVar24 + 2;
      }

      uVar31 = 0;
      if (iVar29 != 0) goto LAB_001010f9;
      LAB_001011c4:iVar42 = ( local_c48[0] != (int)uVar40 ) + 1;
   }

   iVar28 = 0;
   piVar24 = local_1048;
   puVar25 = local_1858;
   puVar34 = local_2068;
   do {
      puVar37 = puVar25;
      lVar30 = 0;
      iVar38 = 0;
      do {
         *(int*)( (long)local_2468 + lVar30 ) = iVar38;
         iVar38 = iVar38 + *(int*)( (long)piVar24 + lVar30 );
         lVar30 = lVar30 + 4;
      }
 while ( lVar30 != 0x400 );
      puVar25 = puVar34;
      if ((int)uVar40 != 0) {
         do {
            puVar35 = puVar25 + 2;
            uVar39 = *puVar25 >> ( (byte)iVar28 & 0x1f ) & 0xff;
            uVar41 = local_2468[uVar39];
            local_2468[uVar39] = uVar41 + 1;
            *(undefined8*)( puVar37 + (ulong)uVar41 * 2 ) = *(undefined8*)puVar25;
            puVar25 = puVar35;
         }
 while ( puVar34 + uVar31 * 2 != puVar35 );
      }

      iVar28 = iVar28 + 8;
      piVar24 = piVar24 + 0x100;
      puVar25 = puVar34;
      puVar34 = puVar37;
   }
 while ( iVar28 != iVar42 << 3 );
   if (iVar29 == 0) {
      lVar30 = 0x10;
      uVar41 = 0xffffffff;
      piVar24 = local_1048;
      while (true) {
         if (lVar30 == 0) break;
         lVar30 = lVar30 + -1;
         piVar24[0] = 0;
         piVar24[1] = 0;
         piVar24 = piVar24 + 2;
      }
;
      *piVar24 = 0;
   }
 else {
      uVar41 = iVar29 - 1;
      if (iVar29 != 1) {
         uVar39 = puVar37[2] + *puVar37;
         *puVar37 = uVar39;
         if (2 < iVar29) {
            lVar30 = 1;
            iVar42 = 0;
            iVar28 = 2;
            lVar36 = 0;
            do {
               uVar23 = (uint)lVar30;
               if (iVar28 < iVar29) {
                  uVar33 = puVar37[(long)iVar28 * 2];
                  if (uVar39 < uVar33) {
                     puVar37[lVar30 * 2] = uVar39;
                     iVar42 = iVar42 + 1;
                     puVar37[lVar36 * 2] = uVar23;
                     uVar33 = puVar37[lVar30 * 2];
                  }
 else {
                     puVar37[lVar30 * 2] = uVar33;
                     iVar28 = iVar28 + 1;
                  }

                  if (iVar29 <= iVar28) goto LAB_001012d6;
                  lVar36 = (long)iVar28;
                  if (iVar42 < (int)uVar23) {
                     puVar25 = puVar37 + (long)iVar42 * 2;
                     uVar39 = *puVar25;
                     if (puVar37[lVar36 * 2] <= uVar39) goto LAB_00101347;
                     goto LAB_001012e1;
                  }

                  LAB_00101347:iVar28 = iVar28 + 1;
                  puVar37[lVar30 * 2] = uVar33 + puVar37[lVar36 * 2];
               }
 else {
                  puVar37[lVar30 * 2] = uVar39;
                  iVar42 = iVar42 + 1;
                  puVar37[lVar36 * 2] = uVar23;
                  uVar33 = puVar37[lVar30 * 2];
                  LAB_001012d6:puVar25 = puVar37 + (long)iVar42 * 2;
                  uVar39 = *puVar25;
                  LAB_001012e1:iVar42 = iVar42 + 1;
                  puVar37[lVar30 * 2] = uVar39 + uVar33;
                  *puVar25 = uVar23;
               }

               if ((ulong)uVar41 == lVar30 + 1U) goto LAB_0010135a;
               lVar30 = lVar30 + 1;
               lVar36 = (long)iVar42;
               uVar39 = puVar37[lVar36 * 2];
            }
 while ( true );
         }

         puVar37[(long)iVar29 * 2 + -4] = 0;
         LAB_00101387:uVar33 = 0;
         uVar39 = uVar41;
         uVar23 = iVar29 - 2U;
         iVar42 = 1;
         do {
            iVar28 = 0;
            iVar38 = 0;
            if ((int)uVar23 < 0) {
               LAB_001013e7:puVar25 = puVar37 + (long)(int)uVar39 * 2;
               if (( (int)puVar25 - (int)( puVar37 + (long)(int)uVar39 * 2 + ( ulong )(uint)(( iVar42 + -1 ) - iVar38) * -2 + -2 ) & 8U ) == 0) goto LAB_00101420;
               *puVar25 = uVar33;
               for (puVar25 = puVar25 + -2; puVar37 + (long)(int)uVar39 * 2 + ( ulong )(uint)(( iVar42 + -1 ) - iVar38) * -2 + -2 != puVar25; puVar25 = puVar25 + -4) {
                  LAB_00101420:*puVar25 = uVar33;
                  puVar25[-2] = uVar33;
               }

               uVar39 = uVar39 + ( iVar38 - iVar42 );
               if (iVar38 == 0) goto LAB_00101450;
            }
 else {
               puVar25 = puVar37 + (long)(int)uVar23 * 2;
               iVar38 = 0;
               do {
                  if (*puVar25 != uVar33) break;
                  uVar23 = uVar23 - 1;
                  iVar38 = iVar38 + 1;
                  puVar25 = puVar25 + -2;
               }
 while ( uVar23 != 0xffffffff );
               iVar28 = iVar38 * 2;
               if (iVar38 < iVar42) goto LAB_001013e7;
            }

            uVar33 = uVar33 + 1;
            iVar42 = iVar28;
         }
 while ( true );
      }

      lVar30 = 0x10;
      *puVar37 = 1;
      piVar24 = local_1048;
      while (true) {
         if (lVar30 == 0) break;
         lVar30 = lVar30 + -1;
         piVar24[0] = 0;
         piVar24[1] = 0;
         piVar24 = piVar24 + 2;
      }
;
      *piVar24 = 0;
      local_1048[1] = 1;
   }

   LAB_00101567:lVar30 = lVar32 * 0x11;
   *(undefined1(*) [16])( this + lVar30 + 0x184c ) = (undefined1[16])0x0;
   lVar36 = 0x10;
   auVar18._4_12_ = auStack_1040;
   auVar18._0_4_ = local_1048[1];
   auVar47._0_12_ = auVar18._0_12_;
   auVar47._12_2_ = auStack_1040._2_2_;
   auVar47._14_2_ = (short)( (ulong)uStack_1030 >> 0x10 );
   auVar46._12_4_ = auVar47._12_4_;
   auVar46._0_10_ = auVar18._0_10_;
   auVar46._10_2_ = (short)uStack_1030;
   auVar45._10_6_ = auVar46._10_6_;
   auVar45._0_8_ = auVar18._0_8_;
   auVar45._8_2_ = auStack_1040._0_2_;
   uVar68 = ( undefined2 )((uint)local_1034 >> 0x10);
   auVar19._2_8_ = auVar45._8_8_;
   auVar19._0_2_ = uVar68;
   auVar19._10_6_ = 0;
   auVar55._0_2_ = (undefined2)local_1048[1];
   auVar44._12_4_ = 0;
   auVar44._0_12_ = SUB1612(auVar19 << 0x30, 4);
   auVar44 = auVar44 << 0x20;
   uVar69 = ( undefined2 )((ulong)uStack_1030 >> 0x20);
   auVar51._0_12_ = auVar44._0_12_;
   auVar51._12_2_ = uVar68;
   auVar51._14_2_ = (short)( (ulong)uStack_1030 >> 0x30 );
   auVar50._12_4_ = auVar51._12_4_;
   auVar50._0_10_ = auVar44._0_10_;
   auVar50._10_2_ = auStack_1040._6_2_;
   auVar49._10_6_ = auVar50._10_6_;
   auVar49._0_8_ = auVar44._0_8_;
   auVar49._8_2_ = (short)( (uint)local_1048[1] >> 0x10 );
   auVar20._2_8_ = auVar49._8_8_;
   auVar20._0_2_ = uVar69;
   auVar20._10_6_ = 0;
   auVar48._12_4_ = 0;
   auVar48._0_12_ = SUB1612(auVar20 << 0x30, 4);
   auVar48 = auVar48 << 0x20;
   auVar54._0_12_ = auVar48._0_12_;
   auVar54._12_2_ = uVar69;
   auVar54._14_2_ = (undefined2)uStack_1028;
   auVar53._12_4_ = auVar54._12_4_;
   auVar53._0_10_ = auVar48._0_10_;
   auVar53._10_2_ = (short)uStack_1030;
   auVar52._10_6_ = auVar53._10_6_;
   auVar52._0_8_ = auVar48._0_8_;
   auVar52._8_2_ = (short)local_1034;
   auVar55._8_8_ = auVar52._8_8_;
   auVar55._6_2_ = auStack_1040._8_2_;
   auVar55._4_2_ = auStack_1040._4_2_;
   auVar55._2_2_ = auStack_1040._0_2_;
   auVar59._0_12_ = SUB1412(local_1024._0_14_, 0);
   auVar59._12_2_ = SUB142(local_1024._0_14_, 6);
   auVar59._14_2_ = local_1014._6_2_;
   auVar58._12_4_ = auVar59._12_4_;
   auVar58._0_10_ = SUB1410(local_1024._0_14_, 0);
   auVar58._10_2_ = local_1014._4_2_;
   auVar57._10_6_ = auVar58._10_6_;
   auVar57._0_8_ = SUB148(local_1024._0_14_, 0);
   auVar57._8_2_ = SUB142(local_1024._0_14_, 4);
   auVar21._2_8_ = auVar57._8_8_;
   auVar21._0_2_ = local_1014._2_2_;
   auVar21._10_6_ = 0;
   auVar67._0_2_ = SUB142(local_1024._0_14_, 0);
   auVar56._12_4_ = 0;
   auVar56._0_12_ = SUB1612(auVar21 << 0x30, 4);
   auVar56 = auVar56 << 0x20;
   auVar63._0_12_ = auVar56._0_12_;
   auVar63._12_2_ = local_1014._2_2_;
   auVar63._14_2_ = local_1014._10_2_;
   auVar62._12_4_ = auVar63._12_4_;
   auVar62._0_10_ = auVar56._0_10_;
   auVar62._10_2_ = SUB142(local_1024._0_14_, 10);
   auVar61._10_6_ = auVar62._10_6_;
   auVar61._0_8_ = auVar56._0_8_;
   auVar61._8_2_ = SUB142(local_1024._0_14_, 2);
   auVar22._2_8_ = auVar61._8_8_;
   auVar22._0_2_ = local_1014._8_2_;
   auVar22._10_6_ = 0;
   auVar60._12_4_ = 0;
   auVar60._0_12_ = SUB1612(auVar22 << 0x30, 4);
   auVar60 = auVar60 << 0x20;
   auVar66._0_12_ = auVar60._0_12_;
   auVar66._12_2_ = local_1014._8_2_;
   auVar66._14_2_ = (short)aiStack_1008[0];
   auVar65._12_4_ = auVar66._12_4_;
   auVar65._0_10_ = auVar60._0_10_;
   auVar65._10_2_ = local_1014._4_2_;
   auVar64._10_6_ = auVar65._10_6_;
   auVar64._0_8_ = auVar60._0_8_;
   auVar64._8_2_ = local_1014._0_2_;
   auVar67._8_8_ = auVar64._8_8_;
   auVar67._6_2_ = SUB142(local_1024._0_14_, 0xc);
   auVar67._4_2_ = SUB142(local_1024._0_14_, 8);
   auVar67._2_2_ = SUB142(local_1024._0_14_, 4);
   auVar55 = auVar55 & __LC16;
   auVar67 = __LC16 & auVar67;
   sVar2 = auVar55._0_2_;
   sVar3 = auVar55._2_2_;
   sVar4 = auVar55._4_2_;
   sVar5 = auVar55._6_2_;
   sVar6 = auVar55._8_2_;
   sVar7 = auVar55._10_2_;
   sVar8 = auVar55._12_2_;
   sVar9 = auVar55._14_2_;
   sVar10 = auVar67._0_2_;
   sVar11 = auVar67._2_2_;
   sVar12 = auVar67._4_2_;
   sVar13 = auVar67._6_2_;
   sVar14 = auVar67._8_2_;
   sVar15 = auVar67._10_2_;
   sVar16 = auVar67._12_2_;
   sVar17 = auVar67._14_2_;
   pjVar1 = this + lVar30 + 0x184d;
   *pjVar1 = ( jpeg_encoder )(( 0 < sVar2 ) * ( sVar2 < 0x100 ) * auVar55[0] - ( 0xff < sVar2 ));
   pjVar1[1] = ( jpeg_encoder )(( 0 < sVar3 ) * ( sVar3 < 0x100 ) * auVar55[2] - ( 0xff < sVar3 ));
   pjVar1[2] = ( jpeg_encoder )(( 0 < sVar4 ) * ( sVar4 < 0x100 ) * auVar55[4] - ( 0xff < sVar4 ));
   pjVar1[3] = ( jpeg_encoder )(( 0 < sVar5 ) * ( sVar5 < 0x100 ) * auVar55[6] - ( 0xff < sVar5 ));
   pjVar1[4] = ( jpeg_encoder )(( 0 < sVar6 ) * ( sVar6 < 0x100 ) * auVar55[8] - ( 0xff < sVar6 ));
   pjVar1[5] = ( jpeg_encoder )(( 0 < sVar7 ) * ( sVar7 < 0x100 ) * auVar55[10] - ( 0xff < sVar7 ));
   pjVar1[6] = ( jpeg_encoder )(( 0 < sVar8 ) * ( sVar8 < 0x100 ) * auVar55[0xc] - ( 0xff < sVar8 ));
   pjVar1[7] = ( jpeg_encoder )(( 0 < sVar9 ) * ( sVar9 < 0x100 ) * auVar55[0xe] - ( 0xff < sVar9 ));
   pjVar1[8] = ( jpeg_encoder )(( 0 < sVar10 ) * ( sVar10 < 0x100 ) * auVar67[0] - ( 0xff < sVar10 ));
   pjVar1[9] = ( jpeg_encoder )(( 0 < sVar11 ) * ( sVar11 < 0x100 ) * auVar67[2] - ( 0xff < sVar11 ));
   pjVar1[10] = ( jpeg_encoder )(( 0 < sVar12 ) * ( sVar12 < 0x100 ) * auVar67[4] - ( 0xff < sVar12 ));
   pjVar1[0xb] = ( jpeg_encoder )(( 0 < sVar13 ) * ( sVar13 < 0x100 ) * auVar67[6] - ( 0xff < sVar13 ));
   pjVar1[0xc] = ( jpeg_encoder )(( 0 < sVar14 ) * ( sVar14 < 0x100 ) * auVar67[8] - ( 0xff < sVar14 ));
   pjVar1[0xd] = ( jpeg_encoder )(( 0 < sVar15 ) * ( sVar15 < 0x100 ) * auVar67[10] - ( 0xff < sVar15 ));
   pjVar1[0xe] = ( jpeg_encoder )(( 0 < sVar16 ) * ( sVar16 < 0x100 ) * auVar67[0xc] - ( 0xff < sVar16 ));
   pjVar1[0xf] = ( jpeg_encoder )(( 0 < sVar17 ) * ( sVar17 < 0x100 ) * auVar67[0xe] - ( 0xff < sVar17 ));
   do {
      if (this[lVar36 + lVar30 + 0x184c] != (jpeg_encoder)0x0) {
         this[(long)(int)lVar36 + 0x184c + lVar32 * 0x11] = ( jpeg_encoder )((char)this[lVar36 + lVar30 + 0x184c] + -1);
         break;
      }

      lVar36 = lVar36 + -1;
   }
 while ( lVar36 != 0 );
   lVar30 = (long)(int)uVar41;
   pjVar1 = this + lVar32 * 0x100;
   while (0 < (int)uVar41) {
      lVar32 = lVar30 * 2;
      lVar30 = lVar30 + -1;
      pjVar1[0x1890] = ( jpeg_encoder )((char)puVar37[lVar32 + 1] + -1);
      pjVar1 = pjVar1 + 1;
      uVar41 = (uint)lVar30;
   }
;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
   LAB_0010135a:puVar37[(long)iVar29 * 2 + -4] = 0;
   lVar30 = (long)( iVar29 + -3 );
   do {
      puVar37[lVar30 * 2] = puVar37[(ulong)puVar37[lVar30 * 2] * 2] + 1;
      lVar30 = lVar30 + -1;
   }
 while ( -1 < (int)lVar30 );
   goto LAB_00101387;
   LAB_00101450:piVar24 = local_1048;
   for (lVar30 = 0x10; lVar30 != 0; lVar30 = lVar30 + -1) {
      piVar24[0] = 0;
      piVar24[1] = 0;
      piVar24 = piVar24 + 2;
   }

   *piVar24 = 0;
   if (0 < iVar29) {
      *(undefined4*)( auStack_1040 + ( ulong ) * puVar37 * 4 + -8 ) = 1;
      puVar25 = puVar37 + 2;
      do {
         uVar39 = *puVar25;
         puVar25 = puVar25 + 2;
         *(int*)( auStack_1040 + (ulong)uVar39 * 4 + -8 ) = *(int*)( auStack_1040 + (ulong)uVar39 * 4 + -8 ) + 1;
      }
 while ( puVar37 + ( ulong )(iVar29 - 2U) * 2 + 4 != puVar25 );
      piVar24 = aiStack_1008 + 1;
      do {
         aiStack_1008[0] = aiStack_1008[0] + *piVar24;
         piVar24 = piVar24 + 1;
      }
 while ( piVar24 != local_fc4 );
      piVar24 = aiStack_1008;
      iVar29 = 0;
      iVar42 = 0;
      do {
         iVar28 = *piVar24;
         piVar24 = piVar24 + -1;
         bVar26 = (byte)iVar29;
         iVar29 = iVar29 + 1;
         iVar42 = iVar42 + ( iVar28 << ( bVar26 & 0x1f ) );
      }
 while ( iVar29 != 0x10 );
      if (iVar42 != 0x10000) {
         do {
            aiStack_1008[0] = aiStack_1008[0] + -1;
            lVar30 = 0xf;
            piVar24 = (int*)( local_1014 + 8 );
            do {
               if (*piVar24 != 0) {
                  *piVar24 = *piVar24 + -1;
                  *(int*)( auStack_1040 + lVar30 * 4 + -4 ) = *(int*)( auStack_1040 + lVar30 * 4 + -4 ) + 2;
                  break;
               }

               piVar24 = piVar24 + -1;
               lVar30 = lVar30 + -1;
            }
 while ( lVar30 != 0 );
            iVar42 = iVar42 + -1;
         }
 while ( iVar42 != 0x10000 );
      }

   }

   goto LAB_00101567;
}
/* jpge::jpeg_encoder::emit_byte(unsigned char) */void jpge::jpeg_encoder::emit_byte(jpeg_encoder *this, uchar param_1) {
   jpeg_encoder jVar1;
   uchar local_c[4];
   jVar1 = this[0x34b5];
   if (jVar1 != (jpeg_encoder)0x0) {
      local_c[0] = param_1;
      jVar1 = ( jpeg_encoder )(**(code**)( **(long**)this + 0x10 ))(*(long**)this, local_c, 1);
   }

   this[0x34b5] = jVar1;
   return;
}
/* jpge::jpeg_encoder::emit_word(unsigned int) */void jpge::jpeg_encoder::emit_word(jpeg_encoder *this, uint param_1) {
   char cVar1;
   jpeg_encoder jVar2;
   long in_FS_OFFSET;
   undefined1 local_21;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_21 = ( undefined1 )(param_1 >> 8);
   if (this[0x34b5] != (jpeg_encoder)0x0) {
      cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
      if (cVar1 != '\0') {
         local_21 = (undefined1)param_1;
         this[0x34b5] = (jpeg_encoder)0x1;
         jVar2 = ( jpeg_encoder )(**(code**)( **(long**)this + 0x10 ))(*(long**)this, &local_21, 1);
         goto LAB_001017aa;
      }

   }

   jVar2 = (jpeg_encoder)0x0;
   LAB_001017aa:this[0x34b5] = jVar2;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* jpge::jpeg_encoder::emit_marker(int) */void jpge::jpeg_encoder::emit_marker(jpeg_encoder *this, int param_1) {
   char cVar1;
   jpeg_encoder jVar2;
   long in_FS_OFFSET;
   undefined1 local_21;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_21 = 0xff;
   if (this[0x34b5] != (jpeg_encoder)0x0) {
      cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
      if (cVar1 != '\0') {
         this[0x34b5] = (jpeg_encoder)0x1;
         local_21 = (char)param_1;
         jVar2 = ( jpeg_encoder )(**(code**)( **(long**)this + 0x10 ))(*(long**)this, &local_21, 1);
         goto LAB_0010184b;
      }

   }

   jVar2 = (jpeg_encoder)0x0;
   LAB_0010184b:this[0x34b5] = jVar2;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* jpge::jpeg_encoder::emit_jfif_app0() */void jpge::jpeg_encoder::emit_jfif_app0(jpeg_encoder *this) {
   char cVar1;
   jpeg_encoder jVar2;
   long in_FS_OFFSET;
   undefined1 local_21;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_21 = 0xff;
   if (this[0x34b5] != (jpeg_encoder)0x0) {
      cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
      if (cVar1 != '\0') {
         local_21 = 0xe0;
         this[0x34b5] = (jpeg_encoder)0x1;
         cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
         if (cVar1 != '\0') {
            local_21 = 0;
            this[0x34b5] = (jpeg_encoder)0x1;
            cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
            if (cVar1 != '\0') {
               local_21 = 0x10;
               this[0x34b5] = (jpeg_encoder)0x1;
               cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
               if (cVar1 != '\0') {
                  local_21 = 0x4a;
                  this[0x34b5] = (jpeg_encoder)0x1;
                  cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
                  if (cVar1 != '\0') {
                     local_21 = 0x46;
                     this[0x34b5] = (jpeg_encoder)0x1;
                     cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
                     if (cVar1 != '\0') {
                        local_21 = 0x49;
                        this[0x34b5] = (jpeg_encoder)0x1;
                        cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
                        if (cVar1 != '\0') {
                           local_21 = 0x46;
                           this[0x34b5] = (jpeg_encoder)0x1;
                           cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
                           if (cVar1 != '\0') {
                              local_21 = 0;
                              this[0x34b5] = (jpeg_encoder)0x1;
                              cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
                              if (cVar1 != '\0') {
                                 local_21 = 1;
                                 this[0x34b5] = (jpeg_encoder)0x1;
                                 cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
                                 if (cVar1 != '\0') {
                                    local_21 = 1;
                                    this[0x34b5] = (jpeg_encoder)0x1;
                                    cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
                                    if (cVar1 != '\0') {
                                       local_21 = 0;
                                       this[0x34b5] = (jpeg_encoder)0x1;
                                       cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
                                       if (cVar1 != '\0') {
                                          local_21 = 0;
                                          this[0x34b5] = (jpeg_encoder)0x1;
                                          cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
                                          if (cVar1 != '\0') {
                                             local_21 = 1;
                                             this[0x34b5] = (jpeg_encoder)0x1;
                                             cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
                                             if (cVar1 != '\0') {
                                                local_21 = 0;
                                                this[0x34b5] = (jpeg_encoder)0x1;
                                                cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
                                                if (cVar1 != '\0') {
                                                   local_21 = 1;
                                                   this[0x34b5] = (jpeg_encoder)0x1;
                                                   cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
                                                   if (cVar1 != '\0') {
                                                      local_21 = 0;
                                                      this[0x34b5] = (jpeg_encoder)0x1;
                                                      cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
                                                      if (cVar1 != '\0') {
                                                         local_21 = 0;
                                                         this[0x34b5] = (jpeg_encoder)0x1;
                                                         jVar2 = ( jpeg_encoder )(**(code**)( **(long**)this + 0x10 ))(*(long**)this, &local_21, 1);
                                                         goto LAB_001018ea;
                                                      }

                                                   }

                                                }

                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   jVar2 = (jpeg_encoder)0x0;
   LAB_001018ea:this[0x34b5] = jVar2;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* jpge::jpeg_encoder::emit_dqt() */void jpge::jpeg_encoder::emit_dqt(jpeg_encoder *this) {
   char cVar1;
   jpeg_encoder jVar2;
   jpeg_encoder *pjVar3;
   jpeg_encoder *pjVar4;
   int iVar5;
   long in_FS_OFFSET;
   undefined1 local_31;
   long local_30;
   iVar5 = 0;
   pjVar4 = this + 0x34c;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      local_31 = 0xff;
      if (( this[0x34b5] == (jpeg_encoder)0x0 ) || ( cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_31, 1) ),cVar1 == '\0') {
         LAB_00101ce0:jVar2 = (jpeg_encoder)0x0;
      }
 else {
         local_31 = 0xdb;
         this[0x34b5] = (jpeg_encoder)0x1;
         cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_31, 1);
         if (cVar1 == '\0') goto LAB_00101ce0;
         local_31 = 0;
         this[0x34b5] = (jpeg_encoder)0x1;
         cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_31, 1);
         if (cVar1 == '\0') goto LAB_00101ce0;
         local_31 = 0x43;
         this[0x34b5] = (jpeg_encoder)0x1;
         cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_31, 1);
         if (cVar1 == '\0') goto LAB_00101ce0;
         local_31 = (undefined1)iVar5;
         this[0x34b5] = (jpeg_encoder)0x1;
         jVar2 = ( jpeg_encoder )(**(code**)( **(long**)this + 0x10 ))(*(long**)this, &local_31, 1);
      }

      this[0x34b5] = jVar2;
      pjVar3 = pjVar4 + -0x100;
      do {
         local_31 = ( undefined1 ) * (undefined4*)pjVar3;
         if (jVar2 != (jpeg_encoder)0x0) {
            jVar2 = ( jpeg_encoder )(**(code**)( **(long**)this + 0x10 ))(*(long**)this, &local_31, 1);
         }

         pjVar3 = pjVar3 + 4;
         this[0x34b5] = jVar2;
      }
 while ( pjVar3 != pjVar4 );
      pjVar4 = pjVar4 + 0x100;
      if (( this[0x14] != (jpeg_encoder)0x3 ) || ( iVar5 = iVar5 != 1 )) {
         if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }

   }
 while ( true );
}
/* jpge::jpeg_encoder::emit_sof() */void jpge::jpeg_encoder::emit_sof(jpeg_encoder *this) {
   undefined4 uVar1;
   char cVar2;
   jpeg_encoder jVar3;
   long lVar4;
   long in_FS_OFFSET;
   jpeg_encoder local_21;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_21 = (jpeg_encoder)0xff;
   if (this[0x34b5] != (jpeg_encoder)0x0) {
      cVar2 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
      if (cVar2 != '\0') {
         local_21 = (jpeg_encoder)0xc0;
         this[0x34b5] = (jpeg_encoder)0x1;
         cVar2 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
         if (cVar2 != '\0') {
            this[0x34b5] = (jpeg_encoder)0x1;
            lVar4 = (ulong)(byte)this[0x14] * 3 + 8;
            local_21 = SUB81((ulong)lVar4 >> 8, 0);
            cVar2 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
            if (cVar2 != '\0') {
               local_21 = SUB81(lVar4, 0);
               this[0x34b5] = (jpeg_encoder)0x1;
               cVar2 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
               if (cVar2 != '\0') {
                  local_21 = (jpeg_encoder)0x8;
                  this[0x34b5] = (jpeg_encoder)0x1;
                  cVar2 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
                  if (cVar2 != '\0') {
                     uVar1 = *(undefined4*)( this + 0x20 );
                     this[0x34b5] = (jpeg_encoder)0x1;
                     local_21 = SUB41((uint)uVar1 >> 8, 0);
                     cVar2 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
                     if (cVar2 != '\0') {
                        local_21 = SUB41(uVar1, 0);
                        this[0x34b5] = (jpeg_encoder)0x1;
                        cVar2 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
                        if (cVar2 != '\0') {
                           uVar1 = *(undefined4*)( this + 0x1c );
                           this[0x34b5] = (jpeg_encoder)0x1;
                           local_21 = SUB41((uint)uVar1 >> 8, 0);
                           cVar2 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
                           if (cVar2 != '\0') {
                              local_21 = SUB41(uVar1, 0);
                              this[0x34b5] = (jpeg_encoder)0x1;
                              cVar2 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
                              if (cVar2 != '\0') {
                                 local_21 = this[0x14];
                                 this[0x34b5] = (jpeg_encoder)0x1;
                                 jVar3 = ( jpeg_encoder )(**(code**)( **(long**)this + 0x10 ))(*(long**)this, &local_21, 1);
                                 goto LAB_00101d52;
                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   jVar3 = (jpeg_encoder)0x0;
   LAB_00101d52:lVar4 = 0;
   this[0x34b5] = jVar3;
   if (this[0x14] != (jpeg_encoder)0x0) {
      do {
         local_21 = ( jpeg_encoder )((char)lVar4 + '\x01');
         if (jVar3 == (jpeg_encoder)0x0) {
            LAB_00101f80:jVar3 = (jpeg_encoder)0x0;
         }
 else {
            cVar2 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
            if (cVar2 == '\0') goto LAB_00101f80;
            this[0x34b5] = (jpeg_encoder)0x1;
            local_21 = ( jpeg_encoder )((char)this[lVar4 + 0x15] * '\x10' + (char)this[lVar4 + 0x18]);
            cVar2 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
            if (cVar2 == '\0') goto LAB_00101f80;
            this[0x34b5] = (jpeg_encoder)0x1;
            local_21 = ( jpeg_encoder )(0 < (int)lVar4);
            jVar3 = ( jpeg_encoder )(**(code**)( **(long**)this + 0x10 ))(*(long**)this, &local_21, 1);
         }

         lVar4 = lVar4 + 1;
         this[0x34b5] = jVar3;
      }
 while ( (int)lVar4 < (int)(uint)(byte)this[0x14] );
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* jpge::jpeg_encoder::emit_dht(unsigned char*, unsigned char*, int, bool) */void jpge::jpeg_encoder::emit_dht(jpeg_encoder *this, uchar *param_1, uchar *param_2, int param_3, bool param_4) {
   undefined1 auVar1[16];
   undefined1 auVar2[15];
   undefined1 auVar3[15];
   undefined1 auVar4[14];
   undefined1 auVar5[15];
   uint uVar6;
   undefined1 auVar7[15];
   undefined1 auVar8[13];
   undefined1 auVar9[13];
   undefined1 auVar10[13];
   undefined1 auVar11[15];
   undefined1 auVar12[15];
   undefined1 auVar13[15];
   undefined1 auVar14[15];
   undefined1 auVar15[15];
   unkuint9 Var16;
   undefined1 auVar17[11];
   undefined1 auVar18[14];
   undefined1 auVar19[13];
   undefined1 auVar20[15];
   undefined1 auVar21[15];
   uint6 uVar22;
   char cVar23;
   jpeg_encoder jVar24;
   uchar *puVar25;
   long in_FS_OFFSET;
   int iVar26;
   ushort uVar27;
   uint uVar28;
   char local_50;
   uchar local_41;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_41 = 0xff;
   if (this[0x34b5] == (jpeg_encoder)0x0) {
      LAB_00101fee:jVar24 = (jpeg_encoder)0x0;
   }
 else {
      cVar23 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_41, 1);
      if (cVar23 == '\0') goto LAB_00101fee;
      local_41 = 0xc4;
      this[0x34b5] = (jpeg_encoder)0x1;
      jVar24 = ( jpeg_encoder )(**(code**)( **(long**)this + 0x10 ))(*(long**)this, &local_41, 1);
   }

   this[0x34b5] = jVar24;
   auVar1 = *(undefined1(*) [16])( param_1 + 1 );
   puVar25 = param_1 + 1;
   uVar28 = CONCAT13(0, CONCAT12(auVar1[9], (ushort)auVar1[8]));
   auVar2[0xd] = 0;
   auVar2._0_13_ = auVar1._0_13_;
   auVar2[0xe] = auVar1[7];
   auVar3[0xc] = auVar1[6];
   auVar3._0_12_ = auVar1._0_12_;
   auVar3._13_2_ = auVar2._13_2_;
   auVar5[0xb] = 0;
   auVar5._0_11_ = auVar1._0_11_;
   auVar5._12_3_ = auVar3._12_3_;
   uVar6 = auVar5._11_4_;
   auVar7[10] = auVar1[5];
   auVar7._0_10_ = auVar1._0_10_;
   auVar7._11_4_ = uVar6;
   auVar11[9] = 0;
   auVar11._0_9_ = auVar1._0_9_;
   auVar11._10_5_ = auVar7._10_5_;
   auVar12[8] = auVar1[4];
   auVar12._0_8_ = auVar1._0_8_;
   auVar12._9_6_ = auVar11._9_6_;
   auVar15._7_8_ = 0;
   auVar15._0_7_ = auVar12._8_7_;
   Var16 = CONCAT81(SUB158(auVar15 << 0x40, 7), auVar1[3]);
   auVar20._9_6_ = 0;
   auVar20._0_9_ = Var16;
   auVar17._1_10_ = SUB1510(auVar20 << 0x30, 5);
   auVar17[0] = auVar1[2];
   auVar21._11_4_ = 0;
   auVar21._0_11_ = auVar17;
   auVar13[2] = auVar1[1];
   auVar13._0_2_ = auVar1._0_2_;
   auVar13._3_12_ = SUB1512(auVar21 << 0x20, 3);
   uVar27 = auVar1._0_2_ & 0xff;
   auVar14._2_13_ = auVar13._2_13_;
   auVar14._0_2_ = uVar27;
   auVar4._10_2_ = 0;
   auVar4._0_10_ = auVar14._0_10_;
   auVar4._12_2_ = (short)Var16;
   uVar22 = CONCAT42(auVar4._10_4_, auVar17._0_2_);
   auVar18._6_8_ = 0;
   auVar18._0_6_ = uVar22;
   auVar8[0xc] = auVar1[0xb];
   auVar8._0_12_ = ZEXT112(auVar1[0xc]) << 0x40;
   auVar9._10_3_ = auVar8._10_3_;
   auVar9._0_10_ = (unkuint10)auVar1[10] << 0x40;
   auVar19._5_8_ = 0;
   auVar19._0_5_ = auVar9._8_5_;
   auVar10[4] = auVar1[9];
   auVar10._0_4_ = uVar28;
   auVar10[5] = 0;
   auVar10._6_7_ = SUB137(auVar19 << 0x40, 6);
   iVar26 = (uint)uVar27 + (uint)auVar12._8_2_ + ( uVar28 & 0xffff ) + (uint)auVar1[0xc] + (int)uVar22 + ( uVar6 >> 8 & 0xffff ) + auVar9._8_4_ + (uint)auVar1[0xe] + (int)CONCAT82(SUB148(auVar18 << 0x40, 6), auVar13._2_2_) + (uint)auVar7._10_2_ + auVar10._4_4_ + (uint)auVar1[0xd] + ( auVar4._10_4_ >> 0x10 ) + ( uVar6 >> 0x18 ) + ( uint )(uint3)(auVar8._10_3_ >> 0x10) + (uint)auVar1[0xf];
   local_41 = ( uchar )(( uint )(iVar26 + 0x13) >> 8);
   if (jVar24 != (jpeg_encoder)0x0) {
      cVar23 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_41, 1);
      if (cVar23 != '\0') {
         this[0x34b5] = (jpeg_encoder)0x1;
         local_41 = ( uchar )(iVar26 + 0x13);
         cVar23 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_41, 1);
         if (cVar23 != '\0') {
            local_50 = (char)param_3;
            local_41 = param_4 * '\x10' + local_50;
            this[0x34b5] = (jpeg_encoder)0x1;
            jVar24 = ( jpeg_encoder )(**(code**)( **(long**)this + 0x10 ))(*(long**)this, &local_41, 1);
            goto LAB_00102098;
         }

      }

   }

   jVar24 = (jpeg_encoder)0x0;
   LAB_00102098:this[0x34b5] = jVar24;
   do {
      local_41 = *puVar25;
      if (jVar24 != (jpeg_encoder)0x0) {
         jVar24 = ( jpeg_encoder )(**(code**)( **(long**)this + 0x10 ))(*(long**)this, &local_41, 1);
      }

      puVar25 = puVar25 + 1;
      this[0x34b5] = jVar24;
   }
 while ( param_1 + 0x11 != puVar25 );
   puVar25 = param_2 + iVar26;
   if (0 < iVar26) {
      do {
         local_41 = *param_2;
         if (jVar24 != (jpeg_encoder)0x0) {
            jVar24 = ( jpeg_encoder )(**(code**)( **(long**)this + 0x10 ))(*(long**)this, &local_41, 1);
         }

         param_2 = param_2 + 1;
         this[0x34b5] = jVar24;
      }
 while ( param_2 != puVar25 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* jpge::jpeg_encoder::emit_dhts() */void jpge::jpeg_encoder::emit_dhts(jpeg_encoder *this) {
   emit_dht(this, (uchar*)( this + 0x184c ), (uchar*)( this + 0x1890 ), 0, false);
   emit_dht(this, (uchar*)( this + 0x186e ), (uchar*)( this + 0x1a90 ), 0, true);
   if (this[0x14] != (jpeg_encoder)0x3) {
      return;
   }

   emit_dht(this, (uchar*)( this + 0x185d ), (uchar*)( this + 0x1990 ), 1, false);
   emit_dht(this, (uchar*)( this + 0x187f ), (uchar*)( this + 0x1b90 ), 1, true);
   return;
}
/* jpge::jpeg_encoder::emit_sos() */void jpge::jpeg_encoder::emit_sos(jpeg_encoder *this) {
   char cVar1;
   jpeg_encoder jVar2;
   jpeg_encoder jVar3;
   uint uVar4;
   int iVar5;
   long in_FS_OFFSET;
   jpeg_encoder local_21;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_21 = (jpeg_encoder)0xff;
   if (this[0x34b5] == (jpeg_encoder)0x0) {
      LAB_00102398:this[0x34b5] = (jpeg_encoder)0x0;
      if (this[0x14] != (jpeg_encoder)0x0) {
         LAB_001023a5:jVar2 = (jpeg_encoder)0x0;
         LAB_001023a7:jVar3 = this[0x14];
         iVar5 = 0;
         LAB_001023ad:uVar4 = (uint)(byte)jVar3;
         iVar5 = iVar5 + 1;
         this[0x34b5] = jVar2;
         jVar3 = jVar2;
         if (iVar5 < (int)uVar4) {
            do {
               local_21 = ( jpeg_encoder )((char)iVar5 + '\x01');
               if (jVar3 != (jpeg_encoder)0x0) {
                  cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
                  if (cVar1 != '\0') goto LAB_00102480;
                  uVar4 = (uint)(byte)this[0x14];
               }

               jVar3 = (jpeg_encoder)0x0;
               iVar5 = iVar5 + 1;
               jVar2 = (jpeg_encoder)0x0;
               this[0x34b5] = (jpeg_encoder)0x0;
               if ((int)uVar4 <= iVar5) break;
            }
 while ( true );
         }

         goto LAB_001023f6;
      }

   }
 else {
      cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
      if (cVar1 == '\0') goto LAB_00102398;
      local_21 = (jpeg_encoder)0xda;
      this[0x34b5] = (jpeg_encoder)0x1;
      cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
      if (cVar1 == '\0') goto LAB_00102398;
      this[0x34b5] = (jpeg_encoder)0x1;
      iVar5 = (byte)this[0x14] + 6 + (uint)(byte)this[0x14];
      local_21 = SUB41((uint)iVar5 >> 8, 0);
      cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
      if (cVar1 == '\0') goto LAB_00102398;
      local_21 = SUB41(iVar5, 0);
      this[0x34b5] = (jpeg_encoder)0x1;
      cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
      if (cVar1 == '\0') goto LAB_00102398;
      local_21 = this[0x14];
      this[0x34b5] = (jpeg_encoder)0x1;
      jVar2 = ( jpeg_encoder )(**(code**)( **(long**)this + 0x10 ))(*(long**)this, &local_21, 1);
      this[0x34b5] = jVar2;
      if (this[0x14] != (jpeg_encoder)0x0) {
         local_21 = (jpeg_encoder)0x1;
         if (jVar2 != (jpeg_encoder)0x0) {
            cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
            if (cVar1 != '\0') {
               local_21 = (jpeg_encoder)0x0;
               this[0x34b5] = (jpeg_encoder)0x1;
               jVar2 = ( jpeg_encoder )(**(code**)( **(long**)this + 0x10 ))(*(long**)this, &local_21, 1);
               goto LAB_001023a7;
            }

         }

         goto LAB_001023a5;
      }

      LAB_001023f6:local_21 = (jpeg_encoder)0x0;
      if (jVar2 != (jpeg_encoder)0x0) {
         cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
         if (cVar1 != '\0') {
            local_21 = (jpeg_encoder)0x3f;
            this[0x34b5] = (jpeg_encoder)0x1;
            cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
            if (cVar1 != '\0') {
               local_21 = (jpeg_encoder)0x0;
               this[0x34b5] = (jpeg_encoder)0x1;
               jVar2 = ( jpeg_encoder )(**(code**)( **(long**)this + 0x10 ))(*(long**)this, &local_21, 1);
               goto LAB_0010241b;
            }

         }

      }

   }

   jVar2 = (jpeg_encoder)0x0;
   LAB_0010241b:this[0x34b5] = jVar2;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00102480:local_21 = (jpeg_encoder)0x11;
   this[0x34b5] = (jpeg_encoder)0x1;
   jVar2 = ( jpeg_encoder )(**(code**)( **(long**)this + 0x10 ))(*(long**)this, &local_21, 1);
   jVar3 = this[0x14];
   goto LAB_001023ad;
}
/* jpge::jpeg_encoder::emit_markers() */void jpge::jpeg_encoder::emit_markers(jpeg_encoder *this) {
   char cVar1;
   jpeg_encoder jVar2;
   long in_FS_OFFSET;
   undefined1 local_21;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_21 = 0xff;
   if (this[0x34b5] != (jpeg_encoder)0x0) {
      cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
      if (cVar1 != '\0') {
         local_21 = 0xd8;
         this[0x34b5] = (jpeg_encoder)0x1;
         jVar2 = ( jpeg_encoder )(**(code**)( **(long**)this + 0x10 ))(*(long**)this, &local_21, 1);
         goto LAB_001024f7;
      }

   }

   jVar2 = (jpeg_encoder)0x0;
   LAB_001024f7:this[0x34b5] = jVar2;
   emit_jfif_app0(this);
   emit_dqt(this);
   emit_sof(this);
   emit_dhts(this);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      emit_sos(this);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Type propagation algorithm not settling *//* jpge::jpeg_encoder::compute_huffman_table(unsigned int*, unsigned char*, unsigned char*, unsigned
   char*) */void jpge::jpeg_encoder::compute_huffman_table(jpeg_encoder *this, uint *param_1, uchar *param_2, uchar *param_3, uchar *param_4) {
   byte *pbVar1;
   uchar *puVar2;
   byte bVar3;
   long lVar4;
   long lVar5;
   uint uVar6;
   ulong uVar7;
   uint uVar8;
   uint uVar9;
   uint uVar10;
   ulong uVar11;
   long *plVar12;
   undefined8 *puVar13;
   int iVar14;
   long in_FS_OFFSET;
   uint local_548[258];
   undefined8 uStack_140;
   byte local_138[8];
   undefined1 local_130[256];
   long local_30;
   iVar14 = 0;
   uVar11 = 1;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      bVar3 = param_3[uVar11];
      if (bVar3 != 0) {
         uVar8 = (uint)bVar3;
         uVar7 = (ulong)uVar8;
         lVar5 = ( uVar11 & 0xff ) * 0x101010101010101;
         plVar12 = (long*)( local_138 + iVar14 );
         if (uVar8 < 8) {
            if (( bVar3 & 4 ) == 0) {
               if (( uVar8 != 0 ) && ( *(char*)plVar12 = (char)lVar5(bVar3 & 2) != 0 )) {
                  *(short*)( (long)plVar12 + ( uVar7 - 2 ) ) = (short)lVar5;
               }

            }
 else {
               *(int*)plVar12 = (int)lVar5;
               *(int*)( (long)plVar12 + ( uVar7 - 4 ) ) = (int)lVar5;
            }

         }
 else {
            *plVar12 = lVar5;
            *(long*)( (long)plVar12 + ( uVar7 - 8 ) ) = lVar5;
            uVar7 = ( ulong )(( (int)plVar12 - (int)(long*)( ( ulong )(local_130 + iVar14) & 0xfffffffffffffff8 ) ) + uVar8 >> 3);
            plVar12 = (long*)( ( ulong )(local_130 + iVar14) & 0xfffffffffffffff8 );
            for (; uVar7 != 0; uVar7 = uVar7 - 1) {
               *plVar12 = lVar5;
               plVar12 = plVar12 + 1;
            }

         }

         iVar14 = iVar14 + (uint)bVar3;
      }

      uVar11 = uVar11 + 1;
   }
 while ( uVar11 != 0x11 );
   local_138[iVar14] = 0;
   uVar6 = (uint)local_138[0];
   uVar8 = (uint)local_138[0];
   if (local_138[0] != 0) {
      lVar5 = 0;
      uVar9 = 0;
      do {
         for (; lVar4 = (long)( (int)lVar5 + 1 ),uVar6 != uVar8; uVar8 = uVar8 + 1) {
            uVar9 = uVar9 * 2;
         }

         do {
            lVar5 = lVar4;
            uVar10 = uVar9 + 1;
            local_548[lVar5 + -1] = uVar9;
            uVar6 = (uint)local_138[lVar5];
            lVar4 = lVar5 + 1;
            uVar9 = uVar10;
         }
 while ( uVar6 == uVar8 );
         uVar9 = uVar10 * 2;
         uVar8 = uVar8 + 1;
      }
 while ( local_138[lVar5] != 0 );
   }

   lVar5 = 0;
   param_1[0] = 0;
   param_1[1] = 0;
   param_1[0xfe] = 0;
   param_1[0xff] = 0;
   puVar13 = (undefined8*)( ( ulong )(param_1 + 2) & 0xfffffffffffffff8 );
   for (uVar11 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 2) & 0xfffffffffffffff8 ) ) + 0x400U >> 3); uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
   }

   param_2[0] = '\0';
   param_2[1] = '\0';
   param_2[2] = '\0';
   param_2[3] = '\0';
   param_2[4] = '\0';
   param_2[5] = '\0';
   param_2[6] = '\0';
   param_2[7] = '\0';
   param_2[0xf8] = '\0';
   param_2[0xf9] = '\0';
   param_2[0xfa] = '\0';
   param_2[0xfb] = '\0';
   param_2[0xfc] = '\0';
   param_2[0xfd] = '\0';
   param_2[0xfe] = '\0';
   param_2[0xff] = '\0';
   puVar13 = (undefined8*)( ( ulong )(param_2 + 8) & 0xfffffffffffffff8 );
   for (uVar11 = ( ulong )(( (int)param_2 - (int)(undefined8*)( ( ulong )(param_2 + 8) & 0xfffffffffffffff8 ) ) + 0x100U >> 3); uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
   }

   if (0 < iVar14) {
      do {
         param_1[param_4[lVar5]] = local_548[lVar5];
         puVar2 = local_138 + lVar5;
         pbVar1 = param_4 + lVar5;
         lVar5 = lVar5 + 1;
         param_2[*pbVar1] = *puVar2;
      }
 while ( lVar5 != iVar14 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* jpge::jpeg_encoder::compute_quant_table(int*, short*) */void jpge::jpeg_encoder::compute_quant_table(jpeg_encoder *this, int *param_1, short *param_2) {
   int iVar1;
   int iVar2;
   long lVar3;
   int iVar4;
   iVar4 = *(int*)( this + 8 );
   if (iVar4 < 0x32) {
      iVar4 = (int)( 5000 / (long)iVar4 );
   }
 else {
      iVar4 = ( 100 - iVar4 ) * 2;
   }

   lVar3 = 0;
   do {
      iVar2 = 0xff;
      iVar1 = *(short*)( (long)param_2 + lVar3 ) * iVar4;
      if (iVar1 < 0x636a) {
         iVar2 = (int)( ( (long)iVar1 + 0x32 ) / 100 );
         if (iVar2 < 1) {
            iVar2 = 1;
         }

      }

      *(int*)( (long)param_1 + lVar3 * 2 ) = iVar2;
      lVar3 = lVar3 + 2;
   }
 while ( lVar3 != 0x80 );
   return;
}
/* jpge::jpeg_encoder::first_pass_init() */void jpge::jpeg_encoder::first_pass_init(jpeg_encoder *this) {
   *(undefined8*)( this + 0x34ac ) = 0;
   *(undefined8*)( this + 0x2c90 ) = 0;
   *(undefined4*)( this + 0x2c98 ) = 0;
   this[200] = (jpeg_encoder)0x0;
   this[0x34b4] = (jpeg_encoder)0x1;
   return;
}
/* jpge::jpeg_encoder::second_pass_init() */undefined8 jpge::jpeg_encoder::second_pass_init(jpeg_encoder *this) {
   char cVar1;
   jpeg_encoder jVar2;
   long in_FS_OFFSET;
   undefined1 local_21;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   compute_huffman_table(this, (uint*)( this + 0x44c ), (uchar*)( this + 0x144c ), (uchar*)( this + 0x184c ), (uchar*)( this + 0x1890 ));
   compute_huffman_table(this, (uint*)( this + 0xc4c ), (uchar*)( this + 0x164c ), (uchar*)( this + 0x186e ), (uchar*)( this + 0x1a90 ));
   if (1 < (byte)this[0x14]) {
      compute_huffman_table(this, (uint*)( this + 0x84c ), (uchar*)( this + 0x154c ), (uchar*)( this + 0x185d ), (uchar*)( this + 0x1990 ));
      compute_huffman_table(this, (uint*)( this + 0x104c ), (uchar*)( this + 0x174c ), (uchar*)( this + 0x187f ), (uchar*)( this + 0x1b90 ));
   }

   local_21 = 0xff;
   *(undefined8*)( this + 0x34ac ) = 0;
   *(undefined8*)( this + 0x2c90 ) = 0;
   *(undefined4*)( this + 0x2c98 ) = 0;
   this[200] = (jpeg_encoder)0x0;
   this[0x34b4] = (jpeg_encoder)0x1;
   if (this[0x34b5] != (jpeg_encoder)0x0) {
      cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
      if (cVar1 != '\0') {
         local_21 = 0xd8;
         this[0x34b5] = (jpeg_encoder)0x1;
         jVar2 = ( jpeg_encoder )(**(code**)( **(long**)this + 0x10 ))(*(long**)this, &local_21, 1);
         goto LAB_00102938;
      }

   }

   jVar2 = (jpeg_encoder)0x0;
   LAB_00102938:this[0x34b5] = jVar2;
   emit_jfif_app0(this);
   emit_dqt(this);
   emit_sof(this);
   emit_dhts(this);
   emit_sos(this);
   this[0x34b4] = (jpeg_encoder)0x2;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* jpge::jpeg_encoder::jpg_open(int, int, int) */jpeg_encoder jpge::jpeg_encoder::jpg_open(jpeg_encoder *this, int param_1, int param_2, int param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   undefined8 uVar14;
   undefined8 uVar15;
   undefined8 uVar16;
   jpeg_encoder jVar17;
   undefined4 uVar18;
   undefined8 uVar19;
   char cVar20;
   uint uVar21;
   void *pvVar22;
   ulong uVar23;
   jpeg_encoder *pjVar24;
   jpeg_encoder *pjVar25;
   short *psVar26;
   int iVar27;
   int iVar28;
   int iVar29;
   undefined8 *puVar30;
   uint uVar31;
   undefined1 *puVar32;
   int iVar33;
   byte bVar34;
   bVar34 = 0;
   uVar21 = *(uint*)( this + 0xc );
   this[0x14] = (jpeg_encoder)0x3;
   uVar2 = _LC22;
   uVar1 = _LC19;
   if (uVar21 == 2) {
      *(undefined4*)( this + 0x15 ) = 0x1010102;
      iVar27 = 3;
      *(undefined2*)( this + 0x19 ) = 0x101;
      uVar31 = 0xfffffff8;
      iVar29 = param_1 * 3;
      iVar33 = 8;
      *(undefined8*)( this + 0x40 ) = uVar2;
      uVar21 = 0xfffffff0;
      iVar28 = 0x10;
   }
 else if (uVar21 < 3) {
      if (uVar21 == 0) {
         this[0x18] = (jpeg_encoder)0x1;
         iVar27 = 1;
         *(undefined2*)( this + 0x14 ) = 0x101;
         uVar31 = 0xfffffff8;
         iVar33 = 8;
         uVar21 = 0xfffffff8;
         *(undefined8*)( this + 0x40 ) = uVar1;
         iVar28 = 8;
         iVar29 = param_1;
      }
 else {
         iVar27 = 3;
         *(undefined4*)( this + 0x15 ) = 0x1010101;
         *(undefined2*)( this + 0x19 ) = 0x101;
         iVar33 = 8;
         uVar31 = 0xfffffff8;
         uVar21 = 0xfffffff8;
         *(undefined8*)( this + 0x40 ) = uVar1;
         iVar28 = 8;
         iVar29 = param_1 * 3;
      }

   }
 else if (uVar21 == 3) {
      *(undefined4*)( this + 0x15 ) = 0x2010102;
      iVar27 = 3;
      uVar31 = 0xfffffff0;
      *(undefined2*)( this + 0x19 ) = 0x101;
      iVar33 = 0x10;
      uVar21 = 0xfffffff0;
      *(undefined8*)( this + 0x40 ) = _LC24;
      iVar29 = param_1 * 3;
      iVar28 = 0x10;
   }
 else {
      iVar28 = *(int*)( this + 0x40 );
      iVar33 = *(int*)( this + 0x44 );
      iVar27 = 3;
      iVar29 = param_1 * 3;
      uVar21 = -iVar28;
      uVar31 = -iVar33;
   }

   *(int*)( this + 0x1c ) = param_1;
   *(int*)( this + 0x20 ) = param_2;
   *(int*)( this + 0x24 ) = param_3;
   uVar21 = iVar28 + -1 + param_1 & uVar21;
   *(uint*)( this + 0x30 ) = iVar33 + -1 + param_2 & uVar31;
   iVar27 = iVar27 * uVar21;
   *(uint*)( this + 0x2c ) = uVar21;
   *(int*)( this + 0x34 ) = iVar29;
   *(int*)( this + 0x28 ) = param_3 * param_1;
   *(int*)( this + 0x38 ) = iVar27;
   *(int*)( this + 0x3c ) = (int)uVar21 / iVar28;
   pvVar22 = malloc((long)( iVar27 * iVar33 ));
   *(void**)( this + 0x48 ) = pvVar22;
   if (pvVar22 == (void*)0x0) {
      return (jpeg_encoder)0x0;
   }

   if (1 < iVar33) {
      pjVar24 = this + 0x50;
      do {
         pvVar22 = (void*)( (long)pvVar22 + (long)iVar27 );
         pjVar25 = pjVar24 + 8;
         *(void**)pjVar24 = pvVar22;
         pjVar24 = pjVar25;
      }
 while ( this + ( ulong )(iVar33 - 2) * 8 + 0x58 != pjVar25 );
   }

   if (this[0x12] == (jpeg_encoder)0x0) {
      compute_quant_table(this, (int*)( this + 0x24c ), (short*)s_alt_quant);
      for (int i = 0; i < 32; i++) {
         *(undefined8*)( this + ( 8*i + 844 ) ) = *(undefined8*)( this + ( 8*i + 588 ) );
      }

   }
 else {
      puVar32 = s_std_lum_quant;
      compute_quant_table(this, (int*)( this + 0x24c ), (short*)s_std_lum_quant);
      psVar26 = (short*)s_std_croma_quant;
      if (this[0x10] != (jpeg_encoder)0x0) {
         psVar26 = (short*)puVar32;
      }

      compute_quant_table(this, (int*)( this + 0x34c ), psVar26);
   }

   *(undefined4*)( this + 0x34a8 ) = 0x800;
   *(jpeg_encoder**)( this + 0x34a0 ) = this + 0x2c9c;
   uVar6 = s_dc_lum_bits._8_8_;
   uVar5 = s_dc_lum_bits._0_8_;
   uVar4 = s_ac_lum_bits._8_8_;
   uVar3 = s_ac_lum_bits._0_8_;
   uVar2 = s_ac_lum_val._8_8_;
   uVar1 = s_ac_lum_val._0_8_;
   if (this[0x11] == (jpeg_encoder)0x0) {
      this[0x185c] = s_dc_lum_bits[0x10];
      uVar11 = s_dc_lum_val;
      uVar10 = s_ac_lum_val._56_8_;
      uVar9 = s_ac_lum_val._48_8_;
      uVar8 = s_ac_lum_val._24_8_;
      uVar7 = s_ac_lum_val._16_8_;
      *(undefined8*)( this + 0x184c ) = uVar5;
      *(undefined8*)( this + 0x1854 ) = uVar6;
      *(undefined8*)( this + 0x1890 ) = uVar11;
      uVar18 = DAT_00104d60;
      uVar12 = s_ac_lum_val._88_8_;
      uVar11 = s_ac_lum_val._80_8_;
      uVar6 = s_ac_lum_val._72_8_;
      uVar5 = s_ac_lum_val._64_8_;
      *(undefined8*)( this + 0x186e ) = uVar3;
      *(undefined8*)( this + 0x1876 ) = uVar4;
      uVar16 = s_ac_lum_val._120_8_;
      uVar15 = s_ac_lum_val._112_8_;
      uVar14 = s_ac_lum_val._104_8_;
      uVar13 = s_ac_lum_val._96_8_;
      *(undefined4*)( this + 0x1898 ) = uVar18;
      jVar17 = s_ac_lum_bits[0x10];
      uVar4 = s_ac_lum_val._40_8_;
      uVar3 = s_ac_lum_val._32_8_;
      *(undefined8*)( this + 0x1a90 ) = uVar1;
      *(undefined8*)( this + 0x1a98 ) = uVar2;
      *(undefined8*)( this + 0x1aa0 ) = uVar7;
      *(undefined8*)( this + 0x1aa8 ) = uVar8;
      uVar8 = s_ac_lum_val._152_8_;
      uVar7 = s_ac_lum_val._144_8_;
      uVar2 = s_ac_lum_val._136_8_;
      uVar1 = s_ac_lum_val._128_8_;
      this[0x187e] = jVar17;
      *(undefined8*)( this + 0x1ac0 ) = uVar9;
      *(undefined8*)( this + 0x1ac8 ) = uVar10;
      *(undefined8*)( this + 0x1ad0 ) = uVar5;
      *(undefined8*)( this + 0x1ad8 ) = uVar6;
      *(undefined8*)( this + 0x1ae0 ) = uVar11;
      *(undefined8*)( this + 0x1ae8 ) = uVar12;
      *(undefined8*)( this + 0x1af0 ) = uVar13;
      *(undefined8*)( this + 0x1af8 ) = uVar14;
      *(undefined8*)( this + 0x1b00 ) = uVar15;
      *(undefined8*)( this + 0x1b08 ) = uVar16;
      *(undefined8*)( this + 0x1b10 ) = uVar1;
      *(undefined8*)( this + 0x1b18 ) = uVar2;
      *(undefined8*)( this + 0x1b20 ) = uVar7;
      *(undefined8*)( this + 0x1b28 ) = uVar8;
      *(undefined8*)( this + 0x1ab0 ) = uVar3;
      *(undefined8*)( this + 0x1ab8 ) = uVar4;
      uVar7 = s_ac_lum_val._200_8_;
      uVar6 = s_ac_lum_val._192_8_;
      uVar5 = s_ac_lum_val._184_8_;
      uVar4 = s_ac_lum_val._176_8_;
      uVar3 = s_ac_lum_val._168_8_;
      uVar2 = s_ac_lum_val._160_8_;
      this[0x186d] = s_dc_chroma_bits[0x10];
      uVar19 = s_ac_lum_val._248_8_;
      uVar16 = s_ac_lum_val._240_8_;
      uVar13 = s_ac_lum_val._216_8_;
      uVar8 = s_ac_lum_val._208_8_;
      uVar1 = s_dc_chroma_val;
      *(undefined8*)( this + 0x1b30 ) = uVar2;
      *(undefined8*)( this + 0x1b38 ) = uVar3;
      *(undefined8*)( this + 0x1990 ) = uVar1;
      uVar12 = s_dc_chroma_bits._8_8_;
      uVar11 = s_dc_chroma_bits._0_8_;
      uVar18 = DAT_00104c00;
      uVar10 = s_ac_chroma_bits._8_8_;
      uVar9 = s_ac_chroma_bits._0_8_;
      *(undefined8*)( this + 0x1b40 ) = uVar4;
      *(undefined8*)( this + 0x1b48 ) = uVar5;
      uVar4 = s_ac_chroma_val._24_8_;
      uVar3 = s_ac_chroma_val._16_8_;
      uVar2 = s_ac_chroma_val._8_8_;
      uVar1 = s_ac_chroma_val._0_8_;
      *(undefined4*)( this + 0x1998 ) = uVar18;
      uVar15 = s_ac_lum_val._232_8_;
      uVar14 = s_ac_lum_val._224_8_;
      jVar17 = s_ac_chroma_bits[0x10];
      *(undefined8*)( this + 0x1b50 ) = uVar6;
      *(undefined8*)( this + 7000 ) = uVar7;
      *(undefined8*)( this + 0x1b60 ) = uVar8;
      *(undefined8*)( this + 0x1b68 ) = uVar13;
      uVar8 = s_ac_chroma_val._56_8_;
      uVar7 = s_ac_chroma_val._48_8_;
      uVar6 = s_ac_chroma_val._40_8_;
      uVar5 = s_ac_chroma_val._32_8_;
      *(undefined8*)( this + 0x1b80 ) = uVar16;
      *(undefined8*)( this + 0x1b88 ) = uVar19;
      *(undefined8*)( this + 0x185d ) = uVar11;
      *(undefined8*)( this + 0x1865 ) = uVar12;
      *(undefined8*)( this + 0x187f ) = uVar9;
      *(undefined8*)( this + 0x1887 ) = uVar10;
      *(undefined8*)( this + 0x1b90 ) = uVar1;
      *(undefined8*)( this + 0x1b98 ) = uVar2;
      *(undefined8*)( this + 0x1ba0 ) = uVar3;
      *(undefined8*)( this + 0x1ba8 ) = uVar4;
      *(undefined8*)( this + 0x1bb0 ) = uVar5;
      *(undefined8*)( this + 0x1bb8 ) = uVar6;
      *(undefined8*)( this + 0x1bc0 ) = uVar7;
      *(undefined8*)( this + 0x1bc8 ) = uVar8;
      this[0x188f] = jVar17;
      *(undefined8*)( this + 0x1b70 ) = uVar14;
      *(undefined8*)( this + 0x1b78 ) = uVar15;
      uVar11 = s_ac_chroma_val._152_8_;
      uVar10 = s_ac_chroma_val._144_8_;
      uVar9 = s_ac_chroma_val._136_8_;
      uVar8 = s_ac_chroma_val._128_8_;
      uVar7 = s_ac_chroma_val._120_8_;
      uVar6 = s_ac_chroma_val._112_8_;
      uVar5 = s_ac_chroma_val._104_8_;
      uVar4 = s_ac_chroma_val._96_8_;
      uVar3 = s_ac_chroma_val._88_8_;
      uVar2 = s_ac_chroma_val._80_8_;
      uVar1 = s_ac_chroma_val._72_8_;
      *(undefined8*)( this + 0x1bd0 ) = s_ac_chroma_val._64_8_;
      *(undefined8*)( this + 0x1bd8 ) = uVar1;
      uVar14 = s_ac_chroma_val._184_8_;
      uVar13 = s_ac_chroma_val._176_8_;
      uVar12 = s_ac_chroma_val._168_8_;
      uVar1 = s_ac_chroma_val._160_8_;
      *(undefined8*)( this + 0x1be0 ) = uVar2;
      *(undefined8*)( this + 0x1be8 ) = uVar3;
      uVar16 = s_ac_chroma_val._216_8_;
      uVar15 = s_ac_chroma_val._208_8_;
      uVar3 = s_ac_chroma_val._200_8_;
      uVar2 = s_ac_chroma_val._192_8_;
      *(undefined8*)( this + 0x1bf0 ) = uVar4;
      *(undefined8*)( this + 0x1bf8 ) = uVar5;
      *(undefined8*)( this + 0x1c00 ) = uVar6;
      *(undefined8*)( this + 0x1c08 ) = uVar7;
      uVar7 = s_ac_chroma_val._248_8_;
      uVar6 = s_ac_chroma_val._240_8_;
      uVar5 = s_ac_chroma_val._232_8_;
      uVar4 = s_ac_chroma_val._224_8_;
      *(undefined8*)( this + 0x1c10 ) = uVar8;
      *(undefined8*)( this + 0x1c18 ) = uVar9;
      *(undefined8*)( this + 0x1c20 ) = uVar10;
      *(undefined8*)( this + 0x1c28 ) = uVar11;
      *(undefined8*)( this + 0x1c30 ) = uVar1;
      *(undefined8*)( this + 0x1c38 ) = uVar12;
      *(undefined8*)( this + 0x1c40 ) = uVar13;
      *(undefined8*)( this + 0x1c48 ) = uVar14;
      *(undefined8*)( this + 0x1c50 ) = uVar2;
      *(undefined8*)( this + 0x1c58 ) = uVar3;
      *(undefined8*)( this + 0x1c60 ) = uVar15;
      *(undefined8*)( this + 0x1c68 ) = uVar16;
      *(undefined8*)( this + 0x1c70 ) = uVar4;
      *(undefined8*)( this + 0x1c78 ) = uVar5;
      *(undefined8*)( this + 0x1c80 ) = uVar6;
      *(undefined8*)( this + 0x1c88 ) = uVar7;
      cVar20 = second_pass_init(this);
      if (cVar20 == '\0') {
         return (jpeg_encoder)0x0;
      }

   }
 else {
      *(undefined8*)( this + 0x1c90 ) = 0;
      *(undefined8*)( this + 0x2c88 ) = 0;
      puVar30 = (undefined8*)( ( ulong )(this + 0x1c98) & 0xfffffffffffffff8 );
      for (uVar23 = ( ulong )(( (int)this - (int)(undefined8*)( ( ulong )(this + 0x1c98) & 0xfffffffffffffff8 ) ) + 0x2c90U >> 3); uVar23 != 0; uVar23 = uVar23 - 1) {
         *puVar30 = 0;
         puVar30 = puVar30 + (ulong)bVar34 * -2 + 1;
      }

      this[200] = (jpeg_encoder)0x0;
      *(undefined8*)( this + 0x34ac ) = 0;
      *(undefined8*)( this + 0x2c90 ) = 0;
      *(undefined4*)( this + 0x2c98 ) = 0;
      this[0x34b4] = (jpeg_encoder)0x1;
   }

   return this[0x34b5];
}
/* jpge::jpeg_encoder::load_block_8_8_grey(int) */void jpge::jpeg_encoder::load_block_8_8_grey(jpeg_encoder *this, int param_1) {
   long lVar1;
   jpeg_encoder *pjVar2;
   jpeg_encoder *pjVar3;
   byte *pbVar4;
   jpeg_encoder *pjVar5;
   pjVar5 = this + 0x48;
   pjVar2 = this + 0xcc;
   do {
      lVar1 = *(long*)pjVar5;
      pjVar3 = pjVar2 + 0x20;
      pjVar5 = pjVar5 + 8;
      pbVar4 = (byte*)( lVar1 + param_1 * 8 );
      *(uint*)pjVar2 = *pbVar4 - 0x80;
      for (int i = 0; i < 7; i++) {
         *(uint*)( pjVar2 + ( 4*i + 4 ) ) = pbVar4[( i + 1 )] - 128;
      }

      pjVar2 = pjVar3;
   }
 while ( pjVar3 != this + 0x1cc );
   return;
}
/* jpge::jpeg_encoder::load_block_8_8(int, int, int) */void jpge::jpeg_encoder::load_block_8_8(jpeg_encoder *this, int param_1, int param_2, int param_3) {
   jpeg_encoder *pjVar1;
   jpeg_encoder *pjVar2;
   jpeg_encoder *pjVar3;
   byte *pbVar4;
   jpeg_encoder *pjVar5;
   pjVar5 = this + (long)( param_2 << 3 ) * 8;
   pjVar2 = this + 0xcc;
   do {
      pjVar1 = pjVar5 + 0x48;
      pjVar3 = pjVar2 + 0x20;
      pjVar5 = pjVar5 + 8;
      pbVar4 = (byte*)( *(long*)pjVar1 + (long)( param_3 + param_1 * 0x18 ) );
      *(uint*)pjVar2 = *pbVar4 - 0x80;
      for (int i = 0; i < 7; i++) {
         *(uint*)( pjVar2 + ( 4*i + 4 ) ) = pbVar4[( 3*i + 3 )] - 128;
      }

      pjVar2 = pjVar3;
   }
 while ( pjVar3 != this + 0x1cc );
   return;
}
/* jpge::jpeg_encoder::load_block_16_8(int, int) */void jpge::jpeg_encoder::load_block_16_8(jpeg_encoder *this, int param_1, int param_2) {
   byte *pbVar1;
   jpeg_encoder *pjVar2;
   jpeg_encoder *pjVar3;
   byte *pbVar4;
   jpeg_encoder *pjVar5;
   long lVar6;
   pjVar5 = this + 0x48;
   lVar6 = (long)( param_1 * 0x30 + param_2 );
   pjVar2 = this + 0xcc;
   do {
      pbVar4 = (byte*)( *(long*)pjVar5 + lVar6 );
      pbVar1 = (byte*)( *(long*)( pjVar5 + 8 ) + lVar6 );
      *(int*)pjVar2 = ( (int)( ( uint ) * pbVar4 + (uint)pbVar4[3] + ( uint ) * pbVar1 + 2 + (uint)pbVar1[3] ) >> 2 ) + -0x80;
      for (int i = 0; i < 6; i++) {
         *(int*)( pjVar2 + ( 4*i + 4 ) ) = ( (int)( (uint)pbVar4[( 6*i + 6 )] + (uint)pbVar4[( 6*i + 9 )] + (uint)pbVar1[( 6*i + 6 )] + 2 + (uint)pbVar1[( 6*i + 9 )] ) >> 2 ) + -128;
      }

      pjVar3 = pjVar2 + 0x20;
      pjVar5 = pjVar5 + 0x10;
      *(int*)( pjVar2 + 0x1c ) = ( (int)( (uint)pbVar4[0x2d] + (uint)pbVar4[0x2a] + (uint)pbVar1[0x2a] + 2 + (uint)pbVar1[0x2d] ) >> 2 ) + -0x80;
      pjVar2 = pjVar3;
   }
 while ( pjVar3 != this + 0x1cc );
   return;
}
/* jpge::jpeg_encoder::load_block_16_8_8(int, int) */void jpge::jpeg_encoder::load_block_16_8_8(jpeg_encoder *this, int param_1, int param_2) {
   long lVar1;
   byte *pbVar2;
   jpeg_encoder *pjVar3;
   jpeg_encoder *pjVar4;
   jpeg_encoder *pjVar5;
   pjVar5 = this + 0x48;
   pjVar3 = this + 0xcc;
   do {
      lVar1 = *(long*)pjVar5;
      pjVar4 = pjVar3 + 0x20;
      pjVar5 = pjVar5 + 8;
      pbVar2 = (byte*)( lVar1 + ( param_1 * 0x30 + param_2 ) );
      *(int*)pjVar3 = ( (int)( *pbVar2 + 1 + (uint)pbVar2[3] ) >> 1 ) + -0x80;
      for (int i = 0; i < 7; i++) {
         *(int*)( pjVar3 + ( 4*i + 4 ) ) = ( (int)( pbVar2[( 6*i + 6 )] + 1 + (uint)pbVar2[( 6*i + 9 )] ) >> 1 ) + -128;
      }

      pjVar3 = pjVar4;
   }
 while ( pjVar4 != this + 0x1cc );
   return;
}
/* jpge::jpeg_encoder::load_quantized_coefficients(int) */void jpge::jpeg_encoder::load_quantized_coefficients(jpeg_encoder *this, int param_1) {
   int iVar1;
   int iVar2;
   long lVar3;
   short sVar4;
   lVar3 = 0;
   do {
      iVar1 = *(int*)( this + lVar3 * 4 + ( ulong )(0 < param_1) * 0x100 + 0x24c );
      iVar2 = *(int*)( this + ( ulong )(byte)(&s_zag)[lVar3] * 4 + 0xcc );
      if (iVar2 < 0) {
         iVar2 = ( iVar1 >> 1 ) - iVar2;
         sVar4 = 0;
         if (iVar1 <= iVar2) {
            sVar4 = -(short)(iVar2 / iVar1);
         }

      }
 else {
         iVar2 = ( iVar1 >> 1 ) + iVar2;
         sVar4 = 0;
         if (iVar1 <= iVar2) {
            sVar4 = (short)( iVar2 / iVar1 );
         }

      }

      *(short*)( this + lVar3 * 2 + 0x1cc ) = sVar4;
      lVar3 = lVar3 + 1;
   }
 while ( lVar3 != 0x40 );
   return;
}
/* jpge::jpeg_encoder::flush_output_buffer() */void jpge::jpeg_encoder::flush_output_buffer(jpeg_encoder *this) {
   jpeg_encoder jVar1;
   if (*(int*)( this + 0x34a8 ) != 0x800) {
      jVar1 = this[0x34b5];
      if (jVar1 != (jpeg_encoder)0x0) {
         jVar1 = ( jpeg_encoder )(**(code**)( **(long**)this + 0x10 ))(*(long**)this, this + 0x2c9c, 0x800 - *(int*)( this + 0x34a8 ));
      }

      this[0x34b5] = jVar1;
   }

   *(jpeg_encoder**)( this + 0x34a0 ) = this + 0x2c9c;
   *(undefined4*)( this + 0x34a8 ) = 0x800;
   return;
}
/* jpge::jpeg_encoder::put_bits(unsigned int, unsigned int) */void jpge::jpeg_encoder::put_bits(jpeg_encoder *this, uint param_1, uint param_2) {
   jpeg_encoder *pjVar1;
   int iVar2;
   char *pcVar3;
   undefined1 *puVar4;
   uint uVar5;
   char cVar6;
   uint uVar7;
   uVar5 = param_2 + *(int*)( this + 0x34b0 );
   *(uint*)( this + 0x34b0 ) = uVar5;
   uVar7 = param_1 << ( 0x18U - (char)uVar5 & 0x1f ) | *(uint*)( this + 0x34ac );
   *(uint*)( this + 0x34ac ) = uVar7;
   if (uVar5 < 8) {
      return;
   }

   do {
      pcVar3 = *(char**)( this + 0x34a0 );
      *(char**)( this + 0x34a0 ) = pcVar3 + 1;
      cVar6 = (char)( uVar7 >> 0x10 );
      *pcVar3 = cVar6;
      pjVar1 = this + 0x34a8;
      *(int*)pjVar1 = *(int*)pjVar1 + -1;
      if (*(int*)pjVar1 == 0) {
         flush_output_buffer(this);
      }

      if (cVar6 == -1) {
         puVar4 = *(undefined1**)( this + 0x34a0 );
         *(undefined1**)( this + 0x34a0 ) = puVar4 + 1;
         *puVar4 = 0;
         pjVar1 = this + 0x34a8;
         *(int*)pjVar1 = *(int*)pjVar1 + -1;
         if (*(int*)pjVar1 == 0) {
            flush_output_buffer(this);
         }

      }

      iVar2 = *(int*)( this + 0x34b0 );
      uVar7 = *(int*)( this + 0x34ac ) << 8;
      *(uint*)( this + 0x34ac ) = uVar7;
      *(uint*)( this + 0x34b0 ) = iVar2 - 8U;
   }
 while ( 7 < iVar2 - 8U );
   return;
}
/* jpge::jpeg_encoder::code_coefficients_pass_one(int) */void jpge::jpeg_encoder::code_coefficients_pass_one(jpeg_encoder *this, int param_1) {
   if (param_1 < 3) {
      code_coefficients_pass_one(this, param_1);
      return;
   }

   return;
}
/* jpge::jpeg_encoder::code_coefficients_pass_two(int) */void jpge::jpeg_encoder::code_coefficients_pass_two(jpeg_encoder *this, int param_1) {
   uint uVar1;
   long lVar2;
   int iVar3;
   uint uVar4;
   uint uVar5;
   int iVar6;
   jpeg_encoder *pjVar7;
   jpeg_encoder *pjVar8;
   jpeg_encoder *pjVar9;
   jpeg_encoder *pjVar10;
   uint local_44;
   if (param_1 == 0) {
      pjVar7 = this + 0x44c;
      pjVar9 = this + 0xc4c;
      pjVar8 = this + 0x144c;
      pjVar10 = this + 0x164c;
   }
 else {
      pjVar7 = this + 0x84c;
      pjVar9 = this + 0x104c;
      pjVar8 = this + 0x154c;
      pjVar10 = this + 0x174c;
   }

   iVar3 = (int)*(short*)( this + 0x1cc );
   iVar6 = *(int*)( this + ( (long)param_1 + 0xb24 ) * 4 );
   *(int*)( this + ( (long)param_1 + 0xb24 ) * 4 ) = iVar3;
   uVar1 = iVar3 - iVar6;
   uVar5 = uVar1;
   if ((int)uVar1 < 0) {
      uVar5 = uVar1 - 1;
      uVar1 = iVar6 - iVar3;
   }

   if (uVar1 == 0) {
      put_bits(this, *(uint*)pjVar7, ( uint )(byte) * pjVar8);
   }
 else {
      uVar4 = 0;
      do {
         uVar4 = uVar4 + 1;
         uVar1 = (int)uVar1 >> 1;
      }
 while ( uVar1 != 0 );
      put_bits(this, *(uint*)( pjVar7 + (long)(int)uVar4 * 4 ), (uint)(byte)pjVar8[(int)uVar4]);
      put_bits(this, ( 1 << ( (byte)uVar4 & 0x1f ) ) - 1U & uVar5, uVar4);
   }

   local_44 = 0;
   pjVar7 = this + 0x1ce;
   do {
      uVar5 = ( uint ) * (short*)pjVar7;
      if (*(short*)pjVar7 != 0) {
         uVar1 = local_44;
         if (0xf < (int)local_44) {
            do {
               uVar1 = uVar1 - 0x10;
               put_bits(this, *(uint*)( pjVar9 + 0x3c0 ), (uint)(byte)pjVar10[0xf0]);
            }
 while ( 0xf < (int)uVar1 );
            uVar1 = local_44 & 0xf;
         }

         do {
            uVar4 = uVar5;
            if ((int)uVar5 < 0) {
               uVar4 = uVar5 - 1;
               uVar5 = -uVar5;
            }

            iVar6 = (int)uVar5 >> 1;
            if (iVar6 == 0) {
               local_44 = 1;
               uVar5 = 1;
            }
 else {
               local_44 = 1;
               do {
                  local_44 = local_44 + 1;
                  iVar6 = iVar6 >> 1;
               }
 while ( iVar6 != 0 );
               uVar5 = ( 1 << ( (byte)local_44 & 0x1f ) ) - 1;
            }

            pjVar7 = pjVar7 + 2;
            lVar2 = (long)(int)( uVar1 * 0x10 + local_44 );
            put_bits(this, *(uint*)( pjVar9 + lVar2 * 4 ), (uint)(byte)pjVar10[lVar2]);
            put_bits(this, uVar4 & uVar5, local_44);
            if (this + 0x24c == pjVar7) {
               return;
            }

            uVar5 = ( uint ) * (short*)pjVar7;
            uVar1 = 0;
            local_44 = uVar5;
         }
 while ( *(short*)pjVar7 != 0 );
      }

      local_44 = local_44 + 1;
      pjVar7 = pjVar7 + 2;
      if (this + 0x24c == pjVar7) {
         if (local_44 == 0) {
            return;
         }

         put_bits(this, *(uint*)pjVar9, ( uint )(byte) * pjVar10);
         return;
      }

   }
 while ( true );
}
/* jpge::jpeg_encoder::process_mcu_row() [clone .part.0] */void jpge::jpeg_encoder::process_mcu_row(jpeg_encoder *this) {
   jpeg_encoder *pjVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   if (this[0x15] == (jpeg_encoder)0x1) {
      if (( this[0x18] == (jpeg_encoder)0x1 ) && ( 0 < *(int*)( this + 0x3c ) )) {
         iVar4 = 0;
         pjVar1 = this + 0xcc;
         do {
            for (int i = 0; i < 3; i++) {
               load_block_8_8(this, iVar4, 0, i);
               iVar2 = i;
               DCT2D((int*)pjVar1);
               load_quantized_coefficients(this, iVar2);
               if (this[13492] == (jpeg_encoder)1) {
                  code_coefficients_pass_one(this, i);
               }
 else {
                  code_coefficients_pass_two(this, i);
               }

            }

            iVar4 = iVar4 + 1;
         }
 while ( iVar4 < *(int*)( this + 0x3c ) );
      }

   }
 else if (this[0x15] == (jpeg_encoder)0x2) {
      if (this[0x18] == (jpeg_encoder)0x1) {
         if (0 < *(int*)( this + 0x3c )) {
            iVar4 = 0;
            pjVar1 = this + 0xcc;
            do {
               load_block_8_8(this, iVar4 * 2, 0, 0);
               iVar2 = 0;
               DCT2D((int*)pjVar1);
               load_quantized_coefficients(this, iVar2);
               if (this[0x34b4] == (jpeg_encoder)0x1) {
                  code_coefficients_pass_one(this, 0);
               }
 else {
                  code_coefficients_pass_two(this, 0);
               }

               load_block_8_8(this, iVar4 * 2 + 1, 0, 0);
               iVar2 = 0;
               DCT2D((int*)pjVar1);
               load_quantized_coefficients(this, iVar2);
               if (this[0x34b4] == (jpeg_encoder)0x1) {
                  code_coefficients_pass_one(this, 0);
               }
 else {
                  code_coefficients_pass_two(this, 0);
               }

               load_block_16_8_8(this, iVar4, 1);
               iVar2 = 1;
               DCT2D((int*)pjVar1);
               load_quantized_coefficients(this, iVar2);
               if (this[0x34b4] == (jpeg_encoder)0x1) {
                  code_coefficients_pass_one(this, 1);
               }
 else {
                  code_coefficients_pass_two(this, 1);
               }

               load_block_16_8_8(this, iVar4, 2);
               iVar2 = 2;
               DCT2D((int*)pjVar1);
               load_quantized_coefficients(this, iVar2);
               if (this[0x34b4] == (jpeg_encoder)0x1) {
                  code_coefficients_pass_one(this, 2);
               }
 else {
                  code_coefficients_pass_two(this, 2);
               }

               iVar4 = iVar4 + 1;
            }
 while ( iVar4 < *(int*)( this + 0x3c ) );
         }

      }
 else if (( this[0x18] == (jpeg_encoder)0x2 ) && ( 0 < *(int*)( this + 0x3c ) )) {
         iVar4 = 0;
         pjVar1 = this + 0xcc;
         do {
            iVar2 = iVar4 * 2;
            load_block_8_8(this, iVar2, 0, 0);
            iVar3 = 0;
            DCT2D((int*)pjVar1);
            load_quantized_coefficients(this, iVar3);
            if (this[0x34b4] == (jpeg_encoder)0x1) {
               code_coefficients_pass_one(this, 0);
            }
 else {
               code_coefficients_pass_two(this, 0);
            }

            load_block_8_8(this, iVar2 + 1, 0, 0);
            iVar3 = 0;
            DCT2D((int*)pjVar1);
            load_quantized_coefficients(this, iVar3);
            if (this[0x34b4] == (jpeg_encoder)0x1) {
               code_coefficients_pass_one(this, 0);
            }
 else {
               code_coefficients_pass_two(this, 0);
            }

            load_block_8_8(this, iVar2, 1, 0);
            iVar3 = 0;
            DCT2D((int*)pjVar1);
            load_quantized_coefficients(this, iVar3);
            if (this[0x34b4] == (jpeg_encoder)0x1) {
               code_coefficients_pass_one(this, 0);
            }
 else {
               code_coefficients_pass_two(this, 0);
            }

            load_block_8_8(this, iVar2 + 1, 1, 0);
            iVar2 = 0;
            DCT2D((int*)pjVar1);
            load_quantized_coefficients(this, iVar2);
            if (this[0x34b4] == (jpeg_encoder)0x1) {
               code_coefficients_pass_one(this, 0);
            }
 else {
               code_coefficients_pass_two(this, 0);
            }

            load_block_16_8(this, iVar4, 1);
            iVar2 = 1;
            DCT2D((int*)pjVar1);
            load_quantized_coefficients(this, iVar2);
            if (this[0x34b4] == (jpeg_encoder)0x1) {
               code_coefficients_pass_one(this, 1);
            }
 else {
               code_coefficients_pass_two(this, 1);
            }

            load_block_16_8(this, iVar4, 2);
            iVar2 = 2;
            DCT2D((int*)pjVar1);
            load_quantized_coefficients(this, iVar2);
            if (this[0x34b4] == (jpeg_encoder)0x1) {
               code_coefficients_pass_one(this, 2);
            }
 else {
               code_coefficients_pass_two(this, 2);
            }

            iVar4 = iVar4 + 1;
         }
 while ( iVar4 < *(int*)( this + 0x3c ) );
      }

   }

   return;
}
/* jpge::jpeg_encoder::code_block(int) */void jpge::jpeg_encoder::code_block(jpeg_encoder *this, int param_1) {
   int iVar1;
   iVar1 = param_1;
   DCT2D((int*)( this + 0xcc ));
   load_quantized_coefficients(this, iVar1);
   if (this[0x34b4] != (jpeg_encoder)0x1) {
      code_coefficients_pass_two(this, param_1);
      return;
   }

   if (param_1 < 3) {
      code_coefficients_pass_one(this, param_1);
      return;
   }

   return;
}
/* jpge::jpeg_encoder::process_mcu_row() */void jpge::jpeg_encoder::process_mcu_row(jpeg_encoder *this) {
   int iVar1;
   int iVar2;
   if (this[0x14] != (jpeg_encoder)0x1) {
      process_mcu_row(this);
      return;
   }

   iVar1 = 0;
   if (0 < *(int*)( this + 0x3c )) {
      do {
         while (true) {
            load_block_8_8_grey(this, iVar1);
            iVar2 = 0;
            DCT2D((int*)( this + 0xcc ));
            load_quantized_coefficients(this, iVar2);
            if (this[0x34b4] == (jpeg_encoder)0x1) break;
            code_coefficients_pass_two(this, 0);
            iVar1 = iVar1 + 1;
            if (*(int*)( this + 0x3c ) <= iVar1) {
               return;
            }

         }
;
         code_coefficients_pass_one(this, 0);
         iVar1 = iVar1 + 1;
      }
 while ( iVar1 < *(int*)( this + 0x3c ) );
   }

   return;
}
/* jpge::jpeg_encoder::terminate_pass_one() */void jpge::jpeg_encoder::terminate_pass_one(jpeg_encoder *this) {
   optimize_huffman_table(this, 0, 0xc);
   optimize_huffman_table(this, 2, 0x100);
   if (1 < (byte)this[0x14]) {
      optimize_huffman_table(this, 1, 0xc);
      optimize_huffman_table(this, 3, 0x100);
   }

   second_pass_init(this);
   return;
}
/* jpge::jpeg_encoder::terminate_pass_two() */undefined8 jpge::jpeg_encoder::terminate_pass_two(jpeg_encoder *this) {
   char cVar1;
   jpeg_encoder jVar2;
   long in_FS_OFFSET;
   undefined1 local_21;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   put_bits(this, 0x7f, 7);
   flush_output_buffer(this);
   local_21 = 0xff;
   if (this[0x34b5] != (jpeg_encoder)0x0) {
      cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
      if (cVar1 != '\0') {
         local_21 = 0xd9;
         this[0x34b5] = (jpeg_encoder)0x1;
         jVar2 = ( jpeg_encoder )(**(code**)( **(long**)this + 0x10 ))(*(long**)this, &local_21, 1);
         goto LAB_00103e1e;
      }

   }

   jVar2 = (jpeg_encoder)0x0;
   LAB_00103e1e:this[0x34b4] = ( jpeg_encoder )((char)this[0x34b4] + '\x01');
   this[0x34b5] = jVar2;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* jpge::jpeg_encoder::process_end_of_image() */undefined8 jpge::jpeg_encoder::process_end_of_image(jpeg_encoder *this) {
   char cVar1;
   jpeg_encoder jVar2;
   undefined8 uVar3;
   int iVar4;
   long lVar5;
   int iVar6;
   long in_FS_OFFSET;
   undefined1 local_21;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   jVar2 = this[200];
   if (jVar2 != (jpeg_encoder)0x0) {
      if (( (byte)jVar2 < 0x10 ) && ( (int)(uint)(byte)jVar2 < *(int*)( this + 0x44 ) )) {
         lVar5 = (long)(int)( (byte)jVar2 + 1 );
         while (true) {
            memcpy(*(void**)( this + lVar5 * 8 + 0x40 ), *(void**)( this + (long)(int)( (byte)jVar2 - 1 ) * 8 + 0x48 ), (long)*(int*)( this + 0x38 ));
            if (*(int*)( this + 0x44 ) <= (int)lVar5) break;
            jVar2 = this[200];
            lVar5 = lVar5 + 1;
         }
;
      }

      if (this[0x14] == (jpeg_encoder)0x1) {
         if (0 < *(int*)( this + 0x3c )) {
            iVar4 = 0;
            do {
               load_block_8_8_grey(this, iVar4);
               iVar6 = 0;
               DCT2D((int*)( this + 0xcc ));
               load_quantized_coefficients(this, iVar6);
               if (this[0x34b4] == (jpeg_encoder)0x1) {
                  code_coefficients_pass_one(this, 0);
               }
 else {
                  code_coefficients_pass_two(this, 0);
               }

               iVar4 = iVar4 + 1;
            }
 while ( iVar4 < *(int*)( this + 0x3c ) );
         }

      }
 else {
         process_mcu_row(this);
      }

   }

   if (this[0x34b4] == (jpeg_encoder)0x1) {
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar3 = terminate_pass_one(this);
         return uVar3;
      }

      goto LAB_00104022;
   }

   put_bits(this, 0x7f, 7);
   flush_output_buffer(this);
   local_21 = 0xff;
   if (this[0x34b5] == (jpeg_encoder)0x0) {
      LAB_00103f2f:jVar2 = (jpeg_encoder)0x0;
   }
 else {
      cVar1 = ( **(code**)( **(long**)this + 0x10 ) )(*(long**)this, &local_21, 1);
      if (cVar1 == '\0') goto LAB_00103f2f;
      local_21 = 0xd9;
      this[0x34b5] = (jpeg_encoder)0x1;
      jVar2 = ( jpeg_encoder )(**(code**)( **(long**)this + 0x10 ))(*(long**)this, &local_21, 1);
   }

   this[0x34b4] = ( jpeg_encoder )((char)this[0x34b4] + '\x01');
   this[0x34b5] = jVar2;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00104022:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* jpge::jpeg_encoder::load_mcu(void const*) */void jpge::jpeg_encoder::load_mcu(jpeg_encoder *this, void *param_1) {
   int iVar1;
   undefined1 uVar2;
   byte bVar3;
   byte bVar4;
   byte bVar5;
   undefined2 uVar6;
   int iVar7;
   char cVar8;
   uint uVar9;
   ulong uVar10;
   undefined1 *puVar11;
   undefined1 *puVar12;
   undefined1 *puVar13;
   byte *pbVar14;
   byte *pbVar15;
   undefined2 *puVar16;
   undefined1 *puVar17;
   jpeg_encoder jVar18;
   char cVar19;
   jVar18 = this[200];
   iVar7 = *(int*)( this + 0x24 );
   puVar13 = *(undefined1**)( this + (ulong)(byte)jVar18 * 8 + 0x48 );
   uVar9 = *(uint*)( this + 0x1c );
   uVar10 = (ulong)uVar9;
   puVar12 = puVar13;
   if (this[0x14] == (jpeg_encoder)0x1) {
      if (iVar7 == 4) {
         if (uVar9 != 0) {
            pbVar14 = (byte*)param_1;
            do {
               pbVar15 = pbVar14 + 4;
               *puVar13 = (char)( ( uint ) * pbVar14 * 0x4c8b + (uint)pbVar14[1] * 0x9646 + 0x8000 + (uint)pbVar14[2] * 0x1d2f >> 0x10 );
               puVar13 = puVar13 + 1;
               pbVar14 = pbVar15;
            }
 while ( pbVar15 != (byte*)( (long)param_1 + uVar10 * 4 ) );
            goto LAB_0010409b;
         }

      }
 else {
         if (iVar7 == 3) {
            if (uVar9 == 0) goto LAB_00104130;
            pbVar14 = (byte*)param_1;
            do {
               pbVar15 = pbVar14 + 3;
               *puVar13 = (char)( ( uint ) * pbVar14 * 0x4c8b + (uint)pbVar14[1] * 0x9646 + 0x8000 + (uint)pbVar14[2] * 0x1d2f >> 0x10 );
               puVar13 = puVar13 + 1;
               pbVar14 = pbVar15;
            }
 while ( pbVar15 != (byte*)( uVar10 * 3 + (long)param_1 ) );
         }
 else {
            puVar12 = (undefined1*)memcpy(puVar13, param_1, (long)(int)uVar9);
         }

         LAB_0010409b:jVar18 = this[200];
         puVar13 = *(undefined1**)( this + (ulong)(byte)jVar18 * 8 + 0x48 );
         uVar9 = *(uint*)( this + 0x1c );
         uVar10 = (ulong)uVar9;
         if (this[0x14] != (jpeg_encoder)0x1) goto LAB_001040b3;
      }

      LAB_00104130:memset(puVar13 + *(int*)( this + 0x34 ), (uint)(byte)puVar12[(long)*(int*)( this + 0x34 ) + -1], (long)(int)( *(int*)( this + 0x2c ) - uVar9 ));
      jVar18 = this[200];
   }
 else {
      if (iVar7 == 4) {
         if (uVar9 != 0) {
            puVar11 = puVar13;
            do {
               /* WARNING: Load size is inaccurate */
               bVar3 = *param_1;
               bVar4 = *(byte*)( (long)param_1 + 1 );
               bVar5 = *(byte*)( (long)param_1 + 2 );
               iVar7 = (uint)bVar4 * -0x54cd + (uint)bVar3 * -0x2b33 + 0x8000 + (uint)bVar5 * 0x8000;
               iVar1 = (uint)bVar4 * -0x6b2f + (uint)bVar3 * 0x8000 + 0x8000 + (uint)bVar5 * -0x14d1;
               cVar19 = (char)( (uint)iVar7 >> 0x10 ) + -0x80;
               cVar8 = (char)( (uint)iVar1 >> 0x10 ) + -0x80;
               if (iVar7 >> 0x10 == 0x80) {
                  cVar19 = -1;
               }
 else if (iVar1 >> 0x10 == 0x80) {
                  cVar8 = -1;
               }

               *puVar11 = (char)( (uint)bVar4 * 0x9646 + (uint)bVar3 * 0x4c8b + 0x8000 + (uint)bVar5 * 0x1d2f >> 0x10 );
               puVar17 = puVar11 + 3;
               param_1 = (void*)( (long)param_1 + 4 );
               puVar11[1] = cVar19;
               puVar11[2] = cVar8;
               puVar11 = puVar17;
            }
 while ( puVar13 + uVar10 * 3 != puVar17 );
            goto LAB_0010409b;
         }

      }
 else if (iVar7 == 3) {
         if (uVar9 != 0) {
            puVar11 = puVar13;
            do {
               /* WARNING: Load size is inaccurate */
               bVar3 = *param_1;
               bVar4 = *(byte*)( (long)param_1 + 1 );
               bVar5 = *(byte*)( (long)param_1 + 2 );
               iVar7 = (uint)bVar4 * -0x54cd + (uint)bVar3 * -0x2b33 + 0x8000 + (uint)bVar5 * 0x8000;
               iVar1 = (uint)bVar4 * -0x6b2f + (uint)bVar3 * 0x8000 + 0x8000 + (uint)bVar5 * -0x14d1;
               cVar19 = (char)( (uint)iVar7 >> 0x10 ) + -0x80;
               cVar8 = (char)( (uint)iVar1 >> 0x10 ) + -0x80;
               if (iVar7 >> 0x10 == 0x80) {
                  cVar19 = -1;
               }
 else if (iVar1 >> 0x10 == 0x80) {
                  cVar8 = -1;
               }

               *puVar11 = (char)( (uint)bVar4 * 0x9646 + (uint)bVar3 * 0x4c8b + 0x8000 + (uint)bVar5 * 0x1d2f >> 0x10 );
               puVar17 = puVar11 + 3;
               param_1 = (void*)( (long)param_1 + 3 );
               puVar11[1] = cVar19;
               puVar11[2] = cVar8;
               puVar11 = puVar17;
            }
 while ( puVar13 + uVar10 * 3 != puVar17 );
            goto LAB_0010409b;
         }

      }
 else if (uVar9 != 0) {
         puVar11 = (undefined1*)( uVar10 + (long)param_1 );
         do {
            /* WARNING: Load size is inaccurate */
            uVar2 = *param_1;
            param_1 = (void*)( (long)param_1 + 1 );
            puVar13[1] = 0x80;
            puVar13[2] = 0x80;
            *puVar13 = uVar2;
            puVar13 = puVar13 + 3;
         }
 while ( (undefined1*)param_1 != puVar11 );
         goto LAB_0010409b;
      }

      LAB_001040b3:iVar7 = *(int*)( this + 0x34 );
      uVar6 = *(undefined2*)( puVar12 + ( iVar7 + -3 ) );
      uVar2 = puVar12[(long)iVar7 + -1];
      puVar16 = (undefined2*)( puVar13 + iVar7 );
      if ((int)uVar10 < *(int*)( this + 0x2c )) {
         do {
            *puVar16 = uVar6;
            uVar9 = (int)uVar10 + 1;
            uVar10 = (ulong)uVar9;
            *(undefined1*)( puVar16 + 1 ) = uVar2;
            puVar16 = (undefined2*)( (long)puVar16 + 3 );
         }
 while ( (int)uVar9 < *(int*)( this + 0x2c ) );
         jVar18 = this[200];
      }

   }

   this[200] = ( jpeg_encoder )((char)jVar18 + 1U);
   if (( uint )(byte)((char)jVar18 + 1U) == *(uint*)( this + 0x44 )) {
      process_mcu_row(this);
      this[200] = (jpeg_encoder)0x0;
      return;
   }

   return;
}
/* jpge::jpeg_encoder::clear() */void jpge::jpeg_encoder::clear(jpeg_encoder *this) {
   *(undefined8*)( this + 0x48 ) = 0;
   *(undefined2*)( this + 0x34b4 ) = 0x100;
   return;
}
/* jpge::jpeg_encoder::jpeg_encoder() */void jpge::jpeg_encoder::jpeg_encoder(jpeg_encoder *this) {
   this[0x12] = (jpeg_encoder)0x0;
   *(undefined8*)( this + 8 ) = 0x300000055;
   *(undefined2*)( this + 0x10 ) = 0;
   *(undefined8*)( this + 0x48 ) = 0;
   *(undefined2*)( this + 0x34b4 ) = 0x100;
   return;
}
/* jpge::jpeg_encoder::~jpeg_encoder() */void jpge::jpeg_encoder::~jpeg_encoder(jpeg_encoder *this) {
   free(*(void**)( this + 0x48 ));
   return;
}
/* jpge::jpeg_encoder::init(jpge::output_stream*, int, int, int, jpge::params const&) */undefined8 jpge::jpeg_encoder::init(jpeg_encoder *this, output_stream *param_1, int param_2, int param_3, int param_4, params *param_5) {
   undefined8 uVar1;
   free(*(void**)( this + 0x48 ));
   *(undefined8*)( this + 0x48 ) = 0;
   *(undefined2*)( this + 0x34b4 ) = 0x100;
   if (( ( ( ( param_1 != (output_stream*)0x0 && 0 < param_2 ) && 0 < param_3 ) && ( param_4 - 3U < 2 || param_4 == 1 ) ) && ( *(int*)param_5 - 1U < 100 ) ) && ( *(uint*)( param_5 + 4 ) < 4 )) {
      uVar1 = *(undefined8*)param_5;
      *(output_stream**)this = param_1;
      *(undefined8*)( this + 8 ) = uVar1;
      *(undefined4*)( this + 0xf ) = *(undefined4*)( param_5 + 7 );
      uVar1 = jpg_open(this, param_2, param_3, param_4);
      return uVar1;
   }

   return 0;
}
/* jpge::jpeg_encoder::deinit() */void jpge::jpeg_encoder::deinit(jpeg_encoder *this) {
   free(*(void**)( this + 0x48 ));
   *(undefined8*)( this + 0x48 ) = 0;
   *(undefined2*)( this + 0x34b4 ) = 0x100;
   return;
}
/* jpge::jpeg_encoder::process_scanline(void const*) */jpeg_encoder jpge::jpeg_encoder::process_scanline(jpeg_encoder *this, void *param_1) {
   jpeg_encoder jVar1;
   char cVar2;
   if (1 < ( byte )((char)this[0x34b4] - 1U)) {
      return (jpeg_encoder)0x0;
   }

   jVar1 = this[0x34b5];
   if (jVar1 != (jpeg_encoder)0x0) {
      if (param_1 == (void*)0x0) {
         cVar2 = process_end_of_image(this);
         if (cVar2 == '\0') {
            return (jpeg_encoder)0x0;
         }

      }
 else {
         load_mcu(this, param_1);
      }

      jVar1 = this[0x34b5];
   }

   return jVar1;
}
/* jpge::compress_image_to_jpeg_file(char const*, int, int, int, unsigned char const*, jpge::params
   const&) */uint jpge::compress_image_to_jpeg_file(char *param_1, int param_2, int param_3, int param_4, uchar *param_5, params *param_6) {
   char cVar1;
   uint uVar2;
   int iVar3;
   uchar *puVar4;
   long in_FS_OFFSET;
   int local_351c;
   undefined **local_3518;
   FILE *local_3510;
   byte local_3508;
   jpeg_encoder local_34f8[8];
   undefined8 local_34f0;
   undefined8 local_34e8;
   void *local_34b0;
   undefined4 local_48;
   undefined2 local_44;
   long local_40;
   uVar2 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_3518 = &PTR__cfile_stream_001050d0;
   local_3510 = (FILE*)0x0;
   local_3508 = 0;
   local_3510 = fopen64(param_1, "wb");
   local_3508 = local_3510 != (FILE*)0x0;
   if ((bool)local_3508) {
      local_44 = 0x100;
      local_34f0 = 0x300000055;
      local_34e8 = 0;
      local_34b0 = (void*)0x0;
      local_48 = 0;
      uVar2 = jpeg_encoder::init(local_34f8, (output_stream*)&local_3518, param_2, param_3, param_4, param_6);
      if ((char)uVar2 != '\0') {
         local_351c = 0;
         do {
            iVar3 = 0;
            puVar4 = param_5;
            if (0 < param_3) {
               do {
                  if (( 1 < ( byte )((char)local_44 - 1U) ) || ( local_44._1_1_ == '\0' )) goto LAB_00104743;
                  if (puVar4 == (uchar*)0x0) {
                     uVar2 = jpeg_encoder::process_end_of_image(local_34f8);
                     if ((char)uVar2 == '\0') goto LAB_0010474e;
                  }
 else {
                     jpeg_encoder::load_mcu(local_34f8, puVar4);
                  }

                  uVar2 = (uint)local_44._1_1_;
                  if (local_44._1_1_ == 0) goto LAB_0010474e;
                  iVar3 = iVar3 + 1;
                  puVar4 = puVar4 + param_2 * param_4;
               }
 while ( param_3 != iVar3 );
               if (( byte )((char)local_44 - 1U) < 2) goto LAB_0010479f;
               LAB_00104743:uVar2 = 0;
               goto LAB_0010474e;
            }

            if (( 1 < ( byte )((char)local_44 - 1U) ) || ( local_44._1_1_ == '\0' )) goto LAB_00104743;
            LAB_0010479f:cVar1 = jpeg_encoder::process_end_of_image(local_34f8);
            if (( cVar1 == '\0' ) || ( local_44._1_1_ == '\0' )) goto LAB_00104743;
         }
 while ( ( local_34e8._1_1_ != '\0' ) && ( local_351c = local_351c == 1 ) );
         free(local_34b0);
         local_34b0 = (void*)0x0;
         local_44 = 0x100;
         if (local_3510 == (FILE*)0x0) {
            uVar2 = (uint)local_3508;
         }
 else {
            iVar3 = fclose(local_3510);
            if (iVar3 == -1) {
               local_3508 = 0;
               uVar2 = 0;
            }
 else {
               uVar2 = (uint)local_3508;
            }

            local_3510 = (FILE*)0x0;
         }

      }

      LAB_0010474e:free(local_34b0);
      local_3518 = &PTR__cfile_stream_001050d0;
      if (local_3510 != (FILE*)0x0) {
         fclose(local_3510);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* jpge::compress_image_to_jpeg_file_in_memory(void*, int&, int, int, int, unsigned char const*,
   jpge::params const&) */uint jpge::compress_image_to_jpeg_file_in_memory(void *param_1, int *param_2, int param_3, int param_4, int param_5, uchar *param_6, params *param_7) {
   char cVar1;
   uint uVar2;
   void *__ptr;
   uchar *puVar3;
   int iVar4;
   long in_FS_OFFSET;
   int local_351c;
   undefined **local_3518;
   void *local_3510;
   int local_3508;
   int local_3504;
   jpeg_encoder local_34f8[8];
   undefined8 local_34f0;
   undefined8 local_34e8;
   void *local_34b0;
   undefined4 local_48;
   undefined2 local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (void*)0x0) {
      uVar2 = 0;
   }
 else {
      iVar4 = *param_2;
      uVar2 = 0;
      if (iVar4 != 0) {
         *param_2 = 0;
         local_34f0 = 0x300000055;
         local_44 = 0x100;
         local_3518 = &PTR__memory_stream_001050f8;
         local_3504 = 0;
         local_34e8 = 0;
         local_34b0 = (void*)0x0;
         local_48 = 0;
         local_3510 = param_1;
         local_3508 = iVar4;
         uVar2 = jpeg_encoder::init(local_34f8, (output_stream*)&local_3518, param_3, param_4, param_5, param_7);
         __ptr = local_34b0;
         if ((char)uVar2 != '\0') {
            local_351c = 0;
            do {
               iVar4 = 0;
               puVar3 = param_6;
               if (0 < param_4) {
                  do {
                     if (( 1 < ( byte )((char)local_44 - 1U) ) || ( local_44._1_1_ == '\0' )) goto LAB_00104a03;
                     if (puVar3 == (uchar*)0x0) {
                        uVar2 = jpeg_encoder::process_end_of_image(local_34f8);
                        __ptr = local_34b0;
                        if ((char)uVar2 == '\0') goto LAB_00104a0d;
                     }
 else {
                        jpeg_encoder::load_mcu(local_34f8, puVar3);
                     }

                     uVar2 = (uint)local_44._1_1_;
                     __ptr = local_34b0;
                     if (local_44._1_1_ == 0) goto LAB_00104a0d;
                     iVar4 = iVar4 + 1;
                     puVar3 = puVar3 + param_3 * param_5;
                  }
 while ( param_4 != iVar4 );
                  if (( byte )((char)local_44 - 1U) < 2) goto LAB_00104a4f;
                  LAB_00104a03:uVar2 = 0;
                  __ptr = local_34b0;
                  goto LAB_00104a0d;
               }

               if (( 1 < ( byte )((char)local_44 - 1U) ) || ( local_44._1_1_ == '\0' )) goto LAB_00104a03;
               LAB_00104a4f:cVar1 = jpeg_encoder::process_end_of_image(local_34f8);
               if (cVar1 == '\0') goto LAB_00104a03;
               uVar2 = (uint)local_44._1_1_;
               if (local_44._1_1_ == 0) goto LAB_00104a03;
            }
 while ( ( local_34e8._1_1_ != '\0' ) && ( local_351c = local_351c == 1 ) );
            free(local_34b0);
            *param_2 = local_3504;
            __ptr = (void*)0x0;
         }

         LAB_00104a0d:free(__ptr);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* jpge::memory_stream::~memory_stream() */void jpge::memory_stream::~memory_stream(memory_stream *this) {
   return;
}
/* jpge::memory_stream::put_buf(void const*, int) */bool jpge::memory_stream::put_buf(memory_stream *this, void *param_1, int param_2) {
   bool bVar1;
   bVar1 = (uint)param_2 <= *(int*)( this + 0x10 ) - *(uint*)( this + 0x14 );
   if (bVar1) {
      memcpy((void*)( ( ulong ) * (uint*)( this + 0x14 ) + *(long*)( this + 8 ) ), param_1, (long)param_2);
      *(int*)( this + 0x14 ) = *(int*)( this + 0x14 ) + param_2;
   }

   return bVar1;
}
/* jpge::cfile_stream::put_buf(void const*, int) */void jpge::cfile_stream::put_buf(cfile_stream *this, void *param_1, int param_2) {
   size_t sVar1;
   if (this[0x10] == (cfile_stream)0x0) {
      this[0x10] = (cfile_stream)0x0;
      return;
   }

   sVar1 = fwrite(param_1, (long)param_2, 1, *(FILE**)( this + 8 ));
   this[0x10] = ( cfile_stream )(sVar1 == 1);
   return;
}
/* jpge::memory_stream::~memory_stream() */void jpge::memory_stream::~memory_stream(memory_stream *this) {
   operator_delete(this, 0x18);
   return;
}
/* jpge::cfile_stream::~cfile_stream() */void jpge::cfile_stream::~cfile_stream(cfile_stream *this) {
   *(undefined***)this = &PTR__cfile_stream_001050d0;
   if (*(FILE**)( this + 8 ) != (FILE*)0x0) {
      fclose(*(FILE**)( this + 8 ));
      return;
   }

   return;
}
/* jpge::cfile_stream::~cfile_stream() */void jpge::cfile_stream::~cfile_stream(cfile_stream *this) {
   *(undefined***)this = &PTR__cfile_stream_001050d0;
   if (*(FILE**)( this + 8 ) != (FILE*)0x0) {
      fclose(*(FILE**)( this + 8 ));
   }

   operator_delete(this, 0x18);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* jpge::memory_stream::~memory_stream() */void jpge::memory_stream::~memory_stream(memory_stream *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* jpge::cfile_stream::~cfile_stream() */void jpge::cfile_stream::~cfile_stream(cfile_stream *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


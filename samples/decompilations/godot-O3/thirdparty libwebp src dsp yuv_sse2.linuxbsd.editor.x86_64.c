
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8PlanarTo24b_SSE2(undefined1 (*param_1) [16],undefined1 (*param_2) [16],
                        undefined1 (*param_3) [16],undefined1 (*param_4) [16],
                        undefined1 (*param_5) [16],undefined1 (*param_6) [16])

{
  byte bVar1;
  byte bVar9;
  byte bVar17;
  byte bVar25;
  byte bVar33;
  byte bVar41;
  byte bVar49;
  byte bVar57;
  char cVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  short sVar65;
  short sVar66;
  short sVar67;
  short sVar68;
  short sVar69;
  short sVar70;
  short sVar71;
  short sVar72;
  short sVar73;
  short sVar74;
  undefined1 auVar75 [16];
  ushort uVar76;
  ushort uVar87;
  undefined4 uVar77;
  ushort uVar91;
  undefined1 auVar81 [12];
  undefined1 auVar82 [12];
  ushort uVar88;
  ushort uVar89;
  ushort uVar90;
  ushort uVar92;
  undefined1 auVar86 [16];
  ushort uVar93;
  undefined4 uVar94;
  undefined1 auVar98 [12];
  undefined4 uVar101;
  undefined1 auVar105 [12];
  undefined1 auVar106 [12];
  undefined1 auVar110 [16];
  ushort uVar112;
  ushort uVar122;
  undefined4 uVar113;
  ushort uVar123;
  ushort uVar124;
  ushort uVar125;
  ushort uVar126;
  undefined1 auVar117 [12];
  ushort uVar127;
  ushort uVar128;
  ushort uVar129;
  undefined1 auVar130 [12];
  ushort uVar139;
  undefined1 auVar131 [12];
  ushort uVar135;
  ushort uVar136;
  ushort uVar137;
  ushort uVar138;
  ushort uVar140;
  undefined1 auVar134 [16];
  ushort uVar141;
  ushort uVar142;
  undefined4 uVar143;
  undefined1 auVar146 [12];
  ushort uVar153;
  ushort uVar154;
  ushort uVar155;
  ushort uVar156;
  ushort uVar157;
  ushort uVar158;
  ushort uVar159;
  undefined1 auVar150 [16];
  ushort uVar160;
  undefined4 uVar161;
  ushort uVar174;
  ushort uVar175;
  ushort uVar176;
  ushort uVar177;
  ushort uVar178;
  undefined1 auVar164 [12];
  undefined1 auVar165 [12];
  ushort uVar179;
  ushort uVar180;
  undefined1 auVar171 [16];
  undefined1 auVar181 [12];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar186 [12];
  undefined1 auVar188 [16];
  undefined1 auVar190 [16];
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  undefined6 uVar78;
  undefined8 uVar79;
  undefined1 auVar80 [12];
  undefined1 auVar83 [14];
  undefined1 auVar84 [14];
  undefined1 auVar85 [14];
  undefined6 uVar95;
  undefined8 uVar96;
  undefined1 auVar97 [12];
  undefined1 auVar99 [14];
  undefined1 auVar100 [14];
  undefined6 uVar102;
  undefined8 uVar103;
  undefined1 auVar104 [12];
  undefined1 auVar107 [14];
  undefined1 auVar108 [14];
  undefined1 auVar109 [14];
  undefined1 auVar111 [16];
  undefined6 uVar114;
  undefined8 uVar115;
  undefined1 auVar116 [12];
  undefined1 auVar118 [14];
  undefined1 auVar119 [14];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar132 [14];
  undefined1 auVar133 [14];
  undefined6 uVar144;
  undefined8 uVar145;
  undefined1 auVar147 [12];
  undefined1 auVar148 [14];
  undefined1 auVar149 [14];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined6 uVar162;
  undefined8 uVar163;
  undefined1 auVar166 [12];
  undefined1 auVar167 [14];
  undefined1 auVar168 [14];
  undefined1 auVar169 [14];
  undefined1 auVar170 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar182 [14];
  undefined1 auVar185 [16];
  undefined1 auVar187 [14];
  undefined1 auVar189 [16];
  
  auVar75 = __LC9;
  auVar110 = *param_1 & __LC9;
  auVar150 = *param_1;
  auVar86 = *param_2 & __LC9;
  auVar134 = *param_3 & __LC9;
  auVar184 = *param_4;
  auVar188 = *param_6;
  sVar59 = auVar110._0_2_;
  sVar60 = auVar110._2_2_;
  bVar1 = (0 < sVar60) * (sVar60 < 0x100) * auVar110[2] - (0xff < sVar60);
  sVar60 = auVar110._4_2_;
  sVar61 = auVar110._6_2_;
  cVar2 = (0 < sVar61) * (sVar61 < 0x100) * auVar110[6] - (0xff < sVar61);
  uVar101 = CONCAT13(cVar2,CONCAT12((0 < sVar60) * (sVar60 < 0x100) * auVar110[4] - (0xff < sVar60),
                                    CONCAT11(bVar1,(0 < sVar59) * (sVar59 < 0x100) * auVar110[0] -
                                                   (0xff < sVar59))));
  sVar59 = auVar110._8_2_;
  sVar60 = auVar110._10_2_;
  cVar3 = (0 < sVar60) * (sVar60 < 0x100) * auVar110[10] - (0xff < sVar60);
  uVar102 = CONCAT15(cVar3,CONCAT14((0 < sVar59) * (sVar59 < 0x100) * auVar110[8] - (0xff < sVar59),
                                    uVar101));
  sVar59 = auVar110._12_2_;
  sVar60 = auVar110._14_2_;
  cVar4 = (0 < sVar60) * (sVar60 < 0x100) * auVar110[0xe] - (0xff < sVar60);
  uVar103 = CONCAT17(cVar4,CONCAT16((0 < sVar59) * (sVar59 < 0x100) * auVar110[0xc] -
                                    (0xff < sVar59),uVar102));
  sVar59 = auVar86._0_2_;
  sVar60 = auVar86._2_2_;
  cVar5 = (0 < sVar60) * (sVar60 < 0x100) * auVar86[2] - (0xff < sVar60);
  auVar104._0_10_ =
       CONCAT19(cVar5,CONCAT18((0 < sVar59) * (sVar59 < 0x100) * auVar86[0] - (0xff < sVar59),
                               uVar103));
  sVar59 = auVar86._4_2_;
  auVar104[10] = (0 < sVar59) * (sVar59 < 0x100) * auVar86[4] - (0xff < sVar59);
  sVar59 = auVar86._6_2_;
  cVar6 = (0 < sVar59) * (sVar59 < 0x100) * auVar86[6] - (0xff < sVar59);
  auVar104[0xb] = cVar6;
  sVar59 = auVar86._8_2_;
  auVar107[0xc] = (0 < sVar59) * (sVar59 < 0x100) * auVar86[8] - (0xff < sVar59);
  auVar107._0_12_ = auVar104;
  sVar59 = auVar86._10_2_;
  cVar7 = (0 < sVar59) * (sVar59 < 0x100) * auVar86[10] - (0xff < sVar59);
  auVar107[0xd] = cVar7;
  sVar59 = auVar86._12_2_;
  auVar111[0xe] = (0 < sVar59) * (sVar59 < 0x100) * auVar86[0xc] - (0xff < sVar59);
  auVar111._0_14_ = auVar107;
  sVar59 = auVar86._14_2_;
  cVar8 = (0 < sVar59) * (sVar59 < 0x100) * auVar86[0xe] - (0xff < sVar59);
  auVar111[0xf] = cVar8;
  auVar110 = *param_5 & __LC9;
  uVar160 = auVar150._0_2_ >> 8;
  uVar174 = auVar150._2_2_ >> 8;
  uVar175 = auVar150._4_2_ >> 8;
  uVar176 = auVar150._6_2_ >> 8;
  uVar177 = auVar150._8_2_ >> 8;
  uVar178 = auVar150._10_2_ >> 8;
  uVar179 = auVar150._12_2_ >> 8;
  uVar180 = auVar150._14_2_ >> 8;
  uVar112 = auVar184._0_2_ >> 8;
  uVar122 = auVar184._2_2_ >> 8;
  uVar123 = auVar184._4_2_ >> 8;
  uVar124 = auVar184._6_2_ >> 8;
  uVar125 = auVar184._8_2_ >> 8;
  uVar126 = auVar184._10_2_ >> 8;
  uVar127 = auVar184._12_2_ >> 8;
  uVar128 = auVar184._14_2_ >> 8;
  auVar86 = *param_4 & __LC9;
  uVar142 = auVar188._0_2_ >> 8;
  uVar153 = auVar188._2_2_ >> 8;
  uVar154 = auVar188._4_2_ >> 8;
  uVar155 = auVar188._6_2_ >> 8;
  uVar156 = auVar188._8_2_ >> 8;
  uVar157 = auVar188._10_2_ >> 8;
  uVar158 = auVar188._12_2_ >> 8;
  uVar159 = auVar188._14_2_ >> 8;
  sVar59 = auVar134._0_2_;
  sVar60 = auVar134._2_2_;
  bVar9 = (0 < sVar60) * (sVar60 < 0x100) * auVar134[2] - (0xff < sVar60);
  sVar60 = auVar134._4_2_;
  sVar61 = auVar134._6_2_;
  cVar10 = (0 < sVar61) * (sVar61 < 0x100) * auVar134[6] - (0xff < sVar61);
  uVar77 = CONCAT13(cVar10,CONCAT12((0 < sVar60) * (sVar60 < 0x100) * auVar134[4] - (0xff < sVar60),
                                    CONCAT11(bVar9,(0 < sVar59) * (sVar59 < 0x100) * auVar134[0] -
                                                   (0xff < sVar59))));
  sVar59 = auVar134._8_2_;
  sVar60 = auVar134._10_2_;
  cVar11 = (0 < sVar60) * (sVar60 < 0x100) * auVar134[10] - (0xff < sVar60);
  uVar78 = CONCAT15(cVar11,CONCAT14((0 < sVar59) * (sVar59 < 0x100) * auVar134[8] - (0xff < sVar59),
                                    uVar77));
  sVar59 = auVar134._12_2_;
  sVar60 = auVar134._14_2_;
  cVar12 = (0 < sVar60) * (sVar60 < 0x100) * auVar134[0xe] - (0xff < sVar60);
  uVar79 = CONCAT17(cVar12,CONCAT16((0 < sVar59) * (sVar59 < 0x100) * auVar134[0xc] -
                                    (0xff < sVar59),uVar78));
  sVar59 = auVar86._0_2_;
  sVar60 = auVar86._2_2_;
  cVar13 = (0 < sVar60) * (sVar60 < 0x100) * auVar86[2] - (0xff < sVar60);
  auVar130._0_10_ =
       CONCAT19(cVar13,CONCAT18((0 < sVar59) * (sVar59 < 0x100) * auVar86[0] - (0xff < sVar59),
                                uVar79));
  sVar59 = auVar86._4_2_;
  auVar130[10] = (0 < sVar59) * (sVar59 < 0x100) * auVar86[4] - (0xff < sVar59);
  sVar59 = auVar86._6_2_;
  cVar14 = (0 < sVar59) * (sVar59 < 0x100) * auVar86[6] - (0xff < sVar59);
  auVar130[0xb] = cVar14;
  sVar59 = auVar86._8_2_;
  auVar132[0xc] = (0 < sVar59) * (sVar59 < 0x100) * auVar86[8] - (0xff < sVar59);
  auVar132._0_12_ = auVar130;
  sVar59 = auVar86._10_2_;
  cVar15 = (0 < sVar59) * (sVar59 < 0x100) * auVar86[10] - (0xff < sVar59);
  auVar132[0xd] = cVar15;
  sVar59 = auVar86._12_2_;
  auVar183[0xe] = (0 < sVar59) * (sVar59 < 0x100) * auVar86[0xc] - (0xff < sVar59);
  auVar183._0_14_ = auVar132;
  sVar59 = auVar86._14_2_;
  cVar16 = (0 < sVar59) * (sVar59 < 0x100) * auVar86[0xe] - (0xff < sVar59);
  auVar183[0xf] = cVar16;
  uVar129 = (ushort)bVar9;
  uVar135 = (ushort)((uint)uVar77 >> 0x18);
  uVar136 = (ushort)((uint6)uVar78 >> 0x28);
  uVar137 = (ushort)((ulong)uVar79 >> 0x38);
  uVar138 = (ushort)((unkuint10)auVar130._0_10_ >> 0x48);
  uVar139 = auVar130._10_2_ >> 8;
  uVar140 = auVar132._12_2_ >> 8;
  uVar141 = auVar183._14_2_ >> 8;
  auVar86 = *param_6 & __LC9;
  auVar183 = auVar183 & __LC9;
  sVar59 = auVar110._0_2_;
  sVar60 = auVar110._2_2_;
  bVar17 = (0 < sVar60) * (sVar60 < 0x100) * auVar110[2] - (0xff < sVar60);
  sVar60 = auVar110._4_2_;
  sVar61 = auVar110._6_2_;
  cVar18 = (0 < sVar61) * (sVar61 < 0x100) * auVar110[6] - (0xff < sVar61);
  uVar94 = CONCAT13(cVar18,CONCAT12((0 < sVar60) * (sVar60 < 0x100) * auVar110[4] - (0xff < sVar60),
                                    CONCAT11(bVar17,(0 < sVar59) * (sVar59 < 0x100) * auVar110[0] -
                                                    (0xff < sVar59))));
  sVar59 = auVar110._8_2_;
  sVar60 = auVar110._10_2_;
  cVar19 = (0 < sVar60) * (sVar60 < 0x100) * auVar110[10] - (0xff < sVar60);
  uVar95 = CONCAT15(cVar19,CONCAT14((0 < sVar59) * (sVar59 < 0x100) * auVar110[8] - (0xff < sVar59),
                                    uVar94));
  sVar59 = auVar110._12_2_;
  sVar60 = auVar110._14_2_;
  cVar20 = (0 < sVar60) * (sVar60 < 0x100) * auVar110[0xe] - (0xff < sVar60);
  uVar96 = CONCAT17(cVar20,CONCAT16((0 < sVar59) * (sVar59 < 0x100) * auVar110[0xc] -
                                    (0xff < sVar59),uVar95));
  sVar59 = auVar86._0_2_;
  sVar60 = auVar86._2_2_;
  cVar21 = (0 < sVar60) * (sVar60 < 0x100) * auVar86[2] - (0xff < sVar60);
  auVar97._0_10_ =
       CONCAT19(cVar21,CONCAT18((0 < sVar59) * (sVar59 < 0x100) * auVar86[0] - (0xff < sVar59),
                                uVar96));
  sVar59 = auVar86._4_2_;
  auVar97[10] = (0 < sVar59) * (sVar59 < 0x100) * auVar86[4] - (0xff < sVar59);
  sVar59 = auVar86._6_2_;
  cVar22 = (0 < sVar59) * (sVar59 < 0x100) * auVar86[6] - (0xff < sVar59);
  auVar97[0xb] = cVar22;
  sVar59 = auVar86._8_2_;
  auVar99[0xc] = (0 < sVar59) * (sVar59 < 0x100) * auVar86[8] - (0xff < sVar59);
  auVar99._0_12_ = auVar97;
  sVar59 = auVar86._10_2_;
  cVar23 = (0 < sVar59) * (sVar59 < 0x100) * auVar86[10] - (0xff < sVar59);
  auVar99[0xd] = cVar23;
  sVar59 = auVar86._12_2_;
  auVar134[0xe] = (0 < sVar59) * (sVar59 < 0x100) * auVar86[0xc] - (0xff < sVar59);
  auVar134._0_14_ = auVar99;
  sVar59 = auVar86._14_2_;
  cVar24 = (0 < sVar59) * (sVar59 < 0x100) * auVar86[0xe] - (0xff < sVar59);
  auVar134[0xf] = cVar24;
  auVar86 = *param_2;
  uVar76 = auVar86._0_2_ >> 8;
  uVar87 = auVar86._2_2_ >> 8;
  uVar88 = auVar86._4_2_ >> 8;
  uVar89 = auVar86._6_2_ >> 8;
  uVar90 = auVar86._8_2_ >> 8;
  uVar91 = auVar86._10_2_ >> 8;
  uVar92 = auVar86._12_2_ >> 8;
  uVar93 = auVar86._14_2_ >> 8;
  bVar25 = (uVar174 != 0) * (uVar174 < 0x100) * auVar150[3] - (0xff < uVar174);
  cVar26 = (uVar176 != 0) * (uVar176 < 0x100) * auVar150[7] - (0xff < uVar176);
  uVar143 = CONCAT13(cVar26,CONCAT12((uVar175 != 0) * (uVar175 < 0x100) * auVar150[5] -
                                     (0xff < uVar175),
                                     CONCAT11(bVar25,(uVar160 != 0) * (uVar160 < 0x100) *
                                                     auVar150[1] - (0xff < uVar160))));
  cVar27 = (uVar178 != 0) * (uVar178 < 0x100) * auVar150[0xb] - (0xff < uVar178);
  uVar144 = CONCAT15(cVar27,CONCAT14((uVar177 != 0) * (uVar177 < 0x100) * auVar150[9] -
                                     (0xff < uVar177),uVar143));
  cVar28 = (uVar180 != 0) * (uVar180 < 0x100) * auVar150[0xf] - (0xff < uVar180);
  uVar145 = CONCAT17(cVar28,CONCAT16((uVar179 != 0) * (uVar179 < 0x100) * auVar150[0xd] -
                                     (0xff < uVar179),uVar144));
  cVar29 = (uVar87 != 0) * (uVar87 < 0x100) * auVar86[3] - (0xff < uVar87);
  auVar164._0_10_ =
       CONCAT19(cVar29,CONCAT18((uVar76 != 0) * (uVar76 < 0x100) * auVar86[1] - (0xff < uVar76),
                                uVar145));
  auVar164[10] = (uVar88 != 0) * (uVar88 < 0x100) * auVar86[5] - (0xff < uVar88);
  cVar30 = (uVar89 != 0) * (uVar89 < 0x100) * auVar86[7] - (0xff < uVar89);
  auVar164[0xb] = cVar30;
  auVar167[0xc] = (uVar90 != 0) * (uVar90 < 0x100) * auVar86[9] - (0xff < uVar90);
  auVar167._0_12_ = auVar164;
  cVar31 = (uVar91 != 0) * (uVar91 < 0x100) * auVar86[0xb] - (0xff < uVar91);
  auVar167[0xd] = cVar31;
  auVar170[0xe] = (uVar92 != 0) * (uVar92 < 0x100) * auVar86[0xd] - (0xff < uVar92);
  auVar170._0_14_ = auVar167;
  cVar32 = (uVar93 != 0) * (uVar93 < 0x100) * auVar86[0xf] - (0xff < uVar93);
  auVar170[0xf] = cVar32;
  auVar150 = *param_3;
  uVar76 = auVar150._0_2_ >> 8;
  uVar87 = auVar150._2_2_ >> 8;
  uVar88 = auVar150._4_2_ >> 8;
  uVar89 = auVar150._6_2_ >> 8;
  uVar90 = auVar150._8_2_ >> 8;
  uVar91 = auVar150._10_2_ >> 8;
  uVar92 = auVar150._12_2_ >> 8;
  uVar93 = auVar150._14_2_ >> 8;
  bVar33 = (uVar87 != 0) * (uVar87 < 0x100) * auVar150[3] - (0xff < uVar87);
  cVar34 = (uVar89 != 0) * (uVar89 < 0x100) * auVar150[7] - (0xff < uVar89);
  uVar77 = CONCAT13(cVar34,CONCAT12((uVar88 != 0) * (uVar88 < 0x100) * auVar150[5] - (0xff < uVar88)
                                    ,CONCAT11(bVar33,(uVar76 != 0) * (uVar76 < 0x100) * auVar150[1]
                                                     - (0xff < uVar76))));
  cVar35 = (uVar91 != 0) * (uVar91 < 0x100) * auVar150[0xb] - (0xff < uVar91);
  uVar78 = CONCAT15(cVar35,CONCAT14((uVar90 != 0) * (uVar90 < 0x100) * auVar150[9] - (0xff < uVar90)
                                    ,uVar77));
  cVar36 = (uVar93 != 0) * (uVar93 < 0x100) * auVar150[0xf] - (0xff < uVar93);
  uVar79 = CONCAT17(cVar36,CONCAT16((uVar92 != 0) * (uVar92 < 0x100) * auVar150[0xd] -
                                    (0xff < uVar92),uVar78));
  cVar37 = (uVar122 != 0) * (uVar122 < 0x100) * auVar184[3] - (0xff < uVar122);
  auVar80._0_10_ =
       CONCAT19(cVar37,CONCAT18((uVar112 != 0) * (uVar112 < 0x100) * auVar184[1] - (0xff < uVar112),
                                uVar79));
  auVar80[10] = (uVar123 != 0) * (uVar123 < 0x100) * auVar184[5] - (0xff < uVar123);
  cVar38 = (uVar124 != 0) * (uVar124 < 0x100) * auVar184[7] - (0xff < uVar124);
  auVar80[0xb] = cVar38;
  auVar83[0xc] = (uVar125 != 0) * (uVar125 < 0x100) * auVar184[9] - (0xff < uVar125);
  auVar83._0_12_ = auVar80;
  cVar39 = (uVar126 != 0) * (uVar126 < 0x100) * auVar184[0xb] - (0xff < uVar126);
  auVar83[0xd] = cVar39;
  auVar86[0xe] = (uVar127 != 0) * (uVar127 < 0x100) * auVar184[0xd] - (0xff < uVar127);
  auVar86._0_14_ = auVar83;
  cVar40 = (uVar128 != 0) * (uVar128 < 0x100) * auVar184[0xf] - (0xff < uVar128);
  auVar86[0xf] = cVar40;
  auVar150 = *param_5;
  uVar76 = auVar150._0_2_ >> 8;
  uVar87 = auVar150._2_2_ >> 8;
  uVar88 = auVar150._4_2_ >> 8;
  uVar89 = auVar150._6_2_ >> 8;
  uVar90 = auVar150._8_2_ >> 8;
  uVar91 = auVar150._10_2_ >> 8;
  uVar92 = auVar150._12_2_ >> 8;
  uVar93 = auVar150._14_2_ >> 8;
  bVar41 = (uVar87 != 0) * (uVar87 < 0x100) * auVar150[3] - (0xff < uVar87);
  cVar42 = (uVar89 != 0) * (uVar89 < 0x100) * auVar150[7] - (0xff < uVar89);
  uVar113 = CONCAT13(cVar42,CONCAT12((uVar88 != 0) * (uVar88 < 0x100) * auVar150[5] -
                                     (0xff < uVar88),
                                     CONCAT11(bVar41,(uVar76 != 0) * (uVar76 < 0x100) * auVar150[1]
                                                     - (0xff < uVar76))));
  cVar43 = (uVar91 != 0) * (uVar91 < 0x100) * auVar150[0xb] - (0xff < uVar91);
  uVar114 = CONCAT15(cVar43,CONCAT14((uVar90 != 0) * (uVar90 < 0x100) * auVar150[9] -
                                     (0xff < uVar90),uVar113));
  cVar44 = (uVar93 != 0) * (uVar93 < 0x100) * auVar150[0xf] - (0xff < uVar93);
  uVar115 = CONCAT17(cVar44,CONCAT16((uVar92 != 0) * (uVar92 < 0x100) * auVar150[0xd] -
                                     (0xff < uVar92),uVar114));
  cVar45 = (uVar153 != 0) * (uVar153 < 0x100) * auVar188[3] - (0xff < uVar153);
  auVar116._0_10_ =
       CONCAT19(cVar45,CONCAT18((uVar142 != 0) * (uVar142 < 0x100) * auVar188[1] - (0xff < uVar142),
                                uVar115));
  auVar116[10] = (uVar154 != 0) * (uVar154 < 0x100) * auVar188[5] - (0xff < uVar154);
  cVar46 = (uVar155 != 0) * (uVar155 < 0x100) * auVar188[7] - (0xff < uVar155);
  auVar116[0xb] = cVar46;
  auVar118[0xc] = (uVar156 != 0) * (uVar156 < 0x100) * auVar188[9] - (0xff < uVar156);
  auVar118._0_12_ = auVar116;
  cVar47 = (uVar157 != 0) * (uVar157 < 0x100) * auVar188[0xb] - (0xff < uVar157);
  auVar118[0xd] = cVar47;
  auVar120[0xe] = (uVar158 != 0) * (uVar158 < 0x100) * auVar188[0xd] - (0xff < uVar158);
  auVar120._0_14_ = auVar118;
  cVar48 = (uVar159 != 0) * (uVar159 < 0x100) * auVar188[0xf] - (0xff < uVar159);
  auVar120[0xf] = cVar48;
  auVar150 = auVar111 & __LC9;
  uVar142 = (ushort)bVar1;
  uVar153 = (ushort)((uint)uVar101 >> 0x18);
  uVar154 = (ushort)((uint6)uVar102 >> 0x28);
  uVar155 = (ushort)((ulong)uVar103 >> 0x38);
  uVar156 = (ushort)((unkuint10)auVar104._0_10_ >> 0x48);
  uVar157 = auVar104._10_2_ >> 8;
  uVar158 = auVar107._12_2_ >> 8;
  uVar159 = auVar111._14_2_ >> 8;
  sVar59 = auVar150._0_2_;
  sVar60 = auVar150._2_2_;
  sVar61 = auVar150._4_2_;
  sVar62 = auVar150._6_2_;
  sVar63 = auVar150._8_2_;
  sVar64 = auVar150._10_2_;
  sVar65 = auVar150._12_2_;
  sVar66 = auVar150._14_2_;
  sVar67 = auVar183._0_2_;
  sVar68 = auVar183._2_2_;
  sVar69 = auVar183._4_2_;
  sVar70 = auVar183._6_2_;
  sVar71 = auVar183._8_2_;
  sVar72 = auVar183._10_2_;
  sVar73 = auVar183._12_2_;
  sVar74 = auVar183._14_2_;
  (*param_1)[0] = (0 < sVar59) * (sVar59 < 0x100) * auVar150[0] - (0xff < sVar59);
  (*param_1)[1] = (0 < sVar60) * (sVar60 < 0x100) * auVar150[2] - (0xff < sVar60);
  (*param_1)[2] = (0 < sVar61) * (sVar61 < 0x100) * auVar150[4] - (0xff < sVar61);
  (*param_1)[3] = (0 < sVar62) * (sVar62 < 0x100) * auVar150[6] - (0xff < sVar62);
  (*param_1)[4] = (0 < sVar63) * (sVar63 < 0x100) * auVar150[8] - (0xff < sVar63);
  (*param_1)[5] = (0 < sVar64) * (sVar64 < 0x100) * auVar150[10] - (0xff < sVar64);
  (*param_1)[6] = (0 < sVar65) * (sVar65 < 0x100) * auVar150[0xc] - (0xff < sVar65);
  (*param_1)[7] = (0 < sVar66) * (sVar66 < 0x100) * auVar150[0xe] - (0xff < sVar66);
  (*param_1)[8] = (0 < sVar67) * (sVar67 < 0x100) * auVar183[0] - (0xff < sVar67);
  (*param_1)[9] = (0 < sVar68) * (sVar68 < 0x100) * auVar183[2] - (0xff < sVar68);
  (*param_1)[10] = (0 < sVar69) * (sVar69 < 0x100) * auVar183[4] - (0xff < sVar69);
  (*param_1)[0xb] = (0 < sVar70) * (sVar70 < 0x100) * auVar183[6] - (0xff < sVar70);
  (*param_1)[0xc] = (0 < sVar71) * (sVar71 < 0x100) * auVar183[8] - (0xff < sVar71);
  (*param_1)[0xd] = (0 < sVar72) * (sVar72 < 0x100) * auVar183[10] - (0xff < sVar72);
  (*param_1)[0xe] = (0 < sVar73) * (sVar73 < 0x100) * auVar183[0xc] - (0xff < sVar73);
  (*param_1)[0xf] = (0 < sVar74) * (sVar74 < 0x100) * auVar183[0xe] - (0xff < sVar74);
  auVar184 = auVar170 & auVar75;
  auVar150 = auVar134 & auVar75;
  uVar112 = (ushort)bVar17;
  uVar122 = (ushort)((uint)uVar94 >> 0x18);
  uVar123 = (ushort)((uint6)uVar95 >> 0x28);
  uVar124 = (ushort)((ulong)uVar96 >> 0x38);
  uVar125 = (ushort)((unkuint10)auVar97._0_10_ >> 0x48);
  uVar126 = auVar97._10_2_ >> 8;
  uVar127 = auVar99._12_2_ >> 8;
  uVar128 = auVar134._14_2_ >> 8;
  sVar59 = auVar150._0_2_;
  sVar60 = auVar150._2_2_;
  sVar61 = auVar150._4_2_;
  sVar62 = auVar150._6_2_;
  sVar63 = auVar150._8_2_;
  sVar64 = auVar150._10_2_;
  sVar65 = auVar150._12_2_;
  sVar66 = auVar150._14_2_;
  sVar67 = auVar184._0_2_;
  sVar68 = auVar184._2_2_;
  sVar69 = auVar184._4_2_;
  sVar70 = auVar184._6_2_;
  sVar71 = auVar184._8_2_;
  sVar72 = auVar184._10_2_;
  sVar73 = auVar184._12_2_;
  sVar74 = auVar184._14_2_;
  (*param_2)[0] = (0 < sVar59) * (sVar59 < 0x100) * auVar150[0] - (0xff < sVar59);
  (*param_2)[1] = (0 < sVar60) * (sVar60 < 0x100) * auVar150[2] - (0xff < sVar60);
  (*param_2)[2] = (0 < sVar61) * (sVar61 < 0x100) * auVar150[4] - (0xff < sVar61);
  (*param_2)[3] = (0 < sVar62) * (sVar62 < 0x100) * auVar150[6] - (0xff < sVar62);
  (*param_2)[4] = (0 < sVar63) * (sVar63 < 0x100) * auVar150[8] - (0xff < sVar63);
  (*param_2)[5] = (0 < sVar64) * (sVar64 < 0x100) * auVar150[10] - (0xff < sVar64);
  (*param_2)[6] = (0 < sVar65) * (sVar65 < 0x100) * auVar150[0xc] - (0xff < sVar65);
  (*param_2)[7] = (0 < sVar66) * (sVar66 < 0x100) * auVar150[0xe] - (0xff < sVar66);
  (*param_2)[8] = (0 < sVar67) * (sVar67 < 0x100) * auVar184[0] - (0xff < sVar67);
  (*param_2)[9] = (0 < sVar68) * (sVar68 < 0x100) * auVar184[2] - (0xff < sVar68);
  (*param_2)[10] = (0 < sVar69) * (sVar69 < 0x100) * auVar184[4] - (0xff < sVar69);
  (*param_2)[0xb] = (0 < sVar70) * (sVar70 < 0x100) * auVar184[6] - (0xff < sVar70);
  (*param_2)[0xc] = (0 < sVar71) * (sVar71 < 0x100) * auVar184[8] - (0xff < sVar71);
  (*param_2)[0xd] = (0 < sVar72) * (sVar72 < 0x100) * auVar184[10] - (0xff < sVar72);
  (*param_2)[0xe] = (0 < sVar73) * (sVar73 < 0x100) * auVar184[0xc] - (0xff < sVar73);
  (*param_2)[0xf] = (0 < sVar74) * (sVar74 < 0x100) * auVar184[0xe] - (0xff < sVar74);
  auVar184 = auVar120 & auVar75;
  auVar150 = auVar86 & auVar75;
  uVar76 = (ushort)bVar33;
  uVar87 = (ushort)((uint)uVar77 >> 0x18);
  uVar88 = (ushort)((uint6)uVar78 >> 0x28);
  uVar89 = (ushort)((ulong)uVar79 >> 0x38);
  uVar90 = (ushort)((unkuint10)auVar80._0_10_ >> 0x48);
  uVar91 = auVar80._10_2_ >> 8;
  uVar92 = auVar83._12_2_ >> 8;
  uVar93 = auVar86._14_2_ >> 8;
  sVar59 = auVar150._0_2_;
  sVar60 = auVar150._2_2_;
  sVar61 = auVar150._4_2_;
  sVar62 = auVar150._6_2_;
  sVar63 = auVar150._8_2_;
  sVar64 = auVar150._10_2_;
  sVar65 = auVar150._12_2_;
  sVar66 = auVar150._14_2_;
  sVar67 = auVar184._0_2_;
  sVar68 = auVar184._2_2_;
  sVar69 = auVar184._4_2_;
  sVar70 = auVar184._6_2_;
  sVar71 = auVar184._8_2_;
  sVar72 = auVar184._10_2_;
  sVar73 = auVar184._12_2_;
  sVar74 = auVar184._14_2_;
  (*param_3)[0] = (0 < sVar59) * (sVar59 < 0x100) * auVar150[0] - (0xff < sVar59);
  (*param_3)[1] = (0 < sVar60) * (sVar60 < 0x100) * auVar150[2] - (0xff < sVar60);
  (*param_3)[2] = (0 < sVar61) * (sVar61 < 0x100) * auVar150[4] - (0xff < sVar61);
  (*param_3)[3] = (0 < sVar62) * (sVar62 < 0x100) * auVar150[6] - (0xff < sVar62);
  (*param_3)[4] = (0 < sVar63) * (sVar63 < 0x100) * auVar150[8] - (0xff < sVar63);
  (*param_3)[5] = (0 < sVar64) * (sVar64 < 0x100) * auVar150[10] - (0xff < sVar64);
  (*param_3)[6] = (0 < sVar65) * (sVar65 < 0x100) * auVar150[0xc] - (0xff < sVar65);
  (*param_3)[7] = (0 < sVar66) * (sVar66 < 0x100) * auVar150[0xe] - (0xff < sVar66);
  (*param_3)[8] = (0 < sVar67) * (sVar67 < 0x100) * auVar184[0] - (0xff < sVar67);
  (*param_3)[9] = (0 < sVar68) * (sVar68 < 0x100) * auVar184[2] - (0xff < sVar68);
  (*param_3)[10] = (0 < sVar69) * (sVar69 < 0x100) * auVar184[4] - (0xff < sVar69);
  (*param_3)[0xb] = (0 < sVar70) * (sVar70 < 0x100) * auVar184[6] - (0xff < sVar70);
  (*param_3)[0xc] = (0 < sVar71) * (sVar71 < 0x100) * auVar184[8] - (0xff < sVar71);
  (*param_3)[0xd] = (0 < sVar72) * (sVar72 < 0x100) * auVar184[10] - (0xff < sVar72);
  (*param_3)[0xe] = (0 < sVar73) * (sVar73 < 0x100) * auVar184[0xc] - (0xff < sVar73);
  (*param_3)[0xf] = (0 < sVar74) * (sVar74 < 0x100) * auVar184[0xe] - (0xff < sVar74);
  (*param_4)[0] = (uVar142 != 0) * (uVar142 < 0x100) * bVar1 - (0xff < uVar142);
  (*param_4)[1] = (uVar153 != 0) * (uVar153 < 0x100) * cVar2 - (0xff < uVar153);
  (*param_4)[2] = (uVar154 != 0) * (uVar154 < 0x100) * cVar3 - (0xff < uVar154);
  (*param_4)[3] = (uVar155 != 0) * (uVar155 < 0x100) * cVar4 - (0xff < uVar155);
  (*param_4)[4] = (uVar156 != 0) * (uVar156 < 0x100) * cVar5 - (0xff < uVar156);
  (*param_4)[5] = (uVar157 != 0) * (uVar157 < 0x100) * cVar6 - (0xff < uVar157);
  (*param_4)[6] = (uVar158 != 0) * (uVar158 < 0x100) * cVar7 - (0xff < uVar158);
  (*param_4)[7] = (uVar159 != 0) * (uVar159 < 0x100) * cVar8 - (0xff < uVar159);
  (*param_4)[8] = (uVar129 != 0) * (uVar129 < 0x100) * bVar9 - (0xff < uVar129);
  (*param_4)[9] = (uVar135 != 0) * (uVar135 < 0x100) * cVar10 - (0xff < uVar135);
  (*param_4)[10] = (uVar136 != 0) * (uVar136 < 0x100) * cVar11 - (0xff < uVar136);
  (*param_4)[0xb] = (uVar137 != 0) * (uVar137 < 0x100) * cVar12 - (0xff < uVar137);
  (*param_4)[0xc] = (uVar138 != 0) * (uVar138 < 0x100) * cVar13 - (0xff < uVar138);
  (*param_4)[0xd] = (uVar139 != 0) * (uVar139 < 0x100) * cVar14 - (0xff < uVar139);
  (*param_4)[0xe] = (uVar140 != 0) * (uVar140 < 0x100) * cVar15 - (0xff < uVar140);
  (*param_4)[0xf] = (uVar141 != 0) * (uVar141 < 0x100) * cVar16 - (0xff < uVar141);
  uVar142 = (ushort)bVar25;
  uVar153 = (ushort)((uint)uVar143 >> 0x18);
  uVar154 = (ushort)((uint6)uVar144 >> 0x28);
  uVar155 = (ushort)((ulong)uVar145 >> 0x38);
  uVar156 = (ushort)((unkuint10)auVar164._0_10_ >> 0x48);
  uVar157 = auVar164._10_2_ >> 8;
  uVar158 = auVar167._12_2_ >> 8;
  uVar159 = auVar170._14_2_ >> 8;
  (*param_5)[0] = (uVar112 != 0) * (uVar112 < 0x100) * bVar17 - (0xff < uVar112);
  (*param_5)[1] = (uVar122 != 0) * (uVar122 < 0x100) * cVar18 - (0xff < uVar122);
  (*param_5)[2] = (uVar123 != 0) * (uVar123 < 0x100) * cVar19 - (0xff < uVar123);
  (*param_5)[3] = (uVar124 != 0) * (uVar124 < 0x100) * cVar20 - (0xff < uVar124);
  (*param_5)[4] = (uVar125 != 0) * (uVar125 < 0x100) * cVar21 - (0xff < uVar125);
  (*param_5)[5] = (uVar126 != 0) * (uVar126 < 0x100) * cVar22 - (0xff < uVar126);
  (*param_5)[6] = (uVar127 != 0) * (uVar127 < 0x100) * cVar23 - (0xff < uVar127);
  (*param_5)[7] = (uVar128 != 0) * (uVar128 < 0x100) * cVar24 - (0xff < uVar128);
  (*param_5)[8] = (uVar142 != 0) * (uVar142 < 0x100) * bVar25 - (0xff < uVar142);
  (*param_5)[9] = (uVar153 != 0) * (uVar153 < 0x100) * cVar26 - (0xff < uVar153);
  (*param_5)[10] = (uVar154 != 0) * (uVar154 < 0x100) * cVar27 - (0xff < uVar154);
  (*param_5)[0xb] = (uVar155 != 0) * (uVar155 < 0x100) * cVar28 - (0xff < uVar155);
  (*param_5)[0xc] = (uVar156 != 0) * (uVar156 < 0x100) * cVar29 - (0xff < uVar156);
  (*param_5)[0xd] = (uVar157 != 0) * (uVar157 < 0x100) * cVar30 - (0xff < uVar157);
  (*param_5)[0xe] = (uVar158 != 0) * (uVar158 < 0x100) * cVar31 - (0xff < uVar158);
  (*param_5)[0xf] = (uVar159 != 0) * (uVar159 < 0x100) * cVar32 - (0xff < uVar159);
  uVar112 = (ushort)bVar41;
  uVar122 = (ushort)((uint)uVar113 >> 0x18);
  uVar123 = (ushort)((uint6)uVar114 >> 0x28);
  uVar124 = (ushort)((ulong)uVar115 >> 0x38);
  uVar125 = (ushort)((unkuint10)auVar116._0_10_ >> 0x48);
  uVar126 = auVar116._10_2_ >> 8;
  uVar127 = auVar118._12_2_ >> 8;
  uVar128 = auVar120._14_2_ >> 8;
  bVar1 = (uVar87 != 0) * (uVar87 < 0x100) * cVar34 - (0xff < uVar87);
  cVar3 = (uVar89 != 0) * (uVar89 < 0x100) * cVar36 - (0xff < uVar89);
  uVar77 = CONCAT13(cVar3,CONCAT12((uVar88 != 0) * (uVar88 < 0x100) * cVar35 - (0xff < uVar88),
                                   CONCAT11(bVar1,(uVar76 != 0) * (uVar76 < 0x100) * bVar33 -
                                                  (0xff < uVar76))));
  cVar2 = (uVar91 != 0) * (uVar91 < 0x100) * cVar38 - (0xff < uVar91);
  uVar78 = CONCAT15(cVar2,CONCAT14((uVar90 != 0) * (uVar90 < 0x100) * cVar37 - (0xff < uVar90),
                                   uVar77));
  cVar8 = (uVar93 != 0) * (uVar93 < 0x100) * cVar40 - (0xff < uVar93);
  uVar79 = CONCAT17(cVar8,CONCAT16((uVar92 != 0) * (uVar92 < 0x100) * cVar39 - (0xff < uVar92),
                                   uVar78));
  cVar7 = (uVar122 != 0) * (uVar122 < 0x100) * cVar42 - (0xff < uVar122);
  auVar81._0_10_ =
       CONCAT19(cVar7,CONCAT18((uVar112 != 0) * (uVar112 < 0x100) * bVar41 - (0xff < uVar112),uVar79
                              ));
  auVar81[10] = (uVar123 != 0) * (uVar123 < 0x100) * cVar43 - (0xff < uVar123);
  cVar5 = (uVar124 != 0) * (uVar124 < 0x100) * cVar44 - (0xff < uVar124);
  auVar81[0xb] = cVar5;
  auVar84[0xc] = (uVar125 != 0) * (uVar125 < 0x100) * cVar45 - (0xff < uVar125);
  auVar84._0_12_ = auVar81;
  cVar4 = (uVar126 != 0) * (uVar126 < 0x100) * cVar46 - (0xff < uVar126);
  auVar84[0xd] = cVar4;
  auVar110[0xe] = (uVar127 != 0) * (uVar127 < 0x100) * cVar47 - (0xff < uVar127);
  auVar110._0_14_ = auVar84;
  cVar6 = (uVar128 != 0) * (uVar128 < 0x100) * cVar48 - (0xff < uVar128);
  auVar110[0xf] = cVar6;
  *param_6 = auVar110;
  auVar184 = *param_4 & auVar75;
  auVar188 = *param_3 & auVar75;
  auVar150 = *param_1;
  sVar59 = auVar188._0_2_;
  sVar60 = auVar188._2_2_;
  bVar9 = (0 < sVar60) * (sVar60 < 0x100) * auVar188[2] - (0xff < sVar60);
  sVar60 = auVar188._4_2_;
  sVar61 = auVar188._6_2_;
  cVar16 = (0 < sVar61) * (sVar61 < 0x100) * auVar188[6] - (0xff < sVar61);
  uVar143 = CONCAT13(cVar16,CONCAT12((0 < sVar60) * (sVar60 < 0x100) * auVar188[4] - (0xff < sVar60)
                                     ,CONCAT11(bVar9,(0 < sVar59) * (sVar59 < 0x100) * auVar188[0] -
                                                     (0xff < sVar59))));
  sVar59 = auVar188._8_2_;
  sVar60 = auVar188._10_2_;
  cVar15 = (0 < sVar60) * (sVar60 < 0x100) * auVar188[10] - (0xff < sVar60);
  uVar144 = CONCAT15(cVar15,CONCAT14((0 < sVar59) * (sVar59 < 0x100) * auVar188[8] - (0xff < sVar59)
                                     ,uVar143));
  sVar59 = auVar188._12_2_;
  sVar60 = auVar188._14_2_;
  cVar14 = (0 < sVar60) * (sVar60 < 0x100) * auVar188[0xe] - (0xff < sVar60);
  uVar145 = CONCAT17(cVar14,CONCAT16((0 < sVar59) * (sVar59 < 0x100) * auVar188[0xc] -
                                     (0xff < sVar59),uVar144));
  sVar59 = auVar184._0_2_;
  sVar60 = auVar184._2_2_;
  cVar13 = (0 < sVar60) * (sVar60 < 0x100) * auVar184[2] - (0xff < sVar60);
  auVar186._0_10_ =
       CONCAT19(cVar13,CONCAT18((0 < sVar59) * (sVar59 < 0x100) * auVar184[0] - (0xff < sVar59),
                                uVar145));
  sVar59 = auVar184._4_2_;
  auVar186[10] = (0 < sVar59) * (sVar59 < 0x100) * auVar184[4] - (0xff < sVar59);
  sVar59 = auVar184._6_2_;
  cVar10 = (0 < sVar59) * (sVar59 < 0x100) * auVar184[6] - (0xff < sVar59);
  auVar186[0xb] = cVar10;
  sVar59 = auVar184._8_2_;
  auVar187[0xc] = (0 < sVar59) * (sVar59 < 0x100) * auVar184[8] - (0xff < sVar59);
  auVar187._0_12_ = auVar186;
  sVar59 = auVar184._10_2_;
  cVar12 = (0 < sVar59) * (sVar59 < 0x100) * auVar184[10] - (0xff < sVar59);
  auVar187[0xd] = cVar12;
  sVar59 = auVar184._12_2_;
  auVar189[0xe] = (0 < sVar59) * (sVar59 < 0x100) * auVar184[0xc] - (0xff < sVar59);
  auVar189._0_14_ = auVar187;
  sVar59 = auVar184._14_2_;
  cVar11 = (0 < sVar59) * (sVar59 < 0x100) * auVar184[0xe] - (0xff < sVar59);
  auVar189[0xf] = cVar11;
  auVar134 = *param_5 & auVar75;
  auVar184 = *param_5;
  auVar188 = auVar110 & auVar75;
  auVar86 = *param_2 & auVar75;
  auVar171 = *param_1 & auVar75;
  sVar59 = auVar134._0_2_;
  sVar60 = auVar134._2_2_;
  bVar17 = (0 < sVar60) * (sVar60 < 0x100) * auVar134[2] - (0xff < sVar60);
  sVar60 = auVar134._4_2_;
  sVar61 = auVar134._6_2_;
  cVar18 = (0 < sVar61) * (sVar61 < 0x100) * auVar134[6] - (0xff < sVar61);
  uVar94 = CONCAT13(cVar18,CONCAT12((0 < sVar60) * (sVar60 < 0x100) * auVar134[4] - (0xff < sVar60),
                                    CONCAT11(bVar17,(0 < sVar59) * (sVar59 < 0x100) * auVar134[0] -
                                                    (0xff < sVar59))));
  sVar59 = auVar134._8_2_;
  sVar60 = auVar134._10_2_;
  cVar24 = (0 < sVar60) * (sVar60 < 0x100) * auVar134[10] - (0xff < sVar60);
  uVar95 = CONCAT15(cVar24,CONCAT14((0 < sVar59) * (sVar59 < 0x100) * auVar134[8] - (0xff < sVar59),
                                    uVar94));
  sVar59 = auVar134._12_2_;
  sVar60 = auVar134._14_2_;
  cVar23 = (0 < sVar60) * (sVar60 < 0x100) * auVar134[0xe] - (0xff < sVar60);
  uVar96 = CONCAT17(cVar23,CONCAT16((0 < sVar59) * (sVar59 < 0x100) * auVar134[0xc] -
                                    (0xff < sVar59),uVar95));
  sVar59 = auVar188._0_2_;
  sVar60 = auVar188._2_2_;
  cVar22 = (0 < sVar60) * (sVar60 < 0x100) * auVar188[2] - (0xff < sVar60);
  auVar146._0_10_ =
       CONCAT19(cVar22,CONCAT18((0 < sVar59) * (sVar59 < 0x100) * auVar188[0] - (0xff < sVar59),
                                uVar96));
  sVar59 = auVar188._4_2_;
  auVar146[10] = (0 < sVar59) * (sVar59 < 0x100) * auVar188[4] - (0xff < sVar59);
  sVar59 = auVar188._6_2_;
  cVar21 = (0 < sVar59) * (sVar59 < 0x100) * auVar188[6] - (0xff < sVar59);
  auVar146[0xb] = cVar21;
  sVar59 = auVar188._8_2_;
  auVar148[0xc] = (0 < sVar59) * (sVar59 < 0x100) * auVar188[8] - (0xff < sVar59);
  auVar148._0_12_ = auVar146;
  sVar59 = auVar188._10_2_;
  cVar20 = (0 < sVar59) * (sVar59 < 0x100) * auVar188[10] - (0xff < sVar59);
  auVar148[0xd] = cVar20;
  sVar59 = auVar188._12_2_;
  auVar151[0xe] = (0 < sVar59) * (sVar59 < 0x100) * auVar188[0xc] - (0xff < sVar59);
  auVar151._0_14_ = auVar148;
  sVar59 = auVar188._14_2_;
  cVar19 = (0 < sVar59) * (sVar59 < 0x100) * auVar188[0xe] - (0xff < sVar59);
  auVar151[0xf] = cVar19;
  auVar188 = *param_2;
  uVar129 = auVar150._0_2_ >> 8;
  uVar135 = auVar150._2_2_ >> 8;
  uVar136 = auVar150._4_2_ >> 8;
  uVar137 = auVar150._6_2_ >> 8;
  uVar138 = auVar150._8_2_ >> 8;
  uVar139 = auVar150._10_2_ >> 8;
  uVar140 = auVar150._12_2_ >> 8;
  uVar141 = auVar150._14_2_ >> 8;
  sVar59 = auVar171._0_2_;
  sVar60 = auVar171._2_2_;
  bVar25 = (0 < sVar60) * (sVar60 < 0x100) * auVar171[2] - (0xff < sVar60);
  sVar60 = auVar171._4_2_;
  sVar61 = auVar171._6_2_;
  cVar28 = (0 < sVar61) * (sVar61 < 0x100) * auVar171[6] - (0xff < sVar61);
  uVar101 = CONCAT13(cVar28,CONCAT12((0 < sVar60) * (sVar60 < 0x100) * auVar171[4] - (0xff < sVar60)
                                     ,CONCAT11(bVar25,(0 < sVar59) * (sVar59 < 0x100) * auVar171[0]
                                                      - (0xff < sVar59))));
  sVar59 = auVar171._8_2_;
  sVar60 = auVar171._10_2_;
  cVar29 = (0 < sVar60) * (sVar60 < 0x100) * auVar171[10] - (0xff < sVar60);
  uVar102 = CONCAT15(cVar29,CONCAT14((0 < sVar59) * (sVar59 < 0x100) * auVar171[8] - (0xff < sVar59)
                                     ,uVar101));
  sVar59 = auVar171._12_2_;
  sVar60 = auVar171._14_2_;
  cVar27 = (0 < sVar60) * (sVar60 < 0x100) * auVar171[0xe] - (0xff < sVar60);
  uVar103 = CONCAT17(cVar27,CONCAT16((0 < sVar59) * (sVar59 < 0x100) * auVar171[0xc] -
                                     (0xff < sVar59),uVar102));
  sVar59 = auVar86._0_2_;
  sVar60 = auVar86._2_2_;
  cVar30 = (0 < sVar60) * (sVar60 < 0x100) * auVar86[2] - (0xff < sVar60);
  auVar165._0_10_ =
       CONCAT19(cVar30,CONCAT18((0 < sVar59) * (sVar59 < 0x100) * auVar86[0] - (0xff < sVar59),
                                uVar103));
  sVar59 = auVar86._4_2_;
  auVar165[10] = (0 < sVar59) * (sVar59 < 0x100) * auVar86[4] - (0xff < sVar59);
  sVar59 = auVar86._6_2_;
  cVar31 = (0 < sVar59) * (sVar59 < 0x100) * auVar86[6] - (0xff < sVar59);
  auVar165[0xb] = cVar31;
  sVar59 = auVar86._8_2_;
  auVar168[0xc] = (0 < sVar59) * (sVar59 < 0x100) * auVar86[8] - (0xff < sVar59);
  auVar168._0_12_ = auVar165;
  sVar59 = auVar86._10_2_;
  cVar32 = (0 < sVar59) * (sVar59 < 0x100) * auVar86[10] - (0xff < sVar59);
  auVar168[0xd] = cVar32;
  sVar59 = auVar86._12_2_;
  auVar172[0xe] = (0 < sVar59) * (sVar59 < 0x100) * auVar86[0xc] - (0xff < sVar59);
  auVar172._0_14_ = auVar168;
  sVar59 = auVar86._14_2_;
  cVar26 = (0 < sVar59) * (sVar59 < 0x100) * auVar86[0xe] - (0xff < sVar59);
  auVar172[0xf] = cVar26;
  auVar86 = *param_3;
  uVar76 = (ushort)bVar1;
  uVar87 = (ushort)((uint)uVar77 >> 0x18);
  uVar88 = (ushort)((uint6)uVar78 >> 0x28);
  uVar89 = (ushort)((ulong)uVar79 >> 0x38);
  uVar90 = (ushort)((unkuint10)auVar81._0_10_ >> 0x48);
  uVar91 = auVar81._10_2_ >> 8;
  uVar92 = auVar84._12_2_ >> 8;
  uVar93 = auVar110._14_2_ >> 8;
  uVar142 = auVar184._0_2_ >> 8;
  uVar153 = auVar184._2_2_ >> 8;
  uVar154 = auVar184._4_2_ >> 8;
  uVar155 = auVar184._6_2_ >> 8;
  uVar156 = auVar184._8_2_ >> 8;
  uVar157 = auVar184._10_2_ >> 8;
  uVar158 = auVar184._12_2_ >> 8;
  uVar159 = auVar184._14_2_ >> 8;
  uVar112 = auVar188._0_2_ >> 8;
  uVar122 = auVar188._2_2_ >> 8;
  uVar123 = auVar188._4_2_ >> 8;
  uVar124 = auVar188._6_2_ >> 8;
  uVar125 = auVar188._8_2_ >> 8;
  uVar126 = auVar188._10_2_ >> 8;
  uVar127 = auVar188._12_2_ >> 8;
  uVar128 = auVar188._14_2_ >> 8;
  bVar33 = (uVar153 != 0) * (uVar153 < 0x100) * auVar184[3] - (0xff < uVar153);
  cVar34 = (uVar155 != 0) * (uVar155 < 0x100) * auVar184[7] - (0xff < uVar155);
  uVar77 = CONCAT13(cVar34,CONCAT12((uVar154 != 0) * (uVar154 < 0x100) * auVar184[5] -
                                    (0xff < uVar154),
                                    CONCAT11(bVar33,(uVar142 != 0) * (uVar142 < 0x100) * auVar184[1]
                                                    - (0xff < uVar142))));
  cVar35 = (uVar157 != 0) * (uVar157 < 0x100) * auVar184[0xb] - (0xff < uVar157);
  uVar78 = CONCAT15(cVar35,CONCAT14((uVar156 != 0) * (uVar156 < 0x100) * auVar184[9] -
                                    (0xff < uVar156),uVar77));
  cVar36 = (uVar159 != 0) * (uVar159 < 0x100) * auVar184[0xf] - (0xff < uVar159);
  uVar79 = CONCAT17(cVar36,CONCAT16((uVar158 != 0) * (uVar158 < 0x100) * auVar184[0xd] -
                                    (0xff < uVar158),uVar78));
  cVar3 = (uVar87 != 0) * (uVar87 < 0x100) * cVar3 - (0xff < uVar87);
  auVar131._0_10_ =
       CONCAT19(cVar3,CONCAT18((uVar76 != 0) * (uVar76 < 0x100) * bVar1 - (0xff < uVar76),uVar79));
  auVar131[10] = (uVar88 != 0) * (uVar88 < 0x100) * cVar2 - (0xff < uVar88);
  cVar2 = (uVar89 != 0) * (uVar89 < 0x100) * cVar8 - (0xff < uVar89);
  auVar131[0xb] = cVar2;
  auVar133[0xc] = (uVar90 != 0) * (uVar90 < 0x100) * cVar7 - (0xff < uVar90);
  auVar133._0_12_ = auVar131;
  cVar8 = (uVar91 != 0) * (uVar91 < 0x100) * cVar5 - (0xff < uVar91);
  auVar133[0xd] = cVar8;
  auVar190[0xe] = (uVar92 != 0) * (uVar92 < 0x100) * cVar4 - (0xff < uVar92);
  auVar190._0_14_ = auVar133;
  cVar7 = (uVar93 != 0) * (uVar93 < 0x100) * cVar6 - (0xff < uVar93);
  auVar190[0xf] = cVar7;
  bVar1 = (uVar135 != 0) * (uVar135 < 0x100) * auVar150[3] - (0xff < uVar135);
  cVar5 = (uVar137 != 0) * (uVar137 < 0x100) * auVar150[7] - (0xff < uVar137);
  uVar113 = CONCAT13(cVar5,CONCAT12((uVar136 != 0) * (uVar136 < 0x100) * auVar150[5] -
                                    (0xff < uVar136),
                                    CONCAT11(bVar1,(uVar129 != 0) * (uVar129 < 0x100) * auVar150[1]
                                                   - (0xff < uVar129))));
  cVar40 = (uVar139 != 0) * (uVar139 < 0x100) * auVar150[0xb] - (0xff < uVar139);
  uVar114 = CONCAT15(cVar40,CONCAT14((uVar138 != 0) * (uVar138 < 0x100) * auVar150[9] -
                                     (0xff < uVar138),uVar113));
  cVar39 = (uVar141 != 0) * (uVar141 < 0x100) * auVar150[0xf] - (0xff < uVar141);
  uVar115 = CONCAT17(cVar39,CONCAT16((uVar140 != 0) * (uVar140 < 0x100) * auVar150[0xd] -
                                     (0xff < uVar140),uVar114));
  cVar38 = (uVar122 != 0) * (uVar122 < 0x100) * auVar188[3] - (0xff < uVar122);
  auVar181._0_10_ =
       CONCAT19(cVar38,CONCAT18((uVar112 != 0) * (uVar112 < 0x100) * auVar188[1] - (0xff < uVar112),
                                uVar115));
  auVar181[10] = (uVar123 != 0) * (uVar123 < 0x100) * auVar188[5] - (0xff < uVar123);
  cVar37 = (uVar124 != 0) * (uVar124 < 0x100) * auVar188[7] - (0xff < uVar124);
  auVar181[0xb] = cVar37;
  auVar182[0xc] = (uVar125 != 0) * (uVar125 < 0x100) * auVar188[9] - (0xff < uVar125);
  auVar182._0_12_ = auVar181;
  cVar6 = (uVar126 != 0) * (uVar126 < 0x100) * auVar188[0xb] - (0xff < uVar126);
  auVar182[0xd] = cVar6;
  auVar185[0xe] = (uVar127 != 0) * (uVar127 < 0x100) * auVar188[0xd] - (0xff < uVar127);
  auVar185._0_14_ = auVar182;
  cVar4 = (uVar128 != 0) * (uVar128 < 0x100) * auVar188[0xf] - (0xff < uVar128);
  auVar185[0xf] = cVar4;
  auVar150 = *param_4;
  auVar184 = auVar189 & auVar75;
  auVar110 = auVar151 & auVar75;
  uVar112 = auVar86._0_2_ >> 8;
  uVar122 = auVar86._2_2_ >> 8;
  uVar123 = auVar86._4_2_ >> 8;
  uVar124 = auVar86._6_2_ >> 8;
  uVar125 = auVar86._8_2_ >> 8;
  uVar126 = auVar86._10_2_ >> 8;
  uVar127 = auVar86._12_2_ >> 8;
  uVar128 = auVar86._14_2_ >> 8;
  uVar129 = (ushort)bVar17;
  uVar135 = (ushort)((uint)uVar94 >> 0x18);
  uVar136 = (ushort)((uint6)uVar95 >> 0x28);
  uVar137 = (ushort)((ulong)uVar96 >> 0x38);
  uVar138 = (ushort)((unkuint10)auVar146._0_10_ >> 0x48);
  uVar139 = auVar146._10_2_ >> 8;
  uVar140 = auVar148._12_2_ >> 8;
  uVar141 = auVar151._14_2_ >> 8;
  uVar76 = auVar150._0_2_ >> 8;
  uVar87 = auVar150._2_2_ >> 8;
  uVar88 = auVar150._4_2_ >> 8;
  uVar89 = auVar150._6_2_ >> 8;
  uVar90 = auVar150._8_2_ >> 8;
  uVar91 = auVar150._10_2_ >> 8;
  uVar92 = auVar150._12_2_ >> 8;
  uVar93 = auVar150._14_2_ >> 8;
  uVar142 = (ushort)bVar33;
  uVar153 = (ushort)((uint)uVar77 >> 0x18);
  uVar154 = (ushort)((uint6)uVar78 >> 0x28);
  uVar155 = (ushort)((ulong)uVar79 >> 0x38);
  uVar156 = (ushort)((unkuint10)auVar131._0_10_ >> 0x48);
  uVar157 = auVar131._10_2_ >> 8;
  uVar158 = auVar133._12_2_ >> 8;
  uVar159 = auVar190._14_2_ >> 8;
  auVar190 = auVar190 & auVar75;
  bVar41 = (uVar122 != 0) * (uVar122 < 0x100) * auVar86[3] - (0xff < uVar122);
  cVar42 = (uVar124 != 0) * (uVar124 < 0x100) * auVar86[7] - (0xff < uVar124);
  uVar77 = CONCAT13(cVar42,CONCAT12((uVar123 != 0) * (uVar123 < 0x100) * auVar86[5] -
                                    (0xff < uVar123),
                                    CONCAT11(bVar41,(uVar112 != 0) * (uVar112 < 0x100) * auVar86[1]
                                                    - (0xff < uVar112))));
  cVar45 = (uVar126 != 0) * (uVar126 < 0x100) * auVar86[0xb] - (0xff < uVar126);
  uVar78 = CONCAT15(cVar45,CONCAT14((uVar125 != 0) * (uVar125 < 0x100) * auVar86[9] -
                                    (0xff < uVar125),uVar77));
  cVar43 = (uVar128 != 0) * (uVar128 < 0x100) * auVar86[0xf] - (0xff < uVar128);
  uVar79 = CONCAT17(cVar43,CONCAT16((uVar127 != 0) * (uVar127 < 0x100) * auVar86[0xd] -
                                    (0xff < uVar127),uVar78));
  cVar44 = (uVar87 != 0) * (uVar87 < 0x100) * auVar150[3] - (0xff < uVar87);
  auVar105._0_10_ =
       CONCAT19(cVar44,CONCAT18((uVar76 != 0) * (uVar76 < 0x100) * auVar150[1] - (0xff < uVar76),
                                uVar79));
  auVar105[10] = (uVar88 != 0) * (uVar88 < 0x100) * auVar150[5] - (0xff < uVar88);
  cVar46 = (uVar89 != 0) * (uVar89 < 0x100) * auVar150[7] - (0xff < uVar89);
  auVar105[0xb] = cVar46;
  auVar108[0xc] = (uVar90 != 0) * (uVar90 < 0x100) * auVar150[9] - (0xff < uVar90);
  auVar108._0_12_ = auVar105;
  cVar47 = (uVar91 != 0) * (uVar91 < 0x100) * auVar150[0xb] - (0xff < uVar91);
  auVar108[0xd] = cVar47;
  auVar188[0xe] = (uVar92 != 0) * (uVar92 < 0x100) * auVar150[0xd] - (0xff < uVar92);
  auVar188._0_14_ = auVar108;
  cVar48 = (uVar93 != 0) * (uVar93 < 0x100) * auVar150[0xf] - (0xff < uVar93);
  auVar188[0xf] = cVar48;
  uVar112 = (ushort)bVar9;
  uVar122 = (ushort)((uint)uVar143 >> 0x18);
  uVar123 = (ushort)((uint6)uVar144 >> 0x28);
  uVar124 = (ushort)((ulong)uVar145 >> 0x38);
  uVar125 = (ushort)((unkuint10)auVar186._0_10_ >> 0x48);
  uVar126 = auVar186._10_2_ >> 8;
  uVar127 = auVar187._12_2_ >> 8;
  uVar128 = auVar189._14_2_ >> 8;
  auVar150 = auVar172 & auVar75;
  uVar76 = (ushort)bVar25;
  uVar87 = (ushort)((uint)uVar101 >> 0x18);
  uVar88 = (ushort)((uint6)uVar102 >> 0x28);
  uVar89 = (ushort)((ulong)uVar103 >> 0x38);
  uVar90 = (ushort)((unkuint10)auVar165._0_10_ >> 0x48);
  uVar91 = auVar165._10_2_ >> 8;
  uVar92 = auVar168._12_2_ >> 8;
  uVar93 = auVar172._14_2_ >> 8;
  sVar59 = auVar150._0_2_;
  sVar60 = auVar150._2_2_;
  bVar49 = (0 < sVar60) * (sVar60 < 0x100) * auVar150[2] - (0xff < sVar60);
  sVar60 = auVar150._4_2_;
  sVar61 = auVar150._6_2_;
  cVar50 = (0 < sVar61) * (sVar61 < 0x100) * auVar150[6] - (0xff < sVar61);
  uVar94 = CONCAT13(cVar50,CONCAT12((0 < sVar60) * (sVar60 < 0x100) * auVar150[4] - (0xff < sVar60),
                                    CONCAT11(bVar49,(0 < sVar59) * (sVar59 < 0x100) * auVar150[0] -
                                                    (0xff < sVar59))));
  sVar59 = auVar150._8_2_;
  sVar60 = auVar150._10_2_;
  cVar51 = (0 < sVar60) * (sVar60 < 0x100) * auVar150[10] - (0xff < sVar60);
  uVar95 = CONCAT15(cVar51,CONCAT14((0 < sVar59) * (sVar59 < 0x100) * auVar150[8] - (0xff < sVar59),
                                    uVar94));
  sVar59 = auVar150._12_2_;
  sVar60 = auVar150._14_2_;
  cVar52 = (0 < sVar60) * (sVar60 < 0x100) * auVar150[0xe] - (0xff < sVar60);
  uVar96 = CONCAT17(cVar52,CONCAT16((0 < sVar59) * (sVar59 < 0x100) * auVar150[0xc] -
                                    (0xff < sVar59),uVar95));
  sVar59 = auVar184._0_2_;
  sVar60 = auVar184._2_2_;
  cVar53 = (0 < sVar60) * (sVar60 < 0x100) * auVar184[2] - (0xff < sVar60);
  auVar98._0_10_ =
       CONCAT19(cVar53,CONCAT18((0 < sVar59) * (sVar59 < 0x100) * auVar184[0] - (0xff < sVar59),
                                uVar96));
  sVar59 = auVar184._4_2_;
  auVar98[10] = (0 < sVar59) * (sVar59 < 0x100) * auVar184[4] - (0xff < sVar59);
  sVar59 = auVar184._6_2_;
  cVar54 = (0 < sVar59) * (sVar59 < 0x100) * auVar184[6] - (0xff < sVar59);
  auVar98[0xb] = cVar54;
  sVar59 = auVar184._8_2_;
  auVar100[0xc] = (0 < sVar59) * (sVar59 < 0x100) * auVar184[8] - (0xff < sVar59);
  auVar100._0_12_ = auVar98;
  sVar59 = auVar184._10_2_;
  cVar55 = (0 < sVar59) * (sVar59 < 0x100) * auVar184[10] - (0xff < sVar59);
  auVar100[0xd] = cVar55;
  sVar59 = auVar184._12_2_;
  auVar171[0xe] = (0 < sVar59) * (sVar59 < 0x100) * auVar184[0xc] - (0xff < sVar59);
  auVar171._0_14_ = auVar100;
  sVar59 = auVar184._14_2_;
  cVar56 = (0 < sVar59) * (sVar59 < 0x100) * auVar184[0xe] - (0xff < sVar59);
  auVar171[0xf] = cVar56;
  bVar57 = (uVar87 != 0) * (uVar87 < 0x100) * cVar28 - (0xff < uVar87);
  cVar28 = (uVar89 != 0) * (uVar89 < 0x100) * cVar27 - (0xff < uVar89);
  uVar161 = CONCAT13(cVar28,CONCAT12((uVar88 != 0) * (uVar88 < 0x100) * cVar29 - (0xff < uVar88),
                                     CONCAT11(bVar57,(uVar76 != 0) * (uVar76 < 0x100) * bVar25 -
                                                     (0xff < uVar76))));
  cVar31 = (uVar91 != 0) * (uVar91 < 0x100) * cVar31 - (0xff < uVar91);
  uVar162 = CONCAT15(cVar31,CONCAT14((uVar90 != 0) * (uVar90 < 0x100) * cVar30 - (0xff < uVar90),
                                     uVar161));
  cVar26 = (uVar93 != 0) * (uVar93 < 0x100) * cVar26 - (0xff < uVar93);
  uVar163 = CONCAT17(cVar26,CONCAT16((uVar92 != 0) * (uVar92 < 0x100) * cVar32 - (0xff < uVar92),
                                     uVar162));
  cVar16 = (uVar122 != 0) * (uVar122 < 0x100) * cVar16 - (0xff < uVar122);
  auVar166._0_10_ =
       CONCAT19(cVar16,CONCAT18((uVar112 != 0) * (uVar112 < 0x100) * bVar9 - (0xff < uVar112),
                                uVar163));
  auVar166[10] = (uVar123 != 0) * (uVar123 < 0x100) * cVar15 - (0xff < uVar123);
  cVar14 = (uVar124 != 0) * (uVar124 < 0x100) * cVar14 - (0xff < uVar124);
  auVar166[0xb] = cVar14;
  auVar169[0xc] = (uVar125 != 0) * (uVar125 < 0x100) * cVar13 - (0xff < uVar125);
  auVar169._0_12_ = auVar166;
  cVar13 = (uVar126 != 0) * (uVar126 < 0x100) * cVar10 - (0xff < uVar126);
  auVar169[0xd] = cVar13;
  auVar173[0xe] = (uVar127 != 0) * (uVar127 < 0x100) * cVar12 - (0xff < uVar127);
  auVar173._0_14_ = auVar169;
  cVar10 = (uVar128 != 0) * (uVar128 < 0x100) * cVar11 - (0xff < uVar128);
  auVar173[0xf] = cVar10;
  auVar150 = auVar185 & auVar75;
  uVar76 = (ushort)bVar1;
  uVar87 = (ushort)((uint)uVar113 >> 0x18);
  uVar88 = (ushort)((uint6)uVar114 >> 0x28);
  uVar89 = (ushort)((ulong)uVar115 >> 0x38);
  uVar90 = (ushort)((unkuint10)auVar181._0_10_ >> 0x48);
  uVar91 = auVar181._10_2_ >> 8;
  uVar92 = auVar182._12_2_ >> 8;
  uVar93 = auVar185._14_2_ >> 8;
  sVar59 = auVar110._0_2_;
  sVar60 = auVar110._2_2_;
  bVar9 = (0 < sVar60) * (sVar60 < 0x100) * auVar110[2] - (0xff < sVar60);
  sVar60 = auVar110._4_2_;
  sVar61 = auVar110._6_2_;
  cVar11 = (0 < sVar61) * (sVar61 < 0x100) * auVar110[6] - (0xff < sVar61);
  uVar113 = CONCAT13(cVar11,CONCAT12((0 < sVar60) * (sVar60 < 0x100) * auVar110[4] - (0xff < sVar60)
                                     ,CONCAT11(bVar9,(0 < sVar59) * (sVar59 < 0x100) * auVar110[0] -
                                                     (0xff < sVar59))));
  sVar59 = auVar110._8_2_;
  sVar60 = auVar110._10_2_;
  cVar12 = (0 < sVar60) * (sVar60 < 0x100) * auVar110[10] - (0xff < sVar60);
  uVar114 = CONCAT15(cVar12,CONCAT14((0 < sVar59) * (sVar59 < 0x100) * auVar110[8] - (0xff < sVar59)
                                     ,uVar113));
  sVar59 = auVar110._12_2_;
  sVar60 = auVar110._14_2_;
  cVar15 = (0 < sVar60) * (sVar60 < 0x100) * auVar110[0xe] - (0xff < sVar60);
  uVar115 = CONCAT17(cVar15,CONCAT16((0 < sVar59) * (sVar59 < 0x100) * auVar110[0xc] -
                                     (0xff < sVar59),uVar114));
  sVar59 = auVar150._0_2_;
  sVar60 = auVar150._2_2_;
  cVar32 = (0 < sVar60) * (sVar60 < 0x100) * auVar150[2] - (0xff < sVar60);
  auVar117._0_10_ =
       CONCAT19(cVar32,CONCAT18((0 < sVar59) * (sVar59 < 0x100) * auVar150[0] - (0xff < sVar59),
                                uVar115));
  sVar59 = auVar150._4_2_;
  auVar117[10] = (0 < sVar59) * (sVar59 < 0x100) * auVar150[4] - (0xff < sVar59);
  sVar59 = auVar150._6_2_;
  cVar30 = (0 < sVar59) * (sVar59 < 0x100) * auVar150[6] - (0xff < sVar59);
  auVar117[0xb] = cVar30;
  sVar59 = auVar150._8_2_;
  auVar119[0xc] = (0 < sVar59) * (sVar59 < 0x100) * auVar150[8] - (0xff < sVar59);
  auVar119._0_12_ = auVar117;
  sVar59 = auVar150._10_2_;
  cVar29 = (0 < sVar59) * (sVar59 < 0x100) * auVar150[10] - (0xff < sVar59);
  auVar119[0xd] = cVar29;
  sVar59 = auVar150._12_2_;
  auVar121[0xe] = (0 < sVar59) * (sVar59 < 0x100) * auVar150[0xc] - (0xff < sVar59);
  auVar121._0_14_ = auVar119;
  sVar59 = auVar150._14_2_;
  cVar27 = (0 < sVar59) * (sVar59 < 0x100) * auVar150[0xe] - (0xff < sVar59);
  auVar121[0xf] = cVar27;
  bVar25 = (uVar135 != 0) * (uVar135 < 0x100) * cVar18 - (0xff < uVar135);
  cVar58 = (uVar137 != 0) * (uVar137 < 0x100) * cVar23 - (0xff < uVar137);
  uVar143 = CONCAT13(cVar58,CONCAT12((uVar136 != 0) * (uVar136 < 0x100) * cVar24 - (0xff < uVar136),
                                     CONCAT11(bVar25,(uVar129 != 0) * (uVar129 < 0x100) * bVar17 -
                                                     (0xff < uVar129))));
  cVar23 = (uVar139 != 0) * (uVar139 < 0x100) * cVar21 - (0xff < uVar139);
  uVar144 = CONCAT15(cVar23,CONCAT14((uVar138 != 0) * (uVar138 < 0x100) * cVar22 - (0xff < uVar138),
                                     uVar143));
  cVar24 = (uVar141 != 0) * (uVar141 < 0x100) * cVar19 - (0xff < uVar141);
  uVar145 = CONCAT17(cVar24,CONCAT16((uVar140 != 0) * (uVar140 < 0x100) * cVar20 - (0xff < uVar140),
                                     uVar144));
  cVar22 = (uVar87 != 0) * (uVar87 < 0x100) * cVar5 - (0xff < uVar87);
  auVar147._0_10_ =
       CONCAT19(cVar22,CONCAT18((uVar76 != 0) * (uVar76 < 0x100) * bVar1 - (0xff < uVar76),uVar145))
  ;
  auVar147[10] = (uVar88 != 0) * (uVar88 < 0x100) * cVar40 - (0xff < uVar88);
  cVar18 = (uVar89 != 0) * (uVar89 < 0x100) * cVar39 - (0xff < uVar89);
  auVar147[0xb] = cVar18;
  auVar149[0xc] = (uVar90 != 0) * (uVar90 < 0x100) * cVar38 - (0xff < uVar90);
  auVar149._0_12_ = auVar147;
  cVar5 = (uVar91 != 0) * (uVar91 < 0x100) * cVar37 - (0xff < uVar91);
  auVar149[0xd] = cVar5;
  auVar152[0xe] = (uVar92 != 0) * (uVar92 < 0x100) * cVar6 - (0xff < uVar92);
  auVar152._0_14_ = auVar149;
  cVar4 = (uVar93 != 0) * (uVar93 < 0x100) * cVar4 - (0xff < uVar93);
  auVar152[0xf] = cVar4;
  uVar76 = (ushort)bVar41;
  uVar87 = (ushort)((uint)uVar77 >> 0x18);
  uVar88 = (ushort)((uint6)uVar78 >> 0x28);
  uVar89 = (ushort)((ulong)uVar79 >> 0x38);
  uVar90 = (ushort)((unkuint10)auVar105._0_10_ >> 0x48);
  uVar91 = auVar105._10_2_ >> 8;
  uVar92 = auVar108._12_2_ >> 8;
  uVar93 = auVar188._14_2_ >> 8;
  auVar188 = auVar188 & auVar75;
  bVar1 = (uVar87 != 0) * (uVar87 < 0x100) * cVar42 - (0xff < uVar87);
  cVar37 = (uVar89 != 0) * (uVar89 < 0x100) * cVar43 - (0xff < uVar89);
  uVar101 = CONCAT13(cVar37,CONCAT12((uVar88 != 0) * (uVar88 < 0x100) * cVar45 - (0xff < uVar88),
                                     CONCAT11(bVar1,(uVar76 != 0) * (uVar76 < 0x100) * bVar41 -
                                                    (0xff < uVar76))));
  cVar19 = (uVar91 != 0) * (uVar91 < 0x100) * cVar46 - (0xff < uVar91);
  uVar102 = CONCAT15(cVar19,CONCAT14((uVar90 != 0) * (uVar90 < 0x100) * cVar44 - (0xff < uVar90),
                                     uVar101));
  cVar20 = (uVar93 != 0) * (uVar93 < 0x100) * cVar48 - (0xff < uVar93);
  uVar103 = CONCAT17(cVar20,CONCAT16((uVar92 != 0) * (uVar92 < 0x100) * cVar47 - (0xff < uVar92),
                                     uVar102));
  cVar21 = (uVar153 != 0) * (uVar153 < 0x100) * cVar34 - (0xff < uVar153);
  auVar106._0_10_ =
       CONCAT19(cVar21,CONCAT18((uVar142 != 0) * (uVar142 < 0x100) * bVar33 - (0xff < uVar142),
                                uVar103));
  auVar106[10] = (uVar154 != 0) * (uVar154 < 0x100) * cVar35 - (0xff < uVar154);
  cVar6 = (uVar155 != 0) * (uVar155 < 0x100) * cVar36 - (0xff < uVar155);
  auVar106[0xb] = cVar6;
  auVar109[0xc] = (uVar156 != 0) * (uVar156 < 0x100) * cVar3 - (0xff < uVar156);
  auVar109._0_12_ = auVar106;
  cVar3 = (uVar157 != 0) * (uVar157 < 0x100) * cVar2 - (0xff < uVar157);
  auVar109[0xd] = cVar3;
  auVar184[0xe] = (uVar158 != 0) * (uVar158 < 0x100) * cVar8 - (0xff < uVar158);
  auVar184._0_14_ = auVar109;
  cVar2 = (uVar159 != 0) * (uVar159 < 0x100) * cVar7 - (0xff < uVar159);
  auVar184[0xf] = cVar2;
  auVar110 = auVar121 & auVar75;
  auVar86 = auVar171 & auVar75;
  uVar160 = (ushort)bVar9;
  uVar174 = (ushort)((uint)uVar113 >> 0x18);
  uVar175 = (ushort)((uint6)uVar114 >> 0x28);
  uVar176 = (ushort)((ulong)uVar115 >> 0x38);
  uVar177 = (ushort)((unkuint10)auVar117._0_10_ >> 0x48);
  uVar178 = auVar117._10_2_ >> 8;
  uVar179 = auVar119._12_2_ >> 8;
  uVar180 = auVar121._14_2_ >> 8;
  sVar59 = auVar188._0_2_;
  sVar60 = auVar188._2_2_;
  bVar17 = (0 < sVar60) * (sVar60 < 0x100) * auVar188[2] - (0xff < sVar60);
  sVar60 = auVar188._4_2_;
  sVar61 = auVar188._6_2_;
  cVar8 = (0 < sVar61) * (sVar61 < 0x100) * auVar188[6] - (0xff < sVar61);
  uVar77 = CONCAT13(cVar8,CONCAT12((0 < sVar60) * (sVar60 < 0x100) * auVar188[4] - (0xff < sVar60),
                                   CONCAT11(bVar17,(0 < sVar59) * (sVar59 < 0x100) * auVar188[0] -
                                                   (0xff < sVar59))));
  sVar59 = auVar188._8_2_;
  sVar60 = auVar188._10_2_;
  cVar7 = (0 < sVar60) * (sVar60 < 0x100) * auVar188[10] - (0xff < sVar60);
  uVar78 = CONCAT15(cVar7,CONCAT14((0 < sVar59) * (sVar59 < 0x100) * auVar188[8] - (0xff < sVar59),
                                   uVar77));
  sVar59 = auVar188._12_2_;
  sVar60 = auVar188._14_2_;
  cVar34 = (0 < sVar60) * (sVar60 < 0x100) * auVar188[0xe] - (0xff < sVar60);
  uVar79 = CONCAT17(cVar34,CONCAT16((0 < sVar59) * (sVar59 < 0x100) * auVar188[0xc] -
                                    (0xff < sVar59),uVar78));
  sVar59 = auVar190._0_2_;
  sVar60 = auVar190._2_2_;
  cVar35 = (0 < sVar60) * (sVar60 < 0x100) * auVar190[2] - (0xff < sVar60);
  auVar82._0_10_ =
       CONCAT19(cVar35,CONCAT18((0 < sVar59) * (sVar59 < 0x100) * auVar190[0] - (0xff < sVar59),
                                uVar79));
  sVar59 = auVar190._4_2_;
  auVar82[10] = (0 < sVar59) * (sVar59 < 0x100) * auVar190[4] - (0xff < sVar59);
  sVar59 = auVar190._6_2_;
  cVar36 = (0 < sVar59) * (sVar59 < 0x100) * auVar190[6] - (0xff < sVar59);
  auVar82[0xb] = cVar36;
  sVar59 = auVar190._8_2_;
  auVar85[0xc] = (0 < sVar59) * (sVar59 < 0x100) * auVar190[8] - (0xff < sVar59);
  auVar85._0_12_ = auVar82;
  sVar59 = auVar190._10_2_;
  cVar38 = (0 < sVar59) * (sVar59 < 0x100) * auVar190[10] - (0xff < sVar59);
  auVar85[0xd] = cVar38;
  sVar59 = auVar190._12_2_;
  auVar150[0xe] = (0 < sVar59) * (sVar59 < 0x100) * auVar190[0xc] - (0xff < sVar59);
  auVar150._0_14_ = auVar85;
  sVar59 = auVar190._14_2_;
  cVar39 = (0 < sVar59) * (sVar59 < 0x100) * auVar190[0xe] - (0xff < sVar59);
  auVar150[0xf] = cVar39;
  sVar59 = auVar86._0_2_;
  sVar60 = auVar86._2_2_;
  sVar61 = auVar86._4_2_;
  sVar62 = auVar86._6_2_;
  sVar63 = auVar86._8_2_;
  sVar64 = auVar86._10_2_;
  sVar65 = auVar86._12_2_;
  sVar66 = auVar86._14_2_;
  sVar67 = auVar110._0_2_;
  sVar68 = auVar110._2_2_;
  sVar69 = auVar110._4_2_;
  sVar70 = auVar110._6_2_;
  sVar71 = auVar110._8_2_;
  sVar72 = auVar110._10_2_;
  sVar73 = auVar110._12_2_;
  sVar74 = auVar110._14_2_;
  uVar142 = (ushort)bVar49;
  uVar153 = (ushort)((uint)uVar94 >> 0x18);
  uVar154 = (ushort)((uint6)uVar95 >> 0x28);
  uVar155 = (ushort)((ulong)uVar96 >> 0x38);
  uVar156 = (ushort)((unkuint10)auVar98._0_10_ >> 0x48);
  uVar157 = auVar98._10_2_ >> 8;
  uVar158 = auVar100._12_2_ >> 8;
  uVar159 = auVar171._14_2_ >> 8;
  (*param_1)[0] = (0 < sVar59) * (sVar59 < 0x100) * auVar86[0] - (0xff < sVar59);
  (*param_1)[1] = (0 < sVar60) * (sVar60 < 0x100) * auVar86[2] - (0xff < sVar60);
  (*param_1)[2] = (0 < sVar61) * (sVar61 < 0x100) * auVar86[4] - (0xff < sVar61);
  (*param_1)[3] = (0 < sVar62) * (sVar62 < 0x100) * auVar86[6] - (0xff < sVar62);
  (*param_1)[4] = (0 < sVar63) * (sVar63 < 0x100) * auVar86[8] - (0xff < sVar63);
  (*param_1)[5] = (0 < sVar64) * (sVar64 < 0x100) * auVar86[10] - (0xff < sVar64);
  (*param_1)[6] = (0 < sVar65) * (sVar65 < 0x100) * auVar86[0xc] - (0xff < sVar65);
  (*param_1)[7] = (0 < sVar66) * (sVar66 < 0x100) * auVar86[0xe] - (0xff < sVar66);
  (*param_1)[8] = (0 < sVar67) * (sVar67 < 0x100) * auVar110[0] - (0xff < sVar67);
  (*param_1)[9] = (0 < sVar68) * (sVar68 < 0x100) * auVar110[2] - (0xff < sVar68);
  (*param_1)[10] = (0 < sVar69) * (sVar69 < 0x100) * auVar110[4] - (0xff < sVar69);
  (*param_1)[0xb] = (0 < sVar70) * (sVar70 < 0x100) * auVar110[6] - (0xff < sVar70);
  (*param_1)[0xc] = (0 < sVar71) * (sVar71 < 0x100) * auVar110[8] - (0xff < sVar71);
  (*param_1)[0xd] = (0 < sVar72) * (sVar72 < 0x100) * auVar110[10] - (0xff < sVar72);
  (*param_1)[0xe] = (0 < sVar73) * (sVar73 < 0x100) * auVar110[0xc] - (0xff < sVar73);
  (*param_1)[0xf] = (0 < sVar74) * (sVar74 < 0x100) * auVar110[0xe] - (0xff < sVar74);
  auVar86 = auVar173 & auVar75;
  auVar188 = auVar150 & auVar75;
  uVar112 = (ushort)bVar17;
  uVar122 = (ushort)((uint)uVar77 >> 0x18);
  uVar123 = (ushort)((uint6)uVar78 >> 0x28);
  uVar124 = (ushort)((ulong)uVar79 >> 0x38);
  uVar125 = (ushort)((unkuint10)auVar82._0_10_ >> 0x48);
  uVar126 = auVar82._10_2_ >> 8;
  uVar127 = auVar85._12_2_ >> 8;
  uVar128 = auVar150._14_2_ >> 8;
  sVar59 = auVar188._0_2_;
  sVar60 = auVar188._2_2_;
  sVar61 = auVar188._4_2_;
  sVar62 = auVar188._6_2_;
  sVar63 = auVar188._8_2_;
  sVar64 = auVar188._10_2_;
  sVar65 = auVar188._12_2_;
  sVar66 = auVar188._14_2_;
  sVar67 = auVar86._0_2_;
  sVar68 = auVar86._2_2_;
  sVar69 = auVar86._4_2_;
  sVar70 = auVar86._6_2_;
  sVar71 = auVar86._8_2_;
  sVar72 = auVar86._10_2_;
  sVar73 = auVar86._12_2_;
  sVar74 = auVar86._14_2_;
  (*param_2)[0] = (0 < sVar59) * (sVar59 < 0x100) * auVar188[0] - (0xff < sVar59);
  (*param_2)[1] = (0 < sVar60) * (sVar60 < 0x100) * auVar188[2] - (0xff < sVar60);
  (*param_2)[2] = (0 < sVar61) * (sVar61 < 0x100) * auVar188[4] - (0xff < sVar61);
  (*param_2)[3] = (0 < sVar62) * (sVar62 < 0x100) * auVar188[6] - (0xff < sVar62);
  (*param_2)[4] = (0 < sVar63) * (sVar63 < 0x100) * auVar188[8] - (0xff < sVar63);
  (*param_2)[5] = (0 < sVar64) * (sVar64 < 0x100) * auVar188[10] - (0xff < sVar64);
  (*param_2)[6] = (0 < sVar65) * (sVar65 < 0x100) * auVar188[0xc] - (0xff < sVar65);
  (*param_2)[7] = (0 < sVar66) * (sVar66 < 0x100) * auVar188[0xe] - (0xff < sVar66);
  (*param_2)[8] = (0 < sVar67) * (sVar67 < 0x100) * auVar86[0] - (0xff < sVar67);
  (*param_2)[9] = (0 < sVar68) * (sVar68 < 0x100) * auVar86[2] - (0xff < sVar68);
  (*param_2)[10] = (0 < sVar69) * (sVar69 < 0x100) * auVar86[4] - (0xff < sVar69);
  (*param_2)[0xb] = (0 < sVar70) * (sVar70 < 0x100) * auVar86[6] - (0xff < sVar70);
  (*param_2)[0xc] = (0 < sVar71) * (sVar71 < 0x100) * auVar86[8] - (0xff < sVar71);
  (*param_2)[0xd] = (0 < sVar72) * (sVar72 < 0x100) * auVar86[10] - (0xff < sVar72);
  (*param_2)[0xe] = (0 < sVar73) * (sVar73 < 0x100) * auVar86[0xc] - (0xff < sVar73);
  (*param_2)[0xf] = (0 < sVar74) * (sVar74 < 0x100) * auVar86[0xe] - (0xff < sVar74);
  auVar150 = auVar152 & auVar75;
  auVar75 = auVar75 & auVar184;
  sVar59 = auVar150._0_2_;
  sVar60 = auVar150._2_2_;
  sVar61 = auVar150._4_2_;
  sVar62 = auVar150._6_2_;
  sVar63 = auVar150._8_2_;
  sVar64 = auVar150._10_2_;
  sVar65 = auVar150._12_2_;
  sVar66 = auVar150._14_2_;
  sVar67 = auVar75._0_2_;
  sVar68 = auVar75._2_2_;
  sVar69 = auVar75._4_2_;
  sVar70 = auVar75._6_2_;
  sVar71 = auVar75._8_2_;
  sVar72 = auVar75._10_2_;
  sVar73 = auVar75._12_2_;
  sVar74 = auVar75._14_2_;
  uVar129 = (ushort)bVar1;
  uVar135 = (ushort)((uint)uVar101 >> 0x18);
  uVar136 = (ushort)((uint6)uVar102 >> 0x28);
  uVar137 = (ushort)((ulong)uVar103 >> 0x38);
  uVar138 = (ushort)((unkuint10)auVar106._0_10_ >> 0x48);
  uVar139 = auVar106._10_2_ >> 8;
  uVar140 = auVar109._12_2_ >> 8;
  uVar141 = auVar184._14_2_ >> 8;
  (*param_3)[0] = (0 < sVar59) * (sVar59 < 0x100) * auVar150[0] - (0xff < sVar59);
  (*param_3)[1] = (0 < sVar60) * (sVar60 < 0x100) * auVar150[2] - (0xff < sVar60);
  (*param_3)[2] = (0 < sVar61) * (sVar61 < 0x100) * auVar150[4] - (0xff < sVar61);
  (*param_3)[3] = (0 < sVar62) * (sVar62 < 0x100) * auVar150[6] - (0xff < sVar62);
  (*param_3)[4] = (0 < sVar63) * (sVar63 < 0x100) * auVar150[8] - (0xff < sVar63);
  (*param_3)[5] = (0 < sVar64) * (sVar64 < 0x100) * auVar150[10] - (0xff < sVar64);
  (*param_3)[6] = (0 < sVar65) * (sVar65 < 0x100) * auVar150[0xc] - (0xff < sVar65);
  (*param_3)[7] = (0 < sVar66) * (sVar66 < 0x100) * auVar150[0xe] - (0xff < sVar66);
  (*param_3)[8] = (0 < sVar67) * (sVar67 < 0x100) * auVar75[0] - (0xff < sVar67);
  (*param_3)[9] = (0 < sVar68) * (sVar68 < 0x100) * auVar75[2] - (0xff < sVar68);
  (*param_3)[10] = (0 < sVar69) * (sVar69 < 0x100) * auVar75[4] - (0xff < sVar69);
  (*param_3)[0xb] = (0 < sVar70) * (sVar70 < 0x100) * auVar75[6] - (0xff < sVar70);
  (*param_3)[0xc] = (0 < sVar71) * (sVar71 < 0x100) * auVar75[8] - (0xff < sVar71);
  (*param_3)[0xd] = (0 < sVar72) * (sVar72 < 0x100) * auVar75[10] - (0xff < sVar72);
  (*param_3)[0xe] = (0 < sVar73) * (sVar73 < 0x100) * auVar75[0xc] - (0xff < sVar73);
  (*param_3)[0xf] = (0 < sVar74) * (sVar74 < 0x100) * auVar75[0xe] - (0xff < sVar74);
  uVar76 = (ushort)bVar25;
  uVar87 = (ushort)((uint)uVar143 >> 0x18);
  uVar88 = (ushort)((uint6)uVar144 >> 0x28);
  uVar89 = (ushort)((ulong)uVar145 >> 0x38);
  uVar90 = (ushort)((unkuint10)auVar147._0_10_ >> 0x48);
  uVar91 = auVar147._10_2_ >> 8;
  uVar92 = auVar149._12_2_ >> 8;
  uVar93 = auVar152._14_2_ >> 8;
  (*param_4)[0] = (uVar142 != 0) * (uVar142 < 0x100) * bVar49 - (0xff < uVar142);
  (*param_4)[1] = (uVar153 != 0) * (uVar153 < 0x100) * cVar50 - (0xff < uVar153);
  (*param_4)[2] = (uVar154 != 0) * (uVar154 < 0x100) * cVar51 - (0xff < uVar154);
  (*param_4)[3] = (uVar155 != 0) * (uVar155 < 0x100) * cVar52 - (0xff < uVar155);
  (*param_4)[4] = (uVar156 != 0) * (uVar156 < 0x100) * cVar53 - (0xff < uVar156);
  (*param_4)[5] = (uVar157 != 0) * (uVar157 < 0x100) * cVar54 - (0xff < uVar157);
  (*param_4)[6] = (uVar158 != 0) * (uVar158 < 0x100) * cVar55 - (0xff < uVar158);
  (*param_4)[7] = (uVar159 != 0) * (uVar159 < 0x100) * cVar56 - (0xff < uVar159);
  (*param_4)[8] = (uVar160 != 0) * (uVar160 < 0x100) * bVar9 - (0xff < uVar160);
  (*param_4)[9] = (uVar174 != 0) * (uVar174 < 0x100) * cVar11 - (0xff < uVar174);
  (*param_4)[10] = (uVar175 != 0) * (uVar175 < 0x100) * cVar12 - (0xff < uVar175);
  (*param_4)[0xb] = (uVar176 != 0) * (uVar176 < 0x100) * cVar15 - (0xff < uVar176);
  (*param_4)[0xc] = (uVar177 != 0) * (uVar177 < 0x100) * cVar32 - (0xff < uVar177);
  (*param_4)[0xd] = (uVar178 != 0) * (uVar178 < 0x100) * cVar30 - (0xff < uVar178);
  (*param_4)[0xe] = (uVar179 != 0) * (uVar179 < 0x100) * cVar29 - (0xff < uVar179);
  (*param_4)[0xf] = (uVar180 != 0) * (uVar180 < 0x100) * cVar27 - (0xff < uVar180);
  uVar142 = (ushort)bVar57;
  uVar153 = (ushort)((uint)uVar161 >> 0x18);
  uVar154 = (ushort)((uint6)uVar162 >> 0x28);
  uVar155 = (ushort)((ulong)uVar163 >> 0x38);
  uVar156 = (ushort)((unkuint10)auVar166._0_10_ >> 0x48);
  uVar157 = auVar166._10_2_ >> 8;
  uVar158 = auVar169._12_2_ >> 8;
  uVar159 = auVar173._14_2_ >> 8;
  (*param_5)[0] = (uVar112 != 0) * (uVar112 < 0x100) * bVar17 - (0xff < uVar112);
  (*param_5)[1] = (uVar122 != 0) * (uVar122 < 0x100) * cVar8 - (0xff < uVar122);
  (*param_5)[2] = (uVar123 != 0) * (uVar123 < 0x100) * cVar7 - (0xff < uVar123);
  (*param_5)[3] = (uVar124 != 0) * (uVar124 < 0x100) * cVar34 - (0xff < uVar124);
  (*param_5)[4] = (uVar125 != 0) * (uVar125 < 0x100) * cVar35 - (0xff < uVar125);
  (*param_5)[5] = (uVar126 != 0) * (uVar126 < 0x100) * cVar36 - (0xff < uVar126);
  (*param_5)[6] = (uVar127 != 0) * (uVar127 < 0x100) * cVar38 - (0xff < uVar127);
  (*param_5)[7] = (uVar128 != 0) * (uVar128 < 0x100) * cVar39 - (0xff < uVar128);
  (*param_5)[8] = (uVar142 != 0) * (uVar142 < 0x100) * bVar57 - (0xff < uVar142);
  (*param_5)[9] = (uVar153 != 0) * (uVar153 < 0x100) * cVar28 - (0xff < uVar153);
  (*param_5)[10] = (uVar154 != 0) * (uVar154 < 0x100) * cVar31 - (0xff < uVar154);
  (*param_5)[0xb] = (uVar155 != 0) * (uVar155 < 0x100) * cVar26 - (0xff < uVar155);
  (*param_5)[0xc] = (uVar156 != 0) * (uVar156 < 0x100) * cVar16 - (0xff < uVar156);
  (*param_5)[0xd] = (uVar157 != 0) * (uVar157 < 0x100) * cVar14 - (0xff < uVar157);
  (*param_5)[0xe] = (uVar158 != 0) * (uVar158 < 0x100) * cVar13 - (0xff < uVar158);
  (*param_5)[0xf] = (uVar159 != 0) * (uVar159 < 0x100) * cVar10 - (0xff < uVar159);
  (*param_6)[0] = (uVar76 != 0) * (uVar76 < 0x100) * bVar25 - (0xff < uVar76);
  (*param_6)[1] = (uVar87 != 0) * (uVar87 < 0x100) * cVar58 - (0xff < uVar87);
  (*param_6)[2] = (uVar88 != 0) * (uVar88 < 0x100) * cVar23 - (0xff < uVar88);
  (*param_6)[3] = (uVar89 != 0) * (uVar89 < 0x100) * cVar24 - (0xff < uVar89);
  (*param_6)[4] = (uVar90 != 0) * (uVar90 < 0x100) * cVar22 - (0xff < uVar90);
  (*param_6)[5] = (uVar91 != 0) * (uVar91 < 0x100) * cVar18 - (0xff < uVar91);
  (*param_6)[6] = (uVar92 != 0) * (uVar92 < 0x100) * cVar5 - (0xff < uVar92);
  (*param_6)[7] = (uVar93 != 0) * (uVar93 < 0x100) * cVar4 - (0xff < uVar93);
  (*param_6)[8] = (uVar129 != 0) * (uVar129 < 0x100) * bVar1 - (0xff < uVar129);
  (*param_6)[9] = (uVar135 != 0) * (uVar135 < 0x100) * cVar37 - (0xff < uVar135);
  (*param_6)[10] = (uVar136 != 0) * (uVar136 < 0x100) * cVar19 - (0xff < uVar136);
  (*param_6)[0xb] = (uVar137 != 0) * (uVar137 < 0x100) * cVar20 - (0xff < uVar137);
  (*param_6)[0xc] = (uVar138 != 0) * (uVar138 < 0x100) * cVar21 - (0xff < uVar138);
  (*param_6)[0xd] = (uVar139 != 0) * (uVar139 < 0x100) * cVar6 - (0xff < uVar139);
  (*param_6)[0xe] = (uVar140 != 0) * (uVar140 < 0x100) * cVar3 - (0xff < uVar140);
  (*param_6)[0xf] = (uVar141 != 0) * (uVar141 < 0x100) * cVar2 - (0xff < uVar141);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void YUV420ToRGB_SSE2(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,
                     undefined1 (*param_4) [16],undefined1 (*param_5) [16],ushort *param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  byte bVar22;
  byte bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined2 uVar16;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  auVar9[10] = 0;
  auVar9._0_10_ = SUB1610((undefined1  [16])0x0,0);
  auVar9[0xb] = (char)((ulong)uVar1 >> 0x28);
  auVar10[9] = (char)((ulong)uVar1 >> 0x20);
  auVar10._0_9_ = SUB169((undefined1  [16])0x0,0);
  auVar10._10_2_ = auVar9._10_2_;
  auVar11._9_3_ = auVar10._9_3_;
  auVar11._0_9_ = (unkuint9)0;
  auVar27._1_10_ = SUB1610(ZEXT516(CONCAT41(auVar11._8_4_,(char)((ulong)uVar1 >> 0x18))) << 0x38,6);
  auVar27[0] = (char)((ulong)uVar1 >> 0x10);
  auVar27._11_5_ = 0;
  auVar17._1_12_ = SUB1612(auVar27 << 0x28,4);
  auVar17[0] = (char)((ulong)uVar1 >> 8);
  auVar17._13_3_ = 0;
  auVar15._1_14_ = SUB1614(auVar17 << 0x18,2);
  auVar15[0] = (char)uVar1;
  auVar15[0xf] = 0;
  auVar17 = pmulhuw(auVar15 << 8,__LC1);
  auVar15 = ZEXT116((byte)((uint)uVar2 >> 0x18)) << 0x38;
  auVar4._1_10_ = auVar15._6_10_;
  auVar4[0] = (char)((uint)uVar2 >> 0x10);
  auVar4._11_5_ = 0;
  auVar3._1_12_ = SUB1612(auVar4 << 0x28,4);
  auVar3[0] = (char)((uint)uVar2 >> 8);
  auVar3._13_3_ = 0;
  bVar22 = (byte)uVar2;
  auVar24._1_14_ = SUB1614(auVar3 << 0x18,2);
  auVar24[0] = bVar22;
  auVar24[0xf] = 0;
  auVar24 = auVar24 << 8;
  uVar2 = *param_3;
  auVar27 = ZEXT116((byte)((uint)uVar2 >> 0x18)) << 0x38;
  auVar6._1_10_ = auVar27._6_10_;
  auVar6[0] = (char)((uint)uVar2 >> 0x10);
  auVar6._11_5_ = 0;
  auVar5._1_12_ = SUB1612(auVar6 << 0x28,4);
  auVar5[0] = (char)((uint)uVar2 >> 8);
  auVar5._13_3_ = 0;
  bVar23 = (byte)uVar2;
  auVar26._1_14_ = SUB1614(auVar5 << 0x18,2);
  auVar26[0] = bVar23;
  auVar26[0xf] = 0;
  auVar26 = auVar26 << 8;
  uVar16 = auVar15._6_2_;
  auVar14._0_12_ = auVar24._0_12_;
  auVar14._12_2_ = uVar16;
  auVar14._14_2_ = uVar16;
  uVar16 = SUB162(auVar4 << 0x28,4);
  auVar13._12_4_ = auVar14._12_4_;
  auVar13._0_10_ = auVar24._0_10_;
  auVar13._10_2_ = uVar16;
  auVar12._10_6_ = auVar13._10_6_;
  auVar12._0_8_ = auVar24._0_8_;
  auVar12._8_2_ = uVar16;
  uVar16 = SUB162(auVar3 << 0x18,2);
  auVar7._7_8_ = auVar12._8_8_;
  auVar7._5_2_ = uVar16;
  auVar7._3_2_ = uVar16;
  auVar7._1_2_ = (ushort)bVar22 << 8;
  auVar7[0] = bVar22;
  auVar7[0xf] = 0;
  uVar16 = auVar27._6_2_;
  auVar21._0_12_ = auVar26._0_12_;
  auVar21._12_2_ = uVar16;
  auVar21._14_2_ = uVar16;
  uVar16 = SUB162(auVar6 << 0x28,4);
  auVar20._12_4_ = auVar21._12_4_;
  auVar20._0_10_ = auVar26._0_10_;
  auVar20._10_2_ = uVar16;
  auVar19._10_6_ = auVar20._10_6_;
  auVar19._0_8_ = auVar26._0_8_;
  auVar19._8_2_ = uVar16;
  uVar16 = SUB162(auVar5 << 0x18,2);
  auVar8._7_8_ = auVar19._8_8_;
  auVar8._5_2_ = uVar16;
  auVar8._3_2_ = uVar16;
  auVar8._1_2_ = (ushort)bVar23 << 8;
  auVar8[0] = bVar23;
  auVar8[0xf] = 0;
  auVar15 = pmulhuw(auVar7 << 8,__LC5);
  auVar15 = paddusw(auVar15,auVar17);
  auVar24 = pmulhuw(auVar8 << 8,__LC2);
  auVar15 = psubusw(auVar15,__LC6);
  auVar25._0_2_ = auVar24._0_2_ + auVar17._0_2_ + __LC7;
  auVar25._2_2_ = auVar24._2_2_ + auVar17._2_2_ + _UNK_00102c12;
  auVar25._4_2_ = auVar24._4_2_ + auVar17._4_2_ + _UNK_00102c14;
  auVar25._6_2_ = auVar24._6_2_ + auVar17._6_2_ + _UNK_00102c16;
  auVar25._8_2_ = auVar24._8_2_ + auVar17._8_2_ + _UNK_00102c18;
  auVar25._10_2_ = auVar24._10_2_ + auVar17._10_2_ + _UNK_00102c1a;
  auVar25._12_2_ = auVar24._12_2_ + auVar17._12_2_ + _UNK_00102c1c;
  auVar25._14_2_ = auVar24._14_2_ + auVar17._14_2_ + _UNK_00102c1e;
  auVar27 = pmulhuw(auVar7 << 8,__LC3);
  auVar24 = pmulhuw(auVar8 << 8,__LC4);
  auVar26 = psraw(auVar25,6);
  auVar18._0_2_ = (auVar17._0_2_ + __LC8) - (auVar24._0_2_ + auVar27._0_2_);
  auVar18._2_2_ = (auVar17._2_2_ + _UNK_00102c22) - (auVar24._2_2_ + auVar27._2_2_);
  auVar18._4_2_ = (auVar17._4_2_ + _UNK_00102c24) - (auVar24._4_2_ + auVar27._4_2_);
  auVar18._6_2_ = (auVar17._6_2_ + _UNK_00102c26) - (auVar24._6_2_ + auVar27._6_2_);
  auVar18._8_2_ = (auVar17._8_2_ + _UNK_00102c28) - (auVar24._8_2_ + auVar27._8_2_);
  auVar18._10_2_ = (auVar17._10_2_ + _UNK_00102c2a) - (auVar24._10_2_ + auVar27._10_2_);
  auVar18._12_2_ = (auVar17._12_2_ + _UNK_00102c2c) - (auVar24._12_2_ + auVar27._12_2_);
  auVar18._14_2_ = (auVar17._14_2_ + _UNK_00102c2e) - (auVar24._14_2_ + auVar27._14_2_);
  auVar24 = psraw(auVar18,6);
  *param_4 = auVar26;
  *param_5 = auVar24;
  *param_6 = auVar15._0_2_ >> 6;
  param_6[1] = auVar15._2_2_ >> 6;
  param_6[2] = auVar15._4_2_ >> 6;
  param_6[3] = auVar15._6_2_ >> 6;
  param_6[4] = auVar15._8_2_ >> 6;
  param_6[5] = auVar15._10_2_ >> 6;
  param_6[6] = auVar15._12_2_ >> 6;
  param_6[7] = auVar15._14_2_ >> 6;
  return;
}



void YuvToRgbRow_SSE2(byte *param_1,byte *param_2,byte *param_3,char *param_4,int param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  long lVar8;
  byte *pbVar9;
  int iVar10;
  ulong uVar11;
  byte *pbVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  long in_FS_OFFSET;
  short local_168;
  short sStack_166;
  short sStack_164;
  short sStack_162;
  short sStack_160;
  short sStack_15e;
  short sStack_15c;
  short sStack_15a;
  short local_158;
  short sStack_156;
  short sStack_154;
  short sStack_152;
  short sStack_150;
  short sStack_14e;
  short sStack_14c;
  short sStack_14a;
  short local_148;
  short sStack_146;
  short sStack_144;
  short sStack_142;
  short sStack_140;
  short sStack_13e;
  short sStack_13c;
  short sStack_13a;
  short local_138;
  short sStack_136;
  short sStack_134;
  short sStack_132;
  short sStack_130;
  short sStack_12e;
  short sStack_12c;
  short sStack_12a;
  short local_128;
  short sStack_126;
  short sStack_124;
  short sStack_122;
  short sStack_120;
  short sStack_11e;
  short sStack_11c;
  short sStack_11a;
  short local_118;
  short sStack_116;
  short sStack_114;
  short sStack_112;
  short sStack_110;
  short sStack_10e;
  short sStack_10c;
  short sStack_10a;
  short local_108;
  short sStack_106;
  short sStack_104;
  short sStack_102;
  short sStack_100;
  short sStack_fe;
  short sStack_fc;
  short sStack_fa;
  short local_f8;
  short sStack_f6;
  short sStack_f4;
  short sStack_f2;
  short sStack_f0;
  short sStack_ee;
  short sStack_ec;
  short sStack_ea;
  short local_e8;
  short sStack_e6;
  short sStack_e4;
  short sStack_e2;
  short sStack_e0;
  short sStack_de;
  short sStack_dc;
  short sStack_da;
  short local_d8;
  short sStack_d6;
  short sStack_d4;
  short sStack_d2;
  short sStack_d0;
  short sStack_ce;
  short sStack_cc;
  short sStack_ca;
  short local_c8;
  short sStack_c6;
  short sStack_c4;
  short sStack_c2;
  short sStack_c0;
  short sStack_be;
  short sStack_bc;
  short sStack_ba;
  short local_b8;
  short sStack_b6;
  short sStack_b4;
  short sStack_b2;
  short sStack_b0;
  short sStack_ae;
  short sStack_ac;
  short sStack_aa;
  char local_a8;
  char cStack_a7;
  char cStack_a6;
  char cStack_a5;
  char cStack_a4;
  char cStack_a3;
  char cStack_a2;
  char cStack_a1;
  char cStack_a0;
  char cStack_9f;
  char cStack_9e;
  char cStack_9d;
  char cStack_9c;
  char cStack_9b;
  char cStack_9a;
  char cStack_99;
  char local_98;
  char cStack_97;
  char cStack_96;
  char cStack_95;
  char cStack_94;
  char cStack_93;
  char cStack_92;
  char cStack_91;
  char cStack_90;
  char cStack_8f;
  char cStack_8e;
  char cStack_8d;
  char cStack_8c;
  char cStack_8b;
  char cStack_8a;
  char cStack_89;
  char local_88;
  char cStack_87;
  char cStack_86;
  char cStack_85;
  char cStack_84;
  char cStack_83;
  char cStack_82;
  char cStack_81;
  char cStack_80;
  char cStack_7f;
  char cStack_7e;
  char cStack_7d;
  char cStack_7c;
  char cStack_7b;
  char cStack_7a;
  char cStack_79;
  char local_78;
  char cStack_77;
  char cStack_76;
  char cStack_75;
  char cStack_74;
  char cStack_73;
  char cStack_72;
  char cStack_71;
  char cStack_70;
  char cStack_6f;
  char cStack_6e;
  char cStack_6d;
  char cStack_6c;
  char cStack_6b;
  char cStack_6a;
  char cStack_69;
  char local_68;
  char cStack_67;
  char cStack_66;
  char cStack_65;
  char cStack_64;
  char cStack_63;
  char cStack_62;
  char cStack_61;
  char cStack_60;
  char cStack_5f;
  char cStack_5e;
  char cStack_5d;
  char cStack_5c;
  char cStack_5b;
  char cStack_5a;
  char cStack_59;
  char local_58;
  char cStack_57;
  char cStack_56;
  char cStack_55;
  char cStack_54;
  char cStack_53;
  char cStack_52;
  char cStack_51;
  char cStack_50;
  char cStack_4f;
  char cStack_4e;
  char cStack_4d;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 < 0x20) {
    iVar13 = 0;
  }
  else {
    uVar7 = (param_5 - 0x20U >> 5) + 1;
    uVar11 = (ulong)uVar7;
    pbVar12 = param_1 + uVar11 * 0x20;
    pbVar9 = param_3;
    pbVar14 = param_2;
    do {
      YUV420ToRGB_SSE2(param_1,pbVar14,pbVar9,&local_168,&local_128,&local_e8);
      YUV420ToRGB_SSE2(param_1 + 8,pbVar14 + 4,pbVar9 + 4,&local_158,&local_118,&local_d8);
      YUV420ToRGB_SSE2(param_1 + 0x10,pbVar14 + 8,pbVar9 + 8,&local_148,&local_108,&local_c8);
      pbVar1 = pbVar9 + 0xc;
      pbVar2 = pbVar14 + 0xc;
      pbVar3 = param_1 + 0x18;
      param_1 = param_1 + 0x20;
      pbVar14 = pbVar14 + 0x10;
      pbVar9 = pbVar9 + 0x10;
      YUV420ToRGB_SSE2(pbVar3,pbVar2,pbVar1,&local_138,&local_f8,&local_b8);
      local_a8 = (0 < local_168) * (local_168 < 0x100) * (char)local_168 - (0xff < local_168);
      cStack_a7 = (0 < sStack_166) * (sStack_166 < 0x100) * (char)sStack_166 - (0xff < sStack_166);
      cStack_a6 = (0 < sStack_164) * (sStack_164 < 0x100) * (char)sStack_164 - (0xff < sStack_164);
      cStack_a5 = (0 < sStack_162) * (sStack_162 < 0x100) * (char)sStack_162 - (0xff < sStack_162);
      cStack_a4 = (0 < sStack_160) * (sStack_160 < 0x100) * (char)sStack_160 - (0xff < sStack_160);
      cStack_a3 = (0 < sStack_15e) * (sStack_15e < 0x100) * (char)sStack_15e - (0xff < sStack_15e);
      cStack_a2 = (0 < sStack_15c) * (sStack_15c < 0x100) * (char)sStack_15c - (0xff < sStack_15c);
      cStack_a1 = (0 < sStack_15a) * (sStack_15a < 0x100) * (char)sStack_15a - (0xff < sStack_15a);
      cStack_a0 = (0 < local_158) * (local_158 < 0x100) * (char)local_158 - (0xff < local_158);
      cStack_9f = (0 < sStack_156) * (sStack_156 < 0x100) * (char)sStack_156 - (0xff < sStack_156);
      cStack_9e = (0 < sStack_154) * (sStack_154 < 0x100) * (char)sStack_154 - (0xff < sStack_154);
      cStack_9d = (0 < sStack_152) * (sStack_152 < 0x100) * (char)sStack_152 - (0xff < sStack_152);
      cStack_9c = (0 < sStack_150) * (sStack_150 < 0x100) * (char)sStack_150 - (0xff < sStack_150);
      cStack_9b = (0 < sStack_14e) * (sStack_14e < 0x100) * (char)sStack_14e - (0xff < sStack_14e);
      cStack_9a = (0 < sStack_14c) * (sStack_14c < 0x100) * (char)sStack_14c - (0xff < sStack_14c);
      cStack_99 = (0 < sStack_14a) * (sStack_14a < 0x100) * (char)sStack_14a - (0xff < sStack_14a);
      local_98 = (0 < local_148) * (local_148 < 0x100) * (char)local_148 - (0xff < local_148);
      cStack_97 = (0 < sStack_146) * (sStack_146 < 0x100) * (char)sStack_146 - (0xff < sStack_146);
      cStack_96 = (0 < sStack_144) * (sStack_144 < 0x100) * (char)sStack_144 - (0xff < sStack_144);
      cStack_95 = (0 < sStack_142) * (sStack_142 < 0x100) * (char)sStack_142 - (0xff < sStack_142);
      cStack_94 = (0 < sStack_140) * (sStack_140 < 0x100) * (char)sStack_140 - (0xff < sStack_140);
      cStack_93 = (0 < sStack_13e) * (sStack_13e < 0x100) * (char)sStack_13e - (0xff < sStack_13e);
      cStack_92 = (0 < sStack_13c) * (sStack_13c < 0x100) * (char)sStack_13c - (0xff < sStack_13c);
      cStack_91 = (0 < sStack_13a) * (sStack_13a < 0x100) * (char)sStack_13a - (0xff < sStack_13a);
      cStack_90 = (0 < local_138) * (local_138 < 0x100) * (char)local_138 - (0xff < local_138);
      cStack_8f = (0 < sStack_136) * (sStack_136 < 0x100) * (char)sStack_136 - (0xff < sStack_136);
      cStack_8e = (0 < sStack_134) * (sStack_134 < 0x100) * (char)sStack_134 - (0xff < sStack_134);
      cStack_8d = (0 < sStack_132) * (sStack_132 < 0x100) * (char)sStack_132 - (0xff < sStack_132);
      cStack_8c = (0 < sStack_130) * (sStack_130 < 0x100) * (char)sStack_130 - (0xff < sStack_130);
      cStack_8b = (0 < sStack_12e) * (sStack_12e < 0x100) * (char)sStack_12e - (0xff < sStack_12e);
      cStack_8a = (0 < sStack_12c) * (sStack_12c < 0x100) * (char)sStack_12c - (0xff < sStack_12c);
      cStack_89 = (0 < sStack_12a) * (sStack_12a < 0x100) * (char)sStack_12a - (0xff < sStack_12a);
      local_88 = (0 < local_128) * (local_128 < 0x100) * (char)local_128 - (0xff < local_128);
      cStack_87 = (0 < sStack_126) * (sStack_126 < 0x100) * (char)sStack_126 - (0xff < sStack_126);
      cStack_86 = (0 < sStack_124) * (sStack_124 < 0x100) * (char)sStack_124 - (0xff < sStack_124);
      cStack_85 = (0 < sStack_122) * (sStack_122 < 0x100) * (char)sStack_122 - (0xff < sStack_122);
      cStack_84 = (0 < sStack_120) * (sStack_120 < 0x100) * (char)sStack_120 - (0xff < sStack_120);
      cStack_83 = (0 < sStack_11e) * (sStack_11e < 0x100) * (char)sStack_11e - (0xff < sStack_11e);
      cStack_82 = (0 < sStack_11c) * (sStack_11c < 0x100) * (char)sStack_11c - (0xff < sStack_11c);
      cStack_81 = (0 < sStack_11a) * (sStack_11a < 0x100) * (char)sStack_11a - (0xff < sStack_11a);
      cStack_80 = (0 < local_118) * (local_118 < 0x100) * (char)local_118 - (0xff < local_118);
      cStack_7f = (0 < sStack_116) * (sStack_116 < 0x100) * (char)sStack_116 - (0xff < sStack_116);
      cStack_7e = (0 < sStack_114) * (sStack_114 < 0x100) * (char)sStack_114 - (0xff < sStack_114);
      cStack_7d = (0 < sStack_112) * (sStack_112 < 0x100) * (char)sStack_112 - (0xff < sStack_112);
      cStack_7c = (0 < sStack_110) * (sStack_110 < 0x100) * (char)sStack_110 - (0xff < sStack_110);
      cStack_7b = (0 < sStack_10e) * (sStack_10e < 0x100) * (char)sStack_10e - (0xff < sStack_10e);
      cStack_7a = (0 < sStack_10c) * (sStack_10c < 0x100) * (char)sStack_10c - (0xff < sStack_10c);
      cStack_79 = (0 < sStack_10a) * (sStack_10a < 0x100) * (char)sStack_10a - (0xff < sStack_10a);
      local_78 = (0 < local_108) * (local_108 < 0x100) * (char)local_108 - (0xff < local_108);
      cStack_77 = (0 < sStack_106) * (sStack_106 < 0x100) * (char)sStack_106 - (0xff < sStack_106);
      cStack_76 = (0 < sStack_104) * (sStack_104 < 0x100) * (char)sStack_104 - (0xff < sStack_104);
      cStack_75 = (0 < sStack_102) * (sStack_102 < 0x100) * (char)sStack_102 - (0xff < sStack_102);
      cStack_74 = (0 < sStack_100) * (sStack_100 < 0x100) * (char)sStack_100 - (0xff < sStack_100);
      cStack_73 = (0 < sStack_fe) * (sStack_fe < 0x100) * (char)sStack_fe - (0xff < sStack_fe);
      cStack_72 = (0 < sStack_fc) * (sStack_fc < 0x100) * (char)sStack_fc - (0xff < sStack_fc);
      cStack_71 = (0 < sStack_fa) * (sStack_fa < 0x100) * (char)sStack_fa - (0xff < sStack_fa);
      cStack_70 = (0 < local_f8) * (local_f8 < 0x100) * (char)local_f8 - (0xff < local_f8);
      cStack_6f = (0 < sStack_f6) * (sStack_f6 < 0x100) * (char)sStack_f6 - (0xff < sStack_f6);
      cStack_6e = (0 < sStack_f4) * (sStack_f4 < 0x100) * (char)sStack_f4 - (0xff < sStack_f4);
      cStack_6d = (0 < sStack_f2) * (sStack_f2 < 0x100) * (char)sStack_f2 - (0xff < sStack_f2);
      cStack_6c = (0 < sStack_f0) * (sStack_f0 < 0x100) * (char)sStack_f0 - (0xff < sStack_f0);
      cStack_6b = (0 < sStack_ee) * (sStack_ee < 0x100) * (char)sStack_ee - (0xff < sStack_ee);
      cStack_6a = (0 < sStack_ec) * (sStack_ec < 0x100) * (char)sStack_ec - (0xff < sStack_ec);
      cStack_69 = (0 < sStack_ea) * (sStack_ea < 0x100) * (char)sStack_ea - (0xff < sStack_ea);
      local_68 = (0 < local_e8) * (local_e8 < 0x100) * (char)local_e8 - (0xff < local_e8);
      cStack_67 = (0 < sStack_e6) * (sStack_e6 < 0x100) * (char)sStack_e6 - (0xff < sStack_e6);
      cStack_66 = (0 < sStack_e4) * (sStack_e4 < 0x100) * (char)sStack_e4 - (0xff < sStack_e4);
      cStack_65 = (0 < sStack_e2) * (sStack_e2 < 0x100) * (char)sStack_e2 - (0xff < sStack_e2);
      cStack_64 = (0 < sStack_e0) * (sStack_e0 < 0x100) * (char)sStack_e0 - (0xff < sStack_e0);
      cStack_63 = (0 < sStack_de) * (sStack_de < 0x100) * (char)sStack_de - (0xff < sStack_de);
      cStack_62 = (0 < sStack_dc) * (sStack_dc < 0x100) * (char)sStack_dc - (0xff < sStack_dc);
      cStack_61 = (0 < sStack_da) * (sStack_da < 0x100) * (char)sStack_da - (0xff < sStack_da);
      cStack_60 = (0 < local_d8) * (local_d8 < 0x100) * (char)local_d8 - (0xff < local_d8);
      cStack_5f = (0 < sStack_d6) * (sStack_d6 < 0x100) * (char)sStack_d6 - (0xff < sStack_d6);
      cStack_5e = (0 < sStack_d4) * (sStack_d4 < 0x100) * (char)sStack_d4 - (0xff < sStack_d4);
      cStack_5d = (0 < sStack_d2) * (sStack_d2 < 0x100) * (char)sStack_d2 - (0xff < sStack_d2);
      cStack_5c = (0 < sStack_d0) * (sStack_d0 < 0x100) * (char)sStack_d0 - (0xff < sStack_d0);
      cStack_5b = (0 < sStack_ce) * (sStack_ce < 0x100) * (char)sStack_ce - (0xff < sStack_ce);
      cStack_5a = (0 < sStack_cc) * (sStack_cc < 0x100) * (char)sStack_cc - (0xff < sStack_cc);
      cStack_59 = (0 < sStack_ca) * (sStack_ca < 0x100) * (char)sStack_ca - (0xff < sStack_ca);
      local_58 = (0 < local_c8) * (local_c8 < 0x100) * (char)local_c8 - (0xff < local_c8);
      cStack_57 = (0 < sStack_c6) * (sStack_c6 < 0x100) * (char)sStack_c6 - (0xff < sStack_c6);
      cStack_56 = (0 < sStack_c4) * (sStack_c4 < 0x100) * (char)sStack_c4 - (0xff < sStack_c4);
      cStack_55 = (0 < sStack_c2) * (sStack_c2 < 0x100) * (char)sStack_c2 - (0xff < sStack_c2);
      cStack_54 = (0 < sStack_c0) * (sStack_c0 < 0x100) * (char)sStack_c0 - (0xff < sStack_c0);
      cStack_53 = (0 < sStack_be) * (sStack_be < 0x100) * (char)sStack_be - (0xff < sStack_be);
      cStack_52 = (0 < sStack_bc) * (sStack_bc < 0x100) * (char)sStack_bc - (0xff < sStack_bc);
      cStack_51 = (0 < sStack_ba) * (sStack_ba < 0x100) * (char)sStack_ba - (0xff < sStack_ba);
      cStack_50 = (0 < local_b8) * (local_b8 < 0x100) * (char)local_b8 - (0xff < local_b8);
      cStack_4f = (0 < sStack_b6) * (sStack_b6 < 0x100) * (char)sStack_b6 - (0xff < sStack_b6);
      cStack_4e = (0 < sStack_b4) * (sStack_b4 < 0x100) * (char)sStack_b4 - (0xff < sStack_b4);
      cStack_4d = (0 < sStack_b2) * (sStack_b2 < 0x100) * (char)sStack_b2 - (0xff < sStack_b2);
      cStack_4c = (0 < sStack_b0) * (sStack_b0 < 0x100) * (char)sStack_b0 - (0xff < sStack_b0);
      cStack_4b = (0 < sStack_ae) * (sStack_ae < 0x100) * (char)sStack_ae - (0xff < sStack_ae);
      cStack_4a = (0 < sStack_ac) * (sStack_ac < 0x100) * (char)sStack_ac - (0xff < sStack_ac);
      cStack_49 = (0 < sStack_aa) * (sStack_aa < 0x100) * (char)sStack_aa - (0xff < sStack_aa);
      lVar8 = VP8PlanarTo24b_SSE2(&local_a8,&local_98,&local_88,&local_78,&local_68,&local_58);
      *(ulong *)(lVar8 + -0x60) =
           CONCAT17(cStack_a1,
                    CONCAT16(cStack_a2,
                             CONCAT15(cStack_a3,
                                      CONCAT14(cStack_a4,
                                               CONCAT13(cStack_a5,
                                                        CONCAT12(cStack_a6,
                                                                 CONCAT11(cStack_a7,local_a8)))))));
      *(ulong *)(lVar8 + -0x58) =
           CONCAT17(cStack_99,
                    CONCAT16(cStack_9a,
                             CONCAT15(cStack_9b,
                                      CONCAT14(cStack_9c,
                                               CONCAT13(cStack_9d,
                                                        CONCAT12(cStack_9e,
                                                                 CONCAT11(cStack_9f,cStack_a0)))))))
      ;
      *(ulong *)(lVar8 + -0x50) =
           CONCAT17(cStack_91,
                    CONCAT16(cStack_92,
                             CONCAT15(cStack_93,
                                      CONCAT14(cStack_94,
                                               CONCAT13(cStack_95,
                                                        CONCAT12(cStack_96,
                                                                 CONCAT11(cStack_97,local_98)))))));
      *(ulong *)(lVar8 + -0x48) =
           CONCAT17(cStack_89,
                    CONCAT16(cStack_8a,
                             CONCAT15(cStack_8b,
                                      CONCAT14(cStack_8c,
                                               CONCAT13(cStack_8d,
                                                        CONCAT12(cStack_8e,
                                                                 CONCAT11(cStack_8f,cStack_90)))))))
      ;
      *(ulong *)(lVar8 + -0x40) =
           CONCAT17(cStack_81,
                    CONCAT16(cStack_82,
                             CONCAT15(cStack_83,
                                      CONCAT14(cStack_84,
                                               CONCAT13(cStack_85,
                                                        CONCAT12(cStack_86,
                                                                 CONCAT11(cStack_87,local_88)))))));
      *(ulong *)(lVar8 + -0x38) =
           CONCAT17(cStack_79,
                    CONCAT16(cStack_7a,
                             CONCAT15(cStack_7b,
                                      CONCAT14(cStack_7c,
                                               CONCAT13(cStack_7d,
                                                        CONCAT12(cStack_7e,
                                                                 CONCAT11(cStack_7f,cStack_80)))))))
      ;
      *(ulong *)(lVar8 + -0x30) =
           CONCAT17(cStack_71,
                    CONCAT16(cStack_72,
                             CONCAT15(cStack_73,
                                      CONCAT14(cStack_74,
                                               CONCAT13(cStack_75,
                                                        CONCAT12(cStack_76,
                                                                 CONCAT11(cStack_77,local_78)))))));
      *(ulong *)(lVar8 + -0x28) =
           CONCAT17(cStack_69,
                    CONCAT16(cStack_6a,
                             CONCAT15(cStack_6b,
                                      CONCAT14(cStack_6c,
                                               CONCAT13(cStack_6d,
                                                        CONCAT12(cStack_6e,
                                                                 CONCAT11(cStack_6f,cStack_70)))))))
      ;
      *(ulong *)(lVar8 + -0x20) =
           CONCAT17(cStack_61,
                    CONCAT16(cStack_62,
                             CONCAT15(cStack_63,
                                      CONCAT14(cStack_64,
                                               CONCAT13(cStack_65,
                                                        CONCAT12(cStack_66,
                                                                 CONCAT11(cStack_67,local_68)))))));
      *(ulong *)(lVar8 + -0x18) =
           CONCAT17(cStack_59,
                    CONCAT16(cStack_5a,
                             CONCAT15(cStack_5b,
                                      CONCAT14(cStack_5c,
                                               CONCAT13(cStack_5d,
                                                        CONCAT12(cStack_5e,
                                                                 CONCAT11(cStack_5f,cStack_60)))))))
      ;
      *(ulong *)(lVar8 + -0x10) =
           CONCAT17(cStack_51,
                    CONCAT16(cStack_52,
                             CONCAT15(cStack_53,
                                      CONCAT14(cStack_54,
                                               CONCAT13(cStack_55,
                                                        CONCAT12(cStack_56,
                                                                 CONCAT11(cStack_57,local_58)))))));
      *(ulong *)(lVar8 + -8) =
           CONCAT17(cStack_49,
                    CONCAT16(cStack_4a,
                             CONCAT15(cStack_4b,
                                      CONCAT14(cStack_4c,
                                               CONCAT13(cStack_4d,
                                                        CONCAT12(cStack_4e,
                                                                 CONCAT11(cStack_4f,cStack_50)))))))
      ;
    } while (param_1 != pbVar12);
    param_2 = param_2 + uVar11 * 0x10;
    param_3 = param_3 + uVar11 * 0x10;
    iVar13 = uVar7 * 0x20;
    param_4 = param_4 + uVar11 * 0x60;
    param_1 = pbVar12;
  }
  if (iVar13 < param_5) {
    iVar15 = (int)param_1;
    pbVar12 = param_1 + (uint)(param_5 - iVar13);
    do {
      bVar4 = *param_3;
      bVar5 = *param_2;
      iVar10 = (int)((uint)*param_1 * 0x4a85) >> 8;
      uVar7 = iVar10 + -0x379a + ((int)((uint)bVar4 * 0x6625) >> 8);
      if (uVar7 < 0x4000) {
        cVar6 = (char)((int)uVar7 >> 6);
      }
      else {
        cVar6 = (char)~(byte)(uVar7 >> 0x18) >> 7;
      }
      *param_4 = cVar6;
      uVar7 = ((iVar10 - ((int)((uint)bVar5 * 0x1913) >> 8)) - ((int)((uint)bVar4 * 0x3408) >> 8)) +
              0x2204;
      if (uVar7 < 0x4000) {
        cVar6 = (char)((int)uVar7 >> 6);
      }
      else {
        cVar6 = (char)~(byte)(uVar7 >> 0x18) >> 7;
      }
      param_4[1] = cVar6;
      uVar7 = iVar10 + -0x4515 + ((int)((uint)bVar5 * 0x811a) >> 8);
      if (uVar7 < 0x4000) {
        cVar6 = (char)((int)uVar7 >> 6);
      }
      else {
        cVar6 = (char)~(byte)(uVar7 >> 0x18) >> 7;
      }
      uVar7 = (iVar13 - iVar15) + (int)param_1 & 1;
      param_1 = param_1 + 1;
      param_4[2] = cVar6;
      param_4 = param_4 + 3;
      param_2 = param_2 + uVar7;
      param_3 = param_3 + uVar7;
    } while (pbVar12 != param_1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void YuvToBgraRow_SSE2(byte *param_1,byte *param_2,byte *param_3,undefined1 (*param_4) [16],
                      int param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [12];
  unkbyte10 Var6;
  unkbyte9 Var7;
  undefined6 uVar8;
  undefined4 uVar9;
  undefined2 uVar10;
  char cVar11;
  ulong uVar12;
  byte *pbVar13;
  uint uVar14;
  undefined1 (*pauVar15) [16];
  int iVar16;
  byte *pbVar17;
  uint uVar18;
  long in_FS_OFFSET;
  undefined2 uVar19;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  undefined1 auVar38 [16];
  short local_78;
  short sStack_76;
  short sStack_74;
  short sStack_72;
  short sStack_70;
  short sStack_6e;
  short sStack_6c;
  short sStack_6a;
  short local_68;
  short sStack_66;
  short sStack_64;
  short sStack_62;
  short sStack_60;
  short sStack_5e;
  short sStack_5c;
  short sStack_5a;
  short local_58;
  short sStack_56;
  short sStack_54;
  short sStack_52;
  short sStack_50;
  short sStack_4e;
  short sStack_4c;
  short sStack_4a;
  long local_40;
  undefined4 uVar20;
  undefined6 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [12];
  undefined1 auVar24 [14];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar13 = (byte *)0x0;
  if (param_5 < 8) {
    iVar16 = 0;
    pbVar17 = param_2;
  }
  else {
    uVar18 = (param_5 - 8U >> 3) + 1;
    uVar12 = (ulong)uVar18;
    pbVar1 = param_1 + uVar12 * 8;
    pbVar13 = param_3;
    pauVar15 = param_4;
    pbVar17 = param_2;
    sVar30 = __LC9;
    sVar31 = _UNK_00102ba2;
    sVar32 = _UNK_00102ba4;
    sVar33 = _UNK_00102ba6;
    sVar34 = _UNK_00102ba8;
    sVar35 = _UNK_00102baa;
    sVar36 = _UNK_00102bac;
    sVar37 = _UNK_00102bae;
    do {
      auVar38 = YUV420ToRGB_SSE2(param_1,param_2,pbVar13,&local_78);
      param_1 = auVar38._0_8_;
      param_2 = param_2 + 4;
      cVar11 = (0 < sStack_4a) * (sStack_4a < 0x100) * (char)sStack_4a - (0xff < sStack_4a);
      pbVar13 = (byte *)(auVar38._8_8_ + 4);
      uVar19 = CONCAT11((0 < sVar30) * (sVar30 < 0x100) * (char)sVar30 - (0xff < sVar30),
                        (0 < local_78) * (local_78 < 0x100) * (char)local_78 - (0xff < local_78));
      uVar20 = CONCAT13((0 < sVar31) * (sVar31 < 0x100) * (char)sVar31 - (0xff < sVar31),
                        CONCAT12((0 < sStack_76) * (sStack_76 < 0x100) * (char)sStack_76 -
                                 (0xff < sStack_76),uVar19));
      uVar21 = CONCAT15((0 < sVar32) * (sVar32 < 0x100) * (char)sVar32 - (0xff < sVar32),
                        CONCAT14((0 < sStack_74) * (sStack_74 < 0x100) * (char)sStack_74 -
                                 (0xff < sStack_74),uVar20));
      uVar22 = CONCAT17((0 < sVar33) * (sVar33 < 0x100) * (char)sVar33 - (0xff < sVar33),
                        CONCAT16((0 < sStack_72) * (sStack_72 < 0x100) * (char)sStack_72 -
                                 (0xff < sStack_72),uVar21));
      auVar23._0_10_ =
           CONCAT19((0 < sVar34) * (sVar34 < 0x100) * (char)sVar34 - (0xff < sVar34),
                    CONCAT18((0 < sStack_70) * (sStack_70 < 0x100) * (char)sStack_70 -
                             (0xff < sStack_70),uVar22));
      auVar23[10] = (0 < sStack_6e) * (sStack_6e < 0x100) * (char)sStack_6e - (0xff < sStack_6e);
      auVar23[0xb] = (0 < sVar35) * (sVar35 < 0x100) * (char)sVar35 - (0xff < sVar35);
      auVar24[0xc] = (0 < sStack_6c) * (sStack_6c < 0x100) * (char)sStack_6c - (0xff < sStack_6c);
      auVar24._0_12_ = auVar23;
      auVar24[0xd] = (0 < sVar36) * (sVar36 < 0x100) * (char)sVar36 - (0xff < sVar36);
      auVar38[0xe] = (0 < sStack_6a) * (sStack_6a < 0x100) * (char)sStack_6a - (0xff < sStack_6a);
      auVar38._0_14_ = auVar24;
      auVar38[0xf] = (0 < sVar37) * (sVar37 < 0x100) * (char)sVar37 - (0xff < sVar37);
      uVar10 = CONCAT11((0 < sStack_5a) * (sStack_5a < 0x100) * (char)sStack_5a - (0xff < sStack_5a)
                        ,cVar11);
      uVar9 = CONCAT31(CONCAT21(uVar10,(0 < sStack_5c) * (sStack_5c < 0x100) * (char)sStack_5c -
                                       (0xff < sStack_5c)),
                       (0 < sStack_4c) * (sStack_4c < 0x100) * (char)sStack_4c - (0xff < sStack_4c))
      ;
      uVar8 = CONCAT51(CONCAT41(uVar9,(0 < sStack_5e) * (sStack_5e < 0x100) * (char)sStack_5e -
                                      (0xff < sStack_5e)),
                       (0 < sStack_4e) * (sStack_4e < 0x100) * (char)sStack_4e - (0xff < sStack_4e))
      ;
      Var7 = CONCAT72(CONCAT61(uVar8,(0 < sStack_60) * (sStack_60 < 0x100) * (char)sStack_60 -
                                     (0xff < sStack_60)),
                      CONCAT11((0 < sStack_50) * (sStack_50 < 0x100) * (char)sStack_50 -
                               (0xff < sStack_50),cVar11));
      Var6 = CONCAT91(CONCAT81((long)((unkuint9)Var7 >> 8),
                               (0 < sStack_62) * (sStack_62 < 0x100) * (char)sStack_62 -
                               (0xff < sStack_62)),
                      (0 < sStack_52) * (sStack_52 < 0x100) * (char)sStack_52 - (0xff < sStack_52));
      auVar5._2_10_ = Var6;
      auVar5[1] = (0 < sStack_64) * (sStack_64 < 0x100) * (char)sStack_64 - (0xff < sStack_64);
      auVar5[0] = (0 < sStack_54) * (sStack_54 < 0x100) * (char)sStack_54 - (0xff < sStack_54);
      auVar4._2_12_ = auVar5;
      auVar4[1] = (0 < sStack_66) * (sStack_66 < 0x100) * (char)sStack_66 - (0xff < sStack_66);
      auVar4[0] = (0 < sStack_56) * (sStack_56 < 0x100) * (char)sStack_56 - (0xff < sStack_56);
      auVar25._0_2_ =
           CONCAT11((0 < local_68) * (local_68 < 0x100) * (char)local_68 - (0xff < local_68),
                    (0 < local_58) * (local_58 < 0x100) * (char)local_58 - (0xff < local_58));
      auVar25._2_14_ = auVar4;
      auVar29._0_12_ = auVar25._0_12_;
      auVar29._12_2_ = (short)Var6;
      auVar29._14_2_ = (short)((ulong)uVar22 >> 0x30);
      auVar28._12_4_ = auVar29._12_4_;
      auVar28._0_10_ = auVar25._0_10_;
      auVar28._10_2_ = (short)((uint6)uVar21 >> 0x20);
      auVar27._10_6_ = auVar28._10_6_;
      auVar27._0_8_ = auVar25._0_8_;
      auVar27._8_2_ = auVar5._0_2_;
      auVar26._8_8_ = auVar27._8_8_;
      auVar26._6_2_ = (short)((uint)uVar20 >> 0x10);
      auVar26._4_2_ = auVar4._0_2_;
      auVar26._2_2_ = uVar19;
      auVar26._0_2_ = auVar25._0_2_;
      *(short *)pauVar15[1] = (short)((unkuint9)Var7 >> 8);
      *(short *)(pauVar15[1] + 2) = (short)((unkuint10)auVar23._0_10_ >> 0x40);
      *(short *)(pauVar15[1] + 4) = (short)uVar8;
      *(short *)(pauVar15[1] + 6) = auVar23._10_2_;
      *(short *)(pauVar15[1] + 8) = (short)uVar9;
      *(short *)(pauVar15[1] + 10) = auVar24._12_2_;
      *(undefined2 *)(pauVar15[1] + 0xc) = uVar10;
      *(short *)(pauVar15[1] + 0xe) = auVar38._14_2_;
      *pauVar15 = auVar26;
      pauVar15 = pauVar15 + 2;
    } while (param_1 != pbVar1);
    iVar16 = uVar18 * 8;
    param_3 = param_3 + uVar12 * 4;
    param_4 = param_4 + uVar12 * 2;
    pbVar17 = pbVar17 + uVar12 * 4;
    param_1 = pbVar1;
  }
  if (iVar16 < param_5) {
    uVar18 = param_5 - iVar16;
    iVar16 = iVar16 - (int)param_1;
    pbVar1 = param_1 + uVar18;
    do {
      bVar2 = *pbVar17;
      bVar3 = *param_3;
      uVar18 = (int)((uint)*param_1 * 0x4a85) >> 8;
      pbVar13 = (byte *)(ulong)uVar18;
      uVar14 = (uVar18 - 0x4515) + ((int)((uint)bVar2 * 0x811a) >> 8);
      if (uVar14 < 0x4000) {
        cVar11 = (char)((int)uVar14 >> 6);
      }
      else {
        cVar11 = (char)~(byte)(uVar14 >> 0x18) >> 7;
      }
      (*param_4)[0] = cVar11;
      uVar14 = ((uVar18 - ((int)((uint)bVar2 * 0x1913) >> 8)) - ((int)((uint)bVar3 * 0x3408) >> 8))
               + 0x2204;
      if (uVar14 < 0x4000) {
        cVar11 = (char)((int)uVar14 >> 6);
      }
      else {
        cVar11 = (char)~(byte)(uVar14 >> 0x18) >> 7;
      }
      (*param_4)[1] = cVar11;
      uVar18 = (uVar18 - 0x379a) + ((int)((uint)bVar3 * 0x6625) >> 8);
      if (uVar18 < 0x4000) {
        cVar11 = (char)((int)uVar18 >> 6);
      }
      else {
        cVar11 = (char)~(byte)(uVar18 >> 0x18) >> 7;
      }
      param_2 = (byte *)(ulong)(iVar16 + (int)param_1 & 1);
      param_1 = param_1 + 1;
      (*param_4)[2] = cVar11;
      (*param_4)[3] = 0xff;
      pbVar17 = pbVar17 + (long)param_2;
      param_3 = param_3 + (long)param_2;
      param_4 = (undefined1 (*) [16])(*param_4 + 4);
    } while (param_1 != pbVar1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar16,param_2,pbVar13);
}



void YuvToBgrRow_SSE2(byte *param_1,byte *param_2,byte *param_3,char *param_4,int param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  long lVar7;
  byte *pbVar8;
  int iVar9;
  ulong uVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  long in_FS_OFFSET;
  short local_168;
  short sStack_166;
  short sStack_164;
  short sStack_162;
  short sStack_160;
  short sStack_15e;
  short sStack_15c;
  short sStack_15a;
  short local_158;
  short sStack_156;
  short sStack_154;
  short sStack_152;
  short sStack_150;
  short sStack_14e;
  short sStack_14c;
  short sStack_14a;
  short local_148;
  short sStack_146;
  short sStack_144;
  short sStack_142;
  short sStack_140;
  short sStack_13e;
  short sStack_13c;
  short sStack_13a;
  short local_138;
  short sStack_136;
  short sStack_134;
  short sStack_132;
  short sStack_130;
  short sStack_12e;
  short sStack_12c;
  short sStack_12a;
  short local_128;
  short sStack_126;
  short sStack_124;
  short sStack_122;
  short sStack_120;
  short sStack_11e;
  short sStack_11c;
  short sStack_11a;
  short local_118;
  short sStack_116;
  short sStack_114;
  short sStack_112;
  short sStack_110;
  short sStack_10e;
  short sStack_10c;
  short sStack_10a;
  short local_108;
  short sStack_106;
  short sStack_104;
  short sStack_102;
  short sStack_100;
  short sStack_fe;
  short sStack_fc;
  short sStack_fa;
  short local_f8;
  short sStack_f6;
  short sStack_f4;
  short sStack_f2;
  short sStack_f0;
  short sStack_ee;
  short sStack_ec;
  short sStack_ea;
  short local_e8;
  short sStack_e6;
  short sStack_e4;
  short sStack_e2;
  short sStack_e0;
  short sStack_de;
  short sStack_dc;
  short sStack_da;
  short local_d8;
  short sStack_d6;
  short sStack_d4;
  short sStack_d2;
  short sStack_d0;
  short sStack_ce;
  short sStack_cc;
  short sStack_ca;
  short local_c8;
  short sStack_c6;
  short sStack_c4;
  short sStack_c2;
  short sStack_c0;
  short sStack_be;
  short sStack_bc;
  short sStack_ba;
  short local_b8;
  short sStack_b6;
  short sStack_b4;
  short sStack_b2;
  short sStack_b0;
  short sStack_ae;
  short sStack_ac;
  short sStack_aa;
  char local_a8;
  char cStack_a7;
  char cStack_a6;
  char cStack_a5;
  char cStack_a4;
  char cStack_a3;
  char cStack_a2;
  char cStack_a1;
  char cStack_a0;
  char cStack_9f;
  char cStack_9e;
  char cStack_9d;
  char cStack_9c;
  char cStack_9b;
  char cStack_9a;
  char cStack_99;
  char local_98;
  char cStack_97;
  char cStack_96;
  char cStack_95;
  char cStack_94;
  char cStack_93;
  char cStack_92;
  char cStack_91;
  char cStack_90;
  char cStack_8f;
  char cStack_8e;
  char cStack_8d;
  char cStack_8c;
  char cStack_8b;
  char cStack_8a;
  char cStack_89;
  char local_88;
  char cStack_87;
  char cStack_86;
  char cStack_85;
  char cStack_84;
  char cStack_83;
  char cStack_82;
  char cStack_81;
  char cStack_80;
  char cStack_7f;
  char cStack_7e;
  char cStack_7d;
  char cStack_7c;
  char cStack_7b;
  char cStack_7a;
  char cStack_79;
  char local_78;
  char cStack_77;
  char cStack_76;
  char cStack_75;
  char cStack_74;
  char cStack_73;
  char cStack_72;
  char cStack_71;
  char cStack_70;
  char cStack_6f;
  char cStack_6e;
  char cStack_6d;
  char cStack_6c;
  char cStack_6b;
  char cStack_6a;
  char cStack_69;
  char local_68;
  char cStack_67;
  char cStack_66;
  char cStack_65;
  char cStack_64;
  char cStack_63;
  char cStack_62;
  char cStack_61;
  char cStack_60;
  char cStack_5f;
  char cStack_5e;
  char cStack_5d;
  char cStack_5c;
  char cStack_5b;
  char cStack_5a;
  char cStack_59;
  char local_58;
  char cStack_57;
  char cStack_56;
  char cStack_55;
  char cStack_54;
  char cStack_53;
  char cStack_52;
  char cStack_51;
  char cStack_50;
  char cStack_4f;
  char cStack_4e;
  char cStack_4d;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 < 0x20) {
    iVar12 = 0;
  }
  else {
    uVar13 = (param_5 - 0x20U >> 5) + 1;
    uVar10 = (ulong)uVar13;
    pbVar11 = param_1 + uVar10 * 0x20;
    pbVar8 = param_3;
    pbVar14 = param_2;
    do {
      YUV420ToRGB_SSE2(param_1,pbVar14,pbVar8,&local_168,&local_128,&local_e8);
      YUV420ToRGB_SSE2(param_1 + 8,pbVar14 + 4,pbVar8 + 4,&local_158,&local_118,&local_d8);
      YUV420ToRGB_SSE2(param_1 + 0x10,pbVar14 + 8,pbVar8 + 8,&local_148,&local_108,&local_c8);
      pbVar1 = pbVar8 + 0xc;
      pbVar2 = pbVar14 + 0xc;
      pbVar3 = param_1 + 0x18;
      param_1 = param_1 + 0x20;
      pbVar14 = pbVar14 + 0x10;
      pbVar8 = pbVar8 + 0x10;
      YUV420ToRGB_SSE2(pbVar3,pbVar2,pbVar1,&local_138,&local_f8,&local_b8);
      local_a8 = (0 < local_e8) * (local_e8 < 0x100) * (char)local_e8 - (0xff < local_e8);
      cStack_a7 = (0 < sStack_e6) * (sStack_e6 < 0x100) * (char)sStack_e6 - (0xff < sStack_e6);
      cStack_a6 = (0 < sStack_e4) * (sStack_e4 < 0x100) * (char)sStack_e4 - (0xff < sStack_e4);
      cStack_a5 = (0 < sStack_e2) * (sStack_e2 < 0x100) * (char)sStack_e2 - (0xff < sStack_e2);
      cStack_a4 = (0 < sStack_e0) * (sStack_e0 < 0x100) * (char)sStack_e0 - (0xff < sStack_e0);
      cStack_a3 = (0 < sStack_de) * (sStack_de < 0x100) * (char)sStack_de - (0xff < sStack_de);
      cStack_a2 = (0 < sStack_dc) * (sStack_dc < 0x100) * (char)sStack_dc - (0xff < sStack_dc);
      cStack_a1 = (0 < sStack_da) * (sStack_da < 0x100) * (char)sStack_da - (0xff < sStack_da);
      cStack_a0 = (0 < local_d8) * (local_d8 < 0x100) * (char)local_d8 - (0xff < local_d8);
      cStack_9f = (0 < sStack_d6) * (sStack_d6 < 0x100) * (char)sStack_d6 - (0xff < sStack_d6);
      cStack_9e = (0 < sStack_d4) * (sStack_d4 < 0x100) * (char)sStack_d4 - (0xff < sStack_d4);
      cStack_9d = (0 < sStack_d2) * (sStack_d2 < 0x100) * (char)sStack_d2 - (0xff < sStack_d2);
      cStack_9c = (0 < sStack_d0) * (sStack_d0 < 0x100) * (char)sStack_d0 - (0xff < sStack_d0);
      cStack_9b = (0 < sStack_ce) * (sStack_ce < 0x100) * (char)sStack_ce - (0xff < sStack_ce);
      cStack_9a = (0 < sStack_cc) * (sStack_cc < 0x100) * (char)sStack_cc - (0xff < sStack_cc);
      cStack_99 = (0 < sStack_ca) * (sStack_ca < 0x100) * (char)sStack_ca - (0xff < sStack_ca);
      local_98 = (0 < local_c8) * (local_c8 < 0x100) * (char)local_c8 - (0xff < local_c8);
      cStack_97 = (0 < sStack_c6) * (sStack_c6 < 0x100) * (char)sStack_c6 - (0xff < sStack_c6);
      cStack_96 = (0 < sStack_c4) * (sStack_c4 < 0x100) * (char)sStack_c4 - (0xff < sStack_c4);
      cStack_95 = (0 < sStack_c2) * (sStack_c2 < 0x100) * (char)sStack_c2 - (0xff < sStack_c2);
      cStack_94 = (0 < sStack_c0) * (sStack_c0 < 0x100) * (char)sStack_c0 - (0xff < sStack_c0);
      cStack_93 = (0 < sStack_be) * (sStack_be < 0x100) * (char)sStack_be - (0xff < sStack_be);
      cStack_92 = (0 < sStack_bc) * (sStack_bc < 0x100) * (char)sStack_bc - (0xff < sStack_bc);
      cStack_91 = (0 < sStack_ba) * (sStack_ba < 0x100) * (char)sStack_ba - (0xff < sStack_ba);
      cStack_90 = (0 < local_b8) * (local_b8 < 0x100) * (char)local_b8 - (0xff < local_b8);
      cStack_8f = (0 < sStack_b6) * (sStack_b6 < 0x100) * (char)sStack_b6 - (0xff < sStack_b6);
      cStack_8e = (0 < sStack_b4) * (sStack_b4 < 0x100) * (char)sStack_b4 - (0xff < sStack_b4);
      cStack_8d = (0 < sStack_b2) * (sStack_b2 < 0x100) * (char)sStack_b2 - (0xff < sStack_b2);
      cStack_8c = (0 < sStack_b0) * (sStack_b0 < 0x100) * (char)sStack_b0 - (0xff < sStack_b0);
      cStack_8b = (0 < sStack_ae) * (sStack_ae < 0x100) * (char)sStack_ae - (0xff < sStack_ae);
      cStack_8a = (0 < sStack_ac) * (sStack_ac < 0x100) * (char)sStack_ac - (0xff < sStack_ac);
      cStack_89 = (0 < sStack_aa) * (sStack_aa < 0x100) * (char)sStack_aa - (0xff < sStack_aa);
      local_88 = (0 < local_128) * (local_128 < 0x100) * (char)local_128 - (0xff < local_128);
      cStack_87 = (0 < sStack_126) * (sStack_126 < 0x100) * (char)sStack_126 - (0xff < sStack_126);
      cStack_86 = (0 < sStack_124) * (sStack_124 < 0x100) * (char)sStack_124 - (0xff < sStack_124);
      cStack_85 = (0 < sStack_122) * (sStack_122 < 0x100) * (char)sStack_122 - (0xff < sStack_122);
      cStack_84 = (0 < sStack_120) * (sStack_120 < 0x100) * (char)sStack_120 - (0xff < sStack_120);
      cStack_83 = (0 < sStack_11e) * (sStack_11e < 0x100) * (char)sStack_11e - (0xff < sStack_11e);
      cStack_82 = (0 < sStack_11c) * (sStack_11c < 0x100) * (char)sStack_11c - (0xff < sStack_11c);
      cStack_81 = (0 < sStack_11a) * (sStack_11a < 0x100) * (char)sStack_11a - (0xff < sStack_11a);
      cStack_80 = (0 < local_118) * (local_118 < 0x100) * (char)local_118 - (0xff < local_118);
      cStack_7f = (0 < sStack_116) * (sStack_116 < 0x100) * (char)sStack_116 - (0xff < sStack_116);
      cStack_7e = (0 < sStack_114) * (sStack_114 < 0x100) * (char)sStack_114 - (0xff < sStack_114);
      cStack_7d = (0 < sStack_112) * (sStack_112 < 0x100) * (char)sStack_112 - (0xff < sStack_112);
      cStack_7c = (0 < sStack_110) * (sStack_110 < 0x100) * (char)sStack_110 - (0xff < sStack_110);
      cStack_7b = (0 < sStack_10e) * (sStack_10e < 0x100) * (char)sStack_10e - (0xff < sStack_10e);
      cStack_7a = (0 < sStack_10c) * (sStack_10c < 0x100) * (char)sStack_10c - (0xff < sStack_10c);
      cStack_79 = (0 < sStack_10a) * (sStack_10a < 0x100) * (char)sStack_10a - (0xff < sStack_10a);
      local_78 = (0 < local_108) * (local_108 < 0x100) * (char)local_108 - (0xff < local_108);
      cStack_77 = (0 < sStack_106) * (sStack_106 < 0x100) * (char)sStack_106 - (0xff < sStack_106);
      cStack_76 = (0 < sStack_104) * (sStack_104 < 0x100) * (char)sStack_104 - (0xff < sStack_104);
      cStack_75 = (0 < sStack_102) * (sStack_102 < 0x100) * (char)sStack_102 - (0xff < sStack_102);
      cStack_74 = (0 < sStack_100) * (sStack_100 < 0x100) * (char)sStack_100 - (0xff < sStack_100);
      cStack_73 = (0 < sStack_fe) * (sStack_fe < 0x100) * (char)sStack_fe - (0xff < sStack_fe);
      cStack_72 = (0 < sStack_fc) * (sStack_fc < 0x100) * (char)sStack_fc - (0xff < sStack_fc);
      cStack_71 = (0 < sStack_fa) * (sStack_fa < 0x100) * (char)sStack_fa - (0xff < sStack_fa);
      cStack_70 = (0 < local_f8) * (local_f8 < 0x100) * (char)local_f8 - (0xff < local_f8);
      cStack_6f = (0 < sStack_f6) * (sStack_f6 < 0x100) * (char)sStack_f6 - (0xff < sStack_f6);
      cStack_6e = (0 < sStack_f4) * (sStack_f4 < 0x100) * (char)sStack_f4 - (0xff < sStack_f4);
      cStack_6d = (0 < sStack_f2) * (sStack_f2 < 0x100) * (char)sStack_f2 - (0xff < sStack_f2);
      cStack_6c = (0 < sStack_f0) * (sStack_f0 < 0x100) * (char)sStack_f0 - (0xff < sStack_f0);
      cStack_6b = (0 < sStack_ee) * (sStack_ee < 0x100) * (char)sStack_ee - (0xff < sStack_ee);
      cStack_6a = (0 < sStack_ec) * (sStack_ec < 0x100) * (char)sStack_ec - (0xff < sStack_ec);
      cStack_69 = (0 < sStack_ea) * (sStack_ea < 0x100) * (char)sStack_ea - (0xff < sStack_ea);
      local_68 = (0 < local_168) * (local_168 < 0x100) * (char)local_168 - (0xff < local_168);
      cStack_67 = (0 < sStack_166) * (sStack_166 < 0x100) * (char)sStack_166 - (0xff < sStack_166);
      cStack_66 = (0 < sStack_164) * (sStack_164 < 0x100) * (char)sStack_164 - (0xff < sStack_164);
      cStack_65 = (0 < sStack_162) * (sStack_162 < 0x100) * (char)sStack_162 - (0xff < sStack_162);
      cStack_64 = (0 < sStack_160) * (sStack_160 < 0x100) * (char)sStack_160 - (0xff < sStack_160);
      cStack_63 = (0 < sStack_15e) * (sStack_15e < 0x100) * (char)sStack_15e - (0xff < sStack_15e);
      cStack_62 = (0 < sStack_15c) * (sStack_15c < 0x100) * (char)sStack_15c - (0xff < sStack_15c);
      cStack_61 = (0 < sStack_15a) * (sStack_15a < 0x100) * (char)sStack_15a - (0xff < sStack_15a);
      cStack_60 = (0 < local_158) * (local_158 < 0x100) * (char)local_158 - (0xff < local_158);
      cStack_5f = (0 < sStack_156) * (sStack_156 < 0x100) * (char)sStack_156 - (0xff < sStack_156);
      cStack_5e = (0 < sStack_154) * (sStack_154 < 0x100) * (char)sStack_154 - (0xff < sStack_154);
      cStack_5d = (0 < sStack_152) * (sStack_152 < 0x100) * (char)sStack_152 - (0xff < sStack_152);
      cStack_5c = (0 < sStack_150) * (sStack_150 < 0x100) * (char)sStack_150 - (0xff < sStack_150);
      cStack_5b = (0 < sStack_14e) * (sStack_14e < 0x100) * (char)sStack_14e - (0xff < sStack_14e);
      cStack_5a = (0 < sStack_14c) * (sStack_14c < 0x100) * (char)sStack_14c - (0xff < sStack_14c);
      cStack_59 = (0 < sStack_14a) * (sStack_14a < 0x100) * (char)sStack_14a - (0xff < sStack_14a);
      local_58 = (0 < local_148) * (local_148 < 0x100) * (char)local_148 - (0xff < local_148);
      cStack_57 = (0 < sStack_146) * (sStack_146 < 0x100) * (char)sStack_146 - (0xff < sStack_146);
      cStack_56 = (0 < sStack_144) * (sStack_144 < 0x100) * (char)sStack_144 - (0xff < sStack_144);
      cStack_55 = (0 < sStack_142) * (sStack_142 < 0x100) * (char)sStack_142 - (0xff < sStack_142);
      cStack_54 = (0 < sStack_140) * (sStack_140 < 0x100) * (char)sStack_140 - (0xff < sStack_140);
      cStack_53 = (0 < sStack_13e) * (sStack_13e < 0x100) * (char)sStack_13e - (0xff < sStack_13e);
      cStack_52 = (0 < sStack_13c) * (sStack_13c < 0x100) * (char)sStack_13c - (0xff < sStack_13c);
      cStack_51 = (0 < sStack_13a) * (sStack_13a < 0x100) * (char)sStack_13a - (0xff < sStack_13a);
      cStack_50 = (0 < local_138) * (local_138 < 0x100) * (char)local_138 - (0xff < local_138);
      cStack_4f = (0 < sStack_136) * (sStack_136 < 0x100) * (char)sStack_136 - (0xff < sStack_136);
      cStack_4e = (0 < sStack_134) * (sStack_134 < 0x100) * (char)sStack_134 - (0xff < sStack_134);
      cStack_4d = (0 < sStack_132) * (sStack_132 < 0x100) * (char)sStack_132 - (0xff < sStack_132);
      cStack_4c = (0 < sStack_130) * (sStack_130 < 0x100) * (char)sStack_130 - (0xff < sStack_130);
      cStack_4b = (0 < sStack_12e) * (sStack_12e < 0x100) * (char)sStack_12e - (0xff < sStack_12e);
      cStack_4a = (0 < sStack_12c) * (sStack_12c < 0x100) * (char)sStack_12c - (0xff < sStack_12c);
      cStack_49 = (0 < sStack_12a) * (sStack_12a < 0x100) * (char)sStack_12a - (0xff < sStack_12a);
      lVar7 = VP8PlanarTo24b_SSE2(&local_a8,&local_98,&local_88,&local_78,&local_68,&local_58);
      *(ulong *)(lVar7 + -0x60) =
           CONCAT17(cStack_a1,
                    CONCAT16(cStack_a2,
                             CONCAT15(cStack_a3,
                                      CONCAT14(cStack_a4,
                                               CONCAT13(cStack_a5,
                                                        CONCAT12(cStack_a6,
                                                                 CONCAT11(cStack_a7,local_a8)))))));
      *(ulong *)(lVar7 + -0x58) =
           CONCAT17(cStack_99,
                    CONCAT16(cStack_9a,
                             CONCAT15(cStack_9b,
                                      CONCAT14(cStack_9c,
                                               CONCAT13(cStack_9d,
                                                        CONCAT12(cStack_9e,
                                                                 CONCAT11(cStack_9f,cStack_a0)))))))
      ;
      *(ulong *)(lVar7 + -0x50) =
           CONCAT17(cStack_91,
                    CONCAT16(cStack_92,
                             CONCAT15(cStack_93,
                                      CONCAT14(cStack_94,
                                               CONCAT13(cStack_95,
                                                        CONCAT12(cStack_96,
                                                                 CONCAT11(cStack_97,local_98)))))));
      *(ulong *)(lVar7 + -0x48) =
           CONCAT17(cStack_89,
                    CONCAT16(cStack_8a,
                             CONCAT15(cStack_8b,
                                      CONCAT14(cStack_8c,
                                               CONCAT13(cStack_8d,
                                                        CONCAT12(cStack_8e,
                                                                 CONCAT11(cStack_8f,cStack_90)))))))
      ;
      *(ulong *)(lVar7 + -0x40) =
           CONCAT17(cStack_81,
                    CONCAT16(cStack_82,
                             CONCAT15(cStack_83,
                                      CONCAT14(cStack_84,
                                               CONCAT13(cStack_85,
                                                        CONCAT12(cStack_86,
                                                                 CONCAT11(cStack_87,local_88)))))));
      *(ulong *)(lVar7 + -0x38) =
           CONCAT17(cStack_79,
                    CONCAT16(cStack_7a,
                             CONCAT15(cStack_7b,
                                      CONCAT14(cStack_7c,
                                               CONCAT13(cStack_7d,
                                                        CONCAT12(cStack_7e,
                                                                 CONCAT11(cStack_7f,cStack_80)))))))
      ;
      *(ulong *)(lVar7 + -0x30) =
           CONCAT17(cStack_71,
                    CONCAT16(cStack_72,
                             CONCAT15(cStack_73,
                                      CONCAT14(cStack_74,
                                               CONCAT13(cStack_75,
                                                        CONCAT12(cStack_76,
                                                                 CONCAT11(cStack_77,local_78)))))));
      *(ulong *)(lVar7 + -0x28) =
           CONCAT17(cStack_69,
                    CONCAT16(cStack_6a,
                             CONCAT15(cStack_6b,
                                      CONCAT14(cStack_6c,
                                               CONCAT13(cStack_6d,
                                                        CONCAT12(cStack_6e,
                                                                 CONCAT11(cStack_6f,cStack_70)))))))
      ;
      *(ulong *)(lVar7 + -0x20) =
           CONCAT17(cStack_61,
                    CONCAT16(cStack_62,
                             CONCAT15(cStack_63,
                                      CONCAT14(cStack_64,
                                               CONCAT13(cStack_65,
                                                        CONCAT12(cStack_66,
                                                                 CONCAT11(cStack_67,local_68)))))));
      *(ulong *)(lVar7 + -0x18) =
           CONCAT17(cStack_59,
                    CONCAT16(cStack_5a,
                             CONCAT15(cStack_5b,
                                      CONCAT14(cStack_5c,
                                               CONCAT13(cStack_5d,
                                                        CONCAT12(cStack_5e,
                                                                 CONCAT11(cStack_5f,cStack_60)))))))
      ;
      *(ulong *)(lVar7 + -0x10) =
           CONCAT17(cStack_51,
                    CONCAT16(cStack_52,
                             CONCAT15(cStack_53,
                                      CONCAT14(cStack_54,
                                               CONCAT13(cStack_55,
                                                        CONCAT12(cStack_56,
                                                                 CONCAT11(cStack_57,local_58)))))));
      *(ulong *)(lVar7 + -8) =
           CONCAT17(cStack_49,
                    CONCAT16(cStack_4a,
                             CONCAT15(cStack_4b,
                                      CONCAT14(cStack_4c,
                                               CONCAT13(cStack_4d,
                                                        CONCAT12(cStack_4e,
                                                                 CONCAT11(cStack_4f,cStack_50)))))))
      ;
    } while (param_1 != pbVar11);
    param_2 = param_2 + uVar10 * 0x10;
    param_3 = param_3 + uVar10 * 0x10;
    iVar12 = uVar13 * 0x20;
    param_4 = param_4 + uVar10 * 0x60;
    param_1 = pbVar11;
  }
  if (iVar12 < param_5) {
    iVar15 = (int)param_1;
    pbVar11 = param_1 + (uint)(param_5 - iVar12);
    do {
      bVar4 = *param_2;
      bVar5 = *param_3;
      iVar9 = (int)((uint)*param_1 * 0x4a85) >> 8;
      uVar13 = iVar9 + -0x4515 + ((int)((uint)bVar4 * 0x811a) >> 8);
      if (uVar13 < 0x4000) {
        cVar6 = (char)((int)uVar13 >> 6);
      }
      else {
        cVar6 = (char)~(byte)(uVar13 >> 0x18) >> 7;
      }
      *param_4 = cVar6;
      uVar13 = ((iVar9 - ((int)((uint)bVar4 * 0x1913) >> 8)) - ((int)((uint)bVar5 * 0x3408) >> 8)) +
               0x2204;
      if (uVar13 < 0x4000) {
        cVar6 = (char)((int)uVar13 >> 6);
      }
      else {
        cVar6 = (char)~(byte)(uVar13 >> 0x18) >> 7;
      }
      param_4[1] = cVar6;
      uVar13 = iVar9 + -0x379a + ((int)((uint)bVar5 * 0x6625) >> 8);
      if (uVar13 < 0x4000) {
        cVar6 = (char)((int)uVar13 >> 6);
      }
      else {
        cVar6 = (char)~(byte)(uVar13 >> 0x18) >> 7;
      }
      uVar13 = (iVar12 - iVar15) + (int)param_1 & 1;
      param_1 = param_1 + 1;
      param_4[2] = cVar6;
      param_4 = param_4 + 3;
      param_2 = param_2 + uVar13;
      param_3 = param_3 + uVar13;
    } while (pbVar11 != param_1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void YUV444ToRGB_SSE2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,
                     undefined1 (*param_4) [16],undefined1 (*param_5) [16],ushort *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  auVar7[10] = 0;
  auVar7._0_10_ = SUB1610((undefined1  [16])0x0,0);
  auVar7[0xb] = (char)((ulong)uVar1 >> 0x28);
  auVar10[9] = (char)((ulong)uVar1 >> 0x20);
  auVar10._0_9_ = SUB169((undefined1  [16])0x0,0);
  auVar10._10_2_ = auVar7._10_2_;
  auVar13._9_3_ = auVar10._9_3_;
  auVar13._0_9_ = (unkuint9)0;
  auVar22._1_10_ = SUB1610(ZEXT516(CONCAT41(auVar13._8_4_,(char)((ulong)uVar1 >> 0x18))) << 0x38,6);
  auVar22[0] = (char)((ulong)uVar1 >> 0x10);
  auVar22._11_5_ = 0;
  auVar19._1_12_ = SUB1612(auVar22 << 0x28,4);
  auVar19[0] = (char)((ulong)uVar1 >> 8);
  auVar19._13_3_ = 0;
  auVar16._1_14_ = SUB1614(auVar19 << 0x18,2);
  auVar16[0] = (char)uVar1;
  auVar16[0xf] = 0;
  auVar16 = pmulhuw(auVar16 << 8,__LC1);
  auVar8[10] = 0;
  auVar8._0_10_ = SUB1610((undefined1  [16])0x0,0);
  auVar8[0xb] = (char)((ulong)uVar2 >> 0x28);
  auVar11[9] = (char)((ulong)uVar2 >> 0x20);
  auVar11._0_9_ = SUB169((undefined1  [16])0x0,0);
  auVar11._10_2_ = auVar8._10_2_;
  auVar14._9_3_ = auVar11._9_3_;
  auVar14._0_9_ = (unkuint9)0;
  auVar4._1_10_ = SUB1610(ZEXT516(CONCAT41(auVar14._8_4_,(char)((ulong)uVar2 >> 0x18))) << 0x38,6);
  auVar4[0] = (char)((ulong)uVar2 >> 0x10);
  auVar4._11_5_ = 0;
  auVar3._1_12_ = SUB1612(auVar4 << 0x28,4);
  auVar3[0] = (char)((ulong)uVar2 >> 8);
  auVar3._13_3_ = 0;
  auVar20._1_14_ = SUB1614(auVar3 << 0x18,2);
  auVar20[0] = (char)uVar2;
  auVar20[0xf] = 0;
  uVar1 = *param_3;
  auVar18 = pmulhuw(auVar20 << 8,__LC5);
  auVar19 = paddusw(auVar18,auVar16);
  auVar22 = pmulhuw(auVar20 << 8,__LC3);
  auVar9[10] = 0;
  auVar9._0_10_ = SUB1610((undefined1  [16])0x0,0);
  auVar9[0xb] = (char)((ulong)uVar1 >> 0x28);
  auVar12[9] = (char)((ulong)uVar1 >> 0x20);
  auVar12._0_9_ = SUB169((undefined1  [16])0x0,0);
  auVar12._10_2_ = auVar9._10_2_;
  auVar15._9_3_ = auVar12._9_3_;
  auVar15._0_9_ = (unkuint9)0;
  auVar6._1_10_ = SUB1610(ZEXT516(CONCAT41(auVar15._8_4_,(char)((ulong)uVar1 >> 0x18))) << 0x38,6);
  auVar6[0] = (char)((ulong)uVar1 >> 0x10);
  auVar6._11_5_ = 0;
  auVar5._1_12_ = SUB1612(auVar6 << 0x28,4);
  auVar5[0] = (char)((ulong)uVar1 >> 8);
  auVar5._13_3_ = 0;
  auVar18._1_14_ = SUB1614(auVar5 << 0x18,2);
  auVar18[0] = (char)uVar1;
  auVar18[0xf] = 0;
  auVar20 = psubusw(auVar19,__LC6);
  auVar19 = pmulhuw(auVar18 << 8,__LC2);
  auVar21._0_2_ = auVar19._0_2_ + auVar16._0_2_ + __LC7;
  auVar21._2_2_ = auVar19._2_2_ + auVar16._2_2_ + _UNK_00102c12;
  auVar21._4_2_ = auVar19._4_2_ + auVar16._4_2_ + _UNK_00102c14;
  auVar21._6_2_ = auVar19._6_2_ + auVar16._6_2_ + _UNK_00102c16;
  auVar21._8_2_ = auVar19._8_2_ + auVar16._8_2_ + _UNK_00102c18;
  auVar21._10_2_ = auVar19._10_2_ + auVar16._10_2_ + _UNK_00102c1a;
  auVar21._12_2_ = auVar19._12_2_ + auVar16._12_2_ + _UNK_00102c1c;
  auVar21._14_2_ = auVar19._14_2_ + auVar16._14_2_ + _UNK_00102c1e;
  auVar18 = pmulhuw(auVar18 << 8,__LC4);
  auVar17._0_2_ = (auVar16._0_2_ + __LC8) - (auVar18._0_2_ + auVar22._0_2_);
  auVar17._2_2_ = (auVar16._2_2_ + _UNK_00102c22) - (auVar18._2_2_ + auVar22._2_2_);
  auVar17._4_2_ = (auVar16._4_2_ + _UNK_00102c24) - (auVar18._4_2_ + auVar22._4_2_);
  auVar17._6_2_ = (auVar16._6_2_ + _UNK_00102c26) - (auVar18._6_2_ + auVar22._6_2_);
  auVar17._8_2_ = (auVar16._8_2_ + _UNK_00102c28) - (auVar18._8_2_ + auVar22._8_2_);
  auVar17._10_2_ = (auVar16._10_2_ + _UNK_00102c2a) - (auVar18._10_2_ + auVar22._10_2_);
  auVar17._12_2_ = (auVar16._12_2_ + _UNK_00102c2c) - (auVar18._12_2_ + auVar22._12_2_);
  auVar17._14_2_ = (auVar16._14_2_ + _UNK_00102c2e) - (auVar18._14_2_ + auVar22._14_2_);
  auVar18 = psraw(auVar21,6);
  auVar16 = psraw(auVar17,6);
  *param_4 = auVar18;
  *param_5 = auVar16;
  *param_6 = auVar20._0_2_ >> 6;
  param_6[1] = auVar20._2_2_ >> 6;
  param_6[2] = auVar20._4_2_ >> 6;
  param_6[3] = auVar20._6_2_ >> 6;
  param_6[4] = auVar20._8_2_ >> 6;
  param_6[5] = auVar20._10_2_ >> 6;
  param_6[6] = auVar20._12_2_ >> 6;
  param_6[7] = auVar20._14_2_ >> 6;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void YuvToRgbaRow_SSE2(byte *param_1,byte *param_2,byte *param_3,undefined1 (*param_4) [16],
                      int param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [12];
  unkbyte10 Var6;
  unkbyte9 Var7;
  undefined6 uVar8;
  undefined4 uVar9;
  undefined2 uVar10;
  char cVar11;
  ulong uVar12;
  uint uVar13;
  byte *pbVar14;
  undefined1 (*pauVar15) [16];
  int iVar16;
  byte *pbVar17;
  uint uVar18;
  long in_FS_OFFSET;
  undefined2 uVar19;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  undefined1 auVar38 [16];
  short local_78;
  short sStack_76;
  short sStack_74;
  short sStack_72;
  short sStack_70;
  short sStack_6e;
  short sStack_6c;
  short sStack_6a;
  short local_68;
  short sStack_66;
  short sStack_64;
  short sStack_62;
  short sStack_60;
  short sStack_5e;
  short sStack_5c;
  short sStack_5a;
  short local_58;
  short sStack_56;
  short sStack_54;
  short sStack_52;
  short sStack_50;
  short sStack_4e;
  short sStack_4c;
  short sStack_4a;
  long local_40;
  undefined4 uVar20;
  undefined6 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [12];
  undefined1 auVar24 [14];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar14 = (byte *)0x0;
  if (param_5 < 8) {
    iVar16 = 0;
    pbVar17 = param_2;
  }
  else {
    uVar18 = (param_5 - 8U >> 3) + 1;
    uVar12 = (ulong)uVar18;
    pbVar1 = param_1 + uVar12 * 8;
    pbVar14 = param_3;
    pauVar15 = param_4;
    pbVar17 = param_2;
    sVar30 = __LC9;
    sVar31 = _UNK_00102ba2;
    sVar32 = _UNK_00102ba4;
    sVar33 = _UNK_00102ba6;
    sVar34 = _UNK_00102ba8;
    sVar35 = _UNK_00102baa;
    sVar36 = _UNK_00102bac;
    sVar37 = _UNK_00102bae;
    do {
      auVar38 = YUV420ToRGB_SSE2(param_1,param_2,pbVar14,&local_78);
      param_1 = auVar38._0_8_;
      param_2 = param_2 + 4;
      cVar11 = (0 < sStack_6a) * (sStack_6a < 0x100) * (char)sStack_6a - (0xff < sStack_6a);
      pbVar14 = (byte *)(auVar38._8_8_ + 4);
      uVar19 = CONCAT11((0 < sVar30) * (sVar30 < 0x100) * (char)sVar30 - (0xff < sVar30),
                        (0 < local_58) * (local_58 < 0x100) * (char)local_58 - (0xff < local_58));
      uVar20 = CONCAT13((0 < sVar31) * (sVar31 < 0x100) * (char)sVar31 - (0xff < sVar31),
                        CONCAT12((0 < sStack_56) * (sStack_56 < 0x100) * (char)sStack_56 -
                                 (0xff < sStack_56),uVar19));
      uVar21 = CONCAT15((0 < sVar32) * (sVar32 < 0x100) * (char)sVar32 - (0xff < sVar32),
                        CONCAT14((0 < sStack_54) * (sStack_54 < 0x100) * (char)sStack_54 -
                                 (0xff < sStack_54),uVar20));
      uVar22 = CONCAT17((0 < sVar33) * (sVar33 < 0x100) * (char)sVar33 - (0xff < sVar33),
                        CONCAT16((0 < sStack_52) * (sStack_52 < 0x100) * (char)sStack_52 -
                                 (0xff < sStack_52),uVar21));
      auVar23._0_10_ =
           CONCAT19((0 < sVar34) * (sVar34 < 0x100) * (char)sVar34 - (0xff < sVar34),
                    CONCAT18((0 < sStack_50) * (sStack_50 < 0x100) * (char)sStack_50 -
                             (0xff < sStack_50),uVar22));
      auVar23[10] = (0 < sStack_4e) * (sStack_4e < 0x100) * (char)sStack_4e - (0xff < sStack_4e);
      auVar23[0xb] = (0 < sVar35) * (sVar35 < 0x100) * (char)sVar35 - (0xff < sVar35);
      auVar24[0xc] = (0 < sStack_4c) * (sStack_4c < 0x100) * (char)sStack_4c - (0xff < sStack_4c);
      auVar24._0_12_ = auVar23;
      auVar24[0xd] = (0 < sVar36) * (sVar36 < 0x100) * (char)sVar36 - (0xff < sVar36);
      auVar38[0xe] = (0 < sStack_4a) * (sStack_4a < 0x100) * (char)sStack_4a - (0xff < sStack_4a);
      auVar38._0_14_ = auVar24;
      auVar38[0xf] = (0 < sVar37) * (sVar37 < 0x100) * (char)sVar37 - (0xff < sVar37);
      uVar10 = CONCAT11((0 < sStack_5a) * (sStack_5a < 0x100) * (char)sStack_5a - (0xff < sStack_5a)
                        ,cVar11);
      uVar9 = CONCAT31(CONCAT21(uVar10,(0 < sStack_5c) * (sStack_5c < 0x100) * (char)sStack_5c -
                                       (0xff < sStack_5c)),
                       (0 < sStack_6c) * (sStack_6c < 0x100) * (char)sStack_6c - (0xff < sStack_6c))
      ;
      uVar8 = CONCAT51(CONCAT41(uVar9,(0 < sStack_5e) * (sStack_5e < 0x100) * (char)sStack_5e -
                                      (0xff < sStack_5e)),
                       (0 < sStack_6e) * (sStack_6e < 0x100) * (char)sStack_6e - (0xff < sStack_6e))
      ;
      Var7 = CONCAT72(CONCAT61(uVar8,(0 < sStack_60) * (sStack_60 < 0x100) * (char)sStack_60 -
                                     (0xff < sStack_60)),
                      CONCAT11((0 < sStack_70) * (sStack_70 < 0x100) * (char)sStack_70 -
                               (0xff < sStack_70),cVar11));
      Var6 = CONCAT91(CONCAT81((long)((unkuint9)Var7 >> 8),
                               (0 < sStack_62) * (sStack_62 < 0x100) * (char)sStack_62 -
                               (0xff < sStack_62)),
                      (0 < sStack_72) * (sStack_72 < 0x100) * (char)sStack_72 - (0xff < sStack_72));
      auVar5._2_10_ = Var6;
      auVar5[1] = (0 < sStack_64) * (sStack_64 < 0x100) * (char)sStack_64 - (0xff < sStack_64);
      auVar5[0] = (0 < sStack_74) * (sStack_74 < 0x100) * (char)sStack_74 - (0xff < sStack_74);
      auVar4._2_12_ = auVar5;
      auVar4[1] = (0 < sStack_66) * (sStack_66 < 0x100) * (char)sStack_66 - (0xff < sStack_66);
      auVar4[0] = (0 < sStack_76) * (sStack_76 < 0x100) * (char)sStack_76 - (0xff < sStack_76);
      auVar25._0_2_ =
           CONCAT11((0 < local_68) * (local_68 < 0x100) * (char)local_68 - (0xff < local_68),
                    (0 < local_78) * (local_78 < 0x100) * (char)local_78 - (0xff < local_78));
      auVar25._2_14_ = auVar4;
      auVar29._0_12_ = auVar25._0_12_;
      auVar29._12_2_ = (short)Var6;
      auVar29._14_2_ = (short)((ulong)uVar22 >> 0x30);
      auVar28._12_4_ = auVar29._12_4_;
      auVar28._0_10_ = auVar25._0_10_;
      auVar28._10_2_ = (short)((uint6)uVar21 >> 0x20);
      auVar27._10_6_ = auVar28._10_6_;
      auVar27._0_8_ = auVar25._0_8_;
      auVar27._8_2_ = auVar5._0_2_;
      auVar26._8_8_ = auVar27._8_8_;
      auVar26._6_2_ = (short)((uint)uVar20 >> 0x10);
      auVar26._4_2_ = auVar4._0_2_;
      auVar26._2_2_ = uVar19;
      auVar26._0_2_ = auVar25._0_2_;
      *(short *)pauVar15[1] = (short)((unkuint9)Var7 >> 8);
      *(short *)(pauVar15[1] + 2) = (short)((unkuint10)auVar23._0_10_ >> 0x40);
      *(short *)(pauVar15[1] + 4) = (short)uVar8;
      *(short *)(pauVar15[1] + 6) = auVar23._10_2_;
      *(short *)(pauVar15[1] + 8) = (short)uVar9;
      *(short *)(pauVar15[1] + 10) = auVar24._12_2_;
      *(undefined2 *)(pauVar15[1] + 0xc) = uVar10;
      *(short *)(pauVar15[1] + 0xe) = auVar38._14_2_;
      *pauVar15 = auVar26;
      pauVar15 = pauVar15 + 2;
    } while (param_1 != pbVar1);
    iVar16 = uVar18 * 8;
    param_3 = param_3 + uVar12 * 4;
    param_4 = param_4 + uVar12 * 2;
    pbVar17 = pbVar17 + uVar12 * 4;
    param_1 = pbVar1;
  }
  if (iVar16 < param_5) {
    uVar18 = param_5 - iVar16;
    iVar16 = iVar16 - (int)param_1;
    pbVar1 = param_1 + uVar18;
    do {
      bVar2 = *param_3;
      bVar3 = *pbVar17;
      uVar13 = (int)((uint)*param_1 * 0x4a85) >> 8;
      pbVar14 = (byte *)(ulong)uVar13;
      uVar18 = (uVar13 - 0x379a) + ((int)((uint)bVar2 * 0x6625) >> 8);
      if (uVar18 < 0x4000) {
        cVar11 = (char)((int)uVar18 >> 6);
      }
      else {
        cVar11 = (char)~(byte)(uVar18 >> 0x18) >> 7;
      }
      (*param_4)[0] = cVar11;
      uVar18 = ((uVar13 - ((int)((uint)bVar3 * 0x1913) >> 8)) - ((int)((uint)bVar2 * 0x3408) >> 8))
               + 0x2204;
      if (uVar18 < 0x4000) {
        cVar11 = (char)((int)uVar18 >> 6);
      }
      else {
        cVar11 = (char)~(byte)(uVar18 >> 0x18) >> 7;
      }
      (*param_4)[1] = cVar11;
      uVar18 = (uVar13 - 0x4515) + ((int)((uint)bVar3 * 0x811a) >> 8);
      if (uVar18 < 0x4000) {
        cVar11 = (char)((int)uVar18 >> 6);
      }
      else {
        cVar11 = (char)~(byte)(uVar18 >> 0x18) >> 7;
      }
      param_2 = (byte *)(ulong)(iVar16 + (int)param_1 & 1);
      param_1 = param_1 + 1;
      (*param_4)[2] = cVar11;
      (*param_4)[3] = 0xff;
      pbVar17 = pbVar17 + (long)param_2;
      param_3 = param_3 + (long)param_2;
      param_4 = (undefined1 (*) [16])(*param_4 + 4);
    } while (param_1 != pbVar1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar16,param_2,pbVar14);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void YuvToArgbRow_SSE2(byte *param_1,byte *param_2,byte *param_3,undefined1 (*param_4) [16],
                      int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  undefined1 auVar5 [14];
  undefined1 auVar6 [12];
  unkbyte10 Var7;
  unkbyte9 Var8;
  undefined6 uVar9;
  undefined4 uVar10;
  undefined2 uVar11;
  char cVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  byte *pbVar16;
  undefined1 (*pauVar17) [16];
  int iVar18;
  byte *pbVar19;
  byte *pbVar20;
  long in_FS_OFFSET;
  undefined2 uVar21;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  undefined1 auVar40 [16];
  short local_78;
  short sStack_76;
  short sStack_74;
  short sStack_72;
  short sStack_70;
  short sStack_6e;
  short sStack_6c;
  short sStack_6a;
  short local_68;
  short sStack_66;
  short sStack_64;
  short sStack_62;
  short sStack_60;
  short sStack_5e;
  short sStack_5c;
  short sStack_5a;
  short local_58;
  short sStack_56;
  short sStack_54;
  short sStack_52;
  short sStack_50;
  short sStack_4e;
  short sStack_4c;
  short sStack_4a;
  undefined4 uVar22;
  undefined6 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [12];
  undefined1 auVar26 [14];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar16 = (byte *)0x0;
  if (param_5 < 8) {
    iVar18 = 0;
    pbVar19 = param_2;
    pbVar20 = param_1;
  }
  else {
    uVar13 = (param_5 - 8U >> 3) + 1;
    pbVar20 = param_1 + (ulong)uVar13 * 8;
    pbVar16 = param_3;
    pauVar17 = param_4;
    pbVar19 = param_2;
    sVar32 = __LC9;
    sVar33 = _UNK_00102ba2;
    sVar34 = _UNK_00102ba4;
    sVar35 = _UNK_00102ba6;
    sVar36 = _UNK_00102ba8;
    sVar37 = _UNK_00102baa;
    sVar38 = _UNK_00102bac;
    sVar39 = _UNK_00102bae;
    do {
      auVar40 = YUV420ToRGB_SSE2(param_1,param_2,pbVar16);
      lVar14 = auVar40._0_8_;
      cVar12 = (0 < sVar39) * (sVar39 < 0x100) * (char)sVar39 - (0xff < sVar39);
      param_1 = param_1 + 8;
      pbVar16 = (byte *)(auVar40._8_8_ + 4);
      uVar11 = CONCAT11((0 < sStack_6a) * (sStack_6a < 0x100) * (char)sStack_6a - (0xff < sStack_6a)
                        ,cVar12);
      uVar10 = CONCAT31(CONCAT21(uVar11,(0 < sStack_6c) * (sStack_6c < 0x100) * (char)sStack_6c -
                                        (0xff < sStack_6c)),
                        (0 < sVar38) * (sVar38 < 0x100) * (char)sVar38 - (0xff < sVar38));
      uVar9 = CONCAT51(CONCAT41(uVar10,(0 < sStack_6e) * (sStack_6e < 0x100) * (char)sStack_6e -
                                       (0xff < sStack_6e)),
                       (0 < sVar37) * (sVar37 < 0x100) * (char)sVar37 - (0xff < sVar37));
      Var8 = CONCAT72(CONCAT61(uVar9,(0 < sStack_70) * (sStack_70 < 0x100) * (char)sStack_70 -
                                     (0xff < sStack_70)),
                      CONCAT11((0 < sVar36) * (sVar36 < 0x100) * (char)sVar36 - (0xff < sVar36),
                               cVar12));
      Var7 = CONCAT91(CONCAT81((long)((unkuint9)Var8 >> 8),
                               (0 < sStack_72) * (sStack_72 < 0x100) * (char)sStack_72 -
                               (0xff < sStack_72)),
                      (0 < sVar35) * (sVar35 < 0x100) * (char)sVar35 - (0xff < sVar35));
      auVar6._2_10_ = Var7;
      auVar6[1] = (0 < sStack_74) * (sStack_74 < 0x100) * (char)sStack_74 - (0xff < sStack_74);
      auVar6[0] = (0 < sVar34) * (sVar34 < 0x100) * (char)sVar34 - (0xff < sVar34);
      auVar5._2_12_ = auVar6;
      auVar5[1] = (0 < sStack_76) * (sStack_76 < 0x100) * (char)sStack_76 - (0xff < sStack_76);
      auVar5[0] = (0 < sVar33) * (sVar33 < 0x100) * (char)sVar33 - (0xff < sVar33);
      auVar27._0_2_ =
           CONCAT11((0 < local_78) * (local_78 < 0x100) * (char)local_78 - (0xff < local_78),
                    (0 < sVar32) * (sVar32 < 0x100) * (char)sVar32 - (0xff < sVar32));
      auVar27._2_14_ = auVar5;
      uVar21 = CONCAT11((0 < local_58) * (local_58 < 0x100) * (char)local_58 - (0xff < local_58),
                        (0 < local_68) * (local_68 < 0x100) * (char)local_68 - (0xff < local_68));
      uVar22 = CONCAT13((0 < sStack_56) * (sStack_56 < 0x100) * (char)sStack_56 - (0xff < sStack_56)
                        ,CONCAT12((0 < sStack_66) * (sStack_66 < 0x100) * (char)sStack_66 -
                                  (0xff < sStack_66),uVar21));
      uVar23 = CONCAT15((0 < sStack_54) * (sStack_54 < 0x100) * (char)sStack_54 - (0xff < sStack_54)
                        ,CONCAT14((0 < sStack_64) * (sStack_64 < 0x100) * (char)sStack_64 -
                                  (0xff < sStack_64),uVar22));
      uVar24 = CONCAT17((0 < sStack_52) * (sStack_52 < 0x100) * (char)sStack_52 - (0xff < sStack_52)
                        ,CONCAT16((0 < sStack_62) * (sStack_62 < 0x100) * (char)sStack_62 -
                                  (0xff < sStack_62),uVar23));
      auVar25._0_10_ =
           CONCAT19((0 < sStack_50) * (sStack_50 < 0x100) * (char)sStack_50 - (0xff < sStack_50),
                    CONCAT18((0 < sStack_60) * (sStack_60 < 0x100) * (char)sStack_60 -
                             (0xff < sStack_60),uVar24));
      auVar25[10] = (0 < sStack_5e) * (sStack_5e < 0x100) * (char)sStack_5e - (0xff < sStack_5e);
      auVar25[0xb] = (0 < sStack_4e) * (sStack_4e < 0x100) * (char)sStack_4e - (0xff < sStack_4e);
      auVar26[0xc] = (0 < sStack_5c) * (sStack_5c < 0x100) * (char)sStack_5c - (0xff < sStack_5c);
      auVar26._0_12_ = auVar25;
      auVar26[0xd] = (0 < sStack_4c) * (sStack_4c < 0x100) * (char)sStack_4c - (0xff < sStack_4c);
      auVar40[0xe] = (0 < sStack_5a) * (sStack_5a < 0x100) * (char)sStack_5a - (0xff < sStack_5a);
      auVar40._0_14_ = auVar26;
      auVar40[0xf] = (0 < sStack_4a) * (sStack_4a < 0x100) * (char)sStack_4a - (0xff < sStack_4a);
      auVar31._0_12_ = auVar27._0_12_;
      auVar31._12_2_ = (short)Var7;
      auVar31._14_2_ = (short)((ulong)uVar24 >> 0x30);
      auVar30._12_4_ = auVar31._12_4_;
      auVar30._0_10_ = auVar27._0_10_;
      auVar30._10_2_ = (short)((uint6)uVar23 >> 0x20);
      auVar29._10_6_ = auVar30._10_6_;
      auVar29._0_8_ = auVar27._0_8_;
      auVar29._8_2_ = auVar6._0_2_;
      auVar28._8_8_ = auVar29._8_8_;
      auVar28._6_2_ = (short)((uint)uVar22 >> 0x10);
      auVar28._4_2_ = auVar5._0_2_;
      auVar28._2_2_ = uVar21;
      auVar28._0_2_ = auVar27._0_2_;
      *(short *)pauVar17[1] = (short)((unkuint9)Var8 >> 8);
      *(short *)(pauVar17[1] + 2) = (short)((unkuint10)auVar25._0_10_ >> 0x40);
      *(short *)(pauVar17[1] + 4) = (short)uVar9;
      *(short *)(pauVar17[1] + 6) = auVar25._10_2_;
      *(short *)(pauVar17[1] + 8) = (short)uVar10;
      *(short *)(pauVar17[1] + 10) = auVar26._12_2_;
      *(undefined2 *)(pauVar17[1] + 0xc) = uVar11;
      *(short *)(pauVar17[1] + 0xe) = auVar40._14_2_;
      *pauVar17 = auVar28;
      pauVar17 = pauVar17 + 2;
      param_2 = param_2 + 4;
    } while (param_1 != pbVar20);
    iVar18 = uVar13 * 8;
    param_2 = (byte *)(lVar14 * 0x20);
    param_3 = param_3 + lVar14 * 4;
    param_4 = param_4 + lVar14 * 2;
    pbVar19 = pbVar19 + lVar14 * 4;
  }
  if (iVar18 < param_5) {
    param_2 = pbVar20;
    do {
      bVar1 = *param_3;
      bVar2 = *param_2;
      bVar3 = *pbVar19;
      (*param_4)[0] = 0xff;
      uVar15 = (int)((uint)bVar2 * 0x4a85) >> 8;
      pbVar16 = (byte *)(ulong)uVar15;
      uVar13 = (uVar15 - 0x379a) + ((int)((uint)bVar1 * 0x6625) >> 8);
      if (uVar13 < 0x4000) {
        cVar12 = (char)((int)uVar13 >> 6);
      }
      else {
        cVar12 = (char)~(byte)(uVar13 >> 0x18) >> 7;
      }
      (*param_4)[1] = cVar12;
      uVar13 = ((uVar15 - ((int)((uint)bVar3 * 0x1913) >> 8)) - ((int)((uint)bVar1 * 0x3408) >> 8))
               + 0x2204;
      if (uVar13 < 0x4000) {
        cVar12 = (char)((int)uVar13 >> 6);
      }
      else {
        cVar12 = (char)~(byte)(uVar13 >> 0x18) >> 7;
      }
      (*param_4)[2] = cVar12;
      uVar13 = (uVar15 - 0x4515) + ((int)((uint)bVar3 * 0x811a) >> 8);
      if (uVar13 < 0x4000) {
        cVar12 = (char)((int)uVar13 >> 6);
      }
      else {
        cVar12 = (char)~(byte)(uVar13 >> 0x18) >> 7;
      }
      param_1 = (byte *)(ulong)((iVar18 - (int)pbVar20) + (int)param_2 & 1);
      param_2 = param_2 + 1;
      (*param_4)[3] = cVar12;
      param_4 = (undefined1 (*) [16])(*param_4 + 4);
      pbVar19 = pbVar19 + (long)param_1;
      param_3 = param_3 + (long)param_1;
    } while (pbVar20 + (uint)(param_5 - iVar18) != param_2);
  }
  if (lVar4 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1,param_2,pbVar16);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertBGR24ToY_SSE2(byte *param_1,char *param_2,uint param_3)

{
  short sVar1;
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
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  unkuint9 Var49;
  undefined1 auVar50 [11];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  unkuint9 Var53;
  undefined1 auVar54 [11];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  unkuint9 Var57;
  undefined1 auVar58 [11];
  undefined1 auVar59 [15];
  undefined1 auVar60 [15];
  undefined1 auVar61 [15];
  undefined1 auVar62 [15];
  undefined1 auVar63 [15];
  undefined1 auVar64 [15];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  undefined1 (*pauVar71) [16];
  undefined1 (*pauVar72) [16];
  char *pcVar73;
  byte *pbVar74;
  int iVar75;
  byte *pbVar76;
  char *pcVar77;
  uint uVar78;
  long in_FS_OFFSET;
  unkint10 Var79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  byte bVar90;
  undefined1 uVar91;
  undefined1 auVar89 [16];
  undefined2 uVar92;
  undefined1 uVar97;
  undefined2 uVar96;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar98 [16];
  undefined1 auVar101 [16];
  byte local_88;
  byte bStack_87;
  byte bStack_86;
  byte bStack_85;
  byte bStack_84;
  byte bStack_83;
  byte bStack_82;
  byte bStack_81;
  byte bStack_80;
  byte bStack_7f;
  byte bStack_7e;
  byte bStack_7d;
  byte bStack_7c;
  byte bStack_7b;
  byte bStack_7a;
  byte bStack_79;
  byte local_78;
  byte bStack_77;
  byte bStack_76;
  byte bStack_75;
  byte bStack_74;
  byte bStack_73;
  byte bStack_72;
  byte bStack_71;
  byte bStack_70;
  byte bStack_6f;
  byte bStack_6e;
  byte bStack_6d;
  byte bStack_6c;
  byte bStack_6b;
  byte bStack_6a;
  byte bStack_69;
  byte local_68;
  byte bStack_67;
  byte bStack_66;
  byte bStack_65;
  byte bStack_64;
  byte bStack_63;
  byte bStack_62;
  byte bStack_61;
  byte bStack_60;
  byte bStack_5f;
  byte bStack_5e;
  byte bStack_5d;
  byte bStack_5c;
  byte bStack_5b;
  byte bStack_5a;
  byte bStack_59;
  byte local_58;
  byte bStack_57;
  byte bStack_56;
  byte bStack_55;
  byte bStack_54;
  byte bStack_53;
  byte bStack_52;
  byte bStack_51;
  byte bStack_50;
  byte bStack_4f;
  byte bStack_4e;
  byte bStack_4d;
  byte bStack_4c;
  byte bStack_4b;
  byte bStack_4a;
  byte bStack_49;
  byte local_48;
  byte bStack_47;
  byte bStack_46;
  byte bStack_45;
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
  byte local_38;
  byte bStack_37;
  byte bStack_36;
  byte bStack_35;
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
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  
  iVar69 = _UNK_00102c5c;
  iVar68 = _UNK_00102c58;
  iVar67 = _UNK_00102c54;
  iVar70 = __LC12;
  auVar66 = __LC11;
  auVar65 = __LC10;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar78 = param_3 & 0xffffffe0;
  if ((int)uVar78 < 1) {
    iVar70 = 0;
  }
  else {
    iVar75 = 0;
    pbVar74 = param_1;
    pcVar77 = param_2;
    do {
      local_78 = pbVar74[0x30];
      bStack_77 = pbVar74[0x33];
      bStack_76 = pbVar74[0x36];
      bStack_75 = pbVar74[0x39];
      bStack_74 = pbVar74[0x3c];
      bStack_73 = pbVar74[0x3f];
      bStack_72 = pbVar74[0x42];
      bStack_71 = pbVar74[0x45];
      bStack_70 = pbVar74[0x48];
      bStack_6f = pbVar74[0x4b];
      bStack_6e = pbVar74[0x4e];
      bStack_6d = pbVar74[0x51];
      bStack_6c = pbVar74[0x54];
      bStack_6b = pbVar74[0x57];
      bStack_6a = pbVar74[0x5a];
      bStack_69 = pbVar74[0x5d];
      local_88 = *pbVar74;
      bStack_87 = pbVar74[3];
      bStack_86 = pbVar74[6];
      bStack_85 = pbVar74[9];
      bStack_84 = pbVar74[0xc];
      bStack_83 = pbVar74[0xf];
      bStack_82 = pbVar74[0x12];
      bStack_81 = pbVar74[0x15];
      bStack_80 = pbVar74[0x18];
      bStack_7f = pbVar74[0x1b];
      bStack_7e = pbVar74[0x1e];
      bStack_7d = pbVar74[0x21];
      bStack_7c = pbVar74[0x24];
      bStack_7b = pbVar74[0x27];
      bStack_7a = pbVar74[0x2a];
      bStack_79 = pbVar74[0x2d];
      local_68 = pbVar74[1];
      bStack_67 = pbVar74[4];
      bStack_66 = pbVar74[7];
      bStack_65 = pbVar74[10];
      bStack_64 = pbVar74[0xd];
      bStack_63 = pbVar74[0x10];
      bStack_62 = pbVar74[0x13];
      bStack_61 = pbVar74[0x16];
      bStack_60 = pbVar74[0x19];
      bStack_5f = pbVar74[0x1c];
      bStack_5e = pbVar74[0x1f];
      bStack_5d = pbVar74[0x22];
      bStack_5c = pbVar74[0x25];
      bStack_5b = pbVar74[0x28];
      bStack_5a = pbVar74[0x2b];
      bStack_59 = pbVar74[0x2e];
      local_58 = pbVar74[0x31];
      bStack_57 = pbVar74[0x34];
      bStack_56 = pbVar74[0x37];
      bStack_55 = pbVar74[0x3a];
      bStack_54 = pbVar74[0x3d];
      bStack_53 = pbVar74[0x40];
      bStack_52 = pbVar74[0x43];
      bStack_51 = pbVar74[0x46];
      bStack_50 = pbVar74[0x49];
      bStack_4f = pbVar74[0x4c];
      bStack_4e = pbVar74[0x4f];
      bStack_4d = pbVar74[0x52];
      bStack_4c = pbVar74[0x55];
      bStack_4b = pbVar74[0x58];
      bStack_4a = pbVar74[0x5b];
      bStack_49 = pbVar74[0x5e];
      local_48 = pbVar74[2];
      bStack_47 = pbVar74[5];
      bStack_46 = pbVar74[8];
      bStack_45 = pbVar74[0xb];
      bStack_44 = pbVar74[0xe];
      bStack_43 = pbVar74[0x11];
      bStack_42 = pbVar74[0x14];
      bStack_41 = pbVar74[0x17];
      bStack_40 = pbVar74[0x1a];
      bStack_3f = pbVar74[0x1d];
      bStack_3e = pbVar74[0x20];
      bStack_3d = pbVar74[0x23];
      bStack_3c = pbVar74[0x26];
      bStack_3b = pbVar74[0x29];
      bStack_3a = pbVar74[0x2c];
      bStack_39 = pbVar74[0x2f];
      local_38 = pbVar74[0x32];
      bStack_37 = pbVar74[0x35];
      bStack_36 = pbVar74[0x38];
      bStack_35 = pbVar74[0x3b];
      bStack_34 = pbVar74[0x3e];
      bStack_33 = pbVar74[0x41];
      bStack_32 = pbVar74[0x44];
      bStack_31 = pbVar74[0x47];
      bStack_30 = pbVar74[0x4a];
      bStack_2f = pbVar74[0x4d];
      bStack_2e = pbVar74[0x50];
      bStack_2d = pbVar74[0x53];
      bStack_2c = pbVar74[0x56];
      bStack_2b = pbVar74[0x59];
      bStack_2a = pbVar74[0x5c];
      bStack_29 = pbVar74[0x5f];
      pauVar71 = (undefined1 (*) [16])&local_88;
      pcVar73 = pcVar77;
      do {
        auVar80 = pauVar71[2];
        auVar87 = pauVar71[4];
        pauVar72 = pauVar71 + 1;
        auVar88 = *pauVar71;
        auVar95[1] = 0;
        auVar95[0] = auVar80[8];
        bVar90 = auVar80[0xc];
        uVar91 = auVar80[0xd];
        auVar29[10] = uVar91;
        auVar29._0_10_ = (unkuint10)bVar90 << 0x40;
        auVar29[0xb] = 0;
        uVar97 = auVar80[7];
        auVar17[0xd] = 0;
        auVar17._0_13_ = auVar80._0_13_;
        auVar17[0xe] = uVar97;
        auVar20[0xc] = auVar80[6];
        auVar20._0_12_ = auVar80._0_12_;
        auVar20._13_2_ = auVar17._13_2_;
        auVar23[0xb] = 0;
        auVar23._0_11_ = auVar80._0_11_;
        auVar23._12_3_ = auVar20._12_3_;
        auVar26[10] = auVar80[5];
        auVar26._0_10_ = auVar80._0_10_;
        auVar26._11_4_ = auVar23._11_4_;
        auVar31[9] = 0;
        auVar31._0_9_ = auVar80._0_9_;
        auVar31._10_5_ = auVar26._10_5_;
        auVar36[8] = auVar80[4];
        auVar36._0_8_ = auVar80._0_8_;
        auVar36._9_6_ = auVar31._9_6_;
        auVar48._7_8_ = 0;
        auVar48._0_7_ = auVar36._8_7_;
        Var49 = CONCAT81(SUB158(auVar48 << 0x40,7),auVar80[3]);
        auVar59._9_6_ = 0;
        auVar59._0_9_ = Var49;
        auVar50._1_10_ = SUB1510(auVar59 << 0x30,5);
        auVar50[0] = auVar80[2];
        auVar60._11_4_ = 0;
        auVar60._0_11_ = auVar50;
        uVar92 = auVar80._0_2_;
        auVar45[2] = auVar80[1];
        auVar45._0_2_ = uVar92;
        auVar45._3_12_ = SUB1512(auVar60 << 0x20,3);
        auVar51._13_2_ = 0;
        auVar51._0_13_ = auVar45._2_13_;
        auVar18[0xd] = 0;
        auVar18._0_13_ = auVar87._0_13_;
        auVar18[0xe] = auVar87[7];
        auVar21[0xc] = auVar87[6];
        auVar21._0_12_ = auVar87._0_12_;
        auVar21._13_2_ = auVar18._13_2_;
        auVar24[0xb] = 0;
        auVar24._0_11_ = auVar87._0_11_;
        auVar24._12_3_ = auVar21._12_3_;
        auVar27[10] = auVar87[5];
        auVar27._0_10_ = auVar87._0_10_;
        auVar27._11_4_ = auVar24._11_4_;
        auVar32[9] = 0;
        auVar32._0_9_ = auVar87._0_9_;
        auVar32._10_5_ = auVar27._10_5_;
        auVar37[8] = auVar87[4];
        auVar37._0_8_ = auVar87._0_8_;
        auVar37._9_6_ = auVar32._9_6_;
        auVar52._7_8_ = 0;
        auVar52._0_7_ = auVar37._8_7_;
        Var53 = CONCAT81(SUB158(auVar52 << 0x40,7),auVar87[3]);
        auVar61._9_6_ = 0;
        auVar61._0_9_ = Var53;
        auVar54._1_10_ = SUB1510(auVar61 << 0x30,5);
        auVar54[0] = auVar87[2];
        auVar62._11_4_ = 0;
        auVar62._0_11_ = auVar54;
        auVar46[2] = auVar87[1];
        auVar46._0_2_ = auVar87._0_2_;
        auVar46._3_12_ = SUB1512(auVar62 << 0x20,3);
        auVar55._13_2_ = 0;
        auVar55._0_13_ = auVar46._2_13_;
        auVar19[0xd] = 0;
        auVar19._0_13_ = auVar88._0_13_;
        auVar19[0xe] = auVar88[7];
        auVar22[0xc] = auVar88[6];
        auVar22._0_12_ = auVar88._0_12_;
        auVar22._13_2_ = auVar19._13_2_;
        auVar25[0xb] = 0;
        auVar25._0_11_ = auVar88._0_11_;
        auVar25._12_3_ = auVar22._12_3_;
        auVar28[10] = auVar88[5];
        auVar28._0_10_ = auVar88._0_10_;
        auVar28._11_4_ = auVar25._11_4_;
        auVar33[9] = 0;
        auVar33._0_9_ = auVar88._0_9_;
        auVar33._10_5_ = auVar28._10_5_;
        auVar38[8] = auVar88[4];
        auVar38._0_8_ = auVar88._0_8_;
        auVar38._9_6_ = auVar33._9_6_;
        auVar56._7_8_ = 0;
        auVar56._0_7_ = auVar38._8_7_;
        Var57 = CONCAT81(SUB158(auVar56 << 0x40,7),auVar88[3]);
        auVar63._9_6_ = 0;
        auVar63._0_9_ = Var57;
        auVar58._1_10_ = SUB1510(auVar63 << 0x30,5);
        auVar58[0] = auVar88[2];
        auVar64._11_4_ = 0;
        auVar64._0_11_ = auVar58;
        auVar47[2] = auVar88[1];
        auVar47._0_2_ = auVar88._0_2_;
        auVar47._3_12_ = SUB1512(auVar64 << 0x20,3);
        uVar96 = (undefined2)Var49;
        auVar101._0_12_ = SUB1512(auVar55 << 0x10,0);
        auVar101._12_2_ = (short)Var53;
        auVar101._14_2_ = uVar96;
        auVar94._12_4_ = auVar101._12_4_;
        auVar94._0_10_ = SUB1510(auVar55 << 0x10,0);
        auVar94._10_2_ = auVar50._0_2_;
        auVar84._10_6_ = auVar94._10_6_;
        auVar84._8_2_ = auVar54._0_2_;
        auVar84._6_2_ = auVar45._2_2_;
        auVar84._4_2_ = auVar46._2_2_;
        auVar84._0_4_ = CONCAT22(uVar92,auVar87._0_2_) & 0xff00ff;
        auVar83._2_2_ = auVar36._8_2_;
        auVar83._0_2_ = auVar37._8_2_;
        auVar83._4_2_ = auVar27._10_2_;
        auVar83._6_2_ = auVar26._10_2_;
        auVar83._8_2_ = auVar21._12_2_;
        auVar83._10_2_ = auVar20._12_2_;
        auVar83[0xc] = auVar87[7];
        auVar83[0xd] = 0;
        auVar83[0xe] = uVar97;
        auVar83[0xf] = 0;
        auVar100._0_12_ = SUB1512(auVar51 << 0x10,0);
        auVar100._12_2_ = uVar96;
        auVar100._14_2_ = (short)Var57;
        auVar99._12_4_ = auVar100._12_4_;
        auVar99._0_10_ = SUB1510(auVar51 << 0x10,0);
        auVar99._10_2_ = auVar58._0_2_;
        auVar98._10_6_ = auVar99._10_6_;
        auVar98._8_2_ = auVar50._0_2_;
        auVar98._6_2_ = auVar47._2_2_;
        auVar98._4_2_ = auVar45._2_2_;
        auVar98._0_4_ = CONCAT22(auVar88._0_2_,uVar92) & 0xff00ff;
        auVar93._2_2_ = auVar38._8_2_;
        auVar93._0_2_ = auVar36._8_2_;
        auVar93._4_2_ = auVar26._10_2_;
        auVar93._6_2_ = auVar28._10_2_;
        auVar93._8_2_ = auVar20._12_2_;
        auVar93._10_2_ = auVar22._12_2_;
        auVar93[0xc] = uVar97;
        auVar93[0xd] = 0;
        auVar93[0xe] = auVar88[7];
        auVar93[0xf] = 0;
        auVar81 = pmaddwd(auVar84,auVar65);
        auVar84 = pmaddwd(auVar83,auVar65);
        auVar94 = pmaddwd(auVar93,auVar66);
        auVar101 = pmaddwd(auVar98,auVar66);
        auVar86[1] = 0;
        auVar86[0] = auVar87[8];
        Var79 = (unkuint10)auVar87[0xc] << 0x40;
        auVar30[10] = auVar87[0xd];
        auVar30._0_10_ = Var79;
        auVar30[0xb] = 0;
        auVar85._0_4_ = auVar84._0_4_ + auVar94._0_4_ + iVar70 >> 0x10;
        auVar85._4_4_ = auVar84._4_4_ + auVar94._4_4_ + iVar67 >> 0x10;
        auVar85._8_4_ = auVar84._8_4_ + auVar94._8_4_ + iVar68 >> 0x10;
        auVar85._12_4_ = auVar84._12_4_ + auVar94._12_4_ + iVar69 >> 0x10;
        auVar82._0_4_ = auVar81._0_4_ + auVar101._0_4_ + iVar70 >> 0x10;
        auVar82._4_4_ = auVar81._4_4_ + auVar101._4_4_ + iVar67 >> 0x10;
        auVar82._8_4_ = auVar81._8_4_ + auVar101._8_4_ + iVar68 >> 0x10;
        auVar82._12_4_ = auVar81._12_4_ + auVar101._12_4_ + iVar69 >> 0x10;
        auVar29[0xc] = auVar80[0xb];
        auVar29[0xd] = 0;
        auVar29[0xe] = auVar88[0xb];
        auVar34[10] = auVar88[10];
        auVar34._0_10_ = (unkuint10)bVar90 << 0x40;
        auVar34[0xb] = 0;
        auVar34._12_3_ = auVar29._12_3_;
        auVar39._10_5_ = auVar34._10_5_;
        auVar39._0_10_ = (unkuint10)auVar80[10] << 0x40;
        auVar41._8_7_ = auVar39._8_7_;
        auVar41._0_8_ = (ulong)auVar88[9] << 0x30;
        auVar43._6_9_ = auVar41._6_9_;
        auVar43._0_6_ = (uint6)auVar80[9] << 0x20;
        auVar95[2] = auVar88[8];
        auVar95[3] = 0;
        auVar95._4_11_ = auVar43._4_11_;
        auVar95[0xf] = 0;
        auVar84 = packssdw(auVar82,auVar85);
        auVar81[1] = 0;
        auVar81[0] = auVar87[0xc];
        auVar89[1] = 0;
        auVar89[0] = bVar90;
        auVar81[2] = bVar90;
        auVar81[3] = 0;
        auVar81[4] = auVar87[0xd];
        auVar81[5] = 0;
        auVar81[6] = uVar91;
        auVar81[7] = 0;
        auVar81[8] = auVar87[0xe];
        auVar81[9] = 0;
        auVar81[10] = auVar80[0xe];
        auVar81[0xb] = 0;
        auVar81[0xc] = auVar87[0xf];
        auVar81[0xd] = 0;
        auVar81[0xe] = auVar80[0xf];
        auVar81[0xf] = 0;
        auVar30[0xc] = auVar87[0xb];
        auVar30[0xd] = 0;
        auVar30[0xe] = auVar80[0xb];
        auVar35[10] = auVar80[10];
        auVar35._0_10_ = Var79;
        auVar35[0xb] = 0;
        auVar35._12_3_ = auVar30._12_3_;
        auVar40._10_5_ = auVar35._10_5_;
        auVar40._0_10_ = (unkuint10)auVar87[10] << 0x40;
        auVar42._8_7_ = auVar40._8_7_;
        auVar42._0_8_ = (ulong)auVar80[9] << 0x30;
        auVar44._6_9_ = auVar42._6_9_;
        auVar44._0_6_ = (uint6)auVar87[9] << 0x20;
        auVar86[2] = auVar80[8];
        auVar86[3] = 0;
        auVar86._4_11_ = auVar44._4_11_;
        auVar86[0xf] = 0;
        auVar89[2] = auVar88[0xc];
        auVar89[3] = 0;
        auVar89[4] = uVar91;
        auVar89[5] = 0;
        auVar89[6] = auVar88[0xd];
        auVar89[7] = 0;
        auVar89[8] = auVar80[0xe];
        auVar89[9] = 0;
        auVar89[10] = auVar88[0xe];
        auVar89[0xb] = 0;
        auVar89[0xc] = auVar80[0xf];
        auVar89[0xd] = 0;
        auVar89[0xe] = auVar88[0xf];
        auVar89[0xf] = 0;
        auVar80 = pmaddwd(auVar81,auVar65);
        auVar87 = pmaddwd(auVar86,auVar65);
        auVar94 = pmaddwd(auVar95,auVar66);
        auVar81 = pmaddwd(auVar89,auVar66);
        auVar88._0_4_ = auVar87._0_4_ + auVar94._0_4_ + iVar70 >> 0x10;
        auVar88._4_4_ = auVar87._4_4_ + auVar94._4_4_ + iVar67 >> 0x10;
        auVar88._8_4_ = auVar87._8_4_ + auVar94._8_4_ + iVar68 >> 0x10;
        auVar88._12_4_ = auVar87._12_4_ + auVar94._12_4_ + iVar69 >> 0x10;
        auVar87._0_4_ = auVar80._0_4_ + auVar81._0_4_ + iVar70 >> 0x10;
        auVar87._4_4_ = auVar80._4_4_ + auVar81._4_4_ + iVar67 >> 0x10;
        auVar87._8_4_ = auVar80._8_4_ + auVar81._8_4_ + iVar68 >> 0x10;
        auVar87._12_4_ = auVar80._12_4_ + auVar81._12_4_ + iVar69 >> 0x10;
        auVar80 = packssdw(auVar88,auVar87);
        sVar1 = auVar84._0_2_;
        sVar2 = auVar84._2_2_;
        sVar3 = auVar84._4_2_;
        sVar4 = auVar84._6_2_;
        sVar5 = auVar84._8_2_;
        sVar6 = auVar84._10_2_;
        sVar7 = auVar84._12_2_;
        sVar8 = auVar84._14_2_;
        sVar9 = auVar80._0_2_;
        sVar10 = auVar80._2_2_;
        sVar11 = auVar80._4_2_;
        sVar12 = auVar80._6_2_;
        sVar13 = auVar80._8_2_;
        sVar14 = auVar80._10_2_;
        sVar15 = auVar80._12_2_;
        sVar16 = auVar80._14_2_;
        *pcVar73 = (0 < sVar1) * (sVar1 < 0x100) * auVar84[0] - (0xff < sVar1);
        pcVar73[1] = (0 < sVar2) * (sVar2 < 0x100) * auVar84[2] - (0xff < sVar2);
        pcVar73[2] = (0 < sVar3) * (sVar3 < 0x100) * auVar84[4] - (0xff < sVar3);
        pcVar73[3] = (0 < sVar4) * (sVar4 < 0x100) * auVar84[6] - (0xff < sVar4);
        pcVar73[4] = (0 < sVar5) * (sVar5 < 0x100) * auVar84[8] - (0xff < sVar5);
        pcVar73[5] = (0 < sVar6) * (sVar6 < 0x100) * auVar84[10] - (0xff < sVar6);
        pcVar73[6] = (0 < sVar7) * (sVar7 < 0x100) * auVar84[0xc] - (0xff < sVar7);
        pcVar73[7] = (0 < sVar8) * (sVar8 < 0x100) * auVar84[0xe] - (0xff < sVar8);
        pcVar73[8] = (0 < sVar9) * (sVar9 < 0x100) * auVar80[0] - (0xff < sVar9);
        pcVar73[9] = (0 < sVar10) * (sVar10 < 0x100) * auVar80[2] - (0xff < sVar10);
        pcVar73[10] = (0 < sVar11) * (sVar11 < 0x100) * auVar80[4] - (0xff < sVar11);
        pcVar73[0xb] = (0 < sVar12) * (sVar12 < 0x100) * auVar80[6] - (0xff < sVar12);
        pcVar73[0xc] = (0 < sVar13) * (sVar13 < 0x100) * auVar80[8] - (0xff < sVar13);
        pcVar73[0xd] = (0 < sVar14) * (sVar14 < 0x100) * auVar80[10] - (0xff < sVar14);
        pcVar73[0xe] = (0 < sVar15) * (sVar15 < 0x100) * auVar80[0xc] - (0xff < sVar15);
        pcVar73[0xf] = (0 < sVar16) * (sVar16 < 0x100) * auVar80[0xe] - (0xff < sVar16);
        pauVar71 = pauVar72;
        pcVar73 = pcVar73 + 0x10;
      } while (pauVar72 != (undefined1 (*) [16])&local_68);
      iVar75 = iVar75 + 0x20;
      pbVar74 = pbVar74 + 0x60;
      pcVar77 = pcVar77 + 0x20;
    } while (iVar75 < (int)uVar78);
    uVar78 = (uVar78 - 1 >> 5) + 1;
    iVar70 = uVar78 * 0x20;
    param_1 = param_1 + (ulong)uVar78 * 0x60;
  }
  if (iVar70 < (int)param_3) {
    pcVar77 = param_2 + iVar70;
    pbVar74 = param_1;
    do {
      pbVar76 = pbVar74 + 3;
      *pcVar77 = (char)((uint)pbVar74[2] * 0x41c7 + (uint)pbVar74[1] * 0x8123 + 0x108000 +
                        (uint)*pbVar74 * 0x1914 >> 0x10);
      pcVar77 = pcVar77 + 1;
      pbVar74 = pbVar76;
    } while (pbVar76 != param_1 + (ulong)(param_3 - iVar70) * 3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertRGB24ToY_SSE2(byte *param_1,char *param_2,uint param_3)

{
  short sVar1;
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
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  unkuint9 Var49;
  undefined1 auVar50 [11];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  unkuint9 Var53;
  undefined1 auVar54 [11];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  unkuint9 Var57;
  undefined1 auVar58 [11];
  undefined1 auVar59 [15];
  undefined1 auVar60 [15];
  undefined1 auVar61 [15];
  undefined1 auVar62 [15];
  undefined1 auVar63 [15];
  undefined1 auVar64 [15];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  undefined1 (*pauVar71) [16];
  undefined1 (*pauVar72) [16];
  char *pcVar73;
  byte *pbVar74;
  int iVar75;
  byte *pbVar76;
  char *pcVar77;
  uint uVar78;
  long in_FS_OFFSET;
  unkint10 Var79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  byte bVar90;
  undefined1 uVar91;
  undefined1 auVar89 [16];
  undefined2 uVar92;
  undefined2 uVar96;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar97 [16];
  undefined1 auVar100 [16];
  byte local_88;
  byte bStack_87;
  byte bStack_86;
  byte bStack_85;
  byte bStack_84;
  byte bStack_83;
  byte bStack_82;
  byte bStack_81;
  byte bStack_80;
  byte bStack_7f;
  byte bStack_7e;
  byte bStack_7d;
  byte bStack_7c;
  byte bStack_7b;
  byte bStack_7a;
  byte bStack_79;
  byte local_78;
  byte bStack_77;
  byte bStack_76;
  byte bStack_75;
  byte bStack_74;
  byte bStack_73;
  byte bStack_72;
  byte bStack_71;
  byte bStack_70;
  byte bStack_6f;
  byte bStack_6e;
  byte bStack_6d;
  byte bStack_6c;
  byte bStack_6b;
  byte bStack_6a;
  byte bStack_69;
  byte local_68;
  byte bStack_67;
  byte bStack_66;
  byte bStack_65;
  byte bStack_64;
  byte bStack_63;
  byte bStack_62;
  byte bStack_61;
  byte bStack_60;
  byte bStack_5f;
  byte bStack_5e;
  byte bStack_5d;
  byte bStack_5c;
  byte bStack_5b;
  byte bStack_5a;
  byte bStack_59;
  byte local_58;
  byte bStack_57;
  byte bStack_56;
  byte bStack_55;
  byte bStack_54;
  byte bStack_53;
  byte bStack_52;
  byte bStack_51;
  byte bStack_50;
  byte bStack_4f;
  byte bStack_4e;
  byte bStack_4d;
  byte bStack_4c;
  byte bStack_4b;
  byte bStack_4a;
  byte bStack_49;
  byte local_48;
  byte bStack_47;
  byte bStack_46;
  byte bStack_45;
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
  byte local_38;
  byte bStack_37;
  byte bStack_36;
  byte bStack_35;
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
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  
  iVar69 = _UNK_00102c5c;
  iVar68 = _UNK_00102c58;
  iVar67 = _UNK_00102c54;
  iVar70 = __LC12;
  auVar66 = __LC11;
  auVar65 = __LC10;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar78 = param_3 & 0xffffffe0;
  if ((int)uVar78 < 1) {
    iVar70 = 0;
  }
  else {
    iVar75 = 0;
    pbVar74 = param_1;
    pcVar77 = param_2;
    do {
      local_78 = pbVar74[0x30];
      bStack_77 = pbVar74[0x33];
      bStack_76 = pbVar74[0x36];
      bStack_75 = pbVar74[0x39];
      bStack_74 = pbVar74[0x3c];
      bStack_73 = pbVar74[0x3f];
      bStack_72 = pbVar74[0x42];
      bStack_71 = pbVar74[0x45];
      bStack_70 = pbVar74[0x48];
      bStack_6f = pbVar74[0x4b];
      bStack_6e = pbVar74[0x4e];
      bStack_6d = pbVar74[0x51];
      bStack_6c = pbVar74[0x54];
      bStack_6b = pbVar74[0x57];
      bStack_6a = pbVar74[0x5a];
      bStack_69 = pbVar74[0x5d];
      local_88 = *pbVar74;
      bStack_87 = pbVar74[3];
      bStack_86 = pbVar74[6];
      bStack_85 = pbVar74[9];
      bStack_84 = pbVar74[0xc];
      bStack_83 = pbVar74[0xf];
      bStack_82 = pbVar74[0x12];
      bStack_81 = pbVar74[0x15];
      bStack_80 = pbVar74[0x18];
      bStack_7f = pbVar74[0x1b];
      bStack_7e = pbVar74[0x1e];
      bStack_7d = pbVar74[0x21];
      bStack_7c = pbVar74[0x24];
      bStack_7b = pbVar74[0x27];
      bStack_7a = pbVar74[0x2a];
      bStack_79 = pbVar74[0x2d];
      local_68 = pbVar74[1];
      bStack_67 = pbVar74[4];
      bStack_66 = pbVar74[7];
      bStack_65 = pbVar74[10];
      bStack_64 = pbVar74[0xd];
      bStack_63 = pbVar74[0x10];
      bStack_62 = pbVar74[0x13];
      bStack_61 = pbVar74[0x16];
      bStack_60 = pbVar74[0x19];
      bStack_5f = pbVar74[0x1c];
      bStack_5e = pbVar74[0x1f];
      bStack_5d = pbVar74[0x22];
      bStack_5c = pbVar74[0x25];
      bStack_5b = pbVar74[0x28];
      bStack_5a = pbVar74[0x2b];
      bStack_59 = pbVar74[0x2e];
      local_58 = pbVar74[0x31];
      bStack_57 = pbVar74[0x34];
      bStack_56 = pbVar74[0x37];
      bStack_55 = pbVar74[0x3a];
      bStack_54 = pbVar74[0x3d];
      bStack_53 = pbVar74[0x40];
      bStack_52 = pbVar74[0x43];
      bStack_51 = pbVar74[0x46];
      bStack_50 = pbVar74[0x49];
      bStack_4f = pbVar74[0x4c];
      bStack_4e = pbVar74[0x4f];
      bStack_4d = pbVar74[0x52];
      bStack_4c = pbVar74[0x55];
      bStack_4b = pbVar74[0x58];
      bStack_4a = pbVar74[0x5b];
      bStack_49 = pbVar74[0x5e];
      local_48 = pbVar74[2];
      bStack_47 = pbVar74[5];
      bStack_46 = pbVar74[8];
      bStack_45 = pbVar74[0xb];
      bStack_44 = pbVar74[0xe];
      bStack_43 = pbVar74[0x11];
      bStack_42 = pbVar74[0x14];
      bStack_41 = pbVar74[0x17];
      bStack_40 = pbVar74[0x1a];
      bStack_3f = pbVar74[0x1d];
      bStack_3e = pbVar74[0x20];
      bStack_3d = pbVar74[0x23];
      bStack_3c = pbVar74[0x26];
      bStack_3b = pbVar74[0x29];
      bStack_3a = pbVar74[0x2c];
      bStack_39 = pbVar74[0x2f];
      local_38 = pbVar74[0x32];
      bStack_37 = pbVar74[0x35];
      bStack_36 = pbVar74[0x38];
      bStack_35 = pbVar74[0x3b];
      bStack_34 = pbVar74[0x3e];
      bStack_33 = pbVar74[0x41];
      bStack_32 = pbVar74[0x44];
      bStack_31 = pbVar74[0x47];
      bStack_30 = pbVar74[0x4a];
      bStack_2f = pbVar74[0x4d];
      bStack_2e = pbVar74[0x50];
      bStack_2d = pbVar74[0x53];
      bStack_2c = pbVar74[0x56];
      bStack_2b = pbVar74[0x59];
      bStack_2a = pbVar74[0x5c];
      bStack_29 = pbVar74[0x5f];
      pauVar71 = (undefined1 (*) [16])&local_88;
      pcVar73 = pcVar77;
      do {
        auVar80 = *pauVar71;
        auVar87 = pauVar71[2];
        pauVar72 = pauVar71 + 1;
        auVar88 = pauVar71[4];
        auVar86[1] = 0;
        auVar86[0] = auVar80[8];
        Var79 = (unkuint10)auVar80[0xc] << 0x40;
        auVar30[10] = auVar80[0xd];
        auVar30._0_10_ = Var79;
        auVar30[0xb] = 0;
        uVar91 = auVar87[7];
        auVar17[0xd] = 0;
        auVar17._0_13_ = auVar87._0_13_;
        auVar17[0xe] = uVar91;
        auVar20[0xc] = auVar87[6];
        auVar20._0_12_ = auVar87._0_12_;
        auVar20._13_2_ = auVar17._13_2_;
        auVar23[0xb] = 0;
        auVar23._0_11_ = auVar87._0_11_;
        auVar23._12_3_ = auVar20._12_3_;
        auVar26[10] = auVar87[5];
        auVar26._0_10_ = auVar87._0_10_;
        auVar26._11_4_ = auVar23._11_4_;
        auVar31[9] = 0;
        auVar31._0_9_ = auVar87._0_9_;
        auVar31._10_5_ = auVar26._10_5_;
        auVar36[8] = auVar87[4];
        auVar36._0_8_ = auVar87._0_8_;
        auVar36._9_6_ = auVar31._9_6_;
        auVar48._7_8_ = 0;
        auVar48._0_7_ = auVar36._8_7_;
        Var49 = CONCAT81(SUB158(auVar48 << 0x40,7),auVar87[3]);
        auVar59._9_6_ = 0;
        auVar59._0_9_ = Var49;
        auVar50._1_10_ = SUB1510(auVar59 << 0x30,5);
        auVar50[0] = auVar87[2];
        auVar60._11_4_ = 0;
        auVar60._0_11_ = auVar50;
        uVar92 = auVar87._0_2_;
        auVar45[2] = auVar87[1];
        auVar45._0_2_ = uVar92;
        auVar45._3_12_ = SUB1512(auVar60 << 0x20,3);
        auVar51._13_2_ = 0;
        auVar51._0_13_ = auVar45._2_13_;
        auVar18[0xd] = 0;
        auVar18._0_13_ = auVar80._0_13_;
        auVar18[0xe] = auVar80[7];
        auVar21[0xc] = auVar80[6];
        auVar21._0_12_ = auVar80._0_12_;
        auVar21._13_2_ = auVar18._13_2_;
        auVar24[0xb] = 0;
        auVar24._0_11_ = auVar80._0_11_;
        auVar24._12_3_ = auVar21._12_3_;
        auVar27[10] = auVar80[5];
        auVar27._0_10_ = auVar80._0_10_;
        auVar27._11_4_ = auVar24._11_4_;
        auVar32[9] = 0;
        auVar32._0_9_ = auVar80._0_9_;
        auVar32._10_5_ = auVar27._10_5_;
        auVar37[8] = auVar80[4];
        auVar37._0_8_ = auVar80._0_8_;
        auVar37._9_6_ = auVar32._9_6_;
        auVar52._7_8_ = 0;
        auVar52._0_7_ = auVar37._8_7_;
        Var53 = CONCAT81(SUB158(auVar52 << 0x40,7),auVar80[3]);
        auVar61._9_6_ = 0;
        auVar61._0_9_ = Var53;
        auVar54._1_10_ = SUB1510(auVar61 << 0x30,5);
        auVar54[0] = auVar80[2];
        auVar62._11_4_ = 0;
        auVar62._0_11_ = auVar54;
        auVar46[2] = auVar80[1];
        auVar46._0_2_ = auVar80._0_2_;
        auVar46._3_12_ = SUB1512(auVar62 << 0x20,3);
        auVar55._13_2_ = 0;
        auVar55._0_13_ = auVar46._2_13_;
        auVar19[0xd] = 0;
        auVar19._0_13_ = auVar88._0_13_;
        auVar19[0xe] = auVar88[7];
        auVar22[0xc] = auVar88[6];
        auVar22._0_12_ = auVar88._0_12_;
        auVar22._13_2_ = auVar19._13_2_;
        auVar25[0xb] = 0;
        auVar25._0_11_ = auVar88._0_11_;
        auVar25._12_3_ = auVar22._12_3_;
        auVar28[10] = auVar88[5];
        auVar28._0_10_ = auVar88._0_10_;
        auVar28._11_4_ = auVar25._11_4_;
        auVar33[9] = 0;
        auVar33._0_9_ = auVar88._0_9_;
        auVar33._10_5_ = auVar28._10_5_;
        auVar38[8] = auVar88[4];
        auVar38._0_8_ = auVar88._0_8_;
        auVar38._9_6_ = auVar33._9_6_;
        auVar56._7_8_ = 0;
        auVar56._0_7_ = auVar38._8_7_;
        Var57 = CONCAT81(SUB158(auVar56 << 0x40,7),auVar88[3]);
        auVar63._9_6_ = 0;
        auVar63._0_9_ = Var57;
        auVar58._1_10_ = SUB1510(auVar63 << 0x30,5);
        auVar58[0] = auVar88[2];
        auVar64._11_4_ = 0;
        auVar64._0_11_ = auVar58;
        auVar47[2] = auVar88[1];
        auVar47._0_2_ = auVar88._0_2_;
        auVar47._3_12_ = SUB1512(auVar64 << 0x20,3);
        uVar96 = (undefined2)Var49;
        auVar100._0_12_ = SUB1512(auVar55 << 0x10,0);
        auVar100._12_2_ = (short)Var53;
        auVar100._14_2_ = uVar96;
        auVar94._12_4_ = auVar100._12_4_;
        auVar94._0_10_ = SUB1510(auVar55 << 0x10,0);
        auVar94._10_2_ = auVar50._0_2_;
        auVar84._10_6_ = auVar94._10_6_;
        auVar84._8_2_ = auVar54._0_2_;
        auVar84._6_2_ = auVar45._2_2_;
        auVar84._4_2_ = auVar46._2_2_;
        auVar84._0_4_ = CONCAT22(uVar92,auVar80._0_2_) & 0xff00ff;
        auVar83._2_2_ = auVar36._8_2_;
        auVar83._0_2_ = auVar37._8_2_;
        auVar83._4_2_ = auVar27._10_2_;
        auVar83._6_2_ = auVar26._10_2_;
        auVar83._8_2_ = auVar21._12_2_;
        auVar83._10_2_ = auVar20._12_2_;
        auVar83[0xc] = auVar80[7];
        auVar83[0xd] = 0;
        auVar83[0xe] = uVar91;
        auVar83[0xf] = 0;
        auVar99._0_12_ = SUB1512(auVar51 << 0x10,0);
        auVar99._12_2_ = uVar96;
        auVar99._14_2_ = (short)Var57;
        auVar98._12_4_ = auVar99._12_4_;
        auVar98._0_10_ = SUB1510(auVar51 << 0x10,0);
        auVar98._10_2_ = auVar58._0_2_;
        auVar97._10_6_ = auVar98._10_6_;
        auVar97._8_2_ = auVar50._0_2_;
        auVar97._6_2_ = auVar47._2_2_;
        auVar97._4_2_ = auVar45._2_2_;
        auVar97._0_4_ = CONCAT22(auVar88._0_2_,uVar92) & 0xff00ff;
        auVar93._2_2_ = auVar38._8_2_;
        auVar93._0_2_ = auVar36._8_2_;
        auVar93._4_2_ = auVar26._10_2_;
        auVar93._6_2_ = auVar28._10_2_;
        auVar93._8_2_ = auVar20._12_2_;
        auVar93._10_2_ = auVar22._12_2_;
        auVar93[0xc] = uVar91;
        auVar93[0xd] = 0;
        auVar93[0xe] = auVar88[7];
        auVar93[0xf] = 0;
        auVar81 = pmaddwd(auVar84,auVar65);
        auVar84 = pmaddwd(auVar83,auVar65);
        auVar94 = pmaddwd(auVar93,auVar66);
        auVar100 = pmaddwd(auVar97,auVar66);
        auVar95[1] = 0;
        auVar95[0] = auVar87[8];
        bVar90 = auVar87[0xc];
        uVar91 = auVar87[0xd];
        auVar29[10] = uVar91;
        auVar29._0_10_ = (unkuint10)bVar90 << 0x40;
        auVar29[0xb] = 0;
        auVar85._0_4_ = auVar84._0_4_ + auVar94._0_4_ + iVar70 >> 0x10;
        auVar85._4_4_ = auVar84._4_4_ + auVar94._4_4_ + iVar67 >> 0x10;
        auVar85._8_4_ = auVar84._8_4_ + auVar94._8_4_ + iVar68 >> 0x10;
        auVar85._12_4_ = auVar84._12_4_ + auVar94._12_4_ + iVar69 >> 0x10;
        auVar82._0_4_ = auVar81._0_4_ + auVar100._0_4_ + iVar70 >> 0x10;
        auVar82._4_4_ = auVar81._4_4_ + auVar100._4_4_ + iVar67 >> 0x10;
        auVar82._8_4_ = auVar81._8_4_ + auVar100._8_4_ + iVar68 >> 0x10;
        auVar82._12_4_ = auVar81._12_4_ + auVar100._12_4_ + iVar69 >> 0x10;
        auVar29[0xc] = auVar87[0xb];
        auVar29[0xd] = 0;
        auVar29[0xe] = auVar88[0xb];
        auVar34[10] = auVar88[10];
        auVar34._0_10_ = (unkuint10)bVar90 << 0x40;
        auVar34[0xb] = 0;
        auVar34._12_3_ = auVar29._12_3_;
        auVar39._10_5_ = auVar34._10_5_;
        auVar39._0_10_ = (unkuint10)auVar87[10] << 0x40;
        auVar41._8_7_ = auVar39._8_7_;
        auVar41._0_8_ = (ulong)auVar88[9] << 0x30;
        auVar43._6_9_ = auVar41._6_9_;
        auVar43._0_6_ = (uint6)auVar87[9] << 0x20;
        auVar95[2] = auVar88[8];
        auVar95[3] = 0;
        auVar95._4_11_ = auVar43._4_11_;
        auVar95[0xf] = 0;
        auVar84 = packssdw(auVar82,auVar85);
        auVar81[1] = 0;
        auVar81[0] = auVar80[0xc];
        auVar89[1] = 0;
        auVar89[0] = bVar90;
        auVar81[2] = bVar90;
        auVar81[3] = 0;
        auVar81[4] = auVar80[0xd];
        auVar81[5] = 0;
        auVar81[6] = uVar91;
        auVar81[7] = 0;
        auVar81[8] = auVar80[0xe];
        auVar81[9] = 0;
        auVar81[10] = auVar87[0xe];
        auVar81[0xb] = 0;
        auVar81[0xc] = auVar80[0xf];
        auVar81[0xd] = 0;
        auVar81[0xe] = auVar87[0xf];
        auVar81[0xf] = 0;
        auVar30[0xc] = auVar80[0xb];
        auVar30[0xd] = 0;
        auVar30[0xe] = auVar87[0xb];
        auVar35[10] = auVar87[10];
        auVar35._0_10_ = Var79;
        auVar35[0xb] = 0;
        auVar35._12_3_ = auVar30._12_3_;
        auVar40._10_5_ = auVar35._10_5_;
        auVar40._0_10_ = (unkuint10)auVar80[10] << 0x40;
        auVar42._8_7_ = auVar40._8_7_;
        auVar42._0_8_ = (ulong)auVar87[9] << 0x30;
        auVar44._6_9_ = auVar42._6_9_;
        auVar44._0_6_ = (uint6)auVar80[9] << 0x20;
        auVar86[2] = auVar87[8];
        auVar86[3] = 0;
        auVar86._4_11_ = auVar44._4_11_;
        auVar86[0xf] = 0;
        auVar89[2] = auVar88[0xc];
        auVar89[3] = 0;
        auVar89[4] = uVar91;
        auVar89[5] = 0;
        auVar89[6] = auVar88[0xd];
        auVar89[7] = 0;
        auVar89[8] = auVar87[0xe];
        auVar89[9] = 0;
        auVar89[10] = auVar88[0xe];
        auVar89[0xb] = 0;
        auVar89[0xc] = auVar87[0xf];
        auVar89[0xd] = 0;
        auVar89[0xe] = auVar88[0xf];
        auVar89[0xf] = 0;
        auVar80 = pmaddwd(auVar81,auVar65);
        auVar87 = pmaddwd(auVar86,auVar65);
        auVar94 = pmaddwd(auVar95,auVar66);
        auVar81 = pmaddwd(auVar89,auVar66);
        auVar88._0_4_ = auVar87._0_4_ + auVar94._0_4_ + iVar70 >> 0x10;
        auVar88._4_4_ = auVar87._4_4_ + auVar94._4_4_ + iVar67 >> 0x10;
        auVar88._8_4_ = auVar87._8_4_ + auVar94._8_4_ + iVar68 >> 0x10;
        auVar88._12_4_ = auVar87._12_4_ + auVar94._12_4_ + iVar69 >> 0x10;
        auVar87._0_4_ = auVar80._0_4_ + auVar81._0_4_ + iVar70 >> 0x10;
        auVar87._4_4_ = auVar80._4_4_ + auVar81._4_4_ + iVar67 >> 0x10;
        auVar87._8_4_ = auVar80._8_4_ + auVar81._8_4_ + iVar68 >> 0x10;
        auVar87._12_4_ = auVar80._12_4_ + auVar81._12_4_ + iVar69 >> 0x10;
        auVar80 = packssdw(auVar88,auVar87);
        sVar1 = auVar84._0_2_;
        sVar2 = auVar84._2_2_;
        sVar3 = auVar84._4_2_;
        sVar4 = auVar84._6_2_;
        sVar5 = auVar84._8_2_;
        sVar6 = auVar84._10_2_;
        sVar7 = auVar84._12_2_;
        sVar8 = auVar84._14_2_;
        sVar9 = auVar80._0_2_;
        sVar10 = auVar80._2_2_;
        sVar11 = auVar80._4_2_;
        sVar12 = auVar80._6_2_;
        sVar13 = auVar80._8_2_;
        sVar14 = auVar80._10_2_;
        sVar15 = auVar80._12_2_;
        sVar16 = auVar80._14_2_;
        *pcVar73 = (0 < sVar1) * (sVar1 < 0x100) * auVar84[0] - (0xff < sVar1);
        pcVar73[1] = (0 < sVar2) * (sVar2 < 0x100) * auVar84[2] - (0xff < sVar2);
        pcVar73[2] = (0 < sVar3) * (sVar3 < 0x100) * auVar84[4] - (0xff < sVar3);
        pcVar73[3] = (0 < sVar4) * (sVar4 < 0x100) * auVar84[6] - (0xff < sVar4);
        pcVar73[4] = (0 < sVar5) * (sVar5 < 0x100) * auVar84[8] - (0xff < sVar5);
        pcVar73[5] = (0 < sVar6) * (sVar6 < 0x100) * auVar84[10] - (0xff < sVar6);
        pcVar73[6] = (0 < sVar7) * (sVar7 < 0x100) * auVar84[0xc] - (0xff < sVar7);
        pcVar73[7] = (0 < sVar8) * (sVar8 < 0x100) * auVar84[0xe] - (0xff < sVar8);
        pcVar73[8] = (0 < sVar9) * (sVar9 < 0x100) * auVar80[0] - (0xff < sVar9);
        pcVar73[9] = (0 < sVar10) * (sVar10 < 0x100) * auVar80[2] - (0xff < sVar10);
        pcVar73[10] = (0 < sVar11) * (sVar11 < 0x100) * auVar80[4] - (0xff < sVar11);
        pcVar73[0xb] = (0 < sVar12) * (sVar12 < 0x100) * auVar80[6] - (0xff < sVar12);
        pcVar73[0xc] = (0 < sVar13) * (sVar13 < 0x100) * auVar80[8] - (0xff < sVar13);
        pcVar73[0xd] = (0 < sVar14) * (sVar14 < 0x100) * auVar80[10] - (0xff < sVar14);
        pcVar73[0xe] = (0 < sVar15) * (sVar15 < 0x100) * auVar80[0xc] - (0xff < sVar15);
        pcVar73[0xf] = (0 < sVar16) * (sVar16 < 0x100) * auVar80[0xe] - (0xff < sVar16);
        pauVar71 = pauVar72;
        pcVar73 = pcVar73 + 0x10;
      } while (pauVar72 != (undefined1 (*) [16])&local_68);
      iVar75 = iVar75 + 0x20;
      pbVar74 = pbVar74 + 0x60;
      pcVar77 = pcVar77 + 0x20;
    } while (iVar75 < (int)uVar78);
    uVar78 = (uVar78 - 1 >> 5) + 1;
    iVar70 = uVar78 * 0x20;
    param_1 = param_1 + (ulong)uVar78 * 0x60;
  }
  if (iVar70 < (int)param_3) {
    pcVar77 = param_2 + iVar70;
    pbVar74 = param_1;
    do {
      pbVar76 = pbVar74 + 3;
      *pcVar77 = (char)((uint)*pbVar74 * 0x41c7 + (uint)pbVar74[1] * 0x8123 + 0x108000 +
                        (uint)pbVar74[2] * 0x1914 >> 0x10);
      pcVar77 = pcVar77 + 1;
      pbVar74 = pbVar76;
    } while (pbVar76 != param_1 + (ulong)(param_3 - iVar70) * 3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertARGBToY_SSE2(long param_1,long param_2,uint param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
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
  short sVar18;
  short sVar19;
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  uint uVar28;
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  byte bVar55;
  byte bVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [15];
  unkuint9 Var86;
  undefined1 auVar87 [11];
  undefined1 auVar88 [13];
  undefined1 auVar89 [15];
  undefined1 auVar90 [15];
  unkuint9 Var91;
  undefined1 auVar92 [11];
  undefined1 auVar93 [15];
  undefined1 auVar94 [15];
  unkuint9 Var95;
  undefined1 auVar96 [11];
  undefined8 uVar97;
  undefined1 auVar98 [15];
  undefined1 auVar99 [15];
  undefined1 auVar100 [15];
  undefined1 auVar101 [15];
  undefined1 auVar102 [15];
  undefined1 auVar103 [15];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  int iVar106;
  int iVar107;
  int iVar108;
  int iVar109;
  long lVar110;
  uint uVar111;
  undefined1 auVar112 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar130 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar140 [16];
  undefined1 auVar147 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 uVar166;
  byte bVar167;
  byte bVar168;
  undefined1 uVar169;
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  uint3 uVar170;
  undefined1 auVar171 [16];
  undefined1 auVar179 [16];
  undefined2 uVar181;
  undefined2 uVar193;
  undefined1 auVar182 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar194 [16];
  undefined1 auVar197 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar131 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar132 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  byte bVar135;
  byte bVar136;
  undefined1 uVar137;
  byte bVar138;
  byte bVar139;
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar141 [16];
  undefined1 auVar150 [16];
  undefined1 auVar142 [16];
  undefined1 auVar151 [16];
  undefined1 auVar143 [16];
  undefined1 auVar152 [16];
  undefined1 auVar144 [16];
  undefined1 auVar153 [16];
  undefined1 auVar145 [16];
  undefined1 auVar154 [16];
  undefined1 auVar146 [16];
  undefined1 auVar155 [16];
  undefined1 uVar162;
  undefined1 uVar163;
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined8 uVar180;
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  
  iVar109 = _UNK_00102c5c;
  iVar108 = _UNK_00102c58;
  iVar107 = _UNK_00102c54;
  iVar106 = __LC12;
  auVar105 = __LC11;
  auVar104 = __LC10;
  uVar111 = param_3 & 0xfffffff0;
  if ((int)uVar111 < 1) {
    uVar111 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    lVar110 = 0;
    do {
      auVar133 = *(undefined1 (*) [16])(param_1 + lVar110 * 4);
      puVar2 = (undefined1 *)(param_1 + 0x10 + lVar110 * 4);
      uVar50 = puVar2[5];
      uVar51 = puVar2[9];
      uVar52 = puVar2[0xc];
      uVar53 = puVar2[0xd];
      uVar54 = puVar2[0xe];
      puVar3 = (undefined1 *)(param_1 + 0x30 + lVar110 * 4);
      bVar55 = puVar3[1];
      bVar56 = puVar3[2];
      uVar57 = puVar3[4];
      uVar58 = puVar3[5];
      uVar59 = puVar3[6];
      uVar60 = puVar3[9];
      uVar61 = puVar3[10];
      uVar62 = puVar3[0xd];
      auVar146._0_14_ = auVar133._0_14_;
      auVar146[0xe] = auVar133[7];
      auVar146[0xf] = puVar2[7];
      auVar145._14_2_ = auVar146._14_2_;
      auVar145._0_13_ = auVar133._0_13_;
      auVar145[0xd] = puVar2[6];
      auVar144._13_3_ = auVar145._13_3_;
      auVar144._0_12_ = auVar133._0_12_;
      auVar144[0xc] = auVar133[6];
      auVar143._12_4_ = auVar144._12_4_;
      auVar143._0_11_ = auVar133._0_11_;
      auVar143[0xb] = uVar50;
      uVar163 = auVar133[5];
      auVar142._11_5_ = auVar143._11_5_;
      auVar142._0_10_ = auVar133._0_10_;
      auVar142[10] = uVar163;
      auVar141._10_6_ = auVar142._10_6_;
      auVar141._0_9_ = auVar133._0_9_;
      auVar141[9] = puVar2[4];
      uVar162 = auVar133[4];
      auVar140._9_7_ = auVar141._9_7_;
      auVar140._0_8_ = auVar133._0_8_;
      auVar140[8] = uVar162;
      auVar64._1_8_ = auVar140._8_8_;
      auVar64[0] = puVar2[3];
      auVar64._9_7_ = 0;
      auVar63._10_6_ = 0;
      auVar63._0_10_ = SUB1610(auVar64 << 0x38,6);
      auVar197._11_5_ = 0;
      auVar197._0_11_ = SUB1611(auVar63 << 0x30,5);
      auVar191._12_4_ = 0;
      auVar191._0_12_ = SUB1612(auVar197 << 0x28,4);
      auVar160._13_3_ = 0;
      auVar160._0_13_ = SUB1613(auVar191 << 0x20,3);
      auVar157._14_2_ = 0;
      auVar157._0_14_ = SUB1614(auVar160 << 0x18,2);
      auVar157 = auVar157 << 0x10;
      auVar160 = *(undefined1 (*) [16])(param_1 + 0x20 + lVar110 * 4);
      uVar166 = auVar160[8];
      bVar167 = auVar160[9];
      bVar168 = auVar160[10];
      uVar169 = auVar160[0xd];
      auVar129._0_14_ = auVar160._0_14_;
      auVar129[0xe] = auVar160[7];
      auVar129[0xf] = puVar3[7];
      auVar128._14_2_ = auVar129._14_2_;
      auVar128._0_13_ = auVar160._0_13_;
      auVar128[0xd] = uVar59;
      bVar139 = auVar160[6];
      auVar127._13_3_ = auVar128._13_3_;
      auVar127._0_12_ = auVar160._0_12_;
      auVar127[0xc] = bVar139;
      auVar126._12_4_ = auVar127._12_4_;
      auVar126._0_11_ = auVar160._0_11_;
      auVar126[0xb] = uVar58;
      bVar138 = auVar160[5];
      auVar125._11_5_ = auVar126._11_5_;
      auVar125._0_10_ = auVar160._0_10_;
      auVar125[10] = bVar138;
      auVar124._10_6_ = auVar125._10_6_;
      auVar124._0_9_ = auVar160._0_9_;
      auVar124[9] = uVar57;
      uVar137 = auVar160[4];
      auVar123._9_7_ = auVar124._9_7_;
      auVar123._0_8_ = auVar160._0_8_;
      auVar123[8] = uVar137;
      auVar69._1_8_ = auVar123._8_8_;
      auVar69[0] = puVar3[3];
      auVar69._9_7_ = 0;
      auVar68._10_6_ = 0;
      auVar68._0_10_ = SUB1610(auVar69 << 0x38,6);
      bVar136 = auVar160[2];
      auVar67._11_5_ = 0;
      auVar67._0_11_ = SUB1611(auVar68 << 0x30,5);
      auVar66._12_4_ = 0;
      auVar66._0_12_ = SUB1612(auVar67 << 0x28,4);
      bVar135 = auVar160[1];
      auVar65._13_3_ = 0;
      auVar65._0_13_ = SUB1613(auVar66 << 0x20,3);
      auVar122._14_2_ = 0;
      auVar122._0_14_ = SUB1614(auVar65 << 0x18,2);
      auVar122 = auVar122 << 0x10;
      auVar119._0_14_ = auVar157._0_14_;
      auVar119[0xe] = puVar2[3];
      auVar119[0xf] = puVar2[0xb];
      auVar118._14_2_ = auVar119._14_2_;
      auVar118._0_13_ = auVar157._0_13_;
      auVar118[0xd] = auVar133[0xb];
      auVar117._13_3_ = auVar118._13_3_;
      auVar117._0_12_ = auVar157._0_12_;
      auVar117[0xc] = auVar133[3];
      auVar116._12_4_ = auVar117._12_4_;
      auVar116._0_11_ = auVar157._0_11_;
      auVar116[0xb] = puVar2[10];
      auVar115._11_5_ = auVar116._11_5_;
      auVar115._0_10_ = auVar157._0_10_;
      auVar115[10] = puVar2[2];
      auVar114._10_6_ = auVar115._10_6_;
      auVar114._0_9_ = auVar157._0_9_;
      auVar114[9] = auVar133[10];
      auVar113._9_7_ = auVar114._9_7_;
      auVar113._0_8_ = auVar157._0_8_;
      auVar113[8] = auVar133[2];
      auVar74._1_8_ = auVar113._8_8_;
      auVar74[0] = uVar51;
      auVar74._9_7_ = 0;
      auVar73._10_6_ = 0;
      auVar73._0_10_ = SUB1610(auVar74 << 0x38,6);
      auVar72._11_5_ = 0;
      auVar72._0_11_ = SUB1611(auVar73 << 0x30,5);
      auVar71._12_4_ = 0;
      auVar71._0_12_ = SUB1612(auVar72 << 0x28,4);
      auVar70._13_3_ = 0;
      auVar70._0_13_ = SUB1613(auVar71 << 0x20,3);
      auVar112._14_2_ = 0;
      auVar112._0_14_ = SUB1614(auVar70 << 0x18,2);
      auVar112 = auVar112 << 0x10;
      auVar189._0_14_ = auVar122._0_14_;
      auVar189[0xe] = puVar3[3];
      auVar189[0xf] = puVar3[0xb];
      auVar188._14_2_ = auVar189._14_2_;
      auVar188._0_13_ = auVar122._0_13_;
      auVar188[0xd] = auVar160[0xb];
      auVar187._13_3_ = auVar188._13_3_;
      auVar187._0_12_ = auVar122._0_12_;
      auVar187[0xc] = auVar160[3];
      auVar186._12_4_ = auVar187._12_4_;
      auVar186._0_11_ = auVar122._0_11_;
      auVar186[0xb] = uVar61;
      auVar185._11_5_ = auVar186._11_5_;
      auVar185._0_10_ = auVar122._0_10_;
      auVar185[10] = bVar56;
      auVar184._10_6_ = auVar185._10_6_;
      auVar184._0_9_ = auVar122._0_9_;
      auVar184[9] = bVar168;
      auVar183._9_7_ = auVar184._9_7_;
      auVar183._0_8_ = auVar122._0_8_;
      auVar183[8] = bVar136;
      auVar79._1_8_ = auVar183._8_8_;
      auVar79[0] = uVar60;
      auVar79._9_7_ = 0;
      auVar78._10_6_ = 0;
      auVar78._0_10_ = SUB1610(auVar79 << 0x38,6);
      auVar77._11_5_ = 0;
      auVar77._0_11_ = SUB1611(auVar78 << 0x30,5);
      auVar76._12_4_ = 0;
      auVar76._0_12_ = SUB1612(auVar77 << 0x28,4);
      auVar75._13_3_ = 0;
      auVar75._0_13_ = SUB1613(auVar76 << 0x20,3);
      auVar182._2_14_ = SUB1614(auVar75 << 0x18,2);
      auVar182._0_2_ = CONCAT11(uVar166,auVar160[0]);
      auVar178._0_14_ = auVar112._0_14_;
      auVar178[0xe] = uVar51;
      auVar178[0xf] = uVar53;
      auVar177._14_2_ = auVar178._14_2_;
      auVar177._0_13_ = auVar112._0_13_;
      auVar177[0xd] = uVar50;
      auVar176._13_3_ = auVar177._13_3_;
      auVar176._0_12_ = auVar112._0_12_;
      auVar176[0xc] = puVar2[1];
      auVar175._12_4_ = auVar176._12_4_;
      auVar175._0_11_ = auVar112._0_11_;
      auVar175[0xb] = auVar133[0xd];
      auVar174._11_5_ = auVar175._11_5_;
      auVar174._0_10_ = auVar112._0_10_;
      auVar174[10] = auVar133[9];
      auVar173._10_6_ = auVar174._10_6_;
      auVar173._0_9_ = auVar112._0_9_;
      auVar173[9] = uVar163;
      auVar172._9_7_ = auVar173._9_7_;
      auVar172._0_8_ = auVar112._0_8_;
      auVar172[8] = auVar133[1];
      uVar180 = auVar172._8_8_;
      auVar84._1_8_ = uVar180;
      auVar84[0] = uVar52;
      auVar84._9_7_ = 0;
      auVar83._10_6_ = 0;
      auVar83._0_10_ = SUB1610(auVar84 << 0x38,6);
      auVar82._11_5_ = 0;
      auVar82._0_11_ = SUB1611(auVar83 << 0x30,5);
      auVar81._12_4_ = 0;
      auVar81._0_12_ = SUB1612(auVar82 << 0x28,4);
      auVar80._13_3_ = 0;
      auVar80._0_13_ = SUB1613(auVar81 << 0x20,3);
      auVar171._2_14_ = SUB1614(auVar80 << 0x18,2);
      auVar171._0_2_ = CONCAT11(uVar162,auVar133[0]);
      auVar120[2] = bVar139;
      auVar120[1] = bVar136;
      auVar120[3] = bVar168;
      auVar120[4] = auVar160[0xe];
      auVar120[5] = bVar56;
      auVar120[6] = uVar59;
      auVar120[7] = uVar61;
      auVar120[8] = puVar3[0xe];
      auVar155._0_14_ = auVar182._0_14_;
      auVar155[0xe] = uVar60;
      auVar155[0xf] = uVar62;
      auVar154._14_2_ = auVar155._14_2_;
      auVar154._0_13_ = auVar182._0_13_;
      auVar154[0xd] = uVar58;
      auVar153._13_3_ = auVar154._13_3_;
      auVar153._0_12_ = auVar182._0_12_;
      auVar153[0xc] = bVar55;
      auVar152._12_4_ = auVar153._12_4_;
      auVar152._0_11_ = auVar182._0_11_;
      auVar152[0xb] = uVar169;
      auVar151._11_5_ = auVar152._11_5_;
      auVar151._0_10_ = auVar182._0_10_;
      auVar151[10] = bVar167;
      auVar150._10_6_ = auVar151._10_6_;
      auVar150._0_9_ = auVar182._0_9_;
      auVar150[9] = bVar138;
      auVar149._9_7_ = auVar150._9_7_;
      auVar149._0_8_ = auVar182._0_8_;
      auVar149[8] = bVar135;
      auVar148._8_8_ = auVar149._8_8_;
      auVar148[7] = puVar3[0xc];
      auVar148[6] = puVar3[8];
      auVar148[5] = uVar57;
      auVar148[4] = *puVar3;
      auVar148[3] = auVar160[0xc];
      auVar148[2] = uVar166;
      auVar148._0_2_ = auVar182._0_2_;
      auVar147._2_14_ = auVar148._2_14_;
      auVar147[1] = uVar137;
      auVar147[0] = auVar160[0];
      auVar120[0] = uVar54;
      auVar120._9_7_ = 0;
      auVar120 = auVar120 << 0x38;
      auVar164._8_8_ = auVar148._8_8_;
      auVar164._0_8_ = uVar180;
      auVar179._0_8_ = auVar171._0_8_;
      auVar179._8_8_ = auVar147._0_8_;
      auVar22[0xd] = 0;
      auVar22._0_13_ = auVar120._0_13_;
      auVar22[0xe] = uVar54;
      auVar25[0xc] = puVar2[10];
      auVar25._0_12_ = auVar120._0_12_;
      auVar25._13_2_ = auVar22._13_2_;
      auVar29[0xb] = 0;
      auVar29._0_11_ = auVar120._0_11_;
      auVar29._12_3_ = auVar25._12_3_;
      auVar34[10] = puVar2[6];
      auVar34._0_10_ = auVar120._0_10_;
      auVar34._11_4_ = auVar29._11_4_;
      auVar39[9] = 0;
      auVar39._0_9_ = auVar120._0_9_;
      auVar39._10_5_ = auVar34._10_5_;
      uVar97 = CONCAT62(auVar39._9_6_,CONCAT11(puVar2[2],uVar54));
      auVar85._7_8_ = 0;
      auVar85._0_7_ = (uint7)((ulong)uVar97 >> 8);
      Var86 = CONCAT81(SUB158(auVar85 << 0x40,7),auVar133[0xe]);
      auVar98._9_6_ = 0;
      auVar98._0_9_ = Var86;
      auVar87._1_10_ = SUB1510(auVar98 << 0x30,5);
      auVar87[0] = auVar133[10];
      auVar99._11_4_ = 0;
      auVar99._0_11_ = auVar87;
      auVar88._1_12_ = SUB1512(auVar99 << 0x20,3);
      auVar88[0] = auVar133[6];
      auVar89._13_2_ = 0;
      auVar89._0_13_ = auVar88;
      auVar20[0xd] = 0;
      auVar20._0_13_ = auVar164._0_13_;
      auVar20[0xe] = uVar53;
      auVar23[0xc] = uVar51;
      auVar23._0_12_ = auVar164._0_12_;
      auVar23._13_2_ = auVar20._13_2_;
      auVar26[0xb] = 0;
      auVar26._0_11_ = auVar164._0_11_;
      auVar26._12_3_ = auVar23._12_3_;
      auVar30[10] = uVar50;
      auVar30._0_10_ = auVar164._0_10_;
      auVar30._11_4_ = auVar26._11_4_;
      auVar35[9] = 0;
      auVar35._0_9_ = auVar164._0_9_;
      auVar35._10_5_ = auVar30._10_5_;
      auVar40[8] = puVar2[1];
      auVar40._0_8_ = uVar180;
      auVar40._9_6_ = auVar35._9_6_;
      auVar90._7_8_ = 0;
      auVar90._0_7_ = auVar40._8_7_;
      Var91 = CONCAT81(SUB158(auVar90 << 0x40,7),auVar133[0xd]);
      auVar100._9_6_ = 0;
      auVar100._0_9_ = Var91;
      auVar92._1_10_ = SUB1510(auVar100 << 0x30,5);
      auVar92[0] = auVar133[9];
      auVar101._11_4_ = 0;
      auVar101._0_11_ = auVar92;
      uVar181 = auVar172._8_2_;
      auVar48[2] = uVar163;
      auVar48._0_2_ = uVar181;
      auVar48._3_12_ = SUB1512(auVar101 << 0x20,3);
      auVar93._13_2_ = 0;
      auVar93._0_13_ = auVar48._2_13_;
      auVar21[0xd] = 0;
      auVar21._0_13_ = auVar179._0_13_;
      auVar21[0xe] = uVar52;
      auVar24[0xc] = puVar2[8];
      auVar24._0_12_ = auVar179._0_12_;
      auVar24._13_2_ = auVar21._13_2_;
      auVar27[0xb] = 0;
      auVar27._0_11_ = auVar179._0_11_;
      auVar27._12_3_ = auVar24._12_3_;
      auVar31[10] = puVar2[4];
      auVar31._0_10_ = auVar179._0_10_;
      auVar31._11_4_ = auVar27._11_4_;
      auVar36[9] = 0;
      auVar36._0_9_ = auVar179._0_9_;
      auVar36._10_5_ = auVar31._10_5_;
      auVar41[8] = *puVar2;
      auVar41._0_8_ = auVar179._0_8_;
      auVar41._9_6_ = auVar36._9_6_;
      auVar94._7_8_ = 0;
      auVar94._0_7_ = auVar41._8_7_;
      Var95 = CONCAT81(SUB158(auVar94 << 0x40,7),auVar133[0xc]);
      auVar102._9_6_ = 0;
      auVar102._0_9_ = Var95;
      auVar96._1_10_ = SUB1510(auVar102 << 0x30,5);
      auVar96[0] = auVar133[8];
      auVar103._11_4_ = 0;
      auVar103._0_11_ = auVar96;
      auVar49[2] = uVar162;
      auVar49._0_2_ = auVar171._0_2_;
      auVar49._3_12_ = SUB1512(auVar103 << 0x20,3);
      uVar193 = (undefined2)Var91;
      auVar132._0_12_ = SUB1512(auVar89 << 0x10,0);
      auVar132._12_2_ = (short)Var86;
      auVar132._14_2_ = uVar193;
      auVar131._12_4_ = auVar132._12_4_;
      auVar131._0_10_ = SUB1510(auVar89 << 0x10,0);
      auVar131._10_2_ = auVar92._0_2_;
      auVar130._10_6_ = auVar131._10_6_;
      auVar130._8_2_ = auVar87._0_2_;
      auVar130._6_2_ = auVar48._2_2_;
      auVar130._4_2_ = auVar88._0_2_;
      auVar130._0_4_ = CONCAT22(uVar181,(ushort)auVar133[2]) & 0xff00ff;
      auVar156._2_2_ = auVar40._8_2_;
      auVar156._0_2_ = (short)((ulong)uVar97 >> 8);
      auVar156._4_2_ = auVar34._10_2_;
      auVar156._6_2_ = auVar30._10_2_;
      auVar156._8_2_ = auVar25._12_2_;
      auVar156._10_2_ = auVar23._12_2_;
      auVar156[0xc] = uVar54;
      auVar156[0xd] = 0;
      auVar156[0xe] = uVar53;
      auVar156[0xf] = 0;
      auVar196._0_12_ = SUB1512(auVar93 << 0x10,0);
      auVar196._12_2_ = uVar193;
      auVar196._14_2_ = (short)Var95;
      auVar195._12_4_ = auVar196._12_4_;
      auVar195._0_10_ = SUB1510(auVar93 << 0x10,0);
      auVar195._10_2_ = auVar96._0_2_;
      auVar194._10_6_ = auVar195._10_6_;
      auVar194._8_2_ = auVar92._0_2_;
      auVar194._6_2_ = auVar49._2_2_;
      auVar194._4_2_ = auVar48._2_2_;
      uVar28 = CONCAT22(auVar171._0_2_,uVar181);
      auVar194._0_4_ = uVar28 & 0xff00ff;
      auVar190._2_2_ = auVar41._8_2_;
      auVar190._0_2_ = auVar40._8_2_;
      auVar190._4_2_ = auVar30._10_2_;
      auVar190._6_2_ = auVar31._10_2_;
      auVar190._8_2_ = auVar23._12_2_;
      auVar190._10_2_ = auVar24._12_2_;
      auVar190[0xc] = uVar53;
      auVar190[0xd] = 0;
      auVar190[0xe] = uVar52;
      auVar190[0xf] = 0;
      auVar133 = pmaddwd(auVar130,auVar104);
      auVar191 = pmaddwd(auVar190,auVar105);
      auVar157 = pmaddwd(auVar156,auVar104);
      auVar192[1] = 0;
      auVar192[0] = bVar135;
      auVar32[10] = uVar58;
      auVar32._0_10_ = (unkuint10)bVar55 << 0x40;
      auVar32[0xb] = 0;
      auVar197 = pmaddwd(auVar194,auVar105);
      auVar159[1] = 0;
      auVar159[0] = bVar136;
      auVar33[10] = uVar59;
      auVar33._0_10_ = (unkuint10)bVar56 << 0x40;
      auVar33[0xb] = 0;
      uVar170 = CONCAT12(uVar137,auVar182._0_2_) & 0xff00ff;
      auVar158._0_4_ = auVar157._0_4_ + auVar191._0_4_ + iVar106 >> 0x10;
      auVar158._4_4_ = auVar157._4_4_ + auVar191._4_4_ + iVar107 >> 0x10;
      auVar158._8_4_ = auVar157._8_4_ + auVar191._8_4_ + iVar108 >> 0x10;
      auVar158._12_4_ = auVar157._12_4_ + auVar191._12_4_ + iVar109 >> 0x10;
      auVar134._0_4_ = auVar133._0_4_ + auVar197._0_4_ + iVar106 >> 0x10;
      auVar134._4_4_ = auVar133._4_4_ + auVar197._4_4_ + iVar107 >> 0x10;
      auVar134._8_4_ = auVar133._8_4_ + auVar197._8_4_ + iVar108 >> 0x10;
      auVar134._12_4_ = auVar133._12_4_ + auVar197._12_4_ + iVar109 >> 0x10;
      auVar32[0xc] = uVar169;
      auVar32[0xd] = 0;
      auVar32[0xe] = auVar160[0xc];
      auVar37[10] = uVar166;
      auVar37._0_10_ = (unkuint10)bVar55 << 0x40;
      auVar37[0xb] = 0;
      auVar37._12_3_ = auVar32._12_3_;
      auVar42._10_5_ = auVar37._10_5_;
      auVar42._0_10_ = (unkuint10)bVar167 << 0x40;
      auVar44._8_7_ = auVar42._8_7_;
      auVar44._0_8_ = (ulong)(byte)(uVar170 >> 0x10) << 0x30;
      auVar46._6_9_ = auVar44._6_9_;
      auVar46._0_6_ = (uint6)bVar138 << 0x20;
      auVar192._2_2_ = (short)uVar170;
      auVar192._4_11_ = auVar46._4_11_;
      auVar192[0xf] = 0;
      auVar157 = packssdw(auVar134,auVar158);
      auVar133[1] = 0;
      auVar133[0] = bVar56;
      auVar165[1] = 0;
      auVar165[0] = bVar55;
      auVar133[2] = bVar55;
      auVar133[3] = 0;
      auVar133[4] = uVar59;
      auVar133[5] = 0;
      auVar133[6] = uVar58;
      auVar133[7] = 0;
      auVar133[8] = uVar61;
      auVar133[9] = 0;
      auVar133[10] = uVar60;
      auVar133[0xb] = 0;
      auVar133[0xc] = puVar3[0xe];
      auVar133[0xd] = 0;
      auVar133[0xe] = uVar62;
      auVar133[0xf] = 0;
      auVar33[0xc] = auVar160[0xe];
      auVar33[0xd] = 0;
      auVar33[0xe] = uVar169;
      auVar38[10] = bVar167;
      auVar38._0_10_ = (unkuint10)bVar56 << 0x40;
      auVar38[0xb] = 0;
      auVar38._12_3_ = auVar33._12_3_;
      auVar43._10_5_ = auVar38._10_5_;
      auVar43._0_10_ = (unkuint10)bVar168 << 0x40;
      auVar45._8_7_ = auVar43._8_7_;
      auVar45._0_8_ = (ulong)bVar138 << 0x30;
      auVar47._6_9_ = auVar45._6_9_;
      auVar47._0_6_ = (uint6)bVar139 << 0x20;
      auVar159[2] = bVar135;
      auVar159[3] = 0;
      auVar159._4_11_ = auVar47._4_11_;
      auVar159[0xf] = 0;
      auVar165[2] = *puVar3;
      auVar165[3] = 0;
      auVar165[4] = uVar58;
      auVar165[5] = 0;
      auVar165[6] = uVar57;
      auVar165[7] = 0;
      auVar165[8] = uVar60;
      auVar165[9] = 0;
      auVar165[10] = puVar3[8];
      auVar165[0xb] = 0;
      auVar165[0xc] = uVar62;
      auVar165[0xd] = 0;
      auVar165[0xe] = puVar3[0xc];
      auVar165[0xf] = 0;
      auVar133 = pmaddwd(auVar133,auVar104);
      auVar160 = pmaddwd(auVar159,auVar104);
      auVar197 = pmaddwd(auVar192,auVar105);
      auVar191 = pmaddwd(auVar165,auVar105);
      auVar161._0_4_ = auVar160._0_4_ + auVar197._0_4_ + iVar106 >> 0x10;
      auVar161._4_4_ = auVar160._4_4_ + auVar197._4_4_ + iVar107 >> 0x10;
      auVar161._8_4_ = auVar160._8_4_ + auVar197._8_4_ + iVar108 >> 0x10;
      auVar161._12_4_ = auVar160._12_4_ + auVar197._12_4_ + iVar109 >> 0x10;
      auVar121._0_4_ = auVar133._0_4_ + auVar191._0_4_ + iVar106 >> 0x10;
      auVar121._4_4_ = auVar133._4_4_ + auVar191._4_4_ + iVar107 >> 0x10;
      auVar121._8_4_ = auVar133._8_4_ + auVar191._8_4_ + iVar108 >> 0x10;
      auVar121._12_4_ = auVar133._12_4_ + auVar191._12_4_ + iVar109 >> 0x10;
      auVar133 = packssdw(auVar161,auVar121);
      sVar4 = auVar157._0_2_;
      sVar5 = auVar157._2_2_;
      sVar6 = auVar157._4_2_;
      sVar7 = auVar157._6_2_;
      sVar8 = auVar157._8_2_;
      sVar9 = auVar157._10_2_;
      sVar10 = auVar157._12_2_;
      sVar11 = auVar157._14_2_;
      sVar12 = auVar133._0_2_;
      sVar13 = auVar133._2_2_;
      sVar14 = auVar133._4_2_;
      sVar15 = auVar133._6_2_;
      sVar16 = auVar133._8_2_;
      sVar17 = auVar133._10_2_;
      sVar18 = auVar133._12_2_;
      sVar19 = auVar133._14_2_;
      pcVar1 = (char *)(param_2 + lVar110);
      *pcVar1 = (0 < sVar4) * (sVar4 < 0x100) * auVar157[0] - (0xff < sVar4);
      pcVar1[1] = (0 < sVar5) * (sVar5 < 0x100) * auVar157[2] - (0xff < sVar5);
      pcVar1[2] = (0 < sVar6) * (sVar6 < 0x100) * auVar157[4] - (0xff < sVar6);
      pcVar1[3] = (0 < sVar7) * (sVar7 < 0x100) * auVar157[6] - (0xff < sVar7);
      pcVar1[4] = (0 < sVar8) * (sVar8 < 0x100) * auVar157[8] - (0xff < sVar8);
      pcVar1[5] = (0 < sVar9) * (sVar9 < 0x100) * auVar157[10] - (0xff < sVar9);
      pcVar1[6] = (0 < sVar10) * (sVar10 < 0x100) * auVar157[0xc] - (0xff < sVar10);
      pcVar1[7] = (0 < sVar11) * (sVar11 < 0x100) * auVar157[0xe] - (0xff < sVar11);
      pcVar1[8] = (0 < sVar12) * (sVar12 < 0x100) * auVar133[0] - (0xff < sVar12);
      pcVar1[9] = (0 < sVar13) * (sVar13 < 0x100) * auVar133[2] - (0xff < sVar13);
      pcVar1[10] = (0 < sVar14) * (sVar14 < 0x100) * auVar133[4] - (0xff < sVar14);
      pcVar1[0xb] = (0 < sVar15) * (sVar15 < 0x100) * auVar133[6] - (0xff < sVar15);
      pcVar1[0xc] = (0 < sVar16) * (sVar16 < 0x100) * auVar133[8] - (0xff < sVar16);
      pcVar1[0xd] = (0 < sVar17) * (sVar17 < 0x100) * auVar133[10] - (0xff < sVar17);
      pcVar1[0xe] = (0 < sVar18) * (sVar18 < 0x100) * auVar133[0xc] - (0xff < sVar18);
      pcVar1[0xf] = (0 < sVar19) * (sVar19 < 0x100) * auVar133[0xe] - (0xff < sVar19);
      lVar110 = lVar110 + 0x10;
    } while ((int)lVar110 < (int)uVar111);
    if ((int)param_3 <= (int)uVar111) {
      return;
    }
  }
  lVar110 = (long)(int)uVar111;
  do {
    uVar111 = *(uint *)(param_1 + lVar110 * 4);
    *(char *)(param_2 + lVar110) =
         (char)((uVar111 >> 0x10 & 0xff) * 0x41c7 + (uVar111 >> 8 & 0xff) * 0x8123 + 0x108000 +
                (uVar111 & 0xff) * 0x1914 >> 0x10);
    lVar110 = lVar110 + 1;
  } while ((int)lVar110 < (int)param_3);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertRGBA32ToUV_SSE2(undefined1 (*param_1) [16],char *param_2,char *param_3,uint param_4)

{
  short sVar1;
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
  short sVar18;
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
  undefined2 uVar33;
  undefined2 uVar34;
  undefined2 uVar35;
  undefined2 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 (*pauVar46) [16];
  undefined1 (*pauVar47) [16];
  long lVar48;
  char *pcVar49;
  char *pcVar50;
  long lVar51;
  uint uVar52;
  undefined2 uVar61;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined2 uVar62;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined2 uVar78;
  undefined1 auVar63 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar72 [16];
  undefined1 auVar76 [16];
  undefined1 auVar79 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined2 uVar94;
  undefined1 auVar84 [16];
  undefined1 auVar88 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar95 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar124 [16];
  undefined1 auVar69 [16];
  undefined1 auVar73 [16];
  undefined1 auVar64 [16];
  undefined1 auVar70 [16];
  undefined1 auVar74 [16];
  undefined1 auVar65 [16];
  undefined1 auVar71 [16];
  undefined1 auVar75 [16];
  undefined8 uVar77;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar85 [16];
  undefined1 auVar89 [16];
  undefined1 auVar86 [16];
  undefined1 auVar90 [16];
  undefined1 auVar87 [16];
  undefined1 auVar91 [16];
  undefined1 auVar96 [16];
  undefined1 auVar101 [16];
  undefined1 auVar97 [16];
  undefined1 auVar102 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar110 [16];
  undefined1 auVar107 [16];
  undefined1 auVar111 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  
  auVar45 = __LC17;
  auVar44 = __LC16;
  iVar43 = _UNK_00102c8c;
  iVar42 = _UNK_00102c88;
  iVar41 = _UNK_00102c84;
  iVar40 = __LC15;
  auVar39 = __LC14;
  auVar38 = __LC13;
  uVar52 = param_4 & 0xfffffff0;
  lVar48 = (long)(int)(uVar52 * 4) * 2;
  pauVar46 = param_1;
  pcVar49 = param_2;
  pcVar50 = param_3;
  if (param_1 < (undefined1 (*) [16])(*param_1 + lVar48)) {
    do {
      auVar59 = *pauVar46;
      uVar33 = *(undefined2 *)(pauVar46[1] + 2);
      uVar34 = *(undefined2 *)(pauVar46[1] + 10);
      pauVar47 = pauVar46 + 8;
      auVar55 = pauVar46[2];
      uVar35 = *(undefined2 *)(pauVar46[7] + 2);
      uVar36 = *(undefined2 *)(pauVar46[7] + 10);
      uVar94 = auVar59._10_2_;
      auVar81._0_12_ = auVar59._0_12_;
      auVar81._12_2_ = auVar59._6_2_;
      auVar81._14_2_ = *(undefined2 *)(pauVar46[1] + 6);
      auVar80._12_4_ = auVar81._12_4_;
      auVar80._0_10_ = auVar59._0_10_;
      auVar80._10_2_ = *(undefined2 *)(pauVar46[1] + 4);
      auVar79._10_6_ = auVar80._10_6_;
      auVar79._0_8_ = auVar59._0_8_;
      auVar79._8_2_ = auVar59._4_2_;
      auVar82._2_8_ = auVar79._8_8_;
      auVar82._0_2_ = uVar33;
      auVar82._10_6_ = 0;
      auVar67._12_4_ = 0;
      auVar67._0_12_ = SUB1612(auVar82 << 0x30,4);
      auVar67 = auVar67 << 0x20;
      uVar62 = *(undefined2 *)(pauVar46[3] + 2);
      uVar78 = *(undefined2 *)(pauVar46[3] + 10);
      auVar97._0_12_ = auVar55._0_12_;
      auVar97._12_2_ = auVar55._6_2_;
      auVar97._14_2_ = *(undefined2 *)(pauVar46[3] + 6);
      auVar96._12_4_ = auVar97._12_4_;
      auVar96._0_10_ = auVar55._0_10_;
      auVar96._10_2_ = *(undefined2 *)(pauVar46[3] + 4);
      auVar95._10_6_ = auVar96._10_6_;
      auVar95._0_8_ = auVar55._0_8_;
      auVar95._8_2_ = auVar55._4_2_;
      auVar98._2_8_ = auVar95._8_8_;
      auVar98._0_2_ = uVar62;
      auVar98._10_6_ = 0;
      auVar92._12_4_ = 0;
      auVar92._0_12_ = SUB1612(auVar98 << 0x30,4);
      auVar92 = auVar92 << 0x20;
      uVar61 = auVar55._10_2_;
      auVar65._0_12_ = auVar67._0_12_;
      auVar65._12_2_ = uVar33;
      auVar65._14_2_ = uVar34;
      auVar64._12_4_ = auVar65._12_4_;
      auVar64._0_10_ = auVar67._0_10_;
      auVar64._10_2_ = uVar94;
      auVar63._10_6_ = auVar64._10_6_;
      auVar63._0_8_ = auVar67._0_8_;
      auVar63._8_2_ = auVar59._2_2_;
      uVar77 = auVar63._8_8_;
      auVar108._2_8_ = uVar77;
      auVar108._0_2_ = *(undefined2 *)(pauVar46[1] + 8);
      auVar108._10_6_ = 0;
      auVar53._0_8_ = SUB168(auVar108 << 0x30,4) << 0x20;
      auVar87._0_12_ = auVar92._0_12_;
      auVar87._12_2_ = uVar62;
      auVar87._14_2_ = uVar78;
      auVar86._12_4_ = auVar87._12_4_;
      auVar86._0_10_ = auVar92._0_10_;
      auVar86._10_2_ = uVar61;
      auVar85._10_6_ = auVar86._10_6_;
      auVar85._0_8_ = auVar92._0_8_;
      auVar85._8_2_ = auVar55._2_2_;
      auVar84._8_8_ = auVar85._8_8_;
      auVar84._6_2_ = *(undefined2 *)(pauVar46[3] + 8);
      auVar84._4_2_ = *(undefined2 *)pauVar46[3];
      auVar84._2_2_ = auVar55._8_2_;
      auVar84._0_2_ = auVar55._0_2_;
      auVar53._8_8_ = auVar84._0_8_;
      auVar66._8_8_ = auVar84._8_8_;
      auVar66._0_8_ = uVar77;
      auVar54._4_2_ = auVar55._8_2_;
      auVar54._0_4_ = auVar55._0_4_;
      auVar54._6_2_ = uVar61;
      auVar54._8_2_ = *(undefined2 *)pauVar46[3];
      auVar54._10_2_ = uVar62;
      auVar54._12_2_ = *(undefined2 *)(pauVar46[3] + 8);
      auVar54._14_2_ = uVar78;
      auVar91._0_12_ = auVar53._0_12_;
      auVar91._12_2_ = *(undefined2 *)(pauVar46[1] + 8);
      auVar91._14_2_ = uVar34;
      auVar90._12_4_ = auVar91._12_4_;
      auVar90._0_10_ = auVar53._0_10_;
      auVar90._10_2_ = uVar33;
      auVar89._10_6_ = auVar90._10_6_;
      auVar89._8_2_ = *(undefined2 *)pauVar46[1];
      auVar89._0_8_ = auVar53._0_8_;
      auVar88._8_8_ = auVar89._8_8_;
      auVar88._6_2_ = uVar94;
      auVar88._4_2_ = auVar59._8_2_;
      auVar88._0_4_ = auVar59._0_4_;
      auVar107._0_12_ = auVar66._0_12_;
      auVar107._12_2_ = uVar34;
      auVar107._14_2_ = *(undefined2 *)(pauVar46[1] + 0xc);
      auVar106._12_4_ = auVar107._12_4_;
      auVar106._0_10_ = auVar66._0_10_;
      auVar106._10_2_ = *(undefined2 *)(pauVar46[1] + 4);
      auVar105._10_6_ = auVar106._10_6_;
      auVar105._8_2_ = uVar33;
      auVar105._0_8_ = uVar77;
      auVar104._8_8_ = auVar105._8_8_;
      auVar104._6_2_ = auVar59._12_2_;
      auVar104._4_2_ = uVar94;
      auVar104._0_4_ = auVar59._2_4_;
      auVar59._0_4_ = auVar55._2_4_;
      auVar59._4_2_ = uVar61;
      auVar59._6_2_ = auVar55._12_2_;
      auVar59._8_2_ = uVar62;
      auVar59._10_2_ = *(undefined2 *)(pauVar46[3] + 4);
      auVar59._12_2_ = uVar78;
      auVar59._14_2_ = *(undefined2 *)(pauVar46[3] + 0xc);
      auVar108 = pmaddwd(auVar104,auVar45);
      auVar67 = pmaddwd(auVar59,auVar45);
      auVar92 = pmaddwd(auVar88,auVar44);
      auVar55 = pmaddwd(auVar54,auVar44);
      auVar119 = pmaddwd(auVar104,auVar39);
      auVar114 = pmaddwd(auVar59,auVar39);
      auVar59 = pauVar46[4];
      auVar82 = pmaddwd(auVar88,auVar38);
      auVar98 = pmaddwd(auVar54,auVar38);
      auVar56._0_4_ = auVar55._0_4_ + auVar67._0_4_ + iVar40 >> 0x12;
      auVar56._4_4_ = auVar55._4_4_ + auVar67._4_4_ + iVar41 >> 0x12;
      auVar56._8_4_ = auVar55._8_4_ + auVar67._8_4_ + iVar42 >> 0x12;
      auVar56._12_4_ = auVar55._12_4_ + auVar67._12_4_ + iVar43 >> 0x12;
      auVar93._0_4_ = auVar92._0_4_ + auVar108._0_4_ + iVar40 >> 0x12;
      auVar93._4_4_ = auVar92._4_4_ + auVar108._4_4_ + iVar41 >> 0x12;
      auVar93._8_4_ = auVar92._8_4_ + auVar108._8_4_ + iVar42 >> 0x12;
      auVar93._12_4_ = auVar92._12_4_ + auVar108._12_4_ + iVar43 >> 0x12;
      auVar99._0_4_ = auVar98._0_4_ + auVar114._0_4_ + iVar40 >> 0x12;
      auVar99._4_4_ = auVar98._4_4_ + auVar114._4_4_ + iVar41 >> 0x12;
      auVar99._8_4_ = auVar98._8_4_ + auVar114._8_4_ + iVar42 >> 0x12;
      auVar99._12_4_ = auVar98._12_4_ + auVar114._12_4_ + iVar43 >> 0x12;
      auVar92 = packssdw(auVar93,auVar56);
      auVar83._0_4_ = auVar82._0_4_ + auVar119._0_4_ + iVar40 >> 0x12;
      auVar83._4_4_ = auVar82._4_4_ + auVar119._4_4_ + iVar41 >> 0x12;
      auVar83._8_4_ = auVar82._8_4_ + auVar119._8_4_ + iVar42 >> 0x12;
      auVar83._12_4_ = auVar82._12_4_ + auVar119._12_4_ + iVar43 >> 0x12;
      uVar33 = *(undefined2 *)(pauVar46[5] + 2);
      uVar34 = *(undefined2 *)(pauVar46[5] + 10);
      auVar67 = packssdw(auVar83,auVar99);
      auVar102._0_12_ = auVar59._0_12_;
      auVar102._12_2_ = auVar59._6_2_;
      auVar102._14_2_ = *(undefined2 *)(pauVar46[5] + 6);
      auVar101._12_4_ = auVar102._12_4_;
      auVar101._0_10_ = auVar59._0_10_;
      auVar101._10_2_ = *(undefined2 *)(pauVar46[5] + 4);
      auVar100._10_6_ = auVar101._10_6_;
      auVar100._0_8_ = auVar59._0_8_;
      auVar100._8_2_ = auVar59._4_2_;
      auVar55._2_8_ = auVar100._8_8_;
      auVar55._0_2_ = uVar33;
      auVar55._10_6_ = 0;
      auVar114._12_4_ = 0;
      auVar114._0_12_ = SUB1612(auVar55 << 0x30,4);
      auVar114 = auVar114 << 0x20;
      uVar78 = auVar59._10_2_;
      auVar55 = pauVar46[6];
      auVar111._0_12_ = auVar114._0_12_;
      auVar111._12_2_ = uVar33;
      auVar111._14_2_ = uVar34;
      auVar110._12_4_ = auVar111._12_4_;
      auVar110._0_10_ = auVar114._0_10_;
      auVar110._10_2_ = uVar78;
      auVar109._10_6_ = auVar110._10_6_;
      auVar109._0_8_ = auVar114._0_8_;
      auVar109._8_2_ = auVar59._2_2_;
      uVar77 = auVar109._8_8_;
      auVar119._2_8_ = uVar77;
      auVar119._0_2_ = *(undefined2 *)(pauVar46[5] + 8);
      auVar119._10_6_ = 0;
      auVar57._0_8_ = SUB168(auVar119 << 0x30,4) << 0x20;
      uVar62 = auVar55._10_2_;
      auVar117._0_12_ = auVar55._0_12_;
      auVar117._12_2_ = auVar55._6_2_;
      auVar117._14_2_ = *(undefined2 *)(pauVar46[7] + 6);
      auVar116._12_4_ = auVar117._12_4_;
      auVar116._0_10_ = auVar55._0_10_;
      auVar116._10_2_ = *(undefined2 *)(pauVar46[7] + 4);
      auVar115._10_6_ = auVar116._10_6_;
      auVar115._0_8_ = auVar55._0_8_;
      auVar115._8_2_ = auVar55._4_2_;
      auVar37._2_8_ = auVar115._8_8_;
      auVar37._0_2_ = uVar35;
      auVar37._10_6_ = 0;
      auVar124._12_4_ = 0;
      auVar124._0_12_ = SUB1612(auVar37 << 0x30,4);
      auVar124 = auVar124 << 0x20;
      auVar71._0_12_ = auVar124._0_12_;
      auVar71._12_2_ = uVar35;
      auVar71._14_2_ = uVar36;
      auVar70._12_4_ = auVar71._12_4_;
      auVar70._0_10_ = auVar124._0_10_;
      auVar70._10_2_ = uVar62;
      auVar69._10_6_ = auVar70._10_6_;
      auVar69._0_8_ = auVar124._0_8_;
      auVar69._8_2_ = auVar55._2_2_;
      auVar68._8_8_ = auVar69._8_8_;
      auVar68._6_2_ = *(undefined2 *)(pauVar46[7] + 8);
      auVar68._4_2_ = *(undefined2 *)pauVar46[7];
      auVar68._2_2_ = auVar55._8_2_;
      auVar68._0_2_ = auVar55._0_2_;
      auVar112._8_8_ = auVar68._8_8_;
      auVar112._0_8_ = uVar77;
      auVar57._8_8_ = auVar68._0_8_;
      auVar58._4_2_ = auVar55._8_2_;
      auVar58._0_4_ = auVar55._0_4_;
      auVar58._6_2_ = uVar62;
      auVar58._8_2_ = *(undefined2 *)pauVar46[7];
      auVar58._10_2_ = uVar35;
      auVar58._12_2_ = *(undefined2 *)(pauVar46[7] + 8);
      auVar58._14_2_ = uVar36;
      auVar75._0_12_ = auVar57._0_12_;
      auVar75._12_2_ = *(undefined2 *)(pauVar46[5] + 8);
      auVar75._14_2_ = uVar34;
      auVar74._12_4_ = auVar75._12_4_;
      auVar74._0_10_ = auVar57._0_10_;
      auVar74._10_2_ = uVar33;
      auVar73._10_6_ = auVar74._10_6_;
      auVar73._8_2_ = *(undefined2 *)pauVar46[5];
      auVar73._0_8_ = auVar57._0_8_;
      auVar72._8_8_ = auVar73._8_8_;
      auVar72._6_2_ = uVar78;
      auVar72._4_2_ = auVar59._8_2_;
      auVar72._0_4_ = auVar59._0_4_;
      auVar123._0_12_ = auVar112._0_12_;
      auVar123._12_2_ = uVar34;
      auVar123._14_2_ = *(undefined2 *)(pauVar46[5] + 0xc);
      auVar122._12_4_ = auVar123._12_4_;
      auVar122._0_10_ = auVar112._0_10_;
      auVar122._10_2_ = *(undefined2 *)(pauVar46[5] + 4);
      auVar121._10_6_ = auVar122._10_6_;
      auVar121._8_2_ = uVar33;
      auVar121._0_8_ = uVar77;
      auVar120._8_8_ = auVar121._8_8_;
      auVar120._6_2_ = auVar59._12_2_;
      auVar120._4_2_ = uVar78;
      auVar120._0_4_ = auVar59._2_4_;
      auVar113._0_4_ = auVar55._2_4_;
      auVar113._4_2_ = uVar62;
      auVar113._6_2_ = auVar55._12_2_;
      auVar113._8_2_ = uVar35;
      auVar113._10_2_ = *(undefined2 *)(pauVar46[7] + 4);
      auVar113._12_2_ = uVar36;
      auVar113._14_2_ = *(undefined2 *)(pauVar46[7] + 0xc);
      auVar82 = pmaddwd(auVar72,auVar38);
      auVar108 = pmaddwd(auVar58,auVar38);
      auVar124 = pmaddwd(auVar120,auVar39);
      auVar119 = pmaddwd(auVar113,auVar39);
      auVar55 = pmaddwd(auVar72,auVar44);
      auVar59 = pmaddwd(auVar58,auVar44);
      auVar114 = pmaddwd(auVar120,auVar45);
      auVar98 = pmaddwd(auVar113,auVar45);
      auVar103._0_4_ = auVar82._0_4_ + auVar124._0_4_ + iVar40 >> 0x12;
      auVar103._4_4_ = auVar82._4_4_ + auVar124._4_4_ + iVar41 >> 0x12;
      auVar103._8_4_ = auVar82._8_4_ + auVar124._8_4_ + iVar42 >> 0x12;
      auVar103._12_4_ = auVar82._12_4_ + auVar124._12_4_ + iVar43 >> 0x12;
      auVar118._0_4_ = auVar108._0_4_ + auVar119._0_4_ + iVar40 >> 0x12;
      auVar118._4_4_ = auVar108._4_4_ + auVar119._4_4_ + iVar41 >> 0x12;
      auVar118._8_4_ = auVar108._8_4_ + auVar119._8_4_ + iVar42 >> 0x12;
      auVar118._12_4_ = auVar108._12_4_ + auVar119._12_4_ + iVar43 >> 0x12;
      auVar76._0_4_ = auVar55._0_4_ + auVar114._0_4_ + iVar40 >> 0x12;
      auVar76._4_4_ = auVar55._4_4_ + auVar114._4_4_ + iVar41 >> 0x12;
      auVar76._8_4_ = auVar55._8_4_ + auVar114._8_4_ + iVar42 >> 0x12;
      auVar76._12_4_ = auVar55._12_4_ + auVar114._12_4_ + iVar43 >> 0x12;
      auVar60._0_4_ = auVar59._0_4_ + auVar98._0_4_ + iVar40 >> 0x12;
      auVar60._4_4_ = auVar59._4_4_ + auVar98._4_4_ + iVar41 >> 0x12;
      auVar60._8_4_ = auVar59._8_4_ + auVar98._8_4_ + iVar42 >> 0x12;
      auVar60._12_4_ = auVar59._12_4_ + auVar98._12_4_ + iVar43 >> 0x12;
      auVar55 = packssdw(auVar103,auVar118);
      auVar59 = packssdw(auVar76,auVar60);
      sVar1 = auVar67._0_2_;
      sVar3 = auVar67._2_2_;
      sVar5 = auVar67._4_2_;
      sVar7 = auVar67._6_2_;
      sVar9 = auVar67._8_2_;
      sVar11 = auVar67._10_2_;
      sVar13 = auVar67._12_2_;
      sVar15 = auVar67._14_2_;
      sVar17 = auVar55._0_2_;
      sVar19 = auVar55._2_2_;
      sVar21 = auVar55._4_2_;
      sVar23 = auVar55._6_2_;
      sVar25 = auVar55._8_2_;
      sVar27 = auVar55._10_2_;
      sVar29 = auVar55._12_2_;
      sVar31 = auVar55._14_2_;
      sVar2 = auVar92._0_2_;
      sVar4 = auVar92._2_2_;
      sVar6 = auVar92._4_2_;
      sVar8 = auVar92._6_2_;
      sVar10 = auVar92._8_2_;
      sVar12 = auVar92._10_2_;
      sVar14 = auVar92._12_2_;
      sVar16 = auVar92._14_2_;
      sVar18 = auVar59._0_2_;
      sVar20 = auVar59._2_2_;
      sVar22 = auVar59._4_2_;
      sVar24 = auVar59._6_2_;
      sVar26 = auVar59._8_2_;
      sVar28 = auVar59._10_2_;
      sVar30 = auVar59._12_2_;
      sVar32 = auVar59._14_2_;
      *pcVar49 = (0 < sVar1) * (sVar1 < 0x100) * auVar67[0] - (0xff < sVar1);
      pcVar49[1] = (0 < sVar3) * (sVar3 < 0x100) * auVar67[2] - (0xff < sVar3);
      pcVar49[2] = (0 < sVar5) * (sVar5 < 0x100) * auVar67[4] - (0xff < sVar5);
      pcVar49[3] = (0 < sVar7) * (sVar7 < 0x100) * auVar67[6] - (0xff < sVar7);
      pcVar49[4] = (0 < sVar9) * (sVar9 < 0x100) * auVar67[8] - (0xff < sVar9);
      pcVar49[5] = (0 < sVar11) * (sVar11 < 0x100) * auVar67[10] - (0xff < sVar11);
      pcVar49[6] = (0 < sVar13) * (sVar13 < 0x100) * auVar67[0xc] - (0xff < sVar13);
      pcVar49[7] = (0 < sVar15) * (sVar15 < 0x100) * auVar67[0xe] - (0xff < sVar15);
      pcVar49[8] = (0 < sVar17) * (sVar17 < 0x100) * auVar55[0] - (0xff < sVar17);
      pcVar49[9] = (0 < sVar19) * (sVar19 < 0x100) * auVar55[2] - (0xff < sVar19);
      pcVar49[10] = (0 < sVar21) * (sVar21 < 0x100) * auVar55[4] - (0xff < sVar21);
      pcVar49[0xb] = (0 < sVar23) * (sVar23 < 0x100) * auVar55[6] - (0xff < sVar23);
      pcVar49[0xc] = (0 < sVar25) * (sVar25 < 0x100) * auVar55[8] - (0xff < sVar25);
      pcVar49[0xd] = (0 < sVar27) * (sVar27 < 0x100) * auVar55[10] - (0xff < sVar27);
      pcVar49[0xe] = (0 < sVar29) * (sVar29 < 0x100) * auVar55[0xc] - (0xff < sVar29);
      pcVar49[0xf] = (0 < sVar31) * (sVar31 < 0x100) * auVar55[0xe] - (0xff < sVar31);
      *pcVar50 = (0 < sVar2) * (sVar2 < 0x100) * auVar92[0] - (0xff < sVar2);
      pcVar50[1] = (0 < sVar4) * (sVar4 < 0x100) * auVar92[2] - (0xff < sVar4);
      pcVar50[2] = (0 < sVar6) * (sVar6 < 0x100) * auVar92[4] - (0xff < sVar6);
      pcVar50[3] = (0 < sVar8) * (sVar8 < 0x100) * auVar92[6] - (0xff < sVar8);
      pcVar50[4] = (0 < sVar10) * (sVar10 < 0x100) * auVar92[8] - (0xff < sVar10);
      pcVar50[5] = (0 < sVar12) * (sVar12 < 0x100) * auVar92[10] - (0xff < sVar12);
      pcVar50[6] = (0 < sVar14) * (sVar14 < 0x100) * auVar92[0xc] - (0xff < sVar14);
      pcVar50[7] = (0 < sVar16) * (sVar16 < 0x100) * auVar92[0xe] - (0xff < sVar16);
      pcVar50[8] = (0 < sVar18) * (sVar18 < 0x100) * auVar59[0] - (0xff < sVar18);
      pcVar50[9] = (0 < sVar20) * (sVar20 < 0x100) * auVar59[2] - (0xff < sVar20);
      pcVar50[10] = (0 < sVar22) * (sVar22 < 0x100) * auVar59[4] - (0xff < sVar22);
      pcVar50[0xb] = (0 < sVar24) * (sVar24 < 0x100) * auVar59[6] - (0xff < sVar24);
      pcVar50[0xc] = (0 < sVar26) * (sVar26 < 0x100) * auVar59[8] - (0xff < sVar26);
      pcVar50[0xd] = (0 < sVar28) * (sVar28 < 0x100) * auVar59[10] - (0xff < sVar28);
      pcVar50[0xe] = (0 < sVar30) * (sVar30 < 0x100) * auVar59[0xc] - (0xff < sVar30);
      pcVar50[0xf] = (0 < sVar32) * (sVar32 < 0x100) * auVar59[0xe] - (0xff < sVar32);
      pauVar46 = pauVar47;
      pcVar49 = pcVar49 + 0x10;
      pcVar50 = pcVar50 + 0x10;
    } while (pauVar47 < (undefined1 (*) [16])(*param_1 + lVar48));
    lVar51 = (lVar48 - 1U >> 7) + 1;
    lVar48 = lVar51 * 0x10;
    param_1 = param_1 + lVar51 * 8;
    param_2 = param_2 + lVar48;
    param_3 = param_3 + lVar48;
  }
  if ((int)uVar52 < (int)param_4) {
    WebPConvertRGBA32ToUV_C(param_1,param_2,param_3,param_4 - uVar52);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertARGBToUV_SSE2
               (undefined1 (*param_1) [16],char *param_2,char *param_3,uint param_4,int param_5)

{
  uint uVar1;
  short sVar2;
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [15];
  undefined1 auVar69 [15];
  undefined1 auVar70 [15];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [15];
  undefined1 auVar97 [15];
  undefined1 auVar98 [15];
  undefined1 auVar99 [15];
  undefined1 auVar100 [15];
  undefined1 auVar101 [15];
  undefined1 auVar102 [15];
  undefined1 auVar103 [15];
  undefined1 auVar104 [15];
  undefined1 auVar105 [15];
  undefined1 auVar106 [15];
  undefined1 auVar107 [15];
  undefined1 auVar108 [15];
  undefined1 auVar109 [15];
  undefined1 auVar110 [15];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  int iVar113;
  int iVar114;
  int iVar115;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  int iVar119;
  undefined1 (*pauVar120) [16];
  char *pcVar121;
  char *pcVar122;
  long lVar123;
  char *pcVar124;
  undefined1 auVar125 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  char cVar151;
  char cVar168;
  char cVar169;
  char cVar170;
  char cVar171;
  char cVar172;
  char cVar173;
  char cVar174;
  char cVar175;
  char cVar176;
  char cVar177;
  char cVar178;
  char cVar179;
  char cVar180;
  char cVar181;
  undefined1 auVar152 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar167 [16];
  char cVar182;
  undefined1 auVar183 [16];
  undefined1 auVar190 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar216 [16];
  undefined1 uVar230;
  undefined1 uVar232;
  undefined1 auVar218 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  char cVar233;
  char cVar244;
  char cVar245;
  char cVar246;
  char cVar247;
  char cVar248;
  char cVar249;
  char cVar250;
  char cVar251;
  char cVar252;
  char cVar253;
  char cVar254;
  char cVar255;
  char cVar256;
  char cVar257;
  undefined1 auVar234 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  char cVar258;
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar266 [16];
  undefined1 auVar267 [16];
  undefined1 auVar275 [16];
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  undefined1 auVar279 [16];
  undefined1 auVar287 [16];
  undefined1 auVar294 [16];
  undefined1 auVar295 [16];
  undefined1 auVar296 [16];
  undefined1 auVar297 [16];
  undefined1 auVar298 [16];
  undefined1 auVar306 [16];
  undefined1 auVar307 [16];
  undefined1 auVar311 [16];
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar126 [16];
  undefined1 auVar138 [16];
  undefined1 auVar127 [16];
  undefined1 auVar139 [16];
  undefined1 auVar128 [16];
  undefined1 auVar140 [16];
  undefined1 auVar129 [16];
  undefined1 auVar141 [16];
  undefined1 auVar130 [16];
  undefined1 auVar142 [16];
  undefined1 auVar131 [16];
  undefined1 auVar143 [16];
  byte bVar147;
  undefined1 uVar148;
  undefined1 uVar149;
  undefined1 uVar150;
  undefined1 auVar153 [16];
  undefined1 auVar164 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar165 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar166 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar203 [16];
  undefined1 auVar213 [16];
  undefined1 auVar184 [16];
  undefined1 auVar193 [16];
  undefined1 auVar204 [16];
  undefined1 auVar185 [16];
  undefined1 auVar194 [16];
  undefined1 auVar205 [16];
  undefined1 auVar214 [16];
  undefined1 auVar186 [16];
  undefined1 auVar195 [16];
  undefined1 auVar206 [16];
  undefined1 auVar187 [16];
  undefined1 auVar196 [16];
  undefined1 auVar207 [16];
  undefined1 auVar215 [16];
  undefined1 auVar188 [16];
  undefined1 auVar197 [16];
  undefined1 auVar208 [16];
  undefined1 auVar189 [16];
  undefined1 auVar198 [16];
  undefined1 auVar209 [16];
  undefined1 uVar217;
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined8 uVar231;
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar263 [16];
  undefined1 auVar268 [16];
  undefined1 auVar269 [16];
  undefined1 auVar264 [16];
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 auVar265 [16];
  undefined1 auVar272 [16];
  undefined1 auVar273 [16];
  undefined1 auVar274 [16];
  undefined1 auVar280 [16];
  undefined1 auVar281 [16];
  undefined1 auVar288 [16];
  undefined1 auVar282 [16];
  undefined1 auVar289 [16];
  undefined1 auVar283 [16];
  undefined1 auVar290 [16];
  undefined1 auVar284 [16];
  undefined1 auVar291 [16];
  undefined1 auVar285 [16];
  undefined1 auVar292 [16];
  undefined1 auVar286 [16];
  undefined1 auVar293 [16];
  undefined1 auVar299 [16];
  undefined1 auVar308 [16];
  undefined1 auVar300 [16];
  undefined1 auVar301 [16];
  undefined1 auVar309 [16];
  undefined1 auVar302 [16];
  undefined1 auVar303 [16];
  undefined1 auVar310 [16];
  undefined1 auVar304 [16];
  undefined1 auVar305 [16];
  
  auVar118 = __LC18;
  auVar117 = __LC17;
  auVar116 = __LC16;
  iVar115 = _UNK_00102c8c;
  iVar114 = _UNK_00102c88;
  iVar113 = _UNK_00102c84;
  iVar119 = __LC15;
  auVar112 = __LC14;
  auVar111 = __LC13;
  if ((int)(param_4 & 0xffffffe0) < 1) {
    iVar119 = 0;
  }
  else {
    uVar1 = ((param_4 & 0xffffffe0) - 1 >> 5) + 1;
    lVar123 = (ulong)uVar1 * 0x10;
    pauVar120 = param_1;
    pcVar121 = param_3;
    pcVar124 = param_2;
    do {
      auVar133 = *pauVar120;
      uVar39 = pauVar120[1][5];
      uVar40 = pauVar120[1][9];
      uVar41 = pauVar120[1][0xe];
      auVar200 = pauVar120[2];
      auVar189._0_14_ = auVar133._0_14_;
      auVar189[0xe] = auVar133[7];
      auVar189[0xf] = pauVar120[1][7];
      auVar188._14_2_ = auVar189._14_2_;
      auVar188._0_13_ = auVar133._0_13_;
      auVar188[0xd] = pauVar120[1][6];
      auVar187._13_3_ = auVar188._13_3_;
      auVar187._0_12_ = auVar133._0_12_;
      auVar187[0xc] = auVar133[6];
      auVar186._12_4_ = auVar187._12_4_;
      auVar186._0_11_ = auVar133._0_11_;
      auVar186[0xb] = uVar39;
      uVar217 = auVar133[5];
      auVar185._11_5_ = auVar186._11_5_;
      auVar185._0_10_ = auVar133._0_10_;
      auVar185[10] = uVar217;
      auVar184._10_6_ = auVar185._10_6_;
      auVar184._0_9_ = auVar133._0_9_;
      auVar184[9] = pauVar120[1][4];
      auVar183._9_7_ = auVar184._9_7_;
      auVar183._0_8_ = auVar133._0_8_;
      auVar183[8] = auVar133[4];
      auVar297._1_8_ = auVar183._8_8_;
      auVar297[0] = pauVar120[1][3];
      auVar297._9_7_ = 0;
      auVar278._10_6_ = 0;
      auVar278._0_10_ = SUB1610(auVar297 << 0x38,6);
      auVar266._11_5_ = 0;
      auVar266._0_11_ = SUB1611(auVar278 << 0x30,5);
      auVar243._12_4_ = 0;
      auVar243._0_12_ = SUB1612(auVar266 << 0x28,4);
      auVar261._13_3_ = 0;
      auVar261._0_13_ = SUB1613(auVar243 << 0x20,3);
      auVar162._14_2_ = 0;
      auVar162._0_14_ = SUB1614(auVar261 << 0x18,2);
      auVar162 = auVar162 << 0x10;
      uVar42 = pauVar120[3][2];
      uVar43 = pauVar120[3][4];
      uVar44 = pauVar120[3][5];
      uVar45 = pauVar120[3][6];
      uVar46 = pauVar120[3][9];
      uVar47 = pauVar120[3][10];
      auVar131._0_14_ = auVar200._0_14_;
      auVar131[0xe] = auVar200[7];
      auVar131[0xf] = pauVar120[3][7];
      auVar130._14_2_ = auVar131._14_2_;
      auVar130._0_13_ = auVar200._0_13_;
      auVar130[0xd] = uVar45;
      uVar150 = auVar200[6];
      auVar129._13_3_ = auVar130._13_3_;
      auVar129._0_12_ = auVar200._0_12_;
      auVar129[0xc] = uVar150;
      auVar128._12_4_ = auVar129._12_4_;
      auVar128._0_11_ = auVar200._0_11_;
      auVar128[0xb] = uVar44;
      uVar149 = auVar200[5];
      auVar127._11_5_ = auVar128._11_5_;
      auVar127._0_10_ = auVar200._0_10_;
      auVar127[10] = uVar149;
      auVar126._10_6_ = auVar127._10_6_;
      auVar126._0_9_ = auVar200._0_9_;
      auVar126[9] = uVar43;
      uVar148 = auVar200[4];
      auVar125._9_7_ = auVar126._9_7_;
      auVar125._0_8_ = auVar200._0_8_;
      auVar125[8] = uVar148;
      auVar52._1_8_ = auVar125._8_8_;
      auVar52[0] = pauVar120[3][3];
      auVar52._9_7_ = 0;
      auVar51._10_6_ = 0;
      auVar51._0_10_ = SUB1610(auVar52 << 0x38,6);
      bVar147 = auVar200[2];
      auVar50._11_5_ = 0;
      auVar50._0_11_ = SUB1611(auVar51 << 0x30,5);
      auVar49._12_4_ = 0;
      auVar49._0_12_ = SUB1612(auVar50 << 0x28,4);
      auVar48._13_3_ = 0;
      auVar48._0_13_ = SUB1613(auVar49 << 0x20,3);
      auVar311._14_2_ = 0;
      auVar311._0_14_ = SUB1614(auVar48 << 0x18,2);
      auVar311 = auVar311 << 0x10;
      uVar230 = auVar200[8];
      uVar232 = auVar200[10];
      auVar159._0_14_ = auVar162._0_14_;
      auVar159[0xe] = pauVar120[1][3];
      auVar159[0xf] = pauVar120[1][0xb];
      auVar158._14_2_ = auVar159._14_2_;
      auVar158._0_13_ = auVar162._0_13_;
      auVar158[0xd] = auVar133[0xb];
      auVar157._13_3_ = auVar158._13_3_;
      auVar157._0_12_ = auVar162._0_12_;
      auVar157[0xc] = auVar133[3];
      auVar156._12_4_ = auVar157._12_4_;
      auVar156._0_11_ = auVar162._0_11_;
      auVar156[0xb] = pauVar120[1][10];
      auVar155._11_5_ = auVar156._11_5_;
      auVar155._0_10_ = auVar162._0_10_;
      auVar155[10] = pauVar120[1][2];
      auVar154._10_6_ = auVar155._10_6_;
      auVar154._0_9_ = auVar162._0_9_;
      auVar154[9] = auVar133[10];
      auVar153._9_7_ = auVar154._9_7_;
      auVar153._0_8_ = auVar162._0_8_;
      auVar153[8] = auVar133[2];
      auVar57._1_8_ = auVar153._8_8_;
      auVar57[0] = uVar40;
      auVar57._9_7_ = 0;
      auVar56._10_6_ = 0;
      auVar56._0_10_ = SUB1610(auVar57 << 0x38,6);
      auVar55._11_5_ = 0;
      auVar55._0_11_ = SUB1611(auVar56 << 0x30,5);
      auVar54._12_4_ = 0;
      auVar54._0_12_ = SUB1612(auVar55 << 0x28,4);
      auVar53._13_3_ = 0;
      auVar53._0_13_ = SUB1613(auVar54 << 0x20,3);
      auVar152._14_2_ = 0;
      auVar152._0_14_ = SUB1614(auVar53 << 0x18,2);
      auVar152 = auVar152 << 0x10;
      auVar241._0_14_ = auVar311._0_14_;
      auVar241[0xe] = pauVar120[3][3];
      auVar241[0xf] = pauVar120[3][0xb];
      auVar240._14_2_ = auVar241._14_2_;
      auVar240._0_13_ = auVar311._0_13_;
      auVar240[0xd] = auVar200[0xb];
      auVar239._13_3_ = auVar240._13_3_;
      auVar239._0_12_ = auVar311._0_12_;
      auVar239[0xc] = auVar200[3];
      auVar238._12_4_ = auVar239._12_4_;
      auVar238._0_11_ = auVar311._0_11_;
      auVar238[0xb] = uVar47;
      auVar237._11_5_ = auVar238._11_5_;
      auVar237._0_10_ = auVar311._0_10_;
      auVar237[10] = uVar42;
      auVar236._10_6_ = auVar237._10_6_;
      auVar236._0_9_ = auVar311._0_9_;
      auVar236[9] = uVar232;
      auVar235._9_7_ = auVar236._9_7_;
      auVar235._0_8_ = auVar311._0_8_;
      auVar235[8] = bVar147;
      auVar62._1_8_ = auVar235._8_8_;
      auVar62[0] = uVar46;
      auVar62._9_7_ = 0;
      auVar61._10_6_ = 0;
      auVar61._0_10_ = SUB1610(auVar62 << 0x38,6);
      auVar60._11_5_ = 0;
      auVar60._0_11_ = SUB1611(auVar61 << 0x30,5);
      auVar59._12_4_ = 0;
      auVar59._0_12_ = SUB1612(auVar60 << 0x28,4);
      auVar58._13_3_ = 0;
      auVar58._0_13_ = SUB1613(auVar59 << 0x20,3);
      auVar234._2_14_ = SUB1614(auVar58 << 0x18,2);
      auVar234._0_2_ = CONCAT11(uVar230,auVar200[0]);
      auVar224._0_14_ = auVar152._0_14_;
      auVar224[0xe] = uVar40;
      auVar224[0xf] = pauVar120[1][0xd];
      auVar223._14_2_ = auVar224._14_2_;
      auVar223._0_13_ = auVar152._0_13_;
      auVar223[0xd] = uVar39;
      auVar222._13_3_ = auVar223._13_3_;
      auVar222._0_12_ = auVar152._0_12_;
      auVar222[0xc] = pauVar120[1][1];
      auVar221._12_4_ = auVar222._12_4_;
      auVar221._0_11_ = auVar152._0_11_;
      auVar221[0xb] = auVar133[0xd];
      auVar220._11_5_ = auVar221._11_5_;
      auVar220._0_10_ = auVar152._0_10_;
      auVar220[10] = auVar133[9];
      auVar219._10_6_ = auVar220._10_6_;
      auVar219._0_9_ = auVar152._0_9_;
      auVar219[9] = uVar217;
      auVar218._9_7_ = auVar219._9_7_;
      auVar218._0_8_ = auVar152._0_8_;
      auVar218[8] = auVar133[1];
      uVar231 = auVar218._8_8_;
      auVar67._1_8_ = uVar231;
      auVar67[0] = pauVar120[1][0xc];
      auVar67._9_7_ = 0;
      auVar66._10_6_ = 0;
      auVar66._0_10_ = SUB1610(auVar67 << 0x38,6);
      auVar65._11_5_ = 0;
      auVar65._0_11_ = SUB1611(auVar66 << 0x30,5);
      auVar64._12_4_ = 0;
      auVar64._0_12_ = SUB1612(auVar65 << 0x28,4);
      auVar63._13_3_ = 0;
      auVar63._0_13_ = SUB1613(auVar64 << 0x20,3);
      auVar225._0_8_ = SUB168(auVar63 << 0x18,2) << 0x10;
      auVar198._0_14_ = auVar234._0_14_;
      auVar198[0xe] = uVar46;
      auVar198[0xf] = pauVar120[3][0xd];
      auVar197._14_2_ = auVar198._14_2_;
      auVar197._0_13_ = auVar234._0_13_;
      auVar197[0xd] = uVar44;
      auVar196._13_3_ = auVar197._13_3_;
      auVar196._0_12_ = auVar234._0_12_;
      auVar196[0xc] = pauVar120[3][1];
      auVar195._12_4_ = auVar196._12_4_;
      auVar195._0_11_ = auVar234._0_11_;
      auVar195[0xb] = auVar200[0xd];
      auVar194._11_5_ = auVar195._11_5_;
      auVar194._0_10_ = auVar234._0_10_;
      auVar194[10] = auVar200[9];
      auVar193._10_6_ = auVar194._10_6_;
      auVar193._0_9_ = auVar234._0_9_;
      auVar193[9] = uVar149;
      auVar192._9_7_ = auVar193._9_7_;
      auVar192._0_8_ = auVar234._0_8_;
      auVar192[8] = auVar200[1];
      auVar191._8_8_ = auVar192._8_8_;
      auVar191[7] = pauVar120[3][0xc];
      auVar191[6] = pauVar120[3][8];
      auVar191[5] = uVar43;
      auVar191[4] = pauVar120[3][0];
      auVar191[3] = auVar200[0xc];
      auVar191[2] = uVar230;
      auVar191._0_2_ = auVar234._0_2_;
      auVar190._2_14_ = auVar191._2_14_;
      auVar190[1] = uVar148;
      auVar190[0] = auVar200[0];
      auVar160[2] = uVar150;
      auVar160[1] = bVar147;
      auVar160[3] = uVar232;
      auVar160[4] = auVar200[0xe];
      auVar160[5] = uVar42;
      auVar160[6] = uVar45;
      auVar160[7] = uVar47;
      auVar160[8] = pauVar120[3][0xe];
      auVar160[0] = uVar41;
      auVar160._9_7_ = 0;
      auVar160 = auVar160 << 0x38;
      auVar259._8_8_ = auVar191._8_8_;
      auVar259._0_8_ = uVar231;
      auVar225._8_8_ = auVar190._0_8_;
      auVar8[0xd] = 0;
      auVar8._0_13_ = auVar160._0_13_;
      auVar8[0xe] = uVar41;
      auVar14[0xc] = pauVar120[1][10];
      auVar14._0_12_ = auVar160._0_12_;
      auVar14._13_2_ = auVar8._13_2_;
      auVar20[0xb] = 0;
      auVar20._0_11_ = auVar160._0_11_;
      auVar20._12_3_ = auVar14._12_3_;
      auVar26[10] = pauVar120[1][6];
      auVar26._0_10_ = auVar160._0_10_;
      auVar26._11_4_ = auVar20._11_4_;
      auVar32[9] = 0;
      auVar32._0_9_ = auVar160._0_9_;
      auVar32._10_5_ = auVar26._10_5_;
      auVar68._7_8_ = 0;
      auVar68._0_7_ = (uint7)(CONCAT62(auVar32._9_6_,CONCAT11(pauVar120[1][2],uVar41)) >> 8);
      auVar99._1_8_ = SUB158(auVar68 << 0x40,7);
      auVar99[0] = auVar133[0xe];
      auVar99._9_6_ = 0;
      auVar100._1_10_ = SUB1510(auVar99 << 0x30,5);
      auVar100[0] = auVar133[10];
      auVar100._11_4_ = 0;
      auVar199._3_12_ = SUB1512(auVar100 << 0x20,3);
      auVar199[2] = auVar133[6];
      auVar199[1] = 0;
      auVar199[0] = auVar133[2];
      auVar199[0xf] = 0;
      auVar161[1] = 0;
      auVar161[0] = bVar147;
      auVar161[2] = uVar150;
      auVar161[3] = 0;
      auVar161[4] = uVar232;
      auVar161[5] = 0;
      auVar161[6] = auVar200[0xe];
      auVar161[7] = 0;
      auVar161[8] = uVar42;
      auVar161[9] = 0;
      auVar161[10] = uVar45;
      auVar161[0xb] = 0;
      auVar161[0xc] = uVar47;
      auVar161[0xd] = 0;
      auVar161[0xe] = pauVar120[3][0xe];
      auVar161[0xf] = 0;
      auVar3[0xd] = 0;
      auVar3._0_13_ = auVar259._0_13_;
      auVar3[0xe] = pauVar120[1][0xd];
      auVar9[0xc] = uVar40;
      auVar9._0_12_ = auVar259._0_12_;
      auVar9._13_2_ = auVar3._13_2_;
      auVar15[0xb] = 0;
      auVar15._0_11_ = auVar259._0_11_;
      auVar15._12_3_ = auVar9._12_3_;
      auVar21[10] = uVar39;
      auVar21._0_10_ = auVar259._0_10_;
      auVar21._11_4_ = auVar15._11_4_;
      auVar27[9] = 0;
      auVar27._0_9_ = auVar259._0_9_;
      auVar27._10_5_ = auVar21._10_5_;
      auVar33[8] = pauVar120[1][1];
      auVar33._0_8_ = uVar231;
      auVar33._9_6_ = auVar27._9_6_;
      auVar69._7_8_ = 0;
      auVar69._0_7_ = auVar33._8_7_;
      auVar101._1_8_ = SUB158(auVar69 << 0x40,7);
      auVar101[0] = auVar133[0xd];
      auVar101._9_6_ = 0;
      auVar102._1_10_ = SUB1510(auVar101 << 0x30,5);
      auVar102[0] = auVar133[9];
      auVar102._11_4_ = 0;
      auVar37[2] = uVar217;
      auVar37._0_2_ = auVar218._8_2_;
      auVar37._3_12_ = SUB1512(auVar102 << 0x20,3);
      auVar132._0_2_ = auVar218._8_2_ & 0xff;
      auVar132._2_13_ = auVar37._2_13_;
      auVar132[0xf] = 0;
      auVar260[1] = 0;
      auVar260[0] = auVar200[1];
      auVar260[2] = uVar149;
      auVar260[3] = 0;
      auVar260[4] = auVar200[9];
      auVar260[5] = 0;
      auVar260[6] = auVar200[0xd];
      auVar260[7] = 0;
      auVar260[8] = pauVar120[3][1];
      auVar260[9] = 0;
      auVar260[10] = uVar44;
      auVar260[0xb] = 0;
      auVar260[0xc] = uVar46;
      auVar260[0xd] = 0;
      auVar260[0xe] = pauVar120[3][0xd];
      auVar260[0xf] = 0;
      auVar162 = pmaddwd(auVar161,auVar118);
      auVar4[0xd] = 0;
      auVar4._0_13_ = auVar225._0_13_;
      auVar4[0xe] = pauVar120[1][0xc];
      auVar10[0xc] = pauVar120[1][8];
      auVar10._0_12_ = auVar225._0_12_;
      auVar10._13_2_ = auVar4._13_2_;
      auVar16[0xb] = 0;
      auVar16._0_11_ = auVar225._0_11_;
      auVar16._12_3_ = auVar10._12_3_;
      auVar22[10] = pauVar120[1][4];
      auVar22._0_10_ = auVar225._0_10_;
      auVar22._11_4_ = auVar16._11_4_;
      auVar28[9] = 0;
      auVar28._0_9_ = auVar225._0_9_;
      auVar28._10_5_ = auVar22._10_5_;
      auVar34[8] = pauVar120[1][0];
      auVar34._0_8_ = auVar225._0_8_;
      auVar34._9_6_ = auVar28._9_6_;
      auVar70._7_8_ = 0;
      auVar70._0_7_ = auVar34._8_7_;
      auVar103._1_8_ = SUB158(auVar70 << 0x40,7);
      auVar103[0] = auVar133[0xc];
      auVar103._9_6_ = 0;
      auVar104._1_10_ = SUB1510(auVar103 << 0x30,5);
      auVar104[0] = auVar133[8];
      auVar104._11_4_ = 0;
      auVar242._3_12_ = SUB1512(auVar104 << 0x20,3);
      auVar242[2] = auVar133[4];
      auVar242[1] = 0;
      auVar242[0] = auVar133[0];
      auVar242[0xf] = 0;
      auVar261 = pmaddwd(auVar260,auVar118);
      auVar226._0_3_ = CONCAT12(uVar148,auVar234._0_2_) & 0xff00ff;
      auVar226[3] = 0;
      auVar226[4] = uVar230;
      auVar226[5] = 0;
      auVar226[6] = auVar200[0xc];
      auVar226[7] = 0;
      auVar226[8] = pauVar120[3][0];
      auVar226[9] = 0;
      auVar226[10] = uVar43;
      auVar226[0xb] = 0;
      auVar226[0xc] = pauVar120[3][8];
      auVar226[0xd] = 0;
      auVar226[0xe] = pauVar120[3][0xc];
      auVar226[0xf] = 0;
      auVar200 = pmaddwd(auVar199,auVar118);
      auVar133 = pmaddwd(auVar132,auVar118);
      auVar200 = packssdw(auVar200,auVar162);
      auVar162 = pmaddwd(auVar226,auVar118);
      auVar133 = packssdw(auVar133,auVar261);
      auVar261 = pmaddwd(auVar242,auVar118);
      auVar162 = packssdw(auVar261,auVar162);
      auVar265._0_12_ = auVar200._0_12_;
      auVar265._12_2_ = auVar200._6_2_;
      auVar265._14_2_ = auVar133._6_2_;
      auVar264._12_4_ = auVar265._12_4_;
      auVar264._0_10_ = auVar200._0_10_;
      auVar264._10_2_ = auVar133._4_2_;
      auVar263._10_6_ = auVar264._10_6_;
      auVar263._0_8_ = auVar200._0_8_;
      auVar263._8_2_ = auVar200._4_2_;
      auVar262._8_8_ = auVar263._8_8_;
      auVar262._6_2_ = auVar133._2_2_;
      auVar262._4_2_ = auVar200._2_2_;
      auVar262._0_2_ = auVar200._0_2_;
      auVar262._2_2_ = auVar133._0_2_;
      auVar201._2_2_ = auVar133._8_2_;
      auVar201._0_2_ = auVar200._8_2_;
      auVar201._4_2_ = auVar200._10_2_;
      auVar201._6_2_ = auVar133._10_2_;
      auVar201._8_2_ = auVar200._12_2_;
      auVar201._10_2_ = auVar133._12_2_;
      auVar201._12_2_ = auVar200._14_2_;
      auVar201._14_2_ = auVar133._14_2_;
      auVar166._0_12_ = auVar133._0_12_;
      auVar166._12_2_ = auVar133._6_2_;
      auVar166._14_2_ = auVar162._6_2_;
      auVar165._12_4_ = auVar166._12_4_;
      auVar165._0_10_ = auVar133._0_10_;
      auVar165._10_2_ = auVar162._4_2_;
      auVar164._10_6_ = auVar165._10_6_;
      auVar164._0_8_ = auVar133._0_8_;
      auVar164._8_2_ = auVar133._4_2_;
      auVar163._8_8_ = auVar164._8_8_;
      auVar163._6_2_ = auVar162._2_2_;
      auVar163._4_2_ = auVar133._2_2_;
      auVar163._2_2_ = auVar162._0_2_;
      auVar163._0_2_ = auVar133._0_2_;
      auVar200._2_2_ = auVar162._8_2_;
      auVar200._0_2_ = auVar133._8_2_;
      auVar200._4_2_ = auVar133._10_2_;
      auVar200._6_2_ = auVar162._10_2_;
      auVar200._8_2_ = auVar133._12_2_;
      auVar200._10_2_ = auVar162._12_2_;
      auVar200._12_2_ = auVar133._14_2_;
      auVar200._14_2_ = auVar162._14_2_;
      auVar297 = pmaddwd(auVar262,auVar111);
      auVar278 = pmaddwd(auVar201,auVar111);
      auVar243 = pmaddwd(auVar163,auVar112);
      auVar133 = pmaddwd(auVar200,auVar112);
      auVar266 = pmaddwd(auVar262,auVar116);
      auVar261 = pmaddwd(auVar201,auVar116);
      auVar162 = pmaddwd(auVar163,auVar117);
      auVar200 = pmaddwd(auVar200,auVar117);
      auVar227._0_4_ = auVar133._0_4_ + auVar278._0_4_ + iVar119 >> 0x12;
      auVar227._4_4_ = auVar133._4_4_ + auVar278._4_4_ + iVar113 >> 0x12;
      auVar227._8_4_ = auVar133._8_4_ + auVar278._8_4_ + iVar114 >> 0x12;
      auVar227._12_4_ = auVar133._12_4_ + auVar278._12_4_ + iVar115 >> 0x12;
      auVar133._0_4_ = auVar243._0_4_ + auVar297._0_4_ + iVar119 >> 0x12;
      auVar133._4_4_ = auVar243._4_4_ + auVar297._4_4_ + iVar113 >> 0x12;
      auVar133._8_4_ = auVar243._8_4_ + auVar297._8_4_ + iVar114 >> 0x12;
      auVar133._12_4_ = auVar243._12_4_ + auVar297._12_4_ + iVar115 >> 0x12;
      uVar39 = pauVar120[5][5];
      uVar40 = pauVar120[5][9];
      uVar41 = pauVar120[5][0xe];
      auVar243 = packssdw(auVar133,auVar227);
      auVar133 = pauVar120[4];
      auVar134._0_4_ = auVar200._0_4_ + auVar261._0_4_ + iVar119 >> 0x12;
      auVar134._4_4_ = auVar200._4_4_ + auVar261._4_4_ + iVar113 >> 0x12;
      auVar134._8_4_ = auVar200._8_4_ + auVar261._8_4_ + iVar114 >> 0x12;
      auVar134._12_4_ = auVar200._12_4_ + auVar261._12_4_ + iVar115 >> 0x12;
      auVar167._0_4_ = auVar162._0_4_ + auVar266._0_4_ + iVar119 >> 0x12;
      auVar167._4_4_ = auVar162._4_4_ + auVar266._4_4_ + iVar113 >> 0x12;
      auVar167._8_4_ = auVar162._8_4_ + auVar266._8_4_ + iVar114 >> 0x12;
      auVar167._12_4_ = auVar162._12_4_ + auVar266._12_4_ + iVar115 >> 0x12;
      auVar162 = packssdw(auVar167,auVar134);
      auVar200 = pauVar120[6];
      auVar274._0_14_ = auVar133._0_14_;
      auVar274[0xe] = auVar133[7];
      auVar274[0xf] = pauVar120[5][7];
      auVar273._14_2_ = auVar274._14_2_;
      auVar273._0_13_ = auVar133._0_13_;
      auVar273[0xd] = pauVar120[5][6];
      auVar272._13_3_ = auVar273._13_3_;
      auVar272._0_12_ = auVar133._0_12_;
      auVar272[0xc] = auVar133[6];
      auVar271._12_4_ = auVar272._12_4_;
      auVar271._0_11_ = auVar133._0_11_;
      auVar271[0xb] = uVar39;
      uVar150 = auVar133[5];
      auVar270._11_5_ = auVar271._11_5_;
      auVar270._0_10_ = auVar133._0_10_;
      auVar270[10] = uVar150;
      auVar269._10_6_ = auVar270._10_6_;
      auVar269._0_9_ = auVar133._0_9_;
      auVar269[9] = pauVar120[5][4];
      auVar268._9_7_ = auVar269._9_7_;
      auVar268._0_8_ = auVar133._0_8_;
      auVar268[8] = auVar133[4];
      auVar75._1_8_ = auVar268._8_8_;
      auVar75[0] = pauVar120[5][3];
      auVar75._9_7_ = 0;
      auVar74._10_6_ = 0;
      auVar74._0_10_ = SUB1610(auVar75 << 0x38,6);
      auVar73._11_5_ = 0;
      auVar73._0_11_ = SUB1611(auVar74 << 0x30,5);
      auVar72._12_4_ = 0;
      auVar72._0_12_ = SUB1612(auVar73 << 0x28,4);
      auVar71._13_3_ = 0;
      auVar71._0_13_ = SUB1613(auVar72 << 0x20,3);
      auVar276[0] = auVar133[0];
      auVar267._14_2_ = 0;
      auVar267._0_14_ = SUB1614(auVar71 << 0x18,2);
      auVar267 = auVar267 << 0x10;
      uVar42 = pauVar120[7][2];
      uVar43 = pauVar120[7][4];
      uVar44 = pauVar120[7][5];
      uVar45 = pauVar120[7][6];
      uVar46 = pauVar120[7][9];
      uVar47 = pauVar120[7][10];
      auVar286._0_14_ = auVar200._0_14_;
      auVar286[0xe] = auVar200[7];
      auVar286[0xf] = pauVar120[7][7];
      auVar285._14_2_ = auVar286._14_2_;
      auVar285._0_13_ = auVar200._0_13_;
      auVar285[0xd] = uVar45;
      uVar232 = auVar200[6];
      auVar284._13_3_ = auVar285._13_3_;
      auVar284._0_12_ = auVar200._0_12_;
      auVar284[0xc] = uVar232;
      auVar283._12_4_ = auVar284._12_4_;
      auVar283._0_11_ = auVar200._0_11_;
      auVar283[0xb] = uVar44;
      uVar230 = auVar200[5];
      auVar282._11_5_ = auVar283._11_5_;
      auVar282._0_10_ = auVar200._0_10_;
      auVar282[10] = uVar230;
      auVar281._10_6_ = auVar282._10_6_;
      auVar281._0_9_ = auVar200._0_9_;
      auVar281[9] = uVar43;
      uVar217 = auVar200[4];
      auVar280._9_7_ = auVar281._9_7_;
      auVar280._0_8_ = auVar200._0_8_;
      auVar280[8] = uVar217;
      auVar80._1_8_ = auVar280._8_8_;
      auVar80[0] = pauVar120[7][3];
      auVar80._9_7_ = 0;
      auVar79._10_6_ = 0;
      auVar79._0_10_ = SUB1610(auVar80 << 0x38,6);
      bVar147 = auVar200[2];
      auVar78._11_5_ = 0;
      auVar78._0_11_ = SUB1611(auVar79 << 0x30,5);
      auVar77._12_4_ = 0;
      auVar77._0_12_ = SUB1612(auVar78 << 0x28,4);
      auVar76._13_3_ = 0;
      auVar76._0_13_ = SUB1613(auVar77 << 0x20,3);
      auVar279._14_2_ = 0;
      auVar279._0_14_ = SUB1614(auVar76 << 0x18,2);
      auVar279 = auVar279 << 0x10;
      uVar148 = auVar200[8];
      uVar149 = auVar200[10];
      auVar209._0_14_ = auVar267._0_14_;
      auVar209[0xe] = pauVar120[5][3];
      auVar209[0xf] = pauVar120[5][0xb];
      auVar208._14_2_ = auVar209._14_2_;
      auVar208._0_13_ = auVar267._0_13_;
      auVar208[0xd] = auVar133[0xb];
      auVar207._13_3_ = auVar208._13_3_;
      auVar207._0_12_ = auVar267._0_12_;
      auVar207[0xc] = auVar133[3];
      auVar206._12_4_ = auVar207._12_4_;
      auVar206._0_11_ = auVar267._0_11_;
      auVar206[0xb] = pauVar120[5][10];
      auVar205._11_5_ = auVar206._11_5_;
      auVar205._0_10_ = auVar267._0_10_;
      auVar205[10] = pauVar120[5][2];
      auVar204._10_6_ = auVar205._10_6_;
      auVar204._0_9_ = auVar267._0_9_;
      auVar204[9] = auVar133[10];
      auVar203._9_7_ = auVar204._9_7_;
      auVar203._0_8_ = auVar267._0_8_;
      auVar203[8] = auVar133[2];
      auVar85._1_8_ = auVar203._8_8_;
      auVar85[0] = uVar40;
      auVar85._9_7_ = 0;
      auVar84._10_6_ = 0;
      auVar84._0_10_ = SUB1610(auVar85 << 0x38,6);
      auVar83._11_5_ = 0;
      auVar83._0_11_ = SUB1611(auVar84 << 0x30,5);
      auVar82._12_4_ = 0;
      auVar82._0_12_ = SUB1612(auVar83 << 0x28,4);
      auVar81._13_3_ = 0;
      auVar81._0_13_ = SUB1613(auVar82 << 0x20,3);
      auVar202._14_2_ = 0;
      auVar202._0_14_ = SUB1614(auVar81 << 0x18,2);
      auVar202 = auVar202 << 0x10;
      auVar305._0_14_ = auVar279._0_14_;
      auVar305[0xe] = pauVar120[7][3];
      auVar305[0xf] = pauVar120[7][0xb];
      auVar304._14_2_ = auVar305._14_2_;
      auVar304._0_13_ = auVar279._0_13_;
      auVar304[0xd] = auVar200[0xb];
      auVar303._13_3_ = auVar304._13_3_;
      auVar303._0_12_ = auVar279._0_12_;
      auVar303[0xc] = auVar200[3];
      auVar302._12_4_ = auVar303._12_4_;
      auVar302._0_11_ = auVar279._0_11_;
      auVar302[0xb] = uVar47;
      auVar301._11_5_ = auVar302._11_5_;
      auVar301._0_10_ = auVar279._0_10_;
      auVar301[10] = uVar42;
      auVar300._10_6_ = auVar301._10_6_;
      auVar300._0_9_ = auVar279._0_9_;
      auVar300[9] = uVar149;
      auVar299._9_7_ = auVar300._9_7_;
      auVar299._0_8_ = auVar279._0_8_;
      auVar299[8] = bVar147;
      auVar90._1_8_ = auVar299._8_8_;
      auVar90[0] = uVar46;
      auVar90._9_7_ = 0;
      auVar89._10_6_ = 0;
      auVar89._0_10_ = SUB1610(auVar90 << 0x38,6);
      auVar88._11_5_ = 0;
      auVar88._0_11_ = SUB1611(auVar89 << 0x30,5);
      auVar87._12_4_ = 0;
      auVar87._0_12_ = SUB1612(auVar88 << 0x28,4);
      auVar86._13_3_ = 0;
      auVar86._0_13_ = SUB1613(auVar87 << 0x20,3);
      auVar298._2_14_ = SUB1614(auVar86 << 0x18,2);
      auVar298._0_2_ = CONCAT11(uVar148,auVar200[0]);
      auVar293._0_14_ = auVar202._0_14_;
      auVar293[0xe] = uVar40;
      auVar293[0xf] = pauVar120[5][0xd];
      auVar292._14_2_ = auVar293._14_2_;
      auVar292._0_13_ = auVar202._0_13_;
      auVar292[0xd] = uVar39;
      auVar291._13_3_ = auVar292._13_3_;
      auVar291._0_12_ = auVar202._0_12_;
      auVar291[0xc] = pauVar120[5][1];
      auVar290._12_4_ = auVar291._12_4_;
      auVar290._0_11_ = auVar202._0_11_;
      auVar290[0xb] = auVar133[0xd];
      auVar289._11_5_ = auVar290._11_5_;
      auVar289._0_10_ = auVar202._0_10_;
      auVar289[10] = auVar133[9];
      auVar288._10_6_ = auVar289._10_6_;
      auVar288._0_9_ = auVar202._0_9_;
      auVar288[9] = uVar150;
      auVar287._9_7_ = auVar288._9_7_;
      auVar287._0_8_ = auVar202._0_8_;
      auVar287[8] = auVar133[1];
      uVar231 = auVar287._8_8_;
      auVar95._1_8_ = uVar231;
      auVar95[0] = pauVar120[5][0xc];
      auVar95._9_7_ = 0;
      auVar94._10_6_ = 0;
      auVar94._0_10_ = SUB1610(auVar95 << 0x38,6);
      auVar93._11_5_ = 0;
      auVar93._0_11_ = SUB1611(auVar94 << 0x30,5);
      auVar92._12_4_ = 0;
      auVar92._0_12_ = SUB1612(auVar93 << 0x28,4);
      auVar91._13_3_ = 0;
      auVar91._0_13_ = SUB1613(auVar92 << 0x20,3);
      auVar294._0_8_ = SUB168(auVar91 << 0x18,2) << 0x10;
      auVar143._0_14_ = auVar298._0_14_;
      auVar143[0xe] = uVar46;
      auVar143[0xf] = pauVar120[7][0xd];
      auVar142._14_2_ = auVar143._14_2_;
      auVar142._0_13_ = auVar298._0_13_;
      auVar142[0xd] = uVar44;
      auVar141._13_3_ = auVar142._13_3_;
      auVar141._0_12_ = auVar298._0_12_;
      auVar141[0xc] = pauVar120[7][1];
      auVar140._12_4_ = auVar141._12_4_;
      auVar140._0_11_ = auVar298._0_11_;
      auVar140[0xb] = auVar200[0xd];
      auVar139._11_5_ = auVar140._11_5_;
      auVar139._0_10_ = auVar298._0_10_;
      auVar139[10] = auVar200[9];
      auVar138._10_6_ = auVar139._10_6_;
      auVar138._0_9_ = auVar298._0_9_;
      auVar138[9] = uVar230;
      auVar137._9_7_ = auVar138._9_7_;
      auVar137._0_8_ = auVar298._0_8_;
      auVar137[8] = auVar200[1];
      auVar136._8_8_ = auVar137._8_8_;
      auVar136[7] = pauVar120[7][0xc];
      auVar136[6] = pauVar120[7][8];
      auVar136[5] = uVar43;
      auVar136[4] = pauVar120[7][0];
      auVar136[3] = auVar200[0xc];
      auVar136[2] = uVar148;
      auVar136._0_2_ = auVar298._0_2_;
      auVar135._2_14_ = auVar136._2_14_;
      auVar135[1] = uVar217;
      auVar135[0] = auVar200[0];
      auVar210[2] = uVar232;
      auVar210[1] = bVar147;
      auVar210[3] = uVar149;
      auVar210[4] = auVar200[0xe];
      auVar210[5] = uVar42;
      auVar210[6] = uVar45;
      auVar210[7] = uVar47;
      auVar210[8] = pauVar120[7][0xe];
      auVar210[0] = uVar41;
      auVar210._9_7_ = 0;
      auVar210 = auVar210 << 0x38;
      auVar294._8_8_ = auVar135._0_8_;
      auVar275._8_8_ = auVar136._8_8_;
      auVar275._0_8_ = uVar231;
      auVar211[1] = 0;
      auVar211[0] = bVar147;
      auVar211[2] = uVar232;
      auVar211[3] = 0;
      auVar211[4] = uVar149;
      auVar211[5] = 0;
      auVar211[6] = auVar200[0xe];
      auVar211[7] = 0;
      auVar211[8] = uVar42;
      auVar211[9] = 0;
      auVar211[10] = uVar45;
      auVar211[0xb] = 0;
      auVar211[0xc] = uVar47;
      auVar211[0xd] = 0;
      auVar211[0xe] = pauVar120[7][0xe];
      auVar211[0xf] = 0;
      auVar5[0xd] = 0;
      auVar5._0_13_ = auVar210._0_13_;
      auVar5[0xe] = uVar41;
      auVar11[0xc] = pauVar120[5][10];
      auVar11._0_12_ = auVar210._0_12_;
      auVar11._13_2_ = auVar5._13_2_;
      auVar17[0xb] = 0;
      auVar17._0_11_ = auVar210._0_11_;
      auVar17._12_3_ = auVar11._12_3_;
      auVar23[10] = pauVar120[5][6];
      auVar23._0_10_ = auVar210._0_10_;
      auVar23._11_4_ = auVar17._11_4_;
      auVar29[9] = 0;
      auVar29._0_9_ = auVar210._0_9_;
      auVar29._10_5_ = auVar23._10_5_;
      auVar96._7_8_ = 0;
      auVar96._0_7_ = (uint7)(CONCAT62(auVar29._9_6_,CONCAT11(pauVar120[5][2],uVar41)) >> 8);
      auVar105._1_8_ = SUB158(auVar96 << 0x40,7);
      auVar105[0] = auVar133[0xe];
      auVar105._9_6_ = 0;
      auVar106._1_10_ = SUB1510(auVar105 << 0x30,5);
      auVar106[0] = auVar133[10];
      auVar106._11_4_ = 0;
      auVar228._3_12_ = SUB1512(auVar106 << 0x20,3);
      auVar228[2] = auVar133[6];
      auVar228[1] = 0;
      auVar228[0] = auVar133[2];
      auVar228[0xf] = 0;
      auVar6[0xd] = 0;
      auVar6._0_13_ = auVar275._0_13_;
      auVar6[0xe] = pauVar120[5][0xd];
      auVar12[0xc] = uVar40;
      auVar12._0_12_ = auVar275._0_12_;
      auVar12._13_2_ = auVar6._13_2_;
      auVar18[0xb] = 0;
      auVar18._0_11_ = auVar275._0_11_;
      auVar18._12_3_ = auVar12._12_3_;
      auVar24[10] = uVar39;
      auVar24._0_10_ = auVar275._0_10_;
      auVar24._11_4_ = auVar18._11_4_;
      auVar30[9] = 0;
      auVar30._0_9_ = auVar275._0_9_;
      auVar30._10_5_ = auVar24._10_5_;
      auVar35[8] = pauVar120[5][1];
      auVar35._0_8_ = uVar231;
      auVar35._9_6_ = auVar30._9_6_;
      auVar97._7_8_ = 0;
      auVar97._0_7_ = auVar35._8_7_;
      auVar107._1_8_ = SUB158(auVar97 << 0x40,7);
      auVar107[0] = auVar133[0xd];
      auVar107._9_6_ = 0;
      auVar108._1_10_ = SUB1510(auVar107 << 0x30,5);
      auVar108[0] = auVar133[9];
      auVar108._11_4_ = 0;
      auVar38[2] = uVar150;
      auVar38._0_2_ = auVar287._8_2_;
      auVar38._3_12_ = SUB1512(auVar108 << 0x20,3);
      auVar144._0_2_ = auVar287._8_2_ & 0xff;
      auVar144._2_13_ = auVar38._2_13_;
      auVar144[0xf] = 0;
      auVar306[1] = 0;
      auVar306[0] = auVar200[1];
      auVar306[2] = uVar230;
      auVar306[3] = 0;
      auVar306[4] = auVar200[9];
      auVar306[5] = 0;
      auVar306[6] = auVar200[0xd];
      auVar306[7] = 0;
      auVar306[8] = pauVar120[7][1];
      auVar306[9] = 0;
      auVar306[10] = uVar44;
      auVar306[0xb] = 0;
      auVar306[0xc] = uVar46;
      auVar306[0xd] = 0;
      auVar306[0xe] = pauVar120[7][0xd];
      auVar306[0xf] = 0;
      auVar261 = pmaddwd(auVar211,auVar118);
      auVar266 = pmaddwd(auVar306,auVar118);
      auVar7[0xd] = 0;
      auVar7._0_13_ = auVar294._0_13_;
      auVar7[0xe] = pauVar120[5][0xc];
      auVar13[0xc] = pauVar120[5][8];
      auVar13._0_12_ = auVar294._0_12_;
      auVar13._13_2_ = auVar7._13_2_;
      auVar19[0xb] = 0;
      auVar19._0_11_ = auVar294._0_11_;
      auVar19._12_3_ = auVar13._12_3_;
      auVar25[10] = pauVar120[5][4];
      auVar25._0_10_ = auVar294._0_10_;
      auVar25._11_4_ = auVar19._11_4_;
      auVar31[9] = 0;
      auVar31._0_9_ = auVar294._0_9_;
      auVar31._10_5_ = auVar25._10_5_;
      auVar36[8] = pauVar120[5][0];
      auVar36._0_8_ = auVar294._0_8_;
      auVar36._9_6_ = auVar31._9_6_;
      auVar98._7_8_ = 0;
      auVar98._0_7_ = auVar36._8_7_;
      auVar109._1_8_ = SUB158(auVar98 << 0x40,7);
      auVar109[0] = auVar133[0xc];
      auVar109._9_6_ = 0;
      auVar110._1_10_ = SUB1510(auVar109 << 0x30,5);
      auVar110[0] = auVar133[8];
      auVar110._11_4_ = 0;
      auVar276._3_12_ = SUB1512(auVar110 << 0x20,3);
      auVar276[2] = auVar133[4];
      auVar276[1] = 0;
      auVar276[0xf] = 0;
      auVar295._0_3_ = CONCAT12(uVar217,auVar298._0_2_) & 0xff00ff;
      auVar295[3] = 0;
      auVar295[4] = uVar148;
      auVar295[5] = 0;
      auVar295[6] = auVar200[0xc];
      auVar295[7] = 0;
      auVar295[8] = pauVar120[7][0];
      auVar295[9] = 0;
      auVar295[10] = uVar43;
      auVar295[0xb] = 0;
      auVar295[0xc] = pauVar120[7][8];
      auVar295[0xd] = 0;
      auVar295[0xe] = pauVar120[7][0xc];
      auVar295[0xf] = 0;
      auVar200 = pmaddwd(auVar228,auVar118);
      auVar133 = pmaddwd(auVar144,auVar118);
      auVar133 = packssdw(auVar133,auVar266);
      auVar200 = packssdw(auVar200,auVar261);
      auVar266 = pmaddwd(auVar295,auVar118);
      auVar261 = pmaddwd(auVar276,auVar118);
      auVar261 = packssdw(auVar261,auVar266);
      auVar229._2_2_ = auVar133._8_2_;
      auVar229._0_2_ = auVar200._8_2_;
      auVar229._4_2_ = auVar200._10_2_;
      auVar229._6_2_ = auVar133._10_2_;
      auVar229._8_2_ = auVar200._12_2_;
      auVar229._10_2_ = auVar133._12_2_;
      auVar229._12_2_ = auVar200._14_2_;
      auVar229._14_2_ = auVar133._14_2_;
      auVar310._0_12_ = auVar200._0_12_;
      auVar310._12_2_ = auVar200._6_2_;
      auVar310._14_2_ = auVar133._6_2_;
      auVar309._12_4_ = auVar310._12_4_;
      auVar309._0_10_ = auVar200._0_10_;
      auVar309._10_2_ = auVar133._4_2_;
      auVar308._10_6_ = auVar309._10_6_;
      auVar308._0_8_ = auVar200._0_8_;
      auVar308._8_2_ = auVar200._4_2_;
      auVar307._8_8_ = auVar308._8_8_;
      auVar307._6_2_ = auVar133._2_2_;
      auVar307._4_2_ = auVar200._2_2_;
      auVar307._0_2_ = auVar200._0_2_;
      auVar307._2_2_ = auVar133._0_2_;
      auVar215._0_12_ = auVar133._0_12_;
      auVar215._12_2_ = auVar133._6_2_;
      auVar215._14_2_ = auVar261._6_2_;
      auVar214._12_4_ = auVar215._12_4_;
      auVar214._0_10_ = auVar133._0_10_;
      auVar214._10_2_ = auVar261._4_2_;
      auVar213._10_6_ = auVar214._10_6_;
      auVar213._0_8_ = auVar133._0_8_;
      auVar213._8_2_ = auVar133._4_2_;
      auVar212._8_8_ = auVar213._8_8_;
      auVar212._6_2_ = auVar261._2_2_;
      auVar212._4_2_ = auVar133._2_2_;
      auVar212._2_2_ = auVar261._0_2_;
      auVar212._0_2_ = auVar133._0_2_;
      auVar145._2_2_ = auVar261._8_2_;
      auVar145._0_2_ = auVar133._8_2_;
      auVar145._4_2_ = auVar133._10_2_;
      auVar145._6_2_ = auVar261._10_2_;
      auVar145._8_2_ = auVar133._12_2_;
      auVar145._10_2_ = auVar261._12_2_;
      auVar145._12_2_ = auVar133._14_2_;
      auVar145._14_2_ = auVar261._14_2_;
      auVar133 = pmaddwd(auVar229,auVar111);
      auVar311 = pmaddwd(auVar307,auVar111);
      auVar278 = pmaddwd(auVar145,auVar112);
      auVar266 = pmaddwd(auVar212,auVar112);
      local_18 = auVar133._0_4_;
      iStack_14 = auVar133._4_4_;
      iStack_10 = auVar133._8_4_;
      iStack_c = auVar133._12_4_;
      auVar297 = pmaddwd(auVar307,auVar116);
      auVar261 = pmaddwd(auVar229,auVar116);
      auVar200 = pmaddwd(auVar212,auVar117);
      auVar133 = pmaddwd(auVar145,auVar117);
      auVar277._0_4_ = auVar266._0_4_ + auVar311._0_4_ + iVar119 >> 0x12;
      auVar277._4_4_ = auVar266._4_4_ + auVar311._4_4_ + iVar113 >> 0x12;
      auVar277._8_4_ = auVar266._8_4_ + auVar311._8_4_ + iVar114 >> 0x12;
      auVar277._12_4_ = auVar266._12_4_ + auVar311._12_4_ + iVar115 >> 0x12;
      auVar296._0_4_ = auVar278._0_4_ + local_18 + iVar119 >> 0x12;
      auVar296._4_4_ = auVar278._4_4_ + iStack_14 + iVar113 >> 0x12;
      auVar296._8_4_ = auVar278._8_4_ + iStack_10 + iVar114 >> 0x12;
      auVar296._12_4_ = auVar278._12_4_ + iStack_c + iVar115 >> 0x12;
      auVar216._0_4_ = auVar200._0_4_ + auVar297._0_4_ + iVar119 >> 0x12;
      auVar216._4_4_ = auVar200._4_4_ + auVar297._4_4_ + iVar113 >> 0x12;
      auVar216._8_4_ = auVar200._8_4_ + auVar297._8_4_ + iVar114 >> 0x12;
      auVar216._12_4_ = auVar200._12_4_ + auVar297._12_4_ + iVar115 >> 0x12;
      auVar146._0_4_ = auVar133._0_4_ + auVar261._0_4_ + iVar119 >> 0x12;
      auVar146._4_4_ = auVar133._4_4_ + auVar261._4_4_ + iVar113 >> 0x12;
      auVar146._8_4_ = auVar133._8_4_ + auVar261._8_4_ + iVar114 >> 0x12;
      auVar146._12_4_ = auVar133._12_4_ + auVar261._12_4_ + iVar115 >> 0x12;
      auVar200 = packssdw(auVar277,auVar296);
      auVar133 = packssdw(auVar216,auVar146);
      sVar2 = auVar243._0_2_;
      cVar233 = (0 < sVar2) * (sVar2 < 0x100) * auVar243[0] - (0xff < sVar2);
      sVar2 = auVar243._2_2_;
      cVar244 = (0 < sVar2) * (sVar2 < 0x100) * auVar243[2] - (0xff < sVar2);
      sVar2 = auVar243._4_2_;
      cVar245 = (0 < sVar2) * (sVar2 < 0x100) * auVar243[4] - (0xff < sVar2);
      sVar2 = auVar243._6_2_;
      cVar246 = (0 < sVar2) * (sVar2 < 0x100) * auVar243[6] - (0xff < sVar2);
      sVar2 = auVar243._8_2_;
      cVar247 = (0 < sVar2) * (sVar2 < 0x100) * auVar243[8] - (0xff < sVar2);
      sVar2 = auVar243._10_2_;
      cVar248 = (0 < sVar2) * (sVar2 < 0x100) * auVar243[10] - (0xff < sVar2);
      sVar2 = auVar243._12_2_;
      cVar249 = (0 < sVar2) * (sVar2 < 0x100) * auVar243[0xc] - (0xff < sVar2);
      sVar2 = auVar243._14_2_;
      cVar250 = (0 < sVar2) * (sVar2 < 0x100) * auVar243[0xe] - (0xff < sVar2);
      sVar2 = auVar200._0_2_;
      cVar251 = (0 < sVar2) * (sVar2 < 0x100) * auVar200[0] - (0xff < sVar2);
      sVar2 = auVar200._2_2_;
      cVar252 = (0 < sVar2) * (sVar2 < 0x100) * auVar200[2] - (0xff < sVar2);
      sVar2 = auVar200._4_2_;
      cVar253 = (0 < sVar2) * (sVar2 < 0x100) * auVar200[4] - (0xff < sVar2);
      sVar2 = auVar200._6_2_;
      cVar254 = (0 < sVar2) * (sVar2 < 0x100) * auVar200[6] - (0xff < sVar2);
      sVar2 = auVar200._8_2_;
      cVar255 = (0 < sVar2) * (sVar2 < 0x100) * auVar200[8] - (0xff < sVar2);
      sVar2 = auVar200._10_2_;
      cVar256 = (0 < sVar2) * (sVar2 < 0x100) * auVar200[10] - (0xff < sVar2);
      sVar2 = auVar200._12_2_;
      cVar257 = (0 < sVar2) * (sVar2 < 0x100) * auVar200[0xc] - (0xff < sVar2);
      sVar2 = auVar200._14_2_;
      cVar258 = (0 < sVar2) * (sVar2 < 0x100) * auVar200[0xe] - (0xff < sVar2);
      sVar2 = auVar162._0_2_;
      cVar151 = (0 < sVar2) * (sVar2 < 0x100) * auVar162[0] - (0xff < sVar2);
      sVar2 = auVar162._2_2_;
      cVar168 = (0 < sVar2) * (sVar2 < 0x100) * auVar162[2] - (0xff < sVar2);
      sVar2 = auVar162._4_2_;
      cVar169 = (0 < sVar2) * (sVar2 < 0x100) * auVar162[4] - (0xff < sVar2);
      sVar2 = auVar162._6_2_;
      cVar170 = (0 < sVar2) * (sVar2 < 0x100) * auVar162[6] - (0xff < sVar2);
      sVar2 = auVar162._8_2_;
      cVar171 = (0 < sVar2) * (sVar2 < 0x100) * auVar162[8] - (0xff < sVar2);
      sVar2 = auVar162._10_2_;
      cVar172 = (0 < sVar2) * (sVar2 < 0x100) * auVar162[10] - (0xff < sVar2);
      sVar2 = auVar162._12_2_;
      cVar173 = (0 < sVar2) * (sVar2 < 0x100) * auVar162[0xc] - (0xff < sVar2);
      sVar2 = auVar162._14_2_;
      cVar174 = (0 < sVar2) * (sVar2 < 0x100) * auVar162[0xe] - (0xff < sVar2);
      sVar2 = auVar133._0_2_;
      cVar175 = (0 < sVar2) * (sVar2 < 0x100) * auVar133[0] - (0xff < sVar2);
      sVar2 = auVar133._2_2_;
      cVar176 = (0 < sVar2) * (sVar2 < 0x100) * auVar133[2] - (0xff < sVar2);
      sVar2 = auVar133._4_2_;
      cVar177 = (0 < sVar2) * (sVar2 < 0x100) * auVar133[4] - (0xff < sVar2);
      sVar2 = auVar133._6_2_;
      cVar178 = (0 < sVar2) * (sVar2 < 0x100) * auVar133[6] - (0xff < sVar2);
      sVar2 = auVar133._8_2_;
      cVar179 = (0 < sVar2) * (sVar2 < 0x100) * auVar133[8] - (0xff < sVar2);
      sVar2 = auVar133._10_2_;
      cVar180 = (0 < sVar2) * (sVar2 < 0x100) * auVar133[10] - (0xff < sVar2);
      sVar2 = auVar133._12_2_;
      cVar181 = (0 < sVar2) * (sVar2 < 0x100) * auVar133[0xc] - (0xff < sVar2);
      sVar2 = auVar133._14_2_;
      cVar182 = (0 < sVar2) * (sVar2 < 0x100) * auVar133[0xe] - (0xff < sVar2);
      if (param_5 == 0) {
        cVar233 = pavgb(cVar233,*pcVar124);
        cVar244 = pavgb(cVar244,pcVar124[1]);
        cVar245 = pavgb(cVar245,pcVar124[2]);
        cVar246 = pavgb(cVar246,pcVar124[3]);
        cVar247 = pavgb(cVar247,pcVar124[4]);
        cVar248 = pavgb(cVar248,pcVar124[5]);
        cVar249 = pavgb(cVar249,pcVar124[6]);
        cVar250 = pavgb(cVar250,pcVar124[7]);
        cVar251 = pavgb(cVar251,pcVar124[8]);
        cVar252 = pavgb(cVar252,pcVar124[9]);
        cVar253 = pavgb(cVar253,pcVar124[10]);
        cVar254 = pavgb(cVar254,pcVar124[0xb]);
        cVar255 = pavgb(cVar255,pcVar124[0xc]);
        cVar256 = pavgb(cVar256,pcVar124[0xd]);
        cVar257 = pavgb(cVar257,pcVar124[0xe]);
        cVar258 = pavgb(cVar258,pcVar124[0xf]);
        cVar151 = pavgb(cVar151,*pcVar121);
        cVar168 = pavgb(cVar168,pcVar121[1]);
        cVar169 = pavgb(cVar169,pcVar121[2]);
        cVar170 = pavgb(cVar170,pcVar121[3]);
        cVar171 = pavgb(cVar171,pcVar121[4]);
        cVar172 = pavgb(cVar172,pcVar121[5]);
        cVar173 = pavgb(cVar173,pcVar121[6]);
        cVar174 = pavgb(cVar174,pcVar121[7]);
        cVar175 = pavgb(cVar175,pcVar121[8]);
        cVar176 = pavgb(cVar176,pcVar121[9]);
        cVar177 = pavgb(cVar177,pcVar121[10]);
        cVar178 = pavgb(cVar178,pcVar121[0xb]);
        cVar179 = pavgb(cVar179,pcVar121[0xc]);
        cVar180 = pavgb(cVar180,pcVar121[0xd]);
        cVar181 = pavgb(cVar181,pcVar121[0xe]);
        cVar182 = pavgb(cVar182,pcVar121[0xf]);
      }
      *pcVar124 = cVar233;
      pcVar124[1] = cVar244;
      pcVar124[2] = cVar245;
      pcVar124[3] = cVar246;
      pcVar124[4] = cVar247;
      pcVar124[5] = cVar248;
      pcVar124[6] = cVar249;
      pcVar124[7] = cVar250;
      pcVar124[8] = cVar251;
      pcVar124[9] = cVar252;
      pcVar124[10] = cVar253;
      pcVar124[0xb] = cVar254;
      pcVar124[0xc] = cVar255;
      pcVar124[0xd] = cVar256;
      pcVar124[0xe] = cVar257;
      pcVar124[0xf] = cVar258;
      pcVar122 = pcVar121 + 0x10;
      pcVar124 = pcVar124 + 0x10;
      pauVar120 = pauVar120 + 8;
      *pcVar121 = cVar151;
      pcVar121[1] = cVar168;
      pcVar121[2] = cVar169;
      pcVar121[3] = cVar170;
      pcVar121[4] = cVar171;
      pcVar121[5] = cVar172;
      pcVar121[6] = cVar173;
      pcVar121[7] = cVar174;
      pcVar121[8] = cVar175;
      pcVar121[9] = cVar176;
      pcVar121[10] = cVar177;
      pcVar121[0xb] = cVar178;
      pcVar121[0xc] = cVar179;
      pcVar121[0xd] = cVar180;
      pcVar121[0xe] = cVar181;
      pcVar121[0xf] = cVar182;
      pcVar121 = pcVar122;
    } while (param_3 + lVar123 != pcVar122);
    param_2 = param_2 + lVar123;
    iVar119 = uVar1 * 0x20;
    param_3 = param_3 + lVar123;
  }
  if ((int)param_4 <= iVar119) {
    return;
  }
  WebPConvertARGBToUV_C(*param_1 + (long)iVar119 * 4,param_2,param_3,param_4 - iVar119);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8YuvToRgba32_SSE2(long param_1,long param_2,long param_3,long param_4)

{
  undefined2 *puVar1;
  char cVar2;
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
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [14];
  undefined1 auVar22 [12];
  unkbyte10 Var23;
  unkbyte9 Var24;
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  undefined1 auVar30 [12];
  undefined1 auVar31 [12];
  undefined1 auVar32 [12];
  undefined1 auVar33 [12];
  undefined6 uVar34;
  undefined4 uVar35;
  undefined2 uVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  short sVar65;
  short sVar66;
  long lVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined2 uVar74;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  ushort uVar83;
  ushort uVar87;
  ushort uVar88;
  ushort uVar89;
  ushort uVar90;
  ushort uVar91;
  ushort uVar92;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  ushort uVar93;
  undefined1 auVar86 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined4 uVar75;
  undefined6 uVar76;
  undefined8 uVar77;
  undefined1 auVar78 [12];
  undefined1 auVar79 [14];
  undefined1 auVar82 [16];
  
  sVar66 = _UNK_00102c2e;
  sVar65 = _UNK_00102c2c;
  sVar64 = _UNK_00102c2a;
  sVar63 = _UNK_00102c28;
  sVar62 = _UNK_00102c26;
  sVar61 = _UNK_00102c24;
  sVar60 = _UNK_00102c22;
  sVar59 = __LC8;
  sVar58 = _UNK_00102c1e;
  sVar57 = _UNK_00102c1c;
  sVar56 = _UNK_00102c1a;
  sVar55 = _UNK_00102c18;
  sVar54 = _UNK_00102c16;
  sVar53 = _UNK_00102c14;
  sVar52 = _UNK_00102c12;
  sVar51 = __LC7;
  auVar50 = __LC6;
  auVar49 = __LC5;
  auVar48 = __LC4;
  auVar47 = __LC3;
  auVar46 = __LC2;
  auVar45 = __LC1;
  sVar44 = _UNK_00102bae;
  sVar43 = _UNK_00102bac;
  sVar42 = _UNK_00102baa;
  sVar41 = _UNK_00102ba8;
  sVar40 = _UNK_00102ba6;
  sVar39 = _UNK_00102ba4;
  sVar38 = _UNK_00102ba2;
  sVar37 = __LC9;
  lVar67 = 0;
  do {
    uVar77 = *(undefined8 *)(param_1 + lVar67);
    auVar25[10] = 0;
    auVar25._0_10_ = SUB1610((undefined1  [16])0x0,0);
    auVar25[0xb] = (char)((ulong)uVar77 >> 0x28);
    auVar28[9] = (char)((ulong)uVar77 >> 0x20);
    auVar28._0_9_ = SUB169((undefined1  [16])0x0,0);
    auVar28._10_2_ = auVar25._10_2_;
    auVar31._9_3_ = auVar28._9_3_;
    auVar31._0_9_ = (unkuint9)0;
    auVar94._1_10_ =
         SUB1610(ZEXT516(CONCAT41(auVar31._8_4_,(char)((ulong)uVar77 >> 0x18))) << 0x38,6);
    auVar94[0] = (char)((ulong)uVar77 >> 0x10);
    auVar94._11_5_ = 0;
    auVar84._1_12_ = SUB1612(auVar94 << 0x28,4);
    auVar84[0] = (char)((ulong)uVar77 >> 8);
    auVar84._13_3_ = 0;
    auVar68._1_14_ = SUB1614(auVar84 << 0x18,2);
    auVar68[0] = (char)uVar77;
    auVar68[0xf] = 0;
    uVar77 = *(undefined8 *)(param_2 + lVar67);
    auVar68 = pmulhuw(auVar68 << 8,auVar45);
    auVar26[10] = 0;
    auVar26._0_10_ = SUB1610((undefined1  [16])0x0,0);
    auVar26[0xb] = (char)((ulong)uVar77 >> 0x28);
    auVar29[9] = (char)((ulong)uVar77 >> 0x20);
    auVar29._0_9_ = SUB169((undefined1  [16])0x0,0);
    auVar29._10_2_ = auVar26._10_2_;
    auVar32._9_3_ = auVar29._9_3_;
    auVar32._0_9_ = (unkuint9)0;
    auVar18._1_10_ =
         SUB1610(ZEXT516(CONCAT41(auVar32._8_4_,(char)((ulong)uVar77 >> 0x18))) << 0x38,6);
    auVar18[0] = (char)((ulong)uVar77 >> 0x10);
    auVar18._11_5_ = 0;
    auVar95._1_12_ = SUB1612(auVar18 << 0x28,4);
    auVar95[0] = (char)((ulong)uVar77 >> 8);
    auVar95._13_3_ = 0;
    auVar80._1_14_ = SUB1614(auVar95 << 0x18,2);
    auVar80[0] = (char)uVar77;
    auVar80[0xf] = 0;
    uVar77 = *(undefined8 *)(param_3 + lVar67);
    auVar84 = pmulhuw(auVar80 << 8,auVar49);
    auVar27[10] = 0;
    auVar27._0_10_ = SUB1610((undefined1  [16])0x0,0);
    auVar27[0xb] = (char)((ulong)uVar77 >> 0x28);
    auVar30[9] = (char)((ulong)uVar77 >> 0x20);
    auVar30._0_9_ = SUB169((undefined1  [16])0x0,0);
    auVar30._10_2_ = auVar27._10_2_;
    auVar33._9_3_ = auVar30._9_3_;
    auVar33._0_9_ = (unkuint9)0;
    auVar20._1_10_ =
         SUB1610(ZEXT516(CONCAT41(auVar33._8_4_,(char)((ulong)uVar77 >> 0x18))) << 0x38,6);
    auVar20[0] = (char)((ulong)uVar77 >> 0x10);
    auVar20._11_5_ = 0;
    auVar19._1_12_ = SUB1612(auVar20 << 0x28,4);
    auVar19[0] = (char)((ulong)uVar77 >> 8);
    auVar19._13_3_ = 0;
    auVar85._1_14_ = SUB1614(auVar19 << 0x18,2);
    auVar85[0] = (char)uVar77;
    auVar85[0xf] = 0;
    auVar95 = pmulhuw(auVar80 << 8,auVar47);
    auVar94 = pmulhuw(auVar85 << 8,auVar48);
    auVar80 = pmulhuw(auVar85 << 8,auVar46);
    auVar85 = paddusw(auVar84,auVar68);
    auVar85 = psubusw(auVar85,auVar50);
    uVar83 = auVar85._0_2_ >> 6;
    uVar87 = auVar85._2_2_ >> 6;
    uVar88 = auVar85._4_2_ >> 6;
    uVar89 = auVar85._6_2_ >> 6;
    uVar90 = auVar85._8_2_ >> 6;
    uVar91 = auVar85._10_2_ >> 6;
    uVar92 = auVar85._12_2_ >> 6;
    uVar93 = auVar85._14_2_ >> 6;
    auVar81._0_2_ = auVar80._0_2_ + auVar68._0_2_ + sVar51;
    auVar81._2_2_ = auVar80._2_2_ + auVar68._2_2_ + sVar52;
    auVar81._4_2_ = auVar80._4_2_ + auVar68._4_2_ + sVar53;
    auVar81._6_2_ = auVar80._6_2_ + auVar68._6_2_ + sVar54;
    auVar81._8_2_ = auVar80._8_2_ + auVar68._8_2_ + sVar55;
    auVar81._10_2_ = auVar80._10_2_ + auVar68._10_2_ + sVar56;
    auVar81._12_2_ = auVar80._12_2_ + auVar68._12_2_ + sVar57;
    auVar81._14_2_ = auVar80._14_2_ + auVar68._14_2_ + sVar58;
    auVar69._0_2_ = (auVar68._0_2_ + sVar59) - (auVar95._0_2_ + auVar94._0_2_);
    auVar69._2_2_ = (auVar68._2_2_ + sVar60) - (auVar95._2_2_ + auVar94._2_2_);
    auVar69._4_2_ = (auVar68._4_2_ + sVar61) - (auVar95._4_2_ + auVar94._4_2_);
    auVar69._6_2_ = (auVar68._6_2_ + sVar62) - (auVar95._6_2_ + auVar94._6_2_);
    auVar69._8_2_ = (auVar68._8_2_ + sVar63) - (auVar95._8_2_ + auVar94._8_2_);
    auVar69._10_2_ = (auVar68._10_2_ + sVar64) - (auVar95._10_2_ + auVar94._10_2_);
    auVar69._12_2_ = (auVar68._12_2_ + sVar65) - (auVar95._12_2_ + auVar94._12_2_);
    auVar69._14_2_ = (auVar68._14_2_ + sVar66) - (auVar95._14_2_ + auVar94._14_2_);
    auVar80 = psraw(auVar81,6);
    auVar68 = psraw(auVar69,6);
    sVar3 = auVar80._0_2_;
    sVar4 = auVar80._2_2_;
    sVar6 = auVar80._4_2_;
    sVar8 = auVar80._6_2_;
    sVar10 = auVar80._8_2_;
    sVar12 = auVar80._10_2_;
    sVar14 = auVar80._12_2_;
    sVar16 = auVar80._14_2_;
    cVar2 = (0 < sVar16) * (sVar16 < 0x100) * auVar80[0xe] - (0xff < sVar16);
    sVar16 = auVar68._0_2_;
    sVar5 = auVar68._2_2_;
    sVar7 = auVar68._4_2_;
    sVar9 = auVar68._6_2_;
    sVar11 = auVar68._8_2_;
    sVar13 = auVar68._10_2_;
    sVar15 = auVar68._12_2_;
    sVar17 = auVar68._14_2_;
    uVar74 = CONCAT11((0 < sVar37) * (sVar37 < 0x100) * (char)sVar37 - (0xff < sVar37),
                      (uVar83 != 0) * (uVar83 < 0x100) * (char)uVar83 - (0xff < uVar83));
    uVar75 = CONCAT13((0 < sVar38) * (sVar38 < 0x100) * (char)sVar38 - (0xff < sVar38),
                      CONCAT12((uVar87 != 0) * (uVar87 < 0x100) * (char)uVar87 - (0xff < uVar87),
                               uVar74));
    uVar76 = CONCAT15((0 < sVar39) * (sVar39 < 0x100) * (char)sVar39 - (0xff < sVar39),
                      CONCAT14((uVar88 != 0) * (uVar88 < 0x100) * (char)uVar88 - (0xff < uVar88),
                               uVar75));
    uVar77 = CONCAT17((0 < sVar40) * (sVar40 < 0x100) * (char)sVar40 - (0xff < sVar40),
                      CONCAT16((uVar89 != 0) * (uVar89 < 0x100) * (char)uVar89 - (0xff < uVar89),
                               uVar76));
    auVar78._0_10_ =
         CONCAT19((0 < sVar41) * (sVar41 < 0x100) * (char)sVar41 - (0xff < sVar41),
                  CONCAT18((uVar90 != 0) * (uVar90 < 0x100) * (char)uVar90 - (0xff < uVar90),uVar77)
                 );
    auVar78[10] = (uVar91 != 0) * (uVar91 < 0x100) * (char)uVar91 - (0xff < uVar91);
    auVar78[0xb] = (0 < sVar42) * (sVar42 < 0x100) * (char)sVar42 - (0xff < sVar42);
    auVar79[0xc] = (uVar92 != 0) * (uVar92 < 0x100) * (char)uVar92 - (0xff < uVar92);
    auVar79._0_12_ = auVar78;
    auVar79[0xd] = (0 < sVar43) * (sVar43 < 0x100) * (char)sVar43 - (0xff < sVar43);
    auVar82[0xe] = (uVar93 != 0) * (uVar93 < 0x100) * (char)uVar93 - (0xff < uVar93);
    auVar82._0_14_ = auVar79;
    auVar82[0xf] = (0 < sVar44) * (sVar44 < 0x100) * (char)sVar44 - (0xff < sVar44);
    uVar36 = CONCAT11((0 < sVar17) * (sVar17 < 0x100) * auVar68[0xe] - (0xff < sVar17),cVar2);
    uVar35 = CONCAT31(CONCAT21(uVar36,(0 < sVar15) * (sVar15 < 0x100) * auVar68[0xc] -
                                      (0xff < sVar15)),
                      (0 < sVar14) * (sVar14 < 0x100) * auVar80[0xc] - (0xff < sVar14));
    uVar34 = CONCAT51(CONCAT41(uVar35,(0 < sVar13) * (sVar13 < 0x100) * auVar68[10] -
                                      (0xff < sVar13)),
                      (0 < sVar12) * (sVar12 < 0x100) * auVar80[10] - (0xff < sVar12));
    Var24 = CONCAT72(CONCAT61(uVar34,(0 < sVar11) * (sVar11 < 0x100) * auVar68[8] - (0xff < sVar11))
                     ,CONCAT11((0 < sVar10) * (sVar10 < 0x100) * auVar80[8] - (0xff < sVar10),cVar2)
                    );
    Var23 = CONCAT91(CONCAT81((long)((unkuint9)Var24 >> 8),
                              (0 < sVar9) * (sVar9 < 0x100) * auVar68[6] - (0xff < sVar9)),
                     (0 < sVar8) * (sVar8 < 0x100) * auVar80[6] - (0xff < sVar8));
    auVar22._2_10_ = Var23;
    auVar22[1] = (0 < sVar7) * (sVar7 < 0x100) * auVar68[4] - (0xff < sVar7);
    auVar22[0] = (0 < sVar6) * (sVar6 < 0x100) * auVar80[4] - (0xff < sVar6);
    auVar21._2_12_ = auVar22;
    auVar21[1] = (0 < sVar5) * (sVar5 < 0x100) * auVar68[2] - (0xff < sVar5);
    auVar21[0] = (0 < sVar4) * (sVar4 < 0x100) * auVar80[2] - (0xff < sVar4);
    auVar86._0_2_ =
         CONCAT11((0 < sVar16) * (sVar16 < 0x100) * auVar68[0] - (0xff < sVar16),
                  (0 < sVar3) * (sVar3 < 0x100) * auVar80[0] - (0xff < sVar3));
    auVar86._2_14_ = auVar21;
    auVar73._0_12_ = auVar86._0_12_;
    auVar73._12_2_ = (short)Var23;
    auVar73._14_2_ = (short)((ulong)uVar77 >> 0x30);
    auVar72._12_4_ = auVar73._12_4_;
    auVar72._0_10_ = auVar86._0_10_;
    auVar72._10_2_ = (short)((uint6)uVar76 >> 0x20);
    auVar71._10_6_ = auVar72._10_6_;
    auVar71._0_8_ = auVar86._0_8_;
    auVar71._8_2_ = auVar22._0_2_;
    auVar70._8_8_ = auVar71._8_8_;
    auVar70._6_2_ = (short)((uint)uVar75 >> 0x10);
    auVar70._4_2_ = auVar21._0_2_;
    auVar70._2_2_ = uVar74;
    auVar70._0_2_ = auVar86._0_2_;
    puVar1 = (undefined2 *)(param_4 + 0x10 + lVar67 * 4);
    *puVar1 = (short)((unkuint9)Var24 >> 8);
    puVar1[1] = (short)((unkuint10)auVar78._0_10_ >> 0x40);
    puVar1[2] = (short)uVar34;
    puVar1[3] = auVar78._10_2_;
    puVar1[4] = (short)uVar35;
    puVar1[5] = auVar79._12_2_;
    puVar1[6] = uVar36;
    puVar1[7] = auVar82._14_2_;
    *(undefined1 (*) [16])(param_4 + lVar67 * 4) = auVar70;
    lVar67 = lVar67 + 8;
  } while (lVar67 != 0x20);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8YuvToBgra32_SSE2(long param_1,long param_2,long param_3,long param_4)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  char cVar3;
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
  short sVar18;
  short sVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [14];
  undefined1 auVar24 [12];
  unkbyte10 Var25;
  unkbyte9 Var26;
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  undefined1 auVar30 [12];
  undefined1 auVar31 [12];
  undefined1 auVar32 [12];
  undefined1 auVar33 [12];
  undefined1 auVar34 [12];
  undefined1 auVar35 [12];
  undefined6 uVar36;
  undefined4 uVar37;
  undefined2 uVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  short sVar65;
  short sVar66;
  short sVar67;
  short sVar68;
  long lVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  ushort uVar76;
  undefined2 uVar77;
  ushort uVar86;
  ushort uVar87;
  ushort uVar88;
  ushort uVar89;
  ushort uVar90;
  ushort uVar91;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  ushort uVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined4 uVar78;
  undefined6 uVar79;
  undefined8 uVar80;
  undefined1 auVar81 [12];
  undefined1 auVar82 [14];
  undefined1 auVar85 [16];
  
  sVar68 = _UNK_00102c2e;
  sVar67 = _UNK_00102c2c;
  sVar66 = _UNK_00102c2a;
  sVar65 = _UNK_00102c28;
  sVar64 = _UNK_00102c26;
  sVar63 = _UNK_00102c24;
  sVar62 = _UNK_00102c22;
  sVar61 = __LC8;
  sVar60 = _UNK_00102c1e;
  sVar59 = _UNK_00102c1c;
  sVar58 = _UNK_00102c1a;
  sVar57 = _UNK_00102c18;
  sVar56 = _UNK_00102c16;
  sVar55 = _UNK_00102c14;
  sVar54 = _UNK_00102c12;
  sVar53 = __LC7;
  auVar52 = __LC6;
  auVar51 = __LC5;
  auVar50 = __LC4;
  auVar49 = __LC3;
  auVar48 = __LC2;
  auVar47 = __LC1;
  sVar46 = _UNK_00102bae;
  sVar45 = _UNK_00102bac;
  sVar44 = _UNK_00102baa;
  sVar43 = _UNK_00102ba8;
  sVar42 = _UNK_00102ba6;
  sVar41 = _UNK_00102ba4;
  sVar40 = _UNK_00102ba2;
  sVar39 = __LC9;
  lVar69 = 0;
  do {
    uVar80 = *(undefined8 *)(param_1 + lVar69);
    uVar2 = *(undefined8 *)(param_2 + lVar69);
    auVar27[10] = 0;
    auVar27._0_10_ = SUB1610((undefined1  [16])0x0,0);
    auVar27[0xb] = (char)((ulong)uVar80 >> 0x28);
    auVar30[9] = (char)((ulong)uVar80 >> 0x20);
    auVar30._0_9_ = SUB169((undefined1  [16])0x0,0);
    auVar30._10_2_ = auVar27._10_2_;
    auVar33._9_3_ = auVar30._9_3_;
    auVar33._0_9_ = (unkuint9)0;
    auVar96._1_10_ =
         SUB1610(ZEXT516(CONCAT41(auVar33._8_4_,(char)((ulong)uVar80 >> 0x18))) << 0x38,6);
    auVar96[0] = (char)((ulong)uVar80 >> 0x10);
    auVar96._11_5_ = 0;
    auVar83._1_12_ = SUB1612(auVar96 << 0x28,4);
    auVar83[0] = (char)((ulong)uVar80 >> 8);
    auVar83._13_3_ = 0;
    auVar70._1_14_ = SUB1614(auVar83 << 0x18,2);
    auVar70[0] = (char)uVar80;
    auVar70[0xf] = 0;
    auVar28[10] = 0;
    auVar28._0_10_ = SUB1610((undefined1  [16])0x0,0);
    auVar28[0xb] = (char)((ulong)uVar2 >> 0x28);
    auVar31[9] = (char)((ulong)uVar2 >> 0x20);
    auVar31._0_9_ = SUB169((undefined1  [16])0x0,0);
    auVar31._10_2_ = auVar28._10_2_;
    auVar34._9_3_ = auVar31._9_3_;
    auVar34._0_9_ = (unkuint9)0;
    auVar20._1_10_ =
         SUB1610(ZEXT516(CONCAT41(auVar34._8_4_,(char)((ulong)uVar2 >> 0x18))) << 0x38,6);
    auVar20[0] = (char)((ulong)uVar2 >> 0x10);
    auVar20._11_5_ = 0;
    auVar97._1_12_ = SUB1612(auVar20 << 0x28,4);
    auVar97[0] = (char)((ulong)uVar2 >> 8);
    auVar97._13_3_ = 0;
    auVar84._1_14_ = SUB1614(auVar97 << 0x18,2);
    auVar84[0] = (char)uVar2;
    auVar84[0xf] = 0;
    uVar80 = *(undefined8 *)(param_3 + lVar69);
    auVar70 = pmulhuw(auVar70 << 8,auVar47);
    auVar83 = pmulhuw(auVar84 << 8,auVar51);
    auVar29[10] = 0;
    auVar29._0_10_ = SUB1610((undefined1  [16])0x0,0);
    auVar29[0xb] = (char)((ulong)uVar80 >> 0x28);
    auVar32[9] = (char)((ulong)uVar80 >> 0x20);
    auVar32._0_9_ = SUB169((undefined1  [16])0x0,0);
    auVar32._10_2_ = auVar29._10_2_;
    auVar35._9_3_ = auVar32._9_3_;
    auVar35._0_9_ = (unkuint9)0;
    auVar22._1_10_ =
         SUB1610(ZEXT516(CONCAT41(auVar35._8_4_,(char)((ulong)uVar80 >> 0x18))) << 0x38,6);
    auVar22[0] = (char)((ulong)uVar80 >> 0x10);
    auVar22._11_5_ = 0;
    auVar21._1_12_ = SUB1612(auVar22 << 0x28,4);
    auVar21[0] = (char)((ulong)uVar80 >> 8);
    auVar21._13_3_ = 0;
    auVar93._1_14_ = SUB1614(auVar21 << 0x18,2);
    auVar93[0] = (char)uVar80;
    auVar93[0xf] = 0;
    auVar97 = pmulhuw(auVar84 << 8,auVar49);
    auVar96 = pmulhuw(auVar93 << 8,auVar50);
    auVar93 = pmulhuw(auVar93 << 8,auVar48);
    auVar84 = paddusw(auVar83,auVar70);
    auVar84 = psubusw(auVar84,auVar52);
    uVar76 = auVar84._0_2_ >> 6;
    uVar86 = auVar84._2_2_ >> 6;
    uVar87 = auVar84._4_2_ >> 6;
    uVar88 = auVar84._6_2_ >> 6;
    uVar89 = auVar84._8_2_ >> 6;
    uVar90 = auVar84._10_2_ >> 6;
    uVar91 = auVar84._12_2_ >> 6;
    uVar92 = auVar84._14_2_ >> 6;
    auVar94._0_2_ = auVar93._0_2_ + auVar70._0_2_ + sVar53;
    auVar94._2_2_ = auVar93._2_2_ + auVar70._2_2_ + sVar54;
    auVar94._4_2_ = auVar93._4_2_ + auVar70._4_2_ + sVar55;
    auVar94._6_2_ = auVar93._6_2_ + auVar70._6_2_ + sVar56;
    auVar94._8_2_ = auVar93._8_2_ + auVar70._8_2_ + sVar57;
    auVar94._10_2_ = auVar93._10_2_ + auVar70._10_2_ + sVar58;
    auVar94._12_2_ = auVar93._12_2_ + auVar70._12_2_ + sVar59;
    auVar94._14_2_ = auVar93._14_2_ + auVar70._14_2_ + sVar60;
    auVar71._0_2_ = (auVar70._0_2_ + sVar61) - (auVar97._0_2_ + auVar96._0_2_);
    auVar71._2_2_ = (auVar70._2_2_ + sVar62) - (auVar97._2_2_ + auVar96._2_2_);
    auVar71._4_2_ = (auVar70._4_2_ + sVar63) - (auVar97._4_2_ + auVar96._4_2_);
    auVar71._6_2_ = (auVar70._6_2_ + sVar64) - (auVar97._6_2_ + auVar96._6_2_);
    auVar71._8_2_ = (auVar70._8_2_ + sVar65) - (auVar97._8_2_ + auVar96._8_2_);
    auVar71._10_2_ = (auVar70._10_2_ + sVar66) - (auVar97._10_2_ + auVar96._10_2_);
    auVar71._12_2_ = (auVar70._12_2_ + sVar67) - (auVar97._12_2_ + auVar96._12_2_);
    auVar71._14_2_ = (auVar70._14_2_ + sVar68) - (auVar97._14_2_ + auVar96._14_2_);
    auVar84 = psraw(auVar94,6);
    auVar70 = psraw(auVar71,6);
    cVar3 = (uVar92 != 0) * (uVar92 < 0x100) * (char)uVar92 - (0xff < uVar92);
    sVar12 = auVar84._0_2_;
    sVar13 = auVar84._2_2_;
    sVar14 = auVar84._4_2_;
    sVar15 = auVar84._6_2_;
    sVar16 = auVar84._8_2_;
    sVar17 = auVar84._10_2_;
    sVar18 = auVar84._12_2_;
    sVar19 = auVar84._14_2_;
    sVar4 = auVar70._0_2_;
    sVar5 = auVar70._2_2_;
    sVar6 = auVar70._4_2_;
    sVar7 = auVar70._6_2_;
    sVar8 = auVar70._8_2_;
    sVar9 = auVar70._10_2_;
    sVar10 = auVar70._12_2_;
    sVar11 = auVar70._14_2_;
    uVar77 = CONCAT11((0 < sVar39) * (sVar39 < 0x100) * (char)sVar39 - (0xff < sVar39),
                      (0 < sVar12) * (sVar12 < 0x100) * auVar84[0] - (0xff < sVar12));
    uVar78 = CONCAT13((0 < sVar40) * (sVar40 < 0x100) * (char)sVar40 - (0xff < sVar40),
                      CONCAT12((0 < sVar13) * (sVar13 < 0x100) * auVar84[2] - (0xff < sVar13),uVar77
                              ));
    uVar79 = CONCAT15((0 < sVar41) * (sVar41 < 0x100) * (char)sVar41 - (0xff < sVar41),
                      CONCAT14((0 < sVar14) * (sVar14 < 0x100) * auVar84[4] - (0xff < sVar14),uVar78
                              ));
    uVar80 = CONCAT17((0 < sVar42) * (sVar42 < 0x100) * (char)sVar42 - (0xff < sVar42),
                      CONCAT16((0 < sVar15) * (sVar15 < 0x100) * auVar84[6] - (0xff < sVar15),uVar79
                              ));
    auVar81._0_10_ =
         CONCAT19((0 < sVar43) * (sVar43 < 0x100) * (char)sVar43 - (0xff < sVar43),
                  CONCAT18((0 < sVar16) * (sVar16 < 0x100) * auVar84[8] - (0xff < sVar16),uVar80));
    auVar81[10] = (0 < sVar17) * (sVar17 < 0x100) * auVar84[10] - (0xff < sVar17);
    auVar81[0xb] = (0 < sVar44) * (sVar44 < 0x100) * (char)sVar44 - (0xff < sVar44);
    auVar82[0xc] = (0 < sVar18) * (sVar18 < 0x100) * auVar84[0xc] - (0xff < sVar18);
    auVar82._0_12_ = auVar81;
    auVar82[0xd] = (0 < sVar45) * (sVar45 < 0x100) * (char)sVar45 - (0xff < sVar45);
    auVar85[0xe] = (0 < sVar19) * (sVar19 < 0x100) * auVar84[0xe] - (0xff < sVar19);
    auVar85._0_14_ = auVar82;
    auVar85[0xf] = (0 < sVar46) * (sVar46 < 0x100) * (char)sVar46 - (0xff < sVar46);
    uVar38 = CONCAT11((0 < sVar11) * (sVar11 < 0x100) * auVar70[0xe] - (0xff < sVar11),cVar3);
    uVar37 = CONCAT31(CONCAT21(uVar38,(0 < sVar10) * (sVar10 < 0x100) * auVar70[0xc] -
                                      (0xff < sVar10)),
                      (uVar91 != 0) * (uVar91 < 0x100) * (char)uVar91 - (0xff < uVar91));
    uVar36 = CONCAT51(CONCAT41(uVar37,(0 < sVar9) * (sVar9 < 0x100) * auVar70[10] - (0xff < sVar9)),
                      (uVar90 != 0) * (uVar90 < 0x100) * (char)uVar90 - (0xff < uVar90));
    Var26 = CONCAT72(CONCAT61(uVar36,(0 < sVar8) * (sVar8 < 0x100) * auVar70[8] - (0xff < sVar8)),
                     CONCAT11((uVar89 != 0) * (uVar89 < 0x100) * (char)uVar89 - (0xff < uVar89),
                              cVar3));
    Var25 = CONCAT91(CONCAT81((long)((unkuint9)Var26 >> 8),
                              (0 < sVar7) * (sVar7 < 0x100) * auVar70[6] - (0xff < sVar7)),
                     (uVar88 != 0) * (uVar88 < 0x100) * (char)uVar88 - (0xff < uVar88));
    auVar24._2_10_ = Var25;
    auVar24[1] = (0 < sVar6) * (sVar6 < 0x100) * auVar70[4] - (0xff < sVar6);
    auVar24[0] = (uVar87 != 0) * (uVar87 < 0x100) * (char)uVar87 - (0xff < uVar87);
    auVar23._2_12_ = auVar24;
    auVar23[1] = (0 < sVar5) * (sVar5 < 0x100) * auVar70[2] - (0xff < sVar5);
    auVar23[0] = (uVar86 != 0) * (uVar86 < 0x100) * (char)uVar86 - (0xff < uVar86);
    auVar95._0_2_ =
         CONCAT11((0 < sVar4) * (sVar4 < 0x100) * auVar70[0] - (0xff < sVar4),
                  (uVar76 != 0) * (uVar76 < 0x100) * (char)uVar76 - (0xff < uVar76));
    auVar95._2_14_ = auVar23;
    auVar75._0_12_ = auVar95._0_12_;
    auVar75._12_2_ = (short)Var25;
    auVar75._14_2_ = (short)((ulong)uVar80 >> 0x30);
    auVar74._12_4_ = auVar75._12_4_;
    auVar74._0_10_ = auVar95._0_10_;
    auVar74._10_2_ = (short)((uint6)uVar79 >> 0x20);
    auVar73._10_6_ = auVar74._10_6_;
    auVar73._0_8_ = auVar95._0_8_;
    auVar73._8_2_ = auVar24._0_2_;
    auVar72._8_8_ = auVar73._8_8_;
    auVar72._6_2_ = (short)((uint)uVar78 >> 0x10);
    auVar72._4_2_ = auVar23._0_2_;
    auVar72._2_2_ = uVar77;
    auVar72._0_2_ = auVar95._0_2_;
    puVar1 = (undefined2 *)(param_4 + 0x10 + lVar69 * 4);
    *puVar1 = (short)((unkuint9)Var26 >> 8);
    puVar1[1] = (short)((unkuint10)auVar81._0_10_ >> 0x40);
    puVar1[2] = (short)uVar36;
    puVar1[3] = auVar81._10_2_;
    puVar1[4] = (short)uVar37;
    puVar1[5] = auVar82._12_2_;
    puVar1[6] = uVar38;
    puVar1[7] = auVar85._14_2_;
    *(undefined1 (*) [16])(param_4 + lVar69 * 4) = auVar72;
    lVar69 = lVar69 + 8;
  } while (lVar69 != 0x20);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8YuvToArgb32_SSE2(long param_1,long param_2,long param_3,long param_4)

{
  undefined2 *puVar1;
  char cVar2;
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
  short sVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [14];
  undefined1 auVar23 [12];
  unkbyte10 Var24;
  unkbyte9 Var25;
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  undefined1 auVar30 [12];
  undefined1 auVar31 [12];
  undefined1 auVar32 [12];
  undefined1 auVar33 [12];
  undefined1 auVar34 [12];
  undefined6 uVar35;
  undefined4 uVar36;
  undefined2 uVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  short sVar65;
  short sVar66;
  short sVar67;
  long lVar68;
  undefined2 uVar69;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  ushort uVar84;
  ushort uVar88;
  ushort uVar89;
  ushort uVar90;
  ushort uVar91;
  ushort uVar92;
  ushort uVar93;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  ushort uVar94;
  undefined1 auVar87 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined4 uVar70;
  undefined6 uVar71;
  undefined8 uVar72;
  undefined1 auVar73 [12];
  undefined1 auVar74 [14];
  undefined1 auVar77 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  
  sVar67 = _UNK_00102c2e;
  sVar66 = _UNK_00102c2c;
  sVar65 = _UNK_00102c2a;
  sVar64 = _UNK_00102c28;
  sVar63 = _UNK_00102c26;
  sVar62 = _UNK_00102c24;
  sVar61 = _UNK_00102c22;
  sVar60 = __LC8;
  sVar59 = _UNK_00102c1e;
  sVar58 = _UNK_00102c1c;
  sVar57 = _UNK_00102c1a;
  sVar56 = _UNK_00102c18;
  sVar55 = _UNK_00102c16;
  sVar54 = _UNK_00102c14;
  sVar53 = _UNK_00102c12;
  sVar52 = __LC7;
  auVar51 = __LC6;
  auVar50 = __LC5;
  auVar49 = __LC4;
  auVar48 = __LC3;
  auVar47 = __LC2;
  auVar46 = __LC1;
  sVar45 = _UNK_00102bae;
  sVar44 = _UNK_00102bac;
  sVar43 = _UNK_00102baa;
  sVar42 = _UNK_00102ba8;
  sVar41 = _UNK_00102ba6;
  sVar40 = _UNK_00102ba4;
  sVar39 = _UNK_00102ba2;
  sVar38 = __LC9;
  lVar68 = 0;
  do {
    uVar72 = *(undefined8 *)(param_1 + lVar68);
    auVar26[10] = 0;
    auVar26._0_10_ = SUB1610((undefined1  [16])0x0,0);
    auVar26[0xb] = (char)((ulong)uVar72 >> 0x28);
    auVar29[9] = (char)((ulong)uVar72 >> 0x20);
    auVar29._0_9_ = SUB169((undefined1  [16])0x0,0);
    auVar29._10_2_ = auVar26._10_2_;
    auVar32._9_3_ = auVar29._9_3_;
    auVar32._0_9_ = (unkuint9)0;
    auVar95._1_10_ =
         SUB1610(ZEXT516(CONCAT41(auVar32._8_4_,(char)((ulong)uVar72 >> 0x18))) << 0x38,6);
    auVar95[0] = (char)((ulong)uVar72 >> 0x10);
    auVar95._11_5_ = 0;
    auVar85._1_12_ = SUB1612(auVar95 << 0x28,4);
    auVar85[0] = (char)((ulong)uVar72 >> 8);
    auVar85._13_3_ = 0;
    auVar75._1_14_ = SUB1614(auVar85 << 0x18,2);
    auVar75[0] = (char)uVar72;
    auVar75[0xf] = 0;
    uVar72 = *(undefined8 *)(param_2 + lVar68);
    auVar75 = pmulhuw(auVar75 << 8,auVar46);
    auVar27[10] = 0;
    auVar27._0_10_ = SUB1610((undefined1  [16])0x0,0);
    auVar27[0xb] = (char)((ulong)uVar72 >> 0x28);
    auVar30[9] = (char)((ulong)uVar72 >> 0x20);
    auVar30._0_9_ = SUB169((undefined1  [16])0x0,0);
    auVar30._10_2_ = auVar27._10_2_;
    auVar33._9_3_ = auVar30._9_3_;
    auVar33._0_9_ = (unkuint9)0;
    auVar19._1_10_ =
         SUB1610(ZEXT516(CONCAT41(auVar33._8_4_,(char)((ulong)uVar72 >> 0x18))) << 0x38,6);
    auVar19[0] = (char)((ulong)uVar72 >> 0x10);
    auVar19._11_5_ = 0;
    auVar96._1_12_ = SUB1612(auVar19 << 0x28,4);
    auVar96[0] = (char)((ulong)uVar72 >> 8);
    auVar96._13_3_ = 0;
    auVar78._1_14_ = SUB1614(auVar96 << 0x18,2);
    auVar78[0] = (char)uVar72;
    auVar78[0xf] = 0;
    uVar72 = *(undefined8 *)(param_3 + lVar68);
    auVar85 = pmulhuw(auVar78 << 8,auVar50);
    auVar28[10] = 0;
    auVar28._0_10_ = SUB1610((undefined1  [16])0x0,0);
    auVar28[0xb] = (char)((ulong)uVar72 >> 0x28);
    auVar31[9] = (char)((ulong)uVar72 >> 0x20);
    auVar31._0_9_ = SUB169((undefined1  [16])0x0,0);
    auVar31._10_2_ = auVar28._10_2_;
    auVar34._9_3_ = auVar31._9_3_;
    auVar34._0_9_ = (unkuint9)0;
    auVar21._1_10_ =
         SUB1610(ZEXT516(CONCAT41(auVar34._8_4_,(char)((ulong)uVar72 >> 0x18))) << 0x38,6);
    auVar21[0] = (char)((ulong)uVar72 >> 0x10);
    auVar21._11_5_ = 0;
    auVar20._1_12_ = SUB1612(auVar21 << 0x28,4);
    auVar20[0] = (char)((ulong)uVar72 >> 8);
    auVar20._13_3_ = 0;
    auVar86._1_14_ = SUB1614(auVar20 << 0x18,2);
    auVar86[0] = (char)uVar72;
    auVar86[0xf] = 0;
    auVar96 = pmulhuw(auVar78 << 8,auVar48);
    auVar95 = pmulhuw(auVar86 << 8,auVar49);
    auVar78 = pmulhuw(auVar86 << 8,auVar47);
    auVar86 = paddusw(auVar85,auVar75);
    auVar86 = psubusw(auVar86,auVar51);
    uVar84 = auVar86._0_2_ >> 6;
    uVar88 = auVar86._2_2_ >> 6;
    uVar89 = auVar86._4_2_ >> 6;
    uVar90 = auVar86._6_2_ >> 6;
    uVar91 = auVar86._8_2_ >> 6;
    uVar92 = auVar86._10_2_ >> 6;
    uVar93 = auVar86._12_2_ >> 6;
    uVar94 = auVar86._14_2_ >> 6;
    auVar76._0_2_ = (auVar75._0_2_ + sVar60) - (auVar96._0_2_ + auVar95._0_2_);
    auVar76._2_2_ = (auVar75._2_2_ + sVar61) - (auVar96._2_2_ + auVar95._2_2_);
    auVar76._4_2_ = (auVar75._4_2_ + sVar62) - (auVar96._4_2_ + auVar95._4_2_);
    auVar76._6_2_ = (auVar75._6_2_ + sVar63) - (auVar96._6_2_ + auVar95._6_2_);
    auVar76._8_2_ = (auVar75._8_2_ + sVar64) - (auVar96._8_2_ + auVar95._8_2_);
    auVar76._10_2_ = (auVar75._10_2_ + sVar65) - (auVar96._10_2_ + auVar95._10_2_);
    auVar76._12_2_ = (auVar75._12_2_ + sVar66) - (auVar96._12_2_ + auVar95._12_2_);
    auVar76._14_2_ = (auVar75._14_2_ + sVar67) - (auVar96._14_2_ + auVar95._14_2_);
    auVar79._0_2_ = auVar78._0_2_ + auVar75._0_2_ + sVar52;
    auVar79._2_2_ = auVar78._2_2_ + auVar75._2_2_ + sVar53;
    auVar79._4_2_ = auVar78._4_2_ + auVar75._4_2_ + sVar54;
    auVar79._6_2_ = auVar78._6_2_ + auVar75._6_2_ + sVar55;
    auVar79._8_2_ = auVar78._8_2_ + auVar75._8_2_ + sVar56;
    auVar79._10_2_ = auVar78._10_2_ + auVar75._10_2_ + sVar57;
    auVar79._12_2_ = auVar78._12_2_ + auVar75._12_2_ + sVar58;
    auVar79._14_2_ = auVar78._14_2_ + auVar75._14_2_ + sVar59;
    auVar75 = psraw(auVar76,6);
    auVar78 = psraw(auVar79,6);
    cVar2 = (0 < sVar45) * (sVar45 < 0x100) * (char)sVar45 - (0xff < sVar45);
    sVar11 = auVar75._0_2_;
    sVar12 = auVar75._2_2_;
    sVar13 = auVar75._4_2_;
    sVar14 = auVar75._6_2_;
    sVar15 = auVar75._8_2_;
    sVar16 = auVar75._10_2_;
    sVar17 = auVar75._12_2_;
    sVar18 = auVar75._14_2_;
    sVar3 = auVar78._0_2_;
    sVar4 = auVar78._2_2_;
    sVar5 = auVar78._4_2_;
    sVar6 = auVar78._6_2_;
    sVar7 = auVar78._8_2_;
    sVar8 = auVar78._10_2_;
    sVar9 = auVar78._12_2_;
    sVar10 = auVar78._14_2_;
    uVar37 = CONCAT11((0 < sVar10) * (sVar10 < 0x100) * auVar78[0xe] - (0xff < sVar10),cVar2);
    uVar36 = CONCAT31(CONCAT21(uVar37,(0 < sVar9) * (sVar9 < 0x100) * auVar78[0xc] - (0xff < sVar9))
                      ,(0 < sVar44) * (sVar44 < 0x100) * (char)sVar44 - (0xff < sVar44));
    uVar35 = CONCAT51(CONCAT41(uVar36,(0 < sVar8) * (sVar8 < 0x100) * auVar78[10] - (0xff < sVar8)),
                      (0 < sVar43) * (sVar43 < 0x100) * (char)sVar43 - (0xff < sVar43));
    Var25 = CONCAT72(CONCAT61(uVar35,(0 < sVar7) * (sVar7 < 0x100) * auVar78[8] - (0xff < sVar7)),
                     CONCAT11((0 < sVar42) * (sVar42 < 0x100) * (char)sVar42 - (0xff < sVar42),cVar2
                             ));
    Var24 = CONCAT91(CONCAT81((long)((unkuint9)Var25 >> 8),
                              (0 < sVar6) * (sVar6 < 0x100) * auVar78[6] - (0xff < sVar6)),
                     (0 < sVar41) * (sVar41 < 0x100) * (char)sVar41 - (0xff < sVar41));
    auVar23._2_10_ = Var24;
    auVar23[1] = (0 < sVar5) * (sVar5 < 0x100) * auVar78[4] - (0xff < sVar5);
    auVar23[0] = (0 < sVar40) * (sVar40 < 0x100) * (char)sVar40 - (0xff < sVar40);
    auVar22._2_12_ = auVar23;
    auVar22[1] = (0 < sVar4) * (sVar4 < 0x100) * auVar78[2] - (0xff < sVar4);
    auVar22[0] = (0 < sVar39) * (sVar39 < 0x100) * (char)sVar39 - (0xff < sVar39);
    auVar87._0_2_ =
         CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar78[0] - (0xff < sVar3),
                  (0 < sVar38) * (sVar38 < 0x100) * (char)sVar38 - (0xff < sVar38));
    auVar87._2_14_ = auVar22;
    uVar69 = CONCAT11((uVar84 != 0) * (uVar84 < 0x100) * (char)uVar84 - (0xff < uVar84),
                      (0 < sVar11) * (sVar11 < 0x100) * auVar75[0] - (0xff < sVar11));
    uVar70 = CONCAT13((uVar88 != 0) * (uVar88 < 0x100) * (char)uVar88 - (0xff < uVar88),
                      CONCAT12((0 < sVar12) * (sVar12 < 0x100) * auVar75[2] - (0xff < sVar12),uVar69
                              ));
    uVar71 = CONCAT15((uVar89 != 0) * (uVar89 < 0x100) * (char)uVar89 - (0xff < uVar89),
                      CONCAT14((0 < sVar13) * (sVar13 < 0x100) * auVar75[4] - (0xff < sVar13),uVar70
                              ));
    uVar72 = CONCAT17((uVar90 != 0) * (uVar90 < 0x100) * (char)uVar90 - (0xff < uVar90),
                      CONCAT16((0 < sVar14) * (sVar14 < 0x100) * auVar75[6] - (0xff < sVar14),uVar71
                              ));
    auVar73._0_10_ =
         CONCAT19((uVar91 != 0) * (uVar91 < 0x100) * (char)uVar91 - (0xff < uVar91),
                  CONCAT18((0 < sVar15) * (sVar15 < 0x100) * auVar75[8] - (0xff < sVar15),uVar72));
    auVar73[10] = (0 < sVar16) * (sVar16 < 0x100) * auVar75[10] - (0xff < sVar16);
    auVar73[0xb] = (uVar92 != 0) * (uVar92 < 0x100) * (char)uVar92 - (0xff < uVar92);
    auVar74[0xc] = (0 < sVar17) * (sVar17 < 0x100) * auVar75[0xc] - (0xff < sVar17);
    auVar74._0_12_ = auVar73;
    auVar74[0xd] = (uVar93 != 0) * (uVar93 < 0x100) * (char)uVar93 - (0xff < uVar93);
    auVar77[0xe] = (0 < sVar18) * (sVar18 < 0x100) * auVar75[0xe] - (0xff < sVar18);
    auVar77._0_14_ = auVar74;
    auVar77[0xf] = (uVar94 != 0) * (uVar94 < 0x100) * (char)uVar94 - (0xff < uVar94);
    auVar83._0_12_ = auVar87._0_12_;
    auVar83._12_2_ = (short)Var24;
    auVar83._14_2_ = (short)((ulong)uVar72 >> 0x30);
    auVar82._12_4_ = auVar83._12_4_;
    auVar82._0_10_ = auVar87._0_10_;
    auVar82._10_2_ = (short)((uint6)uVar71 >> 0x20);
    auVar81._10_6_ = auVar82._10_6_;
    auVar81._0_8_ = auVar87._0_8_;
    auVar81._8_2_ = auVar23._0_2_;
    auVar80._8_8_ = auVar81._8_8_;
    auVar80._6_2_ = (short)((uint)uVar70 >> 0x10);
    auVar80._4_2_ = auVar22._0_2_;
    auVar80._2_2_ = uVar69;
    auVar80._0_2_ = auVar87._0_2_;
    puVar1 = (undefined2 *)(param_4 + 0x10 + lVar68 * 4);
    *puVar1 = (short)((unkuint9)Var25 >> 8);
    puVar1[1] = (short)((unkuint10)auVar73._0_10_ >> 0x40);
    puVar1[2] = (short)uVar35;
    puVar1[3] = auVar73._10_2_;
    puVar1[4] = (short)uVar36;
    puVar1[5] = auVar74._12_2_;
    puVar1[6] = uVar37;
    puVar1[7] = auVar77._14_2_;
    *(undefined1 (*) [16])(param_4 + lVar68 * 4) = auVar80;
    lVar68 = lVar68 + 8;
  } while (lVar68 != 0x20);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8YuvToRgba444432_SSE2(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  char cVar2;
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
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  short sVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  undefined1 auVar60 [16];
  long lVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  ushort uVar69;
  ushort uVar72;
  ushort uVar73;
  ushort uVar74;
  ushort uVar75;
  ushort uVar76;
  ushort uVar77;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  ushort uVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  
  auVar60 = __LC19;
  sVar59 = _UNK_00102c2e;
  sVar58 = _UNK_00102c2c;
  sVar57 = _UNK_00102c2a;
  sVar56 = _UNK_00102c28;
  sVar55 = _UNK_00102c26;
  sVar54 = _UNK_00102c24;
  sVar53 = _UNK_00102c22;
  sVar52 = __LC8;
  sVar51 = _UNK_00102c1e;
  sVar50 = _UNK_00102c1c;
  sVar49 = _UNK_00102c1a;
  sVar48 = _UNK_00102c18;
  sVar47 = _UNK_00102c16;
  sVar46 = _UNK_00102c14;
  sVar45 = _UNK_00102c12;
  sVar44 = __LC7;
  auVar43 = __LC6;
  auVar42 = __LC5;
  auVar41 = __LC4;
  auVar40 = __LC3;
  auVar39 = __LC2;
  auVar38 = __LC1;
  sVar37 = _UNK_00102bae;
  sVar36 = _UNK_00102bac;
  sVar35 = _UNK_00102baa;
  sVar34 = _UNK_00102ba8;
  sVar33 = _UNK_00102ba6;
  sVar32 = _UNK_00102ba4;
  sVar31 = _UNK_00102ba2;
  sVar30 = __LC9;
  lVar61 = 0;
  do {
    uVar1 = *(undefined8 *)(param_1 + lVar61);
    auVar21[10] = 0;
    auVar21._0_10_ = SUB1610((undefined1  [16])0x0,0);
    auVar21[0xb] = (char)((ulong)uVar1 >> 0x28);
    auVar24[9] = (char)((ulong)uVar1 >> 0x20);
    auVar24._0_9_ = SUB169((undefined1  [16])0x0,0);
    auVar24._10_2_ = auVar21._10_2_;
    auVar27._9_3_ = auVar24._9_3_;
    auVar27._0_9_ = (unkuint9)0;
    auVar70._1_10_ =
         SUB1610(ZEXT516(CONCAT41(auVar27._8_4_,(char)((ulong)uVar1 >> 0x18))) << 0x38,6);
    auVar70[0] = (char)((ulong)uVar1 >> 0x10);
    auVar70._11_5_ = 0;
    auVar66._1_12_ = SUB1612(auVar70 << 0x28,4);
    auVar66[0] = (char)((ulong)uVar1 >> 8);
    auVar66._13_3_ = 0;
    auVar62._1_14_ = SUB1614(auVar66 << 0x18,2);
    auVar62[0] = (char)uVar1;
    auVar62[0xf] = 0;
    uVar1 = *(undefined8 *)(param_2 + lVar61);
    auVar66 = pmulhuw(auVar62 << 8,auVar38);
    auVar22[10] = 0;
    auVar22._0_10_ = SUB1610((undefined1  [16])0x0,0);
    auVar22[0xb] = (char)((ulong)uVar1 >> 0x28);
    auVar25[9] = (char)((ulong)uVar1 >> 0x20);
    auVar25._0_9_ = SUB169((undefined1  [16])0x0,0);
    auVar25._10_2_ = auVar22._10_2_;
    auVar28._9_3_ = auVar25._9_3_;
    auVar28._0_9_ = (unkuint9)0;
    auVar80._1_10_ =
         SUB1610(ZEXT516(CONCAT41(auVar28._8_4_,(char)((ulong)uVar1 >> 0x18))) << 0x38,6);
    auVar80[0] = (char)((ulong)uVar1 >> 0x10);
    auVar80._11_5_ = 0;
    auVar79._1_12_ = SUB1612(auVar80 << 0x28,4);
    auVar79[0] = (char)((ulong)uVar1 >> 8);
    auVar79._13_3_ = 0;
    auVar71._1_14_ = SUB1614(auVar79 << 0x18,2);
    auVar71[0] = (char)uVar1;
    auVar71[0xf] = 0;
    uVar1 = *(undefined8 *)(param_3 + lVar61);
    auVar70 = pmulhuw(auVar71 << 8,auVar42);
    auVar23[10] = 0;
    auVar23._0_10_ = SUB1610((undefined1  [16])0x0,0);
    auVar23[0xb] = (char)((ulong)uVar1 >> 0x28);
    auVar26[9] = (char)((ulong)uVar1 >> 0x20);
    auVar26._0_9_ = SUB169((undefined1  [16])0x0,0);
    auVar26._10_2_ = auVar23._10_2_;
    auVar29._9_3_ = auVar26._9_3_;
    auVar29._0_9_ = (unkuint9)0;
    auVar20._1_10_ =
         SUB1610(ZEXT516(CONCAT41(auVar29._8_4_,(char)((ulong)uVar1 >> 0x18))) << 0x38,6);
    auVar20[0] = (char)((ulong)uVar1 >> 0x10);
    auVar20._11_5_ = 0;
    auVar19._1_12_ = SUB1612(auVar20 << 0x28,4);
    auVar19[0] = (char)((ulong)uVar1 >> 8);
    auVar19._13_3_ = 0;
    auVar18._1_14_ = SUB1614(auVar19 << 0x18,2);
    auVar18[0] = (char)uVar1;
    auVar18[0xf] = 0;
    auVar80 = pmulhuw(auVar71 << 8,auVar40);
    auVar79 = pmulhuw(auVar18 << 8,auVar41);
    auVar62 = pmulhuw(auVar18 << 8,auVar39);
    auVar71 = paddusw(auVar70,auVar66);
    auVar71 = psubusw(auVar71,auVar43);
    uVar69 = auVar71._0_2_ >> 6;
    uVar72 = auVar71._2_2_ >> 6;
    uVar73 = auVar71._4_2_ >> 6;
    uVar74 = auVar71._6_2_ >> 6;
    uVar75 = auVar71._8_2_ >> 6;
    uVar76 = auVar71._10_2_ >> 6;
    uVar77 = auVar71._12_2_ >> 6;
    uVar78 = auVar71._14_2_ >> 6;
    auVar63._0_2_ = auVar62._0_2_ + auVar66._0_2_ + sVar44;
    auVar63._2_2_ = auVar62._2_2_ + auVar66._2_2_ + sVar45;
    auVar63._4_2_ = auVar62._4_2_ + auVar66._4_2_ + sVar46;
    auVar63._6_2_ = auVar62._6_2_ + auVar66._6_2_ + sVar47;
    auVar63._8_2_ = auVar62._8_2_ + auVar66._8_2_ + sVar48;
    auVar63._10_2_ = auVar62._10_2_ + auVar66._10_2_ + sVar49;
    auVar63._12_2_ = auVar62._12_2_ + auVar66._12_2_ + sVar50;
    auVar63._14_2_ = auVar62._14_2_ + auVar66._14_2_ + sVar51;
    auVar67._0_2_ = (auVar66._0_2_ + sVar52) - (auVar80._0_2_ + auVar79._0_2_);
    auVar67._2_2_ = (auVar66._2_2_ + sVar53) - (auVar80._2_2_ + auVar79._2_2_);
    auVar67._4_2_ = (auVar66._4_2_ + sVar54) - (auVar80._4_2_ + auVar79._4_2_);
    auVar67._6_2_ = (auVar66._6_2_ + sVar55) - (auVar80._6_2_ + auVar79._6_2_);
    auVar67._8_2_ = (auVar66._8_2_ + sVar56) - (auVar80._8_2_ + auVar79._8_2_);
    auVar67._10_2_ = (auVar66._10_2_ + sVar57) - (auVar80._10_2_ + auVar79._10_2_);
    auVar67._12_2_ = (auVar66._12_2_ + sVar58) - (auVar80._12_2_ + auVar79._12_2_);
    auVar67._14_2_ = (auVar66._14_2_ + sVar59) - (auVar80._14_2_ + auVar79._14_2_);
    auVar71 = psraw(auVar67,6);
    auVar62 = psraw(auVar63,6);
    sVar3 = auVar62._0_2_;
    sVar4 = auVar62._2_2_;
    sVar5 = auVar62._4_2_;
    sVar6 = auVar62._6_2_;
    sVar7 = auVar62._8_2_;
    sVar8 = auVar62._10_2_;
    sVar9 = auVar62._12_2_;
    sVar10 = auVar62._14_2_;
    cVar2 = (0 < sVar10) * (sVar10 < 0x100) * auVar62[0xe] - (0xff < sVar10);
    sVar10 = auVar71._0_2_;
    sVar11 = auVar71._2_2_;
    sVar12 = auVar71._4_2_;
    sVar13 = auVar71._6_2_;
    sVar14 = auVar71._8_2_;
    sVar15 = auVar71._10_2_;
    sVar16 = auVar71._12_2_;
    sVar17 = auVar71._14_2_;
    auVar64[1] = (0 < sVar30) * (sVar30 < 0x100) * (char)sVar30 - (0xff < sVar30);
    auVar64[0] = (0 < sVar10) * (sVar10 < 0x100) * auVar71[0] - (0xff < sVar10);
    auVar64[2] = (0 < sVar11) * (sVar11 < 0x100) * auVar71[2] - (0xff < sVar11);
    auVar64[3] = (0 < sVar31) * (sVar31 < 0x100) * (char)sVar31 - (0xff < sVar31);
    auVar64[4] = (0 < sVar12) * (sVar12 < 0x100) * auVar71[4] - (0xff < sVar12);
    auVar64[5] = (0 < sVar32) * (sVar32 < 0x100) * (char)sVar32 - (0xff < sVar32);
    auVar64[6] = (0 < sVar13) * (sVar13 < 0x100) * auVar71[6] - (0xff < sVar13);
    auVar64[7] = (0 < sVar33) * (sVar33 < 0x100) * (char)sVar33 - (0xff < sVar33);
    auVar64[8] = (0 < sVar14) * (sVar14 < 0x100) * auVar71[8] - (0xff < sVar14);
    auVar64[9] = (0 < sVar34) * (sVar34 < 0x100) * (char)sVar34 - (0xff < sVar34);
    auVar64[10] = (0 < sVar15) * (sVar15 < 0x100) * auVar71[10] - (0xff < sVar15);
    auVar64[0xb] = (0 < sVar35) * (sVar35 < 0x100) * (char)sVar35 - (0xff < sVar35);
    auVar64[0xc] = (0 < sVar16) * (sVar16 < 0x100) * auVar71[0xc] - (0xff < sVar16);
    auVar64[0xd] = (0 < sVar36) * (sVar36 < 0x100) * (char)sVar36 - (0xff < sVar36);
    auVar64[0xe] = (0 < sVar17) * (sVar17 < 0x100) * auVar71[0xe] - (0xff < sVar17);
    auVar64[0xf] = (0 < sVar37) * (sVar37 < 0x100) * (char)sVar37 - (0xff < sVar37);
    auVar68._8_8_ =
         (undefined8)
         (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((uVar78 != 0) *
                                                                         (uVar78 < 0x100) *
                                                                         (char)uVar78 -
                                                                         (0xff < uVar78),cVar2),
                                                                (uVar77 != 0) * (uVar77 < 0x100) *
                                                                (char)uVar77 - (0xff < uVar77)),
                                                       (0 < sVar9) * (sVar9 < 0x100) * auVar62[0xc]
                                                       - (0xff < sVar9)),
                                              (uVar76 != 0) * (uVar76 < 0x100) * (char)uVar76 -
                                              (0xff < uVar76)),
                                     (0 < sVar8) * (sVar8 < 0x100) * auVar62[10] - (0xff < sVar8)),
                            (uVar75 != 0) * (uVar75 < 0x100) * (char)uVar75 - (0xff < uVar75)),
                   CONCAT11((0 < sVar7) * (sVar7 < 0x100) * auVar62[8] - (0xff < sVar7),cVar2)) >> 8
         );
    auVar68[7] = (uVar74 != 0) * (uVar74 < 0x100) * (char)uVar74 - (0xff < uVar74);
    auVar68[6] = (0 < sVar6) * (sVar6 < 0x100) * auVar62[6] - (0xff < sVar6);
    auVar68[5] = (uVar73 != 0) * (uVar73 < 0x100) * (char)uVar73 - (0xff < uVar73);
    auVar68[4] = (0 < sVar5) * (sVar5 < 0x100) * auVar62[4] - (0xff < sVar5);
    auVar68[3] = (uVar72 != 0) * (uVar72 < 0x100) * (char)uVar72 - (0xff < uVar72);
    auVar68[2] = (0 < sVar4) * (sVar4 < 0x100) * auVar62[2] - (0xff < sVar4);
    auVar68[1] = (uVar69 != 0) * (uVar69 < 0x100) * (char)uVar69 - (0xff < uVar69);
    auVar68[0] = (0 < sVar3) * (sVar3 < 0x100) * auVar62[0] - (0xff < sVar3);
    auVar64 = auVar64 & auVar60;
    auVar65._0_2_ = auVar64._0_2_ >> 4;
    auVar65._2_2_ = auVar64._2_2_ >> 4;
    auVar65._4_2_ = auVar64._4_2_ >> 4;
    auVar65._6_2_ = auVar64._6_2_ >> 4;
    auVar65._8_2_ = auVar64._8_2_ >> 4;
    auVar65._10_2_ = auVar64._10_2_ >> 4;
    auVar65._12_2_ = auVar64._12_2_ >> 4;
    auVar65._14_2_ = auVar64._14_2_ >> 4;
    *(undefined1 (*) [16])(param_4 + lVar61 * 2) = auVar68 & auVar60 | auVar65;
    lVar61 = lVar61 + 8;
  } while (lVar61 != 0x20);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8YuvToRgb56532_SSE2(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
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
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  long lVar47;
  ushort uVar48;
  ushort uVar49;
  ushort uVar58;
  ushort uVar59;
  ushort uVar60;
  ushort uVar61;
  ushort uVar62;
  ushort uVar63;
  undefined1 auVar55 [16];
  ushort uVar64;
  undefined1 auVar57 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined4 uVar50;
  undefined6 uVar51;
  undefined8 uVar52;
  undefined1 auVar53 [12];
  undefined1 auVar54 [14];
  undefined1 auVar56 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  
  auVar46 = __LC21;
  auVar45 = __LC20;
  sVar44 = _UNK_00102c2e;
  sVar43 = _UNK_00102c2c;
  sVar42 = _UNK_00102c2a;
  sVar41 = _UNK_00102c28;
  sVar40 = _UNK_00102c26;
  sVar39 = _UNK_00102c24;
  sVar38 = _UNK_00102c22;
  sVar37 = __LC8;
  sVar36 = _UNK_00102c1e;
  sVar35 = _UNK_00102c1c;
  sVar34 = _UNK_00102c1a;
  sVar33 = _UNK_00102c18;
  sVar32 = _UNK_00102c16;
  sVar31 = _UNK_00102c14;
  sVar30 = _UNK_00102c12;
  sVar29 = __LC7;
  auVar28 = __LC6;
  auVar27 = __LC5;
  auVar26 = __LC4;
  auVar25 = __LC3;
  auVar24 = __LC2;
  auVar23 = __LC1;
  lVar47 = 0;
  do {
    uVar52 = *(undefined8 *)(param_1 + lVar47);
    uVar1 = *(undefined8 *)(param_2 + lVar47);
    auVar14[10] = 0;
    auVar14._0_10_ = SUB1610((undefined1  [16])0x0,0);
    auVar14[0xb] = (char)((ulong)uVar52 >> 0x28);
    auVar17[9] = (char)((ulong)uVar52 >> 0x20);
    auVar17._0_9_ = SUB169((undefined1  [16])0x0,0);
    auVar17._10_2_ = auVar14._10_2_;
    auVar20._9_3_ = auVar17._9_3_;
    auVar20._0_9_ = (unkuint9)0;
    auVar80._1_10_ =
         SUB1610(ZEXT516(CONCAT41(auVar20._8_4_,(char)((ulong)uVar52 >> 0x18))) << 0x38,6);
    auVar80[0] = (char)((ulong)uVar52 >> 0x10);
    auVar80._11_5_ = 0;
    auVar65._1_12_ = SUB1612(auVar80 << 0x28,4);
    auVar65[0] = (char)((ulong)uVar52 >> 8);
    auVar65._13_3_ = 0;
    auVar55._1_14_ = SUB1614(auVar65 << 0x18,2);
    auVar55[0] = (char)uVar52;
    auVar55[0xf] = 0;
    auVar15[10] = 0;
    auVar15._0_10_ = SUB1610((undefined1  [16])0x0,0);
    auVar15[0xb] = (char)((ulong)uVar1 >> 0x28);
    auVar18[9] = (char)((ulong)uVar1 >> 0x20);
    auVar18._0_9_ = SUB169((undefined1  [16])0x0,0);
    auVar18._10_2_ = auVar15._10_2_;
    auVar21._9_3_ = auVar18._9_3_;
    auVar21._0_9_ = (unkuint9)0;
    auVar11._1_10_ =
         SUB1610(ZEXT516(CONCAT41(auVar21._8_4_,(char)((ulong)uVar1 >> 0x18))) << 0x38,6);
    auVar11[0] = (char)((ulong)uVar1 >> 0x10);
    auVar11._11_5_ = 0;
    auVar81._1_12_ = SUB1612(auVar11 << 0x28,4);
    auVar81[0] = (char)((ulong)uVar1 >> 8);
    auVar81._13_3_ = 0;
    auVar76._1_14_ = SUB1614(auVar81 << 0x18,2);
    auVar76[0] = (char)uVar1;
    auVar76[0xf] = 0;
    uVar52 = *(undefined8 *)(param_3 + lVar47);
    auVar65 = pmulhuw(auVar55 << 8,auVar23);
    auVar55 = pmulhuw(auVar76 << 8,auVar27);
    auVar16[10] = 0;
    auVar16._0_10_ = SUB1610((undefined1  [16])0x0,0);
    auVar16[0xb] = (char)((ulong)uVar52 >> 0x28);
    auVar19[9] = (char)((ulong)uVar52 >> 0x20);
    auVar19._0_9_ = SUB169((undefined1  [16])0x0,0);
    auVar19._10_2_ = auVar16._10_2_;
    auVar22._9_3_ = auVar19._9_3_;
    auVar22._0_9_ = (unkuint9)0;
    auVar13._1_10_ =
         SUB1610(ZEXT516(CONCAT41(auVar22._8_4_,(char)((ulong)uVar52 >> 0x18))) << 0x38,6);
    auVar13[0] = (char)((ulong)uVar52 >> 0x10);
    auVar13._11_5_ = 0;
    auVar12._1_12_ = SUB1612(auVar13 << 0x28,4);
    auVar12[0] = (char)((ulong)uVar52 >> 8);
    auVar12._13_3_ = 0;
    auVar10._1_14_ = SUB1614(auVar12 << 0x18,2);
    auVar10[0] = (char)uVar52;
    auVar10[0xf] = 0;
    auVar81 = pmulhuw(auVar76 << 8,auVar25);
    auVar80 = pmulhuw(auVar10 << 8,auVar26);
    auVar76 = pmulhuw(auVar10 << 8,auVar24);
    auVar55 = paddusw(auVar55,auVar65);
    auVar55 = psubusw(auVar55,auVar28);
    uVar48 = auVar55._0_2_ >> 6;
    uVar58 = auVar55._2_2_ >> 6;
    uVar59 = auVar55._4_2_ >> 6;
    uVar60 = auVar55._6_2_ >> 6;
    uVar61 = auVar55._8_2_ >> 6;
    uVar62 = auVar55._10_2_ >> 6;
    uVar63 = auVar55._12_2_ >> 6;
    uVar64 = auVar55._14_2_ >> 6;
    uVar49 = CONCAT11((uVar58 != 0) * (uVar58 < 0x100) * (char)uVar58 - (0xff < uVar58),
                      (uVar48 != 0) * (uVar48 < 0x100) * (char)uVar48 - (0xff < uVar48));
    uVar50 = CONCAT13((uVar60 != 0) * (uVar60 < 0x100) * (char)uVar60 - (0xff < uVar60),
                      CONCAT12((uVar59 != 0) * (uVar59 < 0x100) * (char)uVar59 - (0xff < uVar59),
                               uVar49));
    uVar51 = CONCAT15((uVar62 != 0) * (uVar62 < 0x100) * (char)uVar62 - (0xff < uVar62),
                      CONCAT14((uVar61 != 0) * (uVar61 < 0x100) * (char)uVar61 - (0xff < uVar61),
                               uVar50));
    uVar52 = CONCAT17((uVar64 != 0) * (uVar64 < 0x100) * (char)uVar64 - (0xff < uVar64),
                      CONCAT16((uVar63 != 0) * (uVar63 < 0x100) * (char)uVar63 - (0xff < uVar63),
                               uVar51));
    auVar53._0_10_ =
         CONCAT19((uVar58 != 0) * (uVar58 < 0x100) * (char)uVar58 - (0xff < uVar58),
                  CONCAT18((uVar48 != 0) * (uVar48 < 0x100) * (char)uVar48 - (0xff < uVar48),uVar52)
                 );
    auVar53[10] = (uVar59 != 0) * (uVar59 < 0x100) * (char)uVar59 - (0xff < uVar59);
    auVar53[0xb] = (uVar60 != 0) * (uVar60 < 0x100) * (char)uVar60 - (0xff < uVar60);
    auVar54[0xc] = (uVar61 != 0) * (uVar61 < 0x100) * (char)uVar61 - (0xff < uVar61);
    auVar54._0_12_ = auVar53;
    auVar54[0xd] = (uVar62 != 0) * (uVar62 < 0x100) * (char)uVar62 - (0xff < uVar62);
    auVar56[0xe] = (uVar63 != 0) * (uVar63 < 0x100) * (char)uVar63 - (0xff < uVar63);
    auVar56._0_14_ = auVar54;
    auVar56[0xf] = (uVar64 != 0) * (uVar64 < 0x100) * (char)uVar64 - (0xff < uVar64);
    auVar66._0_2_ = (auVar65._0_2_ + sVar37) - (auVar81._0_2_ + auVar80._0_2_);
    auVar66._2_2_ = (auVar65._2_2_ + sVar38) - (auVar81._2_2_ + auVar80._2_2_);
    auVar66._4_2_ = (auVar65._4_2_ + sVar39) - (auVar81._4_2_ + auVar80._4_2_);
    auVar66._6_2_ = (auVar65._6_2_ + sVar40) - (auVar81._6_2_ + auVar80._6_2_);
    auVar66._8_2_ = (auVar65._8_2_ + sVar41) - (auVar81._8_2_ + auVar80._8_2_);
    auVar66._10_2_ = (auVar65._10_2_ + sVar42) - (auVar81._10_2_ + auVar80._10_2_);
    auVar66._12_2_ = (auVar65._12_2_ + sVar43) - (auVar81._12_2_ + auVar80._12_2_);
    auVar66._14_2_ = (auVar65._14_2_ + sVar44) - (auVar81._14_2_ + auVar80._14_2_);
    auVar77._0_2_ = auVar76._0_2_ + auVar65._0_2_ + sVar29;
    auVar77._2_2_ = auVar76._2_2_ + auVar65._2_2_ + sVar30;
    auVar77._4_2_ = auVar76._4_2_ + auVar65._4_2_ + sVar31;
    auVar77._6_2_ = auVar76._6_2_ + auVar65._6_2_ + sVar32;
    auVar77._8_2_ = auVar76._8_2_ + auVar65._8_2_ + sVar33;
    auVar77._10_2_ = auVar76._10_2_ + auVar65._10_2_ + sVar34;
    auVar77._12_2_ = auVar76._12_2_ + auVar65._12_2_ + sVar35;
    auVar77._14_2_ = auVar76._14_2_ + auVar65._14_2_ + sVar36;
    auVar57._0_2_ = uVar49 >> 3;
    auVar57._2_2_ = (ushort)((uint)uVar50 >> 0x13);
    auVar57._4_2_ = (ushort)((uint6)uVar51 >> 0x23);
    auVar57._6_2_ = (ushort)((ulong)uVar52 >> 0x33);
    auVar57._8_2_ = (ushort)((unkuint10)auVar53._0_10_ >> 0x43);
    auVar57._10_2_ = auVar53._10_2_ >> 3;
    auVar57._12_2_ = auVar54._12_2_ >> 3;
    auVar57._14_2_ = auVar56._14_2_ >> 3;
    auVar55 = psraw(auVar66,6);
    auVar76 = psraw(auVar77,6);
    sVar2 = auVar55._0_2_;
    sVar3 = auVar55._2_2_;
    auVar67[1] = (0 < sVar3) * (sVar3 < 0x100) * auVar55[2] - (0xff < sVar3);
    auVar67[0] = (0 < sVar2) * (sVar2 < 0x100) * auVar55[0] - (0xff < sVar2);
    sVar4 = auVar55._4_2_;
    auVar67[2] = (0 < sVar4) * (sVar4 < 0x100) * auVar55[4] - (0xff < sVar4);
    sVar5 = auVar55._6_2_;
    auVar67[3] = (0 < sVar5) * (sVar5 < 0x100) * auVar55[6] - (0xff < sVar5);
    sVar6 = auVar55._8_2_;
    auVar67[4] = (0 < sVar6) * (sVar6 < 0x100) * auVar55[8] - (0xff < sVar6);
    sVar7 = auVar55._10_2_;
    auVar67[5] = (0 < sVar7) * (sVar7 < 0x100) * auVar55[10] - (0xff < sVar7);
    sVar8 = auVar55._12_2_;
    auVar67[6] = (0 < sVar8) * (sVar8 < 0x100) * auVar55[0xc] - (0xff < sVar8);
    sVar9 = auVar55._14_2_;
    auVar67[7] = (0 < sVar9) * (sVar9 < 0x100) * auVar55[0xe] - (0xff < sVar9);
    auVar67[8] = (0 < sVar2) * (sVar2 < 0x100) * auVar55[0] - (0xff < sVar2);
    auVar67[9] = (0 < sVar3) * (sVar3 < 0x100) * auVar55[2] - (0xff < sVar3);
    auVar67[10] = (0 < sVar4) * (sVar4 < 0x100) * auVar55[4] - (0xff < sVar4);
    auVar67[0xb] = (0 < sVar5) * (sVar5 < 0x100) * auVar55[6] - (0xff < sVar5);
    auVar67[0xc] = (0 < sVar6) * (sVar6 < 0x100) * auVar55[8] - (0xff < sVar6);
    auVar67[0xd] = (0 < sVar7) * (sVar7 < 0x100) * auVar55[10] - (0xff < sVar7);
    auVar67[0xe] = (0 < sVar8) * (sVar8 < 0x100) * auVar55[0xc] - (0xff < sVar8);
    auVar67[0xf] = (0 < sVar9) * (sVar9 < 0x100) * auVar55[0xe] - (0xff < sVar9);
    sVar2 = auVar76._0_2_;
    sVar3 = auVar76._2_2_;
    auVar78[1] = (0 < sVar3) * (sVar3 < 0x100) * auVar76[2] - (0xff < sVar3);
    auVar78[0] = (0 < sVar2) * (sVar2 < 0x100) * auVar76[0] - (0xff < sVar2);
    sVar4 = auVar76._4_2_;
    auVar78[2] = (0 < sVar4) * (sVar4 < 0x100) * auVar76[4] - (0xff < sVar4);
    sVar5 = auVar76._6_2_;
    auVar78[3] = (0 < sVar5) * (sVar5 < 0x100) * auVar76[6] - (0xff < sVar5);
    sVar6 = auVar76._8_2_;
    auVar78[4] = (0 < sVar6) * (sVar6 < 0x100) * auVar76[8] - (0xff < sVar6);
    sVar7 = auVar76._10_2_;
    auVar78[5] = (0 < sVar7) * (sVar7 < 0x100) * auVar76[10] - (0xff < sVar7);
    sVar8 = auVar76._12_2_;
    auVar78[6] = (0 < sVar8) * (sVar8 < 0x100) * auVar76[0xc] - (0xff < sVar8);
    sVar9 = auVar76._14_2_;
    auVar78[7] = (0 < sVar9) * (sVar9 < 0x100) * auVar76[0xe] - (0xff < sVar9);
    auVar78[8] = (0 < sVar2) * (sVar2 < 0x100) * auVar76[0] - (0xff < sVar2);
    auVar78[9] = (0 < sVar3) * (sVar3 < 0x100) * auVar76[2] - (0xff < sVar3);
    auVar78[10] = (0 < sVar4) * (sVar4 < 0x100) * auVar76[4] - (0xff < sVar4);
    auVar78[0xb] = (0 < sVar5) * (sVar5 < 0x100) * auVar76[6] - (0xff < sVar5);
    auVar78[0xc] = (0 < sVar6) * (sVar6 < 0x100) * auVar76[8] - (0xff < sVar6);
    auVar78[0xd] = (0 < sVar7) * (sVar7 < 0x100) * auVar76[10] - (0xff < sVar7);
    auVar78[0xe] = (0 < sVar8) * (sVar8 < 0x100) * auVar76[0xc] - (0xff < sVar8);
    auVar78[0xf] = (0 < sVar9) * (sVar9 < 0x100) * auVar76[0xe] - (0xff < sVar9);
    auVar55 = auVar45 & auVar67;
    auVar79._0_2_ = auVar55._0_2_ >> 5;
    auVar79._2_2_ = auVar55._2_2_ >> 5;
    auVar79._4_2_ = auVar55._4_2_ >> 5;
    auVar79._6_2_ = auVar55._6_2_ >> 5;
    auVar79._8_2_ = auVar55._8_2_ >> 5;
    auVar79._10_2_ = auVar55._10_2_ >> 5;
    auVar79._12_2_ = auVar55._12_2_ >> 5;
    auVar79._14_2_ = auVar55._14_2_ >> 5;
    auVar55 = psllw(auVar67 & auVar46,3);
    auVar79 = auVar78 & __LC22 | auVar79;
    auVar55 = auVar57 & __LC23 | auVar55;
    auVar75._0_14_ = auVar79._0_14_;
    auVar75[0xe] = auVar79[7];
    auVar75[0xf] = auVar55[7];
    auVar74._14_2_ = auVar75._14_2_;
    auVar74._0_13_ = auVar79._0_13_;
    auVar74[0xd] = auVar55[6];
    auVar73._13_3_ = auVar74._13_3_;
    auVar73._0_12_ = auVar79._0_12_;
    auVar73[0xc] = auVar79[6];
    auVar72._12_4_ = auVar73._12_4_;
    auVar72._0_11_ = auVar79._0_11_;
    auVar72[0xb] = auVar55[5];
    auVar71._11_5_ = auVar72._11_5_;
    auVar71._0_10_ = auVar79._0_10_;
    auVar71[10] = auVar79[5];
    auVar70._10_6_ = auVar71._10_6_;
    auVar70._0_9_ = auVar79._0_9_;
    auVar70[9] = auVar55[4];
    auVar69._9_7_ = auVar70._9_7_;
    auVar69._0_8_ = auVar79._0_8_;
    auVar69[8] = auVar79[4];
    auVar68._8_8_ = auVar69._8_8_;
    auVar68[7] = auVar55[3];
    auVar68[6] = auVar79[3];
    auVar68[5] = auVar55[2];
    auVar68[4] = auVar79[2];
    auVar68[3] = auVar55[1];
    auVar68[2] = auVar79[1];
    auVar68[0] = auVar79[0];
    auVar68[1] = auVar55[0];
    *(undefined1 (*) [16])(param_4 + lVar47 * 2) = auVar68;
    lVar47 = lVar47 + 8;
  } while (lVar47 != 0x20);
  return;
}



void VP8YuvToRgb32_SSE2(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  short local_138;
  short sStack_136;
  short sStack_134;
  short sStack_132;
  short sStack_130;
  short sStack_12e;
  short sStack_12c;
  short sStack_12a;
  short local_128;
  short sStack_126;
  short sStack_124;
  short sStack_122;
  short sStack_120;
  short sStack_11e;
  short sStack_11c;
  short sStack_11a;
  short local_118;
  short sStack_116;
  short sStack_114;
  short sStack_112;
  short sStack_110;
  short sStack_10e;
  short sStack_10c;
  short sStack_10a;
  short local_108;
  short sStack_106;
  short sStack_104;
  short sStack_102;
  short sStack_100;
  short sStack_fe;
  short sStack_fc;
  short sStack_fa;
  short local_f8;
  short sStack_f6;
  short sStack_f4;
  short sStack_f2;
  short sStack_f0;
  short sStack_ee;
  short sStack_ec;
  short sStack_ea;
  short local_e8;
  short sStack_e6;
  short sStack_e4;
  short sStack_e2;
  short sStack_e0;
  short sStack_de;
  short sStack_dc;
  short sStack_da;
  short local_d8;
  short sStack_d6;
  short sStack_d4;
  short sStack_d2;
  short sStack_d0;
  short sStack_ce;
  short sStack_cc;
  short sStack_ca;
  short local_c8;
  short sStack_c6;
  short sStack_c4;
  short sStack_c2;
  short sStack_c0;
  short sStack_be;
  short sStack_bc;
  short sStack_ba;
  short local_b8;
  short sStack_b6;
  short sStack_b4;
  short sStack_b2;
  short sStack_b0;
  short sStack_ae;
  short sStack_ac;
  short sStack_aa;
  short local_a8;
  short sStack_a6;
  short sStack_a4;
  short sStack_a2;
  short sStack_a0;
  short sStack_9e;
  short sStack_9c;
  short sStack_9a;
  short local_98;
  short sStack_96;
  short sStack_94;
  short sStack_92;
  short sStack_90;
  short sStack_8e;
  short sStack_8c;
  short sStack_8a;
  short local_88;
  short sStack_86;
  short sStack_84;
  short sStack_82;
  short sStack_80;
  short sStack_7e;
  short sStack_7c;
  short sStack_7a;
  char local_78;
  char cStack_77;
  char cStack_76;
  char cStack_75;
  char cStack_74;
  char cStack_73;
  char cStack_72;
  char cStack_71;
  char cStack_70;
  char cStack_6f;
  char cStack_6e;
  char cStack_6d;
  char cStack_6c;
  char cStack_6b;
  char cStack_6a;
  char cStack_69;
  char local_68;
  char cStack_67;
  char cStack_66;
  char cStack_65;
  char cStack_64;
  char cStack_63;
  char cStack_62;
  char cStack_61;
  char cStack_60;
  char cStack_5f;
  char cStack_5e;
  char cStack_5d;
  char cStack_5c;
  char cStack_5b;
  char cStack_5a;
  char cStack_59;
  char local_58;
  char cStack_57;
  char cStack_56;
  char cStack_55;
  char cStack_54;
  char cStack_53;
  char cStack_52;
  char cStack_51;
  char cStack_50;
  char cStack_4f;
  char cStack_4e;
  char cStack_4d;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  char local_48;
  char cStack_47;
  char cStack_46;
  char cStack_45;
  char cStack_44;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  char cStack_3d;
  char cStack_3c;
  char cStack_3b;
  char cStack_3a;
  char cStack_39;
  char local_38;
  char cStack_37;
  char cStack_36;
  char cStack_35;
  char cStack_34;
  char cStack_33;
  char cStack_32;
  char cStack_31;
  char cStack_30;
  char cStack_2f;
  char cStack_2e;
  char cStack_2d;
  char cStack_2c;
  char cStack_2b;
  char cStack_2a;
  char cStack_29;
  char local_28;
  char cStack_27;
  char cStack_26;
  char cStack_25;
  char cStack_24;
  char cStack_23;
  char cStack_22;
  char cStack_21;
  char cStack_20;
  char cStack_1f;
  char cStack_1e;
  char cStack_1d;
  char cStack_1c;
  char cStack_1b;
  char cStack_1a;
  char cStack_19;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = param_1;
  lVar3 = param_2;
  YUV444ToRGB_SSE2(param_1,param_2,param_3,&local_138,&local_f8,&local_b8);
  YUV444ToRGB_SSE2(param_1 + 8,param_2 + 8,param_3 + 8,&local_128,&local_e8,&local_a8);
  YUV444ToRGB_SSE2(lVar2 + 0x10,lVar3 + 0x10,param_3 + 0x10,&local_118,&local_d8,&local_98);
  YUV444ToRGB_SSE2(lVar2 + 0x18,lVar3 + 0x18,param_3 + 0x18,&local_108,&local_c8,&local_88);
  local_78 = (0 < local_138) * (local_138 < 0x100) * (char)local_138 - (0xff < local_138);
  cStack_77 = (0 < sStack_136) * (sStack_136 < 0x100) * (char)sStack_136 - (0xff < sStack_136);
  cStack_76 = (0 < sStack_134) * (sStack_134 < 0x100) * (char)sStack_134 - (0xff < sStack_134);
  cStack_75 = (0 < sStack_132) * (sStack_132 < 0x100) * (char)sStack_132 - (0xff < sStack_132);
  cStack_74 = (0 < sStack_130) * (sStack_130 < 0x100) * (char)sStack_130 - (0xff < sStack_130);
  cStack_73 = (0 < sStack_12e) * (sStack_12e < 0x100) * (char)sStack_12e - (0xff < sStack_12e);
  cStack_72 = (0 < sStack_12c) * (sStack_12c < 0x100) * (char)sStack_12c - (0xff < sStack_12c);
  cStack_71 = (0 < sStack_12a) * (sStack_12a < 0x100) * (char)sStack_12a - (0xff < sStack_12a);
  cStack_70 = (0 < local_128) * (local_128 < 0x100) * (char)local_128 - (0xff < local_128);
  cStack_6f = (0 < sStack_126) * (sStack_126 < 0x100) * (char)sStack_126 - (0xff < sStack_126);
  cStack_6e = (0 < sStack_124) * (sStack_124 < 0x100) * (char)sStack_124 - (0xff < sStack_124);
  cStack_6d = (0 < sStack_122) * (sStack_122 < 0x100) * (char)sStack_122 - (0xff < sStack_122);
  cStack_6c = (0 < sStack_120) * (sStack_120 < 0x100) * (char)sStack_120 - (0xff < sStack_120);
  cStack_6b = (0 < sStack_11e) * (sStack_11e < 0x100) * (char)sStack_11e - (0xff < sStack_11e);
  cStack_6a = (0 < sStack_11c) * (sStack_11c < 0x100) * (char)sStack_11c - (0xff < sStack_11c);
  cStack_69 = (0 < sStack_11a) * (sStack_11a < 0x100) * (char)sStack_11a - (0xff < sStack_11a);
  local_68 = (0 < local_118) * (local_118 < 0x100) * (char)local_118 - (0xff < local_118);
  cStack_67 = (0 < sStack_116) * (sStack_116 < 0x100) * (char)sStack_116 - (0xff < sStack_116);
  cStack_66 = (0 < sStack_114) * (sStack_114 < 0x100) * (char)sStack_114 - (0xff < sStack_114);
  cStack_65 = (0 < sStack_112) * (sStack_112 < 0x100) * (char)sStack_112 - (0xff < sStack_112);
  cStack_64 = (0 < sStack_110) * (sStack_110 < 0x100) * (char)sStack_110 - (0xff < sStack_110);
  cStack_63 = (0 < sStack_10e) * (sStack_10e < 0x100) * (char)sStack_10e - (0xff < sStack_10e);
  cStack_62 = (0 < sStack_10c) * (sStack_10c < 0x100) * (char)sStack_10c - (0xff < sStack_10c);
  cStack_61 = (0 < sStack_10a) * (sStack_10a < 0x100) * (char)sStack_10a - (0xff < sStack_10a);
  cStack_60 = (0 < local_108) * (local_108 < 0x100) * (char)local_108 - (0xff < local_108);
  cStack_5f = (0 < sStack_106) * (sStack_106 < 0x100) * (char)sStack_106 - (0xff < sStack_106);
  cStack_5e = (0 < sStack_104) * (sStack_104 < 0x100) * (char)sStack_104 - (0xff < sStack_104);
  cStack_5d = (0 < sStack_102) * (sStack_102 < 0x100) * (char)sStack_102 - (0xff < sStack_102);
  cStack_5c = (0 < sStack_100) * (sStack_100 < 0x100) * (char)sStack_100 - (0xff < sStack_100);
  cStack_5b = (0 < sStack_fe) * (sStack_fe < 0x100) * (char)sStack_fe - (0xff < sStack_fe);
  cStack_5a = (0 < sStack_fc) * (sStack_fc < 0x100) * (char)sStack_fc - (0xff < sStack_fc);
  cStack_59 = (0 < sStack_fa) * (sStack_fa < 0x100) * (char)sStack_fa - (0xff < sStack_fa);
  local_58 = (0 < local_f8) * (local_f8 < 0x100) * (char)local_f8 - (0xff < local_f8);
  cStack_57 = (0 < sStack_f6) * (sStack_f6 < 0x100) * (char)sStack_f6 - (0xff < sStack_f6);
  cStack_56 = (0 < sStack_f4) * (sStack_f4 < 0x100) * (char)sStack_f4 - (0xff < sStack_f4);
  cStack_55 = (0 < sStack_f2) * (sStack_f2 < 0x100) * (char)sStack_f2 - (0xff < sStack_f2);
  cStack_54 = (0 < sStack_f0) * (sStack_f0 < 0x100) * (char)sStack_f0 - (0xff < sStack_f0);
  cStack_53 = (0 < sStack_ee) * (sStack_ee < 0x100) * (char)sStack_ee - (0xff < sStack_ee);
  cStack_52 = (0 < sStack_ec) * (sStack_ec < 0x100) * (char)sStack_ec - (0xff < sStack_ec);
  cStack_51 = (0 < sStack_ea) * (sStack_ea < 0x100) * (char)sStack_ea - (0xff < sStack_ea);
  cStack_50 = (0 < local_e8) * (local_e8 < 0x100) * (char)local_e8 - (0xff < local_e8);
  cStack_4f = (0 < sStack_e6) * (sStack_e6 < 0x100) * (char)sStack_e6 - (0xff < sStack_e6);
  cStack_4e = (0 < sStack_e4) * (sStack_e4 < 0x100) * (char)sStack_e4 - (0xff < sStack_e4);
  cStack_4d = (0 < sStack_e2) * (sStack_e2 < 0x100) * (char)sStack_e2 - (0xff < sStack_e2);
  cStack_4c = (0 < sStack_e0) * (sStack_e0 < 0x100) * (char)sStack_e0 - (0xff < sStack_e0);
  cStack_4b = (0 < sStack_de) * (sStack_de < 0x100) * (char)sStack_de - (0xff < sStack_de);
  cStack_4a = (0 < sStack_dc) * (sStack_dc < 0x100) * (char)sStack_dc - (0xff < sStack_dc);
  cStack_49 = (0 < sStack_da) * (sStack_da < 0x100) * (char)sStack_da - (0xff < sStack_da);
  local_48 = (0 < local_d8) * (local_d8 < 0x100) * (char)local_d8 - (0xff < local_d8);
  cStack_47 = (0 < sStack_d6) * (sStack_d6 < 0x100) * (char)sStack_d6 - (0xff < sStack_d6);
  cStack_46 = (0 < sStack_d4) * (sStack_d4 < 0x100) * (char)sStack_d4 - (0xff < sStack_d4);
  cStack_45 = (0 < sStack_d2) * (sStack_d2 < 0x100) * (char)sStack_d2 - (0xff < sStack_d2);
  cStack_44 = (0 < sStack_d0) * (sStack_d0 < 0x100) * (char)sStack_d0 - (0xff < sStack_d0);
  cStack_43 = (0 < sStack_ce) * (sStack_ce < 0x100) * (char)sStack_ce - (0xff < sStack_ce);
  cStack_42 = (0 < sStack_cc) * (sStack_cc < 0x100) * (char)sStack_cc - (0xff < sStack_cc);
  cStack_41 = (0 < sStack_ca) * (sStack_ca < 0x100) * (char)sStack_ca - (0xff < sStack_ca);
  cStack_40 = (0 < local_c8) * (local_c8 < 0x100) * (char)local_c8 - (0xff < local_c8);
  cStack_3f = (0 < sStack_c6) * (sStack_c6 < 0x100) * (char)sStack_c6 - (0xff < sStack_c6);
  cStack_3e = (0 < sStack_c4) * (sStack_c4 < 0x100) * (char)sStack_c4 - (0xff < sStack_c4);
  cStack_3d = (0 < sStack_c2) * (sStack_c2 < 0x100) * (char)sStack_c2 - (0xff < sStack_c2);
  cStack_3c = (0 < sStack_c0) * (sStack_c0 < 0x100) * (char)sStack_c0 - (0xff < sStack_c0);
  cStack_3b = (0 < sStack_be) * (sStack_be < 0x100) * (char)sStack_be - (0xff < sStack_be);
  cStack_3a = (0 < sStack_bc) * (sStack_bc < 0x100) * (char)sStack_bc - (0xff < sStack_bc);
  cStack_39 = (0 < sStack_ba) * (sStack_ba < 0x100) * (char)sStack_ba - (0xff < sStack_ba);
  local_38 = (0 < local_b8) * (local_b8 < 0x100) * (char)local_b8 - (0xff < local_b8);
  cStack_37 = (0 < sStack_b6) * (sStack_b6 < 0x100) * (char)sStack_b6 - (0xff < sStack_b6);
  cStack_36 = (0 < sStack_b4) * (sStack_b4 < 0x100) * (char)sStack_b4 - (0xff < sStack_b4);
  cStack_35 = (0 < sStack_b2) * (sStack_b2 < 0x100) * (char)sStack_b2 - (0xff < sStack_b2);
  cStack_34 = (0 < sStack_b0) * (sStack_b0 < 0x100) * (char)sStack_b0 - (0xff < sStack_b0);
  cStack_33 = (0 < sStack_ae) * (sStack_ae < 0x100) * (char)sStack_ae - (0xff < sStack_ae);
  cStack_32 = (0 < sStack_ac) * (sStack_ac < 0x100) * (char)sStack_ac - (0xff < sStack_ac);
  cStack_31 = (0 < sStack_aa) * (sStack_aa < 0x100) * (char)sStack_aa - (0xff < sStack_aa);
  cStack_30 = (0 < local_a8) * (local_a8 < 0x100) * (char)local_a8 - (0xff < local_a8);
  cStack_2f = (0 < sStack_a6) * (sStack_a6 < 0x100) * (char)sStack_a6 - (0xff < sStack_a6);
  cStack_2e = (0 < sStack_a4) * (sStack_a4 < 0x100) * (char)sStack_a4 - (0xff < sStack_a4);
  cStack_2d = (0 < sStack_a2) * (sStack_a2 < 0x100) * (char)sStack_a2 - (0xff < sStack_a2);
  cStack_2c = (0 < sStack_a0) * (sStack_a0 < 0x100) * (char)sStack_a0 - (0xff < sStack_a0);
  cStack_2b = (0 < sStack_9e) * (sStack_9e < 0x100) * (char)sStack_9e - (0xff < sStack_9e);
  cStack_2a = (0 < sStack_9c) * (sStack_9c < 0x100) * (char)sStack_9c - (0xff < sStack_9c);
  cStack_29 = (0 < sStack_9a) * (sStack_9a < 0x100) * (char)sStack_9a - (0xff < sStack_9a);
  local_28 = (0 < local_98) * (local_98 < 0x100) * (char)local_98 - (0xff < local_98);
  cStack_27 = (0 < sStack_96) * (sStack_96 < 0x100) * (char)sStack_96 - (0xff < sStack_96);
  cStack_26 = (0 < sStack_94) * (sStack_94 < 0x100) * (char)sStack_94 - (0xff < sStack_94);
  cStack_25 = (0 < sStack_92) * (sStack_92 < 0x100) * (char)sStack_92 - (0xff < sStack_92);
  cStack_24 = (0 < sStack_90) * (sStack_90 < 0x100) * (char)sStack_90 - (0xff < sStack_90);
  cStack_23 = (0 < sStack_8e) * (sStack_8e < 0x100) * (char)sStack_8e - (0xff < sStack_8e);
  cStack_22 = (0 < sStack_8c) * (sStack_8c < 0x100) * (char)sStack_8c - (0xff < sStack_8c);
  cStack_21 = (0 < sStack_8a) * (sStack_8a < 0x100) * (char)sStack_8a - (0xff < sStack_8a);
  cStack_20 = (0 < local_88) * (local_88 < 0x100) * (char)local_88 - (0xff < local_88);
  cStack_1f = (0 < sStack_86) * (sStack_86 < 0x100) * (char)sStack_86 - (0xff < sStack_86);
  cStack_1e = (0 < sStack_84) * (sStack_84 < 0x100) * (char)sStack_84 - (0xff < sStack_84);
  cStack_1d = (0 < sStack_82) * (sStack_82 < 0x100) * (char)sStack_82 - (0xff < sStack_82);
  cStack_1c = (0 < sStack_80) * (sStack_80 < 0x100) * (char)sStack_80 - (0xff < sStack_80);
  cStack_1b = (0 < sStack_7e) * (sStack_7e < 0x100) * (char)sStack_7e - (0xff < sStack_7e);
  cStack_1a = (0 < sStack_7c) * (sStack_7c < 0x100) * (char)sStack_7c - (0xff < sStack_7c);
  cStack_19 = (0 < sStack_7a) * (sStack_7a < 0x100) * (char)sStack_7a - (0xff < sStack_7a);
  puVar1 = (undefined8 *)
           VP8PlanarTo24b_SSE2(&local_78,&local_68,&local_58,&local_48,&local_38,&local_28);
  *puVar1 = CONCAT17(cStack_71,
                     CONCAT16(cStack_72,
                              CONCAT15(cStack_73,
                                       CONCAT14(cStack_74,
                                                CONCAT13(cStack_75,
                                                         CONCAT12(cStack_76,
                                                                  CONCAT11(cStack_77,local_78)))))))
  ;
  puVar1[1] = CONCAT17(cStack_69,
                       CONCAT16(cStack_6a,
                                CONCAT15(cStack_6b,
                                         CONCAT14(cStack_6c,
                                                  CONCAT13(cStack_6d,
                                                           CONCAT12(cStack_6e,
                                                                    CONCAT11(cStack_6f,cStack_70))))
                                        )));
  puVar1[2] = CONCAT17(cStack_61,
                       CONCAT16(cStack_62,
                                CONCAT15(cStack_63,
                                         CONCAT14(cStack_64,
                                                  CONCAT13(cStack_65,
                                                           CONCAT12(cStack_66,
                                                                    CONCAT11(cStack_67,local_68)))))
                               ));
  puVar1[3] = CONCAT17(cStack_59,
                       CONCAT16(cStack_5a,
                                CONCAT15(cStack_5b,
                                         CONCAT14(cStack_5c,
                                                  CONCAT13(cStack_5d,
                                                           CONCAT12(cStack_5e,
                                                                    CONCAT11(cStack_5f,cStack_60))))
                                        )));
  puVar1[4] = CONCAT17(cStack_51,
                       CONCAT16(cStack_52,
                                CONCAT15(cStack_53,
                                         CONCAT14(cStack_54,
                                                  CONCAT13(cStack_55,
                                                           CONCAT12(cStack_56,
                                                                    CONCAT11(cStack_57,local_58)))))
                               ));
  puVar1[5] = CONCAT17(cStack_49,
                       CONCAT16(cStack_4a,
                                CONCAT15(cStack_4b,
                                         CONCAT14(cStack_4c,
                                                  CONCAT13(cStack_4d,
                                                           CONCAT12(cStack_4e,
                                                                    CONCAT11(cStack_4f,cStack_50))))
                                        )));
  puVar1[6] = CONCAT17(cStack_41,
                       CONCAT16(cStack_42,
                                CONCAT15(cStack_43,
                                         CONCAT14(cStack_44,
                                                  CONCAT13(cStack_45,
                                                           CONCAT12(cStack_46,
                                                                    CONCAT11(cStack_47,local_48)))))
                               ));
  puVar1[7] = CONCAT17(cStack_39,
                       CONCAT16(cStack_3a,
                                CONCAT15(cStack_3b,
                                         CONCAT14(cStack_3c,
                                                  CONCAT13(cStack_3d,
                                                           CONCAT12(cStack_3e,
                                                                    CONCAT11(cStack_3f,cStack_40))))
                                        )));
  puVar1[8] = CONCAT17(cStack_31,
                       CONCAT16(cStack_32,
                                CONCAT15(cStack_33,
                                         CONCAT14(cStack_34,
                                                  CONCAT13(cStack_35,
                                                           CONCAT12(cStack_36,
                                                                    CONCAT11(cStack_37,local_38)))))
                               ));
  puVar1[9] = CONCAT17(cStack_29,
                       CONCAT16(cStack_2a,
                                CONCAT15(cStack_2b,
                                         CONCAT14(cStack_2c,
                                                  CONCAT13(cStack_2d,
                                                           CONCAT12(cStack_2e,
                                                                    CONCAT11(cStack_2f,cStack_30))))
                                        )));
  puVar1[10] = CONCAT17(cStack_21,
                        CONCAT16(cStack_22,
                                 CONCAT15(cStack_23,
                                          CONCAT14(cStack_24,
                                                   CONCAT13(cStack_25,
                                                            CONCAT12(cStack_26,
                                                                     CONCAT11(cStack_27,local_28))))
                                         )));
  puVar1[0xb] = CONCAT17(cStack_19,
                         CONCAT16(cStack_1a,
                                  CONCAT15(cStack_1b,
                                           CONCAT14(cStack_1c,
                                                    CONCAT13(cStack_1d,
                                                             CONCAT12(cStack_1e,
                                                                      CONCAT11(cStack_1f,cStack_20))
                                                            )))));
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void VP8YuvToBgr32_SSE2(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  short local_138;
  short sStack_136;
  short sStack_134;
  short sStack_132;
  short sStack_130;
  short sStack_12e;
  short sStack_12c;
  short sStack_12a;
  short local_128;
  short sStack_126;
  short sStack_124;
  short sStack_122;
  short sStack_120;
  short sStack_11e;
  short sStack_11c;
  short sStack_11a;
  short local_118;
  short sStack_116;
  short sStack_114;
  short sStack_112;
  short sStack_110;
  short sStack_10e;
  short sStack_10c;
  short sStack_10a;
  short local_108;
  short sStack_106;
  short sStack_104;
  short sStack_102;
  short sStack_100;
  short sStack_fe;
  short sStack_fc;
  short sStack_fa;
  short local_f8;
  short sStack_f6;
  short sStack_f4;
  short sStack_f2;
  short sStack_f0;
  short sStack_ee;
  short sStack_ec;
  short sStack_ea;
  short local_e8;
  short sStack_e6;
  short sStack_e4;
  short sStack_e2;
  short sStack_e0;
  short sStack_de;
  short sStack_dc;
  short sStack_da;
  short local_d8;
  short sStack_d6;
  short sStack_d4;
  short sStack_d2;
  short sStack_d0;
  short sStack_ce;
  short sStack_cc;
  short sStack_ca;
  short local_c8;
  short sStack_c6;
  short sStack_c4;
  short sStack_c2;
  short sStack_c0;
  short sStack_be;
  short sStack_bc;
  short sStack_ba;
  short local_b8;
  short sStack_b6;
  short sStack_b4;
  short sStack_b2;
  short sStack_b0;
  short sStack_ae;
  short sStack_ac;
  short sStack_aa;
  short local_a8;
  short sStack_a6;
  short sStack_a4;
  short sStack_a2;
  short sStack_a0;
  short sStack_9e;
  short sStack_9c;
  short sStack_9a;
  short local_98;
  short sStack_96;
  short sStack_94;
  short sStack_92;
  short sStack_90;
  short sStack_8e;
  short sStack_8c;
  short sStack_8a;
  short local_88;
  short sStack_86;
  short sStack_84;
  short sStack_82;
  short sStack_80;
  short sStack_7e;
  short sStack_7c;
  short sStack_7a;
  char local_78;
  char cStack_77;
  char cStack_76;
  char cStack_75;
  char cStack_74;
  char cStack_73;
  char cStack_72;
  char cStack_71;
  char cStack_70;
  char cStack_6f;
  char cStack_6e;
  char cStack_6d;
  char cStack_6c;
  char cStack_6b;
  char cStack_6a;
  char cStack_69;
  char local_68;
  char cStack_67;
  char cStack_66;
  char cStack_65;
  char cStack_64;
  char cStack_63;
  char cStack_62;
  char cStack_61;
  char cStack_60;
  char cStack_5f;
  char cStack_5e;
  char cStack_5d;
  char cStack_5c;
  char cStack_5b;
  char cStack_5a;
  char cStack_59;
  char local_58;
  char cStack_57;
  char cStack_56;
  char cStack_55;
  char cStack_54;
  char cStack_53;
  char cStack_52;
  char cStack_51;
  char cStack_50;
  char cStack_4f;
  char cStack_4e;
  char cStack_4d;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  char local_48;
  char cStack_47;
  char cStack_46;
  char cStack_45;
  char cStack_44;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  char cStack_3d;
  char cStack_3c;
  char cStack_3b;
  char cStack_3a;
  char cStack_39;
  char local_38;
  char cStack_37;
  char cStack_36;
  char cStack_35;
  char cStack_34;
  char cStack_33;
  char cStack_32;
  char cStack_31;
  char cStack_30;
  char cStack_2f;
  char cStack_2e;
  char cStack_2d;
  char cStack_2c;
  char cStack_2b;
  char cStack_2a;
  char cStack_29;
  char local_28;
  char cStack_27;
  char cStack_26;
  char cStack_25;
  char cStack_24;
  char cStack_23;
  char cStack_22;
  char cStack_21;
  char cStack_20;
  char cStack_1f;
  char cStack_1e;
  char cStack_1d;
  char cStack_1c;
  char cStack_1b;
  char cStack_1a;
  char cStack_19;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = param_1;
  lVar3 = param_2;
  YUV444ToRGB_SSE2(param_1,param_2,param_3,&local_138,&local_f8,&local_b8);
  YUV444ToRGB_SSE2(param_1 + 8,param_2 + 8,param_3 + 8,&local_128,&local_e8,&local_a8);
  YUV444ToRGB_SSE2(lVar2 + 0x10,lVar3 + 0x10,param_3 + 0x10,&local_118,&local_d8,&local_98);
  YUV444ToRGB_SSE2(lVar2 + 0x18,lVar3 + 0x18,param_3 + 0x18,&local_108,&local_c8,&local_88);
  local_78 = (0 < local_b8) * (local_b8 < 0x100) * (char)local_b8 - (0xff < local_b8);
  cStack_77 = (0 < sStack_b6) * (sStack_b6 < 0x100) * (char)sStack_b6 - (0xff < sStack_b6);
  cStack_76 = (0 < sStack_b4) * (sStack_b4 < 0x100) * (char)sStack_b4 - (0xff < sStack_b4);
  cStack_75 = (0 < sStack_b2) * (sStack_b2 < 0x100) * (char)sStack_b2 - (0xff < sStack_b2);
  cStack_74 = (0 < sStack_b0) * (sStack_b0 < 0x100) * (char)sStack_b0 - (0xff < sStack_b0);
  cStack_73 = (0 < sStack_ae) * (sStack_ae < 0x100) * (char)sStack_ae - (0xff < sStack_ae);
  cStack_72 = (0 < sStack_ac) * (sStack_ac < 0x100) * (char)sStack_ac - (0xff < sStack_ac);
  cStack_71 = (0 < sStack_aa) * (sStack_aa < 0x100) * (char)sStack_aa - (0xff < sStack_aa);
  cStack_70 = (0 < local_a8) * (local_a8 < 0x100) * (char)local_a8 - (0xff < local_a8);
  cStack_6f = (0 < sStack_a6) * (sStack_a6 < 0x100) * (char)sStack_a6 - (0xff < sStack_a6);
  cStack_6e = (0 < sStack_a4) * (sStack_a4 < 0x100) * (char)sStack_a4 - (0xff < sStack_a4);
  cStack_6d = (0 < sStack_a2) * (sStack_a2 < 0x100) * (char)sStack_a2 - (0xff < sStack_a2);
  cStack_6c = (0 < sStack_a0) * (sStack_a0 < 0x100) * (char)sStack_a0 - (0xff < sStack_a0);
  cStack_6b = (0 < sStack_9e) * (sStack_9e < 0x100) * (char)sStack_9e - (0xff < sStack_9e);
  cStack_6a = (0 < sStack_9c) * (sStack_9c < 0x100) * (char)sStack_9c - (0xff < sStack_9c);
  cStack_69 = (0 < sStack_9a) * (sStack_9a < 0x100) * (char)sStack_9a - (0xff < sStack_9a);
  local_68 = (0 < local_98) * (local_98 < 0x100) * (char)local_98 - (0xff < local_98);
  cStack_67 = (0 < sStack_96) * (sStack_96 < 0x100) * (char)sStack_96 - (0xff < sStack_96);
  cStack_66 = (0 < sStack_94) * (sStack_94 < 0x100) * (char)sStack_94 - (0xff < sStack_94);
  cStack_65 = (0 < sStack_92) * (sStack_92 < 0x100) * (char)sStack_92 - (0xff < sStack_92);
  cStack_64 = (0 < sStack_90) * (sStack_90 < 0x100) * (char)sStack_90 - (0xff < sStack_90);
  cStack_63 = (0 < sStack_8e) * (sStack_8e < 0x100) * (char)sStack_8e - (0xff < sStack_8e);
  cStack_62 = (0 < sStack_8c) * (sStack_8c < 0x100) * (char)sStack_8c - (0xff < sStack_8c);
  cStack_61 = (0 < sStack_8a) * (sStack_8a < 0x100) * (char)sStack_8a - (0xff < sStack_8a);
  cStack_60 = (0 < local_88) * (local_88 < 0x100) * (char)local_88 - (0xff < local_88);
  cStack_5f = (0 < sStack_86) * (sStack_86 < 0x100) * (char)sStack_86 - (0xff < sStack_86);
  cStack_5e = (0 < sStack_84) * (sStack_84 < 0x100) * (char)sStack_84 - (0xff < sStack_84);
  cStack_5d = (0 < sStack_82) * (sStack_82 < 0x100) * (char)sStack_82 - (0xff < sStack_82);
  cStack_5c = (0 < sStack_80) * (sStack_80 < 0x100) * (char)sStack_80 - (0xff < sStack_80);
  cStack_5b = (0 < sStack_7e) * (sStack_7e < 0x100) * (char)sStack_7e - (0xff < sStack_7e);
  cStack_5a = (0 < sStack_7c) * (sStack_7c < 0x100) * (char)sStack_7c - (0xff < sStack_7c);
  cStack_59 = (0 < sStack_7a) * (sStack_7a < 0x100) * (char)sStack_7a - (0xff < sStack_7a);
  local_58 = (0 < local_f8) * (local_f8 < 0x100) * (char)local_f8 - (0xff < local_f8);
  cStack_57 = (0 < sStack_f6) * (sStack_f6 < 0x100) * (char)sStack_f6 - (0xff < sStack_f6);
  cStack_56 = (0 < sStack_f4) * (sStack_f4 < 0x100) * (char)sStack_f4 - (0xff < sStack_f4);
  cStack_55 = (0 < sStack_f2) * (sStack_f2 < 0x100) * (char)sStack_f2 - (0xff < sStack_f2);
  cStack_54 = (0 < sStack_f0) * (sStack_f0 < 0x100) * (char)sStack_f0 - (0xff < sStack_f0);
  cStack_53 = (0 < sStack_ee) * (sStack_ee < 0x100) * (char)sStack_ee - (0xff < sStack_ee);
  cStack_52 = (0 < sStack_ec) * (sStack_ec < 0x100) * (char)sStack_ec - (0xff < sStack_ec);
  cStack_51 = (0 < sStack_ea) * (sStack_ea < 0x100) * (char)sStack_ea - (0xff < sStack_ea);
  cStack_50 = (0 < local_e8) * (local_e8 < 0x100) * (char)local_e8 - (0xff < local_e8);
  cStack_4f = (0 < sStack_e6) * (sStack_e6 < 0x100) * (char)sStack_e6 - (0xff < sStack_e6);
  cStack_4e = (0 < sStack_e4) * (sStack_e4 < 0x100) * (char)sStack_e4 - (0xff < sStack_e4);
  cStack_4d = (0 < sStack_e2) * (sStack_e2 < 0x100) * (char)sStack_e2 - (0xff < sStack_e2);
  cStack_4c = (0 < sStack_e0) * (sStack_e0 < 0x100) * (char)sStack_e0 - (0xff < sStack_e0);
  cStack_4b = (0 < sStack_de) * (sStack_de < 0x100) * (char)sStack_de - (0xff < sStack_de);
  cStack_4a = (0 < sStack_dc) * (sStack_dc < 0x100) * (char)sStack_dc - (0xff < sStack_dc);
  cStack_49 = (0 < sStack_da) * (sStack_da < 0x100) * (char)sStack_da - (0xff < sStack_da);
  local_48 = (0 < local_d8) * (local_d8 < 0x100) * (char)local_d8 - (0xff < local_d8);
  cStack_47 = (0 < sStack_d6) * (sStack_d6 < 0x100) * (char)sStack_d6 - (0xff < sStack_d6);
  cStack_46 = (0 < sStack_d4) * (sStack_d4 < 0x100) * (char)sStack_d4 - (0xff < sStack_d4);
  cStack_45 = (0 < sStack_d2) * (sStack_d2 < 0x100) * (char)sStack_d2 - (0xff < sStack_d2);
  cStack_44 = (0 < sStack_d0) * (sStack_d0 < 0x100) * (char)sStack_d0 - (0xff < sStack_d0);
  cStack_43 = (0 < sStack_ce) * (sStack_ce < 0x100) * (char)sStack_ce - (0xff < sStack_ce);
  cStack_42 = (0 < sStack_cc) * (sStack_cc < 0x100) * (char)sStack_cc - (0xff < sStack_cc);
  cStack_41 = (0 < sStack_ca) * (sStack_ca < 0x100) * (char)sStack_ca - (0xff < sStack_ca);
  cStack_40 = (0 < local_c8) * (local_c8 < 0x100) * (char)local_c8 - (0xff < local_c8);
  cStack_3f = (0 < sStack_c6) * (sStack_c6 < 0x100) * (char)sStack_c6 - (0xff < sStack_c6);
  cStack_3e = (0 < sStack_c4) * (sStack_c4 < 0x100) * (char)sStack_c4 - (0xff < sStack_c4);
  cStack_3d = (0 < sStack_c2) * (sStack_c2 < 0x100) * (char)sStack_c2 - (0xff < sStack_c2);
  cStack_3c = (0 < sStack_c0) * (sStack_c0 < 0x100) * (char)sStack_c0 - (0xff < sStack_c0);
  cStack_3b = (0 < sStack_be) * (sStack_be < 0x100) * (char)sStack_be - (0xff < sStack_be);
  cStack_3a = (0 < sStack_bc) * (sStack_bc < 0x100) * (char)sStack_bc - (0xff < sStack_bc);
  cStack_39 = (0 < sStack_ba) * (sStack_ba < 0x100) * (char)sStack_ba - (0xff < sStack_ba);
  local_38 = (0 < local_138) * (local_138 < 0x100) * (char)local_138 - (0xff < local_138);
  cStack_37 = (0 < sStack_136) * (sStack_136 < 0x100) * (char)sStack_136 - (0xff < sStack_136);
  cStack_36 = (0 < sStack_134) * (sStack_134 < 0x100) * (char)sStack_134 - (0xff < sStack_134);
  cStack_35 = (0 < sStack_132) * (sStack_132 < 0x100) * (char)sStack_132 - (0xff < sStack_132);
  cStack_34 = (0 < sStack_130) * (sStack_130 < 0x100) * (char)sStack_130 - (0xff < sStack_130);
  cStack_33 = (0 < sStack_12e) * (sStack_12e < 0x100) * (char)sStack_12e - (0xff < sStack_12e);
  cStack_32 = (0 < sStack_12c) * (sStack_12c < 0x100) * (char)sStack_12c - (0xff < sStack_12c);
  cStack_31 = (0 < sStack_12a) * (sStack_12a < 0x100) * (char)sStack_12a - (0xff < sStack_12a);
  cStack_30 = (0 < local_128) * (local_128 < 0x100) * (char)local_128 - (0xff < local_128);
  cStack_2f = (0 < sStack_126) * (sStack_126 < 0x100) * (char)sStack_126 - (0xff < sStack_126);
  cStack_2e = (0 < sStack_124) * (sStack_124 < 0x100) * (char)sStack_124 - (0xff < sStack_124);
  cStack_2d = (0 < sStack_122) * (sStack_122 < 0x100) * (char)sStack_122 - (0xff < sStack_122);
  cStack_2c = (0 < sStack_120) * (sStack_120 < 0x100) * (char)sStack_120 - (0xff < sStack_120);
  cStack_2b = (0 < sStack_11e) * (sStack_11e < 0x100) * (char)sStack_11e - (0xff < sStack_11e);
  cStack_2a = (0 < sStack_11c) * (sStack_11c < 0x100) * (char)sStack_11c - (0xff < sStack_11c);
  cStack_29 = (0 < sStack_11a) * (sStack_11a < 0x100) * (char)sStack_11a - (0xff < sStack_11a);
  local_28 = (0 < local_118) * (local_118 < 0x100) * (char)local_118 - (0xff < local_118);
  cStack_27 = (0 < sStack_116) * (sStack_116 < 0x100) * (char)sStack_116 - (0xff < sStack_116);
  cStack_26 = (0 < sStack_114) * (sStack_114 < 0x100) * (char)sStack_114 - (0xff < sStack_114);
  cStack_25 = (0 < sStack_112) * (sStack_112 < 0x100) * (char)sStack_112 - (0xff < sStack_112);
  cStack_24 = (0 < sStack_110) * (sStack_110 < 0x100) * (char)sStack_110 - (0xff < sStack_110);
  cStack_23 = (0 < sStack_10e) * (sStack_10e < 0x100) * (char)sStack_10e - (0xff < sStack_10e);
  cStack_22 = (0 < sStack_10c) * (sStack_10c < 0x100) * (char)sStack_10c - (0xff < sStack_10c);
  cStack_21 = (0 < sStack_10a) * (sStack_10a < 0x100) * (char)sStack_10a - (0xff < sStack_10a);
  cStack_20 = (0 < local_108) * (local_108 < 0x100) * (char)local_108 - (0xff < local_108);
  cStack_1f = (0 < sStack_106) * (sStack_106 < 0x100) * (char)sStack_106 - (0xff < sStack_106);
  cStack_1e = (0 < sStack_104) * (sStack_104 < 0x100) * (char)sStack_104 - (0xff < sStack_104);
  cStack_1d = (0 < sStack_102) * (sStack_102 < 0x100) * (char)sStack_102 - (0xff < sStack_102);
  cStack_1c = (0 < sStack_100) * (sStack_100 < 0x100) * (char)sStack_100 - (0xff < sStack_100);
  cStack_1b = (0 < sStack_fe) * (sStack_fe < 0x100) * (char)sStack_fe - (0xff < sStack_fe);
  cStack_1a = (0 < sStack_fc) * (sStack_fc < 0x100) * (char)sStack_fc - (0xff < sStack_fc);
  cStack_19 = (0 < sStack_fa) * (sStack_fa < 0x100) * (char)sStack_fa - (0xff < sStack_fa);
  puVar1 = (undefined8 *)
           VP8PlanarTo24b_SSE2(&local_78,&local_68,&local_58,&local_48,&local_38,&local_28);
  *puVar1 = CONCAT17(cStack_71,
                     CONCAT16(cStack_72,
                              CONCAT15(cStack_73,
                                       CONCAT14(cStack_74,
                                                CONCAT13(cStack_75,
                                                         CONCAT12(cStack_76,
                                                                  CONCAT11(cStack_77,local_78)))))))
  ;
  puVar1[1] = CONCAT17(cStack_69,
                       CONCAT16(cStack_6a,
                                CONCAT15(cStack_6b,
                                         CONCAT14(cStack_6c,
                                                  CONCAT13(cStack_6d,
                                                           CONCAT12(cStack_6e,
                                                                    CONCAT11(cStack_6f,cStack_70))))
                                        )));
  puVar1[2] = CONCAT17(cStack_61,
                       CONCAT16(cStack_62,
                                CONCAT15(cStack_63,
                                         CONCAT14(cStack_64,
                                                  CONCAT13(cStack_65,
                                                           CONCAT12(cStack_66,
                                                                    CONCAT11(cStack_67,local_68)))))
                               ));
  puVar1[3] = CONCAT17(cStack_59,
                       CONCAT16(cStack_5a,
                                CONCAT15(cStack_5b,
                                         CONCAT14(cStack_5c,
                                                  CONCAT13(cStack_5d,
                                                           CONCAT12(cStack_5e,
                                                                    CONCAT11(cStack_5f,cStack_60))))
                                        )));
  puVar1[4] = CONCAT17(cStack_51,
                       CONCAT16(cStack_52,
                                CONCAT15(cStack_53,
                                         CONCAT14(cStack_54,
                                                  CONCAT13(cStack_55,
                                                           CONCAT12(cStack_56,
                                                                    CONCAT11(cStack_57,local_58)))))
                               ));
  puVar1[5] = CONCAT17(cStack_49,
                       CONCAT16(cStack_4a,
                                CONCAT15(cStack_4b,
                                         CONCAT14(cStack_4c,
                                                  CONCAT13(cStack_4d,
                                                           CONCAT12(cStack_4e,
                                                                    CONCAT11(cStack_4f,cStack_50))))
                                        )));
  puVar1[6] = CONCAT17(cStack_41,
                       CONCAT16(cStack_42,
                                CONCAT15(cStack_43,
                                         CONCAT14(cStack_44,
                                                  CONCAT13(cStack_45,
                                                           CONCAT12(cStack_46,
                                                                    CONCAT11(cStack_47,local_48)))))
                               ));
  puVar1[7] = CONCAT17(cStack_39,
                       CONCAT16(cStack_3a,
                                CONCAT15(cStack_3b,
                                         CONCAT14(cStack_3c,
                                                  CONCAT13(cStack_3d,
                                                           CONCAT12(cStack_3e,
                                                                    CONCAT11(cStack_3f,cStack_40))))
                                        )));
  puVar1[8] = CONCAT17(cStack_31,
                       CONCAT16(cStack_32,
                                CONCAT15(cStack_33,
                                         CONCAT14(cStack_34,
                                                  CONCAT13(cStack_35,
                                                           CONCAT12(cStack_36,
                                                                    CONCAT11(cStack_37,local_38)))))
                               ));
  puVar1[9] = CONCAT17(cStack_29,
                       CONCAT16(cStack_2a,
                                CONCAT15(cStack_2b,
                                         CONCAT14(cStack_2c,
                                                  CONCAT13(cStack_2d,
                                                           CONCAT12(cStack_2e,
                                                                    CONCAT11(cStack_2f,cStack_30))))
                                        )));
  puVar1[10] = CONCAT17(cStack_21,
                        CONCAT16(cStack_22,
                                 CONCAT15(cStack_23,
                                          CONCAT14(cStack_24,
                                                   CONCAT13(cStack_25,
                                                            CONCAT12(cStack_26,
                                                                     CONCAT11(cStack_27,local_28))))
                                         )));
  puVar1[0xb] = CONCAT17(cStack_19,
                         CONCAT16(cStack_1a,
                                  CONCAT15(cStack_1b,
                                           CONCAT14(cStack_1c,
                                                    CONCAT13(cStack_1d,
                                                             CONCAT12(cStack_1e,
                                                                      CONCAT11(cStack_1f,cStack_20))
                                                            )))));
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void WebPInitSamplersSSE2(void)

{
  _WebPSamplers = YuvToRgbRow_SSE2;
  _WebPConvertARGBToY = YuvToRgbaRow_SSE2;
  _WebPConvertBGR24ToY = YuvToArgbRow_SSE2;
  _WebPConvertARGBToUV = YuvToBgrRow_SSE2;
  _WebPConvertRGB24ToY = YuvToBgraRow_SSE2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void WebPInitConvertARGBToYUVSSE2(void)

{
  _WebPConvertARGBToY = ConvertARGBToY_SSE2;
  _WebPConvertARGBToUV = ConvertARGBToUV_SSE2;
  _WebPConvertRGB24ToY = ConvertRGB24ToY_SSE2;
  _WebPConvertBGR24ToY = ConvertBGR24ToY_SSE2;
  _WebPConvertRGBA32ToUV = ConvertRGBA32ToUV_SSE2;
  return;
}



void Upsample32Pixels_SSE2(byte *param_1, byte *param_2, undefined1 *param_3) {
   byte bVar1;
   byte bVar2;
   byte bVar3;
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
   byte bVar19;
   byte bVar20;
   byte bVar21;
   byte bVar22;
   byte bVar23;
   byte bVar24;
   byte bVar25;
   byte bVar26;
   byte bVar27;
   byte bVar28;
   byte bVar29;
   byte bVar30;
   byte bVar31;
   byte bVar32;
   byte bVar33;
   byte bVar34;
   byte bVar35;
   byte bVar36;
   byte bVar37;
   byte bVar38;
   byte bVar39;
   byte bVar40;
   byte bVar41;
   byte bVar42;
   byte bVar43;
   byte bVar44;
   byte bVar45;
   byte bVar46;
   byte bVar47;
   byte bVar48;
   byte bVar49;
   byte bVar50;
   byte bVar51;
   byte bVar52;
   byte bVar53;
   byte bVar54;
   byte bVar55;
   byte bVar56;
   byte bVar57;
   byte bVar58;
   byte bVar59;
   byte bVar60;
   byte bVar61;
   byte bVar62;
   byte bVar63;
   byte bVar64;
   byte bVar65;
   byte bVar66;
   byte bVar67;
   byte bVar68;
   byte bVar69;
   byte bVar70;
   byte bVar71;
   byte bVar72;
   byte bVar73;
   byte bVar74;
   byte bVar75;
   byte bVar76;
   byte bVar77;
   byte bVar78;
   byte bVar79;
   byte bVar80;
   byte bVar81;
   byte bVar82;
   byte bVar83;
   byte bVar84;
   byte bVar85;
   byte bVar86;
   byte bVar87;
   byte bVar88;
   byte bVar89;
   byte bVar90;
   byte bVar91;
   byte bVar92;
   byte bVar93;
   byte bVar94;
   byte bVar95;
   byte bVar96;
   undefined1 uVar97;
   undefined1 uVar98;
   undefined1 uVar99;
   undefined1 uVar100;
   undefined1 uVar101;
   undefined1 uVar102;
   undefined1 uVar103;
   undefined1 uVar104;
   undefined1 uVar105;
   undefined1 uVar106;
   undefined1 uVar107;
   undefined1 uVar108;
   undefined1 uVar109;
   undefined1 uVar110;
   undefined1 uVar111;
   undefined1 uVar112;
   undefined1 uVar113;
   undefined1 uVar114;
   undefined1 uVar115;
   undefined1 uVar116;
   undefined1 uVar117;
   undefined1 uVar118;
   undefined1 uVar119;
   undefined1 uVar120;
   undefined1 uVar121;
   undefined1 uVar122;
   undefined1 uVar123;
   undefined1 uVar124;
   undefined1 uVar125;
   undefined1 uVar126;
   undefined1 uVar127;
   undefined1 uVar128;
   undefined1 uVar129;
   undefined1 uVar130;
   undefined1 uVar131;
   undefined1 uVar132;
   undefined1 uVar133;
   undefined1 uVar134;
   undefined1 uVar135;
   undefined1 uVar136;
   undefined1 uVar137;
   undefined1 uVar138;
   undefined1 uVar139;
   undefined1 uVar140;
   undefined1 uVar141;
   undefined1 uVar142;
   undefined1 uVar143;
   undefined1 uVar144;
   undefined1 uVar145;
   undefined1 uVar146;
   undefined1 uVar147;
   undefined1 uVar148;
   undefined1 uVar149;
   undefined1 uVar150;
   undefined1 uVar151;
   undefined1 uVar152;
   undefined1 uVar153;
   undefined1 uVar154;
   undefined1 uVar155;
   undefined1 uVar156;
   undefined1 uVar157;
   undefined1 uVar158;
   undefined1 uVar159;
   undefined1 uVar160;
   char cVar161;
   byte bVar162;
   char cVar163;
   byte bVar164;
   char cVar165;
   byte bVar166;
   char cVar167;
   byte bVar168;
   char cVar169;
   byte bVar170;
   char cVar171;
   byte bVar172;
   char cVar173;
   byte bVar174;
   char cVar175;
   byte bVar176;
   char cVar177;
   byte bVar178;
   char cVar179;
   byte bVar180;
   char cVar181;
   byte bVar182;
   char cVar183;
   byte bVar184;
   char cVar185;
   byte bVar186;
   char cVar187;
   byte bVar188;
   char cVar189;
   byte bVar190;
   char cVar191;
   byte bVar192;
   char cVar193;
   char cVar194;
   char cVar195;
   char cVar196;
   char cVar197;
   char cVar198;
   char cVar199;
   char cVar200;
   char cVar201;
   char cVar202;
   char cVar203;
   char cVar204;
   char cVar205;
   char cVar206;
   char cVar207;
   char cVar208;
   byte bVar209;
   byte bVar210;
   byte bVar211;
   byte bVar212;
   byte bVar213;
   byte bVar214;
   byte bVar215;
   byte bVar216;
   byte bVar217;
   byte bVar218;
   byte bVar219;
   byte bVar220;
   byte bVar221;
   byte bVar222;
   byte bVar223;
   byte bVar224;
   bVar1 = param_1[1];
   bVar2 = param_1[2];
   bVar3 = param_1[3];
   bVar4 = param_1[4];
   bVar5 = param_1[5];
   bVar6 = param_1[6];
   bVar7 = param_1[7];
   bVar8 = param_1[8];
   bVar9 = param_1[9];
   bVar10 = param_1[10];
   bVar11 = param_1[0xb];
   bVar12 = param_1[0xc];
   bVar13 = param_1[0xd];
   bVar14 = param_1[0xe];
   bVar15 = param_1[0xf];
   bVar16 = param_1[0x10];
   bVar33 = *param_1;
   bVar34 = param_1[1];
   bVar35 = param_1[2];
   bVar36 = param_1[3];
   bVar37 = param_1[4];
   bVar38 = param_1[5];
   bVar39 = param_1[6];
   bVar40 = param_1[7];
   bVar41 = param_1[8];
   bVar42 = param_1[9];
   bVar43 = param_1[10];
   bVar44 = param_1[0xb];
   bVar45 = param_1[0xc];
   bVar46 = param_1[0xd];
   bVar47 = param_1[0xe];
   bVar48 = param_1[0xf];
   bVar49 = *param_2;
   bVar50 = param_2[1];
   bVar51 = param_2[2];
   bVar52 = param_2[3];
   bVar53 = param_2[4];
   bVar54 = param_2[5];
   bVar55 = param_2[6];
   bVar56 = param_2[7];
   bVar57 = param_2[8];
   bVar58 = param_2[9];
   bVar59 = param_2[10];
   bVar60 = param_2[0xb];
   bVar61 = param_2[0xc];
   bVar62 = param_2[0xd];
   bVar63 = param_2[0xe];
   bVar64 = param_2[0xf];
   bVar17 = param_2[1];
   bVar18 = param_2[2];
   bVar19 = param_2[3];
   bVar20 = param_2[4];
   bVar21 = param_2[5];
   bVar22 = param_2[6];
   bVar23 = param_2[7];
   bVar24 = param_2[8];
   bVar25 = param_2[9];
   bVar26 = param_2[10];
   bVar27 = param_2[0xb];
   bVar28 = param_2[0xc];
   bVar29 = param_2[0xd];
   bVar30 = param_2[0xe];
   bVar31 = param_2[0xf];
   bVar32 = param_2[0x10];
   bVar81 = pavgb(bVar1, bVar49);
   bVar82 = pavgb(bVar2, bVar50);
   bVar83 = pavgb(bVar3, bVar51);
   bVar84 = pavgb(bVar4, bVar52);
   bVar85 = pavgb(bVar5, bVar53);
   bVar86 = pavgb(bVar6, bVar54);
   bVar87 = pavgb(bVar7, bVar55);
   bVar88 = pavgb(bVar8, bVar56);
   bVar89 = pavgb(bVar9, bVar57);
   bVar90 = pavgb(bVar10, bVar58);
   bVar91 = pavgb(bVar11, bVar59);
   bVar92 = pavgb(bVar12, bVar60);
   bVar93 = pavgb(bVar13, bVar61);
   bVar94 = pavgb(bVar14, bVar62);
   bVar95 = pavgb(bVar15, bVar63);
   bVar96 = pavgb(bVar16, bVar64);
   bVar65 = pavgb(bVar33, bVar17);
   bVar66 = pavgb(bVar34, bVar18);
   bVar67 = pavgb(bVar35, bVar19);
   bVar68 = pavgb(bVar36, bVar20);
   bVar69 = pavgb(bVar37, bVar21);
   bVar70 = pavgb(bVar38, bVar22);
   bVar71 = pavgb(bVar39, bVar23);
   bVar72 = pavgb(bVar40, bVar24);
   bVar73 = pavgb(bVar41, bVar25);
   bVar74 = pavgb(bVar42, bVar26);
   bVar75 = pavgb(bVar43, bVar27);
   bVar76 = pavgb(bVar44, bVar28);
   bVar77 = pavgb(bVar45, bVar29);
   bVar78 = pavgb(bVar46, bVar30);
   bVar79 = pavgb(bVar47, bVar31);
   bVar80 = pavgb(bVar48, bVar32);
   bVar209 = bVar81 ^ bVar65;
   bVar210 = bVar82 ^ bVar66;
   bVar211 = bVar83 ^ bVar67;
   bVar212 = bVar84 ^ bVar68;
   bVar213 = bVar85 ^ bVar69;
   bVar214 = bVar86 ^ bVar70;
   bVar215 = bVar87 ^ bVar71;
   bVar216 = bVar88 ^ bVar72;
   bVar217 = bVar89 ^ bVar73;
   bVar218 = bVar90 ^ bVar74;
   bVar219 = bVar91 ^ bVar75;
   bVar220 = bVar92 ^ bVar76;
   bVar221 = bVar93 ^ bVar77;
   bVar222 = bVar94 ^ bVar78;
   bVar223 = bVar95 ^ bVar79;
   bVar224 = bVar96 ^ bVar80;
   cVar161 = pavgb(bVar65, bVar81);
   cVar163 = pavgb(bVar66, bVar82);
   cVar165 = pavgb(bVar67, bVar83);
   cVar167 = pavgb(bVar68, bVar84);
   cVar169 = pavgb(bVar69, bVar85);
   cVar171 = pavgb(bVar70, bVar86);
   cVar173 = pavgb(bVar71, bVar87);
   cVar175 = pavgb(bVar72, bVar88);
   cVar177 = pavgb(bVar73, bVar89);
   cVar179 = pavgb(bVar74, bVar90);
   cVar181 = pavgb(bVar75, bVar91);
   cVar183 = pavgb(bVar76, bVar92);
   cVar185 = pavgb(bVar77, bVar93);
   cVar187 = pavgb(bVar78, bVar94);
   cVar189 = pavgb(bVar79, bVar95);
   cVar191 = pavgb(bVar80, bVar96);
   bVar162 = cVar161 - ( ( bVar1 ^ bVar49 | bVar33 ^ bVar17 | bVar209 ) & _LC0 );
   bVar164 = cVar163 - ( ( bVar2 ^ bVar50 | bVar34 ^ bVar18 | bVar210 ) & UNK_00104431 );
   bVar166 = cVar165 - ( ( bVar3 ^ bVar51 | bVar35 ^ bVar19 | bVar211 ) & UNK_00104432 );
   bVar168 = cVar167 - ( ( bVar4 ^ bVar52 | bVar36 ^ bVar20 | bVar212 ) & UNK_00104433 );
   bVar170 = cVar169 - ( ( bVar5 ^ bVar53 | bVar37 ^ bVar21 | bVar213 ) & UNK_00104434 );
   bVar172 = cVar171 - ( ( bVar6 ^ bVar54 | bVar38 ^ bVar22 | bVar214 ) & UNK_00104435 );
   bVar174 = cVar173 - ( ( bVar7 ^ bVar55 | bVar39 ^ bVar23 | bVar215 ) & UNK_00104436 );
   bVar176 = cVar175 - ( ( bVar8 ^ bVar56 | bVar40 ^ bVar24 | bVar216 ) & UNK_00104437 );
   bVar178 = cVar177 - ( ( bVar9 ^ bVar57 | bVar41 ^ bVar25 | bVar217 ) & UNK_00104438 );
   bVar180 = cVar179 - ( ( bVar10 ^ bVar58 | bVar42 ^ bVar26 | bVar218 ) & UNK_00104439 );
   bVar182 = cVar181 - ( ( bVar11 ^ bVar59 | bVar43 ^ bVar27 | bVar219 ) & UNK_0010443a );
   bVar184 = cVar183 - ( ( bVar12 ^ bVar60 | bVar44 ^ bVar28 | bVar220 ) & UNK_0010443b );
   bVar186 = cVar185 - ( ( bVar13 ^ bVar61 | bVar45 ^ bVar29 | bVar221 ) & UNK_0010443c );
   bVar188 = cVar187 - ( ( bVar14 ^ bVar62 | bVar46 ^ bVar30 | bVar222 ) & UNK_0010443d );
   bVar190 = cVar189 - ( ( bVar15 ^ bVar63 | bVar47 ^ bVar31 | bVar223 ) & UNK_0010443e );
   bVar192 = cVar191 - ( ( bVar16 ^ bVar64 | bVar48 ^ bVar32 | bVar224 ) & UNK_0010443f );
   cVar161 = pavgb(bVar162, bVar81);
   cVar163 = pavgb(bVar164, bVar82);
   cVar165 = pavgb(bVar166, bVar83);
   cVar167 = pavgb(bVar168, bVar84);
   cVar169 = pavgb(bVar170, bVar85);
   cVar171 = pavgb(bVar172, bVar86);
   cVar173 = pavgb(bVar174, bVar87);
   cVar175 = pavgb(bVar176, bVar88);
   cVar177 = pavgb(bVar178, bVar89);
   cVar179 = pavgb(bVar180, bVar90);
   cVar181 = pavgb(bVar182, bVar91);
   cVar183 = pavgb(bVar184, bVar92);
   cVar185 = pavgb(bVar186, bVar93);
   cVar187 = pavgb(bVar188, bVar94);
   cVar189 = pavgb(bVar190, bVar95);
   cVar191 = pavgb(bVar192, bVar96);
   cVar193 = pavgb(bVar162, bVar65);
   cVar194 = pavgb(bVar164, bVar66);
   cVar195 = pavgb(bVar166, bVar67);
   cVar196 = pavgb(bVar168, bVar68);
   cVar197 = pavgb(bVar170, bVar69);
   cVar198 = pavgb(bVar172, bVar70);
   cVar199 = pavgb(bVar174, bVar71);
   cVar200 = pavgb(bVar176, bVar72);
   cVar201 = pavgb(bVar178, bVar73);
   cVar202 = pavgb(bVar180, bVar74);
   cVar203 = pavgb(bVar182, bVar75);
   cVar204 = pavgb(bVar184, bVar76);
   cVar205 = pavgb(bVar186, bVar77);
   cVar206 = pavgb(bVar188, bVar78);
   cVar207 = pavgb(bVar190, bVar79);
   cVar208 = pavgb(bVar192, bVar80);
   cVar161 = cVar161 - ( ( bVar81 ^ bVar162 | ( bVar1 ^ bVar49 ) & bVar209 ) & _LC0 );
   cVar163 = cVar163 - ( ( bVar82 ^ bVar164 | ( bVar2 ^ bVar50 ) & bVar210 ) & UNK_00104431 );
   cVar165 = cVar165 - ( ( bVar83 ^ bVar166 | ( bVar3 ^ bVar51 ) & bVar211 ) & UNK_00104432 );
   cVar167 = cVar167 - ( ( bVar84 ^ bVar168 | ( bVar4 ^ bVar52 ) & bVar212 ) & UNK_00104433 );
   cVar169 = cVar169 - ( ( bVar85 ^ bVar170 | ( bVar5 ^ bVar53 ) & bVar213 ) & UNK_00104434 );
   cVar171 = cVar171 - ( ( bVar86 ^ bVar172 | ( bVar6 ^ bVar54 ) & bVar214 ) & UNK_00104435 );
   cVar173 = cVar173 - ( ( bVar87 ^ bVar174 | ( bVar7 ^ bVar55 ) & bVar215 ) & UNK_00104436 );
   cVar175 = cVar175 - ( ( bVar88 ^ bVar176 | ( bVar8 ^ bVar56 ) & bVar216 ) & UNK_00104437 );
   cVar177 = cVar177 - ( ( bVar89 ^ bVar178 | ( bVar9 ^ bVar57 ) & bVar217 ) & UNK_00104438 );
   cVar179 = cVar179 - ( ( bVar90 ^ bVar180 | ( bVar10 ^ bVar58 ) & bVar218 ) & UNK_00104439 );
   cVar181 = cVar181 - ( ( bVar91 ^ bVar182 | ( bVar11 ^ bVar59 ) & bVar219 ) & UNK_0010443a );
   cVar183 = cVar183 - ( ( bVar92 ^ bVar184 | ( bVar12 ^ bVar60 ) & bVar220 ) & UNK_0010443b );
   cVar185 = cVar185 - ( ( bVar93 ^ bVar186 | ( bVar13 ^ bVar61 ) & bVar221 ) & UNK_0010443c );
   cVar187 = cVar187 - ( ( bVar94 ^ bVar188 | ( bVar14 ^ bVar62 ) & bVar222 ) & UNK_0010443d );
   cVar189 = cVar189 - ( ( bVar95 ^ bVar190 | ( bVar15 ^ bVar63 ) & bVar223 ) & UNK_0010443e );
   cVar191 = cVar191 - ( ( bVar96 ^ bVar192 | ( bVar16 ^ bVar64 ) & bVar224 ) & UNK_0010443f );
   cVar193 = cVar193 - ( ( bVar65 ^ bVar162 | ( bVar33 ^ bVar17 ) & bVar209 ) & _LC0 );
   cVar194 = cVar194 - ( ( bVar66 ^ bVar164 | ( bVar34 ^ bVar18 ) & bVar210 ) & UNK_00104431 );
   cVar195 = cVar195 - ( ( bVar67 ^ bVar166 | ( bVar35 ^ bVar19 ) & bVar211 ) & UNK_00104432 );
   cVar196 = cVar196 - ( ( bVar68 ^ bVar168 | ( bVar36 ^ bVar20 ) & bVar212 ) & UNK_00104433 );
   cVar197 = cVar197 - ( ( bVar69 ^ bVar170 | ( bVar37 ^ bVar21 ) & bVar213 ) & UNK_00104434 );
   cVar198 = cVar198 - ( ( bVar70 ^ bVar172 | ( bVar38 ^ bVar22 ) & bVar214 ) & UNK_00104435 );
   cVar199 = cVar199 - ( ( bVar71 ^ bVar174 | ( bVar39 ^ bVar23 ) & bVar215 ) & UNK_00104436 );
   cVar200 = cVar200 - ( ( bVar72 ^ bVar176 | ( bVar40 ^ bVar24 ) & bVar216 ) & UNK_00104437 );
   cVar201 = cVar201 - ( ( bVar73 ^ bVar178 | ( bVar41 ^ bVar25 ) & bVar217 ) & UNK_00104438 );
   cVar202 = cVar202 - ( ( bVar74 ^ bVar180 | ( bVar42 ^ bVar26 ) & bVar218 ) & UNK_00104439 );
   cVar203 = cVar203 - ( ( bVar75 ^ bVar182 | ( bVar43 ^ bVar27 ) & bVar219 ) & UNK_0010443a );
   cVar204 = cVar204 - ( ( bVar76 ^ bVar184 | ( bVar44 ^ bVar28 ) & bVar220 ) & UNK_0010443b );
   cVar205 = cVar205 - ( ( bVar77 ^ bVar186 | ( bVar45 ^ bVar29 ) & bVar221 ) & UNK_0010443c );
   cVar206 = cVar206 - ( ( bVar78 ^ bVar188 | ( bVar46 ^ bVar30 ) & bVar222 ) & UNK_0010443d );
   cVar207 = cVar207 - ( ( bVar79 ^ bVar190 | ( bVar47 ^ bVar31 ) & bVar223 ) & UNK_0010443e );
   cVar208 = cVar208 - ( ( bVar80 ^ bVar192 | ( bVar48 ^ bVar32 ) & bVar224 ) & UNK_0010443f );
   uVar113 = pavgb(bVar33, cVar161);
   uVar114 = pavgb(bVar34, cVar163);
   uVar115 = pavgb(bVar35, cVar165);
   uVar116 = pavgb(bVar36, cVar167);
   uVar117 = pavgb(bVar37, cVar169);
   uVar118 = pavgb(bVar38, cVar171);
   uVar119 = pavgb(bVar39, cVar173);
   uVar120 = pavgb(bVar40, cVar175);
   uVar121 = pavgb(bVar41, cVar177);
   uVar122 = pavgb(bVar42, cVar179);
   uVar123 = pavgb(bVar43, cVar181);
   uVar124 = pavgb(bVar44, cVar183);
   uVar125 = pavgb(bVar45, cVar185);
   uVar126 = pavgb(bVar46, cVar187);
   uVar127 = pavgb(bVar47, cVar189);
   uVar128 = pavgb(bVar48, cVar191);
   uVar145 = pavgb(bVar1, cVar193);
   uVar146 = pavgb(bVar2, cVar194);
   uVar147 = pavgb(bVar3, cVar195);
   uVar148 = pavgb(bVar4, cVar196);
   uVar149 = pavgb(bVar5, cVar197);
   uVar150 = pavgb(bVar6, cVar198);
   uVar151 = pavgb(bVar7, cVar199);
   uVar152 = pavgb(bVar8, cVar200);
   uVar153 = pavgb(bVar9, cVar201);
   uVar154 = pavgb(bVar10, cVar202);
   uVar155 = pavgb(bVar11, cVar203);
   uVar156 = pavgb(bVar12, cVar204);
   uVar157 = pavgb(bVar13, cVar205);
   uVar158 = pavgb(bVar14, cVar206);
   uVar159 = pavgb(bVar15, cVar207);
   uVar160 = pavgb(bVar16, cVar208);
   uVar97 = pavgb(bVar49, cVar193);
   uVar98 = pavgb(bVar50, cVar194);
   uVar99 = pavgb(bVar51, cVar195);
   uVar100 = pavgb(bVar52, cVar196);
   uVar101 = pavgb(bVar53, cVar197);
   uVar102 = pavgb(bVar54, cVar198);
   uVar103 = pavgb(bVar55, cVar199);
   uVar104 = pavgb(bVar56, cVar200);
   uVar105 = pavgb(bVar57, cVar201);
   uVar106 = pavgb(bVar58, cVar202);
   uVar107 = pavgb(bVar59, cVar203);
   uVar108 = pavgb(bVar60, cVar204);
   uVar109 = pavgb(bVar61, cVar205);
   uVar110 = pavgb(bVar62, cVar206);
   uVar111 = pavgb(bVar63, cVar207);
   uVar112 = pavgb(bVar64, cVar208);
   uVar129 = pavgb(bVar17, cVar161);
   uVar130 = pavgb(bVar18, cVar163);
   uVar131 = pavgb(bVar19, cVar165);
   uVar132 = pavgb(bVar20, cVar167);
   uVar133 = pavgb(bVar21, cVar169);
   uVar134 = pavgb(bVar22, cVar171);
   uVar135 = pavgb(bVar23, cVar173);
   uVar136 = pavgb(bVar24, cVar175);
   uVar137 = pavgb(bVar25, cVar177);
   uVar138 = pavgb(bVar26, cVar179);
   uVar139 = pavgb(bVar27, cVar181);
   uVar140 = pavgb(bVar28, cVar183);
   uVar141 = pavgb(bVar29, cVar185);
   uVar142 = pavgb(bVar30, cVar187);
   uVar143 = pavgb(bVar31, cVar189);
   uVar144 = pavgb(bVar32, cVar191);
   *param_3 = uVar113;
   param_3[1] = uVar145;
   param_3[2] = uVar114;
   param_3[3] = uVar146;
   param_3[4] = uVar115;
   param_3[5] = uVar147;
   param_3[6] = uVar116;
   param_3[7] = uVar148;
   param_3[8] = uVar117;
   param_3[9] = uVar149;
   param_3[10] = uVar118;
   param_3[0xb] = uVar150;
   param_3[0xc] = uVar119;
   param_3[0xd] = uVar151;
   param_3[0xe] = uVar120;
   param_3[0xf] = uVar152;
   param_3[0x10] = uVar121;
   param_3[0x11] = uVar153;
   param_3[0x12] = uVar122;
   param_3[0x13] = uVar154;
   param_3[0x14] = uVar123;
   param_3[0x15] = uVar155;
   param_3[0x16] = uVar124;
   param_3[0x17] = uVar156;
   param_3[0x18] = uVar125;
   param_3[0x19] = uVar157;
   param_3[0x1a] = uVar126;
   param_3[0x1b] = uVar158;
   param_3[0x1c] = uVar127;
   param_3[0x1d] = uVar159;
   param_3[0x1e] = uVar128;
   param_3[0x1f] = uVar160;
   param_3[0x40] = uVar97;
   param_3[0x41] = uVar129;
   param_3[0x42] = uVar98;
   param_3[0x43] = uVar130;
   param_3[0x44] = uVar99;
   param_3[0x45] = uVar131;
   param_3[0x46] = uVar100;
   param_3[0x47] = uVar132;
   param_3[0x48] = uVar101;
   param_3[0x49] = uVar133;
   param_3[0x4a] = uVar102;
   param_3[0x4b] = uVar134;
   param_3[0x4c] = uVar103;
   param_3[0x4d] = uVar135;
   param_3[0x4e] = uVar104;
   param_3[0x4f] = uVar136;
   param_3[0x50] = uVar105;
   param_3[0x51] = uVar137;
   param_3[0x52] = uVar106;
   param_3[0x53] = uVar138;
   param_3[0x54] = uVar107;
   param_3[0x55] = uVar139;
   param_3[0x56] = uVar108;
   param_3[0x57] = uVar140;
   param_3[0x58] = uVar109;
   param_3[0x59] = uVar141;
   param_3[0x5a] = uVar110;
   param_3[0x5b] = uVar142;
   param_3[0x5c] = uVar111;
   param_3[0x5d] = uVar143;
   param_3[0x5e] = uVar112;
   param_3[0x5f] = uVar144;
   return;
}
void Yuv444ToRgb565_SSE2(long param_1, long param_2, long param_3, long param_4, uint param_5) {
   long lVar1;
   uint uVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   if ((int)( param_5 & 0xffffffe0 ) < 1) {
      iVar3 = 0;
   }
 else {
      uVar2 = ( param_5 & 0xffffffe0 ) - 1 >> 5;
      lVar1 = param_1;
      lVar5 = param_2;
      lVar6 = param_4;
      lVar7 = param_3;
      do {
         lVar4 = lVar1 + 0x20;
         VP8YuvToRgb56532_SSE2(lVar1, lVar5, lVar7, lVar6);
         lVar1 = lVar4;
         lVar5 = lVar5 + 0x20;
         lVar6 = lVar6 + 0x40;
         lVar7 = lVar7 + 0x20;
      }
 while ( lVar4 != param_1 + 0x20 + (ulong)uVar2 * 0x20 );
      iVar3 = ( uVar2 + 1 ) * 0x20;
   }

   if ((int)param_5 <= iVar3) {
      return;
   }

   lVar1 = (long)iVar3;
   WebPYuv444ToRgb565_C(param_1 + lVar1, param_2 + lVar1, param_3 + lVar1, param_4 + iVar3 * 2, param_5 - iVar3);
   return;
}
void Yuv444ToRgba4444_SSE2(long param_1, long param_2, long param_3, long param_4, uint param_5) {
   long lVar1;
   uint uVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   if ((int)( param_5 & 0xffffffe0 ) < 1) {
      iVar3 = 0;
   }
 else {
      uVar2 = ( param_5 & 0xffffffe0 ) - 1 >> 5;
      lVar1 = param_1;
      lVar5 = param_2;
      lVar6 = param_4;
      lVar7 = param_3;
      do {
         lVar4 = lVar1 + 0x20;
         VP8YuvToRgba444432_SSE2(lVar1, lVar5, lVar7, lVar6);
         lVar1 = lVar4;
         lVar5 = lVar5 + 0x20;
         lVar6 = lVar6 + 0x40;
         lVar7 = lVar7 + 0x20;
      }
 while ( lVar4 != param_1 + 0x20 + (ulong)uVar2 * 0x20 );
      iVar3 = ( uVar2 + 1 ) * 0x20;
   }

   if ((int)param_5 <= iVar3) {
      return;
   }

   lVar1 = (long)iVar3;
   WebPYuv444ToRgba4444_C(param_1 + lVar1, param_2 + lVar1, param_3 + lVar1, param_4 + iVar3 * 2, param_5 - iVar3);
   return;
}
void Yuv444ToArgb_SSE2(long param_1, long param_2, long param_3, long param_4, uint param_5) {
   long lVar1;
   uint uVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   if ((int)( param_5 & 0xffffffe0 ) < 1) {
      iVar3 = 0;
   }
 else {
      uVar2 = ( param_5 & 0xffffffe0 ) - 1 >> 5;
      lVar1 = param_1;
      lVar5 = param_2;
      lVar6 = param_4;
      lVar7 = param_3;
      do {
         lVar4 = lVar1 + 0x20;
         VP8YuvToArgb32_SSE2(lVar1, lVar5, lVar7, lVar6);
         lVar1 = lVar4;
         lVar5 = lVar5 + 0x20;
         lVar6 = lVar6 + 0x80;
         lVar7 = lVar7 + 0x20;
      }
 while ( lVar4 != param_1 + 0x20 + (ulong)uVar2 * 0x20 );
      iVar3 = ( uVar2 + 1 ) * 0x20;
   }

   if ((int)param_5 <= iVar3) {
      return;
   }

   lVar1 = (long)iVar3;
   WebPYuv444ToArgb_C(param_1 + lVar1, param_2 + lVar1, param_3 + lVar1, param_4 + iVar3 * 4, param_5 - iVar3);
   return;
}
void Yuv444ToBgr_SSE2(long param_1, long param_2, long param_3, long param_4, uint param_5) {
   long lVar1;
   uint uVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   if ((int)( param_5 & 0xffffffe0 ) < 1) {
      iVar3 = 0;
   }
 else {
      uVar2 = ( param_5 & 0xffffffe0 ) - 1 >> 5;
      lVar1 = param_1;
      lVar5 = param_2;
      lVar6 = param_4;
      lVar7 = param_3;
      do {
         lVar4 = lVar1 + 0x20;
         VP8YuvToBgr32_SSE2(lVar1, lVar5, lVar7, lVar6);
         lVar1 = lVar4;
         lVar5 = lVar5 + 0x20;
         lVar6 = lVar6 + 0x60;
         lVar7 = lVar7 + 0x20;
      }
 while ( lVar4 != param_1 + 0x20 + (ulong)uVar2 * 0x20 );
      iVar3 = ( uVar2 + 1 ) * 0x20;
   }

   if ((int)param_5 <= iVar3) {
      return;
   }

   lVar1 = (long)iVar3;
   WebPYuv444ToBgr_C(param_1 + lVar1, param_2 + lVar1, param_3 + lVar1, param_4 + iVar3 * 3, param_5 - iVar3);
   return;
}
void Yuv444ToRgb_SSE2(long param_1, long param_2, long param_3, long param_4, uint param_5) {
   long lVar1;
   uint uVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   if ((int)( param_5 & 0xffffffe0 ) < 1) {
      iVar3 = 0;
   }
 else {
      uVar2 = ( param_5 & 0xffffffe0 ) - 1 >> 5;
      lVar1 = param_1;
      lVar5 = param_2;
      lVar6 = param_4;
      lVar7 = param_3;
      do {
         lVar4 = lVar1 + 0x20;
         VP8YuvToRgb32_SSE2(lVar1, lVar5, lVar7, lVar6);
         lVar1 = lVar4;
         lVar5 = lVar5 + 0x20;
         lVar6 = lVar6 + 0x60;
         lVar7 = lVar7 + 0x20;
      }
 while ( lVar4 != param_1 + 0x20 + (ulong)uVar2 * 0x20 );
      iVar3 = ( uVar2 + 1 ) * 0x20;
   }

   if ((int)param_5 <= iVar3) {
      return;
   }

   lVar1 = (long)iVar3;
   WebPYuv444ToRgb_C(param_1 + lVar1, param_2 + lVar1, param_3 + lVar1, param_4 + iVar3 * 3, param_5 - iVar3);
   return;
}
void Yuv444ToBgra_SSE2(long param_1, long param_2, long param_3, long param_4, uint param_5) {
   long lVar1;
   uint uVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   if ((int)( param_5 & 0xffffffe0 ) < 1) {
      iVar3 = 0;
   }
 else {
      uVar2 = ( param_5 & 0xffffffe0 ) - 1 >> 5;
      lVar1 = param_1;
      lVar5 = param_2;
      lVar6 = param_4;
      lVar7 = param_3;
      do {
         lVar4 = lVar1 + 0x20;
         VP8YuvToBgra32_SSE2(lVar1, lVar5, lVar7, lVar6);
         lVar1 = lVar4;
         lVar5 = lVar5 + 0x20;
         lVar6 = lVar6 + 0x80;
         lVar7 = lVar7 + 0x20;
      }
 while ( lVar4 != param_1 + 0x20 + (ulong)uVar2 * 0x20 );
      iVar3 = ( uVar2 + 1 ) * 0x20;
   }

   if ((int)param_5 <= iVar3) {
      return;
   }

   lVar1 = (long)iVar3;
   WebPYuv444ToBgra_C(param_1 + lVar1, param_2 + lVar1, param_3 + lVar1, param_4 + iVar3 * 4, param_5 - iVar3);
   return;
}
void Yuv444ToRgba_SSE2(long param_1, long param_2, long param_3, long param_4, uint param_5) {
   long lVar1;
   uint uVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   if ((int)( param_5 & 0xffffffe0 ) < 1) {
      iVar3 = 0;
   }
 else {
      uVar2 = ( param_5 & 0xffffffe0 ) - 1 >> 5;
      lVar1 = param_1;
      lVar5 = param_2;
      lVar6 = param_4;
      lVar7 = param_3;
      do {
         lVar4 = lVar1 + 0x20;
         VP8YuvToRgba32_SSE2(lVar1, lVar5, lVar7, lVar6);
         lVar1 = lVar4;
         lVar5 = lVar5 + 0x20;
         lVar6 = lVar6 + 0x80;
         lVar7 = lVar7 + 0x20;
      }
 while ( lVar4 != param_1 + 0x20 + (ulong)uVar2 * 0x20 );
      iVar3 = ( uVar2 + 1 ) * 0x20;
   }

   if ((int)param_5 <= iVar3) {
      return;
   }

   lVar1 = (long)iVar3;
   WebPYuv444ToRgba_C(param_1 + lVar1, param_2 + lVar1, param_3 + lVar1, param_4 + iVar3 * 4, param_5 - iVar3);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void UpsampleRgba4444LinePair_SSE2(byte *param_1, byte *param_2, byte *param_3, byte *param_4, byte *param_5, byte *param_6, byte *param_7, byte *param_8, int param_9) {
   undefined1 *puVar1;
   undefined1 *puVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   byte bVar7;
   byte bVar8;
   int iVar9;
   ulong uVar10;
   byte bVar11;
   long lVar12;
   long lVar13;
   int iVar14;
   uint uVar15;
   int iVar16;
   ulong uVar17;
   size_t __n;
   int iVar18;
   undefined1 *__dest;
   int iVar19;
   undefined8 *puVar20;
   undefined1 *puVar21;
   uint uVar22;
   long in_FS_OFFSET;
   undefined1 auVar23[16];
   undefined1 uVar24;
   undefined1 uVar25;
   undefined1 uVar26;
   undefined1 uVar27;
   undefined1 uVar28;
   undefined1 uVar29;
   undefined1 uVar30;
   undefined1 uVar31;
   undefined1 uVar32;
   undefined1 uVar33;
   undefined1 uVar34;
   undefined1 uVar35;
   undefined1 uVar36;
   undefined1 uVar37;
   undefined1 uVar38;
   undefined1 uVar39;
   char cVar40;
   char cVar42;
   char cVar43;
   char cVar44;
   char cVar45;
   char cVar46;
   char cVar47;
   char cVar48;
   char cVar49;
   char cVar50;
   char cVar51;
   char cVar52;
   char cVar53;
   char cVar54;
   char cVar55;
   char cVar56;
   undefined1 auVar41[16];
   undefined1 auVar57[16];
   char cVar58;
   char cVar59;
   char cVar60;
   char cVar61;
   char cVar62;
   char cVar63;
   char cVar64;
   char cVar65;
   char cVar66;
   char cVar67;
   char cVar68;
   char cVar69;
   char cVar70;
   char cVar71;
   char cVar72;
   char cVar73;
   undefined1 auVar74[16];
   undefined1 auVar75[16];
   undefined1 auVar76[16];
   byte *local_2d0;
   byte *local_2c8;
   byte *local_2c0;
   byte *local_2b8;
   undefined1 local_258[32];
   undefined1 local_238[32];
   undefined8 local_218;
   undefined1 local_210;
   undefined1 uStack_20f;
   undefined1 uStack_20e;
   undefined1 uStack_20d;
   undefined1 uStack_20c;
   undefined1 uStack_20b;
   undefined1 uStack_20a;
   undefined1 uStack_209;
   undefined1 uStack_208;
   undefined1 uStack_207;
   undefined1 uStack_206;
   undefined1 uStack_205;
   undefined1 uStack_204;
   undefined1 uStack_203;
   undefined1 uStack_202;
   undefined1 uStack_201;
   undefined1 local_200;
   undefined1 uStack_1ff;
   undefined1 uStack_1fe;
   undefined1 uStack_1fd;
   undefined1 uStack_1fc;
   undefined1 uStack_1fb;
   undefined1 uStack_1fa;
   undefined1 uStack_1f9;
   undefined1 uStack_1f8;
   undefined1 uStack_1f7;
   undefined1 uStack_1f6;
   undefined1 uStack_1f5;
   undefined1 uStack_1f4;
   undefined1 uStack_1f3;
   undefined1 uStack_1f2;
   undefined1 uStack_1f1;
   undefined1 local_1f0;
   undefined1 uStack_1ef;
   undefined1 uStack_1ee;
   undefined1 uStack_1ed;
   undefined1 uStack_1ec;
   undefined1 uStack_1eb;
   undefined1 uStack_1ea;
   undefined1 uStack_1e9;
   undefined1 uStack_1e8;
   undefined1 uStack_1e7;
   undefined1 uStack_1e6;
   undefined1 uStack_1e5;
   undefined1 uStack_1e4;
   undefined1 uStack_1e3;
   undefined1 uStack_1e2;
   undefined1 uStack_1e1;
   undefined1 local_1e0;
   undefined1 uStack_1df;
   undefined1 uStack_1de;
   undefined1 uStack_1dd;
   undefined1 uStack_1dc;
   undefined1 uStack_1db;
   undefined1 uStack_1da;
   undefined1 uStack_1d9;
   undefined1 uStack_1d8;
   undefined1 uStack_1d7;
   undefined1 uStack_1d6;
   undefined1 uStack_1d5;
   undefined1 uStack_1d4;
   undefined1 uStack_1d3;
   undefined1 uStack_1d2;
   undefined1 uStack_1d1;
   undefined1 local_1d0;
   undefined1 uStack_1cf;
   undefined1 uStack_1ce;
   undefined1 uStack_1cd;
   undefined1 uStack_1cc;
   undefined1 uStack_1cb;
   undefined1 uStack_1ca;
   undefined1 uStack_1c9;
   undefined1 uStack_1c8;
   undefined1 uStack_1c7;
   undefined1 uStack_1c6;
   undefined1 uStack_1c5;
   undefined1 uStack_1c4;
   undefined1 uStack_1c3;
   undefined1 uStack_1c2;
   undefined1 uStack_1c1;
   undefined1 local_1c0;
   undefined1 uStack_1bf;
   undefined1 uStack_1be;
   undefined1 uStack_1bd;
   undefined1 uStack_1bc;
   undefined1 uStack_1bb;
   undefined1 uStack_1ba;
   undefined1 uStack_1b9;
   undefined1 uStack_1b8;
   undefined1 uStack_1b7;
   undefined1 uStack_1b6;
   undefined1 uStack_1b5;
   undefined1 uStack_1b4;
   undefined1 uStack_1b3;
   undefined1 uStack_1b2;
   undefined1 uStack_1b1;
   undefined1 local_1b0[16];
   undefined1 local_1a0;
   undefined1 uStack_19f;
   undefined1 uStack_19e;
   undefined1 uStack_19d;
   undefined1 uStack_19c;
   undefined1 uStack_19b;
   undefined1 uStack_19a;
   undefined1 uStack_199;
   undefined1 uStack_198;
   undefined1 uStack_197;
   undefined1 uStack_196;
   undefined1 uStack_195;
   undefined1 uStack_194;
   undefined1 uStack_193;
   undefined1 uStack_192;
   undefined1 uStack_191;
   undefined1 local_190[128];
   undefined1 local_110[128];
   undefined1 local_90[32];
   undefined1 local_70[48];
   long local_40;
   bVar11 = *param_6;
   iVar16 = (int)( ( uint ) * param_1 * 0x4a85 ) >> 8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar20 = &local_218;
   for (lVar12 = 0x39; lVar12 != 0; lVar12 = lVar12 + -1) {
      *puVar20 = 0;
      puVar20 = puVar20 + 1;
   }

   *(undefined2*)( (long)puVar20 + 4 ) = 0;
   bVar8 = *param_3;
   bVar7 = *param_4;
   *(undefined4*)puVar20 = 0;
   *(undefined1*)( (long)puVar20 + 6 ) = 0;
   iVar18 = ( (int)( (uint)bVar11 + (uint)bVar7 ) >> 1 ) + 1;
   iVar19 = ( (int)( ( uint ) * param_5 + (uint)bVar8 ) >> 1 ) + 1;
   iVar14 = (int)( (uint)bVar7 + iVar18 ) >> 1;
   iVar9 = (int)( (uint)bVar8 + iVar19 ) >> 1;
   uVar22 = iVar16 + -0x379a + ( iVar14 * 0x6625 >> 8 );
   if (uVar22 < 0x4000) {
      bVar11 = ( byte )((int)uVar22 >> 6);
   }
 else {
      bVar11 = ~(byte)((int)uVar22 >> 0x1f);
   }

   bVar11 = bVar11 & 0xf0;
   uVar22 = ( ( iVar16 - ( iVar9 * 0x1913 >> 8 ) ) - ( iVar14 * 0x3408 >> 8 ) ) + 0x2204;
   if (uVar22 < 0x4000) {
      bVar11 = bVar11 | ( byte )((int)uVar22 >> 10);
   }
 else if (-1 < (int)uVar22) {
      bVar11 = bVar11 | 0xf;
   }

   uVar22 = iVar16 + -0x4515 + ( iVar9 * 0x811a >> 8 );
   if (uVar22 < 0x4000) {
      bVar8 = ( byte )((int)uVar22 >> 6) | 0xf;
   }
 else {
      bVar8 = ( ( byte )((int)uVar22 >> 0x1f) & 0x10 ) - 1;
   }

   *param_7 = bVar11;
   param_7[1] = bVar8;
   if (param_2 != (byte*)0x0) {
      iVar9 = (int)( ( uint ) * param_6 + iVar18 ) >> 1;
      iVar16 = (int)( ( uint ) * param_5 + iVar19 ) >> 1;
      iVar14 = (int)( ( uint ) * param_2 * 0x4a85 ) >> 8;
      uVar22 = iVar14 + -0x379a + ( iVar9 * 0x6625 >> 8 );
      if (uVar22 < 0x4000) {
         bVar11 = ( byte )((int)uVar22 >> 6);
      }
 else {
         bVar11 = ~(byte)((int)uVar22 >> 0x1f);
      }

      bVar11 = bVar11 & 0xf0;
      uVar22 = ( ( iVar14 - ( iVar16 * 0x1913 >> 8 ) ) - ( iVar9 * 0x3408 >> 8 ) ) + 0x2204;
      if (uVar22 < 0x4000) {
         bVar11 = bVar11 | ( byte )((int)uVar22 >> 10);
      }
 else if (-1 < (int)uVar22) {
         bVar11 = bVar11 | 0xf;
      }

      uVar22 = iVar14 + -0x4515 + ( iVar16 * 0x811a >> 8 );
      if (uVar22 < 0x4000) {
         bVar8 = ( byte )((int)uVar22 >> 6) | 0xf;
      }
 else {
         bVar8 = ( ( byte )((int)uVar22 >> 0x1f) & 0x10 ) - 1;
      }

      *param_8 = bVar11;
      param_8[1] = bVar8;
   }

   if (param_9 < 0x22) {
      if (param_9 < 2) goto LAB_00100f30;
      iVar16 = 1;
      iVar9 = 0;
   }
 else {
      lVar12 = 0;
      local_2c8 = param_1 + 1;
      local_2d0 = param_7 + 2;
      local_2b8 = param_2 + 1;
      local_2c0 = param_8 + 2;
      uVar15 = param_9 - 0x22U >> 5;
      uVar22 = uVar15 + 1;
      do {
         auVar3 = *(undefined1(*) [16])( param_3 + lVar12 + 1 );
         auVar4 = *(undefined1(*) [16])( param_3 + lVar12 );
         auVar5 = *(undefined1(*) [16])( param_5 + lVar12 );
         auVar6 = *(undefined1(*) [16])( param_5 + lVar12 + 1 );
         for (int i = 0; i < 16; i++) {
            auVar76[i] = pavgb(auVar3[i], auVar5[i]);
         }

         for (int i = 0; i < 16; i++) {
            auVar23[i] = pavgb(auVar4[i], auVar6[i]);
         }

         auVar75 = auVar76 ^ auVar23;
         cVar40 = pavgb(auVar23[0], auVar76[0]);
         cVar42 = pavgb(auVar23[1], auVar76[1]);
         cVar43 = pavgb(auVar23[2], auVar76[2]);
         cVar44 = pavgb(auVar23[3], auVar76[3]);
         cVar45 = pavgb(auVar23[4], auVar76[4]);
         cVar46 = pavgb(auVar23[5], auVar76[5]);
         cVar47 = pavgb(auVar23[6], auVar76[6]);
         cVar48 = pavgb(auVar23[7], auVar76[7]);
         cVar49 = pavgb(auVar23[8], auVar76[8]);
         cVar50 = pavgb(auVar23[9], auVar76[9]);
         cVar51 = pavgb(auVar23[10], auVar76[10]);
         cVar52 = pavgb(auVar23[0xb], auVar76[0xb]);
         cVar53 = pavgb(auVar23[0xc], auVar76[0xc]);
         cVar54 = pavgb(auVar23[0xd], auVar76[0xd]);
         cVar55 = pavgb(auVar23[0xe], auVar76[0xe]);
         cVar56 = pavgb(auVar23[0xf], auVar76[0xf]);
         auVar57 = ( auVar3 ^ auVar5 | auVar4 ^ auVar6 | auVar75 ) & __LC0;
         auVar41[0] = cVar40 - auVar57[0];
         auVar41[1] = cVar42 - auVar57[1];
         auVar41[2] = cVar43 - auVar57[2];
         auVar41[3] = cVar44 - auVar57[3];
         auVar41[4] = cVar45 - auVar57[4];
         auVar41[5] = cVar46 - auVar57[5];
         auVar41[6] = cVar47 - auVar57[6];
         auVar41[7] = cVar48 - auVar57[7];
         auVar41[8] = cVar49 - auVar57[8];
         auVar41[9] = cVar50 - auVar57[9];
         auVar41[10] = cVar51 - auVar57[10];
         auVar41[0xb] = cVar52 - auVar57[0xb];
         auVar41[0xc] = cVar53 - auVar57[0xc];
         auVar41[0xd] = cVar54 - auVar57[0xd];
         auVar41[0xe] = cVar55 - auVar57[0xe];
         auVar41[0xf] = cVar56 - auVar57[0xf];
         cVar40 = pavgb(auVar41[0], auVar76[0]);
         cVar42 = pavgb(auVar41[1], auVar76[1]);
         cVar43 = pavgb(auVar41[2], auVar76[2]);
         cVar44 = pavgb(auVar41[3], auVar76[3]);
         cVar45 = pavgb(auVar41[4], auVar76[4]);
         cVar46 = pavgb(auVar41[5], auVar76[5]);
         cVar47 = pavgb(auVar41[6], auVar76[6]);
         cVar48 = pavgb(auVar41[7], auVar76[7]);
         cVar49 = pavgb(auVar41[8], auVar76[8]);
         cVar50 = pavgb(auVar41[9], auVar76[9]);
         cVar51 = pavgb(auVar41[10], auVar76[10]);
         cVar52 = pavgb(auVar41[0xb], auVar76[0xb]);
         cVar53 = pavgb(auVar41[0xc], auVar76[0xc]);
         cVar54 = pavgb(auVar41[0xd], auVar76[0xd]);
         cVar55 = pavgb(auVar41[0xe], auVar76[0xe]);
         cVar56 = pavgb(auVar41[0xf], auVar76[0xf]);
         cVar58 = pavgb(auVar41[0], auVar23[0]);
         cVar59 = pavgb(auVar41[1], auVar23[1]);
         cVar60 = pavgb(auVar41[2], auVar23[2]);
         cVar61 = pavgb(auVar41[3], auVar23[3]);
         cVar62 = pavgb(auVar41[4], auVar23[4]);
         cVar63 = pavgb(auVar41[5], auVar23[5]);
         cVar64 = pavgb(auVar41[6], auVar23[6]);
         cVar65 = pavgb(auVar41[7], auVar23[7]);
         cVar66 = pavgb(auVar41[8], auVar23[8]);
         cVar67 = pavgb(auVar41[9], auVar23[9]);
         cVar68 = pavgb(auVar41[10], auVar23[10]);
         cVar69 = pavgb(auVar41[0xb], auVar23[0xb]);
         cVar70 = pavgb(auVar41[0xc], auVar23[0xc]);
         cVar71 = pavgb(auVar41[0xd], auVar23[0xd]);
         cVar72 = pavgb(auVar41[0xe], auVar23[0xe]);
         cVar73 = pavgb(auVar41[0xf], auVar23[0xf]);
         auVar57 = ( auVar76 ^ auVar41 | ( auVar3 ^ auVar5 ) & auVar75 ) & __LC0;
         cVar40 = cVar40 - auVar57[0];
         cVar42 = cVar42 - auVar57[1];
         cVar43 = cVar43 - auVar57[2];
         cVar44 = cVar44 - auVar57[3];
         cVar45 = cVar45 - auVar57[4];
         cVar46 = cVar46 - auVar57[5];
         cVar47 = cVar47 - auVar57[6];
         cVar48 = cVar48 - auVar57[7];
         cVar49 = cVar49 - auVar57[8];
         cVar50 = cVar50 - auVar57[9];
         cVar51 = cVar51 - auVar57[10];
         cVar52 = cVar52 - auVar57[0xb];
         cVar53 = cVar53 - auVar57[0xc];
         cVar54 = cVar54 - auVar57[0xd];
         cVar55 = cVar55 - auVar57[0xe];
         cVar56 = cVar56 - auVar57[0xf];
         auVar23 = ( auVar23 ^ auVar41 | ( auVar4 ^ auVar6 ) & auVar75 ) & __LC0;
         cVar58 = cVar58 - auVar23[0];
         cVar59 = cVar59 - auVar23[1];
         cVar60 = cVar60 - auVar23[2];
         cVar61 = cVar61 - auVar23[3];
         cVar62 = cVar62 - auVar23[4];
         cVar63 = cVar63 - auVar23[5];
         cVar64 = cVar64 - auVar23[6];
         cVar65 = cVar65 - auVar23[7];
         cVar66 = cVar66 - auVar23[8];
         cVar67 = cVar67 - auVar23[9];
         cVar68 = cVar68 - auVar23[10];
         cVar69 = cVar69 - auVar23[0xb];
         cVar70 = cVar70 - auVar23[0xc];
         cVar71 = cVar71 - auVar23[0xd];
         cVar72 = cVar72 - auVar23[0xe];
         cVar73 = cVar73 - auVar23[0xf];
         local_210 = pavgb(auVar4[0], cVar40);
         uStack_20e = pavgb(auVar4[1], cVar42);
         uStack_20c = pavgb(auVar4[2], cVar43);
         uStack_20a = pavgb(auVar4[3], cVar44);
         uStack_208 = pavgb(auVar4[4], cVar45);
         uStack_206 = pavgb(auVar4[5], cVar46);
         uStack_204 = pavgb(auVar4[6], cVar47);
         uStack_202 = pavgb(auVar4[7], cVar48);
         local_200 = pavgb(auVar4[8], cVar49);
         uStack_1fe = pavgb(auVar4[9], cVar50);
         uStack_1fc = pavgb(auVar4[10], cVar51);
         uStack_1fa = pavgb(auVar4[0xb], cVar52);
         uStack_1f8 = pavgb(auVar4[0xc], cVar53);
         uStack_1f6 = pavgb(auVar4[0xd], cVar54);
         uStack_1f4 = pavgb(auVar4[0xe], cVar55);
         uStack_1f2 = pavgb(auVar4[0xf], cVar56);
         uStack_20f = pavgb(auVar3[0], cVar58);
         uStack_20d = pavgb(auVar3[1], cVar59);
         uStack_20b = pavgb(auVar3[2], cVar60);
         uStack_209 = pavgb(auVar3[3], cVar61);
         uStack_207 = pavgb(auVar3[4], cVar62);
         uStack_205 = pavgb(auVar3[5], cVar63);
         uStack_203 = pavgb(auVar3[6], cVar64);
         uStack_201 = pavgb(auVar3[7], cVar65);
         uStack_1ff = pavgb(auVar3[8], cVar66);
         uStack_1fd = pavgb(auVar3[9], cVar67);
         uStack_1fb = pavgb(auVar3[10], cVar68);
         uStack_1f9 = pavgb(auVar3[0xb], cVar69);
         uStack_1f7 = pavgb(auVar3[0xc], cVar70);
         uStack_1f5 = pavgb(auVar3[0xd], cVar71);
         uStack_1f3 = pavgb(auVar3[0xe], cVar72);
         uStack_1f1 = pavgb(auVar3[0xf], cVar73);
         local_1d0 = pavgb(auVar5[0], cVar58);
         uStack_1ce = pavgb(auVar5[1], cVar59);
         uStack_1cc = pavgb(auVar5[2], cVar60);
         uStack_1ca = pavgb(auVar5[3], cVar61);
         uStack_1c8 = pavgb(auVar5[4], cVar62);
         uStack_1c6 = pavgb(auVar5[5], cVar63);
         uStack_1c4 = pavgb(auVar5[6], cVar64);
         uStack_1c2 = pavgb(auVar5[7], cVar65);
         local_1c0 = pavgb(auVar5[8], cVar66);
         uStack_1be = pavgb(auVar5[9], cVar67);
         uStack_1bc = pavgb(auVar5[10], cVar68);
         uStack_1ba = pavgb(auVar5[0xb], cVar69);
         uStack_1b8 = pavgb(auVar5[0xc], cVar70);
         uStack_1b6 = pavgb(auVar5[0xd], cVar71);
         uStack_1b4 = pavgb(auVar5[0xe], cVar72);
         uStack_1b2 = pavgb(auVar5[0xf], cVar73);
         uStack_1cf = pavgb(auVar6[0], cVar40);
         uStack_1cd = pavgb(auVar6[1], cVar42);
         uStack_1cb = pavgb(auVar6[2], cVar43);
         uStack_1c9 = pavgb(auVar6[3], cVar44);
         uStack_1c7 = pavgb(auVar6[4], cVar45);
         uStack_1c5 = pavgb(auVar6[5], cVar46);
         uStack_1c3 = pavgb(auVar6[6], cVar47);
         uStack_1c1 = pavgb(auVar6[7], cVar48);
         uStack_1bf = pavgb(auVar6[8], cVar49);
         uStack_1bd = pavgb(auVar6[9], cVar50);
         uStack_1bb = pavgb(auVar6[10], cVar51);
         uStack_1b9 = pavgb(auVar6[0xb], cVar52);
         uStack_1b7 = pavgb(auVar6[0xc], cVar53);
         uStack_1b5 = pavgb(auVar6[0xd], cVar54);
         uStack_1b3 = pavgb(auVar6[0xe], cVar55);
         uStack_1b1 = pavgb(auVar6[0xf], cVar56);
         auVar3 = *(undefined1(*) [16])( param_4 + lVar12 + 1 );
         auVar4 = *(undefined1(*) [16])( param_4 + lVar12 );
         auVar5 = *(undefined1(*) [16])( param_6 + lVar12 );
         auVar6 = *(undefined1(*) [16])( param_6 + lVar12 + 1 );
         for (int i = 0; i < 16; i++) {
            auVar57[i] = pavgb(auVar3[i], auVar5[i]);
         }

         for (int i = 0; i < 16; i++) {
            auVar75[i] = pavgb(auVar4[i], auVar6[i]);
         }

         auVar76 = auVar57 ^ auVar75;
         cVar40 = pavgb(auVar75[0], auVar57[0]);
         cVar42 = pavgb(auVar75[1], auVar57[1]);
         cVar43 = pavgb(auVar75[2], auVar57[2]);
         cVar44 = pavgb(auVar75[3], auVar57[3]);
         cVar45 = pavgb(auVar75[4], auVar57[4]);
         cVar46 = pavgb(auVar75[5], auVar57[5]);
         cVar47 = pavgb(auVar75[6], auVar57[6]);
         cVar48 = pavgb(auVar75[7], auVar57[7]);
         cVar49 = pavgb(auVar75[8], auVar57[8]);
         cVar50 = pavgb(auVar75[9], auVar57[9]);
         cVar51 = pavgb(auVar75[10], auVar57[10]);
         cVar52 = pavgb(auVar75[0xb], auVar57[0xb]);
         cVar53 = pavgb(auVar75[0xc], auVar57[0xc]);
         cVar54 = pavgb(auVar75[0xd], auVar57[0xd]);
         cVar55 = pavgb(auVar75[0xe], auVar57[0xe]);
         cVar56 = pavgb(auVar75[0xf], auVar57[0xf]);
         auVar23 = ( auVar3 ^ auVar5 | auVar4 ^ auVar6 | auVar76 ) & __LC0;
         auVar74[0] = cVar40 - auVar23[0];
         auVar74[1] = cVar42 - auVar23[1];
         auVar74[2] = cVar43 - auVar23[2];
         auVar74[3] = cVar44 - auVar23[3];
         auVar74[4] = cVar45 - auVar23[4];
         auVar74[5] = cVar46 - auVar23[5];
         auVar74[6] = cVar47 - auVar23[6];
         auVar74[7] = cVar48 - auVar23[7];
         auVar74[8] = cVar49 - auVar23[8];
         auVar74[9] = cVar50 - auVar23[9];
         auVar74[10] = cVar51 - auVar23[10];
         auVar74[0xb] = cVar52 - auVar23[0xb];
         auVar74[0xc] = cVar53 - auVar23[0xc];
         auVar74[0xd] = cVar54 - auVar23[0xd];
         auVar74[0xe] = cVar55 - auVar23[0xe];
         auVar74[0xf] = cVar56 - auVar23[0xf];
         cVar58 = pavgb(auVar74[0], auVar57[0]);
         cVar59 = pavgb(auVar74[1], auVar57[1]);
         cVar60 = pavgb(auVar74[2], auVar57[2]);
         cVar61 = pavgb(auVar74[3], auVar57[3]);
         cVar62 = pavgb(auVar74[4], auVar57[4]);
         cVar63 = pavgb(auVar74[5], auVar57[5]);
         cVar64 = pavgb(auVar74[6], auVar57[6]);
         cVar65 = pavgb(auVar74[7], auVar57[7]);
         cVar66 = pavgb(auVar74[8], auVar57[8]);
         cVar67 = pavgb(auVar74[9], auVar57[9]);
         cVar68 = pavgb(auVar74[10], auVar57[10]);
         cVar69 = pavgb(auVar74[0xb], auVar57[0xb]);
         cVar70 = pavgb(auVar74[0xc], auVar57[0xc]);
         cVar71 = pavgb(auVar74[0xd], auVar57[0xd]);
         cVar72 = pavgb(auVar74[0xe], auVar57[0xe]);
         cVar73 = pavgb(auVar74[0xf], auVar57[0xf]);
         cVar40 = pavgb(auVar74[0], auVar75[0]);
         cVar42 = pavgb(auVar74[1], auVar75[1]);
         cVar43 = pavgb(auVar74[2], auVar75[2]);
         cVar44 = pavgb(auVar74[3], auVar75[3]);
         cVar45 = pavgb(auVar74[4], auVar75[4]);
         cVar46 = pavgb(auVar74[5], auVar75[5]);
         cVar47 = pavgb(auVar74[6], auVar75[6]);
         cVar48 = pavgb(auVar74[7], auVar75[7]);
         cVar49 = pavgb(auVar74[8], auVar75[8]);
         cVar50 = pavgb(auVar74[9], auVar75[9]);
         cVar51 = pavgb(auVar74[10], auVar75[10]);
         cVar52 = pavgb(auVar74[0xb], auVar75[0xb]);
         cVar53 = pavgb(auVar74[0xc], auVar75[0xc]);
         cVar54 = pavgb(auVar74[0xd], auVar75[0xd]);
         cVar55 = pavgb(auVar74[0xe], auVar75[0xe]);
         cVar56 = pavgb(auVar74[0xf], auVar75[0xf]);
         auVar23 = ( auVar57 ^ auVar74 | ( auVar3 ^ auVar5 ) & auVar76 ) & __LC0;
         cVar58 = cVar58 - auVar23[0];
         cVar59 = cVar59 - auVar23[1];
         cVar60 = cVar60 - auVar23[2];
         cVar61 = cVar61 - auVar23[3];
         cVar62 = cVar62 - auVar23[4];
         cVar63 = cVar63 - auVar23[5];
         cVar64 = cVar64 - auVar23[6];
         cVar65 = cVar65 - auVar23[7];
         cVar66 = cVar66 - auVar23[8];
         cVar67 = cVar67 - auVar23[9];
         cVar68 = cVar68 - auVar23[10];
         cVar69 = cVar69 - auVar23[0xb];
         cVar70 = cVar70 - auVar23[0xc];
         cVar71 = cVar71 - auVar23[0xd];
         cVar72 = cVar72 - auVar23[0xe];
         cVar73 = cVar73 - auVar23[0xf];
         auVar23 = ( ( auVar4 ^ auVar6 ) & auVar76 | auVar75 ^ auVar74 ) & __LC0;
         local_1f0 = pavgb(auVar4[0], cVar58);
         uStack_1ee = pavgb(auVar4[1], cVar59);
         uStack_1ec = pavgb(auVar4[2], cVar60);
         uStack_1ea = pavgb(auVar4[3], cVar61);
         uStack_1e8 = pavgb(auVar4[4], cVar62);
         uStack_1e6 = pavgb(auVar4[5], cVar63);
         uStack_1e4 = pavgb(auVar4[6], cVar64);
         uStack_1e2 = pavgb(auVar4[7], cVar65);
         local_1e0 = pavgb(auVar4[8], cVar66);
         uStack_1de = pavgb(auVar4[9], cVar67);
         uStack_1dc = pavgb(auVar4[10], cVar68);
         uStack_1da = pavgb(auVar4[0xb], cVar69);
         uStack_1d8 = pavgb(auVar4[0xc], cVar70);
         uStack_1d6 = pavgb(auVar4[0xd], cVar71);
         uStack_1d4 = pavgb(auVar4[0xe], cVar72);
         uStack_1d2 = pavgb(auVar4[0xf], cVar73);
         cVar40 = cVar40 - auVar23[0];
         cVar42 = cVar42 - auVar23[1];
         cVar43 = cVar43 - auVar23[2];
         cVar44 = cVar44 - auVar23[3];
         cVar45 = cVar45 - auVar23[4];
         cVar46 = cVar46 - auVar23[5];
         cVar47 = cVar47 - auVar23[6];
         cVar48 = cVar48 - auVar23[7];
         cVar49 = cVar49 - auVar23[8];
         cVar50 = cVar50 - auVar23[9];
         cVar51 = cVar51 - auVar23[10];
         cVar52 = cVar52 - auVar23[0xb];
         cVar53 = cVar53 - auVar23[0xc];
         cVar54 = cVar54 - auVar23[0xd];
         cVar55 = cVar55 - auVar23[0xe];
         cVar56 = cVar56 - auVar23[0xf];
         uStack_1ef = pavgb(auVar3[0], cVar40);
         uStack_1ed = pavgb(auVar3[1], cVar42);
         uStack_1eb = pavgb(auVar3[2], cVar43);
         uStack_1e9 = pavgb(auVar3[3], cVar44);
         uStack_1e7 = pavgb(auVar3[4], cVar45);
         uStack_1e5 = pavgb(auVar3[5], cVar46);
         uStack_1e3 = pavgb(auVar3[6], cVar47);
         uStack_1e1 = pavgb(auVar3[7], cVar48);
         uStack_1df = pavgb(auVar3[8], cVar49);
         uStack_1dd = pavgb(auVar3[9], cVar50);
         uStack_1db = pavgb(auVar3[10], cVar51);
         uStack_1d9 = pavgb(auVar3[0xb], cVar52);
         uStack_1d7 = pavgb(auVar3[0xc], cVar53);
         uStack_1d5 = pavgb(auVar3[0xd], cVar54);
         uStack_1d3 = pavgb(auVar3[0xe], cVar55);
         uStack_1d1 = pavgb(auVar3[0xf], cVar56);
         uVar24 = pavgb(auVar5[0], cVar40);
         uVar25 = pavgb(auVar5[1], cVar42);
         uVar26 = pavgb(auVar5[2], cVar43);
         uVar27 = pavgb(auVar5[3], cVar44);
         uVar28 = pavgb(auVar5[4], cVar45);
         uVar29 = pavgb(auVar5[5], cVar46);
         uVar30 = pavgb(auVar5[6], cVar47);
         uVar31 = pavgb(auVar5[7], cVar48);
         local_1a0 = pavgb(auVar5[8], cVar49);
         uStack_19e = pavgb(auVar5[9], cVar50);
         uStack_19c = pavgb(auVar5[10], cVar51);
         uStack_19a = pavgb(auVar5[0xb], cVar52);
         uStack_198 = pavgb(auVar5[0xc], cVar53);
         uStack_196 = pavgb(auVar5[0xd], cVar54);
         uStack_194 = pavgb(auVar5[0xe], cVar55);
         uStack_192 = pavgb(auVar5[0xf], cVar56);
         uVar32 = pavgb(auVar6[0], cVar58);
         uVar33 = pavgb(auVar6[1], cVar59);
         uVar34 = pavgb(auVar6[2], cVar60);
         uVar35 = pavgb(auVar6[3], cVar61);
         uVar36 = pavgb(auVar6[4], cVar62);
         uVar37 = pavgb(auVar6[5], cVar63);
         uVar38 = pavgb(auVar6[6], cVar64);
         uVar39 = pavgb(auVar6[7], cVar65);
         uStack_19f = pavgb(auVar6[8], cVar66);
         uStack_19d = pavgb(auVar6[9], cVar67);
         uStack_19b = pavgb(auVar6[10], cVar68);
         uStack_199 = pavgb(auVar6[0xb], cVar69);
         uStack_197 = pavgb(auVar6[0xc], cVar70);
         uStack_195 = pavgb(auVar6[0xd], cVar71);
         uStack_193 = pavgb(auVar6[0xe], cVar72);
         uStack_191 = pavgb(auVar6[0xf], cVar73);
         local_1b0._8_8_ = ( undefined8 )(CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar39, uVar31), uVar38), uVar30), uVar37), uVar29), uVar36), CONCAT11(uVar28, uVar31)) >> 8);
         local_1b0[7] = uVar35;
         local_1b0[6] = uVar27;
         local_1b0[5] = uVar34;
         local_1b0[4] = uVar26;
         local_1b0[3] = uVar33;
         local_1b0[2] = uVar25;
         local_1b0[1] = uVar32;
         local_1b0[0] = uVar24;
         VP8YuvToRgba444432_SSE2(local_2c8, &local_210, &local_1f0, local_2d0);
         if (param_2 != (byte*)0x0) {
            VP8YuvToRgba444432_SSE2(local_2b8, &local_1d0, local_1b0, local_2c0);
         }

         local_2c8 = local_2c8 + 0x20;
         lVar12 = lVar12 + 0x10;
         local_2d0 = local_2d0 + 0x40;
         local_2b8 = local_2b8 + 0x20;
         local_2c0 = local_2c0 + 0x40;
      }
 while ( (ulong)uVar22 << 4 != lVar12 );
      iVar9 = uVar22 * 0x10;
      iVar16 = uVar15 * 0x20 + 0x21;
   }

   puVar21 = local_258;
   iVar14 = ( param_9 + 1 >> 1 ) - ( iVar16 >> 1 );
   uVar17 = (ulong)iVar14;
   __dest = (undefined1*)0x0;
   if (param_2 != (byte*)0x0) {
      __dest = local_70;
   }

   __memcpy_chk(puVar21, param_3 + iVar9, uVar17, 0x11);
   __memcpy_chk(local_238, param_5 + iVar9, uVar17, 0x11);
   iVar18 = iVar14 + -1;
   lVar12 = (long)( 0x11 - iVar14 );
   puVar1 = puVar21 + uVar17;
   uVar10 = 0x11;
   if (0x10 < uVar17) {
      uVar10 = uVar17;
   }

   lVar13 = uVar10 - uVar17;
   __memset_chk(puVar1, local_258[iVar18], lVar12);
   puVar2 = local_238 + uVar17;
   __memset_chk(puVar2, local_238[iVar18], lVar12, lVar13);
   Upsample32Pixels_SSE2(puVar21, local_238, &local_210, 0x11);
   __memcpy_chk();
   __memcpy_chk(local_238, param_6 + iVar9, uVar17, 0x11);
   __memset_chk(puVar1, local_258[iVar18], lVar12, lVar13);
   __memset_chk(puVar2, local_238[iVar18], lVar12, lVar13);
   Upsample32Pixels_SSE2(puVar21, local_238, &local_1f0);
   param_9 = param_9 - iVar16;
   __n = (size_t)( param_9 * 2 );
   memcpy(local_90, param_1 + iVar16, (long)param_9);
   param_7 = param_7 + iVar16 * 2;
   if (param_2 == (byte*)0x0) {
      VP8YuvToRgba444432_SSE2(local_90, &local_210, &local_1f0, local_190);
      if (__dest == (undefined1*)0x0) {
         memcpy(param_7, local_190, __n);
      }
 else {
         VP8YuvToRgba444432_SSE2(__dest, &local_1d0, local_1b0, local_110);
         memcpy(param_7, local_190, __n);
      }

   }
 else {
      memcpy(__dest, param_2 + iVar16, (long)param_9);
      VP8YuvToRgba444432_SSE2(local_90, &local_210, &local_1f0, local_190);
      VP8YuvToRgba444432_SSE2(__dest, &local_1d0, local_1b0, local_110);
      memcpy(param_7, local_190, __n);
      memcpy(param_8 + iVar16 * 2, local_110, __n);
   }

   LAB_00100f30:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void UpsampleRgb565LinePair_SSE2(byte *param_1, byte *param_2, byte *param_3, byte *param_4, byte *param_5, byte *param_6, byte *param_7, byte *param_8, int param_9) {
   undefined1 *puVar1;
   undefined1 *puVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   byte bVar7;
   int iVar8;
   ulong uVar9;
   byte bVar10;
   long lVar11;
   long lVar12;
   byte bVar13;
   int iVar14;
   uint uVar15;
   int iVar16;
   ulong uVar17;
   size_t __n;
   int iVar18;
   undefined1 *__dest;
   int iVar19;
   undefined8 *puVar20;
   undefined1 *puVar21;
   uint uVar22;
   long in_FS_OFFSET;
   undefined1 auVar23[16];
   undefined1 uVar24;
   undefined1 uVar25;
   undefined1 uVar26;
   undefined1 uVar27;
   undefined1 uVar28;
   undefined1 uVar29;
   undefined1 uVar30;
   undefined1 uVar31;
   undefined1 uVar32;
   undefined1 uVar33;
   undefined1 uVar34;
   undefined1 uVar35;
   undefined1 uVar36;
   undefined1 uVar37;
   undefined1 uVar38;
   undefined1 uVar39;
   char cVar40;
   char cVar42;
   char cVar43;
   char cVar44;
   char cVar45;
   char cVar46;
   char cVar47;
   char cVar48;
   char cVar49;
   char cVar50;
   char cVar51;
   char cVar52;
   char cVar53;
   char cVar54;
   char cVar55;
   char cVar56;
   undefined1 auVar41[16];
   undefined1 auVar57[16];
   char cVar58;
   char cVar59;
   char cVar60;
   char cVar61;
   char cVar62;
   char cVar63;
   char cVar64;
   char cVar65;
   char cVar66;
   char cVar67;
   char cVar68;
   char cVar69;
   char cVar70;
   char cVar71;
   char cVar72;
   char cVar73;
   undefined1 auVar74[16];
   undefined1 auVar75[16];
   undefined1 auVar76[16];
   byte *local_2d0;
   byte *local_2c8;
   byte *local_2c0;
   byte *local_2b8;
   undefined1 local_258[32];
   undefined1 local_238[32];
   undefined8 local_218;
   undefined1 local_210;
   undefined1 uStack_20f;
   undefined1 uStack_20e;
   undefined1 uStack_20d;
   undefined1 uStack_20c;
   undefined1 uStack_20b;
   undefined1 uStack_20a;
   undefined1 uStack_209;
   undefined1 uStack_208;
   undefined1 uStack_207;
   undefined1 uStack_206;
   undefined1 uStack_205;
   undefined1 uStack_204;
   undefined1 uStack_203;
   undefined1 uStack_202;
   undefined1 uStack_201;
   undefined1 local_200;
   undefined1 uStack_1ff;
   undefined1 uStack_1fe;
   undefined1 uStack_1fd;
   undefined1 uStack_1fc;
   undefined1 uStack_1fb;
   undefined1 uStack_1fa;
   undefined1 uStack_1f9;
   undefined1 uStack_1f8;
   undefined1 uStack_1f7;
   undefined1 uStack_1f6;
   undefined1 uStack_1f5;
   undefined1 uStack_1f4;
   undefined1 uStack_1f3;
   undefined1 uStack_1f2;
   undefined1 uStack_1f1;
   undefined1 local_1f0;
   undefined1 uStack_1ef;
   undefined1 uStack_1ee;
   undefined1 uStack_1ed;
   undefined1 uStack_1ec;
   undefined1 uStack_1eb;
   undefined1 uStack_1ea;
   undefined1 uStack_1e9;
   undefined1 uStack_1e8;
   undefined1 uStack_1e7;
   undefined1 uStack_1e6;
   undefined1 uStack_1e5;
   undefined1 uStack_1e4;
   undefined1 uStack_1e3;
   undefined1 uStack_1e2;
   undefined1 uStack_1e1;
   undefined1 local_1e0;
   undefined1 uStack_1df;
   undefined1 uStack_1de;
   undefined1 uStack_1dd;
   undefined1 uStack_1dc;
   undefined1 uStack_1db;
   undefined1 uStack_1da;
   undefined1 uStack_1d9;
   undefined1 uStack_1d8;
   undefined1 uStack_1d7;
   undefined1 uStack_1d6;
   undefined1 uStack_1d5;
   undefined1 uStack_1d4;
   undefined1 uStack_1d3;
   undefined1 uStack_1d2;
   undefined1 uStack_1d1;
   undefined1 local_1d0;
   undefined1 uStack_1cf;
   undefined1 uStack_1ce;
   undefined1 uStack_1cd;
   undefined1 uStack_1cc;
   undefined1 uStack_1cb;
   undefined1 uStack_1ca;
   undefined1 uStack_1c9;
   undefined1 uStack_1c8;
   undefined1 uStack_1c7;
   undefined1 uStack_1c6;
   undefined1 uStack_1c5;
   undefined1 uStack_1c4;
   undefined1 uStack_1c3;
   undefined1 uStack_1c2;
   undefined1 uStack_1c1;
   undefined1 local_1c0;
   undefined1 uStack_1bf;
   undefined1 uStack_1be;
   undefined1 uStack_1bd;
   undefined1 uStack_1bc;
   undefined1 uStack_1bb;
   undefined1 uStack_1ba;
   undefined1 uStack_1b9;
   undefined1 uStack_1b8;
   undefined1 uStack_1b7;
   undefined1 uStack_1b6;
   undefined1 uStack_1b5;
   undefined1 uStack_1b4;
   undefined1 uStack_1b3;
   undefined1 uStack_1b2;
   undefined1 uStack_1b1;
   undefined1 local_1b0[16];
   undefined1 local_1a0;
   undefined1 uStack_19f;
   undefined1 uStack_19e;
   undefined1 uStack_19d;
   undefined1 uStack_19c;
   undefined1 uStack_19b;
   undefined1 uStack_19a;
   undefined1 uStack_199;
   undefined1 uStack_198;
   undefined1 uStack_197;
   undefined1 uStack_196;
   undefined1 uStack_195;
   undefined1 uStack_194;
   undefined1 uStack_193;
   undefined1 uStack_192;
   undefined1 uStack_191;
   undefined1 local_190[128];
   undefined1 local_110[128];
   undefined1 local_90[32];
   undefined1 local_70[48];
   long local_40;
   bVar10 = *param_6;
   iVar16 = (int)( ( uint ) * param_1 * 0x4a85 ) >> 8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar20 = &local_218;
   for (lVar11 = 0x39; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar20 = 0;
      puVar20 = puVar20 + 1;
   }

   *(undefined2*)( (long)puVar20 + 4 ) = 0;
   bVar13 = *param_3;
   bVar7 = *param_4;
   *(undefined4*)puVar20 = 0;
   *(undefined1*)( (long)puVar20 + 6 ) = 0;
   iVar18 = ( (int)( (uint)bVar10 + (uint)bVar7 ) >> 1 ) + 1;
   iVar19 = ( (int)( ( uint ) * param_5 + (uint)bVar13 ) >> 1 ) + 1;
   iVar14 = (int)( (uint)bVar7 + iVar18 ) >> 1;
   iVar8 = (int)( (uint)bVar13 + iVar19 ) >> 1;
   uVar22 = iVar16 + -0x379a + ( iVar14 * 0x6625 >> 8 );
   if (uVar22 < 0x4000) {
      bVar10 = ( byte )((int)uVar22 >> 6);
   }
 else {
      bVar10 = ~(byte)((int)uVar22 >> 0x1f);
   }

   bVar10 = bVar10 & 0xf8;
   uVar22 = ( ( iVar16 - ( iVar8 * 0x1913 >> 8 ) ) - ( iVar14 * 0x3408 >> 8 ) ) + 0x2204;
   if (uVar22 < 0x4000) {
      bVar10 = bVar10 | ( byte )((int)uVar22 >> 0xb);
      bVar13 = ( byte )(uVar22 >> 3) & 0xe0;
   }
 else {
      bVar13 = 0;
      if (-1 < (int)uVar22) {
         bVar10 = bVar10 | 7;
         bVar13 = 0xe0;
      }

   }

   uVar22 = iVar16 + -0x4515 + ( iVar8 * 0x811a >> 8 );
   if (uVar22 < 0x4000) {
      bVar13 = bVar13 | ( byte )((int)uVar22 >> 9);
   }
 else if (-1 < (int)uVar22) {
      bVar13 = bVar13 | 0x1f;
   }

   *param_7 = bVar10;
   param_7[1] = bVar13;
   if (param_2 != (byte*)0x0) {
      iVar8 = (int)( ( uint ) * param_6 + iVar18 ) >> 1;
      iVar16 = (int)( ( uint ) * param_5 + iVar19 ) >> 1;
      iVar14 = (int)( ( uint ) * param_2 * 0x4a85 ) >> 8;
      uVar22 = iVar14 + -0x379a + ( iVar8 * 0x6625 >> 8 );
      if (uVar22 < 0x4000) {
         bVar10 = ( byte )((int)uVar22 >> 6);
      }
 else {
         bVar10 = ~(byte)((int)uVar22 >> 0x1f);
      }

      bVar10 = bVar10 & 0xf8;
      uVar22 = ( ( iVar14 - ( iVar16 * 0x1913 >> 8 ) ) - ( iVar8 * 0x3408 >> 8 ) ) + 0x2204;
      if (uVar22 < 0x4000) {
         bVar13 = ( byte )(uVar22 >> 3) & 0xe0;
         bVar10 = bVar10 | ( byte )((int)uVar22 >> 0xb);
      }
 else {
         bVar13 = 0;
         if (-1 < (int)uVar22) {
            bVar10 = bVar10 | 7;
            bVar13 = 0xe0;
         }

      }

      uVar22 = iVar14 + -0x4515 + ( iVar16 * 0x811a >> 8 );
      if (uVar22 < 0x4000) {
         bVar13 = bVar13 | ( byte )((int)uVar22 >> 9);
      }
 else if (-1 < (int)uVar22) {
         bVar13 = bVar13 | 0x1f;
      }

      *param_8 = bVar10;
      param_8[1] = bVar13;
   }

   if (param_9 < 0x22) {
      if (param_9 < 2) goto LAB_001017b8;
      iVar16 = 1;
      iVar8 = 0;
   }
 else {
      lVar11 = 0;
      local_2c8 = param_1 + 1;
      local_2d0 = param_7 + 2;
      local_2b8 = param_2 + 1;
      local_2c0 = param_8 + 2;
      uVar15 = param_9 - 0x22U >> 5;
      uVar22 = uVar15 + 1;
      do {
         auVar3 = *(undefined1(*) [16])( param_3 + lVar11 + 1 );
         auVar4 = *(undefined1(*) [16])( param_3 + lVar11 );
         auVar5 = *(undefined1(*) [16])( param_5 + lVar11 );
         auVar6 = *(undefined1(*) [16])( param_5 + lVar11 + 1 );
         for (int i = 0; i < 16; i++) {
            auVar76[i] = pavgb(auVar3[i], auVar5[i]);
         }

         for (int i = 0; i < 16; i++) {
            auVar23[i] = pavgb(auVar4[i], auVar6[i]);
         }

         auVar75 = auVar76 ^ auVar23;
         cVar40 = pavgb(auVar23[0], auVar76[0]);
         cVar42 = pavgb(auVar23[1], auVar76[1]);
         cVar43 = pavgb(auVar23[2], auVar76[2]);
         cVar44 = pavgb(auVar23[3], auVar76[3]);
         cVar45 = pavgb(auVar23[4], auVar76[4]);
         cVar46 = pavgb(auVar23[5], auVar76[5]);
         cVar47 = pavgb(auVar23[6], auVar76[6]);
         cVar48 = pavgb(auVar23[7], auVar76[7]);
         cVar49 = pavgb(auVar23[8], auVar76[8]);
         cVar50 = pavgb(auVar23[9], auVar76[9]);
         cVar51 = pavgb(auVar23[10], auVar76[10]);
         cVar52 = pavgb(auVar23[0xb], auVar76[0xb]);
         cVar53 = pavgb(auVar23[0xc], auVar76[0xc]);
         cVar54 = pavgb(auVar23[0xd], auVar76[0xd]);
         cVar55 = pavgb(auVar23[0xe], auVar76[0xe]);
         cVar56 = pavgb(auVar23[0xf], auVar76[0xf]);
         auVar57 = ( auVar3 ^ auVar5 | auVar4 ^ auVar6 | auVar75 ) & __LC0;
         auVar41[0] = cVar40 - auVar57[0];
         auVar41[1] = cVar42 - auVar57[1];
         auVar41[2] = cVar43 - auVar57[2];
         auVar41[3] = cVar44 - auVar57[3];
         auVar41[4] = cVar45 - auVar57[4];
         auVar41[5] = cVar46 - auVar57[5];
         auVar41[6] = cVar47 - auVar57[6];
         auVar41[7] = cVar48 - auVar57[7];
         auVar41[8] = cVar49 - auVar57[8];
         auVar41[9] = cVar50 - auVar57[9];
         auVar41[10] = cVar51 - auVar57[10];
         auVar41[0xb] = cVar52 - auVar57[0xb];
         auVar41[0xc] = cVar53 - auVar57[0xc];
         auVar41[0xd] = cVar54 - auVar57[0xd];
         auVar41[0xe] = cVar55 - auVar57[0xe];
         auVar41[0xf] = cVar56 - auVar57[0xf];
         cVar40 = pavgb(auVar41[0], auVar76[0]);
         cVar42 = pavgb(auVar41[1], auVar76[1]);
         cVar43 = pavgb(auVar41[2], auVar76[2]);
         cVar44 = pavgb(auVar41[3], auVar76[3]);
         cVar45 = pavgb(auVar41[4], auVar76[4]);
         cVar46 = pavgb(auVar41[5], auVar76[5]);
         cVar47 = pavgb(auVar41[6], auVar76[6]);
         cVar48 = pavgb(auVar41[7], auVar76[7]);
         cVar49 = pavgb(auVar41[8], auVar76[8]);
         cVar50 = pavgb(auVar41[9], auVar76[9]);
         cVar51 = pavgb(auVar41[10], auVar76[10]);
         cVar52 = pavgb(auVar41[0xb], auVar76[0xb]);
         cVar53 = pavgb(auVar41[0xc], auVar76[0xc]);
         cVar54 = pavgb(auVar41[0xd], auVar76[0xd]);
         cVar55 = pavgb(auVar41[0xe], auVar76[0xe]);
         cVar56 = pavgb(auVar41[0xf], auVar76[0xf]);
         cVar58 = pavgb(auVar41[0], auVar23[0]);
         cVar59 = pavgb(auVar41[1], auVar23[1]);
         cVar60 = pavgb(auVar41[2], auVar23[2]);
         cVar61 = pavgb(auVar41[3], auVar23[3]);
         cVar62 = pavgb(auVar41[4], auVar23[4]);
         cVar63 = pavgb(auVar41[5], auVar23[5]);
         cVar64 = pavgb(auVar41[6], auVar23[6]);
         cVar65 = pavgb(auVar41[7], auVar23[7]);
         cVar66 = pavgb(auVar41[8], auVar23[8]);
         cVar67 = pavgb(auVar41[9], auVar23[9]);
         cVar68 = pavgb(auVar41[10], auVar23[10]);
         cVar69 = pavgb(auVar41[0xb], auVar23[0xb]);
         cVar70 = pavgb(auVar41[0xc], auVar23[0xc]);
         cVar71 = pavgb(auVar41[0xd], auVar23[0xd]);
         cVar72 = pavgb(auVar41[0xe], auVar23[0xe]);
         cVar73 = pavgb(auVar41[0xf], auVar23[0xf]);
         auVar57 = ( auVar76 ^ auVar41 | ( auVar3 ^ auVar5 ) & auVar75 ) & __LC0;
         cVar40 = cVar40 - auVar57[0];
         cVar42 = cVar42 - auVar57[1];
         cVar43 = cVar43 - auVar57[2];
         cVar44 = cVar44 - auVar57[3];
         cVar45 = cVar45 - auVar57[4];
         cVar46 = cVar46 - auVar57[5];
         cVar47 = cVar47 - auVar57[6];
         cVar48 = cVar48 - auVar57[7];
         cVar49 = cVar49 - auVar57[8];
         cVar50 = cVar50 - auVar57[9];
         cVar51 = cVar51 - auVar57[10];
         cVar52 = cVar52 - auVar57[0xb];
         cVar53 = cVar53 - auVar57[0xc];
         cVar54 = cVar54 - auVar57[0xd];
         cVar55 = cVar55 - auVar57[0xe];
         cVar56 = cVar56 - auVar57[0xf];
         auVar23 = ( auVar23 ^ auVar41 | ( auVar4 ^ auVar6 ) & auVar75 ) & __LC0;
         cVar58 = cVar58 - auVar23[0];
         cVar59 = cVar59 - auVar23[1];
         cVar60 = cVar60 - auVar23[2];
         cVar61 = cVar61 - auVar23[3];
         cVar62 = cVar62 - auVar23[4];
         cVar63 = cVar63 - auVar23[5];
         cVar64 = cVar64 - auVar23[6];
         cVar65 = cVar65 - auVar23[7];
         cVar66 = cVar66 - auVar23[8];
         cVar67 = cVar67 - auVar23[9];
         cVar68 = cVar68 - auVar23[10];
         cVar69 = cVar69 - auVar23[0xb];
         cVar70 = cVar70 - auVar23[0xc];
         cVar71 = cVar71 - auVar23[0xd];
         cVar72 = cVar72 - auVar23[0xe];
         cVar73 = cVar73 - auVar23[0xf];
         local_210 = pavgb(auVar4[0], cVar40);
         uStack_20e = pavgb(auVar4[1], cVar42);
         uStack_20c = pavgb(auVar4[2], cVar43);
         uStack_20a = pavgb(auVar4[3], cVar44);
         uStack_208 = pavgb(auVar4[4], cVar45);
         uStack_206 = pavgb(auVar4[5], cVar46);
         uStack_204 = pavgb(auVar4[6], cVar47);
         uStack_202 = pavgb(auVar4[7], cVar48);
         local_200 = pavgb(auVar4[8], cVar49);
         uStack_1fe = pavgb(auVar4[9], cVar50);
         uStack_1fc = pavgb(auVar4[10], cVar51);
         uStack_1fa = pavgb(auVar4[0xb], cVar52);
         uStack_1f8 = pavgb(auVar4[0xc], cVar53);
         uStack_1f6 = pavgb(auVar4[0xd], cVar54);
         uStack_1f4 = pavgb(auVar4[0xe], cVar55);
         uStack_1f2 = pavgb(auVar4[0xf], cVar56);
         uStack_20f = pavgb(auVar3[0], cVar58);
         uStack_20d = pavgb(auVar3[1], cVar59);
         uStack_20b = pavgb(auVar3[2], cVar60);
         uStack_209 = pavgb(auVar3[3], cVar61);
         uStack_207 = pavgb(auVar3[4], cVar62);
         uStack_205 = pavgb(auVar3[5], cVar63);
         uStack_203 = pavgb(auVar3[6], cVar64);
         uStack_201 = pavgb(auVar3[7], cVar65);
         uStack_1ff = pavgb(auVar3[8], cVar66);
         uStack_1fd = pavgb(auVar3[9], cVar67);
         uStack_1fb = pavgb(auVar3[10], cVar68);
         uStack_1f9 = pavgb(auVar3[0xb], cVar69);
         uStack_1f7 = pavgb(auVar3[0xc], cVar70);
         uStack_1f5 = pavgb(auVar3[0xd], cVar71);
         uStack_1f3 = pavgb(auVar3[0xe], cVar72);
         uStack_1f1 = pavgb(auVar3[0xf], cVar73);
         local_1d0 = pavgb(auVar5[0], cVar58);
         uStack_1ce = pavgb(auVar5[1], cVar59);
         uStack_1cc = pavgb(auVar5[2], cVar60);
         uStack_1ca = pavgb(auVar5[3], cVar61);
         uStack_1c8 = pavgb(auVar5[4], cVar62);
         uStack_1c6 = pavgb(auVar5[5], cVar63);
         uStack_1c4 = pavgb(auVar5[6], cVar64);
         uStack_1c2 = pavgb(auVar5[7], cVar65);
         local_1c0 = pavgb(auVar5[8], cVar66);
         uStack_1be = pavgb(auVar5[9], cVar67);
         uStack_1bc = pavgb(auVar5[10], cVar68);
         uStack_1ba = pavgb(auVar5[0xb], cVar69);
         uStack_1b8 = pavgb(auVar5[0xc], cVar70);
         uStack_1b6 = pavgb(auVar5[0xd], cVar71);
         uStack_1b4 = pavgb(auVar5[0xe], cVar72);
         uStack_1b2 = pavgb(auVar5[0xf], cVar73);
         uStack_1cf = pavgb(auVar6[0], cVar40);
         uStack_1cd = pavgb(auVar6[1], cVar42);
         uStack_1cb = pavgb(auVar6[2], cVar43);
         uStack_1c9 = pavgb(auVar6[3], cVar44);
         uStack_1c7 = pavgb(auVar6[4], cVar45);
         uStack_1c5 = pavgb(auVar6[5], cVar46);
         uStack_1c3 = pavgb(auVar6[6], cVar47);
         uStack_1c1 = pavgb(auVar6[7], cVar48);
         uStack_1bf = pavgb(auVar6[8], cVar49);
         uStack_1bd = pavgb(auVar6[9], cVar50);
         uStack_1bb = pavgb(auVar6[10], cVar51);
         uStack_1b9 = pavgb(auVar6[0xb], cVar52);
         uStack_1b7 = pavgb(auVar6[0xc], cVar53);
         uStack_1b5 = pavgb(auVar6[0xd], cVar54);
         uStack_1b3 = pavgb(auVar6[0xe], cVar55);
         uStack_1b1 = pavgb(auVar6[0xf], cVar56);
         auVar3 = *(undefined1(*) [16])( param_4 + lVar11 + 1 );
         auVar4 = *(undefined1(*) [16])( param_4 + lVar11 );
         auVar5 = *(undefined1(*) [16])( param_6 + lVar11 );
         auVar6 = *(undefined1(*) [16])( param_6 + lVar11 + 1 );
         for (int i = 0; i < 16; i++) {
            auVar57[i] = pavgb(auVar3[i], auVar5[i]);
         }

         for (int i = 0; i < 16; i++) {
            auVar75[i] = pavgb(auVar4[i], auVar6[i]);
         }

         auVar76 = auVar57 ^ auVar75;
         cVar40 = pavgb(auVar75[0], auVar57[0]);
         cVar42 = pavgb(auVar75[1], auVar57[1]);
         cVar43 = pavgb(auVar75[2], auVar57[2]);
         cVar44 = pavgb(auVar75[3], auVar57[3]);
         cVar45 = pavgb(auVar75[4], auVar57[4]);
         cVar46 = pavgb(auVar75[5], auVar57[5]);
         cVar47 = pavgb(auVar75[6], auVar57[6]);
         cVar48 = pavgb(auVar75[7], auVar57[7]);
         cVar49 = pavgb(auVar75[8], auVar57[8]);
         cVar50 = pavgb(auVar75[9], auVar57[9]);
         cVar51 = pavgb(auVar75[10], auVar57[10]);
         cVar52 = pavgb(auVar75[0xb], auVar57[0xb]);
         cVar53 = pavgb(auVar75[0xc], auVar57[0xc]);
         cVar54 = pavgb(auVar75[0xd], auVar57[0xd]);
         cVar55 = pavgb(auVar75[0xe], auVar57[0xe]);
         cVar56 = pavgb(auVar75[0xf], auVar57[0xf]);
         auVar23 = ( auVar3 ^ auVar5 | auVar4 ^ auVar6 | auVar76 ) & __LC0;
         auVar74[0] = cVar40 - auVar23[0];
         auVar74[1] = cVar42 - auVar23[1];
         auVar74[2] = cVar43 - auVar23[2];
         auVar74[3] = cVar44 - auVar23[3];
         auVar74[4] = cVar45 - auVar23[4];
         auVar74[5] = cVar46 - auVar23[5];
         auVar74[6] = cVar47 - auVar23[6];
         auVar74[7] = cVar48 - auVar23[7];
         auVar74[8] = cVar49 - auVar23[8];
         auVar74[9] = cVar50 - auVar23[9];
         auVar74[10] = cVar51 - auVar23[10];
         auVar74[0xb] = cVar52 - auVar23[0xb];
         auVar74[0xc] = cVar53 - auVar23[0xc];
         auVar74[0xd] = cVar54 - auVar23[0xd];
         auVar74[0xe] = cVar55 - auVar23[0xe];
         auVar74[0xf] = cVar56 - auVar23[0xf];
         cVar58 = pavgb(auVar74[0], auVar57[0]);
         cVar59 = pavgb(auVar74[1], auVar57[1]);
         cVar60 = pavgb(auVar74[2], auVar57[2]);
         cVar61 = pavgb(auVar74[3], auVar57[3]);
         cVar62 = pavgb(auVar74[4], auVar57[4]);
         cVar63 = pavgb(auVar74[5], auVar57[5]);
         cVar64 = pavgb(auVar74[6], auVar57[6]);
         cVar65 = pavgb(auVar74[7], auVar57[7]);
         cVar66 = pavgb(auVar74[8], auVar57[8]);
         cVar67 = pavgb(auVar74[9], auVar57[9]);
         cVar68 = pavgb(auVar74[10], auVar57[10]);
         cVar69 = pavgb(auVar74[0xb], auVar57[0xb]);
         cVar70 = pavgb(auVar74[0xc], auVar57[0xc]);
         cVar71 = pavgb(auVar74[0xd], auVar57[0xd]);
         cVar72 = pavgb(auVar74[0xe], auVar57[0xe]);
         cVar73 = pavgb(auVar74[0xf], auVar57[0xf]);
         cVar40 = pavgb(auVar74[0], auVar75[0]);
         cVar42 = pavgb(auVar74[1], auVar75[1]);
         cVar43 = pavgb(auVar74[2], auVar75[2]);
         cVar44 = pavgb(auVar74[3], auVar75[3]);
         cVar45 = pavgb(auVar74[4], auVar75[4]);
         cVar46 = pavgb(auVar74[5], auVar75[5]);
         cVar47 = pavgb(auVar74[6], auVar75[6]);
         cVar48 = pavgb(auVar74[7], auVar75[7]);
         cVar49 = pavgb(auVar74[8], auVar75[8]);
         cVar50 = pavgb(auVar74[9], auVar75[9]);
         cVar51 = pavgb(auVar74[10], auVar75[10]);
         cVar52 = pavgb(auVar74[0xb], auVar75[0xb]);
         cVar53 = pavgb(auVar74[0xc], auVar75[0xc]);
         cVar54 = pavgb(auVar74[0xd], auVar75[0xd]);
         cVar55 = pavgb(auVar74[0xe], auVar75[0xe]);
         cVar56 = pavgb(auVar74[0xf], auVar75[0xf]);
         auVar23 = ( auVar57 ^ auVar74 | ( auVar3 ^ auVar5 ) & auVar76 ) & __LC0;
         cVar58 = cVar58 - auVar23[0];
         cVar59 = cVar59 - auVar23[1];
         cVar60 = cVar60 - auVar23[2];
         cVar61 = cVar61 - auVar23[3];
         cVar62 = cVar62 - auVar23[4];
         cVar63 = cVar63 - auVar23[5];
         cVar64 = cVar64 - auVar23[6];
         cVar65 = cVar65 - auVar23[7];
         cVar66 = cVar66 - auVar23[8];
         cVar67 = cVar67 - auVar23[9];
         cVar68 = cVar68 - auVar23[10];
         cVar69 = cVar69 - auVar23[0xb];
         cVar70 = cVar70 - auVar23[0xc];
         cVar71 = cVar71 - auVar23[0xd];
         cVar72 = cVar72 - auVar23[0xe];
         cVar73 = cVar73 - auVar23[0xf];
         auVar23 = ( ( auVar4 ^ auVar6 ) & auVar76 | auVar75 ^ auVar74 ) & __LC0;
         local_1f0 = pavgb(auVar4[0], cVar58);
         uStack_1ee = pavgb(auVar4[1], cVar59);
         uStack_1ec = pavgb(auVar4[2], cVar60);
         uStack_1ea = pavgb(auVar4[3], cVar61);
         uStack_1e8 = pavgb(auVar4[4], cVar62);
         uStack_1e6 = pavgb(auVar4[5], cVar63);
         uStack_1e4 = pavgb(auVar4[6], cVar64);
         uStack_1e2 = pavgb(auVar4[7], cVar65);
         local_1e0 = pavgb(auVar4[8], cVar66);
         uStack_1de = pavgb(auVar4[9], cVar67);
         uStack_1dc = pavgb(auVar4[10], cVar68);
         uStack_1da = pavgb(auVar4[0xb], cVar69);
         uStack_1d8 = pavgb(auVar4[0xc], cVar70);
         uStack_1d6 = pavgb(auVar4[0xd], cVar71);
         uStack_1d4 = pavgb(auVar4[0xe], cVar72);
         uStack_1d2 = pavgb(auVar4[0xf], cVar73);
         cVar40 = cVar40 - auVar23[0];
         cVar42 = cVar42 - auVar23[1];
         cVar43 = cVar43 - auVar23[2];
         cVar44 = cVar44 - auVar23[3];
         cVar45 = cVar45 - auVar23[4];
         cVar46 = cVar46 - auVar23[5];
         cVar47 = cVar47 - auVar23[6];
         cVar48 = cVar48 - auVar23[7];
         cVar49 = cVar49 - auVar23[8];
         cVar50 = cVar50 - auVar23[9];
         cVar51 = cVar51 - auVar23[10];
         cVar52 = cVar52 - auVar23[0xb];
         cVar53 = cVar53 - auVar23[0xc];
         cVar54 = cVar54 - auVar23[0xd];
         cVar55 = cVar55 - auVar23[0xe];
         cVar56 = cVar56 - auVar23[0xf];
         uStack_1ef = pavgb(auVar3[0], cVar40);
         uStack_1ed = pavgb(auVar3[1], cVar42);
         uStack_1eb = pavgb(auVar3[2], cVar43);
         uStack_1e9 = pavgb(auVar3[3], cVar44);
         uStack_1e7 = pavgb(auVar3[4], cVar45);
         uStack_1e5 = pavgb(auVar3[5], cVar46);
         uStack_1e3 = pavgb(auVar3[6], cVar47);
         uStack_1e1 = pavgb(auVar3[7], cVar48);
         uStack_1df = pavgb(auVar3[8], cVar49);
         uStack_1dd = pavgb(auVar3[9], cVar50);
         uStack_1db = pavgb(auVar3[10], cVar51);
         uStack_1d9 = pavgb(auVar3[0xb], cVar52);
         uStack_1d7 = pavgb(auVar3[0xc], cVar53);
         uStack_1d5 = pavgb(auVar3[0xd], cVar54);
         uStack_1d3 = pavgb(auVar3[0xe], cVar55);
         uStack_1d1 = pavgb(auVar3[0xf], cVar56);
         uVar24 = pavgb(auVar5[0], cVar40);
         uVar25 = pavgb(auVar5[1], cVar42);
         uVar26 = pavgb(auVar5[2], cVar43);
         uVar27 = pavgb(auVar5[3], cVar44);
         uVar28 = pavgb(auVar5[4], cVar45);
         uVar29 = pavgb(auVar5[5], cVar46);
         uVar30 = pavgb(auVar5[6], cVar47);
         uVar31 = pavgb(auVar5[7], cVar48);
         local_1a0 = pavgb(auVar5[8], cVar49);
         uStack_19e = pavgb(auVar5[9], cVar50);
         uStack_19c = pavgb(auVar5[10], cVar51);
         uStack_19a = pavgb(auVar5[0xb], cVar52);
         uStack_198 = pavgb(auVar5[0xc], cVar53);
         uStack_196 = pavgb(auVar5[0xd], cVar54);
         uStack_194 = pavgb(auVar5[0xe], cVar55);
         uStack_192 = pavgb(auVar5[0xf], cVar56);
         uVar32 = pavgb(auVar6[0], cVar58);
         uVar33 = pavgb(auVar6[1], cVar59);
         uVar34 = pavgb(auVar6[2], cVar60);
         uVar35 = pavgb(auVar6[3], cVar61);
         uVar36 = pavgb(auVar6[4], cVar62);
         uVar37 = pavgb(auVar6[5], cVar63);
         uVar38 = pavgb(auVar6[6], cVar64);
         uVar39 = pavgb(auVar6[7], cVar65);
         uStack_19f = pavgb(auVar6[8], cVar66);
         uStack_19d = pavgb(auVar6[9], cVar67);
         uStack_19b = pavgb(auVar6[10], cVar68);
         uStack_199 = pavgb(auVar6[0xb], cVar69);
         uStack_197 = pavgb(auVar6[0xc], cVar70);
         uStack_195 = pavgb(auVar6[0xd], cVar71);
         uStack_193 = pavgb(auVar6[0xe], cVar72);
         uStack_191 = pavgb(auVar6[0xf], cVar73);
         local_1b0._8_8_ = ( undefined8 )(CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar39, uVar31), uVar38), uVar30), uVar37), uVar29), uVar36), CONCAT11(uVar28, uVar31)) >> 8);
         local_1b0[7] = uVar35;
         local_1b0[6] = uVar27;
         local_1b0[5] = uVar34;
         local_1b0[4] = uVar26;
         local_1b0[3] = uVar33;
         local_1b0[2] = uVar25;
         local_1b0[1] = uVar32;
         local_1b0[0] = uVar24;
         VP8YuvToRgb56532_SSE2(local_2c8, &local_210, &local_1f0, local_2d0);
         if (param_2 != (byte*)0x0) {
            VP8YuvToRgb56532_SSE2(local_2b8, &local_1d0, local_1b0, local_2c0);
         }

         local_2c8 = local_2c8 + 0x20;
         lVar11 = lVar11 + 0x10;
         local_2d0 = local_2d0 + 0x40;
         local_2b8 = local_2b8 + 0x20;
         local_2c0 = local_2c0 + 0x40;
      }
 while ( (ulong)uVar22 << 4 != lVar11 );
      iVar8 = uVar22 * 0x10;
      iVar16 = uVar15 * 0x20 + 0x21;
   }

   puVar21 = local_258;
   iVar14 = ( param_9 + 1 >> 1 ) - ( iVar16 >> 1 );
   uVar17 = (ulong)iVar14;
   __dest = (undefined1*)0x0;
   if (param_2 != (byte*)0x0) {
      __dest = local_70;
   }

   __memcpy_chk(puVar21, param_3 + iVar8, uVar17, 0x11);
   __memcpy_chk(local_238, param_5 + iVar8, uVar17, 0x11);
   iVar18 = iVar14 + -1;
   lVar11 = (long)( 0x11 - iVar14 );
   puVar1 = puVar21 + uVar17;
   uVar9 = 0x11;
   if (0x10 < uVar17) {
      uVar9 = uVar17;
   }

   lVar12 = uVar9 - uVar17;
   __memset_chk(puVar1, local_258[iVar18], lVar11);
   puVar2 = local_238 + uVar17;
   __memset_chk(puVar2, local_238[iVar18], lVar11, lVar12);
   Upsample32Pixels_SSE2(puVar21, local_238, &local_210, 0x11);
   __memcpy_chk();
   __memcpy_chk(local_238, param_6 + iVar8, uVar17, 0x11);
   __memset_chk(puVar1, local_258[iVar18], lVar11, lVar12);
   __memset_chk(puVar2, local_238[iVar18], lVar11, lVar12);
   Upsample32Pixels_SSE2(puVar21, local_238, &local_1f0);
   param_9 = param_9 - iVar16;
   __n = (size_t)( param_9 * 2 );
   memcpy(local_90, param_1 + iVar16, (long)param_9);
   param_7 = param_7 + iVar16 * 2;
   if (param_2 == (byte*)0x0) {
      VP8YuvToRgb56532_SSE2(local_90, &local_210, &local_1f0, local_190);
      if (__dest == (undefined1*)0x0) {
         memcpy(param_7, local_190, __n);
      }
 else {
         VP8YuvToRgb56532_SSE2(__dest, &local_1d0, local_1b0, local_110);
         memcpy(param_7, local_190, __n);
      }

   }
 else {
      memcpy(__dest, param_2 + iVar16, (long)param_9);
      VP8YuvToRgb56532_SSE2(local_90, &local_210, &local_1f0, local_190);
      VP8YuvToRgb56532_SSE2(__dest, &local_1d0, local_1b0, local_110);
      memcpy(param_7, local_190, __n);
      memcpy(param_8 + iVar16 * 2, local_110, __n);
   }

   LAB_001017b8:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void UpsampleBgraLinePair_SSE2(byte *param_1, byte *param_2, byte *param_3, byte *param_4, byte *param_5, byte *param_6, char *param_7, char *param_8, int param_9) {
   undefined1 *puVar1;
   undefined1 *puVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   byte bVar7;
   int iVar8;
   ulong uVar9;
   int iVar10;
   long lVar11;
   long lVar12;
   int iVar13;
   uint uVar14;
   uint uVar15;
   ulong uVar16;
   size_t __n;
   int iVar17;
   undefined1 *__dest;
   int iVar18;
   undefined8 *puVar19;
   undefined1 *puVar20;
   long in_FS_OFFSET;
   undefined1 auVar21[16];
   undefined1 uVar22;
   undefined1 uVar23;
   undefined1 uVar24;
   undefined1 uVar25;
   undefined1 uVar26;
   undefined1 uVar27;
   undefined1 uVar28;
   undefined1 uVar29;
   undefined1 uVar30;
   undefined1 uVar31;
   undefined1 uVar32;
   undefined1 uVar33;
   undefined1 uVar34;
   undefined1 uVar35;
   undefined1 uVar36;
   undefined1 uVar37;
   char cVar38;
   char cVar40;
   char cVar41;
   char cVar42;
   char cVar43;
   char cVar44;
   char cVar45;
   char cVar46;
   char cVar47;
   char cVar48;
   char cVar49;
   char cVar50;
   char cVar51;
   char cVar52;
   char cVar53;
   char cVar54;
   undefined1 auVar39[16];
   undefined1 auVar55[16];
   char cVar56;
   char cVar57;
   char cVar58;
   char cVar59;
   char cVar60;
   char cVar61;
   char cVar62;
   char cVar63;
   char cVar64;
   char cVar65;
   char cVar66;
   char cVar67;
   char cVar68;
   char cVar69;
   char cVar70;
   char cVar71;
   undefined1 auVar72[16];
   undefined1 auVar73[16];
   undefined1 auVar74[16];
   char *local_2d0;
   byte *local_2c8;
   char *local_2c0;
   byte *local_2b8;
   undefined1 local_258[32];
   undefined1 local_238[32];
   undefined8 local_218;
   undefined1 local_210;
   undefined1 uStack_20f;
   undefined1 uStack_20e;
   undefined1 uStack_20d;
   undefined1 uStack_20c;
   undefined1 uStack_20b;
   undefined1 uStack_20a;
   undefined1 uStack_209;
   undefined1 uStack_208;
   undefined1 uStack_207;
   undefined1 uStack_206;
   undefined1 uStack_205;
   undefined1 uStack_204;
   undefined1 uStack_203;
   undefined1 uStack_202;
   undefined1 uStack_201;
   undefined1 local_200;
   undefined1 uStack_1ff;
   undefined1 uStack_1fe;
   undefined1 uStack_1fd;
   undefined1 uStack_1fc;
   undefined1 uStack_1fb;
   undefined1 uStack_1fa;
   undefined1 uStack_1f9;
   undefined1 uStack_1f8;
   undefined1 uStack_1f7;
   undefined1 uStack_1f6;
   undefined1 uStack_1f5;
   undefined1 uStack_1f4;
   undefined1 uStack_1f3;
   undefined1 uStack_1f2;
   undefined1 uStack_1f1;
   undefined1 local_1f0;
   undefined1 uStack_1ef;
   undefined1 uStack_1ee;
   undefined1 uStack_1ed;
   undefined1 uStack_1ec;
   undefined1 uStack_1eb;
   undefined1 uStack_1ea;
   undefined1 uStack_1e9;
   undefined1 uStack_1e8;
   undefined1 uStack_1e7;
   undefined1 uStack_1e6;
   undefined1 uStack_1e5;
   undefined1 uStack_1e4;
   undefined1 uStack_1e3;
   undefined1 uStack_1e2;
   undefined1 uStack_1e1;
   undefined1 local_1e0;
   undefined1 uStack_1df;
   undefined1 uStack_1de;
   undefined1 uStack_1dd;
   undefined1 uStack_1dc;
   undefined1 uStack_1db;
   undefined1 uStack_1da;
   undefined1 uStack_1d9;
   undefined1 uStack_1d8;
   undefined1 uStack_1d7;
   undefined1 uStack_1d6;
   undefined1 uStack_1d5;
   undefined1 uStack_1d4;
   undefined1 uStack_1d3;
   undefined1 uStack_1d2;
   undefined1 uStack_1d1;
   undefined1 local_1d0;
   undefined1 uStack_1cf;
   undefined1 uStack_1ce;
   undefined1 uStack_1cd;
   undefined1 uStack_1cc;
   undefined1 uStack_1cb;
   undefined1 uStack_1ca;
   undefined1 uStack_1c9;
   undefined1 uStack_1c8;
   undefined1 uStack_1c7;
   undefined1 uStack_1c6;
   undefined1 uStack_1c5;
   undefined1 uStack_1c4;
   undefined1 uStack_1c3;
   undefined1 uStack_1c2;
   undefined1 uStack_1c1;
   undefined1 local_1c0;
   undefined1 uStack_1bf;
   undefined1 uStack_1be;
   undefined1 uStack_1bd;
   undefined1 uStack_1bc;
   undefined1 uStack_1bb;
   undefined1 uStack_1ba;
   undefined1 uStack_1b9;
   undefined1 uStack_1b8;
   undefined1 uStack_1b7;
   undefined1 uStack_1b6;
   undefined1 uStack_1b5;
   undefined1 uStack_1b4;
   undefined1 uStack_1b3;
   undefined1 uStack_1b2;
   undefined1 uStack_1b1;
   undefined1 local_1b0[16];
   undefined1 local_1a0;
   undefined1 uStack_19f;
   undefined1 uStack_19e;
   undefined1 uStack_19d;
   undefined1 uStack_19c;
   undefined1 uStack_19b;
   undefined1 uStack_19a;
   undefined1 uStack_199;
   undefined1 uStack_198;
   undefined1 uStack_197;
   undefined1 uStack_196;
   undefined1 uStack_195;
   undefined1 uStack_194;
   undefined1 uStack_193;
   undefined1 uStack_192;
   undefined1 uStack_191;
   undefined1 local_190[128];
   undefined1 local_110[128];
   undefined1 local_90[32];
   undefined1 local_70[48];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar17 = ( (int)( ( uint ) * param_5 + ( uint ) * param_3 ) >> 1 ) + 1;
   iVar13 = (int)( ( uint ) * param_3 + iVar17 ) >> 1;
   puVar19 = &local_218;
   for (lVar11 = 0x39; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar19 = 0;
      puVar19 = puVar19 + 1;
   }

   bVar7 = *param_6;
   *(undefined2*)( (long)puVar19 + 4 ) = 0;
   *(undefined4*)puVar19 = 0;
   *(undefined1*)( (long)puVar19 + 6 ) = 0;
   iVar10 = ( (int)( (uint)bVar7 + ( uint ) * param_4 ) >> 1 ) + 1;
   iVar18 = (int)( ( uint ) * param_1 * 0x4a85 ) >> 8;
   uVar14 = iVar18 + -0x4515 + ( iVar13 * 0x811a >> 8 );
   iVar8 = (int)( ( uint ) * param_4 + iVar10 ) >> 1;
   if (uVar14 < 0x4000) {
      cVar38 = (char)( (int)uVar14 >> 6 );
   }
 else {
      cVar38 = (char)~(byte)(uVar14 >> 0x18) >> 7;
   }

   *param_7 = cVar38;
   uVar14 = ( ( iVar18 - ( iVar13 * 0x1913 >> 8 ) ) - ( iVar8 * 0x3408 >> 8 ) ) + 0x2204;
   if (uVar14 < 0x4000) {
      cVar38 = (char)( (int)uVar14 >> 6 );
   }
 else {
      cVar38 = (char)~(byte)(uVar14 >> 0x18) >> 7;
   }

   param_7[1] = cVar38;
   uVar14 = iVar18 + -0x379a + ( iVar8 * 0x6625 >> 8 );
   if (uVar14 < 0x4000) {
      cVar38 = (char)( (int)uVar14 >> 6 );
   }
 else {
      cVar38 = (char)~(byte)(uVar14 >> 0x18) >> 7;
   }

   param_7[2] = cVar38;
   param_7[3] = -1;
   if (param_2 != (byte*)0x0) {
      iVar8 = (int)( ( uint ) * param_5 + iVar17 ) >> 1;
      iVar13 = (int)( ( uint ) * param_6 + iVar10 ) >> 1;
      iVar17 = (int)( ( uint ) * param_2 * 0x4a85 ) >> 8;
      uVar14 = iVar17 + -0x4515 + ( iVar8 * 0x811a >> 8 );
      if (uVar14 < 0x4000) {
         cVar38 = (char)( (int)uVar14 >> 6 );
      }
 else {
         cVar38 = (char)~(byte)(uVar14 >> 0x18) >> 7;
      }

      *param_8 = cVar38;
      uVar14 = ( ( iVar17 - ( iVar8 * 0x1913 >> 8 ) ) - ( iVar13 * 0x3408 >> 8 ) ) + 0x2204;
      if (uVar14 < 0x4000) {
         cVar38 = (char)( (int)uVar14 >> 6 );
      }
 else {
         cVar38 = (char)~(byte)(uVar14 >> 0x18) >> 7;
      }

      param_8[1] = cVar38;
      uVar14 = iVar17 + -0x379a + ( iVar13 * 0x6625 >> 8 );
      if (uVar14 < 0x4000) {
         cVar38 = (char)( (int)uVar14 >> 6 );
      }
 else {
         cVar38 = (char)~(byte)(uVar14 >> 0x18) >> 7;
      }

      param_8[2] = cVar38;
      param_8[3] = -1;
   }

   if (param_9 < 0x22) {
      if (param_9 < 2) goto LAB_00102047;
      iVar13 = 1;
      iVar17 = 0;
   }
 else {
      lVar11 = 0;
      local_2c8 = param_1 + 1;
      local_2d0 = param_7 + 4;
      local_2b8 = param_2 + 1;
      local_2c0 = param_8 + 4;
      uVar15 = param_9 - 0x22U >> 5;
      uVar14 = uVar15 + 1;
      do {
         auVar3 = *(undefined1(*) [16])( param_3 + lVar11 + 1 );
         auVar4 = *(undefined1(*) [16])( param_5 + lVar11 );
         auVar5 = *(undefined1(*) [16])( param_3 + lVar11 );
         auVar6 = *(undefined1(*) [16])( param_5 + lVar11 + 1 );
         for (int i = 0; i < 16; i++) {
            auVar74[i] = pavgb(auVar3[i], auVar4[i]);
         }

         for (int i = 0; i < 16; i++) {
            auVar21[i] = pavgb(auVar5[i], auVar6[i]);
         }

         auVar73 = auVar74 ^ auVar21;
         cVar38 = pavgb(auVar21[0], auVar74[0]);
         cVar40 = pavgb(auVar21[1], auVar74[1]);
         cVar41 = pavgb(auVar21[2], auVar74[2]);
         cVar42 = pavgb(auVar21[3], auVar74[3]);
         cVar43 = pavgb(auVar21[4], auVar74[4]);
         cVar44 = pavgb(auVar21[5], auVar74[5]);
         cVar45 = pavgb(auVar21[6], auVar74[6]);
         cVar46 = pavgb(auVar21[7], auVar74[7]);
         cVar47 = pavgb(auVar21[8], auVar74[8]);
         cVar48 = pavgb(auVar21[9], auVar74[9]);
         cVar49 = pavgb(auVar21[10], auVar74[10]);
         cVar50 = pavgb(auVar21[0xb], auVar74[0xb]);
         cVar51 = pavgb(auVar21[0xc], auVar74[0xc]);
         cVar52 = pavgb(auVar21[0xd], auVar74[0xd]);
         cVar53 = pavgb(auVar21[0xe], auVar74[0xe]);
         cVar54 = pavgb(auVar21[0xf], auVar74[0xf]);
         auVar55 = ( auVar3 ^ auVar4 | auVar5 ^ auVar6 | auVar73 ) & __LC0;
         auVar39[0] = cVar38 - auVar55[0];
         auVar39[1] = cVar40 - auVar55[1];
         auVar39[2] = cVar41 - auVar55[2];
         auVar39[3] = cVar42 - auVar55[3];
         auVar39[4] = cVar43 - auVar55[4];
         auVar39[5] = cVar44 - auVar55[5];
         auVar39[6] = cVar45 - auVar55[6];
         auVar39[7] = cVar46 - auVar55[7];
         auVar39[8] = cVar47 - auVar55[8];
         auVar39[9] = cVar48 - auVar55[9];
         auVar39[10] = cVar49 - auVar55[10];
         auVar39[0xb] = cVar50 - auVar55[0xb];
         auVar39[0xc] = cVar51 - auVar55[0xc];
         auVar39[0xd] = cVar52 - auVar55[0xd];
         auVar39[0xe] = cVar53 - auVar55[0xe];
         auVar39[0xf] = cVar54 - auVar55[0xf];
         cVar38 = pavgb(auVar39[0], auVar74[0]);
         cVar40 = pavgb(auVar39[1], auVar74[1]);
         cVar41 = pavgb(auVar39[2], auVar74[2]);
         cVar42 = pavgb(auVar39[3], auVar74[3]);
         cVar43 = pavgb(auVar39[4], auVar74[4]);
         cVar44 = pavgb(auVar39[5], auVar74[5]);
         cVar45 = pavgb(auVar39[6], auVar74[6]);
         cVar46 = pavgb(auVar39[7], auVar74[7]);
         cVar47 = pavgb(auVar39[8], auVar74[8]);
         cVar48 = pavgb(auVar39[9], auVar74[9]);
         cVar49 = pavgb(auVar39[10], auVar74[10]);
         cVar50 = pavgb(auVar39[0xb], auVar74[0xb]);
         cVar51 = pavgb(auVar39[0xc], auVar74[0xc]);
         cVar52 = pavgb(auVar39[0xd], auVar74[0xd]);
         cVar53 = pavgb(auVar39[0xe], auVar74[0xe]);
         cVar54 = pavgb(auVar39[0xf], auVar74[0xf]);
         cVar56 = pavgb(auVar39[0], auVar21[0]);
         cVar57 = pavgb(auVar39[1], auVar21[1]);
         cVar58 = pavgb(auVar39[2], auVar21[2]);
         cVar59 = pavgb(auVar39[3], auVar21[3]);
         cVar60 = pavgb(auVar39[4], auVar21[4]);
         cVar61 = pavgb(auVar39[5], auVar21[5]);
         cVar62 = pavgb(auVar39[6], auVar21[6]);
         cVar63 = pavgb(auVar39[7], auVar21[7]);
         cVar64 = pavgb(auVar39[8], auVar21[8]);
         cVar65 = pavgb(auVar39[9], auVar21[9]);
         cVar66 = pavgb(auVar39[10], auVar21[10]);
         cVar67 = pavgb(auVar39[0xb], auVar21[0xb]);
         cVar68 = pavgb(auVar39[0xc], auVar21[0xc]);
         cVar69 = pavgb(auVar39[0xd], auVar21[0xd]);
         cVar70 = pavgb(auVar39[0xe], auVar21[0xe]);
         cVar71 = pavgb(auVar39[0xf], auVar21[0xf]);
         auVar55 = ( auVar74 ^ auVar39 | ( auVar3 ^ auVar4 ) & auVar73 ) & __LC0;
         cVar38 = cVar38 - auVar55[0];
         cVar40 = cVar40 - auVar55[1];
         cVar41 = cVar41 - auVar55[2];
         cVar42 = cVar42 - auVar55[3];
         cVar43 = cVar43 - auVar55[4];
         cVar44 = cVar44 - auVar55[5];
         cVar45 = cVar45 - auVar55[6];
         cVar46 = cVar46 - auVar55[7];
         cVar47 = cVar47 - auVar55[8];
         cVar48 = cVar48 - auVar55[9];
         cVar49 = cVar49 - auVar55[10];
         cVar50 = cVar50 - auVar55[0xb];
         cVar51 = cVar51 - auVar55[0xc];
         cVar52 = cVar52 - auVar55[0xd];
         cVar53 = cVar53 - auVar55[0xe];
         cVar54 = cVar54 - auVar55[0xf];
         auVar21 = ( auVar21 ^ auVar39 | ( auVar5 ^ auVar6 ) & auVar73 ) & __LC0;
         cVar56 = cVar56 - auVar21[0];
         cVar57 = cVar57 - auVar21[1];
         cVar58 = cVar58 - auVar21[2];
         cVar59 = cVar59 - auVar21[3];
         cVar60 = cVar60 - auVar21[4];
         cVar61 = cVar61 - auVar21[5];
         cVar62 = cVar62 - auVar21[6];
         cVar63 = cVar63 - auVar21[7];
         cVar64 = cVar64 - auVar21[8];
         cVar65 = cVar65 - auVar21[9];
         cVar66 = cVar66 - auVar21[10];
         cVar67 = cVar67 - auVar21[0xb];
         cVar68 = cVar68 - auVar21[0xc];
         cVar69 = cVar69 - auVar21[0xd];
         cVar70 = cVar70 - auVar21[0xe];
         cVar71 = cVar71 - auVar21[0xf];
         local_210 = pavgb(auVar5[0], cVar38);
         uStack_20e = pavgb(auVar5[1], cVar40);
         uStack_20c = pavgb(auVar5[2], cVar41);
         uStack_20a = pavgb(auVar5[3], cVar42);
         uStack_208 = pavgb(auVar5[4], cVar43);
         uStack_206 = pavgb(auVar5[5], cVar44);
         uStack_204 = pavgb(auVar5[6], cVar45);
         uStack_202 = pavgb(auVar5[7], cVar46);
         local_200 = pavgb(auVar5[8], cVar47);
         uStack_1fe = pavgb(auVar5[9], cVar48);
         uStack_1fc = pavgb(auVar5[10], cVar49);
         uStack_1fa = pavgb(auVar5[0xb], cVar50);
         uStack_1f8 = pavgb(auVar5[0xc], cVar51);
         uStack_1f6 = pavgb(auVar5[0xd], cVar52);
         uStack_1f4 = pavgb(auVar5[0xe], cVar53);
         uStack_1f2 = pavgb(auVar5[0xf], cVar54);
         uStack_20f = pavgb(auVar3[0], cVar56);
         uStack_20d = pavgb(auVar3[1], cVar57);
         uStack_20b = pavgb(auVar3[2], cVar58);
         uStack_209 = pavgb(auVar3[3], cVar59);
         uStack_207 = pavgb(auVar3[4], cVar60);
         uStack_205 = pavgb(auVar3[5], cVar61);
         uStack_203 = pavgb(auVar3[6], cVar62);
         uStack_201 = pavgb(auVar3[7], cVar63);
         uStack_1ff = pavgb(auVar3[8], cVar64);
         uStack_1fd = pavgb(auVar3[9], cVar65);
         uStack_1fb = pavgb(auVar3[10], cVar66);
         uStack_1f9 = pavgb(auVar3[0xb], cVar67);
         uStack_1f7 = pavgb(auVar3[0xc], cVar68);
         uStack_1f5 = pavgb(auVar3[0xd], cVar69);
         uStack_1f3 = pavgb(auVar3[0xe], cVar70);
         uStack_1f1 = pavgb(auVar3[0xf], cVar71);
         local_1d0 = pavgb(auVar4[0], cVar56);
         uStack_1ce = pavgb(auVar4[1], cVar57);
         uStack_1cc = pavgb(auVar4[2], cVar58);
         uStack_1ca = pavgb(auVar4[3], cVar59);
         uStack_1c8 = pavgb(auVar4[4], cVar60);
         uStack_1c6 = pavgb(auVar4[5], cVar61);
         uStack_1c4 = pavgb(auVar4[6], cVar62);
         uStack_1c2 = pavgb(auVar4[7], cVar63);
         local_1c0 = pavgb(auVar4[8], cVar64);
         uStack_1be = pavgb(auVar4[9], cVar65);
         uStack_1bc = pavgb(auVar4[10], cVar66);
         uStack_1ba = pavgb(auVar4[0xb], cVar67);
         uStack_1b8 = pavgb(auVar4[0xc], cVar68);
         uStack_1b6 = pavgb(auVar4[0xd], cVar69);
         uStack_1b4 = pavgb(auVar4[0xe], cVar70);
         uStack_1b2 = pavgb(auVar4[0xf], cVar71);
         uStack_1cf = pavgb(auVar6[0], cVar38);
         uStack_1cd = pavgb(auVar6[1], cVar40);
         uStack_1cb = pavgb(auVar6[2], cVar41);
         uStack_1c9 = pavgb(auVar6[3], cVar42);
         uStack_1c7 = pavgb(auVar6[4], cVar43);
         uStack_1c5 = pavgb(auVar6[5], cVar44);
         uStack_1c3 = pavgb(auVar6[6], cVar45);
         uStack_1c1 = pavgb(auVar6[7], cVar46);
         uStack_1bf = pavgb(auVar6[8], cVar47);
         uStack_1bd = pavgb(auVar6[9], cVar48);
         uStack_1bb = pavgb(auVar6[10], cVar49);
         uStack_1b9 = pavgb(auVar6[0xb], cVar50);
         uStack_1b7 = pavgb(auVar6[0xc], cVar51);
         uStack_1b5 = pavgb(auVar6[0xd], cVar52);
         uStack_1b3 = pavgb(auVar6[0xe], cVar53);
         uStack_1b1 = pavgb(auVar6[0xf], cVar54);
         auVar3 = *(undefined1(*) [16])( param_4 + lVar11 );
         auVar4 = *(undefined1(*) [16])( param_6 + lVar11 );
         auVar5 = *(undefined1(*) [16])( param_4 + lVar11 + 1 );
         auVar6 = *(undefined1(*) [16])( param_6 + lVar11 + 1 );
         for (int i = 0; i < 16; i++) {
            auVar73[i] = pavgb(auVar3[i], auVar6[i]);
         }

         for (int i = 0; i < 16; i++) {
            auVar55[i] = pavgb(auVar5[i], auVar4[i]);
         }

         auVar74 = auVar55 ^ auVar73;
         cVar38 = pavgb(auVar73[0], auVar55[0]);
         cVar40 = pavgb(auVar73[1], auVar55[1]);
         cVar41 = pavgb(auVar73[2], auVar55[2]);
         cVar42 = pavgb(auVar73[3], auVar55[3]);
         cVar43 = pavgb(auVar73[4], auVar55[4]);
         cVar44 = pavgb(auVar73[5], auVar55[5]);
         cVar45 = pavgb(auVar73[6], auVar55[6]);
         cVar46 = pavgb(auVar73[7], auVar55[7]);
         cVar47 = pavgb(auVar73[8], auVar55[8]);
         cVar48 = pavgb(auVar73[9], auVar55[9]);
         cVar49 = pavgb(auVar73[10], auVar55[10]);
         cVar50 = pavgb(auVar73[0xb], auVar55[0xb]);
         cVar51 = pavgb(auVar73[0xc], auVar55[0xc]);
         cVar52 = pavgb(auVar73[0xd], auVar55[0xd]);
         cVar53 = pavgb(auVar73[0xe], auVar55[0xe]);
         cVar54 = pavgb(auVar73[0xf], auVar55[0xf]);
         auVar21 = ( auVar5 ^ auVar4 | auVar3 ^ auVar6 | auVar74 ) & __LC0;
         auVar72[0] = cVar38 - auVar21[0];
         auVar72[1] = cVar40 - auVar21[1];
         auVar72[2] = cVar41 - auVar21[2];
         auVar72[3] = cVar42 - auVar21[3];
         auVar72[4] = cVar43 - auVar21[4];
         auVar72[5] = cVar44 - auVar21[5];
         auVar72[6] = cVar45 - auVar21[6];
         auVar72[7] = cVar46 - auVar21[7];
         auVar72[8] = cVar47 - auVar21[8];
         auVar72[9] = cVar48 - auVar21[9];
         auVar72[10] = cVar49 - auVar21[10];
         auVar72[0xb] = cVar50 - auVar21[0xb];
         auVar72[0xc] = cVar51 - auVar21[0xc];
         auVar72[0xd] = cVar52 - auVar21[0xd];
         auVar72[0xe] = cVar53 - auVar21[0xe];
         auVar72[0xf] = cVar54 - auVar21[0xf];
         cVar56 = pavgb(auVar72[0], auVar55[0]);
         cVar57 = pavgb(auVar72[1], auVar55[1]);
         cVar58 = pavgb(auVar72[2], auVar55[2]);
         cVar59 = pavgb(auVar72[3], auVar55[3]);
         cVar60 = pavgb(auVar72[4], auVar55[4]);
         cVar61 = pavgb(auVar72[5], auVar55[5]);
         cVar62 = pavgb(auVar72[6], auVar55[6]);
         cVar63 = pavgb(auVar72[7], auVar55[7]);
         cVar64 = pavgb(auVar72[8], auVar55[8]);
         cVar65 = pavgb(auVar72[9], auVar55[9]);
         cVar66 = pavgb(auVar72[10], auVar55[10]);
         cVar67 = pavgb(auVar72[0xb], auVar55[0xb]);
         cVar68 = pavgb(auVar72[0xc], auVar55[0xc]);
         cVar69 = pavgb(auVar72[0xd], auVar55[0xd]);
         cVar70 = pavgb(auVar72[0xe], auVar55[0xe]);
         cVar71 = pavgb(auVar72[0xf], auVar55[0xf]);
         cVar38 = pavgb(auVar72[0], auVar73[0]);
         cVar40 = pavgb(auVar72[1], auVar73[1]);
         cVar41 = pavgb(auVar72[2], auVar73[2]);
         cVar42 = pavgb(auVar72[3], auVar73[3]);
         cVar43 = pavgb(auVar72[4], auVar73[4]);
         cVar44 = pavgb(auVar72[5], auVar73[5]);
         cVar45 = pavgb(auVar72[6], auVar73[6]);
         cVar46 = pavgb(auVar72[7], auVar73[7]);
         cVar47 = pavgb(auVar72[8], auVar73[8]);
         cVar48 = pavgb(auVar72[9], auVar73[9]);
         cVar49 = pavgb(auVar72[10], auVar73[10]);
         cVar50 = pavgb(auVar72[0xb], auVar73[0xb]);
         cVar51 = pavgb(auVar72[0xc], auVar73[0xc]);
         cVar52 = pavgb(auVar72[0xd], auVar73[0xd]);
         cVar53 = pavgb(auVar72[0xe], auVar73[0xe]);
         cVar54 = pavgb(auVar72[0xf], auVar73[0xf]);
         auVar21 = ( auVar55 ^ auVar72 | ( auVar5 ^ auVar4 ) & auVar74 ) & __LC0;
         cVar56 = cVar56 - auVar21[0];
         cVar57 = cVar57 - auVar21[1];
         cVar58 = cVar58 - auVar21[2];
         cVar59 = cVar59 - auVar21[3];
         cVar60 = cVar60 - auVar21[4];
         cVar61 = cVar61 - auVar21[5];
         cVar62 = cVar62 - auVar21[6];
         cVar63 = cVar63 - auVar21[7];
         cVar64 = cVar64 - auVar21[8];
         cVar65 = cVar65 - auVar21[9];
         cVar66 = cVar66 - auVar21[10];
         cVar67 = cVar67 - auVar21[0xb];
         cVar68 = cVar68 - auVar21[0xc];
         cVar69 = cVar69 - auVar21[0xd];
         cVar70 = cVar70 - auVar21[0xe];
         cVar71 = cVar71 - auVar21[0xf];
         auVar21 = ( ( auVar3 ^ auVar6 ) & auVar74 | auVar73 ^ auVar72 ) & __LC0;
         local_1f0 = pavgb(auVar3[0], cVar56);
         uStack_1ee = pavgb(auVar3[1], cVar57);
         uStack_1ec = pavgb(auVar3[2], cVar58);
         uStack_1ea = pavgb(auVar3[3], cVar59);
         uStack_1e8 = pavgb(auVar3[4], cVar60);
         uStack_1e6 = pavgb(auVar3[5], cVar61);
         uStack_1e4 = pavgb(auVar3[6], cVar62);
         uStack_1e2 = pavgb(auVar3[7], cVar63);
         local_1e0 = pavgb(auVar3[8], cVar64);
         uStack_1de = pavgb(auVar3[9], cVar65);
         uStack_1dc = pavgb(auVar3[10], cVar66);
         uStack_1da = pavgb(auVar3[0xb], cVar67);
         uStack_1d8 = pavgb(auVar3[0xc], cVar68);
         uStack_1d6 = pavgb(auVar3[0xd], cVar69);
         uStack_1d4 = pavgb(auVar3[0xe], cVar70);
         uStack_1d2 = pavgb(auVar3[0xf], cVar71);
         cVar38 = cVar38 - auVar21[0];
         cVar40 = cVar40 - auVar21[1];
         cVar41 = cVar41 - auVar21[2];
         cVar42 = cVar42 - auVar21[3];
         cVar43 = cVar43 - auVar21[4];
         cVar44 = cVar44 - auVar21[5];
         cVar45 = cVar45 - auVar21[6];
         cVar46 = cVar46 - auVar21[7];
         cVar47 = cVar47 - auVar21[8];
         cVar48 = cVar48 - auVar21[9];
         cVar49 = cVar49 - auVar21[10];
         cVar50 = cVar50 - auVar21[0xb];
         cVar51 = cVar51 - auVar21[0xc];
         cVar52 = cVar52 - auVar21[0xd];
         cVar53 = cVar53 - auVar21[0xe];
         cVar54 = cVar54 - auVar21[0xf];
         uStack_1ef = pavgb(auVar5[0], cVar38);
         uStack_1ed = pavgb(auVar5[1], cVar40);
         uStack_1eb = pavgb(auVar5[2], cVar41);
         uStack_1e9 = pavgb(auVar5[3], cVar42);
         uStack_1e7 = pavgb(auVar5[4], cVar43);
         uStack_1e5 = pavgb(auVar5[5], cVar44);
         uStack_1e3 = pavgb(auVar5[6], cVar45);
         uStack_1e1 = pavgb(auVar5[7], cVar46);
         uStack_1df = pavgb(auVar5[8], cVar47);
         uStack_1dd = pavgb(auVar5[9], cVar48);
         uStack_1db = pavgb(auVar5[10], cVar49);
         uStack_1d9 = pavgb(auVar5[0xb], cVar50);
         uStack_1d7 = pavgb(auVar5[0xc], cVar51);
         uStack_1d5 = pavgb(auVar5[0xd], cVar52);
         uStack_1d3 = pavgb(auVar5[0xe], cVar53);
         uStack_1d1 = pavgb(auVar5[0xf], cVar54);
         uVar22 = pavgb(auVar4[0], cVar38);
         uVar23 = pavgb(auVar4[1], cVar40);
         uVar24 = pavgb(auVar4[2], cVar41);
         uVar25 = pavgb(auVar4[3], cVar42);
         uVar26 = pavgb(auVar4[4], cVar43);
         uVar27 = pavgb(auVar4[5], cVar44);
         uVar28 = pavgb(auVar4[6], cVar45);
         uVar29 = pavgb(auVar4[7], cVar46);
         local_1a0 = pavgb(auVar4[8], cVar47);
         uStack_19e = pavgb(auVar4[9], cVar48);
         uStack_19c = pavgb(auVar4[10], cVar49);
         uStack_19a = pavgb(auVar4[0xb], cVar50);
         uStack_198 = pavgb(auVar4[0xc], cVar51);
         uStack_196 = pavgb(auVar4[0xd], cVar52);
         uStack_194 = pavgb(auVar4[0xe], cVar53);
         uStack_192 = pavgb(auVar4[0xf], cVar54);
         uVar30 = pavgb(auVar6[0], cVar56);
         uVar31 = pavgb(auVar6[1], cVar57);
         uVar32 = pavgb(auVar6[2], cVar58);
         uVar33 = pavgb(auVar6[3], cVar59);
         uVar34 = pavgb(auVar6[4], cVar60);
         uVar35 = pavgb(auVar6[5], cVar61);
         uVar36 = pavgb(auVar6[6], cVar62);
         uVar37 = pavgb(auVar6[7], cVar63);
         uStack_19f = pavgb(auVar6[8], cVar64);
         uStack_19d = pavgb(auVar6[9], cVar65);
         uStack_19b = pavgb(auVar6[10], cVar66);
         uStack_199 = pavgb(auVar6[0xb], cVar67);
         uStack_197 = pavgb(auVar6[0xc], cVar68);
         uStack_195 = pavgb(auVar6[0xd], cVar69);
         uStack_193 = pavgb(auVar6[0xe], cVar70);
         uStack_191 = pavgb(auVar6[0xf], cVar71);
         local_1b0._8_8_ = ( undefined8 )(CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar37, uVar29), uVar36), uVar28), uVar35), uVar27), uVar34), CONCAT11(uVar26, uVar29)) >> 8);
         local_1b0[7] = uVar33;
         local_1b0[6] = uVar25;
         local_1b0[5] = uVar32;
         local_1b0[4] = uVar24;
         local_1b0[3] = uVar31;
         local_1b0[2] = uVar23;
         local_1b0[1] = uVar30;
         local_1b0[0] = uVar22;
         VP8YuvToBgra32_SSE2(local_2c8, &local_210, &local_1f0, local_2d0);
         if (param_2 != (byte*)0x0) {
            VP8YuvToBgra32_SSE2(local_2b8, &local_1d0, local_1b0, local_2c0);
         }

         local_2c8 = local_2c8 + 0x20;
         lVar11 = lVar11 + 0x10;
         local_2d0 = local_2d0 + 0x80;
         local_2b8 = local_2b8 + 0x20;
         local_2c0 = local_2c0 + 0x80;
      }
 while ( (ulong)uVar14 << 4 != lVar11 );
      iVar17 = uVar14 * 0x10;
      iVar13 = uVar15 * 0x20 + 0x21;
   }

   iVar8 = ( param_9 + 1 >> 1 ) - ( iVar13 >> 1 );
   uVar16 = (ulong)iVar8;
   __dest = (undefined1*)0x0;
   if (param_2 != (byte*)0x0) {
      __dest = local_70;
   }

   puVar20 = local_258;
   __memcpy_chk(puVar20, param_3 + iVar17, uVar16, 0x11);
   __memcpy_chk(local_238, param_5 + iVar17, uVar16, 0x11);
   iVar10 = iVar8 + -1;
   lVar11 = (long)( 0x11 - iVar8 );
   puVar1 = puVar20 + uVar16;
   uVar9 = 0x11;
   if (0x10 < uVar16) {
      uVar9 = uVar16;
   }

   lVar12 = uVar9 - uVar16;
   __memset_chk(puVar1, local_258[iVar10], lVar11);
   puVar2 = local_238 + uVar16;
   __memset_chk(puVar2, local_238[iVar10], lVar11, lVar12);
   Upsample32Pixels_SSE2(puVar20, local_238, &local_210, 0x11);
   __memcpy_chk();
   __memcpy_chk(local_238, param_6 + iVar17, uVar16, 0x11);
   __memset_chk(puVar1, local_258[iVar10], lVar11, lVar12);
   __memset_chk(puVar2, local_238[iVar10], lVar11, lVar12);
   Upsample32Pixels_SSE2(puVar20, local_238, &local_1f0);
   param_9 = param_9 - iVar13;
   __n = (size_t)( param_9 * 4 );
   memcpy(local_90, param_1 + iVar13, (long)param_9);
   param_7 = param_7 + ( iVar13 << 2 );
   if (param_2 == (byte*)0x0) {
      VP8YuvToBgra32_SSE2(local_90, &local_210, &local_1f0, local_190);
      if (__dest == (undefined1*)0x0) {
         memcpy(param_7, local_190, __n);
      }
 else {
         VP8YuvToBgra32_SSE2(__dest, &local_1d0, local_1b0, local_110);
         memcpy(param_7, local_190, __n);
      }

   }
 else {
      memcpy(__dest, param_2 + iVar13, (long)param_9);
      VP8YuvToBgra32_SSE2(local_90, &local_210, &local_1f0, local_190);
      VP8YuvToBgra32_SSE2(__dest, &local_1d0, local_1b0, local_110);
      memcpy(param_7, local_190, __n);
      memcpy(param_8 + ( iVar13 << 2 ), local_110, __n);
   }

   LAB_00102047:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void UpsampleBgrLinePair_SSE2(byte *param_1, byte *param_2, byte *param_3, byte *param_4, byte *param_5, byte *param_6, char *param_7, char *param_8, int param_9) {
   undefined1 *puVar1;
   undefined1 *puVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   byte bVar7;
   int iVar8;
   ulong uVar9;
   long lVar10;
   int iVar11;
   long lVar12;
   int iVar13;
   uint uVar14;
   uint uVar15;
   ulong uVar16;
   size_t __n;
   int iVar17;
   int iVar18;
   undefined8 *puVar19;
   undefined1 *__dest;
   undefined1 *puVar20;
   long in_FS_OFFSET;
   undefined1 auVar21[16];
   undefined1 uVar22;
   undefined1 uVar23;
   undefined1 uVar24;
   undefined1 uVar25;
   undefined1 uVar26;
   undefined1 uVar27;
   undefined1 uVar28;
   undefined1 uVar29;
   undefined1 uVar30;
   undefined1 uVar31;
   undefined1 uVar32;
   undefined1 uVar33;
   undefined1 uVar34;
   undefined1 uVar35;
   undefined1 uVar36;
   undefined1 uVar37;
   char cVar38;
   char cVar40;
   char cVar41;
   char cVar42;
   char cVar43;
   char cVar44;
   char cVar45;
   char cVar46;
   char cVar47;
   char cVar48;
   char cVar49;
   char cVar50;
   char cVar51;
   char cVar52;
   char cVar53;
   char cVar54;
   undefined1 auVar39[16];
   undefined1 auVar55[16];
   char cVar56;
   char cVar57;
   char cVar58;
   char cVar59;
   char cVar60;
   char cVar61;
   char cVar62;
   char cVar63;
   char cVar64;
   char cVar65;
   char cVar66;
   char cVar67;
   char cVar68;
   char cVar69;
   char cVar70;
   char cVar71;
   undefined1 auVar72[16];
   undefined1 auVar73[16];
   undefined1 auVar74[16];
   char *local_2d0;
   byte *local_2c8;
   char *local_2c0;
   byte *local_2b8;
   undefined1 local_258[32];
   undefined1 local_238[32];
   undefined8 local_218;
   undefined1 local_210;
   undefined1 uStack_20f;
   undefined1 uStack_20e;
   undefined1 uStack_20d;
   undefined1 uStack_20c;
   undefined1 uStack_20b;
   undefined1 uStack_20a;
   undefined1 uStack_209;
   undefined1 uStack_208;
   undefined1 uStack_207;
   undefined1 uStack_206;
   undefined1 uStack_205;
   undefined1 uStack_204;
   undefined1 uStack_203;
   undefined1 uStack_202;
   undefined1 uStack_201;
   undefined1 local_200;
   undefined1 uStack_1ff;
   undefined1 uStack_1fe;
   undefined1 uStack_1fd;
   undefined1 uStack_1fc;
   undefined1 uStack_1fb;
   undefined1 uStack_1fa;
   undefined1 uStack_1f9;
   undefined1 uStack_1f8;
   undefined1 uStack_1f7;
   undefined1 uStack_1f6;
   undefined1 uStack_1f5;
   undefined1 uStack_1f4;
   undefined1 uStack_1f3;
   undefined1 uStack_1f2;
   undefined1 uStack_1f1;
   undefined1 local_1f0;
   undefined1 uStack_1ef;
   undefined1 uStack_1ee;
   undefined1 uStack_1ed;
   undefined1 uStack_1ec;
   undefined1 uStack_1eb;
   undefined1 uStack_1ea;
   undefined1 uStack_1e9;
   undefined1 uStack_1e8;
   undefined1 uStack_1e7;
   undefined1 uStack_1e6;
   undefined1 uStack_1e5;
   undefined1 uStack_1e4;
   undefined1 uStack_1e3;
   undefined1 uStack_1e2;
   undefined1 uStack_1e1;
   undefined1 local_1e0;
   undefined1 uStack_1df;
   undefined1 uStack_1de;
   undefined1 uStack_1dd;
   undefined1 uStack_1dc;
   undefined1 uStack_1db;
   undefined1 uStack_1da;
   undefined1 uStack_1d9;
   undefined1 uStack_1d8;
   undefined1 uStack_1d7;
   undefined1 uStack_1d6;
   undefined1 uStack_1d5;
   undefined1 uStack_1d4;
   undefined1 uStack_1d3;
   undefined1 uStack_1d2;
   undefined1 uStack_1d1;
   undefined1 local_1d0;
   undefined1 uStack_1cf;
   undefined1 uStack_1ce;
   undefined1 uStack_1cd;
   undefined1 uStack_1cc;
   undefined1 uStack_1cb;
   undefined1 uStack_1ca;
   undefined1 uStack_1c9;
   undefined1 uStack_1c8;
   undefined1 uStack_1c7;
   undefined1 uStack_1c6;
   undefined1 uStack_1c5;
   undefined1 uStack_1c4;
   undefined1 uStack_1c3;
   undefined1 uStack_1c2;
   undefined1 uStack_1c1;
   undefined1 local_1c0;
   undefined1 uStack_1bf;
   undefined1 uStack_1be;
   undefined1 uStack_1bd;
   undefined1 uStack_1bc;
   undefined1 uStack_1bb;
   undefined1 uStack_1ba;
   undefined1 uStack_1b9;
   undefined1 uStack_1b8;
   undefined1 uStack_1b7;
   undefined1 uStack_1b6;
   undefined1 uStack_1b5;
   undefined1 uStack_1b4;
   undefined1 uStack_1b3;
   undefined1 uStack_1b2;
   undefined1 uStack_1b1;
   undefined1 local_1b0[16];
   undefined1 local_1a0;
   undefined1 uStack_19f;
   undefined1 uStack_19e;
   undefined1 uStack_19d;
   undefined1 uStack_19c;
   undefined1 uStack_19b;
   undefined1 uStack_19a;
   undefined1 uStack_199;
   undefined1 uStack_198;
   undefined1 uStack_197;
   undefined1 uStack_196;
   undefined1 uStack_195;
   undefined1 uStack_194;
   undefined1 uStack_193;
   undefined1 uStack_192;
   undefined1 uStack_191;
   undefined1 local_190[128];
   undefined1 local_110[128];
   undefined1 local_90[32];
   undefined1 local_70[48];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar17 = ( (int)( ( uint ) * param_5 + ( uint ) * param_3 ) >> 1 ) + 1;
   iVar13 = (int)( ( uint ) * param_3 + iVar17 ) >> 1;
   puVar19 = &local_218;
   for (lVar12 = 0x39; lVar12 != 0; lVar12 = lVar12 + -1) {
      *puVar19 = 0;
      puVar19 = puVar19 + 1;
   }

   bVar7 = *param_6;
   *(undefined2*)( (long)puVar19 + 4 ) = 0;
   *(undefined4*)puVar19 = 0;
   *(undefined1*)( (long)puVar19 + 6 ) = 0;
   iVar11 = ( (int)( (uint)bVar7 + ( uint ) * param_4 ) >> 1 ) + 1;
   iVar18 = (int)( ( uint ) * param_1 * 0x4a85 ) >> 8;
   uVar14 = iVar18 + -0x4515 + ( iVar13 * 0x811a >> 8 );
   iVar8 = (int)( ( uint ) * param_4 + iVar11 ) >> 1;
   if (uVar14 < 0x4000) {
      cVar38 = (char)( (int)uVar14 >> 6 );
   }
 else {
      cVar38 = (char)~(byte)(uVar14 >> 0x18) >> 7;
   }

   *param_7 = cVar38;
   uVar14 = ( ( iVar18 - ( iVar13 * 0x1913 >> 8 ) ) - ( iVar8 * 0x3408 >> 8 ) ) + 0x2204;
   if (uVar14 < 0x4000) {
      cVar38 = (char)( (int)uVar14 >> 6 );
   }
 else {
      cVar38 = (char)~(byte)(uVar14 >> 0x18) >> 7;
   }

   param_7[1] = cVar38;
   uVar14 = iVar18 + -0x379a + ( iVar8 * 0x6625 >> 8 );
   if (uVar14 < 0x4000) {
      cVar38 = (char)( (int)uVar14 >> 6 );
   }
 else {
      cVar38 = (char)~(byte)(uVar14 >> 0x18) >> 7;
   }

   param_7[2] = cVar38;
   if (param_2 != (byte*)0x0) {
      iVar8 = (int)( ( uint ) * param_5 + iVar17 ) >> 1;
      iVar13 = (int)( ( uint ) * param_6 + iVar11 ) >> 1;
      iVar17 = (int)( ( uint ) * param_2 * 0x4a85 ) >> 8;
      uVar14 = iVar17 + -0x4515 + ( iVar8 * 0x811a >> 8 );
      if (uVar14 < 0x4000) {
         cVar38 = (char)( (int)uVar14 >> 6 );
      }
 else {
         cVar38 = (char)~(byte)(uVar14 >> 0x18) >> 7;
      }

      *param_8 = cVar38;
      uVar14 = ( ( iVar17 - ( iVar8 * 0x1913 >> 8 ) ) - ( iVar13 * 0x3408 >> 8 ) ) + 0x2204;
      if (uVar14 < 0x4000) {
         cVar38 = (char)( (int)uVar14 >> 6 );
      }
 else {
         cVar38 = (char)~(byte)(uVar14 >> 0x18) >> 7;
      }

      param_8[1] = cVar38;
      uVar14 = iVar17 + -0x379a + ( iVar13 * 0x6625 >> 8 );
      if (uVar14 < 0x4000) {
         cVar38 = (char)( (int)uVar14 >> 6 );
      }
 else {
         cVar38 = (char)~(byte)(uVar14 >> 0x18) >> 7;
      }

      param_8[2] = cVar38;
   }

   if (param_9 < 0x22) {
      if (param_9 < 2) goto LAB_001028a2;
      iVar13 = 1;
      iVar17 = 0;
   }
 else {
      lVar12 = 0;
      local_2c8 = param_1 + 1;
      local_2d0 = param_7 + 3;
      local_2b8 = param_2 + 1;
      local_2c0 = param_8 + 3;
      uVar15 = param_9 - 0x22U >> 5;
      uVar14 = uVar15 + 1;
      do {
         auVar3 = *(undefined1(*) [16])( param_3 + lVar12 + 1 );
         auVar4 = *(undefined1(*) [16])( param_5 + lVar12 );
         auVar5 = *(undefined1(*) [16])( param_3 + lVar12 );
         auVar6 = *(undefined1(*) [16])( param_5 + lVar12 + 1 );
         for (int i = 0; i < 16; i++) {
            auVar74[i] = pavgb(auVar3[i], auVar4[i]);
         }

         for (int i = 0; i < 16; i++) {
            auVar21[i] = pavgb(auVar5[i], auVar6[i]);
         }

         auVar73 = auVar74 ^ auVar21;
         cVar38 = pavgb(auVar21[0], auVar74[0]);
         cVar40 = pavgb(auVar21[1], auVar74[1]);
         cVar41 = pavgb(auVar21[2], auVar74[2]);
         cVar42 = pavgb(auVar21[3], auVar74[3]);
         cVar43 = pavgb(auVar21[4], auVar74[4]);
         cVar44 = pavgb(auVar21[5], auVar74[5]);
         cVar45 = pavgb(auVar21[6], auVar74[6]);
         cVar46 = pavgb(auVar21[7], auVar74[7]);
         cVar47 = pavgb(auVar21[8], auVar74[8]);
         cVar48 = pavgb(auVar21[9], auVar74[9]);
         cVar49 = pavgb(auVar21[10], auVar74[10]);
         cVar50 = pavgb(auVar21[0xb], auVar74[0xb]);
         cVar51 = pavgb(auVar21[0xc], auVar74[0xc]);
         cVar52 = pavgb(auVar21[0xd], auVar74[0xd]);
         cVar53 = pavgb(auVar21[0xe], auVar74[0xe]);
         cVar54 = pavgb(auVar21[0xf], auVar74[0xf]);
         auVar55 = ( auVar3 ^ auVar4 | auVar5 ^ auVar6 | auVar73 ) & __LC0;
         auVar39[0] = cVar38 - auVar55[0];
         auVar39[1] = cVar40 - auVar55[1];
         auVar39[2] = cVar41 - auVar55[2];
         auVar39[3] = cVar42 - auVar55[3];
         auVar39[4] = cVar43 - auVar55[4];
         auVar39[5] = cVar44 - auVar55[5];
         auVar39[6] = cVar45 - auVar55[6];
         auVar39[7] = cVar46 - auVar55[7];
         auVar39[8] = cVar47 - auVar55[8];
         auVar39[9] = cVar48 - auVar55[9];
         auVar39[10] = cVar49 - auVar55[10];
         auVar39[0xb] = cVar50 - auVar55[0xb];
         auVar39[0xc] = cVar51 - auVar55[0xc];
         auVar39[0xd] = cVar52 - auVar55[0xd];
         auVar39[0xe] = cVar53 - auVar55[0xe];
         auVar39[0xf] = cVar54 - auVar55[0xf];
         cVar38 = pavgb(auVar39[0], auVar74[0]);
         cVar40 = pavgb(auVar39[1], auVar74[1]);
         cVar41 = pavgb(auVar39[2], auVar74[2]);
         cVar42 = pavgb(auVar39[3], auVar74[3]);
         cVar43 = pavgb(auVar39[4], auVar74[4]);
         cVar44 = pavgb(auVar39[5], auVar74[5]);
         cVar45 = pavgb(auVar39[6], auVar74[6]);
         cVar46 = pavgb(auVar39[7], auVar74[7]);
         cVar47 = pavgb(auVar39[8], auVar74[8]);
         cVar48 = pavgb(auVar39[9], auVar74[9]);
         cVar49 = pavgb(auVar39[10], auVar74[10]);
         cVar50 = pavgb(auVar39[0xb], auVar74[0xb]);
         cVar51 = pavgb(auVar39[0xc], auVar74[0xc]);
         cVar52 = pavgb(auVar39[0xd], auVar74[0xd]);
         cVar53 = pavgb(auVar39[0xe], auVar74[0xe]);
         cVar54 = pavgb(auVar39[0xf], auVar74[0xf]);
         cVar56 = pavgb(auVar39[0], auVar21[0]);
         cVar57 = pavgb(auVar39[1], auVar21[1]);
         cVar58 = pavgb(auVar39[2], auVar21[2]);
         cVar59 = pavgb(auVar39[3], auVar21[3]);
         cVar60 = pavgb(auVar39[4], auVar21[4]);
         cVar61 = pavgb(auVar39[5], auVar21[5]);
         cVar62 = pavgb(auVar39[6], auVar21[6]);
         cVar63 = pavgb(auVar39[7], auVar21[7]);
         cVar64 = pavgb(auVar39[8], auVar21[8]);
         cVar65 = pavgb(auVar39[9], auVar21[9]);
         cVar66 = pavgb(auVar39[10], auVar21[10]);
         cVar67 = pavgb(auVar39[0xb], auVar21[0xb]);
         cVar68 = pavgb(auVar39[0xc], auVar21[0xc]);
         cVar69 = pavgb(auVar39[0xd], auVar21[0xd]);
         cVar70 = pavgb(auVar39[0xe], auVar21[0xe]);
         cVar71 = pavgb(auVar39[0xf], auVar21[0xf]);
         auVar55 = ( auVar74 ^ auVar39 | ( auVar3 ^ auVar4 ) & auVar73 ) & __LC0;
         cVar38 = cVar38 - auVar55[0];
         cVar40 = cVar40 - auVar55[1];
         cVar41 = cVar41 - auVar55[2];
         cVar42 = cVar42 - auVar55[3];
         cVar43 = cVar43 - auVar55[4];
         cVar44 = cVar44 - auVar55[5];
         cVar45 = cVar45 - auVar55[6];
         cVar46 = cVar46 - auVar55[7];
         cVar47 = cVar47 - auVar55[8];
         cVar48 = cVar48 - auVar55[9];
         cVar49 = cVar49 - auVar55[10];
         cVar50 = cVar50 - auVar55[0xb];
         cVar51 = cVar51 - auVar55[0xc];
         cVar52 = cVar52 - auVar55[0xd];
         cVar53 = cVar53 - auVar55[0xe];
         cVar54 = cVar54 - auVar55[0xf];
         auVar21 = ( auVar21 ^ auVar39 | ( auVar5 ^ auVar6 ) & auVar73 ) & __LC0;
         cVar56 = cVar56 - auVar21[0];
         cVar57 = cVar57 - auVar21[1];
         cVar58 = cVar58 - auVar21[2];
         cVar59 = cVar59 - auVar21[3];
         cVar60 = cVar60 - auVar21[4];
         cVar61 = cVar61 - auVar21[5];
         cVar62 = cVar62 - auVar21[6];
         cVar63 = cVar63 - auVar21[7];
         cVar64 = cVar64 - auVar21[8];
         cVar65 = cVar65 - auVar21[9];
         cVar66 = cVar66 - auVar21[10];
         cVar67 = cVar67 - auVar21[0xb];
         cVar68 = cVar68 - auVar21[0xc];
         cVar69 = cVar69 - auVar21[0xd];
         cVar70 = cVar70 - auVar21[0xe];
         cVar71 = cVar71 - auVar21[0xf];
         local_210 = pavgb(auVar5[0], cVar38);
         uStack_20e = pavgb(auVar5[1], cVar40);
         uStack_20c = pavgb(auVar5[2], cVar41);
         uStack_20a = pavgb(auVar5[3], cVar42);
         uStack_208 = pavgb(auVar5[4], cVar43);
         uStack_206 = pavgb(auVar5[5], cVar44);
         uStack_204 = pavgb(auVar5[6], cVar45);
         uStack_202 = pavgb(auVar5[7], cVar46);
         local_200 = pavgb(auVar5[8], cVar47);
         uStack_1fe = pavgb(auVar5[9], cVar48);
         uStack_1fc = pavgb(auVar5[10], cVar49);
         uStack_1fa = pavgb(auVar5[0xb], cVar50);
         uStack_1f8 = pavgb(auVar5[0xc], cVar51);
         uStack_1f6 = pavgb(auVar5[0xd], cVar52);
         uStack_1f4 = pavgb(auVar5[0xe], cVar53);
         uStack_1f2 = pavgb(auVar5[0xf], cVar54);
         uStack_20f = pavgb(auVar3[0], cVar56);
         uStack_20d = pavgb(auVar3[1], cVar57);
         uStack_20b = pavgb(auVar3[2], cVar58);
         uStack_209 = pavgb(auVar3[3], cVar59);
         uStack_207 = pavgb(auVar3[4], cVar60);
         uStack_205 = pavgb(auVar3[5], cVar61);
         uStack_203 = pavgb(auVar3[6], cVar62);
         uStack_201 = pavgb(auVar3[7], cVar63);
         uStack_1ff = pavgb(auVar3[8], cVar64);
         uStack_1fd = pavgb(auVar3[9], cVar65);
         uStack_1fb = pavgb(auVar3[10], cVar66);
         uStack_1f9 = pavgb(auVar3[0xb], cVar67);
         uStack_1f7 = pavgb(auVar3[0xc], cVar68);
         uStack_1f5 = pavgb(auVar3[0xd], cVar69);
         uStack_1f3 = pavgb(auVar3[0xe], cVar70);
         uStack_1f1 = pavgb(auVar3[0xf], cVar71);
         local_1d0 = pavgb(auVar4[0], cVar56);
         uStack_1ce = pavgb(auVar4[1], cVar57);
         uStack_1cc = pavgb(auVar4[2], cVar58);
         uStack_1ca = pavgb(auVar4[3], cVar59);
         uStack_1c8 = pavgb(auVar4[4], cVar60);
         uStack_1c6 = pavgb(auVar4[5], cVar61);
         uStack_1c4 = pavgb(auVar4[6], cVar62);
         uStack_1c2 = pavgb(auVar4[7], cVar63);
         local_1c0 = pavgb(auVar4[8], cVar64);
         uStack_1be = pavgb(auVar4[9], cVar65);
         uStack_1bc = pavgb(auVar4[10], cVar66);
         uStack_1ba = pavgb(auVar4[0xb], cVar67);
         uStack_1b8 = pavgb(auVar4[0xc], cVar68);
         uStack_1b6 = pavgb(auVar4[0xd], cVar69);
         uStack_1b4 = pavgb(auVar4[0xe], cVar70);
         uStack_1b2 = pavgb(auVar4[0xf], cVar71);
         uStack_1cf = pavgb(auVar6[0], cVar38);
         uStack_1cd = pavgb(auVar6[1], cVar40);
         uStack_1cb = pavgb(auVar6[2], cVar41);
         uStack_1c9 = pavgb(auVar6[3], cVar42);
         uStack_1c7 = pavgb(auVar6[4], cVar43);
         uStack_1c5 = pavgb(auVar6[5], cVar44);
         uStack_1c3 = pavgb(auVar6[6], cVar45);
         uStack_1c1 = pavgb(auVar6[7], cVar46);
         uStack_1bf = pavgb(auVar6[8], cVar47);
         uStack_1bd = pavgb(auVar6[9], cVar48);
         uStack_1bb = pavgb(auVar6[10], cVar49);
         uStack_1b9 = pavgb(auVar6[0xb], cVar50);
         uStack_1b7 = pavgb(auVar6[0xc], cVar51);
         uStack_1b5 = pavgb(auVar6[0xd], cVar52);
         uStack_1b3 = pavgb(auVar6[0xe], cVar53);
         uStack_1b1 = pavgb(auVar6[0xf], cVar54);
         auVar3 = *(undefined1(*) [16])( param_4 + lVar12 );
         auVar4 = *(undefined1(*) [16])( param_6 + lVar12 );
         auVar5 = *(undefined1(*) [16])( param_4 + lVar12 + 1 );
         auVar6 = *(undefined1(*) [16])( param_6 + lVar12 + 1 );
         for (int i = 0; i < 16; i++) {
            auVar73[i] = pavgb(auVar3[i], auVar6[i]);
         }

         for (int i = 0; i < 16; i++) {
            auVar55[i] = pavgb(auVar5[i], auVar4[i]);
         }

         auVar74 = auVar55 ^ auVar73;
         cVar38 = pavgb(auVar73[0], auVar55[0]);
         cVar40 = pavgb(auVar73[1], auVar55[1]);
         cVar41 = pavgb(auVar73[2], auVar55[2]);
         cVar42 = pavgb(auVar73[3], auVar55[3]);
         cVar43 = pavgb(auVar73[4], auVar55[4]);
         cVar44 = pavgb(auVar73[5], auVar55[5]);
         cVar45 = pavgb(auVar73[6], auVar55[6]);
         cVar46 = pavgb(auVar73[7], auVar55[7]);
         cVar47 = pavgb(auVar73[8], auVar55[8]);
         cVar48 = pavgb(auVar73[9], auVar55[9]);
         cVar49 = pavgb(auVar73[10], auVar55[10]);
         cVar50 = pavgb(auVar73[0xb], auVar55[0xb]);
         cVar51 = pavgb(auVar73[0xc], auVar55[0xc]);
         cVar52 = pavgb(auVar73[0xd], auVar55[0xd]);
         cVar53 = pavgb(auVar73[0xe], auVar55[0xe]);
         cVar54 = pavgb(auVar73[0xf], auVar55[0xf]);
         auVar21 = ( auVar5 ^ auVar4 | auVar3 ^ auVar6 | auVar74 ) & __LC0;
         auVar72[0] = cVar38 - auVar21[0];
         auVar72[1] = cVar40 - auVar21[1];
         auVar72[2] = cVar41 - auVar21[2];
         auVar72[3] = cVar42 - auVar21[3];
         auVar72[4] = cVar43 - auVar21[4];
         auVar72[5] = cVar44 - auVar21[5];
         auVar72[6] = cVar45 - auVar21[6];
         auVar72[7] = cVar46 - auVar21[7];
         auVar72[8] = cVar47 - auVar21[8];
         auVar72[9] = cVar48 - auVar21[9];
         auVar72[10] = cVar49 - auVar21[10];
         auVar72[0xb] = cVar50 - auVar21[0xb];
         auVar72[0xc] = cVar51 - auVar21[0xc];
         auVar72[0xd] = cVar52 - auVar21[0xd];
         auVar72[0xe] = cVar53 - auVar21[0xe];
         auVar72[0xf] = cVar54 - auVar21[0xf];
         cVar56 = pavgb(auVar72[0], auVar55[0]);
         cVar57 = pavgb(auVar72[1], auVar55[1]);
         cVar58 = pavgb(auVar72[2], auVar55[2]);
         cVar59 = pavgb(auVar72[3], auVar55[3]);
         cVar60 = pavgb(auVar72[4], auVar55[4]);
         cVar61 = pavgb(auVar72[5], auVar55[5]);
         cVar62 = pavgb(auVar72[6], auVar55[6]);
         cVar63 = pavgb(auVar72[7], auVar55[7]);
         cVar64 = pavgb(auVar72[8], auVar55[8]);
         cVar65 = pavgb(auVar72[9], auVar55[9]);
         cVar66 = pavgb(auVar72[10], auVar55[10]);
         cVar67 = pavgb(auVar72[0xb], auVar55[0xb]);
         cVar68 = pavgb(auVar72[0xc], auVar55[0xc]);
         cVar69 = pavgb(auVar72[0xd], auVar55[0xd]);
         cVar70 = pavgb(auVar72[0xe], auVar55[0xe]);
         cVar71 = pavgb(auVar72[0xf], auVar55[0xf]);
         cVar38 = pavgb(auVar72[0], auVar73[0]);
         cVar40 = pavgb(auVar72[1], auVar73[1]);
         cVar41 = pavgb(auVar72[2], auVar73[2]);
         cVar42 = pavgb(auVar72[3], auVar73[3]);
         cVar43 = pavgb(auVar72[4], auVar73[4]);
         cVar44 = pavgb(auVar72[5], auVar73[5]);
         cVar45 = pavgb(auVar72[6], auVar73[6]);
         cVar46 = pavgb(auVar72[7], auVar73[7]);
         cVar47 = pavgb(auVar72[8], auVar73[8]);
         cVar48 = pavgb(auVar72[9], auVar73[9]);
         cVar49 = pavgb(auVar72[10], auVar73[10]);
         cVar50 = pavgb(auVar72[0xb], auVar73[0xb]);
         cVar51 = pavgb(auVar72[0xc], auVar73[0xc]);
         cVar52 = pavgb(auVar72[0xd], auVar73[0xd]);
         cVar53 = pavgb(auVar72[0xe], auVar73[0xe]);
         cVar54 = pavgb(auVar72[0xf], auVar73[0xf]);
         auVar21 = ( auVar55 ^ auVar72 | ( auVar5 ^ auVar4 ) & auVar74 ) & __LC0;
         cVar56 = cVar56 - auVar21[0];
         cVar57 = cVar57 - auVar21[1];
         cVar58 = cVar58 - auVar21[2];
         cVar59 = cVar59 - auVar21[3];
         cVar60 = cVar60 - auVar21[4];
         cVar61 = cVar61 - auVar21[5];
         cVar62 = cVar62 - auVar21[6];
         cVar63 = cVar63 - auVar21[7];
         cVar64 = cVar64 - auVar21[8];
         cVar65 = cVar65 - auVar21[9];
         cVar66 = cVar66 - auVar21[10];
         cVar67 = cVar67 - auVar21[0xb];
         cVar68 = cVar68 - auVar21[0xc];
         cVar69 = cVar69 - auVar21[0xd];
         cVar70 = cVar70 - auVar21[0xe];
         cVar71 = cVar71 - auVar21[0xf];
         auVar21 = ( ( auVar3 ^ auVar6 ) & auVar74 | auVar73 ^ auVar72 ) & __LC0;
         local_1f0 = pavgb(auVar3[0], cVar56);
         uStack_1ee = pavgb(auVar3[1], cVar57);
         uStack_1ec = pavgb(auVar3[2], cVar58);
         uStack_1ea = pavgb(auVar3[3], cVar59);
         uStack_1e8 = pavgb(auVar3[4], cVar60);
         uStack_1e6 = pavgb(auVar3[5], cVar61);
         uStack_1e4 = pavgb(auVar3[6], cVar62);
         uStack_1e2 = pavgb(auVar3[7], cVar63);
         local_1e0 = pavgb(auVar3[8], cVar64);
         uStack_1de = pavgb(auVar3[9], cVar65);
         uStack_1dc = pavgb(auVar3[10], cVar66);
         uStack_1da = pavgb(auVar3[0xb], cVar67);
         uStack_1d8 = pavgb(auVar3[0xc], cVar68);
         uStack_1d6 = pavgb(auVar3[0xd], cVar69);
         uStack_1d4 = pavgb(auVar3[0xe], cVar70);
         uStack_1d2 = pavgb(auVar3[0xf], cVar71);
         cVar38 = cVar38 - auVar21[0];
         cVar40 = cVar40 - auVar21[1];
         cVar41 = cVar41 - auVar21[2];
         cVar42 = cVar42 - auVar21[3];
         cVar43 = cVar43 - auVar21[4];
         cVar44 = cVar44 - auVar21[5];
         cVar45 = cVar45 - auVar21[6];
         cVar46 = cVar46 - auVar21[7];
         cVar47 = cVar47 - auVar21[8];
         cVar48 = cVar48 - auVar21[9];
         cVar49 = cVar49 - auVar21[10];
         cVar50 = cVar50 - auVar21[0xb];
         cVar51 = cVar51 - auVar21[0xc];
         cVar52 = cVar52 - auVar21[0xd];
         cVar53 = cVar53 - auVar21[0xe];
         cVar54 = cVar54 - auVar21[0xf];
         uStack_1ef = pavgb(auVar5[0], cVar38);
         uStack_1ed = pavgb(auVar5[1], cVar40);
         uStack_1eb = pavgb(auVar5[2], cVar41);
         uStack_1e9 = pavgb(auVar5[3], cVar42);
         uStack_1e7 = pavgb(auVar5[4], cVar43);
         uStack_1e5 = pavgb(auVar5[5], cVar44);
         uStack_1e3 = pavgb(auVar5[6], cVar45);
         uStack_1e1 = pavgb(auVar5[7], cVar46);
         uStack_1df = pavgb(auVar5[8], cVar47);
         uStack_1dd = pavgb(auVar5[9], cVar48);
         uStack_1db = pavgb(auVar5[10], cVar49);
         uStack_1d9 = pavgb(auVar5[0xb], cVar50);
         uStack_1d7 = pavgb(auVar5[0xc], cVar51);
         uStack_1d5 = pavgb(auVar5[0xd], cVar52);
         uStack_1d3 = pavgb(auVar5[0xe], cVar53);
         uStack_1d1 = pavgb(auVar5[0xf], cVar54);
         uVar22 = pavgb(auVar4[0], cVar38);
         uVar23 = pavgb(auVar4[1], cVar40);
         uVar24 = pavgb(auVar4[2], cVar41);
         uVar25 = pavgb(auVar4[3], cVar42);
         uVar26 = pavgb(auVar4[4], cVar43);
         uVar27 = pavgb(auVar4[5], cVar44);
         uVar28 = pavgb(auVar4[6], cVar45);
         uVar29 = pavgb(auVar4[7], cVar46);
         local_1a0 = pavgb(auVar4[8], cVar47);
         uStack_19e = pavgb(auVar4[9], cVar48);
         uStack_19c = pavgb(auVar4[10], cVar49);
         uStack_19a = pavgb(auVar4[0xb], cVar50);
         uStack_198 = pavgb(auVar4[0xc], cVar51);
         uStack_196 = pavgb(auVar4[0xd], cVar52);
         uStack_194 = pavgb(auVar4[0xe], cVar53);
         uStack_192 = pavgb(auVar4[0xf], cVar54);
         uVar30 = pavgb(auVar6[0], cVar56);
         uVar31 = pavgb(auVar6[1], cVar57);
         uVar32 = pavgb(auVar6[2], cVar58);
         uVar33 = pavgb(auVar6[3], cVar59);
         uVar34 = pavgb(auVar6[4], cVar60);
         uVar35 = pavgb(auVar6[5], cVar61);
         uVar36 = pavgb(auVar6[6], cVar62);
         uVar37 = pavgb(auVar6[7], cVar63);
         uStack_19f = pavgb(auVar6[8], cVar64);
         uStack_19d = pavgb(auVar6[9], cVar65);
         uStack_19b = pavgb(auVar6[10], cVar66);
         uStack_199 = pavgb(auVar6[0xb], cVar67);
         uStack_197 = pavgb(auVar6[0xc], cVar68);
         uStack_195 = pavgb(auVar6[0xd], cVar69);
         uStack_193 = pavgb(auVar6[0xe], cVar70);
         uStack_191 = pavgb(auVar6[0xf], cVar71);
         local_1b0._8_8_ = ( undefined8 )(CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar37, uVar29), uVar36), uVar28), uVar35), uVar27), uVar34), CONCAT11(uVar26, uVar29)) >> 8);
         local_1b0[7] = uVar33;
         local_1b0[6] = uVar25;
         local_1b0[5] = uVar32;
         local_1b0[4] = uVar24;
         local_1b0[3] = uVar31;
         local_1b0[2] = uVar23;
         local_1b0[1] = uVar30;
         local_1b0[0] = uVar22;
         VP8YuvToBgr32_SSE2(local_2c8, &local_210, &local_1f0, local_2d0);
         if (param_2 != (byte*)0x0) {
            VP8YuvToBgr32_SSE2(local_2b8, &local_1d0, local_1b0, local_2c0);
         }

         local_2c8 = local_2c8 + 0x20;
         lVar12 = lVar12 + 0x10;
         local_2d0 = local_2d0 + 0x60;
         local_2b8 = local_2b8 + 0x20;
         local_2c0 = local_2c0 + 0x60;
      }
 while ( (ulong)uVar14 << 4 != lVar12 );
      iVar17 = uVar14 * 0x10;
      iVar13 = uVar15 * 0x20 + 0x21;
   }

   iVar8 = ( param_9 + 1 >> 1 ) - ( iVar13 >> 1 );
   uVar16 = (ulong)iVar8;
   __dest = (undefined1*)0x0;
   if (param_2 != (byte*)0x0) {
      __dest = local_70;
   }

   puVar20 = local_258;
   __memcpy_chk(puVar20, param_3 + iVar17, uVar16, 0x11);
   __memcpy_chk(local_238, param_5 + iVar17, uVar16, 0x11);
   iVar11 = iVar8 + -1;
   lVar12 = (long)( 0x11 - iVar8 );
   puVar1 = puVar20 + uVar16;
   uVar9 = 0x11;
   if (0x10 < uVar16) {
      uVar9 = uVar16;
   }

   lVar10 = uVar9 - uVar16;
   __memset_chk(puVar1, local_258[iVar11], lVar12, lVar10);
   puVar2 = local_238 + uVar16;
   __memset_chk(puVar2, local_238[iVar11], lVar12, lVar10);
   Upsample32Pixels_SSE2(puVar20, local_238, &local_210, 0x11);
   __memcpy_chk();
   __memcpy_chk(local_238, param_6 + iVar17, uVar16, 0x11);
   __memset_chk(puVar1, local_258[iVar11], lVar12, lVar10);
   __memset_chk(puVar2, local_238[iVar11], lVar12, lVar10);
   Upsample32Pixels_SSE2(puVar20, local_238, &local_1f0);
   param_9 = param_9 - iVar13;
   __n = (size_t)( param_9 * 3 );
   memcpy(local_90, param_1 + iVar13, (long)param_9);
   param_7 = param_7 + iVar13 * 3;
   if (param_2 == (byte*)0x0) {
      VP8YuvToBgr32_SSE2(local_90, &local_210, &local_1f0, local_190);
      if (__dest == (undefined1*)0x0) {
         memcpy(param_7, local_190, __n);
      }
 else {
         VP8YuvToBgr32_SSE2(__dest, &local_1d0, local_1b0, local_110);
         memcpy(param_7, local_190, __n);
      }

   }
 else {
      memcpy(__dest, param_2 + iVar13, (long)param_9);
      VP8YuvToBgr32_SSE2(local_90, &local_210, &local_1f0, local_190);
      VP8YuvToBgr32_SSE2(__dest, &local_1d0, local_1b0, local_110);
      memcpy(param_7, local_190, __n);
      memcpy(param_8 + iVar13 * 3, local_110, __n);
   }

   LAB_001028a2:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void UpsampleArgbLinePair_SSE2(byte *param_1, byte *param_2, byte *param_3, byte *param_4, byte *param_5, byte *param_6, undefined1 *param_7, undefined1 *param_8, int param_9) {
   undefined1 *puVar1;
   undefined1 *puVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   byte bVar7;
   byte bVar8;
   byte bVar9;
   byte bVar10;
   int iVar11;
   ulong uVar12;
   uint uVar13;
   long lVar14;
   int iVar15;
   uint uVar16;
   long lVar17;
   int iVar18;
   ulong uVar19;
   size_t __n;
   int iVar20;
   undefined1 *__dest;
   int iVar21;
   undefined8 *puVar22;
   undefined1 *puVar23;
   long in_FS_OFFSET;
   undefined1 auVar24[16];
   undefined1 uVar25;
   undefined1 uVar26;
   undefined1 uVar27;
   undefined1 uVar28;
   undefined1 uVar29;
   undefined1 uVar30;
   undefined1 uVar31;
   undefined1 uVar32;
   undefined1 uVar33;
   undefined1 uVar34;
   undefined1 uVar35;
   undefined1 uVar36;
   undefined1 uVar37;
   undefined1 uVar38;
   undefined1 uVar39;
   undefined1 uVar40;
   char cVar41;
   char cVar43;
   char cVar44;
   char cVar45;
   char cVar46;
   char cVar47;
   char cVar48;
   char cVar49;
   char cVar50;
   char cVar51;
   char cVar52;
   char cVar53;
   char cVar54;
   char cVar55;
   char cVar56;
   char cVar57;
   undefined1 auVar42[16];
   undefined1 auVar58[16];
   char cVar59;
   char cVar60;
   char cVar61;
   char cVar62;
   char cVar63;
   char cVar64;
   char cVar65;
   char cVar66;
   char cVar67;
   char cVar68;
   char cVar69;
   char cVar70;
   char cVar71;
   char cVar72;
   char cVar73;
   char cVar74;
   undefined1 auVar75[16];
   undefined1 auVar76[16];
   undefined1 auVar77[16];
   undefined1 *local_2d0;
   byte *local_2c8;
   undefined1 *local_2c0;
   byte *local_2b8;
   undefined1 local_258[32];
   undefined1 local_238[32];
   undefined8 local_218;
   undefined1 local_210;
   undefined1 uStack_20f;
   undefined1 uStack_20e;
   undefined1 uStack_20d;
   undefined1 uStack_20c;
   undefined1 uStack_20b;
   undefined1 uStack_20a;
   undefined1 uStack_209;
   undefined1 uStack_208;
   undefined1 uStack_207;
   undefined1 uStack_206;
   undefined1 uStack_205;
   undefined1 uStack_204;
   undefined1 uStack_203;
   undefined1 uStack_202;
   undefined1 uStack_201;
   undefined1 local_200;
   undefined1 uStack_1ff;
   undefined1 uStack_1fe;
   undefined1 uStack_1fd;
   undefined1 uStack_1fc;
   undefined1 uStack_1fb;
   undefined1 uStack_1fa;
   undefined1 uStack_1f9;
   undefined1 uStack_1f8;
   undefined1 uStack_1f7;
   undefined1 uStack_1f6;
   undefined1 uStack_1f5;
   undefined1 uStack_1f4;
   undefined1 uStack_1f3;
   undefined1 uStack_1f2;
   undefined1 uStack_1f1;
   undefined1 local_1f0;
   undefined1 uStack_1ef;
   undefined1 uStack_1ee;
   undefined1 uStack_1ed;
   undefined1 uStack_1ec;
   undefined1 uStack_1eb;
   undefined1 uStack_1ea;
   undefined1 uStack_1e9;
   undefined1 uStack_1e8;
   undefined1 uStack_1e7;
   undefined1 uStack_1e6;
   undefined1 uStack_1e5;
   undefined1 uStack_1e4;
   undefined1 uStack_1e3;
   undefined1 uStack_1e2;
   undefined1 uStack_1e1;
   undefined1 local_1e0;
   undefined1 uStack_1df;
   undefined1 uStack_1de;
   undefined1 uStack_1dd;
   undefined1 uStack_1dc;
   undefined1 uStack_1db;
   undefined1 uStack_1da;
   undefined1 uStack_1d9;
   undefined1 uStack_1d8;
   undefined1 uStack_1d7;
   undefined1 uStack_1d6;
   undefined1 uStack_1d5;
   undefined1 uStack_1d4;
   undefined1 uStack_1d3;
   undefined1 uStack_1d2;
   undefined1 uStack_1d1;
   undefined1 local_1d0;
   undefined1 uStack_1cf;
   undefined1 uStack_1ce;
   undefined1 uStack_1cd;
   undefined1 uStack_1cc;
   undefined1 uStack_1cb;
   undefined1 uStack_1ca;
   undefined1 uStack_1c9;
   undefined1 uStack_1c8;
   undefined1 uStack_1c7;
   undefined1 uStack_1c6;
   undefined1 uStack_1c5;
   undefined1 uStack_1c4;
   undefined1 uStack_1c3;
   undefined1 uStack_1c2;
   undefined1 uStack_1c1;
   undefined1 local_1c0;
   undefined1 uStack_1bf;
   undefined1 uStack_1be;
   undefined1 uStack_1bd;
   undefined1 uStack_1bc;
   undefined1 uStack_1bb;
   undefined1 uStack_1ba;
   undefined1 uStack_1b9;
   undefined1 uStack_1b8;
   undefined1 uStack_1b7;
   undefined1 uStack_1b6;
   undefined1 uStack_1b5;
   undefined1 uStack_1b4;
   undefined1 uStack_1b3;
   undefined1 uStack_1b2;
   undefined1 uStack_1b1;
   undefined1 local_1b0[16];
   undefined1 local_1a0;
   undefined1 uStack_19f;
   undefined1 uStack_19e;
   undefined1 uStack_19d;
   undefined1 uStack_19c;
   undefined1 uStack_19b;
   undefined1 uStack_19a;
   undefined1 uStack_199;
   undefined1 uStack_198;
   undefined1 uStack_197;
   undefined1 uStack_196;
   undefined1 uStack_195;
   undefined1 uStack_194;
   undefined1 uStack_193;
   undefined1 uStack_192;
   undefined1 uStack_191;
   undefined1 local_190[128];
   undefined1 local_110[128];
   undefined1 local_90[32];
   undefined1 local_70[48];
   long local_40;
   bVar7 = *param_5;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar20 = (int)( ( uint ) * param_1 * 0x4a85 ) >> 8;
   puVar22 = &local_218;
   for (lVar14 = 0x39; lVar14 != 0; lVar14 = lVar14 + -1) {
      *puVar22 = 0;
      puVar22 = puVar22 + 1;
   }

   *(undefined2*)( (long)puVar22 + 4 ) = 0;
   *(undefined4*)puVar22 = 0;
   *(undefined1*)( (long)puVar22 + 6 ) = 0;
   bVar8 = *param_6;
   bVar9 = *param_3;
   bVar10 = *param_4;
   *param_7 = 0xff;
   iVar18 = ( (int)( (uint)bVar7 + (uint)bVar9 ) >> 1 ) + 1;
   iVar21 = ( (int)( (uint)bVar8 + (uint)bVar10 ) >> 1 ) + 1;
   iVar11 = (int)( (uint)bVar9 + iVar18 ) >> 1;
   iVar15 = (int)( (uint)bVar10 + iVar21 ) >> 1;
   uVar13 = iVar20 + -0x379a + ( iVar15 * 0x6625 >> 8 );
   if (uVar13 < 0x4000) {
      cVar41 = (char)( (int)uVar13 >> 6 );
   }
 else {
      cVar41 = (char)~(byte)(uVar13 >> 0x18) >> 7;
   }

   param_7[1] = cVar41;
   uVar13 = ( ( iVar20 - ( iVar11 * 0x1913 >> 8 ) ) - ( iVar15 * 0x3408 >> 8 ) ) + 0x2204;
   if (uVar13 < 0x4000) {
      cVar41 = (char)( (int)uVar13 >> 6 );
   }
 else {
      cVar41 = (char)~(byte)(uVar13 >> 0x18) >> 7;
   }

   param_7[2] = cVar41;
   uVar13 = iVar20 + -0x4515 + ( iVar11 * 0x811a >> 8 );
   if (uVar13 < 0x4000) {
      cVar41 = (char)( (int)uVar13 >> 6 );
   }
 else {
      cVar41 = (char)~(byte)(uVar13 >> 0x18) >> 7;
   }

   param_7[3] = cVar41;
   if (param_2 != (byte*)0x0) {
      bVar7 = *param_2;
      bVar8 = *param_5;
      iVar15 = (int)( ( uint ) * param_6 + iVar21 ) >> 1;
      *param_8 = 0xff;
      iVar20 = (int)( (uint)bVar8 + iVar18 ) >> 1;
      iVar11 = (int)( (uint)bVar7 * 0x4a85 ) >> 8;
      uVar13 = iVar11 + -0x379a + ( iVar15 * 0x6625 >> 8 );
      if (uVar13 < 0x4000) {
         cVar41 = (char)( (int)uVar13 >> 6 );
      }
 else {
         cVar41 = (char)~(byte)(uVar13 >> 0x18) >> 7;
      }

      param_8[1] = cVar41;
      uVar13 = ( ( iVar11 - ( iVar20 * 0x1913 >> 8 ) ) - ( iVar15 * 0x3408 >> 8 ) ) + 0x2204;
      if (uVar13 < 0x4000) {
         cVar41 = (char)( (int)uVar13 >> 6 );
      }
 else {
         cVar41 = (char)~(byte)(uVar13 >> 0x18) >> 7;
      }

      param_8[2] = cVar41;
      uVar13 = iVar11 + -0x4515 + ( iVar20 * 0x811a >> 8 );
      if (uVar13 < 0x4000) {
         cVar41 = (char)( (int)uVar13 >> 6 );
      }
 else {
         cVar41 = (char)~(byte)(uVar13 >> 0x18) >> 7;
      }

      param_8[3] = cVar41;
   }

   if (param_9 < 0x22) {
      if (param_9 < 2) goto LAB_0010310d;
      iVar20 = 1;
      iVar11 = 0;
   }
 else {
      lVar14 = 0;
      local_2c8 = param_1 + 1;
      local_2d0 = param_7 + 4;
      local_2b8 = param_2 + 1;
      local_2c0 = param_8 + 4;
      uVar16 = param_9 - 0x22U >> 5;
      uVar13 = uVar16 + 1;
      do {
         auVar3 = *(undefined1(*) [16])( param_3 + lVar14 + 1 );
         auVar4 = *(undefined1(*) [16])( param_5 + lVar14 );
         auVar5 = *(undefined1(*) [16])( param_3 + lVar14 );
         auVar6 = *(undefined1(*) [16])( param_5 + lVar14 + 1 );
         for (int i = 0; i < 16; i++) {
            auVar77[i] = pavgb(auVar3[i], auVar4[i]);
         }

         for (int i = 0; i < 16; i++) {
            auVar24[i] = pavgb(auVar5[i], auVar6[i]);
         }

         auVar76 = auVar77 ^ auVar24;
         cVar41 = pavgb(auVar24[0], auVar77[0]);
         cVar43 = pavgb(auVar24[1], auVar77[1]);
         cVar44 = pavgb(auVar24[2], auVar77[2]);
         cVar45 = pavgb(auVar24[3], auVar77[3]);
         cVar46 = pavgb(auVar24[4], auVar77[4]);
         cVar47 = pavgb(auVar24[5], auVar77[5]);
         cVar48 = pavgb(auVar24[6], auVar77[6]);
         cVar49 = pavgb(auVar24[7], auVar77[7]);
         cVar50 = pavgb(auVar24[8], auVar77[8]);
         cVar51 = pavgb(auVar24[9], auVar77[9]);
         cVar52 = pavgb(auVar24[10], auVar77[10]);
         cVar53 = pavgb(auVar24[0xb], auVar77[0xb]);
         cVar54 = pavgb(auVar24[0xc], auVar77[0xc]);
         cVar55 = pavgb(auVar24[0xd], auVar77[0xd]);
         cVar56 = pavgb(auVar24[0xe], auVar77[0xe]);
         cVar57 = pavgb(auVar24[0xf], auVar77[0xf]);
         auVar58 = ( auVar3 ^ auVar4 | auVar5 ^ auVar6 | auVar76 ) & __LC0;
         auVar42[0] = cVar41 - auVar58[0];
         auVar42[1] = cVar43 - auVar58[1];
         auVar42[2] = cVar44 - auVar58[2];
         auVar42[3] = cVar45 - auVar58[3];
         auVar42[4] = cVar46 - auVar58[4];
         auVar42[5] = cVar47 - auVar58[5];
         auVar42[6] = cVar48 - auVar58[6];
         auVar42[7] = cVar49 - auVar58[7];
         auVar42[8] = cVar50 - auVar58[8];
         auVar42[9] = cVar51 - auVar58[9];
         auVar42[10] = cVar52 - auVar58[10];
         auVar42[0xb] = cVar53 - auVar58[0xb];
         auVar42[0xc] = cVar54 - auVar58[0xc];
         auVar42[0xd] = cVar55 - auVar58[0xd];
         auVar42[0xe] = cVar56 - auVar58[0xe];
         auVar42[0xf] = cVar57 - auVar58[0xf];
         cVar41 = pavgb(auVar42[0], auVar77[0]);
         cVar43 = pavgb(auVar42[1], auVar77[1]);
         cVar44 = pavgb(auVar42[2], auVar77[2]);
         cVar45 = pavgb(auVar42[3], auVar77[3]);
         cVar46 = pavgb(auVar42[4], auVar77[4]);
         cVar47 = pavgb(auVar42[5], auVar77[5]);
         cVar48 = pavgb(auVar42[6], auVar77[6]);
         cVar49 = pavgb(auVar42[7], auVar77[7]);
         cVar50 = pavgb(auVar42[8], auVar77[8]);
         cVar51 = pavgb(auVar42[9], auVar77[9]);
         cVar52 = pavgb(auVar42[10], auVar77[10]);
         cVar53 = pavgb(auVar42[0xb], auVar77[0xb]);
         cVar54 = pavgb(auVar42[0xc], auVar77[0xc]);
         cVar55 = pavgb(auVar42[0xd], auVar77[0xd]);
         cVar56 = pavgb(auVar42[0xe], auVar77[0xe]);
         cVar57 = pavgb(auVar42[0xf], auVar77[0xf]);
         cVar59 = pavgb(auVar42[0], auVar24[0]);
         cVar60 = pavgb(auVar42[1], auVar24[1]);
         cVar61 = pavgb(auVar42[2], auVar24[2]);
         cVar62 = pavgb(auVar42[3], auVar24[3]);
         cVar63 = pavgb(auVar42[4], auVar24[4]);
         cVar64 = pavgb(auVar42[5], auVar24[5]);
         cVar65 = pavgb(auVar42[6], auVar24[6]);
         cVar66 = pavgb(auVar42[7], auVar24[7]);
         cVar67 = pavgb(auVar42[8], auVar24[8]);
         cVar68 = pavgb(auVar42[9], auVar24[9]);
         cVar69 = pavgb(auVar42[10], auVar24[10]);
         cVar70 = pavgb(auVar42[0xb], auVar24[0xb]);
         cVar71 = pavgb(auVar42[0xc], auVar24[0xc]);
         cVar72 = pavgb(auVar42[0xd], auVar24[0xd]);
         cVar73 = pavgb(auVar42[0xe], auVar24[0xe]);
         cVar74 = pavgb(auVar42[0xf], auVar24[0xf]);
         auVar58 = ( auVar77 ^ auVar42 | ( auVar3 ^ auVar4 ) & auVar76 ) & __LC0;
         cVar41 = cVar41 - auVar58[0];
         cVar43 = cVar43 - auVar58[1];
         cVar44 = cVar44 - auVar58[2];
         cVar45 = cVar45 - auVar58[3];
         cVar46 = cVar46 - auVar58[4];
         cVar47 = cVar47 - auVar58[5];
         cVar48 = cVar48 - auVar58[6];
         cVar49 = cVar49 - auVar58[7];
         cVar50 = cVar50 - auVar58[8];
         cVar51 = cVar51 - auVar58[9];
         cVar52 = cVar52 - auVar58[10];
         cVar53 = cVar53 - auVar58[0xb];
         cVar54 = cVar54 - auVar58[0xc];
         cVar55 = cVar55 - auVar58[0xd];
         cVar56 = cVar56 - auVar58[0xe];
         cVar57 = cVar57 - auVar58[0xf];
         auVar24 = ( auVar24 ^ auVar42 | ( auVar5 ^ auVar6 ) & auVar76 ) & __LC0;
         cVar59 = cVar59 - auVar24[0];
         cVar60 = cVar60 - auVar24[1];
         cVar61 = cVar61 - auVar24[2];
         cVar62 = cVar62 - auVar24[3];
         cVar63 = cVar63 - auVar24[4];
         cVar64 = cVar64 - auVar24[5];
         cVar65 = cVar65 - auVar24[6];
         cVar66 = cVar66 - auVar24[7];
         cVar67 = cVar67 - auVar24[8];
         cVar68 = cVar68 - auVar24[9];
         cVar69 = cVar69 - auVar24[10];
         cVar70 = cVar70 - auVar24[0xb];
         cVar71 = cVar71 - auVar24[0xc];
         cVar72 = cVar72 - auVar24[0xd];
         cVar73 = cVar73 - auVar24[0xe];
         cVar74 = cVar74 - auVar24[0xf];
         local_210 = pavgb(auVar5[0], cVar41);
         uStack_20e = pavgb(auVar5[1], cVar43);
         uStack_20c = pavgb(auVar5[2], cVar44);
         uStack_20a = pavgb(auVar5[3], cVar45);
         uStack_208 = pavgb(auVar5[4], cVar46);
         uStack_206 = pavgb(auVar5[5], cVar47);
         uStack_204 = pavgb(auVar5[6], cVar48);
         uStack_202 = pavgb(auVar5[7], cVar49);
         local_200 = pavgb(auVar5[8], cVar50);
         uStack_1fe = pavgb(auVar5[9], cVar51);
         uStack_1fc = pavgb(auVar5[10], cVar52);
         uStack_1fa = pavgb(auVar5[0xb], cVar53);
         uStack_1f8 = pavgb(auVar5[0xc], cVar54);
         uStack_1f6 = pavgb(auVar5[0xd], cVar55);
         uStack_1f4 = pavgb(auVar5[0xe], cVar56);
         uStack_1f2 = pavgb(auVar5[0xf], cVar57);
         uStack_20f = pavgb(auVar3[0], cVar59);
         uStack_20d = pavgb(auVar3[1], cVar60);
         uStack_20b = pavgb(auVar3[2], cVar61);
         uStack_209 = pavgb(auVar3[3], cVar62);
         uStack_207 = pavgb(auVar3[4], cVar63);
         uStack_205 = pavgb(auVar3[5], cVar64);
         uStack_203 = pavgb(auVar3[6], cVar65);
         uStack_201 = pavgb(auVar3[7], cVar66);
         uStack_1ff = pavgb(auVar3[8], cVar67);
         uStack_1fd = pavgb(auVar3[9], cVar68);
         uStack_1fb = pavgb(auVar3[10], cVar69);
         uStack_1f9 = pavgb(auVar3[0xb], cVar70);
         uStack_1f7 = pavgb(auVar3[0xc], cVar71);
         uStack_1f5 = pavgb(auVar3[0xd], cVar72);
         uStack_1f3 = pavgb(auVar3[0xe], cVar73);
         uStack_1f1 = pavgb(auVar3[0xf], cVar74);
         local_1d0 = pavgb(auVar4[0], cVar59);
         uStack_1ce = pavgb(auVar4[1], cVar60);
         uStack_1cc = pavgb(auVar4[2], cVar61);
         uStack_1ca = pavgb(auVar4[3], cVar62);
         uStack_1c8 = pavgb(auVar4[4], cVar63);
         uStack_1c6 = pavgb(auVar4[5], cVar64);
         uStack_1c4 = pavgb(auVar4[6], cVar65);
         uStack_1c2 = pavgb(auVar4[7], cVar66);
         local_1c0 = pavgb(auVar4[8], cVar67);
         uStack_1be = pavgb(auVar4[9], cVar68);
         uStack_1bc = pavgb(auVar4[10], cVar69);
         uStack_1ba = pavgb(auVar4[0xb], cVar70);
         uStack_1b8 = pavgb(auVar4[0xc], cVar71);
         uStack_1b6 = pavgb(auVar4[0xd], cVar72);
         uStack_1b4 = pavgb(auVar4[0xe], cVar73);
         uStack_1b2 = pavgb(auVar4[0xf], cVar74);
         uStack_1cf = pavgb(auVar6[0], cVar41);
         uStack_1cd = pavgb(auVar6[1], cVar43);
         uStack_1cb = pavgb(auVar6[2], cVar44);
         uStack_1c9 = pavgb(auVar6[3], cVar45);
         uStack_1c7 = pavgb(auVar6[4], cVar46);
         uStack_1c5 = pavgb(auVar6[5], cVar47);
         uStack_1c3 = pavgb(auVar6[6], cVar48);
         uStack_1c1 = pavgb(auVar6[7], cVar49);
         uStack_1bf = pavgb(auVar6[8], cVar50);
         uStack_1bd = pavgb(auVar6[9], cVar51);
         uStack_1bb = pavgb(auVar6[10], cVar52);
         uStack_1b9 = pavgb(auVar6[0xb], cVar53);
         uStack_1b7 = pavgb(auVar6[0xc], cVar54);
         uStack_1b5 = pavgb(auVar6[0xd], cVar55);
         uStack_1b3 = pavgb(auVar6[0xe], cVar56);
         uStack_1b1 = pavgb(auVar6[0xf], cVar57);
         auVar3 = *(undefined1(*) [16])( param_4 + lVar14 );
         auVar4 = *(undefined1(*) [16])( param_6 + lVar14 );
         auVar5 = *(undefined1(*) [16])( param_4 + lVar14 + 1 );
         auVar6 = *(undefined1(*) [16])( param_6 + lVar14 + 1 );
         for (int i = 0; i < 16; i++) {
            auVar76[i] = pavgb(auVar3[i], auVar6[i]);
         }

         for (int i = 0; i < 16; i++) {
            auVar58[i] = pavgb(auVar5[i], auVar4[i]);
         }

         auVar77 = auVar58 ^ auVar76;
         cVar41 = pavgb(auVar76[0], auVar58[0]);
         cVar43 = pavgb(auVar76[1], auVar58[1]);
         cVar44 = pavgb(auVar76[2], auVar58[2]);
         cVar45 = pavgb(auVar76[3], auVar58[3]);
         cVar46 = pavgb(auVar76[4], auVar58[4]);
         cVar47 = pavgb(auVar76[5], auVar58[5]);
         cVar48 = pavgb(auVar76[6], auVar58[6]);
         cVar49 = pavgb(auVar76[7], auVar58[7]);
         cVar50 = pavgb(auVar76[8], auVar58[8]);
         cVar51 = pavgb(auVar76[9], auVar58[9]);
         cVar52 = pavgb(auVar76[10], auVar58[10]);
         cVar53 = pavgb(auVar76[0xb], auVar58[0xb]);
         cVar54 = pavgb(auVar76[0xc], auVar58[0xc]);
         cVar55 = pavgb(auVar76[0xd], auVar58[0xd]);
         cVar56 = pavgb(auVar76[0xe], auVar58[0xe]);
         cVar57 = pavgb(auVar76[0xf], auVar58[0xf]);
         auVar24 = ( auVar5 ^ auVar4 | auVar3 ^ auVar6 | auVar77 ) & __LC0;
         auVar75[0] = cVar41 - auVar24[0];
         auVar75[1] = cVar43 - auVar24[1];
         auVar75[2] = cVar44 - auVar24[2];
         auVar75[3] = cVar45 - auVar24[3];
         auVar75[4] = cVar46 - auVar24[4];
         auVar75[5] = cVar47 - auVar24[5];
         auVar75[6] = cVar48 - auVar24[6];
         auVar75[7] = cVar49 - auVar24[7];
         auVar75[8] = cVar50 - auVar24[8];
         auVar75[9] = cVar51 - auVar24[9];
         auVar75[10] = cVar52 - auVar24[10];
         auVar75[0xb] = cVar53 - auVar24[0xb];
         auVar75[0xc] = cVar54 - auVar24[0xc];
         auVar75[0xd] = cVar55 - auVar24[0xd];
         auVar75[0xe] = cVar56 - auVar24[0xe];
         auVar75[0xf] = cVar57 - auVar24[0xf];
         cVar59 = pavgb(auVar75[0], auVar58[0]);
         cVar60 = pavgb(auVar75[1], auVar58[1]);
         cVar61 = pavgb(auVar75[2], auVar58[2]);
         cVar62 = pavgb(auVar75[3], auVar58[3]);
         cVar63 = pavgb(auVar75[4], auVar58[4]);
         cVar64 = pavgb(auVar75[5], auVar58[5]);
         cVar65 = pavgb(auVar75[6], auVar58[6]);
         cVar66 = pavgb(auVar75[7], auVar58[7]);
         cVar67 = pavgb(auVar75[8], auVar58[8]);
         cVar68 = pavgb(auVar75[9], auVar58[9]);
         cVar69 = pavgb(auVar75[10], auVar58[10]);
         cVar70 = pavgb(auVar75[0xb], auVar58[0xb]);
         cVar71 = pavgb(auVar75[0xc], auVar58[0xc]);
         cVar72 = pavgb(auVar75[0xd], auVar58[0xd]);
         cVar73 = pavgb(auVar75[0xe], auVar58[0xe]);
         cVar74 = pavgb(auVar75[0xf], auVar58[0xf]);
         cVar41 = pavgb(auVar75[0], auVar76[0]);
         cVar43 = pavgb(auVar75[1], auVar76[1]);
         cVar44 = pavgb(auVar75[2], auVar76[2]);
         cVar45 = pavgb(auVar75[3], auVar76[3]);
         cVar46 = pavgb(auVar75[4], auVar76[4]);
         cVar47 = pavgb(auVar75[5], auVar76[5]);
         cVar48 = pavgb(auVar75[6], auVar76[6]);
         cVar49 = pavgb(auVar75[7], auVar76[7]);
         cVar50 = pavgb(auVar75[8], auVar76[8]);
         cVar51 = pavgb(auVar75[9], auVar76[9]);
         cVar52 = pavgb(auVar75[10], auVar76[10]);
         cVar53 = pavgb(auVar75[0xb], auVar76[0xb]);
         cVar54 = pavgb(auVar75[0xc], auVar76[0xc]);
         cVar55 = pavgb(auVar75[0xd], auVar76[0xd]);
         cVar56 = pavgb(auVar75[0xe], auVar76[0xe]);
         cVar57 = pavgb(auVar75[0xf], auVar76[0xf]);
         auVar24 = ( auVar58 ^ auVar75 | ( auVar5 ^ auVar4 ) & auVar77 ) & __LC0;
         cVar59 = cVar59 - auVar24[0];
         cVar60 = cVar60 - auVar24[1];
         cVar61 = cVar61 - auVar24[2];
         cVar62 = cVar62 - auVar24[3];
         cVar63 = cVar63 - auVar24[4];
         cVar64 = cVar64 - auVar24[5];
         cVar65 = cVar65 - auVar24[6];
         cVar66 = cVar66 - auVar24[7];
         cVar67 = cVar67 - auVar24[8];
         cVar68 = cVar68 - auVar24[9];
         cVar69 = cVar69 - auVar24[10];
         cVar70 = cVar70 - auVar24[0xb];
         cVar71 = cVar71 - auVar24[0xc];
         cVar72 = cVar72 - auVar24[0xd];
         cVar73 = cVar73 - auVar24[0xe];
         cVar74 = cVar74 - auVar24[0xf];
         auVar24 = ( ( auVar3 ^ auVar6 ) & auVar77 | auVar76 ^ auVar75 ) & __LC0;
         local_1f0 = pavgb(auVar3[0], cVar59);
         uStack_1ee = pavgb(auVar3[1], cVar60);
         uStack_1ec = pavgb(auVar3[2], cVar61);
         uStack_1ea = pavgb(auVar3[3], cVar62);
         uStack_1e8 = pavgb(auVar3[4], cVar63);
         uStack_1e6 = pavgb(auVar3[5], cVar64);
         uStack_1e4 = pavgb(auVar3[6], cVar65);
         uStack_1e2 = pavgb(auVar3[7], cVar66);
         local_1e0 = pavgb(auVar3[8], cVar67);
         uStack_1de = pavgb(auVar3[9], cVar68);
         uStack_1dc = pavgb(auVar3[10], cVar69);
         uStack_1da = pavgb(auVar3[0xb], cVar70);
         uStack_1d8 = pavgb(auVar3[0xc], cVar71);
         uStack_1d6 = pavgb(auVar3[0xd], cVar72);
         uStack_1d4 = pavgb(auVar3[0xe], cVar73);
         uStack_1d2 = pavgb(auVar3[0xf], cVar74);
         cVar41 = cVar41 - auVar24[0];
         cVar43 = cVar43 - auVar24[1];
         cVar44 = cVar44 - auVar24[2];
         cVar45 = cVar45 - auVar24[3];
         cVar46 = cVar46 - auVar24[4];
         cVar47 = cVar47 - auVar24[5];
         cVar48 = cVar48 - auVar24[6];
         cVar49 = cVar49 - auVar24[7];
         cVar50 = cVar50 - auVar24[8];
         cVar51 = cVar51 - auVar24[9];
         cVar52 = cVar52 - auVar24[10];
         cVar53 = cVar53 - auVar24[0xb];
         cVar54 = cVar54 - auVar24[0xc];
         cVar55 = cVar55 - auVar24[0xd];
         cVar56 = cVar56 - auVar24[0xe];
         cVar57 = cVar57 - auVar24[0xf];
         uStack_1ef = pavgb(auVar5[0], cVar41);
         uStack_1ed = pavgb(auVar5[1], cVar43);
         uStack_1eb = pavgb(auVar5[2], cVar44);
         uStack_1e9 = pavgb(auVar5[3], cVar45);
         uStack_1e7 = pavgb(auVar5[4], cVar46);
         uStack_1e5 = pavgb(auVar5[5], cVar47);
         uStack_1e3 = pavgb(auVar5[6], cVar48);
         uStack_1e1 = pavgb(auVar5[7], cVar49);
         uStack_1df = pavgb(auVar5[8], cVar50);
         uStack_1dd = pavgb(auVar5[9], cVar51);
         uStack_1db = pavgb(auVar5[10], cVar52);
         uStack_1d9 = pavgb(auVar5[0xb], cVar53);
         uStack_1d7 = pavgb(auVar5[0xc], cVar54);
         uStack_1d5 = pavgb(auVar5[0xd], cVar55);
         uStack_1d3 = pavgb(auVar5[0xe], cVar56);
         uStack_1d1 = pavgb(auVar5[0xf], cVar57);
         uVar25 = pavgb(auVar4[0], cVar41);
         uVar26 = pavgb(auVar4[1], cVar43);
         uVar27 = pavgb(auVar4[2], cVar44);
         uVar28 = pavgb(auVar4[3], cVar45);
         uVar29 = pavgb(auVar4[4], cVar46);
         uVar30 = pavgb(auVar4[5], cVar47);
         uVar31 = pavgb(auVar4[6], cVar48);
         uVar32 = pavgb(auVar4[7], cVar49);
         local_1a0 = pavgb(auVar4[8], cVar50);
         uStack_19e = pavgb(auVar4[9], cVar51);
         uStack_19c = pavgb(auVar4[10], cVar52);
         uStack_19a = pavgb(auVar4[0xb], cVar53);
         uStack_198 = pavgb(auVar4[0xc], cVar54);
         uStack_196 = pavgb(auVar4[0xd], cVar55);
         uStack_194 = pavgb(auVar4[0xe], cVar56);
         uStack_192 = pavgb(auVar4[0xf], cVar57);
         uVar33 = pavgb(auVar6[0], cVar59);
         uVar34 = pavgb(auVar6[1], cVar60);
         uVar35 = pavgb(auVar6[2], cVar61);
         uVar36 = pavgb(auVar6[3], cVar62);
         uVar37 = pavgb(auVar6[4], cVar63);
         uVar38 = pavgb(auVar6[5], cVar64);
         uVar39 = pavgb(auVar6[6], cVar65);
         uVar40 = pavgb(auVar6[7], cVar66);
         uStack_19f = pavgb(auVar6[8], cVar67);
         uStack_19d = pavgb(auVar6[9], cVar68);
         uStack_19b = pavgb(auVar6[10], cVar69);
         uStack_199 = pavgb(auVar6[0xb], cVar70);
         uStack_197 = pavgb(auVar6[0xc], cVar71);
         uStack_195 = pavgb(auVar6[0xd], cVar72);
         uStack_193 = pavgb(auVar6[0xe], cVar73);
         uStack_191 = pavgb(auVar6[0xf], cVar74);
         local_1b0._8_8_ = ( undefined8 )(CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar40, uVar32), uVar39), uVar31), uVar38), uVar30), uVar37), CONCAT11(uVar29, uVar32)) >> 8);
         local_1b0[7] = uVar36;
         local_1b0[6] = uVar28;
         local_1b0[5] = uVar35;
         local_1b0[4] = uVar27;
         local_1b0[3] = uVar34;
         local_1b0[2] = uVar26;
         local_1b0[1] = uVar33;
         local_1b0[0] = uVar25;
         VP8YuvToArgb32_SSE2(local_2c8, &local_210, &local_1f0, local_2d0);
         if (param_2 != (byte*)0x0) {
            VP8YuvToArgb32_SSE2(local_2b8, &local_1d0, local_1b0, local_2c0);
         }

         local_2c8 = local_2c8 + 0x20;
         lVar14 = lVar14 + 0x10;
         local_2d0 = local_2d0 + 0x80;
         local_2b8 = local_2b8 + 0x20;
         local_2c0 = local_2c0 + 0x80;
      }
 while ( (ulong)uVar13 << 4 != lVar14 );
      iVar11 = uVar13 * 0x10;
      iVar20 = uVar16 * 0x20 + 0x21;
   }

   iVar15 = ( param_9 + 1 >> 1 ) - ( iVar20 >> 1 );
   uVar19 = (ulong)iVar15;
   __dest = (undefined1*)0x0;
   if (param_2 != (byte*)0x0) {
      __dest = local_70;
   }

   puVar23 = local_258;
   __memcpy_chk(puVar23, param_3 + iVar11, uVar19, 0x11);
   __memcpy_chk(local_238, param_5 + iVar11, uVar19, 0x11);
   iVar18 = iVar15 + -1;
   lVar14 = (long)( 0x11 - iVar15 );
   puVar1 = puVar23 + uVar19;
   uVar12 = 0x11;
   if (0x10 < uVar19) {
      uVar12 = uVar19;
   }

   lVar17 = uVar12 - uVar19;
   __memset_chk(puVar1, local_258[iVar18], lVar14, lVar17);
   puVar2 = local_238 + uVar19;
   __memset_chk(puVar2, local_238[iVar18], lVar14, lVar17);
   Upsample32Pixels_SSE2(puVar23, local_238, &local_210, 0x11);
   __memcpy_chk();
   __memcpy_chk(local_238, param_6 + iVar11, uVar19, 0x11);
   __memset_chk(puVar1, local_258[iVar18], lVar14, lVar17);
   __memset_chk(puVar2, local_238[iVar18], lVar14, lVar17);
   Upsample32Pixels_SSE2(puVar23, local_238, &local_1f0);
   param_9 = param_9 - iVar20;
   __n = (size_t)( param_9 * 4 );
   memcpy(local_90, param_1 + iVar20, (long)param_9);
   param_7 = param_7 + ( iVar20 << 2 );
   if (param_2 == (byte*)0x0) {
      VP8YuvToArgb32_SSE2(local_90, &local_210, &local_1f0, local_190);
      if (__dest == (undefined1*)0x0) {
         memcpy(param_7, local_190, __n);
      }
 else {
         VP8YuvToArgb32_SSE2(__dest, &local_1d0, local_1b0, local_110);
         memcpy(param_7, local_190, __n);
      }

   }
 else {
      memcpy(__dest, param_2 + iVar20, (long)param_9);
      VP8YuvToArgb32_SSE2(local_90, &local_210, &local_1f0, local_190);
      VP8YuvToArgb32_SSE2(__dest, &local_1d0, local_1b0, local_110);
      memcpy(param_7, local_190, __n);
      memcpy(param_8 + ( iVar20 << 2 ), local_110, __n);
   }

   LAB_0010310d:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void UpsampleRgbLinePair_SSE2(byte *param_1, byte *param_2, byte *param_3, byte *param_4, byte *param_5, byte *param_6, char *param_7, char *param_8, int param_9) {
   undefined1 *puVar1;
   undefined1 *puVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   byte bVar7;
   byte bVar8;
   byte bVar9;
   int iVar10;
   ulong uVar11;
   long lVar12;
   uint uVar13;
   long lVar14;
   int iVar15;
   uint uVar16;
   int iVar17;
   ulong uVar18;
   size_t __n;
   int iVar19;
   int iVar20;
   undefined8 *puVar21;
   undefined1 *__dest;
   undefined1 *puVar22;
   long in_FS_OFFSET;
   undefined1 auVar23[16];
   undefined1 uVar24;
   undefined1 uVar25;
   undefined1 uVar26;
   undefined1 uVar27;
   undefined1 uVar28;
   undefined1 uVar29;
   undefined1 uVar30;
   undefined1 uVar31;
   undefined1 uVar32;
   undefined1 uVar33;
   undefined1 uVar34;
   undefined1 uVar35;
   undefined1 uVar36;
   undefined1 uVar37;
   undefined1 uVar38;
   undefined1 uVar39;
   char cVar40;
   char cVar42;
   char cVar43;
   char cVar44;
   char cVar45;
   char cVar46;
   char cVar47;
   char cVar48;
   char cVar49;
   char cVar50;
   char cVar51;
   char cVar52;
   char cVar53;
   char cVar54;
   char cVar55;
   char cVar56;
   undefined1 auVar41[16];
   undefined1 auVar57[16];
   char cVar58;
   char cVar59;
   char cVar60;
   char cVar61;
   char cVar62;
   char cVar63;
   char cVar64;
   char cVar65;
   char cVar66;
   char cVar67;
   char cVar68;
   char cVar69;
   char cVar70;
   char cVar71;
   char cVar72;
   char cVar73;
   undefined1 auVar74[16];
   undefined1 auVar75[16];
   undefined1 auVar76[16];
   char *local_2d0;
   byte *local_2c8;
   char *local_2c0;
   byte *local_2b8;
   undefined1 local_258[32];
   undefined1 local_238[32];
   undefined8 local_218;
   undefined1 local_210;
   undefined1 uStack_20f;
   undefined1 uStack_20e;
   undefined1 uStack_20d;
   undefined1 uStack_20c;
   undefined1 uStack_20b;
   undefined1 uStack_20a;
   undefined1 uStack_209;
   undefined1 uStack_208;
   undefined1 uStack_207;
   undefined1 uStack_206;
   undefined1 uStack_205;
   undefined1 uStack_204;
   undefined1 uStack_203;
   undefined1 uStack_202;
   undefined1 uStack_201;
   undefined1 local_200;
   undefined1 uStack_1ff;
   undefined1 uStack_1fe;
   undefined1 uStack_1fd;
   undefined1 uStack_1fc;
   undefined1 uStack_1fb;
   undefined1 uStack_1fa;
   undefined1 uStack_1f9;
   undefined1 uStack_1f8;
   undefined1 uStack_1f7;
   undefined1 uStack_1f6;
   undefined1 uStack_1f5;
   undefined1 uStack_1f4;
   undefined1 uStack_1f3;
   undefined1 uStack_1f2;
   undefined1 uStack_1f1;
   undefined1 local_1f0;
   undefined1 uStack_1ef;
   undefined1 uStack_1ee;
   undefined1 uStack_1ed;
   undefined1 uStack_1ec;
   undefined1 uStack_1eb;
   undefined1 uStack_1ea;
   undefined1 uStack_1e9;
   undefined1 uStack_1e8;
   undefined1 uStack_1e7;
   undefined1 uStack_1e6;
   undefined1 uStack_1e5;
   undefined1 uStack_1e4;
   undefined1 uStack_1e3;
   undefined1 uStack_1e2;
   undefined1 uStack_1e1;
   undefined1 local_1e0;
   undefined1 uStack_1df;
   undefined1 uStack_1de;
   undefined1 uStack_1dd;
   undefined1 uStack_1dc;
   undefined1 uStack_1db;
   undefined1 uStack_1da;
   undefined1 uStack_1d9;
   undefined1 uStack_1d8;
   undefined1 uStack_1d7;
   undefined1 uStack_1d6;
   undefined1 uStack_1d5;
   undefined1 uStack_1d4;
   undefined1 uStack_1d3;
   undefined1 uStack_1d2;
   undefined1 uStack_1d1;
   undefined1 local_1d0;
   undefined1 uStack_1cf;
   undefined1 uStack_1ce;
   undefined1 uStack_1cd;
   undefined1 uStack_1cc;
   undefined1 uStack_1cb;
   undefined1 uStack_1ca;
   undefined1 uStack_1c9;
   undefined1 uStack_1c8;
   undefined1 uStack_1c7;
   undefined1 uStack_1c6;
   undefined1 uStack_1c5;
   undefined1 uStack_1c4;
   undefined1 uStack_1c3;
   undefined1 uStack_1c2;
   undefined1 uStack_1c1;
   undefined1 local_1c0;
   undefined1 uStack_1bf;
   undefined1 uStack_1be;
   undefined1 uStack_1bd;
   undefined1 uStack_1bc;
   undefined1 uStack_1bb;
   undefined1 uStack_1ba;
   undefined1 uStack_1b9;
   undefined1 uStack_1b8;
   undefined1 uStack_1b7;
   undefined1 uStack_1b6;
   undefined1 uStack_1b5;
   undefined1 uStack_1b4;
   undefined1 uStack_1b3;
   undefined1 uStack_1b2;
   undefined1 uStack_1b1;
   undefined1 local_1b0[16];
   undefined1 local_1a0;
   undefined1 uStack_19f;
   undefined1 uStack_19e;
   undefined1 uStack_19d;
   undefined1 uStack_19c;
   undefined1 uStack_19b;
   undefined1 uStack_19a;
   undefined1 uStack_199;
   undefined1 uStack_198;
   undefined1 uStack_197;
   undefined1 uStack_196;
   undefined1 uStack_195;
   undefined1 uStack_194;
   undefined1 uStack_193;
   undefined1 uStack_192;
   undefined1 uStack_191;
   undefined1 local_190[128];
   undefined1 local_110[128];
   undefined1 local_90[32];
   undefined1 local_70[48];
   long local_40;
   bVar7 = *param_6;
   iVar17 = (int)( ( uint ) * param_1 * 0x4a85 ) >> 8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar21 = &local_218;
   for (lVar14 = 0x39; lVar14 != 0; lVar14 = lVar14 + -1) {
      *puVar21 = 0;
      puVar21 = puVar21 + 1;
   }

   *(undefined2*)( (long)puVar21 + 4 ) = 0;
   bVar8 = *param_3;
   bVar9 = *param_4;
   *(undefined4*)puVar21 = 0;
   *(undefined1*)( (long)puVar21 + 6 ) = 0;
   iVar19 = ( (int)( (uint)bVar7 + (uint)bVar9 ) >> 1 ) + 1;
   iVar20 = ( (int)( ( uint ) * param_5 + (uint)bVar8 ) >> 1 ) + 1;
   iVar15 = (int)( (uint)bVar9 + iVar19 ) >> 1;
   iVar10 = (int)( (uint)bVar8 + iVar20 ) >> 1;
   uVar13 = iVar17 + -0x379a + ( iVar15 * 0x6625 >> 8 );
   if (uVar13 < 0x4000) {
      cVar40 = (char)( (int)uVar13 >> 6 );
   }
 else {
      cVar40 = (char)~(byte)(uVar13 >> 0x18) >> 7;
   }

   *param_7 = cVar40;
   uVar13 = ( ( iVar17 - ( iVar10 * 0x1913 >> 8 ) ) - ( iVar15 * 0x3408 >> 8 ) ) + 0x2204;
   if (uVar13 < 0x4000) {
      cVar40 = (char)( (int)uVar13 >> 6 );
   }
 else {
      cVar40 = (char)~(byte)(uVar13 >> 0x18) >> 7;
   }

   param_7[1] = cVar40;
   uVar13 = iVar17 + -0x4515 + ( iVar10 * 0x811a >> 8 );
   if (uVar13 < 0x4000) {
      cVar40 = (char)( (int)uVar13 >> 6 );
   }
 else {
      cVar40 = (char)~(byte)(uVar13 >> 0x18) >> 7;
   }

   param_7[2] = cVar40;
   if (param_2 != (byte*)0x0) {
      iVar15 = (int)( iVar19 + ( uint ) * param_6 ) >> 1;
      iVar17 = (int)( ( uint ) * param_5 + iVar20 ) >> 1;
      iVar10 = (int)( ( uint ) * param_2 * 0x4a85 ) >> 8;
      uVar13 = iVar10 + -0x379a + ( iVar15 * 0x6625 >> 8 );
      if (uVar13 < 0x4000) {
         cVar40 = (char)( (int)uVar13 >> 6 );
      }
 else {
         cVar40 = (char)~(byte)(uVar13 >> 0x18) >> 7;
      }

      *param_8 = cVar40;
      uVar13 = ( ( iVar10 - ( iVar17 * 0x1913 >> 8 ) ) - ( iVar15 * 0x3408 >> 8 ) ) + 0x2204;
      if (uVar13 < 0x4000) {
         cVar40 = (char)( (int)uVar13 >> 6 );
      }
 else {
         cVar40 = (char)~(byte)(uVar13 >> 0x18) >> 7;
      }

      param_8[1] = cVar40;
      uVar13 = iVar10 + -0x4515 + ( iVar17 * 0x811a >> 8 );
      if (uVar13 < 0x4000) {
         cVar40 = (char)( (int)uVar13 >> 6 );
      }
 else {
         cVar40 = (char)~(byte)(uVar13 >> 0x18) >> 7;
      }

      param_8[2] = cVar40;
   }

   if (param_9 < 0x22) {
      if (param_9 < 2) goto LAB_00103972;
      iVar17 = 1;
      iVar10 = 0;
   }
 else {
      lVar14 = 0;
      local_2c8 = param_1 + 1;
      local_2d0 = param_7 + 3;
      local_2b8 = param_2 + 1;
      local_2c0 = param_8 + 3;
      uVar16 = param_9 - 0x22U >> 5;
      uVar13 = uVar16 + 1;
      do {
         auVar3 = *(undefined1(*) [16])( param_3 + lVar14 + 1 );
         auVar4 = *(undefined1(*) [16])( param_5 + lVar14 );
         auVar5 = *(undefined1(*) [16])( param_3 + lVar14 );
         auVar6 = *(undefined1(*) [16])( param_5 + lVar14 + 1 );
         for (int i = 0; i < 16; i++) {
            auVar76[i] = pavgb(auVar3[i], auVar4[i]);
         }

         for (int i = 0; i < 16; i++) {
            auVar23[i] = pavgb(auVar5[i], auVar6[i]);
         }

         auVar75 = auVar76 ^ auVar23;
         cVar40 = pavgb(auVar23[0], auVar76[0]);
         cVar42 = pavgb(auVar23[1], auVar76[1]);
         cVar43 = pavgb(auVar23[2], auVar76[2]);
         cVar44 = pavgb(auVar23[3], auVar76[3]);
         cVar45 = pavgb(auVar23[4], auVar76[4]);
         cVar46 = pavgb(auVar23[5], auVar76[5]);
         cVar47 = pavgb(auVar23[6], auVar76[6]);
         cVar48 = pavgb(auVar23[7], auVar76[7]);
         cVar49 = pavgb(auVar23[8], auVar76[8]);
         cVar50 = pavgb(auVar23[9], auVar76[9]);
         cVar51 = pavgb(auVar23[10], auVar76[10]);
         cVar52 = pavgb(auVar23[0xb], auVar76[0xb]);
         cVar53 = pavgb(auVar23[0xc], auVar76[0xc]);
         cVar54 = pavgb(auVar23[0xd], auVar76[0xd]);
         cVar55 = pavgb(auVar23[0xe], auVar76[0xe]);
         cVar56 = pavgb(auVar23[0xf], auVar76[0xf]);
         auVar57 = ( auVar3 ^ auVar4 | auVar5 ^ auVar6 | auVar75 ) & __LC0;
         auVar41[0] = cVar40 - auVar57[0];
         auVar41[1] = cVar42 - auVar57[1];
         auVar41[2] = cVar43 - auVar57[2];
         auVar41[3] = cVar44 - auVar57[3];
         auVar41[4] = cVar45 - auVar57[4];
         auVar41[5] = cVar46 - auVar57[5];
         auVar41[6] = cVar47 - auVar57[6];
         auVar41[7] = cVar48 - auVar57[7];
         auVar41[8] = cVar49 - auVar57[8];
         auVar41[9] = cVar50 - auVar57[9];
         auVar41[10] = cVar51 - auVar57[10];
         auVar41[0xb] = cVar52 - auVar57[0xb];
         auVar41[0xc] = cVar53 - auVar57[0xc];
         auVar41[0xd] = cVar54 - auVar57[0xd];
         auVar41[0xe] = cVar55 - auVar57[0xe];
         auVar41[0xf] = cVar56 - auVar57[0xf];
         cVar40 = pavgb(auVar41[0], auVar76[0]);
         cVar42 = pavgb(auVar41[1], auVar76[1]);
         cVar43 = pavgb(auVar41[2], auVar76[2]);
         cVar44 = pavgb(auVar41[3], auVar76[3]);
         cVar45 = pavgb(auVar41[4], auVar76[4]);
         cVar46 = pavgb(auVar41[5], auVar76[5]);
         cVar47 = pavgb(auVar41[6], auVar76[6]);
         cVar48 = pavgb(auVar41[7], auVar76[7]);
         cVar49 = pavgb(auVar41[8], auVar76[8]);
         cVar50 = pavgb(auVar41[9], auVar76[9]);
         cVar51 = pavgb(auVar41[10], auVar76[10]);
         cVar52 = pavgb(auVar41[0xb], auVar76[0xb]);
         cVar53 = pavgb(auVar41[0xc], auVar76[0xc]);
         cVar54 = pavgb(auVar41[0xd], auVar76[0xd]);
         cVar55 = pavgb(auVar41[0xe], auVar76[0xe]);
         cVar56 = pavgb(auVar41[0xf], auVar76[0xf]);
         cVar58 = pavgb(auVar41[0], auVar23[0]);
         cVar59 = pavgb(auVar41[1], auVar23[1]);
         cVar60 = pavgb(auVar41[2], auVar23[2]);
         cVar61 = pavgb(auVar41[3], auVar23[3]);
         cVar62 = pavgb(auVar41[4], auVar23[4]);
         cVar63 = pavgb(auVar41[5], auVar23[5]);
         cVar64 = pavgb(auVar41[6], auVar23[6]);
         cVar65 = pavgb(auVar41[7], auVar23[7]);
         cVar66 = pavgb(auVar41[8], auVar23[8]);
         cVar67 = pavgb(auVar41[9], auVar23[9]);
         cVar68 = pavgb(auVar41[10], auVar23[10]);
         cVar69 = pavgb(auVar41[0xb], auVar23[0xb]);
         cVar70 = pavgb(auVar41[0xc], auVar23[0xc]);
         cVar71 = pavgb(auVar41[0xd], auVar23[0xd]);
         cVar72 = pavgb(auVar41[0xe], auVar23[0xe]);
         cVar73 = pavgb(auVar41[0xf], auVar23[0xf]);
         auVar57 = ( auVar76 ^ auVar41 | ( auVar3 ^ auVar4 ) & auVar75 ) & __LC0;
         cVar40 = cVar40 - auVar57[0];
         cVar42 = cVar42 - auVar57[1];
         cVar43 = cVar43 - auVar57[2];
         cVar44 = cVar44 - auVar57[3];
         cVar45 = cVar45 - auVar57[4];
         cVar46 = cVar46 - auVar57[5];
         cVar47 = cVar47 - auVar57[6];
         cVar48 = cVar48 - auVar57[7];
         cVar49 = cVar49 - auVar57[8];
         cVar50 = cVar50 - auVar57[9];
         cVar51 = cVar51 - auVar57[10];
         cVar52 = cVar52 - auVar57[0xb];
         cVar53 = cVar53 - auVar57[0xc];
         cVar54 = cVar54 - auVar57[0xd];
         cVar55 = cVar55 - auVar57[0xe];
         cVar56 = cVar56 - auVar57[0xf];
         auVar23 = ( auVar23 ^ auVar41 | ( auVar5 ^ auVar6 ) & auVar75 ) & __LC0;
         cVar58 = cVar58 - auVar23[0];
         cVar59 = cVar59 - auVar23[1];
         cVar60 = cVar60 - auVar23[2];
         cVar61 = cVar61 - auVar23[3];
         cVar62 = cVar62 - auVar23[4];
         cVar63 = cVar63 - auVar23[5];
         cVar64 = cVar64 - auVar23[6];
         cVar65 = cVar65 - auVar23[7];
         cVar66 = cVar66 - auVar23[8];
         cVar67 = cVar67 - auVar23[9];
         cVar68 = cVar68 - auVar23[10];
         cVar69 = cVar69 - auVar23[0xb];
         cVar70 = cVar70 - auVar23[0xc];
         cVar71 = cVar71 - auVar23[0xd];
         cVar72 = cVar72 - auVar23[0xe];
         cVar73 = cVar73 - auVar23[0xf];
         local_210 = pavgb(auVar5[0], cVar40);
         uStack_20e = pavgb(auVar5[1], cVar42);
         uStack_20c = pavgb(auVar5[2], cVar43);
         uStack_20a = pavgb(auVar5[3], cVar44);
         uStack_208 = pavgb(auVar5[4], cVar45);
         uStack_206 = pavgb(auVar5[5], cVar46);
         uStack_204 = pavgb(auVar5[6], cVar47);
         uStack_202 = pavgb(auVar5[7], cVar48);
         local_200 = pavgb(auVar5[8], cVar49);
         uStack_1fe = pavgb(auVar5[9], cVar50);
         uStack_1fc = pavgb(auVar5[10], cVar51);
         uStack_1fa = pavgb(auVar5[0xb], cVar52);
         uStack_1f8 = pavgb(auVar5[0xc], cVar53);
         uStack_1f6 = pavgb(auVar5[0xd], cVar54);
         uStack_1f4 = pavgb(auVar5[0xe], cVar55);
         uStack_1f2 = pavgb(auVar5[0xf], cVar56);
         uStack_20f = pavgb(auVar3[0], cVar58);
         uStack_20d = pavgb(auVar3[1], cVar59);
         uStack_20b = pavgb(auVar3[2], cVar60);
         uStack_209 = pavgb(auVar3[3], cVar61);
         uStack_207 = pavgb(auVar3[4], cVar62);
         uStack_205 = pavgb(auVar3[5], cVar63);
         uStack_203 = pavgb(auVar3[6], cVar64);
         uStack_201 = pavgb(auVar3[7], cVar65);
         uStack_1ff = pavgb(auVar3[8], cVar66);
         uStack_1fd = pavgb(auVar3[9], cVar67);
         uStack_1fb = pavgb(auVar3[10], cVar68);
         uStack_1f9 = pavgb(auVar3[0xb], cVar69);
         uStack_1f7 = pavgb(auVar3[0xc], cVar70);
         uStack_1f5 = pavgb(auVar3[0xd], cVar71);
         uStack_1f3 = pavgb(auVar3[0xe], cVar72);
         uStack_1f1 = pavgb(auVar3[0xf], cVar73);
         local_1d0 = pavgb(auVar4[0], cVar58);
         uStack_1ce = pavgb(auVar4[1], cVar59);
         uStack_1cc = pavgb(auVar4[2], cVar60);
         uStack_1ca = pavgb(auVar4[3], cVar61);
         uStack_1c8 = pavgb(auVar4[4], cVar62);
         uStack_1c6 = pavgb(auVar4[5], cVar63);
         uStack_1c4 = pavgb(auVar4[6], cVar64);
         uStack_1c2 = pavgb(auVar4[7], cVar65);
         local_1c0 = pavgb(auVar4[8], cVar66);
         uStack_1be = pavgb(auVar4[9], cVar67);
         uStack_1bc = pavgb(auVar4[10], cVar68);
         uStack_1ba = pavgb(auVar4[0xb], cVar69);
         uStack_1b8 = pavgb(auVar4[0xc], cVar70);
         uStack_1b6 = pavgb(auVar4[0xd], cVar71);
         uStack_1b4 = pavgb(auVar4[0xe], cVar72);
         uStack_1b2 = pavgb(auVar4[0xf], cVar73);
         uStack_1cf = pavgb(auVar6[0], cVar40);
         uStack_1cd = pavgb(auVar6[1], cVar42);
         uStack_1cb = pavgb(auVar6[2], cVar43);
         uStack_1c9 = pavgb(auVar6[3], cVar44);
         uStack_1c7 = pavgb(auVar6[4], cVar45);
         uStack_1c5 = pavgb(auVar6[5], cVar46);
         uStack_1c3 = pavgb(auVar6[6], cVar47);
         uStack_1c1 = pavgb(auVar6[7], cVar48);
         uStack_1bf = pavgb(auVar6[8], cVar49);
         uStack_1bd = pavgb(auVar6[9], cVar50);
         uStack_1bb = pavgb(auVar6[10], cVar51);
         uStack_1b9 = pavgb(auVar6[0xb], cVar52);
         uStack_1b7 = pavgb(auVar6[0xc], cVar53);
         uStack_1b5 = pavgb(auVar6[0xd], cVar54);
         uStack_1b3 = pavgb(auVar6[0xe], cVar55);
         uStack_1b1 = pavgb(auVar6[0xf], cVar56);
         auVar3 = *(undefined1(*) [16])( param_4 + lVar14 );
         auVar4 = *(undefined1(*) [16])( param_6 + lVar14 );
         auVar5 = *(undefined1(*) [16])( param_4 + lVar14 + 1 );
         auVar6 = *(undefined1(*) [16])( param_6 + lVar14 + 1 );
         for (int i = 0; i < 16; i++) {
            auVar75[i] = pavgb(auVar3[i], auVar6[i]);
         }

         for (int i = 0; i < 16; i++) {
            auVar57[i] = pavgb(auVar5[i], auVar4[i]);
         }

         auVar76 = auVar57 ^ auVar75;
         cVar40 = pavgb(auVar75[0], auVar57[0]);
         cVar42 = pavgb(auVar75[1], auVar57[1]);
         cVar43 = pavgb(auVar75[2], auVar57[2]);
         cVar44 = pavgb(auVar75[3], auVar57[3]);
         cVar45 = pavgb(auVar75[4], auVar57[4]);
         cVar46 = pavgb(auVar75[5], auVar57[5]);
         cVar47 = pavgb(auVar75[6], auVar57[6]);
         cVar48 = pavgb(auVar75[7], auVar57[7]);
         cVar49 = pavgb(auVar75[8], auVar57[8]);
         cVar50 = pavgb(auVar75[9], auVar57[9]);
         cVar51 = pavgb(auVar75[10], auVar57[10]);
         cVar52 = pavgb(auVar75[0xb], auVar57[0xb]);
         cVar53 = pavgb(auVar75[0xc], auVar57[0xc]);
         cVar54 = pavgb(auVar75[0xd], auVar57[0xd]);
         cVar55 = pavgb(auVar75[0xe], auVar57[0xe]);
         cVar56 = pavgb(auVar75[0xf], auVar57[0xf]);
         auVar23 = ( auVar5 ^ auVar4 | auVar3 ^ auVar6 | auVar76 ) & __LC0;
         auVar74[0] = cVar40 - auVar23[0];
         auVar74[1] = cVar42 - auVar23[1];
         auVar74[2] = cVar43 - auVar23[2];
         auVar74[3] = cVar44 - auVar23[3];
         auVar74[4] = cVar45 - auVar23[4];
         auVar74[5] = cVar46 - auVar23[5];
         auVar74[6] = cVar47 - auVar23[6];
         auVar74[7] = cVar48 - auVar23[7];
         auVar74[8] = cVar49 - auVar23[8];
         auVar74[9] = cVar50 - auVar23[9];
         auVar74[10] = cVar51 - auVar23[10];
         auVar74[0xb] = cVar52 - auVar23[0xb];
         auVar74[0xc] = cVar53 - auVar23[0xc];
         auVar74[0xd] = cVar54 - auVar23[0xd];
         auVar74[0xe] = cVar55 - auVar23[0xe];
         auVar74[0xf] = cVar56 - auVar23[0xf];
         cVar58 = pavgb(auVar74[0], auVar57[0]);
         cVar59 = pavgb(auVar74[1], auVar57[1]);
         cVar60 = pavgb(auVar74[2], auVar57[2]);
         cVar61 = pavgb(auVar74[3], auVar57[3]);
         cVar62 = pavgb(auVar74[4], auVar57[4]);
         cVar63 = pavgb(auVar74[5], auVar57[5]);
         cVar64 = pavgb(auVar74[6], auVar57[6]);
         cVar65 = pavgb(auVar74[7], auVar57[7]);
         cVar66 = pavgb(auVar74[8], auVar57[8]);
         cVar67 = pavgb(auVar74[9], auVar57[9]);
         cVar68 = pavgb(auVar74[10], auVar57[10]);
         cVar69 = pavgb(auVar74[0xb], auVar57[0xb]);
         cVar70 = pavgb(auVar74[0xc], auVar57[0xc]);
         cVar71 = pavgb(auVar74[0xd], auVar57[0xd]);
         cVar72 = pavgb(auVar74[0xe], auVar57[0xe]);
         cVar73 = pavgb(auVar74[0xf], auVar57[0xf]);
         cVar40 = pavgb(auVar74[0], auVar75[0]);
         cVar42 = pavgb(auVar74[1], auVar75[1]);
         cVar43 = pavgb(auVar74[2], auVar75[2]);
         cVar44 = pavgb(auVar74[3], auVar75[3]);
         cVar45 = pavgb(auVar74[4], auVar75[4]);
         cVar46 = pavgb(auVar74[5], auVar75[5]);
         cVar47 = pavgb(auVar74[6], auVar75[6]);
         cVar48 = pavgb(auVar74[7], auVar75[7]);
         cVar49 = pavgb(auVar74[8], auVar75[8]);
         cVar50 = pavgb(auVar74[9], auVar75[9]);
         cVar51 = pavgb(auVar74[10], auVar75[10]);
         cVar52 = pavgb(auVar74[0xb], auVar75[0xb]);
         cVar53 = pavgb(auVar74[0xc], auVar75[0xc]);
         cVar54 = pavgb(auVar74[0xd], auVar75[0xd]);
         cVar55 = pavgb(auVar74[0xe], auVar75[0xe]);
         cVar56 = pavgb(auVar74[0xf], auVar75[0xf]);
         auVar23 = ( auVar57 ^ auVar74 | ( auVar5 ^ auVar4 ) & auVar76 ) & __LC0;
         cVar58 = cVar58 - auVar23[0];
         cVar59 = cVar59 - auVar23[1];
         cVar60 = cVar60 - auVar23[2];
         cVar61 = cVar61 - auVar23[3];
         cVar62 = cVar62 - auVar23[4];
         cVar63 = cVar63 - auVar23[5];
         cVar64 = cVar64 - auVar23[6];
         cVar65 = cVar65 - auVar23[7];
         cVar66 = cVar66 - auVar23[8];
         cVar67 = cVar67 - auVar23[9];
         cVar68 = cVar68 - auVar23[10];
         cVar69 = cVar69 - auVar23[0xb];
         cVar70 = cVar70 - auVar23[0xc];
         cVar71 = cVar71 - auVar23[0xd];
         cVar72 = cVar72 - auVar23[0xe];
         cVar73 = cVar73 - auVar23[0xf];
         auVar23 = ( ( auVar3 ^ auVar6 ) & auVar76 | auVar75 ^ auVar74 ) & __LC0;
         local_1f0 = pavgb(auVar3[0], cVar58);
         uStack_1ee = pavgb(auVar3[1], cVar59);
         uStack_1ec = pavgb(auVar3[2], cVar60);
         uStack_1ea = pavgb(auVar3[3], cVar61);
         uStack_1e8 = pavgb(auVar3[4], cVar62);
         uStack_1e6 = pavgb(auVar3[5], cVar63);
         uStack_1e4 = pavgb(auVar3[6], cVar64);
         uStack_1e2 = pavgb(auVar3[7], cVar65);
         local_1e0 = pavgb(auVar3[8], cVar66);
         uStack_1de = pavgb(auVar3[9], cVar67);
         uStack_1dc = pavgb(auVar3[10], cVar68);
         uStack_1da = pavgb(auVar3[0xb], cVar69);
         uStack_1d8 = pavgb(auVar3[0xc], cVar70);
         uStack_1d6 = pavgb(auVar3[0xd], cVar71);
         uStack_1d4 = pavgb(auVar3[0xe], cVar72);
         uStack_1d2 = pavgb(auVar3[0xf], cVar73);
         cVar40 = cVar40 - auVar23[0];
         cVar42 = cVar42 - auVar23[1];
         cVar43 = cVar43 - auVar23[2];
         cVar44 = cVar44 - auVar23[3];
         cVar45 = cVar45 - auVar23[4];
         cVar46 = cVar46 - auVar23[5];
         cVar47 = cVar47 - auVar23[6];
         cVar48 = cVar48 - auVar23[7];
         cVar49 = cVar49 - auVar23[8];
         cVar50 = cVar50 - auVar23[9];
         cVar51 = cVar51 - auVar23[10];
         cVar52 = cVar52 - auVar23[0xb];
         cVar53 = cVar53 - auVar23[0xc];
         cVar54 = cVar54 - auVar23[0xd];
         cVar55 = cVar55 - auVar23[0xe];
         cVar56 = cVar56 - auVar23[0xf];
         uStack_1ef = pavgb(auVar5[0], cVar40);
         uStack_1ed = pavgb(auVar5[1], cVar42);
         uStack_1eb = pavgb(auVar5[2], cVar43);
         uStack_1e9 = pavgb(auVar5[3], cVar44);
         uStack_1e7 = pavgb(auVar5[4], cVar45);
         uStack_1e5 = pavgb(auVar5[5], cVar46);
         uStack_1e3 = pavgb(auVar5[6], cVar47);
         uStack_1e1 = pavgb(auVar5[7], cVar48);
         uStack_1df = pavgb(auVar5[8], cVar49);
         uStack_1dd = pavgb(auVar5[9], cVar50);
         uStack_1db = pavgb(auVar5[10], cVar51);
         uStack_1d9 = pavgb(auVar5[0xb], cVar52);
         uStack_1d7 = pavgb(auVar5[0xc], cVar53);
         uStack_1d5 = pavgb(auVar5[0xd], cVar54);
         uStack_1d3 = pavgb(auVar5[0xe], cVar55);
         uStack_1d1 = pavgb(auVar5[0xf], cVar56);
         uVar24 = pavgb(auVar4[0], cVar40);
         uVar25 = pavgb(auVar4[1], cVar42);
         uVar26 = pavgb(auVar4[2], cVar43);
         uVar27 = pavgb(auVar4[3], cVar44);
         uVar28 = pavgb(auVar4[4], cVar45);
         uVar29 = pavgb(auVar4[5], cVar46);
         uVar30 = pavgb(auVar4[6], cVar47);
         uVar31 = pavgb(auVar4[7], cVar48);
         local_1a0 = pavgb(auVar4[8], cVar49);
         uStack_19e = pavgb(auVar4[9], cVar50);
         uStack_19c = pavgb(auVar4[10], cVar51);
         uStack_19a = pavgb(auVar4[0xb], cVar52);
         uStack_198 = pavgb(auVar4[0xc], cVar53);
         uStack_196 = pavgb(auVar4[0xd], cVar54);
         uStack_194 = pavgb(auVar4[0xe], cVar55);
         uStack_192 = pavgb(auVar4[0xf], cVar56);
         uVar32 = pavgb(auVar6[0], cVar58);
         uVar33 = pavgb(auVar6[1], cVar59);
         uVar34 = pavgb(auVar6[2], cVar60);
         uVar35 = pavgb(auVar6[3], cVar61);
         uVar36 = pavgb(auVar6[4], cVar62);
         uVar37 = pavgb(auVar6[5], cVar63);
         uVar38 = pavgb(auVar6[6], cVar64);
         uVar39 = pavgb(auVar6[7], cVar65);
         uStack_19f = pavgb(auVar6[8], cVar66);
         uStack_19d = pavgb(auVar6[9], cVar67);
         uStack_19b = pavgb(auVar6[10], cVar68);
         uStack_199 = pavgb(auVar6[0xb], cVar69);
         uStack_197 = pavgb(auVar6[0xc], cVar70);
         uStack_195 = pavgb(auVar6[0xd], cVar71);
         uStack_193 = pavgb(auVar6[0xe], cVar72);
         uStack_191 = pavgb(auVar6[0xf], cVar73);
         local_1b0._8_8_ = ( undefined8 )(CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar39, uVar31), uVar38), uVar30), uVar37), uVar29), uVar36), CONCAT11(uVar28, uVar31)) >> 8);
         local_1b0[7] = uVar35;
         local_1b0[6] = uVar27;
         local_1b0[5] = uVar34;
         local_1b0[4] = uVar26;
         local_1b0[3] = uVar33;
         local_1b0[2] = uVar25;
         local_1b0[1] = uVar32;
         local_1b0[0] = uVar24;
         VP8YuvToRgb32_SSE2(local_2c8, &local_210, &local_1f0, local_2d0);
         if (param_2 != (byte*)0x0) {
            VP8YuvToRgb32_SSE2(local_2b8, &local_1d0, local_1b0, local_2c0);
         }

         local_2c8 = local_2c8 + 0x20;
         lVar14 = lVar14 + 0x10;
         local_2d0 = local_2d0 + 0x60;
         local_2b8 = local_2b8 + 0x20;
         local_2c0 = local_2c0 + 0x60;
      }
 while ( (ulong)uVar13 << 4 != lVar14 );
      iVar10 = uVar13 * 0x10;
      iVar17 = uVar16 * 0x20 + 0x21;
   }

   iVar15 = ( param_9 + 1 >> 1 ) - ( iVar17 >> 1 );
   uVar18 = (ulong)iVar15;
   __dest = (undefined1*)0x0;
   if (param_2 != (byte*)0x0) {
      __dest = local_70;
   }

   puVar22 = local_258;
   __memcpy_chk(puVar22, param_3 + iVar10, uVar18, 0x11);
   __memcpy_chk(local_238, param_5 + iVar10, uVar18, 0x11);
   iVar19 = iVar15 + -1;
   lVar14 = (long)( 0x11 - iVar15 );
   puVar1 = puVar22 + uVar18;
   uVar11 = 0x11;
   if (0x10 < uVar18) {
      uVar11 = uVar18;
   }

   lVar12 = uVar11 - uVar18;
   __memset_chk(puVar1, local_258[iVar19], lVar14, lVar12);
   puVar2 = local_238 + uVar18;
   __memset_chk(puVar2, local_238[iVar19], lVar14, lVar12);
   Upsample32Pixels_SSE2(puVar22, local_238, &local_210, 0x11);
   __memcpy_chk();
   __memcpy_chk(local_238, param_6 + iVar10, uVar18, 0x11);
   __memset_chk(puVar1, local_258[iVar19], lVar14, lVar12);
   __memset_chk(puVar2, local_238[iVar19], lVar14, lVar12);
   Upsample32Pixels_SSE2(puVar22, local_238, &local_1f0);
   param_9 = param_9 - iVar17;
   __n = (size_t)( param_9 * 3 );
   memcpy(local_90, param_1 + iVar17, (long)param_9);
   param_7 = param_7 + iVar17 * 3;
   if (param_2 == (byte*)0x0) {
      VP8YuvToRgb32_SSE2(local_90, &local_210, &local_1f0, local_190);
      if (__dest == (undefined1*)0x0) {
         memcpy(param_7, local_190, __n);
      }
 else {
         VP8YuvToRgb32_SSE2(__dest, &local_1d0, local_1b0, local_110);
         memcpy(param_7, local_190, __n);
      }

   }
 else {
      memcpy(__dest, param_2 + iVar17, (long)param_9);
      VP8YuvToRgb32_SSE2(local_90, &local_210, &local_1f0, local_190);
      VP8YuvToRgb32_SSE2(__dest, &local_1d0, local_1b0, local_110);
      memcpy(param_7, local_190, __n);
      memcpy(param_8 + iVar17 * 3, local_110, __n);
   }

   LAB_00103972:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void UpsampleRgbaLinePair_SSE2(byte *param_1, byte *param_2, byte *param_3, byte *param_4, byte *param_5, byte *param_6, char *param_7, char *param_8, int param_9) {
   undefined1 *puVar1;
   undefined1 *puVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   byte bVar7;
   byte bVar8;
   byte bVar9;
   int iVar10;
   ulong uVar11;
   uint uVar12;
   long lVar13;
   long lVar14;
   int iVar15;
   uint uVar16;
   int iVar17;
   ulong uVar18;
   size_t __n;
   int iVar19;
   undefined1 *__dest;
   int iVar20;
   undefined8 *puVar21;
   undefined1 *puVar22;
   long in_FS_OFFSET;
   undefined1 auVar23[16];
   undefined1 uVar24;
   undefined1 uVar25;
   undefined1 uVar26;
   undefined1 uVar27;
   undefined1 uVar28;
   undefined1 uVar29;
   undefined1 uVar30;
   undefined1 uVar31;
   undefined1 uVar32;
   undefined1 uVar33;
   undefined1 uVar34;
   undefined1 uVar35;
   undefined1 uVar36;
   undefined1 uVar37;
   undefined1 uVar38;
   undefined1 uVar39;
   char cVar40;
   char cVar42;
   char cVar43;
   char cVar44;
   char cVar45;
   char cVar46;
   char cVar47;
   char cVar48;
   char cVar49;
   char cVar50;
   char cVar51;
   char cVar52;
   char cVar53;
   char cVar54;
   char cVar55;
   char cVar56;
   undefined1 auVar41[16];
   undefined1 auVar57[16];
   char cVar58;
   char cVar59;
   char cVar60;
   char cVar61;
   char cVar62;
   char cVar63;
   char cVar64;
   char cVar65;
   char cVar66;
   char cVar67;
   char cVar68;
   char cVar69;
   char cVar70;
   char cVar71;
   char cVar72;
   char cVar73;
   undefined1 auVar74[16];
   undefined1 auVar75[16];
   undefined1 auVar76[16];
   char *local_2d0;
   byte *local_2c8;
   char *local_2c0;
   byte *local_2b8;
   undefined1 local_258[32];
   undefined1 local_238[32];
   undefined8 local_218;
   undefined1 local_210;
   undefined1 uStack_20f;
   undefined1 uStack_20e;
   undefined1 uStack_20d;
   undefined1 uStack_20c;
   undefined1 uStack_20b;
   undefined1 uStack_20a;
   undefined1 uStack_209;
   undefined1 uStack_208;
   undefined1 uStack_207;
   undefined1 uStack_206;
   undefined1 uStack_205;
   undefined1 uStack_204;
   undefined1 uStack_203;
   undefined1 uStack_202;
   undefined1 uStack_201;
   undefined1 local_200;
   undefined1 uStack_1ff;
   undefined1 uStack_1fe;
   undefined1 uStack_1fd;
   undefined1 uStack_1fc;
   undefined1 uStack_1fb;
   undefined1 uStack_1fa;
   undefined1 uStack_1f9;
   undefined1 uStack_1f8;
   undefined1 uStack_1f7;
   undefined1 uStack_1f6;
   undefined1 uStack_1f5;
   undefined1 uStack_1f4;
   undefined1 uStack_1f3;
   undefined1 uStack_1f2;
   undefined1 uStack_1f1;
   undefined1 local_1f0;
   undefined1 uStack_1ef;
   undefined1 uStack_1ee;
   undefined1 uStack_1ed;
   undefined1 uStack_1ec;
   undefined1 uStack_1eb;
   undefined1 uStack_1ea;
   undefined1 uStack_1e9;
   undefined1 uStack_1e8;
   undefined1 uStack_1e7;
   undefined1 uStack_1e6;
   undefined1 uStack_1e5;
   undefined1 uStack_1e4;
   undefined1 uStack_1e3;
   undefined1 uStack_1e2;
   undefined1 uStack_1e1;
   undefined1 local_1e0;
   undefined1 uStack_1df;
   undefined1 uStack_1de;
   undefined1 uStack_1dd;
   undefined1 uStack_1dc;
   undefined1 uStack_1db;
   undefined1 uStack_1da;
   undefined1 uStack_1d9;
   undefined1 uStack_1d8;
   undefined1 uStack_1d7;
   undefined1 uStack_1d6;
   undefined1 uStack_1d5;
   undefined1 uStack_1d4;
   undefined1 uStack_1d3;
   undefined1 uStack_1d2;
   undefined1 uStack_1d1;
   undefined1 local_1d0;
   undefined1 uStack_1cf;
   undefined1 uStack_1ce;
   undefined1 uStack_1cd;
   undefined1 uStack_1cc;
   undefined1 uStack_1cb;
   undefined1 uStack_1ca;
   undefined1 uStack_1c9;
   undefined1 uStack_1c8;
   undefined1 uStack_1c7;
   undefined1 uStack_1c6;
   undefined1 uStack_1c5;
   undefined1 uStack_1c4;
   undefined1 uStack_1c3;
   undefined1 uStack_1c2;
   undefined1 uStack_1c1;
   undefined1 local_1c0;
   undefined1 uStack_1bf;
   undefined1 uStack_1be;
   undefined1 uStack_1bd;
   undefined1 uStack_1bc;
   undefined1 uStack_1bb;
   undefined1 uStack_1ba;
   undefined1 uStack_1b9;
   undefined1 uStack_1b8;
   undefined1 uStack_1b7;
   undefined1 uStack_1b6;
   undefined1 uStack_1b5;
   undefined1 uStack_1b4;
   undefined1 uStack_1b3;
   undefined1 uStack_1b2;
   undefined1 uStack_1b1;
   undefined1 local_1b0[16];
   undefined1 local_1a0;
   undefined1 uStack_19f;
   undefined1 uStack_19e;
   undefined1 uStack_19d;
   undefined1 uStack_19c;
   undefined1 uStack_19b;
   undefined1 uStack_19a;
   undefined1 uStack_199;
   undefined1 uStack_198;
   undefined1 uStack_197;
   undefined1 uStack_196;
   undefined1 uStack_195;
   undefined1 uStack_194;
   undefined1 uStack_193;
   undefined1 uStack_192;
   undefined1 uStack_191;
   undefined1 local_190[128];
   undefined1 local_110[128];
   undefined1 local_90[32];
   undefined1 local_70[48];
   long local_40;
   bVar7 = *param_6;
   iVar17 = (int)( ( uint ) * param_1 * 0x4a85 ) >> 8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar21 = &local_218;
   for (lVar13 = 0x39; lVar13 != 0; lVar13 = lVar13 + -1) {
      *puVar21 = 0;
      puVar21 = puVar21 + 1;
   }

   *(undefined2*)( (long)puVar21 + 4 ) = 0;
   bVar8 = *param_3;
   bVar9 = *param_4;
   *(undefined4*)puVar21 = 0;
   *(undefined1*)( (long)puVar21 + 6 ) = 0;
   iVar19 = ( (int)( (uint)bVar7 + (uint)bVar9 ) >> 1 ) + 1;
   iVar20 = ( (int)( ( uint ) * param_5 + (uint)bVar8 ) >> 1 ) + 1;
   iVar15 = (int)( (uint)bVar9 + iVar19 ) >> 1;
   iVar10 = (int)( (uint)bVar8 + iVar20 ) >> 1;
   uVar12 = iVar17 + -0x379a + ( iVar15 * 0x6625 >> 8 );
   if (uVar12 < 0x4000) {
      cVar40 = (char)( (int)uVar12 >> 6 );
   }
 else {
      cVar40 = (char)~(byte)(uVar12 >> 0x18) >> 7;
   }

   *param_7 = cVar40;
   uVar12 = ( ( iVar17 - ( iVar10 * 0x1913 >> 8 ) ) - ( iVar15 * 0x3408 >> 8 ) ) + 0x2204;
   if (uVar12 < 0x4000) {
      cVar40 = (char)( (int)uVar12 >> 6 );
   }
 else {
      cVar40 = (char)~(byte)(uVar12 >> 0x18) >> 7;
   }

   param_7[1] = cVar40;
   uVar12 = iVar17 + -0x4515 + ( iVar10 * 0x811a >> 8 );
   if (uVar12 < 0x4000) {
      cVar40 = (char)( (int)uVar12 >> 6 );
   }
 else {
      cVar40 = (char)~(byte)(uVar12 >> 0x18) >> 7;
   }

   param_7[2] = cVar40;
   param_7[3] = -1;
   if (param_2 != (byte*)0x0) {
      iVar15 = (int)( iVar19 + ( uint ) * param_6 ) >> 1;
      iVar17 = (int)( ( uint ) * param_5 + iVar20 ) >> 1;
      iVar10 = (int)( ( uint ) * param_2 * 0x4a85 ) >> 8;
      uVar12 = iVar10 + -0x379a + ( iVar15 * 0x6625 >> 8 );
      if (uVar12 < 0x4000) {
         cVar40 = (char)( (int)uVar12 >> 6 );
      }
 else {
         cVar40 = (char)~(byte)(uVar12 >> 0x18) >> 7;
      }

      *param_8 = cVar40;
      uVar12 = ( ( iVar10 - ( iVar17 * 0x1913 >> 8 ) ) - ( iVar15 * 0x3408 >> 8 ) ) + 0x2204;
      if (uVar12 < 0x4000) {
         cVar40 = (char)( (int)uVar12 >> 6 );
      }
 else {
         cVar40 = (char)~(byte)(uVar12 >> 0x18) >> 7;
      }

      param_8[1] = cVar40;
      uVar12 = iVar10 + -0x4515 + ( iVar17 * 0x811a >> 8 );
      if (uVar12 < 0x4000) {
         cVar40 = (char)( (int)uVar12 >> 6 );
      }
 else {
         cVar40 = (char)~(byte)(uVar12 >> 0x18) >> 7;
      }

      param_8[2] = cVar40;
      param_8[3] = -1;
   }

   if (param_9 < 0x22) {
      if (param_9 < 2) goto LAB_001041da;
      iVar17 = 1;
      iVar10 = 0;
   }
 else {
      lVar13 = 0;
      local_2c8 = param_1 + 1;
      local_2d0 = param_7 + 4;
      local_2b8 = param_2 + 1;
      local_2c0 = param_8 + 4;
      uVar16 = param_9 - 0x22U >> 5;
      uVar12 = uVar16 + 1;
      do {
         auVar3 = *(undefined1(*) [16])( param_3 + lVar13 + 1 );
         auVar4 = *(undefined1(*) [16])( param_5 + lVar13 );
         auVar5 = *(undefined1(*) [16])( param_3 + lVar13 );
         auVar6 = *(undefined1(*) [16])( param_5 + lVar13 + 1 );
         for (int i = 0; i < 16; i++) {
            auVar76[i] = pavgb(auVar3[i], auVar4[i]);
         }

         for (int i = 0; i < 16; i++) {
            auVar23[i] = pavgb(auVar5[i], auVar6[i]);
         }

         auVar75 = auVar76 ^ auVar23;
         cVar40 = pavgb(auVar23[0], auVar76[0]);
         cVar42 = pavgb(auVar23[1], auVar76[1]);
         cVar43 = pavgb(auVar23[2], auVar76[2]);
         cVar44 = pavgb(auVar23[3], auVar76[3]);
         cVar45 = pavgb(auVar23[4], auVar76[4]);
         cVar46 = pavgb(auVar23[5], auVar76[5]);
         cVar47 = pavgb(auVar23[6], auVar76[6]);
         cVar48 = pavgb(auVar23[7], auVar76[7]);
         cVar49 = pavgb(auVar23[8], auVar76[8]);
         cVar50 = pavgb(auVar23[9], auVar76[9]);
         cVar51 = pavgb(auVar23[10], auVar76[10]);
         cVar52 = pavgb(auVar23[0xb], auVar76[0xb]);
         cVar53 = pavgb(auVar23[0xc], auVar76[0xc]);
         cVar54 = pavgb(auVar23[0xd], auVar76[0xd]);
         cVar55 = pavgb(auVar23[0xe], auVar76[0xe]);
         cVar56 = pavgb(auVar23[0xf], auVar76[0xf]);
         auVar57 = ( auVar3 ^ auVar4 | auVar5 ^ auVar6 | auVar75 ) & __LC0;
         auVar41[0] = cVar40 - auVar57[0];
         auVar41[1] = cVar42 - auVar57[1];
         auVar41[2] = cVar43 - auVar57[2];
         auVar41[3] = cVar44 - auVar57[3];
         auVar41[4] = cVar45 - auVar57[4];
         auVar41[5] = cVar46 - auVar57[5];
         auVar41[6] = cVar47 - auVar57[6];
         auVar41[7] = cVar48 - auVar57[7];
         auVar41[8] = cVar49 - auVar57[8];
         auVar41[9] = cVar50 - auVar57[9];
         auVar41[10] = cVar51 - auVar57[10];
         auVar41[0xb] = cVar52 - auVar57[0xb];
         auVar41[0xc] = cVar53 - auVar57[0xc];
         auVar41[0xd] = cVar54 - auVar57[0xd];
         auVar41[0xe] = cVar55 - auVar57[0xe];
         auVar41[0xf] = cVar56 - auVar57[0xf];
         cVar40 = pavgb(auVar41[0], auVar76[0]);
         cVar42 = pavgb(auVar41[1], auVar76[1]);
         cVar43 = pavgb(auVar41[2], auVar76[2]);
         cVar44 = pavgb(auVar41[3], auVar76[3]);
         cVar45 = pavgb(auVar41[4], auVar76[4]);
         cVar46 = pavgb(auVar41[5], auVar76[5]);
         cVar47 = pavgb(auVar41[6], auVar76[6]);
         cVar48 = pavgb(auVar41[7], auVar76[7]);
         cVar49 = pavgb(auVar41[8], auVar76[8]);
         cVar50 = pavgb(auVar41[9], auVar76[9]);
         cVar51 = pavgb(auVar41[10], auVar76[10]);
         cVar52 = pavgb(auVar41[0xb], auVar76[0xb]);
         cVar53 = pavgb(auVar41[0xc], auVar76[0xc]);
         cVar54 = pavgb(auVar41[0xd], auVar76[0xd]);
         cVar55 = pavgb(auVar41[0xe], auVar76[0xe]);
         cVar56 = pavgb(auVar41[0xf], auVar76[0xf]);
         cVar58 = pavgb(auVar41[0], auVar23[0]);
         cVar59 = pavgb(auVar41[1], auVar23[1]);
         cVar60 = pavgb(auVar41[2], auVar23[2]);
         cVar61 = pavgb(auVar41[3], auVar23[3]);
         cVar62 = pavgb(auVar41[4], auVar23[4]);
         cVar63 = pavgb(auVar41[5], auVar23[5]);
         cVar64 = pavgb(auVar41[6], auVar23[6]);
         cVar65 = pavgb(auVar41[7], auVar23[7]);
         cVar66 = pavgb(auVar41[8], auVar23[8]);
         cVar67 = pavgb(auVar41[9], auVar23[9]);
         cVar68 = pavgb(auVar41[10], auVar23[10]);
         cVar69 = pavgb(auVar41[0xb], auVar23[0xb]);
         cVar70 = pavgb(auVar41[0xc], auVar23[0xc]);
         cVar71 = pavgb(auVar41[0xd], auVar23[0xd]);
         cVar72 = pavgb(auVar41[0xe], auVar23[0xe]);
         cVar73 = pavgb(auVar41[0xf], auVar23[0xf]);
         auVar57 = ( auVar76 ^ auVar41 | ( auVar3 ^ auVar4 ) & auVar75 ) & __LC0;
         cVar40 = cVar40 - auVar57[0];
         cVar42 = cVar42 - auVar57[1];
         cVar43 = cVar43 - auVar57[2];
         cVar44 = cVar44 - auVar57[3];
         cVar45 = cVar45 - auVar57[4];
         cVar46 = cVar46 - auVar57[5];
         cVar47 = cVar47 - auVar57[6];
         cVar48 = cVar48 - auVar57[7];
         cVar49 = cVar49 - auVar57[8];
         cVar50 = cVar50 - auVar57[9];
         cVar51 = cVar51 - auVar57[10];
         cVar52 = cVar52 - auVar57[0xb];
         cVar53 = cVar53 - auVar57[0xc];
         cVar54 = cVar54 - auVar57[0xd];
         cVar55 = cVar55 - auVar57[0xe];
         cVar56 = cVar56 - auVar57[0xf];
         auVar23 = ( auVar23 ^ auVar41 | ( auVar5 ^ auVar6 ) & auVar75 ) & __LC0;
         cVar58 = cVar58 - auVar23[0];
         cVar59 = cVar59 - auVar23[1];
         cVar60 = cVar60 - auVar23[2];
         cVar61 = cVar61 - auVar23[3];
         cVar62 = cVar62 - auVar23[4];
         cVar63 = cVar63 - auVar23[5];
         cVar64 = cVar64 - auVar23[6];
         cVar65 = cVar65 - auVar23[7];
         cVar66 = cVar66 - auVar23[8];
         cVar67 = cVar67 - auVar23[9];
         cVar68 = cVar68 - auVar23[10];
         cVar69 = cVar69 - auVar23[0xb];
         cVar70 = cVar70 - auVar23[0xc];
         cVar71 = cVar71 - auVar23[0xd];
         cVar72 = cVar72 - auVar23[0xe];
         cVar73 = cVar73 - auVar23[0xf];
         local_210 = pavgb(auVar5[0], cVar40);
         uStack_20e = pavgb(auVar5[1], cVar42);
         uStack_20c = pavgb(auVar5[2], cVar43);
         uStack_20a = pavgb(auVar5[3], cVar44);
         uStack_208 = pavgb(auVar5[4], cVar45);
         uStack_206 = pavgb(auVar5[5], cVar46);
         uStack_204 = pavgb(auVar5[6], cVar47);
         uStack_202 = pavgb(auVar5[7], cVar48);
         local_200 = pavgb(auVar5[8], cVar49);
         uStack_1fe = pavgb(auVar5[9], cVar50);
         uStack_1fc = pavgb(auVar5[10], cVar51);
         uStack_1fa = pavgb(auVar5[0xb], cVar52);
         uStack_1f8 = pavgb(auVar5[0xc], cVar53);
         uStack_1f6 = pavgb(auVar5[0xd], cVar54);
         uStack_1f4 = pavgb(auVar5[0xe], cVar55);
         uStack_1f2 = pavgb(auVar5[0xf], cVar56);
         uStack_20f = pavgb(auVar3[0], cVar58);
         uStack_20d = pavgb(auVar3[1], cVar59);
         uStack_20b = pavgb(auVar3[2], cVar60);
         uStack_209 = pavgb(auVar3[3], cVar61);
         uStack_207 = pavgb(auVar3[4], cVar62);
         uStack_205 = pavgb(auVar3[5], cVar63);
         uStack_203 = pavgb(auVar3[6], cVar64);
         uStack_201 = pavgb(auVar3[7], cVar65);
         uStack_1ff = pavgb(auVar3[8], cVar66);
         uStack_1fd = pavgb(auVar3[9], cVar67);
         uStack_1fb = pavgb(auVar3[10], cVar68);
         uStack_1f9 = pavgb(auVar3[0xb], cVar69);
         uStack_1f7 = pavgb(auVar3[0xc], cVar70);
         uStack_1f5 = pavgb(auVar3[0xd], cVar71);
         uStack_1f3 = pavgb(auVar3[0xe], cVar72);
         uStack_1f1 = pavgb(auVar3[0xf], cVar73);
         local_1d0 = pavgb(auVar4[0], cVar58);
         uStack_1ce = pavgb(auVar4[1], cVar59);
         uStack_1cc = pavgb(auVar4[2], cVar60);
         uStack_1ca = pavgb(auVar4[3], cVar61);
         uStack_1c8 = pavgb(auVar4[4], cVar62);
         uStack_1c6 = pavgb(auVar4[5], cVar63);
         uStack_1c4 = pavgb(auVar4[6], cVar64);
         uStack_1c2 = pavgb(auVar4[7], cVar65);
         local_1c0 = pavgb(auVar4[8], cVar66);
         uStack_1be = pavgb(auVar4[9], cVar67);
         uStack_1bc = pavgb(auVar4[10], cVar68);
         uStack_1ba = pavgb(auVar4[0xb], cVar69);
         uStack_1b8 = pavgb(auVar4[0xc], cVar70);
         uStack_1b6 = pavgb(auVar4[0xd], cVar71);
         uStack_1b4 = pavgb(auVar4[0xe], cVar72);
         uStack_1b2 = pavgb(auVar4[0xf], cVar73);
         uStack_1cf = pavgb(auVar6[0], cVar40);
         uStack_1cd = pavgb(auVar6[1], cVar42);
         uStack_1cb = pavgb(auVar6[2], cVar43);
         uStack_1c9 = pavgb(auVar6[3], cVar44);
         uStack_1c7 = pavgb(auVar6[4], cVar45);
         uStack_1c5 = pavgb(auVar6[5], cVar46);
         uStack_1c3 = pavgb(auVar6[6], cVar47);
         uStack_1c1 = pavgb(auVar6[7], cVar48);
         uStack_1bf = pavgb(auVar6[8], cVar49);
         uStack_1bd = pavgb(auVar6[9], cVar50);
         uStack_1bb = pavgb(auVar6[10], cVar51);
         uStack_1b9 = pavgb(auVar6[0xb], cVar52);
         uStack_1b7 = pavgb(auVar6[0xc], cVar53);
         uStack_1b5 = pavgb(auVar6[0xd], cVar54);
         uStack_1b3 = pavgb(auVar6[0xe], cVar55);
         uStack_1b1 = pavgb(auVar6[0xf], cVar56);
         auVar3 = *(undefined1(*) [16])( param_4 + lVar13 );
         auVar4 = *(undefined1(*) [16])( param_6 + lVar13 );
         auVar5 = *(undefined1(*) [16])( param_4 + lVar13 + 1 );
         auVar6 = *(undefined1(*) [16])( param_6 + lVar13 + 1 );
         for (int i = 0; i < 16; i++) {
            auVar75[i] = pavgb(auVar3[i], auVar6[i]);
         }

         for (int i = 0; i < 16; i++) {
            auVar57[i] = pavgb(auVar5[i], auVar4[i]);
         }

         auVar76 = auVar57 ^ auVar75;
         cVar40 = pavgb(auVar75[0], auVar57[0]);
         cVar42 = pavgb(auVar75[1], auVar57[1]);
         cVar43 = pavgb(auVar75[2], auVar57[2]);
         cVar44 = pavgb(auVar75[3], auVar57[3]);
         cVar45 = pavgb(auVar75[4], auVar57[4]);
         cVar46 = pavgb(auVar75[5], auVar57[5]);
         cVar47 = pavgb(auVar75[6], auVar57[6]);
         cVar48 = pavgb(auVar75[7], auVar57[7]);
         cVar49 = pavgb(auVar75[8], auVar57[8]);
         cVar50 = pavgb(auVar75[9], auVar57[9]);
         cVar51 = pavgb(auVar75[10], auVar57[10]);
         cVar52 = pavgb(auVar75[0xb], auVar57[0xb]);
         cVar53 = pavgb(auVar75[0xc], auVar57[0xc]);
         cVar54 = pavgb(auVar75[0xd], auVar57[0xd]);
         cVar55 = pavgb(auVar75[0xe], auVar57[0xe]);
         cVar56 = pavgb(auVar75[0xf], auVar57[0xf]);
         auVar23 = ( auVar5 ^ auVar4 | auVar3 ^ auVar6 | auVar76 ) & __LC0;
         auVar74[0] = cVar40 - auVar23[0];
         auVar74[1] = cVar42 - auVar23[1];
         auVar74[2] = cVar43 - auVar23[2];
         auVar74[3] = cVar44 - auVar23[3];
         auVar74[4] = cVar45 - auVar23[4];
         auVar74[5] = cVar46 - auVar23[5];
         auVar74[6] = cVar47 - auVar23[6];
         auVar74[7] = cVar48 - auVar23[7];
         auVar74[8] = cVar49 - auVar23[8];
         auVar74[9] = cVar50 - auVar23[9];
         auVar74[10] = cVar51 - auVar23[10];
         auVar74[0xb] = cVar52 - auVar23[0xb];
         auVar74[0xc] = cVar53 - auVar23[0xc];
         auVar74[0xd] = cVar54 - auVar23[0xd];
         auVar74[0xe] = cVar55 - auVar23[0xe];
         auVar74[0xf] = cVar56 - auVar23[0xf];
         cVar58 = pavgb(auVar74[0], auVar57[0]);
         cVar59 = pavgb(auVar74[1], auVar57[1]);
         cVar60 = pavgb(auVar74[2], auVar57[2]);
         cVar61 = pavgb(auVar74[3], auVar57[3]);
         cVar62 = pavgb(auVar74[4], auVar57[4]);
         cVar63 = pavgb(auVar74[5], auVar57[5]);
         cVar64 = pavgb(auVar74[6], auVar57[6]);
         cVar65 = pavgb(auVar74[7], auVar57[7]);
         cVar66 = pavgb(auVar74[8], auVar57[8]);
         cVar67 = pavgb(auVar74[9], auVar57[9]);
         cVar68 = pavgb(auVar74[10], auVar57[10]);
         cVar69 = pavgb(auVar74[0xb], auVar57[0xb]);
         cVar70 = pavgb(auVar74[0xc], auVar57[0xc]);
         cVar71 = pavgb(auVar74[0xd], auVar57[0xd]);
         cVar72 = pavgb(auVar74[0xe], auVar57[0xe]);
         cVar73 = pavgb(auVar74[0xf], auVar57[0xf]);
         cVar40 = pavgb(auVar74[0], auVar75[0]);
         cVar42 = pavgb(auVar74[1], auVar75[1]);
         cVar43 = pavgb(auVar74[2], auVar75[2]);
         cVar44 = pavgb(auVar74[3], auVar75[3]);
         cVar45 = pavgb(auVar74[4], auVar75[4]);
         cVar46 = pavgb(auVar74[5], auVar75[5]);
         cVar47 = pavgb(auVar74[6], auVar75[6]);
         cVar48 = pavgb(auVar74[7], auVar75[7]);
         cVar49 = pavgb(auVar74[8], auVar75[8]);
         cVar50 = pavgb(auVar74[9], auVar75[9]);
         cVar51 = pavgb(auVar74[10], auVar75[10]);
         cVar52 = pavgb(auVar74[0xb], auVar75[0xb]);
         cVar53 = pavgb(auVar74[0xc], auVar75[0xc]);
         cVar54 = pavgb(auVar74[0xd], auVar75[0xd]);
         cVar55 = pavgb(auVar74[0xe], auVar75[0xe]);
         cVar56 = pavgb(auVar74[0xf], auVar75[0xf]);
         auVar23 = ( auVar57 ^ auVar74 | ( auVar5 ^ auVar4 ) & auVar76 ) & __LC0;
         cVar58 = cVar58 - auVar23[0];
         cVar59 = cVar59 - auVar23[1];
         cVar60 = cVar60 - auVar23[2];
         cVar61 = cVar61 - auVar23[3];
         cVar62 = cVar62 - auVar23[4];
         cVar63 = cVar63 - auVar23[5];
         cVar64 = cVar64 - auVar23[6];
         cVar65 = cVar65 - auVar23[7];
         cVar66 = cVar66 - auVar23[8];
         cVar67 = cVar67 - auVar23[9];
         cVar68 = cVar68 - auVar23[10];
         cVar69 = cVar69 - auVar23[0xb];
         cVar70 = cVar70 - auVar23[0xc];
         cVar71 = cVar71 - auVar23[0xd];
         cVar72 = cVar72 - auVar23[0xe];
         cVar73 = cVar73 - auVar23[0xf];
         auVar23 = ( ( auVar3 ^ auVar6 ) & auVar76 | auVar75 ^ auVar74 ) & __LC0;
         local_1f0 = pavgb(auVar3[0], cVar58);
         uStack_1ee = pavgb(auVar3[1], cVar59);
         uStack_1ec = pavgb(auVar3[2], cVar60);
         uStack_1ea = pavgb(auVar3[3], cVar61);
         uStack_1e8 = pavgb(auVar3[4], cVar62);
         uStack_1e6 = pavgb(auVar3[5], cVar63);
         uStack_1e4 = pavgb(auVar3[6], cVar64);
         uStack_1e2 = pavgb(auVar3[7], cVar65);
         local_1e0 = pavgb(auVar3[8], cVar66);
         uStack_1de = pavgb(auVar3[9], cVar67);
         uStack_1dc = pavgb(auVar3[10], cVar68);
         uStack_1da = pavgb(auVar3[0xb], cVar69);
         uStack_1d8 = pavgb(auVar3[0xc], cVar70);
         uStack_1d6 = pavgb(auVar3[0xd], cVar71);
         uStack_1d4 = pavgb(auVar3[0xe], cVar72);
         uStack_1d2 = pavgb(auVar3[0xf], cVar73);
         cVar40 = cVar40 - auVar23[0];
         cVar42 = cVar42 - auVar23[1];
         cVar43 = cVar43 - auVar23[2];
         cVar44 = cVar44 - auVar23[3];
         cVar45 = cVar45 - auVar23[4];
         cVar46 = cVar46 - auVar23[5];
         cVar47 = cVar47 - auVar23[6];
         cVar48 = cVar48 - auVar23[7];
         cVar49 = cVar49 - auVar23[8];
         cVar50 = cVar50 - auVar23[9];
         cVar51 = cVar51 - auVar23[10];
         cVar52 = cVar52 - auVar23[0xb];
         cVar53 = cVar53 - auVar23[0xc];
         cVar54 = cVar54 - auVar23[0xd];
         cVar55 = cVar55 - auVar23[0xe];
         cVar56 = cVar56 - auVar23[0xf];
         uStack_1ef = pavgb(auVar5[0], cVar40);
         uStack_1ed = pavgb(auVar5[1], cVar42);
         uStack_1eb = pavgb(auVar5[2], cVar43);
         uStack_1e9 = pavgb(auVar5[3], cVar44);
         uStack_1e7 = pavgb(auVar5[4], cVar45);
         uStack_1e5 = pavgb(auVar5[5], cVar46);
         uStack_1e3 = pavgb(auVar5[6], cVar47);
         uStack_1e1 = pavgb(auVar5[7], cVar48);
         uStack_1df = pavgb(auVar5[8], cVar49);
         uStack_1dd = pavgb(auVar5[9], cVar50);
         uStack_1db = pavgb(auVar5[10], cVar51);
         uStack_1d9 = pavgb(auVar5[0xb], cVar52);
         uStack_1d7 = pavgb(auVar5[0xc], cVar53);
         uStack_1d5 = pavgb(auVar5[0xd], cVar54);
         uStack_1d3 = pavgb(auVar5[0xe], cVar55);
         uStack_1d1 = pavgb(auVar5[0xf], cVar56);
         uVar24 = pavgb(auVar4[0], cVar40);
         uVar25 = pavgb(auVar4[1], cVar42);
         uVar26 = pavgb(auVar4[2], cVar43);
         uVar27 = pavgb(auVar4[3], cVar44);
         uVar28 = pavgb(auVar4[4], cVar45);
         uVar29 = pavgb(auVar4[5], cVar46);
         uVar30 = pavgb(auVar4[6], cVar47);
         uVar31 = pavgb(auVar4[7], cVar48);
         local_1a0 = pavgb(auVar4[8], cVar49);
         uStack_19e = pavgb(auVar4[9], cVar50);
         uStack_19c = pavgb(auVar4[10], cVar51);
         uStack_19a = pavgb(auVar4[0xb], cVar52);
         uStack_198 = pavgb(auVar4[0xc], cVar53);
         uStack_196 = pavgb(auVar4[0xd], cVar54);
         uStack_194 = pavgb(auVar4[0xe], cVar55);
         uStack_192 = pavgb(auVar4[0xf], cVar56);
         uVar32 = pavgb(auVar6[0], cVar58);
         uVar33 = pavgb(auVar6[1], cVar59);
         uVar34 = pavgb(auVar6[2], cVar60);
         uVar35 = pavgb(auVar6[3], cVar61);
         uVar36 = pavgb(auVar6[4], cVar62);
         uVar37 = pavgb(auVar6[5], cVar63);
         uVar38 = pavgb(auVar6[6], cVar64);
         uVar39 = pavgb(auVar6[7], cVar65);
         uStack_19f = pavgb(auVar6[8], cVar66);
         uStack_19d = pavgb(auVar6[9], cVar67);
         uStack_19b = pavgb(auVar6[10], cVar68);
         uStack_199 = pavgb(auVar6[0xb], cVar69);
         uStack_197 = pavgb(auVar6[0xc], cVar70);
         uStack_195 = pavgb(auVar6[0xd], cVar71);
         uStack_193 = pavgb(auVar6[0xe], cVar72);
         uStack_191 = pavgb(auVar6[0xf], cVar73);
         local_1b0._8_8_ = ( undefined8 )(CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar39, uVar31), uVar38), uVar30), uVar37), uVar29), uVar36), CONCAT11(uVar28, uVar31)) >> 8);
         local_1b0[7] = uVar35;
         local_1b0[6] = uVar27;
         local_1b0[5] = uVar34;
         local_1b0[4] = uVar26;
         local_1b0[3] = uVar33;
         local_1b0[2] = uVar25;
         local_1b0[1] = uVar32;
         local_1b0[0] = uVar24;
         VP8YuvToRgba32_SSE2(local_2c8, &local_210, &local_1f0, local_2d0);
         if (param_2 != (byte*)0x0) {
            VP8YuvToRgba32_SSE2(local_2b8, &local_1d0, local_1b0, local_2c0);
         }

         local_2c8 = local_2c8 + 0x20;
         lVar13 = lVar13 + 0x10;
         local_2d0 = local_2d0 + 0x80;
         local_2b8 = local_2b8 + 0x20;
         local_2c0 = local_2c0 + 0x80;
      }
 while ( (ulong)uVar12 << 4 != lVar13 );
      iVar10 = uVar12 * 0x10;
      iVar17 = uVar16 * 0x20 + 0x21;
   }

   iVar15 = ( param_9 + 1 >> 1 ) - ( iVar17 >> 1 );
   uVar18 = (ulong)iVar15;
   __dest = (undefined1*)0x0;
   if (param_2 != (byte*)0x0) {
      __dest = local_70;
   }

   puVar22 = local_258;
   __memcpy_chk(puVar22, param_3 + iVar10, uVar18, 0x11);
   __memcpy_chk(local_238, param_5 + iVar10, uVar18, 0x11);
   iVar19 = iVar15 + -1;
   lVar13 = (long)( 0x11 - iVar15 );
   puVar1 = puVar22 + uVar18;
   uVar11 = 0x11;
   if (0x10 < uVar18) {
      uVar11 = uVar18;
   }

   lVar14 = uVar11 - uVar18;
   __memset_chk(puVar1, local_258[iVar19], lVar13);
   puVar2 = local_238 + uVar18;
   __memset_chk(puVar2, local_238[iVar19], lVar13, lVar14);
   Upsample32Pixels_SSE2(puVar22, local_238, &local_210, 0x11);
   __memcpy_chk();
   __memcpy_chk(local_238, param_6 + iVar10, uVar18, 0x11);
   __memset_chk(puVar1, local_258[iVar19], lVar13, lVar14);
   __memset_chk(puVar2, local_238[iVar19], lVar13, lVar14);
   Upsample32Pixels_SSE2(puVar22, local_238, &local_1f0);
   param_9 = param_9 - iVar17;
   __n = (size_t)( param_9 * 4 );
   memcpy(local_90, param_1 + iVar17, (long)param_9);
   param_7 = param_7 + ( iVar17 << 2 );
   if (param_2 == (byte*)0x0) {
      VP8YuvToRgba32_SSE2(local_90, &local_210, &local_1f0, local_190);
      if (__dest == (undefined1*)0x0) {
         memcpy(param_7, local_190, __n);
      }
 else {
         VP8YuvToRgba32_SSE2(__dest, &local_1d0, local_1b0, local_110);
         memcpy(param_7, local_190, __n);
      }

   }
 else {
      memcpy(__dest, param_2 + iVar17, (long)param_9);
      VP8YuvToRgba32_SSE2(local_90, &local_210, &local_1f0, local_190);
      VP8YuvToRgba32_SSE2(__dest, &local_1d0, local_1b0, local_110);
      memcpy(param_7, local_190, __n);
      memcpy(param_8 + ( iVar17 << 2 ), local_110, __n);
   }

   LAB_001041da:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void WebPInitUpsamplersSSE2(void) {
   _WebPUpsamplers = UpsampleRgbLinePair_SSE2;
   _WebPYUV444Converters = UpsampleRgbaLinePair_SSE2;
   _DAT_001050e0 = UpsampleRgba4444LinePair_SSE2;
   _DAT_001050a0 = UpsampleBgrLinePair_SSE2;
   _DAT_001050a8 = UpsampleBgraLinePair_SSE2;
   _DAT_001050d0 = UpsampleBgraLinePair_SSE2;
   _DAT_001050d8 = UpsampleArgbLinePair_SSE2;
   _DAT_001050b0 = UpsampleArgbLinePair_SSE2;
   _DAT_001050b8 = UpsampleRgba4444LinePair_SSE2;
   _DAT_001050c0 = UpsampleRgb565LinePair_SSE2;
   _DAT_001050c8 = UpsampleRgbaLinePair_SSE2;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void WebPInitYUV444ConvertersSSE2(void) {
   _WebPYUV444Converters = Yuv444ToRgb_SSE2;
   _DAT_001050a0 = Yuv444ToRgba_SSE2;
   _DAT_001050e8 = Yuv444ToRgba4444_SSE2;
   _DAT_001050a8 = Yuv444ToBgr_SSE2;
   _DAT_001050b0 = Yuv444ToBgra_SSE2;
   _DAT_001050d8 = Yuv444ToBgra_SSE2;
   _DAT_001050e0 = Yuv444ToArgb_SSE2;
   _DAT_001050b8 = Yuv444ToArgb_SSE2;
   _DAT_001050c0 = Yuv444ToRgba4444_SSE2;
   _DAT_001050c8 = Yuv444ToRgb565_SSE2;
   _DAT_001050d0 = Yuv444ToRgba_SSE2;
   return;
}


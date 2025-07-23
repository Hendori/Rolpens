void AlphaReplace_SSE2(uint *param_1, int param_2, uint param_3) {
   uint *puVar1;
   uint *puVar2;
   int iVar3;
   uint uVar4;
   uint uVar5;
   uint uVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   uint uVar10;
   uint uVar11;
   uint uVar12;
   if (param_2 < 8) {
      iVar3 = 0;
   }
 else {
      uVar4 = param_2 - 8U >> 3;
      puVar2 = param_1;
      do {
         puVar1 = puVar2 + 8;
         uVar9 = -(uint)((int)*puVar2 >> 0x18 == 0);
         uVar10 = -(uint)((int)puVar2[1] >> 0x18 == 0);
         uVar11 = -(uint)((int)puVar2[2] >> 0x18 == 0);
         uVar12 = -(uint)((int)puVar2[3] >> 0x18 == 0);
         uVar5 = -(uint)((int)puVar2[4] >> 0x18 == 0);
         uVar6 = -(uint)((int)puVar2[5] >> 0x18 == 0);
         uVar7 = -(uint)((int)puVar2[6] >> 0x18 == 0);
         uVar8 = -(uint)((int)puVar2[7] >> 0x18 == 0);
         *puVar2 = uVar9 & param_3 | ~uVar9 & *puVar2;
         puVar2[1] = uVar10 & param_3 | ~uVar10 & puVar2[1];
         puVar2[2] = uVar11 & param_3 | ~uVar11 & puVar2[2];
         puVar2[3] = uVar12 & param_3 | ~uVar12 & puVar2[3];
         puVar2[4] = uVar5 & param_3 | ~uVar5 & puVar2[4];
         puVar2[5] = uVar6 & param_3 | ~uVar6 & puVar2[5];
         puVar2[6] = uVar7 & param_3 | ~uVar7 & puVar2[6];
         puVar2[7] = uVar8 & param_3 | ~uVar8 & puVar2[7];
         puVar2 = puVar1;
      }
 while ( param_1 + (ulong)uVar4 * 8 + 8 != puVar1 );
      iVar3 = uVar4 * 8 + 8;
   }

   if (iVar3 < param_2) {
      puVar2 = param_1 + iVar3;
      do {
         if (*puVar2 >> 0x18 == 0) {
            *puVar2 = param_3;
         }

         puVar2 = puVar2 + 1;
      }
 while ( param_1 + ( ulong )(uint)(param_2 - iVar3) + (long)iVar3 != puVar2 );
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */bool ExtractAlpha_SSE2(long param_1, int param_2, int param_3, int param_4, long param_5, int param_6) {
   byte *pbVar1;
   byte bVar2;
   short sVar10;
   short sVar11;
   short sVar12;
   short sVar13;
   short sVar14;
   short sVar15;
   short sVar16;
   short sVar17;
   uint uVar18;
   long lVar19;
   ushort uVar20;
   int iVar21;
   uint uVar22;
   undefined1 auVar23[16];
   byte bVar24;
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
   undefined1 auVar25[16];
   byte bVar3;
   byte bVar4;
   byte bVar5;
   byte bVar6;
   byte bVar7;
   byte bVar8;
   byte bVar9;
   auVar25 = __LC1;
   uVar22 = param_3 - 1U & 0xfffffff8;
   if (param_4 < 1) {
      auVar25._8_4_ = 0xffffffff;
      auVar25._0_8_ = 0xffffffffffffffff;
      auVar25._12_4_ = 0xffffffff;
      uVar20 = 0xff;
   }
 else {
      iVar21 = 0;
      uVar20 = 0xff;
      bVar24 = _LC2;
      bVar26 = UNK_00100a71;
      bVar27 = UNK_00100a72;
      bVar28 = UNK_00100a73;
      bVar29 = UNK_00100a74;
      bVar30 = UNK_00100a75;
      bVar31 = UNK_00100a76;
      bVar32 = UNK_00100a77;
      bVar33 = UNK_00100a78;
      bVar34 = UNK_00100a79;
      bVar35 = UNK_00100a7a;
      bVar36 = UNK_00100a7b;
      bVar37 = UNK_00100a7c;
      bVar38 = UNK_00100a7d;
      bVar39 = UNK_00100a7e;
      bVar40 = UNK_00100a7f;
      do {
         lVar19 = 0;
         uVar18 = 0;
         if (0 < (int)uVar22) {
            do {
               auVar23 = packssdw(*(undefined1(*) [16])( param_1 + lVar19 * 4 ) & auVar25, *(undefined1(*) [16])( param_1 + 0x10 + lVar19 * 4 ) & auVar25);
               sVar10 = auVar23._0_2_;
               bVar2 = ( 0 < sVar10 ) * ( sVar10 < 0x100 ) * auVar23[0] - ( 0xff < sVar10 );
               sVar11 = auVar23._2_2_;
               bVar3 = ( 0 < sVar11 ) * ( sVar11 < 0x100 ) * auVar23[2] - ( 0xff < sVar11 );
               sVar12 = auVar23._4_2_;
               bVar4 = ( 0 < sVar12 ) * ( sVar12 < 0x100 ) * auVar23[4] - ( 0xff < sVar12 );
               sVar13 = auVar23._6_2_;
               bVar5 = ( 0 < sVar13 ) * ( sVar13 < 0x100 ) * auVar23[6] - ( 0xff < sVar13 );
               sVar14 = auVar23._8_2_;
               bVar6 = ( 0 < sVar14 ) * ( sVar14 < 0x100 ) * auVar23[8] - ( 0xff < sVar14 );
               sVar15 = auVar23._10_2_;
               bVar7 = ( 0 < sVar15 ) * ( sVar15 < 0x100 ) * auVar23[10] - ( 0xff < sVar15 );
               sVar16 = auVar23._12_2_;
               bVar8 = ( 0 < sVar16 ) * ( sVar16 < 0x100 ) * auVar23[0xc] - ( 0xff < sVar16 );
               sVar17 = auVar23._14_2_;
               bVar9 = ( 0 < sVar17 ) * ( sVar17 < 0x100 ) * auVar23[0xe] - ( 0xff < sVar17 );
               pbVar1 = (byte*)( param_5 + lVar19 );
               *pbVar1 = bVar2;
               pbVar1[1] = bVar3;
               pbVar1[2] = bVar4;
               pbVar1[3] = bVar5;
               pbVar1[4] = bVar6;
               pbVar1[5] = bVar7;
               pbVar1[6] = bVar8;
               pbVar1[7] = bVar9;
               lVar19 = lVar19 + 8;
               bVar24 = bVar24 & bVar2;
               bVar26 = bVar26 & bVar3;
               bVar27 = bVar27 & bVar4;
               bVar28 = bVar28 & bVar5;
               bVar29 = bVar29 & bVar6;
               bVar30 = bVar30 & bVar7;
               bVar31 = bVar31 & bVar8;
               bVar32 = bVar32 & bVar9;
               bVar33 = bVar33 & ( 0 < sVar10 ) * ( sVar10 < 0x100 ) * auVar23[0] - ( 0xff < sVar10 );
               bVar34 = bVar34 & ( 0 < sVar11 ) * ( sVar11 < 0x100 ) * auVar23[2] - ( 0xff < sVar11 );
               bVar35 = bVar35 & ( 0 < sVar12 ) * ( sVar12 < 0x100 ) * auVar23[4] - ( 0xff < sVar12 );
               bVar36 = bVar36 & ( 0 < sVar13 ) * ( sVar13 < 0x100 ) * auVar23[6] - ( 0xff < sVar13 );
               bVar37 = bVar37 & ( 0 < sVar14 ) * ( sVar14 < 0x100 ) * auVar23[8] - ( 0xff < sVar14 );
               bVar38 = bVar38 & ( 0 < sVar15 ) * ( sVar15 < 0x100 ) * auVar23[10] - ( 0xff < sVar15 );
               bVar39 = bVar39 & ( 0 < sVar16 ) * ( sVar16 < 0x100 ) * auVar23[0xc] - ( 0xff < sVar16 );
               bVar40 = bVar40 & ( 0 < sVar17 ) * ( sVar17 < 0x100 ) * auVar23[0xe] - ( 0xff < sVar17 );
               uVar18 = uVar22;
            }
 while ( (int)lVar19 < (int)uVar22 );
         }

         if ((int)uVar18 < param_3) {
            lVar19 = (long)(int)uVar18;
            do {
               bVar9 = *(byte*)( param_1 + lVar19 * 4 );
               *(byte*)( param_5 + lVar19 ) = bVar9;
               lVar19 = lVar19 + 1;
               uVar20 = uVar20 & bVar9;
            }
 while ( (int)lVar19 < param_3 );
         }

         iVar21 = iVar21 + 1;
         param_1 = param_1 + param_2;
         param_5 = param_5 + param_6;
      }
 while ( param_4 != iVar21 );
      auVar25[0] = -(bVar24 == _LC2);
      auVar25[1] = -(bVar26 == UNK_00100a71);
      auVar25[2] = -(bVar27 == UNK_00100a72);
      auVar25[3] = -(bVar28 == UNK_00100a73);
      auVar25[4] = -(bVar29 == UNK_00100a74);
      auVar25[5] = -(bVar30 == UNK_00100a75);
      auVar25[6] = -(bVar31 == UNK_00100a76);
      auVar25[7] = -(bVar32 == UNK_00100a77);
      auVar25[8] = -(bVar33 == UNK_00100a78);
      auVar25[9] = -(bVar34 == UNK_00100a79);
      auVar25[10] = -(bVar35 == UNK_00100a7a);
      auVar25[0xb] = -(bVar36 == UNK_00100a7b);
      auVar25[0xc] = -(bVar37 == UNK_00100a7c);
      auVar25[0xd] = -(bVar38 == UNK_00100a7d);
      auVar25[0xe] = -(bVar39 == UNK_00100a7e);
      auVar25[0xf] = -(bVar40 == UNK_00100a7f);
   }

   return ( ( ( ushort )(SUB161(auVar25 >> 7, 0) & 1) | ( ushort )(SUB161(auVar25 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar25 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar25 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar25 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar25 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar25 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar25 >> 0x3f, 0) & 1) << 7 ) & uVar20 ) == 0xff;
}
undefined8 HasAlpha8b_SSE2(long param_1, int param_2) {
   char *pcVar1;
   long lVar2;
   long lVar3;
   char *pcVar4;
   int iVar5;
   undefined1 auVar6[16];
   if (param_2 < 0x10) {
      iVar5 = 0;
   }
 else {
      lVar2 = 0x10;
      do {
         lVar3 = lVar2;
         pcVar1 = (char*)( param_1 + -0x10 + lVar3 );
         auVar6[0] = -(*pcVar1 == -1);
         for (int i = 0; i < 15; i++) {
            auVar6[( i + 1 )] = -(pcVar1[1] == -1);
         }

         if (( ushort )(( ushort )(SUB161(auVar6 >> 7, 0) & 1) | ( ushort )(SUB161(auVar6 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar6 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar6 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar6 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar6 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar6 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar6 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar6 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar6 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar6 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar6 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar6 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar6 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar6 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar6[0xf] >> 7) << 0xf) != 0xffff) {
            return 1;
         }

         lVar2 = lVar3 + 0x10;
      }
 while ( lVar3 + 0x10 != ( ulong )(( param_2 - 0x10U >> 4 ) + 2) << 4 );
      iVar5 = (int)lVar3;
   }

   if (iVar5 < param_2) {
      pcVar4 = (char*)( iVar5 + param_1 );
      pcVar1 = pcVar4 + ( uint )(param_2 - iVar5);
      do {
         if (*pcVar4 != -1) {
            return 1;
         }

         pcVar4 = pcVar4 + 1;
      }
 while ( pcVar4 != pcVar1 );
   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 HasAlpha32b_SSE2(long param_1, int param_2) {
   int iVar1;
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
   int iVar18;
   int iVar19;
   long lVar20;
   long lVar21;
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   iVar1 = param_2 * 4 + -3;
   if (iVar1 < 0x40) {
      iVar19 = 0x1f;
      iVar18 = 0;
   }
 else {
      lVar21 = 0x40;
      do {
         lVar20 = lVar21;
         auVar22 = packssdw(*(undefined1(*) [16])( param_1 + -0x40 + lVar20 ) & __LC1, *(undefined1(*) [16])( param_1 + -0x30 + lVar20 ) & __LC1);
         auVar24 = packssdw(*(undefined1(*) [16])( param_1 + -0x20 + lVar20 ) & __LC1, *(undefined1(*) [16])( param_1 + -0x10 + lVar20 ) & __LC1);
         sVar2 = auVar22._0_2_;
         sVar3 = auVar22._2_2_;
         sVar4 = auVar22._4_2_;
         sVar5 = auVar22._6_2_;
         sVar6 = auVar22._8_2_;
         sVar7 = auVar22._10_2_;
         sVar8 = auVar22._12_2_;
         sVar9 = auVar22._14_2_;
         sVar10 = auVar24._0_2_;
         sVar11 = auVar24._2_2_;
         sVar12 = auVar24._4_2_;
         sVar13 = auVar24._6_2_;
         sVar14 = auVar24._8_2_;
         sVar15 = auVar24._10_2_;
         sVar16 = auVar24._12_2_;
         sVar17 = auVar24._14_2_;
         auVar23[0] = -((char)((0 < sVar2) * (sVar2 < 0x100) * auVar22[0] - (0xff < sVar2)) == -1);
         auVar23[1] = -((char)((0 < sVar3) * (sVar3 < 0x100) * auVar22[2] - (0xff < sVar3)) == -1);
         auVar23[2] = -((char)((0 < sVar4) * (sVar4 < 0x100) * auVar22[4] - (0xff < sVar4)) == -1);
         auVar23[3] = -((char)((0 < sVar5) * (sVar5 < 0x100) * auVar22[6] - (0xff < sVar5)) == -1);
         auVar23[4] = -((char)((0 < sVar6) * (sVar6 < 0x100) * auVar22[8] - (0xff < sVar6)) == -1);
         auVar23[5] = -((char)((0 < sVar7) * (sVar7 < 0x100) * auVar22[10] - (0xff < sVar7)) == -1);
         auVar23[6] = -((char)((0 < sVar8) * (sVar8 < 0x100) * auVar22[0xc] - (0xff < sVar8)) == -1);
         auVar23[7] = -((char)((0 < sVar9) * (sVar9 < 0x100) * auVar22[0xe] - (0xff < sVar9)) == -1);
         auVar23[8] = -((char)((0 < sVar10) * (sVar10 < 0x100) * auVar24[0] - (0xff < sVar10)) == -1);
         auVar23[9] = -((char)((0 < sVar11) * (sVar11 < 0x100) * auVar24[2] - (0xff < sVar11)) == -1);
         auVar23[10] = -((char)((0 < sVar12) * (sVar12 < 0x100) * auVar24[4] - (0xff < sVar12)) == -1);
         auVar23[0xb] = -((char)((0 < sVar13) * (sVar13 < 0x100) * auVar24[6] - (0xff < sVar13)) == -1);
         auVar23[0xc] = -((char)((0 < sVar14) * (sVar14 < 0x100) * auVar24[8] - (0xff < sVar14)) == -1);
         auVar23[0xd] = -((char)((0 < sVar15) * (sVar15 < 0x100) * auVar24[10] - (0xff < sVar15)) == -1
                      );
         auVar23[0xe] = -((char)((0 < sVar16) * (sVar16 < 0x100) * auVar24[0xc] - (0xff < sVar16)) ==
                      -1);
         auVar23[0xf] = -((char)((0 < sVar17) * (sVar17 < 0x100) * auVar24[0xe] - (0xff < sVar17)) ==
                      -1);
         if (( ushort )(( ushort )(SUB161(auVar23 >> 7, 0) & 1) | ( ushort )(SUB161(auVar23 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar23 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar23 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar23 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar23 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar23 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar23 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar23 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar23 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar23 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar23 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar23 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar23 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar23 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar23[0xf] >> 7) << 0xf) != 0xffff) {
            return 1;
         }

         lVar21 = lVar20 + 0x40;
      }
 while ( ( ulong )(( param_2 * 4 - 0x43U >> 6 ) + 2) << 6 != lVar20 + 0x40 );
      iVar18 = (int)lVar20;
      iVar19 = iVar18 + 0x1f;
   }

   if (iVar19 < iVar1) {
      lVar21 = (long)( iVar18 + 0x20 );
      do {
         auVar22 = packssdw(*(undefined1(*) [16])( param_1 + -0x20 + lVar21 ) & __LC1, *(undefined1(*) [16])( param_1 + -0x10 + lVar21 ) & __LC1);
         sVar2 = auVar22._0_2_;
         sVar3 = auVar22._2_2_;
         sVar4 = auVar22._4_2_;
         sVar5 = auVar22._6_2_;
         sVar6 = auVar22._8_2_;
         sVar7 = auVar22._10_2_;
         sVar8 = auVar22._12_2_;
         sVar9 = auVar22._14_2_;
         auVar24[0] = -((char)((0 < sVar2) * (sVar2 < 0x100) * auVar22[0] - (0xff < sVar2)) == -1);
         auVar24[1] = -((char)((0 < sVar3) * (sVar3 < 0x100) * auVar22[2] - (0xff < sVar3)) == -1);
         auVar24[2] = -((char)((0 < sVar4) * (sVar4 < 0x100) * auVar22[4] - (0xff < sVar4)) == -1);
         auVar24[3] = -((char)((0 < sVar5) * (sVar5 < 0x100) * auVar22[6] - (0xff < sVar5)) == -1);
         auVar24[4] = -((char)((0 < sVar6) * (sVar6 < 0x100) * auVar22[8] - (0xff < sVar6)) == -1);
         auVar24[5] = -((char)((0 < sVar7) * (sVar7 < 0x100) * auVar22[10] - (0xff < sVar7)) == -1);
         auVar24[6] = -((char)((0 < sVar8) * (sVar8 < 0x100) * auVar22[0xc] - (0xff < sVar8)) == -1);
         auVar24[7] = -((char)((0 < sVar9) * (sVar9 < 0x100) * auVar22[0xe] - (0xff < sVar9)) == -1);
         auVar24[8] = -((char)((0 < sVar2) * (sVar2 < 0x100) * auVar22[0] - (0xff < sVar2)) == -1);
         auVar24[9] = -((char)((0 < sVar3) * (sVar3 < 0x100) * auVar22[2] - (0xff < sVar3)) == -1);
         auVar24[10] = -((char)((0 < sVar4) * (sVar4 < 0x100) * auVar22[4] - (0xff < sVar4)) == -1);
         auVar24[0xb] = -((char)((0 < sVar5) * (sVar5 < 0x100) * auVar22[6] - (0xff < sVar5)) == -1);
         auVar24[0xc] = -((char)((0 < sVar6) * (sVar6 < 0x100) * auVar22[8] - (0xff < sVar6)) == -1);
         auVar24[0xd] = -((char)((0 < sVar7) * (sVar7 < 0x100) * auVar22[10] - (0xff < sVar7)) == -1);
         auVar24[0xe] = -((char)((0 < sVar8) * (sVar8 < 0x100) * auVar22[0xc] - (0xff < sVar8)) == -1);
         auVar24[0xf] = -((char)((0 < sVar9) * (sVar9 < 0x100) * auVar22[0xe] - (0xff < sVar9)) == -1);
         if (( ushort )(( ushort )(SUB161(auVar24 >> 7, 0) & 1) | ( ushort )(SUB161(auVar24 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar24 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar24 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar24 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar24 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar24 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar24 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar24 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar24 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar24 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar24 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar24 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar24 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar24 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar24[0xf] >> 7) << 0xf) != 0xffff) {
            return 1;
         }

         iVar18 = (int)lVar21;
         lVar21 = lVar21 + 0x20;
      }
 while ( iVar18 + 0x1f < iVar1 );
   }

   if (iVar18 <= iVar1) {
      lVar21 = (long)iVar18;
      do {
         if (*(char*)( param_1 + lVar21 ) != -1) {
            return 1;
         }

         lVar21 = lVar21 + 4;
      }
 while ( (int)lVar21 <= iVar1 );
   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void ExtractGreen_SSE2(uint *param_1, char *param_2, int param_3) {
   uint uVar1;
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
   int iVar18;
   uint *puVar19;
   uint *puVar20;
   long lVar21;
   int iVar22;
   char *pcVar23;
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   auVar25 = __LC1;
   if (param_3 < 0x10) {
      iVar18 = 7;
      iVar22 = 0;
      puVar19 = param_1;
   }
 else {
      uVar1 = ( param_3 - 0x10U >> 4 ) + 1;
      puVar19 = param_1;
      pcVar23 = param_2;
      do {
         puVar20 = puVar19 + 0x10;
         auVar24._0_4_ = *puVar19 >> 8;
         auVar24._4_4_ = puVar19[1] >> 8;
         auVar24._8_4_ = puVar19[2] >> 8;
         auVar24._12_4_ = puVar19[3] >> 8;
         auVar29._0_4_ = puVar19[4] >> 8;
         auVar29._4_4_ = puVar19[5] >> 8;
         auVar29._8_4_ = puVar19[6] >> 8;
         auVar29._12_4_ = puVar19[7] >> 8;
         auVar26._0_4_ = puVar19[8] >> 8;
         auVar26._4_4_ = puVar19[9] >> 8;
         auVar26._8_4_ = puVar19[10] >> 8;
         auVar26._12_4_ = puVar19[0xb] >> 8;
         auVar28._0_4_ = puVar19[0xc] >> 8;
         auVar28._4_4_ = puVar19[0xd] >> 8;
         auVar28._8_4_ = puVar19[0xe] >> 8;
         auVar28._12_4_ = puVar19[0xf] >> 8;
         auVar24 = packssdw(auVar24 & auVar25, auVar29 & auVar25);
         auVar26 = packssdw(auVar26 & auVar25, auVar28 & auVar25);
         sVar2 = auVar24._0_2_;
         sVar3 = auVar24._2_2_;
         sVar4 = auVar24._4_2_;
         sVar5 = auVar24._6_2_;
         sVar6 = auVar24._8_2_;
         sVar7 = auVar24._10_2_;
         sVar8 = auVar24._12_2_;
         sVar9 = auVar24._14_2_;
         sVar10 = auVar26._0_2_;
         sVar11 = auVar26._2_2_;
         sVar12 = auVar26._4_2_;
         sVar13 = auVar26._6_2_;
         sVar14 = auVar26._8_2_;
         sVar15 = auVar26._10_2_;
         sVar16 = auVar26._12_2_;
         sVar17 = auVar26._14_2_;
         *pcVar23 = ( 0 < sVar2 ) * ( sVar2 < 0x100 ) * auVar24[0] - ( 0xff < sVar2 );
         pcVar23[1] = ( 0 < sVar3 ) * ( sVar3 < 0x100 ) * auVar24[2] - ( 0xff < sVar3 );
         pcVar23[2] = ( 0 < sVar4 ) * ( sVar4 < 0x100 ) * auVar24[4] - ( 0xff < sVar4 );
         pcVar23[3] = ( 0 < sVar5 ) * ( sVar5 < 0x100 ) * auVar24[6] - ( 0xff < sVar5 );
         pcVar23[4] = ( 0 < sVar6 ) * ( sVar6 < 0x100 ) * auVar24[8] - ( 0xff < sVar6 );
         pcVar23[5] = ( 0 < sVar7 ) * ( sVar7 < 0x100 ) * auVar24[10] - ( 0xff < sVar7 );
         pcVar23[6] = ( 0 < sVar8 ) * ( sVar8 < 0x100 ) * auVar24[0xc] - ( 0xff < sVar8 );
         pcVar23[7] = ( 0 < sVar9 ) * ( sVar9 < 0x100 ) * auVar24[0xe] - ( 0xff < sVar9 );
         pcVar23[8] = ( 0 < sVar10 ) * ( sVar10 < 0x100 ) * auVar26[0] - ( 0xff < sVar10 );
         pcVar23[9] = ( 0 < sVar11 ) * ( sVar11 < 0x100 ) * auVar26[2] - ( 0xff < sVar11 );
         pcVar23[10] = ( 0 < sVar12 ) * ( sVar12 < 0x100 ) * auVar26[4] - ( 0xff < sVar12 );
         pcVar23[0xb] = ( 0 < sVar13 ) * ( sVar13 < 0x100 ) * auVar26[6] - ( 0xff < sVar13 );
         pcVar23[0xc] = ( 0 < sVar14 ) * ( sVar14 < 0x100 ) * auVar26[8] - ( 0xff < sVar14 );
         pcVar23[0xd] = ( 0 < sVar15 ) * ( sVar15 < 0x100 ) * auVar26[10] - ( 0xff < sVar15 );
         pcVar23[0xe] = ( 0 < sVar16 ) * ( sVar16 < 0x100 ) * auVar26[0xc] - ( 0xff < sVar16 );
         pcVar23[0xf] = ( 0 < sVar17 ) * ( sVar17 < 0x100 ) * auVar26[0xe] - ( 0xff < sVar17 );
         puVar19 = puVar20;
         pcVar23 = pcVar23 + 0x10;
      }
 while ( puVar20 != param_1 + (ulong)uVar1 * 0x10 );
      iVar22 = uVar1 * 0x10;
      iVar18 = iVar22 + 7;
      puVar19 = param_1 + (ulong)uVar1 * 0x10;
   }

   if (iVar18 < param_3) {
      lVar21 = (long)iVar22;
      iVar22 = iVar22 + 8;
      auVar25._0_4_ = *puVar19 >> 8;
      auVar25._4_4_ = puVar19[1] >> 8;
      auVar25._8_4_ = puVar19[2] >> 8;
      auVar25._12_4_ = puVar19[3] >> 8;
      auVar27._0_4_ = puVar19[4] >> 8;
      auVar27._4_4_ = puVar19[5] >> 8;
      auVar27._8_4_ = puVar19[6] >> 8;
      auVar27._12_4_ = puVar19[7] >> 8;
      auVar25 = packssdw(auVar25 & __LC1, auVar27 & __LC1);
      sVar2 = auVar25._0_2_;
      sVar3 = auVar25._2_2_;
      sVar4 = auVar25._4_2_;
      sVar5 = auVar25._6_2_;
      sVar6 = auVar25._8_2_;
      sVar7 = auVar25._10_2_;
      sVar8 = auVar25._12_2_;
      sVar9 = auVar25._14_2_;
      *(ulong*)( param_2 + lVar21 ) = CONCAT17(( 0 < sVar9 ) * ( sVar9 < 0x100 ) * auVar25[0xe] - ( 0xff < sVar9 ), CONCAT16(( 0 < sVar8 ) * ( sVar8 < 0x100 ) * auVar25[0xc] - ( 0xff < sVar8 ), CONCAT15(( 0 < sVar7 ) * ( sVar7 < 0x100 ) * auVar25[10] - ( 0xff < sVar7 ), CONCAT14(( 0 < sVar6 ) * ( sVar6 < 0x100 ) * auVar25[8] - ( 0xff < sVar6 ), CONCAT13(( 0 < sVar5 ) * ( sVar5 < 0x100 ) * auVar25[6] - ( 0xff < sVar5 ), CONCAT12(( 0 < sVar4 ) * ( sVar4 < 0x100 ) * auVar25[4] - ( 0xff < sVar4 ), CONCAT11(( 0 < sVar3 ) * ( sVar3 < 0x100 ) * auVar25[2] - ( 0xff < sVar3 ), ( 0 < sVar2 ) * ( sVar2 < 0x100 ) * auVar25[0] - ( 0xff < sVar2 ))))))));
   }

   lVar21 = (long)iVar22;
   while (iVar22 < param_3) {
      param_2[lVar21] = (char)( param_1[lVar21] >> 8 );
      lVar21 = lVar21 + 1;
      iVar22 = (int)lVar21;
   }
;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */bool DispatchAlpha_SSE2(ulong *param_1, int param_2, int param_3, int param_4, undefined1 (*param_5)[16], int param_6) {
   ulong uVar1;
   byte bVar2;
   undefined1 auVar3[14];
   undefined1 auVar4[15];
   undefined1 auVar5[15];
   undefined1 auVar6[15];
   undefined1 auVar7[14];
   undefined1 auVar8[15];
   undefined1 auVar9[15];
   undefined1 auVar10[15];
   undefined1 auVar11[15];
   undefined1 auVar12[15];
   unkuint9 Var13;
   undefined1 auVar14[11];
   undefined1 auVar15[13];
   undefined1 auVar16[14];
   undefined1 auVar17[15];
   undefined1 auVar18[15];
   uint uVar19;
   undefined1(*pauVar20)[16];
   long lVar21;
   ushort uVar22;
   ulong *puVar23;
   int iVar24;
   uint uVar25;
   undefined1 uVar26;
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   auVar30 = __LC3;
   uVar25 = param_3 - 1U & 0xfffffff8;
   if (param_4 < 1) {
      auVar30._8_4_ = 0xffffffff;
      auVar30._0_8_ = 0xffffffffffffffff;
      auVar30._12_4_ = 0xffffffff;
      uVar22 = 0xff;
   }
 else {
      auVar29[1] = UNK_00100a71;
      auVar29[0] = _LC2;
      auVar29[2] = UNK_00100a72;
      auVar29[3] = UNK_00100a73;
      auVar29[4] = UNK_00100a74;
      auVar29[5] = UNK_00100a75;
      auVar29[6] = UNK_00100a76;
      auVar29[7] = UNK_00100a77;
      auVar29[8] = UNK_00100a78;
      auVar29[9] = UNK_00100a79;
      auVar29[10] = UNK_00100a7a;
      auVar29[0xb] = UNK_00100a7b;
      auVar29[0xc] = UNK_00100a7c;
      auVar29[0xd] = UNK_00100a7d;
      auVar29[0xe] = UNK_00100a7e;
      auVar29[0xf] = UNK_00100a7f;
      iVar24 = 0;
      uVar19 = ( uVar25 - 1 >> 3 ) + 1;
      uVar22 = 0xff;
      do {
         pauVar20 = param_5;
         puVar23 = param_1;
         if ((int)uVar25 < 1) {
            lVar21 = 0;
         }
 else {
            do {
               uVar1 = *puVar23;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar1;
               puVar23 = puVar23 + 1;
               auVar29 = auVar29 & auVar28;
               uVar26 = ( undefined1 )(uVar1 >> 0x38);
               auVar4._8_6_ = 0;
               auVar4._0_8_ = uVar1;
               auVar4[0xe] = uVar26;
               auVar5._8_4_ = 0;
               auVar5._0_8_ = uVar1;
               auVar5[0xc] = (char)( uVar1 >> 0x30 );
               auVar5._13_2_ = auVar4._13_2_;
               auVar6._8_4_ = 0;
               auVar6._0_8_ = uVar1;
               auVar6._12_3_ = auVar5._12_3_;
               auVar8._8_2_ = 0;
               auVar8._0_8_ = uVar1;
               auVar8[10] = (char)( uVar1 >> 0x28 );
               auVar8._11_4_ = auVar6._11_4_;
               auVar9._8_2_ = 0;
               auVar9._0_8_ = uVar1;
               auVar9._10_5_ = auVar8._10_5_;
               auVar10[8] = (char)( uVar1 >> 0x20 );
               auVar10._0_8_ = uVar1;
               auVar10._9_6_ = auVar9._9_6_;
               auVar12._7_8_ = 0;
               auVar12._0_7_ = auVar10._8_7_;
               Var13 = CONCAT81(SUB158(auVar12 << 0x40, 7), (char)( uVar1 >> 0x18 ));
               auVar17._9_6_ = 0;
               auVar17._0_9_ = Var13;
               auVar14._1_10_ = SUB1510(auVar17 << 0x30, 5);
               auVar14[0] = (char)( uVar1 >> 0x10 );
               auVar18._11_4_ = 0;
               auVar18._0_11_ = auVar14;
               auVar15._1_12_ = SUB1512(auVar18 << 0x20, 3);
               auVar15[0] = (char)( uVar1 >> 8 );
               auVar11[1] = 0;
               auVar11[0] = (byte)uVar1;
               auVar11._2_13_ = auVar15;
               auVar27._2_2_ = 0;
               auVar27._0_2_ = auVar10._8_2_;
               auVar27._4_2_ = auVar8._10_2_;
               auVar27._6_2_ = 0;
               auVar27._8_2_ = auVar5._12_2_;
               auVar27._10_2_ = 0;
               auVar27[0xc] = uVar26;
               auVar27._13_3_ = 0;
               auVar3._10_2_ = 0;
               auVar3._0_10_ = auVar11._0_10_;
               auVar3._12_2_ = (short)Var13;
               auVar16._2_4_ = auVar3._10_4_;
               auVar16._0_2_ = auVar14._0_2_;
               auVar16._6_8_ = 0;
               auVar7._4_2_ = auVar15._0_2_;
               auVar7._0_4_ = auVar11._0_4_;
               auVar7._6_8_ = SUB148(auVar16 << 0x40, 6);
               auVar31._0_4_ = auVar11._0_4_ & 0xffff;
               auVar31._4_10_ = auVar7._4_10_;
               auVar31._14_2_ = 0;
               pauVar20[1] = pauVar20[1] & auVar30 | auVar27;
               *pauVar20 = *pauVar20 & auVar30 | auVar31;
               pauVar20 = pauVar20 + 2;
            }
 while ( param_1 + uVar19 != puVar23 );
            lVar21 = (long)(int)( uVar19 * 8 );
         }

         for (; (int)lVar21 < param_3; lVar21 = lVar21 + 1) {
            bVar2 = *(byte*)( (long)param_1 + lVar21 );
            ( *param_5 )[lVar21 * 4] = bVar2;
            uVar22 = uVar22 & bVar2;
         }

         iVar24 = iVar24 + 1;
         param_1 = (ulong*)( (long)param_1 + (long)param_2 );
         param_5 = (undefined1(*) [16])( *param_5 + param_6 );
      }
 while ( param_4 != iVar24 );
      auVar30[0] = -(auVar29[0] == _LC2);
      auVar30[1] = -(auVar29[1] == UNK_00100a71);
      auVar30[2] = -(auVar29[2] == UNK_00100a72);
      auVar30[3] = -(auVar29[3] == UNK_00100a73);
      auVar30[4] = -(auVar29[4] == UNK_00100a74);
      auVar30[5] = -(auVar29[5] == UNK_00100a75);
      auVar30[6] = -(auVar29[6] == UNK_00100a76);
      auVar30[7] = -(auVar29[7] == UNK_00100a77);
      auVar30[8] = -(auVar29[8] == UNK_00100a78);
      auVar30[9] = -(auVar29[9] == UNK_00100a79);
      auVar30[10] = -(auVar29[10] == UNK_00100a7a);
      auVar30[0xb] = -(auVar29[0xb] == UNK_00100a7b);
      auVar30[0xc] = -(auVar29[0xc] == UNK_00100a7c);
      auVar30[0xd] = -(auVar29[0xd] == UNK_00100a7d);
      auVar30[0xe] = -(auVar29[0xe] == UNK_00100a7e);
      auVar30[0xf] = -(auVar29[0xf] == UNK_00100a7f);
   }

   return ( ( ( ushort )(SUB161(auVar30 >> 7, 0) & 1) | ( ushort )(SUB161(auVar30 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar30 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar30 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar30 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar30 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar30 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar30 >> 0x3f, 0) & 1) << 7 ) & uVar22 ) != 0xff;
}
void DispatchAlphaToGreen_SSE2(long param_1, int param_2, uint param_3, int param_4, long param_5, int param_6) {
   undefined1 *puVar1;
   undefined1 auVar2[14];
   undefined1 auVar3[14];
   undefined1 auVar4[14];
   undefined1 auVar5[14];
   undefined1 auVar6[14];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   byte bVar9;
   undefined1 auVar10[14];
   undefined1 auVar11[14];
   undefined1 auVar12[12];
   undefined1 auVar13[12];
   undefined1 auVar14[12];
   uint uVar15;
   long lVar16;
   uint uVar17;
   int iVar18;
   int5 iVar19;
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar20[12];
   undefined1 auVar21[14];
   undefined1 auVar22[16];
   uVar17 = param_3 & 0xfffffff0;
   if (0 < param_4) {
      iVar18 = 0;
      do {
         lVar16 = 0;
         uVar15 = 0;
         if (0 < (int)uVar17) {
            do {
               puVar1 = (undefined1*)( param_1 + lVar16 );
               bVar9 = puVar1[0xb];
               auVar12[10] = 0;
               auVar12._0_10_ = SUB1610((undefined1[16])0x0, 0);
               auVar12[0xb] = puVar1[5];
               auVar13[9] = puVar1[4];
               auVar13._0_9_ = SUB169((undefined1[16])0x0, 0);
               auVar13._10_2_ = auVar12._10_2_;
               auVar14._9_3_ = auVar13._9_3_;
               auVar14._0_9_ = (unkuint9)0;
               auVar23 = ZEXT516(CONCAT41(auVar14._8_4_, puVar1[3])) << 0x38;
               auVar8._1_10_ = auVar23._6_10_;
               auVar8[0] = puVar1[2];
               auVar8._11_5_ = 0;
               auVar7._1_12_ = SUB1612(auVar8 << 0x28, 4);
               auVar7[0] = puVar1[1];
               auVar7._13_3_ = 0;
               auVar24._1_14_ = SUB1614(auVar7 << 0x18, 2);
               auVar24[0] = *puVar1;
               auVar24[0xf] = 0;
               auVar24 = auVar24 << 8;
               iVar19 = (uint5)CONCAT12(puVar1[9], (ushort)(byte)puVar1[8]) << 8;
               auVar20._0_10_ = CONCAT19(puVar1[0xc], (unkuint9)bVar9 << 0x38);
               auVar20[10] = 0;
               auVar20[0xb] = puVar1[0xd];
               auVar21[0xc] = 0;
               auVar21._0_12_ = auVar20;
               auVar21[0xd] = puVar1[0xe];
               auVar22[0xe] = 0;
               auVar22._0_14_ = auVar21;
               auVar22[0xf] = puVar1[0xf];
               auVar2._10_2_ = 0;
               auVar2._0_10_ = auVar24._0_10_;
               auVar2._12_2_ = auVar23._6_2_;
               auVar4._8_2_ = SUB162(auVar8 << 0x28, 4);
               auVar4._0_8_ = auVar24._0_8_;
               auVar4._10_4_ = auVar2._10_4_;
               auVar10._6_8_ = 0;
               auVar10._0_6_ = auVar4._8_6_;
               auVar5._4_2_ = SUB162(auVar7 << 0x18, 2);
               auVar5._0_4_ = auVar24._0_4_;
               auVar5._6_8_ = SUB148(auVar10 << 0x40, 6);
               auVar26._0_4_ = auVar24._0_4_ & 0xffff;
               auVar26._4_10_ = auVar5._4_10_;
               auVar26._14_2_ = 0;
               auVar3._10_2_ = 0;
               auVar3._0_10_ = auVar20._0_10_;
               auVar3._12_2_ = (short)( ( (ulong)bVar9 << 0x38 ) >> 0x30 );
               auVar11._6_8_ = 0;
               auVar11._0_6_ = ( uint6 )(CONCAT43(auVar3._10_4_, CONCAT21((short)( CONCAT15(puVar1[10], iVar19) >> 0x20 ), bVar9)) >> 8);
               uVar15 = (uint)iVar19;
               auVar6._4_2_ = (short)( CONCAT12(puVar1[9], (ushort)(byte)puVar1[8]) >> 8 );
               auVar6._0_4_ = uVar15;
               auVar6._6_8_ = SUB148(auVar11 << 0x40, 6);
               auVar25._0_4_ = uVar15 & 0xffff;
               auVar25._4_10_ = auVar6._4_10_;
               auVar25._14_2_ = 0;
               auVar23._2_2_ = 0;
               auVar23._0_2_ = ( ushort )(auVar20._0_10_ >> 0x40);
               auVar23._4_2_ = auVar20._10_2_;
               auVar23._6_2_ = 0;
               auVar23._8_2_ = auVar21._12_2_;
               auVar23._10_2_ = 0;
               auVar23._12_2_ = auVar22._14_2_;
               auVar23._14_2_ = 0;
               *(undefined1(*) [16])( param_5 + 0x10 + lVar16 * 4 ) = ZEXT616(CONCAT24(auVar12._10_2_, (uint)auVar14._8_2_));
               *(undefined1(*) [16])( param_5 + lVar16 * 4 ) = auVar26;
               *(undefined1(*) [16])( param_5 + 0x20 + lVar16 * 4 ) = auVar25;
               *(undefined1(*) [16])( param_5 + 0x30 + lVar16 * 4 ) = auVar23;
               lVar16 = lVar16 + 0x10;
               uVar15 = uVar17;
            }
 while ( (int)lVar16 < (int)uVar17 );
         }

         lVar16 = (long)(int)uVar15;
         while ((int)uVar15 < (int)param_3) {
            *(uint*)( param_5 + lVar16 * 4 ) = ( uint ) * (byte*)( param_1 + lVar16 ) << 8;
            lVar16 = lVar16 + 1;
            uVar15 = (uint)lVar16;
         }
;
         iVar18 = iVar18 + 1;
         param_1 = param_1 + param_2;
         param_5 = param_5 + (long)param_6 * 4;
      }
 while ( param_4 != iVar18 );
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void ApplyAlphaMultiply_SSE2(undefined1 (*param_1)[16], int param_2, int param_3, int param_4, int param_5) {
   undefined1 auVar1[15];
   undefined1 auVar2[15];
   undefined1 auVar3[15];
   undefined1 auVar4[15];
   undefined1 auVar5[15];
   undefined1 auVar6[15];
   undefined1 auVar7[15];
   undefined1 auVar8[15];
   undefined1 auVar9[15];
   undefined1 auVar10[15];
   undefined1 auVar11[15];
   undefined1 auVar12[15];
   undefined1 auVar13[15];
   unkuint9 Var14;
   undefined1 auVar15[11];
   undefined1 auVar16[13];
   undefined1 auVar17[15];
   undefined1 auVar18[11];
   undefined1 auVar19[13];
   undefined1 auVar20[15];
   undefined1 auVar21[15];
   undefined1 auVar22[15];
   undefined1 auVar23[15];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   uint uVar26;
   undefined1(*pauVar27)[16];
   byte *pbVar28;
   undefined1(*pauVar29)[16];
   byte *pbVar30;
   int iVar31;
   int iVar32;
   long lVar33;
   bool bVar34;
   ushort uVar35;
   ushort uVar38;
   ushort uVar39;
   ushort uVar40;
   ushort uVar41;
   ushort uVar42;
   ushort uVar43;
   undefined1 auVar36[16];
   undefined1 auVar37[16];
   ushort uVar44;
   ushort uVar45;
   ushort uVar49;
   ushort uVar50;
   ushort uVar51;
   ushort uVar52;
   ushort uVar53;
   ushort uVar54;
   undefined1 auVar46[16];
   undefined1 auVar47[16];
   ushort uVar55;
   undefined1 auVar48[16];
   undefined1 auVar56[16];
   undefined1 auVar57[16];
   undefined1 auVar58[16];
   undefined1 auVar59[16];
   auVar25 = __LC5;
   auVar24 = __LC4;
   if (param_4 < 1) {
      return;
   }

   param_4 = param_4 + -1;
   uVar26 = param_3 - 4U >> 2;
   do {
      if (param_2 == 0) {
         if (3 < param_3) {
            pauVar29 = param_1;
            do {
               auVar37 = *pauVar29;
               pauVar27 = pauVar29 + 1;
               auVar57._0_2_ = CONCAT11(0, auVar37[8]);
               for (int i = 0; i < 7; i++) {
                  auVar57[( 2*i + 2 )] = auVar37[( i + 9 )];
                  auVar57[( 2*i + 3 )] = 0;
               }

               auVar2[0xd] = 0;
               auVar2._0_13_ = auVar37._0_13_;
               auVar2[0xe] = auVar37[7];
               auVar4[0xc] = auVar37[6];
               auVar4._0_12_ = auVar37._0_12_;
               auVar4._13_2_ = auVar2._13_2_;
               auVar6[0xb] = 0;
               auVar6._0_11_ = auVar37._0_11_;
               auVar6._12_3_ = auVar4._12_3_;
               auVar8[10] = auVar37[5];
               auVar8._0_10_ = auVar37._0_10_;
               auVar8._11_4_ = auVar6._11_4_;
               auVar10[9] = 0;
               auVar10._0_9_ = auVar37._0_9_;
               auVar10._10_5_ = auVar8._10_5_;
               auVar12[8] = auVar37[4];
               auVar12._0_8_ = auVar37._0_8_;
               auVar12._9_6_ = auVar10._9_6_;
               auVar17._7_8_ = 0;
               auVar17._0_7_ = auVar12._8_7_;
               Var14 = CONCAT81(SUB158(auVar17 << 0x40, 7), auVar37[3]);
               auVar22._9_6_ = 0;
               auVar22._0_9_ = Var14;
               auVar18._1_10_ = SUB1510(auVar22 << 0x30, 5);
               auVar18[0] = auVar37[2];
               auVar23._11_4_ = 0;
               auVar23._0_11_ = auVar18;
               auVar19._1_12_ = SUB1512(auVar23 << 0x20, 3);
               auVar19[0] = auVar37[1];
               auVar59._0_2_ = CONCAT11(0, auVar37[0]);
               auVar59._2_13_ = auVar19;
               auVar59[0xf] = 0;
               auVar46 = pshuflw(auVar24 | auVar57, auVar24 | auVar57, 0xbf);
               auVar36 = pshuflw(auVar24 | auVar59, auVar24 | auVar59, 0xbf);
               auVar46 = pshufhw(auVar46, auVar46, 0xbf);
               auVar36 = pshufhw(auVar36, auVar36, 0xbf);
               auVar48._0_2_ = auVar46._0_2_ * auVar57._0_2_;
               auVar48._2_2_ = auVar46._2_2_ * (ushort)auVar37[9];
               auVar48._4_2_ = auVar46._4_2_ * (ushort)auVar37[10];
               auVar48._6_2_ = auVar46._6_2_ * (ushort)auVar37[0xb];
               auVar48._8_2_ = auVar46._8_2_ * (ushort)auVar37[0xc];
               auVar48._10_2_ = auVar46._10_2_ * (ushort)auVar37[0xd];
               auVar48._12_2_ = auVar46._12_2_ * (ushort)auVar37[0xe];
               auVar48._14_2_ = auVar46._14_2_ * (ushort)auVar37[0xf];
               auVar37._0_2_ = auVar36._0_2_ * auVar59._0_2_;
               auVar37._2_2_ = auVar36._2_2_ * auVar19._0_2_;
               auVar37._4_2_ = auVar36._4_2_ * auVar18._0_2_;
               auVar37._6_2_ = auVar36._6_2_ * (short)Var14;
               auVar37._8_2_ = auVar36._8_2_ * auVar12._8_2_;
               auVar37._10_2_ = auVar36._10_2_ * auVar8._10_2_;
               auVar37._12_2_ = auVar36._12_2_ * auVar4._12_2_;
               auVar37._14_2_ = auVar36._14_2_ * ( auVar2._13_2_ >> 8 );
               auVar36 = pmulhuw(auVar48, auVar25);
               auVar37 = pmulhuw(auVar37, auVar25);
               uVar45 = auVar36._0_2_ >> 7;
               uVar49 = auVar36._2_2_ >> 7;
               uVar50 = auVar36._4_2_ >> 7;
               uVar51 = auVar36._6_2_ >> 7;
               uVar52 = auVar36._8_2_ >> 7;
               uVar53 = auVar36._10_2_ >> 7;
               uVar54 = auVar36._12_2_ >> 7;
               uVar55 = auVar36._14_2_ >> 7;
               uVar35 = auVar37._0_2_ >> 7;
               uVar38 = auVar37._2_2_ >> 7;
               uVar39 = auVar37._4_2_ >> 7;
               uVar40 = auVar37._6_2_ >> 7;
               uVar41 = auVar37._8_2_ >> 7;
               uVar42 = auVar37._10_2_ >> 7;
               uVar43 = auVar37._12_2_ >> 7;
               uVar44 = auVar37._14_2_ >> 7;
               ( *pauVar29 )[0] = ( uVar35 != 0 ) * ( uVar35 < 0x100 ) * (char)uVar35 - ( 0xff < uVar35 );
               ( *pauVar29 )[1] = ( uVar38 != 0 ) * ( uVar38 < 0x100 ) * (char)uVar38 - ( 0xff < uVar38 );
               ( *pauVar29 )[2] = ( uVar39 != 0 ) * ( uVar39 < 0x100 ) * (char)uVar39 - ( 0xff < uVar39 );
               ( *pauVar29 )[3] = ( uVar40 != 0 ) * ( uVar40 < 0x100 ) * (char)uVar40 - ( 0xff < uVar40 );
               ( *pauVar29 )[4] = ( uVar41 != 0 ) * ( uVar41 < 0x100 ) * (char)uVar41 - ( 0xff < uVar41 );
               ( *pauVar29 )[5] = ( uVar42 != 0 ) * ( uVar42 < 0x100 ) * (char)uVar42 - ( 0xff < uVar42 );
               ( *pauVar29 )[6] = ( uVar43 != 0 ) * ( uVar43 < 0x100 ) * (char)uVar43 - ( 0xff < uVar43 );
               ( *pauVar29 )[7] = ( uVar44 != 0 ) * ( uVar44 < 0x100 ) * (char)uVar44 - ( 0xff < uVar44 );
               ( *pauVar29 )[8] = ( uVar45 != 0 ) * ( uVar45 < 0x100 ) * (char)uVar45 - ( 0xff < uVar45 );
               ( *pauVar29 )[9] = ( uVar49 != 0 ) * ( uVar49 < 0x100 ) * (char)uVar49 - ( 0xff < uVar49 );
               ( *pauVar29 )[10] = ( uVar50 != 0 ) * ( uVar50 < 0x100 ) * (char)uVar50 - ( 0xff < uVar50 );
               ( *pauVar29 )[0xb] = ( uVar51 != 0 ) * ( uVar51 < 0x100 ) * (char)uVar51 - ( 0xff < uVar51 );
               ( *pauVar29 )[0xc] = ( uVar52 != 0 ) * ( uVar52 < 0x100 ) * (char)uVar52 - ( 0xff < uVar52 );
               ( *pauVar29 )[0xd] = ( uVar53 != 0 ) * ( uVar53 < 0x100 ) * (char)uVar53 - ( 0xff < uVar53 );
               ( *pauVar29 )[0xe] = ( uVar54 != 0 ) * ( uVar54 < 0x100 ) * (char)uVar54 - ( 0xff < uVar54 );
               ( *pauVar29 )[0xf] = ( uVar55 != 0 ) * ( uVar55 < 0x100 ) * (char)uVar55 - ( 0xff < uVar55 );
               pauVar29 = pauVar27;
            }
 while ( param_1 + (ulong)uVar26 + 1 != pauVar27 );
            goto LAB_0010077f;
         }

         LAB_00100898:lVar33 = 0;
      }
 else {
         pauVar29 = param_1;
         if (param_3 < 4) goto LAB_00100898;
         do {
            auVar37 = *pauVar29;
            pauVar27 = pauVar29 + 1;
            auVar56._0_2_ = CONCAT11(0, auVar37[8]);
            for (int i = 0; i < 7; i++) {
               auVar56[( 2*i + 2 )] = auVar37[( i + 9 )];
               auVar56[( 2*i + 3 )] = 0;
            }

            auVar1[0xd] = 0;
            auVar1._0_13_ = auVar37._0_13_;
            auVar1[0xe] = auVar37[7];
            auVar3[0xc] = auVar37[6];
            auVar3._0_12_ = auVar37._0_12_;
            auVar3._13_2_ = auVar1._13_2_;
            auVar5[0xb] = 0;
            auVar5._0_11_ = auVar37._0_11_;
            auVar5._12_3_ = auVar3._12_3_;
            auVar7[10] = auVar37[5];
            auVar7._0_10_ = auVar37._0_10_;
            auVar7._11_4_ = auVar5._11_4_;
            auVar9[9] = 0;
            auVar9._0_9_ = auVar37._0_9_;
            auVar9._10_5_ = auVar7._10_5_;
            auVar11[8] = auVar37[4];
            auVar11._0_8_ = auVar37._0_8_;
            auVar11._9_6_ = auVar9._9_6_;
            auVar13._7_8_ = 0;
            auVar13._0_7_ = auVar11._8_7_;
            Var14 = CONCAT81(SUB158(auVar13 << 0x40, 7), auVar37[3]);
            auVar20._9_6_ = 0;
            auVar20._0_9_ = Var14;
            auVar15._1_10_ = SUB1510(auVar20 << 0x30, 5);
            auVar15[0] = auVar37[2];
            auVar21._11_4_ = 0;
            auVar21._0_11_ = auVar15;
            auVar16._1_12_ = SUB1512(auVar21 << 0x20, 3);
            auVar16[0] = auVar37[1];
            auVar58._0_2_ = CONCAT11(0, auVar37[0]);
            auVar58._2_13_ = auVar16;
            auVar58[0xf] = 0;
            auVar46 = pshuflw(auVar24 | auVar56, auVar24 | auVar56, 1);
            auVar36 = pshuflw(auVar24 | auVar58, auVar24 | auVar58, 1);
            auVar46 = pshufhw(auVar46, auVar46, 1);
            auVar36 = pshufhw(auVar36, auVar36, 1);
            auVar47._0_2_ = auVar46._0_2_ * auVar56._0_2_;
            auVar47._2_2_ = auVar46._2_2_ * (ushort)auVar37[9];
            auVar47._4_2_ = auVar46._4_2_ * (ushort)auVar37[10];
            auVar47._6_2_ = auVar46._6_2_ * (ushort)auVar37[0xb];
            auVar47._8_2_ = auVar46._8_2_ * (ushort)auVar37[0xc];
            auVar47._10_2_ = auVar46._10_2_ * (ushort)auVar37[0xd];
            auVar47._12_2_ = auVar46._12_2_ * (ushort)auVar37[0xe];
            auVar47._14_2_ = auVar46._14_2_ * (ushort)auVar37[0xf];
            auVar46._0_2_ = auVar36._0_2_ * auVar58._0_2_;
            auVar46._2_2_ = auVar36._2_2_ * auVar16._0_2_;
            auVar46._4_2_ = auVar36._4_2_ * auVar15._0_2_;
            auVar46._6_2_ = auVar36._6_2_ * (short)Var14;
            auVar46._8_2_ = auVar36._8_2_ * auVar11._8_2_;
            auVar46._10_2_ = auVar36._10_2_ * auVar7._10_2_;
            auVar46._12_2_ = auVar36._12_2_ * auVar3._12_2_;
            auVar46._14_2_ = auVar36._14_2_ * ( auVar1._13_2_ >> 8 );
            auVar36 = pmulhuw(auVar47, auVar25);
            auVar37 = pmulhuw(auVar46, auVar25);
            uVar45 = auVar36._0_2_ >> 7;
            uVar49 = auVar36._2_2_ >> 7;
            uVar50 = auVar36._4_2_ >> 7;
            uVar51 = auVar36._6_2_ >> 7;
            uVar52 = auVar36._8_2_ >> 7;
            uVar53 = auVar36._10_2_ >> 7;
            uVar54 = auVar36._12_2_ >> 7;
            uVar55 = auVar36._14_2_ >> 7;
            uVar35 = auVar37._0_2_ >> 7;
            uVar38 = auVar37._2_2_ >> 7;
            uVar39 = auVar37._4_2_ >> 7;
            uVar40 = auVar37._6_2_ >> 7;
            uVar41 = auVar37._8_2_ >> 7;
            uVar42 = auVar37._10_2_ >> 7;
            uVar43 = auVar37._12_2_ >> 7;
            uVar44 = auVar37._14_2_ >> 7;
            ( *pauVar29 )[0] = ( uVar35 != 0 ) * ( uVar35 < 0x100 ) * (char)uVar35 - ( 0xff < uVar35 );
            ( *pauVar29 )[1] = ( uVar38 != 0 ) * ( uVar38 < 0x100 ) * (char)uVar38 - ( 0xff < uVar38 );
            ( *pauVar29 )[2] = ( uVar39 != 0 ) * ( uVar39 < 0x100 ) * (char)uVar39 - ( 0xff < uVar39 );
            ( *pauVar29 )[3] = ( uVar40 != 0 ) * ( uVar40 < 0x100 ) * (char)uVar40 - ( 0xff < uVar40 );
            ( *pauVar29 )[4] = ( uVar41 != 0 ) * ( uVar41 < 0x100 ) * (char)uVar41 - ( 0xff < uVar41 );
            ( *pauVar29 )[5] = ( uVar42 != 0 ) * ( uVar42 < 0x100 ) * (char)uVar42 - ( 0xff < uVar42 );
            ( *pauVar29 )[6] = ( uVar43 != 0 ) * ( uVar43 < 0x100 ) * (char)uVar43 - ( 0xff < uVar43 );
            ( *pauVar29 )[7] = ( uVar44 != 0 ) * ( uVar44 < 0x100 ) * (char)uVar44 - ( 0xff < uVar44 );
            ( *pauVar29 )[8] = ( uVar45 != 0 ) * ( uVar45 < 0x100 ) * (char)uVar45 - ( 0xff < uVar45 );
            ( *pauVar29 )[9] = ( uVar49 != 0 ) * ( uVar49 < 0x100 ) * (char)uVar49 - ( 0xff < uVar49 );
            ( *pauVar29 )[10] = ( uVar50 != 0 ) * ( uVar50 < 0x100 ) * (char)uVar50 - ( 0xff < uVar50 );
            ( *pauVar29 )[0xb] = ( uVar51 != 0 ) * ( uVar51 < 0x100 ) * (char)uVar51 - ( 0xff < uVar51 );
            ( *pauVar29 )[0xc] = ( uVar52 != 0 ) * ( uVar52 < 0x100 ) * (char)uVar52 - ( 0xff < uVar52 );
            ( *pauVar29 )[0xd] = ( uVar53 != 0 ) * ( uVar53 < 0x100 ) * (char)uVar53 - ( 0xff < uVar53 );
            ( *pauVar29 )[0xe] = ( uVar54 != 0 ) * ( uVar54 < 0x100 ) * (char)uVar54 - ( 0xff < uVar54 );
            ( *pauVar29 )[0xf] = ( uVar55 != 0 ) * ( uVar55 < 0x100 ) * (char)uVar55 - ( 0xff < uVar55 );
            pauVar29 = pauVar27;
         }
 while ( param_1 + (ulong)uVar26 + 1 != pauVar27 );
         LAB_0010077f:lVar33 = (long)(int)( uVar26 * 4 + 4 );
      }

      iVar31 = (int)lVar33;
      if (iVar31 < param_3) {
         pauVar29 = (undefined1(*) [16])( *param_1 + 1 );
         if (param_2 == 0) {
            pauVar29 = param_1;
         }

         pbVar28 = *pauVar29 + iVar31 * 4;
         pbVar30 = *param_1 + ( ulong )(-(uint)(param_2 == 0) & 3) + (long)( iVar31 * 4 );
         do {
            if (*pbVar30 != 0xff) {
               iVar32 = ( uint ) * pbVar30 * 0x8081;
               *pbVar28 = ( byte )(( uint ) * pbVar28 * iVar32 >> 0x17);
               pbVar28[1] = ( byte )((uint)pbVar28[1] * iVar32 >> 0x17);
               pbVar28[2] = ( byte )(iVar32 * (uint)pbVar28[2] >> 0x17);
            }

            pbVar28 = pbVar28 + 4;
            pbVar30 = pbVar30 + 4;
         }
 while ( pbVar28 != *pauVar29 + ( lVar33 + ( ulong )(uint)(param_3 - iVar31) ) * 4 );
      }

      param_1 = (undefined1(*) [16])( *param_1 + param_5 );
      bVar34 = param_4 == 0;
      param_4 = param_4 + -1;
      if (bVar34) {
         return;
      }

   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void MultRow_SSE2(long param_1, long param_2, int param_3, int param_4) {
   uint uVar1;
   ulong uVar2;
   ulong uVar3;
   short sVar4;
   short sVar5;
   short sVar6;
   short sVar7;
   short sVar8;
   short sVar9;
   short sVar10;
   short sVar11;
   undefined1 auVar12[15];
   undefined1 auVar13[15];
   undefined1 auVar14[15];
   undefined1 auVar15[15];
   undefined1 auVar16[15];
   undefined1 auVar17[15];
   undefined1 auVar18[15];
   undefined1 auVar19[15];
   undefined1 auVar20[15];
   undefined1 auVar21[15];
   undefined1 auVar22[15];
   undefined1 auVar23[15];
   undefined1 auVar24[15];
   undefined1 auVar25[15];
   unkuint9 Var26;
   undefined1 auVar27[11];
   undefined1 auVar28[13];
   undefined1 auVar29[15];
   unkuint9 Var30;
   undefined1 auVar31[11];
   undefined1 auVar32[15];
   undefined1 auVar33[15];
   undefined1 auVar34[15];
   undefined1 auVar35[15];
   short sVar36;
   short sVar37;
   short sVar38;
   short sVar39;
   short sVar40;
   short sVar41;
   short sVar42;
   short sVar43;
   undefined1 auVar44[16];
   int iVar45;
   long lVar46;
   undefined1 auVar47[16];
   auVar44 = __LC7;
   sVar43 = _UNK_00100ace;
   sVar42 = _UNK_00100acc;
   sVar41 = _UNK_00100aca;
   sVar40 = _UNK_00100ac8;
   sVar39 = _UNK_00100ac6;
   sVar38 = _UNK_00100ac4;
   sVar37 = _UNK_00100ac2;
   sVar36 = __LC6;
   iVar45 = 0;
   if (( param_4 == 0 ) && ( iVar45 = 7 < param_3 )) {
      uVar1 = ( param_3 - 8U >> 3 ) + 1;
      lVar46 = 0;
      do {
         uVar2 = *(ulong*)( param_1 + lVar46 );
         uVar3 = *(ulong*)( param_2 + lVar46 );
         auVar13._8_6_ = 0;
         auVar13._0_8_ = uVar2;
         auVar13[0xe] = (char)( uVar2 >> 0x38 );
         auVar15._8_4_ = 0;
         auVar15._0_8_ = uVar2;
         auVar15[0xc] = (char)( uVar2 >> 0x30 );
         auVar15._13_2_ = auVar13._13_2_;
         auVar17._8_4_ = 0;
         auVar17._0_8_ = uVar2;
         auVar17._12_3_ = auVar15._12_3_;
         auVar19._8_2_ = 0;
         auVar19._0_8_ = uVar2;
         auVar19[10] = (char)( uVar2 >> 0x28 );
         auVar19._11_4_ = auVar17._11_4_;
         auVar21._8_2_ = 0;
         auVar21._0_8_ = uVar2;
         auVar21._10_5_ = auVar19._10_5_;
         auVar23[8] = (char)( uVar2 >> 0x20 );
         auVar23._0_8_ = uVar2;
         auVar23._9_6_ = auVar21._9_6_;
         auVar25._7_8_ = 0;
         auVar25._0_7_ = auVar23._8_7_;
         Var26 = CONCAT81(SUB158(auVar25 << 0x40, 7), (char)( uVar2 >> 0x18 ));
         auVar32._9_6_ = 0;
         auVar32._0_9_ = Var26;
         auVar27._1_10_ = SUB1510(auVar32 << 0x30, 5);
         auVar27[0] = (char)( uVar2 >> 0x10 );
         auVar33._11_4_ = 0;
         auVar33._0_11_ = auVar27;
         auVar28._1_12_ = SUB1512(auVar33 << 0x20, 3);
         auVar28[0] = (char)( uVar2 >> 8 );
         auVar12._8_6_ = 0;
         auVar12._0_8_ = uVar3;
         auVar12[0xe] = (char)( uVar3 >> 0x38 );
         auVar14._8_4_ = 0;
         auVar14._0_8_ = uVar3;
         auVar14[0xc] = (char)( uVar3 >> 0x30 );
         auVar14._13_2_ = auVar12._13_2_;
         auVar16._8_4_ = 0;
         auVar16._0_8_ = uVar3;
         auVar16._12_3_ = auVar14._12_3_;
         auVar18._8_2_ = 0;
         auVar18._0_8_ = uVar3;
         auVar18[10] = (char)( uVar3 >> 0x28 );
         auVar18._11_4_ = auVar16._11_4_;
         auVar20._8_2_ = 0;
         auVar20._0_8_ = uVar3;
         auVar20._10_5_ = auVar18._10_5_;
         auVar22[8] = (char)( uVar3 >> 0x20 );
         auVar22._0_8_ = uVar3;
         auVar22._9_6_ = auVar20._9_6_;
         auVar29._7_8_ = 0;
         auVar29._0_7_ = auVar22._8_7_;
         Var30 = CONCAT81(SUB158(auVar29 << 0x40, 7), (char)( uVar3 >> 0x18 ));
         auVar34._9_6_ = 0;
         auVar34._0_9_ = Var30;
         auVar31._1_10_ = SUB1510(auVar34 << 0x30, 5);
         auVar31[0] = (char)( uVar3 >> 0x10 );
         auVar35._11_4_ = 0;
         auVar35._0_11_ = auVar31;
         auVar24[2] = (char)( uVar3 >> 8 );
         auVar24._0_2_ = (ushort)uVar3;
         auVar24._3_12_ = SUB1512(auVar35 << 0x20, 3);
         auVar47._0_2_ = (ushort)(byte)uVar2 * ( (ushort)uVar3 & 0xff ) + sVar36;
         auVar47._2_2_ = auVar28._0_2_ * auVar24._2_2_ + sVar37;
         auVar47._4_2_ = auVar27._0_2_ * auVar31._0_2_ + sVar38;
         auVar47._6_2_ = (short)Var26 * (short)Var30 + sVar39;
         auVar47._8_2_ = auVar23._8_2_ * auVar22._8_2_ + sVar40;
         auVar47._10_2_ = auVar19._10_2_ * auVar18._10_2_ + sVar41;
         auVar47._12_2_ = auVar15._12_2_ * auVar14._12_2_ + sVar42;
         auVar47._14_2_ = ( auVar13._13_2_ >> 8 ) * ( auVar12._13_2_ >> 8 ) + sVar43;
         auVar47 = pmulhuw(auVar47, auVar44);
         sVar4 = auVar47._0_2_;
         sVar5 = auVar47._2_2_;
         sVar6 = auVar47._4_2_;
         sVar7 = auVar47._6_2_;
         sVar8 = auVar47._8_2_;
         sVar9 = auVar47._10_2_;
         sVar10 = auVar47._12_2_;
         sVar11 = auVar47._14_2_;
         *(ulong*)( param_1 + lVar46 ) = CONCAT17(( 0 < sVar11 ) * ( sVar11 < 0x100 ) * auVar47[0xe] - ( 0xff < sVar11 ), CONCAT16(( 0 < sVar10 ) * ( sVar10 < 0x100 ) * auVar47[0xc] - ( 0xff < sVar10 ), CONCAT15(( 0 < sVar9 ) * ( sVar9 < 0x100 ) * auVar47[10] - ( 0xff < sVar9 ), CONCAT14(( 0 < sVar8 ) * ( sVar8 < 0x100 ) * auVar47[8] - ( 0xff < sVar8 ), CONCAT13(( 0 < sVar7 ) * ( sVar7 < 0x100 ) * auVar47[6] - ( 0xff < sVar7 ), CONCAT12(( 0 < sVar6 ) * ( sVar6 < 0x100 ) * auVar47[4] - ( 0xff < sVar6 ), CONCAT11(( 0 < sVar5 ) * ( sVar5 < 0x100 ) * auVar47[2] - ( 0xff < sVar5 ), ( 0 < sVar4 ) * ( sVar4 < 0x100 ) * auVar47[0] - ( 0xff < sVar4 ))))))));
         lVar46 = lVar46 + 8;
      }
 while ( (ulong)uVar1 << 3 != lVar46 );
      iVar45 = uVar1 * 8;
      param_3 = param_3 + uVar1 * -8;
   }

   if (param_3 < 1) {
      return;
   }

   WebPMultRow_C(param_1 + iVar45, param_2 + iVar45, param_3);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void MultARGBRow_SSE2(ulong *param_1, int param_2, int param_3) {
   ulong uVar1;
   short sVar2;
   short sVar3;
   short sVar4;
   short sVar5;
   short sVar6;
   short sVar7;
   short sVar8;
   short sVar9;
   undefined1 auVar10[15];
   undefined1 auVar11[15];
   undefined1 auVar12[15];
   undefined1 auVar13[15];
   undefined1 auVar14[15];
   undefined1 auVar15[15];
   undefined1 auVar16[15];
   unkuint9 Var17;
   undefined1 auVar18[11];
   undefined1 auVar19[13];
   undefined1 auVar20[15];
   undefined1 auVar21[15];
   short sVar22;
   short sVar23;
   short sVar24;
   short sVar25;
   short sVar26;
   short sVar27;
   short sVar28;
   short sVar29;
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   int iVar32;
   ulong *puVar33;
   ulong *puVar34;
   uint uVar35;
   undefined1 auVar36[16];
   undefined1 auVar37[16];
   undefined1 auVar38[16];
   auVar31 = __LC8;
   auVar30 = __LC7;
   sVar29 = _UNK_00100ace;
   sVar28 = _UNK_00100acc;
   sVar27 = _UNK_00100aca;
   sVar26 = _UNK_00100ac8;
   sVar25 = _UNK_00100ac6;
   sVar24 = _UNK_00100ac4;
   sVar23 = _UNK_00100ac2;
   sVar22 = __LC6;
   iVar32 = 0;
   if (( param_3 == 0 ) && ( iVar32 = 1 < param_2 )) {
      uVar35 = param_2 - 2U >> 1;
      puVar33 = param_1;
      do {
         uVar1 = *puVar33;
         puVar34 = puVar33 + 1;
         auVar10._8_6_ = 0;
         auVar10._0_8_ = uVar1;
         auVar10[0xe] = (char)( uVar1 >> 0x38 );
         auVar11._8_4_ = 0;
         auVar11._0_8_ = uVar1;
         auVar11[0xc] = (char)( uVar1 >> 0x30 );
         auVar11._13_2_ = auVar10._13_2_;
         auVar12._8_4_ = 0;
         auVar12._0_8_ = uVar1;
         auVar12._12_3_ = auVar11._12_3_;
         auVar13._8_2_ = 0;
         auVar13._0_8_ = uVar1;
         auVar13[10] = (char)( uVar1 >> 0x28 );
         auVar13._11_4_ = auVar12._11_4_;
         auVar14._8_2_ = 0;
         auVar14._0_8_ = uVar1;
         auVar14._10_5_ = auVar13._10_5_;
         auVar15[8] = (char)( uVar1 >> 0x20 );
         auVar15._0_8_ = uVar1;
         auVar15._9_6_ = auVar14._9_6_;
         auVar16._7_8_ = 0;
         auVar16._0_7_ = auVar15._8_7_;
         Var17 = CONCAT81(SUB158(auVar16 << 0x40, 7), (char)( uVar1 >> 0x18 ));
         auVar20._9_6_ = 0;
         auVar20._0_9_ = Var17;
         auVar18._1_10_ = SUB1510(auVar20 << 0x30, 5);
         auVar18[0] = (char)( uVar1 >> 0x10 );
         auVar21._11_4_ = 0;
         auVar21._0_11_ = auVar18;
         auVar19._1_12_ = SUB1512(auVar21 << 0x20, 3);
         auVar19[0] = (char)( uVar1 >> 8 );
         auVar38._0_2_ = CONCAT11(0, (byte)uVar1);
         auVar38._2_13_ = auVar19;
         auVar38[0xf] = 0;
         auVar36 = pshuflw(auVar31 | auVar38, auVar31 | auVar38, 0xbf);
         auVar36 = pshufhw(auVar36, auVar36, 0xbf);
         auVar37._0_2_ = auVar36._0_2_ * auVar38._0_2_ + sVar22;
         auVar37._2_2_ = auVar36._2_2_ * auVar19._0_2_ + sVar23;
         auVar37._4_2_ = auVar36._4_2_ * auVar18._0_2_ + sVar24;
         auVar37._6_2_ = auVar36._6_2_ * (short)Var17 + sVar25;
         auVar37._8_2_ = auVar36._8_2_ * auVar15._8_2_ + sVar26;
         auVar37._10_2_ = auVar36._10_2_ * auVar13._10_2_ + sVar27;
         auVar37._12_2_ = auVar36._12_2_ * auVar11._12_2_ + sVar28;
         auVar37._14_2_ = auVar36._14_2_ * ( auVar10._13_2_ >> 8 ) + sVar29;
         auVar36 = pmulhuw(auVar37, auVar30);
         sVar2 = auVar36._0_2_;
         sVar3 = auVar36._2_2_;
         sVar4 = auVar36._4_2_;
         sVar5 = auVar36._6_2_;
         sVar6 = auVar36._8_2_;
         sVar7 = auVar36._10_2_;
         sVar8 = auVar36._12_2_;
         sVar9 = auVar36._14_2_;
         *puVar33 = CONCAT17(( 0 < sVar9 ) * ( sVar9 < 0x100 ) * auVar36[0xe] - ( 0xff < sVar9 ), CONCAT16(( 0 < sVar8 ) * ( sVar8 < 0x100 ) * auVar36[0xc] - ( 0xff < sVar8 ), CONCAT15(( 0 < sVar7 ) * ( sVar7 < 0x100 ) * auVar36[10] - ( 0xff < sVar7 ), CONCAT14(( 0 < sVar6 ) * ( sVar6 < 0x100 ) * auVar36[8] - ( 0xff < sVar6 ), CONCAT13(( 0 < sVar5 ) * ( sVar5 < 0x100 ) * auVar36[6] - ( 0xff < sVar5 ), CONCAT12(( 0 < sVar4 ) * ( sVar4 < 0x100 ) * auVar36[4] - ( 0xff < sVar4 ), CONCAT11(( 0 < sVar3 ) * ( sVar3 < 0x100 ) * auVar36[2] - ( 0xff < sVar3 ), ( 0 < sVar2 ) * ( sVar2 < 0x100 ) * auVar36[0] - ( 0xff < sVar2 ))))))));
         puVar33 = puVar34;
      }
 while ( param_1 + (ulong)uVar35 + 1 != puVar34 );
      iVar32 = uVar35 * 2 + 2;
      param_2 = param_2 - iVar32;
   }

   if (param_2 < 1) {
      return;
   }

   WebPMultARGBRow_C((long)param_1 + (long)iVar32 * 4);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void WebPInitAlphaProcessingSSE2(void) {
   _WebPMultARGBRow = MultARGBRow_SSE2;
   _WebPMultRow = MultRow_SSE2;
   _WebPApplyAlphaMultiply = ApplyAlphaMultiply_SSE2;
   _WebPDispatchAlpha = DispatchAlpha_SSE2;
   _WebPDispatchAlphaToGreen = DispatchAlphaToGreen_SSE2;
   _WebPExtractAlpha = ExtractAlpha_SSE2;
   _WebPExtractGreen = ExtractGreen_SSE2;
   _WebPHasAlpha8b = HasAlpha8b_SSE2;
   _WebPHasAlpha32b = HasAlpha32b_SSE2;
   _WebPAlphaReplace = 0x100000;
   return;
}


void AddVector_SSE2(int *param_1, int *param_2, int *param_3, int param_4) {
   int iVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   int iVar11;
   int iVar12;
   int iVar13;
   int iVar14;
   int iVar15;
   int iVar16;
   int iVar17;
   int iVar18;
   int iVar19;
   int iVar20;
   int iVar21;
   int iVar22;
   int iVar23;
   int iVar24;
   int iVar25;
   int iVar26;
   int iVar27;
   int iVar28;
   int iVar29;
   uint uVar30;
   int iVar31;
   long lVar32;
   int *piVar33;
   int *piVar34;
   int *piVar35;
   int *piVar36;
   if (param_4 < 0x10) {
      iVar31 = 0;
   }
 else {
      uVar30 = param_4 - 0x10U >> 4;
      piVar33 = param_3;
      piVar34 = param_1;
      piVar36 = param_2;
      do {
         iVar31 = piVar34[5];
         iVar1 = piVar34[6];
         iVar2 = piVar34[7];
         iVar3 = piVar34[8];
         iVar4 = piVar34[9];
         iVar5 = piVar34[10];
         iVar6 = piVar34[0xb];
         piVar35 = piVar34 + 0x10;
         iVar7 = piVar34[0xc];
         iVar8 = piVar34[0xd];
         iVar9 = piVar34[0xe];
         iVar10 = piVar34[0xf];
         iVar11 = piVar36[5];
         iVar12 = piVar36[6];
         iVar13 = piVar36[7];
         iVar14 = piVar36[8];
         iVar15 = piVar36[9];
         iVar16 = piVar36[10];
         iVar17 = piVar36[0xb];
         iVar18 = piVar36[0xc];
         iVar19 = piVar36[0xd];
         iVar20 = piVar36[0xe];
         iVar21 = piVar36[0xf];
         iVar22 = *piVar34;
         iVar23 = piVar34[1];
         iVar24 = piVar34[2];
         iVar25 = piVar34[3];
         iVar26 = *piVar36;
         iVar27 = piVar36[1];
         iVar28 = piVar36[2];
         iVar29 = piVar36[3];
         piVar33[4] = piVar36[4] + piVar34[4];
         piVar33[5] = iVar11 + iVar31;
         piVar33[6] = iVar12 + iVar1;
         piVar33[7] = iVar13 + iVar2;
         piVar33[8] = iVar14 + iVar3;
         piVar33[9] = iVar15 + iVar4;
         piVar33[10] = iVar16 + iVar5;
         piVar33[0xb] = iVar17 + iVar6;
         *piVar33 = iVar22 + iVar26;
         piVar33[1] = iVar23 + iVar27;
         piVar33[2] = iVar24 + iVar28;
         piVar33[3] = iVar25 + iVar29;
         piVar33[0xc] = iVar18 + iVar7;
         piVar33[0xd] = iVar19 + iVar8;
         piVar33[0xe] = iVar20 + iVar9;
         piVar33[0xf] = iVar21 + iVar10;
         piVar33 = piVar33 + 0x10;
         piVar34 = piVar35;
         piVar36 = piVar36 + 0x10;
      }
 while ( param_1 + (ulong)uVar30 * 0x10 + 0x10 != piVar35 );
      iVar31 = ( uVar30 + 1 ) * 0x10;
   }

   if (iVar31 < param_4) {
      lVar32 = (long)iVar31;
      do {
         param_3[lVar32] = param_2[lVar32] + param_1[lVar32];
         lVar32 = lVar32 + 1;
      }
 while ( (int)lVar32 < param_4 );
   }

   return;
}
void AddVectorEq_SSE2(int *param_1, int *param_2, int param_3) {
   int iVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   int iVar11;
   int iVar12;
   int iVar13;
   int iVar14;
   int iVar15;
   int *piVar16;
   int *piVar17;
   long lVar18;
   uint uVar19;
   int *piVar20;
   if (param_3 < 0x10) {
      iVar15 = 0;
   }
 else {
      uVar19 = param_3 - 0x10U >> 4;
      piVar16 = param_2;
      piVar20 = param_1;
      do {
         iVar15 = piVar20[1];
         iVar1 = piVar20[2];
         iVar2 = piVar20[3];
         piVar17 = piVar16 + 0x10;
         iVar3 = piVar20[4];
         iVar4 = piVar20[5];
         iVar5 = piVar20[6];
         iVar6 = piVar20[7];
         iVar7 = piVar20[8];
         iVar8 = piVar20[9];
         iVar9 = piVar20[10];
         iVar10 = piVar20[0xb];
         iVar11 = piVar20[0xc];
         iVar12 = piVar20[0xd];
         iVar13 = piVar20[0xe];
         iVar14 = piVar20[0xf];
         *piVar16 = *piVar20 + *piVar16;
         piVar16[1] = iVar15 + piVar16[1];
         piVar16[2] = iVar1 + piVar16[2];
         piVar16[3] = iVar2 + piVar16[3];
         piVar16[4] = piVar16[4] + iVar3;
         piVar16[5] = piVar16[5] + iVar4;
         piVar16[6] = piVar16[6] + iVar5;
         piVar16[7] = piVar16[7] + iVar6;
         piVar16[8] = piVar16[8] + iVar7;
         piVar16[9] = piVar16[9] + iVar8;
         piVar16[10] = piVar16[10] + iVar9;
         piVar16[0xb] = piVar16[0xb] + iVar10;
         piVar16[0xc] = piVar16[0xc] + iVar11;
         piVar16[0xd] = piVar16[0xd] + iVar12;
         piVar16[0xe] = piVar16[0xe] + iVar13;
         piVar16[0xf] = piVar16[0xf] + iVar14;
         piVar16 = piVar17;
         piVar20 = piVar20 + 0x10;
      }
 while ( param_2 + (ulong)uVar19 * 0x10 + 0x10 != piVar17 );
      iVar15 = ( uVar19 + 1 ) * 0x10;
   }

   if (iVar15 < param_3) {
      lVar18 = (long)iVar15;
      do {
         param_2[lVar18] = param_2[lVar18] + param_1[lVar18];
         lVar18 = lVar18 + 1;
      }
 while ( (int)lVar18 < param_3 );
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void PredictorSub0_SSE2(long param_1, undefined8 param_2, int param_3, long param_4) {
   uint uVar1;
   char *pcVar2;
   char *pcVar3;
   char cVar4;
   char cVar5;
   char cVar6;
   char cVar7;
   char cVar8;
   char cVar9;
   char cVar10;
   char cVar11;
   char cVar12;
   char cVar13;
   char cVar14;
   char cVar15;
   char cVar16;
   char cVar17;
   char cVar18;
   char cVar19;
   char cVar20;
   char cVar21;
   char cVar22;
   char cVar23;
   char cVar24;
   char cVar25;
   char cVar26;
   char cVar27;
   char cVar28;
   char cVar29;
   char cVar30;
   char cVar31;
   char cVar32;
   char cVar33;
   char cVar34;
   int iVar35;
   long lVar36;
   cVar34 = UNK_0010171f;
   cVar33 = UNK_0010171e;
   cVar32 = UNK_0010171d;
   cVar31 = UNK_0010171c;
   cVar30 = UNK_0010171b;
   cVar29 = UNK_0010171a;
   cVar28 = UNK_00101719;
   cVar27 = UNK_00101718;
   cVar26 = UNK_00101717;
   cVar25 = UNK_00101716;
   cVar24 = UNK_00101715;
   cVar23 = UNK_00101714;
   cVar22 = UNK_00101713;
   cVar21 = UNK_00101712;
   cVar20 = UNK_00101711;
   cVar19 = _LC0;
   if (param_3 < 4) {
      iVar35 = 0;
   }
 else {
      uVar1 = ( param_3 - 4U >> 2 ) + 1;
      lVar36 = 0;
      do {
         pcVar2 = (char*)( param_1 + lVar36 );
         cVar4 = pcVar2[1];
         cVar5 = pcVar2[2];
         cVar6 = pcVar2[3];
         cVar7 = pcVar2[4];
         cVar8 = pcVar2[5];
         cVar9 = pcVar2[6];
         cVar10 = pcVar2[7];
         cVar11 = pcVar2[8];
         cVar12 = pcVar2[9];
         cVar13 = pcVar2[10];
         cVar14 = pcVar2[0xb];
         cVar15 = pcVar2[0xc];
         cVar16 = pcVar2[0xd];
         cVar17 = pcVar2[0xe];
         cVar18 = pcVar2[0xf];
         pcVar3 = (char*)( param_4 + lVar36 );
         *pcVar3 = *pcVar2 + cVar19;
         pcVar3[1] = cVar4 + cVar20;
         pcVar3[2] = cVar5 + cVar21;
         pcVar3[3] = cVar6 + cVar22;
         pcVar3[4] = cVar7 + cVar23;
         pcVar3[5] = cVar8 + cVar24;
         pcVar3[6] = cVar9 + cVar25;
         pcVar3[7] = cVar10 + cVar26;
         pcVar3[8] = cVar11 + cVar27;
         pcVar3[9] = cVar12 + cVar28;
         pcVar3[10] = cVar13 + cVar29;
         pcVar3[0xb] = cVar14 + cVar30;
         pcVar3[0xc] = cVar15 + cVar31;
         pcVar3[0xd] = cVar16 + cVar32;
         pcVar3[0xe] = cVar17 + cVar33;
         pcVar3[0xf] = cVar18 + cVar34;
         lVar36 = lVar36 + 0x10;
      }
 while ( lVar36 != (ulong)uVar1 << 4 );
      iVar35 = uVar1 * 4;
   }

   if (param_3 != iVar35) {
      /* WARNING: Could not recover jumptable at 0x001001cb. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *_VP8LPredictorsSub_C )(param_1 + (long)iVar35 * 4, 0, param_3 - iVar35, param_4 + (long)iVar35 * 4);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void PredictorSub1_SSE2(long param_1, long param_2, int param_3, long param_4) {
   uint uVar1;
   char *pcVar2;
   char *pcVar3;
   char *pcVar4;
   char cVar5;
   char cVar6;
   char cVar7;
   char cVar8;
   char cVar9;
   char cVar10;
   char cVar11;
   char cVar12;
   char cVar13;
   char cVar14;
   char cVar15;
   char cVar16;
   char cVar17;
   char cVar18;
   char cVar19;
   char cVar20;
   char cVar21;
   char cVar22;
   char cVar23;
   char cVar24;
   char cVar25;
   char cVar26;
   char cVar27;
   char cVar28;
   char cVar29;
   char cVar30;
   char cVar31;
   char cVar32;
   char cVar33;
   char cVar34;
   int iVar35;
   long lVar36;
   if (param_3 < 4) {
      iVar35 = 0;
   }
 else {
      uVar1 = ( param_3 - 4U >> 2 ) + 1;
      lVar36 = 0;
      do {
         pcVar2 = (char*)( param_1 + lVar36 );
         cVar5 = pcVar2[1];
         cVar6 = pcVar2[2];
         cVar7 = pcVar2[3];
         cVar8 = pcVar2[4];
         cVar9 = pcVar2[5];
         cVar10 = pcVar2[6];
         cVar11 = pcVar2[7];
         cVar12 = pcVar2[8];
         cVar13 = pcVar2[9];
         cVar14 = pcVar2[10];
         cVar15 = pcVar2[0xb];
         cVar16 = pcVar2[0xc];
         cVar17 = pcVar2[0xd];
         cVar18 = pcVar2[0xe];
         cVar19 = pcVar2[0xf];
         pcVar4 = (char*)( param_1 + -4 + lVar36 );
         cVar20 = pcVar4[1];
         cVar21 = pcVar4[2];
         cVar22 = pcVar4[3];
         cVar23 = pcVar4[4];
         cVar24 = pcVar4[5];
         cVar25 = pcVar4[6];
         cVar26 = pcVar4[7];
         cVar27 = pcVar4[8];
         cVar28 = pcVar4[9];
         cVar29 = pcVar4[10];
         cVar30 = pcVar4[0xb];
         cVar31 = pcVar4[0xc];
         cVar32 = pcVar4[0xd];
         cVar33 = pcVar4[0xe];
         cVar34 = pcVar4[0xf];
         pcVar3 = (char*)( param_4 + lVar36 );
         *pcVar3 = *pcVar2 - *pcVar4;
         pcVar3[1] = cVar5 - cVar20;
         pcVar3[2] = cVar6 - cVar21;
         pcVar3[3] = cVar7 - cVar22;
         pcVar3[4] = cVar8 - cVar23;
         pcVar3[5] = cVar9 - cVar24;
         pcVar3[6] = cVar10 - cVar25;
         pcVar3[7] = cVar11 - cVar26;
         pcVar3[8] = cVar12 - cVar27;
         pcVar3[9] = cVar13 - cVar28;
         pcVar3[10] = cVar14 - cVar29;
         pcVar3[0xb] = cVar15 - cVar30;
         pcVar3[0xc] = cVar16 - cVar31;
         pcVar3[0xd] = cVar17 - cVar32;
         pcVar3[0xe] = cVar18 - cVar33;
         pcVar3[0xf] = cVar19 - cVar34;
         lVar36 = lVar36 + 0x10;
      }
 while ( (ulong)uVar1 << 4 != lVar36 );
      iVar35 = uVar1 * 4;
   }

   if (param_3 != iVar35) {
      lVar36 = (long)iVar35 * 4;
      if (param_2 != 0) {
         param_2 = param_2 + lVar36;
      }

      /* WARNING: Could not recover jumptable at 0x00100255. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *_VP8LBundleColorMap_C )(param_1 + lVar36, param_2, param_3 - iVar35, param_4 + lVar36);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void PredictorSub2_SSE2(long param_1, long param_2, int param_3, long param_4) {
   uint uVar1;
   char *pcVar2;
   char *pcVar3;
   char *pcVar4;
   char cVar5;
   char cVar6;
   char cVar7;
   char cVar8;
   char cVar9;
   char cVar10;
   char cVar11;
   char cVar12;
   char cVar13;
   char cVar14;
   char cVar15;
   char cVar16;
   char cVar17;
   char cVar18;
   char cVar19;
   char cVar20;
   char cVar21;
   char cVar22;
   char cVar23;
   char cVar24;
   char cVar25;
   char cVar26;
   char cVar27;
   char cVar28;
   char cVar29;
   char cVar30;
   char cVar31;
   char cVar32;
   char cVar33;
   char cVar34;
   long lVar35;
   if (param_3 < 4) {
      if (param_3 == 0) {
         return;
      }

      lVar35 = 0;
      if (param_2 == 0) {
         /* WARNING: Could not recover jumptable at 0x00100300. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *_VP8LCollectColorRedTransforms_C )(param_1, 0, param_3);
         return;
      }

   }
 else {
      uVar1 = ( param_3 - 4U >> 2 ) + 1;
      lVar35 = 0;
      do {
         pcVar2 = (char*)( param_1 + lVar35 );
         cVar5 = pcVar2[1];
         cVar6 = pcVar2[2];
         cVar7 = pcVar2[3];
         cVar8 = pcVar2[4];
         cVar9 = pcVar2[5];
         cVar10 = pcVar2[6];
         cVar11 = pcVar2[7];
         cVar12 = pcVar2[8];
         cVar13 = pcVar2[9];
         cVar14 = pcVar2[10];
         cVar15 = pcVar2[0xb];
         cVar16 = pcVar2[0xc];
         cVar17 = pcVar2[0xd];
         cVar18 = pcVar2[0xe];
         cVar19 = pcVar2[0xf];
         pcVar3 = (char*)( param_2 + lVar35 );
         cVar20 = pcVar3[1];
         cVar21 = pcVar3[2];
         cVar22 = pcVar3[3];
         cVar23 = pcVar3[4];
         cVar24 = pcVar3[5];
         cVar25 = pcVar3[6];
         cVar26 = pcVar3[7];
         cVar27 = pcVar3[8];
         cVar28 = pcVar3[9];
         cVar29 = pcVar3[10];
         cVar30 = pcVar3[0xb];
         cVar31 = pcVar3[0xc];
         cVar32 = pcVar3[0xd];
         cVar33 = pcVar3[0xe];
         cVar34 = pcVar3[0xf];
         pcVar4 = (char*)( param_4 + lVar35 );
         *pcVar4 = *pcVar2 - *pcVar3;
         pcVar4[1] = cVar5 - cVar20;
         pcVar4[2] = cVar6 - cVar21;
         pcVar4[3] = cVar7 - cVar22;
         pcVar4[4] = cVar8 - cVar23;
         pcVar4[5] = cVar9 - cVar24;
         pcVar4[6] = cVar10 - cVar25;
         pcVar4[7] = cVar11 - cVar26;
         pcVar4[8] = cVar12 - cVar27;
         pcVar4[9] = cVar13 - cVar28;
         pcVar4[10] = cVar14 - cVar29;
         pcVar4[0xb] = cVar15 - cVar30;
         pcVar4[0xc] = cVar16 - cVar31;
         pcVar4[0xd] = cVar17 - cVar32;
         pcVar4[0xe] = cVar18 - cVar33;
         pcVar4[0xf] = cVar19 - cVar34;
         lVar35 = lVar35 + 0x10;
      }
 while ( lVar35 != (ulong)uVar1 << 4 );
      if (param_3 == uVar1 * 4) {
         return;
      }

      param_3 = param_3 + uVar1 * -4;
      lVar35 = (long)(int)( uVar1 * 4 ) * 4;
      param_4 = param_4 + lVar35;
   }

   /* WARNING: Could not recover jumptable at 0x001002dd. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *_VP8LCollectColorRedTransforms_C )(lVar35 + param_1, param_2 + lVar35, param_3, param_4);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void PredictorSub3_SSE2(long param_1, long param_2, int param_3, long param_4) {
   uint uVar1;
   char *pcVar2;
   char *pcVar3;
   char *pcVar4;
   char cVar5;
   char cVar6;
   char cVar7;
   char cVar8;
   char cVar9;
   char cVar10;
   char cVar11;
   char cVar12;
   char cVar13;
   char cVar14;
   char cVar15;
   char cVar16;
   char cVar17;
   char cVar18;
   char cVar19;
   char cVar20;
   char cVar21;
   char cVar22;
   char cVar23;
   char cVar24;
   char cVar25;
   char cVar26;
   char cVar27;
   char cVar28;
   char cVar29;
   char cVar30;
   char cVar31;
   char cVar32;
   char cVar33;
   char cVar34;
   long lVar35;
   if (param_3 < 4) {
      if (param_3 == 0) {
         return;
      }

      lVar35 = 0;
      if (param_2 == 0) {
         /* WARNING: Could not recover jumptable at 0x001003a8. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *___stack_chk_fail )(param_1, 0, param_3);
         return;
      }

   }
 else {
      uVar1 = ( param_3 - 4U >> 2 ) + 1;
      lVar35 = 0;
      do {
         pcVar2 = (char*)( param_1 + lVar35 );
         cVar5 = pcVar2[1];
         cVar6 = pcVar2[2];
         cVar7 = pcVar2[3];
         cVar8 = pcVar2[4];
         cVar9 = pcVar2[5];
         cVar10 = pcVar2[6];
         cVar11 = pcVar2[7];
         cVar12 = pcVar2[8];
         cVar13 = pcVar2[9];
         cVar14 = pcVar2[10];
         cVar15 = pcVar2[0xb];
         cVar16 = pcVar2[0xc];
         cVar17 = pcVar2[0xd];
         cVar18 = pcVar2[0xe];
         cVar19 = pcVar2[0xf];
         pcVar4 = (char*)( param_2 + 4 + lVar35 );
         cVar20 = pcVar4[1];
         cVar21 = pcVar4[2];
         cVar22 = pcVar4[3];
         cVar23 = pcVar4[4];
         cVar24 = pcVar4[5];
         cVar25 = pcVar4[6];
         cVar26 = pcVar4[7];
         cVar27 = pcVar4[8];
         cVar28 = pcVar4[9];
         cVar29 = pcVar4[10];
         cVar30 = pcVar4[0xb];
         cVar31 = pcVar4[0xc];
         cVar32 = pcVar4[0xd];
         cVar33 = pcVar4[0xe];
         cVar34 = pcVar4[0xf];
         pcVar3 = (char*)( param_4 + lVar35 );
         *pcVar3 = *pcVar2 - *pcVar4;
         pcVar3[1] = cVar5 - cVar20;
         pcVar3[2] = cVar6 - cVar21;
         pcVar3[3] = cVar7 - cVar22;
         pcVar3[4] = cVar8 - cVar23;
         pcVar3[5] = cVar9 - cVar24;
         pcVar3[6] = cVar10 - cVar25;
         pcVar3[7] = cVar11 - cVar26;
         pcVar3[8] = cVar12 - cVar27;
         pcVar3[9] = cVar13 - cVar28;
         pcVar3[10] = cVar14 - cVar29;
         pcVar3[0xb] = cVar15 - cVar30;
         pcVar3[0xc] = cVar16 - cVar31;
         pcVar3[0xd] = cVar17 - cVar32;
         pcVar3[0xe] = cVar18 - cVar33;
         pcVar3[0xf] = cVar19 - cVar34;
         lVar35 = lVar35 + 0x10;
      }
 while ( (ulong)uVar1 << 4 != lVar35 );
      if (param_3 == uVar1 * 4) {
         return;
      }

      param_3 = param_3 + uVar1 * -4;
      lVar35 = (long)(int)( uVar1 * 4 ) * 4;
      param_4 = param_4 + lVar35;
   }

   /* WARNING: Could not recover jumptable at 0x0010037e. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *___stack_chk_fail )(lVar35 + param_1, param_2 + lVar35, param_3, param_4);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void PredictorSub4_SSE2(long param_1, long param_2, int param_3, long param_4) {
   uint uVar1;
   char *pcVar2;
   char *pcVar3;
   char *pcVar4;
   char cVar5;
   char cVar6;
   char cVar7;
   char cVar8;
   char cVar9;
   char cVar10;
   char cVar11;
   char cVar12;
   char cVar13;
   char cVar14;
   char cVar15;
   char cVar16;
   char cVar17;
   char cVar18;
   char cVar19;
   char cVar20;
   char cVar21;
   char cVar22;
   char cVar23;
   char cVar24;
   char cVar25;
   char cVar26;
   char cVar27;
   char cVar28;
   char cVar29;
   char cVar30;
   char cVar31;
   char cVar32;
   char cVar33;
   char cVar34;
   long lVar35;
   if (param_3 < 4) {
      if (param_3 == 0) {
         return;
      }

      lVar35 = 0;
      if (param_2 == 0) {
         /* WARNING: Could not recover jumptable at 0x00100448. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *_VP8LCollectColorBlueTransforms_C )(param_1, 0, param_3);
         return;
      }

   }
 else {
      uVar1 = ( param_3 - 4U >> 2 ) + 1;
      lVar35 = 0;
      do {
         pcVar2 = (char*)( param_1 + lVar35 );
         cVar5 = pcVar2[1];
         cVar6 = pcVar2[2];
         cVar7 = pcVar2[3];
         cVar8 = pcVar2[4];
         cVar9 = pcVar2[5];
         cVar10 = pcVar2[6];
         cVar11 = pcVar2[7];
         cVar12 = pcVar2[8];
         cVar13 = pcVar2[9];
         cVar14 = pcVar2[10];
         cVar15 = pcVar2[0xb];
         cVar16 = pcVar2[0xc];
         cVar17 = pcVar2[0xd];
         cVar18 = pcVar2[0xe];
         cVar19 = pcVar2[0xf];
         pcVar4 = (char*)( param_2 + -4 + lVar35 );
         cVar20 = pcVar4[1];
         cVar21 = pcVar4[2];
         cVar22 = pcVar4[3];
         cVar23 = pcVar4[4];
         cVar24 = pcVar4[5];
         cVar25 = pcVar4[6];
         cVar26 = pcVar4[7];
         cVar27 = pcVar4[8];
         cVar28 = pcVar4[9];
         cVar29 = pcVar4[10];
         cVar30 = pcVar4[0xb];
         cVar31 = pcVar4[0xc];
         cVar32 = pcVar4[0xd];
         cVar33 = pcVar4[0xe];
         cVar34 = pcVar4[0xf];
         pcVar3 = (char*)( param_4 + lVar35 );
         *pcVar3 = *pcVar2 - *pcVar4;
         pcVar3[1] = cVar5 - cVar20;
         pcVar3[2] = cVar6 - cVar21;
         pcVar3[3] = cVar7 - cVar22;
         pcVar3[4] = cVar8 - cVar23;
         pcVar3[5] = cVar9 - cVar24;
         pcVar3[6] = cVar10 - cVar25;
         pcVar3[7] = cVar11 - cVar26;
         pcVar3[8] = cVar12 - cVar27;
         pcVar3[9] = cVar13 - cVar28;
         pcVar3[10] = cVar14 - cVar29;
         pcVar3[0xb] = cVar15 - cVar30;
         pcVar3[0xc] = cVar16 - cVar31;
         pcVar3[0xd] = cVar17 - cVar32;
         pcVar3[0xe] = cVar18 - cVar33;
         pcVar3[0xf] = cVar19 - cVar34;
         lVar35 = lVar35 + 0x10;
      }
 while ( (ulong)uVar1 << 4 != lVar35 );
      if (param_3 == uVar1 * 4) {
         return;
      }

      param_3 = param_3 + uVar1 * -4;
      lVar35 = (long)(int)( uVar1 * 4 ) * 4;
      param_4 = param_4 + lVar35;
   }

   /* WARNING: Could not recover jumptable at 0x0010041e. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *_VP8LCollectColorBlueTransforms_C )(lVar35 + param_1, param_2 + lVar35, param_3, param_4);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void PredictorSub13_SSE2(long param_1, long param_2, int param_3, long param_4) {
   uint uVar1;
   ulong uVar2;
   ulong uVar3;
   ulong uVar4;
   undefined8 uVar5;
   undefined1 auVar6[15];
   undefined1 auVar7[15];
   undefined1 auVar8[15];
   undefined1 auVar9[15];
   undefined1 auVar10[15];
   undefined1 auVar11[15];
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
   ushort uVar24;
   undefined1 auVar25[15];
   undefined1 auVar26[15];
   unkuint9 Var27;
   undefined1 auVar28[11];
   undefined1 auVar29[13];
   undefined1 auVar30[15];
   unkuint9 Var31;
   undefined1 auVar32[11];
   undefined1 auVar33[15];
   unkuint9 Var34;
   undefined1 auVar35[11];
   undefined1 auVar36[13];
   undefined1 auVar37[15];
   undefined1 auVar38[15];
   undefined1 auVar39[15];
   undefined1 auVar40[15];
   undefined1 auVar41[15];
   undefined1 auVar42[15];
   int iVar43;
   long lVar44;
   short sVar45;
   short sVar47;
   short sVar48;
   short sVar49;
   short sVar50;
   short sVar51;
   short sVar52;
   undefined1 auVar46[16];
   short sVar53;
   ushort uVar54;
   ushort uVar55;
   ushort uVar56;
   ushort uVar57;
   ushort uVar58;
   ushort uVar59;
   ushort uVar60;
   ushort uVar61;
   ushort uVar62;
   if (param_3 < 2) {
      iVar43 = 0;
   }
 else {
      uVar1 = ( param_3 - 2U >> 1 ) + 1;
      lVar44 = 0;
      do {
         uVar2 = *(ulong*)( param_1 + -4 + lVar44 );
         uVar3 = *(ulong*)( param_2 + lVar44 );
         uVar4 = *(ulong*)( param_2 + -4 + lVar44 );
         auVar8._8_6_ = 0;
         auVar8._0_8_ = uVar2;
         auVar8[0xe] = (char)( uVar2 >> 0x38 );
         auVar11._8_4_ = 0;
         auVar11._0_8_ = uVar2;
         auVar11[0xc] = (char)( uVar2 >> 0x30 );
         auVar11._13_2_ = auVar8._13_2_;
         auVar14._8_4_ = 0;
         auVar14._0_8_ = uVar2;
         auVar14._12_3_ = auVar11._12_3_;
         auVar17._8_2_ = 0;
         auVar17._0_8_ = uVar2;
         auVar17[10] = (char)( uVar2 >> 0x28 );
         auVar17._11_4_ = auVar14._11_4_;
         auVar20._8_2_ = 0;
         auVar20._0_8_ = uVar2;
         auVar20._10_5_ = auVar17._10_5_;
         auVar23[8] = (char)( uVar2 >> 0x20 );
         auVar23._0_8_ = uVar2;
         auVar23._9_6_ = auVar20._9_6_;
         auVar26._7_8_ = 0;
         auVar26._0_7_ = auVar23._8_7_;
         Var27 = CONCAT81(SUB158(auVar26 << 0x40, 7), (char)( uVar2 >> 0x18 ));
         auVar37._9_6_ = 0;
         auVar37._0_9_ = Var27;
         auVar28._1_10_ = SUB1510(auVar37 << 0x30, 5);
         auVar28[0] = (char)( uVar2 >> 0x10 );
         auVar38._11_4_ = 0;
         auVar38._0_11_ = auVar28;
         auVar29._1_12_ = SUB1512(auVar38 << 0x20, 3);
         auVar29[0] = (char)( uVar2 >> 8 );
         auVar6._8_6_ = 0;
         auVar6._0_8_ = uVar3;
         auVar6[0xe] = (char)( uVar3 >> 0x38 );
         auVar9._8_4_ = 0;
         auVar9._0_8_ = uVar3;
         auVar9[0xc] = (char)( uVar3 >> 0x30 );
         auVar9._13_2_ = auVar6._13_2_;
         auVar12._8_4_ = 0;
         auVar12._0_8_ = uVar3;
         auVar12._12_3_ = auVar9._12_3_;
         auVar15._8_2_ = 0;
         auVar15._0_8_ = uVar3;
         auVar15[10] = (char)( uVar3 >> 0x28 );
         auVar15._11_4_ = auVar12._11_4_;
         auVar18._8_2_ = 0;
         auVar18._0_8_ = uVar3;
         auVar18._10_5_ = auVar15._10_5_;
         auVar21[8] = (char)( uVar3 >> 0x20 );
         auVar21._0_8_ = uVar3;
         auVar21._9_6_ = auVar18._9_6_;
         auVar30._7_8_ = 0;
         auVar30._0_7_ = auVar21._8_7_;
         Var31 = CONCAT81(SUB158(auVar30 << 0x40, 7), (char)( uVar3 >> 0x18 ));
         auVar39._9_6_ = 0;
         auVar39._0_9_ = Var31;
         auVar32._1_10_ = SUB1510(auVar39 << 0x30, 5);
         auVar32[0] = (char)( uVar3 >> 0x10 );
         auVar40._11_4_ = 0;
         auVar40._0_11_ = auVar32;
         auVar25[2] = (char)( uVar3 >> 8 );
         auVar25._0_2_ = (ushort)uVar3;
         auVar25._3_12_ = SUB1512(auVar40 << 0x20, 3);
         auVar7._8_6_ = 0;
         auVar7._0_8_ = uVar4;
         auVar7[0xe] = (char)( uVar4 >> 0x38 );
         auVar10._8_4_ = 0;
         auVar10._0_8_ = uVar4;
         auVar10[0xc] = (char)( uVar4 >> 0x30 );
         auVar10._13_2_ = auVar7._13_2_;
         auVar13._8_4_ = 0;
         auVar13._0_8_ = uVar4;
         auVar13._12_3_ = auVar10._12_3_;
         auVar16._8_2_ = 0;
         auVar16._0_8_ = uVar4;
         auVar16[10] = (char)( uVar4 >> 0x28 );
         auVar16._11_4_ = auVar13._11_4_;
         auVar19._8_2_ = 0;
         auVar19._0_8_ = uVar4;
         auVar19._10_5_ = auVar16._10_5_;
         auVar22[8] = (char)( uVar4 >> 0x20 );
         auVar22._0_8_ = uVar4;
         auVar22._9_6_ = auVar19._9_6_;
         auVar33._7_8_ = 0;
         auVar33._0_7_ = auVar22._8_7_;
         Var34 = CONCAT81(SUB158(auVar33 << 0x40, 7), (char)( uVar4 >> 0x18 ));
         auVar41._9_6_ = 0;
         auVar41._0_9_ = Var34;
         auVar35._1_10_ = SUB1510(auVar41 << 0x30, 5);
         auVar35[0] = (char)( uVar4 >> 0x10 );
         auVar42._11_4_ = 0;
         auVar42._0_11_ = auVar35;
         auVar36._1_12_ = SUB1512(auVar42 << 0x20, 3);
         auVar36[0] = (char)( uVar4 >> 8 );
         uVar54 = ( ushort )(( (ushort)uVar3 & 0xff ) + (ushort)(byte)uVar2) >> 1;
         uVar55 = ( ushort )(auVar25._2_2_ + auVar29._0_2_) >> 1;
         uVar56 = ( ushort )(auVar32._0_2_ + auVar28._0_2_) >> 1;
         uVar57 = ( ushort )((short)Var31 + (short)Var27) >> 1;
         uVar58 = ( ushort )(auVar21._8_2_ + auVar23._8_2_) >> 1;
         uVar59 = ( ushort )(auVar15._10_2_ + auVar17._10_2_) >> 1;
         uVar60 = ( ushort )(auVar9._12_2_ + auVar11._12_2_) >> 1;
         uVar61 = ( ushort )(( auVar6._13_2_ >> 8 ) + ( auVar8._13_2_ >> 8 )) >> 1;
         uVar62 = (ushort)Var34;
         uVar24 = auVar7._13_2_ >> 8;
         auVar46._0_2_ = ( uVar54 - (byte)uVar4 ) + ( ushort )(uVar54 < (byte)uVar4);
         auVar46._2_2_ = ( uVar55 - auVar36._0_2_ ) + ( ushort )(uVar55 < auVar36._0_2_);
         auVar46._4_2_ = ( uVar56 - auVar35._0_2_ ) + ( ushort )(uVar56 < auVar35._0_2_);
         auVar46._6_2_ = ( uVar57 - uVar62 ) + ( ushort )(uVar57 < uVar62);
         auVar46._8_2_ = ( uVar58 - auVar22._8_2_ ) + ( ushort )((short)uVar58 < auVar22._8_2_);
         auVar46._10_2_ = ( uVar59 - auVar16._10_2_ ) + ( ushort )((short)uVar59 < auVar16._10_2_);
         auVar46._12_2_ = ( uVar60 - auVar10._12_2_ ) + ( ushort )((short)uVar60 < auVar10._12_2_);
         auVar46._14_2_ = ( uVar61 - uVar24 ) + ( ushort )(uVar61 < uVar24);
         auVar46 = psraw(auVar46, 1);
         sVar45 = auVar46._0_2_ + uVar54;
         sVar47 = auVar46._2_2_ + uVar55;
         sVar48 = auVar46._4_2_ + uVar56;
         sVar49 = auVar46._6_2_ + uVar57;
         sVar50 = auVar46._8_2_ + uVar58;
         sVar51 = auVar46._10_2_ + uVar59;
         sVar52 = auVar46._12_2_ + uVar60;
         sVar53 = auVar46._14_2_ + uVar61;
         uVar5 = *(undefined8*)( param_1 + lVar44 );
         *(ulong*)( param_4 + lVar44 ) = CONCAT17((char)( (ulong)uVar5 >> 0x38 ) - ( ( 0 < sVar53 ) * ( sVar53 < 0x100 ) * (char)sVar53 - ( 0xff < sVar53 ) ), CONCAT16((char)( (ulong)uVar5 >> 0x30 ) - ( ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * (char)sVar52 - ( 0xff < sVar52 ) ), CONCAT15((char)( (ulong)uVar5 >> 0x28 ) - ( ( 0 < sVar51 ) * ( sVar51 < 0x100 ) * (char)sVar51 - ( 0xff < sVar51 ) ), CONCAT14((char)( (ulong)uVar5 >> 0x20 ) - ( ( 0 < sVar50 ) * ( sVar50 < 0x100 ) * (char)sVar50 - ( 0xff < sVar50 ) ), CONCAT13((char)( (ulong)uVar5 >> 0x18 ) - ( ( 0 < sVar49 ) * ( sVar49 < 0x100 ) * (char)sVar49 - ( 0xff < sVar49 ) ), CONCAT12((char)( (ulong)uVar5 >> 0x10 ) - ( ( 0 < sVar48 ) * ( sVar48 < 0x100 ) * (char)sVar48 - ( 0xff < sVar48 ) ), CONCAT11((char)( (ulong)uVar5 >> 8 ) - ( ( 0 < sVar47 ) * ( sVar47 < 0x100 ) * (char)sVar47 - ( 0xff < sVar47 ) ), (char)uVar5 - ( ( 0 < sVar45 ) * ( sVar45 < 0x100 ) * (char)sVar45 - ( 0xff < sVar45 ) ))))))));
         lVar44 = lVar44 + 8;
      }
 while ( (ulong)uVar1 << 3 != lVar44 );
      iVar43 = uVar1 * 2;
   }

   if (param_3 != iVar43) {
      lVar44 = (long)iVar43 * 4;
      /* WARNING: Could not recover jumptable at 0x001004ec. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *_VP8LAddVector )(param_1 + lVar44, param_2 + lVar44, param_3 - iVar43, param_4 + lVar44);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void PredictorSub12_SSE2(long param_1, long param_2, int param_3, long param_4) {
   uint uVar1;
   char *pcVar2;
   char *pcVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[15];
   undefined1 auVar8[15];
   undefined1 auVar9[15];
   undefined1 auVar10[15];
   undefined1 auVar11[15];
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
   undefined1 auVar26[15];
   char cVar27;
   char cVar28;
   char cVar29;
   char cVar30;
   char cVar31;
   char cVar32;
   char cVar33;
   char cVar34;
   char cVar35;
   char cVar36;
   char cVar37;
   char cVar38;
   char cVar39;
   char cVar40;
   char cVar41;
   undefined1 auVar42[15];
   unkuint9 Var43;
   undefined1 auVar44[11];
   undefined1 auVar45[13];
   undefined1 auVar46[15];
   unkuint9 Var47;
   undefined1 auVar48[11];
   undefined1 auVar49[15];
   unkuint9 Var50;
   undefined1 auVar51[11];
   undefined1 auVar52[15];
   undefined1 auVar53[15];
   undefined1 auVar54[15];
   undefined1 auVar55[15];
   undefined1 auVar56[15];
   undefined1 auVar57[15];
   int iVar58;
   long lVar59;
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
   short sVar75;
   if (param_3 < 4) {
      iVar58 = 0;
   }
 else {
      uVar1 = ( param_3 - 4U >> 2 ) + 1;
      lVar59 = 0;
      do {
         auVar4 = *(undefined1(*) [16])( param_1 + -4 + lVar59 );
         auVar5 = *(undefined1(*) [16])( param_2 + -4 + lVar59 );
         auVar6 = *(undefined1(*) [16])( param_2 + lVar59 );
         auVar9[0xd] = 0;
         auVar9._0_13_ = auVar4._0_13_;
         auVar9[0xe] = auVar4[7];
         auVar12[0xc] = auVar4[6];
         auVar12._0_12_ = auVar4._0_12_;
         auVar12._13_2_ = auVar9._13_2_;
         auVar15[0xb] = 0;
         auVar15._0_11_ = auVar4._0_11_;
         auVar15._12_3_ = auVar12._12_3_;
         auVar18[10] = auVar4[5];
         auVar18._0_10_ = auVar4._0_10_;
         auVar18._11_4_ = auVar15._11_4_;
         auVar21[9] = 0;
         auVar21._0_9_ = auVar4._0_9_;
         auVar21._10_5_ = auVar18._10_5_;
         auVar24[8] = auVar4[4];
         auVar24._0_8_ = auVar4._0_8_;
         auVar24._9_6_ = auVar21._9_6_;
         auVar42._7_8_ = 0;
         auVar42._0_7_ = auVar24._8_7_;
         Var43 = CONCAT81(SUB158(auVar42 << 0x40, 7), auVar4[3]);
         auVar52._9_6_ = 0;
         auVar52._0_9_ = Var43;
         auVar44._1_10_ = SUB1510(auVar52 << 0x30, 5);
         auVar44[0] = auVar4[2];
         auVar53._11_4_ = 0;
         auVar53._0_11_ = auVar44;
         auVar45._1_12_ = SUB1512(auVar53 << 0x20, 3);
         auVar45[0] = auVar4[1];
         auVar7[0xd] = 0;
         auVar7._0_13_ = auVar5._0_13_;
         auVar7[0xe] = auVar5[7];
         auVar10[0xc] = auVar5[6];
         auVar10._0_12_ = auVar5._0_12_;
         auVar10._13_2_ = auVar7._13_2_;
         auVar13[0xb] = 0;
         auVar13._0_11_ = auVar5._0_11_;
         auVar13._12_3_ = auVar10._12_3_;
         auVar16[10] = auVar5[5];
         auVar16._0_10_ = auVar5._0_10_;
         auVar16._11_4_ = auVar13._11_4_;
         auVar19[9] = 0;
         auVar19._0_9_ = auVar5._0_9_;
         auVar19._10_5_ = auVar16._10_5_;
         auVar22[8] = auVar5[4];
         auVar22._0_8_ = auVar5._0_8_;
         auVar22._9_6_ = auVar19._9_6_;
         auVar46._7_8_ = 0;
         auVar46._0_7_ = auVar22._8_7_;
         Var47 = CONCAT81(SUB158(auVar46 << 0x40, 7), auVar5[3]);
         auVar54._9_6_ = 0;
         auVar54._0_9_ = Var47;
         auVar48._1_10_ = SUB1510(auVar54 << 0x30, 5);
         auVar48[0] = auVar5[2];
         auVar55._11_4_ = 0;
         auVar55._0_11_ = auVar48;
         auVar25[2] = auVar5[1];
         auVar25._0_2_ = auVar5._0_2_;
         auVar25._3_12_ = SUB1512(auVar55 << 0x20, 3);
         auVar8[0xd] = 0;
         auVar8._0_13_ = auVar6._0_13_;
         auVar8[0xe] = auVar6[7];
         auVar11[0xc] = auVar6[6];
         auVar11._0_12_ = auVar6._0_12_;
         auVar11._13_2_ = auVar8._13_2_;
         auVar14[0xb] = 0;
         auVar14._0_11_ = auVar6._0_11_;
         auVar14._12_3_ = auVar11._12_3_;
         auVar17[10] = auVar6[5];
         auVar17._0_10_ = auVar6._0_10_;
         auVar17._11_4_ = auVar14._11_4_;
         auVar20[9] = 0;
         auVar20._0_9_ = auVar6._0_9_;
         auVar20._10_5_ = auVar17._10_5_;
         auVar23[8] = auVar6[4];
         auVar23._0_8_ = auVar6._0_8_;
         auVar23._9_6_ = auVar20._9_6_;
         auVar49._7_8_ = 0;
         auVar49._0_7_ = auVar23._8_7_;
         Var50 = CONCAT81(SUB158(auVar49 << 0x40, 7), auVar6[3]);
         auVar56._9_6_ = 0;
         auVar56._0_9_ = Var50;
         auVar51._1_10_ = SUB1510(auVar56 << 0x30, 5);
         auVar51[0] = auVar6[2];
         auVar57._11_4_ = 0;
         auVar57._0_11_ = auVar51;
         auVar26[2] = auVar6[1];
         auVar26._0_2_ = auVar6._0_2_;
         auVar26._3_12_ = SUB1512(auVar57 << 0x20, 3);
         sVar60 = ( (ushort)auVar6[8] + (ushort)auVar4[8] ) - (ushort)auVar5[8];
         sVar61 = ( (ushort)auVar6[9] + (ushort)auVar4[9] ) - (ushort)auVar5[9];
         sVar62 = ( (ushort)auVar6[10] + (ushort)auVar4[10] ) - (ushort)auVar5[10];
         sVar63 = ( (ushort)auVar6[0xb] + (ushort)auVar4[0xb] ) - (ushort)auVar5[0xb];
         sVar64 = ( (ushort)auVar6[0xc] + (ushort)auVar4[0xc] ) - (ushort)auVar5[0xc];
         sVar65 = ( (ushort)auVar6[0xd] + (ushort)auVar4[0xd] ) - (ushort)auVar5[0xd];
         sVar66 = ( (ushort)auVar6[0xe] + (ushort)auVar4[0xe] ) - (ushort)auVar5[0xe];
         sVar67 = ( (ushort)auVar6[0xf] + (ushort)auVar4[0xf] ) - (ushort)auVar5[0xf];
         sVar68 = ( (ushort)auVar4[0] + ( auVar6._0_2_ & 0xff ) ) - ( auVar5._0_2_ & 0xff );
         sVar69 = ( auVar45._0_2_ + auVar26._2_2_ ) - auVar25._2_2_;
         sVar70 = ( auVar44._0_2_ + auVar51._0_2_ ) - auVar48._0_2_;
         sVar71 = ( (short)Var43 + (short)Var50 ) - (short)Var47;
         sVar72 = ( auVar24._8_2_ + auVar23._8_2_ ) - auVar22._8_2_;
         sVar73 = ( auVar18._10_2_ + auVar17._10_2_ ) - auVar16._10_2_;
         sVar74 = ( auVar12._12_2_ + auVar11._12_2_ ) - auVar10._12_2_;
         sVar75 = ( ( auVar9._13_2_ >> 8 ) + ( auVar8._13_2_ >> 8 ) ) - ( auVar7._13_2_ >> 8 );
         pcVar2 = (char*)( param_1 + lVar59 );
         cVar27 = pcVar2[1];
         cVar28 = pcVar2[2];
         cVar29 = pcVar2[3];
         cVar30 = pcVar2[4];
         cVar31 = pcVar2[5];
         cVar32 = pcVar2[6];
         cVar33 = pcVar2[7];
         cVar34 = pcVar2[8];
         cVar35 = pcVar2[9];
         cVar36 = pcVar2[10];
         cVar37 = pcVar2[0xb];
         cVar38 = pcVar2[0xc];
         cVar39 = pcVar2[0xd];
         cVar40 = pcVar2[0xe];
         cVar41 = pcVar2[0xf];
         pcVar3 = (char*)( param_4 + lVar59 );
         *pcVar3 = *pcVar2 - ( ( 0 < sVar68 ) * ( sVar68 < 0x100 ) * (char)sVar68 - ( 0xff < sVar68 ) );
         pcVar3[1] = cVar27 - ( ( 0 < sVar69 ) * ( sVar69 < 0x100 ) * (char)sVar69 - ( 0xff < sVar69 ) );
         pcVar3[2] = cVar28 - ( ( 0 < sVar70 ) * ( sVar70 < 0x100 ) * (char)sVar70 - ( 0xff < sVar70 ) );
         pcVar3[3] = cVar29 - ( ( 0 < sVar71 ) * ( sVar71 < 0x100 ) * (char)sVar71 - ( 0xff < sVar71 ) );
         pcVar3[4] = cVar30 - ( ( 0 < sVar72 ) * ( sVar72 < 0x100 ) * (char)sVar72 - ( 0xff < sVar72 ) );
         pcVar3[5] = cVar31 - ( ( 0 < sVar73 ) * ( sVar73 < 0x100 ) * (char)sVar73 - ( 0xff < sVar73 ) );
         pcVar3[6] = cVar32 - ( ( 0 < sVar74 ) * ( sVar74 < 0x100 ) * (char)sVar74 - ( 0xff < sVar74 ) );
         pcVar3[7] = cVar33 - ( ( 0 < sVar75 ) * ( sVar75 < 0x100 ) * (char)sVar75 - ( 0xff < sVar75 ) );
         pcVar3[8] = cVar34 - ( ( 0 < sVar60 ) * ( sVar60 < 0x100 ) * (char)sVar60 - ( 0xff < sVar60 ) );
         pcVar3[9] = cVar35 - ( ( 0 < sVar61 ) * ( sVar61 < 0x100 ) * (char)sVar61 - ( 0xff < sVar61 ) );
         pcVar3[10] = cVar36 - ( ( 0 < sVar62 ) * ( sVar62 < 0x100 ) * (char)sVar62 - ( 0xff < sVar62 ) );
         pcVar3[0xb] = cVar37 - ( ( 0 < sVar63 ) * ( sVar63 < 0x100 ) * (char)sVar63 - ( 0xff < sVar63 ) );
         pcVar3[0xc] = cVar38 - ( ( 0 < sVar64 ) * ( sVar64 < 0x100 ) * (char)sVar64 - ( 0xff < sVar64 ) );
         pcVar3[0xd] = cVar39 - ( ( 0 < sVar65 ) * ( sVar65 < 0x100 ) * (char)sVar65 - ( 0xff < sVar65 ) );
         pcVar3[0xe] = cVar40 - ( ( 0 < sVar66 ) * ( sVar66 < 0x100 ) * (char)sVar66 - ( 0xff < sVar66 ) );
         pcVar3[0xf] = cVar41 - ( ( 0 < sVar67 ) * ( sVar67 < 0x100 ) * (char)sVar67 - ( 0xff < sVar67 ) );
         lVar59 = lVar59 + 0x10;
      }
 while ( (ulong)uVar1 << 4 != lVar59 );
      iVar58 = uVar1 * 4;
   }

   if (param_3 != iVar58) {
      lVar59 = (long)iVar58 * 4;
      /* WARNING: Could not recover jumptable at 0x001005b9. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *_VP8LCollectColorRedTransforms )(param_1 + lVar59, param_2 + lVar59, param_3 - iVar58, param_4 + lVar59);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void PredictorSub11_SSE2(long param_1, long param_2, int param_3, long param_4) {
   uint uVar1;
   char *pcVar2;
   char *pcVar3;
   undefined1 auVar4[16];
   char cVar5;
   char cVar6;
   char cVar7;
   char cVar8;
   char cVar9;
   char cVar10;
   char cVar11;
   char cVar12;
   char cVar13;
   char cVar14;
   char cVar15;
   char cVar16;
   char cVar17;
   char cVar18;
   char cVar19;
   int iVar20;
   long lVar21;
   undefined4 uVar22;
   undefined4 uVar24;
   undefined1 auVar23[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined4 uVar29;
   undefined4 uVar30;
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   undefined1 auVar34[16];
   undefined1 auVar35[16];
   undefined1 auVar36[16];
   undefined1 auVar37[16];
   undefined1 auVar39[16];
   undefined1 auVar38[16];
   undefined1 auVar40[16];
   if (param_3 < 4) {
      iVar20 = 0;
   }
 else {
      uVar1 = ( param_3 - 4U >> 2 ) + 1;
      lVar21 = 0;
      do {
         auVar23 = *(undefined1(*) [16])( param_2 + lVar21 );
         auVar27 = *(undefined1(*) [16])( param_2 + -4 + lVar21 );
         auVar4 = *(undefined1(*) [16])( param_1 + -4 + lVar21 );
         uVar24 = auVar23._4_4_;
         auVar38._0_8_ = auVar27._0_8_;
         auVar38._8_4_ = auVar27._4_4_;
         auVar38._12_4_ = uVar24;
         uVar22 = auVar23._0_4_;
         auVar37._8_8_ = auVar38._8_8_;
         auVar37._0_4_ = auVar27._0_4_;
         auVar37._4_4_ = uVar22;
         uVar29 = auVar23._8_4_;
         auVar35._4_4_ = uVar29;
         auVar35._0_4_ = auVar27._8_4_;
         auVar35._8_4_ = auVar27._12_4_;
         uVar30 = auVar23._12_4_;
         auVar35._12_4_ = uVar30;
         auVar32._0_8_ = auVar23._0_8_;
         auVar32._8_4_ = uVar24;
         auVar32._12_4_ = uVar24;
         auVar34._8_8_ = auVar32._8_8_;
         auVar34._4_4_ = uVar22;
         auVar34._0_4_ = uVar22;
         auVar25._4_4_ = uVar29;
         auVar25._0_4_ = uVar29;
         auVar25._8_4_ = uVar30;
         auVar25._12_4_ = uVar30;
         auVar25 = psadbw(auVar25, auVar35);
         auVar33 = psadbw(auVar34, auVar37);
         auVar34 = packssdw(auVar33, auVar25);
         uVar24 = auVar4._4_4_;
         auVar26._0_8_ = auVar4._0_8_;
         auVar26._8_4_ = uVar24;
         auVar26._12_4_ = uVar24;
         uVar22 = auVar4._0_4_;
         auVar33._8_8_ = auVar26._8_8_;
         auVar33._4_4_ = uVar22;
         auVar33._0_4_ = uVar22;
         auVar40._8_4_ = auVar27._4_4_;
         auVar40._0_8_ = auVar38._0_8_;
         auVar40._12_4_ = uVar24;
         auVar39._8_8_ = auVar40._8_8_;
         auVar39._4_4_ = uVar22;
         auVar39._0_4_ = auVar37._0_4_;
         uVar22 = auVar4._8_4_;
         auVar36._4_4_ = uVar22;
         auVar36._0_4_ = uVar22;
         auVar36._12_4_ = auVar4._12_4_;
         auVar36._8_4_ = auVar36._12_4_;
         auVar31._4_4_ = uVar22;
         auVar31._0_4_ = auVar27._8_4_;
         auVar31._8_4_ = auVar27._12_4_;
         auVar31._12_4_ = auVar36._12_4_;
         auVar27 = psadbw(auVar33, auVar39);
         auVar25 = psadbw(auVar31, auVar36);
         auVar27 = packssdw(auVar27, auVar25);
         auVar28._0_4_ = -(uint)(auVar34._0_4_ < auVar27._0_4_);
         auVar28._4_4_ = -(uint)(auVar34._4_4_ < auVar27._4_4_);
         auVar28._8_4_ = -(uint)(auVar34._8_4_ < auVar27._8_4_);
         auVar28._12_4_ = -(uint)(auVar34._12_4_ < auVar27._12_4_);
         pcVar2 = (char*)( param_1 + lVar21 );
         cVar5 = pcVar2[1];
         cVar6 = pcVar2[2];
         cVar7 = pcVar2[3];
         cVar8 = pcVar2[4];
         cVar9 = pcVar2[5];
         cVar10 = pcVar2[6];
         cVar11 = pcVar2[7];
         cVar12 = pcVar2[8];
         cVar13 = pcVar2[9];
         cVar14 = pcVar2[10];
         cVar15 = pcVar2[0xb];
         cVar16 = pcVar2[0xc];
         cVar17 = pcVar2[0xd];
         cVar18 = pcVar2[0xe];
         cVar19 = pcVar2[0xf];
         auVar23 = auVar4 & auVar28 | ~auVar28 & auVar23;
         pcVar3 = (char*)( param_4 + lVar21 );
         *pcVar3 = *pcVar2 - auVar23[0];
         pcVar3[1] = cVar5 - auVar23[1];
         pcVar3[2] = cVar6 - auVar23[2];
         pcVar3[3] = cVar7 - auVar23[3];
         pcVar3[4] = cVar8 - auVar23[4];
         pcVar3[5] = cVar9 - auVar23[5];
         pcVar3[6] = cVar10 - auVar23[6];
         pcVar3[7] = cVar11 - auVar23[7];
         pcVar3[8] = cVar12 - auVar23[8];
         pcVar3[9] = cVar13 - auVar23[9];
         pcVar3[10] = cVar14 - auVar23[10];
         pcVar3[0xb] = cVar15 - auVar23[0xb];
         pcVar3[0xc] = cVar16 - auVar23[0xc];
         pcVar3[0xd] = cVar17 - auVar23[0xd];
         pcVar3[0xe] = cVar18 - auVar23[0xe];
         pcVar3[0xf] = cVar19 - auVar23[0xf];
         lVar21 = lVar21 + 0x10;
      }
 while ( (ulong)uVar1 << 4 != lVar21 );
      iVar20 = uVar1 * 4;
   }

   if (param_3 != iVar20) {
      lVar21 = (long)iVar20 * 4;
      /* WARNING: Could not recover jumptable at 0x001006a1. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *_VP8LCollectColorBlueTransforms )(param_1 + lVar21, param_2 + lVar21, param_3 - iVar20, param_4 + lVar21);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void PredictorSub5_SSE2(long param_1, long param_2, int param_3, long param_4) {
   uint uVar1;
   char *pcVar2;
   char *pcVar3;
   byte *pbVar4;
   byte *pbVar5;
   undefined1 *puVar6;
   undefined1 *puVar7;
   char cVar8;
   char cVar9;
   char cVar10;
   char cVar11;
   char cVar12;
   char cVar13;
   char cVar14;
   char cVar15;
   char cVar16;
   char cVar17;
   char cVar18;
   char cVar19;
   char cVar20;
   char cVar21;
   char cVar22;
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
   int iVar54;
   long lVar55;
   char cVar56;
   byte bVar57;
   char cVar58;
   byte bVar59;
   char cVar60;
   byte bVar61;
   char cVar62;
   byte bVar63;
   char cVar64;
   byte bVar65;
   char cVar66;
   byte bVar67;
   char cVar68;
   byte bVar69;
   char cVar70;
   byte bVar71;
   char cVar72;
   byte bVar73;
   char cVar74;
   byte bVar75;
   char cVar76;
   byte bVar77;
   char cVar78;
   byte bVar79;
   char cVar80;
   byte bVar81;
   char cVar82;
   byte bVar83;
   char cVar84;
   byte bVar85;
   char cVar86;
   byte bVar87;
   bVar53 = UNK_0010172f;
   bVar52 = UNK_0010172e;
   bVar51 = UNK_0010172d;
   bVar50 = UNK_0010172c;
   bVar49 = UNK_0010172b;
   bVar48 = UNK_0010172a;
   bVar47 = UNK_00101729;
   bVar46 = UNK_00101728;
   bVar45 = UNK_00101727;
   bVar44 = UNK_00101726;
   bVar43 = UNK_00101725;
   bVar42 = UNK_00101724;
   bVar41 = UNK_00101723;
   bVar40 = UNK_00101722;
   bVar39 = UNK_00101721;
   bVar38 = _LC1;
   if (param_3 < 4) {
      iVar54 = 0;
   }
 else {
      uVar1 = ( param_3 - 4U >> 2 ) + 1;
      lVar55 = 0;
      do {
         pbVar4 = (byte*)( param_1 + -4 + lVar55 );
         pbVar5 = (byte*)( param_2 + 4 + lVar55 );
         puVar6 = (undefined1*)( param_1 + -4 + lVar55 );
         puVar7 = (undefined1*)( param_2 + 4 + lVar55 );
         pcVar2 = (char*)( param_1 + lVar55 );
         cVar8 = pcVar2[1];
         cVar9 = pcVar2[2];
         cVar10 = pcVar2[3];
         cVar11 = pcVar2[4];
         cVar12 = pcVar2[5];
         cVar13 = pcVar2[6];
         cVar14 = pcVar2[7];
         cVar15 = pcVar2[8];
         cVar16 = pcVar2[9];
         cVar17 = pcVar2[10];
         cVar18 = pcVar2[0xb];
         cVar19 = pcVar2[0xc];
         cVar20 = pcVar2[0xd];
         cVar21 = pcVar2[0xe];
         cVar22 = pcVar2[0xf];
         cVar56 = pavgb(*puVar6, *puVar7);
         cVar58 = pavgb(puVar6[1], puVar7[1]);
         cVar60 = pavgb(puVar6[2], puVar7[2]);
         cVar62 = pavgb(puVar6[3], puVar7[3]);
         cVar64 = pavgb(puVar6[4], puVar7[4]);
         cVar66 = pavgb(puVar6[5], puVar7[5]);
         cVar68 = pavgb(puVar6[6], puVar7[6]);
         cVar70 = pavgb(puVar6[7], puVar7[7]);
         cVar72 = pavgb(puVar6[8], puVar7[8]);
         cVar74 = pavgb(puVar6[9], puVar7[9]);
         cVar76 = pavgb(puVar6[10], puVar7[10]);
         cVar78 = pavgb(puVar6[0xb], puVar7[0xb]);
         cVar80 = pavgb(puVar6[0xc], puVar7[0xc]);
         cVar82 = pavgb(puVar6[0xd], puVar7[0xd]);
         cVar84 = pavgb(puVar6[0xe], puVar7[0xe]);
         cVar86 = pavgb(puVar6[0xf], puVar7[0xf]);
         bVar57 = cVar56 - ( ( *pbVar4 ^ *pbVar5 ) & bVar38 );
         bVar59 = cVar58 - ( ( pbVar4[1] ^ pbVar5[1] ) & bVar39 );
         bVar61 = cVar60 - ( ( pbVar4[2] ^ pbVar5[2] ) & bVar40 );
         bVar63 = cVar62 - ( ( pbVar4[3] ^ pbVar5[3] ) & bVar41 );
         bVar65 = cVar64 - ( ( pbVar4[4] ^ pbVar5[4] ) & bVar42 );
         bVar67 = cVar66 - ( ( pbVar4[5] ^ pbVar5[5] ) & bVar43 );
         bVar69 = cVar68 - ( ( pbVar4[6] ^ pbVar5[6] ) & bVar44 );
         bVar71 = cVar70 - ( ( pbVar4[7] ^ pbVar5[7] ) & bVar45 );
         bVar73 = cVar72 - ( ( pbVar4[8] ^ pbVar5[8] ) & bVar46 );
         bVar75 = cVar74 - ( ( pbVar4[9] ^ pbVar5[9] ) & bVar47 );
         bVar77 = cVar76 - ( ( pbVar4[10] ^ pbVar5[10] ) & bVar48 );
         bVar79 = cVar78 - ( ( pbVar4[0xb] ^ pbVar5[0xb] ) & bVar49 );
         bVar81 = cVar80 - ( ( pbVar4[0xc] ^ pbVar5[0xc] ) & bVar50 );
         bVar83 = cVar82 - ( ( pbVar4[0xd] ^ pbVar5[0xd] ) & bVar51 );
         bVar85 = cVar84 - ( ( pbVar4[0xe] ^ pbVar5[0xe] ) & bVar52 );
         bVar87 = cVar86 - ( ( pbVar4[0xf] ^ pbVar5[0xf] ) & bVar53 );
         puVar6 = (undefined1*)( param_2 + lVar55 );
         cVar56 = pavgb(*puVar6, bVar57);
         cVar58 = pavgb(puVar6[1], bVar59);
         cVar60 = pavgb(puVar6[2], bVar61);
         cVar62 = pavgb(puVar6[3], bVar63);
         cVar64 = pavgb(puVar6[4], bVar65);
         cVar66 = pavgb(puVar6[5], bVar67);
         cVar68 = pavgb(puVar6[6], bVar69);
         cVar70 = pavgb(puVar6[7], bVar71);
         cVar72 = pavgb(puVar6[8], bVar73);
         cVar74 = pavgb(puVar6[9], bVar75);
         cVar76 = pavgb(puVar6[10], bVar77);
         cVar78 = pavgb(puVar6[0xb], bVar79);
         cVar80 = pavgb(puVar6[0xc], bVar81);
         cVar82 = pavgb(puVar6[0xd], bVar83);
         cVar84 = pavgb(puVar6[0xe], bVar85);
         cVar86 = pavgb(puVar6[0xf], bVar87);
         pbVar4 = (byte*)( param_2 + lVar55 );
         bVar23 = pbVar4[1];
         bVar24 = pbVar4[2];
         bVar25 = pbVar4[3];
         bVar26 = pbVar4[4];
         bVar27 = pbVar4[5];
         bVar28 = pbVar4[6];
         bVar29 = pbVar4[7];
         bVar30 = pbVar4[8];
         bVar31 = pbVar4[9];
         bVar32 = pbVar4[10];
         bVar33 = pbVar4[0xb];
         bVar34 = pbVar4[0xc];
         bVar35 = pbVar4[0xd];
         bVar36 = pbVar4[0xe];
         bVar37 = pbVar4[0xf];
         pcVar3 = (char*)( param_4 + lVar55 );
         *pcVar3 = ( ( *pbVar4 ^ bVar57 ) & bVar38 ) + ( *pcVar2 - cVar56 );
         pcVar3[1] = ( ( bVar23 ^ bVar59 ) & bVar39 ) + ( cVar8 - cVar58 );
         pcVar3[2] = ( ( bVar24 ^ bVar61 ) & bVar40 ) + ( cVar9 - cVar60 );
         pcVar3[3] = ( ( bVar25 ^ bVar63 ) & bVar41 ) + ( cVar10 - cVar62 );
         pcVar3[4] = ( ( bVar26 ^ bVar65 ) & bVar42 ) + ( cVar11 - cVar64 );
         pcVar3[5] = ( ( bVar27 ^ bVar67 ) & bVar43 ) + ( cVar12 - cVar66 );
         pcVar3[6] = ( ( bVar28 ^ bVar69 ) & bVar44 ) + ( cVar13 - cVar68 );
         pcVar3[7] = ( ( bVar29 ^ bVar71 ) & bVar45 ) + ( cVar14 - cVar70 );
         pcVar3[8] = ( ( bVar30 ^ bVar73 ) & bVar46 ) + ( cVar15 - cVar72 );
         pcVar3[9] = ( ( bVar31 ^ bVar75 ) & bVar47 ) + ( cVar16 - cVar74 );
         pcVar3[10] = ( ( bVar32 ^ bVar77 ) & bVar48 ) + ( cVar17 - cVar76 );
         pcVar3[0xb] = ( ( bVar33 ^ bVar79 ) & bVar49 ) + ( cVar18 - cVar78 );
         pcVar3[0xc] = ( ( bVar34 ^ bVar81 ) & bVar50 ) + ( cVar19 - cVar80 );
         pcVar3[0xd] = ( ( bVar35 ^ bVar83 ) & bVar51 ) + ( cVar20 - cVar82 );
         pcVar3[0xe] = ( ( bVar36 ^ bVar85 ) & bVar52 ) + ( cVar21 - cVar84 );
         pcVar3[0xf] = ( ( bVar37 ^ bVar87 ) & bVar53 ) + ( cVar22 - cVar86 );
         lVar55 = lVar55 + 0x10;
      }
 while ( (ulong)uVar1 << 4 != lVar55 );
      iVar54 = uVar1 * 4;
   }

   if (param_3 != iVar54) {
      lVar55 = (long)iVar54 * 4;
      /* WARNING: Could not recover jumptable at 0x00100766. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *_VP8LTransformColor_C )(param_1 + lVar55, param_2 + lVar55, param_3 - iVar54, param_4 + lVar55);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void PredictorSub6_SSE2(long param_1, long param_2, int param_3, long param_4) {
   uint uVar1;
   char *pcVar2;
   char *pcVar3;
   undefined1 *puVar4;
   undefined1 *puVar5;
   byte *pbVar6;
   byte *pbVar7;
   char cVar8;
   char cVar9;
   char cVar10;
   char cVar11;
   char cVar12;
   char cVar13;
   char cVar14;
   char cVar15;
   char cVar16;
   char cVar17;
   char cVar18;
   char cVar19;
   char cVar20;
   char cVar21;
   char cVar22;
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
   int iVar69;
   long lVar70;
   char cVar71;
   char cVar72;
   char cVar73;
   char cVar74;
   char cVar75;
   char cVar76;
   char cVar77;
   char cVar78;
   char cVar79;
   char cVar80;
   char cVar81;
   char cVar82;
   char cVar83;
   char cVar84;
   char cVar85;
   char cVar86;
   bVar68 = UNK_0010172f;
   bVar67 = UNK_0010172e;
   bVar66 = UNK_0010172d;
   bVar65 = UNK_0010172c;
   bVar64 = UNK_0010172b;
   bVar63 = UNK_0010172a;
   bVar62 = UNK_00101729;
   bVar61 = UNK_00101728;
   bVar60 = UNK_00101727;
   bVar59 = UNK_00101726;
   bVar58 = UNK_00101725;
   bVar57 = UNK_00101724;
   bVar56 = UNK_00101723;
   bVar55 = UNK_00101722;
   bVar54 = UNK_00101721;
   bVar53 = _LC1;
   if (param_3 < 4) {
      iVar69 = 0;
   }
 else {
      uVar1 = ( param_3 - 4U >> 2 ) + 1;
      lVar70 = 0;
      do {
         puVar4 = (undefined1*)( param_1 + -4 + lVar70 );
         puVar5 = (undefined1*)( param_2 + -4 + lVar70 );
         pcVar2 = (char*)( param_1 + lVar70 );
         cVar8 = pcVar2[1];
         cVar9 = pcVar2[2];
         cVar10 = pcVar2[3];
         cVar11 = pcVar2[4];
         cVar12 = pcVar2[5];
         cVar13 = pcVar2[6];
         cVar14 = pcVar2[7];
         cVar15 = pcVar2[8];
         cVar16 = pcVar2[9];
         cVar17 = pcVar2[10];
         cVar18 = pcVar2[0xb];
         cVar19 = pcVar2[0xc];
         cVar20 = pcVar2[0xd];
         cVar21 = pcVar2[0xe];
         cVar22 = pcVar2[0xf];
         pbVar6 = (byte*)( param_2 + -4 + lVar70 );
         bVar23 = pbVar6[1];
         bVar24 = pbVar6[2];
         bVar25 = pbVar6[3];
         bVar26 = pbVar6[4];
         bVar27 = pbVar6[5];
         bVar28 = pbVar6[6];
         bVar29 = pbVar6[7];
         bVar30 = pbVar6[8];
         bVar31 = pbVar6[9];
         bVar32 = pbVar6[10];
         bVar33 = pbVar6[0xb];
         bVar34 = pbVar6[0xc];
         bVar35 = pbVar6[0xd];
         bVar36 = pbVar6[0xe];
         bVar37 = pbVar6[0xf];
         cVar71 = pavgb(*puVar4, *puVar5);
         cVar72 = pavgb(puVar4[1], puVar5[1]);
         cVar73 = pavgb(puVar4[2], puVar5[2]);
         cVar74 = pavgb(puVar4[3], puVar5[3]);
         cVar75 = pavgb(puVar4[4], puVar5[4]);
         cVar76 = pavgb(puVar4[5], puVar5[5]);
         cVar77 = pavgb(puVar4[6], puVar5[6]);
         cVar78 = pavgb(puVar4[7], puVar5[7]);
         cVar79 = pavgb(puVar4[8], puVar5[8]);
         cVar80 = pavgb(puVar4[9], puVar5[9]);
         cVar81 = pavgb(puVar4[10], puVar5[10]);
         cVar82 = pavgb(puVar4[0xb], puVar5[0xb]);
         cVar83 = pavgb(puVar4[0xc], puVar5[0xc]);
         cVar84 = pavgb(puVar4[0xd], puVar5[0xd]);
         cVar85 = pavgb(puVar4[0xe], puVar5[0xe]);
         cVar86 = pavgb(puVar4[0xf], puVar5[0xf]);
         pbVar7 = (byte*)( param_1 + -4 + lVar70 );
         bVar38 = pbVar7[1];
         bVar39 = pbVar7[2];
         bVar40 = pbVar7[3];
         bVar41 = pbVar7[4];
         bVar42 = pbVar7[5];
         bVar43 = pbVar7[6];
         bVar44 = pbVar7[7];
         bVar45 = pbVar7[8];
         bVar46 = pbVar7[9];
         bVar47 = pbVar7[10];
         bVar48 = pbVar7[0xb];
         bVar49 = pbVar7[0xc];
         bVar50 = pbVar7[0xd];
         bVar51 = pbVar7[0xe];
         bVar52 = pbVar7[0xf];
         pcVar3 = (char*)( param_4 + lVar70 );
         *pcVar3 = ( ( *pbVar7 ^ *pbVar6 ) & bVar53 ) + ( *pcVar2 - cVar71 );
         pcVar3[1] = ( ( bVar38 ^ bVar23 ) & bVar54 ) + ( cVar8 - cVar72 );
         pcVar3[2] = ( ( bVar39 ^ bVar24 ) & bVar55 ) + ( cVar9 - cVar73 );
         pcVar3[3] = ( ( bVar40 ^ bVar25 ) & bVar56 ) + ( cVar10 - cVar74 );
         pcVar3[4] = ( ( bVar41 ^ bVar26 ) & bVar57 ) + ( cVar11 - cVar75 );
         pcVar3[5] = ( ( bVar42 ^ bVar27 ) & bVar58 ) + ( cVar12 - cVar76 );
         pcVar3[6] = ( ( bVar43 ^ bVar28 ) & bVar59 ) + ( cVar13 - cVar77 );
         pcVar3[7] = ( ( bVar44 ^ bVar29 ) & bVar60 ) + ( cVar14 - cVar78 );
         pcVar3[8] = ( ( bVar45 ^ bVar30 ) & bVar61 ) + ( cVar15 - cVar79 );
         pcVar3[9] = ( ( bVar46 ^ bVar31 ) & bVar62 ) + ( cVar16 - cVar80 );
         pcVar3[10] = ( ( bVar47 ^ bVar32 ) & bVar63 ) + ( cVar17 - cVar81 );
         pcVar3[0xb] = ( ( bVar48 ^ bVar33 ) & bVar64 ) + ( cVar18 - cVar82 );
         pcVar3[0xc] = ( ( bVar49 ^ bVar34 ) & bVar65 ) + ( cVar19 - cVar83 );
         pcVar3[0xd] = ( ( bVar50 ^ bVar35 ) & bVar66 ) + ( cVar20 - cVar84 );
         pcVar3[0xe] = ( ( bVar51 ^ bVar36 ) & bVar67 ) + ( cVar21 - cVar85 );
         pcVar3[0xf] = ( ( bVar52 ^ bVar37 ) & bVar68 ) + ( cVar22 - cVar86 );
         lVar70 = lVar70 + 0x10;
      }
 while ( (ulong)uVar1 << 4 != lVar70 );
      iVar69 = uVar1 * 4;
   }

   if (param_3 != iVar69) {
      lVar70 = (long)iVar69 * 4;
      /* WARNING: Could not recover jumptable at 0x0010080c. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *_VP8LSubtractGreenFromBlueAndRed_C )(param_1 + lVar70, param_2 + lVar70, param_3 - iVar69, param_4 + lVar70);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void PredictorSub7_SSE2(long param_1, long param_2, int param_3, long param_4) {
   uint uVar1;
   undefined1 *puVar2;
   char *pcVar3;
   byte *pbVar4;
   char *pcVar5;
   undefined1 *puVar6;
   byte *pbVar7;
   char cVar8;
   char cVar9;
   char cVar10;
   char cVar11;
   char cVar12;
   char cVar13;
   char cVar14;
   char cVar15;
   char cVar16;
   char cVar17;
   char cVar18;
   char cVar19;
   char cVar20;
   char cVar21;
   char cVar22;
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
   int iVar69;
   long lVar70;
   char cVar71;
   char cVar72;
   char cVar73;
   char cVar74;
   char cVar75;
   char cVar76;
   char cVar77;
   char cVar78;
   char cVar79;
   char cVar80;
   char cVar81;
   char cVar82;
   char cVar83;
   char cVar84;
   char cVar85;
   char cVar86;
   bVar68 = UNK_0010172f;
   bVar67 = UNK_0010172e;
   bVar66 = UNK_0010172d;
   bVar65 = UNK_0010172c;
   bVar64 = UNK_0010172b;
   bVar63 = UNK_0010172a;
   bVar62 = UNK_00101729;
   bVar61 = UNK_00101728;
   bVar60 = UNK_00101727;
   bVar59 = UNK_00101726;
   bVar58 = UNK_00101725;
   bVar57 = UNK_00101724;
   bVar56 = UNK_00101723;
   bVar55 = UNK_00101722;
   bVar54 = UNK_00101721;
   bVar53 = _LC1;
   if (param_3 < 4) {
      iVar69 = 0;
   }
 else {
      uVar1 = ( param_3 - 4U >> 2 ) + 1;
      lVar70 = 0;
      do {
         puVar6 = (undefined1*)( param_1 + -4 + lVar70 );
         puVar2 = (undefined1*)( param_2 + lVar70 );
         pcVar3 = (char*)( param_1 + lVar70 );
         cVar8 = pcVar3[1];
         cVar9 = pcVar3[2];
         cVar10 = pcVar3[3];
         cVar11 = pcVar3[4];
         cVar12 = pcVar3[5];
         cVar13 = pcVar3[6];
         cVar14 = pcVar3[7];
         cVar15 = pcVar3[8];
         cVar16 = pcVar3[9];
         cVar17 = pcVar3[10];
         cVar18 = pcVar3[0xb];
         cVar19 = pcVar3[0xc];
         cVar20 = pcVar3[0xd];
         cVar21 = pcVar3[0xe];
         cVar22 = pcVar3[0xf];
         pbVar4 = (byte*)( param_2 + lVar70 );
         bVar23 = pbVar4[1];
         bVar24 = pbVar4[2];
         bVar25 = pbVar4[3];
         bVar26 = pbVar4[4];
         bVar27 = pbVar4[5];
         bVar28 = pbVar4[6];
         bVar29 = pbVar4[7];
         bVar30 = pbVar4[8];
         bVar31 = pbVar4[9];
         bVar32 = pbVar4[10];
         bVar33 = pbVar4[0xb];
         bVar34 = pbVar4[0xc];
         bVar35 = pbVar4[0xd];
         bVar36 = pbVar4[0xe];
         bVar37 = pbVar4[0xf];
         cVar71 = pavgb(*puVar6, *puVar2);
         cVar72 = pavgb(puVar6[1], puVar2[1]);
         cVar73 = pavgb(puVar6[2], puVar2[2]);
         cVar74 = pavgb(puVar6[3], puVar2[3]);
         cVar75 = pavgb(puVar6[4], puVar2[4]);
         cVar76 = pavgb(puVar6[5], puVar2[5]);
         cVar77 = pavgb(puVar6[6], puVar2[6]);
         cVar78 = pavgb(puVar6[7], puVar2[7]);
         cVar79 = pavgb(puVar6[8], puVar2[8]);
         cVar80 = pavgb(puVar6[9], puVar2[9]);
         cVar81 = pavgb(puVar6[10], puVar2[10]);
         cVar82 = pavgb(puVar6[0xb], puVar2[0xb]);
         cVar83 = pavgb(puVar6[0xc], puVar2[0xc]);
         cVar84 = pavgb(puVar6[0xd], puVar2[0xd]);
         cVar85 = pavgb(puVar6[0xe], puVar2[0xe]);
         cVar86 = pavgb(puVar6[0xf], puVar2[0xf]);
         pbVar7 = (byte*)( param_1 + -4 + lVar70 );
         bVar38 = pbVar7[1];
         bVar39 = pbVar7[2];
         bVar40 = pbVar7[3];
         bVar41 = pbVar7[4];
         bVar42 = pbVar7[5];
         bVar43 = pbVar7[6];
         bVar44 = pbVar7[7];
         bVar45 = pbVar7[8];
         bVar46 = pbVar7[9];
         bVar47 = pbVar7[10];
         bVar48 = pbVar7[0xb];
         bVar49 = pbVar7[0xc];
         bVar50 = pbVar7[0xd];
         bVar51 = pbVar7[0xe];
         bVar52 = pbVar7[0xf];
         pcVar5 = (char*)( param_4 + lVar70 );
         *pcVar5 = ( ( *pbVar7 ^ *pbVar4 ) & bVar53 ) + ( *pcVar3 - cVar71 );
         pcVar5[1] = ( ( bVar38 ^ bVar23 ) & bVar54 ) + ( cVar8 - cVar72 );
         pcVar5[2] = ( ( bVar39 ^ bVar24 ) & bVar55 ) + ( cVar9 - cVar73 );
         pcVar5[3] = ( ( bVar40 ^ bVar25 ) & bVar56 ) + ( cVar10 - cVar74 );
         pcVar5[4] = ( ( bVar41 ^ bVar26 ) & bVar57 ) + ( cVar11 - cVar75 );
         pcVar5[5] = ( ( bVar42 ^ bVar27 ) & bVar58 ) + ( cVar12 - cVar76 );
         pcVar5[6] = ( ( bVar43 ^ bVar28 ) & bVar59 ) + ( cVar13 - cVar77 );
         pcVar5[7] = ( ( bVar44 ^ bVar29 ) & bVar60 ) + ( cVar14 - cVar78 );
         pcVar5[8] = ( ( bVar45 ^ bVar30 ) & bVar61 ) + ( cVar15 - cVar79 );
         pcVar5[9] = ( ( bVar46 ^ bVar31 ) & bVar62 ) + ( cVar16 - cVar80 );
         pcVar5[10] = ( ( bVar47 ^ bVar32 ) & bVar63 ) + ( cVar17 - cVar81 );
         pcVar5[0xb] = ( ( bVar48 ^ bVar33 ) & bVar64 ) + ( cVar18 - cVar82 );
         pcVar5[0xc] = ( ( bVar49 ^ bVar34 ) & bVar65 ) + ( cVar19 - cVar83 );
         pcVar5[0xd] = ( ( bVar50 ^ bVar35 ) & bVar66 ) + ( cVar20 - cVar84 );
         pcVar5[0xe] = ( ( bVar51 ^ bVar36 ) & bVar67 ) + ( cVar21 - cVar85 );
         pcVar5[0xf] = ( ( bVar52 ^ bVar37 ) & bVar68 ) + ( cVar22 - cVar86 );
         lVar70 = lVar70 + 0x10;
      }
 while ( (ulong)uVar1 << 4 != lVar70 );
      iVar69 = uVar1 * 4;
   }

   if (param_3 != iVar69) {
      lVar70 = (long)iVar69 * 4;
      /* WARNING: Could not recover jumptable at 0x001008ba. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *_kSLog2Table )(param_1 + lVar70, param_2 + lVar70, param_3 - iVar69, param_4 + lVar70);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void PredictorSub8_SSE2(long param_1, long param_2, int param_3, long param_4) {
   uint uVar1;
   undefined1 *puVar2;
   char *pcVar3;
   byte *pbVar4;
   char *pcVar5;
   undefined1 *puVar6;
   byte *pbVar7;
   char cVar8;
   char cVar9;
   char cVar10;
   char cVar11;
   char cVar12;
   char cVar13;
   char cVar14;
   char cVar15;
   char cVar16;
   char cVar17;
   char cVar18;
   char cVar19;
   char cVar20;
   char cVar21;
   char cVar22;
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
   int iVar69;
   long lVar70;
   char cVar71;
   char cVar72;
   char cVar73;
   char cVar74;
   char cVar75;
   char cVar76;
   char cVar77;
   char cVar78;
   char cVar79;
   char cVar80;
   char cVar81;
   char cVar82;
   char cVar83;
   char cVar84;
   char cVar85;
   char cVar86;
   bVar68 = UNK_0010172f;
   bVar67 = UNK_0010172e;
   bVar66 = UNK_0010172d;
   bVar65 = UNK_0010172c;
   bVar64 = UNK_0010172b;
   bVar63 = UNK_0010172a;
   bVar62 = UNK_00101729;
   bVar61 = UNK_00101728;
   bVar60 = UNK_00101727;
   bVar59 = UNK_00101726;
   bVar58 = UNK_00101725;
   bVar57 = UNK_00101724;
   bVar56 = UNK_00101723;
   bVar55 = UNK_00101722;
   bVar54 = UNK_00101721;
   bVar53 = _LC1;
   if (param_3 < 4) {
      iVar69 = 0;
   }
 else {
      uVar1 = ( param_3 - 4U >> 2 ) + 1;
      lVar70 = 0;
      do {
         puVar6 = (undefined1*)( param_2 + -4 + lVar70 );
         puVar2 = (undefined1*)( param_2 + lVar70 );
         pcVar3 = (char*)( param_1 + lVar70 );
         cVar8 = pcVar3[1];
         cVar9 = pcVar3[2];
         cVar10 = pcVar3[3];
         cVar11 = pcVar3[4];
         cVar12 = pcVar3[5];
         cVar13 = pcVar3[6];
         cVar14 = pcVar3[7];
         cVar15 = pcVar3[8];
         cVar16 = pcVar3[9];
         cVar17 = pcVar3[10];
         cVar18 = pcVar3[0xb];
         cVar19 = pcVar3[0xc];
         cVar20 = pcVar3[0xd];
         cVar21 = pcVar3[0xe];
         cVar22 = pcVar3[0xf];
         pbVar4 = (byte*)( param_2 + lVar70 );
         bVar23 = pbVar4[1];
         bVar24 = pbVar4[2];
         bVar25 = pbVar4[3];
         bVar26 = pbVar4[4];
         bVar27 = pbVar4[5];
         bVar28 = pbVar4[6];
         bVar29 = pbVar4[7];
         bVar30 = pbVar4[8];
         bVar31 = pbVar4[9];
         bVar32 = pbVar4[10];
         bVar33 = pbVar4[0xb];
         bVar34 = pbVar4[0xc];
         bVar35 = pbVar4[0xd];
         bVar36 = pbVar4[0xe];
         bVar37 = pbVar4[0xf];
         cVar71 = pavgb(*puVar6, *puVar2);
         cVar72 = pavgb(puVar6[1], puVar2[1]);
         cVar73 = pavgb(puVar6[2], puVar2[2]);
         cVar74 = pavgb(puVar6[3], puVar2[3]);
         cVar75 = pavgb(puVar6[4], puVar2[4]);
         cVar76 = pavgb(puVar6[5], puVar2[5]);
         cVar77 = pavgb(puVar6[6], puVar2[6]);
         cVar78 = pavgb(puVar6[7], puVar2[7]);
         cVar79 = pavgb(puVar6[8], puVar2[8]);
         cVar80 = pavgb(puVar6[9], puVar2[9]);
         cVar81 = pavgb(puVar6[10], puVar2[10]);
         cVar82 = pavgb(puVar6[0xb], puVar2[0xb]);
         cVar83 = pavgb(puVar6[0xc], puVar2[0xc]);
         cVar84 = pavgb(puVar6[0xd], puVar2[0xd]);
         cVar85 = pavgb(puVar6[0xe], puVar2[0xe]);
         cVar86 = pavgb(puVar6[0xf], puVar2[0xf]);
         pbVar7 = (byte*)( param_2 + -4 + lVar70 );
         bVar38 = pbVar7[1];
         bVar39 = pbVar7[2];
         bVar40 = pbVar7[3];
         bVar41 = pbVar7[4];
         bVar42 = pbVar7[5];
         bVar43 = pbVar7[6];
         bVar44 = pbVar7[7];
         bVar45 = pbVar7[8];
         bVar46 = pbVar7[9];
         bVar47 = pbVar7[10];
         bVar48 = pbVar7[0xb];
         bVar49 = pbVar7[0xc];
         bVar50 = pbVar7[0xd];
         bVar51 = pbVar7[0xe];
         bVar52 = pbVar7[0xf];
         pcVar5 = (char*)( param_4 + lVar70 );
         *pcVar5 = ( ( *pbVar7 ^ *pbVar4 ) & bVar53 ) + ( *pcVar3 - cVar71 );
         pcVar5[1] = ( ( bVar38 ^ bVar23 ) & bVar54 ) + ( cVar8 - cVar72 );
         pcVar5[2] = ( ( bVar39 ^ bVar24 ) & bVar55 ) + ( cVar9 - cVar73 );
         pcVar5[3] = ( ( bVar40 ^ bVar25 ) & bVar56 ) + ( cVar10 - cVar74 );
         pcVar5[4] = ( ( bVar41 ^ bVar26 ) & bVar57 ) + ( cVar11 - cVar75 );
         pcVar5[5] = ( ( bVar42 ^ bVar27 ) & bVar58 ) + ( cVar12 - cVar76 );
         pcVar5[6] = ( ( bVar43 ^ bVar28 ) & bVar59 ) + ( cVar13 - cVar77 );
         pcVar5[7] = ( ( bVar44 ^ bVar29 ) & bVar60 ) + ( cVar14 - cVar78 );
         pcVar5[8] = ( ( bVar45 ^ bVar30 ) & bVar61 ) + ( cVar15 - cVar79 );
         pcVar5[9] = ( ( bVar46 ^ bVar31 ) & bVar62 ) + ( cVar16 - cVar80 );
         pcVar5[10] = ( ( bVar47 ^ bVar32 ) & bVar63 ) + ( cVar17 - cVar81 );
         pcVar5[0xb] = ( ( bVar48 ^ bVar33 ) & bVar64 ) + ( cVar18 - cVar82 );
         pcVar5[0xc] = ( ( bVar49 ^ bVar34 ) & bVar65 ) + ( cVar19 - cVar83 );
         pcVar5[0xd] = ( ( bVar50 ^ bVar35 ) & bVar66 ) + ( cVar20 - cVar84 );
         pcVar5[0xe] = ( ( bVar51 ^ bVar36 ) & bVar67 ) + ( cVar21 - cVar85 );
         pcVar5[0xf] = ( ( bVar52 ^ bVar37 ) & bVar68 ) + ( cVar22 - cVar86 );
         lVar70 = lVar70 + 0x10;
      }
 while ( (ulong)uVar1 << 4 != lVar70 );
      iVar69 = uVar1 * 4;
   }

   if (param_3 != iVar69) {
      lVar70 = (long)iVar69 * 4;
      /* WARNING: Could not recover jumptable at 0x0010095a. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *_VP8LFastSLog2Slow )(param_1 + lVar70, param_2 + lVar70, param_3 - iVar69, param_4 + lVar70);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void PredictorSub9_SSE2(long param_1, long param_2, int param_3, long param_4) {
   uint uVar1;
   undefined1 *puVar2;
   char *pcVar3;
   byte *pbVar4;
   char *pcVar5;
   undefined1 *puVar6;
   byte *pbVar7;
   char cVar8;
   char cVar9;
   char cVar10;
   char cVar11;
   char cVar12;
   char cVar13;
   char cVar14;
   char cVar15;
   char cVar16;
   char cVar17;
   char cVar18;
   char cVar19;
   char cVar20;
   char cVar21;
   char cVar22;
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
   int iVar69;
   long lVar70;
   char cVar71;
   char cVar72;
   char cVar73;
   char cVar74;
   char cVar75;
   char cVar76;
   char cVar77;
   char cVar78;
   char cVar79;
   char cVar80;
   char cVar81;
   char cVar82;
   char cVar83;
   char cVar84;
   char cVar85;
   char cVar86;
   bVar68 = UNK_0010172f;
   bVar67 = UNK_0010172e;
   bVar66 = UNK_0010172d;
   bVar65 = UNK_0010172c;
   bVar64 = UNK_0010172b;
   bVar63 = UNK_0010172a;
   bVar62 = UNK_00101729;
   bVar61 = UNK_00101728;
   bVar60 = UNK_00101727;
   bVar59 = UNK_00101726;
   bVar58 = UNK_00101725;
   bVar57 = UNK_00101724;
   bVar56 = UNK_00101723;
   bVar55 = UNK_00101722;
   bVar54 = UNK_00101721;
   bVar53 = _LC1;
   if (param_3 < 4) {
      iVar69 = 0;
   }
 else {
      uVar1 = ( param_3 - 4U >> 2 ) + 1;
      lVar70 = 0;
      do {
         puVar2 = (undefined1*)( param_2 + lVar70 );
         puVar6 = (undefined1*)( param_2 + 4 + lVar70 );
         pcVar3 = (char*)( param_1 + lVar70 );
         cVar8 = pcVar3[1];
         cVar9 = pcVar3[2];
         cVar10 = pcVar3[3];
         cVar11 = pcVar3[4];
         cVar12 = pcVar3[5];
         cVar13 = pcVar3[6];
         cVar14 = pcVar3[7];
         cVar15 = pcVar3[8];
         cVar16 = pcVar3[9];
         cVar17 = pcVar3[10];
         cVar18 = pcVar3[0xb];
         cVar19 = pcVar3[0xc];
         cVar20 = pcVar3[0xd];
         cVar21 = pcVar3[0xe];
         cVar22 = pcVar3[0xf];
         pbVar7 = (byte*)( param_2 + 4 + lVar70 );
         bVar23 = pbVar7[1];
         bVar24 = pbVar7[2];
         bVar25 = pbVar7[3];
         bVar26 = pbVar7[4];
         bVar27 = pbVar7[5];
         bVar28 = pbVar7[6];
         bVar29 = pbVar7[7];
         bVar30 = pbVar7[8];
         bVar31 = pbVar7[9];
         bVar32 = pbVar7[10];
         bVar33 = pbVar7[0xb];
         bVar34 = pbVar7[0xc];
         bVar35 = pbVar7[0xd];
         bVar36 = pbVar7[0xe];
         bVar37 = pbVar7[0xf];
         cVar71 = pavgb(*puVar2, *puVar6);
         cVar72 = pavgb(puVar2[1], puVar6[1]);
         cVar73 = pavgb(puVar2[2], puVar6[2]);
         cVar74 = pavgb(puVar2[3], puVar6[3]);
         cVar75 = pavgb(puVar2[4], puVar6[4]);
         cVar76 = pavgb(puVar2[5], puVar6[5]);
         cVar77 = pavgb(puVar2[6], puVar6[6]);
         cVar78 = pavgb(puVar2[7], puVar6[7]);
         cVar79 = pavgb(puVar2[8], puVar6[8]);
         cVar80 = pavgb(puVar2[9], puVar6[9]);
         cVar81 = pavgb(puVar2[10], puVar6[10]);
         cVar82 = pavgb(puVar2[0xb], puVar6[0xb]);
         cVar83 = pavgb(puVar2[0xc], puVar6[0xc]);
         cVar84 = pavgb(puVar2[0xd], puVar6[0xd]);
         cVar85 = pavgb(puVar2[0xe], puVar6[0xe]);
         cVar86 = pavgb(puVar2[0xf], puVar6[0xf]);
         pbVar4 = (byte*)( param_2 + lVar70 );
         bVar38 = pbVar4[1];
         bVar39 = pbVar4[2];
         bVar40 = pbVar4[3];
         bVar41 = pbVar4[4];
         bVar42 = pbVar4[5];
         bVar43 = pbVar4[6];
         bVar44 = pbVar4[7];
         bVar45 = pbVar4[8];
         bVar46 = pbVar4[9];
         bVar47 = pbVar4[10];
         bVar48 = pbVar4[0xb];
         bVar49 = pbVar4[0xc];
         bVar50 = pbVar4[0xd];
         bVar51 = pbVar4[0xe];
         bVar52 = pbVar4[0xf];
         pcVar5 = (char*)( param_4 + lVar70 );
         *pcVar5 = ( ( *pbVar4 ^ *pbVar7 ) & bVar53 ) + ( *pcVar3 - cVar71 );
         pcVar5[1] = ( ( bVar38 ^ bVar23 ) & bVar54 ) + ( cVar8 - cVar72 );
         pcVar5[2] = ( ( bVar39 ^ bVar24 ) & bVar55 ) + ( cVar9 - cVar73 );
         pcVar5[3] = ( ( bVar40 ^ bVar25 ) & bVar56 ) + ( cVar10 - cVar74 );
         pcVar5[4] = ( ( bVar41 ^ bVar26 ) & bVar57 ) + ( cVar11 - cVar75 );
         pcVar5[5] = ( ( bVar42 ^ bVar27 ) & bVar58 ) + ( cVar12 - cVar76 );
         pcVar5[6] = ( ( bVar43 ^ bVar28 ) & bVar59 ) + ( cVar13 - cVar77 );
         pcVar5[7] = ( ( bVar44 ^ bVar29 ) & bVar60 ) + ( cVar14 - cVar78 );
         pcVar5[8] = ( ( bVar45 ^ bVar30 ) & bVar61 ) + ( cVar15 - cVar79 );
         pcVar5[9] = ( ( bVar46 ^ bVar31 ) & bVar62 ) + ( cVar16 - cVar80 );
         pcVar5[10] = ( ( bVar47 ^ bVar32 ) & bVar63 ) + ( cVar17 - cVar81 );
         pcVar5[0xb] = ( ( bVar48 ^ bVar33 ) & bVar64 ) + ( cVar18 - cVar82 );
         pcVar5[0xc] = ( ( bVar49 ^ bVar34 ) & bVar65 ) + ( cVar19 - cVar83 );
         pcVar5[0xd] = ( ( bVar50 ^ bVar35 ) & bVar66 ) + ( cVar20 - cVar84 );
         pcVar5[0xe] = ( ( bVar51 ^ bVar36 ) & bVar67 ) + ( cVar21 - cVar85 );
         pcVar5[0xf] = ( ( bVar52 ^ bVar37 ) & bVar68 ) + ( cVar22 - cVar86 );
         lVar70 = lVar70 + 0x10;
      }
 while ( (ulong)uVar1 << 4 != lVar70 );
      iVar69 = uVar1 * 4;
   }

   if (param_3 != iVar69) {
      lVar70 = (long)iVar69 * 4;
      /* WARNING: Could not recover jumptable at 0x001009fa. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *_VP8LSubtractGreenFromBlueAndRed )(param_1 + lVar70, param_2 + lVar70, param_3 - iVar69, param_4 + lVar70);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void PredictorSub10_SSE2(long param_1, long param_2, int param_3, long param_4) {
   uint uVar1;
   byte *pbVar2;
   undefined1 *puVar3;
   char *pcVar4;
   char *pcVar5;
   byte *pbVar6;
   undefined1 *puVar7;
   undefined1 *puVar8;
   undefined1 *puVar9;
   byte *pbVar10;
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
   int iVar27;
   long lVar28;
   char cVar29;
   byte bVar30;
   char cVar31;
   byte bVar32;
   char cVar33;
   byte bVar34;
   char cVar35;
   byte bVar36;
   char cVar37;
   byte bVar38;
   char cVar39;
   byte bVar40;
   char cVar41;
   byte bVar42;
   char cVar43;
   byte bVar44;
   char cVar45;
   byte bVar46;
   char cVar47;
   byte bVar48;
   char cVar49;
   byte bVar50;
   char cVar51;
   byte bVar52;
   char cVar53;
   byte bVar54;
   char cVar55;
   byte bVar56;
   char cVar57;
   byte bVar58;
   char cVar59;
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
   char cVar77;
   char cVar78;
   char cVar79;
   char cVar80;
   char cVar81;
   char cVar82;
   char cVar83;
   char cVar84;
   char cVar85;
   char cVar86;
   char cVar87;
   char cVar88;
   char cVar89;
   char cVar90;
   char cVar91;
   bVar26 = UNK_0010172f;
   bVar25 = UNK_0010172e;
   bVar24 = UNK_0010172d;
   bVar23 = UNK_0010172c;
   bVar22 = UNK_0010172b;
   bVar21 = UNK_0010172a;
   bVar20 = UNK_00101729;
   bVar19 = UNK_00101728;
   bVar18 = UNK_00101727;
   bVar17 = UNK_00101726;
   bVar16 = UNK_00101725;
   bVar15 = UNK_00101724;
   bVar14 = UNK_00101723;
   bVar13 = UNK_00101722;
   bVar12 = UNK_00101721;
   bVar11 = _LC1;
   if (param_3 < 4) {
      iVar27 = 0;
   }
 else {
      uVar1 = ( param_3 - 4U >> 2 ) + 1;
      lVar28 = 0;
      do {
         pbVar2 = (byte*)( param_2 + lVar28 );
         pbVar6 = (byte*)( param_2 + 4 + lVar28 );
         puVar7 = (undefined1*)( param_2 + 4 + lVar28 );
         puVar3 = (undefined1*)( param_2 + lVar28 );
         puVar8 = (undefined1*)( param_1 + -4 + lVar28 );
         puVar9 = (undefined1*)( param_2 + -4 + lVar28 );
         cVar29 = pavgb(*puVar3, *puVar7);
         cVar31 = pavgb(puVar3[1], puVar7[1]);
         cVar33 = pavgb(puVar3[2], puVar7[2]);
         cVar35 = pavgb(puVar3[3], puVar7[3]);
         cVar37 = pavgb(puVar3[4], puVar7[4]);
         cVar39 = pavgb(puVar3[5], puVar7[5]);
         cVar41 = pavgb(puVar3[6], puVar7[6]);
         cVar43 = pavgb(puVar3[7], puVar7[7]);
         cVar45 = pavgb(puVar3[8], puVar7[8]);
         cVar47 = pavgb(puVar3[9], puVar7[9]);
         cVar49 = pavgb(puVar3[10], puVar7[10]);
         cVar51 = pavgb(puVar3[0xb], puVar7[0xb]);
         cVar53 = pavgb(puVar3[0xc], puVar7[0xc]);
         cVar55 = pavgb(puVar3[0xd], puVar7[0xd]);
         cVar57 = pavgb(puVar3[0xe], puVar7[0xe]);
         cVar59 = pavgb(puVar3[0xf], puVar7[0xf]);
         pbVar10 = (byte*)( param_2 + -4 + lVar28 );
         bVar30 = cVar29 - ( ( *pbVar2 ^ *pbVar6 ) & bVar11 );
         bVar32 = cVar31 - ( ( pbVar2[1] ^ pbVar6[1] ) & bVar12 );
         bVar34 = cVar33 - ( ( pbVar2[2] ^ pbVar6[2] ) & bVar13 );
         bVar36 = cVar35 - ( ( pbVar2[3] ^ pbVar6[3] ) & bVar14 );
         bVar38 = cVar37 - ( ( pbVar2[4] ^ pbVar6[4] ) & bVar15 );
         bVar40 = cVar39 - ( ( pbVar2[5] ^ pbVar6[5] ) & bVar16 );
         bVar42 = cVar41 - ( ( pbVar2[6] ^ pbVar6[6] ) & bVar17 );
         bVar44 = cVar43 - ( ( pbVar2[7] ^ pbVar6[7] ) & bVar18 );
         bVar46 = cVar45 - ( ( pbVar2[8] ^ pbVar6[8] ) & bVar19 );
         bVar48 = cVar47 - ( ( pbVar2[9] ^ pbVar6[9] ) & bVar20 );
         bVar50 = cVar49 - ( ( pbVar2[10] ^ pbVar6[10] ) & bVar21 );
         bVar52 = cVar51 - ( ( pbVar2[0xb] ^ pbVar6[0xb] ) & bVar22 );
         bVar54 = cVar53 - ( ( pbVar2[0xc] ^ pbVar6[0xc] ) & bVar23 );
         bVar56 = cVar55 - ( ( pbVar2[0xd] ^ pbVar6[0xd] ) & bVar24 );
         bVar58 = cVar57 - ( ( pbVar2[0xe] ^ pbVar6[0xe] ) & bVar25 );
         bVar60 = cVar59 - ( ( pbVar2[0xf] ^ pbVar6[0xf] ) & bVar26 );
         pbVar2 = (byte*)( param_1 + -4 + lVar28 );
         cVar29 = pavgb(*puVar8, *puVar9);
         cVar31 = pavgb(puVar8[1], puVar9[1]);
         cVar33 = pavgb(puVar8[2], puVar9[2]);
         cVar35 = pavgb(puVar8[3], puVar9[3]);
         cVar37 = pavgb(puVar8[4], puVar9[4]);
         cVar39 = pavgb(puVar8[5], puVar9[5]);
         cVar41 = pavgb(puVar8[6], puVar9[6]);
         cVar43 = pavgb(puVar8[7], puVar9[7]);
         cVar45 = pavgb(puVar8[8], puVar9[8]);
         cVar47 = pavgb(puVar8[9], puVar9[9]);
         cVar49 = pavgb(puVar8[10], puVar9[10]);
         cVar51 = pavgb(puVar8[0xb], puVar9[0xb]);
         cVar53 = pavgb(puVar8[0xc], puVar9[0xc]);
         cVar55 = pavgb(puVar8[0xd], puVar9[0xd]);
         cVar57 = pavgb(puVar8[0xe], puVar9[0xe]);
         cVar59 = pavgb(puVar8[0xf], puVar9[0xf]);
         bVar61 = cVar29 - ( ( *pbVar2 ^ *pbVar10 ) & bVar11 );
         bVar62 = cVar31 - ( ( pbVar2[1] ^ pbVar10[1] ) & bVar12 );
         bVar63 = cVar33 - ( ( pbVar2[2] ^ pbVar10[2] ) & bVar13 );
         bVar64 = cVar35 - ( ( pbVar2[3] ^ pbVar10[3] ) & bVar14 );
         bVar65 = cVar37 - ( ( pbVar2[4] ^ pbVar10[4] ) & bVar15 );
         bVar66 = cVar39 - ( ( pbVar2[5] ^ pbVar10[5] ) & bVar16 );
         bVar67 = cVar41 - ( ( pbVar2[6] ^ pbVar10[6] ) & bVar17 );
         bVar68 = cVar43 - ( ( pbVar2[7] ^ pbVar10[7] ) & bVar18 );
         bVar69 = cVar45 - ( ( pbVar2[8] ^ pbVar10[8] ) & bVar19 );
         bVar70 = cVar47 - ( ( pbVar2[9] ^ pbVar10[9] ) & bVar20 );
         bVar71 = cVar49 - ( ( pbVar2[10] ^ pbVar10[10] ) & bVar21 );
         bVar72 = cVar51 - ( ( pbVar2[0xb] ^ pbVar10[0xb] ) & bVar22 );
         bVar73 = cVar53 - ( ( pbVar2[0xc] ^ pbVar10[0xc] ) & bVar23 );
         bVar74 = cVar55 - ( ( pbVar2[0xd] ^ pbVar10[0xd] ) & bVar24 );
         bVar75 = cVar57 - ( ( pbVar2[0xe] ^ pbVar10[0xe] ) & bVar25 );
         bVar76 = cVar59 - ( ( pbVar2[0xf] ^ pbVar10[0xf] ) & bVar26 );
         pcVar4 = (char*)( param_1 + lVar28 );
         cVar29 = pcVar4[1];
         cVar31 = pcVar4[2];
         cVar33 = pcVar4[3];
         cVar35 = pcVar4[4];
         cVar37 = pcVar4[5];
         cVar39 = pcVar4[6];
         cVar41 = pcVar4[7];
         cVar43 = pcVar4[8];
         cVar45 = pcVar4[9];
         cVar47 = pcVar4[10];
         cVar49 = pcVar4[0xb];
         cVar51 = pcVar4[0xc];
         cVar53 = pcVar4[0xd];
         cVar55 = pcVar4[0xe];
         cVar57 = pcVar4[0xf];
         cVar59 = pavgb(bVar30, bVar61);
         cVar77 = pavgb(bVar32, bVar62);
         cVar78 = pavgb(bVar34, bVar63);
         cVar79 = pavgb(bVar36, bVar64);
         cVar80 = pavgb(bVar38, bVar65);
         cVar81 = pavgb(bVar40, bVar66);
         cVar82 = pavgb(bVar42, bVar67);
         cVar83 = pavgb(bVar44, bVar68);
         cVar84 = pavgb(bVar46, bVar69);
         cVar85 = pavgb(bVar48, bVar70);
         cVar86 = pavgb(bVar50, bVar71);
         cVar87 = pavgb(bVar52, bVar72);
         cVar88 = pavgb(bVar54, bVar73);
         cVar89 = pavgb(bVar56, bVar74);
         cVar90 = pavgb(bVar58, bVar75);
         cVar91 = pavgb(bVar60, bVar76);
         pcVar5 = (char*)( param_4 + lVar28 );
         *pcVar5 = ( ( bVar30 ^ bVar61 ) & bVar11 ) + ( *pcVar4 - cVar59 );
         pcVar5[1] = ( ( bVar32 ^ bVar62 ) & bVar12 ) + ( cVar29 - cVar77 );
         pcVar5[2] = ( ( bVar34 ^ bVar63 ) & bVar13 ) + ( cVar31 - cVar78 );
         pcVar5[3] = ( ( bVar36 ^ bVar64 ) & bVar14 ) + ( cVar33 - cVar79 );
         pcVar5[4] = ( ( bVar38 ^ bVar65 ) & bVar15 ) + ( cVar35 - cVar80 );
         pcVar5[5] = ( ( bVar40 ^ bVar66 ) & bVar16 ) + ( cVar37 - cVar81 );
         pcVar5[6] = ( ( bVar42 ^ bVar67 ) & bVar17 ) + ( cVar39 - cVar82 );
         pcVar5[7] = ( ( bVar44 ^ bVar68 ) & bVar18 ) + ( cVar41 - cVar83 );
         pcVar5[8] = ( ( bVar46 ^ bVar69 ) & bVar19 ) + ( cVar43 - cVar84 );
         pcVar5[9] = ( ( bVar48 ^ bVar70 ) & bVar20 ) + ( cVar45 - cVar85 );
         pcVar5[10] = ( ( bVar50 ^ bVar71 ) & bVar21 ) + ( cVar47 - cVar86 );
         pcVar5[0xb] = ( ( bVar52 ^ bVar72 ) & bVar22 ) + ( cVar49 - cVar87 );
         pcVar5[0xc] = ( ( bVar54 ^ bVar73 ) & bVar23 ) + ( cVar51 - cVar88 );
         pcVar5[0xd] = ( ( bVar56 ^ bVar74 ) & bVar24 ) + ( cVar53 - cVar89 );
         pcVar5[0xe] = ( ( bVar58 ^ bVar75 ) & bVar25 ) + ( cVar55 - cVar90 );
         pcVar5[0xf] = ( ( bVar60 ^ bVar76 ) & bVar26 ) + ( cVar57 - cVar91 );
         lVar28 = lVar28 + 0x10;
      }
 while ( (ulong)uVar1 << 4 != lVar28 );
      iVar27 = uVar1 * 4;
   }

   if (param_3 != iVar27) {
      lVar28 = (long)iVar27 * 4;
      /* WARNING: Could not recover jumptable at 0x00100ad6. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *_VP8LTransformColor )(param_1 + lVar28, param_2 + lVar28, param_3 - iVar27, param_4 + lVar28);
      return;
   }

   return;
}
ulong VectorMismatch_SSE2(int *param_1, int *param_2, int param_3) {
   int *piVar1;
   int *piVar2;
   ulong uVar3;
   int iVar4;
   ulong uVar5;
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar13[16];
   int iVar14;
   int iVar15;
   int iVar16;
   int iVar17;
   int iVar6;
   int iVar10;
   int iVar11;
   int iVar12;
   if (param_3 < 0xc) {
      if (param_3 < 4) {
         uVar5 = 0;
         if (param_3 < 1) {
            return 0;
         }

         goto LAB_00100b5f;
      }

      uVar5 = 0;
      auVar8._0_4_ = -(uint)(*param_1 == *param_2);
      auVar8._4_4_ = -(uint)(param_1[1] == param_2[1]);
      auVar8._8_4_ = -(uint)(param_1[2] == param_2[2]);
      auVar8._12_4_ = -(uint)(param_1[3] == param_2[3]);
      if (( ushort )(( ushort )(SUB161(auVar8 >> 7, 0) & 1) | ( ushort )(SUB161(auVar8 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar8 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar8 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar8 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar8 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar8 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar8 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar8 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar8 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar8 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar8 >> 0x5f, 0) & 1) << 0xb | ( ushort )(( byte )(auVar8._12_4_ >> 7) & 1) << 0xc | ( ushort )(( byte )(auVar8._12_4_ >> 0xf) & 1) << 0xd | ( ushort )(( byte )(auVar8._12_4_ >> 0x17) & 1) << 0xe | ( ushort )(byte)(auVar8._12_4_ >> 0x1f) << 0xf) != 0xffff) goto LAB_00100b5f;
      uVar5 = 4;
      if (7 < param_3) {
         auVar9._0_4_ = -(uint)(param_1[4] == param_2[4]);
         auVar9._4_4_ = -(uint)(param_1[5] == param_2[5]);
         auVar9._8_4_ = -(uint)(param_1[6] == param_2[6]);
         auVar9._12_4_ = -(uint)(param_1[7] == param_2[7]);
         if (( ushort )(( ushort )(SUB161(auVar9 >> 7, 0) & 1) | ( ushort )(SUB161(auVar9 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar9 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar9 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar9 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar9 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar9 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar9 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar9 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar9 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar9 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar9 >> 0x5f, 0) & 1) << 0xb | ( ushort )(( byte )(auVar9._12_4_ >> 7) & 1) << 0xc | ( ushort )(( byte )(auVar9._12_4_ >> 0xf) & 1) << 0xd | ( ushort )(( byte )(auVar9._12_4_ >> 0x17) & 1) << 0xe | ( ushort )(byte)(auVar9._12_4_ >> 0x1f) << 0xf) != 0xffff) {
            uVar5 = 4;
            goto LAB_00100b5f;
         }

         uVar5 = 8;
      }

   }
 else {
      iVar14 = *param_1;
      iVar15 = param_1[1];
      iVar16 = param_1[2];
      iVar17 = param_1[3];
      iVar6 = *param_2;
      iVar10 = param_2[1];
      iVar11 = param_2[2];
      iVar12 = param_2[3];
      uVar3 = 8;
      do {
         uVar5 = uVar3;
         auVar7._0_4_ = -(uint)(iVar6 == iVar14);
         auVar7._4_4_ = -(uint)(iVar10 == iVar15);
         auVar7._8_4_ = -(uint)(iVar11 == iVar16);
         auVar7._12_4_ = -(uint)(iVar12 == iVar17);
         piVar1 = param_1 + ( uVar5 - 4 );
         piVar2 = param_2 + ( uVar5 - 4 );
         iVar4 = (int)uVar5;
         if (( ushort )(( ushort )(SUB161(auVar7 >> 7, 0) & 1) | ( ushort )(SUB161(auVar7 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar7 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar7 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar7 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar7 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar7 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar7 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar7 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar7 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar7 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar7 >> 0x5f, 0) & 1) << 0xb | ( ushort )(( byte )(auVar7._12_4_ >> 7) & 1) << 0xc | ( ushort )(( byte )(auVar7._12_4_ >> 0xf) & 1) << 0xd | ( ushort )(( byte )(auVar7._12_4_ >> 0x17) & 1) << 0xe | ( ushort )(byte)(auVar7._12_4_ >> 0x1f) << 0xf) != 0xffff) {
            uVar5 = ( ulong )(iVar4 - 8);
            break;
         }

         auVar13._0_4_ = -(uint)(*piVar2 == *piVar1);
         auVar13._4_4_ = -(uint)(piVar2[1] == piVar1[1]);
         auVar13._8_4_ = -(uint)(piVar2[2] == piVar1[2]);
         auVar13._12_4_ = -(uint)(piVar2[3] == piVar1[3]);
         piVar1 = param_1 + uVar5;
         iVar14 = *piVar1;
         iVar15 = piVar1[1];
         iVar16 = piVar1[2];
         iVar17 = piVar1[3];
         piVar1 = param_2 + uVar5;
         iVar6 = *piVar1;
         iVar10 = piVar1[1];
         iVar11 = piVar1[2];
         iVar12 = piVar1[3];
         if (( ushort )(( ushort )(SUB161(auVar13 >> 7, 0) & 1) | ( ushort )(SUB161(auVar13 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar13 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar13 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar13 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar13 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar13 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar13 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar13 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar13 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar13 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar13 >> 0x5f, 0) & 1) << 0xb | ( ushort )(( byte )(auVar13._12_4_ >> 7) & 1) << 0xc | ( ushort )(( byte )(auVar13._12_4_ >> 0xf) & 1) << 0xd | ( ushort )(( byte )(auVar13._12_4_ >> 0x17) & 1) << 0xe | ( ushort )(byte)(auVar13._12_4_ >> 0x1f) << 0xf) != 0xffff) {
            uVar5 = ( ulong )(iVar4 - 4U);
            if (param_3 <= (int)( iVar4 - 4U )) {
               return uVar5;
            }

            goto LAB_00100b5f;
         }

         uVar3 = uVar5 + 8;
      }
 while ( iVar4 + 0xc < param_3 );
   }

   if (param_3 <= (int)uVar5) {
      return uVar5;
   }

   LAB_00100b5f:uVar3 = (long)(int)uVar5;
   do {
      uVar5 = uVar3;
      if (param_1[uVar5] != param_2[uVar5]) {
         return uVar5;
      }

      uVar3 = uVar5 + 1;
   }
 while ( (int)( uVar5 + 1 ) < param_3 );
   return ( ulong )((int)uVar5 + 1);
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void BundleColorMap_SSE2(undefined1 *param_1, int param_2, int param_3, undefined1 (*param_4)[16]) {
   short *psVar1;
   undefined2 *puVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 uVar6;
   undefined1 *puVar7;
   undefined1 *puVar8;
   undefined1 *puVar9;
   undefined1 *puVar10;
   undefined1 *puVar11;
   byte bVar12;
   undefined1 uVar13;
   undefined1 *puVar14;
   byte bVar15;
   undefined1 *puVar16;
   undefined1 *puVar17;
   undefined1 *puVar18;
   undefined1 *puVar19;
   undefined1 auVar20[12];
   undefined1 auVar21[12];
   undefined1 auVar22[12];
   undefined2 uVar23;
   undefined2 uVar24;
   undefined2 uVar25;
   undefined2 uVar26;
   undefined2 uVar27;
   undefined2 uVar28;
   undefined2 uVar29;
   undefined2 uVar30;
   undefined1(*pauVar31)[16];
   ulong uVar32;
   undefined1(*pauVar33)[16];
   uint uVar34;
   int iVar35;
   long lVar37;
   undefined1 *puVar38;
   int5 iVar39;
   undefined1 auVar43[16];
   undefined1 auVar44[16];
   undefined1 auVar45[16];
   undefined1 auVar46[16];
   undefined1 auVar47[16];
   undefined1 auVar49[16];
   undefined1 auVar50[16];
   undefined1 auVar54[16];
   undefined1 auVar58[16];
   uint uVar36;
   undefined6 uVar40;
   undefined1 auVar41[12];
   undefined1 auVar42[14];
   undefined1 auVar48[16];
   undefined1 auVar51[16];
   undefined1 auVar52[16];
   undefined1 auVar53[16];
   undefined1 auVar55[16];
   undefined1 auVar56[16];
   undefined1 auVar57[16];
   undefined1 auVar59[16];
   undefined1 auVar60[16];
   auVar46 = __LC5;
   auVar47 = __LC4;
   uVar30 = _UNK_0010173e;
   uVar29 = _UNK_0010173c;
   uVar28 = _UNK_0010173a;
   uVar27 = _UNK_00101738;
   uVar26 = _UNK_00101736;
   uVar25 = _UNK_00101734;
   uVar24 = _UNK_00101732;
   uVar23 = __LC3;
   pauVar33 = param_4;
   if (param_3 == 1) {
      if (0xf < param_2) {
         auVar47._2_2_ = _UNK_00101732;
         auVar47._0_2_ = __LC3;
         auVar47._4_2_ = _UNK_00101734;
         auVar47._6_2_ = _UNK_00101736;
         auVar47._8_2_ = _UNK_00101738;
         auVar47._10_2_ = _UNK_0010173a;
         auVar47._12_2_ = _UNK_0010173c;
         auVar47._14_2_ = _UNK_0010173e;
         uVar36 = ( param_2 - 0x10U >> 4 ) + 1;
         lVar37 = 0;
         do {
            psVar1 = (short*)( param_1 + lVar37 );
            auVar46 = psllw(*(undefined1(*) [16])( param_1 + lVar37 ), 4);
            auVar44._0_2_ = auVar46._0_2_ + *psVar1;
            auVar44._2_2_ = auVar46._2_2_ + psVar1[1];
            auVar44._4_2_ = auVar46._4_2_ + psVar1[2];
            auVar44._6_2_ = auVar46._6_2_ + psVar1[3];
            auVar44._8_2_ = auVar46._8_2_ + psVar1[4];
            auVar44._10_2_ = auVar46._10_2_ + psVar1[5];
            auVar44._12_2_ = auVar46._12_2_ + psVar1[6];
            auVar44._14_2_ = auVar46._14_2_ + psVar1[7];
            auVar46 = psllw(auVar44, 4);
            auVar46 = auVar46 & auVar47;
            auVar53._0_12_ = auVar46._0_12_;
            auVar53._12_2_ = auVar46._6_2_;
            auVar53._14_2_ = uVar26;
            auVar52._12_4_ = auVar53._12_4_;
            auVar52._0_10_ = auVar46._0_10_;
            auVar52._10_2_ = uVar25;
            auVar51._10_6_ = auVar52._10_6_;
            auVar51._0_8_ = auVar46._0_8_;
            auVar51._8_2_ = auVar46._4_2_;
            auVar50._8_8_ = auVar51._8_8_;
            auVar50._6_2_ = uVar24;
            auVar50._4_2_ = auVar46._2_2_;
            auVar50._0_2_ = auVar46._0_2_;
            auVar50._2_2_ = uVar23;
            puVar2 = (undefined2*)( param_4[1] + lVar37 * 2 );
            *puVar2 = auVar46._8_2_;
            puVar2[1] = uVar27;
            puVar2[2] = auVar46._10_2_;
            puVar2[3] = uVar28;
            puVar2[4] = auVar46._12_2_;
            puVar2[5] = uVar29;
            puVar2[6] = auVar46._14_2_;
            puVar2[7] = uVar30;
            *(undefined1(*) [16])( *param_4 + lVar37 * 2 ) = auVar50;
            lVar37 = lVar37 + 0x10;
         }
 while ( lVar37 != (ulong)uVar36 << 4 );
         iVar35 = uVar36 * 0x10;
         pauVar33 = param_4 + (ulong)uVar36 * 2;
         goto LAB_00100c8e;
      }

      LAB_00100e40:iVar35 = 0;
   }
 else {
      if (param_3 == 2) {
         if (param_2 < 0x10) goto LAB_00100e40;
         uVar32 = 0;
         uVar36 = ( param_2 - 0x10U >> 4 ) + 1;
         do {
            psVar1 = (short*)( param_1 + uVar32 );
            auVar44 = psllw(*(undefined1(*) [16])( param_1 + uVar32 ), 6);
            auVar45._0_2_ = auVar44._0_2_ + *psVar1;
            auVar45._2_2_ = auVar44._2_2_ + psVar1[1];
            auVar45._4_2_ = auVar44._4_2_ + psVar1[2];
            auVar45._6_2_ = auVar44._6_2_ + psVar1[3];
            auVar45._8_2_ = auVar44._8_2_ + psVar1[4];
            auVar45._10_2_ = auVar44._10_2_ + psVar1[5];
            auVar45._12_2_ = auVar44._12_2_ + psVar1[6];
            auVar45._14_2_ = auVar44._14_2_ + psVar1[7];
            auVar44 = psllw(auVar45, 2);
            auVar44 = auVar44 & auVar47;
            auVar49._0_4_ = auVar44._0_4_ >> 0xc;
            auVar49._4_4_ = auVar44._4_4_ >> 0xc;
            auVar49._8_4_ = auVar44._8_4_ >> 0xc;
            auVar49._12_4_ = auVar44._12_4_ >> 0xc;
            *(undefined1(*) [16])( *param_4 + uVar32 ) = auVar44 | auVar49 | auVar46;
            uVar32 = uVar32 + 0x10;
         }
 while ( uVar32 != (ulong)uVar36 << 4 );
      }
 else {
         if (param_3 == 0) {
            iVar35 = 0;
            if (0xf < param_2) {
               uVar36 = ( param_2 - 0x10U >> 4 ) + 1;
               pauVar33 = param_4 + (ulong)uVar36 * 4;
               puVar38 = param_1;
               do {
                  uVar6 = *puVar38;
                  puVar7 = puVar38 + 1;
                  puVar8 = puVar38 + 2;
                  puVar9 = puVar38 + 3;
                  puVar10 = puVar38 + 4;
                  puVar11 = puVar38 + 5;
                  bVar12 = puVar38[8];
                  uVar13 = puVar38[9];
                  puVar14 = puVar38 + 10;
                  bVar15 = puVar38[0xb];
                  puVar16 = puVar38 + 0xc;
                  puVar17 = puVar38 + 0xd;
                  puVar18 = puVar38 + 0xe;
                  puVar19 = puVar38 + 0xf;
                  pauVar31 = param_4 + 4;
                  puVar38 = puVar38 + 0x10;
                  auVar20[10] = 0;
                  auVar20._0_10_ = SUB1610((undefined1[16])0x0, 0);
                  auVar20[0xb] = *puVar11;
                  auVar21[9] = *puVar10;
                  auVar21._0_9_ = SUB169((undefined1[16])0x0, 0);
                  auVar21._10_2_ = auVar20._10_2_;
                  auVar22._9_3_ = auVar21._9_3_;
                  auVar22._0_9_ = (unkuint9)0;
                  auVar47 = ZEXT516(CONCAT41(auVar22._8_4_, *puVar9)) << 0x38;
                  auVar4._1_10_ = auVar47._6_10_;
                  auVar4[0] = *puVar8;
                  auVar4._11_5_ = 0;
                  auVar3._1_12_ = SUB1612(auVar4 << 0x28, 4);
                  auVar3[0] = *puVar7;
                  auVar3._13_3_ = 0;
                  auVar46._1_14_ = SUB1614(auVar3 << 0x18, 2);
                  auVar46[0] = uVar6;
                  auVar46[0xf] = 0;
                  auVar46 = auVar46 << 8;
                  iVar39 = (uint5)CONCAT12(uVar13, (ushort)bVar12) << 8;
                  uVar40 = CONCAT15(*puVar14, iVar39);
                  auVar41._0_10_ = CONCAT19(*puVar16, (unkuint9)bVar15 << 0x38);
                  auVar41[10] = 0;
                  auVar41[0xb] = *puVar17;
                  auVar42[0xc] = 0;
                  auVar42._0_12_ = auVar41;
                  auVar42[0xd] = *puVar18;
                  auVar48[0xe] = 0;
                  auVar48._0_14_ = auVar42;
                  auVar48[0xf] = *puVar19;
                  auVar60._0_12_ = auVar46._0_12_;
                  auVar60._12_2_ = auVar47._6_2_;
                  auVar60._14_2_ = uVar26;
                  auVar59._12_4_ = auVar60._12_4_;
                  auVar59._0_10_ = auVar46._0_10_;
                  auVar59._10_2_ = uVar25;
                  auVar58._10_6_ = auVar59._10_6_;
                  auVar58._0_8_ = auVar46._0_8_;
                  auVar58._8_2_ = SUB162(auVar4 << 0x28, 4);
                  auVar5._7_8_ = auVar58._8_8_;
                  auVar5._5_2_ = uVar24;
                  auVar5._3_2_ = SUB162(auVar3 << 0x18, 2);
                  auVar5._1_2_ = uVar23;
                  auVar5[0] = uVar6;
                  auVar5[0xf] = 0;
                  *param_4 = auVar5 << 8;
                  auVar57._12_2_ = (short)( ( (ulong)bVar15 << 0x38 ) >> 0x30 );
                  auVar57._0_12_ = auVar41;
                  auVar57._14_2_ = uVar26;
                  auVar56._12_4_ = auVar57._12_4_;
                  auVar56._10_2_ = uVar25;
                  auVar56._0_10_ = auVar41._0_10_;
                  auVar55._8_8_ = ( undefined8 )(CONCAT63(auVar56._10_6_, CONCAT21((short)( (uint6)uVar40 >> 0x20 ), bVar15)) >> 8);
                  auVar55._6_2_ = uVar24;
                  auVar55._0_6_ = uVar40;
                  auVar54._6_10_ = auVar55._6_10_;
                  auVar54._4_2_ = (short)( CONCAT12(uVar13, (ushort)bVar12) >> 8 );
                  auVar54._0_2_ = (undefined2)iVar39;
                  auVar54._2_2_ = uVar23;
                  *(short*)param_4[1] = auVar22._8_2_;
                  *(undefined2*)( param_4[1] + 2 ) = uVar27;
                  *(short*)( param_4[1] + 4 ) = auVar20._10_2_;
                  *(undefined2*)( param_4[1] + 6 ) = uVar28;
                  *(undefined2*)( param_4[1] + 8 ) = 0;
                  *(undefined2*)( param_4[1] + 10 ) = uVar29;
                  *(undefined2*)( param_4[1] + 0xc ) = 0;
                  *(undefined2*)( param_4[1] + 0xe ) = uVar30;
                  param_4[2] = auVar54;
                  *(short*)param_4[3] = (short)( auVar41._0_10_ >> 0x40 );
                  *(undefined2*)( param_4[3] + 2 ) = uVar27;
                  *(short*)( param_4[3] + 4 ) = auVar41._10_2_;
                  *(undefined2*)( param_4[3] + 6 ) = uVar28;
                  *(short*)( param_4[3] + 8 ) = auVar42._12_2_;
                  *(undefined2*)( param_4[3] + 10 ) = uVar29;
                  *(short*)( param_4[3] + 0xc ) = auVar48._14_2_;
                  *(undefined2*)( param_4[3] + 0xe ) = uVar30;
                  param_4 = pauVar31;
               }
 while ( pauVar33 != pauVar31 );
               iVar35 = uVar36 * 0x10;
            }

            goto LAB_00100c8e;
         }

         if (param_2 < 0x10) goto LAB_00100e40;
         uVar32 = 0;
         uVar36 = ( param_2 - 0x10U >> 4 ) + 1;
         do {
            lVar37 = *(long*)( (long)( param_1 + uVar32 * 2 ) + 8 );
            auVar43._0_8_ = *(long*)( param_1 + uVar32 * 2 ) << 7;
            auVar43._8_8_ = lVar37 << 7;
            uVar34 = ( uint )(ushort)(( ushort )(SUB161(auVar43 >> 7, 0) & 1) | ( ushort )(SUB161(auVar43 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar43 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar43 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar43 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar43 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar43 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar43 >> 0x3f, 0) & 1) << 7 | ( ushort )((byte)lVar37 & 1) << 8 | ( ushort )(( byte )(auVar43._8_8_ >> 0xf) & 1) << 9 | ( ushort )(( byte )(auVar43._8_8_ >> 0x17) & 1) << 10 | ( ushort )(( byte )(auVar43._8_8_ >> 0x1f) & 1) << 0xb | ( ushort )(( byte )(auVar43._8_8_ >> 0x27) & 1) << 0xc | ( ushort )(( byte )(auVar43._8_8_ >> 0x2f) & 1) << 0xd | ( ushort )(( byte )(auVar43._8_8_ >> 0x37) & 1) << 0xe | ( ushort )(byte)(auVar43._8_8_ >> 0x3f) << 0xf);
            *(uint*)( *param_4 + uVar32 + 4 ) = uVar34 & 0xff00 | 0xff000000;
            *(uint*)( *param_4 + uVar32 ) = ( uVar34 & 0xff ) << 8 | 0xff000000;
            uVar32 = uVar32 + 8;
         }
 while ( uVar32 != uVar36 * 8 );
      }

      iVar35 = uVar36 << 4;
      pauVar33 = (undefined1(*) [16])( *param_4 + uVar32 );
   }

   LAB_00100c8e:if (iVar35 == param_2) {
      return;
   }

   VP8LBundleColorMap_C(param_1 + iVar35, param_2 - iVar35, param_3, pauVar33);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void CollectColorRedTransforms_SSE2(undefined1 (*param_1)[16], int param_2, uint param_3, int param_4, int param_5, long param_6) {
   int *piVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1(*pauVar5)[16];
   ushort uVar6;
   undefined1(*pauVar7)[16];
   ushort *puVar8;
   int iVar9;
   long in_FS_OFFSET;
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 local_58[16];
   ushort local_48[4];
   long local_40;
   auVar4 = __LC7;
   auVar3 = __LC6;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = (short)( param_5 << 8 ) >> 5;
   if (0 < param_4) {
      iVar9 = 0;
      auVar14._2_2_ = 0;
      auVar14._0_2_ = uVar6;
      auVar14._4_2_ = uVar6;
      auVar14._6_2_ = 0;
      auVar14._8_2_ = uVar6;
      auVar14._10_2_ = 0;
      auVar14._12_2_ = uVar6;
      auVar14._14_2_ = 0;
      pauVar7 = param_1;
      do {
         if (7 < (int)param_3) {
            do {
               pauVar5 = pauVar7;
               do {
                  auVar13 = *pauVar5;
                  auVar2 = pauVar5[1];
                  auVar12 = pmulhw(auVar13 & auVar3, auVar14);
                  auVar11 = pmulhw(auVar2 & auVar3, auVar14);
                  for (int i = 0; i < 4; i++) {
                     auVar10[( 4*i )] = auVar13[( 4*i + 2 )] - auVar12[( 4*i )];
                     auVar10[( 4*i + 1 )] = auVar13[( 4*i + 3 )] - auVar12[( 4*i + 1 )];
                     auVar10[( 4*i + 2 )] = -auVar12[2];
                     auVar10[( 4*i + 3 )] = -auVar12[3];
                  }

                  for (int i = 0; i < 4; i++) {
                     auVar13[( 4*i )] = auVar2[( 4*i + 2 )] - auVar11[( 4*i )];
                     auVar13[( 4*i + 1 )] = auVar2[( 4*i + 3 )] - auVar11[( 4*i + 1 )];
                     auVar13[( 4*i + 2 )] = -auVar11[2];
                     auVar13[( 4*i + 3 )] = -auVar11[3];
                  }

                  local_58 = packssdw(auVar10 & auVar4, auVar13 & auVar4);
                  puVar8 = (ushort*)local_58;
                  do {
                     uVar6 = *puVar8;
                     puVar8 = puVar8 + 1;
                     piVar1 = (int*)( param_6 + (ulong)uVar6 * 4 );
                     *piVar1 = *piVar1 + 1;
                  }
 while ( puVar8 != local_48 );
                  pauVar5 = pauVar5 + 2;
               }
 while ( pauVar7 + ( ulong )(( param_3 - 8 >> 3 ) + 1) * 2 != pauVar5 );
               iVar9 = iVar9 + 1;
               pauVar7 = (undefined1(*) [16])( *pauVar7 + (long)param_2 * 4 );
            }
 while ( param_4 != iVar9 );
            break;
         }

         iVar9 = iVar9 + 1;
         pauVar7 = (undefined1(*) [16])( *pauVar7 + (long)param_2 * 4 );
      }
 while ( param_4 != iVar9 );
   }

   if (( param_3 & 7 ) == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      VP8LCollectColorRedTransforms_C((long)param_1 + ( (long)(int)param_3 - (long)(int)( param_3 & 7 ) ) * 4, param_2, param_3 & 7, param_4, param_5);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void CollectColorBlueTransforms_SSE2(undefined1 (*param_1)[16], int param_2, uint param_3, int param_4, int param_5, int param_6, long param_7) {
   int *piVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   ushort uVar5;
   uint uVar6;
   undefined1(*pauVar7)[16];
   ushort *puVar8;
   int iVar9;
   undefined1(*pauVar10)[16];
   long in_FS_OFFSET;
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 local_58[16];
   ushort local_48[4];
   long local_40;
   auVar4 = __LC7;
   auVar3 = __LC6;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar9 = ( uint )(ushort)((short)( param_6 << 8 ) >> 5) * 0x10000;
   uVar5 = (short)( param_5 << 8 ) >> 5;
   if (0 < param_4) {
      auVar15._2_2_ = 0;
      auVar15._0_2_ = uVar5;
      auVar16._4_4_ = iVar9;
      auVar16._0_4_ = iVar9;
      auVar16._8_4_ = iVar9;
      auVar16._12_4_ = iVar9;
      auVar15._4_2_ = uVar5;
      auVar15._6_2_ = 0;
      auVar15._8_2_ = uVar5;
      auVar15._10_2_ = 0;
      auVar15._12_2_ = uVar5;
      auVar15._14_2_ = 0;
      iVar9 = 0;
      pauVar7 = param_1;
      do {
         if (7 < (int)param_3) {
            do {
               pauVar10 = pauVar7;
               do {
                  auVar11 = *pauVar10;
                  auVar2 = pauVar10[1];
                  auVar13 = psllw(auVar11, 8);
                  auVar12 = psllw(auVar2, 8);
                  auVar14 = pmulhw(auVar13, auVar16);
                  auVar13 = pmulhw(auVar12, auVar16);
                  auVar18 = pmulhw(auVar11 & auVar3, auVar15);
                  auVar17 = pmulhw(auVar2 & auVar3, auVar15);
                  for (int i = 0; i < 4; i++) {
                     auVar12[( 4*i )] = auVar11[( 4*i )] - ( auVar14[( 4*i + 2 )] + auVar18[( 4*i )] );
                     auVar12[( 4*i + 1 )] = auVar11[( 4*i + 1 )] - ( auVar14[( 4*i + 3 )] + auVar18[( 4*i + 1 )] );
                     auVar12[( 4*i + 2 )] = auVar11[( 4*i + 2 )] - auVar18[( 4*i + 2 )];
                     auVar12[( 4*i + 3 )] = auVar11[( 4*i + 3 )] - auVar18[( 4*i + 3 )];
                  }

                  for (int i = 0; i < 4; i++) {
                     auVar11[( 4*i )] = auVar2[( 4*i )] - ( auVar13[( 4*i + 2 )] + auVar17[( 4*i )] );
                     auVar11[( 4*i + 1 )] = auVar2[( 4*i + 1 )] - ( auVar13[( 4*i + 3 )] + auVar17[( 4*i + 1 )] );
                     auVar11[( 4*i + 2 )] = auVar2[( 4*i + 2 )] - auVar17[( 4*i + 2 )];
                     auVar11[( 4*i + 3 )] = auVar2[( 4*i + 3 )] - auVar17[( 4*i + 3 )];
                  }

                  local_58 = packssdw(auVar12 & auVar4, auVar11 & auVar4);
                  puVar8 = (ushort*)local_58;
                  do {
                     uVar5 = *puVar8;
                     puVar8 = puVar8 + 1;
                     piVar1 = (int*)( param_7 + (ulong)uVar5 * 4 );
                     *piVar1 = *piVar1 + 1;
                  }
 while ( puVar8 != local_48 );
                  pauVar10 = pauVar10 + 2;
               }
 while ( pauVar7 + ( ulong )(( param_3 - 8 >> 3 ) + 1) * 2 != pauVar10 );
               iVar9 = iVar9 + 1;
               pauVar7 = (undefined1(*) [16])( *pauVar7 + (long)param_2 * 4 );
            }
 while ( param_4 != iVar9 );
            break;
         }

         iVar9 = iVar9 + 1;
         pauVar7 = (undefined1(*) [16])( *pauVar7 + (long)param_2 * 4 );
      }
 while ( param_4 != iVar9 );
   }

   uVar6 = param_3 & 7;
   if (uVar6 == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      VP8LCollectColorBlueTransforms_C((long)param_1 + ( (long)(int)param_3 - (long)(int)uVar6 ) * 4, param_2, uVar6, param_4, param_5, param_6);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void TransformColor_SSE2(char *param_1, undefined1 (*param_2)[16], int param_3) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
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
   uint uVar19;
   int iVar20;
   undefined1(*pauVar21)[16];
   undefined1(*pauVar22)[16];
   uint uVar23;
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   bVar18 = UNK_0010178f;
   bVar17 = UNK_0010178e;
   bVar16 = UNK_0010178d;
   bVar15 = UNK_0010178c;
   bVar14 = UNK_0010178b;
   bVar13 = UNK_0010178a;
   bVar12 = UNK_00101789;
   bVar11 = UNK_00101788;
   bVar10 = UNK_00101787;
   bVar9 = UNK_00101786;
   bVar8 = UNK_00101785;
   bVar7 = UNK_00101784;
   bVar6 = UNK_00101783;
   bVar5 = UNK_00101782;
   bVar4 = UNK_00101781;
   bVar3 = _LC8;
   auVar2 = __LC3;
   uVar19 = ( uint )(ushort)(short) * param_1 << 0x13 | ( (ushort)(short)param_1[1] & 0x1fff ) << 3;
   iVar20 = (uint)(ushort)(short)param_1[2] * 0x80000;
   if (param_3 < 4) {
      iVar20 = 0;
   }
 else {
      uVar23 = param_3 - 4U >> 2;
      pauVar21 = param_2;
      do {
         auVar1 = *pauVar21;
         pauVar22 = pauVar21 + 1;
         auVar24 = psllw(auVar1, 8);
         auVar26 = pshuflw(auVar1 & auVar2, auVar1 & auVar2, 0xa0);
         auVar25._4_4_ = iVar20;
         auVar25._0_4_ = iVar20;
         auVar25._8_4_ = iVar20;
         auVar25._12_4_ = iVar20;
         auVar25 = pmulhw(auVar24, auVar25);
         auVar26 = pshufhw(auVar26, auVar26, 0xa0);
         auVar24._4_4_ = uVar19;
         auVar24._0_4_ = uVar19;
         auVar24._8_4_ = uVar19;
         auVar24._12_4_ = uVar19;
         auVar24 = pmulhw(auVar26, auVar24);
         ( *pauVar21 )[0] = auVar1[0] - ( auVar25[2] + auVar24[0] & bVar3 );
         ( *pauVar21 )[1] = auVar1[1] - ( auVar25[3] + auVar24[1] & bVar4 );
         ( *pauVar21 )[2] = auVar1[2] - ( auVar24[2] & bVar5 );
         ( *pauVar21 )[3] = auVar1[3] - ( auVar24[3] & bVar6 );
         ( *pauVar21 )[4] = auVar1[4] - ( auVar25[6] + auVar24[4] & bVar7 );
         ( *pauVar21 )[5] = auVar1[5] - ( auVar25[7] + auVar24[5] & bVar8 );
         ( *pauVar21 )[6] = auVar1[6] - ( auVar24[6] & bVar9 );
         ( *pauVar21 )[7] = auVar1[7] - ( auVar24[7] & bVar10 );
         ( *pauVar21 )[8] = auVar1[8] - ( auVar25[10] + auVar24[8] & bVar11 );
         ( *pauVar21 )[9] = auVar1[9] - ( auVar25[0xb] + auVar24[9] & bVar12 );
         ( *pauVar21 )[10] = auVar1[10] - ( auVar24[10] & bVar13 );
         ( *pauVar21 )[0xb] = auVar1[0xb] - ( auVar24[0xb] & bVar14 );
         ( *pauVar21 )[0xc] = auVar1[0xc] - ( auVar25[0xe] + auVar24[0xc] & bVar15 );
         ( *pauVar21 )[0xd] = auVar1[0xd] - ( auVar25[0xf] + auVar24[0xd] & bVar16 );
         ( *pauVar21 )[0xe] = auVar1[0xe] - ( auVar24[0xe] & bVar17 );
         ( *pauVar21 )[0xf] = auVar1[0xf] - ( auVar24[0xf] & bVar18 );
         pauVar21 = pauVar22;
      }
 while ( pauVar22 != param_2 + (ulong)uVar23 + 1 );
      iVar20 = uVar23 * 4 + 4;
   }

   if (param_3 == iVar20) {
      return;
   }

   VP8LTransformColor_C(param_1, *param_2 + (long)iVar20 * 4, param_3 - iVar20);
   return;
}
void SubtractGreenFromBlueAndRed_SSE2(undefined1 (*param_1)[16], int param_2) {
   undefined1 auVar1[16];
   int iVar2;
   undefined1(*pauVar3)[16];
   undefined1(*pauVar4)[16];
   uint uVar5;
   undefined1 auVar6[16];
   if (param_2 < 4) {
      iVar2 = 0;
   }
 else {
      uVar5 = param_2 - 4U >> 2;
      pauVar3 = param_1;
      do {
         auVar1 = *pauVar3;
         pauVar4 = pauVar3 + 1;
         auVar6._0_2_ = auVar1._0_2_ >> 8;
         auVar6._2_2_ = auVar1._2_2_ >> 8;
         auVar6._4_2_ = auVar1._4_2_ >> 8;
         auVar6._6_2_ = auVar1._6_2_ >> 8;
         auVar6._8_2_ = auVar1._8_2_ >> 8;
         auVar6._10_2_ = auVar1._10_2_ >> 8;
         auVar6._12_2_ = auVar1._12_2_ >> 8;
         auVar6._14_2_ = auVar1._14_2_ >> 8;
         auVar6 = pshuflw(auVar6, auVar6, 0xa0);
         auVar6 = pshufhw(auVar6, auVar6, 0xa0);
         for (int i = 0; i < 16; i++) {
            ( *pauVar3 )[i] = auVar1[i] - auVar6[i];
         }

         pauVar3 = pauVar4;
      }
 while ( pauVar4 != param_1 + (ulong)uVar5 + 1 );
      iVar2 = uVar5 * 4 + 4;
   }

   if (param_2 == iVar2) {
      return;
   }

   VP8LSubtractGreenFromBlueAndRed_C(*param_1 + (long)iVar2 * 4, param_2 - iVar2);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 CombinedShannonEntropy_SSE2(long param_1, long param_2) {
   uint *puVar1;
   ushort uVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   long lVar6;
   uint uVar7;
   long lVar8;
   float fVar9;
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined8 extraout_XMM0_Qb;
   float fVar12;
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   uint local_44;
   fVar12 = 0.0;
   lVar6 = 0;
   uVar5 = 0;
   local_44 = 0;
   do {
      auVar10 = packssdw(*(undefined1(*) [16])( param_1 + 0x20 + lVar6 * 4 ), *(undefined1(*) [16])( param_1 + 0x30 + lVar6 * 4 ));
      auVar13 = packssdw(*(undefined1(*) [16])( param_1 + lVar6 * 4 ), *(undefined1(*) [16])( param_1 + 0x10 + lVar6 * 4 ));
      auVar13 = packsswb(auVar13, auVar10);
      auVar14 = packssdw(*(undefined1(*) [16])( param_2 + 0x20 + lVar6 * 4 ), *(undefined1(*) [16])( param_2 + 0x30 + lVar6 * 4 ));
      auVar10 = packssdw(*(undefined1(*) [16])( param_2 + lVar6 * 4 ), *(undefined1(*) [16])( param_2 + 0x10 + lVar6 * 4 ));
      auVar10 = packsswb(auVar10, auVar14);
      for (int i = 0; i < 16; i++) {
         auVar14[i] = -('\0' < auVar13[0]);
      }

      for (int i = 0; i < 16; i++) {
         auVar13[i] = -('\0' < auVar10[0]);
      }

      uVar2 = ( ushort )(SUB161(auVar14 >> 7, 0) & 1) | ( ushort )(SUB161(auVar14 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar14 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar14 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar14 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar14 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar14 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar14 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar14 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar14 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar14 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar14 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar14 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar14 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar14 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar14[0xf] >> 7) << 0xf;
      for (uVar7 = ( uint )(ushort)(( ushort )(SUB161(auVar13 >> 7, 0) & 1) | ( ushort )(SUB161(auVar13 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar13 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar13 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar13 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar13 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar13 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar13 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar13 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar13 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar13 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar13 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar13 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar13 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar13 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar13[0xf] >> 7) << 0xf | uVar2); uVar7 != 0; uVar7 = uVar7 & uVar7 - 1) {
         while (true) {
            uVar3 = 0;
            for (uVar4 = uVar7; ( uVar4 & 1 ) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
               uVar3 = uVar3 + 1;
            }

            lVar8 = (long)(int)( (int)lVar6 + uVar3 );
            puVar1 = (uint*)( param_1 + lVar8 * 4 );
            uVar4 = *puVar1;
            if (( uVar2 >> ( uVar3 & 0x1f ) & 1 ) != 0) {
               local_44 = local_44 + uVar4;
               if (uVar4 < 0x100) {
                  fVar9 = *(float*)( &kSLog2Table + (ulong)uVar4 * 4 );
               }
 else {
                  fVar9 = (float)( *_VP8LFastSLog2Slow )();
                  uVar4 = *puVar1;
               }

               fVar12 = fVar12 - fVar9;
            }

            uVar4 = uVar4 + *(int*)( param_2 + lVar8 * 4 );
            uVar5 = uVar5 + uVar4;
            if (uVar4 < 0x100) break;
            fVar9 = (float)( *_VP8LFastSLog2Slow )();
            fVar12 = fVar12 - fVar9;
            uVar7 = uVar7 & uVar7 - 1;
            if (uVar7 == 0) goto LAB_00101478;
         }
;
         fVar12 = fVar12 - *(float*)( &kSLog2Table + (ulong)uVar4 * 4 );
      }

      LAB_00101478:lVar6 = lVar6 + 0x10;
      if (lVar6 == 0x100) {
         if (uVar5 < 0x100) {
            fVar9 = *(float*)( &kSLog2Table + (ulong)uVar5 * 4 );
         }
 else {
            fVar9 = (float)( *_VP8LFastSLog2Slow )(uVar5);
         }

         if (local_44 < 0x100) {
            auVar10 = ZEXT416(*(uint*)( &kSLog2Table + (ulong)local_44 * 4 ));
         }
 else {
            auVar10._0_8_ = ( *_VP8LFastSLog2Slow )(local_44);
            auVar10._8_8_ = extraout_XMM0_Qb;
         }

         auVar11._4_12_ = auVar10._4_12_;
         auVar11._0_4_ = auVar10._0_4_ + fVar9 + fVar12;
         return auVar11._0_8_;
      }

   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void VP8LEncDspInitSSE2(void) {
   _VP8LSubtractGreenFromBlueAndRed = SubtractGreenFromBlueAndRed_SSE2;
   _VP8LTransformColor = TransformColor_SSE2;
   _VP8LCollectColorBlueTransforms = CollectColorBlueTransforms_SSE2;
   _VP8LCollectColorRedTransforms = CollectColorRedTransforms_SSE2;
   _VP8LAddVector = 0x100000;
   _VP8LAddVectorEq = AddVectorEq_SSE2;
   _VP8LCombinedShannonEntropy = CombinedShannonEntropy_SSE2;
   _VP8LVectorMismatch = VectorMismatch_SSE2;
   _VP8LBundleColorMap = BundleColorMap_SSE2;
   _DAT_00102100 = PredictorSub0_SSE2;
   pcRam0000000000102108 = PredictorSub0_SSE2;
   _VP8LPredictorsSub = PredictorSub0_SSE2;
   pcRam0000000000102098 = PredictorSub1_SSE2;
   _DAT_001020a0 = PredictorSub2_SSE2;
   pcRam00000000001020a8 = PredictorSub3_SSE2;
   _DAT_001020b0 = PredictorSub4_SSE2;
   pcRam00000000001020b8 = PredictorSub5_SSE2;
   _DAT_001020c0 = PredictorSub6_SSE2;
   pcRam00000000001020c8 = PredictorSub7_SSE2;
   _DAT_001020d0 = PredictorSub8_SSE2;
   pcRam00000000001020d8 = PredictorSub9_SSE2;
   _DAT_001020e0 = PredictorSub10_SSE2;
   pcRam00000000001020e8 = PredictorSub11_SSE2;
   _DAT_001020f0 = PredictorSub12_SSE2;
   pcRam00000000001020f8 = PredictorSub13_SSE2;
   return;
}


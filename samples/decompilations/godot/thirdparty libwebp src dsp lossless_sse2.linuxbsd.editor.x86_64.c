
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PredictorAdd0_SSE2(long param_1,undefined8 param_2,int param_3,long param_4)

{
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
  
  cVar34 = UNK_001017af;
  cVar33 = UNK_001017ae;
  cVar32 = UNK_001017ad;
  cVar31 = UNK_001017ac;
  cVar30 = UNK_001017ab;
  cVar29 = UNK_001017aa;
  cVar28 = UNK_001017a9;
  cVar27 = UNK_001017a8;
  cVar26 = UNK_001017a7;
  cVar25 = UNK_001017a6;
  cVar24 = UNK_001017a5;
  cVar23 = UNK_001017a4;
  cVar22 = UNK_001017a3;
  cVar21 = UNK_001017a2;
  cVar20 = UNK_001017a1;
  cVar19 = _LC0;
  if (param_3 < 4) {
    iVar35 = 0;
  }
  else {
    uVar1 = (param_3 - 4U >> 2) + 1;
    lVar36 = 0;
    do {
      pcVar2 = (char *)(param_1 + lVar36);
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
      pcVar3 = (char *)(param_4 + lVar36);
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
    } while (lVar36 != (ulong)uVar1 << 4);
    iVar35 = uVar1 * 4;
  }
  if (param_3 != iVar35) {
                    /* WARNING: Could not recover jumptable at 0x0010005b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_VP8LPredictorsAdd_C)
              (param_1 + (long)iVar35 * 4,0,param_3 - iVar35,param_4 + (long)iVar35 * 4);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PredictorAdd2_SSE2(long param_1,long param_2,int param_3,long param_4)

{
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
    uVar1 = (param_3 - 4U >> 2) + 1;
    lVar36 = 0;
    do {
      pcVar2 = (char *)(param_2 + lVar36);
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
      pcVar3 = (char *)(param_1 + lVar36);
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
      pcVar4 = (char *)(param_4 + lVar36);
      *pcVar4 = *pcVar2 + *pcVar3;
      pcVar4[1] = cVar5 + cVar20;
      pcVar4[2] = cVar6 + cVar21;
      pcVar4[3] = cVar7 + cVar22;
      pcVar4[4] = cVar8 + cVar23;
      pcVar4[5] = cVar9 + cVar24;
      pcVar4[6] = cVar10 + cVar25;
      pcVar4[7] = cVar11 + cVar26;
      pcVar4[8] = cVar12 + cVar27;
      pcVar4[9] = cVar13 + cVar28;
      pcVar4[10] = cVar14 + cVar29;
      pcVar4[0xb] = cVar15 + cVar30;
      pcVar4[0xc] = cVar16 + cVar31;
      pcVar4[0xd] = cVar17 + cVar32;
      pcVar4[0xe] = cVar18 + cVar33;
      pcVar4[0xf] = cVar19 + cVar34;
      lVar36 = lVar36 + 0x10;
    } while (lVar36 != (ulong)uVar1 << 4);
    iVar35 = uVar1 * 4;
  }
  if (param_3 != iVar35) {
    lVar36 = (long)iVar35 * 4;
                    /* WARNING: Could not recover jumptable at 0x001000d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_VP8LConvertBGRAToRGB565_C)
              (param_1 + lVar36,param_2 + lVar36,param_3 - iVar35,param_4 + lVar36);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PredictorAdd3_SSE2(long param_1,long param_2,int param_3,long param_4)

{
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
    uVar1 = (param_3 - 4U >> 2) + 1;
    lVar36 = 0;
    do {
      pcVar4 = (char *)(param_2 + 4 + lVar36);
      cVar5 = pcVar4[1];
      cVar6 = pcVar4[2];
      cVar7 = pcVar4[3];
      cVar8 = pcVar4[4];
      cVar9 = pcVar4[5];
      cVar10 = pcVar4[6];
      cVar11 = pcVar4[7];
      cVar12 = pcVar4[8];
      cVar13 = pcVar4[9];
      cVar14 = pcVar4[10];
      cVar15 = pcVar4[0xb];
      cVar16 = pcVar4[0xc];
      cVar17 = pcVar4[0xd];
      cVar18 = pcVar4[0xe];
      cVar19 = pcVar4[0xf];
      pcVar2 = (char *)(param_1 + lVar36);
      cVar20 = pcVar2[1];
      cVar21 = pcVar2[2];
      cVar22 = pcVar2[3];
      cVar23 = pcVar2[4];
      cVar24 = pcVar2[5];
      cVar25 = pcVar2[6];
      cVar26 = pcVar2[7];
      cVar27 = pcVar2[8];
      cVar28 = pcVar2[9];
      cVar29 = pcVar2[10];
      cVar30 = pcVar2[0xb];
      cVar31 = pcVar2[0xc];
      cVar32 = pcVar2[0xd];
      cVar33 = pcVar2[0xe];
      cVar34 = pcVar2[0xf];
      pcVar3 = (char *)(param_4 + lVar36);
      *pcVar3 = *pcVar4 + *pcVar2;
      pcVar3[1] = cVar5 + cVar20;
      pcVar3[2] = cVar6 + cVar21;
      pcVar3[3] = cVar7 + cVar22;
      pcVar3[4] = cVar8 + cVar23;
      pcVar3[5] = cVar9 + cVar24;
      pcVar3[6] = cVar10 + cVar25;
      pcVar3[7] = cVar11 + cVar26;
      pcVar3[8] = cVar12 + cVar27;
      pcVar3[9] = cVar13 + cVar28;
      pcVar3[10] = cVar14 + cVar29;
      pcVar3[0xb] = cVar15 + cVar30;
      pcVar3[0xc] = cVar16 + cVar31;
      pcVar3[0xd] = cVar17 + cVar32;
      pcVar3[0xe] = cVar18 + cVar33;
      pcVar3[0xf] = cVar19 + cVar34;
      lVar36 = lVar36 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar36);
    iVar35 = uVar1 * 4;
  }
  if (param_3 != iVar35) {
    lVar36 = (long)iVar35 * 4;
                    /* WARNING: Could not recover jumptable at 0x0010014a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_VP8LConvertBGRAToRGBA4444_C)
              (param_1 + lVar36,param_2 + lVar36,param_3 - iVar35,param_4 + lVar36);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PredictorAdd4_SSE2(long param_1,long param_2,int param_3,long param_4)

{
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
    uVar1 = (param_3 - 4U >> 2) + 1;
    lVar36 = 0;
    do {
      pcVar4 = (char *)(param_2 + -4 + lVar36);
      cVar5 = pcVar4[1];
      cVar6 = pcVar4[2];
      cVar7 = pcVar4[3];
      cVar8 = pcVar4[4];
      cVar9 = pcVar4[5];
      cVar10 = pcVar4[6];
      cVar11 = pcVar4[7];
      cVar12 = pcVar4[8];
      cVar13 = pcVar4[9];
      cVar14 = pcVar4[10];
      cVar15 = pcVar4[0xb];
      cVar16 = pcVar4[0xc];
      cVar17 = pcVar4[0xd];
      cVar18 = pcVar4[0xe];
      cVar19 = pcVar4[0xf];
      pcVar2 = (char *)(param_1 + lVar36);
      cVar20 = pcVar2[1];
      cVar21 = pcVar2[2];
      cVar22 = pcVar2[3];
      cVar23 = pcVar2[4];
      cVar24 = pcVar2[5];
      cVar25 = pcVar2[6];
      cVar26 = pcVar2[7];
      cVar27 = pcVar2[8];
      cVar28 = pcVar2[9];
      cVar29 = pcVar2[10];
      cVar30 = pcVar2[0xb];
      cVar31 = pcVar2[0xc];
      cVar32 = pcVar2[0xd];
      cVar33 = pcVar2[0xe];
      cVar34 = pcVar2[0xf];
      pcVar3 = (char *)(param_4 + lVar36);
      *pcVar3 = *pcVar4 + *pcVar2;
      pcVar3[1] = cVar5 + cVar20;
      pcVar3[2] = cVar6 + cVar21;
      pcVar3[3] = cVar7 + cVar22;
      pcVar3[4] = cVar8 + cVar23;
      pcVar3[5] = cVar9 + cVar24;
      pcVar3[6] = cVar10 + cVar25;
      pcVar3[7] = cVar11 + cVar26;
      pcVar3[8] = cVar12 + cVar27;
      pcVar3[9] = cVar13 + cVar28;
      pcVar3[10] = cVar14 + cVar29;
      pcVar3[0xb] = cVar15 + cVar30;
      pcVar3[0xc] = cVar16 + cVar31;
      pcVar3[0xd] = cVar17 + cVar32;
      pcVar3[0xe] = cVar18 + cVar33;
      pcVar3[0xf] = cVar19 + cVar34;
      lVar36 = lVar36 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar36);
    iVar35 = uVar1 * 4;
  }
  if (param_3 != iVar35) {
    lVar36 = (long)iVar35 * 4;
                    /* WARNING: Could not recover jumptable at 0x001001ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_VP8LConvertBGRAToRGBA_C)(param_1 + lVar36,param_2 + lVar36,param_3 - iVar35,param_4 + lVar36)
    ;
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertBGRAToBGR_SSE2(ulong *param_1,int param_2,ulong *param_3)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar11 = _UNK_001017c8;
  uVar10 = __LC2;
  uVar9 = _UNK_001017b8;
  uVar8 = __LC1;
  iVar2 = param_2 * 3;
  uVar1 = (long)param_3 + 0x1a;
  puVar7 = param_3;
  while (uVar1 <= (ulong)((long)iVar2 + (long)param_3)) {
    uVar4 = param_1[1];
    uVar1 = param_1[2];
    uVar3 = param_1[3];
    param_2 = param_2 + -8;
    uVar5 = param_1[2];
    uVar6 = param_1[3];
    *puVar7 = *param_1 & uVar10 | (*param_1 & uVar8) >> 8;
    *(ulong *)((long)puVar7 + 6) = uVar4 & uVar11 | (uVar4 & uVar9) >> 8;
    *(ulong *)((long)puVar7 + 0xc) = uVar5 & uVar10 | (uVar1 & uVar8) >> 8;
    *(ulong *)((long)puVar7 + 0x12) = uVar6 & uVar11 | (uVar3 & uVar9) >> 8;
    uVar1 = (long)puVar7 + 0x32;
    puVar7 = puVar7 + 3;
    param_1 = param_1 + 4;
  }
  if (param_2 < 1) {
    return;
  }
  VP8LConvertBGRAToBGR_C();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertBGRAToRGB565_SSE2(long param_1,ulong param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long lVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  undefined1 auVar21 [12];
  undefined1 auVar23 [15];
  undefined1 auVar24 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar41 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar60 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar35 [16];
  undefined1 auVar27 [16];
  undefined1 auVar36 [16];
  undefined1 auVar28 [16];
  undefined1 auVar37 [16];
  undefined1 auVar29 [16];
  undefined1 auVar22 [14];
  undefined1 auVar38 [16];
  undefined1 auVar30 [16];
  undefined1 auVar39 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  
  auVar15 = __LC5;
  auVar14 = __LC4;
  auVar13 = __LC3;
  if (7 < (int)param_2) {
    uVar18 = (int)param_2 - 8;
    lVar16 = 0;
    uVar20 = uVar18 >> 3;
    uVar19 = (ulong)(uVar20 + 1);
    lVar17 = uVar19 * 0x10;
    do {
      auVar50 = *(undefined1 (*) [16])(param_1 + lVar16 * 2);
      puVar1 = (undefined1 *)(param_1 + 0x10 + lVar16 * 2);
      uVar2 = puVar1[3];
      auVar48._0_14_ = auVar50._0_14_;
      auVar48[0xe] = auVar50[7];
      auVar48[0xf] = puVar1[7];
      auVar47._14_2_ = auVar48._14_2_;
      auVar47._0_13_ = auVar50._0_13_;
      auVar47[0xd] = puVar1[6];
      auVar46._13_3_ = auVar47._13_3_;
      auVar46._0_12_ = auVar50._0_12_;
      auVar46[0xc] = auVar50[6];
      auVar45._12_4_ = auVar46._12_4_;
      auVar45._0_11_ = auVar50._0_11_;
      auVar45[0xb] = puVar1[5];
      auVar44._11_5_ = auVar45._11_5_;
      auVar44._0_10_ = auVar50._0_10_;
      auVar44[10] = auVar50[5];
      auVar43._10_6_ = auVar44._10_6_;
      auVar43._0_9_ = auVar50._0_9_;
      auVar43[9] = puVar1[4];
      auVar42._9_7_ = auVar43._9_7_;
      auVar42._0_8_ = auVar50._0_8_;
      auVar42[8] = auVar50[4];
      auVar7._1_8_ = auVar42._8_8_;
      auVar7[0] = uVar2;
      auVar7._9_7_ = 0;
      auVar6._10_6_ = 0;
      auVar6._0_10_ = SUB1610(auVar7 << 0x38,6);
      auVar5._11_5_ = 0;
      auVar5._0_11_ = SUB1611(auVar6 << 0x30,5);
      auVar4._12_4_ = 0;
      auVar4._0_12_ = SUB1612(auVar5 << 0x28,4);
      auVar3._13_3_ = 0;
      auVar3._0_13_ = SUB1613(auVar4 << 0x20,3);
      auVar41._14_2_ = 0;
      auVar41._0_14_ = SUB1614(auVar3 << 0x18,2);
      auVar41 = auVar41 << 0x10;
      auVar31._0_14_ = auVar41._0_14_;
      auVar31[0xe] = uVar2;
      auVar31[0xf] = puVar1[0xb];
      auVar30._14_2_ = auVar31._14_2_;
      auVar30._0_13_ = auVar41._0_13_;
      auVar30[0xd] = auVar50[0xb];
      auVar29._13_3_ = auVar30._13_3_;
      auVar29._0_12_ = auVar41._0_12_;
      auVar29[0xc] = auVar50[3];
      auVar28._12_4_ = auVar29._12_4_;
      auVar28._0_11_ = auVar41._0_11_;
      auVar28[0xb] = puVar1[10];
      auVar27._11_5_ = auVar28._11_5_;
      auVar27._0_10_ = auVar41._0_10_;
      auVar27[10] = puVar1[2];
      auVar26._10_6_ = auVar27._10_6_;
      auVar26._0_9_ = auVar41._0_9_;
      auVar26[9] = auVar50[10];
      auVar25._9_7_ = auVar26._9_7_;
      auVar25._0_8_ = auVar41._0_8_;
      auVar25[8] = auVar50[2];
      auVar12._1_8_ = auVar25._8_8_;
      auVar12[0] = puVar1[9];
      auVar12._9_7_ = 0;
      auVar11._10_6_ = 0;
      auVar11._0_10_ = SUB1610(auVar12 << 0x38,6);
      auVar10._11_5_ = 0;
      auVar10._0_11_ = SUB1611(auVar11 << 0x30,5);
      auVar9._12_4_ = 0;
      auVar9._0_12_ = SUB1612(auVar10 << 0x28,4);
      auVar8._13_3_ = 0;
      auVar8._0_13_ = SUB1613(auVar9 << 0x20,3);
      auVar24._14_2_ = 0;
      auVar24._0_14_ = SUB1614(auVar8 << 0x18,2);
      auVar24 = auVar24 << 0x10;
      auVar33._0_8_ =
           CONCAT17(puVar1[0xe],
                    CONCAT16(puVar1[10],
                             CONCAT15(puVar1[6],
                                      CONCAT14(puVar1[2],
                                               CONCAT13(auVar50[0xe],
                                                        CONCAT12(auVar50[10],
                                                                 CONCAT11(auVar50[6],auVar50[2])))))
                            ));
      auVar21._0_10_ = CONCAT19(auVar50[7],CONCAT18(auVar50[3],auVar33._0_8_));
      auVar21[10] = auVar50[0xb];
      auVar21[0xb] = auVar50[0xf];
      auVar22[0xc] = uVar2;
      auVar22._0_12_ = auVar21;
      auVar22[0xd] = puVar1[7];
      auVar32[0xe] = puVar1[0xb];
      auVar32._0_14_ = auVar22;
      auVar32[0xf] = puVar1[0xf];
      auVar59._0_14_ = auVar24._0_14_;
      auVar59[0xe] = puVar1[9];
      auVar59[0xf] = puVar1[0xd];
      auVar58._14_2_ = auVar59._14_2_;
      auVar58._0_13_ = auVar24._0_13_;
      auVar58[0xd] = puVar1[5];
      auVar57._13_3_ = auVar58._13_3_;
      auVar57._0_12_ = auVar24._0_12_;
      auVar57[0xc] = puVar1[1];
      auVar56._12_4_ = auVar57._12_4_;
      auVar56._0_11_ = auVar24._0_11_;
      auVar56[0xb] = auVar50[0xd];
      auVar55._11_5_ = auVar56._11_5_;
      auVar55._0_10_ = auVar24._0_10_;
      auVar55[10] = auVar50[9];
      auVar54._10_6_ = auVar55._10_6_;
      auVar54._0_9_ = auVar24._0_9_;
      auVar54[9] = auVar50[5];
      auVar53._9_7_ = auVar54._9_7_;
      auVar53._0_8_ = auVar24._0_8_;
      auVar53[8] = auVar50[1];
      auVar52._8_8_ = auVar53._8_8_;
      auVar52[7] = puVar1[0xc];
      auVar52[6] = puVar1[8];
      auVar52[5] = puVar1[4];
      auVar52[4] = *puVar1;
      auVar52[3] = auVar50[0xc];
      auVar52[2] = auVar50[8];
      auVar52[1] = auVar50[4];
      auVar52[0] = auVar50[0];
      auVar49._8_8_ = auVar32._8_8_;
      auVar49._0_8_ = auVar52._8_8_;
      auVar33._8_8_ = auVar52._0_8_;
      auVar33 = auVar33 & auVar13;
      auVar60._0_2_ = auVar53._8_2_ >> 5;
      auVar60._2_2_ = auVar55._10_2_ >> 5;
      auVar60._4_2_ = auVar57._12_2_ >> 5;
      auVar60._6_2_ = auVar58._14_2_ >> 5;
      auVar60._8_2_ = (ushort)((unkuint10)auVar21._0_10_ >> 0x45);
      auVar60._10_2_ = auVar21._10_2_ >> 5;
      auVar60._12_2_ = auVar22._12_2_ >> 5;
      auVar60._14_2_ = auVar32._14_2_ >> 5;
      auVar50 = psllw(auVar49,3);
      auVar51._0_2_ = auVar33._8_2_ >> 3;
      auVar51._2_2_ = auVar33._10_2_ >> 3;
      auVar51._4_2_ = auVar33._12_2_ >> 3;
      auVar51._6_2_ = auVar33._14_2_ >> 3;
      auVar51._8_8_ = 0;
      auVar23 = auVar33._0_15_ | auVar60._0_15_ & auVar14._0_15_;
      auVar51 = auVar50 & auVar15 | auVar51;
      auVar40._0_14_ = auVar23._0_14_;
      auVar40[0xe] = auVar23[7];
      auVar40[0xf] = auVar51[7];
      auVar39._14_2_ = auVar40._14_2_;
      auVar39._0_13_ = auVar23._0_13_;
      auVar39[0xd] = auVar51[6];
      auVar38._13_3_ = auVar39._13_3_;
      auVar38._0_12_ = auVar23._0_12_;
      auVar38[0xc] = auVar23[6];
      auVar37._12_4_ = auVar38._12_4_;
      auVar37._0_11_ = auVar23._0_11_;
      auVar37[0xb] = auVar51[5];
      auVar36._11_5_ = auVar37._11_5_;
      auVar36._0_10_ = auVar23._0_10_;
      auVar36[10] = auVar23[5];
      auVar35._10_6_ = auVar36._10_6_;
      auVar35._0_9_ = auVar23._0_9_;
      auVar35[9] = auVar51[4];
      auVar50._9_7_ = auVar35._9_7_;
      auVar50._0_8_ = auVar23._0_8_;
      auVar50[8] = auVar23[4];
      auVar34._8_8_ = auVar50._8_8_;
      auVar34[7] = auVar51[3];
      auVar34[6] = auVar23[3];
      auVar34[5] = auVar51[2];
      auVar34[4] = auVar23[2];
      auVar34[3] = auVar51[1];
      auVar34[2] = auVar23[1];
      auVar34[0] = auVar23[0];
      auVar34[1] = auVar51[0];
      *(undefined1 (*) [16])(param_3 + lVar16) = auVar34;
      lVar16 = lVar16 + 0x10;
    } while (lVar17 != lVar16);
    param_3 = param_3 + lVar17;
    param_1 = param_1 + uVar19 * 0x20;
    param_2 = (ulong)(uVar18 + uVar20 * -8);
  }
  if ((int)param_2 < 1) {
    return;
  }
  VP8LConvertBGRAToRGB565_C(param_1,param_2,param_3);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertBGRAToRGBA4444_SSE2(long param_1,ulong param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar37 [12];
  undefined1 auVar39 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar21 [16];
  undefined1 auVar30 [16];
  undefined1 auVar22 [16];
  undefined1 auVar31 [16];
  undefined1 auVar23 [16];
  undefined1 auVar32 [16];
  undefined1 auVar24 [16];
  undefined1 auVar33 [16];
  undefined1 auVar25 [16];
  undefined1 auVar34 [16];
  undefined1 auVar26 [16];
  undefined1 auVar35 [16];
  undefined1 auVar27 [16];
  undefined1 auVar36 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar38 [14];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  
  auVar14 = __LC7;
  auVar13 = __LC6;
  if (7 < (int)param_2) {
    uVar17 = (int)param_2 - 8;
    lVar15 = 0;
    uVar19 = uVar17 >> 3;
    uVar18 = (ulong)(uVar19 + 1);
    lVar16 = uVar18 * 0x10;
    do {
      auVar28 = *(undefined1 (*) [16])(param_1 + lVar15 * 2);
      puVar1 = (undefined1 *)(param_1 + 0x10 + lVar15 * 2);
      uVar2 = puVar1[3];
      auVar27._0_14_ = auVar28._0_14_;
      auVar27[0xe] = auVar28[7];
      auVar27[0xf] = puVar1[7];
      auVar26._14_2_ = auVar27._14_2_;
      auVar26._0_13_ = auVar28._0_13_;
      auVar26[0xd] = puVar1[6];
      auVar25._13_3_ = auVar26._13_3_;
      auVar25._0_12_ = auVar28._0_12_;
      auVar25[0xc] = auVar28[6];
      auVar24._12_4_ = auVar25._12_4_;
      auVar24._0_11_ = auVar28._0_11_;
      auVar24[0xb] = puVar1[5];
      auVar23._11_5_ = auVar24._11_5_;
      auVar23._0_10_ = auVar28._0_10_;
      auVar23[10] = auVar28[5];
      auVar22._10_6_ = auVar23._10_6_;
      auVar22._0_9_ = auVar28._0_9_;
      auVar22[9] = puVar1[4];
      auVar21._9_7_ = auVar22._9_7_;
      auVar21._0_8_ = auVar28._0_8_;
      auVar21[8] = auVar28[4];
      auVar7._1_8_ = auVar21._8_8_;
      auVar7[0] = uVar2;
      auVar7._9_7_ = 0;
      auVar6._10_6_ = 0;
      auVar6._0_10_ = SUB1610(auVar7 << 0x38,6);
      auVar5._11_5_ = 0;
      auVar5._0_11_ = SUB1611(auVar6 << 0x30,5);
      auVar4._12_4_ = 0;
      auVar4._0_12_ = SUB1612(auVar5 << 0x28,4);
      auVar3._13_3_ = 0;
      auVar3._0_13_ = SUB1613(auVar4 << 0x20,3);
      auVar20._14_2_ = 0;
      auVar20._0_14_ = SUB1614(auVar3 << 0x18,2);
      auVar20 = auVar20 << 0x10;
      auVar46._0_14_ = auVar20._0_14_;
      auVar46[0xe] = uVar2;
      auVar46[0xf] = puVar1[0xb];
      auVar45._14_2_ = auVar46._14_2_;
      auVar45._0_13_ = auVar20._0_13_;
      auVar45[0xd] = auVar28[0xb];
      auVar44._13_3_ = auVar45._13_3_;
      auVar44._0_12_ = auVar20._0_12_;
      auVar44[0xc] = auVar28[3];
      auVar43._12_4_ = auVar44._12_4_;
      auVar43._0_11_ = auVar20._0_11_;
      auVar43[0xb] = puVar1[10];
      auVar42._11_5_ = auVar43._11_5_;
      auVar42._0_10_ = auVar20._0_10_;
      auVar42[10] = puVar1[2];
      auVar41._10_6_ = auVar42._10_6_;
      auVar41._0_9_ = auVar20._0_9_;
      auVar41[9] = auVar28[10];
      auVar40._9_7_ = auVar41._9_7_;
      auVar40._0_8_ = auVar20._0_8_;
      auVar40[8] = auVar28[2];
      auVar12._1_8_ = auVar40._8_8_;
      auVar12[0] = puVar1[9];
      auVar12._9_7_ = 0;
      auVar11._10_6_ = 0;
      auVar11._0_10_ = SUB1610(auVar12 << 0x38,6);
      auVar10._11_5_ = 0;
      auVar10._0_11_ = SUB1611(auVar11 << 0x30,5);
      auVar9._12_4_ = 0;
      auVar9._0_12_ = SUB1612(auVar10 << 0x28,4);
      auVar8._13_3_ = 0;
      auVar8._0_13_ = SUB1613(auVar9 << 0x20,3);
      auVar39._14_2_ = 0;
      auVar39._0_14_ = SUB1614(auVar8 << 0x18,2);
      auVar39 = auVar39 << 0x10;
      auVar48._0_8_ =
           CONCAT17(puVar1[0xe],
                    CONCAT16(puVar1[10],
                             CONCAT15(puVar1[6],
                                      CONCAT14(puVar1[2],
                                               CONCAT13(auVar28[0xe],
                                                        CONCAT12(auVar28[10],
                                                                 CONCAT11(auVar28[6],auVar28[2])))))
                            ));
      auVar37._0_10_ = CONCAT19(auVar28[7],CONCAT18(auVar28[3],auVar48._0_8_));
      auVar37[10] = auVar28[0xb];
      auVar37[0xb] = auVar28[0xf];
      auVar38[0xc] = uVar2;
      auVar38._0_12_ = auVar37;
      auVar38[0xd] = puVar1[7];
      auVar47[0xe] = puVar1[0xb];
      auVar47._0_14_ = auVar38;
      auVar47[0xf] = puVar1[0xf];
      auVar56._0_14_ = auVar39._0_14_;
      auVar56[0xe] = puVar1[9];
      auVar56[0xf] = puVar1[0xd];
      auVar55._14_2_ = auVar56._14_2_;
      auVar55._0_13_ = auVar39._0_13_;
      auVar55[0xd] = puVar1[5];
      auVar54._13_3_ = auVar55._13_3_;
      auVar54._0_12_ = auVar39._0_12_;
      auVar54[0xc] = puVar1[1];
      auVar53._12_4_ = auVar54._12_4_;
      auVar53._0_11_ = auVar39._0_11_;
      auVar53[0xb] = auVar28[0xd];
      auVar52._11_5_ = auVar53._11_5_;
      auVar52._0_10_ = auVar39._0_10_;
      auVar52[10] = auVar28[9];
      auVar51._10_6_ = auVar52._10_6_;
      auVar51._0_9_ = auVar39._0_9_;
      auVar51[9] = auVar28[5];
      auVar50._9_7_ = auVar51._9_7_;
      auVar50._0_8_ = auVar39._0_8_;
      auVar50[8] = auVar28[1];
      auVar49._8_8_ = auVar50._8_8_;
      auVar49[7] = puVar1[0xc];
      auVar49[6] = puVar1[8];
      auVar49[5] = puVar1[4];
      auVar49[4] = *puVar1;
      auVar49[3] = auVar28[0xc];
      auVar49[2] = auVar28[8];
      auVar49[1] = auVar28[4];
      auVar49[0] = auVar28[0];
      auVar48._8_8_ = auVar49._0_8_;
      auVar28._0_2_ = auVar50._8_2_ >> 4;
      auVar28._2_2_ = auVar52._10_2_ >> 4;
      auVar28._4_2_ = auVar54._12_2_ >> 4;
      auVar28._6_2_ = auVar55._14_2_ >> 4;
      auVar28._8_2_ = (ushort)((unkuint10)auVar37._0_10_ >> 0x44);
      auVar28._10_2_ = auVar37._10_2_ >> 4;
      auVar28._12_2_ = auVar38._12_2_ >> 4;
      auVar28._14_2_ = auVar47._14_2_ >> 4;
      auVar28 = auVar28 & auVar13 | auVar48 & auVar14;
      auVar36._0_14_ = auVar28._0_14_;
      auVar36[0xe] = auVar28[7];
      auVar36[0xf] = auVar28[0xf];
      auVar35._14_2_ = auVar36._14_2_;
      auVar35._0_13_ = auVar28._0_13_;
      auVar35[0xd] = auVar28[0xe];
      auVar34._13_3_ = auVar35._13_3_;
      auVar34._0_12_ = auVar28._0_12_;
      auVar34[0xc] = auVar28[6];
      auVar33._12_4_ = auVar34._12_4_;
      auVar33._0_11_ = auVar28._0_11_;
      auVar33[0xb] = auVar28[0xd];
      auVar32._11_5_ = auVar33._11_5_;
      auVar32._0_10_ = auVar28._0_10_;
      auVar32[10] = auVar28[5];
      auVar31._10_6_ = auVar32._10_6_;
      auVar31._0_9_ = auVar28._0_9_;
      auVar31[9] = auVar28[0xc];
      auVar30._9_7_ = auVar31._9_7_;
      auVar30._0_8_ = auVar28._0_8_;
      auVar30[8] = auVar28[4];
      auVar29._8_8_ = auVar30._8_8_;
      auVar29[7] = auVar28[0xb];
      auVar29[6] = auVar28[3];
      auVar29[5] = auVar28[10];
      auVar29[4] = auVar28[2];
      auVar29[3] = auVar28[9];
      auVar29[2] = auVar28[1];
      auVar29[0] = auVar28[0];
      auVar29[1] = auVar28[8];
      *(undefined1 (*) [16])(param_3 + lVar15) = auVar29;
      lVar15 = lVar15 + 0x10;
    } while (lVar16 != lVar15);
    param_3 = param_3 + lVar16;
    param_1 = param_1 + uVar18 * 0x20;
    param_2 = (ulong)(uVar17 + uVar19 * -8);
  }
  if ((int)param_2 < 1) {
    return;
  }
  VP8LConvertBGRAToRGBA4444_C(param_1,param_2,param_3);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertBGRAToRGBA_SSE2(undefined1 (*param_1) [16],ulong param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  uint uVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  
  auVar2 = __LC8;
  if (7 < (int)param_2) {
    uVar4 = (int)param_2 - 8;
    uVar8 = uVar4 >> 3;
    uVar7 = (ulong)(uVar8 + 1);
    pauVar3 = param_3;
    pauVar5 = param_1;
    do {
      pauVar6 = pauVar5 + 2;
      auVar1 = pauVar5[1];
      auVar10 = pshuflw(in_XMM1,*pauVar5 & auVar2,0xb1);
      auVar9 = auVar1 & auVar2;
      auVar10 = pshufhw(auVar10,auVar10,0xb1);
      auVar9 = pshuflw(auVar9,auVar9,0xb1);
      in_XMM1 = auVar10 | ~auVar2 & *pauVar5;
      auVar9 = pshufhw(auVar9,auVar9,0xb1);
      *pauVar3 = in_XMM1;
      pauVar3[1] = auVar9 | ~auVar2 & auVar1;
      pauVar3 = pauVar3 + 2;
      pauVar5 = pauVar6;
    } while (pauVar6 != param_1 + uVar7 * 2);
    param_3 = param_3 + uVar7 * 2;
    param_2 = (ulong)(uVar4 + uVar8 * -8);
    param_1 = param_1 + uVar7 * 2;
  }
  if (0 < (int)param_2) {
    VP8LConvertBGRAToRGBA_C(param_1,param_2,param_3);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TransformColorInverse_SSE2(char *param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  char *pcVar2;
  undefined1 auVar3 [15];
  undefined1 auVar4 [16];
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined1 in_XMM0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar4 = __LC9;
  uVar5 = (uint)(ushort)(short)*param_1 << 0x13 | ((ushort)(short)param_1[1] & 0x1fff) << 3;
  iVar6 = (uint)(ushort)(short)param_1[2] * 0x80000;
  if (param_3 < 4) {
    iVar6 = 0;
  }
  else {
    uVar1 = (param_3 - 4U >> 2) + 1;
    lVar7 = 0;
    do {
      pcVar2 = (char *)(param_2 + lVar7);
      auVar11 = *(undefined1 (*) [16])(param_2 + lVar7) & auVar4;
      auVar8 = pshuflw(in_XMM0,auVar11,0xa0);
      auVar9 = pshufhw(auVar8,auVar8,0xa0);
      auVar8._4_4_ = uVar5;
      auVar8._0_4_ = uVar5;
      auVar8._8_4_ = uVar5;
      auVar8._12_4_ = uVar5;
      auVar8 = pmulhw(auVar9,auVar8);
      auVar10[0] = auVar8[0] + *pcVar2;
      auVar10[1] = auVar8[1] + pcVar2[1];
      auVar10[2] = auVar8[2] + pcVar2[2];
      auVar10[3] = auVar8[3] + pcVar2[3];
      auVar10[4] = auVar8[4] + pcVar2[4];
      auVar10[5] = auVar8[5] + pcVar2[5];
      auVar10[6] = auVar8[6] + pcVar2[6];
      auVar10[7] = auVar8[7] + pcVar2[7];
      auVar10[8] = auVar8[8] + pcVar2[8];
      auVar10[9] = auVar8[9] + pcVar2[9];
      auVar10[10] = auVar8[10] + pcVar2[10];
      auVar10[0xb] = auVar8[0xb] + pcVar2[0xb];
      auVar10[0xc] = auVar8[0xc] + pcVar2[0xc];
      auVar10[0xd] = auVar8[0xd] + pcVar2[0xd];
      auVar10[0xe] = auVar8[0xe] + pcVar2[0xe];
      auVar10[0xf] = auVar8[0xf] + pcVar2[0xf];
      auVar8 = psllw(auVar10,8);
      auVar9._4_4_ = iVar6;
      auVar9._0_4_ = iVar6;
      auVar9._8_4_ = iVar6;
      auVar9._12_4_ = iVar6;
      auVar9 = pmulhw(auVar8,auVar9);
      auVar3._1_14_ = auVar8._2_14_;
      auVar3[0] = auVar8[1] + auVar9[2];
      in_XMM0._0_8_ =
           CONCAT26((ushort)(((ulong)auVar8[7] << 0x38) >> 0x38),
                    CONCAT24((ushort)(((uint6)(byte)(auVar8[5] + auVar9[6]) << 0x28) >> 0x28),
                             CONCAT22((ushort)(((uint)auVar8[3] << 0x18) >> 0x18),auVar3._0_2_))) &
           0xffffffffffff00ff;
      in_XMM0._8_2_ = (ushort)((uint3)((uint3)(byte)(auVar8[9] + auVar9[10]) << 0x10) >> 0x10);
      in_XMM0._10_2_ = (ushort)(((uint5)auVar8[0xb] << 0x20) >> 0x20);
      in_XMM0._12_2_ = (ushort)(((uint7)(byte)(auVar8[0xd] + auVar9[0xe]) << 0x30) >> 0x30);
      in_XMM0._14_2_ = (ushort)((uint3)((uint3)auVar8[0xf] << 0x10) >> 0x10);
      *(undefined1 (*) [16])(param_4 + lVar7) = auVar11 | in_XMM0;
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != (ulong)uVar1 << 4);
    iVar6 = uVar1 * 4;
  }
  if (param_3 == iVar6) {
    return;
  }
  VP8LTransformColorInverse_C
            (param_1,param_2 + (long)iVar6 * 4,param_3 - iVar6,param_4 + (long)iVar6 * 4);
  return;
}



void AddGreenToBlueAndRed_SSE2(long param_1,int param_2,long param_3)

{
  uint uVar1;
  ushort *puVar2;
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
  int iVar20;
  long lVar21;
  undefined1 auVar22 [16];
  
  if (param_2 < 4) {
    iVar20 = 0;
  }
  else {
    uVar1 = (param_2 - 4U >> 2) + 1;
    lVar21 = 0;
    do {
      puVar2 = (ushort *)(param_1 + lVar21);
      pcVar3 = (char *)(param_1 + lVar21);
      cVar5 = pcVar3[1];
      cVar6 = pcVar3[2];
      cVar7 = pcVar3[3];
      cVar8 = pcVar3[4];
      cVar9 = pcVar3[5];
      cVar10 = pcVar3[6];
      cVar11 = pcVar3[7];
      cVar12 = pcVar3[8];
      cVar13 = pcVar3[9];
      cVar14 = pcVar3[10];
      cVar15 = pcVar3[0xb];
      cVar16 = pcVar3[0xc];
      cVar17 = pcVar3[0xd];
      cVar18 = pcVar3[0xe];
      cVar19 = pcVar3[0xf];
      auVar22._0_2_ = *puVar2 >> 8;
      auVar22._2_2_ = puVar2[1] >> 8;
      auVar22._4_2_ = puVar2[2] >> 8;
      auVar22._6_2_ = puVar2[3] >> 8;
      auVar22._8_2_ = puVar2[4] >> 8;
      auVar22._10_2_ = puVar2[5] >> 8;
      auVar22._12_2_ = puVar2[6] >> 8;
      auVar22._14_2_ = puVar2[7] >> 8;
      auVar22 = pshuflw(auVar22,auVar22,0xa0);
      auVar22 = pshufhw(auVar22,auVar22,0xa0);
      pcVar4 = (char *)(param_3 + lVar21);
      *pcVar4 = auVar22[0] + *pcVar3;
      pcVar4[1] = auVar22[1] + cVar5;
      pcVar4[2] = auVar22[2] + cVar6;
      pcVar4[3] = auVar22[3] + cVar7;
      pcVar4[4] = auVar22[4] + cVar8;
      pcVar4[5] = auVar22[5] + cVar9;
      pcVar4[6] = auVar22[6] + cVar10;
      pcVar4[7] = auVar22[7] + cVar11;
      pcVar4[8] = auVar22[8] + cVar12;
      pcVar4[9] = auVar22[9] + cVar13;
      pcVar4[10] = auVar22[10] + cVar14;
      pcVar4[0xb] = auVar22[0xb] + cVar15;
      pcVar4[0xc] = auVar22[0xc] + cVar16;
      pcVar4[0xd] = auVar22[0xd] + cVar17;
      pcVar4[0xe] = auVar22[0xe] + cVar18;
      pcVar4[0xf] = auVar22[0xf] + cVar19;
      lVar21 = lVar21 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar21);
    iVar20 = uVar1 * 4;
  }
  if (param_2 == iVar20) {
    return;
  }
  VP8LAddGreenToBlueAndRed_C(param_1 + (long)iVar20 * 4,param_2 - iVar20,param_3 + (long)iVar20 * 4)
  ;
  return;
}



undefined4 Predictor5_SSE2(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  
  uVar1 = *param_1;
  uVar2 = param_2[1];
  uVar3 = *param_2;
  uVar4 = (ushort)(((ushort)(((ushort)uVar2 & 0xff) + (ushort)(byte)uVar1) >> 1) +
                  (ushort)(byte)uVar3) >> 1;
  uVar5 = (ushort)(((ushort)((ushort)(byte)((uint)uVar2 >> 8) + (ushort)(byte)((uint)uVar1 >> 8)) >>
                   1) + (ushort)(byte)((uint)uVar3 >> 8)) >> 1;
  uVar6 = (ushort)(((ushort)((ushort)(byte)((uint)uVar2 >> 0x10) +
                            (ushort)(byte)((uint)uVar1 >> 0x10)) >> 1) +
                  (ushort)(byte)((uint)uVar3 >> 0x10)) >> 1;
  uVar7 = (ushort)(((ushort)((ushort)(byte)((uint)uVar2 >> 0x18) +
                            (ushort)(byte)((uint)uVar1 >> 0x18)) >> 1) +
                  (ushort)(byte)((uint)uVar3 >> 0x18)) >> 1;
  return CONCAT13((uVar7 != 0) * (uVar7 < 0x100) * (char)uVar7 - (0xff < uVar7),
                  CONCAT12((uVar6 != 0) * (uVar6 < 0x100) * (char)uVar6 - (0xff < uVar6),
                           CONCAT11((uVar5 != 0) * (uVar5 < 0x100) * (char)uVar5 - (0xff < uVar5),
                                    (uVar4 != 0) * (uVar4 < 0x100) * (char)uVar4 - (0xff < uVar4))))
  ;
}



undefined4 Predictor10_SSE2(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  
  uVar1 = *param_1;
  uVar2 = param_2[-1];
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = (ushort)(((ushort)(((ushort)uVar4 & 0xff) + ((ushort)uVar3 & 0xff)) >> 1) +
                  ((ushort)(((ushort)uVar2 & 0xff) + (ushort)(byte)uVar1) >> 1)) >> 1;
  uVar6 = (ushort)(((ushort)((ushort)(byte)((uint)uVar4 >> 8) + (ushort)(byte)((uint)uVar3 >> 8)) >>
                   1) + ((ushort)((ushort)(byte)((uint)uVar2 >> 8) +
                                 (ushort)(byte)((uint)uVar1 >> 8)) >> 1)) >> 1;
  uVar7 = (ushort)(((ushort)((ushort)(byte)((uint)uVar4 >> 0x10) +
                            (ushort)(byte)((uint)uVar3 >> 0x10)) >> 1) +
                  ((ushort)((ushort)(byte)((uint)uVar2 >> 0x10) +
                           (ushort)(byte)((uint)uVar1 >> 0x10)) >> 1)) >> 1;
  uVar8 = (ushort)(((ushort)((ushort)(byte)((uint)uVar4 >> 0x18) +
                            (ushort)(byte)((uint)uVar3 >> 0x18)) >> 1) +
                  ((ushort)((ushort)(byte)((uint)uVar2 >> 0x18) +
                           (ushort)(byte)((uint)uVar1 >> 0x18)) >> 1)) >> 1;
  return CONCAT13((uVar8 != 0) * (uVar8 < 0x100) * (char)uVar8 - (0xff < uVar8),
                  CONCAT12((uVar7 != 0) * (uVar7 < 0x100) * (char)uVar7 - (0xff < uVar7),
                           CONCAT11((uVar6 != 0) * (uVar6 < 0x100) * (char)uVar6 - (0xff < uVar6),
                                    (uVar5 != 0) * (uVar5 < 0x100) * (char)uVar5 - (0xff < uVar5))))
  ;
}



undefined4 Predictor12_SSE2(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  uVar3 = param_2[-1];
  sVar4 = ((ushort)(byte)uVar1 + ((ushort)uVar2 & 0xff)) - (ushort)(byte)uVar3;
  sVar5 = ((ushort)(byte)((uint)uVar1 >> 8) + (ushort)(byte)((uint)uVar2 >> 8)) -
          (ushort)(byte)((uint)uVar3 >> 8);
  sVar6 = ((ushort)(byte)((uint)uVar1 >> 0x10) + (ushort)(byte)((uint)uVar2 >> 0x10)) -
          (ushort)(byte)((uint)uVar3 >> 0x10);
  sVar7 = ((ushort)(byte)((uint)uVar1 >> 0x18) + (ushort)(byte)((uint)uVar2 >> 0x18)) -
          (ushort)(byte)((uint)uVar3 >> 0x18);
  return CONCAT13((0 < sVar7) * (sVar7 < 0x100) * (char)sVar7 - (0xff < sVar7),
                  CONCAT12((0 < sVar6) * (sVar6 < 0x100) * (char)sVar6 - (0xff < sVar6),
                           CONCAT11((0 < sVar5) * (sVar5 < 0x100) * (char)sVar5 - (0xff < sVar5),
                                    (0 < sVar4) * (sVar4 < 0x100) * (char)sVar4 - (0xff < sVar4))));
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PredictorAdd12_SSE2(long param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  char *pcVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
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
  undefined1 auVar39 [15];
  char cVar40;
  undefined1 auVar41 [15];
  unkuint9 Var42;
  undefined1 auVar43 [11];
  undefined1 auVar44 [15];
  unkuint9 Var45;
  undefined1 auVar46 [11];
  ushort uVar47;
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  undefined1 auVar58 [15];
  undefined1 auVar59 [15];
  undefined3 uVar60;
  undefined8 uVar61;
  undefined1 auVar62 [15];
  undefined1 auVar63 [15];
  undefined1 auVar64 [15];
  undefined1 auVar65 [15];
  uint uVar66;
  undefined5 uVar67;
  undefined1 auVar68 [12];
  undefined8 uVar69;
  undefined1 auVar70 [12];
  undefined1 auVar71 [12];
  undefined1 auVar72 [12];
  undefined1 auVar73 [14];
  undefined8 uVar74;
  undefined1 auVar75 [14];
  undefined1 auVar76 [14];
  undefined1 auVar77 [14];
  int iVar78;
  long lVar79;
  byte bVar80;
  short sVar81;
  char cVar88;
  short sVar92;
  char cVar93;
  undefined4 uVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  char cVar90;
  char cVar95;
  short sVar96;
  char cVar97;
  char cVar98;
  short sVar99;
  byte bVar100;
  char cVar101;
  short sVar102;
  short sVar103;
  short sVar104;
  undefined1 auVar87 [16];
  short sVar105;
  short sVar106;
  short sVar107;
  short sVar108;
  short sVar109;
  short sVar110;
  short sVar111;
  short sVar112;
  short sVar113;
  undefined2 uVar82;
  undefined4 uVar83;
  char cVar89;
  char cVar91;
  char cVar94;
  
  uVar83 = *(undefined4 *)(param_4 + -4);
  auVar87 = ZEXT716(CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar83 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar83 >> 0x10),uVar83)) >>
                                                  0x20),uVar83) >> 0x18),(char)((uint)uVar83 >> 8)),
                             (ushort)(byte)uVar83) & 0xffffff00ffffff);
  if (param_3 < 4) {
    iVar78 = 0;
  }
  else {
    uVar1 = (param_3 - 4U >> 2) + 1;
    lVar79 = 0;
    do {
      auVar4 = *(undefined1 (*) [16])(param_2 + lVar79);
      auVar5 = *(undefined1 (*) [16])(param_2 + -4 + lVar79);
      pcVar2 = (char *)(param_1 + lVar79);
      auVar6[0xd] = 0;
      auVar6._0_13_ = auVar5._0_13_;
      auVar6[0xe] = auVar5[7];
      auVar12[0xc] = auVar5[6];
      auVar12._0_12_ = auVar5._0_12_;
      auVar12._13_2_ = auVar6._13_2_;
      auVar14[0xb] = 0;
      auVar14._0_11_ = auVar5._0_11_;
      auVar14._12_3_ = auVar12._12_3_;
      auVar20[10] = auVar5[5];
      auVar20._0_10_ = auVar5._0_10_;
      auVar20._11_4_ = auVar14._11_4_;
      auVar22[9] = 0;
      auVar22._0_9_ = auVar5._0_9_;
      auVar22._10_5_ = auVar20._10_5_;
      auVar28[8] = auVar5[4];
      auVar28._0_8_ = auVar5._0_8_;
      auVar28._9_6_ = auVar22._9_6_;
      auVar41._7_8_ = 0;
      auVar41._0_7_ = auVar28._8_7_;
      Var42 = CONCAT81(SUB158(auVar41 << 0x40,7),auVar5[3]);
      auVar56._9_6_ = 0;
      auVar56._0_9_ = Var42;
      auVar43._1_10_ = SUB1510(auVar56 << 0x30,5);
      auVar43[0] = auVar5[2];
      auVar57._11_4_ = 0;
      auVar57._0_11_ = auVar43;
      auVar34[2] = auVar5[1];
      auVar34._0_2_ = auVar5._0_2_;
      auVar34._3_12_ = SUB1512(auVar57 << 0x20,3);
      auVar7[0xd] = 0;
      auVar7._0_13_ = auVar4._0_13_;
      auVar7[0xe] = auVar4[7];
      auVar13[0xc] = auVar4[6];
      auVar13._0_12_ = auVar4._0_12_;
      auVar13._13_2_ = auVar7._13_2_;
      auVar15[0xb] = 0;
      auVar15._0_11_ = auVar4._0_11_;
      auVar15._12_3_ = auVar13._12_3_;
      auVar21[10] = auVar4[5];
      auVar21._0_10_ = auVar4._0_10_;
      auVar21._11_4_ = auVar15._11_4_;
      auVar23[9] = 0;
      auVar23._0_9_ = auVar4._0_9_;
      auVar23._10_5_ = auVar21._10_5_;
      auVar29[8] = auVar4[4];
      auVar29._0_8_ = auVar4._0_8_;
      auVar29._9_6_ = auVar23._9_6_;
      auVar44._7_8_ = 0;
      auVar44._0_7_ = auVar29._8_7_;
      Var45 = CONCAT81(SUB158(auVar44 << 0x40,7),auVar4[3]);
      auVar58._9_6_ = 0;
      auVar58._0_9_ = Var45;
      auVar46._1_10_ = SUB1510(auVar58 << 0x30,5);
      auVar46[0] = auVar4[2];
      auVar59._11_4_ = 0;
      auVar59._0_11_ = auVar46;
      auVar35[2] = auVar4[1];
      auVar35._0_2_ = auVar4._0_2_;
      auVar35._3_12_ = SUB1512(auVar59 << 0x20,3);
      sVar110 = auVar29._8_2_ - auVar28._8_2_;
      sVar111 = auVar21._10_2_ - auVar20._10_2_;
      sVar112 = auVar13._12_2_ - auVar12._12_2_;
      sVar113 = (auVar7._13_2_ >> 8) - (auVar6._13_2_ >> 8);
      sVar106 = (ushort)auVar4[0xc] - (ushort)auVar5[0xc];
      sVar107 = (ushort)auVar4[0xd] - (ushort)auVar5[0xd];
      sVar108 = (ushort)auVar4[0xe] - (ushort)auVar5[0xe];
      sVar109 = (ushort)auVar4[0xf] - (ushort)auVar5[0xf];
      sVar81 = auVar87._0_2_ + ((auVar4._0_2_ & 0xff) - (auVar5._0_2_ & 0xff));
      sVar92 = auVar87._2_2_ + (auVar35._2_2_ - auVar34._2_2_);
      sVar96 = auVar87._4_2_ + (auVar46._0_2_ - auVar43._0_2_);
      sVar99 = auVar87._6_2_ + ((short)Var45 - (short)Var42);
      sVar102 = auVar87._8_2_ + sVar110;
      sVar103 = auVar87._10_2_ + sVar111;
      sVar104 = auVar87._12_2_ + sVar112;
      sVar105 = auVar87._14_2_ + sVar113;
      lVar3 = param_1 + lVar79;
      cVar40 = *(char *)(lVar3 + 0xc);
      cVar89 = *(char *)(lVar3 + 0xd);
      cVar91 = *(char *)(lVar3 + 0xe);
      cVar94 = *(char *)(lVar3 + 0xf);
      bVar80 = ((0 < sVar81) * (sVar81 < 0x100) * (char)sVar81 - (0xff < sVar81)) + *pcVar2;
      cVar88 = ((0 < sVar92) * (sVar92 < 0x100) * (char)sVar92 - (0xff < sVar92)) + pcVar2[1];
      uVar82 = CONCAT11(cVar88,bVar80);
      cVar90 = ((0 < sVar96) * (sVar96 < 0x100) * (char)sVar96 - (0xff < sVar96)) + pcVar2[2];
      cVar93 = ((0 < sVar99) * (sVar99 < 0x100) * (char)sVar99 - (0xff < sVar99)) + pcVar2[3];
      uVar83 = CONCAT13(cVar93,CONCAT12(cVar90,uVar82));
      cVar95 = ((0 < sVar102) * (sVar102 < 0x100) * (char)sVar102 - (0xff < sVar102)) + pcVar2[4];
      cVar97 = ((0 < sVar103) * (sVar103 < 0x100) * (char)sVar103 - (0xff < sVar103)) + pcVar2[5];
      cVar98 = ((0 < sVar104) * (sVar104 < 0x100) * (char)sVar104 - (0xff < sVar104)) + pcVar2[6];
      bVar100 = ((0 < sVar105) * (sVar105 < 0x100) * (char)sVar105 - (0xff < sVar105)) + pcVar2[7];
      uVar47 = CONCAT11(((0 < sVar81) * (sVar81 < 0x100) * (char)sVar81 - (0xff < sVar81)) +
                        pcVar2[8],bVar100);
      uVar60 = CONCAT12(((0 < sVar92) * (sVar92 < 0x100) * (char)sVar92 - (0xff < sVar92)) +
                        pcVar2[9],uVar47);
      uVar66 = CONCAT13(((0 < sVar96) * (sVar96 < 0x100) * (char)sVar96 - (0xff < sVar96)) +
                        pcVar2[10],uVar60);
      uVar67 = CONCAT14(((0 < sVar99) * (sVar99 < 0x100) * (char)sVar99 - (0xff < sVar99)) +
                        pcVar2[0xb],uVar66);
      auVar73[5] = ((0 < sVar102) * (sVar102 < 0x100) * (char)sVar102 - (0xff < sVar102)) +
                   pcVar2[0xc];
      auVar73._0_5_ = uVar67;
      auVar73._6_8_ = 0;
      auVar8[0xe] = bVar100;
      auVar8._0_14_ = auVar73 << 0x38;
      uVar74 = CONCAT26(auVar8._13_2_,CONCAT15(cVar98,uVar67));
      auVar68._4_8_ = 0;
      auVar68._0_4_ = uVar66;
      auVar16._12_3_ = (int3)((ulong)uVar74 >> 0x28);
      auVar16._0_12_ = auVar68 << 0x38;
      uVar69 = CONCAT44(auVar16._11_4_,CONCAT13(cVar97,uVar60));
      auVar24._10_5_ = (int5)((ulong)uVar69 >> 0x18);
      auVar24._0_10_ = (unkuint10)uVar47 << 0x38;
      uVar61 = CONCAT62(auVar24._9_6_,CONCAT11(cVar95,bVar100));
      auVar48._7_8_ = 0;
      auVar48._0_7_ = (uint7)((ulong)uVar61 >> 8);
      Var42 = CONCAT81(SUB158(auVar48 << 0x40,7),cVar93);
      auVar62._9_6_ = 0;
      auVar62._0_9_ = Var42;
      auVar30[4] = cVar90;
      auVar30._0_4_ = uVar83;
      auVar30._5_10_ = SUB1510(auVar62 << 0x30,5);
      auVar49._11_4_ = 0;
      auVar49._0_11_ = auVar30._4_11_;
      auVar36[2] = cVar88;
      auVar36._0_2_ = uVar82;
      auVar36._3_12_ = SUB1512(auVar49 << 0x20,3);
      sVar110 = (ushort)bVar80 + sVar110;
      sVar111 = auVar36._2_2_ + sVar111;
      sVar112 = auVar30._4_2_ + sVar112;
      sVar113 = (short)Var42 + sVar113;
      sVar81 = (short)((ulong)uVar61 >> 8);
      sVar92 = (short)((ulong)uVar69 >> 0x18);
      sVar96 = (short)((ulong)uVar74 >> 0x28);
      bVar80 = ((0 < sVar110) * (sVar110 < 0x100) * (char)sVar110 - (0xff < sVar110)) +
               *(char *)(lVar3 + 4);
      cVar88 = ((0 < sVar111) * (sVar111 < 0x100) * (char)sVar111 - (0xff < sVar111)) +
               *(char *)(lVar3 + 5);
      uVar82 = CONCAT11(cVar88,bVar80);
      cVar90 = ((0 < sVar112) * (sVar112 < 0x100) * (char)sVar112 - (0xff < sVar112)) +
               *(char *)(lVar3 + 6);
      cVar93 = ((0 < sVar113) * (sVar113 < 0x100) * (char)sVar113 - (0xff < sVar113)) +
               *(char *)(lVar3 + 7);
      uVar84 = CONCAT13(cVar93,CONCAT12(cVar90,uVar82));
      cVar101 = ((bVar100 != 0) * (bVar100 < 0x100) * bVar100 - (0xff < bVar100)) +
                *(char *)(lVar3 + 0xb);
      uVar47 = CONCAT11(((0 < sVar110) * (sVar110 < 0x100) * (char)sVar110 - (0xff < sVar110)) +
                        cVar40,cVar101);
      uVar60 = CONCAT12(((0 < sVar111) * (sVar111 < 0x100) * (char)sVar111 - (0xff < sVar111)) +
                        cVar89,uVar47);
      uVar66 = CONCAT13(((0 < sVar112) * (sVar112 < 0x100) * (char)sVar112 - (0xff < sVar112)) +
                        cVar91,uVar60);
      uVar67 = CONCAT14(((0 < sVar113) * (sVar113 < 0x100) * (char)sVar113 - (0xff < sVar113)) +
                        cVar94,uVar66);
      auVar75[5] = (0 < sVar81) * (sVar81 < 0x100) * cVar95 - (0xff < sVar81);
      auVar75._0_5_ = uVar67;
      auVar75._6_8_ = 0;
      auVar9[0xe] = cVar101;
      auVar9._0_14_ = auVar75 << 0x38;
      uVar74 = CONCAT26(auVar9._13_2_,
                        CONCAT15(((0 < sVar96) * (sVar96 < 0x100) * cVar98 - (0xff < sVar96)) +
                                 *(char *)(lVar3 + 10),uVar67));
      auVar70._4_8_ = 0;
      auVar70._0_4_ = uVar66;
      auVar17._12_3_ = (int3)((ulong)uVar74 >> 0x28);
      auVar17._0_12_ = auVar70 << 0x38;
      uVar69 = CONCAT44(auVar17._11_4_,
                        CONCAT13(((0 < sVar92) * (sVar92 < 0x100) * cVar97 - (0xff < sVar92)) +
                                 *(char *)(lVar3 + 9),uVar60));
      auVar25._10_5_ = (int5)((ulong)uVar69 >> 0x18);
      auVar25._0_10_ = (unkuint10)uVar47 << 0x38;
      uVar61 = CONCAT62(auVar25._9_6_,
                        CONCAT11(((0 < sVar81) * (sVar81 < 0x100) * cVar95 - (0xff < sVar81)) +
                                 *(char *)(lVar3 + 8),cVar101));
      auVar50._7_8_ = 0;
      auVar50._0_7_ = (uint7)((ulong)uVar61 >> 8);
      Var42 = CONCAT81(SUB158(auVar50 << 0x40,7),cVar93);
      auVar63._9_6_ = 0;
      auVar63._0_9_ = Var42;
      auVar31[4] = cVar90;
      auVar31._0_4_ = uVar84;
      auVar31._5_10_ = SUB1510(auVar63 << 0x30,5);
      auVar51._11_4_ = 0;
      auVar51._0_11_ = auVar31._4_11_;
      auVar37[2] = cVar88;
      auVar37._0_2_ = uVar82;
      auVar37._3_12_ = SUB1512(auVar51 << 0x20,3);
      sVar81 = (ushort)bVar80 + ((ushort)auVar4[8] - (ushort)auVar5[8]);
      sVar110 = auVar37._2_2_ + ((ushort)auVar4[9] - (ushort)auVar5[9]);
      sVar92 = auVar31._4_2_ + ((ushort)auVar4[10] - (ushort)auVar5[10]);
      sVar111 = (short)Var42 + ((ushort)auVar4[0xb] - (ushort)auVar5[0xb]);
      sVar96 = (short)((ulong)uVar61 >> 8) + sVar106;
      sVar112 = (short)((ulong)uVar69 >> 0x18) + sVar107;
      sVar99 = (short)((ulong)uVar74 >> 0x28) + sVar108;
      sVar113 = (auVar9._13_2_ >> 8) + sVar109;
      bVar80 = ((0 < sVar81) * (sVar81 < 0x100) * (char)sVar81 - (0xff < sVar81)) +
               *(char *)(lVar3 + 8);
      cVar88 = ((0 < sVar110) * (sVar110 < 0x100) * (char)sVar110 - (0xff < sVar110)) +
               *(char *)(lVar3 + 9);
      uVar82 = CONCAT11(cVar88,bVar80);
      cVar90 = ((0 < sVar92) * (sVar92 < 0x100) * (char)sVar92 - (0xff < sVar92)) +
               *(char *)(lVar3 + 10);
      cVar93 = ((0 < sVar111) * (sVar111 < 0x100) * (char)sVar111 - (0xff < sVar111)) +
               *(char *)(lVar3 + 0xb);
      uVar85 = CONCAT13(cVar93,CONCAT12(cVar90,uVar82));
      cVar95 = ((0 < sVar96) * (sVar96 < 0x100) * (char)sVar96 - (0xff < sVar96)) + cVar40;
      cVar97 = ((0 < sVar112) * (sVar112 < 0x100) * (char)sVar112 - (0xff < sVar112)) + cVar89;
      cVar98 = ((0 < sVar99) * (sVar99 < 0x100) * (char)sVar99 - (0xff < sVar99)) + cVar91;
      bVar100 = ((0 < sVar113) * (sVar113 < 0x100) * (char)sVar113 - (0xff < sVar113)) + cVar94;
      uVar47 = CONCAT11((0 < sVar81) * (sVar81 < 0x100) * (char)sVar81 - (0xff < sVar81),bVar100);
      uVar60 = CONCAT12((0 < sVar110) * (sVar110 < 0x100) * (char)sVar110 - (0xff < sVar110),uVar47)
      ;
      uVar66 = CONCAT13((0 < sVar92) * (sVar92 < 0x100) * (char)sVar92 - (0xff < sVar92),uVar60);
      uVar67 = CONCAT14((0 < sVar111) * (sVar111 < 0x100) * (char)sVar111 - (0xff < sVar111),uVar66)
      ;
      auVar76[5] = (0 < sVar96) * (sVar96 < 0x100) * (char)sVar96 - (0xff < sVar96);
      auVar76._0_5_ = uVar67;
      auVar76._6_8_ = 0;
      auVar10[0xe] = bVar100;
      auVar10._0_14_ = auVar76 << 0x38;
      uVar74 = CONCAT26(auVar10._13_2_,CONCAT15(cVar98,uVar67));
      auVar71._4_8_ = 0;
      auVar71._0_4_ = uVar66;
      auVar18._12_3_ = (int3)((ulong)uVar74 >> 0x28);
      auVar18._0_12_ = auVar71 << 0x38;
      uVar69 = CONCAT44(auVar18._11_4_,CONCAT13(cVar97,uVar60));
      auVar26._10_5_ = (int5)((ulong)uVar69 >> 0x18);
      auVar26._0_10_ = (unkuint10)uVar47 << 0x38;
      uVar61 = CONCAT62(auVar26._9_6_,CONCAT11(cVar95,bVar100));
      auVar52._7_8_ = 0;
      auVar52._0_7_ = (uint7)((ulong)uVar61 >> 8);
      Var42 = CONCAT81(SUB158(auVar52 << 0x40,7),cVar93);
      auVar64._9_6_ = 0;
      auVar64._0_9_ = Var42;
      auVar32[4] = cVar90;
      auVar32._0_4_ = uVar85;
      auVar32._5_10_ = SUB1510(auVar64 << 0x30,5);
      auVar53._11_4_ = 0;
      auVar53._0_11_ = auVar32._4_11_;
      auVar38[2] = cVar88;
      auVar38._0_2_ = uVar82;
      auVar38._3_12_ = SUB1512(auVar53 << 0x20,3);
      sVar106 = (ushort)bVar80 + sVar106;
      sVar107 = auVar38._2_2_ + sVar107;
      sVar108 = auVar32._4_2_ + sVar108;
      sVar109 = (short)Var42 + sVar109;
      sVar81 = (short)((ulong)uVar61 >> 8);
      sVar110 = (short)((ulong)uVar69 >> 0x18);
      sVar92 = (short)((ulong)uVar74 >> 0x28);
      cVar88 = (bVar100 != 0) * (bVar100 < 0x100) * bVar100 - (0xff < bVar100);
      auVar87[0] = ((0 < sVar106) * (sVar106 < 0x100) * (char)sVar106 - (0xff < sVar106)) + cVar40;
      cVar89 = ((0 < sVar107) * (sVar107 < 0x100) * (char)sVar107 - (0xff < sVar107)) + cVar89;
      uVar82 = CONCAT11(cVar89,auVar87[0]);
      cVar91 = ((0 < sVar108) * (sVar108 < 0x100) * (char)sVar108 - (0xff < sVar108)) + cVar91;
      cVar94 = ((0 < sVar109) * (sVar109 < 0x100) * (char)sVar109 - (0xff < sVar109)) + cVar94;
      uVar86 = CONCAT13(cVar94,CONCAT12(cVar91,uVar82));
      uVar47 = CONCAT11((0 < sVar106) * (sVar106 < 0x100) * (char)sVar106 - (0xff < sVar106),cVar88)
      ;
      uVar60 = CONCAT12((0 < sVar107) * (sVar107 < 0x100) * (char)sVar107 - (0xff < sVar107),uVar47)
      ;
      uVar66 = CONCAT13((0 < sVar108) * (sVar108 < 0x100) * (char)sVar108 - (0xff < sVar108),uVar60)
      ;
      uVar67 = CONCAT14((0 < sVar109) * (sVar109 < 0x100) * (char)sVar109 - (0xff < sVar109),uVar66)
      ;
      auVar77[5] = (0 < sVar81) * (sVar81 < 0x100) * cVar95 - (0xff < sVar81);
      auVar77._0_5_ = uVar67;
      auVar77._6_8_ = 0;
      auVar11[0xe] = cVar88;
      auVar11._0_14_ = auVar77 << 0x38;
      auVar72._4_8_ = 0;
      auVar72._0_4_ = uVar66;
      auVar19._12_3_ =
           (int3)(CONCAT26(auVar11._13_2_,
                           CONCAT15((0 < sVar92) * (sVar92 < 0x100) * cVar98 - (0xff < sVar92),
                                    uVar67)) >> 0x28);
      auVar19._0_12_ = auVar72 << 0x38;
      auVar27._10_5_ =
           (int5)(CONCAT44(auVar19._11_4_,
                           CONCAT13((0 < sVar110) * (sVar110 < 0x100) * cVar97 - (0xff < sVar110),
                                    uVar60)) >> 0x18);
      auVar27._0_10_ = (unkuint10)uVar47 << 0x38;
      auVar54._7_8_ = 0;
      auVar54._0_7_ =
           (uint7)(CONCAT62(auVar27._9_6_,
                            CONCAT11((0 < sVar81) * (sVar81 < 0x100) * cVar95 - (0xff < sVar81),
                                     cVar88)) >> 8);
      auVar65._1_8_ = SUB158(auVar54 << 0x40,7);
      auVar65[0] = cVar94;
      auVar65._9_6_ = 0;
      auVar33[4] = cVar91;
      auVar33._0_4_ = uVar86;
      auVar33._5_10_ = SUB1510(auVar65 << 0x30,5);
      auVar55._11_4_ = 0;
      auVar55._0_11_ = auVar33._4_11_;
      auVar39[2] = cVar89;
      auVar39._0_2_ = uVar82;
      auVar39._3_12_ = SUB1512(auVar55 << 0x20,3);
      auVar87[1] = 0;
      auVar87._2_13_ = auVar39._2_13_;
      auVar87[0xf] = 0;
      *(undefined8 *)(param_4 + lVar79) = CONCAT44(uVar84,uVar83);
      ((undefined8 *)(param_4 + lVar79))[1] = CONCAT44(uVar86,uVar85);
      lVar79 = lVar79 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar79);
    iVar78 = uVar1 * 4;
  }
  if (param_3 != iVar78) {
    lVar79 = (long)iVar78 * 4;
                    /* WARNING: Could not recover jumptable at 0x0010081d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_VP8LConvertBGRAToRGB)(param_1 + lVar79,param_2 + lVar79,param_3 - iVar78,param_4 + lVar79);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PredictorAdd11_SSE2(long param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  int iVar35;
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar43 [16];
  undefined8 uVar44;
  undefined1 auVar15 [16];
  undefined1 auVar20 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar27;
  undefined1 auVar29 [16];
  undefined1 auVar33 [16];
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  
  auVar43 = ZEXT416(*(uint *)(param_4 + -4));
  if (param_3 < 4) {
    iVar8 = 0;
  }
  else {
    uVar1 = (param_3 - 4U >> 2) + 1;
    lVar9 = 0;
    do {
      auVar16 = *(undefined1 (*) [16])(param_2 + lVar9);
      auVar13 = *(undefined1 (*) [16])(param_2 + -4 + lVar9);
      pcVar2 = (char *)(param_1 + lVar9);
      auVar23._8_4_ = auVar13._8_4_;
      uVar36 = auVar16._8_4_;
      auVar18._4_4_ = uVar36;
      auVar18._0_4_ = auVar23._8_4_;
      uVar27 = auVar13._12_4_;
      auVar18._8_4_ = uVar27;
      uVar37 = auVar16._12_4_;
      auVar18._12_4_ = uVar37;
      auVar12._4_4_ = uVar36;
      auVar12._0_4_ = uVar36;
      auVar12._8_4_ = uVar37;
      auVar12._12_4_ = uVar37;
      uVar11 = auVar16._4_4_;
      auVar42._0_8_ = auVar13._0_8_;
      auVar42._8_4_ = auVar13._4_4_;
      auVar42._12_4_ = uVar11;
      uVar10 = auVar16._0_4_;
      auVar41._8_8_ = auVar42._8_8_;
      auVar41._0_4_ = auVar13._0_4_;
      auVar41._4_4_ = uVar10;
      auVar12 = psadbw(auVar12,auVar18);
      auVar29._0_8_ = auVar16._0_8_;
      auVar29._8_4_ = uVar11;
      auVar29._12_4_ = uVar11;
      auVar28._8_8_ = auVar29._8_8_;
      auVar28._4_4_ = uVar10;
      auVar28._0_4_ = uVar10;
      auVar30 = psadbw(auVar28,auVar41);
      auVar20._0_8_ = auVar43._0_8_;
      auVar20._8_4_ = auVar43._4_4_;
      auVar20._12_4_ = uVar11;
      auVar19._8_8_ = auVar20._8_8_;
      auVar19._0_4_ = auVar43._0_4_;
      auVar19._4_4_ = uVar10;
      auVar31 = packssdw(auVar30,auVar12);
      auVar12 = psadbw(auVar19,auVar41);
      auVar21._0_4_ = -(uint)(auVar31._0_4_ < auVar12._0_4_);
      auVar21._4_4_ = -(uint)(auVar31._4_4_ < auVar12._4_4_);
      iVar8 = auVar31._8_4_;
      auVar21._8_4_ = -(uint)(iVar8 < auVar12._8_4_);
      iVar35 = auVar31._12_4_;
      auVar21._12_4_ = -(uint)(iVar35 < auVar12._12_4_);
      lVar3 = param_1 + lVar9;
      cVar4 = *(char *)(lVar3 + 0xc);
      cVar5 = *(char *)(lVar3 + 0xd);
      cVar6 = *(char *)(lVar3 + 0xe);
      cVar7 = *(char *)(lVar3 + 0xf);
      auVar43 = auVar43 & auVar21 | ~auVar21 & auVar16;
      auVar23._0_8_ = auVar13._4_8_;
      auVar23._12_4_ = uVar36;
      auVar22._8_8_ = auVar23._8_8_;
      auVar22._4_4_ = uVar11;
      auVar22._0_4_ = auVar13._4_4_;
      uVar10 = CONCAT13(auVar43[3] + pcVar2[3],
                        CONCAT12(auVar43[2] + pcVar2[2],
                                 CONCAT11(auVar43[1] + pcVar2[1],auVar43[0] + *pcVar2)));
      auVar30._0_8_ =
           CONCAT17(auVar43[7] + pcVar2[7],
                    CONCAT16(auVar43[6] + pcVar2[6],
                             CONCAT15(auVar43[5] + pcVar2[5],CONCAT14(auVar43[4] + pcVar2[4],uVar10)
                                     )));
      auVar30[8] = auVar43[8] + pcVar2[8];
      auVar30[9] = auVar43[9] + pcVar2[9];
      auVar30[10] = auVar43[10] + pcVar2[10];
      auVar30[0xb] = auVar43[0xb] + pcVar2[0xb];
      auVar30[0xc] = auVar43[0xc] + pcVar2[0xc];
      auVar30[0xd] = auVar43[0xd] + pcVar2[0xd];
      auVar30[0xe] = auVar43[0xe] + pcVar2[0xe];
      auVar30[0xf] = auVar43[0xf] + pcVar2[0xf];
      auVar33._8_4_ = (int)((ulong)auVar30._0_8_ >> 0x20);
      auVar33._0_8_ = auVar30._0_8_;
      auVar33._12_4_ = uVar36;
      auVar32._8_8_ = auVar33._8_8_;
      auVar32._4_4_ = uVar11;
      auVar32._0_4_ = uVar10;
      auVar43 = psadbw(auVar32,auVar22);
      auVar34._0_4_ = -(uint)(auVar31._4_4_ < auVar43._0_4_);
      auVar34._4_4_ = -(uint)(iVar8 < auVar43._4_4_);
      auVar34._8_4_ = -(uint)(iVar35 < auVar43._8_4_);
      auVar34._12_4_ = -(uint)(0 < auVar43._12_4_);
      auVar43 = auVar34 & auVar30 | ~auVar34 & auVar16 >> 0x20;
      uVar17 = CONCAT13(auVar43[3] + *(char *)(lVar3 + 7),
                        CONCAT12(auVar43[2] + *(char *)(lVar3 + 6),
                                 CONCAT11(auVar43[1] + *(char *)(lVar3 + 5),
                                          auVar43[0] + *(char *)(lVar3 + 4))));
      auVar24._0_8_ =
           CONCAT17(auVar43[7] + *(char *)(lVar3 + 0xb),
                    CONCAT16(auVar43[6] + *(char *)(lVar3 + 10),
                             CONCAT15(auVar43[5] + *(char *)(lVar3 + 9),
                                      CONCAT14(auVar43[4] + *(char *)(lVar3 + 8),uVar17))));
      auVar24[8] = auVar43[8] + cVar4;
      auVar24[9] = auVar43[9] + cVar5;
      auVar24[10] = auVar43[10] + cVar6;
      auVar24[0xb] = auVar43[0xb] + cVar7;
      auVar24[0xc] = auVar43[0xc];
      auVar24[0xd] = auVar43[0xd];
      auVar24[0xe] = auVar43[0xe];
      auVar24[0xf] = auVar43[0xf];
      auVar39._8_4_ = uVar27;
      auVar39._0_8_ = auVar13._8_8_;
      auVar39._12_4_ = uVar37;
      auVar38._8_8_ = auVar39._8_8_;
      auVar38._4_4_ = uVar36;
      auVar38._0_4_ = auVar23._8_4_;
      auVar31._8_4_ = (int)((ulong)auVar24._0_8_ >> 0x20);
      auVar31._0_8_ = auVar24._0_8_;
      auVar31._12_4_ = uVar37;
      auVar13._8_8_ = auVar31._8_8_;
      auVar13._4_4_ = uVar36;
      auVar13._0_4_ = uVar17;
      auVar43 = psadbw(auVar13,auVar38);
      auVar14._0_4_ = -(uint)(iVar8 < auVar43._0_4_);
      auVar14._4_4_ = -(uint)(iVar35 < auVar43._4_4_);
      auVar14._8_4_ = -(uint)(0 < auVar43._8_4_);
      auVar14._12_4_ = -(uint)(0 < auVar43._12_4_);
      auVar43 = auVar14 & auVar24 | ~auVar14 & auVar16 >> 0x40;
      uVar11 = CONCAT13(auVar43[3] + *(char *)(lVar3 + 0xb),
                        CONCAT12(auVar43[2] + *(char *)(lVar3 + 10),
                                 CONCAT11(auVar43[1] + *(char *)(lVar3 + 9),
                                          auVar43[0] + *(char *)(lVar3 + 8))));
      auVar15._0_8_ =
           CONCAT17(auVar43[7] + cVar7,
                    CONCAT16(auVar43[6] + cVar6,
                             CONCAT15(auVar43[5] + cVar5,CONCAT14(auVar43[4] + cVar4,uVar11))));
      auVar15[8] = auVar43[8];
      auVar15[9] = auVar43[9];
      auVar15[10] = auVar43[10];
      auVar15[0xb] = auVar43[0xb];
      auVar15[0xc] = auVar43[0xc];
      auVar15[0xd] = auVar43[0xd];
      auVar15[0xe] = auVar43[0xe];
      auVar15[0xf] = auVar43[0xf];
      auVar40._4_4_ = uVar37;
      auVar40._0_4_ = uVar27;
      auVar40._8_8_ = 0;
      auVar25._4_4_ = uVar37;
      auVar25._0_4_ = uVar11;
      auVar25._8_4_ = (int)((ulong)auVar15._0_8_ >> 0x20);
      auVar25._12_4_ = 0;
      auVar43 = psadbw(auVar25,auVar40);
      auVar26._0_4_ = -(uint)(iVar35 < auVar43._0_4_);
      auVar26._4_4_ = -(uint)(0 < auVar43._4_4_);
      auVar26._8_4_ = -(uint)(0 < auVar43._8_4_);
      auVar26._12_4_ = -(uint)(0 < auVar43._12_4_);
      auVar16 = auVar15 & auVar26 | ~auVar26 & auVar16 >> 0x60;
      auVar43._0_4_ =
           CONCAT13(auVar16[3] + cVar7,
                    CONCAT12(auVar16[2] + cVar6,CONCAT11(auVar16[1] + cVar5,auVar16[0] + cVar4)));
      auVar43[4] = auVar16[4];
      auVar43[5] = auVar16[5];
      auVar43[6] = auVar16[6];
      auVar43[7] = auVar16[7];
      auVar43[8] = auVar16[8];
      auVar43[9] = auVar16[9];
      auVar43[10] = auVar16[10];
      auVar43[0xb] = auVar16[0xb];
      auVar43[0xc] = auVar16[0xc];
      auVar43[0xd] = auVar16[0xd];
      auVar43[0xe] = auVar16[0xe];
      auVar43[0xf] = auVar16[0xf];
      uVar44 = CONCAT44(auVar43._0_4_,uVar11);
      *(undefined8 *)(param_4 + lVar9) = CONCAT44(uVar17,uVar10);
      ((undefined8 *)(param_4 + lVar9))[1] = uVar44;
      lVar9 = lVar9 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar9);
    iVar8 = uVar1 * 4;
  }
  if (param_3 != iVar8) {
    lVar9 = (long)iVar8 * 4;
                    /* WARNING: Could not recover jumptable at 0x001009f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_VP8LTransformColorInverse)(param_1 + lVar9,param_2 + lVar9,param_3 - iVar8,param_4 + lVar9);
    return;
  }
  return;
}



undefined4 Predictor6_SSE2(byte *param_1,long param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  cVar1 = pavgb(*param_1,*(byte *)(param_2 + -4));
  cVar2 = pavgb(param_1[1],*(byte *)(param_2 + -3));
  cVar3 = pavgb(param_1[2],*(byte *)(param_2 + -2));
  cVar4 = pavgb(param_1[3],*(byte *)(param_2 + -1));
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  return CONCAT13(cVar4 - ((param_1[3] ^ *(byte *)(param_2 + -1)) & UNK_00101843),
                  CONCAT12(cVar3 - ((param_1[2] ^ *(byte *)(param_2 + -2)) & UNK_00101842),
                           CONCAT11(cVar2 - ((param_1[1] ^ *(byte *)(param_2 + -3)) & UNK_00101841),
                                    cVar1 - ((*param_1 ^ *(byte *)(param_2 + -4)) & _LC10))));
}



undefined4 Predictor7_SSE2(byte *param_1,byte *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  cVar1 = pavgb(*param_1,*param_2);
  cVar2 = pavgb(param_1[1],param_2[1]);
  cVar3 = pavgb(param_1[2],param_2[2]);
  cVar4 = pavgb(param_1[3],param_2[3]);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  return CONCAT13(cVar4 - ((param_1[3] ^ param_2[3]) & UNK_00101843),
                  CONCAT12(cVar3 - ((param_1[2] ^ param_2[2]) & UNK_00101842),
                           CONCAT11(cVar2 - ((param_1[1] ^ param_2[1]) & UNK_00101841),
                                    cVar1 - ((*param_1 ^ *param_2) & _LC10))));
}



undefined4 Predictor8_SSE2(undefined8 param_1,byte *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  cVar1 = pavgb(param_2[-4],*param_2);
  cVar2 = pavgb(param_2[-3],param_2[1]);
  cVar3 = pavgb(param_2[-2],param_2[2]);
  cVar4 = pavgb(param_2[-1],param_2[3]);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  return CONCAT13(cVar4 - ((param_2[-1] ^ param_2[3]) & UNK_00101843),
                  CONCAT12(cVar3 - ((param_2[-2] ^ param_2[2]) & UNK_00101842),
                           CONCAT11(cVar2 - ((param_2[-3] ^ param_2[1]) & UNK_00101841),
                                    cVar1 - ((param_2[-4] ^ *param_2) & _LC10))));
}



undefined4 Predictor9_SSE2(undefined8 param_1,byte *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  cVar1 = pavgb(*param_2,param_2[4]);
  cVar2 = pavgb(param_2[1],param_2[5]);
  cVar3 = pavgb(param_2[2],param_2[6]);
  cVar4 = pavgb(param_2[3],param_2[7]);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  return CONCAT13(cVar4 - ((param_2[3] ^ param_2[7]) & UNK_00101843),
                  CONCAT12(cVar3 - ((param_2[2] ^ param_2[6]) & UNK_00101842),
                           CONCAT11(cVar2 - ((param_2[1] ^ param_2[5]) & UNK_00101841),
                                    cVar1 - ((*param_2 ^ param_2[4]) & _LC10))));
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PredictorAdd6_SSE2(long param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  char cVar6;
  char cVar8;
  char cVar9;
  uint3 uVar7;
  char cVar10;
  
  auVar2 = __LC10;
  if (0 < param_3) {
    uVar3 = *(uint *)(param_4 + -4);
    lVar4 = 0;
    do {
      uVar1 = *(uint *)(param_2 + -4 + lVar4);
      cVar6 = pavgb((char)uVar3,(char)uVar1);
      cVar8 = pavgb((char)(uVar3 >> 8),(char)(uVar1 >> 8));
      cVar9 = pavgb((char)(uVar3 >> 0x10),(char)(uVar1 >> 0x10));
      cVar10 = pavgb((char)(uVar3 >> 0x18),(char)(uVar1 >> 0x18));
      pavgb(0,0);
      pavgb(0,0);
      pavgb(0,0);
      pavgb(0,0);
      pavgb(0,0);
      pavgb(0,0);
      pavgb(0,0);
      pavgb(0,0);
      pavgb(0,0);
      pavgb(0,0);
      pavgb(0,0);
      pavgb(0,0);
      auVar5 = ZEXT416(uVar3 ^ uVar1) & auVar2;
      uVar7 = CONCAT12(cVar9 - auVar5[2],CONCAT11(cVar8 - auVar5[1],cVar6 - auVar5[0]));
      uVar3 = (CONCAT13(cVar10 - auVar5[3],uVar7) & 0xff00ff00) +
              (*(uint *)(param_1 + lVar4) & 0xff00ff00) & 0xff00ff00 |
              (*(uint *)(param_1 + lVar4) & 0xff00ff) + (uVar7 & 0xff00ff) & 0xff00ff;
      *(uint *)(param_4 + lVar4) = uVar3;
      lVar4 = lVar4 + 4;
    } while ((long)param_3 * 4 - lVar4 != 0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PredictorAdd7_SSE2(long param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  char cVar6;
  char cVar8;
  char cVar9;
  uint3 uVar7;
  char cVar10;
  
  auVar2 = __LC10;
  if (0 < param_3) {
    uVar3 = *(uint *)(param_4 + -4);
    lVar4 = 0;
    do {
      uVar1 = *(uint *)(param_2 + lVar4);
      cVar6 = pavgb((char)uVar3,(char)uVar1);
      cVar8 = pavgb((char)(uVar3 >> 8),(char)(uVar1 >> 8));
      cVar9 = pavgb((char)(uVar3 >> 0x10),(char)(uVar1 >> 0x10));
      cVar10 = pavgb((char)(uVar3 >> 0x18),(char)(uVar1 >> 0x18));
      pavgb(0,0);
      pavgb(0,0);
      pavgb(0,0);
      pavgb(0,0);
      pavgb(0,0);
      pavgb(0,0);
      pavgb(0,0);
      pavgb(0,0);
      pavgb(0,0);
      pavgb(0,0);
      pavgb(0,0);
      pavgb(0,0);
      auVar5 = ZEXT416(uVar3 ^ uVar1) & auVar2;
      uVar7 = CONCAT12(cVar9 - auVar5[2],CONCAT11(cVar8 - auVar5[1],cVar6 - auVar5[0]));
      uVar3 = (CONCAT13(cVar10 - auVar5[3],uVar7) & 0xff00ff00) +
              (*(uint *)(param_1 + lVar4) & 0xff00ff00) & 0xff00ff00 |
              (*(uint *)(param_1 + lVar4) & 0xff00ff) + (uVar7 & 0xff00ff) & 0xff00ff;
      *(uint *)(param_4 + lVar4) = uVar3;
      lVar4 = lVar4 + 4;
    } while ((long)param_3 * 4 - lVar4 != 0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PredictorAdd8_SSE2(long param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  char *pcVar4;
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
  
  bVar68 = UNK_0010184f;
  bVar67 = UNK_0010184e;
  bVar66 = UNK_0010184d;
  bVar65 = UNK_0010184c;
  bVar64 = UNK_0010184b;
  bVar63 = UNK_0010184a;
  bVar62 = UNK_00101849;
  bVar61 = UNK_00101848;
  bVar60 = UNK_00101847;
  bVar59 = UNK_00101846;
  bVar58 = UNK_00101845;
  bVar57 = UNK_00101844;
  bVar56 = UNK_00101843;
  bVar55 = UNK_00101842;
  bVar54 = UNK_00101841;
  bVar53 = _LC10;
  if (param_3 < 4) {
    iVar69 = 0;
  }
  else {
    uVar1 = (param_3 - 4U >> 2) + 1;
    lVar70 = 0;
    do {
      puVar2 = (undefined1 *)(param_2 + lVar70);
      puVar6 = (undefined1 *)(param_2 + -4 + lVar70);
      pbVar3 = (byte *)(param_2 + lVar70);
      bVar38 = pbVar3[1];
      bVar39 = pbVar3[2];
      bVar40 = pbVar3[3];
      bVar41 = pbVar3[4];
      bVar42 = pbVar3[5];
      bVar43 = pbVar3[6];
      bVar44 = pbVar3[7];
      bVar45 = pbVar3[8];
      bVar46 = pbVar3[9];
      bVar47 = pbVar3[10];
      bVar48 = pbVar3[0xb];
      bVar49 = pbVar3[0xc];
      bVar50 = pbVar3[0xd];
      bVar51 = pbVar3[0xe];
      bVar52 = pbVar3[0xf];
      pbVar7 = (byte *)(param_2 + -4 + lVar70);
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
      pcVar4 = (char *)(param_1 + lVar70);
      cVar8 = pcVar4[1];
      cVar9 = pcVar4[2];
      cVar10 = pcVar4[3];
      cVar11 = pcVar4[4];
      cVar12 = pcVar4[5];
      cVar13 = pcVar4[6];
      cVar14 = pcVar4[7];
      cVar15 = pcVar4[8];
      cVar16 = pcVar4[9];
      cVar17 = pcVar4[10];
      cVar18 = pcVar4[0xb];
      cVar19 = pcVar4[0xc];
      cVar20 = pcVar4[0xd];
      cVar21 = pcVar4[0xe];
      cVar22 = pcVar4[0xf];
      cVar71 = pavgb(*puVar2,*puVar6);
      cVar72 = pavgb(puVar2[1],puVar6[1]);
      cVar73 = pavgb(puVar2[2],puVar6[2]);
      cVar74 = pavgb(puVar2[3],puVar6[3]);
      cVar75 = pavgb(puVar2[4],puVar6[4]);
      cVar76 = pavgb(puVar2[5],puVar6[5]);
      cVar77 = pavgb(puVar2[6],puVar6[6]);
      cVar78 = pavgb(puVar2[7],puVar6[7]);
      cVar79 = pavgb(puVar2[8],puVar6[8]);
      cVar80 = pavgb(puVar2[9],puVar6[9]);
      cVar81 = pavgb(puVar2[10],puVar6[10]);
      cVar82 = pavgb(puVar2[0xb],puVar6[0xb]);
      cVar83 = pavgb(puVar2[0xc],puVar6[0xc]);
      cVar84 = pavgb(puVar2[0xd],puVar6[0xd]);
      cVar85 = pavgb(puVar2[0xe],puVar6[0xe]);
      cVar86 = pavgb(puVar2[0xf],puVar6[0xf]);
      pcVar5 = (char *)(param_4 + lVar70);
      *pcVar5 = (cVar71 + *pcVar4) - ((*pbVar3 ^ *pbVar7) & bVar53);
      pcVar5[1] = (cVar72 + cVar8) - ((bVar38 ^ bVar23) & bVar54);
      pcVar5[2] = (cVar73 + cVar9) - ((bVar39 ^ bVar24) & bVar55);
      pcVar5[3] = (cVar74 + cVar10) - ((bVar40 ^ bVar25) & bVar56);
      pcVar5[4] = (cVar75 + cVar11) - ((bVar41 ^ bVar26) & bVar57);
      pcVar5[5] = (cVar76 + cVar12) - ((bVar42 ^ bVar27) & bVar58);
      pcVar5[6] = (cVar77 + cVar13) - ((bVar43 ^ bVar28) & bVar59);
      pcVar5[7] = (cVar78 + cVar14) - ((bVar44 ^ bVar29) & bVar60);
      pcVar5[8] = (cVar79 + cVar15) - ((bVar45 ^ bVar30) & bVar61);
      pcVar5[9] = (cVar80 + cVar16) - ((bVar46 ^ bVar31) & bVar62);
      pcVar5[10] = (cVar81 + cVar17) - ((bVar47 ^ bVar32) & bVar63);
      pcVar5[0xb] = (cVar82 + cVar18) - ((bVar48 ^ bVar33) & bVar64);
      pcVar5[0xc] = (cVar83 + cVar19) - ((bVar49 ^ bVar34) & bVar65);
      pcVar5[0xd] = (cVar84 + cVar20) - ((bVar50 ^ bVar35) & bVar66);
      pcVar5[0xe] = (cVar85 + cVar21) - ((bVar51 ^ bVar36) & bVar67);
      pcVar5[0xf] = (cVar86 + cVar22) - ((bVar52 ^ bVar37) & bVar68);
      lVar70 = lVar70 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar70);
    iVar69 = uVar1 * 4;
  }
  if (param_3 != iVar69) {
    lVar70 = (long)iVar69 * 4;
                    /* WARNING: Could not recover jumptable at 0x00100c9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_VP8LPredictors)(param_1 + lVar70,param_2 + lVar70,param_3 - iVar69,param_4 + lVar70);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PredictorAdd9_SSE2(long param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  char *pcVar4;
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
  
  bVar68 = UNK_0010184f;
  bVar67 = UNK_0010184e;
  bVar66 = UNK_0010184d;
  bVar65 = UNK_0010184c;
  bVar64 = UNK_0010184b;
  bVar63 = UNK_0010184a;
  bVar62 = UNK_00101849;
  bVar61 = UNK_00101848;
  bVar60 = UNK_00101847;
  bVar59 = UNK_00101846;
  bVar58 = UNK_00101845;
  bVar57 = UNK_00101844;
  bVar56 = UNK_00101843;
  bVar55 = UNK_00101842;
  bVar54 = UNK_00101841;
  bVar53 = _LC10;
  if (param_3 < 4) {
    iVar69 = 0;
  }
  else {
    uVar1 = (param_3 - 4U >> 2) + 1;
    lVar70 = 0;
    do {
      puVar2 = (undefined1 *)(param_2 + lVar70);
      puVar6 = (undefined1 *)(param_2 + 4 + lVar70);
      pbVar3 = (byte *)(param_2 + lVar70);
      bVar38 = pbVar3[1];
      bVar39 = pbVar3[2];
      bVar40 = pbVar3[3];
      bVar41 = pbVar3[4];
      bVar42 = pbVar3[5];
      bVar43 = pbVar3[6];
      bVar44 = pbVar3[7];
      bVar45 = pbVar3[8];
      bVar46 = pbVar3[9];
      bVar47 = pbVar3[10];
      bVar48 = pbVar3[0xb];
      bVar49 = pbVar3[0xc];
      bVar50 = pbVar3[0xd];
      bVar51 = pbVar3[0xe];
      bVar52 = pbVar3[0xf];
      pbVar7 = (byte *)(param_2 + 4 + lVar70);
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
      pcVar4 = (char *)(param_1 + lVar70);
      cVar8 = pcVar4[1];
      cVar9 = pcVar4[2];
      cVar10 = pcVar4[3];
      cVar11 = pcVar4[4];
      cVar12 = pcVar4[5];
      cVar13 = pcVar4[6];
      cVar14 = pcVar4[7];
      cVar15 = pcVar4[8];
      cVar16 = pcVar4[9];
      cVar17 = pcVar4[10];
      cVar18 = pcVar4[0xb];
      cVar19 = pcVar4[0xc];
      cVar20 = pcVar4[0xd];
      cVar21 = pcVar4[0xe];
      cVar22 = pcVar4[0xf];
      cVar71 = pavgb(*puVar2,*puVar6);
      cVar72 = pavgb(puVar2[1],puVar6[1]);
      cVar73 = pavgb(puVar2[2],puVar6[2]);
      cVar74 = pavgb(puVar2[3],puVar6[3]);
      cVar75 = pavgb(puVar2[4],puVar6[4]);
      cVar76 = pavgb(puVar2[5],puVar6[5]);
      cVar77 = pavgb(puVar2[6],puVar6[6]);
      cVar78 = pavgb(puVar2[7],puVar6[7]);
      cVar79 = pavgb(puVar2[8],puVar6[8]);
      cVar80 = pavgb(puVar2[9],puVar6[9]);
      cVar81 = pavgb(puVar2[10],puVar6[10]);
      cVar82 = pavgb(puVar2[0xb],puVar6[0xb]);
      cVar83 = pavgb(puVar2[0xc],puVar6[0xc]);
      cVar84 = pavgb(puVar2[0xd],puVar6[0xd]);
      cVar85 = pavgb(puVar2[0xe],puVar6[0xe]);
      cVar86 = pavgb(puVar2[0xf],puVar6[0xf]);
      pcVar5 = (char *)(param_4 + lVar70);
      *pcVar5 = (cVar71 + *pcVar4) - ((*pbVar3 ^ *pbVar7) & bVar53);
      pcVar5[1] = (cVar72 + cVar8) - ((bVar38 ^ bVar23) & bVar54);
      pcVar5[2] = (cVar73 + cVar9) - ((bVar39 ^ bVar24) & bVar55);
      pcVar5[3] = (cVar74 + cVar10) - ((bVar40 ^ bVar25) & bVar56);
      pcVar5[4] = (cVar75 + cVar11) - ((bVar41 ^ bVar26) & bVar57);
      pcVar5[5] = (cVar76 + cVar12) - ((bVar42 ^ bVar27) & bVar58);
      pcVar5[6] = (cVar77 + cVar13) - ((bVar43 ^ bVar28) & bVar59);
      pcVar5[7] = (cVar78 + cVar14) - ((bVar44 ^ bVar29) & bVar60);
      pcVar5[8] = (cVar79 + cVar15) - ((bVar45 ^ bVar30) & bVar61);
      pcVar5[9] = (cVar80 + cVar16) - ((bVar46 ^ bVar31) & bVar62);
      pcVar5[10] = (cVar81 + cVar17) - ((bVar47 ^ bVar32) & bVar63);
      pcVar5[0xb] = (cVar82 + cVar18) - ((bVar48 ^ bVar33) & bVar64);
      pcVar5[0xc] = (cVar83 + cVar19) - ((bVar49 ^ bVar34) & bVar65);
      pcVar5[0xd] = (cVar84 + cVar20) - ((bVar50 ^ bVar35) & bVar66);
      pcVar5[0xe] = (cVar85 + cVar21) - ((bVar51 ^ bVar36) & bVar67);
      pcVar5[0xf] = (cVar86 + cVar22) - ((bVar52 ^ bVar37) & bVar68);
      lVar70 = lVar70 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar70);
    iVar69 = uVar1 * 4;
  }
  if (param_3 != iVar69) {
    lVar70 = (long)iVar69 * 4;
                    /* WARNING: Could not recover jumptable at 0x00100d3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_VP8LPredictorsAdd)(param_1 + lVar70,param_2 + lVar70,param_3 - iVar69,param_4 + lVar70);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PredictorAdd10_SSE2(long param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  long lVar3;
  char *pcVar4;
  undefined1 *puVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  undefined1 auVar10 [16];
  int iVar11;
  long lVar12;
  char cVar13;
  undefined8 uVar14;
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
  undefined1 auVar15 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  char cVar41;
  undefined8 uVar42;
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
  char cVar58;
  char cVar59;
  char cVar60;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  
  auVar10 = __LC10;
  auVar61 = ZEXT416(*(uint *)(param_4 + -4));
  if (param_3 < 4) {
    iVar11 = 0;
  }
  else {
    uVar1 = (param_3 - 4U >> 2) + 1;
    lVar12 = 0;
    do {
      puVar5 = (undefined1 *)(param_2 + 4 + lVar12);
      puVar2 = (undefined1 *)(param_2 + lVar12);
      auVar15 = *(undefined1 (*) [16])(param_2 + -4 + lVar12);
      cVar13 = pavgb(*puVar2,*puVar5);
      cVar16 = pavgb(puVar2[1],puVar5[1]);
      cVar17 = pavgb(puVar2[2],puVar5[2]);
      cVar18 = pavgb(puVar2[3],puVar5[3]);
      cVar19 = pavgb(puVar2[4],puVar5[4]);
      cVar20 = pavgb(puVar2[5],puVar5[5]);
      cVar21 = pavgb(puVar2[6],puVar5[6]);
      cVar22 = pavgb(puVar2[7],puVar5[7]);
      cVar23 = pavgb(puVar2[8],puVar5[8]);
      cVar24 = pavgb(puVar2[9],puVar5[9]);
      cVar25 = pavgb(puVar2[10],puVar5[10]);
      cVar26 = pavgb(puVar2[0xb],puVar5[0xb]);
      cVar27 = pavgb(puVar2[0xc],puVar5[0xc]);
      cVar28 = pavgb(puVar2[0xd],puVar5[0xd]);
      cVar29 = pavgb(puVar2[0xe],puVar5[0xe]);
      cVar30 = pavgb(puVar2[0xf],puVar5[0xf]);
      lVar3 = param_1 + lVar12;
      cVar6 = *(char *)(lVar3 + 0xc);
      cVar7 = *(char *)(lVar3 + 0xd);
      cVar8 = *(char *)(lVar3 + 0xe);
      cVar9 = *(char *)(lVar3 + 0xf);
      cVar41 = pavgb(auVar61[0],auVar15[0]);
      cVar46 = pavgb(auVar61[1],auVar15[1]);
      cVar47 = pavgb(auVar61[2],auVar15[2]);
      cVar48 = pavgb(auVar61[3],auVar15[3]);
      cVar49 = pavgb(auVar61[4],auVar15[4]);
      cVar50 = pavgb(auVar61[5],auVar15[5]);
      cVar51 = pavgb(auVar61[6],auVar15[6]);
      cVar52 = pavgb(auVar61[7],auVar15[7]);
      uVar33 = auVar15[8];
      cVar53 = pavgb(auVar61[8],uVar33);
      uVar34 = auVar15[9];
      cVar54 = pavgb(auVar61[9],uVar34);
      uVar35 = auVar15[10];
      cVar55 = pavgb(auVar61[10],uVar35);
      uVar36 = auVar15[0xb];
      cVar56 = pavgb(auVar61[0xb],uVar36);
      uVar37 = auVar15[0xc];
      cVar57 = pavgb(auVar61[0xc],uVar37);
      uVar38 = auVar15[0xd];
      cVar58 = pavgb(auVar61[0xd],uVar38);
      uVar39 = auVar15[0xe];
      cVar59 = pavgb(auVar61[0xe],uVar39);
      uVar40 = auVar15[0xf];
      cVar60 = pavgb(auVar61[0xf],uVar40);
      auVar62 = (auVar61 ^ auVar15) & auVar10;
      pcVar4 = (char *)(param_1 + lVar12);
      auVar61 = (*(undefined1 (*) [16])(param_2 + lVar12) ^
                *(undefined1 (*) [16])(param_2 + 4 + lVar12)) & auVar10;
      auVar43[0] = cVar41 - auVar62[0];
      auVar43[1] = cVar46 - auVar62[1];
      auVar43[2] = cVar47 - auVar62[2];
      auVar43[3] = cVar48 - auVar62[3];
      auVar43[4] = cVar49 - auVar62[4];
      auVar43[5] = cVar50 - auVar62[5];
      auVar43[6] = cVar51 - auVar62[6];
      auVar43[7] = cVar52 - auVar62[7];
      auVar43[8] = cVar53 - auVar62[8];
      auVar43[9] = cVar54 - auVar62[9];
      auVar43[10] = cVar55 - auVar62[10];
      auVar43[0xb] = cVar56 - auVar62[0xb];
      auVar43[0xc] = cVar57 - auVar62[0xc];
      auVar43[0xd] = cVar58 - auVar62[0xd];
      auVar43[0xe] = cVar59 - auVar62[0xe];
      auVar43[0xf] = cVar60 - auVar62[0xf];
      auVar62[0] = cVar13 - auVar61[0];
      auVar62[1] = cVar16 - auVar61[1];
      auVar62[2] = cVar17 - auVar61[2];
      auVar62[3] = cVar18 - auVar61[3];
      auVar62[4] = cVar19 - auVar61[4];
      auVar62[5] = cVar20 - auVar61[5];
      auVar62[6] = cVar21 - auVar61[6];
      auVar62[7] = cVar22 - auVar61[7];
      auVar62[8] = cVar23 - auVar61[8];
      auVar62[9] = cVar24 - auVar61[9];
      auVar62[10] = cVar25 - auVar61[10];
      auVar62[0xb] = cVar26 - auVar61[0xb];
      auVar62[0xc] = cVar27 - auVar61[0xc];
      auVar62[0xd] = cVar28 - auVar61[0xd];
      auVar62[0xe] = cVar29 - auVar61[0xe];
      auVar62[0xf] = cVar30 - auVar61[0xf];
      cVar13 = pavgb(auVar62[0],auVar43[0]);
      cVar16 = pavgb(auVar62[1],auVar43[1]);
      cVar17 = pavgb(auVar62[2],auVar43[2]);
      cVar18 = pavgb(auVar62[3],auVar43[3]);
      cVar19 = pavgb(auVar62[4],auVar43[4]);
      cVar20 = pavgb(auVar62[5],auVar43[5]);
      cVar21 = pavgb(auVar62[6],auVar43[6]);
      cVar22 = pavgb(auVar62[7],auVar43[7]);
      cVar23 = pavgb(auVar62[8],auVar43[8]);
      cVar24 = pavgb(auVar62[9],auVar43[9]);
      cVar25 = pavgb(auVar62[10],auVar43[10]);
      cVar26 = pavgb(auVar62[0xb],auVar43[0xb]);
      cVar27 = pavgb(auVar62[0xc],auVar43[0xc]);
      cVar28 = pavgb(auVar62[0xd],auVar43[0xd]);
      cVar29 = pavgb(auVar62[0xe],auVar43[0xe]);
      cVar30 = pavgb(auVar62[0xf],auVar43[0xf]);
      auVar61 = (auVar43 ^ auVar62) & auVar10;
      cVar13 = (cVar13 + *pcVar4) - auVar61[0];
      cVar16 = (cVar16 + pcVar4[1]) - auVar61[1];
      cVar17 = (cVar17 + pcVar4[2]) - auVar61[2];
      cVar18 = (cVar18 + pcVar4[3]) - auVar61[3];
      auVar31._0_4_ = CONCAT13(cVar18,CONCAT12(cVar17,CONCAT11(cVar16,cVar13)));
      auVar31[4] = (cVar19 + pcVar4[4]) - auVar61[4];
      auVar31[5] = (cVar20 + pcVar4[5]) - auVar61[5];
      auVar31[6] = (cVar21 + pcVar4[6]) - auVar61[6];
      auVar31[7] = (cVar22 + pcVar4[7]) - auVar61[7];
      auVar31[8] = (cVar23 + pcVar4[8]) - auVar61[8];
      auVar31[9] = (cVar24 + pcVar4[9]) - auVar61[9];
      auVar31[10] = (cVar25 + pcVar4[10]) - auVar61[10];
      auVar31[0xb] = (cVar26 + pcVar4[0xb]) - auVar61[0xb];
      auVar31[0xc] = (cVar27 + pcVar4[0xc]) - auVar61[0xc];
      auVar31[0xd] = (cVar28 + pcVar4[0xd]) - auVar61[0xd];
      auVar31[0xe] = (cVar29 + pcVar4[0xe]) - auVar61[0xe];
      auVar31[0xf] = (cVar30 + pcVar4[0xf]) - auVar61[0xf];
      cVar13 = pavgb(cVar13,auVar15[4]);
      cVar16 = pavgb(cVar16,auVar15[5]);
      cVar17 = pavgb(cVar17,auVar15[6]);
      cVar18 = pavgb(cVar18,auVar15[7]);
      cVar19 = pavgb(auVar31[4],uVar33);
      cVar20 = pavgb(auVar31[5],uVar34);
      cVar21 = pavgb(auVar31[6],uVar35);
      cVar22 = pavgb(auVar31[7],uVar36);
      cVar23 = pavgb(auVar31[8],uVar37);
      cVar24 = pavgb(auVar31[9],uVar38);
      cVar25 = pavgb(auVar31[10],uVar39);
      cVar26 = pavgb(auVar31[0xb],uVar40);
      cVar27 = pavgb(auVar31[0xc],0);
      cVar28 = pavgb(auVar31[0xd],0);
      cVar29 = pavgb(auVar31[0xe],0);
      cVar30 = pavgb(auVar31[0xf],0);
      auVar61 = (auVar31 ^ auVar15 >> 0x20) & auVar10;
      auVar44[0] = cVar13 - auVar61[0];
      auVar44[1] = cVar16 - auVar61[1];
      auVar44[2] = cVar17 - auVar61[2];
      auVar44[3] = cVar18 - auVar61[3];
      auVar44[4] = cVar19 - auVar61[4];
      auVar44[5] = cVar20 - auVar61[5];
      auVar44[6] = cVar21 - auVar61[6];
      auVar44[7] = cVar22 - auVar61[7];
      auVar44[8] = cVar23 - auVar61[8];
      auVar44[9] = cVar24 - auVar61[9];
      auVar44[10] = cVar25 - auVar61[10];
      auVar44[0xb] = cVar26 - auVar61[0xb];
      auVar44[0xc] = cVar27 - auVar61[0xc];
      auVar44[0xd] = cVar28 - auVar61[0xd];
      auVar44[0xe] = cVar29 - auVar61[0xe];
      auVar44[0xf] = cVar30 - auVar61[0xf];
      cVar13 = pavgb(auVar62[4],auVar44[0]);
      cVar16 = pavgb(auVar62[5],auVar44[1]);
      cVar17 = pavgb(auVar62[6],auVar44[2]);
      cVar18 = pavgb(auVar62[7],auVar44[3]);
      cVar19 = pavgb(auVar62[8],auVar44[4]);
      cVar20 = pavgb(auVar62[9],auVar44[5]);
      cVar21 = pavgb(auVar62[10],auVar44[6]);
      cVar22 = pavgb(auVar62[0xb],auVar44[7]);
      cVar23 = pavgb(auVar62[0xc],auVar44[8]);
      cVar24 = pavgb(auVar62[0xd],auVar44[9]);
      cVar25 = pavgb(auVar62[0xe],auVar44[10]);
      cVar26 = pavgb(auVar62[0xf],auVar44[0xb]);
      cVar27 = pavgb(0,auVar44[0xc]);
      cVar28 = pavgb(0,auVar44[0xd]);
      cVar29 = pavgb(0,auVar44[0xe]);
      cVar30 = pavgb(0,auVar44[0xf]);
      auVar61 = (auVar44 ^ auVar62 >> 0x20) & auVar10;
      cVar13 = (cVar13 + *(char *)(lVar3 + 4)) - auVar61[0];
      cVar16 = (cVar16 + *(char *)(lVar3 + 5)) - auVar61[1];
      cVar17 = (cVar17 + *(char *)(lVar3 + 6)) - auVar61[2];
      cVar18 = (cVar18 + *(char *)(lVar3 + 7)) - auVar61[3];
      auVar32._0_4_ = CONCAT13(cVar18,CONCAT12(cVar17,CONCAT11(cVar16,cVar13)));
      auVar32[4] = (cVar19 + *(char *)(lVar3 + 8)) - auVar61[4];
      auVar32[5] = (cVar20 + *(char *)(lVar3 + 9)) - auVar61[5];
      auVar32[6] = (cVar21 + *(char *)(lVar3 + 10)) - auVar61[6];
      auVar32[7] = (cVar22 + *(char *)(lVar3 + 0xb)) - auVar61[7];
      auVar32[8] = (cVar23 + cVar6) - auVar61[8];
      auVar32[9] = (cVar24 + cVar7) - auVar61[9];
      auVar32[10] = (cVar25 + cVar8) - auVar61[10];
      auVar32[0xb] = (cVar26 + cVar9) - auVar61[0xb];
      auVar32[0xc] = cVar27 - auVar61[0xc];
      auVar32[0xd] = cVar28 - auVar61[0xd];
      auVar32[0xe] = cVar29 - auVar61[0xe];
      auVar32[0xf] = cVar30 - auVar61[0xf];
      cVar13 = pavgb(cVar13,uVar33);
      cVar16 = pavgb(cVar16,uVar34);
      cVar17 = pavgb(cVar17,uVar35);
      cVar18 = pavgb(cVar18,uVar36);
      cVar19 = pavgb(auVar32[4],uVar37);
      cVar20 = pavgb(auVar32[5],uVar38);
      cVar21 = pavgb(auVar32[6],uVar39);
      cVar22 = pavgb(auVar32[7],uVar40);
      cVar23 = pavgb(auVar32[8],0);
      cVar24 = pavgb(auVar32[9],0);
      cVar25 = pavgb(auVar32[10],0);
      cVar26 = pavgb(auVar32[0xb],0);
      cVar27 = pavgb(auVar32[0xc],0);
      cVar28 = pavgb(auVar32[0xd],0);
      cVar29 = pavgb(auVar32[0xe],0);
      cVar30 = pavgb(auVar32[0xf],0);
      auVar61 = (auVar32 ^ auVar15 >> 0x40) & auVar10;
      auVar45[0] = cVar13 - auVar61[0];
      auVar45[1] = cVar16 - auVar61[1];
      auVar45[2] = cVar17 - auVar61[2];
      auVar45[3] = cVar18 - auVar61[3];
      auVar45[4] = cVar19 - auVar61[4];
      auVar45[5] = cVar20 - auVar61[5];
      auVar45[6] = cVar21 - auVar61[6];
      auVar45[7] = cVar22 - auVar61[7];
      auVar45[8] = cVar23 - auVar61[8];
      auVar45[9] = cVar24 - auVar61[9];
      auVar45[10] = cVar25 - auVar61[10];
      auVar45[0xb] = cVar26 - auVar61[0xb];
      auVar45[0xc] = cVar27 - auVar61[0xc];
      auVar45[0xd] = cVar28 - auVar61[0xd];
      auVar45[0xe] = cVar29 - auVar61[0xe];
      auVar45[0xf] = cVar30 - auVar61[0xf];
      cVar13 = pavgb(auVar62[8],auVar45[0]);
      cVar16 = pavgb(auVar62[9],auVar45[1]);
      cVar17 = pavgb(auVar62[10],auVar45[2]);
      cVar18 = pavgb(auVar62[0xb],auVar45[3]);
      cVar19 = pavgb(auVar62[0xc],auVar45[4]);
      cVar20 = pavgb(auVar62[0xd],auVar45[5]);
      cVar21 = pavgb(auVar62[0xe],auVar45[6]);
      cVar22 = pavgb(auVar62[0xf],auVar45[7]);
      cVar23 = pavgb(0,auVar45[8]);
      cVar24 = pavgb(0,auVar45[9]);
      cVar25 = pavgb(0,auVar45[10]);
      cVar26 = pavgb(0,auVar45[0xb]);
      cVar27 = pavgb(0,auVar45[0xc]);
      cVar28 = pavgb(0,auVar45[0xd]);
      cVar29 = pavgb(0,auVar45[0xe]);
      cVar30 = pavgb(0,auVar45[0xf]);
      auVar61 = (auVar45 ^ auVar62 >> 0x40) & auVar10;
      cVar13 = (cVar13 + *(char *)(lVar3 + 8)) - auVar61[0];
      cVar16 = (cVar16 + *(char *)(lVar3 + 9)) - auVar61[1];
      cVar17 = (cVar17 + *(char *)(lVar3 + 10)) - auVar61[2];
      cVar18 = (cVar18 + *(char *)(lVar3 + 0xb)) - auVar61[3];
      auVar63._0_4_ = CONCAT13(cVar18,CONCAT12(cVar17,CONCAT11(cVar16,cVar13)));
      auVar63[4] = (cVar19 + cVar6) - auVar61[4];
      auVar63[5] = (cVar20 + cVar7) - auVar61[5];
      auVar63[6] = (cVar21 + cVar8) - auVar61[6];
      auVar63[7] = (cVar22 + cVar9) - auVar61[7];
      auVar63[8] = cVar23 - auVar61[8];
      auVar63[9] = cVar24 - auVar61[9];
      auVar63[10] = cVar25 - auVar61[10];
      auVar63[0xb] = cVar26 - auVar61[0xb];
      auVar63[0xc] = cVar27 - auVar61[0xc];
      auVar63[0xd] = cVar28 - auVar61[0xd];
      auVar63[0xe] = cVar29 - auVar61[0xe];
      auVar63[0xf] = cVar30 - auVar61[0xf];
      cVar13 = pavgb(cVar13,uVar37);
      cVar16 = pavgb(cVar16,uVar38);
      cVar17 = pavgb(cVar17,uVar39);
      cVar18 = pavgb(cVar18,uVar40);
      cVar19 = pavgb(auVar63[4],0);
      cVar20 = pavgb(auVar63[5],0);
      cVar21 = pavgb(auVar63[6],0);
      cVar22 = pavgb(auVar63[7],0);
      cVar23 = pavgb(auVar63[8],0);
      cVar24 = pavgb(auVar63[9],0);
      cVar25 = pavgb(auVar63[10],0);
      cVar26 = pavgb(auVar63[0xb],0);
      cVar27 = pavgb(auVar63[0xc],0);
      cVar28 = pavgb(auVar63[0xd],0);
      cVar29 = pavgb(auVar63[0xe],0);
      cVar30 = pavgb(auVar63[0xf],0);
      auVar61 = (auVar15 >> 0x60 ^ auVar63) & auVar10;
      auVar15[0] = cVar13 - auVar61[0];
      auVar15[1] = cVar16 - auVar61[1];
      auVar15[2] = cVar17 - auVar61[2];
      auVar15[3] = cVar18 - auVar61[3];
      auVar15[4] = cVar19 - auVar61[4];
      auVar15[5] = cVar20 - auVar61[5];
      auVar15[6] = cVar21 - auVar61[6];
      auVar15[7] = cVar22 - auVar61[7];
      auVar15[8] = cVar23 - auVar61[8];
      auVar15[9] = cVar24 - auVar61[9];
      auVar15[10] = cVar25 - auVar61[10];
      auVar15[0xb] = cVar26 - auVar61[0xb];
      auVar15[0xc] = cVar27 - auVar61[0xc];
      auVar15[0xd] = cVar28 - auVar61[0xd];
      auVar15[0xe] = cVar29 - auVar61[0xe];
      auVar15[0xf] = cVar30 - auVar61[0xf];
      cVar13 = pavgb(auVar62[0xc],auVar15[0]);
      cVar16 = pavgb(auVar62[0xd],auVar15[1]);
      cVar17 = pavgb(auVar62[0xe],auVar15[2]);
      cVar18 = pavgb(auVar62[0xf],auVar15[3]);
      cVar19 = pavgb(0,auVar15[4]);
      cVar20 = pavgb(0,auVar15[5]);
      cVar21 = pavgb(0,auVar15[6]);
      cVar22 = pavgb(0,auVar15[7]);
      cVar23 = pavgb(0,auVar15[8]);
      cVar24 = pavgb(0,auVar15[9]);
      cVar25 = pavgb(0,auVar15[10]);
      cVar26 = pavgb(0,auVar15[0xb]);
      cVar27 = pavgb(0,auVar15[0xc]);
      cVar28 = pavgb(0,auVar15[0xd]);
      cVar29 = pavgb(0,auVar15[0xe]);
      cVar30 = pavgb(0,auVar15[0xf]);
      auVar15 = (auVar62 >> 0x60 ^ auVar15) & auVar10;
      auVar61._0_4_ =
           CONCAT13((cVar18 + cVar9) - auVar15[3],
                    CONCAT12((cVar17 + cVar8) - auVar15[2],
                             CONCAT11((cVar16 + cVar7) - auVar15[1],(cVar13 + cVar6) - auVar15[0])))
      ;
      auVar61[4] = cVar19 - auVar15[4];
      auVar61[5] = cVar20 - auVar15[5];
      auVar61[6] = cVar21 - auVar15[6];
      auVar61[7] = cVar22 - auVar15[7];
      auVar61[8] = cVar23 - auVar15[8];
      auVar61[9] = cVar24 - auVar15[9];
      auVar61[10] = cVar25 - auVar15[10];
      auVar61[0xb] = cVar26 - auVar15[0xb];
      auVar61[0xc] = cVar27 - auVar15[0xc];
      auVar61[0xd] = cVar28 - auVar15[0xd];
      auVar61[0xe] = cVar29 - auVar15[0xe];
      auVar61[0xf] = cVar30 - auVar15[0xf];
      uVar42 = CONCAT44(auVar61._0_4_,auVar63._0_4_);
      uVar14 = CONCAT44(auVar32._0_4_,auVar31._0_4_);
      *(undefined8 *)(param_4 + lVar12) = uVar14;
      ((undefined8 *)(param_4 + lVar12))[1] = uVar42;
      lVar12 = lVar12 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar12);
    iVar11 = uVar1 * 4;
  }
  if (param_3 != iVar11) {
    lVar12 = (long)iVar11 * 4;
                    /* WARNING: Could not recover jumptable at 0x00100ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_VP8LAddGreenToBlueAndRed)
              (param_1 + lVar12,param_2 + lVar12,param_3 - iVar11,param_4 + lVar12);
    return;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100f47) */
/* WARNING: Removing unreachable block (ram,0x00100f3a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PredictorAdd1_SSE2(long param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  int iVar13;
  long lVar14;
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
  
  uVar4 = *(undefined4 *)(param_4 + -4);
  cVar27 = (char)uVar4;
  cVar28 = (char)((uint)uVar4 >> 8);
  cVar29 = (char)((uint)uVar4 >> 0x10);
  cVar30 = (char)((uint)uVar4 >> 0x18);
  if (param_3 < 4) {
    iVar13 = 0;
  }
  else {
    uVar1 = (param_3 - 4U >> 2) + 1;
    lVar14 = 0;
    do {
      pcVar2 = (char *)(param_1 + lVar14);
      cVar9 = pcVar2[4];
      cVar10 = pcVar2[5];
      cVar11 = pcVar2[6];
      cVar12 = pcVar2[7];
      pcVar3 = (char *)(param_1 + lVar14);
      uVar4 = *(undefined4 *)pcVar3;
      cVar5 = pcVar3[8];
      cVar6 = pcVar3[9];
      cVar7 = pcVar3[10];
      cVar8 = pcVar3[0xb];
      cVar23 = cVar27 + (char)uVar4;
      cVar24 = cVar28 + (char)((uint)uVar4 >> 8);
      cVar25 = cVar29 + (char)((uint)uVar4 >> 0x10);
      cVar26 = cVar30 + (char)((uint)uVar4 >> 0x18);
      cVar15 = cVar27 + *pcVar3;
      cVar16 = cVar28 + pcVar3[1];
      cVar17 = cVar29 + pcVar3[2];
      cVar18 = cVar30 + pcVar3[3];
      cVar19 = cVar27 + *pcVar2 + pcVar3[4];
      cVar20 = cVar28 + pcVar2[1] + pcVar3[5];
      cVar21 = cVar29 + pcVar2[2] + pcVar3[6];
      cVar22 = cVar30 + pcVar2[3] + pcVar3[7];
      cVar27 = cVar27 + *pcVar2 + pcVar3[4] + pcVar2[8] + pcVar3[0xc];
      cVar28 = cVar28 + pcVar2[1] + pcVar3[5] + pcVar2[9] + pcVar3[0xd];
      cVar29 = cVar29 + pcVar2[2] + pcVar3[6] + pcVar2[10] + pcVar3[0xe];
      cVar30 = cVar30 + pcVar2[3] + pcVar3[7] + pcVar2[0xb] + pcVar3[0xf];
      pcVar2 = (char *)(param_4 + lVar14);
      *pcVar2 = cVar15;
      pcVar2[1] = cVar16;
      pcVar2[2] = cVar17;
      pcVar2[3] = cVar18;
      pcVar2[4] = cVar19;
      pcVar2[5] = cVar20;
      pcVar2[6] = cVar21;
      pcVar2[7] = cVar22;
      pcVar2[8] = cVar23 + cVar9 + cVar5;
      pcVar2[9] = cVar24 + cVar10 + cVar6;
      pcVar2[10] = cVar25 + cVar11 + cVar7;
      pcVar2[0xb] = cVar26 + cVar12 + cVar8;
      pcVar2[0xc] = cVar27;
      pcVar2[0xd] = cVar28;
      pcVar2[0xe] = cVar29;
      pcVar2[0xf] = cVar30;
      lVar14 = lVar14 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar14);
    iVar13 = uVar1 * 4;
  }
  if (param_3 != iVar13) {
    lVar14 = (long)iVar13 * 4;
                    /* WARNING: Could not recover jumptable at 0x00100f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_VP8LConvertBGRAToBGR_C)(param_1 + lVar14,param_2 + lVar14,param_3 - iVar13,param_4 + lVar14);
    return;
  }
  return;
}



undefined4 Predictor13_SSE2(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  short sVar5;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined1 auVar6 [16];
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  uVar3 = param_2[-1];
  uVar4 = (ushort)(byte)((uint)uVar3 >> 8);
  uVar10 = (ushort)(((ushort)uVar2 & 0xff) + (ushort)(byte)uVar1) >> 1;
  uVar11 = (ushort)((ushort)(byte)((uint)uVar2 >> 8) + (ushort)(byte)((uint)uVar1 >> 8)) >> 1;
  uVar12 = (ushort)((ushort)(byte)((uint)uVar2 >> 0x10) + (ushort)(byte)((uint)uVar1 >> 0x10)) >> 1;
  uVar13 = (ushort)((ushort)(byte)((uint)uVar2 >> 0x18) + (ushort)(byte)((uint)uVar1 >> 0x18)) >> 1;
  uVar14 = (ushort)(byte)((uint)uVar3 >> 0x10);
  uVar15 = (ushort)(byte)((uint)uVar3 >> 0x18);
  auVar6._0_2_ = (uVar10 - (byte)uVar3) + (ushort)(uVar10 < (byte)uVar3);
  auVar6._2_2_ = (uVar11 - uVar4) + (ushort)(uVar11 < uVar4);
  auVar6._4_2_ = (uVar12 - uVar14) + (ushort)(uVar12 < uVar14);
  auVar6._6_2_ = (uVar13 - uVar15) + (ushort)(uVar13 < uVar15);
  auVar6._8_8_ = 0;
  auVar6 = psraw(auVar6,1);
  sVar5 = auVar6._0_2_ + uVar10;
  sVar7 = auVar6._2_2_ + uVar11;
  sVar8 = auVar6._4_2_ + uVar12;
  sVar9 = auVar6._6_2_ + uVar13;
  return CONCAT13((0 < sVar9) * (sVar9 < 0x100) * (char)sVar9 - (0xff < sVar9),
                  CONCAT12((0 < sVar8) * (sVar8 < 0x100) * (char)sVar8 - (0xff < sVar8),
                           CONCAT11((0 < sVar7) * (sVar7 < 0x100) * (char)sVar7 - (0xff < sVar7),
                                    (0 < sVar5) * (sVar5 < 0x100) * (char)sVar5 - (0xff < sVar5))));
}



uint Predictor11_SSE2(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
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
  unkuint9 Var17;
  undefined1 auVar18 [11];
  undefined1 auVar19 [13];
  undefined1 auVar20 [15];
  unkuint9 Var21;
  undefined1 auVar22 [11];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [15];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  auVar29 = ZEXT416(param_2[-1]);
  auVar32 = psubusb(auVar29,ZEXT416(uVar2));
  auVar31 = psubusb(ZEXT416(uVar2),auVar29);
  auVar28 = psubusb(ZEXT416(uVar1),auVar29);
  auVar29 = psubusb(auVar29,ZEXT416(uVar1));
  auVar30 = auVar31._0_15_ | auVar32._0_15_;
  auVar27 = auVar28._0_15_ | auVar29._0_15_;
  auVar4[0xd] = 0;
  auVar4._0_13_ = auVar30._0_13_;
  auVar4[0xe] = auVar30[7];
  auVar6[0xc] = auVar30[6];
  auVar6._0_12_ = auVar30._0_12_;
  auVar6._13_2_ = auVar4._13_2_;
  auVar8[0xb] = 0;
  auVar8._0_11_ = auVar30._0_11_;
  auVar8._12_3_ = auVar6._12_3_;
  auVar10[10] = auVar30[5];
  auVar10._0_10_ = auVar30._0_10_;
  auVar10._11_4_ = auVar8._11_4_;
  auVar12[9] = 0;
  auVar12._0_9_ = auVar30._0_9_;
  auVar12._10_5_ = auVar10._10_5_;
  auVar14[8] = auVar30[4];
  auVar14._0_8_ = auVar30._0_8_;
  auVar14._9_6_ = auVar12._9_6_;
  auVar16._7_8_ = 0;
  auVar16._0_7_ = auVar14._8_7_;
  Var17 = CONCAT81(SUB158(auVar16 << 0x40,7),auVar30[3]);
  auVar23._9_6_ = 0;
  auVar23._0_9_ = Var17;
  auVar18._1_10_ = SUB1510(auVar23 << 0x30,5);
  auVar18[0] = auVar30[2];
  auVar24._11_4_ = 0;
  auVar24._0_11_ = auVar18;
  auVar19._1_12_ = SUB1512(auVar24 << 0x20,3);
  auVar19[0] = auVar30[1];
  auVar3[0xd] = 0;
  auVar3._0_13_ = auVar27._0_13_;
  auVar3[0xe] = auVar27[7];
  auVar5[0xc] = auVar27[6];
  auVar5._0_12_ = auVar27._0_12_;
  auVar5._13_2_ = auVar3._13_2_;
  auVar7[0xb] = 0;
  auVar7._0_11_ = auVar27._0_11_;
  auVar7._12_3_ = auVar5._12_3_;
  auVar9[10] = auVar27[5];
  auVar9._0_10_ = auVar27._0_10_;
  auVar9._11_4_ = auVar7._11_4_;
  auVar11[9] = 0;
  auVar11._0_9_ = auVar27._0_9_;
  auVar11._10_5_ = auVar9._10_5_;
  auVar13[8] = auVar27[4];
  auVar13._0_8_ = auVar27._0_8_;
  auVar13._9_6_ = auVar11._9_6_;
  auVar20._7_8_ = 0;
  auVar20._0_7_ = auVar13._8_7_;
  Var21 = CONCAT81(SUB158(auVar20 << 0x40,7),auVar27[3]);
  auVar25._9_6_ = 0;
  auVar25._0_9_ = Var21;
  auVar22._1_10_ = SUB1510(auVar25 << 0x30,5);
  auVar22[0] = auVar27[2];
  auVar26._11_4_ = 0;
  auVar26._0_11_ = auVar22;
  auVar15[2] = auVar27[1];
  auVar15._0_2_ = auVar27._0_2_;
  auVar15._3_12_ = SUB1512(auVar26 << 0x20,3);
  if ((int)(short)((auVar27._0_2_ & 0xff) - (ushort)auVar30[0]) +
      (int)(short)(auVar15._2_2_ - auVar19._0_2_) + (int)(short)(auVar22._0_2_ - auVar18._0_2_) +
      (int)(short)((short)Var21 - (short)Var17) < 1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



void PredictorAdd13_SSE2(long param_1,long param_2,int param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  short sVar6;
  uint3 uVar7;
  short sVar9;
  short sVar10;
  short sVar11;
  undefined1 auVar8 [16];
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  
  if (0 < param_3) {
    uVar4 = *(uint *)(param_4 + -4);
    lVar5 = 0;
    do {
      uVar1 = *(undefined4 *)(param_2 + lVar5);
      uVar2 = *(undefined4 *)(param_2 + -4 + lVar5);
      uVar3 = (ushort)(byte)((uint)uVar2 >> 8);
      uVar12 = (ushort)(((ushort)uVar1 & 0xff) + (ushort)(byte)uVar4) >> 1;
      uVar13 = (ushort)((ushort)(byte)((uint)uVar1 >> 8) + (ushort)(byte)(uVar4 >> 8)) >> 1;
      uVar14 = (ushort)((ushort)(byte)((uint)uVar1 >> 0x10) + (ushort)(byte)(uVar4 >> 0x10)) >> 1;
      uVar15 = (ushort)((ushort)(byte)((uint)uVar1 >> 0x18) + (ushort)(byte)(uVar4 >> 0x18)) >> 1;
      uVar16 = (ushort)(byte)((uint)uVar2 >> 0x10);
      uVar17 = (ushort)(byte)((uint)uVar2 >> 0x18);
      auVar8._0_2_ = (uVar12 - (byte)uVar2) + (ushort)(uVar12 < (byte)uVar2);
      auVar8._2_2_ = (uVar13 - uVar3) + (ushort)(uVar13 < uVar3);
      auVar8._4_2_ = (uVar14 - uVar16) + (ushort)(uVar14 < uVar16);
      auVar8._6_2_ = (uVar15 - uVar17) + (ushort)(uVar15 < uVar17);
      auVar8._8_8_ = 0;
      auVar8 = psraw(auVar8,1);
      sVar6 = auVar8._0_2_ + uVar12;
      sVar9 = auVar8._2_2_ + uVar13;
      sVar10 = auVar8._4_2_ + uVar14;
      sVar11 = auVar8._6_2_ + uVar15;
      uVar7 = CONCAT12((0 < sVar10) * (sVar10 < 0x100) * (char)sVar10 - (0xff < sVar10),
                       CONCAT11((0 < sVar9) * (sVar9 < 0x100) * (char)sVar9 - (0xff < sVar9),
                                (0 < sVar6) * (sVar6 < 0x100) * (char)sVar6 - (0xff < sVar6)));
      uVar4 = (CONCAT13((0 < sVar11) * (sVar11 < 0x100) * (char)sVar11 - (0xff < sVar11),uVar7) &
              0xff00ff00) + (*(uint *)(param_1 + lVar5) & 0xff00ff00) & 0xff00ff00 |
              (*(uint *)(param_1 + lVar5) & 0xff00ff) + (uVar7 & 0xff00ff) & 0xff00ff;
      *(uint *)(param_4 + lVar5) = uVar4;
      lVar5 = lVar5 + 4;
    } while ((long)param_3 * 4 - lVar5 != 0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertBGRAToRGB_SSE2(undefined1 (*param_1) [16],ulong param_2,char *param_3)

{
  byte bVar1;
  byte bVar9;
  byte bVar17;
  byte bVar25;
  byte bVar31;
  char cVar37;
  char cVar44;
  char cVar51;
  char cVar58;
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
  short sVar76;
  short sVar77;
  short sVar78;
  short sVar79;
  short sVar80;
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
  undefined1 auVar96 [16];
  undefined1 auVar97 [14];
  undefined1 auVar98 [12];
  unkbyte10 Var99;
  undefined1 auVar100 [14];
  undefined1 auVar101 [12];
  unkbyte10 Var102;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [14];
  undefined1 auVar124 [12];
  unkbyte10 Var125;
  undefined1 auVar126 [14];
  undefined1 auVar127 [12];
  unkbyte10 Var128;
  undefined1 auVar129 [16];
  undefined1 (*pauVar130) [16];
  char *pcVar131;
  char *pcVar132;
  uint uVar133;
  ulong uVar134;
  uint uVar135;
  undefined4 uVar136;
  undefined8 uVar138;
  undefined1 auVar140 [12];
  undefined1 auVar141 [12];
  undefined1 auVar145 [16];
  undefined1 auVar153 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined4 uVar167;
  undefined8 uVar169;
  undefined1 auVar171 [12];
  undefined1 auVar176 [16];
  undefined1 auVar183 [16];
  undefined1 auVar191 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  ushort uVar211;
  ushort uVar224;
  undefined4 uVar212;
  undefined8 uVar214;
  ushort uVar225;
  ushort uVar226;
  ushort uVar227;
  ushort uVar228;
  undefined1 auVar216 [12];
  ushort uVar229;
  ushort uVar230;
  ushort uVar231;
  ushort uVar250;
  undefined4 uVar232;
  ushort uVar252;
  undefined8 uVar234;
  ushort uVar251;
  ushort uVar253;
  ushort uVar254;
  ushort uVar255;
  undefined1 auVar239 [16];
  undefined1 auVar247 [16];
  ushort uVar256;
  ushort uVar257;
  ushort uVar279;
  undefined4 uVar258;
  undefined8 uVar260;
  undefined1 auVar262 [12];
  ushort uVar281;
  ushort uVar285;
  ushort uVar287;
  undefined1 auVar267 [16];
  ushort uVar284;
  ushort uVar286;
  ushort uVar288;
  undefined1 auVar276 [16];
  undefined4 uVar289;
  undefined1 auVar292 [12];
  undefined1 auVar296 [16];
  undefined1 auVar304 [16];
  undefined1 auVar312 [16];
  undefined1 auVar313 [16];
  undefined1 auVar316 [12];
  undefined1 auVar317 [12];
  undefined1 auVar320 [16];
  undefined4 uVar330;
  undefined1 auVar333 [12];
  undefined1 auVar337 [16];
  undefined1 auVar345 [16];
  undefined1 auVar348 [12];
  undefined1 auVar349 [12];
  undefined1 auVar352 [16];
  undefined1 auVar360 [16];
  undefined1 auVar362 [16];
  ushort uVar364;
  undefined4 uVar365;
  ushort uVar374;
  ushort uVar378;
  undefined1 auVar368 [12];
  ushort uVar375;
  ushort uVar376;
  ushort uVar377;
  ushort uVar379;
  undefined1 auVar371 [16];
  ushort uVar380;
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
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  undefined6 uVar137;
  undefined1 auVar146 [16];
  undefined1 auVar154 [16];
  undefined1 auVar147 [16];
  undefined1 auVar155 [16];
  undefined1 auVar148 [16];
  undefined1 auVar156 [16];
  undefined1 auVar139 [12];
  undefined1 auVar149 [16];
  undefined1 auVar157 [16];
  undefined1 auVar150 [16];
  undefined1 auVar158 [16];
  undefined1 auVar142 [14];
  undefined1 auVar143 [14];
  undefined1 auVar144 [14];
  undefined1 auVar151 [16];
  undefined1 auVar159 [16];
  undefined1 auVar152 [16];
  undefined1 auVar160 [16];
  undefined1 auVar163 [16];
  byte bVar164;
  char cVar165;
  byte bVar166;
  undefined6 uVar168;
  undefined1 auVar184 [16];
  undefined1 auVar192 [16];
  undefined1 auVar177 [16];
  undefined1 auVar185 [16];
  undefined1 auVar193 [16];
  undefined1 auVar178 [16];
  undefined1 auVar186 [16];
  undefined1 auVar194 [16];
  undefined1 auVar170 [12];
  undefined1 auVar172 [12];
  undefined1 auVar179 [16];
  undefined1 auVar187 [16];
  undefined1 auVar195 [16];
  undefined1 auVar180 [16];
  undefined1 auVar188 [16];
  undefined1 auVar196 [16];
  undefined1 auVar173 [14];
  undefined1 auVar174 [14];
  undefined1 auVar175 [14];
  undefined1 auVar181 [16];
  undefined1 auVar189 [16];
  undefined1 auVar197 [16];
  undefined1 auVar182 [16];
  undefined1 auVar190 [16];
  undefined1 auVar198 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  byte bVar205;
  byte bVar206;
  char cVar207;
  char cVar208;
  byte bVar209;
  byte bVar210;
  undefined6 uVar213;
  undefined1 auVar215 [12];
  undefined1 auVar217 [12];
  undefined1 auVar218 [14];
  undefined1 auVar219 [14];
  undefined1 auVar220 [14];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined6 uVar233;
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar235 [12];
  undefined1 auVar236 [12];
  undefined1 auVar243 [16];
  undefined1 auVar244 [16];
  undefined1 auVar237 [14];
  undefined1 auVar238 [14];
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined6 uVar259;
  undefined1 auVar268 [16];
  undefined1 auVar269 [16];
  undefined1 auVar270 [16];
  undefined1 auVar261 [12];
  undefined1 auVar263 [12];
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  undefined1 auVar264 [14];
  undefined1 auVar265 [14];
  undefined1 auVar266 [14];
  undefined1 auVar273 [16];
  undefined1 auVar274 [16];
  undefined1 auVar275 [16];
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  byte bVar280;
  char cVar282;
  byte bVar283;
  undefined6 uVar290;
  undefined1 auVar297 [16];
  undefined1 auVar305 [16];
  undefined8 uVar291;
  undefined1 auVar298 [16];
  undefined1 auVar306 [16];
  undefined1 auVar299 [16];
  undefined1 auVar307 [16];
  undefined1 auVar293 [12];
  undefined1 auVar300 [16];
  undefined1 auVar308 [16];
  undefined1 auVar301 [16];
  undefined1 auVar309 [16];
  undefined1 auVar294 [14];
  undefined1 auVar295 [14];
  undefined1 auVar302 [16];
  undefined1 auVar310 [16];
  undefined1 auVar303 [16];
  undefined1 auVar311 [16];
  undefined1 auVar314 [16];
  undefined1 auVar315 [16];
  undefined1 auVar321 [16];
  undefined1 auVar322 [16];
  undefined1 auVar323 [16];
  undefined1 auVar324 [16];
  undefined1 auVar325 [16];
  undefined1 auVar318 [14];
  undefined1 auVar319 [14];
  undefined1 auVar326 [16];
  undefined1 auVar327 [16];
  undefined1 auVar328 [16];
  undefined1 auVar329 [16];
  undefined6 uVar331;
  undefined1 auVar338 [16];
  undefined8 uVar332;
  undefined1 auVar339 [16];
  undefined1 auVar340 [16];
  undefined1 auVar334 [12];
  undefined1 auVar341 [16];
  undefined1 auVar342 [16];
  undefined1 auVar335 [14];
  undefined1 auVar336 [14];
  undefined1 auVar343 [16];
  undefined1 auVar344 [16];
  undefined1 auVar346 [16];
  undefined1 auVar347 [16];
  undefined1 auVar353 [16];
  undefined1 auVar354 [16];
  undefined1 auVar355 [16];
  undefined1 auVar356 [16];
  undefined1 auVar357 [16];
  undefined1 auVar350 [14];
  undefined1 auVar351 [14];
  undefined1 auVar358 [16];
  undefined1 auVar359 [16];
  undefined1 auVar361 [16];
  undefined1 auVar363 [16];
  undefined6 uVar366;
  undefined1 auVar367 [12];
  undefined1 auVar369 [14];
  undefined1 auVar370 [14];
  undefined1 auVar372 [16];
  undefined1 auVar373 [16];
  
  auVar129 = __LC8;
  if (0x1f < (int)param_2) {
    uVar133 = (int)param_2 - 0x20;
    uVar135 = uVar133 >> 5;
    uVar134 = (ulong)(uVar135 + 1);
    pauVar130 = param_1;
    pcVar131 = param_3;
    do {
      auVar162 = *pauVar130;
      cVar33 = pauVar130[1][4];
      cVar27 = pauVar130[1][5];
      cVar43 = pauVar130[1][6];
      pcVar132 = pcVar131 + 0x60;
      cVar34 = pauVar130[3][4];
      cVar30 = pauVar130[3][5];
      cVar42 = pauVar130[3][6];
      auVar313 = pauVar130[4];
      auVar182._0_14_ = auVar162._0_14_;
      auVar182[0xe] = auVar162[7];
      auVar182[0xf] = pauVar130[1][7];
      auVar181._14_2_ = auVar182._14_2_;
      auVar181._0_13_ = auVar162._0_13_;
      auVar181[0xd] = cVar43;
      bVar209 = auVar162[6];
      auVar180._13_3_ = auVar181._13_3_;
      auVar180._0_12_ = auVar162._0_12_;
      auVar180[0xc] = bVar209;
      auVar179._12_4_ = auVar180._12_4_;
      auVar179._0_11_ = auVar162._0_11_;
      auVar179[0xb] = cVar27;
      cVar207 = auVar162[5];
      auVar178._11_5_ = auVar179._11_5_;
      auVar178._0_10_ = auVar162._0_10_;
      auVar178[10] = cVar207;
      auVar177._10_6_ = auVar178._10_6_;
      auVar177._0_9_ = auVar162._0_9_;
      auVar177[9] = cVar33;
      bVar205 = auVar162[4];
      auVar176._9_7_ = auVar177._9_7_;
      auVar176._0_8_ = auVar162._0_8_;
      auVar176[8] = bVar205;
      auVar81._1_8_ = auVar176._8_8_;
      auVar81[0] = pauVar130[1][3];
      auVar81._9_7_ = 0;
      auVar345._10_6_ = 0;
      auVar345._0_10_ = SUB1610(auVar81 << 0x38,6);
      auVar371._11_5_ = 0;
      auVar371._0_11_ = SUB1611(auVar345 << 0x30,5);
      auVar199._12_4_ = 0;
      auVar199._0_12_ = SUB1612(auVar371 << 0x28,4);
      auVar276._13_3_ = 0;
      auVar276._0_13_ = SUB1613(auVar199 << 0x20,3);
      auVar362._14_2_ = 0;
      auVar362._0_14_ = SUB1614(auVar276 << 0x18,2);
      auVar362 = auVar362 << 0x10;
      auVar276 = pauVar130[2];
      auVar152._0_14_ = auVar276._0_14_;
      auVar152[0xe] = auVar276[7];
      auVar152[0xf] = pauVar130[3][7];
      auVar151._14_2_ = auVar152._14_2_;
      auVar151._0_13_ = auVar276._0_13_;
      auVar151[0xd] = cVar42;
      bVar166 = auVar276[6];
      auVar150._13_3_ = auVar151._13_3_;
      auVar150._0_12_ = auVar276._0_12_;
      auVar150[0xc] = bVar166;
      auVar149._12_4_ = auVar150._12_4_;
      auVar149._0_11_ = auVar276._0_11_;
      auVar149[0xb] = cVar30;
      cVar165 = auVar276[5];
      auVar148._11_5_ = auVar149._11_5_;
      auVar148._0_10_ = auVar276._0_10_;
      auVar148[10] = cVar165;
      auVar147._10_6_ = auVar148._10_6_;
      auVar147._0_9_ = auVar276._0_9_;
      auVar147[9] = cVar34;
      bVar164 = auVar276[4];
      auVar146._9_7_ = auVar147._9_7_;
      auVar146._0_8_ = auVar276._0_8_;
      auVar146[8] = bVar164;
      auVar86._1_8_ = auVar146._8_8_;
      auVar86[0] = pauVar130[3][3];
      auVar86._9_7_ = 0;
      auVar85._10_6_ = 0;
      auVar85._0_10_ = SUB1610(auVar86 << 0x38,6);
      auVar84._11_5_ = 0;
      auVar84._0_11_ = SUB1611(auVar85 << 0x30,5);
      auVar83._12_4_ = 0;
      auVar83._0_12_ = SUB1612(auVar84 << 0x28,4);
      auVar82._13_3_ = 0;
      auVar82._0_13_ = SUB1613(auVar83 << 0x20,3);
      auVar145._14_2_ = 0;
      auVar145._0_14_ = SUB1614(auVar82 << 0x18,2);
      auVar145 = auVar145 << 0x10;
      auVar246._0_14_ = auVar362._0_14_;
      auVar246[0xe] = pauVar130[1][3];
      auVar246[0xf] = pauVar130[1][0xb];
      auVar245._14_2_ = auVar246._14_2_;
      auVar245._0_13_ = auVar362._0_13_;
      auVar245[0xd] = auVar162[0xb];
      auVar244._13_3_ = auVar245._13_3_;
      auVar244._0_12_ = auVar362._0_12_;
      auVar244[0xc] = auVar162[3];
      auVar243._12_4_ = auVar244._12_4_;
      auVar243._0_11_ = auVar362._0_11_;
      auVar243[0xb] = pauVar130[1][10];
      auVar242._11_5_ = auVar243._11_5_;
      auVar242._0_10_ = auVar362._0_10_;
      auVar242[10] = pauVar130[1][2];
      auVar241._10_6_ = auVar242._10_6_;
      auVar241._0_9_ = auVar362._0_9_;
      auVar241[9] = auVar162[10];
      auVar240._9_7_ = auVar241._9_7_;
      auVar240._0_8_ = auVar362._0_8_;
      auVar240[8] = auVar162[2];
      auVar91._1_8_ = auVar240._8_8_;
      auVar91[0] = pauVar130[1][9];
      auVar91._9_7_ = 0;
      auVar90._10_6_ = 0;
      auVar90._0_10_ = SUB1610(auVar91 << 0x38,6);
      auVar89._11_5_ = 0;
      auVar89._0_11_ = SUB1611(auVar90 << 0x30,5);
      auVar88._12_4_ = 0;
      auVar88._0_12_ = SUB1612(auVar89 << 0x28,4);
      auVar87._13_3_ = 0;
      auVar87._0_13_ = SUB1613(auVar88 << 0x20,3);
      auVar239._14_2_ = 0;
      auVar239._0_14_ = SUB1614(auVar87 << 0x18,2);
      auVar239 = auVar239 << 0x10;
      auVar303._0_14_ = auVar145._0_14_;
      auVar303[0xe] = pauVar130[3][3];
      auVar303[0xf] = pauVar130[3][0xb];
      auVar302._14_2_ = auVar303._14_2_;
      auVar302._0_13_ = auVar145._0_13_;
      auVar302[0xd] = auVar276[0xb];
      auVar301._13_3_ = auVar302._13_3_;
      auVar301._0_12_ = auVar145._0_12_;
      auVar301[0xc] = auVar276[3];
      auVar300._12_4_ = auVar301._12_4_;
      auVar300._0_11_ = auVar145._0_11_;
      auVar300[0xb] = pauVar130[3][10];
      auVar299._11_5_ = auVar300._11_5_;
      auVar299._0_10_ = auVar145._0_10_;
      auVar299[10] = pauVar130[3][2];
      auVar298._10_6_ = auVar299._10_6_;
      auVar298._0_9_ = auVar145._0_9_;
      auVar298[9] = auVar276[10];
      auVar297._9_7_ = auVar298._9_7_;
      auVar297._0_8_ = auVar145._0_8_;
      auVar297[8] = auVar276[2];
      auVar96._1_8_ = auVar297._8_8_;
      auVar96[0] = pauVar130[3][9];
      auVar96._9_7_ = 0;
      auVar95._10_6_ = 0;
      auVar95._0_10_ = SUB1610(auVar96 << 0x38,6);
      auVar94._11_5_ = 0;
      auVar94._0_11_ = SUB1611(auVar95 << 0x30,5);
      auVar93._12_4_ = 0;
      auVar93._0_12_ = SUB1612(auVar94 << 0x28,4);
      auVar92._13_3_ = 0;
      auVar92._0_13_ = SUB1613(auVar93 << 0x20,3);
      auVar296._14_2_ = 0;
      auVar296._0_14_ = SUB1614(auVar92 << 0x18,2);
      auVar296 = auVar296 << 0x10;
      uVar136 = CONCAT13(auVar162[0xe],CONCAT12(auVar162[10],CONCAT11(bVar209,auVar162[2])));
      uVar137 = CONCAT15(cVar43,CONCAT14(pauVar130[1][2],uVar136));
      auVar247._0_8_ = CONCAT17(pauVar130[1][0xe],CONCAT16(pauVar130[1][10],uVar137));
      auVar344._0_14_ = auVar239._0_14_;
      auVar344[0xe] = pauVar130[1][9];
      auVar344[0xf] = pauVar130[1][0xd];
      auVar343._14_2_ = auVar344._14_2_;
      auVar343._0_13_ = auVar239._0_13_;
      auVar343[0xd] = cVar27;
      auVar342._13_3_ = auVar343._13_3_;
      auVar342._0_12_ = auVar239._0_12_;
      auVar342[0xc] = pauVar130[1][1];
      auVar341._12_4_ = auVar342._12_4_;
      auVar341._0_11_ = auVar239._0_11_;
      auVar341[0xb] = auVar162[0xd];
      auVar340._11_5_ = auVar341._11_5_;
      auVar340._0_10_ = auVar239._0_10_;
      auVar340[10] = auVar162[9];
      auVar339._10_6_ = auVar340._10_6_;
      auVar339._0_9_ = auVar239._0_9_;
      auVar339[9] = cVar207;
      auVar338._9_7_ = auVar339._9_7_;
      auVar338._0_8_ = auVar239._0_8_;
      auVar338[8] = auVar162[1];
      Var99 = CONCAT91(CONCAT81(auVar338._8_8_,pauVar130[1][0xc]),pauVar130[1][8]);
      auVar98._2_10_ = Var99;
      auVar98[1] = cVar33;
      auVar98[0] = pauVar130[1][0];
      auVar97._2_12_ = auVar98;
      auVar97[1] = auVar162[0xc];
      auVar97[0] = auVar162[8];
      auVar337[1] = bVar205;
      auVar337[0] = auVar162[0];
      auVar337._2_14_ = auVar97;
      uVar167 = CONCAT13(auVar276[0xe],CONCAT12(auVar276[10],CONCAT11(bVar166,auVar276[2])));
      uVar168 = CONCAT15(cVar42,CONCAT14(pauVar130[3][2],uVar167));
      uVar138 = CONCAT17(pauVar130[3][0xe],CONCAT16(pauVar130[3][10],uVar168));
      auVar247._8_8_ = uVar138;
      cVar35 = pauVar130[5][4];
      cVar29 = pauVar130[5][5];
      cVar41 = pauVar130[5][6];
      auVar190._0_14_ = auVar296._0_14_;
      auVar190[0xe] = pauVar130[3][9];
      auVar190[0xf] = pauVar130[3][0xd];
      auVar189._14_2_ = auVar190._14_2_;
      auVar189._0_13_ = auVar296._0_13_;
      auVar189[0xd] = cVar30;
      auVar188._13_3_ = auVar189._13_3_;
      auVar188._0_12_ = auVar296._0_12_;
      auVar188[0xc] = pauVar130[3][1];
      auVar187._12_4_ = auVar188._12_4_;
      auVar187._0_11_ = auVar296._0_11_;
      auVar187[0xb] = auVar276[0xd];
      auVar186._11_5_ = auVar187._11_5_;
      auVar186._0_10_ = auVar296._0_10_;
      auVar186[10] = auVar276[9];
      auVar185._10_6_ = auVar186._10_6_;
      auVar185._0_9_ = auVar296._0_9_;
      auVar185[9] = cVar165;
      auVar184._9_7_ = auVar185._9_7_;
      auVar184._0_8_ = auVar296._0_8_;
      auVar184[8] = auVar276[1];
      Var102 = CONCAT91(CONCAT81(auVar184._8_8_,pauVar130[3][0xc]),pauVar130[3][8]);
      auVar101._2_10_ = Var102;
      auVar101[1] = cVar34;
      auVar101[0] = pauVar130[3][0];
      auVar100._2_12_ = auVar101;
      auVar100[1] = auVar276[0xc];
      auVar100[0] = auVar276[8];
      auVar183[1] = bVar164;
      auVar183[0] = auVar276[0];
      auVar183._2_14_ = auVar100;
      cVar36 = pauVar130[7][4];
      cVar32 = pauVar130[7][5];
      cVar49 = pauVar130[7][6];
      auVar201._0_8_ = auVar337._0_8_;
      auVar201._8_8_ = auVar183._0_8_;
      auVar274._0_14_ = auVar313._0_14_;
      auVar274[0xe] = auVar313[7];
      auVar274[0xf] = pauVar130[5][7];
      auVar273._14_2_ = auVar274._14_2_;
      auVar273._0_13_ = auVar313._0_13_;
      auVar273[0xd] = cVar41;
      bVar283 = auVar313[6];
      auVar272._13_3_ = auVar273._13_3_;
      auVar272._0_12_ = auVar313._0_12_;
      auVar272[0xc] = bVar283;
      auVar271._12_4_ = auVar272._12_4_;
      auVar271._0_11_ = auVar313._0_11_;
      auVar271[0xb] = cVar29;
      cVar282 = auVar313[5];
      auVar270._11_5_ = auVar271._11_5_;
      auVar270._0_10_ = auVar313._0_10_;
      auVar270[10] = cVar282;
      auVar269._10_6_ = auVar270._10_6_;
      auVar269._0_9_ = auVar313._0_9_;
      auVar269[9] = cVar35;
      bVar280 = auVar313[4];
      auVar268._9_7_ = auVar269._9_7_;
      auVar268._0_8_ = auVar313._0_8_;
      auVar268[8] = bVar280;
      auVar107._1_8_ = auVar268._8_8_;
      auVar107[0] = pauVar130[5][3];
      auVar107._9_7_ = 0;
      auVar106._10_6_ = 0;
      auVar106._0_10_ = SUB1610(auVar107 << 0x38,6);
      auVar105._11_5_ = 0;
      auVar105._0_11_ = SUB1611(auVar106 << 0x30,5);
      auVar104._12_4_ = 0;
      auVar104._0_12_ = SUB1612(auVar105 << 0x28,4);
      auVar103._13_3_ = 0;
      auVar103._0_13_ = SUB1613(auVar104 << 0x20,3);
      auVar267._14_2_ = 0;
      auVar267._0_14_ = SUB1614(auVar103 << 0x18,2);
      auVar267 = auVar267 << 0x10;
      auVar362 = pauVar130[6];
      auVar360._8_8_ = auVar184._8_8_;
      auVar360._0_8_ = auVar338._8_8_;
      auVar371 = auVar247 & auVar129;
      uVar231 = (ushort)bVar209;
      uVar250 = (ushort)((uint)uVar136 >> 0x18);
      uVar251 = (ushort)((uint6)uVar137 >> 0x28);
      uVar252 = (ushort)((ulong)auVar247._0_8_ >> 0x38);
      uVar253 = (ushort)bVar166;
      uVar254 = (ushort)((uint)uVar167 >> 0x18);
      uVar255 = (ushort)((uint6)uVar168 >> 0x28);
      uVar256 = (ushort)((ulong)uVar138 >> 0x38);
      auVar198._0_14_ = auVar362._0_14_;
      auVar198[0xe] = auVar362[7];
      auVar198[0xf] = pauVar130[7][7];
      auVar197._14_2_ = auVar198._14_2_;
      auVar197._0_13_ = auVar362._0_13_;
      auVar197[0xd] = cVar49;
      bVar210 = auVar362[6];
      auVar196._13_3_ = auVar197._13_3_;
      auVar196._0_12_ = auVar362._0_12_;
      auVar196[0xc] = bVar210;
      auVar195._12_4_ = auVar196._12_4_;
      auVar195._0_11_ = auVar362._0_11_;
      auVar195[0xb] = cVar32;
      cVar208 = auVar362[5];
      auVar194._11_5_ = auVar195._11_5_;
      auVar194._0_10_ = auVar362._0_10_;
      auVar194[10] = cVar208;
      auVar193._10_6_ = auVar194._10_6_;
      auVar193._0_9_ = auVar362._0_9_;
      auVar193[9] = cVar36;
      bVar206 = auVar362[4];
      auVar192._9_7_ = auVar193._9_7_;
      auVar192._0_8_ = auVar362._0_8_;
      auVar192[8] = bVar206;
      auVar112._1_8_ = auVar192._8_8_;
      auVar112[0] = pauVar130[7][3];
      auVar112._9_7_ = 0;
      auVar111._10_6_ = 0;
      auVar111._0_10_ = SUB1610(auVar112 << 0x38,6);
      auVar110._11_5_ = 0;
      auVar110._0_11_ = SUB1611(auVar111 << 0x30,5);
      auVar109._12_4_ = 0;
      auVar109._0_12_ = SUB1612(auVar110 << 0x28,4);
      auVar108._13_3_ = 0;
      auVar108._0_13_ = SUB1613(auVar109 << 0x20,3);
      auVar191._14_2_ = 0;
      auVar191._0_14_ = SUB1614(auVar108 << 0x18,2);
      auVar191 = auVar191 << 0x10;
      auVar160._0_14_ = auVar267._0_14_;
      auVar160[0xe] = pauVar130[5][3];
      auVar160[0xf] = pauVar130[5][0xb];
      auVar159._14_2_ = auVar160._14_2_;
      auVar159._0_13_ = auVar267._0_13_;
      auVar159[0xd] = auVar313[0xb];
      auVar158._13_3_ = auVar159._13_3_;
      auVar158._0_12_ = auVar267._0_12_;
      auVar158[0xc] = auVar313[3];
      auVar157._12_4_ = auVar158._12_4_;
      auVar157._0_11_ = auVar267._0_11_;
      auVar157[0xb] = pauVar130[5][10];
      auVar156._11_5_ = auVar157._11_5_;
      auVar156._0_10_ = auVar267._0_10_;
      auVar156[10] = pauVar130[5][2];
      auVar155._10_6_ = auVar156._10_6_;
      auVar155._0_9_ = auVar267._0_9_;
      auVar155[9] = auVar313[10];
      auVar154._9_7_ = auVar155._9_7_;
      auVar154._0_8_ = auVar267._0_8_;
      auVar154[8] = auVar313[2];
      auVar117._1_8_ = auVar154._8_8_;
      auVar117[0] = pauVar130[5][9];
      auVar117._9_7_ = 0;
      auVar116._10_6_ = 0;
      auVar116._0_10_ = SUB1610(auVar117 << 0x38,6);
      auVar115._11_5_ = 0;
      auVar115._0_11_ = SUB1611(auVar116 << 0x30,5);
      auVar114._12_4_ = 0;
      auVar114._0_12_ = SUB1612(auVar115 << 0x28,4);
      auVar113._13_3_ = 0;
      auVar113._0_13_ = SUB1613(auVar114 << 0x20,3);
      auVar153._14_2_ = 0;
      auVar153._0_14_ = SUB1614(auVar113 << 0x18,2);
      auVar153 = auVar153 << 0x10;
      auVar327._0_14_ = auVar191._0_14_;
      auVar327[0xe] = pauVar130[7][3];
      auVar327[0xf] = pauVar130[7][0xb];
      auVar326._14_2_ = auVar327._14_2_;
      auVar326._0_13_ = auVar191._0_13_;
      auVar326[0xd] = auVar362[0xb];
      auVar325._13_3_ = auVar326._13_3_;
      auVar325._0_12_ = auVar191._0_12_;
      auVar325[0xc] = auVar362[3];
      auVar324._12_4_ = auVar325._12_4_;
      auVar324._0_11_ = auVar191._0_11_;
      auVar324[0xb] = pauVar130[7][10];
      auVar323._11_5_ = auVar324._11_5_;
      auVar323._0_10_ = auVar191._0_10_;
      auVar323[10] = pauVar130[7][2];
      auVar322._10_6_ = auVar323._10_6_;
      auVar322._0_9_ = auVar191._0_9_;
      auVar322[9] = auVar362[10];
      auVar321._9_7_ = auVar322._9_7_;
      auVar321._0_8_ = auVar191._0_8_;
      auVar321[8] = auVar362[2];
      auVar122._1_8_ = auVar321._8_8_;
      auVar122[0] = pauVar130[7][9];
      auVar122._9_7_ = 0;
      auVar121._10_6_ = 0;
      auVar121._0_10_ = SUB1610(auVar122 << 0x38,6);
      auVar120._11_5_ = 0;
      auVar120._0_11_ = SUB1611(auVar121 << 0x30,5);
      auVar119._12_4_ = 0;
      auVar119._0_12_ = SUB1612(auVar120 << 0x28,4);
      auVar118._13_3_ = 0;
      auVar118._0_13_ = SUB1613(auVar119 << 0x20,3);
      auVar320._14_2_ = 0;
      auVar320._0_14_ = SUB1614(auVar118 << 0x18,2);
      auVar320 = auVar320 << 0x10;
      uVar136 = CONCAT13(auVar313[0xe],CONCAT12(auVar313[10],CONCAT11(bVar283,auVar313[2])));
      uVar137 = CONCAT15(cVar41,CONCAT14(pauVar130[5][2],uVar136));
      auVar161._0_8_ = CONCAT17(pauVar130[5][0xe],CONCAT16(pauVar130[5][10],uVar137));
      uVar232 = CONCAT13(auVar362[0xe],CONCAT12(auVar362[10],CONCAT11(bVar210,auVar362[2])));
      uVar233 = CONCAT15(cVar49,CONCAT14(pauVar130[7][2],uVar232));
      uVar214 = CONCAT17(pauVar130[7][0xe],CONCAT16(pauVar130[7][10],uVar233));
      auVar359._0_14_ = auVar153._0_14_;
      auVar359[0xe] = pauVar130[5][9];
      auVar359[0xf] = pauVar130[5][0xd];
      auVar358._14_2_ = auVar359._14_2_;
      auVar358._0_13_ = auVar153._0_13_;
      auVar358[0xd] = cVar29;
      auVar357._13_3_ = auVar358._13_3_;
      auVar357._0_12_ = auVar153._0_12_;
      auVar357[0xc] = pauVar130[5][1];
      auVar356._12_4_ = auVar357._12_4_;
      auVar356._0_11_ = auVar153._0_11_;
      auVar356[0xb] = auVar313[0xd];
      auVar355._11_5_ = auVar356._11_5_;
      auVar355._0_10_ = auVar153._0_10_;
      auVar355[10] = auVar313[9];
      auVar354._10_6_ = auVar355._10_6_;
      auVar354._0_9_ = auVar153._0_9_;
      auVar354[9] = cVar282;
      auVar353._9_7_ = auVar354._9_7_;
      auVar353._0_8_ = auVar153._0_8_;
      auVar353[8] = auVar313[1];
      Var125 = CONCAT91(CONCAT81(auVar353._8_8_,pauVar130[5][0xc]),pauVar130[5][8]);
      auVar124._2_10_ = Var125;
      auVar124[1] = cVar35;
      auVar124[0] = pauVar130[5][0];
      auVar123._2_12_ = auVar124;
      auVar123[1] = auVar313[0xc];
      auVar123[0] = auVar313[8];
      auVar352[1] = bVar280;
      auVar352[0] = auVar313[0];
      auVar352._2_14_ = auVar123;
      auVar161._8_8_ = uVar214;
      auVar311._0_14_ = auVar320._0_14_;
      auVar311[0xe] = pauVar130[7][9];
      auVar311[0xf] = pauVar130[7][0xd];
      auVar310._14_2_ = auVar311._14_2_;
      auVar310._0_13_ = auVar320._0_13_;
      auVar310[0xd] = cVar32;
      auVar309._13_3_ = auVar310._13_3_;
      auVar309._0_12_ = auVar320._0_12_;
      auVar309[0xc] = pauVar130[7][1];
      auVar308._12_4_ = auVar309._12_4_;
      auVar308._0_11_ = auVar320._0_11_;
      auVar308[0xb] = auVar362[0xd];
      auVar307._11_5_ = auVar308._11_5_;
      auVar307._0_10_ = auVar320._0_10_;
      auVar307[10] = auVar362[9];
      auVar306._10_6_ = auVar307._10_6_;
      auVar306._0_9_ = auVar320._0_9_;
      auVar306[9] = cVar208;
      auVar305._9_7_ = auVar306._9_7_;
      auVar305._0_8_ = auVar320._0_8_;
      auVar305[8] = auVar362[1];
      Var128 = CONCAT91(CONCAT81(auVar305._8_8_,pauVar130[7][0xc]),pauVar130[7][8]);
      auVar127._2_10_ = Var128;
      auVar127[1] = cVar36;
      auVar127[0] = pauVar130[7][0];
      auVar126._2_12_ = auVar127;
      auVar126[1] = auVar362[0xc];
      auVar126[0] = auVar362[8];
      auVar304[1] = bVar206;
      auVar304[0] = auVar362[0];
      auVar304._2_14_ = auVar126;
      auVar200._8_8_ = auVar305._8_8_;
      auVar200._0_8_ = auVar353._8_8_;
      auVar199 = auVar161 & auVar129;
      auVar312._0_8_ = auVar352._0_8_;
      auVar312._8_8_ = auVar304._0_8_;
      sVar65 = auVar371._0_2_;
      sVar66 = auVar371._2_2_;
      bVar1 = (0 < sVar66) * (sVar66 < 0x100) * auVar371[2] - (0xff < sVar66);
      sVar66 = auVar371._4_2_;
      sVar67 = auVar371._6_2_;
      cVar2 = (0 < sVar67) * (sVar67 < 0x100) * auVar371[6] - (0xff < sVar67);
      uVar365 = CONCAT13(cVar2,CONCAT12((0 < sVar66) * (sVar66 < 0x100) * auVar371[4] -
                                        (0xff < sVar66),
                                        CONCAT11(bVar1,(0 < sVar65) * (sVar65 < 0x100) * auVar371[0]
                                                       - (0xff < sVar65))));
      sVar65 = auVar371._8_2_;
      sVar66 = auVar371._10_2_;
      cVar3 = (0 < sVar66) * (sVar66 < 0x100) * auVar371[10] - (0xff < sVar66);
      uVar366 = CONCAT15(cVar3,CONCAT14((0 < sVar65) * (sVar65 < 0x100) * auVar371[8] -
                                        (0xff < sVar65),uVar365));
      sVar65 = auVar371._12_2_;
      sVar66 = auVar371._14_2_;
      cVar4 = (0 < sVar66) * (sVar66 < 0x100) * auVar371[0xe] - (0xff < sVar66);
      uVar332 = CONCAT17(cVar4,CONCAT16((0 < sVar65) * (sVar65 < 0x100) * auVar371[0xc] -
                                        (0xff < sVar65),uVar366));
      sVar65 = auVar199._0_2_;
      sVar66 = auVar199._2_2_;
      cVar5 = (0 < sVar66) * (sVar66 < 0x100) * auVar199[2] - (0xff < sVar66);
      auVar367._0_10_ =
           CONCAT19(cVar5,CONCAT18((0 < sVar65) * (sVar65 < 0x100) * auVar199[0] - (0xff < sVar65),
                                   uVar332));
      sVar65 = auVar199._4_2_;
      auVar367[10] = (0 < sVar65) * (sVar65 < 0x100) * auVar199[4] - (0xff < sVar65);
      sVar65 = auVar199._6_2_;
      cVar6 = (0 < sVar65) * (sVar65 < 0x100) * auVar199[6] - (0xff < sVar65);
      auVar367[0xb] = cVar6;
      sVar65 = auVar199._8_2_;
      auVar369[0xc] = (0 < sVar65) * (sVar65 < 0x100) * auVar199[8] - (0xff < sVar65);
      auVar369._0_12_ = auVar367;
      sVar65 = auVar199._10_2_;
      cVar7 = (0 < sVar65) * (sVar65 < 0x100) * auVar199[10] - (0xff < sVar65);
      auVar369[0xd] = cVar7;
      sVar65 = auVar199._12_2_;
      auVar372[0xe] = (0 < sVar65) * (sVar65 < 0x100) * auVar199[0xc] - (0xff < sVar65);
      auVar372._0_14_ = auVar369;
      sVar65 = auVar199._14_2_;
      cVar8 = (0 < sVar65) * (sVar65 < 0x100) * auVar199[0xe] - (0xff < sVar65);
      auVar372[0xf] = cVar8;
      auVar360 = auVar360 & auVar129;
      auVar200 = auVar200 & auVar129;
      uVar257 = auVar353._8_2_ >> 8;
      uVar279 = auVar355._10_2_ >> 8;
      uVar281 = auVar357._12_2_ >> 8;
      uVar284 = auVar358._14_2_ >> 8;
      uVar285 = auVar305._8_2_ >> 8;
      uVar286 = auVar307._10_2_ >> 8;
      uVar287 = auVar309._12_2_ >> 8;
      uVar288 = auVar310._14_2_ >> 8;
      sVar65 = auVar360._0_2_;
      sVar66 = auVar360._2_2_;
      bVar9 = (0 < sVar66) * (sVar66 < 0x100) * auVar360[2] - (0xff < sVar66);
      sVar66 = auVar360._4_2_;
      sVar67 = auVar360._6_2_;
      cVar10 = (0 < sVar67) * (sVar67 < 0x100) * auVar360[6] - (0xff < sVar67);
      uVar330 = CONCAT13(cVar10,CONCAT12((0 < sVar66) * (sVar66 < 0x100) * auVar360[4] -
                                         (0xff < sVar66),
                                         CONCAT11(bVar9,(0 < sVar65) * (sVar65 < 0x100) *
                                                        auVar360[0] - (0xff < sVar65))));
      sVar65 = auVar360._8_2_;
      sVar66 = auVar360._10_2_;
      cVar11 = (0 < sVar66) * (sVar66 < 0x100) * auVar360[10] - (0xff < sVar66);
      uVar331 = CONCAT15(cVar11,CONCAT14((0 < sVar65) * (sVar65 < 0x100) * auVar360[8] -
                                         (0xff < sVar65),uVar330));
      sVar65 = auVar360._12_2_;
      sVar66 = auVar360._14_2_;
      cVar12 = (0 < sVar66) * (sVar66 < 0x100) * auVar360[0xe] - (0xff < sVar66);
      uVar291 = CONCAT17(cVar12,CONCAT16((0 < sVar65) * (sVar65 < 0x100) * auVar360[0xc] -
                                         (0xff < sVar65),uVar331));
      sVar65 = auVar200._0_2_;
      sVar66 = auVar200._2_2_;
      cVar13 = (0 < sVar66) * (sVar66 < 0x100) * auVar200[2] - (0xff < sVar66);
      auVar348._0_10_ =
           CONCAT19(cVar13,CONCAT18((0 < sVar65) * (sVar65 < 0x100) * auVar200[0] - (0xff < sVar65),
                                    uVar291));
      sVar65 = auVar200._4_2_;
      auVar348[10] = (0 < sVar65) * (sVar65 < 0x100) * auVar200[4] - (0xff < sVar65);
      sVar65 = auVar200._6_2_;
      cVar14 = (0 < sVar65) * (sVar65 < 0x100) * auVar200[6] - (0xff < sVar65);
      auVar348[0xb] = cVar14;
      sVar65 = auVar200._8_2_;
      auVar350[0xc] = (0 < sVar65) * (sVar65 < 0x100) * auVar200[8] - (0xff < sVar65);
      auVar350._0_12_ = auVar348;
      sVar65 = auVar200._10_2_;
      cVar15 = (0 < sVar65) * (sVar65 < 0x100) * auVar200[10] - (0xff < sVar65);
      auVar350[0xd] = cVar15;
      sVar65 = auVar200._12_2_;
      auVar361[0xe] = (0 < sVar65) * (sVar65 < 0x100) * auVar200[0xc] - (0xff < sVar65);
      auVar361._0_14_ = auVar350;
      sVar65 = auVar200._14_2_;
      cVar16 = (0 < sVar65) * (sVar65 < 0x100) * auVar200[0xe] - (0xff < sVar65);
      auVar361[0xf] = cVar16;
      auVar312 = auVar312 & auVar129;
      auVar201 = auVar201 & auVar129;
      uVar211 = auVar338._8_2_ >> 8;
      uVar224 = auVar340._10_2_ >> 8;
      uVar225 = auVar342._12_2_ >> 8;
      uVar226 = auVar343._14_2_ >> 8;
      uVar227 = auVar184._8_2_ >> 8;
      uVar228 = auVar186._10_2_ >> 8;
      uVar229 = auVar188._12_2_ >> 8;
      uVar230 = auVar189._14_2_ >> 8;
      sVar65 = auVar201._0_2_;
      sVar66 = auVar201._2_2_;
      bVar17 = (0 < sVar66) * (sVar66 < 0x100) * auVar201[2] - (0xff < sVar66);
      sVar66 = auVar201._4_2_;
      sVar67 = auVar201._6_2_;
      cVar18 = (0 < sVar67) * (sVar67 < 0x100) * auVar201[6] - (0xff < sVar67);
      uVar167 = CONCAT13(cVar18,CONCAT12((0 < sVar66) * (sVar66 < 0x100) * auVar201[4] -
                                         (0xff < sVar66),
                                         CONCAT11(bVar17,(0 < sVar65) * (sVar65 < 0x100) *
                                                         auVar201[0] - (0xff < sVar65))));
      sVar65 = auVar201._8_2_;
      sVar66 = auVar201._10_2_;
      cVar19 = (0 < sVar66) * (sVar66 < 0x100) * auVar201[10] - (0xff < sVar66);
      uVar168 = CONCAT15(cVar19,CONCAT14((0 < sVar65) * (sVar65 < 0x100) * auVar201[8] -
                                         (0xff < sVar65),uVar167));
      sVar65 = auVar201._12_2_;
      sVar66 = auVar201._14_2_;
      cVar20 = (0 < sVar66) * (sVar66 < 0x100) * auVar201[0xe] - (0xff < sVar66);
      uVar138 = CONCAT17(cVar20,CONCAT16((0 < sVar65) * (sVar65 < 0x100) * auVar201[0xc] -
                                         (0xff < sVar65),uVar168));
      sVar65 = auVar312._0_2_;
      sVar66 = auVar312._2_2_;
      cVar21 = (0 < sVar66) * (sVar66 < 0x100) * auVar312[2] - (0xff < sVar66);
      auVar170._0_10_ =
           CONCAT19(cVar21,CONCAT18((0 < sVar65) * (sVar65 < 0x100) * auVar312[0] - (0xff < sVar65),
                                    uVar138));
      sVar65 = auVar312._4_2_;
      auVar170[10] = (0 < sVar65) * (sVar65 < 0x100) * auVar312[4] - (0xff < sVar65);
      sVar65 = auVar312._6_2_;
      cVar22 = (0 < sVar65) * (sVar65 < 0x100) * auVar312[6] - (0xff < sVar65);
      auVar170[0xb] = cVar22;
      sVar65 = auVar312._8_2_;
      auVar173[0xc] = (0 < sVar65) * (sVar65 < 0x100) * auVar312[8] - (0xff < sVar65);
      auVar173._0_12_ = auVar170;
      sVar65 = auVar312._10_2_;
      cVar23 = (0 < sVar65) * (sVar65 < 0x100) * auVar312[10] - (0xff < sVar65);
      auVar173[0xd] = cVar23;
      sVar65 = auVar312._12_2_;
      auVar202[0xe] = (0 < sVar65) * (sVar65 < 0x100) * auVar312[0xc] - (0xff < sVar65);
      auVar202._0_14_ = auVar173;
      sVar65 = auVar312._14_2_;
      cVar24 = (0 < sVar65) * (sVar65 < 0x100) * auVar312[0xe] - (0xff < sVar65);
      auVar202[0xf] = cVar24;
      bVar25 = (uVar224 != 0) * (uVar224 < 0x100) * auVar162[0xd] - (0xff < uVar224);
      cVar26 = (uVar226 != 0) * (uVar226 < 0x100) * pauVar130[1][0xd] - (0xff < uVar226);
      uVar212 = CONCAT13(cVar26,CONCAT12((uVar225 != 0) * (uVar225 < 0x100) * cVar27 -
                                         (0xff < uVar225),
                                         CONCAT11(bVar25,(uVar211 != 0) * (uVar211 < 0x100) *
                                                         cVar207 - (0xff < uVar211))));
      cVar27 = (uVar228 != 0) * (uVar228 < 0x100) * auVar276[0xd] - (0xff < uVar228);
      uVar213 = CONCAT15(cVar27,CONCAT14((uVar227 != 0) * (uVar227 < 0x100) * cVar165 -
                                         (0xff < uVar227),uVar212));
      cVar207 = (uVar230 != 0) * (uVar230 < 0x100) * pauVar130[3][0xd] - (0xff < uVar230);
      uVar169 = CONCAT17(cVar207,CONCAT16((uVar229 != 0) * (uVar229 < 0x100) * cVar30 -
                                          (0xff < uVar229),uVar213));
      cVar28 = (uVar279 != 0) * (uVar279 < 0x100) * auVar313[0xd] - (0xff < uVar279);
      auVar215._0_10_ =
           CONCAT19(cVar28,CONCAT18((uVar257 != 0) * (uVar257 < 0x100) * cVar282 - (0xff < uVar257),
                                    uVar169));
      auVar215[10] = (uVar281 != 0) * (uVar281 < 0x100) * cVar29 - (0xff < uVar281);
      cVar165 = (uVar284 != 0) * (uVar284 < 0x100) * pauVar130[5][0xd] - (0xff < uVar284);
      auVar215[0xb] = cVar165;
      auVar218[0xc] = (uVar285 != 0) * (uVar285 < 0x100) * cVar208 - (0xff < uVar285);
      auVar218._0_12_ = auVar215;
      cVar29 = (uVar286 != 0) * (uVar286 < 0x100) * auVar362[0xd] - (0xff < uVar286);
      auVar218[0xd] = cVar29;
      auVar221[0xe] = (uVar287 != 0) * (uVar287 < 0x100) * cVar32 - (0xff < uVar287);
      auVar221._0_14_ = auVar218;
      cVar30 = (uVar288 != 0) * (uVar288 < 0x100) * pauVar130[7][0xd] - (0xff < uVar288);
      auVar221[0xf] = cVar30;
      uVar211 = auVar123._0_2_ >> 8;
      uVar224 = auVar124._0_2_ >> 8;
      uVar225 = (ushort)Var125 >> 8;
      uVar226 = auVar126._0_2_ >> 8;
      uVar227 = auVar127._0_2_ >> 8;
      uVar228 = (ushort)Var128 >> 8;
      uVar229 = auVar97._0_2_ >> 8;
      uVar230 = auVar98._0_2_ >> 8;
      uVar257 = (ushort)Var99 >> 8;
      uVar279 = auVar100._0_2_ >> 8;
      uVar281 = auVar101._0_2_ >> 8;
      uVar284 = (ushort)Var102 >> 8;
      auVar371 = auVar129 & auVar372;
      bVar31 = (uVar229 != 0) * (uVar229 < 0x100) * auVar162[0xc] - (0xff < uVar229);
      cVar32 = (uVar257 != 0) * (uVar257 < 0x100) * pauVar130[1][0xc] - (0xff < uVar257);
      uVar258 = CONCAT13(cVar32,CONCAT12((uVar230 != 0) * (uVar230 < 0x100) * cVar33 -
                                         (0xff < uVar230),
                                         CONCAT11(bVar31,(bVar205 != 0) * (bVar205 < 0x100) *
                                                         bVar205 - (0xff < bVar205))));
      cVar33 = (uVar279 != 0) * (uVar279 < 0x100) * auVar276[0xc] - (0xff < uVar279);
      uVar259 = CONCAT15(cVar33,CONCAT14((bVar164 != 0) * (bVar164 < 0x100) * bVar164 -
                                         (0xff < bVar164),uVar258));
      cVar208 = (uVar284 != 0) * (uVar284 < 0x100) * pauVar130[3][0xc] - (0xff < uVar284);
      uVar234 = CONCAT17(cVar208,CONCAT16((uVar281 != 0) * (uVar281 < 0x100) * cVar34 -
                                          (0xff < uVar281),uVar259));
      cVar34 = (uVar211 != 0) * (uVar211 < 0x100) * auVar313[0xc] - (0xff < uVar211);
      auVar261._0_10_ =
           CONCAT19(cVar34,CONCAT18((bVar280 != 0) * (bVar280 < 0x100) * bVar280 - (0xff < bVar280),
                                    uVar234));
      auVar261[10] = (uVar224 != 0) * (uVar224 < 0x100) * cVar35 - (0xff < uVar224);
      cVar35 = (uVar225 != 0) * (uVar225 < 0x100) * pauVar130[5][0xc] - (0xff < uVar225);
      auVar261[0xb] = cVar35;
      auVar264[0xc] = (bVar206 != 0) * (bVar206 < 0x100) * bVar206 - (0xff < bVar206);
      auVar264._0_12_ = auVar261;
      cVar282 = (uVar226 != 0) * (uVar226 < 0x100) * auVar362[0xc] - (0xff < uVar226);
      auVar264[0xd] = cVar282;
      auVar275[0xe] = (uVar227 != 0) * (uVar227 < 0x100) * cVar36 - (0xff < uVar227);
      auVar275._0_14_ = auVar264;
      cVar36 = (uVar228 != 0) * (uVar228 < 0x100) * pauVar130[7][0xc] - (0xff < uVar228);
      auVar275[0xf] = cVar36;
      auVar199 = auVar129 & auVar361;
      uVar211 = (ushort)bVar283;
      uVar224 = (ushort)((uint)uVar136 >> 0x18);
      uVar225 = (ushort)((uint6)uVar137 >> 0x28);
      uVar226 = (ushort)((ulong)auVar161._0_8_ >> 0x38);
      uVar227 = (ushort)bVar210;
      uVar228 = (ushort)((uint)uVar232 >> 0x18);
      uVar229 = (ushort)((uint6)uVar233 >> 0x28);
      uVar230 = (ushort)((ulong)uVar214 >> 0x38);
      auVar345 = auVar129 & auVar275;
      bVar164 = (uVar250 != 0) * (uVar250 < 0x100) * auVar162[0xe] - (0xff < uVar250);
      cVar37 = (uVar252 != 0) * (uVar252 < 0x100) * pauVar130[1][0xe] - (0xff < uVar252);
      uVar232 = CONCAT13(cVar37,CONCAT12((uVar251 != 0) * (uVar251 < 0x100) * cVar43 -
                                         (0xff < uVar251),
                                         CONCAT11(bVar164,(uVar231 != 0) * (uVar231 < 0x100) *
                                                          bVar209 - (0xff < uVar231))));
      cVar38 = (uVar254 != 0) * (uVar254 < 0x100) * auVar276[0xe] - (0xff < uVar254);
      uVar233 = CONCAT15(cVar38,CONCAT14((uVar253 != 0) * (uVar253 < 0x100) * bVar166 -
                                         (0xff < uVar253),uVar232));
      cVar39 = (uVar256 != 0) * (uVar256 < 0x100) * pauVar130[3][0xe] - (0xff < uVar256);
      uVar214 = CONCAT17(cVar39,CONCAT16((uVar255 != 0) * (uVar255 < 0x100) * cVar42 -
                                         (0xff < uVar255),uVar233));
      cVar40 = (uVar224 != 0) * (uVar224 < 0x100) * auVar313[0xe] - (0xff < uVar224);
      auVar235._0_10_ =
           CONCAT19(cVar40,CONCAT18((uVar211 != 0) * (uVar211 < 0x100) * bVar283 - (0xff < uVar211),
                                    uVar214));
      auVar235[10] = (uVar225 != 0) * (uVar225 < 0x100) * cVar41 - (0xff < uVar225);
      cVar41 = (uVar226 != 0) * (uVar226 < 0x100) * pauVar130[5][0xe] - (0xff < uVar226);
      auVar235[0xb] = cVar41;
      auVar237[0xc] = (uVar227 != 0) * (uVar227 < 0x100) * bVar210 - (0xff < uVar227);
      auVar237._0_12_ = auVar235;
      cVar42 = (uVar228 != 0) * (uVar228 < 0x100) * auVar362[0xe] - (0xff < uVar228);
      auVar237[0xd] = cVar42;
      auVar248[0xe] = (uVar229 != 0) * (uVar229 < 0x100) * cVar49 - (0xff < uVar229);
      auVar248._0_14_ = auVar237;
      cVar43 = (uVar230 != 0) * (uVar230 < 0x100) * pauVar130[7][0xe] - (0xff < uVar230);
      auVar248[0xf] = cVar43;
      sVar65 = auVar371._0_2_;
      sVar66 = auVar371._2_2_;
      bVar166 = (0 < sVar66) * (sVar66 < 0x100) * auVar371[2] - (0xff < sVar66);
      sVar66 = auVar371._4_2_;
      sVar67 = auVar371._6_2_;
      cVar44 = (0 < sVar67) * (sVar67 < 0x100) * auVar371[6] - (0xff < sVar67);
      uVar289 = CONCAT13(cVar44,CONCAT12((0 < sVar66) * (sVar66 < 0x100) * auVar371[4] -
                                         (0xff < sVar66),
                                         CONCAT11(bVar166,(0 < sVar65) * (sVar65 < 0x100) *
                                                          auVar371[0] - (0xff < sVar65))));
      sVar65 = auVar371._8_2_;
      sVar66 = auVar371._10_2_;
      cVar45 = (0 < sVar66) * (sVar66 < 0x100) * auVar371[10] - (0xff < sVar66);
      uVar290 = CONCAT15(cVar45,CONCAT14((0 < sVar65) * (sVar65 < 0x100) * auVar371[8] -
                                         (0xff < sVar65),uVar289));
      sVar65 = auVar371._12_2_;
      sVar66 = auVar371._14_2_;
      cVar46 = (0 < sVar66) * (sVar66 < 0x100) * auVar371[0xe] - (0xff < sVar66);
      uVar260 = CONCAT17(cVar46,CONCAT16((0 < sVar65) * (sVar65 < 0x100) * auVar371[0xc] -
                                         (0xff < sVar65),uVar290));
      sVar65 = auVar199._0_2_;
      sVar66 = auVar199._2_2_;
      cVar47 = (0 < sVar66) * (sVar66 < 0x100) * auVar199[2] - (0xff < sVar66);
      auVar316._0_10_ =
           CONCAT19(cVar47,CONCAT18((0 < sVar65) * (sVar65 < 0x100) * auVar199[0] - (0xff < sVar65),
                                    uVar260));
      sVar65 = auVar199._4_2_;
      auVar316[10] = (0 < sVar65) * (sVar65 < 0x100) * auVar199[4] - (0xff < sVar65);
      sVar65 = auVar199._6_2_;
      cVar48 = (0 < sVar65) * (sVar65 < 0x100) * auVar199[6] - (0xff < sVar65);
      auVar316[0xb] = cVar48;
      sVar65 = auVar199._8_2_;
      auVar318[0xc] = (0 < sVar65) * (sVar65 < 0x100) * auVar199[8] - (0xff < sVar65);
      auVar318._0_12_ = auVar316;
      sVar65 = auVar199._10_2_;
      cVar49 = (0 < sVar65) * (sVar65 < 0x100) * auVar199[10] - (0xff < sVar65);
      auVar318[0xd] = cVar49;
      sVar65 = auVar199._12_2_;
      auVar328[0xe] = (0 < sVar65) * (sVar65 < 0x100) * auVar199[0xc] - (0xff < sVar65);
      auVar328._0_14_ = auVar318;
      sVar65 = auVar199._14_2_;
      cVar50 = (0 < sVar65) * (sVar65 < 0x100) * auVar199[0xe] - (0xff < sVar65);
      auVar328[0xf] = cVar50;
      uVar257 = (ushort)bVar31;
      uVar279 = (ushort)((uint)uVar258 >> 0x18);
      uVar281 = (ushort)((uint6)uVar259 >> 0x28);
      uVar284 = (ushort)((ulong)uVar234 >> 0x38);
      uVar285 = (ushort)((unkuint10)auVar261._0_10_ >> 0x48);
      uVar286 = auVar261._10_2_ >> 8;
      uVar287 = auVar264._12_2_ >> 8;
      uVar288 = auVar275._14_2_ >> 8;
      auVar313 = auVar129 & auVar202;
      uVar364 = (ushort)bVar1;
      uVar374 = (ushort)((uint)uVar365 >> 0x18);
      uVar375 = (ushort)((uint6)uVar366 >> 0x28);
      uVar376 = (ushort)((ulong)uVar332 >> 0x38);
      uVar377 = (ushort)((unkuint10)auVar367._0_10_ >> 0x48);
      uVar378 = auVar367._10_2_ >> 8;
      uVar379 = auVar369._12_2_ >> 8;
      uVar380 = auVar372._14_2_ >> 8;
      uVar231 = (ushort)bVar17;
      uVar250 = (ushort)((uint)uVar167 >> 0x18);
      uVar251 = (ushort)((uint6)uVar168 >> 0x28);
      uVar252 = (ushort)((ulong)uVar138 >> 0x38);
      uVar253 = (ushort)((unkuint10)auVar170._0_10_ >> 0x48);
      uVar254 = auVar170._10_2_ >> 8;
      uVar255 = auVar173._12_2_ >> 8;
      uVar256 = auVar202._14_2_ >> 8;
      auVar162 = auVar129 & auVar248;
      sVar65 = auVar313._0_2_;
      sVar66 = auVar313._2_2_;
      bVar205 = (0 < sVar66) * (sVar66 < 0x100) * auVar313[2] - (0xff < sVar66);
      sVar66 = auVar313._4_2_;
      sVar67 = auVar313._6_2_;
      cVar51 = (0 < sVar67) * (sVar67 < 0x100) * auVar313[6] - (0xff < sVar67);
      uVar258 = CONCAT13(cVar51,CONCAT12((0 < sVar66) * (sVar66 < 0x100) * auVar313[4] -
                                         (0xff < sVar66),
                                         CONCAT11(bVar205,(0 < sVar65) * (sVar65 < 0x100) *
                                                          auVar313[0] - (0xff < sVar65))));
      sVar65 = auVar313._8_2_;
      sVar66 = auVar313._10_2_;
      cVar52 = (0 < sVar66) * (sVar66 < 0x100) * auVar313[10] - (0xff < sVar66);
      uVar259 = CONCAT15(cVar52,CONCAT14((0 < sVar65) * (sVar65 < 0x100) * auVar313[8] -
                                         (0xff < sVar65),uVar258));
      sVar65 = auVar313._12_2_;
      sVar66 = auVar313._14_2_;
      cVar53 = (0 < sVar66) * (sVar66 < 0x100) * auVar313[0xe] - (0xff < sVar66);
      uVar234 = CONCAT17(cVar53,CONCAT16((0 < sVar65) * (sVar65 < 0x100) * auVar313[0xc] -
                                         (0xff < sVar65),uVar259));
      sVar65 = auVar162._0_2_;
      sVar66 = auVar162._2_2_;
      cVar54 = (0 < sVar66) * (sVar66 < 0x100) * auVar162[2] - (0xff < sVar66);
      auVar292._0_10_ =
           CONCAT19(cVar54,CONCAT18((0 < sVar65) * (sVar65 < 0x100) * auVar162[0] - (0xff < sVar65),
                                    uVar234));
      sVar65 = auVar162._4_2_;
      auVar292[10] = (0 < sVar65) * (sVar65 < 0x100) * auVar162[4] - (0xff < sVar65);
      sVar65 = auVar162._6_2_;
      cVar55 = (0 < sVar65) * (sVar65 < 0x100) * auVar162[6] - (0xff < sVar65);
      auVar292[0xb] = cVar55;
      sVar65 = auVar162._8_2_;
      auVar294[0xc] = (0 < sVar65) * (sVar65 < 0x100) * auVar162[8] - (0xff < sVar65);
      auVar294._0_12_ = auVar292;
      sVar65 = auVar162._10_2_;
      cVar56 = (0 < sVar65) * (sVar65 < 0x100) * auVar162[10] - (0xff < sVar65);
      auVar294[0xd] = cVar56;
      sVar65 = auVar162._12_2_;
      auVar314[0xe] = (0 < sVar65) * (sVar65 < 0x100) * auVar162[0xc] - (0xff < sVar65);
      auVar314._0_14_ = auVar294;
      sVar65 = auVar162._14_2_;
      cVar57 = (0 < sVar65) * (sVar65 < 0x100) * auVar162[0xe] - (0xff < sVar65);
      auVar314[0xf] = cVar57;
      auVar162 = auVar129 & auVar221;
      uVar211 = (ushort)bVar25;
      uVar224 = (ushort)((uint)uVar212 >> 0x18);
      uVar225 = (ushort)((uint6)uVar213 >> 0x28);
      uVar226 = (ushort)((ulong)uVar169 >> 0x38);
      uVar227 = (ushort)((unkuint10)auVar215._0_10_ >> 0x48);
      uVar228 = auVar215._10_2_ >> 8;
      uVar229 = auVar218._12_2_ >> 8;
      uVar230 = auVar221._14_2_ >> 8;
      sVar65 = auVar162._0_2_;
      sVar66 = auVar162._2_2_;
      bVar206 = (0 < sVar66) * (sVar66 < 0x100) * auVar162[2] - (0xff < sVar66);
      sVar66 = auVar162._4_2_;
      sVar67 = auVar162._6_2_;
      cVar58 = (0 < sVar67) * (sVar67 < 0x100) * auVar162[6] - (0xff < sVar67);
      uVar136 = CONCAT13(cVar58,CONCAT12((0 < sVar66) * (sVar66 < 0x100) * auVar162[4] -
                                         (0xff < sVar66),
                                         CONCAT11(bVar206,(0 < sVar65) * (sVar65 < 0x100) *
                                                          auVar162[0] - (0xff < sVar65))));
      sVar65 = auVar162._8_2_;
      sVar66 = auVar162._10_2_;
      cVar59 = (0 < sVar66) * (sVar66 < 0x100) * auVar162[10] - (0xff < sVar66);
      uVar137 = CONCAT15(cVar59,CONCAT14((0 < sVar65) * (sVar65 < 0x100) * auVar162[8] -
                                         (0xff < sVar65),uVar136));
      sVar65 = auVar162._12_2_;
      sVar66 = auVar162._14_2_;
      cVar60 = (0 < sVar66) * (sVar66 < 0x100) * auVar162[0xe] - (0xff < sVar66);
      uVar138 = CONCAT17(cVar60,CONCAT16((0 < sVar65) * (sVar65 < 0x100) * auVar162[0xc] -
                                         (0xff < sVar65),uVar137));
      sVar65 = auVar345._0_2_;
      sVar66 = auVar345._2_2_;
      cVar61 = (0 < sVar66) * (sVar66 < 0x100) * auVar345[2] - (0xff < sVar66);
      auVar139._0_10_ =
           CONCAT19(cVar61,CONCAT18((0 < sVar65) * (sVar65 < 0x100) * auVar345[0] - (0xff < sVar65),
                                    uVar138));
      sVar65 = auVar345._4_2_;
      auVar139[10] = (0 < sVar65) * (sVar65 < 0x100) * auVar345[4] - (0xff < sVar65);
      sVar65 = auVar345._6_2_;
      cVar62 = (0 < sVar65) * (sVar65 < 0x100) * auVar345[6] - (0xff < sVar65);
      auVar139[0xb] = cVar62;
      sVar65 = auVar345._8_2_;
      auVar142[0xc] = (0 < sVar65) * (sVar65 < 0x100) * auVar345[8] - (0xff < sVar65);
      auVar142._0_12_ = auVar139;
      sVar65 = auVar345._10_2_;
      cVar63 = (0 < sVar65) * (sVar65 < 0x100) * auVar345[10] - (0xff < sVar65);
      auVar142[0xd] = cVar63;
      sVar65 = auVar345._12_2_;
      auVar162[0xe] = (0 < sVar65) * (sVar65 < 0x100) * auVar345[0xc] - (0xff < sVar65);
      auVar162._0_14_ = auVar142;
      sVar65 = auVar345._14_2_;
      cVar64 = (0 < sVar65) * (sVar65 < 0x100) * auVar345[0xe] - (0xff < sVar65);
      auVar162[0xf] = cVar64;
      bVar209 = (uVar224 != 0) * (uVar224 < 0x100) * cVar26 - (0xff < uVar224);
      cVar207 = (uVar226 != 0) * (uVar226 < 0x100) * cVar207 - (0xff < uVar226);
      uVar167 = CONCAT13(cVar207,CONCAT12((uVar225 != 0) * (uVar225 < 0x100) * cVar27 -
                                          (0xff < uVar225),
                                          CONCAT11(bVar209,(uVar211 != 0) * (uVar211 < 0x100) *
                                                           bVar25 - (0xff < uVar211))));
      cVar27 = (uVar228 != 0) * (uVar228 < 0x100) * cVar165 - (0xff < uVar228);
      uVar168 = CONCAT15(cVar27,CONCAT14((uVar227 != 0) * (uVar227 < 0x100) * cVar28 -
                                         (0xff < uVar227),uVar167));
      cVar30 = (uVar230 != 0) * (uVar230 < 0x100) * cVar30 - (0xff < uVar230);
      uVar169 = CONCAT17(cVar30,CONCAT16((uVar229 != 0) * (uVar229 < 0x100) * cVar29 -
                                         (0xff < uVar229),uVar168));
      cVar29 = (uVar279 != 0) * (uVar279 < 0x100) * cVar32 - (0xff < uVar279);
      auVar216._0_10_ =
           CONCAT19(cVar29,CONCAT18((uVar257 != 0) * (uVar257 < 0x100) * bVar31 - (0xff < uVar257),
                                    uVar169));
      auVar216[10] = (uVar281 != 0) * (uVar281 < 0x100) * cVar33 - (0xff < uVar281);
      cVar165 = (uVar284 != 0) * (uVar284 < 0x100) * cVar208 - (0xff < uVar284);
      auVar216[0xb] = cVar165;
      auVar219[0xc] = (uVar285 != 0) * (uVar285 < 0x100) * cVar34 - (0xff < uVar285);
      auVar219._0_12_ = auVar216;
      cVar26 = (uVar286 != 0) * (uVar286 < 0x100) * cVar35 - (0xff < uVar286);
      auVar219[0xd] = cVar26;
      auVar222[0xe] = (uVar287 != 0) * (uVar287 < 0x100) * cVar282 - (0xff < uVar287);
      auVar222._0_14_ = auVar219;
      cVar28 = (uVar288 != 0) * (uVar288 < 0x100) * cVar36 - (0xff < uVar288);
      auVar222[0xf] = cVar28;
      uVar211 = (ushort)bVar9;
      uVar224 = (ushort)((uint)uVar330 >> 0x18);
      uVar225 = (ushort)((uint6)uVar331 >> 0x28);
      uVar226 = (ushort)((ulong)uVar291 >> 0x38);
      uVar227 = (ushort)((unkuint10)auVar348._0_10_ >> 0x48);
      uVar228 = auVar348._10_2_ >> 8;
      uVar229 = auVar350._12_2_ >> 8;
      uVar230 = auVar361._14_2_ >> 8;
      bVar25 = (uVar374 != 0) * (uVar374 < 0x100) * cVar2 - (0xff < uVar374);
      cVar4 = (uVar376 != 0) * (uVar376 < 0x100) * cVar4 - (0xff < uVar376);
      uVar330 = CONCAT13(cVar4,CONCAT12((uVar375 != 0) * (uVar375 < 0x100) * cVar3 -
                                        (0xff < uVar375),
                                        CONCAT11(bVar25,(uVar364 != 0) * (uVar364 < 0x100) * bVar1 -
                                                        (0xff < uVar364))));
      cVar2 = (uVar378 != 0) * (uVar378 < 0x100) * cVar6 - (0xff < uVar378);
      uVar331 = CONCAT15(cVar2,CONCAT14((uVar377 != 0) * (uVar377 < 0x100) * cVar5 -
                                        (0xff < uVar377),uVar330));
      cVar8 = (uVar380 != 0) * (uVar380 < 0x100) * cVar8 - (0xff < uVar380);
      uVar332 = CONCAT17(cVar8,CONCAT16((uVar379 != 0) * (uVar379 < 0x100) * cVar7 -
                                        (0xff < uVar379),uVar331));
      cVar7 = (uVar224 != 0) * (uVar224 < 0x100) * cVar10 - (0xff < uVar224);
      auVar368._0_10_ =
           CONCAT19(cVar7,CONCAT18((uVar211 != 0) * (uVar211 < 0x100) * bVar9 - (0xff < uVar211),
                                   uVar332));
      auVar368[10] = (uVar225 != 0) * (uVar225 < 0x100) * cVar11 - (0xff < uVar225);
      cVar6 = (uVar226 != 0) * (uVar226 < 0x100) * cVar12 - (0xff < uVar226);
      auVar368[0xb] = cVar6;
      auVar370[0xc] = (uVar227 != 0) * (uVar227 < 0x100) * cVar13 - (0xff < uVar227);
      auVar370._0_12_ = auVar368;
      cVar5 = (uVar228 != 0) * (uVar228 < 0x100) * cVar14 - (0xff < uVar228);
      auVar370[0xd] = cVar5;
      auVar373[0xe] = (uVar229 != 0) * (uVar229 < 0x100) * cVar15 - (0xff < uVar229);
      auVar373._0_14_ = auVar370;
      cVar3 = (uVar230 != 0) * (uVar230 < 0x100) * cVar16 - (0xff < uVar230);
      auVar373[0xf] = cVar3;
      auVar313 = auVar129 & auVar314;
      auVar276 = auVar129 & auVar328;
      auVar362 = auVar129 & auVar162;
      uVar364 = (ushort)bVar164;
      uVar374 = (ushort)((uint)uVar232 >> 0x18);
      uVar375 = (ushort)((uint6)uVar233 >> 0x28);
      uVar376 = (ushort)((ulong)uVar214 >> 0x38);
      uVar377 = (ushort)((unkuint10)auVar235._0_10_ >> 0x48);
      uVar378 = auVar235._10_2_ >> 8;
      uVar379 = auVar237._12_2_ >> 8;
      uVar380 = auVar248._14_2_ >> 8;
      uVar211 = (ushort)bVar206;
      uVar224 = (ushort)((uint)uVar136 >> 0x18);
      uVar225 = (ushort)((uint6)uVar137 >> 0x28);
      uVar226 = (ushort)((ulong)uVar138 >> 0x38);
      uVar227 = (ushort)((unkuint10)auVar139._0_10_ >> 0x48);
      uVar228 = auVar139._10_2_ >> 8;
      uVar229 = auVar142._12_2_ >> 8;
      uVar230 = auVar162._14_2_ >> 8;
      sVar65 = auVar276._0_2_;
      sVar66 = auVar276._2_2_;
      bVar1 = (0 < sVar66) * (sVar66 < 0x100) * auVar276[2] - (0xff < sVar66);
      sVar66 = auVar276._4_2_;
      sVar67 = auVar276._6_2_;
      cVar15 = (0 < sVar67) * (sVar67 < 0x100) * auVar276[6] - (0xff < sVar67);
      uVar212 = CONCAT13(cVar15,CONCAT12((0 < sVar66) * (sVar66 < 0x100) * auVar276[4] -
                                         (0xff < sVar66),
                                         CONCAT11(bVar1,(0 < sVar65) * (sVar65 < 0x100) *
                                                        auVar276[0] - (0xff < sVar65))));
      sVar65 = auVar276._8_2_;
      sVar66 = auVar276._10_2_;
      cVar16 = (0 < sVar66) * (sVar66 < 0x100) * auVar276[10] - (0xff < sVar66);
      uVar213 = CONCAT15(cVar16,CONCAT14((0 < sVar65) * (sVar65 < 0x100) * auVar276[8] -
                                         (0xff < sVar65),uVar212));
      sVar65 = auVar276._12_2_;
      sVar66 = auVar276._14_2_;
      cVar14 = (0 < sVar66) * (sVar66 < 0x100) * auVar276[0xe] - (0xff < sVar66);
      uVar214 = CONCAT17(cVar14,CONCAT16((0 < sVar65) * (sVar65 < 0x100) * auVar276[0xc] -
                                         (0xff < sVar65),uVar213));
      sVar65 = auVar313._0_2_;
      sVar66 = auVar313._2_2_;
      cVar13 = (0 < sVar66) * (sVar66 < 0x100) * auVar313[2] - (0xff < sVar66);
      auVar262._0_10_ =
           CONCAT19(cVar13,CONCAT18((0 < sVar65) * (sVar65 < 0x100) * auVar313[0] - (0xff < sVar65),
                                    uVar214));
      sVar65 = auVar313._4_2_;
      auVar262[10] = (0 < sVar65) * (sVar65 < 0x100) * auVar313[4] - (0xff < sVar65);
      sVar65 = auVar313._6_2_;
      cVar12 = (0 < sVar65) * (sVar65 < 0x100) * auVar313[6] - (0xff < sVar65);
      auVar262[0xb] = cVar12;
      sVar65 = auVar313._8_2_;
      auVar265[0xc] = (0 < sVar65) * (sVar65 < 0x100) * auVar313[8] - (0xff < sVar65);
      auVar265._0_12_ = auVar262;
      sVar65 = auVar313._10_2_;
      cVar11 = (0 < sVar65) * (sVar65 < 0x100) * auVar313[10] - (0xff < sVar65);
      auVar265[0xd] = cVar11;
      sVar65 = auVar313._12_2_;
      auVar277[0xe] = (0 < sVar65) * (sVar65 < 0x100) * auVar313[0xc] - (0xff < sVar65);
      auVar277._0_14_ = auVar265;
      sVar65 = auVar313._14_2_;
      cVar10 = (0 < sVar65) * (sVar65 < 0x100) * auVar313[0xe] - (0xff < sVar65);
      auVar277[0xf] = cVar10;
      uVar257 = (ushort)bVar205;
      uVar279 = (ushort)((uint)uVar258 >> 0x18);
      uVar281 = (ushort)((uint6)uVar259 >> 0x28);
      uVar284 = (ushort)((ulong)uVar234 >> 0x38);
      uVar285 = (ushort)((unkuint10)auVar292._0_10_ >> 0x48);
      uVar286 = auVar292._10_2_ >> 8;
      uVar287 = auVar294._12_2_ >> 8;
      uVar288 = auVar314._14_2_ >> 8;
      bVar9 = (uVar250 != 0) * (uVar250 < 0x100) * cVar18 - (0xff < uVar250);
      cVar18 = (uVar252 != 0) * (uVar252 < 0x100) * cVar20 - (0xff < uVar252);
      uVar136 = CONCAT13(cVar18,CONCAT12((uVar251 != 0) * (uVar251 < 0x100) * cVar19 -
                                         (0xff < uVar251),
                                         CONCAT11(bVar9,(uVar231 != 0) * (uVar231 < 0x100) * bVar17
                                                        - (0xff < uVar231))));
      cVar32 = (uVar254 != 0) * (uVar254 < 0x100) * cVar22 - (0xff < uVar254);
      uVar137 = CONCAT15(cVar32,CONCAT14((uVar253 != 0) * (uVar253 < 0x100) * cVar21 -
                                         (0xff < uVar253),uVar136));
      cVar24 = (uVar256 != 0) * (uVar256 < 0x100) * cVar24 - (0xff < uVar256);
      uVar138 = CONCAT17(cVar24,CONCAT16((uVar255 != 0) * (uVar255 < 0x100) * cVar23 -
                                         (0xff < uVar255),uVar137));
      cVar22 = (uVar374 != 0) * (uVar374 < 0x100) * cVar37 - (0xff < uVar374);
      auVar171._0_10_ =
           CONCAT19(cVar22,CONCAT18((uVar364 != 0) * (uVar364 < 0x100) * bVar164 - (0xff < uVar364),
                                    uVar138));
      auVar171[10] = (uVar375 != 0) * (uVar375 < 0x100) * cVar38 - (0xff < uVar375);
      cVar21 = (uVar376 != 0) * (uVar376 < 0x100) * cVar39 - (0xff < uVar376);
      auVar171[0xb] = cVar21;
      auVar174[0xc] = (uVar377 != 0) * (uVar377 < 0x100) * cVar40 - (0xff < uVar377);
      auVar174._0_12_ = auVar171;
      cVar20 = (uVar378 != 0) * (uVar378 < 0x100) * cVar41 - (0xff < uVar378);
      auVar174[0xd] = cVar20;
      auVar203[0xe] = (uVar379 != 0) * (uVar379 < 0x100) * cVar42 - (0xff < uVar379);
      auVar203._0_14_ = auVar174;
      cVar19 = (uVar380 != 0) * (uVar380 < 0x100) * cVar43 - (0xff < uVar380);
      auVar203[0xf] = cVar19;
      auVar162 = auVar129 & auVar373;
      uVar364 = (ushort)bVar166;
      uVar374 = (ushort)((uint)uVar289 >> 0x18);
      uVar375 = (ushort)((uint6)uVar290 >> 0x28);
      uVar376 = (ushort)((ulong)uVar260 >> 0x38);
      uVar377 = (ushort)((unkuint10)auVar316._0_10_ >> 0x48);
      uVar378 = auVar316._10_2_ >> 8;
      uVar379 = auVar318._12_2_ >> 8;
      uVar380 = auVar328._14_2_ >> 8;
      sVar65 = auVar362._0_2_;
      sVar66 = auVar362._2_2_;
      bVar17 = (0 < sVar66) * (sVar66 < 0x100) * auVar362[2] - (0xff < sVar66);
      sVar66 = auVar362._4_2_;
      sVar67 = auVar362._6_2_;
      cVar282 = (0 < sVar67) * (sVar67 < 0x100) * auVar362[6] - (0xff < sVar67);
      uVar258 = CONCAT13(cVar282,CONCAT12((0 < sVar66) * (sVar66 < 0x100) * auVar362[4] -
                                          (0xff < sVar66),
                                          CONCAT11(bVar17,(0 < sVar65) * (sVar65 < 0x100) *
                                                          auVar362[0] - (0xff < sVar65))));
      sVar65 = auVar362._8_2_;
      sVar66 = auVar362._10_2_;
      cVar33 = (0 < sVar66) * (sVar66 < 0x100) * auVar362[10] - (0xff < sVar66);
      uVar259 = CONCAT15(cVar33,CONCAT14((0 < sVar65) * (sVar65 < 0x100) * auVar362[8] -
                                         (0xff < sVar65),uVar258));
      sVar65 = auVar362._12_2_;
      sVar66 = auVar362._14_2_;
      cVar35 = (0 < sVar66) * (sVar66 < 0x100) * auVar362[0xe] - (0xff < sVar66);
      uVar260 = CONCAT17(cVar35,CONCAT16((0 < sVar65) * (sVar65 < 0x100) * auVar362[0xc] -
                                         (0xff < sVar65),uVar259));
      sVar65 = auVar162._0_2_;
      sVar66 = auVar162._2_2_;
      cVar36 = (0 < sVar66) * (sVar66 < 0x100) * auVar162[2] - (0xff < sVar66);
      auVar349._0_10_ =
           CONCAT19(cVar36,CONCAT18((0 < sVar65) * (sVar65 < 0x100) * auVar162[0] - (0xff < sVar65),
                                    uVar260));
      sVar65 = auVar162._4_2_;
      auVar349[10] = (0 < sVar65) * (sVar65 < 0x100) * auVar162[4] - (0xff < sVar65);
      sVar65 = auVar162._6_2_;
      cVar34 = (0 < sVar65) * (sVar65 < 0x100) * auVar162[6] - (0xff < sVar65);
      auVar349[0xb] = cVar34;
      sVar65 = auVar162._8_2_;
      auVar351[0xc] = (0 < sVar65) * (sVar65 < 0x100) * auVar162[8] - (0xff < sVar65);
      auVar351._0_12_ = auVar349;
      sVar65 = auVar162._10_2_;
      cVar208 = (0 < sVar65) * (sVar65 < 0x100) * auVar162[10] - (0xff < sVar65);
      auVar351[0xd] = cVar208;
      sVar65 = auVar162._12_2_;
      auVar363[0xe] = (0 < sVar65) * (sVar65 < 0x100) * auVar162[0xc] - (0xff < sVar65);
      auVar363._0_14_ = auVar351;
      sVar65 = auVar162._14_2_;
      cVar23 = (0 < sVar65) * (sVar65 < 0x100) * auVar162[0xe] - (0xff < sVar65);
      auVar363[0xf] = cVar23;
      auVar313 = auVar129 & auVar203;
      auVar162 = auVar129 & auVar222;
      uVar231 = (ushort)bVar9;
      uVar250 = (ushort)((uint)uVar136 >> 0x18);
      uVar251 = (ushort)((uint6)uVar137 >> 0x28);
      uVar252 = (ushort)((ulong)uVar138 >> 0x38);
      uVar253 = (ushort)((unkuint10)auVar171._0_10_ >> 0x48);
      uVar254 = auVar171._10_2_ >> 8;
      uVar255 = auVar174._12_2_ >> 8;
      uVar256 = auVar203._14_2_ >> 8;
      bVar31 = (uVar374 != 0) * (uVar374 < 0x100) * cVar44 - (0xff < uVar374);
      cVar37 = (uVar376 != 0) * (uVar376 < 0x100) * cVar46 - (0xff < uVar376);
      uVar289 = CONCAT13(cVar37,CONCAT12((uVar375 != 0) * (uVar375 < 0x100) * cVar45 -
                                         (0xff < uVar375),
                                         CONCAT11(bVar31,(uVar364 != 0) * (uVar364 < 0x100) *
                                                         bVar166 - (0xff < uVar364))));
      cVar43 = (uVar378 != 0) * (uVar378 < 0x100) * cVar48 - (0xff < uVar378);
      uVar290 = CONCAT15(cVar43,CONCAT14((uVar377 != 0) * (uVar377 < 0x100) * cVar47 -
                                         (0xff < uVar377),uVar289));
      cVar42 = (uVar380 != 0) * (uVar380 < 0x100) * cVar50 - (0xff < uVar380);
      uVar291 = CONCAT17(cVar42,CONCAT16((uVar379 != 0) * (uVar379 < 0x100) * cVar49 -
                                         (0xff < uVar379),uVar290));
      cVar41 = (uVar279 != 0) * (uVar279 < 0x100) * cVar51 - (0xff < uVar279);
      auVar317._0_10_ =
           CONCAT19(cVar41,CONCAT18((uVar257 != 0) * (uVar257 < 0x100) * bVar205 - (0xff < uVar257),
                                    uVar291));
      auVar317[10] = (uVar281 != 0) * (uVar281 < 0x100) * cVar52 - (0xff < uVar281);
      cVar40 = (uVar284 != 0) * (uVar284 < 0x100) * cVar53 - (0xff < uVar284);
      auVar317[0xb] = cVar40;
      auVar319[0xc] = (uVar285 != 0) * (uVar285 < 0x100) * cVar54 - (0xff < uVar285);
      auVar319._0_12_ = auVar317;
      cVar39 = (uVar286 != 0) * (uVar286 < 0x100) * cVar55 - (0xff < uVar286);
      auVar319[0xd] = cVar39;
      auVar329[0xe] = (uVar287 != 0) * (uVar287 < 0x100) * cVar56 - (0xff < uVar287);
      auVar329._0_14_ = auVar319;
      cVar38 = (uVar288 != 0) * (uVar288 < 0x100) * cVar57 - (0xff < uVar288);
      auVar329[0xf] = cVar38;
      sVar65 = auVar313._0_2_;
      sVar66 = auVar313._2_2_;
      bVar164 = (0 < sVar66) * (sVar66 < 0x100) * auVar313[2] - (0xff < sVar66);
      sVar66 = auVar313._4_2_;
      sVar67 = auVar313._6_2_;
      cVar49 = (0 < sVar67) * (sVar67 < 0x100) * auVar313[6] - (0xff < sVar67);
      uVar232 = CONCAT13(cVar49,CONCAT12((0 < sVar66) * (sVar66 < 0x100) * auVar313[4] -
                                         (0xff < sVar66),
                                         CONCAT11(bVar164,(0 < sVar65) * (sVar65 < 0x100) *
                                                          auVar313[0] - (0xff < sVar65))));
      sVar65 = auVar313._8_2_;
      sVar66 = auVar313._10_2_;
      cVar47 = (0 < sVar66) * (sVar66 < 0x100) * auVar313[10] - (0xff < sVar66);
      uVar233 = CONCAT15(cVar47,CONCAT14((0 < sVar65) * (sVar65 < 0x100) * auVar313[8] -
                                         (0xff < sVar65),uVar232));
      sVar65 = auVar313._12_2_;
      sVar66 = auVar313._14_2_;
      cVar45 = (0 < sVar66) * (sVar66 < 0x100) * auVar313[0xe] - (0xff < sVar66);
      uVar234 = CONCAT17(cVar45,CONCAT16((0 < sVar65) * (sVar65 < 0x100) * auVar313[0xc] -
                                         (0xff < sVar65),uVar233));
      sVar65 = auVar162._0_2_;
      sVar66 = auVar162._2_2_;
      cVar44 = (0 < sVar66) * (sVar66 < 0x100) * auVar162[2] - (0xff < sVar66);
      auVar333._0_10_ =
           CONCAT19(cVar44,CONCAT18((0 < sVar65) * (sVar65 < 0x100) * auVar162[0] - (0xff < sVar65),
                                    uVar234));
      sVar65 = auVar162._4_2_;
      auVar333[10] = (0 < sVar65) * (sVar65 < 0x100) * auVar162[4] - (0xff < sVar65);
      sVar65 = auVar162._6_2_;
      cVar46 = (0 < sVar65) * (sVar65 < 0x100) * auVar162[6] - (0xff < sVar65);
      auVar333[0xb] = cVar46;
      sVar65 = auVar162._8_2_;
      auVar335[0xc] = (0 < sVar65) * (sVar65 < 0x100) * auVar162[8] - (0xff < sVar65);
      auVar335._0_12_ = auVar333;
      sVar65 = auVar162._10_2_;
      cVar48 = (0 < sVar65) * (sVar65 < 0x100) * auVar162[10] - (0xff < sVar65);
      auVar335[0xd] = cVar48;
      sVar65 = auVar162._12_2_;
      auVar346[0xe] = (0 < sVar65) * (sVar65 < 0x100) * auVar162[0xc] - (0xff < sVar65);
      auVar346._0_14_ = auVar335;
      sVar65 = auVar162._14_2_;
      cVar50 = (0 < sVar65) * (sVar65 < 0x100) * auVar162[0xe] - (0xff < sVar65);
      auVar346[0xf] = cVar50;
      uVar364 = (ushort)bVar25;
      uVar374 = (ushort)((uint)uVar330 >> 0x18);
      uVar375 = (ushort)((uint6)uVar331 >> 0x28);
      uVar376 = (ushort)((ulong)uVar332 >> 0x38);
      uVar377 = (ushort)((unkuint10)auVar368._0_10_ >> 0x48);
      uVar378 = auVar368._10_2_ >> 8;
      uVar379 = auVar370._12_2_ >> 8;
      uVar380 = auVar373._14_2_ >> 8;
      uVar257 = (ushort)bVar209;
      uVar279 = (ushort)((uint)uVar167 >> 0x18);
      uVar281 = (ushort)((uint6)uVar168 >> 0x28);
      uVar284 = (ushort)((ulong)uVar169 >> 0x38);
      uVar285 = (ushort)((unkuint10)auVar216._0_10_ >> 0x48);
      uVar286 = auVar216._10_2_ >> 8;
      uVar287 = auVar219._12_2_ >> 8;
      uVar288 = auVar222._14_2_ >> 8;
      auVar362 = auVar129 & auVar346;
      bVar166 = (uVar250 != 0) * (uVar250 < 0x100) * cVar18 - (0xff < uVar250);
      cVar51 = (uVar252 != 0) * (uVar252 < 0x100) * cVar24 - (0xff < uVar252);
      uVar167 = CONCAT13(cVar51,CONCAT12((uVar251 != 0) * (uVar251 < 0x100) * cVar32 -
                                         (0xff < uVar251),
                                         CONCAT11(bVar166,(uVar231 != 0) * (uVar231 < 0x100) * bVar9
                                                          - (0xff < uVar231))));
      cVar24 = (uVar254 != 0) * (uVar254 < 0x100) * cVar21 - (0xff < uVar254);
      uVar168 = CONCAT15(cVar24,CONCAT14((uVar253 != 0) * (uVar253 < 0x100) * cVar22 -
                                         (0xff < uVar253),uVar167));
      cVar22 = (uVar256 != 0) * (uVar256 < 0x100) * cVar19 - (0xff < uVar256);
      uVar169 = CONCAT17(cVar22,CONCAT16((uVar255 != 0) * (uVar255 < 0x100) * cVar20 -
                                         (0xff < uVar255),uVar168));
      cVar18 = (uVar279 != 0) * (uVar279 < 0x100) * cVar207 - (0xff < uVar279);
      auVar172._0_10_ =
           CONCAT19(cVar18,CONCAT18((uVar257 != 0) * (uVar257 < 0x100) * bVar209 - (0xff < uVar257),
                                    uVar169));
      auVar172[10] = (uVar281 != 0) * (uVar281 < 0x100) * cVar27 - (0xff < uVar281);
      cVar21 = (uVar284 != 0) * (uVar284 < 0x100) * cVar30 - (0xff < uVar284);
      auVar172[0xb] = cVar21;
      auVar175[0xc] = (uVar285 != 0) * (uVar285 < 0x100) * cVar29 - (0xff < uVar285);
      auVar175._0_12_ = auVar172;
      cVar20 = (uVar286 != 0) * (uVar286 < 0x100) * cVar165 - (0xff < uVar286);
      auVar175[0xd] = cVar20;
      auVar204[0xe] = (uVar287 != 0) * (uVar287 < 0x100) * cVar26 - (0xff < uVar287);
      auVar204._0_14_ = auVar175;
      cVar19 = (uVar288 != 0) * (uVar288 < 0x100) * cVar28 - (0xff < uVar288);
      auVar204[0xf] = cVar19;
      bVar9 = (uVar224 != 0) * (uVar224 < 0x100) * cVar58 - (0xff < uVar224);
      cVar27 = (uVar226 != 0) * (uVar226 < 0x100) * cVar60 - (0xff < uVar226);
      uVar136 = CONCAT13(cVar27,CONCAT12((uVar225 != 0) * (uVar225 < 0x100) * cVar59 -
                                         (0xff < uVar225),
                                         CONCAT11(bVar9,(uVar211 != 0) * (uVar211 < 0x100) * bVar206
                                                        - (0xff < uVar211))));
      cVar30 = (uVar228 != 0) * (uVar228 < 0x100) * cVar62 - (0xff < uVar228);
      uVar137 = CONCAT15(cVar30,CONCAT14((uVar227 != 0) * (uVar227 < 0x100) * cVar61 -
                                         (0xff < uVar227),uVar136));
      cVar29 = (uVar230 != 0) * (uVar230 < 0x100) * cVar64 - (0xff < uVar230);
      uVar138 = CONCAT17(cVar29,CONCAT16((uVar229 != 0) * (uVar229 < 0x100) * cVar63 -
                                         (0xff < uVar229),uVar137));
      cVar4 = (uVar374 != 0) * (uVar374 < 0x100) * cVar4 - (0xff < uVar374);
      auVar140._0_10_ =
           CONCAT19(cVar4,CONCAT18((uVar364 != 0) * (uVar364 < 0x100) * bVar25 - (0xff < uVar364),
                                   uVar138));
      auVar140[10] = (uVar375 != 0) * (uVar375 < 0x100) * cVar2 - (0xff < uVar375);
      cVar8 = (uVar376 != 0) * (uVar376 < 0x100) * cVar8 - (0xff < uVar376);
      auVar140[0xb] = cVar8;
      auVar143[0xc] = (uVar377 != 0) * (uVar377 < 0x100) * cVar7 - (0xff < uVar377);
      auVar143._0_12_ = auVar140;
      cVar6 = (uVar378 != 0) * (uVar378 < 0x100) * cVar6 - (0xff < uVar378);
      auVar143[0xd] = cVar6;
      auVar313[0xe] = (uVar379 != 0) * (uVar379 < 0x100) * cVar5 - (0xff < uVar379);
      auVar313._0_14_ = auVar143;
      cVar3 = (uVar380 != 0) * (uVar380 < 0x100) * cVar3 - (0xff < uVar380);
      auVar313[0xf] = cVar3;
      auVar162 = auVar129 & auVar363;
      auVar276 = auVar129 & auVar277;
      uVar211 = (ushort)bVar1;
      uVar224 = (ushort)((uint)uVar212 >> 0x18);
      uVar225 = (ushort)((uint6)uVar213 >> 0x28);
      uVar226 = (ushort)((ulong)uVar214 >> 0x38);
      uVar227 = (ushort)((unkuint10)auVar262._0_10_ >> 0x48);
      uVar228 = auVar262._10_2_ >> 8;
      uVar229 = auVar265._12_2_ >> 8;
      uVar230 = auVar277._14_2_ >> 8;
      auVar199 = auVar129 & auVar204;
      uVar231 = (ushort)bVar164;
      uVar250 = (ushort)((uint)uVar232 >> 0x18);
      uVar251 = (ushort)((uint6)uVar233 >> 0x28);
      uVar252 = (ushort)((ulong)uVar234 >> 0x38);
      uVar253 = (ushort)((unkuint10)auVar333._0_10_ >> 0x48);
      uVar254 = auVar333._10_2_ >> 8;
      uVar255 = auVar335._12_2_ >> 8;
      uVar256 = auVar346._14_2_ >> 8;
      uVar257 = (ushort)bVar17;
      uVar279 = (ushort)((uint)uVar258 >> 0x18);
      uVar281 = (ushort)((uint6)uVar259 >> 0x28);
      uVar284 = (ushort)((ulong)uVar260 >> 0x38);
      uVar285 = (ushort)((unkuint10)auVar349._0_10_ >> 0x48);
      uVar286 = auVar349._10_2_ >> 8;
      uVar287 = auVar351._12_2_ >> 8;
      uVar288 = auVar363._14_2_ >> 8;
      sVar65 = auVar276._0_2_;
      sVar66 = auVar276._2_2_;
      bVar25 = (0 < sVar66) * (sVar66 < 0x100) * auVar276[2] - (0xff < sVar66);
      sVar66 = auVar276._4_2_;
      sVar67 = auVar276._6_2_;
      cVar5 = (0 < sVar67) * (sVar67 < 0x100) * auVar276[6] - (0xff < sVar67);
      uVar232 = CONCAT13(cVar5,CONCAT12((0 < sVar66) * (sVar66 < 0x100) * auVar276[4] -
                                        (0xff < sVar66),
                                        CONCAT11(bVar25,(0 < sVar65) * (sVar65 < 0x100) *
                                                        auVar276[0] - (0xff < sVar65))));
      sVar65 = auVar276._8_2_;
      sVar66 = auVar276._10_2_;
      cVar28 = (0 < sVar66) * (sVar66 < 0x100) * auVar276[10] - (0xff < sVar66);
      uVar233 = CONCAT15(cVar28,CONCAT14((0 < sVar65) * (sVar65 < 0x100) * auVar276[8] -
                                         (0xff < sVar65),uVar232));
      sVar65 = auVar276._12_2_;
      sVar66 = auVar276._14_2_;
      cVar26 = (0 < sVar66) * (sVar66 < 0x100) * auVar276[0xe] - (0xff < sVar66);
      uVar234 = CONCAT17(cVar26,CONCAT16((0 < sVar65) * (sVar65 < 0x100) * auVar276[0xc] -
                                         (0xff < sVar65),uVar233));
      sVar65 = auVar162._0_2_;
      sVar66 = auVar162._2_2_;
      cVar207 = (0 < sVar66) * (sVar66 < 0x100) * auVar162[2] - (0xff < sVar66);
      auVar236._0_10_ =
           CONCAT19(cVar207,CONCAT18((0 < sVar65) * (sVar65 < 0x100) * auVar162[0] - (0xff < sVar65)
                                     ,uVar234));
      sVar65 = auVar162._4_2_;
      auVar236[10] = (0 < sVar65) * (sVar65 < 0x100) * auVar162[4] - (0xff < sVar65);
      sVar65 = auVar162._6_2_;
      cVar165 = (0 < sVar65) * (sVar65 < 0x100) * auVar162[6] - (0xff < sVar65);
      auVar236[0xb] = cVar165;
      sVar65 = auVar162._8_2_;
      auVar238[0xc] = (0 < sVar65) * (sVar65 < 0x100) * auVar162[8] - (0xff < sVar65);
      auVar238._0_12_ = auVar236;
      sVar65 = auVar162._10_2_;
      cVar2 = (0 < sVar65) * (sVar65 < 0x100) * auVar162[10] - (0xff < sVar65);
      auVar238[0xd] = cVar2;
      sVar65 = auVar162._12_2_;
      auVar249[0xe] = (0 < sVar65) * (sVar65 < 0x100) * auVar162[0xc] - (0xff < sVar65);
      auVar249._0_14_ = auVar238;
      sVar65 = auVar162._14_2_;
      cVar7 = (0 < sVar65) * (sVar65 < 0x100) * auVar162[0xe] - (0xff < sVar65);
      auVar249[0xf] = cVar7;
      bVar205 = (uVar224 != 0) * (uVar224 < 0x100) * cVar15 - (0xff < uVar224);
      cVar32 = (uVar226 != 0) * (uVar226 < 0x100) * cVar14 - (0xff < uVar226);
      uVar258 = CONCAT13(cVar32,CONCAT12((uVar225 != 0) * (uVar225 < 0x100) * cVar16 -
                                         (0xff < uVar225),
                                         CONCAT11(bVar205,(uVar211 != 0) * (uVar211 < 0x100) * bVar1
                                                          - (0xff < uVar211))));
      cVar12 = (uVar228 != 0) * (uVar228 < 0x100) * cVar12 - (0xff < uVar228);
      uVar259 = CONCAT15(cVar12,CONCAT14((uVar227 != 0) * (uVar227 < 0x100) * cVar13 -
                                         (0xff < uVar227),uVar258));
      cVar13 = (uVar230 != 0) * (uVar230 < 0x100) * cVar10 - (0xff < uVar230);
      uVar260 = CONCAT17(cVar13,CONCAT16((uVar229 != 0) * (uVar229 < 0x100) * cVar11 -
                                         (0xff < uVar229),uVar259));
      cVar11 = (uVar279 != 0) * (uVar279 < 0x100) * cVar282 - (0xff < uVar279);
      auVar263._0_10_ =
           CONCAT19(cVar11,CONCAT18((uVar257 != 0) * (uVar257 < 0x100) * bVar17 - (0xff < uVar257),
                                    uVar260));
      auVar263[10] = (uVar281 != 0) * (uVar281 < 0x100) * cVar33 - (0xff < uVar281);
      cVar14 = (uVar284 != 0) * (uVar284 < 0x100) * cVar35 - (0xff < uVar284);
      auVar263[0xb] = cVar14;
      auVar266[0xc] = (uVar285 != 0) * (uVar285 < 0x100) * cVar36 - (0xff < uVar285);
      auVar266._0_12_ = auVar263;
      cVar16 = (uVar286 != 0) * (uVar286 < 0x100) * cVar34 - (0xff < uVar286);
      auVar266[0xd] = cVar16;
      auVar278[0xe] = (uVar287 != 0) * (uVar287 < 0x100) * cVar208 - (0xff < uVar287);
      auVar278._0_14_ = auVar266;
      cVar15 = (uVar288 != 0) * (uVar288 < 0x100) * cVar23 - (0xff < uVar288);
      auVar278[0xf] = cVar15;
      auVar162 = auVar129 & auVar329;
      uVar211 = (ushort)bVar31;
      uVar224 = (ushort)((uint)uVar289 >> 0x18);
      uVar225 = (ushort)((uint6)uVar290 >> 0x28);
      uVar226 = (ushort)((ulong)uVar291 >> 0x38);
      uVar227 = (ushort)((unkuint10)auVar317._0_10_ >> 0x48);
      uVar228 = auVar317._10_2_ >> 8;
      uVar229 = auVar319._12_2_ >> 8;
      uVar230 = auVar329._14_2_ >> 8;
      sVar65 = auVar362._0_2_;
      sVar66 = auVar362._2_2_;
      bVar1 = (0 < sVar66) * (sVar66 < 0x100) * auVar362[2] - (0xff < sVar66);
      sVar66 = auVar362._4_2_;
      sVar67 = auVar362._6_2_;
      cVar282 = (0 < sVar67) * (sVar67 < 0x100) * auVar362[6] - (0xff < sVar67);
      uVar289 = CONCAT13(cVar282,CONCAT12((0 < sVar66) * (sVar66 < 0x100) * auVar362[4] -
                                          (0xff < sVar66),
                                          CONCAT11(bVar1,(0 < sVar65) * (sVar65 < 0x100) *
                                                         auVar362[0] - (0xff < sVar65))));
      sVar65 = auVar362._8_2_;
      sVar66 = auVar362._10_2_;
      cVar35 = (0 < sVar66) * (sVar66 < 0x100) * auVar362[10] - (0xff < sVar66);
      uVar290 = CONCAT15(cVar35,CONCAT14((0 < sVar65) * (sVar65 < 0x100) * auVar362[8] -
                                         (0xff < sVar65),uVar289));
      sVar65 = auVar362._12_2_;
      sVar66 = auVar362._14_2_;
      cVar34 = (0 < sVar66) * (sVar66 < 0x100) * auVar362[0xe] - (0xff < sVar66);
      uVar291 = CONCAT17(cVar34,CONCAT16((0 < sVar65) * (sVar65 < 0x100) * auVar362[0xc] -
                                         (0xff < sVar65),uVar290));
      sVar65 = auVar162._0_2_;
      sVar66 = auVar162._2_2_;
      cVar208 = (0 < sVar66) * (sVar66 < 0x100) * auVar162[2] - (0xff < sVar66);
      auVar293._0_10_ =
           CONCAT19(cVar208,CONCAT18((0 < sVar65) * (sVar65 < 0x100) * auVar162[0] - (0xff < sVar65)
                                     ,uVar291));
      sVar65 = auVar162._4_2_;
      auVar293[10] = (0 < sVar65) * (sVar65 < 0x100) * auVar162[4] - (0xff < sVar65);
      sVar65 = auVar162._6_2_;
      cVar33 = (0 < sVar65) * (sVar65 < 0x100) * auVar162[6] - (0xff < sVar65);
      auVar293[0xb] = cVar33;
      sVar65 = auVar162._8_2_;
      auVar295[0xc] = (0 < sVar65) * (sVar65 < 0x100) * auVar162[8] - (0xff < sVar65);
      auVar295._0_12_ = auVar293;
      sVar65 = auVar162._10_2_;
      cVar23 = (0 < sVar65) * (sVar65 < 0x100) * auVar162[10] - (0xff < sVar65);
      auVar295[0xd] = cVar23;
      sVar65 = auVar162._12_2_;
      auVar315[0xe] = (0 < sVar65) * (sVar65 < 0x100) * auVar162[0xc] - (0xff < sVar65);
      auVar315._0_14_ = auVar295;
      sVar65 = auVar162._14_2_;
      cVar10 = (0 < sVar65) * (sVar65 < 0x100) * auVar162[0xe] - (0xff < sVar65);
      auVar315[0xf] = cVar10;
      bVar17 = (uVar250 != 0) * (uVar250 < 0x100) * cVar49 - (0xff < uVar250);
      cVar36 = (uVar252 != 0) * (uVar252 < 0x100) * cVar45 - (0xff < uVar252);
      uVar330 = CONCAT13(cVar36,CONCAT12((uVar251 != 0) * (uVar251 < 0x100) * cVar47 -
                                         (0xff < uVar251),
                                         CONCAT11(bVar17,(uVar231 != 0) * (uVar231 < 0x100) *
                                                         bVar164 - (0xff < uVar231))));
      cVar49 = (uVar254 != 0) * (uVar254 < 0x100) * cVar46 - (0xff < uVar254);
      uVar331 = CONCAT15(cVar49,CONCAT14((uVar253 != 0) * (uVar253 < 0x100) * cVar44 -
                                         (0xff < uVar253),uVar330));
      cVar50 = (uVar256 != 0) * (uVar256 < 0x100) * cVar50 - (0xff < uVar256);
      uVar332 = CONCAT17(cVar50,CONCAT16((uVar255 != 0) * (uVar255 < 0x100) * cVar48 -
                                         (0xff < uVar255),uVar331));
      cVar37 = (uVar224 != 0) * (uVar224 < 0x100) * cVar37 - (0xff < uVar224);
      auVar334._0_10_ =
           CONCAT19(cVar37,CONCAT18((uVar211 != 0) * (uVar211 < 0x100) * bVar31 - (0xff < uVar211),
                                    uVar332));
      auVar334[10] = (uVar225 != 0) * (uVar225 < 0x100) * cVar43 - (0xff < uVar225);
      cVar43 = (uVar226 != 0) * (uVar226 < 0x100) * cVar42 - (0xff < uVar226);
      auVar334[0xb] = cVar43;
      auVar336[0xc] = (uVar227 != 0) * (uVar227 < 0x100) * cVar41 - (0xff < uVar227);
      auVar336._0_12_ = auVar334;
      cVar42 = (uVar228 != 0) * (uVar228 < 0x100) * cVar40 - (0xff < uVar228);
      auVar336[0xd] = cVar42;
      auVar347[0xe] = (uVar229 != 0) * (uVar229 < 0x100) * cVar39 - (0xff < uVar229);
      auVar347._0_14_ = auVar336;
      cVar41 = (uVar230 != 0) * (uVar230 < 0x100) * cVar38 - (0xff < uVar230);
      auVar347[0xf] = cVar41;
      auVar162 = auVar129 & auVar313;
      uVar211 = (ushort)bVar9;
      uVar224 = (ushort)((uint)uVar136 >> 0x18);
      uVar225 = (ushort)((uint6)uVar137 >> 0x28);
      uVar226 = (ushort)((ulong)uVar138 >> 0x38);
      uVar227 = (ushort)((unkuint10)auVar140._0_10_ >> 0x48);
      uVar228 = auVar140._10_2_ >> 8;
      uVar229 = auVar143._12_2_ >> 8;
      uVar230 = auVar313._14_2_ >> 8;
      sVar65 = auVar162._0_2_;
      sVar66 = auVar162._2_2_;
      bVar31 = (0 < sVar66) * (sVar66 < 0x100) * auVar162[2] - (0xff < sVar66);
      sVar66 = auVar162._4_2_;
      sVar67 = auVar162._6_2_;
      cVar44 = (0 < sVar67) * (sVar67 < 0x100) * auVar162[6] - (0xff < sVar67);
      uVar212 = CONCAT13(cVar44,CONCAT12((0 < sVar66) * (sVar66 < 0x100) * auVar162[4] -
                                         (0xff < sVar66),
                                         CONCAT11(bVar31,(0 < sVar65) * (sVar65 < 0x100) *
                                                         auVar162[0] - (0xff < sVar65))));
      sVar65 = auVar162._8_2_;
      sVar66 = auVar162._10_2_;
      cVar46 = (0 < sVar66) * (sVar66 < 0x100) * auVar162[10] - (0xff < sVar66);
      uVar213 = CONCAT15(cVar46,CONCAT14((0 < sVar65) * (sVar65 < 0x100) * auVar162[8] -
                                         (0xff < sVar65),uVar212));
      sVar65 = auVar162._12_2_;
      sVar66 = auVar162._14_2_;
      cVar48 = (0 < sVar66) * (sVar66 < 0x100) * auVar162[0xe] - (0xff < sVar66);
      uVar214 = CONCAT17(cVar48,CONCAT16((0 < sVar65) * (sVar65 < 0x100) * auVar162[0xc] -
                                         (0xff < sVar65),uVar213));
      sVar65 = auVar199._0_2_;
      sVar66 = auVar199._2_2_;
      cVar45 = (0 < sVar66) * (sVar66 < 0x100) * auVar199[2] - (0xff < sVar66);
      auVar217._0_10_ =
           CONCAT19(cVar45,CONCAT18((0 < sVar65) * (sVar65 < 0x100) * auVar199[0] - (0xff < sVar65),
                                    uVar214));
      sVar65 = auVar199._4_2_;
      auVar217[10] = (0 < sVar65) * (sVar65 < 0x100) * auVar199[4] - (0xff < sVar65);
      sVar65 = auVar199._6_2_;
      cVar38 = (0 < sVar65) * (sVar65 < 0x100) * auVar199[6] - (0xff < sVar65);
      auVar217[0xb] = cVar38;
      sVar65 = auVar199._8_2_;
      auVar220[0xc] = (0 < sVar65) * (sVar65 < 0x100) * auVar199[8] - (0xff < sVar65);
      auVar220._0_12_ = auVar217;
      sVar65 = auVar199._10_2_;
      cVar39 = (0 < sVar65) * (sVar65 < 0x100) * auVar199[10] - (0xff < sVar65);
      auVar220[0xd] = cVar39;
      sVar65 = auVar199._12_2_;
      auVar223[0xe] = (0 < sVar65) * (sVar65 < 0x100) * auVar199[0xc] - (0xff < sVar65);
      auVar223._0_14_ = auVar220;
      sVar65 = auVar199._14_2_;
      cVar40 = (0 < sVar65) * (sVar65 < 0x100) * auVar199[0xe] - (0xff < sVar65);
      auVar223[0xf] = cVar40;
      auVar162 = auVar129 & auVar315;
      auVar313 = auVar129 & auVar249;
      auVar362 = auVar129 & auVar223;
      uVar257 = (ushort)bVar166;
      uVar279 = (ushort)((uint)uVar167 >> 0x18);
      uVar281 = (ushort)((uint6)uVar168 >> 0x28);
      uVar284 = (ushort)((ulong)uVar169 >> 0x38);
      uVar285 = (ushort)((unkuint10)auVar172._0_10_ >> 0x48);
      uVar286 = auVar172._10_2_ >> 8;
      uVar287 = auVar175._12_2_ >> 8;
      uVar288 = auVar204._14_2_ >> 8;
      uVar231 = (ushort)bVar1;
      uVar250 = (ushort)((uint)uVar289 >> 0x18);
      uVar251 = (ushort)((uint6)uVar290 >> 0x28);
      uVar252 = (ushort)((ulong)uVar291 >> 0x38);
      uVar253 = (ushort)((unkuint10)auVar293._0_10_ >> 0x48);
      uVar254 = auVar293._10_2_ >> 8;
      uVar255 = auVar295._12_2_ >> 8;
      uVar256 = auVar315._14_2_ >> 8;
      sVar65 = auVar313._0_2_;
      sVar66 = auVar313._2_2_;
      sVar67 = auVar313._4_2_;
      sVar68 = auVar313._6_2_;
      sVar69 = auVar313._8_2_;
      sVar70 = auVar313._10_2_;
      sVar71 = auVar313._12_2_;
      sVar72 = auVar313._14_2_;
      sVar73 = auVar162._0_2_;
      sVar74 = auVar162._2_2_;
      sVar75 = auVar162._4_2_;
      sVar76 = auVar162._6_2_;
      sVar77 = auVar162._8_2_;
      sVar78 = auVar162._10_2_;
      sVar79 = auVar162._12_2_;
      sVar80 = auVar162._14_2_;
      bVar164 = (uVar224 != 0) * (uVar224 < 0x100) * cVar27 - (0xff < uVar224);
      cVar27 = (uVar226 != 0) * (uVar226 < 0x100) * cVar29 - (0xff < uVar226);
      uVar136 = CONCAT13(cVar27,CONCAT12((uVar225 != 0) * (uVar225 < 0x100) * cVar30 -
                                         (0xff < uVar225),
                                         CONCAT11(bVar164,(uVar211 != 0) * (uVar211 < 0x100) * bVar9
                                                          - (0xff < uVar211))));
      cVar8 = (uVar228 != 0) * (uVar228 < 0x100) * cVar8 - (0xff < uVar228);
      uVar137 = CONCAT15(cVar8,CONCAT14((uVar227 != 0) * (uVar227 < 0x100) * cVar4 -
                                        (0xff < uVar227),uVar136));
      cVar3 = (uVar230 != 0) * (uVar230 < 0x100) * cVar3 - (0xff < uVar230);
      uVar138 = CONCAT17(cVar3,CONCAT16((uVar229 != 0) * (uVar229 < 0x100) * cVar6 -
                                        (0xff < uVar229),uVar137));
      cVar4 = (uVar279 != 0) * (uVar279 < 0x100) * cVar51 - (0xff < uVar279);
      auVar141._0_10_ =
           CONCAT19(cVar4,CONCAT18((uVar257 != 0) * (uVar257 < 0x100) * bVar166 - (0xff < uVar257),
                                   uVar138));
      auVar141[10] = (uVar281 != 0) * (uVar281 < 0x100) * cVar24 - (0xff < uVar281);
      cVar6 = (uVar284 != 0) * (uVar284 < 0x100) * cVar22 - (0xff < uVar284);
      auVar141[0xb] = cVar6;
      auVar144[0xc] = (uVar285 != 0) * (uVar285 < 0x100) * cVar18 - (0xff < uVar285);
      auVar144._0_12_ = auVar141;
      cVar18 = (uVar286 != 0) * (uVar286 < 0x100) * cVar21 - (0xff < uVar286);
      auVar144[0xd] = cVar18;
      auVar163[0xe] = (uVar287 != 0) * (uVar287 < 0x100) * cVar20 - (0xff < uVar287);
      auVar163._0_14_ = auVar144;
      cVar19 = (uVar288 != 0) * (uVar288 < 0x100) * cVar19 - (0xff < uVar288);
      auVar163[0xf] = cVar19;
      *pcVar131 = (0 < sVar65) * (sVar65 < 0x100) * auVar313[0] - (0xff < sVar65);
      pcVar131[1] = (0 < sVar66) * (sVar66 < 0x100) * auVar313[2] - (0xff < sVar66);
      pcVar131[2] = (0 < sVar67) * (sVar67 < 0x100) * auVar313[4] - (0xff < sVar67);
      pcVar131[3] = (0 < sVar68) * (sVar68 < 0x100) * auVar313[6] - (0xff < sVar68);
      pcVar131[4] = (0 < sVar69) * (sVar69 < 0x100) * auVar313[8] - (0xff < sVar69);
      pcVar131[5] = (0 < sVar70) * (sVar70 < 0x100) * auVar313[10] - (0xff < sVar70);
      pcVar131[6] = (0 < sVar71) * (sVar71 < 0x100) * auVar313[0xc] - (0xff < sVar71);
      pcVar131[7] = (0 < sVar72) * (sVar72 < 0x100) * auVar313[0xe] - (0xff < sVar72);
      pcVar131[8] = (0 < sVar73) * (sVar73 < 0x100) * auVar162[0] - (0xff < sVar73);
      pcVar131[9] = (0 < sVar74) * (sVar74 < 0x100) * auVar162[2] - (0xff < sVar74);
      pcVar131[10] = (0 < sVar75) * (sVar75 < 0x100) * auVar162[4] - (0xff < sVar75);
      pcVar131[0xb] = (0 < sVar76) * (sVar76 < 0x100) * auVar162[6] - (0xff < sVar76);
      pcVar131[0xc] = (0 < sVar77) * (sVar77 < 0x100) * auVar162[8] - (0xff < sVar77);
      pcVar131[0xd] = (0 < sVar78) * (sVar78 < 0x100) * auVar162[10] - (0xff < sVar78);
      pcVar131[0xe] = (0 < sVar79) * (sVar79 < 0x100) * auVar162[0xc] - (0xff < sVar79);
      pcVar131[0xf] = (0 < sVar80) * (sVar80 < 0x100) * auVar162[0xe] - (0xff < sVar80);
      auVar162 = auVar129 & auVar278;
      uVar211 = (ushort)bVar25;
      uVar224 = (ushort)((uint)uVar232 >> 0x18);
      uVar225 = (ushort)((uint6)uVar233 >> 0x28);
      uVar226 = (ushort)((ulong)uVar234 >> 0x38);
      uVar227 = (ushort)((unkuint10)auVar236._0_10_ >> 0x48);
      uVar228 = auVar236._10_2_ >> 8;
      uVar229 = auVar238._12_2_ >> 8;
      uVar230 = auVar249._14_2_ >> 8;
      auVar276 = auVar129 & auVar347;
      sVar65 = auVar362._0_2_;
      sVar66 = auVar362._2_2_;
      sVar67 = auVar362._4_2_;
      sVar68 = auVar362._6_2_;
      sVar69 = auVar362._8_2_;
      sVar70 = auVar362._10_2_;
      sVar71 = auVar362._12_2_;
      sVar72 = auVar362._14_2_;
      sVar73 = auVar162._0_2_;
      sVar74 = auVar162._2_2_;
      sVar75 = auVar162._4_2_;
      sVar76 = auVar162._6_2_;
      sVar77 = auVar162._8_2_;
      sVar78 = auVar162._10_2_;
      sVar79 = auVar162._12_2_;
      sVar80 = auVar162._14_2_;
      auVar313 = auVar129 & auVar163;
      uVar364 = (ushort)bVar205;
      uVar374 = (ushort)((uint)uVar258 >> 0x18);
      uVar375 = (ushort)((uint6)uVar259 >> 0x28);
      uVar376 = (ushort)((ulong)uVar260 >> 0x38);
      uVar377 = (ushort)((unkuint10)auVar263._0_10_ >> 0x48);
      uVar378 = auVar263._10_2_ >> 8;
      uVar379 = auVar266._12_2_ >> 8;
      uVar380 = auVar278._14_2_ >> 8;
      pcVar131[0x10] = (0 < sVar65) * (sVar65 < 0x100) * auVar362[0] - (0xff < sVar65);
      pcVar131[0x11] = (0 < sVar66) * (sVar66 < 0x100) * auVar362[2] - (0xff < sVar66);
      pcVar131[0x12] = (0 < sVar67) * (sVar67 < 0x100) * auVar362[4] - (0xff < sVar67);
      pcVar131[0x13] = (0 < sVar68) * (sVar68 < 0x100) * auVar362[6] - (0xff < sVar68);
      pcVar131[0x14] = (0 < sVar69) * (sVar69 < 0x100) * auVar362[8] - (0xff < sVar69);
      pcVar131[0x15] = (0 < sVar70) * (sVar70 < 0x100) * auVar362[10] - (0xff < sVar70);
      pcVar131[0x16] = (0 < sVar71) * (sVar71 < 0x100) * auVar362[0xc] - (0xff < sVar71);
      pcVar131[0x17] = (0 < sVar72) * (sVar72 < 0x100) * auVar362[0xe] - (0xff < sVar72);
      pcVar131[0x18] = (0 < sVar73) * (sVar73 < 0x100) * auVar162[0] - (0xff < sVar73);
      pcVar131[0x19] = (0 < sVar74) * (sVar74 < 0x100) * auVar162[2] - (0xff < sVar74);
      pcVar131[0x1a] = (0 < sVar75) * (sVar75 < 0x100) * auVar162[4] - (0xff < sVar75);
      pcVar131[0x1b] = (0 < sVar76) * (sVar76 < 0x100) * auVar162[6] - (0xff < sVar76);
      pcVar131[0x1c] = (0 < sVar77) * (sVar77 < 0x100) * auVar162[8] - (0xff < sVar77);
      pcVar131[0x1d] = (0 < sVar78) * (sVar78 < 0x100) * auVar162[10] - (0xff < sVar78);
      pcVar131[0x1e] = (0 < sVar79) * (sVar79 < 0x100) * auVar162[0xc] - (0xff < sVar79);
      pcVar131[0x1f] = (0 < sVar80) * (sVar80 < 0x100) * auVar162[0xe] - (0xff < sVar80);
      sVar65 = auVar276._0_2_;
      sVar66 = auVar276._2_2_;
      sVar67 = auVar276._4_2_;
      sVar68 = auVar276._6_2_;
      sVar69 = auVar276._8_2_;
      sVar70 = auVar276._10_2_;
      sVar71 = auVar276._12_2_;
      sVar72 = auVar276._14_2_;
      sVar73 = auVar313._0_2_;
      sVar74 = auVar313._2_2_;
      sVar75 = auVar313._4_2_;
      sVar76 = auVar313._6_2_;
      sVar77 = auVar313._8_2_;
      sVar78 = auVar313._10_2_;
      sVar79 = auVar313._12_2_;
      sVar80 = auVar313._14_2_;
      pcVar131[0x30] = (uVar211 != 0) * (uVar211 < 0x100) * bVar25 - (0xff < uVar211);
      pcVar131[0x31] = (uVar224 != 0) * (uVar224 < 0x100) * cVar5 - (0xff < uVar224);
      pcVar131[0x32] = (uVar225 != 0) * (uVar225 < 0x100) * cVar28 - (0xff < uVar225);
      pcVar131[0x33] = (uVar226 != 0) * (uVar226 < 0x100) * cVar26 - (0xff < uVar226);
      pcVar131[0x34] = (uVar227 != 0) * (uVar227 < 0x100) * cVar207 - (0xff < uVar227);
      pcVar131[0x35] = (uVar228 != 0) * (uVar228 < 0x100) * cVar165 - (0xff < uVar228);
      pcVar131[0x36] = (uVar229 != 0) * (uVar229 < 0x100) * cVar2 - (0xff < uVar229);
      pcVar131[0x37] = (uVar230 != 0) * (uVar230 < 0x100) * cVar7 - (0xff < uVar230);
      pcVar131[0x38] = (uVar231 != 0) * (uVar231 < 0x100) * bVar1 - (0xff < uVar231);
      pcVar131[0x39] = (uVar250 != 0) * (uVar250 < 0x100) * cVar282 - (0xff < uVar250);
      pcVar131[0x3a] = (uVar251 != 0) * (uVar251 < 0x100) * cVar35 - (0xff < uVar251);
      pcVar131[0x3b] = (uVar252 != 0) * (uVar252 < 0x100) * cVar34 - (0xff < uVar252);
      pcVar131[0x3c] = (uVar253 != 0) * (uVar253 < 0x100) * cVar208 - (0xff < uVar253);
      pcVar131[0x3d] = (uVar254 != 0) * (uVar254 < 0x100) * cVar33 - (0xff < uVar254);
      pcVar131[0x3e] = (uVar255 != 0) * (uVar255 < 0x100) * cVar23 - (0xff < uVar255);
      pcVar131[0x3f] = (uVar256 != 0) * (uVar256 < 0x100) * cVar10 - (0xff < uVar256);
      uVar257 = (ushort)bVar31;
      uVar279 = (ushort)((uint)uVar212 >> 0x18);
      uVar281 = (ushort)((uint6)uVar213 >> 0x28);
      uVar284 = (ushort)((ulong)uVar214 >> 0x38);
      uVar285 = (ushort)((unkuint10)auVar217._0_10_ >> 0x48);
      uVar286 = auVar217._10_2_ >> 8;
      uVar287 = auVar220._12_2_ >> 8;
      uVar288 = auVar223._14_2_ >> 8;
      uVar211 = (ushort)bVar164;
      uVar224 = (ushort)((uint)uVar136 >> 0x18);
      uVar225 = (ushort)((uint6)uVar137 >> 0x28);
      uVar226 = (ushort)((ulong)uVar138 >> 0x38);
      uVar227 = (ushort)((unkuint10)auVar141._0_10_ >> 0x48);
      uVar228 = auVar141._10_2_ >> 8;
      uVar229 = auVar144._12_2_ >> 8;
      uVar230 = auVar163._14_2_ >> 8;
      pcVar131[0x20] = (0 < sVar65) * (sVar65 < 0x100) * auVar276[0] - (0xff < sVar65);
      pcVar131[0x21] = (0 < sVar66) * (sVar66 < 0x100) * auVar276[2] - (0xff < sVar66);
      pcVar131[0x22] = (0 < sVar67) * (sVar67 < 0x100) * auVar276[4] - (0xff < sVar67);
      pcVar131[0x23] = (0 < sVar68) * (sVar68 < 0x100) * auVar276[6] - (0xff < sVar68);
      pcVar131[0x24] = (0 < sVar69) * (sVar69 < 0x100) * auVar276[8] - (0xff < sVar69);
      pcVar131[0x25] = (0 < sVar70) * (sVar70 < 0x100) * auVar276[10] - (0xff < sVar70);
      pcVar131[0x26] = (0 < sVar71) * (sVar71 < 0x100) * auVar276[0xc] - (0xff < sVar71);
      pcVar131[0x27] = (0 < sVar72) * (sVar72 < 0x100) * auVar276[0xe] - (0xff < sVar72);
      pcVar131[0x28] = (0 < sVar73) * (sVar73 < 0x100) * auVar313[0] - (0xff < sVar73);
      pcVar131[0x29] = (0 < sVar74) * (sVar74 < 0x100) * auVar313[2] - (0xff < sVar74);
      pcVar131[0x2a] = (0 < sVar75) * (sVar75 < 0x100) * auVar313[4] - (0xff < sVar75);
      pcVar131[0x2b] = (0 < sVar76) * (sVar76 < 0x100) * auVar313[6] - (0xff < sVar76);
      pcVar131[0x2c] = (0 < sVar77) * (sVar77 < 0x100) * auVar313[8] - (0xff < sVar77);
      pcVar131[0x2d] = (0 < sVar78) * (sVar78 < 0x100) * auVar313[10] - (0xff < sVar78);
      pcVar131[0x2e] = (0 < sVar79) * (sVar79 < 0x100) * auVar313[0xc] - (0xff < sVar79);
      pcVar131[0x2f] = (0 < sVar80) * (sVar80 < 0x100) * auVar313[0xe] - (0xff < sVar80);
      uVar231 = (ushort)bVar17;
      uVar250 = (ushort)((uint)uVar330 >> 0x18);
      uVar251 = (ushort)((uint6)uVar331 >> 0x28);
      uVar252 = (ushort)((ulong)uVar332 >> 0x38);
      uVar253 = (ushort)((unkuint10)auVar334._0_10_ >> 0x48);
      uVar254 = auVar334._10_2_ >> 8;
      uVar255 = auVar336._12_2_ >> 8;
      uVar256 = auVar347._14_2_ >> 8;
      pcVar131[0x40] = (uVar257 != 0) * (uVar257 < 0x100) * bVar31 - (0xff < uVar257);
      pcVar131[0x41] = (uVar279 != 0) * (uVar279 < 0x100) * cVar44 - (0xff < uVar279);
      pcVar131[0x42] = (uVar281 != 0) * (uVar281 < 0x100) * cVar46 - (0xff < uVar281);
      pcVar131[0x43] = (uVar284 != 0) * (uVar284 < 0x100) * cVar48 - (0xff < uVar284);
      pcVar131[0x44] = (uVar285 != 0) * (uVar285 < 0x100) * cVar45 - (0xff < uVar285);
      pcVar131[0x45] = (uVar286 != 0) * (uVar286 < 0x100) * cVar38 - (0xff < uVar286);
      pcVar131[0x46] = (uVar287 != 0) * (uVar287 < 0x100) * cVar39 - (0xff < uVar287);
      pcVar131[0x47] = (uVar288 != 0) * (uVar288 < 0x100) * cVar40 - (0xff < uVar288);
      pcVar131[0x48] = (uVar364 != 0) * (uVar364 < 0x100) * bVar205 - (0xff < uVar364);
      pcVar131[0x49] = (uVar374 != 0) * (uVar374 < 0x100) * cVar32 - (0xff < uVar374);
      pcVar131[0x4a] = (uVar375 != 0) * (uVar375 < 0x100) * cVar12 - (0xff < uVar375);
      pcVar131[0x4b] = (uVar376 != 0) * (uVar376 < 0x100) * cVar13 - (0xff < uVar376);
      pcVar131[0x4c] = (uVar377 != 0) * (uVar377 < 0x100) * cVar11 - (0xff < uVar377);
      pcVar131[0x4d] = (uVar378 != 0) * (uVar378 < 0x100) * cVar14 - (0xff < uVar378);
      pcVar131[0x4e] = (uVar379 != 0) * (uVar379 < 0x100) * cVar16 - (0xff < uVar379);
      pcVar131[0x4f] = (uVar380 != 0) * (uVar380 < 0x100) * cVar15 - (0xff < uVar380);
      pcVar131[0x50] = (uVar231 != 0) * (uVar231 < 0x100) * bVar17 - (0xff < uVar231);
      pcVar131[0x51] = (uVar250 != 0) * (uVar250 < 0x100) * cVar36 - (0xff < uVar250);
      pcVar131[0x52] = (uVar251 != 0) * (uVar251 < 0x100) * cVar49 - (0xff < uVar251);
      pcVar131[0x53] = (uVar252 != 0) * (uVar252 < 0x100) * cVar50 - (0xff < uVar252);
      pcVar131[0x54] = (uVar253 != 0) * (uVar253 < 0x100) * cVar37 - (0xff < uVar253);
      pcVar131[0x55] = (uVar254 != 0) * (uVar254 < 0x100) * cVar43 - (0xff < uVar254);
      pcVar131[0x56] = (uVar255 != 0) * (uVar255 < 0x100) * cVar42 - (0xff < uVar255);
      pcVar131[0x57] = (uVar256 != 0) * (uVar256 < 0x100) * cVar41 - (0xff < uVar256);
      pcVar131[0x58] = (uVar211 != 0) * (uVar211 < 0x100) * bVar164 - (0xff < uVar211);
      pcVar131[0x59] = (uVar224 != 0) * (uVar224 < 0x100) * cVar27 - (0xff < uVar224);
      pcVar131[0x5a] = (uVar225 != 0) * (uVar225 < 0x100) * cVar8 - (0xff < uVar225);
      pcVar131[0x5b] = (uVar226 != 0) * (uVar226 < 0x100) * cVar3 - (0xff < uVar226);
      pcVar131[0x5c] = (uVar227 != 0) * (uVar227 < 0x100) * cVar4 - (0xff < uVar227);
      pcVar131[0x5d] = (uVar228 != 0) * (uVar228 < 0x100) * cVar6 - (0xff < uVar228);
      pcVar131[0x5e] = (uVar229 != 0) * (uVar229 < 0x100) * cVar18 - (0xff < uVar229);
      pcVar131[0x5f] = (uVar230 != 0) * (uVar230 < 0x100) * cVar19 - (0xff < uVar230);
      pauVar130 = pauVar130 + 8;
      pcVar131 = pcVar132;
    } while (pcVar132 != param_3 + uVar134 * 0x60);
    param_1 = param_1 + uVar134 * 8;
    param_2 = (ulong)(uVar133 + uVar135 * -0x20);
    param_3 = param_3 + uVar134 * 0x60;
  }
  if (0 < (int)param_2) {
    VP8LConvertBGRAToRGB_C(param_1,param_2,param_3);
    return;
  }
  return;
}



void PredictorAdd5_SSE2(long param_1,long param_2,int param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  ushort uVar5;
  uint3 uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  
  if (0 < param_3) {
    uVar3 = *(uint *)(param_4 + -4);
    lVar4 = 0;
    do {
      uVar1 = *(undefined4 *)(param_2 + 4 + lVar4);
      uVar2 = *(undefined4 *)(param_2 + lVar4);
      uVar5 = (ushort)(((ushort)(((ushort)uVar1 & 0xff) + (ushort)(byte)uVar3) >> 1) +
                      (ushort)(byte)uVar2) >> 1;
      uVar7 = (ushort)(((ushort)((ushort)(byte)((uint)uVar1 >> 8) + (ushort)(byte)(uVar3 >> 8)) >> 1
                       ) + (ushort)(byte)((uint)uVar2 >> 8)) >> 1;
      uVar8 = (ushort)(((ushort)((ushort)(byte)((uint)uVar1 >> 0x10) + (ushort)(byte)(uVar3 >> 0x10)
                                ) >> 1) + (ushort)(byte)((uint)uVar2 >> 0x10)) >> 1;
      uVar9 = (ushort)(((ushort)((ushort)(byte)((uint)uVar1 >> 0x18) + (ushort)(byte)(uVar3 >> 0x18)
                                ) >> 1) + (ushort)(byte)((uint)uVar2 >> 0x18)) >> 1;
      uVar6 = CONCAT12((uVar8 != 0) * (uVar8 < 0x100) * (char)uVar8 - (0xff < uVar8),
                       CONCAT11((uVar7 != 0) * (uVar7 < 0x100) * (char)uVar7 - (0xff < uVar7),
                                (uVar5 != 0) * (uVar5 < 0x100) * (char)uVar5 - (0xff < uVar5)));
      uVar3 = (CONCAT13((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 - (0xff < uVar9),uVar6) &
              0xff00ff00) + (*(uint *)(param_1 + lVar4) & 0xff00ff00) & 0xff00ff00 |
              (*(uint *)(param_1 + lVar4) & 0xff00ff) + (uVar6 & 0xff00ff) & 0xff00ff;
      *(uint *)(param_4 + lVar4) = uVar3;
      lVar4 = lVar4 + 4;
    } while ((long)param_3 * 4 - lVar4 != 0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8LDspInitSSE2(void)

{
  _VP8LPredictorsAdd = 0x100000;
  _VP8LAddGreenToBlueAndRed = AddGreenToBlueAndRed_SSE2;
  _VP8LTransformColorInverse = TransformColorInverse_SSE2;
  _VP8LConvertBGRAToRGB = ConvertBGRAToRGB_SSE2;
  _DAT_00102088 = PredictorAdd8_SSE2;
  pcRam0000000000102090 = PredictorAdd9_SSE2;
  _VP8LConvertBGRAToRGBA = ConvertBGRAToRGBA_SSE2;
  _VP8LConvertBGRAToRGBA4444 = ConvertBGRAToRGBA4444_SSE2;
  _DAT_00102098 = PredictorAdd10_SSE2;
  pcRam00000000001020a0 = PredictorAdd11_SSE2;
  _VP8LConvertBGRAToRGB565 = ConvertBGRAToRGB565_SSE2;
  _VP8LConvertBGRAToBGR = ConvertBGRAToBGR_SSE2;
  _DAT_001020a8 = PredictorAdd12_SSE2;
  pcRam00000000001020b0 = PredictorAdd13_SSE2;
  return;
}



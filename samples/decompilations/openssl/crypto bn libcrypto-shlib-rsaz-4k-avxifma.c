
/* WARNING: Control flow encountered bad instruction data */

void ossl_rsaz_amm52x40_x1_avxifma256(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void ossl_rsaz_amm52x40_x2_avxifma256(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_extract_multiplier_2x40_win5_avx
               (undefined1 (*param_1) [32],undefined1 (*param_2) [32],long param_3,long param_4)

{
  undefined1 (*pauVar1) [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 (*pauVar11) [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  
  auVar10 = _DAT_001025e0;
  pauVar1 = param_2 + 0x280;
  auVar13 = ZEXT1664((undefined1  [16])0x0);
  auVar12 = auVar13._0_32_;
  auVar14 = ZEXT3264(auVar12);
  auVar15 = ZEXT3264(auVar12);
  auVar16 = ZEXT3264(auVar12);
  auVar17 = ZEXT3264(auVar12);
  auVar18 = ZEXT3264(auVar12);
  auVar19 = ZEXT3264(auVar12);
  auVar20 = ZEXT3264(auVar12);
  auVar21 = ZEXT3264(auVar12);
  auVar22 = ZEXT3264(auVar12);
  auVar23 = ZEXT3264((undefined1  [32])0x0);
  pauVar11 = param_2;
  do {
    auVar24._0_8_ = -(ulong)(param_3 == auVar23._0_8_);
    auVar24._8_8_ = -(ulong)(param_3 == auVar23._8_8_);
    auVar24._16_8_ = -(ulong)(param_3 == auVar23._16_8_);
    auVar24._24_8_ = -(ulong)(param_3 == auVar23._24_8_);
    auVar12 = vblendvpd_avx(auVar13._0_32_,*pauVar11,auVar24);
    auVar13 = ZEXT3264(auVar12);
    auVar2 = vblendvpd_avx(auVar14._0_32_,pauVar11[1],auVar24);
    auVar14 = ZEXT3264(auVar2);
    auVar3 = vblendvpd_avx(auVar15._0_32_,pauVar11[2],auVar24);
    auVar15 = ZEXT3264(auVar3);
    auVar4 = vblendvpd_avx(auVar16._0_32_,pauVar11[3],auVar24);
    auVar16 = ZEXT3264(auVar4);
    auVar5 = vblendvpd_avx(auVar17._0_32_,pauVar11[4],auVar24);
    auVar17 = ZEXT3264(auVar5);
    auVar6 = vblendvpd_avx(auVar18._0_32_,pauVar11[5],auVar24);
    auVar18 = ZEXT3264(auVar6);
    auVar7 = vblendvpd_avx(auVar19._0_32_,pauVar11[6],auVar24);
    auVar19 = ZEXT3264(auVar7);
    auVar8 = vblendvpd_avx(auVar20._0_32_,pauVar11[7],auVar24);
    auVar20 = ZEXT3264(auVar8);
    auVar9 = vblendvpd_avx(auVar21._0_32_,pauVar11[8],auVar24);
    auVar21 = ZEXT3264(auVar9);
    auVar24 = vblendvpd_avx(auVar22._0_32_,pauVar11[9],auVar24);
    auVar22 = ZEXT3264(auVar24);
    auVar25 = vpaddq_avx2(auVar23._0_32_,_DAT_001025e0);
    auVar23 = ZEXT3264(auVar25);
    pauVar11 = pauVar11 + 0x14;
  } while (pauVar1 != pauVar11);
  *param_1 = auVar12;
  param_1[1] = auVar2;
  param_1[2] = auVar3;
  param_1[3] = auVar4;
  param_1[4] = auVar5;
  param_1[5] = auVar6;
  param_1[6] = auVar7;
  param_1[7] = auVar8;
  param_1[8] = auVar9;
  param_1[9] = auVar24;
  auVar23 = ZEXT3264((undefined1  [32])0x0);
  do {
    auVar25._0_8_ = -(ulong)(param_4 == auVar23._0_8_);
    auVar25._8_8_ = -(ulong)(param_4 == auVar23._8_8_);
    auVar25._16_8_ = -(ulong)(param_4 == auVar23._16_8_);
    auVar25._24_8_ = -(ulong)(param_4 == auVar23._24_8_);
    auVar12 = vblendvpd_avx(auVar13._0_32_,param_2[10],auVar25);
    auVar13 = ZEXT3264(auVar12);
    auVar2 = vblendvpd_avx(auVar14._0_32_,param_2[0xb],auVar25);
    auVar14 = ZEXT3264(auVar2);
    auVar3 = vblendvpd_avx(auVar15._0_32_,param_2[0xc],auVar25);
    auVar15 = ZEXT3264(auVar3);
    auVar4 = vblendvpd_avx(auVar16._0_32_,param_2[0xd],auVar25);
    auVar16 = ZEXT3264(auVar4);
    auVar5 = vblendvpd_avx(auVar17._0_32_,param_2[0xe],auVar25);
    auVar17 = ZEXT3264(auVar5);
    auVar6 = vblendvpd_avx(auVar18._0_32_,param_2[0xf],auVar25);
    auVar18 = ZEXT3264(auVar6);
    auVar7 = vblendvpd_avx(auVar19._0_32_,param_2[0x10],auVar25);
    auVar19 = ZEXT3264(auVar7);
    auVar8 = vblendvpd_avx(auVar20._0_32_,param_2[0x11],auVar25);
    auVar20 = ZEXT3264(auVar8);
    auVar9 = vblendvpd_avx(auVar21._0_32_,param_2[0x12],auVar25);
    auVar21 = ZEXT3264(auVar9);
    auVar24 = vblendvpd_avx(auVar22._0_32_,param_2[0x13],auVar25);
    auVar22 = ZEXT3264(auVar24);
    auVar25 = vpaddq_avx2(auVar23._0_32_,auVar10);
    auVar23 = ZEXT3264(auVar25);
    param_2 = param_2 + 0x14;
  } while (pauVar1 != param_2);
  param_1[10] = auVar12;
  param_1[0xb] = auVar2;
  param_1[0xc] = auVar3;
  param_1[0xd] = auVar4;
  param_1[0xe] = auVar5;
  param_1[0xf] = auVar6;
  param_1[0x10] = auVar7;
  param_1[0x11] = auVar8;
  param_1[0x12] = auVar9;
  param_1[0x13] = auVar24;
  return;
}



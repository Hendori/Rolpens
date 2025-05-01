
/* WARNING: Control flow encountered bad instruction data */

void ossl_rsaz_amm52x30_x1_avxifma256(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void ossl_rsaz_amm52x30_x2_avxifma256(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_extract_multiplier_2x30_win5_avx
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
  undefined1 (*pauVar10) [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [64];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  
  auVar9 = _DAT_00102080;
  pauVar1 = param_2 + 0x200;
  auVar13 = ZEXT1664((undefined1  [16])0x0);
  auVar11 = auVar13._0_32_;
  pauVar10 = param_2;
  auVar2 = auVar11;
  auVar3 = auVar11;
  auVar4 = auVar11;
  auVar5 = auVar11;
  auVar6 = auVar11;
  auVar7 = auVar11;
  auVar8 = auVar11;
  do {
    auVar14._0_8_ = -(ulong)(param_3 == auVar8._0_8_);
    auVar14._8_8_ = -(ulong)(param_3 == auVar8._8_8_);
    auVar14._16_8_ = -(ulong)(param_3 == auVar8._16_8_);
    auVar14._24_8_ = -(ulong)(param_3 == auVar8._24_8_);
    auVar12 = vblendvpd_avx(auVar13._0_32_,*pauVar10,auVar14);
    auVar13 = ZEXT3264(auVar12);
    auVar11 = vblendvpd_avx(auVar11,pauVar10[1],auVar14);
    auVar2 = vblendvpd_avx(auVar2,pauVar10[2],auVar14);
    auVar3 = vblendvpd_avx(auVar3,pauVar10[3],auVar14);
    auVar4 = vblendvpd_avx(auVar4,pauVar10[4],auVar14);
    auVar5 = vblendvpd_avx(auVar5,pauVar10[5],auVar14);
    auVar6 = vblendvpd_avx(auVar6,pauVar10[6],auVar14);
    auVar7 = vblendvpd_avx(auVar7,pauVar10[7],auVar14);
    auVar8 = vpaddq_avx2(auVar8,_DAT_00102080);
    pauVar10 = pauVar10 + 0x10;
  } while (pauVar1 != pauVar10);
  *param_1 = auVar12;
  param_1[1] = auVar11;
  param_1[2] = auVar2;
  param_1[3] = auVar3;
  param_1[4] = auVar4;
  param_1[5] = auVar5;
  param_1[6] = auVar6;
  param_1[7] = auVar7;
  auVar12 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar11 = auVar12;
  auVar2 = auVar12;
  auVar3 = auVar12;
  auVar4 = auVar12;
  auVar5 = auVar12;
  auVar6 = auVar12;
  auVar7 = auVar12;
  auVar8 = auVar12;
  do {
    auVar15._0_8_ = -(ulong)(param_4 == auVar12._0_8_);
    auVar15._8_8_ = -(ulong)(param_4 == auVar12._8_8_);
    auVar15._16_8_ = -(ulong)(param_4 == auVar12._16_8_);
    auVar15._24_8_ = -(ulong)(param_4 == auVar12._24_8_);
    auVar11 = vblendvpd_avx(auVar11,param_2[8],auVar15);
    auVar2 = vblendvpd_avx(auVar2,param_2[9],auVar15);
    auVar3 = vblendvpd_avx(auVar3,param_2[10],auVar15);
    auVar4 = vblendvpd_avx(auVar4,param_2[0xb],auVar15);
    auVar5 = vblendvpd_avx(auVar5,param_2[0xc],auVar15);
    auVar6 = vblendvpd_avx(auVar6,param_2[0xd],auVar15);
    auVar7 = vblendvpd_avx(auVar7,param_2[0xe],auVar15);
    auVar8 = vblendvpd_avx(auVar8,param_2[0xf],auVar15);
    auVar12 = vpaddq_avx2(auVar12,auVar9);
    param_2 = param_2 + 0x10;
  } while (pauVar1 != param_2);
  param_1[8] = auVar11;
  param_1[9] = auVar2;
  param_1[10] = auVar3;
  param_1[0xb] = auVar4;
  param_1[0xc] = auVar5;
  param_1[0xd] = auVar6;
  param_1[0xe] = auVar7;
  param_1[0xf] = auVar8;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint ossl_rsaz_avxifma_eligible(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((_DAT_00102014 & 0x800000) == 0x800000) {
    uVar1 = _DAT_00102014 & 0x800000;
  }
  return uVar1;
}



/* WARNING: Control flow encountered bad instruction data */

void ossl_rsaz_amm52x20_x1_avxifma256(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void ossl_rsaz_amm52x20_x2_avxifma256(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_extract_multiplier_2x20_win5_avx
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
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [64];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  
  pauVar1 = param_2 + 0x140;
  auVar13 = ZEXT1664((undefined1  [16])0x0);
  auVar12 = auVar13._0_32_;
  auVar3 = auVar12;
  auVar4 = auVar12;
  auVar5 = auVar12;
  auVar6 = auVar12;
  auVar7 = auVar12;
  auVar8 = auVar12;
  auVar9 = auVar12;
  auVar10 = auVar12;
  auVar11 = auVar12;
  do {
    auVar14._0_8_ = -(ulong)(param_3 == auVar12._0_8_);
    auVar14._8_8_ = -(ulong)(param_3 == auVar12._8_8_);
    auVar14._16_8_ = -(ulong)(param_3 == auVar12._16_8_);
    auVar14._24_8_ = -(ulong)(param_3 == auVar12._24_8_);
    auVar2 = vblendvpd_avx(auVar13._0_32_,*param_2,auVar14);
    auVar13 = ZEXT3264(auVar2);
    auVar3 = vblendvpd_avx(auVar3,param_2[1],auVar14);
    auVar4 = vblendvpd_avx(auVar4,param_2[2],auVar14);
    auVar5 = vblendvpd_avx(auVar5,param_2[3],auVar14);
    auVar6 = vblendvpd_avx(auVar6,param_2[4],auVar14);
    auVar15._0_8_ = -(ulong)(param_4 == auVar12._0_8_);
    auVar15._8_8_ = -(ulong)(param_4 == auVar12._8_8_);
    auVar15._16_8_ = -(ulong)(param_4 == auVar12._16_8_);
    auVar15._24_8_ = -(ulong)(param_4 == auVar12._24_8_);
    auVar7 = vblendvpd_avx(auVar7,param_2[5],auVar15);
    auVar8 = vblendvpd_avx(auVar8,param_2[6],auVar15);
    auVar9 = vblendvpd_avx(auVar9,param_2[7],auVar15);
    auVar10 = vblendvpd_avx(auVar10,param_2[8],auVar15);
    auVar11 = vblendvpd_avx(auVar11,param_2[9],auVar15);
    auVar12 = vpaddq_avx2(auVar12,_DAT_00101340);
    param_2 = param_2 + 10;
  } while (pauVar1 != param_2);
  *param_1 = auVar2;
  param_1[1] = auVar3;
  param_1[2] = auVar4;
  param_1[3] = auVar5;
  param_1[4] = auVar6;
  param_1[5] = auVar7;
  param_1[6] = auVar8;
  param_1[7] = auVar9;
  param_1[8] = auVar10;
  param_1[9] = auVar11;
  return;
}



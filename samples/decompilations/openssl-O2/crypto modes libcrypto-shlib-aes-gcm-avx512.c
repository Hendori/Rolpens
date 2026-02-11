
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ossl_vaes_vpclmulqdq_capable(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((_DAT_001ab008 & 0x600c0030000) == 0x600c0030000) {
    uVar1 = 0x600c0030000;
  }
  return uVar1;
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00100262) overlaps instruction at (ram,0x00100261)
    */
/* WARNING: Removing unreachable block (ram,0x001002b9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_aes_gcm_init_avx512
               (undefined1 (*param_1) [16],undefined4 *param_2,undefined2 param_3,undefined8 param_4
               )

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar5;
  char *pcVar4;
  char unaff_BH;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  longdouble in_ST0;
  undefined1 in_ZMM0 [64];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar7 = vpxorq_avx512vl(in_ZMM0._0_16_,in_ZMM0._0_16_);
  uVar2 = *(uint *)param_1[0xf];
  pcVar4 = (char *)(ulong)uVar2;
  if (uVar2 == 9) {
    vpxorq_avx512vl(auVar7,*param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar2 == 0xb) {
    vpxorq_avx512vl(auVar7,*param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar2 == 0xd) {
    vpxorq_avx512vl(auVar7,*param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  auVar7 = vpshufb_avx512vl(auVar7,_SHUF_MASK);
  auVar8 = vmovdqa64_avx512vl(auVar7);
  auVar7 = vpsllq_avx512vl(auVar7,1);
  auVar8 = vpsrlq_avx(auVar8,0x3f);
  auVar11 = vpslldq_avx(auVar8,8);
  auVar10 = vpsrldq_avx(auVar8,8);
  auVar8 = vporq_avx512vl(auVar7,auVar11);
  auVar7 = vpshufd_avx(auVar10,0x24);
  auVar7 = vpcmpeqd_avx(auVar7,_TWOONE);
  auVar7 = vpand_avx(auVar7,_POLY);
  auVar8 = vpxorq_avx512vl(auVar8,auVar7);
  auVar7 = vmovdqu64_avx512vl(auVar8);
  *(undefined1 (*) [16])(param_2 + 0x54) = auVar7;
  auVar9 = vshufi32x4_avx512vl(ZEXT1632(auVar8),ZEXT1632(auVar8));
  out(*param_2,param_3);
  if (CONCAT62((int6)((ulong)param_4 >> 0x10),
               CONCAT11((char)((ulong)param_4 >> 8) + (char)uVar2,(char)param_4)) == 0) {
    bVar5 = (byte)(uVar2 >> 8);
    bVar6 = DAT_fffffffff172992e < bVar5;
    DAT_fffffffff172992e = DAT_fffffffff172992e - bVar5;
    cVar1 = *pcVar4;
    *pcVar4 = *pcVar4 + -1;
    if (*pcVar4 == '\0' || SBORROW1(cVar1,'\x01') != *pcVar4 < '\0') {
      pcVar4 = (char *)(ulong)CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + 'b' + bVar6);
      *pcVar4 = *pcVar4 - unaff_BH;
      if (*pcVar4 != '\0') {
        pcVar3 = (code *)swi(1);
        (*pcVar3)();
        return;
      }
      vmovdqa64_avx512vl(auVar9);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(long *)(pcVar4 + -0x11) = (long)in_ST0;
    if (*pcVar4 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar3 = (code *)swi(1);
    (*pcVar3)(param_1,param_2 + -1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00100fbb) */
/* WARNING: Removing unreachable block (ram,0x001009a6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_aes_gcm_setiv_avx512
               (undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [64],
               ulong param_4)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  int iVar4;
  byte bVar5;
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
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  char cVar33;
  ulong in_RAX;
  uint uVar34;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [32];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  undefined1 auVar49 [64];
  undefined1 auVar35 [16];
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  undefined1 auVar55 [64];
  undefined1 auVar57 [64];
  undefined1 in_ZMM1 [64];
  undefined1 auVar58 [64];
  undefined1 auVar59 [64];
  undefined1 auVar60 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar61 [64];
  undefined1 in_ZMM7 [64];
  undefined1 auVar62 [64];
  undefined1 auVar63 [16];
  undefined8 in_register_00001420;
  undefined8 in_register_00001428;
  undefined8 in_register_00001430;
  undefined8 in_register_00001438;
  undefined1 auVar48 [64];
  undefined1 auVar52 [64];
  undefined1 auVar56 [64];
  
  if (param_4 == 0xc) {
    auVar35 = vmovdqu8_avx512vl(_ONEf);
    auVar38 = vmovdqu8_avx512vl(*(undefined1 (*) [16])*param_3);
    auVar38[0xc] = auVar35[0xc];
    auVar38[0xd] = auVar35[0xd];
    auVar38[0xe] = auVar35[0xe];
    auVar38[0xf] = auVar35[0xf];
  }
  else {
    auVar59 = ZEXT1664((undefined1  [16])0x0);
    auVar38 = (undefined1  [16])0x0;
    if (param_4 != 0) {
      auVar41._16_48_ = _UNK_001a9fd0;
      auVar41._0_16_ = _SHUF_MASK;
      auVar41 = vmovdqa64_avx512f(auVar41);
      cVar33 = (char)(in_RAX >> 8);
      if (0x2ff < (long)param_4) {
        auVar59 = vmovdqu64_avx512f(*param_3);
        auVar42 = vmovdqu64_avx512f(param_3[1]);
        auVar43 = vmovdqu64_avx512f(param_3[2]);
        auVar44 = vmovdqu64_avx512f(param_3[3]);
        vpshufb_avx512bw(auVar59,auVar41);
        vpshufb_avx512bw(auVar42,auVar41);
        vpshufb_avx512bw(auVar43,auVar41);
        vpshufb_avx512bw(auVar44,auVar41);
        auVar59 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2 + 0x12));
        vmovdqu64_avx512f(auVar59);
        auVar59 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2 + 0xe));
        vmovdqu64_avx512f(auVar59);
        vshufi64x2_avx512f(auVar59,auVar59);
        param_3[1][0x31] = param_3[1][0x31] + cVar33;
        *(char *)(in_RAX + 0x6f) = *(char *)(in_RAX + 0x6f) + -1;
        auVar59 = vmovdqu64_avx512f(*(undefined1 (*) [64])((in_RAX & 0xffffffff) + 0x60));
        vmovdqu64_avx512f(auVar59);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (0x1ff < (long)param_4) {
        auVar59 = vmovdqu64_avx512f(*param_3);
        auVar42 = vmovdqu64_avx512f(param_3[1]);
        auVar43 = vmovdqu64_avx512f(param_3[2]);
        auVar44 = vmovdqu64_avx512f(param_3[3]);
        vpshufb_avx512bw(auVar59,auVar41);
        vpshufb_avx512bw(auVar42,auVar41);
        vpshufb_avx512bw(auVar43,auVar41);
        vpshufb_avx512bw(auVar44,auVar41);
        auVar59 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2 + 0x12));
        vmovdqu64_avx512f(auVar59);
        auVar59 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2 + 0xe));
        vmovdqu64_avx512f(auVar59);
        vshufi64x2_avx512f(auVar59,auVar59);
        param_3[1][0x31] = param_3[1][0x31] + cVar33;
        *(char *)(in_RAX + 0x6f) = *(char *)(in_RAX + 0x6f) + -1;
        auVar59 = vmovdqu64_avx512f(*(undefined1 (*) [64])((in_RAX & 0xffffffff) + 0x60));
        vmovdqu64_avx512f(auVar59);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (0xff < (long)param_4) {
        auVar42 = vmovdqu64_avx512f(*param_3);
        auVar43 = vmovdqu64_avx512f(param_3[1]);
        auVar44 = vmovdqu64_avx512f(param_3[2]);
        auVar45 = vmovdqu64_avx512f(param_3[3]);
        auVar42 = vpshufb_avx512bw(auVar42,auVar41);
        vpshufb_avx512bw(auVar43,auVar41);
        vpshufb_avx512bw(auVar44,auVar41);
        vpshufb_avx512bw(auVar45,auVar41);
        vpxorq_avx512f(auVar42,auVar59);
        vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2 + 6));
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      lVar1 = param_4 * 8;
      puVar2 = (ulong *)(&byte64_len_to_mask_table + lVar1);
      uVar34 = (int)param_4 + 0xfU >> 4;
      auVar38 = auVar41._0_16_;
      if (1 < uVar34) {
        auVar40 = auVar41._0_32_;
        if (uVar34 == 2) {
          uVar3 = *puVar2;
          auVar43._32_32_ = auVar41._32_32_;
          auVar43._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])*param_3);
          auVar42[1] = ((byte)(uVar3 >> 1) & 1) * SUB321(auVar43._0_32_,1);
          auVar42[0] = ((byte)uVar3 & 1) * SUB321(auVar43._0_32_,0);
          auVar42[2] = ((byte)(uVar3 >> 2) & 1) * SUB321(auVar43._0_32_,2);
          auVar42[3] = ((byte)(uVar3 >> 3) & 1) * SUB321(auVar43._0_32_,3);
          auVar42[4] = ((byte)(uVar3 >> 4) & 1) * SUB321(auVar43._0_32_,4);
          auVar42[5] = ((byte)(uVar3 >> 5) & 1) * SUB321(auVar43._0_32_,5);
          auVar42[6] = ((byte)(uVar3 >> 6) & 1) * SUB321(auVar43._0_32_,6);
          auVar42[7] = ((byte)(uVar3 >> 7) & 1) * SUB321(auVar43._0_32_,7);
          auVar42[8] = ((byte)(uVar3 >> 8) & 1) * SUB321(auVar43._0_32_,8);
          auVar42[9] = ((byte)(uVar3 >> 9) & 1) * SUB321(auVar43._0_32_,9);
          auVar42[10] = ((byte)(uVar3 >> 10) & 1) * SUB321(auVar43._0_32_,10);
          auVar42[0xb] = ((byte)(uVar3 >> 0xb) & 1) * SUB321(auVar43._0_32_,0xb);
          auVar42[0xc] = ((byte)(uVar3 >> 0xc) & 1) * SUB321(auVar43._0_32_,0xc);
          auVar42[0xd] = ((byte)(uVar3 >> 0xd) & 1) * SUB321(auVar43._0_32_,0xd);
          auVar42[0xe] = ((byte)(uVar3 >> 0xe) & 1) * SUB321(auVar43._0_32_,0xe);
          auVar42[0xf] = ((byte)(uVar3 >> 0xf) & 1) * SUB321(auVar43._0_32_,0xf);
          auVar42[0x10] = ((byte)(uVar3 >> 0x10) & 1) * SUB321(auVar43._0_32_,0x10);
          auVar42[0x11] = ((byte)(uVar3 >> 0x11) & 1) * SUB321(auVar43._0_32_,0x11);
          auVar42[0x12] = ((byte)(uVar3 >> 0x12) & 1) * SUB321(auVar43._0_32_,0x12);
          auVar42[0x13] = ((byte)(uVar3 >> 0x13) & 1) * SUB321(auVar43._0_32_,0x13);
          auVar42[0x14] = ((byte)(uVar3 >> 0x14) & 1) * SUB321(auVar43._0_32_,0x14);
          auVar42[0x15] = ((byte)(uVar3 >> 0x15) & 1) * SUB321(auVar43._0_32_,0x15);
          auVar42[0x16] = ((byte)(uVar3 >> 0x16) & 1) * SUB321(auVar43._0_32_,0x16);
          auVar42[0x17] = ((byte)(uVar3 >> 0x17) & 1) * SUB321(auVar43._0_32_,0x17);
          auVar42[0x18] = ((byte)(uVar3 >> 0x18) & 1) * SUB321(auVar43._0_32_,0x18);
          auVar42[0x19] = ((byte)(uVar3 >> 0x19) & 1) * SUB321(auVar43._0_32_,0x19);
          auVar42[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * SUB321(auVar43._0_32_,0x1a);
          auVar42[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * SUB321(auVar43._0_32_,0x1b);
          auVar42[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * SUB321(auVar43._0_32_,0x1c);
          auVar42._30_34_ = auVar43._30_34_;
          auVar42[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * SUB321(auVar43._0_32_,0x1d);
          auVar40 = vpshufb_avx512vl(auVar42._0_32_,auVar40);
          vpxorq_avx512f(ZEXT3264(auVar40),auVar59);
          vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2 + 0x14));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar34 < 4) {
          uVar3 = *puVar2;
          auVar42 = vmovdqu8_avx512bw(*param_3);
          auVar44[1] = ((byte)(uVar3 >> 1) & 1) * auVar42[1];
          auVar44[0] = ((byte)uVar3 & 1) * auVar42[0];
          auVar44[2] = ((byte)(uVar3 >> 2) & 1) * auVar42[2];
          auVar44[3] = ((byte)(uVar3 >> 3) & 1) * auVar42[3];
          auVar44[4] = ((byte)(uVar3 >> 4) & 1) * auVar42[4];
          auVar44[5] = ((byte)(uVar3 >> 5) & 1) * auVar42[5];
          auVar44[6] = ((byte)(uVar3 >> 6) & 1) * auVar42[6];
          auVar44[7] = ((byte)(uVar3 >> 7) & 1) * auVar42[7];
          auVar44[8] = ((byte)(uVar3 >> 8) & 1) * auVar42[8];
          auVar44[9] = ((byte)(uVar3 >> 9) & 1) * auVar42[9];
          auVar44[10] = ((byte)(uVar3 >> 10) & 1) * auVar42[10];
          auVar44[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar42[0xb];
          auVar44[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar42[0xc];
          auVar44[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar42[0xd];
          auVar44[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar42[0xe];
          auVar44[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar42[0xf];
          auVar44[0x10] = ((byte)(uVar3 >> 0x10) & 1) * auVar42[0x10];
          auVar44[0x11] = ((byte)(uVar3 >> 0x11) & 1) * auVar42[0x11];
          auVar44[0x12] = ((byte)(uVar3 >> 0x12) & 1) * auVar42[0x12];
          auVar44[0x13] = ((byte)(uVar3 >> 0x13) & 1) * auVar42[0x13];
          auVar44[0x14] = ((byte)(uVar3 >> 0x14) & 1) * auVar42[0x14];
          auVar44[0x15] = ((byte)(uVar3 >> 0x15) & 1) * auVar42[0x15];
          auVar44[0x16] = ((byte)(uVar3 >> 0x16) & 1) * auVar42[0x16];
          auVar44[0x17] = ((byte)(uVar3 >> 0x17) & 1) * auVar42[0x17];
          auVar44[0x18] = ((byte)(uVar3 >> 0x18) & 1) * auVar42[0x18];
          auVar44[0x19] = ((byte)(uVar3 >> 0x19) & 1) * auVar42[0x19];
          auVar44[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * auVar42[0x1a];
          auVar44[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * auVar42[0x1b];
          auVar44[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * auVar42[0x1c];
          auVar44[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * auVar42[0x1d];
          auVar44[0x1e] = ((byte)(uVar3 >> 0x1e) & 1) * auVar42[0x1e];
          auVar44[0x1f] = ((byte)(uVar3 >> 0x1f) & 1) * auVar42[0x1f];
          auVar44[0x20] = ((byte)(uVar3 >> 0x20) & 1) * auVar42[0x20];
          auVar44[0x21] = ((byte)(uVar3 >> 0x21) & 1) * auVar42[0x21];
          auVar44[0x22] = ((byte)(uVar3 >> 0x22) & 1) * auVar42[0x22];
          auVar44[0x23] = ((byte)(uVar3 >> 0x23) & 1) * auVar42[0x23];
          auVar44[0x24] = ((byte)(uVar3 >> 0x24) & 1) * auVar42[0x24];
          auVar44[0x25] = ((byte)(uVar3 >> 0x25) & 1) * auVar42[0x25];
          auVar44[0x26] = ((byte)(uVar3 >> 0x26) & 1) * auVar42[0x26];
          auVar44[0x27] = ((byte)(uVar3 >> 0x27) & 1) * auVar42[0x27];
          auVar44[0x28] = ((byte)(uVar3 >> 0x28) & 1) * auVar42[0x28];
          auVar44[0x29] = ((byte)(uVar3 >> 0x29) & 1) * auVar42[0x29];
          auVar44[0x2a] = ((byte)(uVar3 >> 0x2a) & 1) * auVar42[0x2a];
          auVar44[0x2b] = ((byte)(uVar3 >> 0x2b) & 1) * auVar42[0x2b];
          auVar44[0x2c] = ((byte)(uVar3 >> 0x2c) & 1) * auVar42[0x2c];
          auVar44[0x2d] = ((byte)(uVar3 >> 0x2d) & 1) * auVar42[0x2d];
          auVar44[0x2e] = ((byte)(uVar3 >> 0x2e) & 1) * auVar42[0x2e];
          auVar44[0x2f] = ((byte)(uVar3 >> 0x2f) & 1) * auVar42[0x2f];
          auVar44[0x30] = ((byte)(uVar3 >> 0x30) & 1) * auVar42[0x30];
          auVar44[0x31] = ((byte)(uVar3 >> 0x31) & 1) * auVar42[0x31];
          auVar44[0x32] = ((byte)(uVar3 >> 0x32) & 1) * auVar42[0x32];
          auVar44[0x33] = ((byte)(uVar3 >> 0x33) & 1) * auVar42[0x33];
          auVar44[0x34] = ((byte)(uVar3 >> 0x34) & 1) * auVar42[0x34];
          auVar44[0x35] = ((byte)(uVar3 >> 0x35) & 1) * auVar42[0x35];
          auVar44[0x36] = ((byte)(uVar3 >> 0x36) & 1) * auVar42[0x36];
          auVar44[0x37] = ((byte)(uVar3 >> 0x37) & 1) * auVar42[0x37];
          bVar5 = (byte)(uVar3 >> 0x38);
          auVar44[0x38] = (bVar5 & 1) * auVar42[0x38];
          auVar44[0x39] = (bVar5 >> 1 & 1) * auVar42[0x39];
          auVar44[0x3a] = (bVar5 >> 2 & 1) * auVar42[0x3a];
          auVar44[0x3b] = (bVar5 >> 3 & 1) * auVar42[0x3b];
          auVar44[0x3c] = (bVar5 >> 4 & 1) * auVar42[0x3c];
          auVar44[0x3d] = (bVar5 >> 5 & 1) * auVar42[0x3d];
          auVar44[0x3e] = (bVar5 >> 6 & 1) * auVar42[0x3e];
          auVar44[0x3f] = -((char)bVar5 >> 7) * auVar42[0x3f];
          auVar41 = vpshufb_avx512bw(auVar44,auVar41);
          vpxorq_avx512f(auVar41,auVar59);
          auVar40 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2 + 0x13));
          vinserti64x2_avx512dq(ZEXT3264(auVar40),param_2[0x15],2);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar34 == 4) {
          uVar3 = *puVar2;
          auVar42 = vmovdqu8_avx512bw(*param_3);
          auVar45[1] = ((byte)(uVar3 >> 1) & 1) * auVar42[1];
          auVar45[0] = ((byte)uVar3 & 1) * auVar42[0];
          auVar45[2] = ((byte)(uVar3 >> 2) & 1) * auVar42[2];
          auVar45[3] = ((byte)(uVar3 >> 3) & 1) * auVar42[3];
          auVar45[4] = ((byte)(uVar3 >> 4) & 1) * auVar42[4];
          auVar45[5] = ((byte)(uVar3 >> 5) & 1) * auVar42[5];
          auVar45[6] = ((byte)(uVar3 >> 6) & 1) * auVar42[6];
          auVar45[7] = ((byte)(uVar3 >> 7) & 1) * auVar42[7];
          auVar45[8] = ((byte)(uVar3 >> 8) & 1) * auVar42[8];
          auVar45[9] = ((byte)(uVar3 >> 9) & 1) * auVar42[9];
          auVar45[10] = ((byte)(uVar3 >> 10) & 1) * auVar42[10];
          auVar45[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar42[0xb];
          auVar45[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar42[0xc];
          auVar45[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar42[0xd];
          auVar45[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar42[0xe];
          auVar45[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar42[0xf];
          auVar45[0x10] = ((byte)(uVar3 >> 0x10) & 1) * auVar42[0x10];
          auVar45[0x11] = ((byte)(uVar3 >> 0x11) & 1) * auVar42[0x11];
          auVar45[0x12] = ((byte)(uVar3 >> 0x12) & 1) * auVar42[0x12];
          auVar45[0x13] = ((byte)(uVar3 >> 0x13) & 1) * auVar42[0x13];
          auVar45[0x14] = ((byte)(uVar3 >> 0x14) & 1) * auVar42[0x14];
          auVar45[0x15] = ((byte)(uVar3 >> 0x15) & 1) * auVar42[0x15];
          auVar45[0x16] = ((byte)(uVar3 >> 0x16) & 1) * auVar42[0x16];
          auVar45[0x17] = ((byte)(uVar3 >> 0x17) & 1) * auVar42[0x17];
          auVar45[0x18] = ((byte)(uVar3 >> 0x18) & 1) * auVar42[0x18];
          auVar45[0x19] = ((byte)(uVar3 >> 0x19) & 1) * auVar42[0x19];
          auVar45[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * auVar42[0x1a];
          auVar45[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * auVar42[0x1b];
          auVar45[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * auVar42[0x1c];
          auVar45[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * auVar42[0x1d];
          auVar45[0x1e] = ((byte)(uVar3 >> 0x1e) & 1) * auVar42[0x1e];
          auVar45[0x1f] = ((byte)(uVar3 >> 0x1f) & 1) * auVar42[0x1f];
          auVar45[0x20] = ((byte)(uVar3 >> 0x20) & 1) * auVar42[0x20];
          auVar45[0x21] = ((byte)(uVar3 >> 0x21) & 1) * auVar42[0x21];
          auVar45[0x22] = ((byte)(uVar3 >> 0x22) & 1) * auVar42[0x22];
          auVar45[0x23] = ((byte)(uVar3 >> 0x23) & 1) * auVar42[0x23];
          auVar45[0x24] = ((byte)(uVar3 >> 0x24) & 1) * auVar42[0x24];
          auVar45[0x25] = ((byte)(uVar3 >> 0x25) & 1) * auVar42[0x25];
          auVar45[0x26] = ((byte)(uVar3 >> 0x26) & 1) * auVar42[0x26];
          auVar45[0x27] = ((byte)(uVar3 >> 0x27) & 1) * auVar42[0x27];
          auVar45[0x28] = ((byte)(uVar3 >> 0x28) & 1) * auVar42[0x28];
          auVar45[0x29] = ((byte)(uVar3 >> 0x29) & 1) * auVar42[0x29];
          auVar45[0x2a] = ((byte)(uVar3 >> 0x2a) & 1) * auVar42[0x2a];
          auVar45[0x2b] = ((byte)(uVar3 >> 0x2b) & 1) * auVar42[0x2b];
          auVar45[0x2c] = ((byte)(uVar3 >> 0x2c) & 1) * auVar42[0x2c];
          auVar45[0x2d] = ((byte)(uVar3 >> 0x2d) & 1) * auVar42[0x2d];
          auVar45[0x2e] = ((byte)(uVar3 >> 0x2e) & 1) * auVar42[0x2e];
          auVar45[0x2f] = ((byte)(uVar3 >> 0x2f) & 1) * auVar42[0x2f];
          auVar45[0x30] = ((byte)(uVar3 >> 0x30) & 1) * auVar42[0x30];
          auVar45[0x31] = ((byte)(uVar3 >> 0x31) & 1) * auVar42[0x31];
          auVar45[0x32] = ((byte)(uVar3 >> 0x32) & 1) * auVar42[0x32];
          auVar45[0x33] = ((byte)(uVar3 >> 0x33) & 1) * auVar42[0x33];
          auVar45[0x34] = ((byte)(uVar3 >> 0x34) & 1) * auVar42[0x34];
          auVar45[0x35] = ((byte)(uVar3 >> 0x35) & 1) * auVar42[0x35];
          auVar45[0x36] = ((byte)(uVar3 >> 0x36) & 1) * auVar42[0x36];
          auVar45[0x37] = ((byte)(uVar3 >> 0x37) & 1) * auVar42[0x37];
          bVar5 = (byte)(uVar3 >> 0x38);
          auVar45[0x38] = (bVar5 & 1) * auVar42[0x38];
          auVar45[0x39] = (bVar5 >> 1 & 1) * auVar42[0x39];
          auVar45[0x3a] = (bVar5 >> 2 & 1) * auVar42[0x3a];
          auVar45[0x3b] = (bVar5 >> 3 & 1) * auVar42[0x3b];
          auVar45[0x3c] = (bVar5 >> 4 & 1) * auVar42[0x3c];
          auVar45[0x3d] = (bVar5 >> 5 & 1) * auVar42[0x3d];
          auVar45[0x3e] = (bVar5 >> 6 & 1) * auVar42[0x3e];
          auVar45[0x3f] = -((char)bVar5 >> 7) * auVar42[0x3f];
          auVar41 = vpshufb_avx512bw(auVar45,auVar41);
          vpxorq_avx512f(auVar41,auVar59);
          vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2 + 0x12));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar34 < 6) {
          uVar3 = *(ulong *)(&ONEf + lVar1);
          auVar42 = vmovdqu8_avx512bw(*param_3);
          auVar36 = vmovdqu8_avx512vl(*(undefined1 (*) [16])param_3[1]);
          auVar35[1] = ((byte)(uVar3 >> 1) & 1) * auVar36[1];
          auVar35[0] = ((byte)uVar3 & 1) * auVar36[0];
          auVar35[2] = ((byte)(uVar3 >> 2) & 1) * auVar36[2];
          auVar35[3] = ((byte)(uVar3 >> 3) & 1) * auVar36[3];
          auVar35[4] = ((byte)(uVar3 >> 4) & 1) * auVar36[4];
          auVar35[5] = ((byte)(uVar3 >> 5) & 1) * auVar36[5];
          auVar35[6] = ((byte)(uVar3 >> 6) & 1) * auVar36[6];
          auVar35[7] = ((byte)(uVar3 >> 7) & 1) * auVar36[7];
          auVar35[8] = ((byte)(uVar3 >> 8) & 1) * auVar36[8];
          auVar35[9] = ((byte)(uVar3 >> 9) & 1) * auVar36[9];
          auVar35[10] = ((byte)(uVar3 >> 10) & 1) * auVar36[10];
          auVar35[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar36[0xb];
          auVar35[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar36[0xc];
          auVar35[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar36[0xd];
          auVar35[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar36[0xe];
          auVar35[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar36[0xf];
          auVar41 = vpshufb_avx512bw(auVar42,auVar41);
          vpshufb_avx512vl(auVar35,auVar38);
          vpxorq_avx512f(auVar41,auVar59);
          vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2 + 0x11));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar34 == 6) {
          uVar3 = *(ulong *)(&ONEf + lVar1);
          auVar42 = vmovdqu8_avx512bw(*param_3);
          auVar56._32_32_ = auVar42._32_32_;
          auVar56._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])param_3[1]);
          auVar57[1] = ((byte)(uVar3 >> 1) & 1) * SUB321(auVar56._0_32_,1);
          auVar57[0] = ((byte)uVar3 & 1) * SUB321(auVar56._0_32_,0);
          auVar57[2] = ((byte)(uVar3 >> 2) & 1) * SUB321(auVar56._0_32_,2);
          auVar57[3] = ((byte)(uVar3 >> 3) & 1) * SUB321(auVar56._0_32_,3);
          auVar57[4] = ((byte)(uVar3 >> 4) & 1) * SUB321(auVar56._0_32_,4);
          auVar57[5] = ((byte)(uVar3 >> 5) & 1) * SUB321(auVar56._0_32_,5);
          auVar57[6] = ((byte)(uVar3 >> 6) & 1) * SUB321(auVar56._0_32_,6);
          auVar57[7] = ((byte)(uVar3 >> 7) & 1) * SUB321(auVar56._0_32_,7);
          auVar57[8] = ((byte)(uVar3 >> 8) & 1) * SUB321(auVar56._0_32_,8);
          auVar57[9] = ((byte)(uVar3 >> 9) & 1) * SUB321(auVar56._0_32_,9);
          auVar57[10] = ((byte)(uVar3 >> 10) & 1) * SUB321(auVar56._0_32_,10);
          auVar57[0xb] = ((byte)(uVar3 >> 0xb) & 1) * SUB321(auVar56._0_32_,0xb);
          auVar57[0xc] = ((byte)(uVar3 >> 0xc) & 1) * SUB321(auVar56._0_32_,0xc);
          auVar57[0xd] = ((byte)(uVar3 >> 0xd) & 1) * SUB321(auVar56._0_32_,0xd);
          auVar57[0xe] = ((byte)(uVar3 >> 0xe) & 1) * SUB321(auVar56._0_32_,0xe);
          auVar57[0xf] = ((byte)(uVar3 >> 0xf) & 1) * SUB321(auVar56._0_32_,0xf);
          auVar57[0x10] = ((byte)(uVar3 >> 0x10) & 1) * SUB321(auVar56._0_32_,0x10);
          auVar57[0x11] = ((byte)(uVar3 >> 0x11) & 1) * SUB321(auVar56._0_32_,0x11);
          auVar57[0x12] = ((byte)(uVar3 >> 0x12) & 1) * SUB321(auVar56._0_32_,0x12);
          auVar57[0x13] = ((byte)(uVar3 >> 0x13) & 1) * SUB321(auVar56._0_32_,0x13);
          auVar57[0x14] = ((byte)(uVar3 >> 0x14) & 1) * SUB321(auVar56._0_32_,0x14);
          auVar57[0x15] = ((byte)(uVar3 >> 0x15) & 1) * SUB321(auVar56._0_32_,0x15);
          auVar57[0x16] = ((byte)(uVar3 >> 0x16) & 1) * SUB321(auVar56._0_32_,0x16);
          auVar57[0x17] = ((byte)(uVar3 >> 0x17) & 1) * SUB321(auVar56._0_32_,0x17);
          auVar57[0x18] = ((byte)(uVar3 >> 0x18) & 1) * SUB321(auVar56._0_32_,0x18);
          auVar57[0x19] = ((byte)(uVar3 >> 0x19) & 1) * SUB321(auVar56._0_32_,0x19);
          auVar57[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * SUB321(auVar56._0_32_,0x1a);
          auVar57[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * SUB321(auVar56._0_32_,0x1b);
          auVar57[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * SUB321(auVar56._0_32_,0x1c);
          auVar57._30_34_ = auVar56._30_34_;
          auVar57[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * SUB321(auVar56._0_32_,0x1d);
          auVar41 = vpshufb_avx512bw(auVar42,auVar41);
          vpshufb_avx512vl(auVar57._0_32_,auVar40);
          vpxorq_avx512f(auVar41,auVar59);
          vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2 + 0x10));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar34 < 8) {
          uVar3 = *(ulong *)(&ONEf + lVar1);
          auVar42 = vmovdqu8_avx512bw(*param_3);
          auVar43 = vmovdqu8_avx512bw(param_3[1]);
          auVar55[1] = ((byte)(uVar3 >> 1) & 1) * auVar43[1];
          auVar55[0] = ((byte)uVar3 & 1) * auVar43[0];
          auVar55[2] = ((byte)(uVar3 >> 2) & 1) * auVar43[2];
          auVar55[3] = ((byte)(uVar3 >> 3) & 1) * auVar43[3];
          auVar55[4] = ((byte)(uVar3 >> 4) & 1) * auVar43[4];
          auVar55[5] = ((byte)(uVar3 >> 5) & 1) * auVar43[5];
          auVar55[6] = ((byte)(uVar3 >> 6) & 1) * auVar43[6];
          auVar55[7] = ((byte)(uVar3 >> 7) & 1) * auVar43[7];
          auVar55[8] = ((byte)(uVar3 >> 8) & 1) * auVar43[8];
          auVar55[9] = ((byte)(uVar3 >> 9) & 1) * auVar43[9];
          auVar55[10] = ((byte)(uVar3 >> 10) & 1) * auVar43[10];
          auVar55[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar43[0xb];
          auVar55[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar43[0xc];
          auVar55[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar43[0xd];
          auVar55[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar43[0xe];
          auVar55[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar43[0xf];
          auVar55[0x10] = ((byte)(uVar3 >> 0x10) & 1) * auVar43[0x10];
          auVar55[0x11] = ((byte)(uVar3 >> 0x11) & 1) * auVar43[0x11];
          auVar55[0x12] = ((byte)(uVar3 >> 0x12) & 1) * auVar43[0x12];
          auVar55[0x13] = ((byte)(uVar3 >> 0x13) & 1) * auVar43[0x13];
          auVar55[0x14] = ((byte)(uVar3 >> 0x14) & 1) * auVar43[0x14];
          auVar55[0x15] = ((byte)(uVar3 >> 0x15) & 1) * auVar43[0x15];
          auVar55[0x16] = ((byte)(uVar3 >> 0x16) & 1) * auVar43[0x16];
          auVar55[0x17] = ((byte)(uVar3 >> 0x17) & 1) * auVar43[0x17];
          auVar55[0x18] = ((byte)(uVar3 >> 0x18) & 1) * auVar43[0x18];
          auVar55[0x19] = ((byte)(uVar3 >> 0x19) & 1) * auVar43[0x19];
          auVar55[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * auVar43[0x1a];
          auVar55[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * auVar43[0x1b];
          auVar55[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * auVar43[0x1c];
          auVar55[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * auVar43[0x1d];
          auVar55[0x1e] = ((byte)(uVar3 >> 0x1e) & 1) * auVar43[0x1e];
          auVar55[0x1f] = ((byte)(uVar3 >> 0x1f) & 1) * auVar43[0x1f];
          auVar55[0x20] = ((byte)(uVar3 >> 0x20) & 1) * auVar43[0x20];
          auVar55[0x21] = ((byte)(uVar3 >> 0x21) & 1) * auVar43[0x21];
          auVar55[0x22] = ((byte)(uVar3 >> 0x22) & 1) * auVar43[0x22];
          auVar55[0x23] = ((byte)(uVar3 >> 0x23) & 1) * auVar43[0x23];
          auVar55[0x24] = ((byte)(uVar3 >> 0x24) & 1) * auVar43[0x24];
          auVar55[0x25] = ((byte)(uVar3 >> 0x25) & 1) * auVar43[0x25];
          auVar55[0x26] = ((byte)(uVar3 >> 0x26) & 1) * auVar43[0x26];
          auVar55[0x27] = ((byte)(uVar3 >> 0x27) & 1) * auVar43[0x27];
          auVar55[0x28] = ((byte)(uVar3 >> 0x28) & 1) * auVar43[0x28];
          auVar55[0x29] = ((byte)(uVar3 >> 0x29) & 1) * auVar43[0x29];
          auVar55[0x2a] = ((byte)(uVar3 >> 0x2a) & 1) * auVar43[0x2a];
          auVar55[0x2b] = ((byte)(uVar3 >> 0x2b) & 1) * auVar43[0x2b];
          auVar55[0x2c] = ((byte)(uVar3 >> 0x2c) & 1) * auVar43[0x2c];
          auVar55[0x2d] = ((byte)(uVar3 >> 0x2d) & 1) * auVar43[0x2d];
          auVar55[0x2e] = ((byte)(uVar3 >> 0x2e) & 1) * auVar43[0x2e];
          auVar55[0x2f] = ((byte)(uVar3 >> 0x2f) & 1) * auVar43[0x2f];
          auVar55[0x30] = ((byte)(uVar3 >> 0x30) & 1) * auVar43[0x30];
          auVar55[0x31] = ((byte)(uVar3 >> 0x31) & 1) * auVar43[0x31];
          auVar55[0x32] = ((byte)(uVar3 >> 0x32) & 1) * auVar43[0x32];
          auVar55[0x33] = ((byte)(uVar3 >> 0x33) & 1) * auVar43[0x33];
          auVar55[0x34] = ((byte)(uVar3 >> 0x34) & 1) * auVar43[0x34];
          auVar55[0x35] = ((byte)(uVar3 >> 0x35) & 1) * auVar43[0x35];
          auVar55[0x36] = ((byte)(uVar3 >> 0x36) & 1) * auVar43[0x36];
          auVar55[0x37] = ((byte)(uVar3 >> 0x37) & 1) * auVar43[0x37];
          bVar5 = (byte)(uVar3 >> 0x38);
          auVar55[0x38] = (bVar5 & 1) * auVar43[0x38];
          auVar55[0x39] = (bVar5 >> 1 & 1) * auVar43[0x39];
          auVar55[0x3a] = (bVar5 >> 2 & 1) * auVar43[0x3a];
          auVar55[0x3b] = (bVar5 >> 3 & 1) * auVar43[0x3b];
          auVar55[0x3c] = (bVar5 >> 4 & 1) * auVar43[0x3c];
          auVar55[0x3d] = (bVar5 >> 5 & 1) * auVar43[0x3d];
          auVar55[0x3e] = (bVar5 >> 6 & 1) * auVar43[0x3e];
          auVar55[0x3f] = -((char)bVar5 >> 7) * auVar43[0x3f];
          auVar42 = vpshufb_avx512bw(auVar42,auVar41);
          vpshufb_avx512bw(auVar55,auVar41);
          vpxorq_avx512f(auVar42,auVar59);
          vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2 + 0xf));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar34 == 8) {
          uVar3 = *(ulong *)(&ONEf + lVar1);
          auVar42 = vmovdqu8_avx512bw(*param_3);
          auVar43 = vmovdqu8_avx512bw(param_3[1]);
          auVar54[1] = ((byte)(uVar3 >> 1) & 1) * auVar43[1];
          auVar54[0] = ((byte)uVar3 & 1) * auVar43[0];
          auVar54[2] = ((byte)(uVar3 >> 2) & 1) * auVar43[2];
          auVar54[3] = ((byte)(uVar3 >> 3) & 1) * auVar43[3];
          auVar54[4] = ((byte)(uVar3 >> 4) & 1) * auVar43[4];
          auVar54[5] = ((byte)(uVar3 >> 5) & 1) * auVar43[5];
          auVar54[6] = ((byte)(uVar3 >> 6) & 1) * auVar43[6];
          auVar54[7] = ((byte)(uVar3 >> 7) & 1) * auVar43[7];
          auVar54[8] = ((byte)(uVar3 >> 8) & 1) * auVar43[8];
          auVar54[9] = ((byte)(uVar3 >> 9) & 1) * auVar43[9];
          auVar54[10] = ((byte)(uVar3 >> 10) & 1) * auVar43[10];
          auVar54[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar43[0xb];
          auVar54[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar43[0xc];
          auVar54[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar43[0xd];
          auVar54[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar43[0xe];
          auVar54[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar43[0xf];
          auVar54[0x10] = ((byte)(uVar3 >> 0x10) & 1) * auVar43[0x10];
          auVar54[0x11] = ((byte)(uVar3 >> 0x11) & 1) * auVar43[0x11];
          auVar54[0x12] = ((byte)(uVar3 >> 0x12) & 1) * auVar43[0x12];
          auVar54[0x13] = ((byte)(uVar3 >> 0x13) & 1) * auVar43[0x13];
          auVar54[0x14] = ((byte)(uVar3 >> 0x14) & 1) * auVar43[0x14];
          auVar54[0x15] = ((byte)(uVar3 >> 0x15) & 1) * auVar43[0x15];
          auVar54[0x16] = ((byte)(uVar3 >> 0x16) & 1) * auVar43[0x16];
          auVar54[0x17] = ((byte)(uVar3 >> 0x17) & 1) * auVar43[0x17];
          auVar54[0x18] = ((byte)(uVar3 >> 0x18) & 1) * auVar43[0x18];
          auVar54[0x19] = ((byte)(uVar3 >> 0x19) & 1) * auVar43[0x19];
          auVar54[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * auVar43[0x1a];
          auVar54[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * auVar43[0x1b];
          auVar54[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * auVar43[0x1c];
          auVar54[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * auVar43[0x1d];
          auVar54[0x1e] = ((byte)(uVar3 >> 0x1e) & 1) * auVar43[0x1e];
          auVar54[0x1f] = ((byte)(uVar3 >> 0x1f) & 1) * auVar43[0x1f];
          auVar54[0x20] = ((byte)(uVar3 >> 0x20) & 1) * auVar43[0x20];
          auVar54[0x21] = ((byte)(uVar3 >> 0x21) & 1) * auVar43[0x21];
          auVar54[0x22] = ((byte)(uVar3 >> 0x22) & 1) * auVar43[0x22];
          auVar54[0x23] = ((byte)(uVar3 >> 0x23) & 1) * auVar43[0x23];
          auVar54[0x24] = ((byte)(uVar3 >> 0x24) & 1) * auVar43[0x24];
          auVar54[0x25] = ((byte)(uVar3 >> 0x25) & 1) * auVar43[0x25];
          auVar54[0x26] = ((byte)(uVar3 >> 0x26) & 1) * auVar43[0x26];
          auVar54[0x27] = ((byte)(uVar3 >> 0x27) & 1) * auVar43[0x27];
          auVar54[0x28] = ((byte)(uVar3 >> 0x28) & 1) * auVar43[0x28];
          auVar54[0x29] = ((byte)(uVar3 >> 0x29) & 1) * auVar43[0x29];
          auVar54[0x2a] = ((byte)(uVar3 >> 0x2a) & 1) * auVar43[0x2a];
          auVar54[0x2b] = ((byte)(uVar3 >> 0x2b) & 1) * auVar43[0x2b];
          auVar54[0x2c] = ((byte)(uVar3 >> 0x2c) & 1) * auVar43[0x2c];
          auVar54[0x2d] = ((byte)(uVar3 >> 0x2d) & 1) * auVar43[0x2d];
          auVar54[0x2e] = ((byte)(uVar3 >> 0x2e) & 1) * auVar43[0x2e];
          auVar54[0x2f] = ((byte)(uVar3 >> 0x2f) & 1) * auVar43[0x2f];
          auVar54[0x30] = ((byte)(uVar3 >> 0x30) & 1) * auVar43[0x30];
          auVar54[0x31] = ((byte)(uVar3 >> 0x31) & 1) * auVar43[0x31];
          auVar54[0x32] = ((byte)(uVar3 >> 0x32) & 1) * auVar43[0x32];
          auVar54[0x33] = ((byte)(uVar3 >> 0x33) & 1) * auVar43[0x33];
          auVar54[0x34] = ((byte)(uVar3 >> 0x34) & 1) * auVar43[0x34];
          auVar54[0x35] = ((byte)(uVar3 >> 0x35) & 1) * auVar43[0x35];
          auVar54[0x36] = ((byte)(uVar3 >> 0x36) & 1) * auVar43[0x36];
          auVar54[0x37] = ((byte)(uVar3 >> 0x37) & 1) * auVar43[0x37];
          bVar5 = (byte)(uVar3 >> 0x38);
          auVar54[0x38] = (bVar5 & 1) * auVar43[0x38];
          auVar54[0x39] = (bVar5 >> 1 & 1) * auVar43[0x39];
          auVar54[0x3a] = (bVar5 >> 2 & 1) * auVar43[0x3a];
          auVar54[0x3b] = (bVar5 >> 3 & 1) * auVar43[0x3b];
          auVar54[0x3c] = (bVar5 >> 4 & 1) * auVar43[0x3c];
          auVar54[0x3d] = (bVar5 >> 5 & 1) * auVar43[0x3d];
          auVar54[0x3e] = (bVar5 >> 6 & 1) * auVar43[0x3e];
          auVar54[0x3f] = -((char)bVar5 >> 7) * auVar43[0x3f];
          auVar42 = vpshufb_avx512bw(auVar42,auVar41);
          vpshufb_avx512bw(auVar54,auVar41);
          vpxorq_avx512f(auVar42,auVar59);
          vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2 + 0xe));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar34 < 10) {
          uVar3 = *(ulong *)(&DAT_001a9e40 + lVar1);
          auVar42 = vmovdqu8_avx512bw(*param_3);
          auVar43 = vmovdqu8_avx512bw(param_3[1]);
          auVar35 = vmovdqu8_avx512vl(*(undefined1 (*) [16])param_3[2]);
          auVar39[1] = ((byte)(uVar3 >> 1) & 1) * auVar35[1];
          auVar39[0] = ((byte)uVar3 & 1) * auVar35[0];
          auVar39[2] = ((byte)(uVar3 >> 2) & 1) * auVar35[2];
          auVar39[3] = ((byte)(uVar3 >> 3) & 1) * auVar35[3];
          auVar39[4] = ((byte)(uVar3 >> 4) & 1) * auVar35[4];
          auVar39[5] = ((byte)(uVar3 >> 5) & 1) * auVar35[5];
          auVar39[6] = ((byte)(uVar3 >> 6) & 1) * auVar35[6];
          auVar39[7] = ((byte)(uVar3 >> 7) & 1) * auVar35[7];
          auVar39[8] = ((byte)(uVar3 >> 8) & 1) * auVar35[8];
          auVar39[9] = ((byte)(uVar3 >> 9) & 1) * auVar35[9];
          auVar39[10] = ((byte)(uVar3 >> 10) & 1) * auVar35[10];
          auVar39[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar35[0xb];
          auVar39[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar35[0xc];
          auVar39[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar35[0xd];
          auVar39[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar35[0xe];
          auVar39[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar35[0xf];
          auVar42 = vpshufb_avx512bw(auVar42,auVar41);
          vpshufb_avx512bw(auVar43,auVar41);
          vpshufb_avx512vl(auVar39,auVar38);
          vpxorq_avx512f(auVar42,auVar59);
          vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2 + 0xd));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar34 == 10) {
          uVar3 = *(ulong *)(&DAT_001a9e40 + lVar1);
          auVar42 = vmovdqu8_avx512bw(*param_3);
          auVar43 = vmovdqu8_avx512bw(param_3[1]);
          auVar52._32_32_ = auVar43._32_32_;
          auVar52._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])param_3[2]);
          auVar53[1] = ((byte)(uVar3 >> 1) & 1) * SUB321(auVar52._0_32_,1);
          auVar53[0] = ((byte)uVar3 & 1) * SUB321(auVar52._0_32_,0);
          auVar53[2] = ((byte)(uVar3 >> 2) & 1) * SUB321(auVar52._0_32_,2);
          auVar53[3] = ((byte)(uVar3 >> 3) & 1) * SUB321(auVar52._0_32_,3);
          auVar53[4] = ((byte)(uVar3 >> 4) & 1) * SUB321(auVar52._0_32_,4);
          auVar53[5] = ((byte)(uVar3 >> 5) & 1) * SUB321(auVar52._0_32_,5);
          auVar53[6] = ((byte)(uVar3 >> 6) & 1) * SUB321(auVar52._0_32_,6);
          auVar53[7] = ((byte)(uVar3 >> 7) & 1) * SUB321(auVar52._0_32_,7);
          auVar53[8] = ((byte)(uVar3 >> 8) & 1) * SUB321(auVar52._0_32_,8);
          auVar53[9] = ((byte)(uVar3 >> 9) & 1) * SUB321(auVar52._0_32_,9);
          auVar53[10] = ((byte)(uVar3 >> 10) & 1) * SUB321(auVar52._0_32_,10);
          auVar53[0xb] = ((byte)(uVar3 >> 0xb) & 1) * SUB321(auVar52._0_32_,0xb);
          auVar53[0xc] = ((byte)(uVar3 >> 0xc) & 1) * SUB321(auVar52._0_32_,0xc);
          auVar53[0xd] = ((byte)(uVar3 >> 0xd) & 1) * SUB321(auVar52._0_32_,0xd);
          auVar53[0xe] = ((byte)(uVar3 >> 0xe) & 1) * SUB321(auVar52._0_32_,0xe);
          auVar53[0xf] = ((byte)(uVar3 >> 0xf) & 1) * SUB321(auVar52._0_32_,0xf);
          auVar53[0x10] = ((byte)(uVar3 >> 0x10) & 1) * SUB321(auVar52._0_32_,0x10);
          auVar53[0x11] = ((byte)(uVar3 >> 0x11) & 1) * SUB321(auVar52._0_32_,0x11);
          auVar53[0x12] = ((byte)(uVar3 >> 0x12) & 1) * SUB321(auVar52._0_32_,0x12);
          auVar53[0x13] = ((byte)(uVar3 >> 0x13) & 1) * SUB321(auVar52._0_32_,0x13);
          auVar53[0x14] = ((byte)(uVar3 >> 0x14) & 1) * SUB321(auVar52._0_32_,0x14);
          auVar53[0x15] = ((byte)(uVar3 >> 0x15) & 1) * SUB321(auVar52._0_32_,0x15);
          auVar53[0x16] = ((byte)(uVar3 >> 0x16) & 1) * SUB321(auVar52._0_32_,0x16);
          auVar53[0x17] = ((byte)(uVar3 >> 0x17) & 1) * SUB321(auVar52._0_32_,0x17);
          auVar53[0x18] = ((byte)(uVar3 >> 0x18) & 1) * SUB321(auVar52._0_32_,0x18);
          auVar53[0x19] = ((byte)(uVar3 >> 0x19) & 1) * SUB321(auVar52._0_32_,0x19);
          auVar53[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * SUB321(auVar52._0_32_,0x1a);
          auVar53[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * SUB321(auVar52._0_32_,0x1b);
          auVar53[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * SUB321(auVar52._0_32_,0x1c);
          auVar53._30_34_ = auVar52._30_34_;
          auVar53[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * SUB321(auVar52._0_32_,0x1d);
          auVar42 = vpshufb_avx512bw(auVar42,auVar41);
          vpshufb_avx512bw(auVar43,auVar41);
          vpshufb_avx512vl(auVar53._0_32_,auVar40);
          vpxorq_avx512f(auVar42,auVar59);
          vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar34 < 0xc) {
          uVar3 = *(ulong *)(&DAT_001a9e40 + lVar1);
          auVar42 = vmovdqu8_avx512bw(*param_3);
          auVar43 = vmovdqu8_avx512bw(param_3[1]);
          auVar44 = vmovdqu8_avx512bw(param_3[2]);
          auVar51[1] = ((byte)(uVar3 >> 1) & 1) * auVar44[1];
          auVar51[0] = ((byte)uVar3 & 1) * auVar44[0];
          auVar51[2] = ((byte)(uVar3 >> 2) & 1) * auVar44[2];
          auVar51[3] = ((byte)(uVar3 >> 3) & 1) * auVar44[3];
          auVar51[4] = ((byte)(uVar3 >> 4) & 1) * auVar44[4];
          auVar51[5] = ((byte)(uVar3 >> 5) & 1) * auVar44[5];
          auVar51[6] = ((byte)(uVar3 >> 6) & 1) * auVar44[6];
          auVar51[7] = ((byte)(uVar3 >> 7) & 1) * auVar44[7];
          auVar51[8] = ((byte)(uVar3 >> 8) & 1) * auVar44[8];
          auVar51[9] = ((byte)(uVar3 >> 9) & 1) * auVar44[9];
          auVar51[10] = ((byte)(uVar3 >> 10) & 1) * auVar44[10];
          auVar51[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar44[0xb];
          auVar51[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar44[0xc];
          auVar51[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar44[0xd];
          auVar51[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar44[0xe];
          auVar51[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar44[0xf];
          auVar51[0x10] = ((byte)(uVar3 >> 0x10) & 1) * auVar44[0x10];
          auVar51[0x11] = ((byte)(uVar3 >> 0x11) & 1) * auVar44[0x11];
          auVar51[0x12] = ((byte)(uVar3 >> 0x12) & 1) * auVar44[0x12];
          auVar51[0x13] = ((byte)(uVar3 >> 0x13) & 1) * auVar44[0x13];
          auVar51[0x14] = ((byte)(uVar3 >> 0x14) & 1) * auVar44[0x14];
          auVar51[0x15] = ((byte)(uVar3 >> 0x15) & 1) * auVar44[0x15];
          auVar51[0x16] = ((byte)(uVar3 >> 0x16) & 1) * auVar44[0x16];
          auVar51[0x17] = ((byte)(uVar3 >> 0x17) & 1) * auVar44[0x17];
          auVar51[0x18] = ((byte)(uVar3 >> 0x18) & 1) * auVar44[0x18];
          auVar51[0x19] = ((byte)(uVar3 >> 0x19) & 1) * auVar44[0x19];
          auVar51[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * auVar44[0x1a];
          auVar51[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * auVar44[0x1b];
          auVar51[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * auVar44[0x1c];
          auVar51[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * auVar44[0x1d];
          auVar51[0x1e] = ((byte)(uVar3 >> 0x1e) & 1) * auVar44[0x1e];
          auVar51[0x1f] = ((byte)(uVar3 >> 0x1f) & 1) * auVar44[0x1f];
          auVar51[0x20] = ((byte)(uVar3 >> 0x20) & 1) * auVar44[0x20];
          auVar51[0x21] = ((byte)(uVar3 >> 0x21) & 1) * auVar44[0x21];
          auVar51[0x22] = ((byte)(uVar3 >> 0x22) & 1) * auVar44[0x22];
          auVar51[0x23] = ((byte)(uVar3 >> 0x23) & 1) * auVar44[0x23];
          auVar51[0x24] = ((byte)(uVar3 >> 0x24) & 1) * auVar44[0x24];
          auVar51[0x25] = ((byte)(uVar3 >> 0x25) & 1) * auVar44[0x25];
          auVar51[0x26] = ((byte)(uVar3 >> 0x26) & 1) * auVar44[0x26];
          auVar51[0x27] = ((byte)(uVar3 >> 0x27) & 1) * auVar44[0x27];
          auVar51[0x28] = ((byte)(uVar3 >> 0x28) & 1) * auVar44[0x28];
          auVar51[0x29] = ((byte)(uVar3 >> 0x29) & 1) * auVar44[0x29];
          auVar51[0x2a] = ((byte)(uVar3 >> 0x2a) & 1) * auVar44[0x2a];
          auVar51[0x2b] = ((byte)(uVar3 >> 0x2b) & 1) * auVar44[0x2b];
          auVar51[0x2c] = ((byte)(uVar3 >> 0x2c) & 1) * auVar44[0x2c];
          auVar51[0x2d] = ((byte)(uVar3 >> 0x2d) & 1) * auVar44[0x2d];
          auVar51[0x2e] = ((byte)(uVar3 >> 0x2e) & 1) * auVar44[0x2e];
          auVar51[0x2f] = ((byte)(uVar3 >> 0x2f) & 1) * auVar44[0x2f];
          auVar51[0x30] = ((byte)(uVar3 >> 0x30) & 1) * auVar44[0x30];
          auVar51[0x31] = ((byte)(uVar3 >> 0x31) & 1) * auVar44[0x31];
          auVar51[0x32] = ((byte)(uVar3 >> 0x32) & 1) * auVar44[0x32];
          auVar51[0x33] = ((byte)(uVar3 >> 0x33) & 1) * auVar44[0x33];
          auVar51[0x34] = ((byte)(uVar3 >> 0x34) & 1) * auVar44[0x34];
          auVar51[0x35] = ((byte)(uVar3 >> 0x35) & 1) * auVar44[0x35];
          auVar51[0x36] = ((byte)(uVar3 >> 0x36) & 1) * auVar44[0x36];
          auVar51[0x37] = ((byte)(uVar3 >> 0x37) & 1) * auVar44[0x37];
          bVar5 = (byte)(uVar3 >> 0x38);
          auVar51[0x38] = (bVar5 & 1) * auVar44[0x38];
          auVar51[0x39] = (bVar5 >> 1 & 1) * auVar44[0x39];
          auVar51[0x3a] = (bVar5 >> 2 & 1) * auVar44[0x3a];
          auVar51[0x3b] = (bVar5 >> 3 & 1) * auVar44[0x3b];
          auVar51[0x3c] = (bVar5 >> 4 & 1) * auVar44[0x3c];
          auVar51[0x3d] = (bVar5 >> 5 & 1) * auVar44[0x3d];
          auVar51[0x3e] = (bVar5 >> 6 & 1) * auVar44[0x3e];
          auVar51[0x3f] = -((char)bVar5 >> 7) * auVar44[0x3f];
          auVar42 = vpshufb_avx512bw(auVar42,auVar41);
          vpshufb_avx512bw(auVar43,auVar41);
          vpshufb_avx512bw(auVar51,auVar41);
          vpxorq_avx512f(auVar42,auVar59);
          vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2 + 0xb));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar34 == 0xc) {
          uVar3 = *(ulong *)(&DAT_001a9e40 + lVar1);
          auVar42 = vmovdqu8_avx512bw(*param_3);
          auVar43 = vmovdqu8_avx512bw(param_3[1]);
          auVar44 = vmovdqu8_avx512bw(param_3[2]);
          auVar50[1] = ((byte)(uVar3 >> 1) & 1) * auVar44[1];
          auVar50[0] = ((byte)uVar3 & 1) * auVar44[0];
          auVar50[2] = ((byte)(uVar3 >> 2) & 1) * auVar44[2];
          auVar50[3] = ((byte)(uVar3 >> 3) & 1) * auVar44[3];
          auVar50[4] = ((byte)(uVar3 >> 4) & 1) * auVar44[4];
          auVar50[5] = ((byte)(uVar3 >> 5) & 1) * auVar44[5];
          auVar50[6] = ((byte)(uVar3 >> 6) & 1) * auVar44[6];
          auVar50[7] = ((byte)(uVar3 >> 7) & 1) * auVar44[7];
          auVar50[8] = ((byte)(uVar3 >> 8) & 1) * auVar44[8];
          auVar50[9] = ((byte)(uVar3 >> 9) & 1) * auVar44[9];
          auVar50[10] = ((byte)(uVar3 >> 10) & 1) * auVar44[10];
          auVar50[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar44[0xb];
          auVar50[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar44[0xc];
          auVar50[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar44[0xd];
          auVar50[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar44[0xe];
          auVar50[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar44[0xf];
          auVar50[0x10] = ((byte)(uVar3 >> 0x10) & 1) * auVar44[0x10];
          auVar50[0x11] = ((byte)(uVar3 >> 0x11) & 1) * auVar44[0x11];
          auVar50[0x12] = ((byte)(uVar3 >> 0x12) & 1) * auVar44[0x12];
          auVar50[0x13] = ((byte)(uVar3 >> 0x13) & 1) * auVar44[0x13];
          auVar50[0x14] = ((byte)(uVar3 >> 0x14) & 1) * auVar44[0x14];
          auVar50[0x15] = ((byte)(uVar3 >> 0x15) & 1) * auVar44[0x15];
          auVar50[0x16] = ((byte)(uVar3 >> 0x16) & 1) * auVar44[0x16];
          auVar50[0x17] = ((byte)(uVar3 >> 0x17) & 1) * auVar44[0x17];
          auVar50[0x18] = ((byte)(uVar3 >> 0x18) & 1) * auVar44[0x18];
          auVar50[0x19] = ((byte)(uVar3 >> 0x19) & 1) * auVar44[0x19];
          auVar50[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * auVar44[0x1a];
          auVar50[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * auVar44[0x1b];
          auVar50[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * auVar44[0x1c];
          auVar50[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * auVar44[0x1d];
          auVar50[0x1e] = ((byte)(uVar3 >> 0x1e) & 1) * auVar44[0x1e];
          auVar50[0x1f] = ((byte)(uVar3 >> 0x1f) & 1) * auVar44[0x1f];
          auVar50[0x20] = ((byte)(uVar3 >> 0x20) & 1) * auVar44[0x20];
          auVar50[0x21] = ((byte)(uVar3 >> 0x21) & 1) * auVar44[0x21];
          auVar50[0x22] = ((byte)(uVar3 >> 0x22) & 1) * auVar44[0x22];
          auVar50[0x23] = ((byte)(uVar3 >> 0x23) & 1) * auVar44[0x23];
          auVar50[0x24] = ((byte)(uVar3 >> 0x24) & 1) * auVar44[0x24];
          auVar50[0x25] = ((byte)(uVar3 >> 0x25) & 1) * auVar44[0x25];
          auVar50[0x26] = ((byte)(uVar3 >> 0x26) & 1) * auVar44[0x26];
          auVar50[0x27] = ((byte)(uVar3 >> 0x27) & 1) * auVar44[0x27];
          auVar50[0x28] = ((byte)(uVar3 >> 0x28) & 1) * auVar44[0x28];
          auVar50[0x29] = ((byte)(uVar3 >> 0x29) & 1) * auVar44[0x29];
          auVar50[0x2a] = ((byte)(uVar3 >> 0x2a) & 1) * auVar44[0x2a];
          auVar50[0x2b] = ((byte)(uVar3 >> 0x2b) & 1) * auVar44[0x2b];
          auVar50[0x2c] = ((byte)(uVar3 >> 0x2c) & 1) * auVar44[0x2c];
          auVar50[0x2d] = ((byte)(uVar3 >> 0x2d) & 1) * auVar44[0x2d];
          auVar50[0x2e] = ((byte)(uVar3 >> 0x2e) & 1) * auVar44[0x2e];
          auVar50[0x2f] = ((byte)(uVar3 >> 0x2f) & 1) * auVar44[0x2f];
          auVar50[0x30] = ((byte)(uVar3 >> 0x30) & 1) * auVar44[0x30];
          auVar50[0x31] = ((byte)(uVar3 >> 0x31) & 1) * auVar44[0x31];
          auVar50[0x32] = ((byte)(uVar3 >> 0x32) & 1) * auVar44[0x32];
          auVar50[0x33] = ((byte)(uVar3 >> 0x33) & 1) * auVar44[0x33];
          auVar50[0x34] = ((byte)(uVar3 >> 0x34) & 1) * auVar44[0x34];
          auVar50[0x35] = ((byte)(uVar3 >> 0x35) & 1) * auVar44[0x35];
          auVar50[0x36] = ((byte)(uVar3 >> 0x36) & 1) * auVar44[0x36];
          auVar50[0x37] = ((byte)(uVar3 >> 0x37) & 1) * auVar44[0x37];
          bVar5 = (byte)(uVar3 >> 0x38);
          auVar50[0x38] = (bVar5 & 1) * auVar44[0x38];
          auVar50[0x39] = (bVar5 >> 1 & 1) * auVar44[0x39];
          auVar50[0x3a] = (bVar5 >> 2 & 1) * auVar44[0x3a];
          auVar50[0x3b] = (bVar5 >> 3 & 1) * auVar44[0x3b];
          auVar50[0x3c] = (bVar5 >> 4 & 1) * auVar44[0x3c];
          auVar50[0x3d] = (bVar5 >> 5 & 1) * auVar44[0x3d];
          auVar50[0x3e] = (bVar5 >> 6 & 1) * auVar44[0x3e];
          auVar50[0x3f] = -((char)bVar5 >> 7) * auVar44[0x3f];
          auVar42 = vpshufb_avx512bw(auVar42,auVar41);
          vpshufb_avx512bw(auVar43,auVar41);
          vpshufb_avx512bw(auVar50,auVar41);
          vpxorq_avx512f(auVar42,auVar59);
          vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2 + 10));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar34 < 0xe) {
          uVar3 = *(ulong *)(&DAT_001a9c40 + lVar1);
          auVar42 = vmovdqu8_avx512bw(*param_3);
          auVar43 = vmovdqu8_avx512bw(param_3[1]);
          auVar44 = vmovdqu8_avx512bw(param_3[2]);
          auVar35 = vmovdqu8_avx512vl(*(undefined1 (*) [16])param_3[3]);
          auVar36[1] = ((byte)(uVar3 >> 1) & 1) * auVar35[1];
          auVar36[0] = ((byte)uVar3 & 1) * auVar35[0];
          auVar36[2] = ((byte)(uVar3 >> 2) & 1) * auVar35[2];
          auVar36[3] = ((byte)(uVar3 >> 3) & 1) * auVar35[3];
          auVar36[4] = ((byte)(uVar3 >> 4) & 1) * auVar35[4];
          auVar36[5] = ((byte)(uVar3 >> 5) & 1) * auVar35[5];
          auVar36[6] = ((byte)(uVar3 >> 6) & 1) * auVar35[6];
          auVar36[7] = ((byte)(uVar3 >> 7) & 1) * auVar35[7];
          auVar36[8] = ((byte)(uVar3 >> 8) & 1) * auVar35[8];
          auVar36[9] = ((byte)(uVar3 >> 9) & 1) * auVar35[9];
          auVar36[10] = ((byte)(uVar3 >> 10) & 1) * auVar35[10];
          auVar36[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar35[0xb];
          auVar36[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar35[0xc];
          auVar36[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar35[0xd];
          auVar36[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar35[0xe];
          auVar36[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar35[0xf];
          auVar42 = vpshufb_avx512bw(auVar42,auVar41);
          vpshufb_avx512bw(auVar43,auVar41);
          vpshufb_avx512bw(auVar44,auVar41);
          vpshufb_avx512vl(auVar36,auVar38);
          vpxorq_avx512f(auVar42,auVar59);
          vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2 + 9));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar34 == 0xe) {
          uVar3 = *(ulong *)(&DAT_001a9c40 + lVar1);
          auVar42 = vmovdqu8_avx512bw(*param_3);
          auVar43 = vmovdqu8_avx512bw(param_3[1]);
          auVar44 = vmovdqu8_avx512bw(param_3[2]);
          auVar48._32_32_ = auVar44._32_32_;
          auVar48._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])param_3[3]);
          auVar49[1] = ((byte)(uVar3 >> 1) & 1) * SUB321(auVar48._0_32_,1);
          auVar49[0] = ((byte)uVar3 & 1) * SUB321(auVar48._0_32_,0);
          auVar49[2] = ((byte)(uVar3 >> 2) & 1) * SUB321(auVar48._0_32_,2);
          auVar49[3] = ((byte)(uVar3 >> 3) & 1) * SUB321(auVar48._0_32_,3);
          auVar49[4] = ((byte)(uVar3 >> 4) & 1) * SUB321(auVar48._0_32_,4);
          auVar49[5] = ((byte)(uVar3 >> 5) & 1) * SUB321(auVar48._0_32_,5);
          auVar49[6] = ((byte)(uVar3 >> 6) & 1) * SUB321(auVar48._0_32_,6);
          auVar49[7] = ((byte)(uVar3 >> 7) & 1) * SUB321(auVar48._0_32_,7);
          auVar49[8] = ((byte)(uVar3 >> 8) & 1) * SUB321(auVar48._0_32_,8);
          auVar49[9] = ((byte)(uVar3 >> 9) & 1) * SUB321(auVar48._0_32_,9);
          auVar49[10] = ((byte)(uVar3 >> 10) & 1) * SUB321(auVar48._0_32_,10);
          auVar49[0xb] = ((byte)(uVar3 >> 0xb) & 1) * SUB321(auVar48._0_32_,0xb);
          auVar49[0xc] = ((byte)(uVar3 >> 0xc) & 1) * SUB321(auVar48._0_32_,0xc);
          auVar49[0xd] = ((byte)(uVar3 >> 0xd) & 1) * SUB321(auVar48._0_32_,0xd);
          auVar49[0xe] = ((byte)(uVar3 >> 0xe) & 1) * SUB321(auVar48._0_32_,0xe);
          auVar49[0xf] = ((byte)(uVar3 >> 0xf) & 1) * SUB321(auVar48._0_32_,0xf);
          auVar49[0x10] = ((byte)(uVar3 >> 0x10) & 1) * SUB321(auVar48._0_32_,0x10);
          auVar49[0x11] = ((byte)(uVar3 >> 0x11) & 1) * SUB321(auVar48._0_32_,0x11);
          auVar49[0x12] = ((byte)(uVar3 >> 0x12) & 1) * SUB321(auVar48._0_32_,0x12);
          auVar49[0x13] = ((byte)(uVar3 >> 0x13) & 1) * SUB321(auVar48._0_32_,0x13);
          auVar49[0x14] = ((byte)(uVar3 >> 0x14) & 1) * SUB321(auVar48._0_32_,0x14);
          auVar49[0x15] = ((byte)(uVar3 >> 0x15) & 1) * SUB321(auVar48._0_32_,0x15);
          auVar49[0x16] = ((byte)(uVar3 >> 0x16) & 1) * SUB321(auVar48._0_32_,0x16);
          auVar49[0x17] = ((byte)(uVar3 >> 0x17) & 1) * SUB321(auVar48._0_32_,0x17);
          auVar49[0x18] = ((byte)(uVar3 >> 0x18) & 1) * SUB321(auVar48._0_32_,0x18);
          auVar49[0x19] = ((byte)(uVar3 >> 0x19) & 1) * SUB321(auVar48._0_32_,0x19);
          auVar49[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * SUB321(auVar48._0_32_,0x1a);
          auVar49[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * SUB321(auVar48._0_32_,0x1b);
          auVar49[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * SUB321(auVar48._0_32_,0x1c);
          auVar49._30_34_ = auVar48._30_34_;
          auVar49[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * SUB321(auVar48._0_32_,0x1d);
          auVar42 = vpshufb_avx512bw(auVar42,auVar41);
          vpshufb_avx512bw(auVar43,auVar41);
          vpshufb_avx512bw(auVar44,auVar41);
          vpshufb_avx512vl(auVar49._0_32_,auVar40);
          vpxorq_avx512f(auVar42,auVar59);
          vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2 + 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar34 == 0xf) {
          uVar3 = *(ulong *)(&DAT_001a9c40 + lVar1);
          auVar42 = vmovdqu8_avx512bw(*param_3);
          auVar43 = vmovdqu8_avx512bw(param_3[1]);
          auVar44 = vmovdqu8_avx512bw(param_3[2]);
          auVar45 = vmovdqu8_avx512bw(param_3[3]);
          auVar47[1] = ((byte)(uVar3 >> 1) & 1) * auVar45[1];
          auVar47[0] = ((byte)uVar3 & 1) * auVar45[0];
          auVar47[2] = ((byte)(uVar3 >> 2) & 1) * auVar45[2];
          auVar47[3] = ((byte)(uVar3 >> 3) & 1) * auVar45[3];
          auVar47[4] = ((byte)(uVar3 >> 4) & 1) * auVar45[4];
          auVar47[5] = ((byte)(uVar3 >> 5) & 1) * auVar45[5];
          auVar47[6] = ((byte)(uVar3 >> 6) & 1) * auVar45[6];
          auVar47[7] = ((byte)(uVar3 >> 7) & 1) * auVar45[7];
          auVar47[8] = ((byte)(uVar3 >> 8) & 1) * auVar45[8];
          auVar47[9] = ((byte)(uVar3 >> 9) & 1) * auVar45[9];
          auVar47[10] = ((byte)(uVar3 >> 10) & 1) * auVar45[10];
          auVar47[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar45[0xb];
          auVar47[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar45[0xc];
          auVar47[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar45[0xd];
          auVar47[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar45[0xe];
          auVar47[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar45[0xf];
          auVar47[0x10] = ((byte)(uVar3 >> 0x10) & 1) * auVar45[0x10];
          auVar47[0x11] = ((byte)(uVar3 >> 0x11) & 1) * auVar45[0x11];
          auVar47[0x12] = ((byte)(uVar3 >> 0x12) & 1) * auVar45[0x12];
          auVar47[0x13] = ((byte)(uVar3 >> 0x13) & 1) * auVar45[0x13];
          auVar47[0x14] = ((byte)(uVar3 >> 0x14) & 1) * auVar45[0x14];
          auVar47[0x15] = ((byte)(uVar3 >> 0x15) & 1) * auVar45[0x15];
          auVar47[0x16] = ((byte)(uVar3 >> 0x16) & 1) * auVar45[0x16];
          auVar47[0x17] = ((byte)(uVar3 >> 0x17) & 1) * auVar45[0x17];
          auVar47[0x18] = ((byte)(uVar3 >> 0x18) & 1) * auVar45[0x18];
          auVar47[0x19] = ((byte)(uVar3 >> 0x19) & 1) * auVar45[0x19];
          auVar47[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * auVar45[0x1a];
          auVar47[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * auVar45[0x1b];
          auVar47[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * auVar45[0x1c];
          auVar47[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * auVar45[0x1d];
          auVar47[0x1e] = ((byte)(uVar3 >> 0x1e) & 1) * auVar45[0x1e];
          auVar47[0x1f] = ((byte)(uVar3 >> 0x1f) & 1) * auVar45[0x1f];
          auVar47[0x20] = ((byte)(uVar3 >> 0x20) & 1) * auVar45[0x20];
          auVar47[0x21] = ((byte)(uVar3 >> 0x21) & 1) * auVar45[0x21];
          auVar47[0x22] = ((byte)(uVar3 >> 0x22) & 1) * auVar45[0x22];
          auVar47[0x23] = ((byte)(uVar3 >> 0x23) & 1) * auVar45[0x23];
          auVar47[0x24] = ((byte)(uVar3 >> 0x24) & 1) * auVar45[0x24];
          auVar47[0x25] = ((byte)(uVar3 >> 0x25) & 1) * auVar45[0x25];
          auVar47[0x26] = ((byte)(uVar3 >> 0x26) & 1) * auVar45[0x26];
          auVar47[0x27] = ((byte)(uVar3 >> 0x27) & 1) * auVar45[0x27];
          auVar47[0x28] = ((byte)(uVar3 >> 0x28) & 1) * auVar45[0x28];
          auVar47[0x29] = ((byte)(uVar3 >> 0x29) & 1) * auVar45[0x29];
          auVar47[0x2a] = ((byte)(uVar3 >> 0x2a) & 1) * auVar45[0x2a];
          auVar47[0x2b] = ((byte)(uVar3 >> 0x2b) & 1) * auVar45[0x2b];
          auVar47[0x2c] = ((byte)(uVar3 >> 0x2c) & 1) * auVar45[0x2c];
          auVar47[0x2d] = ((byte)(uVar3 >> 0x2d) & 1) * auVar45[0x2d];
          auVar47[0x2e] = ((byte)(uVar3 >> 0x2e) & 1) * auVar45[0x2e];
          auVar47[0x2f] = ((byte)(uVar3 >> 0x2f) & 1) * auVar45[0x2f];
          auVar47[0x30] = ((byte)(uVar3 >> 0x30) & 1) * auVar45[0x30];
          auVar47[0x31] = ((byte)(uVar3 >> 0x31) & 1) * auVar45[0x31];
          auVar47[0x32] = ((byte)(uVar3 >> 0x32) & 1) * auVar45[0x32];
          auVar47[0x33] = ((byte)(uVar3 >> 0x33) & 1) * auVar45[0x33];
          auVar47[0x34] = ((byte)(uVar3 >> 0x34) & 1) * auVar45[0x34];
          auVar47[0x35] = ((byte)(uVar3 >> 0x35) & 1) * auVar45[0x35];
          auVar47[0x36] = ((byte)(uVar3 >> 0x36) & 1) * auVar45[0x36];
          auVar47[0x37] = ((byte)(uVar3 >> 0x37) & 1) * auVar45[0x37];
          bVar5 = (byte)(uVar3 >> 0x38);
          auVar47[0x38] = (bVar5 & 1) * auVar45[0x38];
          auVar47[0x39] = (bVar5 >> 1 & 1) * auVar45[0x39];
          auVar47[0x3a] = (bVar5 >> 2 & 1) * auVar45[0x3a];
          auVar47[0x3b] = (bVar5 >> 3 & 1) * auVar45[0x3b];
          auVar47[0x3c] = (bVar5 >> 4 & 1) * auVar45[0x3c];
          auVar47[0x3d] = (bVar5 >> 5 & 1) * auVar45[0x3d];
          auVar47[0x3e] = (bVar5 >> 6 & 1) * auVar45[0x3e];
          auVar47[0x3f] = -((char)bVar5 >> 7) * auVar45[0x3f];
          auVar42 = vpshufb_avx512bw(auVar42,auVar41);
          vpshufb_avx512bw(auVar43,auVar41);
          vpshufb_avx512bw(auVar44,auVar41);
          vpshufb_avx512bw(auVar47,auVar41);
          vpxorq_avx512f(auVar42,auVar59);
          vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2 + 7));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar3 = *(ulong *)(&DAT_001a9c40 + lVar1);
        auVar42 = vmovdqu8_avx512bw(*param_3);
        auVar43 = vmovdqu8_avx512bw(param_3[1]);
        auVar44 = vmovdqu8_avx512bw(param_3[2]);
        auVar45 = vmovdqu8_avx512bw(param_3[3]);
        auVar46[1] = ((byte)(uVar3 >> 1) & 1) * auVar45[1];
        auVar46[0] = ((byte)uVar3 & 1) * auVar45[0];
        auVar46[2] = ((byte)(uVar3 >> 2) & 1) * auVar45[2];
        auVar46[3] = ((byte)(uVar3 >> 3) & 1) * auVar45[3];
        auVar46[4] = ((byte)(uVar3 >> 4) & 1) * auVar45[4];
        auVar46[5] = ((byte)(uVar3 >> 5) & 1) * auVar45[5];
        auVar46[6] = ((byte)(uVar3 >> 6) & 1) * auVar45[6];
        auVar46[7] = ((byte)(uVar3 >> 7) & 1) * auVar45[7];
        auVar46[8] = ((byte)(uVar3 >> 8) & 1) * auVar45[8];
        auVar46[9] = ((byte)(uVar3 >> 9) & 1) * auVar45[9];
        auVar46[10] = ((byte)(uVar3 >> 10) & 1) * auVar45[10];
        auVar46[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar45[0xb];
        auVar46[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar45[0xc];
        auVar46[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar45[0xd];
        auVar46[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar45[0xe];
        auVar46[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar45[0xf];
        auVar46[0x10] = ((byte)(uVar3 >> 0x10) & 1) * auVar45[0x10];
        auVar46[0x11] = ((byte)(uVar3 >> 0x11) & 1) * auVar45[0x11];
        auVar46[0x12] = ((byte)(uVar3 >> 0x12) & 1) * auVar45[0x12];
        auVar46[0x13] = ((byte)(uVar3 >> 0x13) & 1) * auVar45[0x13];
        auVar46[0x14] = ((byte)(uVar3 >> 0x14) & 1) * auVar45[0x14];
        auVar46[0x15] = ((byte)(uVar3 >> 0x15) & 1) * auVar45[0x15];
        auVar46[0x16] = ((byte)(uVar3 >> 0x16) & 1) * auVar45[0x16];
        auVar46[0x17] = ((byte)(uVar3 >> 0x17) & 1) * auVar45[0x17];
        auVar46[0x18] = ((byte)(uVar3 >> 0x18) & 1) * auVar45[0x18];
        auVar46[0x19] = ((byte)(uVar3 >> 0x19) & 1) * auVar45[0x19];
        auVar46[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * auVar45[0x1a];
        auVar46[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * auVar45[0x1b];
        auVar46[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * auVar45[0x1c];
        auVar46[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * auVar45[0x1d];
        auVar46[0x1e] = ((byte)(uVar3 >> 0x1e) & 1) * auVar45[0x1e];
        auVar46[0x1f] = ((byte)(uVar3 >> 0x1f) & 1) * auVar45[0x1f];
        auVar46[0x20] = ((byte)(uVar3 >> 0x20) & 1) * auVar45[0x20];
        auVar46[0x21] = ((byte)(uVar3 >> 0x21) & 1) * auVar45[0x21];
        auVar46[0x22] = ((byte)(uVar3 >> 0x22) & 1) * auVar45[0x22];
        auVar46[0x23] = ((byte)(uVar3 >> 0x23) & 1) * auVar45[0x23];
        auVar46[0x24] = ((byte)(uVar3 >> 0x24) & 1) * auVar45[0x24];
        auVar46[0x25] = ((byte)(uVar3 >> 0x25) & 1) * auVar45[0x25];
        auVar46[0x26] = ((byte)(uVar3 >> 0x26) & 1) * auVar45[0x26];
        auVar46[0x27] = ((byte)(uVar3 >> 0x27) & 1) * auVar45[0x27];
        auVar46[0x28] = ((byte)(uVar3 >> 0x28) & 1) * auVar45[0x28];
        auVar46[0x29] = ((byte)(uVar3 >> 0x29) & 1) * auVar45[0x29];
        auVar46[0x2a] = ((byte)(uVar3 >> 0x2a) & 1) * auVar45[0x2a];
        auVar46[0x2b] = ((byte)(uVar3 >> 0x2b) & 1) * auVar45[0x2b];
        auVar46[0x2c] = ((byte)(uVar3 >> 0x2c) & 1) * auVar45[0x2c];
        auVar46[0x2d] = ((byte)(uVar3 >> 0x2d) & 1) * auVar45[0x2d];
        auVar46[0x2e] = ((byte)(uVar3 >> 0x2e) & 1) * auVar45[0x2e];
        auVar46[0x2f] = ((byte)(uVar3 >> 0x2f) & 1) * auVar45[0x2f];
        auVar46[0x30] = ((byte)(uVar3 >> 0x30) & 1) * auVar45[0x30];
        auVar46[0x31] = ((byte)(uVar3 >> 0x31) & 1) * auVar45[0x31];
        auVar46[0x32] = ((byte)(uVar3 >> 0x32) & 1) * auVar45[0x32];
        auVar46[0x33] = ((byte)(uVar3 >> 0x33) & 1) * auVar45[0x33];
        auVar46[0x34] = ((byte)(uVar3 >> 0x34) & 1) * auVar45[0x34];
        auVar46[0x35] = ((byte)(uVar3 >> 0x35) & 1) * auVar45[0x35];
        auVar46[0x36] = ((byte)(uVar3 >> 0x36) & 1) * auVar45[0x36];
        auVar46[0x37] = ((byte)(uVar3 >> 0x37) & 1) * auVar45[0x37];
        bVar5 = (byte)(uVar3 >> 0x38);
        auVar46[0x38] = (bVar5 & 1) * auVar45[0x38];
        auVar46[0x39] = (bVar5 >> 1 & 1) * auVar45[0x39];
        auVar46[0x3a] = (bVar5 >> 2 & 1) * auVar45[0x3a];
        auVar46[0x3b] = (bVar5 >> 3 & 1) * auVar45[0x3b];
        auVar46[0x3c] = (bVar5 >> 4 & 1) * auVar45[0x3c];
        auVar46[0x3d] = (bVar5 >> 5 & 1) * auVar45[0x3d];
        auVar46[0x3e] = (bVar5 >> 6 & 1) * auVar45[0x3e];
        auVar46[0x3f] = -((char)bVar5 >> 7) * auVar45[0x3f];
        auVar42 = vpshufb_avx512bw(auVar42,auVar41);
        vpshufb_avx512bw(auVar43,auVar41);
        vpshufb_avx512bw(auVar44,auVar41);
        vpshufb_avx512bw(auVar46,auVar41);
        vpxorq_avx512f(auVar42,auVar59);
        vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2 + 6));
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar3 = *puVar2;
      auVar35 = vmovdqu8_avx512vl(*(undefined1 (*) [16])*param_3);
      auVar37[1] = ((byte)(uVar3 >> 1) & 1) * auVar35[1];
      auVar37[0] = ((byte)uVar3 & 1) * auVar35[0];
      auVar37[2] = ((byte)(uVar3 >> 2) & 1) * auVar35[2];
      auVar37[3] = ((byte)(uVar3 >> 3) & 1) * auVar35[3];
      auVar37[4] = ((byte)(uVar3 >> 4) & 1) * auVar35[4];
      auVar37[5] = ((byte)(uVar3 >> 5) & 1) * auVar35[5];
      auVar37[6] = ((byte)(uVar3 >> 6) & 1) * auVar35[6];
      auVar37[7] = ((byte)(uVar3 >> 7) & 1) * auVar35[7];
      auVar37[8] = ((byte)(uVar3 >> 8) & 1) * auVar35[8];
      auVar37[9] = ((byte)(uVar3 >> 9) & 1) * auVar35[9];
      auVar37[10] = ((byte)(uVar3 >> 10) & 1) * auVar35[10];
      auVar37[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar35[0xb];
      auVar37[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar35[0xc];
      auVar37[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar35[0xd];
      auVar37[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar35[0xe];
      auVar37[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar35[0xf];
      auVar38 = vpshufb_avx512vl(auVar37,auVar38);
      auVar59 = vpxorq_avx512f(ZEXT1664(auVar38),auVar59);
      auVar35 = vmovdqu64_avx512vl(param_2[0x15]);
      auVar63._8_8_ = 0;
      auVar63._0_8_ = auVar59._8_8_;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = auVar35._0_8_;
      auVar38 = (undefined1  [16])0x0;
      for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
        if ((auVar63 & (undefined1  [16])0x1 << uVar34) != (undefined1  [16])0x0) {
          auVar38 = auVar38 ^ auVar17 << uVar34;
        }
      }
      auVar62._32_32_ = in_ZMM7._32_32_;
      auVar62._0_32_ = ZEXT1632(auVar38);
      auVar21._8_8_ = 0;
      auVar21._0_8_ = auVar59._0_8_;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = auVar35._8_8_;
      auVar38 = (undefined1  [16])0x0;
      for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
        if ((auVar21 & (undefined1  [16])0x1 << uVar34) != (undefined1  [16])0x0) {
          auVar38 = auVar38 ^ auVar25 << uVar34;
        }
      }
      auVar29._8_8_ = 0;
      auVar29._0_8_ = auVar59._8_8_;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = auVar35._8_8_;
      auVar36 = (undefined1  [16])0x0;
      for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
        if ((auVar29 & (undefined1  [16])0x1 << uVar34) != (undefined1  [16])0x0) {
          auVar36 = auVar36 ^ auVar31 << uVar34;
        }
      }
      auVar58._32_32_ = in_ZMM1._32_32_;
      auVar58._0_32_ = ZEXT1632(auVar36);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auVar59._0_8_;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = auVar35._0_8_;
      auVar35 = (undefined1  [16])0x0;
      for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
        if ((auVar6 & (undefined1  [16])0x1 << uVar34) != (undefined1  [16])0x0) {
          auVar35 = auVar35 ^ auVar10 << uVar34;
        }
      }
      auVar61._32_32_ = in_ZMM6._32_32_;
      auVar61._0_32_ = ZEXT1632(auVar35);
      auVar59._32_8_ = in_register_00001420;
      auVar59._0_32_ = ZEXT1632(auVar38);
      auVar59._40_8_ = in_register_00001428;
      auVar59._48_8_ = in_register_00001430;
      auVar59._56_8_ = in_register_00001438;
      auVar59 = vpxorq_avx512f(auVar62,auVar59);
      auVar41 = vpsrldq_avx512bw(auVar59,8);
      auVar42 = vpslldq_avx512bw(auVar59,8);
      auVar59 = vpxorq_avx512f(auVar58,auVar41);
      auVar41 = vpxorq_avx512f(auVar61,auVar42);
      auVar40 = vextracti64x4_avx512f(auVar59,1);
      auVar40 = vpxorq_avx512vl(auVar59._0_32_,auVar40);
      auVar38 = vextracti32x4_avx512vl(auVar40,1);
      auVar35 = vpxorq_avx512vl(auVar40._0_16_,auVar38);
      auVar40 = vextracti64x4_avx512f(auVar41,1);
      auVar40 = vpxorq_avx512vl(auVar41._0_32_,auVar40);
      auVar38 = vextracti32x4_avx512vl(auVar40,1);
      auVar36 = vpxorq_avx512vl(auVar40._0_16_,auVar38);
      auVar39 = vmovdqa64_avx512vl(_POLY2);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = auVar39._8_8_;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = auVar36._0_8_;
      auVar38 = (undefined1  [16])0x0;
      for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
        if ((auVar14 & (undefined1  [16])0x1 << uVar34) != (undefined1  [16])0x0) {
          auVar38 = auVar38 ^ auVar18 << uVar34;
        }
      }
      auVar38 = vpslldq_avx(auVar38,8);
      auVar36 = vpxorq_avx512vl(auVar36,auVar38);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = auVar39._0_8_;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = auVar36._0_8_;
      auVar38 = (undefined1  [16])0x0;
      for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
        if ((auVar7 & (undefined1  [16])0x1 << uVar34) != (undefined1  [16])0x0) {
          auVar38 = auVar38 ^ auVar11 << uVar34;
        }
      }
      auVar63 = vpsrldq_avx(auVar38,4);
      auVar22._8_8_ = 0;
      auVar22._0_8_ = auVar39._0_8_;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = auVar36._8_8_;
      auVar38 = (undefined1  [16])0x0;
      for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
        if ((auVar22 & (undefined1  [16])0x1 << uVar34) != (undefined1  [16])0x0) {
          auVar38 = auVar38 ^ auVar26 << uVar34;
        }
      }
      auVar38 = vpslldq_avx(auVar38,4);
      auVar38 = vpternlogq_avx512vl(auVar38,auVar63,auVar35,0x96);
    }
    auVar60._8_8_ = 0;
    auVar60._0_8_ = param_4 << 3;
    auVar35 = vpxorq_avx512vl(auVar60,auVar38);
    auVar36 = vmovdqu64_avx512vl(param_2[0x15]);
    auVar30._8_8_ = 0;
    auVar30._0_8_ = auVar35._8_8_;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = auVar36._8_8_;
    auVar38 = (undefined1  [16])0x0;
    for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
      if ((auVar30 & (undefined1  [16])0x1 << uVar34) != (undefined1  [16])0x0) {
        auVar38 = auVar38 ^ auVar32 << uVar34;
      }
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = auVar35._0_8_;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = auVar36._0_8_;
    auVar39 = (undefined1  [16])0x0;
    for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
      if ((auVar8 & (undefined1  [16])0x1 << uVar34) != (undefined1  [16])0x0) {
        auVar39 = auVar39 ^ auVar12 << uVar34;
      }
    }
    auVar15._8_8_ = 0;
    auVar15._0_8_ = auVar35._8_8_;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = auVar36._0_8_;
    auVar63 = (undefined1  [16])0x0;
    for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
      if ((auVar15 & (undefined1  [16])0x1 << uVar34) != (undefined1  [16])0x0) {
        auVar63 = auVar63 ^ auVar19 << uVar34;
      }
    }
    auVar23._8_8_ = 0;
    auVar23._0_8_ = auVar35._0_8_;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = auVar36._8_8_;
    auVar35 = (undefined1  [16])0x0;
    for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
      if ((auVar23 & (undefined1  [16])0x1 << uVar34) != (undefined1  [16])0x0) {
        auVar35 = auVar35 ^ auVar27 << uVar34;
      }
    }
    auVar35 = vpxorq_avx512vl(auVar35,auVar63);
    auVar63 = vpsrldq_avx(auVar35,8);
    auVar36 = vpslldq_avx(auVar35,8);
    auVar35 = vpxorq_avx512vl(auVar38,auVar63);
    auVar36 = vpxorq_avx512vl(auVar36,auVar39);
    auVar39 = vmovdqu64_avx512vl(_POLY2);
    auVar16._8_8_ = 0;
    auVar16._0_8_ = auVar39._8_8_;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = auVar36._0_8_;
    auVar38 = (undefined1  [16])0x0;
    for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
      if ((auVar16 & (undefined1  [16])0x1 << uVar34) != (undefined1  [16])0x0) {
        auVar38 = auVar38 ^ auVar20 << uVar34;
      }
    }
    auVar38 = vpslldq_avx(auVar38,8);
    auVar36 = vpxorq_avx512vl(auVar36,auVar38);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = auVar39._0_8_;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = auVar36._0_8_;
    auVar38 = (undefined1  [16])0x0;
    for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
      if ((auVar9 & (undefined1  [16])0x1 << uVar34) != (undefined1  [16])0x0) {
        auVar38 = auVar38 ^ auVar13 << uVar34;
      }
    }
    auVar63 = vpsrldq_avx(auVar38,4);
    auVar24._8_8_ = 0;
    auVar24._0_8_ = auVar39._0_8_;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = auVar36._8_8_;
    auVar38 = (undefined1  [16])0x0;
    for (uVar34 = 0; uVar34 < 0x40; uVar34 = uVar34 + 1) {
      if ((auVar24 & (undefined1  [16])0x1 << uVar34) != (undefined1  [16])0x0) {
        auVar38 = auVar38 ^ auVar28 << uVar34;
      }
    }
    auVar38 = vpslldq_avx(auVar38,4);
    auVar38 = vpternlogq_avx512vl(auVar38,auVar35,auVar63,0x96);
    auVar38 = vpshufb_avx(auVar38,_SHUF_MASK);
  }
  iVar4 = *(int *)param_1[0xf];
  if (iVar4 == 9) {
    auVar35 = vpxorq_avx512vl(auVar38,*param_1);
    auVar35 = aesenc(auVar35,param_1[1]);
    auVar35 = aesenc(auVar35,param_1[2]);
    auVar35 = aesenc(auVar35,param_1[3]);
    auVar35 = aesenc(auVar35,param_1[4]);
    auVar35 = aesenc(auVar35,param_1[5]);
    auVar35 = aesenc(auVar35,param_1[6]);
    auVar35 = aesenc(auVar35,param_1[7]);
    auVar35 = aesenc(auVar35,param_1[8]);
    auVar35 = aesenc(auVar35,param_1[9]);
    auVar35 = aesenclast(auVar35,param_1[10]);
  }
  else if (iVar4 == 0xb) {
    auVar35 = vpxorq_avx512vl(auVar38,*param_1);
    auVar35 = aesenc(auVar35,param_1[1]);
    auVar35 = aesenc(auVar35,param_1[2]);
    auVar35 = aesenc(auVar35,param_1[3]);
    auVar35 = aesenc(auVar35,param_1[4]);
    auVar35 = aesenc(auVar35,param_1[5]);
    auVar35 = aesenc(auVar35,param_1[6]);
    auVar35 = aesenc(auVar35,param_1[7]);
    auVar35 = aesenc(auVar35,param_1[8]);
    auVar35 = aesenc(auVar35,param_1[9]);
    auVar35 = aesenc(auVar35,param_1[10]);
    auVar35 = aesenc(auVar35,param_1[0xb]);
    auVar35 = aesenclast(auVar35,param_1[0xc]);
  }
  else {
    auVar35 = auVar38;
    if (iVar4 == 0xd) {
      auVar35 = vpxorq_avx512vl(auVar38,*param_1);
      auVar35 = aesenc(auVar35,param_1[1]);
      auVar35 = aesenc(auVar35,param_1[2]);
      auVar35 = aesenc(auVar35,param_1[3]);
      auVar35 = aesenc(auVar35,param_1[4]);
      auVar35 = aesenc(auVar35,param_1[5]);
      auVar35 = aesenc(auVar35,param_1[6]);
      auVar35 = aesenc(auVar35,param_1[7]);
      auVar35 = aesenc(auVar35,param_1[8]);
      auVar35 = aesenc(auVar35,param_1[9]);
      auVar35 = aesenc(auVar35,param_1[10]);
      auVar35 = aesenc(auVar35,param_1[0xb]);
      auVar35 = aesenc(auVar35,param_1[0xc]);
      auVar35 = aesenc(auVar35,param_1[0xd]);
      auVar35 = aesenclast(auVar35,param_1[0xe]);
    }
  }
  param_2[2] = auVar35;
  auVar38 = vpshufb_avx(auVar38,_SHUF_MASK);
  *param_2 = auVar38;
  if (0x100 < param_4) {
    auVar59 = ZEXT1664((undefined1  [16])0x0);
    vmovdqa64_avx512f(auVar59);
    vmovdqa64_avx512f(auVar59);
    vmovdqa64_avx512f(auVar59);
    vmovdqa64_avx512f(auVar59);
    vmovdqa64_avx512f(auVar59);
    vmovdqa64_avx512f(auVar59);
    vmovdqa64_avx512f(auVar59);
    vmovdqa64_avx512f(auVar59);
    vmovdqa64_avx512f(auVar59);
    vmovdqa64_avx512f(auVar59);
    vmovdqa64_avx512f(auVar59);
    vmovdqa64_avx512f(auVar59);
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00103615) */
/* WARNING: Removing unreachable block (ram,0x00102fff) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_aes_gcm_update_aad_avx512(long param_1,undefined1 (*param_2) [64],ulong param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  byte bVar4;
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
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  char cVar18;
  ulong in_RAX;
  uint uVar19;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar20 [16];
  undefined1 auVar25 [32];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar34 [64];
  undefined1 auVar21 [16];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 in_ZMM1 [64];
  undefined1 auVar42 [64];
  undefined1 in_ZMM6 [64];
  undefined1 auVar43 [64];
  undefined1 in_ZMM7 [64];
  undefined1 auVar44 [64];
  undefined1 auVar45 [16];
  undefined8 in_register_00001420;
  undefined8 in_register_00001428;
  undefined8 in_register_00001430;
  undefined8 in_register_00001438;
  undefined1 auVar46 [64];
  undefined1 auVar33 [64];
  undefined1 auVar37 [64];
  
  auVar20 = vmovdqu64_avx512vl(*(undefined1 (*) [16])(param_1 + 0x40));
  auVar46 = ZEXT1664(auVar20);
  if (param_3 != 0) {
    auVar26 = vmovdqa64_avx512f(_SHUF_MASK);
    cVar18 = (char)(in_RAX >> 8);
    if (0x2ff < (long)param_3) {
      auVar46 = vmovdqu64_avx512f(*param_2);
      auVar27 = vmovdqu64_avx512f(param_2[1]);
      auVar28 = vmovdqu64_avx512f(param_2[2]);
      auVar29 = vmovdqu64_avx512f(param_2[3]);
      vpshufb_avx512bw(auVar46,auVar26);
      vpshufb_avx512bw(auVar27,auVar26);
      vpshufb_avx512bw(auVar28,auVar26);
      vpshufb_avx512bw(auVar29,auVar26);
      auVar46 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_1 + 0x120));
      vmovdqu64_avx512f(auVar46);
      auVar46 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_1 + 0xe0));
      vmovdqu64_avx512f(auVar46);
      vshufi64x2_avx512f(auVar46,auVar46);
      *(char *)(param_3 + 0x71) = *(char *)(param_3 + 0x71) + cVar18;
      *(char *)(in_RAX + 0x6f) = *(char *)(in_RAX + 0x6f) + -1;
      auVar46 = vmovdqu64_avx512f(*(undefined1 (*) [64])((in_RAX & 0xffffffff) + 0x60));
      vmovdqu64_avx512f(auVar46);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (0x1ff < (long)param_3) {
      auVar46 = vmovdqu64_avx512f(*param_2);
      auVar27 = vmovdqu64_avx512f(param_2[1]);
      auVar28 = vmovdqu64_avx512f(param_2[2]);
      auVar29 = vmovdqu64_avx512f(param_2[3]);
      vpshufb_avx512bw(auVar46,auVar26);
      vpshufb_avx512bw(auVar27,auVar26);
      vpshufb_avx512bw(auVar28,auVar26);
      vpshufb_avx512bw(auVar29,auVar26);
      auVar46 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_1 + 0x120));
      vmovdqu64_avx512f(auVar46);
      auVar46 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_1 + 0xe0));
      vmovdqu64_avx512f(auVar46);
      vshufi64x2_avx512f(auVar46,auVar46);
      *(char *)(param_3 + 0x71) = *(char *)(param_3 + 0x71) + cVar18;
      *(char *)(in_RAX + 0x6f) = *(char *)(in_RAX + 0x6f) + -1;
      auVar46 = vmovdqu64_avx512f(*(undefined1 (*) [64])((in_RAX & 0xffffffff) + 0x60));
      vmovdqu64_avx512f(auVar46);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (0xff < (long)param_3) {
      auVar27 = vmovdqu64_avx512f(*param_2);
      auVar28 = vmovdqu64_avx512f(param_2[1]);
      auVar29 = vmovdqu64_avx512f(param_2[2]);
      auVar30 = vmovdqu64_avx512f(param_2[3]);
      auVar27 = vpshufb_avx512bw(auVar27,auVar26);
      vpshufb_avx512bw(auVar28,auVar26);
      vpshufb_avx512bw(auVar29,auVar26);
      vpshufb_avx512bw(auVar30,auVar26);
      vpxorq_avx512f(auVar27,auVar46);
      vmovdqu64_avx512f(*(undefined1 (*) [64])(param_1 + 0x60));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    lVar1 = param_3 * 8;
    puVar2 = (ulong *)(&byte64_len_to_mask_table + lVar1);
    uVar19 = (int)param_3 + 0xfU >> 4;
    auVar20 = auVar26._0_16_;
    if (1 < uVar19) {
      auVar25 = auVar26._0_32_;
      if (uVar19 == 2) {
        uVar3 = *puVar2;
        auVar27._32_32_ = auVar26._32_32_;
        auVar27._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])*param_2);
        auVar26[1] = ((byte)(uVar3 >> 1) & 1) * SUB321(auVar27._0_32_,1);
        auVar26[0] = ((byte)uVar3 & 1) * SUB321(auVar27._0_32_,0);
        auVar26[2] = ((byte)(uVar3 >> 2) & 1) * SUB321(auVar27._0_32_,2);
        auVar26[3] = ((byte)(uVar3 >> 3) & 1) * SUB321(auVar27._0_32_,3);
        auVar26[4] = ((byte)(uVar3 >> 4) & 1) * SUB321(auVar27._0_32_,4);
        auVar26[5] = ((byte)(uVar3 >> 5) & 1) * SUB321(auVar27._0_32_,5);
        auVar26[6] = ((byte)(uVar3 >> 6) & 1) * SUB321(auVar27._0_32_,6);
        auVar26[7] = ((byte)(uVar3 >> 7) & 1) * SUB321(auVar27._0_32_,7);
        auVar26[8] = ((byte)(uVar3 >> 8) & 1) * SUB321(auVar27._0_32_,8);
        auVar26[9] = ((byte)(uVar3 >> 9) & 1) * SUB321(auVar27._0_32_,9);
        auVar26[10] = ((byte)(uVar3 >> 10) & 1) * SUB321(auVar27._0_32_,10);
        auVar26[0xb] = ((byte)(uVar3 >> 0xb) & 1) * SUB321(auVar27._0_32_,0xb);
        auVar26[0xc] = ((byte)(uVar3 >> 0xc) & 1) * SUB321(auVar27._0_32_,0xc);
        auVar26[0xd] = ((byte)(uVar3 >> 0xd) & 1) * SUB321(auVar27._0_32_,0xd);
        auVar26[0xe] = ((byte)(uVar3 >> 0xe) & 1) * SUB321(auVar27._0_32_,0xe);
        auVar26[0xf] = ((byte)(uVar3 >> 0xf) & 1) * SUB321(auVar27._0_32_,0xf);
        auVar26[0x10] = ((byte)(uVar3 >> 0x10) & 1) * SUB321(auVar27._0_32_,0x10);
        auVar26[0x11] = ((byte)(uVar3 >> 0x11) & 1) * SUB321(auVar27._0_32_,0x11);
        auVar26[0x12] = ((byte)(uVar3 >> 0x12) & 1) * SUB321(auVar27._0_32_,0x12);
        auVar26[0x13] = ((byte)(uVar3 >> 0x13) & 1) * SUB321(auVar27._0_32_,0x13);
        auVar26[0x14] = ((byte)(uVar3 >> 0x14) & 1) * SUB321(auVar27._0_32_,0x14);
        auVar26[0x15] = ((byte)(uVar3 >> 0x15) & 1) * SUB321(auVar27._0_32_,0x15);
        auVar26[0x16] = ((byte)(uVar3 >> 0x16) & 1) * SUB321(auVar27._0_32_,0x16);
        auVar26[0x17] = ((byte)(uVar3 >> 0x17) & 1) * SUB321(auVar27._0_32_,0x17);
        auVar26[0x18] = ((byte)(uVar3 >> 0x18) & 1) * SUB321(auVar27._0_32_,0x18);
        auVar26[0x19] = ((byte)(uVar3 >> 0x19) & 1) * SUB321(auVar27._0_32_,0x19);
        auVar26[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * SUB321(auVar27._0_32_,0x1a);
        auVar26[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * SUB321(auVar27._0_32_,0x1b);
        auVar26[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * SUB321(auVar27._0_32_,0x1c);
        auVar26._30_34_ = auVar27._30_34_;
        auVar26[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * SUB321(auVar27._0_32_,0x1d);
        auVar25 = vpshufb_avx512vl(auVar26._0_32_,auVar25);
        vpxorq_avx512f(ZEXT3264(auVar25),auVar46);
        vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_1 + 0x140));
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (uVar19 < 4) {
        uVar3 = *puVar2;
        auVar27 = vmovdqu8_avx512bw(*param_2);
        auVar28[1] = ((byte)(uVar3 >> 1) & 1) * auVar27[1];
        auVar28[0] = ((byte)uVar3 & 1) * auVar27[0];
        auVar28[2] = ((byte)(uVar3 >> 2) & 1) * auVar27[2];
        auVar28[3] = ((byte)(uVar3 >> 3) & 1) * auVar27[3];
        auVar28[4] = ((byte)(uVar3 >> 4) & 1) * auVar27[4];
        auVar28[5] = ((byte)(uVar3 >> 5) & 1) * auVar27[5];
        auVar28[6] = ((byte)(uVar3 >> 6) & 1) * auVar27[6];
        auVar28[7] = ((byte)(uVar3 >> 7) & 1) * auVar27[7];
        auVar28[8] = ((byte)(uVar3 >> 8) & 1) * auVar27[8];
        auVar28[9] = ((byte)(uVar3 >> 9) & 1) * auVar27[9];
        auVar28[10] = ((byte)(uVar3 >> 10) & 1) * auVar27[10];
        auVar28[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar27[0xb];
        auVar28[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar27[0xc];
        auVar28[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar27[0xd];
        auVar28[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar27[0xe];
        auVar28[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar27[0xf];
        auVar28[0x10] = ((byte)(uVar3 >> 0x10) & 1) * auVar27[0x10];
        auVar28[0x11] = ((byte)(uVar3 >> 0x11) & 1) * auVar27[0x11];
        auVar28[0x12] = ((byte)(uVar3 >> 0x12) & 1) * auVar27[0x12];
        auVar28[0x13] = ((byte)(uVar3 >> 0x13) & 1) * auVar27[0x13];
        auVar28[0x14] = ((byte)(uVar3 >> 0x14) & 1) * auVar27[0x14];
        auVar28[0x15] = ((byte)(uVar3 >> 0x15) & 1) * auVar27[0x15];
        auVar28[0x16] = ((byte)(uVar3 >> 0x16) & 1) * auVar27[0x16];
        auVar28[0x17] = ((byte)(uVar3 >> 0x17) & 1) * auVar27[0x17];
        auVar28[0x18] = ((byte)(uVar3 >> 0x18) & 1) * auVar27[0x18];
        auVar28[0x19] = ((byte)(uVar3 >> 0x19) & 1) * auVar27[0x19];
        auVar28[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * auVar27[0x1a];
        auVar28[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * auVar27[0x1b];
        auVar28[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * auVar27[0x1c];
        auVar28[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * auVar27[0x1d];
        auVar28[0x1e] = ((byte)(uVar3 >> 0x1e) & 1) * auVar27[0x1e];
        auVar28[0x1f] = ((byte)(uVar3 >> 0x1f) & 1) * auVar27[0x1f];
        auVar28[0x20] = ((byte)(uVar3 >> 0x20) & 1) * auVar27[0x20];
        auVar28[0x21] = ((byte)(uVar3 >> 0x21) & 1) * auVar27[0x21];
        auVar28[0x22] = ((byte)(uVar3 >> 0x22) & 1) * auVar27[0x22];
        auVar28[0x23] = ((byte)(uVar3 >> 0x23) & 1) * auVar27[0x23];
        auVar28[0x24] = ((byte)(uVar3 >> 0x24) & 1) * auVar27[0x24];
        auVar28[0x25] = ((byte)(uVar3 >> 0x25) & 1) * auVar27[0x25];
        auVar28[0x26] = ((byte)(uVar3 >> 0x26) & 1) * auVar27[0x26];
        auVar28[0x27] = ((byte)(uVar3 >> 0x27) & 1) * auVar27[0x27];
        auVar28[0x28] = ((byte)(uVar3 >> 0x28) & 1) * auVar27[0x28];
        auVar28[0x29] = ((byte)(uVar3 >> 0x29) & 1) * auVar27[0x29];
        auVar28[0x2a] = ((byte)(uVar3 >> 0x2a) & 1) * auVar27[0x2a];
        auVar28[0x2b] = ((byte)(uVar3 >> 0x2b) & 1) * auVar27[0x2b];
        auVar28[0x2c] = ((byte)(uVar3 >> 0x2c) & 1) * auVar27[0x2c];
        auVar28[0x2d] = ((byte)(uVar3 >> 0x2d) & 1) * auVar27[0x2d];
        auVar28[0x2e] = ((byte)(uVar3 >> 0x2e) & 1) * auVar27[0x2e];
        auVar28[0x2f] = ((byte)(uVar3 >> 0x2f) & 1) * auVar27[0x2f];
        auVar28[0x30] = ((byte)(uVar3 >> 0x30) & 1) * auVar27[0x30];
        auVar28[0x31] = ((byte)(uVar3 >> 0x31) & 1) * auVar27[0x31];
        auVar28[0x32] = ((byte)(uVar3 >> 0x32) & 1) * auVar27[0x32];
        auVar28[0x33] = ((byte)(uVar3 >> 0x33) & 1) * auVar27[0x33];
        auVar28[0x34] = ((byte)(uVar3 >> 0x34) & 1) * auVar27[0x34];
        auVar28[0x35] = ((byte)(uVar3 >> 0x35) & 1) * auVar27[0x35];
        auVar28[0x36] = ((byte)(uVar3 >> 0x36) & 1) * auVar27[0x36];
        auVar28[0x37] = ((byte)(uVar3 >> 0x37) & 1) * auVar27[0x37];
        bVar4 = (byte)(uVar3 >> 0x38);
        auVar28[0x38] = (bVar4 & 1) * auVar27[0x38];
        auVar28[0x39] = (bVar4 >> 1 & 1) * auVar27[0x39];
        auVar28[0x3a] = (bVar4 >> 2 & 1) * auVar27[0x3a];
        auVar28[0x3b] = (bVar4 >> 3 & 1) * auVar27[0x3b];
        auVar28[0x3c] = (bVar4 >> 4 & 1) * auVar27[0x3c];
        auVar28[0x3d] = (bVar4 >> 5 & 1) * auVar27[0x3d];
        auVar28[0x3e] = (bVar4 >> 6 & 1) * auVar27[0x3e];
        auVar28[0x3f] = -((char)bVar4 >> 7) * auVar27[0x3f];
        auVar26 = vpshufb_avx512bw(auVar28,auVar26);
        vpxorq_avx512f(auVar26,auVar46);
        auVar25 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_1 + 0x130));
        vinserti64x2_avx512dq(ZEXT3264(auVar25),*(undefined1 (*) [16])(param_1 + 0x150),2);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (uVar19 == 4) {
        uVar3 = *puVar2;
        auVar27 = vmovdqu8_avx512bw(*param_2);
        auVar29[1] = ((byte)(uVar3 >> 1) & 1) * auVar27[1];
        auVar29[0] = ((byte)uVar3 & 1) * auVar27[0];
        auVar29[2] = ((byte)(uVar3 >> 2) & 1) * auVar27[2];
        auVar29[3] = ((byte)(uVar3 >> 3) & 1) * auVar27[3];
        auVar29[4] = ((byte)(uVar3 >> 4) & 1) * auVar27[4];
        auVar29[5] = ((byte)(uVar3 >> 5) & 1) * auVar27[5];
        auVar29[6] = ((byte)(uVar3 >> 6) & 1) * auVar27[6];
        auVar29[7] = ((byte)(uVar3 >> 7) & 1) * auVar27[7];
        auVar29[8] = ((byte)(uVar3 >> 8) & 1) * auVar27[8];
        auVar29[9] = ((byte)(uVar3 >> 9) & 1) * auVar27[9];
        auVar29[10] = ((byte)(uVar3 >> 10) & 1) * auVar27[10];
        auVar29[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar27[0xb];
        auVar29[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar27[0xc];
        auVar29[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar27[0xd];
        auVar29[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar27[0xe];
        auVar29[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar27[0xf];
        auVar29[0x10] = ((byte)(uVar3 >> 0x10) & 1) * auVar27[0x10];
        auVar29[0x11] = ((byte)(uVar3 >> 0x11) & 1) * auVar27[0x11];
        auVar29[0x12] = ((byte)(uVar3 >> 0x12) & 1) * auVar27[0x12];
        auVar29[0x13] = ((byte)(uVar3 >> 0x13) & 1) * auVar27[0x13];
        auVar29[0x14] = ((byte)(uVar3 >> 0x14) & 1) * auVar27[0x14];
        auVar29[0x15] = ((byte)(uVar3 >> 0x15) & 1) * auVar27[0x15];
        auVar29[0x16] = ((byte)(uVar3 >> 0x16) & 1) * auVar27[0x16];
        auVar29[0x17] = ((byte)(uVar3 >> 0x17) & 1) * auVar27[0x17];
        auVar29[0x18] = ((byte)(uVar3 >> 0x18) & 1) * auVar27[0x18];
        auVar29[0x19] = ((byte)(uVar3 >> 0x19) & 1) * auVar27[0x19];
        auVar29[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * auVar27[0x1a];
        auVar29[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * auVar27[0x1b];
        auVar29[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * auVar27[0x1c];
        auVar29[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * auVar27[0x1d];
        auVar29[0x1e] = ((byte)(uVar3 >> 0x1e) & 1) * auVar27[0x1e];
        auVar29[0x1f] = ((byte)(uVar3 >> 0x1f) & 1) * auVar27[0x1f];
        auVar29[0x20] = ((byte)(uVar3 >> 0x20) & 1) * auVar27[0x20];
        auVar29[0x21] = ((byte)(uVar3 >> 0x21) & 1) * auVar27[0x21];
        auVar29[0x22] = ((byte)(uVar3 >> 0x22) & 1) * auVar27[0x22];
        auVar29[0x23] = ((byte)(uVar3 >> 0x23) & 1) * auVar27[0x23];
        auVar29[0x24] = ((byte)(uVar3 >> 0x24) & 1) * auVar27[0x24];
        auVar29[0x25] = ((byte)(uVar3 >> 0x25) & 1) * auVar27[0x25];
        auVar29[0x26] = ((byte)(uVar3 >> 0x26) & 1) * auVar27[0x26];
        auVar29[0x27] = ((byte)(uVar3 >> 0x27) & 1) * auVar27[0x27];
        auVar29[0x28] = ((byte)(uVar3 >> 0x28) & 1) * auVar27[0x28];
        auVar29[0x29] = ((byte)(uVar3 >> 0x29) & 1) * auVar27[0x29];
        auVar29[0x2a] = ((byte)(uVar3 >> 0x2a) & 1) * auVar27[0x2a];
        auVar29[0x2b] = ((byte)(uVar3 >> 0x2b) & 1) * auVar27[0x2b];
        auVar29[0x2c] = ((byte)(uVar3 >> 0x2c) & 1) * auVar27[0x2c];
        auVar29[0x2d] = ((byte)(uVar3 >> 0x2d) & 1) * auVar27[0x2d];
        auVar29[0x2e] = ((byte)(uVar3 >> 0x2e) & 1) * auVar27[0x2e];
        auVar29[0x2f] = ((byte)(uVar3 >> 0x2f) & 1) * auVar27[0x2f];
        auVar29[0x30] = ((byte)(uVar3 >> 0x30) & 1) * auVar27[0x30];
        auVar29[0x31] = ((byte)(uVar3 >> 0x31) & 1) * auVar27[0x31];
        auVar29[0x32] = ((byte)(uVar3 >> 0x32) & 1) * auVar27[0x32];
        auVar29[0x33] = ((byte)(uVar3 >> 0x33) & 1) * auVar27[0x33];
        auVar29[0x34] = ((byte)(uVar3 >> 0x34) & 1) * auVar27[0x34];
        auVar29[0x35] = ((byte)(uVar3 >> 0x35) & 1) * auVar27[0x35];
        auVar29[0x36] = ((byte)(uVar3 >> 0x36) & 1) * auVar27[0x36];
        auVar29[0x37] = ((byte)(uVar3 >> 0x37) & 1) * auVar27[0x37];
        bVar4 = (byte)(uVar3 >> 0x38);
        auVar29[0x38] = (bVar4 & 1) * auVar27[0x38];
        auVar29[0x39] = (bVar4 >> 1 & 1) * auVar27[0x39];
        auVar29[0x3a] = (bVar4 >> 2 & 1) * auVar27[0x3a];
        auVar29[0x3b] = (bVar4 >> 3 & 1) * auVar27[0x3b];
        auVar29[0x3c] = (bVar4 >> 4 & 1) * auVar27[0x3c];
        auVar29[0x3d] = (bVar4 >> 5 & 1) * auVar27[0x3d];
        auVar29[0x3e] = (bVar4 >> 6 & 1) * auVar27[0x3e];
        auVar29[0x3f] = -((char)bVar4 >> 7) * auVar27[0x3f];
        auVar26 = vpshufb_avx512bw(auVar29,auVar26);
        vpxorq_avx512f(auVar26,auVar46);
        vmovdqu64_avx512f(*(undefined1 (*) [64])(param_1 + 0x120));
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (uVar19 < 6) {
        uVar3 = *(ulong *)(&ONEf + lVar1);
        auVar27 = vmovdqu8_avx512bw(*param_2);
        auVar22 = vmovdqu8_avx512vl(*(undefined1 (*) [16])param_2[1]);
        auVar21[1] = ((byte)(uVar3 >> 1) & 1) * auVar22[1];
        auVar21[0] = ((byte)uVar3 & 1) * auVar22[0];
        auVar21[2] = ((byte)(uVar3 >> 2) & 1) * auVar22[2];
        auVar21[3] = ((byte)(uVar3 >> 3) & 1) * auVar22[3];
        auVar21[4] = ((byte)(uVar3 >> 4) & 1) * auVar22[4];
        auVar21[5] = ((byte)(uVar3 >> 5) & 1) * auVar22[5];
        auVar21[6] = ((byte)(uVar3 >> 6) & 1) * auVar22[6];
        auVar21[7] = ((byte)(uVar3 >> 7) & 1) * auVar22[7];
        auVar21[8] = ((byte)(uVar3 >> 8) & 1) * auVar22[8];
        auVar21[9] = ((byte)(uVar3 >> 9) & 1) * auVar22[9];
        auVar21[10] = ((byte)(uVar3 >> 10) & 1) * auVar22[10];
        auVar21[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar22[0xb];
        auVar21[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar22[0xc];
        auVar21[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar22[0xd];
        auVar21[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar22[0xe];
        auVar21[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar22[0xf];
        auVar26 = vpshufb_avx512bw(auVar27,auVar26);
        vpshufb_avx512vl(auVar21,auVar20);
        vpxorq_avx512f(auVar26,auVar46);
        vmovdqu64_avx512f(*(undefined1 (*) [64])(param_1 + 0x110));
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (uVar19 == 6) {
        uVar3 = *(ulong *)(&ONEf + lVar1);
        auVar27 = vmovdqu8_avx512bw(*param_2);
        auVar41._32_32_ = auVar27._32_32_;
        auVar41._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])param_2[1]);
        auVar30[1] = ((byte)(uVar3 >> 1) & 1) * SUB321(auVar41._0_32_,1);
        auVar30[0] = ((byte)uVar3 & 1) * SUB321(auVar41._0_32_,0);
        auVar30[2] = ((byte)(uVar3 >> 2) & 1) * SUB321(auVar41._0_32_,2);
        auVar30[3] = ((byte)(uVar3 >> 3) & 1) * SUB321(auVar41._0_32_,3);
        auVar30[4] = ((byte)(uVar3 >> 4) & 1) * SUB321(auVar41._0_32_,4);
        auVar30[5] = ((byte)(uVar3 >> 5) & 1) * SUB321(auVar41._0_32_,5);
        auVar30[6] = ((byte)(uVar3 >> 6) & 1) * SUB321(auVar41._0_32_,6);
        auVar30[7] = ((byte)(uVar3 >> 7) & 1) * SUB321(auVar41._0_32_,7);
        auVar30[8] = ((byte)(uVar3 >> 8) & 1) * SUB321(auVar41._0_32_,8);
        auVar30[9] = ((byte)(uVar3 >> 9) & 1) * SUB321(auVar41._0_32_,9);
        auVar30[10] = ((byte)(uVar3 >> 10) & 1) * SUB321(auVar41._0_32_,10);
        auVar30[0xb] = ((byte)(uVar3 >> 0xb) & 1) * SUB321(auVar41._0_32_,0xb);
        auVar30[0xc] = ((byte)(uVar3 >> 0xc) & 1) * SUB321(auVar41._0_32_,0xc);
        auVar30[0xd] = ((byte)(uVar3 >> 0xd) & 1) * SUB321(auVar41._0_32_,0xd);
        auVar30[0xe] = ((byte)(uVar3 >> 0xe) & 1) * SUB321(auVar41._0_32_,0xe);
        auVar30[0xf] = ((byte)(uVar3 >> 0xf) & 1) * SUB321(auVar41._0_32_,0xf);
        auVar30[0x10] = ((byte)(uVar3 >> 0x10) & 1) * SUB321(auVar41._0_32_,0x10);
        auVar30[0x11] = ((byte)(uVar3 >> 0x11) & 1) * SUB321(auVar41._0_32_,0x11);
        auVar30[0x12] = ((byte)(uVar3 >> 0x12) & 1) * SUB321(auVar41._0_32_,0x12);
        auVar30[0x13] = ((byte)(uVar3 >> 0x13) & 1) * SUB321(auVar41._0_32_,0x13);
        auVar30[0x14] = ((byte)(uVar3 >> 0x14) & 1) * SUB321(auVar41._0_32_,0x14);
        auVar30[0x15] = ((byte)(uVar3 >> 0x15) & 1) * SUB321(auVar41._0_32_,0x15);
        auVar30[0x16] = ((byte)(uVar3 >> 0x16) & 1) * SUB321(auVar41._0_32_,0x16);
        auVar30[0x17] = ((byte)(uVar3 >> 0x17) & 1) * SUB321(auVar41._0_32_,0x17);
        auVar30[0x18] = ((byte)(uVar3 >> 0x18) & 1) * SUB321(auVar41._0_32_,0x18);
        auVar30[0x19] = ((byte)(uVar3 >> 0x19) & 1) * SUB321(auVar41._0_32_,0x19);
        auVar30[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * SUB321(auVar41._0_32_,0x1a);
        auVar30[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * SUB321(auVar41._0_32_,0x1b);
        auVar30[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * SUB321(auVar41._0_32_,0x1c);
        auVar30._30_34_ = auVar41._30_34_;
        auVar30[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * SUB321(auVar41._0_32_,0x1d);
        auVar26 = vpshufb_avx512bw(auVar27,auVar26);
        vpshufb_avx512vl(auVar30._0_32_,auVar25);
        vpxorq_avx512f(auVar26,auVar46);
        vmovdqu64_avx512f(*(undefined1 (*) [64])(param_1 + 0x100));
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (uVar19 < 8) {
        uVar3 = *(ulong *)(&ONEf + lVar1);
        auVar27 = vmovdqu8_avx512bw(*param_2);
        auVar28 = vmovdqu8_avx512bw(param_2[1]);
        auVar40[1] = ((byte)(uVar3 >> 1) & 1) * auVar28[1];
        auVar40[0] = ((byte)uVar3 & 1) * auVar28[0];
        auVar40[2] = ((byte)(uVar3 >> 2) & 1) * auVar28[2];
        auVar40[3] = ((byte)(uVar3 >> 3) & 1) * auVar28[3];
        auVar40[4] = ((byte)(uVar3 >> 4) & 1) * auVar28[4];
        auVar40[5] = ((byte)(uVar3 >> 5) & 1) * auVar28[5];
        auVar40[6] = ((byte)(uVar3 >> 6) & 1) * auVar28[6];
        auVar40[7] = ((byte)(uVar3 >> 7) & 1) * auVar28[7];
        auVar40[8] = ((byte)(uVar3 >> 8) & 1) * auVar28[8];
        auVar40[9] = ((byte)(uVar3 >> 9) & 1) * auVar28[9];
        auVar40[10] = ((byte)(uVar3 >> 10) & 1) * auVar28[10];
        auVar40[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar28[0xb];
        auVar40[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar28[0xc];
        auVar40[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar28[0xd];
        auVar40[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar28[0xe];
        auVar40[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar28[0xf];
        auVar40[0x10] = ((byte)(uVar3 >> 0x10) & 1) * auVar28[0x10];
        auVar40[0x11] = ((byte)(uVar3 >> 0x11) & 1) * auVar28[0x11];
        auVar40[0x12] = ((byte)(uVar3 >> 0x12) & 1) * auVar28[0x12];
        auVar40[0x13] = ((byte)(uVar3 >> 0x13) & 1) * auVar28[0x13];
        auVar40[0x14] = ((byte)(uVar3 >> 0x14) & 1) * auVar28[0x14];
        auVar40[0x15] = ((byte)(uVar3 >> 0x15) & 1) * auVar28[0x15];
        auVar40[0x16] = ((byte)(uVar3 >> 0x16) & 1) * auVar28[0x16];
        auVar40[0x17] = ((byte)(uVar3 >> 0x17) & 1) * auVar28[0x17];
        auVar40[0x18] = ((byte)(uVar3 >> 0x18) & 1) * auVar28[0x18];
        auVar40[0x19] = ((byte)(uVar3 >> 0x19) & 1) * auVar28[0x19];
        auVar40[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * auVar28[0x1a];
        auVar40[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * auVar28[0x1b];
        auVar40[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * auVar28[0x1c];
        auVar40[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * auVar28[0x1d];
        auVar40[0x1e] = ((byte)(uVar3 >> 0x1e) & 1) * auVar28[0x1e];
        auVar40[0x1f] = ((byte)(uVar3 >> 0x1f) & 1) * auVar28[0x1f];
        auVar40[0x20] = ((byte)(uVar3 >> 0x20) & 1) * auVar28[0x20];
        auVar40[0x21] = ((byte)(uVar3 >> 0x21) & 1) * auVar28[0x21];
        auVar40[0x22] = ((byte)(uVar3 >> 0x22) & 1) * auVar28[0x22];
        auVar40[0x23] = ((byte)(uVar3 >> 0x23) & 1) * auVar28[0x23];
        auVar40[0x24] = ((byte)(uVar3 >> 0x24) & 1) * auVar28[0x24];
        auVar40[0x25] = ((byte)(uVar3 >> 0x25) & 1) * auVar28[0x25];
        auVar40[0x26] = ((byte)(uVar3 >> 0x26) & 1) * auVar28[0x26];
        auVar40[0x27] = ((byte)(uVar3 >> 0x27) & 1) * auVar28[0x27];
        auVar40[0x28] = ((byte)(uVar3 >> 0x28) & 1) * auVar28[0x28];
        auVar40[0x29] = ((byte)(uVar3 >> 0x29) & 1) * auVar28[0x29];
        auVar40[0x2a] = ((byte)(uVar3 >> 0x2a) & 1) * auVar28[0x2a];
        auVar40[0x2b] = ((byte)(uVar3 >> 0x2b) & 1) * auVar28[0x2b];
        auVar40[0x2c] = ((byte)(uVar3 >> 0x2c) & 1) * auVar28[0x2c];
        auVar40[0x2d] = ((byte)(uVar3 >> 0x2d) & 1) * auVar28[0x2d];
        auVar40[0x2e] = ((byte)(uVar3 >> 0x2e) & 1) * auVar28[0x2e];
        auVar40[0x2f] = ((byte)(uVar3 >> 0x2f) & 1) * auVar28[0x2f];
        auVar40[0x30] = ((byte)(uVar3 >> 0x30) & 1) * auVar28[0x30];
        auVar40[0x31] = ((byte)(uVar3 >> 0x31) & 1) * auVar28[0x31];
        auVar40[0x32] = ((byte)(uVar3 >> 0x32) & 1) * auVar28[0x32];
        auVar40[0x33] = ((byte)(uVar3 >> 0x33) & 1) * auVar28[0x33];
        auVar40[0x34] = ((byte)(uVar3 >> 0x34) & 1) * auVar28[0x34];
        auVar40[0x35] = ((byte)(uVar3 >> 0x35) & 1) * auVar28[0x35];
        auVar40[0x36] = ((byte)(uVar3 >> 0x36) & 1) * auVar28[0x36];
        auVar40[0x37] = ((byte)(uVar3 >> 0x37) & 1) * auVar28[0x37];
        bVar4 = (byte)(uVar3 >> 0x38);
        auVar40[0x38] = (bVar4 & 1) * auVar28[0x38];
        auVar40[0x39] = (bVar4 >> 1 & 1) * auVar28[0x39];
        auVar40[0x3a] = (bVar4 >> 2 & 1) * auVar28[0x3a];
        auVar40[0x3b] = (bVar4 >> 3 & 1) * auVar28[0x3b];
        auVar40[0x3c] = (bVar4 >> 4 & 1) * auVar28[0x3c];
        auVar40[0x3d] = (bVar4 >> 5 & 1) * auVar28[0x3d];
        auVar40[0x3e] = (bVar4 >> 6 & 1) * auVar28[0x3e];
        auVar40[0x3f] = -((char)bVar4 >> 7) * auVar28[0x3f];
        auVar27 = vpshufb_avx512bw(auVar27,auVar26);
        vpshufb_avx512bw(auVar40,auVar26);
        vpxorq_avx512f(auVar27,auVar46);
        vmovdqu64_avx512f(*(undefined1 (*) [64])(param_1 + 0xf0));
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (uVar19 == 8) {
        uVar3 = *(ulong *)(&ONEf + lVar1);
        auVar27 = vmovdqu8_avx512bw(*param_2);
        auVar28 = vmovdqu8_avx512bw(param_2[1]);
        auVar39[1] = ((byte)(uVar3 >> 1) & 1) * auVar28[1];
        auVar39[0] = ((byte)uVar3 & 1) * auVar28[0];
        auVar39[2] = ((byte)(uVar3 >> 2) & 1) * auVar28[2];
        auVar39[3] = ((byte)(uVar3 >> 3) & 1) * auVar28[3];
        auVar39[4] = ((byte)(uVar3 >> 4) & 1) * auVar28[4];
        auVar39[5] = ((byte)(uVar3 >> 5) & 1) * auVar28[5];
        auVar39[6] = ((byte)(uVar3 >> 6) & 1) * auVar28[6];
        auVar39[7] = ((byte)(uVar3 >> 7) & 1) * auVar28[7];
        auVar39[8] = ((byte)(uVar3 >> 8) & 1) * auVar28[8];
        auVar39[9] = ((byte)(uVar3 >> 9) & 1) * auVar28[9];
        auVar39[10] = ((byte)(uVar3 >> 10) & 1) * auVar28[10];
        auVar39[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar28[0xb];
        auVar39[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar28[0xc];
        auVar39[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar28[0xd];
        auVar39[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar28[0xe];
        auVar39[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar28[0xf];
        auVar39[0x10] = ((byte)(uVar3 >> 0x10) & 1) * auVar28[0x10];
        auVar39[0x11] = ((byte)(uVar3 >> 0x11) & 1) * auVar28[0x11];
        auVar39[0x12] = ((byte)(uVar3 >> 0x12) & 1) * auVar28[0x12];
        auVar39[0x13] = ((byte)(uVar3 >> 0x13) & 1) * auVar28[0x13];
        auVar39[0x14] = ((byte)(uVar3 >> 0x14) & 1) * auVar28[0x14];
        auVar39[0x15] = ((byte)(uVar3 >> 0x15) & 1) * auVar28[0x15];
        auVar39[0x16] = ((byte)(uVar3 >> 0x16) & 1) * auVar28[0x16];
        auVar39[0x17] = ((byte)(uVar3 >> 0x17) & 1) * auVar28[0x17];
        auVar39[0x18] = ((byte)(uVar3 >> 0x18) & 1) * auVar28[0x18];
        auVar39[0x19] = ((byte)(uVar3 >> 0x19) & 1) * auVar28[0x19];
        auVar39[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * auVar28[0x1a];
        auVar39[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * auVar28[0x1b];
        auVar39[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * auVar28[0x1c];
        auVar39[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * auVar28[0x1d];
        auVar39[0x1e] = ((byte)(uVar3 >> 0x1e) & 1) * auVar28[0x1e];
        auVar39[0x1f] = ((byte)(uVar3 >> 0x1f) & 1) * auVar28[0x1f];
        auVar39[0x20] = ((byte)(uVar3 >> 0x20) & 1) * auVar28[0x20];
        auVar39[0x21] = ((byte)(uVar3 >> 0x21) & 1) * auVar28[0x21];
        auVar39[0x22] = ((byte)(uVar3 >> 0x22) & 1) * auVar28[0x22];
        auVar39[0x23] = ((byte)(uVar3 >> 0x23) & 1) * auVar28[0x23];
        auVar39[0x24] = ((byte)(uVar3 >> 0x24) & 1) * auVar28[0x24];
        auVar39[0x25] = ((byte)(uVar3 >> 0x25) & 1) * auVar28[0x25];
        auVar39[0x26] = ((byte)(uVar3 >> 0x26) & 1) * auVar28[0x26];
        auVar39[0x27] = ((byte)(uVar3 >> 0x27) & 1) * auVar28[0x27];
        auVar39[0x28] = ((byte)(uVar3 >> 0x28) & 1) * auVar28[0x28];
        auVar39[0x29] = ((byte)(uVar3 >> 0x29) & 1) * auVar28[0x29];
        auVar39[0x2a] = ((byte)(uVar3 >> 0x2a) & 1) * auVar28[0x2a];
        auVar39[0x2b] = ((byte)(uVar3 >> 0x2b) & 1) * auVar28[0x2b];
        auVar39[0x2c] = ((byte)(uVar3 >> 0x2c) & 1) * auVar28[0x2c];
        auVar39[0x2d] = ((byte)(uVar3 >> 0x2d) & 1) * auVar28[0x2d];
        auVar39[0x2e] = ((byte)(uVar3 >> 0x2e) & 1) * auVar28[0x2e];
        auVar39[0x2f] = ((byte)(uVar3 >> 0x2f) & 1) * auVar28[0x2f];
        auVar39[0x30] = ((byte)(uVar3 >> 0x30) & 1) * auVar28[0x30];
        auVar39[0x31] = ((byte)(uVar3 >> 0x31) & 1) * auVar28[0x31];
        auVar39[0x32] = ((byte)(uVar3 >> 0x32) & 1) * auVar28[0x32];
        auVar39[0x33] = ((byte)(uVar3 >> 0x33) & 1) * auVar28[0x33];
        auVar39[0x34] = ((byte)(uVar3 >> 0x34) & 1) * auVar28[0x34];
        auVar39[0x35] = ((byte)(uVar3 >> 0x35) & 1) * auVar28[0x35];
        auVar39[0x36] = ((byte)(uVar3 >> 0x36) & 1) * auVar28[0x36];
        auVar39[0x37] = ((byte)(uVar3 >> 0x37) & 1) * auVar28[0x37];
        bVar4 = (byte)(uVar3 >> 0x38);
        auVar39[0x38] = (bVar4 & 1) * auVar28[0x38];
        auVar39[0x39] = (bVar4 >> 1 & 1) * auVar28[0x39];
        auVar39[0x3a] = (bVar4 >> 2 & 1) * auVar28[0x3a];
        auVar39[0x3b] = (bVar4 >> 3 & 1) * auVar28[0x3b];
        auVar39[0x3c] = (bVar4 >> 4 & 1) * auVar28[0x3c];
        auVar39[0x3d] = (bVar4 >> 5 & 1) * auVar28[0x3d];
        auVar39[0x3e] = (bVar4 >> 6 & 1) * auVar28[0x3e];
        auVar39[0x3f] = -((char)bVar4 >> 7) * auVar28[0x3f];
        auVar27 = vpshufb_avx512bw(auVar27,auVar26);
        vpshufb_avx512bw(auVar39,auVar26);
        vpxorq_avx512f(auVar27,auVar46);
        vmovdqu64_avx512f(*(undefined1 (*) [64])(param_1 + 0xe0));
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (9 < uVar19) {
        if (uVar19 == 10) {
          uVar3 = *(ulong *)(&DAT_001a9e40 + lVar1);
          auVar27 = vmovdqu8_avx512bw(*param_2);
          auVar28 = vmovdqu8_avx512bw(param_2[1]);
          auVar37._32_32_ = auVar28._32_32_;
          auVar37._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])param_2[2]);
          auVar38[1] = ((byte)(uVar3 >> 1) & 1) * SUB321(auVar37._0_32_,1);
          auVar38[0] = ((byte)uVar3 & 1) * SUB321(auVar37._0_32_,0);
          auVar38[2] = ((byte)(uVar3 >> 2) & 1) * SUB321(auVar37._0_32_,2);
          auVar38[3] = ((byte)(uVar3 >> 3) & 1) * SUB321(auVar37._0_32_,3);
          auVar38[4] = ((byte)(uVar3 >> 4) & 1) * SUB321(auVar37._0_32_,4);
          auVar38[5] = ((byte)(uVar3 >> 5) & 1) * SUB321(auVar37._0_32_,5);
          auVar38[6] = ((byte)(uVar3 >> 6) & 1) * SUB321(auVar37._0_32_,6);
          auVar38[7] = ((byte)(uVar3 >> 7) & 1) * SUB321(auVar37._0_32_,7);
          auVar38[8] = ((byte)(uVar3 >> 8) & 1) * SUB321(auVar37._0_32_,8);
          auVar38[9] = ((byte)(uVar3 >> 9) & 1) * SUB321(auVar37._0_32_,9);
          auVar38[10] = ((byte)(uVar3 >> 10) & 1) * SUB321(auVar37._0_32_,10);
          auVar38[0xb] = ((byte)(uVar3 >> 0xb) & 1) * SUB321(auVar37._0_32_,0xb);
          auVar38[0xc] = ((byte)(uVar3 >> 0xc) & 1) * SUB321(auVar37._0_32_,0xc);
          auVar38[0xd] = ((byte)(uVar3 >> 0xd) & 1) * SUB321(auVar37._0_32_,0xd);
          auVar38[0xe] = ((byte)(uVar3 >> 0xe) & 1) * SUB321(auVar37._0_32_,0xe);
          auVar38[0xf] = ((byte)(uVar3 >> 0xf) & 1) * SUB321(auVar37._0_32_,0xf);
          auVar38[0x10] = ((byte)(uVar3 >> 0x10) & 1) * SUB321(auVar37._0_32_,0x10);
          auVar38[0x11] = ((byte)(uVar3 >> 0x11) & 1) * SUB321(auVar37._0_32_,0x11);
          auVar38[0x12] = ((byte)(uVar3 >> 0x12) & 1) * SUB321(auVar37._0_32_,0x12);
          auVar38[0x13] = ((byte)(uVar3 >> 0x13) & 1) * SUB321(auVar37._0_32_,0x13);
          auVar38[0x14] = ((byte)(uVar3 >> 0x14) & 1) * SUB321(auVar37._0_32_,0x14);
          auVar38[0x15] = ((byte)(uVar3 >> 0x15) & 1) * SUB321(auVar37._0_32_,0x15);
          auVar38[0x16] = ((byte)(uVar3 >> 0x16) & 1) * SUB321(auVar37._0_32_,0x16);
          auVar38[0x17] = ((byte)(uVar3 >> 0x17) & 1) * SUB321(auVar37._0_32_,0x17);
          auVar38[0x18] = ((byte)(uVar3 >> 0x18) & 1) * SUB321(auVar37._0_32_,0x18);
          auVar38[0x19] = ((byte)(uVar3 >> 0x19) & 1) * SUB321(auVar37._0_32_,0x19);
          auVar38[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * SUB321(auVar37._0_32_,0x1a);
          auVar38[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * SUB321(auVar37._0_32_,0x1b);
          auVar38[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * SUB321(auVar37._0_32_,0x1c);
          auVar38._30_34_ = auVar37._30_34_;
          auVar38[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * SUB321(auVar37._0_32_,0x1d);
          auVar27 = vpshufb_avx512bw(auVar27,auVar26);
          vpshufb_avx512bw(auVar28,auVar26);
          vpshufb_avx512vl(auVar38._0_32_,auVar25);
          vpxorq_avx512f(auVar27,auVar46);
          vmovdqu64_avx512f(*(undefined1 (*) [64])(param_1 + 0xc0));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar19 < 0xc) {
          uVar3 = *(ulong *)(&DAT_001a9e40 + lVar1);
          auVar27 = vmovdqu8_avx512bw(*param_2);
          auVar28 = vmovdqu8_avx512bw(param_2[1]);
          auVar29 = vmovdqu8_avx512bw(param_2[2]);
          auVar36[1] = ((byte)(uVar3 >> 1) & 1) * auVar29[1];
          auVar36[0] = ((byte)uVar3 & 1) * auVar29[0];
          auVar36[2] = ((byte)(uVar3 >> 2) & 1) * auVar29[2];
          auVar36[3] = ((byte)(uVar3 >> 3) & 1) * auVar29[3];
          auVar36[4] = ((byte)(uVar3 >> 4) & 1) * auVar29[4];
          auVar36[5] = ((byte)(uVar3 >> 5) & 1) * auVar29[5];
          auVar36[6] = ((byte)(uVar3 >> 6) & 1) * auVar29[6];
          auVar36[7] = ((byte)(uVar3 >> 7) & 1) * auVar29[7];
          auVar36[8] = ((byte)(uVar3 >> 8) & 1) * auVar29[8];
          auVar36[9] = ((byte)(uVar3 >> 9) & 1) * auVar29[9];
          auVar36[10] = ((byte)(uVar3 >> 10) & 1) * auVar29[10];
          auVar36[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar29[0xb];
          auVar36[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar29[0xc];
          auVar36[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar29[0xd];
          auVar36[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar29[0xe];
          auVar36[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar29[0xf];
          auVar36[0x10] = ((byte)(uVar3 >> 0x10) & 1) * auVar29[0x10];
          auVar36[0x11] = ((byte)(uVar3 >> 0x11) & 1) * auVar29[0x11];
          auVar36[0x12] = ((byte)(uVar3 >> 0x12) & 1) * auVar29[0x12];
          auVar36[0x13] = ((byte)(uVar3 >> 0x13) & 1) * auVar29[0x13];
          auVar36[0x14] = ((byte)(uVar3 >> 0x14) & 1) * auVar29[0x14];
          auVar36[0x15] = ((byte)(uVar3 >> 0x15) & 1) * auVar29[0x15];
          auVar36[0x16] = ((byte)(uVar3 >> 0x16) & 1) * auVar29[0x16];
          auVar36[0x17] = ((byte)(uVar3 >> 0x17) & 1) * auVar29[0x17];
          auVar36[0x18] = ((byte)(uVar3 >> 0x18) & 1) * auVar29[0x18];
          auVar36[0x19] = ((byte)(uVar3 >> 0x19) & 1) * auVar29[0x19];
          auVar36[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * auVar29[0x1a];
          auVar36[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * auVar29[0x1b];
          auVar36[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * auVar29[0x1c];
          auVar36[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * auVar29[0x1d];
          auVar36[0x1e] = ((byte)(uVar3 >> 0x1e) & 1) * auVar29[0x1e];
          auVar36[0x1f] = ((byte)(uVar3 >> 0x1f) & 1) * auVar29[0x1f];
          auVar36[0x20] = ((byte)(uVar3 >> 0x20) & 1) * auVar29[0x20];
          auVar36[0x21] = ((byte)(uVar3 >> 0x21) & 1) * auVar29[0x21];
          auVar36[0x22] = ((byte)(uVar3 >> 0x22) & 1) * auVar29[0x22];
          auVar36[0x23] = ((byte)(uVar3 >> 0x23) & 1) * auVar29[0x23];
          auVar36[0x24] = ((byte)(uVar3 >> 0x24) & 1) * auVar29[0x24];
          auVar36[0x25] = ((byte)(uVar3 >> 0x25) & 1) * auVar29[0x25];
          auVar36[0x26] = ((byte)(uVar3 >> 0x26) & 1) * auVar29[0x26];
          auVar36[0x27] = ((byte)(uVar3 >> 0x27) & 1) * auVar29[0x27];
          auVar36[0x28] = ((byte)(uVar3 >> 0x28) & 1) * auVar29[0x28];
          auVar36[0x29] = ((byte)(uVar3 >> 0x29) & 1) * auVar29[0x29];
          auVar36[0x2a] = ((byte)(uVar3 >> 0x2a) & 1) * auVar29[0x2a];
          auVar36[0x2b] = ((byte)(uVar3 >> 0x2b) & 1) * auVar29[0x2b];
          auVar36[0x2c] = ((byte)(uVar3 >> 0x2c) & 1) * auVar29[0x2c];
          auVar36[0x2d] = ((byte)(uVar3 >> 0x2d) & 1) * auVar29[0x2d];
          auVar36[0x2e] = ((byte)(uVar3 >> 0x2e) & 1) * auVar29[0x2e];
          auVar36[0x2f] = ((byte)(uVar3 >> 0x2f) & 1) * auVar29[0x2f];
          auVar36[0x30] = ((byte)(uVar3 >> 0x30) & 1) * auVar29[0x30];
          auVar36[0x31] = ((byte)(uVar3 >> 0x31) & 1) * auVar29[0x31];
          auVar36[0x32] = ((byte)(uVar3 >> 0x32) & 1) * auVar29[0x32];
          auVar36[0x33] = ((byte)(uVar3 >> 0x33) & 1) * auVar29[0x33];
          auVar36[0x34] = ((byte)(uVar3 >> 0x34) & 1) * auVar29[0x34];
          auVar36[0x35] = ((byte)(uVar3 >> 0x35) & 1) * auVar29[0x35];
          auVar36[0x36] = ((byte)(uVar3 >> 0x36) & 1) * auVar29[0x36];
          auVar36[0x37] = ((byte)(uVar3 >> 0x37) & 1) * auVar29[0x37];
          bVar4 = (byte)(uVar3 >> 0x38);
          auVar36[0x38] = (bVar4 & 1) * auVar29[0x38];
          auVar36[0x39] = (bVar4 >> 1 & 1) * auVar29[0x39];
          auVar36[0x3a] = (bVar4 >> 2 & 1) * auVar29[0x3a];
          auVar36[0x3b] = (bVar4 >> 3 & 1) * auVar29[0x3b];
          auVar36[0x3c] = (bVar4 >> 4 & 1) * auVar29[0x3c];
          auVar36[0x3d] = (bVar4 >> 5 & 1) * auVar29[0x3d];
          auVar36[0x3e] = (bVar4 >> 6 & 1) * auVar29[0x3e];
          auVar36[0x3f] = -((char)bVar4 >> 7) * auVar29[0x3f];
          auVar27 = vpshufb_avx512bw(auVar27,auVar26);
          vpshufb_avx512bw(auVar28,auVar26);
          vpshufb_avx512bw(auVar36,auVar26);
          vpxorq_avx512f(auVar27,auVar46);
          vmovdqu64_avx512f(*(undefined1 (*) [64])(param_1 + 0xb0));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar19 == 0xc) {
          uVar3 = *(ulong *)(&DAT_001a9e40 + lVar1);
          auVar27 = vmovdqu8_avx512bw(*param_2);
          auVar28 = vmovdqu8_avx512bw(param_2[1]);
          auVar29 = vmovdqu8_avx512bw(param_2[2]);
          auVar35[1] = ((byte)(uVar3 >> 1) & 1) * auVar29[1];
          auVar35[0] = ((byte)uVar3 & 1) * auVar29[0];
          auVar35[2] = ((byte)(uVar3 >> 2) & 1) * auVar29[2];
          auVar35[3] = ((byte)(uVar3 >> 3) & 1) * auVar29[3];
          auVar35[4] = ((byte)(uVar3 >> 4) & 1) * auVar29[4];
          auVar35[5] = ((byte)(uVar3 >> 5) & 1) * auVar29[5];
          auVar35[6] = ((byte)(uVar3 >> 6) & 1) * auVar29[6];
          auVar35[7] = ((byte)(uVar3 >> 7) & 1) * auVar29[7];
          auVar35[8] = ((byte)(uVar3 >> 8) & 1) * auVar29[8];
          auVar35[9] = ((byte)(uVar3 >> 9) & 1) * auVar29[9];
          auVar35[10] = ((byte)(uVar3 >> 10) & 1) * auVar29[10];
          auVar35[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar29[0xb];
          auVar35[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar29[0xc];
          auVar35[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar29[0xd];
          auVar35[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar29[0xe];
          auVar35[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar29[0xf];
          auVar35[0x10] = ((byte)(uVar3 >> 0x10) & 1) * auVar29[0x10];
          auVar35[0x11] = ((byte)(uVar3 >> 0x11) & 1) * auVar29[0x11];
          auVar35[0x12] = ((byte)(uVar3 >> 0x12) & 1) * auVar29[0x12];
          auVar35[0x13] = ((byte)(uVar3 >> 0x13) & 1) * auVar29[0x13];
          auVar35[0x14] = ((byte)(uVar3 >> 0x14) & 1) * auVar29[0x14];
          auVar35[0x15] = ((byte)(uVar3 >> 0x15) & 1) * auVar29[0x15];
          auVar35[0x16] = ((byte)(uVar3 >> 0x16) & 1) * auVar29[0x16];
          auVar35[0x17] = ((byte)(uVar3 >> 0x17) & 1) * auVar29[0x17];
          auVar35[0x18] = ((byte)(uVar3 >> 0x18) & 1) * auVar29[0x18];
          auVar35[0x19] = ((byte)(uVar3 >> 0x19) & 1) * auVar29[0x19];
          auVar35[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * auVar29[0x1a];
          auVar35[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * auVar29[0x1b];
          auVar35[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * auVar29[0x1c];
          auVar35[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * auVar29[0x1d];
          auVar35[0x1e] = ((byte)(uVar3 >> 0x1e) & 1) * auVar29[0x1e];
          auVar35[0x1f] = ((byte)(uVar3 >> 0x1f) & 1) * auVar29[0x1f];
          auVar35[0x20] = ((byte)(uVar3 >> 0x20) & 1) * auVar29[0x20];
          auVar35[0x21] = ((byte)(uVar3 >> 0x21) & 1) * auVar29[0x21];
          auVar35[0x22] = ((byte)(uVar3 >> 0x22) & 1) * auVar29[0x22];
          auVar35[0x23] = ((byte)(uVar3 >> 0x23) & 1) * auVar29[0x23];
          auVar35[0x24] = ((byte)(uVar3 >> 0x24) & 1) * auVar29[0x24];
          auVar35[0x25] = ((byte)(uVar3 >> 0x25) & 1) * auVar29[0x25];
          auVar35[0x26] = ((byte)(uVar3 >> 0x26) & 1) * auVar29[0x26];
          auVar35[0x27] = ((byte)(uVar3 >> 0x27) & 1) * auVar29[0x27];
          auVar35[0x28] = ((byte)(uVar3 >> 0x28) & 1) * auVar29[0x28];
          auVar35[0x29] = ((byte)(uVar3 >> 0x29) & 1) * auVar29[0x29];
          auVar35[0x2a] = ((byte)(uVar3 >> 0x2a) & 1) * auVar29[0x2a];
          auVar35[0x2b] = ((byte)(uVar3 >> 0x2b) & 1) * auVar29[0x2b];
          auVar35[0x2c] = ((byte)(uVar3 >> 0x2c) & 1) * auVar29[0x2c];
          auVar35[0x2d] = ((byte)(uVar3 >> 0x2d) & 1) * auVar29[0x2d];
          auVar35[0x2e] = ((byte)(uVar3 >> 0x2e) & 1) * auVar29[0x2e];
          auVar35[0x2f] = ((byte)(uVar3 >> 0x2f) & 1) * auVar29[0x2f];
          auVar35[0x30] = ((byte)(uVar3 >> 0x30) & 1) * auVar29[0x30];
          auVar35[0x31] = ((byte)(uVar3 >> 0x31) & 1) * auVar29[0x31];
          auVar35[0x32] = ((byte)(uVar3 >> 0x32) & 1) * auVar29[0x32];
          auVar35[0x33] = ((byte)(uVar3 >> 0x33) & 1) * auVar29[0x33];
          auVar35[0x34] = ((byte)(uVar3 >> 0x34) & 1) * auVar29[0x34];
          auVar35[0x35] = ((byte)(uVar3 >> 0x35) & 1) * auVar29[0x35];
          auVar35[0x36] = ((byte)(uVar3 >> 0x36) & 1) * auVar29[0x36];
          auVar35[0x37] = ((byte)(uVar3 >> 0x37) & 1) * auVar29[0x37];
          bVar4 = (byte)(uVar3 >> 0x38);
          auVar35[0x38] = (bVar4 & 1) * auVar29[0x38];
          auVar35[0x39] = (bVar4 >> 1 & 1) * auVar29[0x39];
          auVar35[0x3a] = (bVar4 >> 2 & 1) * auVar29[0x3a];
          auVar35[0x3b] = (bVar4 >> 3 & 1) * auVar29[0x3b];
          auVar35[0x3c] = (bVar4 >> 4 & 1) * auVar29[0x3c];
          auVar35[0x3d] = (bVar4 >> 5 & 1) * auVar29[0x3d];
          auVar35[0x3e] = (bVar4 >> 6 & 1) * auVar29[0x3e];
          auVar35[0x3f] = -((char)bVar4 >> 7) * auVar29[0x3f];
          auVar27 = vpshufb_avx512bw(auVar27,auVar26);
          vpshufb_avx512bw(auVar28,auVar26);
          vpshufb_avx512bw(auVar35,auVar26);
          vpxorq_avx512f(auVar27,auVar46);
          vmovdqu64_avx512f(*(undefined1 (*) [64])(param_1 + 0xa0));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (0xd < uVar19) {
          if (uVar19 == 0xe) {
            uVar3 = *(ulong *)(&DAT_001a9c40 + lVar1);
            auVar27 = vmovdqu8_avx512bw(*param_2);
            auVar28 = vmovdqu8_avx512bw(param_2[1]);
            auVar29 = vmovdqu8_avx512bw(param_2[2]);
            auVar33._32_32_ = auVar29._32_32_;
            auVar33._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])param_2[3]);
            auVar34[1] = ((byte)(uVar3 >> 1) & 1) * SUB321(auVar33._0_32_,1);
            auVar34[0] = ((byte)uVar3 & 1) * SUB321(auVar33._0_32_,0);
            auVar34[2] = ((byte)(uVar3 >> 2) & 1) * SUB321(auVar33._0_32_,2);
            auVar34[3] = ((byte)(uVar3 >> 3) & 1) * SUB321(auVar33._0_32_,3);
            auVar34[4] = ((byte)(uVar3 >> 4) & 1) * SUB321(auVar33._0_32_,4);
            auVar34[5] = ((byte)(uVar3 >> 5) & 1) * SUB321(auVar33._0_32_,5);
            auVar34[6] = ((byte)(uVar3 >> 6) & 1) * SUB321(auVar33._0_32_,6);
            auVar34[7] = ((byte)(uVar3 >> 7) & 1) * SUB321(auVar33._0_32_,7);
            auVar34[8] = ((byte)(uVar3 >> 8) & 1) * SUB321(auVar33._0_32_,8);
            auVar34[9] = ((byte)(uVar3 >> 9) & 1) * SUB321(auVar33._0_32_,9);
            auVar34[10] = ((byte)(uVar3 >> 10) & 1) * SUB321(auVar33._0_32_,10);
            auVar34[0xb] = ((byte)(uVar3 >> 0xb) & 1) * SUB321(auVar33._0_32_,0xb);
            auVar34[0xc] = ((byte)(uVar3 >> 0xc) & 1) * SUB321(auVar33._0_32_,0xc);
            auVar34[0xd] = ((byte)(uVar3 >> 0xd) & 1) * SUB321(auVar33._0_32_,0xd);
            auVar34[0xe] = ((byte)(uVar3 >> 0xe) & 1) * SUB321(auVar33._0_32_,0xe);
            auVar34[0xf] = ((byte)(uVar3 >> 0xf) & 1) * SUB321(auVar33._0_32_,0xf);
            auVar34[0x10] = ((byte)(uVar3 >> 0x10) & 1) * SUB321(auVar33._0_32_,0x10);
            auVar34[0x11] = ((byte)(uVar3 >> 0x11) & 1) * SUB321(auVar33._0_32_,0x11);
            auVar34[0x12] = ((byte)(uVar3 >> 0x12) & 1) * SUB321(auVar33._0_32_,0x12);
            auVar34[0x13] = ((byte)(uVar3 >> 0x13) & 1) * SUB321(auVar33._0_32_,0x13);
            auVar34[0x14] = ((byte)(uVar3 >> 0x14) & 1) * SUB321(auVar33._0_32_,0x14);
            auVar34[0x15] = ((byte)(uVar3 >> 0x15) & 1) * SUB321(auVar33._0_32_,0x15);
            auVar34[0x16] = ((byte)(uVar3 >> 0x16) & 1) * SUB321(auVar33._0_32_,0x16);
            auVar34[0x17] = ((byte)(uVar3 >> 0x17) & 1) * SUB321(auVar33._0_32_,0x17);
            auVar34[0x18] = ((byte)(uVar3 >> 0x18) & 1) * SUB321(auVar33._0_32_,0x18);
            auVar34[0x19] = ((byte)(uVar3 >> 0x19) & 1) * SUB321(auVar33._0_32_,0x19);
            auVar34[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * SUB321(auVar33._0_32_,0x1a);
            auVar34[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * SUB321(auVar33._0_32_,0x1b);
            auVar34[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * SUB321(auVar33._0_32_,0x1c);
            auVar34._30_34_ = auVar33._30_34_;
            auVar34[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * SUB321(auVar33._0_32_,0x1d);
            auVar27 = vpshufb_avx512bw(auVar27,auVar26);
            vpshufb_avx512bw(auVar28,auVar26);
            vpshufb_avx512bw(auVar29,auVar26);
            vpshufb_avx512vl(auVar34._0_32_,auVar25);
            vpxorq_avx512f(auVar27,auVar46);
            vmovdqu64_avx512f(*(undefined1 (*) [64])(param_1 + 0x80));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar19 != 0xf) {
            uVar3 = *(ulong *)(&DAT_001a9c40 + lVar1);
            auVar27 = vmovdqu8_avx512bw(*param_2);
            auVar28 = vmovdqu8_avx512bw(param_2[1]);
            auVar29 = vmovdqu8_avx512bw(param_2[2]);
            auVar30 = vmovdqu8_avx512bw(param_2[3]);
            auVar31[1] = ((byte)(uVar3 >> 1) & 1) * auVar30[1];
            auVar31[0] = ((byte)uVar3 & 1) * auVar30[0];
            auVar31[2] = ((byte)(uVar3 >> 2) & 1) * auVar30[2];
            auVar31[3] = ((byte)(uVar3 >> 3) & 1) * auVar30[3];
            auVar31[4] = ((byte)(uVar3 >> 4) & 1) * auVar30[4];
            auVar31[5] = ((byte)(uVar3 >> 5) & 1) * auVar30[5];
            auVar31[6] = ((byte)(uVar3 >> 6) & 1) * auVar30[6];
            auVar31[7] = ((byte)(uVar3 >> 7) & 1) * auVar30[7];
            auVar31[8] = ((byte)(uVar3 >> 8) & 1) * auVar30[8];
            auVar31[9] = ((byte)(uVar3 >> 9) & 1) * auVar30[9];
            auVar31[10] = ((byte)(uVar3 >> 10) & 1) * auVar30[10];
            auVar31[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar30[0xb];
            auVar31[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar30[0xc];
            auVar31[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar30[0xd];
            auVar31[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar30[0xe];
            auVar31[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar30[0xf];
            auVar31[0x10] = ((byte)(uVar3 >> 0x10) & 1) * auVar30[0x10];
            auVar31[0x11] = ((byte)(uVar3 >> 0x11) & 1) * auVar30[0x11];
            auVar31[0x12] = ((byte)(uVar3 >> 0x12) & 1) * auVar30[0x12];
            auVar31[0x13] = ((byte)(uVar3 >> 0x13) & 1) * auVar30[0x13];
            auVar31[0x14] = ((byte)(uVar3 >> 0x14) & 1) * auVar30[0x14];
            auVar31[0x15] = ((byte)(uVar3 >> 0x15) & 1) * auVar30[0x15];
            auVar31[0x16] = ((byte)(uVar3 >> 0x16) & 1) * auVar30[0x16];
            auVar31[0x17] = ((byte)(uVar3 >> 0x17) & 1) * auVar30[0x17];
            auVar31[0x18] = ((byte)(uVar3 >> 0x18) & 1) * auVar30[0x18];
            auVar31[0x19] = ((byte)(uVar3 >> 0x19) & 1) * auVar30[0x19];
            auVar31[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * auVar30[0x1a];
            auVar31[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * auVar30[0x1b];
            auVar31[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * auVar30[0x1c];
            auVar31[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * auVar30[0x1d];
            auVar31[0x1e] = ((byte)(uVar3 >> 0x1e) & 1) * auVar30[0x1e];
            auVar31[0x1f] = ((byte)(uVar3 >> 0x1f) & 1) * auVar30[0x1f];
            auVar31[0x20] = ((byte)(uVar3 >> 0x20) & 1) * auVar30[0x20];
            auVar31[0x21] = ((byte)(uVar3 >> 0x21) & 1) * auVar30[0x21];
            auVar31[0x22] = ((byte)(uVar3 >> 0x22) & 1) * auVar30[0x22];
            auVar31[0x23] = ((byte)(uVar3 >> 0x23) & 1) * auVar30[0x23];
            auVar31[0x24] = ((byte)(uVar3 >> 0x24) & 1) * auVar30[0x24];
            auVar31[0x25] = ((byte)(uVar3 >> 0x25) & 1) * auVar30[0x25];
            auVar31[0x26] = ((byte)(uVar3 >> 0x26) & 1) * auVar30[0x26];
            auVar31[0x27] = ((byte)(uVar3 >> 0x27) & 1) * auVar30[0x27];
            auVar31[0x28] = ((byte)(uVar3 >> 0x28) & 1) * auVar30[0x28];
            auVar31[0x29] = ((byte)(uVar3 >> 0x29) & 1) * auVar30[0x29];
            auVar31[0x2a] = ((byte)(uVar3 >> 0x2a) & 1) * auVar30[0x2a];
            auVar31[0x2b] = ((byte)(uVar3 >> 0x2b) & 1) * auVar30[0x2b];
            auVar31[0x2c] = ((byte)(uVar3 >> 0x2c) & 1) * auVar30[0x2c];
            auVar31[0x2d] = ((byte)(uVar3 >> 0x2d) & 1) * auVar30[0x2d];
            auVar31[0x2e] = ((byte)(uVar3 >> 0x2e) & 1) * auVar30[0x2e];
            auVar31[0x2f] = ((byte)(uVar3 >> 0x2f) & 1) * auVar30[0x2f];
            auVar31[0x30] = ((byte)(uVar3 >> 0x30) & 1) * auVar30[0x30];
            auVar31[0x31] = ((byte)(uVar3 >> 0x31) & 1) * auVar30[0x31];
            auVar31[0x32] = ((byte)(uVar3 >> 0x32) & 1) * auVar30[0x32];
            auVar31[0x33] = ((byte)(uVar3 >> 0x33) & 1) * auVar30[0x33];
            auVar31[0x34] = ((byte)(uVar3 >> 0x34) & 1) * auVar30[0x34];
            auVar31[0x35] = ((byte)(uVar3 >> 0x35) & 1) * auVar30[0x35];
            auVar31[0x36] = ((byte)(uVar3 >> 0x36) & 1) * auVar30[0x36];
            auVar31[0x37] = ((byte)(uVar3 >> 0x37) & 1) * auVar30[0x37];
            bVar4 = (byte)(uVar3 >> 0x38);
            auVar31[0x38] = (bVar4 & 1) * auVar30[0x38];
            auVar31[0x39] = (bVar4 >> 1 & 1) * auVar30[0x39];
            auVar31[0x3a] = (bVar4 >> 2 & 1) * auVar30[0x3a];
            auVar31[0x3b] = (bVar4 >> 3 & 1) * auVar30[0x3b];
            auVar31[0x3c] = (bVar4 >> 4 & 1) * auVar30[0x3c];
            auVar31[0x3d] = (bVar4 >> 5 & 1) * auVar30[0x3d];
            auVar31[0x3e] = (bVar4 >> 6 & 1) * auVar30[0x3e];
            auVar31[0x3f] = -((char)bVar4 >> 7) * auVar30[0x3f];
            auVar27 = vpshufb_avx512bw(auVar27,auVar26);
            vpshufb_avx512bw(auVar28,auVar26);
            vpshufb_avx512bw(auVar29,auVar26);
            vpshufb_avx512bw(auVar31,auVar26);
            vpxorq_avx512f(auVar27,auVar46);
            vmovdqu64_avx512f(*(undefined1 (*) [64])(param_1 + 0x60));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar3 = *(ulong *)(&DAT_001a9c40 + lVar1);
          auVar27 = vmovdqu8_avx512bw(*param_2);
          auVar28 = vmovdqu8_avx512bw(param_2[1]);
          auVar29 = vmovdqu8_avx512bw(param_2[2]);
          auVar30 = vmovdqu8_avx512bw(param_2[3]);
          auVar32[1] = ((byte)(uVar3 >> 1) & 1) * auVar30[1];
          auVar32[0] = ((byte)uVar3 & 1) * auVar30[0];
          auVar32[2] = ((byte)(uVar3 >> 2) & 1) * auVar30[2];
          auVar32[3] = ((byte)(uVar3 >> 3) & 1) * auVar30[3];
          auVar32[4] = ((byte)(uVar3 >> 4) & 1) * auVar30[4];
          auVar32[5] = ((byte)(uVar3 >> 5) & 1) * auVar30[5];
          auVar32[6] = ((byte)(uVar3 >> 6) & 1) * auVar30[6];
          auVar32[7] = ((byte)(uVar3 >> 7) & 1) * auVar30[7];
          auVar32[8] = ((byte)(uVar3 >> 8) & 1) * auVar30[8];
          auVar32[9] = ((byte)(uVar3 >> 9) & 1) * auVar30[9];
          auVar32[10] = ((byte)(uVar3 >> 10) & 1) * auVar30[10];
          auVar32[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar30[0xb];
          auVar32[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar30[0xc];
          auVar32[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar30[0xd];
          auVar32[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar30[0xe];
          auVar32[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar30[0xf];
          auVar32[0x10] = ((byte)(uVar3 >> 0x10) & 1) * auVar30[0x10];
          auVar32[0x11] = ((byte)(uVar3 >> 0x11) & 1) * auVar30[0x11];
          auVar32[0x12] = ((byte)(uVar3 >> 0x12) & 1) * auVar30[0x12];
          auVar32[0x13] = ((byte)(uVar3 >> 0x13) & 1) * auVar30[0x13];
          auVar32[0x14] = ((byte)(uVar3 >> 0x14) & 1) * auVar30[0x14];
          auVar32[0x15] = ((byte)(uVar3 >> 0x15) & 1) * auVar30[0x15];
          auVar32[0x16] = ((byte)(uVar3 >> 0x16) & 1) * auVar30[0x16];
          auVar32[0x17] = ((byte)(uVar3 >> 0x17) & 1) * auVar30[0x17];
          auVar32[0x18] = ((byte)(uVar3 >> 0x18) & 1) * auVar30[0x18];
          auVar32[0x19] = ((byte)(uVar3 >> 0x19) & 1) * auVar30[0x19];
          auVar32[0x1a] = ((byte)(uVar3 >> 0x1a) & 1) * auVar30[0x1a];
          auVar32[0x1b] = ((byte)(uVar3 >> 0x1b) & 1) * auVar30[0x1b];
          auVar32[0x1c] = ((byte)(uVar3 >> 0x1c) & 1) * auVar30[0x1c];
          auVar32[0x1d] = ((byte)(uVar3 >> 0x1d) & 1) * auVar30[0x1d];
          auVar32[0x1e] = ((byte)(uVar3 >> 0x1e) & 1) * auVar30[0x1e];
          auVar32[0x1f] = ((byte)(uVar3 >> 0x1f) & 1) * auVar30[0x1f];
          auVar32[0x20] = ((byte)(uVar3 >> 0x20) & 1) * auVar30[0x20];
          auVar32[0x21] = ((byte)(uVar3 >> 0x21) & 1) * auVar30[0x21];
          auVar32[0x22] = ((byte)(uVar3 >> 0x22) & 1) * auVar30[0x22];
          auVar32[0x23] = ((byte)(uVar3 >> 0x23) & 1) * auVar30[0x23];
          auVar32[0x24] = ((byte)(uVar3 >> 0x24) & 1) * auVar30[0x24];
          auVar32[0x25] = ((byte)(uVar3 >> 0x25) & 1) * auVar30[0x25];
          auVar32[0x26] = ((byte)(uVar3 >> 0x26) & 1) * auVar30[0x26];
          auVar32[0x27] = ((byte)(uVar3 >> 0x27) & 1) * auVar30[0x27];
          auVar32[0x28] = ((byte)(uVar3 >> 0x28) & 1) * auVar30[0x28];
          auVar32[0x29] = ((byte)(uVar3 >> 0x29) & 1) * auVar30[0x29];
          auVar32[0x2a] = ((byte)(uVar3 >> 0x2a) & 1) * auVar30[0x2a];
          auVar32[0x2b] = ((byte)(uVar3 >> 0x2b) & 1) * auVar30[0x2b];
          auVar32[0x2c] = ((byte)(uVar3 >> 0x2c) & 1) * auVar30[0x2c];
          auVar32[0x2d] = ((byte)(uVar3 >> 0x2d) & 1) * auVar30[0x2d];
          auVar32[0x2e] = ((byte)(uVar3 >> 0x2e) & 1) * auVar30[0x2e];
          auVar32[0x2f] = ((byte)(uVar3 >> 0x2f) & 1) * auVar30[0x2f];
          auVar32[0x30] = ((byte)(uVar3 >> 0x30) & 1) * auVar30[0x30];
          auVar32[0x31] = ((byte)(uVar3 >> 0x31) & 1) * auVar30[0x31];
          auVar32[0x32] = ((byte)(uVar3 >> 0x32) & 1) * auVar30[0x32];
          auVar32[0x33] = ((byte)(uVar3 >> 0x33) & 1) * auVar30[0x33];
          auVar32[0x34] = ((byte)(uVar3 >> 0x34) & 1) * auVar30[0x34];
          auVar32[0x35] = ((byte)(uVar3 >> 0x35) & 1) * auVar30[0x35];
          auVar32[0x36] = ((byte)(uVar3 >> 0x36) & 1) * auVar30[0x36];
          auVar32[0x37] = ((byte)(uVar3 >> 0x37) & 1) * auVar30[0x37];
          bVar4 = (byte)(uVar3 >> 0x38);
          auVar32[0x38] = (bVar4 & 1) * auVar30[0x38];
          auVar32[0x39] = (bVar4 >> 1 & 1) * auVar30[0x39];
          auVar32[0x3a] = (bVar4 >> 2 & 1) * auVar30[0x3a];
          auVar32[0x3b] = (bVar4 >> 3 & 1) * auVar30[0x3b];
          auVar32[0x3c] = (bVar4 >> 4 & 1) * auVar30[0x3c];
          auVar32[0x3d] = (bVar4 >> 5 & 1) * auVar30[0x3d];
          auVar32[0x3e] = (bVar4 >> 6 & 1) * auVar30[0x3e];
          auVar32[0x3f] = -((char)bVar4 >> 7) * auVar30[0x3f];
          auVar27 = vpshufb_avx512bw(auVar27,auVar26);
          vpshufb_avx512bw(auVar28,auVar26);
          vpshufb_avx512bw(auVar29,auVar26);
          vpshufb_avx512bw(auVar32,auVar26);
          vpxorq_avx512f(auVar27,auVar46);
          vmovdqu64_avx512f(*(undefined1 (*) [64])(param_1 + 0x70));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar3 = *(ulong *)(&DAT_001a9c40 + lVar1);
        auVar27 = vmovdqu8_avx512bw(*param_2);
        auVar28 = vmovdqu8_avx512bw(param_2[1]);
        auVar29 = vmovdqu8_avx512bw(param_2[2]);
        auVar21 = vmovdqu8_avx512vl(*(undefined1 (*) [16])param_2[3]);
        auVar24[1] = ((byte)(uVar3 >> 1) & 1) * auVar21[1];
        auVar24[0] = ((byte)uVar3 & 1) * auVar21[0];
        auVar24[2] = ((byte)(uVar3 >> 2) & 1) * auVar21[2];
        auVar24[3] = ((byte)(uVar3 >> 3) & 1) * auVar21[3];
        auVar24[4] = ((byte)(uVar3 >> 4) & 1) * auVar21[4];
        auVar24[5] = ((byte)(uVar3 >> 5) & 1) * auVar21[5];
        auVar24[6] = ((byte)(uVar3 >> 6) & 1) * auVar21[6];
        auVar24[7] = ((byte)(uVar3 >> 7) & 1) * auVar21[7];
        auVar24[8] = ((byte)(uVar3 >> 8) & 1) * auVar21[8];
        auVar24[9] = ((byte)(uVar3 >> 9) & 1) * auVar21[9];
        auVar24[10] = ((byte)(uVar3 >> 10) & 1) * auVar21[10];
        auVar24[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar21[0xb];
        auVar24[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar21[0xc];
        auVar24[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar21[0xd];
        auVar24[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar21[0xe];
        auVar24[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar21[0xf];
        auVar27 = vpshufb_avx512bw(auVar27,auVar26);
        vpshufb_avx512bw(auVar28,auVar26);
        vpshufb_avx512bw(auVar29,auVar26);
        vpshufb_avx512vl(auVar24,auVar20);
        vpxorq_avx512f(auVar27,auVar46);
        vmovdqu64_avx512f(*(undefined1 (*) [64])(param_1 + 0x90));
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar3 = *(ulong *)(&DAT_001a9e40 + lVar1);
      auVar27 = vmovdqu8_avx512bw(*param_2);
      auVar28 = vmovdqu8_avx512bw(param_2[1]);
      auVar21 = vmovdqu8_avx512vl(*(undefined1 (*) [16])param_2[2]);
      auVar22[1] = ((byte)(uVar3 >> 1) & 1) * auVar21[1];
      auVar22[0] = ((byte)uVar3 & 1) * auVar21[0];
      auVar22[2] = ((byte)(uVar3 >> 2) & 1) * auVar21[2];
      auVar22[3] = ((byte)(uVar3 >> 3) & 1) * auVar21[3];
      auVar22[4] = ((byte)(uVar3 >> 4) & 1) * auVar21[4];
      auVar22[5] = ((byte)(uVar3 >> 5) & 1) * auVar21[5];
      auVar22[6] = ((byte)(uVar3 >> 6) & 1) * auVar21[6];
      auVar22[7] = ((byte)(uVar3 >> 7) & 1) * auVar21[7];
      auVar22[8] = ((byte)(uVar3 >> 8) & 1) * auVar21[8];
      auVar22[9] = ((byte)(uVar3 >> 9) & 1) * auVar21[9];
      auVar22[10] = ((byte)(uVar3 >> 10) & 1) * auVar21[10];
      auVar22[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar21[0xb];
      auVar22[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar21[0xc];
      auVar22[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar21[0xd];
      auVar22[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar21[0xe];
      auVar22[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar21[0xf];
      auVar27 = vpshufb_avx512bw(auVar27,auVar26);
      vpshufb_avx512bw(auVar28,auVar26);
      vpshufb_avx512vl(auVar22,auVar20);
      vpxorq_avx512f(auVar27,auVar46);
      vmovdqu64_avx512f(*(undefined1 (*) [64])(param_1 + 0xd0));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar3 = *puVar2;
    auVar21 = vmovdqu8_avx512vl(*(undefined1 (*) [16])*param_2);
    auVar23[1] = ((byte)(uVar3 >> 1) & 1) * auVar21[1];
    auVar23[0] = ((byte)uVar3 & 1) * auVar21[0];
    auVar23[2] = ((byte)(uVar3 >> 2) & 1) * auVar21[2];
    auVar23[3] = ((byte)(uVar3 >> 3) & 1) * auVar21[3];
    auVar23[4] = ((byte)(uVar3 >> 4) & 1) * auVar21[4];
    auVar23[5] = ((byte)(uVar3 >> 5) & 1) * auVar21[5];
    auVar23[6] = ((byte)(uVar3 >> 6) & 1) * auVar21[6];
    auVar23[7] = ((byte)(uVar3 >> 7) & 1) * auVar21[7];
    auVar23[8] = ((byte)(uVar3 >> 8) & 1) * auVar21[8];
    auVar23[9] = ((byte)(uVar3 >> 9) & 1) * auVar21[9];
    auVar23[10] = ((byte)(uVar3 >> 10) & 1) * auVar21[10];
    auVar23[0xb] = ((byte)(uVar3 >> 0xb) & 1) * auVar21[0xb];
    auVar23[0xc] = ((byte)(uVar3 >> 0xc) & 1) * auVar21[0xc];
    auVar23[0xd] = ((byte)(uVar3 >> 0xd) & 1) * auVar21[0xd];
    auVar23[0xe] = ((byte)(uVar3 >> 0xe) & 1) * auVar21[0xe];
    auVar23[0xf] = ((byte)(uVar3 >> 0xf) & 1) * auVar21[0xf];
    auVar20 = vpshufb_avx512vl(auVar23,auVar20);
    auVar46 = vpxorq_avx512f(ZEXT1664(auVar20),auVar46);
    auVar21 = vmovdqu64_avx512vl(*(undefined1 (*) [16])(param_1 + 0x150));
    auVar45._8_8_ = 0;
    auVar45._0_8_ = auVar46._8_8_;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = auVar21._0_8_;
    auVar20 = (undefined1  [16])0x0;
    for (uVar19 = 0; uVar19 < 0x40; uVar19 = uVar19 + 1) {
      if ((auVar45 & (undefined1  [16])0x1 << uVar19) != (undefined1  [16])0x0) {
        auVar20 = auVar20 ^ auVar10 << uVar19;
      }
    }
    auVar44._32_32_ = in_ZMM7._32_32_;
    auVar44._0_32_ = ZEXT1632(auVar20);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = auVar46._0_8_;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = auVar21._8_8_;
    auVar20 = (undefined1  [16])0x0;
    for (uVar19 = 0; uVar19 < 0x40; uVar19 = uVar19 + 1) {
      if ((auVar12 & (undefined1  [16])0x1 << uVar19) != (undefined1  [16])0x0) {
        auVar20 = auVar20 ^ auVar14 << uVar19;
      }
    }
    auVar16._8_8_ = 0;
    auVar16._0_8_ = auVar46._8_8_;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = auVar21._8_8_;
    auVar22 = (undefined1  [16])0x0;
    for (uVar19 = 0; uVar19 < 0x40; uVar19 = uVar19 + 1) {
      if ((auVar16 & (undefined1  [16])0x1 << uVar19) != (undefined1  [16])0x0) {
        auVar22 = auVar22 ^ auVar17 << uVar19;
      }
    }
    auVar42._32_32_ = in_ZMM1._32_32_;
    auVar42._0_32_ = ZEXT1632(auVar22);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = auVar46._0_8_;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = auVar21._0_8_;
    auVar21 = (undefined1  [16])0x0;
    for (uVar19 = 0; uVar19 < 0x40; uVar19 = uVar19 + 1) {
      if ((auVar5 & (undefined1  [16])0x1 << uVar19) != (undefined1  [16])0x0) {
        auVar21 = auVar21 ^ auVar7 << uVar19;
      }
    }
    auVar43._32_32_ = in_ZMM6._32_32_;
    auVar43._0_32_ = ZEXT1632(auVar21);
    auVar46._32_8_ = in_register_00001420;
    auVar46._0_32_ = ZEXT1632(auVar20);
    auVar46._40_8_ = in_register_00001428;
    auVar46._48_8_ = in_register_00001430;
    auVar46._56_8_ = in_register_00001438;
    auVar46 = vpxorq_avx512f(auVar44,auVar46);
    auVar26 = vpsrldq_avx512bw(auVar46,8);
    auVar27 = vpslldq_avx512bw(auVar46,8);
    auVar46 = vpxorq_avx512f(auVar42,auVar26);
    auVar26 = vpxorq_avx512f(auVar43,auVar27);
    auVar25 = vextracti64x4_avx512f(auVar46,1);
    auVar25 = vpxorq_avx512vl(auVar46._0_32_,auVar25);
    auVar20 = vextracti32x4_avx512vl(auVar25,1);
    auVar21 = vpxorq_avx512vl(auVar25._0_16_,auVar20);
    auVar25 = vextracti64x4_avx512f(auVar26,1);
    auVar25 = vpxorq_avx512vl(auVar26._0_32_,auVar25);
    auVar20 = vextracti32x4_avx512vl(auVar25,1);
    auVar22 = vpxorq_avx512vl(auVar25._0_16_,auVar20);
    auVar24 = vmovdqa64_avx512vl(_POLY2);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = auVar24._8_8_;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = auVar22._0_8_;
    auVar20 = (undefined1  [16])0x0;
    for (uVar19 = 0; uVar19 < 0x40; uVar19 = uVar19 + 1) {
      if ((auVar9 & (undefined1  [16])0x1 << uVar19) != (undefined1  [16])0x0) {
        auVar20 = auVar20 ^ auVar11 << uVar19;
      }
    }
    auVar20 = vpslldq_avx(auVar20,8);
    auVar22 = vpxorq_avx512vl(auVar22,auVar20);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = auVar24._0_8_;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = auVar22._0_8_;
    auVar20 = (undefined1  [16])0x0;
    for (uVar19 = 0; uVar19 < 0x40; uVar19 = uVar19 + 1) {
      if ((auVar6 & (undefined1  [16])0x1 << uVar19) != (undefined1  [16])0x0) {
        auVar20 = auVar20 ^ auVar8 << uVar19;
      }
    }
    auVar45 = vpsrldq_avx(auVar20,4);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = auVar24._0_8_;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = auVar22._8_8_;
    auVar20 = (undefined1  [16])0x0;
    for (uVar19 = 0; uVar19 < 0x40; uVar19 = uVar19 + 1) {
      if ((auVar13 & (undefined1  [16])0x1 << uVar19) != (undefined1  [16])0x0) {
        auVar20 = auVar20 ^ auVar15 << uVar19;
      }
    }
    auVar20 = vpslldq_avx(auVar20,4);
    auVar20 = vpternlogq_avx512vl(auVar20,auVar45,auVar21,0x96);
  }
  auVar20 = vmovdqu64_avx512vl(auVar20);
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar20;
  if (0x100 < param_3) {
    auVar46 = ZEXT1664((undefined1  [16])0x0);
    vmovdqa64_avx512f(auVar46);
    vmovdqa64_avx512f(auVar46);
    vmovdqa64_avx512f(auVar46);
    vmovdqa64_avx512f(auVar46);
    vmovdqa64_avx512f(auVar46);
    vmovdqa64_avx512f(auVar46);
    vmovdqa64_avx512f(auVar46);
    vmovdqa64_avx512f(auVar46);
    vmovdqa64_avx512f(auVar46);
    vmovdqa64_avx512f(auVar46);
    vmovdqa64_avx512f(auVar46);
    vmovdqa64_avx512f(auVar46);
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ossl_aes_gcm_encrypt_avx512
              (undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulong *param_3,
              undefined1 (*param_4) [16],ulong param_5,undefined1 (*param_6) [16])

{
  ushort uVar1;
  undefined4 uVar2;
  byte bVar3;
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
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined2 uVar43;
  undefined1 auVar44 [32];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  undefined1 auVar48 [64];
  undefined1 auVar49 [64];
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  undefined1 auVar55 [64];
  undefined1 auVar56 [64];
  undefined1 auVar57 [64];
  undefined1 auVar58 [64];
  undefined1 auVar59 [64];
  undefined1 auVar60 [64];
  undefined1 auVar61 [64];
  undefined1 auVar62 [64];
  undefined1 auVar63 [64];
  undefined1 auVar64 [64];
  undefined1 auVar65 [64];
  undefined1 auVar66 [64];
  undefined1 auVar67 [64];
  undefined1 auVar68 [64];
  undefined1 auVar69 [64];
  undefined1 auVar70 [64];
  undefined1 auVar71 [64];
  undefined1 auVar72 [64];
  undefined1 auVar73 [64];
  undefined1 auVar74 [64];
  undefined1 auVar75 [64];
  undefined1 auVar76 [64];
  undefined1 auVar77 [64];
  undefined1 auVar78 [64];
  undefined1 auVar79 [64];
  undefined1 auVar80 [64];
  undefined1 auVar81 [64];
  undefined1 auVar82 [64];
  undefined1 auVar83 [64];
  undefined1 auVar84 [64];
  undefined1 auVar85 [64];
  undefined1 auVar86 [64];
  undefined1 auVar87 [64];
  char cVar88;
  char cVar90;
  int iVar89;
  undefined1 uVar91;
  char cVar92;
  undefined6 uVar93;
  ulong uVar94;
  ulong uVar95;
  uint uVar96;
  undefined1 (*pauVar97) [16];
  long lVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [64];
  undefined1 auVar114 [64];
  undefined1 auVar115 [64];
  undefined1 auVar116 [64];
  undefined1 in_ZMM0 [64];
  undefined1 auVar117 [64];
  undefined1 auVar118 [16];
  undefined1 auVar104 [16];
  
  uVar93 = (undefined6)((ulong)param_4 >> 0x10);
  cVar92 = (char)((ulong)param_4 >> 8);
  uVar91 = SUB81(param_4,0);
  iVar89 = *(int *)param_1[0xf];
  cVar88 = (char)iVar89;
  cVar90 = (char)((uint)iVar89 >> 8);
  uVar43 = SUB82(param_3,0);
  if (iVar89 == 9) {
    if (param_5 != 0) {
      auVar102 = vmovdqu64_avx512vl(param_2[4]);
      uVar95 = *param_3;
      if (uVar95 != 0) {
        uVar94 = 0x10;
        if (param_5 < 0x10) {
          uVar94 = param_5;
        }
        uVar1 = *(ushort *)(&byte_len_to_mask_table + uVar94 * 2);
        auVar103 = vmovdqu8_avx512vl(*param_4);
        auVar105[1] = ((byte)(uVar1 >> 1) & 1) * auVar103[1];
        auVar105[0] = ((byte)uVar1 & 1) * auVar103[0];
        auVar105[2] = ((byte)(uVar1 >> 2) & 1) * auVar103[2];
        auVar105[3] = ((byte)(uVar1 >> 3) & 1) * auVar103[3];
        auVar105[4] = ((byte)(uVar1 >> 4) & 1) * auVar103[4];
        auVar105[5] = ((byte)(uVar1 >> 5) & 1) * auVar103[5];
        auVar105[6] = ((byte)(uVar1 >> 6) & 1) * auVar103[6];
        auVar105[7] = ((byte)(uVar1 >> 7) & 1) * auVar103[7];
        bVar3 = (byte)(uVar1 >> 8);
        auVar105[8] = (bVar3 & 1) * auVar103[8];
        auVar105[9] = (bVar3 >> 1 & 1) * auVar103[9];
        auVar105[10] = (bVar3 >> 2 & 1) * auVar103[10];
        auVar105[0xb] = (bVar3 >> 3 & 1) * auVar103[0xb];
        auVar105[0xc] = (bVar3 >> 4 & 1) * auVar103[0xc];
        auVar105[0xd] = (bVar3 >> 5 & 1) * auVar103[0xd];
        auVar105[0xe] = (bVar3 >> 6 & 1) * auVar103[0xe];
        auVar105[0xf] = -((char)bVar3 >> 7) * auVar103[0xf];
        auVar103 = vmovdqu64_avx512vl(param_2[1]);
        auVar106 = vmovdqu64_avx512vl(param_2[0x15]);
        pauVar97 = (undefined1 (*) [16])(&SHIFT_MASK + uVar95);
        auVar107 = vmovdqu64_avx512vl(*pauVar97);
        auVar103 = vpshufb_avx(auVar103,auVar107);
        auVar103 = vpxorq_avx512vl(auVar103,auVar105);
        lVar98 = param_5 + uVar95 + -0x10;
        if ((long)(param_5 + uVar95) < 0x10) {
          pauVar97 = (undefined1 (*) [16])((long)pauVar97 - lVar98);
        }
        auVar105 = vmovdqu64_avx512vl(pauVar97[1]);
        in_ZMM0 = ZEXT1664(auVar105);
        auVar103 = vpand_avx(auVar103,auVar105);
        auVar103 = vpshufb_avx(auVar103,_SHUF_MASK);
        auVar103 = vpshufb_avx(auVar103,auVar107);
        auVar102 = vpxorq_avx512vl(auVar102,auVar103);
        if (lVar98 < 0) {
          *param_3 = *param_3 + param_5;
          uVar95 = param_5;
        }
        else {
          auVar108._8_8_ = 0;
          auVar108._0_8_ = auVar102._8_8_;
          auVar118._8_8_ = 0;
          auVar118._0_8_ = auVar106._8_8_;
          auVar105 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar108 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar105 = auVar105 ^ auVar118 << uVar96;
            }
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = auVar102._0_8_;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = auVar106._0_8_;
          auVar108 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar4 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar108 = auVar108 ^ auVar10 << uVar96;
            }
          }
          auVar16._8_8_ = 0;
          auVar16._0_8_ = auVar102._8_8_;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = auVar106._0_8_;
          auVar118 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar16 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar118 = auVar118 ^ auVar21 << uVar96;
            }
          }
          auVar27._8_8_ = 0;
          auVar27._0_8_ = auVar102._0_8_;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = auVar106._8_8_;
          auVar102 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar27 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar102 = auVar102 ^ auVar33 << uVar96;
            }
          }
          auVar102 = vpxorq_avx512vl(auVar102,auVar118);
          auVar106 = vpsrldq_avx(auVar102,8);
          auVar102 = vpslldq_avx(auVar102,8);
          auVar105 = vpxorq_avx512vl(auVar105,auVar106);
          auVar108 = vpxorq_avx512vl(auVar102,auVar108);
          auVar118 = vmovdqu64_avx512vl(_POLY2);
          auVar106._8_8_ = 0;
          auVar106._0_8_ = auVar118._8_8_;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = auVar108._0_8_;
          auVar102 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar106 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar102 = auVar102 ^ auVar22 << uVar96;
            }
          }
          auVar102 = vpslldq_avx(auVar102,8);
          auVar106 = vpxorq_avx512vl(auVar108,auVar102);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = auVar118._0_8_;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = auVar106._0_8_;
          auVar102 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar5 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar102 = auVar102 ^ auVar11 << uVar96;
            }
          }
          auVar108 = vpsrldq_avx(auVar102,4);
          auVar28._8_8_ = 0;
          auVar28._0_8_ = auVar118._0_8_;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = auVar106._8_8_;
          auVar102 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar28 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar102 = auVar102 ^ auVar34 << uVar96;
            }
          }
          auVar102 = vpslldq_avx(auVar102,4);
          auVar102 = vpternlogq_avx512vl(auVar102,auVar105,auVar108,0x96);
          *param_3 = 0;
          uVar95 = 0x10 - uVar95;
        }
        auVar105 = vmovdqu64_avx512vl(auVar102);
        param_2[4] = auVar105;
        auVar103 = vpshufb_avx(auVar103,_SHUF_MASK);
        auVar103 = vpshufb_avx(auVar103,auVar107);
        auVar103 = vmovdqu8_avx512vl(auVar103);
        *param_6 = auVar103;
      }
      auVar103 = vmovdqu64_avx512vl(*param_2);
      auVar117 = ZEXT1664(auVar103);
      param_5 = param_5 - uVar95;
      if (param_5 != 0) {
        if (0x100 < param_5) {
          auVar113._16_16_ = _UNK_001a9fd0;
          auVar113._0_16_ = _SHUF_MASK;
          auVar113._32_32_ = _UNK_001a9fe0;
          auVar113 = vmovdqa64_avx512f(auVar113);
          auVar114 = vmovdqa64_avx512f(_ddq_addbe_4444);
          auVar115 = vmovdqa64_avx512f(_ddq_addbe_1234);
          auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
          *(char *)((long)param_3 + -0x6e) = *(char *)((long)param_3 + -0x6e) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          if (auVar103[0] < 0xf0) {
            auVar117 = vpaddd_avx512f(auVar117,auVar115);
            auVar117 = vpaddd_avx512f(auVar117,auVar114);
            auVar117 = vpaddd_avx512f(auVar117,auVar114);
            auVar117 = vpaddd_avx512f(auVar117,auVar117);
          }
          else {
            auVar114 = vpshufb_avx512bw(auVar117,auVar113);
            auVar115 = vmovdqa64_avx512f(_ddq_add_4444);
            auVar117._1_63_ = _UNK_001aa081;
            auVar117[0] = ddq_add_1234;
            auVar117 = vpaddd_avx512f(auVar114,auVar117);
            auVar114 = vpaddd_avx512f(auVar117,auVar115);
            auVar116 = vpaddd_avx512f(auVar114,auVar115);
            auVar115 = vpaddd_avx512f(auVar116,auVar115);
            vpshufb_avx512bw(auVar117,auVar113);
            vpshufb_avx512bw(auVar114,auVar113);
            vpshufb_avx512bw(auVar116,auVar113);
            auVar117 = vpshufb_avx512bw(auVar115,auVar113);
          }
          vshufi64x2_avx512f(auVar117,auVar117);
          *(int *)param_4[-8] = *(int *)param_4[-8] + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar96 = (int)param_5 + 0xfU >> 4;
        if (uVar96 == 8) {
          auVar114._16_16_ = _UNK_001a9fd0;
          auVar114._0_16_ = _SHUF_MASK;
          auVar114._32_32_ = _UNK_001a9fe0;
          auVar113 = vmovdqa64_avx512f(auVar114);
          auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
          vextracti32x4_avx512f(auVar117,3);
          auVar114 = vpshufb_avx512bw(in_ZMM0,auVar113);
          auVar117 = vpshufb_avx512bw(auVar117,auVar113);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
          auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar114,auVar113);
          vpxorq_avx512f(auVar117,auVar113);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (7 < uVar96) {
          if (uVar96 == 0xc) {
            auVar115._16_16_ = _UNK_001a9fd0;
            auVar115._0_16_ = _SHUF_MASK;
            auVar115._32_32_ = _UNK_001a9fe0;
            auVar113 = vmovdqa64_avx512f(auVar115);
            auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
            auVar114 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            vextracti32x4_avx512f(auVar114,3);
            auVar115 = vpshufb_avx512bw(in_ZMM0,auVar113);
            auVar117 = vpshufb_avx512bw(auVar117,auVar113);
            auVar113 = vpshufb_avx512bw(auVar114,auVar113);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
            auVar114 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar115,auVar114);
            vpxorq_avx512f(auVar117,auVar114);
            vpxorq_avx512f(auVar113,auVar114);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 < 0xc) {
            if (uVar96 == 0xb) {
              auVar116._16_16_ = _UNK_001a9fd0;
              auVar116._0_16_ = _SHUF_MASK;
              auVar116._32_32_ = _UNK_001a9fe0;
              auVar113 = vmovdqa64_avx512f(auVar116);
              auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
              *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
              uVar2 = in(uVar43);
              *(undefined4 *)*param_1 = uVar2;
              ddq_add_1234 = ddq_add_1234 + '\x01';
              auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
              auVar114 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
              vextracti32x4_avx512f(auVar114,2);
              auVar115 = vpshufb_avx512bw(in_ZMM0,auVar113);
              auVar117 = vpshufb_avx512bw(auVar117,auVar113);
              auVar113 = vpshufb_avx512bw(auVar114,auVar113);
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
              auVar114 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
              vpxorq_avx512f(auVar115,auVar114);
              vpxorq_avx512f(auVar117,auVar114);
              vpxorq_avx512f(auVar113,auVar114);
              vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (uVar96 == 10) {
              auVar80._16_16_ = _UNK_001a9fd0;
              auVar80._0_16_ = _SHUF_MASK;
              auVar80._32_32_ = _UNK_001a9fe0;
              auVar113 = vmovdqa64_avx512f(auVar80);
              auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
              *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
              uVar2 = in(uVar43);
              *(undefined4 *)*param_1 = uVar2;
              ddq_add_1234 = ddq_add_1234 + '\x01';
              auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
              auVar114 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
              vextracti32x4_avx512f(auVar114,1);
              auVar115 = vpshufb_avx512bw(in_ZMM0,auVar113);
              auVar117 = vpshufb_avx512bw(auVar117,auVar113);
              auVar112 = vpshufb_avx512vl(auVar114._0_32_,auVar113._0_32_);
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
              vmovdqu8_avx512vl(*(undefined1 (*) [32])(param_4[8] + uVar95));
              auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
              vpxorq_avx512f(auVar115,auVar113);
              vpxorq_avx512f(auVar117,auVar113);
              vpxorq_avx512vl(auVar112,auVar113._0_32_);
              vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            auVar79._16_16_ = _UNK_001a9fd0;
            auVar79._0_16_ = _SHUF_MASK;
            auVar79._32_32_ = _UNK_001a9fe0;
            auVar113 = vmovdqa64_avx512f(auVar79);
            auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
            auVar114 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            vextracti32x4_avx512f(auVar114,0);
            auVar115 = vpshufb_avx512bw(in_ZMM0,auVar113);
            auVar117 = vpshufb_avx512bw(auVar117,auVar113);
            auVar102 = vpshufb_avx512vl(auVar114._0_16_,auVar113._0_16_);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_4[8] + uVar95));
            auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar115,auVar113);
            vpxorq_avx512f(auVar117,auVar113);
            vpxorq_avx512vl(auVar102,auVar113._0_16_);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 == 0x10) {
            auVar78._16_16_ = _UNK_001a9fd0;
            auVar78._0_16_ = _SHUF_MASK;
            auVar78._32_32_ = _UNK_001a9fe0;
            auVar113 = vmovdqa64_avx512f(auVar78);
            auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
            auVar114 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            auVar115 = vpaddd_avx512f(auVar117,_ddq_add_8888);
            vextracti32x4_avx512f(auVar115,3);
            auVar116 = vpshufb_avx512bw(in_ZMM0,auVar113);
            auVar117 = vpshufb_avx512bw(auVar117,auVar113);
            auVar114 = vpshufb_avx512bw(auVar114,auVar113);
            auVar113 = vpshufb_avx512bw(auVar115,auVar113);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[0xc] + uVar95));
            auVar115 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar116,auVar115);
            vpxorq_avx512f(auVar117,auVar115);
            vpxorq_avx512f(auVar114,auVar115);
            vpxorq_avx512f(auVar113,auVar115);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 == 0xf) {
            auVar77._16_16_ = _UNK_001a9fd0;
            auVar77._0_16_ = _SHUF_MASK;
            auVar77._32_32_ = _UNK_001a9fe0;
            auVar113 = vmovdqa64_avx512f(auVar77);
            auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
            auVar114 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            auVar115 = vpaddd_avx512f(auVar117,_ddq_add_8888);
            vextracti32x4_avx512f(auVar115,2);
            auVar116 = vpshufb_avx512bw(in_ZMM0,auVar113);
            auVar117 = vpshufb_avx512bw(auVar117,auVar113);
            auVar114 = vpshufb_avx512bw(auVar114,auVar113);
            auVar113 = vpshufb_avx512bw(auVar115,auVar113);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[0xc] + uVar95));
            auVar115 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar116,auVar115);
            vpxorq_avx512f(auVar117,auVar115);
            vpxorq_avx512f(auVar114,auVar115);
            vpxorq_avx512f(auVar113,auVar115);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 == 0xe) {
            auVar76._16_16_ = _UNK_001a9fd0;
            auVar76._0_16_ = _SHUF_MASK;
            auVar76._32_32_ = _UNK_001a9fe0;
            auVar113 = vmovdqa64_avx512f(auVar76);
            auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
            auVar114 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            auVar115 = vpaddd_avx512f(auVar117,_ddq_add_8888);
            vextracti32x4_avx512f(auVar115,1);
            auVar116 = vpshufb_avx512bw(in_ZMM0,auVar113);
            auVar117 = vpshufb_avx512bw(auVar117,auVar113);
            auVar114 = vpshufb_avx512bw(auVar114,auVar113);
            auVar112 = vpshufb_avx512vl(auVar115._0_32_,auVar113._0_32_);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
            vmovdqu8_avx512vl(*(undefined1 (*) [32])(param_4[0xc] + uVar95));
            auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar116,auVar113);
            vpxorq_avx512f(auVar117,auVar113);
            vpxorq_avx512f(auVar114,auVar113);
            vpxorq_avx512vl(auVar112,auVar113._0_32_);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          auVar75._16_16_ = _UNK_001a9fd0;
          auVar75._0_16_ = _SHUF_MASK;
          auVar75._32_32_ = _UNK_001a9fe0;
          auVar113 = vmovdqa64_avx512f(auVar75);
          auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
          auVar114 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
          auVar115 = vpaddd_avx512f(auVar117,_ddq_add_8888);
          vextracti32x4_avx512f(auVar115,0);
          auVar116 = vpshufb_avx512bw(in_ZMM0,auVar113);
          auVar117 = vpshufb_avx512bw(auVar117,auVar113);
          auVar114 = vpshufb_avx512bw(auVar114,auVar113);
          auVar102 = vpshufb_avx512vl(auVar115._0_16_,auVar113._0_16_);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
          vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_4[0xc] + uVar95));
          auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar116,auVar113);
          vpxorq_avx512f(auVar117,auVar113);
          vpxorq_avx512f(auVar114,auVar113);
          vpxorq_avx512vl(auVar102,auVar113._0_16_);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar96 == 4) {
          auVar85._16_16_ = _UNK_001a9fd0;
          auVar85._0_16_ = _SHUF_MASK;
          auVar85._32_32_ = _UNK_001a9fe0;
          auVar113 = vmovdqa64_avx512f(auVar85);
          vshufi64x2_avx512f(auVar117,auVar117);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          vextracti32x4_avx512f(in_ZMM0,3);
          auVar117 = vpshufb_avx512bw(in_ZMM0,auVar113);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar117,auVar113);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (3 < uVar96) {
          if (uVar96 == 7) {
            auVar83._16_16_ = _UNK_001a9fd0;
            auVar83._0_16_ = _SHUF_MASK;
            auVar83._32_32_ = _UNK_001a9fe0;
            auVar113 = vmovdqa64_avx512f(auVar83);
            auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
            vextracti32x4_avx512f(auVar117,2);
            auVar114 = vpshufb_avx512bw(in_ZMM0,auVar113);
            auVar117 = vpshufb_avx512bw(auVar117,auVar113);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar114,auVar113);
            vpxorq_avx512f(auVar117,auVar113);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 == 6) {
            auVar82._16_16_ = _UNK_001a9fd0;
            auVar82._0_16_ = _SHUF_MASK;
            auVar82._32_32_ = _UNK_001a9fe0;
            auVar113 = vmovdqa64_avx512f(auVar82);
            auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
            vextracti32x4_avx512f(auVar117,1);
            auVar114 = vpshufb_avx512bw(in_ZMM0,auVar113);
            auVar112 = vpshufb_avx512vl(auVar117._0_32_,auVar113._0_32_);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512vl(*(undefined1 (*) [32])(param_4[4] + uVar95));
            auVar117 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar114,auVar117);
            vpxorq_avx512vl(auVar112,auVar117._0_32_);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          auVar81._16_16_ = _UNK_001a9fd0;
          auVar81._0_16_ = _SHUF_MASK;
          auVar81._32_32_ = _UNK_001a9fe0;
          auVar113 = vmovdqa64_avx512f(auVar81);
          auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
          vextracti32x4_avx512f(auVar117,0);
          auVar114 = vpshufb_avx512bw(in_ZMM0,auVar113);
          auVar102 = vpshufb_avx512vl(auVar117._0_16_,auVar113._0_16_);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_4[4] + uVar95));
          auVar117 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar114,auVar117);
          vpxorq_avx512vl(auVar102,auVar117._0_16_);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar96 == 3) {
          auVar84._16_16_ = _UNK_001a9fd0;
          auVar84._0_16_ = _SHUF_MASK;
          auVar84._32_32_ = _UNK_001a9fe0;
          auVar113 = vmovdqa64_avx512f(auVar84);
          vshufi64x2_avx512f(auVar117,auVar117);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          vextracti32x4_avx512f(in_ZMM0,2);
          auVar117 = vpshufb_avx512bw(in_ZMM0,auVar113);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar117,auVar113);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar96 == 2) {
          auVar112._16_16_ = _UNK_001a9fd0;
          auVar112._0_16_ = _SHUF_MASK;
          auVar112 = vmovdqa64_avx512vl(auVar112);
          auVar111 = vshufi64x2_avx512vl(ZEXT1632(auVar103),ZEXT1632(auVar103));
          ddq_add_1234 = ddq_add_1234 + '\x01';
          vextracti32x4_avx512f(ZEXT3264(auVar111),1);
          auVar112 = vpshufb_avx512vl(auVar111,auVar112);
          vmovdqu8_avx512vl(*(undefined1 (*) [32])
                             (CONCAT62(uVar93,CONCAT11(cVar92 + cVar88,uVar91)) + uVar95));
          auVar117 = vbroadcastf64x2_avx512dq(*param_1);
          vpxorq_avx512vl(auVar112,auVar117._0_32_);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        auVar105 = vmovdqa64_avx512vl(_SHUF_MASK);
        auVar103 = vpaddd_avx(auVar103,_ONE);
        uVar94 = *(ulong *)(&byte64_len_to_mask_table + param_5 * 8);
        auVar106 = vextracti32x4_avx512f(ZEXT1664(auVar103),0);
        auVar103 = vpshufb_avx512vl(auVar103,auVar105);
        auVar108 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(*param_4 + uVar95));
        auVar107[1] = ((byte)(uVar94 >> 1) & 1) * auVar108[1];
        auVar107[0] = ((byte)uVar94 & 1) * auVar108[0];
        auVar107[2] = ((byte)(uVar94 >> 2) & 1) * auVar108[2];
        auVar107[3] = ((byte)(uVar94 >> 3) & 1) * auVar108[3];
        auVar107[4] = ((byte)(uVar94 >> 4) & 1) * auVar108[4];
        auVar107[5] = ((byte)(uVar94 >> 5) & 1) * auVar108[5];
        auVar107[6] = ((byte)(uVar94 >> 6) & 1) * auVar108[6];
        auVar107[7] = ((byte)(uVar94 >> 7) & 1) * auVar108[7];
        bVar3 = (byte)(uVar94 >> 8);
        auVar107[8] = (bVar3 & 1) * auVar108[8];
        auVar107[9] = ((byte)(uVar94 >> 9) & 1) * auVar108[9];
        auVar107[10] = ((byte)(uVar94 >> 10) & 1) * auVar108[10];
        auVar107[0xb] = ((byte)(uVar94 >> 0xb) & 1) * auVar108[0xb];
        auVar107[0xc] = ((byte)(uVar94 >> 0xc) & 1) * auVar108[0xc];
        auVar107[0xd] = ((byte)(uVar94 >> 0xd) & 1) * auVar108[0xd];
        auVar107[0xe] = ((byte)(uVar94 >> 0xe) & 1) * auVar108[0xe];
        auVar107[0xf] = ((byte)(uVar94 >> 0xf) & 1) * auVar108[0xf];
        auVar117 = vbroadcastf64x2_avx512dq(*param_1);
        auVar103 = vpxorq_avx512vl(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 8));
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(param_1[1]);
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[1] + 8));
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(param_1[2]);
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[2] + 8));
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(param_1[3]);
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[3] + 8));
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(param_1[4]);
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[4] + 8));
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(param_1[5]);
        auVar103 = aesenclast(auVar103,auVar117._0_16_);
        auVar107 = vpxorq_avx512vl(auVar103,auVar107);
        auVar108 = vextracti32x4_avx512f(ZEXT1664(auVar107),0);
        auVar103 = vmovdqu8_avx512vl(auVar107);
        *(undefined1 (*) [16])(*param_6 + uVar95) = auVar103;
        auVar117 = vmovdqu8_avx512bw(ZEXT1664(auVar107));
        auVar103[1] = ((byte)(uVar94 >> 1) & 1) * auVar117[1];
        auVar103[0] = ((byte)uVar94 & 1) * auVar117[0];
        auVar103[2] = ((byte)(uVar94 >> 2) & 1) * auVar117[2];
        auVar103[3] = ((byte)(uVar94 >> 3) & 1) * auVar117[3];
        auVar103[4] = ((byte)(uVar94 >> 4) & 1) * auVar117[4];
        auVar103[5] = ((byte)(uVar94 >> 5) & 1) * auVar117[5];
        auVar103[6] = ((byte)(uVar94 >> 6) & 1) * auVar117[6];
        auVar103[7] = ((byte)(uVar94 >> 7) & 1) * auVar117[7];
        auVar103[8] = (bVar3 & 1) * auVar117[8];
        auVar103[9] = ((byte)(uVar94 >> 9) & 1) * auVar117[9];
        auVar103[10] = ((byte)(uVar94 >> 10) & 1) * auVar117[10];
        auVar103[0xb] = ((byte)(uVar94 >> 0xb) & 1) * auVar117[0xb];
        auVar103[0xc] = ((byte)(uVar94 >> 0xc) & 1) * auVar117[0xc];
        auVar103[0xd] = ((byte)(uVar94 >> 0xd) & 1) * auVar117[0xd];
        auVar103[0xe] = ((byte)(uVar94 >> 0xe) & 1) * auVar117[0xe];
        auVar103[0xf] = ((byte)(uVar94 >> 0xf) & 1) * auVar117[0xf];
        auVar103 = vpshufb_avx512vl(auVar103,auVar105);
        auVar105 = vextracti32x4_avx512f(ZEXT1664(auVar103),0);
        if (0xf < (long)param_5) {
          *param_3 = 0;
          vpxorq_avx512f(ZEXT1664(auVar103),ZEXT1664(auVar102));
          vmovdqu64_avx512vl(param_2[0x15]);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *param_3 = param_5;
        auVar103 = vmovdqu64_avx512vl(auVar108);
        param_2[1] = auVar103;
        auVar103 = vpxorq_avx512vl(auVar102,auVar105);
        auVar102 = vmovdqu64_avx512vl(auVar106);
        *param_2 = auVar102;
        auVar102 = vmovdqu64_avx512vl(auVar103);
        param_2[4] = auVar102;
      }
    }
  }
  else if (iVar89 == 0xb) {
    if (param_5 != 0) {
      auVar102 = vmovdqu64_avx512vl(param_2[4]);
      uVar95 = *param_3;
      if (uVar95 != 0) {
        uVar94 = 0x10;
        if (param_5 < 0x10) {
          uVar94 = param_5;
        }
        uVar1 = *(ushort *)(&byte_len_to_mask_table + uVar94 * 2);
        auVar103 = vmovdqu8_avx512vl(*param_4);
        auVar99[1] = ((byte)(uVar1 >> 1) & 1) * auVar103[1];
        auVar99[0] = ((byte)uVar1 & 1) * auVar103[0];
        auVar99[2] = ((byte)(uVar1 >> 2) & 1) * auVar103[2];
        auVar99[3] = ((byte)(uVar1 >> 3) & 1) * auVar103[3];
        auVar99[4] = ((byte)(uVar1 >> 4) & 1) * auVar103[4];
        auVar99[5] = ((byte)(uVar1 >> 5) & 1) * auVar103[5];
        auVar99[6] = ((byte)(uVar1 >> 6) & 1) * auVar103[6];
        auVar99[7] = ((byte)(uVar1 >> 7) & 1) * auVar103[7];
        bVar3 = (byte)(uVar1 >> 8);
        auVar99[8] = (bVar3 & 1) * auVar103[8];
        auVar99[9] = (bVar3 >> 1 & 1) * auVar103[9];
        auVar99[10] = (bVar3 >> 2 & 1) * auVar103[10];
        auVar99[0xb] = (bVar3 >> 3 & 1) * auVar103[0xb];
        auVar99[0xc] = (bVar3 >> 4 & 1) * auVar103[0xc];
        auVar99[0xd] = (bVar3 >> 5 & 1) * auVar103[0xd];
        auVar99[0xe] = (bVar3 >> 6 & 1) * auVar103[0xe];
        auVar99[0xf] = -((char)bVar3 >> 7) * auVar103[0xf];
        auVar103 = vmovdqu64_avx512vl(param_2[1]);
        auVar105 = vmovdqu64_avx512vl(param_2[0x15]);
        pauVar97 = (undefined1 (*) [16])(&SHIFT_MASK + uVar95);
        auVar106 = vmovdqu64_avx512vl(*pauVar97);
        auVar103 = vpshufb_avx(auVar103,auVar106);
        auVar103 = vpxorq_avx512vl(auVar103,auVar99);
        lVar98 = param_5 + uVar95 + -0x10;
        if ((long)(param_5 + uVar95) < 0x10) {
          pauVar97 = (undefined1 (*) [16])((long)pauVar97 - lVar98);
        }
        auVar107 = vmovdqu64_avx512vl(pauVar97[1]);
        in_ZMM0 = ZEXT1664(auVar107);
        auVar103 = vpand_avx(auVar103,auVar107);
        auVar103 = vpshufb_avx(auVar103,_SHUF_MASK);
        auVar103 = vpshufb_avx(auVar103,auVar106);
        auVar102 = vpxorq_avx512vl(auVar102,auVar103);
        if (lVar98 < 0) {
          *param_3 = *param_3 + param_5;
          uVar95 = param_5;
        }
        else {
          auVar39._8_8_ = 0;
          auVar39._0_8_ = auVar102._8_8_;
          auVar41._8_8_ = 0;
          auVar41._0_8_ = auVar105._8_8_;
          auVar107 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar39 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar107 = auVar107 ^ auVar41 << uVar96;
            }
          }
          auVar6._8_8_ = 0;
          auVar6._0_8_ = auVar102._0_8_;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = auVar105._0_8_;
          auVar108 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar6 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar108 = auVar108 ^ auVar12 << uVar96;
            }
          }
          auVar17._8_8_ = 0;
          auVar17._0_8_ = auVar102._8_8_;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = auVar105._0_8_;
          auVar118 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar17 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar118 = auVar118 ^ auVar23 << uVar96;
            }
          }
          auVar29._8_8_ = 0;
          auVar29._0_8_ = auVar102._0_8_;
          auVar35._8_8_ = 0;
          auVar35._0_8_ = auVar105._8_8_;
          auVar102 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar29 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar102 = auVar102 ^ auVar35 << uVar96;
            }
          }
          auVar102 = vpxorq_avx512vl(auVar102,auVar118);
          auVar105 = vpsrldq_avx(auVar102,8);
          auVar102 = vpslldq_avx(auVar102,8);
          auVar105 = vpxorq_avx512vl(auVar107,auVar105);
          auVar107 = vpxorq_avx512vl(auVar102,auVar108);
          auVar108 = vmovdqu64_avx512vl(_POLY2);
          auVar18._8_8_ = 0;
          auVar18._0_8_ = auVar108._8_8_;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = auVar107._0_8_;
          auVar102 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar18 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar102 = auVar102 ^ auVar24 << uVar96;
            }
          }
          auVar102 = vpslldq_avx(auVar102,8);
          auVar107 = vpxorq_avx512vl(auVar107,auVar102);
          auVar7._8_8_ = 0;
          auVar7._0_8_ = auVar108._0_8_;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = auVar107._0_8_;
          auVar102 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar7 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar102 = auVar102 ^ auVar13 << uVar96;
            }
          }
          auVar118 = vpsrldq_avx(auVar102,4);
          auVar30._8_8_ = 0;
          auVar30._0_8_ = auVar108._0_8_;
          auVar36._8_8_ = 0;
          auVar36._0_8_ = auVar107._8_8_;
          auVar102 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar30 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar102 = auVar102 ^ auVar36 << uVar96;
            }
          }
          auVar102 = vpslldq_avx(auVar102,4);
          auVar102 = vpternlogq_avx512vl(auVar102,auVar105,auVar118,0x96);
          *param_3 = 0;
          uVar95 = 0x10 - uVar95;
        }
        auVar105 = vmovdqu64_avx512vl(auVar102);
        param_2[4] = auVar105;
        auVar103 = vpshufb_avx(auVar103,_SHUF_MASK);
        auVar103 = vpshufb_avx(auVar103,auVar106);
        auVar103 = vmovdqu8_avx512vl(auVar103);
        *param_6 = auVar103;
      }
      auVar103 = vmovdqu64_avx512vl(*param_2);
      auVar117 = ZEXT1664(auVar103);
      param_5 = param_5 - uVar95;
      if (param_5 != 0) {
        if (0x100 < param_5) {
          auVar60._16_16_ = _UNK_001a9fd0;
          auVar60._0_16_ = _SHUF_MASK;
          auVar60._32_32_ = _UNK_001a9fe0;
          auVar113 = vmovdqa64_avx512f(auVar60);
          auVar114 = vmovdqa64_avx512f(_ddq_addbe_4444);
          auVar115 = vmovdqa64_avx512f(_ddq_addbe_1234);
          auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
          *(char *)((long)param_3 + -0x6e) = *(char *)((long)param_3 + -0x6e) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          if (auVar103[0] < 0xf0) {
            auVar117 = vpaddd_avx512f(auVar117,auVar115);
            auVar117 = vpaddd_avx512f(auVar117,auVar114);
            auVar117 = vpaddd_avx512f(auVar117,auVar114);
            auVar117 = vpaddd_avx512f(auVar117,auVar117);
          }
          else {
            auVar117 = vpshufb_avx512bw(auVar117,auVar113);
            auVar114 = vmovdqa64_avx512f(_ddq_add_4444);
            auVar87._1_63_ = _UNK_001aa081;
            auVar87[0] = ddq_add_1234;
            auVar117 = vpaddd_avx512f(auVar117,auVar87);
            auVar115 = vpaddd_avx512f(auVar117,auVar114);
            auVar116 = vpaddd_avx512f(auVar115,auVar114);
            auVar114 = vpaddd_avx512f(auVar116,auVar114);
            vpshufb_avx512bw(auVar117,auVar113);
            vpshufb_avx512bw(auVar115,auVar113);
            vpshufb_avx512bw(auVar116,auVar113);
            auVar117 = vpshufb_avx512bw(auVar114,auVar113);
          }
          vshufi64x2_avx512f(auVar117,auVar117);
          *(int *)param_4[-8] = *(int *)param_4[-8] + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar96 = (int)param_5 + 0xfU >> 4;
        if (uVar96 == 8) {
          auVar74._16_16_ = _UNK_001a9fd0;
          auVar74._0_16_ = _SHUF_MASK;
          auVar74._32_32_ = _UNK_001a9fe0;
          auVar113 = vmovdqa64_avx512f(auVar74);
          auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
          vextracti32x4_avx512f(auVar117,3);
          auVar114 = vpshufb_avx512bw(in_ZMM0,auVar113);
          auVar117 = vpshufb_avx512bw(auVar117,auVar113);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
          auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar114,auVar113);
          vpxorq_avx512f(auVar117,auVar113);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (7 < uVar96) {
          if (uVar96 == 0xc) {
            auVar68._16_16_ = _UNK_001a9fd0;
            auVar68._0_16_ = _SHUF_MASK;
            auVar68._32_32_ = _UNK_001a9fe0;
            auVar113 = vmovdqa64_avx512f(auVar68);
            auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
            auVar114 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            vextracti32x4_avx512f(auVar114,3);
            auVar115 = vpshufb_avx512bw(in_ZMM0,auVar113);
            auVar117 = vpshufb_avx512bw(auVar117,auVar113);
            auVar113 = vpshufb_avx512bw(auVar114,auVar113);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
            auVar114 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar115,auVar114);
            vpxorq_avx512f(auVar117,auVar114);
            vpxorq_avx512f(auVar113,auVar114);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 < 0xc) {
            if (uVar96 == 0xb) {
              auVar67._16_16_ = _UNK_001a9fd0;
              auVar67._0_16_ = _SHUF_MASK;
              auVar67._32_32_ = _UNK_001a9fe0;
              auVar113 = vmovdqa64_avx512f(auVar67);
              auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
              *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
              uVar2 = in(uVar43);
              *(undefined4 *)*param_1 = uVar2;
              ddq_add_1234 = ddq_add_1234 + '\x01';
              auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
              auVar114 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
              vextracti32x4_avx512f(auVar114,2);
              auVar115 = vpshufb_avx512bw(in_ZMM0,auVar113);
              auVar117 = vpshufb_avx512bw(auVar117,auVar113);
              auVar113 = vpshufb_avx512bw(auVar114,auVar113);
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
              auVar114 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
              vpxorq_avx512f(auVar115,auVar114);
              vpxorq_avx512f(auVar117,auVar114);
              vpxorq_avx512f(auVar113,auVar114);
              vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (uVar96 == 10) {
              auVar66._16_16_ = _UNK_001a9fd0;
              auVar66._0_16_ = _SHUF_MASK;
              auVar66._32_32_ = _UNK_001a9fe0;
              auVar113 = vmovdqa64_avx512f(auVar66);
              auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
              *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
              uVar2 = in(uVar43);
              *(undefined4 *)*param_1 = uVar2;
              ddq_add_1234 = ddq_add_1234 + '\x01';
              auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
              auVar114 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
              vextracti32x4_avx512f(auVar114,1);
              auVar115 = vpshufb_avx512bw(in_ZMM0,auVar113);
              auVar117 = vpshufb_avx512bw(auVar117,auVar113);
              auVar112 = vpshufb_avx512vl(auVar114._0_32_,auVar113._0_32_);
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
              vmovdqu8_avx512vl(*(undefined1 (*) [32])(param_4[8] + uVar95));
              auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
              vpxorq_avx512f(auVar115,auVar113);
              vpxorq_avx512f(auVar117,auVar113);
              vpxorq_avx512vl(auVar112,auVar113._0_32_);
              vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            auVar65._16_16_ = _UNK_001a9fd0;
            auVar65._0_16_ = _SHUF_MASK;
            auVar65._32_32_ = _UNK_001a9fe0;
            auVar113 = vmovdqa64_avx512f(auVar65);
            auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
            auVar114 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            vextracti32x4_avx512f(auVar114,0);
            auVar115 = vpshufb_avx512bw(in_ZMM0,auVar113);
            auVar117 = vpshufb_avx512bw(auVar117,auVar113);
            auVar102 = vpshufb_avx512vl(auVar114._0_16_,auVar113._0_16_);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_4[8] + uVar95));
            auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar115,auVar113);
            vpxorq_avx512f(auVar117,auVar113);
            vpxorq_avx512vl(auVar102,auVar113._0_16_);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 == 0x10) {
            auVar64._16_16_ = _UNK_001a9fd0;
            auVar64._0_16_ = _SHUF_MASK;
            auVar64._32_32_ = _UNK_001a9fe0;
            auVar113 = vmovdqa64_avx512f(auVar64);
            auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
            auVar114 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            auVar115 = vpaddd_avx512f(auVar117,_ddq_add_8888);
            vextracti32x4_avx512f(auVar115,3);
            auVar116 = vpshufb_avx512bw(in_ZMM0,auVar113);
            auVar117 = vpshufb_avx512bw(auVar117,auVar113);
            auVar114 = vpshufb_avx512bw(auVar114,auVar113);
            auVar113 = vpshufb_avx512bw(auVar115,auVar113);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[0xc] + uVar95));
            auVar115 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar116,auVar115);
            vpxorq_avx512f(auVar117,auVar115);
            vpxorq_avx512f(auVar114,auVar115);
            vpxorq_avx512f(auVar113,auVar115);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 == 0xf) {
            auVar63._16_16_ = _UNK_001a9fd0;
            auVar63._0_16_ = _SHUF_MASK;
            auVar63._32_32_ = _UNK_001a9fe0;
            auVar113 = vmovdqa64_avx512f(auVar63);
            auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
            auVar114 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            auVar115 = vpaddd_avx512f(auVar117,_ddq_add_8888);
            vextracti32x4_avx512f(auVar115,2);
            auVar116 = vpshufb_avx512bw(in_ZMM0,auVar113);
            auVar117 = vpshufb_avx512bw(auVar117,auVar113);
            auVar114 = vpshufb_avx512bw(auVar114,auVar113);
            auVar113 = vpshufb_avx512bw(auVar115,auVar113);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[0xc] + uVar95));
            auVar115 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar116,auVar115);
            vpxorq_avx512f(auVar117,auVar115);
            vpxorq_avx512f(auVar114,auVar115);
            vpxorq_avx512f(auVar113,auVar115);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 == 0xe) {
            auVar62._16_16_ = _UNK_001a9fd0;
            auVar62._0_16_ = _SHUF_MASK;
            auVar62._32_32_ = _UNK_001a9fe0;
            auVar113 = vmovdqa64_avx512f(auVar62);
            auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
            auVar114 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            auVar115 = vpaddd_avx512f(auVar117,_ddq_add_8888);
            vextracti32x4_avx512f(auVar115,1);
            auVar116 = vpshufb_avx512bw(in_ZMM0,auVar113);
            auVar117 = vpshufb_avx512bw(auVar117,auVar113);
            auVar114 = vpshufb_avx512bw(auVar114,auVar113);
            auVar112 = vpshufb_avx512vl(auVar115._0_32_,auVar113._0_32_);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
            vmovdqu8_avx512vl(*(undefined1 (*) [32])(param_4[0xc] + uVar95));
            auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar116,auVar113);
            vpxorq_avx512f(auVar117,auVar113);
            vpxorq_avx512f(auVar114,auVar113);
            vpxorq_avx512vl(auVar112,auVar113._0_32_);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          auVar61._16_16_ = _UNK_001a9fd0;
          auVar61._0_16_ = _SHUF_MASK;
          auVar61._32_32_ = _UNK_001a9fe0;
          auVar113 = vmovdqa64_avx512f(auVar61);
          auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
          auVar114 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
          auVar115 = vpaddd_avx512f(auVar117,_ddq_add_8888);
          vextracti32x4_avx512f(auVar115,0);
          auVar116 = vpshufb_avx512bw(in_ZMM0,auVar113);
          auVar117 = vpshufb_avx512bw(auVar117,auVar113);
          auVar114 = vpshufb_avx512bw(auVar114,auVar113);
          auVar102 = vpshufb_avx512vl(auVar115._0_16_,auVar113._0_16_);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
          vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_4[0xc] + uVar95));
          auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar116,auVar113);
          vpxorq_avx512f(auVar117,auVar113);
          vpxorq_avx512f(auVar114,auVar113);
          vpxorq_avx512vl(auVar102,auVar113._0_16_);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar96 == 4) {
          auVar73._16_16_ = _UNK_001a9fd0;
          auVar73._0_16_ = _SHUF_MASK;
          auVar73._32_32_ = _UNK_001a9fe0;
          auVar113 = vmovdqa64_avx512f(auVar73);
          vshufi64x2_avx512f(auVar117,auVar117);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          vextracti32x4_avx512f(in_ZMM0,3);
          auVar117 = vpshufb_avx512bw(in_ZMM0,auVar113);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar117,auVar113);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (3 < uVar96) {
          if (uVar96 == 7) {
            auVar71._16_16_ = _UNK_001a9fd0;
            auVar71._0_16_ = _SHUF_MASK;
            auVar71._32_32_ = _UNK_001a9fe0;
            auVar113 = vmovdqa64_avx512f(auVar71);
            auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
            vextracti32x4_avx512f(auVar117,2);
            auVar114 = vpshufb_avx512bw(in_ZMM0,auVar113);
            auVar117 = vpshufb_avx512bw(auVar117,auVar113);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar114,auVar113);
            vpxorq_avx512f(auVar117,auVar113);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 == 6) {
            auVar70._16_16_ = _UNK_001a9fd0;
            auVar70._0_16_ = _SHUF_MASK;
            auVar70._32_32_ = _UNK_001a9fe0;
            auVar113 = vmovdqa64_avx512f(auVar70);
            auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
            vextracti32x4_avx512f(auVar117,1);
            auVar114 = vpshufb_avx512bw(in_ZMM0,auVar113);
            auVar112 = vpshufb_avx512vl(auVar117._0_32_,auVar113._0_32_);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512vl(*(undefined1 (*) [32])(param_4[4] + uVar95));
            auVar117 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar114,auVar117);
            vpxorq_avx512vl(auVar112,auVar117._0_32_);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          auVar69._16_16_ = _UNK_001a9fd0;
          auVar69._0_16_ = _SHUF_MASK;
          auVar69._32_32_ = _UNK_001a9fe0;
          auVar113 = vmovdqa64_avx512f(auVar69);
          auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
          vextracti32x4_avx512f(auVar117,0);
          auVar114 = vpshufb_avx512bw(in_ZMM0,auVar113);
          auVar102 = vpshufb_avx512vl(auVar117._0_16_,auVar113._0_16_);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_4[4] + uVar95));
          auVar117 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar114,auVar117);
          vpxorq_avx512vl(auVar102,auVar117._0_16_);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar96 == 3) {
          auVar72._16_16_ = _UNK_001a9fd0;
          auVar72._0_16_ = _SHUF_MASK;
          auVar72._32_32_ = _UNK_001a9fe0;
          auVar113 = vmovdqa64_avx512f(auVar72);
          vshufi64x2_avx512f(auVar117,auVar117);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          vextracti32x4_avx512f(in_ZMM0,2);
          auVar117 = vpshufb_avx512bw(in_ZMM0,auVar113);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar117,auVar113);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar96 == 2) {
          auVar111._16_16_ = _UNK_001a9fd0;
          auVar111._0_16_ = _SHUF_MASK;
          auVar112 = vmovdqa64_avx512vl(auVar111);
          auVar111 = vshufi64x2_avx512vl(ZEXT1632(auVar103),ZEXT1632(auVar103));
          ddq_add_1234 = ddq_add_1234 + '\x01';
          vextracti32x4_avx512f(ZEXT3264(auVar111),1);
          auVar112 = vpshufb_avx512vl(auVar111,auVar112);
          vmovdqu8_avx512vl(*(undefined1 (*) [32])
                             (CONCAT62(uVar93,CONCAT11(cVar92 + cVar88,uVar91)) + uVar95));
          auVar117 = vbroadcastf64x2_avx512dq(*param_1);
          vpxorq_avx512vl(auVar112,auVar117._0_32_);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        auVar105 = vmovdqa64_avx512vl(_SHUF_MASK);
        auVar103 = vpaddd_avx(auVar103,_ONE);
        uVar94 = *(ulong *)(&byte64_len_to_mask_table + param_5 * 8);
        auVar106 = vextracti32x4_avx512f(ZEXT1664(auVar103),0);
        auVar103 = vpshufb_avx512vl(auVar103,auVar105);
        auVar107 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(*param_4 + uVar95));
        auVar100[1] = ((byte)(uVar94 >> 1) & 1) * auVar107[1];
        auVar100[0] = ((byte)uVar94 & 1) * auVar107[0];
        auVar100[2] = ((byte)(uVar94 >> 2) & 1) * auVar107[2];
        auVar100[3] = ((byte)(uVar94 >> 3) & 1) * auVar107[3];
        auVar100[4] = ((byte)(uVar94 >> 4) & 1) * auVar107[4];
        auVar100[5] = ((byte)(uVar94 >> 5) & 1) * auVar107[5];
        auVar100[6] = ((byte)(uVar94 >> 6) & 1) * auVar107[6];
        auVar100[7] = ((byte)(uVar94 >> 7) & 1) * auVar107[7];
        bVar3 = (byte)(uVar94 >> 8);
        auVar100[8] = (bVar3 & 1) * auVar107[8];
        auVar100[9] = ((byte)(uVar94 >> 9) & 1) * auVar107[9];
        auVar100[10] = ((byte)(uVar94 >> 10) & 1) * auVar107[10];
        auVar100[0xb] = ((byte)(uVar94 >> 0xb) & 1) * auVar107[0xb];
        auVar100[0xc] = ((byte)(uVar94 >> 0xc) & 1) * auVar107[0xc];
        auVar100[0xd] = ((byte)(uVar94 >> 0xd) & 1) * auVar107[0xd];
        auVar100[0xe] = ((byte)(uVar94 >> 0xe) & 1) * auVar107[0xe];
        auVar100[0xf] = ((byte)(uVar94 >> 0xf) & 1) * auVar107[0xf];
        auVar117 = vbroadcastf64x2_avx512dq(*param_1);
        auVar103 = vpxorq_avx512vl(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 8));
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(param_1[1]);
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[1] + 8));
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(param_1[2]);
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[2] + 8));
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(param_1[3]);
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[3] + 8));
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(param_1[4]);
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[4] + 8));
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(param_1[5]);
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[5] + 8));
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(param_1[6]);
        auVar103 = aesenclast(auVar103,auVar117._0_16_);
        auVar107 = vpxorq_avx512vl(auVar103,auVar100);
        auVar108 = vextracti32x4_avx512f(ZEXT1664(auVar107),0);
        auVar103 = vmovdqu8_avx512vl(auVar107);
        *(undefined1 (*) [16])(*param_6 + uVar95) = auVar103;
        auVar117 = vmovdqu8_avx512bw(ZEXT1664(auVar107));
        auVar101[1] = ((byte)(uVar94 >> 1) & 1) * auVar117[1];
        auVar101[0] = ((byte)uVar94 & 1) * auVar117[0];
        auVar101[2] = ((byte)(uVar94 >> 2) & 1) * auVar117[2];
        auVar101[3] = ((byte)(uVar94 >> 3) & 1) * auVar117[3];
        auVar101[4] = ((byte)(uVar94 >> 4) & 1) * auVar117[4];
        auVar101[5] = ((byte)(uVar94 >> 5) & 1) * auVar117[5];
        auVar101[6] = ((byte)(uVar94 >> 6) & 1) * auVar117[6];
        auVar101[7] = ((byte)(uVar94 >> 7) & 1) * auVar117[7];
        auVar101[8] = (bVar3 & 1) * auVar117[8];
        auVar101[9] = ((byte)(uVar94 >> 9) & 1) * auVar117[9];
        auVar101[10] = ((byte)(uVar94 >> 10) & 1) * auVar117[10];
        auVar101[0xb] = ((byte)(uVar94 >> 0xb) & 1) * auVar117[0xb];
        auVar101[0xc] = ((byte)(uVar94 >> 0xc) & 1) * auVar117[0xc];
        auVar101[0xd] = ((byte)(uVar94 >> 0xd) & 1) * auVar117[0xd];
        auVar101[0xe] = ((byte)(uVar94 >> 0xe) & 1) * auVar117[0xe];
        auVar101[0xf] = ((byte)(uVar94 >> 0xf) & 1) * auVar117[0xf];
        auVar103 = vpshufb_avx512vl(auVar101,auVar105);
        auVar105 = vextracti32x4_avx512f(ZEXT1664(auVar103),0);
        if (0xf < (long)param_5) {
          *param_3 = 0;
          vpxorq_avx512f(ZEXT1664(auVar103),ZEXT1664(auVar102));
          vmovdqu64_avx512vl(param_2[0x15]);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *param_3 = param_5;
        auVar103 = vmovdqu64_avx512vl(auVar108);
        param_2[1] = auVar103;
        auVar103 = vpxorq_avx512vl(auVar102,auVar105);
        auVar102 = vmovdqu64_avx512vl(auVar106);
        *param_2 = auVar102;
        auVar102 = vmovdqu64_avx512vl(auVar103);
        param_2[4] = auVar102;
      }
    }
  }
  else if (iVar89 == 0xd) {
    if (param_5 != 0) {
      auVar102 = vmovdqu64_avx512vl(param_2[4]);
      uVar95 = *param_3;
      if (uVar95 != 0) {
        uVar94 = 0x10;
        if (param_5 < 0x10) {
          uVar94 = param_5;
        }
        uVar1 = *(ushort *)(&byte_len_to_mask_table + uVar94 * 2);
        auVar103 = vmovdqu8_avx512vl(*param_4);
        auVar104[1] = ((byte)(uVar1 >> 1) & 1) * auVar103[1];
        auVar104[0] = ((byte)uVar1 & 1) * auVar103[0];
        auVar104[2] = ((byte)(uVar1 >> 2) & 1) * auVar103[2];
        auVar104[3] = ((byte)(uVar1 >> 3) & 1) * auVar103[3];
        auVar104[4] = ((byte)(uVar1 >> 4) & 1) * auVar103[4];
        auVar104[5] = ((byte)(uVar1 >> 5) & 1) * auVar103[5];
        auVar104[6] = ((byte)(uVar1 >> 6) & 1) * auVar103[6];
        auVar104[7] = ((byte)(uVar1 >> 7) & 1) * auVar103[7];
        bVar3 = (byte)(uVar1 >> 8);
        auVar104[8] = (bVar3 & 1) * auVar103[8];
        auVar104[9] = (bVar3 >> 1 & 1) * auVar103[9];
        auVar104[10] = (bVar3 >> 2 & 1) * auVar103[10];
        auVar104[0xb] = (bVar3 >> 3 & 1) * auVar103[0xb];
        auVar104[0xc] = (bVar3 >> 4 & 1) * auVar103[0xc];
        auVar104[0xd] = (bVar3 >> 5 & 1) * auVar103[0xd];
        auVar104[0xe] = (bVar3 >> 6 & 1) * auVar103[0xe];
        auVar104[0xf] = -((char)bVar3 >> 7) * auVar103[0xf];
        auVar103 = vmovdqu64_avx512vl(param_2[1]);
        auVar105 = vmovdqu64_avx512vl(param_2[0x15]);
        pauVar97 = (undefined1 (*) [16])(&SHIFT_MASK + uVar95);
        auVar106 = vmovdqu64_avx512vl(*pauVar97);
        auVar103 = vpshufb_avx(auVar103,auVar106);
        auVar103 = vpxorq_avx512vl(auVar103,auVar104);
        lVar98 = param_5 + uVar95 + -0x10;
        if ((long)(param_5 + uVar95) < 0x10) {
          pauVar97 = (undefined1 (*) [16])((long)pauVar97 - lVar98);
        }
        auVar107 = vmovdqu64_avx512vl(pauVar97[1]);
        in_ZMM0 = ZEXT1664(auVar107);
        auVar103 = vpand_avx(auVar103,auVar107);
        auVar103 = vpshufb_avx(auVar103,_SHUF_MASK);
        auVar103 = vpshufb_avx(auVar103,auVar106);
        auVar102 = vpxorq_avx512vl(auVar102,auVar103);
        if (lVar98 < 0) {
          *param_3 = *param_3 + param_5;
          uVar95 = param_5;
        }
        else {
          auVar40._8_8_ = 0;
          auVar40._0_8_ = auVar102._8_8_;
          auVar42._8_8_ = 0;
          auVar42._0_8_ = auVar105._8_8_;
          auVar107 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar40 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar107 = auVar107 ^ auVar42 << uVar96;
            }
          }
          auVar8._8_8_ = 0;
          auVar8._0_8_ = auVar102._0_8_;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = auVar105._0_8_;
          auVar108 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar8 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar108 = auVar108 ^ auVar14 << uVar96;
            }
          }
          auVar19._8_8_ = 0;
          auVar19._0_8_ = auVar102._8_8_;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = auVar105._0_8_;
          auVar118 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar19 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar118 = auVar118 ^ auVar25 << uVar96;
            }
          }
          auVar31._8_8_ = 0;
          auVar31._0_8_ = auVar102._0_8_;
          auVar37._8_8_ = 0;
          auVar37._0_8_ = auVar105._8_8_;
          auVar102 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar31 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar102 = auVar102 ^ auVar37 << uVar96;
            }
          }
          auVar102 = vpxorq_avx512vl(auVar102,auVar118);
          auVar105 = vpsrldq_avx(auVar102,8);
          auVar102 = vpslldq_avx(auVar102,8);
          auVar105 = vpxorq_avx512vl(auVar107,auVar105);
          auVar107 = vpxorq_avx512vl(auVar102,auVar108);
          auVar108 = vmovdqu64_avx512vl(_POLY2);
          auVar20._8_8_ = 0;
          auVar20._0_8_ = auVar108._8_8_;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = auVar107._0_8_;
          auVar102 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar20 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar102 = auVar102 ^ auVar26 << uVar96;
            }
          }
          auVar102 = vpslldq_avx(auVar102,8);
          auVar107 = vpxorq_avx512vl(auVar107,auVar102);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = auVar108._0_8_;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = auVar107._0_8_;
          auVar102 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar9 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar102 = auVar102 ^ auVar15 << uVar96;
            }
          }
          auVar118 = vpsrldq_avx(auVar102,4);
          auVar32._8_8_ = 0;
          auVar32._0_8_ = auVar108._0_8_;
          auVar38._8_8_ = 0;
          auVar38._0_8_ = auVar107._8_8_;
          auVar102 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar32 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar102 = auVar102 ^ auVar38 << uVar96;
            }
          }
          auVar102 = vpslldq_avx(auVar102,4);
          auVar102 = vpternlogq_avx512vl(auVar102,auVar105,auVar118,0x96);
          *param_3 = 0;
          uVar95 = 0x10 - uVar95;
        }
        auVar105 = vmovdqu64_avx512vl(auVar102);
        param_2[4] = auVar105;
        auVar103 = vpshufb_avx(auVar103,_SHUF_MASK);
        auVar103 = vpshufb_avx(auVar103,auVar106);
        auVar103 = vmovdqu8_avx512vl(auVar103);
        *param_6 = auVar103;
      }
      auVar103 = vmovdqu64_avx512vl(*param_2);
      auVar117 = ZEXT1664(auVar103);
      param_5 = param_5 - uVar95;
      if (param_5 != 0) {
        if (0x100 < param_5) {
          auVar45._16_16_ = _UNK_001a9fd0;
          auVar45._0_16_ = _SHUF_MASK;
          auVar45._32_32_ = _UNK_001a9fe0;
          auVar113 = vmovdqa64_avx512f(auVar45);
          auVar114 = vmovdqa64_avx512f(_ddq_addbe_4444);
          auVar115 = vmovdqa64_avx512f(_ddq_addbe_1234);
          auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
          *(char *)((long)param_3 + -0x6e) = *(char *)((long)param_3 + -0x6e) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          if (auVar103[0] < 0xf0) {
            auVar117 = vpaddd_avx512f(auVar117,auVar115);
            auVar117 = vpaddd_avx512f(auVar117,auVar114);
            auVar117 = vpaddd_avx512f(auVar117,auVar114);
            auVar117 = vpaddd_avx512f(auVar117,auVar117);
          }
          else {
            auVar117 = vpshufb_avx512bw(auVar117,auVar113);
            auVar114 = vmovdqa64_avx512f(_ddq_add_4444);
            auVar86._1_63_ = _UNK_001aa081;
            auVar86[0] = ddq_add_1234;
            auVar117 = vpaddd_avx512f(auVar117,auVar86);
            auVar115 = vpaddd_avx512f(auVar117,auVar114);
            auVar116 = vpaddd_avx512f(auVar115,auVar114);
            auVar114 = vpaddd_avx512f(auVar116,auVar114);
            vpshufb_avx512bw(auVar117,auVar113);
            vpshufb_avx512bw(auVar115,auVar113);
            vpshufb_avx512bw(auVar116,auVar113);
            auVar117 = vpshufb_avx512bw(auVar114,auVar113);
          }
          vshufi64x2_avx512f(auVar117,auVar117);
          *(int *)param_4[-8] = *(int *)param_4[-8] + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar96 = (int)param_5 + 0xfU >> 4;
        if (uVar96 == 8) {
          auVar59._16_16_ = _UNK_001a9fd0;
          auVar59._0_16_ = _SHUF_MASK;
          auVar59._32_32_ = _UNK_001a9fe0;
          auVar113 = vmovdqa64_avx512f(auVar59);
          auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
          vextracti32x4_avx512f(auVar117,3);
          auVar114 = vpshufb_avx512bw(in_ZMM0,auVar113);
          auVar117 = vpshufb_avx512bw(auVar117,auVar113);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
          auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar114,auVar113);
          vpxorq_avx512f(auVar117,auVar113);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (7 < uVar96) {
          if (uVar96 == 0xc) {
            auVar53._16_16_ = _UNK_001a9fd0;
            auVar53._0_16_ = _SHUF_MASK;
            auVar53._32_32_ = _UNK_001a9fe0;
            auVar113 = vmovdqa64_avx512f(auVar53);
            auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
            auVar114 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            vextracti32x4_avx512f(auVar114,3);
            auVar115 = vpshufb_avx512bw(in_ZMM0,auVar113);
            auVar117 = vpshufb_avx512bw(auVar117,auVar113);
            auVar113 = vpshufb_avx512bw(auVar114,auVar113);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
            auVar114 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar115,auVar114);
            vpxorq_avx512f(auVar117,auVar114);
            vpxorq_avx512f(auVar113,auVar114);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 < 0xc) {
            if (uVar96 == 0xb) {
              auVar52._16_16_ = _UNK_001a9fd0;
              auVar52._0_16_ = _SHUF_MASK;
              auVar52._32_32_ = _UNK_001a9fe0;
              auVar113 = vmovdqa64_avx512f(auVar52);
              auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
              *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
              uVar2 = in(uVar43);
              *(undefined4 *)*param_1 = uVar2;
              ddq_add_1234 = ddq_add_1234 + '\x01';
              auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
              auVar114 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
              vextracti32x4_avx512f(auVar114,2);
              auVar115 = vpshufb_avx512bw(in_ZMM0,auVar113);
              auVar117 = vpshufb_avx512bw(auVar117,auVar113);
              auVar113 = vpshufb_avx512bw(auVar114,auVar113);
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
              auVar114 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
              vpxorq_avx512f(auVar115,auVar114);
              vpxorq_avx512f(auVar117,auVar114);
              vpxorq_avx512f(auVar113,auVar114);
              vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (uVar96 == 10) {
              auVar51._16_16_ = _UNK_001a9fd0;
              auVar51._0_16_ = _SHUF_MASK;
              auVar51._32_32_ = _UNK_001a9fe0;
              auVar113 = vmovdqa64_avx512f(auVar51);
              auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
              *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
              uVar2 = in(uVar43);
              *(undefined4 *)*param_1 = uVar2;
              ddq_add_1234 = ddq_add_1234 + '\x01';
              auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
              auVar114 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
              vextracti32x4_avx512f(auVar114,1);
              auVar115 = vpshufb_avx512bw(in_ZMM0,auVar113);
              auVar117 = vpshufb_avx512bw(auVar117,auVar113);
              auVar112 = vpshufb_avx512vl(auVar114._0_32_,auVar113._0_32_);
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
              vmovdqu8_avx512vl(*(undefined1 (*) [32])(param_4[8] + uVar95));
              auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
              vpxorq_avx512f(auVar115,auVar113);
              vpxorq_avx512f(auVar117,auVar113);
              vpxorq_avx512vl(auVar112,auVar113._0_32_);
              vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            auVar50._16_16_ = _UNK_001a9fd0;
            auVar50._0_16_ = _SHUF_MASK;
            auVar50._32_32_ = _UNK_001a9fe0;
            auVar113 = vmovdqa64_avx512f(auVar50);
            auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
            auVar114 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            vextracti32x4_avx512f(auVar114,0);
            auVar115 = vpshufb_avx512bw(in_ZMM0,auVar113);
            auVar117 = vpshufb_avx512bw(auVar117,auVar113);
            auVar102 = vpshufb_avx512vl(auVar114._0_16_,auVar113._0_16_);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_4[8] + uVar95));
            auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar115,auVar113);
            vpxorq_avx512f(auVar117,auVar113);
            vpxorq_avx512vl(auVar102,auVar113._0_16_);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 == 0x10) {
            auVar49._16_16_ = _UNK_001a9fd0;
            auVar49._0_16_ = _SHUF_MASK;
            auVar49._32_32_ = _UNK_001a9fe0;
            auVar113 = vmovdqa64_avx512f(auVar49);
            auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
            auVar114 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            auVar115 = vpaddd_avx512f(auVar117,_ddq_add_8888);
            vextracti32x4_avx512f(auVar115,3);
            auVar116 = vpshufb_avx512bw(in_ZMM0,auVar113);
            auVar117 = vpshufb_avx512bw(auVar117,auVar113);
            auVar114 = vpshufb_avx512bw(auVar114,auVar113);
            auVar113 = vpshufb_avx512bw(auVar115,auVar113);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[0xc] + uVar95));
            auVar115 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar116,auVar115);
            vpxorq_avx512f(auVar117,auVar115);
            vpxorq_avx512f(auVar114,auVar115);
            vpxorq_avx512f(auVar113,auVar115);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 == 0xf) {
            auVar48._16_16_ = _UNK_001a9fd0;
            auVar48._0_16_ = _SHUF_MASK;
            auVar48._32_32_ = _UNK_001a9fe0;
            auVar113 = vmovdqa64_avx512f(auVar48);
            auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
            auVar114 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            auVar115 = vpaddd_avx512f(auVar117,_ddq_add_8888);
            vextracti32x4_avx512f(auVar115,2);
            auVar116 = vpshufb_avx512bw(in_ZMM0,auVar113);
            auVar117 = vpshufb_avx512bw(auVar117,auVar113);
            auVar114 = vpshufb_avx512bw(auVar114,auVar113);
            auVar113 = vpshufb_avx512bw(auVar115,auVar113);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[0xc] + uVar95));
            auVar115 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar116,auVar115);
            vpxorq_avx512f(auVar117,auVar115);
            vpxorq_avx512f(auVar114,auVar115);
            vpxorq_avx512f(auVar113,auVar115);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 == 0xe) {
            auVar47._16_16_ = _UNK_001a9fd0;
            auVar47._0_16_ = _SHUF_MASK;
            auVar47._32_32_ = _UNK_001a9fe0;
            auVar113 = vmovdqa64_avx512f(auVar47);
            auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
            auVar114 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            auVar115 = vpaddd_avx512f(auVar117,_ddq_add_8888);
            vextracti32x4_avx512f(auVar115,1);
            auVar116 = vpshufb_avx512bw(in_ZMM0,auVar113);
            auVar117 = vpshufb_avx512bw(auVar117,auVar113);
            auVar114 = vpshufb_avx512bw(auVar114,auVar113);
            auVar112 = vpshufb_avx512vl(auVar115._0_32_,auVar113._0_32_);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
            vmovdqu8_avx512vl(*(undefined1 (*) [32])(param_4[0xc] + uVar95));
            auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar116,auVar113);
            vpxorq_avx512f(auVar117,auVar113);
            vpxorq_avx512f(auVar114,auVar113);
            vpxorq_avx512vl(auVar112,auVar113._0_32_);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          auVar46._16_16_ = _UNK_001a9fd0;
          auVar46._0_16_ = _SHUF_MASK;
          auVar46._32_32_ = _UNK_001a9fe0;
          auVar113 = vmovdqa64_avx512f(auVar46);
          auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
          auVar114 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
          auVar115 = vpaddd_avx512f(auVar117,_ddq_add_8888);
          vextracti32x4_avx512f(auVar115,0);
          auVar116 = vpshufb_avx512bw(in_ZMM0,auVar113);
          auVar117 = vpshufb_avx512bw(auVar117,auVar113);
          auVar114 = vpshufb_avx512bw(auVar114,auVar113);
          auVar102 = vpshufb_avx512vl(auVar115._0_16_,auVar113._0_16_);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
          vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_4[0xc] + uVar95));
          auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar116,auVar113);
          vpxorq_avx512f(auVar117,auVar113);
          vpxorq_avx512f(auVar114,auVar113);
          vpxorq_avx512vl(auVar102,auVar113._0_16_);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar96 == 4) {
          auVar58._16_16_ = _UNK_001a9fd0;
          auVar58._0_16_ = _SHUF_MASK;
          auVar58._32_32_ = _UNK_001a9fe0;
          auVar113 = vmovdqa64_avx512f(auVar58);
          vshufi64x2_avx512f(auVar117,auVar117);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          vextracti32x4_avx512f(in_ZMM0,3);
          auVar117 = vpshufb_avx512bw(in_ZMM0,auVar113);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar117,auVar113);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (3 < uVar96) {
          if (uVar96 == 7) {
            auVar56._16_16_ = _UNK_001a9fd0;
            auVar56._0_16_ = _SHUF_MASK;
            auVar56._32_32_ = _UNK_001a9fe0;
            auVar113 = vmovdqa64_avx512f(auVar56);
            auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
            vextracti32x4_avx512f(auVar117,2);
            auVar114 = vpshufb_avx512bw(in_ZMM0,auVar113);
            auVar117 = vpshufb_avx512bw(auVar117,auVar113);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar114,auVar113);
            vpxorq_avx512f(auVar117,auVar113);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 == 6) {
            auVar55._16_16_ = _UNK_001a9fd0;
            auVar55._0_16_ = _SHUF_MASK;
            auVar55._32_32_ = _UNK_001a9fe0;
            auVar113 = vmovdqa64_avx512f(auVar55);
            auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
            vextracti32x4_avx512f(auVar117,1);
            auVar114 = vpshufb_avx512bw(in_ZMM0,auVar113);
            auVar112 = vpshufb_avx512vl(auVar117._0_32_,auVar113._0_32_);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512vl(*(undefined1 (*) [32])(param_4[4] + uVar95));
            auVar117 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar114,auVar117);
            vpxorq_avx512vl(auVar112,auVar117._0_32_);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          auVar54._16_16_ = _UNK_001a9fd0;
          auVar54._0_16_ = _SHUF_MASK;
          auVar54._32_32_ = _UNK_001a9fe0;
          auVar113 = vmovdqa64_avx512f(auVar54);
          auVar117 = vshufi64x2_avx512f(auVar117,auVar117);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          auVar117 = vpaddd_avx512f(auVar117,_ddq_add_5678);
          vextracti32x4_avx512f(auVar117,0);
          auVar114 = vpshufb_avx512bw(in_ZMM0,auVar113);
          auVar102 = vpshufb_avx512vl(auVar117._0_16_,auVar113._0_16_);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_4[4] + uVar95));
          auVar117 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar114,auVar117);
          vpxorq_avx512vl(auVar102,auVar117._0_16_);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar96 == 3) {
          auVar57._16_16_ = _UNK_001a9fd0;
          auVar57._0_16_ = _SHUF_MASK;
          auVar57._32_32_ = _UNK_001a9fe0;
          auVar113 = vmovdqa64_avx512f(auVar57);
          vshufi64x2_avx512f(auVar117,auVar117);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          vextracti32x4_avx512f(in_ZMM0,2);
          auVar117 = vpshufb_avx512bw(in_ZMM0,auVar113);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar117,auVar113);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar96 == 2) {
          auVar44._16_16_ = _UNK_001a9fd0;
          auVar44._0_16_ = _SHUF_MASK;
          auVar112 = vmovdqa64_avx512vl(auVar44);
          auVar111 = vshufi64x2_avx512vl(ZEXT1632(auVar103),ZEXT1632(auVar103));
          ddq_add_1234 = ddq_add_1234 + '\x01';
          vextracti32x4_avx512f(ZEXT3264(auVar111),1);
          auVar112 = vpshufb_avx512vl(auVar111,auVar112);
          vmovdqu8_avx512vl(*(undefined1 (*) [32])
                             (CONCAT62(uVar93,CONCAT11(cVar92 + cVar88,uVar91)) + uVar95));
          auVar117 = vbroadcastf64x2_avx512dq(*param_1);
          vpxorq_avx512vl(auVar112,auVar117._0_32_);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        auVar105 = vmovdqa64_avx512vl(_SHUF_MASK);
        auVar103 = vpaddd_avx(auVar103,_ONE);
        uVar94 = *(ulong *)(&byte64_len_to_mask_table + param_5 * 8);
        auVar106 = vextracti32x4_avx512f(ZEXT1664(auVar103),0);
        auVar103 = vpshufb_avx512vl(auVar103,auVar105);
        auVar107 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(*param_4 + uVar95));
        auVar109[1] = ((byte)(uVar94 >> 1) & 1) * auVar107[1];
        auVar109[0] = ((byte)uVar94 & 1) * auVar107[0];
        auVar109[2] = ((byte)(uVar94 >> 2) & 1) * auVar107[2];
        auVar109[3] = ((byte)(uVar94 >> 3) & 1) * auVar107[3];
        auVar109[4] = ((byte)(uVar94 >> 4) & 1) * auVar107[4];
        auVar109[5] = ((byte)(uVar94 >> 5) & 1) * auVar107[5];
        auVar109[6] = ((byte)(uVar94 >> 6) & 1) * auVar107[6];
        auVar109[7] = ((byte)(uVar94 >> 7) & 1) * auVar107[7];
        bVar3 = (byte)(uVar94 >> 8);
        auVar109[8] = (bVar3 & 1) * auVar107[8];
        auVar109[9] = ((byte)(uVar94 >> 9) & 1) * auVar107[9];
        auVar109[10] = ((byte)(uVar94 >> 10) & 1) * auVar107[10];
        auVar109[0xb] = ((byte)(uVar94 >> 0xb) & 1) * auVar107[0xb];
        auVar109[0xc] = ((byte)(uVar94 >> 0xc) & 1) * auVar107[0xc];
        auVar109[0xd] = ((byte)(uVar94 >> 0xd) & 1) * auVar107[0xd];
        auVar109[0xe] = ((byte)(uVar94 >> 0xe) & 1) * auVar107[0xe];
        auVar109[0xf] = ((byte)(uVar94 >> 0xf) & 1) * auVar107[0xf];
        auVar117 = vbroadcastf64x2_avx512dq(*param_1);
        auVar103 = vpxorq_avx512vl(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 8));
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(param_1[1]);
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[1] + 8));
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(param_1[2]);
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[2] + 8));
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(param_1[3]);
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[3] + 8));
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(param_1[4]);
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[4] + 8));
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(param_1[5]);
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[5] + 8));
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(param_1[6]);
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[6] + 8));
        auVar103 = aesenc(auVar103,auVar117._0_16_);
        auVar117 = vbroadcastf64x2_avx512dq(param_1[7]);
        auVar103 = aesenclast(auVar103,auVar117._0_16_);
        auVar107 = vpxorq_avx512vl(auVar103,auVar109);
        auVar108 = vextracti32x4_avx512f(ZEXT1664(auVar107),0);
        auVar103 = vmovdqu8_avx512vl(auVar107);
        *(undefined1 (*) [16])(*param_6 + uVar95) = auVar103;
        auVar117 = vmovdqu8_avx512bw(ZEXT1664(auVar107));
        auVar110[1] = ((byte)(uVar94 >> 1) & 1) * auVar117[1];
        auVar110[0] = ((byte)uVar94 & 1) * auVar117[0];
        auVar110[2] = ((byte)(uVar94 >> 2) & 1) * auVar117[2];
        auVar110[3] = ((byte)(uVar94 >> 3) & 1) * auVar117[3];
        auVar110[4] = ((byte)(uVar94 >> 4) & 1) * auVar117[4];
        auVar110[5] = ((byte)(uVar94 >> 5) & 1) * auVar117[5];
        auVar110[6] = ((byte)(uVar94 >> 6) & 1) * auVar117[6];
        auVar110[7] = ((byte)(uVar94 >> 7) & 1) * auVar117[7];
        auVar110[8] = (bVar3 & 1) * auVar117[8];
        auVar110[9] = ((byte)(uVar94 >> 9) & 1) * auVar117[9];
        auVar110[10] = ((byte)(uVar94 >> 10) & 1) * auVar117[10];
        auVar110[0xb] = ((byte)(uVar94 >> 0xb) & 1) * auVar117[0xb];
        auVar110[0xc] = ((byte)(uVar94 >> 0xc) & 1) * auVar117[0xc];
        auVar110[0xd] = ((byte)(uVar94 >> 0xd) & 1) * auVar117[0xd];
        auVar110[0xe] = ((byte)(uVar94 >> 0xe) & 1) * auVar117[0xe];
        auVar110[0xf] = ((byte)(uVar94 >> 0xf) & 1) * auVar117[0xf];
        auVar103 = vpshufb_avx512vl(auVar110,auVar105);
        auVar105 = vextracti32x4_avx512f(ZEXT1664(auVar103),0);
        if (0xf < (long)param_5) {
          *param_3 = 0;
          vpxorq_avx512f(ZEXT1664(auVar103),ZEXT1664(auVar102));
          vmovdqu64_avx512vl(param_2[0x15]);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *param_3 = param_5;
        auVar103 = vmovdqu64_avx512vl(auVar108);
        param_2[1] = auVar103;
        auVar103 = vpxorq_avx512vl(auVar102,auVar105);
        auVar102 = vmovdqu64_avx512vl(auVar106);
        *param_2 = auVar102;
        auVar102 = vmovdqu64_avx512vl(auVar103);
        param_2[4] = auVar102;
      }
    }
  }
  else {
    iVar89 = 0;
  }
  if (0x100 < param_5) {
    auVar117 = ZEXT1664((undefined1  [16])0x0);
    vmovdqa64_avx512f(auVar117);
    vmovdqa64_avx512f(auVar117);
    vmovdqa64_avx512f(auVar117);
    vmovdqa64_avx512f(auVar117);
    vmovdqa64_avx512f(auVar117);
    vmovdqa64_avx512f(auVar117);
    vmovdqa64_avx512f(auVar117);
    vmovdqa64_avx512f(auVar117);
    vmovdqa64_avx512f(auVar117);
    vmovdqa64_avx512f(auVar117);
    vmovdqa64_avx512f(auVar117);
    vmovdqa64_avx512f(auVar117);
  }
  return iVar89;
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ossl_aes_gcm_decrypt_avx512
              (undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulong *param_3,
              undefined1 (*param_4) [16],ulong param_5,undefined1 (*param_6) [16])

{
  ushort uVar1;
  undefined4 uVar2;
  byte bVar3;
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
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined2 uVar43;
  undefined1 auVar44 [32];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  undefined1 auVar48 [64];
  undefined1 auVar49 [64];
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  undefined1 auVar55 [64];
  undefined1 auVar56 [64];
  undefined1 auVar57 [64];
  undefined1 auVar58 [64];
  undefined1 auVar59 [64];
  undefined1 auVar60 [64];
  undefined1 auVar61 [64];
  undefined1 auVar62 [64];
  undefined1 auVar63 [64];
  undefined1 auVar64 [64];
  undefined1 auVar65 [64];
  undefined1 auVar66 [64];
  undefined1 auVar67 [64];
  undefined1 auVar68 [64];
  undefined1 auVar69 [64];
  undefined1 auVar70 [64];
  undefined1 auVar71 [64];
  undefined1 auVar72 [64];
  undefined1 auVar73 [64];
  undefined1 auVar74 [64];
  undefined1 auVar75 [64];
  undefined1 auVar76 [64];
  undefined1 auVar77 [64];
  undefined1 auVar78 [64];
  undefined1 auVar79 [64];
  undefined1 auVar80 [64];
  undefined1 auVar81 [64];
  undefined1 auVar82 [64];
  undefined1 auVar83 [64];
  undefined1 auVar84 [64];
  undefined1 auVar85 [64];
  undefined1 auVar86 [64];
  undefined1 auVar87 [64];
  char cVar88;
  char cVar90;
  int iVar89;
  undefined1 uVar91;
  char cVar92;
  undefined6 uVar93;
  ulong uVar94;
  ulong uVar95;
  uint uVar96;
  undefined1 (*pauVar97) [16];
  long lVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [64];
  undefined1 auVar113 [64];
  undefined1 auVar114 [64];
  undefined1 auVar115 [64];
  undefined1 in_ZMM0 [64];
  undefined1 auVar116 [64];
  undefined1 auVar103 [16];
  
  uVar93 = (undefined6)((ulong)param_4 >> 0x10);
  cVar92 = (char)((ulong)param_4 >> 8);
  uVar91 = SUB81(param_4,0);
  iVar89 = *(int *)param_1[0xf];
  cVar88 = (char)iVar89;
  cVar90 = (char)((uint)iVar89 >> 8);
  uVar43 = SUB82(param_3,0);
  if (iVar89 == 9) {
    if (param_5 != 0) {
      auVar102 = vmovdqu64_avx512vl(param_2[4]);
      uVar95 = *param_3;
      if (uVar95 != 0) {
        uVar94 = 0x10;
        if (param_5 < 0x10) {
          uVar94 = param_5;
        }
        uVar1 = *(ushort *)(&byte_len_to_mask_table + uVar94 * 2);
        auVar103 = vmovdqu8_avx512vl(*param_4);
        auVar105[1] = ((byte)(uVar1 >> 1) & 1) * auVar103[1];
        auVar105[0] = ((byte)uVar1 & 1) * auVar103[0];
        auVar105[2] = ((byte)(uVar1 >> 2) & 1) * auVar103[2];
        auVar105[3] = ((byte)(uVar1 >> 3) & 1) * auVar103[3];
        auVar105[4] = ((byte)(uVar1 >> 4) & 1) * auVar103[4];
        auVar105[5] = ((byte)(uVar1 >> 5) & 1) * auVar103[5];
        auVar105[6] = ((byte)(uVar1 >> 6) & 1) * auVar103[6];
        auVar105[7] = ((byte)(uVar1 >> 7) & 1) * auVar103[7];
        bVar3 = (byte)(uVar1 >> 8);
        auVar105[8] = (bVar3 & 1) * auVar103[8];
        auVar105[9] = (bVar3 >> 1 & 1) * auVar103[9];
        auVar105[10] = (bVar3 >> 2 & 1) * auVar103[10];
        auVar105[0xb] = (bVar3 >> 3 & 1) * auVar103[0xb];
        auVar105[0xc] = (bVar3 >> 4 & 1) * auVar103[0xc];
        auVar105[0xd] = (bVar3 >> 5 & 1) * auVar103[0xd];
        auVar105[0xe] = (bVar3 >> 6 & 1) * auVar103[0xe];
        auVar105[0xf] = -((char)bVar3 >> 7) * auVar103[0xf];
        auVar103 = vmovdqu64_avx512vl(param_2[1]);
        auVar106 = vmovdqu64_avx512vl(param_2[0x15]);
        pauVar97 = (undefined1 (*) [16])(&SHIFT_MASK + uVar95);
        auVar107 = vmovdqu64_avx512vl(*pauVar97);
        auVar103 = vpshufb_avx(auVar103,auVar107);
        auVar108 = vmovdqa64_avx512vl(auVar105);
        auVar103 = vpxorq_avx512vl(auVar103,auVar105);
        lVar98 = param_5 + uVar95 + -0x10;
        if ((long)(param_5 + uVar95) < 0x10) {
          pauVar97 = (undefined1 (*) [16])((long)pauVar97 - lVar98);
        }
        auVar105 = vmovdqu64_avx512vl(pauVar97[1]);
        in_ZMM0 = ZEXT1664(auVar105);
        auVar103 = vpand_avx(auVar103,auVar105);
        auVar105 = vpand_avx(auVar108,auVar105);
        auVar105 = vpshufb_avx(auVar105,_SHUF_MASK);
        auVar105 = vpshufb_avx(auVar105,auVar107);
        auVar102 = vpxorq_avx512vl(auVar102,auVar105);
        if (lVar98 < 0) {
          *param_3 = *param_3 + param_5;
          uVar95 = param_5;
        }
        else {
          auVar107._8_8_ = 0;
          auVar107._0_8_ = auVar102._8_8_;
          auVar108._8_8_ = 0;
          auVar108._0_8_ = auVar106._8_8_;
          auVar105 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar107 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar105 = auVar105 ^ auVar108 << uVar96;
            }
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = auVar102._0_8_;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = auVar106._0_8_;
          auVar107 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar4 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar107 = auVar107 ^ auVar10 << uVar96;
            }
          }
          auVar16._8_8_ = 0;
          auVar16._0_8_ = auVar102._8_8_;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = auVar106._0_8_;
          auVar108 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar16 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar108 = auVar108 ^ auVar21 << uVar96;
            }
          }
          auVar27._8_8_ = 0;
          auVar27._0_8_ = auVar102._0_8_;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = auVar106._8_8_;
          auVar102 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar27 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar102 = auVar102 ^ auVar33 << uVar96;
            }
          }
          auVar102 = vpxorq_avx512vl(auVar102,auVar108);
          auVar106 = vpsrldq_avx(auVar102,8);
          auVar102 = vpslldq_avx(auVar102,8);
          auVar105 = vpxorq_avx512vl(auVar105,auVar106);
          auVar107 = vpxorq_avx512vl(auVar102,auVar107);
          auVar108 = vmovdqu64_avx512vl(_POLY2);
          auVar106._8_8_ = 0;
          auVar106._0_8_ = auVar108._8_8_;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = auVar107._0_8_;
          auVar102 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar106 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar102 = auVar102 ^ auVar22 << uVar96;
            }
          }
          auVar102 = vpslldq_avx(auVar102,8);
          auVar106 = vpxorq_avx512vl(auVar107,auVar102);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = auVar108._0_8_;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = auVar106._0_8_;
          auVar102 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar5 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar102 = auVar102 ^ auVar11 << uVar96;
            }
          }
          auVar107 = vpsrldq_avx(auVar102,4);
          auVar28._8_8_ = 0;
          auVar28._0_8_ = auVar108._0_8_;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = auVar106._8_8_;
          auVar102 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar28 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar102 = auVar102 ^ auVar34 << uVar96;
            }
          }
          auVar102 = vpslldq_avx(auVar102,4);
          auVar102 = vpternlogq_avx512vl(auVar102,auVar105,auVar107,0x96);
          *param_3 = 0;
          uVar95 = 0x10 - uVar95;
        }
        auVar105 = vmovdqu64_avx512vl(auVar102);
        param_2[4] = auVar105;
        auVar103 = vmovdqu8_avx512vl(auVar103);
        *param_6 = auVar103;
      }
      auVar103 = vmovdqu64_avx512vl(*param_2);
      auVar116 = ZEXT1664(auVar103);
      param_5 = param_5 - uVar95;
      if (param_5 != 0) {
        if (0x100 < param_5) {
          auVar112._16_16_ = _UNK_001a9fd0;
          auVar112._0_16_ = _SHUF_MASK;
          auVar112._32_32_ = _UNK_001a9fe0;
          auVar112 = vmovdqa64_avx512f(auVar112);
          auVar113 = vmovdqa64_avx512f(_ddq_addbe_4444);
          auVar114 = vmovdqa64_avx512f(_ddq_addbe_1234);
          auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
          *(char *)((long)param_3 + -0x6e) = *(char *)((long)param_3 + -0x6e) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          if (auVar103[0] < 0xf0) {
            auVar116 = vpaddd_avx512f(auVar116,auVar114);
            auVar116 = vpaddd_avx512f(auVar116,auVar113);
            auVar116 = vpaddd_avx512f(auVar116,auVar113);
            auVar116 = vpaddd_avx512f(auVar116,auVar116);
          }
          else {
            auVar113 = vpshufb_avx512bw(auVar116,auVar112);
            auVar114 = vmovdqa64_avx512f(_ddq_add_4444);
            auVar116._1_63_ = _UNK_001aa081;
            auVar116[0] = ddq_add_1234;
            auVar116 = vpaddd_avx512f(auVar113,auVar116);
            auVar113 = vpaddd_avx512f(auVar116,auVar114);
            auVar115 = vpaddd_avx512f(auVar113,auVar114);
            auVar114 = vpaddd_avx512f(auVar115,auVar114);
            vpshufb_avx512bw(auVar116,auVar112);
            vpshufb_avx512bw(auVar113,auVar112);
            vpshufb_avx512bw(auVar115,auVar112);
            auVar116 = vpshufb_avx512bw(auVar114,auVar112);
          }
          vshufi64x2_avx512f(auVar116,auVar116);
          *(int *)param_4[-8] = *(int *)param_4[-8] + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar96 = (int)param_5 + 0xfU >> 4;
        if (uVar96 == 8) {
          auVar113._16_16_ = _UNK_001a9fd0;
          auVar113._0_16_ = _SHUF_MASK;
          auVar113._32_32_ = _UNK_001a9fe0;
          auVar112 = vmovdqa64_avx512f(auVar113);
          auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
          vextracti32x4_avx512f(auVar116,3);
          auVar113 = vpshufb_avx512bw(in_ZMM0,auVar112);
          auVar116 = vpshufb_avx512bw(auVar116,auVar112);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
          auVar112 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar113,auVar112);
          vpxorq_avx512f(auVar116,auVar112);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (7 < uVar96) {
          if (uVar96 == 0xc) {
            auVar114._16_16_ = _UNK_001a9fd0;
            auVar114._0_16_ = _SHUF_MASK;
            auVar114._32_32_ = _UNK_001a9fe0;
            auVar112 = vmovdqa64_avx512f(auVar114);
            auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
            auVar113 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            vextracti32x4_avx512f(auVar113,3);
            auVar114 = vpshufb_avx512bw(in_ZMM0,auVar112);
            auVar116 = vpshufb_avx512bw(auVar116,auVar112);
            auVar112 = vpshufb_avx512bw(auVar113,auVar112);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
            auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar114,auVar113);
            vpxorq_avx512f(auVar116,auVar113);
            vpxorq_avx512f(auVar112,auVar113);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 < 0xc) {
            if (uVar96 == 0xb) {
              auVar115._16_16_ = _UNK_001a9fd0;
              auVar115._0_16_ = _SHUF_MASK;
              auVar115._32_32_ = _UNK_001a9fe0;
              auVar112 = vmovdqa64_avx512f(auVar115);
              auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
              *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
              uVar2 = in(uVar43);
              *(undefined4 *)*param_1 = uVar2;
              ddq_add_1234 = ddq_add_1234 + '\x01';
              auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
              auVar113 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
              vextracti32x4_avx512f(auVar113,2);
              auVar114 = vpshufb_avx512bw(in_ZMM0,auVar112);
              auVar116 = vpshufb_avx512bw(auVar116,auVar112);
              auVar112 = vpshufb_avx512bw(auVar113,auVar112);
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
              auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
              vpxorq_avx512f(auVar114,auVar113);
              vpxorq_avx512f(auVar116,auVar113);
              vpxorq_avx512f(auVar112,auVar113);
              vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (uVar96 == 10) {
              auVar80._16_16_ = _UNK_001a9fd0;
              auVar80._0_16_ = _SHUF_MASK;
              auVar80._32_32_ = _UNK_001a9fe0;
              auVar112 = vmovdqa64_avx512f(auVar80);
              auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
              *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
              uVar2 = in(uVar43);
              *(undefined4 *)*param_1 = uVar2;
              ddq_add_1234 = ddq_add_1234 + '\x01';
              auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
              auVar113 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
              vextracti32x4_avx512f(auVar113,1);
              auVar114 = vpshufb_avx512bw(in_ZMM0,auVar112);
              auVar116 = vpshufb_avx512bw(auVar116,auVar112);
              auVar111 = vpshufb_avx512vl(auVar113._0_32_,auVar112._0_32_);
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
              vmovdqu8_avx512vl(*(undefined1 (*) [32])(param_4[8] + uVar95));
              auVar112 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
              vpxorq_avx512f(auVar114,auVar112);
              vpxorq_avx512f(auVar116,auVar112);
              vpxorq_avx512vl(auVar111,auVar112._0_32_);
              vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            auVar79._16_16_ = _UNK_001a9fd0;
            auVar79._0_16_ = _SHUF_MASK;
            auVar79._32_32_ = _UNK_001a9fe0;
            auVar112 = vmovdqa64_avx512f(auVar79);
            auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
            auVar113 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            vextracti32x4_avx512f(auVar113,0);
            auVar114 = vpshufb_avx512bw(in_ZMM0,auVar112);
            auVar116 = vpshufb_avx512bw(auVar116,auVar112);
            auVar102 = vpshufb_avx512vl(auVar113._0_16_,auVar112._0_16_);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_4[8] + uVar95));
            auVar112 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar114,auVar112);
            vpxorq_avx512f(auVar116,auVar112);
            vpxorq_avx512vl(auVar102,auVar112._0_16_);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 == 0x10) {
            auVar78._16_16_ = _UNK_001a9fd0;
            auVar78._0_16_ = _SHUF_MASK;
            auVar78._32_32_ = _UNK_001a9fe0;
            auVar112 = vmovdqa64_avx512f(auVar78);
            auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
            auVar113 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            auVar114 = vpaddd_avx512f(auVar116,_ddq_add_8888);
            vextracti32x4_avx512f(auVar114,3);
            auVar115 = vpshufb_avx512bw(in_ZMM0,auVar112);
            auVar116 = vpshufb_avx512bw(auVar116,auVar112);
            auVar113 = vpshufb_avx512bw(auVar113,auVar112);
            auVar112 = vpshufb_avx512bw(auVar114,auVar112);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[0xc] + uVar95));
            auVar114 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar115,auVar114);
            vpxorq_avx512f(auVar116,auVar114);
            vpxorq_avx512f(auVar113,auVar114);
            vpxorq_avx512f(auVar112,auVar114);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 == 0xf) {
            auVar77._16_16_ = _UNK_001a9fd0;
            auVar77._0_16_ = _SHUF_MASK;
            auVar77._32_32_ = _UNK_001a9fe0;
            auVar112 = vmovdqa64_avx512f(auVar77);
            auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
            auVar113 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            auVar114 = vpaddd_avx512f(auVar116,_ddq_add_8888);
            vextracti32x4_avx512f(auVar114,2);
            auVar115 = vpshufb_avx512bw(in_ZMM0,auVar112);
            auVar116 = vpshufb_avx512bw(auVar116,auVar112);
            auVar113 = vpshufb_avx512bw(auVar113,auVar112);
            auVar112 = vpshufb_avx512bw(auVar114,auVar112);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[0xc] + uVar95));
            auVar114 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar115,auVar114);
            vpxorq_avx512f(auVar116,auVar114);
            vpxorq_avx512f(auVar113,auVar114);
            vpxorq_avx512f(auVar112,auVar114);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 == 0xe) {
            auVar76._16_16_ = _UNK_001a9fd0;
            auVar76._0_16_ = _SHUF_MASK;
            auVar76._32_32_ = _UNK_001a9fe0;
            auVar112 = vmovdqa64_avx512f(auVar76);
            auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
            auVar113 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            auVar114 = vpaddd_avx512f(auVar116,_ddq_add_8888);
            vextracti32x4_avx512f(auVar114,1);
            auVar115 = vpshufb_avx512bw(in_ZMM0,auVar112);
            auVar116 = vpshufb_avx512bw(auVar116,auVar112);
            auVar113 = vpshufb_avx512bw(auVar113,auVar112);
            auVar111 = vpshufb_avx512vl(auVar114._0_32_,auVar112._0_32_);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
            vmovdqu8_avx512vl(*(undefined1 (*) [32])(param_4[0xc] + uVar95));
            auVar112 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar115,auVar112);
            vpxorq_avx512f(auVar116,auVar112);
            vpxorq_avx512f(auVar113,auVar112);
            vpxorq_avx512vl(auVar111,auVar112._0_32_);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          auVar75._16_16_ = _UNK_001a9fd0;
          auVar75._0_16_ = _SHUF_MASK;
          auVar75._32_32_ = _UNK_001a9fe0;
          auVar112 = vmovdqa64_avx512f(auVar75);
          auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
          auVar113 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
          auVar114 = vpaddd_avx512f(auVar116,_ddq_add_8888);
          vextracti32x4_avx512f(auVar114,0);
          auVar115 = vpshufb_avx512bw(in_ZMM0,auVar112);
          auVar116 = vpshufb_avx512bw(auVar116,auVar112);
          auVar113 = vpshufb_avx512bw(auVar113,auVar112);
          auVar102 = vpshufb_avx512vl(auVar114._0_16_,auVar112._0_16_);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
          vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_4[0xc] + uVar95));
          auVar112 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar115,auVar112);
          vpxorq_avx512f(auVar116,auVar112);
          vpxorq_avx512f(auVar113,auVar112);
          vpxorq_avx512vl(auVar102,auVar112._0_16_);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar96 == 4) {
          auVar85._16_16_ = _UNK_001a9fd0;
          auVar85._0_16_ = _SHUF_MASK;
          auVar85._32_32_ = _UNK_001a9fe0;
          auVar112 = vmovdqa64_avx512f(auVar85);
          vshufi64x2_avx512f(auVar116,auVar116);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          vextracti32x4_avx512f(in_ZMM0,3);
          auVar116 = vpshufb_avx512bw(in_ZMM0,auVar112);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          auVar112 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar116,auVar112);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (3 < uVar96) {
          if (uVar96 == 7) {
            auVar83._16_16_ = _UNK_001a9fd0;
            auVar83._0_16_ = _SHUF_MASK;
            auVar83._32_32_ = _UNK_001a9fe0;
            auVar112 = vmovdqa64_avx512f(auVar83);
            auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
            vextracti32x4_avx512f(auVar116,2);
            auVar113 = vpshufb_avx512bw(in_ZMM0,auVar112);
            auVar116 = vpshufb_avx512bw(auVar116,auVar112);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            auVar112 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar113,auVar112);
            vpxorq_avx512f(auVar116,auVar112);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 == 6) {
            auVar82._16_16_ = _UNK_001a9fd0;
            auVar82._0_16_ = _SHUF_MASK;
            auVar82._32_32_ = _UNK_001a9fe0;
            auVar112 = vmovdqa64_avx512f(auVar82);
            auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
            vextracti32x4_avx512f(auVar116,1);
            auVar113 = vpshufb_avx512bw(in_ZMM0,auVar112);
            auVar111 = vpshufb_avx512vl(auVar116._0_32_,auVar112._0_32_);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512vl(*(undefined1 (*) [32])(param_4[4] + uVar95));
            auVar116 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar113,auVar116);
            vpxorq_avx512vl(auVar111,auVar116._0_32_);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          auVar81._16_16_ = _UNK_001a9fd0;
          auVar81._0_16_ = _SHUF_MASK;
          auVar81._32_32_ = _UNK_001a9fe0;
          auVar112 = vmovdqa64_avx512f(auVar81);
          auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
          vextracti32x4_avx512f(auVar116,0);
          auVar113 = vpshufb_avx512bw(in_ZMM0,auVar112);
          auVar102 = vpshufb_avx512vl(auVar116._0_16_,auVar112._0_16_);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_4[4] + uVar95));
          auVar116 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar113,auVar116);
          vpxorq_avx512vl(auVar102,auVar116._0_16_);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar96 == 3) {
          auVar84._16_16_ = _UNK_001a9fd0;
          auVar84._0_16_ = _SHUF_MASK;
          auVar84._32_32_ = _UNK_001a9fe0;
          auVar112 = vmovdqa64_avx512f(auVar84);
          vshufi64x2_avx512f(auVar116,auVar116);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          vextracti32x4_avx512f(in_ZMM0,2);
          auVar116 = vpshufb_avx512bw(in_ZMM0,auVar112);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          auVar112 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar116,auVar112);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar96 == 2) {
          auVar111._16_16_ = _UNK_001a9fd0;
          auVar111._0_16_ = _SHUF_MASK;
          auVar111 = vmovdqa64_avx512vl(auVar111);
          auVar110 = vshufi64x2_avx512vl(ZEXT1632(auVar103),ZEXT1632(auVar103));
          ddq_add_1234 = ddq_add_1234 + '\x01';
          vextracti32x4_avx512f(ZEXT3264(auVar110),1);
          auVar111 = vpshufb_avx512vl(auVar110,auVar111);
          vmovdqu8_avx512vl(*(undefined1 (*) [32])
                             (CONCAT62(uVar93,CONCAT11(cVar92 + cVar88,uVar91)) + uVar95));
          auVar116 = vbroadcastf64x2_avx512dq(*param_1);
          vpxorq_avx512vl(auVar111,auVar116._0_32_);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        auVar105 = vmovdqa64_avx512vl(_SHUF_MASK);
        auVar103 = vpaddd_avx(auVar103,_ONE);
        uVar94 = *(ulong *)(&byte64_len_to_mask_table + param_5 * 8);
        auVar106 = vextracti32x4_avx512f(ZEXT1664(auVar103),0);
        auVar103 = vpshufb_avx512vl(auVar103,auVar105);
        auVar107 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(*param_4 + uVar95));
        auVar99[1] = ((byte)(uVar94 >> 1) & 1) * auVar107[1];
        auVar99[0] = ((byte)uVar94 & 1) * auVar107[0];
        auVar99[2] = ((byte)(uVar94 >> 2) & 1) * auVar107[2];
        auVar99[3] = ((byte)(uVar94 >> 3) & 1) * auVar107[3];
        auVar99[4] = ((byte)(uVar94 >> 4) & 1) * auVar107[4];
        auVar99[5] = ((byte)(uVar94 >> 5) & 1) * auVar107[5];
        auVar99[6] = ((byte)(uVar94 >> 6) & 1) * auVar107[6];
        auVar99[7] = ((byte)(uVar94 >> 7) & 1) * auVar107[7];
        auVar99[8] = ((byte)(uVar94 >> 8) & 1) * auVar107[8];
        auVar99[9] = ((byte)(uVar94 >> 9) & 1) * auVar107[9];
        auVar99[10] = ((byte)(uVar94 >> 10) & 1) * auVar107[10];
        auVar99[0xb] = ((byte)(uVar94 >> 0xb) & 1) * auVar107[0xb];
        auVar99[0xc] = ((byte)(uVar94 >> 0xc) & 1) * auVar107[0xc];
        auVar99[0xd] = ((byte)(uVar94 >> 0xd) & 1) * auVar107[0xd];
        auVar99[0xe] = ((byte)(uVar94 >> 0xe) & 1) * auVar107[0xe];
        auVar99[0xf] = ((byte)(uVar94 >> 0xf) & 1) * auVar107[0xf];
        auVar116 = vbroadcastf64x2_avx512dq(*param_1);
        auVar103 = vpxorq_avx512vl(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 8));
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(param_1[1]);
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[1] + 8));
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(param_1[2]);
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[2] + 8));
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(param_1[3]);
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[3] + 8));
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(param_1[4]);
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[4] + 8));
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(param_1[5]);
        auVar103 = aesenclast(auVar103,auVar116._0_16_);
        auVar107 = vpxorq_avx512vl(auVar103,auVar99);
        auVar108 = vextracti32x4_avx512f(ZEXT1664(auVar107),0);
        auVar103 = vmovdqu8_avx512vl(auVar107);
        *(undefined1 (*) [16])(*param_6 + uVar95) = auVar103;
        vmovdqu8_avx512bw(ZEXT1664(auVar107));
        auVar103 = vpshufb_avx512vl(auVar99,auVar105);
        auVar105 = vextracti32x4_avx512f(ZEXT1664(auVar103),0);
        if (0xf < (long)param_5) {
          *param_3 = 0;
          vpxorq_avx512f(ZEXT1664(auVar103),ZEXT1664(auVar102));
          vmovdqu64_avx512vl(param_2[0x15]);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *param_3 = param_5;
        auVar103 = vmovdqu64_avx512vl(auVar108);
        param_2[1] = auVar103;
        auVar103 = vpxorq_avx512vl(auVar102,auVar105);
        auVar102 = vmovdqu64_avx512vl(auVar106);
        *param_2 = auVar102;
        auVar102 = vmovdqu64_avx512vl(auVar103);
        param_2[4] = auVar102;
      }
    }
  }
  else if (iVar89 == 0xb) {
    if (param_5 != 0) {
      auVar102 = vmovdqu64_avx512vl(param_2[4]);
      uVar95 = *param_3;
      if (uVar95 != 0) {
        uVar94 = 0x10;
        if (param_5 < 0x10) {
          uVar94 = param_5;
        }
        uVar1 = *(ushort *)(&byte_len_to_mask_table + uVar94 * 2);
        auVar103 = vmovdqu8_avx512vl(*param_4);
        auVar100[1] = ((byte)(uVar1 >> 1) & 1) * auVar103[1];
        auVar100[0] = ((byte)uVar1 & 1) * auVar103[0];
        auVar100[2] = ((byte)(uVar1 >> 2) & 1) * auVar103[2];
        auVar100[3] = ((byte)(uVar1 >> 3) & 1) * auVar103[3];
        auVar100[4] = ((byte)(uVar1 >> 4) & 1) * auVar103[4];
        auVar100[5] = ((byte)(uVar1 >> 5) & 1) * auVar103[5];
        auVar100[6] = ((byte)(uVar1 >> 6) & 1) * auVar103[6];
        auVar100[7] = ((byte)(uVar1 >> 7) & 1) * auVar103[7];
        bVar3 = (byte)(uVar1 >> 8);
        auVar100[8] = (bVar3 & 1) * auVar103[8];
        auVar100[9] = (bVar3 >> 1 & 1) * auVar103[9];
        auVar100[10] = (bVar3 >> 2 & 1) * auVar103[10];
        auVar100[0xb] = (bVar3 >> 3 & 1) * auVar103[0xb];
        auVar100[0xc] = (bVar3 >> 4 & 1) * auVar103[0xc];
        auVar100[0xd] = (bVar3 >> 5 & 1) * auVar103[0xd];
        auVar100[0xe] = (bVar3 >> 6 & 1) * auVar103[0xe];
        auVar100[0xf] = -((char)bVar3 >> 7) * auVar103[0xf];
        auVar103 = vmovdqu64_avx512vl(param_2[1]);
        auVar105 = vmovdqu64_avx512vl(param_2[0x15]);
        pauVar97 = (undefined1 (*) [16])(&SHIFT_MASK + uVar95);
        auVar106 = vmovdqu64_avx512vl(*pauVar97);
        auVar103 = vpshufb_avx(auVar103,auVar106);
        auVar107 = vmovdqa64_avx512vl(auVar100);
        auVar103 = vpxorq_avx512vl(auVar103,auVar100);
        lVar98 = param_5 + uVar95 + -0x10;
        if ((long)(param_5 + uVar95) < 0x10) {
          pauVar97 = (undefined1 (*) [16])((long)pauVar97 - lVar98);
        }
        auVar108 = vmovdqu64_avx512vl(pauVar97[1]);
        in_ZMM0 = ZEXT1664(auVar108);
        auVar103 = vpand_avx(auVar103,auVar108);
        auVar107 = vpand_avx(auVar107,auVar108);
        auVar107 = vpshufb_avx(auVar107,_SHUF_MASK);
        auVar106 = vpshufb_avx(auVar107,auVar106);
        auVar102 = vpxorq_avx512vl(auVar102,auVar106);
        if (lVar98 < 0) {
          *param_3 = *param_3 + param_5;
          uVar95 = param_5;
        }
        else {
          auVar39._8_8_ = 0;
          auVar39._0_8_ = auVar102._8_8_;
          auVar41._8_8_ = 0;
          auVar41._0_8_ = auVar105._8_8_;
          auVar106 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar39 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar106 = auVar106 ^ auVar41 << uVar96;
            }
          }
          auVar6._8_8_ = 0;
          auVar6._0_8_ = auVar102._0_8_;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = auVar105._0_8_;
          auVar107 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar6 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar107 = auVar107 ^ auVar12 << uVar96;
            }
          }
          auVar17._8_8_ = 0;
          auVar17._0_8_ = auVar102._8_8_;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = auVar105._0_8_;
          auVar108 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar17 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar108 = auVar108 ^ auVar23 << uVar96;
            }
          }
          auVar29._8_8_ = 0;
          auVar29._0_8_ = auVar102._0_8_;
          auVar35._8_8_ = 0;
          auVar35._0_8_ = auVar105._8_8_;
          auVar102 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar29 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar102 = auVar102 ^ auVar35 << uVar96;
            }
          }
          auVar102 = vpxorq_avx512vl(auVar102,auVar108);
          auVar105 = vpsrldq_avx(auVar102,8);
          auVar102 = vpslldq_avx(auVar102,8);
          auVar105 = vpxorq_avx512vl(auVar106,auVar105);
          auVar106 = vpxorq_avx512vl(auVar102,auVar107);
          auVar107 = vmovdqu64_avx512vl(_POLY2);
          auVar18._8_8_ = 0;
          auVar18._0_8_ = auVar107._8_8_;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = auVar106._0_8_;
          auVar102 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar18 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar102 = auVar102 ^ auVar24 << uVar96;
            }
          }
          auVar102 = vpslldq_avx(auVar102,8);
          auVar106 = vpxorq_avx512vl(auVar106,auVar102);
          auVar7._8_8_ = 0;
          auVar7._0_8_ = auVar107._0_8_;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = auVar106._0_8_;
          auVar102 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar7 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar102 = auVar102 ^ auVar13 << uVar96;
            }
          }
          auVar108 = vpsrldq_avx(auVar102,4);
          auVar30._8_8_ = 0;
          auVar30._0_8_ = auVar107._0_8_;
          auVar36._8_8_ = 0;
          auVar36._0_8_ = auVar106._8_8_;
          auVar102 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar30 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar102 = auVar102 ^ auVar36 << uVar96;
            }
          }
          auVar102 = vpslldq_avx(auVar102,4);
          auVar102 = vpternlogq_avx512vl(auVar102,auVar105,auVar108,0x96);
          *param_3 = 0;
          uVar95 = 0x10 - uVar95;
        }
        auVar105 = vmovdqu64_avx512vl(auVar102);
        param_2[4] = auVar105;
        auVar103 = vmovdqu8_avx512vl(auVar103);
        *param_6 = auVar103;
      }
      auVar103 = vmovdqu64_avx512vl(*param_2);
      auVar116 = ZEXT1664(auVar103);
      param_5 = param_5 - uVar95;
      if (param_5 != 0) {
        if (0x100 < param_5) {
          auVar60._16_16_ = _UNK_001a9fd0;
          auVar60._0_16_ = _SHUF_MASK;
          auVar60._32_32_ = _UNK_001a9fe0;
          auVar112 = vmovdqa64_avx512f(auVar60);
          auVar113 = vmovdqa64_avx512f(_ddq_addbe_4444);
          auVar114 = vmovdqa64_avx512f(_ddq_addbe_1234);
          auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
          *(char *)((long)param_3 + -0x6e) = *(char *)((long)param_3 + -0x6e) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          if (auVar103[0] < 0xf0) {
            auVar116 = vpaddd_avx512f(auVar116,auVar114);
            auVar116 = vpaddd_avx512f(auVar116,auVar113);
            auVar116 = vpaddd_avx512f(auVar116,auVar113);
            auVar116 = vpaddd_avx512f(auVar116,auVar116);
          }
          else {
            auVar116 = vpshufb_avx512bw(auVar116,auVar112);
            auVar113 = vmovdqa64_avx512f(_ddq_add_4444);
            auVar87._1_63_ = _UNK_001aa081;
            auVar87[0] = ddq_add_1234;
            auVar116 = vpaddd_avx512f(auVar116,auVar87);
            auVar114 = vpaddd_avx512f(auVar116,auVar113);
            auVar115 = vpaddd_avx512f(auVar114,auVar113);
            auVar113 = vpaddd_avx512f(auVar115,auVar113);
            vpshufb_avx512bw(auVar116,auVar112);
            vpshufb_avx512bw(auVar114,auVar112);
            vpshufb_avx512bw(auVar115,auVar112);
            auVar116 = vpshufb_avx512bw(auVar113,auVar112);
          }
          vshufi64x2_avx512f(auVar116,auVar116);
          *(int *)param_4[-8] = *(int *)param_4[-8] + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar96 = (int)param_5 + 0xfU >> 4;
        if (uVar96 == 8) {
          auVar74._16_16_ = _UNK_001a9fd0;
          auVar74._0_16_ = _SHUF_MASK;
          auVar74._32_32_ = _UNK_001a9fe0;
          auVar112 = vmovdqa64_avx512f(auVar74);
          auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
          vextracti32x4_avx512f(auVar116,3);
          auVar113 = vpshufb_avx512bw(in_ZMM0,auVar112);
          auVar116 = vpshufb_avx512bw(auVar116,auVar112);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
          auVar112 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar113,auVar112);
          vpxorq_avx512f(auVar116,auVar112);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (7 < uVar96) {
          if (uVar96 == 0xc) {
            auVar68._16_16_ = _UNK_001a9fd0;
            auVar68._0_16_ = _SHUF_MASK;
            auVar68._32_32_ = _UNK_001a9fe0;
            auVar112 = vmovdqa64_avx512f(auVar68);
            auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
            auVar113 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            vextracti32x4_avx512f(auVar113,3);
            auVar114 = vpshufb_avx512bw(in_ZMM0,auVar112);
            auVar116 = vpshufb_avx512bw(auVar116,auVar112);
            auVar112 = vpshufb_avx512bw(auVar113,auVar112);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
            auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar114,auVar113);
            vpxorq_avx512f(auVar116,auVar113);
            vpxorq_avx512f(auVar112,auVar113);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 < 0xc) {
            if (uVar96 == 0xb) {
              auVar67._16_16_ = _UNK_001a9fd0;
              auVar67._0_16_ = _SHUF_MASK;
              auVar67._32_32_ = _UNK_001a9fe0;
              auVar112 = vmovdqa64_avx512f(auVar67);
              auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
              *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
              uVar2 = in(uVar43);
              *(undefined4 *)*param_1 = uVar2;
              ddq_add_1234 = ddq_add_1234 + '\x01';
              auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
              auVar113 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
              vextracti32x4_avx512f(auVar113,2);
              auVar114 = vpshufb_avx512bw(in_ZMM0,auVar112);
              auVar116 = vpshufb_avx512bw(auVar116,auVar112);
              auVar112 = vpshufb_avx512bw(auVar113,auVar112);
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
              auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
              vpxorq_avx512f(auVar114,auVar113);
              vpxorq_avx512f(auVar116,auVar113);
              vpxorq_avx512f(auVar112,auVar113);
              vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (uVar96 == 10) {
              auVar66._16_16_ = _UNK_001a9fd0;
              auVar66._0_16_ = _SHUF_MASK;
              auVar66._32_32_ = _UNK_001a9fe0;
              auVar112 = vmovdqa64_avx512f(auVar66);
              auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
              *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
              uVar2 = in(uVar43);
              *(undefined4 *)*param_1 = uVar2;
              ddq_add_1234 = ddq_add_1234 + '\x01';
              auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
              auVar113 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
              vextracti32x4_avx512f(auVar113,1);
              auVar114 = vpshufb_avx512bw(in_ZMM0,auVar112);
              auVar116 = vpshufb_avx512bw(auVar116,auVar112);
              auVar111 = vpshufb_avx512vl(auVar113._0_32_,auVar112._0_32_);
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
              vmovdqu8_avx512vl(*(undefined1 (*) [32])(param_4[8] + uVar95));
              auVar112 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
              vpxorq_avx512f(auVar114,auVar112);
              vpxorq_avx512f(auVar116,auVar112);
              vpxorq_avx512vl(auVar111,auVar112._0_32_);
              vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            auVar65._16_16_ = _UNK_001a9fd0;
            auVar65._0_16_ = _SHUF_MASK;
            auVar65._32_32_ = _UNK_001a9fe0;
            auVar112 = vmovdqa64_avx512f(auVar65);
            auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
            auVar113 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            vextracti32x4_avx512f(auVar113,0);
            auVar114 = vpshufb_avx512bw(in_ZMM0,auVar112);
            auVar116 = vpshufb_avx512bw(auVar116,auVar112);
            auVar102 = vpshufb_avx512vl(auVar113._0_16_,auVar112._0_16_);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_4[8] + uVar95));
            auVar112 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar114,auVar112);
            vpxorq_avx512f(auVar116,auVar112);
            vpxorq_avx512vl(auVar102,auVar112._0_16_);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 == 0x10) {
            auVar64._16_16_ = _UNK_001a9fd0;
            auVar64._0_16_ = _SHUF_MASK;
            auVar64._32_32_ = _UNK_001a9fe0;
            auVar112 = vmovdqa64_avx512f(auVar64);
            auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
            auVar113 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            auVar114 = vpaddd_avx512f(auVar116,_ddq_add_8888);
            vextracti32x4_avx512f(auVar114,3);
            auVar115 = vpshufb_avx512bw(in_ZMM0,auVar112);
            auVar116 = vpshufb_avx512bw(auVar116,auVar112);
            auVar113 = vpshufb_avx512bw(auVar113,auVar112);
            auVar112 = vpshufb_avx512bw(auVar114,auVar112);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[0xc] + uVar95));
            auVar114 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar115,auVar114);
            vpxorq_avx512f(auVar116,auVar114);
            vpxorq_avx512f(auVar113,auVar114);
            vpxorq_avx512f(auVar112,auVar114);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 == 0xf) {
            auVar63._16_16_ = _UNK_001a9fd0;
            auVar63._0_16_ = _SHUF_MASK;
            auVar63._32_32_ = _UNK_001a9fe0;
            auVar112 = vmovdqa64_avx512f(auVar63);
            auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
            auVar113 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            auVar114 = vpaddd_avx512f(auVar116,_ddq_add_8888);
            vextracti32x4_avx512f(auVar114,2);
            auVar115 = vpshufb_avx512bw(in_ZMM0,auVar112);
            auVar116 = vpshufb_avx512bw(auVar116,auVar112);
            auVar113 = vpshufb_avx512bw(auVar113,auVar112);
            auVar112 = vpshufb_avx512bw(auVar114,auVar112);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[0xc] + uVar95));
            auVar114 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar115,auVar114);
            vpxorq_avx512f(auVar116,auVar114);
            vpxorq_avx512f(auVar113,auVar114);
            vpxorq_avx512f(auVar112,auVar114);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 == 0xe) {
            auVar62._16_16_ = _UNK_001a9fd0;
            auVar62._0_16_ = _SHUF_MASK;
            auVar62._32_32_ = _UNK_001a9fe0;
            auVar112 = vmovdqa64_avx512f(auVar62);
            auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
            auVar113 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            auVar114 = vpaddd_avx512f(auVar116,_ddq_add_8888);
            vextracti32x4_avx512f(auVar114,1);
            auVar115 = vpshufb_avx512bw(in_ZMM0,auVar112);
            auVar116 = vpshufb_avx512bw(auVar116,auVar112);
            auVar113 = vpshufb_avx512bw(auVar113,auVar112);
            auVar111 = vpshufb_avx512vl(auVar114._0_32_,auVar112._0_32_);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
            vmovdqu8_avx512vl(*(undefined1 (*) [32])(param_4[0xc] + uVar95));
            auVar112 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar115,auVar112);
            vpxorq_avx512f(auVar116,auVar112);
            vpxorq_avx512f(auVar113,auVar112);
            vpxorq_avx512vl(auVar111,auVar112._0_32_);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          auVar61._16_16_ = _UNK_001a9fd0;
          auVar61._0_16_ = _SHUF_MASK;
          auVar61._32_32_ = _UNK_001a9fe0;
          auVar112 = vmovdqa64_avx512f(auVar61);
          auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
          auVar113 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
          auVar114 = vpaddd_avx512f(auVar116,_ddq_add_8888);
          vextracti32x4_avx512f(auVar114,0);
          auVar115 = vpshufb_avx512bw(in_ZMM0,auVar112);
          auVar116 = vpshufb_avx512bw(auVar116,auVar112);
          auVar113 = vpshufb_avx512bw(auVar113,auVar112);
          auVar102 = vpshufb_avx512vl(auVar114._0_16_,auVar112._0_16_);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
          vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_4[0xc] + uVar95));
          auVar112 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar115,auVar112);
          vpxorq_avx512f(auVar116,auVar112);
          vpxorq_avx512f(auVar113,auVar112);
          vpxorq_avx512vl(auVar102,auVar112._0_16_);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar96 == 4) {
          auVar73._16_16_ = _UNK_001a9fd0;
          auVar73._0_16_ = _SHUF_MASK;
          auVar73._32_32_ = _UNK_001a9fe0;
          auVar112 = vmovdqa64_avx512f(auVar73);
          vshufi64x2_avx512f(auVar116,auVar116);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          vextracti32x4_avx512f(in_ZMM0,3);
          auVar116 = vpshufb_avx512bw(in_ZMM0,auVar112);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          auVar112 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar116,auVar112);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (3 < uVar96) {
          if (uVar96 == 7) {
            auVar71._16_16_ = _UNK_001a9fd0;
            auVar71._0_16_ = _SHUF_MASK;
            auVar71._32_32_ = _UNK_001a9fe0;
            auVar112 = vmovdqa64_avx512f(auVar71);
            auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
            vextracti32x4_avx512f(auVar116,2);
            auVar113 = vpshufb_avx512bw(in_ZMM0,auVar112);
            auVar116 = vpshufb_avx512bw(auVar116,auVar112);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            auVar112 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar113,auVar112);
            vpxorq_avx512f(auVar116,auVar112);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 == 6) {
            auVar70._16_16_ = _UNK_001a9fd0;
            auVar70._0_16_ = _SHUF_MASK;
            auVar70._32_32_ = _UNK_001a9fe0;
            auVar112 = vmovdqa64_avx512f(auVar70);
            auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
            vextracti32x4_avx512f(auVar116,1);
            auVar113 = vpshufb_avx512bw(in_ZMM0,auVar112);
            auVar111 = vpshufb_avx512vl(auVar116._0_32_,auVar112._0_32_);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512vl(*(undefined1 (*) [32])(param_4[4] + uVar95));
            auVar116 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar113,auVar116);
            vpxorq_avx512vl(auVar111,auVar116._0_32_);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          auVar69._16_16_ = _UNK_001a9fd0;
          auVar69._0_16_ = _SHUF_MASK;
          auVar69._32_32_ = _UNK_001a9fe0;
          auVar112 = vmovdqa64_avx512f(auVar69);
          auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
          vextracti32x4_avx512f(auVar116,0);
          auVar113 = vpshufb_avx512bw(in_ZMM0,auVar112);
          auVar102 = vpshufb_avx512vl(auVar116._0_16_,auVar112._0_16_);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_4[4] + uVar95));
          auVar116 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar113,auVar116);
          vpxorq_avx512vl(auVar102,auVar116._0_16_);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar96 == 3) {
          auVar72._16_16_ = _UNK_001a9fd0;
          auVar72._0_16_ = _SHUF_MASK;
          auVar72._32_32_ = _UNK_001a9fe0;
          auVar112 = vmovdqa64_avx512f(auVar72);
          vshufi64x2_avx512f(auVar116,auVar116);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          vextracti32x4_avx512f(in_ZMM0,2);
          auVar116 = vpshufb_avx512bw(in_ZMM0,auVar112);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          auVar112 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar116,auVar112);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar96 == 2) {
          auVar110._16_16_ = _UNK_001a9fd0;
          auVar110._0_16_ = _SHUF_MASK;
          auVar111 = vmovdqa64_avx512vl(auVar110);
          auVar110 = vshufi64x2_avx512vl(ZEXT1632(auVar103),ZEXT1632(auVar103));
          ddq_add_1234 = ddq_add_1234 + '\x01';
          vextracti32x4_avx512f(ZEXT3264(auVar110),1);
          auVar111 = vpshufb_avx512vl(auVar110,auVar111);
          vmovdqu8_avx512vl(*(undefined1 (*) [32])
                             (CONCAT62(uVar93,CONCAT11(cVar92 + cVar88,uVar91)) + uVar95));
          auVar116 = vbroadcastf64x2_avx512dq(*param_1);
          vpxorq_avx512vl(auVar111,auVar116._0_32_);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        auVar105 = vmovdqa64_avx512vl(_SHUF_MASK);
        auVar103 = vpaddd_avx(auVar103,_ONE);
        uVar94 = *(ulong *)(&byte64_len_to_mask_table + param_5 * 8);
        auVar106 = vextracti32x4_avx512f(ZEXT1664(auVar103),0);
        auVar103 = vpshufb_avx512vl(auVar103,auVar105);
        auVar107 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(*param_4 + uVar95));
        auVar101[1] = ((byte)(uVar94 >> 1) & 1) * auVar107[1];
        auVar101[0] = ((byte)uVar94 & 1) * auVar107[0];
        auVar101[2] = ((byte)(uVar94 >> 2) & 1) * auVar107[2];
        auVar101[3] = ((byte)(uVar94 >> 3) & 1) * auVar107[3];
        auVar101[4] = ((byte)(uVar94 >> 4) & 1) * auVar107[4];
        auVar101[5] = ((byte)(uVar94 >> 5) & 1) * auVar107[5];
        auVar101[6] = ((byte)(uVar94 >> 6) & 1) * auVar107[6];
        auVar101[7] = ((byte)(uVar94 >> 7) & 1) * auVar107[7];
        auVar101[8] = ((byte)(uVar94 >> 8) & 1) * auVar107[8];
        auVar101[9] = ((byte)(uVar94 >> 9) & 1) * auVar107[9];
        auVar101[10] = ((byte)(uVar94 >> 10) & 1) * auVar107[10];
        auVar101[0xb] = ((byte)(uVar94 >> 0xb) & 1) * auVar107[0xb];
        auVar101[0xc] = ((byte)(uVar94 >> 0xc) & 1) * auVar107[0xc];
        auVar101[0xd] = ((byte)(uVar94 >> 0xd) & 1) * auVar107[0xd];
        auVar101[0xe] = ((byte)(uVar94 >> 0xe) & 1) * auVar107[0xe];
        auVar101[0xf] = ((byte)(uVar94 >> 0xf) & 1) * auVar107[0xf];
        auVar116 = vbroadcastf64x2_avx512dq(*param_1);
        auVar103 = vpxorq_avx512vl(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 8));
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(param_1[1]);
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[1] + 8));
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(param_1[2]);
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[2] + 8));
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(param_1[3]);
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[3] + 8));
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(param_1[4]);
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[4] + 8));
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(param_1[5]);
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[5] + 8));
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(param_1[6]);
        auVar103 = aesenclast(auVar103,auVar116._0_16_);
        auVar107 = vpxorq_avx512vl(auVar103,auVar101);
        auVar108 = vextracti32x4_avx512f(ZEXT1664(auVar107),0);
        auVar103 = vmovdqu8_avx512vl(auVar107);
        *(undefined1 (*) [16])(*param_6 + uVar95) = auVar103;
        vmovdqu8_avx512bw(ZEXT1664(auVar107));
        auVar103 = vpshufb_avx512vl(auVar101,auVar105);
        auVar105 = vextracti32x4_avx512f(ZEXT1664(auVar103),0);
        if (0xf < (long)param_5) {
          *param_3 = 0;
          vpxorq_avx512f(ZEXT1664(auVar103),ZEXT1664(auVar102));
          vmovdqu64_avx512vl(param_2[0x15]);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *param_3 = param_5;
        auVar103 = vmovdqu64_avx512vl(auVar108);
        param_2[1] = auVar103;
        auVar103 = vpxorq_avx512vl(auVar102,auVar105);
        auVar102 = vmovdqu64_avx512vl(auVar106);
        *param_2 = auVar102;
        auVar102 = vmovdqu64_avx512vl(auVar103);
        param_2[4] = auVar102;
      }
    }
  }
  else if (iVar89 == 0xd) {
    if (param_5 != 0) {
      auVar102 = vmovdqu64_avx512vl(param_2[4]);
      uVar95 = *param_3;
      if (uVar95 != 0) {
        uVar94 = 0x10;
        if (param_5 < 0x10) {
          uVar94 = param_5;
        }
        uVar1 = *(ushort *)(&byte_len_to_mask_table + uVar94 * 2);
        auVar103 = vmovdqu8_avx512vl(*param_4);
        auVar104[1] = ((byte)(uVar1 >> 1) & 1) * auVar103[1];
        auVar104[0] = ((byte)uVar1 & 1) * auVar103[0];
        auVar104[2] = ((byte)(uVar1 >> 2) & 1) * auVar103[2];
        auVar104[3] = ((byte)(uVar1 >> 3) & 1) * auVar103[3];
        auVar104[4] = ((byte)(uVar1 >> 4) & 1) * auVar103[4];
        auVar104[5] = ((byte)(uVar1 >> 5) & 1) * auVar103[5];
        auVar104[6] = ((byte)(uVar1 >> 6) & 1) * auVar103[6];
        auVar104[7] = ((byte)(uVar1 >> 7) & 1) * auVar103[7];
        bVar3 = (byte)(uVar1 >> 8);
        auVar104[8] = (bVar3 & 1) * auVar103[8];
        auVar104[9] = (bVar3 >> 1 & 1) * auVar103[9];
        auVar104[10] = (bVar3 >> 2 & 1) * auVar103[10];
        auVar104[0xb] = (bVar3 >> 3 & 1) * auVar103[0xb];
        auVar104[0xc] = (bVar3 >> 4 & 1) * auVar103[0xc];
        auVar104[0xd] = (bVar3 >> 5 & 1) * auVar103[0xd];
        auVar104[0xe] = (bVar3 >> 6 & 1) * auVar103[0xe];
        auVar104[0xf] = -((char)bVar3 >> 7) * auVar103[0xf];
        auVar103 = vmovdqu64_avx512vl(param_2[1]);
        auVar105 = vmovdqu64_avx512vl(param_2[0x15]);
        pauVar97 = (undefined1 (*) [16])(&SHIFT_MASK + uVar95);
        auVar106 = vmovdqu64_avx512vl(*pauVar97);
        auVar103 = vpshufb_avx(auVar103,auVar106);
        auVar107 = vmovdqa64_avx512vl(auVar104);
        auVar103 = vpxorq_avx512vl(auVar103,auVar104);
        lVar98 = param_5 + uVar95 + -0x10;
        if ((long)(param_5 + uVar95) < 0x10) {
          pauVar97 = (undefined1 (*) [16])((long)pauVar97 - lVar98);
        }
        auVar108 = vmovdqu64_avx512vl(pauVar97[1]);
        in_ZMM0 = ZEXT1664(auVar108);
        auVar103 = vpand_avx(auVar103,auVar108);
        auVar107 = vpand_avx(auVar107,auVar108);
        auVar107 = vpshufb_avx(auVar107,_SHUF_MASK);
        auVar106 = vpshufb_avx(auVar107,auVar106);
        auVar102 = vpxorq_avx512vl(auVar102,auVar106);
        if (lVar98 < 0) {
          *param_3 = *param_3 + param_5;
          uVar95 = param_5;
        }
        else {
          auVar40._8_8_ = 0;
          auVar40._0_8_ = auVar102._8_8_;
          auVar42._8_8_ = 0;
          auVar42._0_8_ = auVar105._8_8_;
          auVar106 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar40 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar106 = auVar106 ^ auVar42 << uVar96;
            }
          }
          auVar8._8_8_ = 0;
          auVar8._0_8_ = auVar102._0_8_;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = auVar105._0_8_;
          auVar107 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar8 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar107 = auVar107 ^ auVar14 << uVar96;
            }
          }
          auVar19._8_8_ = 0;
          auVar19._0_8_ = auVar102._8_8_;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = auVar105._0_8_;
          auVar108 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar19 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar108 = auVar108 ^ auVar25 << uVar96;
            }
          }
          auVar31._8_8_ = 0;
          auVar31._0_8_ = auVar102._0_8_;
          auVar37._8_8_ = 0;
          auVar37._0_8_ = auVar105._8_8_;
          auVar102 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar31 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar102 = auVar102 ^ auVar37 << uVar96;
            }
          }
          auVar102 = vpxorq_avx512vl(auVar102,auVar108);
          auVar105 = vpsrldq_avx(auVar102,8);
          auVar102 = vpslldq_avx(auVar102,8);
          auVar105 = vpxorq_avx512vl(auVar106,auVar105);
          auVar106 = vpxorq_avx512vl(auVar102,auVar107);
          auVar107 = vmovdqu64_avx512vl(_POLY2);
          auVar20._8_8_ = 0;
          auVar20._0_8_ = auVar107._8_8_;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = auVar106._0_8_;
          auVar102 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar20 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar102 = auVar102 ^ auVar26 << uVar96;
            }
          }
          auVar102 = vpslldq_avx(auVar102,8);
          auVar106 = vpxorq_avx512vl(auVar106,auVar102);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = auVar107._0_8_;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = auVar106._0_8_;
          auVar102 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar9 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar102 = auVar102 ^ auVar15 << uVar96;
            }
          }
          auVar108 = vpsrldq_avx(auVar102,4);
          auVar32._8_8_ = 0;
          auVar32._0_8_ = auVar107._0_8_;
          auVar38._8_8_ = 0;
          auVar38._0_8_ = auVar106._8_8_;
          auVar102 = (undefined1  [16])0x0;
          for (uVar96 = 0; uVar96 < 0x40; uVar96 = uVar96 + 1) {
            if ((auVar32 & (undefined1  [16])0x1 << uVar96) != (undefined1  [16])0x0) {
              auVar102 = auVar102 ^ auVar38 << uVar96;
            }
          }
          auVar102 = vpslldq_avx(auVar102,4);
          auVar102 = vpternlogq_avx512vl(auVar102,auVar105,auVar108,0x96);
          *param_3 = 0;
          uVar95 = 0x10 - uVar95;
        }
        auVar105 = vmovdqu64_avx512vl(auVar102);
        param_2[4] = auVar105;
        auVar103 = vmovdqu8_avx512vl(auVar103);
        *param_6 = auVar103;
      }
      auVar103 = vmovdqu64_avx512vl(*param_2);
      auVar116 = ZEXT1664(auVar103);
      param_5 = param_5 - uVar95;
      if (param_5 != 0) {
        if (0x100 < param_5) {
          auVar45._16_16_ = _UNK_001a9fd0;
          auVar45._0_16_ = _SHUF_MASK;
          auVar45._32_32_ = _UNK_001a9fe0;
          auVar112 = vmovdqa64_avx512f(auVar45);
          auVar113 = vmovdqa64_avx512f(_ddq_addbe_4444);
          auVar114 = vmovdqa64_avx512f(_ddq_addbe_1234);
          auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
          *(char *)((long)param_3 + -0x6e) = *(char *)((long)param_3 + -0x6e) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          if (auVar103[0] < 0xf0) {
            auVar116 = vpaddd_avx512f(auVar116,auVar114);
            auVar116 = vpaddd_avx512f(auVar116,auVar113);
            auVar116 = vpaddd_avx512f(auVar116,auVar113);
            auVar116 = vpaddd_avx512f(auVar116,auVar116);
          }
          else {
            auVar116 = vpshufb_avx512bw(auVar116,auVar112);
            auVar113 = vmovdqa64_avx512f(_ddq_add_4444);
            auVar86._1_63_ = _UNK_001aa081;
            auVar86[0] = ddq_add_1234;
            auVar116 = vpaddd_avx512f(auVar116,auVar86);
            auVar114 = vpaddd_avx512f(auVar116,auVar113);
            auVar115 = vpaddd_avx512f(auVar114,auVar113);
            auVar113 = vpaddd_avx512f(auVar115,auVar113);
            vpshufb_avx512bw(auVar116,auVar112);
            vpshufb_avx512bw(auVar114,auVar112);
            vpshufb_avx512bw(auVar115,auVar112);
            auVar116 = vpshufb_avx512bw(auVar113,auVar112);
          }
          vshufi64x2_avx512f(auVar116,auVar116);
          *(int *)param_4[-8] = *(int *)param_4[-8] + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar96 = (int)param_5 + 0xfU >> 4;
        if (uVar96 == 8) {
          auVar59._16_16_ = _UNK_001a9fd0;
          auVar59._0_16_ = _SHUF_MASK;
          auVar59._32_32_ = _UNK_001a9fe0;
          auVar112 = vmovdqa64_avx512f(auVar59);
          auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
          vextracti32x4_avx512f(auVar116,3);
          auVar113 = vpshufb_avx512bw(in_ZMM0,auVar112);
          auVar116 = vpshufb_avx512bw(auVar116,auVar112);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
          auVar112 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar113,auVar112);
          vpxorq_avx512f(auVar116,auVar112);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (7 < uVar96) {
          if (uVar96 == 0xc) {
            auVar53._16_16_ = _UNK_001a9fd0;
            auVar53._0_16_ = _SHUF_MASK;
            auVar53._32_32_ = _UNK_001a9fe0;
            auVar112 = vmovdqa64_avx512f(auVar53);
            auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
            auVar113 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            vextracti32x4_avx512f(auVar113,3);
            auVar114 = vpshufb_avx512bw(in_ZMM0,auVar112);
            auVar116 = vpshufb_avx512bw(auVar116,auVar112);
            auVar112 = vpshufb_avx512bw(auVar113,auVar112);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
            auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar114,auVar113);
            vpxorq_avx512f(auVar116,auVar113);
            vpxorq_avx512f(auVar112,auVar113);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 < 0xc) {
            if (uVar96 == 0xb) {
              auVar52._16_16_ = _UNK_001a9fd0;
              auVar52._0_16_ = _SHUF_MASK;
              auVar52._32_32_ = _UNK_001a9fe0;
              auVar112 = vmovdqa64_avx512f(auVar52);
              auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
              *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
              uVar2 = in(uVar43);
              *(undefined4 *)*param_1 = uVar2;
              ddq_add_1234 = ddq_add_1234 + '\x01';
              auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
              auVar113 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
              vextracti32x4_avx512f(auVar113,2);
              auVar114 = vpshufb_avx512bw(in_ZMM0,auVar112);
              auVar116 = vpshufb_avx512bw(auVar116,auVar112);
              auVar112 = vpshufb_avx512bw(auVar113,auVar112);
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
              auVar113 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
              vpxorq_avx512f(auVar114,auVar113);
              vpxorq_avx512f(auVar116,auVar113);
              vpxorq_avx512f(auVar112,auVar113);
              vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (uVar96 == 10) {
              auVar51._16_16_ = _UNK_001a9fd0;
              auVar51._0_16_ = _SHUF_MASK;
              auVar51._32_32_ = _UNK_001a9fe0;
              auVar112 = vmovdqa64_avx512f(auVar51);
              auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
              *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
              uVar2 = in(uVar43);
              *(undefined4 *)*param_1 = uVar2;
              ddq_add_1234 = ddq_add_1234 + '\x01';
              auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
              auVar113 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
              vextracti32x4_avx512f(auVar113,1);
              auVar114 = vpshufb_avx512bw(in_ZMM0,auVar112);
              auVar116 = vpshufb_avx512bw(auVar116,auVar112);
              auVar111 = vpshufb_avx512vl(auVar113._0_32_,auVar112._0_32_);
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
              vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
              vmovdqu8_avx512vl(*(undefined1 (*) [32])(param_4[8] + uVar95));
              auVar112 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
              vpxorq_avx512f(auVar114,auVar112);
              vpxorq_avx512f(auVar116,auVar112);
              vpxorq_avx512vl(auVar111,auVar112._0_32_);
              vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            auVar50._16_16_ = _UNK_001a9fd0;
            auVar50._0_16_ = _SHUF_MASK;
            auVar50._32_32_ = _UNK_001a9fe0;
            auVar112 = vmovdqa64_avx512f(auVar50);
            auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
            auVar113 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            vextracti32x4_avx512f(auVar113,0);
            auVar114 = vpshufb_avx512bw(in_ZMM0,auVar112);
            auVar116 = vpshufb_avx512bw(auVar116,auVar112);
            auVar102 = vpshufb_avx512vl(auVar113._0_16_,auVar112._0_16_);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_4[8] + uVar95));
            auVar112 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar114,auVar112);
            vpxorq_avx512f(auVar116,auVar112);
            vpxorq_avx512vl(auVar102,auVar112._0_16_);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 == 0x10) {
            auVar49._16_16_ = _UNK_001a9fd0;
            auVar49._0_16_ = _SHUF_MASK;
            auVar49._32_32_ = _UNK_001a9fe0;
            auVar112 = vmovdqa64_avx512f(auVar49);
            auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
            auVar113 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            auVar114 = vpaddd_avx512f(auVar116,_ddq_add_8888);
            vextracti32x4_avx512f(auVar114,3);
            auVar115 = vpshufb_avx512bw(in_ZMM0,auVar112);
            auVar116 = vpshufb_avx512bw(auVar116,auVar112);
            auVar113 = vpshufb_avx512bw(auVar113,auVar112);
            auVar112 = vpshufb_avx512bw(auVar114,auVar112);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[0xc] + uVar95));
            auVar114 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar115,auVar114);
            vpxorq_avx512f(auVar116,auVar114);
            vpxorq_avx512f(auVar113,auVar114);
            vpxorq_avx512f(auVar112,auVar114);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 == 0xf) {
            auVar48._16_16_ = _UNK_001a9fd0;
            auVar48._0_16_ = _SHUF_MASK;
            auVar48._32_32_ = _UNK_001a9fe0;
            auVar112 = vmovdqa64_avx512f(auVar48);
            auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
            auVar113 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            auVar114 = vpaddd_avx512f(auVar116,_ddq_add_8888);
            vextracti32x4_avx512f(auVar114,2);
            auVar115 = vpshufb_avx512bw(in_ZMM0,auVar112);
            auVar116 = vpshufb_avx512bw(auVar116,auVar112);
            auVar113 = vpshufb_avx512bw(auVar113,auVar112);
            auVar112 = vpshufb_avx512bw(auVar114,auVar112);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[0xc] + uVar95));
            auVar114 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar115,auVar114);
            vpxorq_avx512f(auVar116,auVar114);
            vpxorq_avx512f(auVar113,auVar114);
            vpxorq_avx512f(auVar112,auVar114);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 == 0xe) {
            auVar47._16_16_ = _UNK_001a9fd0;
            auVar47._0_16_ = _SHUF_MASK;
            auVar47._32_32_ = _UNK_001a9fe0;
            auVar112 = vmovdqa64_avx512f(auVar47);
            auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
            auVar113 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
            auVar114 = vpaddd_avx512f(auVar116,_ddq_add_8888);
            vextracti32x4_avx512f(auVar114,1);
            auVar115 = vpshufb_avx512bw(in_ZMM0,auVar112);
            auVar116 = vpshufb_avx512bw(auVar116,auVar112);
            auVar113 = vpshufb_avx512bw(auVar113,auVar112);
            auVar111 = vpshufb_avx512vl(auVar114._0_32_,auVar112._0_32_);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
            vmovdqu8_avx512vl(*(undefined1 (*) [32])(param_4[0xc] + uVar95));
            auVar112 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar115,auVar112);
            vpxorq_avx512f(auVar116,auVar112);
            vpxorq_avx512f(auVar113,auVar112);
            vpxorq_avx512vl(auVar111,auVar112._0_32_);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          auVar46._16_16_ = _UNK_001a9fd0;
          auVar46._0_16_ = _SHUF_MASK;
          auVar46._32_32_ = _UNK_001a9fe0;
          auVar112 = vmovdqa64_avx512f(auVar46);
          auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
          auVar113 = vpaddd_avx512f(in_ZMM0,_ddq_add_8888);
          auVar114 = vpaddd_avx512f(auVar116,_ddq_add_8888);
          vextracti32x4_avx512f(auVar114,0);
          auVar115 = vpshufb_avx512bw(in_ZMM0,auVar112);
          auVar116 = vpshufb_avx512bw(auVar116,auVar112);
          auVar113 = vpshufb_avx512bw(auVar113,auVar112);
          auVar102 = vpshufb_avx512vl(auVar114._0_16_,auVar112._0_16_);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[8] + uVar95));
          vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_4[0xc] + uVar95));
          auVar112 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar115,auVar112);
          vpxorq_avx512f(auVar116,auVar112);
          vpxorq_avx512f(auVar113,auVar112);
          vpxorq_avx512vl(auVar102,auVar112._0_16_);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar96 == 4) {
          auVar58._16_16_ = _UNK_001a9fd0;
          auVar58._0_16_ = _SHUF_MASK;
          auVar58._32_32_ = _UNK_001a9fe0;
          auVar112 = vmovdqa64_avx512f(auVar58);
          vshufi64x2_avx512f(auVar116,auVar116);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          vextracti32x4_avx512f(in_ZMM0,3);
          auVar116 = vpshufb_avx512bw(in_ZMM0,auVar112);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          auVar112 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar116,auVar112);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (3 < uVar96) {
          if (uVar96 == 7) {
            auVar56._16_16_ = _UNK_001a9fd0;
            auVar56._0_16_ = _SHUF_MASK;
            auVar56._32_32_ = _UNK_001a9fe0;
            auVar112 = vmovdqa64_avx512f(auVar56);
            auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
            vextracti32x4_avx512f(auVar116,2);
            auVar113 = vpshufb_avx512bw(in_ZMM0,auVar112);
            auVar116 = vpshufb_avx512bw(auVar116,auVar112);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(param_4[4] + uVar95));
            auVar112 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar113,auVar112);
            vpxorq_avx512f(auVar116,auVar112);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar96 == 6) {
            auVar55._16_16_ = _UNK_001a9fd0;
            auVar55._0_16_ = _SHUF_MASK;
            auVar55._32_32_ = _UNK_001a9fe0;
            auVar112 = vmovdqa64_avx512f(auVar55);
            auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
            *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
            uVar2 = in(uVar43);
            *(undefined4 *)*param_1 = uVar2;
            ddq_add_1234 = ddq_add_1234 + '\x01';
            auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
            vextracti32x4_avx512f(auVar116,1);
            auVar113 = vpshufb_avx512bw(in_ZMM0,auVar112);
            auVar111 = vpshufb_avx512vl(auVar116._0_32_,auVar112._0_32_);
            vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
            vmovdqu8_avx512vl(*(undefined1 (*) [32])(param_4[4] + uVar95));
            auVar116 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
            vpxorq_avx512f(auVar113,auVar116);
            vpxorq_avx512vl(auVar111,auVar116._0_32_);
            vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          auVar54._16_16_ = _UNK_001a9fd0;
          auVar54._0_16_ = _SHUF_MASK;
          auVar54._32_32_ = _UNK_001a9fe0;
          auVar112 = vmovdqa64_avx512f(auVar54);
          auVar116 = vshufi64x2_avx512f(auVar116,auVar116);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          auVar116 = vpaddd_avx512f(auVar116,_ddq_add_5678);
          vextracti32x4_avx512f(auVar116,0);
          auVar113 = vpshufb_avx512bw(in_ZMM0,auVar112);
          auVar102 = vpshufb_avx512vl(auVar116._0_16_,auVar112._0_16_);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_4[4] + uVar95));
          auVar116 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar113,auVar116);
          vpxorq_avx512vl(auVar102,auVar116._0_16_);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar96 == 3) {
          auVar57._16_16_ = _UNK_001a9fd0;
          auVar57._0_16_ = _SHUF_MASK;
          auVar57._32_32_ = _UNK_001a9fe0;
          auVar112 = vmovdqa64_avx512f(auVar57);
          vshufi64x2_avx512f(auVar116,auVar116);
          *(char *)((long)param_3 + -0xf) = *(char *)((long)param_3 + -0xf) + cVar90;
          uVar2 = in(uVar43);
          *(undefined4 *)*param_1 = uVar2;
          ddq_add_1234 = ddq_add_1234 + '\x01';
          vextracti32x4_avx512f(in_ZMM0,2);
          auVar116 = vpshufb_avx512bw(in_ZMM0,auVar112);
          vmovdqu8_avx512bw(*(undefined1 (*) [64])(*param_4 + uVar95));
          auVar112 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 4));
          vpxorq_avx512f(auVar116,auVar112);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar96 == 2) {
          auVar44._16_16_ = _UNK_001a9fd0;
          auVar44._0_16_ = _SHUF_MASK;
          auVar111 = vmovdqa64_avx512vl(auVar44);
          auVar110 = vshufi64x2_avx512vl(ZEXT1632(auVar103),ZEXT1632(auVar103));
          ddq_add_1234 = ddq_add_1234 + '\x01';
          vextracti32x4_avx512f(ZEXT3264(auVar110),1);
          auVar111 = vpshufb_avx512vl(auVar110,auVar111);
          vmovdqu8_avx512vl(*(undefined1 (*) [32])
                             (CONCAT62(uVar93,CONCAT11(cVar92 + cVar88,uVar91)) + uVar95));
          auVar116 = vbroadcastf64x2_avx512dq(*param_1);
          vpxorq_avx512vl(auVar111,auVar116._0_32_);
          vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        auVar105 = vmovdqa64_avx512vl(_SHUF_MASK);
        auVar103 = vpaddd_avx(auVar103,_ONE);
        uVar94 = *(ulong *)(&byte64_len_to_mask_table + param_5 * 8);
        auVar106 = vextracti32x4_avx512f(ZEXT1664(auVar103),0);
        auVar103 = vpshufb_avx512vl(auVar103,auVar105);
        auVar107 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(*param_4 + uVar95));
        auVar109[1] = ((byte)(uVar94 >> 1) & 1) * auVar107[1];
        auVar109[0] = ((byte)uVar94 & 1) * auVar107[0];
        auVar109[2] = ((byte)(uVar94 >> 2) & 1) * auVar107[2];
        auVar109[3] = ((byte)(uVar94 >> 3) & 1) * auVar107[3];
        auVar109[4] = ((byte)(uVar94 >> 4) & 1) * auVar107[4];
        auVar109[5] = ((byte)(uVar94 >> 5) & 1) * auVar107[5];
        auVar109[6] = ((byte)(uVar94 >> 6) & 1) * auVar107[6];
        auVar109[7] = ((byte)(uVar94 >> 7) & 1) * auVar107[7];
        auVar109[8] = ((byte)(uVar94 >> 8) & 1) * auVar107[8];
        auVar109[9] = ((byte)(uVar94 >> 9) & 1) * auVar107[9];
        auVar109[10] = ((byte)(uVar94 >> 10) & 1) * auVar107[10];
        auVar109[0xb] = ((byte)(uVar94 >> 0xb) & 1) * auVar107[0xb];
        auVar109[0xc] = ((byte)(uVar94 >> 0xc) & 1) * auVar107[0xc];
        auVar109[0xd] = ((byte)(uVar94 >> 0xd) & 1) * auVar107[0xd];
        auVar109[0xe] = ((byte)(uVar94 >> 0xe) & 1) * auVar107[0xe];
        auVar109[0xf] = ((byte)(uVar94 >> 0xf) & 1) * auVar107[0xf];
        auVar116 = vbroadcastf64x2_avx512dq(*param_1);
        auVar103 = vpxorq_avx512vl(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(*param_1 + 8));
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(param_1[1]);
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[1] + 8));
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(param_1[2]);
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[2] + 8));
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(param_1[3]);
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[3] + 8));
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(param_1[4]);
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[4] + 8));
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(param_1[5]);
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[5] + 8));
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(param_1[6]);
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(*(undefined1 (*) [16])(param_1[6] + 8));
        auVar103 = aesenc(auVar103,auVar116._0_16_);
        auVar116 = vbroadcastf64x2_avx512dq(param_1[7]);
        auVar103 = aesenclast(auVar103,auVar116._0_16_);
        auVar107 = vpxorq_avx512vl(auVar103,auVar109);
        auVar108 = vextracti32x4_avx512f(ZEXT1664(auVar107),0);
        auVar103 = vmovdqu8_avx512vl(auVar107);
        *(undefined1 (*) [16])(*param_6 + uVar95) = auVar103;
        vmovdqu8_avx512bw(ZEXT1664(auVar107));
        auVar103 = vpshufb_avx512vl(auVar109,auVar105);
        auVar105 = vextracti32x4_avx512f(ZEXT1664(auVar103),0);
        if (0xf < (long)param_5) {
          *param_3 = 0;
          vpxorq_avx512f(ZEXT1664(auVar103),ZEXT1664(auVar102));
          vmovdqu64_avx512vl(param_2[0x15]);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *param_3 = param_5;
        auVar103 = vmovdqu64_avx512vl(auVar108);
        param_2[1] = auVar103;
        auVar103 = vpxorq_avx512vl(auVar102,auVar105);
        auVar102 = vmovdqu64_avx512vl(auVar106);
        *param_2 = auVar102;
        auVar102 = vmovdqu64_avx512vl(auVar103);
        param_2[4] = auVar102;
      }
    }
  }
  else {
    iVar89 = 0;
  }
  if (0x100 < param_5) {
    auVar116 = ZEXT1664((undefined1  [16])0x0);
    vmovdqa64_avx512f(auVar116);
    vmovdqa64_avx512f(auVar116);
    vmovdqa64_avx512f(auVar116);
    vmovdqa64_avx512f(auVar116);
    vmovdqa64_avx512f(auVar116);
    vmovdqa64_avx512f(auVar116);
    vmovdqa64_avx512f(auVar116);
    vmovdqa64_avx512f(auVar116);
    vmovdqa64_avx512f(auVar116);
    vmovdqa64_avx512f(auVar116);
    vmovdqa64_avx512f(auVar116);
    vmovdqa64_avx512f(auVar116);
  }
  return iVar89;
}



/* WARNING: Control flow encountered bad instruction data */

void ossl_aes_gcm_finalize_avx512(long param_1,long param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  
  if (param_2 != 0) {
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(ulong *)(param_1 + 0x38);
  auVar2 = vpinsrq_avx(auVar2,*(undefined8 *)(param_1 + 0x30),1);
  vpsllq_avx(auVar2,3);
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_gcm_gmult_avx512(undefined1 (*param_1) [16],long param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
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
  undefined1 auVar16 [16];
  
  auVar11 = vmovdqu64_avx512vl(*param_1);
  auVar12 = vmovdqu64_avx512vl(*(undefined1 (*) [16])(param_2 + 0x150));
  auVar14._8_8_ = 0;
  auVar14._0_8_ = auVar11._8_8_;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = auVar12._8_8_;
  auVar16 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar14 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar16 = auVar16 ^ auVar13 << uVar1;
    }
  }
  auVar15._8_8_ = 0;
  auVar15._0_8_ = auVar11._0_8_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = auVar12._0_8_;
  auVar14 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar15 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar14 = auVar14 ^ auVar3 << uVar1;
    }
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = auVar11._8_8_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = auVar12._0_8_;
  auVar13 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar5 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar13 = auVar13 ^ auVar6 << uVar1;
    }
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = auVar11._0_8_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = auVar12._8_8_;
  auVar11 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar7 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar11 = auVar11 ^ auVar9 << uVar1;
    }
  }
  auVar13 = vpxorq_avx512vl(auVar11,auVar13);
  auVar12 = vpsrldq_avx(auVar13,8);
  auVar11 = vpslldq_avx(auVar13,8);
  auVar13 = vpxorq_avx512vl(auVar16,auVar12);
  auVar14 = vpxorq_avx512vl(auVar11,auVar14);
  auVar15 = vmovdqu64_avx512vl(_POLY2);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = auVar15._8_8_;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = auVar14._0_8_;
  auVar16 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar11 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar16 = auVar16 ^ auVar12 << uVar1;
    }
  }
  auVar16 = vpslldq_avx(auVar16,8);
  auVar14 = vpxorq_avx512vl(auVar14,auVar16);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = auVar15._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = auVar14._0_8_;
  auVar16 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar2 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar16 = auVar16 ^ auVar4 << uVar1;
    }
  }
  auVar11 = vpsrldq_avx(auVar16,4);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = auVar15._0_8_;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = auVar14._8_8_;
  auVar16 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar8 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar16 = auVar16 ^ auVar10 << uVar1;
    }
  }
  auVar16 = vpslldq_avx(auVar16,4);
  auVar16 = vpternlogq_avx512vl(auVar16,auVar13,auVar11,0x96);
  auVar16 = vmovdqu64_avx512vl(auVar16);
  *param_1 = auVar16;
  return;
}



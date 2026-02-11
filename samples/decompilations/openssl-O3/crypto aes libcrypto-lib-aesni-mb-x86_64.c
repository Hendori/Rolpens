
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aesni_multi_cbc_encrypt(undefined8 *param_1,undefined1 (*param_2) [16],uint param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  undefined1 (*pauVar26) [16];
  undefined1 (*pauVar27) [16];
  undefined1 in_ZMM0 [64];
  undefined1 in_ZMM1 [64];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar30 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 in_ZMM4 [64];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 in_ZMM5 [64];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  undefined1 auStack_100 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [16];
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  if ((1 < param_3) && ((_DAT_00102004 & 0x10000000) != 0)) {
    auVar29 = *param_2;
    auStack_e0._0_4_ = *(undefined4 *)(param_1 + 2);
    iVar40 = 0;
    if (0 < (int)auStack_e0._0_4_) {
      iVar40 = auStack_e0._0_4_;
    }
    pauVar13 = (undefined1 (*) [16])*param_1;
    if ((int)auStack_e0._0_4_ < 1) {
      pauVar13 = &auStack_100;
    }
    lVar10 = param_1[1] - (long)pauVar13;
    auStack_e0._4_4_ = *(undefined4 *)(param_1 + 7);
    if (iVar40 < (int)auStack_e0._4_4_) {
      iVar40 = auStack_e0._4_4_;
    }
    pauVar12 = (undefined1 (*) [16])param_1[5];
    if ((int)auStack_e0._4_4_ < 1) {
      pauVar12 = &auStack_100;
    }
    lStack_b8 = param_1[6] - (long)pauVar12;
    auStack_e0._8_4_ = *(undefined4 *)(param_1 + 0xc);
    if (iVar40 < (int)auStack_e0._8_4_) {
      iVar40 = auStack_e0._8_4_;
    }
    pauVar18 = (undefined1 (*) [16])param_1[10];
    if ((int)auStack_e0._8_4_ < 1) {
      pauVar18 = &auStack_100;
    }
    lStack_b0 = param_1[0xb] - (long)pauVar18;
    auStack_e0._12_4_ = *(undefined4 *)(param_1 + 0x11);
    if (iVar40 < (int)auStack_e0._12_4_) {
      iVar40 = auStack_e0._12_4_;
    }
    pauVar15 = (undefined1 (*) [16])param_1[0xf];
    if ((int)auStack_e0._12_4_ < 1) {
      pauVar15 = &auStack_100;
    }
    lStack_a8 = param_1[0x10] - (long)pauVar15;
    auStack_d0._0_4_ = *(undefined4 *)(param_1 + 0x16);
    if (iVar40 < (int)auStack_d0._0_4_) {
      iVar40 = auStack_d0._0_4_;
    }
    pauVar22 = (undefined1 (*) [16])param_1[0x14];
    if ((int)auStack_d0._0_4_ < 1) {
      pauVar22 = &auStack_100;
    }
    lStack_a0 = param_1[0x15] - (long)pauVar22;
    auStack_d0._4_4_ = *(undefined4 *)(param_1 + 0x1b);
    if (iVar40 < (int)auStack_d0._4_4_) {
      iVar40 = auStack_d0._4_4_;
    }
    pauVar17 = (undefined1 (*) [16])param_1[0x19];
    if ((int)auStack_d0._4_4_ < 1) {
      pauVar17 = &auStack_100;
    }
    lStack_98 = param_1[0x1a] - (long)pauVar17;
    auStack_d0._8_4_ = *(undefined4 *)(param_1 + 0x20);
    if (iVar40 < (int)auStack_d0._8_4_) {
      iVar40 = auStack_d0._8_4_;
    }
    pauVar25 = (undefined1 (*) [16])param_1[0x1e];
    if ((int)auStack_d0._8_4_ < 1) {
      pauVar25 = &auStack_100;
    }
    lStack_90 = param_1[0x1f] - (long)pauVar25;
    auStack_d0._12_4_ = *(undefined4 *)(param_1 + 0x25);
    if (iVar40 < (int)auStack_d0._12_4_) {
      iVar40 = auStack_d0._12_4_;
    }
    pauVar20 = (undefined1 (*) [16])param_1[0x23];
    if ((int)auStack_d0._12_4_ < 1) {
      pauVar20 = &auStack_100;
    }
    lStack_88 = param_1[0x24] - (long)pauVar20;
    if (iVar40 != 0) {
      auVar37 = param_2[1];
      auVar28 = param_2[2];
      uVar1 = *(uint *)param_2[0xf];
      auVar31 = *(undefined1 (*) [16])(param_1 + 3) ^ auVar29 ^ *pauVar13;
      auVar30 = *(undefined1 (*) [16])(param_1 + 8) ^ auVar29 ^ *pauVar12;
      auVar34 = *(undefined1 (*) [16])(param_1 + 0xd) ^ auVar29 ^ *pauVar18;
      auVar32 = *(undefined1 (*) [16])(param_1 + 0x12) ^ auVar29 ^ *pauVar15;
      auVar35 = *(undefined1 (*) [16])(param_1 + 0x17) ^ auVar29 ^ *pauVar22;
      auVar33 = *(undefined1 (*) [16])(param_1 + 0x1c) ^ auVar29 ^ *pauVar17;
      auVar36 = *(undefined1 (*) [16])(param_1 + 0x21) ^ auVar29 ^ *pauVar25;
      auVar38 = *(undefined1 (*) [16])(param_1 + 0x26) ^ auVar29 ^ *pauVar20;
      do {
        auVar31 = aesenc(auVar31,auVar37);
        auVar30 = aesenc(auVar30,auVar37);
        auVar34 = aesenc(auVar34,auVar37);
        auVar32 = aesenc(auVar32,auVar37);
        pauVar14 = pauVar13;
        if ((int)auStack_e0._0_4_ < 2) {
          pauVar14 = &auStack_100;
        }
        auVar35 = aesenc(auVar35,auVar37);
        puVar11 = *pauVar13 + lVar10;
        if ((int)auStack_e0._0_4_ < 1) {
          puVar11 = auStack_100;
        }
        auVar33 = aesenc(auVar33,auVar37);
        lVar10 = (long)puVar11 - (long)pauVar14;
        auVar36 = aesenc(auVar36,auVar37);
        auVar38 = aesenc(auVar38,auVar37);
        auVar37 = param_2[3];
        auStack_80 = auVar29 ^ pauVar14[1];
        auVar31 = aesenc(auVar31,auVar28);
        auVar30 = aesenc(auVar30,auVar28);
        auVar34 = aesenc(auVar34,auVar28);
        auVar32 = aesenc(auVar32,auVar28);
        pauVar16 = pauVar12;
        if ((int)auStack_e0._4_4_ < 2) {
          pauVar16 = &auStack_100;
        }
        auVar35 = aesenc(auVar35,auVar28);
        puVar11 = *pauVar12 + lStack_b8;
        if ((int)auStack_e0._4_4_ < 1) {
          puVar11 = auStack_100;
        }
        auVar33 = aesenc(auVar33,auVar28);
        lStack_b8 = (long)puVar11 - (long)pauVar16;
        auVar36 = aesenc(auVar36,auVar28);
        auVar2 = auVar29 ^ pauVar16[1];
        auVar38 = aesenc(auVar38,auVar28);
        auVar28 = param_2[4];
        auVar31 = aesenc(auVar31,auVar37);
        auVar30 = aesenc(auVar30,auVar37);
        auVar34 = aesenc(auVar34,auVar37);
        auVar32 = aesenc(auVar32,auVar37);
        pauVar19 = pauVar18;
        if ((int)auStack_e0._8_4_ < 2) {
          pauVar19 = &auStack_100;
        }
        auVar35 = aesenc(auVar35,auVar37);
        puVar11 = *pauVar18 + lStack_b0;
        if ((int)auStack_e0._8_4_ < 1) {
          puVar11 = auStack_100;
        }
        auVar33 = aesenc(auVar33,auVar37);
        lStack_b0 = (long)puVar11 - (long)pauVar19;
        auVar36 = aesenc(auVar36,auVar37);
        auVar3 = auVar29 ^ pauVar19[1];
        auVar38 = aesenc(auVar38,auVar37);
        auVar37 = param_2[5];
        auVar31 = aesenc(auVar31,auVar28);
        auVar30 = aesenc(auVar30,auVar28);
        auVar34 = aesenc(auVar34,auVar28);
        auVar32 = aesenc(auVar32,auVar28);
        pauVar21 = pauVar15;
        if ((int)auStack_e0._12_4_ < 2) {
          pauVar21 = &auStack_100;
        }
        auVar35 = aesenc(auVar35,auVar28);
        puVar11 = *pauVar15 + lStack_a8;
        if ((int)auStack_e0._12_4_ < 1) {
          puVar11 = auStack_100;
        }
        auVar33 = aesenc(auVar33,auVar28);
        lStack_a8 = (long)puVar11 - (long)pauVar21;
        auVar36 = aesenc(auVar36,auVar28);
        auVar4 = auVar29 ^ pauVar21[1];
        auVar38 = aesenc(auVar38,auVar28);
        auVar28 = param_2[6];
        auVar31 = aesenc(auVar31,auVar37);
        auVar30 = aesenc(auVar30,auVar37);
        auVar34 = aesenc(auVar34,auVar37);
        auVar32 = aesenc(auVar32,auVar37);
        pauVar23 = pauVar22;
        if ((int)auStack_d0._0_4_ < 2) {
          pauVar23 = &auStack_100;
        }
        auVar35 = aesenc(auVar35,auVar37);
        puVar11 = *pauVar22 + lStack_a0;
        if ((int)auStack_d0._0_4_ < 1) {
          puVar11 = auStack_100;
        }
        auVar33 = aesenc(auVar33,auVar37);
        lStack_a0 = (long)puVar11 - (long)pauVar23;
        auVar36 = aesenc(auVar36,auVar37);
        auVar5 = auVar29 ^ pauVar23[1];
        auVar38 = aesenc(auVar38,auVar37);
        auVar37 = param_2[7];
        auVar31 = aesenc(auVar31,auVar28);
        auVar30 = aesenc(auVar30,auVar28);
        auVar34 = aesenc(auVar34,auVar28);
        auVar32 = aesenc(auVar32,auVar28);
        pauVar24 = pauVar17;
        if ((int)auStack_d0._4_4_ < 2) {
          pauVar24 = &auStack_100;
        }
        auVar35 = aesenc(auVar35,auVar28);
        puVar11 = *pauVar17 + lStack_98;
        if ((int)auStack_d0._4_4_ < 1) {
          puVar11 = auStack_100;
        }
        auVar33 = aesenc(auVar33,auVar28);
        lStack_98 = (long)puVar11 - (long)pauVar24;
        auVar36 = aesenc(auVar36,auVar28);
        auVar6 = auVar29 ^ pauVar24[1];
        auVar38 = aesenc(auVar38,auVar28);
        auVar28 = param_2[8];
        auVar31 = aesenc(auVar31,auVar37);
        auVar30 = aesenc(auVar30,auVar37);
        auVar34 = aesenc(auVar34,auVar37);
        auVar32 = aesenc(auVar32,auVar37);
        pauVar26 = pauVar25;
        if ((int)auStack_d0._8_4_ < 2) {
          pauVar26 = &auStack_100;
        }
        auVar35 = aesenc(auVar35,auVar37);
        puVar11 = *pauVar25 + lStack_90;
        if ((int)auStack_d0._8_4_ < 1) {
          puVar11 = auStack_100;
        }
        auVar33 = aesenc(auVar33,auVar37);
        lStack_90 = (long)puVar11 - (long)pauVar26;
        auVar36 = aesenc(auVar36,auVar37);
        auVar7 = auVar29 ^ pauVar26[1];
        auVar38 = aesenc(auVar38,auVar37);
        auVar37 = param_2[9];
        auVar31 = aesenc(auVar31,auVar28);
        auVar30 = aesenc(auVar30,auVar28);
        auVar34 = aesenc(auVar34,auVar28);
        auVar32 = aesenc(auVar32,auVar28);
        pauVar27 = pauVar20;
        if ((int)auStack_d0._12_4_ < 2) {
          pauVar27 = &auStack_100;
        }
        auVar35 = aesenc(auVar35,auVar28);
        puVar11 = *pauVar20 + lStack_88;
        if ((int)auStack_d0._12_4_ < 1) {
          puVar11 = auStack_100;
        }
        auVar33 = aesenc(auVar33,auVar28);
        lStack_88 = (long)puVar11 - (long)pauVar27;
        auVar36 = aesenc(auVar36,auVar28);
        auVar8 = auVar29 ^ pauVar27[1];
        auVar29 = aesenc(auVar38,auVar28);
        auVar28 = param_2[10];
        if (10 < uVar1) {
          auVar31 = aesenc(auVar31,auVar37);
          auVar30 = aesenc(auVar30,auVar37);
          auVar34 = aesenc(auVar34,auVar37);
          auVar32 = aesenc(auVar32,auVar37);
          auVar35 = aesenc(auVar35,auVar37);
          auVar33 = aesenc(auVar33,auVar37);
          auVar36 = aesenc(auVar36,auVar37);
          auVar29 = aesenc(auVar29,auVar37);
          auVar37 = param_2[0xb];
          auVar31 = aesenc(auVar31,auVar28);
          auVar30 = aesenc(auVar30,auVar28);
          auVar34 = aesenc(auVar34,auVar28);
          auVar32 = aesenc(auVar32,auVar28);
          auVar35 = aesenc(auVar35,auVar28);
          auVar33 = aesenc(auVar33,auVar28);
          auVar36 = aesenc(auVar36,auVar28);
          auVar29 = aesenc(auVar29,auVar28);
          auVar28 = param_2[0xc];
          if (uVar1 != 0xb) {
            auVar31 = aesenc(auVar31,auVar37);
            auVar30 = aesenc(auVar30,auVar37);
            auVar34 = aesenc(auVar34,auVar37);
            auVar32 = aesenc(auVar32,auVar37);
            auVar35 = aesenc(auVar35,auVar37);
            auVar33 = aesenc(auVar33,auVar37);
            auVar36 = aesenc(auVar36,auVar37);
            auVar29 = aesenc(auVar29,auVar37);
            auVar37 = param_2[0xd];
            auVar31 = aesenc(auVar31,auVar28);
            auVar30 = aesenc(auVar30,auVar28);
            auVar34 = aesenc(auVar34,auVar28);
            auVar32 = aesenc(auVar32,auVar28);
            auVar35 = aesenc(auVar35,auVar28);
            auVar33 = aesenc(auVar33,auVar28);
            auVar36 = aesenc(auVar36,auVar28);
            auVar29 = aesenc(auVar29,auVar28);
            auVar28 = param_2[0xe];
          }
        }
        auVar31 = aesenc(auVar31,auVar37);
        auVar38 = aesenc(auVar30,auVar37);
        auVar34 = aesenc(auVar34,auVar37);
        auVar30 = vpcmpgtd_avx(auStack_e0,(undefined1  [16])0x0);
        auVar32 = aesenc(auVar32,auVar37);
        auVar35 = aesenc(auVar35,auVar37);
        auStack_e0 = vpaddd_avx(auVar30,auStack_e0);
        auVar33 = aesenc(auVar33,auVar37);
        auVar36 = aesenc(auVar36,auVar37);
        auVar39 = aesenc(auVar29,auVar37);
        auVar37 = param_2[1];
        auVar31 = aesenclast(auVar31,auVar28);
        auVar30 = aesenclast(auVar38,auVar28);
        auVar34 = aesenclast(auVar34,auVar28);
        auVar29 = vpcmpgtd_avx(auStack_d0,(undefined1  [16])0x0);
        auVar32 = aesenclast(auVar32,auVar28);
        auVar35 = aesenclast(auVar35,auVar28);
        auStack_d0 = vpaddd_avx(auStack_d0,auVar29);
        auVar29 = *param_2;
        auVar33 = aesenclast(auVar33,auVar28);
        auVar36 = aesenclast(auVar36,auVar28);
        auVar38 = aesenclast(auVar39,auVar28);
        auVar28 = param_2[2];
        *(undefined1 (*) [16])((long)pauVar14 + lVar10) = auVar31;
        pauVar13 = pauVar14 + 1;
        auVar31 = auVar31 ^ auStack_80;
        *(undefined1 (*) [16])((long)pauVar16 + lStack_b8) = auVar30;
        pauVar12 = pauVar16 + 1;
        auVar30 = auVar30 ^ auVar2;
        *(undefined1 (*) [16])((long)pauVar19 + lStack_b0) = auVar34;
        pauVar18 = pauVar19 + 1;
        auVar34 = auVar34 ^ auVar3;
        *(undefined1 (*) [16])((long)pauVar21 + lStack_a8) = auVar32;
        pauVar15 = pauVar21 + 1;
        auVar32 = auVar32 ^ auVar4;
        *(undefined1 (*) [16])((long)pauVar23 + lStack_a0) = auVar35;
        pauVar22 = pauVar23 + 1;
        auVar35 = auVar35 ^ auVar5;
        *(undefined1 (*) [16])((long)pauVar24 + lStack_98) = auVar33;
        pauVar17 = pauVar24 + 1;
        auVar33 = auVar33 ^ auVar6;
        *(undefined1 (*) [16])((long)pauVar26 + lStack_90) = auVar36;
        pauVar25 = pauVar26 + 1;
        auVar36 = auVar36 ^ auVar7;
        *(undefined1 (*) [16])((long)pauVar27 + lStack_88) = auVar38;
        pauVar20 = pauVar27 + 1;
        auVar38 = auVar38 ^ auVar8;
        iVar40 = iVar40 + -1;
      } while (iVar40 != 0);
    }
    return;
  }
  auVar29 = *param_2;
  param_1 = param_1 + 10;
  do {
    iVar40 = *(int *)(param_1 + -8);
    pauVar13 = (undefined1 (*) [16])param_1[-9];
    iVar9 = 0;
    if (0 < iVar40) {
      iVar9 = iVar40;
    }
    pauVar12 = (undefined1 (*) [16])param_1[-10];
    if (iVar40 < 1) {
      pauVar12 = &auStack_80;
    }
    iVar41 = *(int *)(param_1 + -3);
    pauVar18 = (undefined1 (*) [16])param_1[-4];
    if (iVar9 < iVar41) {
      iVar9 = iVar41;
    }
    iStack_5c = iVar41;
    local_60 = iVar40;
    pauVar15 = (undefined1 (*) [16])param_1[-5];
    if (iVar41 < 1) {
      pauVar15 = &auStack_80;
    }
    iVar42 = *(int *)(param_1 + 2);
    pauVar22 = (undefined1 (*) [16])param_1[1];
    if (iVar9 < iVar42) {
      iVar9 = iVar42;
    }
    iStack_58 = iVar42;
    pauVar17 = (undefined1 (*) [16])*param_1;
    if (iVar42 < 1) {
      pauVar17 = &auStack_80;
    }
    iVar43 = *(int *)(param_1 + 7);
    pauVar25 = (undefined1 (*) [16])param_1[6];
    if (iVar9 < iVar43) {
      iVar9 = iVar43;
    }
    iStack_54 = iVar43;
    pauVar20 = (undefined1 (*) [16])param_1[5];
    if (iVar43 < 1) {
      pauVar20 = &auStack_80;
    }
    if (iVar9 == 0) {
      return;
    }
    in_ZMM1._0_16_ = param_2[1];
    in_ZMM0._0_16_ = param_2[2];
    uVar1 = *(uint *)param_2[0xf];
    in_ZMM2._0_16_ = *(undefined1 (*) [16])(param_1 + -7) ^ auVar29 ^ *pauVar12;
    in_ZMM3._0_16_ = *(undefined1 (*) [16])(param_1 + -2) ^ auVar29 ^ *pauVar15;
    in_ZMM4._0_16_ = *(undefined1 (*) [16])(param_1 + 3) ^ auVar29 ^ *pauVar17;
    in_ZMM5._0_16_ = *(undefined1 (*) [16])(param_1 + 8) ^ auVar29 ^ *pauVar20;
    lVar10 = 0;
    do {
      pauVar14 = (undefined1 (*) [16])(&stack0xffffffffffffff90 + -(lVar10 + 0x10));
      auVar29 = in_ZMM1._0_16_;
      auVar28 = aesenc(in_ZMM2._0_16_,auVar29);
      auVar30 = aesenc(in_ZMM3._0_16_,auVar29);
      auVar31 = aesenc(in_ZMM4._0_16_,auVar29);
      auVar34 = aesenc(in_ZMM5._0_16_,auVar29);
      auVar29 = param_2[3];
      auVar37 = in_ZMM0._0_16_;
      auVar28 = aesenc(auVar28,auVar37);
      auVar30 = aesenc(auVar30,auVar37);
      auVar31 = aesenc(auVar31,auVar37);
      if (local_60 < 2) {
        pauVar12 = pauVar14;
      }
      if (local_60 < 1) {
        pauVar13 = pauVar14;
      }
      auVar34 = aesenc(auVar34,auVar37);
      auVar37 = param_2[4];
      auVar28 = aesenc(auVar28,auVar29);
      auVar30 = aesenc(auVar30,auVar29);
      auVar31 = aesenc(auVar31,auVar29);
      if (iStack_5c < 2) {
        pauVar15 = pauVar14;
      }
      if (iStack_5c < 1) {
        pauVar18 = pauVar14;
      }
      auVar34 = aesenc(auVar34,auVar29);
      auVar29 = param_2[5];
      auVar28 = aesenc(auVar28,auVar37);
      auVar30 = aesenc(auVar30,auVar37);
      auVar31 = aesenc(auVar31,auVar37);
      if (iStack_58 < 2) {
        pauVar17 = pauVar14;
      }
      if (iStack_58 < 1) {
        pauVar22 = pauVar14;
      }
      auVar34 = aesenc(auVar34,auVar37);
      auVar37 = param_2[6];
      auVar28 = aesenc(auVar28,auVar29);
      auVar30 = aesenc(auVar30,auVar29);
      auVar31 = aesenc(auVar31,auVar29);
      if (iStack_54 < 2) {
        pauVar20 = pauVar14;
      }
      if (iStack_54 < 1) {
        pauVar25 = pauVar14;
      }
      auVar35 = aesenc(auVar34,auVar29);
      auVar34 = param_2[7];
      auVar29 = aesenc(auVar28,auVar37);
      auVar28 = aesenc(auVar30,auVar37);
      auVar32 = aesenc(auVar31,auVar37);
      auVar35 = aesenc(auVar35,auVar37);
      auVar37 = param_2[8];
      auVar30 = aesenc(auVar29,auVar34);
      auVar29 = *param_2;
      auVar31 = aesenc(auVar28,auVar34);
      iVar40 = iVar40 - (uint)(0 < iVar40);
      iVar41 = iVar41 - (uint)(0 < iVar41);
      iVar42 = iVar42 - (uint)(0 < iVar42);
      iVar43 = iVar43 - (uint)(0 < iVar43);
      iStack_5c = iVar41;
      local_60 = iVar40;
      iStack_58 = iVar42;
      iStack_54 = iVar43;
      auVar32 = aesenc(auVar32,auVar34);
      auVar35 = aesenc(auVar35,auVar34);
      auVar28 = param_2[9];
      auVar30 = aesenc(auVar30,auVar37);
      auVar31 = aesenc(auVar31,auVar37);
      auVar34 = aesenc(auVar32,auVar37);
      auVar32 = aesenc(auVar35,auVar37);
      auVar37 = param_2[10];
      if (10 < uVar1) {
        auVar30 = aesenc(auVar30,auVar28);
        auVar31 = aesenc(auVar31,auVar28);
        auVar34 = aesenc(auVar34,auVar28);
        auVar32 = aesenc(auVar32,auVar28);
        auVar28 = param_2[0xb];
        auVar30 = aesenc(auVar30,auVar37);
        auVar31 = aesenc(auVar31,auVar37);
        auVar34 = aesenc(auVar34,auVar37);
        auVar32 = aesenc(auVar32,auVar37);
        auVar37 = param_2[0xc];
        if (uVar1 != 0xb) {
          auVar30 = aesenc(auVar30,auVar28);
          auVar31 = aesenc(auVar31,auVar28);
          auVar34 = aesenc(auVar34,auVar28);
          auVar32 = aesenc(auVar32,auVar28);
          auVar28 = param_2[0xd];
          auVar30 = aesenc(auVar30,auVar37);
          auVar31 = aesenc(auVar31,auVar37);
          auVar34 = aesenc(auVar34,auVar37);
          auVar32 = aesenc(auVar32,auVar37);
          auVar37 = param_2[0xe];
        }
      }
      auVar30 = aesenc(auVar30,auVar28);
      auVar31 = aesenc(auVar31,auVar28);
      auVar34 = aesenc(auVar34,auVar28);
      auVar36 = aesenc(auVar32,auVar28);
      auVar28 = *(undefined1 (*) [16])(pauVar12[1] + lVar10);
      in_ZMM1._0_16_ = param_2[1];
      auVar32 = aesenclast(auVar30,auVar37);
      auVar30 = *(undefined1 (*) [16])(pauVar15[1] + lVar10);
      auVar35 = aesenclast(auVar31,auVar37);
      auVar31 = *(undefined1 (*) [16])(pauVar17[1] + lVar10);
      auVar33 = aesenclast(auVar34,auVar37);
      auVar34 = *(undefined1 (*) [16])(pauVar20[1] + lVar10);
      auVar37 = aesenclast(auVar36,auVar37);
      in_ZMM0._0_16_ = param_2[2];
      *(undefined1 (*) [16])(*pauVar13 + lVar10) = auVar32;
      in_ZMM2._0_16_ = auVar32 ^ auVar28 ^ auVar29;
      *(undefined1 (*) [16])(*pauVar18 + lVar10) = auVar35;
      in_ZMM3._0_16_ = auVar35 ^ auVar30 ^ auVar29;
      *(undefined1 (*) [16])(*pauVar22 + lVar10) = auVar33;
      in_ZMM4._0_16_ = auVar33 ^ auVar31 ^ auVar29;
      *(undefined1 (*) [16])(*pauVar25 + lVar10) = auVar37;
      in_ZMM5._0_16_ = auVar37 ^ auVar34 ^ auVar29;
      iVar9 = iVar9 + -1;
      lVar10 = lVar10 + 0x10;
    } while (iVar9 != 0);
    param_1 = param_1 + 0x14;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aesni_multi_cbc_decrypt(undefined8 *param_1,undefined1 (*param_2) [16],uint param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 in_ZMM0 [64];
  undefined1 in_ZMM1 [64];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar27 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 in_ZMM4 [64];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 in_ZMM5 [64];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 in_ZMM7 [64];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 in_ZMM8 [64];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 in_ZMM9 [64];
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [16];
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_80 [16];
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  if ((1 < param_3) && ((_DAT_00102004 & 0x10000000) != 0)) {
    auVar23 = *param_2;
    auStack_2a0._0_4_ = *(undefined4 *)(param_1 + 2);
    pauVar7 = (undefined1 (*) [16])*param_1;
    iVar2 = auStack_2a0._0_4_;
    if ((int)auStack_2a0._0_4_ < 1) {
      pauVar7 = &auStack_2c0;
      iVar2 = 0;
    }
    lVar3 = param_1[1] - (long)pauVar7;
    auStack_2a0._4_4_ = *(undefined4 *)(param_1 + 7);
    if (iVar2 < (int)auStack_2a0._4_4_) {
      iVar2 = auStack_2a0._4_4_;
    }
    pauVar6 = (undefined1 (*) [16])param_1[5];
    if ((int)auStack_2a0._4_4_ < 1) {
      pauVar6 = &auStack_2c0;
    }
    lStack_278 = param_1[6] - (long)pauVar6;
    auStack_2a0._8_4_ = *(undefined4 *)(param_1 + 0xc);
    if (iVar2 < (int)auStack_2a0._8_4_) {
      iVar2 = auStack_2a0._8_4_;
    }
    pauVar12 = (undefined1 (*) [16])param_1[10];
    if ((int)auStack_2a0._8_4_ < 1) {
      pauVar12 = &auStack_2c0;
    }
    lStack_270 = param_1[0xb] - (long)pauVar12;
    auStack_2a0._12_4_ = *(undefined4 *)(param_1 + 0x11);
    if (iVar2 < (int)auStack_2a0._12_4_) {
      iVar2 = auStack_2a0._12_4_;
    }
    pauVar9 = (undefined1 (*) [16])param_1[0xf];
    if ((int)auStack_2a0._12_4_ < 1) {
      pauVar9 = &auStack_2c0;
    }
    lStack_268 = param_1[0x10] - (long)pauVar9;
    auStack_290._0_4_ = *(undefined4 *)(param_1 + 0x16);
    if (iVar2 < (int)auStack_290._0_4_) {
      iVar2 = auStack_290._0_4_;
    }
    pauVar16 = (undefined1 (*) [16])param_1[0x14];
    if ((int)auStack_290._0_4_ < 1) {
      pauVar16 = &auStack_2c0;
    }
    lStack_260 = param_1[0x15] - (long)pauVar16;
    auStack_290._4_4_ = *(undefined4 *)(param_1 + 0x1b);
    if (iVar2 < (int)auStack_290._4_4_) {
      iVar2 = auStack_290._4_4_;
    }
    pauVar11 = (undefined1 (*) [16])param_1[0x19];
    if ((int)auStack_290._4_4_ < 1) {
      pauVar11 = &auStack_2c0;
    }
    lStack_258 = param_1[0x1a] - (long)pauVar11;
    auStack_290._8_4_ = *(undefined4 *)(param_1 + 0x20);
    if (iVar2 < (int)auStack_290._8_4_) {
      iVar2 = auStack_290._8_4_;
    }
    pauVar19 = (undefined1 (*) [16])param_1[0x1e];
    if ((int)auStack_290._8_4_ < 1) {
      pauVar19 = &auStack_2c0;
    }
    lStack_250 = param_1[0x1f] - (long)pauVar19;
    auStack_290._12_4_ = *(undefined4 *)(param_1 + 0x25);
    if (iVar2 < (int)auStack_290._12_4_) {
      iVar2 = auStack_290._12_4_;
    }
    pauVar14 = (undefined1 (*) [16])param_1[0x23];
    if ((int)auStack_290._12_4_ < 1) {
      pauVar14 = &auStack_2c0;
    }
    lStack_248 = param_1[0x24] - (long)pauVar14;
    if (iVar2 != 0) {
      auVar25 = param_2[1];
      auVar22 = param_2[2];
      uVar1 = *(uint *)param_2[0xf];
      pauVar5 = &auStack_180;
      auStack_180 = *pauVar7;
      auVar33 = *pauVar7 ^ auVar23;
      auStack_170 = *pauVar6;
      auVar29 = *pauVar6 ^ auVar23;
      auStack_160 = *pauVar12;
      auVar30 = *pauVar12 ^ auVar23;
      auStack_150 = *pauVar9;
      auVar34 = *pauVar9 ^ auVar23;
      auStack_140 = *pauVar16;
      auVar27 = *pauVar16 ^ auVar23;
      auStack_130 = *pauVar11;
      auVar28 = *pauVar11 ^ auVar23;
      auStack_120 = *pauVar19;
      auVar32 = *pauVar19 ^ auVar23;
      auStack_110 = *pauVar14;
      auVar23 = *pauVar14 ^ auVar23;
      do {
        pauVar5 = (undefined1 (*) [16])((ulong)pauVar5 ^ 0x80);
        auVar24 = aesdec(auVar33,auVar25);
        auVar29 = aesdec(auVar29,auVar25);
        auVar30 = aesdec(auVar30,auVar25);
        auVar34 = aesdec(auVar34,auVar25);
        pauVar8 = pauVar7;
        if ((int)auStack_2a0._0_4_ < 2) {
          pauVar8 = &auStack_2c0;
        }
        auVar27 = aesdec(auVar27,auVar25);
        puVar4 = *pauVar7 + lVar3;
        if ((int)auStack_2a0._0_4_ < 1) {
          puVar4 = auStack_2c0;
        }
        auVar38 = aesdec(auVar28,auVar25);
        lVar3 = (long)puVar4 - (long)pauVar8;
        auVar41 = aesdec(auVar32,auVar25);
        auVar33 = pauVar8[1];
        auVar44 = aesdec(auVar23,auVar25);
        auVar23 = param_2[3];
        auVar25 = aesdec(auVar24,auVar22);
        auVar28 = aesdec(auVar29,auVar22);
        auVar32 = aesdec(auVar30,auVar22);
        auVar30 = aesdec(auVar34,auVar22);
        pauVar10 = pauVar6;
        if ((int)auStack_2a0._4_4_ < 2) {
          pauVar10 = &auStack_2c0;
        }
        auVar27 = aesdec(auVar27,auVar22);
        puVar4 = *pauVar6 + lStack_278;
        if ((int)auStack_2a0._4_4_ < 1) {
          puVar4 = auStack_2c0;
        }
        auVar24 = aesdec(auVar38,auVar22);
        lStack_278 = (long)puVar4 - (long)pauVar10;
        auVar38 = aesdec(auVar41,auVar22);
        auVar29 = pauVar10[1];
        auVar41 = aesdec(auVar44,auVar22);
        auVar22 = param_2[4];
        auVar25 = aesdec(auVar25,auVar23);
        auVar28 = aesdec(auVar28,auVar23);
        auVar32 = aesdec(auVar32,auVar23);
        auVar34 = aesdec(auVar30,auVar23);
        pauVar13 = pauVar12;
        if ((int)auStack_2a0._8_4_ < 2) {
          pauVar13 = &auStack_2c0;
        }
        auVar27 = aesdec(auVar27,auVar23);
        puVar4 = *pauVar12 + lStack_270;
        if ((int)auStack_2a0._8_4_ < 1) {
          puVar4 = auStack_2c0;
        }
        auVar44 = aesdec(auVar24,auVar23);
        lStack_270 = (long)puVar4 - (long)pauVar13;
        auVar38 = aesdec(auVar38,auVar23);
        auVar30 = pauVar13[1];
        auVar41 = aesdec(auVar41,auVar23);
        auVar23 = param_2[5];
        auVar25 = aesdec(auVar25,auVar22);
        auVar28 = aesdec(auVar28,auVar22);
        auVar32 = aesdec(auVar32,auVar22);
        auVar24 = aesdec(auVar34,auVar22);
        pauVar15 = pauVar9;
        if ((int)auStack_2a0._12_4_ < 2) {
          pauVar15 = &auStack_2c0;
        }
        auVar27 = aesdec(auVar27,auVar22);
        puVar4 = *pauVar9 + lStack_268;
        if ((int)auStack_2a0._12_4_ < 1) {
          puVar4 = auStack_2c0;
        }
        auVar44 = aesdec(auVar44,auVar22);
        lStack_268 = (long)puVar4 - (long)pauVar15;
        auVar38 = aesdec(auVar38,auVar22);
        auVar34 = pauVar15[1];
        auVar41 = aesdec(auVar41,auVar22);
        auVar22 = param_2[6];
        auVar25 = aesdec(auVar25,auVar23);
        auVar28 = aesdec(auVar28,auVar23);
        auVar32 = aesdec(auVar32,auVar23);
        auVar24 = aesdec(auVar24,auVar23);
        pauVar17 = pauVar16;
        if ((int)auStack_290._0_4_ < 2) {
          pauVar17 = &auStack_2c0;
        }
        auVar36 = aesdec(auVar27,auVar23);
        puVar4 = *pauVar16 + lStack_260;
        if ((int)auStack_290._0_4_ < 1) {
          puVar4 = auStack_2c0;
        }
        auVar44 = aesdec(auVar44,auVar23);
        lStack_260 = (long)puVar4 - (long)pauVar17;
        auVar42 = aesdec(auVar38,auVar23);
        auVar27 = pauVar17[1];
        auVar41 = aesdec(auVar41,auVar23);
        auVar23 = param_2[7];
        auVar25 = aesdec(auVar25,auVar22);
        auVar38 = aesdec(auVar28,auVar22);
        auVar32 = aesdec(auVar32,auVar22);
        auVar24 = aesdec(auVar24,auVar22);
        pauVar18 = pauVar11;
        if ((int)auStack_290._4_4_ < 2) {
          pauVar18 = &auStack_2c0;
        }
        auVar36 = aesdec(auVar36,auVar22);
        puVar4 = *pauVar11 + lStack_258;
        if ((int)auStack_290._4_4_ < 1) {
          puVar4 = auStack_2c0;
        }
        auVar44 = aesdec(auVar44,auVar22);
        lStack_258 = (long)puVar4 - (long)pauVar18;
        auVar42 = aesdec(auVar42,auVar22);
        auVar28 = pauVar18[1];
        auVar45 = aesdec(auVar41,auVar22);
        auVar22 = param_2[8];
        auVar25 = aesdec(auVar25,auVar23);
        auVar38 = aesdec(auVar38,auVar23);
        auVar41 = aesdec(auVar32,auVar23);
        auVar24 = aesdec(auVar24,auVar23);
        pauVar20 = pauVar19;
        if ((int)auStack_290._8_4_ < 2) {
          pauVar20 = &auStack_2c0;
        }
        auVar36 = aesdec(auVar36,auVar23);
        puVar4 = *pauVar19 + lStack_250;
        if ((int)auStack_290._8_4_ < 1) {
          puVar4 = auStack_2c0;
        }
        auVar44 = aesdec(auVar44,auVar23);
        lStack_250 = (long)puVar4 - (long)pauVar20;
        auVar42 = aesdec(auVar42,auVar23);
        auVar32 = pauVar20[1];
        auVar45 = aesdec(auVar45,auVar23);
        auVar23 = param_2[9];
        auVar25 = aesdec(auVar25,auVar22);
        auVar38 = aesdec(auVar38,auVar22);
        auVar41 = aesdec(auVar41,auVar22);
        auVar24 = aesdec(auVar24,auVar22);
        pauVar21 = pauVar14;
        if ((int)auStack_290._12_4_ < 2) {
          pauVar21 = &auStack_2c0;
        }
        auVar36 = aesdec(auVar36,auVar22);
        puVar4 = *pauVar14 + lStack_248;
        if ((int)auStack_290._12_4_ < 1) {
          puVar4 = auStack_2c0;
        }
        auVar39 = aesdec(auVar44,auVar22);
        lStack_248 = (long)puVar4 - (long)pauVar21;
        auVar42 = aesdec(auVar42,auVar22);
        auVar44 = pauVar21[1];
        auVar45 = aesdec(auVar45,auVar22);
        auVar22 = param_2[10];
        if (10 < uVar1) {
          auVar25 = aesdec(auVar25,auVar23);
          auVar38 = aesdec(auVar38,auVar23);
          auVar41 = aesdec(auVar41,auVar23);
          auVar24 = aesdec(auVar24,auVar23);
          auVar36 = aesdec(auVar36,auVar23);
          auVar39 = aesdec(auVar39,auVar23);
          auVar42 = aesdec(auVar42,auVar23);
          auVar45 = aesdec(auVar45,auVar23);
          auVar23 = param_2[0xb];
          auVar25 = aesdec(auVar25,auVar22);
          auVar38 = aesdec(auVar38,auVar22);
          auVar41 = aesdec(auVar41,auVar22);
          auVar24 = aesdec(auVar24,auVar22);
          auVar36 = aesdec(auVar36,auVar22);
          auVar39 = aesdec(auVar39,auVar22);
          auVar42 = aesdec(auVar42,auVar22);
          auVar45 = aesdec(auVar45,auVar22);
          auVar22 = param_2[0xc];
          if (uVar1 != 0xb) {
            auVar25 = aesdec(auVar25,auVar23);
            auVar38 = aesdec(auVar38,auVar23);
            auVar41 = aesdec(auVar41,auVar23);
            auVar24 = aesdec(auVar24,auVar23);
            auVar36 = aesdec(auVar36,auVar23);
            auVar39 = aesdec(auVar39,auVar23);
            auVar42 = aesdec(auVar42,auVar23);
            auVar45 = aesdec(auVar45,auVar23);
            auVar23 = param_2[0xd];
            auVar25 = aesdec(auVar25,auVar22);
            auVar38 = aesdec(auVar38,auVar22);
            auVar41 = aesdec(auVar41,auVar22);
            auVar24 = aesdec(auVar24,auVar22);
            auVar36 = aesdec(auVar36,auVar22);
            auVar39 = aesdec(auVar39,auVar22);
            auVar42 = aesdec(auVar42,auVar22);
            auVar45 = aesdec(auVar45,auVar22);
            auVar22 = param_2[0xe];
          }
        }
        auVar26 = aesdec(auVar25,auVar23);
        auVar38 = aesdec(auVar38,auVar23);
        auVar41 = aesdec(auVar41,auVar23);
        auVar25 = vpcmpgtd_avx(auStack_2a0,(undefined1  [16])0x0);
        auVar35 = aesdec(auVar24,auVar23);
        auVar36 = aesdec(auVar36,auVar23);
        auStack_2a0 = vpaddd_avx(auVar25,auStack_2a0);
        auVar40 = aesdec(auVar39,auVar23);
        auVar42 = aesdec(auVar42,auVar23);
        auVar45 = aesdec(auVar45,auVar23);
        auVar25 = param_2[1];
        auVar39 = aesdeclast(auVar26,auVar22);
        auVar26 = aesdeclast(auVar38,auVar22);
        auVar31 = aesdeclast(auVar41,auVar22);
        auVar24 = pauVar5[1];
        auVar23 = vpcmpgtd_avx(auStack_290,(undefined1  [16])0x0);
        auVar35 = aesdeclast(auVar35,auVar22);
        auVar38 = pauVar5[2];
        auVar37 = aesdeclast(auVar36,auVar22);
        auVar41 = pauVar5[3];
        auStack_290 = vpaddd_avx(auStack_290,auVar23);
        auVar23 = *param_2;
        auVar40 = aesdeclast(auVar40,auVar22);
        auVar36 = pauVar5[4];
        auVar43 = aesdeclast(auVar42,auVar22);
        auVar42 = pauVar5[5];
        auVar46 = aesdeclast(auVar45,auVar22);
        auVar45 = pauVar5[6];
        auVar22 = param_2[2];
        *(undefined1 (*) [16])((long)pauVar8 + lVar3) = auVar39 ^ *pauVar5;
        pauVar7 = pauVar8 + 1;
        auVar39 = pauVar5[7];
        *(undefined1 (*) [16])((long)pauVar10 + lStack_278) = auVar26 ^ auVar24;
        pauVar6 = pauVar10 + 1;
        *pauVar5 = auVar33;
        auVar33 = auVar33 ^ auVar23;
        *(undefined1 (*) [16])((long)pauVar13 + lStack_270) = auVar31 ^ auVar38;
        pauVar12 = pauVar13 + 1;
        pauVar5[1] = auVar29;
        auVar29 = auVar29 ^ auVar23;
        *(undefined1 (*) [16])((long)pauVar15 + lStack_268) = auVar35 ^ auVar41;
        pauVar9 = pauVar15 + 1;
        pauVar5[2] = auVar30;
        auVar30 = auVar30 ^ auVar23;
        *(undefined1 (*) [16])((long)pauVar17 + lStack_260) = auVar37 ^ auVar36;
        pauVar16 = pauVar17 + 1;
        pauVar5[3] = auVar34;
        auVar34 = auVar34 ^ auVar23;
        pauVar5[4] = auVar27;
        auVar27 = auVar23 ^ auVar27;
        *(undefined1 (*) [16])((long)pauVar18 + lStack_258) = auVar40 ^ auVar42;
        pauVar11 = pauVar18 + 1;
        pauVar5[5] = auVar28;
        auVar28 = auVar23 ^ auVar28;
        *(undefined1 (*) [16])((long)pauVar20 + lStack_250) = auVar43 ^ auVar45;
        pauVar19 = pauVar20 + 1;
        pauVar5[6] = auVar32;
        auVar32 = auVar23 ^ auVar32;
        *(undefined1 (*) [16])((long)pauVar21 + lStack_248) = auVar46 ^ auVar39;
        pauVar14 = pauVar21 + 1;
        pauVar5[7] = auVar44;
        auVar23 = auVar23 ^ auVar44;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    return;
  }
  auVar23 = *param_2;
  param_1 = param_1 + 10;
  do {
    local_60 = *(int *)(param_1 + -8);
    pauVar7 = (undefined1 (*) [16])param_1[-9];
    iVar2 = 0;
    if (0 < local_60) {
      iVar2 = local_60;
    }
    in_ZMM6._0_16_ = *(undefined1 (*) [16])(param_1 + -7);
    pauVar6 = (undefined1 (*) [16])param_1[-10];
    if (local_60 < 1) {
      pauVar6 = &auStack_80;
    }
    iStack_5c = *(int *)(param_1 + -3);
    pauVar12 = (undefined1 (*) [16])param_1[-4];
    if (iVar2 < iStack_5c) {
      iVar2 = iStack_5c;
    }
    in_ZMM7._0_16_ = *(undefined1 (*) [16])(param_1 + -2);
    pauVar9 = (undefined1 (*) [16])param_1[-5];
    if (iStack_5c < 1) {
      pauVar9 = &auStack_80;
    }
    iStack_58 = *(int *)(param_1 + 2);
    pauVar16 = (undefined1 (*) [16])param_1[1];
    if (iVar2 < iStack_58) {
      iVar2 = iStack_58;
    }
    in_ZMM8._0_16_ = *(undefined1 (*) [16])(param_1 + 3);
    pauVar11 = (undefined1 (*) [16])*param_1;
    if (iStack_58 < 1) {
      pauVar11 = &auStack_80;
    }
    iStack_54 = *(int *)(param_1 + 7);
    pauVar19 = (undefined1 (*) [16])param_1[6];
    if (iVar2 < iStack_54) {
      iVar2 = iStack_54;
    }
    in_ZMM9._0_16_ = *(undefined1 (*) [16])(param_1 + 8);
    pauVar14 = (undefined1 (*) [16])param_1[5];
    if (iStack_54 < 1) {
      pauVar14 = &auStack_80;
    }
    if (iVar2 == 0) {
      return;
    }
    in_ZMM1._0_16_ = param_2[1];
    in_ZMM0._0_16_ = param_2[2];
    uVar1 = *(uint *)param_2[0xf];
    in_ZMM2._0_16_ = *pauVar6 ^ auVar23;
    in_ZMM3._0_16_ = *pauVar9 ^ auVar23;
    in_ZMM4._0_16_ = *pauVar11 ^ auVar23;
    in_ZMM5._0_16_ = *pauVar14 ^ auVar23;
    lVar3 = 0;
    do {
      pauVar5 = (undefined1 (*) [16])(&stack0xffffffffffffff90 + -(lVar3 + 0x10));
      auVar23 = in_ZMM1._0_16_;
      auVar22 = aesdec(in_ZMM2._0_16_,auVar23);
      auVar27 = aesdec(in_ZMM3._0_16_,auVar23);
      auVar28 = aesdec(in_ZMM4._0_16_,auVar23);
      auVar32 = aesdec(in_ZMM5._0_16_,auVar23);
      auVar23 = param_2[3];
      auVar25 = in_ZMM0._0_16_;
      auVar22 = aesdec(auVar22,auVar25);
      auVar27 = aesdec(auVar27,auVar25);
      auVar28 = aesdec(auVar28,auVar25);
      if (local_60 < 2) {
        pauVar6 = pauVar5;
      }
      if (local_60 < 1) {
        pauVar7 = pauVar5;
      }
      auVar32 = aesdec(auVar32,auVar25);
      auVar25 = param_2[4];
      auVar22 = aesdec(auVar22,auVar23);
      auVar27 = aesdec(auVar27,auVar23);
      auVar28 = aesdec(auVar28,auVar23);
      if (iStack_5c < 2) {
        pauVar9 = pauVar5;
      }
      if (iStack_5c < 1) {
        pauVar12 = pauVar5;
      }
      auVar32 = aesdec(auVar32,auVar23);
      auVar23 = param_2[5];
      auVar22 = aesdec(auVar22,auVar25);
      auVar27 = aesdec(auVar27,auVar25);
      auVar28 = aesdec(auVar28,auVar25);
      if (iStack_58 < 2) {
        pauVar11 = pauVar5;
      }
      if (iStack_58 < 1) {
        pauVar16 = pauVar5;
      }
      auVar32 = aesdec(auVar32,auVar25);
      auVar25 = param_2[6];
      auVar22 = aesdec(auVar22,auVar23);
      auVar27 = aesdec(auVar27,auVar23);
      auVar28 = aesdec(auVar28,auVar23);
      if (iStack_54 < 2) {
        pauVar14 = pauVar5;
      }
      if (iStack_54 < 1) {
        pauVar19 = pauVar5;
      }
      auVar33 = aesdec(auVar32,auVar23);
      auVar32 = param_2[7];
      auVar23 = aesdec(auVar22,auVar25);
      auVar22 = aesdec(auVar27,auVar25);
      auVar29 = aesdec(auVar28,auVar25);
      auVar33 = aesdec(auVar33,auVar25);
      auVar25 = param_2[8];
      auVar27 = aesdec(auVar23,auVar32);
      auVar23 = *param_2;
      auVar28 = aesdec(auVar22,auVar32);
      local_60 = local_60 - (uint)(0 < local_60);
      iStack_5c = iStack_5c - (uint)(0 < iStack_5c);
      iStack_58 = iStack_58 - (uint)(0 < iStack_58);
      iStack_54 = iStack_54 - (uint)(0 < iStack_54);
      auVar29 = aesdec(auVar29,auVar32);
      auVar33 = aesdec(auVar33,auVar32);
      auVar22 = param_2[9];
      auVar27 = aesdec(auVar27,auVar25);
      auVar28 = aesdec(auVar28,auVar25);
      auVar32 = aesdec(auVar29,auVar25);
      auVar29 = aesdec(auVar33,auVar25);
      auVar25 = param_2[10];
      if (10 < uVar1) {
        auVar27 = aesdec(auVar27,auVar22);
        auVar28 = aesdec(auVar28,auVar22);
        auVar32 = aesdec(auVar32,auVar22);
        auVar29 = aesdec(auVar29,auVar22);
        auVar22 = param_2[0xb];
        auVar27 = aesdec(auVar27,auVar25);
        auVar28 = aesdec(auVar28,auVar25);
        auVar32 = aesdec(auVar32,auVar25);
        auVar29 = aesdec(auVar29,auVar25);
        auVar25 = param_2[0xc];
        if (uVar1 != 0xb) {
          auVar27 = aesdec(auVar27,auVar22);
          auVar28 = aesdec(auVar28,auVar22);
          auVar32 = aesdec(auVar32,auVar22);
          auVar29 = aesdec(auVar29,auVar22);
          auVar22 = param_2[0xd];
          auVar27 = aesdec(auVar27,auVar25);
          auVar28 = aesdec(auVar28,auVar25);
          auVar32 = aesdec(auVar32,auVar25);
          auVar29 = aesdec(auVar29,auVar25);
          auVar25 = param_2[0xe];
        }
      }
      auVar27 = aesdec(auVar27,auVar22);
      auVar28 = aesdec(auVar28,auVar22);
      auVar32 = aesdec(auVar32,auVar22);
      auVar29 = aesdec(auVar29,auVar22);
      in_ZMM1._0_16_ = param_2[1];
      in_ZMM0._0_16_ = param_2[2];
      auVar22 = aesdeclast(auVar27,in_ZMM6._0_16_ ^ auVar25);
      auVar27 = aesdeclast(auVar28,in_ZMM7._0_16_ ^ auVar25);
      in_ZMM6._0_16_ = *(undefined1 (*) [16])(*pauVar6 + lVar3);
      in_ZMM7._0_16_ = *(undefined1 (*) [16])(*pauVar9 + lVar3);
      auVar28 = aesdeclast(auVar32,in_ZMM8._0_16_ ^ auVar25);
      auVar32 = aesdeclast(auVar29,in_ZMM9._0_16_ ^ auVar25);
      in_ZMM8._0_16_ = *(undefined1 (*) [16])(*pauVar11 + lVar3);
      in_ZMM9._0_16_ = *(undefined1 (*) [16])(*pauVar14 + lVar3);
      *(undefined1 (*) [16])(*pauVar7 + lVar3) = auVar22;
      auVar25 = *(undefined1 (*) [16])(pauVar6[1] + lVar3);
      *(undefined1 (*) [16])(*pauVar12 + lVar3) = auVar27;
      auVar22 = *(undefined1 (*) [16])(pauVar9[1] + lVar3);
      in_ZMM2._0_16_ = auVar25 ^ auVar23;
      *(undefined1 (*) [16])(*pauVar16 + lVar3) = auVar28;
      auVar25 = *(undefined1 (*) [16])(pauVar11[1] + lVar3);
      in_ZMM3._0_16_ = auVar22 ^ auVar23;
      *(undefined1 (*) [16])(*pauVar19 + lVar3) = auVar32;
      in_ZMM4._0_16_ = auVar25 ^ auVar23;
      in_ZMM5._0_16_ = *(undefined1 (*) [16])(pauVar14[1] + lVar3) ^ auVar23;
      iVar2 = iVar2 + -1;
      lVar3 = lVar3 + 0x10;
    } while (iVar2 != 0);
    param_1 = param_1 + 0x14;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  return;
}



void aesni_multi_cbc_encrypt_avx(undefined8 *param_1,undefined1 (*param_2) [16])

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
  int iVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  undefined1 (*pauVar26) [16];
  undefined1 (*pauVar27) [16];
  undefined1 (*pauVar28) [16];
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
  undefined1 auStack_100 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  
  auVar39 = *param_2;
  local_e0._0_4_ = *(undefined4 *)(param_1 + 2);
  iVar10 = 0;
  if (0 < (int)local_e0._0_4_) {
    iVar10 = local_e0._0_4_;
  }
  pauVar13 = (undefined1 (*) [16])*param_1;
  if ((int)local_e0._0_4_ < 1) {
    pauVar13 = &auStack_100;
  }
  lVar11 = param_1[1] - (long)pauVar13;
  local_e0._4_4_ = *(undefined4 *)(param_1 + 7);
  if (iVar10 < (int)local_e0._4_4_) {
    iVar10 = local_e0._4_4_;
  }
  pauVar15 = (undefined1 (*) [16])param_1[5];
  if ((int)local_e0._4_4_ < 1) {
    pauVar15 = &auStack_100;
  }
  local_b8 = param_1[6] - (long)pauVar15;
  local_e0._8_4_ = *(undefined4 *)(param_1 + 0xc);
  if (iVar10 < (int)local_e0._8_4_) {
    iVar10 = local_e0._8_4_;
  }
  pauVar17 = (undefined1 (*) [16])param_1[10];
  if ((int)local_e0._8_4_ < 1) {
    pauVar17 = &auStack_100;
  }
  local_b0 = param_1[0xb] - (long)pauVar17;
  local_e0._12_4_ = *(undefined4 *)(param_1 + 0x11);
  if (iVar10 < (int)local_e0._12_4_) {
    iVar10 = local_e0._12_4_;
  }
  pauVar19 = (undefined1 (*) [16])param_1[0xf];
  if ((int)local_e0._12_4_ < 1) {
    pauVar19 = &auStack_100;
  }
  local_a8 = param_1[0x10] - (long)pauVar19;
  local_d0._0_4_ = *(undefined4 *)(param_1 + 0x16);
  if (iVar10 < (int)local_d0._0_4_) {
    iVar10 = local_d0._0_4_;
  }
  pauVar21 = (undefined1 (*) [16])param_1[0x14];
  if ((int)local_d0._0_4_ < 1) {
    pauVar21 = &auStack_100;
  }
  local_a0 = param_1[0x15] - (long)pauVar21;
  local_d0._4_4_ = *(undefined4 *)(param_1 + 0x1b);
  if (iVar10 < (int)local_d0._4_4_) {
    iVar10 = local_d0._4_4_;
  }
  pauVar23 = (undefined1 (*) [16])param_1[0x19];
  if ((int)local_d0._4_4_ < 1) {
    pauVar23 = &auStack_100;
  }
  local_98 = param_1[0x1a] - (long)pauVar23;
  local_d0._8_4_ = *(undefined4 *)(param_1 + 0x20);
  if (iVar10 < (int)local_d0._8_4_) {
    iVar10 = local_d0._8_4_;
  }
  pauVar25 = (undefined1 (*) [16])param_1[0x1e];
  if ((int)local_d0._8_4_ < 1) {
    pauVar25 = &auStack_100;
  }
  local_90 = param_1[0x1f] - (long)pauVar25;
  local_d0._12_4_ = *(undefined4 *)(param_1 + 0x25);
  if (iVar10 < (int)local_d0._12_4_) {
    iVar10 = local_d0._12_4_;
  }
  pauVar27 = (undefined1 (*) [16])param_1[0x23];
  if ((int)local_d0._12_4_ < 1) {
    pauVar27 = &auStack_100;
  }
  local_88 = param_1[0x24] - (long)pauVar27;
  if (iVar10 != 0) {
    auVar30 = param_2[1];
    auVar29 = param_2[2];
    uVar1 = *(uint *)param_2[0xf];
    auVar31 = *(undefined1 (*) [16])(param_1 + 3) ^ auVar39 ^ *pauVar13;
    auVar32 = *(undefined1 (*) [16])(param_1 + 8) ^ auVar39 ^ *pauVar15;
    auVar33 = *(undefined1 (*) [16])(param_1 + 0xd) ^ auVar39 ^ *pauVar17;
    auVar34 = *(undefined1 (*) [16])(param_1 + 0x12) ^ auVar39 ^ *pauVar19;
    auVar35 = *(undefined1 (*) [16])(param_1 + 0x17) ^ auVar39 ^ *pauVar21;
    auVar36 = *(undefined1 (*) [16])(param_1 + 0x1c) ^ auVar39 ^ *pauVar23;
    auVar37 = *(undefined1 (*) [16])(param_1 + 0x21) ^ auVar39 ^ *pauVar25;
    auVar38 = *(undefined1 (*) [16])(param_1 + 0x26) ^ auVar39 ^ *pauVar27;
    do {
      auVar31 = aesenc(auVar31,auVar30);
      auVar32 = aesenc(auVar32,auVar30);
      auVar33 = aesenc(auVar33,auVar30);
      auVar34 = aesenc(auVar34,auVar30);
      pauVar14 = pauVar13;
      if ((int)local_e0._0_4_ < 2) {
        pauVar14 = &auStack_100;
      }
      auVar35 = aesenc(auVar35,auVar30);
      puVar12 = *pauVar13 + lVar11;
      if ((int)local_e0._0_4_ < 1) {
        puVar12 = auStack_100;
      }
      auVar36 = aesenc(auVar36,auVar30);
      lVar11 = (long)puVar12 - (long)pauVar14;
      auVar37 = aesenc(auVar37,auVar30);
      auVar2 = auVar39 ^ pauVar14[1];
      auVar38 = aesenc(auVar38,auVar30);
      auVar30 = param_2[3];
      auVar31 = aesenc(auVar31,auVar29);
      auVar32 = aesenc(auVar32,auVar29);
      auVar33 = aesenc(auVar33,auVar29);
      auVar34 = aesenc(auVar34,auVar29);
      pauVar16 = pauVar15;
      if ((int)local_e0._4_4_ < 2) {
        pauVar16 = &auStack_100;
      }
      auVar35 = aesenc(auVar35,auVar29);
      puVar12 = *pauVar15 + local_b8;
      if ((int)local_e0._4_4_ < 1) {
        puVar12 = auStack_100;
      }
      auVar36 = aesenc(auVar36,auVar29);
      local_b8 = (long)puVar12 - (long)pauVar16;
      auVar37 = aesenc(auVar37,auVar29);
      auVar3 = auVar39 ^ pauVar16[1];
      auVar38 = aesenc(auVar38,auVar29);
      auVar29 = param_2[4];
      auVar31 = aesenc(auVar31,auVar30);
      auVar32 = aesenc(auVar32,auVar30);
      auVar33 = aesenc(auVar33,auVar30);
      auVar34 = aesenc(auVar34,auVar30);
      pauVar18 = pauVar17;
      if ((int)local_e0._8_4_ < 2) {
        pauVar18 = &auStack_100;
      }
      auVar35 = aesenc(auVar35,auVar30);
      puVar12 = *pauVar17 + local_b0;
      if ((int)local_e0._8_4_ < 1) {
        puVar12 = auStack_100;
      }
      auVar36 = aesenc(auVar36,auVar30);
      local_b0 = (long)puVar12 - (long)pauVar18;
      auVar37 = aesenc(auVar37,auVar30);
      auVar4 = auVar39 ^ pauVar18[1];
      auVar38 = aesenc(auVar38,auVar30);
      auVar30 = param_2[5];
      auVar31 = aesenc(auVar31,auVar29);
      auVar32 = aesenc(auVar32,auVar29);
      auVar33 = aesenc(auVar33,auVar29);
      auVar34 = aesenc(auVar34,auVar29);
      pauVar20 = pauVar19;
      if ((int)local_e0._12_4_ < 2) {
        pauVar20 = &auStack_100;
      }
      auVar35 = aesenc(auVar35,auVar29);
      puVar12 = *pauVar19 + local_a8;
      if ((int)local_e0._12_4_ < 1) {
        puVar12 = auStack_100;
      }
      auVar36 = aesenc(auVar36,auVar29);
      local_a8 = (long)puVar12 - (long)pauVar20;
      auVar37 = aesenc(auVar37,auVar29);
      auVar5 = auVar39 ^ pauVar20[1];
      auVar38 = aesenc(auVar38,auVar29);
      auVar29 = param_2[6];
      auVar31 = aesenc(auVar31,auVar30);
      auVar32 = aesenc(auVar32,auVar30);
      auVar33 = aesenc(auVar33,auVar30);
      auVar34 = aesenc(auVar34,auVar30);
      pauVar22 = pauVar21;
      if ((int)local_d0._0_4_ < 2) {
        pauVar22 = &auStack_100;
      }
      auVar35 = aesenc(auVar35,auVar30);
      puVar12 = *pauVar21 + local_a0;
      if ((int)local_d0._0_4_ < 1) {
        puVar12 = auStack_100;
      }
      auVar36 = aesenc(auVar36,auVar30);
      local_a0 = (long)puVar12 - (long)pauVar22;
      auVar37 = aesenc(auVar37,auVar30);
      auVar6 = auVar39 ^ pauVar22[1];
      auVar38 = aesenc(auVar38,auVar30);
      auVar30 = param_2[7];
      auVar31 = aesenc(auVar31,auVar29);
      auVar32 = aesenc(auVar32,auVar29);
      auVar33 = aesenc(auVar33,auVar29);
      auVar34 = aesenc(auVar34,auVar29);
      pauVar24 = pauVar23;
      if ((int)local_d0._4_4_ < 2) {
        pauVar24 = &auStack_100;
      }
      auVar35 = aesenc(auVar35,auVar29);
      puVar12 = *pauVar23 + local_98;
      if ((int)local_d0._4_4_ < 1) {
        puVar12 = auStack_100;
      }
      auVar36 = aesenc(auVar36,auVar29);
      local_98 = (long)puVar12 - (long)pauVar24;
      auVar37 = aesenc(auVar37,auVar29);
      auVar7 = auVar39 ^ pauVar24[1];
      auVar38 = aesenc(auVar38,auVar29);
      auVar29 = param_2[8];
      auVar31 = aesenc(auVar31,auVar30);
      auVar32 = aesenc(auVar32,auVar30);
      auVar33 = aesenc(auVar33,auVar30);
      auVar34 = aesenc(auVar34,auVar30);
      pauVar26 = pauVar25;
      if ((int)local_d0._8_4_ < 2) {
        pauVar26 = &auStack_100;
      }
      auVar35 = aesenc(auVar35,auVar30);
      puVar12 = *pauVar25 + local_90;
      if ((int)local_d0._8_4_ < 1) {
        puVar12 = auStack_100;
      }
      auVar36 = aesenc(auVar36,auVar30);
      local_90 = (long)puVar12 - (long)pauVar26;
      auVar37 = aesenc(auVar37,auVar30);
      auVar8 = auVar39 ^ pauVar26[1];
      auVar38 = aesenc(auVar38,auVar30);
      auVar30 = param_2[9];
      auVar31 = aesenc(auVar31,auVar29);
      auVar32 = aesenc(auVar32,auVar29);
      auVar33 = aesenc(auVar33,auVar29);
      auVar34 = aesenc(auVar34,auVar29);
      pauVar28 = pauVar27;
      if ((int)local_d0._12_4_ < 2) {
        pauVar28 = &auStack_100;
      }
      auVar35 = aesenc(auVar35,auVar29);
      puVar12 = *pauVar27 + local_88;
      if ((int)local_d0._12_4_ < 1) {
        puVar12 = auStack_100;
      }
      auVar36 = aesenc(auVar36,auVar29);
      local_88 = (long)puVar12 - (long)pauVar28;
      auVar37 = aesenc(auVar37,auVar29);
      auVar9 = auVar39 ^ pauVar28[1];
      auVar39 = aesenc(auVar38,auVar29);
      auVar29 = param_2[10];
      if (10 < uVar1) {
        auVar31 = aesenc(auVar31,auVar30);
        auVar32 = aesenc(auVar32,auVar30);
        auVar33 = aesenc(auVar33,auVar30);
        auVar34 = aesenc(auVar34,auVar30);
        auVar35 = aesenc(auVar35,auVar30);
        auVar36 = aesenc(auVar36,auVar30);
        auVar37 = aesenc(auVar37,auVar30);
        auVar39 = aesenc(auVar39,auVar30);
        auVar30 = param_2[0xb];
        auVar31 = aesenc(auVar31,auVar29);
        auVar32 = aesenc(auVar32,auVar29);
        auVar33 = aesenc(auVar33,auVar29);
        auVar34 = aesenc(auVar34,auVar29);
        auVar35 = aesenc(auVar35,auVar29);
        auVar36 = aesenc(auVar36,auVar29);
        auVar37 = aesenc(auVar37,auVar29);
        auVar39 = aesenc(auVar39,auVar29);
        auVar29 = param_2[0xc];
        if (uVar1 != 0xb) {
          auVar31 = aesenc(auVar31,auVar30);
          auVar32 = aesenc(auVar32,auVar30);
          auVar33 = aesenc(auVar33,auVar30);
          auVar34 = aesenc(auVar34,auVar30);
          auVar35 = aesenc(auVar35,auVar30);
          auVar36 = aesenc(auVar36,auVar30);
          auVar37 = aesenc(auVar37,auVar30);
          auVar39 = aesenc(auVar39,auVar30);
          auVar30 = param_2[0xd];
          auVar31 = aesenc(auVar31,auVar29);
          auVar32 = aesenc(auVar32,auVar29);
          auVar33 = aesenc(auVar33,auVar29);
          auVar34 = aesenc(auVar34,auVar29);
          auVar35 = aesenc(auVar35,auVar29);
          auVar36 = aesenc(auVar36,auVar29);
          auVar37 = aesenc(auVar37,auVar29);
          auVar39 = aesenc(auVar39,auVar29);
          auVar29 = param_2[0xe];
        }
      }
      auVar31 = aesenc(auVar31,auVar30);
      auVar32 = aesenc(auVar32,auVar30);
      auVar38 = aesenc(auVar33,auVar30);
      auVar33 = vpcmpgtd_avx(local_e0,(undefined1  [16])0x0);
      auVar34 = aesenc(auVar34,auVar30);
      auVar35 = aesenc(auVar35,auVar30);
      local_e0 = vpaddd_avx(auVar33,local_e0);
      auVar36 = aesenc(auVar36,auVar30);
      auVar37 = aesenc(auVar37,auVar30);
      auVar40 = aesenc(auVar39,auVar30);
      auVar30 = param_2[1];
      auVar31 = aesenclast(auVar31,auVar29);
      auVar32 = aesenclast(auVar32,auVar29);
      auVar33 = aesenclast(auVar38,auVar29);
      auVar39 = vpcmpgtd_avx(local_d0,(undefined1  [16])0x0);
      auVar34 = aesenclast(auVar34,auVar29);
      auVar35 = aesenclast(auVar35,auVar29);
      local_d0 = vpaddd_avx(local_d0,auVar39);
      auVar39 = *param_2;
      auVar36 = aesenclast(auVar36,auVar29);
      auVar37 = aesenclast(auVar37,auVar29);
      auVar38 = aesenclast(auVar40,auVar29);
      auVar29 = param_2[2];
      *(undefined1 (*) [16])((long)pauVar14 + lVar11) = auVar31;
      pauVar13 = pauVar14 + 1;
      auVar31 = auVar31 ^ auVar2;
      *(undefined1 (*) [16])((long)pauVar16 + local_b8) = auVar32;
      pauVar15 = pauVar16 + 1;
      auVar32 = auVar32 ^ auVar3;
      *(undefined1 (*) [16])((long)pauVar18 + local_b0) = auVar33;
      pauVar17 = pauVar18 + 1;
      auVar33 = auVar33 ^ auVar4;
      *(undefined1 (*) [16])((long)pauVar20 + local_a8) = auVar34;
      pauVar19 = pauVar20 + 1;
      auVar34 = auVar34 ^ auVar5;
      *(undefined1 (*) [16])((long)pauVar22 + local_a0) = auVar35;
      pauVar21 = pauVar22 + 1;
      auVar35 = auVar35 ^ auVar6;
      *(undefined1 (*) [16])((long)pauVar24 + local_98) = auVar36;
      pauVar23 = pauVar24 + 1;
      auVar36 = auVar36 ^ auVar7;
      *(undefined1 (*) [16])((long)pauVar26 + local_90) = auVar37;
      pauVar25 = pauVar26 + 1;
      auVar37 = auVar37 ^ auVar8;
      *(undefined1 (*) [16])((long)pauVar28 + local_88) = auVar38;
      pauVar27 = pauVar28 + 1;
      auVar38 = auVar38 ^ auVar9;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



void aesni_multi_cbc_decrypt_avx(undefined8 *param_1,undefined1 (*param_2) [16])

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
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
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auStack_2c0 [16];
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  long local_278;
  long local_270;
  long local_268;
  long local_260;
  long local_258;
  long local_250;
  long local_248;
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  
  auVar24 = *param_2;
  local_2a0._0_4_ = *(undefined4 *)(param_1 + 2);
  pauVar7 = (undefined1 (*) [16])*param_1;
  iVar3 = local_2a0._0_4_;
  if ((int)local_2a0._0_4_ < 1) {
    pauVar7 = &auStack_2c0;
    iVar3 = 0;
  }
  lVar4 = param_1[1] - (long)pauVar7;
  local_2a0._4_4_ = *(undefined4 *)(param_1 + 7);
  if (iVar3 < (int)local_2a0._4_4_) {
    iVar3 = local_2a0._4_4_;
  }
  pauVar9 = (undefined1 (*) [16])param_1[5];
  if ((int)local_2a0._4_4_ < 1) {
    pauVar9 = &auStack_2c0;
  }
  local_278 = param_1[6] - (long)pauVar9;
  local_2a0._8_4_ = *(undefined4 *)(param_1 + 0xc);
  if (iVar3 < (int)local_2a0._8_4_) {
    iVar3 = local_2a0._8_4_;
  }
  pauVar11 = (undefined1 (*) [16])param_1[10];
  if ((int)local_2a0._8_4_ < 1) {
    pauVar11 = &auStack_2c0;
  }
  local_270 = param_1[0xb] - (long)pauVar11;
  local_2a0._12_4_ = *(undefined4 *)(param_1 + 0x11);
  if (iVar3 < (int)local_2a0._12_4_) {
    iVar3 = local_2a0._12_4_;
  }
  pauVar13 = (undefined1 (*) [16])param_1[0xf];
  if ((int)local_2a0._12_4_ < 1) {
    pauVar13 = &auStack_2c0;
  }
  local_268 = param_1[0x10] - (long)pauVar13;
  local_290._0_4_ = *(undefined4 *)(param_1 + 0x16);
  if (iVar3 < (int)local_290._0_4_) {
    iVar3 = local_290._0_4_;
  }
  pauVar15 = (undefined1 (*) [16])param_1[0x14];
  if ((int)local_290._0_4_ < 1) {
    pauVar15 = &auStack_2c0;
  }
  local_260 = param_1[0x15] - (long)pauVar15;
  local_290._4_4_ = *(undefined4 *)(param_1 + 0x1b);
  if (iVar3 < (int)local_290._4_4_) {
    iVar3 = local_290._4_4_;
  }
  pauVar17 = (undefined1 (*) [16])param_1[0x19];
  if ((int)local_290._4_4_ < 1) {
    pauVar17 = &auStack_2c0;
  }
  local_258 = param_1[0x1a] - (long)pauVar17;
  local_290._8_4_ = *(undefined4 *)(param_1 + 0x20);
  if (iVar3 < (int)local_290._8_4_) {
    iVar3 = local_290._8_4_;
  }
  pauVar19 = (undefined1 (*) [16])param_1[0x1e];
  if ((int)local_290._8_4_ < 1) {
    pauVar19 = &auStack_2c0;
  }
  local_250 = param_1[0x1f] - (long)pauVar19;
  local_290._12_4_ = *(undefined4 *)(param_1 + 0x25);
  if (iVar3 < (int)local_290._12_4_) {
    iVar3 = local_290._12_4_;
  }
  pauVar21 = (undefined1 (*) [16])param_1[0x23];
  if ((int)local_290._12_4_ < 1) {
    pauVar21 = &auStack_2c0;
  }
  local_248 = param_1[0x24] - (long)pauVar21;
  if (iVar3 != 0) {
    auVar26 = param_2[1];
    auVar23 = param_2[2];
    uVar1 = *(uint *)param_2[0xf];
    pauVar6 = &local_180;
    local_180 = *pauVar7;
    auVar2 = *pauVar7 ^ auVar24;
    local_170 = *pauVar9;
    auVar28 = *pauVar9 ^ auVar24;
    local_160 = *pauVar11;
    auVar30 = *pauVar11 ^ auVar24;
    local_150 = *pauVar13;
    auVar33 = *pauVar13 ^ auVar24;
    local_140 = *pauVar15;
    auVar35 = *pauVar15 ^ auVar24;
    local_130 = *pauVar17;
    auVar29 = *pauVar17 ^ auVar24;
    local_120 = *pauVar19;
    auVar31 = *pauVar19 ^ auVar24;
    local_110 = *pauVar21;
    auVar24 = *pauVar21 ^ auVar24;
    do {
      pauVar6 = (undefined1 (*) [16])((ulong)pauVar6 ^ 0x80);
      auVar25 = aesdec(auVar2,auVar26);
      auVar28 = aesdec(auVar28,auVar26);
      auVar30 = aesdec(auVar30,auVar26);
      auVar33 = aesdec(auVar33,auVar26);
      pauVar8 = pauVar7;
      if ((int)local_2a0._0_4_ < 2) {
        pauVar8 = &auStack_2c0;
      }
      auVar35 = aesdec(auVar35,auVar26);
      puVar5 = *pauVar7 + lVar4;
      if ((int)local_2a0._0_4_ < 1) {
        puVar5 = auStack_2c0;
      }
      auVar38 = aesdec(auVar29,auVar26);
      lVar4 = (long)puVar5 - (long)pauVar8;
      auVar41 = aesdec(auVar31,auVar26);
      auVar2 = pauVar8[1];
      auVar44 = aesdec(auVar24,auVar26);
      auVar24 = param_2[3];
      auVar26 = aesdec(auVar25,auVar23);
      auVar29 = aesdec(auVar28,auVar23);
      auVar31 = aesdec(auVar30,auVar23);
      auVar33 = aesdec(auVar33,auVar23);
      pauVar10 = pauVar9;
      if ((int)local_2a0._4_4_ < 2) {
        pauVar10 = &auStack_2c0;
      }
      auVar35 = aesdec(auVar35,auVar23);
      puVar5 = *pauVar9 + local_278;
      if ((int)local_2a0._4_4_ < 1) {
        puVar5 = auStack_2c0;
      }
      auVar30 = aesdec(auVar38,auVar23);
      local_278 = (long)puVar5 - (long)pauVar10;
      auVar25 = aesdec(auVar41,auVar23);
      auVar28 = pauVar10[1];
      auVar38 = aesdec(auVar44,auVar23);
      auVar23 = param_2[4];
      auVar26 = aesdec(auVar26,auVar24);
      auVar29 = aesdec(auVar29,auVar24);
      auVar31 = aesdec(auVar31,auVar24);
      auVar33 = aesdec(auVar33,auVar24);
      pauVar12 = pauVar11;
      if ((int)local_2a0._8_4_ < 2) {
        pauVar12 = &auStack_2c0;
      }
      auVar35 = aesdec(auVar35,auVar24);
      puVar5 = *pauVar11 + local_270;
      if ((int)local_2a0._8_4_ < 1) {
        puVar5 = auStack_2c0;
      }
      auVar41 = aesdec(auVar30,auVar24);
      local_270 = (long)puVar5 - (long)pauVar12;
      auVar44 = aesdec(auVar25,auVar24);
      auVar30 = pauVar12[1];
      auVar38 = aesdec(auVar38,auVar24);
      auVar24 = param_2[5];
      auVar26 = aesdec(auVar26,auVar23);
      auVar29 = aesdec(auVar29,auVar23);
      auVar31 = aesdec(auVar31,auVar23);
      auVar25 = aesdec(auVar33,auVar23);
      pauVar14 = pauVar13;
      if ((int)local_2a0._12_4_ < 2) {
        pauVar14 = &auStack_2c0;
      }
      auVar35 = aesdec(auVar35,auVar23);
      puVar5 = *pauVar13 + local_268;
      if ((int)local_2a0._12_4_ < 1) {
        puVar5 = auStack_2c0;
      }
      auVar41 = aesdec(auVar41,auVar23);
      local_268 = (long)puVar5 - (long)pauVar14;
      auVar44 = aesdec(auVar44,auVar23);
      auVar33 = pauVar14[1];
      auVar38 = aesdec(auVar38,auVar23);
      auVar23 = param_2[6];
      auVar26 = aesdec(auVar26,auVar24);
      auVar29 = aesdec(auVar29,auVar24);
      auVar31 = aesdec(auVar31,auVar24);
      auVar25 = aesdec(auVar25,auVar24);
      pauVar16 = pauVar15;
      if ((int)local_290._0_4_ < 2) {
        pauVar16 = &auStack_2c0;
      }
      auVar36 = aesdec(auVar35,auVar24);
      puVar5 = *pauVar15 + local_260;
      if ((int)local_290._0_4_ < 1) {
        puVar5 = auStack_2c0;
      }
      auVar41 = aesdec(auVar41,auVar24);
      local_260 = (long)puVar5 - (long)pauVar16;
      auVar44 = aesdec(auVar44,auVar24);
      auVar35 = pauVar16[1];
      auVar45 = aesdec(auVar38,auVar24);
      auVar24 = param_2[7];
      auVar26 = aesdec(auVar26,auVar23);
      auVar38 = aesdec(auVar29,auVar23);
      auVar31 = aesdec(auVar31,auVar23);
      auVar25 = aesdec(auVar25,auVar23);
      pauVar18 = pauVar17;
      if ((int)local_290._4_4_ < 2) {
        pauVar18 = &auStack_2c0;
      }
      auVar36 = aesdec(auVar36,auVar23);
      puVar5 = *pauVar17 + local_258;
      if ((int)local_290._4_4_ < 1) {
        puVar5 = auStack_2c0;
      }
      auVar39 = aesdec(auVar41,auVar23);
      local_258 = (long)puVar5 - (long)pauVar18;
      auVar44 = aesdec(auVar44,auVar23);
      auVar29 = pauVar18[1];
      auVar45 = aesdec(auVar45,auVar23);
      auVar23 = param_2[8];
      auVar26 = aesdec(auVar26,auVar24);
      auVar38 = aesdec(auVar38,auVar24);
      auVar41 = aesdec(auVar31,auVar24);
      auVar25 = aesdec(auVar25,auVar24);
      pauVar20 = pauVar19;
      if ((int)local_290._8_4_ < 2) {
        pauVar20 = &auStack_2c0;
      }
      auVar36 = aesdec(auVar36,auVar24);
      puVar5 = *pauVar19 + local_250;
      if ((int)local_290._8_4_ < 1) {
        puVar5 = auStack_2c0;
      }
      auVar39 = aesdec(auVar39,auVar24);
      local_250 = (long)puVar5 - (long)pauVar20;
      auVar44 = aesdec(auVar44,auVar24);
      auVar31 = pauVar20[1];
      auVar45 = aesdec(auVar45,auVar24);
      auVar24 = param_2[9];
      auVar26 = aesdec(auVar26,auVar23);
      auVar38 = aesdec(auVar38,auVar23);
      auVar41 = aesdec(auVar41,auVar23);
      auVar25 = aesdec(auVar25,auVar23);
      pauVar22 = pauVar21;
      if ((int)local_290._12_4_ < 2) {
        pauVar22 = &auStack_2c0;
      }
      auVar36 = aesdec(auVar36,auVar23);
      puVar5 = *pauVar21 + local_248;
      if ((int)local_290._12_4_ < 1) {
        puVar5 = auStack_2c0;
      }
      auVar39 = aesdec(auVar39,auVar23);
      local_248 = (long)puVar5 - (long)pauVar22;
      auVar42 = aesdec(auVar44,auVar23);
      auVar44 = pauVar22[1];
      auVar45 = aesdec(auVar45,auVar23);
      auVar23 = param_2[10];
      if (10 < uVar1) {
        auVar26 = aesdec(auVar26,auVar24);
        auVar38 = aesdec(auVar38,auVar24);
        auVar41 = aesdec(auVar41,auVar24);
        auVar25 = aesdec(auVar25,auVar24);
        auVar36 = aesdec(auVar36,auVar24);
        auVar39 = aesdec(auVar39,auVar24);
        auVar42 = aesdec(auVar42,auVar24);
        auVar45 = aesdec(auVar45,auVar24);
        auVar24 = param_2[0xb];
        auVar26 = aesdec(auVar26,auVar23);
        auVar38 = aesdec(auVar38,auVar23);
        auVar41 = aesdec(auVar41,auVar23);
        auVar25 = aesdec(auVar25,auVar23);
        auVar36 = aesdec(auVar36,auVar23);
        auVar39 = aesdec(auVar39,auVar23);
        auVar42 = aesdec(auVar42,auVar23);
        auVar45 = aesdec(auVar45,auVar23);
        auVar23 = param_2[0xc];
        if (uVar1 != 0xb) {
          auVar26 = aesdec(auVar26,auVar24);
          auVar38 = aesdec(auVar38,auVar24);
          auVar41 = aesdec(auVar41,auVar24);
          auVar25 = aesdec(auVar25,auVar24);
          auVar36 = aesdec(auVar36,auVar24);
          auVar39 = aesdec(auVar39,auVar24);
          auVar42 = aesdec(auVar42,auVar24);
          auVar45 = aesdec(auVar45,auVar24);
          auVar24 = param_2[0xd];
          auVar26 = aesdec(auVar26,auVar23);
          auVar38 = aesdec(auVar38,auVar23);
          auVar41 = aesdec(auVar41,auVar23);
          auVar25 = aesdec(auVar25,auVar23);
          auVar36 = aesdec(auVar36,auVar23);
          auVar39 = aesdec(auVar39,auVar23);
          auVar42 = aesdec(auVar42,auVar23);
          auVar45 = aesdec(auVar45,auVar23);
          auVar23 = param_2[0xe];
        }
      }
      auVar27 = aesdec(auVar26,auVar24);
      auVar38 = aesdec(auVar38,auVar24);
      auVar41 = aesdec(auVar41,auVar24);
      auVar26 = vpcmpgtd_avx(local_2a0,(undefined1  [16])0x0);
      auVar34 = aesdec(auVar25,auVar24);
      auVar36 = aesdec(auVar36,auVar24);
      local_2a0 = vpaddd_avx(auVar26,local_2a0);
      auVar39 = aesdec(auVar39,auVar24);
      auVar43 = aesdec(auVar42,auVar24);
      auVar46 = aesdec(auVar45,auVar24);
      auVar26 = param_2[1];
      auVar42 = aesdeclast(auVar27,auVar23);
      auVar27 = aesdeclast(auVar38,auVar23);
      auVar32 = aesdeclast(auVar41,auVar23);
      auVar25 = pauVar6[1];
      auVar24 = vpcmpgtd_avx(local_290,(undefined1  [16])0x0);
      auVar34 = aesdeclast(auVar34,auVar23);
      auVar38 = pauVar6[2];
      auVar37 = aesdeclast(auVar36,auVar23);
      auVar41 = pauVar6[3];
      local_290 = vpaddd_avx(local_290,auVar24);
      auVar24 = *param_2;
      auVar40 = aesdeclast(auVar39,auVar23);
      auVar36 = pauVar6[4];
      auVar43 = aesdeclast(auVar43,auVar23);
      auVar45 = pauVar6[5];
      auVar46 = aesdeclast(auVar46,auVar23);
      auVar39 = pauVar6[6];
      auVar23 = param_2[2];
      *(undefined1 (*) [16])((long)pauVar8 + lVar4) = auVar42 ^ *pauVar6;
      pauVar7 = pauVar8 + 1;
      auVar42 = pauVar6[7];
      *(undefined1 (*) [16])((long)pauVar10 + local_278) = auVar27 ^ auVar25;
      pauVar9 = pauVar10 + 1;
      *pauVar6 = auVar2;
      auVar2 = auVar2 ^ auVar24;
      *(undefined1 (*) [16])((long)pauVar12 + local_270) = auVar32 ^ auVar38;
      pauVar11 = pauVar12 + 1;
      pauVar6[1] = auVar28;
      auVar28 = auVar28 ^ auVar24;
      *(undefined1 (*) [16])((long)pauVar14 + local_268) = auVar34 ^ auVar41;
      pauVar13 = pauVar14 + 1;
      pauVar6[2] = auVar30;
      auVar30 = auVar30 ^ auVar24;
      *(undefined1 (*) [16])((long)pauVar16 + local_260) = auVar37 ^ auVar36;
      pauVar15 = pauVar16 + 1;
      pauVar6[3] = auVar33;
      auVar33 = auVar33 ^ auVar24;
      pauVar6[4] = auVar35;
      auVar35 = auVar24 ^ auVar35;
      *(undefined1 (*) [16])((long)pauVar18 + local_258) = auVar40 ^ auVar45;
      pauVar17 = pauVar18 + 1;
      pauVar6[5] = auVar29;
      auVar29 = auVar24 ^ auVar29;
      *(undefined1 (*) [16])((long)pauVar20 + local_250) = auVar43 ^ auVar39;
      pauVar19 = pauVar20 + 1;
      pauVar6[6] = auVar31;
      auVar31 = auVar24 ^ auVar31;
      *(undefined1 (*) [16])((long)pauVar22 + local_248) = auVar46 ^ auVar42;
      pauVar21 = pauVar22 + 1;
      pauVar6[7] = auVar44;
      auVar24 = auVar24 ^ auVar44;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



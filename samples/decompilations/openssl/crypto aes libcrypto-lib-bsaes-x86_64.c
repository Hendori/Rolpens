
void ossl_bsaes_cbc_encrypt
               (ulong *param_1,ulong *param_2,ulong param_3,long param_4,ulong *param_5,int param_6)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined1 (*pauVar10) [16];
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong extraout_XMM0_Qb;
  ulong extraout_XMM0_Qb_00;
  ulong extraout_XMM0_Qb_01;
  ulong extraout_XMM0_Qb_02;
  ulong extraout_XMM0_Qb_03;
  ulong extraout_XMM0_Qb_04;
  ulong extraout_XMM0_Qb_05;
  ulong extraout_XMM1_Qb;
  ulong extraout_XMM1_Qb_00;
  ulong extraout_XMM1_Qb_01;
  ulong extraout_XMM1_Qb_02;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM6_Qb;
  ulong uVar24;
  ulong in_XMM7_Qa;
  ulong in_XMM7_Qb;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined1 auVar31 [16];
  undefined8 uStack_80;
  ulong local_78 [5];
  ulong uStack_50;
  
  if (param_6 != 0) {
    asm_AES_cbc_encrypt();
    return;
  }
  if (param_3 < 0x80) {
    asm_AES_cbc_encrypt();
    return;
  }
  uVar1 = *(uint *)(param_4 + 0xf0);
  param_3 = param_3 >> 4;
  lVar2 = -((ulong)uVar1 * 0x80 + -0x60);
  pauVar10 = (undefined1 (*) [16])((long)local_78 + lVar2);
  *(undefined8 *)((long)&uStack_80 + lVar2) = 0x101344;
  puVar9 = (undefined8 *)_bsaes_key_convert(param_1,param_2,uVar1,param_4);
  uVar25 = *(ulong *)((long)local_78 + lVar2);
  uVar26 = *(ulong *)((long)local_78 + lVar2 + 8);
  *puVar9 = in_XMM6_Qa;
  puVar9[1] = in_XMM6_Qb;
  *(ulong *)((long)local_78 + lVar2) = in_XMM7_Qa ^ uVar25;
  *(ulong *)((long)local_78 + lVar2 + 8) = in_XMM7_Qb ^ uVar26;
  uVar25 = *param_5;
  uVar26 = param_5[1];
  do {
    puVar12 = param_2;
    puVar11 = param_1;
    param_3 = param_3 - 8;
    uVar27 = *puVar11;
    uVar29 = puVar11[1];
    uVar28 = puVar11[2];
    uVar30 = puVar11[4];
    uVar16 = puVar11[6];
    uVar17 = puVar11[7];
    uVar15 = puVar11[8];
    uVar18 = puVar11[9];
    uVar14 = puVar11[10];
    uVar19 = puVar11[0xb];
    uVar20 = puVar11[0xc];
    uVar22 = puVar11[0xd];
    uVar13 = puVar11[0xe];
    uVar24 = puVar11[0xf];
    local_78[4] = uVar25;
    uStack_50 = uVar26;
    *(undefined8 *)((long)&uStack_80 + lVar2) = 0x1013a3;
    auVar31 = _bsaes_decrypt8(uVar28,uVar30);
    uVar21 = *puVar11;
    uVar23 = puVar11[1];
    uVar20 = uVar20 ^ puVar11[2];
    uVar22 = uVar22 ^ puVar11[3];
    uVar5 = puVar11[6];
    uVar6 = puVar11[7];
    uVar15 = uVar15 ^ puVar11[4];
    uVar18 = uVar18 ^ puVar11[5];
    uVar28 = puVar11[10];
    uVar30 = puVar11[0xb];
    uVar13 = uVar13 ^ puVar11[8];
    uVar24 = uVar24 ^ puVar11[9];
    uVar3 = puVar11[0xc];
    uVar4 = puVar11[0xd];
    uVar25 = puVar11[0xe];
    uVar26 = puVar11[0xf];
    *puVar12 = uVar27 ^ local_78[4];
    puVar12[1] = uVar29 ^ uStack_50;
    param_1 = puVar11 + 0x10;
    puVar12[2] = auVar31._0_8_ ^ uVar21;
    puVar12[3] = extraout_XMM0_Qb ^ uVar23;
    puVar12[4] = uVar20;
    puVar12[5] = uVar22;
    puVar12[6] = uVar15;
    puVar12[7] = uVar18;
    puVar12[8] = auVar31._8_8_ ^ uVar5;
    puVar12[9] = extraout_XMM1_Qb ^ uVar6;
    puVar12[10] = uVar13;
    puVar12[0xb] = uVar24;
    puVar12[0xc] = uVar16 ^ uVar28;
    puVar12[0xd] = uVar17 ^ uVar30;
    puVar12[0xe] = uVar14 ^ uVar3;
    puVar12[0xf] = uVar19 ^ uVar4;
    param_2 = puVar12 + 0x10;
  } while (7 < param_3);
  if (param_3 != 0) {
    uVar28 = *param_1;
    uVar30 = puVar11[0x11];
    if (param_3 < 2) {
      *(undefined8 *)((long)&uStack_80 + lVar2) = 0x101730;
      uVar16 = uVar25;
      uVar17 = uVar26;
      asm_AES_decrypt(param_1,local_78 + 4,param_4);
      uVar26 = uVar30;
      uVar25 = uVar28;
      *param_2 = uVar16 ^ local_78[4];
      puVar12[0x11] = uVar17 ^ uStack_50;
    }
    else {
      uVar16 = puVar11[0x12];
      local_78[4] = uVar25;
      uStack_50 = uVar26;
      if (param_3 == 2) {
        *(undefined8 *)((long)&uStack_80 + lVar2) = 0x1016fb;
        uVar15 = _bsaes_decrypt8(uVar16);
        uVar16 = *param_1;
        uVar17 = puVar11[0x11];
        uVar25 = puVar11[0x12];
        uVar26 = puVar11[0x13];
        *param_2 = uVar28 ^ local_78[4];
        puVar12[0x11] = uVar30 ^ uStack_50;
        puVar12[0x12] = uVar15 ^ uVar16;
        puVar12[0x13] = extraout_XMM0_Qb_05 ^ uVar17;
      }
      else {
        uVar25 = puVar11[0x14];
        if (param_3 < 4) {
          *(undefined8 *)((long)&uStack_80 + lVar2) = 0x1016ab;
          uVar14 = _bsaes_decrypt8(uVar16,uVar25);
          uVar15 = *param_1;
          uVar18 = puVar11[0x11];
          uVar16 = puVar11[0x12];
          uVar17 = puVar11[0x13];
          uVar25 = puVar11[0x14];
          uVar26 = puVar11[0x15];
          *param_2 = uVar28 ^ local_78[4];
          puVar12[0x11] = uVar30 ^ uStack_50;
          puVar12[0x12] = uVar14 ^ uVar15;
          puVar12[0x13] = extraout_XMM0_Qb_04 ^ uVar18;
          puVar12[0x14] = uVar20 ^ uVar16;
          puVar12[0x15] = uVar22 ^ uVar17;
        }
        else {
          uVar17 = puVar11[0x16];
          uVar14 = puVar11[0x17];
          if (param_3 == 4) {
            *(undefined8 *)((long)&uStack_80 + lVar2) = 0x10164b;
            uVar13 = _bsaes_decrypt8(uVar16,uVar25);
            uVar3 = *param_1;
            uVar4 = puVar11[0x11];
            uVar14 = puVar11[0x12];
            uVar19 = puVar11[0x13];
            uVar16 = puVar11[0x14];
            uVar17 = puVar11[0x15];
            uVar25 = puVar11[0x16];
            uVar26 = puVar11[0x17];
            *param_2 = uVar28 ^ local_78[4];
            puVar12[0x11] = uVar30 ^ uStack_50;
            puVar12[0x12] = uVar13 ^ uVar3;
            puVar12[0x13] = extraout_XMM0_Qb_03 ^ uVar4;
            puVar12[0x14] = uVar20 ^ uVar14;
            puVar12[0x15] = uVar22 ^ uVar19;
            puVar12[0x16] = uVar15 ^ uVar16;
            puVar12[0x17] = uVar18 ^ uVar17;
          }
          else {
            uVar15 = puVar11[0x18];
            uVar18 = puVar11[0x19];
            if (param_3 < 6) {
              *(undefined8 *)((long)&uStack_80 + lVar2) = 0x1015db;
              auVar31 = _bsaes_decrypt8(uVar16,uVar25);
              uVar3 = *param_1;
              uVar4 = puVar11[0x11];
              uVar16 = puVar11[0x12];
              uVar17 = puVar11[0x13];
              uVar14 = puVar11[0x14];
              uVar19 = puVar11[0x15];
              uVar13 = puVar11[0x16];
              uVar24 = puVar11[0x17];
              uVar25 = puVar11[0x18];
              uVar26 = puVar11[0x19];
              *param_2 = uVar28 ^ local_78[4];
              puVar12[0x11] = uVar30 ^ uStack_50;
              puVar12[0x12] = auVar31._0_8_ ^ uVar3;
              puVar12[0x13] = extraout_XMM0_Qb_02 ^ uVar4;
              puVar12[0x14] = uVar20 ^ uVar16;
              puVar12[0x15] = uVar22 ^ uVar17;
              puVar12[0x16] = uVar15 ^ uVar14;
              puVar12[0x17] = uVar18 ^ uVar19;
              puVar12[0x18] = auVar31._8_8_ ^ uVar13;
              puVar12[0x19] = extraout_XMM1_Qb_02 ^ uVar24;
            }
            else {
              uVar26 = puVar11[0x1a];
              if (param_3 == 6) {
                *(undefined8 *)((long)&uStack_80 + lVar2) = 0x10155b;
                auVar31 = _bsaes_decrypt8(uVar16,uVar25,uVar17,uVar15,uVar26);
                uVar21 = *param_1;
                uVar23 = puVar11[0x11];
                uVar16 = puVar11[0x12];
                uVar17 = puVar11[0x13];
                uVar3 = puVar11[0x14];
                uVar4 = puVar11[0x15];
                uVar5 = puVar11[0x16];
                uVar6 = puVar11[0x17];
                uVar14 = puVar11[0x18];
                uVar19 = puVar11[0x19];
                uVar25 = puVar11[0x1a];
                uVar26 = puVar11[0x1b];
                *param_2 = uVar28 ^ local_78[4];
                puVar12[0x11] = uVar30 ^ uStack_50;
                puVar12[0x12] = auVar31._0_8_ ^ uVar21;
                puVar12[0x13] = extraout_XMM0_Qb_01 ^ uVar23;
                puVar12[0x14] = uVar20 ^ uVar16;
                puVar12[0x15] = uVar22 ^ uVar17;
                puVar12[0x16] = uVar15 ^ uVar3;
                puVar12[0x17] = uVar18 ^ uVar4;
                puVar12[0x18] = auVar31._8_8_ ^ uVar5;
                puVar12[0x19] = extraout_XMM1_Qb_01 ^ uVar6;
                puVar12[0x1a] = uVar13 ^ uVar14;
                puVar12[0x1b] = uVar24 ^ uVar19;
              }
              else {
                uVar21 = puVar11[0x1c];
                uVar23 = puVar11[0x1d];
                *(undefined8 *)((long)&uStack_80 + lVar2) = 0x1014c6;
                auVar31 = _bsaes_decrypt8(uVar16,uVar25,uVar17,uVar15,uVar26);
                uVar27 = *param_1;
                uVar29 = puVar11[0x11];
                uVar5 = puVar11[0x12];
                uVar6 = puVar11[0x13];
                uVar20 = puVar11[0x14];
                uVar22 = puVar11[0x15];
                uVar7 = puVar11[0x16];
                uVar8 = puVar11[0x17];
                uVar16 = puVar11[0x18];
                uVar19 = puVar11[0x19];
                uVar3 = puVar11[0x1a];
                uVar4 = puVar11[0x1b];
                uVar25 = puVar11[0x1c];
                uVar26 = puVar11[0x1d];
                *param_2 = uVar28 ^ local_78[4];
                puVar12[0x11] = uVar30 ^ uStack_50;
                puVar12[0x12] = auVar31._0_8_ ^ uVar27;
                puVar12[0x13] = extraout_XMM0_Qb_00 ^ uVar29;
                puVar12[0x14] = uVar21 ^ uVar5;
                puVar12[0x15] = uVar23 ^ uVar6;
                puVar12[0x16] = uVar15 ^ uVar20;
                puVar12[0x17] = uVar18 ^ uVar22;
                puVar12[0x18] = auVar31._8_8_ ^ uVar7;
                puVar12[0x19] = extraout_XMM1_Qb_00 ^ uVar8;
                puVar12[0x1a] = uVar13 ^ uVar16;
                puVar12[0x1b] = uVar24 ^ uVar19;
                puVar12[0x1c] = uVar17 ^ uVar3;
                puVar12[0x1d] = uVar14 ^ uVar4;
              }
            }
          }
        }
      }
    }
  }
  *param_5 = uVar25;
  param_5[1] = uVar26;
  do {
    *pauVar10 = (undefined1  [16])0x0;
    pauVar10[1] = (undefined1  [16])0x0;
    pauVar10 = pauVar10 + 2;
  } while (pauVar10 < (undefined1 (*) [16])local_78);
  return;
}



void ossl_bsaes_ctr32_encrypt_blocks
               (undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulong param_3,long param_4,
               undefined1 (*param_5) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulong *puVar11;
  undefined1 (*pauVar12) [16];
  ulong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulong extraout_XMM0_Qb;
  undefined1 auVar18 [16];
  ulong extraout_XMM1_Qb;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulong in_XMM6_Qa;
  ulong in_XMM6_Qb;
  undefined1 auVar24 [16];
  ulong in_XMM7_Qa;
  ulong in_XMM7_Qb;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uStack_80;
  undefined1 local_78 [32];
  undefined1 local_58 [16];
  ulong local_48;
  ulong uStack_40;
  
  local_58 = *param_5;
  if (param_3 < 8) {
    do {
      uStack_80 = 0x101a70;
      asm_AES_encrypt(local_58,&local_48,param_4);
      puVar9 = *param_1;
      uVar13 = *(ulong *)(*param_1 + 8);
      param_1 = param_1 + 1;
      uVar10 = ((uint)local_58._12_4_ >> 0x18 | (local_58._12_4_ & 0xff0000) >> 8 |
                (local_58._12_4_ & 0xff00) << 8 | local_58._12_4_ << 0x18) + 1;
      *(ulong *)*param_2 = *(ulong *)puVar9 ^ local_48;
      *(ulong *)(*param_2 + 8) = uVar13 ^ uStack_40;
      param_2 = param_2 + 1;
      local_58._12_4_ =
           uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 * 0x1000000;
      param_3 = param_3 - 1;
      pauVar12 = (undefined1 (*) [16])local_78;
    } while (param_3 != 0);
  }
  else {
    lVar4 = -((ulong)*(uint *)(param_4 + 0xf0) * 0x80 + -0x60);
    pauVar12 = (undefined1 (*) [16])((long)local_78 + lVar4);
    *(undefined8 *)(local_78 + lVar4 + -8) = 0x1017ea;
    puVar11 = (ulong *)_bsaes_key_convert();
    *puVar11 = in_XMM7_Qa ^ in_XMM6_Qa;
    puVar11[1] = in_XMM7_Qb ^ in_XMM6_Qb;
    auVar25 = pshufb(*(undefined1 (*) [16])((long)local_78 + lVar4),_bsaes_const._144_16_);
    auVar26 = pshufb(local_58,_bsaes_const._144_16_);
    *(undefined1 (*) [16])((long)local_78 + lVar4) = auVar25;
    do {
      local_58 = auVar26;
      iVar14 = auVar26._0_4_;
      auVar18._0_4_ = iVar14 + _bsaes_const._176_4_;
      iVar15 = auVar26._4_4_;
      auVar18._4_4_ = iVar15 + _bsaes_const._180_4_;
      iVar16 = auVar26._8_4_;
      iVar17 = auVar26._12_4_;
      auVar18._8_4_ = iVar16 + _bsaes_const._184_4_;
      auVar18._12_4_ = iVar17 + _bsaes_const._188_4_;
      auVar19._0_4_ = iVar14 + _bsaes_const._192_4_;
      auVar19._4_4_ = iVar15 + _bsaes_const._196_4_;
      auVar19._8_4_ = iVar16 + _bsaes_const._200_4_;
      auVar19._12_4_ = iVar17 + _bsaes_const._204_4_;
      auVar20._0_4_ = iVar14 + _bsaes_const._208_4_;
      auVar20._4_4_ = iVar15 + _bsaes_const._212_4_;
      auVar20._8_4_ = iVar16 + _bsaes_const._216_4_;
      auVar20._12_4_ = iVar17 + _bsaes_const._220_4_;
      auVar21._0_4_ = iVar14 + _bsaes_const._224_4_;
      auVar21._4_4_ = iVar15 + _bsaes_const._228_4_;
      auVar21._8_4_ = iVar16 + _bsaes_const._232_4_;
      auVar21._12_4_ = iVar17 + _bsaes_const._236_4_;
      auVar23._0_4_ = iVar14 + _bsaes_const._240_4_;
      auVar23._4_4_ = iVar15 + _bsaes_const._244_4_;
      auVar23._8_4_ = iVar16 + _bsaes_const._248_4_;
      auVar23._12_4_ = iVar17 + _bsaes_const._252_4_;
      auVar22._0_4_ = iVar14 + _bsaes_const._256_4_;
      auVar22._4_4_ = iVar15 + _bsaes_const._260_4_;
      auVar22._8_4_ = iVar16 + _bsaes_const._264_4_;
      auVar22._12_4_ = iVar17 + _bsaes_const._268_4_;
      auVar24._0_4_ = iVar14 + _bsaes_const._272_4_;
      auVar24._4_4_ = iVar15 + _bsaes_const._276_4_;
      auVar24._8_4_ = iVar16 + _bsaes_const._280_4_;
      auVar24._12_4_ = iVar17 + _bsaes_const._284_4_;
      auVar25 = *(undefined1 (*) [16])((long)local_78 + lVar4);
      auVar27 = pshufb(auVar26 ^ auVar25,_bsaes_const._160_16_);
      auVar26 = pshufb(auVar18 ^ auVar25,_bsaes_const._160_16_);
      auVar18 = pshufb(auVar19 ^ auVar25,_bsaes_const._160_16_);
      auVar19 = pshufb(auVar20 ^ auVar25,_bsaes_const._160_16_);
      auVar20 = pshufb(auVar21 ^ auVar25,_bsaes_const._160_16_);
      auVar21 = pshufb(auVar23 ^ auVar25,_bsaes_const._160_16_);
      auVar23 = pshufb(auVar22 ^ auVar25,_bsaes_const._160_16_);
      auVar25 = pshufb(auVar24 ^ auVar25,_bsaes_const._160_16_);
      *(undefined8 *)(local_78 + lVar4 + -8) = 0x1018e3;
      auVar26 = _bsaes_encrypt8_bitslice(auVar26._0_8_,auVar18._0_8_);
      uVar13 = param_3 - 8;
      if (param_3 < 8) {
        *param_2 = auVar27 ^ *param_1;
        pauVar12 = (undefined1 (*) [16])((long)local_78 + lVar4);
        if (1 < param_3) {
          uVar13 = *(ulong *)(param_1[1] + 8);
          *(ulong *)param_2[1] = auVar26._0_8_ ^ *(ulong *)param_1[1];
          *(ulong *)(param_2[1] + 8) = extraout_XMM0_Qb ^ uVar13;
          pauVar12 = (undefined1 (*) [16])((long)local_78 + lVar4);
          if (param_3 != 2) {
            param_2[2] = auVar20 ^ param_1[2];
            pauVar12 = (undefined1 (*) [16])((long)local_78 + lVar4);
            if ((3 < param_3) &&
               (param_2[3] = auVar23 ^ param_1[3],
               pauVar12 = (undefined1 (*) [16])((long)local_78 + lVar4), param_3 != 4)) {
              param_2[4] = auVar19 ^ param_1[4];
              pauVar12 = (undefined1 (*) [16])((long)local_78 + lVar4);
              if ((5 < param_3) &&
                 (param_2[5] = auVar25 ^ param_1[5],
                 pauVar12 = (undefined1 (*) [16])((long)local_78 + lVar4), param_3 != 6)) {
                uVar13 = *(ulong *)(param_1[6] + 8);
                *(ulong *)param_2[6] = auVar26._8_8_ ^ *(ulong *)param_1[6];
                *(ulong *)(param_2[6] + 8) = extraout_XMM1_Qb ^ uVar13;
                pauVar12 = (undefined1 (*) [16])((long)local_78 + lVar4);
              }
            }
          }
        }
        break;
      }
      auVar18 = *param_1;
      uVar5 = *(ulong *)param_1[1];
      uVar6 = *(ulong *)(param_1[1] + 8);
      auVar22 = param_1[2];
      auVar24 = param_1[3];
      auVar1 = param_1[4];
      auVar2 = param_1[5];
      uVar7 = *(ulong *)param_1[6];
      uVar8 = *(ulong *)(param_1[6] + 8);
      auVar3 = param_1[7];
      param_1 = param_1 + 8;
      *param_2 = auVar18 ^ auVar27;
      *(ulong *)param_2[1] = auVar26._0_8_ ^ uVar5;
      *(ulong *)(param_2[1] + 8) = extraout_XMM0_Qb ^ uVar6;
      param_2[2] = auVar20 ^ auVar22;
      param_2[3] = auVar23 ^ auVar24;
      param_2[4] = auVar19 ^ auVar1;
      param_2[5] = auVar25 ^ auVar2;
      *(ulong *)param_2[6] = auVar26._8_8_ ^ uVar7;
      *(ulong *)(param_2[6] + 8) = extraout_XMM1_Qb ^ uVar8;
      param_2[7] = auVar21 ^ auVar3;
      param_2 = param_2 + 8;
      auVar26._0_4_ = local_58._0_4_ + _bsaes_const._288_4_;
      auVar26._4_4_ = local_58._4_4_ + _bsaes_const._292_4_;
      auVar26._8_4_ = local_58._8_4_ + _bsaes_const._296_4_;
      auVar26._12_4_ = local_58._12_4_ + _bsaes_const._300_4_;
      param_3 = uVar13;
    } while (uVar13 != 0);
  }
  do {
    *pauVar12 = (undefined1  [16])0x0;
    pauVar12[1] = (undefined1  [16])0x0;
    pauVar12 = pauVar12 + 2;
  } while (pauVar12 < (undefined1 (*) [16])local_78);
  return;
}



void ossl_bsaes_xts_encrypt
               (undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulong param_3,long param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  uint uVar13;
  ulong uVar14;
  ulong extraout_XMM0_Qb;
  ulong extraout_XMM0_Qb_00;
  ulong extraout_XMM0_Qb_01;
  ulong extraout_XMM0_Qb_02;
  ulong extraout_XMM0_Qb_03;
  ulong extraout_XMM0_Qb_04;
  ulong extraout_XMM0_Qb_05;
  ulong uVar15;
  ulong extraout_XMM1_Qb;
  ulong extraout_XMM1_Qb_00;
  undefined1 in_XMM3 [16];
  undefined1 in_XMM5 [16];
  ulong in_XMM6_Qa;
  ulong uVar16;
  ulong in_XMM6_Qb;
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
  ulong in_XMM7_Qa;
  ulong in_XMM7_Qb;
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
  int iVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  ulong auStack_e8 [2];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  ulong auStack_98 [2];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 local_78 [32];
  undefined1 local_58 [2] [16];
  
  uStack_80 = 0x101b14;
  asm_AES_encrypt(param_6,local_58,param_5);
  lVar4 = -((ulong)*(uint *)(param_4 + 0xf0) * 0x80 + -0x60);
  *(undefined8 *)(local_78 + lVar4 + -8) = 0x101b39;
  puVar10 = (ulong *)_bsaes_key_convert();
  *puVar10 = in_XMM7_Qa ^ in_XMM6_Qa;
  puVar10[1] = in_XMM7_Qb ^ in_XMM6_Qb;
  iVar43 = SUB164(local_58[0],0);
  bVar2 = SUB164(local_58[0],4) < 0;
  bVar3 = SUB164(local_58[0],0xc) < 0;
  auVar44 = local_58[0];
  uVar14 = param_3 & 0xfffffffffffffff0;
  while( true ) {
    uVar9 = uVar14 - 0x80;
    iVar43 = -(uint)(iVar43 < 0);
    if (uVar14 < 0x80) break;
    auVar29._4_4_ = iVar43;
    auVar29._0_4_ = -(uint)bVar3;
    auVar29._8_4_ = -(uint)bVar2;
    auVar29._12_4_ = iVar43;
    *(undefined1 (*) [16])(auStack_f8 + lVar4) = auVar44;
    lVar5 = auVar44._0_8_ * 2;
    lVar6 = auVar44._8_8_ * 2;
    auVar17._8_8_ = lVar6;
    auVar17._0_8_ = lVar5;
    iVar43 = -(uint)((int)lVar5 < 0);
    auVar17 = auVar17 ^ auVar29 & _bsaes_const._304_16_;
    auVar45._4_4_ = iVar43;
    auVar45._0_4_ = -(uint)(lVar6 < 0);
    auVar45._8_4_ = -(uint)(lVar5 < 0);
    auVar45._12_4_ = iVar43;
    *(undefined1 (*) [16])((long)auStack_e8 + lVar4) = auVar17;
    lVar5 = auVar17._0_8_ * 2;
    lVar6 = auVar17._8_8_ * 2;
    auVar18._8_8_ = lVar6;
    auVar18._0_8_ = lVar5;
    iVar43 = -(uint)((int)lVar5 < 0);
    auVar18 = auVar18 ^ auVar45 & _bsaes_const._304_16_;
    auVar29 = *param_1;
    auVar30._4_4_ = iVar43;
    auVar30._0_4_ = -(uint)(lVar6 < 0);
    auVar30._8_4_ = -(uint)(lVar5 < 0);
    auVar30._12_4_ = iVar43;
    *(undefined1 (*) [16])(auStack_d8 + lVar4) = auVar18;
    lVar5 = auVar18._0_8_ * 2;
    lVar6 = auVar18._8_8_ * 2;
    auVar19._8_8_ = lVar6;
    auVar19._0_8_ = lVar5;
    iVar43 = -(uint)((int)lVar5 < 0);
    auVar19 = auVar19 ^ auVar30 & _bsaes_const._304_16_;
    uVar14 = *(ulong *)param_1[1];
    auVar44 = auVar44 ^ auVar29;
    auVar31._4_4_ = iVar43;
    auVar31._0_4_ = -(uint)(lVar6 < 0);
    auVar31._8_4_ = -(uint)(lVar5 < 0);
    auVar31._12_4_ = iVar43;
    *(undefined1 (*) [16])(auStack_c8 + lVar4) = auVar19;
    lVar5 = auVar19._0_8_ * 2;
    lVar6 = auVar19._8_8_ * 2;
    in_XMM3._8_8_ = lVar6;
    in_XMM3._0_8_ = lVar5;
    iVar43 = -(uint)((int)lVar5 < 0);
    in_XMM3 = in_XMM3 ^ auVar31 & _bsaes_const._304_16_;
    uVar15 = *(ulong *)param_1[2];
    auVar32._4_4_ = iVar43;
    auVar32._0_4_ = -(uint)(lVar6 < 0);
    auVar32._8_4_ = -(uint)(lVar5 < 0);
    auVar32._12_4_ = iVar43;
    *(undefined1 (*) [16])(auStack_b8 + lVar4) = in_XMM3;
    lVar5 = in_XMM3._0_8_ * 2;
    lVar6 = in_XMM3._8_8_ * 2;
    auVar20._8_8_ = lVar6;
    auVar20._0_8_ = lVar5;
    iVar43 = -(uint)((int)lVar5 < 0);
    auVar20 = auVar20 ^ auVar32 & _bsaes_const._304_16_;
    auVar29 = param_1[3];
    auVar33._4_4_ = iVar43;
    auVar33._0_4_ = -(uint)(lVar6 < 0);
    auVar33._8_4_ = -(uint)(lVar5 < 0);
    auVar33._12_4_ = iVar43;
    *(undefined1 (*) [16])(auStack_a8 + lVar4) = auVar20;
    lVar5 = auVar20._0_8_ * 2;
    lVar6 = auVar20._8_8_ * 2;
    in_XMM5._8_8_ = lVar6;
    in_XMM5._0_8_ = lVar5;
    iVar43 = -(uint)((int)lVar5 < 0);
    in_XMM5 = in_XMM5 ^ auVar33 & _bsaes_const._304_16_;
    auVar45 = param_1[4];
    auVar19 = auVar19 ^ auVar29;
    auVar34._4_4_ = iVar43;
    auVar34._0_4_ = -(uint)(lVar6 < 0);
    auVar34._8_4_ = -(uint)(lVar5 < 0);
    auVar34._12_4_ = iVar43;
    *(undefined1 (*) [16])((long)auStack_98 + lVar4) = in_XMM5;
    auVar21._8_8_ = in_XMM5._8_8_ * 2;
    auVar21._0_8_ = in_XMM5._0_8_ * 2;
    auVar21 = auVar21 ^ auVar34 & _bsaes_const._304_16_;
    in_XMM3 = in_XMM3 ^ auVar45;
    auVar29 = param_1[6];
    auVar20 = auVar20 ^ param_1[5];
    auVar45 = param_1[7];
    param_1 = param_1 + 8;
    *(undefined1 (*) [16])(auStack_88 + lVar4) = auVar21;
    in_XMM5 = in_XMM5 ^ auVar29;
    auVar21 = auVar21 ^ auVar45;
    *(undefined8 *)((long)&uStack_100 + lVar4) = 0x101d15;
    auVar45 = _bsaes_encrypt8(auVar17._0_8_ ^ uVar14,auVar18._0_8_ ^ uVar15);
    uVar14 = *(ulong *)((long)auStack_e8 + lVar4);
    uVar15 = *(ulong *)((long)auStack_e8 + lVar4 + 8);
    *param_2 = auVar44 ^ *(undefined1 (*) [16])(auStack_f8 + lVar4);
    in_XMM3 = in_XMM3 ^ *(undefined1 (*) [16])(auStack_d8 + lVar4);
    *(ulong *)param_2[1] = auVar45._0_8_ ^ uVar14;
    *(ulong *)(param_2[1] + 8) = extraout_XMM0_Qb ^ uVar15;
    in_XMM5 = in_XMM5 ^ *(undefined1 (*) [16])(auStack_c8 + lVar4);
    param_2[2] = in_XMM3;
    auVar44 = *(undefined1 (*) [16])(auStack_b8 + lVar4);
    param_2[3] = in_XMM5;
    auVar29 = *(undefined1 (*) [16])(auStack_a8 + lVar4);
    param_2[4] = auVar19 ^ auVar44;
    uVar14 = *(ulong *)((long)auStack_98 + lVar4);
    uVar15 = *(ulong *)((long)auStack_98 + lVar4 + 8);
    param_2[5] = auVar21 ^ auVar29;
    auVar44 = *(undefined1 (*) [16])(auStack_88 + lVar4);
    *(ulong *)param_2[6] = auVar45._8_8_ ^ uVar14;
    *(ulong *)(param_2[6] + 8) = extraout_XMM1_Qb ^ uVar15;
    param_2[7] = auVar20 ^ auVar44;
    param_2 = param_2 + 8;
    auVar44 = *(undefined1 (*) [16])(auStack_88 + lVar4);
    iVar43 = -(uint)(auVar44._0_4_ < 0);
    auVar35._4_4_ = iVar43;
    auVar35._0_4_ = -(uint)(auVar44._12_4_ < 0);
    auVar35._8_4_ = -(uint)(auVar44._4_4_ < 0);
    auVar35._12_4_ = iVar43;
    lVar5 = auVar44._0_8_ * 2;
    lVar6 = auVar44._8_8_ * 2;
    auVar44._8_8_ = lVar6;
    auVar44._0_8_ = lVar5;
    iVar43 = (int)lVar5;
    bVar2 = lVar5 < 0;
    bVar3 = lVar6 < 0;
    auVar44 = auVar44 ^ auVar35 & _bsaes_const._304_16_;
    uVar14 = uVar9;
  }
  if (uVar9 != 0xffffffffffffff80) {
    auVar36._4_4_ = iVar43;
    auVar36._0_4_ = -(uint)bVar3;
    auVar36._8_4_ = -(uint)bVar2;
    auVar36._12_4_ = iVar43;
    *(undefined1 (*) [16])(auStack_f8 + lVar4) = auVar44;
    lVar5 = auVar44._0_8_ * 2;
    lVar6 = auVar44._8_8_ * 2;
    auVar22._8_8_ = lVar6;
    auVar22._0_8_ = lVar5;
    iVar43 = -(uint)((int)lVar5 < 0);
    auVar22 = auVar22 ^ auVar36 & _bsaes_const._304_16_;
    auVar37._4_4_ = iVar43;
    auVar37._0_4_ = -(uint)(lVar6 < 0);
    auVar37._8_4_ = -(uint)(lVar5 < 0);
    auVar37._12_4_ = iVar43;
    *(undefined1 (*) [16])((long)auStack_e8 + lVar4) = auVar22;
    uVar14 = auVar22._0_8_;
    lVar5 = uVar14 * 2;
    lVar6 = auVar22._8_8_ * 2;
    auVar23._8_8_ = lVar6;
    auVar23._0_8_ = lVar5;
    iVar43 = -(uint)((int)lVar5 < 0);
    auVar23 = auVar23 ^ auVar37 & _bsaes_const._304_16_;
    auVar29 = *param_1;
    uVar15 = auVar23._0_8_;
    if (uVar9 == 0xffffffffffffff90) {
      local_58[0] = auVar29 ^ auVar44;
      param_1 = param_1 + 1;
      *(undefined8 *)((long)&uStack_100 + lVar4) = 0x10221f;
      asm_AES_encrypt(local_58,local_58,param_4);
      *param_2 = auVar44 ^ local_58[0];
      param_2 = param_2 + 1;
      auVar44 = *(undefined1 (*) [16])((long)auStack_e8 + lVar4);
    }
    else {
      auVar38._4_4_ = iVar43;
      auVar38._0_4_ = -(uint)(lVar6 < 0);
      auVar38._8_4_ = -(uint)(lVar5 < 0);
      auVar38._12_4_ = iVar43;
      *(undefined1 (*) [16])(auStack_d8 + lVar4) = auVar23;
      lVar5 = uVar15 * 2;
      lVar6 = auVar23._8_8_ * 2;
      auVar24._8_8_ = lVar6;
      auVar24._0_8_ = lVar5;
      iVar43 = -(uint)((int)lVar5 < 0);
      auVar24 = auVar24 ^ auVar38 & _bsaes_const._304_16_;
      uVar16 = *(ulong *)param_1[1];
      if (uVar9 == 0xffffffffffffffa0) {
        auVar44 = auVar44 ^ auVar29;
        param_1 = param_1 + 2;
        *(undefined8 *)((long)&uStack_100 + lVar4) = 0x1021cf;
        uVar15 = _bsaes_encrypt8(uVar14 ^ uVar16,uVar15);
        uVar14 = *(ulong *)((long)auStack_e8 + lVar4);
        uVar9 = *(ulong *)((long)auStack_e8 + lVar4 + 8);
        *param_2 = auVar44 ^ *(undefined1 (*) [16])(auStack_f8 + lVar4);
        *(ulong *)param_2[1] = uVar15 ^ uVar14;
        *(ulong *)(param_2[1] + 8) = extraout_XMM0_Qb_05 ^ uVar9;
        param_2 = param_2 + 2;
        auVar44 = *(undefined1 (*) [16])(auStack_d8 + lVar4);
      }
      else {
        auVar44 = auVar44 ^ auVar29;
        auVar39._4_4_ = iVar43;
        auVar39._0_4_ = -(uint)(lVar6 < 0);
        auVar39._8_4_ = -(uint)(lVar5 < 0);
        auVar39._12_4_ = iVar43;
        *(undefined1 (*) [16])(auStack_c8 + lVar4) = auVar24;
        lVar5 = auVar24._0_8_ * 2;
        lVar6 = auVar24._8_8_ * 2;
        auVar25._8_8_ = lVar6;
        auVar25._0_8_ = lVar5;
        iVar43 = -(uint)((int)lVar5 < 0);
        auVar25 = auVar25 ^ auVar39 & _bsaes_const._304_16_;
        uVar7 = *(ulong *)param_1[2];
        if (uVar9 == 0xffffffffffffffb0) {
          param_1 = param_1 + 3;
          *(undefined8 *)((long)&uStack_100 + lVar4) = 0x10216f;
          uVar15 = _bsaes_encrypt8(uVar14 ^ uVar16,uVar15 ^ uVar7);
          uVar14 = *(ulong *)((long)auStack_e8 + lVar4);
          uVar9 = *(ulong *)((long)auStack_e8 + lVar4 + 8);
          *param_2 = auVar44 ^ *(undefined1 (*) [16])(auStack_f8 + lVar4);
          auVar44 = *(undefined1 (*) [16])(auStack_d8 + lVar4);
          *(ulong *)param_2[1] = uVar15 ^ uVar14;
          *(ulong *)(param_2[1] + 8) = extraout_XMM0_Qb_04 ^ uVar9;
          param_2[2] = in_XMM3 ^ auVar44;
          param_2 = param_2 + 3;
          auVar44 = *(undefined1 (*) [16])(auStack_c8 + lVar4);
        }
        else {
          uVar14 = uVar14 ^ uVar16;
          auVar40._4_4_ = iVar43;
          auVar40._0_4_ = -(uint)(lVar6 < 0);
          auVar40._8_4_ = -(uint)(lVar5 < 0);
          auVar40._12_4_ = iVar43;
          *(undefined1 (*) [16])(auStack_b8 + lVar4) = auVar25;
          lVar5 = auVar25._0_8_ * 2;
          lVar6 = auVar25._8_8_ * 2;
          auVar26._8_8_ = lVar6;
          auVar26._0_8_ = lVar5;
          iVar43 = -(uint)((int)lVar5 < 0);
          auVar26 = auVar26 ^ auVar40 & _bsaes_const._304_16_;
          auVar29 = param_1[3];
          uVar16 = auVar26._0_8_;
          if (uVar9 == 0xffffffffffffffc0) {
            param_1 = param_1 + 4;
            *(undefined8 *)((long)&uStack_100 + lVar4) = 0x10210f;
            uVar15 = _bsaes_encrypt8(uVar14,uVar15 ^ uVar7,auVar24._0_8_ ^ auVar29._0_8_);
            uVar14 = *(ulong *)((long)auStack_e8 + lVar4);
            uVar9 = *(ulong *)((long)auStack_e8 + lVar4 + 8);
            *param_2 = auVar44 ^ *(undefined1 (*) [16])(auStack_f8 + lVar4);
            auVar44 = *(undefined1 (*) [16])(auStack_d8 + lVar4);
            *(ulong *)param_2[1] = uVar15 ^ uVar14;
            *(ulong *)(param_2[1] + 8) = extraout_XMM0_Qb_03 ^ uVar9;
            auVar29 = *(undefined1 (*) [16])(auStack_c8 + lVar4);
            param_2[2] = auVar25 ^ auVar44;
            param_2[3] = in_XMM5 ^ auVar29;
            param_2 = param_2 + 4;
            auVar44 = *(undefined1 (*) [16])(auStack_b8 + lVar4);
          }
          else {
            uVar15 = uVar15 ^ uVar7;
            auVar41._4_4_ = iVar43;
            auVar41._0_4_ = -(uint)(lVar6 < 0);
            auVar41._8_4_ = -(uint)(lVar5 < 0);
            auVar41._12_4_ = iVar43;
            *(undefined1 (*) [16])(auStack_a8 + lVar4) = auVar26;
            lVar5 = uVar16 * 2;
            lVar6 = auVar26._8_8_ * 2;
            auVar27._8_8_ = lVar6;
            auVar27._0_8_ = lVar5;
            iVar43 = -(uint)((int)lVar5 < 0);
            auVar27 = auVar27 ^ auVar41 & _bsaes_const._304_16_;
            auVar45 = param_1[4];
            if (uVar9 == 0xffffffffffffffd0) {
              auVar24 = auVar24 ^ auVar29;
              param_1 = param_1 + 5;
              auVar25 = auVar25 ^ auVar45;
              *(undefined8 *)((long)&uStack_100 + lVar4) = 0x10209f;
              uVar15 = _bsaes_encrypt8(uVar14,uVar15,auVar24._0_8_,auVar25._0_8_,uVar16);
              uVar14 = *(ulong *)((long)auStack_e8 + lVar4);
              uVar9 = *(ulong *)((long)auStack_e8 + lVar4 + 8);
              *param_2 = auVar44 ^ *(undefined1 (*) [16])(auStack_f8 + lVar4);
              auVar44 = *(undefined1 (*) [16])(auStack_d8 + lVar4);
              *(ulong *)param_2[1] = uVar15 ^ uVar14;
              *(ulong *)(param_2[1] + 8) = extraout_XMM0_Qb_02 ^ uVar9;
              auVar29 = *(undefined1 (*) [16])(auStack_c8 + lVar4);
              param_2[2] = auVar25 ^ auVar44;
              auVar44 = *(undefined1 (*) [16])(auStack_b8 + lVar4);
              param_2[3] = in_XMM5 ^ auVar29;
              param_2[4] = auVar24 ^ auVar44;
              param_2 = param_2 + 5;
              auVar44 = *(undefined1 (*) [16])(auStack_a8 + lVar4);
            }
            else {
              auVar24 = auVar24 ^ auVar29;
              auVar42._4_4_ = iVar43;
              auVar42._0_4_ = -(uint)(lVar6 < 0);
              auVar42._8_4_ = -(uint)(lVar5 < 0);
              auVar42._12_4_ = iVar43;
              *(undefined1 (*) [16])((long)auStack_98 + lVar4) = auVar27;
              auVar28._8_8_ = auVar27._8_8_ * 2;
              auVar28._0_8_ = auVar27._0_8_ * 2;
              auVar28 = auVar28 ^ auVar42 & _bsaes_const._304_16_;
              uVar7 = *(ulong *)param_1[5];
              if (uVar9 == 0xffffffffffffffe0) {
                auVar25 = auVar25 ^ auVar45;
                param_1 = param_1 + 6;
                *(undefined8 *)((long)&uStack_100 + lVar4) = 0x10201f;
                uVar15 = _bsaes_encrypt8(uVar14,uVar15,auVar24._0_8_,auVar25._0_8_,uVar16 ^ uVar7);
                uVar14 = *(ulong *)((long)auStack_e8 + lVar4);
                uVar9 = *(ulong *)((long)auStack_e8 + lVar4 + 8);
                *param_2 = auVar44 ^ *(undefined1 (*) [16])(auStack_f8 + lVar4);
                auVar44 = *(undefined1 (*) [16])(auStack_d8 + lVar4);
                *(ulong *)param_2[1] = uVar15 ^ uVar14;
                *(ulong *)(param_2[1] + 8) = extraout_XMM0_Qb_01 ^ uVar9;
                auVar29 = *(undefined1 (*) [16])(auStack_c8 + lVar4);
                param_2[2] = auVar25 ^ auVar44;
                auVar44 = *(undefined1 (*) [16])(auStack_b8 + lVar4);
                param_2[3] = auVar27 ^ auVar29;
                auVar29 = *(undefined1 (*) [16])(auStack_a8 + lVar4);
                param_2[4] = auVar24 ^ auVar44;
                param_2[5] = auVar28 ^ auVar29;
                param_2 = param_2 + 6;
                auVar44 = *(undefined1 (*) [16])((long)auStack_98 + lVar4);
              }
              else {
                auVar25 = auVar25 ^ auVar45;
                auVar29 = param_1[6];
                *(undefined1 (*) [16])(auStack_88 + lVar4) = auVar28;
                param_1 = param_1 + 7;
                auVar27 = auVar27 ^ auVar29;
                *(undefined8 *)((long)&uStack_100 + lVar4) = 0x101f8f;
                auVar45 = _bsaes_encrypt8(uVar14,uVar15,auVar24._0_8_,auVar25._0_8_,uVar16 ^ uVar7);
                uVar14 = *(ulong *)((long)auStack_e8 + lVar4);
                uVar9 = *(ulong *)((long)auStack_e8 + lVar4 + 8);
                *param_2 = auVar44 ^ *(undefined1 (*) [16])(auStack_f8 + lVar4);
                auVar44 = *(undefined1 (*) [16])(auStack_d8 + lVar4);
                *(ulong *)param_2[1] = auVar45._0_8_ ^ uVar14;
                *(ulong *)(param_2[1] + 8) = extraout_XMM0_Qb_00 ^ uVar9;
                auVar29 = *(undefined1 (*) [16])(auStack_c8 + lVar4);
                param_2[2] = auVar25 ^ auVar44;
                auVar44 = *(undefined1 (*) [16])(auStack_b8 + lVar4);
                param_2[3] = auVar27 ^ auVar29;
                auVar29 = *(undefined1 (*) [16])(auStack_a8 + lVar4);
                param_2[4] = auVar24 ^ auVar44;
                uVar14 = *(ulong *)((long)auStack_98 + lVar4);
                uVar9 = *(ulong *)((long)auStack_98 + lVar4 + 8);
                param_2[5] = auVar28 ^ auVar29;
                *(ulong *)param_2[6] = auVar45._8_8_ ^ uVar14;
                *(ulong *)(param_2[6] + 8) = extraout_XMM1_Qb_00 ^ uVar9;
                param_2 = param_2 + 7;
                auVar44 = *(undefined1 (*) [16])(auStack_88 + lVar4);
              }
            }
          }
        }
      }
    }
  }
  uVar13 = (uint)param_3 & 0xf;
  pauVar11 = (undefined1 (*) [16])(auStack_f8 + lVar4);
  pauVar12 = param_2;
  if ((param_3 & 0xf) != 0) {
    do {
      puVar8 = *param_1;
      uVar1 = pauVar12[-1][0];
      param_1 = (undefined1 (*) [16])(*param_1 + 1);
      pauVar12[-1][0] = *puVar8;
      (*pauVar12)[0] = uVar1;
      uVar13 = uVar13 - 1;
      pauVar12 = (undefined1 (*) [16])(*pauVar12 + 1);
    } while (uVar13 != 0);
    local_58[0] = param_2[-1] ^ auVar44;
    *(undefined8 *)((long)&uStack_100 + lVar4) = 0x10227a;
    asm_AES_encrypt(local_58,local_58,param_4);
    param_2[-1] = auVar44 ^ local_58[0];
    pauVar11 = (undefined1 (*) [16])(auStack_f8 + lVar4);
  }
  do {
    *pauVar11 = (undefined1  [16])0x0;
    pauVar11[1] = (undefined1  [16])0x0;
    pauVar11 = pauVar11 + 2;
  } while (pauVar11 < (undefined1 (*) [16])local_78);
  return;
}



void ossl_bsaes_xts_decrypt
               (undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulong param_3,long param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined1 (*pauVar1) [16];
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined1 (*pauVar12) [16];
  uint uVar13;
  ulong uVar14;
  ulong extraout_XMM0_Qb;
  ulong extraout_XMM0_Qb_00;
  ulong extraout_XMM0_Qb_01;
  ulong extraout_XMM0_Qb_02;
  ulong extraout_XMM0_Qb_03;
  ulong extraout_XMM0_Qb_04;
  ulong extraout_XMM0_Qb_05;
  ulong uVar15;
  ulong extraout_XMM1_Qb;
  ulong extraout_XMM1_Qb_00;
  ulong extraout_XMM1_Qb_01;
  ulong extraout_XMM1_Qb_02;
  undefined1 in_XMM5 [16];
  undefined8 in_XMM6_Qa;
  ulong uVar16;
  ulong uVar17;
  undefined8 in_XMM6_Qb;
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
  ulong in_XMM7_Qa;
  ulong in_XMM7_Qb;
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
  int iVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  ulong auStack_e8 [2];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  ulong auStack_b8 [2];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  ulong local_78 [4];
  undefined1 local_58 [2] [16];
  
  uStack_80 = 0x1022f4;
  asm_AES_encrypt(param_6,local_58,param_5);
  lVar5 = -((ulong)*(uint *)(param_4 + 0xf0) * 0x80 + -0x60);
  *(undefined8 *)((long)local_78 + lVar5 + -8) = 0x102319;
  puVar11 = (undefined8 *)_bsaes_key_convert();
  uVar14 = *(ulong *)((long)local_78 + lVar5);
  uVar10 = *(ulong *)((long)local_78 + lVar5 + 8);
  *puVar11 = in_XMM6_Qa;
  puVar11[1] = in_XMM6_Qb;
  *(ulong *)((long)local_78 + lVar5) = in_XMM7_Qa ^ uVar14;
  *(ulong *)((long)local_78 + lVar5 + 8) = in_XMM7_Qb ^ uVar10;
  iVar46 = SUB164(local_58[0],0);
  bVar3 = SUB164(local_58[0],4) < 0;
  bVar4 = SUB164(local_58[0],0xc) < 0;
  auVar47 = local_58[0];
  uVar14 = (param_3 & 0xfffffffffffffff0) + (ulong)((param_3 & 0xf) != 0) * -0x10;
  while( true ) {
    uVar10 = uVar14 - 0x80;
    iVar46 = -(uint)(iVar46 < 0);
    if (uVar14 < 0x80) break;
    auVar48._4_4_ = iVar46;
    auVar48._0_4_ = -(uint)bVar4;
    auVar48._8_4_ = -(uint)bVar3;
    auVar48._12_4_ = iVar46;
    *(undefined1 (*) [16])(auStack_f8 + lVar5) = auVar47;
    lVar6 = auVar47._0_8_ * 2;
    lVar7 = auVar47._8_8_ * 2;
    auVar18._8_8_ = lVar7;
    auVar18._0_8_ = lVar6;
    iVar46 = -(uint)((int)lVar6 < 0);
    auVar18 = auVar18 ^ auVar48 & _bsaes_const._304_16_;
    auVar49._4_4_ = iVar46;
    auVar49._0_4_ = -(uint)(lVar7 < 0);
    auVar49._8_4_ = -(uint)(lVar6 < 0);
    auVar49._12_4_ = iVar46;
    *(undefined1 (*) [16])((long)auStack_e8 + lVar5) = auVar18;
    lVar6 = auVar18._0_8_ * 2;
    lVar7 = auVar18._8_8_ * 2;
    auVar19._8_8_ = lVar7;
    auVar19._0_8_ = lVar6;
    iVar46 = -(uint)((int)lVar6 < 0);
    auVar19 = auVar19 ^ auVar49 & _bsaes_const._304_16_;
    auVar48 = *param_1;
    auVar32._4_4_ = iVar46;
    auVar32._0_4_ = -(uint)(lVar7 < 0);
    auVar32._8_4_ = -(uint)(lVar6 < 0);
    auVar32._12_4_ = iVar46;
    *(undefined1 (*) [16])(auStack_d8 + lVar5) = auVar19;
    lVar6 = auVar19._0_8_ * 2;
    lVar7 = auVar19._8_8_ * 2;
    auVar20._8_8_ = lVar7;
    auVar20._0_8_ = lVar6;
    iVar46 = -(uint)((int)lVar6 < 0);
    auVar20 = auVar20 ^ auVar32 & _bsaes_const._304_16_;
    uVar14 = *(ulong *)param_1[1];
    auVar47 = auVar47 ^ auVar48;
    auVar33._4_4_ = iVar46;
    auVar33._0_4_ = -(uint)(lVar7 < 0);
    auVar33._8_4_ = -(uint)(lVar6 < 0);
    auVar33._12_4_ = iVar46;
    *(undefined1 (*) [16])(auStack_c8 + lVar5) = auVar20;
    lVar6 = auVar20._0_8_ * 2;
    lVar7 = auVar20._8_8_ * 2;
    auVar21._8_8_ = lVar7;
    auVar21._0_8_ = lVar6;
    iVar46 = -(uint)((int)lVar6 < 0);
    auVar21 = auVar21 ^ auVar33 & _bsaes_const._304_16_;
    uVar15 = *(ulong *)param_1[2];
    auVar34._4_4_ = iVar46;
    auVar34._0_4_ = -(uint)(lVar7 < 0);
    auVar34._8_4_ = -(uint)(lVar6 < 0);
    auVar34._12_4_ = iVar46;
    *(undefined1 (*) [16])((long)auStack_b8 + lVar5) = auVar21;
    lVar6 = auVar21._0_8_ * 2;
    lVar7 = auVar21._8_8_ * 2;
    auVar22._8_8_ = lVar7;
    auVar22._0_8_ = lVar6;
    iVar46 = -(uint)((int)lVar6 < 0);
    auVar22 = auVar22 ^ auVar34 & _bsaes_const._304_16_;
    auVar48 = param_1[3];
    auVar35._4_4_ = iVar46;
    auVar35._0_4_ = -(uint)(lVar7 < 0);
    auVar35._8_4_ = -(uint)(lVar6 < 0);
    auVar35._12_4_ = iVar46;
    *(undefined1 (*) [16])(auStack_a8 + lVar5) = auVar22;
    lVar6 = auVar22._0_8_ * 2;
    lVar7 = auVar22._8_8_ * 2;
    in_XMM5._8_8_ = lVar7;
    in_XMM5._0_8_ = lVar6;
    iVar46 = -(uint)((int)lVar6 < 0);
    in_XMM5 = in_XMM5 ^ auVar35 & _bsaes_const._304_16_;
    auVar49 = param_1[4];
    auVar20 = auVar20 ^ auVar48;
    auVar36._4_4_ = iVar46;
    auVar36._0_4_ = -(uint)(lVar7 < 0);
    auVar36._8_4_ = -(uint)(lVar6 < 0);
    auVar36._12_4_ = iVar46;
    *(undefined1 (*) [16])(auStack_98 + lVar5) = in_XMM5;
    auVar23._8_8_ = in_XMM5._8_8_ * 2;
    auVar23._0_8_ = in_XMM5._0_8_ * 2;
    auVar23 = auVar23 ^ auVar36 & _bsaes_const._304_16_;
    auVar21 = auVar21 ^ auVar49;
    auVar48 = param_1[6];
    auVar22 = auVar22 ^ param_1[5];
    auVar49 = param_1[7];
    param_1 = param_1 + 8;
    *(undefined1 (*) [16])(auStack_88 + lVar5) = auVar23;
    in_XMM5 = in_XMM5 ^ auVar48;
    auVar23 = auVar23 ^ auVar49;
    *(undefined8 *)((long)&uStack_100 + lVar5) = 0x102505;
    auVar48 = _bsaes_decrypt8(auVar18._0_8_ ^ uVar14,auVar19._0_8_ ^ uVar15);
    uVar14 = *(ulong *)((long)auStack_e8 + lVar5);
    uVar15 = *(ulong *)((long)auStack_e8 + lVar5 + 8);
    *param_2 = auVar47 ^ *(undefined1 (*) [16])(auStack_f8 + lVar5);
    in_XMM5 = in_XMM5 ^ *(undefined1 (*) [16])(auStack_d8 + lVar5);
    *(ulong *)param_2[1] = auVar48._0_8_ ^ uVar14;
    *(ulong *)(param_2[1] + 8) = extraout_XMM0_Qb ^ uVar15;
    auVar47 = *(undefined1 (*) [16])(auStack_c8 + lVar5);
    param_2[2] = in_XMM5;
    uVar14 = *(ulong *)((long)auStack_b8 + lVar5);
    uVar15 = *(ulong *)((long)auStack_b8 + lVar5 + 8);
    param_2[3] = auVar21 ^ auVar47;
    auVar47 = *(undefined1 (*) [16])(auStack_a8 + lVar5);
    *(ulong *)param_2[4] = auVar48._8_8_ ^ uVar14;
    *(ulong *)(param_2[4] + 8) = extraout_XMM1_Qb ^ uVar15;
    auVar48 = *(undefined1 (*) [16])(auStack_98 + lVar5);
    param_2[5] = auVar23 ^ auVar47;
    auVar47 = *(undefined1 (*) [16])(auStack_88 + lVar5);
    param_2[6] = auVar20 ^ auVar48;
    param_2[7] = auVar22 ^ auVar47;
    param_2 = param_2 + 8;
    auVar47 = *(undefined1 (*) [16])(auStack_88 + lVar5);
    iVar46 = -(uint)(auVar47._0_4_ < 0);
    auVar37._4_4_ = iVar46;
    auVar37._0_4_ = -(uint)(auVar47._12_4_ < 0);
    auVar37._8_4_ = -(uint)(auVar47._4_4_ < 0);
    auVar37._12_4_ = iVar46;
    lVar6 = auVar47._0_8_ * 2;
    lVar7 = auVar47._8_8_ * 2;
    auVar47._8_8_ = lVar7;
    auVar47._0_8_ = lVar6;
    iVar46 = (int)lVar6;
    bVar3 = lVar6 < 0;
    bVar4 = lVar7 < 0;
    auVar47 = auVar47 ^ auVar37 & _bsaes_const._304_16_;
    uVar14 = uVar10;
  }
  if (uVar10 != 0xffffffffffffff80) {
    auVar38._4_4_ = iVar46;
    auVar38._0_4_ = -(uint)bVar4;
    auVar38._8_4_ = -(uint)bVar3;
    auVar38._12_4_ = iVar46;
    *(undefined1 (*) [16])(auStack_f8 + lVar5) = auVar47;
    lVar6 = auVar47._0_8_ * 2;
    lVar7 = auVar47._8_8_ * 2;
    auVar24._8_8_ = lVar7;
    auVar24._0_8_ = lVar6;
    iVar46 = -(uint)((int)lVar6 < 0);
    auVar24 = auVar24 ^ auVar38 & _bsaes_const._304_16_;
    auVar39._4_4_ = iVar46;
    auVar39._0_4_ = -(uint)(lVar7 < 0);
    auVar39._8_4_ = -(uint)(lVar6 < 0);
    auVar39._12_4_ = iVar46;
    *(undefined1 (*) [16])((long)auStack_e8 + lVar5) = auVar24;
    uVar14 = auVar24._0_8_;
    lVar6 = uVar14 * 2;
    lVar7 = auVar24._8_8_ * 2;
    auVar25._8_8_ = lVar7;
    auVar25._0_8_ = lVar6;
    iVar46 = -(uint)((int)lVar6 < 0);
    auVar25 = auVar25 ^ auVar39 & _bsaes_const._304_16_;
    auVar48 = *param_1;
    uVar15 = auVar25._0_8_;
    if (uVar10 == 0xffffffffffffff90) {
      local_58[0] = auVar48 ^ auVar47;
      param_1 = param_1 + 1;
      *(undefined8 *)((long)&uStack_100 + lVar5) = 0x102a0f;
      asm_AES_decrypt(local_58,local_58,param_4);
      *param_2 = auVar47 ^ local_58[0];
      param_2 = param_2 + 1;
      auVar47 = *(undefined1 (*) [16])((long)auStack_e8 + lVar5);
    }
    else {
      auVar40._4_4_ = iVar46;
      auVar40._0_4_ = -(uint)(lVar7 < 0);
      auVar40._8_4_ = -(uint)(lVar6 < 0);
      auVar40._12_4_ = iVar46;
      *(undefined1 (*) [16])(auStack_d8 + lVar5) = auVar25;
      lVar6 = uVar15 * 2;
      lVar7 = auVar25._8_8_ * 2;
      auVar26._8_8_ = lVar7;
      auVar26._0_8_ = lVar6;
      iVar46 = -(uint)((int)lVar6 < 0);
      auVar26 = auVar26 ^ auVar40 & _bsaes_const._304_16_;
      uVar8 = *(ulong *)param_1[1];
      uVar16 = auVar26._0_8_;
      if (uVar10 == 0xffffffffffffffa0) {
        auVar47 = auVar47 ^ auVar48;
        param_1 = param_1 + 2;
        *(undefined8 *)((long)&uStack_100 + lVar5) = 0x1029bf;
        uVar15 = _bsaes_decrypt8(uVar14 ^ uVar8,uVar15);
        uVar14 = *(ulong *)((long)auStack_e8 + lVar5);
        uVar10 = *(ulong *)((long)auStack_e8 + lVar5 + 8);
        *param_2 = auVar47 ^ *(undefined1 (*) [16])(auStack_f8 + lVar5);
        *(ulong *)param_2[1] = uVar15 ^ uVar14;
        *(ulong *)(param_2[1] + 8) = extraout_XMM0_Qb_05 ^ uVar10;
        param_2 = param_2 + 2;
        auVar47 = *(undefined1 (*) [16])(auStack_d8 + lVar5);
      }
      else {
        auVar47 = auVar47 ^ auVar48;
        auVar41._4_4_ = iVar46;
        auVar41._0_4_ = -(uint)(lVar7 < 0);
        auVar41._8_4_ = -(uint)(lVar6 < 0);
        auVar41._12_4_ = iVar46;
        *(undefined1 (*) [16])(auStack_c8 + lVar5) = auVar26;
        lVar6 = uVar16 * 2;
        lVar7 = auVar26._8_8_ * 2;
        auVar27._8_8_ = lVar7;
        auVar27._0_8_ = lVar6;
        iVar46 = -(uint)((int)lVar6 < 0);
        auVar27 = auVar27 ^ auVar41 & _bsaes_const._304_16_;
        uVar9 = *(ulong *)param_1[2];
        if (uVar10 == 0xffffffffffffffb0) {
          param_1 = param_1 + 3;
          *(undefined8 *)((long)&uStack_100 + lVar5) = 0x10295f;
          uVar15 = _bsaes_decrypt8(uVar14 ^ uVar8,uVar15 ^ uVar9);
          uVar14 = *(ulong *)((long)auStack_e8 + lVar5);
          uVar10 = *(ulong *)((long)auStack_e8 + lVar5 + 8);
          *param_2 = auVar47 ^ *(undefined1 (*) [16])(auStack_f8 + lVar5);
          auVar47 = *(undefined1 (*) [16])(auStack_d8 + lVar5);
          *(ulong *)param_2[1] = uVar15 ^ uVar14;
          *(ulong *)(param_2[1] + 8) = extraout_XMM0_Qb_04 ^ uVar10;
          param_2[2] = in_XMM5 ^ auVar47;
          param_2 = param_2 + 3;
          auVar47 = *(undefined1 (*) [16])(auStack_c8 + lVar5);
        }
        else {
          uVar14 = uVar14 ^ uVar8;
          auVar42._4_4_ = iVar46;
          auVar42._0_4_ = -(uint)(lVar7 < 0);
          auVar42._8_4_ = -(uint)(lVar6 < 0);
          auVar42._12_4_ = iVar46;
          *(undefined1 (*) [16])((long)auStack_b8 + lVar5) = auVar27;
          lVar6 = auVar27._0_8_ * 2;
          lVar7 = auVar27._8_8_ * 2;
          auVar28._8_8_ = lVar7;
          auVar28._0_8_ = lVar6;
          iVar46 = -(uint)((int)lVar6 < 0);
          auVar28 = auVar28 ^ auVar42 & _bsaes_const._304_16_;
          auVar48 = param_1[3];
          uVar17 = auVar28._0_8_;
          uVar8 = auVar48._0_8_;
          if (uVar10 == 0xffffffffffffffc0) {
            param_1 = param_1 + 4;
            *(undefined8 *)((long)&uStack_100 + lVar5) = 0x1028ff;
            uVar15 = _bsaes_decrypt8(uVar14,uVar15 ^ uVar9,uVar16 ^ uVar8);
            uVar14 = *(ulong *)((long)auStack_e8 + lVar5);
            uVar10 = *(ulong *)((long)auStack_e8 + lVar5 + 8);
            *param_2 = auVar47 ^ *(undefined1 (*) [16])(auStack_f8 + lVar5);
            auVar47 = *(undefined1 (*) [16])(auStack_d8 + lVar5);
            *(ulong *)param_2[1] = uVar15 ^ uVar14;
            *(ulong *)(param_2[1] + 8) = extraout_XMM0_Qb_03 ^ uVar10;
            auVar48 = *(undefined1 (*) [16])(auStack_c8 + lVar5);
            param_2[2] = in_XMM5 ^ auVar47;
            param_2[3] = auVar27 ^ auVar48;
            param_2 = param_2 + 4;
            auVar47 = *(undefined1 (*) [16])((long)auStack_b8 + lVar5);
          }
          else {
            uVar15 = uVar15 ^ uVar9;
            auVar43._4_4_ = iVar46;
            auVar43._0_4_ = -(uint)(lVar7 < 0);
            auVar43._8_4_ = -(uint)(lVar6 < 0);
            auVar43._12_4_ = iVar46;
            *(undefined1 (*) [16])(auStack_a8 + lVar5) = auVar28;
            lVar6 = uVar17 * 2;
            lVar7 = auVar28._8_8_ * 2;
            auVar29._8_8_ = lVar7;
            auVar29._0_8_ = lVar6;
            iVar46 = -(uint)((int)lVar6 < 0);
            auVar29 = auVar29 ^ auVar43 & _bsaes_const._304_16_;
            auVar49 = param_1[4];
            if (uVar10 == 0xffffffffffffffd0) {
              param_1 = param_1 + 5;
              auVar27 = auVar27 ^ auVar49;
              *(undefined8 *)((long)&uStack_100 + lVar5) = 0x10288f;
              auVar49 = _bsaes_decrypt8(uVar14,uVar15,uVar16 ^ uVar8,auVar27._0_8_,uVar17);
              uVar14 = *(ulong *)((long)auStack_e8 + lVar5);
              uVar10 = *(ulong *)((long)auStack_e8 + lVar5 + 8);
              *param_2 = auVar47 ^ *(undefined1 (*) [16])(auStack_f8 + lVar5);
              auVar47 = *(undefined1 (*) [16])(auStack_d8 + lVar5);
              *(ulong *)param_2[1] = auVar49._0_8_ ^ uVar14;
              *(ulong *)(param_2[1] + 8) = extraout_XMM0_Qb_02 ^ uVar10;
              auVar48 = *(undefined1 (*) [16])(auStack_c8 + lVar5);
              param_2[2] = in_XMM5 ^ auVar47;
              uVar14 = *(ulong *)((long)auStack_b8 + lVar5);
              uVar10 = *(ulong *)((long)auStack_b8 + lVar5 + 8);
              param_2[3] = auVar27 ^ auVar48;
              *(ulong *)param_2[4] = auVar49._8_8_ ^ uVar14;
              *(ulong *)(param_2[4] + 8) = extraout_XMM1_Qb_02 ^ uVar10;
              param_2 = param_2 + 5;
              auVar47 = *(undefined1 (*) [16])(auStack_a8 + lVar5);
            }
            else {
              auVar26 = auVar26 ^ auVar48;
              auVar44._4_4_ = iVar46;
              auVar44._0_4_ = -(uint)(lVar7 < 0);
              auVar44._8_4_ = -(uint)(lVar6 < 0);
              auVar44._12_4_ = iVar46;
              *(undefined1 (*) [16])(auStack_98 + lVar5) = auVar29;
              auVar30._8_8_ = auVar29._8_8_ * 2;
              auVar30._0_8_ = auVar29._0_8_ * 2;
              auVar30 = auVar30 ^ auVar44 & _bsaes_const._304_16_;
              uVar8 = *(ulong *)param_1[5];
              if (uVar10 == 0xffffffffffffffe0) {
                auVar27 = auVar27 ^ auVar49;
                param_1 = param_1 + 6;
                *(undefined8 *)((long)&uStack_100 + lVar5) = 0x10280f;
                auVar49 = _bsaes_decrypt8(uVar14,uVar15,auVar26._0_8_,auVar27._0_8_,uVar17 ^ uVar8);
                uVar14 = *(ulong *)((long)auStack_e8 + lVar5);
                uVar10 = *(ulong *)((long)auStack_e8 + lVar5 + 8);
                *param_2 = auVar47 ^ *(undefined1 (*) [16])(auStack_f8 + lVar5);
                auVar47 = *(undefined1 (*) [16])(auStack_d8 + lVar5);
                *(ulong *)param_2[1] = auVar49._0_8_ ^ uVar14;
                *(ulong *)(param_2[1] + 8) = extraout_XMM0_Qb_01 ^ uVar10;
                auVar48 = *(undefined1 (*) [16])(auStack_c8 + lVar5);
                param_2[2] = auVar29 ^ auVar47;
                uVar14 = *(ulong *)((long)auStack_b8 + lVar5);
                uVar10 = *(ulong *)((long)auStack_b8 + lVar5 + 8);
                param_2[3] = auVar27 ^ auVar48;
                auVar47 = *(undefined1 (*) [16])(auStack_a8 + lVar5);
                *(ulong *)param_2[4] = auVar49._8_8_ ^ uVar14;
                *(ulong *)(param_2[4] + 8) = extraout_XMM1_Qb_01 ^ uVar10;
                param_2[5] = auVar30 ^ auVar47;
                param_2 = param_2 + 6;
                auVar47 = *(undefined1 (*) [16])(auStack_98 + lVar5);
              }
              else {
                auVar27 = auVar27 ^ auVar49;
                auVar48 = param_1[6];
                *(undefined1 (*) [16])(auStack_88 + lVar5) = auVar30;
                param_1 = param_1 + 7;
                auVar29 = auVar29 ^ auVar48;
                *(undefined8 *)((long)&uStack_100 + lVar5) = 0x10277f;
                auVar49 = _bsaes_decrypt8(uVar14,uVar15,auVar26._0_8_,auVar27._0_8_,uVar17 ^ uVar8);
                uVar14 = *(ulong *)((long)auStack_e8 + lVar5);
                uVar10 = *(ulong *)((long)auStack_e8 + lVar5 + 8);
                *param_2 = auVar47 ^ *(undefined1 (*) [16])(auStack_f8 + lVar5);
                auVar47 = *(undefined1 (*) [16])(auStack_d8 + lVar5);
                *(ulong *)param_2[1] = auVar49._0_8_ ^ uVar14;
                *(ulong *)(param_2[1] + 8) = extraout_XMM0_Qb_00 ^ uVar10;
                auVar48 = *(undefined1 (*) [16])(auStack_c8 + lVar5);
                param_2[2] = auVar29 ^ auVar47;
                uVar14 = *(ulong *)((long)auStack_b8 + lVar5);
                uVar10 = *(ulong *)((long)auStack_b8 + lVar5 + 8);
                param_2[3] = auVar27 ^ auVar48;
                auVar47 = *(undefined1 (*) [16])(auStack_a8 + lVar5);
                *(ulong *)param_2[4] = auVar49._8_8_ ^ uVar14;
                *(ulong *)(param_2[4] + 8) = extraout_XMM1_Qb_00 ^ uVar10;
                auVar48 = *(undefined1 (*) [16])(auStack_98 + lVar5);
                param_2[5] = auVar30 ^ auVar47;
                param_2[6] = auVar26 ^ auVar48;
                param_2 = param_2 + 7;
                auVar47 = *(undefined1 (*) [16])(auStack_88 + lVar5);
              }
            }
          }
        }
      }
    }
  }
  uVar13 = (uint)param_3 & 0xf;
  pauVar12 = (undefined1 (*) [16])(auStack_f8 + lVar5);
  if ((param_3 & 0xf) != 0) {
    iVar46 = -(uint)(auVar47._0_4_ < 0);
    auVar45._4_4_ = iVar46;
    auVar45._0_4_ = -(uint)(auVar47._12_4_ < 0);
    auVar45._8_4_ = -(uint)(auVar47._4_4_ < 0);
    auVar45._12_4_ = iVar46;
    auVar31._8_8_ = auVar47._8_8_ * 2;
    auVar31._0_8_ = auVar47._0_8_ * 2;
    auVar31 = auVar31 ^ auVar45 & _bsaes_const._304_16_;
    local_58[0] = *param_1 ^ auVar31;
    *(undefined8 *)((long)&uStack_100 + lVar5) = 0x102a7a;
    asm_AES_decrypt(local_58,local_58,param_4);
    *param_2 = auVar31 ^ local_58[0];
    pauVar12 = param_2;
    do {
      pauVar1 = param_1 + 1;
      uVar2 = (*pauVar12)[0];
      param_1 = (undefined1 (*) [16])(*param_1 + 1);
      (*pauVar12)[0] = (*pauVar1)[0];
      pauVar12[1][0] = uVar2;
      pauVar12 = (undefined1 (*) [16])(*pauVar12 + 1);
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    local_58[0] = *param_2 ^ auVar47;
    *(undefined8 *)((long)&uStack_100 + lVar5) = 0x102ac5;
    asm_AES_decrypt(local_58,local_58,param_4);
    *param_2 = auVar47 ^ local_58[0];
    pauVar12 = (undefined1 (*) [16])(auStack_f8 + lVar5);
  }
  do {
    *pauVar12 = (undefined1  [16])0x0;
    pauVar12[1] = (undefined1  [16])0x0;
    pauVar12 = pauVar12 + 2;
  } while (pauVar12 < (undefined1 (*) [16])local_78);
  return;
}



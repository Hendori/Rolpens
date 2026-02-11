
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
aesni_gcm_decrypt(undefined1 (*param_1) [16],long param_2,ulong param_3,long param_4,
                 undefined8 *param_5,undefined1 (*param_6) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 (*pauVar8) [16];
  undefined8 uVar9;
  undefined1 (*pauVar10) [16];
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined8 in_XMM9_Qa;
  undefined8 in_XMM9_Qb;
  undefined8 in_XMM10_Qa;
  undefined8 in_XMM10_Qb;
  undefined8 in_XMM11_Qa;
  undefined8 in_XMM11_Qb;
  undefined8 in_XMM12_Qa;
  undefined8 in_XMM12_Qb;
  undefined8 in_XMM13_Qa;
  undefined8 in_XMM13_Qb;
  undefined8 in_XMM14_Qa;
  undefined8 in_XMM14_Qb;
  undefined1 auStack_100 [80];
  undefined1 local_b0 [128];
  
  uVar9 = 0;
  if (0x5f < param_3) {
    uVar6 = *param_5;
    pauVar10 = (undefined1 (*) [16])&DAT_00100c80;
    pauVar8 = param_6 + 4;
    auVar13 = vpshufb_avx(*param_6,_DAT_00100c80);
    uVar11 = param_4 - 0x80U & 0xf80;
    uVar12 = ((ulong)local_b0 & 0xf80) - uVar11;
    puVar7 = auStack_100;
    if ((uVar11 <= ((ulong)local_b0 & 0xf80)) && (puVar7 = auStack_100, uVar12 < 0x300)) {
      puVar7 = auStack_100 + -uVar12;
    }
    uVar9 = 0;
    auVar1 = param_1[2];
    vpshufb_avx(param_1[5],_DAT_00100c80);
    auVar2 = param_1[1];
    auVar4 = vpshufb_avx(param_1[4],_DAT_00100c80);
    auVar3 = *param_1;
    auVar5 = vpshufb_avx(param_1[3],_DAT_00100c80);
    *(undefined1 (*) [16])(puVar7 + 0x30) = auVar4;
    auVar1 = vpshufb_avx(auVar1,_DAT_00100c80);
    *(undefined1 (*) [16])(puVar7 + 0x40) = auVar5;
    auVar2 = vpshufb_avx(auVar2,_DAT_00100c80);
    *(undefined1 (*) [16])(puVar7 + 0x50) = auVar1;
    auVar1 = vpshufb_avx(auVar3,_DAT_00100c80);
    *(undefined1 (*) [16])(puVar7 + 0x60) = auVar2;
    *(undefined1 (*) [16])(puVar7 + 0x70) = auVar1;
    *(undefined8 *)(puVar7 + -8) = 0x100665;
    _aesni_ctr32_ghash_6x(SUB168(_DAT_00100c80,0),uVar6,param_1,param_2,param_3 >> 4);
    *(undefined8 *)(param_2 + -0x60) = in_XMM9_Qa;
    *(undefined8 *)(param_2 + -0x58) = in_XMM9_Qb;
    *(undefined8 *)(param_2 + -0x50) = in_XMM10_Qa;
    *(undefined8 *)(param_2 + -0x48) = in_XMM10_Qb;
    *(undefined8 *)(param_2 + -0x40) = in_XMM11_Qa;
    *(undefined8 *)(param_2 + -0x38) = in_XMM11_Qb;
    *(undefined8 *)(param_2 + -0x30) = in_XMM12_Qa;
    *(undefined8 *)(param_2 + -0x28) = in_XMM12_Qb;
    *(undefined8 *)(param_2 + -0x20) = in_XMM13_Qa;
    *(undefined8 *)(param_2 + -0x18) = in_XMM13_Qb;
    *(undefined8 *)(param_2 + -0x10) = in_XMM14_Qa;
    *(undefined8 *)(param_2 + -8) = in_XMM14_Qb;
    auVar13 = vpshufb_avx(auVar13,*pauVar10);
    pauVar8[-4] = auVar13;
  }
  return uVar9;
}



/* WARNING: Removing unreachable block (ram,0x00100ba9) */
/* WARNING: Removing unreachable block (ram,0x00100b5d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
aesni_gcm_encrypt(undefined8 param_1,long param_2,ulong param_3,long param_4,undefined8 *param_5,
                 undefined1 (*param_6) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
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
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  ulong uVar76;
  ulong uVar77;
  undefined1 *puVar78;
  undefined1 (*pauVar79) [16];
  undefined8 uVar80;
  undefined1 (*pauVar81) [16];
  ulong uVar82;
  ulong uVar83;
  undefined1 auVar84 [64];
  undefined1 auVar85 [64];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 in_ZMM9 [64];
  undefined1 in_ZMM10 [64];
  undefined1 auVar93 [16];
  undefined1 in_ZMM11 [64];
  undefined1 auVar94 [16];
  undefined1 in_ZMM12 [64];
  undefined1 in_ZMM13 [64];
  undefined1 auVar95 [16];
  undefined1 in_ZMM14 [64];
  undefined1 auStack_100 [80];
  undefined1 auStack_b0 [128];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  
  uVar80 = 0;
  if (0x11f < param_3) {
    auVar91 = in_ZMM9._0_16_;
    auVar86 = in_ZMM10._0_16_;
    auVar93 = in_ZMM11._0_16_;
    auVar94 = in_ZMM12._0_16_;
    auVar88 = in_ZMM13._0_16_;
    auVar95 = in_ZMM14._0_16_;
    uVar80 = *param_5;
    pauVar81 = (undefined1 (*) [16])&DAT_00100c80;
    uVar82 = param_4 - 0x80U & 0xf80;
    uVar83 = ((ulong)auStack_b0 & 0xf80) - uVar82;
    puVar78 = auStack_100;
    if ((uVar82 <= ((ulong)auStack_b0 & 0xf80)) && (puVar78 = auStack_100, uVar83 < 0x300)) {
      puVar78 = auStack_100 + -uVar83;
    }
    *(undefined8 *)(puVar78 + -8) = 0x1008be;
    auVar84._0_8_ = _aesni_ctr32_6x(_DAT_00100c80,uVar80,param_1,param_2,param_3 >> 4);
    auVar84._8_56_ = extraout_var;
    auVar92 = auVar84._0_16_;
    auVar87 = vpshufb_avx(auVar91,auVar92);
    auVar1 = vpshufb_avx(auVar86,auVar92);
    *(undefined1 (*) [16])(puVar78 + 0x70) = auVar87;
    auVar87 = vpshufb_avx(auVar93,auVar92);
    *(undefined1 (*) [16])(puVar78 + 0x60) = auVar1;
    auVar1 = vpshufb_avx(auVar94,auVar92);
    *(undefined1 (*) [16])(puVar78 + 0x50) = auVar87;
    auVar87 = vpshufb_avx(auVar88,auVar92);
    *(undefined1 (*) [16])(puVar78 + 0x40) = auVar1;
    vpshufb_avx(auVar95,auVar92);
    *(undefined1 (*) [16])(puVar78 + 0x30) = auVar87;
    *(undefined8 *)(puVar78 + -8) = 0x1008ff;
    auVar85._0_8_ = _aesni_ctr32_6x();
    auVar85._8_56_ = extraout_var_00;
    pauVar79 = param_6 + 4;
    uVar80 = 0xc0;
    auVar92 = vpshufb_avx(*param_6,auVar85._0_16_);
    *(undefined8 *)(puVar78 + -8) = 0x10091d;
    _aesni_ctr32_ghash_6x();
    auVar87 = *(undefined1 (*) [16])(puVar78 + 0x20);
    auVar1 = *pauVar81;
    uVar82 = *(ulong *)pauVar79[-2];
    uVar83 = *(ulong *)(pauVar79[-2] + 8);
    auVar2 = vpunpckhqdq_avx(auVar87,auVar87);
    uVar76 = *(ulong *)*pauVar79;
    uVar77 = *(ulong *)(*pauVar79 + 8);
    *(undefined1 (*) [16])(param_2 + -0x60) = auVar91;
    auVar91 = vpshufb_avx(auVar91,auVar1);
    *(undefined1 (*) [16])(param_2 + -0x50) = auVar86;
    auVar86 = vpshufb_avx(auVar86,auVar1);
    *(undefined1 (*) [16])(param_2 + -0x40) = auVar93;
    auVar93 = vpshufb_avx(auVar93,auVar1);
    *(undefined1 (*) [16])(param_2 + -0x30) = auVar94;
    auVar94 = vpshufb_avx(auVar94,auVar1);
    *(undefined1 (*) [16])(param_2 + -0x20) = auVar88;
    auVar88 = vpshufb_avx(auVar88,auVar1);
    *(undefined1 (*) [16])(param_2 + -0x10) = auVar95;
    auVar95 = vpshufb_avx(auVar95,auVar1);
    *(undefined1 (*) [16])(puVar78 + 0x10) = auVar91;
    auVar91 = *(undefined1 (*) [16])(puVar78 + 0x30);
    auVar1 = vpunpckhqdq_avx(auVar91,auVar91);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = auVar87._0_8_;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar82;
    auVar4 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar5 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar4 = auVar4 ^ auVar23 << uVar3;
      }
    }
    auVar49._8_8_ = 0;
    auVar49._0_8_ = auVar87._8_8_;
    auVar60._8_8_ = 0;
    auVar60._0_8_ = uVar83;
    auVar5 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar49 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar5 = auVar5 ^ auVar60 << uVar3;
      }
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = SUB168(auVar2 ^ auVar87,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar76;
    auVar87 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar6 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar87 = auVar87 ^ auVar2 << uVar3;
      }
    }
    auVar2 = *(undefined1 (*) [16])(puVar78 + 0x40);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = auVar91._0_8_;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = *(ulong *)pauVar79[-1];
    auVar23 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar7 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar23 = auVar23 ^ auVar24 << uVar3;
      }
    }
    auVar49 = vpunpckhqdq_avx(auVar2,auVar2);
    auVar50._8_8_ = 0;
    auVar50._0_8_ = auVar91._8_8_;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = *(ulong *)(pauVar79[-1] + 8);
    auVar60 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar50 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar60 = auVar60 ^ auVar61 << uVar3;
      }
    }
    auVar40._8_8_ = 0;
    auVar40._0_8_ = SUB168(auVar1 ^ auVar91,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar77;
    auVar91 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar40 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar91 = auVar91 ^ auVar1 << uVar3;
      }
    }
    auVar1 = *(undefined1 (*) [16])(puVar78 + 0x50);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = auVar2._0_8_;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = *(ulong *)pauVar79[1];
    auVar6 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar8 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar6 = auVar6 ^ auVar25 << uVar3;
      }
    }
    auVar7 = vpunpckhqdq_avx(auVar1,auVar1);
    auVar51._8_8_ = 0;
    auVar51._0_8_ = auVar2._8_8_;
    auVar62._8_8_ = 0;
    auVar62._0_8_ = *(ulong *)(pauVar79[1] + 8);
    auVar24 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar51 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar24 = auVar24 ^ auVar62 << uVar3;
      }
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = SUB168(auVar49 ^ auVar2,0);
    auVar26._8_8_ = 0;
    auVar26._0_8_ = *(ulong *)pauVar79[3];
    auVar2 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar9 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar2 = auVar2 ^ auVar26 << uVar3;
      }
    }
    auVar49 = *(undefined1 (*) [16])(puVar78 + 0x60);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = auVar1._0_8_;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = *(ulong *)pauVar79[2];
    auVar50 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar10 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar50 = auVar50 ^ auVar27 << uVar3;
      }
    }
    auVar61 = vpunpckhqdq_avx(auVar49,auVar49);
    auVar52._8_8_ = 0;
    auVar52._0_8_ = auVar1._8_8_;
    auVar63._8_8_ = 0;
    auVar63._0_8_ = *(ulong *)(pauVar79[2] + 8);
    auVar40 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar52 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar40 = auVar40 ^ auVar63 << uVar3;
      }
    }
    auVar41._8_8_ = 0;
    auVar41._0_8_ = SUB168(auVar7 ^ auVar1,0);
    auVar44._8_8_ = 0;
    auVar44._0_8_ = *(ulong *)(pauVar79[3] + 8);
    auVar1 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar41 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar1 = auVar1 ^ auVar44 << uVar3;
      }
    }
    auVar92 = auVar92 ^ *(undefined1 (*) [16])(puVar78 + 0x70);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = auVar49._0_8_;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = *(ulong *)pauVar79[4];
    auVar7 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar11 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar7 = auVar7 ^ auVar28 << uVar3;
      }
    }
    auVar8 = vpunpckhqdq_avx(auVar92,auVar92);
    auVar53._8_8_ = 0;
    auVar53._0_8_ = auVar49._8_8_;
    auVar64._8_8_ = 0;
    auVar64._0_8_ = *(ulong *)(pauVar79[4] + 8);
    auVar25 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar53 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar25 = auVar25 ^ auVar64 << uVar3;
      }
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = SUB168(auVar61 ^ auVar49,0);
    auVar29._8_8_ = 0;
    auVar29._0_8_ = *(ulong *)pauVar79[6];
    auVar49 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar12 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar49 = auVar49 ^ auVar29 << uVar3;
      }
    }
    auVar13._8_8_ = 0;
    auVar13._0_8_ = auVar92._0_8_;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = *(ulong *)pauVar79[5];
    auVar61 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar13 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar61 = auVar61 ^ auVar30 << uVar3;
      }
    }
    auVar51 = vpunpckhqdq_avx(auVar95,auVar95);
    auVar54._8_8_ = 0;
    auVar54._0_8_ = auVar92._8_8_;
    auVar65._8_8_ = 0;
    auVar65._0_8_ = *(ulong *)(pauVar79[5] + 8);
    auVar62 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar54 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar62 = auVar62 ^ auVar65 << uVar3;
      }
    }
    auVar61 = auVar61 ^ auVar7 ^ auVar50 ^ auVar6 ^ auVar23 ^ auVar4;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = SUB168(auVar8 ^ auVar92,0);
    auVar45._8_8_ = 0;
    auVar45._0_8_ = *(ulong *)(pauVar79[6] + 8);
    auVar92 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar4 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar92 = auVar92 ^ auVar45 << uVar3;
      }
    }
    auVar62 = auVar62 ^ auVar25 ^ auVar40 ^ auVar24 ^ auVar60 ^ auVar5;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = auVar95._0_8_;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = *(ulong *)pauVar79[-2];
    auVar4 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar14 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar4 = auVar4 ^ auVar31 << uVar3;
      }
    }
    auVar87 = auVar92 ^ auVar49 ^ auVar1 ^ auVar2 ^ auVar91 ^ auVar87 ^ auVar62 ^ auVar61;
    auVar91 = vpunpckhqdq_avx(auVar88,auVar88);
    auVar92._8_8_ = 0;
    auVar92._0_8_ = auVar95._8_8_;
    auVar66._8_8_ = 0;
    auVar66._0_8_ = *(ulong *)(pauVar79[-2] + 8);
    auVar1 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar92 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar1 = auVar1 ^ auVar66 << uVar3;
      }
    }
    auVar92 = vpslldq_avx(auVar87,8);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = SUB168(auVar51 ^ auVar95,0);
    auVar32._8_8_ = 0;
    auVar32._0_8_ = *(ulong *)*pauVar79;
    auVar95 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar15 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar95 = auVar95 ^ auVar32 << uVar3;
      }
    }
    auVar61 = auVar61 ^ auVar92;
    auVar87 = vpsrldq_avx(auVar87,8);
    auVar62 = auVar62 ^ auVar87;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = auVar88._0_8_;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = *(ulong *)pauVar79[-1];
    auVar87 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar16 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar87 = auVar87 ^ auVar33 << uVar3;
      }
    }
    auVar92 = vpunpckhqdq_avx(auVar94,auVar94);
    auVar55._8_8_ = 0;
    auVar55._0_8_ = auVar88._8_8_;
    auVar67._8_8_ = 0;
    auVar67._0_8_ = *(ulong *)(pauVar79[-1] + 8);
    auVar2 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar55 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar2 = auVar2 ^ auVar67 << uVar3;
      }
    }
    auVar5 = vpalignr_avx(auVar61,auVar61,8);
    auVar42._8_8_ = 0;
    auVar42._0_8_ = SUB168(auVar91 ^ auVar88,0);
    auVar88._8_8_ = 0;
    auVar88._0_8_ = *(ulong *)(*pauVar79 + 8);
    auVar91 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar42 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar91 = auVar91 ^ auVar88 << uVar3;
      }
    }
    auVar17._8_8_ = 0;
    auVar17._0_8_ = auVar94._0_8_;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = *(ulong *)pauVar79[1];
    auVar88 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar17 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar88 = auVar88 ^ auVar34 << uVar3;
      }
    }
    auVar23 = vpunpckhqdq_avx(auVar93,auVar93);
    auVar56._8_8_ = 0;
    auVar56._0_8_ = auVar94._8_8_;
    auVar68._8_8_ = 0;
    auVar68._0_8_ = *(ulong *)(pauVar79[1] + 8);
    auVar49 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar56 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar49 = auVar49 ^ auVar68 << uVar3;
      }
    }
    auVar18._8_8_ = 0;
    auVar18._0_8_ = SUB168(auVar92 ^ auVar94,0);
    auVar35._8_8_ = 0;
    auVar35._0_8_ = *(ulong *)pauVar79[3];
    auVar94 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar18 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar94 = auVar94 ^ auVar35 << uVar3;
      }
    }
    auVar72._8_8_ = 0;
    auVar72._0_8_ = auVar61._0_8_;
    auVar74._8_8_ = 0;
    auVar74._0_8_ = *(ulong *)(pauVar81[1] + 8);
    auVar92 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar72 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar92 = auVar92 ^ auVar74 << uVar3;
      }
    }
    auVar89._0_8_ = CONCAT44(auVar92._4_4_ ^ auVar5._4_4_,auVar92._0_4_ ^ auVar5._0_4_);
    auVar89._8_4_ = auVar92._8_4_ ^ auVar5._8_4_;
    auVar89._12_4_ = auVar92._12_4_ ^ auVar5._12_4_;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = auVar93._0_8_;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = *(ulong *)pauVar79[2];
    auVar92 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar19 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar92 = auVar92 ^ auVar36 << uVar3;
      }
    }
    auVar5 = vpunpckhqdq_avx(auVar86,auVar86);
    auVar57._8_8_ = 0;
    auVar57._0_8_ = auVar93._8_8_;
    auVar69._8_8_ = 0;
    auVar69._0_8_ = *(ulong *)(pauVar79[2] + 8);
    auVar60 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar57 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar60 = auVar60 ^ auVar69 << uVar3;
      }
    }
    auVar6 = vpalignr_avx(auVar89,auVar89,8);
    auVar43._8_8_ = 0;
    auVar43._0_8_ = SUB168(auVar23 ^ auVar93,0);
    auVar46._8_8_ = 0;
    auVar46._0_8_ = *(ulong *)(pauVar79[3] + 8);
    auVar93 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar43 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar93 = auVar93 ^ auVar46 << uVar3;
      }
    }
    auVar73._8_8_ = 0;
    auVar73._0_8_ = auVar89._0_8_;
    auVar75._8_8_ = 0;
    auVar75._0_8_ = *(ulong *)(pauVar81[1] + 8);
    auVar23 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar73 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar23 = auVar23 ^ auVar75 << uVar3;
      }
    }
    auVar90._0_8_ =
         CONCAT44(auVar23._4_4_ ^ auVar6._4_4_ ^ auVar62._4_4_ ^ *(uint *)(puVar78 + 0x14),
                  auVar23._0_4_ ^ auVar6._0_4_ ^ auVar62._0_4_ ^ *(uint *)(puVar78 + 0x10));
    auVar90._8_4_ = auVar23._8_4_ ^ auVar6._8_4_ ^ auVar62._8_4_ ^ *(uint *)(puVar78 + 0x18);
    auVar90._12_4_ = auVar23._12_4_ ^ auVar6._12_4_ ^ auVar62._12_4_ ^ *(uint *)(puVar78 + 0x1c);
    auVar20._8_8_ = 0;
    auVar20._0_8_ = auVar86._0_8_;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = *(ulong *)pauVar79[4];
    auVar23 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar20 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar23 = auVar23 ^ auVar37 << uVar3;
      }
    }
    auVar6 = vpunpckhqdq_avx(auVar90,auVar90);
    auVar58._8_8_ = 0;
    auVar58._0_8_ = auVar86._8_8_;
    auVar70._8_8_ = 0;
    auVar70._0_8_ = *(ulong *)(pauVar79[4] + 8);
    auVar7 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar58 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar7 = auVar7 ^ auVar70 << uVar3;
      }
    }
    auVar21._8_8_ = 0;
    auVar21._0_8_ = SUB168(auVar5 ^ auVar86,0);
    auVar38._8_8_ = 0;
    auVar38._0_8_ = *(ulong *)pauVar79[6];
    auVar86 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar21 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar86 = auVar86 ^ auVar38 << uVar3;
      }
    }
    auVar22._8_8_ = 0;
    auVar22._0_8_ = auVar90._0_8_;
    auVar39._8_8_ = 0;
    auVar39._0_8_ = *(ulong *)pauVar79[5];
    auVar5 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar22 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar5 = auVar5 ^ auVar39 << uVar3;
      }
    }
    auVar59._8_8_ = 0;
    auVar59._0_8_ = auVar90._8_8_;
    auVar71._8_8_ = 0;
    auVar71._0_8_ = *(ulong *)(pauVar79[5] + 8);
    auVar24 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar59 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar24 = auVar24 ^ auVar71 << uVar3;
      }
    }
    auVar5 = auVar5 ^ auVar23 ^ auVar92 ^ auVar88 ^ auVar87 ^ auVar4;
    auVar87._8_8_ = 0;
    auVar87._0_8_ = SUB168(auVar6 ^ auVar90,0);
    auVar47._8_8_ = 0;
    auVar47._0_8_ = *(ulong *)(pauVar79[6] + 8);
    auVar88 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar87 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar88 = auVar88 ^ auVar47 << uVar3;
      }
    }
    auVar24 = auVar24 ^ auVar7 ^ auVar60 ^ auVar49 ^ auVar2 ^ auVar1;
    auVar91 = auVar88 ^ auVar86 ^ auVar93 ^ auVar94 ^ auVar91 ^ auVar95 ^ auVar24 ^ auVar5;
    auVar86 = vpslldq_avx(auVar91,8);
    auVar88 = vpsrldq_avx(auVar91,8);
    auVar5 = auVar5 ^ auVar86;
    auVar91 = vpalignr_avx(auVar5,auVar5,8);
    auVar93._8_8_ = 0;
    auVar93._0_8_ = auVar5._0_8_;
    auVar94._8_8_ = 0;
    auVar94._0_8_ = *(ulong *)(pauVar81[1] + 8);
    auVar86 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar93 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar86 = auVar86 ^ auVar94 << uVar3;
      }
    }
    auVar86 = auVar86 ^ auVar91;
    auVar91 = vpalignr_avx(auVar86,auVar86,8);
    auVar95._8_8_ = 0;
    auVar95._0_8_ = auVar86._0_8_;
    auVar48._8_8_ = 0;
    auVar48._0_8_ = *(ulong *)(pauVar81[1] + 8);
    auVar86 = (undefined1  [16])0x0;
    for (uVar3 = 0; uVar3 < 0x40; uVar3 = uVar3 + 1) {
      if ((auVar95 & (undefined1  [16])0x1 << uVar3) != (undefined1  [16])0x0) {
        auVar86 = auVar86 ^ auVar48 << uVar3;
      }
    }
    auVar91 = vpshufb_avx(auVar86 ^ auVar91 ^ auVar24 ^ auVar88,*pauVar81);
    pauVar79[-4] = auVar91;
  }
  return uVar80;
}



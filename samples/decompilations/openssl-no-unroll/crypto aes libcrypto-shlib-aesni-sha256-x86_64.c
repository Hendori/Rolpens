
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint aesni_cbc_sha256_enc
               (undefined1 (*param_1) [16],long param_2,long param_3,undefined1 (*param_4) [16],
               undefined1 (*param_5) [16],uint *param_6,undefined1 (*param_7) [16])

{
  uint *puVar1;
  undefined1 (*pauVar2) [16];
  code *pcVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [60];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 (*pauVar14) [32];
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  undefined1 (*pauVar20) [32];
  undefined1 (*pauVar21) [32];
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [32];
  uint uVar24;
  long lVar25;
  int iVar26;
  undefined1 (*pauVar27) [16];
  uint uVar28;
  undefined1 (*pauVar29) [16];
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  long lVar35;
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
  undefined1 in_ZMM1 [64];
  undefined1 auVar57 [64];
  undefined1 auVar58 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar59 [64];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar70 [16];
  undefined1 in_ZMM5 [64];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 in_ZMM6 [64];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [64];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [64];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [64];
  undefined1 auStack_270 [432];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  
  auVar86 = _DAT_00104480;
  if (param_1 == (undefined1 (*) [16])0x0) {
    return 1;
  }
  if ((_DAT_00105004 >> 0x3d & 1) != 0) {
    auVar85._16_48_ = in_ZMM1._16_48_;
    auVar100._16_48_ = in_ZMM2._16_48_;
    uVar15 = *(uint *)param_4[0xf];
    param_2 = param_2 - (long)param_1;
    uVar18 = *(uint *)*param_4;
    uVar16 = *(uint *)(*param_4 + 4);
    uVar17 = *(uint *)(*param_4 + 8);
    uVar34 = *(uint *)(*param_4 + 0xc);
    auVar90._16_48_ = in_ZMM6._16_48_;
    auVar90._0_16_ = *param_5;
    auVar56 = param_4[1];
    pauVar29 = param_4 + 7;
    auVar100._12_4_ = param_6[2];
    auVar100._8_4_ = param_6[3];
    auVar4._20_4_ = *param_6;
    auVar4._16_4_ = param_6[1];
    auVar4._24_4_ = param_6[3];
    auVar4._28_4_ = param_6[2];
    auVar100._0_8_ = CONCAT44(param_6[6],param_6[7]);
    auVar4._8_4_ = param_6[5];
    auVar4._0_8_ = auVar100._0_8_;
    auVar4._12_4_ = param_6[4];
    auVar85._0_16_ = auVar4._8_16_;
    do {
      auVar62 = pshufb(*param_7,auVar86);
      pauVar22 = param_7 + 3;
      auVar70._0_4_ = _K256 + auVar62._0_4_;
      auVar70._4_4_ = _UNK_00104284 + auVar62._4_4_;
      auVar70._8_4_ = _UNK_00104288 + auVar62._8_4_;
      auVar70._12_4_ = _UNK_0010428c + auVar62._12_4_;
      auVar92 = pshufb(param_7[1],auVar86);
      auVar61._0_4_ = auVar90._0_4_ ^ *(uint *)*param_1 ^ uVar18;
      auVar61._4_4_ = auVar90._4_4_ ^ *(uint *)(*param_1 + 4) ^ uVar16;
      auVar61._8_4_ = auVar90._8_4_ ^ *(uint *)(*param_1 + 8) ^ uVar17;
      auVar61._12_4_ = auVar90._12_4_ ^ *(uint *)(*param_1 + 0xc) ^ uVar34;
      auVar87 = aesenc(auVar61,auVar56);
      auVar59._16_48_ = auVar100._16_48_;
      auVar82 = sha256rnds2_sha(auVar100._0_16_,auVar85._0_16_,auVar70);
      auVar56._4_4_ = auVar70._12_4_;
      auVar56._0_4_ = auVar70._8_4_;
      auVar56._8_4_ = auVar70._0_4_;
      auVar56._12_4_ = auVar70._0_4_;
      auVar70 = aesenc(auVar87,param_4[2]);
      auVar57._16_48_ = auVar85._16_48_;
      auVar56 = sha256rnds2_sha(auVar85._0_16_,auVar82,auVar56);
      auVar87._0_4_ = _DAT_001042a0 + auVar92._0_4_;
      auVar87._4_4_ = _UNK_001042a4 + auVar92._4_4_;
      auVar87._8_4_ = _UNK_001042a8 + auVar92._8_4_;
      auVar87._12_4_ = _UNK_001042ac + auVar92._12_4_;
      auVar60 = pshufb(param_7[2],auVar86);
      param_7 = param_7 + 4;
      auVar69 = aesenc(auVar70,param_4[3]);
      auVar70 = sha256rnds2_sha(auVar82,auVar56,auVar87);
      auVar82._4_4_ = auVar87._12_4_;
      auVar82._0_4_ = auVar87._8_4_;
      auVar82._8_4_ = auVar87._0_4_;
      auVar82._12_4_ = auVar87._0_4_;
      auVar87 = aesenc(auVar69,param_4[4]);
      auVar56 = sha256rnds2_sha(auVar56,auVar70,auVar82);
      auVar69._0_4_ = _DAT_001042c0 + auVar60._0_4_;
      auVar69._4_4_ = _UNK_001042c4 + auVar60._4_4_;
      auVar69._8_4_ = _UNK_001042c8 + auVar60._8_4_;
      auVar69._12_4_ = _UNK_001042cc + auVar60._12_4_;
      auVar61 = pshufb(*pauVar22,auVar86);
      auVar82 = sha256msg1_sha(auVar62,auVar92);
      auVar87 = aesenc(auVar87,param_4[5]);
      auVar70 = sha256rnds2_sha(auVar70,auVar56,auVar69);
      auVar62._4_4_ = auVar69._12_4_;
      auVar62._0_4_ = auVar69._8_4_;
      auVar62._8_4_ = auVar69._0_4_;
      auVar62._12_4_ = auVar69._0_4_;
      auVar66._0_4_ = auVar82._0_4_ + auVar60._4_4_;
      auVar66._4_4_ = auVar82._4_4_ + auVar60._8_4_;
      auVar66._8_4_ = auVar82._8_4_ + auVar60._12_4_;
      auVar66._12_4_ = auVar82._12_4_ + auVar61._0_4_;
      auVar87 = aesenc(auVar87,param_4[6]);
      auVar56 = sha256rnds2_sha(auVar56,auVar70,auVar62);
      auVar63._0_4_ = _DAT_001042e0 + auVar61._0_4_;
      auVar63._4_4_ = _UNK_001042e4 + auVar61._4_4_;
      auVar63._8_4_ = _UNK_001042e8 + auVar61._8_4_;
      auVar63._12_4_ = _UNK_001042ec + auVar61._12_4_;
      auVar69 = sha256msg2_sha(auVar66,auVar61);
      auVar62 = sha256msg1_sha(auVar92,auVar60);
      auVar82 = aesenc(auVar87,*pauVar29);
      auVar87 = sha256rnds2_sha(auVar70,auVar56,auVar63);
      auVar92._4_4_ = auVar63._12_4_;
      auVar92._0_4_ = auVar63._8_4_;
      auVar92._8_4_ = auVar63._0_4_;
      auVar92._12_4_ = auVar63._0_4_;
      auVar82 = aesenc(auVar82,param_4[8]);
      auVar67._0_4_ = auVar62._0_4_ + auVar61._4_4_;
      auVar67._4_4_ = auVar62._4_4_ + auVar61._8_4_;
      auVar67._8_4_ = auVar62._8_4_ + auVar61._12_4_;
      auVar67._12_4_ = auVar62._12_4_ + auVar69._0_4_;
      auVar70 = sha256rnds2_sha(auVar56,auVar87,auVar92);
      auVar81._0_4_ = _DAT_00104300 + auVar69._0_4_;
      auVar81._4_4_ = _UNK_00104304 + auVar69._4_4_;
      auVar81._8_4_ = _UNK_00104308 + auVar69._8_4_;
      auVar81._12_4_ = _UNK_0010430c + auVar69._12_4_;
      auVar62 = sha256msg2_sha(auVar67,auVar69);
      auVar63 = sha256msg1_sha(auVar60,auVar61);
      auVar56 = param_4[10];
      auVar82 = aesenc(auVar82,param_4[9]);
      auVar87 = sha256rnds2_sha(auVar87,auVar70,auVar81);
      auVar60._4_4_ = auVar81._12_4_;
      auVar60._0_4_ = auVar81._8_4_;
      auVar60._8_4_ = auVar81._0_4_;
      auVar60._12_4_ = auVar81._0_4_;
      auVar68._0_4_ = auVar63._0_4_ + auVar69._4_4_;
      auVar68._4_4_ = auVar63._4_4_ + auVar69._8_4_;
      auVar68._8_4_ = auVar63._8_4_ + auVar69._12_4_;
      auVar68._12_4_ = auVar63._12_4_ + auVar62._0_4_;
      if (10 < uVar15) {
        auVar82 = aesenc(auVar82,auVar56);
        auVar56 = param_4[0xc];
        auVar82 = aesenc(auVar82,param_4[0xb]);
        if (uVar15 != 0xb) {
          auVar82 = aesenc(auVar82,auVar56);
          auVar56 = param_4[0xe];
          auVar82 = aesenc(auVar82,param_4[0xd]);
        }
      }
      auVar82 = aesenclast(auVar82,auVar56);
      auVar56 = param_4[1];
      auVar70 = sha256rnds2_sha(auVar70,auVar87,auVar60);
      uVar33 = *(uint *)param_1[1];
      uVar32 = *(uint *)(param_1[1] + 4);
      uVar31 = *(uint *)(param_1[1] + 8);
      uVar24 = *(uint *)(param_1[1] + 0xc);
      *(undefined1 (*) [16])(param_2 + (long)param_1) = auVar82;
      auVar71._0_4_ = auVar82._0_4_ ^ uVar33 ^ uVar18;
      auVar71._4_4_ = auVar82._4_4_ ^ uVar32 ^ uVar16;
      auVar71._8_4_ = auVar82._8_4_ ^ uVar31 ^ uVar17;
      auVar71._12_4_ = auVar82._12_4_ ^ uVar24 ^ uVar34;
      auVar56 = aesenc(auVar71,auVar56);
      auVar80._0_4_ = _DAT_00104320 + auVar62._0_4_;
      auVar80._4_4_ = _UNK_00104324 + auVar62._4_4_;
      auVar80._8_4_ = _UNK_00104328 + auVar62._8_4_;
      auVar80._12_4_ = _UNK_0010432c + auVar62._12_4_;
      auVar63 = sha256msg2_sha(auVar68,auVar62);
      auVar82 = sha256msg1_sha(auVar61,auVar69);
      auVar56 = aesenc(auVar56,param_4[2]);
      auVar87 = sha256rnds2_sha(auVar87,auVar70,auVar80);
      auVar91._4_4_ = auVar80._12_4_;
      auVar91._0_4_ = auVar80._8_4_;
      auVar91._8_4_ = auVar80._0_4_;
      auVar91._12_4_ = auVar80._0_4_;
      auVar97._0_4_ = auVar82._0_4_ + auVar62._4_4_;
      auVar97._4_4_ = auVar82._4_4_ + auVar62._8_4_;
      auVar97._8_4_ = auVar82._8_4_ + auVar62._12_4_;
      auVar97._12_4_ = auVar82._12_4_ + auVar63._0_4_;
      auVar82 = aesenc(auVar56,param_4[3]);
      auVar56 = sha256rnds2_sha(auVar70,auVar87,auVar91);
      auVar36._0_4_ = _DAT_00104340 + auVar63._0_4_;
      auVar36._4_4_ = _UNK_00104344 + auVar63._4_4_;
      auVar36._8_4_ = _UNK_00104348 + auVar63._8_4_;
      auVar36._12_4_ = _UNK_0010434c + auVar63._12_4_;
      auVar92 = sha256msg2_sha(auVar97,auVar63);
      auVar69 = sha256msg1_sha(auVar69,auVar62);
      auVar82 = aesenc(auVar82,param_4[4]);
      auVar70 = sha256rnds2_sha(auVar87,auVar56,auVar36);
      auVar37._4_4_ = auVar36._12_4_;
      auVar37._0_4_ = auVar36._8_4_;
      auVar37._8_4_ = auVar36._0_4_;
      auVar37._12_4_ = auVar36._0_4_;
      auVar88._0_4_ = auVar69._0_4_ + auVar63._4_4_;
      auVar88._4_4_ = auVar69._4_4_ + auVar63._8_4_;
      auVar88._8_4_ = auVar69._8_4_ + auVar63._12_4_;
      auVar88._12_4_ = auVar69._12_4_ + auVar92._0_4_;
      auVar87 = aesenc(auVar82,param_4[5]);
      auVar56 = sha256rnds2_sha(auVar56,auVar70,auVar37);
      auVar38._0_4_ = _DAT_00104360 + auVar92._0_4_;
      auVar38._4_4_ = _UNK_00104364 + auVar92._4_4_;
      auVar38._8_4_ = _UNK_00104368 + auVar92._8_4_;
      auVar38._12_4_ = _UNK_0010436c + auVar92._12_4_;
      auVar69 = sha256msg2_sha(auVar88,auVar92);
      auVar62 = sha256msg1_sha(auVar62,auVar63);
      auVar82 = aesenc(auVar87,param_4[6]);
      auVar87 = sha256rnds2_sha(auVar70,auVar56,auVar38);
      auVar39._4_4_ = auVar38._12_4_;
      auVar39._0_4_ = auVar38._8_4_;
      auVar39._8_4_ = auVar38._0_4_;
      auVar39._12_4_ = auVar38._0_4_;
      auVar93._0_4_ = auVar62._0_4_ + auVar92._4_4_;
      auVar93._4_4_ = auVar62._4_4_ + auVar92._8_4_;
      auVar93._8_4_ = auVar62._8_4_ + auVar92._12_4_;
      auVar93._12_4_ = auVar62._12_4_ + auVar69._0_4_;
      auVar82 = aesenc(auVar82,*pauVar29);
      auVar70 = sha256rnds2_sha(auVar56,auVar87,auVar39);
      auVar40._0_4_ = _DAT_00104380 + auVar69._0_4_;
      auVar40._4_4_ = _UNK_00104384 + auVar69._4_4_;
      auVar40._8_4_ = _UNK_00104388 + auVar69._8_4_;
      auVar40._12_4_ = _UNK_0010438c + auVar69._12_4_;
      auVar62 = sha256msg2_sha(auVar93,auVar69);
      auVar56 = sha256msg1_sha(auVar63,auVar92);
      auVar82 = aesenc(auVar82,param_4[8]);
      auVar87 = sha256rnds2_sha(auVar87,auVar70,auVar40);
      auVar41._4_4_ = auVar40._12_4_;
      auVar41._0_4_ = auVar40._8_4_;
      auVar41._8_4_ = auVar40._0_4_;
      auVar41._12_4_ = auVar40._0_4_;
      auVar95._0_4_ = auVar56._0_4_ + auVar69._4_4_;
      auVar95._4_4_ = auVar56._4_4_ + auVar69._8_4_;
      auVar95._8_4_ = auVar56._8_4_ + auVar69._12_4_;
      auVar95._12_4_ = auVar56._12_4_ + auVar62._0_4_;
      auVar56 = param_4[10];
      auVar82 = aesenc(auVar82,param_4[9]);
      if (10 < uVar15) {
        auVar82 = aesenc(auVar82,auVar56);
        auVar56 = param_4[0xc];
        auVar82 = aesenc(auVar82,param_4[0xb]);
        if (uVar15 != 0xb) {
          auVar82 = aesenc(auVar82,auVar56);
          auVar56 = param_4[0xe];
          auVar82 = aesenc(auVar82,param_4[0xd]);
        }
      }
      auVar82 = aesenclast(auVar82,auVar56);
      auVar56 = param_4[1];
      auVar70 = sha256rnds2_sha(auVar70,auVar87,auVar41);
      uVar33 = *(uint *)param_1[2];
      uVar32 = *(uint *)(param_1[2] + 4);
      uVar31 = *(uint *)(param_1[2] + 8);
      uVar24 = *(uint *)(param_1[2] + 0xc);
      *(undefined1 (*) [16])(param_2 + 0x10 + (long)param_1) = auVar82;
      auVar72._0_4_ = auVar82._0_4_ ^ uVar33 ^ uVar18;
      auVar72._4_4_ = auVar82._4_4_ ^ uVar32 ^ uVar16;
      auVar72._8_4_ = auVar82._8_4_ ^ uVar31 ^ uVar17;
      auVar72._12_4_ = auVar82._12_4_ ^ uVar24 ^ uVar34;
      auVar56 = aesenc(auVar72,auVar56);
      auVar42._0_4_ = _DAT_001043a0 + auVar62._0_4_;
      auVar42._4_4_ = _UNK_001043a4 + auVar62._4_4_;
      auVar42._8_4_ = _UNK_001043a8 + auVar62._8_4_;
      auVar42._12_4_ = _UNK_001043ac + auVar62._12_4_;
      auVar63 = sha256msg2_sha(auVar95,auVar62);
      auVar82 = sha256msg1_sha(auVar92,auVar69);
      auVar56 = aesenc(auVar56,param_4[2]);
      auVar87 = sha256rnds2_sha(auVar87,auVar70,auVar42);
      auVar43._4_4_ = auVar42._12_4_;
      auVar43._0_4_ = auVar42._8_4_;
      auVar43._8_4_ = auVar42._0_4_;
      auVar43._12_4_ = auVar42._0_4_;
      auVar98._0_4_ = auVar82._0_4_ + auVar62._4_4_;
      auVar98._4_4_ = auVar82._4_4_ + auVar62._8_4_;
      auVar98._8_4_ = auVar82._8_4_ + auVar62._12_4_;
      auVar98._12_4_ = auVar82._12_4_ + auVar63._0_4_;
      auVar82 = aesenc(auVar56,param_4[3]);
      auVar56 = sha256rnds2_sha(auVar70,auVar87,auVar43);
      auVar44._0_4_ = _DAT_001043c0 + auVar63._0_4_;
      auVar44._4_4_ = _UNK_001043c4 + auVar63._4_4_;
      auVar44._8_4_ = _UNK_001043c8 + auVar63._8_4_;
      auVar44._12_4_ = _UNK_001043cc + auVar63._12_4_;
      auVar92 = sha256msg2_sha(auVar98,auVar63);
      auVar69 = sha256msg1_sha(auVar69,auVar62);
      auVar82 = aesenc(auVar82,param_4[4]);
      auVar70 = sha256rnds2_sha(auVar87,auVar56,auVar44);
      auVar45._4_4_ = auVar44._12_4_;
      auVar45._0_4_ = auVar44._8_4_;
      auVar45._8_4_ = auVar44._0_4_;
      auVar45._12_4_ = auVar44._0_4_;
      auVar89._0_4_ = auVar69._0_4_ + auVar63._4_4_;
      auVar89._4_4_ = auVar69._4_4_ + auVar63._8_4_;
      auVar89._8_4_ = auVar69._8_4_ + auVar63._12_4_;
      auVar89._12_4_ = auVar69._12_4_ + auVar92._0_4_;
      auVar87 = aesenc(auVar82,param_4[5]);
      auVar56 = sha256rnds2_sha(auVar56,auVar70,auVar45);
      auVar46._0_4_ = _DAT_001043e0 + auVar92._0_4_;
      auVar46._4_4_ = _UNK_001043e4 + auVar92._4_4_;
      auVar46._8_4_ = _UNK_001043e8 + auVar92._8_4_;
      auVar46._12_4_ = _UNK_001043ec + auVar92._12_4_;
      auVar69 = sha256msg2_sha(auVar89,auVar92);
      auVar62 = sha256msg1_sha(auVar62,auVar63);
      auVar82 = aesenc(auVar87,param_4[6]);
      auVar87 = sha256rnds2_sha(auVar70,auVar56,auVar46);
      auVar47._4_4_ = auVar46._12_4_;
      auVar47._0_4_ = auVar46._8_4_;
      auVar47._8_4_ = auVar46._0_4_;
      auVar47._12_4_ = auVar46._0_4_;
      auVar94._0_4_ = auVar62._0_4_ + auVar92._4_4_;
      auVar94._4_4_ = auVar62._4_4_ + auVar92._8_4_;
      auVar94._8_4_ = auVar62._8_4_ + auVar92._12_4_;
      auVar94._12_4_ = auVar62._12_4_ + auVar69._0_4_;
      auVar82 = aesenc(auVar82,*pauVar29);
      auVar70 = sha256rnds2_sha(auVar56,auVar87,auVar47);
      auVar48._0_4_ = _DAT_00104400 + auVar69._0_4_;
      auVar48._4_4_ = _UNK_00104404 + auVar69._4_4_;
      auVar48._8_4_ = _UNK_00104408 + auVar69._8_4_;
      auVar48._12_4_ = _UNK_0010440c + auVar69._12_4_;
      auVar62 = sha256msg2_sha(auVar94,auVar69);
      auVar56 = sha256msg1_sha(auVar63,auVar92);
      auVar82 = aesenc(auVar82,param_4[8]);
      auVar87 = sha256rnds2_sha(auVar87,auVar70,auVar48);
      auVar49._4_4_ = auVar48._12_4_;
      auVar49._0_4_ = auVar48._8_4_;
      auVar49._8_4_ = auVar48._0_4_;
      auVar49._12_4_ = auVar48._0_4_;
      auVar96._0_4_ = auVar56._0_4_ + auVar69._4_4_;
      auVar96._4_4_ = auVar56._4_4_ + auVar69._8_4_;
      auVar96._8_4_ = auVar56._8_4_ + auVar69._12_4_;
      auVar96._12_4_ = auVar56._12_4_ + auVar62._0_4_;
      auVar56 = param_4[10];
      auVar82 = aesenc(auVar82,param_4[9]);
      auVar70 = sha256rnds2_sha(auVar70,auVar87,auVar49);
      auVar50._0_4_ = _DAT_00104420 + auVar62._0_4_;
      auVar50._4_4_ = _UNK_00104424 + auVar62._4_4_;
      auVar50._8_4_ = _UNK_00104428 + auVar62._8_4_;
      auVar50._12_4_ = _UNK_0010442c + auVar62._12_4_;
      auVar63 = sha256msg2_sha(auVar96,auVar62);
      auVar69 = sha256msg1_sha(auVar92,auVar69);
      if (10 < uVar15) {
        auVar82 = aesenc(auVar82,auVar56);
        auVar56 = param_4[0xc];
        auVar82 = aesenc(auVar82,param_4[0xb]);
        if (uVar15 != 0xb) {
          auVar82 = aesenc(auVar82,auVar56);
          auVar56 = param_4[0xe];
          auVar82 = aesenc(auVar82,param_4[0xd]);
        }
      }
      auVar82 = aesenclast(auVar82,auVar56);
      auVar56 = param_4[1];
      auVar87 = sha256rnds2_sha(auVar87,auVar70,auVar50);
      auVar51._4_4_ = auVar50._12_4_;
      auVar51._0_4_ = auVar50._8_4_;
      auVar51._8_4_ = auVar50._0_4_;
      auVar51._12_4_ = auVar50._0_4_;
      auVar99._0_4_ = auVar69._0_4_ + auVar62._4_4_;
      auVar99._4_4_ = auVar69._4_4_ + auVar62._8_4_;
      auVar99._8_4_ = auVar69._8_4_ + auVar62._12_4_;
      auVar99._12_4_ = auVar69._12_4_ + auVar63._0_4_;
      uVar33 = *(uint *)param_1[3];
      uVar32 = *(uint *)(param_1[3] + 4);
      uVar31 = *(uint *)(param_1[3] + 8);
      uVar24 = *(uint *)(param_1[3] + 0xc);
      *(undefined1 (*) [16])(param_2 + 0x20 + (long)param_1) = auVar82;
      auVar73._0_4_ = auVar82._0_4_ ^ uVar33 ^ uVar18;
      auVar73._4_4_ = auVar82._4_4_ ^ uVar32 ^ uVar16;
      auVar73._8_4_ = auVar82._8_4_ ^ uVar31 ^ uVar17;
      auVar73._12_4_ = auVar82._12_4_ ^ uVar24 ^ uVar34;
      auVar56 = aesenc(auVar73,auVar56);
      auVar82 = aesenc(auVar56,param_4[2]);
      auVar56 = sha256rnds2_sha(auVar70,auVar87,auVar51);
      auVar52._0_4_ = _DAT_00104440 + auVar63._0_4_;
      auVar52._4_4_ = _UNK_00104444 + auVar63._4_4_;
      auVar52._8_4_ = _UNK_00104448 + auVar63._8_4_;
      auVar52._12_4_ = _UNK_0010444c + auVar63._12_4_;
      auVar69 = sha256msg2_sha(auVar99,auVar63);
      auVar82 = aesenc(auVar82,param_4[3]);
      auVar70 = sha256rnds2_sha(auVar87,auVar56,auVar52);
      auVar53._4_4_ = auVar52._12_4_;
      auVar53._0_4_ = auVar52._8_4_;
      auVar53._8_4_ = auVar52._0_4_;
      auVar53._12_4_ = auVar52._0_4_;
      auVar87 = aesenc(auVar82,param_4[4]);
      auVar56 = sha256rnds2_sha(auVar56,auVar70,auVar53);
      auVar54._0_4_ = _DAT_00104460 + auVar69._0_4_;
      auVar54._4_4_ = _UNK_00104464 + auVar69._4_4_;
      auVar54._8_4_ = _UNK_00104468 + auVar69._8_4_;
      auVar54._12_4_ = _UNK_0010446c + auVar69._12_4_;
      auVar87 = aesenc(auVar87,param_4[5]);
      auVar82 = aesenc(auVar87,param_4[6]);
      auVar87 = sha256rnds2_sha(auVar70,auVar56,auVar54);
      auVar55._4_4_ = auVar54._12_4_;
      auVar55._0_4_ = auVar54._8_4_;
      auVar55._8_4_ = auVar54._0_4_;
      auVar55._12_4_ = auVar54._0_4_;
      auVar82 = aesenc(auVar82,*pauVar29);
      auVar70 = sha256rnds2_sha(auVar56,auVar87,auVar55);
      auVar56 = aesenc(auVar82,param_4[8]);
      in_ZMM5._0_16_ = param_4[10];
      auVar56 = aesenc(auVar56,param_4[9]);
      if (10 < uVar15) {
        auVar56 = aesenc(auVar56,param_4[10]);
        in_ZMM5._0_16_ = param_4[0xc];
        auVar56 = aesenc(auVar56,param_4[0xb]);
        if (uVar15 != 0xb) {
          auVar56 = aesenc(auVar56,param_4[0xc]);
          in_ZMM5._0_16_ = param_4[0xe];
          auVar56 = aesenc(auVar56,param_4[0xd]);
        }
      }
      auVar90._0_16_ = aesenclast(auVar56,in_ZMM5._0_16_);
      auVar56 = param_4[1];
      auVar59._0_4_ = auVar87._0_4_ + auVar100._0_4_;
      auVar59._4_4_ = auVar87._4_4_ + auVar100._4_4_;
      auVar59._8_4_ = auVar87._8_4_ + auVar100._8_4_;
      auVar59._12_4_ = auVar87._12_4_ + auVar100._12_4_;
      auVar57._0_4_ = auVar70._0_4_ + auVar85._0_4_;
      auVar57._4_4_ = auVar70._4_4_ + auVar85._4_4_;
      auVar57._8_4_ = auVar70._8_4_ + auVar85._8_4_;
      auVar57._12_4_ = auVar70._12_4_ + auVar85._12_4_;
      param_3 = param_3 + -1;
      *(undefined1 (*) [16])(param_2 + 0x30 + (long)param_1) = auVar90._0_16_;
      param_1 = param_1 + 4;
      auVar85 = auVar57;
      auVar100 = auVar59;
    } while (param_3 != 0);
    auVar58._4_4_ = auVar59._0_4_;
    auVar58._0_4_ = auVar59._4_4_;
    auVar58._8_4_ = auVar59._12_4_;
    auVar58._12_4_ = auVar59._8_4_;
    auVar84._4_4_ = auVar57._8_4_;
    auVar84._0_4_ = auVar57._12_4_;
    auVar84._8_4_ = auVar57._4_4_;
    auVar84._12_4_ = auVar57._0_4_;
    auVar5._4_56_ = auVar57._8_56_;
    auVar5._0_4_ = auVar57._0_4_;
    auVar86._0_8_ = auVar5._0_8_ << 0x20;
    auVar86._8_4_ = auVar57._12_4_;
    auVar86._12_4_ = auVar57._8_4_;
    auVar84._16_16_ = auVar58;
    *param_5 = auVar90._0_16_;
    *(long *)param_6 = auVar86._8_8_;
    *(long *)(param_6 + 2) = auVar58._8_8_;
    *(undefined1 (*) [16])(param_6 + 4) = auVar84._8_16_;
    return 0x104300;
  }
  if ((_DAT_00105004 & 0x800) != 0) {
    lVar25 = (long)param_7 - (long)param_1;
    auVar86 = vpshufb_avx(*(undefined1 (*) [16])(lVar25 + (long)param_1),_DAT_00104480);
    auVar56 = vpshufb_avx(*(undefined1 (*) [16])(lVar25 + 0x10 + (long)param_1),_DAT_00104480);
    auVar70 = vpshufb_avx(*(undefined1 (*) [16])(lVar25 + 0x20 + (long)param_1),_DAT_00104480);
    auVar6._4_4_ = _UNK_00104284;
    auVar6._0_4_ = _K256;
    auVar6._8_4_ = _UNK_00104288;
    auVar6._12_4_ = _UNK_0010428c;
    vpaddd_avx(auVar86,auVar6);
    auVar87 = vpshufb_avx(*(undefined1 (*) [16])(lVar25 + 0x30 + (long)param_1),_DAT_00104480);
    auVar8._4_4_ = _UNK_001042a4;
    auVar8._0_4_ = _DAT_001042a0;
    auVar8._8_4_ = _UNK_001042a8;
    auVar8._12_4_ = _UNK_001042ac;
    vpaddd_avx(auVar56,auVar8);
    auVar10._4_4_ = _UNK_001042c4;
    auVar10._0_4_ = _DAT_001042c0;
    auVar10._8_4_ = _UNK_001042c8;
    auVar10._12_4_ = _UNK_001042cc;
    vpaddd_avx(auVar70,auVar10);
    auVar12._4_4_ = _UNK_001042e4;
    auVar12._0_4_ = _DAT_001042e0;
    auVar12._8_4_ = _UNK_001042e8;
    auVar12._12_4_ = _UNK_001042ec;
    vpaddd_avx(auVar87,auVar12);
    vpalignr_avx(auVar56,auVar86,4);
    vpalignr_avx(auVar87,auVar70,4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (((uint)(_DAT_00105004 >> 0x20) & 0x128) != 0x128) {
    if ((_DAT_00105004 & 0x10000000) != 0) {
      param_2 = param_2 - (long)param_1;
      lVar25 = (long)param_7 - (long)param_1;
      pauVar29 = param_1 + param_3 * 4;
      auVar86 = *param_5;
      lVar35 = (ulong)*(uint *)param_4[0xf] - 9;
      uVar15 = *param_6;
      uVar18 = param_6[1];
      uVar16 = param_6[2];
      uVar17 = param_6[3];
      uVar34 = param_6[4];
      uVar33 = param_6[5];
      uVar32 = param_6[6];
      uVar31 = param_6[7];
      auVar56 = *(undefined1 (*) [16])(&DAT_001044a0 + lVar35 * 8);
      auVar70 = *(undefined1 (*) [16])(&DAT_001044b0 + lVar35 * 8);
      auVar87 = *(undefined1 (*) [16])(&DAT_001044c0 + lVar35 * 8);
      auVar82 = *param_4;
      do {
        auVar69 = vpshufb_avx(*(undefined1 (*) [16])(lVar25 + (long)param_1),_DAT_00104480);
        auVar62 = vpshufb_avx(*(undefined1 (*) [16])(lVar25 + 0x10 + (long)param_1),_DAT_00104480);
        auVar63 = vpshufb_avx(*(undefined1 (*) [16])(lVar25 + 0x20 + (long)param_1),_DAT_00104480);
        auVar7._4_4_ = _UNK_00104284;
        auVar7._0_4_ = _K256;
        auVar7._8_4_ = _UNK_00104288;
        auVar7._12_4_ = _UNK_0010428c;
        auStack_c0 = vpaddd_avx(auVar69,auVar7);
        auVar92 = vpshufb_avx(*(undefined1 (*) [16])(lVar25 + 0x30 + (long)param_1),_DAT_00104480);
        auVar9._4_4_ = _UNK_001042a4;
        auVar9._0_4_ = _DAT_001042a0;
        auVar9._8_4_ = _UNK_001042a8;
        auVar9._12_4_ = _UNK_001042ac;
        auStack_b0 = vpaddd_avx(auVar62,auVar9);
        auVar11._4_4_ = _UNK_001042c4;
        auVar11._0_4_ = _DAT_001042c0;
        auVar11._8_4_ = _UNK_001042c8;
        auVar11._12_4_ = _UNK_001042cc;
        auStack_a0 = vpaddd_avx(auVar63,auVar11);
        auVar13._4_4_ = _UNK_001042e4;
        auVar13._0_4_ = _DAT_001042e0;
        auVar13._8_4_ = _UNK_001042e8;
        auVar13._12_4_ = _UNK_001042ec;
        auStack_90 = vpaddd_avx(auVar92,auVar13);
        uVar24 = uVar18 ^ uVar16;
        pauVar22 = (undefined1 (*) [16])&K256;
        do {
          pauVar27 = param_1;
          auVar81 = vpalignr_avx(auVar62,auVar69,4);
          auVar60 = vpalignr_avx(auVar92,auVar63,4);
          uVar28 = (uVar34 >> 0xe | uVar34 << 0x12) ^ uVar34;
          auVar66 = vpsrld_avx(auVar81,7);
          uVar30 = (uVar15 >> 9 | uVar15 << 0x17) ^ uVar15;
          auVar69 = vpaddd_avx(auVar69,auVar60);
          uVar28 = (uVar28 >> 5 | uVar28 << 0x1b) ^ uVar34;
          auVar80 = vpsrld_avx(auVar81,3);
          auVar60 = vpslld_avx(auVar81,0xe);
          uVar30 = (uVar30 >> 0xb | uVar30 << 0x15) ^ uVar15;
          iVar26 = uVar31 + auStack_c0._0_4_ + ((uVar33 ^ uVar32) & uVar34 ^ uVar32) +
                   (uVar28 >> 6 | uVar28 << 0x1a);
          auVar81 = vpshufd_avx(auVar92,0xfa);
          uVar17 = uVar17 + iVar26;
          auVar67 = vpsrld_avx(auVar66,0xb);
          uVar31 = (uVar30 >> 2 | uVar30 << 0x1e) + iVar26 + (uVar24 & (uVar15 ^ uVar18) ^ uVar18);
          uVar24 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
          auVar61 = vpslld_avx(auVar60,0xb);
          uVar28 = (uVar31 >> 9 | uVar31 * 0x800000) ^ uVar31;
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar17;
          auVar68 = vpsrld_avx(auVar81,10);
          auVar81 = vpsrlq_avx(auVar81,0x11);
          uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar31;
          auVar69 = vpaddd_avx(auVar69,auVar80 ^ auVar66 ^ auVar60 ^ auVar67 ^ auVar61);
          iVar26 = uVar32 + auStack_c0._4_4_ + ((uVar34 ^ uVar33) & uVar17 ^ uVar33) +
                   (uVar24 >> 6 | uVar24 << 0x1a);
          uVar16 = uVar16 + iVar26;
          auVar60 = vpsrlq_avx(auVar81,2);
          uVar32 = (uVar28 >> 2 | uVar28 << 0x1e) +
                   iVar26 + ((uVar15 ^ uVar18) & (uVar31 ^ uVar15) ^ uVar15);
          uVar24 = (uVar16 >> 0xe | uVar16 * 0x40000) ^ uVar16;
          auVar81 = vpshufd_avx(auVar68 ^ auVar81 ^ auVar60,0x84);
          uVar28 = (uVar32 >> 9 | uVar32 * 0x800000) ^ uVar32;
          auVar81 = vpsrldq_avx(auVar81,8);
          auVar60 = aesenc(*pauVar27 ^ auVar82 ^ auVar86,param_4[1]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar16;
          auVar86 = vpaddd_avx(auVar69,auVar81);
          auVar82 = vpshufd_avx(auVar86,0x50);
          auVar69 = vpsrld_avx(auVar82,10);
          uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar32;
          iVar26 = uVar33 + auStack_c0._8_4_ + ((uVar17 ^ uVar34) & uVar16 ^ uVar34) +
                   (uVar24 >> 6 | uVar24 << 0x1a);
          auVar82 = vpsrlq_avx(auVar82,0x11);
          uVar18 = uVar18 + iVar26;
          uVar33 = (uVar28 >> 2 | uVar28 << 0x1e) +
                   iVar26 + ((uVar31 ^ uVar15) & (uVar32 ^ uVar31) ^ uVar31);
          auVar81 = vpsrlq_avx(auVar82,2);
          uVar24 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
          auVar82 = vpshufd_avx(auVar69 ^ auVar82 ^ auVar81,0xe8);
          uVar28 = (uVar33 >> 9 | uVar33 * 0x800000) ^ uVar33;
          auVar82 = vpslldq_avx(auVar82,8);
          auVar81 = aesenc(auVar60,param_4[2]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar18;
          iVar26 = uVar34 + auStack_c0._12_4_;
          auVar69 = vpaddd_avx(auVar86,auVar82);
          auStack_c0 = vpaddd_avx(auVar69,pauVar22[8]);
          uVar34 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar33;
          iVar26 = iVar26 + ((uVar16 ^ uVar17) & uVar18 ^ uVar17) + (uVar24 >> 6 | uVar24 << 0x1a);
          uVar15 = uVar15 + iVar26;
          uVar34 = (uVar34 >> 2 | uVar34 << 0x1e) +
                   iVar26 + ((uVar32 ^ uVar31) & (uVar33 ^ uVar32) ^ uVar32);
          auVar82 = vpalignr_avx(auVar63,auVar62,4);
          auVar86 = vpalignr_avx(auVar69,auVar92,4);
          uVar24 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
          auVar60 = vpsrld_avx(auVar82,7);
          uVar28 = (uVar34 >> 9 | uVar34 * 0x800000) ^ uVar34;
          auVar86 = vpaddd_avx(auVar62,auVar86);
          auVar66 = aesenc(auVar81,param_4[3]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar15;
          auVar67 = vpsrld_avx(auVar82,3);
          auVar62 = vpslld_avx(auVar82,0xe);
          uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar34;
          iVar26 = uVar17 + auStack_b0._0_4_ + ((uVar18 ^ uVar16) & uVar15 ^ uVar16) +
                   (uVar24 >> 6 | uVar24 << 0x1a);
          auVar82 = vpshufd_avx(auVar69,0xfa);
          uVar31 = uVar31 + iVar26;
          auVar61 = vpsrld_avx(auVar60,0xb);
          uVar17 = (uVar28 >> 2 | uVar28 << 0x1e) +
                   iVar26 + ((uVar33 ^ uVar32) & (uVar34 ^ uVar33) ^ uVar33);
          uVar24 = (uVar31 >> 0xe | uVar31 * 0x40000) ^ uVar31;
          auVar81 = vpslld_avx(auVar62,0xb);
          uVar28 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
          auVar68 = aesenc(auVar66,param_4[4]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar31;
          auVar66 = vpsrld_avx(auVar82,10);
          auVar82 = vpsrlq_avx(auVar82,0x11);
          uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar17;
          auVar86 = vpaddd_avx(auVar86,auVar67 ^ auVar60 ^ auVar62 ^ auVar61 ^ auVar81);
          iVar26 = uVar16 + auStack_b0._4_4_ + ((uVar15 ^ uVar18) & uVar31 ^ uVar18) +
                   (uVar24 >> 6 | uVar24 << 0x1a);
          uVar32 = uVar32 + iVar26;
          auVar62 = vpsrlq_avx(auVar82,2);
          uVar16 = (uVar28 >> 2 | uVar28 << 0x1e) +
                   iVar26 + ((uVar34 ^ uVar33) & (uVar17 ^ uVar34) ^ uVar34);
          uVar24 = (uVar32 >> 0xe | uVar32 * 0x40000) ^ uVar32;
          auVar82 = vpshufd_avx(auVar66 ^ auVar82 ^ auVar62,0x84);
          uVar28 = (uVar16 >> 9 | uVar16 * 0x800000) ^ uVar16;
          auVar82 = vpsrldq_avx(auVar82,8);
          auVar60 = aesenc(auVar68,param_4[5]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar32;
          auVar86 = vpaddd_avx(auVar86,auVar82);
          auVar82 = vpshufd_avx(auVar86,0x50);
          auVar62 = vpsrld_avx(auVar82,10);
          uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar16;
          iVar26 = uVar18 + auStack_b0._8_4_ + ((uVar31 ^ uVar15) & uVar32 ^ uVar15) +
                   (uVar24 >> 6 | uVar24 << 0x1a);
          auVar82 = vpsrlq_avx(auVar82,0x11);
          uVar33 = uVar33 + iVar26;
          uVar18 = (uVar28 >> 2 | uVar28 << 0x1e) +
                   iVar26 + ((uVar17 ^ uVar34) & (uVar16 ^ uVar17) ^ uVar17);
          auVar81 = vpsrlq_avx(auVar82,2);
          uVar24 = (uVar33 >> 0xe | uVar33 * 0x40000) ^ uVar33;
          auVar82 = vpshufd_avx(auVar62 ^ auVar82 ^ auVar81,0xe8);
          uVar28 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
          auVar82 = vpslldq_avx(auVar82,8);
          auVar81 = aesenc(auVar60,param_4[6]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar33;
          iVar26 = uVar15 + auStack_b0._12_4_;
          auVar62 = vpaddd_avx(auVar86,auVar82);
          auStack_b0 = vpaddd_avx(auVar62,pauVar22[10]);
          uVar15 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar18;
          iVar26 = iVar26 + ((uVar32 ^ uVar31) & uVar33 ^ uVar31) + (uVar24 >> 6 | uVar24 << 0x1a);
          uVar34 = uVar34 + iVar26;
          uVar15 = (uVar15 >> 2 | uVar15 << 0x1e) +
                   iVar26 + ((uVar16 ^ uVar17) & (uVar18 ^ uVar16) ^ uVar16);
          auVar82 = vpalignr_avx(auVar92,auVar63,4);
          auVar86 = vpalignr_avx(auVar62,auVar69,4);
          uVar24 = (uVar34 >> 0xe | uVar34 * 0x40000) ^ uVar34;
          auVar60 = vpsrld_avx(auVar82,7);
          uVar28 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
          auVar86 = vpaddd_avx(auVar63,auVar86);
          auVar66 = aesenc(auVar81,param_4[7]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar34;
          auVar67 = vpsrld_avx(auVar82,3);
          auVar63 = vpslld_avx(auVar82,0xe);
          uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar15;
          iVar26 = uVar31 + auStack_a0._0_4_ + ((uVar33 ^ uVar32) & uVar34 ^ uVar32) +
                   (uVar24 >> 6 | uVar24 << 0x1a);
          auVar82 = vpshufd_avx(auVar62,0xfa);
          uVar17 = uVar17 + iVar26;
          auVar61 = vpsrld_avx(auVar60,0xb);
          uVar31 = (uVar28 >> 2 | uVar28 << 0x1e) +
                   iVar26 + ((uVar18 ^ uVar16) & (uVar15 ^ uVar18) ^ uVar18);
          uVar24 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
          auVar81 = vpslld_avx(auVar63,0xb);
          uVar28 = (uVar31 >> 9 | uVar31 * 0x800000) ^ uVar31;
          auVar68 = aesenc(auVar66,param_4[8]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar17;
          auVar66 = vpsrld_avx(auVar82,10);
          auVar82 = vpsrlq_avx(auVar82,0x11);
          uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar31;
          auVar86 = vpaddd_avx(auVar86,auVar67 ^ auVar60 ^ auVar63 ^ auVar61 ^ auVar81);
          iVar26 = uVar32 + auStack_a0._4_4_ + ((uVar34 ^ uVar33) & uVar17 ^ uVar33) +
                   (uVar24 >> 6 | uVar24 << 0x1a);
          uVar16 = uVar16 + iVar26;
          auVar63 = vpsrlq_avx(auVar82,2);
          uVar32 = (uVar28 >> 2 | uVar28 << 0x1e) +
                   iVar26 + ((uVar15 ^ uVar18) & (uVar31 ^ uVar15) ^ uVar15);
          uVar24 = (uVar16 >> 0xe | uVar16 * 0x40000) ^ uVar16;
          auVar82 = vpshufd_avx(auVar66 ^ auVar82 ^ auVar63,0x84);
          uVar28 = (uVar32 >> 9 | uVar32 * 0x800000) ^ uVar32;
          auVar82 = vpsrldq_avx(auVar82,8);
          auVar60 = aesenc(auVar68,param_4[9]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar16;
          auVar86 = vpaddd_avx(auVar86,auVar82);
          auVar82 = vpshufd_avx(auVar86,0x50);
          auVar63 = vpsrld_avx(auVar82,10);
          uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar32;
          iVar26 = uVar33 + auStack_a0._8_4_ + ((uVar17 ^ uVar34) & uVar16 ^ uVar34) +
                   (uVar24 >> 6 | uVar24 << 0x1a);
          auVar82 = vpsrlq_avx(auVar82,0x11);
          uVar18 = uVar18 + iVar26;
          uVar33 = (uVar28 >> 2 | uVar28 << 0x1e) +
                   iVar26 + ((uVar31 ^ uVar15) & (uVar32 ^ uVar31) ^ uVar31);
          auVar81 = vpsrlq_avx(auVar82,2);
          uVar24 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
          auVar82 = vpshufd_avx(auVar63 ^ auVar82 ^ auVar81,0xe8);
          uVar28 = (uVar33 >> 9 | uVar33 * 0x800000) ^ uVar33;
          auVar82 = vpslldq_avx(auVar82,8);
          auVar66 = aesenclast(auVar60,param_4[10]);
          auVar81 = aesenc(auVar60,param_4[10]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar18;
          iVar26 = uVar34 + auStack_a0._12_4_;
          auVar63 = vpaddd_avx(auVar86,auVar82);
          auStack_a0 = vpaddd_avx(auVar63,pauVar22[0xc]);
          uVar34 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar33;
          iVar26 = iVar26 + ((uVar16 ^ uVar17) & uVar18 ^ uVar17) + (uVar24 >> 6 | uVar24 << 0x1a);
          uVar15 = uVar15 + iVar26;
          uVar34 = (uVar34 >> 2 | uVar34 << 0x1e) +
                   iVar26 + ((uVar32 ^ uVar31) & (uVar33 ^ uVar32) ^ uVar32);
          auVar82 = vpalignr_avx(auVar69,auVar92,4);
          auVar86 = vpalignr_avx(auVar63,auVar62,4);
          uVar24 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
          auVar61 = vpsrld_avx(auVar82,7);
          uVar28 = (uVar34 >> 9 | uVar34 * 0x800000) ^ uVar34;
          auVar86 = vpaddd_avx(auVar92,auVar86);
          auVar92 = vpand_avx(auVar66,auVar87);
          auVar67 = aesenc(auVar81,param_4[0xb]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar15;
          auVar68 = vpsrld_avx(auVar82,3);
          auVar81 = vpslld_avx(auVar82,0xe);
          uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar34;
          iVar26 = uVar17 + auStack_90._0_4_ + ((uVar18 ^ uVar16) & uVar15 ^ uVar16) +
                   (uVar24 >> 6 | uVar24 << 0x1a);
          auVar82 = vpshufd_avx(auVar63,0xfa);
          uVar31 = uVar31 + iVar26;
          auVar66 = vpsrld_avx(auVar61,0xb);
          uVar17 = (uVar28 >> 2 | uVar28 << 0x1e) +
                   iVar26 + ((uVar33 ^ uVar32) & (uVar34 ^ uVar33) ^ uVar33);
          uVar24 = (uVar31 >> 0xe | uVar31 * 0x40000) ^ uVar31;
          auVar60 = vpslld_avx(auVar81,0xb);
          uVar28 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
          auVar91 = aesenclast(auVar67,param_4[0xc]);
          auVar80 = aesenc(auVar67,param_4[0xc]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar31;
          auVar67 = vpsrld_avx(auVar82,10);
          auVar82 = vpsrlq_avx(auVar82,0x11);
          uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar17;
          auVar86 = vpaddd_avx(auVar86,auVar68 ^ auVar61 ^ auVar81 ^ auVar66 ^ auVar60);
          iVar26 = uVar16 + auStack_90._4_4_ + ((uVar15 ^ uVar18) & uVar31 ^ uVar18) +
                   (uVar24 >> 6 | uVar24 << 0x1a);
          uVar32 = uVar32 + iVar26;
          auVar81 = vpsrlq_avx(auVar82,2);
          uVar16 = (uVar28 >> 2 | uVar28 << 0x1e) +
                   iVar26 + ((uVar34 ^ uVar33) & (uVar17 ^ uVar34) ^ uVar34);
          uVar24 = (uVar32 >> 0xe | uVar32 * 0x40000) ^ uVar32;
          auVar82 = vpshufd_avx(auVar67 ^ auVar82 ^ auVar81,0x84);
          uVar28 = (uVar16 >> 9 | uVar16 * 0x800000) ^ uVar16;
          auVar81 = vpsrldq_avx(auVar82,8);
          auVar82 = vpand_avx(auVar91,auVar70);
          auVar66 = aesenc(auVar80,param_4[0xd]);
          uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar32;
          auVar86 = vpaddd_avx(auVar86,auVar81);
          auVar81 = vpshufd_avx(auVar86,0x50);
          auVar60 = vpsrld_avx(auVar81,10);
          uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar16;
          iVar26 = uVar18 + auStack_90._8_4_ + ((uVar31 ^ uVar15) & uVar32 ^ uVar15) +
                   (uVar24 >> 6 | uVar24 << 0x1a);
          auVar81 = vpsrlq_avx(auVar81,0x11);
          uVar33 = uVar33 + iVar26;
          uVar18 = (uVar28 >> 2 | uVar28 << 0x1e) +
                   iVar26 + ((uVar17 ^ uVar34) & (uVar16 ^ uVar17) ^ uVar17);
          auVar61 = vpsrlq_avx(auVar81,2);
          uVar24 = (uVar33 >> 0xe | uVar33 * 0x40000) ^ uVar33;
          auVar81 = vpshufd_avx(auVar60 ^ auVar81 ^ auVar61,0xe8);
          uVar30 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
          auVar60 = vpslldq_avx(auVar81,8);
          auVar81 = vpor_avx(auVar92,auVar82);
          auVar61 = aesenclast(auVar66,param_4[0xe]);
          auVar82 = *param_4;
          uVar28 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar33;
          iVar26 = uVar15 + auStack_90._12_4_;
          auVar92 = vpaddd_avx(auVar86,auVar60);
          uVar24 = uVar18 ^ uVar16;
          auStack_90 = vpaddd_avx(auVar92,pauVar22[0xe]);
          uVar15 = (uVar30 >> 0xb | uVar30 << 0x15) ^ uVar18;
          iVar26 = iVar26 + ((uVar32 ^ uVar31) & uVar33 ^ uVar31) + (uVar28 >> 6 | uVar28 << 0x1a);
          uVar34 = uVar34 + iVar26;
          uVar15 = (uVar15 >> 2 | uVar15 << 0x1e) + iVar26 + ((uVar16 ^ uVar17) & uVar24 ^ uVar16);
          auVar86 = vpand_avx(auVar61,auVar56);
          auVar86 = vpor_avx(auVar81,auVar86);
          *(undefined1 (*) [16])(param_2 + (long)pauVar27) = auVar86;
          param_1 = pauVar27 + 1;
          pauVar2 = pauVar22 + 0x10;
          pauVar22 = pauVar22 + 8;
        } while ((*pauVar2)[3] != '\0');
        uVar28 = (uVar34 >> 0xe | uVar34 * 0x40000) ^ uVar34;
        uVar30 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
        uVar28 = (uVar28 >> 5 | uVar28 << 0x1b) ^ uVar34;
        uVar30 = (uVar30 >> 0xb | uVar30 << 0x15) ^ uVar15;
        iVar26 = uVar31 + auStack_c0._0_4_ + ((uVar33 ^ uVar32) & uVar34 ^ uVar32) +
                 (uVar28 >> 6 | uVar28 << 0x1a);
        uVar17 = uVar17 + iVar26;
        uVar31 = (uVar30 >> 2 | uVar30 << 0x1e) + iVar26 + (uVar24 & (uVar15 ^ uVar18) ^ uVar18);
        uVar24 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
        uVar28 = (uVar31 >> 9 | uVar31 * 0x800000) ^ uVar31;
        uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar17;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar31;
        iVar26 = uVar32 + auStack_c0._4_4_ + ((uVar34 ^ uVar33) & uVar17 ^ uVar33) +
                 (uVar24 >> 6 | uVar24 << 0x1a);
        uVar16 = uVar16 + iVar26;
        uVar32 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar15 ^ uVar18) & (uVar31 ^ uVar15) ^ uVar15);
        uVar24 = (uVar16 >> 0xe | uVar16 * 0x40000) ^ uVar16;
        uVar28 = (uVar32 >> 9 | uVar32 * 0x800000) ^ uVar32;
        auVar86 = aesenc(*param_1 ^ auVar82 ^ auVar86,param_4[1]);
        uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar16;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar32;
        iVar26 = uVar33 + auStack_c0._8_4_ + ((uVar17 ^ uVar34) & uVar16 ^ uVar34) +
                 (uVar24 >> 6 | uVar24 << 0x1a);
        uVar18 = uVar18 + iVar26;
        uVar33 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar31 ^ uVar15) & (uVar32 ^ uVar31) ^ uVar31);
        uVar24 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
        uVar28 = (uVar33 >> 9 | uVar33 * 0x800000) ^ uVar33;
        auVar86 = aesenc(auVar86,param_4[2]);
        uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar18;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar33;
        iVar26 = uVar34 + auStack_c0._12_4_ + ((uVar16 ^ uVar17) & uVar18 ^ uVar17) +
                 (uVar24 >> 6 | uVar24 << 0x1a);
        uVar15 = uVar15 + iVar26;
        uVar34 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar32 ^ uVar31) & (uVar33 ^ uVar32) ^ uVar32);
        uVar24 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
        uVar28 = (uVar34 >> 9 | uVar34 * 0x800000) ^ uVar34;
        auVar86 = aesenc(auVar86,param_4[3]);
        uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar15;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar34;
        iVar26 = uVar17 + auStack_b0._0_4_ + ((uVar18 ^ uVar16) & uVar15 ^ uVar16) +
                 (uVar24 >> 6 | uVar24 << 0x1a);
        uVar31 = uVar31 + iVar26;
        uVar17 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar33 ^ uVar32) & (uVar34 ^ uVar33) ^ uVar33);
        uVar24 = (uVar31 >> 0xe | uVar31 * 0x40000) ^ uVar31;
        uVar28 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
        auVar86 = aesenc(auVar86,param_4[4]);
        uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar31;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar17;
        iVar26 = uVar16 + auStack_b0._4_4_ + ((uVar15 ^ uVar18) & uVar31 ^ uVar18) +
                 (uVar24 >> 6 | uVar24 << 0x1a);
        uVar32 = uVar32 + iVar26;
        uVar16 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar34 ^ uVar33) & (uVar17 ^ uVar34) ^ uVar34);
        uVar24 = (uVar32 >> 0xe | uVar32 * 0x40000) ^ uVar32;
        uVar28 = (uVar16 >> 9 | uVar16 * 0x800000) ^ uVar16;
        auVar86 = aesenc(auVar86,param_4[5]);
        uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar32;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar16;
        iVar26 = uVar18 + auStack_b0._8_4_ + ((uVar31 ^ uVar15) & uVar32 ^ uVar15) +
                 (uVar24 >> 6 | uVar24 << 0x1a);
        uVar33 = uVar33 + iVar26;
        uVar18 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar17 ^ uVar34) & (uVar16 ^ uVar17) ^ uVar17);
        uVar24 = (uVar33 >> 0xe | uVar33 * 0x40000) ^ uVar33;
        uVar28 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
        auVar86 = aesenc(auVar86,param_4[6]);
        uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar33;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar18;
        iVar26 = uVar15 + auStack_b0._12_4_ + ((uVar32 ^ uVar31) & uVar33 ^ uVar31) +
                 (uVar24 >> 6 | uVar24 << 0x1a);
        uVar34 = uVar34 + iVar26;
        uVar15 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar16 ^ uVar17) & (uVar18 ^ uVar16) ^ uVar16);
        uVar24 = (uVar34 >> 0xe | uVar34 * 0x40000) ^ uVar34;
        uVar28 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
        auVar86 = aesenc(auVar86,param_4[7]);
        uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar34;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar15;
        iVar26 = uVar31 + auStack_a0._0_4_ + ((uVar33 ^ uVar32) & uVar34 ^ uVar32) +
                 (uVar24 >> 6 | uVar24 << 0x1a);
        uVar17 = uVar17 + iVar26;
        uVar31 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar18 ^ uVar16) & (uVar15 ^ uVar18) ^ uVar18);
        uVar24 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
        uVar28 = (uVar31 >> 9 | uVar31 * 0x800000) ^ uVar31;
        auVar86 = aesenc(auVar86,param_4[8]);
        uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar17;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar31;
        iVar26 = uVar32 + auStack_a0._4_4_ + ((uVar34 ^ uVar33) & uVar17 ^ uVar33) +
                 (uVar24 >> 6 | uVar24 << 0x1a);
        uVar16 = uVar16 + iVar26;
        uVar32 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar15 ^ uVar18) & (uVar31 ^ uVar15) ^ uVar15);
        uVar24 = (uVar16 >> 0xe | uVar16 * 0x40000) ^ uVar16;
        uVar28 = (uVar32 >> 9 | uVar32 * 0x800000) ^ uVar32;
        auVar86 = aesenc(auVar86,param_4[9]);
        uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar16;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar32;
        iVar26 = uVar33 + auStack_a0._8_4_ + ((uVar17 ^ uVar34) & uVar16 ^ uVar34) +
                 (uVar24 >> 6 | uVar24 << 0x1a);
        uVar18 = uVar18 + iVar26;
        uVar33 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar31 ^ uVar15) & (uVar32 ^ uVar31) ^ uVar31);
        uVar24 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
        uVar28 = (uVar33 >> 9 | uVar33 * 0x800000) ^ uVar33;
        auVar69 = aesenclast(auVar86,param_4[10]);
        auVar82 = aesenc(auVar86,param_4[10]);
        uVar24 = (uVar24 >> 5 | uVar24 << 0x1b) ^ uVar18;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar33;
        iVar26 = uVar34 + auStack_a0._12_4_ + ((uVar16 ^ uVar17) & uVar18 ^ uVar17) +
                 (uVar24 >> 6 | uVar24 << 0x1a);
        uVar15 = uVar15 + iVar26;
        uVar24 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar32 ^ uVar31) & (uVar33 ^ uVar32) ^ uVar32);
        uVar34 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
        uVar28 = (uVar24 >> 9 | uVar24 * 0x800000) ^ uVar24;
        auVar86 = vpand_avx(auVar69,auVar87);
        auVar82 = aesenc(auVar82,param_4[0xb]);
        uVar34 = (uVar34 >> 5 | uVar34 << 0x1b) ^ uVar15;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar24;
        iVar26 = uVar17 + auStack_90._0_4_ + ((uVar18 ^ uVar16) & uVar15 ^ uVar16) +
                 (uVar34 >> 6 | uVar34 << 0x1a);
        uVar31 = uVar31 + iVar26;
        uVar17 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar33 ^ uVar32) & (uVar24 ^ uVar33) ^ uVar33);
        uVar34 = (uVar31 >> 0xe | uVar31 * 0x40000) ^ uVar31;
        uVar28 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
        auVar62 = aesenclast(auVar82,param_4[0xc]);
        auVar69 = aesenc(auVar82,param_4[0xc]);
        uVar34 = (uVar34 >> 5 | uVar34 << 0x1b) ^ uVar31;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar17;
        iVar26 = uVar16 + auStack_90._4_4_ + ((uVar15 ^ uVar18) & uVar31 ^ uVar18) +
                 (uVar34 >> 6 | uVar34 << 0x1a);
        uVar32 = uVar32 + iVar26;
        uVar16 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar24 ^ uVar33) & (uVar17 ^ uVar24) ^ uVar24);
        uVar34 = (uVar32 >> 0xe | uVar32 * 0x40000) ^ uVar32;
        uVar28 = (uVar16 >> 9 | uVar16 * 0x800000) ^ uVar16;
        auVar82 = vpand_avx(auVar62,auVar70);
        auVar62 = aesenc(auVar69,param_4[0xd]);
        uVar34 = (uVar34 >> 5 | uVar34 << 0x1b) ^ uVar32;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar16;
        iVar26 = uVar18 + auStack_90._8_4_ + ((uVar31 ^ uVar15) & uVar32 ^ uVar15) +
                 (uVar34 >> 6 | uVar34 << 0x1a);
        uVar33 = uVar33 + iVar26;
        uVar18 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar17 ^ uVar24) & (uVar16 ^ uVar17) ^ uVar17);
        uVar34 = (uVar33 >> 0xe | uVar33 * 0x40000) ^ uVar33;
        uVar28 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
        auVar69 = vpor_avx(auVar86,auVar82);
        auVar86 = aesenclast(auVar62,param_4[0xe]);
        auVar82 = *param_4;
        uVar34 = (uVar34 >> 5 | uVar34 << 0x1b) ^ uVar33;
        uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar18;
        iVar26 = uVar15 + auStack_90._12_4_ + ((uVar32 ^ uVar31) & uVar33 ^ uVar31) +
                 (uVar34 >> 6 | uVar34 << 0x1a);
        auVar86 = vpand_avx(auVar86,auVar56);
        auVar86 = vpor_avx(auVar69,auVar86);
        *(undefined1 (*) [16])((long)param_1 + param_2) = auVar86;
        param_1 = pauVar27 + 2;
        uVar15 = (uVar28 >> 2 | uVar28 << 0x1e) +
                 iVar26 + ((uVar16 ^ uVar17) & (uVar18 ^ uVar16) ^ uVar16) + *param_6;
        uVar18 = uVar18 + param_6[1];
        uVar16 = uVar16 + param_6[2];
        uVar17 = uVar17 + param_6[3];
        uVar34 = uVar24 + iVar26 + param_6[4];
        uVar33 = uVar33 + param_6[5];
        uVar32 = uVar32 + param_6[6];
        uVar31 = uVar31 + param_6[7];
        *param_6 = uVar15;
        param_6[1] = uVar18;
        param_6[2] = uVar16;
        param_6[3] = uVar17;
        param_6[4] = uVar34;
        param_6[5] = uVar33;
        param_6[6] = uVar32;
        param_6[7] = uVar31;
      } while (param_1 < pauVar29);
      *param_5 = auVar86;
      return uVar15;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar19 = (ulong)auStack_270 & 0xfffffffffffffc00;
  pauVar20 = (undefined1 (*) [32])(uVar19 + 0x1c0);
  lVar35 = (long)param_7 - (long)param_1;
  *(undefined1 (**) [16])(uVar19 + 0x210) = param_1 + param_3 * 4;
  *(undefined1 (**) [16])(uVar19 + 0x220) = param_5;
  *(uint **)(uVar19 + 0x228) = param_6;
  *(long *)(uVar19 + 0x230) = lVar35;
  *(BADSPACEBASE **)(uVar19 + 0x238) = register0x00000020;
  auVar86 = vpinsrq_avx(ZEXT816(0),param_2 - (long)param_1,1);
  auVar100 = ZEXT1664(auVar86);
  pauVar22 = param_4 + 8;
  auVar85 = ZEXT1664(*param_5);
  lVar25 = (ulong)*(uint *)param_4[0xf] - 9;
  auVar86 = *(undefined1 (*) [16])(&DAT_001044a0 + lVar25 * 8);
  auVar56 = *(undefined1 (*) [16])(&DAT_001044b0 + lVar25 * 8);
  auVar70 = *(undefined1 (*) [16])(&DAT_001044c0 + lVar25 * 8);
  pauVar29 = param_1 + 4;
  uVar16 = *param_6;
  uVar18 = param_6[1];
  uVar15 = param_6[2];
  pauVar23 = (undefined1 (*) [32])(lVar35 + (long)pauVar29);
  if (pauVar29 == param_1 + param_3 * 4) {
    pauVar23 = (undefined1 (*) [32])(uVar19 + 0x1c0);
  }
  uVar31 = param_6[3];
  uVar32 = param_6[4];
  uVar33 = param_6[5];
  uVar34 = param_6[6];
  uVar17 = param_6[7];
  auVar90 = ZEXT1664(*param_4);
  do {
    auVar79._16_16_ = _UNK_00104490;
    auVar79._0_16_ = _DAT_00104480;
    auVar75._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])*pauVar23 +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar29[-4] + lVar35);
    auVar75._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])*pauVar23;
    auVar77._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])(*pauVar23 + 0x10) +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar29[-3] + lVar35);
    auVar77._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])(*pauVar23 + 0x10);
    auVar75 = vpshufb_avx2(auVar75,auVar79);
    auVar78._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])pauVar23[1] +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar29[-2] + lVar35);
    auVar78._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])pauVar23[1];
    auVar77 = vpshufb_avx2(auVar77,auVar79);
    auVar83._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])(pauVar23[1] + 0x10) +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar29[-1] + lVar35);
    auVar83._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar23[1] + 0x10);
    auVar78 = vpshufb_avx2(auVar78,auVar79);
    pauVar29 = pauVar29 + -4;
    auVar64._4_4_ = _UNK_00104284;
    auVar64._0_4_ = _K256;
    auVar64._8_4_ = _UNK_00104288;
    auVar64._12_4_ = _UNK_0010428c;
    auVar64._16_16_ = _UNK_00104290;
    auVar4 = vpaddd_avx2(auVar75,auVar64);
    auVar79 = vpshufb_avx2(auVar83,auVar79);
    auVar65._4_4_ = _UNK_001042a4;
    auVar65._0_4_ = _DAT_001042a0;
    auVar65._8_4_ = _UNK_001042a8;
    auVar65._12_4_ = _UNK_001042ac;
    auVar65._16_16_ = _UNK_001042b0;
    auVar84 = vpaddd_avx2(auVar77,auVar65);
    auVar74._4_4_ = _UNK_001042c4;
    auVar74._0_4_ = _DAT_001042c0;
    auVar74._8_4_ = _UNK_001042c8;
    auVar74._12_4_ = _UNK_001042cc;
    auVar74._16_16_ = _UNK_001042d0;
    auVar64 = vpaddd_avx2(auVar78,auVar74);
    auVar76._4_4_ = _UNK_001042e4;
    auVar76._0_4_ = _DAT_001042e0;
    auVar76._8_4_ = _UNK_001042e8;
    auVar76._12_4_ = _UNK_001042ec;
    auVar76._16_16_ = _UNK_001042f0;
    auVar65 = vpaddd_avx2(auVar79,auVar76);
    *pauVar20 = auVar4;
    uVar28 = 0;
    pauVar20[1] = auVar84;
    *(undefined8 *)(pauVar20[-3] + 0x18) = *(undefined8 *)(pauVar20[3] + 0x18);
    pauVar20[-2] = auVar64;
    uVar24 = uVar18 ^ uVar15;
    pauVar20[-1] = auVar65;
    pauVar20 = pauVar20 + -2;
    pauVar23 = (undefined1 (*) [32])&DAT_00104300;
    do {
      pauVar21 = pauVar20;
      auVar87 = *pauVar29;
      auVar69 = vpinsrq_avx(auVar100._0_16_,pauVar29,0);
      auVar100 = ZEXT1664(auVar69);
      *(undefined8 *)(pauVar21[-3] + 0x18) = *(undefined8 *)(pauVar21[-1] + 0x18);
      auVar84 = vpalignr_avx2(auVar77,auVar75,4);
      auVar4 = vpalignr_avx2(auVar79,auVar78,4);
      uVar16 = uVar16 + uVar28;
      auVar74 = vpsrld_avx2(auVar84,7);
      auVar4 = vpaddd_avx2(auVar75,auVar4);
      auVar83 = vpsrld_avx2(auVar84,3);
      iVar26 = uVar17 + *(int *)pauVar21[2] + (uVar33 & uVar32) + (~uVar32 & uVar34) +
               ((uVar32 >> 0x19 | uVar32 << 7) ^ (uVar32 >> 0xb | uVar32 << 0x15) ^
               (uVar32 >> 6 | uVar32 << 0x1a));
      auVar64 = vpslld_avx2(auVar84,0xe);
      uVar31 = uVar31 + iVar26;
      auVar84 = vpshufd_avx2(auVar79,0xfa);
      auVar75 = vpsrld_avx2(auVar74,0xb);
      uVar17 = iVar26 + (uVar24 & (uVar16 ^ uVar18) ^ uVar18) +
               ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 0x16 | uVar16 * 0x400) ^
               (uVar16 >> 2 | uVar16 * 0x40000000));
      auVar65 = vpslld_avx2(auVar64,0xb);
      auVar76 = vpsrld_avx2(auVar84,10);
      iVar26 = uVar34 + *(int *)(pauVar21[2] + 4) + (uVar32 & uVar31) + (~uVar31 & uVar33) +
               ((uVar31 >> 0x19 | uVar31 * 0x80) ^ (uVar31 >> 0xb | uVar31 * 0x200000) ^
               (uVar31 >> 6 | uVar31 * 0x4000000));
      uVar15 = uVar15 + iVar26;
      auVar84 = vpsrlq_avx2(auVar84,0x11);
      auVar4 = vpaddd_avx2(auVar4,auVar83 ^ auVar74 ^ auVar64 ^ auVar75 ^ auVar65);
      auVar64 = vpsrlq_avx2(auVar84,2);
      uVar34 = iVar26 + ((uVar16 ^ uVar18) & (uVar17 ^ uVar16) ^ uVar16) +
               ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 0x16 | uVar17 * 0x400) ^
               (uVar17 >> 2 | uVar17 * 0x40000000));
      auVar84 = vpshufd_avx2(auVar76 ^ auVar84 ^ auVar64,0x84);
      auVar84 = vpsrldq_avx2(auVar84,8);
      iVar26 = uVar33 + *(int *)(pauVar21[2] + 8) + (uVar31 & uVar15) + (~uVar15 & uVar32) +
               ((uVar15 >> 0x19 | uVar15 * 0x80) ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^
               (uVar15 >> 6 | uVar15 * 0x4000000));
      auVar4 = vpaddd_avx2(auVar4,auVar84);
      uVar18 = uVar18 + iVar26;
      auVar84 = vpshufd_avx2(auVar4,0x50);
      auVar87 = aesenc(auVar87 ^ auVar90._0_16_ ^ auVar85._0_16_,param_4[1]);
      auVar64 = vpsrld_avx2(auVar84,10);
      auVar84 = vpsrlq_avx2(auVar84,0x11);
      uVar33 = iVar26 + ((uVar17 ^ uVar16) & (uVar34 ^ uVar17) ^ uVar17) +
               ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 >> 0x16 | uVar34 * 0x400) ^
               (uVar34 >> 2 | uVar34 * 0x40000000));
      auVar65 = vpsrlq_avx2(auVar84,2);
      auVar84 = vpshufd_avx2(auVar64 ^ auVar84 ^ auVar65,0xe8);
      iVar26 = uVar32 + *(int *)(pauVar21[2] + 0xc) + (uVar15 & uVar18) + (~uVar18 & uVar31) +
               ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
               (uVar18 >> 6 | uVar18 * 0x4000000));
      auVar84 = vpslldq_avx2(auVar84,8);
      uVar16 = uVar16 + iVar26;
      auVar75 = vpaddd_avx2(auVar4,auVar84);
      auVar82 = aesenc(auVar87,param_4[2]);
      auVar87 = param_4[3];
      auVar4 = vpaddd_avx2(auVar75,*pauVar23);
      pauVar21[-2] = auVar4;
      auVar84 = vpalignr_avx2(auVar78,auVar77,4);
      auVar4 = vpalignr_avx2(auVar75,auVar79,4);
      uVar32 = iVar26 + ((uVar34 ^ uVar17) & (uVar33 ^ uVar34) ^ uVar34) +
               ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 >> 0x16 | uVar33 * 0x400) ^
               (uVar33 >> 2 | uVar33 * 0x40000000));
      auVar74 = vpsrld_avx2(auVar84,7);
      auVar4 = vpaddd_avx2(auVar77,auVar4);
      auVar83 = vpsrld_avx2(auVar84,3);
      iVar26 = uVar31 + *(int *)pauVar21[3] + (uVar18 & uVar16) + (~uVar16 & uVar15) +
               ((uVar16 >> 0x19 | uVar16 * 0x80) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
               (uVar16 >> 6 | uVar16 * 0x4000000));
      auVar64 = vpslld_avx2(auVar84,0xe);
      uVar17 = uVar17 + iVar26;
      auVar87 = aesenc(auVar82,auVar87);
      auVar84 = vpshufd_avx2(auVar75,0xfa);
      auVar77 = vpsrld_avx2(auVar74,0xb);
      uVar31 = iVar26 + ((uVar33 ^ uVar34) & (uVar32 ^ uVar33) ^ uVar33) +
               ((uVar32 >> 0xd | uVar32 * 0x80000) ^ (uVar32 >> 0x16 | uVar32 * 0x400) ^
               (uVar32 >> 2 | uVar32 * 0x40000000));
      auVar65 = vpslld_avx2(auVar64,0xb);
      auVar76 = vpsrld_avx2(auVar84,10);
      iVar26 = uVar15 + *(int *)(pauVar21[3] + 4) + (uVar16 & uVar17) + (~uVar17 & uVar18) +
               ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
               (uVar17 >> 6 | uVar17 * 0x4000000));
      uVar34 = uVar34 + iVar26;
      auVar84 = vpsrlq_avx2(auVar84,0x11);
      auVar87 = aesenc(auVar87,param_4[4]);
      auVar4 = vpaddd_avx2(auVar4,auVar83 ^ auVar74 ^ auVar64 ^ auVar77 ^ auVar65);
      auVar64 = vpsrlq_avx2(auVar84,2);
      uVar15 = iVar26 + ((uVar32 ^ uVar33) & (uVar31 ^ uVar32) ^ uVar32) +
               ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 >> 0x16 | uVar31 * 0x400) ^
               (uVar31 >> 2 | uVar31 * 0x40000000));
      auVar84 = vpshufd_avx2(auVar76 ^ auVar84 ^ auVar64,0x84);
      auVar84 = vpsrldq_avx2(auVar84,8);
      iVar26 = uVar18 + *(int *)(pauVar21[3] + 8) + (uVar17 & uVar34) + (~uVar34 & uVar16) +
               ((uVar34 >> 0x19 | uVar34 * 0x80) ^ (uVar34 >> 0xb | uVar34 * 0x200000) ^
               (uVar34 >> 6 | uVar34 * 0x4000000));
      auVar4 = vpaddd_avx2(auVar4,auVar84);
      uVar33 = uVar33 + iVar26;
      auVar84 = vpshufd_avx2(auVar4,0x50);
      auVar87 = aesenc(auVar87,param_4[5]);
      auVar64 = vpsrld_avx2(auVar84,10);
      auVar84 = vpsrlq_avx2(auVar84,0x11);
      uVar18 = iVar26 + ((uVar31 ^ uVar32) & (uVar15 ^ uVar31) ^ uVar31) +
               ((uVar15 >> 0xd | uVar15 * 0x80000) ^ (uVar15 >> 0x16 | uVar15 * 0x400) ^
               (uVar15 >> 2 | uVar15 * 0x40000000));
      auVar65 = vpsrlq_avx2(auVar84,2);
      auVar84 = vpshufd_avx2(auVar64 ^ auVar84 ^ auVar65,0xe8);
      iVar26 = uVar16 + *(int *)(pauVar21[3] + 0xc) + (uVar34 & uVar33) + (~uVar33 & uVar17) +
               ((uVar33 >> 0x19 | uVar33 * 0x80) ^ (uVar33 >> 0xb | uVar33 * 0x200000) ^
               (uVar33 >> 6 | uVar33 * 0x4000000));
      auVar84 = vpslldq_avx2(auVar84,8);
      uVar32 = uVar32 + iVar26;
      auVar77 = vpaddd_avx2(auVar4,auVar84);
      auVar82 = aesenc(auVar87,param_4[6]);
      auVar87 = param_4[7];
      auVar4 = vpaddd_avx2(auVar77,pauVar23[1]);
      pauVar21[-1] = auVar4;
      pauVar20 = pauVar21 + -4;
      *(undefined8 *)(pauVar21[-5] + 0x18) = *(undefined8 *)(pauVar21[-3] + 0x18);
      auVar84 = vpalignr_avx2(auVar79,auVar78,4);
      auVar4 = vpalignr_avx2(auVar77,auVar75,4);
      uVar16 = iVar26 + ((uVar15 ^ uVar31) & (uVar18 ^ uVar15) ^ uVar15) +
               ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 0x16 | uVar18 * 0x400) ^
               (uVar18 >> 2 | uVar18 * 0x40000000));
      auVar74 = vpsrld_avx2(auVar84,7);
      auVar4 = vpaddd_avx2(auVar78,auVar4);
      auVar83 = vpsrld_avx2(auVar84,3);
      iVar26 = uVar17 + *(int *)*pauVar21 + (uVar33 & uVar32) + (~uVar32 & uVar34) +
               ((uVar32 >> 0x19 | uVar32 * 0x80) ^ (uVar32 >> 0xb | uVar32 * 0x200000) ^
               (uVar32 >> 6 | uVar32 * 0x4000000));
      auVar64 = vpslld_avx2(auVar84,0xe);
      uVar31 = uVar31 + iVar26;
      auVar87 = aesenc(auVar82,auVar87);
      auVar84 = vpshufd_avx2(auVar77,0xfa);
      auVar78 = vpsrld_avx2(auVar74,0xb);
      uVar17 = iVar26 + ((uVar18 ^ uVar15) & (uVar16 ^ uVar18) ^ uVar18) +
               ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 0x16 | uVar16 * 0x400) ^
               (uVar16 >> 2 | uVar16 * 0x40000000));
      auVar65 = vpslld_avx2(auVar64,0xb);
      auVar76 = vpsrld_avx2(auVar84,10);
      iVar26 = uVar34 + *(int *)(*pauVar21 + 4) + (uVar32 & uVar31) + (~uVar31 & uVar33) +
               ((uVar31 >> 0x19 | uVar31 * 0x80) ^ (uVar31 >> 0xb | uVar31 * 0x200000) ^
               (uVar31 >> 6 | uVar31 * 0x4000000));
      uVar15 = uVar15 + iVar26;
      auVar84 = vpsrlq_avx2(auVar84,0x11);
      auVar87 = aesenc(auVar87,*pauVar22);
      auVar4 = vpaddd_avx2(auVar4,auVar83 ^ auVar74 ^ auVar64 ^ auVar78 ^ auVar65);
      auVar64 = vpsrlq_avx2(auVar84,2);
      uVar34 = iVar26 + ((uVar16 ^ uVar18) & (uVar17 ^ uVar16) ^ uVar16) +
               ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 0x16 | uVar17 * 0x400) ^
               (uVar17 >> 2 | uVar17 * 0x40000000));
      auVar84 = vpshufd_avx2(auVar76 ^ auVar84 ^ auVar64,0x84);
      auVar84 = vpsrldq_avx2(auVar84,8);
      iVar26 = uVar33 + *(int *)(*pauVar21 + 8) + (uVar31 & uVar15) + (~uVar15 & uVar32) +
               ((uVar15 >> 0x19 | uVar15 * 0x80) ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^
               (uVar15 >> 6 | uVar15 * 0x4000000));
      auVar4 = vpaddd_avx2(auVar4,auVar84);
      uVar18 = uVar18 + iVar26;
      auVar84 = vpshufd_avx2(auVar4,0x50);
      auVar87 = aesenc(auVar87,param_4[9]);
      auVar64 = vpsrld_avx2(auVar84,10);
      auVar84 = vpsrlq_avx2(auVar84,0x11);
      uVar33 = iVar26 + ((uVar17 ^ uVar16) & (uVar34 ^ uVar17) ^ uVar17) +
               ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 >> 0x16 | uVar34 * 0x400) ^
               (uVar34 >> 2 | uVar34 * 0x40000000));
      auVar65 = vpsrlq_avx2(auVar84,2);
      auVar84 = vpshufd_avx2(auVar64 ^ auVar84 ^ auVar65,0xe8);
      iVar26 = uVar32 + *(int *)(*pauVar21 + 0xc) + (uVar15 & uVar18) + (~uVar18 & uVar31) +
               ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
               (uVar18 >> 6 | uVar18 * 0x4000000));
      auVar84 = vpslldq_avx2(auVar84,8);
      uVar16 = uVar16 + iVar26;
      auVar78 = vpaddd_avx2(auVar4,auVar84);
      auVar82 = aesenclast(auVar87,param_4[10]);
      auVar62 = aesenc(auVar87,param_4[10]);
      auVar87 = param_4[0xb];
      auVar4 = vpaddd_avx2(auVar78,pauVar23[2]);
      *pauVar20 = auVar4;
      auVar84 = vpalignr_avx2(auVar75,auVar79,4);
      auVar4 = vpalignr_avx2(auVar78,auVar77,4);
      uVar32 = iVar26 + ((uVar34 ^ uVar17) & (uVar33 ^ uVar34) ^ uVar34) +
               ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 >> 0x16 | uVar33 * 0x400) ^
               (uVar33 >> 2 | uVar33 * 0x40000000));
      auVar74 = vpsrld_avx2(auVar84,7);
      auVar4 = vpaddd_avx2(auVar79,auVar4);
      auVar83 = vpsrld_avx2(auVar84,3);
      iVar26 = uVar31 + *(int *)pauVar21[1] + (uVar18 & uVar16) + (~uVar16 & uVar15) +
               ((uVar16 >> 0x19 | uVar16 * 0x80) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
               (uVar16 >> 6 | uVar16 * 0x4000000));
      auVar64 = vpslld_avx2(auVar84,0xe);
      uVar17 = uVar17 + iVar26;
      auVar82 = vpand_avx(auVar82,auVar70);
      auVar87 = aesenc(auVar62,auVar87);
      auVar84 = vpshufd_avx2(auVar78,0xfa);
      auVar79 = vpsrld_avx2(auVar74,0xb);
      uVar31 = iVar26 + ((uVar33 ^ uVar34) & (uVar32 ^ uVar33) ^ uVar33) +
               ((uVar32 >> 0xd | uVar32 * 0x80000) ^ (uVar32 >> 0x16 | uVar32 * 0x400) ^
               (uVar32 >> 2 | uVar32 * 0x40000000));
      auVar65 = vpslld_avx2(auVar64,0xb);
      auVar76 = vpsrld_avx2(auVar84,10);
      iVar26 = uVar15 + *(int *)(pauVar21[1] + 4) + (uVar16 & uVar17) + (~uVar17 & uVar18) +
               ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
               (uVar17 >> 6 | uVar17 * 0x4000000));
      uVar34 = uVar34 + iVar26;
      auVar84 = vpsrlq_avx2(auVar84,0x11);
      auVar63 = aesenclast(auVar87,param_4[0xc]);
      auVar62 = aesenc(auVar87,param_4[0xc]);
      auVar4 = vpaddd_avx2(auVar4,auVar83 ^ auVar74 ^ auVar64 ^ auVar79 ^ auVar65);
      auVar64 = vpsrlq_avx2(auVar84,2);
      uVar15 = iVar26 + ((uVar32 ^ uVar33) & (uVar31 ^ uVar32) ^ uVar32) +
               ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 >> 0x16 | uVar31 * 0x400) ^
               (uVar31 >> 2 | uVar31 * 0x40000000));
      auVar84 = vpshufd_avx2(auVar76 ^ auVar84 ^ auVar64,0x84);
      auVar84 = vpsrldq_avx2(auVar84,8);
      iVar26 = uVar18 + *(int *)(pauVar21[1] + 8) + (uVar17 & uVar34) + (~uVar34 & uVar16) +
               ((uVar34 >> 0x19 | uVar34 * 0x80) ^ (uVar34 >> 0xb | uVar34 * 0x200000) ^
               (uVar34 >> 6 | uVar34 * 0x4000000));
      auVar4 = vpaddd_avx2(auVar4,auVar84);
      uVar33 = uVar33 + iVar26;
      auVar84 = vpshufd_avx2(auVar4,0x50);
      auVar87 = vpand_avx(auVar63,auVar56);
      auVar63 = aesenc(auVar62,param_4[0xd]);
      auVar64 = vpsrld_avx2(auVar84,10);
      auVar84 = vpsrlq_avx2(auVar84,0x11);
      uVar18 = iVar26 + ((uVar31 ^ uVar32) & (uVar15 ^ uVar31) ^ uVar31) +
               ((uVar15 >> 0xd | uVar15 * 0x80000) ^ (uVar15 >> 0x16 | uVar15 * 0x400) ^
               (uVar15 >> 2 | uVar15 * 0x40000000));
      auVar65 = vpsrlq_avx2(auVar84,2);
      auVar84 = vpshufd_avx2(auVar64 ^ auVar84 ^ auVar65,0xe8);
      iVar26 = uVar16 + *(int *)(pauVar21[1] + 0xc) + (uVar34 & uVar33) + (~uVar33 & uVar17) +
               ((uVar33 >> 0x19 | uVar33 * 0x80) ^ (uVar33 >> 0xb | uVar33 * 0x200000) ^
               (uVar33 >> 6 | uVar33 * 0x4000000));
      uVar24 = uVar18 ^ uVar15;
      auVar84 = vpslldq_avx2(auVar84,8);
      uVar32 = uVar32 + iVar26;
      auVar79 = vpaddd_avx2(auVar4,auVar84);
      auVar62 = vpor_avx(auVar82,auVar87);
      auVar82 = aesenclast(auVar63,param_4[0xe]);
      auVar87 = *param_4;
      auVar90 = ZEXT1664(auVar87);
      auVar4 = vpaddd_avx2(auVar79,pauVar23[3]);
      uVar28 = (uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 0x16 | uVar18 * 0x400) ^
               (uVar18 >> 2 | uVar18 * 0x40000000);
      uVar16 = iVar26 + ((uVar15 ^ uVar31) & uVar24 ^ uVar15);
      pauVar21[-3] = auVar4;
      lVar25 = vpextrq_avx(auVar69,1);
      auVar82 = vpand_avx(auVar82,auVar86);
      auVar82 = vpor_avx(auVar62,auVar82);
      auVar85 = ZEXT1664(auVar82);
      *(undefined1 (*) [16])(lVar25 + auVar69._0_8_) = auVar82;
      pauVar29 = (undefined1 (*) [16])(auVar69._0_8_ + 0x10);
      pauVar14 = pauVar23 + 4;
      pauVar23 = pauVar23 + 4;
    } while ((*pauVar14)[3] != '\0');
    auVar69 = vpinsrq_avx(auVar69,pauVar29,0);
    auVar100 = ZEXT1664(auVar69);
    uVar16 = uVar16 + uVar28;
    iVar26 = uVar17 + *(int *)pauVar21[-2] + (uVar33 & uVar32) + (~uVar32 & uVar34) +
             ((uVar32 >> 0x19 | uVar32 * 0x80) ^ (uVar32 >> 0xb | uVar32 * 0x200000) ^
             (uVar32 >> 6 | uVar32 * 0x4000000));
    uVar31 = uVar31 + iVar26;
    uVar17 = iVar26 + (uVar24 & (uVar16 ^ uVar18) ^ uVar18) +
             ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 0x16 | uVar16 * 0x400) ^
             (uVar16 >> 2 | uVar16 * 0x40000000));
    iVar26 = uVar34 + *(int *)(pauVar21[-2] + 4) + (uVar32 & uVar31) + (~uVar31 & uVar33) +
             ((uVar31 >> 0x19 | uVar31 * 0x80) ^ (uVar31 >> 0xb | uVar31 * 0x200000) ^
             (uVar31 >> 6 | uVar31 * 0x4000000));
    uVar15 = uVar15 + iVar26;
    uVar34 = iVar26 + ((uVar16 ^ uVar18) & (uVar17 ^ uVar16) ^ uVar16) +
             ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 0x16 | uVar17 * 0x400) ^
             (uVar17 >> 2 | uVar17 * 0x40000000));
    iVar26 = uVar33 + *(int *)(pauVar21[-2] + 8) + (uVar31 & uVar15) + (~uVar15 & uVar32) +
             ((uVar15 >> 0x19 | uVar15 * 0x80) ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^
             (uVar15 >> 6 | uVar15 * 0x4000000));
    uVar18 = uVar18 + iVar26;
    auVar87 = aesenc(*pauVar29 ^ auVar87 ^ auVar82,param_4[1]);
    uVar33 = iVar26 + ((uVar17 ^ uVar16) & (uVar34 ^ uVar17) ^ uVar17) +
             ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 >> 0x16 | uVar34 * 0x400) ^
             (uVar34 >> 2 | uVar34 * 0x40000000));
    iVar26 = uVar32 + *(int *)(pauVar21[-2] + 0xc) + (uVar15 & uVar18) + (~uVar18 & uVar31) +
             ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
             (uVar18 >> 6 | uVar18 * 0x4000000));
    uVar16 = uVar16 + iVar26;
    auVar87 = aesenc(auVar87,param_4[2]);
    uVar32 = iVar26 + ((uVar34 ^ uVar17) & (uVar33 ^ uVar34) ^ uVar34) +
             ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 >> 0x16 | uVar33 * 0x400) ^
             (uVar33 >> 2 | uVar33 * 0x40000000));
    iVar26 = uVar31 + *(int *)pauVar21[-1] + (uVar18 & uVar16) + (~uVar16 & uVar15) +
             ((uVar16 >> 0x19 | uVar16 * 0x80) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
             (uVar16 >> 6 | uVar16 * 0x4000000));
    uVar17 = uVar17 + iVar26;
    auVar87 = aesenc(auVar87,param_4[3]);
    uVar31 = iVar26 + ((uVar33 ^ uVar34) & (uVar32 ^ uVar33) ^ uVar33) +
             ((uVar32 >> 0xd | uVar32 * 0x80000) ^ (uVar32 >> 0x16 | uVar32 * 0x400) ^
             (uVar32 >> 2 | uVar32 * 0x40000000));
    iVar26 = uVar15 + *(int *)(pauVar21[-1] + 4) + (uVar16 & uVar17) + (~uVar17 & uVar18) +
             ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
             (uVar17 >> 6 | uVar17 * 0x4000000));
    uVar34 = uVar34 + iVar26;
    auVar87 = aesenc(auVar87,param_4[4]);
    uVar15 = iVar26 + ((uVar32 ^ uVar33) & (uVar31 ^ uVar32) ^ uVar32) +
             ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 >> 0x16 | uVar31 * 0x400) ^
             (uVar31 >> 2 | uVar31 * 0x40000000));
    iVar26 = uVar18 + *(int *)(pauVar21[-1] + 8) + (uVar17 & uVar34) + (~uVar34 & uVar16) +
             ((uVar34 >> 0x19 | uVar34 * 0x80) ^ (uVar34 >> 0xb | uVar34 * 0x200000) ^
             (uVar34 >> 6 | uVar34 * 0x4000000));
    uVar33 = uVar33 + iVar26;
    auVar87 = aesenc(auVar87,param_4[5]);
    uVar18 = iVar26 + ((uVar31 ^ uVar32) & (uVar15 ^ uVar31) ^ uVar31) +
             ((uVar15 >> 0xd | uVar15 * 0x80000) ^ (uVar15 >> 0x16 | uVar15 * 0x400) ^
             (uVar15 >> 2 | uVar15 * 0x40000000));
    iVar26 = uVar16 + *(int *)(pauVar21[-1] + 0xc) + (uVar34 & uVar33) + (~uVar33 & uVar17) +
             ((uVar33 >> 0x19 | uVar33 * 0x80) ^ (uVar33 >> 0xb | uVar33 * 0x200000) ^
             (uVar33 >> 6 | uVar33 * 0x4000000));
    uVar32 = uVar32 + iVar26;
    auVar87 = aesenc(auVar87,param_4[6]);
    uVar16 = iVar26 + ((uVar15 ^ uVar31) & (uVar18 ^ uVar15) ^ uVar15) +
             ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 0x16 | uVar18 * 0x400) ^
             (uVar18 >> 2 | uVar18 * 0x40000000));
    iVar26 = uVar17 + *(int *)*pauVar20 + (uVar33 & uVar32) + (~uVar32 & uVar34) +
             ((uVar32 >> 0x19 | uVar32 * 0x80) ^ (uVar32 >> 0xb | uVar32 * 0x200000) ^
             (uVar32 >> 6 | uVar32 * 0x4000000));
    uVar31 = uVar31 + iVar26;
    auVar87 = aesenc(auVar87,param_4[7]);
    uVar17 = iVar26 + ((uVar18 ^ uVar15) & (uVar16 ^ uVar18) ^ uVar18) +
             ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 0x16 | uVar16 * 0x400) ^
             (uVar16 >> 2 | uVar16 * 0x40000000));
    iVar26 = uVar34 + *(int *)(pauVar21[-4] + 4) + (uVar32 & uVar31) + (~uVar31 & uVar33) +
             ((uVar31 >> 0x19 | uVar31 * 0x80) ^ (uVar31 >> 0xb | uVar31 * 0x200000) ^
             (uVar31 >> 6 | uVar31 * 0x4000000));
    uVar15 = uVar15 + iVar26;
    auVar87 = aesenc(auVar87,*pauVar22);
    uVar34 = iVar26 + ((uVar16 ^ uVar18) & (uVar17 ^ uVar16) ^ uVar16) +
             ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 0x16 | uVar17 * 0x400) ^
             (uVar17 >> 2 | uVar17 * 0x40000000));
    iVar26 = uVar33 + *(int *)(pauVar21[-4] + 8) + (uVar31 & uVar15) + (~uVar15 & uVar32) +
             ((uVar15 >> 0x19 | uVar15 * 0x80) ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^
             (uVar15 >> 6 | uVar15 * 0x4000000));
    uVar18 = uVar18 + iVar26;
    auVar87 = aesenc(auVar87,param_4[9]);
    uVar33 = iVar26 + ((uVar17 ^ uVar16) & (uVar34 ^ uVar17) ^ uVar17) +
             ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 >> 0x16 | uVar34 * 0x400) ^
             (uVar34 >> 2 | uVar34 * 0x40000000));
    iVar26 = uVar32 + *(int *)(pauVar21[-4] + 0xc) + (uVar15 & uVar18) + (~uVar18 & uVar31) +
             ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
             (uVar18 >> 6 | uVar18 * 0x4000000));
    uVar16 = uVar16 + iVar26;
    auVar62 = aesenclast(auVar87,param_4[10]);
    auVar82 = aesenc(auVar87,param_4[10]);
    uVar32 = iVar26 + ((uVar34 ^ uVar17) & (uVar33 ^ uVar34) ^ uVar34) +
             ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 >> 0x16 | uVar33 * 0x400) ^
             (uVar33 >> 2 | uVar33 * 0x40000000));
    iVar26 = uVar31 + *(int *)pauVar21[-3] + (uVar18 & uVar16) + (~uVar16 & uVar15) +
             ((uVar16 >> 0x19 | uVar16 * 0x80) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
             (uVar16 >> 6 | uVar16 * 0x4000000));
    uVar17 = uVar17 + iVar26;
    auVar87 = vpand_avx(auVar62,auVar70);
    auVar82 = aesenc(auVar82,param_4[0xb]);
    uVar31 = iVar26 + ((uVar33 ^ uVar34) & (uVar32 ^ uVar33) ^ uVar33) +
             ((uVar32 >> 0xd | uVar32 * 0x80000) ^ (uVar32 >> 0x16 | uVar32 * 0x400) ^
             (uVar32 >> 2 | uVar32 * 0x40000000));
    iVar26 = uVar15 + *(int *)(pauVar21[-3] + 4) + (uVar16 & uVar17) + (~uVar17 & uVar18) +
             ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
             (uVar17 >> 6 | uVar17 * 0x4000000));
    uVar34 = uVar34 + iVar26;
    auVar63 = aesenclast(auVar82,param_4[0xc]);
    auVar62 = aesenc(auVar82,param_4[0xc]);
    uVar15 = iVar26 + ((uVar32 ^ uVar33) & (uVar31 ^ uVar32) ^ uVar32) +
             ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 >> 0x16 | uVar31 * 0x400) ^
             (uVar31 >> 2 | uVar31 * 0x40000000));
    iVar26 = uVar18 + *(int *)(pauVar21[-3] + 8) + (uVar17 & uVar34) + (~uVar34 & uVar16) +
             ((uVar34 >> 0x19 | uVar34 * 0x80) ^ (uVar34 >> 0xb | uVar34 * 0x200000) ^
             (uVar34 >> 6 | uVar34 * 0x4000000));
    uVar33 = uVar33 + iVar26;
    auVar82 = vpand_avx(auVar63,auVar56);
    auVar62 = aesenc(auVar62,param_4[0xd]);
    uVar18 = iVar26 + ((uVar31 ^ uVar32) & (uVar15 ^ uVar31) ^ uVar31) +
             ((uVar15 >> 0xd | uVar15 * 0x80000) ^ (uVar15 >> 0x16 | uVar15 * 0x400) ^
             (uVar15 >> 2 | uVar15 * 0x40000000));
    iVar26 = uVar16 + *(int *)(pauVar21[-3] + 0xc) + (uVar34 & uVar33) + (~uVar33 & uVar17) +
             ((uVar33 >> 0x19 | uVar33 * 0x80) ^ (uVar33 >> 0xb | uVar33 * 0x200000) ^
             (uVar33 >> 6 | uVar33 * 0x4000000));
    auVar82 = vpor_avx(auVar87,auVar82);
    auVar87 = aesenclast(auVar62,param_4[0xe]);
    auVar90 = ZEXT1664(*param_4);
    lVar25 = vpextrq_avx(auVar69,1);
    puVar1 = *(uint **)(pauVar21[0xd] + 8);
    pauVar23 = pauVar21 + 10;
    auVar87 = vpand_avx(auVar87,auVar86);
    auVar87 = vpor_avx(auVar82,auVar87);
    auVar85 = ZEXT1664(auVar87);
    *(undefined1 (*) [16])(lVar25 + auVar69._0_8_) = auVar87;
    pauVar29 = (undefined1 (*) [16])(auVar69._0_8_ + 0x10);
    uVar16 = iVar26 + ((uVar15 ^ uVar31) & (uVar18 ^ uVar15) ^ uVar15) +
             ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 0x16 | uVar18 * 0x400) ^
             (uVar18 >> 2 | uVar18 * 0x40000000)) + *puVar1;
    uVar18 = uVar18 + puVar1[1];
    uVar15 = uVar15 + puVar1[2];
    uVar31 = uVar31 + puVar1[3];
    uVar32 = uVar32 + iVar26 + puVar1[4];
    uVar33 = uVar33 + puVar1[5];
    uVar34 = uVar34 + puVar1[6];
    uVar17 = uVar17 + puVar1[7];
    *puVar1 = uVar16;
    puVar1[1] = uVar18;
    puVar1[2] = uVar15;
    puVar1[3] = uVar31;
    puVar1[4] = uVar32;
    puVar1[5] = uVar33;
    puVar1[6] = uVar34;
    puVar1[7] = uVar17;
    if (pauVar29 == *(undefined1 (**) [16])(pauVar21[0xc] + 0x10)) break;
    uVar28 = 0;
    uVar24 = uVar18 ^ uVar15;
    do {
      auVar69 = vpinsrq_avx(auVar100._0_16_,pauVar29,0);
      auVar100 = ZEXT1664(auVar69);
      uVar16 = uVar16 + uVar28;
      iVar26 = uVar17 + *(int *)(*pauVar23 + 0x10) + (uVar33 & uVar32) + (~uVar32 & uVar34) +
               ((uVar32 >> 0x19 | uVar32 << 7) ^ (uVar32 >> 0xb | uVar32 << 0x15) ^
               (uVar32 >> 6 | uVar32 << 0x1a));
      uVar31 = uVar31 + iVar26;
      uVar17 = iVar26 + (uVar24 & (uVar16 ^ uVar18) ^ uVar18) +
               ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 0x16 | uVar16 * 0x400) ^
               (uVar16 >> 2 | uVar16 * 0x40000000));
      iVar26 = uVar34 + *(int *)(*pauVar23 + 0x14) + (uVar32 & uVar31) + (~uVar31 & uVar33) +
               ((uVar31 >> 0x19 | uVar31 * 0x80) ^ (uVar31 >> 0xb | uVar31 * 0x200000) ^
               (uVar31 >> 6 | uVar31 * 0x4000000));
      uVar15 = uVar15 + iVar26;
      uVar34 = iVar26 + ((uVar16 ^ uVar18) & (uVar17 ^ uVar16) ^ uVar16) +
               ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 0x16 | uVar17 * 0x400) ^
               (uVar17 >> 2 | uVar17 * 0x40000000));
      iVar26 = uVar33 + *(int *)(*pauVar23 + 0x18) + (uVar31 & uVar15) + (~uVar15 & uVar32) +
               ((uVar15 >> 0x19 | uVar15 * 0x80) ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^
               (uVar15 >> 6 | uVar15 * 0x4000000));
      uVar18 = uVar18 + iVar26;
      auVar87 = aesenc(*pauVar29 ^ auVar90._0_16_ ^ auVar85._0_16_,param_4[1]);
      uVar33 = iVar26 + ((uVar17 ^ uVar16) & (uVar34 ^ uVar17) ^ uVar17) +
               ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 >> 0x16 | uVar34 * 0x400) ^
               (uVar34 >> 2 | uVar34 * 0x40000000));
      iVar26 = uVar32 + *(int *)(*pauVar23 + 0x1c) + (uVar15 & uVar18) + (~uVar18 & uVar31) +
               ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
               (uVar18 >> 6 | uVar18 * 0x4000000));
      uVar16 = uVar16 + iVar26;
      auVar87 = aesenc(auVar87,param_4[2]);
      uVar32 = iVar26 + ((uVar34 ^ uVar17) & (uVar33 ^ uVar34) ^ uVar34) +
               ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 >> 0x16 | uVar33 * 0x400) ^
               (uVar33 >> 2 | uVar33 * 0x40000000));
      iVar26 = uVar31 + *(int *)(pauVar23[1] + 0x10) + (uVar18 & uVar16) + (~uVar16 & uVar15) +
               ((uVar16 >> 0x19 | uVar16 * 0x80) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
               (uVar16 >> 6 | uVar16 * 0x4000000));
      uVar17 = uVar17 + iVar26;
      auVar87 = aesenc(auVar87,param_4[3]);
      uVar31 = iVar26 + ((uVar33 ^ uVar34) & (uVar32 ^ uVar33) ^ uVar33) +
               ((uVar32 >> 0xd | uVar32 * 0x80000) ^ (uVar32 >> 0x16 | uVar32 * 0x400) ^
               (uVar32 >> 2 | uVar32 * 0x40000000));
      iVar26 = uVar15 + *(int *)(pauVar23[1] + 0x14) + (uVar16 & uVar17) + (~uVar17 & uVar18) +
               ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
               (uVar17 >> 6 | uVar17 * 0x4000000));
      uVar34 = uVar34 + iVar26;
      auVar87 = aesenc(auVar87,param_4[4]);
      uVar15 = iVar26 + ((uVar32 ^ uVar33) & (uVar31 ^ uVar32) ^ uVar32) +
               ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 >> 0x16 | uVar31 * 0x400) ^
               (uVar31 >> 2 | uVar31 * 0x40000000));
      iVar26 = uVar18 + *(int *)(pauVar23[1] + 0x18) + (uVar17 & uVar34) + (~uVar34 & uVar16) +
               ((uVar34 >> 0x19 | uVar34 * 0x80) ^ (uVar34 >> 0xb | uVar34 * 0x200000) ^
               (uVar34 >> 6 | uVar34 * 0x4000000));
      uVar33 = uVar33 + iVar26;
      auVar87 = aesenc(auVar87,param_4[5]);
      uVar18 = iVar26 + ((uVar31 ^ uVar32) & (uVar15 ^ uVar31) ^ uVar31) +
               ((uVar15 >> 0xd | uVar15 * 0x80000) ^ (uVar15 >> 0x16 | uVar15 * 0x400) ^
               (uVar15 >> 2 | uVar15 * 0x40000000));
      iVar26 = uVar16 + *(int *)(pauVar23[1] + 0x1c) + (uVar34 & uVar33) + (~uVar33 & uVar17) +
               ((uVar33 >> 0x19 | uVar33 * 0x80) ^ (uVar33 >> 0xb | uVar33 * 0x200000) ^
               (uVar33 >> 6 | uVar33 * 0x4000000));
      uVar32 = uVar32 + iVar26;
      auVar87 = aesenc(auVar87,param_4[6]);
      uVar16 = iVar26 + ((uVar15 ^ uVar31) & (uVar18 ^ uVar15) ^ uVar15) +
               ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 0x16 | uVar18 * 0x400) ^
               (uVar18 >> 2 | uVar18 * 0x40000000));
      iVar26 = uVar17 + *(int *)(pauVar23[-2] + 0x10) + (uVar33 & uVar32) + (~uVar32 & uVar34) +
               ((uVar32 >> 0x19 | uVar32 * 0x80) ^ (uVar32 >> 0xb | uVar32 * 0x200000) ^
               (uVar32 >> 6 | uVar32 * 0x4000000));
      uVar31 = uVar31 + iVar26;
      auVar87 = aesenc(auVar87,param_4[7]);
      uVar17 = iVar26 + ((uVar18 ^ uVar15) & (uVar16 ^ uVar18) ^ uVar18) +
               ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 0x16 | uVar16 * 0x400) ^
               (uVar16 >> 2 | uVar16 * 0x40000000));
      iVar26 = uVar34 + *(int *)(pauVar23[-2] + 0x14) + (uVar32 & uVar31) + (~uVar31 & uVar33) +
               ((uVar31 >> 0x19 | uVar31 * 0x80) ^ (uVar31 >> 0xb | uVar31 * 0x200000) ^
               (uVar31 >> 6 | uVar31 * 0x4000000));
      uVar15 = uVar15 + iVar26;
      auVar87 = aesenc(auVar87,*pauVar22);
      uVar34 = iVar26 + ((uVar16 ^ uVar18) & (uVar17 ^ uVar16) ^ uVar16) +
               ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 0x16 | uVar17 * 0x400) ^
               (uVar17 >> 2 | uVar17 * 0x40000000));
      iVar26 = uVar33 + *(int *)(pauVar23[-2] + 0x18) + (uVar31 & uVar15) + (~uVar15 & uVar32) +
               ((uVar15 >> 0x19 | uVar15 * 0x80) ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^
               (uVar15 >> 6 | uVar15 * 0x4000000));
      uVar18 = uVar18 + iVar26;
      auVar87 = aesenc(auVar87,param_4[9]);
      uVar33 = iVar26 + ((uVar17 ^ uVar16) & (uVar34 ^ uVar17) ^ uVar17) +
               ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 >> 0x16 | uVar34 * 0x400) ^
               (uVar34 >> 2 | uVar34 * 0x40000000));
      iVar26 = uVar32 + *(int *)(pauVar23[-2] + 0x1c) + (uVar15 & uVar18) + (~uVar18 & uVar31) +
               ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
               (uVar18 >> 6 | uVar18 * 0x4000000));
      uVar16 = uVar16 + iVar26;
      auVar62 = aesenclast(auVar87,param_4[10]);
      auVar82 = aesenc(auVar87,param_4[10]);
      uVar32 = iVar26 + ((uVar34 ^ uVar17) & (uVar33 ^ uVar34) ^ uVar34) +
               ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 >> 0x16 | uVar33 * 0x400) ^
               (uVar33 >> 2 | uVar33 * 0x40000000));
      iVar26 = uVar31 + *(int *)(pauVar23[-1] + 0x10) + (uVar18 & uVar16) + (~uVar16 & uVar15) +
               ((uVar16 >> 0x19 | uVar16 * 0x80) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
               (uVar16 >> 6 | uVar16 * 0x4000000));
      uVar17 = uVar17 + iVar26;
      auVar87 = vpand_avx(auVar62,auVar70);
      auVar82 = aesenc(auVar82,param_4[0xb]);
      uVar31 = iVar26 + ((uVar33 ^ uVar34) & (uVar32 ^ uVar33) ^ uVar33) +
               ((uVar32 >> 0xd | uVar32 * 0x80000) ^ (uVar32 >> 0x16 | uVar32 * 0x400) ^
               (uVar32 >> 2 | uVar32 * 0x40000000));
      iVar26 = uVar15 + *(int *)(pauVar23[-1] + 0x14) + (uVar16 & uVar17) + (~uVar17 & uVar18) +
               ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
               (uVar17 >> 6 | uVar17 * 0x4000000));
      uVar34 = uVar34 + iVar26;
      auVar63 = aesenclast(auVar82,param_4[0xc]);
      auVar62 = aesenc(auVar82,param_4[0xc]);
      uVar15 = iVar26 + ((uVar32 ^ uVar33) & (uVar31 ^ uVar32) ^ uVar32) +
               ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 >> 0x16 | uVar31 * 0x400) ^
               (uVar31 >> 2 | uVar31 * 0x40000000));
      iVar26 = uVar18 + *(int *)(pauVar23[-1] + 0x18) + (uVar17 & uVar34) + (~uVar34 & uVar16) +
               ((uVar34 >> 0x19 | uVar34 * 0x80) ^ (uVar34 >> 0xb | uVar34 * 0x200000) ^
               (uVar34 >> 6 | uVar34 * 0x4000000));
      uVar33 = uVar33 + iVar26;
      auVar82 = vpand_avx(auVar63,auVar56);
      auVar62 = aesenc(auVar62,param_4[0xd]);
      uVar18 = iVar26 + ((uVar31 ^ uVar32) & (uVar15 ^ uVar31) ^ uVar31) +
               ((uVar15 >> 0xd | uVar15 * 0x80000) ^ (uVar15 >> 0x16 | uVar15 * 0x400) ^
               (uVar15 >> 2 | uVar15 * 0x40000000));
      iVar26 = uVar16 + *(int *)(pauVar23[-1] + 0x1c) + (uVar34 & uVar33) + (~uVar33 & uVar17) +
               ((uVar33 >> 0x19 | uVar33 * 0x80) ^ (uVar33 >> 0xb | uVar33 * 0x200000) ^
               (uVar33 >> 6 | uVar33 * 0x4000000));
      uVar24 = uVar18 ^ uVar15;
      uVar32 = uVar32 + iVar26;
      auVar82 = vpor_avx(auVar87,auVar82);
      auVar87 = aesenclast(auVar62,param_4[0xe]);
      auVar90 = ZEXT1664(*param_4);
      uVar28 = (uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 0x16 | uVar18 * 0x400) ^
               (uVar18 >> 2 | uVar18 * 0x40000000);
      uVar16 = iVar26 + ((uVar15 ^ uVar31) & uVar24 ^ uVar15);
      lVar35 = auVar69._0_8_;
      lVar25 = vpextrq_avx(auVar69,1);
      auVar87 = vpand_avx(auVar87,auVar86);
      auVar87 = vpor_avx(auVar82,auVar87);
      auVar85 = ZEXT1664(auVar87);
      pauVar23 = pauVar23 + -4;
      *(undefined1 (*) [16])(lVar25 + lVar35) = auVar87;
      pauVar29 = (undefined1 (*) [16])(lVar35 + 0x10);
    } while (pauVar20 <= pauVar23);
    puVar1 = *(uint **)(pauVar21[0xd] + 8);
    pauVar29 = (undefined1 (*) [16])(lVar35 + 0x50);
    lVar35 = *(long *)(pauVar21[0xd] + 0x10);
    pauVar20 = pauVar21 + 10;
    uVar16 = uVar16 + uVar28 + *puVar1;
    uVar18 = uVar18 + puVar1[1];
    uVar15 = uVar15 + puVar1[2];
    uVar31 = uVar31 + puVar1[3];
    uVar32 = uVar32 + puVar1[4];
    uVar33 = uVar33 + puVar1[5];
    uVar34 = uVar34 + puVar1[6];
    uVar17 = uVar17 + puVar1[7];
    pauVar2 = *(undefined1 (**) [16])(pauVar21[0xc] + 0x10);
    *puVar1 = uVar16;
    pauVar23 = (undefined1 (*) [32])(*pauVar29 + lVar35);
    if (pauVar29 == pauVar2) {
      pauVar23 = pauVar20;
    }
    puVar1[1] = uVar18;
    puVar1[2] = uVar15;
    puVar1[3] = uVar31;
    puVar1[4] = uVar32;
    puVar1[5] = uVar33;
    puVar1[6] = uVar34;
    puVar1[7] = uVar17;
  } while (pauVar29 <= pauVar2);
  **(undefined1 (**) [16])pauVar21[0xd] = auVar87;
  return uVar16;
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aesni_cbc_sha256_enc_xop(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long in_stack_00000008;
  
  in_stack_00000008 = in_stack_00000008 - param_1;
  auVar1 = vpshufb_avx(*(undefined1 (*) [16])(in_stack_00000008 + param_1),_DAT_00104480);
  auVar2 = vpshufb_avx(*(undefined1 (*) [16])(in_stack_00000008 + 0x10 + param_1),_DAT_00104480);
  auVar3 = vpshufb_avx(*(undefined1 (*) [16])(in_stack_00000008 + 0x20 + param_1),_DAT_00104480);
  vpaddd_avx(auVar1,_K256);
  auVar4 = vpshufb_avx(*(undefined1 (*) [16])(in_stack_00000008 + 0x30 + param_1),_DAT_00104480);
  vpaddd_avx(auVar2,_DAT_001042a0);
  vpaddd_avx(auVar3,_DAT_001042c0);
  vpaddd_avx(auVar4,_DAT_001042e0);
  vpalignr_avx(auVar2,auVar1,4);
  vpalignr_avx(auVar4,auVar3,4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aesni_cbc_sha256_enc_avx
               (undefined1 (*param_1) [16],long param_2,long param_3,undefined1 (*param_4) [16],
               undefined1 (*param_5) [16],uint *param_6,long param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 (*pauVar5) [16];
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  uint uVar10;
  undefined1 (*pauVar11) [16];
  uint uVar12;
  int iVar13;
  undefined1 (*pauVar14) [16];
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
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
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  
  param_2 = param_2 - (long)param_1;
  param_7 = param_7 - (long)param_1;
  pauVar9 = param_1 + param_3 * 4;
  auVar33 = *param_5;
  lVar21 = (ulong)*(uint *)param_4[0xf] - 9;
  uVar6 = *param_6;
  uVar10 = param_6[1];
  uVar7 = param_6[2];
  uVar8 = param_6[3];
  uVar20 = param_6[4];
  uVar19 = param_6[5];
  uVar18 = param_6[6];
  uVar17 = param_6[7];
  auVar1 = *(undefined1 (*) [16])(&DAT_001044a0 + lVar21 * 8);
  auVar2 = *(undefined1 (*) [16])(&DAT_001044b0 + lVar21 * 8);
  auVar3 = *(undefined1 (*) [16])(&DAT_001044c0 + lVar21 * 8);
  auVar32 = *param_4;
  do {
    auVar29 = vpshufb_avx(*(undefined1 (*) [16])(param_7 + (long)param_1),_DAT_00104480);
    auVar24 = vpshufb_avx(*(undefined1 (*) [16])(param_7 + 0x10 + (long)param_1),_DAT_00104480);
    auVar25 = vpshufb_avx(*(undefined1 (*) [16])(param_7 + 0x20 + (long)param_1),_DAT_00104480);
    local_c0 = vpaddd_avx(auVar29,_K256);
    auVar4 = vpshufb_avx(*(undefined1 (*) [16])(param_7 + 0x30 + (long)param_1),_DAT_00104480);
    local_b0 = vpaddd_avx(auVar24,_DAT_001042a0);
    local_a0 = vpaddd_avx(auVar25,_DAT_001042c0);
    local_90 = vpaddd_avx(auVar4,_DAT_001042e0);
    uVar12 = uVar10 ^ uVar7;
    pauVar11 = (undefined1 (*) [16])&K256;
    do {
      pauVar14 = param_1;
      auVar31 = vpalignr_avx(auVar24,auVar29,4);
      auVar22 = vpalignr_avx(auVar4,auVar25,4);
      uVar15 = (uVar20 >> 0xe | uVar20 << 0x12) ^ uVar20;
      auVar26 = vpsrld_avx(auVar31,7);
      uVar16 = (uVar6 >> 9 | uVar6 << 0x17) ^ uVar6;
      auVar29 = vpaddd_avx(auVar29,auVar22);
      uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar20;
      auVar30 = vpsrld_avx(auVar31,3);
      auVar22 = vpslld_avx(auVar31,0xe);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar6;
      iVar13 = uVar17 + local_c0._0_4_ + ((uVar19 ^ uVar18) & uVar20 ^ uVar18) +
               (uVar15 >> 6 | uVar15 << 0x1a);
      auVar31 = vpshufd_avx(auVar4,0xfa);
      uVar8 = uVar8 + iVar13;
      auVar27 = vpsrld_avx(auVar26,0xb);
      uVar17 = (uVar16 >> 2 | uVar16 << 0x1e) + iVar13 + (uVar12 & (uVar6 ^ uVar10) ^ uVar10);
      uVar12 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
      auVar23 = vpslld_avx(auVar22,0xb);
      uVar15 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar8;
      auVar28 = vpsrld_avx(auVar31,10);
      auVar31 = vpsrlq_avx(auVar31,0x11);
      uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar17;
      auVar29 = vpaddd_avx(auVar29,auVar30 ^ auVar26 ^ auVar22 ^ auVar27 ^ auVar23);
      iVar13 = uVar18 + local_c0._4_4_ + ((uVar20 ^ uVar19) & uVar8 ^ uVar19) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      uVar7 = uVar7 + iVar13;
      auVar22 = vpsrlq_avx(auVar31,2);
      uVar18 = (uVar15 >> 2 | uVar15 << 0x1e) +
               iVar13 + ((uVar6 ^ uVar10) & (uVar17 ^ uVar6) ^ uVar6);
      uVar12 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
      auVar31 = vpshufd_avx(auVar28 ^ auVar31 ^ auVar22,0x84);
      uVar15 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
      auVar31 = vpsrldq_avx(auVar31,8);
      auVar22 = aesenc(*pauVar14 ^ auVar32 ^ auVar33,param_4[1]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar7;
      auVar33 = vpaddd_avx(auVar29,auVar31);
      auVar32 = vpshufd_avx(auVar33,0x50);
      auVar29 = vpsrld_avx(auVar32,10);
      uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar18;
      iVar13 = uVar19 + local_c0._8_4_ + ((uVar8 ^ uVar20) & uVar7 ^ uVar20) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      auVar32 = vpsrlq_avx(auVar32,0x11);
      uVar10 = uVar10 + iVar13;
      uVar19 = (uVar15 >> 2 | uVar15 << 0x1e) +
               iVar13 + ((uVar17 ^ uVar6) & (uVar18 ^ uVar17) ^ uVar17);
      auVar31 = vpsrlq_avx(auVar32,2);
      uVar12 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
      auVar32 = vpshufd_avx(auVar29 ^ auVar32 ^ auVar31,0xe8);
      uVar15 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
      auVar32 = vpslldq_avx(auVar32,8);
      auVar31 = aesenc(auVar22,param_4[2]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar10;
      iVar13 = uVar20 + local_c0._12_4_;
      auVar29 = vpaddd_avx(auVar33,auVar32);
      local_c0 = vpaddd_avx(auVar29,pauVar11[8]);
      uVar20 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar19;
      iVar13 = iVar13 + ((uVar7 ^ uVar8) & uVar10 ^ uVar8) + (uVar12 >> 6 | uVar12 << 0x1a);
      uVar6 = uVar6 + iVar13;
      uVar20 = (uVar20 >> 2 | uVar20 << 0x1e) +
               iVar13 + ((uVar18 ^ uVar17) & (uVar19 ^ uVar18) ^ uVar18);
      auVar32 = vpalignr_avx(auVar25,auVar24,4);
      auVar33 = vpalignr_avx(auVar29,auVar4,4);
      uVar12 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
      auVar22 = vpsrld_avx(auVar32,7);
      uVar15 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
      auVar33 = vpaddd_avx(auVar24,auVar33);
      auVar26 = aesenc(auVar31,param_4[3]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar6;
      auVar27 = vpsrld_avx(auVar32,3);
      auVar24 = vpslld_avx(auVar32,0xe);
      uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar20;
      iVar13 = uVar8 + local_b0._0_4_ + ((uVar10 ^ uVar7) & uVar6 ^ uVar7) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      auVar32 = vpshufd_avx(auVar29,0xfa);
      uVar17 = uVar17 + iVar13;
      auVar23 = vpsrld_avx(auVar22,0xb);
      uVar8 = (uVar15 >> 2 | uVar15 << 0x1e) +
              iVar13 + ((uVar19 ^ uVar18) & (uVar20 ^ uVar19) ^ uVar19);
      uVar12 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
      auVar31 = vpslld_avx(auVar24,0xb);
      uVar15 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
      auVar28 = aesenc(auVar26,param_4[4]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar17;
      auVar26 = vpsrld_avx(auVar32,10);
      auVar32 = vpsrlq_avx(auVar32,0x11);
      uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar8;
      auVar33 = vpaddd_avx(auVar33,auVar27 ^ auVar22 ^ auVar24 ^ auVar23 ^ auVar31);
      iVar13 = uVar7 + local_b0._4_4_ + ((uVar6 ^ uVar10) & uVar17 ^ uVar10) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      uVar18 = uVar18 + iVar13;
      auVar24 = vpsrlq_avx(auVar32,2);
      uVar7 = (uVar15 >> 2 | uVar15 << 0x1e) +
              iVar13 + ((uVar20 ^ uVar19) & (uVar8 ^ uVar20) ^ uVar20);
      uVar12 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
      auVar32 = vpshufd_avx(auVar26 ^ auVar32 ^ auVar24,0x84);
      uVar15 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
      auVar32 = vpsrldq_avx(auVar32,8);
      auVar22 = aesenc(auVar28,param_4[5]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar18;
      auVar33 = vpaddd_avx(auVar33,auVar32);
      auVar32 = vpshufd_avx(auVar33,0x50);
      auVar24 = vpsrld_avx(auVar32,10);
      uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar7;
      iVar13 = uVar10 + local_b0._8_4_ + ((uVar17 ^ uVar6) & uVar18 ^ uVar6) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      auVar32 = vpsrlq_avx(auVar32,0x11);
      uVar19 = uVar19 + iVar13;
      uVar10 = (uVar15 >> 2 | uVar15 << 0x1e) +
               iVar13 + ((uVar8 ^ uVar20) & (uVar7 ^ uVar8) ^ uVar8);
      auVar31 = vpsrlq_avx(auVar32,2);
      uVar12 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
      auVar32 = vpshufd_avx(auVar24 ^ auVar32 ^ auVar31,0xe8);
      uVar15 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
      auVar32 = vpslldq_avx(auVar32,8);
      auVar31 = aesenc(auVar22,param_4[6]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar19;
      iVar13 = uVar6 + local_b0._12_4_;
      auVar24 = vpaddd_avx(auVar33,auVar32);
      local_b0 = vpaddd_avx(auVar24,pauVar11[10]);
      uVar6 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar10;
      iVar13 = iVar13 + ((uVar18 ^ uVar17) & uVar19 ^ uVar17) + (uVar12 >> 6 | uVar12 << 0x1a);
      uVar20 = uVar20 + iVar13;
      uVar6 = (uVar6 >> 2 | uVar6 << 0x1e) + iVar13 + ((uVar7 ^ uVar8) & (uVar10 ^ uVar7) ^ uVar7);
      auVar32 = vpalignr_avx(auVar4,auVar25,4);
      auVar33 = vpalignr_avx(auVar24,auVar29,4);
      uVar12 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
      auVar22 = vpsrld_avx(auVar32,7);
      uVar15 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
      auVar33 = vpaddd_avx(auVar25,auVar33);
      auVar26 = aesenc(auVar31,param_4[7]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar20;
      auVar27 = vpsrld_avx(auVar32,3);
      auVar25 = vpslld_avx(auVar32,0xe);
      uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar6;
      iVar13 = uVar17 + local_a0._0_4_ + ((uVar19 ^ uVar18) & uVar20 ^ uVar18) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      auVar32 = vpshufd_avx(auVar24,0xfa);
      uVar8 = uVar8 + iVar13;
      auVar23 = vpsrld_avx(auVar22,0xb);
      uVar17 = (uVar15 >> 2 | uVar15 << 0x1e) +
               iVar13 + ((uVar10 ^ uVar7) & (uVar6 ^ uVar10) ^ uVar10);
      uVar12 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
      auVar31 = vpslld_avx(auVar25,0xb);
      uVar15 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
      auVar28 = aesenc(auVar26,param_4[8]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar8;
      auVar26 = vpsrld_avx(auVar32,10);
      auVar32 = vpsrlq_avx(auVar32,0x11);
      uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar17;
      auVar33 = vpaddd_avx(auVar33,auVar27 ^ auVar22 ^ auVar25 ^ auVar23 ^ auVar31);
      iVar13 = uVar18 + local_a0._4_4_ + ((uVar20 ^ uVar19) & uVar8 ^ uVar19) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      uVar7 = uVar7 + iVar13;
      auVar25 = vpsrlq_avx(auVar32,2);
      uVar18 = (uVar15 >> 2 | uVar15 << 0x1e) +
               iVar13 + ((uVar6 ^ uVar10) & (uVar17 ^ uVar6) ^ uVar6);
      uVar12 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
      auVar32 = vpshufd_avx(auVar26 ^ auVar32 ^ auVar25,0x84);
      uVar15 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
      auVar32 = vpsrldq_avx(auVar32,8);
      auVar22 = aesenc(auVar28,param_4[9]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar7;
      auVar33 = vpaddd_avx(auVar33,auVar32);
      auVar32 = vpshufd_avx(auVar33,0x50);
      auVar25 = vpsrld_avx(auVar32,10);
      uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar18;
      iVar13 = uVar19 + local_a0._8_4_ + ((uVar8 ^ uVar20) & uVar7 ^ uVar20) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      auVar32 = vpsrlq_avx(auVar32,0x11);
      uVar10 = uVar10 + iVar13;
      uVar19 = (uVar15 >> 2 | uVar15 << 0x1e) +
               iVar13 + ((uVar17 ^ uVar6) & (uVar18 ^ uVar17) ^ uVar17);
      auVar31 = vpsrlq_avx(auVar32,2);
      uVar12 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
      auVar32 = vpshufd_avx(auVar25 ^ auVar32 ^ auVar31,0xe8);
      uVar15 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
      auVar32 = vpslldq_avx(auVar32,8);
      auVar26 = aesenclast(auVar22,param_4[10]);
      auVar31 = aesenc(auVar22,param_4[10]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar10;
      iVar13 = uVar20 + local_a0._12_4_;
      auVar25 = vpaddd_avx(auVar33,auVar32);
      local_a0 = vpaddd_avx(auVar25,pauVar11[0xc]);
      uVar20 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar19;
      iVar13 = iVar13 + ((uVar7 ^ uVar8) & uVar10 ^ uVar8) + (uVar12 >> 6 | uVar12 << 0x1a);
      uVar6 = uVar6 + iVar13;
      uVar20 = (uVar20 >> 2 | uVar20 << 0x1e) +
               iVar13 + ((uVar18 ^ uVar17) & (uVar19 ^ uVar18) ^ uVar18);
      auVar32 = vpalignr_avx(auVar29,auVar4,4);
      auVar33 = vpalignr_avx(auVar25,auVar24,4);
      uVar12 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
      auVar23 = vpsrld_avx(auVar32,7);
      uVar15 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
      auVar33 = vpaddd_avx(auVar4,auVar33);
      auVar4 = vpand_avx(auVar26,auVar3);
      auVar27 = aesenc(auVar31,param_4[0xb]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar6;
      auVar28 = vpsrld_avx(auVar32,3);
      auVar31 = vpslld_avx(auVar32,0xe);
      uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar20;
      iVar13 = uVar8 + local_90._0_4_ + ((uVar10 ^ uVar7) & uVar6 ^ uVar7) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      auVar32 = vpshufd_avx(auVar25,0xfa);
      uVar17 = uVar17 + iVar13;
      auVar26 = vpsrld_avx(auVar23,0xb);
      uVar8 = (uVar15 >> 2 | uVar15 << 0x1e) +
              iVar13 + ((uVar19 ^ uVar18) & (uVar20 ^ uVar19) ^ uVar19);
      uVar12 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
      auVar22 = vpslld_avx(auVar31,0xb);
      uVar15 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
      auVar34 = aesenclast(auVar27,param_4[0xc]);
      auVar30 = aesenc(auVar27,param_4[0xc]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar17;
      auVar27 = vpsrld_avx(auVar32,10);
      auVar32 = vpsrlq_avx(auVar32,0x11);
      uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar8;
      auVar33 = vpaddd_avx(auVar33,auVar28 ^ auVar23 ^ auVar31 ^ auVar26 ^ auVar22);
      iVar13 = uVar7 + local_90._4_4_ + ((uVar6 ^ uVar10) & uVar17 ^ uVar10) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      uVar18 = uVar18 + iVar13;
      auVar31 = vpsrlq_avx(auVar32,2);
      uVar7 = (uVar15 >> 2 | uVar15 << 0x1e) +
              iVar13 + ((uVar20 ^ uVar19) & (uVar8 ^ uVar20) ^ uVar20);
      uVar12 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
      auVar32 = vpshufd_avx(auVar27 ^ auVar32 ^ auVar31,0x84);
      uVar15 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
      auVar31 = vpsrldq_avx(auVar32,8);
      auVar32 = vpand_avx(auVar34,auVar2);
      auVar26 = aesenc(auVar30,param_4[0xd]);
      uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar18;
      auVar33 = vpaddd_avx(auVar33,auVar31);
      auVar31 = vpshufd_avx(auVar33,0x50);
      auVar22 = vpsrld_avx(auVar31,10);
      uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar7;
      iVar13 = uVar10 + local_90._8_4_ + ((uVar17 ^ uVar6) & uVar18 ^ uVar6) +
               (uVar12 >> 6 | uVar12 << 0x1a);
      auVar31 = vpsrlq_avx(auVar31,0x11);
      uVar19 = uVar19 + iVar13;
      uVar10 = (uVar15 >> 2 | uVar15 << 0x1e) +
               iVar13 + ((uVar8 ^ uVar20) & (uVar7 ^ uVar8) ^ uVar8);
      auVar23 = vpsrlq_avx(auVar31,2);
      uVar12 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
      auVar31 = vpshufd_avx(auVar22 ^ auVar31 ^ auVar23,0xe8);
      uVar16 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
      auVar22 = vpslldq_avx(auVar31,8);
      auVar31 = vpor_avx(auVar4,auVar32);
      auVar23 = aesenclast(auVar26,param_4[0xe]);
      auVar32 = *param_4;
      uVar15 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar19;
      iVar13 = uVar6 + local_90._12_4_;
      auVar4 = vpaddd_avx(auVar33,auVar22);
      uVar12 = uVar10 ^ uVar7;
      local_90 = vpaddd_avx(auVar4,pauVar11[0xe]);
      uVar6 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar10;
      iVar13 = iVar13 + ((uVar18 ^ uVar17) & uVar19 ^ uVar17) + (uVar15 >> 6 | uVar15 << 0x1a);
      uVar20 = uVar20 + iVar13;
      uVar6 = (uVar6 >> 2 | uVar6 << 0x1e) + iVar13 + ((uVar7 ^ uVar8) & uVar12 ^ uVar7);
      auVar33 = vpand_avx(auVar23,auVar1);
      auVar33 = vpor_avx(auVar31,auVar33);
      *(undefined1 (*) [16])(param_2 + (long)pauVar14) = auVar33;
      param_1 = pauVar14 + 1;
      pauVar5 = pauVar11 + 0x10;
      pauVar11 = pauVar11 + 8;
    } while ((*pauVar5)[3] != '\0');
    uVar15 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
    uVar16 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar20;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar6;
    iVar13 = uVar17 + local_c0._0_4_ + ((uVar19 ^ uVar18) & uVar20 ^ uVar18) +
             (uVar15 >> 6 | uVar15 << 0x1a);
    uVar8 = uVar8 + iVar13;
    uVar17 = (uVar16 >> 2 | uVar16 << 0x1e) + iVar13 + (uVar12 & (uVar6 ^ uVar10) ^ uVar10);
    uVar12 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
    uVar15 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar8;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar17;
    iVar13 = uVar18 + local_c0._4_4_ + ((uVar20 ^ uVar19) & uVar8 ^ uVar19) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar7 = uVar7 + iVar13;
    uVar18 = (uVar15 >> 2 | uVar15 << 0x1e) + iVar13 + ((uVar6 ^ uVar10) & (uVar17 ^ uVar6) ^ uVar6)
    ;
    uVar12 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
    uVar15 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
    auVar33 = aesenc(*param_1 ^ auVar32 ^ auVar33,param_4[1]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar7;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar18;
    iVar13 = uVar19 + local_c0._8_4_ + ((uVar8 ^ uVar20) & uVar7 ^ uVar20) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar10 = uVar10 + iVar13;
    uVar19 = (uVar15 >> 2 | uVar15 << 0x1e) +
             iVar13 + ((uVar17 ^ uVar6) & (uVar18 ^ uVar17) ^ uVar17);
    uVar12 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
    uVar15 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
    auVar33 = aesenc(auVar33,param_4[2]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar10;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar19;
    iVar13 = uVar20 + local_c0._12_4_ + ((uVar7 ^ uVar8) & uVar10 ^ uVar8) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar6 = uVar6 + iVar13;
    uVar20 = (uVar15 >> 2 | uVar15 << 0x1e) +
             iVar13 + ((uVar18 ^ uVar17) & (uVar19 ^ uVar18) ^ uVar18);
    uVar12 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar15 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
    auVar33 = aesenc(auVar33,param_4[3]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar6;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar20;
    iVar13 = uVar8 + local_b0._0_4_ + ((uVar10 ^ uVar7) & uVar6 ^ uVar7) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar17 = uVar17 + iVar13;
    uVar8 = (uVar15 >> 2 | uVar15 << 0x1e) +
            iVar13 + ((uVar19 ^ uVar18) & (uVar20 ^ uVar19) ^ uVar19);
    uVar12 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
    uVar15 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
    auVar33 = aesenc(auVar33,param_4[4]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar17;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar8;
    iVar13 = uVar7 + local_b0._4_4_ + ((uVar6 ^ uVar10) & uVar17 ^ uVar10) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar18 = uVar18 + iVar13;
    uVar7 = (uVar15 >> 2 | uVar15 << 0x1e) +
            iVar13 + ((uVar20 ^ uVar19) & (uVar8 ^ uVar20) ^ uVar20);
    uVar12 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
    uVar15 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
    auVar33 = aesenc(auVar33,param_4[5]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar18;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar7;
    iVar13 = uVar10 + local_b0._8_4_ + ((uVar17 ^ uVar6) & uVar18 ^ uVar6) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar19 = uVar19 + iVar13;
    uVar10 = (uVar15 >> 2 | uVar15 << 0x1e) + iVar13 + ((uVar8 ^ uVar20) & (uVar7 ^ uVar8) ^ uVar8);
    uVar12 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
    uVar15 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
    auVar33 = aesenc(auVar33,param_4[6]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar19;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar10;
    iVar13 = uVar6 + local_b0._12_4_ + ((uVar18 ^ uVar17) & uVar19 ^ uVar17) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar20 = uVar20 + iVar13;
    uVar6 = (uVar15 >> 2 | uVar15 << 0x1e) + iVar13 + ((uVar7 ^ uVar8) & (uVar10 ^ uVar7) ^ uVar7);
    uVar12 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
    uVar15 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    auVar33 = aesenc(auVar33,param_4[7]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar20;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar6;
    iVar13 = uVar17 + local_a0._0_4_ + ((uVar19 ^ uVar18) & uVar20 ^ uVar18) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar8 = uVar8 + iVar13;
    uVar17 = (uVar15 >> 2 | uVar15 << 0x1e) +
             iVar13 + ((uVar10 ^ uVar7) & (uVar6 ^ uVar10) ^ uVar10);
    uVar12 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
    uVar15 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
    auVar33 = aesenc(auVar33,param_4[8]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar8;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar17;
    iVar13 = uVar18 + local_a0._4_4_ + ((uVar20 ^ uVar19) & uVar8 ^ uVar19) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar7 = uVar7 + iVar13;
    uVar18 = (uVar15 >> 2 | uVar15 << 0x1e) + iVar13 + ((uVar6 ^ uVar10) & (uVar17 ^ uVar6) ^ uVar6)
    ;
    uVar12 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
    uVar15 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
    auVar33 = aesenc(auVar33,param_4[9]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar7;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar18;
    iVar13 = uVar19 + local_a0._8_4_ + ((uVar8 ^ uVar20) & uVar7 ^ uVar20) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar10 = uVar10 + iVar13;
    uVar19 = (uVar15 >> 2 | uVar15 << 0x1e) +
             iVar13 + ((uVar17 ^ uVar6) & (uVar18 ^ uVar17) ^ uVar17);
    uVar12 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
    uVar15 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
    auVar29 = aesenclast(auVar33,param_4[10]);
    auVar32 = aesenc(auVar33,param_4[10]);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar10;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar19;
    iVar13 = uVar20 + local_a0._12_4_ + ((uVar7 ^ uVar8) & uVar10 ^ uVar8) +
             (uVar12 >> 6 | uVar12 << 0x1a);
    uVar6 = uVar6 + iVar13;
    uVar12 = (uVar15 >> 2 | uVar15 << 0x1e) +
             iVar13 + ((uVar18 ^ uVar17) & (uVar19 ^ uVar18) ^ uVar18);
    uVar20 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar15 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    auVar33 = vpand_avx(auVar29,auVar3);
    auVar32 = aesenc(auVar32,param_4[0xb]);
    uVar20 = (uVar20 >> 5 | uVar20 << 0x1b) ^ uVar6;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar12;
    iVar13 = uVar8 + local_90._0_4_ + ((uVar10 ^ uVar7) & uVar6 ^ uVar7) +
             (uVar20 >> 6 | uVar20 << 0x1a);
    uVar17 = uVar17 + iVar13;
    uVar8 = (uVar15 >> 2 | uVar15 << 0x1e) +
            iVar13 + ((uVar19 ^ uVar18) & (uVar12 ^ uVar19) ^ uVar19);
    uVar20 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
    uVar15 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
    auVar24 = aesenclast(auVar32,param_4[0xc]);
    auVar29 = aesenc(auVar32,param_4[0xc]);
    uVar20 = (uVar20 >> 5 | uVar20 << 0x1b) ^ uVar17;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar8;
    iVar13 = uVar7 + local_90._4_4_ + ((uVar6 ^ uVar10) & uVar17 ^ uVar10) +
             (uVar20 >> 6 | uVar20 << 0x1a);
    uVar18 = uVar18 + iVar13;
    uVar7 = (uVar15 >> 2 | uVar15 << 0x1e) +
            iVar13 + ((uVar12 ^ uVar19) & (uVar8 ^ uVar12) ^ uVar12);
    uVar20 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
    uVar15 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
    auVar32 = vpand_avx(auVar24,auVar2);
    auVar24 = aesenc(auVar29,param_4[0xd]);
    uVar20 = (uVar20 >> 5 | uVar20 << 0x1b) ^ uVar18;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar7;
    iVar13 = uVar10 + local_90._8_4_ + ((uVar17 ^ uVar6) & uVar18 ^ uVar6) +
             (uVar20 >> 6 | uVar20 << 0x1a);
    uVar19 = uVar19 + iVar13;
    uVar10 = (uVar15 >> 2 | uVar15 << 0x1e) + iVar13 + ((uVar8 ^ uVar12) & (uVar7 ^ uVar8) ^ uVar8);
    uVar20 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
    uVar15 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
    auVar29 = vpor_avx(auVar33,auVar32);
    auVar33 = aesenclast(auVar24,param_4[0xe]);
    auVar32 = *param_4;
    uVar20 = (uVar20 >> 5 | uVar20 << 0x1b) ^ uVar19;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar10;
    iVar13 = uVar6 + local_90._12_4_ + ((uVar18 ^ uVar17) & uVar19 ^ uVar17) +
             (uVar20 >> 6 | uVar20 << 0x1a);
    auVar33 = vpand_avx(auVar33,auVar1);
    auVar33 = vpor_avx(auVar29,auVar33);
    *(undefined1 (*) [16])((long)param_1 + param_2) = auVar33;
    param_1 = pauVar14 + 2;
    uVar6 = (uVar15 >> 2 | uVar15 << 0x1e) + iVar13 + ((uVar7 ^ uVar8) & (uVar10 ^ uVar7) ^ uVar7) +
            *param_6;
    uVar10 = uVar10 + param_6[1];
    uVar7 = uVar7 + param_6[2];
    uVar8 = uVar8 + param_6[3];
    uVar20 = uVar12 + iVar13 + param_6[4];
    uVar19 = uVar19 + param_6[5];
    uVar18 = uVar18 + param_6[6];
    uVar17 = uVar17 + param_6[7];
    *param_6 = uVar6;
    param_6[1] = uVar10;
    param_6[2] = uVar7;
    param_6[3] = uVar8;
    param_6[4] = uVar20;
    param_6[5] = uVar19;
    param_6[6] = uVar18;
    param_6[7] = uVar17;
  } while (param_1 < pauVar9);
  *param_5 = auVar33;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aesni_cbc_sha256_enc_avx2
               (long param_1,long param_2,long param_3,undefined1 (*param_4) [16],
               undefined1 (*param_5) [16],int *param_6,long param_7)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 (*pauVar7) [32];
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  undefined1 (*pauVar16) [32];
  undefined1 (*pauVar17) [32];
  undefined1 (*pauVar18) [32];
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  undefined1 (*pauVar25) [16];
  long lVar26;
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [64];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [64];
  undefined1 auVar43 [16];
  long lVar44;
  undefined1 auVar45 [64];
  undefined1 auStack_270 [576];
  
  uVar15 = (ulong)auStack_270 & 0xfffffffffffffc00;
  pauVar16 = (undefined1 (*) [32])(uVar15 + 0x1c0);
  param_7 = param_7 - param_1;
  uVar13 = param_3 * 0x40 + param_1;
  *(ulong *)(uVar15 + 0x210) = uVar13;
  *(undefined1 (**) [16])(uVar15 + 0x220) = param_5;
  *(int **)(uVar15 + 0x228) = param_6;
  *(long *)(uVar15 + 0x230) = param_7;
  *(BADSPACEBASE **)(uVar15 + 0x238) = register0x00000020;
  auVar5 = vpinsrq_avx(ZEXT816(0),param_2 - param_1,1);
  auVar45 = ZEXT1664(auVar5);
  pauVar1 = param_4 + 8;
  auVar38 = ZEXT1664(*param_5);
  lVar26 = (ulong)*(uint *)param_4[0xf] - 9;
  auVar5 = *(undefined1 (*) [16])(&DAT_001044a0 + lVar26 * 8);
  auVar2 = *(undefined1 (*) [16])(&DAT_001044b0 + lVar26 * 8);
  auVar3 = *(undefined1 (*) [16])(&DAT_001044c0 + lVar26 * 8);
  uVar24 = param_1 + 0x40;
  iVar9 = *param_6;
  uVar14 = param_6[1];
  uVar11 = param_6[2];
  pauVar18 = (undefined1 (*) [32])(param_7 + uVar24);
  if (uVar24 == uVar13) {
    pauVar18 = (undefined1 (*) [32])(uVar15 + 0x1c0);
  }
  uVar12 = param_6[3];
  uVar20 = param_6[4];
  uVar21 = param_6[5];
  uVar22 = param_6[6];
  uVar23 = param_6[7];
  auVar42 = ZEXT1664(*param_4);
  do {
    auVar27._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])*pauVar18 +
         ZEXT116(1) * *(undefined1 (*) [16])(param_7 + -0x40 + uVar24);
    auVar27._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])*pauVar18;
    auVar37._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])(*pauVar18 + 0x10) +
         ZEXT116(1) * *(undefined1 (*) [16])(param_7 + -0x30 + uVar24);
    auVar37._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])(*pauVar18 + 0x10);
    auVar31 = vpshufb_avx2(auVar27,_DAT_00104480);
    auVar28._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])pauVar18[1] +
         ZEXT116(1) * *(undefined1 (*) [16])(param_7 + -0x20 + uVar24);
    auVar28._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])pauVar18[1];
    auVar33 = vpshufb_avx2(auVar37,_DAT_00104480);
    auVar29._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])(pauVar18[1] + 0x10) +
         ZEXT116(1) * *(undefined1 (*) [16])(param_7 + -0x10 + uVar24);
    auVar29._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar18[1] + 0x10);
    auVar34 = vpshufb_avx2(auVar28,_DAT_00104480);
    pauVar25 = (undefined1 (*) [16])(uVar24 - 0x40);
    auVar27 = vpaddd_avx2(auVar31,_K256);
    auVar35 = vpshufb_avx2(auVar29,_DAT_00104480);
    auVar37 = vpaddd_avx2(auVar33,_DAT_001042a0);
    auVar28 = vpaddd_avx2(auVar34,_DAT_001042c0);
    auVar29 = vpaddd_avx2(auVar35,_DAT_001042e0);
    *pauVar16 = auVar27;
    uVar8 = 0;
    pauVar16[1] = auVar37;
    *(undefined8 *)(pauVar16[-3] + 0x18) = *(undefined8 *)(pauVar16[3] + 0x18);
    pauVar16[-2] = auVar28;
    uVar19 = uVar14 ^ uVar11;
    pauVar16[-1] = auVar29;
    pauVar16 = pauVar16 + -2;
    pauVar18 = (undefined1 (*) [32])&DAT_00104300;
    do {
      pauVar17 = pauVar16;
      auVar39 = *pauVar25;
      auVar6 = vpinsrq_avx(auVar45._0_16_,pauVar25,0);
      auVar45 = ZEXT1664(auVar6);
      *(undefined8 *)(pauVar17[-3] + 0x18) = *(undefined8 *)(pauVar17[-1] + 0x18);
      auVar37 = vpalignr_avx2(auVar33,auVar31,4);
      auVar27 = vpalignr_avx2(auVar35,auVar34,4);
      uVar8 = iVar9 + uVar8;
      auVar30 = vpsrld_avx2(auVar37,7);
      auVar27 = vpaddd_avx2(auVar31,auVar27);
      auVar36 = vpsrld_avx2(auVar37,3);
      iVar9 = uVar23 + *(int *)pauVar17[2] + (uVar21 & uVar20) + (~uVar20 & uVar22) +
              ((uVar20 >> 0x19 | uVar20 << 7) ^ (uVar20 >> 0xb | uVar20 << 0x15) ^
              (uVar20 >> 6 | uVar20 << 0x1a));
      auVar28 = vpslld_avx2(auVar37,0xe);
      uVar12 = uVar12 + iVar9;
      auVar37 = vpshufd_avx2(auVar35,0xfa);
      auVar31 = vpsrld_avx2(auVar30,0xb);
      uVar23 = iVar9 + (uVar19 & (uVar8 ^ uVar14) ^ uVar14) +
               ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
               (uVar8 >> 2 | uVar8 * 0x40000000));
      auVar29 = vpslld_avx2(auVar28,0xb);
      auVar32 = vpsrld_avx2(auVar37,10);
      iVar9 = uVar22 + *(int *)(pauVar17[2] + 4) + (uVar20 & uVar12) + (~uVar12 & uVar21) +
              ((uVar12 >> 0x19 | uVar12 * 0x80) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
              (uVar12 >> 6 | uVar12 * 0x4000000));
      uVar11 = uVar11 + iVar9;
      auVar37 = vpsrlq_avx2(auVar37,0x11);
      auVar27 = vpaddd_avx2(auVar27,auVar36 ^ auVar30 ^ auVar28 ^ auVar31 ^ auVar29);
      auVar28 = vpsrlq_avx2(auVar37,2);
      uVar22 = iVar9 + ((uVar8 ^ uVar14) & (uVar23 ^ uVar8) ^ uVar8) +
               ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 0x16 | uVar23 * 0x400) ^
               (uVar23 >> 2 | uVar23 * 0x40000000));
      auVar37 = vpshufd_avx2(auVar32 ^ auVar37 ^ auVar28,0x84);
      auVar37 = vpsrldq_avx2(auVar37,8);
      iVar9 = uVar21 + *(int *)(pauVar17[2] + 8) + (uVar12 & uVar11) + (~uVar11 & uVar20) +
              ((uVar11 >> 0x19 | uVar11 * 0x80) ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^
              (uVar11 >> 6 | uVar11 * 0x4000000));
      auVar27 = vpaddd_avx2(auVar27,auVar37);
      uVar14 = uVar14 + iVar9;
      auVar37 = vpshufd_avx2(auVar27,0x50);
      auVar39 = aesenc(auVar39 ^ auVar42._0_16_ ^ auVar38._0_16_,param_4[1]);
      auVar28 = vpsrld_avx2(auVar37,10);
      auVar37 = vpsrlq_avx2(auVar37,0x11);
      uVar21 = iVar9 + ((uVar23 ^ uVar8) & (uVar22 ^ uVar23) ^ uVar23) +
               ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 >> 0x16 | uVar22 * 0x400) ^
               (uVar22 >> 2 | uVar22 * 0x40000000));
      auVar29 = vpsrlq_avx2(auVar37,2);
      auVar37 = vpshufd_avx2(auVar28 ^ auVar37 ^ auVar29,0xe8);
      iVar9 = uVar20 + *(int *)(pauVar17[2] + 0xc) + (uVar11 & uVar14) + (~uVar14 & uVar12) +
              ((uVar14 >> 0x19 | uVar14 * 0x80) ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^
              (uVar14 >> 6 | uVar14 * 0x4000000));
      auVar37 = vpslldq_avx2(auVar37,8);
      uVar8 = uVar8 + iVar9;
      auVar31 = vpaddd_avx2(auVar27,auVar37);
      auVar40 = aesenc(auVar39,param_4[2]);
      auVar39 = param_4[3];
      auVar27 = vpaddd_avx2(auVar31,*pauVar18);
      pauVar17[-2] = auVar27;
      auVar37 = vpalignr_avx2(auVar34,auVar33,4);
      auVar27 = vpalignr_avx2(auVar31,auVar35,4);
      uVar20 = iVar9 + ((uVar22 ^ uVar23) & (uVar21 ^ uVar22) ^ uVar22) +
               ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 0x16 | uVar21 * 0x400) ^
               (uVar21 >> 2 | uVar21 * 0x40000000));
      auVar30 = vpsrld_avx2(auVar37,7);
      auVar27 = vpaddd_avx2(auVar33,auVar27);
      auVar36 = vpsrld_avx2(auVar37,3);
      iVar9 = uVar12 + *(int *)pauVar17[3] + (uVar14 & uVar8) + (~uVar8 & uVar11) +
              ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
              (uVar8 >> 6 | uVar8 * 0x4000000));
      auVar28 = vpslld_avx2(auVar37,0xe);
      uVar23 = uVar23 + iVar9;
      auVar39 = aesenc(auVar40,auVar39);
      auVar37 = vpshufd_avx2(auVar31,0xfa);
      auVar33 = vpsrld_avx2(auVar30,0xb);
      uVar12 = iVar9 + ((uVar21 ^ uVar22) & (uVar20 ^ uVar21) ^ uVar21) +
               ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 >> 0x16 | uVar20 * 0x400) ^
               (uVar20 >> 2 | uVar20 * 0x40000000));
      auVar29 = vpslld_avx2(auVar28,0xb);
      auVar32 = vpsrld_avx2(auVar37,10);
      iVar9 = uVar11 + *(int *)(pauVar17[3] + 4) + (uVar8 & uVar23) + (~uVar23 & uVar14) +
              ((uVar23 >> 0x19 | uVar23 * 0x80) ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^
              (uVar23 >> 6 | uVar23 * 0x4000000));
      uVar22 = uVar22 + iVar9;
      auVar37 = vpsrlq_avx2(auVar37,0x11);
      auVar39 = aesenc(auVar39,param_4[4]);
      auVar27 = vpaddd_avx2(auVar27,auVar36 ^ auVar30 ^ auVar28 ^ auVar33 ^ auVar29);
      auVar28 = vpsrlq_avx2(auVar37,2);
      uVar11 = iVar9 + ((uVar20 ^ uVar21) & (uVar12 ^ uVar20) ^ uVar20) +
               ((uVar12 >> 0xd | uVar12 * 0x80000) ^ (uVar12 >> 0x16 | uVar12 * 0x400) ^
               (uVar12 >> 2 | uVar12 * 0x40000000));
      auVar37 = vpshufd_avx2(auVar32 ^ auVar37 ^ auVar28,0x84);
      auVar37 = vpsrldq_avx2(auVar37,8);
      iVar9 = uVar14 + *(int *)(pauVar17[3] + 8) + (uVar23 & uVar22) + (~uVar22 & uVar8) +
              ((uVar22 >> 0x19 | uVar22 * 0x80) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
              (uVar22 >> 6 | uVar22 * 0x4000000));
      auVar27 = vpaddd_avx2(auVar27,auVar37);
      uVar21 = uVar21 + iVar9;
      auVar37 = vpshufd_avx2(auVar27,0x50);
      auVar39 = aesenc(auVar39,param_4[5]);
      auVar28 = vpsrld_avx2(auVar37,10);
      auVar37 = vpsrlq_avx2(auVar37,0x11);
      uVar14 = iVar9 + ((uVar12 ^ uVar20) & (uVar11 ^ uVar12) ^ uVar12) +
               ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 0x16 | uVar11 * 0x400) ^
               (uVar11 >> 2 | uVar11 * 0x40000000));
      auVar29 = vpsrlq_avx2(auVar37,2);
      auVar37 = vpshufd_avx2(auVar28 ^ auVar37 ^ auVar29,0xe8);
      iVar9 = uVar8 + *(int *)(pauVar17[3] + 0xc) + (uVar22 & uVar21) + (~uVar21 & uVar23) +
              ((uVar21 >> 0x19 | uVar21 * 0x80) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
              (uVar21 >> 6 | uVar21 * 0x4000000));
      auVar37 = vpslldq_avx2(auVar37,8);
      uVar20 = uVar20 + iVar9;
      auVar33 = vpaddd_avx2(auVar27,auVar37);
      auVar40 = aesenc(auVar39,param_4[6]);
      auVar39 = param_4[7];
      auVar27 = vpaddd_avx2(auVar33,pauVar18[1]);
      pauVar17[-1] = auVar27;
      pauVar16 = pauVar17 + -4;
      *(undefined8 *)(pauVar17[-5] + 0x18) = *(undefined8 *)(pauVar17[-3] + 0x18);
      auVar37 = vpalignr_avx2(auVar35,auVar34,4);
      auVar27 = vpalignr_avx2(auVar33,auVar31,4);
      uVar8 = iVar9 + ((uVar11 ^ uVar12) & (uVar14 ^ uVar11) ^ uVar11) +
              ((uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 0x16 | uVar14 * 0x400) ^
              (uVar14 >> 2 | uVar14 * 0x40000000));
      auVar30 = vpsrld_avx2(auVar37,7);
      auVar27 = vpaddd_avx2(auVar34,auVar27);
      auVar36 = vpsrld_avx2(auVar37,3);
      iVar9 = uVar23 + *(int *)*pauVar17 + (uVar21 & uVar20) + (~uVar20 & uVar22) +
              ((uVar20 >> 0x19 | uVar20 * 0x80) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
              (uVar20 >> 6 | uVar20 * 0x4000000));
      auVar28 = vpslld_avx2(auVar37,0xe);
      uVar12 = uVar12 + iVar9;
      auVar39 = aesenc(auVar40,auVar39);
      auVar37 = vpshufd_avx2(auVar33,0xfa);
      auVar34 = vpsrld_avx2(auVar30,0xb);
      uVar23 = iVar9 + ((uVar14 ^ uVar11) & (uVar8 ^ uVar14) ^ uVar14) +
               ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
               (uVar8 >> 2 | uVar8 * 0x40000000));
      auVar29 = vpslld_avx2(auVar28,0xb);
      auVar32 = vpsrld_avx2(auVar37,10);
      iVar9 = uVar22 + *(int *)(*pauVar17 + 4) + (uVar20 & uVar12) + (~uVar12 & uVar21) +
              ((uVar12 >> 0x19 | uVar12 * 0x80) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
              (uVar12 >> 6 | uVar12 * 0x4000000));
      uVar11 = uVar11 + iVar9;
      auVar37 = vpsrlq_avx2(auVar37,0x11);
      auVar39 = aesenc(auVar39,*pauVar1);
      auVar27 = vpaddd_avx2(auVar27,auVar36 ^ auVar30 ^ auVar28 ^ auVar34 ^ auVar29);
      auVar28 = vpsrlq_avx2(auVar37,2);
      uVar22 = iVar9 + ((uVar8 ^ uVar14) & (uVar23 ^ uVar8) ^ uVar8) +
               ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 0x16 | uVar23 * 0x400) ^
               (uVar23 >> 2 | uVar23 * 0x40000000));
      auVar37 = vpshufd_avx2(auVar32 ^ auVar37 ^ auVar28,0x84);
      auVar37 = vpsrldq_avx2(auVar37,8);
      iVar9 = uVar21 + *(int *)(*pauVar17 + 8) + (uVar12 & uVar11) + (~uVar11 & uVar20) +
              ((uVar11 >> 0x19 | uVar11 * 0x80) ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^
              (uVar11 >> 6 | uVar11 * 0x4000000));
      auVar27 = vpaddd_avx2(auVar27,auVar37);
      uVar14 = uVar14 + iVar9;
      auVar37 = vpshufd_avx2(auVar27,0x50);
      auVar39 = aesenc(auVar39,param_4[9]);
      auVar28 = vpsrld_avx2(auVar37,10);
      auVar37 = vpsrlq_avx2(auVar37,0x11);
      uVar21 = iVar9 + ((uVar23 ^ uVar8) & (uVar22 ^ uVar23) ^ uVar23) +
               ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 >> 0x16 | uVar22 * 0x400) ^
               (uVar22 >> 2 | uVar22 * 0x40000000));
      auVar29 = vpsrlq_avx2(auVar37,2);
      auVar37 = vpshufd_avx2(auVar28 ^ auVar37 ^ auVar29,0xe8);
      iVar9 = uVar20 + *(int *)(*pauVar17 + 0xc) + (uVar11 & uVar14) + (~uVar14 & uVar12) +
              ((uVar14 >> 0x19 | uVar14 * 0x80) ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^
              (uVar14 >> 6 | uVar14 * 0x4000000));
      auVar37 = vpslldq_avx2(auVar37,8);
      uVar8 = uVar8 + iVar9;
      auVar34 = vpaddd_avx2(auVar27,auVar37);
      auVar40 = aesenclast(auVar39,param_4[10]);
      auVar41 = aesenc(auVar39,param_4[10]);
      auVar39 = param_4[0xb];
      auVar27 = vpaddd_avx2(auVar34,pauVar18[2]);
      *pauVar16 = auVar27;
      auVar37 = vpalignr_avx2(auVar31,auVar35,4);
      auVar27 = vpalignr_avx2(auVar34,auVar33,4);
      uVar20 = iVar9 + ((uVar22 ^ uVar23) & (uVar21 ^ uVar22) ^ uVar22) +
               ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 0x16 | uVar21 * 0x400) ^
               (uVar21 >> 2 | uVar21 * 0x40000000));
      auVar30 = vpsrld_avx2(auVar37,7);
      auVar27 = vpaddd_avx2(auVar35,auVar27);
      auVar36 = vpsrld_avx2(auVar37,3);
      iVar9 = uVar12 + *(int *)pauVar17[1] + (uVar14 & uVar8) + (~uVar8 & uVar11) +
              ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
              (uVar8 >> 6 | uVar8 * 0x4000000));
      auVar28 = vpslld_avx2(auVar37,0xe);
      uVar23 = uVar23 + iVar9;
      auVar40 = vpand_avx(auVar40,auVar3);
      auVar39 = aesenc(auVar41,auVar39);
      auVar37 = vpshufd_avx2(auVar34,0xfa);
      auVar35 = vpsrld_avx2(auVar30,0xb);
      uVar12 = iVar9 + ((uVar21 ^ uVar22) & (uVar20 ^ uVar21) ^ uVar21) +
               ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 >> 0x16 | uVar20 * 0x400) ^
               (uVar20 >> 2 | uVar20 * 0x40000000));
      auVar29 = vpslld_avx2(auVar28,0xb);
      auVar32 = vpsrld_avx2(auVar37,10);
      iVar9 = uVar11 + *(int *)(pauVar17[1] + 4) + (uVar8 & uVar23) + (~uVar23 & uVar14) +
              ((uVar23 >> 0x19 | uVar23 * 0x80) ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^
              (uVar23 >> 6 | uVar23 * 0x4000000));
      uVar22 = uVar22 + iVar9;
      auVar37 = vpsrlq_avx2(auVar37,0x11);
      auVar43 = aesenclast(auVar39,param_4[0xc]);
      auVar41 = aesenc(auVar39,param_4[0xc]);
      auVar27 = vpaddd_avx2(auVar27,auVar36 ^ auVar30 ^ auVar28 ^ auVar35 ^ auVar29);
      auVar28 = vpsrlq_avx2(auVar37,2);
      uVar11 = iVar9 + ((uVar20 ^ uVar21) & (uVar12 ^ uVar20) ^ uVar20) +
               ((uVar12 >> 0xd | uVar12 * 0x80000) ^ (uVar12 >> 0x16 | uVar12 * 0x400) ^
               (uVar12 >> 2 | uVar12 * 0x40000000));
      auVar37 = vpshufd_avx2(auVar32 ^ auVar37 ^ auVar28,0x84);
      auVar37 = vpsrldq_avx2(auVar37,8);
      iVar9 = uVar14 + *(int *)(pauVar17[1] + 8) + (uVar23 & uVar22) + (~uVar22 & uVar8) +
              ((uVar22 >> 0x19 | uVar22 * 0x80) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
              (uVar22 >> 6 | uVar22 * 0x4000000));
      auVar27 = vpaddd_avx2(auVar27,auVar37);
      uVar21 = uVar21 + iVar9;
      auVar37 = vpshufd_avx2(auVar27,0x50);
      auVar39 = vpand_avx(auVar43,auVar2);
      auVar43 = aesenc(auVar41,param_4[0xd]);
      auVar28 = vpsrld_avx2(auVar37,10);
      auVar37 = vpsrlq_avx2(auVar37,0x11);
      uVar14 = iVar9 + ((uVar12 ^ uVar20) & (uVar11 ^ uVar12) ^ uVar12) +
               ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 0x16 | uVar11 * 0x400) ^
               (uVar11 >> 2 | uVar11 * 0x40000000));
      auVar29 = vpsrlq_avx2(auVar37,2);
      auVar37 = vpshufd_avx2(auVar28 ^ auVar37 ^ auVar29,0xe8);
      iVar9 = uVar8 + *(int *)(pauVar17[1] + 0xc) + (uVar22 & uVar21) + (~uVar21 & uVar23) +
              ((uVar21 >> 0x19 | uVar21 * 0x80) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
              (uVar21 >> 6 | uVar21 * 0x4000000));
      uVar19 = uVar14 ^ uVar11;
      auVar37 = vpslldq_avx2(auVar37,8);
      uVar20 = uVar20 + iVar9;
      auVar35 = vpaddd_avx2(auVar27,auVar37);
      auVar41 = vpor_avx(auVar40,auVar39);
      auVar40 = aesenclast(auVar43,param_4[0xe]);
      auVar39 = *param_4;
      auVar42 = ZEXT1664(auVar39);
      auVar27 = vpaddd_avx2(auVar35,pauVar18[3]);
      uVar8 = (uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 0x16 | uVar14 * 0x400) ^
              (uVar14 >> 2 | uVar14 * 0x40000000);
      iVar9 = iVar9 + ((uVar11 ^ uVar12) & uVar19 ^ uVar11);
      pauVar17[-3] = auVar27;
      lVar26 = vpextrq_avx(auVar6,1);
      auVar40 = vpand_avx(auVar40,auVar5);
      auVar40 = vpor_avx(auVar41,auVar40);
      auVar38 = ZEXT1664(auVar40);
      *(undefined1 (*) [16])(lVar26 + auVar6._0_8_) = auVar40;
      pauVar25 = (undefined1 (*) [16])(auVar6._0_8_ + 0x10);
      pauVar7 = pauVar18 + 4;
      pauVar18 = pauVar18 + 4;
    } while ((*pauVar7)[3] != '\0');
    auVar6 = vpinsrq_avx(auVar6,pauVar25,0);
    auVar45 = ZEXT1664(auVar6);
    uVar8 = iVar9 + uVar8;
    iVar9 = uVar23 + *(int *)pauVar17[-2] + (uVar21 & uVar20) + (~uVar20 & uVar22) +
            ((uVar20 >> 0x19 | uVar20 * 0x80) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
            (uVar20 >> 6 | uVar20 * 0x4000000));
    uVar12 = uVar12 + iVar9;
    uVar23 = iVar9 + (uVar19 & (uVar8 ^ uVar14) ^ uVar14) +
             ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
             (uVar8 >> 2 | uVar8 * 0x40000000));
    iVar9 = uVar22 + *(int *)(pauVar17[-2] + 4) + (uVar20 & uVar12) + (~uVar12 & uVar21) +
            ((uVar12 >> 0x19 | uVar12 * 0x80) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
            (uVar12 >> 6 | uVar12 * 0x4000000));
    uVar11 = uVar11 + iVar9;
    uVar22 = iVar9 + ((uVar8 ^ uVar14) & (uVar23 ^ uVar8) ^ uVar8) +
             ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 0x16 | uVar23 * 0x400) ^
             (uVar23 >> 2 | uVar23 * 0x40000000));
    iVar9 = uVar21 + *(int *)(pauVar17[-2] + 8) + (uVar12 & uVar11) + (~uVar11 & uVar20) +
            ((uVar11 >> 0x19 | uVar11 * 0x80) ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^
            (uVar11 >> 6 | uVar11 * 0x4000000));
    uVar14 = uVar14 + iVar9;
    auVar39 = aesenc(*pauVar25 ^ auVar39 ^ auVar40,param_4[1]);
    uVar21 = iVar9 + ((uVar23 ^ uVar8) & (uVar22 ^ uVar23) ^ uVar23) +
             ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 >> 0x16 | uVar22 * 0x400) ^
             (uVar22 >> 2 | uVar22 * 0x40000000));
    iVar9 = uVar20 + *(int *)(pauVar17[-2] + 0xc) + (uVar11 & uVar14) + (~uVar14 & uVar12) +
            ((uVar14 >> 0x19 | uVar14 * 0x80) ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^
            (uVar14 >> 6 | uVar14 * 0x4000000));
    uVar8 = uVar8 + iVar9;
    auVar39 = aesenc(auVar39,param_4[2]);
    uVar20 = iVar9 + ((uVar22 ^ uVar23) & (uVar21 ^ uVar22) ^ uVar22) +
             ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 0x16 | uVar21 * 0x400) ^
             (uVar21 >> 2 | uVar21 * 0x40000000));
    iVar9 = uVar12 + *(int *)pauVar17[-1] + (uVar14 & uVar8) + (~uVar8 & uVar11) +
            ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
            (uVar8 >> 6 | uVar8 * 0x4000000));
    uVar23 = uVar23 + iVar9;
    auVar39 = aesenc(auVar39,param_4[3]);
    uVar12 = iVar9 + ((uVar21 ^ uVar22) & (uVar20 ^ uVar21) ^ uVar21) +
             ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 >> 0x16 | uVar20 * 0x400) ^
             (uVar20 >> 2 | uVar20 * 0x40000000));
    iVar9 = uVar11 + *(int *)(pauVar17[-1] + 4) + (uVar8 & uVar23) + (~uVar23 & uVar14) +
            ((uVar23 >> 0x19 | uVar23 * 0x80) ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^
            (uVar23 >> 6 | uVar23 * 0x4000000));
    uVar22 = uVar22 + iVar9;
    auVar39 = aesenc(auVar39,param_4[4]);
    uVar11 = iVar9 + ((uVar20 ^ uVar21) & (uVar12 ^ uVar20) ^ uVar20) +
             ((uVar12 >> 0xd | uVar12 * 0x80000) ^ (uVar12 >> 0x16 | uVar12 * 0x400) ^
             (uVar12 >> 2 | uVar12 * 0x40000000));
    iVar9 = uVar14 + *(int *)(pauVar17[-1] + 8) + (uVar23 & uVar22) + (~uVar22 & uVar8) +
            ((uVar22 >> 0x19 | uVar22 * 0x80) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
            (uVar22 >> 6 | uVar22 * 0x4000000));
    uVar21 = uVar21 + iVar9;
    auVar39 = aesenc(auVar39,param_4[5]);
    uVar14 = iVar9 + ((uVar12 ^ uVar20) & (uVar11 ^ uVar12) ^ uVar12) +
             ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 0x16 | uVar11 * 0x400) ^
             (uVar11 >> 2 | uVar11 * 0x40000000));
    iVar9 = uVar8 + *(int *)(pauVar17[-1] + 0xc) + (uVar22 & uVar21) + (~uVar21 & uVar23) +
            ((uVar21 >> 0x19 | uVar21 * 0x80) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
            (uVar21 >> 6 | uVar21 * 0x4000000));
    uVar20 = uVar20 + iVar9;
    auVar39 = aesenc(auVar39,param_4[6]);
    uVar8 = iVar9 + ((uVar11 ^ uVar12) & (uVar14 ^ uVar11) ^ uVar11) +
            ((uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 0x16 | uVar14 * 0x400) ^
            (uVar14 >> 2 | uVar14 * 0x40000000));
    iVar9 = uVar23 + *(int *)*pauVar16 + (uVar21 & uVar20) + (~uVar20 & uVar22) +
            ((uVar20 >> 0x19 | uVar20 * 0x80) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
            (uVar20 >> 6 | uVar20 * 0x4000000));
    uVar12 = uVar12 + iVar9;
    auVar39 = aesenc(auVar39,param_4[7]);
    uVar23 = iVar9 + ((uVar14 ^ uVar11) & (uVar8 ^ uVar14) ^ uVar14) +
             ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
             (uVar8 >> 2 | uVar8 * 0x40000000));
    iVar9 = uVar22 + *(int *)(pauVar17[-4] + 4) + (uVar20 & uVar12) + (~uVar12 & uVar21) +
            ((uVar12 >> 0x19 | uVar12 * 0x80) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
            (uVar12 >> 6 | uVar12 * 0x4000000));
    uVar11 = uVar11 + iVar9;
    auVar39 = aesenc(auVar39,*pauVar1);
    uVar22 = iVar9 + ((uVar8 ^ uVar14) & (uVar23 ^ uVar8) ^ uVar8) +
             ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 0x16 | uVar23 * 0x400) ^
             (uVar23 >> 2 | uVar23 * 0x40000000));
    iVar9 = uVar21 + *(int *)(pauVar17[-4] + 8) + (uVar12 & uVar11) + (~uVar11 & uVar20) +
            ((uVar11 >> 0x19 | uVar11 * 0x80) ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^
            (uVar11 >> 6 | uVar11 * 0x4000000));
    uVar14 = uVar14 + iVar9;
    auVar39 = aesenc(auVar39,param_4[9]);
    uVar21 = iVar9 + ((uVar23 ^ uVar8) & (uVar22 ^ uVar23) ^ uVar23) +
             ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 >> 0x16 | uVar22 * 0x400) ^
             (uVar22 >> 2 | uVar22 * 0x40000000));
    iVar9 = uVar20 + *(int *)(pauVar17[-4] + 0xc) + (uVar11 & uVar14) + (~uVar14 & uVar12) +
            ((uVar14 >> 0x19 | uVar14 * 0x80) ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^
            (uVar14 >> 6 | uVar14 * 0x4000000));
    uVar8 = uVar8 + iVar9;
    auVar41 = aesenclast(auVar39,param_4[10]);
    auVar40 = aesenc(auVar39,param_4[10]);
    uVar20 = iVar9 + ((uVar22 ^ uVar23) & (uVar21 ^ uVar22) ^ uVar22) +
             ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 0x16 | uVar21 * 0x400) ^
             (uVar21 >> 2 | uVar21 * 0x40000000));
    iVar9 = uVar12 + *(int *)pauVar17[-3] + (uVar14 & uVar8) + (~uVar8 & uVar11) +
            ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
            (uVar8 >> 6 | uVar8 * 0x4000000));
    uVar23 = uVar23 + iVar9;
    auVar39 = vpand_avx(auVar41,auVar3);
    auVar40 = aesenc(auVar40,param_4[0xb]);
    uVar12 = iVar9 + ((uVar21 ^ uVar22) & (uVar20 ^ uVar21) ^ uVar21) +
             ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 >> 0x16 | uVar20 * 0x400) ^
             (uVar20 >> 2 | uVar20 * 0x40000000));
    iVar9 = uVar11 + *(int *)(pauVar17[-3] + 4) + (uVar8 & uVar23) + (~uVar23 & uVar14) +
            ((uVar23 >> 0x19 | uVar23 * 0x80) ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^
            (uVar23 >> 6 | uVar23 * 0x4000000));
    uVar22 = uVar22 + iVar9;
    auVar43 = aesenclast(auVar40,param_4[0xc]);
    auVar41 = aesenc(auVar40,param_4[0xc]);
    uVar11 = iVar9 + ((uVar20 ^ uVar21) & (uVar12 ^ uVar20) ^ uVar20) +
             ((uVar12 >> 0xd | uVar12 * 0x80000) ^ (uVar12 >> 0x16 | uVar12 * 0x400) ^
             (uVar12 >> 2 | uVar12 * 0x40000000));
    iVar9 = uVar14 + *(int *)(pauVar17[-3] + 8) + (uVar23 & uVar22) + (~uVar22 & uVar8) +
            ((uVar22 >> 0x19 | uVar22 * 0x80) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
            (uVar22 >> 6 | uVar22 * 0x4000000));
    uVar21 = uVar21 + iVar9;
    auVar40 = vpand_avx(auVar43,auVar2);
    auVar41 = aesenc(auVar41,param_4[0xd]);
    uVar14 = iVar9 + ((uVar12 ^ uVar20) & (uVar11 ^ uVar12) ^ uVar12) +
             ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 0x16 | uVar11 * 0x400) ^
             (uVar11 >> 2 | uVar11 * 0x40000000));
    iVar9 = uVar8 + *(int *)(pauVar17[-3] + 0xc) + (uVar22 & uVar21) + (~uVar21 & uVar23) +
            ((uVar21 >> 0x19 | uVar21 * 0x80) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
            (uVar21 >> 6 | uVar21 * 0x4000000));
    auVar40 = vpor_avx(auVar39,auVar40);
    auVar39 = aesenclast(auVar41,param_4[0xe]);
    auVar42 = ZEXT1664(*param_4);
    lVar26 = vpextrq_avx(auVar6,1);
    piVar4 = *(int **)(pauVar17[0xd] + 8);
    pauVar18 = pauVar17 + 10;
    auVar39 = vpand_avx(auVar39,auVar5);
    auVar39 = vpor_avx(auVar40,auVar39);
    auVar38 = ZEXT1664(auVar39);
    *(undefined1 (*) [16])(lVar26 + auVar6._0_8_) = auVar39;
    pauVar25 = (undefined1 (*) [16])(auVar6._0_8_ + 0x10);
    iVar10 = iVar9 + ((uVar11 ^ uVar12) & (uVar14 ^ uVar11) ^ uVar11) +
             ((uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 0x16 | uVar14 * 0x400) ^
             (uVar14 >> 2 | uVar14 * 0x40000000)) + *piVar4;
    uVar14 = uVar14 + piVar4[1];
    uVar11 = uVar11 + piVar4[2];
    uVar12 = uVar12 + piVar4[3];
    uVar20 = uVar20 + iVar9 + piVar4[4];
    uVar21 = uVar21 + piVar4[5];
    uVar22 = uVar22 + piVar4[6];
    uVar23 = uVar23 + piVar4[7];
    *piVar4 = iVar10;
    piVar4[1] = uVar14;
    piVar4[2] = uVar11;
    piVar4[3] = uVar12;
    piVar4[4] = uVar20;
    piVar4[5] = uVar21;
    piVar4[6] = uVar22;
    piVar4[7] = uVar23;
    if (pauVar25 == *(undefined1 (**) [16])(pauVar17[0xc] + 0x10)) break;
    uVar8 = 0;
    uVar19 = uVar14 ^ uVar11;
    do {
      auVar6 = vpinsrq_avx(auVar45._0_16_,pauVar25,0);
      auVar45 = ZEXT1664(auVar6);
      uVar8 = iVar10 + uVar8;
      iVar9 = uVar23 + *(int *)(*pauVar18 + 0x10) + (uVar21 & uVar20) + (~uVar20 & uVar22) +
              ((uVar20 >> 0x19 | uVar20 << 7) ^ (uVar20 >> 0xb | uVar20 << 0x15) ^
              (uVar20 >> 6 | uVar20 << 0x1a));
      uVar12 = uVar12 + iVar9;
      uVar23 = iVar9 + (uVar19 & (uVar8 ^ uVar14) ^ uVar14) +
               ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
               (uVar8 >> 2 | uVar8 * 0x40000000));
      iVar9 = uVar22 + *(int *)(*pauVar18 + 0x14) + (uVar20 & uVar12) + (~uVar12 & uVar21) +
              ((uVar12 >> 0x19 | uVar12 * 0x80) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
              (uVar12 >> 6 | uVar12 * 0x4000000));
      uVar11 = uVar11 + iVar9;
      uVar22 = iVar9 + ((uVar8 ^ uVar14) & (uVar23 ^ uVar8) ^ uVar8) +
               ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 0x16 | uVar23 * 0x400) ^
               (uVar23 >> 2 | uVar23 * 0x40000000));
      iVar9 = uVar21 + *(int *)(*pauVar18 + 0x18) + (uVar12 & uVar11) + (~uVar11 & uVar20) +
              ((uVar11 >> 0x19 | uVar11 * 0x80) ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^
              (uVar11 >> 6 | uVar11 * 0x4000000));
      uVar14 = uVar14 + iVar9;
      auVar39 = aesenc(*pauVar25 ^ auVar42._0_16_ ^ auVar38._0_16_,param_4[1]);
      uVar21 = iVar9 + ((uVar23 ^ uVar8) & (uVar22 ^ uVar23) ^ uVar23) +
               ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 >> 0x16 | uVar22 * 0x400) ^
               (uVar22 >> 2 | uVar22 * 0x40000000));
      iVar9 = uVar20 + *(int *)(*pauVar18 + 0x1c) + (uVar11 & uVar14) + (~uVar14 & uVar12) +
              ((uVar14 >> 0x19 | uVar14 * 0x80) ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^
              (uVar14 >> 6 | uVar14 * 0x4000000));
      uVar8 = uVar8 + iVar9;
      auVar39 = aesenc(auVar39,param_4[2]);
      uVar20 = iVar9 + ((uVar22 ^ uVar23) & (uVar21 ^ uVar22) ^ uVar22) +
               ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 0x16 | uVar21 * 0x400) ^
               (uVar21 >> 2 | uVar21 * 0x40000000));
      iVar9 = uVar12 + *(int *)(pauVar18[1] + 0x10) + (uVar14 & uVar8) + (~uVar8 & uVar11) +
              ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
              (uVar8 >> 6 | uVar8 * 0x4000000));
      uVar23 = uVar23 + iVar9;
      auVar39 = aesenc(auVar39,param_4[3]);
      uVar12 = iVar9 + ((uVar21 ^ uVar22) & (uVar20 ^ uVar21) ^ uVar21) +
               ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 >> 0x16 | uVar20 * 0x400) ^
               (uVar20 >> 2 | uVar20 * 0x40000000));
      iVar9 = uVar11 + *(int *)(pauVar18[1] + 0x14) + (uVar8 & uVar23) + (~uVar23 & uVar14) +
              ((uVar23 >> 0x19 | uVar23 * 0x80) ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^
              (uVar23 >> 6 | uVar23 * 0x4000000));
      uVar22 = uVar22 + iVar9;
      auVar39 = aesenc(auVar39,param_4[4]);
      uVar11 = iVar9 + ((uVar20 ^ uVar21) & (uVar12 ^ uVar20) ^ uVar20) +
               ((uVar12 >> 0xd | uVar12 * 0x80000) ^ (uVar12 >> 0x16 | uVar12 * 0x400) ^
               (uVar12 >> 2 | uVar12 * 0x40000000));
      iVar9 = uVar14 + *(int *)(pauVar18[1] + 0x18) + (uVar23 & uVar22) + (~uVar22 & uVar8) +
              ((uVar22 >> 0x19 | uVar22 * 0x80) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
              (uVar22 >> 6 | uVar22 * 0x4000000));
      uVar21 = uVar21 + iVar9;
      auVar39 = aesenc(auVar39,param_4[5]);
      uVar14 = iVar9 + ((uVar12 ^ uVar20) & (uVar11 ^ uVar12) ^ uVar12) +
               ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 0x16 | uVar11 * 0x400) ^
               (uVar11 >> 2 | uVar11 * 0x40000000));
      iVar9 = uVar8 + *(int *)(pauVar18[1] + 0x1c) + (uVar22 & uVar21) + (~uVar21 & uVar23) +
              ((uVar21 >> 0x19 | uVar21 * 0x80) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
              (uVar21 >> 6 | uVar21 * 0x4000000));
      uVar20 = uVar20 + iVar9;
      auVar39 = aesenc(auVar39,param_4[6]);
      uVar8 = iVar9 + ((uVar11 ^ uVar12) & (uVar14 ^ uVar11) ^ uVar11) +
              ((uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 0x16 | uVar14 * 0x400) ^
              (uVar14 >> 2 | uVar14 * 0x40000000));
      iVar9 = uVar23 + *(int *)(pauVar18[-2] + 0x10) + (uVar21 & uVar20) + (~uVar20 & uVar22) +
              ((uVar20 >> 0x19 | uVar20 * 0x80) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
              (uVar20 >> 6 | uVar20 * 0x4000000));
      uVar12 = uVar12 + iVar9;
      auVar39 = aesenc(auVar39,param_4[7]);
      uVar23 = iVar9 + ((uVar14 ^ uVar11) & (uVar8 ^ uVar14) ^ uVar14) +
               ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
               (uVar8 >> 2 | uVar8 * 0x40000000));
      iVar9 = uVar22 + *(int *)(pauVar18[-2] + 0x14) + (uVar20 & uVar12) + (~uVar12 & uVar21) +
              ((uVar12 >> 0x19 | uVar12 * 0x80) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
              (uVar12 >> 6 | uVar12 * 0x4000000));
      uVar11 = uVar11 + iVar9;
      auVar39 = aesenc(auVar39,*pauVar1);
      uVar22 = iVar9 + ((uVar8 ^ uVar14) & (uVar23 ^ uVar8) ^ uVar8) +
               ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 0x16 | uVar23 * 0x400) ^
               (uVar23 >> 2 | uVar23 * 0x40000000));
      iVar9 = uVar21 + *(int *)(pauVar18[-2] + 0x18) + (uVar12 & uVar11) + (~uVar11 & uVar20) +
              ((uVar11 >> 0x19 | uVar11 * 0x80) ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^
              (uVar11 >> 6 | uVar11 * 0x4000000));
      uVar14 = uVar14 + iVar9;
      auVar39 = aesenc(auVar39,param_4[9]);
      uVar21 = iVar9 + ((uVar23 ^ uVar8) & (uVar22 ^ uVar23) ^ uVar23) +
               ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 >> 0x16 | uVar22 * 0x400) ^
               (uVar22 >> 2 | uVar22 * 0x40000000));
      iVar9 = uVar20 + *(int *)(pauVar18[-2] + 0x1c) + (uVar11 & uVar14) + (~uVar14 & uVar12) +
              ((uVar14 >> 0x19 | uVar14 * 0x80) ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^
              (uVar14 >> 6 | uVar14 * 0x4000000));
      uVar8 = uVar8 + iVar9;
      auVar41 = aesenclast(auVar39,param_4[10]);
      auVar40 = aesenc(auVar39,param_4[10]);
      uVar20 = iVar9 + ((uVar22 ^ uVar23) & (uVar21 ^ uVar22) ^ uVar22) +
               ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 0x16 | uVar21 * 0x400) ^
               (uVar21 >> 2 | uVar21 * 0x40000000));
      iVar9 = uVar12 + *(int *)(pauVar18[-1] + 0x10) + (uVar14 & uVar8) + (~uVar8 & uVar11) +
              ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
              (uVar8 >> 6 | uVar8 * 0x4000000));
      uVar23 = uVar23 + iVar9;
      auVar39 = vpand_avx(auVar41,auVar3);
      auVar40 = aesenc(auVar40,param_4[0xb]);
      uVar12 = iVar9 + ((uVar21 ^ uVar22) & (uVar20 ^ uVar21) ^ uVar21) +
               ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 >> 0x16 | uVar20 * 0x400) ^
               (uVar20 >> 2 | uVar20 * 0x40000000));
      iVar9 = uVar11 + *(int *)(pauVar18[-1] + 0x14) + (uVar8 & uVar23) + (~uVar23 & uVar14) +
              ((uVar23 >> 0x19 | uVar23 * 0x80) ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^
              (uVar23 >> 6 | uVar23 * 0x4000000));
      uVar22 = uVar22 + iVar9;
      auVar43 = aesenclast(auVar40,param_4[0xc]);
      auVar41 = aesenc(auVar40,param_4[0xc]);
      uVar11 = iVar9 + ((uVar20 ^ uVar21) & (uVar12 ^ uVar20) ^ uVar20) +
               ((uVar12 >> 0xd | uVar12 * 0x80000) ^ (uVar12 >> 0x16 | uVar12 * 0x400) ^
               (uVar12 >> 2 | uVar12 * 0x40000000));
      iVar9 = uVar14 + *(int *)(pauVar18[-1] + 0x18) + (uVar23 & uVar22) + (~uVar22 & uVar8) +
              ((uVar22 >> 0x19 | uVar22 * 0x80) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
              (uVar22 >> 6 | uVar22 * 0x4000000));
      uVar21 = uVar21 + iVar9;
      auVar40 = vpand_avx(auVar43,auVar2);
      auVar41 = aesenc(auVar41,param_4[0xd]);
      uVar14 = iVar9 + ((uVar12 ^ uVar20) & (uVar11 ^ uVar12) ^ uVar12) +
               ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 0x16 | uVar11 * 0x400) ^
               (uVar11 >> 2 | uVar11 * 0x40000000));
      iVar10 = uVar8 + *(int *)(pauVar18[-1] + 0x1c) + (uVar22 & uVar21) + (~uVar21 & uVar23) +
               ((uVar21 >> 0x19 | uVar21 * 0x80) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
               (uVar21 >> 6 | uVar21 * 0x4000000));
      uVar19 = uVar14 ^ uVar11;
      uVar20 = uVar20 + iVar10;
      auVar40 = vpor_avx(auVar39,auVar40);
      auVar39 = aesenclast(auVar41,param_4[0xe]);
      auVar42 = ZEXT1664(*param_4);
      uVar8 = (uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 0x16 | uVar14 * 0x400) ^
              (uVar14 >> 2 | uVar14 * 0x40000000);
      iVar10 = iVar10 + ((uVar11 ^ uVar12) & uVar19 ^ uVar11);
      lVar44 = auVar6._0_8_;
      lVar26 = vpextrq_avx(auVar6,1);
      auVar39 = vpand_avx(auVar39,auVar5);
      auVar39 = vpor_avx(auVar40,auVar39);
      auVar38 = ZEXT1664(auVar39);
      pauVar18 = pauVar18 + -4;
      *(undefined1 (*) [16])(lVar26 + lVar44) = auVar39;
      pauVar25 = (undefined1 (*) [16])(lVar44 + 0x10);
    } while (pauVar16 <= pauVar18);
    piVar4 = *(int **)(pauVar17[0xd] + 8);
    uVar24 = lVar44 + 0x50;
    param_7 = *(long *)(pauVar17[0xd] + 0x10);
    pauVar16 = pauVar17 + 10;
    iVar9 = iVar10 + uVar8 + *piVar4;
    uVar14 = uVar14 + piVar4[1];
    uVar11 = uVar11 + piVar4[2];
    uVar12 = uVar12 + piVar4[3];
    uVar20 = uVar20 + piVar4[4];
    uVar21 = uVar21 + piVar4[5];
    uVar22 = uVar22 + piVar4[6];
    uVar23 = uVar23 + piVar4[7];
    uVar13 = *(ulong *)(pauVar17[0xc] + 0x10);
    *piVar4 = iVar9;
    pauVar18 = (undefined1 (*) [32])(param_7 + uVar24);
    if (uVar24 == uVar13) {
      pauVar18 = pauVar16;
    }
    piVar4[1] = uVar14;
    piVar4[2] = uVar11;
    piVar4[3] = uVar12;
    piVar4[4] = uVar20;
    piVar4[5] = uVar21;
    piVar4[6] = uVar22;
    piVar4[7] = uVar23;
  } while (uVar24 <= uVar13);
  **(undefined1 (**) [16])pauVar17[0xd] = auVar39;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aesni_cbc_sha256_enc_shaext
               (uint *param_1,long param_2,long param_3,uint *param_4,undefined1 (*param_5) [16],
               undefined8 *param_6,undefined1 (*param_7) [16])

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  uint uVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
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
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
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
  
  auVar40 = _DAT_00104480;
  uVar3 = param_4[0x3c];
  param_2 = param_2 - (long)param_1;
  uVar11 = *param_4;
  uVar12 = param_4[1];
  uVar13 = param_4[2];
  uVar14 = param_4[3];
  auVar48 = *param_5;
  uVar44 = param_4[4];
  uVar45 = param_4[5];
  uVar46 = param_4[6];
  uVar47 = param_4[7];
  pauVar1 = (undefined1 (*) [16])(param_4 + 0x1c);
  auVar41._12_4_ = *(undefined4 *)(param_6 + 1);
  auVar41._8_4_ = *(undefined4 *)((long)param_6 + 0xc);
  auVar4._20_4_ = *(undefined4 *)param_6;
  auVar4._16_4_ = *(undefined4 *)((long)param_6 + 4);
  auVar4._24_4_ = *(undefined4 *)((long)param_6 + 0xc);
  auVar4._28_4_ = *(undefined4 *)(param_6 + 1);
  auVar41._0_8_ = CONCAT44(*(undefined4 *)(param_6 + 3),*(undefined4 *)((long)param_6 + 0x1c));
  auVar4._8_4_ = *(undefined4 *)((long)param_6 + 0x14);
  auVar4._0_8_ = auVar41._0_8_;
  auVar4._12_4_ = *(undefined4 *)(param_6 + 2);
  auVar38 = auVar4._8_16_;
  do {
    auVar54 = pshufb(*param_7,auVar40);
    pauVar2 = param_7 + 3;
    auVar49._0_4_ = _K256 + auVar54._0_4_;
    auVar49._4_4_ = _UNK_00104284 + auVar54._4_4_;
    auVar49._8_4_ = _UNK_00104288 + auVar54._8_4_;
    auVar49._12_4_ = _UNK_0010428c + auVar54._12_4_;
    auVar59 = pshufb(param_7[1],auVar40);
    auVar68._0_4_ = auVar48._0_4_ ^ *param_1 ^ uVar11;
    auVar68._4_4_ = auVar48._4_4_ ^ param_1[1] ^ uVar12;
    auVar68._8_4_ = auVar48._8_4_ ^ param_1[2] ^ uVar13;
    auVar68._12_4_ = auVar48._12_4_ ^ param_1[3] ^ uVar14;
    auVar48._4_4_ = uVar45;
    auVar48._0_4_ = uVar44;
    auVar48._8_4_ = uVar46;
    auVar48._12_4_ = uVar47;
    auVar48 = aesenc(auVar68,auVar48);
    auVar42 = sha256rnds2_sha(auVar41,auVar38,auVar49);
    auVar50._4_4_ = auVar49._12_4_;
    auVar50._0_4_ = auVar49._8_4_;
    auVar50._8_4_ = auVar49._0_4_;
    auVar50._12_4_ = auVar49._0_4_;
    auVar49 = aesenc(auVar48,*(undefined1 (*) [16])(param_4 + 8));
    auVar48 = sha256rnds2_sha(auVar38,auVar42,auVar50);
    auVar55._0_4_ = _DAT_001042a0 + auVar59._0_4_;
    auVar55._4_4_ = _UNK_001042a4 + auVar59._4_4_;
    auVar55._8_4_ = _UNK_001042a8 + auVar59._8_4_;
    auVar55._12_4_ = _UNK_001042ac + auVar59._12_4_;
    auVar64 = pshufb(param_7[2],auVar40);
    param_7 = param_7 + 4;
    auVar50 = aesenc(auVar49,*(undefined1 (*) [16])(param_4 + 0xc));
    auVar49 = sha256rnds2_sha(auVar42,auVar48,auVar55);
    auVar42._4_4_ = auVar55._12_4_;
    auVar42._0_4_ = auVar55._8_4_;
    auVar42._8_4_ = auVar55._0_4_;
    auVar42._12_4_ = auVar55._0_4_;
    auVar50 = aesenc(auVar50,*(undefined1 (*) [16])(param_4 + 0x10));
    auVar48 = sha256rnds2_sha(auVar48,auVar49,auVar42);
    auVar60._0_4_ = _DAT_001042c0 + auVar64._0_4_;
    auVar60._4_4_ = _UNK_001042c4 + auVar64._4_4_;
    auVar60._8_4_ = _UNK_001042c8 + auVar64._8_4_;
    auVar60._12_4_ = _UNK_001042cc + auVar64._12_4_;
    auVar68 = pshufb(*pauVar2,auVar40);
    auVar55 = sha256msg1_sha(auVar54,auVar59);
    auVar50 = aesenc(auVar50,*(undefined1 (*) [16])(param_4 + 0x14));
    auVar49 = sha256rnds2_sha(auVar49,auVar48,auVar60);
    auVar54._4_4_ = auVar60._12_4_;
    auVar54._0_4_ = auVar60._8_4_;
    auVar54._8_4_ = auVar60._0_4_;
    auVar54._12_4_ = auVar60._0_4_;
    auVar56._0_4_ = auVar55._0_4_ + auVar64._4_4_;
    auVar56._4_4_ = auVar55._4_4_ + auVar64._8_4_;
    auVar56._8_4_ = auVar55._8_4_ + auVar64._12_4_;
    auVar56._12_4_ = auVar55._12_4_ + auVar68._0_4_;
    auVar50 = aesenc(auVar50,*(undefined1 (*) [16])(param_4 + 0x18));
    auVar48 = sha256rnds2_sha(auVar48,auVar49,auVar54);
    auVar70._0_4_ = _DAT_001042e0 + auVar68._0_4_;
    auVar70._4_4_ = _UNK_001042e4 + auVar68._4_4_;
    auVar70._8_4_ = _UNK_001042e8 + auVar68._8_4_;
    auVar70._12_4_ = _UNK_001042ec + auVar68._12_4_;
    auVar42 = sha256msg2_sha(auVar56,auVar68);
    auVar60 = sha256msg1_sha(auVar59,auVar64);
    auVar55 = aesenc(auVar50,*pauVar1);
    auVar50 = sha256rnds2_sha(auVar49,auVar48,auVar70);
    auVar59._4_4_ = auVar70._12_4_;
    auVar59._0_4_ = auVar70._8_4_;
    auVar59._8_4_ = auVar70._0_4_;
    auVar59._12_4_ = auVar70._0_4_;
    auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x20));
    auVar61._0_4_ = auVar60._0_4_ + auVar68._4_4_;
    auVar61._4_4_ = auVar60._4_4_ + auVar68._8_4_;
    auVar61._8_4_ = auVar60._8_4_ + auVar68._12_4_;
    auVar61._12_4_ = auVar60._12_4_ + auVar42._0_4_;
    auVar49 = sha256rnds2_sha(auVar48,auVar50,auVar59);
    auVar15._0_4_ = _DAT_00104300 + auVar42._0_4_;
    auVar15._4_4_ = _UNK_00104304 + auVar42._4_4_;
    auVar15._8_4_ = _UNK_00104308 + auVar42._8_4_;
    auVar15._12_4_ = _UNK_0010430c + auVar42._12_4_;
    auVar60 = sha256msg2_sha(auVar61,auVar42);
    auVar54 = sha256msg1_sha(auVar64,auVar68);
    auVar48 = *(undefined1 (*) [16])(param_4 + 0x28);
    uVar44 = auVar48._0_4_;
    uVar45 = auVar48._4_4_;
    uVar46 = auVar48._8_4_;
    uVar47 = auVar48._12_4_;
    auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x24));
    auVar50 = sha256rnds2_sha(auVar50,auVar49,auVar15);
    auVar64._4_4_ = auVar15._12_4_;
    auVar64._0_4_ = auVar15._8_4_;
    auVar64._8_4_ = auVar15._0_4_;
    auVar64._12_4_ = auVar15._0_4_;
    auVar65._0_4_ = auVar54._0_4_ + auVar42._4_4_;
    auVar65._4_4_ = auVar54._4_4_ + auVar42._8_4_;
    auVar65._8_4_ = auVar54._8_4_ + auVar42._12_4_;
    auVar65._12_4_ = auVar54._12_4_ + auVar60._0_4_;
    if (10 < uVar3) {
      auVar55 = aesenc(auVar55,auVar48);
      auVar48 = *(undefined1 (*) [16])(param_4 + 0x30);
      uVar44 = auVar48._0_4_;
      uVar45 = auVar48._4_4_;
      uVar46 = auVar48._8_4_;
      uVar47 = auVar48._12_4_;
      auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x2c));
      if (uVar3 != 0xb) {
        auVar48 = aesenc(auVar55,auVar48);
        uVar44 = param_4[0x38];
        uVar45 = param_4[0x39];
        uVar46 = param_4[0x3a];
        uVar47 = param_4[0x3b];
        auVar55 = aesenc(auVar48,*(undefined1 (*) [16])(param_4 + 0x34));
      }
    }
    auVar6._4_4_ = uVar45;
    auVar6._0_4_ = uVar44;
    auVar6._8_4_ = uVar46;
    auVar6._12_4_ = uVar47;
    auVar55 = aesenclast(auVar55,auVar6);
    auVar48 = *(undefined1 (*) [16])(param_4 + 4);
    auVar49 = sha256rnds2_sha(auVar49,auVar50,auVar64);
    uVar44 = param_1[4];
    uVar45 = param_1[5];
    uVar46 = param_1[6];
    uVar47 = param_1[7];
    *(undefined1 (*) [16])(param_2 + (long)param_1) = auVar55;
    auVar51._0_4_ = auVar55._0_4_ ^ uVar44 ^ uVar11;
    auVar51._4_4_ = auVar55._4_4_ ^ uVar45 ^ uVar12;
    auVar51._8_4_ = auVar55._8_4_ ^ uVar46 ^ uVar13;
    auVar51._12_4_ = auVar55._12_4_ ^ uVar47 ^ uVar14;
    auVar48 = aesenc(auVar51,auVar48);
    auVar16._0_4_ = _DAT_00104320 + auVar60._0_4_;
    auVar16._4_4_ = _UNK_00104324 + auVar60._4_4_;
    auVar16._8_4_ = _UNK_00104328 + auVar60._8_4_;
    auVar16._12_4_ = _UNK_0010432c + auVar60._12_4_;
    auVar54 = sha256msg2_sha(auVar65,auVar60);
    auVar55 = sha256msg1_sha(auVar68,auVar42);
    auVar48 = aesenc(auVar48,*(undefined1 (*) [16])(param_4 + 8));
    auVar50 = sha256rnds2_sha(auVar50,auVar49,auVar16);
    auVar17._4_4_ = auVar16._12_4_;
    auVar17._0_4_ = auVar16._8_4_;
    auVar17._8_4_ = auVar16._0_4_;
    auVar17._12_4_ = auVar16._0_4_;
    auVar69._0_4_ = auVar55._0_4_ + auVar60._4_4_;
    auVar69._4_4_ = auVar55._4_4_ + auVar60._8_4_;
    auVar69._8_4_ = auVar55._8_4_ + auVar60._12_4_;
    auVar69._12_4_ = auVar55._12_4_ + auVar54._0_4_;
    auVar55 = aesenc(auVar48,*(undefined1 (*) [16])(param_4 + 0xc));
    auVar48 = sha256rnds2_sha(auVar49,auVar50,auVar17);
    auVar18._0_4_ = _DAT_00104340 + auVar54._0_4_;
    auVar18._4_4_ = _UNK_00104344 + auVar54._4_4_;
    auVar18._8_4_ = _UNK_00104348 + auVar54._8_4_;
    auVar18._12_4_ = _UNK_0010434c + auVar54._12_4_;
    auVar70 = sha256msg2_sha(auVar69,auVar54);
    auVar42 = sha256msg1_sha(auVar42,auVar60);
    auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x10));
    auVar49 = sha256rnds2_sha(auVar50,auVar48,auVar18);
    auVar19._4_4_ = auVar18._12_4_;
    auVar19._0_4_ = auVar18._8_4_;
    auVar19._8_4_ = auVar18._0_4_;
    auVar19._12_4_ = auVar18._0_4_;
    auVar57._0_4_ = auVar42._0_4_ + auVar54._4_4_;
    auVar57._4_4_ = auVar42._4_4_ + auVar54._8_4_;
    auVar57._8_4_ = auVar42._8_4_ + auVar54._12_4_;
    auVar57._12_4_ = auVar42._12_4_ + auVar70._0_4_;
    auVar50 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x14));
    auVar48 = sha256rnds2_sha(auVar48,auVar49,auVar19);
    auVar20._0_4_ = _DAT_00104360 + auVar70._0_4_;
    auVar20._4_4_ = _UNK_00104364 + auVar70._4_4_;
    auVar20._8_4_ = _UNK_00104368 + auVar70._8_4_;
    auVar20._12_4_ = _UNK_0010436c + auVar70._12_4_;
    auVar42 = sha256msg2_sha(auVar57,auVar70);
    auVar60 = sha256msg1_sha(auVar60,auVar54);
    auVar55 = aesenc(auVar50,*(undefined1 (*) [16])(param_4 + 0x18));
    auVar50 = sha256rnds2_sha(auVar49,auVar48,auVar20);
    auVar21._4_4_ = auVar20._12_4_;
    auVar21._0_4_ = auVar20._8_4_;
    auVar21._8_4_ = auVar20._0_4_;
    auVar21._12_4_ = auVar20._0_4_;
    auVar62._0_4_ = auVar60._0_4_ + auVar70._4_4_;
    auVar62._4_4_ = auVar60._4_4_ + auVar70._8_4_;
    auVar62._8_4_ = auVar60._8_4_ + auVar70._12_4_;
    auVar62._12_4_ = auVar60._12_4_ + auVar42._0_4_;
    auVar55 = aesenc(auVar55,*pauVar1);
    auVar49 = sha256rnds2_sha(auVar48,auVar50,auVar21);
    auVar22._0_4_ = _DAT_00104380 + auVar42._0_4_;
    auVar22._4_4_ = _UNK_00104384 + auVar42._4_4_;
    auVar22._8_4_ = _UNK_00104388 + auVar42._8_4_;
    auVar22._12_4_ = _UNK_0010438c + auVar42._12_4_;
    auVar60 = sha256msg2_sha(auVar62,auVar42);
    auVar48 = sha256msg1_sha(auVar54,auVar70);
    auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x20));
    auVar50 = sha256rnds2_sha(auVar50,auVar49,auVar22);
    auVar23._4_4_ = auVar22._12_4_;
    auVar23._0_4_ = auVar22._8_4_;
    auVar23._8_4_ = auVar22._0_4_;
    auVar23._12_4_ = auVar22._0_4_;
    auVar66._0_4_ = auVar48._0_4_ + auVar42._4_4_;
    auVar66._4_4_ = auVar48._4_4_ + auVar42._8_4_;
    auVar66._8_4_ = auVar48._8_4_ + auVar42._12_4_;
    auVar66._12_4_ = auVar48._12_4_ + auVar60._0_4_;
    auVar48 = *(undefined1 (*) [16])(param_4 + 0x28);
    uVar44 = auVar48._0_4_;
    uVar45 = auVar48._4_4_;
    uVar46 = auVar48._8_4_;
    uVar47 = auVar48._12_4_;
    auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x24));
    if (10 < uVar3) {
      auVar55 = aesenc(auVar55,auVar48);
      auVar48 = *(undefined1 (*) [16])(param_4 + 0x30);
      uVar44 = auVar48._0_4_;
      uVar45 = auVar48._4_4_;
      uVar46 = auVar48._8_4_;
      uVar47 = auVar48._12_4_;
      auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x2c));
      if (uVar3 != 0xb) {
        auVar48 = aesenc(auVar55,auVar48);
        uVar44 = param_4[0x38];
        uVar45 = param_4[0x39];
        uVar46 = param_4[0x3a];
        uVar47 = param_4[0x3b];
        auVar55 = aesenc(auVar48,*(undefined1 (*) [16])(param_4 + 0x34));
      }
    }
    auVar7._4_4_ = uVar45;
    auVar7._0_4_ = uVar44;
    auVar7._8_4_ = uVar46;
    auVar7._12_4_ = uVar47;
    auVar55 = aesenclast(auVar55,auVar7);
    auVar48 = *(undefined1 (*) [16])(param_4 + 4);
    auVar49 = sha256rnds2_sha(auVar49,auVar50,auVar23);
    uVar44 = param_1[8];
    uVar45 = param_1[9];
    uVar46 = param_1[10];
    uVar47 = param_1[0xb];
    *(undefined1 (*) [16])(param_2 + 0x10 + (long)param_1) = auVar55;
    auVar52._0_4_ = auVar55._0_4_ ^ uVar44 ^ uVar11;
    auVar52._4_4_ = auVar55._4_4_ ^ uVar45 ^ uVar12;
    auVar52._8_4_ = auVar55._8_4_ ^ uVar46 ^ uVar13;
    auVar52._12_4_ = auVar55._12_4_ ^ uVar47 ^ uVar14;
    auVar48 = aesenc(auVar52,auVar48);
    auVar24._0_4_ = _DAT_001043a0 + auVar60._0_4_;
    auVar24._4_4_ = _UNK_001043a4 + auVar60._4_4_;
    auVar24._8_4_ = _UNK_001043a8 + auVar60._8_4_;
    auVar24._12_4_ = _UNK_001043ac + auVar60._12_4_;
    auVar54 = sha256msg2_sha(auVar66,auVar60);
    auVar55 = sha256msg1_sha(auVar70,auVar42);
    auVar48 = aesenc(auVar48,*(undefined1 (*) [16])(param_4 + 8));
    auVar50 = sha256rnds2_sha(auVar50,auVar49,auVar24);
    auVar25._4_4_ = auVar24._12_4_;
    auVar25._0_4_ = auVar24._8_4_;
    auVar25._8_4_ = auVar24._0_4_;
    auVar25._12_4_ = auVar24._0_4_;
    auVar71._0_4_ = auVar55._0_4_ + auVar60._4_4_;
    auVar71._4_4_ = auVar55._4_4_ + auVar60._8_4_;
    auVar71._8_4_ = auVar55._8_4_ + auVar60._12_4_;
    auVar71._12_4_ = auVar55._12_4_ + auVar54._0_4_;
    auVar55 = aesenc(auVar48,*(undefined1 (*) [16])(param_4 + 0xc));
    auVar48 = sha256rnds2_sha(auVar49,auVar50,auVar25);
    auVar26._0_4_ = _DAT_001043c0 + auVar54._0_4_;
    auVar26._4_4_ = _UNK_001043c4 + auVar54._4_4_;
    auVar26._8_4_ = _UNK_001043c8 + auVar54._8_4_;
    auVar26._12_4_ = _UNK_001043cc + auVar54._12_4_;
    auVar70 = sha256msg2_sha(auVar71,auVar54);
    auVar42 = sha256msg1_sha(auVar42,auVar60);
    auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x10));
    auVar49 = sha256rnds2_sha(auVar50,auVar48,auVar26);
    auVar27._4_4_ = auVar26._12_4_;
    auVar27._0_4_ = auVar26._8_4_;
    auVar27._8_4_ = auVar26._0_4_;
    auVar27._12_4_ = auVar26._0_4_;
    auVar58._0_4_ = auVar42._0_4_ + auVar54._4_4_;
    auVar58._4_4_ = auVar42._4_4_ + auVar54._8_4_;
    auVar58._8_4_ = auVar42._8_4_ + auVar54._12_4_;
    auVar58._12_4_ = auVar42._12_4_ + auVar70._0_4_;
    auVar50 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x14));
    auVar48 = sha256rnds2_sha(auVar48,auVar49,auVar27);
    auVar28._0_4_ = _DAT_001043e0 + auVar70._0_4_;
    auVar28._4_4_ = _UNK_001043e4 + auVar70._4_4_;
    auVar28._8_4_ = _UNK_001043e8 + auVar70._8_4_;
    auVar28._12_4_ = _UNK_001043ec + auVar70._12_4_;
    auVar42 = sha256msg2_sha(auVar58,auVar70);
    auVar60 = sha256msg1_sha(auVar60,auVar54);
    auVar55 = aesenc(auVar50,*(undefined1 (*) [16])(param_4 + 0x18));
    auVar50 = sha256rnds2_sha(auVar49,auVar48,auVar28);
    auVar29._4_4_ = auVar28._12_4_;
    auVar29._0_4_ = auVar28._8_4_;
    auVar29._8_4_ = auVar28._0_4_;
    auVar29._12_4_ = auVar28._0_4_;
    auVar63._0_4_ = auVar60._0_4_ + auVar70._4_4_;
    auVar63._4_4_ = auVar60._4_4_ + auVar70._8_4_;
    auVar63._8_4_ = auVar60._8_4_ + auVar70._12_4_;
    auVar63._12_4_ = auVar60._12_4_ + auVar42._0_4_;
    auVar55 = aesenc(auVar55,*pauVar1);
    auVar49 = sha256rnds2_sha(auVar48,auVar50,auVar29);
    auVar30._0_4_ = _DAT_00104400 + auVar42._0_4_;
    auVar30._4_4_ = _UNK_00104404 + auVar42._4_4_;
    auVar30._8_4_ = _UNK_00104408 + auVar42._8_4_;
    auVar30._12_4_ = _UNK_0010440c + auVar42._12_4_;
    auVar60 = sha256msg2_sha(auVar63,auVar42);
    auVar48 = sha256msg1_sha(auVar54,auVar70);
    auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x20));
    auVar50 = sha256rnds2_sha(auVar50,auVar49,auVar30);
    auVar31._4_4_ = auVar30._12_4_;
    auVar31._0_4_ = auVar30._8_4_;
    auVar31._8_4_ = auVar30._0_4_;
    auVar31._12_4_ = auVar30._0_4_;
    auVar67._0_4_ = auVar48._0_4_ + auVar42._4_4_;
    auVar67._4_4_ = auVar48._4_4_ + auVar42._8_4_;
    auVar67._8_4_ = auVar48._8_4_ + auVar42._12_4_;
    auVar67._12_4_ = auVar48._12_4_ + auVar60._0_4_;
    auVar48 = *(undefined1 (*) [16])(param_4 + 0x28);
    uVar44 = auVar48._0_4_;
    uVar45 = auVar48._4_4_;
    uVar46 = auVar48._8_4_;
    uVar47 = auVar48._12_4_;
    auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x24));
    auVar49 = sha256rnds2_sha(auVar49,auVar50,auVar31);
    auVar32._0_4_ = _DAT_00104420 + auVar60._0_4_;
    auVar32._4_4_ = _UNK_00104424 + auVar60._4_4_;
    auVar32._8_4_ = _UNK_00104428 + auVar60._8_4_;
    auVar32._12_4_ = _UNK_0010442c + auVar60._12_4_;
    auVar54 = sha256msg2_sha(auVar67,auVar60);
    auVar42 = sha256msg1_sha(auVar70,auVar42);
    if (10 < uVar3) {
      auVar55 = aesenc(auVar55,auVar48);
      auVar48 = *(undefined1 (*) [16])(param_4 + 0x30);
      uVar44 = auVar48._0_4_;
      uVar45 = auVar48._4_4_;
      uVar46 = auVar48._8_4_;
      uVar47 = auVar48._12_4_;
      auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x2c));
      if (uVar3 != 0xb) {
        auVar48 = aesenc(auVar55,auVar48);
        uVar44 = param_4[0x38];
        uVar45 = param_4[0x39];
        uVar46 = param_4[0x3a];
        uVar47 = param_4[0x3b];
        auVar55 = aesenc(auVar48,*(undefined1 (*) [16])(param_4 + 0x34));
      }
    }
    auVar8._4_4_ = uVar45;
    auVar8._0_4_ = uVar44;
    auVar8._8_4_ = uVar46;
    auVar8._12_4_ = uVar47;
    auVar55 = aesenclast(auVar55,auVar8);
    auVar48 = *(undefined1 (*) [16])(param_4 + 4);
    auVar50 = sha256rnds2_sha(auVar50,auVar49,auVar32);
    auVar33._4_4_ = auVar32._12_4_;
    auVar33._0_4_ = auVar32._8_4_;
    auVar33._8_4_ = auVar32._0_4_;
    auVar33._12_4_ = auVar32._0_4_;
    auVar72._0_4_ = auVar42._0_4_ + auVar60._4_4_;
    auVar72._4_4_ = auVar42._4_4_ + auVar60._8_4_;
    auVar72._8_4_ = auVar42._8_4_ + auVar60._12_4_;
    auVar72._12_4_ = auVar42._12_4_ + auVar54._0_4_;
    uVar44 = param_1[0xc];
    uVar45 = param_1[0xd];
    uVar46 = param_1[0xe];
    uVar47 = param_1[0xf];
    *(undefined1 (*) [16])(param_2 + 0x20 + (long)param_1) = auVar55;
    auVar53._0_4_ = auVar55._0_4_ ^ uVar44 ^ uVar11;
    auVar53._4_4_ = auVar55._4_4_ ^ uVar45 ^ uVar12;
    auVar53._8_4_ = auVar55._8_4_ ^ uVar46 ^ uVar13;
    auVar53._12_4_ = auVar55._12_4_ ^ uVar47 ^ uVar14;
    auVar48 = aesenc(auVar53,auVar48);
    auVar55 = aesenc(auVar48,*(undefined1 (*) [16])(param_4 + 8));
    auVar48 = sha256rnds2_sha(auVar49,auVar50,auVar33);
    auVar34._0_4_ = _DAT_00104440 + auVar54._0_4_;
    auVar34._4_4_ = _UNK_00104444 + auVar54._4_4_;
    auVar34._8_4_ = _UNK_00104448 + auVar54._8_4_;
    auVar34._12_4_ = _UNK_0010444c + auVar54._12_4_;
    auVar42 = sha256msg2_sha(auVar72,auVar54);
    auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0xc));
    auVar49 = sha256rnds2_sha(auVar50,auVar48,auVar34);
    auVar35._4_4_ = auVar34._12_4_;
    auVar35._0_4_ = auVar34._8_4_;
    auVar35._8_4_ = auVar34._0_4_;
    auVar35._12_4_ = auVar34._0_4_;
    auVar50 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x10));
    auVar48 = sha256rnds2_sha(auVar48,auVar49,auVar35);
    auVar36._0_4_ = _DAT_00104460 + auVar42._0_4_;
    auVar36._4_4_ = _UNK_00104464 + auVar42._4_4_;
    auVar36._8_4_ = _UNK_00104468 + auVar42._8_4_;
    auVar36._12_4_ = _UNK_0010446c + auVar42._12_4_;
    auVar50 = aesenc(auVar50,*(undefined1 (*) [16])(param_4 + 0x14));
    auVar55 = aesenc(auVar50,*(undefined1 (*) [16])(param_4 + 0x18));
    auVar50 = sha256rnds2_sha(auVar49,auVar48,auVar36);
    auVar37._4_4_ = auVar36._12_4_;
    auVar37._0_4_ = auVar36._8_4_;
    auVar37._8_4_ = auVar36._0_4_;
    auVar37._12_4_ = auVar36._0_4_;
    auVar55 = aesenc(auVar55,*pauVar1);
    auVar49 = sha256rnds2_sha(auVar48,auVar50,auVar37);
    auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x20));
    auVar48 = *(undefined1 (*) [16])(param_4 + 0x28);
    uVar44 = auVar48._0_4_;
    uVar45 = auVar48._4_4_;
    uVar46 = auVar48._8_4_;
    uVar47 = auVar48._12_4_;
    auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x24));
    if (10 < uVar3) {
      auVar55 = aesenc(auVar55,auVar48);
      auVar48 = *(undefined1 (*) [16])(param_4 + 0x30);
      uVar44 = auVar48._0_4_;
      uVar45 = auVar48._4_4_;
      uVar46 = auVar48._8_4_;
      uVar47 = auVar48._12_4_;
      auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x2c));
      if (uVar3 != 0xb) {
        auVar48 = aesenc(auVar55,auVar48);
        uVar44 = param_4[0x38];
        uVar45 = param_4[0x39];
        uVar46 = param_4[0x3a];
        uVar47 = param_4[0x3b];
        auVar55 = aesenc(auVar48,*(undefined1 (*) [16])(param_4 + 0x34));
      }
    }
    auVar9._4_4_ = uVar45;
    auVar9._0_4_ = uVar44;
    auVar9._8_4_ = uVar46;
    auVar9._12_4_ = uVar47;
    auVar48 = aesenclast(auVar55,auVar9);
    uVar44 = param_4[4];
    uVar45 = param_4[5];
    uVar46 = param_4[6];
    uVar47 = param_4[7];
    auVar43._0_4_ = auVar50._0_4_ + auVar41._0_4_;
    auVar43._4_4_ = auVar50._4_4_ + auVar41._4_4_;
    auVar43._8_4_ = auVar50._8_4_ + auVar41._8_4_;
    auVar43._12_4_ = auVar50._12_4_ + auVar41._12_4_;
    auVar39._0_4_ = auVar49._0_4_ + auVar38._0_4_;
    auVar39._4_4_ = auVar49._4_4_ + auVar38._4_4_;
    auVar39._8_4_ = auVar49._8_4_ + auVar38._8_4_;
    auVar39._12_4_ = auVar49._12_4_ + auVar38._12_4_;
    param_3 = param_3 + -1;
    *(undefined1 (*) [16])(param_2 + 0x30 + (long)param_1) = auVar48;
    param_1 = param_1 + 0x10;
    auVar38 = auVar39;
    auVar41 = auVar43;
  } while (param_3 != 0);
  auVar38._4_4_ = auVar43._0_4_;
  auVar38._0_4_ = auVar43._4_4_;
  auVar38._8_4_ = auVar43._12_4_;
  auVar38._12_4_ = auVar43._8_4_;
  auVar5._4_4_ = auVar39._8_4_;
  auVar5._0_4_ = auVar39._12_4_;
  auVar5._8_4_ = auVar39._4_4_;
  auVar5._12_4_ = auVar39._0_4_;
  auVar10._4_8_ = auVar39._8_8_;
  auVar10._0_4_ = auVar39._0_4_;
  auVar40._0_8_ = auVar10._0_8_ << 0x20;
  auVar40._8_4_ = auVar39._12_4_;
  auVar40._12_4_ = auVar39._8_4_;
  auVar5._16_16_ = auVar38;
  *param_5 = auVar48;
  *param_6 = auVar40._8_8_;
  param_6[1] = auVar38._8_8_;
  *(undefined1 (*) [16])(param_6 + 2) = auVar5._8_16_;
  return;
}



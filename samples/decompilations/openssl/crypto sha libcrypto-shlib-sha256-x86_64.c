
/* WARNING: Removing unreachable block (ram,0x00101c08) */
/* WARNING: Removing unreachable block (ram,0x00101e0e) */
/* WARNING: Removing unreachable block (ram,0x001019fa) */
/* WARNING: Removing unreachable block (ram,0x001017f5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sha256_block_data_order(uint *param_1,undefined1 (*param_2) [16],long param_3)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  undefined1 (*pauVar4) [16];
  uint *puVar5;
  undefined1 (*pauVar6) [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [60];
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 (*pauVar24) [16];
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  undefined1 (*pauVar33) [32];
  undefined1 (*pauVar34) [32];
  int *piVar35;
  undefined1 (*pauVar36) [16];
  undefined1 (*pauVar37) [32];
  undefined1 (*pauVar38) [32];
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  int iVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
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
  undefined1 in_ZMM0 [64];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar68 [64];
  undefined1 auVar69 [64];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar73 [64];
  undefined1 auVar74 [64];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 in_ZMM3 [64];
  uint uVar85;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  uint uVar86;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  uint uVar118;
  uint uVar150;
  uint uVar151;
  uint uVar152;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [32];
  undefined1 auVar149 [32];
  undefined1 auStack_250 [400];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  
  auVar71 = _DAT_00104980;
  auVar66 = _DAT_00104960;
  if ((_DAT_00105008 & 0x20000000) != 0) {
    auVar68._16_48_ = in_ZMM1._16_48_;
    auVar73._16_48_ = in_ZMM2._16_48_;
    auVar73._12_4_ = param_1[2];
    auVar73._8_4_ = param_1[3];
    auVar7._20_4_ = *param_1;
    auVar7._16_4_ = param_1[1];
    auVar7._24_4_ = param_1[3];
    auVar7._28_4_ = param_1[2];
    auVar73._0_8_ = CONCAT44(param_1[6],param_1[7]);
    auVar7._8_4_ = param_1[5];
    auVar7._0_8_ = auVar73._0_8_;
    auVar7._12_4_ = param_1[4];
    auVar68._0_16_ = auVar7._8_16_;
    do {
      auVar75 = pshufb(*param_2,_DAT_00104940);
      pauVar4 = param_2 + 3;
      auVar66._0_4_ = K256 + auVar75._0_4_;
      auVar66._4_4_ = DAT_00104744 + auVar75._4_4_;
      auVar66._8_4_ = DAT_00104748 + auVar75._8_4_;
      auVar66._12_4_ = DAT_0010474c + auVar75._12_4_;
      auVar144 = pshufb(param_2[1],_DAT_00104940);
      auVar74._16_48_ = auVar73._16_48_;
      auVar70 = sha256rnds2_sha(auVar73._0_16_,auVar68._0_16_,auVar66);
      auVar71._4_4_ = auVar66._12_4_;
      auVar71._0_4_ = auVar66._8_4_;
      auVar71._8_4_ = auVar66._0_4_;
      auVar71._12_4_ = auVar66._0_4_;
      auVar69._16_48_ = auVar68._16_48_;
      auVar66 = sha256rnds2_sha(auVar68._0_16_,auVar70,auVar71);
      auVar76._0_4_ = DAT_00104760 + auVar144._0_4_;
      auVar76._4_4_ = DAT_00104764 + auVar144._4_4_;
      auVar76._8_4_ = DAT_00104768 + auVar144._8_4_;
      auVar76._12_4_ = DAT_0010476c + auVar144._12_4_;
      auVar92 = pshufb(param_2[2],_DAT_00104940);
      auVar71 = sha256rnds2_sha(auVar70,auVar66,auVar76);
      auVar70._4_4_ = auVar76._12_4_;
      auVar70._0_4_ = auVar76._8_4_;
      auVar70._8_4_ = auVar76._0_4_;
      auVar70._12_4_ = auVar76._0_4_;
      param_2 = param_2 + 4;
      auVar76 = sha256msg1_sha(auVar75,auVar144);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar70);
      auVar75._0_4_ = DAT_00104780 + auVar92._0_4_;
      auVar75._4_4_ = DAT_00104784 + auVar92._4_4_;
      auVar75._8_4_ = DAT_00104788 + auVar92._8_4_;
      auVar75._12_4_ = DAT_0010478c + auVar92._12_4_;
      auVar110 = pshufb(*pauVar4,_DAT_00104940);
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar75);
      auVar95._4_4_ = auVar75._12_4_;
      auVar95._0_4_ = auVar75._8_4_;
      auVar95._8_4_ = auVar75._0_4_;
      auVar95._12_4_ = auVar75._0_4_;
      auVar77._0_4_ = auVar76._0_4_ + auVar92._4_4_;
      auVar77._4_4_ = auVar76._4_4_ + auVar92._8_4_;
      auVar77._8_4_ = auVar76._8_4_ + auVar92._12_4_;
      auVar77._12_4_ = auVar76._12_4_ + auVar110._0_4_;
      auVar70 = sha256msg1_sha(auVar144,auVar92);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar95);
      auVar144._0_4_ = DAT_001047a0 + auVar110._0_4_;
      auVar144._4_4_ = DAT_001047a4 + auVar110._4_4_;
      auVar144._8_4_ = DAT_001047a8 + auVar110._8_4_;
      auVar144._12_4_ = DAT_001047ac + auVar110._12_4_;
      auVar76 = sha256msg2_sha(auVar77,auVar110);
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar144);
      auVar91._4_4_ = auVar144._12_4_;
      auVar91._0_4_ = auVar144._8_4_;
      auVar91._8_4_ = auVar144._0_4_;
      auVar91._12_4_ = auVar144._0_4_;
      auVar80._0_4_ = auVar70._0_4_ + auVar110._4_4_;
      auVar80._4_4_ = auVar70._4_4_ + auVar110._8_4_;
      auVar80._8_4_ = auVar70._8_4_ + auVar110._12_4_;
      auVar80._12_4_ = auVar70._12_4_ + auVar76._0_4_;
      auVar75 = sha256msg1_sha(auVar92,auVar110);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar91);
      auVar92._0_4_ = DAT_001047c0 + auVar76._0_4_;
      auVar92._4_4_ = DAT_001047c4 + auVar76._4_4_;
      auVar92._8_4_ = DAT_001047c8 + auVar76._8_4_;
      auVar92._12_4_ = DAT_001047cc + auVar76._12_4_;
      auVar70 = sha256msg2_sha(auVar80,auVar76);
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar92);
      auVar109._4_4_ = auVar92._12_4_;
      auVar109._0_4_ = auVar92._8_4_;
      auVar109._8_4_ = auVar92._0_4_;
      auVar109._12_4_ = auVar92._0_4_;
      auVar87._0_4_ = auVar75._0_4_ + auVar76._4_4_;
      auVar87._4_4_ = auVar75._4_4_ + auVar76._8_4_;
      auVar87._8_4_ = auVar75._8_4_ + auVar76._12_4_;
      auVar87._12_4_ = auVar75._12_4_ + auVar70._0_4_;
      auVar95 = sha256msg1_sha(auVar110,auVar76);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar109);
      auVar110._0_4_ = DAT_001047e0 + auVar70._0_4_;
      auVar110._4_4_ = DAT_001047e4 + auVar70._4_4_;
      auVar110._8_4_ = DAT_001047e8 + auVar70._8_4_;
      auVar110._12_4_ = DAT_001047ec + auVar70._12_4_;
      auVar75 = sha256msg2_sha(auVar87,auVar70);
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar110);
      auVar111._4_4_ = auVar110._12_4_;
      auVar111._0_4_ = auVar110._8_4_;
      auVar111._8_4_ = auVar110._0_4_;
      auVar111._12_4_ = auVar110._0_4_;
      auVar96._0_4_ = auVar95._0_4_ + auVar70._4_4_;
      auVar96._4_4_ = auVar95._4_4_ + auVar70._8_4_;
      auVar96._8_4_ = auVar95._8_4_ + auVar70._12_4_;
      auVar96._12_4_ = auVar95._12_4_ + auVar75._0_4_;
      auVar76 = sha256msg1_sha(auVar76,auVar70);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar111);
      auVar143._0_4_ = DAT_00104800 + auVar75._0_4_;
      auVar143._4_4_ = DAT_00104804 + auVar75._4_4_;
      auVar143._8_4_ = DAT_00104808 + auVar75._8_4_;
      auVar143._12_4_ = DAT_0010480c + auVar75._12_4_;
      auVar95 = sha256msg2_sha(auVar96,auVar75);
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar143);
      auVar145._4_4_ = auVar143._12_4_;
      auVar145._0_4_ = auVar143._8_4_;
      auVar145._8_4_ = auVar143._0_4_;
      auVar145._12_4_ = auVar143._0_4_;
      auVar78._0_4_ = auVar76._0_4_ + auVar75._4_4_;
      auVar78._4_4_ = auVar76._4_4_ + auVar75._8_4_;
      auVar78._8_4_ = auVar76._8_4_ + auVar75._12_4_;
      auVar78._12_4_ = auVar76._12_4_ + auVar95._0_4_;
      auVar70 = sha256msg1_sha(auVar70,auVar75);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar145);
      auVar146._0_4_ = DAT_00104820 + auVar95._0_4_;
      auVar146._4_4_ = DAT_00104824 + auVar95._4_4_;
      auVar146._8_4_ = DAT_00104828 + auVar95._8_4_;
      auVar146._12_4_ = DAT_0010482c + auVar95._12_4_;
      auVar76 = sha256msg2_sha(auVar78,auVar95);
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar146);
      auVar147._4_4_ = auVar146._12_4_;
      auVar147._0_4_ = auVar146._8_4_;
      auVar147._8_4_ = auVar146._0_4_;
      auVar147._12_4_ = auVar146._0_4_;
      auVar81._0_4_ = auVar70._0_4_ + auVar95._4_4_;
      auVar81._4_4_ = auVar70._4_4_ + auVar95._8_4_;
      auVar81._8_4_ = auVar70._8_4_ + auVar95._12_4_;
      auVar81._12_4_ = auVar70._12_4_ + auVar76._0_4_;
      auVar75 = sha256msg1_sha(auVar75,auVar95);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar147);
      auVar50._0_4_ = DAT_00104840 + auVar76._0_4_;
      auVar50._4_4_ = DAT_00104844 + auVar76._4_4_;
      auVar50._8_4_ = DAT_00104848 + auVar76._8_4_;
      auVar50._12_4_ = DAT_0010484c + auVar76._12_4_;
      auVar70 = sha256msg2_sha(auVar81,auVar76);
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar50);
      auVar51._4_4_ = auVar50._12_4_;
      auVar51._0_4_ = auVar50._8_4_;
      auVar51._8_4_ = auVar50._0_4_;
      auVar51._12_4_ = auVar50._0_4_;
      auVar88._0_4_ = auVar75._0_4_ + auVar76._4_4_;
      auVar88._4_4_ = auVar75._4_4_ + auVar76._8_4_;
      auVar88._8_4_ = auVar75._8_4_ + auVar76._12_4_;
      auVar88._12_4_ = auVar75._12_4_ + auVar70._0_4_;
      auVar95 = sha256msg1_sha(auVar95,auVar76);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar51);
      auVar52._0_4_ = DAT_00104860 + auVar70._0_4_;
      auVar52._4_4_ = DAT_00104864 + auVar70._4_4_;
      auVar52._8_4_ = DAT_00104868 + auVar70._8_4_;
      auVar52._12_4_ = DAT_0010486c + auVar70._12_4_;
      auVar75 = sha256msg2_sha(auVar88,auVar70);
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar52);
      auVar53._4_4_ = auVar52._12_4_;
      auVar53._0_4_ = auVar52._8_4_;
      auVar53._8_4_ = auVar52._0_4_;
      auVar53._12_4_ = auVar52._0_4_;
      auVar97._0_4_ = auVar95._0_4_ + auVar70._4_4_;
      auVar97._4_4_ = auVar95._4_4_ + auVar70._8_4_;
      auVar97._8_4_ = auVar95._8_4_ + auVar70._12_4_;
      auVar97._12_4_ = auVar95._12_4_ + auVar75._0_4_;
      auVar76 = sha256msg1_sha(auVar76,auVar70);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar53);
      auVar54._0_4_ = DAT_00104880 + auVar75._0_4_;
      auVar54._4_4_ = DAT_00104884 + auVar75._4_4_;
      auVar54._8_4_ = DAT_00104888 + auVar75._8_4_;
      auVar54._12_4_ = DAT_0010488c + auVar75._12_4_;
      auVar95 = sha256msg2_sha(auVar97,auVar75);
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar54);
      auVar55._4_4_ = auVar54._12_4_;
      auVar55._0_4_ = auVar54._8_4_;
      auVar55._8_4_ = auVar54._0_4_;
      auVar55._12_4_ = auVar54._0_4_;
      auVar79._0_4_ = auVar76._0_4_ + auVar75._4_4_;
      auVar79._4_4_ = auVar76._4_4_ + auVar75._8_4_;
      auVar79._8_4_ = auVar76._8_4_ + auVar75._12_4_;
      auVar79._12_4_ = auVar76._12_4_ + auVar95._0_4_;
      auVar70 = sha256msg1_sha(auVar70,auVar75);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar55);
      auVar56._0_4_ = DAT_001048a0 + auVar95._0_4_;
      auVar56._4_4_ = DAT_001048a4 + auVar95._4_4_;
      auVar56._8_4_ = DAT_001048a8 + auVar95._8_4_;
      auVar56._12_4_ = DAT_001048ac + auVar95._12_4_;
      auVar76 = sha256msg2_sha(auVar79,auVar95);
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar56);
      auVar57._4_4_ = auVar56._12_4_;
      auVar57._0_4_ = auVar56._8_4_;
      auVar57._8_4_ = auVar56._0_4_;
      auVar57._12_4_ = auVar56._0_4_;
      auVar82._0_4_ = auVar70._0_4_ + auVar95._4_4_;
      auVar82._4_4_ = auVar70._4_4_ + auVar95._8_4_;
      auVar82._8_4_ = auVar70._8_4_ + auVar95._12_4_;
      auVar82._12_4_ = auVar70._12_4_ + auVar76._0_4_;
      auVar75 = sha256msg1_sha(auVar75,auVar95);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar57);
      auVar58._0_4_ = _DAT_001048c0 + auVar76._0_4_;
      auVar58._4_4_ = _UNK_001048c4 + auVar76._4_4_;
      auVar58._8_4_ = _UNK_001048c8 + auVar76._8_4_;
      auVar58._12_4_ = _UNK_001048cc + auVar76._12_4_;
      auVar70 = sha256msg2_sha(auVar82,auVar76);
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar58);
      auVar59._4_4_ = auVar58._12_4_;
      auVar59._0_4_ = auVar58._8_4_;
      auVar59._8_4_ = auVar58._0_4_;
      auVar59._12_4_ = auVar58._0_4_;
      auVar89._0_4_ = auVar75._0_4_ + auVar76._4_4_;
      auVar89._4_4_ = auVar75._4_4_ + auVar76._8_4_;
      auVar89._8_4_ = auVar75._8_4_ + auVar76._12_4_;
      auVar89._12_4_ = auVar75._12_4_ + auVar70._0_4_;
      auVar75 = sha256msg1_sha(auVar95,auVar76);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar59);
      auVar60._0_4_ = _DAT_001048e0 + auVar70._0_4_;
      auVar60._4_4_ = _UNK_001048e4 + auVar70._4_4_;
      auVar60._8_4_ = _UNK_001048e8 + auVar70._8_4_;
      auVar60._12_4_ = _UNK_001048ec + auVar70._12_4_;
      auVar76 = sha256msg2_sha(auVar89,auVar70);
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar60);
      auVar61._4_4_ = auVar60._12_4_;
      auVar61._0_4_ = auVar60._8_4_;
      auVar61._8_4_ = auVar60._0_4_;
      auVar61._12_4_ = auVar60._0_4_;
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar61);
      auVar98._0_4_ = auVar75._0_4_ + auVar70._4_4_;
      auVar98._4_4_ = auVar75._4_4_ + auVar70._8_4_;
      auVar98._8_4_ = auVar75._8_4_ + auVar70._12_4_;
      auVar98._12_4_ = auVar75._12_4_ + auVar76._0_4_;
      auVar62._0_4_ = _DAT_00104900 + auVar76._0_4_;
      auVar62._4_4_ = _UNK_00104904 + auVar76._4_4_;
      auVar62._8_4_ = _UNK_00104908 + auVar76._8_4_;
      auVar62._12_4_ = _UNK_0010490c + auVar76._12_4_;
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar62);
      auVar63._4_4_ = auVar62._12_4_;
      auVar63._0_4_ = auVar62._8_4_;
      auVar63._8_4_ = auVar62._0_4_;
      auVar63._12_4_ = auVar62._0_4_;
      auVar76 = sha256msg2_sha(auVar98,auVar76);
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar63);
      auVar64._0_4_ = _DAT_00104920 + auVar76._0_4_;
      auVar64._4_4_ = _UNK_00104924 + auVar76._4_4_;
      auVar64._8_4_ = _UNK_00104928 + auVar76._8_4_;
      auVar64._12_4_ = _UNK_0010492c + auVar76._12_4_;
      auVar71 = sha256rnds2_sha(auVar71,auVar66,auVar64);
      auVar65._4_4_ = auVar64._12_4_;
      auVar65._0_4_ = auVar64._8_4_;
      auVar65._8_4_ = auVar64._0_4_;
      auVar65._12_4_ = auVar64._0_4_;
      param_3 = param_3 + -1;
      auVar66 = sha256rnds2_sha(auVar66,auVar71,auVar65);
      auVar74._0_4_ = auVar71._0_4_ + auVar73._0_4_;
      auVar74._4_4_ = auVar71._4_4_ + auVar73._4_4_;
      auVar74._8_4_ = auVar71._8_4_ + auVar73._8_4_;
      auVar74._12_4_ = auVar71._12_4_ + auVar73._12_4_;
      auVar69._0_4_ = auVar66._0_4_ + auVar68._0_4_;
      auVar69._4_4_ = auVar66._4_4_ + auVar68._4_4_;
      auVar69._8_4_ = auVar66._8_4_ + auVar68._8_4_;
      auVar69._12_4_ = auVar66._12_4_ + auVar68._12_4_;
      auVar68 = auVar69;
      auVar73 = auVar74;
    } while (param_3 != 0);
    auVar72._4_4_ = auVar74._0_4_;
    auVar72._0_4_ = auVar74._4_4_;
    auVar72._8_4_ = auVar74._12_4_;
    auVar72._12_4_ = auVar74._8_4_;
    auVar149._4_4_ = auVar69._8_4_;
    auVar149._0_4_ = auVar69._12_4_;
    auVar149._8_4_ = auVar69._4_4_;
    auVar149._12_4_ = auVar69._0_4_;
    auVar8._4_56_ = auVar69._8_56_;
    auVar8._0_4_ = auVar69._0_4_;
    auVar67._0_8_ = auVar8._0_8_ << 0x20;
    auVar67._8_4_ = auVar69._12_4_;
    auVar67._12_4_ = auVar69._8_4_;
    auVar149._16_16_ = auVar72;
    *(long *)param_1 = auVar67._8_8_;
    *(long *)(param_1 + 2) = auVar72._8_8_;
    *(undefined1 (*) [16])(param_1 + 4) = auVar149._8_16_;
    return;
  }
  if ((_DAT_00105008 & 0x128) == 0x128) {
    uVar32 = (ulong)auStack_250 & 0xfffffffffffffc00;
    pauVar33 = (undefined1 (*) [32])(uVar32 + 0x1c0);
    *(uint **)(uVar32 + 0x200) = param_1;
    *(undefined1 (**) [16])(uVar32 + 0x208) = param_2;
    *(undefined1 (**) [32])(uVar32 + 0x210) = (undefined1 (*) [32])(param_2 + param_3 * 4);
    *(BADSPACEBASE **)(uVar32 + 0x218) = register0x00000020;
    pauVar38 = (undefined1 (*) [32])(param_2 + 4);
    uVar25 = *param_1;
    uVar27 = param_1[1];
    uVar30 = param_1[2];
    pauVar37 = pauVar38;
    if (pauVar38 == (undefined1 (*) [32])(param_2 + param_3 * 4)) {
      pauVar37 = (undefined1 (*) [32])(uVar32 + 0x1c0);
    }
    uVar45 = param_1[3];
    uVar46 = param_1[4];
    uVar47 = param_1[5];
    uVar48 = param_1[6];
    uVar28 = param_1[7];
    auVar22._16_16_ = _UNK_00104970;
    auVar22._0_16_ = _DAT_00104960;
    auVar23._16_16_ = _UNK_00104990;
    auVar23._0_16_ = _DAT_00104980;
    do {
      auVar117._16_16_ = _UNK_00104950;
      auVar117._0_16_ = _DAT_00104940;
      auVar113._0_16_ =
           ZEXT116(0) * *(undefined1 (*) [16])*pauVar37 +
           ZEXT116(1) * *(undefined1 (*) [16])pauVar38[-2];
      auVar113._16_16_ =
           ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
           ZEXT116(1) * *(undefined1 (*) [16])*pauVar37;
      auVar115._0_16_ =
           ZEXT116(0) * *(undefined1 (*) [16])(*pauVar37 + 0x10) +
           ZEXT116(1) * *(undefined1 (*) [16])(pauVar38[-2] + 0x10);
      auVar115._16_16_ =
           ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
           ZEXT116(1) * *(undefined1 (*) [16])(*pauVar37 + 0x10);
      auVar113 = vpshufb_avx2(auVar113,auVar117);
      auVar116._0_16_ =
           ZEXT116(0) * *(undefined1 (*) [16])pauVar37[1] +
           ZEXT116(1) * *(undefined1 (*) [16])pauVar38[-1];
      auVar116._16_16_ =
           ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
           ZEXT116(1) * *(undefined1 (*) [16])pauVar37[1];
      auVar115 = vpshufb_avx2(auVar115,auVar117);
      auVar148._0_16_ =
           ZEXT116(0) * *(undefined1 (*) [16])(pauVar37[1] + 0x10) +
           ZEXT116(1) * *(undefined1 (*) [16])(pauVar38[-1] + 0x10);
      auVar148._16_16_ =
           ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
           ZEXT116(1) * *(undefined1 (*) [16])(pauVar37[1] + 0x10);
      auVar116 = vpshufb_avx2(auVar116,auVar117);
      auVar93._4_4_ = DAT_00104744;
      auVar93._0_4_ = K256;
      auVar93._8_4_ = DAT_00104748;
      auVar93._12_4_ = DAT_0010474c;
      auVar93._16_16_ = _UNK_00104750;
      auVar7 = vpaddd_avx2(auVar113,auVar93);
      auVar117 = vpshufb_avx2(auVar148,auVar117);
      auVar94._4_4_ = DAT_00104764;
      auVar94._0_4_ = DAT_00104760;
      auVar94._8_4_ = DAT_00104768;
      auVar94._12_4_ = DAT_0010476c;
      auVar94._16_16_ = _UNK_00104770;
      auVar149 = vpaddd_avx2(auVar115,auVar94);
      auVar112._4_4_ = DAT_00104784;
      auVar112._0_4_ = DAT_00104780;
      auVar112._8_4_ = DAT_00104788;
      auVar112._12_4_ = DAT_0010478c;
      auVar112._16_16_ = _UNK_00104790;
      auVar93 = vpaddd_avx2(auVar116,auVar112);
      auVar114._4_4_ = DAT_001047a4;
      auVar114._0_4_ = DAT_001047a0;
      auVar114._8_4_ = DAT_001047a8;
      auVar114._12_4_ = DAT_001047ac;
      auVar114._16_16_ = _UNK_001047b0;
      auVar94 = vpaddd_avx2(auVar117,auVar114);
      *pauVar33 = auVar7;
      uVar49 = 0;
      pauVar33[1] = auVar149;
      *(undefined8 *)(pauVar33[-3] + 0x18) = *(undefined8 *)(pauVar33[2] + 0x18);
      pauVar33[-2] = auVar93;
      uVar44 = uVar27 ^ uVar30;
      pauVar33[-1] = auVar94;
      pauVar33 = pauVar33 + -2;
      pauVar37 = (undefined1 (*) [32])&DAT_001047c0;
      do {
        pauVar34 = pauVar33;
        *(undefined8 *)(pauVar34[-3] + 0x18) = *(undefined8 *)(pauVar34[-1] + 0x18);
        auVar149 = vpalignr_avx2(auVar115,auVar113,4);
        auVar7 = vpalignr_avx2(auVar117,auVar116,4);
        uVar25 = uVar25 + uVar49;
        auVar112 = vpsrld_avx2(auVar149,7);
        auVar7 = vpaddd_avx2(auVar113,auVar7);
        auVar148 = vpsrld_avx2(auVar149,3);
        iVar43 = uVar28 + *(int *)pauVar34[2] + (uVar47 & uVar46) + (~uVar46 & uVar48) +
                 ((uVar46 >> 0x19 | uVar46 << 7) ^ (uVar46 >> 0xb | uVar46 << 0x15) ^
                 (uVar46 >> 6 | uVar46 << 0x1a));
        auVar93 = vpslld_avx2(auVar149,0xe);
        uVar45 = uVar45 + iVar43;
        auVar149 = vpshufd_avx2(auVar117,0xfa);
        auVar113 = vpsrld_avx2(auVar112,0xb);
        uVar28 = iVar43 + (uVar44 & (uVar25 ^ uVar27) ^ uVar27) +
                 ((uVar25 >> 0xd | uVar25 * 0x80000) ^ (uVar25 >> 0x16 | uVar25 * 0x400) ^
                 (uVar25 >> 2 | uVar25 * 0x40000000));
        auVar94 = vpslld_avx2(auVar93,0xb);
        auVar114 = vpsrld_avx2(auVar149,10);
        iVar43 = uVar48 + *(int *)(pauVar34[2] + 4) + (uVar46 & uVar45) + (~uVar45 & uVar47) +
                 ((uVar45 >> 0x19 | uVar45 * 0x80) ^ (uVar45 >> 0xb | uVar45 * 0x200000) ^
                 (uVar45 >> 6 | uVar45 * 0x4000000));
        uVar30 = uVar30 + iVar43;
        auVar149 = vpsrlq_avx2(auVar149,0x11);
        auVar7 = vpaddd_avx2(auVar7,auVar148 ^ auVar112 ^ auVar93 ^ auVar113 ^ auVar94);
        auVar93 = vpsrlq_avx2(auVar149,2);
        uVar48 = iVar43 + ((uVar25 ^ uVar27) & (uVar28 ^ uVar25) ^ uVar25) +
                 ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 >> 0x16 | uVar28 * 0x400) ^
                 (uVar28 >> 2 | uVar28 * 0x40000000));
        auVar149 = vpshufb_avx2(auVar114 ^ auVar149 ^ auVar93,auVar22);
        auVar7 = vpaddd_avx2(auVar7,auVar149);
        iVar43 = uVar47 + *(int *)(pauVar34[2] + 8) + (uVar45 & uVar30) + (~uVar30 & uVar46) +
                 ((uVar30 >> 0x19 | uVar30 * 0x80) ^ (uVar30 >> 0xb | uVar30 * 0x200000) ^
                 (uVar30 >> 6 | uVar30 * 0x4000000));
        auVar149 = vpshufd_avx2(auVar7,0x50);
        uVar27 = uVar27 + iVar43;
        auVar93 = vpsrld_avx2(auVar149,10);
        auVar149 = vpsrlq_avx2(auVar149,0x11);
        auVar94 = vpsrlq_avx2(auVar149,2);
        uVar47 = iVar43 + ((uVar28 ^ uVar25) & (uVar48 ^ uVar28) ^ uVar28) +
                 ((uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
                 (uVar48 >> 2 | uVar48 * 0x40000000));
        auVar149 = vpshufb_avx2(auVar93 ^ auVar149 ^ auVar94,auVar23);
        auVar113 = vpaddd_avx2(auVar7,auVar149);
        iVar43 = uVar46 + *(int *)(pauVar34[2] + 0xc) + (uVar30 & uVar27) + (~uVar27 & uVar45) +
                 ((uVar27 >> 0x19 | uVar27 * 0x80) ^ (uVar27 >> 0xb | uVar27 * 0x200000) ^
                 (uVar27 >> 6 | uVar27 * 0x4000000));
        auVar7 = vpaddd_avx2(auVar113,*pauVar37);
        uVar25 = uVar25 + iVar43;
        pauVar34[-2] = auVar7;
        auVar149 = vpalignr_avx2(auVar116,auVar115,4);
        auVar7 = vpalignr_avx2(auVar113,auVar117,4);
        uVar46 = iVar43 + ((uVar48 ^ uVar28) & (uVar47 ^ uVar48) ^ uVar48) +
                 ((uVar47 >> 0xd | uVar47 * 0x80000) ^ (uVar47 >> 0x16 | uVar47 * 0x400) ^
                 (uVar47 >> 2 | uVar47 * 0x40000000));
        auVar112 = vpsrld_avx2(auVar149,7);
        auVar7 = vpaddd_avx2(auVar115,auVar7);
        auVar148 = vpsrld_avx2(auVar149,3);
        iVar43 = uVar45 + *(int *)pauVar34[3] + (uVar27 & uVar25) + (~uVar25 & uVar30) +
                 ((uVar25 >> 0x19 | uVar25 * 0x80) ^ (uVar25 >> 0xb | uVar25 * 0x200000) ^
                 (uVar25 >> 6 | uVar25 * 0x4000000));
        auVar93 = vpslld_avx2(auVar149,0xe);
        uVar28 = uVar28 + iVar43;
        auVar149 = vpshufd_avx2(auVar113,0xfa);
        auVar115 = vpsrld_avx2(auVar112,0xb);
        uVar45 = iVar43 + ((uVar47 ^ uVar48) & (uVar46 ^ uVar47) ^ uVar47) +
                 ((uVar46 >> 0xd | uVar46 * 0x80000) ^ (uVar46 >> 0x16 | uVar46 * 0x400) ^
                 (uVar46 >> 2 | uVar46 * 0x40000000));
        auVar94 = vpslld_avx2(auVar93,0xb);
        auVar114 = vpsrld_avx2(auVar149,10);
        iVar43 = uVar30 + *(int *)(pauVar34[3] + 4) + (uVar25 & uVar28) + (~uVar28 & uVar27) +
                 ((uVar28 >> 0x19 | uVar28 * 0x80) ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^
                 (uVar28 >> 6 | uVar28 * 0x4000000));
        uVar48 = uVar48 + iVar43;
        auVar149 = vpsrlq_avx2(auVar149,0x11);
        auVar7 = vpaddd_avx2(auVar7,auVar148 ^ auVar112 ^ auVar93 ^ auVar115 ^ auVar94);
        auVar93 = vpsrlq_avx2(auVar149,2);
        uVar30 = iVar43 + ((uVar46 ^ uVar47) & (uVar45 ^ uVar46) ^ uVar46) +
                 ((uVar45 >> 0xd | uVar45 * 0x80000) ^ (uVar45 >> 0x16 | uVar45 * 0x400) ^
                 (uVar45 >> 2 | uVar45 * 0x40000000));
        auVar149 = vpshufb_avx2(auVar114 ^ auVar149 ^ auVar93,auVar22);
        auVar7 = vpaddd_avx2(auVar7,auVar149);
        iVar43 = uVar27 + *(int *)(pauVar34[3] + 8) + (uVar28 & uVar48) + (~uVar48 & uVar25) +
                 ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
                 (uVar48 >> 6 | uVar48 * 0x4000000));
        auVar149 = vpshufd_avx2(auVar7,0x50);
        uVar47 = uVar47 + iVar43;
        auVar93 = vpsrld_avx2(auVar149,10);
        auVar149 = vpsrlq_avx2(auVar149,0x11);
        auVar94 = vpsrlq_avx2(auVar149,2);
        uVar27 = iVar43 + ((uVar45 ^ uVar46) & (uVar30 ^ uVar45) ^ uVar45) +
                 ((uVar30 >> 0xd | uVar30 * 0x80000) ^ (uVar30 >> 0x16 | uVar30 * 0x400) ^
                 (uVar30 >> 2 | uVar30 * 0x40000000));
        auVar149 = vpshufb_avx2(auVar93 ^ auVar149 ^ auVar94,auVar23);
        auVar115 = vpaddd_avx2(auVar7,auVar149);
        iVar43 = uVar25 + *(int *)(pauVar34[3] + 0xc) + (uVar48 & uVar47) + (~uVar47 & uVar28) +
                 ((uVar47 >> 0x19 | uVar47 * 0x80) ^ (uVar47 >> 0xb | uVar47 * 0x200000) ^
                 (uVar47 >> 6 | uVar47 * 0x4000000));
        auVar7 = vpaddd_avx2(auVar115,pauVar37[1]);
        uVar46 = uVar46 + iVar43;
        pauVar34[-1] = auVar7;
        pauVar33 = pauVar34 + -4;
        *(undefined8 *)(pauVar34[-5] + 0x18) = *(undefined8 *)(pauVar34[-3] + 0x18);
        auVar149 = vpalignr_avx2(auVar117,auVar116,4);
        auVar7 = vpalignr_avx2(auVar115,auVar113,4);
        uVar25 = iVar43 + ((uVar30 ^ uVar45) & (uVar27 ^ uVar30) ^ uVar30) +
                 ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 >> 0x16 | uVar27 * 0x400) ^
                 (uVar27 >> 2 | uVar27 * 0x40000000));
        auVar112 = vpsrld_avx2(auVar149,7);
        auVar7 = vpaddd_avx2(auVar116,auVar7);
        auVar148 = vpsrld_avx2(auVar149,3);
        iVar43 = uVar28 + *(int *)*pauVar34 + (uVar47 & uVar46) + (~uVar46 & uVar48) +
                 ((uVar46 >> 0x19 | uVar46 * 0x80) ^ (uVar46 >> 0xb | uVar46 * 0x200000) ^
                 (uVar46 >> 6 | uVar46 * 0x4000000));
        auVar93 = vpslld_avx2(auVar149,0xe);
        uVar45 = uVar45 + iVar43;
        auVar149 = vpshufd_avx2(auVar115,0xfa);
        auVar116 = vpsrld_avx2(auVar112,0xb);
        uVar28 = iVar43 + ((uVar27 ^ uVar30) & (uVar25 ^ uVar27) ^ uVar27) +
                 ((uVar25 >> 0xd | uVar25 * 0x80000) ^ (uVar25 >> 0x16 | uVar25 * 0x400) ^
                 (uVar25 >> 2 | uVar25 * 0x40000000));
        auVar94 = vpslld_avx2(auVar93,0xb);
        auVar114 = vpsrld_avx2(auVar149,10);
        iVar43 = uVar48 + *(int *)(*pauVar34 + 4) + (uVar46 & uVar45) + (~uVar45 & uVar47) +
                 ((uVar45 >> 0x19 | uVar45 * 0x80) ^ (uVar45 >> 0xb | uVar45 * 0x200000) ^
                 (uVar45 >> 6 | uVar45 * 0x4000000));
        uVar30 = uVar30 + iVar43;
        auVar149 = vpsrlq_avx2(auVar149,0x11);
        auVar7 = vpaddd_avx2(auVar7,auVar148 ^ auVar112 ^ auVar93 ^ auVar116 ^ auVar94);
        auVar93 = vpsrlq_avx2(auVar149,2);
        uVar48 = iVar43 + ((uVar25 ^ uVar27) & (uVar28 ^ uVar25) ^ uVar25) +
                 ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 >> 0x16 | uVar28 * 0x400) ^
                 (uVar28 >> 2 | uVar28 * 0x40000000));
        auVar149 = vpshufb_avx2(auVar114 ^ auVar149 ^ auVar93,auVar22);
        auVar7 = vpaddd_avx2(auVar7,auVar149);
        iVar43 = uVar47 + *(int *)(*pauVar34 + 8) + (uVar45 & uVar30) + (~uVar30 & uVar46) +
                 ((uVar30 >> 0x19 | uVar30 * 0x80) ^ (uVar30 >> 0xb | uVar30 * 0x200000) ^
                 (uVar30 >> 6 | uVar30 * 0x4000000));
        auVar149 = vpshufd_avx2(auVar7,0x50);
        uVar27 = uVar27 + iVar43;
        auVar93 = vpsrld_avx2(auVar149,10);
        auVar149 = vpsrlq_avx2(auVar149,0x11);
        auVar94 = vpsrlq_avx2(auVar149,2);
        uVar47 = iVar43 + ((uVar28 ^ uVar25) & (uVar48 ^ uVar28) ^ uVar28) +
                 ((uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
                 (uVar48 >> 2 | uVar48 * 0x40000000));
        auVar149 = vpshufb_avx2(auVar93 ^ auVar149 ^ auVar94,auVar23);
        auVar116 = vpaddd_avx2(auVar7,auVar149);
        iVar43 = uVar46 + *(int *)(*pauVar34 + 0xc) + (uVar30 & uVar27) + (~uVar27 & uVar45) +
                 ((uVar27 >> 0x19 | uVar27 * 0x80) ^ (uVar27 >> 0xb | uVar27 * 0x200000) ^
                 (uVar27 >> 6 | uVar27 * 0x4000000));
        auVar7 = vpaddd_avx2(auVar116,pauVar37[2]);
        uVar25 = uVar25 + iVar43;
        *pauVar33 = auVar7;
        auVar149 = vpalignr_avx2(auVar113,auVar117,4);
        auVar7 = vpalignr_avx2(auVar116,auVar115,4);
        uVar46 = iVar43 + ((uVar48 ^ uVar28) & (uVar47 ^ uVar48) ^ uVar48) +
                 ((uVar47 >> 0xd | uVar47 * 0x80000) ^ (uVar47 >> 0x16 | uVar47 * 0x400) ^
                 (uVar47 >> 2 | uVar47 * 0x40000000));
        auVar112 = vpsrld_avx2(auVar149,7);
        auVar7 = vpaddd_avx2(auVar117,auVar7);
        auVar148 = vpsrld_avx2(auVar149,3);
        iVar43 = uVar45 + *(int *)pauVar34[1] + (uVar27 & uVar25) + (~uVar25 & uVar30) +
                 ((uVar25 >> 0x19 | uVar25 * 0x80) ^ (uVar25 >> 0xb | uVar25 * 0x200000) ^
                 (uVar25 >> 6 | uVar25 * 0x4000000));
        auVar93 = vpslld_avx2(auVar149,0xe);
        uVar28 = uVar28 + iVar43;
        auVar149 = vpshufd_avx2(auVar116,0xfa);
        auVar117 = vpsrld_avx2(auVar112,0xb);
        uVar45 = iVar43 + ((uVar47 ^ uVar48) & (uVar46 ^ uVar47) ^ uVar47) +
                 ((uVar46 >> 0xd | uVar46 * 0x80000) ^ (uVar46 >> 0x16 | uVar46 * 0x400) ^
                 (uVar46 >> 2 | uVar46 * 0x40000000));
        auVar94 = vpslld_avx2(auVar93,0xb);
        auVar114 = vpsrld_avx2(auVar149,10);
        iVar43 = uVar30 + *(int *)(pauVar34[1] + 4) + (uVar25 & uVar28) + (~uVar28 & uVar27) +
                 ((uVar28 >> 0x19 | uVar28 * 0x80) ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^
                 (uVar28 >> 6 | uVar28 * 0x4000000));
        uVar48 = uVar48 + iVar43;
        auVar149 = vpsrlq_avx2(auVar149,0x11);
        auVar7 = vpaddd_avx2(auVar7,auVar148 ^ auVar112 ^ auVar93 ^ auVar117 ^ auVar94);
        auVar93 = vpsrlq_avx2(auVar149,2);
        uVar30 = iVar43 + ((uVar46 ^ uVar47) & (uVar45 ^ uVar46) ^ uVar46) +
                 ((uVar45 >> 0xd | uVar45 * 0x80000) ^ (uVar45 >> 0x16 | uVar45 * 0x400) ^
                 (uVar45 >> 2 | uVar45 * 0x40000000));
        auVar149 = vpshufb_avx2(auVar114 ^ auVar149 ^ auVar93,auVar22);
        auVar7 = vpaddd_avx2(auVar7,auVar149);
        iVar43 = uVar27 + *(int *)(pauVar34[1] + 8) + (uVar28 & uVar48) + (~uVar48 & uVar25) +
                 ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
                 (uVar48 >> 6 | uVar48 * 0x4000000));
        auVar149 = vpshufd_avx2(auVar7,0x50);
        uVar47 = uVar47 + iVar43;
        auVar93 = vpsrld_avx2(auVar149,10);
        auVar149 = vpsrlq_avx2(auVar149,0x11);
        auVar94 = vpsrlq_avx2(auVar149,2);
        uVar27 = iVar43 + ((uVar45 ^ uVar46) & (uVar30 ^ uVar45) ^ uVar45) +
                 ((uVar30 >> 0xd | uVar30 * 0x80000) ^ (uVar30 >> 0x16 | uVar30 * 0x400) ^
                 (uVar30 >> 2 | uVar30 * 0x40000000));
        auVar149 = vpshufb_avx2(auVar93 ^ auVar149 ^ auVar94,auVar23);
        auVar117 = vpaddd_avx2(auVar7,auVar149);
        iVar43 = uVar25 + *(int *)(pauVar34[1] + 0xc) + (uVar48 & uVar47) + (~uVar47 & uVar28) +
                 ((uVar47 >> 0x19 | uVar47 * 0x80) ^ (uVar47 >> 0xb | uVar47 * 0x200000) ^
                 (uVar47 >> 6 | uVar47 * 0x4000000));
        uVar44 = uVar27 ^ uVar30;
        auVar7 = vpaddd_avx2(auVar117,pauVar37[3]);
        uVar46 = uVar46 + iVar43;
        uVar49 = (uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 >> 0x16 | uVar27 * 0x400) ^
                 (uVar27 >> 2 | uVar27 * 0x40000000);
        uVar25 = iVar43 + ((uVar30 ^ uVar45) & uVar44 ^ uVar30);
        pauVar34[-3] = auVar7;
        pauVar6 = pauVar37 + 4;
        pauVar37 = pauVar37 + 4;
      } while (*(char *)((long)*pauVar6 + 3) != '\0');
      uVar25 = uVar25 + uVar49;
      iVar43 = uVar28 + *(int *)pauVar34[-2] + (uVar47 & uVar46) + (~uVar46 & uVar48) +
               ((uVar46 >> 0x19 | uVar46 * 0x80) ^ (uVar46 >> 0xb | uVar46 * 0x200000) ^
               (uVar46 >> 6 | uVar46 * 0x4000000));
      uVar45 = uVar45 + iVar43;
      uVar28 = iVar43 + (uVar44 & (uVar25 ^ uVar27) ^ uVar27) +
               ((uVar25 >> 0xd | uVar25 * 0x80000) ^ (uVar25 >> 0x16 | uVar25 * 0x400) ^
               (uVar25 >> 2 | uVar25 * 0x40000000));
      iVar43 = uVar48 + *(int *)(pauVar34[-2] + 4) + (uVar46 & uVar45) + (~uVar45 & uVar47) +
               ((uVar45 >> 0x19 | uVar45 * 0x80) ^ (uVar45 >> 0xb | uVar45 * 0x200000) ^
               (uVar45 >> 6 | uVar45 * 0x4000000));
      uVar30 = uVar30 + iVar43;
      uVar48 = iVar43 + ((uVar25 ^ uVar27) & (uVar28 ^ uVar25) ^ uVar25) +
               ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 >> 0x16 | uVar28 * 0x400) ^
               (uVar28 >> 2 | uVar28 * 0x40000000));
      iVar43 = uVar47 + *(int *)(pauVar34[-2] + 8) + (uVar45 & uVar30) + (~uVar30 & uVar46) +
               ((uVar30 >> 0x19 | uVar30 * 0x80) ^ (uVar30 >> 0xb | uVar30 * 0x200000) ^
               (uVar30 >> 6 | uVar30 * 0x4000000));
      uVar27 = uVar27 + iVar43;
      uVar47 = iVar43 + ((uVar28 ^ uVar25) & (uVar48 ^ uVar28) ^ uVar28) +
               ((uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
               (uVar48 >> 2 | uVar48 * 0x40000000));
      iVar43 = uVar46 + *(int *)(pauVar34[-2] + 0xc) + (uVar30 & uVar27) + (~uVar27 & uVar45) +
               ((uVar27 >> 0x19 | uVar27 * 0x80) ^ (uVar27 >> 0xb | uVar27 * 0x200000) ^
               (uVar27 >> 6 | uVar27 * 0x4000000));
      uVar25 = uVar25 + iVar43;
      uVar46 = iVar43 + ((uVar48 ^ uVar28) & (uVar47 ^ uVar48) ^ uVar48) +
               ((uVar47 >> 0xd | uVar47 * 0x80000) ^ (uVar47 >> 0x16 | uVar47 * 0x400) ^
               (uVar47 >> 2 | uVar47 * 0x40000000));
      iVar43 = uVar45 + *(int *)pauVar34[-1] + (uVar27 & uVar25) + (~uVar25 & uVar30) +
               ((uVar25 >> 0x19 | uVar25 * 0x80) ^ (uVar25 >> 0xb | uVar25 * 0x200000) ^
               (uVar25 >> 6 | uVar25 * 0x4000000));
      uVar28 = uVar28 + iVar43;
      uVar45 = iVar43 + ((uVar47 ^ uVar48) & (uVar46 ^ uVar47) ^ uVar47) +
               ((uVar46 >> 0xd | uVar46 * 0x80000) ^ (uVar46 >> 0x16 | uVar46 * 0x400) ^
               (uVar46 >> 2 | uVar46 * 0x40000000));
      iVar43 = uVar30 + *(int *)(pauVar34[-1] + 4) + (uVar25 & uVar28) + (~uVar28 & uVar27) +
               ((uVar28 >> 0x19 | uVar28 * 0x80) ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^
               (uVar28 >> 6 | uVar28 * 0x4000000));
      uVar48 = uVar48 + iVar43;
      uVar30 = iVar43 + ((uVar46 ^ uVar47) & (uVar45 ^ uVar46) ^ uVar46) +
               ((uVar45 >> 0xd | uVar45 * 0x80000) ^ (uVar45 >> 0x16 | uVar45 * 0x400) ^
               (uVar45 >> 2 | uVar45 * 0x40000000));
      iVar43 = uVar27 + *(int *)(pauVar34[-1] + 8) + (uVar28 & uVar48) + (~uVar48 & uVar25) +
               ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
               (uVar48 >> 6 | uVar48 * 0x4000000));
      uVar47 = uVar47 + iVar43;
      uVar27 = iVar43 + ((uVar45 ^ uVar46) & (uVar30 ^ uVar45) ^ uVar45) +
               ((uVar30 >> 0xd | uVar30 * 0x80000) ^ (uVar30 >> 0x16 | uVar30 * 0x400) ^
               (uVar30 >> 2 | uVar30 * 0x40000000));
      iVar43 = uVar25 + *(int *)(pauVar34[-1] + 0xc) + (uVar48 & uVar47) + (~uVar47 & uVar28) +
               ((uVar47 >> 0x19 | uVar47 * 0x80) ^ (uVar47 >> 0xb | uVar47 * 0x200000) ^
               (uVar47 >> 6 | uVar47 * 0x4000000));
      uVar46 = uVar46 + iVar43;
      uVar25 = iVar43 + ((uVar30 ^ uVar45) & (uVar27 ^ uVar30) ^ uVar30) +
               ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 >> 0x16 | uVar27 * 0x400) ^
               (uVar27 >> 2 | uVar27 * 0x40000000));
      iVar43 = uVar28 + *(int *)*pauVar33 + (uVar47 & uVar46) + (~uVar46 & uVar48) +
               ((uVar46 >> 0x19 | uVar46 * 0x80) ^ (uVar46 >> 0xb | uVar46 * 0x200000) ^
               (uVar46 >> 6 | uVar46 * 0x4000000));
      uVar45 = uVar45 + iVar43;
      uVar28 = iVar43 + ((uVar27 ^ uVar30) & (uVar25 ^ uVar27) ^ uVar27) +
               ((uVar25 >> 0xd | uVar25 * 0x80000) ^ (uVar25 >> 0x16 | uVar25 * 0x400) ^
               (uVar25 >> 2 | uVar25 * 0x40000000));
      iVar43 = uVar48 + *(int *)(pauVar34[-4] + 4) + (uVar46 & uVar45) + (~uVar45 & uVar47) +
               ((uVar45 >> 0x19 | uVar45 * 0x80) ^ (uVar45 >> 0xb | uVar45 * 0x200000) ^
               (uVar45 >> 6 | uVar45 * 0x4000000));
      uVar30 = uVar30 + iVar43;
      uVar48 = iVar43 + ((uVar25 ^ uVar27) & (uVar28 ^ uVar25) ^ uVar25) +
               ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 >> 0x16 | uVar28 * 0x400) ^
               (uVar28 >> 2 | uVar28 * 0x40000000));
      iVar43 = uVar47 + *(int *)(pauVar34[-4] + 8) + (uVar45 & uVar30) + (~uVar30 & uVar46) +
               ((uVar30 >> 0x19 | uVar30 * 0x80) ^ (uVar30 >> 0xb | uVar30 * 0x200000) ^
               (uVar30 >> 6 | uVar30 * 0x4000000));
      uVar27 = uVar27 + iVar43;
      uVar47 = iVar43 + ((uVar28 ^ uVar25) & (uVar48 ^ uVar28) ^ uVar28) +
               ((uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
               (uVar48 >> 2 | uVar48 * 0x40000000));
      iVar43 = uVar46 + *(int *)(pauVar34[-4] + 0xc) + (uVar30 & uVar27) + (~uVar27 & uVar45) +
               ((uVar27 >> 0x19 | uVar27 * 0x80) ^ (uVar27 >> 0xb | uVar27 * 0x200000) ^
               (uVar27 >> 6 | uVar27 * 0x4000000));
      uVar25 = uVar25 + iVar43;
      uVar46 = iVar43 + ((uVar48 ^ uVar28) & (uVar47 ^ uVar48) ^ uVar48) +
               ((uVar47 >> 0xd | uVar47 * 0x80000) ^ (uVar47 >> 0x16 | uVar47 * 0x400) ^
               (uVar47 >> 2 | uVar47 * 0x40000000));
      iVar43 = uVar45 + *(int *)pauVar34[-3] + (uVar27 & uVar25) + (~uVar25 & uVar30) +
               ((uVar25 >> 0x19 | uVar25 * 0x80) ^ (uVar25 >> 0xb | uVar25 * 0x200000) ^
               (uVar25 >> 6 | uVar25 * 0x4000000));
      uVar28 = uVar28 + iVar43;
      uVar45 = iVar43 + ((uVar47 ^ uVar48) & (uVar46 ^ uVar47) ^ uVar47) +
               ((uVar46 >> 0xd | uVar46 * 0x80000) ^ (uVar46 >> 0x16 | uVar46 * 0x400) ^
               (uVar46 >> 2 | uVar46 * 0x40000000));
      iVar43 = uVar30 + *(int *)(pauVar34[-3] + 4) + (uVar25 & uVar28) + (~uVar28 & uVar27) +
               ((uVar28 >> 0x19 | uVar28 * 0x80) ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^
               (uVar28 >> 6 | uVar28 * 0x4000000));
      uVar48 = uVar48 + iVar43;
      uVar30 = iVar43 + ((uVar46 ^ uVar47) & (uVar45 ^ uVar46) ^ uVar46) +
               ((uVar45 >> 0xd | uVar45 * 0x80000) ^ (uVar45 >> 0x16 | uVar45 * 0x400) ^
               (uVar45 >> 2 | uVar45 * 0x40000000));
      iVar43 = uVar27 + *(int *)(pauVar34[-3] + 8) + (uVar28 & uVar48) + (~uVar48 & uVar25) +
               ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
               (uVar48 >> 6 | uVar48 * 0x4000000));
      uVar47 = uVar47 + iVar43;
      uVar27 = iVar43 + ((uVar45 ^ uVar46) & (uVar30 ^ uVar45) ^ uVar45) +
               ((uVar30 >> 0xd | uVar30 * 0x80000) ^ (uVar30 >> 0x16 | uVar30 * 0x400) ^
               (uVar30 >> 2 | uVar30 * 0x40000000));
      iVar43 = uVar25 + *(int *)(pauVar34[-3] + 0xc) + (uVar48 & uVar47) + (~uVar47 & uVar28) +
               ((uVar47 >> 0x19 | uVar47 * 0x80) ^ (uVar47 >> 0xb | uVar47 * 0x200000) ^
               (uVar47 >> 6 | uVar47 * 0x4000000));
      piVar35 = *(int **)pauVar34[0xc];
      pauVar37 = pauVar34 + 10;
      iVar26 = iVar43 + ((uVar30 ^ uVar45) & (uVar27 ^ uVar30) ^ uVar30) +
               ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 >> 0x16 | uVar27 * 0x400) ^
               (uVar27 >> 2 | uVar27 * 0x40000000)) + *piVar35;
      uVar27 = uVar27 + piVar35[1];
      uVar30 = uVar30 + piVar35[2];
      uVar45 = uVar45 + piVar35[3];
      uVar46 = uVar46 + iVar43 + piVar35[4];
      uVar47 = uVar47 + piVar35[5];
      uVar48 = uVar48 + piVar35[6];
      uVar28 = uVar28 + piVar35[7];
      *piVar35 = iVar26;
      piVar35[1] = uVar27;
      piVar35[2] = uVar30;
      piVar35[3] = uVar45;
      piVar35[4] = uVar46;
      piVar35[5] = uVar47;
      piVar35[6] = uVar48;
      piVar35[7] = uVar28;
      if (pauVar38 == *(undefined1 (**) [32])(pauVar34[0xc] + 0x10)) {
        return;
      }
      uVar25 = 0;
      uVar44 = uVar27 ^ uVar30;
      do {
        uVar25 = iVar26 + uVar25;
        iVar43 = uVar28 + *(int *)(*pauVar37 + 0x10) + (uVar47 & uVar46) + (~uVar46 & uVar48) +
                 ((uVar46 >> 0x19 | uVar46 << 7) ^ (uVar46 >> 0xb | uVar46 << 0x15) ^
                 (uVar46 >> 6 | uVar46 << 0x1a));
        uVar45 = uVar45 + iVar43;
        uVar28 = iVar43 + (uVar44 & (uVar25 ^ uVar27) ^ uVar27) +
                 ((uVar25 >> 0xd | uVar25 * 0x80000) ^ (uVar25 >> 0x16 | uVar25 * 0x400) ^
                 (uVar25 >> 2 | uVar25 * 0x40000000));
        iVar43 = uVar48 + *(int *)(*pauVar37 + 0x14) + (uVar46 & uVar45) + (~uVar45 & uVar47) +
                 ((uVar45 >> 0x19 | uVar45 * 0x80) ^ (uVar45 >> 0xb | uVar45 * 0x200000) ^
                 (uVar45 >> 6 | uVar45 * 0x4000000));
        uVar30 = uVar30 + iVar43;
        uVar48 = iVar43 + ((uVar25 ^ uVar27) & (uVar28 ^ uVar25) ^ uVar25) +
                 ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 >> 0x16 | uVar28 * 0x400) ^
                 (uVar28 >> 2 | uVar28 * 0x40000000));
        iVar43 = uVar47 + *(int *)(*pauVar37 + 0x18) + (uVar45 & uVar30) + (~uVar30 & uVar46) +
                 ((uVar30 >> 0x19 | uVar30 * 0x80) ^ (uVar30 >> 0xb | uVar30 * 0x200000) ^
                 (uVar30 >> 6 | uVar30 * 0x4000000));
        uVar27 = uVar27 + iVar43;
        uVar47 = iVar43 + ((uVar28 ^ uVar25) & (uVar48 ^ uVar28) ^ uVar28) +
                 ((uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
                 (uVar48 >> 2 | uVar48 * 0x40000000));
        iVar43 = uVar46 + *(int *)(*pauVar37 + 0x1c) + (uVar30 & uVar27) + (~uVar27 & uVar45) +
                 ((uVar27 >> 0x19 | uVar27 * 0x80) ^ (uVar27 >> 0xb | uVar27 * 0x200000) ^
                 (uVar27 >> 6 | uVar27 * 0x4000000));
        uVar25 = uVar25 + iVar43;
        uVar46 = iVar43 + ((uVar48 ^ uVar28) & (uVar47 ^ uVar48) ^ uVar48) +
                 ((uVar47 >> 0xd | uVar47 * 0x80000) ^ (uVar47 >> 0x16 | uVar47 * 0x400) ^
                 (uVar47 >> 2 | uVar47 * 0x40000000));
        iVar43 = uVar45 + *(int *)(pauVar37[1] + 0x10) + (uVar27 & uVar25) + (~uVar25 & uVar30) +
                 ((uVar25 >> 0x19 | uVar25 * 0x80) ^ (uVar25 >> 0xb | uVar25 * 0x200000) ^
                 (uVar25 >> 6 | uVar25 * 0x4000000));
        uVar28 = uVar28 + iVar43;
        uVar45 = iVar43 + ((uVar47 ^ uVar48) & (uVar46 ^ uVar47) ^ uVar47) +
                 ((uVar46 >> 0xd | uVar46 * 0x80000) ^ (uVar46 >> 0x16 | uVar46 * 0x400) ^
                 (uVar46 >> 2 | uVar46 * 0x40000000));
        iVar43 = uVar30 + *(int *)(pauVar37[1] + 0x14) + (uVar25 & uVar28) + (~uVar28 & uVar27) +
                 ((uVar28 >> 0x19 | uVar28 * 0x80) ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^
                 (uVar28 >> 6 | uVar28 * 0x4000000));
        uVar48 = uVar48 + iVar43;
        uVar30 = iVar43 + ((uVar46 ^ uVar47) & (uVar45 ^ uVar46) ^ uVar46) +
                 ((uVar45 >> 0xd | uVar45 * 0x80000) ^ (uVar45 >> 0x16 | uVar45 * 0x400) ^
                 (uVar45 >> 2 | uVar45 * 0x40000000));
        iVar43 = uVar27 + *(int *)(pauVar37[1] + 0x18) + (uVar28 & uVar48) + (~uVar48 & uVar25) +
                 ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
                 (uVar48 >> 6 | uVar48 * 0x4000000));
        uVar47 = uVar47 + iVar43;
        uVar27 = iVar43 + ((uVar45 ^ uVar46) & (uVar30 ^ uVar45) ^ uVar45) +
                 ((uVar30 >> 0xd | uVar30 * 0x80000) ^ (uVar30 >> 0x16 | uVar30 * 0x400) ^
                 (uVar30 >> 2 | uVar30 * 0x40000000));
        iVar26 = uVar25 + *(int *)(pauVar37[1] + 0x1c) + (uVar48 & uVar47) + (~uVar47 & uVar28) +
                 ((uVar47 >> 0x19 | uVar47 * 0x80) ^ (uVar47 >> 0xb | uVar47 * 0x200000) ^
                 (uVar47 >> 6 | uVar47 * 0x4000000));
        uVar44 = uVar27 ^ uVar30;
        uVar46 = uVar46 + iVar26;
        uVar25 = (uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 >> 0x16 | uVar27 * 0x400) ^
                 (uVar27 >> 2 | uVar27 * 0x40000000);
        iVar26 = iVar26 + ((uVar30 ^ uVar45) & uVar44 ^ uVar30);
        pauVar37 = pauVar37 + -2;
      } while (pauVar33 <= pauVar37);
      puVar5 = *(uint **)pauVar34[0xc];
      pauVar33 = pauVar34 + 10;
      uVar25 = iVar26 + uVar25 + *puVar5;
      uVar27 = uVar27 + puVar5[1];
      uVar30 = uVar30 + puVar5[2];
      uVar45 = uVar45 + puVar5[3];
      uVar46 = uVar46 + puVar5[4];
      uVar47 = uVar47 + puVar5[5];
      pauVar38 = pauVar38 + 4;
      uVar48 = uVar48 + puVar5[6];
      uVar28 = uVar28 + puVar5[7];
      pauVar6 = *(undefined1 (**) [32])(pauVar34[0xc] + 0x10);
      *puVar5 = uVar25;
      pauVar37 = pauVar38;
      if (pauVar38 == pauVar6) {
        pauVar37 = pauVar33;
      }
      puVar5[1] = uVar27;
      puVar5[2] = uVar30;
      puVar5[3] = uVar45;
      puVar5[4] = uVar46;
      puVar5[5] = uVar47;
      puVar5[6] = uVar48;
      puVar5[7] = uVar28;
    } while (pauVar38 <= pauVar6);
    return;
  }
  if ((_DAT_00105004 & 0x10000200 | _OPENSSL_ia32cap_P & 0x40000000) == 0x50000200) {
    pauVar4 = param_2 + param_3 * 4;
    uVar25 = *param_1;
    uVar30 = param_1[1];
    uVar27 = param_1[2];
    uVar28 = param_1[3];
    uVar48 = param_1[4];
    uVar47 = param_1[5];
    uVar46 = param_1[6];
    uVar45 = param_1[7];
    do {
      auVar76 = vpshufb_avx(*param_2,_DAT_00104940);
      auVar70 = vpshufb_avx(param_2[1],_DAT_00104940);
      auVar75 = vpshufb_avx(param_2[2],_DAT_00104940);
      auVar18._4_4_ = DAT_00104744;
      auVar18._0_4_ = K256;
      auVar18._8_4_ = DAT_00104748;
      auVar18._12_4_ = DAT_0010474c;
      local_c0 = vpaddd_avx(auVar76,auVar18);
      auVar95 = vpshufb_avx(param_2[3],_DAT_00104940);
      auVar19._4_4_ = DAT_00104764;
      auVar19._0_4_ = DAT_00104760;
      auVar19._8_4_ = DAT_00104768;
      auVar19._12_4_ = DAT_0010476c;
      local_b0 = vpaddd_avx(auVar70,auVar19);
      auVar20._4_4_ = DAT_00104784;
      auVar20._0_4_ = DAT_00104780;
      auVar20._8_4_ = DAT_00104788;
      auVar20._12_4_ = DAT_0010478c;
      local_a0 = vpaddd_avx(auVar75,auVar20);
      auVar21._4_4_ = DAT_001047a4;
      auVar21._0_4_ = DAT_001047a0;
      auVar21._8_4_ = DAT_001047a8;
      auVar21._12_4_ = DAT_001047ac;
      local_90 = vpaddd_avx(auVar95,auVar21);
      uVar44 = uVar30 ^ uVar27;
      pauVar36 = (undefined1 (*) [16])&K256;
      do {
        auVar144 = vpalignr_avx(auVar70,auVar76,4);
        auVar91 = vpalignr_avx(auVar95,auVar75,4);
        uVar49 = (uVar48 >> 0xe | uVar48 << 0x12) ^ uVar48;
        auVar109 = vpsrld_avx(auVar144,7);
        uVar29 = (uVar25 >> 9 | uVar25 << 0x17) ^ uVar25;
        auVar76 = vpaddd_avx(auVar76,auVar91);
        uVar49 = (uVar49 >> 5 | uVar49 << 0x1b) ^ uVar48;
        auVar143 = vpsrld_avx(auVar144,3);
        auVar91 = vpslld_avx(auVar144,0xe);
        uVar29 = (uVar29 >> 0xb | uVar29 << 0x15) ^ uVar25;
        iVar43 = uVar45 + local_c0._0_4_ + ((uVar47 ^ uVar46) & uVar48 ^ uVar46) +
                 (uVar49 >> 6 | uVar49 << 0x1a);
        auVar144 = vpshufd_avx(auVar95,0xfa);
        uVar28 = uVar28 + iVar43;
        auVar110 = vpsrld_avx(auVar109,0xb);
        uVar45 = (uVar29 >> 2 | uVar29 << 0x1e) + iVar43 + (uVar44 & (uVar25 ^ uVar30) ^ uVar30);
        auVar92 = vpslld_avx(auVar91,0xb);
        uVar44 = (uVar28 >> 0xe | uVar28 * 0x40000) ^ uVar28;
        uVar49 = (uVar45 >> 9 | uVar45 * 0x800000) ^ uVar45;
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar28;
        auVar111 = vpsrld_avx(auVar144,10);
        auVar144 = vpsrlq_avx(auVar144,0x11);
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar45;
        auVar76 = vpaddd_avx(auVar76,auVar143 ^ auVar109 ^ auVar91 ^ auVar110 ^ auVar92);
        iVar43 = uVar46 + local_c0._4_4_ + ((uVar48 ^ uVar47) & uVar28 ^ uVar47) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        uVar27 = uVar27 + iVar43;
        auVar91 = vpsrlq_avx(auVar144,2);
        uVar46 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar25 ^ uVar30) & (uVar45 ^ uVar25) ^ uVar25);
        uVar44 = (uVar27 >> 0xe | uVar27 * 0x40000) ^ uVar27;
        auVar144 = vpshufb_avx(auVar111 ^ auVar144 ^ auVar91,auVar66);
        uVar49 = (uVar46 >> 9 | uVar46 * 0x800000) ^ uVar46;
        auVar76 = vpaddd_avx(auVar76,auVar144);
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar27;
        auVar144 = vpshufd_avx(auVar76,0x50);
        auVar91 = vpsrld_avx(auVar144,10);
        auVar144 = vpsrlq_avx(auVar144,0x11);
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar46;
        iVar43 = uVar47 + local_c0._8_4_ + ((uVar28 ^ uVar48) & uVar27 ^ uVar48) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        uVar30 = uVar30 + iVar43;
        auVar92 = vpsrlq_avx(auVar144,2);
        uVar47 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar45 ^ uVar25) & (uVar46 ^ uVar45) ^ uVar45);
        auVar144 = vpshufb_avx(auVar91 ^ auVar144 ^ auVar92,auVar71);
        uVar44 = (uVar30 >> 0xe | uVar30 * 0x40000) ^ uVar30;
        auVar76 = vpaddd_avx(auVar76,auVar144);
        uVar49 = (uVar47 >> 9 | uVar47 * 0x800000) ^ uVar47;
        auVar144 = vpaddd_avx(auVar76,pauVar36[8]);
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar30;
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar47;
        iVar43 = uVar48 + local_c0._12_4_ + ((uVar27 ^ uVar28) & uVar30 ^ uVar28) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        uVar25 = uVar25 + iVar43;
        uVar48 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar46 ^ uVar45) & (uVar47 ^ uVar46) ^ uVar46);
        auVar91 = vpalignr_avx(auVar75,auVar70,4);
        auVar92 = vpalignr_avx(auVar76,auVar95,4);
        uVar44 = (uVar25 >> 0xe | uVar25 * 0x40000) ^ uVar25;
        auVar110 = vpsrld_avx(auVar91,7);
        uVar49 = (uVar48 >> 9 | uVar48 * 0x800000) ^ uVar48;
        auVar70 = vpaddd_avx(auVar70,auVar92);
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar25;
        auVar145 = vpsrld_avx(auVar91,3);
        auVar92 = vpslld_avx(auVar91,0xe);
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar48;
        iVar43 = uVar28 + local_b0._0_4_ + ((uVar30 ^ uVar27) & uVar25 ^ uVar27) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        auVar91 = vpshufd_avx(auVar76,0xfa);
        uVar45 = uVar45 + iVar43;
        auVar111 = vpsrld_avx(auVar110,0xb);
        uVar28 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar47 ^ uVar46) & (uVar48 ^ uVar47) ^ uVar47);
        auVar109 = vpslld_avx(auVar92,0xb);
        uVar44 = (uVar45 >> 0xe | uVar45 * 0x40000) ^ uVar45;
        uVar49 = (uVar28 >> 9 | uVar28 * 0x800000) ^ uVar28;
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar45;
        auVar143 = vpsrld_avx(auVar91,10);
        auVar91 = vpsrlq_avx(auVar91,0x11);
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar28;
        auVar70 = vpaddd_avx(auVar70,auVar145 ^ auVar110 ^ auVar92 ^ auVar111 ^ auVar109);
        iVar43 = uVar27 + local_b0._4_4_ + ((uVar25 ^ uVar30) & uVar45 ^ uVar30) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        uVar46 = uVar46 + iVar43;
        auVar92 = vpsrlq_avx(auVar91,2);
        uVar27 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar48 ^ uVar47) & (uVar28 ^ uVar48) ^ uVar48);
        uVar44 = (uVar46 >> 0xe | uVar46 * 0x40000) ^ uVar46;
        auVar91 = vpshufb_avx(auVar143 ^ auVar91 ^ auVar92,auVar66);
        uVar49 = (uVar27 >> 9 | uVar27 * 0x800000) ^ uVar27;
        auVar70 = vpaddd_avx(auVar70,auVar91);
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar46;
        auVar91 = vpshufd_avx(auVar70,0x50);
        auVar92 = vpsrld_avx(auVar91,10);
        auVar91 = vpsrlq_avx(auVar91,0x11);
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar27;
        iVar43 = uVar30 + local_b0._8_4_ + ((uVar45 ^ uVar25) & uVar46 ^ uVar25) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        uVar47 = uVar47 + iVar43;
        auVar109 = vpsrlq_avx(auVar91,2);
        uVar30 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar28 ^ uVar48) & (uVar27 ^ uVar28) ^ uVar28);
        auVar91 = vpshufb_avx(auVar92 ^ auVar91 ^ auVar109,auVar71);
        uVar44 = (uVar47 >> 0xe | uVar47 * 0x40000) ^ uVar47;
        auVar70 = vpaddd_avx(auVar70,auVar91);
        uVar49 = (uVar30 >> 9 | uVar30 * 0x800000) ^ uVar30;
        auVar91 = vpaddd_avx(auVar70,pauVar36[10]);
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar47;
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar30;
        iVar43 = uVar25 + local_b0._12_4_ + ((uVar46 ^ uVar45) & uVar47 ^ uVar45) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        uVar48 = uVar48 + iVar43;
        uVar25 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar27 ^ uVar28) & (uVar30 ^ uVar27) ^ uVar27);
        auVar92 = vpalignr_avx(auVar95,auVar75,4);
        auVar109 = vpalignr_avx(auVar70,auVar76,4);
        uVar44 = (uVar48 >> 0xe | uVar48 * 0x40000) ^ uVar48;
        auVar111 = vpsrld_avx(auVar92,7);
        uVar49 = (uVar25 >> 9 | uVar25 * 0x800000) ^ uVar25;
        auVar75 = vpaddd_avx(auVar75,auVar109);
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar48;
        auVar146 = vpsrld_avx(auVar92,3);
        auVar109 = vpslld_avx(auVar92,0xe);
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar25;
        iVar43 = uVar45 + local_a0._0_4_ + ((uVar47 ^ uVar46) & uVar48 ^ uVar46) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        auVar92 = vpshufd_avx(auVar70,0xfa);
        uVar28 = uVar28 + iVar43;
        auVar143 = vpsrld_avx(auVar111,0xb);
        uVar45 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar30 ^ uVar27) & (uVar25 ^ uVar30) ^ uVar30);
        auVar110 = vpslld_avx(auVar109,0xb);
        uVar44 = (uVar28 >> 0xe | uVar28 * 0x40000) ^ uVar28;
        uVar49 = (uVar45 >> 9 | uVar45 * 0x800000) ^ uVar45;
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar28;
        auVar145 = vpsrld_avx(auVar92,10);
        auVar92 = vpsrlq_avx(auVar92,0x11);
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar45;
        auVar75 = vpaddd_avx(auVar75,auVar146 ^ auVar111 ^ auVar109 ^ auVar143 ^ auVar110);
        iVar43 = uVar46 + local_a0._4_4_ + ((uVar48 ^ uVar47) & uVar28 ^ uVar47) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        uVar27 = uVar27 + iVar43;
        auVar109 = vpsrlq_avx(auVar92,2);
        uVar46 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar25 ^ uVar30) & (uVar45 ^ uVar25) ^ uVar25);
        uVar44 = (uVar27 >> 0xe | uVar27 * 0x40000) ^ uVar27;
        auVar92 = vpshufb_avx(auVar145 ^ auVar92 ^ auVar109,auVar66);
        uVar49 = (uVar46 >> 9 | uVar46 * 0x800000) ^ uVar46;
        auVar75 = vpaddd_avx(auVar75,auVar92);
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar27;
        auVar92 = vpshufd_avx(auVar75,0x50);
        auVar109 = vpsrld_avx(auVar92,10);
        auVar92 = vpsrlq_avx(auVar92,0x11);
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar46;
        iVar43 = uVar47 + local_a0._8_4_ + ((uVar28 ^ uVar48) & uVar27 ^ uVar48) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        uVar30 = uVar30 + iVar43;
        auVar110 = vpsrlq_avx(auVar92,2);
        uVar47 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar45 ^ uVar25) & (uVar46 ^ uVar45) ^ uVar45);
        auVar92 = vpshufb_avx(auVar109 ^ auVar92 ^ auVar110,auVar71);
        uVar44 = (uVar30 >> 0xe | uVar30 * 0x40000) ^ uVar30;
        auVar75 = vpaddd_avx(auVar75,auVar92);
        uVar49 = (uVar47 >> 9 | uVar47 * 0x800000) ^ uVar47;
        auVar92 = vpaddd_avx(auVar75,pauVar36[0xc]);
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar30;
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar47;
        iVar43 = uVar48 + local_a0._12_4_ + ((uVar27 ^ uVar28) & uVar30 ^ uVar28) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        uVar25 = uVar25 + iVar43;
        uVar48 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar46 ^ uVar45) & (uVar47 ^ uVar46) ^ uVar46);
        auVar109 = vpalignr_avx(auVar76,auVar95,4);
        auVar110 = vpalignr_avx(auVar75,auVar70,4);
        uVar44 = (uVar25 >> 0xe | uVar25 * 0x40000) ^ uVar25;
        auVar143 = vpsrld_avx(auVar109,7);
        uVar49 = (uVar48 >> 9 | uVar48 * 0x800000) ^ uVar48;
        auVar95 = vpaddd_avx(auVar95,auVar110);
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar25;
        auVar147 = vpsrld_avx(auVar109,3);
        auVar110 = vpslld_avx(auVar109,0xe);
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar48;
        iVar43 = uVar28 + local_90._0_4_ + ((uVar30 ^ uVar27) & uVar25 ^ uVar27) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        auVar109 = vpshufd_avx(auVar75,0xfa);
        uVar45 = uVar45 + iVar43;
        auVar145 = vpsrld_avx(auVar143,0xb);
        uVar28 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar47 ^ uVar46) & (uVar48 ^ uVar47) ^ uVar47);
        auVar111 = vpslld_avx(auVar110,0xb);
        uVar44 = (uVar45 >> 0xe | uVar45 * 0x40000) ^ uVar45;
        uVar49 = (uVar28 >> 9 | uVar28 * 0x800000) ^ uVar28;
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar45;
        auVar146 = vpsrld_avx(auVar109,10);
        auVar109 = vpsrlq_avx(auVar109,0x11);
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar28;
        auVar95 = vpaddd_avx(auVar95,auVar147 ^ auVar143 ^ auVar110 ^ auVar145 ^ auVar111);
        iVar43 = uVar27 + local_90._4_4_ + ((uVar25 ^ uVar30) & uVar45 ^ uVar30) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        uVar46 = uVar46 + iVar43;
        auVar110 = vpsrlq_avx(auVar109,2);
        uVar27 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar48 ^ uVar47) & (uVar28 ^ uVar48) ^ uVar48);
        uVar44 = (uVar46 >> 0xe | uVar46 * 0x40000) ^ uVar46;
        auVar109 = vpshufb_avx(auVar146 ^ auVar109 ^ auVar110,auVar66);
        uVar49 = (uVar27 >> 9 | uVar27 * 0x800000) ^ uVar27;
        auVar95 = vpaddd_avx(auVar95,auVar109);
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar46;
        auVar109 = vpshufd_avx(auVar95,0x50);
        auVar110 = vpsrld_avx(auVar109,10);
        auVar109 = vpsrlq_avx(auVar109,0x11);
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar27;
        iVar43 = uVar30 + local_90._8_4_ + ((uVar45 ^ uVar25) & uVar46 ^ uVar25) +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        uVar47 = uVar47 + iVar43;
        auVar111 = vpsrlq_avx(auVar109,2);
        uVar30 = (uVar49 >> 2 | uVar49 << 0x1e) +
                 iVar43 + ((uVar28 ^ uVar48) & (uVar27 ^ uVar28) ^ uVar28);
        auVar109 = vpshufb_avx(auVar110 ^ auVar109 ^ auVar111,auVar71);
        uVar44 = (uVar47 >> 0xe | uVar47 * 0x40000) ^ uVar47;
        auVar95 = vpaddd_avx(auVar95,auVar109);
        uVar29 = (uVar30 >> 9 | uVar30 * 0x800000) ^ uVar30;
        auVar109 = vpaddd_avx(auVar95,pauVar36[0xe]);
        uVar49 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar47;
        uVar44 = uVar30 ^ uVar27;
        uVar29 = (uVar29 >> 0xb | uVar29 << 0x15) ^ uVar30;
        iVar43 = uVar25 + local_90._12_4_ + ((uVar46 ^ uVar45) & uVar47 ^ uVar45) +
                 (uVar49 >> 6 | uVar49 << 0x1a);
        uVar48 = uVar48 + iVar43;
        uVar25 = (uVar29 >> 2 | uVar29 << 0x1e) + iVar43 + ((uVar27 ^ uVar28) & uVar44 ^ uVar27);
        pauVar24 = pauVar36 + 0x10;
        pauVar36 = pauVar36 + 8;
        local_c0 = auVar144;
        local_b0 = auVar91;
        local_a0 = auVar92;
        local_90 = auVar109;
      } while (*(char *)((long)*pauVar24 + 3) != '\0');
      uVar49 = (uVar48 >> 0xe | uVar48 * 0x40000) ^ uVar48;
      uVar29 = (uVar25 >> 9 | uVar25 * 0x800000) ^ uVar25;
      uVar49 = (uVar49 >> 5 | uVar49 << 0x1b) ^ uVar48;
      local_c0._0_4_ = auVar144._0_4_;
      uVar29 = (uVar29 >> 0xb | uVar29 << 0x15) ^ uVar25;
      iVar43 = uVar45 + local_c0._0_4_ + ((uVar47 ^ uVar46) & uVar48 ^ uVar46) +
               (uVar49 >> 6 | uVar49 << 0x1a);
      uVar28 = uVar28 + iVar43;
      uVar45 = (uVar29 >> 2 | uVar29 << 0x1e) + iVar43 + (uVar44 & (uVar25 ^ uVar30) ^ uVar30);
      uVar44 = (uVar28 >> 0xe | uVar28 * 0x40000) ^ uVar28;
      uVar49 = (uVar45 >> 9 | uVar45 * 0x800000) ^ uVar45;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar28;
      local_c0._4_4_ = auVar144._4_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar45;
      iVar43 = uVar46 + local_c0._4_4_ + ((uVar48 ^ uVar47) & uVar28 ^ uVar47) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar27 = uVar27 + iVar43;
      uVar46 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar25 ^ uVar30) & (uVar45 ^ uVar25) ^ uVar25);
      uVar44 = (uVar27 >> 0xe | uVar27 * 0x40000) ^ uVar27;
      uVar49 = (uVar46 >> 9 | uVar46 * 0x800000) ^ uVar46;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar27;
      local_c0._8_4_ = auVar144._8_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar46;
      iVar43 = uVar47 + local_c0._8_4_ + ((uVar28 ^ uVar48) & uVar27 ^ uVar48) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar30 = uVar30 + iVar43;
      uVar47 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar45 ^ uVar25) & (uVar46 ^ uVar45) ^ uVar45);
      uVar44 = (uVar30 >> 0xe | uVar30 * 0x40000) ^ uVar30;
      uVar49 = (uVar47 >> 9 | uVar47 * 0x800000) ^ uVar47;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar30;
      local_c0._12_4_ = auVar144._12_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar47;
      iVar43 = uVar48 + local_c0._12_4_ + ((uVar27 ^ uVar28) & uVar30 ^ uVar28) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar25 = uVar25 + iVar43;
      uVar48 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar46 ^ uVar45) & (uVar47 ^ uVar46) ^ uVar46);
      uVar44 = (uVar25 >> 0xe | uVar25 * 0x40000) ^ uVar25;
      uVar49 = (uVar48 >> 9 | uVar48 * 0x800000) ^ uVar48;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar25;
      local_b0._0_4_ = auVar91._0_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar48;
      iVar43 = uVar28 + local_b0._0_4_ + ((uVar30 ^ uVar27) & uVar25 ^ uVar27) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar45 = uVar45 + iVar43;
      uVar28 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar47 ^ uVar46) & (uVar48 ^ uVar47) ^ uVar47);
      uVar44 = (uVar45 >> 0xe | uVar45 * 0x40000) ^ uVar45;
      uVar49 = (uVar28 >> 9 | uVar28 * 0x800000) ^ uVar28;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar45;
      local_b0._4_4_ = auVar91._4_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar28;
      iVar43 = uVar27 + local_b0._4_4_ + ((uVar25 ^ uVar30) & uVar45 ^ uVar30) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar46 = uVar46 + iVar43;
      uVar27 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar48 ^ uVar47) & (uVar28 ^ uVar48) ^ uVar48);
      uVar44 = (uVar46 >> 0xe | uVar46 * 0x40000) ^ uVar46;
      uVar49 = (uVar27 >> 9 | uVar27 * 0x800000) ^ uVar27;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar46;
      local_b0._8_4_ = auVar91._8_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar27;
      iVar43 = uVar30 + local_b0._8_4_ + ((uVar45 ^ uVar25) & uVar46 ^ uVar25) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar47 = uVar47 + iVar43;
      uVar30 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar28 ^ uVar48) & (uVar27 ^ uVar28) ^ uVar28);
      uVar44 = (uVar47 >> 0xe | uVar47 * 0x40000) ^ uVar47;
      uVar49 = (uVar30 >> 9 | uVar30 * 0x800000) ^ uVar30;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar47;
      local_b0._12_4_ = auVar91._12_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar30;
      iVar43 = uVar25 + local_b0._12_4_ + ((uVar46 ^ uVar45) & uVar47 ^ uVar45) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar48 = uVar48 + iVar43;
      uVar25 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar27 ^ uVar28) & (uVar30 ^ uVar27) ^ uVar27);
      uVar44 = (uVar48 >> 0xe | uVar48 * 0x40000) ^ uVar48;
      uVar49 = (uVar25 >> 9 | uVar25 * 0x800000) ^ uVar25;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar48;
      local_a0._0_4_ = auVar92._0_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar25;
      iVar43 = uVar45 + local_a0._0_4_ + ((uVar47 ^ uVar46) & uVar48 ^ uVar46) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar28 = uVar28 + iVar43;
      uVar45 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar30 ^ uVar27) & (uVar25 ^ uVar30) ^ uVar30);
      uVar44 = (uVar28 >> 0xe | uVar28 * 0x40000) ^ uVar28;
      uVar49 = (uVar45 >> 9 | uVar45 * 0x800000) ^ uVar45;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar28;
      local_a0._4_4_ = auVar92._4_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar45;
      iVar43 = uVar46 + local_a0._4_4_ + ((uVar48 ^ uVar47) & uVar28 ^ uVar47) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar27 = uVar27 + iVar43;
      uVar46 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar25 ^ uVar30) & (uVar45 ^ uVar25) ^ uVar25);
      uVar44 = (uVar27 >> 0xe | uVar27 * 0x40000) ^ uVar27;
      uVar49 = (uVar46 >> 9 | uVar46 * 0x800000) ^ uVar46;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar27;
      local_a0._8_4_ = auVar92._8_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar46;
      iVar43 = uVar47 + local_a0._8_4_ + ((uVar28 ^ uVar48) & uVar27 ^ uVar48) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar30 = uVar30 + iVar43;
      uVar47 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar45 ^ uVar25) & (uVar46 ^ uVar45) ^ uVar45);
      uVar44 = (uVar30 >> 0xe | uVar30 * 0x40000) ^ uVar30;
      uVar49 = (uVar47 >> 9 | uVar47 * 0x800000) ^ uVar47;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar30;
      local_a0._12_4_ = auVar92._12_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar47;
      iVar43 = uVar48 + local_a0._12_4_ + ((uVar27 ^ uVar28) & uVar30 ^ uVar28) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar25 = uVar25 + iVar43;
      uVar44 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar46 ^ uVar45) & (uVar47 ^ uVar46) ^ uVar46);
      uVar48 = (uVar25 >> 0xe | uVar25 * 0x40000) ^ uVar25;
      uVar49 = (uVar44 >> 9 | uVar44 * 0x800000) ^ uVar44;
      uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar25;
      local_90._0_4_ = auVar109._0_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar44;
      iVar43 = uVar28 + local_90._0_4_ + ((uVar30 ^ uVar27) & uVar25 ^ uVar27) +
               (uVar48 >> 6 | uVar48 << 0x1a);
      uVar45 = uVar45 + iVar43;
      uVar28 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar47 ^ uVar46) & (uVar44 ^ uVar47) ^ uVar47);
      uVar48 = (uVar45 >> 0xe | uVar45 * 0x40000) ^ uVar45;
      uVar49 = (uVar28 >> 9 | uVar28 * 0x800000) ^ uVar28;
      uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar45;
      local_90._4_4_ = auVar109._4_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar28;
      iVar43 = uVar27 + local_90._4_4_ + ((uVar25 ^ uVar30) & uVar45 ^ uVar30) +
               (uVar48 >> 6 | uVar48 << 0x1a);
      uVar46 = uVar46 + iVar43;
      uVar27 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar44 ^ uVar47) & (uVar28 ^ uVar44) ^ uVar44);
      uVar48 = (uVar46 >> 0xe | uVar46 * 0x40000) ^ uVar46;
      uVar49 = (uVar27 >> 9 | uVar27 * 0x800000) ^ uVar27;
      uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar46;
      local_90._8_4_ = auVar109._8_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar27;
      iVar43 = uVar30 + local_90._8_4_ + ((uVar45 ^ uVar25) & uVar46 ^ uVar25) +
               (uVar48 >> 6 | uVar48 << 0x1a);
      uVar47 = uVar47 + iVar43;
      uVar30 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar28 ^ uVar44) & (uVar27 ^ uVar28) ^ uVar28);
      uVar48 = (uVar47 >> 0xe | uVar47 * 0x40000) ^ uVar47;
      uVar49 = (uVar30 >> 9 | uVar30 * 0x800000) ^ uVar30;
      uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar47;
      local_90._12_4_ = auVar109._12_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar30;
      iVar43 = uVar25 + local_90._12_4_ + ((uVar46 ^ uVar45) & uVar47 ^ uVar45) +
               (uVar48 >> 6 | uVar48 << 0x1a);
      uVar25 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar27 ^ uVar28) & (uVar30 ^ uVar27) ^ uVar27) + *param_1;
      param_2 = param_2 + 4;
      uVar30 = uVar30 + param_1[1];
      uVar27 = uVar27 + param_1[2];
      uVar28 = uVar28 + param_1[3];
      uVar48 = uVar44 + iVar43 + param_1[4];
      uVar47 = uVar47 + param_1[5];
      uVar46 = uVar46 + param_1[6];
      uVar45 = uVar45 + param_1[7];
      *param_1 = uVar25;
      param_1[1] = uVar30;
      param_1[2] = uVar27;
      param_1[3] = uVar28;
      param_1[4] = uVar48;
      param_1[5] = uVar47;
      param_1[6] = uVar46;
      param_1[7] = uVar45;
    } while (param_2 < pauVar4);
    return;
  }
  if ((_DAT_00105004 & 0x200) == 0) {
    pauVar4 = param_2 + param_3 * 4;
    uVar25 = *param_1;
    uVar30 = param_1[1];
    uVar27 = param_1[2];
    uVar28 = param_1[3];
    uVar48 = param_1[4];
    uVar47 = param_1[5];
    uVar46 = param_1[6];
    uVar45 = param_1[7];
    do {
      uVar44 = *(uint *)*param_2;
      local_c0._0_4_ =
           uVar44 >> 0x18 | (uVar44 & 0xff0000) >> 8 | (uVar44 & 0xff00) << 8 | uVar44 << 0x18;
      uVar44 = (uVar48 >> 0xe | uVar48 << 0x12) ^ uVar48;
      uVar49 = (uVar25 >> 9 | uVar25 << 0x17) ^ uVar25;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar48;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar25;
      iVar43 = local_c0._0_4_ + uVar45 + ((uVar47 ^ uVar46) & uVar48 ^ uVar46) + K256 +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar28 = uVar28 + iVar43;
      uVar42 = (uVar30 ^ (uVar30 ^ uVar27) & (uVar25 ^ uVar30)) + iVar43 +
               (uVar49 >> 2 | uVar49 << 0x1e);
      uVar45 = *(uint *)(*param_2 + 4);
      local_c0._4_4_ =
           uVar45 >> 0x18 | (uVar45 & 0xff0000) >> 8 | (uVar45 & 0xff00) << 8 | uVar45 << 0x18;
      uVar45 = (uVar28 >> 0xe | uVar28 * 0x40000) ^ uVar28;
      uVar44 = (uVar42 >> 9 | uVar42 * 0x800000) ^ uVar42;
      uVar45 = (uVar45 >> 5 | uVar45 << 0x1b) ^ uVar28;
      uVar44 = (uVar44 >> 0xb | uVar44 << 0x15) ^ uVar42;
      iVar43 = local_c0._4_4_ + uVar46 + ((uVar48 ^ uVar47) & uVar28 ^ uVar47) + DAT_00104744 +
               (uVar45 >> 6 | uVar45 << 0x1a);
      uVar27 = uVar27 + iVar43;
      uVar41 = (uVar25 ^ (uVar25 ^ uVar30) & (uVar42 ^ uVar25)) + iVar43 +
               (uVar44 >> 2 | uVar44 << 0x1e);
      uVar46 = *(uint *)(*param_2 + 8);
      local_c0._8_4_ =
           uVar46 >> 0x18 | (uVar46 & 0xff0000) >> 8 | (uVar46 & 0xff00) << 8 | uVar46 << 0x18;
      uVar46 = (uVar27 >> 0xe | uVar27 * 0x40000) ^ uVar27;
      uVar45 = (uVar41 >> 9 | uVar41 * 0x800000) ^ uVar41;
      uVar46 = (uVar46 >> 5 | uVar46 << 0x1b) ^ uVar27;
      uVar45 = (uVar45 >> 0xb | uVar45 << 0x15) ^ uVar41;
      iVar43 = local_c0._8_4_ + uVar47 + ((uVar28 ^ uVar48) & uVar27 ^ uVar48) + DAT_00104748 +
               (uVar46 >> 6 | uVar46 << 0x1a);
      uVar30 = uVar30 + iVar43;
      uVar40 = (uVar42 ^ (uVar42 ^ uVar25) & (uVar41 ^ uVar42)) + iVar43 +
               (uVar45 >> 2 | uVar45 << 0x1e);
      uVar47 = *(uint *)(*param_2 + 0xc);
      local_c0._12_4_ =
           uVar47 >> 0x18 | (uVar47 & 0xff0000) >> 8 | (uVar47 & 0xff00) << 8 | uVar47 << 0x18;
      uVar47 = (uVar30 >> 0xe | uVar30 * 0x40000) ^ uVar30;
      uVar46 = (uVar40 >> 9 | uVar40 * 0x800000) ^ uVar40;
      uVar47 = (uVar47 >> 5 | uVar47 << 0x1b) ^ uVar30;
      uVar46 = (uVar46 >> 0xb | uVar46 << 0x15) ^ uVar40;
      iVar43 = local_c0._12_4_ + uVar48 + ((uVar27 ^ uVar28) & uVar30 ^ uVar28) + DAT_0010474c +
               (uVar47 >> 6 | uVar47 << 0x1a);
      uVar25 = uVar25 + iVar43;
      uVar39 = (uVar41 ^ (uVar41 ^ uVar42) & (uVar40 ^ uVar41)) + iVar43 +
               (uVar46 >> 2 | uVar46 << 0x1e);
      uVar48 = *(uint *)param_2[1];
      local_b0._0_4_ =
           uVar48 >> 0x18 | (uVar48 & 0xff0000) >> 8 | (uVar48 & 0xff00) << 8 | uVar48 << 0x18;
      uVar48 = (uVar25 >> 0xe | uVar25 * 0x40000) ^ uVar25;
      uVar47 = (uVar39 >> 9 | uVar39 * 0x800000) ^ uVar39;
      uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar25;
      uVar47 = (uVar47 >> 0xb | uVar47 << 0x15) ^ uVar39;
      iVar43 = local_b0._0_4_ + uVar28 + ((uVar30 ^ uVar27) & uVar25 ^ uVar27) + DAT_00104760 +
               (uVar48 >> 6 | uVar48 << 0x1a);
      uVar42 = uVar42 + iVar43;
      uVar29 = (uVar40 ^ (uVar40 ^ uVar41) & (uVar39 ^ uVar40)) + iVar43 +
               (uVar47 >> 2 | uVar47 << 0x1e);
      uVar28 = *(uint *)(param_2[1] + 4);
      local_b0._4_4_ =
           uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18;
      uVar28 = (uVar42 >> 0xe | uVar42 * 0x40000) ^ uVar42;
      uVar48 = (uVar29 >> 9 | uVar29 * 0x800000) ^ uVar29;
      uVar28 = (uVar28 >> 5 | uVar28 << 0x1b) ^ uVar42;
      uVar48 = (uVar48 >> 0xb | uVar48 << 0x15) ^ uVar29;
      iVar43 = local_b0._4_4_ + uVar27 + ((uVar25 ^ uVar30) & uVar42 ^ uVar30) + DAT_00104764 +
               (uVar28 >> 6 | uVar28 << 0x1a);
      uVar41 = uVar41 + iVar43;
      uVar49 = (uVar39 ^ (uVar39 ^ uVar40) & (uVar29 ^ uVar39)) + iVar43 +
               (uVar48 >> 2 | uVar48 << 0x1e);
      uVar27 = *(uint *)(param_2[1] + 8);
      local_b0._8_4_ =
           uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 | uVar27 << 0x18;
      uVar27 = (uVar41 >> 0xe | uVar41 * 0x40000) ^ uVar41;
      uVar28 = (uVar49 >> 9 | uVar49 * 0x800000) ^ uVar49;
      uVar27 = (uVar27 >> 5 | uVar27 << 0x1b) ^ uVar41;
      uVar28 = (uVar28 >> 0xb | uVar28 << 0x15) ^ uVar49;
      iVar43 = local_b0._8_4_ + uVar30 + ((uVar42 ^ uVar25) & uVar41 ^ uVar25) + DAT_00104768 +
               (uVar27 >> 6 | uVar27 << 0x1a);
      uVar40 = uVar40 + iVar43;
      uVar31 = (uVar29 ^ (uVar29 ^ uVar39) & (uVar49 ^ uVar29)) + iVar43 +
               (uVar28 >> 2 | uVar28 << 0x1e);
      uVar30 = *(uint *)(param_2[1] + 0xc);
      local_b0._12_4_ =
           uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 | uVar30 << 0x18;
      uVar30 = (uVar40 >> 0xe | uVar40 * 0x40000) ^ uVar40;
      uVar27 = (uVar31 >> 9 | uVar31 * 0x800000) ^ uVar31;
      uVar30 = (uVar30 >> 5 | uVar30 << 0x1b) ^ uVar40;
      uVar27 = (uVar27 >> 0xb | uVar27 << 0x15) ^ uVar31;
      iVar43 = local_b0._12_4_ + uVar25 + ((uVar41 ^ uVar42) & uVar40 ^ uVar42) + DAT_0010476c +
               (uVar30 >> 6 | uVar30 << 0x1a);
      uVar39 = uVar39 + iVar43;
      uVar44 = (uVar49 ^ (uVar49 ^ uVar29) & (uVar31 ^ uVar49)) + iVar43 +
               (uVar27 >> 2 | uVar27 << 0x1e);
      uVar25 = *(uint *)param_2[2];
      local_a0._0_4_ =
           uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18;
      uVar25 = (uVar39 >> 0xe | uVar39 * 0x40000) ^ uVar39;
      uVar30 = (uVar44 >> 9 | uVar44 * 0x800000) ^ uVar44;
      uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar39;
      uVar30 = (uVar30 >> 0xb | uVar30 << 0x15) ^ uVar44;
      iVar43 = local_a0._0_4_ + uVar42 + ((uVar40 ^ uVar41) & uVar39 ^ uVar41) + DAT_00104780 +
               (uVar25 >> 6 | uVar25 << 0x1a);
      uVar29 = uVar29 + iVar43;
      uVar45 = (uVar31 ^ (uVar31 ^ uVar49) & (uVar44 ^ uVar31)) + iVar43 +
               (uVar30 >> 2 | uVar30 << 0x1e);
      uVar25 = *(uint *)(param_2[2] + 4);
      local_a0._4_4_ =
           uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18;
      uVar25 = (uVar29 >> 0xe | uVar29 * 0x40000) ^ uVar29;
      uVar30 = (uVar45 >> 9 | uVar45 * 0x800000) ^ uVar45;
      uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar29;
      uVar30 = (uVar30 >> 0xb | uVar30 << 0x15) ^ uVar45;
      iVar43 = local_a0._4_4_ + uVar41 + ((uVar39 ^ uVar40) & uVar29 ^ uVar40) + DAT_00104784 +
               (uVar25 >> 6 | uVar25 << 0x1a);
      uVar49 = uVar49 + iVar43;
      uVar46 = (uVar44 ^ (uVar44 ^ uVar31) & (uVar45 ^ uVar44)) + iVar43 +
               (uVar30 >> 2 | uVar30 << 0x1e);
      uVar25 = *(uint *)(param_2[2] + 8);
      local_a0._8_4_ =
           uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18;
      uVar25 = (uVar49 >> 0xe | uVar49 * 0x40000) ^ uVar49;
      uVar30 = (uVar46 >> 9 | uVar46 * 0x800000) ^ uVar46;
      uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar49;
      uVar30 = (uVar30 >> 0xb | uVar30 << 0x15) ^ uVar46;
      iVar43 = local_a0._8_4_ + uVar40 + ((uVar29 ^ uVar39) & uVar49 ^ uVar39) + DAT_00104788 +
               (uVar25 >> 6 | uVar25 << 0x1a);
      uVar31 = uVar31 + iVar43;
      uVar47 = (uVar45 ^ (uVar45 ^ uVar44) & (uVar46 ^ uVar45)) + iVar43 +
               (uVar30 >> 2 | uVar30 << 0x1e);
      uVar25 = *(uint *)(param_2[2] + 0xc);
      local_a0._12_4_ =
           uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18;
      uVar25 = (uVar31 >> 0xe | uVar31 * 0x40000) ^ uVar31;
      uVar30 = (uVar47 >> 9 | uVar47 * 0x800000) ^ uVar47;
      uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar31;
      uVar30 = (uVar30 >> 0xb | uVar30 << 0x15) ^ uVar47;
      iVar43 = local_a0._12_4_ + uVar39 + ((uVar49 ^ uVar29) & uVar31 ^ uVar29) + DAT_0010478c +
               (uVar25 >> 6 | uVar25 << 0x1a);
      uVar44 = uVar44 + iVar43;
      uVar48 = (uVar46 ^ (uVar46 ^ uVar45) & (uVar47 ^ uVar46)) + iVar43 +
               (uVar30 >> 2 | uVar30 << 0x1e);
      uVar25 = *(uint *)param_2[3];
      local_90._0_4_ =
           uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18;
      uVar25 = (uVar44 >> 0xe | uVar44 * 0x40000) ^ uVar44;
      uVar30 = (uVar48 >> 9 | uVar48 * 0x800000) ^ uVar48;
      uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar44;
      uVar30 = (uVar30 >> 0xb | uVar30 << 0x15) ^ uVar48;
      iVar43 = local_90._0_4_ + uVar29 + ((uVar31 ^ uVar49) & uVar44 ^ uVar49) + DAT_001047a0 +
               (uVar25 >> 6 | uVar25 << 0x1a);
      uVar45 = uVar45 + iVar43;
      uVar28 = (uVar47 ^ (uVar47 ^ uVar46) & (uVar48 ^ uVar47)) + iVar43 +
               (uVar30 >> 2 | uVar30 << 0x1e);
      uVar25 = *(uint *)(param_2[3] + 4);
      local_90._4_4_ =
           uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18;
      uVar25 = (uVar45 >> 0xe | uVar45 * 0x40000) ^ uVar45;
      uVar30 = (uVar28 >> 9 | uVar28 * 0x800000) ^ uVar28;
      uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar45;
      uVar30 = (uVar30 >> 0xb | uVar30 << 0x15) ^ uVar28;
      iVar43 = local_90._4_4_ + uVar49 + ((uVar44 ^ uVar31) & uVar45 ^ uVar31) + DAT_001047a4 +
               (uVar25 >> 6 | uVar25 << 0x1a);
      uVar46 = uVar46 + iVar43;
      uVar27 = (uVar48 ^ (uVar48 ^ uVar47) & (uVar28 ^ uVar48)) + iVar43 +
               (uVar30 >> 2 | uVar30 << 0x1e);
      uVar25 = *(uint *)(param_2[3] + 8);
      local_90._8_4_ =
           uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18;
      uVar25 = (uVar46 >> 0xe | uVar46 * 0x40000) ^ uVar46;
      uVar30 = (uVar27 >> 9 | uVar27 * 0x800000) ^ uVar27;
      uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar46;
      uVar30 = (uVar30 >> 0xb | uVar30 << 0x15) ^ uVar27;
      iVar43 = local_90._8_4_ + uVar31 + ((uVar45 ^ uVar44) & uVar46 ^ uVar44) + DAT_001047a8 +
               (uVar25 >> 6 | uVar25 << 0x1a);
      uVar47 = uVar47 + iVar43;
      uVar30 = (uVar28 ^ (uVar28 ^ uVar48) & (uVar27 ^ uVar28)) + iVar43 +
               (uVar30 >> 2 | uVar30 << 0x1e);
      uVar25 = *(uint *)(param_2[3] + 0xc);
      local_90._12_4_ =
           uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18;
      uVar25 = (uVar47 >> 0xe | uVar47 * 0x40000) ^ uVar47;
      uVar49 = (uVar30 >> 9 | uVar30 * 0x800000) ^ uVar30;
      uVar29 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar47;
      uVar25 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar30;
      uVar49 = uVar30 ^ uVar27;
      uVar25 = uVar25 >> 2 | uVar25 << 0x1e;
      iVar43 = local_90._12_4_ + uVar44 + ((uVar46 ^ uVar45) & uVar47 ^ uVar45) + DAT_001047ac +
               (uVar29 >> 6 | uVar29 << 0x1a);
      uVar48 = uVar48 + iVar43;
      iVar43 = (uVar27 ^ (uVar27 ^ uVar28) & uVar49) + iVar43;
      piVar35 = &DAT_001047c0;
      do {
        auVar71 = local_b0;
        auVar66 = local_c0;
        uVar25 = iVar43 + uVar25;
        uVar44 = ((uint)local_c0._4_4_ >> 0xb | local_c0._4_4_ << 0x15) ^ local_c0._4_4_;
        uVar29 = ((uint)local_90._8_4_ >> 2 | local_90._8_4_ << 0x1e) ^ local_90._8_4_;
        uVar39 = ((uint)local_c0._4_4_ >> 3 ^ (uVar44 >> 7 | uVar44 << 0x19)) + local_a0._4_4_ +
                 local_c0._0_4_ + ((uVar29 >> 0x11 | uVar29 << 0xf) ^ (uint)local_90._8_4_ >> 10);
        uVar44 = (uVar48 >> 0xe | uVar48 << 0x12) ^ uVar48;
        uVar29 = (uVar25 >> 9 | uVar25 * 0x800000) ^ uVar25;
        uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar48;
        uVar29 = (uVar29 >> 0xb | uVar29 << 0x15) ^ uVar25;
        iVar43 = uVar39 + uVar45 + ((uVar47 ^ uVar46) & uVar48 ^ uVar46) + *piVar35 +
                 (uVar44 >> 6 | uVar44 << 0x1a);
        uVar28 = uVar28 + iVar43;
        uVar31 = (uVar30 ^ uVar49 & (uVar25 ^ uVar30)) + iVar43 + (uVar29 >> 2 | uVar29 << 0x1e);
        uVar44 = ((uint)local_c0._8_4_ >> 0xb | local_c0._8_4_ << 0x15) ^ local_c0._8_4_;
        uVar45 = ((uint)local_90._12_4_ >> 2 | local_90._12_4_ << 0x1e) ^ local_90._12_4_;
        local_c0._4_4_ =
             ((uint)local_c0._8_4_ >> 3 ^ (uVar44 >> 7 | uVar44 << 0x19)) + local_a0._8_4_ +
             local_c0._4_4_ + ((uVar45 >> 0x11 | uVar45 << 0xf) ^ (uint)local_90._12_4_ >> 10);
        uVar45 = (uVar28 >> 0xe | uVar28 * 0x40000) ^ uVar28;
        local_c0._0_4_ = uVar39;
        uVar44 = (uVar31 >> 9 | uVar31 * 0x800000) ^ uVar31;
        uVar45 = (uVar45 >> 5 | uVar45 << 0x1b) ^ uVar28;
        uVar44 = (uVar44 >> 0xb | uVar44 << 0x15) ^ uVar31;
        iVar43 = local_c0._4_4_ + uVar46 + ((uVar48 ^ uVar47) & uVar28 ^ uVar47) + piVar35[1] +
                 (uVar45 >> 6 | uVar45 << 0x1a);
        uVar27 = uVar27 + iVar43;
        local_c0._12_4_ = auVar66._12_4_;
        uVar46 = (uVar25 ^ (uVar25 ^ uVar30) & (uVar31 ^ uVar25)) + iVar43 +
                 (uVar44 >> 2 | uVar44 << 0x1e);
        uVar45 = ((uint)local_c0._12_4_ >> 0xb | local_c0._12_4_ << 0x15) ^ local_c0._12_4_;
        uVar44 = (uVar39 >> 2 | uVar39 * 0x40000000) ^ uVar39;
        local_c0._8_4_ =
             ((uint)local_c0._12_4_ >> 3 ^ (uVar45 >> 7 | uVar45 << 0x19)) + local_a0._12_4_ +
             local_c0._8_4_ + ((uVar44 >> 0x11 | uVar44 << 0xf) ^ uVar39 >> 10);
        uVar45 = (uVar27 >> 0xe | uVar27 * 0x40000) ^ uVar27;
        uVar44 = (uVar46 >> 9 | uVar46 * 0x800000) ^ uVar46;
        uVar45 = (uVar45 >> 5 | uVar45 << 0x1b) ^ uVar27;
        uVar44 = (uVar44 >> 0xb | uVar44 << 0x15) ^ uVar46;
        iVar43 = local_c0._8_4_ + uVar47 + ((uVar28 ^ uVar48) & uVar27 ^ uVar48) + piVar35[2] +
                 (uVar45 >> 6 | uVar45 << 0x1a);
        uVar30 = uVar30 + iVar43;
        uVar29 = (uVar31 ^ (uVar31 ^ uVar25) & (uVar46 ^ uVar31)) + iVar43 +
                 (uVar44 >> 2 | uVar44 << 0x1e);
        uVar45 = ((uint)local_b0._0_4_ >> 0xb | local_b0._0_4_ << 0x15) ^ local_b0._0_4_;
        uVar47 = ((uint)local_c0._4_4_ >> 2 | local_c0._4_4_ * 0x40000000) ^ local_c0._4_4_;
        local_c0._12_4_ =
             ((uint)local_b0._0_4_ >> 3 ^ (uVar45 >> 7 | uVar45 << 0x19)) + local_90._0_4_ +
             local_c0._12_4_ + ((uVar47 >> 0x11 | uVar47 << 0xf) ^ (uint)local_c0._4_4_ >> 10);
        uVar47 = (uVar30 >> 0xe | uVar30 * 0x40000) ^ uVar30;
        uVar45 = (uVar29 >> 9 | uVar29 * 0x800000) ^ uVar29;
        uVar47 = (uVar47 >> 5 | uVar47 << 0x1b) ^ uVar30;
        uVar45 = (uVar45 >> 0xb | uVar45 << 0x15) ^ uVar29;
        iVar43 = local_c0._12_4_ + uVar48 + ((uVar27 ^ uVar28) & uVar30 ^ uVar28) + piVar35[3] +
                 (uVar47 >> 6 | uVar47 << 0x1a);
        uVar25 = uVar25 + iVar43;
        uVar49 = (uVar46 ^ (uVar46 ^ uVar31) & (uVar29 ^ uVar46)) + iVar43 +
                 (uVar45 >> 2 | uVar45 << 0x1e);
        uVar48 = ((uint)local_b0._4_4_ >> 0xb | local_b0._4_4_ << 0x15) ^ local_b0._4_4_;
        uVar47 = ((uint)local_c0._8_4_ >> 2 | local_c0._8_4_ * 0x40000000) ^ local_c0._8_4_;
        uVar40 = ((uint)local_b0._4_4_ >> 3 ^ (uVar48 >> 7 | uVar48 << 0x19)) + local_90._4_4_ +
                 local_b0._0_4_ + ((uVar47 >> 0x11 | uVar47 << 0xf) ^ (uint)local_c0._8_4_ >> 10);
        uVar48 = (uVar25 >> 0xe | uVar25 * 0x40000) ^ uVar25;
        uVar47 = (uVar49 >> 9 | uVar49 * 0x800000) ^ uVar49;
        uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar25;
        uVar47 = (uVar47 >> 0xb | uVar47 << 0x15) ^ uVar49;
        iVar43 = uVar40 + uVar28 + ((uVar30 ^ uVar27) & uVar25 ^ uVar27) + piVar35[8] +
                 (uVar48 >> 6 | uVar48 << 0x1a);
        uVar31 = uVar31 + iVar43;
        uVar28 = (uVar29 ^ (uVar29 ^ uVar46) & (uVar49 ^ uVar29)) + iVar43 +
                 (uVar47 >> 2 | uVar47 << 0x1e);
        uVar47 = ((uint)local_b0._8_4_ >> 0xb | local_b0._8_4_ << 0x15) ^ local_b0._8_4_;
        uVar48 = ((uint)local_c0._12_4_ >> 2 | local_c0._12_4_ * 0x40000000) ^ local_c0._12_4_;
        local_b0._4_4_ =
             ((uint)local_b0._8_4_ >> 3 ^ (uVar47 >> 7 | uVar47 << 0x19)) + local_90._8_4_ +
             local_b0._4_4_ + ((uVar48 >> 0x11 | uVar48 << 0xf) ^ (uint)local_c0._12_4_ >> 10);
        uVar48 = (uVar31 >> 0xe | uVar31 * 0x40000) ^ uVar31;
        local_b0._0_4_ = uVar40;
        uVar47 = (uVar28 >> 9 | uVar28 * 0x800000) ^ uVar28;
        uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar31;
        uVar47 = (uVar47 >> 0xb | uVar47 << 0x15) ^ uVar28;
        iVar43 = local_b0._4_4_ + uVar27 + ((uVar25 ^ uVar30) & uVar31 ^ uVar30) + piVar35[9] +
                 (uVar48 >> 6 | uVar48 << 0x1a);
        uVar46 = uVar46 + iVar43;
        local_b0._12_4_ = auVar71._12_4_;
        uVar27 = (uVar49 ^ (uVar49 ^ uVar29) & (uVar28 ^ uVar49)) + iVar43 +
                 (uVar47 >> 2 | uVar47 << 0x1e);
        uVar48 = ((uint)local_b0._12_4_ >> 0xb | local_b0._12_4_ << 0x15) ^ local_b0._12_4_;
        uVar47 = (uVar40 >> 2 | uVar40 * 0x40000000) ^ uVar40;
        local_b0._8_4_ =
             ((uint)local_b0._12_4_ >> 3 ^ (uVar48 >> 7 | uVar48 << 0x19)) + local_90._12_4_ +
             local_b0._8_4_ + ((uVar47 >> 0x11 | uVar47 << 0xf) ^ uVar40 >> 10);
        uVar48 = (uVar46 >> 0xe | uVar46 * 0x40000) ^ uVar46;
        uVar47 = (uVar27 >> 9 | uVar27 * 0x800000) ^ uVar27;
        uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar46;
        uVar47 = (uVar47 >> 0xb | uVar47 << 0x15) ^ uVar27;
        iVar43 = local_b0._8_4_ + uVar30 + ((uVar31 ^ uVar25) & uVar46 ^ uVar25) + piVar35[10] +
                 (uVar48 >> 6 | uVar48 << 0x1a);
        uVar29 = uVar29 + iVar43;
        uVar30 = (uVar28 ^ (uVar28 ^ uVar49) & (uVar27 ^ uVar28)) + iVar43 +
                 (uVar47 >> 2 | uVar47 << 0x1e);
        uVar47 = ((uint)local_a0._0_4_ >> 0xb | local_a0._0_4_ << 0x15) ^ local_a0._0_4_;
        uVar48 = ((uint)local_b0._4_4_ >> 2 | local_b0._4_4_ * 0x40000000) ^ local_b0._4_4_;
        local_b0._12_4_ =
             ((uint)local_a0._0_4_ >> 3 ^ (uVar47 >> 7 | uVar47 << 0x19)) + uVar39 + local_b0._12_4_
             + ((uVar48 >> 0x11 | uVar48 << 0xf) ^ (uint)local_b0._4_4_ >> 10);
        uVar48 = (uVar29 >> 0xe | uVar29 * 0x40000) ^ uVar29;
        uVar47 = (uVar30 >> 9 | uVar30 * 0x800000) ^ uVar30;
        uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar29;
        uVar47 = (uVar47 >> 0xb | uVar47 << 0x15) ^ uVar30;
        iVar43 = local_b0._12_4_ + uVar25 + ((uVar46 ^ uVar31) & uVar29 ^ uVar31) + piVar35[0xb] +
                 (uVar48 >> 6 | uVar48 << 0x1a);
        uVar49 = uVar49 + iVar43;
        uVar44 = (uVar27 ^ (uVar27 ^ uVar28) & (uVar30 ^ uVar27)) + iVar43 +
                 (uVar47 >> 2 | uVar47 << 0x1e);
        uVar25 = ((uint)local_a0._4_4_ >> 0xb | local_a0._4_4_ << 0x15) ^ local_a0._4_4_;
        uVar48 = ((uint)local_b0._8_4_ >> 2 | local_b0._8_4_ * 0x40000000) ^ local_b0._8_4_;
        local_a0._0_4_ =
             ((uint)local_a0._4_4_ >> 3 ^ (uVar25 >> 7 | uVar25 << 0x19)) + local_c0._4_4_ +
             local_a0._0_4_ + ((uVar48 >> 0x11 | uVar48 << 0xf) ^ (uint)local_b0._8_4_ >> 10);
        uVar25 = (uVar49 >> 0xe | uVar49 * 0x40000) ^ uVar49;
        uVar48 = (uVar44 >> 9 | uVar44 * 0x800000) ^ uVar44;
        uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar49;
        uVar48 = (uVar48 >> 0xb | uVar48 << 0x15) ^ uVar44;
        iVar43 = local_a0._0_4_ + uVar31 + ((uVar29 ^ uVar46) & uVar49 ^ uVar46) + piVar35[0x10] +
                 (uVar25 >> 6 | uVar25 << 0x1a);
        uVar28 = uVar28 + iVar43;
        uVar45 = (uVar30 ^ (uVar30 ^ uVar27) & (uVar44 ^ uVar30)) + iVar43 +
                 (uVar48 >> 2 | uVar48 << 0x1e);
        uVar48 = ((uint)local_a0._8_4_ >> 0xb | local_a0._8_4_ << 0x15) ^ local_a0._8_4_;
        uVar25 = ((uint)local_b0._12_4_ >> 2 | local_b0._12_4_ * 0x40000000) ^ local_b0._12_4_;
        local_a0._4_4_ =
             ((uint)local_a0._8_4_ >> 3 ^ (uVar48 >> 7 | uVar48 << 0x19)) + local_c0._8_4_ +
             local_a0._4_4_ + ((uVar25 >> 0x11 | uVar25 << 0xf) ^ (uint)local_b0._12_4_ >> 10);
        uVar25 = (uVar28 >> 0xe | uVar28 * 0x40000) ^ uVar28;
        uVar48 = (uVar45 >> 9 | uVar45 * 0x800000) ^ uVar45;
        uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar28;
        uVar48 = (uVar48 >> 0xb | uVar48 << 0x15) ^ uVar45;
        iVar43 = local_a0._4_4_ + uVar46 + ((uVar49 ^ uVar29) & uVar28 ^ uVar29) + piVar35[0x11] +
                 (uVar25 >> 6 | uVar25 << 0x1a);
        uVar27 = uVar27 + iVar43;
        uVar46 = (uVar44 ^ (uVar44 ^ uVar30) & (uVar45 ^ uVar44)) + iVar43 +
                 (uVar48 >> 2 | uVar48 << 0x1e);
        uVar25 = ((uint)local_a0._12_4_ >> 0xb | local_a0._12_4_ << 0x15) ^ local_a0._12_4_;
        uVar48 = ((uint)local_a0._0_4_ >> 2 | local_a0._0_4_ * 0x40000000) ^ local_a0._0_4_;
        local_a0._8_4_ =
             ((uint)local_a0._12_4_ >> 3 ^ (uVar25 >> 7 | uVar25 << 0x19)) + local_c0._12_4_ +
             local_a0._8_4_ + ((uVar48 >> 0x11 | uVar48 << 0xf) ^ (uint)local_a0._0_4_ >> 10);
        uVar25 = (uVar27 >> 0xe | uVar27 * 0x40000) ^ uVar27;
        uVar48 = (uVar46 >> 9 | uVar46 * 0x800000) ^ uVar46;
        uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar27;
        uVar48 = (uVar48 >> 0xb | uVar48 << 0x15) ^ uVar46;
        iVar43 = local_a0._8_4_ + uVar29 + ((uVar28 ^ uVar49) & uVar27 ^ uVar49) + piVar35[0x12] +
                 (uVar25 >> 6 | uVar25 << 0x1a);
        uVar30 = uVar30 + iVar43;
        uVar47 = (uVar45 ^ (uVar45 ^ uVar44) & (uVar46 ^ uVar45)) + iVar43 +
                 (uVar48 >> 2 | uVar48 << 0x1e);
        uVar48 = ((uint)local_90._0_4_ >> 0xb | local_90._0_4_ << 0x15) ^ local_90._0_4_;
        uVar25 = ((uint)local_a0._4_4_ >> 2 | local_a0._4_4_ * 0x40000000) ^ local_a0._4_4_;
        local_a0._12_4_ =
             ((uint)local_90._0_4_ >> 3 ^ (uVar48 >> 7 | uVar48 << 0x19)) + uVar40 + local_a0._12_4_
             + ((uVar25 >> 0x11 | uVar25 << 0xf) ^ (uint)local_a0._4_4_ >> 10);
        uVar25 = (uVar30 >> 0xe | uVar30 * 0x40000) ^ uVar30;
        uVar48 = (uVar47 >> 9 | uVar47 * 0x800000) ^ uVar47;
        uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar30;
        uVar48 = (uVar48 >> 0xb | uVar48 << 0x15) ^ uVar47;
        iVar43 = local_a0._12_4_ + uVar49 + ((uVar27 ^ uVar28) & uVar30 ^ uVar28) + piVar35[0x13] +
                 (uVar25 >> 6 | uVar25 << 0x1a);
        uVar44 = uVar44 + iVar43;
        uVar48 = (uVar46 ^ (uVar46 ^ uVar45) & (uVar47 ^ uVar46)) + iVar43 +
                 (uVar48 >> 2 | uVar48 << 0x1e);
        uVar25 = ((uint)local_90._4_4_ >> 0xb | local_90._4_4_ << 0x15) ^ local_90._4_4_;
        uVar49 = ((uint)local_a0._8_4_ >> 2 | local_a0._8_4_ * 0x40000000) ^ local_a0._8_4_;
        local_90._0_4_ =
             ((uint)local_90._4_4_ >> 3 ^ (uVar25 >> 7 | uVar25 << 0x19)) + local_b0._4_4_ +
             local_90._0_4_ + ((uVar49 >> 0x11 | uVar49 << 0xf) ^ (uint)local_a0._8_4_ >> 10);
        uVar25 = (uVar44 >> 0xe | uVar44 * 0x40000) ^ uVar44;
        uVar49 = (uVar48 >> 9 | uVar48 * 0x800000) ^ uVar48;
        uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar44;
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar48;
        iVar43 = local_90._0_4_ + uVar28 + ((uVar30 ^ uVar27) & uVar44 ^ uVar27) + piVar35[0x18] +
                 (uVar25 >> 6 | uVar25 << 0x1a);
        uVar45 = uVar45 + iVar43;
        uVar28 = (uVar47 ^ (uVar47 ^ uVar46) & (uVar48 ^ uVar47)) + iVar43 +
                 (uVar49 >> 2 | uVar49 << 0x1e);
        uVar49 = ((uint)local_90._8_4_ >> 0xb | local_90._8_4_ << 0x15) ^ local_90._8_4_;
        uVar25 = ((uint)local_a0._12_4_ >> 2 | local_a0._12_4_ * 0x40000000) ^ local_a0._12_4_;
        local_90._4_4_ =
             ((uint)local_90._8_4_ >> 3 ^ (uVar49 >> 7 | uVar49 << 0x19)) + local_b0._8_4_ +
             local_90._4_4_ + ((uVar25 >> 0x11 | uVar25 << 0xf) ^ (uint)local_a0._12_4_ >> 10);
        uVar25 = (uVar45 >> 0xe | uVar45 * 0x40000) ^ uVar45;
        uVar49 = (uVar28 >> 9 | uVar28 * 0x800000) ^ uVar28;
        uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar45;
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar28;
        iVar43 = local_90._4_4_ + uVar27 + ((uVar44 ^ uVar30) & uVar45 ^ uVar30) + piVar35[0x19] +
                 (uVar25 >> 6 | uVar25 << 0x1a);
        uVar46 = uVar46 + iVar43;
        uVar27 = (uVar48 ^ (uVar48 ^ uVar47) & (uVar28 ^ uVar48)) + iVar43 +
                 (uVar49 >> 2 | uVar49 << 0x1e);
        uVar25 = ((uint)local_90._12_4_ >> 0xb | local_90._12_4_ << 0x15) ^ local_90._12_4_;
        uVar49 = ((uint)local_90._0_4_ >> 2 | local_90._0_4_ * 0x40000000) ^ local_90._0_4_;
        local_90._8_4_ =
             ((uint)local_90._12_4_ >> 3 ^ (uVar25 >> 7 | uVar25 << 0x19)) + local_b0._12_4_ +
             local_90._8_4_ + ((uVar49 >> 0x11 | uVar49 << 0xf) ^ (uint)local_90._0_4_ >> 10);
        uVar25 = (uVar46 >> 0xe | uVar46 * 0x40000) ^ uVar46;
        uVar49 = (uVar27 >> 9 | uVar27 * 0x800000) ^ uVar27;
        uVar25 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar46;
        uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar27;
        iVar43 = local_90._8_4_ + uVar30 + ((uVar45 ^ uVar44) & uVar46 ^ uVar44) + piVar35[0x1a] +
                 (uVar25 >> 6 | uVar25 << 0x1a);
        uVar47 = uVar47 + iVar43;
        uVar30 = (uVar28 ^ (uVar28 ^ uVar48) & (uVar27 ^ uVar28)) + iVar43 +
                 (uVar49 >> 2 | uVar49 << 0x1e);
        uVar49 = (uVar39 >> 0xb | uVar39 * 0x200000) ^ uVar39;
        uVar25 = ((uint)local_90._4_4_ >> 2 | local_90._4_4_ * 0x40000000) ^ local_90._4_4_;
        local_90._12_4_ =
             (uVar39 >> 3 ^ (uVar49 >> 7 | uVar49 << 0x19)) + local_a0._0_4_ + local_90._12_4_ +
             ((uVar25 >> 0x11 | uVar25 << 0xf) ^ (uint)local_90._4_4_ >> 10);
        uVar25 = (uVar47 >> 0xe | uVar47 * 0x40000) ^ uVar47;
        uVar49 = (uVar30 >> 9 | uVar30 * 0x800000) ^ uVar30;
        uVar29 = (uVar25 >> 5 | uVar25 << 0x1b) ^ uVar47;
        uVar25 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar30;
        uVar49 = uVar30 ^ uVar27;
        uVar25 = uVar25 >> 2 | uVar25 << 0x1e;
        iVar43 = local_90._12_4_ + uVar44 + ((uVar46 ^ uVar45) & uVar47 ^ uVar45) + piVar35[0x1b] +
                 (uVar29 >> 6 | uVar29 << 0x1a);
        uVar48 = uVar48 + iVar43;
        iVar43 = (uVar27 ^ (uVar27 ^ uVar28) & uVar49) + iVar43;
        pcVar1 = (char *)((long)piVar35 + 0x83);
        piVar35 = piVar35 + 0x20;
      } while (*pcVar1 != '\0');
      param_2 = param_2 + 4;
      uVar25 = iVar43 + uVar25 + *param_1;
      uVar30 = uVar30 + param_1[1];
      uVar27 = uVar27 + param_1[2];
      uVar28 = uVar28 + param_1[3];
      uVar48 = uVar48 + param_1[4];
      uVar47 = uVar47 + param_1[5];
      uVar46 = uVar46 + param_1[6];
      uVar45 = uVar45 + param_1[7];
      *param_1 = uVar25;
      param_1[1] = uVar30;
      param_1[2] = uVar27;
      param_1[3] = uVar28;
      param_1[4] = uVar48;
      param_1[5] = uVar47;
      param_1[6] = uVar46;
      param_1[7] = uVar45;
    } while (param_2 < pauVar4);
    return;
  }
  pauVar4 = param_2 + param_3 * 4;
  uVar25 = *param_1;
  uVar30 = param_1[1];
  uVar27 = param_1[2];
  uVar28 = param_1[3];
  uVar48 = param_1[4];
  uVar47 = param_1[5];
  uVar46 = param_1[6];
  uVar45 = param_1[7];
  do {
    in_ZMM0._0_16_ = pshufb(*param_2,_DAT_00104940);
    in_ZMM1._0_16_ = pshufb(param_2[1],_DAT_00104940);
    in_ZMM2._0_16_ = pshufb(param_2[2],_DAT_00104940);
    local_c0._0_4_ = K256 + SUB164(in_ZMM0._0_16_,0);
    local_c0._4_4_ = DAT_00104744 + SUB164(in_ZMM0._0_16_,4);
    local_c0._8_4_ = DAT_00104748 + SUB164(in_ZMM0._0_16_,8);
    local_c0._12_4_ = DAT_0010474c + SUB164(in_ZMM0._0_16_,0xc);
    in_ZMM3._0_16_ = pshufb(param_2[3],_DAT_00104940);
    local_b0._0_4_ = DAT_00104760 + SUB164(in_ZMM1._0_16_,0);
    local_b0._4_4_ = DAT_00104764 + SUB164(in_ZMM1._0_16_,4);
    local_b0._8_4_ = DAT_00104768 + SUB164(in_ZMM1._0_16_,8);
    local_b0._12_4_ = DAT_0010476c + SUB164(in_ZMM1._0_16_,0xc);
    local_a0._0_4_ = DAT_00104780 + SUB164(in_ZMM2._0_16_,0);
    local_a0._4_4_ = DAT_00104784 + SUB164(in_ZMM2._0_16_,4);
    local_a0._8_4_ = DAT_00104788 + SUB164(in_ZMM2._0_16_,8);
    local_a0._12_4_ = DAT_0010478c + SUB164(in_ZMM2._0_16_,0xc);
    local_90._0_4_ = DAT_001047a0 + SUB164(in_ZMM3._0_16_,0);
    local_90._4_4_ = DAT_001047a4 + SUB164(in_ZMM3._0_16_,4);
    local_90._8_4_ = DAT_001047a8 + SUB164(in_ZMM3._0_16_,8);
    local_90._12_4_ = DAT_001047ac + SUB164(in_ZMM3._0_16_,0xc);
    uVar44 = uVar30 ^ uVar27;
    piVar35 = &K256;
    do {
      uVar49 = (uVar48 >> 0xe | uVar48 << 0x12) ^ uVar48;
      uVar29 = (uVar25 >> 9 | uVar25 << 0x17) ^ uVar25;
      uVar49 = (uVar49 >> 5 | uVar49 << 0x1b) ^ uVar48;
      uVar41 = in_ZMM0._4_4_;
      uVar42 = in_ZMM0._8_4_;
      uVar85 = in_ZMM0._12_4_;
      uVar86 = in_ZMM1._0_4_;
      uVar29 = (uVar29 >> 0xb | uVar29 << 0x15) ^ uVar25;
      iVar43 = uVar45 + local_c0._0_4_ + ((uVar47 ^ uVar46) & uVar48 ^ uVar46) +
               (uVar49 >> 6 | uVar49 << 0x1a);
      uVar118 = in_ZMM2._4_4_;
      uVar150 = in_ZMM2._8_4_;
      uVar151 = in_ZMM2._12_4_;
      uVar152 = in_ZMM3._0_4_;
      uVar28 = uVar28 + iVar43;
      uVar31 = in_ZMM3._4_4_;
      uVar39 = in_ZMM3._8_4_;
      uVar40 = in_ZMM3._12_4_;
      auVar119._0_8_ = CONCAT44(uVar39,uVar39);
      auVar119._8_4_ = uVar40;
      auVar119._12_4_ = uVar40;
      uVar45 = (uVar29 >> 2 | uVar29 << 0x1e) + iVar43 + (uVar44 & (uVar25 ^ uVar30) ^ uVar30);
      uVar44 = (uVar28 >> 0xe | uVar28 * 0x40000) ^ uVar28;
      uVar49 = (uVar45 >> 9 | uVar45 * 0x800000) ^ uVar45;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar28;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar45;
      auVar120._0_4_ = uVar39 >> 10;
      auVar120._4_4_ = 0;
      auVar120._8_4_ = uVar40 >> 10;
      auVar120._12_4_ = uVar40 >> 10;
      iVar43 = uVar46 + local_c0._4_4_ + ((uVar48 ^ uVar47) & uVar28 ^ uVar47) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar27 = uVar27 + iVar43;
      auVar99._0_8_ = auVar119._0_8_ >> 0x11;
      auVar99._8_8_ = auVar119._8_8_ >> 0x11;
      uVar46 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar25 ^ uVar30) & (uVar45 ^ uVar25) ^ uVar25);
      auVar121._0_8_ = auVar119._0_8_ >> 0x13;
      auVar121._8_8_ = auVar119._8_8_ >> 0x13;
      uVar44 = (uVar27 >> 0xe | uVar27 * 0x40000) ^ uVar27;
      auVar121 = auVar120 ^ auVar99 ^ auVar121;
      uVar49 = (uVar46 >> 9 | uVar46 * 0x800000) ^ uVar46;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar27;
      in_ZMM0._0_4_ =
           in_ZMM0._0_4_ + uVar118 +
           (uVar41 >> 3 ^ uVar41 >> 7 ^ uVar41 << 0xe ^ uVar41 >> 0x12 ^ uVar41 << 0x19) +
           auVar121._0_4_;
      in_ZMM0._4_4_ =
           uVar41 + uVar150 +
           (uVar42 >> 3 ^ uVar42 >> 7 ^ uVar42 << 0xe ^ uVar42 >> 0x12 ^ uVar42 << 0x19) +
           auVar121._8_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar46;
      iVar43 = uVar47 + local_c0._8_4_ + ((uVar28 ^ uVar48) & uVar27 ^ uVar48) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      auVar122._0_8_ = CONCAT44(in_ZMM0._0_4_,in_ZMM0._0_4_);
      auVar122._8_4_ = in_ZMM0._4_4_;
      auVar122._12_4_ = in_ZMM0._4_4_;
      uVar30 = uVar30 + iVar43;
      auVar123._0_4_ = in_ZMM0._0_4_ >> 10;
      auVar123._4_4_ = 0;
      auVar123._8_4_ = in_ZMM0._4_4_ >> 10;
      auVar123._12_4_ = in_ZMM0._4_4_ >> 10;
      uVar47 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar45 ^ uVar25) & (uVar46 ^ uVar45) ^ uVar45);
      auVar100._0_8_ = auVar122._0_8_ >> 0x11;
      auVar100._8_8_ = auVar122._8_8_ >> 0x11;
      uVar44 = (uVar30 >> 0xe | uVar30 * 0x40000) ^ uVar30;
      uVar49 = (uVar47 >> 9 | uVar47 * 0x800000) ^ uVar47;
      auVar124._0_8_ = auVar122._0_8_ >> 0x13;
      auVar124._8_8_ = auVar122._8_8_ >> 0x13;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar30;
      auVar124 = auVar123 ^ auVar100 ^ auVar124;
      piVar9 = piVar35 + 0x21;
      piVar10 = piVar35 + 0x22;
      piVar11 = piVar35 + 0x23;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar47;
      iVar43 = uVar48 + local_c0._12_4_ + ((uVar27 ^ uVar28) & uVar30 ^ uVar28) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      in_ZMM0._8_4_ =
           uVar42 + uVar151 +
           (uVar85 >> 3 ^ uVar85 >> 7 ^ uVar85 << 0xe ^ uVar85 >> 0x12 ^ uVar85 << 0x19) +
           auVar124._0_4_;
      in_ZMM0._12_4_ =
           uVar85 + uVar152 +
           (uVar86 >> 3 ^ uVar86 >> 7 ^ uVar86 << 0xe ^ uVar86 >> 0x12 ^ uVar86 << 0x19) +
           auVar124._8_4_;
      uVar25 = uVar25 + iVar43;
      local_c0._0_4_ = piVar35[0x20] + in_ZMM0._0_4_;
      uVar48 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar46 ^ uVar45) & (uVar47 ^ uVar46) ^ uVar46);
      local_c0._4_4_ = *piVar9 + in_ZMM0._4_4_;
      local_c0._8_4_ = *piVar10 + in_ZMM0._8_4_;
      local_c0._12_4_ = *piVar11 + in_ZMM0._12_4_;
      uVar44 = (uVar25 >> 0xe | uVar25 * 0x40000) ^ uVar25;
      uVar49 = (uVar48 >> 9 | uVar48 * 0x800000) ^ uVar48;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar25;
      uVar29 = in_ZMM1._4_4_;
      uVar41 = in_ZMM1._8_4_;
      uVar42 = in_ZMM1._12_4_;
      uVar85 = in_ZMM2._0_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar48;
      iVar43 = uVar28 + local_b0._0_4_ + ((uVar30 ^ uVar27) & uVar25 ^ uVar27) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar45 = uVar45 + iVar43;
      auVar125._0_8_ = CONCAT44(in_ZMM0._8_4_,in_ZMM0._8_4_);
      auVar125._8_4_ = in_ZMM0._12_4_;
      auVar125._12_4_ = in_ZMM0._12_4_;
      uVar28 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar47 ^ uVar46) & (uVar48 ^ uVar47) ^ uVar47);
      uVar44 = (uVar45 >> 0xe | uVar45 * 0x40000) ^ uVar45;
      uVar49 = (uVar28 >> 9 | uVar28 * 0x800000) ^ uVar28;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar45;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar28;
      auVar126._0_4_ = in_ZMM0._8_4_ >> 10;
      auVar126._4_4_ = 0;
      auVar126._8_4_ = in_ZMM0._12_4_ >> 10;
      auVar126._12_4_ = in_ZMM0._12_4_ >> 10;
      iVar43 = uVar27 + local_b0._4_4_ + ((uVar25 ^ uVar30) & uVar45 ^ uVar30) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar46 = uVar46 + iVar43;
      auVar101._0_8_ = auVar125._0_8_ >> 0x11;
      auVar101._8_8_ = auVar125._8_8_ >> 0x11;
      uVar27 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar48 ^ uVar47) & (uVar28 ^ uVar48) ^ uVar48);
      auVar127._0_8_ = auVar125._0_8_ >> 0x13;
      auVar127._8_8_ = auVar125._8_8_ >> 0x13;
      uVar44 = (uVar46 >> 0xe | uVar46 * 0x40000) ^ uVar46;
      auVar127 = auVar126 ^ auVar101 ^ auVar127;
      uVar49 = (uVar27 >> 9 | uVar27 * 0x800000) ^ uVar27;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar46;
      in_ZMM1._0_4_ =
           uVar86 + uVar31 +
           (uVar29 >> 3 ^ uVar29 >> 7 ^ uVar29 << 0xe ^ uVar29 >> 0x12 ^ uVar29 << 0x19) +
           auVar127._0_4_;
      in_ZMM1._4_4_ =
           uVar29 + uVar39 +
           (uVar41 >> 3 ^ uVar41 >> 7 ^ uVar41 << 0xe ^ uVar41 >> 0x12 ^ uVar41 << 0x19) +
           auVar127._8_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar27;
      iVar43 = uVar30 + local_b0._8_4_ + ((uVar45 ^ uVar25) & uVar46 ^ uVar25) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      auVar128._0_8_ = CONCAT44(in_ZMM1._0_4_,in_ZMM1._0_4_);
      auVar128._8_4_ = in_ZMM1._4_4_;
      auVar128._12_4_ = in_ZMM1._4_4_;
      uVar47 = uVar47 + iVar43;
      auVar129._0_4_ = in_ZMM1._0_4_ >> 10;
      auVar129._4_4_ = 0;
      auVar129._8_4_ = in_ZMM1._4_4_ >> 10;
      auVar129._12_4_ = in_ZMM1._4_4_ >> 10;
      uVar30 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar28 ^ uVar48) & (uVar27 ^ uVar28) ^ uVar28);
      auVar102._0_8_ = auVar128._0_8_ >> 0x11;
      auVar102._8_8_ = auVar128._8_8_ >> 0x11;
      uVar44 = (uVar47 >> 0xe | uVar47 * 0x40000) ^ uVar47;
      uVar49 = (uVar30 >> 9 | uVar30 * 0x800000) ^ uVar30;
      auVar130._0_8_ = auVar128._0_8_ >> 0x13;
      auVar130._8_8_ = auVar128._8_8_ >> 0x13;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar47;
      auVar130 = auVar129 ^ auVar102 ^ auVar130;
      piVar2 = piVar35 + 0x28;
      piVar12 = piVar35 + 0x29;
      piVar13 = piVar35 + 0x2a;
      piVar14 = piVar35 + 0x2b;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar30;
      iVar43 = uVar25 + local_b0._12_4_ + ((uVar46 ^ uVar45) & uVar47 ^ uVar45) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      in_ZMM1._8_4_ =
           uVar41 + uVar40 +
           (uVar42 >> 3 ^ uVar42 >> 7 ^ uVar42 << 0xe ^ uVar42 >> 0x12 ^ uVar42 << 0x19) +
           auVar130._0_4_;
      in_ZMM1._12_4_ =
           uVar42 + in_ZMM0._0_4_ +
           (uVar85 >> 3 ^ uVar85 >> 7 ^ uVar85 << 0xe ^ uVar85 >> 0x12 ^ uVar85 << 0x19) +
           auVar130._8_4_;
      uVar48 = uVar48 + iVar43;
      uVar25 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar27 ^ uVar28) & (uVar30 ^ uVar27) ^ uVar27);
      local_b0._4_4_ = *piVar12 + in_ZMM1._4_4_;
      local_b0._0_4_ = *piVar2 + in_ZMM1._0_4_;
      local_b0._8_4_ = *piVar13 + in_ZMM1._8_4_;
      local_b0._12_4_ = *piVar14 + in_ZMM1._12_4_;
      uVar44 = (uVar48 >> 0xe | uVar48 * 0x40000) ^ uVar48;
      uVar49 = (uVar25 >> 9 | uVar25 * 0x800000) ^ uVar25;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar48;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar25;
      iVar43 = uVar45 + local_a0._0_4_ + ((uVar47 ^ uVar46) & uVar48 ^ uVar46) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar28 = uVar28 + iVar43;
      auVar131._0_8_ = CONCAT44(in_ZMM1._8_4_,in_ZMM1._8_4_);
      auVar131._8_4_ = in_ZMM1._12_4_;
      auVar131._12_4_ = in_ZMM1._12_4_;
      uVar45 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar30 ^ uVar27) & (uVar25 ^ uVar30) ^ uVar30);
      uVar44 = (uVar28 >> 0xe | uVar28 * 0x40000) ^ uVar28;
      uVar49 = (uVar45 >> 9 | uVar45 * 0x800000) ^ uVar45;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar28;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar45;
      auVar132._0_4_ = in_ZMM1._8_4_ >> 10;
      auVar132._4_4_ = 0;
      auVar132._8_4_ = in_ZMM1._12_4_ >> 10;
      auVar132._12_4_ = in_ZMM1._12_4_ >> 10;
      iVar43 = uVar46 + local_a0._4_4_ + ((uVar48 ^ uVar47) & uVar28 ^ uVar47) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar27 = uVar27 + iVar43;
      auVar103._0_8_ = auVar131._0_8_ >> 0x11;
      auVar103._8_8_ = auVar131._8_8_ >> 0x11;
      uVar46 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar25 ^ uVar30) & (uVar45 ^ uVar25) ^ uVar25);
      auVar133._0_8_ = auVar131._0_8_ >> 0x13;
      auVar133._8_8_ = auVar131._8_8_ >> 0x13;
      uVar44 = (uVar27 >> 0xe | uVar27 * 0x40000) ^ uVar27;
      auVar133 = auVar132 ^ auVar103 ^ auVar133;
      uVar49 = (uVar46 >> 9 | uVar46 * 0x800000) ^ uVar46;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar27;
      in_ZMM2._0_4_ =
           uVar85 + in_ZMM0._4_4_ +
           (uVar118 >> 3 ^ uVar118 >> 7 ^ uVar118 << 0xe ^ uVar118 >> 0x12 ^ uVar118 << 0x19) +
           auVar133._0_4_;
      in_ZMM2._4_4_ =
           uVar118 + in_ZMM0._8_4_ +
           (uVar150 >> 3 ^ uVar150 >> 7 ^ uVar150 << 0xe ^ uVar150 >> 0x12 ^ uVar150 << 0x19) +
           auVar133._8_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar46;
      iVar43 = uVar47 + local_a0._8_4_ + ((uVar28 ^ uVar48) & uVar27 ^ uVar48) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      auVar134._0_8_ = CONCAT44(in_ZMM2._0_4_,in_ZMM2._0_4_);
      auVar134._8_4_ = in_ZMM2._4_4_;
      auVar134._12_4_ = in_ZMM2._4_4_;
      uVar30 = uVar30 + iVar43;
      auVar135._0_4_ = in_ZMM2._0_4_ >> 10;
      auVar135._4_4_ = 0;
      auVar135._8_4_ = in_ZMM2._4_4_ >> 10;
      auVar135._12_4_ = in_ZMM2._4_4_ >> 10;
      uVar47 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar45 ^ uVar25) & (uVar46 ^ uVar45) ^ uVar45);
      auVar104._0_8_ = auVar134._0_8_ >> 0x11;
      auVar104._8_8_ = auVar134._8_8_ >> 0x11;
      uVar44 = (uVar30 >> 0xe | uVar30 * 0x40000) ^ uVar30;
      uVar49 = (uVar47 >> 9 | uVar47 * 0x800000) ^ uVar47;
      auVar136._0_8_ = auVar134._0_8_ >> 0x13;
      auVar136._8_8_ = auVar134._8_8_ >> 0x13;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar30;
      auVar136 = auVar135 ^ auVar104 ^ auVar136;
      piVar3 = piVar35 + 0x30;
      piVar15 = piVar35 + 0x31;
      piVar16 = piVar35 + 0x32;
      piVar17 = piVar35 + 0x33;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar47;
      iVar43 = uVar48 + local_a0._12_4_ + ((uVar27 ^ uVar28) & uVar30 ^ uVar28) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      in_ZMM2._8_4_ =
           uVar150 + in_ZMM0._12_4_ +
           (uVar151 >> 3 ^ uVar151 >> 7 ^ uVar151 << 0xe ^ uVar151 >> 0x12 ^ uVar151 << 0x19) +
           auVar136._0_4_;
      in_ZMM2._12_4_ =
           uVar151 + in_ZMM1._0_4_ +
           (uVar152 >> 3 ^ uVar152 >> 7 ^ uVar152 << 0xe ^ uVar152 >> 0x12 ^ uVar152 << 0x19) +
           auVar136._8_4_;
      uVar25 = uVar25 + iVar43;
      uVar48 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar46 ^ uVar45) & (uVar47 ^ uVar46) ^ uVar46);
      local_a0._4_4_ = *piVar15 + in_ZMM2._4_4_;
      local_a0._0_4_ = *piVar3 + in_ZMM2._0_4_;
      local_a0._8_4_ = *piVar16 + in_ZMM2._8_4_;
      local_a0._12_4_ = *piVar17 + in_ZMM2._12_4_;
      uVar44 = (uVar25 >> 0xe | uVar25 * 0x40000) ^ uVar25;
      uVar49 = (uVar48 >> 9 | uVar48 * 0x800000) ^ uVar48;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar25;
      auVar83._0_4_ = uVar31 >> 3;
      auVar83._4_4_ = uVar39 >> 3;
      auVar83._8_4_ = uVar40 >> 3;
      auVar83._12_4_ = in_ZMM0._0_4_ >> 3;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar48;
      iVar43 = uVar28 + local_90._0_4_ + ((uVar30 ^ uVar27) & uVar25 ^ uVar27) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar45 = uVar45 + iVar43;
      auVar105._0_4_ = uVar31 >> 7;
      auVar105._4_4_ = uVar39 >> 7;
      auVar105._8_4_ = uVar40 >> 7;
      auVar105._12_4_ = in_ZMM0._0_4_ >> 7;
      auVar137._0_8_ = CONCAT44(in_ZMM2._8_4_,in_ZMM2._8_4_);
      auVar137._8_4_ = in_ZMM2._12_4_;
      auVar137._12_4_ = in_ZMM2._12_4_;
      uVar28 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar47 ^ uVar46) & (uVar48 ^ uVar47) ^ uVar47);
      auVar90._0_4_ = uVar31 << 0xe;
      auVar90._4_4_ = uVar39 << 0xe;
      auVar90._8_4_ = uVar40 << 0xe;
      auVar90._12_4_ = in_ZMM0._0_4_ * 0x4000;
      uVar44 = (uVar45 >> 0xe | uVar45 * 0x40000) ^ uVar45;
      auVar106._0_4_ = uVar31 >> 0x12;
      auVar106._4_4_ = uVar39 >> 0x12;
      auVar106._8_4_ = uVar40 >> 0x12;
      auVar106._12_4_ = in_ZMM0._0_4_ >> 0x12;
      uVar49 = (uVar28 >> 9 | uVar28 * 0x800000) ^ uVar28;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar45;
      auVar84._0_4_ = uVar31 << 0x19;
      auVar84._4_4_ = uVar39 << 0x19;
      auVar84._8_4_ = uVar40 << 0x19;
      auVar84._12_4_ = in_ZMM0._0_4_ * 0x2000000;
      auVar84 = auVar83 ^ auVar105 ^ auVar90 ^ auVar106 ^ auVar84;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar28;
      auVar138._0_4_ = in_ZMM2._8_4_ >> 10;
      auVar138._4_4_ = 0;
      auVar138._8_4_ = in_ZMM2._12_4_ >> 10;
      auVar138._12_4_ = in_ZMM2._12_4_ >> 10;
      iVar43 = uVar27 + local_90._4_4_ + ((uVar25 ^ uVar30) & uVar45 ^ uVar30) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      uVar46 = uVar46 + iVar43;
      auVar107._0_8_ = auVar137._0_8_ >> 0x11;
      auVar107._8_8_ = auVar137._8_8_ >> 0x11;
      uVar27 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar48 ^ uVar47) & (uVar28 ^ uVar48) ^ uVar48);
      auVar139._0_8_ = auVar137._0_8_ >> 0x13;
      auVar139._8_8_ = auVar137._8_8_ >> 0x13;
      uVar44 = (uVar46 >> 0xe | uVar46 * 0x40000) ^ uVar46;
      auVar139 = auVar138 ^ auVar107 ^ auVar139;
      uVar49 = (uVar27 >> 9 | uVar27 * 0x800000) ^ uVar27;
      uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar46;
      in_ZMM3._0_4_ = uVar152 + in_ZMM1._4_4_ + auVar84._0_4_ + auVar139._0_4_;
      in_ZMM3._4_4_ = uVar31 + in_ZMM1._8_4_ + auVar84._4_4_ + auVar139._8_4_;
      uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar27;
      iVar43 = uVar30 + local_90._8_4_ + ((uVar45 ^ uVar25) & uVar46 ^ uVar25) +
               (uVar44 >> 6 | uVar44 << 0x1a);
      auVar140._0_8_ = CONCAT44(in_ZMM3._0_4_,in_ZMM3._0_4_);
      auVar140._8_4_ = in_ZMM3._4_4_;
      auVar140._12_4_ = in_ZMM3._4_4_;
      uVar47 = uVar47 + iVar43;
      auVar141._0_4_ = in_ZMM3._0_4_ >> 10;
      auVar141._4_4_ = 0;
      auVar141._8_4_ = in_ZMM3._4_4_ >> 10;
      auVar141._12_4_ = in_ZMM3._4_4_ >> 10;
      uVar30 = (uVar49 >> 2 | uVar49 << 0x1e) +
               iVar43 + ((uVar28 ^ uVar48) & (uVar27 ^ uVar28) ^ uVar28);
      auVar108._0_8_ = auVar140._0_8_ >> 0x11;
      auVar108._8_8_ = auVar140._8_8_ >> 0x11;
      uVar44 = (uVar47 >> 0xe | uVar47 * 0x40000) ^ uVar47;
      uVar29 = (uVar30 >> 9 | uVar30 * 0x800000) ^ uVar30;
      auVar142._0_8_ = auVar140._0_8_ >> 0x13;
      auVar142._8_8_ = auVar140._8_8_ >> 0x13;
      uVar49 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar47;
      auVar142 = auVar141 ^ auVar108 ^ auVar142;
      uVar44 = uVar30 ^ uVar27;
      uVar29 = (uVar29 >> 0xb | uVar29 << 0x15) ^ uVar30;
      iVar43 = uVar25 + local_90._12_4_ + ((uVar46 ^ uVar45) & uVar47 ^ uVar45) +
               (uVar49 >> 6 | uVar49 << 0x1a);
      in_ZMM3._8_4_ = uVar39 + in_ZMM1._12_4_ + auVar84._8_4_ + auVar142._0_4_;
      in_ZMM3._12_4_ = uVar40 + in_ZMM2._0_4_ + auVar84._12_4_ + auVar142._8_4_;
      uVar48 = uVar48 + iVar43;
      local_90._0_4_ = piVar35[0x38] + in_ZMM3._0_4_;
      local_90._4_4_ = piVar35[0x39] + in_ZMM3._4_4_;
      local_90._8_4_ = piVar35[0x3a] + in_ZMM3._8_4_;
      local_90._12_4_ = piVar35[0x3b] + in_ZMM3._12_4_;
      uVar25 = (uVar29 >> 2 | uVar29 << 0x1e) + iVar43 + ((uVar27 ^ uVar28) & uVar44 ^ uVar27);
      pcVar1 = (char *)((long)piVar35 + 0x103);
      piVar35 = piVar35 + 0x20;
    } while (*pcVar1 != '\0');
    uVar49 = (uVar48 >> 0xe | uVar48 * 0x40000) ^ uVar48;
    uVar29 = (uVar25 >> 9 | uVar25 * 0x800000) ^ uVar25;
    uVar49 = (uVar49 >> 5 | uVar49 << 0x1b) ^ uVar48;
    uVar29 = (uVar29 >> 0xb | uVar29 << 0x15) ^ uVar25;
    iVar43 = uVar45 + local_c0._0_4_ + ((uVar47 ^ uVar46) & uVar48 ^ uVar46) +
             (uVar49 >> 6 | uVar49 << 0x1a);
    uVar28 = uVar28 + iVar43;
    uVar45 = (uVar29 >> 2 | uVar29 << 0x1e) + iVar43 + (uVar44 & (uVar25 ^ uVar30) ^ uVar30);
    uVar44 = (uVar28 >> 0xe | uVar28 * 0x40000) ^ uVar28;
    uVar49 = (uVar45 >> 9 | uVar45 * 0x800000) ^ uVar45;
    uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar28;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar45;
    iVar43 = uVar46 + *piVar9 + in_ZMM0._4_4_ + ((uVar48 ^ uVar47) & uVar28 ^ uVar47) +
             (uVar44 >> 6 | uVar44 << 0x1a);
    uVar27 = uVar27 + iVar43;
    uVar46 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar25 ^ uVar30) & (uVar45 ^ uVar25) ^ uVar25);
    uVar44 = (uVar27 >> 0xe | uVar27 * 0x40000) ^ uVar27;
    uVar49 = (uVar46 >> 9 | uVar46 * 0x800000) ^ uVar46;
    uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar27;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar46;
    iVar43 = uVar47 + *piVar10 + in_ZMM0._8_4_ + ((uVar28 ^ uVar48) & uVar27 ^ uVar48) +
             (uVar44 >> 6 | uVar44 << 0x1a);
    uVar30 = uVar30 + iVar43;
    uVar47 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar45 ^ uVar25) & (uVar46 ^ uVar45) ^ uVar45);
    uVar44 = (uVar30 >> 0xe | uVar30 * 0x40000) ^ uVar30;
    uVar49 = (uVar47 >> 9 | uVar47 * 0x800000) ^ uVar47;
    uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar30;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar47;
    iVar43 = uVar48 + *piVar11 + in_ZMM0._12_4_ + ((uVar27 ^ uVar28) & uVar30 ^ uVar28) +
             (uVar44 >> 6 | uVar44 << 0x1a);
    uVar25 = uVar25 + iVar43;
    uVar48 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar46 ^ uVar45) & (uVar47 ^ uVar46) ^ uVar46);
    uVar44 = (uVar25 >> 0xe | uVar25 * 0x40000) ^ uVar25;
    uVar49 = (uVar48 >> 9 | uVar48 * 0x800000) ^ uVar48;
    uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar25;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar48;
    iVar43 = uVar28 + *piVar2 + in_ZMM1._0_4_ + ((uVar30 ^ uVar27) & uVar25 ^ uVar27) +
             (uVar44 >> 6 | uVar44 << 0x1a);
    uVar45 = uVar45 + iVar43;
    uVar28 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar47 ^ uVar46) & (uVar48 ^ uVar47) ^ uVar47);
    uVar44 = (uVar45 >> 0xe | uVar45 * 0x40000) ^ uVar45;
    uVar49 = (uVar28 >> 9 | uVar28 * 0x800000) ^ uVar28;
    uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar45;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar28;
    iVar43 = uVar27 + *piVar12 + in_ZMM1._4_4_ + ((uVar25 ^ uVar30) & uVar45 ^ uVar30) +
             (uVar44 >> 6 | uVar44 << 0x1a);
    uVar46 = uVar46 + iVar43;
    uVar27 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar48 ^ uVar47) & (uVar28 ^ uVar48) ^ uVar48);
    uVar44 = (uVar46 >> 0xe | uVar46 * 0x40000) ^ uVar46;
    uVar49 = (uVar27 >> 9 | uVar27 * 0x800000) ^ uVar27;
    uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar46;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar27;
    iVar43 = uVar30 + *piVar13 + in_ZMM1._8_4_ + ((uVar45 ^ uVar25) & uVar46 ^ uVar25) +
             (uVar44 >> 6 | uVar44 << 0x1a);
    uVar47 = uVar47 + iVar43;
    uVar30 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar28 ^ uVar48) & (uVar27 ^ uVar28) ^ uVar28);
    uVar44 = (uVar47 >> 0xe | uVar47 * 0x40000) ^ uVar47;
    uVar49 = (uVar30 >> 9 | uVar30 * 0x800000) ^ uVar30;
    uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar47;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar30;
    iVar43 = uVar25 + *piVar14 + in_ZMM1._12_4_ + ((uVar46 ^ uVar45) & uVar47 ^ uVar45) +
             (uVar44 >> 6 | uVar44 << 0x1a);
    uVar48 = uVar48 + iVar43;
    uVar25 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar27 ^ uVar28) & (uVar30 ^ uVar27) ^ uVar27);
    uVar44 = (uVar48 >> 0xe | uVar48 * 0x40000) ^ uVar48;
    uVar49 = (uVar25 >> 9 | uVar25 * 0x800000) ^ uVar25;
    uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar48;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar25;
    iVar43 = uVar45 + *piVar3 + in_ZMM2._0_4_ + ((uVar47 ^ uVar46) & uVar48 ^ uVar46) +
             (uVar44 >> 6 | uVar44 << 0x1a);
    uVar28 = uVar28 + iVar43;
    uVar45 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar30 ^ uVar27) & (uVar25 ^ uVar30) ^ uVar30);
    uVar44 = (uVar28 >> 0xe | uVar28 * 0x40000) ^ uVar28;
    uVar49 = (uVar45 >> 9 | uVar45 * 0x800000) ^ uVar45;
    uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar28;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar45;
    iVar43 = uVar46 + *piVar15 + in_ZMM2._4_4_ + ((uVar48 ^ uVar47) & uVar28 ^ uVar47) +
             (uVar44 >> 6 | uVar44 << 0x1a);
    uVar27 = uVar27 + iVar43;
    uVar46 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar25 ^ uVar30) & (uVar45 ^ uVar25) ^ uVar25);
    uVar44 = (uVar27 >> 0xe | uVar27 * 0x40000) ^ uVar27;
    uVar49 = (uVar46 >> 9 | uVar46 * 0x800000) ^ uVar46;
    uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar27;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar46;
    iVar43 = uVar47 + *piVar16 + in_ZMM2._8_4_ + ((uVar28 ^ uVar48) & uVar27 ^ uVar48) +
             (uVar44 >> 6 | uVar44 << 0x1a);
    uVar30 = uVar30 + iVar43;
    uVar47 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar45 ^ uVar25) & (uVar46 ^ uVar45) ^ uVar45);
    uVar44 = (uVar30 >> 0xe | uVar30 * 0x40000) ^ uVar30;
    uVar49 = (uVar47 >> 9 | uVar47 * 0x800000) ^ uVar47;
    uVar44 = (uVar44 >> 5 | uVar44 << 0x1b) ^ uVar30;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar47;
    iVar43 = uVar48 + *piVar17 + in_ZMM2._12_4_ + ((uVar27 ^ uVar28) & uVar30 ^ uVar28) +
             (uVar44 >> 6 | uVar44 << 0x1a);
    uVar25 = uVar25 + iVar43;
    uVar44 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar46 ^ uVar45) & (uVar47 ^ uVar46) ^ uVar46);
    uVar48 = (uVar25 >> 0xe | uVar25 * 0x40000) ^ uVar25;
    uVar49 = (uVar44 >> 9 | uVar44 * 0x800000) ^ uVar44;
    uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar25;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar44;
    iVar43 = uVar28 + local_90._0_4_ + ((uVar30 ^ uVar27) & uVar25 ^ uVar27) +
             (uVar48 >> 6 | uVar48 << 0x1a);
    uVar45 = uVar45 + iVar43;
    uVar28 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar47 ^ uVar46) & (uVar44 ^ uVar47) ^ uVar47);
    uVar48 = (uVar45 >> 0xe | uVar45 * 0x40000) ^ uVar45;
    uVar49 = (uVar28 >> 9 | uVar28 * 0x800000) ^ uVar28;
    uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar45;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar28;
    iVar43 = uVar27 + local_90._4_4_ + ((uVar25 ^ uVar30) & uVar45 ^ uVar30) +
             (uVar48 >> 6 | uVar48 << 0x1a);
    uVar46 = uVar46 + iVar43;
    uVar27 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar44 ^ uVar47) & (uVar28 ^ uVar44) ^ uVar44);
    uVar48 = (uVar46 >> 0xe | uVar46 * 0x40000) ^ uVar46;
    uVar49 = (uVar27 >> 9 | uVar27 * 0x800000) ^ uVar27;
    uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar46;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar27;
    iVar43 = uVar30 + local_90._8_4_ + ((uVar45 ^ uVar25) & uVar46 ^ uVar25) +
             (uVar48 >> 6 | uVar48 << 0x1a);
    uVar47 = uVar47 + iVar43;
    uVar30 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar28 ^ uVar44) & (uVar27 ^ uVar28) ^ uVar28);
    uVar48 = (uVar47 >> 0xe | uVar47 * 0x40000) ^ uVar47;
    uVar49 = (uVar30 >> 9 | uVar30 * 0x800000) ^ uVar30;
    uVar48 = (uVar48 >> 5 | uVar48 << 0x1b) ^ uVar47;
    uVar49 = (uVar49 >> 0xb | uVar49 << 0x15) ^ uVar30;
    iVar43 = uVar25 + local_90._12_4_ + ((uVar46 ^ uVar45) & uVar47 ^ uVar45) +
             (uVar48 >> 6 | uVar48 << 0x1a);
    uVar25 = (uVar49 >> 2 | uVar49 << 0x1e) +
             iVar43 + ((uVar27 ^ uVar28) & (uVar30 ^ uVar27) ^ uVar27) + *param_1;
    param_2 = param_2 + 4;
    uVar30 = uVar30 + param_1[1];
    uVar27 = uVar27 + param_1[2];
    uVar28 = uVar28 + param_1[3];
    uVar48 = uVar44 + iVar43 + param_1[4];
    uVar47 = uVar47 + param_1[5];
    uVar46 = uVar46 + param_1[6];
    uVar45 = uVar45 + param_1[7];
    *param_1 = uVar25;
    param_1[1] = uVar30;
    param_1[2] = uVar27;
    param_1[3] = uVar28;
    param_1[4] = uVar48;
    param_1[5] = uVar47;
    param_1[6] = uVar46;
    param_1[7] = uVar45;
  } while (param_2 < pauVar4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sha256_block_data_order_shaext(undefined8 *param_1,undefined1 (*param_2) [16],long param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [12];
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
  
  auVar31._12_4_ = *(undefined4 *)(param_1 + 1);
  auVar31._8_4_ = *(undefined4 *)((long)param_1 + 0xc);
  auVar2._20_4_ = *(undefined4 *)param_1;
  auVar2._16_4_ = *(undefined4 *)((long)param_1 + 4);
  auVar2._24_4_ = *(undefined4 *)((long)param_1 + 0xc);
  auVar2._28_4_ = *(undefined4 *)(param_1 + 1);
  auVar31._0_8_ = CONCAT44(*(undefined4 *)(param_1 + 3),*(undefined4 *)((long)param_1 + 0x1c));
  auVar2._8_4_ = *(undefined4 *)((long)param_1 + 0x14);
  auVar2._0_8_ = auVar31._0_8_;
  auVar2._12_4_ = *(undefined4 *)(param_1 + 2);
  auVar30 = auVar2._8_16_;
  do {
    auVar36 = pshufb(*param_2,_DAT_00104940);
    pauVar1 = param_2 + 3;
    auVar28._0_4_ = K256 + auVar36._0_4_;
    auVar28._4_4_ = DAT_00104744 + auVar36._4_4_;
    auVar28._8_4_ = DAT_00104748 + auVar36._8_4_;
    auVar28._12_4_ = DAT_0010474c + auVar36._12_4_;
    auVar41 = pshufb(param_2[1],_DAT_00104940);
    auVar32 = sha256rnds2_sha(auVar31,auVar30,auVar28);
    auVar33._4_4_ = auVar28._12_4_;
    auVar33._0_4_ = auVar28._8_4_;
    auVar33._8_4_ = auVar28._0_4_;
    auVar33._12_4_ = auVar28._0_4_;
    auVar28 = sha256rnds2_sha(auVar30,auVar32,auVar33);
    auVar37._0_4_ = DAT_00104760 + auVar41._0_4_;
    auVar37._4_4_ = DAT_00104764 + auVar41._4_4_;
    auVar37._8_4_ = DAT_00104768 + auVar41._8_4_;
    auVar37._12_4_ = DAT_0010476c + auVar41._12_4_;
    auVar45 = pshufb(param_2[2],_DAT_00104940);
    auVar33 = sha256rnds2_sha(auVar32,auVar28,auVar37);
    auVar32._4_4_ = auVar37._12_4_;
    auVar32._0_4_ = auVar37._8_4_;
    auVar32._8_4_ = auVar37._0_4_;
    auVar32._12_4_ = auVar37._0_4_;
    param_2 = param_2 + 4;
    auVar37 = sha256msg1_sha(auVar36,auVar41);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar32);
    auVar36._0_4_ = DAT_00104780 + auVar45._0_4_;
    auVar36._4_4_ = DAT_00104784 + auVar45._4_4_;
    auVar36._8_4_ = DAT_00104788 + auVar45._8_4_;
    auVar36._12_4_ = DAT_0010478c + auVar45._12_4_;
    auVar49 = pshufb(*pauVar1,_DAT_00104940);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar36);
    auVar50._4_4_ = auVar36._12_4_;
    auVar50._0_4_ = auVar36._8_4_;
    auVar50._8_4_ = auVar36._0_4_;
    auVar50._12_4_ = auVar36._0_4_;
    auVar38._0_4_ = auVar37._0_4_ + auVar45._4_4_;
    auVar38._4_4_ = auVar37._4_4_ + auVar45._8_4_;
    auVar38._8_4_ = auVar37._8_4_ + auVar45._12_4_;
    auVar38._12_4_ = auVar37._12_4_ + auVar49._0_4_;
    auVar32 = sha256msg1_sha(auVar41,auVar45);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar50);
    auVar41._0_4_ = DAT_001047a0 + auVar49._0_4_;
    auVar41._4_4_ = DAT_001047a4 + auVar49._4_4_;
    auVar41._8_4_ = DAT_001047a8 + auVar49._8_4_;
    auVar41._12_4_ = DAT_001047ac + auVar49._12_4_;
    auVar37 = sha256msg2_sha(auVar38,auVar49);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar41);
    auVar5._4_4_ = auVar41._12_4_;
    auVar5._0_4_ = auVar41._8_4_;
    auVar5._8_4_ = auVar41._0_4_;
    auVar5._12_4_ = auVar41._0_4_;
    auVar42._0_4_ = auVar32._0_4_ + auVar49._4_4_;
    auVar42._4_4_ = auVar32._4_4_ + auVar49._8_4_;
    auVar42._8_4_ = auVar32._8_4_ + auVar49._12_4_;
    auVar42._12_4_ = auVar32._12_4_ + auVar37._0_4_;
    auVar36 = sha256msg1_sha(auVar45,auVar49);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar5);
    auVar45._0_4_ = DAT_001047c0 + auVar37._0_4_;
    auVar45._4_4_ = DAT_001047c4 + auVar37._4_4_;
    auVar45._8_4_ = DAT_001047c8 + auVar37._8_4_;
    auVar45._12_4_ = DAT_001047cc + auVar37._12_4_;
    auVar32 = sha256msg2_sha(auVar42,auVar37);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar45);
    auVar6._4_4_ = auVar45._12_4_;
    auVar6._0_4_ = auVar45._8_4_;
    auVar6._8_4_ = auVar45._0_4_;
    auVar6._12_4_ = auVar45._0_4_;
    auVar46._0_4_ = auVar36._0_4_ + auVar37._4_4_;
    auVar46._4_4_ = auVar36._4_4_ + auVar37._8_4_;
    auVar46._8_4_ = auVar36._8_4_ + auVar37._12_4_;
    auVar46._12_4_ = auVar36._12_4_ + auVar32._0_4_;
    auVar50 = sha256msg1_sha(auVar49,auVar37);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar6);
    auVar49._0_4_ = DAT_001047e0 + auVar32._0_4_;
    auVar49._4_4_ = DAT_001047e4 + auVar32._4_4_;
    auVar49._8_4_ = DAT_001047e8 + auVar32._8_4_;
    auVar49._12_4_ = DAT_001047ec + auVar32._12_4_;
    auVar36 = sha256msg2_sha(auVar46,auVar32);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar49);
    auVar7._4_4_ = auVar49._12_4_;
    auVar7._0_4_ = auVar49._8_4_;
    auVar7._8_4_ = auVar49._0_4_;
    auVar7._12_4_ = auVar49._0_4_;
    auVar51._0_4_ = auVar50._0_4_ + auVar32._4_4_;
    auVar51._4_4_ = auVar50._4_4_ + auVar32._8_4_;
    auVar51._8_4_ = auVar50._8_4_ + auVar32._12_4_;
    auVar51._12_4_ = auVar50._12_4_ + auVar36._0_4_;
    auVar37 = sha256msg1_sha(auVar37,auVar32);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar7);
    auVar8._0_4_ = DAT_00104800 + auVar36._0_4_;
    auVar8._4_4_ = DAT_00104804 + auVar36._4_4_;
    auVar8._8_4_ = DAT_00104808 + auVar36._8_4_;
    auVar8._12_4_ = DAT_0010480c + auVar36._12_4_;
    auVar50 = sha256msg2_sha(auVar51,auVar36);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar8);
    auVar9._4_4_ = auVar8._12_4_;
    auVar9._0_4_ = auVar8._8_4_;
    auVar9._8_4_ = auVar8._0_4_;
    auVar9._12_4_ = auVar8._0_4_;
    auVar39._0_4_ = auVar37._0_4_ + auVar36._4_4_;
    auVar39._4_4_ = auVar37._4_4_ + auVar36._8_4_;
    auVar39._8_4_ = auVar37._8_4_ + auVar36._12_4_;
    auVar39._12_4_ = auVar37._12_4_ + auVar50._0_4_;
    auVar32 = sha256msg1_sha(auVar32,auVar36);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar9);
    auVar10._0_4_ = DAT_00104820 + auVar50._0_4_;
    auVar10._4_4_ = DAT_00104824 + auVar50._4_4_;
    auVar10._8_4_ = DAT_00104828 + auVar50._8_4_;
    auVar10._12_4_ = DAT_0010482c + auVar50._12_4_;
    auVar37 = sha256msg2_sha(auVar39,auVar50);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar10);
    auVar11._4_4_ = auVar10._12_4_;
    auVar11._0_4_ = auVar10._8_4_;
    auVar11._8_4_ = auVar10._0_4_;
    auVar11._12_4_ = auVar10._0_4_;
    auVar43._0_4_ = auVar32._0_4_ + auVar50._4_4_;
    auVar43._4_4_ = auVar32._4_4_ + auVar50._8_4_;
    auVar43._8_4_ = auVar32._8_4_ + auVar50._12_4_;
    auVar43._12_4_ = auVar32._12_4_ + auVar37._0_4_;
    auVar36 = sha256msg1_sha(auVar36,auVar50);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar11);
    auVar12._0_4_ = DAT_00104840 + auVar37._0_4_;
    auVar12._4_4_ = DAT_00104844 + auVar37._4_4_;
    auVar12._8_4_ = DAT_00104848 + auVar37._8_4_;
    auVar12._12_4_ = DAT_0010484c + auVar37._12_4_;
    auVar32 = sha256msg2_sha(auVar43,auVar37);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar12);
    auVar13._4_4_ = auVar12._12_4_;
    auVar13._0_4_ = auVar12._8_4_;
    auVar13._8_4_ = auVar12._0_4_;
    auVar13._12_4_ = auVar12._0_4_;
    auVar47._0_4_ = auVar36._0_4_ + auVar37._4_4_;
    auVar47._4_4_ = auVar36._4_4_ + auVar37._8_4_;
    auVar47._8_4_ = auVar36._8_4_ + auVar37._12_4_;
    auVar47._12_4_ = auVar36._12_4_ + auVar32._0_4_;
    auVar50 = sha256msg1_sha(auVar50,auVar37);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar13);
    auVar14._0_4_ = DAT_00104860 + auVar32._0_4_;
    auVar14._4_4_ = DAT_00104864 + auVar32._4_4_;
    auVar14._8_4_ = DAT_00104868 + auVar32._8_4_;
    auVar14._12_4_ = DAT_0010486c + auVar32._12_4_;
    auVar36 = sha256msg2_sha(auVar47,auVar32);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar14);
    auVar15._4_4_ = auVar14._12_4_;
    auVar15._0_4_ = auVar14._8_4_;
    auVar15._8_4_ = auVar14._0_4_;
    auVar15._12_4_ = auVar14._0_4_;
    auVar52._0_4_ = auVar50._0_4_ + auVar32._4_4_;
    auVar52._4_4_ = auVar50._4_4_ + auVar32._8_4_;
    auVar52._8_4_ = auVar50._8_4_ + auVar32._12_4_;
    auVar52._12_4_ = auVar50._12_4_ + auVar36._0_4_;
    auVar37 = sha256msg1_sha(auVar37,auVar32);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar15);
    auVar16._0_4_ = DAT_00104880 + auVar36._0_4_;
    auVar16._4_4_ = DAT_00104884 + auVar36._4_4_;
    auVar16._8_4_ = DAT_00104888 + auVar36._8_4_;
    auVar16._12_4_ = DAT_0010488c + auVar36._12_4_;
    auVar50 = sha256msg2_sha(auVar52,auVar36);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar16);
    auVar17._4_4_ = auVar16._12_4_;
    auVar17._0_4_ = auVar16._8_4_;
    auVar17._8_4_ = auVar16._0_4_;
    auVar17._12_4_ = auVar16._0_4_;
    auVar40._0_4_ = auVar37._0_4_ + auVar36._4_4_;
    auVar40._4_4_ = auVar37._4_4_ + auVar36._8_4_;
    auVar40._8_4_ = auVar37._8_4_ + auVar36._12_4_;
    auVar40._12_4_ = auVar37._12_4_ + auVar50._0_4_;
    auVar32 = sha256msg1_sha(auVar32,auVar36);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar17);
    auVar18._0_4_ = DAT_001048a0 + auVar50._0_4_;
    auVar18._4_4_ = DAT_001048a4 + auVar50._4_4_;
    auVar18._8_4_ = DAT_001048a8 + auVar50._8_4_;
    auVar18._12_4_ = DAT_001048ac + auVar50._12_4_;
    auVar37 = sha256msg2_sha(auVar40,auVar50);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar18);
    auVar19._4_4_ = auVar18._12_4_;
    auVar19._0_4_ = auVar18._8_4_;
    auVar19._8_4_ = auVar18._0_4_;
    auVar19._12_4_ = auVar18._0_4_;
    auVar44._0_4_ = auVar32._0_4_ + auVar50._4_4_;
    auVar44._4_4_ = auVar32._4_4_ + auVar50._8_4_;
    auVar44._8_4_ = auVar32._8_4_ + auVar50._12_4_;
    auVar44._12_4_ = auVar32._12_4_ + auVar37._0_4_;
    auVar36 = sha256msg1_sha(auVar36,auVar50);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar19);
    auVar20._0_4_ = _DAT_001048c0 + auVar37._0_4_;
    auVar20._4_4_ = _UNK_001048c4 + auVar37._4_4_;
    auVar20._8_4_ = _UNK_001048c8 + auVar37._8_4_;
    auVar20._12_4_ = _UNK_001048cc + auVar37._12_4_;
    auVar32 = sha256msg2_sha(auVar44,auVar37);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar20);
    auVar21._4_4_ = auVar20._12_4_;
    auVar21._0_4_ = auVar20._8_4_;
    auVar21._8_4_ = auVar20._0_4_;
    auVar21._12_4_ = auVar20._0_4_;
    auVar48._0_4_ = auVar36._0_4_ + auVar37._4_4_;
    auVar48._4_4_ = auVar36._4_4_ + auVar37._8_4_;
    auVar48._8_4_ = auVar36._8_4_ + auVar37._12_4_;
    auVar48._12_4_ = auVar36._12_4_ + auVar32._0_4_;
    auVar36 = sha256msg1_sha(auVar50,auVar37);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar21);
    auVar22._0_4_ = _DAT_001048e0 + auVar32._0_4_;
    auVar22._4_4_ = _UNK_001048e4 + auVar32._4_4_;
    auVar22._8_4_ = _UNK_001048e8 + auVar32._8_4_;
    auVar22._12_4_ = _UNK_001048ec + auVar32._12_4_;
    auVar37 = sha256msg2_sha(auVar48,auVar32);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar22);
    auVar23._4_4_ = auVar22._12_4_;
    auVar23._0_4_ = auVar22._8_4_;
    auVar23._8_4_ = auVar22._0_4_;
    auVar23._12_4_ = auVar22._0_4_;
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar23);
    auVar53._0_4_ = auVar36._0_4_ + auVar32._4_4_;
    auVar53._4_4_ = auVar36._4_4_ + auVar32._8_4_;
    auVar53._8_4_ = auVar36._8_4_ + auVar32._12_4_;
    auVar53._12_4_ = auVar36._12_4_ + auVar37._0_4_;
    auVar24._0_4_ = _DAT_00104900 + auVar37._0_4_;
    auVar24._4_4_ = _UNK_00104904 + auVar37._4_4_;
    auVar24._8_4_ = _UNK_00104908 + auVar37._8_4_;
    auVar24._12_4_ = _UNK_0010490c + auVar37._12_4_;
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar24);
    auVar25._4_4_ = auVar24._12_4_;
    auVar25._0_4_ = auVar24._8_4_;
    auVar25._8_4_ = auVar24._0_4_;
    auVar25._12_4_ = auVar24._0_4_;
    auVar37 = sha256msg2_sha(auVar53,auVar37);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar25);
    auVar26._0_4_ = _DAT_00104920 + auVar37._0_4_;
    auVar26._4_4_ = _UNK_00104924 + auVar37._4_4_;
    auVar26._8_4_ = _UNK_00104928 + auVar37._8_4_;
    auVar26._12_4_ = _UNK_0010492c + auVar37._12_4_;
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar26);
    auVar27._4_4_ = auVar26._12_4_;
    auVar27._0_4_ = auVar26._8_4_;
    auVar27._8_4_ = auVar26._0_4_;
    auVar27._12_4_ = auVar26._0_4_;
    param_3 = param_3 + -1;
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar27);
    auVar34._0_4_ = auVar33._0_4_ + auVar31._0_4_;
    auVar34._4_4_ = auVar33._4_4_ + auVar31._4_4_;
    auVar34._8_4_ = auVar33._8_4_ + auVar31._8_4_;
    auVar34._12_4_ = auVar33._12_4_ + auVar31._12_4_;
    auVar29._0_4_ = auVar28._0_4_ + auVar30._0_4_;
    auVar29._4_4_ = auVar28._4_4_ + auVar30._4_4_;
    auVar29._8_4_ = auVar28._8_4_ + auVar30._8_4_;
    auVar29._12_4_ = auVar28._12_4_ + auVar30._12_4_;
    auVar30 = auVar29;
    auVar31 = auVar34;
  } while (param_3 != 0);
  auVar35._4_4_ = auVar34._0_4_;
  auVar35._0_4_ = auVar34._4_4_;
  auVar35._8_4_ = auVar34._12_4_;
  auVar35._12_4_ = auVar34._8_4_;
  auVar3._4_4_ = auVar29._8_4_;
  auVar3._0_4_ = auVar29._12_4_;
  auVar3._8_4_ = auVar29._4_4_;
  auVar3._12_4_ = auVar29._0_4_;
  auVar4._4_8_ = auVar29._8_8_;
  auVar4._0_4_ = auVar29._0_4_;
  auVar30._0_8_ = auVar4._0_8_ << 0x20;
  auVar30._8_4_ = auVar29._12_4_;
  auVar30._12_4_ = auVar29._8_4_;
  auVar3._16_16_ = auVar35;
  *param_1 = auVar30._8_8_;
  param_1[1] = auVar35._8_8_;
  *(undefined1 (*) [16])(param_1 + 2) = auVar3._8_16_;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00101c08) */
/* WARNING: Removing unreachable block (ram,0x00101e0e) */
/* WARNING: Removing unreachable block (ram,0x001019fa) */
/* WARNING: Removing unreachable block (ram,0x001017f5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sha256_block_data_order_ssse3(uint *param_1,undefined1 (*param_2) [16],long param_3)

{
  char *pcVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar20;
  uint uVar21;
  undefined1 auVar19 [16];
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint uVar35;
  uint uVar60;
  uint uVar61;
  uint uVar62;
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
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  
  pauVar2 = param_2 + param_3 * 4;
  uVar3 = *param_1;
  uVar6 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar15 = param_1[4];
  uVar14 = param_1[5];
  uVar13 = param_1[6];
  uVar12 = param_1[7];
  do {
    auVar16 = pshufb(*param_2,_DAT_00104940);
    auVar17 = pshufb(param_2[1],_DAT_00104940);
    auVar18 = pshufb(param_2[2],_DAT_00104940);
    local_c0 = K256 + auVar16._0_4_;
    iStack_bc = DAT_00104744 + auVar16._4_4_;
    iStack_b8 = DAT_00104748 + auVar16._8_4_;
    iStack_b4 = DAT_0010474c + auVar16._12_4_;
    auVar19 = pshufb(param_2[3],_DAT_00104940);
    local_b0 = DAT_00104760 + auVar17._0_4_;
    iStack_ac = DAT_00104764 + auVar17._4_4_;
    iStack_a8 = DAT_00104768 + auVar17._8_4_;
    iStack_a4 = DAT_0010476c + auVar17._12_4_;
    local_a0 = DAT_00104780 + auVar18._0_4_;
    iStack_9c = DAT_00104784 + auVar18._4_4_;
    iStack_98 = DAT_00104788 + auVar18._8_4_;
    iStack_94 = DAT_0010478c + auVar18._12_4_;
    local_90 = DAT_001047a0 + auVar19._0_4_;
    iStack_8c = DAT_001047a4 + auVar19._4_4_;
    iStack_88 = DAT_001047a8 + auVar19._8_4_;
    iStack_84 = DAT_001047ac + auVar19._12_4_;
    uVar8 = uVar6 ^ uVar4;
    piVar7 = &K256;
    do {
      uVar10 = (uVar15 >> 0xe | uVar15 << 0x12) ^ uVar15;
      uVar11 = (uVar3 >> 9 | uVar3 << 0x17) ^ uVar3;
      uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar15;
      uVar23 = auVar16._4_4_;
      uVar24 = auVar16._8_4_;
      uVar25 = auVar16._12_4_;
      uVar26 = auVar17._0_4_;
      uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar3;
      iVar9 = uVar12 + local_c0 + ((uVar14 ^ uVar13) & uVar15 ^ uVar13) +
              (uVar10 >> 6 | uVar10 << 0x1a);
      uVar35 = auVar18._4_4_;
      uVar60 = auVar18._8_4_;
      uVar61 = auVar18._12_4_;
      uVar62 = auVar19._0_4_;
      uVar5 = uVar5 + iVar9;
      uVar20 = auVar19._4_4_;
      uVar21 = auVar19._8_4_;
      uVar22 = auVar19._12_4_;
      auVar36._0_8_ = CONCAT44(uVar21,uVar21);
      auVar36._8_4_ = uVar22;
      auVar36._12_4_ = uVar22;
      uVar12 = (uVar11 >> 2 | uVar11 << 0x1e) + iVar9 + (uVar8 & (uVar3 ^ uVar6) ^ uVar6);
      uVar8 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
      uVar10 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar5;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar12;
      auVar37._0_4_ = uVar21 >> 10;
      auVar37._4_4_ = 0;
      auVar37._8_4_ = uVar22 >> 10;
      auVar37._12_4_ = uVar22 >> 10;
      iVar9 = uVar13 + iStack_bc + ((uVar15 ^ uVar14) & uVar5 ^ uVar14) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      uVar4 = uVar4 + iVar9;
      auVar27._0_8_ = auVar36._0_8_ >> 0x11;
      auVar27._8_8_ = auVar36._8_8_ >> 0x11;
      uVar13 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar3 ^ uVar6) & (uVar12 ^ uVar3) ^ uVar3)
      ;
      auVar38._0_8_ = auVar36._0_8_ >> 0x13;
      auVar38._8_8_ = auVar36._8_8_ >> 0x13;
      uVar8 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
      auVar38 = auVar37 ^ auVar27 ^ auVar38;
      uVar10 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar4;
      auVar16._0_4_ =
           auVar16._0_4_ + uVar35 +
           (uVar23 >> 3 ^ uVar23 >> 7 ^ uVar23 << 0xe ^ uVar23 >> 0x12 ^ uVar23 << 0x19) +
           auVar38._0_4_;
      auVar16._4_4_ =
           uVar23 + uVar60 +
           (uVar24 >> 3 ^ uVar24 >> 7 ^ uVar24 << 0xe ^ uVar24 >> 0x12 ^ uVar24 << 0x19) +
           auVar38._8_4_;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar13;
      iVar9 = uVar14 + iStack_b8 + ((uVar5 ^ uVar15) & uVar4 ^ uVar15) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      auVar39._0_8_ = CONCAT44(auVar16._0_4_,auVar16._0_4_);
      auVar39._8_4_ = auVar16._4_4_;
      auVar39._12_4_ = auVar16._4_4_;
      uVar6 = uVar6 + iVar9;
      auVar40._0_4_ = auVar16._0_4_ >> 10;
      auVar40._4_4_ = 0;
      auVar40._8_4_ = auVar16._4_4_ >> 10;
      auVar40._12_4_ = auVar16._4_4_ >> 10;
      uVar14 = (uVar10 >> 2 | uVar10 << 0x1e) +
               iVar9 + ((uVar12 ^ uVar3) & (uVar13 ^ uVar12) ^ uVar12);
      auVar28._0_8_ = auVar39._0_8_ >> 0x11;
      auVar28._8_8_ = auVar39._8_8_ >> 0x11;
      uVar8 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
      uVar10 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
      auVar41._0_8_ = auVar39._0_8_ >> 0x13;
      auVar41._8_8_ = auVar39._8_8_ >> 0x13;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar6;
      auVar41 = auVar40 ^ auVar28 ^ auVar41;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar14;
      iVar9 = uVar15 + iStack_b4 + ((uVar4 ^ uVar5) & uVar6 ^ uVar5) + (uVar8 >> 6 | uVar8 << 0x1a);
      auVar16._8_4_ =
           uVar24 + uVar61 +
           (uVar25 >> 3 ^ uVar25 >> 7 ^ uVar25 << 0xe ^ uVar25 >> 0x12 ^ uVar25 << 0x19) +
           auVar41._0_4_;
      auVar16._12_4_ =
           uVar25 + uVar62 +
           (uVar26 >> 3 ^ uVar26 >> 7 ^ uVar26 << 0xe ^ uVar26 >> 0x12 ^ uVar26 << 0x19) +
           auVar41._8_4_;
      uVar3 = uVar3 + iVar9;
      local_c0 = piVar7[0x20] + auVar16._0_4_;
      iStack_bc = piVar7[0x21] + auVar16._4_4_;
      iStack_b8 = piVar7[0x22] + auVar16._8_4_;
      iStack_b4 = piVar7[0x23] + auVar16._12_4_;
      uVar15 = (uVar10 >> 2 | uVar10 << 0x1e) +
               iVar9 + ((uVar13 ^ uVar12) & (uVar14 ^ uVar13) ^ uVar13);
      uVar8 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
      uVar10 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar3;
      uVar11 = auVar17._4_4_;
      uVar23 = auVar17._8_4_;
      uVar24 = auVar17._12_4_;
      uVar25 = auVar18._0_4_;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar15;
      iVar9 = uVar5 + local_b0 + ((uVar6 ^ uVar4) & uVar3 ^ uVar4) + (uVar8 >> 6 | uVar8 << 0x1a);
      uVar12 = uVar12 + iVar9;
      auVar42._0_8_ = CONCAT44(auVar16._8_4_,auVar16._8_4_);
      auVar42._8_4_ = auVar16._12_4_;
      auVar42._12_4_ = auVar16._12_4_;
      uVar5 = (uVar10 >> 2 | uVar10 << 0x1e) +
              iVar9 + ((uVar14 ^ uVar13) & (uVar15 ^ uVar14) ^ uVar14);
      uVar8 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
      uVar10 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar12;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar5;
      auVar43._0_4_ = auVar16._8_4_ >> 10;
      auVar43._4_4_ = 0;
      auVar43._8_4_ = auVar16._12_4_ >> 10;
      auVar43._12_4_ = auVar16._12_4_ >> 10;
      iVar9 = uVar4 + iStack_ac + ((uVar3 ^ uVar6) & uVar12 ^ uVar6) + (uVar8 >> 6 | uVar8 << 0x1a);
      uVar13 = uVar13 + iVar9;
      auVar29._0_8_ = auVar42._0_8_ >> 0x11;
      auVar29._8_8_ = auVar42._8_8_ >> 0x11;
      uVar4 = (uVar10 >> 2 | uVar10 << 0x1e) +
              iVar9 + ((uVar15 ^ uVar14) & (uVar5 ^ uVar15) ^ uVar15);
      auVar44._0_8_ = auVar42._0_8_ >> 0x13;
      auVar44._8_8_ = auVar42._8_8_ >> 0x13;
      uVar8 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
      auVar44 = auVar43 ^ auVar29 ^ auVar44;
      uVar10 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar13;
      auVar17._0_4_ =
           uVar26 + uVar20 +
           (uVar11 >> 3 ^ uVar11 >> 7 ^ uVar11 << 0xe ^ uVar11 >> 0x12 ^ uVar11 << 0x19) +
           auVar44._0_4_;
      auVar17._4_4_ =
           uVar11 + uVar21 +
           (uVar23 >> 3 ^ uVar23 >> 7 ^ uVar23 << 0xe ^ uVar23 >> 0x12 ^ uVar23 << 0x19) +
           auVar44._8_4_;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar4;
      iVar9 = uVar6 + iStack_a8 + ((uVar12 ^ uVar3) & uVar13 ^ uVar3) + (uVar8 >> 6 | uVar8 << 0x1a)
      ;
      auVar45._0_8_ = CONCAT44(auVar17._0_4_,auVar17._0_4_);
      auVar45._8_4_ = auVar17._4_4_;
      auVar45._12_4_ = auVar17._4_4_;
      uVar14 = uVar14 + iVar9;
      auVar46._0_4_ = auVar17._0_4_ >> 10;
      auVar46._4_4_ = 0;
      auVar46._8_4_ = auVar17._4_4_ >> 10;
      auVar46._12_4_ = auVar17._4_4_ >> 10;
      uVar6 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar5 ^ uVar15) & (uVar4 ^ uVar5) ^ uVar5);
      auVar30._0_8_ = auVar45._0_8_ >> 0x11;
      auVar30._8_8_ = auVar45._8_8_ >> 0x11;
      uVar8 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
      uVar10 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
      auVar47._0_8_ = auVar45._0_8_ >> 0x13;
      auVar47._8_8_ = auVar45._8_8_ >> 0x13;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar14;
      auVar47 = auVar46 ^ auVar30 ^ auVar47;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar6;
      iVar9 = uVar3 + iStack_a4 + ((uVar13 ^ uVar12) & uVar14 ^ uVar12) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      auVar17._8_4_ =
           uVar23 + uVar22 +
           (uVar24 >> 3 ^ uVar24 >> 7 ^ uVar24 << 0xe ^ uVar24 >> 0x12 ^ uVar24 << 0x19) +
           auVar47._0_4_;
      auVar17._12_4_ =
           uVar24 + auVar16._0_4_ +
           (uVar25 >> 3 ^ uVar25 >> 7 ^ uVar25 << 0xe ^ uVar25 >> 0x12 ^ uVar25 << 0x19) +
           auVar47._8_4_;
      uVar15 = uVar15 + iVar9;
      local_b0 = piVar7[0x28] + auVar17._0_4_;
      iStack_ac = piVar7[0x29] + auVar17._4_4_;
      iStack_a8 = piVar7[0x2a] + auVar17._8_4_;
      iStack_a4 = piVar7[0x2b] + auVar17._12_4_;
      uVar3 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar4 ^ uVar5) & (uVar6 ^ uVar4) ^ uVar4);
      uVar8 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
      uVar10 = (uVar3 >> 9 | uVar3 * 0x800000) ^ uVar3;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar15;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar3;
      iVar9 = uVar12 + local_a0 + ((uVar14 ^ uVar13) & uVar15 ^ uVar13) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      uVar5 = uVar5 + iVar9;
      auVar48._0_8_ = CONCAT44(auVar17._8_4_,auVar17._8_4_);
      auVar48._8_4_ = auVar17._12_4_;
      auVar48._12_4_ = auVar17._12_4_;
      uVar12 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar6 ^ uVar4) & (uVar3 ^ uVar6) ^ uVar6);
      uVar8 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
      uVar10 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar5;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar12;
      auVar49._0_4_ = auVar17._8_4_ >> 10;
      auVar49._4_4_ = 0;
      auVar49._8_4_ = auVar17._12_4_ >> 10;
      auVar49._12_4_ = auVar17._12_4_ >> 10;
      iVar9 = uVar13 + iStack_9c + ((uVar15 ^ uVar14) & uVar5 ^ uVar14) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      uVar4 = uVar4 + iVar9;
      auVar31._0_8_ = auVar48._0_8_ >> 0x11;
      auVar31._8_8_ = auVar48._8_8_ >> 0x11;
      uVar13 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar3 ^ uVar6) & (uVar12 ^ uVar3) ^ uVar3)
      ;
      auVar50._0_8_ = auVar48._0_8_ >> 0x13;
      auVar50._8_8_ = auVar48._8_8_ >> 0x13;
      uVar8 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
      auVar50 = auVar49 ^ auVar31 ^ auVar50;
      uVar10 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar4;
      auVar18._0_4_ =
           uVar25 + auVar16._4_4_ +
           (uVar35 >> 3 ^ uVar35 >> 7 ^ uVar35 << 0xe ^ uVar35 >> 0x12 ^ uVar35 << 0x19) +
           auVar50._0_4_;
      auVar18._4_4_ =
           uVar35 + auVar16._8_4_ +
           (uVar60 >> 3 ^ uVar60 >> 7 ^ uVar60 << 0xe ^ uVar60 >> 0x12 ^ uVar60 << 0x19) +
           auVar50._8_4_;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar13;
      iVar9 = uVar14 + iStack_98 + ((uVar5 ^ uVar15) & uVar4 ^ uVar15) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      auVar51._0_8_ = CONCAT44(auVar18._0_4_,auVar18._0_4_);
      auVar51._8_4_ = auVar18._4_4_;
      auVar51._12_4_ = auVar18._4_4_;
      uVar6 = uVar6 + iVar9;
      auVar52._0_4_ = auVar18._0_4_ >> 10;
      auVar52._4_4_ = 0;
      auVar52._8_4_ = auVar18._4_4_ >> 10;
      auVar52._12_4_ = auVar18._4_4_ >> 10;
      uVar14 = (uVar10 >> 2 | uVar10 << 0x1e) +
               iVar9 + ((uVar12 ^ uVar3) & (uVar13 ^ uVar12) ^ uVar12);
      auVar32._0_8_ = auVar51._0_8_ >> 0x11;
      auVar32._8_8_ = auVar51._8_8_ >> 0x11;
      uVar8 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
      uVar10 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
      auVar53._0_8_ = auVar51._0_8_ >> 0x13;
      auVar53._8_8_ = auVar51._8_8_ >> 0x13;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar6;
      auVar53 = auVar52 ^ auVar32 ^ auVar53;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar14;
      iVar9 = uVar15 + iStack_94 + ((uVar4 ^ uVar5) & uVar6 ^ uVar5) + (uVar8 >> 6 | uVar8 << 0x1a);
      auVar18._8_4_ =
           uVar60 + auVar16._12_4_ +
           (uVar61 >> 3 ^ uVar61 >> 7 ^ uVar61 << 0xe ^ uVar61 >> 0x12 ^ uVar61 << 0x19) +
           auVar53._0_4_;
      auVar18._12_4_ =
           uVar61 + auVar17._0_4_ +
           (uVar62 >> 3 ^ uVar62 >> 7 ^ uVar62 << 0xe ^ uVar62 >> 0x12 ^ uVar62 << 0x19) +
           auVar53._8_4_;
      uVar3 = uVar3 + iVar9;
      local_a0 = piVar7[0x30] + auVar18._0_4_;
      iStack_9c = piVar7[0x31] + auVar18._4_4_;
      iStack_98 = piVar7[0x32] + auVar18._8_4_;
      iStack_94 = piVar7[0x33] + auVar18._12_4_;
      uVar15 = (uVar10 >> 2 | uVar10 << 0x1e) +
               iVar9 + ((uVar13 ^ uVar12) & (uVar14 ^ uVar13) ^ uVar13);
      uVar8 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
      uVar10 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar3;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar15;
      iVar9 = uVar5 + local_90 + ((uVar6 ^ uVar4) & uVar3 ^ uVar4) + (uVar8 >> 6 | uVar8 << 0x1a);
      uVar12 = uVar12 + iVar9;
      auVar54._0_8_ = CONCAT44(auVar18._8_4_,auVar18._8_4_);
      auVar54._8_4_ = auVar18._12_4_;
      auVar54._12_4_ = auVar18._12_4_;
      uVar5 = (uVar10 >> 2 | uVar10 << 0x1e) +
              iVar9 + ((uVar14 ^ uVar13) & (uVar15 ^ uVar14) ^ uVar14);
      uVar8 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
      uVar10 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar12;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar5;
      auVar55._0_4_ = auVar18._8_4_ >> 10;
      auVar55._4_4_ = 0;
      auVar55._8_4_ = auVar18._12_4_ >> 10;
      auVar55._12_4_ = auVar18._12_4_ >> 10;
      iVar9 = uVar4 + iStack_8c + ((uVar3 ^ uVar6) & uVar12 ^ uVar6) + (uVar8 >> 6 | uVar8 << 0x1a);
      uVar13 = uVar13 + iVar9;
      auVar33._0_8_ = auVar54._0_8_ >> 0x11;
      auVar33._8_8_ = auVar54._8_8_ >> 0x11;
      uVar4 = (uVar10 >> 2 | uVar10 << 0x1e) +
              iVar9 + ((uVar15 ^ uVar14) & (uVar5 ^ uVar15) ^ uVar15);
      auVar56._0_8_ = auVar54._0_8_ >> 0x13;
      auVar56._8_8_ = auVar54._8_8_ >> 0x13;
      uVar8 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
      auVar56 = auVar55 ^ auVar33 ^ auVar56;
      uVar10 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar13;
      auVar19._0_4_ =
           uVar62 + auVar17._4_4_ +
           (uVar20 >> 3 ^ uVar20 >> 7 ^ uVar20 << 0xe ^ uVar20 >> 0x12 ^ uVar20 << 0x19) +
           auVar56._0_4_;
      auVar19._4_4_ =
           uVar20 + auVar17._8_4_ +
           (uVar21 >> 3 ^ uVar21 >> 7 ^ uVar21 << 0xe ^ uVar21 >> 0x12 ^ uVar21 << 0x19) +
           auVar56._8_4_;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar4;
      iVar9 = uVar6 + iStack_88 + ((uVar12 ^ uVar3) & uVar13 ^ uVar3) + (uVar8 >> 6 | uVar8 << 0x1a)
      ;
      auVar57._0_8_ = CONCAT44(auVar19._0_4_,auVar19._0_4_);
      auVar57._8_4_ = auVar19._4_4_;
      auVar57._12_4_ = auVar19._4_4_;
      uVar14 = uVar14 + iVar9;
      auVar58._0_4_ = auVar19._0_4_ >> 10;
      auVar58._4_4_ = 0;
      auVar58._8_4_ = auVar19._4_4_ >> 10;
      auVar58._12_4_ = auVar19._4_4_ >> 10;
      uVar6 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar5 ^ uVar15) & (uVar4 ^ uVar5) ^ uVar5);
      auVar34._0_8_ = auVar57._0_8_ >> 0x11;
      auVar34._8_8_ = auVar57._8_8_ >> 0x11;
      uVar8 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
      uVar11 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
      auVar59._0_8_ = auVar57._0_8_ >> 0x13;
      auVar59._8_8_ = auVar57._8_8_ >> 0x13;
      uVar10 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar14;
      auVar59 = auVar58 ^ auVar34 ^ auVar59;
      uVar8 = uVar6 ^ uVar4;
      uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar6;
      iVar9 = uVar3 + iStack_84 + ((uVar13 ^ uVar12) & uVar14 ^ uVar12) +
              (uVar10 >> 6 | uVar10 << 0x1a);
      auVar19._8_4_ =
           uVar21 + auVar17._12_4_ +
           (uVar22 >> 3 ^ uVar22 >> 7 ^ uVar22 << 0xe ^ uVar22 >> 0x12 ^ uVar22 << 0x19) +
           auVar59._0_4_;
      auVar19._12_4_ =
           uVar22 + auVar18._0_4_ +
           (auVar16._0_4_ >> 3 ^ auVar16._0_4_ >> 7 ^ auVar16._0_4_ * 0x4000 ^ auVar16._0_4_ >> 0x12
           ^ auVar16._0_4_ * 0x2000000) + auVar59._8_4_;
      uVar15 = uVar15 + iVar9;
      local_90 = piVar7[0x38] + auVar19._0_4_;
      iStack_8c = piVar7[0x39] + auVar19._4_4_;
      iStack_88 = piVar7[0x3a] + auVar19._8_4_;
      iStack_84 = piVar7[0x3b] + auVar19._12_4_;
      uVar3 = (uVar11 >> 2 | uVar11 << 0x1e) + iVar9 + ((uVar4 ^ uVar5) & uVar8 ^ uVar4);
      pcVar1 = (char *)((long)piVar7 + 0x103);
      piVar7 = piVar7 + 0x20;
    } while (*pcVar1 != '\0');
    uVar10 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
    uVar11 = (uVar3 >> 9 | uVar3 * 0x800000) ^ uVar3;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar15;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar3;
    iVar9 = uVar12 + local_c0 + ((uVar14 ^ uVar13) & uVar15 ^ uVar13) +
            (uVar10 >> 6 | uVar10 << 0x1a);
    uVar5 = uVar5 + iVar9;
    uVar12 = (uVar11 >> 2 | uVar11 << 0x1e) + iVar9 + (uVar8 & (uVar3 ^ uVar6) ^ uVar6);
    uVar8 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
    uVar10 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar5;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar12;
    iVar9 = uVar13 + iStack_bc + ((uVar15 ^ uVar14) & uVar5 ^ uVar14) + (uVar8 >> 6 | uVar8 << 0x1a)
    ;
    uVar4 = uVar4 + iVar9;
    uVar13 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar3 ^ uVar6) & (uVar12 ^ uVar3) ^ uVar3);
    uVar8 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
    uVar10 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar4;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar13;
    iVar9 = uVar14 + iStack_b8 + ((uVar5 ^ uVar15) & uVar4 ^ uVar15) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar6 = uVar6 + iVar9;
    uVar14 = (uVar10 >> 2 | uVar10 << 0x1e) +
             iVar9 + ((uVar12 ^ uVar3) & (uVar13 ^ uVar12) ^ uVar12);
    uVar8 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar10 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar6;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar14;
    iVar9 = uVar15 + iStack_b4 + ((uVar4 ^ uVar5) & uVar6 ^ uVar5) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar3 = uVar3 + iVar9;
    uVar15 = (uVar10 >> 2 | uVar10 << 0x1e) +
             iVar9 + ((uVar13 ^ uVar12) & (uVar14 ^ uVar13) ^ uVar13);
    uVar8 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
    uVar10 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar3;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar15;
    iVar9 = uVar5 + local_b0 + ((uVar6 ^ uVar4) & uVar3 ^ uVar4) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar12 = uVar12 + iVar9;
    uVar5 = (uVar10 >> 2 | uVar10 << 0x1e) +
            iVar9 + ((uVar14 ^ uVar13) & (uVar15 ^ uVar14) ^ uVar14);
    uVar8 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar10 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar12;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar5;
    iVar9 = uVar4 + iStack_ac + ((uVar3 ^ uVar6) & uVar12 ^ uVar6) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar13 = uVar13 + iVar9;
    uVar4 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar15 ^ uVar14) & (uVar5 ^ uVar15) ^ uVar15)
    ;
    uVar8 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
    uVar10 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar13;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar4;
    iVar9 = uVar6 + iStack_a8 + ((uVar12 ^ uVar3) & uVar13 ^ uVar3) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar14 = uVar14 + iVar9;
    uVar6 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar5 ^ uVar15) & (uVar4 ^ uVar5) ^ uVar5);
    uVar8 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
    uVar10 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar14;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar6;
    iVar9 = uVar3 + iStack_a4 + ((uVar13 ^ uVar12) & uVar14 ^ uVar12) + (uVar8 >> 6 | uVar8 << 0x1a)
    ;
    uVar15 = uVar15 + iVar9;
    uVar3 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar4 ^ uVar5) & (uVar6 ^ uVar4) ^ uVar4);
    uVar8 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
    uVar10 = (uVar3 >> 9 | uVar3 * 0x800000) ^ uVar3;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar15;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar3;
    iVar9 = uVar12 + local_a0 + ((uVar14 ^ uVar13) & uVar15 ^ uVar13) + (uVar8 >> 6 | uVar8 << 0x1a)
    ;
    uVar5 = uVar5 + iVar9;
    uVar12 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar6 ^ uVar4) & (uVar3 ^ uVar6) ^ uVar6);
    uVar8 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
    uVar10 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar5;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar12;
    iVar9 = uVar13 + iStack_9c + ((uVar15 ^ uVar14) & uVar5 ^ uVar14) + (uVar8 >> 6 | uVar8 << 0x1a)
    ;
    uVar4 = uVar4 + iVar9;
    uVar13 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar3 ^ uVar6) & (uVar12 ^ uVar3) ^ uVar3);
    uVar8 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
    uVar10 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar4;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar13;
    iVar9 = uVar14 + iStack_98 + ((uVar5 ^ uVar15) & uVar4 ^ uVar15) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar6 = uVar6 + iVar9;
    uVar14 = (uVar10 >> 2 | uVar10 << 0x1e) +
             iVar9 + ((uVar12 ^ uVar3) & (uVar13 ^ uVar12) ^ uVar12);
    uVar8 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar10 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar6;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar14;
    iVar9 = uVar15 + iStack_94 + ((uVar4 ^ uVar5) & uVar6 ^ uVar5) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar3 = uVar3 + iVar9;
    uVar8 = (uVar10 >> 2 | uVar10 << 0x1e) +
            iVar9 + ((uVar13 ^ uVar12) & (uVar14 ^ uVar13) ^ uVar13);
    uVar15 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
    uVar10 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
    uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar3;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar8;
    iVar9 = uVar5 + local_90 + ((uVar6 ^ uVar4) & uVar3 ^ uVar4) + (uVar15 >> 6 | uVar15 << 0x1a);
    uVar12 = uVar12 + iVar9;
    uVar5 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar14 ^ uVar13) & (uVar8 ^ uVar14) ^ uVar14)
    ;
    uVar15 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar10 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
    uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar12;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar5;
    iVar9 = uVar4 + iStack_8c + ((uVar3 ^ uVar6) & uVar12 ^ uVar6) + (uVar15 >> 6 | uVar15 << 0x1a);
    uVar13 = uVar13 + iVar9;
    uVar4 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar8 ^ uVar14) & (uVar5 ^ uVar8) ^ uVar8);
    uVar15 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
    uVar10 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
    uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar13;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar4;
    iVar9 = uVar6 + iStack_88 + ((uVar12 ^ uVar3) & uVar13 ^ uVar3) + (uVar15 >> 6 | uVar15 << 0x1a)
    ;
    uVar14 = uVar14 + iVar9;
    uVar6 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar5 ^ uVar8) & (uVar4 ^ uVar5) ^ uVar5);
    uVar15 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
    uVar10 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar14;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar6;
    iVar9 = uVar3 + iStack_84 + ((uVar13 ^ uVar12) & uVar14 ^ uVar12) +
            (uVar15 >> 6 | uVar15 << 0x1a);
    uVar3 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar4 ^ uVar5) & (uVar6 ^ uVar4) ^ uVar4) +
            *param_1;
    param_2 = param_2 + 4;
    uVar6 = uVar6 + param_1[1];
    uVar4 = uVar4 + param_1[2];
    uVar5 = uVar5 + param_1[3];
    uVar15 = uVar8 + iVar9 + param_1[4];
    uVar14 = uVar14 + param_1[5];
    uVar13 = uVar13 + param_1[6];
    uVar12 = uVar12 + param_1[7];
    *param_1 = uVar3;
    param_1[1] = uVar6;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    param_1[4] = uVar15;
    param_1[5] = uVar14;
    param_1[6] = uVar13;
    param_1[7] = uVar12;
  } while (param_2 < pauVar2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sha256_block_data_order_avx(uint *param_1,undefined1 (*param_2) [16],long param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 (*pauVar6) [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 (*pauVar13) [16];
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
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
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  
  auVar8 = _DAT_00104980;
  auVar7 = _DAT_00104960;
  pauVar1 = param_2 + param_3 * 4;
  uVar9 = *param_1;
  uVar12 = param_1[1];
  uVar10 = param_1[2];
  uVar11 = param_1[3];
  uVar21 = param_1[4];
  uVar20 = param_1[5];
  uVar19 = param_1[6];
  uVar18 = param_1[7];
  do {
    auVar2 = vpshufb_avx(*param_2,_DAT_00104940);
    auVar3 = vpshufb_avx(param_2[1],_DAT_00104940);
    auVar4 = vpshufb_avx(param_2[2],_DAT_00104940);
    local_c0 = vpaddd_avx(auVar2,_K256);
    auVar5 = vpshufb_avx(param_2[3],_DAT_00104940);
    local_b0 = vpaddd_avx(auVar3,_DAT_00104760);
    local_a0 = vpaddd_avx(auVar4,_DAT_00104780);
    local_90 = vpaddd_avx(auVar5,_DAT_001047a0);
    uVar14 = uVar12 ^ uVar10;
    pauVar13 = (undefined1 (*) [16])&K256;
    do {
      auVar28 = vpalignr_avx(auVar3,auVar2,4);
      auVar22 = vpalignr_avx(auVar5,auVar4,4);
      uVar16 = (uVar21 >> 0xe | uVar21 << 0x12) ^ uVar21;
      auVar24 = vpsrld_avx(auVar28,7);
      uVar17 = (uVar9 >> 9 | uVar9 << 0x17) ^ uVar9;
      auVar2 = vpaddd_avx(auVar2,auVar22);
      uVar16 = (uVar16 >> 5 | uVar16 << 0x1b) ^ uVar21;
      auVar27 = vpsrld_avx(auVar28,3);
      auVar22 = vpslld_avx(auVar28,0xe);
      uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar9;
      iVar15 = uVar18 + local_c0._0_4_ + ((uVar20 ^ uVar19) & uVar21 ^ uVar19) +
               (uVar16 >> 6 | uVar16 << 0x1a);
      auVar28 = vpshufd_avx(auVar5,0xfa);
      uVar11 = uVar11 + iVar15;
      auVar25 = vpsrld_avx(auVar24,0xb);
      uVar18 = (uVar17 >> 2 | uVar17 << 0x1e) + iVar15 + (uVar14 & (uVar9 ^ uVar12) ^ uVar12);
      auVar23 = vpslld_avx(auVar22,0xb);
      uVar14 = (uVar11 >> 0xe | uVar11 * 0x40000) ^ uVar11;
      uVar16 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar11;
      auVar26 = vpsrld_avx(auVar28,10);
      auVar28 = vpsrlq_avx(auVar28,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar18;
      auVar2 = vpaddd_avx(auVar2,auVar27 ^ auVar24 ^ auVar22 ^ auVar25 ^ auVar23);
      iVar15 = uVar19 + local_c0._4_4_ + ((uVar21 ^ uVar20) & uVar11 ^ uVar20) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar10 = uVar10 + iVar15;
      auVar22 = vpsrlq_avx(auVar28,2);
      uVar19 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar9 ^ uVar12) & (uVar18 ^ uVar9) ^ uVar9);
      uVar14 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
      auVar28 = vpshufb_avx(auVar26 ^ auVar28 ^ auVar22,auVar7);
      uVar16 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
      auVar2 = vpaddd_avx(auVar2,auVar28);
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar10;
      auVar28 = vpshufd_avx(auVar2,0x50);
      auVar22 = vpsrld_avx(auVar28,10);
      auVar28 = vpsrlq_avx(auVar28,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar19;
      iVar15 = uVar20 + local_c0._8_4_ + ((uVar11 ^ uVar21) & uVar10 ^ uVar21) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar12 = uVar12 + iVar15;
      auVar23 = vpsrlq_avx(auVar28,2);
      uVar20 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar18 ^ uVar9) & (uVar19 ^ uVar18) ^ uVar18);
      auVar28 = vpshufb_avx(auVar22 ^ auVar28 ^ auVar23,auVar8);
      uVar14 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
      auVar2 = vpaddd_avx(auVar2,auVar28);
      uVar16 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
      auVar28 = vpaddd_avx(auVar2,pauVar13[8]);
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar12;
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar20;
      iVar15 = uVar21 + local_c0._12_4_ + ((uVar10 ^ uVar11) & uVar12 ^ uVar11) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar9 = uVar9 + iVar15;
      uVar21 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar19 ^ uVar18) & (uVar20 ^ uVar19) ^ uVar19);
      auVar22 = vpalignr_avx(auVar4,auVar3,4);
      auVar23 = vpalignr_avx(auVar2,auVar5,4);
      uVar14 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
      auVar25 = vpsrld_avx(auVar22,7);
      uVar16 = (uVar21 >> 9 | uVar21 * 0x800000) ^ uVar21;
      auVar3 = vpaddd_avx(auVar3,auVar23);
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar9;
      auVar29 = vpsrld_avx(auVar22,3);
      auVar23 = vpslld_avx(auVar22,0xe);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar21;
      iVar15 = uVar11 + local_b0._0_4_ + ((uVar12 ^ uVar10) & uVar9 ^ uVar10) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      auVar22 = vpshufd_avx(auVar2,0xfa);
      uVar18 = uVar18 + iVar15;
      auVar26 = vpsrld_avx(auVar25,0xb);
      uVar11 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar20 ^ uVar19) & (uVar21 ^ uVar20) ^ uVar20);
      auVar24 = vpslld_avx(auVar23,0xb);
      uVar14 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
      uVar16 = (uVar11 >> 9 | uVar11 * 0x800000) ^ uVar11;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar18;
      auVar27 = vpsrld_avx(auVar22,10);
      auVar22 = vpsrlq_avx(auVar22,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar11;
      auVar3 = vpaddd_avx(auVar3,auVar29 ^ auVar25 ^ auVar23 ^ auVar26 ^ auVar24);
      iVar15 = uVar10 + local_b0._4_4_ + ((uVar9 ^ uVar12) & uVar18 ^ uVar12) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar19 = uVar19 + iVar15;
      auVar23 = vpsrlq_avx(auVar22,2);
      uVar10 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar21 ^ uVar20) & (uVar11 ^ uVar21) ^ uVar21);
      uVar14 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
      auVar22 = vpshufb_avx(auVar27 ^ auVar22 ^ auVar23,auVar7);
      uVar16 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
      auVar3 = vpaddd_avx(auVar3,auVar22);
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar19;
      auVar22 = vpshufd_avx(auVar3,0x50);
      auVar23 = vpsrld_avx(auVar22,10);
      auVar22 = vpsrlq_avx(auVar22,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar10;
      iVar15 = uVar12 + local_b0._8_4_ + ((uVar18 ^ uVar9) & uVar19 ^ uVar9) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar20 = uVar20 + iVar15;
      auVar24 = vpsrlq_avx(auVar22,2);
      uVar12 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar11 ^ uVar21) & (uVar10 ^ uVar11) ^ uVar11);
      auVar22 = vpshufb_avx(auVar23 ^ auVar22 ^ auVar24,auVar8);
      uVar14 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
      auVar3 = vpaddd_avx(auVar3,auVar22);
      uVar16 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
      auVar22 = vpaddd_avx(auVar3,pauVar13[10]);
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar20;
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar12;
      iVar15 = uVar9 + local_b0._12_4_ + ((uVar19 ^ uVar18) & uVar20 ^ uVar18) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar21 = uVar21 + iVar15;
      uVar9 = (uVar16 >> 2 | uVar16 << 0x1e) +
              iVar15 + ((uVar10 ^ uVar11) & (uVar12 ^ uVar10) ^ uVar10);
      auVar23 = vpalignr_avx(auVar5,auVar4,4);
      auVar24 = vpalignr_avx(auVar3,auVar2,4);
      uVar14 = (uVar21 >> 0xe | uVar21 * 0x40000) ^ uVar21;
      auVar26 = vpsrld_avx(auVar23,7);
      uVar16 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
      auVar4 = vpaddd_avx(auVar4,auVar24);
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar21;
      auVar30 = vpsrld_avx(auVar23,3);
      auVar24 = vpslld_avx(auVar23,0xe);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar9;
      iVar15 = uVar18 + local_a0._0_4_ + ((uVar20 ^ uVar19) & uVar21 ^ uVar19) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      auVar23 = vpshufd_avx(auVar3,0xfa);
      uVar11 = uVar11 + iVar15;
      auVar27 = vpsrld_avx(auVar26,0xb);
      uVar18 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar12 ^ uVar10) & (uVar9 ^ uVar12) ^ uVar12);
      auVar25 = vpslld_avx(auVar24,0xb);
      uVar14 = (uVar11 >> 0xe | uVar11 * 0x40000) ^ uVar11;
      uVar16 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar11;
      auVar29 = vpsrld_avx(auVar23,10);
      auVar23 = vpsrlq_avx(auVar23,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar18;
      auVar4 = vpaddd_avx(auVar4,auVar30 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      iVar15 = uVar19 + local_a0._4_4_ + ((uVar21 ^ uVar20) & uVar11 ^ uVar20) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar10 = uVar10 + iVar15;
      auVar24 = vpsrlq_avx(auVar23,2);
      uVar19 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar9 ^ uVar12) & (uVar18 ^ uVar9) ^ uVar9);
      uVar14 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
      auVar23 = vpshufb_avx(auVar29 ^ auVar23 ^ auVar24,auVar7);
      uVar16 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
      auVar4 = vpaddd_avx(auVar4,auVar23);
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar10;
      auVar23 = vpshufd_avx(auVar4,0x50);
      auVar24 = vpsrld_avx(auVar23,10);
      auVar23 = vpsrlq_avx(auVar23,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar19;
      iVar15 = uVar20 + local_a0._8_4_ + ((uVar11 ^ uVar21) & uVar10 ^ uVar21) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar12 = uVar12 + iVar15;
      auVar25 = vpsrlq_avx(auVar23,2);
      uVar20 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar18 ^ uVar9) & (uVar19 ^ uVar18) ^ uVar18);
      auVar23 = vpshufb_avx(auVar24 ^ auVar23 ^ auVar25,auVar8);
      uVar14 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
      auVar4 = vpaddd_avx(auVar4,auVar23);
      uVar16 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
      auVar23 = vpaddd_avx(auVar4,pauVar13[0xc]);
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar12;
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar20;
      iVar15 = uVar21 + local_a0._12_4_ + ((uVar10 ^ uVar11) & uVar12 ^ uVar11) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar9 = uVar9 + iVar15;
      uVar21 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar19 ^ uVar18) & (uVar20 ^ uVar19) ^ uVar19);
      auVar24 = vpalignr_avx(auVar2,auVar5,4);
      auVar25 = vpalignr_avx(auVar4,auVar3,4);
      uVar14 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
      auVar27 = vpsrld_avx(auVar24,7);
      uVar16 = (uVar21 >> 9 | uVar21 * 0x800000) ^ uVar21;
      auVar5 = vpaddd_avx(auVar5,auVar25);
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar9;
      auVar31 = vpsrld_avx(auVar24,3);
      auVar25 = vpslld_avx(auVar24,0xe);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar21;
      iVar15 = uVar11 + local_90._0_4_ + ((uVar12 ^ uVar10) & uVar9 ^ uVar10) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      auVar24 = vpshufd_avx(auVar4,0xfa);
      uVar18 = uVar18 + iVar15;
      auVar29 = vpsrld_avx(auVar27,0xb);
      uVar11 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar20 ^ uVar19) & (uVar21 ^ uVar20) ^ uVar20);
      auVar26 = vpslld_avx(auVar25,0xb);
      uVar14 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
      uVar16 = (uVar11 >> 9 | uVar11 * 0x800000) ^ uVar11;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar18;
      auVar30 = vpsrld_avx(auVar24,10);
      auVar24 = vpsrlq_avx(auVar24,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar11;
      auVar5 = vpaddd_avx(auVar5,auVar31 ^ auVar27 ^ auVar25 ^ auVar29 ^ auVar26);
      iVar15 = uVar10 + local_90._4_4_ + ((uVar9 ^ uVar12) & uVar18 ^ uVar12) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar19 = uVar19 + iVar15;
      auVar25 = vpsrlq_avx(auVar24,2);
      uVar10 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar21 ^ uVar20) & (uVar11 ^ uVar21) ^ uVar21);
      uVar14 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
      auVar24 = vpshufb_avx(auVar30 ^ auVar24 ^ auVar25,auVar7);
      uVar16 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
      auVar5 = vpaddd_avx(auVar5,auVar24);
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar19;
      auVar24 = vpshufd_avx(auVar5,0x50);
      auVar25 = vpsrld_avx(auVar24,10);
      auVar24 = vpsrlq_avx(auVar24,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar10;
      iVar15 = uVar12 + local_90._8_4_ + ((uVar18 ^ uVar9) & uVar19 ^ uVar9) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar20 = uVar20 + iVar15;
      auVar26 = vpsrlq_avx(auVar24,2);
      uVar12 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar11 ^ uVar21) & (uVar10 ^ uVar11) ^ uVar11);
      auVar24 = vpshufb_avx(auVar25 ^ auVar24 ^ auVar26,auVar8);
      uVar14 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
      auVar5 = vpaddd_avx(auVar5,auVar24);
      uVar17 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
      auVar24 = vpaddd_avx(auVar5,pauVar13[0xe]);
      uVar16 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar20;
      uVar14 = uVar12 ^ uVar10;
      uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar12;
      iVar15 = uVar9 + local_90._12_4_ + ((uVar19 ^ uVar18) & uVar20 ^ uVar18) +
               (uVar16 >> 6 | uVar16 << 0x1a);
      uVar21 = uVar21 + iVar15;
      uVar9 = (uVar17 >> 2 | uVar17 << 0x1e) + iVar15 + ((uVar10 ^ uVar11) & uVar14 ^ uVar10);
      pauVar6 = pauVar13 + 0x10;
      pauVar13 = pauVar13 + 8;
      local_c0 = auVar28;
      local_b0 = auVar22;
      local_a0 = auVar23;
      local_90 = auVar24;
    } while (*(char *)((long)*pauVar6 + 3) != '\0');
    uVar16 = (uVar21 >> 0xe | uVar21 * 0x40000) ^ uVar21;
    uVar17 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
    uVar16 = (uVar16 >> 5 | uVar16 << 0x1b) ^ uVar21;
    local_c0._0_4_ = auVar28._0_4_;
    uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar9;
    iVar15 = uVar18 + local_c0._0_4_ + ((uVar20 ^ uVar19) & uVar21 ^ uVar19) +
             (uVar16 >> 6 | uVar16 << 0x1a);
    uVar11 = uVar11 + iVar15;
    uVar18 = (uVar17 >> 2 | uVar17 << 0x1e) + iVar15 + (uVar14 & (uVar9 ^ uVar12) ^ uVar12);
    uVar14 = (uVar11 >> 0xe | uVar11 * 0x40000) ^ uVar11;
    uVar16 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar11;
    local_c0._4_4_ = auVar28._4_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar18;
    iVar15 = uVar19 + local_c0._4_4_ + ((uVar21 ^ uVar20) & uVar11 ^ uVar20) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar10 = uVar10 + iVar15;
    uVar19 = (uVar16 >> 2 | uVar16 << 0x1e) + iVar15 + ((uVar9 ^ uVar12) & (uVar18 ^ uVar9) ^ uVar9)
    ;
    uVar14 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
    uVar16 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar10;
    local_c0._8_4_ = auVar28._8_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar19;
    iVar15 = uVar20 + local_c0._8_4_ + ((uVar11 ^ uVar21) & uVar10 ^ uVar21) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar12 = uVar12 + iVar15;
    uVar20 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar18 ^ uVar9) & (uVar19 ^ uVar18) ^ uVar18);
    uVar14 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar16 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar12;
    local_c0._12_4_ = auVar28._12_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar20;
    iVar15 = uVar21 + local_c0._12_4_ + ((uVar10 ^ uVar11) & uVar12 ^ uVar11) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar9 = uVar9 + iVar15;
    uVar21 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar19 ^ uVar18) & (uVar20 ^ uVar19) ^ uVar19);
    uVar14 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
    uVar16 = (uVar21 >> 9 | uVar21 * 0x800000) ^ uVar21;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar9;
    local_b0._0_4_ = auVar22._0_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar21;
    iVar15 = uVar11 + local_b0._0_4_ + ((uVar12 ^ uVar10) & uVar9 ^ uVar10) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar18 = uVar18 + iVar15;
    uVar11 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar20 ^ uVar19) & (uVar21 ^ uVar20) ^ uVar20);
    uVar14 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
    uVar16 = (uVar11 >> 9 | uVar11 * 0x800000) ^ uVar11;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar18;
    local_b0._4_4_ = auVar22._4_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar11;
    iVar15 = uVar10 + local_b0._4_4_ + ((uVar9 ^ uVar12) & uVar18 ^ uVar12) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar19 = uVar19 + iVar15;
    uVar10 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar21 ^ uVar20) & (uVar11 ^ uVar21) ^ uVar21);
    uVar14 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
    uVar16 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar19;
    local_b0._8_4_ = auVar22._8_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar10;
    iVar15 = uVar12 + local_b0._8_4_ + ((uVar18 ^ uVar9) & uVar19 ^ uVar9) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar20 = uVar20 + iVar15;
    uVar12 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar11 ^ uVar21) & (uVar10 ^ uVar11) ^ uVar11);
    uVar14 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
    uVar16 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar20;
    local_b0._12_4_ = auVar22._12_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar12;
    iVar15 = uVar9 + local_b0._12_4_ + ((uVar19 ^ uVar18) & uVar20 ^ uVar18) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar21 = uVar21 + iVar15;
    uVar9 = (uVar16 >> 2 | uVar16 << 0x1e) +
            iVar15 + ((uVar10 ^ uVar11) & (uVar12 ^ uVar10) ^ uVar10);
    uVar14 = (uVar21 >> 0xe | uVar21 * 0x40000) ^ uVar21;
    uVar16 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar21;
    local_a0._0_4_ = auVar23._0_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar9;
    iVar15 = uVar18 + local_a0._0_4_ + ((uVar20 ^ uVar19) & uVar21 ^ uVar19) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar11 = uVar11 + iVar15;
    uVar18 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar12 ^ uVar10) & (uVar9 ^ uVar12) ^ uVar12);
    uVar14 = (uVar11 >> 0xe | uVar11 * 0x40000) ^ uVar11;
    uVar16 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar11;
    local_a0._4_4_ = auVar23._4_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar18;
    iVar15 = uVar19 + local_a0._4_4_ + ((uVar21 ^ uVar20) & uVar11 ^ uVar20) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar10 = uVar10 + iVar15;
    uVar19 = (uVar16 >> 2 | uVar16 << 0x1e) + iVar15 + ((uVar9 ^ uVar12) & (uVar18 ^ uVar9) ^ uVar9)
    ;
    uVar14 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
    uVar16 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar10;
    local_a0._8_4_ = auVar23._8_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar19;
    iVar15 = uVar20 + local_a0._8_4_ + ((uVar11 ^ uVar21) & uVar10 ^ uVar21) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar12 = uVar12 + iVar15;
    uVar20 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar18 ^ uVar9) & (uVar19 ^ uVar18) ^ uVar18);
    uVar14 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar16 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar12;
    local_a0._12_4_ = auVar23._12_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar20;
    iVar15 = uVar21 + local_a0._12_4_ + ((uVar10 ^ uVar11) & uVar12 ^ uVar11) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar9 = uVar9 + iVar15;
    uVar14 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar19 ^ uVar18) & (uVar20 ^ uVar19) ^ uVar19);
    uVar21 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
    uVar16 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
    uVar21 = (uVar21 >> 5 | uVar21 << 0x1b) ^ uVar9;
    local_90._0_4_ = auVar24._0_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar14;
    iVar15 = uVar11 + local_90._0_4_ + ((uVar12 ^ uVar10) & uVar9 ^ uVar10) +
             (uVar21 >> 6 | uVar21 << 0x1a);
    uVar18 = uVar18 + iVar15;
    uVar11 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar20 ^ uVar19) & (uVar14 ^ uVar20) ^ uVar20);
    uVar21 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
    uVar16 = (uVar11 >> 9 | uVar11 * 0x800000) ^ uVar11;
    uVar21 = (uVar21 >> 5 | uVar21 << 0x1b) ^ uVar18;
    local_90._4_4_ = auVar24._4_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar11;
    iVar15 = uVar10 + local_90._4_4_ + ((uVar9 ^ uVar12) & uVar18 ^ uVar12) +
             (uVar21 >> 6 | uVar21 << 0x1a);
    uVar19 = uVar19 + iVar15;
    uVar10 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar14 ^ uVar20) & (uVar11 ^ uVar14) ^ uVar14);
    uVar21 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
    uVar16 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
    uVar21 = (uVar21 >> 5 | uVar21 << 0x1b) ^ uVar19;
    local_90._8_4_ = auVar24._8_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar10;
    iVar15 = uVar12 + local_90._8_4_ + ((uVar18 ^ uVar9) & uVar19 ^ uVar9) +
             (uVar21 >> 6 | uVar21 << 0x1a);
    uVar20 = uVar20 + iVar15;
    uVar12 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar11 ^ uVar14) & (uVar10 ^ uVar11) ^ uVar11);
    uVar21 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
    uVar16 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    uVar21 = (uVar21 >> 5 | uVar21 << 0x1b) ^ uVar20;
    local_90._12_4_ = auVar24._12_4_;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar12;
    iVar15 = uVar9 + local_90._12_4_ + ((uVar19 ^ uVar18) & uVar20 ^ uVar18) +
             (uVar21 >> 6 | uVar21 << 0x1a);
    uVar9 = (uVar16 >> 2 | uVar16 << 0x1e) +
            iVar15 + ((uVar10 ^ uVar11) & (uVar12 ^ uVar10) ^ uVar10) + *param_1;
    param_2 = param_2 + 4;
    uVar12 = uVar12 + param_1[1];
    uVar10 = uVar10 + param_1[2];
    uVar11 = uVar11 + param_1[3];
    uVar21 = uVar14 + iVar15 + param_1[4];
    uVar20 = uVar20 + param_1[5];
    uVar19 = uVar19 + param_1[6];
    uVar18 = uVar18 + param_1[7];
    *param_1 = uVar9;
    param_1[1] = uVar12;
    param_1[2] = uVar10;
    param_1[3] = uVar11;
    param_1[4] = uVar21;
    param_1[5] = uVar20;
    param_1[6] = uVar19;
    param_1[7] = uVar18;
  } while (param_2 < pauVar1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sha256_block_data_order_avx2(int *param_1,long param_2,long param_3)

{
  undefined1 (*pauVar1) [32];
  int *piVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 (*pauVar12) [32];
  undefined1 (*pauVar13) [32];
  undefined1 (*pauVar14) [32];
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 (*pauVar20) [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auStack_250 [544];
  
  uVar11 = (ulong)auStack_250 & 0xfffffffffffffc00;
  pauVar1 = (undefined1 (*) [32])(param_2 + param_3 * 0x40);
  pauVar12 = (undefined1 (*) [32])(uVar11 + 0x1c0);
  *(int **)(uVar11 + 0x200) = param_1;
  *(long *)(uVar11 + 0x208) = param_2;
  *(undefined1 (**) [32])(uVar11 + 0x210) = pauVar1;
  *(BADSPACEBASE **)(uVar11 + 0x218) = register0x00000020;
  auVar4 = _DAT_00104980;
  auVar3 = _DAT_00104960;
  pauVar14 = (undefined1 (*) [32])(param_2 + 0x40);
  iVar6 = *param_1;
  uVar10 = param_1[1];
  uVar8 = param_1[2];
  pauVar20 = pauVar14;
  if (pauVar14 == pauVar1) {
    pauVar20 = (undefined1 (*) [32])(uVar11 + 0x1c0);
  }
  uVar9 = param_1[3];
  uVar16 = param_1[4];
  uVar17 = param_1[5];
  uVar18 = param_1[6];
  uVar19 = param_1[7];
  do {
    auVar21._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])*pauVar20 +
         ZEXT116(1) * *(undefined1 (*) [16])pauVar14[-2];
    auVar21._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])*pauVar20;
    auVar31._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])(*pauVar20 + 0x10) +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar14[-2] + 0x10);
    auVar31._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])(*pauVar20 + 0x10);
    auVar25 = vpshufb_avx2(auVar21,_DAT_00104940);
    auVar22._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])pauVar20[1] +
         ZEXT116(1) * *(undefined1 (*) [16])pauVar14[-1];
    auVar22._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])pauVar20[1];
    auVar27 = vpshufb_avx2(auVar31,_DAT_00104940);
    auVar23._0_16_ =
         ZEXT116(0) * *(undefined1 (*) [16])(pauVar20[1] + 0x10) +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar14[-1] + 0x10);
    auVar23._16_16_ =
         ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
         ZEXT116(1) * *(undefined1 (*) [16])(pauVar20[1] + 0x10);
    auVar28 = vpshufb_avx2(auVar22,_DAT_00104940);
    auVar21 = vpaddd_avx2(auVar25,_K256);
    auVar29 = vpshufb_avx2(auVar23,_DAT_00104940);
    auVar31 = vpaddd_avx2(auVar27,_DAT_00104760);
    auVar22 = vpaddd_avx2(auVar28,_DAT_00104780);
    auVar23 = vpaddd_avx2(auVar29,_DAT_001047a0);
    *pauVar12 = auVar21;
    uVar5 = 0;
    pauVar12[1] = auVar31;
    *(undefined8 *)(pauVar12[-3] + 0x18) = *(undefined8 *)(pauVar12[2] + 0x18);
    pauVar12[-2] = auVar22;
    uVar15 = uVar10 ^ uVar8;
    pauVar12[-1] = auVar23;
    pauVar1 = pauVar12 + -2;
    pauVar12 = (undefined1 (*) [32])&DAT_001047c0;
    do {
      pauVar13 = pauVar1;
      *(undefined8 *)(pauVar13[-3] + 0x18) = *(undefined8 *)(pauVar13[-1] + 0x18);
      auVar31 = vpalignr_avx2(auVar27,auVar25,4);
      auVar21 = vpalignr_avx2(auVar29,auVar28,4);
      uVar5 = iVar6 + uVar5;
      auVar24 = vpsrld_avx2(auVar31,7);
      auVar21 = vpaddd_avx2(auVar25,auVar21);
      auVar30 = vpsrld_avx2(auVar31,3);
      iVar6 = uVar19 + *(int *)pauVar13[2] + (uVar17 & uVar16) + (~uVar16 & uVar18) +
              ((uVar16 >> 0x19 | uVar16 << 7) ^ (uVar16 >> 0xb | uVar16 << 0x15) ^
              (uVar16 >> 6 | uVar16 << 0x1a));
      auVar22 = vpslld_avx2(auVar31,0xe);
      uVar9 = uVar9 + iVar6;
      auVar31 = vpshufd_avx2(auVar29,0xfa);
      auVar25 = vpsrld_avx2(auVar24,0xb);
      uVar19 = iVar6 + (uVar15 & (uVar5 ^ uVar10) ^ uVar10) +
               ((uVar5 >> 0xd | uVar5 * 0x80000) ^ (uVar5 >> 0x16 | uVar5 * 0x400) ^
               (uVar5 >> 2 | uVar5 * 0x40000000));
      auVar23 = vpslld_avx2(auVar22,0xb);
      auVar26 = vpsrld_avx2(auVar31,10);
      iVar6 = uVar18 + *(int *)(pauVar13[2] + 4) + (uVar16 & uVar9) + (~uVar9 & uVar17) +
              ((uVar9 >> 0x19 | uVar9 * 0x80) ^ (uVar9 >> 0xb | uVar9 * 0x200000) ^
              (uVar9 >> 6 | uVar9 * 0x4000000));
      uVar8 = uVar8 + iVar6;
      auVar31 = vpsrlq_avx2(auVar31,0x11);
      auVar21 = vpaddd_avx2(auVar21,auVar30 ^ auVar24 ^ auVar22 ^ auVar25 ^ auVar23);
      auVar22 = vpsrlq_avx2(auVar31,2);
      uVar18 = iVar6 + ((uVar5 ^ uVar10) & (uVar19 ^ uVar5) ^ uVar5) +
               ((uVar19 >> 0xd | uVar19 * 0x80000) ^ (uVar19 >> 0x16 | uVar19 * 0x400) ^
               (uVar19 >> 2 | uVar19 * 0x40000000));
      auVar31 = vpshufb_avx2(auVar26 ^ auVar31 ^ auVar22,auVar3);
      auVar21 = vpaddd_avx2(auVar21,auVar31);
      iVar6 = uVar17 + *(int *)(pauVar13[2] + 8) + (uVar9 & uVar8) + (~uVar8 & uVar16) +
              ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
              (uVar8 >> 6 | uVar8 * 0x4000000));
      auVar31 = vpshufd_avx2(auVar21,0x50);
      uVar10 = uVar10 + iVar6;
      auVar22 = vpsrld_avx2(auVar31,10);
      auVar31 = vpsrlq_avx2(auVar31,0x11);
      auVar23 = vpsrlq_avx2(auVar31,2);
      uVar17 = iVar6 + ((uVar19 ^ uVar5) & (uVar18 ^ uVar19) ^ uVar19) +
               ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 0x16 | uVar18 * 0x400) ^
               (uVar18 >> 2 | uVar18 * 0x40000000));
      auVar31 = vpshufb_avx2(auVar22 ^ auVar31 ^ auVar23,auVar4);
      auVar25 = vpaddd_avx2(auVar21,auVar31);
      iVar6 = uVar16 + *(int *)(pauVar13[2] + 0xc) + (uVar8 & uVar10) + (~uVar10 & uVar9) +
              ((uVar10 >> 0x19 | uVar10 * 0x80) ^ (uVar10 >> 0xb | uVar10 * 0x200000) ^
              (uVar10 >> 6 | uVar10 * 0x4000000));
      auVar21 = vpaddd_avx2(auVar25,*pauVar12);
      uVar5 = uVar5 + iVar6;
      pauVar13[-2] = auVar21;
      auVar31 = vpalignr_avx2(auVar28,auVar27,4);
      auVar21 = vpalignr_avx2(auVar25,auVar29,4);
      uVar16 = iVar6 + ((uVar18 ^ uVar19) & (uVar17 ^ uVar18) ^ uVar18) +
               ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 0x16 | uVar17 * 0x400) ^
               (uVar17 >> 2 | uVar17 * 0x40000000));
      auVar24 = vpsrld_avx2(auVar31,7);
      auVar21 = vpaddd_avx2(auVar27,auVar21);
      auVar30 = vpsrld_avx2(auVar31,3);
      iVar6 = uVar9 + *(int *)pauVar13[3] + (uVar10 & uVar5) + (~uVar5 & uVar8) +
              ((uVar5 >> 0x19 | uVar5 * 0x80) ^ (uVar5 >> 0xb | uVar5 * 0x200000) ^
              (uVar5 >> 6 | uVar5 * 0x4000000));
      auVar22 = vpslld_avx2(auVar31,0xe);
      uVar19 = uVar19 + iVar6;
      auVar31 = vpshufd_avx2(auVar25,0xfa);
      auVar27 = vpsrld_avx2(auVar24,0xb);
      uVar9 = iVar6 + ((uVar17 ^ uVar18) & (uVar16 ^ uVar17) ^ uVar17) +
              ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 0x16 | uVar16 * 0x400) ^
              (uVar16 >> 2 | uVar16 * 0x40000000));
      auVar23 = vpslld_avx2(auVar22,0xb);
      auVar26 = vpsrld_avx2(auVar31,10);
      iVar6 = uVar8 + *(int *)(pauVar13[3] + 4) + (uVar5 & uVar19) + (~uVar19 & uVar10) +
              ((uVar19 >> 0x19 | uVar19 * 0x80) ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^
              (uVar19 >> 6 | uVar19 * 0x4000000));
      uVar18 = uVar18 + iVar6;
      auVar31 = vpsrlq_avx2(auVar31,0x11);
      auVar21 = vpaddd_avx2(auVar21,auVar30 ^ auVar24 ^ auVar22 ^ auVar27 ^ auVar23);
      auVar22 = vpsrlq_avx2(auVar31,2);
      uVar8 = iVar6 + ((uVar16 ^ uVar17) & (uVar9 ^ uVar16) ^ uVar16) +
              ((uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 >> 0x16 | uVar9 * 0x400) ^
              (uVar9 >> 2 | uVar9 * 0x40000000));
      auVar31 = vpshufb_avx2(auVar26 ^ auVar31 ^ auVar22,auVar3);
      auVar21 = vpaddd_avx2(auVar21,auVar31);
      iVar6 = uVar10 + *(int *)(pauVar13[3] + 8) + (uVar19 & uVar18) + (~uVar18 & uVar5) +
              ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
              (uVar18 >> 6 | uVar18 * 0x4000000));
      auVar31 = vpshufd_avx2(auVar21,0x50);
      uVar17 = uVar17 + iVar6;
      auVar22 = vpsrld_avx2(auVar31,10);
      auVar31 = vpsrlq_avx2(auVar31,0x11);
      auVar23 = vpsrlq_avx2(auVar31,2);
      uVar10 = iVar6 + ((uVar9 ^ uVar16) & (uVar8 ^ uVar9) ^ uVar9) +
               ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
               (uVar8 >> 2 | uVar8 * 0x40000000));
      auVar31 = vpshufb_avx2(auVar22 ^ auVar31 ^ auVar23,auVar4);
      auVar27 = vpaddd_avx2(auVar21,auVar31);
      iVar6 = uVar5 + *(int *)(pauVar13[3] + 0xc) + (uVar18 & uVar17) + (~uVar17 & uVar19) +
              ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
              (uVar17 >> 6 | uVar17 * 0x4000000));
      auVar21 = vpaddd_avx2(auVar27,pauVar12[1]);
      uVar16 = uVar16 + iVar6;
      pauVar13[-1] = auVar21;
      pauVar1 = pauVar13 + -4;
      *(undefined8 *)(pauVar13[-5] + 0x18) = *(undefined8 *)(pauVar13[-3] + 0x18);
      auVar31 = vpalignr_avx2(auVar29,auVar28,4);
      auVar21 = vpalignr_avx2(auVar27,auVar25,4);
      uVar5 = iVar6 + ((uVar8 ^ uVar9) & (uVar10 ^ uVar8) ^ uVar8) +
              ((uVar10 >> 0xd | uVar10 * 0x80000) ^ (uVar10 >> 0x16 | uVar10 * 0x400) ^
              (uVar10 >> 2 | uVar10 * 0x40000000));
      auVar24 = vpsrld_avx2(auVar31,7);
      auVar21 = vpaddd_avx2(auVar28,auVar21);
      auVar30 = vpsrld_avx2(auVar31,3);
      iVar6 = uVar19 + *(int *)*pauVar13 + (uVar17 & uVar16) + (~uVar16 & uVar18) +
              ((uVar16 >> 0x19 | uVar16 * 0x80) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
              (uVar16 >> 6 | uVar16 * 0x4000000));
      auVar22 = vpslld_avx2(auVar31,0xe);
      uVar9 = uVar9 + iVar6;
      auVar31 = vpshufd_avx2(auVar27,0xfa);
      auVar28 = vpsrld_avx2(auVar24,0xb);
      uVar19 = iVar6 + ((uVar10 ^ uVar8) & (uVar5 ^ uVar10) ^ uVar10) +
               ((uVar5 >> 0xd | uVar5 * 0x80000) ^ (uVar5 >> 0x16 | uVar5 * 0x400) ^
               (uVar5 >> 2 | uVar5 * 0x40000000));
      auVar23 = vpslld_avx2(auVar22,0xb);
      auVar26 = vpsrld_avx2(auVar31,10);
      iVar6 = uVar18 + *(int *)(*pauVar13 + 4) + (uVar16 & uVar9) + (~uVar9 & uVar17) +
              ((uVar9 >> 0x19 | uVar9 * 0x80) ^ (uVar9 >> 0xb | uVar9 * 0x200000) ^
              (uVar9 >> 6 | uVar9 * 0x4000000));
      uVar8 = uVar8 + iVar6;
      auVar31 = vpsrlq_avx2(auVar31,0x11);
      auVar21 = vpaddd_avx2(auVar21,auVar30 ^ auVar24 ^ auVar22 ^ auVar28 ^ auVar23);
      auVar22 = vpsrlq_avx2(auVar31,2);
      uVar18 = iVar6 + ((uVar5 ^ uVar10) & (uVar19 ^ uVar5) ^ uVar5) +
               ((uVar19 >> 0xd | uVar19 * 0x80000) ^ (uVar19 >> 0x16 | uVar19 * 0x400) ^
               (uVar19 >> 2 | uVar19 * 0x40000000));
      auVar31 = vpshufb_avx2(auVar26 ^ auVar31 ^ auVar22,auVar3);
      auVar21 = vpaddd_avx2(auVar21,auVar31);
      iVar6 = uVar17 + *(int *)(*pauVar13 + 8) + (uVar9 & uVar8) + (~uVar8 & uVar16) +
              ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
              (uVar8 >> 6 | uVar8 * 0x4000000));
      auVar31 = vpshufd_avx2(auVar21,0x50);
      uVar10 = uVar10 + iVar6;
      auVar22 = vpsrld_avx2(auVar31,10);
      auVar31 = vpsrlq_avx2(auVar31,0x11);
      auVar23 = vpsrlq_avx2(auVar31,2);
      uVar17 = iVar6 + ((uVar19 ^ uVar5) & (uVar18 ^ uVar19) ^ uVar19) +
               ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 0x16 | uVar18 * 0x400) ^
               (uVar18 >> 2 | uVar18 * 0x40000000));
      auVar31 = vpshufb_avx2(auVar22 ^ auVar31 ^ auVar23,auVar4);
      auVar28 = vpaddd_avx2(auVar21,auVar31);
      iVar6 = uVar16 + *(int *)(*pauVar13 + 0xc) + (uVar8 & uVar10) + (~uVar10 & uVar9) +
              ((uVar10 >> 0x19 | uVar10 * 0x80) ^ (uVar10 >> 0xb | uVar10 * 0x200000) ^
              (uVar10 >> 6 | uVar10 * 0x4000000));
      auVar21 = vpaddd_avx2(auVar28,pauVar12[2]);
      uVar5 = uVar5 + iVar6;
      *pauVar1 = auVar21;
      auVar31 = vpalignr_avx2(auVar25,auVar29,4);
      auVar21 = vpalignr_avx2(auVar28,auVar27,4);
      uVar16 = iVar6 + ((uVar18 ^ uVar19) & (uVar17 ^ uVar18) ^ uVar18) +
               ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 0x16 | uVar17 * 0x400) ^
               (uVar17 >> 2 | uVar17 * 0x40000000));
      auVar24 = vpsrld_avx2(auVar31,7);
      auVar21 = vpaddd_avx2(auVar29,auVar21);
      auVar30 = vpsrld_avx2(auVar31,3);
      iVar6 = uVar9 + *(int *)pauVar13[1] + (uVar10 & uVar5) + (~uVar5 & uVar8) +
              ((uVar5 >> 0x19 | uVar5 * 0x80) ^ (uVar5 >> 0xb | uVar5 * 0x200000) ^
              (uVar5 >> 6 | uVar5 * 0x4000000));
      auVar22 = vpslld_avx2(auVar31,0xe);
      uVar19 = uVar19 + iVar6;
      auVar31 = vpshufd_avx2(auVar28,0xfa);
      auVar29 = vpsrld_avx2(auVar24,0xb);
      uVar9 = iVar6 + ((uVar17 ^ uVar18) & (uVar16 ^ uVar17) ^ uVar17) +
              ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 0x16 | uVar16 * 0x400) ^
              (uVar16 >> 2 | uVar16 * 0x40000000));
      auVar23 = vpslld_avx2(auVar22,0xb);
      auVar26 = vpsrld_avx2(auVar31,10);
      iVar6 = uVar8 + *(int *)(pauVar13[1] + 4) + (uVar5 & uVar19) + (~uVar19 & uVar10) +
              ((uVar19 >> 0x19 | uVar19 * 0x80) ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^
              (uVar19 >> 6 | uVar19 * 0x4000000));
      uVar18 = uVar18 + iVar6;
      auVar31 = vpsrlq_avx2(auVar31,0x11);
      auVar21 = vpaddd_avx2(auVar21,auVar30 ^ auVar24 ^ auVar22 ^ auVar29 ^ auVar23);
      auVar22 = vpsrlq_avx2(auVar31,2);
      uVar8 = iVar6 + ((uVar16 ^ uVar17) & (uVar9 ^ uVar16) ^ uVar16) +
              ((uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 >> 0x16 | uVar9 * 0x400) ^
              (uVar9 >> 2 | uVar9 * 0x40000000));
      auVar31 = vpshufb_avx2(auVar26 ^ auVar31 ^ auVar22,auVar3);
      auVar21 = vpaddd_avx2(auVar21,auVar31);
      iVar6 = uVar10 + *(int *)(pauVar13[1] + 8) + (uVar19 & uVar18) + (~uVar18 & uVar5) +
              ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
              (uVar18 >> 6 | uVar18 * 0x4000000));
      auVar31 = vpshufd_avx2(auVar21,0x50);
      uVar17 = uVar17 + iVar6;
      auVar22 = vpsrld_avx2(auVar31,10);
      auVar31 = vpsrlq_avx2(auVar31,0x11);
      auVar23 = vpsrlq_avx2(auVar31,2);
      uVar10 = iVar6 + ((uVar9 ^ uVar16) & (uVar8 ^ uVar9) ^ uVar9) +
               ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
               (uVar8 >> 2 | uVar8 * 0x40000000));
      auVar31 = vpshufb_avx2(auVar22 ^ auVar31 ^ auVar23,auVar4);
      auVar29 = vpaddd_avx2(auVar21,auVar31);
      iVar6 = uVar5 + *(int *)(pauVar13[1] + 0xc) + (uVar18 & uVar17) + (~uVar17 & uVar19) +
              ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
              (uVar17 >> 6 | uVar17 * 0x4000000));
      uVar15 = uVar10 ^ uVar8;
      auVar21 = vpaddd_avx2(auVar29,pauVar12[3]);
      uVar16 = uVar16 + iVar6;
      uVar5 = (uVar10 >> 0xd | uVar10 * 0x80000) ^ (uVar10 >> 0x16 | uVar10 * 0x400) ^
              (uVar10 >> 2 | uVar10 * 0x40000000);
      iVar6 = iVar6 + ((uVar8 ^ uVar9) & uVar15 ^ uVar8);
      pauVar13[-3] = auVar21;
      pauVar20 = pauVar12 + 4;
      pauVar12 = pauVar12 + 4;
    } while (*(char *)((long)*pauVar20 + 3) != '\0');
    uVar5 = iVar6 + uVar5;
    iVar6 = uVar19 + *(int *)pauVar13[-2] + (uVar17 & uVar16) + (~uVar16 & uVar18) +
            ((uVar16 >> 0x19 | uVar16 * 0x80) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
            (uVar16 >> 6 | uVar16 * 0x4000000));
    uVar9 = uVar9 + iVar6;
    uVar19 = iVar6 + (uVar15 & (uVar5 ^ uVar10) ^ uVar10) +
             ((uVar5 >> 0xd | uVar5 * 0x80000) ^ (uVar5 >> 0x16 | uVar5 * 0x400) ^
             (uVar5 >> 2 | uVar5 * 0x40000000));
    iVar6 = uVar18 + *(int *)(pauVar13[-2] + 4) + (uVar16 & uVar9) + (~uVar9 & uVar17) +
            ((uVar9 >> 0x19 | uVar9 * 0x80) ^ (uVar9 >> 0xb | uVar9 * 0x200000) ^
            (uVar9 >> 6 | uVar9 * 0x4000000));
    uVar8 = uVar8 + iVar6;
    uVar18 = iVar6 + ((uVar5 ^ uVar10) & (uVar19 ^ uVar5) ^ uVar5) +
             ((uVar19 >> 0xd | uVar19 * 0x80000) ^ (uVar19 >> 0x16 | uVar19 * 0x400) ^
             (uVar19 >> 2 | uVar19 * 0x40000000));
    iVar6 = uVar17 + *(int *)(pauVar13[-2] + 8) + (uVar9 & uVar8) + (~uVar8 & uVar16) +
            ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
            (uVar8 >> 6 | uVar8 * 0x4000000));
    uVar10 = uVar10 + iVar6;
    uVar17 = iVar6 + ((uVar19 ^ uVar5) & (uVar18 ^ uVar19) ^ uVar19) +
             ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 0x16 | uVar18 * 0x400) ^
             (uVar18 >> 2 | uVar18 * 0x40000000));
    iVar6 = uVar16 + *(int *)(pauVar13[-2] + 0xc) + (uVar8 & uVar10) + (~uVar10 & uVar9) +
            ((uVar10 >> 0x19 | uVar10 * 0x80) ^ (uVar10 >> 0xb | uVar10 * 0x200000) ^
            (uVar10 >> 6 | uVar10 * 0x4000000));
    uVar5 = uVar5 + iVar6;
    uVar16 = iVar6 + ((uVar18 ^ uVar19) & (uVar17 ^ uVar18) ^ uVar18) +
             ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 0x16 | uVar17 * 0x400) ^
             (uVar17 >> 2 | uVar17 * 0x40000000));
    iVar6 = uVar9 + *(int *)pauVar13[-1] + (uVar10 & uVar5) + (~uVar5 & uVar8) +
            ((uVar5 >> 0x19 | uVar5 * 0x80) ^ (uVar5 >> 0xb | uVar5 * 0x200000) ^
            (uVar5 >> 6 | uVar5 * 0x4000000));
    uVar19 = uVar19 + iVar6;
    uVar9 = iVar6 + ((uVar17 ^ uVar18) & (uVar16 ^ uVar17) ^ uVar17) +
            ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 0x16 | uVar16 * 0x400) ^
            (uVar16 >> 2 | uVar16 * 0x40000000));
    iVar6 = uVar8 + *(int *)(pauVar13[-1] + 4) + (uVar5 & uVar19) + (~uVar19 & uVar10) +
            ((uVar19 >> 0x19 | uVar19 * 0x80) ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^
            (uVar19 >> 6 | uVar19 * 0x4000000));
    uVar18 = uVar18 + iVar6;
    uVar8 = iVar6 + ((uVar16 ^ uVar17) & (uVar9 ^ uVar16) ^ uVar16) +
            ((uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 >> 0x16 | uVar9 * 0x400) ^
            (uVar9 >> 2 | uVar9 * 0x40000000));
    iVar6 = uVar10 + *(int *)(pauVar13[-1] + 8) + (uVar19 & uVar18) + (~uVar18 & uVar5) +
            ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
            (uVar18 >> 6 | uVar18 * 0x4000000));
    uVar17 = uVar17 + iVar6;
    uVar10 = iVar6 + ((uVar9 ^ uVar16) & (uVar8 ^ uVar9) ^ uVar9) +
             ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
             (uVar8 >> 2 | uVar8 * 0x40000000));
    iVar6 = uVar5 + *(int *)(pauVar13[-1] + 0xc) + (uVar18 & uVar17) + (~uVar17 & uVar19) +
            ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
            (uVar17 >> 6 | uVar17 * 0x4000000));
    uVar16 = uVar16 + iVar6;
    uVar5 = iVar6 + ((uVar8 ^ uVar9) & (uVar10 ^ uVar8) ^ uVar8) +
            ((uVar10 >> 0xd | uVar10 * 0x80000) ^ (uVar10 >> 0x16 | uVar10 * 0x400) ^
            (uVar10 >> 2 | uVar10 * 0x40000000));
    iVar6 = uVar19 + *(int *)*pauVar1 + (uVar17 & uVar16) + (~uVar16 & uVar18) +
            ((uVar16 >> 0x19 | uVar16 * 0x80) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
            (uVar16 >> 6 | uVar16 * 0x4000000));
    uVar9 = uVar9 + iVar6;
    uVar19 = iVar6 + ((uVar10 ^ uVar8) & (uVar5 ^ uVar10) ^ uVar10) +
             ((uVar5 >> 0xd | uVar5 * 0x80000) ^ (uVar5 >> 0x16 | uVar5 * 0x400) ^
             (uVar5 >> 2 | uVar5 * 0x40000000));
    iVar6 = uVar18 + *(int *)(pauVar13[-4] + 4) + (uVar16 & uVar9) + (~uVar9 & uVar17) +
            ((uVar9 >> 0x19 | uVar9 * 0x80) ^ (uVar9 >> 0xb | uVar9 * 0x200000) ^
            (uVar9 >> 6 | uVar9 * 0x4000000));
    uVar8 = uVar8 + iVar6;
    uVar18 = iVar6 + ((uVar5 ^ uVar10) & (uVar19 ^ uVar5) ^ uVar5) +
             ((uVar19 >> 0xd | uVar19 * 0x80000) ^ (uVar19 >> 0x16 | uVar19 * 0x400) ^
             (uVar19 >> 2 | uVar19 * 0x40000000));
    iVar6 = uVar17 + *(int *)(pauVar13[-4] + 8) + (uVar9 & uVar8) + (~uVar8 & uVar16) +
            ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
            (uVar8 >> 6 | uVar8 * 0x4000000));
    uVar10 = uVar10 + iVar6;
    uVar17 = iVar6 + ((uVar19 ^ uVar5) & (uVar18 ^ uVar19) ^ uVar19) +
             ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 0x16 | uVar18 * 0x400) ^
             (uVar18 >> 2 | uVar18 * 0x40000000));
    iVar6 = uVar16 + *(int *)(pauVar13[-4] + 0xc) + (uVar8 & uVar10) + (~uVar10 & uVar9) +
            ((uVar10 >> 0x19 | uVar10 * 0x80) ^ (uVar10 >> 0xb | uVar10 * 0x200000) ^
            (uVar10 >> 6 | uVar10 * 0x4000000));
    uVar5 = uVar5 + iVar6;
    uVar16 = iVar6 + ((uVar18 ^ uVar19) & (uVar17 ^ uVar18) ^ uVar18) +
             ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 0x16 | uVar17 * 0x400) ^
             (uVar17 >> 2 | uVar17 * 0x40000000));
    iVar6 = uVar9 + *(int *)pauVar13[-3] + (uVar10 & uVar5) + (~uVar5 & uVar8) +
            ((uVar5 >> 0x19 | uVar5 * 0x80) ^ (uVar5 >> 0xb | uVar5 * 0x200000) ^
            (uVar5 >> 6 | uVar5 * 0x4000000));
    uVar19 = uVar19 + iVar6;
    uVar9 = iVar6 + ((uVar17 ^ uVar18) & (uVar16 ^ uVar17) ^ uVar17) +
            ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 0x16 | uVar16 * 0x400) ^
            (uVar16 >> 2 | uVar16 * 0x40000000));
    iVar6 = uVar8 + *(int *)(pauVar13[-3] + 4) + (uVar5 & uVar19) + (~uVar19 & uVar10) +
            ((uVar19 >> 0x19 | uVar19 * 0x80) ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^
            (uVar19 >> 6 | uVar19 * 0x4000000));
    uVar18 = uVar18 + iVar6;
    uVar8 = iVar6 + ((uVar16 ^ uVar17) & (uVar9 ^ uVar16) ^ uVar16) +
            ((uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 >> 0x16 | uVar9 * 0x400) ^
            (uVar9 >> 2 | uVar9 * 0x40000000));
    iVar6 = uVar10 + *(int *)(pauVar13[-3] + 8) + (uVar19 & uVar18) + (~uVar18 & uVar5) +
            ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
            (uVar18 >> 6 | uVar18 * 0x4000000));
    uVar17 = uVar17 + iVar6;
    uVar10 = iVar6 + ((uVar9 ^ uVar16) & (uVar8 ^ uVar9) ^ uVar9) +
             ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
             (uVar8 >> 2 | uVar8 * 0x40000000));
    iVar6 = uVar5 + *(int *)(pauVar13[-3] + 0xc) + (uVar18 & uVar17) + (~uVar17 & uVar19) +
            ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
            (uVar17 >> 6 | uVar17 * 0x4000000));
    piVar2 = *(int **)pauVar13[0xc];
    pauVar12 = pauVar13 + 10;
    iVar7 = iVar6 + ((uVar8 ^ uVar9) & (uVar10 ^ uVar8) ^ uVar8) +
            ((uVar10 >> 0xd | uVar10 * 0x80000) ^ (uVar10 >> 0x16 | uVar10 * 0x400) ^
            (uVar10 >> 2 | uVar10 * 0x40000000)) + *piVar2;
    uVar10 = uVar10 + piVar2[1];
    uVar8 = uVar8 + piVar2[2];
    uVar9 = uVar9 + piVar2[3];
    uVar16 = uVar16 + iVar6 + piVar2[4];
    uVar17 = uVar17 + piVar2[5];
    uVar18 = uVar18 + piVar2[6];
    uVar19 = uVar19 + piVar2[7];
    *piVar2 = iVar7;
    piVar2[1] = uVar10;
    piVar2[2] = uVar8;
    piVar2[3] = uVar9;
    piVar2[4] = uVar16;
    piVar2[5] = uVar17;
    piVar2[6] = uVar18;
    piVar2[7] = uVar19;
    if (pauVar14 == *(undefined1 (**) [32])(pauVar13[0xc] + 0x10)) {
      return;
    }
    uVar5 = 0;
    uVar15 = uVar10 ^ uVar8;
    do {
      uVar5 = iVar7 + uVar5;
      iVar6 = uVar19 + *(int *)(*pauVar12 + 0x10) + (uVar17 & uVar16) + (~uVar16 & uVar18) +
              ((uVar16 >> 0x19 | uVar16 << 7) ^ (uVar16 >> 0xb | uVar16 << 0x15) ^
              (uVar16 >> 6 | uVar16 << 0x1a));
      uVar9 = uVar9 + iVar6;
      uVar19 = iVar6 + (uVar15 & (uVar5 ^ uVar10) ^ uVar10) +
               ((uVar5 >> 0xd | uVar5 * 0x80000) ^ (uVar5 >> 0x16 | uVar5 * 0x400) ^
               (uVar5 >> 2 | uVar5 * 0x40000000));
      iVar6 = uVar18 + *(int *)(*pauVar12 + 0x14) + (uVar16 & uVar9) + (~uVar9 & uVar17) +
              ((uVar9 >> 0x19 | uVar9 * 0x80) ^ (uVar9 >> 0xb | uVar9 * 0x200000) ^
              (uVar9 >> 6 | uVar9 * 0x4000000));
      uVar8 = uVar8 + iVar6;
      uVar18 = iVar6 + ((uVar5 ^ uVar10) & (uVar19 ^ uVar5) ^ uVar5) +
               ((uVar19 >> 0xd | uVar19 * 0x80000) ^ (uVar19 >> 0x16 | uVar19 * 0x400) ^
               (uVar19 >> 2 | uVar19 * 0x40000000));
      iVar6 = uVar17 + *(int *)(*pauVar12 + 0x18) + (uVar9 & uVar8) + (~uVar8 & uVar16) +
              ((uVar8 >> 0x19 | uVar8 * 0x80) ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^
              (uVar8 >> 6 | uVar8 * 0x4000000));
      uVar10 = uVar10 + iVar6;
      uVar17 = iVar6 + ((uVar19 ^ uVar5) & (uVar18 ^ uVar19) ^ uVar19) +
               ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 0x16 | uVar18 * 0x400) ^
               (uVar18 >> 2 | uVar18 * 0x40000000));
      iVar6 = uVar16 + *(int *)(*pauVar12 + 0x1c) + (uVar8 & uVar10) + (~uVar10 & uVar9) +
              ((uVar10 >> 0x19 | uVar10 * 0x80) ^ (uVar10 >> 0xb | uVar10 * 0x200000) ^
              (uVar10 >> 6 | uVar10 * 0x4000000));
      uVar5 = uVar5 + iVar6;
      uVar16 = iVar6 + ((uVar18 ^ uVar19) & (uVar17 ^ uVar18) ^ uVar18) +
               ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 0x16 | uVar17 * 0x400) ^
               (uVar17 >> 2 | uVar17 * 0x40000000));
      iVar6 = uVar9 + *(int *)(pauVar12[1] + 0x10) + (uVar10 & uVar5) + (~uVar5 & uVar8) +
              ((uVar5 >> 0x19 | uVar5 * 0x80) ^ (uVar5 >> 0xb | uVar5 * 0x200000) ^
              (uVar5 >> 6 | uVar5 * 0x4000000));
      uVar19 = uVar19 + iVar6;
      uVar9 = iVar6 + ((uVar17 ^ uVar18) & (uVar16 ^ uVar17) ^ uVar17) +
              ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 0x16 | uVar16 * 0x400) ^
              (uVar16 >> 2 | uVar16 * 0x40000000));
      iVar6 = uVar8 + *(int *)(pauVar12[1] + 0x14) + (uVar5 & uVar19) + (~uVar19 & uVar10) +
              ((uVar19 >> 0x19 | uVar19 * 0x80) ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^
              (uVar19 >> 6 | uVar19 * 0x4000000));
      uVar18 = uVar18 + iVar6;
      uVar8 = iVar6 + ((uVar16 ^ uVar17) & (uVar9 ^ uVar16) ^ uVar16) +
              ((uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 >> 0x16 | uVar9 * 0x400) ^
              (uVar9 >> 2 | uVar9 * 0x40000000));
      iVar6 = uVar10 + *(int *)(pauVar12[1] + 0x18) + (uVar19 & uVar18) + (~uVar18 & uVar5) +
              ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
              (uVar18 >> 6 | uVar18 * 0x4000000));
      uVar17 = uVar17 + iVar6;
      uVar10 = iVar6 + ((uVar9 ^ uVar16) & (uVar8 ^ uVar9) ^ uVar9) +
               ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
               (uVar8 >> 2 | uVar8 * 0x40000000));
      iVar7 = uVar5 + *(int *)(pauVar12[1] + 0x1c) + (uVar18 & uVar17) + (~uVar17 & uVar19) +
              ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
              (uVar17 >> 6 | uVar17 * 0x4000000));
      uVar15 = uVar10 ^ uVar8;
      uVar16 = uVar16 + iVar7;
      uVar5 = (uVar10 >> 0xd | uVar10 * 0x80000) ^ (uVar10 >> 0x16 | uVar10 * 0x400) ^
              (uVar10 >> 2 | uVar10 * 0x40000000);
      iVar7 = iVar7 + ((uVar8 ^ uVar9) & uVar15 ^ uVar8);
      pauVar12 = pauVar12 + -2;
    } while (pauVar1 <= pauVar12);
    piVar2 = *(int **)pauVar13[0xc];
    pauVar12 = pauVar13 + 10;
    iVar6 = iVar7 + uVar5 + *piVar2;
    uVar10 = uVar10 + piVar2[1];
    uVar8 = uVar8 + piVar2[2];
    uVar9 = uVar9 + piVar2[3];
    uVar16 = uVar16 + piVar2[4];
    uVar17 = uVar17 + piVar2[5];
    pauVar14 = pauVar14 + 4;
    uVar18 = uVar18 + piVar2[6];
    uVar19 = uVar19 + piVar2[7];
    pauVar1 = *(undefined1 (**) [32])(pauVar13[0xc] + 0x10);
    *piVar2 = iVar6;
    pauVar20 = pauVar14;
    if (pauVar14 == pauVar1) {
      pauVar20 = pauVar12;
    }
    piVar2[1] = uVar10;
    piVar2[2] = uVar8;
    piVar2[3] = uVar9;
    piVar2[4] = uVar16;
    piVar2[5] = uVar17;
    piVar2[6] = uVar18;
    piVar2[7] = uVar19;
  } while (pauVar14 <= pauVar1);
  return;
}



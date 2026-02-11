
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* compute_ideal_endpoint_formats(partition_info const&, image_block const&, endpoints const&,
   signed char const*, float const*, unsigned int, unsigned int, unsigned int, unsigned char (*)
   [4], int*, quant_method*, quant_method*, compression_working_buffers&) */

uint compute_ideal_endpoint_formats
               (partition_info *param_1,image_block *param_2,endpoints *param_3,signed *param_4,
               float *param_5,uint param_6,uint param_7,uint param_8,unsigned_char *param_9,
               int *param_10,quant_method *param_11,quant_method *param_12,
               compression_working_buffers *param_13)

{
  endpoints *peVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  image_block iVar14;
  image_block iVar15;
  image_block iVar16;
  partition_info pVar17;
  undefined1 uVar18;
  char cVar19;
  char cVar20;
  signed sVar21;
  undefined1 uVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [13];
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint5 uVar31;
  undefined1 auVar32 [13];
  undefined1 (*pauVar33) [16];
  bool bVar34;
  byte bVar35;
  uint uVar37;
  int iVar38;
  long lVar39;
  compression_working_buffers *pcVar40;
  ulong uVar41;
  compression_working_buffers cVar42;
  uint uVar43;
  float *pfVar44;
  ulong uVar45;
  undefined1 (*pauVar46) [16];
  int iVar47;
  int iVar48;
  partition_metrics *ppVar49;
  uint uVar50;
  int iVar51;
  undefined1 *puVar52;
  undefined1 *puVar53;
  undefined2 uVar54;
  long lVar55;
  partition_info *ppVar56;
  float *pfVar57;
  int iVar58;
  ulong uVar59;
  uint *puVar60;
  float *pfVar61;
  bool bVar62;
  int iVar63;
  undefined *puVar64;
  compression_working_buffers cVar65;
  char *pcVar66;
  long lVar67;
  bool bVar68;
  long lVar69;
  undefined1 *puVar70;
  partition_info *ppVar71;
  endpoints *peVar72;
  undefined1 *puVar73;
  long lVar74;
  ulong uVar75;
  partition_metrics *ppVar76;
  undefined1 *puVar77;
  long in_FS_OFFSET;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined4 uVar87;
  float fVar88;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  uint uVar99;
  float fVar100;
  uint uVar103;
  float fVar104;
  float fVar112;
  float fVar114;
  undefined1 auVar105 [16];
  float fVar113;
  float fVar115;
  undefined1 auVar106 [16];
  float fVar101;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float fVar102;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  float fVar116;
  float fVar119;
  float fVar120;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar121 [12];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  float fVar125;
  float fVar129;
  float fVar130;
  float fVar131;
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  uint uVar132;
  uint uVar133;
  uint uVar136;
  uint uVar137;
  uint uVar138;
  uint uVar139;
  uint uVar140;
  uint uVar141;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  int iVar142;
  int iVar143;
  int iVar144;
  int iVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  float afStack_2828 [272];
  float afStack_23e8 [388];
  float afStack_1dd8 [384];
  float afStack_17d8 [412];
  undefined1 local_1168 [8];
  undefined8 uStack_1160;
  undefined1 local_1158 [8];
  undefined8 uStack_1150;
  float fStack_1144;
  undefined8 local_1138;
  float fStack_1130;
  float fStack_112c;
  float local_1118;
  float fStack_1114;
  float fStack_10c4;
  float fStack_10ac;
  float fStack_109c;
  float fStack_108c;
  uint uStack_1084;
  uint uStack_1080;
  uint uStack_107c;
  float *local_1058;
  endpoints *local_1048;
  uint local_1024;
  float local_fc8 [20];
  compression_working_buffers local_f78 [16];
  undefined1 local_f68 [68];
  undefined1 auStack_f24 [16];
  undefined1 auStack_f14 [84];
  undefined1 auStack_ec0 [84];
  undefined1 auStack_e6c [68];
  undefined4 local_e28;
  float local_df4;
  undefined1 local_df0 [64];
  undefined1 local_db0 [88];
  undefined1 local_d58 [896];
  float local_9d8;
  uint auStack_9d4 [9];
  float local_9b0 [18];
  undefined1 local_968 [48];
  undefined1 local_938 [48];
  undefined1 local_908 [380];
  undefined1 local_78c [292];
  float local_668 [56];
  partition_metrics local_588 [64];
  undefined1 local_548 [1288];
  long local_40;
  bool bVar36;
  undefined1 auVar122 [16];
  
  ppVar49 = local_588;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar37 = (uint)*(ushort *)param_1;
  iVar14 = param_2[0xe12];
  iVar15 = param_2[0xeea];
  compute_avgs_and_dirs_3_comp_rgb(param_1,param_2,ppVar49);
  fVar86 = *(float *)(param_2 + 0xe00);
  fVar88 = *(float *)(param_2 + 0xe04);
  uVar27 = *(undefined8 *)(param_2 + 0xe00);
  fVar102 = *(float *)(param_2 + 0xe08);
  fVar104 = *(float *)(param_2 + 0xe0c);
  fVar85 = _LC18;
  if (param_2[0xeea] != (image_block)0x0) {
    fVar85 = _LC17;
  }
  peVar72 = param_3 + 0x10;
  lVar74 = 0;
  iVar16 = param_2[0xe10];
  pfVar57 = local_fc8;
  fVar101 = *(float *)(param_2 + 0xddc);
  ppVar56 = param_1 + 0xf0;
  ppVar76 = ppVar49;
  local_1058 = pfVar57;
  local_1048 = peVar72;
  do {
    auVar122 = *(undefined1 (*) [16])(ppVar76 + 0x10);
    auVar89 = *(undefined1 (*) [16])ppVar76;
    fVar82 = auVar89._0_4_;
    fVar91 = auVar89._4_4_;
    fVar94 = auVar89._8_4_;
    auVar105._0_4_ =
         auVar122._0_4_ * auVar122._0_4_ + auVar122._8_4_ * auVar122._8_4_ +
         auVar122._4_4_ * auVar122._4_4_ + auVar122._12_4_ * auVar122._12_4_;
    if (auVar105._0_4_ == 0.0) {
      auVar121._4_4_ = _UNK_00102074;
      auVar121._0_4_ = _LC1;
      auVar121._8_4_ = _UNK_00102078;
      fStack_1144 = _LC1;
      fStack_10ac = _LC1;
      fStack_10c4 = _LC1;
    }
    else {
      auVar105._4_4_ = auVar105._0_4_;
      auVar105._8_4_ = auVar105._0_4_;
      auVar105._12_4_ = auVar105._0_4_;
      auVar105 = sqrtps(auVar105,auVar105);
      auVar122 = divps(auVar122,auVar105);
      auVar121 = auVar122._0_12_;
      fStack_10c4 = auVar122._0_4_;
      fStack_10ac = auVar122._4_4_;
      fStack_1144 = auVar122._8_4_;
    }
    fVar112 = fVar91 * fVar91 + auVar89._12_4_ * auVar89._12_4_;
    auVar124._4_4_ = fVar112;
    auVar124._0_4_ = fVar112;
    auVar124._8_4_ = fVar112;
    auVar124._12_4_ = fVar112;
    auVar122._0_4_ = fVar82 * fVar82 + fVar94 * fVar94 + fVar112;
    if (auVar122._0_4_ == 0.0) {
      local_1138._4_4_ = _LC1;
      local_1138._0_4_ = _LC1;
      fStack_1130 = _LC1;
      fStack_112c = _LC1;
      fStack_108c = _LC1;
      fStack_109c = _LC1;
    }
    else {
      auVar122._4_4_ = auVar122._0_4_;
      auVar122._8_4_ = auVar122._0_4_;
      auVar122._12_4_ = auVar122._0_4_;
      auVar122 = sqrtps(auVar124,auVar122);
      auVar122 = divps(auVar89,auVar122);
      fStack_109c = auVar122._0_4_;
      fStack_108c = auVar122._4_4_;
      local_1138._4_4_ = auVar122._8_4_;
      local_1138._0_4_ = local_1138._4_4_;
      fStack_1130 = local_1138._4_4_;
      fStack_112c = local_1138._4_4_;
    }
    pVar17 = param_1[lVar74 + 4];
    fVar146 = 0.0;
    fVar147 = 0.0;
    fVar148 = 0.0;
    fVar149 = 0.0;
    uVar50 = 0;
    fVar150 = 0.0;
    fVar151 = 0.0;
    fVar152 = 0.0;
    fVar153 = 0.0;
    _local_1158 = (undefined1  [16])0x0;
    fVar112 = fVar91 * auVar121._4_4_ + fVar82 * auVar121._0_4_ + fVar94 * auVar121._8_4_;
    fVar116 = fVar82 - fVar112 * auVar121._0_4_;
    fVar119 = fVar91 - fVar112 * auVar121._4_4_;
    fVar120 = fVar94 - fVar112 * auVar121._8_4_;
    fVar112 = _UNK_00102074 * fVar91 + _LC1 * fVar82 + _UNK_00102078 * fVar94;
    _local_1168 = (undefined1  [16])0x0;
    fVar82 = fVar82 - fVar112 * _LC1;
    fVar91 = fVar91 - fVar112 * _UNK_00102074;
    fVar94 = fVar94 - fVar112 * _UNK_00102078;
    ppVar71 = ppVar56;
    fVar112 = fVar150;
    fVar154 = fVar151;
    fVar155 = fVar152;
    fVar156 = fVar153;
    iVar142 = __LC31;
    iVar143 = _UNK_00102084;
    iVar144 = _UNK_00102088;
    iVar145 = _UNK_0010208c;
    do {
      uVar23 = *(uint *)ppVar71;
      uVar50 = uVar50 + 4;
      ppVar71 = ppVar71 + 4;
      uStack_1084 = (uint)(byte)pVar17;
      uStack_1080 = (uint)(byte)pVar17;
      uStack_107c = (uint)(byte)pVar17;
      auVar25[0xc] = (char)(uVar23 >> 0x18);
      auVar25._0_12_ = ZEXT712(0);
      uVar31 = CONCAT32(auVar25._10_3_,(ushort)(byte)(uVar23 >> 0x10));
      auVar32._5_8_ = 0;
      auVar32._0_5_ = uVar31;
      uVar132 = -(uint)(iVar142 < (int)(uint)(byte)pVar17);
      uVar136 = -(uint)(iVar143 < (int)uStack_1084);
      uVar138 = -(uint)(iVar144 < (int)uStack_1080);
      uVar140 = -(uint)(iVar145 < (int)uStack_107c);
      iVar142 = iVar142 + __LC19;
      iVar143 = iVar143 + _UNK_001020a4;
      iVar144 = iVar144 + _UNK_001020a8;
      iVar145 = iVar145 + _UNK_001020ac;
      lVar39 = (long)(int)(uVar23 & 0xff);
      lVar69 = (long)(int)(uint)(uint3)(auVar25._10_3_ >> 0x10);
      fVar2 = *(float *)(param_2 + lVar39 * 4);
      fVar3 = *(float *)(param_2 + lVar39 * 4 + 0x370);
      lVar67 = (long)(int)uVar31;
      lVar55 = (long)(int)CONCAT72(SUB137(auVar32 << 0x40,6),(ushort)(byte)(uVar23 >> 8));
      fVar4 = *(float *)(param_2 + lVar67 * 4);
      fVar5 = *(float *)(param_2 + lVar39 * 4 + 0x6e0);
      local_1168._0_4_ =
           (float)((uint)((*(float *)(param_2 + lVar39 * 4 + 0xa50) - fVar85) *
                         (*(float *)(param_2 + lVar39 * 4 + 0xa50) - fVar85)) & uVar132) +
           (float)local_1168._0_4_;
      local_1168._4_4_ =
           (float)((uint)((*(float *)(param_2 + lVar55 * 4 + 0xa50) - fVar85) *
                         (*(float *)(param_2 + lVar55 * 4 + 0xa50) - fVar85)) & uVar136) +
           (float)local_1168._4_4_;
      uStack_1160._0_4_ =
           (float)((uint)((*(float *)(param_2 + lVar67 * 4 + 0xa50) - fVar85) *
                         (*(float *)(param_2 + lVar67 * 4 + 0xa50) - fVar85)) & uVar138) +
           (float)uStack_1160;
      uStack_1160._4_4_ =
           (float)((uint)((*(float *)(param_2 + lVar69 * 4 + 0xa50) - fVar85) *
                         (*(float *)(param_2 + lVar69 * 4 + 0xa50) - fVar85)) & uVar140) +
           uStack_1160._4_4_;
      fVar6 = *(float *)(param_2 + lVar69 * 4);
      fVar7 = *(float *)(param_2 + lVar55 * 4);
      fVar8 = *(float *)(param_2 + lVar69 * 4 + 0x370);
      fVar9 = *(float *)(param_2 + lVar67 * 4 + 0x370);
      fVar10 = *(float *)(param_2 + lVar55 * 4 + 0x370);
      fVar11 = *(float *)(param_2 + lVar69 * 4 + 0x6e0);
      fVar12 = *(float *)(param_2 + lVar67 * 4 + 0x6e0);
      fVar13 = *(float *)(param_2 + lVar55 * 4 + 0x6e0);
      fVar83 = fStack_10c4 * fVar2 + fStack_10ac * fVar3 + fStack_1144 * fVar5;
      fVar92 = fStack_10c4 * fVar7 + fStack_10ac * fVar10 + fStack_1144 * fVar13;
      fVar95 = fStack_10c4 * fVar4 + fStack_10ac * fVar9 + fStack_1144 * fVar12;
      fVar97 = fStack_10c4 * fVar6 + fStack_10ac * fVar8 + fStack_1144 * fVar11;
      fVar84 = (fVar83 * fStack_1144 + fVar120) - fVar5;
      fVar93 = (fVar92 * fStack_1144 + fVar120) - fVar13;
      fVar96 = (fVar95 * fStack_1144 + fVar120) - fVar12;
      fVar98 = (fVar97 * fStack_1144 + fVar120) - fVar11;
      fVar100 = (fVar116 + fStack_10c4 * fVar83) - fVar2;
      fVar113 = (fVar116 + fStack_10c4 * fVar92) - fVar7;
      fVar114 = (fVar116 + fStack_10c4 * fVar95) - fVar4;
      fVar115 = (fVar116 + fStack_10c4 * fVar97) - fVar6;
      fVar83 = (fVar119 + fStack_10ac * fVar83) - fVar3;
      fVar92 = (fVar119 + fStack_10ac * fVar92) - fVar10;
      fVar95 = (fVar119 + fStack_10ac * fVar95) - fVar9;
      fVar97 = (fVar119 + fStack_10ac * fVar97) - fVar8;
      fVar112 = fVar112 + (float)((uint)(fVar100 * fVar100 * fVar86 + fVar83 * fVar83 * fVar88 +
                                        fVar84 * fVar84 * fVar102) & uVar132);
      fVar154 = fVar154 + (float)((uint)(fVar113 * fVar113 * fVar86 + fVar92 * fVar92 * fVar88 +
                                        fVar93 * fVar93 * fVar102) & uVar136);
      fVar155 = fVar155 + (float)((uint)(fVar114 * fVar114 * fVar86 + fVar95 * fVar95 * fVar88 +
                                        fVar96 * fVar96 * fVar102) & uVar138);
      fVar156 = fVar156 + (float)((uint)(fVar115 * fVar115 * fVar86 + fVar97 * fVar97 * fVar88 +
                                        fVar98 * fVar98 * fVar102) & uVar140);
      fVar83 = fStack_109c * fVar2 + fStack_108c * fVar3 + (float)local_1138 * fVar5;
      fVar84 = fStack_109c * fVar7 + fStack_108c * fVar10 + local_1138._4_4_ * fVar13;
      fVar92 = fStack_109c * fVar4 + fStack_108c * fVar9 + fStack_1130 * fVar12;
      fVar93 = fStack_109c * fVar6 + fStack_108c * fVar8 + fStack_112c * fVar11;
      fVar95 = fStack_109c * fVar83 - fVar2;
      fVar96 = fStack_109c * fVar84 - fVar7;
      fVar97 = fStack_109c * fVar92 - fVar4;
      fVar98 = fStack_109c * fVar93 - fVar6;
      fVar100 = fStack_108c * fVar83 - fVar3;
      fVar113 = fStack_108c * fVar84 - fVar10;
      fVar114 = fStack_108c * fVar92 - fVar9;
      fVar115 = fStack_108c * fVar93 - fVar8;
      fVar83 = fVar83 * (float)local_1138 - fVar5;
      fVar84 = fVar84 * local_1138._4_4_ - fVar13;
      fVar92 = fVar92 * fStack_1130 - fVar12;
      fVar93 = fVar93 * fStack_112c - fVar11;
      local_1158._0_4_ =
           (float)((uint)(fVar95 * fVar95 * fVar86 + fVar100 * fVar100 * fVar88 +
                         fVar83 * fVar83 * fVar102) & uVar132) + (float)local_1158._0_4_;
      local_1158._4_4_ =
           (float)((uint)(fVar96 * fVar96 * fVar86 + fVar113 * fVar113 * fVar88 +
                         fVar84 * fVar84 * fVar102) & uVar136) + (float)local_1158._4_4_;
      uStack_1150._0_4_ =
           (float)((uint)(fVar97 * fVar97 * fVar86 + fVar114 * fVar114 * fVar88 +
                         fVar92 * fVar92 * fVar102) & uVar138) + (float)uStack_1150;
      uStack_1150._4_4_ =
           (float)((uint)(fVar98 * fVar98 * fVar86 + fVar115 * fVar115 * fVar88 +
                         fVar93 * fVar93 * fVar102) & uVar140) + uStack_1150._4_4_;
      fVar83 = (fVar2 * _LC1 + fVar3 * _LC1 + fVar5 * _LC1) * _LC1;
      fVar84 = (fVar7 * _LC1 + fVar10 * _LC1 + fVar13 * _LC1) * _LC1;
      fVar92 = (fVar4 * _LC1 + fVar9 * _LC1 + fVar12 * _LC1) * _LC1;
      fVar93 = (fVar6 * _LC1 + fVar8 * _LC1 + fVar11 * _LC1) * _LC1;
      fVar95 = (fVar82 + fVar83) - fVar2;
      fVar96 = (fVar82 + fVar84) - fVar7;
      fVar97 = (fVar82 + fVar92) - fVar4;
      fVar98 = (fVar82 + fVar93) - fVar6;
      fVar125 = (fVar91 + fVar83) - fVar3;
      fVar129 = (fVar91 + fVar84) - fVar10;
      fVar130 = (fVar91 + fVar92) - fVar9;
      fVar131 = (fVar91 + fVar93) - fVar8;
      fVar100 = (fVar94 + fVar83) - fVar5;
      fVar113 = (fVar94 + fVar84) - fVar13;
      fVar114 = (fVar94 + fVar92) - fVar12;
      fVar115 = (fVar94 + fVar93) - fVar11;
      fVar150 = fVar150 + (float)((uint)(fVar95 * fVar95 * fVar86 + fVar125 * fVar125 * fVar88 +
                                        fVar100 * fVar100 * fVar102) & uVar132);
      fVar151 = fVar151 + (float)((uint)(fVar96 * fVar96 * fVar86 + fVar129 * fVar129 * fVar88 +
                                        fVar113 * fVar113 * fVar102) & uVar136);
      fVar152 = fVar152 + (float)((uint)(fVar97 * fVar97 * fVar86 + fVar130 * fVar130 * fVar88 +
                                        fVar114 * fVar114 * fVar102) & uVar138);
      fVar153 = fVar153 + (float)((uint)(fVar98 * fVar98 * fVar86 + fVar131 * fVar131 * fVar88 +
                                        fVar115 * fVar115 * fVar102) & uVar140);
      fVar146 = fVar146 + (float)((uint)((fVar83 - fVar2) * (fVar83 - fVar2) * fVar86 +
                                         (fVar83 - fVar3) * (fVar83 - fVar3) * fVar88 +
                                        (fVar83 - fVar5) * (fVar83 - fVar5) * fVar102) & uVar132);
      fVar147 = fVar147 + (float)((uint)((fVar84 - fVar7) * (fVar84 - fVar7) * fVar86 +
                                         (fVar84 - fVar10) * (fVar84 - fVar10) * fVar88 +
                                        (fVar84 - fVar13) * (fVar84 - fVar13) * fVar102) & uVar136);
      fVar148 = fVar148 + (float)((uint)((fVar92 - fVar4) * (fVar92 - fVar4) * fVar86 +
                                         (fVar92 - fVar9) * (fVar92 - fVar9) * fVar88 +
                                        (fVar92 - fVar12) * (fVar92 - fVar12) * fVar102) & uVar138);
      fVar149 = fVar149 + (float)((uint)((fVar93 - fVar6) * (fVar93 - fVar6) * fVar86 +
                                         (fVar93 - fVar8) * (fVar93 - fVar8) * fVar88 +
                                        (fVar93 - fVar11) * (fVar93 - fVar11) * fVar102) & uVar140);
    } while (uVar50 < (byte)pVar17);
    fVar82 = fVar112 + fVar155 + fVar154 + fVar156;
    auVar117._0_4_ = *(float *)(local_1048 + 0x40) - *(float *)local_1048;
    auVar117._4_4_ = *(float *)(local_1048 + 0x44) - *(float *)(local_1048 + 4);
    auVar117._8_4_ = *(float *)(local_1048 + 0x48) - *(float *)(local_1048 + 8);
    auVar117._12_4_ = *(float *)(local_1048 + 0x4c) - *(float *)(local_1048 + 0xc);
    auVar89._0_4_ = 0.0 - auVar117._0_4_;
    auVar89._4_4_ = 0.0 - auVar117._4_4_;
    auVar89._8_4_ = 0.0 - auVar117._8_4_;
    auVar89._12_4_ = 0.0 - auVar117._12_4_;
    auVar122 = maxps(auVar89,auVar117);
    auVar106._4_4_ = -(uint)(auVar122._4_4_ < _UNK_001020b4);
    auVar106._0_4_ = -(uint)(auVar122._0_4_ < __LC20);
    auVar106._8_4_ = -(uint)(auVar122._8_4_ < _UNK_001020b8);
    auVar106._12_4_ = -(uint)(auVar122._12_4_ < _UNK_001020bc);
    uVar50 = movmskps((int)local_1048,auVar106);
    *(bool *)(local_1058 + 4) = (~uVar50 & 7) == 0;
    *local_1058 = (((float)local_1158._0_4_ + (float)uStack_1150 +
                   (float)local_1158._4_4_ + uStack_1150._4_4_) - fVar82) * __LC22;
    local_1058[1] = ((fVar150 + fVar152 + fVar151 + fVar153) - fVar82) * _UNK_001020c4;
    local_1058[2] = ((fVar146 + fVar148 + fVar147 + fVar149) - fVar82) * _UNK_001020c8;
    local_1058[3] =
         ((float)uStack_1160 + (float)local_1168._0_4_ + uStack_1160._4_4_ + (float)local_1168._4_4_
         ) * fVar104 * _UNK_001020cc;
    if (fVar101 == fVar85) {
      bVar36 = !NAN(fVar85) && !NAN(*(float *)(param_2 + 0xdfc));
      if (fVar85 != *(float *)(param_2 + 0xdfc)) {
        bVar36 = false;
      }
    }
    else {
      bVar36 = false;
    }
    bVar35 = bVar36 ^ 1;
    if (iVar16 == (image_block)0x0) {
      bVar35 = 1;
    }
    lVar74 = lVar74 + 1;
    local_1048 = local_1048 + 0x10;
    ppVar76 = ppVar76 + 0x20;
    ppVar56 = ppVar56 + 0xd8;
    *(byte *)((long)local_1058 + 0x11) = bVar35;
    local_1058 = local_1058 + 5;
  } while ((int)lVar74 < (int)uVar37);
  fVar85 = _LC18;
  if (iVar14 != (image_block)0x0) {
    fVar85 = _LC23;
  }
  fVar101 = _LC18;
  if (iVar15 != (image_block)0x0) {
    fVar101 = _LC23;
  }
  cVar42 = (compression_working_buffers)('\x0f' - (iVar15 == (image_block)0x0));
  lVar74 = 0;
  pcVar40 = local_f78;
  fVar86 = fVar88 + fVar86 + fVar102;
  do {
    uVar54 = _LC29;
    uVar26 = _UNK_00102098;
    peVar1 = peVar72 + 0x40;
    fVar88 = *(float *)peVar1;
    auVar121 = *(undefined1 (*) [12])peVar1;
    auVar122 = *(undefined1 (*) [16])peVar72;
    fVar94 = auVar122._0_4_;
    fVar112 = auVar122._4_4_;
    fVar154 = auVar122._8_4_;
    uStack_1160 = SUB168(*(undefined1 (*) [16])peVar1,8);
    local_1168 = auVar121._0_8_;
    uStack_1150 = uStack_1160 & 0xffffffff | (ulong)(uint)fVar88 << 0x20;
    local_1158 = local_1168;
    fVar91 = auVar121._0_4_;
    auVar107._8_4_ = fVar91;
    auVar107._0_8_ = uStack_1150;
    auVar107._12_4_ = fVar91;
    auVar89 = minps(_local_1158,auVar107);
    uVar87 = auVar89._0_4_;
    auVar108._4_4_ = uVar87;
    auVar108._0_4_ = auVar89._4_4_;
    auVar108._8_4_ = uVar87;
    auVar108._12_4_ = uVar87;
    auVar89 = minps(auVar89,auVar108);
    fVar82 = auVar89._0_4_;
    if (fVar82 <= 0.0) {
      fVar82 = 0.0;
    }
    local_1168._4_4_ = auVar121._4_4_;
    uStack_1160._0_4_ = auVar121._8_4_;
    auVar123._0_4_ = fVar94 - fVar85;
    auVar123._4_4_ = fVar112 - fVar85;
    auVar123._8_4_ = fVar154 - fVar85;
    auVar123._12_4_ = auVar122._12_4_ - fVar101;
    auVar118._0_4_ = fVar91 - fVar85;
    auVar118._4_4_ = (float)local_1168._4_4_ - fVar85;
    auVar118._8_4_ = (float)uStack_1160 - fVar85;
    auVar118._12_4_ = *(float *)(peVar72 + 0x4c) - fVar101;
    auVar124 = minps(auVar122,(undefined1  [16])0x0);
    auVar122 = minps(*(undefined1 (*) [16])peVar1,(undefined1  [16])0x0);
    auVar105 = maxps(auVar123,(undefined1  [16])0x0);
    auVar89 = maxps(auVar118,(undefined1  [16])0x0);
    fVar116 = (float)(byte)param_1[lVar74 + 4];
    local_1118 = (float)uVar27;
    fStack_1114 = (float)((ulong)uVar27 >> 0x20);
    fVar155 = (local_1118 *
               (auVar122._0_4_ * auVar122._0_4_ + auVar124._0_4_ * auVar124._0_4_ +
                auVar105._0_4_ * auVar105._0_4_ + auVar89._0_4_ * auVar89._0_4_) +
               fStack_1114 *
               (auVar122._4_4_ * auVar122._4_4_ + auVar124._4_4_ * auVar124._4_4_ +
                auVar105._4_4_ * auVar105._4_4_ + auVar89._4_4_ * auVar89._4_4_) +
              fVar102 * (auVar122._8_4_ * auVar122._8_4_ + auVar124._8_4_ * auVar124._8_4_ +
                         auVar105._8_4_ * auVar105._8_4_ + auVar89._8_4_ * auVar89._8_4_)) * _LC12 *
              fVar116;
    fVar156 = fVar104 * (auVar122._12_4_ * auVar122._12_4_ + auVar124._12_4_ * auVar124._12_4_ +
                         auVar105._12_4_ * auVar105._12_4_ + auVar89._12_4_ * auVar89._12_4_) *
              _LC12 * fVar116;
    if (iVar14 == (image_block)0x0) {
      cVar19 = *(char *)((long)pfVar57 + 0x11);
      cVar20 = *(char *)(pfVar57 + 4);
      fVar91 = fVar116 * fVar86;
      uVar28 = CONCAT44(_LC14._4_4_,(float)_LC14);
      *(undefined8 *)ppVar49 = uVar28;
      *(undefined8 *)(ppVar49 + 8) = uVar26;
      *(undefined8 *)(ppVar49 + 0x10) = uVar28;
      *(undefined8 *)(ppVar49 + 0x18) = uVar26;
      *(undefined8 *)(ppVar49 + 0x20) = uVar28;
      *(undefined8 *)(ppVar49 + 0x28) = uVar26;
      *(undefined8 *)(ppVar49 + 0x30) = uVar28;
      *(undefined8 *)(ppVar49 + 0x38) = uVar26;
      *(undefined8 *)pcVar40 = __LC30;
      *(undefined8 *)(pcVar40 + 8) = _UNK_001020d8;
      fVar88 = _LC10;
      fVar82 = _LC10;
      if (cVar19 == '\0') {
        fVar94 = _LC10;
        fVar112 = _LC10;
        if (cVar20 != '\0') {
          fVar88 = _LC13;
          fVar82 = _LC12;
          fVar94 = _LC10;
          fVar112 = _LC10;
        }
      }
      else {
        fVar94 = _LC12;
        fVar112 = _LC11;
        if (cVar20 != '\0') {
          fVar88 = _LC13;
          fVar82 = _LC12;
        }
      }
      fVar154 = pfVar57[3];
      fVar119 = *pfVar57;
      lVar39 = 0;
      iVar142 = 4;
      fVar120 = pfVar57[2];
      do {
        if (0x12 < iVar142) {
          fVar88 = _LC10;
          fVar82 = _LC10;
        }
        fVar150 = *(float *)((long)&compute_color_error_for_every_integer_count_and_quant_level(bool,bool,int,partition_info_const&,encoding_choice_errors_const&,endpoints_const&,vfloat4,float*[],unsigned_char*[])
                                    ::baseline_quant_error + lVar39);
        pcVar40[lVar39 + 0x13] = (compression_working_buffers)0xc;
        cVar65 = (compression_working_buffers)0x8;
        fVar151 = fVar91 * fVar150;
        fVar150 = fVar150 * (fVar116 * fVar104 + fVar91);
        fVar146 = fVar94 * fVar151 * fVar88 + fVar155 + fVar154;
        *(float *)(ppVar49 + lVar39 * 4 + 0x4c) = fVar112 * fVar150 * fVar82 + fVar155 + fVar156;
        fVar147 = fVar119 + fVar150 + fVar155 + fVar156;
        if (fVar147 < fVar146) {
          cVar65 = (compression_working_buffers)0xa;
          fVar146 = fVar147;
        }
        pcVar40[lVar39 + 0x12] = cVar65;
        *(float *)(ppVar49 + lVar39 * 4 + 0x48) = fVar146;
        cVar65 = (compression_working_buffers)0x4;
        fVar146 = fVar151 + fVar155 + fVar154;
        fVar151 = fVar119 + fVar146;
        fVar150 = fVar150 + fVar155 + fVar156 + fVar120;
        if (fVar151 < fVar150) {
          cVar65 = (compression_working_buffers)0x6;
          fVar150 = fVar151;
        }
        iVar142 = iVar142 + 1;
        pcVar40[lVar39 + 0x11] = cVar65;
        pcVar40[lVar39 + 0x10] = (compression_working_buffers)0x0;
        *(float *)(ppVar49 + lVar39 * 4 + 0x40) = fVar146 + fVar120;
        *(float *)(ppVar49 + lVar39 * 4 + 0x40 + 4) = fVar150;
        lVar39 = lVar39 + 4;
      } while (iVar142 != 0x15);
    }
    else {
      if ((fVar88 <= (float)local_1168._4_4_) || (fVar88 <= (float)uStack_1160)) {
        if ((float)local_1168._4_4_ <= (float)uStack_1160) {
          fVar120 = (float)uStack_1160 - fVar154;
          fVar119 = (float)uStack_1160;
        }
        else {
          fVar120 = (float)local_1168._4_4_ - fVar112;
          fVar119 = (float)local_1168._4_4_;
        }
      }
      else {
        fVar120 = fVar88 - fVar94;
        fVar119 = fVar88;
      }
      iVar144 = (int)fVar120;
      auVar126._0_4_ = (fVar91 - fVar120) - fVar94;
      auVar126._4_4_ = ((float)local_1168._4_4_ - fVar120) - fVar112;
      auVar126._8_4_ = ((float)uStack_1160 - fVar120) - fVar154;
      auVar126._12_4_ = 0;
      auVar109._0_4_ = 0.0 - auVar126._0_4_;
      auVar109._4_4_ = 0.0 - auVar126._4_4_;
      auVar109._8_4_ = 0.0 - auVar126._8_4_;
      auVar109._12_4_ = 0;
      auVar122 = maxps(auVar109,auVar126);
      auVar127._0_8_ = auVar122._8_8_;
      auVar127._8_4_ = auVar122._0_4_;
      auVar127._12_4_ = auVar122._0_4_;
      auVar122 = maxps(auVar122,auVar127);
      uVar87 = auVar122._0_4_;
      auVar128._4_4_ = uVar87;
      auVar128._0_4_ = auVar122._4_4_;
      auVar128._8_4_ = uVar87;
      auVar128._12_4_ = uVar87;
      auVar122 = maxps(auVar122,auVar128);
      iVar142 = (int)auVar122._0_4_;
      iVar143 = (int)(fVar119 - fVar82);
      bVar36 = iVar143 < 0x2000;
      if ((0x3fff < iVar144) || (iVar145 = 3, 0x1fff < iVar143)) {
        iVar145 = 5 - (uint)(iVar143 < 0x8000 && iVar144 < 0x4000);
      }
      bVar68 = iVar143 < 0x800;
      if ((iVar144 < 0x4000) && (iVar143 < 0x800)) {
        iVar145 = 2;
      }
      if ((iVar144 < 0x400) && (iVar143 < 0x800)) {
        iVar145 = 1;
      }
      local_1158[0] = iVar144 < 0x1000 && iVar143 < 0x400;
      uVar50 = (uint)bVar68;
      if (iVar144 < 0x1000 && iVar143 < 0x400) {
        fVar82 = _LC5;
        if (iVar142 < 0x2000) {
          if (iVar142 < 0x1000) {
            iVar145 = 3;
            if (iVar142 < 0x800) {
LAB_00100b2a:
              uVar50 = (uint)local_1158[0];
              bVar62 = iVar144 < 0x800;
              bVar34 = bVar36 && bVar62;
              if (iVar143 < 0x2000 && iVar144 < 0x800) goto LAB_00100b3e;
              goto LAB_00101640;
            }
            iVar145 = 2;
          }
          else {
            iVar145 = 0;
          }
        }
        else {
LAB_0010171c:
          iVar145 = 8;
        }
LAB_00101678:
        fVar91 = _LC6 * (float)(&compute_color_error_for_every_integer_count_and_quant_level(bool,bool,int,partition_info_const&,encoding_choice_errors_const&,endpoints_const&,vfloat4,float*[],unsigned_char*[])
                                 ::rgb_error_scales)[iVar145];
      }
      else {
        fVar82 = _LC24 * *(float *)(compute_color_error_for_every_integer_count_and_quant_level(bool,bool,int,partition_info_const&,encoding_choice_errors_const&,endpoints_const&,vfloat4,float*[],unsigned_char*[])
                                    ::rgbo_error_scales + (long)iVar145 * 4);
        local_1158[0] = iVar144 < 0x2000;
        if ((iVar143 < 0x4000) && (iVar144 < 0x2000)) {
          iVar145 = 8;
          if (iVar142 < 0x2000) {
            iVar145 = 0;
LAB_001017ec:
            if (iVar142 < 0x1000) {
              if (0xfff < iVar143) {
                local_1158[0] = true;
                iVar145 = 1;
                bVar62 = bVar36;
                goto LAB_00101747;
              }
LAB_00101617:
              iVar145 = 2;
              goto LAB_0010161c;
            }
          }
          if (iVar143 < 0x2000) goto LAB_00101678;
          bVar62 = iVar144 < 0x800;
LAB_00101649:
          bVar68 = (bool)(bVar68 & bVar62);
          if (bVar68) goto LAB_00100b5d;
LAB_00101655:
          if ((0x1ff < iVar142 || 0x3ff < iVar143) || (fVar91 = _LC6, !bVar62)) goto LAB_00101678;
        }
        else {
          if ((iVar143 < 0x8000) && (iVar144 < 0x2000)) {
            iVar145 = 8;
            goto LAB_001017ec;
          }
          if ((iVar143 < 0x1000) && (iVar144 < 0x2000)) {
            if (0xfff < iVar142) goto LAB_0010171c;
            goto LAB_00101617;
          }
          iVar145 = 8;
          bVar62 = local_1158[0] && bVar36;
LAB_00101747:
          if (!bVar62) {
            local_1158[0] = (bool)(local_1158[0] & bVar68);
            goto LAB_00100b2a;
          }
LAB_0010161c:
          if (0x7ff < iVar142) goto LAB_00101678;
          iVar145 = 3;
          bVar62 = iVar144 < 0x800;
          bVar34 = bVar36 && bVar62;
          if (bVar36 && bVar62) {
LAB_00100b3e:
            bVar62 = bVar34;
            if (0x1ff < iVar142) goto LAB_00101640;
            iVar145 = uVar50 + 4;
          }
          else {
LAB_00101640:
            if ((char)uVar50 == '\0') goto LAB_00101649;
            if (0x3ff < iVar142) goto LAB_00101678;
            bVar68 = (bool)(bVar68 & bVar62);
            iVar145 = 5;
          }
          if (!bVar68) goto LAB_00101655;
LAB_00100b5d:
          bVar62 = bVar68;
          if (0xff < iVar142) goto LAB_00101655;
          fVar91 = _LC6 * (float)(&compute_color_error_for_every_integer_count_and_quant_level(bool,bool,int,partition_info_const&,encoding_choice_errors_const&,endpoints_const&,vfloat4,float*[],unsigned_char*[])
                                   ::rgb_error_scales)[(iVar143 < 0x400) + 6];
        }
      }
      fVar94 = ((float)local_1168._4_4_ + fVar88 + (float)uStack_1160) * _LC25 -
               (fVar112 + fVar94 + fVar154) * _LC25;
      fVar88 = _LC7;
      if ((_LC26 <= fVar94) && (fVar88 = _LC8, _LC27 <= fVar94)) {
        fVar88 = _LC9;
      }
      uVar26 = CONCAT44(_LC14._4_4_,(float)_LC14);
      pcVar40[3] = cVar42;
      pcVar40[7] = cVar42;
      *(undefined8 *)ppVar49 = uVar26;
      *(undefined8 *)(ppVar49 + 8) = uVar26;
      *(undefined8 *)(ppVar49 + 0x10) = uVar26;
      *(undefined8 *)(ppVar49 + 0x18) = uVar26;
      *(undefined8 *)(ppVar49 + 0x20) = uVar26;
      *(undefined8 *)(ppVar49 + 0x28) = uVar26;
      *(undefined8 *)(ppVar49 + 0x30) = uVar26;
      *(undefined8 *)(ppVar49 + 0x38) = uVar26;
      *(undefined8 *)(ppVar49 + 0x40) = uVar26;
      *(undefined8 *)(ppVar49 + 0x48) = uVar26;
      *(undefined8 *)(ppVar49 + 0x50) = uVar26;
      *(undefined8 *)(ppVar49 + 0x58) = uVar26;
      *(undefined8 *)(ppVar49 + 0x60) = uVar26;
      *(undefined8 *)(ppVar49 + 0x68) = uVar26;
      *(undefined8 *)(ppVar49 + 0x70) = uVar26;
      *(undefined8 *)(ppVar49 + 0x78) = uVar26;
      lVar39 = 0;
      pcVar40[0xb] = cVar42;
      pcVar40[0xf] = cVar42;
      pcVar40[0x13] = cVar42;
      pcVar40[0x17] = cVar42;
      pcVar40[0x1b] = cVar42;
      pcVar40[0x1f] = cVar42;
      *(undefined2 *)pcVar40 = uVar54;
      pcVar40[2] = (compression_working_buffers)0xb;
      pcVar40[4] = (compression_working_buffers)0x2;
      pcVar40[5] = (compression_working_buffers)0x7;
      pcVar40[6] = (compression_working_buffers)0xb;
      pcVar40[8] = (compression_working_buffers)0x2;
      pcVar40[9] = (compression_working_buffers)0x7;
      fVar94 = pfVar57[3];
      pcVar40[10] = (compression_working_buffers)0xb;
      fVar112 = pfVar57[1];
      pcVar40[0xc] = (compression_working_buffers)0x2;
      fVar154 = pfVar57[2];
      pcVar40[0xd] = (compression_working_buffers)0x7;
      pcVar40[0xe] = (compression_working_buffers)0xb;
      pcVar40[0x10] = (compression_working_buffers)0x2;
      pcVar40[0x11] = (compression_working_buffers)0x7;
      pcVar40[0x12] = (compression_working_buffers)0xb;
      pcVar40[0x14] = (compression_working_buffers)0x2;
      pcVar40[0x15] = (compression_working_buffers)0x7;
      pcVar40[0x16] = (compression_working_buffers)0xb;
      pcVar40[0x18] = (compression_working_buffers)0x2;
      pcVar40[0x19] = (compression_working_buffers)0x7;
      pcVar40[0x1a] = (compression_working_buffers)0xb;
      pcVar40[0x1c] = (compression_working_buffers)0x2;
      pcVar40[0x1d] = (compression_working_buffers)0x7;
      pcVar40[0x1e] = (compression_working_buffers)0xb;
      do {
        fVar119 = *(float *)(&DAT_00102030 + lVar39);
        pcVar40[lVar39 + 0x23] = cVar42;
        pcVar40[lVar39 + 0x22] = (compression_working_buffers)0xb;
        *(undefined2 *)(pcVar40 + lVar39 + 0x20) = uVar54;
        fVar120 = fVar119 * fVar116 * fVar86;
        fVar119 = fVar119 * fVar116 * fVar104;
        fVar120 = fVar120 + fVar120;
        auVar90._0_4_ = fVar120 * fVar88 + fVar155 + fVar94 + fVar154;
        auVar90._12_4_ = fVar119 + fVar119 + fVar120 + fVar155 + fVar156;
        auVar90._8_4_ = fVar120 * fVar91 + fVar155 + fVar94;
        auVar90._4_4_ = fVar120 * fVar82 + fVar155 + fVar94 + fVar112;
        *(undefined1 (*) [16])(ppVar49 + lVar39 * 4 + 0x80) = auVar90;
        lVar39 = lVar39 + 4;
      } while (lVar39 != 0x34);
    }
    lVar74 = lVar74 + 1;
    peVar72 = peVar72 + 0x10;
    pcVar40 = pcVar40 + 0x54;
    pfVar57 = pfVar57 + 5;
    ppVar49 = ppVar49 + 0x150;
  } while ((int)lVar74 < (int)uVar37);
  auVar29._4_4_ = _LC14._4_4_;
  auVar29._0_4_ = (float)_LC14;
  auVar29._8_8_ = _UNK_00102098;
  uVar75 = (ulong)(param_7 & 0xfffffffc);
  *(undefined1 (*) [16])(param_13 + uVar75 * 4 + 0x265c0) = auVar29;
  *(undefined4 *)(param_13 + uVar75 + 0x285c0) = 0;
  *(undefined4 *)(param_13 + uVar75 + 0x28dc0) = 0;
  uVar75 = (ulong)(param_8 - 1 & 0xfffffffc);
  *(undefined1 (*) [16])(param_13 + uVar75 * 4 + 0x265c0) = auVar29;
  *(undefined4 *)(param_13 + uVar75 + 0x285c0) = 0;
  *(undefined4 *)(param_13 + uVar75 + 0x28dc0) = 0;
  fVar88 = _LC15;
  fVar86 = (float)_LC14;
  if (uVar37 == 1) {
    if (param_8 <= param_7) goto LAB_00101f4b;
    uVar59 = 0xffffffff;
    uVar75 = (ulong)param_7;
    fVar88 = (float)_LC14;
    do {
      while (local_9d8 = (float)uVar59, param_5[uVar75] < (float)_LC14) {
        uVar41 = 0;
        uVar45 = 0;
        puVar64 = &quant_mode_table + (char)param_4[uVar75];
        fVar102 = fVar86;
        do {
          if (('\x03' < (char)puVar64[0x80]) &&
             (*(float *)(local_588 + (long)(int)uVar41 * 4 + (long)(char)puVar64[0x80] * 0x10) <
              fVar102)) {
            uVar45 = uVar41 & 0xffffffff;
            fVar102 = *(float *)(local_588 +
                                (long)(int)uVar41 * 4 + (long)(char)puVar64[0x80] * 0x10);
          }
          uVar41 = uVar41 + 1;
          puVar64 = puVar64 + 0x80;
        } while (uVar41 != 4);
        cVar42 = *(compression_working_buffers *)
                  (&quant_mode_table +
                  (long)(int)(char)param_4[uVar75] + (long)((int)uVar45 + 1) * 0x80);
        param_13[uVar75 + 0x285c0] = cVar42;
        param_13[uVar75 * 4 + 0x295c0] = (compression_working_buffers)0x0;
        if ('\x03' < (char)cVar42) {
          param_13[uVar75 * 4 + 0x295c0] = local_f78[(long)(int)uVar45 + (long)(char)cVar42 * 4];
        }
        fVar102 = fVar102 + param_5[uVar75];
        *(float *)(param_13 + uVar75 * 4 + 0x265c0) = fVar102;
        fVar104 = fVar102;
        if (fVar88 <= fVar102) {
          fVar104 = fVar88;
        }
        param_13[uVar75 + 0x28dc0] = param_13[uVar75 + 0x285c0];
        if (fVar102 < fVar88) {
          uVar59 = uVar75 & 0xffffffff;
        }
        local_9d8 = (float)uVar59;
        uVar75 = uVar75 + 1;
        fVar88 = fVar104;
        if (param_8 <= (uint)uVar75) goto LAB_001011c9;
      }
      *(float *)(param_13 + uVar75 * 4 + 0x265c0) = fVar86;
      uVar75 = uVar75 + 1;
    } while ((uint)uVar75 < param_8);
LAB_001011c9:
    if (-1 < (int)local_9d8) {
      *(float *)(param_13 + (long)(int)local_9d8 * 4 + 0x265c0) = fVar86;
    }
  }
  else {
    if (uVar37 == 2) {
      pauVar46 = (undefined1 (*) [16])&local_9d8;
      do {
        auVar30._4_4_ = _LC14._4_4_;
        auVar30._0_4_ = (float)_LC14;
        auVar30._8_8_ = _UNK_00102098;
        *(ulong *)pauVar46[1] = CONCAT44(_LC14._4_4_,(float)_LC14);
        pauVar33 = pauVar46 + 1;
        *(float *)(pauVar46[1] + 8) = (float)_LC14;
        *pauVar46 = auVar30;
        pauVar46 = (undefined1 (*) [16])(*pauVar33 + 0xc);
      } while ((undefined1 (*) [16])local_78c != (undefined1 (*) [16])(*pauVar33 + 0xc));
      puVar52 = local_f68;
      puVar73 = local_df0;
      puVar77 = local_968;
      puVar53 = local_548;
      do {
        lVar74 = 0;
        puVar70 = puVar77;
        do {
          iVar142 = (int)lVar74;
          lVar39 = 0;
          do {
            iVar144 = (int)lVar39;
            iVar143 = iVar144;
            if (iVar144 <= iVar142) {
              iVar143 = iVar142;
            }
            iVar145 = iVar144;
            if (iVar142 <= iVar144) {
              iVar145 = iVar142;
            }
            if (iVar143 - iVar145 < 2) {
              fVar88 = *(float *)(puVar53 + lVar74 * 4) + *(float *)(puVar53 + lVar39 * 4 + 0x150);
              if (_LC15 <= *(float *)(puVar53 + lVar74 * 4) +
                           *(float *)(puVar53 + lVar39 * 4 + 0x150)) {
                fVar88 = _LC15;
              }
              if (fVar88 <= *(float *)(puVar70 + lVar39 * 4)) {
                uVar18 = puVar52[lVar74];
                uVar22 = puVar52[lVar39 + 0x54];
                *(float *)(puVar70 + lVar39 * 4) = fVar88;
                *(ushort *)(puVar73 + (long)(iVar142 + iVar144) * 2) = CONCAT11(uVar22,uVar18);
              }
            }
            lVar39 = lVar39 + 1;
          } while (lVar39 != 4);
          lVar74 = lVar74 + 1;
          puVar70 = puVar70 + 4;
        } while (lVar74 != 4);
        puVar52 = puVar52 + 4;
        puVar73 = puVar73 + 0xe;
        puVar77 = puVar77 + 0x1c;
        puVar53 = puVar53 + 0x10;
      } while (auStack_f24 != puVar52);
      if (param_8 == 0) goto LAB_00101f4b;
      uVar75 = 0;
      uVar59 = 0xffffffff;
      fVar88 = (float)_LC14;
      do {
        fVar102 = fVar86;
        if (param_5[uVar75] < (float)_LC14) {
          uVar45 = 0;
          sVar21 = param_4[uVar75];
          uVar41 = 2;
          do {
            iVar142 = (int)uVar45;
            if ((char)(&quant_mode_table)[uVar41 * 0x80 + (long)(char)sVar21] < '\x04') break;
            if ((&local_9d8)
                [(long)(char)(&quant_mode_table)[uVar41 * 0x80 + (long)(char)sVar21] * 7 +
                 (long)((int)uVar41 + -2)] < fVar102) {
              uVar45 = uVar41 & 0xffffffff;
              fVar102 = (&local_9d8)
                        [(long)(char)(&quant_mode_table)[uVar41 * 0x80 + (long)(char)sVar21] * 7 +
                         (long)((int)uVar41 + -2)];
            }
            iVar142 = (int)uVar45;
            uVar41 = uVar41 + 1;
          } while (uVar41 != 9);
          cVar42 = *(compression_working_buffers *)
                    (&quant_mode_table + (long)(int)(char)sVar21 + (long)iVar142 * 0x80);
          cVar65 = *(compression_working_buffers *)
                    (&quant_mode_table + (long)((char)sVar21 + 2) + (long)iVar142 * 0x80);
          param_13[uVar75 + 0x285c0] = cVar42;
          param_13[uVar75 + 0x28dc0] = cVar65;
          uVar54 = 0;
          if ('\x03' < (char)cVar42) {
            uVar54 = *(undefined2 *)
                      ((long)&local_e28 + (long)(iVar142 + -2) * 2 + (long)(char)cVar42 * 0xe);
          }
          *(undefined2 *)(param_13 + uVar75 * 4 + 0x295c0) = uVar54;
          fVar102 = fVar102 + param_5[uVar75];
          if (fVar102 < fVar88) {
            uVar59 = uVar75 & 0xffffffff;
            fVar88 = fVar102;
          }
        }
        local_9d8 = (float)uVar59;
        *(float *)(param_13 + uVar75 * 4 + 0x265c0) = fVar102;
        uVar75 = uVar75 + 1;
      } while (uVar75 != param_8);
      goto LAB_001011c9;
    }
    if (uVar37 == 3) {
      uVar27 = CONCAT44(_LC14._4_4_,(float)_LC14);
      pfVar57 = &local_9d8;
      pfVar44 = local_9b0;
      do {
        pfVar61 = pfVar57;
        if (((int)pfVar44 - (int)pfVar57 & 8U) == 0) goto LAB_001019b0;
        *(undefined8 *)pfVar57 = uVar27;
        for (pfVar61 = pfVar57 + 2; pfVar44 != pfVar61; pfVar61 = pfVar61 + 4) {
LAB_001019b0:
          *(undefined8 *)pfVar61 = uVar27;
          *(undefined8 *)(pfVar61 + 2) = uVar27;
        }
        pfVar44 = pfVar44 + 10;
        pfVar57 = pfVar57 + 10;
      } while (local_668 != pfVar44);
      puVar52 = local_f68;
      puVar73 = local_db0;
      puVar77 = local_938;
      puVar53 = local_548;
      do {
        uVar75 = 0;
        do {
          uVar59 = uVar75 & 0xffffffff;
          iVar142 = (int)uVar75;
          lVar74 = 0;
          do {
            iVar145 = (int)uVar59;
            iVar144 = (int)lVar74;
            iVar143 = iVar144;
            if (iVar144 <= iVar142) {
              iVar143 = iVar142;
            }
            if (iVar142 <= iVar144) {
              iVar144 = iVar142;
            }
            if (iVar143 - iVar144 < 2) {
              lVar39 = 0;
              pfVar57 = (float *)(puVar77 + (long)iVar145 * 4);
              puVar70 = puVar73 + (long)iVar145 * 3;
              do {
                iVar48 = (int)lVar39;
                iVar47 = iVar48;
                if (iVar48 <= iVar143) {
                  iVar47 = iVar143;
                }
                iVar51 = iVar48;
                if (iVar144 <= iVar48) {
                  iVar51 = iVar144;
                }
                if (iVar47 - iVar51 < 2) {
                  fVar88 = *(float *)(puVar53 + uVar75 * 4) +
                           *(float *)(puVar53 + lVar74 * 4 + 0x150) +
                           *(float *)(puVar53 + lVar39 * 4 + 0x2a0);
                  if (_LC15 <= fVar88) {
                    fVar88 = _LC15;
                  }
                  if (fVar88 <= *pfVar57) {
                    uVar18 = puVar52[uVar75];
                    uVar22 = puVar52[lVar74 + 0x54];
                    *pfVar57 = fVar88;
                    *(ushort *)(puVar73 + (long)(iVar145 + iVar48) * 3) = CONCAT11(uVar22,uVar18);
                    puVar70[2] = puVar52[lVar39 + 0xa8];
                  }
                }
                lVar39 = lVar39 + 1;
                pfVar57 = pfVar57 + 1;
                puVar70 = puVar70 + 3;
              } while (lVar39 != 4);
            }
            lVar74 = lVar74 + 1;
            uVar59 = (ulong)(iVar145 + 1);
          } while (lVar74 != 4);
          uVar75 = uVar75 + 1;
        } while (uVar75 != 4);
        puVar52 = puVar52 + 4;
        puVar73 = puVar73 + 0x1e;
        puVar77 = puVar77 + 0x28;
        puVar53 = puVar53 + 0x10;
      } while (auStack_f24 != puVar52);
      if (param_8 == 0) goto LAB_00101f4b;
      uVar75 = 0;
      uVar59 = 0xffffffff;
      pcVar40 = param_13 + 0x295c0;
      fVar88 = (float)_LC14;
      do {
        fVar102 = fVar86;
        if (param_5[uVar75] < (float)_LC14) {
          sVar21 = param_4[uVar75];
          uVar41 = 3;
          uVar45 = 0;
          do {
            iVar142 = (int)uVar45;
            if ((char)(&quant_mode_table)[uVar41 * 0x80 + (long)(char)sVar21] < '\x04') break;
            if ((&local_9d8)
                [(long)(char)(&quant_mode_table)[uVar41 * 0x80 + (long)(char)sVar21] * 10 +
                 (long)((int)uVar41 + -3)] < fVar102) {
              uVar45 = uVar41 & 0xffffffff;
              fVar102 = (&local_9d8)
                        [(long)(char)(&quant_mode_table)[uVar41 * 0x80 + (long)(char)sVar21] * 10 +
                         (long)((int)uVar41 + -3)];
            }
            iVar142 = (int)uVar45;
            uVar41 = uVar41 + 1;
          } while (uVar41 != 10);
          cVar42 = *(compression_working_buffers *)
                    (&quant_mode_table + (long)(int)(char)sVar21 + (long)iVar142 * 0x80);
          cVar65 = *(compression_working_buffers *)
                    (&quant_mode_table + (long)((char)sVar21 + 5) + (long)iVar142 * 0x80);
          param_13[uVar75 + 0x285c0] = cVar42;
          param_13[uVar75 + 0x28dc0] = cVar65;
          if ((char)cVar42 < '\x04') {
            pcVar40[2] = (compression_working_buffers)0x0;
            *(undefined2 *)pcVar40 = 0;
          }
          else {
            lVar74 = (long)(iVar142 + -3) * 3 + (long)(char)cVar42 * 0x1e;
            *(undefined2 *)pcVar40 = *(undefined2 *)((long)&local_e28 + lVar74);
            pcVar40[2] = *(compression_working_buffers *)((long)&local_e28 + lVar74 + 2);
          }
          fVar102 = fVar102 + param_5[uVar75];
          if (fVar102 < fVar88) {
            uVar59 = uVar75 & 0xffffffff;
            fVar88 = fVar102;
          }
        }
        local_9d8 = (float)uVar59;
        uVar75 = uVar75 + 1;
        *(float *)(pcVar40 + -0x3000) = fVar102;
        pcVar40 = pcVar40 + 4;
      } while (uVar75 != param_8);
      goto LAB_001011c9;
    }
    pfVar57 = &local_df4;
    do {
      pfVar57[-0xd] = (float)_LC14;
      pfVar44 = pfVar57 + -0xc;
      do {
        *pfVar44 = (float)_LC14;
        pfVar61 = pfVar44 + 2;
        pfVar44[1] = (float)_LC14;
        pfVar44 = pfVar61;
      } while (pfVar57 != pfVar61);
      pfVar57 = pfVar57 + 0xd;
    } while (local_9b0 != pfVar57);
    local_1138 = local_908;
    puVar52 = local_f68;
    puVar73 = local_d58;
    puVar77 = local_548;
    do {
      uVar75 = 0;
      do {
        uVar59 = uVar75 & 0xffffffff;
        iVar142 = (int)uVar75;
        lVar74 = 0;
        do {
          while( true ) {
            iVar144 = (int)lVar74;
            iVar143 = iVar144;
            if (iVar144 <= iVar142) {
              iVar143 = iVar142;
            }
            if (iVar142 <= iVar144) {
              iVar144 = iVar142;
            }
            iVar145 = (int)uVar59;
            if (1 < iVar143 - iVar144) break;
            lVar39 = 0;
            do {
              while( true ) {
                iVar48 = (int)lVar39;
                iVar47 = iVar48;
                if (iVar144 <= iVar48) {
                  iVar47 = iVar144;
                }
                if (iVar48 <= iVar143) {
                  iVar48 = iVar143;
                }
                iVar51 = (int)uVar59;
                if (1 < iVar48 - iVar47) break;
                pfVar57 = (float *)(puVar73 + (long)iVar51 * 4);
                lVar55 = 0;
                do {
                  iVar38 = (int)lVar55;
                  iVar58 = iVar38;
                  if (iVar38 <= iVar48) {
                    iVar58 = iVar48;
                  }
                  iVar63 = iVar38;
                  if (iVar47 <= iVar38) {
                    iVar63 = iVar47;
                  }
                  if (iVar58 - iVar63 < 2) {
                    fVar102 = *(float *)(puVar77 + uVar75 * 4) +
                              *(float *)(puVar77 + lVar74 * 4 + 0x150) +
                              *(float *)(puVar77 + lVar39 * 4 + 0x2a0) +
                              *(float *)(puVar77 + lVar55 * 4 + 0x3f0);
                    if (fVar88 <= fVar102) {
                      fVar102 = fVar88;
                    }
                    if (fVar102 <= *pfVar57) {
                      uVar18 = puVar52[lVar55 + 0xfc];
                      *pfVar57 = fVar102;
                      *(uint *)(local_1138 + (long)(iVar51 + iVar38) * 4) =
                           CONCAT31(CONCAT21(CONCAT11(uVar18,puVar52[lVar39 + 0xa8]),
                                             puVar52[lVar74 + 0x54]),puVar52[uVar75]);
                    }
                  }
                  lVar55 = lVar55 + 1;
                  pfVar57 = pfVar57 + 1;
                } while (lVar55 != 4);
                lVar39 = lVar39 + 1;
                uVar59 = (ulong)(iVar51 + 1);
                if (lVar39 == 4) goto LAB_0010102d;
              }
              lVar39 = lVar39 + 1;
              uVar59 = (ulong)(iVar51 + 1);
            } while (lVar39 != 4);
LAB_0010102d:
            lVar74 = lVar74 + 1;
            uVar59 = (ulong)(iVar145 + 1);
            if (lVar74 == 4) goto LAB_0010104f;
          }
          lVar74 = lVar74 + 1;
          uVar59 = (ulong)(iVar145 + 1);
        } while (lVar74 != 4);
LAB_0010104f:
        uVar75 = uVar75 + 1;
      } while (uVar75 != 4);
      puVar73 = puVar73 + 0x34;
      puVar77 = puVar77 + 0x10;
      local_1138 = local_1138 + 0x34;
      puVar52 = puVar52 + 4;
    } while (auStack_f24 != puVar52);
    if (param_8 != 0) {
      uVar75 = 0;
      uVar59 = 0xffffffff;
      fVar88 = fVar86;
      do {
        fVar102 = fVar86;
        if (param_5[uVar75] < (float)_LC14) {
          iVar144 = (int)(char)param_4[uVar75];
          iVar142 = 0;
          iVar143 = 4;
          pcVar66 = &quant_mode_table + (iVar144 + 0x200);
          do {
            if (*pcVar66 < '\x04') break;
            if ((float)(&local_e28)[(long)*pcVar66 * 0xd + (long)(iVar143 + -4)] < fVar102) {
              fVar102 = (float)(&local_e28)[(long)*pcVar66 * 0xd + (long)(iVar143 + -4)];
              iVar142 = iVar143;
            }
            iVar143 = iVar143 + 1;
            pcVar66 = pcVar66 + 0x80;
          } while (iVar143 != 10);
          cVar42 = *(compression_working_buffers *)
                    (&quant_mode_table + (long)iVar144 + (long)iVar142 * 0x80);
          cVar65 = *(compression_working_buffers *)
                    (&quant_mode_table + (long)(iVar144 + 8) + (long)iVar142 * 0x80);
          param_13[uVar75 + 0x285c0] = cVar42;
          param_13[uVar75 + 0x28dc0] = cVar65;
          if ((char)cVar42 < '\x04') {
            *(undefined4 *)(param_13 + uVar75 * 4 + 0x295c0) = 0;
          }
          else {
            *(float *)(param_13 + uVar75 * 4 + 0x295c0) =
                 (&local_9d8)[(long)(iVar142 + -4) + (long)(char)cVar42 * 0xd];
          }
          fVar102 = fVar102 + param_5[uVar75];
          if (fVar102 < fVar88) {
            uVar59 = uVar75 & 0xffffffff;
            fVar88 = fVar102;
          }
        }
        local_9d8 = (float)uVar59;
        *(float *)(param_13 + uVar75 * 4 + 0x265c0) = fVar102;
        uVar75 = uVar75 + 1;
      } while (param_8 != uVar75);
      goto LAB_001011c9;
    }
LAB_00101f4b:
    local_9d8 = -NAN;
  }
  uVar136 = _UNK_001020ec;
  uVar132 = _UNK_001020e8;
  uVar23 = _UNK_001020e4;
  uVar50 = __LC32;
  fVar86 = (float)_LC14;
  iVar145 = _UNK_0010208c;
  iVar144 = _UNK_00102088;
  iVar143 = _UNK_00102084;
  iVar142 = __LC31;
  local_1024 = param_6;
  if (param_6 < 2) {
    if (param_6 == 0) goto LAB_001013bc;
  }
  else {
    puVar60 = auStack_9d4;
    do {
      param_7 = param_7 & 0xfffffffc;
      uVar133 = param_7 + iVar142;
      uVar137 = param_7 + iVar143;
      uVar139 = param_7 + iVar144;
      uVar141 = param_7 + iVar145;
      uVar138 = 0xffffffff;
      uVar140 = 0xffffffff;
      uVar103 = 0xffffffff;
      uVar99 = 0xffffffff;
      if (param_7 < param_8) {
        auVar111._4_4_ = _LC14._4_4_;
        auVar111._0_4_ = (float)_LC14;
        auVar111._8_8_ = _UNK_00102098;
        uVar43 = param_7;
        do {
          uVar75 = (ulong)uVar43;
          uVar43 = uVar43 + 4;
          pcVar40 = param_13 + uVar75 * 4 + 0x265c0;
          uVar78 = -(uint)(*(float *)pcVar40 < auVar111._0_4_);
          uVar79 = -(uint)(*(float *)(pcVar40 + 4) < auVar111._4_4_);
          uVar80 = -(uint)(*(float *)(pcVar40 + 8) < auVar111._8_4_);
          uVar81 = -(uint)(*(float *)(pcVar40 + 0xc) < auVar111._12_4_);
          auVar110._4_4_ = (uint)*(float *)(pcVar40 + 4) & uVar79;
          auVar110._0_4_ = (uint)*(float *)pcVar40 & uVar78;
          auVar110._8_4_ = (uint)*(float *)(pcVar40 + 8) & uVar80;
          auVar110._12_4_ = (uint)*(float *)(pcVar40 + 0xc) & uVar81;
          auVar24._4_4_ = ~uVar79 & (uint)auVar111._4_4_;
          auVar24._0_4_ = ~uVar78 & (uint)auVar111._0_4_;
          auVar24._8_4_ = ~uVar80 & (uint)auVar111._8_4_;
          auVar24._12_4_ = ~uVar81 & (uint)auVar111._12_4_;
          auVar111 = auVar110 | auVar24;
          uVar138 = uVar78 & uVar133 | ~uVar78 & uVar138;
          uVar140 = uVar79 & uVar137 | ~uVar79 & uVar140;
          uVar103 = uVar80 & uVar139 | ~uVar80 & uVar103;
          uVar99 = uVar81 & uVar141 | ~uVar81 & uVar99;
          uVar133 = uVar133 + __LC19;
          uVar137 = uVar137 + _UNK_001020a4;
          uVar139 = uVar139 + _UNK_001020a8;
          uVar141 = uVar141 + _UNK_001020ac;
        } while (uVar43 < param_8);
        auVar134._0_8_ = auVar111._8_8_;
        auVar134._8_4_ = auVar111._0_4_;
        auVar134._12_4_ = auVar111._0_4_;
      }
      else {
        auVar111._4_4_ = _LC14._4_4_;
        auVar111._0_4_ = (float)_LC14;
        auVar111._8_8_ = _UNK_00102098;
        auVar134 = auVar111;
      }
      auVar122 = minps(auVar111,auVar134);
      uVar87 = auVar122._0_4_;
      auVar135._4_4_ = uVar87;
      auVar135._0_4_ = auVar122._4_4_;
      auVar135._8_4_ = uVar87;
      auVar135._12_4_ = uVar87;
      auVar122 = minps(auVar122,auVar135);
      fVar88 = auVar122._0_4_;
      uVar133 = -(uint)(auVar111._0_4_ == fVar88);
      uVar137 = -(uint)(auVar111._4_4_ == fVar88);
      uVar139 = -(uint)(auVar111._8_4_ == fVar88);
      uVar141 = -(uint)(auVar111._12_4_ == fVar88);
      uVar138 = uVar138 & uVar133 | ~uVar133 & uVar50;
      uVar140 = uVar140 & uVar137 | ~uVar137 & uVar23;
      uVar103 = uVar103 & uVar139 | ~uVar139 & uVar132;
      uVar99 = uVar99 & uVar141 | ~uVar141 & uVar136;
      uVar133 = -(uint)((int)uVar138 < (int)uVar103);
      uVar137 = -(uint)((int)uVar140 < (int)uVar99);
      uVar138 = uVar138 & uVar133 | ~uVar133 & uVar103;
      uVar140 = uVar140 & uVar137 | ~uVar137 & uVar99;
      uVar103 = -(uint)((int)uVar138 < (int)uVar140);
      uVar138 = uVar138 & uVar103 | ~uVar103 & uVar140;
      *puVar60 = uVar138;
      if ((int)uVar138 < 0) break;
      puVar60 = puVar60 + 1;
      *(float *)(param_13 + (long)(int)uVar138 * 4 + 0x265c0) = fVar86;
    } while (puVar60 != auStack_9d4 + (ulong)(param_6 - 2) + 1);
  }
  uVar75 = 0;
  do {
    fVar86 = (&local_9d8)[uVar75];
    lVar74 = (long)(int)fVar86;
    if ((int)fVar86 < 0) {
      local_1024 = (uint)uVar75;
      break;
    }
    param_10[uVar75] = (int)fVar86;
    *(uint *)(param_11 + uVar75 * 4) = (uint)(byte)param_13[lVar74 + 0x285c0];
    lVar39 = 0;
    *(uint *)(param_12 + uVar75 * 4) = (uint)(byte)param_13[lVar74 + 0x28dc0];
    do {
      param_9[lVar39] = *(unsigned_char *)(param_13 + lVar39 + lVar74 * 4 + 0x295c0);
      lVar39 = lVar39 + 1;
    } while ((int)lVar39 < (int)uVar37);
    uVar75 = uVar75 + 1;
    param_9 = param_9 + 4;
  } while (param_6 != uVar75);
LAB_001013bc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_1024;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



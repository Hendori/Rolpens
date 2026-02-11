
/* basisu::compute_block_error(basisu::color_rgba const (*) [4], basisu::color_rgba const (*) [4],
   unsigned long&, unsigned long&, unsigned long&) */

void basisu::compute_block_error
               (color_rgba *param_1,color_rgba *param_2,ulong *param_3,ulong *param_4,ulong *param_5
               )

{
  long lVar1;
  long lVar2;
  color_rgba *pcVar3;
  color_rgba *pcVar4;
  color_rgba *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  color_rgba *pcVar9;
  
  lVar8 = 0;
  lVar6 = 0;
  pcVar9 = param_1 + 0x10;
  lVar2 = 0;
  lVar1 = 0;
  do {
    pcVar3 = pcVar9 + -0x10;
    pcVar5 = param_2;
    do {
      pcVar4 = pcVar3 + 4;
      lVar6 = lVar6 + (int)(((uint)(byte)*pcVar3 - (uint)(byte)*pcVar5) *
                           ((uint)(byte)*pcVar3 - (uint)(byte)*pcVar5));
      lVar2 = lVar2 + (int)(((uint)(byte)pcVar3[1] - (uint)(byte)pcVar5[1]) *
                           ((uint)(byte)pcVar3[1] - (uint)(byte)pcVar5[1]));
      lVar1 = lVar1 + (int)(((uint)(byte)pcVar3[2] - (uint)(byte)pcVar5[2]) *
                           ((uint)(byte)pcVar3[2] - (uint)(byte)pcVar5[2]));
      lVar8 = lVar8 + (int)(((uint)(byte)pcVar3[3] - (uint)(byte)pcVar5[3]) *
                           ((uint)(byte)pcVar3[3] - (uint)(byte)pcVar5[3]));
      pcVar3 = pcVar4;
      pcVar5 = pcVar5 + 4;
    } while (pcVar9 != pcVar4);
    pcVar9 = pcVar9 + 0x10;
    param_2 = param_2 + 0x10;
  } while (param_1 + 0x50 != pcVar9);
  uVar7 = lVar6 + lVar2 + lVar1;
  *param_5 = lVar6 + lVar8;
  *param_3 = uVar7;
  *param_4 = uVar7 + lVar8;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::astc_mode1(basisu::color_rgba const (*) [4], basisu::uastc_encode_results*, unsigned
   int&, basisu::bc7enc_compress_block_params&) */

void basisu::astc_mode1(color_rgba *param_1,uastc_encode_results *param_2,uint *param_3,
                       bc7enc_compress_block_params *param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 auVar3 [12];
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  byte bVar11;
  color_cell_compressor_results local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined4 local_118;
  undefined1 local_114 [12];
  undefined4 uStack_108;
  undefined4 local_104;
  undefined8 *puStack_100;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined1 auStack_f0 [12];
  undefined4 local_e4;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined5 local_b8;
  undefined4 uStack_b3;
  undefined2 uStack_af;
  undefined5 uStack_ad;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  char local_58 [16];
  undefined1 local_48 [24];
  long local_30;
  
  bVar11 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  auVar3._8_4_ = 0;
  auVar3._0_8_ = param_1;
  local_114 = auVar3 << 0x20;
  local_e4 = 0;
  uStack_cc = 0;
  local_104 = 0;
  auStack_f0 = SUB1612((undefined1  [16])0x0,4);
  local_148[0] = (color_cell_compressor_results)0x0;
  local_148[1] = (color_cell_compressor_results)0x0;
  local_148[2] = (color_cell_compressor_results)0x0;
  local_148[3] = (color_cell_compressor_results)0x0;
  local_148[4] = (color_cell_compressor_results)0x0;
  local_148[5] = (color_cell_compressor_results)0x0;
  local_148[6] = (color_cell_compressor_results)0x0;
  local_148[7] = (color_cell_compressor_results)0x0;
  local_148[8] = (color_cell_compressor_results)0x0;
  local_148[9] = (color_cell_compressor_results)0x0;
  local_148[10] = (color_cell_compressor_results)0x0;
  local_148[0xb] = (color_cell_compressor_results)0x0;
  local_148[0xc] = (color_cell_compressor_results)0x0;
  local_148[0xd] = (color_cell_compressor_results)0x0;
  local_148[0xe] = (color_cell_compressor_results)0x0;
  local_148[0xf] = (color_cell_compressor_results)0x0;
  puStack_100 = &basist::g_bc7_weights2;
  uStack_f8 = 0x110000;
  local_f4 = 0;
  local_118 = 0x10;
  uStack_108 = 4;
  local_d0 = 1;
  uStack_e0 = __LC0;
  uStack_d8 = (undefined4)_UNK_0010ea78;
  uStack_d4 = (undefined4)((ulong)_UNK_0010ea78 >> 0x20);
  local_138._8_8_ = 0;
  local_138._0_8_ = local_58;
  local_138 = local_138 << 0x40;
  local_128._8_8_ = 0;
  local_128._0_8_ = local_48;
  uVar6 = basisu::color_cell_compression
                    (0xff,(color_cell_compressor_params *)&local_118,local_148,param_4);
  uVar4 = _LC1;
  puVar10 = (undefined8 *)&uStack_c0;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + (ulong)bVar11 * -2 + 1;
  }
  uStack_bc = 8;
  local_c8 = _LC1;
  uStack_b3 = CONCAT31(CONCAT21(CONCAT11(local_128[0xd],local_128[9]),local_128[0xc]),local_128[8]);
  uStack_af = CONCAT11(local_128[0xe],local_128[10]);
  bVar2 = (uint)*(byte *)((ulong)local_128[8] * 2 + 0x112818) +
          (uint)*(byte *)((long)(int)(uint)local_128[9] * 2 + 0x112818) +
          (uint)*(byte *)((ulong)local_128[10] * 2 + 0x112818) <=
          (uint)*(byte *)((ulong)local_128[0xe] * 2 + 0x112818) +
          (uint)*(byte *)((long)(int)(uint)local_128[0xc] * 2 + 0x112818) +
          (uint)*(byte *)((ulong)local_128[0xd] * 2 + 0x112818);
  if (!bVar2) {
    uStack_b3 = CONCAT31(CONCAT21(CONCAT11(local_128[9],local_128[0xd]),local_128[8]),local_128[0xc]
                        );
    uStack_af = CONCAT11(local_128[10],local_128[0xe]);
  }
  uVar7 = 4;
  do {
    uVar9 = (ulong)(uVar7 - 4);
    cVar1 = local_58[uVar9];
    if (bVar2) {
      *(char *)((long)&local_a8 + uVar9 + 7) = cVar1;
      for (uVar5 = uVar7 - 3; uVar5 != uVar7; uVar5 = uVar5 + 1) {
        *(char *)((long)&local_a8 + (ulong)uVar5 + 7) = local_58[uVar5];
      }
    }
    else {
      while( true ) {
        uVar5 = (int)uVar9 + 1;
        *(char *)((long)&local_a8 + uVar9 + 7) = '\x03' - cVar1;
        if (uVar7 == uVar5) break;
        uVar9 = (ulong)uVar5;
        cVar1 = local_58[uVar9];
      }
    }
    uVar7 = uVar7 + 4;
  } while (uVar7 != 0x14);
  if (*param_3 < 0x200) {
    *(undefined4 *)(param_2 + (ulong)*param_3 * 0x80) = 1;
    *(undefined4 *)(param_2 + (ulong)*param_3 * 0x80 + 4) = 0;
    uVar7 = *param_3;
    *(undefined8 *)(param_2 + (ulong)uVar7 * 0x80 + 8) = uVar4;
    *(ulong *)(param_2 + (ulong)uVar7 * 0x80 + 0x10) = CONCAT44(8,uStack_c0);
    *(ulong *)(param_2 + (ulong)uVar7 * 0x80 + 0x18) = CONCAT35((undefined3)uStack_b3,local_b8);
    *(ulong *)(param_2 + (ulong)uVar7 * 0x80 + 0x20) =
         CONCAT53(uStack_ad,CONCAT21(uStack_af,uStack_b3._3_1_));
    *(undefined8 *)(param_2 + (ulong)uVar7 * 0x80 + 0x68) = local_68;
    *(undefined8 *)(param_2 + (ulong)uVar7 * 0x80 + 0x28) = local_a8;
    *(undefined8 *)(param_2 + (ulong)uVar7 * 0x80 + 0x30) = uStack_a0;
    *(undefined8 *)(param_2 + (ulong)uVar7 * 0x80 + 0x38) = local_98;
    *(undefined8 *)(param_2 + (ulong)uVar7 * 0x80 + 0x40) = uStack_90;
    *(undefined8 *)(param_2 + (ulong)uVar7 * 0x80 + 0x48) = local_88;
    *(undefined8 *)(param_2 + (ulong)uVar7 * 0x80 + 0x50) = uStack_80;
    *(undefined8 *)(param_2 + (ulong)uVar7 * 0x80 + 0x58) = local_78;
    *(undefined8 *)(param_2 + (ulong)uVar7 * 0x80 + 0x60) = uStack_70;
    uVar7 = *param_3;
    *(undefined8 *)(param_2 + (ulong)uVar7 * 0x80 + 0x78) = uVar6;
    *param_3 = uVar7 + 1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* basisu::astc_mode0_or_18(unsigned int, basisu::color_rgba const (*) [4],
   basisu::uastc_encode_results*, unsigned int&, basisu::bc7enc_compress_block_params&, unsigned
   char const*) */

void basisu::astc_mode0_or_18
               (uint param_1,color_rgba *param_2,uastc_encode_results *param_3,uint *param_4,
               bc7enc_compress_block_params *param_5,uchar *param_6)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  char cVar11;
  undefined4 uVar12;
  long in_FS_OFFSET;
  byte bVar13;
  color_cell_compressor_results local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined4 local_128;
  undefined1 local_124 [16];
  undefined4 local_114;
  undefined8 *puStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  uchar *puStack_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined8 uStack_e4;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined5 local_c8;
  undefined4 uStack_c3;
  undefined2 uStack_bf;
  undefined5 uStack_bd;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  char local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  bVar13 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x12) {
    uVar12 = 0xb;
    lVar7 = 0xb;
    uVar8 = 0x20;
    puStack_110 = &basist::g_astc_weights5;
    uStack_108 = 0x110040;
  }
  else {
    uVar12 = 8;
    lVar7 = 0x13;
    uVar8 = 0x10;
    puStack_110 = &basist::g_astc_weights4;
    uStack_108 = 0x110030;
  }
  uStack_dc = 0;
  uStack_100 = 0;
  local_114 = 0;
  local_124._8_4_ = uVar8;
  local_124._0_8_ = param_2;
  local_124._12_4_ = 0;
  local_124 = local_124 << 0x20;
  uStack_104 = 0;
  local_128 = 0x10;
  local_f0 = (undefined4)lVar7;
  local_ec = 1;
  uStack_e8 = 1;
  uStack_e4 = 0x100000001;
  local_158[0] = (color_cell_compressor_results)0x0;
  local_158[1] = (color_cell_compressor_results)0x0;
  local_158[2] = (color_cell_compressor_results)0x0;
  local_158[3] = (color_cell_compressor_results)0x0;
  local_158[4] = (color_cell_compressor_results)0x0;
  local_158[5] = (color_cell_compressor_results)0x0;
  local_158[6] = (color_cell_compressor_results)0x0;
  local_158[7] = (color_cell_compressor_results)0x0;
  local_158[8] = (color_cell_compressor_results)0x0;
  local_158[9] = (color_cell_compressor_results)0x0;
  local_158[10] = (color_cell_compressor_results)0x0;
  local_158[0xb] = (color_cell_compressor_results)0x0;
  local_158[0xc] = (color_cell_compressor_results)0x0;
  local_158[0xd] = (color_cell_compressor_results)0x0;
  local_158[0xe] = (color_cell_compressor_results)0x0;
  local_158[0xf] = (color_cell_compressor_results)0x0;
  local_148._8_8_ = 0;
  local_148._0_8_ = local_68;
  local_148 = local_148 << 0x40;
  local_138._8_8_ = 0;
  local_138._0_8_ = local_58;
  puStack_f8 = param_6;
  uVar3 = basisu::color_cell_compression
                    (0xff,(color_cell_compressor_params *)&local_128,local_158,param_5);
  puVar10 = (undefined8 *)&uStack_d0;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + (ulong)bVar13 * -2 + 1;
  }
  uStack_d4 = 1;
  uStack_cc = 8;
  uStack_c3 = CONCAT31(CONCAT21(CONCAT11(local_138[0xd],local_138[9]),local_138[0xc]),local_138[8]);
  uStack_bf = CONCAT11(local_138[0xe],local_138[10]);
  bVar2 = false;
  if ((param_6 == (uchar *)0x0) &&
     (lVar7 = lVar7 * 0x100,
     (uint)*(byte *)((long)&basist::g_astc_unquant + ((int)(uint)local_138[0xd] + lVar7) * 2) +
     (uint)*(byte *)((long)&basist::g_astc_unquant + ((int)(uint)local_138[0xc] + lVar7) * 2) +
     (uint)*(byte *)((long)&basist::g_astc_unquant + (lVar7 + (ulong)local_138[0xe]) * 2) <
     (uint)*(byte *)((long)&basist::g_astc_unquant + ((int)(uint)local_138[8] + lVar7) * 2) +
     (uint)*(byte *)((long)&basist::g_astc_unquant + ((int)(uint)local_138[9] + lVar7) * 2) +
     (uint)*(byte *)((long)&basist::g_astc_unquant + ((ulong)local_138[10] + lVar7) * 2))) {
    uStack_c3 = CONCAT31(CONCAT21(CONCAT11(local_138[9],local_138[0xd]),local_138[8]),local_138[0xc]
                        );
    uStack_bf = CONCAT11(local_138[10],local_138[0xe]);
    bVar2 = true;
  }
  uVar9 = 4;
  cVar11 = '\x1f';
  if (param_1 != 0x12) {
    cVar11 = '\x0f';
  }
  do {
    uVar5 = (ulong)(uVar9 - 4);
    cVar1 = local_68[uVar5];
    if (bVar2) {
      while( true ) {
        uVar6 = (int)uVar5 + 1;
        *(char *)((long)&local_b8 + uVar5 + 7) = cVar11 - cVar1;
        if (uVar6 == uVar9) break;
        cVar1 = local_68[uVar6];
        uVar5 = (ulong)uVar6;
      }
    }
    else {
      *(char *)((long)&local_b8 + uVar5 + 7) = cVar1;
      for (uVar6 = uVar9 - 3; uVar6 != uVar9; uVar6 = uVar6 + 1) {
        *(char *)((long)&local_b8 + (ulong)uVar6 + 7) = local_68[uVar6];
      }
    }
    uVar9 = uVar9 + 4;
  } while (uVar9 != 0x14);
  if (*param_4 < 0x200) {
    *(uint *)(param_3 + (ulong)*param_4 * 0x80) = param_1;
    *(undefined4 *)(param_3 + (ulong)*param_4 * 0x80 + 4) = 0;
    uVar9 = *param_4;
    *(ulong *)(param_3 + (ulong)uVar9 * 0x80 + 8) = CONCAT44(1,uVar12);
    *(ulong *)(param_3 + (ulong)uVar9 * 0x80 + 0x10) = CONCAT44(8,uStack_d0);
    *(undefined8 *)(param_3 + (ulong)uVar9 * 0x80 + 0x68) = local_78;
    *(ulong *)(param_3 + (ulong)uVar9 * 0x80 + 0x18) = CONCAT35((undefined3)uStack_c3,local_c8);
    *(ulong *)(param_3 + (ulong)uVar9 * 0x80 + 0x20) =
         CONCAT53(uStack_bd,CONCAT21(uStack_bf,uStack_c3._3_1_));
    *(undefined8 *)(param_3 + (ulong)uVar9 * 0x80 + 0x28) = local_b8;
    *(undefined8 *)(param_3 + (ulong)uVar9 * 0x80 + 0x30) = uStack_b0;
    *(undefined8 *)(param_3 + (ulong)uVar9 * 0x80 + 0x38) = local_a8;
    *(undefined8 *)(param_3 + (ulong)uVar9 * 0x80 + 0x40) = uStack_a0;
    *(undefined8 *)(param_3 + (ulong)uVar9 * 0x80 + 0x48) = local_98;
    *(undefined8 *)(param_3 + (ulong)uVar9 * 0x80 + 0x50) = uStack_90;
    *(undefined8 *)(param_3 + (ulong)uVar9 * 0x80 + 0x58) = local_88;
    *(undefined8 *)(param_3 + (ulong)uVar9 * 0x80 + 0x60) = uStack_80;
    uVar9 = *param_4;
    *(undefined8 *)(param_3 + (ulong)uVar9 * 0x80 + 0x78) = uVar3;
    *param_4 = uVar9 + 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
    local_d8 = uVar12;
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::astc_mode11_or_17(unsigned int, basisu::color_rgba const (*) [4],
   basisu::uastc_encode_results*, unsigned int&, basisu::bc7enc_compress_block_params&) */

void basisu::astc_mode11_or_17
               (uint param_1,color_rgba *param_2,uastc_encode_results *param_3,uint *param_4,
               bc7enc_compress_block_params *param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined8 uVar7;
  byte bVar8;
  uint uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  char cVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  undefined8 *puVar19;
  uint uVar20;
  uint uVar21;
  color_rgba *pcVar22;
  uint uVar23;
  long lVar24;
  long in_FS_OFFSET;
  byte bVar25;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  char cVar29;
  char cVar30;
  char cVar31;
  undefined1 auVar28 [16];
  long local_310;
  uint local_2f8;
  byte local_2f2;
  byte local_2f1;
  byte local_291;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  ulong uStack_270;
  color_cell_compressor_results local_268 [24];
  uint *puStack_250;
  undefined1 *local_248;
  byte abStack_240 [4];
  byte abStack_23c [4];
  color_cell_compressor_results local_238 [24];
  uint *puStack_220;
  undefined1 *local_218;
  byte bStack_210;
  byte bStack_20f;
  byte bStack_20e;
  byte bStack_20c;
  byte bStack_20b;
  byte bStack_20a;
  undefined4 local_208 [16];
  undefined4 local_1c8;
  undefined4 local_188;
  undefined1 local_184 [12];
  undefined4 uStack_178;
  undefined4 local_174;
  undefined8 *puStack_170;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined1 auStack_160 [12];
  undefined4 local_154;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 local_144;
  undefined4 uStack_13c;
  undefined4 local_138 [2];
  undefined4 *puStack_130;
  undefined4 uStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  uint uStack_100;
  undefined8 uStack_fc;
  undefined8 local_f4;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 uStack_d4;
  undefined2 uStack_d3;
  byte bStack_d1;
  byte bStack_d0;
  undefined2 uStack_cf;
  byte bStack_cd;
  undefined4 uStack_cc;
  undefined1 local_c8 [7];
  undefined1 auStack_c1 [4];
  undefined4 uStack_bd;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_78 [16];
  uint local_68 [4];
  uint local_58 [6];
  long local_40;
  
  bVar25 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = 0xd;
  if (param_1 == 0x11) {
    uVar9 = 0x14;
  }
  lVar24 = 0;
  local_288 = (undefined4)*(undefined8 *)param_5;
  uStack_274 = (undefined4)((ulong)*(undefined8 *)(param_5 + 0x10) >> 0x20);
  uStack_270 = *(ulong *)(param_5 + 0x18) & 0xffffffffffffff00;
  uStack_284 = (undefined4)__LC3;
  uStack_280 = (undefined4)((ulong)__LC3 >> 0x20);
  uStack_27c = (undefined4)_UNK_0010ea88;
  local_278 = (undefined4)((ulong)_UNK_0010ea88 >> 0x20);
  puVar10 = local_208;
  puVar16 = &local_1c8;
  pcVar22 = param_2;
  do {
    do {
      uVar3 = *(undefined4 *)pcVar22;
      *puVar10 = uVar3;
      *puVar16 = uVar3;
      if (param_1 == 0x11) {
        uVar1 = *(undefined1 *)((long)puVar10 + 3);
        *(undefined1 *)((long)puVar16 + 3) = 0xff;
        *(undefined1 *)((long)puVar16 + 2) = uVar1;
        uVar2 = *(undefined1 *)puVar10;
        *(ushort *)puVar16 = CONCAT11(uVar1,uVar1);
        *(ushort *)((long)puVar10 + 1) = CONCAT11(uVar2,uVar2);
      }
      else {
        uVar1 = *(undefined1 *)((long)puVar16 + lVar24);
        *(undefined1 *)((long)puVar16 + 3) = 0xff;
        *(undefined1 *)((long)puVar16 + 2) = uVar1;
        uVar2 = *(undefined1 *)((long)puVar10 + 3);
        *(ushort *)puVar16 = CONCAT11(uVar1,uVar1);
        *(undefined1 *)((long)puVar10 + lVar24) = uVar2;
      }
      *(undefined1 *)((long)puVar10 + 3) = 0xff;
      puVar10 = puVar10 + 1;
      puVar16 = puVar16 + 1;
      pcVar22 = pcVar22 + 4;
    } while (&local_1c8 != puVar10);
    auVar6._8_4_ = 0;
    auVar6._0_8_ = local_208;
    local_184 = auVar6 << 0x20;
    local_268[0] = (color_cell_compressor_results)0x0;
    local_268[1] = (color_cell_compressor_results)0x0;
    local_268[2] = (color_cell_compressor_results)0x0;
    local_268[3] = (color_cell_compressor_results)0x0;
    local_268[4] = (color_cell_compressor_results)0x0;
    local_268[5] = (color_cell_compressor_results)0x0;
    local_268[6] = (color_cell_compressor_results)0x0;
    local_268[7] = (color_cell_compressor_results)0x0;
    local_268[8] = (color_cell_compressor_results)0x0;
    local_268[9] = (color_cell_compressor_results)0x0;
    local_268[10] = (color_cell_compressor_results)0x0;
    local_268[0xb] = (color_cell_compressor_results)0x0;
    local_268[0xc] = (color_cell_compressor_results)0x0;
    local_268[0xd] = (color_cell_compressor_results)0x0;
    local_268[0xe] = (color_cell_compressor_results)0x0;
    local_268[0xf] = (color_cell_compressor_results)0x0;
    local_174 = 0;
    auStack_160 = SUB1612((undefined1  [16])0x0,4);
    local_154 = 0;
    uStack_13c = 0;
    abStack_23c[2] = 0;
    abStack_23c[1] = 0;
    abStack_23c[0] = 0;
    abStack_240[2] = 0;
    abStack_240[1] = 0;
    abStack_240[0] = 0;
    puStack_170 = &basist::g_bc7_weights2;
    uStack_168 = 0x110000;
    local_164 = 0;
    local_188 = 0x10;
    uStack_178 = 4;
    uStack_14c = 1;
    uStack_148 = 1;
    local_144 = 0x100000001;
    puStack_250 = local_68;
    local_248 = local_78;
    uStack_150 = uVar9;
    uVar11 = basisu::color_cell_compression
                       (0xff,(color_cell_compressor_params *)&local_188,local_268,
                        (bc7enc_compress_block_params *)&local_288);
    local_138[0] = 0x10;
    puStack_120 = &basist::g_bc7_weights2;
    puStack_118 = &g_bc7_weights2x;
    local_238[0] = (color_cell_compressor_results)0x0;
    local_238[1] = (color_cell_compressor_results)0x0;
    local_238[2] = (color_cell_compressor_results)0x0;
    local_238[3] = (color_cell_compressor_results)0x0;
    local_238[4] = (color_cell_compressor_results)0x0;
    local_238[5] = (color_cell_compressor_results)0x0;
    local_238[6] = (color_cell_compressor_results)0x0;
    local_238[7] = (color_cell_compressor_results)0x0;
    local_238[8] = (color_cell_compressor_results)0x0;
    local_238[9] = (color_cell_compressor_results)0x0;
    local_238[10] = (color_cell_compressor_results)0x0;
    local_238[0xb] = (color_cell_compressor_results)0x0;
    local_238[0xc] = (color_cell_compressor_results)0x0;
    local_238[0xd] = (color_cell_compressor_results)0x0;
    local_238[0xe] = (color_cell_compressor_results)0x0;
    local_238[0xf] = (color_cell_compressor_results)0x0;
    bStack_20a = 0;
    bStack_20b = 0;
    bStack_20c = 0;
    bStack_20e = 0;
    bStack_20f = 0;
    bStack_210 = 0;
    uStack_128 = 4;
    uStack_fc = 0x100000001;
    local_f4 = 0x100000001;
    puStack_220 = local_58;
    local_218 = local_78;
    puStack_130 = &local_1c8;
    uStack_100 = uVar9;
    uVar12 = basisu::color_cell_compression
                       (0xff,(color_cell_compressor_params *)local_138,local_238,
                        (bc7enc_compress_block_params *)&local_288);
    uVar7 = _LC1;
    auVar26._8_8_ = extraout_XMM0_Qb;
    auVar26._0_8_ = extraout_XMM0_Qa;
    if (param_1 == 0x11) {
      local_310 = uVar11 / 3 + uVar12 / 3;
      puVar19 = (undefined8 *)&uStack_e0;
      for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
        *puVar19 = 0;
        puVar19 = puVar19 + (ulong)bVar25 * -2 + 1;
      }
      uStack_d4 = 1;
      local_e8 = _LC1;
      uStack_dc = (undefined4)_LC4;
      uStack_d8 = (undefined4)((ulong)_LC4 >> 0x20);
      cVar15 = '\0';
      uStack_d3 = CONCAT11(abStack_23c[0],abStack_240[0]);
      bStack_d1 = bStack_210;
      bStack_d0 = bStack_20c;
    }
    else {
      local_310 = uVar11 + uVar12 / 3;
      puVar19 = (undefined8 *)&uStack_e0;
      for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
        *puVar19 = 0;
        puVar19 = puVar19 + (ulong)bVar25 * -2 + 1;
      }
      uStack_d4 = 1;
      uStack_d8 = (int)lVar24;
      local_e8 = _LC1;
      uStack_dc = 0xc;
      if (lVar24 == 0) {
        local_2f1 = bStack_20c;
        uVar17 = (uint)bStack_20c;
        local_2f2 = bStack_210;
        uVar18 = (uint)bStack_210;
        uVar23 = (uint)abStack_23c[1];
        uVar13 = (uint)abStack_240[1];
        uVar20 = (uint)abStack_240[2];
        uVar21 = (uint)abStack_240[2];
        local_291 = abStack_23c[2];
        uStack_d3 = CONCAT11(bStack_20c,bStack_210);
        bStack_d1 = abStack_240[1];
        bStack_d0 = abStack_23c[1];
        uStack_cf = CONCAT11(abStack_23c[2],abStack_240[2]);
        local_2f8 = (uint)abStack_23c[2];
LAB_00100c2f:
        bStack_210 = abStack_240[lVar24];
        bStack_20c = abStack_23c[lVar24];
      }
      else {
        uVar18 = (uint)abStack_240[0];
        local_2f2 = abStack_240[0];
        uStack_d3 = CONCAT11(abStack_23c[0],abStack_240[0]);
        local_2f1 = abStack_23c[0];
        if (lVar24 == 1) {
          uVar13 = (uint)bStack_20f;
          uVar17 = (uint)abStack_23c[0];
          uVar20 = (uint)abStack_240[2];
          uVar23 = (uint)bStack_20b;
          local_291 = abStack_23c[2];
          local_2f8 = (uint)abStack_23c[2];
          uVar21 = (uint)abStack_240[2];
          uStack_cf = CONCAT11(abStack_23c[2],abStack_240[2]);
          bStack_d1 = bStack_20f;
          bStack_d0 = bStack_20b;
          goto LAB_00100c2f;
        }
        bStack_d1 = abStack_240[1];
        bStack_d0 = abStack_23c[1];
        if (lVar24 == 2) {
          uVar20 = (uint)bStack_20e;
          local_291 = bStack_20a;
          uVar23 = (uint)abStack_23c[1];
          uVar13 = (uint)abStack_240[1];
          uVar17 = (uint)abStack_23c[0];
          uVar21 = (uint)bStack_20e;
          uStack_cf = CONCAT11(bStack_20a,bStack_20e);
          uVar18 = (uint)abStack_240[0];
          local_2f8 = (uint)bStack_20a;
          goto LAB_00100c2f;
        }
        local_291 = abStack_23c[2];
        uVar23 = (uint)abStack_23c[1];
        uVar13 = (uint)abStack_240[1];
        uVar17 = (uint)abStack_23c[0];
        uVar21 = (uint)abStack_240[2];
        uStack_cf = CONCAT11(abStack_23c[2],abStack_240[2]);
        uVar18 = (uint)abStack_240[0];
        local_2f8 = (uint)abStack_23c[2];
        uVar20 = uVar21;
      }
      bVar8 = bStack_d1;
      uStack_cc = CONCAT31(uStack_cc._1_3_,bStack_20c);
      lVar14 = (ulong)uVar9 * 0x100;
      bStack_cd = bStack_210;
      cVar15 = '\0';
      if ((uint)*(byte *)((long)&basist::g_astc_unquant + (lVar14 + (int)local_2f8) * 2) +
          (uint)*(byte *)((long)&basist::g_astc_unquant + ((int)uVar23 + lVar14) * 2) +
          (uint)*(byte *)((long)&basist::g_astc_unquant + ((int)uVar17 + lVar14) * 2) <
          (uint)*(byte *)((long)&basist::g_astc_unquant + ((int)uVar20 + lVar14) * 2) +
          (uint)*(byte *)((long)&basist::g_astc_unquant + ((int)uVar13 + lVar14) * 2) +
          (uint)*(byte *)((long)&basist::g_astc_unquant + ((int)uVar18 + lVar14) * 2)) {
        uStack_d3 = CONCAT11(local_2f2,local_2f1);
        cVar15 = '\x01';
        bStack_d1 = bStack_d0;
        bStack_d0 = bVar8;
        uStack_cf = (undefined2)CONCAT41(uVar21,local_291);
        bStack_cd = bStack_20c;
        uStack_cc = CONCAT31(uStack_cc._1_3_,bStack_210);
      }
    }
    local_e8 = _LC1;
    uStack_d4 = 1;
    lVar14 = 0;
    do {
      uVar20 = *(uint *)((long)local_68 + lVar14);
      uVar13 = *(uint *)((long)local_58 + lVar14);
      cVar29 = (char)((uint)_LC5 >> 8);
      cVar30 = (char)((uint)_LC5 >> 0x10);
      cVar31 = (char)((uint)_LC5 >> 0x18);
      auVar26 = pshuflw(auVar26,ZEXT216(CONCAT11(-cVar15,-cVar15)),0);
      auVar27 = ~auVar26 & ZEXT416(uVar20) |
                ZEXT416(CONCAT13(cVar31 - (char)(uVar20 >> 0x18),
                                 CONCAT12(cVar30 - (char)(uVar20 >> 0x10),
                                          CONCAT11(cVar29 - (char)(uVar20 >> 8),
                                                   (char)_LC5 - (char)uVar20)))) & auVar26;
      auVar26 = ~auVar26 & ZEXT416(uVar13) |
                ZEXT416(CONCAT13(cVar31 - (char)(uVar13 >> 0x18),
                                 CONCAT12(cVar30 - (char)(uVar13 >> 0x10),
                                          CONCAT11(cVar29 - (char)(uVar13 >> 8),
                                                   (char)_LC5 - (char)uVar13)))) & auVar26;
      auVar5._10_6_ = 0;
      auVar5._0_10_ = SUB1610(ZEXT116(auVar26[3]) << 0x38,6);
      auVar4._11_5_ = 0;
      auVar4._0_11_ = SUB1611(auVar5 << 0x30,5);
      auVar28._4_12_ = SUB1612(auVar4 << 0x28,4);
      auVar28[3] = auVar26[1];
      auVar28[2] = auVar27[1];
      auVar28[1] = auVar26[0];
      auVar28[0] = auVar27[0];
      *(int *)(local_c8 + lVar14 * 2 + 7) = auVar28._0_4_;
      *(uint *)((long)&uStack_bd + lVar14 * 2) =
           CONCAT31(CONCAT21(CONCAT11(auVar26[3],auVar27[3]),auVar26[2]),auVar27[2]);
      lVar14 = lVar14 + 4;
    } while (lVar14 != 0x10);
    if (*param_4 < 0x200) {
      *(uint *)(param_3 + (ulong)*param_4 * 0x80) = param_1;
      *(undefined4 *)(param_3 + (ulong)*param_4 * 0x80 + 4) = 0;
      uVar20 = *param_4;
      *(undefined8 *)(param_3 + (ulong)uVar20 * 0x80 + 8) = uVar7;
      *(ulong *)(param_3 + (ulong)uVar20 * 0x80 + 0x10) = CONCAT44(uStack_dc,uStack_e0);
      *(ulong *)(param_3 + (ulong)uVar20 * 0x80 + 0x18) =
           CONCAT17(bStack_d1,CONCAT25(uStack_d3,CONCAT14(1,uStack_d8)));
      *(ulong *)(param_3 + (ulong)uVar20 * 0x80 + 0x20) =
           CONCAT44(uStack_cc,CONCAT13(bStack_cd,CONCAT21(uStack_cf,bStack_d0)));
      *(undefined8 *)(param_3 + (ulong)uVar20 * 0x80 + 0x28) = _local_c8;
      *(undefined8 *)(param_3 + (ulong)uVar20 * 0x80 + 0x30) = stack0xffffffffffffff40;
      *(undefined8 *)(param_3 + (ulong)uVar20 * 0x80 + 0x68) = local_88;
      *(undefined8 *)(param_3 + (ulong)uVar20 * 0x80 + 0x38) = local_b8;
      *(undefined8 *)(param_3 + (ulong)uVar20 * 0x80 + 0x40) = uStack_b0;
      *(undefined8 *)(param_3 + (ulong)uVar20 * 0x80 + 0x48) = local_a8;
      *(undefined8 *)(param_3 + (ulong)uVar20 * 0x80 + 0x50) = uStack_a0;
      *(undefined8 *)(param_3 + (ulong)uVar20 * 0x80 + 0x58) = local_98;
      *(undefined8 *)(param_3 + (ulong)uVar20 * 0x80 + 0x60) = uStack_90;
      uVar20 = *param_4;
      *(long *)(param_3 + (ulong)uVar20 * 0x80 + 0x78) = local_310;
      *param_4 = uVar20 + 1;
    }
    lVar24 = lVar24 + 1;
    puVar10 = local_208;
    puVar16 = &local_1c8;
    pcVar22 = param_2;
    if ((ulong)(param_1 != 0x11) * 3 + 1 == lVar24) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}



/* basisu::estimate_partition2(unsigned int, unsigned int, unsigned int const*, basisu::color_rgba
   const (*) [4], unsigned int const*) [clone .constprop.0] */

int basisu::estimate_partition2
              (uint param_1,uint param_2,uint *param_3,color_rgba *param_4,uint *param_5)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  long in_FS_OFFSET;
  int local_e4;
  uint local_d0 [2];
  color_quad_u8 local_c8 [64];
  color_quad_u8 local_88 [72];
  long local_40;
  
  uVar7 = 0xffffffffffffffff;
  iVar6 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e4 = 0;
  pbVar8 = (byte *)&basist::g_astc_bc7_common_partitions2;
  do {
    bVar2 = *pbVar8;
    lVar5 = 0;
    local_d0[0] = 0;
    local_d0[1] = 0;
    do {
      uVar4 = (ulong)*(byte *)((long)&basist::g_bc7_partition2 + lVar5 + (ulong)bVar2 * 0x10);
      uVar3 = *(uint *)(local_c8 + uVar4 * 4 + -8);
      *(uint *)(local_c8 + uVar4 * 4 + -8) = uVar3 + 1;
      lVar1 = lVar5 * 4;
      lVar5 = lVar5 + 1;
      *(undefined4 *)(local_c8 + (uVar4 * 0x10 + (ulong)uVar3) * 4) =
           *(undefined4 *)(param_4 + lVar1);
    } while (lVar5 != 0x10);
    if (uVar7 != 0) {
      uVar4 = basisu::color_cell_compression_est_astc
                        (param_1,param_2,param_3,local_d0[0],local_c8,uVar7,param_5);
      if (uVar4 < uVar7) {
        lVar5 = basisu::color_cell_compression_est_astc
                          (param_1,param_2,param_3,local_d0[1],local_88,uVar7,param_5);
        if (lVar5 + uVar4 < uVar7) {
          uVar7 = lVar5 + uVar4;
          local_e4 = iVar6;
        }
      }
    }
    iVar6 = iVar6 + 1;
    pbVar8 = pbVar8 + 6;
  } while (iVar6 != 0x1e);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_e4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::astc_mode9_or_16(unsigned int, basisu::color_rgba const (*) [4],
   basisu::uastc_encode_results*, unsigned int&, basisu::bc7enc_compress_block_params&, unsigned
   int) */

void basisu::astc_mode9_or_16
               (uint param_1,color_rgba *param_2,uastc_encode_results *param_3,uint *param_4,
               bc7enc_compress_block_params *param_5,uint param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  char cVar14;
  color_cell_compressor_results cVar15;
  color_cell_compressor_results cVar16;
  uint uVar17;
  byte bVar18;
  byte bVar24;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined3 uVar45;
  bool bVar46;
  undefined5 uVar47;
  undefined1 auVar48 [12];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [14];
  undefined *puVar52;
  undefined8 uVar53;
  long lVar54;
  ulong uVar55;
  ulong uVar56;
  long lVar57;
  long lVar58;
  ulong uVar59;
  int iVar60;
  long lVar61;
  int iVar62;
  long lVar63;
  byte *pbVar64;
  int iVar65;
  undefined8 *puVar66;
  uint uVar67;
  long lVar68;
  int iVar69;
  color_rgba *pcVar70;
  undefined1 *puVar71;
  byte *pbVar72;
  byte *pbVar73;
  color_rgba *pcVar74;
  color_cell_compressor_params *pcVar75;
  color_cell_compressor_results *pcVar76;
  long in_FS_OFFSET;
  byte bVar77;
  ushort uVar91;
  ushort uVar92;
  ushort uVar93;
  ushort uVar94;
  undefined1 auVar78 [16];
  undefined1 auVar85 [16];
  ushort uVar95;
  ushort uVar96;
  ushort uVar97;
  ushort uVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [11];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  ushort uVar105;
  ushort uVar106;
  ushort uVar107;
  ushort uVar108;
  ushort uVar109;
  ushort uVar110;
  ushort uVar111;
  ushort uVar112;
  undefined1 auVar113 [16];
  ulong local_418;
  color_cell_compressor_params *local_400;
  undefined4 local_3c0;
  undefined8 *local_350;
  undefined2 local_332;
  uint local_330 [2];
  undefined8 local_328;
  undefined8 uStack_320;
  undefined1 local_318 [2] [16];
  byte local_2f8 [32];
  undefined1 local_2d8 [32];
  color_rgba local_2b8 [16];
  char local_2a8;
  undefined1 uStack_2a7;
  undefined1 uStack_2a6;
  char cStack_2a5;
  char cStack_2a4;
  undefined1 uStack_2a3;
  undefined1 uStack_2a2;
  char cStack_2a1;
  char cStack_2a0;
  undefined1 uStack_29f;
  undefined1 uStack_29e;
  char cStack_29d;
  char cStack_29c;
  undefined1 uStack_29b;
  undefined1 uStack_29a;
  char cStack_299;
  undefined1 local_298 [16];
  byte local_288;
  undefined1 uStack_287;
  undefined1 uStack_286;
  char cStack_285;
  char cStack_284;
  undefined1 uStack_283;
  undefined1 uStack_282;
  char cStack_281;
  char cStack_280;
  undefined1 uStack_27f;
  undefined1 uStack_27e;
  char cStack_27d;
  char cStack_27c;
  undefined1 uStack_27b;
  undefined1 uStack_27a;
  char cStack_279;
  undefined1 local_278 [64];
  color_cell_compressor_results local_238 [40];
  byte abStack_210 [56];
  undefined8 local_1d8;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158 [28];
  color_cell_compressor_params local_e8 [64];
  color_quad_u8 local_a8 [104];
  long local_40;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  char cVar25;
  char cVar26;
  char cVar27;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar82 [16];
  undefined1 auVar88 [16];
  undefined1 auVar83 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar84 [16];
  undefined1 auVar101 [12];
  undefined1 auVar102 [13];
  
  puVar52 = PTR_g_bc7_weights2_0010ea58;
  bVar77 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x10) {
    auVar1 = *(undefined1 (*) [16])param_2;
    local_3c0 = 0x14;
    pcVar70 = local_2b8;
    auVar2 = *(undefined1 (*) [16])(param_2 + 0x10);
    auVar3 = *(undefined1 (*) [16])(param_2 + 0x20);
    auVar4 = *(undefined1 (*) [16])(param_2 + 0x30);
    auVar113 = __LC6 & auVar2;
    uVar109 = auVar2._2_2_ >> 8;
    uVar110 = auVar2._6_2_ >> 8;
    uVar111 = auVar2._10_2_ >> 8;
    uVar112 = auVar2._14_2_ >> 8;
    auVar103 = __LC6 & auVar1;
    sVar28 = auVar103._0_2_;
    sVar29 = auVar103._2_2_;
    auVar104[1] = (0 < sVar29) * (sVar29 < 0x100) * auVar103[2] - (0xff < sVar29);
    auVar104[0] = (0 < sVar28) * (sVar28 < 0x100) * auVar103[0] - (0xff < sVar28);
    sVar28 = auVar103._4_2_;
    auVar104[2] = (0 < sVar28) * (sVar28 < 0x100) * auVar103[4] - (0xff < sVar28);
    sVar28 = auVar103._6_2_;
    auVar104[3] = (0 < sVar28) * (sVar28 < 0x100) * auVar103[6] - (0xff < sVar28);
    sVar28 = auVar103._8_2_;
    auVar104[4] = (0 < sVar28) * (sVar28 < 0x100) * auVar103[8] - (0xff < sVar28);
    sVar28 = auVar103._10_2_;
    auVar104[5] = (0 < sVar28) * (sVar28 < 0x100) * auVar103[10] - (0xff < sVar28);
    sVar28 = auVar103._12_2_;
    auVar104[6] = (0 < sVar28) * (sVar28 < 0x100) * auVar103[0xc] - (0xff < sVar28);
    sVar28 = auVar103._14_2_;
    auVar104[7] = (0 < sVar28) * (sVar28 < 0x100) * auVar103[0xe] - (0xff < sVar28);
    sVar28 = auVar113._0_2_;
    auVar104[8] = (0 < sVar28) * (sVar28 < 0x100) * auVar113[0] - (0xff < sVar28);
    sVar28 = auVar113._2_2_;
    auVar104[9] = (0 < sVar28) * (sVar28 < 0x100) * auVar113[2] - (0xff < sVar28);
    sVar28 = auVar113._4_2_;
    auVar104[10] = (0 < sVar28) * (sVar28 < 0x100) * auVar113[4] - (0xff < sVar28);
    sVar28 = auVar113._6_2_;
    auVar104[0xb] = (0 < sVar28) * (sVar28 < 0x100) * auVar113[6] - (0xff < sVar28);
    sVar28 = auVar113._8_2_;
    auVar104[0xc] = (0 < sVar28) * (sVar28 < 0x100) * auVar113[8] - (0xff < sVar28);
    sVar28 = auVar113._10_2_;
    auVar104[0xd] = (0 < sVar28) * (sVar28 < 0x100) * auVar113[10] - (0xff < sVar28);
    sVar28 = auVar113._12_2_;
    auVar104[0xe] = (0 < sVar28) * (sVar28 < 0x100) * auVar113[0xc] - (0xff < sVar28);
    sVar28 = auVar113._14_2_;
    auVar104[0xf] = (0 < sVar28) * (sVar28 < 0x100) * auVar113[0xe] - (0xff < sVar28);
    auVar113 = __LC6 & auVar4;
    auVar103 = __LC6 & auVar3;
    uVar105 = auVar4._2_2_ >> 8;
    uVar106 = auVar4._6_2_ >> 8;
    uVar107 = auVar4._10_2_ >> 8;
    uVar108 = auVar4._14_2_ >> 8;
    auVar104 = auVar104 & __LC6;
    uVar91 = auVar1._2_2_ >> 8;
    uVar92 = auVar1._6_2_ >> 8;
    auVar49._2_2_ = auVar1._8_2_ >> 8;
    auVar49._0_2_ = uVar92;
    uVar93 = auVar1._10_2_ >> 8;
    auVar49._4_2_ = uVar93;
    auVar49._6_2_ = auVar1._12_2_ >> 8;
    uVar94 = auVar1._14_2_ >> 8;
    auVar49._8_2_ = uVar94;
    auVar49._10_6_ = 0;
    uVar95 = auVar3._2_2_ >> 8;
    uVar96 = auVar3._6_2_ >> 8;
    auVar50._2_2_ = auVar3._8_2_ >> 8;
    auVar50._0_2_ = uVar96;
    uVar97 = auVar3._10_2_ >> 8;
    auVar50._4_2_ = uVar97;
    auVar50._6_2_ = auVar3._12_2_ >> 8;
    uVar98 = auVar3._14_2_ >> 8;
    auVar50._8_2_ = uVar98;
    auVar50._10_6_ = 0;
    sVar28 = auVar103._0_2_;
    sVar29 = auVar103._2_2_;
    auVar99[1] = (0 < sVar29) * (sVar29 < 0x100) * auVar103[2] - (0xff < sVar29);
    auVar99[0] = (0 < sVar28) * (sVar28 < 0x100) * auVar103[0] - (0xff < sVar28);
    sVar28 = auVar103._4_2_;
    auVar99[2] = (0 < sVar28) * (sVar28 < 0x100) * auVar103[4] - (0xff < sVar28);
    sVar28 = auVar103._6_2_;
    auVar99[3] = (0 < sVar28) * (sVar28 < 0x100) * auVar103[6] - (0xff < sVar28);
    sVar28 = auVar103._8_2_;
    auVar99[4] = (0 < sVar28) * (sVar28 < 0x100) * auVar103[8] - (0xff < sVar28);
    sVar28 = auVar103._10_2_;
    auVar99[5] = (0 < sVar28) * (sVar28 < 0x100) * auVar103[10] - (0xff < sVar28);
    sVar28 = auVar103._12_2_;
    auVar99[6] = (0 < sVar28) * (sVar28 < 0x100) * auVar103[0xc] - (0xff < sVar28);
    sVar28 = auVar103._14_2_;
    auVar99[7] = (0 < sVar28) * (sVar28 < 0x100) * auVar103[0xe] - (0xff < sVar28);
    sVar28 = auVar113._0_2_;
    auVar99[8] = (0 < sVar28) * (sVar28 < 0x100) * auVar113[0] - (0xff < sVar28);
    sVar28 = auVar113._2_2_;
    auVar99[9] = (0 < sVar28) * (sVar28 < 0x100) * auVar113[2] - (0xff < sVar28);
    sVar28 = auVar113._4_2_;
    auVar99[10] = (0 < sVar28) * (sVar28 < 0x100) * auVar113[4] - (0xff < sVar28);
    sVar28 = auVar113._6_2_;
    auVar99[0xb] = (0 < sVar28) * (sVar28 < 0x100) * auVar113[6] - (0xff < sVar28);
    sVar28 = auVar113._8_2_;
    auVar99[0xc] = (0 < sVar28) * (sVar28 < 0x100) * auVar113[8] - (0xff < sVar28);
    sVar28 = auVar113._10_2_;
    auVar99[0xd] = (0 < sVar28) * (sVar28 < 0x100) * auVar113[10] - (0xff < sVar28);
    sVar28 = auVar113._12_2_;
    auVar99[0xe] = (0 < sVar28) * (sVar28 < 0x100) * auVar113[0xc] - (0xff < sVar28);
    sVar28 = auVar113._14_2_;
    auVar99[0xf] = (0 < sVar28) * (sVar28 < 0x100) * auVar113[0xe] - (0xff < sVar28);
    auVar99 = __LC6 & auVar99;
    cVar5 = (uVar95 != 0) * (uVar95 < 0x100) * auVar3[3] - (0xff < uVar95);
    auVar33._1_14_ = SUB1614(auVar50 << 0x30,2);
    auVar33[0] = cVar5;
    bVar12 = (uVar96 != 0) * (uVar96 < 0x100) * auVar3[7] - (0xff < uVar96);
    bVar6 = (uVar97 != 0) * (uVar97 < 0x100) * auVar3[0xb] - (0xff < uVar97);
    bVar11 = (uVar98 != 0) * (uVar98 < 0x100) * auVar3[0xf] - (0xff < uVar98);
    bVar10 = (uVar105 != 0) * (uVar105 < 0x100) * auVar4[3] - (0xff < uVar105);
    bVar9 = (uVar106 != 0) * (uVar106 < 0x100) * auVar4[7] - (0xff < uVar106);
    bVar8 = (uVar107 != 0) * (uVar107 < 0x100) * auVar4[0xb] - (0xff < uVar107);
    bVar7 = (uVar108 != 0) * (uVar108 < 0x100) * auVar4[0xf] - (0xff < uVar108);
    cVar14 = (uVar91 != 0) * (uVar91 < 0x100) * auVar1[3] - (0xff < uVar91);
    auVar34._1_14_ = SUB1614(auVar49 << 0x30,2);
    auVar34[0] = cVar14;
    bVar18 = (uVar92 != 0) * (uVar92 < 0x100) * auVar1[7] - (0xff < uVar92);
    bVar19 = (uVar93 != 0) * (uVar93 < 0x100) * auVar1[0xb] - (0xff < uVar93);
    bVar20 = (uVar94 != 0) * (uVar94 < 0x100) * auVar1[0xf] - (0xff < uVar94);
    bVar21 = (uVar109 != 0) * (uVar109 < 0x100) * auVar2[3] - (0xff < uVar109);
    bVar22 = (uVar110 != 0) * (uVar110 < 0x100) * auVar2[7] - (0xff < uVar110);
    bVar13 = (uVar111 != 0) * (uVar111 < 0x100) * auVar2[0xb] - (0xff < uVar111);
    bVar23 = (uVar112 != 0) * (uVar112 < 0x100) * auVar2[0xf] - (0xff < uVar112);
    uVar105 = (ushort)(((uint)bVar12 << 0x18) >> 0x18);
    uVar106 = (ushort)(((uint6)bVar6 << 0x28) >> 0x28);
    uVar107 = (ushort)(((ulong)bVar11 << 0x38) >> 0x38);
    uVar108 = (ushort)((uint3)((uint3)bVar10 << 0x10) >> 0x10);
    uVar109 = (ushort)(((uint5)bVar9 << 0x20) >> 0x20);
    uVar110 = (ushort)(((uint7)bVar8 << 0x30) >> 0x30);
    uVar111 = (ushort)((uint3)((uint3)bVar7 << 0x10) >> 0x10);
    uVar92 = (ushort)(((uint)bVar18 << 0x18) >> 0x18);
    uVar93 = (ushort)(((uint6)bVar19 << 0x28) >> 0x28);
    uVar94 = (ushort)(((ulong)bVar20 << 0x38) >> 0x38);
    uVar95 = (ushort)((uint3)((uint3)bVar21 << 0x10) >> 0x10);
    uVar96 = (ushort)(((uint5)bVar22 << 0x20) >> 0x20);
    uVar97 = (ushort)(((uint7)bVar13 << 0x30) >> 0x30);
    uVar98 = (ushort)((uint3)((uint3)bVar23 << 0x10) >> 0x10);
    sVar28 = auVar104._0_2_;
    sVar29 = auVar104._2_2_;
    sVar30 = auVar104._4_2_;
    sVar31 = auVar104._6_2_;
    sVar32 = auVar104._8_2_;
    local_2a8 = (0 < sVar32) * (sVar32 < 0x100) * auVar104[8] - (0xff < sVar32);
    sVar32 = auVar104._10_2_;
    cStack_2a4 = (0 < sVar32) * (sVar32 < 0x100) * auVar104[10] - (0xff < sVar32);
    sVar32 = auVar104._12_2_;
    cStack_2a0 = (0 < sVar32) * (sVar32 < 0x100) * auVar104[0xc] - (0xff < sVar32);
    sVar32 = auVar104._14_2_;
    cStack_29c = (0 < sVar32) * (sVar32 < 0x100) * auVar104[0xe] - (0xff < sVar32);
    sVar32 = auVar99._0_2_;
    bVar24 = (0 < sVar32) * (sVar32 < 0x100) * auVar99[0] - (0xff < sVar32);
    uVar91 = CONCAT11(bVar24,cStack_29c);
    sVar32 = auVar99._2_2_;
    cVar25 = (0 < sVar32) * (sVar32 < 0x100) * auVar99[2] - (0xff < sVar32);
    uVar45 = CONCAT12(cVar25,uVar91);
    sVar32 = auVar99._4_2_;
    cVar26 = (0 < sVar32) * (sVar32 < 0x100) * auVar99[4] - (0xff < sVar32);
    uVar67 = CONCAT13(cVar26,uVar45);
    sVar32 = auVar99._6_2_;
    cVar27 = (0 < sVar32) * (sVar32 < 0x100) * auVar99[6] - (0xff < sVar32);
    uVar47 = CONCAT14(cVar27,uVar67);
    sVar32 = auVar99._8_2_;
    local_288 = (0 < sVar32) * (sVar32 < 0x100) * auVar99[8] - (0xff < sVar32);
    auVar51[5] = local_288;
    auVar51._0_5_ = uVar47;
    sVar32 = auVar99._10_2_;
    cStack_284 = (0 < sVar32) * (sVar32 < 0x100) * auVar99[10] - (0xff < sVar32);
    sVar32 = auVar99._12_2_;
    cStack_280 = (0 < sVar32) * (sVar32 < 0x100) * auVar99[0xc] - (0xff < sVar32);
    sVar32 = auVar99._14_2_;
    auVar100._0_10_ = (unkuint10)local_288 << 0x40;
    auVar100[10] = cStack_284;
    auVar101[0xb] = 0;
    auVar101._0_11_ = auVar100;
    auVar102[0xc] = cStack_280;
    auVar102._0_12_ = auVar101;
    auVar51._6_8_ = 0;
    auVar35[0xe] = cStack_29c;
    auVar35._0_14_ = auVar51 << 0x38;
    auVar48._4_8_ = 0;
    auVar48._0_4_ = uVar67;
    auVar36._12_3_ = (int3)(CONCAT26(auVar35._13_2_,CONCAT15(cStack_2a0,uVar47)) >> 0x28);
    auVar36._0_12_ = auVar48 << 0x38;
    auVar37._10_5_ = (int5)(CONCAT44(auVar36._11_4_,CONCAT13(cStack_2a4,uVar45)) >> 0x18);
    auVar37._0_10_ = (unkuint10)uVar91 << 0x38;
    auVar39._7_8_ = 0;
    auVar39._0_7_ = (uint7)(CONCAT62(auVar37._9_6_,CONCAT11(local_2a8,cStack_29c)) >> 8);
    auVar40._8_7_ = 0;
    auVar40._0_8_ = SUB158(auVar39 << 0x40,7);
    auVar41._9_6_ = 0;
    auVar41._0_9_ = SUB159(auVar40 << 0x38,6);
    auVar42._10_5_ = 0;
    auVar42._0_10_ = SUB1510(auVar41 << 0x30,5);
    auVar43._11_4_ = 0;
    auVar43._0_11_ = SUB1511(auVar42 << 0x28,4);
    auVar44._12_3_ = 0;
    auVar44._0_12_ = SUB1512(auVar43 << 0x20,3);
    auVar38._13_2_ = 0;
    auVar38._0_13_ = SUB1513(auVar44 << 0x18,2);
    auVar38 = auVar38 << 0x10;
    auVar84._0_14_ = auVar38._0_14_;
    auVar84[0xe] = 0;
    auVar84[0xf] = (uVar94 != 0) * (uVar94 < 0x100) * bVar20 - (0xff < uVar94);
    auVar83._14_2_ = auVar84._14_2_;
    auVar83._0_13_ = auVar38._0_13_;
    auVar83[0xd] = 0;
    auVar82._13_3_ = auVar83._13_3_;
    auVar82._0_12_ = auVar38._0_12_;
    auVar82[0xc] = (0 < sVar31) * (sVar31 < 0x100) * auVar104[6] - (0xff < sVar31);
    auVar81._12_4_ = auVar82._12_4_;
    auVar81._0_11_ = auVar38._0_11_;
    auVar81[0xb] = (uVar93 != 0) * (uVar93 < 0x100) * bVar19 - (0xff < uVar93);
    auVar80._11_5_ = auVar81._11_5_;
    auVar80._0_10_ = auVar38._0_10_;
    auVar80[10] = 0;
    auVar79._10_6_ = auVar80._10_6_;
    auVar79._0_9_ = auVar38._0_9_;
    auVar79[9] = 0;
    auVar3._2_7_ = auVar79._9_7_;
    auVar3[1] = (0 < sVar30) * (sVar30 < 0x100) * auVar104[4] - (0xff < sVar30);
    auVar3[0] = (uVar92 != 0) * (uVar92 < 0x100) * bVar18 - (0xff < uVar92);
    auVar3._9_7_ = 0;
    auVar2._10_6_ = 0;
    auVar2._0_10_ = SUB1610(auVar3 << 0x38,6);
    auVar1._2_11_ = SUB1611(auVar2 << 0x30,5);
    auVar1[1] = (0 < sVar29) * (sVar29 < 0x100) * auVar104[2] - (0xff < sVar29);
    auVar1[0] = (cVar14 != '\0') * (auVar34._0_2_ < 0x100) * cVar14 - (0xff < auVar34._0_2_);
    auVar1._13_3_ = 0;
    auVar78._2_14_ = SUB1614(auVar1 << 0x18,2);
    auVar78[1] = 0;
    auVar78[0] = (0 < sVar28) * (sVar28 < 0x100) * auVar104[0] - (0xff < sVar28);
    local_2b8[0] = (color_rgba)auVar78[0];
    local_2b8[1] = (color_rgba)auVar78[1];
    local_2b8[2] = (color_rgba)auVar78[2];
    local_2b8[3] = (color_rgba)auVar78[3];
    local_2b8[4] = (color_rgba)auVar78[4];
    local_2b8[5] = (color_rgba)auVar78[5];
    local_2b8[6] = (color_rgba)auVar78[6];
    local_2b8[7] = (color_rgba)auVar78[7];
    local_2b8[8] = (color_rgba)auVar78[8];
    local_2b8[9] = (color_rgba)auVar78[9];
    local_2b8[10] = (color_rgba)auVar78[10];
    local_2b8[0xb] = (color_rgba)auVar78[0xb];
    local_2b8[0xc] = (color_rgba)auVar78[0xc];
    local_2b8[0xd] = (color_rgba)auVar78[0xd];
    local_2b8[0xe] = (color_rgba)auVar78[0xe];
    local_2b8[0xf] = (color_rgba)auVar78[0xf];
    auVar90._13_2_ = 0;
    auVar90._0_13_ = auVar102;
    auVar90[0xf] = (uVar107 != 0) * (uVar107 < 0x100) * bVar11 - (0xff < uVar107);
    auVar89._14_2_ = auVar90._14_2_;
    auVar89[0xd] = 0;
    auVar89._0_13_ = auVar102;
    auVar88._13_3_ = auVar89._13_3_;
    auVar88[0xc] = cVar27;
    auVar88._0_12_ = auVar101;
    auVar87._12_4_ = auVar88._12_4_;
    auVar87[0xb] = (uVar106 != 0) * (uVar106 < 0x100) * bVar6 - (0xff < uVar106);
    auVar87._0_11_ = auVar100;
    auVar86._11_5_ = auVar87._11_5_;
    auVar86._0_11_ = ZEXT111(local_288) << 0x40;
    auVar85._10_6_ = auVar86._10_6_;
    auVar85._0_10_ = (unkuint10)local_288 << 0x40;
    auVar113._2_7_ = auVar85._9_7_;
    auVar113[1] = cVar26;
    auVar113[0] = (uVar105 != 0) * (uVar105 < 0x100) * bVar12 - (0xff < uVar105);
    auVar113._9_7_ = 0;
    auVar103._10_6_ = 0;
    auVar103._0_10_ = SUB1610(auVar113 << 0x38,6);
    auVar4._2_11_ = SUB1611(auVar103 << 0x30,5);
    auVar4[1] = cVar25;
    auVar4[0] = (cVar5 != '\0') * (auVar33._0_2_ < 0x100) * cVar5 - (0xff < auVar33._0_2_);
    auVar4._13_3_ = 0;
    local_298._2_14_ = SUB1614(auVar4 << 0x18,2);
    local_298[1] = 0;
    local_298[0] = bVar24;
    uStack_2a7 = 0;
    uStack_2a6 = 0;
    cStack_2a5 = (uVar95 != 0) * (uVar95 < 0x100) * bVar21 - (0xff < uVar95);
    uStack_2a3 = 0;
    uStack_2a2 = 0;
    cStack_2a1 = (uVar96 != 0) * (uVar96 < 0x100) * bVar22 - (0xff < uVar96);
    uStack_29f = 0;
    uStack_29e = 0;
    cStack_29d = (uVar97 != 0) * (uVar97 < 0x100) * bVar13 - (0xff < uVar97);
    uStack_29b = 0;
    uStack_29a = 0;
    cStack_299 = (uVar98 != 0) * (uVar98 < 0x100) * bVar23 - (0xff < uVar98);
    uStack_287 = 0;
    uStack_286 = 0;
    cStack_285 = (uVar108 != 0) * (uVar108 < 0x100) * bVar10 - (0xff < uVar108);
    uStack_283 = 0;
    uStack_282 = 0;
    cStack_281 = (uVar109 != 0) * (uVar109 < 0x100) * bVar9 - (0xff < uVar109);
    uStack_27f = 0;
    uStack_27e = 0;
    cStack_27d = (uVar110 != 0) * (uVar110 < 0x100) * bVar8 - (0xff < uVar110);
    cStack_27c = (0 < sVar32) * (sVar32 < 0x100) * auVar99[0xe] - (0xff < sVar32);
    uStack_27b = 0;
    uStack_27a = 0;
    cStack_279 = (uVar111 != 0) * (uVar111 < 0x100) * bVar7 - (0xff < uVar111);
  }
  else {
    local_3c0 = 8;
    pcVar70 = param_2;
  }
  local_328 = __LC3;
  uStack_320 = _UNK_0010ea88;
  if (param_6 == 0) {
    bVar46 = false;
    lVar54 = 0x1e;
  }
  else {
    pbVar72 = (byte *)&basist::g_astc_bc7_common_partitions2;
    iVar62 = 0;
    local_168._0_4_ = 0xffffffff;
    local_168._4_4_ = 0xffffffff;
    uStack_160 = 0xffffffff;
    uStack_15c = 0xffffffff;
    local_158[0] = 0xffffffff;
    local_158[1] = 0xffffffff;
    local_158[2] = 0xffffffff;
    local_158[3] = 0xffffffff;
    local_158[4] = 0xffffffff;
    local_158[5] = 0xffffffff;
    local_158[6] = 0xffffffff;
    local_158[7] = 0xffffffff;
    local_158[8] = 0xffffffff;
    local_158[9] = 0xffffffff;
    local_158[10] = 0xffffffff;
    local_158[0xb] = 0xffffffff;
    local_318[0] = (undefined1  [16])0x0;
    do {
      bVar6 = *pbVar72;
      lVar54 = 0;
      local_1d8 = 0;
      do {
        local_400 = local_e8;
        uVar59 = (ulong)*(byte *)((long)&basist::g_bc7_partition2 + lVar54 + (ulong)bVar6 * 0x10);
        uVar67 = *(uint *)((long)&local_1d8 + uVar59 * 4);
        *(uint *)((long)&local_1d8 + uVar59 * 4) = uVar67 + 1;
        lVar68 = lVar54 * 4;
        lVar54 = lVar54 + 1;
        *(undefined4 *)(local_e8 + (uVar59 * 0x10 + (ulong)uVar67) * 4) =
             *(undefined4 *)(pcVar70 + lVar68);
      } while (lVar54 != 0x10);
      lVar54 = basisu::color_cell_compression_est_astc
                         (4,4,(uint *)&basist::g_bc7_weights2,(uint)local_1d8,
                          (color_quad_u8 *)local_400,0xffffffffffffffff,(uint *)&local_328);
      lVar68 = basisu::color_cell_compression_est_astc
                         (4,4,(uint *)&basist::g_bc7_weights2,local_1d8._4_4_,local_a8,
                          0xffffffffffffffff,(uint *)&local_328);
      lVar61 = 0;
      do {
        if ((ulong)(lVar54 + lVar68) < (ulong)(&local_168)[lVar61]) {
          iVar65 = (int)lVar61;
          if (iVar65 != 3) {
            uVar59 = (ulong)(2 - iVar65);
            memmove((void *)((long)local_318 + uVar59 * -4 + 0xc),
                    (void *)((long)local_318 + uVar59 * -4 + 8),(uVar59 + 1) * 4);
            memmove(local_158 + uVar59 * -2 + 2,local_158 + uVar59 * -2,(uVar59 + 1) * 8);
          }
          *(int *)(local_318[0] + (long)iVar65 * 4) = iVar62;
          (&local_168)[iVar65] = lVar54 + lVar68;
          break;
        }
        lVar61 = lVar61 + 1;
      } while (lVar61 != 4);
      iVar62 = iVar62 + 1;
      pbVar72 = pbVar72 + 6;
    } while (iVar62 != 0x1e);
    bVar46 = true;
    lVar54 = 4;
  }
  local_350 = &local_168;
  local_400 = local_e8;
  lVar68 = 0;
  iVar62 = (uint)(param_1 != 0x10) * 8 + 4;
  do {
    if (bVar46) {
      uVar67 = *(uint *)(local_318[0] + lVar68 * 4);
    }
    else {
      uVar67 = (uint)lVar68;
    }
    iVar65 = 0;
    local_330[0] = 0;
    local_330[1] = 0;
    uVar55 = (ulong)*(byte *)((long)&basist::g_astc_bc7_common_partitions2 + (ulong)uVar67 * 6) << 4
    ;
    uVar59 = uVar55;
    puVar71 = local_278;
    pcVar74 = pcVar70;
    do {
      lVar61 = 0;
      do {
        uVar56 = (ulong)*(byte *)((long)&basist::g_bc7_partition2 +
                                 (ulong)(uint)((int)uVar59 + (int)lVar61));
        uVar17 = local_330[uVar56];
        *(uint *)(puVar71 + lVar61 * 4) = uVar17;
        local_330[uVar56] = uVar17 + 1;
        lVar63 = lVar61 * 4;
        lVar61 = lVar61 + 1;
        *(undefined4 *)((long)&local_168 + (uVar56 * 0x10 + (ulong)uVar17) * 4) =
             *(undefined4 *)(pcVar74 + lVar63);
      } while (lVar61 != 4);
      iVar65 = iVar65 + 4;
      uVar59 = (ulong)((int)uVar59 + 4);
      puVar71 = puVar71 + 0x10;
      pcVar74 = pcVar74 + 0x10;
    } while (iVar65 != 0x10);
    lVar63 = 0;
    lVar61 = 0;
    iVar65 = (int)uVar55;
    pbVar72 = local_2f8;
    pcVar75 = local_400;
    pcVar76 = local_238;
    puVar66 = local_350;
    while( true ) {
      *(undefined1 (*) [16])pcVar75 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pcVar75 + 0x40) = (undefined1  [16])0x0;
      uVar17 = local_330[lVar63];
      *(undefined1 (*) [16])(pcVar75 + 0x30) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pcVar75 + 0x10) = (undefined1  [16])0x0;
      *(uint *)pcVar75 = uVar17;
      *(undefined8 **)(pcVar75 + 8) = puVar66;
      *(undefined4 *)(pcVar75 + 0x48) = uStack_320._4_4_;
      *(ulong *)(pcVar75 + 0x38) = CONCAT44((uint)local_328,local_3c0);
      *(ulong *)(pcVar75 + 0x40) = CONCAT44((undefined4)uStack_320,local_328._4_4_);
      pcVar75[0x4c] = (color_cell_compressor_params)0x1;
      *(undefined4 *)(pcVar75 + 0x10) = 4;
      *(undefined1 (*) [16])(pcVar75 + 0x20) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pcVar76 + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pcVar76 + 0x20) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])pcVar76 = (undefined1  [16])0x0;
      *(undefined **)(pcVar75 + 0x18) = puVar52;
      *(undefined8 **)(pcVar75 + 0x20) = &g_bc7_weights2x;
      *(byte **)(pcVar76 + 0x18) = local_2f8 + lVar63 * 0x10;
      *(undefined1 **)(pcVar76 + 0x20) = local_2d8 + lVar63 * 0x10;
      lVar57 = basisu::color_cell_compression(0xff,pcVar75,pcVar76,param_5);
      uVar53 = _LC7;
      if (param_1 == 0x10) {
        cVar15 = pcVar76[0x28];
        iVar69 = 0;
        cVar16 = pcVar76[0x2c];
        pbVar73 = (byte *)&local_1d8;
        do {
          iVar69 = iVar69 + 1;
          *pbVar73 = *(byte *)((long)&basist::g_astc_unquant + (ulong)CONCAT41(local_3c0,cVar15) * 2
                              );
          pbVar73[0xc] = *(byte *)((long)&basist::g_astc_unquant +
                                  (ulong)CONCAT41(local_3c0,cVar16) * 2);
          pbVar73 = pbVar73 + 1;
        } while (iVar69 != 3);
        local_1d8._0_4_ =
             CONCAT13(*(undefined1 *)
                       ((long)&basist::g_astc_unquant + (ulong)CONCAT41(local_3c0,pcVar76[0x2b]) * 2
                       ),(undefined3)local_1d8);
        lVar57 = 1;
        uStack_1cc = CONCAT13(*(undefined1 *)
                               ((long)&basist::g_astc_unquant +
                               (ulong)CONCAT41(local_3c0,pcVar76[0x2f]) * 2),(undefined3)uStack_1cc)
        ;
        while( true ) {
          iVar69 = *(int *)((long)&basist::g_bc7_weights2 + lVar57 * 4);
          pbVar73 = (byte *)&local_1d8;
          do {
            pbVar73[lVar57 * 4] =
                 (byte)(((uint)*pbVar73 * (0x40 - iVar69) + (uint)pbVar73[0xc] * iVar69) * 0x101 +
                        0x20 >> 0xe);
            pbVar73 = pbVar73 + 1;
          } while ((byte *)((long)&local_1d8 + 4) != pbVar73);
          if (lVar57 != 1) break;
          lVar57 = 2;
        }
        if (*(uint *)pcVar75 != 0) {
          pbVar73 = pbVar72;
          pbVar64 = (byte *)((long)puVar66 + 3);
          do {
            bVar6 = *pbVar73;
            pbVar73 = pbVar73 + 1;
            iVar60 = (uint)pbVar64[-3] - (uint)*(byte *)((long)&local_1d8 + (ulong)bVar6 * 4);
            iVar69 = (uint)*pbVar64 - (uint)*(byte *)((long)&local_1d8 + (ulong)bVar6 * 4 + 3);
            lVar61 = lVar61 + (ulong)(uint)(iVar69 * iVar69 + iVar60 * iVar60);
            pbVar64 = pbVar64 + 4;
          } while (pbVar72 + *(uint *)pcVar75 != pbVar73);
        }
      }
      else {
        lVar61 = lVar61 + lVar57;
      }
      pcVar75 = pcVar75 + 0x50;
      puVar66 = puVar66 + 8;
      pcVar76 = pcVar76 + 0x30;
      pbVar72 = pbVar72 + 0x10;
      if (lVar63 != 0) break;
      lVar63 = 1;
    }
    puVar66 = &local_1c8;
    for (lVar57 = 0xb; lVar57 != 0; lVar57 = lVar57 + -1) {
      *puVar66 = 0;
      puVar66 = puVar66 + (ulong)bVar77 * -2 + 1;
    }
    local_1d8 = _LC7;
    lVar57 = (ulong)uVar67 * 6;
    cVar5 = *(char *)((long)&basist::g_astc_bc7_common_partitions2 + lVar57 + 4);
    uStack_1cc = iVar62;
    uStack_1d0 = (uint)*(ushort *)((long)&basist::g_astc_bc7_common_partitions2 + lVar57 + 2);
    local_418 = 0x100000000;
    if (cVar5 != '\0') {
      local_418 = 0;
    }
    local_332 = 0;
    pbVar72 = (byte *)&local_1d8;
    uVar59 = (ulong)(cVar5 != '\0');
    pbVar73 = (byte *)&local_1d8;
    lVar57 = 0;
    while( true ) {
      lVar58 = uVar59 * 0x30;
      bVar6 = abStack_210[lVar58];
      if (param_1 == 0x10) {
        pbVar73[0x16] = abStack_210[lVar58 + 4];
        bVar7 = abStack_210[lVar58 + 3];
        bVar8 = abStack_210[lVar58 + 7];
        pbVar73[0x15] = bVar6;
        pbVar73[0x17] = bVar7;
        pbVar73[0x18] = bVar8;
      }
      else {
        bVar6 = abStack_210[lVar58 + 2];
        bVar7 = abStack_210[lVar58 + 3];
        bVar8 = abStack_210[lVar58 + 1];
        bVar9 = abStack_210[lVar58];
        pbVar72[0x15] = bVar9;
        pbVar72[0x17] = bVar8;
        pbVar72[0x19] = bVar6;
        pbVar72[0x1b] = bVar7;
        bVar10 = abStack_210[lVar58 + 6];
        bVar11 = abStack_210[lVar58 + 5];
        bVar12 = abStack_210[lVar58 + 4];
        bVar13 = abStack_210[lVar58 + 7];
        pbVar72[0x1a] = bVar10;
        pbVar72[0x16] = bVar12;
        pbVar72[0x18] = bVar11;
        pbVar72[0x1c] = bVar13;
        if ((uint)*(byte *)((long)&basist::g_astc_unquant + (ulong)CONCAT41(local_3c0,bVar11) * 2) +
            (uint)*(byte *)((long)&basist::g_astc_unquant + (ulong)CONCAT41(local_3c0,bVar12) * 2) +
            (uint)*(byte *)((long)&basist::g_astc_unquant + (ulong)CONCAT41(local_3c0,bVar10) * 2) <
            (uint)*(byte *)((long)&basist::g_astc_unquant + (ulong)CONCAT41(local_3c0,bVar9) * 2) +
            (uint)*(byte *)((long)&basist::g_astc_unquant + (ulong)CONCAT41(local_3c0,bVar8) * 2) +
            (uint)*(byte *)((long)&basist::g_astc_unquant + (ulong)CONCAT41(local_3c0,bVar6) * 2)) {
          *(undefined1 *)((long)&local_332 + lVar57) = 1;
          *(ulong *)(pbVar72 + 0x15) =
               CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(bVar7,bVar13),bVar6),
                                                            bVar10),bVar8),bVar11),bVar9),bVar12);
        }
      }
      if (lVar57 == 1) break;
      pbVar73 = pbVar73 + 4;
      pbVar72 = pbVar72 + 8;
      uVar59 = local_418 >> 0x20;
      lVar57 = lVar63;
    }
    iVar69 = 0;
    puVar71 = local_278;
    do {
      lVar63 = 0;
      do {
        bVar6 = *(byte *)((long)&basist::g_bc7_partition2 + (ulong)(uint)(iVar65 + (int)lVar63));
        uVar59 = (ulong)bVar6;
        if (cVar5 != '\0') {
          uVar59 = (ulong)(1 - bVar6);
        }
        bVar6 = local_2f8[(ulong)*(uint *)(puVar71 + lVar63 * 4) + (ulong)bVar6 * 0x10];
        uVar55 = (ulong)(uint)(iVar69 + (int)lVar63);
        cVar14 = *(char *)((long)&local_332 + uVar59);
        *(byte *)((long)&local_1b8 + uVar55 + 7) = bVar6;
        if (cVar14 != '\0') {
          *(byte *)((long)&local_1b8 + uVar55 + 7) = '\x03' - bVar6;
        }
        lVar63 = lVar63 + 1;
      } while (lVar63 != 4);
      iVar69 = iVar69 + 4;
      iVar65 = iVar65 + 4;
      puVar71 = puVar71 + 0x10;
    } while (iVar69 != 0x10);
    if (*param_4 < 0x200) {
      *(uint *)(param_3 + (ulong)*param_4 * 0x80) = param_1;
      *(uint *)(param_3 + (ulong)*param_4 * 0x80 + 4) = uVar67;
      uVar67 = *param_4;
      *(undefined8 *)(param_3 + (ulong)uVar67 * 0x80 + 8) = uVar53;
      *(ulong *)(param_3 + (ulong)uVar67 * 0x80 + 0x10) = CONCAT44(iVar62,uStack_1d0);
      *(undefined8 *)(param_3 + (ulong)uVar67 * 0x80 + 0x68) = local_178;
      *(undefined8 *)(param_3 + (ulong)uVar67 * 0x80 + 0x18) = local_1c8;
      *(undefined8 *)(param_3 + (ulong)uVar67 * 0x80 + 0x20) = uStack_1c0;
      *(undefined8 *)(param_3 + (ulong)uVar67 * 0x80 + 0x48) = local_198;
      *(undefined8 *)(param_3 + (ulong)uVar67 * 0x80 + 0x50) = uStack_190;
      *(undefined8 *)(param_3 + (ulong)uVar67 * 0x80 + 0x28) = local_1b8;
      *(undefined8 *)(param_3 + (ulong)uVar67 * 0x80 + 0x30) = uStack_1b0;
      *(undefined8 *)(param_3 + (ulong)uVar67 * 0x80 + 0x58) = local_188;
      *(undefined8 *)(param_3 + (ulong)uVar67 * 0x80 + 0x60) = uStack_180;
      *(undefined8 *)(param_3 + (ulong)uVar67 * 0x80 + 0x38) = local_1a8;
      *(undefined8 *)(param_3 + (ulong)uVar67 * 0x80 + 0x40) = uStack_1a0;
      uVar67 = *param_4;
      *(long *)(param_3 + (ulong)uVar67 * 0x80 + 0x78) = lVar61;
      *param_4 = uVar67 + 1;
    }
    lVar68 = lVar68 + 1;
  } while (lVar68 != lVar54);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::uastc_pack_eac_a8(basisu::uastc_pack_eac_a8_results&, unsigned char const*, unsigned int,
   unsigned int, unsigned int, unsigned int) [clone .constprop.0] [clone .isra.0] */

void basisu::uastc_pack_eac_a8
               (uastc_pack_eac_a8_results *param_1,uchar *param_2,uint param_3,uint param_4,
               uint param_5,uint param_6)

{
  undefined1 auVar1 [15];
  undefined1 auVar2 [14];
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [14];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  unkuint9 Var15;
  undefined1 auVar16 [11];
  undefined1 auVar17 [14];
  undefined1 auVar18 [13];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  uint6 uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  code *pcVar26;
  uint uVar27;
  code *pcVar28;
  int iVar29;
  uint uVar30;
  byte *pbVar31;
  ulong uVar32;
  ulong uVar33;
  uint uVar34;
  float fVar35;
  uint uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  byte bVar47;
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  
  auVar40 = *(undefined1 (*) [16])param_2;
  uVar36 = CONCAT13(0,CONCAT12(auVar40[9],(ushort)auVar40[8]));
  bVar47 = auVar40[7];
  auVar1[0xd] = 0;
  auVar1._0_13_ = auVar40._0_13_;
  auVar1[0xe] = bVar47;
  auVar3[0xc] = auVar40[6];
  auVar3._0_12_ = auVar40._0_12_;
  auVar3._13_2_ = auVar1._13_2_;
  auVar4[0xb] = 0;
  auVar4._0_11_ = auVar40._0_11_;
  auVar4._12_3_ = auVar3._12_3_;
  auVar5[10] = auVar40[5];
  auVar5._0_10_ = auVar40._0_10_;
  auVar5._11_4_ = auVar4._11_4_;
  auVar10[9] = 0;
  auVar10._0_9_ = auVar40._0_9_;
  auVar10._10_5_ = auVar5._10_5_;
  auVar11[8] = auVar40[4];
  auVar11._0_8_ = auVar40._0_8_;
  auVar11._9_6_ = auVar10._9_6_;
  auVar14._7_8_ = 0;
  auVar14._0_7_ = auVar11._8_7_;
  Var15 = CONCAT81(SUB158(auVar14 << 0x40,7),auVar40[3]);
  auVar19._9_6_ = 0;
  auVar19._0_9_ = Var15;
  auVar16._1_10_ = SUB1510(auVar19 << 0x30,5);
  auVar16[0] = auVar40[2];
  auVar20._11_4_ = 0;
  auVar20._0_11_ = auVar16;
  auVar12[2] = auVar40[1];
  auVar12._0_2_ = auVar40._0_2_;
  auVar12._3_12_ = SUB1512(auVar20 << 0x20,3);
  auVar13._2_13_ = auVar12._2_13_;
  auVar13._0_2_ = auVar40._0_2_ & 0xff;
  auVar45._0_4_ = CONCAT31(0,auVar40[0xc]);
  auVar45[4] = auVar40[0xd];
  auVar45._5_3_ = 0;
  auVar45[8] = auVar40[0xe];
  auVar45._9_3_ = 0;
  auVar45[0xc] = auVar40[0xf];
  auVar45._13_3_ = 0;
  auVar46._0_4_ = CONCAT22(0,auVar11._8_2_);
  auVar46._4_2_ = auVar5._10_2_;
  auVar46._6_2_ = 0;
  auVar46._8_2_ = auVar3._12_2_;
  auVar46._10_2_ = 0;
  auVar46[0xc] = bVar47;
  auVar46._13_3_ = 0;
  auVar2._10_2_ = 0;
  auVar2._0_10_ = auVar13._0_10_;
  auVar2._12_2_ = (short)Var15;
  uVar21 = CONCAT42(auVar2._10_4_,auVar16._0_2_);
  auVar17._6_8_ = 0;
  auVar17._0_6_ = uVar21;
  auVar6._4_2_ = auVar12._2_2_;
  auVar6._0_4_ = auVar13._0_4_;
  auVar6._6_8_ = SUB148(auVar17 << 0x40,6);
  auVar49._0_4_ = auVar13._0_4_ & 0xffff;
  auVar49._4_10_ = auVar6._4_10_;
  auVar49._14_2_ = 0;
  auVar7[0xc] = auVar40[0xb];
  auVar7._0_12_ = ZEXT112(auVar40[0xc]) << 0x40;
  auVar8._10_3_ = auVar7._10_3_;
  auVar8._0_10_ = (unkuint10)auVar40[10] << 0x40;
  auVar18._5_8_ = 0;
  auVar18._0_5_ = auVar8._8_5_;
  auVar9[4] = auVar40[9];
  auVar9._0_4_ = uVar36;
  auVar9[5] = 0;
  auVar9._6_7_ = SUB137(auVar18 << 0x40,6);
  auVar48._0_4_ = uVar36 & 0xffff;
  auVar48._4_9_ = auVar9._4_9_;
  auVar48._13_3_ = 0;
  auVar37._0_4_ = -(uint)((int)(auVar46._0_4_ - __LC9) < (int)(auVar49._0_4_ - __LC9));
  auVar37._4_4_ = -(uint)((int)((uint)auVar5._10_2_ - _UNK_0010eaa4) < auVar6._4_4_ - _UNK_0010eaa4)
  ;
  auVar37._8_4_ = -(uint)((int)((uint)auVar3._12_2_ - _UNK_0010eaa8) < (int)uVar21 - _UNK_0010eaa8);
  auVar37._12_4_ =
       -(uint)((int)((uint)bVar47 - _UNK_0010eaac) < (int)((auVar2._10_4_ >> 0x10) - _UNK_0010eaac))
  ;
  auVar50 = ~auVar37 & auVar49 | auVar37 & auVar46;
  auVar37 = ~auVar37 & auVar46 | auVar49 & auVar37;
  auVar43._0_4_ = -(uint)((int)(auVar45._0_4_ - __LC9) < (int)(auVar48._0_4_ - __LC9));
  auVar43._4_4_ = -(uint)((int)((uint)auVar40[0xd] - _UNK_0010eaa4) < auVar9._4_4_ - _UNK_0010eaa4);
  auVar43._8_4_ = -(uint)((int)((uint)auVar40[0xe] - _UNK_0010eaa8) < auVar8._8_4_ - _UNK_0010eaa8);
  auVar43._12_4_ =
       -(uint)((int)((uint)auVar40[0xf] - _UNK_0010eaac) <
              (int)((uint)(uint3)(auVar7._10_3_ >> 0x10) - _UNK_0010eaac));
  auVar40 = ~auVar43 & auVar48 | auVar43 & auVar45;
  auVar44 = ~auVar43 & auVar45 | auVar48 & auVar43;
  auVar42._0_4_ = -(uint)(auVar40._0_4_ - __LC9 < auVar50._0_4_ - __LC9);
  auVar42._4_4_ = -(uint)(auVar40._4_4_ - _UNK_0010eaa4 < auVar50._4_4_ - _UNK_0010eaa4);
  auVar42._8_4_ = -(uint)(auVar40._8_4_ - _UNK_0010eaa8 < auVar50._8_4_ - _UNK_0010eaa8);
  auVar42._12_4_ = -(uint)(auVar40._12_4_ - _UNK_0010eaac < auVar50._12_4_ - _UNK_0010eaac);
  auVar40 = ~auVar42 & auVar50 | auVar40 & auVar42;
  auVar41._0_4_ = -(uint)(SUB164(__LC12,0) - __LC9 < auVar40._0_4_ - __LC9);
  auVar41._4_4_ = -(uint)(SUB164(__LC12,4) - _UNK_0010eaa4 < auVar40._4_4_ - _UNK_0010eaa4);
  auVar41._8_4_ = -(uint)(SUB164(__LC12,8) - _UNK_0010eaa8 < auVar40._8_4_ - _UNK_0010eaa8);
  auVar41._12_4_ = -(uint)(SUB164(__LC12,0xc) - _UNK_0010eaac < auVar40._12_4_ - _UNK_0010eaac);
  auVar42 = ~auVar41 & auVar40 | __LC12 & auVar41;
  auVar40._0_4_ = -(uint)(auVar44._0_4_ - __LC9 < auVar37._0_4_ - __LC9);
  auVar40._4_4_ = -(uint)(auVar44._4_4_ - _UNK_0010eaa4 < auVar37._4_4_ - _UNK_0010eaa4);
  auVar40._8_4_ = -(uint)(auVar44._8_4_ - _UNK_0010eaa8 < auVar37._8_4_ - _UNK_0010eaa8);
  auVar40._12_4_ = -(uint)(auVar44._12_4_ - _UNK_0010eaac < auVar37._12_4_ - _UNK_0010eaac);
  auVar40 = ~auVar40 & auVar44 | auVar37 & auVar40;
  auVar50._0_4_ = -(uint)(__LC9 < auVar40._0_4_ - __LC9);
  auVar50._4_4_ = -(uint)(_UNK_0010eaa4 < auVar40._4_4_ - _UNK_0010eaa4);
  auVar50._8_4_ = -(uint)(_UNK_0010eaa8 < auVar40._8_4_ - _UNK_0010eaa8);
  auVar50._12_4_ = -(uint)(_UNK_0010eaac < auVar40._12_4_ - _UNK_0010eaac);
  auVar40 = auVar40 & auVar50;
  auVar38._0_4_ = -(uint)(auVar40._0_4_ - __LC9 < auVar40._8_4_ - __LC9);
  auVar38._4_4_ = -(uint)(auVar40._4_4_ - _UNK_0010eaa4 < auVar40._12_4_ - _UNK_0010eaa4);
  auVar38._8_4_ = -(uint)(auVar40._8_4_ - _UNK_0010eaa8 < -_UNK_0010eaa8);
  auVar38._12_4_ = -(uint)(auVar40._12_4_ - _UNK_0010eaac < -_UNK_0010eaac);
  auVar40 = ~auVar38 & auVar40 | auVar40 >> 0x40 & auVar38;
  uVar25 = auVar40._0_4_;
  uVar34 = auVar40._4_4_;
  uVar36 = -(uint)((int)(uVar25 - __LC9) < (int)(uVar34 - __LC9));
  uVar25 = ~uVar36 & uVar25 | uVar34 & uVar36;
  auVar44._0_4_ = -(uint)(auVar42._0_4_ - __LC9 < auVar42._8_4_ - __LC9);
  auVar44._4_4_ = -(uint)(auVar42._4_4_ - _UNK_0010eaa4 < auVar42._12_4_ - _UNK_0010eaa4);
  auVar44._8_4_ = -(uint)(auVar42._8_4_ - _UNK_0010eaa8 < -_UNK_0010eaa8);
  auVar44._12_4_ = -(uint)(auVar42._12_4_ - _UNK_0010eaac < -_UNK_0010eaac);
  auVar40 = ~auVar44 & auVar42 >> 0x40 | auVar42 & auVar44;
  uVar34 = auVar40._0_4_;
  uVar27 = auVar40._4_4_;
  uVar36 = -(uint)((int)(uVar34 - __LC9) < (int)(uVar27 - __LC9));
  uVar36 = ~uVar36 & uVar27 | uVar34 & uVar36;
  if (uVar36 == uVar25) {
    *(uint *)param_1 = uVar36;
    *(undefined8 *)(param_1 + 4) = 0x10000000d;
    return;
  }
  pcVar28 = roundf;
  uVar34 = 0;
  uVar33 = 0xffffffffffffffff;
  do {
    if ((param_4 >> (uVar34 & 0x1f) & 1) != 0) {
      fVar39 = (float)((int)(char)pcVar28[-1] - (int)(char)pcVar28[-5]);
      fVar35 = roundf(((float)-(int)(char)pcVar28[-5] / fVar39) *
                      ((float)uVar25 - (float)(int)uVar36) + (float)(int)uVar36);
      uVar27 = (uint)fVar35;
      if (0xff < uVar27) {
        uVar27 = ~((int)uVar27 >> 0x1f) & 0xff;
      }
      fVar35 = roundf((float)(uVar25 - uVar36) / fVar39);
      iVar29 = (int)fVar35 - param_3;
      if (0xf < iVar29) {
        iVar29 = 0xf;
      }
      if (iVar29 < 1) {
        iVar29 = 1;
      }
      iVar22 = (int)fVar35 + param_3;
      if (0xf < iVar22) {
        iVar22 = 0xf;
      }
      if (iVar22 < 1) {
        iVar22 = 1;
      }
      if (iVar29 <= iVar22) {
        do {
          uVar32 = 0;
          pbVar31 = param_2;
          do {
            uVar24 = 0xffffffff;
            pcVar26 = pcVar28 + -8;
            do {
              uVar23 = (char)*pcVar26 * iVar29 + uVar27;
              if (0xff < uVar23) {
                uVar23 = ~((int)uVar23 >> 0x1f);
              }
              uVar30 = (uint)*pbVar31 - (uVar23 & 0xff);
              uVar23 = -uVar30;
              if (0 < (int)uVar30) {
                uVar23 = uVar30;
              }
              if (uVar23 < uVar24) {
                uVar24 = uVar23;
              }
              pcVar26 = pcVar26 + 1;
            } while (pcVar28 != pcVar26);
            uVar32 = uVar32 + uVar24 * uVar24;
            if (uVar33 <= uVar32) goto LAB_00102134;
            pbVar31 = pbVar31 + 1;
          } while (param_2 + 0x10 != pbVar31);
          *(uint *)param_1 = uVar27;
          *(int *)(param_1 + 8) = iVar29;
          *(uint *)(param_1 + 4) = uVar34;
          uVar33 = uVar32;
          if (uVar32 == 0) {
            return;
          }
LAB_00102134:
          iVar29 = iVar29 + 1;
        } while (iVar22 + 1 != iVar29);
      }
    }
    uVar34 = uVar34 + 1;
    pcVar28 = pcVar28 + 8;
    if (uVar34 == 0x10) {
      return;
    }
  } while( true );
}



/* std::_Function_handler<void (), basisu::uastc_rdo(unsigned int, basist::uastc_block*,
   basisu::color_rgba const*, basisu::uastc_rdo_params const&, unsigned int, basisu::job_pool*,
   unsigned int)::{lambda()#1}>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */

undefined8
std::
_Function_handler<void(),basisu::uastc_rdo(unsigned_int,basist::uastc_block*,basisu::color_rgba_const*,basisu::uastc_rdo_params_const&,unsigned_int,basisu::job_pool*,unsigned_int)::{lambda()#1}>
::_M_manager(long *param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = *param_2;
    }
    else if (param_3 == 2) {
      puVar1 = (undefined8 *)*param_2;
      puVar3 = (undefined8 *)operator_new(0x58);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      uVar2 = puVar1[7];
      puVar3[6] = puVar1[6];
      puVar3[7] = uVar2;
      uVar2 = puVar1[9];
      puVar3[8] = puVar1[8];
      puVar3[9] = uVar2;
      puVar3[10] = puVar1[10];
      *param_1 = (long)puVar3;
    }
    else if ((param_3 == 3) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1,0x58);
    }
    return 0;
  }
  *param_1 = (long)&basisu::
                    uastc_rdo(unsigned_int,basist::uastc_block*,basisu::color_rgba_const*,basisu::uastc_rdo_params_const&,unsigned_int,basisu::job_pool*,unsigned_int)
                    ::{lambda()#1}::typeinfo;
  return 0;
}



/* basisu::etc_block::get_block_colors(basisu::color_rgba*, unsigned int) const [clone .isra.0] */

void __thiscall
basisu::etc_block::get_block_colors(etc_block *this,color_rgba *param_1,uint param_2)

{
  sbyte sVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  color_rgba cVar10;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((byte)this[3] & 2) == 0) {
    if (param_2 != 0) {
      local_24 = basisu::etc_block::unpack_color4
                           ((ushort)(((byte)*this & 0xf) << 8) |
                            (ushort)(((byte)this[1] & 0xf) << 4) | (byte)this[2] & 0xf,true,0xff);
      goto LAB_0010249a;
    }
    local_24 = basisu::etc_block::unpack_color4
                         (((byte)*this & 0xf0) << 4 | (byte)this[1] & 0xf0 |
                          (ushort)((int)(uint)(byte)this[2] >> 4),true,0xff);
LAB_0010228e:
    sVar1 = 5;
  }
  else {
    if (param_2 == 0) {
      basisu::etc_block::unpack_color5
                ((color_rgba *)&local_24,
                 (ushort)(((int)(uint)(byte)this[1] >> 3) << 5) |
                 (ushort)(((int)(uint)(byte)*this >> 3) << 10) |
                 (ushort)((int)(uint)(byte)this[2] >> 3),true);
      goto LAB_0010228e;
    }
    basisu::etc_block::unpack_color5
              ((color_rgba *)&local_24,
               (ushort)(byte)this[1] * 4 & 0x3e0 | ((byte)*this & 0xf8) << 7 |
               (ushort)((int)(uint)(byte)this[2] >> 3),
               (ushort)(((byte)this[1] & 7) << 3) | (ushort)(((byte)*this & 7) << 6) |
               (byte)this[2] & 7,true,0xff);
LAB_0010249a:
    sVar1 = 2;
  }
  uVar5 = local_24 >> 8 & 0xff;
  uVar6 = local_24 & 0xff;
  uVar3 = (ulong)((int)(uint)(byte)this[3] >> sVar1 & 7);
  lVar4 = uVar3 * 0x10;
  iVar2 = *(int *)(&g_etc1_inten_tables + uVar3 * 2);
  iVar8 = iVar2 + uVar5;
  iVar9 = iVar2 + uVar6;
  iVar2 = iVar2 + (uint)local_24._2_1_;
  if (iVar2 < 0) {
    if (iVar8 < 0) {
      iVar2 = 0;
LAB_001025cb:
      iVar8 = 0;
    }
    else {
      iVar2 = 0;
    }
    if (iVar9 < 0) {
      iVar7 = 0;
    }
    else {
LAB_00102304:
      iVar7 = iVar9;
    }
  }
  else if (iVar2 < 0x100) {
    if (iVar8 < 0) goto LAB_001025cb;
    if (0xff < iVar8) goto LAB_001026d7;
    iVar7 = 0;
    if (-1 < iVar9) goto LAB_001022f5;
  }
  else {
    iVar2 = -1;
    if (0xff < iVar8) {
      iVar2 = -1;
LAB_001026d7:
      iVar8 = -1;
    }
LAB_001022f5:
    iVar7 = -1;
    if (iVar9 < 0x100) goto LAB_00102304;
  }
  *param_1 = SUB41(iVar7,0);
  param_1[1] = SUB41(iVar8,0);
  param_1[2] = SUB41(iVar2,0);
  param_1[3] = (color_rgba)0xff;
  iVar8 = *(int *)((long)&g_etc1_inten_tables + lVar4 + 4);
  iVar9 = (uint)local_24._2_1_ + iVar8;
  if (iVar9 < 0) {
    iVar2 = iVar8 + uVar5;
    if (iVar2 < 0) {
      iVar9 = 0;
LAB_0010260d:
      iVar2 = 0;
    }
    else {
      iVar9 = 0;
    }
    if ((int)(iVar8 + uVar6) < 0) {
      cVar10 = (color_rgba)0x0;
    }
    else {
LAB_00102545:
      cVar10 = (color_rgba)((char)iVar8 + (char)local_24._0_1_);
    }
  }
  else {
    iVar2 = iVar8 + uVar5;
    if (iVar9 < 0x100) {
      if (iVar2 < 0) goto LAB_0010260d;
      if (0xff < iVar2) goto LAB_0010252d;
      cVar10 = (color_rgba)0x0;
      if (-1 < (int)(iVar8 + uVar6)) goto LAB_00102533;
    }
    else {
      iVar9 = -1;
      if (0xff < iVar2) {
        iVar9 = -1;
LAB_0010252d:
        iVar2 = -1;
      }
LAB_00102533:
      cVar10 = (color_rgba)0xff;
      if ((int)(iVar8 + uVar6) < 0x100) goto LAB_00102545;
    }
  }
  param_1[6] = SUB41(iVar9,0);
  param_1[4] = cVar10;
  param_1[5] = SUB41(iVar2,0);
  param_1[7] = (color_rgba)0xff;
  iVar8 = *(int *)(basisu::etc_block::unpack_color5 + lVar4);
  iVar9 = (uint)local_24._2_1_ + iVar8;
  if (iVar9 < 0) {
    iVar2 = iVar8 + uVar5;
    if (iVar2 < 0) {
      iVar9 = 0;
LAB_001025ed:
      iVar2 = 0;
    }
    else {
      iVar9 = 0;
    }
    if ((int)(iVar8 + uVar6) < 0) {
      cVar10 = (color_rgba)0x0;
    }
    else {
LAB_0010250d:
      cVar10 = (color_rgba)((char)iVar8 + (char)local_24._0_1_);
    }
  }
  else {
    iVar2 = iVar8 + uVar5;
    if (iVar9 < 0x100) {
      if (iVar2 < 0) goto LAB_001025ed;
      if (0xff < iVar2) goto LAB_001024f5;
      cVar10 = (color_rgba)0x0;
      if (-1 < (int)(iVar8 + uVar6)) goto LAB_001024fb;
    }
    else {
      iVar9 = -1;
      if (0xff < iVar2) {
        iVar9 = -1;
LAB_001024f5:
        iVar2 = -1;
      }
LAB_001024fb:
      cVar10 = (color_rgba)0xff;
      if ((int)(iVar8 + uVar6) < 0x100) goto LAB_0010250d;
    }
  }
  param_1[8] = cVar10;
  param_1[9] = SUB41(iVar2,0);
  param_1[10] = SUB41(iVar9,0);
  param_1[0xb] = (color_rgba)0xff;
  iVar8 = *(int *)(&DAT_0011009c + lVar4);
  iVar9 = (uint)local_24._2_1_ + iVar8;
  if (iVar9 < 0) {
    iVar2 = uVar5 + iVar8;
    if (iVar2 < 0) {
      iVar9 = 0;
LAB_001025a4:
      iVar2 = 0;
      if (-1 < (int)(iVar8 + uVar6)) goto LAB_001024d0;
    }
    else {
      iVar9 = 0;
      iVar7 = uVar6 + iVar8;
      if (-1 < iVar7) goto LAB_00102410;
    }
    iVar7 = 0;
  }
  else {
    iVar2 = uVar5 + iVar8;
    if (iVar9 < 0x100) {
      if (iVar2 < 0) goto LAB_001025a4;
      if (0xff < iVar2) goto LAB_001024ba;
      iVar7 = 0;
      if ((int)(iVar8 + uVar6) < 0) goto LAB_00102410;
    }
    else {
      iVar9 = -1;
      if (0xff < iVar2) {
        iVar9 = -1;
LAB_001024ba:
        iVar2 = -1;
      }
    }
    iVar7 = -1;
    if (0xff < (int)(iVar8 + uVar6)) goto LAB_00102410;
LAB_001024d0:
    iVar7 = iVar8 + uVar6;
  }
LAB_00102410:
  param_1[0xc] = SUB41(iVar7,0);
  param_1[0xd] = SUB41(iVar2,0);
  param_1[0xe] = SUB41(iVar9,0);
  param_1[0xf] = (color_rgba)0xff;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Hashtable<basisu::selector_bitsequence, std::pair<basisu::selector_bitsequence const,
   unsigned int>, std::allocator<std::pair<basisu::selector_bitsequence const, unsigned int> >,
   std::__detail::_Select1st, std::equal_to<basisu::selector_bitsequence>,
   basisu::selector_bitsequence_hash, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true> >::_M_find_before_node(unsigned long,
   basisu::selector_bitsequence const&, unsigned long) const [clone .isra.0] */

long * std::
       _Hashtable<basisu::selector_bitsequence,std::pair<basisu::selector_bitsequence_const,unsigned_int>,std::allocator<std::pair<basisu::selector_bitsequence_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<basisu::selector_bitsequence>,basisu::selector_bitsequence_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
       ::_M_find_before_node(ulong param_1,selector_bitsequence *param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(*(long *)param_1 + (long)param_2 * 8);
  if (plVar3 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar4 = (long *)*plVar3;
  while( true ) {
    if ((*(int *)(param_3 + 8) == (int)plVar4[2]) && (*(long *)param_3 == plVar4[1])) {
      return plVar3;
    }
    if (*plVar4 == 0) {
      return (long *)0x0;
    }
    uVar1 = *(ulong *)(param_1 + 8);
    uVar2 = basisu::hash_hsieh((uchar *)(*plVar4 + 8),0x10);
    if (param_2 != (selector_bitsequence *)((ulong)uVar2 % uVar1)) break;
    plVar3 = plVar4;
    plVar4 = (long *)*plVar4;
  }
  return (long *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::pair<std::__detail::_Node_iterator<std::pair<basisu::selector_bitsequence const, unsigned
   int>, false, false>, bool> std::_Hashtable<basisu::selector_bitsequence,
   std::pair<basisu::selector_bitsequence const, unsigned int>,
   std::allocator<std::pair<basisu::selector_bitsequence const, unsigned int> >,
   std::__detail::_Select1st, std::equal_to<basisu::selector_bitsequence>,
   basisu::selector_bitsequence_hash, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true>
   >::_M_emplace<std::pair<basisu::selector_bitsequence, unsigned int>
   >(std::integral_constant<bool, true>, std::pair<basisu::selector_bitsequence, unsigned int>&&)
   [clone .isra.0] */

undefined1  [16]
std::
_Hashtable<basisu::selector_bitsequence,std::pair<basisu::selector_bitsequence_const,unsigned_int>,std::allocator<std::pair<basisu::selector_bitsequence_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<basisu::selector_bitsequence>,basisu::selector_bitsequence_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
::_M_emplace<std::pair<basisu::selector_bitsequence,unsigned_int>>
          (long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,byte *param_5,
          int param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  color_rgba cVar6;
  color_rgba cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  char cVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  undefined4 uVar23;
  long *plVar24;
  undefined8 *puVar25;
  long *plVar26;
  long *plVar27;
  ulong uVar28;
  sbyte sVar29;
  uint uVar30;
  uint uVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  byte *pbVar35;
  byte bVar36;
  ushort uVar37;
  uint uVar38;
  uint uVar39;
  selector_bitsequence *psVar40;
  ulong extraout_RDX;
  long *plVar41;
  ulong uVar42;
  uint *extraout_RDX_00;
  color_rgba *pcVar43;
  ulong uVar44;
  ulong uVar45;
  long lVar46;
  long lVar47;
  color32 *pcVar48;
  undefined8 uVar49;
  byte *pbVar50;
  uint *puVar51;
  color_rgba *pcVar52;
  long lVar53;
  long lVar54;
  byte *pbVar55;
  uint uVar56;
  int iVar57;
  etc_block *peVar58;
  code *pcVar59;
  int iVar60;
  int iVar61;
  color_rgba *pcVar62;
  ulong uVar63;
  long lVar64;
  int iVar65;
  uint uVar66;
  int iVar67;
  color_rgba *pcVar68;
  code *pcVar69;
  int *piVar70;
  int iVar71;
  uint uVar72;
  long in_FS_OFFSET;
  bool bVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  ulong uStack_590;
  ushort uStack_580;
  ulong uStack_558;
  ulong uStack_550;
  ulong uStack_430;
  int *piStack_428;
  uint uStack_41c;
  color_rgba *pcStack_418;
  int iStack_408;
  long lStack_3e8;
  color_rgba *pcStack_3e0;
  color_rgba *pcStack_3b0;
  ulong uStack_3a8;
  ulong uStack_398;
  color_rgba *pcStack_390;
  uint uStack_364;
  uint uStack_328;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  uint auStack_2c8 [6];
  char acStack_2b0 [12];
  int aiStack_2a4 [3];
  uint uStack_298;
  uint uStack_294;
  int iStack_290;
  uint auStack_28c [3];
  int aiStack_280 [4];
  uint auStack_270 [7];
  int iStack_254;
  int iStack_250;
  int iStack_24c;
  int iStack_248;
  int iStack_244;
  color_rgba acStack_240 [4];
  int aiStack_23c [47];
  color_rgba acStack_180 [4];
  int aiStack_17c [47];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  ulong uStack_88;
  ulong local_50;
  long *local_40;
  
  plVar24 = (long *)operator_new(0x20);
  lVar64 = *param_2;
  lVar34 = param_2[1];
  lVar32 = param_1[3];
  *plVar24 = 0;
  plVar24[1] = lVar64;
  plVar24[2] = lVar34;
  *(int *)(plVar24 + 3) = (int)param_2[2];
  if ((lVar32 == 0) && (plVar26 = (long *)param_1[2], plVar26 != (long *)0x0)) {
    do {
      if (((int)plVar24[2] == (int)plVar26[2]) && (plVar24[1] == plVar26[1])) goto LAB_001027d7;
      plVar26 = (long *)*plVar26;
    } while (plVar26 != (long *)0x0);
  }
  uVar19 = basisu::hash_hsieh((uchar *)(plVar24 + 1),0x10);
  puVar51 = (uint *)param_1[1];
  psVar40 = (selector_bitsequence *)((ulong)uVar19 % (ulong)puVar51);
  uVar42 = param_1[3];
  if (uVar42 != 0) {
    puVar25 = (undefined8 *)_M_find_before_node((ulong)param_1,psVar40,(ulong)(plVar24 + 1));
    if ((puVar25 != (undefined8 *)0x0) && (plVar26 = (long *)*puVar25, plVar26 != (long *)0x0)) {
LAB_001027d7:
      uVar49 = 0;
      operator_delete(plVar24,0x20);
      plVar24 = plVar26;
      goto LAB_001027e9;
    }
    uVar42 = param_1[3];
    puVar51 = (uint *)param_1[1];
  }
  peVar58 = (etc_block *)(param_1 + 4);
  lVar32 = 1;
  cVar17 = std::__detail::_Prime_rehash_policy::_M_need_rehash((ulong)peVar58,(ulong)puVar51,uVar42)
  ;
  if (cVar17 == '\0') {
    plVar26 = (long *)*param_1;
    plVar27 = plVar26 + (long)psVar40;
    plVar41 = (long *)*plVar27;
    if (plVar41 == (long *)0x0) goto LAB_00102992;
LAB_00102858:
    *plVar24 = *plVar41;
    *(long **)*plVar27 = plVar24;
  }
  else {
    if (extraout_RDX == 1) {
      plVar26 = param_1 + 6;
      param_1[6] = 0;
    }
    else {
      if (extraout_RDX >> 0x3c != 0) {
        if (extraout_RDX >> 0x3d != 0) {
          std::__throw_bad_array_new_length();
        }
        std::__throw_bad_alloc();
        uStack_88 = extraout_RDX >> 0x3d;
        lStack_98 = *(long *)(in_FS_OFFSET + 0x28);
        *puVar51 = 0;
        if (*extraout_RDX_00 == 8) {
          if (lStack_98 == *(long *)(in_FS_OFFSET + 0x28)) {
            auVar75 = basisu::pack_etc1_block_solid_color(peVar58,(uchar *)(extraout_RDX_00 + 0x1c))
            ;
            return auVar75;
          }
          goto LAB_00104d94;
        }
        cVar17 = *(char *)((long)&basist::g_uastc_mode_has_etc1_bias + (ulong)*extraout_RDX_00);
        uStack_c0 = __LC13;
        uStack_b8 = _UNK_0010eac8;
        uStack_b0 = __LC14;
        uStack_a8 = _UNK_0010ead8;
        if (cVar17 == '\0') {
          bVar16 = false;
          uVar42 = 1;
        }
        else if (param_6 == 2) {
          bVar16 = true;
          if (((uint)local_50 & 0x80) == 0) {
            uVar42 = (ulong)((-(uint)(((uint)local_50 & 0x40) == 0) & 10) + 10);
          }
          else {
LAB_00102ff4:
            bVar16 = true;
            uVar42 = 1;
          }
        }
        else if (param_6 < 3) {
          if (param_6 == 0) {
            bVar16 = true;
            uVar42 = (ulong)(2 - (((uint)local_50 & 0xc0) != 0));
          }
          else {
            bVar16 = true;
            if (((uint)local_50 & 0x80) != 0) goto LAB_00102ff4;
            uVar42 = (ulong)((-(uint)(((uint)local_50 & 0x40) == 0) & 2) + 3);
          }
        }
        else {
          bVar16 = false;
          uVar42 = 0x20;
          if (param_6 == 3) {
            bVar16 = true;
            if (((uint)local_50 & 0x80) != 0) goto LAB_00102ff4;
            uVar42 = (ulong)((-(uint)(((uint)local_50 & 0x40) == 0) & 0x10) + 0x10);
          }
        }
        uStack_2e8 = 0;
        *(undefined8 *)peVar58 = 0;
        pcVar43 = acStack_240;
        pbVar50 = param_5;
        pcVar62 = acStack_180;
        do {
          lVar64 = 0;
          pcVar52 = pcVar43;
          pcVar68 = pcVar62;
          do {
            bVar18 = *(byte *)(lVar32 + lVar64);
            uVar19 = (uint)*(byte *)(lVar32 + 2 + lVar64);
            iVar21 = (uint)*(byte *)(lVar32 + 1 + lVar64) * 0xb7 + (uint)bVar18 * 0x36 +
                     uVar19 * 0x13;
            *(int *)pcVar52 = iVar21;
            bVar36 = pbVar50[lVar64 + 1];
            *(uint *)(pcVar52 + 8) = (uint)bVar18 * 0x100 - iVar21;
            bVar18 = pbVar50[lVar64];
            *(uint *)(pcVar52 + 4) = uVar19 * 0x100 - iVar21;
            bVar4 = pbVar50[lVar64 + 2];
            lVar64 = lVar64 + 4;
            iVar21 = (uint)bVar36 * 0xb7 + (uint)bVar18 * 0x36 + (uint)bVar4 * 0x13;
            *(int *)pcVar68 = iVar21;
            *(uint *)(pcVar68 + 4) = (uint)bVar4 * 0x100 - iVar21;
            *(uint *)(pcVar68 + 8) = (uint)bVar18 * 0x100 - iVar21;
            pcVar52 = pcVar52 + 0xc;
            pcVar68 = pcVar68 + 0xc;
          } while (lVar64 != 0x10);
          pcVar43 = pcVar43 + 0x30;
          pcVar62 = pcVar62 + 0x30;
          lVar32 = lVar32 + 0x10;
          pbVar50 = pbVar50 + 0x10;
        } while (pcVar43 != acStack_180);
        uStack_41c = (uint)local_50 & 0x100;
        if (((uint)local_50 & 0x100) == 0) {
          if (1 < param_6) {
            iVar21 = 2;
            uVar19 = 2;
            if (((uint)local_50 & 0xc0) == 0) goto LAB_00102c69;
          }
          pcVar43 = (color_rgba *)auStack_270;
          pbVar50 = param_5;
          pcVar62 = pcVar43;
          do {
            pcVar52 = pcVar62 + 0x10;
            bVar18 = pbVar50[0x18];
            *(uint *)pcVar62 =
                 (uint)*pbVar50 + (uint)pbVar50[0x10] + (uint)pbVar50[4] + (uint)pbVar50[0x14];
            bVar36 = pbVar50[0x30];
            *(uint *)(pcVar62 + 8) =
                 (uint)pbVar50[8] + (uint)bVar18 + (uint)pbVar50[0xc] + (uint)pbVar50[0x1c];
            bVar18 = pbVar50[0x38];
            *(uint *)(pcVar62 + 4) =
                 (uint)pbVar50[0x20] + (uint)bVar36 + (uint)pbVar50[0x24] + (uint)pbVar50[0x34];
            *(uint *)(pcVar62 + 0xc) =
                 (uint)pbVar50[0x28] + (uint)bVar18 + (uint)pbVar50[0x2c] + (uint)pbVar50[0x3c];
            pbVar50 = pbVar50 + 1;
            pcVar62 = pcVar52;
          } while (pcVar52 != acStack_240);
          lVar32 = 0;
          do {
            iVar61 = *(int *)pcVar43;
            iVar65 = *(int *)(pcVar43 + 8);
            iVar67 = *(int *)(pcVar43 + 4);
            iVar21 = iVar61 + iVar65;
            iVar71 = iVar21 + 4;
            iVar21 = iVar21 + 0xb;
            if (-1 < iVar71) {
              iVar21 = iVar71;
            }
            iVar57 = *(int *)(pcVar43 + 0xc);
            iVar71 = iVar67 + iVar57;
            *(int *)((long)aiStack_2a4 + lVar32) = iVar21 >> 3;
            iVar60 = iVar71 + 4;
            iVar21 = iVar71 + 0xb;
            if (-1 < iVar60) {
              iVar21 = iVar60;
            }
            iVar61 = iVar61 + iVar67;
            *(int *)((long)&uStack_298 + lVar32) = iVar21 >> 3;
            iVar21 = iVar61 + 4;
            if (iVar21 < 0) {
              iVar21 = iVar61 + 0xb;
            }
            iVar65 = iVar65 + iVar57;
            *(int *)((long)auStack_28c + lVar32) = iVar21 >> 3;
            iVar21 = iVar65 + 4;
            if (iVar21 < 0) {
              iVar21 = iVar65 + 0xb;
            }
            pcVar43 = pcVar43 + 0x10;
            *(int *)((long)aiStack_280 + lVar32) = iVar21 >> 3;
            lVar32 = lVar32 + 4;
          } while (lVar32 != 0xc);
          iVar61 = 0;
          iVar71 = 0;
          iVar65 = 0;
          iVar67 = 0;
          pbVar50 = param_5 + 0x20;
          lVar32 = 0;
          do {
            pbVar55 = pbVar50 + -0x20;
            pbVar35 = param_5 + lVar32 * 0x10;
            do {
              iVar21 = (int)(((uint)*pbVar55 - aiStack_2a4[0]) + ((uint)pbVar55[1] - aiStack_2a4[1])
                             + 1 + ((uint)pbVar55[2] - aiStack_2a4[2])) / 3;
              uVar19 = aiStack_2a4[0] + iVar21;
              bVar18 = (byte)uVar19;
              if (0xff < uVar19) {
                bVar18 = ~(byte)((int)uVar19 >> 0x1f);
              }
              uVar19 = aiStack_2a4[1] + iVar21;
              if (0xff < uVar19) {
                uVar19 = ~((int)uVar19 >> 0x1f);
              }
              uVar72 = iVar21 + aiStack_2a4[2];
              uVar20 = ~((int)uVar72 >> 0x1f);
              if (uVar72 < 0x100) {
                uVar20 = uVar72;
              }
              iVar57 = (uint)*pbVar55 - (uint)bVar18;
              iVar21 = (uint)pbVar55[1] - (uVar19 & 0xff);
              iVar60 = (uint)pbVar55[2] - (uVar20 & 0xff);
              iVar67 = iVar67 + iVar57 * iVar57 + iVar21 * iVar21 + iVar60 * iVar60;
              iVar21 = (int)((pbVar55[0x20] - uStack_298) + (pbVar55[0x21] - uStack_294) + 1 +
                            ((uint)pbVar55[0x22] - iStack_290)) / 3;
              uVar19 = uStack_298 + iVar21;
              bVar18 = (byte)uVar19;
              if (0xff < uVar19) {
                bVar18 = ~(byte)((int)uVar19 >> 0x1f);
              }
              uVar19 = uStack_294 + iVar21;
              if (0xff < uVar19) {
                uVar19 = ~((int)uVar19 >> 0x1f);
              }
              uVar72 = iVar21 + iStack_290;
              uVar20 = ~((int)uVar72 >> 0x1f);
              if (uVar72 < 0x100) {
                uVar20 = uVar72;
              }
              iVar57 = (uint)pbVar55[0x20] - (uint)bVar18;
              iVar21 = (uint)pbVar55[0x21] - (uVar19 & 0xff);
              iVar60 = (uint)pbVar55[0x22] - (uVar20 & 0xff);
              iVar65 = iVar65 + iVar57 * iVar57 + iVar21 * iVar21 + iVar60 * iVar60;
              iVar21 = (int)((*pbVar35 - auStack_28c[0]) + (pbVar35[1] - auStack_28c[1]) + 1 +
                            (pbVar35[2] - auStack_28c[2])) / 3;
              uVar19 = auStack_28c[0] + iVar21;
              bVar18 = (byte)uVar19;
              if (0xff < uVar19) {
                bVar18 = ~(byte)((int)uVar19 >> 0x1f);
              }
              uVar19 = auStack_28c[1] + iVar21;
              if (0xff < uVar19) {
                uVar19 = ~((int)uVar19 >> 0x1f);
              }
              uVar72 = iVar21 + auStack_28c[2];
              uVar20 = ~((int)uVar72 >> 0x1f);
              if (uVar72 < 0x100) {
                uVar20 = uVar72;
              }
              iVar57 = (uint)*pbVar35 - (uint)bVar18;
              iVar21 = (uint)pbVar35[1] - (uVar19 & 0xff);
              iVar60 = (uint)pbVar35[2] - (uVar20 & 0xff);
              pbVar1 = pbVar35 + 9;
              iVar71 = iVar71 + iVar57 * iVar57 + iVar21 * iVar21 + iVar60 * iVar60;
              pbVar2 = pbVar35 + 10;
              iVar21 = (int)(((uint)pbVar35[8] - aiStack_280[0]) + ((uint)*pbVar1 - aiStack_280[1])
                             + 1 + ((uint)*pbVar2 - aiStack_280[2])) / 3;
              uVar19 = aiStack_280[0] + iVar21;
              bVar18 = (byte)uVar19;
              if (0xff < uVar19) {
                bVar18 = ~(byte)((int)uVar19 >> 0x1f);
              }
              uVar19 = aiStack_280[1] + iVar21;
              if (0xff < uVar19) {
                uVar19 = ~((int)uVar19 >> 0x1f);
              }
              uVar72 = iVar21 + aiStack_280[2];
              uVar20 = ~((int)uVar72 >> 0x1f);
              if (uVar72 < 0x100) {
                uVar20 = uVar72;
              }
              iVar57 = (uint)pbVar35[8] - (uint)bVar18;
              pbVar55 = pbVar55 + 0x10;
              pbVar35 = pbVar35 + 4;
              iVar21 = (uint)*pbVar1 - (uVar19 & 0xff);
              iVar60 = (uint)*pbVar2 - (uVar20 & 0xff);
              iVar61 = iVar61 + iVar57 * iVar57 + iVar21 * iVar21 + iVar60 * iVar60;
            } while (pbVar50 != pbVar55);
            pbVar50 = pbVar50 + 4;
            lVar32 = lVar32 + 1;
          } while (lVar32 != 4);
          iVar21 = 2;
          bVar73 = iVar65 + iVar67 < iVar61 + iVar71;
          uStack_41c = (uint)bVar73;
          uVar19 = bVar73 + 1;
        }
        else {
          uStack_41c = 0;
          iVar21 = 1;
          uVar19 = 1;
        }
LAB_00102c69:
        pcStack_390 = (color_rgba *)&uStack_298;
        pcStack_3b0 = (color_rgba *)aiStack_280;
        pcStack_418 = (color_rgba *)auStack_270;
        bVar18 = 0;
        lVar32 = (ulong)uStack_41c * 2;
        uStack_3a8 = 0xffffffffffffffff;
LAB_00102d73:
        uStack_328 = 0x1f;
        iVar61 = 0;
        bVar18 = bVar18 & 0xfe | (byte)uStack_41c;
LAB_00102dc5:
        auStack_2c8[0] = 0;
        auStack_2c8[1] = 0;
        auStack_2c8[2] = 0;
        auStack_2c8[3] = 0;
        auStack_2c8[4] = 0;
        auStack_2c8[5] = 0;
        bVar18 = ((byte)iVar61 ^ 1) * '\x02' | bVar18 & 0xfd;
        lVar64 = 0;
        uStack_2e8._0_4_ = CONCAT13(bVar18,(undefined3)uStack_2e8);
        uStack_2e0 = _LC12;
        uStack_2d8 = _LC12;
        uStack_2d0 = _LC12;
        pcVar48 = (color32 *)aiStack_2a4;
        pcVar69 = basisu::etc_block::pack_color4 + lVar32 * 0x10;
        while( true ) {
          pcVar59 = pcVar69 + -0x10;
          iVar65 = 0;
          iVar67 = 0;
          iVar71 = 0;
          uVar20 = *(uint *)((long)&uStack_2e0 + lVar64);
          uVar72 = *(uint *)((long)&uStack_2d8 + lVar64);
          uVar66 = *(uint *)((long)&uStack_2d0 + lVar64);
          uVar31 = *(uint *)((long)auStack_2c8 + lVar64);
          uVar39 = *(uint *)((long)auStack_2c8 + lVar64 + 8);
          uVar56 = *(uint *)((long)auStack_2c8 + lVar64 + 0x10);
          do {
            pbVar50 = param_5 + (ulong)(byte)pcVar59[1] * 0x10 + (ulong)(byte)*pcVar59 * 4;
            bVar36 = *pbVar50;
            bVar4 = pbVar50[1];
            bVar5 = pbVar50[2];
            iVar71 = iVar71 + (uint)bVar36;
            iVar67 = iVar67 + (uint)bVar4;
            iVar65 = iVar65 + (uint)bVar5;
            uVar30 = (uint)bVar36;
            if (bVar36 <= uVar20 && uVar20 != uVar30) {
              uVar20 = uVar30;
            }
            uVar38 = (uint)bVar4;
            if (bVar4 <= uVar72 && uVar72 != uVar38) {
              uVar72 = uVar38;
            }
            uVar22 = (uint)bVar5;
            if (bVar5 <= uVar66 && uVar66 != uVar22) {
              uVar66 = uVar22;
            }
            if (uVar31 < uVar30) {
              uVar31 = uVar30;
            }
            if (uVar39 < uVar38) {
              uVar39 = uVar38;
            }
            if (uVar56 < uVar22) {
              uVar56 = uVar22;
            }
            pcVar59 = pcVar59 + 2;
          } while (pcVar69 != pcVar59);
          pcVar69 = pcVar69 + 0x10;
          *(uint *)((long)&uStack_2e0 + lVar64) = uVar20;
          pcVar48[3] = (color32)0x0;
          *(uint *)((long)&uStack_2d8 + lVar64) = uVar72;
          *(uint *)((long)&uStack_2d0 + lVar64) = uVar66;
          *(uint *)((long)auStack_2c8 + lVar64) = uVar31;
          *(uint *)((long)auStack_2c8 + lVar64 + 8) = uVar39;
          *(uint *)((long)auStack_2c8 + lVar64 + 0x10) = uVar56;
          *pcVar48 = SUB81((ulong)(iVar71 * uStack_328 + 0x3fc) / 0x7f8,0);
          pcVar48[1] = SUB41((iVar67 * uStack_328 + 0x3fc) / 0x7f8,0);
          pcVar48[2] = SUB41((iVar65 * uStack_328 + 0x3fc) / 0x7f8,0);
          if (lVar64 == 4) break;
          lVar64 = 4;
          pcVar48 = pcVar48 + 4;
        }
        uStack_398 = 0;
LAB_00103033:
        if (bVar16) {
          uStack_364 = (uint)*(byte *)((long)&uStack_c0 + uStack_398);
        }
        else {
          uStack_364 = (uint)uStack_398;
        }
        lVar64 = 0;
        pcVar48 = (color32 *)aiStack_2a4;
        if (cVar17 != '\0') goto LAB_0010308b;
        do {
          uVar23 = *(undefined4 *)pcVar48;
          while( true ) {
            pcVar48 = pcVar48 + 4;
            *(undefined4 *)(pcStack_390 + lVar64 * 4) = uVar23;
            if (lVar64 != 0) {
              bVar36 = bVar18 & 0xfd;
              if (iVar61 == 0) {
                bVar36 = bVar36 | 2;
                uStack_2e8 = CONCAT44(uStack_2e8._4_4_,CONCAT13(bVar18,(undefined3)uStack_2e8)) &
                             0xfffffffffdffffff | 0x2000000;
                iVar67 = basisu::etc_block::pack_color5(pcStack_390,false,0x7f);
                iVar65 = (uStack_294 >> 0x10 & 0xff) - (uStack_298 >> 0x10 & 0xff);
                if (3 < iVar65) {
                  iVar65 = 3;
                }
                if (iVar65 < -4) {
                  iVar65 = -4;
                }
                iVar71 = (uStack_294 >> 8 & 0xff) - (uStack_298 >> 8 & 0xff);
                if (3 < iVar71) {
                  iVar71 = 3;
                }
                if (iVar71 < -4) {
                  iVar71 = -4;
                }
                iVar57 = (uStack_294 & 0xff) - (uStack_298 & 0xff);
                if (3 < iVar57) {
                  iVar57 = 3;
                }
                if (iVar57 < -4) {
                  iVar57 = -4;
                }
                bVar73 = true;
                uVar20 = basisu::etc_block::pack_delta3(iVar57,iVar71,iVar65);
                uVar72 = (uint)(ushort)((ushort)iVar67 >> 10) << 3 |
                         (ushort)((ushort)uVar20 >> 6) & 7;
                uVar66 = iVar67 << 3 | uVar20 & 7;
                uVar37 = ((ushort)iVar67 >> 5) << 3 | (ushort)uVar20 >> 3 & 7;
              }
              else {
                uStack_2e8 = CONCAT44(uStack_2e8._4_4_,CONCAT13(bVar18,(undefined3)uStack_2e8)) &
                             0xfffffffffdffffff;
                iVar65 = basisu::etc_block::pack_color4(pcStack_390,false,0x7f);
                bVar73 = false;
                uVar20 = basisu::etc_block::pack_color4((color_rgba *)&uStack_294,false,0x7f);
                uVar72 = (uint)(ushort)((ushort)iVar65 >> 8) << 4 | uVar20 >> 8 & 0xf;
                uVar66 = iVar65 << 4 | uVar20 & 0xf;
                uVar37 = (ushort)CONCAT31((int3)(uVar20 >> 8),(byte)uVar20 >> 4) |
                         (ushort)iVar65 & 0xfff0;
              }
              uVar63 = uStack_2e8;
              bVar18 = (byte)uVar37;
              uStack_580 = uVar37 * 4 & 0x3e0;
              uStack_2e8._3_5_ = SUB85(uVar63,3);
              uStack_2e8._0_3_ = CONCAT12((char)uVar66,CONCAT11(bVar18,(char)uVar72));
              lVar34 = 0;
              if (!bVar73) goto LAB_001032ab;
              goto LAB_001031a4;
            }
            lVar64 = 1;
            if (cVar17 == '\0') break;
LAB_0010308b:
            uVar23 = basist::apply_etc1_bias(pcVar48,uStack_364,uStack_328,(uint)lVar64);
          }
        } while( true );
      }
      plVar26 = (long *)operator_new(extraout_RDX * 8);
      memset(plVar26,0,extraout_RDX * 8);
    }
    local_40 = param_1 + 6;
    plVar27 = (long *)param_1[2];
    local_50 = 0;
    param_1[2] = 0;
    uVar42 = local_50;
    while (local_50 = uVar42, plVar41 = plVar27, plVar27 != (long *)0x0) {
      while( true ) {
        plVar27 = (long *)*plVar41;
        uVar20 = basisu::hash_hsieh((uchar *)(plVar41 + 1),0x10);
        uVar42 = (ulong)uVar20 % extraout_RDX;
        plVar3 = plVar26 + uVar42;
        if ((long *)*plVar3 == (long *)0x0) break;
        *plVar41 = *(long *)*plVar3;
        *(long **)*plVar3 = plVar41;
        plVar41 = plVar27;
        if (plVar27 == (long *)0x0) goto LAB_00102951;
      }
      *plVar41 = param_1[2];
      param_1[2] = (long)plVar41;
      *plVar3 = (long)(param_1 + 2);
      if (*plVar41 != 0) {
        plVar26[local_50] = (long)plVar41;
      }
    }
LAB_00102951:
    if ((long *)*param_1 != local_40) {
      operator_delete((long *)*param_1,param_1[1] << 3);
    }
    param_1[1] = extraout_RDX;
    *param_1 = (long)plVar26;
    psVar40 = (selector_bitsequence *)((ulong)uVar19 % extraout_RDX);
    plVar27 = plVar26 + (long)psVar40;
    plVar41 = (long *)*plVar27;
    if (plVar41 != (long *)0x0) goto LAB_00102858;
LAB_00102992:
    lVar32 = param_1[2];
    param_1[2] = (long)plVar24;
    *plVar24 = lVar32;
    if (lVar32 != 0) {
      uVar42 = param_1[1];
      uVar19 = basisu::hash_hsieh((uchar *)(lVar32 + 8),0x10);
      plVar27 = (long *)(*param_1 + (long)psVar40 * 8);
      plVar26[(ulong)uVar19 % uVar42] = (long)plVar24;
    }
    *plVar27 = (long)(param_1 + 2);
  }
  param_1[3] = param_1[3] + 1;
  uVar49 = 1;
LAB_001027e9:
  auVar74._8_8_ = uVar49;
  auVar74._0_8_ = plVar24;
  return auVar74;
LAB_001031a4:
  iVar65 = (int)(uVar72 & 0xff) >> 3;
  if (lVar34 == 0) {
    basisu::etc_block::unpack_color5
              (pcStack_418,(ushort)(iVar65 << 10) | uStack_580 | (ushort)((int)(uVar66 & 0xff) >> 3)
               ,true);
  }
  else {
    basisu::etc_block::unpack_color5
              (pcStack_418,(ushort)(iVar65 << 10) | uStack_580 | (ushort)((int)(uVar66 & 0xff) >> 3)
               ,(ushort)((bVar18 & 7) << 3) | (ushort)((uVar72 & 7) << 6) | (ushort)uVar66 & 7,true,
               0xff);
  }
  while( true ) {
    uVar31 = auStack_270[0] >> 8 & 0xff;
    uVar56 = auStack_2c8[lVar34] - (auStack_270[0] & 0xff);
    uVar39 = auStack_270[0] >> 0x10 & 0xff;
    uVar20 = -uVar56;
    if (0 < (int)uVar56) {
      uVar20 = uVar56;
    }
    uVar56 = (auStack_270[0] & 0xff) - *(int *)((long)&uStack_2e0 + lVar34 * 4);
    if ((int)uVar56 < 1) {
      uVar56 = -uVar56;
    }
    if ((int)uVar20 < (int)uVar56) {
      uVar20 = uVar56;
    }
    uVar56 = auStack_2c8[lVar34 + 2] - uVar31;
    if ((int)uVar56 < 1) {
      uVar56 = -uVar56;
    }
    if ((int)uVar20 < (int)uVar56) {
      uVar20 = uVar56;
    }
    uVar31 = uVar31 - *(int *)((long)&uStack_2d8 + lVar34 * 4);
    if ((int)uVar31 < 1) {
      uVar31 = -uVar31;
    }
    if ((int)uVar20 < (int)uVar31) {
      uVar20 = uVar31;
    }
    uVar31 = auStack_2c8[lVar34 + 4] - uVar39;
    if ((int)uVar31 < 1) {
      uVar31 = -uVar31;
    }
    if ((int)uVar20 < (int)uVar31) {
      uVar20 = uVar31;
    }
    uVar39 = uVar39 - *(int *)((long)&uStack_2d0 + lVar34 * 4);
    if ((int)uVar39 < 1) {
      uVar39 = -uVar39;
    }
    if ((int)uVar20 < (int)uVar39) {
      uVar20 = uVar39;
    }
    auStack_28c[lVar34] = uVar20;
    if (lVar34 != 0) {
      acStack_2b0[0] = '\0';
      acStack_2b0[1] = '\0';
      acStack_2b0[2] = '\0';
      acStack_2b0[3] = '\0';
      acStack_2b0[4] = '\0';
      acStack_2b0[5] = '\0';
      acStack_2b0[6] = '\0';
      acStack_2b0[7] = '\0';
      lStack_3e8 = 0;
      piStack_428 = (int *)&uStack_c0;
      pcStack_3e0 = acStack_180;
      goto LAB_00103354;
    }
    lVar34 = lVar64;
    if (bVar73) break;
LAB_001032ab:
    if (lVar34 == 0) {
      uVar37 = (ushort)((int)(uVar66 & 0xff) >> 4);
      uVar20 = (int)(uVar72 & 0xff) >> 4;
      uVar31 = (int)(uint)bVar18 >> 4;
    }
    else {
      uVar37 = (ushort)uVar66 & 0xf;
      uVar20 = uVar72 & 0xf;
      uVar31 = bVar18 & 0xf;
    }
    auStack_270[0] =
         basisu::etc_block::unpack_color4
                   ((ushort)(uVar31 << 4) | (ushort)(uVar20 << 8) | uVar37,true,0xff);
  }
  goto LAB_001031a4;
LAB_00103354:
  do {
    iStack_408 = 8;
    if ((param_6 != 4) && (auStack_28c[lStack_3e8] < 0x34)) {
      iStack_408 = (-(uint)(auStack_28c[lStack_3e8] < 7) & 0xfffffffe) + 4;
    }
    uStack_430 = 0xffffffffffffffff;
    iVar65 = 0;
    sVar29 = (-(lStack_3e8 == 0) & 3U) + 2;
    uVar20 = ~(7 << sVar29);
    do {
      bVar36 = bVar36 & (byte)uVar20 | (byte)(iVar65 << sVar29);
      uStack_2e8._0_4_ = CONCAT13(bVar36,(undefined3)uStack_2e8);
      basisu::etc_block::get_block_colors((etc_block *)&uStack_2e8,pcStack_3b0,(uint)lStack_3e8);
      pcVar43 = pcStack_418;
      pcVar62 = pcStack_3b0;
      do {
        cVar6 = *pcVar62;
        pcVar52 = pcVar43 + 0xc;
        cVar7 = pcVar62[2];
        iVar67 = (uint)(byte)pcVar62[1] * 0xb7 + (uint)(byte)cVar6 * 0x36 + (uint)(byte)cVar7 * 0x13
        ;
        *(int *)pcVar43 = iVar67;
        *(uint *)(pcVar43 + 4) = (uint)(byte)cVar7 * 0x100 - iVar67;
        *(uint *)(pcVar43 + 8) = (uint)(byte)cVar6 * 0x100 - iVar67;
        pcVar43 = pcVar52;
        pcVar62 = pcVar62 + 4;
      } while (acStack_240 != pcVar52);
      if (uStack_41c == 0) {
        uStack_558 = 0;
        piVar70 = piStack_428 + -0x30;
        do {
          iVar67 = *piVar70;
          iVar71 = piVar70[2];
          iVar57 = piVar70[1];
          iVar60 = piVar70[4];
          iVar8 = piVar70[3];
          iVar9 = piVar70[5];
          uVar28 = (long)(iStack_254 - iVar60) * (long)(iStack_254 - iVar60) +
                   (long)(iStack_250 - iVar9) * (long)(iStack_250 - iVar9) +
                   (long)(int)(auStack_270[6] - iVar8) * (long)(int)(auStack_270[6] - iVar8) * 4;
          uVar63 = (long)(iStack_244 - iVar9) * (long)(iStack_244 - iVar9) +
                   (long)(iStack_24c - iVar8) * (long)(iStack_24c - iVar8) * 4 +
                   (long)(iStack_248 - iVar60) * (long)(iStack_248 - iVar60);
          if (uVar28 <= uVar63) {
            uVar63 = uVar28;
          }
          uVar28 = (long)(int)(auStack_270[5] - iVar9) * (long)(int)(auStack_270[5] - iVar9) +
                   (long)(int)(auStack_270[3] - iVar8) * (long)(int)(auStack_270[3] - iVar8) * 4 +
                   (long)(int)(auStack_270[4] - iVar60) * (long)(int)(auStack_270[4] - iVar60);
          if (uVar63 <= uVar28) {
            uVar28 = uVar63;
          }
          uVar63 = (long)(int)(auStack_270[2] - iVar9) * (long)(int)(auStack_270[2] - iVar9) +
                   (long)(int)(auStack_270[0] - iVar8) * (long)(int)(auStack_270[0] - iVar8) * 4 +
                   (long)(int)(auStack_270[1] - iVar60) * (long)(int)(auStack_270[1] - iVar60);
          if (uVar28 <= uVar63) {
            uVar63 = uVar28;
          }
          uVar44 = (long)(iStack_254 - iVar57) * (long)(iStack_254 - iVar57) +
                   (long)(iStack_250 - iVar71) * (long)(iStack_250 - iVar71) +
                   (long)(int)(auStack_270[6] - iVar67) * (long)(int)(auStack_270[6] - iVar67) * 4;
          uVar28 = (long)(iStack_244 - iVar71) * (long)(iStack_244 - iVar71) +
                   (long)(iStack_24c - iVar67) * (long)(iStack_24c - iVar67) * 4 +
                   (long)(iStack_248 - iVar57) * (long)(iStack_248 - iVar57);
          if (uVar44 <= uVar28) {
            uVar28 = uVar44;
          }
          uVar44 = (long)(int)(auStack_270[5] - iVar71) * (long)(int)(auStack_270[5] - iVar71) +
                   (long)(int)(auStack_270[3] - iVar67) * (long)(int)(auStack_270[3] - iVar67) * 4 +
                   (long)(int)(auStack_270[4] - iVar57) * (long)(int)(auStack_270[4] - iVar57);
          if (uVar28 <= uVar44) {
            uVar44 = uVar28;
          }
          uVar28 = (long)(int)(auStack_270[2] - iVar71) * (long)(int)(auStack_270[2] - iVar71) +
                   (long)(int)(auStack_270[0] - iVar67) * (long)(int)(auStack_270[0] - iVar67) * 4 +
                   (long)(int)(auStack_270[1] - iVar57) * (long)(int)(auStack_270[1] - iVar57);
          if (uVar28 < uVar44) {
            uVar44 = uVar28;
          }
          piVar70 = piVar70 + 0xc;
          uStack_558 = uStack_558 + uVar63 + uVar44;
        } while (piStack_428 != piVar70);
        if (uStack_430 <= uStack_558) break;
      }
      else {
        uStack_558 = 0;
        pcVar43 = pcStack_3e0;
        uVar72 = 0;
        do {
          iVar67 = *(int *)pcVar43;
          iVar71 = *(int *)(pcVar43 + 8);
          iVar57 = *(int *)(pcVar43 + 4);
          iVar60 = *(int *)(pcVar43 + 0x10);
          iVar8 = *(int *)(pcVar43 + 0xc);
          iVar9 = *(int *)(pcVar43 + 0x14);
          iVar10 = *(int *)(pcVar43 + 0x18);
          iVar11 = *(int *)(pcVar43 + 0x20);
          iVar12 = *(int *)(pcVar43 + 0x1c);
          uVar28 = (long)(iStack_254 - iVar60) * (long)(iStack_254 - iVar60) +
                   (long)(iStack_250 - iVar9) * (long)(iStack_250 - iVar9) +
                   (long)(int)(auStack_270[6] - iVar8) * (long)(int)(auStack_270[6] - iVar8) * 4;
          iVar13 = *(int *)(pcVar43 + 0x24);
          iVar14 = *(int *)(pcVar43 + 0x28);
          iVar15 = *(int *)(pcVar43 + 0x2c);
          uVar63 = (long)(iStack_244 - iVar9) * (long)(iStack_244 - iVar9) +
                   (long)(iStack_24c - iVar8) * (long)(iStack_24c - iVar8) * 4 +
                   (long)(iStack_248 - iVar60) * (long)(iStack_248 - iVar60);
          if (uVar28 <= uVar63) {
            uVar63 = uVar28;
          }
          uVar28 = (long)(int)(auStack_270[5] - iVar9) * (long)(int)(auStack_270[5] - iVar9) +
                   (long)(int)(auStack_270[3] - iVar8) * (long)(int)(auStack_270[3] - iVar8) * 4 +
                   (long)(int)(auStack_270[4] - iVar60) * (long)(int)(auStack_270[4] - iVar60);
          if (uVar63 <= uVar28) {
            uVar28 = uVar63;
          }
          uVar63 = (long)(int)(auStack_270[2] - iVar9) * (long)(int)(auStack_270[2] - iVar9) +
                   (long)(int)(auStack_270[0] - iVar8) * (long)(int)(auStack_270[0] - iVar8) * 4 +
                   (long)(int)(auStack_270[1] - iVar60) * (long)(int)(auStack_270[1] - iVar60);
          if (uVar63 < uVar28) {
            uVar28 = uVar63;
          }
          uVar63 = (long)(iStack_250 - iVar71) * (long)(iStack_250 - iVar71) +
                   (long)(int)(auStack_270[6] - iVar67) * (long)(int)(auStack_270[6] - iVar67) * 4 +
                   (long)(iStack_254 - iVar57) * (long)(iStack_254 - iVar57);
          uVar44 = (long)(iStack_244 - iVar71) * (long)(iStack_244 - iVar71) +
                   (long)(iStack_24c - iVar67) * (long)(iStack_24c - iVar67) * 4 +
                   (long)(iStack_248 - iVar57) * (long)(iStack_248 - iVar57);
          if (uVar44 < uVar63) {
            uVar63 = uVar44;
          }
          uVar44 = (long)(int)(auStack_270[5] - iVar71) * (long)(int)(auStack_270[5] - iVar71) +
                   (long)(int)(auStack_270[3] - iVar67) * (long)(int)(auStack_270[3] - iVar67) * 4 +
                   (long)(int)(auStack_270[4] - iVar57) * (long)(int)(auStack_270[4] - iVar57);
          if (uVar44 < uVar63) {
            uVar63 = uVar44;
          }
          uVar44 = (long)(int)(auStack_270[2] - iVar71) * (long)(int)(auStack_270[2] - iVar71) +
                   (long)(int)(auStack_270[0] - iVar67) * (long)(int)(auStack_270[0] - iVar67) * 4 +
                   (long)(int)(auStack_270[1] - iVar57) * (long)(int)(auStack_270[1] - iVar57);
          if (uVar44 < uVar63) {
            uVar63 = uVar44;
          }
          uVar45 = (long)(iStack_250 - iVar11) * (long)(iStack_250 - iVar11) +
                   (long)(int)(auStack_270[6] - iVar10) * (long)(int)(auStack_270[6] - iVar10) * 4 +
                   (long)(iStack_254 - iVar12) * (long)(iStack_254 - iVar12);
          uVar44 = (long)(iStack_244 - iVar11) * (long)(iStack_244 - iVar11) +
                   (long)(iStack_24c - iVar10) * (long)(iStack_24c - iVar10) * 4 +
                   (long)(iStack_248 - iVar12) * (long)(iStack_248 - iVar12);
          if (uVar45 <= uVar44) {
            uVar44 = uVar45;
          }
          uVar45 = (long)(int)(auStack_270[5] - iVar11) * (long)(int)(auStack_270[5] - iVar11) +
                   (long)(int)(auStack_270[3] - iVar10) * (long)(int)(auStack_270[3] - iVar10) * 4 +
                   (long)(int)(auStack_270[4] - iVar12) * (long)(int)(auStack_270[4] - iVar12);
          if (uVar44 <= uVar45) {
            uVar45 = uVar44;
          }
          uVar44 = (long)(int)(auStack_270[2] - iVar11) * (long)(int)(auStack_270[2] - iVar11) +
                   (long)(int)(auStack_270[0] - iVar10) * (long)(int)(auStack_270[0] - iVar10) * 4 +
                   (long)(int)(auStack_270[1] - iVar12) * (long)(int)(auStack_270[1] - iVar12);
          if (uVar44 < uVar45) {
            uVar45 = uVar44;
          }
          uVar33 = (long)(iStack_254 - iVar14) * (long)(iStack_254 - iVar14) +
                   (long)(iStack_250 - iVar15) * (long)(iStack_250 - iVar15) +
                   (long)(int)(auStack_270[6] - iVar13) * (long)(int)(auStack_270[6] - iVar13) * 4;
          uVar44 = (long)(iStack_244 - iVar15) * (long)(iStack_244 - iVar15) +
                   (long)(iStack_24c - iVar13) * (long)(iStack_24c - iVar13) * 4 +
                   (long)(iStack_248 - iVar14) * (long)(iStack_248 - iVar14);
          if (uVar33 <= uVar44) {
            uVar44 = uVar33;
          }
          uVar33 = (long)(int)(auStack_270[5] - iVar15) * (long)(int)(auStack_270[5] - iVar15) +
                   (long)(int)(auStack_270[3] - iVar13) * (long)(int)(auStack_270[3] - iVar13) * 4 +
                   (long)(int)(auStack_270[4] - iVar14) * (long)(int)(auStack_270[4] - iVar14);
          if (uVar44 <= uVar33) {
            uVar33 = uVar44;
          }
          uVar44 = (long)(int)(auStack_270[2] - iVar15) * (long)(int)(auStack_270[2] - iVar15) +
                   (long)(int)(auStack_270[0] - iVar13) * (long)(int)(auStack_270[0] - iVar13) * 4 +
                   (long)(int)(auStack_270[1] - iVar14) * (long)(int)(auStack_270[1] - iVar14);
          if (uVar44 < uVar33) {
            uVar33 = uVar44;
          }
          uStack_558 = uStack_558 + uVar45 + uVar63 + uVar28 + uVar33;
          if (uStack_430 <= uStack_558) goto LAB_00103b66;
          pcVar43 = pcVar43 + 0x30;
          bVar73 = uVar72 == 0;
          uVar72 = uStack_41c;
        } while (bVar73);
      }
      *(int *)(acStack_2b0 + lStack_3e8 * 4) = iVar65;
      uStack_430 = uStack_558;
LAB_00103b66:
      uVar20 = uVar20 & 0xff;
      iVar65 = iVar65 + 1;
    } while (iStack_408 != iVar65);
    piStack_428 = piStack_428 + 6;
    pcStack_3e0 = pcStack_3e0 + 0x60;
    bVar73 = lStack_3e8 == 0;
    lStack_3e8 = lVar34;
  } while (bVar73);
  uVar20 = 0;
  lVar64 = 0;
  uStack_590 = 0;
  bVar18 = bVar36 & 3 | acStack_2b0[0] << 5 | acStack_2b0[4] * '\x04';
  uStack_2e8._0_4_ = CONCAT13(bVar18,(undefined3)uStack_2e8);
  while( true ) {
    basisu::etc_block::get_block_colors((etc_block *)&uStack_2e8,pcStack_3b0,uVar20);
    pcVar43 = pcStack_418;
    pcVar62 = pcStack_3b0;
    do {
      cVar6 = *pcVar62;
      pcVar52 = pcVar43 + 0xc;
      cVar7 = pcVar62[2];
      iVar65 = (uint)(byte)pcVar62[1] * 0xb7 + (uint)(byte)cVar6 * 0x36 + (uint)(byte)cVar7 * 0x13;
      *(int *)pcVar43 = iVar65;
      *(uint *)(pcVar43 + 4) = (uint)(byte)cVar7 * 0x100 - iVar65;
      *(uint *)(pcVar43 + 8) = (uint)(byte)cVar6 * 0x100 - iVar65;
      pcVar43 = pcVar52;
      pcVar62 = pcVar62 + 4;
    } while (acStack_240 != pcVar52);
    if (uStack_41c == 0) {
      lVar34 = 0;
      do {
        uStack_550 = 0;
        lVar46 = lVar64 + lVar34;
        while( true ) {
          iVar65 = *(int *)(acStack_180 + lVar46);
          iVar67 = *(int *)((long)aiStack_17c + lVar46);
          iVar71 = *(int *)((long)aiStack_17c + lVar46 + 4);
          uVar63 = ((long)(iStack_244 - iVar71) * (long)(iStack_244 - iVar71) +
                    (long)(iStack_24c - iVar65) * (long)(iStack_24c - iVar65) * 4 +
                   (long)(iStack_248 - iVar67) * (long)(iStack_248 - iVar67)) * 4 + 3;
          uVar28 = ((long)(iStack_250 - iVar71) * (long)(iStack_250 - iVar71) +
                    (long)(int)(auStack_270[6] - iVar65) * (long)(int)(auStack_270[6] - iVar65) * 4
                   + (long)(iStack_254 - iVar67) * (long)(iStack_254 - iVar67)) * 4 + 2;
          if (uVar63 <= uVar28) {
            uVar28 = uVar63;
          }
          uVar63 = ((long)(int)(auStack_270[2] - iVar71) * (long)(int)(auStack_270[2] - iVar71) +
                    (long)(int)(auStack_270[0] - iVar65) * (long)(int)(auStack_270[0] - iVar65) * 4
                   + (long)(int)(auStack_270[1] - iVar67) * (long)(int)(auStack_270[1] - iVar67)) *
                   4;
          if (uVar28 <= uVar63) {
            uVar63 = uVar28;
          }
          uVar28 = ((long)(int)(auStack_270[5] - iVar71) * (long)(int)(auStack_270[5] - iVar71) +
                    (long)(int)(auStack_270[3] - iVar65) * (long)(int)(auStack_270[3] - iVar65) * 4
                   + (long)(int)(auStack_270[4] - iVar67) * (long)(int)(auStack_270[4] - iVar67)) *
                   4 + 1;
          if (uVar28 < uVar63) {
            uVar63 = uVar28;
          }
          uVar63 = (ulong)((uint)uVar63 & 3);
          lVar54 = (long)(*(int *)(acStack_240 + lVar46) - *(int *)(pcStack_418 + uVar63 * 0xc));
          lVar53 = (long)(int)(*(int *)((long)aiStack_23c + lVar46 + 4) -
                              auStack_270[uVar63 * 3 + 2]);
          lVar47 = (long)(int)(*(int *)((long)aiStack_23c + lVar46) - auStack_270[uVar63 * 3 + 1]);
          lVar46 = lVar46 + 0xc;
          uStack_590 = uStack_590 + lVar53 * lVar53 + lVar54 * lVar54 * 4 + lVar47 * lVar47;
          if ((int)uStack_550 != 0) break;
          uStack_550 = 1;
        }
        uVar63 = uStack_550;
      } while ((uStack_590 < uStack_3a8) && (lVar34 = lVar34 + 0x30, lVar34 != 0xc0));
    }
    else {
      uVar72 = 2;
      uVar28 = lVar64 * 4;
      do {
        uStack_550 = uVar28 + 0x30;
        do {
          iVar65 = *(int *)(acStack_180 + uVar28);
          iVar67 = *(int *)((long)aiStack_17c + uVar28);
          iVar71 = *(int *)((long)aiStack_17c + uVar28 + 4);
          uVar63 = ((long)(iStack_244 - iVar71) * (long)(iStack_244 - iVar71) +
                    (long)(iStack_24c - iVar65) * (long)(iStack_24c - iVar65) * 4 +
                   (long)(iStack_248 - iVar67) * (long)(iStack_248 - iVar67)) * 4 + 3;
          uVar44 = ((long)(iStack_250 - iVar71) * (long)(iStack_250 - iVar71) +
                    (long)(int)(auStack_270[6] - iVar65) * (long)(int)(auStack_270[6] - iVar65) * 4
                   + (long)(iStack_254 - iVar67) * (long)(iStack_254 - iVar67)) * 4 + 2;
          if (uVar63 <= uVar44) {
            uVar44 = uVar63;
          }
          uVar63 = ((long)(int)(auStack_270[2] - iVar71) * (long)(int)(auStack_270[2] - iVar71) +
                    (long)(int)(auStack_270[0] - iVar65) * (long)(int)(auStack_270[0] - iVar65) * 4
                   + (long)(int)(auStack_270[1] - iVar67) * (long)(int)(auStack_270[1] - iVar67)) *
                   4;
          if (uVar44 <= uVar63) {
            uVar63 = uVar44;
          }
          uVar44 = ((long)(int)(auStack_270[5] - iVar71) * (long)(int)(auStack_270[5] - iVar71) +
                    (long)(int)(auStack_270[3] - iVar65) * (long)(int)(auStack_270[3] - iVar65) * 4
                   + (long)(int)(auStack_270[4] - iVar67) * (long)(int)(auStack_270[4] - iVar67)) *
                   4 + 1;
          if (uVar44 < uVar63) {
            uVar63 = uVar44;
          }
          uVar63 = (ulong)((uint)uVar63 & 3);
          lVar53 = (long)(*(int *)(acStack_240 + uVar28) - *(int *)(pcStack_418 + uVar63 * 0xc));
          lVar34 = (long)(int)(*(int *)((long)aiStack_23c + uVar28 + 4) -
                              auStack_270[uVar63 * 3 + 2]);
          lVar46 = (long)(int)(*(int *)((long)aiStack_23c + uVar28) - auStack_270[uVar63 * 3 + 1]);
          uVar28 = uVar28 + 0xc;
          uVar63 = lVar46 * lVar46;
          uStack_590 = uStack_590 + lVar34 * lVar34 + lVar53 * lVar53 * 4 + uVar63;
        } while (uStack_550 != uVar28);
      } while ((uStack_590 < uStack_3a8) &&
              (bVar73 = uVar72 != 1, uVar72 = uStack_41c, uVar28 = uStack_550, bVar73));
    }
    lVar64 = lVar64 + 0x18;
    if (uVar20 != 0) break;
    uVar20 = 1;
  }
  if (uStack_590 < uStack_3a8) {
    uStack_3a8 = uStack_590;
    *(ulong *)peVar58 = uStack_2e8;
    *puVar51 = uStack_364;
  }
  uStack_398 = uStack_398 + 1;
  if (uVar42 == uStack_398) goto code_r0x001042b9;
  goto LAB_00103033;
code_r0x001042b9:
  iVar61 = iVar61 + 1;
  uStack_328 = 0xf;
  if (iVar21 == iVar61) goto code_r0x001042ef;
  goto LAB_00102dc5;
code_r0x001042ef:
  bVar73 = uStack_41c == 0;
  lVar32 = lVar32 + 2;
  uStack_41c = uVar20;
  if (uVar19 <= ((int)((uint)bVar73 << 0x1f) >> 0x1f) + 2U) goto LAB_001046b8;
  goto LAB_00102d73;
LAB_001046b8:
  if (lStack_98 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar75._8_8_ = 0;
    auVar75._0_8_ = uVar63;
    return auVar75 << 0x40;
  }
LAB_00104d94:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::compute_etc1_hints(basisu::etc_block&, unsigned int&, basisu::uastc_encode_results
   const&, basisu::color_rgba const (*) [4], basisu::color_rgba const (*) [4], int, unsigned int) */

void basisu::compute_etc1_hints
               (etc_block *param_1,uint *param_2,uastc_encode_results *param_3,color_rgba *param_4,
               color_rgba *param_5,int param_6,uint param_7)

{
  char cVar1;
  color_rgba cVar2;
  color_rgba cVar3;
  color_rgba cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  sbyte sVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  byte bVar27;
  ushort uVar28;
  uint uVar29;
  uint uVar30;
  color_rgba *pcVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  color_rgba *pcVar36;
  color32 *pcVar37;
  color_rgba *pcVar38;
  long lVar39;
  long lVar40;
  uint uVar41;
  int iVar42;
  code *pcVar43;
  int iVar44;
  uint uVar45;
  int iVar46;
  color_rgba *pcVar47;
  ulong uVar48;
  long lVar49;
  int iVar50;
  uint uVar51;
  int iVar52;
  color_rgba *pcVar53;
  code *pcVar54;
  int *piVar55;
  int iVar56;
  uint uVar57;
  long in_FS_OFFSET;
  bool bVar58;
  ulong local_538;
  ushort local_528;
  ulong local_500;
  long local_4f8;
  ulong local_3d8;
  int *local_3d0;
  uint local_3c4;
  color_rgba *local_3c0;
  int local_3b0;
  long local_390;
  color_rgba *local_388;
  color_rgba *local_358;
  ulong local_350;
  ulong local_340;
  color_rgba *local_338;
  uint local_30c;
  uint local_2d0;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  uint local_270 [6];
  char local_258 [12];
  int local_24c [3];
  uint local_240;
  uint local_23c;
  int local_238;
  uint local_234 [3];
  int local_228 [4];
  uint local_218 [7];
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  color_rgba local_1e8 [4];
  int local_1e4 [47];
  color_rgba local_128 [4];
  int local_124 [47];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_2 = 0;
  if (*(uint *)param_3 == 8) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      basisu::pack_etc1_block_solid_color(param_1,(uchar *)(param_3 + 0x70));
      return;
    }
    goto LAB_00104d94;
  }
  cVar1 = *(char *)((long)&basist::g_uastc_mode_has_etc1_bias + (ulong)*(uint *)param_3);
  local_68 = __LC13;
  uStack_60 = _UNK_0010eac8;
  local_58 = __LC14;
  uStack_50 = _UNK_0010ead8;
  if (cVar1 == '\0') {
    bVar13 = false;
    uVar24 = 1;
  }
  else {
    uVar45 = param_7 & 0x40;
    uVar18 = param_7 & 0x80;
    if (param_6 == 2) {
      bVar13 = true;
      if (uVar18 == 0) {
        uVar24 = (ulong)((-(uint)(uVar45 == 0) & 10) + 10);
      }
      else {
LAB_00102ff4:
        bVar13 = true;
        uVar24 = 1;
      }
    }
    else if (param_6 < 3) {
      if (param_6 == 0) {
        bVar13 = true;
        uVar24 = (ulong)(2 - ((param_7 & 0xc0) != 0));
      }
      else {
        bVar13 = true;
        if (uVar18 != 0) goto LAB_00102ff4;
        uVar24 = (ulong)((-(uint)(uVar45 == 0) & 2) + 3);
      }
    }
    else {
      bVar13 = false;
      uVar24 = 0x20;
      if (param_6 == 3) {
        bVar13 = true;
        if (uVar18 != 0) goto LAB_00102ff4;
        uVar24 = (ulong)((-(uint)(uVar45 == 0) & 0x10) + 0x10);
      }
    }
  }
  local_290 = 0;
  *(undefined8 *)param_1 = 0;
  pcVar31 = local_1e8;
  pcVar38 = param_5;
  pcVar47 = local_128;
  do {
    lVar49 = 0;
    pcVar36 = pcVar31;
    pcVar53 = pcVar47;
    do {
      cVar2 = param_4[lVar49];
      cVar3 = param_4[lVar49 + 2];
      iVar15 = (uint)(byte)param_4[lVar49 + 1] * 0xb7 + (uint)(byte)cVar2 * 0x36 +
               (uint)(byte)cVar3 * 0x13;
      *(int *)pcVar36 = iVar15;
      cVar4 = pcVar38[lVar49 + 1];
      *(uint *)(pcVar36 + 8) = (uint)(byte)cVar2 * 0x100 - iVar15;
      cVar2 = pcVar38[lVar49];
      *(uint *)(pcVar36 + 4) = (uint)(byte)cVar3 * 0x100 - iVar15;
      cVar3 = pcVar38[lVar49 + 2];
      lVar49 = lVar49 + 4;
      iVar15 = (uint)(byte)cVar4 * 0xb7 + (uint)(byte)cVar2 * 0x36 + (uint)(byte)cVar3 * 0x13;
      *(int *)pcVar53 = iVar15;
      *(uint *)(pcVar53 + 4) = (uint)(byte)cVar3 * 0x100 - iVar15;
      *(uint *)(pcVar53 + 8) = (uint)(byte)cVar2 * 0x100 - iVar15;
      pcVar36 = pcVar36 + 0xc;
      pcVar53 = pcVar53 + 0xc;
    } while (lVar49 != 0x10);
    pcVar31 = pcVar31 + 0x30;
    pcVar47 = pcVar47 + 0x30;
    param_4 = param_4 + 0x10;
    pcVar38 = pcVar38 + 0x10;
  } while (pcVar31 != local_128);
  if ((param_7 & 0x100) == 0) {
    if (1 < param_6) {
      iVar15 = 2;
      uVar45 = 2;
      if ((param_7 & 0xc0) == 0) goto LAB_00102c21;
    }
    pcVar31 = (color_rgba *)local_218;
    pcVar38 = param_5;
    pcVar47 = pcVar31;
    do {
      pcVar36 = pcVar47 + 0x10;
      cVar2 = pcVar38[0x18];
      *(uint *)pcVar47 =
           (uint)(byte)*pcVar38 + (uint)(byte)pcVar38[0x10] + (uint)(byte)pcVar38[4] +
           (uint)(byte)pcVar38[0x14];
      cVar3 = pcVar38[0x30];
      *(uint *)(pcVar47 + 8) =
           (uint)(byte)pcVar38[8] + (uint)(byte)cVar2 + (uint)(byte)pcVar38[0xc] +
           (uint)(byte)pcVar38[0x1c];
      cVar2 = pcVar38[0x38];
      *(uint *)(pcVar47 + 4) =
           (uint)(byte)pcVar38[0x20] + (uint)(byte)cVar3 + (uint)(byte)pcVar38[0x24] +
           (uint)(byte)pcVar38[0x34];
      *(uint *)(pcVar47 + 0xc) =
           (uint)(byte)pcVar38[0x28] + (uint)(byte)cVar2 + (uint)(byte)pcVar38[0x2c] +
           (uint)(byte)pcVar38[0x3c];
      pcVar38 = pcVar38 + 1;
      pcVar47 = pcVar36;
    } while (pcVar36 != local_1e8);
    lVar49 = 0;
    do {
      iVar46 = *(int *)pcVar31;
      iVar50 = *(int *)(pcVar31 + 8);
      iVar52 = *(int *)(pcVar31 + 4);
      iVar15 = iVar46 + iVar50;
      iVar56 = iVar15 + 4;
      iVar15 = iVar15 + 0xb;
      if (-1 < iVar56) {
        iVar15 = iVar56;
      }
      iVar42 = *(int *)(pcVar31 + 0xc);
      iVar56 = iVar52 + iVar42;
      *(int *)((long)local_24c + lVar49) = iVar15 >> 3;
      iVar44 = iVar56 + 4;
      iVar15 = iVar56 + 0xb;
      if (-1 < iVar44) {
        iVar15 = iVar44;
      }
      iVar46 = iVar46 + iVar52;
      *(int *)((long)&local_240 + lVar49) = iVar15 >> 3;
      iVar15 = iVar46 + 4;
      if (iVar15 < 0) {
        iVar15 = iVar46 + 0xb;
      }
      iVar50 = iVar50 + iVar42;
      *(int *)((long)local_234 + lVar49) = iVar15 >> 3;
      iVar15 = iVar50 + 4;
      if (iVar15 < 0) {
        iVar15 = iVar50 + 0xb;
      }
      pcVar31 = pcVar31 + 0x10;
      *(int *)((long)local_228 + lVar49) = iVar15 >> 3;
      lVar49 = lVar49 + 4;
    } while (lVar49 != 0xc);
    iVar46 = 0;
    iVar56 = 0;
    iVar50 = 0;
    iVar52 = 0;
    pcVar31 = param_5 + 0x20;
    lVar49 = 0;
    do {
      pcVar38 = pcVar31 + -0x20;
      pcVar47 = param_5 + lVar49 * 0x10;
      do {
        iVar15 = (int)(((uint)(byte)*pcVar38 - local_24c[0]) +
                       ((uint)(byte)pcVar38[1] - local_24c[1]) + 1 +
                      ((uint)(byte)pcVar38[2] - local_24c[2])) / 3;
        uVar45 = local_24c[0] + iVar15;
        bVar14 = (byte)uVar45;
        if (0xff < uVar45) {
          bVar14 = ~(byte)((int)uVar45 >> 0x1f);
        }
        uVar45 = local_24c[1] + iVar15;
        if (0xff < uVar45) {
          uVar45 = ~((int)uVar45 >> 0x1f);
        }
        uVar57 = iVar15 + local_24c[2];
        uVar18 = ~((int)uVar57 >> 0x1f);
        if (uVar57 < 0x100) {
          uVar18 = uVar57;
        }
        iVar42 = (uint)(byte)*pcVar38 - (uint)bVar14;
        iVar15 = (uint)(byte)pcVar38[1] - (uVar45 & 0xff);
        iVar44 = (uint)(byte)pcVar38[2] - (uVar18 & 0xff);
        iVar52 = iVar52 + iVar42 * iVar42 + iVar15 * iVar15 + iVar44 * iVar44;
        iVar15 = (int)(((byte)pcVar38[0x20] - local_240) + ((byte)pcVar38[0x21] - local_23c) + 1 +
                      ((uint)(byte)pcVar38[0x22] - local_238)) / 3;
        uVar45 = local_240 + iVar15;
        bVar14 = (byte)uVar45;
        if (0xff < uVar45) {
          bVar14 = ~(byte)((int)uVar45 >> 0x1f);
        }
        uVar45 = local_23c + iVar15;
        if (0xff < uVar45) {
          uVar45 = ~((int)uVar45 >> 0x1f);
        }
        uVar57 = iVar15 + local_238;
        uVar18 = ~((int)uVar57 >> 0x1f);
        if (uVar57 < 0x100) {
          uVar18 = uVar57;
        }
        iVar42 = (uint)(byte)pcVar38[0x20] - (uint)bVar14;
        iVar15 = (uint)(byte)pcVar38[0x21] - (uVar45 & 0xff);
        iVar44 = (uint)(byte)pcVar38[0x22] - (uVar18 & 0xff);
        iVar50 = iVar50 + iVar42 * iVar42 + iVar15 * iVar15 + iVar44 * iVar44;
        iVar15 = (int)(((byte)*pcVar47 - local_234[0]) + ((byte)pcVar47[1] - local_234[1]) + 1 +
                      ((byte)pcVar47[2] - local_234[2])) / 3;
        uVar45 = local_234[0] + iVar15;
        bVar14 = (byte)uVar45;
        if (0xff < uVar45) {
          bVar14 = ~(byte)((int)uVar45 >> 0x1f);
        }
        uVar45 = local_234[1] + iVar15;
        if (0xff < uVar45) {
          uVar45 = ~((int)uVar45 >> 0x1f);
        }
        uVar57 = iVar15 + local_234[2];
        uVar18 = ~((int)uVar57 >> 0x1f);
        if (uVar57 < 0x100) {
          uVar18 = uVar57;
        }
        iVar42 = (uint)(byte)*pcVar47 - (uint)bVar14;
        iVar15 = (uint)(byte)pcVar47[1] - (uVar45 & 0xff);
        iVar44 = (uint)(byte)pcVar47[2] - (uVar18 & 0xff);
        pcVar36 = pcVar47 + 9;
        iVar56 = iVar56 + iVar42 * iVar42 + iVar15 * iVar15 + iVar44 * iVar44;
        pcVar53 = pcVar47 + 10;
        iVar15 = (int)(((uint)(byte)pcVar47[8] - local_228[0]) +
                       ((uint)(byte)*pcVar36 - local_228[1]) + 1 +
                      ((uint)(byte)*pcVar53 - local_228[2])) / 3;
        uVar45 = local_228[0] + iVar15;
        bVar14 = (byte)uVar45;
        if (0xff < uVar45) {
          bVar14 = ~(byte)((int)uVar45 >> 0x1f);
        }
        uVar45 = local_228[1] + iVar15;
        if (0xff < uVar45) {
          uVar45 = ~((int)uVar45 >> 0x1f);
        }
        uVar57 = iVar15 + local_228[2];
        uVar18 = ~((int)uVar57 >> 0x1f);
        if (uVar57 < 0x100) {
          uVar18 = uVar57;
        }
        iVar42 = (uint)(byte)pcVar47[8] - (uint)bVar14;
        pcVar38 = pcVar38 + 0x10;
        pcVar47 = pcVar47 + 4;
        iVar15 = (uint)(byte)*pcVar36 - (uVar45 & 0xff);
        iVar44 = (uint)(byte)*pcVar53 - (uVar18 & 0xff);
        iVar46 = iVar46 + iVar42 * iVar42 + iVar15 * iVar15 + iVar44 * iVar44;
      } while (pcVar31 != pcVar38);
      pcVar31 = pcVar31 + 4;
      lVar49 = lVar49 + 1;
    } while (lVar49 != 4);
    iVar15 = 2;
    bVar58 = iVar50 + iVar52 < iVar46 + iVar56;
    local_3c4 = (uint)bVar58;
    uVar45 = bVar58 + 1;
  }
  else {
    iVar15 = 1;
    uVar45 = 1;
LAB_00102c21:
    local_3c4 = 0;
  }
  local_338 = (color_rgba *)&local_240;
  local_358 = (color_rgba *)local_228;
  local_3c0 = (color_rgba *)local_218;
  bVar14 = 0;
  lVar49 = (ulong)local_3c4 * 2;
  local_350 = 0xffffffffffffffff;
LAB_00102d73:
  local_2d0 = 0x1f;
  iVar46 = 0;
  bVar14 = bVar14 & 0xfe | (byte)local_3c4;
LAB_00102dc5:
  local_270[0] = 0;
  local_270[1] = 0;
  local_270[2] = 0;
  local_270[3] = 0;
  local_270[4] = 0;
  local_270[5] = 0;
  bVar14 = ((byte)iVar46 ^ 1) * '\x02' | bVar14 & 0xfd;
  lVar32 = 0;
  local_290._0_4_ = CONCAT13(bVar14,(undefined3)local_290);
  local_288 = _LC12;
  local_280 = _LC12;
  local_278 = _LC12;
  pcVar37 = (color32 *)local_24c;
  pcVar54 = basisu::etc_block::pack_color4 + lVar49 * 0x10;
  while( true ) {
    pcVar43 = pcVar54 + -0x10;
    iVar50 = 0;
    iVar52 = 0;
    iVar56 = 0;
    uVar18 = *(uint *)((long)&local_288 + lVar32);
    uVar57 = *(uint *)((long)&local_280 + lVar32);
    uVar51 = *(uint *)((long)&local_278 + lVar32);
    uVar23 = *(uint *)((long)local_270 + lVar32);
    uVar30 = *(uint *)((long)local_270 + lVar32 + 8);
    uVar41 = *(uint *)((long)local_270 + lVar32 + 0x10);
    do {
      pcVar31 = param_5 + (ulong)(byte)pcVar43[1] * 0x10 + (ulong)(byte)*pcVar43 * 4;
      cVar2 = *pcVar31;
      cVar3 = pcVar31[1];
      cVar4 = pcVar31[2];
      iVar56 = iVar56 + (uint)(byte)cVar2;
      iVar52 = iVar52 + (uint)(byte)cVar3;
      iVar50 = iVar50 + (uint)(byte)cVar4;
      uVar22 = (uint)(byte)cVar2;
      if ((byte)cVar2 <= uVar18 && uVar18 != uVar22) {
        uVar18 = uVar22;
      }
      uVar29 = (uint)(byte)cVar3;
      if ((byte)cVar3 <= uVar57 && uVar57 != uVar29) {
        uVar57 = uVar29;
      }
      uVar16 = (uint)(byte)cVar4;
      if ((byte)cVar4 <= uVar51 && uVar51 != uVar16) {
        uVar51 = uVar16;
      }
      if (uVar23 < uVar22) {
        uVar23 = uVar22;
      }
      if (uVar30 < uVar29) {
        uVar30 = uVar29;
      }
      if (uVar41 < uVar16) {
        uVar41 = uVar16;
      }
      pcVar43 = pcVar43 + 2;
    } while (pcVar54 != pcVar43);
    pcVar54 = pcVar54 + 0x10;
    *(uint *)((long)&local_288 + lVar32) = uVar18;
    pcVar37[3] = (color32)0x0;
    *(uint *)((long)&local_280 + lVar32) = uVar57;
    *(uint *)((long)&local_278 + lVar32) = uVar51;
    *(uint *)((long)local_270 + lVar32) = uVar23;
    *(uint *)((long)local_270 + lVar32 + 8) = uVar30;
    *(uint *)((long)local_270 + lVar32 + 0x10) = uVar41;
    *pcVar37 = SUB81((ulong)(iVar56 * local_2d0 + 0x3fc) / 0x7f8,0);
    pcVar37[1] = SUB41((iVar52 * local_2d0 + 0x3fc) / 0x7f8,0);
    pcVar37[2] = SUB41((iVar50 * local_2d0 + 0x3fc) / 0x7f8,0);
    if (lVar32 == 4) break;
    lVar32 = 4;
    pcVar37 = pcVar37 + 4;
  }
  local_340 = 0;
LAB_00103033:
  if (bVar13) {
    local_30c = (uint)*(byte *)((long)&local_68 + local_340);
  }
  else {
    local_30c = (uint)local_340;
  }
  lVar32 = 0;
  pcVar37 = (color32 *)local_24c;
  if (cVar1 != '\0') goto LAB_0010308b;
  do {
    uVar17 = *(undefined4 *)pcVar37;
    while( true ) {
      pcVar37 = pcVar37 + 4;
      *(undefined4 *)(local_338 + lVar32 * 4) = uVar17;
      if (lVar32 != 0) {
        bVar27 = bVar14 & 0xfd;
        if (iVar46 == 0) {
          bVar27 = bVar27 | 2;
          local_290 = CONCAT44(local_290._4_4_,CONCAT13(bVar14,(undefined3)local_290)) &
                      0xfffffffffdffffff | 0x2000000;
          iVar52 = basisu::etc_block::pack_color5(local_338,false,0x7f);
          iVar50 = (local_23c >> 0x10 & 0xff) - (local_240 >> 0x10 & 0xff);
          if (3 < iVar50) {
            iVar50 = 3;
          }
          if (iVar50 < -4) {
            iVar50 = -4;
          }
          iVar56 = (local_23c >> 8 & 0xff) - (local_240 >> 8 & 0xff);
          if (3 < iVar56) {
            iVar56 = 3;
          }
          if (iVar56 < -4) {
            iVar56 = -4;
          }
          iVar42 = (local_23c & 0xff) - (local_240 & 0xff);
          if (3 < iVar42) {
            iVar42 = 3;
          }
          if (iVar42 < -4) {
            iVar42 = -4;
          }
          bVar58 = true;
          uVar18 = basisu::etc_block::pack_delta3(iVar42,iVar56,iVar50);
          uVar57 = (uint)(ushort)((ushort)iVar52 >> 10) << 3 | (ushort)((ushort)uVar18 >> 6) & 7;
          uVar51 = iVar52 << 3 | uVar18 & 7;
          uVar28 = ((ushort)iVar52 >> 5) << 3 | (ushort)uVar18 >> 3 & 7;
        }
        else {
          local_290 = CONCAT44(local_290._4_4_,CONCAT13(bVar14,(undefined3)local_290)) &
                      0xfffffffffdffffff;
          iVar50 = basisu::etc_block::pack_color4(local_338,false,0x7f);
          bVar58 = false;
          uVar18 = basisu::etc_block::pack_color4((color_rgba *)&local_23c,false,0x7f);
          uVar57 = (uint)(ushort)((ushort)iVar50 >> 8) << 4 | uVar18 >> 8 & 0xf;
          uVar51 = iVar50 << 4 | uVar18 & 0xf;
          uVar28 = (ushort)CONCAT31((int3)(uVar18 >> 8),(byte)uVar18 >> 4) | (ushort)iVar50 & 0xfff0
          ;
        }
        uVar48 = local_290;
        bVar14 = (byte)uVar28;
        local_528 = uVar28 * 4 & 0x3e0;
        local_290._3_5_ = SUB85(uVar48,3);
        local_290._0_3_ = CONCAT12((char)uVar51,CONCAT11(bVar14,(char)uVar57));
        lVar20 = 0;
        if (!bVar58) goto LAB_001032ab;
        goto LAB_001031a4;
      }
      lVar32 = 1;
      if (cVar1 == '\0') break;
LAB_0010308b:
      uVar17 = basist::apply_etc1_bias(pcVar37,local_30c,local_2d0,(uint)lVar32);
    }
  } while( true );
LAB_001031a4:
  iVar50 = (int)(uVar57 & 0xff) >> 3;
  if (lVar20 == 0) {
    basisu::etc_block::unpack_color5
              (local_3c0,(ushort)(iVar50 << 10) | local_528 | (ushort)((int)(uVar51 & 0xff) >> 3),
               true);
  }
  else {
    basisu::etc_block::unpack_color5
              (local_3c0,(ushort)(iVar50 << 10) | local_528 | (ushort)((int)(uVar51 & 0xff) >> 3),
               (ushort)((bVar14 & 7) << 3) | (ushort)((uVar57 & 7) << 6) | (ushort)uVar51 & 7,true,
               0xff);
  }
  while( true ) {
    uVar23 = local_218[0] >> 8 & 0xff;
    uVar41 = local_270[lVar20] - (local_218[0] & 0xff);
    uVar30 = local_218[0] >> 0x10 & 0xff;
    uVar18 = -uVar41;
    if (0 < (int)uVar41) {
      uVar18 = uVar41;
    }
    uVar41 = (local_218[0] & 0xff) - *(int *)((long)&local_288 + lVar20 * 4);
    if ((int)uVar41 < 1) {
      uVar41 = -uVar41;
    }
    if ((int)uVar18 < (int)uVar41) {
      uVar18 = uVar41;
    }
    uVar41 = local_270[lVar20 + 2] - uVar23;
    if ((int)uVar41 < 1) {
      uVar41 = -uVar41;
    }
    if ((int)uVar18 < (int)uVar41) {
      uVar18 = uVar41;
    }
    uVar23 = uVar23 - *(int *)((long)&local_280 + lVar20 * 4);
    if ((int)uVar23 < 1) {
      uVar23 = -uVar23;
    }
    if ((int)uVar18 < (int)uVar23) {
      uVar18 = uVar23;
    }
    uVar23 = local_270[lVar20 + 4] - uVar30;
    if ((int)uVar23 < 1) {
      uVar23 = -uVar23;
    }
    if ((int)uVar18 < (int)uVar23) {
      uVar18 = uVar23;
    }
    uVar30 = uVar30 - *(int *)((long)&local_278 + lVar20 * 4);
    if ((int)uVar30 < 1) {
      uVar30 = -uVar30;
    }
    if ((int)uVar18 < (int)uVar30) {
      uVar18 = uVar30;
    }
    local_234[lVar20] = uVar18;
    if (lVar20 != 0) {
      local_258[0] = '\0';
      local_258[1] = '\0';
      local_258[2] = '\0';
      local_258[3] = '\0';
      local_258[4] = '\0';
      local_258[5] = '\0';
      local_258[6] = '\0';
      local_258[7] = '\0';
      local_390 = 0;
      local_3d0 = (int *)&local_68;
      local_388 = local_128;
      goto LAB_00103354;
    }
    lVar20 = lVar32;
    if (bVar58) break;
LAB_001032ab:
    if (lVar20 == 0) {
      uVar28 = (ushort)((int)(uVar51 & 0xff) >> 4);
      uVar18 = (int)(uVar57 & 0xff) >> 4;
      uVar23 = (int)(uint)bVar14 >> 4;
    }
    else {
      uVar28 = (ushort)uVar51 & 0xf;
      uVar18 = uVar57 & 0xf;
      uVar23 = bVar14 & 0xf;
    }
    local_218[0] = basisu::etc_block::unpack_color4
                             ((ushort)(uVar23 << 4) | (ushort)(uVar18 << 8) | uVar28,true,0xff);
  }
  goto LAB_001031a4;
LAB_00103354:
  do {
    local_3b0 = 8;
    if ((param_6 != 4) && (local_234[local_390] < 0x34)) {
      local_3b0 = (-(uint)(local_234[local_390] < 7) & 0xfffffffe) + 4;
    }
    local_3d8 = 0xffffffffffffffff;
    iVar50 = 0;
    sVar21 = (-(local_390 == 0) & 3U) + 2;
    uVar18 = ~(7 << sVar21);
    do {
      bVar27 = bVar27 & (byte)uVar18 | (byte)(iVar50 << sVar21);
      local_290._0_4_ = CONCAT13(bVar27,(undefined3)local_290);
      etc_block::get_block_colors((etc_block *)&local_290,local_358,(uint)local_390);
      pcVar31 = local_3c0;
      pcVar38 = local_358;
      do {
        cVar2 = *pcVar38;
        pcVar47 = pcVar31 + 0xc;
        cVar3 = pcVar38[2];
        iVar52 = (uint)(byte)pcVar38[1] * 0xb7 + (uint)(byte)cVar2 * 0x36 + (uint)(byte)cVar3 * 0x13
        ;
        *(int *)pcVar31 = iVar52;
        *(uint *)(pcVar31 + 4) = (uint)(byte)cVar3 * 0x100 - iVar52;
        *(uint *)(pcVar31 + 8) = (uint)(byte)cVar2 * 0x100 - iVar52;
        pcVar31 = pcVar47;
        pcVar38 = pcVar38 + 4;
      } while (local_1e8 != pcVar47);
      if (local_3c4 == 0) {
        local_500 = 0;
        piVar55 = local_3d0 + -0x30;
        do {
          iVar52 = *piVar55;
          iVar56 = piVar55[2];
          iVar42 = piVar55[1];
          iVar44 = piVar55[4];
          iVar5 = piVar55[3];
          iVar6 = piVar55[5];
          uVar19 = (long)(local_1fc - iVar44) * (long)(local_1fc - iVar44) +
                   (long)(local_1f8 - iVar6) * (long)(local_1f8 - iVar6) +
                   (long)(int)(local_218[6] - iVar5) * (long)(int)(local_218[6] - iVar5) * 4;
          uVar48 = (long)(local_1ec - iVar6) * (long)(local_1ec - iVar6) +
                   (long)(local_1f4 - iVar5) * (long)(local_1f4 - iVar5) * 4 +
                   (long)(local_1f0 - iVar44) * (long)(local_1f0 - iVar44);
          if (uVar19 <= uVar48) {
            uVar48 = uVar19;
          }
          uVar19 = (long)(int)(local_218[5] - iVar6) * (long)(int)(local_218[5] - iVar6) +
                   (long)(int)(local_218[3] - iVar5) * (long)(int)(local_218[3] - iVar5) * 4 +
                   (long)(int)(local_218[4] - iVar44) * (long)(int)(local_218[4] - iVar44);
          if (uVar48 <= uVar19) {
            uVar19 = uVar48;
          }
          uVar48 = (long)(int)(local_218[2] - iVar6) * (long)(int)(local_218[2] - iVar6) +
                   (long)(int)(local_218[0] - iVar5) * (long)(int)(local_218[0] - iVar5) * 4 +
                   (long)(int)(local_218[1] - iVar44) * (long)(int)(local_218[1] - iVar44);
          if (uVar19 <= uVar48) {
            uVar48 = uVar19;
          }
          uVar33 = (long)(local_1fc - iVar42) * (long)(local_1fc - iVar42) +
                   (long)(local_1f8 - iVar56) * (long)(local_1f8 - iVar56) +
                   (long)(int)(local_218[6] - iVar52) * (long)(int)(local_218[6] - iVar52) * 4;
          uVar19 = (long)(local_1ec - iVar56) * (long)(local_1ec - iVar56) +
                   (long)(local_1f4 - iVar52) * (long)(local_1f4 - iVar52) * 4 +
                   (long)(local_1f0 - iVar42) * (long)(local_1f0 - iVar42);
          if (uVar33 <= uVar19) {
            uVar19 = uVar33;
          }
          uVar33 = (long)(int)(local_218[5] - iVar56) * (long)(int)(local_218[5] - iVar56) +
                   (long)(int)(local_218[3] - iVar52) * (long)(int)(local_218[3] - iVar52) * 4 +
                   (long)(int)(local_218[4] - iVar42) * (long)(int)(local_218[4] - iVar42);
          if (uVar19 <= uVar33) {
            uVar33 = uVar19;
          }
          uVar19 = (long)(int)(local_218[2] - iVar56) * (long)(int)(local_218[2] - iVar56) +
                   (long)(int)(local_218[0] - iVar52) * (long)(int)(local_218[0] - iVar52) * 4 +
                   (long)(int)(local_218[1] - iVar42) * (long)(int)(local_218[1] - iVar42);
          if (uVar19 < uVar33) {
            uVar33 = uVar19;
          }
          piVar55 = piVar55 + 0xc;
          local_500 = local_500 + uVar48 + uVar33;
        } while (local_3d0 != piVar55);
        if (local_3d8 <= local_500) break;
      }
      else {
        local_500 = 0;
        pcVar31 = local_388;
        uVar57 = 0;
        do {
          iVar52 = *(int *)pcVar31;
          iVar56 = *(int *)(pcVar31 + 8);
          iVar42 = *(int *)(pcVar31 + 4);
          iVar44 = *(int *)(pcVar31 + 0x10);
          iVar5 = *(int *)(pcVar31 + 0xc);
          iVar6 = *(int *)(pcVar31 + 0x14);
          iVar7 = *(int *)(pcVar31 + 0x18);
          iVar8 = *(int *)(pcVar31 + 0x20);
          iVar9 = *(int *)(pcVar31 + 0x1c);
          uVar19 = (long)(local_1fc - iVar44) * (long)(local_1fc - iVar44) +
                   (long)(local_1f8 - iVar6) * (long)(local_1f8 - iVar6) +
                   (long)(int)(local_218[6] - iVar5) * (long)(int)(local_218[6] - iVar5) * 4;
          iVar10 = *(int *)(pcVar31 + 0x24);
          iVar11 = *(int *)(pcVar31 + 0x28);
          iVar12 = *(int *)(pcVar31 + 0x2c);
          uVar48 = (long)(local_1ec - iVar6) * (long)(local_1ec - iVar6) +
                   (long)(local_1f4 - iVar5) * (long)(local_1f4 - iVar5) * 4 +
                   (long)(local_1f0 - iVar44) * (long)(local_1f0 - iVar44);
          if (uVar19 <= uVar48) {
            uVar48 = uVar19;
          }
          uVar19 = (long)(int)(local_218[5] - iVar6) * (long)(int)(local_218[5] - iVar6) +
                   (long)(int)(local_218[3] - iVar5) * (long)(int)(local_218[3] - iVar5) * 4 +
                   (long)(int)(local_218[4] - iVar44) * (long)(int)(local_218[4] - iVar44);
          if (uVar48 <= uVar19) {
            uVar19 = uVar48;
          }
          uVar48 = (long)(int)(local_218[2] - iVar6) * (long)(int)(local_218[2] - iVar6) +
                   (long)(int)(local_218[0] - iVar5) * (long)(int)(local_218[0] - iVar5) * 4 +
                   (long)(int)(local_218[1] - iVar44) * (long)(int)(local_218[1] - iVar44);
          if (uVar48 < uVar19) {
            uVar19 = uVar48;
          }
          uVar48 = (long)(local_1f8 - iVar56) * (long)(local_1f8 - iVar56) +
                   (long)(int)(local_218[6] - iVar52) * (long)(int)(local_218[6] - iVar52) * 4 +
                   (long)(local_1fc - iVar42) * (long)(local_1fc - iVar42);
          uVar33 = (long)(local_1ec - iVar56) * (long)(local_1ec - iVar56) +
                   (long)(local_1f4 - iVar52) * (long)(local_1f4 - iVar52) * 4 +
                   (long)(local_1f0 - iVar42) * (long)(local_1f0 - iVar42);
          if (uVar33 < uVar48) {
            uVar48 = uVar33;
          }
          uVar33 = (long)(int)(local_218[5] - iVar56) * (long)(int)(local_218[5] - iVar56) +
                   (long)(int)(local_218[3] - iVar52) * (long)(int)(local_218[3] - iVar52) * 4 +
                   (long)(int)(local_218[4] - iVar42) * (long)(int)(local_218[4] - iVar42);
          if (uVar33 < uVar48) {
            uVar48 = uVar33;
          }
          uVar33 = (long)(int)(local_218[2] - iVar56) * (long)(int)(local_218[2] - iVar56) +
                   (long)(int)(local_218[0] - iVar52) * (long)(int)(local_218[0] - iVar52) * 4 +
                   (long)(int)(local_218[1] - iVar42) * (long)(int)(local_218[1] - iVar42);
          if (uVar33 < uVar48) {
            uVar48 = uVar33;
          }
          uVar34 = (long)(local_1f8 - iVar8) * (long)(local_1f8 - iVar8) +
                   (long)(int)(local_218[6] - iVar7) * (long)(int)(local_218[6] - iVar7) * 4 +
                   (long)(local_1fc - iVar9) * (long)(local_1fc - iVar9);
          uVar33 = (long)(local_1ec - iVar8) * (long)(local_1ec - iVar8) +
                   (long)(local_1f4 - iVar7) * (long)(local_1f4 - iVar7) * 4 +
                   (long)(local_1f0 - iVar9) * (long)(local_1f0 - iVar9);
          if (uVar34 <= uVar33) {
            uVar33 = uVar34;
          }
          uVar34 = (long)(int)(local_218[5] - iVar8) * (long)(int)(local_218[5] - iVar8) +
                   (long)(int)(local_218[3] - iVar7) * (long)(int)(local_218[3] - iVar7) * 4 +
                   (long)(int)(local_218[4] - iVar9) * (long)(int)(local_218[4] - iVar9);
          if (uVar33 <= uVar34) {
            uVar34 = uVar33;
          }
          uVar33 = (long)(int)(local_218[2] - iVar8) * (long)(int)(local_218[2] - iVar8) +
                   (long)(int)(local_218[0] - iVar7) * (long)(int)(local_218[0] - iVar7) * 4 +
                   (long)(int)(local_218[1] - iVar9) * (long)(int)(local_218[1] - iVar9);
          if (uVar33 < uVar34) {
            uVar34 = uVar33;
          }
          uVar25 = (long)(local_1fc - iVar11) * (long)(local_1fc - iVar11) +
                   (long)(local_1f8 - iVar12) * (long)(local_1f8 - iVar12) +
                   (long)(int)(local_218[6] - iVar10) * (long)(int)(local_218[6] - iVar10) * 4;
          uVar33 = (long)(local_1ec - iVar12) * (long)(local_1ec - iVar12) +
                   (long)(local_1f4 - iVar10) * (long)(local_1f4 - iVar10) * 4 +
                   (long)(local_1f0 - iVar11) * (long)(local_1f0 - iVar11);
          if (uVar25 <= uVar33) {
            uVar33 = uVar25;
          }
          uVar25 = (long)(int)(local_218[5] - iVar12) * (long)(int)(local_218[5] - iVar12) +
                   (long)(int)(local_218[3] - iVar10) * (long)(int)(local_218[3] - iVar10) * 4 +
                   (long)(int)(local_218[4] - iVar11) * (long)(int)(local_218[4] - iVar11);
          if (uVar33 <= uVar25) {
            uVar25 = uVar33;
          }
          uVar33 = (long)(int)(local_218[2] - iVar12) * (long)(int)(local_218[2] - iVar12) +
                   (long)(int)(local_218[0] - iVar10) * (long)(int)(local_218[0] - iVar10) * 4 +
                   (long)(int)(local_218[1] - iVar11) * (long)(int)(local_218[1] - iVar11);
          if (uVar33 < uVar25) {
            uVar25 = uVar33;
          }
          local_500 = local_500 + uVar34 + uVar48 + uVar19 + uVar25;
          if (local_3d8 <= local_500) goto LAB_00103b66;
          pcVar31 = pcVar31 + 0x30;
          bVar58 = uVar57 == 0;
          uVar57 = local_3c4;
        } while (bVar58);
      }
      *(int *)(local_258 + local_390 * 4) = iVar50;
      local_3d8 = local_500;
LAB_00103b66:
      uVar18 = uVar18 & 0xff;
      iVar50 = iVar50 + 1;
    } while (local_3b0 != iVar50);
    local_3d0 = local_3d0 + 6;
    local_388 = local_388 + 0x60;
    bVar58 = local_390 == 0;
    local_390 = lVar20;
  } while (bVar58);
  uVar18 = 0;
  lVar32 = 0;
  local_538 = 0;
  bVar14 = bVar27 & 3 | local_258[0] << 5 | local_258[4] * '\x04';
  local_290._0_4_ = CONCAT13(bVar14,(undefined3)local_290);
  while( true ) {
    etc_block::get_block_colors((etc_block *)&local_290,local_358,uVar18);
    pcVar31 = local_3c0;
    pcVar38 = local_358;
    do {
      cVar2 = *pcVar38;
      pcVar47 = pcVar31 + 0xc;
      cVar3 = pcVar38[2];
      iVar50 = (uint)(byte)pcVar38[1] * 0xb7 + (uint)(byte)cVar2 * 0x36 + (uint)(byte)cVar3 * 0x13;
      *(int *)pcVar31 = iVar50;
      *(uint *)(pcVar31 + 4) = (uint)(byte)cVar3 * 0x100 - iVar50;
      *(uint *)(pcVar31 + 8) = (uint)(byte)cVar2 * 0x100 - iVar50;
      pcVar31 = pcVar47;
      pcVar38 = pcVar38 + 4;
    } while (local_1e8 != pcVar47);
    if (local_3c4 == 0) {
      lVar20 = 0;
      do {
        bVar58 = false;
        lVar26 = lVar32 + lVar20;
        while( true ) {
          iVar50 = *(int *)(local_128 + lVar26);
          iVar52 = *(int *)((long)local_124 + lVar26);
          iVar56 = *(int *)((long)local_124 + lVar26 + 4);
          uVar48 = ((long)(local_1ec - iVar56) * (long)(local_1ec - iVar56) +
                    (long)(local_1f4 - iVar50) * (long)(local_1f4 - iVar50) * 4 +
                   (long)(local_1f0 - iVar52) * (long)(local_1f0 - iVar52)) * 4 + 3;
          uVar19 = ((long)(local_1f8 - iVar56) * (long)(local_1f8 - iVar56) +
                    (long)(int)(local_218[6] - iVar50) * (long)(int)(local_218[6] - iVar50) * 4 +
                   (long)(local_1fc - iVar52) * (long)(local_1fc - iVar52)) * 4 + 2;
          if (uVar48 <= uVar19) {
            uVar19 = uVar48;
          }
          uVar48 = ((long)(int)(local_218[2] - iVar56) * (long)(int)(local_218[2] - iVar56) +
                    (long)(int)(local_218[0] - iVar50) * (long)(int)(local_218[0] - iVar50) * 4 +
                   (long)(int)(local_218[1] - iVar52) * (long)(int)(local_218[1] - iVar52)) * 4;
          if (uVar19 <= uVar48) {
            uVar48 = uVar19;
          }
          uVar19 = ((long)(int)(local_218[5] - iVar56) * (long)(int)(local_218[5] - iVar56) +
                    (long)(int)(local_218[3] - iVar50) * (long)(int)(local_218[3] - iVar50) * 4 +
                   (long)(int)(local_218[4] - iVar52) * (long)(int)(local_218[4] - iVar52)) * 4 + 1;
          if (uVar19 < uVar48) {
            uVar48 = uVar19;
          }
          uVar48 = (ulong)((uint)uVar48 & 3);
          lVar40 = (long)(*(int *)(local_1e8 + lVar26) - *(int *)(local_3c0 + uVar48 * 0xc));
          lVar35 = (long)(int)(*(int *)((long)local_1e4 + lVar26 + 4) - local_218[uVar48 * 3 + 2]);
          lVar39 = (long)(int)(*(int *)((long)local_1e4 + lVar26) - local_218[uVar48 * 3 + 1]);
          lVar26 = lVar26 + 0xc;
          local_538 = local_538 + lVar35 * lVar35 + lVar40 * lVar40 * 4 + lVar39 * lVar39;
          if (bVar58) break;
          bVar58 = true;
        }
      } while ((local_538 < local_350) && (lVar20 = lVar20 + 0x30, lVar20 != 0xc0));
    }
    else {
      uVar57 = 2;
      lVar20 = lVar32 * 4;
      do {
        local_4f8 = lVar20 + 0x30;
        do {
          iVar50 = *(int *)(local_128 + lVar20);
          iVar52 = *(int *)((long)local_124 + lVar20);
          iVar56 = *(int *)((long)local_124 + lVar20 + 4);
          uVar48 = ((long)(local_1ec - iVar56) * (long)(local_1ec - iVar56) +
                    (long)(local_1f4 - iVar50) * (long)(local_1f4 - iVar50) * 4 +
                   (long)(local_1f0 - iVar52) * (long)(local_1f0 - iVar52)) * 4 + 3;
          uVar19 = ((long)(local_1f8 - iVar56) * (long)(local_1f8 - iVar56) +
                    (long)(int)(local_218[6] - iVar50) * (long)(int)(local_218[6] - iVar50) * 4 +
                   (long)(local_1fc - iVar52) * (long)(local_1fc - iVar52)) * 4 + 2;
          if (uVar48 <= uVar19) {
            uVar19 = uVar48;
          }
          uVar48 = ((long)(int)(local_218[2] - iVar56) * (long)(int)(local_218[2] - iVar56) +
                    (long)(int)(local_218[0] - iVar50) * (long)(int)(local_218[0] - iVar50) * 4 +
                   (long)(int)(local_218[1] - iVar52) * (long)(int)(local_218[1] - iVar52)) * 4;
          if (uVar19 <= uVar48) {
            uVar48 = uVar19;
          }
          uVar19 = ((long)(int)(local_218[5] - iVar56) * (long)(int)(local_218[5] - iVar56) +
                    (long)(int)(local_218[3] - iVar50) * (long)(int)(local_218[3] - iVar50) * 4 +
                   (long)(int)(local_218[4] - iVar52) * (long)(int)(local_218[4] - iVar52)) * 4 + 1;
          if (uVar19 < uVar48) {
            uVar48 = uVar19;
          }
          uVar48 = (ulong)((uint)uVar48 & 3);
          lVar39 = (long)(*(int *)(local_1e8 + lVar20) - *(int *)(local_3c0 + uVar48 * 0xc));
          lVar26 = (long)(int)(*(int *)((long)local_1e4 + lVar20 + 4) - local_218[uVar48 * 3 + 2]);
          lVar35 = (long)(int)(*(int *)((long)local_1e4 + lVar20) - local_218[uVar48 * 3 + 1]);
          lVar20 = lVar20 + 0xc;
          local_538 = local_538 + lVar26 * lVar26 + lVar39 * lVar39 * 4 + lVar35 * lVar35;
        } while (local_4f8 != lVar20);
      } while ((local_538 < local_350) &&
              (bVar58 = uVar57 != 1, uVar57 = local_3c4, lVar20 = local_4f8, bVar58));
    }
    lVar32 = lVar32 + 0x18;
    if (uVar18 != 0) break;
    uVar18 = 1;
  }
  if (local_538 < local_350) {
    local_350 = local_538;
    *(ulong *)param_1 = local_290;
    *param_2 = local_30c;
  }
  local_340 = local_340 + 1;
  if (uVar24 == local_340) goto code_r0x001042b9;
  goto LAB_00103033;
code_r0x001042b9:
  iVar46 = iVar46 + 1;
  local_2d0 = 0xf;
  if (iVar15 == iVar46) goto code_r0x001042ef;
  goto LAB_00102dc5;
code_r0x001042ef:
  bVar58 = local_3c4 == 0;
  lVar49 = lVar49 + 2;
  local_3c4 = uVar18;
  if (uVar45 <= ((int)((uint)bVar58 << 0x1f) >> 0x1f) + 2U) goto LAB_001046b8;
  goto LAB_00102d73;
LAB_001046b8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104d94:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::pack_uastc(basist::uastc_block&, basisu::uastc_encode_results const&, basisu::etc_block
   const&, unsigned int, basisu::eac_a8_block const&, bool, bool) */

void basisu::pack_uastc(uastc_block *param_1,uastc_encode_results *param_2,etc_block *param_3,
                       uint param_4,eac_a8_block *param_5,bool param_6,bool param_7)

{
  uint *puVar1;
  char cVar2;
  char cVar3;
  etc_block eVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  uint uVar21;
  uint *puVar22;
  undefined2 *puVar23;
  undefined8 *puVar24;
  uint uVar25;
  undefined7 in_register_00000089;
  ulong uVar26;
  uint *puVar27;
  uint uVar28;
  uint uVar29;
  long in_FS_OFFSET;
  uint local_13c;
  bool local_130;
  uint local_128;
  uint local_124;
  undefined8 local_120;
  uint local_118 [8];
  uint local_f8 [20];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined1 local_88 [8];
  undefined8 uStack_80;
  undefined1 local_78 [16];
  byte local_68 [40];
  long local_40;
  
  uVar21 = *(uint *)param_2;
  uVar18 = (ulong)uVar21;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _local_88 = (undefined1  [16])0x0;
  cVar2 = *(char *)((long)&basist::g_uastc_mode_has_alpha + uVar18);
  local_78 = (undefined1  [16])0x0;
  uVar12 = *(uint *)((long)&basist::g_uastc_mode_huff_codes + uVar18 * 8 + 4);
  if (uVar12 == 0) {
    uVar17 = 0;
    bVar6 = 0;
  }
  else {
    stack0xffffffffffffff79 = SUB1615((undefined1  [16])0x0,1);
    local_88[0] = (char)*(uint *)(&basist::g_uastc_mode_huff_codes + uVar18);
    uVar17 = 8;
    if ((int)uVar12 < 9) {
      uVar17 = uVar12;
    }
    uVar26 = (ulong)(*(uint *)(&basist::g_uastc_mode_huff_codes + uVar18) >> ((byte)uVar17 & 0x3f));
    pbVar10 = local_88 + (uVar17 >> 3);
    for (iVar20 = uVar12 - uVar17; iVar20 != 0; iVar20 = iVar20 - iVar7) {
      uVar12 = uVar17 & 7;
      iVar7 = 8 - uVar12;
      if (iVar20 < iVar7) {
        iVar7 = iVar20;
      }
      uVar29 = uVar17 >> 3;
      uVar17 = uVar17 + iVar7;
      local_88[uVar29] = *pbVar10 | (byte)(uVar26 << (sbyte)uVar12);
      uVar26 = uVar26 >> ((byte)iVar7 & 0x3f);
      pbVar10 = local_88 + (uVar17 >> 3);
    }
    bVar6 = *pbVar10;
  }
  if (uVar21 == 8) {
    uVar21 = uVar17 & 7;
    uVar12 = uVar17 + (8 - uVar21);
    uVar26 = (ulong)((byte)param_2[0x70] >> ((byte)(8 - uVar21) & 0x3f));
    local_88[uVar17 >> 3] = bVar6 | (char)param_2[0x70] << (sbyte)uVar21;
    for (; uVar21 != 0; uVar21 = uVar21 - uVar17) {
      uVar13 = uVar12 >> 3;
      uVar29 = uVar12 & 7;
      uVar17 = 8 - uVar29;
      if ((int)uVar21 < (int)uVar17) {
        uVar17 = uVar21;
      }
      uVar25 = uVar12 >> 3;
      uVar12 = uVar12 + uVar17;
      local_88[uVar25] = (byte)(uVar26 << (sbyte)uVar29) | local_88[uVar13];
      uVar26 = uVar26 >> ((byte)uVar17 & 0x3f);
    }
    uVar26 = (ulong)(byte)param_2[0x71];
    iVar20 = 8;
    do {
      iVar7 = 8 - (uVar12 & 7);
      if (iVar20 < iVar7) {
        iVar7 = iVar20;
      }
      local_88[uVar12 >> 3] = local_88[uVar12 >> 3] | (byte)(uVar26 << (sbyte)(uVar12 & 7));
      uVar12 = uVar12 + iVar7;
      uVar26 = uVar26 >> ((byte)iVar7 & 0x3f);
      iVar20 = iVar20 - iVar7;
    } while (iVar20 != 0);
    uVar26 = (ulong)(byte)param_2[0x72];
    iVar20 = 8;
    do {
      iVar7 = 8 - (uVar12 & 7);
      if (iVar20 < iVar7) {
        iVar7 = iVar20;
      }
      local_88[uVar12 >> 3] = local_88[uVar12 >> 3] | (byte)(uVar26 << (sbyte)(uVar12 & 7));
      uVar12 = uVar12 + iVar7;
      uVar26 = uVar26 >> ((byte)iVar7 & 0x3f);
      iVar20 = iVar20 - iVar7;
    } while (iVar20 != 0);
    uVar26 = (ulong)(byte)param_2[0x73];
    do {
      iVar20 = 8 - (uVar12 & 7);
      iVar7 = (int)uVar18;
      if (iVar7 < iVar20) {
        iVar20 = iVar7;
      }
      local_88[uVar12 >> 3] = local_88[uVar12 >> 3] | (byte)(uVar26 << (sbyte)(uVar12 & 7));
      uVar12 = uVar12 + iVar20;
      uVar26 = uVar26 >> ((byte)iVar20 & 0x3f);
      uVar18 = (ulong)(uint)(iVar7 - iVar20);
    } while (iVar7 - iVar20 != 0);
    eVar4 = param_3[3];
    iVar20 = 1;
    uVar18 = (ulong)(((byte)eVar4 & 2) != 0);
    do {
      iVar7 = 8 - (uVar12 & 7);
      if (iVar20 < iVar7) {
        iVar7 = iVar20;
      }
      local_88[uVar12 >> 3] = local_88[uVar12 >> 3] | (byte)(uVar18 << (sbyte)(uVar12 & 7));
      uVar12 = uVar12 + iVar7;
      uVar18 = uVar18 >> ((byte)iVar7 & 0x3f);
      iVar20 = iVar20 - iVar7;
    } while (iVar20 != 0);
    iVar20 = 3;
    uVar18 = (ulong)((byte)eVar4 >> 5);
    do {
      iVar7 = 8 - (uVar12 & 7);
      if (iVar20 < iVar7) {
        iVar7 = iVar20;
      }
      local_88[uVar12 >> 3] = local_88[uVar12 >> 3] | (byte)(uVar18 << (sbyte)(uVar12 & 7));
      uVar12 = uVar12 + iVar7;
      uVar18 = uVar18 >> ((byte)iVar7 & 0x3f);
      iVar20 = iVar20 - iVar7;
    } while (iVar20 != 0);
    uVar18 = (ulong)*(byte *)((long)&g_etc1_to_selector_index +
                             (ulong)((uint)(byte)param_3[5] * 2 & 2 | (byte)param_3[7] & 1));
    iVar20 = 2;
    do {
      iVar7 = 8 - (uVar12 & 7);
      if (iVar20 < iVar7) {
        iVar7 = iVar20;
      }
      local_88[uVar12 >> 3] = local_88[uVar12 >> 3] | (byte)(uVar18 << (sbyte)(uVar12 & 7));
      uVar12 = uVar12 + iVar7;
      uVar18 = uVar18 >> ((byte)iVar7 & 0x3f);
      iVar20 = iVar20 - iVar7;
    } while (iVar20 != 0);
    if (((byte)eVar4 & 2) == 0) {
      basisu::etc_block::unpack_color4
                (&local_128,&local_124,(uint *)&local_120,
                 (ushort)(((int)(uint)(byte)param_3[1] >> 4) << 4) |
                 (ushort)(((int)(uint)(byte)*param_3 >> 4) << 8) |
                 (ushort)((int)(uint)(byte)param_3[2] >> 4),false);
    }
    else {
      basisu::etc_block::unpack_color5
                (&local_128,&local_124,(uint *)&local_120,
                 (ushort)(((int)(uint)(byte)param_3[1] >> 3) << 5) |
                 (ushort)(((int)(uint)(byte)*param_3 >> 3) << 10) |
                 (ushort)((int)(uint)(byte)param_3[2] >> 3),false);
    }
    uVar18 = (ulong)local_128;
    iVar20 = 5;
    do {
      iVar7 = 8 - (uVar12 & 7);
      if (iVar20 < iVar7) {
        iVar7 = iVar20;
      }
      local_88[uVar12 >> 3] = local_88[uVar12 >> 3] | (byte)(uVar18 << (sbyte)(uVar12 & 7));
      uVar12 = uVar12 + iVar7;
      uVar18 = uVar18 >> ((byte)iVar7 & 0x3f);
      iVar20 = iVar20 - iVar7;
    } while (iVar20 != 0);
    uVar18 = (ulong)local_124;
    iVar20 = 5;
    do {
      iVar7 = 8 - (uVar12 & 7);
      if (iVar20 < iVar7) {
        iVar7 = iVar20;
      }
      local_88[uVar12 >> 3] = local_88[uVar12 >> 3] | (byte)(uVar18 << (sbyte)(uVar12 & 7));
      uVar12 = uVar12 + iVar7;
      uVar18 = uVar18 >> ((byte)iVar7 & 0x3f);
      iVar20 = iVar20 - iVar7;
    } while (iVar20 != 0);
    uVar18 = (ulong)(uint)local_120;
    iVar20 = 5;
    do {
      iVar7 = 8 - (uVar12 & 7);
      if (iVar20 < iVar7) {
        iVar7 = iVar20;
      }
      local_88[uVar12 >> 3] = local_88[uVar12 >> 3] | (byte)(uVar18 << (sbyte)(uVar12 & 7));
      uVar12 = uVar12 + iVar7;
      uVar18 = uVar18 >> ((byte)iVar7 & 0x3f);
      iVar20 = iVar20 - iVar7;
    } while (iVar20 != 0);
    *(undefined1 (*) [8])param_1 = local_88;
    *(undefined8 *)(param_1 + 8) = uStack_80;
    goto LAB_0010566e;
  }
  if (*(char *)((long)&basist::g_uastc_mode_has_bc1_hint0 + uVar18) == '\0') {
    cVar3 = *(char *)((long)&basist::g_uastc_mode_has_bc1_hint1 + uVar18);
  }
  else {
    local_88[uVar17 >> 3] =
         (byte)((int)CONCAT71(in_register_00000089,param_6) << ((byte)uVar17 & 7)) | bVar6;
    cVar3 = *(char *)((long)&basist::g_uastc_mode_has_bc1_hint1 + uVar18);
    bVar6 = local_88[uVar17 + 1 >> 3];
    uVar17 = uVar17 + 1;
  }
  uVar12 = uVar17;
  if (cVar3 != '\0') {
    uVar12 = uVar17 + 1;
    local_88[uVar17 >> 3] = bVar6 | param_7 << ((byte)uVar17 & 7);
    bVar6 = local_88[uVar12 >> 3];
  }
  eVar4 = param_3[3];
  uVar17 = uVar12 + 1;
  uVar26 = (ulong)((byte)eVar4 >> 1 & 1);
  local_88[uVar12 >> 3] = bVar6 | (byte)(((byte)eVar4 & 1) << ((byte)uVar12 & 7));
  iVar20 = 1;
  do {
    iVar7 = 8 - (uVar17 & 7);
    if (iVar20 < iVar7) {
      iVar7 = iVar20;
    }
    local_88[uVar17 >> 3] = local_88[uVar17 >> 3] | (byte)(uVar26 << (sbyte)(uVar17 & 7));
    uVar17 = uVar17 + iVar7;
    uVar26 = uVar26 >> ((byte)iVar7 & 0x3f);
    iVar20 = iVar20 - iVar7;
  } while (iVar20 != 0);
  iVar20 = 3;
  uVar26 = (ulong)((int)(uint)(byte)eVar4 >> 5);
  do {
    iVar7 = 8 - (uVar17 & 7);
    if (iVar20 < iVar7) {
      iVar7 = iVar20;
    }
    local_88[uVar17 >> 3] = local_88[uVar17 >> 3] | (byte)(uVar26 << (sbyte)(uVar17 & 7));
    uVar17 = uVar17 + iVar7;
    uVar26 = uVar26 >> ((byte)iVar7 & 0x3f);
    iVar20 = iVar20 - iVar7;
  } while (iVar20 != 0);
  iVar20 = 3;
  uVar26 = (ulong)((int)(uint)(byte)eVar4 >> 2 & 7);
  do {
    iVar7 = 8 - (uVar17 & 7);
    if (iVar20 < iVar7) {
      iVar7 = iVar20;
    }
    local_88[uVar17 >> 3] = local_88[uVar17 >> 3] | (byte)(uVar26 << (sbyte)(uVar17 & 7));
    uVar17 = uVar17 + iVar7;
    uVar26 = uVar26 >> ((byte)iVar7 & 0x3f);
    iVar20 = iVar20 - iVar7;
  } while (iVar20 != 0);
  if (*(char *)((long)&basist::g_uastc_mode_has_etc1_bias + uVar18) != '\0') {
    uVar26 = (ulong)param_4;
    iVar20 = 5;
    do {
      iVar7 = 8 - (uVar17 & 7);
      if (iVar20 < iVar7) {
        iVar7 = iVar20;
      }
      local_88[uVar17 >> 3] = local_88[uVar17 >> 3] | (byte)(uVar26 << (sbyte)(uVar17 & 7));
      uVar17 = uVar17 + iVar7;
      uVar26 = uVar26 >> ((byte)iVar7 & 0x3f);
      iVar20 = iVar20 - iVar7;
    } while (iVar20 != 0);
  }
  if (cVar2 == '\0') {
    if (0x10 < uVar21) goto LAB_001057fa;
LAB_00104ff2:
    if ((1L << ((byte)uVar21 & 0x3f) & 0x10294U) == 0) {
      uVar12 = 1;
      if (uVar21 != 3) goto LAB_00105485;
      uVar26 = (ulong)*(uint *)(param_2 + 4);
      iVar20 = 4;
      do {
        iVar7 = 8 - (uVar17 & 7);
        if (iVar20 < iVar7) {
          iVar7 = iVar20;
        }
        local_88[uVar17 >> 3] = local_88[uVar17 >> 3] | (byte)(uVar26 << (sbyte)(uVar17 & 7));
        uVar17 = uVar17 + iVar7;
        uVar26 = uVar26 >> ((byte)iVar7 & 0x3f);
        iVar20 = iVar20 - iVar7;
      } while (iVar20 != 0);
      uVar12 = 3;
LAB_00105492:
      if (uVar21 == 6) goto LAB_00105072;
      local_130 = false;
      uVar29 = 0x10;
      uVar13 = 1;
      local_13c = 0x10;
    }
    else {
      uVar26 = (ulong)*(uint *)(param_2 + 4);
      iVar20 = 5;
      do {
        iVar7 = 8 - (uVar17 & 7);
        if (iVar20 < iVar7) {
          iVar7 = iVar20;
        }
        local_88[uVar17 >> 3] = local_88[uVar17 >> 3] | (byte)(uVar26 << (sbyte)(uVar17 & 7));
        uVar17 = uVar17 + iVar7;
        uVar26 = uVar26 >> ((byte)iVar7 & 0x3f);
        iVar20 = iVar20 - iVar7;
      } while (iVar20 != 0);
      uVar12 = 2;
LAB_00105485:
      if ((uVar21 - 0xb & 0xfffffffd) != 0) goto LAB_00105492;
LAB_00105072:
      uVar26 = (ulong)*(int *)(param_2 + 0x18);
      iVar20 = 2;
      do {
        iVar7 = 8 - (uVar17 & 7);
        if (iVar20 < iVar7) {
          iVar7 = iVar20;
        }
        local_88[uVar17 >> 3] = local_88[uVar17 >> 3] | (byte)(uVar26 << (sbyte)(uVar17 & 7));
        uVar17 = uVar17 + iVar7;
        uVar26 = uVar26 >> ((byte)iVar7 & 0x3f);
        iVar20 = iVar20 - iVar7;
      } while (iVar20 != 0);
      uVar29 = 0x20;
      uVar13 = 2;
      local_130 = true;
      local_13c = 0x20;
    }
  }
  else {
    iVar20 = 8;
    uVar26 = (ulong)(int)((uint)((byte)param_5[1] >> 4) << 4 | (byte)param_5[1] & 0xf);
    do {
      iVar7 = 8 - (uVar17 & 7);
      if (iVar20 < iVar7) {
        iVar7 = iVar20;
      }
      local_88[uVar17 >> 3] = local_88[uVar17 >> 3] | (byte)(uVar26 << (sbyte)(uVar17 & 7));
      uVar17 = uVar17 + iVar7;
      uVar26 = uVar26 >> ((byte)iVar7 & 0x3f);
      iVar20 = iVar20 - iVar7;
    } while (iVar20 != 0);
    if (uVar21 < 0x11) goto LAB_00104ff2;
LAB_001057fa:
    local_130 = uVar21 == 0x11;
    uVar29 = 0x20;
    if (!local_130) {
      uVar29 = 0x10;
    }
    uVar12 = 1;
    local_13c = 0x10;
    if (local_130) {
      local_13c = 0x20;
    }
    uVar13 = local_130 + 1;
  }
  uVar25 = 0;
  do {
    uVar8 = uVar25 + 8;
    *(undefined8 *)(local_68 + uVar25) = *(undefined8 *)(param_2 + (ulong)uVar25 + 0x2f);
    uVar25 = uVar8;
  } while (uVar8 < uVar29);
  local_98 = *(undefined2 *)(param_2 + 0x2d);
  local_a8 = *(undefined8 *)(param_2 + 0x1d);
  uStack_a0 = *(undefined8 *)(param_2 + 0x25);
  bVar6 = *(byte *)((long)&basist::g_uastc_mode_comps + uVar18);
  bVar5 = *(byte *)((long)&basist::g_uastc_mode_weight_bits + uVar18);
  pbVar10 = (byte *)basist::get_anchor_indices
                              (uVar12,uVar21,*(uint *)(param_2 + 4),(uchar **)&local_120);
  uVar18 = 0;
  uVar21 = bVar5 - 1;
  do {
    iVar20 = 0;
    uVar26 = 0;
    do {
      uVar29 = (uint)uVar18;
      uVar25 = (uint)bVar6;
      pbVar11 = (byte *)CONCAT44(local_120._4_4_,(uint)local_120);
      uVar19 = uVar18;
      if (((uint)local_68[pbVar10[uVar26] * uVar13 + uVar29] & 1 << ((byte)uVar21 & 0x1f)) == 0) {
LAB_001051ce:
        iVar20 = iVar20 + uVar25;
      }
      else {
        do {
          if ((uint)*pbVar11 == (uint)uVar26) {
            local_68[uVar19] = ((char)(1 << (bVar5 & 0x1f)) + -1) - local_68[uVar19];
          }
          pbVar11 = pbVar11 + 1;
          uVar19 = (ulong)((int)uVar19 + uVar13);
        } while (pbVar11 != (byte *)CONCAT44(local_120._4_4_,(uint)local_120) + 0x10);
        uVar8 = (uint)bVar6;
        if (uVar13 == 2) {
          if (bVar6 != 0) {
            puVar24 = &local_a8;
            uVar15 = 0;
            do {
              uVar28 = uVar15;
              if (uVar8 != 2) {
                uVar28 = (uint)(*(uint *)(param_2 + 0x18) == uVar15);
              }
              if (uVar28 == uVar29) {
                *(ushort *)puVar24 =
                     CONCAT11(*(undefined1 *)puVar24,*(undefined1 *)((long)puVar24 + 1));
              }
              uVar15 = uVar15 + 1;
              puVar24 = (undefined8 *)((long)puVar24 + 2);
            } while (uVar15 != uVar8);
          }
          goto LAB_001051ce;
        }
        if (uVar8 != 0) {
          uVar8 = iVar20 * 2;
          iVar20 = iVar20 + uVar25;
          puVar23 = (undefined2 *)((long)&local_a8 + (ulong)uVar8);
          uVar19 = (ulong)uVar8;
          do {
            uVar8 = (int)uVar19 + 2;
            *puVar23 = CONCAT11(*(undefined1 *)((long)&local_a8 + uVar19),
                                *(undefined1 *)((long)&local_a8 + (ulong)((int)uVar19 + 1)));
            puVar23 = puVar23 + 1;
            uVar19 = (ulong)uVar8;
          } while (uVar8 != iVar20 * 2);
        }
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar12);
    uVar18 = (ulong)(uVar29 + 1);
  } while (uVar13 != uVar29 + 1);
  lVar16 = (ulong)*(byte *)((long)&basist::g_uastc_mode_endpoint_ranges + (ulong)*(uint *)param_2) *
           0xc;
  iVar20 = *(int *)((long)&basist::g_astc_bise_range_table + lVar16);
  iVar7 = *(int *)((long)&basist::g_astc_bise_range_table + lVar16 + 4);
  iVar14 = *(int *)((long)&g_etc1_to_selector_index + lVar16);
  uVar29 = uVar25 * uVar12 * 2;
  if (uVar25 * uVar12 != 0) {
    uVar26 = 0;
    uVar18 = 0;
    lVar16 = 0;
    uVar13 = 1;
    puVar22 = local_f8;
    do {
      while( true ) {
        bVar6 = *(byte *)((long)&local_a8 + lVar16);
        puVar22[lVar16] = (uint)bVar6 & (1 << ((byte)iVar20 & 0x1f)) - 1U;
        uVar25 = (uint)(bVar6 >> ((byte)iVar20 & 0x1f));
        if (iVar7 == 0) break;
        uVar25 = (int)uVar26 + uVar25 * uVar13;
        uVar26 = (ulong)uVar25;
        if (uVar13 == 0x51) {
LAB_001054c0:
          uVar13 = 1;
          local_118[uVar18] = uVar25;
          uVar26 = 0;
          uVar18 = (ulong)((int)uVar18 + 1);
        }
        else {
          uVar13 = uVar13 * 3;
        }
LAB_0010527d:
        lVar16 = lVar16 + 1;
        if (uVar29 <= (uint)lVar16) goto LAB_001052c0;
      }
      if (iVar14 == 0) goto LAB_0010527d;
      uVar25 = (int)uVar26 + uVar25 * uVar13;
      uVar26 = (ulong)uVar25;
      if (uVar13 == 0x19) goto LAB_001054c0;
      lVar16 = lVar16 + 1;
      uVar13 = uVar13 * 5;
    } while ((uint)lVar16 < uVar29);
LAB_001052c0:
    if ((int)uVar18 != 0) {
      puVar27 = local_118;
      puVar1 = puVar27 + uVar18;
      do {
        uVar18 = (ulong)*puVar27;
        iVar14 = 8 - (uint)(iVar7 == 0);
        do {
          iVar9 = 8 - (uVar17 & 7);
          if (iVar14 < iVar9) {
            iVar9 = iVar14;
          }
          local_88[uVar17 >> 3] = local_88[uVar17 >> 3] | (byte)(uVar18 << (sbyte)(uVar17 & 7));
          uVar17 = uVar17 + iVar9;
          uVar18 = uVar18 >> ((byte)iVar9 & 0x3f);
          iVar14 = iVar14 - iVar9;
        } while (iVar14 != 0);
        puVar27 = puVar27 + 1;
      } while (puVar27 != puVar1);
    }
    if (1 < uVar13) {
      if (iVar7 == 0) {
        iVar7 = (uVar13 != 5) + 3 + (uint)(uVar13 != 5);
      }
      else {
        iVar7 = 2;
        if ((uVar13 != 3) && (iVar7 = 4, uVar13 != 9)) {
          iVar7 = (uVar13 != 0x1b) + 5 + (uint)(uVar13 != 0x1b);
        }
      }
      do {
        iVar14 = 8 - (uVar17 & 7);
        if (iVar7 < iVar14) {
          iVar14 = iVar7;
        }
        local_88[uVar17 >> 3] = local_88[uVar17 >> 3] | (byte)(uVar26 << (sbyte)(uVar17 & 7));
        uVar17 = uVar17 + iVar14;
        uVar26 = uVar26 >> ((byte)iVar14 & 0x3f);
        iVar7 = iVar7 - iVar14;
      } while (iVar7 != 0);
    }
    puVar1 = local_f8 + (ulong)(uVar29 - 1) + 1;
    if (iVar20 == 0) {
      do {
        if (puVar22 + 1 == puVar1) break;
        puVar22 = puVar22 + 2;
      } while (puVar22 != puVar1);
    }
    else {
      while( true ) {
        uVar18 = (ulong)local_f8[0];
        iVar7 = iVar20;
        do {
          iVar14 = 8 - (uVar17 & 7);
          if (iVar7 < iVar14) {
            iVar14 = iVar7;
          }
          local_88[uVar17 >> 3] = local_88[uVar17 >> 3] | (byte)(uVar18 << (sbyte)(uVar17 & 7));
          uVar17 = uVar17 + iVar14;
          uVar18 = uVar18 >> ((byte)iVar14 & 0x3f);
          iVar7 = iVar7 - iVar14;
        } while (iVar7 != 0);
        puVar22 = puVar22 + 1;
        if (puVar1 == puVar22) break;
        local_f8[0] = *puVar22;
      }
    }
  }
  uVar26 = 0;
  uVar18 = (ulong)uVar17;
  do {
    pbVar11 = pbVar10;
    do {
      uVar17 = uVar21;
      if ((uint)*pbVar11 == (uint)uVar26 >> local_130) break;
      pbVar11 = pbVar11 + 1;
      uVar17 = (uint)bVar5;
    } while (pbVar11 != pbVar10 + uVar12);
    uVar19 = (ulong)local_68[uVar26];
    for (; uVar17 != 0; uVar17 = uVar17 - uVar29) {
      uVar13 = (uint)uVar18 & 7;
      uVar29 = 8 - uVar13;
      if ((int)uVar17 < (int)uVar29) {
        uVar29 = uVar17;
      }
      local_88[uVar18 >> 3] = local_88[uVar18 >> 3] | (byte)(uVar19 << (sbyte)uVar13);
      uVar18 = (ulong)((uint)uVar18 + uVar29);
      uVar19 = uVar19 >> ((byte)uVar29 & 0x3f);
    }
    uVar26 = uVar26 + 1;
  } while (uVar26 != local_13c);
  *(undefined1 (*) [8])param_1 = local_88;
  *(undefined8 *)(param_1 + 8) = uStack_80;
LAB_0010566e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* basisu::compute_bc1_hints(bool&, bool&, basisu::uastc_encode_results const&, basisu::color_rgba
   const (*) [4], basisu::color_rgba const (*) [4]) [clone .constprop.0] */

void basisu::compute_bc1_hints
               (bool *param_1,bool *param_2,uastc_encode_results *param_3,color_rgba *param_4,
               color_rgba *param_5)

{
  char cVar1;
  char cVar2;
  color_rgba cVar3;
  color_rgba cVar4;
  color_rgba cVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  ulong uVar11;
  color_rgba *pcVar12;
  color_rgba *pcVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  int iVar17;
  byte *pbVar18;
  ulong uVar19;
  ulong uVar20;
  color_rgba *pcVar21;
  byte *pbVar22;
  long in_FS_OFFSET;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined1 local_290 [8];
  uastc_block local_288 [16];
  byte local_278 [64];
  undefined1 local_238 [64];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  uVar6 = *(uint *)param_3;
  uVar11 = (ulong)uVar6;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = false;
  *param_2 = false;
  if ((uVar6 == 8) ||
     ((cVar1 = *(char *)((long)&basist::g_uastc_mode_has_bc1_hint0 + uVar11), cVar1 == '\0' &&
      (*(char *)((long)&basist::g_uastc_mode_has_bc1_hint1 + uVar11) == '\0')))) goto LAB_00106030;
  pbVar22 = local_278;
  basist::encode_bc1(local_238,(uchar *)param_5,0);
  basisu::unpack_block(5,local_238,pbVar22);
  local_2a0 = 0;
  local_298 = 0x1000;
  pack_uastc(local_288,param_3,(etc_block *)&local_2a0,0,(eac_a8_block *)&local_298,false,false);
  basist::unpack_uastc(local_288,(unpacked_uastc_block *)&local_178,false,true);
  cVar2 = *(char *)((long)&basist::g_uastc_mode_has_bc1_hint1 + uVar11);
  local_48 = 0;
  local_70 = *(undefined8 *)param_3;
  local_d8 = local_178;
  uStack_d0 = uStack_170;
  local_c8 = local_168;
  uStack_c0 = uStack_160;
  local_78 = local_118;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_b8 = local_158;
  uStack_b0 = uStack_150;
  local_a8 = local_148;
  uStack_a0 = uStack_140;
  local_98 = local_138;
  uStack_90 = uStack_130;
  local_88 = local_128;
  uStack_80 = uStack_120;
  if (cVar2 == '\0') {
    local_1b8 = (undefined1  [16])0x0;
    local_1a8 = (undefined1  [16])0x0;
    local_198 = (undefined1  [16])0x0;
    local_188 = (undefined1  [16])0x0;
    if (cVar1 != '\0') goto LAB_00106091;
LAB_00105e2e:
    local_1f8 = (undefined1  [16])0x0;
    local_1e8 = (undefined1  [16])0x0;
    local_1d8 = (undefined1  [16])0x0;
    local_1c8 = (undefined1  [16])0x0;
  }
  else {
    basist::transcode_uastc_to_bc1_hint1
              ((unpacked_uastc_block *)&local_d8,(color32 *)param_5,local_290,false);
    basisu::unpack_block(5,local_290,local_1b8);
    if (cVar1 == '\0') goto LAB_00105e2e;
LAB_00106091:
    basist::transcode_uastc_to_bc1_hint0((unpacked_uastc_block *)&local_d8,local_290);
    basisu::unpack_block(5,local_290,local_1f8);
  }
  pbVar18 = local_1b8;
  pbVar10 = local_1f8;
  lVar7 = 0;
  pcVar21 = param_4 + 0x10;
  uVar11 = 0;
  uVar19 = 0;
  uVar20 = 0;
  do {
    pcVar12 = pcVar21 + -0x10;
    pbVar14 = pbVar22;
    pbVar15 = pbVar10;
    pbVar16 = pbVar18;
    do {
      cVar3 = *pcVar12;
      cVar4 = pcVar12[1];
      pcVar13 = pcVar12 + 4;
      cVar5 = pcVar12[2];
      iVar9 = (uint)(byte)cVar3 - (uint)*pbVar14;
      iVar8 = (uint)(byte)cVar4 - (uint)pbVar14[1];
      iVar17 = (uint)(byte)cVar5 - (uint)pbVar14[2];
      uVar20 = uVar20 + (long)(iVar8 * iVar8 + iVar9 * iVar9 + iVar17 * iVar17);
      iVar8 = (uint)(byte)cVar4 - (uint)pbVar15[1];
      iVar9 = (uint)(byte)cVar5 - (uint)pbVar15[2];
      uVar19 = uVar19 + (long)(int)(iVar8 * iVar8 +
                                    ((uint)(byte)cVar3 - (uint)*pbVar15) *
                                    ((uint)(byte)cVar3 - (uint)*pbVar15) + iVar9 * iVar9);
      iVar8 = (uint)(byte)cVar3 - (uint)*pbVar16;
      uVar11 = uVar11 + (long)(int)(((uint)(byte)cVar4 - (uint)pbVar16[1]) *
                                    ((uint)(byte)cVar4 - (uint)pbVar16[1]) + iVar8 * iVar8 +
                                   ((uint)(byte)cVar5 - (uint)pbVar16[2]) *
                                   ((uint)(byte)cVar5 - (uint)pbVar16[2]));
      pcVar12 = pcVar13;
      pbVar14 = pbVar14 + 4;
      pbVar15 = pbVar15 + 4;
      pbVar16 = pbVar16 + 4;
    } while (pcVar21 != pcVar13);
    pcVar21 = pcVar21 + 0x10;
    lVar7 = lVar7 + 4;
    pbVar18 = pbVar18 + 0x10;
    pbVar22 = pbVar22 + 0x10;
    pbVar10 = pbVar10 + 0x10;
  } while (lVar7 != 0x10);
  fVar23 = (float)uVar20;
  if (fVar23 < 0.0) {
    fVar23 = sqrtf(fVar23);
  }
  else {
    fVar23 = SQRT(fVar23);
  }
  fVar25 = (float)uVar19;
  if (fVar25 < 0.0) {
    fVar25 = sqrtf(fVar25);
  }
  else {
    fVar25 = SQRT(fVar25);
  }
  fVar24 = (float)uVar11;
  if (fVar24 < 0.0) {
    fVar24 = sqrtf(fVar24);
  }
  else {
    fVar24 = SQRT(fVar24);
  }
  if ((cVar1 != '\0') && (fVar25 <= _LC16 * fVar23)) {
    *param_1 = true;
  }
  if ((cVar2 != '\0') && (fVar24 <= fVar23 * _LC16)) {
    *param_2 = true;
  }
LAB_00106030:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::encode_uastc(unsigned char const*, basist::uastc_block&, unsigned int) */

void basisu::encode_uastc(uchar *param_1,uastc_block *param_2,uint param_3)

{
  long lVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  undefined2 uVar13;
  bc7enc_compress_block_params *pbVar14;
  bc7_optimization_results *pbVar15;
  etc_block *peVar16;
  undefined1 (*pauVar17) [16];
  bool bVar18;
  char cVar19;
  char cVar24;
  char cVar31;
  char cVar38;
  char cVar45;
  byte bVar46;
  byte bVar50;
  byte bVar55;
  byte bVar59;
  byte bVar60;
  byte bVar68;
  byte bVar76;
  char cVar84;
  byte bVar90;
  byte bVar94;
  byte bVar99;
  undefined1 auVar103 [15];
  undefined1 auVar104 [15];
  undefined1 auVar105 [15];
  undefined1 auVar106 [15];
  undefined1 auVar107 [15];
  undefined1 auVar108 [15];
  undefined1 auVar109 [15];
  undefined1 auVar110 [15];
  undefined1 auVar111 [15];
  undefined1 auVar112 [15];
  undefined1 auVar113 [15];
  undefined1 auVar114 [15];
  undefined1 auVar115 [15];
  undefined1 auVar116 [15];
  undefined1 auVar117 [15];
  undefined1 auVar118 [15];
  undefined1 auVar119 [15];
  undefined1 auVar120 [15];
  undefined1 auVar121 [14];
  undefined1 auVar122 [14];
  undefined1 auVar123 [14];
  undefined1 auVar124 [14];
  undefined1 auVar125 [14];
  undefined1 auVar126 [14];
  undefined1 auVar127 [14];
  undefined1 auVar128 [14];
  undefined1 auVar129 [15];
  undefined1 auVar130 [15];
  undefined1 auVar131 [15];
  undefined1 auVar132 [15];
  undefined1 auVar133 [15];
  undefined1 auVar134 [15];
  undefined1 auVar135 [15];
  undefined1 auVar136 [15];
  undefined1 auVar137 [15];
  undefined1 auVar138 [15];
  undefined1 auVar139 [15];
  undefined1 auVar140 [15];
  undefined1 auVar141 [15];
  undefined1 auVar142 [15];
  undefined1 auVar143 [15];
  undefined1 auVar144 [15];
  undefined1 auVar145 [15];
  undefined1 auVar146 [15];
  undefined1 auVar147 [15];
  undefined1 auVar148 [15];
  undefined1 auVar149 [15];
  undefined1 auVar150 [15];
  undefined1 auVar151 [15];
  undefined1 auVar152 [15];
  undefined1 auVar153 [15];
  undefined1 auVar154 [15];
  undefined1 auVar155 [15];
  undefined1 auVar156 [15];
  undefined8 uVar157;
  undefined8 uVar158;
  undefined8 uVar159;
  undefined8 uVar160;
  undefined8 uVar161;
  undefined8 uVar162;
  undefined8 uVar163;
  undefined1 auVar164 [16];
  undefined1 auVar165 [15];
  unkuint9 Var166;
  undefined1 auVar167 [11];
  undefined1 auVar168 [13];
  undefined1 auVar169 [15];
  unkuint9 Var170;
  undefined1 auVar171 [11];
  undefined1 auVar172 [13];
  undefined1 auVar173 [15];
  undefined1 auVar174 [11];
  undefined1 auVar175 [13];
  undefined1 auVar176 [15];
  undefined1 auVar177 [11];
  undefined1 auVar178 [13];
  undefined1 auVar179 [12];
  undefined1 auVar180 [12];
  undefined1 auVar181 [12];
  undefined1 auVar182 [12];
  undefined1 auVar183 [15];
  undefined1 auVar184 [11];
  undefined1 auVar185 [13];
  undefined1 auVar186 [15];
  undefined1 auVar187 [11];
  undefined1 auVar188 [13];
  undefined1 auVar189 [15];
  undefined1 auVar190 [11];
  undefined1 auVar191 [13];
  undefined1 auVar192 [15];
  undefined1 auVar193 [11];
  undefined1 auVar194 [13];
  undefined1 auVar195 [15];
  undefined1 auVar196 [11];
  undefined1 auVar197 [13];
  undefined1 auVar198 [15];
  undefined1 auVar199 [11];
  undefined1 auVar200 [13];
  undefined1 auVar201 [15];
  undefined1 auVar202 [11];
  undefined1 auVar203 [13];
  undefined1 auVar204 [15];
  undefined1 auVar205 [11];
  undefined1 auVar206 [13];
  undefined1 auVar207 [14];
  undefined1 auVar208 [14];
  undefined1 auVar209 [14];
  undefined1 auVar210 [14];
  undefined1 auVar211 [14];
  undefined1 auVar212 [14];
  undefined1 auVar213 [14];
  undefined1 auVar214 [14];
  undefined1 auVar215 [15];
  undefined1 auVar216 [15];
  undefined1 auVar217 [15];
  undefined1 auVar218 [15];
  undefined1 auVar219 [15];
  undefined1 auVar220 [15];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined3 uVar225;
  undefined3 uVar226;
  undefined3 uVar227;
  undefined3 uVar228;
  undefined1 auVar229 [15];
  undefined1 auVar230 [15];
  undefined1 auVar231 [15];
  undefined1 auVar232 [15];
  undefined1 auVar233 [15];
  undefined1 auVar234 [15];
  undefined1 auVar235 [15];
  undefined1 auVar236 [15];
  unkbyte10 Var237;
  unkbyte10 Var238;
  unkbyte10 Var239;
  unkbyte10 Var240;
  undefined3 uVar241;
  undefined3 uVar242;
  undefined3 uVar243;
  undefined3 uVar244;
  undefined1 auVar245 [15];
  undefined1 auVar246 [15];
  undefined1 auVar247 [15];
  undefined1 auVar248 [15];
  undefined1 auVar249 [15];
  undefined1 auVar250 [15];
  undefined1 auVar251 [15];
  undefined1 auVar252 [15];
  undefined1 auVar253 [15];
  undefined1 auVar254 [15];
  undefined1 auVar255 [15];
  undefined1 auVar256 [15];
  undefined1 auVar257 [15];
  undefined1 auVar258 [15];
  undefined1 auVar259 [15];
  undefined1 auVar260 [15];
  undefined1 auVar261 [12];
  undefined1 auVar262 [12];
  undefined1 auVar263 [12];
  undefined1 auVar264 [12];
  undefined1 auVar265 [12];
  undefined1 auVar266 [12];
  undefined1 auVar267 [12];
  undefined1 auVar268 [12];
  uint uVar269;
  uint uVar270;
  uint uVar271;
  uint uVar272;
  undefined5 uVar273;
  undefined5 uVar274;
  undefined5 uVar275;
  undefined5 uVar276;
  undefined1 auVar277 [12];
  undefined1 auVar278 [12];
  undefined1 auVar279 [12];
  undefined1 auVar280 [12];
  undefined5 uVar281;
  undefined5 uVar282;
  undefined5 uVar283;
  undefined5 uVar284;
  undefined1 auVar285 [12];
  undefined1 auVar286 [12];
  undefined1 auVar287 [12];
  undefined1 auVar288 [12];
  undefined1 auVar289 [12];
  undefined1 auVar290 [12];
  undefined1 auVar291 [12];
  undefined1 auVar292 [12];
  undefined1 auVar293 [12];
  undefined1 auVar294 [16];
  undefined1 auVar295 [16];
  undefined1 auVar296 [16];
  undefined1 auVar297 [16];
  undefined1 auVar298 [14];
  undefined1 auVar299 [14];
  undefined1 auVar300 [14];
  undefined1 auVar301 [14];
  undefined1 auVar302 [14];
  undefined1 auVar303 [14];
  undefined1 auVar304 [14];
  undefined1 auVar305 [14];
  undefined1 auVar306 [14];
  undefined1 auVar307 [14];
  undefined1 auVar308 [14];
  undefined1 auVar309 [14];
  undefined1 auVar310 [14];
  int iVar311;
  int iVar312;
  byte bVar313;
  char cVar314;
  uint uVar315;
  uint uVar316;
  uchar *puVar317;
  undefined8 uVar318;
  undefined4 *puVar319;
  undefined8 uVar320;
  undefined8 uVar321;
  ulong uVar322;
  undefined8 uVar323;
  undefined4 *puVar324;
  long lVar325;
  long lVar326;
  long lVar327;
  undefined8 *puVar328;
  ulong uVar329;
  undefined8 *puVar330;
  int *piVar331;
  long lVar332;
  char cVar333;
  uint uVar334;
  undefined4 *puVar335;
  undefined4 *puVar336;
  byte *pbVar337;
  color_rgba *pcVar338;
  astc_block_desc *paVar339;
  astc_block_desc *paVar340;
  uastc_encode_results *puVar341;
  undefined8 *puVar342;
  long lVar343;
  undefined8 *puVar344;
  undefined4 uVar345;
  color_cell_compressor_results *pcVar346;
  uint uVar347;
  ulong uVar348;
  undefined4 *puVar349;
  color_cell_compressor_results *pcVar350;
  color32 *pcVar351;
  color_rgba *pcVar352;
  uchar *puVar353;
  uint uVar354;
  undefined8 *puVar355;
  color_cell_compressor_results *pcVar356;
  color_cell_compressor_params *pcVar357;
  uint *puVar358;
  undefined1 uVar359;
  undefined1 uVar360;
  undefined8 *puVar361;
  long lVar362;
  long in_FS_OFFSET;
  byte bVar363;
  ushort uVar364;
  float fVar365;
  undefined6 uVar366;
  double dVar367;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar370 [12];
  undefined1 auVar368 [11];
  ushort uVar388;
  ushort uVar391;
  undefined1 auVar375 [16];
  undefined1 auVar376 [16];
  ushort uVar385;
  ushort uVar386;
  ushort uVar387;
  ushort uVar390;
  ushort uVar392;
  undefined1 auVar377 [16];
  undefined1 auVar379 [16];
  undefined1 auVar380 [16];
  int iVar389;
  undefined1 auVar382 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar383 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar384 [16];
  ushort uVar393;
  ushort uVar412;
  ushort uVar414;
  ushort uVar416;
  ushort uVar418;
  ushort uVar420;
  ushort uVar422;
  undefined1 auVar395 [16];
  undefined1 auVar396 [16];
  short sVar394;
  short sVar413;
  short sVar415;
  short sVar417;
  short sVar419;
  short sVar421;
  short sVar423;
  ushort uVar424;
  short sVar425;
  undefined1 auVar397 [16];
  undefined1 auVar398 [16];
  undefined1 auVar405 [16];
  ushort uVar426;
  ushort uVar437;
  undefined4 uVar428;
  ushort uVar439;
  ushort uVar441;
  ushort uVar443;
  ushort uVar445;
  ushort uVar447;
  undefined1 auVar432 [16];
  undefined1 auVar433 [16];
  short sVar427;
  short sVar438;
  short sVar440;
  short sVar442;
  short sVar444;
  short sVar446;
  short sVar448;
  ushort uVar449;
  short sVar450;
  undefined1 auVar435 [16];
  undefined1 auVar436 [16];
  undefined1 auVar451 [12];
  ushort uVar456;
  ushort uVar457;
  short sVar458;
  ushort uVar459;
  short sVar460;
  ushort uVar461;
  ushort uVar462;
  ushort uVar463;
  short sVar464;
  ushort uVar465;
  ushort uVar466;
  short sVar467;
  undefined1 auVar453 [16];
  undefined1 auVar454 [16];
  ushort uVar468;
  short sVar469;
  ushort uVar470;
  short sVar471;
  int iVar472;
  int iVar473;
  undefined4 uVar474;
  ushort uVar485;
  short sVar486;
  ushort uVar487;
  short sVar488;
  ushort uVar489;
  short sVar490;
  ushort uVar491;
  short sVar492;
  ushort uVar493;
  ushort uVar494;
  short sVar495;
  undefined1 auVar483 [16];
  short sVar496;
  short sVar497;
  int iVar498;
  int iVar499;
  short sVar506;
  short sVar507;
  short sVar508;
  short sVar509;
  short sVar510;
  short sVar511;
  undefined1 auVar504 [16];
  undefined1 auVar505 [16];
  short sVar512;
  ushort uVar513;
  ushort uVar523;
  undefined1 auVar514 [12];
  ushort uVar518;
  ushort uVar519;
  ushort uVar520;
  ushort uVar521;
  int iVar522;
  ushort uVar524;
  undefined1 auVar516 [16];
  ushort uVar525;
  short sVar526;
  undefined1 auVar527 [12];
  short sVar531;
  short sVar532;
  short sVar533;
  short sVar534;
  short sVar535;
  short sVar536;
  undefined1 auVar529 [16];
  short sVar537;
  ushort uVar538;
  undefined1 auVar539 [12];
  ushort uVar543;
  ushort uVar544;
  ushort uVar545;
  ushort uVar546;
  ushort uVar547;
  ushort uVar548;
  undefined1 auVar541 [16];
  ushort uVar549;
  short sVar550;
  short sVar551;
  short sVar552;
  short sVar553;
  short sVar554;
  short sVar555;
  short sVar556;
  short sVar557;
  short sVar558;
  short sVar559;
  short sVar560;
  short sVar561;
  short sVar562;
  short sVar563;
  short sVar564;
  short sVar565;
  char acStack_11a90 [128];
  undefined1 auStack_11a10 [4];
  undefined1 auStack_11a0c [172];
  byte abStack_11960 [2319];
  char acStack_11051 [4];
  undefined4 auStack_1104d [7];
  undefined1 auStack_11030 [69576];
  uint auStack_68 [4];
  undefined1 auStack_58 [40];
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  char cVar66;
  char cVar67;
  char cVar69;
  char cVar70;
  char cVar71;
  char cVar72;
  char cVar73;
  char cVar74;
  char cVar75;
  char cVar77;
  char cVar78;
  char cVar79;
  char cVar80;
  char cVar81;
  char cVar82;
  char cVar83;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  undefined1 auVar369 [12];
  undefined1 auVar371 [12];
  undefined1 auVar373 [14];
  undefined1 auVar374 [14];
  undefined1 auVar372 [13];
  undefined1 auVar378 [16];
  undefined1 auVar381 [16];
  undefined1 auVar399 [16];
  undefined1 auVar400 [16];
  undefined1 auVar406 [16];
  undefined1 auVar401 [16];
  undefined1 auVar407 [16];
  undefined1 auVar408 [16];
  undefined1 auVar402 [16];
  undefined1 auVar409 [16];
  undefined1 auVar403 [16];
  undefined1 auVar410 [16];
  undefined1 auVar411 [16];
  undefined1 auVar404 [16];
  undefined6 uVar429;
  undefined1 auVar430 [12];
  undefined1 auVar431 [14];
  undefined1 auVar434 [16];
  undefined1 auVar452 [14];
  undefined1 auVar455 [16];
  undefined6 uVar475;
  undefined1 auVar477 [12];
  undefined1 auVar478 [12];
  undefined8 uVar476;
  undefined1 auVar479 [12];
  undefined1 auVar481 [16];
  undefined1 auVar482 [16];
  undefined1 auVar480 [14];
  undefined1 auVar484 [16];
  undefined1 auVar500 [12];
  undefined1 auVar501 [12];
  undefined1 auVar502 [16];
  undefined1 auVar503 [16];
  undefined1 auVar515 [14];
  undefined1 auVar517 [16];
  undefined1 auVar528 [14];
  undefined1 auVar530 [16];
  undefined1 auVar540 [14];
  undefined1 auVar542 [16];
  
  bVar363 = 0;
  puVar361 = (undefined8 *)&stack0xffffffffffffffd0;
  do {
    puVar344 = puVar361;
    puVar344[-0x200] = puVar344[-0x200];
    puVar361 = puVar344 + -0x200;
  } while (puVar344 + -0x200 != (undefined8 *)auStack_11030);
  uVar360 = 1;
  puVar344[-0x36f] = param_2;
  puVar353 = param_1 + 0x10;
  *(uint *)(puVar344 + -0x35f) = param_3;
  puVar344[0x1ffe] = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined1 *)(puVar344 + -0x389) = 1;
  puVar344[-0x385] = param_1 + 0x50;
  puVar344[-0x387] = param_1;
  puVar344[-0x381] = PTR_g_bc7_weights2_0010ea58;
  puVar344[-0x380] = &g_bc7_weights2x;
  uVar345 = *(undefined4 *)param_1;
  puVar344[-0x37b] = PTR_g_bc7_weights3_0010ea60;
  puVar344[-0x37a] = &g_bc7_weights3x;
  *(undefined4 *)((long)puVar344 + -0x1a5c) = uVar345;
  *(char *)(puVar344 + -0x388) = (char)((uint)uVar345 >> 0x18);
  uVar359 = 0;
  puVar344[-0x365] = PTR_g_astc_weights4_0010ea68;
  puVar344[-0x364] = &g_astc_weights4x;
  do {
    puVar317 = puVar353 + -0x10;
    do {
      uVar2 = *puVar317;
      uVar3 = puVar317[1];
      uVar4 = puVar317[2];
      if (puVar317[3] != 0xff) {
        uVar359 = 1;
      }
      if (((uchar)((uint)uVar345 >> 0x10) != uVar4 ||
           ((uchar)((uint)uVar345 >> 8) != uVar3 || (uchar)uVar345 != uVar2)) ||
         (*(uchar *)(puVar344 + -0x388) != puVar317[3])) {
        *(undefined1 *)(puVar344 + -0x389) = 0;
      }
      if (uVar3 == uVar2) {
        if (uVar4 != uVar3) {
          uVar360 = 0;
        }
      }
      else {
        uVar360 = 0;
      }
      puVar317 = puVar317 + 4;
    } while (puVar353 != puVar317);
    puVar353 = puVar353 + 0x10;
  } while ((uchar *)puVar344[-0x385] != puVar353);
  *(undefined1 *)((long)puVar344 + -0x1b04) = uVar360;
  *(undefined1 *)((long)puVar344 + -0x1b03) = uVar359;
  pcVar338 = (color_rgba *)puVar344[-0x387];
  if (*(char *)(puVar344 + -0x389) != '\0') {
    puVar344[6] = 0;
    puVar344[-9] = 8;
    *(undefined4 *)(puVar344 + 5) = *(undefined4 *)((long)puVar344 + -0x1a5c);
    puVar361 = puVar344 + -8;
    for (lVar325 = 0xd; lVar325 != 0; lVar325 = lVar325 + -1) {
      *puVar361 = 0;
      puVar361 = puVar361 + 1;
    }
    puVar344[-0x38a] = 0x107c89;
    basisu::pack_etc1_block_solid_color
              ((etc_block *)(puVar344 + -0x309),(uchar *)((long)puVar344 + -0x1a5c));
    *(undefined1 *)((long)puVar344 + -0x1047) = 0x10;
    puVar344[-0x38b] = 0;
    puVar344[-0x38c] = 0x107cb7;
    pack_uastc((uastc_block *)puVar344[-0x36f],(uastc_encode_results *)(puVar344 + -9),
               (etc_block *)(puVar344 + -0x309),0,(eac_a8_block *)(puVar344 + -0x209),false,
               *(bool *)(puVar344 + -0x38b));
    goto LAB_00107495;
  }
  uVar334 = *(uint *)(puVar344 + -0x35f);
  uVar315 = uVar334 & 7;
  *(uint *)((long)puVar344 + -0x1ae4) = uVar334 & 8;
  bVar313 = (byte)(uVar334 >> 4) & 1;
  if ((uVar334 & 8) != 0) {
    bVar313 = *(byte *)(puVar344 + -0x389);
  }
  *(byte *)((long)puVar344 + -0x1b01) = bVar313;
  uVar334 = 4;
  if (uVar315 < 5) {
    uVar334 = uVar315;
  }
  *(uint *)(puVar344 + -0x361) = uVar334;
  if (uVar315 < 4) {
    uVar348 = (ulong)uVar334;
    *(undefined4 *)((long)puVar344 + -0x1a9c) = 0;
    uVar345 = *(undefined4 *)(CSWTCH_448 + uVar348 * 4);
    *(undefined4 *)(puVar344 + -0x379) = *(undefined4 *)(CSWTCH_447 + uVar348 * 4);
    *(undefined4 *)(puVar344 + -0x35d) = *(undefined4 *)(CSWTCH_456 + uVar348 * 4);
    uVar428 = *(undefined4 *)(CSWTCH_451 + uVar348 * 4);
    *(undefined4 *)((long)puVar344 + -0x1af4) = *(undefined4 *)(CSWTCH_457 + uVar348 * 4);
    *(undefined1 *)((long)puVar344 + -0x1b02) = *(undefined1 *)((long)&CSWTCH_455 + uVar348);
    uVar334 = (uint)*(byte *)((long)&CSWTCH_453 + uVar348);
    if (*(byte *)((long)&CSWTCH_453 + uVar348) == 0) {
      uVar334 = 1;
      *(undefined1 *)(puVar344 + -0x360) = *(undefined1 *)((long)puVar344 + -0x1b03);
      goto LAB_00106410;
    }
    bVar313 = (*(byte *)((long)puVar344 + -0x1b03) ^ 1) & *(byte *)((long)puVar344 + -0x1b04);
    *(byte *)((long)puVar344 + -0x1ab5) = bVar313;
    if (bVar313 == 0) {
      *(byte *)(puVar344 + -0x360) = *(byte *)((long)puVar344 + -0x1b03);
      goto LAB_00106410;
    }
    *(undefined4 *)(puVar344 + -0x346) = 0;
    puVar344[-900] = puVar344 + -0x349;
    puVar344[-0x382] = puVar344 + -0x32b;
    puVar344[-0x388] = puVar344 + -0x333;
    *(undefined4 *)((long)puVar344 + -0x1a2c) = uVar428;
    *(undefined4 *)(puVar344 + -0x347) = 1;
    *(undefined4 *)((long)puVar344 + -0x1a34) = uVar345;
    *(undefined1 *)(puVar344 + -0x360) = 0;
    *(undefined1 *)((long)puVar344 + -0x1b04) = 0;
    puVar344[-899] = puVar344 + -0x31d;
    puVar344[-0x349] = __LC21;
    puVar344[-0x348] = _UNK_0010eae8;
LAB_00106872:
    puVar344[-0x37e] = (uastc_encode_results *)(puVar344 + -9);
    puVar344[-0x36e] = (uint *)((long)puVar344 + -0x1a9c);
    puVar344[-0x38a] = 0x1068a4;
    astc_mode0_or_18(0,pcVar338,(uastc_encode_results *)(puVar344 + -9),
                     (uint *)((long)puVar344 + -0x1a9c),
                     (bc7enc_compress_block_params *)puVar344[-900],(uchar *)0x0);
    puVar344[-0x385] = puVar344 + -0x33b;
    if ((*(byte *)(puVar344 + -0x379) & 2) != 0) {
LAB_0010a011:
      puVar344[-0x38a] = 0x10a02b;
      astc_mode1(pcVar338,(uastc_encode_results *)puVar344[-0x37e],(uint *)puVar344[-0x36e],
                 (bc7enc_compress_block_params *)puVar344[-900]);
      puVar344[-0x385] = puVar344 + -0x33b;
      if ((*(uint *)(puVar344 + -0x379) & 4) != 0) {
        uVar334 = *(uint *)(puVar344 + -0x379) & 8;
        if (*(char *)((long)puVar344 + -0x1ab5) == '\0') {
          *(undefined4 *)(puVar344 + -0x37d) = 0;
          *(undefined4 *)(puVar344 + -0x368) = 0x1e;
          *(undefined4 *)(puVar344 + -0x371) = 1;
LAB_0010a080:
          *(uint *)(puVar344 + -0x35e) = uVar334;
          pcVar346 = (color_cell_compressor_results *)puVar344[-0x382];
          puVar344[-0x385] = puVar344 + -0x33b;
          puVar344[-0x36c] = puVar344 + -0x341;
          puVar344[-0x37f] = puVar344 + -0x309;
          puVar344[-0x387] = &basist::g_astc_bc7_common_partitions2;
          puVar344[-0x375] = puVar344 + -0x1ff;
          puVar361 = &basist::g_astc_unquant;
          puVar344[-0x377] = puVar344 + -0x301;
          puVar344[-0x374] = puVar344 + -0x325;
          puVar344[-0x373] = puVar344 + -0x31b;
          puVar344[-0x36a] = pcVar338;
          puVar344[-0x369] = puVar344 + -0x209;
          puVar344[-0x363] = puVar344 + -0x33f;
          puVar344[-0x362] = puVar344 + -0x339;
          puVar344[-0x367] = puVar344 + -0x341;
          puVar344[-0x366] = puVar344[-0x385];
          while( true ) {
            uVar334 = *(uint *)(puVar344 + -0x37d);
            puVar344[-0x345] = 0;
            pcVar356 = (color_cell_compressor_results *)puVar344[-0x388];
            lVar325 = puVar344[-0x36a];
            uVar322 = (ulong)*(byte *)(puVar344[-0x387] + (ulong)uVar334 * 6) << 4;
            pcVar350 = pcVar356;
            uVar348 = uVar322;
            do {
              lVar326 = 0;
              do {
                uVar329 = (ulong)*(byte *)((long)&basist::g_bc7_partition2 +
                                          (ulong)(uint)((int)uVar348 + (int)lVar326));
                uVar315 = *(uint *)((long)puVar344 + uVar329 * 4 + -0x1a28);
                *(uint *)(pcVar350 + lVar326 * 4) = uVar315;
                *(uint *)((long)puVar344 + uVar329 * 4 + -0x1a28) = uVar315 + 1;
                lVar343 = lVar326 * 4;
                lVar326 = lVar326 + 1;
                *(undefined4 *)((long)puVar344 + (uVar329 * 0x10 + (ulong)uVar315) * 4 + -0x1848) =
                     *(undefined4 *)(lVar325 + lVar343);
              } while (lVar326 != 4);
              pcVar350 = pcVar350 + 0x10;
              uVar348 = (ulong)((int)uVar348 + 4);
              lVar325 = lVar325 + 0x10;
            } while (pcVar346 != pcVar350);
            pcVar357 = (color_cell_compressor_params *)puVar344[-0x369];
            pbVar14 = (bc7enc_compress_block_params *)puVar344[-900];
            *(undefined1 (*) [16])pcVar346 = (undefined1  [16])0x0;
            uVar321 = puVar344[-0x37b];
            uVar476 = puVar344[-0x37a];
            uVar345 = *(undefined4 *)(puVar344 + -0x345);
            *(undefined1 (*) [16])(pcVar346 + 0x10) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])pcVar357 = (undefined1  [16])0x0;
            uVar158 = _UNK_0010eaf8;
            uVar157 = _LC22;
            uVar323 = puVar344[-0x367];
            uVar320 = puVar344[-0x366];
            *(undefined1 (*) [16])(pcVar357 + 0x10) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pcVar357 + 0x20) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pcVar357 + 0x30) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pcVar357 + 0x40) = (undefined1  [16])0x0;
            *(undefined4 *)(puVar344 + -0x209) = uVar345;
            uVar318 = puVar344[-0x37f];
            *(undefined1 (*) [16])(pcVar346 + 0x20) = (undefined1  [16])0x0;
            puVar344[-0x206] = uVar321;
            puVar344[-0x205] = uVar476;
            puVar344[-0x202] = uVar157;
            puVar344[-0x201] = uVar158;
            puVar344[-0x328] = uVar323;
            puVar344[-0x327] = uVar320;
            puVar344[-0x208] = uVar318;
            *(undefined4 *)(puVar344 + -0x207) = 8;
            *(undefined4 *)(puVar344 + -0x200) = 1;
            puVar344[-0x38a] = 0x10a27c;
            uVar318 = basisu::color_cell_compression(0xff,pcVar357,pcVar346,pbVar14);
            pbVar14 = (bc7enc_compress_block_params *)puVar344[-900];
            pcVar357 = (color_cell_compressor_params *)puVar344[-0x375];
            puVar344[-0x36d] = uVar318;
            uVar345 = *(undefined4 *)((long)puVar344 + -0x1a24);
            pcVar350 = (color_cell_compressor_results *)puVar344[-0x374];
            *(undefined1 (*) [16])pcVar357 = (undefined1  [16])0x0;
            uVar321 = puVar344[-0x37b];
            uVar476 = puVar344[-0x37a];
            *(undefined1 (*) [16])(pcVar357 + 0x10) = (undefined1  [16])0x0;
            uVar158 = _UNK_0010eaf8;
            uVar157 = _LC22;
            uVar323 = puVar344[-0x363];
            uVar320 = puVar344[-0x362];
            *(undefined1 (*) [16])(pcVar357 + 0x20) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pcVar357 + 0x30) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pcVar357 + 0x40) = (undefined1  [16])0x0;
            *(undefined4 *)(puVar344 + -0x1ff) = uVar345;
            uVar318 = puVar344[-0x377];
            *(undefined1 (*) [16])pcVar350 = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pcVar350 + 0x10) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pcVar350 + 0x20) = (undefined1  [16])0x0;
            puVar344[-0x1fe] = uVar318;
            *(undefined4 *)(puVar344 + -0x1fd) = 8;
            *(undefined4 *)(puVar344 + -0x1f6) = 1;
            puVar344[-0x1fc] = uVar321;
            puVar344[-0x1fb] = uVar476;
            puVar344[-0x1f8] = uVar157;
            puVar344[-0x1f7] = uVar158;
            puVar344[-0x322] = uVar323;
            puVar344[-0x321] = uVar320;
            puVar344[-0x38a] = 0x10a328;
            uVar318 = basisu::color_cell_compression(0xff,pcVar357,pcVar350,pbVar14);
            lVar325 = puVar344[-0x387];
            puVar344[-0x36b] = uVar318;
            puVar328 = (undefined8 *)puVar344[-0x373];
            for (lVar326 = 0xb; lVar326 != 0; lVar326 = lVar326 + -1) {
              *puVar328 = 0;
              puVar328 = puVar328 + (ulong)bVar363 * -2 + 1;
            }
            *(undefined4 *)((long)puVar344 + -0x18dc) = 8;
            puVar344[-0x31d] = _LC25;
            lVar325 = lVar325 + (ulong)uVar334 * 6;
            cVar314 = *(char *)(lVar325 + 4);
            *(uint *)(puVar344 + -0x31c) = (uint)*(ushort *)(lVar325 + 2);
            *(uint *)(puVar344 + -0x378) = (uint)(cVar314 == '\0');
            uVar348 = (ulong)(cVar314 != '\0');
            lVar325 = uVar348 * 0x30;
            bVar313 = *(byte *)((long)puVar344 + lVar325 + -0x192f);
            bVar5 = *(byte *)((long)puVar344 + lVar325 + -0x192b);
            bVar6 = *(byte *)((long)puVar344 + lVar325 + -0x192a);
            bVar7 = *(byte *)((long)puVar344 + lVar325 + -0x192e);
            bVar8 = *(byte *)((long)puVar344 + lVar325 + -0x192c);
            bVar9 = *(byte *)(puVar344 + uVar348 * 6 + -0x326);
            bVar10 = *(byte *)((ulong)bVar5 * 2 + 0x111018);
            *(uint *)((long)puVar344 + -0x18d3) =
                 CONCAT31(CONCAT21(CONCAT11(bVar5,bVar313),bVar8),bVar9);
            *(ushort *)((long)puVar344 + -0x18cf) = CONCAT11(bVar6,bVar7);
            *(undefined2 *)(puVar344 + -0x34b) = 0;
            if ((uint)*(byte *)((long)(int)(uint)bVar8 * 2 + 0x111018) + (uint)bVar10 +
                (uint)*(byte *)((ulong)bVar6 * 2 + 0x111018) <
                (uint)*(byte *)((long)(int)(uint)bVar9 * 2 + 0x111018) +
                (uint)*(byte *)((long)(int)(uint)bVar313 * 2 + 0x111018) +
                (uint)*(byte *)((ulong)bVar7 * 2 + 0x111018)) {
              *(undefined1 *)(puVar344 + -0x34b) = 1;
              *(uint *)((long)puVar344 + -0x18d3) =
                   CONCAT31(CONCAT21(CONCAT11(bVar313,bVar5),bVar9),bVar8);
              *(ushort *)((long)puVar344 + -0x18cf) = CONCAT11(bVar7,bVar6);
            }
            lVar325 = (ulong)*(uint *)(puVar344 + -0x378) * 0x30;
            bVar313 = *(byte *)((long)puVar344 + lVar325 + -0x192f);
            bVar5 = *(byte *)((long)puVar344 + lVar325 + -0x192b);
            bVar6 = *(byte *)((long)puVar344 + lVar325 + -0x192a);
            bVar7 = *(byte *)((long)puVar344 + lVar325 + -0x192e);
            bVar8 = *(byte *)((long)puVar344 + lVar325 + -0x192c);
            bVar9 = *(byte *)(puVar344 + (ulong)*(uint *)(puVar344 + -0x378) * 6 + -0x326);
            bVar10 = *(byte *)((ulong)bVar5 * 2 + 0x111018);
            *(uint *)((long)puVar344 + -0x18cd) =
                 CONCAT31(CONCAT21(CONCAT11(bVar5,bVar313),bVar8),bVar9);
            *(ushort *)((long)puVar344 + -0x18c9) = CONCAT11(bVar6,bVar7);
            if ((uint)*(byte *)((long)(int)(uint)bVar8 * 2 + 0x111018) + (uint)bVar10 +
                (uint)*(byte *)((ulong)bVar6 * 2 + 0x111018) <
                (uint)*(byte *)((long)(int)(uint)bVar9 * 2 + 0x111018) +
                (uint)*(byte *)((long)(int)(uint)bVar313 * 2 + 0x111018) +
                (uint)*(byte *)((ulong)bVar7 * 2 + 0x111018)) {
              *(undefined1 *)((long)puVar344 + -0x1a57) = 1;
              *(uint *)((long)puVar344 + -0x18cd) =
                   CONCAT31(CONCAT21(CONCAT11(bVar313,bVar5),bVar9),bVar8);
              *(ushort *)((long)puVar344 + -0x18c9) = CONCAT11(bVar7,bVar6);
            }
            iVar389 = 0;
            do {
              lVar325 = 0;
              do {
                bVar313 = *(byte *)((long)&basist::g_bc7_partition2 +
                                   (ulong)(uint)((int)uVar322 + (int)lVar325));
                uVar348 = (ulong)bVar313;
                if (cVar314 != '\0') {
                  uVar348 = (ulong)(1 - bVar313);
                }
                cVar23 = *(char *)((long)puVar344 +
                                  (ulong)*(uint *)(pcVar356 + lVar325 * 4) +
                                  (ulong)bVar313 * 0x10 + -0x1a08);
                uVar329 = (ulong)(uint)(iVar389 + (int)lVar325);
                cVar22 = *(char *)((long)puVar344 + (uVar348 - 0x1a58));
                *(char *)((long)puVar344 + (uVar329 - 0x18c1)) = cVar23;
                if (cVar22 != '\0') {
                  *(char *)((long)puVar344 + (uVar329 - 0x18c1)) = '\a' - cVar23;
                }
                lVar325 = lVar325 + 1;
              } while (lVar325 != 4);
              iVar389 = iVar389 + 4;
              uVar322 = (ulong)((int)uVar322 + 4);
              pcVar356 = pcVar356 + 0x10;
            } while (iVar389 != 0x10);
            uVar334 = *(uint *)((long)puVar344 + -0x1a9c);
            if (uVar334 < 0x200) {
              *(uint *)((long)puVar344 + -0x1a9c) = uVar334 + 1;
              uVar318 = puVar344[-0x31d];
              uVar321 = puVar344[-0x31c];
              uVar476 = puVar344[-0x31b];
              uVar323 = puVar344[-0x31a];
              puVar324 = (undefined4 *)((ulong)uVar334 * 0x80 + puVar344[-0x37e]);
              uVar345 = *(undefined4 *)(puVar344 + -0x37d);
              uVar320 = puVar344[-0x313];
              uVar157 = puVar344[-0x312];
              *(undefined8 *)(puVar324 + 0x1a) = puVar344[-0x311];
              puVar324[1] = uVar345;
              lVar325 = puVar344[-0x36d];
              lVar326 = puVar344[-0x36b];
              *(undefined8 *)(puVar324 + 2) = uVar318;
              *(undefined8 *)(puVar324 + 4) = uVar321;
              uVar318 = puVar344[-0x319];
              uVar321 = puVar344[-0x318];
              *(undefined8 *)(puVar324 + 6) = uVar476;
              *(undefined8 *)(puVar324 + 8) = uVar323;
              uVar476 = puVar344[-0x317];
              uVar323 = puVar344[-0x316];
              *(undefined8 *)(puVar324 + 10) = uVar318;
              *(undefined8 *)(puVar324 + 0xc) = uVar321;
              uVar318 = puVar344[-0x315];
              uVar321 = puVar344[-0x314];
              *puVar324 = 2;
              *(long *)(puVar324 + 0x1e) = lVar325 + lVar326;
              *(undefined8 *)(puVar324 + 0xe) = uVar476;
              *(undefined8 *)(puVar324 + 0x10) = uVar323;
              *(undefined8 *)(puVar324 + 0x12) = uVar318;
              *(undefined8 *)(puVar324 + 0x14) = uVar321;
              *(undefined8 *)(puVar324 + 0x16) = uVar320;
              *(undefined8 *)(puVar324 + 0x18) = uVar157;
            }
            uVar334 = *(uint *)(puVar344 + -0x371);
            *(uint *)(puVar344 + -0x37d) = uVar334;
            if (*(uint *)(puVar344 + -0x368) <= uVar334) break;
            *(uint *)(puVar344 + -0x371) = uVar334 + 1;
          }
          pcVar338 = (color_rgba *)puVar344[-0x36a];
          puVar358 = (uint *)puVar344[-0x369];
          if (*(int *)(puVar344 + -0x35e) == 0) goto LAB_001068bf;
          uVar318 = __LC3;
          uVar321 = _UNK_0010ea88;
          if (*(char *)((long)puVar344 + -0x1ab5) != '\0') goto LAB_0010af11;
          puVar342 = &basist::g_astc_bc7_common_partitions3;
          puVar328 = &basist::g_bc7_partition3;
          *(undefined4 *)(puVar344 + -0x378) = 0;
          iVar389 = 1;
          *(undefined4 *)(puVar344 + -0x36b) = 0xb;
        }
        else {
          puVar358 = (uint *)(puVar344 + -0x209);
          puVar344[-0x209] = __LC3;
          puVar344[-0x208] = _UNK_0010ea88;
          puVar344[-0x387] = __LC3;
          puVar344[-0x386] = _UNK_0010ea88;
          puVar344[-0x38a] = 0x10b198;
          uVar315 = estimate_partition2(8,3,(uint *)&basist::g_bc7_weights3,pcVar338,puVar358);
          *(uint *)(puVar344 + -0x37d) = uVar315;
          uVar347 = uVar315 + 1;
          *(uint *)(puVar344 + -0x371) = uVar347;
          *(uint *)(puVar344 + -0x368) = uVar347;
          if (uVar315 < uVar347) goto LAB_0010a080;
          puVar344[-0x37f] = puVar344 + -0x309;
          puVar344[-0x36c] = puVar344 + -0x341;
          uVar318 = puVar344[-0x387];
          uVar321 = puVar344[-0x386];
          if (uVar334 == 0) goto LAB_001068bf;
LAB_0010af11:
          puVar344[-0x375] = &basist::g_bc7_partition3;
          *(undefined4 *)(puVar344 + -0x378) = 0;
          uVar348 = 0xffffffffffffffff;
          iVar389 = 0;
          pbVar337 = (byte *)&basist::g_astc_bc7_common_partitions3;
          puVar344[-0x374] = &basist::g_astc_unquant;
          puVar344[-0x373] = &basist::g_astc_bc7_common_partitions3;
          lVar325 = puVar344[-899];
          puVar344[-0x309] = uVar318;
          puVar344[-0x308] = uVar321;
          do {
            bVar313 = *pbVar337;
            lVar343 = 0;
            lVar326 = puVar344[-0x375];
            puVar344[-0x31d] = 0;
            *(undefined4 *)(puVar344 + -0x31c) = 0;
            do {
              uVar322 = (ulong)*(byte *)((ulong)bVar313 * 0x10 + lVar326 + lVar343);
              uVar334 = *(uint *)((long)puVar344 + uVar322 * 4 + -0x18e8);
              *(uint *)((long)puVar344 + uVar322 * 4 + -0x18e8) = uVar334 + 1;
              lVar327 = lVar343 * 4;
              lVar343 = lVar343 + 1;
              *(undefined4 *)((long)puVar344 + (uVar322 * 0x10 + (ulong)uVar334) * 4 + -0x1048) =
                   *(undefined4 *)(pcVar338 + lVar327);
            } while (lVar343 != 0x10);
            if (uVar348 != 0) {
              puVar344[-0x387] = pbVar337;
              lVar326 = 0;
              uVar322 = 0;
              puVar344[-0x377] = pcVar338;
              *(int *)(puVar344 + -0x37d) = iVar389;
              uVar318 = puVar344[-0x37f];
              do {
                uVar334 = *(uint *)(lVar325 + lVar326 * 4);
                puVar344[-0x38b] = uVar318;
                puVar344[-0x38c] = 0x10b023;
                lVar343 = basisu::color_cell_compression_est_astc
                                    (4,3,(uint *)&basist::g_bc7_weights2,uVar334,
                                     (color_quad_u8 *)(puVar358 + lVar326 * 0x10),uVar348,
                                     (uint *)puVar344[-0x38b]);
                uVar322 = uVar322 + lVar343;
                iVar389 = (int)lVar326;
                lVar326 = lVar326 + 1;
              } while (iVar389 + 1U < 3 && uVar322 < uVar348);
              pbVar337 = (byte *)puVar344[-0x387];
              pcVar338 = (color_rgba *)puVar344[-0x377];
              iVar389 = *(int *)(puVar344 + -0x37d);
              if (uVar322 < uVar348) {
                *(int *)(puVar344 + -0x378) = iVar389;
                uVar348 = uVar322;
              }
            }
            iVar389 = iVar389 + 1;
            pbVar337 = pbVar337 + 6;
          } while (iVar389 != 0xb);
          puVar328 = (undefined8 *)puVar344[-0x375];
          puVar361 = (undefined8 *)puVar344[-0x374];
          puVar342 = (undefined8 *)puVar344[-0x373];
          iVar389 = *(int *)(puVar344 + -0x378) + 1;
          *(int *)(puVar344 + -0x36b) = iVar389;
        }
        puVar344[-0x36d] = pcVar338;
        uVar318 = puVar344[-0x36c];
        *(int *)(puVar344 + -0x377) = iVar389;
        puVar344[-0x369] = puVar358;
        pbVar337 = (byte *)((long)puVar342 + (ulong)*(uint *)(puVar344 + -0x378) * 6);
        puVar344[-0x36a] = puVar344 + -0x34b;
        puVar344[-0x36c] = puVar344 + -0x329;
        puVar344[-0x387] = puVar344 + -0x345;
        puVar344[-0x37d] = uVar318;
        puVar344[-0x37c] = puVar344[-0x385];
        while( true ) {
          bVar313 = *pbVar337;
          lVar325 = puVar344[-0x388];
          puVar344[-0x34b] = 0;
          *(undefined4 *)(puVar344 + -0x34a) = 0;
          lVar326 = puVar344[-0x36d];
          uVar348 = (ulong)bVar313 << 4;
          lVar343 = puVar344[-0x382];
          uVar345 = (undefined4)uVar348;
          lVar327 = lVar325;
          do {
            lVar332 = 0;
            do {
              uVar322 = (ulong)*(byte *)((long)puVar328 + (ulong)(uint)((int)uVar348 + (int)lVar332)
                                        );
              uVar334 = *(uint *)((long)puVar344 + uVar322 * 4 + -0x1a58);
              *(uint *)(lVar327 + lVar332 * 4) = uVar334;
              *(uint *)((long)puVar344 + uVar322 * 4 + -0x1a58) = uVar334 + 1;
              lVar1 = lVar332 * 4;
              lVar332 = lVar332 + 1;
              *(undefined4 *)((long)puVar344 + (uVar322 * 0x10 + (ulong)uVar334) * 4 + -0x1848) =
                   *(undefined4 *)(lVar326 + lVar1);
            } while (lVar332 != 4);
            lVar327 = lVar327 + 0x10;
            uVar348 = (ulong)((int)uVar348 + 4);
            lVar326 = lVar326 + 0x10;
          } while (lVar343 != lVar327);
          lVar327 = 0;
          puVar344[-0x375] = pbVar337;
          puVar344[-0x371] = puVar361;
          puVar344[-0x373] = puVar328;
          lVar326 = puVar344[-0x36a];
          *(undefined4 *)(puVar344 + -0x374) = uVar345;
          pcVar346 = (color_cell_compressor_results *)puVar344[-899];
          pcVar357 = (color_cell_compressor_params *)puVar344[-0x369];
          lVar343 = 0;
          do {
            uVar345 = *(undefined4 *)(lVar326 + lVar343 * 4);
            *(undefined1 (*) [16])pcVar357 = (undefined1  [16])0x0;
            lVar332 = puVar344[-0x37f];
            *(undefined1 (*) [16])(pcVar357 + 0x10) = (undefined1  [16])0x0;
            uVar323 = _UNK_0010eb08;
            uVar476 = __LC26;
            uVar318 = puVar344[-0x381];
            uVar321 = puVar344[-0x380];
            *(undefined4 *)pcVar357 = uVar345;
            pbVar14 = (bc7enc_compress_block_params *)puVar344[-900];
            *(undefined1 (*) [16])(pcVar357 + 0x40) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pcVar357 + 0x20) = (undefined1  [16])0x0;
            *(long *)(pcVar357 + 8) = lVar343 * 0x40 + lVar332;
            lVar362 = lVar343 + 1;
            *(undefined1 (*) [16])(pcVar357 + 0x30) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pcVar346 + 0x10) = (undefined1  [16])0x0;
            *(undefined4 *)(pcVar357 + 0x10) = 4;
            lVar332 = puVar344[-0x37d];
            lVar1 = puVar344[-0x37c];
            *(undefined4 *)(pcVar357 + 0x48) = 1;
            *(undefined1 (*) [16])(pcVar346 + 0x20) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])pcVar346 = (undefined1  [16])0x0;
            *(undefined8 *)(pcVar357 + 0x18) = uVar318;
            *(undefined8 *)(pcVar357 + 0x20) = uVar321;
            *(undefined8 *)(pcVar357 + 0x38) = uVar476;
            *(undefined8 *)(pcVar357 + 0x40) = uVar323;
            *(long *)(pcVar346 + 0x18) = lVar343 * 0x10 + lVar332;
            *(long *)(pcVar346 + 0x20) = lVar343 * 0x10 + lVar1;
            puVar344[-0x38a] = 0x10aa10;
            lVar343 = basisu::color_cell_compression(0xff,pcVar357,pcVar346,pbVar14);
            lVar327 = lVar327 + lVar343;
            pcVar346 = pcVar346 + 0x30;
            pcVar357 = pcVar357 + 0x50;
            lVar343 = lVar362;
          } while (lVar362 != 3);
          lVar332 = 0;
          lVar326 = puVar344[-0x375];
          iVar389 = *(int *)(puVar344 + -0x374);
          *(undefined1 *)((long)puVar344 + -0x1a5e) = 0;
          puVar361 = (undefined8 *)puVar344[-0x36c];
          for (lVar343 = 0xb; lVar343 != 0; lVar343 = lVar343 + -1) {
            *puVar361 = 0;
            puVar361 = puVar361 + (ulong)bVar363 * -2 + 1;
          }
          puVar328 = (undefined8 *)puVar344[-0x373];
          puVar361 = (undefined8 *)puVar344[-0x371];
          *(undefined4 *)((long)puVar344 + -0x194c) = 8;
          puVar344[-0x32b] = _LC27;
          uVar364 = *(ushort *)(lVar326 + 2);
          puVar344[-0x374] = lVar327;
          *(uint *)(puVar344 + -0x32a) = (uint)uVar364;
          bVar313 = *(byte *)(lVar326 + 4);
          *(undefined2 *)(puVar344 + -0x34c) = 0;
          lVar326 = puVar344[-0x382];
          lVar343 = (ulong)bVar313 * 3;
          bVar313 = *(byte *)((long)&basist::g_astc_to_bc7_partition_index_perm_tables + lVar343);
          bVar5 = *(byte *)((long)&basist::g_astc_to_bc7_partition_index_perm_tables + lVar343 + 1);
          bVar6 = *(byte *)((long)&basist::g_astc_to_bc7_partition_index_perm_tables + lVar343 + 2);
          *(uint *)(puVar344 + -0x345) = (uint)bVar313;
          uVar334 = (uint)bVar5;
          *(uint *)((long)puVar344 + -0x1a24) = uVar334;
          uVar315 = (uint)bVar6;
          *(uint *)(puVar344 + -0x344) = uVar315;
          *(uint *)(puVar344 + -0x373) = (uint)bVar313;
          *(uint *)(puVar344 + -0x371) = uVar334;
          do {
            lVar343 = (ulong)*(uint *)(puVar344[-0x387] + lVar332 * 4) * 0x30;
            bVar313 = *(byte *)((long)puVar344 + lVar343 + -0x18be);
            bVar5 = *(byte *)((long)puVar344 + lVar343 + -0x18bb);
            bVar6 = *(byte *)((long)puVar344 + lVar343 + -0x18bf);
            bVar7 = *(byte *)(puVar344 +
                             (ulong)*(uint *)(puVar344[-0x387] + lVar332 * 4) * 6 + -0x318);
            bVar8 = *(byte *)((long)puVar344 + lVar343 + -0x18bc);
            *(byte *)(lVar326 + 0x15) = bVar7;
            bVar9 = *(byte *)((long)puVar361 + (ulong)bVar5 * 2 + 0xe00);
            bVar10 = *(byte *)((long)puVar361 + (ulong)bVar6 * 2 + 0xe00);
            bVar11 = *(byte *)((long)puVar361 + (long)(int)(uint)bVar8 * 2 + 0xe00);
            *(uint *)(lVar326 + 0x16) = CONCAT31(CONCAT21(CONCAT11(bVar313,bVar5),bVar6),bVar8);
            bVar5 = *(byte *)((long)puVar344 + lVar343 + -0x18ba);
            bVar6 = *(byte *)((long)puVar361 + (ulong)bVar7 * 2 + 0xe00);
            *(byte *)(lVar326 + 0x1a) = bVar5;
            if ((uint)bVar11 + (uint)bVar9 +
                (uint)*(byte *)((long)puVar361 + (ulong)bVar5 * 2 + 0xe00) <
                (uint)*(byte *)((long)puVar361 + (ulong)bVar313 * 2 + 0xe00) +
                (uint)bVar10 + (uint)bVar6) {
              uVar360 = *(undefined1 *)(lVar326 + 0x17);
              uVar359 = *(undefined1 *)(lVar326 + 0x19);
              *(byte *)(lVar326 + 0x15) = bVar8;
              *(undefined1 *)((long)puVar344 + lVar332 + -0x1a60) = 1;
              *(undefined1 *)(lVar326 + 0x1a) = uVar359;
              *(uint *)(lVar326 + 0x16) =
                   CONCAT31(CONCAT21(CONCAT11(bVar5,uVar360),*(undefined1 *)(lVar326 + 0x18)),bVar7)
              ;
            }
            lVar332 = lVar332 + 1;
            lVar326 = lVar326 + 6;
          } while (lVar332 != 3);
          lVar326 = puVar344[-0x375];
          uVar318 = puVar344[-0x374];
          iVar522 = 0;
          uVar334 = *(uint *)(puVar344 + -0x373);
          uVar347 = *(uint *)(puVar344 + -0x371);
          do {
            lVar343 = 0;
            do {
              bVar313 = *(byte *)((long)puVar328 + (ulong)(uint)(iVar389 + (int)lVar343));
              cVar314 = *(char *)((long)puVar344 +
                                 (ulong)*(uint *)(lVar325 + lVar343 * 4) +
                                 (ulong)bVar313 * 0x10 + -0x1a08);
              uVar348 = (ulong)(uint)(iVar522 + (int)lVar343);
              *(char *)((long)puVar344 + (uVar348 - 0x1931)) = cVar314;
              if (uVar334 == bVar313) {
                uVar322 = 0;
              }
              else if (uVar347 == bVar313) {
                uVar322 = 1;
              }
              else {
                uVar322 = (ulong)((uint)(uVar315 == bVar313) * 2);
              }
              if (*(char *)((long)puVar344 + (uVar322 - 0x1a60)) != '\0') {
                *(char *)((long)puVar344 + (uVar348 - 0x1931)) = '\x03' - cVar314;
              }
              lVar343 = lVar343 + 1;
            } while (lVar343 != 4);
            iVar522 = iVar522 + 4;
            iVar389 = iVar389 + 4;
            lVar325 = lVar325 + 0x10;
          } while (iVar522 != 0x10);
          uVar334 = *(uint *)((long)puVar344 + -0x1a9c);
          if (uVar334 < 0x200) {
            uVar321 = puVar344[-0x32a];
            *(uint *)((long)puVar344 + -0x1a9c) = uVar334 + 1;
            uVar476 = puVar344[-0x329];
            uVar323 = puVar344[-0x328];
            uVar320 = puVar344[-0x327];
            uVar157 = puVar344[-0x326];
            puVar324 = (undefined4 *)((ulong)uVar334 * 0x80 + puVar344[-0x37e]);
            uVar345 = *(undefined4 *)(puVar344 + -0x378);
            uVar158 = puVar344[-0x325];
            uVar159 = puVar344[-0x324];
            *(undefined8 *)(puVar324 + 2) = puVar344[-0x32b];
            *(undefined8 *)(puVar324 + 4) = uVar321;
            uVar160 = puVar344[-0x323];
            uVar161 = puVar344[-0x322];
            puVar324[1] = uVar345;
            uVar321 = puVar344[-799];
            *(undefined8 *)(puVar324 + 6) = uVar476;
            *(undefined8 *)(puVar324 + 8) = uVar323;
            uVar476 = puVar344[-0x321];
            uVar323 = puVar344[-800];
            *puVar324 = 3;
            *(undefined8 *)(puVar324 + 0x1a) = uVar321;
            *(undefined8 *)(puVar324 + 0x1e) = uVar318;
            *(undefined8 *)(puVar324 + 10) = uVar320;
            *(undefined8 *)(puVar324 + 0xc) = uVar157;
            *(undefined8 *)(puVar324 + 0xe) = uVar158;
            *(undefined8 *)(puVar324 + 0x10) = uVar159;
            *(undefined8 *)(puVar324 + 0x12) = uVar160;
            *(undefined8 *)(puVar324 + 0x14) = uVar161;
            *(undefined8 *)(puVar324 + 0x16) = uVar476;
            *(undefined8 *)(puVar324 + 0x18) = uVar323;
          }
          uVar334 = *(uint *)(puVar344 + -0x377);
          pbVar337 = (byte *)(lVar326 + 6);
          *(uint *)(puVar344 + -0x378) = uVar334;
          if (*(uint *)(puVar344 + -0x36b) <= uVar334) break;
          *(uint *)(puVar344 + -0x377) = uVar334 + 1;
        }
        pcVar338 = (color_rgba *)puVar344[-0x36d];
      }
    }
LAB_001068bf:
    if ((*(byte *)(puVar344 + -0x379) & 0x10) != 0) {
LAB_00109980:
      if (*(char *)((long)puVar344 + -0x1ab5) == '\0') {
        *(undefined4 *)(puVar344 + -0x378) = 0;
        *(undefined4 *)(puVar344 + -0x368) = 0x1e;
        *(undefined4 *)(puVar344 + -0x36d) = 1;
      }
      else {
        puVar344[-0x209] = __LC3;
        puVar344[-0x208] = _UNK_0010ea88;
        puVar344[-0x38a] = 0x10b222;
        uVar334 = estimate_partition2(4,3,(uint *)&basist::g_bc7_weights2,pcVar338,
                                      (uint *)(puVar344 + -0x209));
        *(uint *)(puVar344 + -0x378) = uVar334;
        uVar315 = uVar334 + 1;
        *(uint *)(puVar344 + -0x36d) = uVar315;
        *(uint *)(puVar344 + -0x368) = uVar315;
        if (uVar315 <= uVar334) goto LAB_001068cd;
      }
      puVar344[-0x369] = pcVar338;
      pcVar346 = (color_cell_compressor_results *)puVar344[-0x382];
      puVar344[-0x35e] = puVar344 + -0x209;
      puVar344[-0x37f] = puVar344 + -0x309;
      puVar344[-0x387] = &basist::g_astc_bc7_common_partitions2;
      puVar344[-0x375] = puVar344 + -0x1ff;
      puVar344[-0x377] = puVar344 + -0x301;
      puVar344[-0x374] = puVar344 + -0x325;
      puVar344[-0x373] = puVar344 + -0x31b;
      puVar344[-0x367] = puVar344 + -0x33f;
      puVar344[-0x366] = puVar344 + -0x339;
      puVar344[-0x36c] = _LC7;
      puVar344[-0x363] = puVar344 + -0x341;
      puVar344[-0x362] = puVar344[-0x385];
      puVar344[-0x37d] = __LC28;
      puVar344[-0x37c] = _UNK_0010eb18;
      while( true ) {
        uVar334 = *(uint *)(puVar344 + -0x378);
        puVar344[-0x345] = 0;
        pcVar356 = (color_cell_compressor_results *)puVar344[-0x388];
        lVar325 = puVar344[-0x369];
        uVar322 = (ulong)*(byte *)(puVar344[-0x387] + (ulong)uVar334 * 6) << 4;
        pcVar350 = pcVar356;
        uVar348 = uVar322;
        do {
          lVar326 = 0;
          do {
            uVar329 = (ulong)*(byte *)((long)&basist::g_bc7_partition2 +
                                      (ulong)(uint)((int)uVar348 + (int)lVar326));
            uVar315 = *(uint *)((long)puVar344 + uVar329 * 4 + -0x1a28);
            *(uint *)(pcVar350 + lVar326 * 4) = uVar315;
            *(uint *)((long)puVar344 + uVar329 * 4 + -0x1a28) = uVar315 + 1;
            lVar343 = lVar326 * 4;
            lVar326 = lVar326 + 1;
            *(undefined4 *)((long)puVar344 + (uVar329 * 0x10 + (ulong)uVar315) * 4 + -0x1848) =
                 *(undefined4 *)(lVar325 + lVar343);
          } while (lVar326 != 4);
          pcVar350 = pcVar350 + 0x10;
          uVar348 = (ulong)((int)uVar348 + 4);
          lVar325 = lVar325 + 0x10;
        } while (pcVar346 != pcVar350);
        pcVar357 = (color_cell_compressor_params *)puVar344[-0x35e];
        uVar345 = *(undefined4 *)(puVar344 + -0x345);
        *(undefined1 (*) [16])pcVar346 = (undefined1  [16])0x0;
        uVar321 = puVar344[-0x381];
        uVar476 = puVar344[-0x380];
        uVar323 = puVar344[-0x37d];
        uVar320 = puVar344[-0x37c];
        *(undefined1 (*) [16])(pcVar346 + 0x10) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])pcVar357 = (undefined1  [16])0x0;
        pbVar14 = (bc7enc_compress_block_params *)puVar344[-900];
        uVar157 = puVar344[-0x363];
        uVar158 = puVar344[-0x362];
        *(undefined1 (*) [16])(pcVar357 + 0x10) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pcVar357 + 0x20) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pcVar357 + 0x30) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pcVar357 + 0x40) = (undefined1  [16])0x0;
        *(undefined4 *)(puVar344 + -0x209) = uVar345;
        uVar318 = puVar344[-0x37f];
        *(undefined1 (*) [16])(pcVar346 + 0x20) = (undefined1  [16])0x0;
        puVar344[-0x206] = uVar321;
        puVar344[-0x205] = uVar476;
        puVar344[-0x202] = uVar323;
        puVar344[-0x201] = uVar320;
        puVar344[-0x328] = uVar157;
        puVar344[-0x327] = uVar158;
        puVar344[-0x208] = uVar318;
        *(undefined4 *)(puVar344 + -0x207) = 4;
        *(undefined4 *)(puVar344 + -0x200) = 1;
        puVar344[-0x38a] = 0x109bb5;
        uVar318 = basisu::color_cell_compression(0xff,pcVar357,pcVar346,pbVar14);
        uVar321 = puVar344[-0x37d];
        uVar476 = puVar344[-0x37c];
        pcVar357 = (color_cell_compressor_params *)puVar344[-0x375];
        uVar323 = puVar344[-0x381];
        uVar320 = puVar344[-0x380];
        pbVar14 = (bc7enc_compress_block_params *)puVar344[-900];
        puVar344[-0x36b] = uVar318;
        uVar345 = *(undefined4 *)((long)puVar344 + -0x1a24);
        pcVar350 = (color_cell_compressor_results *)puVar344[-0x374];
        *(undefined1 (*) [16])pcVar357 = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pcVar357 + 0x10) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pcVar357 + 0x20) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pcVar357 + 0x30) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pcVar357 + 0x40) = (undefined1  [16])0x0;
        *(undefined4 *)(puVar344 + -0x1ff) = uVar345;
        uVar318 = puVar344[-0x377];
        puVar344[-0x1f8] = uVar321;
        puVar344[-0x1f7] = uVar476;
        uVar321 = puVar344[-0x367];
        uVar476 = puVar344[-0x366];
        *(undefined1 (*) [16])pcVar350 = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pcVar350 + 0x10) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pcVar350 + 0x20) = (undefined1  [16])0x0;
        puVar344[-0x1fe] = uVar318;
        *(undefined4 *)(puVar344 + -0x1fd) = 4;
        *(undefined4 *)(puVar344 + -0x1f6) = 1;
        puVar344[-0x1fc] = uVar323;
        puVar344[-0x1fb] = uVar320;
        puVar344[-0x322] = uVar321;
        puVar344[-0x321] = uVar476;
        puVar344[-0x38a] = 0x109c5f;
        uVar318 = basisu::color_cell_compression(0xff,pcVar357,pcVar350,pbVar14);
        lVar325 = puVar344[-0x387];
        puVar344[-0x36a] = uVar318;
        puVar361 = (undefined8 *)puVar344[-0x373];
        for (lVar326 = 0xb; lVar326 != 0; lVar326 = lVar326 + -1) {
          *puVar361 = 0;
          puVar361 = puVar361 + (ulong)bVar363 * -2 + 1;
        }
        *(undefined4 *)((long)puVar344 + -0x18dc) = 8;
        puVar344[-0x31d] = puVar344[-0x36c];
        lVar325 = lVar325 + (ulong)uVar334 * 6;
        cVar314 = *(char *)(lVar325 + 4);
        *(uint *)(puVar344 + -0x31c) = (uint)*(ushort *)(lVar325 + 2);
        *(uint *)(puVar344 + -0x371) = (uint)(cVar314 == '\0');
        uVar348 = (ulong)(cVar314 != '\0');
        lVar325 = uVar348 * 0x30;
        bVar313 = *(byte *)((long)puVar344 + lVar325 + -0x192f);
        bVar5 = *(byte *)((long)puVar344 + lVar325 + -0x192b);
        bVar6 = *(byte *)((long)puVar344 + lVar325 + -0x192a);
        bVar7 = *(byte *)((long)puVar344 + lVar325 + -0x192e);
        bVar8 = *(byte *)((long)puVar344 + lVar325 + -0x192c);
        bVar9 = *(byte *)(puVar344 + uVar348 * 6 + -0x326);
        bVar10 = *(byte *)((ulong)bVar5 * 2 + 0x111818);
        *(uint *)((long)puVar344 + -0x18d3) =
             CONCAT31(CONCAT21(CONCAT11(bVar5,bVar313),bVar8),bVar9);
        *(ushort *)((long)puVar344 + -0x18cf) = CONCAT11(bVar6,bVar7);
        *(undefined2 *)(puVar344 + -0x34b) = 0;
        if ((uint)*(byte *)((long)(int)(uint)bVar8 * 2 + 0x111818) + (uint)bVar10 +
            (uint)*(byte *)((ulong)bVar6 * 2 + 0x111818) <
            (uint)*(byte *)((long)(int)(uint)bVar9 * 2 + 0x111818) +
            (uint)*(byte *)((long)(int)(uint)bVar313 * 2 + 0x111818) +
            (uint)*(byte *)((ulong)bVar7 * 2 + 0x111818)) {
          *(undefined1 *)(puVar344 + -0x34b) = 1;
          *(uint *)((long)puVar344 + -0x18d3) =
               CONCAT31(CONCAT21(CONCAT11(bVar313,bVar5),bVar9),bVar8);
          *(ushort *)((long)puVar344 + -0x18cf) = CONCAT11(bVar7,bVar6);
        }
        lVar325 = (ulong)*(uint *)(puVar344 + -0x371) * 0x30;
        bVar313 = *(byte *)((long)puVar344 + lVar325 + -0x192f);
        bVar5 = *(byte *)((long)puVar344 + lVar325 + -0x192b);
        bVar6 = *(byte *)((long)puVar344 + lVar325 + -0x192a);
        bVar7 = *(byte *)((long)puVar344 + lVar325 + -0x192e);
        bVar8 = *(byte *)((long)puVar344 + lVar325 + -0x192c);
        bVar9 = *(byte *)(puVar344 + (ulong)*(uint *)(puVar344 + -0x371) * 6 + -0x326);
        bVar10 = *(byte *)((ulong)bVar5 * 2 + 0x111818);
        *(uint *)((long)puVar344 + -0x18cd) =
             CONCAT31(CONCAT21(CONCAT11(bVar5,bVar313),bVar8),bVar9);
        *(ushort *)((long)puVar344 + -0x18c9) = CONCAT11(bVar6,bVar7);
        if ((uint)*(byte *)((long)(int)(uint)bVar8 * 2 + 0x111818) + (uint)bVar10 +
            (uint)*(byte *)((ulong)bVar6 * 2 + 0x111818) <
            (uint)*(byte *)((long)(int)(uint)bVar9 * 2 + 0x111818) +
            (uint)*(byte *)((long)(int)(uint)bVar313 * 2 + 0x111818) +
            (uint)*(byte *)((ulong)bVar7 * 2 + 0x111818)) {
          *(undefined1 *)((long)puVar344 + -0x1a57) = 1;
          *(uint *)((long)puVar344 + -0x18cd) =
               CONCAT31(CONCAT21(CONCAT11(bVar313,bVar5),bVar9),bVar8);
          *(ushort *)((long)puVar344 + -0x18c9) = CONCAT11(bVar7,bVar6);
        }
        iVar389 = 0;
        do {
          lVar325 = 0;
          do {
            bVar313 = *(byte *)((long)&basist::g_bc7_partition2 +
                               (ulong)(uint)((int)uVar322 + (int)lVar325));
            uVar348 = (ulong)bVar313;
            if (cVar314 != '\0') {
              uVar348 = (ulong)(1 - bVar313);
            }
            cVar23 = *(char *)((long)puVar344 +
                              (ulong)*(uint *)(pcVar356 + lVar325 * 4) +
                              (ulong)bVar313 * 0x10 + -0x1a08);
            uVar329 = (ulong)(uint)(iVar389 + (int)lVar325);
            cVar22 = *(char *)((long)puVar344 + (uVar348 - 0x1a58));
            *(char *)((long)puVar344 + (uVar329 - 0x18c1)) = cVar23;
            if (cVar22 != '\0') {
              *(char *)((long)puVar344 + (uVar329 - 0x18c1)) = '\x03' - cVar23;
            }
            lVar325 = lVar325 + 1;
          } while (lVar325 != 4);
          iVar389 = iVar389 + 4;
          uVar322 = (ulong)((int)uVar322 + 4);
          pcVar356 = pcVar356 + 0x10;
        } while (iVar389 != 0x10);
        uVar334 = *(uint *)((long)puVar344 + -0x1a9c);
        if (uVar334 < 0x200) {
          *(uint *)((long)puVar344 + -0x1a9c) = uVar334 + 1;
          uVar318 = puVar344[-0x31d];
          uVar321 = puVar344[-0x31c];
          uVar476 = puVar344[-0x31b];
          uVar323 = puVar344[-0x31a];
          puVar324 = (undefined4 *)((ulong)uVar334 * 0x80 + puVar344[-0x37e]);
          uVar345 = *(undefined4 *)(puVar344 + -0x378);
          uVar320 = puVar344[-0x319];
          uVar157 = puVar344[-0x318];
          *(undefined8 *)(puVar324 + 0x1a) = puVar344[-0x311];
          puVar324[1] = uVar345;
          lVar325 = puVar344[-0x36b];
          lVar326 = puVar344[-0x36a];
          *(undefined8 *)(puVar324 + 2) = uVar318;
          *(undefined8 *)(puVar324 + 4) = uVar321;
          uVar318 = puVar344[-0x317];
          uVar321 = puVar344[-0x316];
          uVar158 = puVar344[-0x315];
          uVar159 = puVar344[-0x314];
          *(undefined8 *)(puVar324 + 6) = uVar476;
          *(undefined8 *)(puVar324 + 8) = uVar323;
          uVar476 = puVar344[-0x313];
          uVar323 = puVar344[-0x312];
          *puVar324 = 4;
          *(long *)(puVar324 + 0x1e) = lVar325 + lVar326;
          *(undefined8 *)(puVar324 + 10) = uVar320;
          *(undefined8 *)(puVar324 + 0xc) = uVar157;
          *(undefined8 *)(puVar324 + 0xe) = uVar318;
          *(undefined8 *)(puVar324 + 0x10) = uVar321;
          *(undefined8 *)(puVar324 + 0x12) = uVar158;
          *(undefined8 *)(puVar324 + 0x14) = uVar159;
          *(undefined8 *)(puVar324 + 0x16) = uVar476;
          *(undefined8 *)(puVar324 + 0x18) = uVar323;
        }
        uVar334 = *(uint *)(puVar344 + -0x36d);
        *(uint *)(puVar344 + -0x378) = uVar334;
        if (*(uint *)(puVar344 + -0x368) <= uVar334) break;
        *(uint *)(puVar344 + -0x36d) = uVar334 + 1;
      }
      pcVar338 = (color_rgba *)puVar344[-0x369];
    }
LAB_001068cd:
    if ((*(byte *)(puVar344 + -0x379) & 0x20) != 0) {
      puVar344[-0x378] = puVar344 + 0x1ffb;
      auVar164._8_8_ = _UNK_0010ea78;
      auVar164._0_8_ = __LC0;
      *(undefined1 (*) [16])((long)puVar344 + -0x1844) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])((long)puVar344 + -0x1814) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])((long)puVar344 + -0x1834) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar344 + -0x301) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])((long)puVar344 + -0x1824) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar344 + -0x31b) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar344 + -0x319) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar344 + -0x31d) = (undefined1  [16])0x0;
      *(undefined4 *)(puVar344 + -0x309) = 0x10;
      puVar344[-0x308] = pcVar338;
      *(undefined4 *)(puVar344 + -0x307) = 8;
      *(undefined4 *)(puVar344 + -0x300) = 1;
      puVar344[-0x306] = puVar344[-0x37b];
      puVar344[-0x305] = puVar344[-0x37a];
      *(undefined1 (*) [16])(puVar344 + -0x302) = auVar164;
      puVar344[-0x31a] = puVar344 + 0x1ff9;
      puVar344[-0x319] = puVar344[-0x378];
      puVar344[-0x38a] = 0x109754;
      uVar318 = basisu::color_cell_compression
                          (0xff,(color_cell_compressor_params *)(puVar344 + -0x309),
                           (color_cell_compressor_results *)puVar344[-899],
                           (bc7enc_compress_block_params *)puVar344[-900]);
      bVar313 = *(byte *)((long)puVar344 + -0x18bb);
      bVar5 = *(byte *)((long)puVar344 + -0x18bc);
      bVar6 = *(byte *)((long)puVar344 + -0x18be);
      puVar361 = puVar344 + -0x208;
      for (lVar325 = 0xc; lVar325 != 0; lVar325 = lVar325 + -1) {
        *puVar361 = 0;
        puVar361 = puVar361 + (ulong)bVar363 * -2 + 1;
      }
      bVar7 = *(byte *)((long)puVar344 + -0x18bf);
      bVar8 = *(byte *)(puVar344 + -0x318);
      bVar9 = *(byte *)((long)puVar344 + -0x18ba);
      *(undefined4 *)((long)puVar344 + -0x103c) = 8;
      puVar344[-0x209] = _LC29;
      bVar10 = *(byte *)((ulong)bVar7 * 2 + 0x112818);
      *(uint *)((long)puVar344 + -0x1033) = CONCAT31(CONCAT21(CONCAT11(bVar313,bVar7),bVar5),bVar8);
      *(ushort *)((long)puVar344 + -0x102f) = CONCAT11(bVar9,bVar6);
      bVar18 = (uint)*(byte *)((ulong)bVar9 * 2 + 0x112818) +
               (uint)*(byte *)((long)(int)(uint)bVar5 * 2 + 0x112818) +
               (uint)*(byte *)((long)(int)(uint)bVar313 * 2 + 0x112818) <
               (uint)*(byte *)((long)(int)(uint)bVar8 * 2 + 0x112818) + (uint)bVar10 +
               (uint)*(byte *)((ulong)bVar6 * 2 + 0x112818);
      if (bVar18) {
        *(uint *)((long)puVar344 + -0x1033) =
             CONCAT31(CONCAT21(CONCAT11(bVar7,bVar313),bVar8),bVar5);
        *(ushort *)((long)puVar344 + -0x102f) = CONCAT11(bVar6,bVar9);
      }
      uVar334 = 4;
      do {
        uVar348 = (ulong)(uVar334 - 4);
        cVar314 = *(char *)((long)puVar344 + uVar348 + 0xffc8);
        if (bVar18) {
          while( true ) {
            uVar315 = (int)uVar348 + 1;
            *(char *)((long)puVar344 + (uVar348 - 0x1021)) = '\a' - cVar314;
            if (uVar334 == uVar315) break;
            uVar348 = (ulong)uVar315;
            cVar314 = *(char *)((long)puVar344 + uVar348 + 0xffc8);
          }
        }
        else {
          *(char *)((long)puVar344 + (uVar348 - 0x1021)) = cVar314;
          for (uVar315 = uVar334 - 3; uVar334 != uVar315; uVar315 = uVar315 + 1) {
            *(undefined1 *)((long)puVar344 + ((ulong)uVar315 - 0x1021)) =
                 *(undefined1 *)((long)puVar344 + (ulong)uVar315 + 0xffc8);
          }
        }
        uVar334 = uVar334 + 4;
      } while (uVar334 != 0x14);
      uVar334 = *(uint *)((long)puVar344 + -0x1a9c);
      if (uVar334 < 0x200) {
        uVar476 = puVar344[-0x209];
        uVar323 = puVar344[-0x208];
        *(uint *)((long)puVar344 + -0x1a9c) = uVar334 + 1;
        uVar320 = puVar344[-0x207];
        uVar157 = puVar344[-0x206];
        lVar325 = puVar344[-0x37e] + (ulong)uVar334 * 0x80;
        *(undefined8 *)(puVar344[-0x37e] + (ulong)uVar334 * 0x80) = 5;
        uVar158 = puVar344[-0x205];
        uVar159 = puVar344[-0x204];
        uVar160 = puVar344[-0x203];
        uVar161 = puVar344[-0x202];
        uVar321 = puVar344[-0x1fd];
        *(undefined8 *)(lVar325 + 8) = uVar476;
        *(undefined8 *)(lVar325 + 0x10) = uVar323;
        uVar476 = puVar344[-0x1ff];
        uVar323 = puVar344[-0x1fe];
        *(undefined8 *)(lVar325 + 0x78) = uVar318;
        uVar318 = puVar344[-0x201];
        uVar162 = puVar344[-0x200];
        *(undefined8 *)(lVar325 + 0x68) = uVar321;
        *(undefined8 *)(lVar325 + 0x18) = uVar320;
        *(undefined8 *)(lVar325 + 0x20) = uVar157;
        *(undefined8 *)(lVar325 + 0x28) = uVar158;
        *(undefined8 *)(lVar325 + 0x30) = uVar159;
        *(undefined8 *)(lVar325 + 0x38) = uVar160;
        *(undefined8 *)(lVar325 + 0x40) = uVar161;
        *(undefined8 *)(lVar325 + 0x48) = uVar318;
        *(undefined8 *)(lVar325 + 0x50) = uVar162;
        *(undefined8 *)(lVar325 + 0x58) = uVar476;
        *(undefined8 *)(lVar325 + 0x60) = uVar323;
      }
    }
    uVar318 = _LC1;
    if ((*(byte *)(puVar344 + -0x379) & 0x40) == 0) {
LAB_001068e9:
      if (*(char *)(puVar344 + -0x360) != '\0') {
        uVar334 = (uint)*(byte *)((long)puVar344 + -0x1ab5);
        goto LAB_001064be;
      }
    }
    else {
      puVar324 = (undefined4 *)puVar344[-0x382];
      puVar344[-0x37f] = puVar344 + -0x309;
      puVar328 = puVar344 + 0x1ff9;
      puVar344[-0x36a] = puVar344 + -0x208;
      lVar325 = 0;
      puVar342 = puVar344 + 0x1ffb;
      puVar344[-0x36c] = puVar344 + -0x341;
      puVar344[-0x378] = puVar342;
      puVar355 = puVar344 + -0x209;
      puVar344[-0x37d] = pcVar338;
      puVar361 = &basist::g_astc_unquant;
      puVar344[-0x36d] = puVar328;
      puVar344[-0x36b] = (long)puVar344 + -0x1844;
      puVar344[-0x369] = (long)puVar344 + -0x18e4;
      puVar344[-0x371] = puVar342;
      puVar344[-0x370] = puVar344 + 0x1ff7;
      puVar344[-0x373] = puVar328;
      puVar344[-0x372] = puVar344 + 0x1ff7;
      do {
        puVar349 = (undefined4 *)puVar344[-0x37d];
        puVar319 = puVar324;
        puVar335 = (undefined4 *)puVar344[-0x388];
        do {
          uVar345 = *puVar349;
          puVar336 = puVar335 + 1;
          puVar349 = puVar349 + 1;
          *puVar319 = uVar345;
          *puVar335 = uVar345;
          uVar360 = *(undefined1 *)((long)puVar319 + lVar325);
          *(undefined1 *)((long)puVar335 + lVar325) = 0xff;
          *(undefined1 *)((long)puVar319 + 2) = uVar360;
          *(undefined1 *)((long)puVar319 + 3) = 0xff;
          *(ushort *)puVar319 = CONCAT11(uVar360,uVar360);
          puVar319 = puVar319 + 1;
          puVar335 = puVar336;
        } while (puVar336 != puVar324);
        pauVar17 = (undefined1 (*) [16])puVar344[-0x369];
        pcVar346 = (color_cell_compressor_results *)puVar344[-0x36c];
        uVar476 = puVar344[-0x381];
        uVar323 = puVar344[-0x380];
        pbVar14 = (bc7enc_compress_block_params *)puVar344[-900];
        puVar344[-0x387] = puVar342;
        *pauVar17 = (undefined1  [16])0x0;
        uVar159 = _UNK_0010eb28;
        uVar158 = __LC31;
        pcVar357 = (color_cell_compressor_params *)puVar344[-899];
        uVar320 = puVar344[-0x373];
        uVar157 = puVar344[-0x372];
        pauVar17[3] = (undefined1  [16])0x0;
        pauVar17[1] = (undefined1  [16])0x0;
        pauVar17[2] = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pauVar17[3] + 0xc) = (undefined1  [16])0x0;
        uVar321 = puVar344[-0x388];
        *(undefined1 (*) [16])pcVar346 = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pcVar346 + 0x10) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pcVar346 + 0x20) = (undefined1  [16])0x0;
        puVar344[-0x31a] = uVar476;
        puVar344[-0x319] = uVar323;
        puVar344[-0x316] = uVar158;
        puVar344[-0x315] = uVar159;
        puVar344[-0x33e] = uVar320;
        puVar344[-0x33d] = uVar157;
        *(undefined4 *)(puVar344 + -0x31d) = 0x10;
        puVar344[-0x31c] = uVar321;
        *(undefined4 *)(puVar344 + -0x31b) = 4;
        *(undefined4 *)(puVar344 + -0x314) = 1;
        puVar344[-0x38a] = 0x108c26;
        uVar323 = basisu::color_cell_compression(0xff,pcVar357,pcVar346,pbVar14);
        uVar321 = puVar344[-0x381];
        uVar476 = puVar344[-0x380];
        pcVar346 = (color_cell_compressor_results *)puVar344[-0x385];
        pbVar14 = (bc7enc_compress_block_params *)puVar344[-900];
        pcVar357 = (color_cell_compressor_params *)puVar344[-0x37f];
        puVar344[-0x377] = uVar323;
        pauVar17 = (undefined1 (*) [16])puVar344[-0x36b];
        *(undefined1 (*) [16])pcVar346 = (undefined1  [16])0x0;
        uVar323 = puVar344[-0x371];
        uVar320 = puVar344[-0x370];
        *(undefined1 (*) [16])(pcVar346 + 0x10) = (undefined1  [16])0x0;
        pauVar17[3] = (undefined1  [16])0x0;
        *pauVar17 = (undefined1  [16])0x0;
        pauVar17[1] = (undefined1  [16])0x0;
        pauVar17[2] = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pauVar17[3] + 0xc) = (undefined1  [16])0x0;
        uVar158 = _UNK_0010eb28;
        uVar157 = __LC31;
        puVar344[-0x306] = uVar321;
        puVar344[-0x305] = uVar476;
        *(undefined1 (*) [16])(pcVar346 + 0x20) = (undefined1  [16])0x0;
        *(undefined4 *)(puVar344 + -0x309) = 0x10;
        puVar344[-0x338] = uVar323;
        puVar344[-0x337] = uVar320;
        puVar344[-0x308] = puVar324;
        *(undefined4 *)(puVar344 + -0x307) = 4;
        *(undefined4 *)(puVar344 + -0x300) = 1;
        puVar344[-0x302] = uVar157;
        puVar344[-0x301] = uVar158;
        puVar344[-0x38a] = 0x108cc9;
        uVar321 = basisu::color_cell_compression(0xff,pcVar357,pcVar346,pbVar14);
        cVar21 = _LC5._3_1_;
        cVar22 = _LC5._2_1_;
        cVar23 = _LC5._1_1_;
        cVar314 = (char)_LC5;
        auVar384._8_8_ = extraout_XMM0_Qb_00;
        auVar384._0_8_ = extraout_XMM0_Qa_00;
        puVar342 = (undefined8 *)puVar344[-0x387];
        puVar344[-0x375] = uVar321;
        puVar330 = (undefined8 *)puVar344[-0x36a];
        for (lVar326 = 0xc; uVar321 = _LC32, lVar326 != 0; lVar326 = lVar326 + -1) {
          *puVar330 = 0;
          puVar330 = puVar330 + (ulong)bVar363 * -2 + 1;
        }
        *(undefined1 *)((long)puVar344 + -0x1034) = 1;
        *(int *)(puVar344 + -0x207) = (int)lVar325;
        puVar344[-0x209] = uVar318;
        *(undefined4 *)((long)puVar344 + -0x103c) = 8;
        if (lVar325 == 0) {
          uVar348 = (ulong)*(byte *)(puVar344 + -0x336);
          lVar326 = puVar344[-0x36c];
          uVar322 = (ulong)*(byte *)((long)puVar344 + -0x19ac);
          bVar313 = *(byte *)((long)puVar344 + -0x19df);
          *(byte *)((long)puVar344 + -0x1031) = bVar313;
          *(ushort *)((long)puVar344 + -0x1033) =
               CONCAT11(*(byte *)((long)puVar344 + -0x19ac),*(byte *)(puVar344 + -0x336));
          *(undefined1 *)(puVar344 + -0x387) = *(undefined1 *)((long)puVar344 + -0x19db);
        }
        else {
          uVar348 = (ulong)*(byte *)(puVar344 + -0x33c);
          uVar322 = (ulong)*(byte *)((long)puVar344 + -0x19dc);
          *(ushort *)((long)puVar344 + -0x1033) =
               CONCAT11(*(byte *)((long)puVar344 + -0x19dc),*(byte *)(puVar344 + -0x33c));
          if (lVar325 == 1) {
            lVar326 = puVar344[-0x36c];
            bVar313 = *(byte *)((long)puVar344 + -0x19af);
            *(undefined1 *)(puVar344 + -0x387) = *(undefined1 *)((long)puVar344 + -0x19ab);
            *(byte *)((long)puVar344 + -0x1031) = bVar313;
          }
          else {
            bVar313 = *(byte *)((long)puVar344 + -0x19df);
            lVar326 = puVar344[-0x385];
            *(byte *)((long)puVar344 + -0x1031) = bVar313;
            *(undefined1 *)(puVar344 + -0x387) = *(undefined1 *)((long)puVar344 + -0x19db);
          }
        }
        bVar5 = *(byte *)(lVar326 + 0x2a);
        bVar6 = *(byte *)(lVar326 + 0x2e);
        bVar7 = *(byte *)(uVar348 * 2 + 0x112418);
        *(ushort *)(puVar344 + -0x206) = CONCAT11(bVar5,*(undefined1 *)(puVar344 + -0x387));
        bVar8 = *(byte *)(uVar322 * 2 + 0x112418);
        bVar9 = *(byte *)((ulong)bVar313 * 2 + 0x112418);
        *(int *)(puVar344 + -0x374) = (int)uVar348;
        *(byte *)((long)puVar344 + -0x102e) = bVar6;
        bVar18 = (uint)*(byte *)((ulong)bVar6 * 2 + 0x112418) +
                 (uint)*(byte *)((ulong)*(byte *)(puVar344 + -0x387) * 2 + 0x112418) + (uint)bVar8 <
                 (uint)bVar9 + (uint)bVar7 + (uint)*(byte *)((ulong)bVar5 * 2 + 0x112418);
        if (bVar18) {
          *(uint *)((long)puVar344 + -0x1033) =
               (*(uint *)(puVar344 + -0x374) |
               (uint)CONCAT11(bVar313,*(byte *)(puVar344 + -0x387)) << 8) << 8 | (uint)uVar322;
          *(ushort *)((long)puVar344 + -0x102f) = CONCAT11(bVar5,bVar6);
        }
        lVar326 = 0;
        cVar333 = -bVar18;
        do {
          uVar334 = *(uint *)((long)puVar328 + lVar326);
          uVar315 = *(uint *)((long)puVar342 + lVar326);
          auVar380 = pshuflw(auVar384,ZEXT216(CONCAT11(cVar333,cVar333)),0);
          auVar377 = ~auVar380 & ZEXT416(uVar334) |
                     ZEXT416(CONCAT13(cVar21 - (char)(uVar334 >> 0x18),
                                      CONCAT12(cVar22 - (char)(uVar334 >> 0x10),
                                               CONCAT11(cVar23 - (char)(uVar334 >> 8),
                                                        cVar314 - (char)uVar334)))) & auVar380;
          auVar384 = ~auVar380 & ZEXT416(uVar315) |
                     ZEXT416(CONCAT13(cVar21 - (char)(uVar315 >> 0x18),
                                      CONCAT12(cVar22 - (char)(uVar315 >> 0x10),
                                               CONCAT11(cVar23 - (char)(uVar315 >> 8),
                                                        cVar314 - (char)uVar315)))) & auVar380;
          auVar224._10_6_ = 0;
          auVar224._0_10_ = SUB1610(ZEXT116(auVar384[3]) << 0x38,6);
          auVar223._11_5_ = 0;
          auVar223._0_11_ = SUB1611(auVar224 << 0x30,5);
          auVar436._4_12_ = SUB1612(auVar223 << 0x28,4);
          auVar436[3] = auVar384[1];
          auVar436[2] = auVar377[1];
          auVar436[1] = auVar384[0];
          auVar436[0] = auVar377[0];
          *(int *)((long)puVar344 + lVar326 * 2 + -0x1021) = auVar436._0_4_;
          *(uint *)((long)puVar344 + lVar326 * 2 + -0x101d) =
               CONCAT31(CONCAT21(CONCAT11(auVar384[3],auVar377[3]),auVar384[2]),auVar377[2]);
          lVar326 = lVar326 + 4;
        } while (lVar326 != 0x10);
        uVar334 = *(uint *)((long)puVar344 + -0x1a9c);
        if (uVar334 < 0x200) {
          uVar476 = puVar344[-0x208];
          uVar323 = puVar344[-0x207];
          uVar320 = puVar344[-0x206];
          uVar157 = puVar344[-0x205];
          uVar158 = puVar344[-0x204];
          puVar330 = (undefined8 *)((ulong)uVar334 * 0x80 + puVar344[-0x37e]);
          uVar159 = puVar344[-0x1ff];
          uVar160 = puVar344[-0x1fe];
          *(uint *)((long)puVar344 + -0x1a9c) = uVar334 + 1;
          puVar330[1] = puVar344[-0x209];
          puVar330[2] = uVar476;
          uVar476 = puVar344[-0x203];
          uVar161 = puVar344[-0x202];
          *puVar330 = uVar321;
          uVar321 = puVar344[-0x1fd];
          puVar330[3] = uVar323;
          puVar330[4] = uVar320;
          uVar323 = puVar344[-0x201];
          uVar320 = puVar344[-0x200];
          puVar330[0xd] = uVar321;
          uVar348 = puVar344[-0x375];
          puVar330[5] = uVar157;
          puVar330[6] = uVar158;
          lVar326 = puVar344[-0x377];
          puVar330[7] = uVar476;
          puVar330[8] = uVar161;
          puVar330[9] = uVar323;
          puVar330[10] = uVar320;
          puVar330[0xb] = uVar159;
          puVar330[0xc] = uVar160;
          puVar330[0xf] = lVar326 + uVar348 / 3;
        }
        lVar325 = lVar325 + 1;
      } while (lVar325 != 3);
      pcVar338 = (color_rgba *)puVar344[-0x37d];
      if ((*(byte *)(puVar344 + -0x379) & 0x80) == 0) goto LAB_001068e9;
      if (*(char *)((long)puVar344 + -0x1ab5) == '\0') {
        *(undefined4 *)(puVar344 + -0x371) = 0;
        *(undefined4 *)((long)puVar344 + -0x1ab4) = 0x13;
        *(undefined4 *)(puVar344 + -0x369) = 1;
      }
      else {
        uVar318 = puVar344[-0x37f];
        iVar389 = 0;
        puVar344[-0x37d] = puVar344 + -0x201;
        puVar361 = &basist::g_bc7_3_astc2_patterns2;
        *(undefined4 *)(puVar344 + -0x371) = 0;
        puVar344[-0x377] = &basist::g_astc_unquant;
        puVar344[-0x387] = puVar355;
        uVar348 = 0xffffffffffffffff;
        puVar344[-0x309] = __LC3;
        puVar344[-0x308] = _UNK_0010ea88;
        do {
          puVar344[-0x31d] = 0;
          lVar325 = 0;
          do {
            uVar322 = (ulong)*(byte *)((long)puVar361 + lVar325);
            uVar334 = *(uint *)((long)puVar344 + uVar322 * 4 + -0x18e8);
            *(uint *)((long)puVar344 + uVar322 * 4 + -0x18e8) = uVar334 + 1;
            lVar326 = lVar325 * 4;
            lVar325 = lVar325 + 1;
            *(undefined4 *)((long)puVar344 + (uVar322 * 0x10 + (ulong)uVar334) * 4 + -0x1048) =
                 *(undefined4 *)(pcVar338 + lVar326);
          } while (lVar325 != 0x10);
          if (uVar348 != 0) {
            puVar344[-0x38b] = uVar318;
            puVar344[-0x38c] = 0x10ae50;
            uVar322 = basisu::color_cell_compression_est_astc
                                (4,3,(uint *)&basist::g_bc7_weights2,*(uint *)(puVar344 + -0x31d),
                                 (color_quad_u8 *)puVar344[-0x387],uVar348,(uint *)puVar344[-0x38b])
            ;
            if (uVar322 < uVar348) {
              puVar344[-0x38b] = uVar318;
              puVar344[-0x38c] = 0x10ae85;
              lVar325 = basisu::color_cell_compression_est_astc
                                  (4,3,(uint *)&basist::g_bc7_weights2,
                                   *(uint *)((long)puVar344 + -0x18e4),
                                   (color_quad_u8 *)puVar344[-0x37d],uVar348,
                                   (uint *)puVar344[-0x38b]);
              if (lVar325 + uVar322 < uVar348) {
                *(int *)(puVar344 + -0x371) = iVar389;
                uVar348 = lVar325 + uVar322;
              }
            }
          }
          iVar389 = iVar389 + 1;
          puVar361 = puVar361 + 2;
        } while (iVar389 != 0x13);
        puVar361 = (undefined8 *)puVar344[-0x377];
        puVar355 = (undefined8 *)puVar344[-0x387];
        *(int *)(puVar344 + -0x369) = *(int *)(puVar344 + -0x371) + 1;
        *(int *)((long)puVar344 + -0x1ab4) = *(int *)(puVar344 + -0x371) + 1;
      }
      puVar344[-0x35c] = pcVar338;
      puVar344[-0x356] = puVar355;
      puVar344[-0x359] = puVar344 + -0x33f;
      puVar344[-0x358] = puVar344 + -0x339;
      puVar344[-0x37d] = __LC28;
      puVar344[-0x37c] = _UNK_0010eb18;
      puVar344[-0x36b] =
           (long)&basist::g_bc7_3_astc2_common_partitions + (ulong)*(uint *)(puVar344 + -0x371) * 6;
      puVar344[-0x375] = puVar344 + -0x1ff;
      puVar344[-0x377] = puVar344 + -0x301;
      puVar344[-0x374] = puVar344 + -0x325;
      puVar344[-0x373] = puVar344 + -0x31b;
      puVar344[-0x35b] = puVar344[-0x36c];
      puVar344[-0x35a] = puVar344[-0x385];
      puVar344[-0x36c] = _LC7;
      while( true ) {
        pbVar337 = (byte *)puVar344[-0x36b];
        lVar325 = puVar344[-0x388];
        puVar344[-0x345] = 0;
        puVar344[-0x367] = puVar361;
        lVar326 = puVar344[-0x35c];
        bVar313 = *pbVar337;
        uVar13 = *(undefined2 *)(pbVar337 + 2);
        puVar344[-0x363] = lVar325;
        uVar348 = (ulong)bVar313 << 4;
        *(undefined2 *)(puVar344 + -0x387) = uVar13;
        bVar313 = pbVar337[4];
        *(int *)(puVar344 + -0x368) = (int)uVar348;
        do {
          lVar343 = 0;
          do {
            bVar5 = *(byte *)((long)&basist::g_bc7_partition3 +
                             (ulong)(uint)((int)uVar348 + (int)lVar343));
            puVar344[-0x38a] = 0x1090e1;
            uVar334 = basist::bc7_convert_partition_index_3_to_2((uint)bVar5,(uint)bVar313);
            uVar322 = (ulong)uVar334;
            uVar334 = *(uint *)((long)puVar344 + uVar322 * 4 + -0x1a28);
            *(uint *)(lVar325 + lVar343 * 4) = uVar334;
            *(uint *)((long)puVar344 + uVar322 * 4 + -0x1a28) = uVar334 + 1;
            lVar327 = lVar343 * 4;
            lVar343 = lVar343 + 1;
            *(undefined4 *)((long)puVar344 + (uVar322 * 0x10 + (ulong)uVar334) * 4 + -0x1848) =
                 *(undefined4 *)(lVar326 + lVar327);
          } while (lVar343 != 4);
          uVar348 = (ulong)((int)uVar348 + 4);
          lVar325 = lVar325 + 0x10;
          lVar326 = lVar326 + 0x10;
        } while (puVar344[-0x382] != lVar325);
        uVar345 = *(undefined4 *)(puVar344 + -0x345);
        pcVar346 = (color_cell_compressor_results *)puVar344[-0x382];
        pcVar357 = (color_cell_compressor_params *)puVar344[-0x356];
        pbVar14 = (bc7enc_compress_block_params *)puVar344[-900];
        uVar476 = puVar344[-0x381];
        uVar323 = puVar344[-0x380];
        uVar320 = puVar344[-0x37d];
        uVar157 = puVar344[-0x37c];
        *(undefined1 (*) [16])pcVar346 = (undefined1  [16])0x0;
        *(undefined1 (*) [16])pcVar357 = (undefined1  [16])0x0;
        uVar318 = puVar344[-0x367];
        uVar158 = puVar344[-0x35b];
        uVar159 = puVar344[-0x35a];
        *(undefined1 (*) [16])(pcVar357 + 0x10) = (undefined1  [16])0x0;
        iVar389 = *(int *)(puVar344 + -0x368);
        *(undefined1 (*) [16])(pcVar357 + 0x20) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pcVar357 + 0x30) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pcVar357 + 0x40) = (undefined1  [16])0x0;
        *(undefined4 *)(puVar344 + -0x209) = uVar345;
        uVar321 = puVar344[-0x37f];
        *(undefined1 (*) [16])(pcVar346 + 0x10) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pcVar346 + 0x20) = (undefined1  [16])0x0;
        puVar344[-0x368] = uVar318;
        puVar344[-0x206] = uVar476;
        puVar344[-0x205] = uVar323;
        puVar344[-0x202] = uVar320;
        puVar344[-0x201] = uVar157;
        puVar344[-0x328] = uVar158;
        puVar344[-0x327] = uVar159;
        puVar344[-0x208] = uVar321;
        *(undefined4 *)(puVar344 + -0x207) = 4;
        *(undefined4 *)(puVar344 + -0x200) = 1;
        puVar344[-0x38a] = 0x1091df;
        uVar318 = basisu::color_cell_compression(0xff,pcVar357,pcVar346,pbVar14);
        pcVar357 = (color_cell_compressor_params *)puVar344[-0x375];
        uVar321 = puVar344[-0x37d];
        uVar476 = puVar344[-0x37c];
        puVar344[-0x367] = uVar318;
        uVar345 = *(undefined4 *)((long)puVar344 + -0x1a24);
        pcVar346 = (color_cell_compressor_results *)puVar344[-0x374];
        *(undefined1 (*) [16])pcVar357 = (undefined1  [16])0x0;
        uVar323 = puVar344[-0x381];
        uVar320 = puVar344[-0x380];
        *(undefined1 (*) [16])(pcVar357 + 0x10) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pcVar357 + 0x20) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pcVar357 + 0x30) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pcVar357 + 0x40) = (undefined1  [16])0x0;
        *(undefined4 *)(puVar344 + -0x1ff) = uVar345;
        uVar318 = puVar344[-0x377];
        puVar344[-0x1f8] = uVar321;
        puVar344[-0x1f7] = uVar476;
        uVar321 = puVar344[-0x359];
        uVar476 = puVar344[-0x358];
        *(undefined1 (*) [16])pcVar346 = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pcVar346 + 0x10) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pcVar346 + 0x20) = (undefined1  [16])0x0;
        puVar344[-0x1fe] = uVar318;
        *(undefined4 *)(puVar344 + -0x1fd) = 4;
        *(undefined4 *)(puVar344 + -0x1f6) = 1;
        puVar344[-0x1fc] = uVar323;
        puVar344[-0x1fb] = uVar320;
        puVar344[-0x322] = uVar321;
        puVar344[-0x321] = uVar476;
        puVar344[-0x38a] = 0x109287;
        uVar318 = basisu::color_cell_compression(0xff,pcVar357,pcVar346,pbVar14);
        uVar364 = *(ushort *)(puVar344 + -0x387);
        puVar344[-0x35e] = uVar318;
        bVar5 = *(byte *)((long)puVar344 + -0x192c);
        puVar361 = (undefined8 *)puVar344[-0x373];
        for (lVar325 = 0xb; lVar325 != 0; lVar325 = lVar325 + -1) {
          *puVar361 = 0;
          puVar361 = puVar361 + (ulong)bVar363 * -2 + 1;
        }
        *(uint *)(puVar344 + -0x31c) = (uint)uVar364;
        bVar6 = *(byte *)((long)puVar344 + -0x192e);
        bVar7 = *(byte *)((long)puVar344 + -0x192a);
        *(undefined2 *)(puVar344 + -0x34b) = 0;
        puVar344[-0x31d] = puVar344[-0x36c];
        bVar8 = *(byte *)((long)puVar344 + -0x192f);
        bVar9 = *(byte *)((long)puVar344 + -0x192b);
        bVar10 = *(byte *)(puVar344 + -0x326);
        *(undefined4 *)((long)puVar344 + -0x18dc) = 8;
        lVar325 = puVar344[-0x368];
        bVar11 = *(byte *)(lVar325 + 0x1800 + (ulong)bVar9 * 2);
        *(uint *)((long)puVar344 + -0x18d3) = CONCAT31(CONCAT21(CONCAT11(bVar9,bVar8),bVar5),bVar10)
        ;
        *(ushort *)((long)puVar344 + -0x18cf) = CONCAT11(bVar7,bVar6);
        if ((uint)*(byte *)(lVar325 + 0x1800 + (long)(int)(uint)bVar5 * 2) + (uint)bVar11 +
            (uint)*(byte *)(lVar325 + 0x1800 + (ulong)bVar7 * 2) <
            (uint)*(byte *)(lVar325 + 0x1800 + (long)(int)(uint)bVar10 * 2) +
            (uint)*(byte *)(lVar325 + 0x1800 + (long)(int)(uint)bVar8 * 2) +
            (uint)*(byte *)(lVar325 + 0x1800 + (ulong)bVar6 * 2)) {
          *(undefined1 *)(puVar344 + -0x34b) = 1;
          *(uint *)((long)puVar344 + -0x18d3) =
               CONCAT31(CONCAT21(CONCAT11(bVar8,bVar9),bVar10),bVar5);
          *(ushort *)((long)puVar344 + -0x18cf) = CONCAT11(bVar6,bVar7);
        }
        bVar5 = *(byte *)((long)puVar344 + -0x18ff);
        bVar6 = *(byte *)((long)puVar344 + -0x18fb);
        bVar7 = *(byte *)((long)puVar344 + -0x18fe);
        bVar8 = *(byte *)((long)puVar344 + -0x18fa);
        bVar9 = *(byte *)((long)puVar344 + -0x18fc);
        bVar10 = *(byte *)(puVar344 + -800);
        bVar11 = *(byte *)(lVar325 + 0x1800 + (ulong)bVar6 * 2);
        *(uint *)((long)puVar344 + -0x18cd) = CONCAT31(CONCAT21(CONCAT11(bVar6,bVar5),bVar9),bVar10)
        ;
        *(ushort *)((long)puVar344 + -0x18c9) = CONCAT11(bVar8,bVar7);
        if ((uint)*(byte *)(lVar325 + 0x1800 + (long)(int)(uint)bVar9 * 2) + (uint)bVar11 +
            (uint)*(byte *)(lVar325 + 0x1800 + (ulong)bVar8 * 2) <
            (uint)*(byte *)(lVar325 + 0x1800 + (long)(int)(uint)bVar10 * 2) +
            (uint)*(byte *)(lVar325 + 0x1800 + (long)(int)(uint)bVar5 * 2) +
            (uint)*(byte *)(lVar325 + 0x1800 + (ulong)bVar7 * 2)) {
          *(undefined1 *)((long)puVar344 + -0x1a57) = 1;
          *(uint *)((long)puVar344 + -0x18cd) =
               CONCAT31(CONCAT21(CONCAT11(bVar5,bVar6),bVar10),bVar9);
          *(ushort *)((long)puVar344 + -0x18c9) = CONCAT11(bVar7,bVar8);
        }
        *(uint *)(puVar344 + -0x387) = (uint)bVar313;
        lVar326 = puVar344[-0x363];
        puVar344[-0x368] = lVar325;
        iVar522 = 0;
        do {
          lVar325 = 0;
          do {
            bVar313 = *(byte *)((long)&basist::g_bc7_partition3 +
                               (ulong)(uint)(iVar389 + (int)lVar325));
            puVar344[-0x38a] = 0x1094e7;
            uVar334 = basist::bc7_convert_partition_index_3_to_2
                                ((uint)bVar313,*(uint *)(puVar344 + -0x387));
            cVar314 = *(char *)((long)puVar344 + ((ulong)uVar334 - 0x1a58));
            cVar23 = *(char *)((long)puVar344 +
                              (ulong)*(uint *)(lVar326 + lVar325 * 4) +
                              (ulong)uVar334 * 0x10 + -0x1a08);
            uVar348 = (ulong)(uint)(iVar522 + (int)lVar325);
            *(char *)((long)puVar344 + (uVar348 - 0x18c1)) = cVar23;
            if (cVar314 != '\0') {
              *(char *)((long)puVar344 + (uVar348 - 0x18c1)) = '\x03' - cVar23;
            }
            lVar325 = lVar325 + 1;
          } while (lVar325 != 4);
          iVar522 = iVar522 + 4;
          iVar389 = iVar389 + 4;
          lVar326 = lVar326 + 0x10;
        } while (iVar522 != 0x10);
        uVar334 = *(uint *)((long)puVar344 + -0x1a9c);
        puVar361 = (undefined8 *)puVar344[-0x368];
        if (uVar334 < 0x200) {
          *(uint *)((long)puVar344 + -0x1a9c) = uVar334 + 1;
          uVar318 = puVar344[-0x31d];
          uVar321 = puVar344[-0x31c];
          uVar476 = puVar344[-0x31b];
          uVar323 = puVar344[-0x31a];
          puVar324 = (undefined4 *)((ulong)uVar334 * 0x80 + puVar344[-0x37e]);
          uVar345 = *(undefined4 *)(puVar344 + -0x371);
          uVar320 = puVar344[-0x319];
          uVar157 = puVar344[-0x318];
          *(undefined8 *)(puVar324 + 0x1a) = puVar344[-0x311];
          puVar324[1] = uVar345;
          lVar325 = puVar344[-0x367];
          lVar326 = puVar344[-0x35e];
          *(undefined8 *)(puVar324 + 2) = uVar318;
          *(undefined8 *)(puVar324 + 4) = uVar321;
          uVar318 = puVar344[-0x317];
          uVar321 = puVar344[-0x316];
          uVar158 = puVar344[-0x315];
          uVar159 = puVar344[-0x314];
          *(undefined8 *)(puVar324 + 6) = uVar476;
          *(undefined8 *)(puVar324 + 8) = uVar323;
          uVar476 = puVar344[-0x313];
          uVar323 = puVar344[-0x312];
          *puVar324 = 7;
          *(long *)(puVar324 + 0x1e) = lVar325 + lVar326;
          *(undefined8 *)(puVar324 + 10) = uVar320;
          *(undefined8 *)(puVar324 + 0xc) = uVar157;
          *(undefined8 *)(puVar324 + 0xe) = uVar318;
          *(undefined8 *)(puVar324 + 0x10) = uVar321;
          *(undefined8 *)(puVar324 + 0x12) = uVar158;
          *(undefined8 *)(puVar324 + 0x14) = uVar159;
          *(undefined8 *)(puVar324 + 0x16) = uVar476;
          *(undefined8 *)(puVar324 + 0x18) = uVar323;
        }
        uVar334 = *(uint *)(puVar344 + -0x369);
        puVar344[-0x36b] = puVar344[-0x36b] + 6;
        *(uint *)(puVar344 + -0x371) = uVar334;
        if (*(uint *)((long)puVar344 + -0x1ab4) <= uVar334) break;
        *(uint *)(puVar344 + -0x369) = uVar334 + 1;
      }
      pcVar338 = (color_rgba *)puVar344[-0x35c];
      if ((*(uint *)(puVar344 + -0x379) & 0x40000) == 0) goto LAB_001068e9;
      puVar344[-0x38a] = 0x10b108;
      astc_mode0_or_18(0x12,pcVar338,(uastc_encode_results *)puVar344[-0x37e],
                       (uint *)puVar344[-0x36e],(bc7enc_compress_block_params *)puVar344[-900],
                       (uchar *)0x0);
      if (*(char *)(puVar344 + -0x360) != '\0') {
        *(undefined4 *)(puVar344 + -0x379) = 0xffffffff;
        uVar334 = (uint)*(byte *)((long)puVar344 + -0x1ab5);
        goto LAB_001079b4;
      }
    }
LAB_00106958:
    *(undefined4 *)(puVar344 + -0x387) = *(undefined4 *)((long)puVar344 + -0x1a9c);
LAB_00106963:
    if (*(int *)(puVar344 + -0x387) == 0) {
      puVar341 = (uastc_encode_results *)(puVar344 + -0x19);
      lVar326 = -1;
      puVar361 = (undefined8 *)puVar344[-899];
      for (lVar325 = 0x13; lVar325 != 0; lVar325 = lVar325 + -1) {
        *puVar361 = 0;
        puVar361 = puVar361 + (ulong)bVar363 * -2 + 1;
      }
      lVar325 = -0x78;
      puVar344[-900] = puVar344 + -0x34e;
      goto LAB_0010733b;
    }
  }
  else {
    *(undefined1 *)(puVar344 + -0x360) = 1;
    uVar334 = 0;
    uVar428 = 2;
    uVar345 = 6;
    *(undefined4 *)((long)puVar344 + -0x1a9c) = 0;
    *(undefined1 *)((long)puVar344 + -0x1b02) = 1;
    *(undefined4 *)((long)puVar344 + -0x1af4) = 0xffffffff;
    *(undefined4 *)(puVar344 + -0x35d) = 3;
    *(undefined4 *)(puVar344 + -0x379) = 0xffffffff;
LAB_00106410:
    *(undefined4 *)(puVar344 + -0x346) = 0;
    puVar344[-900] = puVar344 + -0x349;
    *(undefined4 *)((long)puVar344 + -0x1a2c) = uVar428;
    *(undefined4 *)(puVar344 + -0x347) = 1;
    *(undefined4 *)((long)puVar344 + -0x1a34) = uVar345;
    puVar344[-0x349] = __LC21;
    puVar344[-0x348] = _UNK_0010eae8;
    if (*(char *)((long)puVar344 + -0x1b04) == '\0') {
      puVar344[-0x382] = puVar344 + -0x32b;
      puVar344[-0x388] = puVar344 + -0x333;
      puVar344[-899] = puVar344 + -0x31d;
LAB_00106486:
      puVar344[-0x37e] = puVar344 + -9;
      puVar344[-0x36e] = (long)puVar344 + -0x1a9c;
      puVar344[-0x385] = puVar344 + -0x33b;
      if (*(char *)((long)puVar344 + -0x1b03) == '\0') {
        *(char *)((long)puVar344 + -0x1ab5) = (char)uVar334;
        goto LAB_00106872;
      }
LAB_001064be:
      puVar361 = &basist::g_astc_unquant;
      puVar344[-0x37f] = puVar344 + -0x309;
      puVar344[-0x36d] = puVar344 + 0x1ff9;
      puVar344[-0x378] = puVar344 + 0x1ffb;
      puVar344[-0x36a] = puVar344 + -0x208;
      if ((*(uint *)(puVar344 + -0x379) & 0x200) != 0) goto LAB_001079b4;
      uVar334 = *(uint *)(puVar344 + -0x379);
    }
    else {
      auVar380 = *(undefined1 (*) [16])pcVar338;
      auVar377 = *(undefined1 (*) [16])(pcVar338 + 0x10);
      auVar379 = *(undefined1 (*) [16])(pcVar338 + 0x30);
      *(undefined1 (*) [16])(puVar344 + -0x301) = (undefined1  [16])0x0;
      auVar377 = auVar377 & __LC6;
      auVar380 = auVar380 & __LC6;
      auVar379 = auVar379 & __LC6;
      *(undefined1 (*) [16])(puVar344 + -0x309) = (undefined1  [16])0x0;
      sVar394 = auVar380._0_2_;
      sVar554 = auVar380._2_2_;
      auVar382[1] = (0 < sVar554) * (sVar554 < 0x100) * auVar380[2] - (0xff < sVar554);
      auVar382[0] = (0 < sVar394) * (sVar394 < 0x100) * auVar380[0] - (0xff < sVar394);
      sVar394 = auVar380._4_2_;
      auVar382[2] = (0 < sVar394) * (sVar394 < 0x100) * auVar380[4] - (0xff < sVar394);
      sVar394 = auVar380._6_2_;
      auVar382[3] = (0 < sVar394) * (sVar394 < 0x100) * auVar380[6] - (0xff < sVar394);
      sVar394 = auVar380._8_2_;
      auVar382[4] = (0 < sVar394) * (sVar394 < 0x100) * auVar380[8] - (0xff < sVar394);
      sVar394 = auVar380._10_2_;
      auVar382[5] = (0 < sVar394) * (sVar394 < 0x100) * auVar380[10] - (0xff < sVar394);
      sVar394 = auVar380._12_2_;
      auVar382[6] = (0 < sVar394) * (sVar394 < 0x100) * auVar380[0xc] - (0xff < sVar394);
      sVar394 = auVar380._14_2_;
      auVar382[7] = (0 < sVar394) * (sVar394 < 0x100) * auVar380[0xe] - (0xff < sVar394);
      sVar394 = auVar377._0_2_;
      auVar382[8] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[0] - (0xff < sVar394);
      sVar394 = auVar377._2_2_;
      auVar382[9] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[2] - (0xff < sVar394);
      sVar394 = auVar377._4_2_;
      auVar382[10] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[4] - (0xff < sVar394);
      sVar394 = auVar377._6_2_;
      auVar382[0xb] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[6] - (0xff < sVar394);
      sVar394 = auVar377._8_2_;
      auVar382[0xc] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[8] - (0xff < sVar394);
      sVar394 = auVar377._10_2_;
      auVar382[0xd] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[10] - (0xff < sVar394);
      sVar394 = auVar377._12_2_;
      auVar382[0xe] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[0xc] - (0xff < sVar394);
      sVar394 = auVar377._14_2_;
      auVar382[0xf] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[0xe] - (0xff < sVar394);
      auVar380 = *(undefined1 (*) [16])(pcVar338 + 0x20);
      *(undefined1 (*) [16])(puVar344 + -0x307) = (undefined1  [16])0x0;
      puVar361 = &basist::g_astc_unquant;
      auVar382 = auVar382 & __LC6;
      *(undefined1 (*) [16])(puVar344 + -0x305) = (undefined1  [16])0x0;
      auVar380 = auVar380 & __LC6;
      *(undefined1 (*) [16])(puVar344 + -0x303) = (undefined1  [16])0x0;
      sVar394 = auVar380._0_2_;
      sVar554 = auVar380._2_2_;
      auVar397[1] = (0 < sVar554) * (sVar554 < 0x100) * auVar380[2] - (0xff < sVar554);
      auVar397[0] = (0 < sVar394) * (sVar394 < 0x100) * auVar380[0] - (0xff < sVar394);
      sVar394 = auVar380._4_2_;
      auVar397[2] = (0 < sVar394) * (sVar394 < 0x100) * auVar380[4] - (0xff < sVar394);
      sVar394 = auVar380._6_2_;
      auVar397[3] = (0 < sVar394) * (sVar394 < 0x100) * auVar380[6] - (0xff < sVar394);
      sVar394 = auVar380._8_2_;
      auVar397[4] = (0 < sVar394) * (sVar394 < 0x100) * auVar380[8] - (0xff < sVar394);
      sVar394 = auVar380._10_2_;
      auVar397[5] = (0 < sVar394) * (sVar394 < 0x100) * auVar380[10] - (0xff < sVar394);
      sVar394 = auVar380._12_2_;
      auVar397[6] = (0 < sVar394) * (sVar394 < 0x100) * auVar380[0xc] - (0xff < sVar394);
      sVar394 = auVar380._14_2_;
      auVar397[7] = (0 < sVar394) * (sVar394 < 0x100) * auVar380[0xe] - (0xff < sVar394);
      sVar394 = auVar379._0_2_;
      auVar397[8] = (0 < sVar394) * (sVar394 < 0x100) * auVar379[0] - (0xff < sVar394);
      sVar394 = auVar379._2_2_;
      auVar397[9] = (0 < sVar394) * (sVar394 < 0x100) * auVar379[2] - (0xff < sVar394);
      sVar394 = auVar379._4_2_;
      auVar397[10] = (0 < sVar394) * (sVar394 < 0x100) * auVar379[4] - (0xff < sVar394);
      sVar394 = auVar379._6_2_;
      auVar397[0xb] = (0 < sVar394) * (sVar394 < 0x100) * auVar379[6] - (0xff < sVar394);
      sVar394 = auVar379._8_2_;
      auVar397[0xc] = (0 < sVar394) * (sVar394 < 0x100) * auVar379[8] - (0xff < sVar394);
      sVar394 = auVar379._10_2_;
      auVar397[0xd] = (0 < sVar394) * (sVar394 < 0x100) * auVar379[10] - (0xff < sVar394);
      sVar394 = auVar379._12_2_;
      auVar397[0xe] = (0 < sVar394) * (sVar394 < 0x100) * auVar379[0xc] - (0xff < sVar394);
      sVar394 = auVar379._14_2_;
      auVar397[0xf] = (0 < sVar394) * (sVar394 < 0x100) * auVar379[0xe] - (0xff < sVar394);
      auVar380 = *(undefined1 (*) [16])(pcVar338 + 0x30);
      puVar344[-0x37f] = (color_cell_compressor_params *)(puVar344 + -0x309);
      auVar397 = __LC6 & auVar397;
      auVar377 = *(undefined1 (*) [16])(pcVar338 + 0x10);
      puVar344[-0x388] = (color_cell_compressor_results *)(puVar344 + -0x333);
      sVar394 = auVar382._0_2_;
      sVar554 = auVar382._2_2_;
      sVar413 = auVar382._4_2_;
      sVar562 = auVar382._6_2_;
      sVar415 = auVar382._8_2_;
      cVar314 = (0 < sVar415) * (sVar415 < 0x100) * auVar382[8] - (0xff < sVar415);
      sVar415 = auVar382._10_2_;
      cVar25 = (0 < sVar415) * (sVar415 < 0x100) * auVar382[10] - (0xff < sVar415);
      sVar415 = auVar382._12_2_;
      cVar24 = (0 < sVar415) * (sVar415 < 0x100) * auVar382[0xc] - (0xff < sVar415);
      sVar415 = auVar382._14_2_;
      cVar19 = (0 < sVar415) * (sVar415 < 0x100) * auVar382[0xe] - (0xff < sVar415);
      sVar415 = auVar397._0_2_;
      bVar313 = (0 < sVar415) * (sVar415 < 0x100) * auVar397[0] - (0xff < sVar415);
      uVar364 = CONCAT11(bVar313,cVar19);
      sVar415 = auVar397._2_2_;
      cVar20 = (0 < sVar415) * (sVar415 < 0x100) * auVar397[2] - (0xff < sVar415);
      uVar225 = CONCAT12(cVar20,uVar364);
      sVar415 = auVar397._4_2_;
      cVar333 = (0 < sVar415) * (sVar415 < 0x100) * auVar397[4] - (0xff < sVar415);
      uVar315 = CONCAT13(cVar333,uVar225);
      sVar415 = auVar397._6_2_;
      cVar21 = (0 < sVar415) * (sVar415 < 0x100) * auVar397[6] - (0xff < sVar415);
      uVar273 = CONCAT14(cVar21,uVar315);
      sVar415 = auVar397._8_2_;
      bVar5 = (0 < sVar415) * (sVar415 < 0x100) * auVar397[8] - (0xff < sVar415);
      auVar310[5] = bVar5;
      auVar310._0_5_ = uVar273;
      sVar415 = auVar397._10_2_;
      cVar22 = (0 < sVar415) * (sVar415 < 0x100) * auVar397[10] - (0xff < sVar415);
      sVar415 = auVar397._12_2_;
      cVar23 = (0 < sVar415) * (sVar415 < 0x100) * auVar397[0xc] - (0xff < sVar415);
      sVar415 = auVar397._14_2_;
      auVar379 = *(undefined1 (*) [16])pcVar338;
      uVar418 = auVar380._2_2_ >> 8;
      uVar420 = auVar380._6_2_ >> 8;
      uVar422 = auVar380._10_2_ >> 8;
      uVar424 = auVar380._14_2_ >> 8;
      *(undefined1 (*) [16])(puVar344 + -0x333) = (undefined1  [16])0x0;
      uVar390 = auVar377._2_2_ >> 8;
      uVar391 = auVar377._6_2_ >> 8;
      uVar392 = auVar377._10_2_ >> 8;
      uVar393 = auVar377._14_2_ >> 8;
      *(undefined1 (*) [16])(puVar344 + -0x331) = (undefined1  [16])0x0;
      uVar385 = auVar379._2_2_ >> 8;
      uVar386 = auVar379._6_2_ >> 8;
      auVar529._2_2_ = auVar379._8_2_ >> 8;
      auVar529._0_2_ = uVar386;
      uVar387 = auVar379._10_2_ >> 8;
      auVar529._4_2_ = uVar387;
      auVar529._6_2_ = auVar379._12_2_ >> 8;
      uVar388 = auVar379._14_2_ >> 8;
      auVar529._8_2_ = uVar388;
      auVar529._10_6_ = 0;
      puVar344[-0x382] = puVar344 + -0x32b;
      cVar26 = (uVar385 != 0) * (uVar385 < 0x100) * auVar379[3] - (0xff < uVar385);
      auVar107._1_14_ = SUB1614(auVar529 << 0x30,2);
      auVar107[0] = cVar26;
      bVar12 = (uVar386 != 0) * (uVar386 < 0x100) * auVar379[7] - (0xff < uVar386);
      bVar11 = (uVar387 != 0) * (uVar387 < 0x100) * auVar379[0xb] - (0xff < uVar387);
      bVar10 = (uVar388 != 0) * (uVar388 < 0x100) * auVar379[0xf] - (0xff < uVar388);
      bVar9 = (uVar390 != 0) * (uVar390 < 0x100) * auVar377[3] - (0xff < uVar390);
      bVar8 = (uVar391 != 0) * (uVar391 < 0x100) * auVar377[7] - (0xff < uVar391);
      bVar7 = (uVar392 != 0) * (uVar392 < 0x100) * auVar377[0xb] - (0xff < uVar392);
      bVar6 = (uVar393 != 0) * (uVar393 < 0x100) * auVar377[0xf] - (0xff < uVar393);
      auVar377 = *(undefined1 (*) [16])(pcVar338 + 0x20);
      puVar344[-0x308] = puVar344 + -0x32b;
      uVar385 = (ushort)(((uint)bVar12 << 0x18) >> 0x18);
      uVar386 = (ushort)(((uint6)bVar11 << 0x28) >> 0x28);
      uVar387 = (ushort)(((ulong)bVar10 << 0x38) >> 0x38);
      uVar388 = (ushort)((uint3)((uint3)bVar9 << 0x10) >> 0x10);
      uVar390 = (ushort)(((uint5)bVar8 << 0x20) >> 0x20);
      uVar391 = (ushort)(((uint7)bVar7 << 0x30) >> 0x30);
      uVar392 = (ushort)((uint3)((uint3)bVar6 << 0x10) >> 0x10);
      puVar344[-0x306] = puVar344[-0x365];
      puVar344[-0x305] = puVar344[-0x364];
      uVar393 = auVar377._2_2_ >> 8;
      uVar412 = auVar377._6_2_ >> 8;
      auVar541._2_2_ = auVar377._8_2_ >> 8;
      auVar541._0_2_ = uVar412;
      uVar414 = auVar377._10_2_ >> 8;
      auVar541._4_2_ = uVar414;
      auVar541._6_2_ = auVar377._12_2_ >> 8;
      uVar416 = auVar377._14_2_ >> 8;
      auVar541._8_2_ = uVar416;
      auVar541._10_6_ = 0;
      *(undefined4 *)(puVar344 + -0x309) = 0x10;
      cVar27 = (uVar393 != 0) * (uVar393 < 0x100) * auVar377[3] - (0xff < uVar393);
      auVar108._1_14_ = SUB1614(auVar541 << 0x30,2);
      auVar108[0] = cVar27;
      bVar53 = (uVar412 != 0) * (uVar412 < 0x100) * auVar377[7] - (0xff < uVar412);
      bVar54 = (uVar414 != 0) * (uVar414 < 0x100) * auVar377[0xb] - (0xff < uVar414);
      bVar48 = (uVar416 != 0) * (uVar416 < 0x100) * auVar377[0xf] - (0xff < uVar416);
      bVar47 = (uVar418 != 0) * (uVar418 < 0x100) * auVar380[3] - (0xff < uVar418);
      bVar46 = (uVar420 != 0) * (uVar420 < 0x100) * auVar380[7] - (0xff < uVar420);
      bVar49 = (uVar422 != 0) * (uVar422 < 0x100) * auVar380[0xb] - (0xff < uVar422);
      bVar52 = (uVar424 != 0) * (uVar424 < 0x100) * auVar380[0xf] - (0xff < uVar424);
      *(undefined4 *)(puVar344 + -0x307) = 0x10;
      uVar393 = (ushort)(((uint)bVar53 << 0x18) >> 0x18);
      uVar412 = (ushort)(((uint6)bVar54 << 0x28) >> 0x28);
      uVar414 = (ushort)(((ulong)bVar48 << 0x38) >> 0x38);
      uVar416 = (ushort)((uint3)((uint3)bVar47 << 0x10) >> 0x10);
      uVar418 = (ushort)(((uint5)bVar46 << 0x20) >> 0x20);
      uVar420 = (ushort)(((uint7)bVar49 << 0x30) >> 0x30);
      uVar422 = (ushort)((uint3)((uint3)bVar52 << 0x10) >> 0x10);
      *(undefined1 *)((long)puVar344 + -0x17fc) = 1;
      *(undefined4 *)(puVar344 + -0x300) = 1;
      auVar368._0_10_ = (unkuint10)bVar5 << 0x40;
      auVar368[10] = cVar22;
      auVar371[0xb] = 0;
      auVar371._0_11_ = auVar368;
      auVar372[0xc] = cVar23;
      auVar372._0_12_ = auVar371;
      auVar310._6_8_ = 0;
      auVar129[0xe] = cVar19;
      auVar129._0_14_ = auVar310 << 0x38;
      auVar293._4_8_ = 0;
      auVar293._0_4_ = uVar315;
      auVar142._12_3_ = (int3)(CONCAT26(auVar129._13_2_,CONCAT15(cVar24,uVar273)) >> 0x28);
      auVar142._0_12_ = auVar293 << 0x38;
      auVar155._10_5_ = (int5)(CONCAT44(auVar142._11_4_,CONCAT13(cVar25,uVar225)) >> 0x18);
      auVar155._0_10_ = (unkuint10)uVar364 << 0x38;
      auVar215._7_8_ = 0;
      auVar215._0_7_ = (uint7)(CONCAT62(auVar155._9_6_,CONCAT11(cVar314,cVar19)) >> 8);
      auVar216._8_7_ = 0;
      auVar216._0_8_ = SUB158(auVar215 << 0x40,7);
      auVar217._9_6_ = 0;
      auVar217._0_9_ = SUB159(auVar216 << 0x38,6);
      auVar218._10_5_ = 0;
      auVar218._0_10_ = SUB1510(auVar217 << 0x30,5);
      auVar219._11_4_ = 0;
      auVar219._0_11_ = SUB1511(auVar218 << 0x28,4);
      auVar220._12_3_ = 0;
      auVar220._0_12_ = SUB1512(auVar219 << 0x20,3);
      auVar398[1] = 0;
      auVar398[0] = (0 < sVar394) * (sVar394 < 0x100) * auVar382[0] - (0xff < sVar394);
      auVar156._13_2_ = 0;
      auVar156._0_13_ = SUB1513(auVar220 << 0x18,2);
      auVar156 = auVar156 << 0x10;
      auVar404._0_14_ = auVar156._0_14_;
      auVar404[0xe] = 0;
      auVar404[0xf] = (uVar387 != 0) * (uVar387 < 0x100) * bVar10 - (0xff < uVar387);
      auVar403._14_2_ = auVar404._14_2_;
      auVar403._0_13_ = auVar156._0_13_;
      auVar403[0xd] = 0;
      auVar402._13_3_ = auVar403._13_3_;
      auVar402._0_12_ = auVar156._0_12_;
      auVar402[0xc] = (0 < sVar562) * (sVar562 < 0x100) * auVar382[6] - (0xff < sVar562);
      auVar401._12_4_ = auVar402._12_4_;
      auVar401._0_11_ = auVar156._0_11_;
      auVar401[0xb] = (uVar386 != 0) * (uVar386 < 0x100) * bVar11 - (0xff < uVar386);
      auVar400._11_5_ = auVar401._11_5_;
      auVar400._0_10_ = auVar156._0_10_;
      auVar400[10] = 0;
      auVar399._10_6_ = auVar400._10_6_;
      auVar399._0_9_ = auVar156._0_9_;
      auVar399[9] = 0;
      auVar376._2_7_ = auVar399._9_7_;
      auVar376[1] = (0 < sVar413) * (sVar413 < 0x100) * auVar382[4] - (0xff < sVar413);
      auVar376[0] = (uVar385 != 0) * (uVar385 < 0x100) * bVar12 - (0xff < uVar385);
      auVar376._9_7_ = 0;
      auVar379._10_6_ = 0;
      auVar379._0_10_ = SUB1610(auVar376 << 0x38,6);
      auVar377._2_11_ = SUB1611(auVar379 << 0x30,5);
      auVar377[1] = (0 < sVar554) * (sVar554 < 0x100) * auVar382[2] - (0xff < sVar554);
      auVar377[0] = (cVar26 != '\0') * (auVar107._0_2_ < 0x100) * cVar26 - (0xff < auVar107._0_2_);
      auVar377._13_3_ = 0;
      auVar398._2_14_ = SUB1614(auVar377 << 0x18,2);
      *(char *)(puVar344 + -0x329) = cVar314;
      *(undefined1 *)((long)puVar344 + -0x1947) = 0;
      *(undefined1 *)((long)puVar344 + -0x1946) = 0;
      *(byte *)((long)puVar344 + -0x1945) =
           (uVar388 != 0) * (uVar388 < 0x100) * bVar9 - (0xff < uVar388);
      *(char *)((long)puVar344 + -0x1944) = cVar25;
      *(undefined1 *)((long)puVar344 + -0x1943) = 0;
      *(undefined1 *)((long)puVar344 + -0x1942) = 0;
      *(byte *)((long)puVar344 + -0x1941) =
           (uVar390 != 0) * (uVar390 < 0x100) * bVar8 - (0xff < uVar390);
      *(char *)(puVar344 + -0x328) = cVar24;
      *(undefined1 *)((long)puVar344 + -0x193f) = 0;
      *(undefined1 *)((long)puVar344 + -0x193e) = 0;
      *(byte *)((long)puVar344 + -0x193d) =
           (uVar391 != 0) * (uVar391 < 0x100) * bVar7 - (0xff < uVar391);
      *(char *)((long)puVar344 + -0x193c) = cVar19;
      *(undefined1 *)((long)puVar344 + -0x193b) = 0;
      *(undefined1 *)((long)puVar344 + -0x193a) = 0;
      *(byte *)((long)puVar344 + -0x1939) =
           (uVar392 != 0) * (uVar392 < 0x100) * bVar6 - (0xff < uVar392);
      auVar380._8_8_ = _UNK_0010ea78;
      auVar380._0_8_ = __LC0;
      *(undefined1 (*) [16])(puVar344 + -0x32b) = auVar398;
      auVar411._13_2_ = 0;
      auVar411._0_13_ = auVar372;
      auVar411[0xf] = (uVar414 != 0) * (uVar414 < 0x100) * bVar48 - (0xff < uVar414);
      auVar410._14_2_ = auVar411._14_2_;
      auVar410[0xd] = 0;
      auVar410._0_13_ = auVar372;
      auVar409._13_3_ = auVar410._13_3_;
      auVar409[0xc] = cVar21;
      auVar409._0_12_ = auVar371;
      auVar408._12_4_ = auVar409._12_4_;
      auVar408[0xb] = (uVar412 != 0) * (uVar412 < 0x100) * bVar54 - (0xff < uVar412);
      auVar408._0_11_ = auVar368;
      auVar407._11_5_ = auVar408._11_5_;
      auVar407._0_11_ = ZEXT111(bVar5) << 0x40;
      auVar406._10_6_ = auVar407._10_6_;
      auVar406._0_10_ = (unkuint10)bVar5 << 0x40;
      auVar505._2_7_ = auVar406._9_7_;
      auVar505[1] = cVar333;
      auVar505[0] = (uVar393 != 0) * (uVar393 < 0x100) * bVar53 - (0xff < uVar393);
      auVar505._9_7_ = 0;
      auVar504._10_6_ = 0;
      auVar504._0_10_ = SUB1610(auVar505 << 0x38,6);
      auVar483._2_11_ = SUB1611(auVar504 << 0x30,5);
      auVar483[1] = cVar20;
      auVar483[0] = (cVar27 != '\0') * (auVar108._0_2_ < 0x100) * cVar27 - (0xff < auVar108._0_2_);
      auVar483._13_3_ = 0;
      auVar405._2_14_ = SUB1614(auVar483 << 0x18,2);
      auVar405[1] = 0;
      auVar405[0] = bVar313;
      *(byte *)(puVar344 + -0x325) = bVar5;
      *(undefined1 *)((long)puVar344 + -0x1927) = 0;
      *(undefined1 *)((long)puVar344 + -0x1926) = 0;
      *(byte *)((long)puVar344 + -0x1925) =
           (uVar416 != 0) * (uVar416 < 0x100) * bVar47 - (0xff < uVar416);
      *(char *)((long)puVar344 + -0x1924) = cVar22;
      *(undefined1 *)((long)puVar344 + -0x1923) = 0;
      *(undefined1 *)((long)puVar344 + -0x1922) = 0;
      *(byte *)((long)puVar344 + -0x1921) =
           (uVar418 != 0) * (uVar418 < 0x100) * bVar46 - (0xff < uVar418);
      *(char *)(puVar344 + -0x324) = cVar23;
      *(undefined1 *)((long)puVar344 + -0x191f) = 0;
      *(undefined1 *)((long)puVar344 + -0x191e) = 0;
      *(byte *)((long)puVar344 + -0x191d) =
           (uVar420 != 0) * (uVar420 < 0x100) * bVar49 - (0xff < uVar420);
      *(char *)((long)puVar344 + -0x191c) =
           (0 < sVar415) * (sVar415 < 0x100) * auVar397[0xe] - (0xff < sVar415);
      *(undefined1 *)((long)puVar344 + -0x191b) = 0;
      *(undefined1 *)((long)puVar344 + -0x191a) = 0;
      *(byte *)((long)puVar344 + -0x1919) =
           (uVar422 != 0) * (uVar422 < 0x100) * bVar52 - (0xff < uVar422);
      *(undefined1 (*) [16])(puVar344 + -0x327) = auVar405;
      *(undefined1 (*) [16])(puVar344 + -0x302) = auVar380;
      *(undefined1 (*) [16])(puVar344 + -0x32f) = (undefined1  [16])0x0;
      puVar344[-0x378] = puVar344 + 0x1ffb;
      puVar344[-0x36d] = puVar344 + 0x1ff9;
      puVar344[-0x330] = puVar344 + 0x1ff9;
      puVar344[-0x32f] = puVar344[-0x378];
      puVar344[-0x38a] = 0x107707;
      basisu::color_cell_compression
                (0xff,(color_cell_compressor_params *)(puVar344 + -0x309),
                 (color_cell_compressor_results *)(puVar344 + -0x333),
                 (bc7enc_compress_block_params *)puVar344[-900]);
      puVar344[-0x36a] = puVar344 + -0x208;
      bVar313 = *(byte *)((long)puVar344 + -0x196c);
      puVar328 = puVar344 + -0x208;
      for (lVar325 = 0xc; lVar325 != 0; lVar325 = lVar325 + -1) {
        *puVar328 = 0;
        puVar328 = puVar328 + (ulong)bVar363 * -2 + 1;
      }
      *(undefined4 *)((long)puVar344 + -0x103c) = 4;
      puVar344[-899] = puVar344 + -0x31d;
      puVar344[-0x209] = _LC22;
      *(undefined8 *)((long)puVar344 + -0x1021) = puVar344[0x1ff9];
      *(undefined8 *)((long)puVar344 + -0x1019) = puVar344[0x1ffa];
      uVar360 = *(undefined1 *)((ulong)bVar313 * 2 + 0x112818);
      uVar359 = *(undefined1 *)((ulong)*(byte *)(puVar344 + -0x32e) * 2 + 0x112818);
      *(uint *)((long)puVar344 + -0x1033) =
           CONCAT31(CONCAT21(CONCAT11(*(byte *)((long)puVar344 + -0x1969),
                                      *(byte *)((long)puVar344 + -0x196d)),bVar313),
                    *(byte *)(puVar344 + -0x32e));
      *(uint *)(puVar344 + -0x31d) =
           CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                       ((ulong)*(byte *)((long)puVar344 + -0x196d) * 2 + 0x112818),
                                      uVar359),uVar359),uVar359);
      lVar325 = 1;
      *(uint *)((long)puVar344 + -0x18ac) =
           CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                       ((ulong)*(byte *)((long)puVar344 + -0x1969) * 2 + 0x112818),
                                      uVar360),uVar360),uVar360);
      do {
        iVar389 = *(int *)((long)&basist::g_astc_weights4 + lVar325 * 4);
        pbVar337 = (byte *)(puVar344 + -0x31d);
        do {
          pbVar337[lVar325 * 4] =
               (byte)(((uint)pbVar337[0x3c] * iVar389 + (uint)*pbVar337 * (0x40 - iVar389)) * 0x101
                      + 0x20 >> 0xe);
          pbVar337 = pbVar337 + 1;
        } while (pbVar337 != (byte *)((long)puVar344 + -0x18e4));
        lVar325 = lVar325 + 1;
      } while (lVar325 != 0xf);
      lVar325 = 0;
      lVar326 = 0;
      do {
        pbVar337 = (byte *)(puVar344[-0x36d] + lVar325);
        iVar522 = (uint)(byte)pcVar338[lVar325 * 4] -
                  (uint)*(byte *)((long)puVar344 + (ulong)*pbVar337 * 4 + -0x18e8);
        lVar343 = lVar325 * 4;
        lVar325 = lVar325 + 1;
        iVar389 = (uint)(byte)pcVar338[lVar343 + 3] -
                  (uint)*(byte *)((long)puVar344 + (ulong)*pbVar337 * 4 + -0x18e5);
        lVar326 = lVar326 + (ulong)(uint)(iVar389 * iVar389 + iVar522 * iVar522);
      } while (lVar325 != 0x10);
      puVar344[-9] = 0xf;
      puVar344[6] = lVar326;
      puVar344[-8] = puVar344[-0x209];
      puVar344[-7] = puVar344[-0x208];
      puVar344[-6] = puVar344[-0x207];
      puVar344[-5] = puVar344[-0x206];
      puVar344[4] = puVar344[-0x1fd];
      *(undefined4 *)((long)puVar344 + -0x1a9c) = 1;
      puVar344[-4] = puVar344[-0x205];
      puVar344[-3] = puVar344[-0x204];
      puVar344[-2] = puVar344[-0x203];
      puVar344[-1] = puVar344[-0x202];
      *puVar344 = puVar344[-0x201];
      puVar344[1] = puVar344[-0x200];
      puVar344[2] = puVar344[-0x1ff];
      puVar344[3] = puVar344[-0x1fe];
      if ((*(uint *)(puVar344 + -0x379) & 0x10000) == 0) {
        if ((*(uint *)(puVar344 + -0x379) & 0x20000) == 0) goto LAB_00106486;
        puVar344[-0x37e] = puVar344 + -9;
        puVar344[-0x36e] = (long)puVar344 + -0x1a9c;
      }
      else {
        puVar344[-0x36e] = (uint *)((long)puVar344 + -0x1a9c);
        puVar344[-0x37e] = (uastc_encode_results *)(puVar344 + -9);
        puVar344[-0x38a] = 0x10796b;
        astc_mode9_or_16(0x10,pcVar338,(uastc_encode_results *)(puVar344 + -9),
                         (uint *)((long)puVar344 + -0x1a9c),
                         (bc7enc_compress_block_params *)puVar344[-900],uVar334 * 4);
      }
      puVar344[-0x38a] = 0x10798a;
      astc_mode11_or_17(0x11,pcVar338,(uastc_encode_results *)puVar344[-0x37e],
                        (uint *)puVar344[-0x36e],(bc7enc_compress_block_params *)puVar344[-900]);
      if (*(char *)((long)puVar344 + -0x1b03) == '\0') {
        puVar344[-0x38a] = 0x10995e;
        astc_mode0_or_18(0,pcVar338,(uastc_encode_results *)puVar344[-0x37e],
                         (uint *)puVar344[-0x36e],(bc7enc_compress_block_params *)puVar344[-900],
                         (uchar *)0x0);
        *(char *)((long)puVar344 + -0x1ab5) = (char)uVar334;
        if ((*(byte *)(puVar344 + -0x379) & 2) != 0) goto LAB_0010a011;
        puVar344[-0x385] = puVar344 + -0x33b;
        goto LAB_00109980;
      }
      *(undefined1 *)((long)puVar344 + -0x1b04) = *(undefined1 *)((long)puVar344 + -0x1b03);
      puVar344[-0x385] = puVar344 + -0x33b;
LAB_001079b4:
      puVar344[-0x38a] = 0x1079db;
      astc_mode9_or_16(9,pcVar338,(uastc_encode_results *)puVar344[-0x37e],(uint *)puVar344[-0x36e],
                       (bc7enc_compress_block_params *)puVar344[-900],uVar334 << 2);
      uVar334 = *(uint *)(puVar344 + -0x379);
    }
    if ((uVar334 & 0x400) != 0) {
      *(undefined1 (*) [16])((long)puVar344 + -0x1844) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])((long)puVar344 + -0x1814) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar344 + -0x301) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])((long)puVar344 + -0x1834) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])((long)puVar344 + -0x1824) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar344 + -0x31b) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar344 + -0x319) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar344 + -0x31d) = (undefined1  [16])0x0;
      *(undefined4 *)(puVar344 + -0x309) = 0x10;
      puVar344[-0x308] = pcVar338;
      *(undefined4 *)(puVar344 + -0x307) = 0x10;
      *(undefined4 *)(puVar344 + -0x300) = 1;
      *(undefined1 *)((long)puVar344 + -0x17fc) = 1;
      puVar344[-0x306] = puVar344[-0x365];
      puVar344[-0x305] = puVar344[-0x364];
      puVar344[-0x302] = __LC33;
      puVar344[-0x301] = _UNK_0010eb38;
      puVar344[-0x31a] = puVar344[-0x36d];
      puVar344[-0x319] = puVar344[-0x378];
      puVar344[-0x38a] = 0x107ab4;
      uVar318 = basisu::color_cell_compression
                          (0xff,(color_cell_compressor_params *)puVar344[-0x37f],
                           (color_cell_compressor_results *)puVar344[-899],
                           (bc7enc_compress_block_params *)puVar344[-900]);
      uVar360 = *(undefined1 *)((long)puVar344 + -0x18b9);
      bVar313 = *(byte *)((long)puVar344 + -0x18be);
      bVar5 = *(byte *)((long)puVar344 + -0x18bb);
      puVar328 = (undefined8 *)puVar344[-0x36a];
      for (lVar325 = 0xc; lVar325 != 0; lVar325 = lVar325 + -1) {
        *puVar328 = 0;
        puVar328 = puVar328 + (ulong)bVar363 * -2 + 1;
      }
      bVar6 = *(byte *)((long)puVar344 + -0x18ba);
      bVar7 = *(byte *)((long)puVar344 + -0x18bf);
      bVar8 = *(byte *)((long)puVar344 + -0x18bc);
      *(undefined4 *)((long)puVar344 + -0x103c) = 0xc;
      puVar344[-0x209] = _LC22;
      bVar9 = *(byte *)(puVar344 + -0x318);
      bVar10 = *(byte *)((long)puVar361 + (ulong)bVar8 * 2 + 0x1a00);
      bVar11 = *(byte *)((long)puVar361 + (ulong)bVar9 * 2 + 0x1a00);
      *(ulong *)((long)puVar344 + -0x1033) =
           CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar360,*(undefined1 *)
                                                                                   ((long)puVar344 +
                                                                                   -0x18bd)),bVar6),
                                                        bVar313),bVar5),bVar7),bVar8),bVar9);
      uVar334 = (uint)*(byte *)((long)puVar361 + (ulong)bVar7 * 2 + 0x1a00) + (uint)bVar11 +
                (uint)*(byte *)((long)puVar361 + (ulong)bVar313 * 2 + 0x1a00);
      uVar315 = (uint)*(byte *)((long)puVar361 + (ulong)bVar6 * 2 + 0x1a00) +
                (uint)bVar10 + (uint)*(byte *)((long)puVar361 + (ulong)bVar5 * 2 + 0x1a00);
      if (uVar315 < uVar334) {
        *(ulong *)((long)puVar344 + -0x1033) =
             CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                                             ((long)puVar344 +
                                                                             -0x18bd),uVar360),
                                                                   bVar313),bVar6),bVar7),bVar5),
                               bVar9),bVar8);
      }
      uVar347 = 4;
      do {
        uVar348 = (ulong)(uVar347 - 4);
        cVar314 = *(char *)((long)puVar344 + uVar348 + 0xffc8);
        if (uVar315 < uVar334) {
          while( true ) {
            uVar316 = (int)uVar348 + 1;
            *(char *)((long)puVar344 + (uVar348 - 0x1021)) = '\x0f' - cVar314;
            if (uVar316 == uVar347) break;
            uVar348 = (ulong)uVar316;
            cVar314 = *(char *)((long)puVar344 + uVar348 + 0xffc8);
          }
        }
        else {
          *(char *)((long)puVar344 + (uVar348 - 0x1021)) = cVar314;
          for (uVar316 = uVar347 - 3; uVar316 != uVar347; uVar316 = uVar316 + 1) {
            *(undefined1 *)((long)puVar344 + ((ulong)uVar316 - 0x1021)) =
                 *(undefined1 *)((long)puVar344 + (ulong)uVar316 + 0xffc8);
          }
        }
        uVar347 = uVar347 + 4;
      } while (uVar347 != 0x14);
      uVar334 = *(uint *)((long)puVar344 + -0x1a9c);
      if (uVar334 < 0x200) {
        uVar476 = puVar344[-0x209];
        uVar323 = puVar344[-0x208];
        *(uint *)((long)puVar344 + -0x1a9c) = uVar334 + 1;
        uVar320 = puVar344[-0x207];
        uVar157 = puVar344[-0x206];
        lVar325 = puVar344[-0x37e] + (ulong)uVar334 * 0x80;
        *(undefined8 *)(puVar344[-0x37e] + (ulong)uVar334 * 0x80) = 10;
        uVar158 = puVar344[-0x205];
        uVar159 = puVar344[-0x204];
        uVar160 = puVar344[-0x203];
        uVar161 = puVar344[-0x202];
        uVar321 = puVar344[-0x1fd];
        *(undefined8 *)(lVar325 + 8) = uVar476;
        *(undefined8 *)(lVar325 + 0x10) = uVar323;
        uVar476 = puVar344[-0x201];
        uVar323 = puVar344[-0x200];
        *(undefined8 *)(lVar325 + 0x78) = uVar318;
        uVar318 = puVar344[-0x1ff];
        uVar162 = puVar344[-0x1fe];
        *(undefined8 *)(lVar325 + 0x68) = uVar321;
        *(undefined8 *)(lVar325 + 0x18) = uVar320;
        *(undefined8 *)(lVar325 + 0x20) = uVar157;
        *(undefined8 *)(lVar325 + 0x28) = uVar158;
        *(undefined8 *)(lVar325 + 0x30) = uVar159;
        *(undefined8 *)(lVar325 + 0x38) = uVar160;
        *(undefined8 *)(lVar325 + 0x40) = uVar161;
        *(undefined8 *)(lVar325 + 0x48) = uVar476;
        *(undefined8 *)(lVar325 + 0x50) = uVar323;
        *(undefined8 *)(lVar325 + 0x58) = uVar318;
        *(undefined8 *)(lVar325 + 0x60) = uVar162;
      }
    }
    pbVar14 = (bc7enc_compress_block_params *)puVar344[-900];
    puVar344[-0x38a] = 0x106546;
    astc_mode11_or_17(0xb,pcVar338,(uastc_encode_results *)puVar344[-0x37e],(uint *)puVar344[-0x36e]
                      ,pbVar14);
    *(undefined1 (*) [16])((long)puVar344 + -0x1844) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)puVar344 + -0x1814) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar344 + -0x301) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)puVar344 + -0x1834) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)puVar344 + -0x1824) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar344 + -0x31b) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar344 + -0x319) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar344 + -0x31d) = (undefined1  [16])0x0;
    *(undefined4 *)(puVar344 + -0x309) = 0x10;
    puVar344[-0x308] = pcVar338;
    *(undefined4 *)(puVar344 + -0x307) = 8;
    *(undefined4 *)(puVar344 + -0x300) = 1;
    *(undefined1 *)((long)puVar344 + -0x17fc) = 1;
    puVar344[-0x306] = puVar344[-0x37b];
    puVar344[-0x305] = puVar344[-0x37a];
    puVar344[-0x302] = __LC35;
    puVar344[-0x301] = _UNK_0010eb48;
    puVar344[-0x31a] = puVar344[-0x36d];
    puVar344[-0x319] = puVar344[-0x378];
    puVar344[-0x38a] = 0x106609;
    uVar318 = basisu::color_cell_compression
                        (0xff,(color_cell_compressor_params *)puVar344[-0x37f],
                         (color_cell_compressor_results *)puVar344[-899],pbVar14);
    uVar360 = *(undefined1 *)((long)puVar344 + -0x18b9);
    puVar344[-0x387] = uVar318;
    bVar313 = *(byte *)((long)puVar344 + -0x18ba);
    puVar328 = (undefined8 *)puVar344[-0x36a];
    for (lVar325 = 0xc; lVar325 != 0; lVar325 = lVar325 + -1) {
      *puVar328 = 0;
      puVar328 = puVar328 + (ulong)bVar363 * -2 + 1;
    }
    bVar5 = *(byte *)((long)puVar344 + -0x18be);
    bVar6 = *(byte *)((long)puVar344 + -0x18bc);
    bVar7 = *(byte *)((long)puVar344 + -0x18bb);
    *(undefined4 *)((long)puVar344 + -0x103c) = 0xc;
    puVar344[-0x209] = _LC29;
    bVar8 = *(byte *)((long)puVar344 + -0x18bf);
    bVar9 = *(byte *)(puVar344 + -0x318);
    bVar10 = *(byte *)((long)puVar361 + (ulong)bVar6 * 2 + 0x2600);
    bVar11 = *(byte *)((long)puVar361 + (ulong)bVar313 * 2 + 0x2600);
    bVar12 = *(byte *)((long)puVar361 + (ulong)bVar9 * 2 + 0x2600);
    *(ulong *)((long)puVar344 + -0x1033) =
         CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar360,*(undefined1 *)
                                                                                 ((long)puVar344 +
                                                                                 -0x18bd)),bVar313),
                                                      bVar5),bVar7),bVar8),bVar6),bVar9);
    uVar334 = (uint)*(byte *)((long)puVar361 + (ulong)bVar8 * 2 + 0x2600) + (uint)bVar12 +
              (uint)*(byte *)((long)puVar361 + (ulong)bVar5 * 2 + 0x2600);
    uVar315 = (uint)bVar11 +
              (uint)bVar10 + (uint)*(byte *)((long)puVar361 + (ulong)bVar7 * 2 + 0x2600);
    if (uVar315 < uVar334) {
      *(ulong *)((long)puVar344 + -0x1033) =
           CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                                           ((long)puVar344 + -0x18bd
                                                                           ),uVar360),bVar5),bVar313
                                                       ),bVar8),bVar7),bVar9),bVar6);
    }
    uVar347 = 4;
    do {
      uVar348 = (ulong)(uVar347 - 4);
      cVar314 = *(char *)((long)puVar344 + uVar348 + 0xffc8);
      if (uVar315 < uVar334) {
        while( true ) {
          uVar316 = (int)uVar348 + 1;
          *(char *)((long)puVar344 + (uVar348 - 0x1021)) = '\a' - cVar314;
          if (uVar347 == uVar316) break;
          uVar348 = (ulong)uVar316;
          cVar314 = *(char *)((long)puVar344 + uVar348 + 0xffc8);
        }
      }
      else {
        *(char *)((long)puVar344 + (uVar348 - 0x1021)) = cVar314;
        for (uVar316 = uVar347 - 3; uVar347 != uVar316; uVar316 = uVar316 + 1) {
          *(undefined1 *)((long)puVar344 + ((ulong)uVar316 - 0x1021)) =
               *(undefined1 *)((long)puVar344 + (ulong)uVar316 + 0xffc8);
        }
      }
      uVar347 = uVar347 + 4;
    } while (uVar347 != 0x14);
    uVar334 = *(uint *)((long)puVar344 + -0x1a9c);
    if (uVar334 < 0x200) {
      uVar476 = puVar344[-0x209];
      uVar323 = puVar344[-0x208];
      *(uint *)((long)puVar344 + -0x1a9c) = uVar334 + 1;
      uVar320 = puVar344[-0x207];
      uVar157 = puVar344[-0x206];
      lVar325 = puVar344[-0x37e] + (ulong)uVar334 * 0x80;
      *(undefined8 *)(puVar344[-0x37e] + (ulong)uVar334 * 0x80) = 0xc;
      uVar318 = puVar344[-0x387];
      uVar158 = puVar344[-0x205];
      uVar159 = puVar344[-0x204];
      uVar321 = puVar344[-0x1fd];
      *(undefined8 *)(lVar325 + 8) = uVar476;
      *(undefined8 *)(lVar325 + 0x10) = uVar323;
      uVar476 = puVar344[-0x203];
      uVar323 = puVar344[-0x202];
      *(undefined8 *)(lVar325 + 0x78) = uVar318;
      uVar318 = puVar344[-0x201];
      uVar160 = puVar344[-0x200];
      *(undefined8 *)(lVar325 + 0x68) = uVar321;
      uVar321 = puVar344[-0x1ff];
      uVar161 = puVar344[-0x1fe];
      *(undefined8 *)(lVar325 + 0x18) = uVar320;
      *(undefined8 *)(lVar325 + 0x20) = uVar157;
      *(undefined8 *)(lVar325 + 0x28) = uVar158;
      *(undefined8 *)(lVar325 + 0x30) = uVar159;
      *(undefined8 *)(lVar325 + 0x38) = uVar476;
      *(undefined8 *)(lVar325 + 0x40) = uVar323;
      *(undefined8 *)(lVar325 + 0x48) = uVar318;
      *(undefined8 *)(lVar325 + 0x50) = uVar160;
      *(undefined8 *)(lVar325 + 0x58) = uVar321;
      *(undefined8 *)(lVar325 + 0x60) = uVar161;
      uVar334 = *(uint *)(puVar344 + -0x379);
    }
    else {
      uVar334 = *(uint *)(puVar344 + -0x379);
    }
    if ((uVar334 & 0x2000) == 0) goto LAB_00106958;
    lVar325 = puVar344[-0x378];
    lVar326 = puVar344[-0x36d];
    lVar343 = 0;
    puVar344[-0x365] = lVar325;
    puVar344[-0x364] = puVar344 + 0x1ff7;
    puVar344[-0x36c] = puVar344 + -0x341;
    puVar344[-0x387] = puVar344 + -0x345;
    puVar324 = (undefined4 *)puVar344[-0x382];
    puVar344[-0x343] = puVar344[-0x347];
    puVar344[-0x342] = puVar344[-0x346];
    puVar344[-0x377] = &basist::g_bc7_weights1;
    puVar344[-0x376] = &g_bc7_weights1x;
    *(undefined1 *)(puVar344 + -0x342) = 0;
    puVar344[-0x36b] = (long)puVar344 + -0x1844;
    puVar344[-0x360] = (long)puVar344 + -0x18e4;
    puVar344[-0x367] = pcVar338;
    puVar344[-0x345] = puVar344[-0x349];
    puVar344[-0x344] = puVar344[-0x348];
    puVar344[-0x363] = lVar326;
    puVar344[-0x362] = puVar344 + 0x1ff7;
    *(undefined8 *)((long)puVar344 + -0x1a24) = __LC3;
    *(undefined8 *)((long)puVar344 + -0x1a1c) = _UNK_0010ea88;
    puVar344[-0x37b] = __LC0;
    puVar344[-0x37a] = _UNK_0010ea78;
    do {
      puVar349 = (undefined4 *)puVar344[-0x367];
      puVar319 = puVar324;
      puVar335 = (undefined4 *)puVar344[-0x388];
      do {
        uVar345 = *puVar349;
        puVar336 = puVar335 + 1;
        puVar349 = puVar349 + 1;
        *puVar319 = uVar345;
        *puVar335 = uVar345;
        uVar360 = *(undefined1 *)((long)puVar319 + lVar343);
        *(undefined1 *)((long)puVar319 + 3) = 0xff;
        *(char *)((long)puVar335 + lVar343) = (char)((uint)uVar345 >> 0x18);
        *(undefined1 *)((long)puVar319 + 2) = uVar360;
        *(ushort *)puVar319 = CONCAT11(uVar360,uVar360);
        *(undefined1 *)((long)puVar335 + 3) = 0xff;
        puVar319 = puVar319 + 1;
        puVar335 = puVar336;
      } while (puVar336 != puVar324);
      pauVar17 = (undefined1 (*) [16])puVar344[-0x360];
      pcVar346 = (color_cell_compressor_results *)puVar344[-0x36c];
      uVar321 = puVar344[-0x37b];
      uVar476 = puVar344[-0x37a];
      pbVar14 = (bc7enc_compress_block_params *)puVar344[-0x387];
      pauVar17[3] = (undefined1  [16])0x0;
      pcVar357 = (color_cell_compressor_params *)puVar344[-899];
      uVar323 = puVar344[-0x377];
      uVar320 = puVar344[-0x376];
      *pauVar17 = (undefined1  [16])0x0;
      uVar157 = puVar344[-0x363];
      uVar158 = puVar344[-0x362];
      pauVar17[1] = (undefined1  [16])0x0;
      pauVar17[2] = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pauVar17[3] + 0xc) = (undefined1  [16])0x0;
      uVar318 = puVar344[-0x388];
      *(undefined1 (*) [16])pcVar346 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pcVar346 + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pcVar346 + 0x20) = (undefined1  [16])0x0;
      puVar344[-0x31a] = uVar323;
      puVar344[-0x319] = uVar320;
      puVar344[-0x316] = uVar321;
      puVar344[-0x315] = uVar476;
      puVar344[-0x33e] = uVar157;
      puVar344[-0x33d] = uVar158;
      *(undefined4 *)(puVar344 + -0x31d) = 0x10;
      puVar344[-0x31c] = uVar318;
      *(undefined4 *)(puVar344 + -0x31b) = 2;
      *(undefined4 *)(puVar344 + -0x314) = 1;
      puVar344[-0x38a] = 0x107f56;
      uVar320 = basisu::color_cell_compression(0xff,pcVar357,pcVar346,pbVar14);
      pcVar346 = (color_cell_compressor_results *)puVar344[-0x385];
      uVar318 = puVar344[-0x377];
      uVar321 = puVar344[-0x376];
      uVar476 = puVar344[-0x37b];
      uVar323 = puVar344[-0x37a];
      pbVar14 = (bc7enc_compress_block_params *)puVar344[-0x387];
      puVar344[-0x369] = uVar320;
      pauVar17 = (undefined1 (*) [16])puVar344[-0x36b];
      pcVar357 = (color_cell_compressor_params *)puVar344[-0x37f];
      *(undefined1 (*) [16])pcVar346 = (undefined1  [16])0x0;
      uVar320 = puVar344[-0x365];
      uVar157 = puVar344[-0x364];
      *(undefined1 (*) [16])(pcVar346 + 0x10) = (undefined1  [16])0x0;
      pauVar17[3] = (undefined1  [16])0x0;
      *pauVar17 = (undefined1  [16])0x0;
      pauVar17[1] = (undefined1  [16])0x0;
      pauVar17[2] = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pauVar17[3] + 0xc) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pcVar346 + 0x20) = (undefined1  [16])0x0;
      *(undefined4 *)(puVar344 + -0x309) = 0x10;
      puVar344[-0x308] = puVar324;
      *(undefined4 *)(puVar344 + -0x307) = 2;
      *(undefined4 *)(puVar344 + -0x300) = 1;
      puVar344[-0x306] = uVar318;
      puVar344[-0x305] = uVar321;
      puVar344[-0x302] = uVar476;
      puVar344[-0x301] = uVar323;
      puVar344[-0x338] = uVar320;
      puVar344[-0x337] = uVar157;
      puVar344[-0x38a] = 0x107ffa;
      uVar321 = basisu::color_cell_compression(0xff,pcVar357,pcVar346,pbVar14);
      uVar318 = _LC38;
      auVar383._8_8_ = extraout_XMM0_Qb;
      auVar383._0_8_ = extraout_XMM0_Qa;
      puVar344[-0x368] = uVar321;
      puVar328 = puVar344 + -0x209;
      for (lVar327 = 0xd; lVar327 != 0; lVar327 = lVar327 + -1) {
        *puVar328 = 0;
        puVar328 = puVar328 + (ulong)bVar363 * -2 + 1;
      }
      *(undefined1 *)((long)puVar344 + -0x1034) = 1;
      *(int *)(puVar344 + -0x207) = (int)lVar343;
      *(undefined4 *)((long)puVar344 + -0x1044) = 1;
      *(undefined4 *)((long)puVar344 + -0x103c) = 0xc;
      if (lVar343 == 0) {
        bVar313 = *(byte *)((long)puVar344 + -0x19df);
        bVar5 = *(byte *)((long)puVar344 + -0x19db);
        uVar334 = (uint)bVar5;
        bVar6 = *(byte *)((long)puVar344 + -0x19ac);
        uVar347 = (uint)bVar6;
        bVar7 = *(byte *)(puVar344 + -0x336);
        uVar315 = (uint)bVar7;
        *(byte *)(puVar344 + -0x371) = bVar313;
        bVar8 = *(byte *)((long)puVar344 + -0x19de);
        uVar348 = (ulong)bVar8;
        uVar316 = (uint)bVar8;
        *(uint *)(puVar344 + -0x375) = (uint)bVar313;
        bVar9 = *(byte *)((long)puVar344 + -0x19da);
        uVar322 = (ulong)bVar9;
        uVar354 = (uint)bVar9;
        *(byte *)(puVar344 + -0x374) = bVar7;
        *(byte *)(puVar344 + -0x36e) = bVar5;
        *(byte *)(puVar344 + -0x373) = bVar6;
        *(uint *)((long)puVar344 + -0x1033) =
             CONCAT31(CONCAT21(CONCAT11(bVar5,bVar313),bVar6),bVar7);
        *(ushort *)((long)puVar344 + -0x102f) = CONCAT11(bVar9,bVar8);
LAB_001080d6:
        uVar360 = *(undefined1 *)((long)puVar344 + lVar343 + -0x19e0);
        *(undefined1 *)(puVar344 + -0x37d) = *(undefined1 *)((long)puVar344 + lVar343 + -0x19dc);
      }
      else {
        bVar313 = *(byte *)(puVar344 + -0x33c);
        uVar315 = (uint)bVar313;
        bVar5 = *(byte *)((long)puVar344 + -0x19dc);
        uVar347 = (uint)bVar5;
        *(byte *)(puVar344 + -0x374) = bVar313;
        *(byte *)(puVar344 + -0x373) = bVar5;
        *(ushort *)((long)puVar344 + -0x1033) = CONCAT11(bVar5,bVar313);
        if (lVar343 == 1) {
          bVar313 = *(byte *)((long)puVar344 + -0x19ab);
          uVar334 = (uint)bVar313;
          bVar5 = *(byte *)((long)puVar344 + -0x19af);
          bVar6 = *(byte *)((long)puVar344 + -0x19da);
          uVar322 = (ulong)bVar6;
          uVar354 = (uint)bVar6;
          bVar7 = *(byte *)((long)puVar344 + -0x19de);
          uVar348 = (ulong)bVar7;
          uVar316 = (uint)bVar7;
          *(byte *)(puVar344 + -0x371) = bVar5;
          *(byte *)(puVar344 + -0x36e) = bVar313;
          *(uint *)(puVar344 + -0x375) = (uint)bVar5;
          *(uint *)((long)puVar344 + -0x1031) =
               CONCAT31(CONCAT21(CONCAT11(bVar6,bVar7),bVar313),bVar5);
          goto LAB_001080d6;
        }
        *(undefined1 *)(puVar344 + -0x371) = *(undefined1 *)((long)puVar344 + -0x19df);
        *(undefined1 *)(puVar344 + -0x36e) = *(undefined1 *)((long)puVar344 + -0x19db);
        *(ushort *)((long)puVar344 + -0x1031) =
             CONCAT11(*(undefined1 *)((long)puVar344 + -0x19db),
                      *(undefined1 *)((long)puVar344 + -0x19df));
        if (lVar343 == 2) {
          uVar334 = (uint)*(byte *)(puVar344 + -0x36e);
          uVar347 = (uint)*(byte *)(puVar344 + -0x373);
          bVar313 = *(byte *)((long)puVar344 + -0x19ae);
          uVar348 = (ulong)bVar313;
          uVar316 = (uint)bVar313;
          uVar315 = (uint)*(byte *)(puVar344 + -0x374);
          bVar5 = *(byte *)((long)puVar344 + -0x19aa);
          uVar322 = (ulong)bVar5;
          uVar354 = (uint)bVar5;
          *(ushort *)((long)puVar344 + -0x102f) = CONCAT11(bVar5,bVar313);
          *(uint *)(puVar344 + -0x375) = (uint)*(byte *)(puVar344 + -0x371);
          goto LAB_001080d6;
        }
        uVar334 = (uint)*(byte *)(puVar344 + -0x36e);
        bVar313 = *(byte *)((long)puVar344 + -0x19de);
        uVar348 = (ulong)bVar313;
        uVar347 = (uint)*(byte *)(puVar344 + -0x373);
        bVar5 = *(byte *)((long)puVar344 + -0x19da);
        uVar322 = (ulong)bVar5;
        *(undefined1 *)(puVar344 + -0x37d) = *(undefined1 *)((long)puVar344 + -0x19ac);
        uVar316 = (uint)bVar313;
        uVar354 = (uint)bVar5;
        *(uint *)(puVar344 + -0x375) = (uint)*(byte *)(puVar344 + -0x371);
        uVar315 = (uint)*(byte *)(puVar344 + -0x374);
        *(ushort *)((long)puVar344 + -0x102f) = CONCAT11(bVar5,bVar313);
        uVar360 = *(undefined1 *)(puVar344 + -0x336);
      }
      bVar313 = *(byte *)((long)puVar361 + (long)(int)uVar315 * 2 + 0x2800);
      *(undefined1 *)((long)puVar344 + -0x102d) = uVar360;
      bVar5 = *(byte *)((long)puVar361 + (long)(int)uVar334 * 2 + 0x2800);
      *(undefined1 *)((long)puVar344 + -0x102c) = *(undefined1 *)(puVar344 + -0x37d);
      bVar18 = (uint)*(byte *)((long)puVar361 + (long)(int)uVar354 * 2 + 0x2800) +
               (uint)*(byte *)((long)puVar361 + (long)(int)uVar347 * 2 + 0x2800) + (uint)bVar5 <
               (uint)*(byte *)((long)puVar361 + (long)(int)uVar316 * 2 + 0x2800) +
               (uint)*(byte *)((long)puVar361 + (long)*(int *)(puVar344 + -0x375) * 2 + 0x2800) +
               (uint)bVar313;
      if (bVar18) {
        *(ulong *)((long)puVar344 + -0x1033) =
             ((((((ulong)CONCAT11(uVar360,*(undefined1 *)(puVar344 + -0x37d)) << 8 | uVar348) << 8 |
                uVar322) << 8 | (ulong)*(byte *)(puVar344 + -0x371)) << 8 |
              (ulong)*(byte *)(puVar344 + -0x36e)) << 8 | (ulong)*(byte *)(puVar344 + -0x374)) << 8
             | (ulong)*(byte *)(puVar344 + -0x373);
      }
      lVar327 = 0;
      cVar314 = -bVar18;
      do {
        uVar334 = *(uint *)(lVar326 + lVar327);
        auVar380 = pshuflw(auVar383,ZEXT216(CONCAT11(cVar314,cVar314)),0);
        uVar315 = *(uint *)(lVar325 + lVar327);
        auVar377 = ~auVar380 & ZEXT416(uVar334) |
                   ZEXT416(CONCAT13(_LC37._3_1_ - (char)(uVar334 >> 0x18),
                                    CONCAT12(_LC37._2_1_ - (char)(uVar334 >> 0x10),
                                             CONCAT11(_LC37._1_1_ - (char)(uVar334 >> 8),
                                                      (char)_LC37 - (char)uVar334)))) & auVar380;
        auVar383 = ~auVar380 & ZEXT416(uVar315) |
                   ZEXT416(CONCAT13(_LC37._3_1_ - (char)(uVar315 >> 0x18),
                                    CONCAT12(_LC37._2_1_ - (char)(uVar315 >> 0x10),
                                             CONCAT11(_LC37._1_1_ - (char)(uVar315 >> 8),
                                                      (char)_LC37 - (char)uVar315)))) & auVar380;
        auVar222._10_6_ = 0;
        auVar222._0_10_ = SUB1610(ZEXT116(auVar383[3]) << 0x38,6);
        auVar221._11_5_ = 0;
        auVar221._0_11_ = SUB1611(auVar222 << 0x30,5);
        auVar435._4_12_ = SUB1612(auVar221 << 0x28,4);
        auVar435[3] = auVar383[1];
        auVar435[2] = auVar377[1];
        auVar435[1] = auVar383[0];
        auVar435[0] = auVar377[0];
        *(int *)((long)puVar344 + lVar327 * 2 + -0x1021) = auVar435._0_4_;
        *(uint *)((long)puVar344 + lVar327 * 2 + -0x101d) =
             CONCAT31(CONCAT21(CONCAT11(auVar383[3],auVar377[3]),auVar383[2]),auVar377[2]);
        lVar327 = lVar327 + 4;
      } while (lVar327 != 0x10);
      uVar334 = *(uint *)((long)puVar344 + -0x1a9c);
      if (uVar334 < 0x200) {
        uVar321 = puVar344[-0x208];
        uVar476 = puVar344[-0x207];
        uVar323 = puVar344[-0x206];
        uVar320 = puVar344[-0x205];
        uVar157 = puVar344[-0x204];
        puVar328 = (undefined8 *)((ulong)uVar334 * 0x80 + puVar344[-0x37e]);
        uVar158 = puVar344[-0x203];
        uVar159 = puVar344[-0x202];
        *(uint *)((long)puVar344 + -0x1a9c) = uVar334 + 1;
        puVar328[1] = puVar344[-0x209];
        puVar328[2] = uVar321;
        uVar321 = puVar344[-0x201];
        uVar160 = puVar344[-0x200];
        *puVar328 = uVar318;
        uVar318 = puVar344[-0x1fd];
        puVar328[3] = uVar476;
        puVar328[4] = uVar323;
        uVar476 = puVar344[-0x1ff];
        uVar323 = puVar344[-0x1fe];
        puVar328[0xd] = uVar318;
        uVar348 = puVar344[-0x368];
        puVar328[5] = uVar320;
        puVar328[6] = uVar157;
        lVar327 = puVar344[-0x369];
        puVar328[7] = uVar158;
        puVar328[8] = uVar159;
        puVar328[9] = uVar321;
        puVar328[10] = uVar160;
        puVar328[0xb] = uVar476;
        puVar328[0xc] = uVar323;
        puVar328[0xf] = lVar327 + uVar348 / 3;
      }
      lVar343 = lVar343 + 1;
    } while (lVar343 != 4);
    pcVar338 = (color_rgba *)puVar344[-0x367];
    *(undefined4 *)(puVar344 + -0x387) = *(undefined4 *)((long)puVar344 + -0x1a9c);
    if ((*(uint *)(puVar344 + -0x379) & 0x4000) == 0) goto LAB_00106963;
    *(undefined1 (*) [16])((long)puVar344 + -0x1844) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)puVar344 + -0x1814) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)puVar344 + -0x1834) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar344 + -0x301) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)puVar344 + -0x1824) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar344 + -0x31b) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar344 + -0x319) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar344 + -0x31d) = (undefined1  [16])0x0;
    *(undefined4 *)(puVar344 + -0x309) = 0x10;
    puVar344[-0x308] = pcVar338;
    *(undefined4 *)(puVar344 + -0x307) = 4;
    *(undefined4 *)(puVar344 + -0x300) = 1;
    *(undefined1 *)((long)puVar344 + -0x17fc) = 1;
    puVar344[-0x306] = puVar344[-0x381];
    puVar344[-0x305] = puVar344[-0x380];
    *(undefined1 (*) [16])(puVar344 + -0x302) = *(undefined1 (*) [16])(puVar344 + -0x37b);
    puVar344[-0x31a] = puVar344[-0x36d];
    puVar344[-0x319] = puVar344[-0x378];
    puVar344[-0x38a] = 0x1083dd;
    uVar318 = basisu::color_cell_compression
                        (0xff,(color_cell_compressor_params *)puVar344[-0x37f],
                         (color_cell_compressor_results *)puVar344[-899],
                         (bc7enc_compress_block_params *)puVar344[-900]);
    uVar360 = *(undefined1 *)((long)puVar344 + -0x18b9);
    bVar313 = *(byte *)((long)puVar344 + -0x18ba);
    bVar5 = *(byte *)((long)puVar344 + -0x18be);
    puVar328 = (undefined8 *)puVar344[-0x36a];
    for (lVar325 = 0xc; lVar325 != 0; lVar325 = lVar325 + -1) {
      *puVar328 = 0;
      puVar328 = puVar328 + (ulong)bVar363 * -2 + 1;
    }
    bVar6 = *(byte *)((long)puVar344 + -0x18bb);
    bVar7 = *(byte *)((long)puVar344 + -0x18bf);
    bVar8 = *(byte *)((long)puVar344 + -0x18bc);
    *(undefined4 *)((long)puVar344 + -0x103c) = 0xc;
    puVar344[-0x209] = _LC1;
    bVar9 = *(byte *)(puVar344 + -0x318);
    bVar10 = *(byte *)((long)puVar361 + (ulong)bVar6 * 2 + 0x2800);
    bVar11 = *(byte *)((long)puVar361 + (ulong)bVar9 * 2 + 0x2800);
    *(ulong *)((long)puVar344 + -0x1033) =
         CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar360,*(undefined1 *)
                                                                                 ((long)puVar344 +
                                                                                 -0x18bd)),bVar313),
                                                      bVar5),bVar6),bVar7),bVar8),bVar9);
    if ((uint)*(byte *)((long)puVar361 + (ulong)bVar8 * 2 + 0x2800) + (uint)bVar10 +
        (uint)*(byte *)((long)puVar361 + (ulong)bVar313 * 2 + 0x2800) <
        (uint)bVar11 + (uint)*(byte *)((long)puVar361 + (ulong)bVar7 * 2 + 0x2800) +
        (uint)*(byte *)((long)puVar361 + (ulong)bVar5 * 2 + 0x2800)) {
      *(undefined1 *)(puVar344 + -0x389) = 1;
      *(ulong *)((long)puVar344 + -0x1033) =
           CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                                           ((long)puVar344 + -0x18bd
                                                                           ),uVar360),bVar5),bVar313
                                                       ),bVar7),bVar6),bVar9),bVar8);
    }
    cVar314 = *(char *)(puVar344 + -0x389);
    uVar334 = 4;
    do {
      uVar348 = (ulong)(uVar334 - 4);
      cVar23 = *(char *)((long)puVar344 + uVar348 + 0xffc8);
      if (cVar314 == '\0') {
        *(char *)((long)puVar344 + (uVar348 - 0x1021)) = cVar23;
        for (uVar315 = uVar334 - 3; uVar334 != uVar315; uVar315 = uVar315 + 1) {
          *(undefined1 *)((long)puVar344 + ((ulong)uVar315 - 0x1021)) =
               *(undefined1 *)((long)puVar344 + (ulong)uVar315 + 0xffc8);
        }
      }
      else {
        while( true ) {
          uVar315 = (int)uVar348 + 1;
          *(char *)((long)puVar344 + (uVar348 - 0x1021)) = '\x03' - cVar23;
          if (uVar315 == uVar334) break;
          uVar348 = (ulong)uVar315;
          cVar23 = *(char *)((long)puVar344 + uVar348 + 0xffc8);
        }
      }
      uVar334 = uVar334 + 4;
    } while (uVar334 != 0x14);
    uVar334 = *(uint *)(puVar344 + -0x387);
    if (uVar334 < 0x200) {
      uVar476 = puVar344[-0x209];
      uVar323 = puVar344[-0x208];
      *(uint *)(puVar344 + -0x387) = uVar334 + 1;
      uVar320 = puVar344[-0x207];
      uVar157 = puVar344[-0x206];
      lVar325 = puVar344[-0x37e] + (ulong)uVar334 * 0x80;
      *(uint *)((long)puVar344 + -0x1a9c) = uVar334 + 1;
      uVar158 = puVar344[-0x205];
      uVar159 = puVar344[-0x204];
      *(undefined8 *)(puVar344[-0x37e] + (ulong)uVar334 * 0x80) = 0xe;
      uVar160 = puVar344[-0x203];
      uVar161 = puVar344[-0x202];
      uVar162 = puVar344[-0x201];
      uVar163 = puVar344[-0x200];
      uVar321 = puVar344[-0x1fd];
      *(undefined8 *)(lVar325 + 8) = uVar476;
      *(undefined8 *)(lVar325 + 0x10) = uVar323;
      uVar476 = puVar344[-0x1ff];
      uVar323 = puVar344[-0x1fe];
      *(undefined8 *)(lVar325 + 0x78) = uVar318;
      *(undefined8 *)(lVar325 + 0x68) = uVar321;
      *(undefined8 *)(lVar325 + 0x18) = uVar320;
      *(undefined8 *)(lVar325 + 0x20) = uVar157;
      *(undefined8 *)(lVar325 + 0x28) = uVar158;
      *(undefined8 *)(lVar325 + 0x30) = uVar159;
      *(undefined8 *)(lVar325 + 0x38) = uVar160;
      *(undefined8 *)(lVar325 + 0x40) = uVar161;
      *(undefined8 *)(lVar325 + 0x48) = uVar162;
      *(undefined8 *)(lVar325 + 0x50) = uVar163;
      *(undefined8 *)(lVar325 + 0x58) = uVar476;
      *(undefined8 *)(lVar325 + 0x60) = uVar323;
    }
  }
  uVar334 = *(uint *)(puVar344 + -0x387);
  paVar339 = (astc_block_desc *)(puVar344 + -8);
  puVar344[-0x375] = (ulong)uVar334;
  uVar348 = (ulong)*(uint *)(puVar344 + -9);
  cVar314 = *(char *)((long)&basist::g_uastc_mode_is_la + uVar348);
  paVar340 = paVar339;
  if (*(char *)((long)puVar344 + -0x1b04) == '\0') {
    while( true ) {
      if (cVar314 != '\0') {
        uVar315 = *(uint *)(paVar340 + -4);
        *(undefined4 *)(puVar344 + -0x309) = *(undefined4 *)(paVar340 + 0x68);
        puVar344[-0x38a] = 0x106f5d;
        basist::unpack_uastc
                  ((uint)uVar348,uVar315,(color32 *)(puVar344 + -0x309),paVar340,
                   (color32 *)(puVar344 + -0x209),false);
        auVar380 = *(undefined1 (*) [16])pcVar338;
        uVar513 = auVar380._0_2_ >> 8;
        uVar518 = auVar380._2_2_ >> 8;
        uVar519 = auVar380._4_2_ >> 8;
        uVar520 = auVar380._6_2_ >> 8;
        uVar521 = auVar380._8_2_ >> 8;
        uVar523 = auVar380._10_2_ >> 8;
        uVar524 = auVar380._12_2_ >> 8;
        uVar525 = auVar380._14_2_ >> 8;
        auVar541 = *(undefined1 (*) [16])pcVar338 & __LC6;
        auVar529 = *(undefined1 (*) [16])(pcVar338 + 0x20) & __LC6;
        auVar377 = *(undefined1 (*) [16])(puVar344 + -0x209);
        auVar376 = *(undefined1 (*) [16])(puVar344 + -0x207) & __LC6;
        auVar483 = *(undefined1 (*) [16])(puVar344 + -0x209) & __LC6;
        auVar379 = *(undefined1 (*) [16])(puVar344 + -0x203);
        sVar394 = auVar483._0_2_;
        sVar554 = auVar483._2_2_;
        bVar313 = (0 < sVar554) * (sVar554 < 0x100) * auVar483[2] - (0xff < sVar554);
        sVar554 = auVar483._4_2_;
        sVar413 = auVar483._6_2_;
        cVar19 = (0 < sVar413) * (sVar413 < 0x100) * auVar483[6] - (0xff < sVar413);
        uVar474 = CONCAT13(cVar19,CONCAT12((0 < sVar554) * (sVar554 < 0x100) * auVar483[4] -
                                           (0xff < sVar554),
                                           CONCAT11(bVar313,(0 < sVar394) * (sVar394 < 0x100) *
                                                            auVar483[0] - (0xff < sVar394))));
        sVar394 = auVar483._8_2_;
        sVar554 = auVar483._10_2_;
        cVar20 = (0 < sVar554) * (sVar554 < 0x100) * auVar483[10] - (0xff < sVar554);
        uVar475 = CONCAT15(cVar20,CONCAT14((0 < sVar394) * (sVar394 < 0x100) * auVar483[8] -
                                           (0xff < sVar394),uVar474));
        sVar394 = auVar483._12_2_;
        sVar554 = auVar483._14_2_;
        cVar333 = (0 < sVar554) * (sVar554 < 0x100) * auVar483[0xe] - (0xff < sVar554);
        uVar476 = CONCAT17(cVar333,CONCAT16((0 < sVar394) * (sVar394 < 0x100) * auVar483[0xc] -
                                            (0xff < sVar394),uVar475));
        sVar394 = auVar376._0_2_;
        sVar554 = auVar376._2_2_;
        cVar21 = (0 < sVar554) * (sVar554 < 0x100) * auVar376[2] - (0xff < sVar554);
        auVar479._0_10_ =
             CONCAT19(cVar21,CONCAT18((0 < sVar394) * (sVar394 < 0x100) * auVar376[0] -
                                      (0xff < sVar394),uVar476));
        sVar394 = auVar376._4_2_;
        auVar479[10] = (0 < sVar394) * (sVar394 < 0x100) * auVar376[4] - (0xff < sVar394);
        sVar394 = auVar376._6_2_;
        cVar314 = (0 < sVar394) * (sVar394 < 0x100) * auVar376[6] - (0xff < sVar394);
        auVar479[0xb] = cVar314;
        sVar394 = auVar376._8_2_;
        auVar480[0xc] = (0 < sVar394) * (sVar394 < 0x100) * auVar376[8] - (0xff < sVar394);
        auVar480._0_12_ = auVar479;
        sVar394 = auVar376._10_2_;
        cVar22 = (0 < sVar394) * (sVar394 < 0x100) * auVar376[10] - (0xff < sVar394);
        auVar480[0xd] = cVar22;
        sVar394 = auVar376._12_2_;
        auVar484[0xe] = (0 < sVar394) * (sVar394 < 0x100) * auVar376[0xc] - (0xff < sVar394);
        auVar484._0_14_ = auVar480;
        sVar394 = auVar376._14_2_;
        cVar23 = (0 < sVar394) * (sVar394 < 0x100) * auVar376[0xe] - (0xff < sVar394);
        auVar484[0xf] = cVar23;
        uVar426 = auVar377._0_2_ >> 8;
        uVar437 = auVar377._2_2_ >> 8;
        uVar439 = auVar377._4_2_ >> 8;
        uVar441 = auVar377._6_2_ >> 8;
        uVar443 = auVar377._8_2_ >> 8;
        uVar445 = auVar377._10_2_ >> 8;
        uVar447 = auVar377._12_2_ >> 8;
        uVar449 = auVar377._14_2_ >> 8;
        auVar376 = *(undefined1 (*) [16])(puVar344 + -0x207);
        auVar483 = *(undefined1 (*) [16])(puVar344 + -0x205) & __LC6;
        uVar393 = auVar379._0_2_ >> 8;
        uVar412 = auVar379._2_2_ >> 8;
        uVar414 = auVar379._4_2_ >> 8;
        uVar416 = auVar379._6_2_ >> 8;
        uVar418 = auVar379._8_2_ >> 8;
        uVar420 = auVar379._10_2_ >> 8;
        uVar422 = auVar379._12_2_ >> 8;
        uVar424 = auVar379._14_2_ >> 8;
        uVar364 = auVar376._0_2_ >> 8;
        uVar385 = auVar376._2_2_ >> 8;
        uVar386 = auVar376._4_2_ >> 8;
        uVar387 = auVar376._6_2_ >> 8;
        uVar388 = auVar376._8_2_ >> 8;
        uVar390 = auVar376._10_2_ >> 8;
        uVar391 = auVar376._12_2_ >> 8;
        uVar392 = auVar376._14_2_ >> 8;
        bVar5 = (uVar437 != 0) * (uVar437 < 0x100) * auVar377[3] - (0xff < uVar437);
        cVar24 = (uVar441 != 0) * (uVar441 < 0x100) * auVar377[7] - (0xff < uVar441);
        uVar428 = CONCAT13(cVar24,CONCAT12((uVar439 != 0) * (uVar439 < 0x100) * auVar377[5] -
                                           (0xff < uVar439),
                                           CONCAT11(bVar5,(uVar426 != 0) * (uVar426 < 0x100) *
                                                          auVar377[1] - (0xff < uVar426))));
        cVar25 = (uVar445 != 0) * (uVar445 < 0x100) * auVar377[0xb] - (0xff < uVar445);
        uVar429 = CONCAT15(cVar25,CONCAT14((uVar443 != 0) * (uVar443 < 0x100) * auVar377[9] -
                                           (0xff < uVar443),uVar428));
        cVar26 = (uVar449 != 0) * (uVar449 < 0x100) * auVar377[0xf] - (0xff < uVar449);
        uVar321 = CONCAT17(cVar26,CONCAT16((uVar447 != 0) * (uVar447 < 0x100) * auVar377[0xd] -
                                           (0xff < uVar447),uVar429));
        cVar27 = (uVar385 != 0) * (uVar385 < 0x100) * auVar376[3] - (0xff < uVar385);
        auVar430._0_10_ =
             CONCAT19(cVar27,CONCAT18((uVar364 != 0) * (uVar364 < 0x100) * auVar376[1] -
                                      (0xff < uVar364),uVar321));
        auVar430[10] = (uVar386 != 0) * (uVar386 < 0x100) * auVar376[5] - (0xff < uVar386);
        cVar28 = (uVar387 != 0) * (uVar387 < 0x100) * auVar376[7] - (0xff < uVar387);
        auVar430[0xb] = cVar28;
        auVar431[0xc] = (uVar388 != 0) * (uVar388 < 0x100) * auVar376[9] - (0xff < uVar388);
        auVar431._0_12_ = auVar430;
        cVar29 = (uVar390 != 0) * (uVar390 < 0x100) * auVar376[0xb] - (0xff < uVar390);
        auVar431[0xd] = cVar29;
        auVar434[0xe] = (uVar391 != 0) * (uVar391 < 0x100) * auVar376[0xd] - (0xff < uVar391);
        auVar434._0_14_ = auVar431;
        cVar30 = (uVar392 != 0) * (uVar392 < 0x100) * auVar376[0xf] - (0xff < uVar392);
        auVar434[0xf] = cVar30;
        auVar377 = *(undefined1 (*) [16])(puVar344 + -0x203) & __LC6;
        sVar394 = auVar483._0_2_;
        sVar554 = auVar483._2_2_;
        bVar6 = (0 < sVar554) * (sVar554 < 0x100) * auVar483[2] - (0xff < sVar554);
        sVar554 = auVar483._4_2_;
        sVar413 = auVar483._6_2_;
        cVar31 = (0 < sVar413) * (sVar413 < 0x100) * auVar483[6] - (0xff < sVar413);
        uVar345 = CONCAT13(cVar31,CONCAT12((0 < sVar554) * (sVar554 < 0x100) * auVar483[4] -
                                           (0xff < sVar554),
                                           CONCAT11(bVar6,(0 < sVar394) * (sVar394 < 0x100) *
                                                          auVar483[0] - (0xff < sVar394))));
        sVar394 = auVar483._8_2_;
        sVar554 = auVar483._10_2_;
        cVar32 = (0 < sVar554) * (sVar554 < 0x100) * auVar483[10] - (0xff < sVar554);
        uVar366 = CONCAT15(cVar32,CONCAT14((0 < sVar394) * (sVar394 < 0x100) * auVar483[8] -
                                           (0xff < sVar394),uVar345));
        sVar394 = auVar483._12_2_;
        sVar554 = auVar483._14_2_;
        cVar33 = (0 < sVar554) * (sVar554 < 0x100) * auVar483[0xe] - (0xff < sVar554);
        uVar318 = CONCAT17(cVar33,CONCAT16((0 < sVar394) * (sVar394 < 0x100) * auVar483[0xc] -
                                           (0xff < sVar394),uVar366));
        sVar394 = auVar377._0_2_;
        sVar554 = auVar377._2_2_;
        cVar34 = (0 < sVar554) * (sVar554 < 0x100) * auVar377[2] - (0xff < sVar554);
        auVar451._0_10_ =
             CONCAT19(cVar34,CONCAT18((0 < sVar394) * (sVar394 < 0x100) * auVar377[0] -
                                      (0xff < sVar394),uVar318));
        sVar394 = auVar377._4_2_;
        auVar451[10] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[4] - (0xff < sVar394);
        sVar394 = auVar377._6_2_;
        cVar35 = (0 < sVar394) * (sVar394 < 0x100) * auVar377[6] - (0xff < sVar394);
        auVar451[0xb] = cVar35;
        sVar394 = auVar377._8_2_;
        auVar452[0xc] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[8] - (0xff < sVar394);
        auVar452._0_12_ = auVar451;
        sVar394 = auVar377._10_2_;
        cVar36 = (0 < sVar394) * (sVar394 < 0x100) * auVar377[10] - (0xff < sVar394);
        auVar452[0xd] = cVar36;
        sVar394 = auVar377._12_2_;
        auVar455[0xe] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[0xc] - (0xff < sVar394);
        auVar455._0_14_ = auVar452;
        sVar394 = auVar377._14_2_;
        cVar37 = (0 < sVar394) * (sVar394 < 0x100) * auVar377[0xe] - (0xff < sVar394);
        auVar455[0xf] = cVar37;
        auVar377 = *(undefined1 (*) [16])(puVar344 + -0x205);
        auVar504 = __LC6 & auVar455;
        uVar426 = (ushort)bVar6;
        uVar437 = (ushort)((uint)uVar345 >> 0x18);
        uVar439 = (ushort)((uint6)uVar366 >> 0x28);
        uVar441 = (ushort)((ulong)uVar318 >> 0x38);
        uVar443 = (ushort)((unkuint10)auVar451._0_10_ >> 0x48);
        uVar462 = auVar451._10_2_ >> 8;
        uVar465 = auVar452._12_2_ >> 8;
        uVar468 = auVar455._14_2_ >> 8;
        uVar364 = auVar377._0_2_ >> 8;
        uVar385 = auVar377._2_2_ >> 8;
        uVar386 = auVar377._4_2_ >> 8;
        uVar387 = auVar377._6_2_ >> 8;
        uVar388 = auVar377._8_2_ >> 8;
        uVar390 = auVar377._10_2_ >> 8;
        uVar391 = auVar377._12_2_ >> 8;
        uVar392 = auVar377._14_2_ >> 8;
        bVar7 = (uVar385 != 0) * (uVar385 < 0x100) * auVar377[3] - (0xff < uVar385);
        cVar38 = (uVar387 != 0) * (uVar387 < 0x100) * auVar377[7] - (0xff < uVar387);
        uVar345 = CONCAT13(cVar38,CONCAT12((uVar386 != 0) * (uVar386 < 0x100) * auVar377[5] -
                                           (0xff < uVar386),
                                           CONCAT11(bVar7,(uVar364 != 0) * (uVar364 < 0x100) *
                                                          auVar377[1] - (0xff < uVar364))));
        cVar39 = (uVar390 != 0) * (uVar390 < 0x100) * auVar377[0xb] - (0xff < uVar390);
        uVar366 = CONCAT15(cVar39,CONCAT14((uVar388 != 0) * (uVar388 < 0x100) * auVar377[9] -
                                           (0xff < uVar388),uVar345));
        cVar40 = (uVar392 != 0) * (uVar392 < 0x100) * auVar377[0xf] - (0xff < uVar392);
        uVar318 = CONCAT17(cVar40,CONCAT16((uVar391 != 0) * (uVar391 < 0x100) * auVar377[0xd] -
                                           (0xff < uVar391),uVar366));
        cVar41 = (uVar412 != 0) * (uVar412 < 0x100) * auVar379[3] - (0xff < uVar412);
        auVar369._0_10_ =
             CONCAT19(cVar41,CONCAT18((uVar393 != 0) * (uVar393 < 0x100) * auVar379[1] -
                                      (0xff < uVar393),uVar318));
        auVar369[10] = (uVar414 != 0) * (uVar414 < 0x100) * auVar379[5] - (0xff < uVar414);
        cVar42 = (uVar416 != 0) * (uVar416 < 0x100) * auVar379[7] - (0xff < uVar416);
        auVar369[0xb] = cVar42;
        auVar373[0xc] = (uVar418 != 0) * (uVar418 < 0x100) * auVar379[9] - (0xff < uVar418);
        auVar373._0_12_ = auVar369;
        cVar43 = (uVar420 != 0) * (uVar420 < 0x100) * auVar379[0xb] - (0xff < uVar420);
        auVar373[0xd] = cVar43;
        auVar378[0xe] = (uVar422 != 0) * (uVar422 < 0x100) * auVar379[0xd] - (0xff < uVar422);
        auVar378._0_14_ = auVar373;
        cVar44 = (uVar424 != 0) * (uVar424 < 0x100) * auVar379[0xf] - (0xff < uVar424);
        auVar378[0xf] = cVar44;
        auVar376 = __LC6 & auVar484;
        uVar470 = (ushort)bVar313;
        uVar485 = (ushort)((uint)uVar474 >> 0x18);
        uVar487 = (ushort)((uint6)uVar475 >> 0x28);
        uVar489 = (ushort)((ulong)uVar476 >> 0x38);
        uVar491 = (ushort)((unkuint10)auVar479._0_10_ >> 0x48);
        uVar493 = auVar479._10_2_ >> 8;
        uVar494 = auVar480._12_2_ >> 8;
        uVar385 = auVar484._14_2_ >> 8;
        sVar394 = auVar376._0_2_;
        sVar415 = auVar376._2_2_;
        sVar419 = auVar376._4_2_;
        sVar423 = auVar376._6_2_;
        sVar427 = auVar376._8_2_;
        sVar440 = auVar376._10_2_;
        sVar444 = auVar376._12_2_;
        sVar554 = auVar376._14_2_;
        cVar45 = (0 < sVar554) * (sVar554 < 0x100) * auVar376[0xe] - (0xff < sVar554);
        sVar554 = auVar504._0_2_;
        bVar11 = (0 < sVar554) * (sVar554 < 0x100) * auVar504[0] - (0xff < sVar554);
        uVar364 = CONCAT11(bVar11,cVar45);
        sVar554 = auVar504._2_2_;
        bVar9 = (0 < sVar554) * (sVar554 < 0x100) * auVar504[2] - (0xff < sVar554);
        uVar225 = CONCAT12(bVar9,uVar364);
        sVar554 = auVar504._4_2_;
        bVar10 = (0 < sVar554) * (sVar554 < 0x100) * auVar504[4] - (0xff < sVar554);
        uVar315 = CONCAT13(bVar10,uVar225);
        sVar554 = auVar504._6_2_;
        bVar8 = (0 < sVar554) * (sVar554 < 0x100) * auVar504[6] - (0xff < sVar554);
        uVar273 = CONCAT14(bVar8,uVar315);
        sVar554 = auVar504._8_2_;
        bVar12 = (0 < sVar554) * (sVar554 < 0x100) * auVar504[8] - (0xff < sVar554);
        auVar303[5] = bVar12;
        auVar303._0_5_ = uVar273;
        sVar497 = auVar504._10_2_;
        sVar507 = auVar504._12_2_;
        sVar509 = auVar504._14_2_;
        cVar23 = (uVar385 != 0) * (uVar385 < 0x100) * cVar23 - (0xff < uVar385);
        bVar6 = (uVar426 != 0) * (uVar426 < 0x100) * bVar6 - (0xff < uVar426);
        uVar385 = CONCAT11(bVar6,cVar23);
        bVar46 = (uVar437 != 0) * (uVar437 < 0x100) * cVar31 - (0xff < uVar437);
        uVar226 = CONCAT12(bVar46,uVar385);
        bVar47 = (uVar439 != 0) * (uVar439 < 0x100) * cVar32 - (0xff < uVar439);
        uVar347 = CONCAT13(bVar47,uVar226);
        bVar48 = (uVar441 != 0) * (uVar441 < 0x100) * cVar33 - (0xff < uVar441);
        uVar274 = CONCAT14(bVar48,uVar347);
        bVar49 = (uVar443 != 0) * (uVar443 < 0x100) * cVar34 - (0xff < uVar443);
        auVar306[5] = bVar49;
        auVar306._0_5_ = uVar274;
        auVar505 = __LC6 & auVar434;
        auVar483 = __LC6 & auVar378;
        uVar387 = (ushort)bVar7;
        uVar388 = (ushort)((uint)uVar345 >> 0x18);
        uVar390 = (ushort)((uint6)uVar366 >> 0x28);
        uVar391 = (ushort)((ulong)uVar318 >> 0x38);
        uVar392 = (ushort)((unkuint10)auVar369._0_10_ >> 0x48);
        uVar418 = auVar369._10_2_ >> 8;
        uVar422 = auVar373._12_2_ >> 8;
        uVar426 = auVar378._14_2_ >> 8;
        sVar554 = auVar505._0_2_;
        sVar458 = auVar505._2_2_;
        sVar464 = auVar505._4_2_;
        sVar469 = auVar505._6_2_;
        sVar486 = auVar505._8_2_;
        sVar490 = auVar505._10_2_;
        sVar495 = auVar505._12_2_;
        sVar413 = auVar505._14_2_;
        cVar31 = (0 < sVar413) * (sVar413 < 0x100) * auVar505[0xe] - (0xff < sVar413);
        sVar413 = auVar483._0_2_;
        bVar50 = (0 < sVar413) * (sVar413 < 0x100) * auVar483[0] - (0xff < sVar413);
        uVar386 = CONCAT11(bVar50,cVar31);
        sVar413 = auVar483._2_2_;
        bVar51 = (0 < sVar413) * (sVar413 < 0x100) * auVar483[2] - (0xff < sVar413);
        uVar227 = CONCAT12(bVar51,uVar386);
        sVar413 = auVar483._4_2_;
        bVar52 = (0 < sVar413) * (sVar413 < 0x100) * auVar483[4] - (0xff < sVar413);
        uVar316 = CONCAT13(bVar52,uVar227);
        sVar413 = auVar483._6_2_;
        bVar53 = (0 < sVar413) * (sVar413 < 0x100) * auVar483[6] - (0xff < sVar413);
        uVar275 = CONCAT14(bVar53,uVar316);
        sVar413 = auVar483._8_2_;
        bVar54 = (0 < sVar413) * (sVar413 < 0x100) * auVar483[8] - (0xff < sVar413);
        auVar305[5] = bVar54;
        auVar305._0_5_ = uVar275;
        sVar511 = auVar483._10_2_;
        sVar512 = auVar483._12_2_;
        sVar526 = auVar483._14_2_;
        auVar377 = *(undefined1 (*) [16])(pcVar338 + 0x30);
        uVar449 = (ushort)bVar5;
        uVar456 = (ushort)((uint)uVar428 >> 0x18);
        uVar457 = (ushort)((uint6)uVar429 >> 0x28);
        uVar459 = (ushort)((ulong)uVar321 >> 0x38);
        uVar461 = (ushort)((unkuint10)auVar430._0_10_ >> 0x48);
        uVar463 = auVar430._10_2_ >> 8;
        uVar466 = auVar431._12_2_ >> 8;
        uVar393 = auVar434._14_2_ >> 8;
        cVar30 = (uVar393 != 0) * (uVar393 < 0x100) * cVar30 - (0xff < uVar393);
        bVar7 = (uVar387 != 0) * (uVar387 < 0x100) * bVar7 - (0xff < uVar387);
        uVar387 = CONCAT11(bVar7,cVar30);
        bVar55 = (uVar388 != 0) * (uVar388 < 0x100) * cVar38 - (0xff < uVar388);
        uVar228 = CONCAT12(bVar55,uVar387);
        bVar56 = (uVar390 != 0) * (uVar390 < 0x100) * cVar39 - (0xff < uVar390);
        uVar354 = CONCAT13(bVar56,uVar228);
        bVar57 = (uVar391 != 0) * (uVar391 < 0x100) * cVar40 - (0xff < uVar391);
        uVar276 = CONCAT14(bVar57,uVar354);
        bVar58 = (uVar392 != 0) * (uVar392 < 0x100) * cVar41 - (0xff < uVar392);
        auVar309[5] = bVar58;
        auVar309._0_5_ = uVar276;
        uVar420 = auVar377._0_2_ >> 8;
        uVar424 = auVar377._2_2_ >> 8;
        uVar437 = auVar377._4_2_ >> 8;
        uVar439 = auVar377._6_2_ >> 8;
        uVar441 = auVar377._8_2_ >> 8;
        uVar443 = auVar377._10_2_ >> 8;
        uVar445 = auVar377._12_2_ >> 8;
        uVar447 = auVar377._14_2_ >> 8;
        auVar379 = *(undefined1 (*) [16])(pcVar338 + 0x10) & __LC6;
        sVar413 = auVar541._0_2_;
        sVar562 = auVar541._2_2_;
        bVar59 = (0 < sVar562) * (sVar562 < 0x100) * auVar541[2] - (0xff < sVar562);
        sVar562 = auVar541._4_2_;
        sVar417 = auVar541._6_2_;
        cVar32 = (0 < sVar417) * (sVar417 < 0x100) * auVar541[6] - (0xff < sVar417);
        uVar345 = CONCAT13(cVar32,CONCAT12((0 < sVar562) * (sVar562 < 0x100) * auVar541[4] -
                                           (0xff < sVar562),
                                           CONCAT11(bVar59,(0 < sVar413) * (sVar413 < 0x100) *
                                                           auVar541[0] - (0xff < sVar413))));
        sVar413 = auVar541._8_2_;
        sVar562 = auVar541._10_2_;
        cVar33 = (0 < sVar562) * (sVar562 < 0x100) * auVar541[10] - (0xff < sVar562);
        uVar366 = CONCAT15(cVar33,CONCAT14((0 < sVar413) * (sVar413 < 0x100) * auVar541[8] -
                                           (0xff < sVar413),uVar345));
        sVar413 = auVar541._12_2_;
        sVar562 = auVar541._14_2_;
        cVar34 = (0 < sVar562) * (sVar562 < 0x100) * auVar541[0xe] - (0xff < sVar562);
        uVar318 = CONCAT17(cVar34,CONCAT16((0 < sVar413) * (sVar413 < 0x100) * auVar541[0xc] -
                                           (0xff < sVar413),uVar366));
        sVar413 = auVar379._0_2_;
        sVar562 = auVar379._2_2_;
        cVar38 = (0 < sVar562) * (sVar562 < 0x100) * auVar379[2] - (0xff < sVar562);
        auVar539._0_10_ =
             CONCAT19(cVar38,CONCAT18((0 < sVar413) * (sVar413 < 0x100) * auVar379[0] -
                                      (0xff < sVar413),uVar318));
        sVar413 = auVar379._4_2_;
        auVar539[10] = (0 < sVar413) * (sVar413 < 0x100) * auVar379[4] - (0xff < sVar413);
        sVar413 = auVar379._6_2_;
        cVar39 = (0 < sVar413) * (sVar413 < 0x100) * auVar379[6] - (0xff < sVar413);
        auVar539[0xb] = cVar39;
        sVar413 = auVar379._8_2_;
        auVar540[0xc] = (0 < sVar413) * (sVar413 < 0x100) * auVar379[8] - (0xff < sVar413);
        auVar540._0_12_ = auVar539;
        sVar413 = auVar379._10_2_;
        cVar40 = (0 < sVar413) * (sVar413 < 0x100) * auVar379[10] - (0xff < sVar413);
        auVar540[0xd] = cVar40;
        sVar413 = auVar379._12_2_;
        auVar542[0xe] = (0 < sVar413) * (sVar413 < 0x100) * auVar379[0xc] - (0xff < sVar413);
        auVar542._0_14_ = auVar540;
        sVar413 = auVar379._14_2_;
        cVar41 = (0 < sVar413) * (sVar413 < 0x100) * auVar379[0xe] - (0xff < sVar413);
        auVar542[0xf] = cVar41;
        auVar379 = *(undefined1 (*) [16])(pcVar338 + 0x10);
        auVar541 = __LC6 & auVar542;
        uVar538 = (ushort)bVar59;
        uVar543 = (ushort)((uint)uVar345 >> 0x18);
        uVar544 = (ushort)((uint6)uVar366 >> 0x28);
        uVar545 = (ushort)((ulong)uVar318 >> 0x38);
        uVar546 = (ushort)((unkuint10)auVar539._0_10_ >> 0x48);
        uVar547 = auVar539._10_2_ >> 8;
        uVar548 = auVar540._12_2_ >> 8;
        uVar549 = auVar542._14_2_ >> 8;
        uVar388 = auVar379._0_2_ >> 8;
        uVar390 = auVar379._2_2_ >> 8;
        uVar391 = auVar379._4_2_ >> 8;
        uVar392 = auVar379._6_2_ >> 8;
        uVar393 = auVar379._8_2_ >> 8;
        uVar412 = auVar379._10_2_ >> 8;
        uVar414 = auVar379._12_2_ >> 8;
        uVar416 = auVar379._14_2_ >> 8;
        bVar60 = (uVar518 != 0) * (uVar518 < 0x100) * auVar380[3] - (0xff < uVar518);
        cVar61 = (uVar520 != 0) * (uVar520 < 0x100) * auVar380[7] - (0xff < uVar520);
        uVar428 = CONCAT13(cVar61,CONCAT12((uVar519 != 0) * (uVar519 < 0x100) * auVar380[5] -
                                           (0xff < uVar519),
                                           CONCAT11(bVar60,(uVar513 != 0) * (uVar513 < 0x100) *
                                                           auVar380[1] - (0xff < uVar513))));
        cVar62 = (uVar523 != 0) * (uVar523 < 0x100) * auVar380[0xb] - (0xff < uVar523);
        uVar429 = CONCAT15(cVar62,CONCAT14((uVar521 != 0) * (uVar521 < 0x100) * auVar380[9] -
                                           (0xff < uVar521),uVar428));
        cVar63 = (uVar525 != 0) * (uVar525 < 0x100) * auVar380[0xf] - (0xff < uVar525);
        uVar321 = CONCAT17(cVar63,CONCAT16((uVar524 != 0) * (uVar524 < 0x100) * auVar380[0xd] -
                                           (0xff < uVar524),uVar429));
        cVar64 = (uVar390 != 0) * (uVar390 < 0x100) * auVar379[3] - (0xff < uVar390);
        auVar514._0_10_ =
             CONCAT19(cVar64,CONCAT18((uVar388 != 0) * (uVar388 < 0x100) * auVar379[1] -
                                      (0xff < uVar388),uVar321));
        auVar514[10] = (uVar391 != 0) * (uVar391 < 0x100) * auVar379[5] - (0xff < uVar391);
        cVar65 = (uVar392 != 0) * (uVar392 < 0x100) * auVar379[7] - (0xff < uVar392);
        auVar514[0xb] = cVar65;
        auVar515[0xc] = (uVar393 != 0) * (uVar393 < 0x100) * auVar379[9] - (0xff < uVar393);
        auVar515._0_12_ = auVar514;
        cVar66 = (uVar412 != 0) * (uVar412 < 0x100) * auVar379[0xb] - (0xff < uVar412);
        auVar515[0xd] = cVar66;
        auVar517[0xe] = (uVar414 != 0) * (uVar414 < 0x100) * auVar379[0xd] - (0xff < uVar414);
        auVar517._0_14_ = auVar515;
        cVar67 = (uVar416 != 0) * (uVar416 < 0x100) * auVar379[0xf] - (0xff < uVar416);
        auVar517[0xf] = cVar67;
        auVar380 = *(undefined1 (*) [16])(pcVar338 + 0x30) & __LC6;
        sVar413 = auVar529._0_2_;
        sVar562 = auVar529._2_2_;
        bVar68 = (0 < sVar562) * (sVar562 < 0x100) * auVar529[2] - (0xff < sVar562);
        sVar562 = auVar529._4_2_;
        sVar417 = auVar529._6_2_;
        cVar69 = (0 < sVar417) * (sVar417 < 0x100) * auVar529[6] - (0xff < sVar417);
        uVar474 = CONCAT13(cVar69,CONCAT12((0 < sVar562) * (sVar562 < 0x100) * auVar529[4] -
                                           (0xff < sVar562),
                                           CONCAT11(bVar68,(0 < sVar413) * (sVar413 < 0x100) *
                                                           auVar529[0] - (0xff < sVar413))));
        sVar413 = auVar529._8_2_;
        sVar562 = auVar529._10_2_;
        cVar70 = (0 < sVar562) * (sVar562 < 0x100) * auVar529[10] - (0xff < sVar562);
        uVar475 = CONCAT15(cVar70,CONCAT14((0 < sVar413) * (sVar413 < 0x100) * auVar529[8] -
                                           (0xff < sVar413),uVar474));
        sVar413 = auVar529._12_2_;
        sVar562 = auVar529._14_2_;
        cVar71 = (0 < sVar562) * (sVar562 < 0x100) * auVar529[0xe] - (0xff < sVar562);
        uVar476 = CONCAT17(cVar71,CONCAT16((0 < sVar413) * (sVar413 < 0x100) * auVar529[0xc] -
                                           (0xff < sVar413),uVar475));
        sVar413 = auVar380._0_2_;
        sVar562 = auVar380._2_2_;
        cVar72 = (0 < sVar562) * (sVar562 < 0x100) * auVar380[2] - (0xff < sVar562);
        auVar527._0_10_ =
             CONCAT19(cVar72,CONCAT18((0 < sVar413) * (sVar413 < 0x100) * auVar380[0] -
                                      (0xff < sVar413),uVar476));
        sVar413 = auVar380._4_2_;
        auVar527[10] = (0 < sVar413) * (sVar413 < 0x100) * auVar380[4] - (0xff < sVar413);
        sVar413 = auVar380._6_2_;
        cVar73 = (0 < sVar413) * (sVar413 < 0x100) * auVar380[6] - (0xff < sVar413);
        auVar527[0xb] = cVar73;
        sVar413 = auVar380._8_2_;
        auVar528[0xc] = (0 < sVar413) * (sVar413 < 0x100) * auVar380[8] - (0xff < sVar413);
        auVar528._0_12_ = auVar527;
        sVar413 = auVar380._10_2_;
        cVar74 = (0 < sVar413) * (sVar413 < 0x100) * auVar380[10] - (0xff < sVar413);
        auVar528[0xd] = cVar74;
        sVar413 = auVar380._12_2_;
        auVar530[0xe] = (0 < sVar413) * (sVar413 < 0x100) * auVar380[0xc] - (0xff < sVar413);
        auVar530._0_14_ = auVar528;
        sVar413 = auVar380._14_2_;
        cVar75 = (0 < sVar413) * (sVar413 < 0x100) * auVar380[0xe] - (0xff < sVar413);
        auVar530[0xf] = cVar75;
        auVar380 = *(undefined1 (*) [16])(pcVar338 + 0x20);
        uVar388 = auVar380._0_2_ >> 8;
        uVar390 = auVar380._2_2_ >> 8;
        uVar391 = auVar380._4_2_ >> 8;
        uVar392 = auVar380._6_2_ >> 8;
        uVar393 = auVar380._8_2_ >> 8;
        uVar412 = auVar380._10_2_ >> 8;
        uVar414 = auVar380._12_2_ >> 8;
        uVar416 = auVar380._14_2_ >> 8;
        bVar76 = (uVar390 != 0) * (uVar390 < 0x100) * auVar380[3] - (0xff < uVar390);
        cVar77 = (uVar392 != 0) * (uVar392 < 0x100) * auVar380[7] - (0xff < uVar392);
        uVar345 = CONCAT13(cVar77,CONCAT12((uVar391 != 0) * (uVar391 < 0x100) * auVar380[5] -
                                           (0xff < uVar391),
                                           CONCAT11(bVar76,(uVar388 != 0) * (uVar388 < 0x100) *
                                                           auVar380[1] - (0xff < uVar388))));
        cVar78 = (uVar412 != 0) * (uVar412 < 0x100) * auVar380[0xb] - (0xff < uVar412);
        uVar366 = CONCAT15(cVar78,CONCAT14((uVar393 != 0) * (uVar393 < 0x100) * auVar380[9] -
                                           (0xff < uVar393),uVar345));
        cVar79 = (uVar416 != 0) * (uVar416 < 0x100) * auVar380[0xf] - (0xff < uVar416);
        uVar318 = CONCAT17(cVar79,CONCAT16((uVar414 != 0) * (uVar414 < 0x100) * auVar380[0xd] -
                                           (0xff < uVar414),uVar366));
        cVar80 = (uVar424 != 0) * (uVar424 < 0x100) * auVar377[3] - (0xff < uVar424);
        auVar370._0_10_ =
             CONCAT19(cVar80,CONCAT18((uVar420 != 0) * (uVar420 < 0x100) * auVar377[1] -
                                      (0xff < uVar420),uVar318));
        auVar370[10] = (uVar437 != 0) * (uVar437 < 0x100) * auVar377[5] - (0xff < uVar437);
        cVar81 = (uVar439 != 0) * (uVar439 < 0x100) * auVar377[7] - (0xff < uVar439);
        auVar370[0xb] = cVar81;
        auVar374[0xc] = (uVar441 != 0) * (uVar441 < 0x100) * auVar377[9] - (0xff < uVar441);
        auVar374._0_12_ = auVar370;
        cVar82 = (uVar443 != 0) * (uVar443 < 0x100) * auVar377[0xb] - (0xff < uVar443);
        auVar374[0xd] = cVar82;
        auVar381[0xe] = (uVar445 != 0) * (uVar445 < 0x100) * auVar377[0xd] - (0xff < uVar445);
        auVar381._0_14_ = auVar374;
        cVar83 = (uVar447 != 0) * (uVar447 < 0x100) * auVar377[0xf] - (0xff < uVar447);
        auVar381[0xf] = cVar83;
        auVar380 = __LC6 & auVar530;
        uVar390 = (ushort)bVar68;
        uVar391 = (ushort)((uint)uVar474 >> 0x18);
        uVar392 = (ushort)((uint6)uVar475 >> 0x28);
        uVar393 = (ushort)((ulong)uVar476 >> 0x38);
        uVar412 = (ushort)((unkuint10)auVar527._0_10_ >> 0x48);
        uVar520 = auVar527._10_2_ >> 8;
        uVar521 = auVar528._12_2_ >> 8;
        uVar523 = auVar530._14_2_ >> 8;
        sVar413 = auVar541._0_2_;
        sVar417 = auVar541._2_2_;
        sVar421 = auVar541._4_2_;
        sVar425 = auVar541._6_2_;
        sVar438 = auVar541._8_2_;
        sVar442 = auVar541._10_2_;
        sVar446 = auVar541._12_2_;
        sVar562 = auVar541._14_2_;
        cVar84 = (0 < sVar562) * (sVar562 < 0x100) * auVar541[0xe] - (0xff < sVar562);
        sVar562 = auVar380._0_2_;
        bVar85 = (0 < sVar562) * (sVar562 < 0x100) * auVar380[0] - (0xff < sVar562);
        uVar388 = CONCAT11(bVar85,cVar84);
        sVar562 = auVar380._2_2_;
        bVar86 = (0 < sVar562) * (sVar562 < 0x100) * auVar380[2] - (0xff < sVar562);
        uVar241 = CONCAT12(bVar86,uVar388);
        sVar562 = auVar380._4_2_;
        bVar87 = (0 < sVar562) * (sVar562 < 0x100) * auVar380[4] - (0xff < sVar562);
        uVar269 = CONCAT13(bVar87,uVar241);
        sVar562 = auVar380._6_2_;
        bVar88 = (0 < sVar562) * (sVar562 < 0x100) * auVar380[6] - (0xff < sVar562);
        uVar281 = CONCAT14(bVar88,uVar269);
        sVar562 = auVar380._8_2_;
        bVar89 = (0 < sVar562) * (sVar562 < 0x100) * auVar380[8] - (0xff < sVar562);
        auVar302[5] = bVar89;
        auVar302._0_5_ = uVar281;
        sVar506 = auVar380._10_2_;
        sVar508 = auVar380._12_2_;
        sVar531 = auVar380._14_2_;
        cVar41 = (uVar549 != 0) * (uVar549 < 0x100) * cVar41 - (0xff < uVar549);
        bVar68 = (uVar390 != 0) * (uVar390 < 0x100) * bVar68 - (0xff < uVar390);
        uVar390 = CONCAT11(bVar68,cVar41);
        bVar90 = (uVar391 != 0) * (uVar391 < 0x100) * cVar69 - (0xff < uVar391);
        uVar242 = CONCAT12(bVar90,uVar390);
        bVar91 = (uVar392 != 0) * (uVar392 < 0x100) * cVar70 - (0xff < uVar392);
        uVar270 = CONCAT13(bVar91,uVar242);
        bVar92 = (uVar393 != 0) * (uVar393 < 0x100) * cVar71 - (0xff < uVar393);
        uVar282 = CONCAT14(bVar92,uVar270);
        bVar93 = (uVar412 != 0) * (uVar412 < 0x100) * cVar72 - (0xff < uVar412);
        auVar307[5] = bVar93;
        auVar307._0_5_ = uVar282;
        auVar377 = __LC6 & auVar381;
        auVar379 = __LC6 & auVar517;
        uVar392 = (ushort)bVar76;
        uVar393 = (ushort)((uint)uVar345 >> 0x18);
        uVar412 = (ushort)((uint6)uVar366 >> 0x28);
        uVar414 = (ushort)((ulong)uVar318 >> 0x38);
        uVar416 = (ushort)((unkuint10)auVar370._0_10_ >> 0x48);
        uVar420 = auVar370._10_2_ >> 8;
        uVar424 = auVar374._12_2_ >> 8;
        uVar437 = auVar381._14_2_ >> 8;
        uVar439 = (ushort)bVar60;
        uVar441 = (ushort)((uint)uVar428 >> 0x18);
        uVar443 = (ushort)((uint6)uVar429 >> 0x28);
        uVar445 = (ushort)((ulong)uVar321 >> 0x38);
        uVar447 = (ushort)((unkuint10)auVar514._0_10_ >> 0x48);
        uVar513 = auVar514._10_2_ >> 8;
        uVar518 = auVar515._12_2_ >> 8;
        uVar519 = auVar517._14_2_ >> 8;
        sVar562 = auVar379._0_2_;
        sVar460 = auVar379._2_2_;
        sVar467 = auVar379._4_2_;
        sVar471 = auVar379._6_2_;
        sVar488 = auVar379._8_2_;
        sVar492 = auVar379._10_2_;
        sVar496 = auVar379._12_2_;
        sVar510 = auVar379._14_2_;
        cVar69 = (0 < sVar510) * (sVar510 < 0x100) * auVar379[0xe] - (0xff < sVar510);
        sVar510 = auVar377._0_2_;
        bVar94 = (0 < sVar510) * (sVar510 < 0x100) * auVar377[0] - (0xff < sVar510);
        uVar391 = CONCAT11(bVar94,cVar69);
        sVar510 = auVar377._2_2_;
        bVar95 = (0 < sVar510) * (sVar510 < 0x100) * auVar377[2] - (0xff < sVar510);
        uVar243 = CONCAT12(bVar95,uVar391);
        sVar510 = auVar377._4_2_;
        bVar96 = (0 < sVar510) * (sVar510 < 0x100) * auVar377[4] - (0xff < sVar510);
        uVar271 = CONCAT13(bVar96,uVar243);
        sVar510 = auVar377._6_2_;
        bVar97 = (0 < sVar510) * (sVar510 < 0x100) * auVar377[6] - (0xff < sVar510);
        uVar283 = CONCAT14(bVar97,uVar271);
        sVar510 = auVar377._8_2_;
        bVar98 = (0 < sVar510) * (sVar510 < 0x100) * auVar377[8] - (0xff < sVar510);
        auVar304[5] = bVar98;
        auVar304._0_5_ = uVar283;
        sVar510 = auVar377._10_2_;
        sVar533 = auVar377._12_2_;
        sVar532 = auVar377._14_2_;
        cVar67 = (uVar519 != 0) * (uVar519 < 0x100) * cVar67 - (0xff < uVar519);
        bVar76 = (uVar392 != 0) * (uVar392 < 0x100) * bVar76 - (0xff < uVar392);
        uVar392 = CONCAT11(bVar76,cVar67);
        bVar99 = (uVar393 != 0) * (uVar393 < 0x100) * cVar77 - (0xff < uVar393);
        uVar244 = CONCAT12(bVar99,uVar392);
        bVar100 = (uVar412 != 0) * (uVar412 < 0x100) * cVar78 - (0xff < uVar412);
        uVar272 = CONCAT13(bVar100,uVar244);
        bVar101 = (uVar414 != 0) * (uVar414 < 0x100) * cVar79 - (0xff < uVar414);
        uVar284 = CONCAT14(bVar101,uVar272);
        bVar102 = (uVar416 != 0) * (uVar416 < 0x100) * cVar80 - (0xff < uVar416);
        auVar308[5] = bVar102;
        auVar308._0_5_ = uVar284;
        auVar302._6_8_ = 0;
        auVar113[0xe] = cVar84;
        auVar113._0_14_ = auVar302 << 0x38;
        uVar320 = CONCAT26(auVar113._13_2_,
                           CONCAT15((0 < sVar446) * (sVar446 < 0x100) * auVar541[0xc] -
                                    (0xff < sVar446),uVar281));
        auVar285._4_8_ = 0;
        auVar285._0_4_ = uVar269;
        auVar134._12_3_ = (int3)((ulong)uVar320 >> 0x28);
        auVar134._0_12_ = auVar285 << 0x38;
        uVar476 = CONCAT44(auVar134._11_4_,
                           CONCAT13((0 < sVar442) * (sVar442 < 0x100) * auVar541[10] -
                                    (0xff < sVar442),uVar241));
        auVar147._10_5_ = (int5)((ulong)uVar476 >> 0x18);
        auVar147._0_10_ = (unkuint10)uVar388 << 0x38;
        uVar318 = CONCAT62(auVar147._9_6_,
                           CONCAT11((0 < sVar438) * (sVar438 < 0x100) * auVar541[8] -
                                    (0xff < sVar438),cVar84));
        auVar183._7_8_ = 0;
        auVar183._0_7_ = (uint7)((ulong)uVar318 >> 8);
        Var166 = CONCAT81(SUB158(auVar183 << 0x40,7),
                          (0 < sVar425) * (sVar425 < 0x100) * auVar541[6] - (0xff < sVar425));
        auVar245._9_6_ = 0;
        auVar245._0_9_ = Var166;
        auVar184._1_10_ = SUB1510(auVar245 << 0x30,5);
        auVar184[0] = (0 < sVar421) * (sVar421 < 0x100) * auVar541[4] - (0xff < sVar421);
        auVar246._11_4_ = 0;
        auVar246._0_11_ = auVar184;
        auVar185._1_12_ = SUB1512(auVar246 << 0x20,3);
        auVar185[0] = (0 < sVar417) * (sVar417 < 0x100) * auVar541[2] - (0xff < sVar417);
        auVar303._6_8_ = 0;
        auVar114[0xe] = cVar45;
        auVar114._0_14_ = auVar303 << 0x38;
        uVar157 = CONCAT26(auVar114._13_2_,
                           CONCAT15((0 < sVar444) * (sVar444 < 0x100) * auVar376[0xc] -
                                    (0xff < sVar444),uVar273));
        auVar286._4_8_ = 0;
        auVar286._0_4_ = uVar315;
        auVar135._12_3_ = (int3)((ulong)uVar157 >> 0x28);
        auVar135._0_12_ = auVar286 << 0x38;
        uVar323 = CONCAT44(auVar135._11_4_,
                           CONCAT13((0 < sVar440) * (sVar440 < 0x100) * auVar376[10] -
                                    (0xff < sVar440),uVar225));
        auVar148._10_5_ = (int5)((ulong)uVar323 >> 0x18);
        auVar148._0_10_ = (unkuint10)uVar364 << 0x38;
        uVar321 = CONCAT62(auVar148._9_6_,
                           CONCAT11((0 < sVar427) * (sVar427 < 0x100) * auVar376[8] -
                                    (0xff < sVar427),cVar45));
        auVar186._7_8_ = 0;
        auVar186._0_7_ = (uint7)((ulong)uVar321 >> 8);
        Var170 = CONCAT81(SUB158(auVar186 << 0x40,7),
                          (0 < sVar423) * (sVar423 < 0x100) * auVar376[6] - (0xff < sVar423));
        auVar247._9_6_ = 0;
        auVar247._0_9_ = Var170;
        auVar187._1_10_ = SUB1510(auVar247 << 0x30,5);
        auVar187[0] = (0 < sVar419) * (sVar419 < 0x100) * auVar376[4] - (0xff < sVar419);
        auVar248._11_4_ = 0;
        auVar248._0_11_ = auVar187;
        auVar188._1_12_ = SUB1512(auVar248 << 0x20,3);
        auVar188[0] = (0 < sVar415) * (sVar415 < 0x100) * auVar376[2] - (0xff < sVar415);
        sVar427 = (ushort)(byte)((0 < sVar394) * (sVar394 < 0x100) * auVar376[0] - (0xff < sVar394))
                  - (ushort)(byte)((0 < sVar413) * (sVar413 < 0x100) * auVar541[0] -
                                  (0xff < sVar413));
        sVar438 = auVar188._0_2_ - auVar185._0_2_;
        sVar440 = auVar187._0_2_ - auVar184._0_2_;
        sVar442 = (short)Var170 - (short)Var166;
        sVar444 = (short)((ulong)uVar321 >> 8) - (short)((ulong)uVar318 >> 8);
        sVar446 = (short)((ulong)uVar323 >> 0x18) - (short)((ulong)uVar476 >> 0x18);
        sVar448 = (short)((ulong)uVar157 >> 0x28) - (short)((ulong)uVar320 >> 0x28);
        sVar450 = (auVar114._13_2_ >> 8) - (auVar113._13_2_ >> 8);
        sVar394 = (ushort)bVar11 - (ushort)bVar85;
        sVar413 = (ushort)bVar9 - (ushort)bVar86;
        sVar415 = (ushort)bVar10 - (ushort)bVar87;
        sVar417 = (ushort)bVar8 - (ushort)bVar88;
        sVar419 = (ushort)bVar12 - (ushort)bVar89;
        sVar421 = (ushort)(byte)((0 < sVar497) * (sVar497 < 0x100) * auVar504[10] - (0xff < sVar497)
                                ) -
                  (ushort)(byte)((0 < sVar506) * (sVar506 < 0x100) * auVar380[10] - (0xff < sVar506)
                                );
        sVar423 = (ushort)(byte)((0 < sVar507) * (sVar507 < 0x100) * auVar504[0xc] -
                                (0xff < sVar507)) -
                  (ushort)(byte)((0 < sVar508) * (sVar508 < 0x100) * auVar380[0xc] -
                                (0xff < sVar508));
        sVar425 = (ushort)(byte)((0 < sVar509) * (sVar509 < 0x100) * auVar504[0xe] -
                                (0xff < sVar509)) -
                  (ushort)(byte)((0 < sVar531) * (sVar531 < 0x100) * auVar380[0xe] -
                                (0xff < sVar531));
        auVar304._6_8_ = 0;
        auVar115[0xe] = cVar69;
        auVar115._0_14_ = auVar304 << 0x38;
        uVar320 = CONCAT26(auVar115._13_2_,
                           CONCAT15((0 < sVar496) * (sVar496 < 0x100) * auVar379[0xc] -
                                    (0xff < sVar496),uVar283));
        auVar287._4_8_ = 0;
        auVar287._0_4_ = uVar271;
        auVar136._12_3_ = (int3)((ulong)uVar320 >> 0x28);
        auVar136._0_12_ = auVar287 << 0x38;
        uVar476 = CONCAT44(auVar136._11_4_,
                           CONCAT13((0 < sVar492) * (sVar492 < 0x100) * auVar379[10] -
                                    (0xff < sVar492),uVar243));
        auVar149._10_5_ = (int5)((ulong)uVar476 >> 0x18);
        auVar149._0_10_ = (unkuint10)uVar391 << 0x38;
        uVar318 = CONCAT62(auVar149._9_6_,
                           CONCAT11((0 < sVar488) * (sVar488 < 0x100) * auVar379[8] -
                                    (0xff < sVar488),cVar69));
        auVar189._7_8_ = 0;
        auVar189._0_7_ = (uint7)((ulong)uVar318 >> 8);
        Var166 = CONCAT81(SUB158(auVar189 << 0x40,7),
                          (0 < sVar471) * (sVar471 < 0x100) * auVar379[6] - (0xff < sVar471));
        auVar249._9_6_ = 0;
        auVar249._0_9_ = Var166;
        auVar190._1_10_ = SUB1510(auVar249 << 0x30,5);
        auVar190[0] = (0 < sVar467) * (sVar467 < 0x100) * auVar379[4] - (0xff < sVar467);
        auVar250._11_4_ = 0;
        auVar250._0_11_ = auVar190;
        auVar191._1_12_ = SUB1512(auVar250 << 0x20,3);
        auVar191[0] = (0 < sVar460) * (sVar460 < 0x100) * auVar379[2] - (0xff < sVar460);
        auVar305._6_8_ = 0;
        auVar116[0xe] = cVar31;
        auVar116._0_14_ = auVar305 << 0x38;
        uVar157 = CONCAT26(auVar116._13_2_,
                           CONCAT15((0 < sVar495) * (sVar495 < 0x100) * auVar505[0xc] -
                                    (0xff < sVar495),uVar275));
        auVar288._4_8_ = 0;
        auVar288._0_4_ = uVar316;
        auVar137._12_3_ = (int3)((ulong)uVar157 >> 0x28);
        auVar137._0_12_ = auVar288 << 0x38;
        uVar323 = CONCAT44(auVar137._11_4_,
                           CONCAT13((0 < sVar490) * (sVar490 < 0x100) * auVar505[10] -
                                    (0xff < sVar490),uVar227));
        auVar150._10_5_ = (int5)((ulong)uVar323 >> 0x18);
        auVar150._0_10_ = (unkuint10)uVar386 << 0x38;
        uVar321 = CONCAT62(auVar150._9_6_,
                           CONCAT11((0 < sVar486) * (sVar486 < 0x100) * auVar505[8] -
                                    (0xff < sVar486),cVar31));
        auVar192._7_8_ = 0;
        auVar192._0_7_ = (uint7)((ulong)uVar321 >> 8);
        Var170 = CONCAT81(SUB158(auVar192 << 0x40,7),
                          (0 < sVar469) * (sVar469 < 0x100) * auVar505[6] - (0xff < sVar469));
        auVar251._9_6_ = 0;
        auVar251._0_9_ = Var170;
        auVar193._1_10_ = SUB1510(auVar251 << 0x30,5);
        auVar193[0] = (0 < sVar464) * (sVar464 < 0x100) * auVar505[4] - (0xff < sVar464);
        auVar252._11_4_ = 0;
        auVar252._0_11_ = auVar193;
        auVar194._1_12_ = SUB1512(auVar252 << 0x20,3);
        auVar194[0] = (0 < sVar458) * (sVar458 < 0x100) * auVar505[2] - (0xff < sVar458);
        sVar550 = (ushort)(byte)((0 < sVar554) * (sVar554 < 0x100) * auVar505[0] - (0xff < sVar554))
                  - (ushort)(byte)((0 < sVar562) * (sVar562 < 0x100) * auVar379[0] -
                                  (0xff < sVar562));
        sVar551 = auVar194._0_2_ - auVar191._0_2_;
        sVar552 = auVar193._0_2_ - auVar190._0_2_;
        sVar553 = (short)Var170 - (short)Var166;
        sVar554 = (short)((ulong)uVar321 >> 8) - (short)((ulong)uVar318 >> 8);
        sVar555 = (short)((ulong)uVar323 >> 0x18) - (short)((ulong)uVar476 >> 0x18);
        sVar556 = (short)((ulong)uVar157 >> 0x28) - (short)((ulong)uVar320 >> 0x28);
        sVar557 = (auVar116._13_2_ >> 8) - (auVar115._13_2_ >> 8);
        sVar497 = (ushort)bVar50 - (ushort)bVar94;
        sVar506 = (ushort)bVar51 - (ushort)bVar95;
        sVar507 = (ushort)bVar52 - (ushort)bVar96;
        sVar508 = (ushort)bVar53 - (ushort)bVar97;
        sVar509 = (ushort)bVar54 - (ushort)bVar98;
        sVar510 = (ushort)(byte)((0 < sVar511) * (sVar511 < 0x100) * auVar483[10] - (0xff < sVar511)
                                ) -
                  (ushort)(byte)((0 < sVar510) * (sVar510 < 0x100) * auVar377[10] - (0xff < sVar510)
                                );
        sVar511 = (ushort)(byte)((0 < sVar512) * (sVar512 < 0x100) * auVar483[0xc] -
                                (0xff < sVar512)) -
                  (ushort)(byte)((0 < sVar533) * (sVar533 < 0x100) * auVar377[0xc] -
                                (0xff < sVar533));
        sVar512 = (ushort)(byte)((0 < sVar526) * (sVar526 < 0x100) * auVar483[0xe] -
                                (0xff < sVar526)) -
                  (ushort)(byte)((0 < sVar532) * (sVar532 < 0x100) * auVar377[0xe] -
                                (0xff < sVar532));
        auVar306._6_8_ = 0;
        auVar117[0xe] = cVar23;
        auVar117._0_14_ = auVar306 << 0x38;
        uVar320 = CONCAT26(auVar117._13_2_,
                           CONCAT15((uVar494 != 0) * (uVar494 < 0x100) * cVar22 - (0xff < uVar494),
                                    uVar274));
        auVar289._4_8_ = 0;
        auVar289._0_4_ = uVar347;
        auVar138._12_3_ = (int3)((ulong)uVar320 >> 0x28);
        auVar138._0_12_ = auVar289 << 0x38;
        uVar476 = CONCAT44(auVar138._11_4_,
                           CONCAT13((uVar493 != 0) * (uVar493 < 0x100) * cVar314 - (0xff < uVar493),
                                    uVar226));
        auVar151._10_5_ = (int5)((ulong)uVar476 >> 0x18);
        auVar151._0_10_ = (unkuint10)uVar385 << 0x38;
        uVar318 = CONCAT62(auVar151._9_6_,
                           CONCAT11((uVar491 != 0) * (uVar491 < 0x100) * cVar21 - (0xff < uVar491),
                                    cVar23));
        auVar195._7_8_ = 0;
        auVar195._0_7_ = (uint7)((ulong)uVar318 >> 8);
        Var166 = CONCAT81(SUB158(auVar195 << 0x40,7),
                          (uVar489 != 0) * (uVar489 < 0x100) * cVar333 - (0xff < uVar489));
        auVar253._9_6_ = 0;
        auVar253._0_9_ = Var166;
        auVar196._1_10_ = SUB1510(auVar253 << 0x30,5);
        auVar196[0] = (uVar487 != 0) * (uVar487 < 0x100) * cVar20 - (0xff < uVar487);
        auVar254._11_4_ = 0;
        auVar254._0_11_ = auVar196;
        auVar197._1_12_ = SUB1512(auVar254 << 0x20,3);
        auVar197[0] = (uVar485 != 0) * (uVar485 < 0x100) * cVar19 - (0xff < uVar485);
        auVar307._6_8_ = 0;
        auVar118[0xe] = cVar41;
        auVar118._0_14_ = auVar307 << 0x38;
        uVar157 = CONCAT26(auVar118._13_2_,
                           CONCAT15((uVar548 != 0) * (uVar548 < 0x100) * cVar40 - (0xff < uVar548),
                                    uVar282));
        auVar290._4_8_ = 0;
        auVar290._0_4_ = uVar270;
        auVar139._12_3_ = (int3)((ulong)uVar157 >> 0x28);
        auVar139._0_12_ = auVar290 << 0x38;
        uVar323 = CONCAT44(auVar139._11_4_,
                           CONCAT13((uVar547 != 0) * (uVar547 < 0x100) * cVar39 - (0xff < uVar547),
                                    uVar242));
        auVar152._10_5_ = (int5)((ulong)uVar323 >> 0x18);
        auVar152._0_10_ = (unkuint10)uVar390 << 0x38;
        uVar321 = CONCAT62(auVar152._9_6_,
                           CONCAT11((uVar546 != 0) * (uVar546 < 0x100) * cVar38 - (0xff < uVar546),
                                    cVar41));
        auVar198._7_8_ = 0;
        auVar198._0_7_ = (uint7)((ulong)uVar321 >> 8);
        Var170 = CONCAT81(SUB158(auVar198 << 0x40,7),
                          (uVar545 != 0) * (uVar545 < 0x100) * cVar34 - (0xff < uVar545));
        auVar255._9_6_ = 0;
        auVar255._0_9_ = Var170;
        auVar199._1_10_ = SUB1510(auVar255 << 0x30,5);
        auVar199[0] = (uVar544 != 0) * (uVar544 < 0x100) * cVar33 - (0xff < uVar544);
        auVar256._11_4_ = 0;
        auVar256._0_11_ = auVar199;
        auVar200._1_12_ = SUB1512(auVar256 << 0x20,3);
        auVar200[0] = (uVar543 != 0) * (uVar543 < 0x100) * cVar32 - (0xff < uVar543);
        sVar442 = sVar442 * sVar442;
        uVar385 = sVar444 * sVar444;
        auVar261._2_2_ = uVar385;
        auVar261._0_2_ = sVar442;
        sVar558 = (ushort)(byte)((uVar470 != 0) * (uVar470 < 0x100) * bVar313 - (0xff < uVar470)) -
                  (ushort)(byte)((uVar538 != 0) * (uVar538 < 0x100) * bVar59 - (0xff < uVar538));
        sVar559 = auVar197._0_2_ - auVar200._0_2_;
        sVar560 = auVar196._0_2_ - auVar199._0_2_;
        sVar561 = (short)Var166 - (short)Var170;
        sVar562 = (short)((ulong)uVar318 >> 8) - (short)((ulong)uVar321 >> 8);
        sVar563 = (short)((ulong)uVar476 >> 0x18) - (short)((ulong)uVar323 >> 0x18);
        sVar564 = (short)((ulong)uVar320 >> 0x28) - (short)((ulong)uVar157 >> 0x28);
        sVar565 = (auVar117._13_2_ >> 8) - (auVar118._13_2_ >> 8);
        sVar553 = sVar553 * sVar553;
        uVar391 = sVar554 * sVar554;
        auVar262._2_2_ = uVar391;
        auVar262._0_2_ = sVar553;
        sVar471 = (ushort)bVar6 - (ushort)bVar68;
        sVar486 = (ushort)bVar46 - (ushort)bVar90;
        sVar488 = (ushort)bVar47 - (ushort)bVar91;
        sVar490 = (ushort)bVar48 - (ushort)bVar92;
        sVar492 = (ushort)bVar49 - (ushort)bVar93;
        sVar444 = (ushort)(byte)((uVar462 != 0) * (uVar462 < 0x100) * cVar35 - (0xff < uVar462)) -
                  (ushort)(byte)((uVar520 != 0) * (uVar520 < 0x100) * cVar73 - (0xff < uVar520));
        sVar495 = (ushort)(byte)((uVar465 != 0) * (uVar465 < 0x100) * cVar36 - (0xff < uVar465)) -
                  (ushort)(byte)((uVar521 != 0) * (uVar521 < 0x100) * cVar74 - (0xff < uVar521));
        sVar496 = (ushort)(byte)((uVar468 != 0) * (uVar468 < 0x100) * cVar37 - (0xff < uVar468)) -
                  (ushort)(byte)((uVar523 != 0) * (uVar523 < 0x100) * cVar75 - (0xff < uVar523));
        sVar561 = sVar561 * sVar561;
        uVar393 = sVar562 * sVar562;
        auVar263._2_2_ = uVar393;
        auVar263._0_2_ = sVar561;
        auVar308._6_8_ = 0;
        auVar119[0xe] = cVar67;
        auVar119._0_14_ = auVar308 << 0x38;
        uVar320 = CONCAT26(auVar119._13_2_,
                           CONCAT15((uVar518 != 0) * (uVar518 < 0x100) * cVar66 - (0xff < uVar518),
                                    uVar284));
        auVar291._4_8_ = 0;
        auVar291._0_4_ = uVar272;
        auVar140._12_3_ = (int3)((ulong)uVar320 >> 0x28);
        auVar140._0_12_ = auVar291 << 0x38;
        uVar476 = CONCAT44(auVar140._11_4_,
                           CONCAT13((uVar513 != 0) * (uVar513 < 0x100) * cVar65 - (0xff < uVar513),
                                    uVar244));
        auVar153._10_5_ = (int5)((ulong)uVar476 >> 0x18);
        auVar153._0_10_ = (unkuint10)uVar392 << 0x38;
        uVar318 = CONCAT62(auVar153._9_6_,
                           CONCAT11((uVar447 != 0) * (uVar447 < 0x100) * cVar64 - (0xff < uVar447),
                                    cVar67));
        auVar201._7_8_ = 0;
        auVar201._0_7_ = (uint7)((ulong)uVar318 >> 8);
        Var166 = CONCAT81(SUB158(auVar201 << 0x40,7),
                          (uVar445 != 0) * (uVar445 < 0x100) * cVar63 - (0xff < uVar445));
        auVar257._9_6_ = 0;
        auVar257._0_9_ = Var166;
        auVar202._1_10_ = SUB1510(auVar257 << 0x30,5);
        auVar202[0] = (uVar443 != 0) * (uVar443 < 0x100) * cVar62 - (0xff < uVar443);
        auVar258._11_4_ = 0;
        auVar258._0_11_ = auVar202;
        auVar203._1_12_ = SUB1512(auVar258 << 0x20,3);
        auVar203[0] = (uVar441 != 0) * (uVar441 < 0x100) * cVar61 - (0xff < uVar441);
        auVar309._6_8_ = 0;
        auVar120[0xe] = cVar30;
        auVar120._0_14_ = auVar309 << 0x38;
        uVar157 = CONCAT26(auVar120._13_2_,
                           CONCAT15((uVar466 != 0) * (uVar466 < 0x100) * cVar29 - (0xff < uVar466),
                                    uVar276));
        auVar292._4_8_ = 0;
        auVar292._0_4_ = uVar354;
        auVar141._12_3_ = (int3)((ulong)uVar157 >> 0x28);
        auVar141._0_12_ = auVar292 << 0x38;
        uVar323 = CONCAT44(auVar141._11_4_,
                           CONCAT13((uVar463 != 0) * (uVar463 < 0x100) * cVar28 - (0xff < uVar463),
                                    uVar228));
        auVar154._10_5_ = (int5)((ulong)uVar323 >> 0x18);
        auVar154._0_10_ = (unkuint10)uVar387 << 0x38;
        uVar321 = CONCAT62(auVar154._9_6_,
                           CONCAT11((uVar461 != 0) * (uVar461 < 0x100) * cVar27 - (0xff < uVar461),
                                    cVar30));
        auVar204._7_8_ = 0;
        auVar204._0_7_ = (uint7)((ulong)uVar321 >> 8);
        Var170 = CONCAT81(SUB158(auVar204 << 0x40,7),
                          (uVar459 != 0) * (uVar459 < 0x100) * cVar26 - (0xff < uVar459));
        auVar259._9_6_ = 0;
        auVar259._0_9_ = Var170;
        auVar205._1_10_ = SUB1510(auVar259 << 0x30,5);
        auVar205[0] = (uVar457 != 0) * (uVar457 < 0x100) * cVar25 - (0xff < uVar457);
        auVar260._11_4_ = 0;
        auVar260._0_11_ = auVar205;
        auVar206._1_12_ = SUB1512(auVar260 << 0x20,3);
        auVar206[0] = (uVar456 != 0) * (uVar456 < 0x100) * cVar24 - (0xff < uVar456);
        sVar526 = (ushort)(byte)((uVar449 != 0) * (uVar449 < 0x100) * bVar5 - (0xff < uVar449)) -
                  (ushort)(byte)((uVar439 != 0) * (uVar439 < 0x100) * bVar60 - (0xff < uVar439));
        sVar531 = auVar206._0_2_ - auVar203._0_2_;
        sVar532 = auVar205._0_2_ - auVar202._0_2_;
        sVar533 = (short)Var170 - (short)Var166;
        sVar534 = (short)((ulong)uVar321 >> 8) - (short)((ulong)uVar318 >> 8);
        sVar535 = (short)((ulong)uVar323 >> 0x18) - (short)((ulong)uVar476 >> 0x18);
        sVar536 = (short)((ulong)uVar157 >> 0x28) - (short)((ulong)uVar320 >> 0x28);
        sVar537 = (auVar120._13_2_ >> 8) - (auVar119._13_2_ >> 8);
        sVar417 = sVar417 * sVar417;
        uVar364 = sVar419 * sVar419;
        auVar265._2_2_ = uVar364;
        auVar265._0_2_ = sVar417;
        sVar554 = (ushort)bVar7 - (ushort)bVar76;
        sVar562 = (ushort)bVar55 - (ushort)bVar99;
        sVar458 = (ushort)bVar56 - (ushort)bVar100;
        sVar460 = (ushort)bVar57 - (ushort)bVar101;
        sVar419 = (ushort)bVar58 - (ushort)bVar102;
        sVar464 = (ushort)(byte)((uVar418 != 0) * (uVar418 < 0x100) * cVar42 - (0xff < uVar418)) -
                  (ushort)(byte)((uVar420 != 0) * (uVar420 < 0x100) * cVar81 - (0xff < uVar420));
        sVar467 = (ushort)(byte)((uVar422 != 0) * (uVar422 < 0x100) * cVar43 - (0xff < uVar422)) -
                  (ushort)(byte)((uVar424 != 0) * (uVar424 < 0x100) * cVar82 - (0xff < uVar424));
        sVar469 = (ushort)(byte)((uVar426 != 0) * (uVar426 < 0x100) * cVar44 - (0xff < uVar426)) -
                  (ushort)(byte)((uVar437 != 0) * (uVar437 < 0x100) * cVar83 - (0xff < uVar437));
        sVar533 = sVar533 * sVar533;
        uVar390 = sVar534 * sVar534;
        auVar267._2_2_ = uVar390;
        auVar267._0_2_ = sVar533;
        sVar508 = sVar508 * sVar508;
        uVar388 = sVar509 * sVar509;
        auVar264._2_2_ = uVar388;
        auVar264._0_2_ = sVar508;
        auVar261._4_8_ = 0;
        auVar128._12_2_ = sVar442;
        auVar128._0_12_ = auVar261 << 0x30;
        uVar318 = CONCAT44(auVar128._10_4_,CONCAT22(sVar440 * sVar440,sVar442));
        auVar207._6_8_ = 0;
        auVar207._0_6_ = (uint6)((ulong)uVar318 >> 0x10);
        auVar262._4_8_ = 0;
        auVar121._12_2_ = sVar553;
        auVar121._0_12_ = auVar262 << 0x30;
        uVar321 = CONCAT44(auVar121._10_4_,CONCAT22(sVar552 * sVar552,sVar553));
        auVar208._6_8_ = 0;
        auVar208._0_6_ = (uint6)((ulong)uVar321 >> 0x10);
        sVar490 = sVar490 * sVar490;
        uVar387 = sVar492 * sVar492;
        auVar266._2_2_ = uVar387;
        auVar266._0_2_ = sVar490;
        auVar263._4_8_ = 0;
        auVar122._12_2_ = sVar561;
        auVar122._0_12_ = auVar263 << 0x30;
        uVar476 = CONCAT44(auVar122._10_4_,CONCAT22(sVar560 * sVar560,sVar561));
        auVar209._6_8_ = 0;
        auVar209._0_6_ = (uint6)((ulong)uVar476 >> 0x10);
        sVar460 = sVar460 * sVar460;
        uVar386 = sVar419 * sVar419;
        auVar268._2_2_ = uVar386;
        auVar268._0_2_ = sVar460;
        auVar264._4_8_ = 0;
        auVar123._12_2_ = sVar508;
        auVar123._0_12_ = auVar264 << 0x30;
        uVar323 = CONCAT44(auVar123._10_4_,CONCAT22(sVar507 * sVar507,sVar508));
        auVar210._6_8_ = 0;
        auVar210._0_6_ = (uint6)((ulong)uVar323 >> 0x10);
        auVar265._4_8_ = 0;
        auVar124._12_2_ = sVar417;
        auVar124._0_12_ = auVar265 << 0x30;
        uVar320 = CONCAT44(auVar124._10_4_,CONCAT22(sVar415 * sVar415,sVar417));
        auVar211._6_8_ = 0;
        auVar211._0_6_ = (uint6)((ulong)uVar320 >> 0x10);
        auVar266._4_8_ = 0;
        auVar125._12_2_ = sVar490;
        auVar125._0_12_ = auVar266 << 0x30;
        uVar157 = CONCAT44(auVar125._10_4_,CONCAT22(sVar488 * sVar488,sVar490));
        auVar212._6_8_ = 0;
        auVar212._0_6_ = (uint6)((ulong)uVar157 >> 0x10);
        auVar267._4_8_ = 0;
        auVar126._12_2_ = sVar533;
        auVar126._0_12_ = auVar267 << 0x30;
        uVar158 = CONCAT44(auVar126._10_4_,CONCAT22(sVar532 * sVar532,sVar533));
        auVar213._6_8_ = 0;
        auVar213._0_6_ = (uint6)((ulong)uVar158 >> 0x10);
        auVar268._4_8_ = 0;
        auVar127._12_2_ = sVar460;
        auVar127._0_12_ = auVar268 << 0x30;
        uVar159 = CONCAT44(auVar127._10_4_,CONCAT22(sVar458 * sVar458,sVar460));
        auVar214._6_8_ = 0;
        auVar214._0_6_ = (uint6)((ulong)uVar159 >> 0x10);
        iVar389 = (int)((ulong)uVar318 >> 0x10) + (int)((ulong)uVar321 >> 0x10) +
                  (int)((ulong)uVar476 >> 0x10) + (int)((ulong)uVar158 >> 0x10);
        iVar522 = (int)((ulong)uVar320 >> 0x10) + (int)((ulong)uVar323 >> 0x10) +
                  (int)((ulong)uVar157 >> 0x10) + (int)((ulong)uVar159 >> 0x10);
        *(ulong *)(paVar340 + 0x70) =
             (ulong)((uint)(ushort)(sVar427 * sVar427) + (uint)(ushort)(sVar550 * sVar550) +
                     (uint)(ushort)(sVar558 * sVar558) + (uint)(ushort)(sVar526 * sVar526)) +
             CONCAT44(-(uint)(iVar389 < 0),iVar389) +
             (ulong)((uint)(ushort)(sVar448 * sVar448) + (uint)(ushort)(sVar556 * sVar556) +
                     (uint)(ushort)(sVar564 * sVar564) + (uint)(ushort)(sVar536 * sVar536)) +
             (ulong)((uint)uVar385 + (uint)uVar391 + (uint)uVar393 + (uint)uVar390) +
             (ulong)((uint)(ushort)(sVar394 * sVar394) + (uint)(ushort)(sVar497 * sVar497) +
                     (uint)(ushort)(sVar471 * sVar471) + (uint)(ushort)(sVar554 * sVar554)) +
             CONCAT44(-(uint)(iVar522 < 0),iVar522) +
             (ulong)((uint)uVar364 + (uint)uVar388 + (uint)uVar387 + (uint)uVar386) +
             (ulong)((uint)(ushort)(sVar423 * sVar423) + (uint)(ushort)(sVar511 * sVar511) +
                     (uint)(ushort)(sVar495 * sVar495) + (uint)(ushort)(sVar467 * sVar467)) +
             (ulong)(uint)((int)CONCAT82(SUB148(auVar207 << 0x40,6),sVar438 * sVar438) +
                           (int)CONCAT82(SUB148(auVar208 << 0x40,6),sVar551 * sVar551) +
                           (int)CONCAT82(SUB148(auVar209 << 0x40,6),sVar559 * sVar559) +
                          (int)CONCAT82(SUB148(auVar213 << 0x40,6),sVar531 * sVar531)) +
             (ulong)((auVar128._10_4_ >> 0x10) + (auVar121._10_4_ >> 0x10) +
                     (auVar122._10_4_ >> 0x10) + (auVar126._10_4_ >> 0x10)) +
             (ulong)((uint)(ushort)(sVar450 * sVar450) + (uint)(ushort)(sVar557 * sVar557) +
                     (uint)(ushort)(sVar565 * sVar565) + (uint)(ushort)(sVar537 * sVar537)) +
             (ulong)((uint)(ushort)(sVar446 * sVar446) + (uint)(ushort)(sVar555 * sVar555) +
                     (uint)(ushort)(sVar563 * sVar563) + (uint)(ushort)(sVar535 * sVar535)) +
             (ulong)(uint)((int)CONCAT82(SUB148(auVar211 << 0x40,6),sVar413 * sVar413) +
                           (int)CONCAT82(SUB148(auVar210 << 0x40,6),sVar506 * sVar506) +
                           (int)CONCAT82(SUB148(auVar212 << 0x40,6),sVar486 * sVar486) +
                          (int)CONCAT82(SUB148(auVar214 << 0x40,6),sVar562 * sVar562)) +
             (ulong)((auVar124._10_4_ >> 0x10) + (auVar123._10_4_ >> 0x10) +
                     (auVar125._10_4_ >> 0x10) + (auVar127._10_4_ >> 0x10)) +
             (ulong)((uint)(ushort)(sVar421 * sVar421) + (uint)(ushort)(sVar510 * sVar510) +
                     (uint)(ushort)(sVar444 * sVar444) + (uint)(ushort)(sVar464 * sVar464)) +
             (ulong)((uint)(ushort)(sVar425 * sVar425) + (uint)(ushort)(sVar512 * sVar512) +
                     (uint)(ushort)(sVar496 * sVar496) + (uint)(ushort)(sVar469 * sVar469));
      }
      if (paVar339 + (ulong)uVar334 * 0x80 == paVar340 + 0x80) break;
      uVar348 = (ulong)*(uint *)(paVar340 + 0x78);
      cVar314 = *(char *)((long)&basist::g_uastc_mode_is_la + uVar348);
      paVar340 = paVar340 + 0x80;
    }
  }
  else {
    while( true ) {
      if (cVar314 == '\0') {
        uVar315 = *(uint *)(paVar340 + -4);
        *(undefined4 *)(puVar344 + -0x309) = *(undefined4 *)(paVar340 + 0x68);
        puVar344[-0x38a] = 0x106a0d;
        basist::unpack_uastc
                  ((uint)uVar348,uVar315,(color32 *)(puVar344 + -0x309),paVar340,
                   (color32 *)(puVar344 + -0x209),false);
        auVar379 = *(undefined1 (*) [16])(puVar344 + -0x209) & __LC6;
        auVar380 = *(undefined1 (*) [16])(puVar344 + -0x203);
        auVar377 = *(undefined1 (*) [16])(puVar344 + -0x207) & __LC6;
        auVar376 = *(undefined1 (*) [16])(pcVar338 + 0x30) & __LC6;
        sVar394 = auVar379._0_2_;
        sVar554 = auVar379._2_2_;
        auVar453[1] = (0 < sVar554) * (sVar554 < 0x100) * auVar379[2] - (0xff < sVar554);
        auVar453[0] = (0 < sVar394) * (sVar394 < 0x100) * auVar379[0] - (0xff < sVar394);
        sVar394 = auVar379._4_2_;
        auVar453[2] = (0 < sVar394) * (sVar394 < 0x100) * auVar379[4] - (0xff < sVar394);
        sVar394 = auVar379._6_2_;
        auVar453[3] = (0 < sVar394) * (sVar394 < 0x100) * auVar379[6] - (0xff < sVar394);
        sVar394 = auVar379._8_2_;
        auVar453[4] = (0 < sVar394) * (sVar394 < 0x100) * auVar379[8] - (0xff < sVar394);
        sVar394 = auVar379._10_2_;
        auVar453[5] = (0 < sVar394) * (sVar394 < 0x100) * auVar379[10] - (0xff < sVar394);
        sVar394 = auVar379._12_2_;
        auVar453[6] = (0 < sVar394) * (sVar394 < 0x100) * auVar379[0xc] - (0xff < sVar394);
        sVar394 = auVar379._14_2_;
        auVar453[7] = (0 < sVar394) * (sVar394 < 0x100) * auVar379[0xe] - (0xff < sVar394);
        sVar394 = auVar377._0_2_;
        auVar453[8] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[0] - (0xff < sVar394);
        sVar394 = auVar377._2_2_;
        auVar453[9] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[2] - (0xff < sVar394);
        sVar394 = auVar377._4_2_;
        auVar453[10] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[4] - (0xff < sVar394);
        sVar394 = auVar377._6_2_;
        auVar453[0xb] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[6] - (0xff < sVar394);
        sVar394 = auVar377._8_2_;
        auVar453[0xc] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[8] - (0xff < sVar394);
        sVar394 = auVar377._10_2_;
        auVar453[0xd] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[10] - (0xff < sVar394);
        sVar394 = auVar377._12_2_;
        auVar453[0xe] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[0xc] - (0xff < sVar394);
        sVar394 = auVar377._14_2_;
        auVar453[0xf] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[0xe] - (0xff < sVar394);
        uVar412 = auVar380._2_2_ >> 8;
        uVar426 = auVar380._6_2_ >> 8;
        uVar437 = auVar380._10_2_ >> 8;
        uVar439 = auVar380._14_2_ >> 8;
        auVar379 = *(undefined1 (*) [16])(puVar344 + -0x203) & __LC6;
        auVar453 = auVar453 & __LC6;
        auVar377 = *(undefined1 (*) [16])(puVar344 + -0x205) & __LC6;
        sVar394 = auVar377._0_2_;
        sVar554 = auVar377._2_2_;
        auVar395[1] = (0 < sVar554) * (sVar554 < 0x100) * auVar377[2] - (0xff < sVar554);
        auVar395[0] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[0] - (0xff < sVar394);
        sVar394 = auVar377._4_2_;
        auVar395[2] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[4] - (0xff < sVar394);
        sVar394 = auVar377._6_2_;
        auVar395[3] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[6] - (0xff < sVar394);
        sVar394 = auVar377._8_2_;
        auVar395[4] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[8] - (0xff < sVar394);
        sVar394 = auVar377._10_2_;
        auVar395[5] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[10] - (0xff < sVar394);
        sVar394 = auVar377._12_2_;
        auVar395[6] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[0xc] - (0xff < sVar394);
        sVar394 = auVar377._14_2_;
        auVar395[7] = (0 < sVar394) * (sVar394 < 0x100) * auVar377[0xe] - (0xff < sVar394);
        sVar394 = auVar379._0_2_;
        auVar395[8] = (0 < sVar394) * (sVar394 < 0x100) * auVar379[0] - (0xff < sVar394);
        sVar394 = auVar379._2_2_;
        auVar395[9] = (0 < sVar394) * (sVar394 < 0x100) * auVar379[2] - (0xff < sVar394);
        sVar394 = auVar379._4_2_;
        auVar395[10] = (0 < sVar394) * (sVar394 < 0x100) * auVar379[4] - (0xff < sVar394);
        sVar394 = auVar379._6_2_;
        auVar395[0xb] = (0 < sVar394) * (sVar394 < 0x100) * auVar379[6] - (0xff < sVar394);
        sVar394 = auVar379._8_2_;
        auVar395[0xc] = (0 < sVar394) * (sVar394 < 0x100) * auVar379[8] - (0xff < sVar394);
        sVar394 = auVar379._10_2_;
        auVar395[0xd] = (0 < sVar394) * (sVar394 < 0x100) * auVar379[10] - (0xff < sVar394);
        sVar394 = auVar379._12_2_;
        auVar395[0xe] = (0 < sVar394) * (sVar394 < 0x100) * auVar379[0xc] - (0xff < sVar394);
        sVar394 = auVar379._14_2_;
        auVar395[0xf] = (0 < sVar394) * (sVar394 < 0x100) * auVar379[0xe] - (0xff < sVar394);
        auVar377 = *(undefined1 (*) [16])(puVar344 + -0x207);
        auVar395 = auVar395 & __LC6;
        sVar394 = auVar453._0_2_;
        sVar413 = auVar453._2_2_;
        sVar415 = auVar453._4_2_;
        sVar417 = auVar453._6_2_;
        sVar419 = auVar453._8_2_;
        sVar421 = auVar453._10_2_;
        sVar423 = auVar453._12_2_;
        sVar554 = auVar453._14_2_;
        cVar314 = (0 < sVar554) * (sVar554 < 0x100) * auVar453[0xe] - (0xff < sVar554);
        sVar554 = auVar395._0_2_;
        bVar313 = (0 < sVar554) * (sVar554 < 0x100) * auVar395[0] - (0xff < sVar554);
        uVar364 = CONCAT11(bVar313,cVar314);
        sVar554 = auVar395._2_2_;
        bVar5 = (0 < sVar554) * (sVar554 < 0x100) * auVar395[2] - (0xff < sVar554);
        uVar225 = CONCAT12(bVar5,uVar364);
        sVar554 = auVar395._4_2_;
        bVar6 = (0 < sVar554) * (sVar554 < 0x100) * auVar395[4] - (0xff < sVar554);
        uVar315 = CONCAT13(bVar6,uVar225);
        sVar554 = auVar395._6_2_;
        bVar7 = (0 < sVar554) * (sVar554 < 0x100) * auVar395[6] - (0xff < sVar554);
        uVar273 = CONCAT14(bVar7,uVar315);
        sVar554 = auVar395._8_2_;
        bVar8 = (0 < sVar554) * (sVar554 < 0x100) * auVar395[8] - (0xff < sVar554);
        auVar299[5] = bVar8;
        auVar299._0_5_ = uVar273;
        sVar471 = auVar395._10_2_;
        sVar427 = auVar395._12_2_;
        sVar438 = auVar395._14_2_;
        uVar390 = auVar377._2_2_ >> 8;
        uVar391 = auVar377._6_2_ >> 8;
        uVar392 = auVar377._10_2_ >> 8;
        uVar393 = auVar377._14_2_ >> 8;
        auVar379 = *(undefined1 (*) [16])(puVar344 + -0x209);
        uVar385 = auVar379._2_2_ >> 8;
        uVar386 = auVar379._6_2_ >> 8;
        auVar294._2_2_ = auVar379._8_2_ >> 8;
        auVar294._0_2_ = uVar386;
        uVar387 = auVar379._10_2_ >> 8;
        auVar294._4_2_ = uVar387;
        auVar294._6_2_ = auVar379._12_2_ >> 8;
        uVar388 = auVar379._14_2_ >> 8;
        auVar294._8_2_ = uVar388;
        auVar294._10_6_ = 0;
        cVar23 = (uVar385 != 0) * (uVar385 < 0x100) * auVar379[3] - (0xff < uVar385);
        auVar103._1_14_ = SUB1614(auVar294 << 0x30,2);
        auVar103[0] = cVar23;
        bVar48 = (uVar386 != 0) * (uVar386 < 0x100) * auVar379[7] - (0xff < uVar386);
        bVar9 = (uVar387 != 0) * (uVar387 < 0x100) * auVar379[0xb] - (0xff < uVar387);
        bVar47 = (uVar388 != 0) * (uVar388 < 0x100) * auVar379[0xf] - (0xff < uVar388);
        bVar46 = (uVar390 != 0) * (uVar390 < 0x100) * auVar377[3] - (0xff < uVar390);
        bVar12 = (uVar391 != 0) * (uVar391 < 0x100) * auVar377[7] - (0xff < uVar391);
        bVar11 = (uVar392 != 0) * (uVar392 < 0x100) * auVar377[0xb] - (0xff < uVar392);
        bVar10 = (uVar393 != 0) * (uVar393 < 0x100) * auVar377[0xf] - (0xff < uVar393);
        auVar377 = *(undefined1 (*) [16])(puVar344 + -0x205);
        uVar414 = (ushort)(((uint)bVar48 << 0x18) >> 0x18);
        uVar416 = (ushort)(((uint6)bVar9 << 0x28) >> 0x28);
        uVar418 = (ushort)(((ulong)bVar47 << 0x38) >> 0x38);
        uVar420 = (ushort)((uint3)((uint3)bVar46 << 0x10) >> 0x10);
        uVar422 = (ushort)(((uint5)bVar12 << 0x20) >> 0x20);
        uVar424 = (ushort)(((uint7)bVar11 << 0x30) >> 0x30);
        uVar385 = (ushort)((uint3)((uint3)bVar10 << 0x10) >> 0x10);
        uVar386 = auVar377._2_2_ >> 8;
        uVar387 = auVar377._6_2_ >> 8;
        auVar295._2_2_ = auVar377._8_2_ >> 8;
        auVar295._0_2_ = uVar387;
        uVar388 = auVar377._10_2_ >> 8;
        auVar295._4_2_ = uVar388;
        auVar295._6_2_ = auVar377._12_2_ >> 8;
        uVar390 = auVar377._14_2_ >> 8;
        auVar295._8_2_ = uVar390;
        auVar295._10_6_ = 0;
        cVar22 = (uVar386 != 0) * (uVar386 < 0x100) * auVar377[3] - (0xff < uVar386);
        auVar104._1_14_ = SUB1614(auVar295 << 0x30,2);
        auVar104[0] = cVar22;
        bVar54 = (uVar387 != 0) * (uVar387 < 0x100) * auVar377[7] - (0xff < uVar387);
        bVar53 = (uVar388 != 0) * (uVar388 < 0x100) * auVar377[0xb] - (0xff < uVar388);
        bVar52 = (uVar390 != 0) * (uVar390 < 0x100) * auVar377[0xf] - (0xff < uVar390);
        bVar51 = (uVar412 != 0) * (uVar412 < 0x100) * auVar380[3] - (0xff < uVar412);
        bVar50 = (uVar426 != 0) * (uVar426 < 0x100) * auVar380[7] - (0xff < uVar426);
        bVar49 = (uVar437 != 0) * (uVar437 < 0x100) * auVar380[0xb] - (0xff < uVar437);
        bVar55 = (uVar439 != 0) * (uVar439 < 0x100) * auVar380[0xf] - (0xff < uVar439);
        uVar386 = (ushort)(((uint)bVar54 << 0x18) >> 0x18);
        uVar387 = (ushort)(((uint6)bVar53 << 0x28) >> 0x28);
        uVar388 = (ushort)(((ulong)bVar52 << 0x38) >> 0x38);
        uVar390 = (ushort)((uint3)((uint3)bVar51 << 0x10) >> 0x10);
        uVar426 = (ushort)(((uint5)bVar50 << 0x20) >> 0x20);
        uVar437 = (ushort)(((uint7)bVar49 << 0x30) >> 0x30);
        uVar439 = (ushort)((uint3)((uint3)bVar55 << 0x10) >> 0x10);
        cVar21 = (uVar385 != 0) * (uVar385 < 0x100) * bVar10 - (0xff < uVar385);
        bVar10 = (cVar22 != '\0') * (auVar104._0_2_ < 0x100) * cVar22 - (0xff < auVar104._0_2_);
        uVar385 = CONCAT11(bVar10,cVar21);
        bVar54 = (uVar386 != 0) * (uVar386 < 0x100) * bVar54 - (0xff < uVar386);
        uVar226 = CONCAT12(bVar54,uVar385);
        bVar53 = (uVar387 != 0) * (uVar387 < 0x100) * bVar53 - (0xff < uVar387);
        uVar347 = CONCAT13(bVar53,uVar226);
        bVar52 = (uVar388 != 0) * (uVar388 < 0x100) * bVar52 - (0xff < uVar388);
        uVar274 = CONCAT14(bVar52,uVar347);
        bVar51 = (uVar390 != 0) * (uVar390 < 0x100) * bVar51 - (0xff < uVar390);
        auVar301[5] = bVar51;
        auVar301._0_5_ = uVar274;
        auVar377 = *(undefined1 (*) [16])(pcVar338 + 0x10) & __LC6;
        auVar380 = *(undefined1 (*) [16])pcVar338 & __LC6;
        sVar554 = auVar380._0_2_;
        sVar562 = auVar380._2_2_;
        auVar432[1] = (0 < sVar562) * (sVar562 < 0x100) * auVar380[2] - (0xff < sVar562);
        auVar432[0] = (0 < sVar554) * (sVar554 < 0x100) * auVar380[0] - (0xff < sVar554);
        sVar554 = auVar380._4_2_;
        auVar432[2] = (0 < sVar554) * (sVar554 < 0x100) * auVar380[4] - (0xff < sVar554);
        sVar554 = auVar380._6_2_;
        auVar432[3] = (0 < sVar554) * (sVar554 < 0x100) * auVar380[6] - (0xff < sVar554);
        sVar554 = auVar380._8_2_;
        auVar432[4] = (0 < sVar554) * (sVar554 < 0x100) * auVar380[8] - (0xff < sVar554);
        sVar554 = auVar380._10_2_;
        auVar432[5] = (0 < sVar554) * (sVar554 < 0x100) * auVar380[10] - (0xff < sVar554);
        sVar554 = auVar380._12_2_;
        auVar432[6] = (0 < sVar554) * (sVar554 < 0x100) * auVar380[0xc] - (0xff < sVar554);
        sVar554 = auVar380._14_2_;
        auVar432[7] = (0 < sVar554) * (sVar554 < 0x100) * auVar380[0xe] - (0xff < sVar554);
        sVar554 = auVar377._0_2_;
        auVar432[8] = (0 < sVar554) * (sVar554 < 0x100) * auVar377[0] - (0xff < sVar554);
        sVar554 = auVar377._2_2_;
        auVar432[9] = (0 < sVar554) * (sVar554 < 0x100) * auVar377[2] - (0xff < sVar554);
        sVar554 = auVar377._4_2_;
        auVar432[10] = (0 < sVar554) * (sVar554 < 0x100) * auVar377[4] - (0xff < sVar554);
        sVar554 = auVar377._6_2_;
        auVar432[0xb] = (0 < sVar554) * (sVar554 < 0x100) * auVar377[6] - (0xff < sVar554);
        sVar554 = auVar377._8_2_;
        auVar432[0xc] = (0 < sVar554) * (sVar554 < 0x100) * auVar377[8] - (0xff < sVar554);
        sVar554 = auVar377._10_2_;
        auVar432[0xd] = (0 < sVar554) * (sVar554 < 0x100) * auVar377[10] - (0xff < sVar554);
        sVar554 = auVar377._12_2_;
        auVar432[0xe] = (0 < sVar554) * (sVar554 < 0x100) * auVar377[0xc] - (0xff < sVar554);
        sVar554 = auVar377._14_2_;
        auVar432[0xf] = (0 < sVar554) * (sVar554 < 0x100) * auVar377[0xe] - (0xff < sVar554);
        auVar432 = auVar432 & __LC6;
        auVar380 = *(undefined1 (*) [16])(pcVar338 + 0x20) & __LC6;
        sVar554 = auVar380._0_2_;
        sVar562 = auVar380._2_2_;
        auVar375[1] = (0 < sVar562) * (sVar562 < 0x100) * auVar380[2] - (0xff < sVar562);
        auVar375[0] = (0 < sVar554) * (sVar554 < 0x100) * auVar380[0] - (0xff < sVar554);
        sVar554 = auVar380._4_2_;
        auVar375[2] = (0 < sVar554) * (sVar554 < 0x100) * auVar380[4] - (0xff < sVar554);
        sVar554 = auVar380._6_2_;
        auVar375[3] = (0 < sVar554) * (sVar554 < 0x100) * auVar380[6] - (0xff < sVar554);
        sVar554 = auVar380._8_2_;
        auVar375[4] = (0 < sVar554) * (sVar554 < 0x100) * auVar380[8] - (0xff < sVar554);
        sVar554 = auVar380._10_2_;
        auVar375[5] = (0 < sVar554) * (sVar554 < 0x100) * auVar380[10] - (0xff < sVar554);
        sVar554 = auVar380._12_2_;
        auVar375[6] = (0 < sVar554) * (sVar554 < 0x100) * auVar380[0xc] - (0xff < sVar554);
        sVar554 = auVar380._14_2_;
        auVar375[7] = (0 < sVar554) * (sVar554 < 0x100) * auVar380[0xe] - (0xff < sVar554);
        sVar554 = auVar376._0_2_;
        auVar375[8] = (0 < sVar554) * (sVar554 < 0x100) * auVar376[0] - (0xff < sVar554);
        sVar554 = auVar376._2_2_;
        auVar375[9] = (0 < sVar554) * (sVar554 < 0x100) * auVar376[2] - (0xff < sVar554);
        sVar554 = auVar376._4_2_;
        auVar375[10] = (0 < sVar554) * (sVar554 < 0x100) * auVar376[4] - (0xff < sVar554);
        sVar554 = auVar376._6_2_;
        auVar375[0xb] = (0 < sVar554) * (sVar554 < 0x100) * auVar376[6] - (0xff < sVar554);
        sVar554 = auVar376._8_2_;
        auVar375[0xc] = (0 < sVar554) * (sVar554 < 0x100) * auVar376[8] - (0xff < sVar554);
        sVar554 = auVar376._10_2_;
        auVar375[0xd] = (0 < sVar554) * (sVar554 < 0x100) * auVar376[10] - (0xff < sVar554);
        sVar554 = auVar376._12_2_;
        auVar375[0xe] = (0 < sVar554) * (sVar554 < 0x100) * auVar376[0xc] - (0xff < sVar554);
        sVar554 = auVar376._14_2_;
        auVar375[0xf] = (0 < sVar554) * (sVar554 < 0x100) * auVar376[0xe] - (0xff < sVar554);
        auVar380 = *(undefined1 (*) [16])(pcVar338 + 0x30);
        auVar375 = __LC6 & auVar375;
        auVar377 = *(undefined1 (*) [16])(pcVar338 + 0x10);
        sVar554 = auVar432._0_2_;
        sVar562 = auVar432._2_2_;
        sVar458 = auVar432._4_2_;
        sVar460 = auVar432._6_2_;
        sVar464 = auVar432._8_2_;
        sVar467 = auVar432._10_2_;
        sVar469 = auVar432._12_2_;
        sVar425 = auVar432._14_2_;
        cVar22 = (0 < sVar425) * (sVar425 < 0x100) * auVar432[0xe] - (0xff < sVar425);
        sVar425 = auVar375._0_2_;
        bVar60 = (0 < sVar425) * (sVar425 < 0x100) * auVar375[0] - (0xff < sVar425);
        uVar386 = CONCAT11(bVar60,cVar22);
        sVar425 = auVar375._2_2_;
        bVar59 = (0 < sVar425) * (sVar425 < 0x100) * auVar375[2] - (0xff < sVar425);
        uVar227 = CONCAT12(bVar59,uVar386);
        sVar425 = auVar375._4_2_;
        bVar56 = (0 < sVar425) * (sVar425 < 0x100) * auVar375[4] - (0xff < sVar425);
        uVar316 = CONCAT13(bVar56,uVar227);
        sVar425 = auVar375._6_2_;
        bVar58 = (0 < sVar425) * (sVar425 < 0x100) * auVar375[6] - (0xff < sVar425);
        uVar275 = CONCAT14(bVar58,uVar316);
        sVar425 = auVar375._8_2_;
        bVar57 = (0 < sVar425) * (sVar425 < 0x100) * auVar375[8] - (0xff < sVar425);
        auVar298[5] = bVar57;
        auVar298._0_5_ = uVar275;
        sVar425 = auVar375._10_2_;
        sVar486 = auVar375._12_2_;
        sVar488 = auVar375._14_2_;
        auVar379 = *(undefined1 (*) [16])pcVar338;
        uVar449 = auVar380._2_2_ >> 8;
        uVar456 = auVar380._6_2_ >> 8;
        uVar457 = auVar380._10_2_ >> 8;
        uVar459 = auVar380._14_2_ >> 8;
        uVar392 = auVar377._2_2_ >> 8;
        uVar393 = auVar377._6_2_ >> 8;
        uVar412 = auVar377._10_2_ >> 8;
        uVar441 = auVar377._14_2_ >> 8;
        uVar387 = auVar379._2_2_ >> 8;
        uVar388 = auVar379._6_2_ >> 8;
        auVar296._2_2_ = auVar379._8_2_ >> 8;
        auVar296._0_2_ = uVar388;
        uVar390 = auVar379._10_2_ >> 8;
        auVar296._4_2_ = uVar390;
        auVar296._6_2_ = auVar379._12_2_ >> 8;
        uVar391 = auVar379._14_2_ >> 8;
        auVar296._8_2_ = uVar391;
        auVar296._10_6_ = 0;
        cVar333 = (uVar387 != 0) * (uVar387 < 0x100) * auVar379[3] - (0xff < uVar387);
        auVar105._1_14_ = SUB1614(auVar296 << 0x30,2);
        auVar105[0] = cVar333;
        bVar68 = (uVar388 != 0) * (uVar388 < 0x100) * auVar379[7] - (0xff < uVar388);
        bVar76 = (uVar390 != 0) * (uVar390 < 0x100) * auVar379[0xb] - (0xff < uVar390);
        bVar85 = (uVar391 != 0) * (uVar391 < 0x100) * auVar379[0xf] - (0xff < uVar391);
        bVar87 = (uVar392 != 0) * (uVar392 < 0x100) * auVar377[3] - (0xff < uVar392);
        bVar88 = (uVar393 != 0) * (uVar393 < 0x100) * auVar377[7] - (0xff < uVar393);
        bVar89 = (uVar412 != 0) * (uVar412 < 0x100) * auVar377[0xb] - (0xff < uVar412);
        bVar86 = (uVar441 != 0) * (uVar441 < 0x100) * auVar377[0xf] - (0xff < uVar441);
        auVar377 = *(undefined1 (*) [16])(pcVar338 + 0x20);
        uVar388 = (ushort)(((uint)bVar68 << 0x18) >> 0x18);
        uVar390 = (ushort)(((uint6)bVar76 << 0x28) >> 0x28);
        uVar391 = (ushort)(((ulong)bVar85 << 0x38) >> 0x38);
        uVar392 = (ushort)((uint3)((uint3)bVar87 << 0x10) >> 0x10);
        uVar393 = (ushort)(((uint5)bVar88 << 0x20) >> 0x20);
        uVar412 = (ushort)(((uint7)bVar89 << 0x30) >> 0x30);
        uVar387 = (ushort)((uint3)((uint3)bVar86 << 0x10) >> 0x10);
        uVar441 = auVar377._2_2_ >> 8;
        uVar443 = auVar377._6_2_ >> 8;
        auVar297._2_2_ = auVar377._8_2_ >> 8;
        auVar297._0_2_ = uVar443;
        uVar445 = auVar377._10_2_ >> 8;
        auVar297._4_2_ = uVar445;
        auVar297._6_2_ = auVar377._12_2_ >> 8;
        uVar447 = auVar377._14_2_ >> 8;
        auVar297._8_2_ = uVar447;
        auVar297._10_6_ = 0;
        cVar20 = (uVar441 != 0) * (uVar441 < 0x100) * auVar377[3] - (0xff < uVar441);
        auVar106._1_14_ = SUB1614(auVar297 << 0x30,2);
        auVar106[0] = cVar20;
        bVar91 = (uVar443 != 0) * (uVar443 < 0x100) * auVar377[7] - (0xff < uVar443);
        bVar90 = (uVar445 != 0) * (uVar445 < 0x100) * auVar377[0xb] - (0xff < uVar445);
        bVar92 = (uVar447 != 0) * (uVar447 < 0x100) * auVar377[0xf] - (0xff < uVar447);
        bVar93 = (uVar449 != 0) * (uVar449 < 0x100) * auVar380[3] - (0xff < uVar449);
        bVar95 = (uVar456 != 0) * (uVar456 < 0x100) * auVar380[7] - (0xff < uVar456);
        bVar94 = (uVar457 != 0) * (uVar457 < 0x100) * auVar380[0xb] - (0xff < uVar457);
        bVar96 = (uVar459 != 0) * (uVar459 < 0x100) * auVar380[0xf] - (0xff < uVar459);
        uVar441 = (ushort)(((uint)bVar91 << 0x18) >> 0x18);
        uVar443 = (ushort)(((uint6)bVar90 << 0x28) >> 0x28);
        uVar445 = (ushort)(((ulong)bVar92 << 0x38) >> 0x38);
        uVar447 = (ushort)((uint3)((uint3)bVar93 << 0x10) >> 0x10);
        uVar449 = (ushort)(((uint5)bVar95 << 0x20) >> 0x20);
        uVar456 = (ushort)(((uint7)bVar94 << 0x30) >> 0x30);
        uVar457 = (ushort)((uint3)((uint3)bVar96 << 0x10) >> 0x10);
        cVar19 = (uVar387 != 0) * (uVar387 < 0x100) * bVar86 - (0xff < uVar387);
        bVar86 = (cVar20 != '\0') * (auVar106._0_2_ < 0x100) * cVar20 - (0xff < auVar106._0_2_);
        uVar387 = CONCAT11(bVar86,cVar19);
        bVar91 = (uVar441 != 0) * (uVar441 < 0x100) * bVar91 - (0xff < uVar441);
        uVar228 = CONCAT12(bVar91,uVar387);
        bVar90 = (uVar443 != 0) * (uVar443 < 0x100) * bVar90 - (0xff < uVar443);
        uVar354 = CONCAT13(bVar90,uVar228);
        bVar92 = (uVar445 != 0) * (uVar445 < 0x100) * bVar92 - (0xff < uVar445);
        uVar276 = CONCAT14(bVar92,uVar354);
        bVar93 = (uVar447 != 0) * (uVar447 < 0x100) * bVar93 - (0xff < uVar447);
        auVar300[5] = bVar93;
        auVar300._0_5_ = uVar276;
        auVar298._6_8_ = 0;
        auVar109[0xe] = cVar22;
        auVar109._0_14_ = auVar298 << 0x38;
        uVar320 = CONCAT26(auVar109._13_2_,
                           CONCAT15((0 < sVar469) * (sVar469 < 0x100) * auVar432[0xc] -
                                    (0xff < sVar469),uVar275));
        auVar277._4_8_ = 0;
        auVar277._0_4_ = uVar316;
        auVar130._12_3_ = (int3)((ulong)uVar320 >> 0x28);
        auVar130._0_12_ = auVar277 << 0x38;
        uVar476 = CONCAT44(auVar130._11_4_,
                           CONCAT13((0 < sVar467) * (sVar467 < 0x100) * auVar432[10] -
                                    (0xff < sVar467),uVar227));
        auVar143._10_5_ = (int5)((ulong)uVar476 >> 0x18);
        auVar143._0_10_ = (unkuint10)uVar386 << 0x38;
        uVar318 = CONCAT62(auVar143._9_6_,
                           CONCAT11((0 < sVar464) * (sVar464 < 0x100) * auVar432[8] -
                                    (0xff < sVar464),cVar22));
        auVar165._7_8_ = 0;
        auVar165._0_7_ = (uint7)((ulong)uVar318 >> 8);
        Var166 = CONCAT81(SUB158(auVar165 << 0x40,7),
                          (0 < sVar460) * (sVar460 < 0x100) * auVar432[6] - (0xff < sVar460));
        auVar229._9_6_ = 0;
        auVar229._0_9_ = Var166;
        auVar167._1_10_ = SUB1510(auVar229 << 0x30,5);
        auVar167[0] = (0 < sVar458) * (sVar458 < 0x100) * auVar432[4] - (0xff < sVar458);
        auVar230._11_4_ = 0;
        auVar230._0_11_ = auVar167;
        auVar168._1_12_ = SUB1512(auVar230 << 0x20,3);
        auVar168[0] = (0 < sVar562) * (sVar562 < 0x100) * auVar432[2] - (0xff < sVar562);
        auVar299._6_8_ = 0;
        auVar110[0xe] = cVar314;
        auVar110._0_14_ = auVar299 << 0x38;
        uVar157 = CONCAT26(auVar110._13_2_,
                           CONCAT15((0 < sVar423) * (sVar423 < 0x100) * auVar453[0xc] -
                                    (0xff < sVar423),uVar273));
        auVar278._4_8_ = 0;
        auVar278._0_4_ = uVar315;
        auVar131._12_3_ = (int3)((ulong)uVar157 >> 0x28);
        auVar131._0_12_ = auVar278 << 0x38;
        uVar323 = CONCAT44(auVar131._11_4_,
                           CONCAT13((0 < sVar421) * (sVar421 < 0x100) * auVar453[10] -
                                    (0xff < sVar421),uVar225));
        auVar144._10_5_ = (int5)((ulong)uVar323 >> 0x18);
        auVar144._0_10_ = (unkuint10)uVar364 << 0x38;
        uVar321 = CONCAT62(auVar144._9_6_,
                           CONCAT11((0 < sVar419) * (sVar419 < 0x100) * auVar453[8] -
                                    (0xff < sVar419),cVar314));
        auVar169._7_8_ = 0;
        auVar169._0_7_ = (uint7)((ulong)uVar321 >> 8);
        Var170 = CONCAT81(SUB158(auVar169 << 0x40,7),
                          (0 < sVar417) * (sVar417 < 0x100) * auVar453[6] - (0xff < sVar417));
        auVar231._9_6_ = 0;
        auVar231._0_9_ = Var170;
        auVar171._1_10_ = SUB1510(auVar231 << 0x30,5);
        auVar171[0] = (0 < sVar415) * (sVar415 < 0x100) * auVar453[4] - (0xff < sVar415);
        auVar232._11_4_ = 0;
        auVar232._0_11_ = auVar171;
        auVar172._1_12_ = SUB1512(auVar232 << 0x20,3);
        auVar172[0] = (0 < sVar413) * (sVar413 < 0x100) * auVar453[2] - (0xff < sVar413);
        auVar516._0_2_ =
             (ushort)(byte)((0 < sVar394) * (sVar394 < 0x100) * auVar453[0] - (0xff < sVar394)) -
             (ushort)(byte)((0 < sVar554) * (sVar554 < 0x100) * auVar432[0] - (0xff < sVar554));
        auVar516._2_2_ = auVar172._0_2_ - auVar168._0_2_;
        auVar516._4_2_ = auVar171._0_2_ - auVar167._0_2_;
        auVar516._6_2_ = (short)Var170 - (short)Var166;
        auVar516._8_2_ = (short)((ulong)uVar321 >> 8) - (short)((ulong)uVar318 >> 8);
        auVar516._10_2_ = (short)((ulong)uVar323 >> 0x18) - (short)((ulong)uVar476 >> 0x18);
        auVar516._12_2_ = (short)((ulong)uVar157 >> 0x28) - (short)((ulong)uVar320 >> 0x28);
        auVar516._14_2_ = (auVar110._13_2_ >> 8) - (auVar109._13_2_ >> 8);
        auVar454._0_2_ = (ushort)bVar313 - (ushort)bVar60;
        auVar454._2_2_ = (ushort)bVar5 - (ushort)bVar59;
        auVar454._4_2_ = (ushort)bVar6 - (ushort)bVar56;
        auVar454._6_2_ = (ushort)bVar7 - (ushort)bVar58;
        auVar454._8_2_ = (ushort)bVar8 - (ushort)bVar57;
        auVar454._10_2_ =
             (ushort)(byte)((0 < sVar471) * (sVar471 < 0x100) * auVar395[10] - (0xff < sVar471)) -
             (ushort)(byte)((0 < sVar425) * (sVar425 < 0x100) * auVar375[10] - (0xff < sVar425));
        auVar454._12_2_ =
             (ushort)(byte)((0 < sVar427) * (sVar427 < 0x100) * auVar395[0xc] - (0xff < sVar427)) -
             (ushort)(byte)((0 < sVar486) * (sVar486 < 0x100) * auVar375[0xc] - (0xff < sVar486));
        auVar454._14_2_ =
             (ushort)(byte)((0 < sVar438) * (sVar438 < 0x100) * auVar395[0xe] - (0xff < sVar438)) -
             (ushort)(byte)((0 < sVar488) * (sVar488 < 0x100) * auVar375[0xe] - (0xff < sVar488));
        auVar300._6_8_ = 0;
        auVar111[0xe] = cVar19;
        auVar111._0_14_ = auVar300 << 0x38;
        uVar320 = CONCAT26(auVar111._13_2_,
                           CONCAT15((uVar412 != 0) * (uVar412 < 0x100) * bVar89 - (0xff < uVar412),
                                    uVar276));
        auVar279._4_8_ = 0;
        auVar279._0_4_ = uVar354;
        auVar132._12_3_ = (int3)((ulong)uVar320 >> 0x28);
        auVar132._0_12_ = auVar279 << 0x38;
        uVar476 = CONCAT44(auVar132._11_4_,
                           CONCAT13((uVar393 != 0) * (uVar393 < 0x100) * bVar88 - (0xff < uVar393),
                                    uVar228));
        auVar145._10_5_ = (int5)((ulong)uVar476 >> 0x18);
        auVar145._0_10_ = (unkuint10)uVar387 << 0x38;
        uVar318 = CONCAT62(auVar145._9_6_,
                           CONCAT11((uVar392 != 0) * (uVar392 < 0x100) * bVar87 - (0xff < uVar392),
                                    cVar19));
        auVar173._7_8_ = 0;
        auVar173._0_7_ = (uint7)((ulong)uVar318 >> 8);
        Var166 = CONCAT81(SUB158(auVar173 << 0x40,7),
                          (uVar391 != 0) * (uVar391 < 0x100) * bVar85 - (0xff < uVar391));
        auVar233._9_6_ = 0;
        auVar233._0_9_ = Var166;
        auVar174._1_10_ = SUB1510(auVar233 << 0x30,5);
        auVar174[0] = (uVar390 != 0) * (uVar390 < 0x100) * bVar76 - (0xff < uVar390);
        auVar234._11_4_ = 0;
        auVar234._0_11_ = auVar174;
        auVar175._1_12_ = SUB1512(auVar234 << 0x20,3);
        auVar175[0] = (uVar388 != 0) * (uVar388 < 0x100) * bVar68 - (0xff < uVar388);
        auVar301._6_8_ = 0;
        auVar112[0xe] = cVar21;
        auVar112._0_14_ = auVar301 << 0x38;
        uVar157 = CONCAT26(auVar112._13_2_,
                           CONCAT15((uVar424 != 0) * (uVar424 < 0x100) * bVar11 - (0xff < uVar424),
                                    uVar274));
        auVar280._4_8_ = 0;
        auVar280._0_4_ = uVar347;
        auVar133._12_3_ = (int3)((ulong)uVar157 >> 0x28);
        auVar133._0_12_ = auVar280 << 0x38;
        uVar323 = CONCAT44(auVar133._11_4_,
                           CONCAT13((uVar422 != 0) * (uVar422 < 0x100) * bVar12 - (0xff < uVar422),
                                    uVar226));
        auVar146._10_5_ = (int5)((ulong)uVar323 >> 0x18);
        auVar146._0_10_ = (unkuint10)uVar385 << 0x38;
        uVar321 = CONCAT62(auVar146._9_6_,
                           CONCAT11((uVar420 != 0) * (uVar420 < 0x100) * bVar46 - (0xff < uVar420),
                                    cVar21));
        auVar176._7_8_ = 0;
        auVar176._0_7_ = (uint7)((ulong)uVar321 >> 8);
        Var170 = CONCAT81(SUB158(auVar176 << 0x40,7),
                          (uVar418 != 0) * (uVar418 < 0x100) * bVar47 - (0xff < uVar418));
        auVar235._9_6_ = 0;
        auVar235._0_9_ = Var170;
        auVar177._1_10_ = SUB1510(auVar235 << 0x30,5);
        auVar177[0] = (uVar416 != 0) * (uVar416 < 0x100) * bVar9 - (0xff < uVar416);
        auVar236._11_4_ = 0;
        auVar236._0_11_ = auVar177;
        auVar178._1_12_ = SUB1512(auVar236 << 0x20,3);
        auVar178[0] = (uVar414 != 0) * (uVar414 < 0x100) * bVar48 - (0xff < uVar414);
        auVar433._0_2_ =
             (ushort)(byte)((cVar23 != '\0') * (auVar103._0_2_ < 0x100) * cVar23 -
                           (0xff < auVar103._0_2_)) -
             (ushort)(byte)((cVar333 != '\0') * (auVar105._0_2_ < 0x100) * cVar333 -
                           (0xff < auVar105._0_2_));
        auVar433._2_2_ = auVar178._0_2_ - auVar175._0_2_;
        auVar433._4_2_ = auVar177._0_2_ - auVar174._0_2_;
        auVar433._6_2_ = (short)Var170 - (short)Var166;
        auVar433._8_2_ = (short)((ulong)uVar321 >> 8) - (short)((ulong)uVar318 >> 8);
        auVar433._10_2_ = (short)((ulong)uVar323 >> 0x18) - (short)((ulong)uVar476 >> 0x18);
        auVar433._12_2_ = (short)((ulong)uVar157 >> 0x28) - (short)((ulong)uVar320 >> 0x28);
        auVar433._14_2_ = (auVar112._13_2_ >> 8) - (auVar111._13_2_ >> 8);
        auVar379 = pmulhw(auVar516,auVar516);
        auVar377 = pmulhw(auVar433,auVar433);
        auVar396._0_2_ = (ushort)bVar10 - (ushort)bVar86;
        auVar396._2_2_ = (ushort)bVar54 - (ushort)bVar91;
        auVar396._4_2_ = (ushort)bVar53 - (ushort)bVar90;
        auVar396._6_2_ = (ushort)bVar52 - (ushort)bVar92;
        auVar396._8_2_ = (ushort)bVar51 - (ushort)bVar93;
        auVar396._10_2_ =
             (ushort)(byte)((uVar426 != 0) * (uVar426 < 0x100) * bVar50 - (0xff < uVar426)) -
             (ushort)(byte)((uVar449 != 0) * (uVar449 < 0x100) * bVar95 - (0xff < uVar449));
        auVar396._12_2_ =
             (ushort)(byte)((uVar437 != 0) * (uVar437 < 0x100) * bVar49 - (0xff < uVar437)) -
             (ushort)(byte)((uVar456 != 0) * (uVar456 < 0x100) * bVar94 - (0xff < uVar456));
        auVar396._14_2_ =
             (ushort)(byte)((uVar439 != 0) * (uVar439 < 0x100) * bVar55 - (0xff < uVar439)) -
             (ushort)(byte)((uVar457 != 0) * (uVar457 < 0x100) * bVar96 - (0xff < uVar457));
        iVar498 = CONCAT22(auVar379._8_2_,auVar516._8_2_ * auVar516._8_2_);
        auVar500._0_8_ =
             CONCAT26(auVar379._10_2_,CONCAT24(auVar516._10_2_ * auVar516._10_2_,iVar498));
        auVar500._8_2_ = auVar516._12_2_ * auVar516._12_2_;
        auVar500._10_2_ = auVar379._12_2_;
        auVar502._12_2_ = auVar516._14_2_ * auVar516._14_2_;
        auVar502._0_12_ = auVar500;
        auVar502._14_2_ = auVar379._14_2_;
        iVar389 = CONCAT22(auVar379._6_2_,auVar516._6_2_ * auVar516._6_2_);
        Var237 = CONCAT64(CONCAT42(iVar389,auVar379._4_2_),
                          CONCAT22(auVar516._4_2_ * auVar516._4_2_,auVar516._6_2_ * auVar516._6_2_))
        ;
        auVar179._4_8_ = (long)((unkuint10)Var237 >> 0x10);
        auVar179._2_2_ = auVar379._2_2_;
        auVar179._0_2_ = auVar516._2_2_ * auVar516._2_2_;
        iVar472 = CONCAT22(auVar377._8_2_,auVar433._8_2_ * auVar433._8_2_);
        auVar477._0_8_ =
             CONCAT26(auVar377._10_2_,CONCAT24(auVar433._10_2_ * auVar433._10_2_,iVar472));
        auVar477._8_2_ = auVar433._12_2_ * auVar433._12_2_;
        auVar477._10_2_ = auVar377._12_2_;
        auVar481._12_2_ = auVar433._14_2_ * auVar433._14_2_;
        auVar481._0_12_ = auVar477;
        auVar481._14_2_ = auVar377._14_2_;
        iVar522 = CONCAT22(auVar377._6_2_,auVar433._6_2_ * auVar433._6_2_);
        Var238 = CONCAT64(CONCAT42(iVar522,auVar377._4_2_),
                          CONCAT22(auVar433._4_2_ * auVar433._4_2_,auVar433._6_2_ * auVar433._6_2_))
        ;
        auVar180._4_8_ = (long)((unkuint10)Var238 >> 0x10);
        auVar180._2_2_ = auVar377._2_2_;
        auVar180._0_2_ = auVar433._2_2_ * auVar433._2_2_;
        auVar376 = pmulhw(auVar454,auVar454);
        auVar380 = pmulhw(auVar396,auVar396);
        iVar499 = CONCAT22(auVar376._8_2_,auVar454._8_2_ * auVar454._8_2_);
        auVar501._0_8_ =
             CONCAT26(auVar376._10_2_,CONCAT24(auVar454._10_2_ * auVar454._10_2_,iVar499));
        auVar501._8_2_ = auVar454._12_2_ * auVar454._12_2_;
        auVar501._10_2_ = auVar376._12_2_;
        auVar503._12_2_ = auVar454._14_2_ * auVar454._14_2_;
        auVar503._0_12_ = auVar501;
        auVar503._14_2_ = auVar376._14_2_;
        iVar473 = CONCAT22(auVar380._8_2_,auVar396._8_2_ * auVar396._8_2_);
        auVar478._0_8_ =
             CONCAT26(auVar380._10_2_,CONCAT24(auVar396._10_2_ * auVar396._10_2_,iVar473));
        auVar478._8_2_ = auVar396._12_2_ * auVar396._12_2_;
        auVar478._10_2_ = auVar380._12_2_;
        auVar482._12_2_ = auVar396._14_2_ * auVar396._14_2_;
        auVar482._0_12_ = auVar478;
        auVar482._14_2_ = auVar380._14_2_;
        iVar311 = CONCAT22(auVar380._6_2_,auVar396._6_2_ * auVar396._6_2_);
        Var239 = CONCAT64(CONCAT42(iVar311,auVar380._4_2_),
                          CONCAT22(auVar396._4_2_ * auVar396._4_2_,auVar396._6_2_ * auVar396._6_2_))
        ;
        auVar181._4_8_ = (long)((unkuint10)Var239 >> 0x10);
        auVar181._2_2_ = auVar380._2_2_;
        auVar181._0_2_ = auVar396._2_2_ * auVar396._2_2_;
        iVar312 = CONCAT22(auVar376._6_2_,auVar454._6_2_ * auVar454._6_2_);
        Var240 = CONCAT64(CONCAT42(iVar312,auVar376._4_2_),
                          CONCAT22(auVar454._4_2_ * auVar454._4_2_,auVar454._6_2_ * auVar454._6_2_))
        ;
        auVar182._4_8_ = (long)((unkuint10)Var240 >> 0x10);
        auVar182._2_2_ = auVar376._2_2_;
        auVar182._0_2_ = auVar454._2_2_ * auVar454._2_2_;
        *(ulong *)(paVar340 + 0x70) =
             (ulong)(uint)(CONCAT22(auVar379._0_2_,auVar516._0_2_ * auVar516._0_2_) +
                          CONCAT22(auVar377._0_2_,auVar433._0_2_ * auVar433._0_2_)) +
             (ulong)(uint)((int)((unkuint10)Var237 >> 0x10) + (int)((unkuint10)Var238 >> 0x10)) +
             (ulong)(uint)(iVar498 + iVar472) + (ulong)(uint)(auVar500._8_4_ + auVar477._8_4_) +
             (ulong)(uint)(CONCAT22(auVar376._0_2_,auVar454._0_2_ * auVar454._0_2_) +
                          CONCAT22(auVar380._0_2_,auVar396._0_2_ * auVar396._0_2_)) +
             (ulong)(uint)((int)((unkuint10)Var240 >> 0x10) + (int)((unkuint10)Var239 >> 0x10)) +
             (ulong)(uint)(iVar499 + iVar473) + (ulong)(uint)(auVar501._8_4_ + auVar478._8_4_) +
             (ulong)(uint)(auVar179._0_4_ + auVar180._0_4_) + (ulong)(uint)(iVar389 + iVar522) +
             (ulong)(uint)((int)((ulong)auVar500._0_8_ >> 0x20) +
                          (int)((ulong)auVar477._0_8_ >> 0x20)) +
             (ulong)(uint)(auVar502._12_4_ + auVar481._12_4_) +
             (ulong)(uint)(auVar182._0_4_ + auVar181._0_4_) + (ulong)(uint)(iVar312 + iVar311) +
             (ulong)(uint)((int)((ulong)auVar501._0_8_ >> 0x20) +
                          (int)((ulong)auVar478._0_8_ >> 0x20)) +
             (ulong)(uint)(auVar503._12_4_ + auVar482._12_4_);
      }
      if (paVar340 + 0x80 == paVar339 + (ulong)uVar334 * 0x80) break;
      uVar348 = (ulong)*(uint *)(paVar340 + 0x78);
      cVar314 = *(char *)((long)&basist::g_uastc_mode_is_la + uVar348);
      paVar340 = paVar340 + 0x80;
    }
  }
  iVar389 = *(int *)(puVar344 + -0x387);
  puVar361 = (undefined8 *)puVar344[-899];
  for (lVar325 = 0x13; lVar325 != 0; lVar325 = lVar325 + -1) {
    *puVar361 = 0;
    puVar361 = puVar361 + (ulong)bVar363 * -2 + 1;
  }
  if (iVar389 == 1) {
    puVar341 = (uastc_encode_results *)puVar344[-0x37e];
    lVar325 = 8;
    lVar326 = 0;
    puVar344[-900] = puVar344 + -0x34e;
  }
  else {
    if (*(char *)((long)puVar344 + -0x1b01) == '\0') {
      uVar345 = 100;
      uVar334 = -(uint)(*(int *)((long)puVar344 + -0x1ae4) == 0) & 0x32;
    }
    else {
      uVar334 = 100;
      uVar345 = 0;
    }
    lVar325 = 0;
    *(undefined4 *)(puVar344 + -0x377) = uVar345;
    uVar315 = 0;
    puVar344[-0x37b] = puVar344 + -0x350;
    pbVar15 = (bc7_optimization_results *)puVar344[-0x382];
    puVar344[-0x379] = puVar344 + -0x351;
    puVar344[-0x381] = puVar344 + -0x352;
    puVar344[-0x37f] = puVar344 + -0x353;
    puVar344[-900] = puVar344 + -0x34e;
    puVar344[-0x37d] = puVar344 + -0x34f;
    *(uint *)(puVar344 + -0x378) = uVar334;
    puVar344[-0x389] = _LC17;
    do {
      uVar321 = *(undefined8 *)(paVar339 + 8);
      uVar318 = *(undefined8 *)(paVar339 + 0x60);
      uVar476 = *(undefined8 *)(paVar339 + 0x20);
      uVar323 = *(undefined8 *)(paVar339 + 0x28);
      uVar320 = *(undefined8 *)(paVar339 + 0x40);
      uVar157 = *(undefined8 *)(paVar339 + 0x48);
      puVar344[-0x31d] = *(undefined8 *)paVar339;
      puVar344[-0x31c] = uVar321;
      uVar321 = *(undefined8 *)(paVar339 + 0x10);
      uVar158 = *(undefined8 *)(paVar339 + 0x18);
      uVar159 = *(undefined8 *)(paVar339 + 0x50);
      uVar160 = *(undefined8 *)(paVar339 + 0x58);
      uVar334 = *(uint *)(paVar339 + -8);
      uVar347 = *(uint *)(paVar339 + -4);
      puVar344[-0x311] = uVar318;
      uVar345 = *(undefined4 *)(paVar339 + 0x68);
      puVar344[-0x31b] = uVar321;
      puVar344[-0x31a] = uVar158;
      uVar318 = *(undefined8 *)(paVar339 + 0x30);
      uVar321 = *(undefined8 *)(paVar339 + 0x38);
      puVar344[-0x319] = uVar476;
      puVar344[-0x318] = uVar323;
      puVar344[-0x315] = uVar320;
      puVar344[-0x314] = uVar157;
      puVar344[-0x317] = uVar318;
      puVar344[-0x316] = uVar321;
      puVar344[-0x313] = uVar159;
      puVar344[-0x312] = uVar160;
      *(uint *)(puVar344 + -0x310) = uVar334;
      *(uint *)((long)puVar344 + -0x187c) = uVar347;
      *(undefined4 *)(puVar344 + -0x30f) = uVar345;
      *(undefined4 *)(puVar344 + -0x32b) = uVar345;
      puVar344[-0x38a] = 0x106e6f;
      basist::unpack_uastc
                (uVar334,uVar347,(color32 *)pbVar15,paVar339,(color32 *)puVar344[-0x385],false);
      puVar344[-0x38a] = 0x106e8e;
      compute_block_error(pcVar338,(color_rgba *)puVar344[-0x385],(ulong *)puVar344[-0x37f],
                          (ulong *)puVar344[-0x381],(ulong *)puVar344[-0x379]);
      puVar344[-0x38a] = 0x106e9b;
      basist::transcode_uastc_to_bc7((unpacked_uastc_block *)puVar344[-899],pbVar15);
      puVar344[-0x38a] = 0x106ea6;
      basist::encode_bc7_block(puVar344 + -0x341,pbVar15);
      puVar344[-0x38a] = 0x106eb8;
      basisu::unpack_block(0xb,puVar344 + -0x341,puVar344[-0x388]);
      puVar344[-0x38a] = 0x106ed4;
      compute_block_error(pcVar338,(color_rgba *)puVar344[-0x388],(ulong *)puVar344[-0x37d],
                          (ulong *)puVar344[-900],(ulong *)puVar344[-0x37b]);
      if (*(int *)(paVar339 + -8) == 8) {
LAB_00107325:
        lVar326 = (long)(int)uVar315;
        goto LAB_00107328;
      }
      if (*(char *)((long)puVar344 + -0x1b04) == '\0') {
        if (*(char *)((long)puVar344 + -0x1b03) == '\0') {
          lVar326 = puVar344[-0x34f];
          uVar348 = puVar344[-0x353];
        }
        else {
          lVar326 = puVar344[-0x34e];
          uVar348 = puVar344[-0x352];
        }
      }
      else {
        lVar326 = puVar344[-0x350];
        uVar348 = puVar344[-0x351];
      }
      puVar361 = puVar344 + -0x209;
      lVar326 = ((ulong)*(uint *)(puVar344 + -0x378) * lVar326) / 100 +
                (*(uint *)(puVar344 + -0x377) * uVar348) / 100;
      puVar361[lVar325] = lVar326;
      if (lVar326 == 0) goto LAB_00107325;
      fVar365 = (float)uVar348;
      if (fVar365 < 0.0) {
        puVar344[-0x374] = puVar361;
        puVar344[-0x38a] = 0x10b256;
        fVar365 = sqrtf(fVar365);
        puVar361 = (undefined8 *)puVar344[-0x374];
      }
      else {
        fVar365 = SQRT(fVar365);
      }
      uVar334 = *(uint *)(puVar344 + -0x387);
      uVar315 = uVar315 + 1;
      paVar339 = paVar339 + 0x80;
      *(float *)((long)(puVar344 + -0x309) + lVar325 * 4) = fVar365;
      dVar367 = (double)fVar365;
      if ((double)puVar344[-0x389] <= (double)fVar365) {
        dVar367 = (double)puVar344[-0x389];
      }
      lVar325 = lVar325 + 1;
      puVar344[-0x389] = dVar367;
    } while (uVar315 != uVar334);
    puVar344[-0x37f] = puVar344 + -0x309;
    if (((double)puVar344[-0x389] == 0.0) || (*(char *)((long)puVar344 + -0x1b01) != '\0')) {
      piVar331 = (int *)puVar344[-0x37e];
      uVar322 = 0;
      uVar348 = 0xffffffffffffffff;
      lVar326 = -1;
      do {
        fVar365 = _LC18;
        if ((((*(uint *)(puVar344 + -0x35f) & 0x200) != 0) && (fVar365 = _LC19, *piVar331 != 0)) &&
           (fVar365 = _LC18, *piVar331 == 10)) {
          fVar365 = _LC19;
        }
        fVar365 = (float)(ulong)puVar361[uVar322] * fVar365;
        if (fVar365 < _LC41) {
          uVar329 = (ulong)fVar365;
        }
        else {
          uVar329 = (long)(fVar365 - _LC41) ^ 0x8000000000000000;
        }
        if ((uVar329 < uVar348) && (lVar326 = (long)(int)uVar322, uVar348 = uVar329, uVar329 == 0))
        goto LAB_0010b13b;
        uVar322 = uVar322 + 1;
        piVar331 = piVar331 + 0x20;
      } while (puVar344[-0x375] != uVar322);
    }
    else {
      piVar331 = (int *)puVar344[-0x37e];
      uVar322 = 0;
      uVar348 = 0xffffffffffffffff;
      lVar326 = -1;
      do {
        if ((double)*(float *)(puVar344[-0x37f] + uVar322 * 4) / (double)puVar344[-0x389] <= _LC42)
        {
          fVar365 = _LC18;
          if (((*(uint *)(puVar344 + -0x35f) & 0x200) != 0) &&
             ((*piVar331 == 0 || (*piVar331 == 10)))) {
            fVar365 = _LC19;
          }
          fVar365 = (float)(ulong)puVar361[uVar322] * fVar365;
          if (fVar365 < _LC41) {
            uVar329 = (ulong)fVar365;
          }
          else {
            uVar329 = (long)(fVar365 - _LC41) ^ 0x8000000000000000;
          }
          if ((uVar329 < uVar348) && (lVar326 = (long)(int)uVar322, uVar348 = uVar329, uVar329 == 0)
             ) goto LAB_0010b13b;
        }
        uVar322 = uVar322 + 1;
        piVar331 = piVar331 + 0x20;
      } while (uVar315 != uVar322);
    }
LAB_00107328:
    lVar325 = lVar326 * 0x80 + 8;
    puVar341 = (uastc_encode_results *)(lVar326 * 0x80 + puVar344[-0x37e]);
  }
LAB_0010733b:
  pcVar351 = (color32 *)puVar344[-0x382];
  uVar334 = *(uint *)(puVar344 + lVar326 * 0x10 + -9);
  uVar315 = *(uint *)((long)puVar344 + lVar326 * 0x80 + -0x44);
  uVar347 = 0;
  *(undefined4 *)(puVar344 + -0x333) = *(undefined4 *)(puVar344 + lVar326 * 0x10 + 5);
  puVar344[-0x38a] = 0x10737d;
  basist::unpack_uastc
            (uVar334,uVar315,(color32 *)puVar344[-0x388],
             (astc_block_desc *)(puVar344[-0x37e] + lVar325),pcVar351,false);
  uVar315 = (uint)pcVar351;
  *(undefined1 *)(puVar344 + -0x350) = 0;
  if (*(char *)((long)puVar344 + -0x1b02) == '\0') {
    *(undefined1 *)(puVar344 + -0x34f) = 0;
    uVar360 = false;
    uVar316 = 0;
  }
  else {
    pcVar352 = (color_rgba *)puVar344[-0x382];
    puVar344[-0x38a] = 0x107510;
    compute_bc1_hints((bool *)(puVar344 + -0x350),(bool *)(puVar344 + -0x34f),puVar341,pcVar338,
                      pcVar352);
    uVar315 = (uint)pcVar352;
    uVar316 = (uint)*(byte *)(puVar344 + -0x34f);
    uVar360 = *(undefined1 *)(puVar344 + -0x350);
  }
  if ((*(char *)((long)&basist::g_uastc_mode_has_alpha + (ulong)uVar334) == '\0') || (uVar334 == 8))
  {
    puVar344[-0x333] = 0;
  }
  else {
    uVar348 = 0;
    puVar344[-0x378] = puVar344 + 0x1ffb;
    do {
      *(undefined1 *)((long)(puVar344 + 0x1ffb) + uVar348) =
           *(undefined1 *)((long)puVar344 + (uVar348 & 0xffffffff) * 4 + -0x1955);
      uVar348 = uVar348 + 1;
    } while (uVar348 != 0x10);
    puVar344[-0x34e] = 0;
    *(undefined4 *)(puVar344 + -0x34d) = 0;
    puVar344[-0x38a] = 0x10741e;
    uastc_pack_eac_a8((uastc_pack_eac_a8_results *)puVar344[-900],(uchar *)puVar344[-0x378],
                      *(uint *)(puVar344 + -0x35d),*(uint *)((long)puVar344 + -0x1af4),uVar315,
                      uVar347);
    *(byte *)((long)puVar344 + -0x1997) =
         *(char *)(puVar344 + -0x34d) << 4 | (byte)*(undefined4 *)((long)puVar344 + -0x1a6c) & 0xf;
  }
  puVar344[-0x38b] = (ulong)*(uint *)(puVar344 + -0x35f);
  peVar16 = (etc_block *)puVar344[-0x385];
  puVar344[-0x38c] = 0x10746d;
  compute_etc1_hints(peVar16,(uint *)puVar344[-900],puVar341,pcVar338,(color_rgba *)puVar344[-0x382]
                     ,*(int *)(puVar344 + -0x361),*(uint *)(puVar344 + -0x38b));
  *(uint *)(puVar344 + -0x38b) = uVar316;
  puVar344[-0x38c] = 0x107493;
  pack_uastc((uastc_block *)puVar344[-0x36f],puVar341,peVar16,*(uint *)(puVar344 + -0x34e),
             (eac_a8_block *)puVar344[-0x388],(bool)uVar360,*(bool *)(puVar344 + -0x38b));
LAB_00107495:
  if (puVar344[0x1ffe] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  puVar344[-0x38a] = 0x10b268;
  __stack_chk_fail();
LAB_0010b13b:
  lVar343 = (long)(int)uVar322 * 0x80;
  lVar325 = lVar343 + 8;
  puVar341 = (uastc_encode_results *)(lVar343 + puVar344[-0x37e]);
  goto LAB_0010733b;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::uastc_rdo_blocks(unsigned int, unsigned int, basist::uastc_block*, basisu::color_rgba
   const*, basisu::uastc_rdo_params const&, unsigned int, unsigned int&, unsigned int&, unsigned
   int&, unsigned int&) [clone .constprop.0] */

char basisu::uastc_rdo_blocks
               (uint param_1,uint param_2,uastc_block *param_3,color_rgba *param_4,
               uastc_rdo_params *param_5,uint param_6,uint *param_7,uint *param_8,uint *param_9,
               uint *param_10)

{
  color_rgba *pcVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar10;
  byte bVar18;
  byte bVar26;
  byte bVar34;
  byte bVar40;
  char cVar46;
  byte bVar47;
  byte bVar48;
  byte bVar53;
  byte bVar54;
  byte bVar62;
  byte bVar70;
  char cVar78;
  byte bVar84;
  byte bVar88;
  byte bVar93;
  byte bVar97;
  undefined1 auVar98 [14];
  undefined1 auVar99 [14];
  undefined1 auVar100 [14];
  undefined1 auVar101 [15];
  undefined1 auVar102 [14];
  undefined1 auVar103 [14];
  undefined1 auVar104 [14];
  undefined1 auVar105 [14];
  undefined1 auVar106 [14];
  undefined1 auVar107 [14];
  undefined1 auVar108 [14];
  undefined1 auVar109 [14];
  undefined1 auVar110 [14];
  undefined1 auVar111 [15];
  undefined1 auVar112 [15];
  undefined1 auVar113 [15];
  undefined1 auVar114 [15];
  undefined1 auVar115 [15];
  undefined1 auVar116 [15];
  undefined1 auVar117 [15];
  undefined1 auVar118 [14];
  undefined1 auVar119 [14];
  undefined1 auVar120 [14];
  undefined1 auVar121 [14];
  undefined1 auVar122 [14];
  undefined1 auVar123 [14];
  undefined1 auVar124 [14];
  undefined1 auVar125 [14];
  undefined1 auVar126 [15];
  undefined1 auVar127 [15];
  undefined1 auVar128 [15];
  undefined1 auVar129 [15];
  undefined1 auVar130 [15];
  undefined1 auVar131 [15];
  undefined1 auVar132 [15];
  undefined1 auVar133 [15];
  undefined1 auVar134 [14];
  undefined1 auVar135 [14];
  undefined1 auVar136 [14];
  undefined1 auVar137 [14];
  undefined1 auVar138 [14];
  undefined1 auVar139 [14];
  undefined1 auVar140 [14];
  undefined1 auVar141 [14];
  undefined1 auVar142 [15];
  undefined1 auVar143 [15];
  undefined1 auVar144 [15];
  undefined1 auVar145 [15];
  undefined1 auVar146 [15];
  undefined1 auVar147 [15];
  undefined1 auVar148 [15];
  undefined1 auVar149 [15];
  undefined1 auVar150 [14];
  undefined1 auVar151 [14];
  undefined1 auVar152 [14];
  undefined1 auVar153 [14];
  undefined1 auVar154 [14];
  undefined1 auVar155 [14];
  undefined1 auVar156 [14];
  undefined1 auVar157 [14];
  undefined1 auVar158 [15];
  undefined1 auVar159 [15];
  undefined1 auVar160 [15];
  undefined1 auVar161 [15];
  undefined1 auVar162 [15];
  undefined1 auVar163 [15];
  undefined1 auVar164 [15];
  undefined1 auVar165 [15];
  undefined1 auVar166 [14];
  undefined1 auVar167 [14];
  undefined1 auVar168 [14];
  undefined1 auVar169 [14];
  undefined1 auVar170 [14];
  undefined1 auVar171 [14];
  undefined1 auVar172 [14];
  undefined1 auVar173 [14];
  undefined1 auVar174 [15];
  undefined1 auVar175 [15];
  undefined1 auVar176 [15];
  undefined1 auVar177 [15];
  undefined1 auVar178 [15];
  undefined1 auVar179 [15];
  undefined1 auVar180 [15];
  undefined1 auVar181 [15];
  undefined1 auVar182 [14];
  undefined1 auVar183 [14];
  undefined1 auVar184 [14];
  undefined1 auVar185 [14];
  undefined1 auVar186 [14];
  undefined1 auVar187 [14];
  undefined1 auVar188 [14];
  undefined1 auVar189 [14];
  undefined1 auVar190 [15];
  undefined1 auVar191 [15];
  undefined1 auVar192 [15];
  undefined1 auVar193 [15];
  undefined1 auVar194 [15];
  undefined1 auVar195 [15];
  undefined1 auVar196 [15];
  undefined1 auVar197 [15];
  undefined1 auVar198 [14];
  undefined1 auVar199 [14];
  undefined1 auVar200 [14];
  undefined1 auVar201 [14];
  undefined1 auVar202 [14];
  undefined1 auVar203 [14];
  undefined1 auVar204 [14];
  undefined1 auVar205 [14];
  undefined1 auVar206 [15];
  undefined1 auVar207 [15];
  undefined1 auVar208 [15];
  undefined1 auVar209 [15];
  uint6 uVar210;
  uint6 uVar211;
  undefined1 auVar212 [15];
  uint6 uVar213;
  uint6 uVar214;
  undefined1 auVar215 [15];
  undefined1 auVar216 [15];
  undefined1 auVar217 [15];
  undefined1 auVar218 [15];
  undefined1 auVar219 [15];
  undefined1 auVar220 [15];
  undefined1 auVar221 [15];
  undefined1 auVar222 [15];
  undefined1 auVar223 [15];
  undefined1 auVar224 [15];
  undefined1 auVar225 [15];
  undefined1 auVar226 [15];
  undefined1 auVar227 [15];
  undefined1 auVar228 [15];
  undefined1 auVar229 [15];
  undefined1 auVar230 [15];
  undefined1 auVar231 [15];
  undefined1 auVar232 [15];
  undefined1 auVar233 [15];
  undefined1 auVar234 [15];
  undefined1 auVar235 [15];
  undefined1 auVar236 [15];
  undefined1 auVar237 [15];
  undefined1 auVar238 [15];
  undefined1 auVar239 [15];
  undefined1 auVar240 [15];
  undefined1 auVar241 [15];
  undefined1 auVar242 [15];
  undefined1 auVar243 [15];
  undefined1 auVar244 [15];
  undefined1 auVar245 [15];
  undefined1 auVar246 [15];
  undefined1 auVar247 [15];
  undefined1 auVar248 [15];
  undefined1 auVar249 [15];
  undefined1 auVar250 [15];
  undefined1 auVar251 [15];
  undefined1 auVar252 [15];
  undefined1 auVar253 [15];
  undefined1 auVar254 [15];
  undefined1 auVar255 [15];
  undefined1 auVar256 [15];
  undefined1 auVar257 [15];
  undefined1 auVar258 [15];
  undefined1 auVar259 [15];
  undefined1 auVar260 [15];
  undefined1 auVar261 [15];
  undefined1 auVar262 [15];
  undefined1 auVar263 [13];
  undefined1 auVar264 [13];
  uint5 uVar265;
  undefined1 auVar266 [14];
  undefined1 auVar267 [13];
  undefined1 auVar268 [13];
  uint5 uVar269;
  undefined1 auVar270 [13];
  undefined1 auVar271 [14];
  undefined1 auVar272 [15];
  undefined1 auVar273 [13];
  undefined1 auVar274 [13];
  undefined1 auVar275 [13];
  undefined1 auVar276 [14];
  undefined1 auVar277 [15];
  undefined1 auVar278 [13];
  undefined1 auVar279 [13];
  undefined1 auVar280 [13];
  undefined1 auVar281 [14];
  undefined1 auVar282 [15];
  undefined1 auVar283 [13];
  undefined1 auVar284 [14];
  undefined1 auVar285 [14];
  undefined1 auVar286 [14];
  undefined1 auVar287 [15];
  undefined1 auVar288 [13];
  undefined1 auVar289 [14];
  undefined1 auVar290 [14];
  undefined1 auVar291 [14];
  undefined1 auVar292 [13];
  undefined1 auVar293 [14];
  undefined1 auVar294 [14];
  undefined1 auVar295 [14];
  undefined1 auVar296 [13];
  undefined1 auVar297 [14];
  undefined1 auVar298 [14];
  undefined1 auVar299 [14];
  undefined1 auVar300 [15];
  undefined1 auVar301 [15];
  undefined1 auVar302 [15];
  undefined1 auVar303 [15];
  undefined1 auVar304 [15];
  undefined1 auVar305 [15];
  undefined1 auVar306 [15];
  undefined1 auVar307 [15];
  undefined1 auVar308 [15];
  undefined1 auVar309 [15];
  undefined1 auVar310 [15];
  undefined1 auVar311 [15];
  undefined1 auVar312 [15];
  undefined1 auVar313 [15];
  undefined1 auVar314 [15];
  undefined1 auVar315 [15];
  undefined1 auVar316 [15];
  undefined1 auVar317 [15];
  undefined1 auVar318 [15];
  undefined1 auVar319 [15];
  undefined1 auVar320 [15];
  undefined1 auVar321 [15];
  undefined1 auVar322 [15];
  undefined1 auVar323 [15];
  undefined1 auVar324 [15];
  undefined1 auVar325 [15];
  undefined1 auVar326 [15];
  undefined1 auVar327 [15];
  undefined1 auVar328 [15];
  undefined1 auVar329 [15];
  undefined1 auVar330 [15];
  undefined1 auVar331 [15];
  undefined1 auVar332 [15];
  undefined1 auVar333 [15];
  undefined1 auVar334 [15];
  undefined1 auVar335 [15];
  undefined1 auVar336 [15];
  undefined1 auVar337 [15];
  undefined1 auVar338 [15];
  undefined1 auVar339 [15];
  undefined1 auVar340 [15];
  undefined1 auVar341 [15];
  undefined1 auVar342 [15];
  undefined1 auVar343 [15];
  undefined1 auVar344 [15];
  undefined1 auVar345 [15];
  undefined1 auVar346 [15];
  undefined1 auVar347 [15];
  undefined1 auVar348 [13];
  undefined1 auVar349 [15];
  undefined1 auVar350 [15];
  undefined1 auVar351 [15];
  undefined1 auVar352 [15];
  undefined1 auVar353 [15];
  undefined1 auVar354 [15];
  undefined1 auVar355 [15];
  undefined8 uVar356;
  undefined8 uVar357;
  undefined8 uVar358;
  undefined8 uVar359;
  undefined8 uVar360;
  undefined1 auVar361 [15];
  unkuint9 Var362;
  undefined1 auVar363 [11];
  undefined1 auVar364 [13];
  undefined1 auVar365 [13];
  undefined1 auVar366 [14];
  undefined1 auVar367 [14];
  unkbyte10 Var368;
  undefined1 auVar369 [14];
  unkbyte10 Var370;
  undefined1 auVar371 [15];
  undefined1 auVar372 [11];
  undefined1 auVar373 [13];
  undefined1 auVar374 [13];
  undefined1 auVar375 [14];
  undefined1 auVar376 [14];
  unkbyte10 Var377;
  undefined1 auVar378 [14];
  unkbyte10 Var379;
  undefined1 auVar380 [15];
  undefined1 auVar381 [11];
  undefined1 auVar382 [13];
  undefined1 auVar383 [13];
  undefined1 auVar384 [14];
  undefined1 auVar385 [14];
  undefined1 auVar386 [14];
  undefined1 auVar387 [15];
  undefined1 auVar388 [11];
  undefined1 auVar389 [13];
  undefined1 auVar390 [13];
  undefined1 auVar391 [14];
  undefined1 auVar392 [14];
  undefined1 auVar393 [14];
  undefined1 auVar394 [15];
  undefined1 auVar395 [11];
  undefined1 auVar396 [13];
  undefined1 auVar397 [15];
  unkuint9 Var398;
  undefined1 auVar399 [11];
  undefined1 auVar400 [13];
  undefined1 auVar401 [15];
  undefined1 auVar402 [11];
  undefined1 auVar403 [13];
  undefined1 auVar404 [15];
  undefined1 auVar405 [11];
  undefined1 auVar406 [13];
  undefined1 auVar407 [15];
  undefined1 auVar408 [11];
  undefined1 auVar409 [13];
  undefined1 auVar410 [15];
  undefined1 auVar411 [11];
  undefined1 auVar412 [13];
  undefined1 auVar413 [15];
  undefined1 auVar414 [11];
  undefined1 auVar415 [13];
  undefined1 auVar416 [15];
  undefined1 auVar417 [11];
  undefined1 auVar418 [13];
  undefined1 auVar419 [14];
  undefined1 auVar420 [14];
  undefined1 auVar421 [14];
  undefined1 auVar422 [14];
  undefined1 auVar423 [14];
  undefined1 auVar424 [14];
  undefined1 auVar425 [14];
  undefined1 auVar426 [14];
  undefined1 auVar427 [15];
  undefined1 auVar428 [11];
  undefined1 auVar429 [13];
  undefined1 auVar430 [15];
  undefined1 auVar431 [11];
  undefined1 auVar432 [13];
  undefined1 auVar433 [15];
  undefined1 auVar434 [11];
  undefined1 auVar435 [13];
  undefined1 auVar436 [15];
  undefined1 auVar437 [11];
  undefined1 auVar438 [13];
  undefined1 auVar439 [15];
  undefined1 auVar440 [11];
  undefined1 auVar441 [13];
  undefined1 auVar442 [15];
  undefined1 auVar443 [11];
  undefined1 auVar444 [13];
  undefined1 auVar445 [15];
  undefined1 auVar446 [11];
  undefined1 auVar447 [13];
  undefined1 auVar448 [15];
  undefined1 auVar449 [11];
  undefined1 auVar450 [13];
  undefined1 auVar451 [14];
  undefined1 auVar452 [14];
  undefined1 auVar453 [14];
  undefined1 auVar454 [14];
  undefined1 auVar455 [14];
  undefined1 auVar456 [14];
  undefined1 auVar457 [14];
  undefined1 auVar458 [14];
  undefined1 auVar459 [15];
  undefined1 auVar460 [11];
  undefined1 auVar461 [13];
  undefined1 auVar462 [15];
  undefined1 auVar463 [11];
  undefined1 auVar464 [13];
  undefined1 auVar465 [15];
  undefined1 auVar466 [11];
  undefined1 auVar467 [13];
  undefined1 auVar468 [15];
  undefined1 auVar469 [11];
  undefined1 auVar470 [13];
  undefined1 auVar471 [15];
  undefined1 auVar472 [11];
  undefined1 auVar473 [13];
  undefined1 auVar474 [15];
  undefined1 auVar475 [11];
  undefined1 auVar476 [13];
  undefined1 auVar477 [15];
  undefined1 auVar478 [11];
  undefined1 auVar479 [13];
  undefined1 auVar480 [15];
  undefined1 auVar481 [11];
  undefined1 auVar482 [13];
  undefined1 auVar483 [14];
  undefined1 auVar484 [14];
  undefined1 auVar485 [14];
  undefined1 auVar486 [14];
  undefined1 auVar487 [14];
  undefined1 auVar488 [14];
  undefined1 auVar489 [14];
  undefined1 auVar490 [14];
  undefined1 auVar491 [15];
  undefined1 auVar492 [11];
  undefined1 auVar493 [13];
  undefined1 auVar494 [15];
  undefined1 auVar495 [11];
  undefined1 auVar496 [13];
  undefined1 auVar497 [15];
  undefined1 auVar498 [11];
  undefined1 auVar499 [13];
  undefined1 auVar500 [15];
  undefined1 auVar501 [11];
  undefined1 auVar502 [13];
  undefined1 auVar503 [15];
  undefined1 auVar504 [11];
  undefined1 auVar505 [13];
  undefined1 auVar506 [15];
  undefined1 auVar507 [11];
  undefined1 auVar508 [13];
  undefined1 auVar509 [15];
  undefined1 auVar510 [11];
  undefined1 auVar511 [13];
  undefined1 auVar512 [15];
  undefined1 auVar513 [11];
  undefined1 auVar514 [13];
  undefined1 auVar515 [14];
  undefined1 auVar516 [14];
  undefined1 auVar517 [14];
  undefined1 auVar518 [14];
  undefined1 auVar519 [14];
  undefined1 auVar520 [14];
  undefined1 auVar521 [14];
  undefined1 auVar522 [14];
  undefined1 auVar523 [15];
  undefined1 auVar524 [11];
  undefined1 auVar525 [13];
  undefined1 auVar526 [15];
  undefined1 auVar527 [11];
  undefined1 auVar528 [13];
  undefined1 auVar529 [15];
  undefined1 auVar530 [11];
  undefined1 auVar531 [13];
  undefined1 auVar532 [15];
  undefined1 auVar533 [11];
  undefined1 auVar534 [13];
  undefined1 auVar535 [15];
  unkuint9 Var536;
  undefined1 auVar537 [11];
  undefined1 auVar538 [13];
  undefined1 auVar539 [15];
  undefined1 auVar540 [11];
  undefined1 auVar541 [13];
  undefined1 auVar542 [15];
  undefined1 auVar543 [11];
  undefined1 auVar544 [13];
  undefined1 auVar545 [15];
  undefined1 auVar546 [11];
  undefined1 auVar547 [13];
  undefined1 auVar548 [14];
  undefined1 auVar549 [14];
  undefined1 auVar550 [14];
  undefined1 auVar551 [14];
  undefined1 auVar552 [14];
  undefined1 auVar553 [14];
  undefined1 auVar554 [14];
  undefined1 auVar555 [14];
  undefined1 auVar556 [15];
  undefined1 auVar557 [11];
  undefined1 auVar558 [13];
  undefined1 auVar559 [15];
  undefined1 auVar560 [11];
  undefined1 auVar561 [13];
  undefined1 auVar562 [15];
  undefined1 auVar563 [11];
  undefined1 auVar564 [13];
  undefined1 auVar565 [15];
  undefined1 auVar566 [11];
  undefined1 auVar567 [13];
  undefined1 auVar568 [15];
  undefined1 auVar569 [11];
  undefined1 auVar570 [13];
  undefined1 auVar571 [15];
  undefined1 auVar572 [11];
  undefined1 auVar573 [13];
  undefined1 auVar574 [15];
  undefined1 auVar575 [11];
  undefined1 auVar576 [13];
  undefined1 auVar577 [15];
  undefined1 auVar578 [11];
  undefined1 auVar579 [13];
  undefined1 auVar580 [14];
  undefined1 auVar581 [14];
  undefined1 auVar582 [14];
  undefined1 auVar583 [14];
  undefined1 auVar584 [14];
  undefined1 auVar585 [14];
  undefined1 auVar586 [14];
  undefined1 auVar587 [14];
  undefined3 uVar588;
  undefined3 uVar589;
  undefined1 auVar590 [15];
  undefined1 auVar591 [15];
  undefined1 auVar592 [12];
  undefined1 auVar593 [12];
  undefined1 auVar594 [15];
  undefined1 auVar595 [15];
  undefined1 auVar596 [12];
  undefined1 auVar597 [12];
  undefined1 auVar598 [15];
  undefined1 auVar599 [15];
  undefined1 auVar600 [12];
  undefined1 auVar601 [12];
  undefined1 auVar602 [15];
  undefined1 auVar603 [15];
  undefined1 auVar604 [12];
  undefined1 auVar605 [12];
  undefined3 uVar606;
  undefined3 uVar607;
  undefined3 uVar608;
  undefined3 uVar609;
  undefined3 uVar610;
  undefined3 uVar611;
  undefined1 auVar612 [15];
  undefined1 auVar613 [15];
  undefined1 auVar614 [15];
  undefined1 auVar615 [15];
  undefined1 auVar616 [15];
  undefined1 auVar617 [15];
  undefined1 auVar618 [15];
  undefined1 auVar619 [15];
  undefined1 auVar620 [15];
  undefined1 auVar621 [15];
  undefined1 auVar622 [15];
  undefined1 auVar623 [15];
  undefined1 auVar624 [15];
  undefined1 auVar625 [15];
  undefined1 auVar626 [15];
  undefined1 auVar627 [15];
  undefined1 auVar628 [12];
  undefined1 auVar629 [12];
  undefined1 auVar630 [12];
  undefined1 auVar631 [12];
  undefined1 auVar632 [12];
  undefined1 auVar633 [12];
  undefined1 auVar634 [12];
  undefined1 auVar635 [12];
  undefined1 auVar636 [15];
  undefined1 auVar637 [15];
  undefined1 auVar638 [15];
  undefined1 auVar639 [15];
  undefined1 auVar640 [15];
  undefined1 auVar641 [15];
  undefined1 auVar642 [15];
  undefined1 auVar643 [15];
  undefined1 auVar644 [15];
  undefined1 auVar645 [15];
  undefined1 auVar646 [15];
  undefined1 auVar647 [15];
  undefined1 auVar648 [15];
  undefined1 auVar649 [15];
  undefined1 auVar650 [15];
  undefined1 auVar651 [15];
  undefined1 auVar652 [12];
  undefined1 auVar653 [12];
  undefined1 auVar654 [12];
  undefined1 auVar655 [12];
  undefined1 auVar656 [12];
  undefined1 auVar657 [12];
  undefined1 auVar658 [12];
  undefined1 auVar659 [12];
  undefined1 auVar660 [15];
  undefined1 auVar661 [15];
  undefined1 auVar662 [15];
  undefined1 auVar663 [15];
  undefined1 auVar664 [15];
  undefined1 auVar665 [15];
  undefined1 auVar666 [15];
  undefined1 auVar667 [15];
  undefined1 auVar668 [15];
  undefined1 auVar669 [15];
  undefined1 auVar670 [15];
  undefined1 auVar671 [15];
  undefined1 auVar672 [15];
  undefined1 auVar673 [15];
  undefined1 auVar674 [15];
  undefined1 auVar675 [15];
  undefined1 auVar676 [12];
  undefined1 auVar677 [12];
  undefined1 auVar678 [12];
  undefined1 auVar679 [12];
  undefined1 auVar680 [12];
  undefined1 auVar681 [12];
  undefined1 auVar682 [12];
  undefined1 auVar683 [12];
  undefined1 auVar684 [15];
  undefined1 auVar685 [15];
  undefined1 auVar686 [15];
  undefined1 auVar687 [15];
  undefined1 auVar688 [15];
  undefined1 auVar689 [15];
  undefined1 auVar690 [15];
  undefined1 auVar691 [15];
  undefined1 auVar692 [15];
  undefined1 auVar693 [15];
  undefined1 auVar694 [15];
  undefined1 auVar695 [15];
  undefined1 auVar696 [15];
  undefined1 auVar697 [15];
  undefined1 auVar698 [15];
  undefined1 auVar699 [15];
  undefined1 auVar700 [12];
  undefined1 auVar701 [12];
  undefined1 auVar702 [12];
  undefined1 auVar703 [12];
  undefined1 auVar704 [12];
  undefined1 auVar705 [12];
  undefined1 auVar706 [12];
  undefined1 auVar707 [12];
  undefined1 auVar708 [15];
  undefined1 auVar709 [15];
  undefined1 auVar710 [15];
  undefined1 auVar711 [15];
  undefined1 auVar712 [15];
  undefined1 auVar713 [15];
  undefined1 auVar714 [15];
  undefined1 auVar715 [15];
  undefined1 auVar716 [15];
  undefined1 auVar717 [15];
  undefined1 auVar718 [15];
  undefined1 auVar719 [15];
  undefined1 auVar720 [15];
  undefined1 auVar721 [15];
  undefined1 auVar722 [15];
  undefined1 auVar723 [15];
  undefined1 auVar724 [12];
  undefined1 auVar725 [12];
  undefined1 auVar726 [12];
  undefined1 auVar727 [12];
  undefined1 auVar728 [12];
  undefined1 auVar729 [12];
  undefined1 auVar730 [12];
  undefined1 auVar731 [12];
  undefined1 auVar732 [15];
  undefined1 auVar733 [15];
  undefined1 auVar734 [15];
  undefined1 auVar735 [15];
  undefined1 auVar736 [15];
  undefined1 auVar737 [15];
  undefined1 auVar738 [15];
  undefined1 auVar739 [15];
  undefined1 auVar740 [15];
  undefined1 auVar741 [15];
  undefined1 auVar742 [15];
  undefined1 auVar743 [15];
  undefined1 auVar744 [15];
  undefined1 auVar745 [15];
  undefined1 auVar746 [15];
  undefined1 auVar747 [15];
  undefined1 auVar748 [12];
  undefined1 auVar749 [12];
  undefined1 auVar750 [12];
  undefined1 auVar751 [12];
  undefined1 auVar752 [12];
  undefined1 auVar753 [12];
  undefined1 auVar754 [12];
  undefined1 auVar755 [12];
  uint uVar756;
  uint uVar757;
  uint uVar758;
  undefined5 uVar759;
  undefined5 uVar760;
  undefined1 auVar761 [12];
  undefined1 auVar762 [12];
  undefined1 auVar763 [12];
  undefined1 auVar764 [12];
  undefined5 uVar765;
  undefined5 uVar766;
  undefined5 uVar767;
  undefined5 uVar768;
  undefined5 uVar769;
  undefined5 uVar770;
  undefined1 auVar771 [12];
  undefined1 auVar772 [12];
  undefined1 auVar773 [12];
  undefined1 auVar774 [12];
  undefined1 auVar775 [12];
  undefined1 auVar776 [12];
  undefined1 auVar777 [12];
  undefined1 auVar778 [12];
  undefined1 auVar779 [12];
  undefined1 auVar780 [12];
  undefined1 auVar781 [12];
  undefined1 auVar782 [12];
  undefined1 auVar783 [12];
  undefined1 auVar784 [12];
  undefined1 auVar785 [12];
  undefined1 auVar786 [12];
  undefined1 auVar787 [12];
  undefined1 auVar788 [12];
  undefined1 auVar789 [12];
  undefined1 auVar790 [12];
  undefined1 auVar791 [12];
  undefined1 auVar792 [12];
  undefined1 auVar793 [12];
  undefined1 auVar794 [12];
  undefined1 auVar795 [12];
  undefined1 auVar796 [12];
  undefined1 auVar797 [12];
  undefined1 auVar798 [12];
  undefined1 auVar799 [12];
  undefined1 auVar800 [12];
  undefined1 auVar801 [12];
  undefined1 auVar802 [12];
  undefined1 auVar803 [12];
  undefined1 auVar804 [12];
  undefined1 auVar805 [12];
  undefined1 auVar806 [12];
  undefined1 auVar807 [12];
  undefined1 auVar808 [12];
  undefined1 auVar809 [12];
  undefined1 auVar810 [12];
  undefined1 auVar811 [12];
  undefined1 auVar812 [12];
  undefined1 auVar813 [12];
  undefined1 auVar814 [12];
  undefined1 auVar815 [12];
  undefined1 auVar816 [12];
  undefined1 auVar817 [12];
  undefined1 auVar818 [12];
  undefined1 auVar819 [14];
  undefined1 auVar820 [14];
  undefined1 auVar821 [14];
  undefined1 auVar822 [14];
  undefined1 auVar823 [14];
  undefined1 auVar824 [14];
  undefined1 auVar825 [14];
  undefined1 auVar826 [14];
  undefined1 auVar827 [14];
  undefined1 auVar828 [14];
  undefined1 auVar829 [14];
  undefined1 auVar830 [14];
  undefined1 auVar831 [14];
  undefined1 auVar832 [14];
  undefined1 auVar833 [14];
  undefined1 auVar834 [14];
  undefined1 auVar835 [14];
  undefined1 auVar836 [14];
  undefined1 auVar837 [14];
  undefined1 auVar838 [14];
  undefined1 auVar839 [14];
  undefined1 auVar840 [14];
  undefined1 auVar841 [14];
  undefined1 auVar842 [14];
  undefined1 auVar843 [14];
  undefined1 auVar844 [14];
  undefined1 auVar845 [14];
  undefined1 auVar846 [14];
  undefined1 auVar847 [14];
  undefined1 auVar848 [14];
  undefined1 auVar849 [14];
  undefined1 auVar850 [14];
  undefined1 auVar851 [14];
  undefined1 auVar852 [14];
  undefined1 auVar853 [14];
  undefined1 auVar854 [14];
  undefined1 auVar855 [14];
  undefined1 auVar856 [14];
  undefined1 auVar857 [14];
  undefined1 auVar858 [14];
  undefined1 auVar859 [14];
  undefined1 auVar860 [14];
  undefined1 auVar861 [14];
  undefined1 auVar862 [14];
  undefined1 auVar863 [14];
  undefined1 auVar864 [14];
  undefined1 auVar865 [14];
  undefined1 auVar866 [14];
  undefined1 auVar867 [14];
  undefined1 auVar868 [14];
  undefined1 auVar869 [14];
  undefined1 auVar870 [14];
  undefined8 *puVar871;
  uint6 uVar872;
  uint6 uVar873;
  char cVar874;
  uint uVar875;
  int iVar876;
  uint uVar877;
  uint uVar878;
  sbyte sVar879;
  uint uVar880;
  uint uVar881;
  uint uVar882;
  ulong uVar883;
  char extraout_DL;
  char extraout_DL_00;
  uint uVar884;
  ulong uVar885;
  size_t __n;
  ulong uVar886;
  uint uVar887;
  uint uVar888;
  byte *pbVar889;
  uint uVar890;
  uint uVar891;
  uint uVar892;
  color32 *pcVar893;
  unpacked_uastc_block *puVar894;
  ulong uVar895;
  uastc_block *puVar896;
  long in_FS_OFFSET;
  ushort uVar897;
  float fVar898;
  float fVar899;
  float fVar900;
  undefined4 uVar901;
  short sVar932;
  undefined1 auVar905 [12];
  short sVar934;
  short sVar936;
  undefined1 auVar906 [12];
  undefined1 auVar907 [12];
  undefined1 auVar908 [12];
  undefined1 auVar909 [12];
  undefined1 auVar910 [12];
  undefined1 auVar911 [12];
  ushort uVar930;
  ushort uVar931;
  ushort uVar933;
  ushort uVar937;
  undefined1 auVar920 [16];
  ushort uVar929;
  ushort uVar935;
  ushort uVar939;
  undefined1 auVar921 [16];
  short sVar938;
  short sVar940;
  undefined1 auVar925 [16];
  undefined4 uVar941;
  short sVar958;
  long lVar943;
  undefined1 auVar945 [12];
  undefined1 auVar947 [12];
  undefined1 auVar948 [12];
  undefined1 auVar949 [12];
  ushort uVar959;
  ushort uVar960;
  short sVar961;
  undefined1 auVar962 [12];
  undefined1 auVar963 [12];
  short sVar996;
  undefined1 auVar964 [12];
  undefined1 auVar965 [12];
  undefined1 auVar966 [12];
  undefined1 auVar967 [12];
  undefined1 auVar968 [12];
  undefined1 auVar969 [12];
  undefined1 auVar970 [12];
  short sVar992;
  short sVar993;
  short sVar994;
  short sVar995;
  short sVar997;
  undefined1 auVar980 [16];
  undefined1 auVar982 [16];
  short sVar998;
  undefined1 auVar989 [16];
  undefined1 auVar990 [16];
  short sVar999;
  short sVar1021;
  undefined8 uVar1000;
  undefined1 auVar1001 [12];
  short sVar1022;
  undefined1 auVar1003 [12];
  undefined1 auVar1004 [12];
  undefined1 auVar1005 [12];
  undefined1 auVar1006 [12];
  short sVar1019;
  short sVar1020;
  short sVar1023;
  undefined1 auVar1013 [16];
  short sVar1024;
  float fVar1025;
  float fVar1026;
  undefined4 uVar1027;
  undefined1 auVar1030 [12];
  int iVar1044;
  undefined1 auVar1032 [12];
  undefined1 auVar1033 [12];
  undefined1 auVar1034 [12];
  ushort uVar1045;
  ushort uVar1046;
  ushort uVar1072;
  ushort uVar1074;
  ushort uVar1076;
  ushort uVar1078;
  ushort uVar1082;
  undefined1 auVar1047 [12];
  undefined1 auVar1048 [12];
  ushort uVar1073;
  ushort uVar1075;
  ushort uVar1077;
  ushort uVar1079;
  ushort uVar1083;
  int iVar1080;
  undefined1 auVar1049 [12];
  undefined1 auVar1050 [12];
  undefined1 auVar1051 [12];
  undefined1 auVar1052 [12];
  undefined1 auVar1053 [12];
  undefined1 auVar1054 [12];
  ushort uVar1084;
  ushort uVar1086;
  undefined1 auVar1063 [16];
  int iVar1081;
  ushort uVar1085;
  undefined1 auVar1067 [16];
  ushort uVar1087;
  ushort uVar1088;
  ushort uVar1098;
  ushort uVar1100;
  ushort uVar1103;
  ushort uVar1107;
  ushort uVar1111;
  undefined1 auVar1089 [12];
  ushort uVar1099;
  ushort uVar1101;
  short sVar1102;
  ushort uVar1104;
  short sVar1105;
  ushort uVar1108;
  short sVar1109;
  ushort uVar1112;
  short sVar1113;
  undefined1 auVar1090 [12];
  short sVar1106;
  short sVar1110;
  short sVar1114;
  undefined1 auVar1091 [12];
  ushort uVar1115;
  ushort uVar1116;
  short sVar1117;
  short sVar1118;
  ushort uVar1119;
  undefined1 auVar1095 [16];
  short sVar1120;
  short sVar1121;
  ushort uVar1122;
  short sVar1123;
  short sVar1124;
  ushort uVar1136;
  ushort uVar1139;
  long lVar1125;
  short sVar1137;
  short sVar1140;
  ushort uVar1142;
  short sVar1143;
  ushort uVar1145;
  short sVar1146;
  ushort uVar1149;
  short sVar1150;
  int iVar1148;
  undefined1 auVar1126 [12];
  short sVar1138;
  short sVar1141;
  short sVar1144;
  short sVar1147;
  short sVar1151;
  undefined1 auVar1127 [12];
  undefined1 auVar1128 [12];
  ushort uVar1152;
  short sVar1153;
  short sVar1154;
  ushort uVar1155;
  short sVar1156;
  short sVar1157;
  undefined1 auVar1134 [16];
  short sVar1158;
  short sVar1159;
  short sVar1163;
  short sVar1164;
  short sVar1165;
  short sVar1166;
  short sVar1167;
  short sVar1168;
  short sVar1169;
  short sVar1170;
  short sVar1171;
  short sVar1172;
  undefined1 auVar1160 [12];
  short sVar1173;
  short sVar1174;
  short sVar1175;
  short sVar1176;
  ushort uVar1177;
  short sVar1178;
  short sVar1179;
  ushort uVar1188;
  uint uVar1180;
  short sVar1189;
  short sVar1192;
  short sVar1196;
  short sVar1200;
  undefined1 auVar1181 [12];
  short sVar1190;
  short sVar1193;
  short sVar1197;
  short sVar1201;
  undefined1 auVar1182 [12];
  ushort uVar1191;
  ushort uVar1194;
  short sVar1195;
  ushort uVar1198;
  ushort uVar1199;
  ushort uVar1202;
  short sVar1203;
  short sVar1204;
  ushort uVar1205;
  undefined1 auVar1185 [16];
  short sVar1206;
  short sVar1207;
  short sVar1208;
  short sVar1209;
  short sVar1210;
  short sVar1211;
  short sVar1212;
  short sVar1213;
  short sVar1214;
  short sVar1215;
  short sVar1216;
  short sVar1217;
  short sVar1218;
  short sVar1219;
  short sVar1220;
  short sVar1221;
  ushort uVar1222;
  short sVar1223;
  ushort uVar1224;
  short sVar1225;
  ushort uVar1229;
  short sVar1230;
  ushort uVar1231;
  short sVar1232;
  ushort uVar1233;
  ushort uVar1234;
  short sVar1235;
  undefined1 auVar1226 [12];
  ushort uVar1236;
  short sVar1237;
  ushort uVar1238;
  short sVar1239;
  short sVar1240;
  undefined1 auVar1241 [12];
  undefined1 auVar1243 [16];
  undefined1 auVar1244 [16];
  ulong local_5f0;
  undefined1 local_5c8 [16];
  bool local_5a8;
  int local_5a4;
  char local_50d;
  float local_50c;
  int local_4f4;
  bool local_4ba;
  bool local_4b9;
  ulong local_4b8;
  uint local_4b0;
  undefined4 local_4ac;
  int local_4a8;
  undefined8 *local_498;
  long local_490;
  undefined8 *local_488;
  undefined8 local_480;
  undefined4 local_478;
  undefined8 local_470;
  undefined8 local_468 [2];
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  undefined8 local_438;
  undefined8 uStack_430;
  undefined4 local_428 [4];
  color32 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  color32 local_398;
  byte bStack_397;
  undefined6 uStack_396;
  undefined8 uStack_390;
  undefined4 local_388;
  undefined8 uStack_384;
  undefined4 uStack_37c;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  color32 local_358 [3];
  color32 acStack_355 [13];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  bc7_optimization_results local_318 [96];
  ulong local_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  ulong local_250;
  undefined4 local_248;
  undefined8 local_240;
  unpacked_uastc_block local_238 [104];
  uint local_1d0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  ulong local_138;
  ulong uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  color32 local_58 [24];
  long local_40;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar63;
  char cVar64;
  char cVar65;
  char cVar66;
  char cVar67;
  char cVar68;
  char cVar69;
  char cVar71;
  char cVar72;
  char cVar73;
  char cVar74;
  char cVar75;
  char cVar76;
  char cVar77;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  undefined6 uVar902;
  undefined8 uVar903;
  undefined1 auVar904 [12];
  undefined1 auVar912 [14];
  undefined1 auVar913 [14];
  undefined1 auVar914 [14];
  undefined1 auVar915 [14];
  undefined1 auVar916 [14];
  undefined1 auVar917 [14];
  undefined1 auVar918 [14];
  undefined1 auVar919 [14];
  undefined1 auVar922 [16];
  undefined1 auVar923 [16];
  undefined1 auVar924 [16];
  undefined1 auVar926 [16];
  undefined1 auVar927 [16];
  undefined1 auVar928 [16];
  undefined6 uVar942;
  undefined8 uVar944;
  undefined1 auVar946 [12];
  undefined1 auVar950 [14];
  undefined1 auVar951 [14];
  undefined1 auVar952 [14];
  undefined1 auVar953 [14];
  undefined1 auVar954 [14];
  undefined1 auVar955 [16];
  undefined1 auVar956 [16];
  undefined1 auVar957 [16];
  undefined1 auVar971 [14];
  undefined1 auVar972 [14];
  undefined1 auVar973 [14];
  undefined1 auVar974 [14];
  undefined1 auVar975 [14];
  undefined1 auVar976 [14];
  undefined1 auVar977 [14];
  undefined1 auVar978 [14];
  undefined1 auVar979 [14];
  undefined1 auVar981 [16];
  undefined1 auVar983 [16];
  undefined1 auVar984 [16];
  undefined1 auVar985 [16];
  undefined1 auVar986 [16];
  undefined1 auVar987 [16];
  undefined1 auVar988 [16];
  undefined1 auVar991 [16];
  undefined1 auVar1002 [12];
  undefined1 auVar1007 [14];
  undefined1 auVar1008 [14];
  undefined1 auVar1009 [14];
  undefined1 auVar1010 [14];
  undefined1 auVar1011 [14];
  undefined1 auVar1012 [14];
  undefined1 auVar1014 [16];
  undefined1 auVar1015 [16];
  undefined1 auVar1016 [16];
  undefined1 auVar1017 [16];
  undefined1 auVar1018 [16];
  undefined6 uVar1028;
  undefined8 uVar1029;
  undefined1 auVar1031 [12];
  undefined1 auVar1035 [14];
  undefined1 auVar1036 [14];
  undefined1 auVar1037 [14];
  undefined1 auVar1038 [14];
  undefined1 auVar1039 [14];
  undefined1 auVar1040 [16];
  undefined1 auVar1041 [16];
  undefined1 auVar1042 [16];
  undefined1 auVar1043 [16];
  undefined1 auVar1055 [14];
  undefined1 auVar1056 [14];
  undefined1 auVar1057 [14];
  undefined1 auVar1058 [14];
  undefined1 auVar1059 [14];
  undefined1 auVar1060 [14];
  undefined1 auVar1061 [14];
  undefined1 auVar1062 [14];
  undefined1 auVar1064 [16];
  undefined1 auVar1065 [16];
  undefined1 auVar1066 [16];
  undefined1 auVar1068 [16];
  undefined1 auVar1069 [16];
  undefined1 auVar1070 [16];
  undefined1 auVar1071 [16];
  undefined1 auVar1092 [14];
  undefined1 auVar1093 [14];
  undefined1 auVar1094 [14];
  undefined1 auVar1096 [16];
  undefined1 auVar1097 [16];
  undefined1 auVar1129 [14];
  undefined1 auVar1130 [14];
  undefined1 auVar1131 [14];
  undefined1 auVar1132 [16];
  undefined1 auVar1133 [16];
  undefined1 auVar1135 [16];
  undefined1 auVar1161 [14];
  undefined1 auVar1162 [16];
  undefined1 auVar1183 [14];
  undefined1 auVar1184 [14];
  undefined1 auVar1186 [16];
  undefined1 auVar1187 [16];
  undefined1 auVar1227 [14];
  undefined1 auVar1228 [16];
  undefined1 auVar1242 [14];
  undefined1 auVar1245 [16];
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("uastc_rdo_blocks: Processing blocks %u to %u\n",param_1,(ulong)param_2);
  local_490 = 1;
  local_488 = (undefined8 *)0x0;
  local_480 = 0;
  uVar875 = 1;
  if (*(uint *)param_5 >> 4 != 0) {
    uVar875 = *(uint *)param_5 >> 4;
  }
  local_478 = 0x3f800000;
  local_470 = 0;
  local_468[0] = 0;
  local_498 = local_468;
  if (param_1 < param_2) {
    local_5f0 = (ulong)param_1 << 4;
    local_5a4 = param_1 - 1;
    do {
      iVar876 = local_5a4 + 1;
      local_50d = basist::unpack_uastc(param_3 + local_5f0,local_238,false,true);
      uVar892 = local_1d0;
      if (local_50d == '\0') goto LAB_0010c802;
      if (local_1d0 != 8) {
        pcVar1 = param_4 + (local_5f0 & 0xffffffff) * 4;
        auVar921 = *(undefined1 (*) [16])pcVar1;
        auVar920 = *(undefined1 (*) [16])(pcVar1 + 0x10) & __LC6;
        auVar980 = *(undefined1 (*) [16])pcVar1 & __LC6;
        auVar1095 = *(undefined1 (*) [16])(pcVar1 + 0x20);
        sVar932 = auVar980._0_2_;
        sVar958 = auVar980._2_2_;
        bVar3 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[2] - (0xff < sVar958);
        sVar958 = auVar980._4_2_;
        sVar1216 = auVar980._6_2_;
        cVar4 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar980[6] - (0xff < sVar1216);
        uVar901 = CONCAT13(cVar4,CONCAT12((0 < sVar958) * (sVar958 < 0x100) * auVar980[4] -
                                          (0xff < sVar958),
                                          CONCAT11(bVar3,(0 < sVar932) * (sVar932 < 0x100) *
                                                         auVar980[0] - (0xff < sVar932))));
        sVar932 = auVar980._8_2_;
        sVar958 = auVar980._10_2_;
        cVar874 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[10] - (0xff < sVar958);
        uVar902 = CONCAT15(cVar874,CONCAT14((0 < sVar932) * (sVar932 < 0x100) * auVar980[8] -
                                            (0xff < sVar932),uVar901));
        sVar932 = auVar980._12_2_;
        sVar958 = auVar980._14_2_;
        cVar5 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[0xe] - (0xff < sVar958);
        uVar903 = CONCAT17(cVar5,CONCAT16((0 < sVar932) * (sVar932 < 0x100) * auVar980[0xc] -
                                          (0xff < sVar932),uVar902));
        sVar932 = auVar920._0_2_;
        sVar958 = auVar920._2_2_;
        cVar6 = (0 < sVar958) * (sVar958 < 0x100) * auVar920[2] - (0xff < sVar958);
        auVar962._0_10_ =
             CONCAT19(cVar6,CONCAT18((0 < sVar932) * (sVar932 < 0x100) * auVar920[0] -
                                     (0xff < sVar932),uVar903));
        sVar932 = auVar920._4_2_;
        auVar962[10] = (0 < sVar932) * (sVar932 < 0x100) * auVar920[4] - (0xff < sVar932);
        sVar932 = auVar920._6_2_;
        cVar7 = (0 < sVar932) * (sVar932 < 0x100) * auVar920[6] - (0xff < sVar932);
        auVar962[0xb] = cVar7;
        sVar932 = auVar920._8_2_;
        auVar971[0xc] = (0 < sVar932) * (sVar932 < 0x100) * auVar920[8] - (0xff < sVar932);
        auVar971._0_12_ = auVar962;
        sVar932 = auVar920._10_2_;
        cVar8 = (0 < sVar932) * (sVar932 < 0x100) * auVar920[10] - (0xff < sVar932);
        auVar971[0xd] = cVar8;
        sVar932 = auVar920._12_2_;
        auVar980[0xe] = (0 < sVar932) * (sVar932 < 0x100) * auVar920[0xc] - (0xff < sVar932);
        auVar980._0_14_ = auVar971;
        sVar932 = auVar920._14_2_;
        cVar9 = (0 < sVar932) * (sVar932 < 0x100) * auVar920[0xe] - (0xff < sVar932);
        auVar980[0xf] = cVar9;
        auVar920 = *(undefined1 (*) [16])(pcVar1 + 0x10);
        uVar1045 = auVar921._0_2_ >> 8;
        uVar1072 = auVar921._2_2_ >> 8;
        uVar1074 = auVar921._4_2_ >> 8;
        uVar1076 = auVar921._6_2_ >> 8;
        uVar1078 = auVar921._8_2_ >> 8;
        uVar1082 = auVar921._10_2_ >> 8;
        uVar1084 = auVar921._12_2_ >> 8;
        uVar1086 = auVar921._14_2_ >> 8;
        auVar1013 = *(undefined1 (*) [16])(pcVar1 + 0x20) & __LC6;
        uVar1087 = auVar1095._0_2_ >> 8;
        uVar1098 = auVar1095._2_2_ >> 8;
        uVar1100 = auVar1095._4_2_ >> 8;
        uVar1103 = auVar1095._6_2_ >> 8;
        uVar1107 = auVar1095._8_2_ >> 8;
        uVar1111 = auVar1095._10_2_ >> 8;
        uVar1115 = auVar1095._12_2_ >> 8;
        uVar1119 = auVar1095._14_2_ >> 8;
        uVar897 = auVar920._0_2_ >> 8;
        uVar929 = auVar920._2_2_ >> 8;
        uVar930 = auVar920._4_2_ >> 8;
        uVar931 = auVar920._6_2_ >> 8;
        uVar933 = auVar920._8_2_ >> 8;
        uVar935 = auVar920._10_2_ >> 8;
        uVar937 = auVar920._12_2_ >> 8;
        uVar939 = auVar920._14_2_ >> 8;
        bVar10 = (uVar1072 != 0) * (uVar1072 < 0x100) * auVar921[3] - (0xff < uVar1072);
        cVar11 = (uVar1076 != 0) * (uVar1076 < 0x100) * auVar921[7] - (0xff < uVar1076);
        uVar941 = CONCAT13(cVar11,CONCAT12((uVar1074 != 0) * (uVar1074 < 0x100) * auVar921[5] -
                                           (0xff < uVar1074),
                                           CONCAT11(bVar10,(uVar1045 != 0) * (uVar1045 < 0x100) *
                                                           auVar921[1] - (0xff < uVar1045))));
        cVar12 = (uVar1082 != 0) * (uVar1082 < 0x100) * auVar921[0xb] - (0xff < uVar1082);
        uVar942 = CONCAT15(cVar12,CONCAT14((uVar1078 != 0) * (uVar1078 < 0x100) * auVar921[9] -
                                           (0xff < uVar1078),uVar941));
        cVar13 = (uVar1086 != 0) * (uVar1086 < 0x100) * auVar921[0xf] - (0xff < uVar1086);
        uVar944 = CONCAT17(cVar13,CONCAT16((uVar1084 != 0) * (uVar1084 < 0x100) * auVar921[0xd] -
                                           (0xff < uVar1084),uVar942));
        cVar14 = (uVar929 != 0) * (uVar929 < 0x100) * auVar920[3] - (0xff < uVar929);
        auVar1047._0_10_ =
             CONCAT19(cVar14,CONCAT18((uVar897 != 0) * (uVar897 < 0x100) * auVar920[1] -
                                      (0xff < uVar897),uVar944));
        auVar1047[10] = (uVar930 != 0) * (uVar930 < 0x100) * auVar920[5] - (0xff < uVar930);
        cVar15 = (uVar931 != 0) * (uVar931 < 0x100) * auVar920[7] - (0xff < uVar931);
        auVar1047[0xb] = cVar15;
        auVar1055[0xc] = (uVar933 != 0) * (uVar933 < 0x100) * auVar920[9] - (0xff < uVar933);
        auVar1055._0_12_ = auVar1047;
        cVar16 = (uVar935 != 0) * (uVar935 < 0x100) * auVar920[0xb] - (0xff < uVar935);
        auVar1055[0xd] = cVar16;
        auVar1063[0xe] = (uVar937 != 0) * (uVar937 < 0x100) * auVar920[0xd] - (0xff < uVar937);
        auVar1063._0_14_ = auVar1055;
        cVar17 = (uVar939 != 0) * (uVar939 < 0x100) * auVar920[0xf] - (0xff < uVar939);
        auVar1063[0xf] = cVar17;
        auVar921 = *(undefined1 (*) [16])(pcVar1 + 0x30) & __LC6;
        uVar1177 = (ushort)bVar10;
        uVar1188 = (ushort)((uint)uVar941 >> 0x18);
        uVar1191 = (ushort)((uint6)uVar942 >> 0x28);
        uVar1194 = (ushort)((ulong)uVar944 >> 0x38);
        uVar1198 = (ushort)((unkuint10)auVar1047._0_10_ >> 0x48);
        uVar1199 = auVar1047._10_2_ >> 8;
        uVar1202 = auVar1055._12_2_ >> 8;
        uVar1205 = auVar1063._14_2_ >> 8;
        sVar932 = auVar1013._0_2_;
        sVar958 = auVar1013._2_2_;
        bVar18 = (0 < sVar958) * (sVar958 < 0x100) * auVar1013[2] - (0xff < sVar958);
        sVar958 = auVar1013._4_2_;
        sVar1216 = auVar1013._6_2_;
        cVar19 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar1013[6] - (0xff < sVar1216);
        uVar941 = CONCAT13(cVar19,CONCAT12((0 < sVar958) * (sVar958 < 0x100) * auVar1013[4] -
                                           (0xff < sVar958),
                                           CONCAT11(bVar18,(0 < sVar932) * (sVar932 < 0x100) *
                                                           auVar1013[0] - (0xff < sVar932))));
        sVar932 = auVar1013._8_2_;
        sVar958 = auVar1013._10_2_;
        cVar20 = (0 < sVar958) * (sVar958 < 0x100) * auVar1013[10] - (0xff < sVar958);
        uVar942 = CONCAT15(cVar20,CONCAT14((0 < sVar932) * (sVar932 < 0x100) * auVar1013[8] -
                                           (0xff < sVar932),uVar941));
        sVar932 = auVar1013._12_2_;
        sVar958 = auVar1013._14_2_;
        cVar21 = (0 < sVar958) * (sVar958 < 0x100) * auVar1013[0xe] - (0xff < sVar958);
        uVar944 = CONCAT17(cVar21,CONCAT16((0 < sVar932) * (sVar932 < 0x100) * auVar1013[0xc] -
                                           (0xff < sVar932),uVar942));
        sVar932 = auVar921._0_2_;
        sVar958 = auVar921._2_2_;
        cVar22 = (0 < sVar958) * (sVar958 < 0x100) * auVar921[2] - (0xff < sVar958);
        auVar1001._0_10_ =
             CONCAT19(cVar22,CONCAT18((0 < sVar932) * (sVar932 < 0x100) * auVar921[0] -
                                      (0xff < sVar932),uVar944));
        sVar932 = auVar921._4_2_;
        auVar1001[10] = (0 < sVar932) * (sVar932 < 0x100) * auVar921[4] - (0xff < sVar932);
        sVar932 = auVar921._6_2_;
        cVar23 = (0 < sVar932) * (sVar932 < 0x100) * auVar921[6] - (0xff < sVar932);
        auVar1001[0xb] = cVar23;
        sVar932 = auVar921._8_2_;
        auVar1007[0xc] = (0 < sVar932) * (sVar932 < 0x100) * auVar921[8] - (0xff < sVar932);
        auVar1007._0_12_ = auVar1001;
        sVar932 = auVar921._10_2_;
        cVar24 = (0 < sVar932) * (sVar932 < 0x100) * auVar921[10] - (0xff < sVar932);
        auVar1007[0xd] = cVar24;
        sVar932 = auVar921._12_2_;
        auVar920[0xe] = (0 < sVar932) * (sVar932 < 0x100) * auVar921[0xc] - (0xff < sVar932);
        auVar920._0_14_ = auVar1007;
        sVar932 = auVar921._14_2_;
        cVar25 = (0 < sVar932) * (sVar932 < 0x100) * auVar921[0xe] - (0xff < sVar932);
        auVar920[0xf] = cVar25;
        auVar921 = *(undefined1 (*) [16])(pcVar1 + 0x30);
        uVar897 = auVar921._0_2_ >> 8;
        uVar929 = auVar921._2_2_ >> 8;
        uVar930 = auVar921._4_2_ >> 8;
        uVar931 = auVar921._6_2_ >> 8;
        uVar933 = auVar921._8_2_ >> 8;
        uVar935 = auVar921._10_2_ >> 8;
        uVar937 = auVar921._12_2_ >> 8;
        uVar939 = auVar921._14_2_ >> 8;
        uVar1074 = (ushort)bVar18;
        uVar1076 = (ushort)((uint)uVar941 >> 0x18);
        uVar1078 = (ushort)((uint6)uVar942 >> 0x28);
        uVar1082 = (ushort)((ulong)uVar944 >> 0x38);
        uVar1084 = (ushort)((unkuint10)auVar1001._0_10_ >> 0x48);
        uVar1086 = auVar1001._10_2_ >> 8;
        uVar959 = auVar1007._12_2_ >> 8;
        uVar960 = auVar920._14_2_ >> 8;
        bVar26 = (uVar1098 != 0) * (uVar1098 < 0x100) * auVar1095[3] - (0xff < uVar1098);
        cVar27 = (uVar1103 != 0) * (uVar1103 < 0x100) * auVar1095[7] - (0xff < uVar1103);
        uVar941 = CONCAT13(cVar27,CONCAT12((uVar1100 != 0) * (uVar1100 < 0x100) * auVar1095[5] -
                                           (0xff < uVar1100),
                                           CONCAT11(bVar26,(uVar1087 != 0) * (uVar1087 < 0x100) *
                                                           auVar1095[1] - (0xff < uVar1087))));
        cVar28 = (uVar1111 != 0) * (uVar1111 < 0x100) * auVar1095[0xb] - (0xff < uVar1111);
        uVar942 = CONCAT15(cVar28,CONCAT14((uVar1107 != 0) * (uVar1107 < 0x100) * auVar1095[9] -
                                           (0xff < uVar1107),uVar941));
        cVar29 = (uVar1119 != 0) * (uVar1119 < 0x100) * auVar1095[0xf] - (0xff < uVar1119);
        uVar944 = CONCAT17(cVar29,CONCAT16((uVar1115 != 0) * (uVar1115 < 0x100) * auVar1095[0xd] -
                                           (0xff < uVar1115),uVar942));
        cVar30 = (uVar929 != 0) * (uVar929 < 0x100) * auVar921[3] - (0xff < uVar929);
        auVar1089._0_10_ =
             CONCAT19(cVar30,CONCAT18((uVar897 != 0) * (uVar897 < 0x100) * auVar921[1] -
                                      (0xff < uVar897),uVar944));
        auVar1089[10] = (uVar930 != 0) * (uVar930 < 0x100) * auVar921[5] - (0xff < uVar930);
        cVar31 = (uVar931 != 0) * (uVar931 < 0x100) * auVar921[7] - (0xff < uVar931);
        auVar1089[0xb] = cVar31;
        auVar1092[0xc] = (uVar933 != 0) * (uVar933 < 0x100) * auVar921[9] - (0xff < uVar933);
        auVar1092._0_12_ = auVar1089;
        cVar32 = (uVar935 != 0) * (uVar935 < 0x100) * auVar921[0xb] - (0xff < uVar935);
        auVar1092[0xd] = cVar32;
        auVar1095[0xe] = (uVar937 != 0) * (uVar937 < 0x100) * auVar921[0xd] - (0xff < uVar937);
        auVar1095._0_14_ = auVar1092;
        cVar33 = (uVar939 != 0) * (uVar939 < 0x100) * auVar921[0xf] - (0xff < uVar939);
        auVar1095[0xf] = cVar33;
        uVar929 = (ushort)bVar3;
        uVar933 = (ushort)((uint)uVar901 >> 0x18);
        uVar935 = (ushort)((uint6)uVar902 >> 0x28);
        uVar937 = (ushort)((ulong)uVar903 >> 0x38);
        uVar939 = (ushort)((unkuint10)auVar962._0_10_ >> 0x48);
        uVar1045 = auVar962._10_2_ >> 8;
        uVar1072 = auVar971._12_2_ >> 8;
        uVar897 = auVar980._14_2_ >> 8;
        cVar9 = (uVar897 != 0) * (uVar897 < 0x100) * cVar9 - (0xff < uVar897);
        bVar18 = (uVar1074 != 0) * (uVar1074 < 0x100) * bVar18 - (0xff < uVar1074);
        uVar897 = CONCAT11(bVar18,cVar9);
        bVar34 = (uVar1076 != 0) * (uVar1076 < 0x100) * cVar19 - (0xff < uVar1076);
        uVar588 = CONCAT12(bVar34,uVar897);
        bVar35 = (uVar1078 != 0) * (uVar1078 < 0x100) * cVar20 - (0xff < uVar1078);
        uVar1180 = CONCAT13(bVar35,uVar588);
        bVar36 = (uVar1082 != 0) * (uVar1082 < 0x100) * cVar21 - (0xff < uVar1082);
        uVar759 = CONCAT14(bVar36,uVar1180);
        bVar37 = (uVar1084 != 0) * (uVar1084 < 0x100) * cVar22 - (0xff < uVar1084);
        auVar819[5] = bVar37;
        auVar819._0_5_ = uVar759;
        bVar38 = (uVar1086 != 0) * (uVar1086 < 0x100) * cVar23 - (0xff < uVar1086);
        bVar39 = (uVar960 != 0) * (uVar960 < 0x100) * cVar25 - (0xff < uVar960);
        uVar930 = (ushort)bVar26;
        uVar931 = (ushort)((uint)uVar941 >> 0x18);
        uVar1074 = (ushort)((uint6)uVar942 >> 0x28);
        uVar1076 = (ushort)((ulong)uVar944 >> 0x38);
        uVar1078 = (ushort)((unkuint10)auVar1089._0_10_ >> 0x48);
        uVar1082 = auVar1089._10_2_ >> 8;
        uVar1084 = auVar1092._12_2_ >> 8;
        uVar1086 = auVar1095._14_2_ >> 8;
        cVar17 = (uVar1205 != 0) * (uVar1205 < 0x100) * cVar17 - (0xff < uVar1205);
        bVar26 = (uVar930 != 0) * (uVar930 < 0x100) * bVar26 - (0xff < uVar930);
        uVar930 = CONCAT11(bVar26,cVar17);
        bVar40 = (uVar931 != 0) * (uVar931 < 0x100) * cVar27 - (0xff < uVar931);
        uVar589 = CONCAT12(bVar40,uVar930);
        bVar41 = (uVar1074 != 0) * (uVar1074 < 0x100) * cVar28 - (0xff < uVar1074);
        uVar890 = CONCAT13(bVar41,uVar589);
        bVar42 = (uVar1076 != 0) * (uVar1076 < 0x100) * cVar29 - (0xff < uVar1076);
        uVar760 = CONCAT14(bVar42,uVar890);
        bVar43 = (uVar1078 != 0) * (uVar1078 < 0x100) * cVar30 - (0xff < uVar1078);
        auVar820[5] = bVar43;
        auVar820._0_5_ = uVar760;
        bVar44 = (uVar1082 != 0) * (uVar1082 < 0x100) * cVar31 - (0xff < uVar1082);
        bVar45 = (uVar1086 != 0) * (uVar1086 < 0x100) * cVar33 - (0xff < uVar1086);
        uVar931 = (ushort)bVar18;
        uVar891 = CONCAT13(0,CONCAT12(bVar34,uVar931));
        auVar819._6_8_ = 0;
        auVar206[0xe] = cVar9;
        auVar206._0_14_ = auVar819 << 0x38;
        uVar1029 = CONCAT26(auVar206._13_2_,
                            CONCAT15((uVar1072 != 0) * (uVar1072 < 0x100) * cVar8 -
                                     (0xff < uVar1072),uVar759));
        auVar761._4_8_ = 0;
        auVar761._0_4_ = uVar1180;
        auVar262._12_3_ = (int3)((ulong)uVar1029 >> 0x28);
        auVar262._0_12_ = auVar761 << 0x38;
        uVar944 = CONCAT44(auVar262._11_4_,
                           CONCAT13((uVar1045 != 0) * (uVar1045 < 0x100) * cVar7 - (0xff < uVar1045)
                                    ,uVar588));
        auVar347._10_5_ = (int5)((ulong)uVar944 >> 0x18);
        auVar347._0_10_ = (unkuint10)uVar897 << 0x38;
        uVar903 = CONCAT62(auVar347._9_6_,
                           CONCAT11((uVar939 != 0) * (uVar939 < 0x100) * cVar6 - (0xff < uVar939),
                                    cVar9));
        auVar361._7_8_ = 0;
        auVar361._0_7_ = (uint7)((ulong)uVar903 >> 8);
        Var362 = CONCAT81(SUB158(auVar361 << 0x40,7),
                          (uVar937 != 0) * (uVar937 < 0x100) * cVar5 - (0xff < uVar937));
        auVar590._9_6_ = 0;
        auVar590._0_9_ = Var362;
        auVar363._1_10_ = SUB1510(auVar590 << 0x30,5);
        auVar363[0] = (uVar935 != 0) * (uVar935 < 0x100) * cVar874 - (0xff < uVar935);
        auVar591._11_4_ = 0;
        auVar591._0_11_ = auVar363;
        auVar364._1_12_ = SUB1512(auVar591 << 0x20,3);
        auVar364[0] = (uVar933 != 0) * (uVar933 < 0x100) * cVar4 - (0xff < uVar933);
        uVar897 = CONCAT11(0,(uVar929 != 0) * (uVar929 < 0x100) * bVar3 - (0xff < uVar929));
        auVar353._2_13_ = auVar364;
        auVar353._0_2_ = uVar897;
        auVar263[0xc] = bVar36;
        auVar263._0_12_ = ZEXT112(bVar37) << 0x40;
        auVar264._10_3_ = auVar263._10_3_;
        auVar264._0_10_ = (unkuint10)bVar35 << 0x40;
        uVar265 = auVar264._8_5_;
        auVar365._5_8_ = 0;
        auVar365._0_5_ = uVar265;
        auVar283[4] = bVar34;
        auVar283._0_4_ = uVar891;
        auVar283[5] = 0;
        auVar283._6_7_ = SUB137(auVar365 << 0x40,6);
        auVar348._4_9_ = auVar283._4_9_;
        auVar348._0_4_ = uVar891 & 0xffff;
        uVar1074 = (ushort)((ulong)uVar903 >> 8);
        uVar1078 = (ushort)((ulong)uVar944 >> 0x18);
        uVar1086 = (ushort)((ulong)uVar1029 >> 0x28);
        uVar929 = auVar206._13_2_ >> 8;
        sVar958 = (short)Var362;
        auVar98._10_2_ = 0;
        auVar98._0_10_ = auVar353._0_10_;
        auVar98._12_2_ = sVar958;
        sVar1195 = auVar363._0_2_;
        uVar872 = CONCAT42(auVar98._10_4_,sVar1195);
        auVar366._6_8_ = 0;
        auVar366._0_6_ = uVar872;
        sVar1216 = auVar364._0_2_;
        auVar266._4_2_ = sVar1216;
        auVar266._0_4_ = auVar353._0_4_;
        auVar266._6_8_ = SUB148(auVar366 << 0x40,6);
        auVar284._4_10_ = auVar266._4_10_;
        auVar284._0_4_ = auVar353._0_4_ & 0xffff;
        uVar935 = (ushort)bVar38;
        uVar937 = (ushort)(byte)((uVar959 != 0) * (uVar959 < 0x100) * cVar24 - (0xff < uVar959));
        sVar958 = sVar958 * sVar958;
        auVar592._2_2_ = uVar1074 * uVar1074;
        auVar592._0_2_ = sVar958;
        sVar932 = (ushort)bVar36 * (ushort)bVar36;
        uVar933 = (ushort)bVar37 * (ushort)bVar37;
        auVar593._2_2_ = uVar933;
        auVar593._0_2_ = sVar932;
        auVar592._4_8_ = 0;
        auVar99._12_2_ = sVar958;
        auVar99._0_12_ = auVar592 << 0x30;
        uVar210 = (uint6)(CONCAT44(auVar99._10_4_,CONCAT22(sVar1195 * sVar1195,sVar958)) >> 0x10);
        auVar367._6_8_ = 0;
        auVar367._0_6_ = uVar210;
        Var368 = CONCAT82(SUB148(auVar367 << 0x40,6),sVar1216 * sVar1216);
        auVar285._2_2_ = 0;
        auVar285._0_2_ = uVar897 * uVar897;
        auVar285._4_10_ = Var368;
        auVar593._4_8_ = 0;
        auVar100._12_2_ = sVar932;
        auVar100._0_12_ = auVar593 << 0x30;
        uVar211 = (uint6)(CONCAT44(auVar100._10_4_,CONCAT22((ushort)bVar35 * (ushort)bVar35,sVar932)
                                  ) >> 0x10);
        auVar369._6_8_ = 0;
        auVar369._0_6_ = uVar211;
        Var370 = CONCAT82(SUB148(auVar369 << 0x40,6),(ushort)bVar34 * (ushort)bVar34);
        auVar286._2_2_ = 0;
        auVar286._0_2_ = uVar931 * uVar931;
        auVar286._4_10_ = Var370;
        uVar931 = (ushort)bVar26;
        uVar1180 = CONCAT13(0,CONCAT12(bVar40,uVar931));
        auVar820._6_8_ = 0;
        auVar101[0xe] = cVar17;
        auVar101._0_14_ = auVar820 << 0x38;
        uVar1029 = CONCAT26(auVar101._13_2_,
                            CONCAT15((uVar1202 != 0) * (uVar1202 < 0x100) * cVar16 -
                                     (0xff < uVar1202),uVar760));
        auVar762._4_8_ = 0;
        auVar762._0_4_ = uVar890;
        auVar212._12_3_ = (int3)((ulong)uVar1029 >> 0x28);
        auVar212._0_12_ = auVar762 << 0x38;
        uVar944 = CONCAT44(auVar212._11_4_,
                           CONCAT13((uVar1199 != 0) * (uVar1199 < 0x100) * cVar15 -
                                    (0xff < uVar1199),uVar589));
        auVar287._10_5_ = (int5)((ulong)uVar944 >> 0x18);
        auVar287._0_10_ = (unkuint10)uVar930 << 0x38;
        uVar903 = CONCAT62(auVar287._9_6_,
                           CONCAT11((uVar1198 != 0) * (uVar1198 < 0x100) * cVar14 -
                                    (0xff < uVar1198),cVar17));
        auVar371._7_8_ = 0;
        auVar371._0_7_ = (uint7)((ulong)uVar903 >> 8);
        Var362 = CONCAT81(SUB158(auVar371 << 0x40,7),
                          (uVar1194 != 0) * (uVar1194 < 0x100) * cVar13 - (0xff < uVar1194));
        auVar594._9_6_ = 0;
        auVar594._0_9_ = Var362;
        auVar372._1_10_ = SUB1510(auVar594 << 0x30,5);
        auVar372[0] = (uVar1191 != 0) * (uVar1191 < 0x100) * cVar12 - (0xff < uVar1191);
        auVar595._11_4_ = 0;
        auVar595._0_11_ = auVar372;
        auVar373._1_12_ = SUB1512(auVar595 << 0x20,3);
        auVar373[0] = (uVar1188 != 0) * (uVar1188 < 0x100) * cVar11 - (0xff < uVar1188);
        uVar930 = CONCAT11(0,(uVar1177 != 0) * (uVar1177 < 0x100) * bVar10 - (0xff < uVar1177));
        auVar352._2_13_ = auVar373;
        auVar352._0_2_ = uVar930;
        auVar267[0xc] = bVar42;
        auVar267._0_12_ = ZEXT112(bVar43) << 0x40;
        auVar268._10_3_ = auVar267._10_3_;
        auVar268._0_10_ = (unkuint10)bVar41 << 0x40;
        uVar269 = auVar268._8_5_;
        auVar374._5_8_ = 0;
        auVar374._0_5_ = uVar269;
        auVar270[4] = bVar40;
        auVar270._0_4_ = uVar1180;
        auVar270[5] = 0;
        auVar270._6_7_ = SUB137(auVar374 << 0x40,6);
        auVar288._4_9_ = auVar270._4_9_;
        auVar288._0_4_ = uVar1180 & 0xffff;
        uVar1076 = (ushort)((ulong)uVar903 >> 8);
        uVar1082 = (ushort)((ulong)uVar944 >> 0x18);
        uVar959 = (ushort)((ulong)uVar1029 >> 0x28);
        uVar897 = auVar101._13_2_ >> 8;
        sVar932 = (short)Var362;
        auVar102._10_2_ = 0;
        auVar102._0_10_ = auVar352._0_10_;
        auVar102._12_2_ = sVar932;
        sVar1216 = auVar372._0_2_;
        uVar873 = CONCAT42(auVar102._10_4_,sVar1216);
        auVar375._6_8_ = 0;
        auVar375._0_6_ = uVar873;
        sVar958 = auVar373._0_2_;
        auVar271._4_2_ = sVar958;
        auVar271._0_4_ = auVar352._0_4_;
        auVar271._6_8_ = SUB148(auVar375 << 0x40,6);
        auVar289._4_10_ = auVar271._4_10_;
        auVar289._0_4_ = auVar352._0_4_ & 0xffff;
        uVar1045 = (ushort)bVar44;
        uVar1072 = (ushort)(byte)((uVar1084 != 0) * (uVar1084 < 0x100) * cVar32 - (0xff < uVar1084))
        ;
        sVar932 = sVar932 * sVar932;
        auVar596._2_2_ = uVar1076 * uVar1076;
        auVar596._0_2_ = sVar932;
        sVar1195 = (ushort)bVar42 * (ushort)bVar42;
        uVar939 = (ushort)bVar43 * (ushort)bVar43;
        auVar597._2_2_ = uVar939;
        auVar597._0_2_ = sVar1195;
        auVar596._4_8_ = 0;
        auVar103._12_2_ = sVar932;
        auVar103._0_12_ = auVar596 << 0x30;
        uVar213 = (uint6)(CONCAT44(auVar103._10_4_,CONCAT22(sVar1216 * sVar1216,sVar932)) >> 0x10);
        auVar376._6_8_ = 0;
        auVar376._0_6_ = uVar213;
        Var377 = CONCAT82(SUB148(auVar376 << 0x40,6),sVar958 * sVar958);
        auVar290._2_2_ = 0;
        auVar290._0_2_ = uVar930 * uVar930;
        auVar290._4_10_ = Var377;
        auVar597._4_8_ = 0;
        auVar104._12_2_ = sVar1195;
        auVar104._0_12_ = auVar597 << 0x30;
        uVar214 = (uint6)(CONCAT44(auVar104._10_4_,
                                   CONCAT22((ushort)bVar41 * (ushort)bVar41,sVar1195)) >> 0x10);
        auVar378._6_8_ = 0;
        auVar378._0_6_ = uVar214;
        Var379 = CONCAT82(SUB148(auVar378 << 0x40,6),(ushort)bVar40 * (ushort)bVar40);
        auVar291._2_2_ = 0;
        auVar291._0_2_ = uVar931 * uVar931;
        auVar291._4_10_ = Var379;
        lVar943 = ((ulong)uVar873 & 0xffffffff) + (auVar289._0_8_ & 0xffffffff) +
                  (ulong)uVar959 + ((ulong)CONCAT24(uVar1082,(uint)uVar1076) & 0xffffffff) +
                  ((ulong)uVar269 & 0xffffffff) + (auVar288._0_8_ & 0xffffffff) +
                  (ulong)uVar1072 + ((ulong)CONCAT14(bVar44,(uint)bVar43) & 0xffffffff) +
                  (ulong)(auVar102._10_4_ >> 0x10) + (ulong)auVar271._4_4_ +
                  (ulong)uVar897 + (ulong)uVar1082 +
                  (ulong)(uVar269 >> 0x20) + (ulong)auVar270._4_4_ + (ulong)bVar45 + (ulong)uVar1045
        ;
        lVar1125 = ((ulong)uVar872 & 0xffffffff) + (auVar284._0_8_ & 0xffffffff) +
                   (ulong)uVar1086 + ((ulong)CONCAT24(uVar1078,(uint)uVar1074) & 0xffffffff) +
                   ((ulong)uVar265 & 0xffffffff) + (auVar348._0_8_ & 0xffffffff) +
                   (ulong)uVar937 + ((ulong)CONCAT14(bVar38,(uint)bVar37) & 0xffffffff) +
                   (ulong)(auVar98._10_4_ >> 0x10) + (ulong)auVar266._4_4_ +
                   (ulong)uVar929 + (ulong)uVar1078 +
                   (ulong)(uVar265 >> 0x20) + (ulong)auVar283._4_4_ + (ulong)bVar39 + (ulong)uVar935
        ;
        fVar1025 = (float)(((ulong)(ushort)(uVar959 * uVar959) +
                            ((ulong)CONCAT24(uVar1082 * uVar1082,(uint)(ushort)(uVar1076 * uVar1076)
                                            ) & 0xffffffff) +
                            ((ulong)uVar213 & 0xffffffff) + (auVar290._0_8_ & 0xffffffff) +
                            ((ulong)uVar214 & 0xffffffff) + (auVar291._0_8_ & 0xffffffff) +
                            (ulong)(ushort)(uVar1072 * uVar1072) +
                            ((ulong)CONCAT24(uVar1045 * uVar1045,(uint)uVar939) & 0xffffffff) +
                           (ulong)(ushort)(uVar897 * uVar897) + (ulong)(ushort)(uVar1082 * uVar1082)
                           + (ulong)(uVar213 >> 0x20) + (ulong)(uint)Var377 +
                           (ulong)(uVar214 >> 0x20) + (ulong)(uint)Var379 +
                           (ulong)(ushort)((ushort)bVar45 * (ushort)bVar45) +
                           (ulong)(ushort)(uVar1045 * uVar1045)) * 0x10 - lVar943 * lVar943);
        if (fVar1025 < 0.0) {
          fVar1025 = sqrtf(fVar1025);
        }
        else {
          fVar1025 = SQRT(fVar1025);
        }
        fVar1025 = fVar1025 * _LC46;
        fVar898 = (float)((((ulong)uVar210 & 0xffffffff) + (auVar285._0_8_ & 0xffffffff) +
                           (ulong)(ushort)(uVar1086 * uVar1086) +
                           ((ulong)CONCAT24(uVar1078 * uVar1078,(uint)(ushort)(uVar1074 * uVar1074))
                           & 0xffffffff) +
                           ((ulong)uVar211 & 0xffffffff) + (auVar286._0_8_ & 0xffffffff) +
                           (ulong)(ushort)(uVar937 * uVar937) +
                           ((ulong)CONCAT24(uVar935 * uVar935,(uint)uVar933) & 0xffffffff) +
                          (ulong)(uVar210 >> 0x20) + (ulong)(uint)Var368 +
                          (ulong)(ushort)(uVar929 * uVar929) + (ulong)(ushort)(uVar1078 * uVar1078)
                          + (ulong)(uVar211 >> 0x20) + (ulong)(uint)Var370 +
                          (ulong)(ushort)((ushort)bVar39 * (ushort)bVar39) +
                          (ulong)(ushort)(uVar935 * uVar935)) * 0x10 - lVar1125 * lVar1125);
        if (fVar898 < 0.0) {
          fVar898 = sqrtf(fVar898);
        }
        else {
          fVar898 = SQRT(fVar898);
        }
        auVar1095 = auVar1095 & __LC6;
        auVar1063 = auVar1063 & __LC6;
        sVar932 = auVar1063._0_2_;
        sVar958 = auVar1063._2_2_;
        sVar1216 = auVar1063._4_2_;
        sVar1195 = auVar1063._6_2_;
        sVar934 = auVar1063._8_2_;
        sVar936 = auVar1063._10_2_;
        sVar938 = auVar1063._12_2_;
        sVar940 = auVar1063._14_2_;
        cVar874 = (0 < sVar940) * (sVar940 < 0x100) * auVar1063[0xe] - (0xff < sVar940);
        sVar940 = auVar1095._0_2_;
        bVar37 = (0 < sVar940) * (sVar940 < 0x100) * auVar1095[0] - (0xff < sVar940);
        uVar897 = CONCAT11(bVar37,cVar874);
        sVar940 = auVar1095._2_2_;
        bVar38 = (0 < sVar940) * (sVar940 < 0x100) * auVar1095[2] - (0xff < sVar940);
        uVar588 = CONCAT12(bVar38,uVar897);
        sVar940 = auVar1095._4_2_;
        bVar39 = (0 < sVar940) * (sVar940 < 0x100) * auVar1095[4] - (0xff < sVar940);
        uVar1180 = CONCAT13(bVar39,uVar588);
        sVar940 = auVar1095._6_2_;
        bVar26 = (0 < sVar940) * (sVar940 < 0x100) * auVar1095[6] - (0xff < sVar940);
        uVar759 = CONCAT14(bVar26,uVar1180);
        sVar940 = auVar1095._8_2_;
        bVar3 = (0 < sVar940) * (sVar940 < 0x100) * auVar1095[8] - (0xff < sVar940);
        auVar821[5] = bVar3;
        auVar821._0_5_ = uVar759;
        sVar940 = auVar1095._10_2_;
        bVar18 = (0 < sVar940) * (sVar940 < 0x100) * auVar1095[10] - (0xff < sVar940);
        sVar940 = auVar1095._12_2_;
        sVar961 = auVar1095._14_2_;
        bVar10 = (0 < sVar961) * (sVar961 < 0x100) * auVar1095[0xe] - (0xff < sVar961);
        uVar930 = (ushort)bVar37;
        uVar890 = CONCAT13(0,CONCAT12(bVar38,uVar930));
        auVar821._6_8_ = 0;
        auVar207[0xe] = cVar874;
        auVar207._0_14_ = auVar821 << 0x38;
        uVar1029 = CONCAT26(auVar207._13_2_,
                            CONCAT15((0 < sVar938) * (sVar938 < 0x100) * auVar1063[0xc] -
                                     (0xff < sVar938),uVar759));
        auVar763._4_8_ = 0;
        auVar763._0_4_ = uVar1180;
        auVar272._12_3_ = (int3)((ulong)uVar1029 >> 0x28);
        auVar272._0_12_ = auVar763 << 0x38;
        uVar944 = CONCAT44(auVar272._11_4_,
                           CONCAT13((0 < sVar936) * (sVar936 < 0x100) * auVar1063[10] -
                                    (0xff < sVar936),uVar588));
        auVar349._10_5_ = (int5)((ulong)uVar944 >> 0x18);
        auVar349._0_10_ = (unkuint10)uVar897 << 0x38;
        uVar903 = CONCAT62(auVar349._9_6_,
                           CONCAT11((0 < sVar934) * (sVar934 < 0x100) * auVar1063[8] -
                                    (0xff < sVar934),cVar874));
        auVar380._7_8_ = 0;
        auVar380._0_7_ = (uint7)((ulong)uVar903 >> 8);
        Var362 = CONCAT81(SUB158(auVar380 << 0x40,7),
                          (0 < sVar1195) * (sVar1195 < 0x100) * auVar1063[6] - (0xff < sVar1195));
        auVar598._9_6_ = 0;
        auVar598._0_9_ = Var362;
        auVar381._1_10_ = SUB1510(auVar598 << 0x30,5);
        auVar381[0] = (0 < sVar1216) * (sVar1216 < 0x100) * auVar1063[4] - (0xff < sVar1216);
        auVar599._11_4_ = 0;
        auVar599._0_11_ = auVar381;
        auVar382._1_12_ = SUB1512(auVar599 << 0x20,3);
        auVar382[0] = (0 < sVar958) * (sVar958 < 0x100) * auVar1063[2] - (0xff < sVar958);
        uVar897 = CONCAT11(0,(0 < sVar932) * (sVar932 < 0x100) * auVar1063[0] - (0xff < sVar932));
        auVar354._2_13_ = auVar382;
        auVar354._0_2_ = uVar897;
        auVar273[0xc] = bVar26;
        auVar273._0_12_ = ZEXT112(bVar3) << 0x40;
        auVar274._10_3_ = auVar273._10_3_;
        auVar274._0_10_ = (unkuint10)bVar39 << 0x40;
        uVar265 = auVar274._8_5_;
        auVar383._5_8_ = 0;
        auVar383._0_5_ = uVar265;
        auVar275[4] = bVar38;
        auVar275._0_4_ = uVar890;
        auVar275[5] = 0;
        auVar275._6_7_ = SUB137(auVar383 << 0x40,6);
        auVar292._4_9_ = auVar275._4_9_;
        auVar292._0_4_ = uVar890 & 0xffff;
        uVar933 = (ushort)((ulong)uVar903 >> 8);
        uVar935 = (ushort)((ulong)uVar944 >> 0x18);
        uVar937 = (ushort)((ulong)uVar1029 >> 0x28);
        uVar929 = auVar207._13_2_ >> 8;
        sVar932 = (short)Var362;
        auVar105._10_2_ = 0;
        auVar105._0_10_ = auVar354._0_10_;
        auVar105._12_2_ = sVar932;
        sVar1195 = auVar381._0_2_;
        uVar213 = CONCAT42(auVar105._10_4_,sVar1195);
        auVar384._6_8_ = 0;
        auVar384._0_6_ = uVar213;
        sVar1216 = auVar382._0_2_;
        auVar276._4_2_ = sVar1216;
        auVar276._0_4_ = auVar354._0_4_;
        auVar276._6_8_ = SUB148(auVar384 << 0x40,6);
        auVar293._4_10_ = auVar276._4_10_;
        auVar293._0_4_ = auVar354._0_4_ & 0xffff;
        uVar939 = (ushort)bVar18;
        uVar1045 = (ushort)(byte)((0 < sVar940) * (sVar940 < 0x100) * auVar1095[0xc] -
                                 (0xff < sVar940));
        sVar932 = sVar932 * sVar932;
        auVar600._2_2_ = uVar933 * uVar933;
        auVar600._0_2_ = sVar932;
        sVar958 = (ushort)bVar26 * (ushort)bVar26;
        uVar931 = (ushort)bVar3 * (ushort)bVar3;
        auVar601._2_2_ = uVar931;
        auVar601._0_2_ = sVar958;
        auVar600._4_8_ = 0;
        auVar106._12_2_ = sVar932;
        auVar106._0_12_ = auVar600 << 0x30;
        uVar210 = (uint6)(CONCAT44(auVar106._10_4_,CONCAT22(sVar1195 * sVar1195,sVar932)) >> 0x10);
        auVar385._6_8_ = 0;
        auVar385._0_6_ = uVar210;
        Var368 = CONCAT82(SUB148(auVar385 << 0x40,6),sVar1216 * sVar1216);
        auVar294._2_2_ = 0;
        auVar294._0_2_ = uVar897 * uVar897;
        auVar294._4_10_ = Var368;
        auVar601._4_8_ = 0;
        auVar107._12_2_ = sVar958;
        auVar107._0_12_ = auVar601 << 0x30;
        uVar211 = (uint6)(CONCAT44(auVar107._10_4_,CONCAT22((ushort)bVar39 * (ushort)bVar39,sVar958)
                                  ) >> 0x10);
        auVar386._6_8_ = 0;
        auVar386._0_6_ = uVar211;
        Var370 = CONCAT82(SUB148(auVar386 << 0x40,6),(ushort)bVar38 * (ushort)bVar38);
        auVar295._2_2_ = 0;
        auVar295._0_2_ = uVar930 * uVar930;
        auVar295._4_10_ = Var370;
        fVar898 = _LC46 * fVar898;
        lVar943 = (ulong)uVar929 + (ulong)uVar935 +
                  (ulong)(auVar105._10_4_ >> 0x10) + (ulong)auVar276._4_4_ +
                  (ulong)(uVar265 >> 0x20) + (ulong)auVar275._4_4_ + (ulong)bVar10 + (ulong)uVar939
                  + (ulong)uVar937 + ((ulong)CONCAT24(uVar935,(uint)uVar933) & 0xffffffff) +
                    ((ulong)uVar213 & 0xffffffff) + (auVar293._0_8_ & 0xffffffff) +
                    ((ulong)uVar265 & 0xffffffff) + (auVar292._0_8_ & 0xffffffff) +
                    (ulong)uVar1045 + ((ulong)CONCAT14(bVar18,(uint)bVar3) & 0xffffffff);
        fVar899 = (float)(((ulong)(ushort)(uVar937 * uVar937) +
                           ((ulong)CONCAT24(uVar935 * uVar935,(uint)(ushort)(uVar933 * uVar933)) &
                           0xffffffff) +
                           ((ulong)uVar210 & 0xffffffff) + (auVar294._0_8_ & 0xffffffff) +
                           ((ulong)uVar211 & 0xffffffff) + (auVar295._0_8_ & 0xffffffff) +
                           (ulong)(ushort)(uVar1045 * uVar1045) +
                           ((ulong)CONCAT24(uVar939 * uVar939,(uint)uVar931) & 0xffffffff) +
                          (ulong)(ushort)(uVar929 * uVar929) + (ulong)(ushort)(uVar935 * uVar935) +
                          (ulong)(uVar210 >> 0x20) + (ulong)(uint)Var368 +
                          (ulong)(uVar211 >> 0x20) + (ulong)(uint)Var370 +
                          (ulong)(ushort)((ushort)bVar10 * (ushort)bVar10) +
                          (ulong)(ushort)(uVar939 * uVar939)) * 0x10 - lVar943 * lVar943);
        if (fVar899 < 0.0) {
          fVar899 = sqrtf(fVar899);
        }
        else {
          fVar899 = SQRT(fVar899);
        }
        auVar920 = auVar920 & __LC6;
        auVar980 = auVar980 & __LC6;
        sVar932 = auVar980._0_2_;
        sVar958 = auVar980._2_2_;
        sVar1216 = auVar980._4_2_;
        sVar1195 = auVar980._6_2_;
        sVar934 = auVar980._8_2_;
        sVar936 = auVar980._10_2_;
        sVar938 = auVar980._12_2_;
        sVar940 = auVar980._14_2_;
        cVar874 = (0 < sVar940) * (sVar940 < 0x100) * auVar980[0xe] - (0xff < sVar940);
        sVar940 = auVar920._0_2_;
        bVar3 = (0 < sVar940) * (sVar940 < 0x100) * auVar920[0] - (0xff < sVar940);
        uVar897 = CONCAT11(bVar3,cVar874);
        sVar940 = auVar920._2_2_;
        bVar10 = (0 < sVar940) * (sVar940 < 0x100) * auVar920[2] - (0xff < sVar940);
        uVar588 = CONCAT12(bVar10,uVar897);
        sVar940 = auVar920._4_2_;
        bVar18 = (0 < sVar940) * (sVar940 < 0x100) * auVar920[4] - (0xff < sVar940);
        uVar1180 = CONCAT13(bVar18,uVar588);
        sVar940 = auVar920._6_2_;
        bVar26 = (0 < sVar940) * (sVar940 < 0x100) * auVar920[6] - (0xff < sVar940);
        uVar759 = CONCAT14(bVar26,uVar1180);
        sVar940 = auVar920._8_2_;
        bVar39 = (0 < sVar940) * (sVar940 < 0x100) * auVar920[8] - (0xff < sVar940);
        auVar822[5] = bVar39;
        auVar822._0_5_ = uVar759;
        sVar940 = auVar920._10_2_;
        bVar38 = (0 < sVar940) * (sVar940 < 0x100) * auVar920[10] - (0xff < sVar940);
        sVar940 = auVar920._12_2_;
        sVar961 = auVar920._14_2_;
        bVar37 = (0 < sVar961) * (sVar961 < 0x100) * auVar920[0xe] - (0xff < sVar961);
        uVar930 = (ushort)bVar3;
        uVar890 = CONCAT13(0,CONCAT12(bVar10,uVar930));
        auVar822._6_8_ = 0;
        auVar208[0xe] = cVar874;
        auVar208._0_14_ = auVar822 << 0x38;
        uVar1029 = CONCAT26(auVar208._13_2_,
                            CONCAT15((0 < sVar938) * (sVar938 < 0x100) * auVar980[0xc] -
                                     (0xff < sVar938),uVar759));
        auVar764._4_8_ = 0;
        auVar764._0_4_ = uVar1180;
        auVar277._12_3_ = (int3)((ulong)uVar1029 >> 0x28);
        auVar277._0_12_ = auVar764 << 0x38;
        uVar944 = CONCAT44(auVar277._11_4_,
                           CONCAT13((0 < sVar936) * (sVar936 < 0x100) * auVar980[10] -
                                    (0xff < sVar936),uVar588));
        auVar350._10_5_ = (int5)((ulong)uVar944 >> 0x18);
        auVar350._0_10_ = (unkuint10)uVar897 << 0x38;
        uVar903 = CONCAT62(auVar350._9_6_,
                           CONCAT11((0 < sVar934) * (sVar934 < 0x100) * auVar980[8] -
                                    (0xff < sVar934),cVar874));
        auVar387._7_8_ = 0;
        auVar387._0_7_ = (uint7)((ulong)uVar903 >> 8);
        Var362 = CONCAT81(SUB158(auVar387 << 0x40,7),
                          (0 < sVar1195) * (sVar1195 < 0x100) * auVar980[6] - (0xff < sVar1195));
        auVar602._9_6_ = 0;
        auVar602._0_9_ = Var362;
        auVar388._1_10_ = SUB1510(auVar602 << 0x30,5);
        auVar388[0] = (0 < sVar1216) * (sVar1216 < 0x100) * auVar980[4] - (0xff < sVar1216);
        auVar603._11_4_ = 0;
        auVar603._0_11_ = auVar388;
        auVar389._1_12_ = SUB1512(auVar603 << 0x20,3);
        auVar389[0] = (0 < sVar958) * (sVar958 < 0x100) * auVar980[2] - (0xff < sVar958);
        uVar897 = CONCAT11(0,(0 < sVar932) * (sVar932 < 0x100) * auVar980[0] - (0xff < sVar932));
        auVar355._2_13_ = auVar389;
        auVar355._0_2_ = uVar897;
        auVar278[0xc] = bVar26;
        auVar278._0_12_ = ZEXT112(bVar39) << 0x40;
        auVar279._10_3_ = auVar278._10_3_;
        auVar279._0_10_ = (unkuint10)bVar18 << 0x40;
        uVar265 = auVar279._8_5_;
        auVar390._5_8_ = 0;
        auVar390._0_5_ = uVar265;
        auVar280[4] = bVar10;
        auVar280._0_4_ = uVar890;
        auVar280[5] = 0;
        auVar280._6_7_ = SUB137(auVar390 << 0x40,6);
        auVar296._4_9_ = auVar280._4_9_;
        auVar296._0_4_ = uVar890 & 0xffff;
        uVar935 = (ushort)Var362;
        auVar108._10_2_ = 0;
        auVar108._0_10_ = auVar355._0_10_;
        auVar108._12_2_ = uVar935;
        sVar1216 = auVar388._0_2_;
        uVar213 = CONCAT42(auVar108._10_4_,sVar1216);
        auVar391._6_8_ = 0;
        auVar391._0_6_ = uVar213;
        sVar958 = auVar389._0_2_;
        auVar281._4_2_ = sVar958;
        auVar281._0_4_ = auVar355._0_4_;
        auVar281._6_8_ = SUB148(auVar391 << 0x40,6);
        auVar297._4_10_ = auVar281._4_10_;
        auVar297._0_4_ = auVar355._0_4_ & 0xffff;
        uVar939 = (ushort)((ulong)uVar903 >> 8);
        uVar1045 = (ushort)((ulong)uVar944 >> 0x18);
        uVar1072 = (ushort)((ulong)uVar1029 >> 0x28);
        uVar929 = auVar208._13_2_ >> 8;
        uVar931 = (ushort)bVar38;
        uVar933 = (ushort)(byte)((0 < sVar940) * (sVar940 < 0x100) * auVar920[0xc] -
                                (0xff < sVar940));
        sVar932 = uVar935 * uVar935;
        auVar604._2_2_ = uVar939 * uVar939;
        auVar604._0_2_ = sVar932;
        sVar1195 = (ushort)bVar26 * (ushort)bVar26;
        uVar937 = (ushort)bVar39 * (ushort)bVar39;
        auVar605._2_2_ = uVar937;
        auVar605._0_2_ = sVar1195;
        auVar604._4_8_ = 0;
        auVar109._12_2_ = sVar932;
        auVar109._0_12_ = auVar604 << 0x30;
        uVar210 = (uint6)(CONCAT44(auVar109._10_4_,CONCAT22(sVar1216 * sVar1216,sVar932)) >> 0x10);
        auVar392._6_8_ = 0;
        auVar392._0_6_ = uVar210;
        Var368 = CONCAT82(SUB148(auVar392 << 0x40,6),sVar958 * sVar958);
        auVar298._2_2_ = 0;
        auVar298._0_2_ = uVar897 * uVar897;
        auVar298._4_10_ = Var368;
        auVar605._4_8_ = 0;
        auVar110._12_2_ = sVar1195;
        auVar110._0_12_ = auVar605 << 0x30;
        uVar211 = (uint6)(CONCAT44(auVar110._10_4_,
                                   CONCAT22((ushort)bVar18 * (ushort)bVar18,sVar1195)) >> 0x10);
        auVar393._6_8_ = 0;
        auVar393._0_6_ = uVar211;
        Var370 = CONCAT82(SUB148(auVar393 << 0x40,6),(ushort)bVar10 * (ushort)bVar10);
        auVar299._2_2_ = 0;
        auVar299._0_2_ = uVar930 * uVar930;
        auVar299._4_10_ = Var370;
        fVar899 = _LC46 * fVar899;
        lVar943 = (ulong)uVar933 + ((ulong)CONCAT14(bVar38,(uint)bVar39) & 0xffffffff) +
                  ((ulong)uVar213 & 0xffffffff) + (auVar297._0_8_ & 0xffffffff) +
                  (ulong)uVar1072 + ((ulong)CONCAT24(uVar1045,(uint)uVar939) & 0xffffffff) +
                  ((ulong)uVar265 & 0xffffffff) + (auVar296._0_8_ & 0xffffffff) +
                  (ulong)bVar37 + (ulong)uVar931 +
                  (ulong)uVar935 + (ulong)auVar281._4_4_ + (ulong)uVar929 + (ulong)uVar1045 +
                  (ulong)(uVar265 >> 0x20) + (ulong)auVar280._4_4_;
        fVar900 = (float)(((ulong)(ushort)(uVar1072 * uVar1072) +
                           ((ulong)CONCAT24(uVar1045 * uVar1045,(uint)(ushort)(uVar939 * uVar939)) &
                           0xffffffff) +
                           ((ulong)uVar210 & 0xffffffff) + (auVar298._0_8_ & 0xffffffff) +
                           ((ulong)uVar211 & 0xffffffff) + (auVar299._0_8_ & 0xffffffff) +
                           (ulong)(ushort)(uVar933 * uVar933) +
                           ((ulong)CONCAT24(uVar931 * uVar931,(uint)uVar937) & 0xffffffff) +
                          (ulong)(ushort)(uVar929 * uVar929) + (ulong)(ushort)(uVar1045 * uVar1045)
                          + (ulong)(uVar210 >> 0x20) + (ulong)(uint)Var368 +
                          (ulong)(uVar211 >> 0x20) + (ulong)(uint)Var370 +
                          (ulong)(ushort)((ushort)bVar37 * (ushort)bVar37) +
                          (ulong)(ushort)(uVar931 * uVar931)) * 0x10 - lVar943 * lVar943);
        if (fVar900 < 0.0) {
          fVar900 = sqrtf(fVar900);
        }
        else {
          fVar900 = SQRT(fVar900);
        }
        fVar1026 = fVar900 * _LC46;
        if (fVar900 * _LC46 <= fVar899) {
          fVar1026 = fVar899;
        }
        if (fVar1026 <= fVar898) {
          fVar1026 = fVar898;
        }
        if (fVar1026 <= fVar1025) {
          fVar1026 = fVar1025;
        }
        fVar1026 = fVar1026 / *(float *)(param_5 + 0x14);
        fVar1025 = 0.0;
        if ((0.0 <= fVar1026) && (fVar1025 = _LC18, fVar1026 <= _LC18)) {
          fVar1025 = fVar1026 * fVar1026;
        }
        fVar1025 = (_LC18 - *(float *)(param_5 + 0x18)) * fVar1025 + *(float *)(param_5 + 0x18);
        if (_LC18 < fVar1025) {
          *param_10 = *param_10 + 1;
        }
        cVar874 = basist::unpack_uastc(local_238,local_418,false);
        if (cVar874 != '\0') {
          auVar921 = *(undefined1 (*) [16])pcVar1;
          auVar980 = *(undefined1 (*) [16])pcVar1 & __LC6;
          auVar1095 = *(undefined1 (*) [16])(pcVar1 + 0x30);
          auVar920 = *(undefined1 (*) [16])(pcVar1 + 0x10) & __LC6;
          uVar1045 = auVar921._0_2_ >> 8;
          uVar1072 = auVar921._2_2_ >> 8;
          uVar1074 = auVar921._4_2_ >> 8;
          uVar1076 = auVar921._6_2_ >> 8;
          uVar1078 = auVar921._8_2_ >> 8;
          uVar1100 = auVar921._10_2_ >> 8;
          uVar1107 = auVar921._12_2_ >> 8;
          uVar1111 = auVar921._14_2_ >> 8;
          sVar932 = auVar980._0_2_;
          sVar958 = auVar980._2_2_;
          bVar3 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[2] - (0xff < sVar958);
          sVar958 = auVar980._4_2_;
          sVar1216 = auVar980._6_2_;
          cVar9 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar980[6] - (0xff < sVar1216);
          uVar941 = CONCAT13(cVar9,CONCAT12((0 < sVar958) * (sVar958 < 0x100) * auVar980[4] -
                                            (0xff < sVar958),
                                            CONCAT11(bVar3,(0 < sVar932) * (sVar932 < 0x100) *
                                                           auVar980[0] - (0xff < sVar932))));
          sVar932 = auVar980._8_2_;
          sVar958 = auVar980._10_2_;
          cVar4 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[10] - (0xff < sVar958);
          uVar942 = CONCAT15(cVar4,CONCAT14((0 < sVar932) * (sVar932 < 0x100) * auVar980[8] -
                                            (0xff < sVar932),uVar941));
          sVar932 = auVar980._12_2_;
          sVar958 = auVar980._14_2_;
          cVar874 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[0xe] - (0xff < sVar958);
          uVar944 = CONCAT17(cVar874,CONCAT16((0 < sVar932) * (sVar932 < 0x100) * auVar980[0xc] -
                                              (0xff < sVar932),uVar942));
          sVar932 = auVar920._0_2_;
          sVar958 = auVar920._2_2_;
          cVar5 = (0 < sVar958) * (sVar958 < 0x100) * auVar920[2] - (0xff < sVar958);
          auVar963._0_10_ =
               CONCAT19(cVar5,CONCAT18((0 < sVar932) * (sVar932 < 0x100) * auVar920[0] -
                                       (0xff < sVar932),uVar944));
          sVar932 = auVar920._4_2_;
          auVar963[10] = (0 < sVar932) * (sVar932 < 0x100) * auVar920[4] - (0xff < sVar932);
          sVar932 = auVar920._6_2_;
          cVar7 = (0 < sVar932) * (sVar932 < 0x100) * auVar920[6] - (0xff < sVar932);
          auVar963[0xb] = cVar7;
          sVar932 = auVar920._8_2_;
          auVar972[0xc] = (0 < sVar932) * (sVar932 < 0x100) * auVar920[8] - (0xff < sVar932);
          auVar972._0_12_ = auVar963;
          sVar932 = auVar920._10_2_;
          cVar6 = (0 < sVar932) * (sVar932 < 0x100) * auVar920[10] - (0xff < sVar932);
          auVar972[0xd] = cVar6;
          sVar932 = auVar920._12_2_;
          auVar981[0xe] = (0 < sVar932) * (sVar932 < 0x100) * auVar920[0xc] - (0xff < sVar932);
          auVar981._0_14_ = auVar972;
          sVar932 = auVar920._14_2_;
          cVar8 = (0 < sVar932) * (sVar932 < 0x100) * auVar920[0xe] - (0xff < sVar932);
          auVar981[0xf] = cVar8;
          auVar920 = *(undefined1 (*) [16])(pcVar1 + 0x10);
          auVar980 = *(undefined1 (*) [16])(pcVar1 + 0x20) & __LC6;
          uVar1082 = auVar1095._0_2_ >> 8;
          uVar1084 = auVar1095._2_2_ >> 8;
          uVar1086 = auVar1095._4_2_ >> 8;
          uVar959 = auVar1095._6_2_ >> 8;
          uVar960 = auVar1095._8_2_ >> 8;
          uVar1087 = auVar1095._10_2_ >> 8;
          uVar1098 = auVar1095._12_2_ >> 8;
          uVar1103 = auVar1095._14_2_ >> 8;
          uVar1122 = local_3e8._0_2_ >> 8;
          uVar1136 = local_3e8._2_2_ >> 8;
          uVar1139 = local_3e8._4_2_ >> 8;
          uVar1142 = local_3e8._6_2_ >> 8;
          uVar1145 = local_3e8._8_2_ >> 8;
          uVar1149 = local_3e8._10_2_ >> 8;
          uVar1152 = local_3e8._12_2_ >> 8;
          uVar1155 = local_3e8._14_2_ >> 8;
          uVar897 = auVar920._0_2_ >> 8;
          uVar929 = auVar920._2_2_ >> 8;
          uVar930 = auVar920._4_2_ >> 8;
          uVar931 = auVar920._6_2_ >> 8;
          uVar933 = auVar920._8_2_ >> 8;
          uVar935 = auVar920._10_2_ >> 8;
          uVar937 = auVar920._12_2_ >> 8;
          uVar939 = auVar920._14_2_ >> 8;
          bVar10 = (uVar1072 != 0) * (uVar1072 < 0x100) * auVar921[3] - (0xff < uVar1072);
          cVar13 = (uVar1076 != 0) * (uVar1076 < 0x100) * auVar921[7] - (0xff < uVar1076);
          uVar901 = CONCAT13(cVar13,CONCAT12((uVar1074 != 0) * (uVar1074 < 0x100) * auVar921[5] -
                                             (0xff < uVar1074),
                                             CONCAT11(bVar10,(uVar1045 != 0) * (uVar1045 < 0x100) *
                                                             auVar921[1] - (0xff < uVar1045))));
          cVar15 = (uVar1100 != 0) * (uVar1100 < 0x100) * auVar921[0xb] - (0xff < uVar1100);
          uVar902 = CONCAT15(cVar15,CONCAT14((uVar1078 != 0) * (uVar1078 < 0x100) * auVar921[9] -
                                             (0xff < uVar1078),uVar901));
          cVar12 = (uVar1111 != 0) * (uVar1111 < 0x100) * auVar921[0xf] - (0xff < uVar1111);
          uVar903 = CONCAT17(cVar12,CONCAT16((uVar1107 != 0) * (uVar1107 < 0x100) * auVar921[0xd] -
                                             (0xff < uVar1107),uVar902));
          cVar14 = (uVar929 != 0) * (uVar929 < 0x100) * auVar920[3] - (0xff < uVar929);
          auVar1030._0_10_ =
               CONCAT19(cVar14,CONCAT18((uVar897 != 0) * (uVar897 < 0x100) * auVar920[1] -
                                        (0xff < uVar897),uVar903));
          auVar1030[10] = (uVar930 != 0) * (uVar930 < 0x100) * auVar920[5] - (0xff < uVar930);
          cVar17 = (uVar931 != 0) * (uVar931 < 0x100) * auVar920[7] - (0xff < uVar931);
          auVar1030[0xb] = cVar17;
          auVar1035[0xc] = (uVar933 != 0) * (uVar933 < 0x100) * auVar920[9] - (0xff < uVar933);
          auVar1035._0_12_ = auVar1030;
          cVar16 = (uVar935 != 0) * (uVar935 < 0x100) * auVar920[0xb] - (0xff < uVar935);
          auVar1035[0xd] = cVar16;
          auVar982[0xe] = (uVar937 != 0) * (uVar937 < 0x100) * auVar920[0xd] - (0xff < uVar937);
          auVar982._0_14_ = auVar1035;
          cVar11 = (uVar939 != 0) * (uVar939 < 0x100) * auVar920[0xf] - (0xff < uVar939);
          auVar982[0xf] = cVar11;
          auVar921 = *(undefined1 (*) [16])(pcVar1 + 0x30) & __LC6;
          uVar1088 = (ushort)bVar10;
          uVar1099 = (ushort)((uint)uVar901 >> 0x18);
          uVar1101 = (ushort)((uint6)uVar902 >> 0x28);
          uVar1104 = (ushort)((ulong)uVar903 >> 0x38);
          uVar1108 = (ushort)((unkuint10)auVar1030._0_10_ >> 0x48);
          uVar1112 = auVar1030._10_2_ >> 8;
          uVar1116 = auVar1035._12_2_ >> 8;
          uVar1111 = auVar982._14_2_ >> 8;
          sVar932 = auVar980._0_2_;
          sVar958 = auVar980._2_2_;
          bVar18 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[2] - (0xff < sVar958);
          sVar958 = auVar980._4_2_;
          sVar1216 = auVar980._6_2_;
          cVar19 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar980[6] - (0xff < sVar1216);
          uVar901 = CONCAT13(cVar19,CONCAT12((0 < sVar958) * (sVar958 < 0x100) * auVar980[4] -
                                             (0xff < sVar958),
                                             CONCAT11(bVar18,(0 < sVar932) * (sVar932 < 0x100) *
                                                             auVar980[0] - (0xff < sVar932))));
          sVar932 = auVar980._8_2_;
          sVar958 = auVar980._10_2_;
          cVar25 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[10] - (0xff < sVar958);
          uVar902 = CONCAT15(cVar25,CONCAT14((0 < sVar932) * (sVar932 < 0x100) * auVar980[8] -
                                             (0xff < sVar932),uVar901));
          sVar932 = auVar980._12_2_;
          sVar958 = auVar980._14_2_;
          cVar20 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[0xe] - (0xff < sVar958);
          uVar903 = CONCAT17(cVar20,CONCAT16((0 < sVar932) * (sVar932 < 0x100) * auVar980[0xc] -
                                             (0xff < sVar932),uVar902));
          sVar932 = auVar921._0_2_;
          sVar958 = auVar921._2_2_;
          cVar21 = (0 < sVar958) * (sVar958 < 0x100) * auVar921[2] - (0xff < sVar958);
          auVar945._0_10_ =
               CONCAT19(cVar21,CONCAT18((0 < sVar932) * (sVar932 < 0x100) * auVar921[0] -
                                        (0xff < sVar932),uVar903));
          sVar932 = auVar921._4_2_;
          auVar945[10] = (0 < sVar932) * (sVar932 < 0x100) * auVar921[4] - (0xff < sVar932);
          sVar932 = auVar921._6_2_;
          cVar22 = (0 < sVar932) * (sVar932 < 0x100) * auVar921[6] - (0xff < sVar932);
          auVar945[0xb] = cVar22;
          sVar932 = auVar921._8_2_;
          auVar950[0xc] = (0 < sVar932) * (sVar932 < 0x100) * auVar921[8] - (0xff < sVar932);
          auVar950._0_12_ = auVar945;
          sVar932 = auVar921._10_2_;
          cVar24 = (0 < sVar932) * (sVar932 < 0x100) * auVar921[10] - (0xff < sVar932);
          auVar950[0xd] = cVar24;
          sVar932 = auVar921._12_2_;
          auVar1185[0xe] = (0 < sVar932) * (sVar932 < 0x100) * auVar921[0xc] - (0xff < sVar932);
          auVar1185._0_14_ = auVar950;
          sVar932 = auVar921._14_2_;
          cVar23 = (0 < sVar932) * (sVar932 < 0x100) * auVar921[0xe] - (0xff < sVar932);
          auVar1185[0xf] = cVar23;
          auVar921 = *(undefined1 (*) [16])(pcVar1 + 0x20);
          auVar1063 = __LC6 & auVar1185;
          uVar1045 = (ushort)bVar18;
          uVar1072 = (ushort)((uint)uVar901 >> 0x18);
          uVar1074 = (ushort)((uint6)uVar902 >> 0x28);
          uVar1076 = (ushort)((ulong)uVar903 >> 0x38);
          uVar1078 = (ushort)((unkuint10)auVar945._0_10_ >> 0x48);
          uVar1100 = auVar945._10_2_ >> 8;
          uVar1107 = auVar950._12_2_ >> 8;
          uVar1115 = auVar1185._14_2_ >> 8;
          uVar897 = auVar921._0_2_ >> 8;
          uVar929 = auVar921._2_2_ >> 8;
          uVar930 = auVar921._4_2_ >> 8;
          uVar931 = auVar921._6_2_ >> 8;
          uVar933 = auVar921._8_2_ >> 8;
          uVar935 = auVar921._10_2_ >> 8;
          uVar937 = auVar921._12_2_ >> 8;
          uVar939 = auVar921._14_2_ >> 8;
          bVar26 = (uVar929 != 0) * (uVar929 < 0x100) * auVar921[3] - (0xff < uVar929);
          cVar29 = (uVar931 != 0) * (uVar931 < 0x100) * auVar921[7] - (0xff < uVar931);
          uVar901 = CONCAT13(cVar29,CONCAT12((uVar930 != 0) * (uVar930 < 0x100) * auVar921[5] -
                                             (0xff < uVar930),
                                             CONCAT11(bVar26,(uVar897 != 0) * (uVar897 < 0x100) *
                                                             auVar921[1] - (0xff < uVar897))));
          cVar31 = (uVar935 != 0) * (uVar935 < 0x100) * auVar921[0xb] - (0xff < uVar935);
          uVar902 = CONCAT15(cVar31,CONCAT14((uVar933 != 0) * (uVar933 < 0x100) * auVar921[9] -
                                             (0xff < uVar933),uVar901));
          cVar28 = (uVar939 != 0) * (uVar939 < 0x100) * auVar921[0xf] - (0xff < uVar939);
          uVar903 = CONCAT17(cVar28,CONCAT16((uVar937 != 0) * (uVar937 < 0x100) * auVar921[0xd] -
                                             (0xff < uVar937),uVar902));
          cVar30 = (uVar1084 != 0) * (uVar1084 < 0x100) * auVar1095[3] - (0xff < uVar1084);
          auVar904._0_10_ =
               CONCAT19(cVar30,CONCAT18((uVar1082 != 0) * (uVar1082 < 0x100) * auVar1095[1] -
                                        (0xff < uVar1082),uVar903));
          auVar904[10] = (uVar1086 != 0) * (uVar1086 < 0x100) * auVar1095[5] - (0xff < uVar1086);
          cVar33 = (uVar959 != 0) * (uVar959 < 0x100) * auVar1095[7] - (0xff < uVar959);
          auVar904[0xb] = cVar33;
          auVar912[0xc] = (uVar960 != 0) * (uVar960 < 0x100) * auVar1095[9] - (0xff < uVar960);
          auVar912._0_12_ = auVar904;
          cVar32 = (uVar1087 != 0) * (uVar1087 < 0x100) * auVar1095[0xb] - (0xff < uVar1087);
          auVar912[0xd] = cVar32;
          auVar921[0xe] = (uVar1098 != 0) * (uVar1098 < 0x100) * auVar1095[0xd] - (0xff < uVar1098);
          auVar921._0_14_ = auVar912;
          cVar27 = (uVar1103 != 0) * (uVar1103 < 0x100) * auVar1095[0xf] - (0xff < uVar1103);
          auVar921[0xf] = cVar27;
          auVar920 = __LC6 & auVar981;
          uVar1177 = (ushort)bVar3;
          uVar1188 = (ushort)((uint)uVar941 >> 0x18);
          uVar1191 = (ushort)((uint6)uVar942 >> 0x28);
          uVar1194 = (ushort)((ulong)uVar944 >> 0x38);
          uVar1198 = (ushort)((unkuint10)auVar963._0_10_ >> 0x48);
          uVar1199 = auVar963._10_2_ >> 8;
          uVar1202 = auVar972._12_2_ >> 8;
          uVar929 = auVar981._14_2_ >> 8;
          sVar932 = auVar920._0_2_;
          sVar934 = auVar920._2_2_;
          sVar961 = auVar920._4_2_;
          sVar995 = auVar920._6_2_;
          sVar999 = auVar920._8_2_;
          sVar1021 = auVar920._10_2_;
          sVar1024 = auVar920._12_2_;
          sVar958 = auVar920._14_2_;
          cVar46 = (0 < sVar958) * (sVar958 < 0x100) * auVar920[0xe] - (0xff < sVar958);
          sVar958 = auVar1063._0_2_;
          bVar34 = (0 < sVar958) * (sVar958 < 0x100) * auVar1063[0] - (0xff < sVar958);
          uVar897 = CONCAT11(bVar34,cVar46);
          sVar958 = auVar1063._2_2_;
          bVar39 = (0 < sVar958) * (sVar958 < 0x100) * auVar1063[2] - (0xff < sVar958);
          uVar588 = CONCAT12(bVar39,uVar897);
          sVar958 = auVar1063._4_2_;
          bVar38 = (0 < sVar958) * (sVar958 < 0x100) * auVar1063[4] - (0xff < sVar958);
          uVar1180 = CONCAT13(bVar38,uVar588);
          sVar958 = auVar1063._6_2_;
          bVar37 = (0 < sVar958) * (sVar958 < 0x100) * auVar1063[6] - (0xff < sVar958);
          uVar759 = CONCAT14(bVar37,uVar1180);
          sVar958 = auVar1063._8_2_;
          bVar35 = (0 < sVar958) * (sVar958 < 0x100) * auVar1063[8] - (0xff < sVar958);
          auVar824[5] = bVar35;
          auVar824._0_5_ = uVar759;
          sVar1123 = auVar1063._10_2_;
          sVar1143 = auVar1063._12_2_;
          sVar1156 = auVar1063._14_2_;
          cVar8 = (uVar929 != 0) * (uVar929 < 0x100) * cVar8 - (0xff < uVar929);
          bVar42 = (uVar1045 != 0) * (uVar1045 < 0x100) * bVar18 - (0xff < uVar1045);
          uVar929 = CONCAT11(bVar42,cVar8);
          bVar41 = (uVar1072 != 0) * (uVar1072 < 0x100) * cVar19 - (0xff < uVar1072);
          uVar589 = CONCAT12(bVar41,uVar929);
          bVar40 = (uVar1074 != 0) * (uVar1074 < 0x100) * cVar25 - (0xff < uVar1074);
          uVar890 = CONCAT13(bVar40,uVar589);
          bVar36 = (uVar1076 != 0) * (uVar1076 < 0x100) * cVar20 - (0xff < uVar1076);
          uVar760 = CONCAT14(bVar36,uVar890);
          bVar18 = (uVar1078 != 0) * (uVar1078 < 0x100) * cVar21 - (0xff < uVar1078);
          auVar828[5] = bVar18;
          auVar828._0_5_ = uVar760;
          auVar982 = __LC6 & auVar982;
          auVar1095 = __LC6 & auVar921;
          uVar930 = (ushort)bVar26;
          uVar931 = (ushort)((uint)uVar901 >> 0x18);
          uVar933 = (ushort)((uint6)uVar902 >> 0x28);
          uVar935 = (ushort)((ulong)uVar903 >> 0x38);
          uVar937 = (ushort)((unkuint10)auVar904._0_10_ >> 0x48);
          uVar1074 = auVar904._10_2_ >> 8;
          uVar1078 = auVar912._12_2_ >> 8;
          uVar1084 = auVar921._14_2_ >> 8;
          auVar1013 = (undefined1  [16])local_418 & __LC6;
          cVar11 = (uVar1111 != 0) * (uVar1111 < 0x100) * cVar11 - (0xff < uVar1111);
          bVar26 = (uVar930 != 0) * (uVar930 < 0x100) * bVar26 - (0xff < uVar930);
          uVar930 = CONCAT11(bVar26,cVar11);
          bVar43 = (uVar931 != 0) * (uVar931 < 0x100) * cVar29 - (0xff < uVar931);
          uVar606 = CONCAT12(bVar43,uVar930);
          bVar44 = (uVar933 != 0) * (uVar933 < 0x100) * cVar31 - (0xff < uVar933);
          uVar891 = CONCAT13(bVar44,uVar606);
          bVar45 = (uVar935 != 0) * (uVar935 < 0x100) * cVar28 - (0xff < uVar935);
          uVar765 = CONCAT14(bVar45,uVar891);
          bVar47 = (uVar937 != 0) * (uVar937 < 0x100) * cVar30 - (0xff < uVar937);
          auVar829[5] = bVar47;
          auVar829._0_5_ = uVar765;
          sVar958 = auVar982._0_2_;
          sVar936 = auVar982._2_2_;
          sVar992 = auVar982._4_2_;
          sVar996 = auVar982._6_2_;
          sVar1102 = auVar982._8_2_;
          sVar1105 = auVar982._10_2_;
          sVar1109 = auVar982._12_2_;
          sVar1216 = auVar982._14_2_;
          cVar21 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar982[0xe] - (0xff < sVar1216);
          sVar1216 = auVar1095._0_2_;
          bVar48 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar1095[0] - (0xff < sVar1216);
          uVar931 = CONCAT11(bVar48,cVar21);
          sVar1216 = auVar1095._2_2_;
          bVar49 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar1095[2] - (0xff < sVar1216);
          uVar607 = CONCAT12(bVar49,uVar931);
          sVar1216 = auVar1095._4_2_;
          bVar50 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar1095[4] - (0xff < sVar1216);
          uVar882 = CONCAT13(bVar50,uVar607);
          sVar1216 = auVar1095._6_2_;
          bVar51 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar1095[6] - (0xff < sVar1216);
          uVar766 = CONCAT14(bVar51,uVar882);
          sVar1216 = auVar1095._8_2_;
          bVar52 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar1095[8] - (0xff < sVar1216);
          auVar826[5] = bVar52;
          auVar826._0_5_ = uVar766;
          sVar1137 = auVar1095._10_2_;
          sVar1146 = auVar1095._12_2_;
          sVar1158 = auVar1095._14_2_;
          auVar980 = local_3e8 & __LC6;
          auVar921 = local_408 & __LC6;
          sVar1216 = auVar1013._0_2_;
          sVar1195 = auVar1013._2_2_;
          bVar53 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1013[2] - (0xff < sVar1195);
          sVar1195 = auVar1013._4_2_;
          sVar938 = auVar1013._6_2_;
          cVar28 = (0 < sVar938) * (sVar938 < 0x100) * auVar1013[6] - (0xff < sVar938);
          uVar901 = CONCAT13(cVar28,CONCAT12((0 < sVar1195) * (sVar1195 < 0x100) * auVar1013[4] -
                                             (0xff < sVar1195),
                                             CONCAT11(bVar53,(0 < sVar1216) * (sVar1216 < 0x100) *
                                                             auVar1013[0] - (0xff < sVar1216))));
          sVar1216 = auVar1013._8_2_;
          sVar1195 = auVar1013._10_2_;
          cVar20 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1013[10] - (0xff < sVar1195);
          uVar902 = CONCAT15(cVar20,CONCAT14((0 < sVar1216) * (sVar1216 < 0x100) * auVar1013[8] -
                                             (0xff < sVar1216),uVar901));
          sVar1216 = auVar1013._12_2_;
          sVar1195 = auVar1013._14_2_;
          cVar19 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1013[0xe] - (0xff < sVar1195);
          uVar903 = CONCAT17(cVar19,CONCAT16((0 < sVar1216) * (sVar1216 < 0x100) * auVar1013[0xc] -
                                             (0xff < sVar1216),uVar902));
          sVar1216 = auVar921._0_2_;
          sVar1195 = auVar921._2_2_;
          cVar31 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar921[2] - (0xff < sVar1195);
          auVar1048._0_10_ =
               CONCAT19(cVar31,CONCAT18((0 < sVar1216) * (sVar1216 < 0x100) * auVar921[0] -
                                        (0xff < sVar1216),uVar903));
          sVar1216 = auVar921._4_2_;
          auVar1048[10] = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[4] - (0xff < sVar1216);
          sVar1216 = auVar921._6_2_;
          cVar30 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[6] - (0xff < sVar1216);
          auVar1048[0xb] = cVar30;
          sVar1216 = auVar921._8_2_;
          auVar1056[0xc] = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[8] - (0xff < sVar1216);
          auVar1056._0_12_ = auVar1048;
          sVar1216 = auVar921._10_2_;
          cVar29 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[10] - (0xff < sVar1216);
          auVar1056[0xd] = cVar29;
          sVar1216 = auVar921._12_2_;
          auVar1064[0xe] = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[0xc] - (0xff < sVar1216);
          auVar1064._0_14_ = auVar1056;
          sVar1216 = auVar921._14_2_;
          cVar25 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[0xe] - (0xff < sVar1216);
          auVar1064[0xf] = cVar25;
          uVar1086 = local_418._0_2_ >> 8;
          uVar959 = local_418._2_2_ >> 8;
          uVar960 = local_418._4_2_ >> 8;
          uVar1087 = local_418._6_2_ >> 8;
          uVar1098 = local_418._8_2_ >> 8;
          uVar1103 = local_418._10_2_ >> 8;
          uVar1111 = local_418._12_2_ >> 8;
          uVar1119 = local_418._14_2_ >> 8;
          auVar1185 = __LC6 & auVar1064;
          uVar1046 = (ushort)bVar53;
          uVar1073 = (ushort)((uint)uVar901 >> 0x18);
          uVar1075 = (ushort)((uint6)uVar902 >> 0x28);
          uVar1077 = (ushort)((ulong)uVar903 >> 0x38);
          uVar1079 = (ushort)((unkuint10)auVar1048._0_10_ >> 0x48);
          uVar1083 = auVar1048._10_2_ >> 8;
          uVar1085 = auVar1056._12_2_ >> 8;
          uVar1205 = auVar1064._14_2_ >> 8;
          uVar933 = local_408._0_2_ >> 8;
          uVar935 = local_408._2_2_ >> 8;
          uVar937 = local_408._4_2_ >> 8;
          uVar939 = local_408._6_2_ >> 8;
          uVar1045 = local_408._8_2_ >> 8;
          uVar1072 = local_408._10_2_ >> 8;
          uVar1076 = local_408._12_2_ >> 8;
          uVar1082 = local_408._14_2_ >> 8;
          bVar54 = (uVar959 != 0) * (uVar959 < 0x100) * local_418[3] - (0xff < uVar959);
          cVar55 = (uVar1087 != 0) * (uVar1087 < 0x100) * local_418[7] - (0xff < uVar1087);
          uVar941 = CONCAT13(cVar55,CONCAT12((uVar960 != 0) * (uVar960 < 0x100) * local_418[5] -
                                             (0xff < uVar960),
                                             CONCAT11(bVar54,(uVar1086 != 0) * (uVar1086 < 0x100) *
                                                             local_418[1] - (0xff < uVar1086))));
          cVar56 = (uVar1103 != 0) * (uVar1103 < 0x100) * local_418[0xb] - (0xff < uVar1103);
          uVar942 = CONCAT15(cVar56,CONCAT14((uVar1098 != 0) * (uVar1098 < 0x100) * local_418[9] -
                                             (0xff < uVar1098),uVar941));
          cVar57 = (uVar1119 != 0) * (uVar1119 < 0x100) * local_418[0xf] - (0xff < uVar1119);
          uVar944 = CONCAT17(cVar57,CONCAT16((uVar1111 != 0) * (uVar1111 < 0x100) * local_418[0xd] -
                                             (0xff < uVar1111),uVar942));
          cVar58 = (uVar935 != 0) * (uVar935 < 0x100) * local_408[3] - (0xff < uVar935);
          auVar946._0_10_ =
               CONCAT19(cVar58,CONCAT18((uVar933 != 0) * (uVar933 < 0x100) * local_408[1] -
                                        (0xff < uVar933),uVar944));
          auVar946[10] = (uVar937 != 0) * (uVar937 < 0x100) * local_408[5] - (0xff < uVar937);
          cVar59 = (uVar939 != 0) * (uVar939 < 0x100) * local_408[7] - (0xff < uVar939);
          auVar946[0xb] = cVar59;
          auVar951[0xc] = (uVar1045 != 0) * (uVar1045 < 0x100) * local_408[9] - (0xff < uVar1045);
          auVar951._0_12_ = auVar946;
          cVar60 = (uVar1072 != 0) * (uVar1072 < 0x100) * local_408[0xb] - (0xff < uVar1072);
          auVar951[0xd] = cVar60;
          auVar1243[0xe] = (uVar1076 != 0) * (uVar1076 < 0x100) * local_408[0xd] - (0xff < uVar1076)
          ;
          auVar1243._0_14_ = auVar951;
          cVar61 = (uVar1082 != 0) * (uVar1082 < 0x100) * local_408[0xf] - (0xff < uVar1082);
          auVar1243[0xf] = cVar61;
          auVar921 = local_3f8 & __LC6;
          sVar1216 = auVar921._0_2_;
          sVar1195 = auVar921._2_2_;
          bVar62 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar921[2] - (0xff < sVar1195);
          sVar1195 = auVar921._4_2_;
          sVar938 = auVar921._6_2_;
          cVar63 = (0 < sVar938) * (sVar938 < 0x100) * auVar921[6] - (0xff < sVar938);
          uVar901 = CONCAT13(cVar63,CONCAT12((0 < sVar1195) * (sVar1195 < 0x100) * auVar921[4] -
                                             (0xff < sVar1195),
                                             CONCAT11(bVar62,(0 < sVar1216) * (sVar1216 < 0x100) *
                                                             auVar921[0] - (0xff < sVar1216))));
          sVar1216 = auVar921._8_2_;
          sVar1195 = auVar921._10_2_;
          cVar64 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar921[10] - (0xff < sVar1195);
          uVar902 = CONCAT15(cVar64,CONCAT14((0 < sVar1216) * (sVar1216 < 0x100) * auVar921[8] -
                                             (0xff < sVar1216),uVar901));
          sVar1216 = auVar921._12_2_;
          sVar1195 = auVar921._14_2_;
          cVar65 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar921[0xe] - (0xff < sVar1195);
          uVar903 = CONCAT17(cVar65,CONCAT16((0 < sVar1216) * (sVar1216 < 0x100) * auVar921[0xc] -
                                             (0xff < sVar1216),uVar902));
          sVar1216 = auVar980._0_2_;
          sVar1195 = auVar980._2_2_;
          cVar66 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar980[2] - (0xff < sVar1195);
          auVar905._0_10_ =
               CONCAT19(cVar66,CONCAT18((0 < sVar1216) * (sVar1216 < 0x100) * auVar980[0] -
                                        (0xff < sVar1216),uVar903));
          sVar1216 = auVar980._4_2_;
          auVar905[10] = (0 < sVar1216) * (sVar1216 < 0x100) * auVar980[4] - (0xff < sVar1216);
          sVar1216 = auVar980._6_2_;
          cVar67 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar980[6] - (0xff < sVar1216);
          auVar905[0xb] = cVar67;
          sVar1216 = auVar980._8_2_;
          auVar913[0xc] = (0 < sVar1216) * (sVar1216 < 0x100) * auVar980[8] - (0xff < sVar1216);
          auVar913._0_12_ = auVar905;
          sVar1216 = auVar980._10_2_;
          cVar68 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar980[10] - (0xff < sVar1216);
          auVar913[0xd] = cVar68;
          sVar1216 = auVar980._12_2_;
          auVar1013[0xe] = (0 < sVar1216) * (sVar1216 < 0x100) * auVar980[0xc] - (0xff < sVar1216);
          auVar1013._0_14_ = auVar913;
          sVar1216 = auVar980._14_2_;
          cVar69 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar980[0xe] - (0xff < sVar1216);
          auVar1013[0xf] = cVar69;
          uVar933 = local_3f8._0_2_ >> 8;
          uVar935 = local_3f8._2_2_ >> 8;
          uVar937 = local_3f8._4_2_ >> 8;
          uVar939 = local_3f8._6_2_ >> 8;
          uVar1045 = local_3f8._8_2_ >> 8;
          uVar1072 = local_3f8._10_2_ >> 8;
          uVar1076 = local_3f8._12_2_ >> 8;
          uVar1082 = local_3f8._14_2_ >> 8;
          bVar70 = (uVar935 != 0) * (uVar935 < 0x100) * local_3f8[3] - (0xff < uVar935);
          cVar71 = (uVar939 != 0) * (uVar939 < 0x100) * local_3f8[7] - (0xff < uVar939);
          uVar1027 = CONCAT13(cVar71,CONCAT12((uVar937 != 0) * (uVar937 < 0x100) * local_3f8[5] -
                                              (0xff < uVar937),
                                              CONCAT11(bVar70,(uVar933 != 0) * (uVar933 < 0x100) *
                                                              local_3f8[1] - (0xff < uVar933))));
          cVar72 = (uVar1072 != 0) * (uVar1072 < 0x100) * local_3f8[0xb] - (0xff < uVar1072);
          uVar1028 = CONCAT15(cVar72,CONCAT14((uVar1045 != 0) * (uVar1045 < 0x100) * local_3f8[9] -
                                              (0xff < uVar1045),uVar1027));
          cVar73 = (uVar1082 != 0) * (uVar1082 < 0x100) * local_3f8[0xf] - (0xff < uVar1082);
          uVar1029 = CONCAT17(cVar73,CONCAT16((uVar1076 != 0) * (uVar1076 < 0x100) * local_3f8[0xd]
                                              - (0xff < uVar1076),uVar1028));
          cVar74 = (uVar1136 != 0) * (uVar1136 < 0x100) * local_3e8[3] - (0xff < uVar1136);
          auVar1031._0_10_ =
               CONCAT19(cVar74,CONCAT18((uVar1122 != 0) * (uVar1122 < 0x100) * local_3e8[1] -
                                        (0xff < uVar1122),uVar1029));
          auVar1031[10] = (uVar1139 != 0) * (uVar1139 < 0x100) * local_3e8[5] - (0xff < uVar1139);
          cVar75 = (uVar1142 != 0) * (uVar1142 < 0x100) * local_3e8[7] - (0xff < uVar1142);
          auVar1031[0xb] = cVar75;
          auVar1036[0xc] = (uVar1145 != 0) * (uVar1145 < 0x100) * local_3e8[9] - (0xff < uVar1145);
          auVar1036._0_12_ = auVar1031;
          cVar76 = (uVar1149 != 0) * (uVar1149 < 0x100) * local_3e8[0xb] - (0xff < uVar1149);
          auVar1036[0xd] = cVar76;
          auVar1040[0xe] = (uVar1152 != 0) * (uVar1152 < 0x100) * local_3e8[0xd] - (0xff < uVar1152)
          ;
          auVar1040._0_14_ = auVar1036;
          cVar77 = (uVar1155 != 0) * (uVar1155 < 0x100) * local_3e8[0xf] - (0xff < uVar1155);
          auVar1040[0xf] = cVar77;
          auVar980 = __LC6 & auVar1013;
          uVar935 = (ushort)bVar62;
          uVar937 = (ushort)((uint)uVar901 >> 0x18);
          uVar939 = (ushort)((uint6)uVar902 >> 0x28);
          uVar1045 = (ushort)((ulong)uVar903 >> 0x38);
          uVar1072 = (ushort)((unkuint10)auVar905._0_10_ >> 0x48);
          uVar1076 = auVar905._10_2_ >> 8;
          uVar1082 = auVar913._12_2_ >> 8;
          uVar1086 = auVar1013._14_2_ >> 8;
          sVar1216 = auVar1185._0_2_;
          sVar938 = auVar1185._2_2_;
          sVar993 = auVar1185._4_2_;
          sVar997 = auVar1185._6_2_;
          sVar1019 = auVar1185._8_2_;
          sVar1022 = auVar1185._10_2_;
          sVar1113 = auVar1185._12_2_;
          sVar1195 = auVar1185._14_2_;
          cVar78 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1185[0xe] - (0xff < sVar1195);
          sVar1195 = auVar980._0_2_;
          bVar79 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar980[0] - (0xff < sVar1195);
          uVar933 = CONCAT11(bVar79,cVar78);
          sVar1195 = auVar980._2_2_;
          bVar80 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar980[2] - (0xff < sVar1195);
          uVar608 = CONCAT12(bVar80,uVar933);
          sVar1195 = auVar980._4_2_;
          bVar81 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar980[4] - (0xff < sVar1195);
          uVar884 = CONCAT13(bVar81,uVar608);
          sVar1195 = auVar980._6_2_;
          bVar82 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar980[6] - (0xff < sVar1195);
          uVar767 = CONCAT14(bVar82,uVar884);
          sVar1195 = auVar980._8_2_;
          bVar83 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar980[8] - (0xff < sVar1195);
          auVar823[5] = bVar83;
          auVar823._0_5_ = uVar767;
          sVar1140 = auVar980._10_2_;
          sVar1150 = auVar980._12_2_;
          sVar1163 = auVar980._14_2_;
          cVar25 = (uVar1205 != 0) * (uVar1205 < 0x100) * cVar25 - (0xff < uVar1205);
          bVar84 = (uVar935 != 0) * (uVar935 < 0x100) * bVar62 - (0xff < uVar935);
          uVar935 = CONCAT11(bVar84,cVar25);
          bVar85 = (uVar937 != 0) * (uVar937 < 0x100) * cVar63 - (0xff < uVar937);
          uVar609 = CONCAT12(bVar85,uVar935);
          bVar86 = (uVar939 != 0) * (uVar939 < 0x100) * cVar64 - (0xff < uVar939);
          uVar880 = CONCAT13(bVar86,uVar609);
          bVar87 = (uVar1045 != 0) * (uVar1045 < 0x100) * cVar65 - (0xff < uVar1045);
          uVar768 = CONCAT14(bVar87,uVar880);
          bVar62 = (uVar1072 != 0) * (uVar1072 < 0x100) * cVar66 - (0xff < uVar1072);
          auVar827[5] = bVar62;
          auVar827._0_5_ = uVar768;
          auVar1013 = __LC6 & auVar1243;
          auVar921 = __LC6 & auVar1040;
          uVar1045 = (ushort)bVar54;
          uVar1072 = (ushort)((uint)uVar941 >> 0x18);
          uVar959 = (ushort)((uint6)uVar942 >> 0x28);
          uVar960 = (ushort)((ulong)uVar944 >> 0x38);
          uVar1087 = (ushort)((unkuint10)auVar946._0_10_ >> 0x48);
          uVar1098 = auVar946._10_2_ >> 8;
          uVar1103 = auVar951._12_2_ >> 8;
          uVar939 = auVar1243._14_2_ >> 8;
          uVar1111 = (ushort)bVar70;
          uVar1119 = (ushort)((uint)uVar1027 >> 0x18);
          uVar1205 = (ushort)((uint6)uVar1028 >> 0x28);
          uVar1122 = (ushort)((ulong)uVar1029 >> 0x38);
          uVar1136 = (ushort)((unkuint10)auVar1031._0_10_ >> 0x48);
          uVar1139 = auVar1031._10_2_ >> 8;
          uVar1142 = auVar1036._12_2_ >> 8;
          uVar1145 = auVar1040._14_2_ >> 8;
          sVar1195 = auVar1013._0_2_;
          sVar940 = auVar1013._2_2_;
          sVar994 = auVar1013._4_2_;
          sVar998 = auVar1013._6_2_;
          sVar1020 = auVar1013._8_2_;
          sVar1023 = auVar1013._10_2_;
          sVar1117 = auVar1013._12_2_;
          sVar1120 = auVar1013._14_2_;
          cVar65 = (0 < sVar1120) * (sVar1120 < 0x100) * auVar1013[0xe] - (0xff < sVar1120);
          sVar1120 = auVar921._0_2_;
          bVar88 = (0 < sVar1120) * (sVar1120 < 0x100) * auVar921[0] - (0xff < sVar1120);
          uVar937 = CONCAT11(bVar88,cVar65);
          sVar1120 = auVar921._2_2_;
          bVar89 = (0 < sVar1120) * (sVar1120 < 0x100) * auVar921[2] - (0xff < sVar1120);
          uVar610 = CONCAT12(bVar89,uVar937);
          sVar1120 = auVar921._4_2_;
          bVar90 = (0 < sVar1120) * (sVar1120 < 0x100) * auVar921[4] - (0xff < sVar1120);
          uVar877 = CONCAT13(bVar90,uVar610);
          sVar1120 = auVar921._6_2_;
          bVar91 = (0 < sVar1120) * (sVar1120 < 0x100) * auVar921[6] - (0xff < sVar1120);
          uVar769 = CONCAT14(bVar91,uVar877);
          sVar1120 = auVar921._8_2_;
          bVar92 = (0 < sVar1120) * (sVar1120 < 0x100) * auVar921[8] - (0xff < sVar1120);
          auVar825[5] = bVar92;
          auVar825._0_5_ = uVar769;
          sVar1120 = auVar921._10_2_;
          sVar1153 = auVar921._12_2_;
          sVar1165 = auVar921._14_2_;
          cVar61 = (uVar939 != 0) * (uVar939 < 0x100) * cVar61 - (0xff < uVar939);
          bVar70 = (uVar1111 != 0) * (uVar1111 < 0x100) * bVar70 - (0xff < uVar1111);
          uVar939 = CONCAT11(bVar70,cVar61);
          bVar93 = (uVar1119 != 0) * (uVar1119 < 0x100) * cVar71 - (0xff < uVar1119);
          uVar611 = CONCAT12(bVar93,uVar939);
          bVar94 = (uVar1205 != 0) * (uVar1205 < 0x100) * cVar72 - (0xff < uVar1205);
          uVar887 = CONCAT13(bVar94,uVar611);
          bVar95 = (uVar1122 != 0) * (uVar1122 < 0x100) * cVar73 - (0xff < uVar1122);
          uVar770 = CONCAT14(bVar95,uVar887);
          bVar96 = (uVar1136 != 0) * (uVar1136 < 0x100) * cVar74 - (0xff < uVar1136);
          auVar830[5] = bVar96;
          auVar830._0_5_ = uVar770;
          auVar823._6_8_ = 0;
          auVar209[0xe] = cVar78;
          auVar209._0_14_ = auVar823 << 0x38;
          uVar357 = CONCAT26(auVar209._13_2_,
                             CONCAT15((0 < sVar1113) * (sVar1113 < 0x100) * auVar1185[0xc] -
                                      (0xff < sVar1113),uVar767));
          auVar771._4_8_ = 0;
          auVar771._0_4_ = uVar884;
          auVar282._12_3_ = (int3)((ulong)uVar357 >> 0x28);
          auVar282._0_12_ = auVar771 << 0x38;
          uVar1029 = CONCAT44(auVar282._11_4_,
                              CONCAT13((0 < sVar1022) * (sVar1022 < 0x100) * auVar1185[10] -
                                       (0xff < sVar1022),uVar608));
          auVar351._10_5_ = (int5)((ulong)uVar1029 >> 0x18);
          auVar351._0_10_ = (unkuint10)uVar933 << 0x38;
          uVar903 = CONCAT62(auVar351._9_6_,
                             CONCAT11((0 < sVar1019) * (sVar1019 < 0x100) * auVar1185[8] -
                                      (0xff < sVar1019),cVar78));
          auVar394._7_8_ = 0;
          auVar394._0_7_ = (uint7)((ulong)uVar903 >> 8);
          Var362 = CONCAT81(SUB158(auVar394 << 0x40,7),
                            (0 < sVar997) * (sVar997 < 0x100) * auVar1185[6] - (0xff < sVar997));
          auVar612._9_6_ = 0;
          auVar612._0_9_ = Var362;
          auVar395._1_10_ = SUB1510(auVar612 << 0x30,5);
          auVar395[0] = (0 < sVar993) * (sVar993 < 0x100) * auVar1185[4] - (0xff < sVar993);
          auVar613._11_4_ = 0;
          auVar613._0_11_ = auVar395;
          auVar396._1_12_ = SUB1512(auVar613 << 0x20,3);
          auVar396[0] = (0 < sVar938) * (sVar938 < 0x100) * auVar1185[2] - (0xff < sVar938);
          auVar824._6_8_ = 0;
          auVar111[0xe] = cVar46;
          auVar111._0_14_ = auVar824 << 0x38;
          uVar358 = CONCAT26(auVar111._13_2_,
                             CONCAT15((0 < sVar1024) * (sVar1024 < 0x100) * auVar920[0xc] -
                                      (0xff < sVar1024),uVar759));
          auVar772._4_8_ = 0;
          auVar772._0_4_ = uVar1180;
          auVar215._12_3_ = (int3)((ulong)uVar358 >> 0x28);
          auVar215._0_12_ = auVar772 << 0x38;
          uVar356 = CONCAT44(auVar215._11_4_,
                             CONCAT13((0 < sVar1021) * (sVar1021 < 0x100) * auVar920[10] -
                                      (0xff < sVar1021),uVar588));
          auVar300._10_5_ = (int5)((ulong)uVar356 >> 0x18);
          auVar300._0_10_ = (unkuint10)uVar897 << 0x38;
          uVar944 = CONCAT62(auVar300._9_6_,
                             CONCAT11((0 < sVar999) * (sVar999 < 0x100) * auVar920[8] -
                                      (0xff < sVar999),cVar46));
          auVar397._7_8_ = 0;
          auVar397._0_7_ = (uint7)((ulong)uVar944 >> 8);
          Var398 = CONCAT81(SUB158(auVar397 << 0x40,7),
                            (0 < sVar995) * (sVar995 < 0x100) * auVar920[6] - (0xff < sVar995));
          auVar614._9_6_ = 0;
          auVar614._0_9_ = Var398;
          auVar399._1_10_ = SUB1510(auVar614 << 0x30,5);
          auVar399[0] = (0 < sVar961) * (sVar961 < 0x100) * auVar920[4] - (0xff < sVar961);
          auVar615._11_4_ = 0;
          auVar615._0_11_ = auVar399;
          auVar400._1_12_ = SUB1512(auVar615 << 0x20,3);
          auVar400[0] = (0 < sVar934) * (sVar934 < 0x100) * auVar920[2] - (0xff < sVar934);
          sVar1208 = (ushort)(byte)((0 < sVar932) * (sVar932 < 0x100) * auVar920[0] -
                                   (0xff < sVar932)) -
                     (ushort)(byte)((0 < sVar1216) * (sVar1216 < 0x100) * auVar1185[0] -
                                   (0xff < sVar1216));
          sVar1210 = auVar400._0_2_ - auVar396._0_2_;
          sVar1212 = auVar399._0_2_ - auVar395._0_2_;
          sVar1214 = (short)Var398 - (short)Var362;
          sVar1216 = (short)((ulong)uVar944 >> 8) - (short)((ulong)uVar903 >> 8);
          sVar1217 = (short)((ulong)uVar356 >> 0x18) - (short)((ulong)uVar1029 >> 0x18);
          sVar1219 = (short)((ulong)uVar358 >> 0x28) - (short)((ulong)uVar357 >> 0x28);
          sVar1221 = (auVar111._13_2_ >> 8) - (auVar209._13_2_ >> 8);
          auVar825._6_8_ = 0;
          auVar112[0xe] = cVar65;
          auVar112._0_14_ = auVar825 << 0x38;
          uVar357 = CONCAT26(auVar112._13_2_,
                             CONCAT15((0 < sVar1117) * (sVar1117 < 0x100) * auVar1013[0xc] -
                                      (0xff < sVar1117),uVar769));
          auVar773._4_8_ = 0;
          auVar773._0_4_ = uVar877;
          auVar216._12_3_ = (int3)((ulong)uVar357 >> 0x28);
          auVar216._0_12_ = auVar773 << 0x38;
          uVar1029 = CONCAT44(auVar216._11_4_,
                              CONCAT13((0 < sVar1023) * (sVar1023 < 0x100) * auVar1013[10] -
                                       (0xff < sVar1023),uVar610));
          auVar301._10_5_ = (int5)((ulong)uVar1029 >> 0x18);
          auVar301._0_10_ = (unkuint10)uVar937 << 0x38;
          uVar903 = CONCAT62(auVar301._9_6_,
                             CONCAT11((0 < sVar1020) * (sVar1020 < 0x100) * auVar1013[8] -
                                      (0xff < sVar1020),cVar65));
          auVar401._7_8_ = 0;
          auVar401._0_7_ = (uint7)((ulong)uVar903 >> 8);
          Var362 = CONCAT81(SUB158(auVar401 << 0x40,7),
                            (0 < sVar998) * (sVar998 < 0x100) * auVar1013[6] - (0xff < sVar998));
          auVar616._9_6_ = 0;
          auVar616._0_9_ = Var362;
          auVar402._1_10_ = SUB1510(auVar616 << 0x30,5);
          auVar402[0] = (0 < sVar994) * (sVar994 < 0x100) * auVar1013[4] - (0xff < sVar994);
          auVar617._11_4_ = 0;
          auVar617._0_11_ = auVar402;
          auVar403._1_12_ = SUB1512(auVar617 << 0x20,3);
          auVar403[0] = (0 < sVar940) * (sVar940 < 0x100) * auVar1013[2] - (0xff < sVar940);
          sVar999 = (ushort)bVar34 - (ushort)bVar79;
          sVar1019 = (ushort)bVar39 - (ushort)bVar80;
          sVar1020 = (ushort)bVar38 - (ushort)bVar81;
          sVar1021 = (ushort)bVar37 - (ushort)bVar82;
          sVar932 = (ushort)bVar35 - (ushort)bVar83;
          sVar1022 = (ushort)(byte)((0 < sVar1123) * (sVar1123 < 0x100) * auVar1063[10] -
                                   (0xff < sVar1123)) -
                     (ushort)(byte)((0 < sVar1140) * (sVar1140 < 0x100) * auVar980[10] -
                                   (0xff < sVar1140));
          sVar1023 = (ushort)(byte)((0 < sVar1143) * (sVar1143 < 0x100) * auVar1063[0xc] -
                                   (0xff < sVar1143)) -
                     (ushort)(byte)((0 < sVar1150) * (sVar1150 < 0x100) * auVar980[0xc] -
                                   (0xff < sVar1150));
          sVar1024 = (ushort)(byte)((0 < sVar1156) * (sVar1156 < 0x100) * auVar1063[0xe] -
                                   (0xff < sVar1156)) -
                     (ushort)(byte)((0 < sVar1163) * (sVar1163 < 0x100) * auVar980[0xe] -
                                   (0xff < sVar1163));
          sVar1214 = sVar1214 * sVar1214;
          uVar1111 = sVar1216 * sVar1216;
          auVar628._2_2_ = uVar1111;
          auVar628._0_2_ = sVar1214;
          auVar826._6_8_ = 0;
          auVar113[0xe] = cVar21;
          auVar113._0_14_ = auVar826 << 0x38;
          uVar358 = CONCAT26(auVar113._13_2_,
                             CONCAT15((0 < sVar1109) * (sVar1109 < 0x100) * auVar982[0xc] -
                                      (0xff < sVar1109),uVar766));
          auVar774._4_8_ = 0;
          auVar774._0_4_ = uVar882;
          auVar217._12_3_ = (int3)((ulong)uVar358 >> 0x28);
          auVar217._0_12_ = auVar774 << 0x38;
          uVar356 = CONCAT44(auVar217._11_4_,
                             CONCAT13((0 < sVar1105) * (sVar1105 < 0x100) * auVar982[10] -
                                      (0xff < sVar1105),uVar607));
          auVar302._10_5_ = (int5)((ulong)uVar356 >> 0x18);
          auVar302._0_10_ = (unkuint10)uVar931 << 0x38;
          uVar944 = CONCAT62(auVar302._9_6_,
                             CONCAT11((0 < sVar1102) * (sVar1102 < 0x100) * auVar982[8] -
                                      (0xff < sVar1102),cVar21));
          auVar404._7_8_ = 0;
          auVar404._0_7_ = (uint7)((ulong)uVar944 >> 8);
          Var398 = CONCAT81(SUB158(auVar404 << 0x40,7),
                            (0 < sVar996) * (sVar996 < 0x100) * auVar982[6] - (0xff < sVar996));
          auVar618._9_6_ = 0;
          auVar618._0_9_ = Var398;
          auVar405._1_10_ = SUB1510(auVar618 << 0x30,5);
          auVar405[0] = (0 < sVar992) * (sVar992 < 0x100) * auVar982[4] - (0xff < sVar992);
          auVar619._11_4_ = 0;
          auVar619._0_11_ = auVar405;
          auVar406._1_12_ = SUB1512(auVar619 << 0x20,3);
          auVar406[0] = (0 < sVar936) * (sVar936 < 0x100) * auVar982[2] - (0xff < sVar936);
          sVar1021 = sVar1021 * sVar1021;
          uVar931 = sVar932 * sVar932;
          auVar631._2_2_ = uVar931;
          auVar631._0_2_ = sVar1021;
          sVar932 = (ushort)(byte)((0 < sVar958) * (sVar958 < 0x100) * auVar982[0] -
                                  (0xff < sVar958)) -
                    (ushort)(byte)((0 < sVar1195) * (sVar1195 < 0x100) * auVar1013[0] -
                                  (0xff < sVar1195));
          sVar958 = auVar406._0_2_ - auVar403._0_2_;
          sVar1216 = auVar405._0_2_ - auVar402._0_2_;
          sVar1195 = (short)Var398 - (short)Var362;
          sVar934 = (short)((ulong)uVar944 >> 8) - (short)((ulong)uVar903 >> 8);
          sVar936 = (short)((ulong)uVar356 >> 0x18) - (short)((ulong)uVar1029 >> 0x18);
          sVar938 = (short)((ulong)uVar358 >> 0x28) - (short)((ulong)uVar357 >> 0x28);
          sVar940 = (auVar113._13_2_ >> 8) - (auVar112._13_2_ >> 8);
          sVar961 = (ushort)bVar48 - (ushort)bVar88;
          sVar992 = (ushort)bVar49 - (ushort)bVar89;
          sVar993 = (ushort)bVar50 - (ushort)bVar90;
          sVar994 = (ushort)bVar51 - (ushort)bVar91;
          sVar995 = (ushort)bVar52 - (ushort)bVar92;
          sVar996 = (ushort)(byte)((0 < sVar1137) * (sVar1137 < 0x100) * auVar1095[10] -
                                  (0xff < sVar1137)) -
                    (ushort)(byte)((0 < sVar1120) * (sVar1120 < 0x100) * auVar921[10] -
                                  (0xff < sVar1120));
          sVar997 = (ushort)(byte)((0 < sVar1146) * (sVar1146 < 0x100) * auVar1095[0xc] -
                                  (0xff < sVar1146)) -
                    (ushort)(byte)((0 < sVar1153) * (sVar1153 < 0x100) * auVar921[0xc] -
                                  (0xff < sVar1153));
          sVar998 = (ushort)(byte)((0 < sVar1158) * (sVar1158 < 0x100) * auVar1095[0xe] -
                                  (0xff < sVar1158)) -
                    (ushort)(byte)((0 < sVar1165) * (sVar1165 < 0x100) * auVar921[0xe] -
                                  (0xff < sVar1165));
          sVar1195 = sVar1195 * sVar1195;
          uVar897 = sVar934 * sVar934;
          auVar629._2_2_ = uVar897;
          auVar629._0_2_ = sVar1195;
          auVar827._6_8_ = 0;
          auVar114[0xe] = cVar25;
          auVar114._0_14_ = auVar827 << 0x38;
          uVar357 = CONCAT26(auVar114._13_2_,
                             CONCAT15((uVar1085 != 0) * (uVar1085 < 0x100) * cVar29 -
                                      (0xff < uVar1085),uVar768));
          auVar775._4_8_ = 0;
          auVar775._0_4_ = uVar880;
          auVar218._12_3_ = (int3)((ulong)uVar357 >> 0x28);
          auVar218._0_12_ = auVar775 << 0x38;
          uVar1029 = CONCAT44(auVar218._11_4_,
                              CONCAT13((uVar1083 != 0) * (uVar1083 < 0x100) * cVar30 -
                                       (0xff < uVar1083),uVar609));
          auVar303._10_5_ = (int5)((ulong)uVar1029 >> 0x18);
          auVar303._0_10_ = (unkuint10)uVar935 << 0x38;
          uVar903 = CONCAT62(auVar303._9_6_,
                             CONCAT11((uVar1079 != 0) * (uVar1079 < 0x100) * cVar31 -
                                      (0xff < uVar1079),cVar25));
          auVar407._7_8_ = 0;
          auVar407._0_7_ = (uint7)((ulong)uVar903 >> 8);
          Var362 = CONCAT81(SUB158(auVar407 << 0x40,7),
                            (uVar1077 != 0) * (uVar1077 < 0x100) * cVar19 - (0xff < uVar1077));
          auVar620._9_6_ = 0;
          auVar620._0_9_ = Var362;
          auVar408._1_10_ = SUB1510(auVar620 << 0x30,5);
          auVar408[0] = (uVar1075 != 0) * (uVar1075 < 0x100) * cVar20 - (0xff < uVar1075);
          auVar621._11_4_ = 0;
          auVar621._0_11_ = auVar408;
          auVar409._1_12_ = SUB1512(auVar621 << 0x20,3);
          auVar409[0] = (uVar1073 != 0) * (uVar1073 < 0x100) * cVar28 - (0xff < uVar1073);
          auVar828._6_8_ = 0;
          auVar115[0xe] = cVar8;
          auVar115._0_14_ = auVar828 << 0x38;
          uVar358 = CONCAT26(auVar115._13_2_,
                             CONCAT15((uVar1202 != 0) * (uVar1202 < 0x100) * cVar6 -
                                      (0xff < uVar1202),uVar760));
          auVar776._4_8_ = 0;
          auVar776._0_4_ = uVar890;
          auVar219._12_3_ = (int3)((ulong)uVar358 >> 0x28);
          auVar219._0_12_ = auVar776 << 0x38;
          uVar356 = CONCAT44(auVar219._11_4_,
                             CONCAT13((uVar1199 != 0) * (uVar1199 < 0x100) * cVar7 -
                                      (0xff < uVar1199),uVar589));
          auVar304._10_5_ = (int5)((ulong)uVar356 >> 0x18);
          auVar304._0_10_ = (unkuint10)uVar929 << 0x38;
          uVar944 = CONCAT62(auVar304._9_6_,
                             CONCAT11((uVar1198 != 0) * (uVar1198 < 0x100) * cVar5 -
                                      (0xff < uVar1198),cVar8));
          auVar410._7_8_ = 0;
          auVar410._0_7_ = (uint7)((ulong)uVar944 >> 8);
          Var398 = CONCAT81(SUB158(auVar410 << 0x40,7),
                            (uVar1194 != 0) * (uVar1194 < 0x100) * cVar874 - (0xff < uVar1194));
          auVar622._9_6_ = 0;
          auVar622._0_9_ = Var398;
          auVar411._1_10_ = SUB1510(auVar622 << 0x30,5);
          auVar411[0] = (uVar1191 != 0) * (uVar1191 < 0x100) * cVar4 - (0xff < uVar1191);
          auVar623._11_4_ = 0;
          auVar623._0_11_ = auVar411;
          auVar412._1_12_ = SUB1512(auVar623 << 0x20,3);
          auVar412[0] = (uVar1188 != 0) * (uVar1188 < 0x100) * cVar9 - (0xff < uVar1188);
          sVar1178 = (ushort)(byte)((uVar1177 != 0) * (uVar1177 < 0x100) * bVar3 - (0xff < uVar1177)
                                   ) -
                     (ushort)(byte)((uVar1046 != 0) * (uVar1046 < 0x100) * bVar53 -
                                   (0xff < uVar1046));
          sVar1189 = auVar412._0_2_ - auVar409._0_2_;
          sVar1192 = auVar411._0_2_ - auVar408._0_2_;
          sVar1196 = (short)Var398 - (short)Var362;
          sVar934 = (short)((ulong)uVar944 >> 8) - (short)((ulong)uVar903 >> 8);
          sVar1200 = (short)((ulong)uVar356 >> 0x18) - (short)((ulong)uVar1029 >> 0x18);
          sVar1203 = (short)((ulong)uVar358 >> 0x28) - (short)((ulong)uVar357 >> 0x28);
          sVar1206 = (auVar115._13_2_ >> 8) - (auVar114._13_2_ >> 8);
          sVar1158 = (ushort)bVar42 - (ushort)bVar84;
          sVar1163 = (ushort)bVar41 - (ushort)bVar85;
          sVar1165 = (ushort)bVar40 - (ushort)bVar86;
          sVar1167 = (ushort)bVar36 - (ushort)bVar87;
          sVar1169 = (ushort)bVar18 - (ushort)bVar62;
          sVar1171 = (ushort)(byte)((uVar1100 != 0) * (uVar1100 < 0x100) * cVar22 -
                                   (0xff < uVar1100)) -
                     (ushort)(byte)((uVar1076 != 0) * (uVar1076 < 0x100) * cVar67 -
                                   (0xff < uVar1076));
          sVar1173 = (ushort)(byte)((uVar1107 != 0) * (uVar1107 < 0x100) * cVar24 -
                                   (0xff < uVar1107)) -
                     (ushort)(byte)((uVar1082 != 0) * (uVar1082 < 0x100) * cVar68 -
                                   (0xff < uVar1082));
          sVar1175 = (ushort)(byte)((uVar1115 != 0) * (uVar1115 < 0x100) * cVar23 -
                                   (0xff < uVar1115)) -
                     (ushort)(byte)((uVar1086 != 0) * (uVar1086 < 0x100) * cVar69 -
                                   (0xff < uVar1086));
          sVar1196 = sVar1196 * sVar1196;
          uVar937 = sVar934 * sVar934;
          auVar630._2_2_ = uVar937;
          auVar630._0_2_ = sVar1196;
          auVar829._6_8_ = 0;
          auVar116[0xe] = cVar11;
          auVar116._0_14_ = auVar829 << 0x38;
          uVar357 = CONCAT26(auVar116._13_2_,
                             CONCAT15((uVar1116 != 0) * (uVar1116 < 0x100) * cVar16 -
                                      (0xff < uVar1116),uVar765));
          auVar777._4_8_ = 0;
          auVar777._0_4_ = uVar891;
          auVar220._12_3_ = (int3)((ulong)uVar357 >> 0x28);
          auVar220._0_12_ = auVar777 << 0x38;
          uVar1029 = CONCAT44(auVar220._11_4_,
                              CONCAT13((uVar1112 != 0) * (uVar1112 < 0x100) * cVar17 -
                                       (0xff < uVar1112),uVar606));
          auVar305._10_5_ = (int5)((ulong)uVar1029 >> 0x18);
          auVar305._0_10_ = (unkuint10)uVar930 << 0x38;
          uVar903 = CONCAT62(auVar305._9_6_,
                             CONCAT11((uVar1108 != 0) * (uVar1108 < 0x100) * cVar14 -
                                      (0xff < uVar1108),cVar11));
          auVar413._7_8_ = 0;
          auVar413._0_7_ = (uint7)((ulong)uVar903 >> 8);
          Var362 = CONCAT81(SUB158(auVar413 << 0x40,7),
                            (uVar1104 != 0) * (uVar1104 < 0x100) * cVar12 - (0xff < uVar1104));
          auVar624._9_6_ = 0;
          auVar624._0_9_ = Var362;
          auVar414._1_10_ = SUB1510(auVar624 << 0x30,5);
          auVar414[0] = (uVar1101 != 0) * (uVar1101 < 0x100) * cVar15 - (0xff < uVar1101);
          auVar625._11_4_ = 0;
          auVar625._0_11_ = auVar414;
          auVar415._1_12_ = SUB1512(auVar625 << 0x20,3);
          auVar415[0] = (uVar1099 != 0) * (uVar1099 < 0x100) * cVar13 - (0xff < uVar1099);
          auVar830._6_8_ = 0;
          auVar117[0xe] = cVar61;
          auVar117._0_14_ = auVar830 << 0x38;
          uVar358 = CONCAT26(auVar117._13_2_,
                             CONCAT15((uVar1103 != 0) * (uVar1103 < 0x100) * cVar60 -
                                      (0xff < uVar1103),uVar770));
          auVar778._4_8_ = 0;
          auVar778._0_4_ = uVar887;
          auVar221._12_3_ = (int3)((ulong)uVar358 >> 0x28);
          auVar221._0_12_ = auVar778 << 0x38;
          uVar356 = CONCAT44(auVar221._11_4_,
                             CONCAT13((uVar1098 != 0) * (uVar1098 < 0x100) * cVar59 -
                                      (0xff < uVar1098),uVar611));
          auVar306._10_5_ = (int5)((ulong)uVar356 >> 0x18);
          auVar306._0_10_ = (unkuint10)uVar939 << 0x38;
          uVar944 = CONCAT62(auVar306._9_6_,
                             CONCAT11((uVar1087 != 0) * (uVar1087 < 0x100) * cVar58 -
                                      (0xff < uVar1087),cVar61));
          auVar416._7_8_ = 0;
          auVar416._0_7_ = (uint7)((ulong)uVar944 >> 8);
          Var398 = CONCAT81(SUB158(auVar416 << 0x40,7),
                            (uVar960 != 0) * (uVar960 < 0x100) * cVar57 - (0xff < uVar960));
          auVar626._9_6_ = 0;
          auVar626._0_9_ = Var398;
          auVar417._1_10_ = SUB1510(auVar626 << 0x30,5);
          auVar417[0] = (uVar959 != 0) * (uVar959 < 0x100) * cVar56 - (0xff < uVar959);
          auVar627._11_4_ = 0;
          auVar627._0_11_ = auVar417;
          auVar418._1_12_ = SUB1512(auVar627 << 0x20,3);
          auVar418[0] = (uVar1072 != 0) * (uVar1072 < 0x100) * cVar55 - (0xff < uVar1072);
          sVar1123 = (ushort)(byte)((uVar1088 != 0) * (uVar1088 < 0x100) * bVar10 -
                                   (0xff < uVar1088)) -
                     (ushort)(byte)((uVar1045 != 0) * (uVar1045 < 0x100) * bVar54 -
                                   (0xff < uVar1045));
          sVar1137 = auVar415._0_2_ - auVar418._0_2_;
          sVar1140 = auVar414._0_2_ - auVar417._0_2_;
          sVar1143 = (short)Var362 - (short)Var398;
          sVar1146 = (short)((ulong)uVar903 >> 8) - (short)((ulong)uVar944 >> 8);
          sVar1150 = (short)((ulong)uVar1029 >> 0x18) - (short)((ulong)uVar356 >> 0x18);
          sVar1153 = (short)((ulong)uVar357 >> 0x28) - (short)((ulong)uVar358 >> 0x28);
          sVar1156 = (auVar116._13_2_ >> 8) - (auVar117._13_2_ >> 8);
          sVar994 = sVar994 * sVar994;
          uVar929 = sVar995 * sVar995;
          auVar632._2_2_ = uVar929;
          auVar632._0_2_ = sVar994;
          sVar934 = (ushort)bVar26 - (ushort)bVar70;
          sVar995 = (ushort)bVar43 - (ushort)bVar93;
          sVar1102 = (ushort)bVar44 - (ushort)bVar94;
          sVar1105 = (ushort)bVar45 - (ushort)bVar95;
          sVar1109 = (ushort)bVar47 - (ushort)bVar96;
          sVar1113 = (ushort)(byte)((uVar1074 != 0) * (uVar1074 < 0x100) * cVar33 -
                                   (0xff < uVar1074)) -
                     (ushort)(byte)((uVar1139 != 0) * (uVar1139 < 0x100) * cVar75 -
                                   (0xff < uVar1139));
          sVar1117 = (ushort)(byte)((uVar1078 != 0) * (uVar1078 < 0x100) * cVar32 -
                                   (0xff < uVar1078)) -
                     (ushort)(byte)((uVar1142 != 0) * (uVar1142 < 0x100) * cVar76 -
                                   (0xff < uVar1142));
          sVar1120 = (ushort)(byte)((uVar1084 != 0) * (uVar1084 < 0x100) * cVar27 -
                                   (0xff < uVar1084)) -
                     (ushort)(byte)((uVar1145 != 0) * (uVar1145 < 0x100) * cVar77 -
                                   (0xff < uVar1145));
          sVar1143 = sVar1143 * sVar1143;
          uVar933 = sVar1146 * sVar1146;
          auVar633._2_2_ = uVar933;
          auVar633._0_2_ = sVar1143;
          auVar628._4_8_ = 0;
          auVar118._12_2_ = sVar1214;
          auVar118._0_12_ = auVar628 << 0x30;
          uVar903 = CONCAT44(auVar118._10_4_,CONCAT22(sVar1212 * sVar1212,sVar1214));
          auVar419._6_8_ = 0;
          auVar419._0_6_ = (uint6)((ulong)uVar903 >> 0x10);
          auVar629._4_8_ = 0;
          auVar119._12_2_ = sVar1195;
          auVar119._0_12_ = auVar629 << 0x30;
          uVar944 = CONCAT44(auVar119._10_4_,CONCAT22(sVar1216 * sVar1216,sVar1195));
          auVar420._6_8_ = 0;
          auVar420._0_6_ = (uint6)((ulong)uVar944 >> 0x10);
          sVar1167 = sVar1167 * sVar1167;
          uVar935 = sVar1169 * sVar1169;
          auVar634._2_2_ = uVar935;
          auVar634._0_2_ = sVar1167;
          auVar630._4_8_ = 0;
          auVar120._12_2_ = sVar1196;
          auVar120._0_12_ = auVar630 << 0x30;
          uVar1029 = CONCAT44(auVar120._10_4_,CONCAT22(sVar1192 * sVar1192,sVar1196));
          auVar421._6_8_ = 0;
          auVar421._0_6_ = (uint6)((ulong)uVar1029 >> 0x10);
          sVar1105 = sVar1105 * sVar1105;
          uVar930 = sVar1109 * sVar1109;
          auVar635._2_2_ = uVar930;
          auVar635._0_2_ = sVar1105;
          auVar631._4_8_ = 0;
          auVar121._12_2_ = sVar1021;
          auVar121._0_12_ = auVar631 << 0x30;
          uVar356 = CONCAT44(auVar121._10_4_,CONCAT22(sVar1020 * sVar1020,sVar1021));
          auVar422._6_8_ = 0;
          auVar422._0_6_ = (uint6)((ulong)uVar356 >> 0x10);
          auVar632._4_8_ = 0;
          auVar122._12_2_ = sVar994;
          auVar122._0_12_ = auVar632 << 0x30;
          uVar357 = CONCAT44(auVar122._10_4_,CONCAT22(sVar993 * sVar993,sVar994));
          auVar423._6_8_ = 0;
          auVar423._0_6_ = (uint6)((ulong)uVar357 >> 0x10);
          auVar633._4_8_ = 0;
          auVar123._12_2_ = sVar1143;
          auVar123._0_12_ = auVar633 << 0x30;
          uVar358 = CONCAT44(auVar123._10_4_,CONCAT22(sVar1140 * sVar1140,sVar1143));
          auVar424._6_8_ = 0;
          auVar424._0_6_ = (uint6)((ulong)uVar358 >> 0x10);
          auVar634._4_8_ = 0;
          auVar124._12_2_ = sVar1167;
          auVar124._0_12_ = auVar634 << 0x30;
          uVar359 = CONCAT44(auVar124._10_4_,CONCAT22(sVar1165 * sVar1165,sVar1167));
          auVar425._6_8_ = 0;
          auVar425._0_6_ = (uint6)((ulong)uVar359 >> 0x10);
          iVar1080 = (int)((ulong)uVar944 >> 0x10) + (int)((ulong)uVar903 >> 0x10) +
                     (int)((ulong)uVar1029 >> 0x10) + (int)((ulong)uVar358 >> 0x10);
          auVar635._4_8_ = 0;
          auVar125._12_2_ = sVar1105;
          auVar125._0_12_ = auVar635 << 0x30;
          uVar903 = CONCAT44(auVar125._10_4_,CONCAT22(sVar1102 * sVar1102,sVar1105));
          auVar426._6_8_ = 0;
          auVar426._0_6_ = (uint6)((ulong)uVar903 >> 0x10);
          iVar1148 = (int)((ulong)uVar357 >> 0x10) + (int)((ulong)uVar356 >> 0x10) +
                     (int)((ulong)uVar359 >> 0x10) + (int)((ulong)uVar903 >> 0x10);
          cVar874 = basist::transcode_uastc_to_bc7(local_238,local_318);
          if (cVar874 != '\0') {
            basist::encode_bc7_block(local_458,local_318);
            basisu::unpack_block(0xb,local_458,local_3d8);
            auVar921 = *(undefined1 (*) [16])pcVar1;
            auVar1095 = *(undefined1 (*) [16])(pcVar1 + 0x20);
            auVar920 = *(undefined1 (*) [16])(pcVar1 + 0x10) & __LC6;
            auVar980 = *(undefined1 (*) [16])pcVar1 & __LC6;
            sVar1216 = auVar980._0_2_;
            sVar1195 = auVar980._2_2_;
            bVar3 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar980[2] - (0xff < sVar1195);
            sVar1195 = auVar980._4_2_;
            sVar993 = auVar980._6_2_;
            cVar4 = (0 < sVar993) * (sVar993 < 0x100) * auVar980[6] - (0xff < sVar993);
            uVar901 = CONCAT13(cVar4,CONCAT12((0 < sVar1195) * (sVar1195 < 0x100) * auVar980[4] -
                                              (0xff < sVar1195),
                                              CONCAT11(bVar3,(0 < sVar1216) * (sVar1216 < 0x100) *
                                                             auVar980[0] - (0xff < sVar1216))));
            sVar1216 = auVar980._8_2_;
            sVar1195 = auVar980._10_2_;
            cVar5 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar980[10] - (0xff < sVar1195);
            uVar902 = CONCAT15(cVar5,CONCAT14((0 < sVar1216) * (sVar1216 < 0x100) * auVar980[8] -
                                              (0xff < sVar1216),uVar901));
            sVar1216 = auVar980._12_2_;
            sVar1195 = auVar980._14_2_;
            cVar7 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar980[0xe] - (0xff < sVar1195);
            uVar903 = CONCAT17(cVar7,CONCAT16((0 < sVar1216) * (sVar1216 < 0x100) * auVar980[0xc] -
                                              (0xff < sVar1216),uVar902));
            sVar1216 = auVar920._0_2_;
            sVar1195 = auVar920._2_2_;
            cVar8 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar920[2] - (0xff < sVar1195);
            auVar1126._0_10_ =
                 CONCAT19(cVar8,CONCAT18((0 < sVar1216) * (sVar1216 < 0x100) * auVar920[0] -
                                         (0xff < sVar1216),uVar903));
            sVar1216 = auVar920._4_2_;
            auVar1126[10] = (0 < sVar1216) * (sVar1216 < 0x100) * auVar920[4] - (0xff < sVar1216);
            sVar1216 = auVar920._6_2_;
            cVar874 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar920[6] - (0xff < sVar1216);
            auVar1126[0xb] = cVar874;
            sVar1216 = auVar920._8_2_;
            auVar1129[0xc] = (0 < sVar1216) * (sVar1216 < 0x100) * auVar920[8] - (0xff < sVar1216);
            auVar1129._0_12_ = auVar1126;
            sVar1216 = auVar920._10_2_;
            cVar9 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar920[10] - (0xff < sVar1216);
            auVar1129[0xd] = cVar9;
            sVar1216 = auVar920._12_2_;
            auVar1132[0xe] = (0 < sVar1216) * (sVar1216 < 0x100) * auVar920[0xc] - (0xff < sVar1216)
            ;
            auVar1132._0_14_ = auVar1129;
            sVar1216 = auVar920._14_2_;
            cVar6 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar920[0xe] - (0xff < sVar1216);
            auVar1132[0xf] = cVar6;
            auVar920 = *(undefined1 (*) [16])(pcVar1 + 0x10);
            uVar1115 = auVar921._0_2_ >> 8;
            uVar1119 = auVar921._2_2_ >> 8;
            uVar1177 = auVar921._4_2_ >> 8;
            uVar1188 = auVar921._6_2_ >> 8;
            uVar1191 = auVar921._8_2_ >> 8;
            uVar1194 = auVar921._10_2_ >> 8;
            uVar1198 = auVar921._12_2_ >> 8;
            uVar1199 = auVar921._14_2_ >> 8;
            auVar980 = *(undefined1 (*) [16])(pcVar1 + 0x30) & __LC6;
            uVar1086 = auVar1095._0_2_ >> 8;
            uVar959 = auVar1095._2_2_ >> 8;
            uVar960 = auVar1095._4_2_ >> 8;
            uVar1087 = auVar1095._6_2_ >> 8;
            uVar1098 = auVar1095._8_2_ >> 8;
            uVar1100 = auVar1095._10_2_ >> 8;
            uVar1103 = auVar1095._12_2_ >> 8;
            uVar1107 = auVar1095._14_2_ >> 8;
            auVar1013 = __LC6 & auVar1132;
            auVar1185 = local_3d8 & __LC6;
            uVar939 = auVar920._0_2_ >> 8;
            uVar1045 = auVar920._2_2_ >> 8;
            uVar1072 = auVar920._4_2_ >> 8;
            uVar1074 = auVar920._6_2_ >> 8;
            uVar1076 = auVar920._8_2_ >> 8;
            uVar1078 = auVar920._10_2_ >> 8;
            uVar1082 = auVar920._12_2_ >> 8;
            uVar1084 = auVar920._14_2_ >> 8;
            uVar1083 = (ushort)bVar3;
            uVar1085 = (ushort)((uint)uVar901 >> 0x18);
            uVar1088 = (ushort)((uint6)uVar902 >> 0x28);
            uVar1099 = (ushort)((ulong)uVar903 >> 0x38);
            uVar1101 = (ushort)((unkuint10)auVar1126._0_10_ >> 0x48);
            uVar1104 = auVar1126._10_2_ >> 8;
            uVar1108 = auVar1129._12_2_ >> 8;
            uVar1202 = auVar1132._14_2_ >> 8;
            bVar10 = (uVar1119 != 0) * (uVar1119 < 0x100) * auVar921[3] - (0xff < uVar1119);
            cVar17 = (uVar1188 != 0) * (uVar1188 < 0x100) * auVar921[7] - (0xff < uVar1188);
            uVar1027 = CONCAT13(cVar17,CONCAT12((uVar1177 != 0) * (uVar1177 < 0x100) * auVar921[5] -
                                                (0xff < uVar1177),
                                                CONCAT11(bVar10,(uVar1115 != 0) * (uVar1115 < 0x100)
                                                                * auVar921[1] - (0xff < uVar1115))))
            ;
            cVar11 = (uVar1194 != 0) * (uVar1194 < 0x100) * auVar921[0xb] - (0xff < uVar1194);
            uVar1028 = CONCAT15(cVar11,CONCAT14((uVar1191 != 0) * (uVar1191 < 0x100) * auVar921[9] -
                                                (0xff < uVar1191),uVar1027));
            cVar15 = (uVar1199 != 0) * (uVar1199 < 0x100) * auVar921[0xf] - (0xff < uVar1199);
            uVar1029 = CONCAT17(cVar15,CONCAT16((uVar1198 != 0) * (uVar1198 < 0x100) * auVar921[0xd]
                                                - (0xff < uVar1198),uVar1028));
            cVar16 = (uVar1045 != 0) * (uVar1045 < 0x100) * auVar920[3] - (0xff < uVar1045);
            auVar1090._0_10_ =
                 CONCAT19(cVar16,CONCAT18((uVar939 != 0) * (uVar939 < 0x100) * auVar920[1] -
                                          (0xff < uVar939),uVar1029));
            auVar1090[10] = (uVar1072 != 0) * (uVar1072 < 0x100) * auVar920[5] - (0xff < uVar1072);
            cVar14 = (uVar1074 != 0) * (uVar1074 < 0x100) * auVar920[7] - (0xff < uVar1074);
            auVar1090[0xb] = cVar14;
            auVar1093[0xc] = (uVar1076 != 0) * (uVar1076 < 0x100) * auVar920[9] - (0xff < uVar1076);
            auVar1093._0_12_ = auVar1090;
            cVar13 = (uVar1078 != 0) * (uVar1078 < 0x100) * auVar920[0xb] - (0xff < uVar1078);
            auVar1093[0xd] = cVar13;
            auVar1096[0xe] =
                 (uVar1082 != 0) * (uVar1082 < 0x100) * auVar920[0xd] - (0xff < uVar1082);
            auVar1096._0_14_ = auVar1093;
            cVar12 = (uVar1084 != 0) * (uVar1084 < 0x100) * auVar920[0xf] - (0xff < uVar1084);
            auVar1096[0xf] = cVar12;
            auVar1063 = local_3b8 & __LC6;
            uVar1122 = local_3a8._0_2_ >> 8;
            uVar1139 = local_3a8._2_2_ >> 8;
            uVar1112 = local_3a8._4_2_ >> 8;
            uVar1116 = local_3a8._6_2_ >> 8;
            uVar1149 = local_3a8._8_2_ >> 8;
            uVar1152 = local_3a8._10_2_ >> 8;
            uVar1155 = local_3a8._12_2_ >> 8;
            uVar1222 = local_3a8._14_2_ >> 8;
            auVar921 = *(undefined1 (*) [16])(pcVar1 + 0x20) & __LC6;
            sVar1216 = auVar921._0_2_;
            sVar1195 = auVar921._2_2_;
            bVar18 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar921[2] - (0xff < sVar1195);
            sVar1195 = auVar921._4_2_;
            sVar993 = auVar921._6_2_;
            cVar21 = (0 < sVar993) * (sVar993 < 0x100) * auVar921[6] - (0xff < sVar993);
            uVar901 = CONCAT13(cVar21,CONCAT12((0 < sVar1195) * (sVar1195 < 0x100) * auVar921[4] -
                                               (0xff < sVar1195),
                                               CONCAT11(bVar18,(0 < sVar1216) * (sVar1216 < 0x100) *
                                                               auVar921[0] - (0xff < sVar1216))));
            sVar1216 = auVar921._8_2_;
            sVar1195 = auVar921._10_2_;
            cVar25 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar921[10] - (0xff < sVar1195);
            uVar902 = CONCAT15(cVar25,CONCAT14((0 < sVar1216) * (sVar1216 < 0x100) * auVar921[8] -
                                               (0xff < sVar1216),uVar901));
            sVar1216 = auVar921._12_2_;
            sVar1195 = auVar921._14_2_;
            cVar23 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar921[0xe] - (0xff < sVar1195);
            uVar903 = CONCAT17(cVar23,CONCAT16((0 < sVar1216) * (sVar1216 < 0x100) * auVar921[0xc] -
                                               (0xff < sVar1216),uVar902));
            sVar1216 = auVar980._0_2_;
            sVar1195 = auVar980._2_2_;
            cVar20 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar980[2] - (0xff < sVar1195);
            auVar906._0_10_ =
                 CONCAT19(cVar20,CONCAT18((0 < sVar1216) * (sVar1216 < 0x100) * auVar980[0] -
                                          (0xff < sVar1216),uVar903));
            sVar1216 = auVar980._4_2_;
            auVar906[10] = (0 < sVar1216) * (sVar1216 < 0x100) * auVar980[4] - (0xff < sVar1216);
            sVar1216 = auVar980._6_2_;
            cVar22 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar980[6] - (0xff < sVar1216);
            auVar906[0xb] = cVar22;
            sVar1216 = auVar980._8_2_;
            auVar914[0xc] = (0 < sVar1216) * (sVar1216 < 0x100) * auVar980[8] - (0xff < sVar1216);
            auVar914._0_12_ = auVar906;
            sVar1216 = auVar980._10_2_;
            cVar19 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar980[10] - (0xff < sVar1216);
            auVar914[0xd] = cVar19;
            sVar1216 = auVar980._12_2_;
            auVar922[0xe] = (0 < sVar1216) * (sVar1216 < 0x100) * auVar980[0xc] - (0xff < sVar1216);
            auVar922._0_14_ = auVar914;
            sVar1216 = auVar980._14_2_;
            cVar24 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar980[0xe] - (0xff < sVar1216);
            auVar922[0xf] = cVar24;
            auVar921 = *(undefined1 (*) [16])(pcVar1 + 0x30);
            uVar939 = auVar921._0_2_ >> 8;
            uVar1045 = auVar921._2_2_ >> 8;
            uVar1072 = auVar921._4_2_ >> 8;
            uVar1074 = auVar921._6_2_ >> 8;
            uVar1076 = auVar921._8_2_ >> 8;
            uVar1078 = auVar921._10_2_ >> 8;
            uVar1082 = auVar921._12_2_ >> 8;
            uVar1084 = auVar921._14_2_ >> 8;
            bVar26 = (uVar959 != 0) * (uVar959 < 0x100) * auVar1095[3] - (0xff < uVar959);
            cVar33 = (uVar1087 != 0) * (uVar1087 < 0x100) * auVar1095[7] - (0xff < uVar1087);
            uVar941 = CONCAT13(cVar33,CONCAT12((uVar960 != 0) * (uVar960 < 0x100) * auVar1095[5] -
                                               (0xff < uVar960),
                                               CONCAT11(bVar26,(uVar1086 != 0) * (uVar1086 < 0x100)
                                                               * auVar1095[1] - (0xff < uVar1086))))
            ;
            cVar29 = (uVar1100 != 0) * (uVar1100 < 0x100) * auVar1095[0xb] - (0xff < uVar1100);
            uVar942 = CONCAT15(cVar29,CONCAT14((uVar1098 != 0) * (uVar1098 < 0x100) * auVar1095[9] -
                                               (0xff < uVar1098),uVar941));
            cVar31 = (uVar1107 != 0) * (uVar1107 < 0x100) * auVar1095[0xf] - (0xff < uVar1107);
            uVar944 = CONCAT17(cVar31,CONCAT16((uVar1103 != 0) * (uVar1103 < 0x100) * auVar1095[0xd]
                                               - (0xff < uVar1103),uVar942));
            cVar28 = (uVar1045 != 0) * (uVar1045 < 0x100) * auVar921[3] - (0xff < uVar1045);
            auVar1049._0_10_ =
                 CONCAT19(cVar28,CONCAT18((uVar939 != 0) * (uVar939 < 0x100) * auVar921[1] -
                                          (0xff < uVar939),uVar944));
            auVar1049[10] = (uVar1072 != 0) * (uVar1072 < 0x100) * auVar921[5] - (0xff < uVar1072);
            cVar30 = (uVar1074 != 0) * (uVar1074 < 0x100) * auVar921[7] - (0xff < uVar1074);
            auVar1049[0xb] = cVar30;
            auVar1057[0xc] = (uVar1076 != 0) * (uVar1076 < 0x100) * auVar921[9] - (0xff < uVar1076);
            auVar1057._0_12_ = auVar1049;
            cVar27 = (uVar1078 != 0) * (uVar1078 < 0x100) * auVar921[0xb] - (0xff < uVar1078);
            auVar1057[0xd] = cVar27;
            auVar1065[0xe] =
                 (uVar1082 != 0) * (uVar1082 < 0x100) * auVar921[0xd] - (0xff < uVar1082);
            auVar1065._0_14_ = auVar1057;
            cVar32 = (uVar1084 != 0) * (uVar1084 < 0x100) * auVar921[0xf] - (0xff < uVar1084);
            auVar1065[0xf] = cVar32;
            auVar920 = __LC6 & auVar922;
            uVar1045 = (ushort)bVar18;
            uVar1072 = (ushort)((uint)uVar901 >> 0x18);
            uVar1074 = (ushort)((uint6)uVar902 >> 0x28);
            uVar1076 = (ushort)((ulong)uVar903 >> 0x38);
            uVar1078 = (ushort)((unkuint10)auVar906._0_10_ >> 0x48);
            uVar1098 = auVar906._10_2_ >> 8;
            uVar1103 = auVar914._12_2_ >> 8;
            uVar1115 = auVar922._14_2_ >> 8;
            sVar1216 = auVar1013._0_2_;
            sVar1102 = auVar1013._2_2_;
            sVar1109 = auVar1013._4_2_;
            sVar1165 = auVar1013._6_2_;
            sVar1196 = auVar1013._8_2_;
            sVar1110 = auVar1013._10_2_;
            sVar1124 = auVar1013._12_2_;
            sVar1195 = auVar1013._14_2_;
            cVar46 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1013[0xe] - (0xff < sVar1195);
            sVar1195 = auVar920._0_2_;
            bVar39 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar920[0] - (0xff < sVar1195);
            uVar939 = CONCAT11(bVar39,cVar46);
            sVar1195 = auVar920._2_2_;
            bVar38 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar920[2] - (0xff < sVar1195);
            uVar588 = CONCAT12(bVar38,uVar939);
            sVar1195 = auVar920._4_2_;
            bVar37 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar920[4] - (0xff < sVar1195);
            uVar1180 = CONCAT13(bVar37,uVar588);
            sVar1195 = auVar920._6_2_;
            bVar35 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar920[6] - (0xff < sVar1195);
            uVar759 = CONCAT14(bVar35,uVar1180);
            sVar1195 = auVar920._8_2_;
            bVar34 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar920[8] - (0xff < sVar1195);
            auVar831[5] = bVar34;
            auVar831._0_5_ = uVar759;
            sVar1151 = auVar920._10_2_;
            sVar1174 = auVar920._12_2_;
            sVar1193 = auVar920._14_2_;
            cVar6 = (uVar1202 != 0) * (uVar1202 < 0x100) * cVar6 - (0xff < uVar1202);
            bVar18 = (uVar1045 != 0) * (uVar1045 < 0x100) * bVar18 - (0xff < uVar1045);
            uVar1045 = CONCAT11(bVar18,cVar6);
            bVar36 = (uVar1072 != 0) * (uVar1072 < 0x100) * cVar21 - (0xff < uVar1072);
            uVar589 = CONCAT12(bVar36,uVar1045);
            bVar40 = (uVar1074 != 0) * (uVar1074 < 0x100) * cVar25 - (0xff < uVar1074);
            uVar890 = CONCAT13(bVar40,uVar589);
            bVar41 = (uVar1076 != 0) * (uVar1076 < 0x100) * cVar23 - (0xff < uVar1076);
            uVar760 = CONCAT14(bVar41,uVar890);
            bVar42 = (uVar1078 != 0) * (uVar1078 < 0x100) * cVar20 - (0xff < uVar1078);
            auVar836[5] = bVar42;
            auVar836._0_5_ = uVar760;
            auVar980 = __LC6 & auVar1096;
            auVar921 = __LC6 & auVar1065;
            uVar1142 = (ushort)bVar10;
            uVar1145 = (ushort)((uint)uVar1027 >> 0x18);
            uVar1046 = (ushort)((uint6)uVar1028 >> 0x28);
            uVar1073 = (ushort)((ulong)uVar1029 >> 0x38);
            uVar1075 = (ushort)((unkuint10)auVar1090._0_10_ >> 0x48);
            uVar1077 = auVar1090._10_2_ >> 8;
            uVar1079 = auVar1093._12_2_ >> 8;
            uVar1086 = auVar1096._14_2_ >> 8;
            sVar1195 = auVar980._0_2_;
            sVar1020 = auVar980._2_2_;
            sVar1140 = auVar980._4_2_;
            sVar1167 = auVar980._6_2_;
            sVar1212 = auVar980._8_2_;
            sVar1114 = auVar980._10_2_;
            sVar1138 = auVar980._12_2_;
            sVar993 = auVar980._14_2_;
            cVar21 = (0 < sVar993) * (sVar993 < 0x100) * auVar980[0xe] - (0xff < sVar993);
            sVar993 = auVar921._0_2_;
            bVar47 = (0 < sVar993) * (sVar993 < 0x100) * auVar921[0] - (0xff < sVar993);
            uVar1072 = CONCAT11(bVar47,cVar21);
            sVar993 = auVar921._2_2_;
            bVar45 = (0 < sVar993) * (sVar993 < 0x100) * auVar921[2] - (0xff < sVar993);
            uVar606 = CONCAT12(bVar45,uVar1072);
            sVar993 = auVar921._4_2_;
            bVar49 = (0 < sVar993) * (sVar993 < 0x100) * auVar921[4] - (0xff < sVar993);
            uVar891 = CONCAT13(bVar49,uVar606);
            sVar993 = auVar921._6_2_;
            bVar44 = (0 < sVar993) * (sVar993 < 0x100) * auVar921[6] - (0xff < sVar993);
            uVar765 = CONCAT14(bVar44,uVar891);
            sVar993 = auVar921._8_2_;
            bVar43 = (0 < sVar993) * (sVar993 < 0x100) * auVar921[8] - (0xff < sVar993);
            auVar833[5] = bVar43;
            auVar833._0_5_ = uVar765;
            sVar1154 = auVar921._10_2_;
            sVar1179 = auVar921._12_2_;
            sVar1197 = auVar921._14_2_;
            uVar1074 = (ushort)bVar26;
            uVar1076 = (ushort)((uint)uVar941 >> 0x18);
            uVar1078 = (ushort)((uint6)uVar942 >> 0x28);
            uVar1082 = (ushort)((ulong)uVar944 >> 0x38);
            uVar1084 = (ushort)((unkuint10)auVar1049._0_10_ >> 0x48);
            uVar1199 = auVar1049._10_2_ >> 8;
            uVar1205 = auVar1057._12_2_ >> 8;
            uVar1136 = auVar1065._14_2_ >> 8;
            cVar12 = (uVar1086 != 0) * (uVar1086 < 0x100) * cVar12 - (0xff < uVar1086);
            bVar26 = (uVar1074 != 0) * (uVar1074 < 0x100) * bVar26 - (0xff < uVar1074);
            uVar1074 = CONCAT11(bVar26,cVar12);
            bVar52 = (uVar1076 != 0) * (uVar1076 < 0x100) * cVar33 - (0xff < uVar1076);
            uVar607 = CONCAT12(bVar52,uVar1074);
            bVar51 = (uVar1078 != 0) * (uVar1078 < 0x100) * cVar29 - (0xff < uVar1078);
            uVar882 = CONCAT13(bVar51,uVar607);
            bVar50 = (uVar1082 != 0) * (uVar1082 < 0x100) * cVar31 - (0xff < uVar1082);
            uVar766 = CONCAT14(bVar50,uVar882);
            bVar48 = (uVar1084 != 0) * (uVar1084 < 0x100) * cVar28 - (0xff < uVar1084);
            auVar838[5] = bVar48;
            auVar838._0_5_ = uVar766;
            auVar1095 = local_3c8 & __LC6;
            sVar993 = auVar1185._0_2_;
            sVar994 = auVar1185._2_2_;
            bVar53 = (0 < sVar994) * (sVar994 < 0x100) * auVar1185[2] - (0xff < sVar994);
            sVar994 = auVar1185._4_2_;
            sVar1021 = auVar1185._6_2_;
            cVar31 = (0 < sVar1021) * (sVar1021 < 0x100) * auVar1185[6] - (0xff < sVar1021);
            uVar901 = CONCAT13(cVar31,CONCAT12((0 < sVar994) * (sVar994 < 0x100) * auVar1185[4] -
                                               (0xff < sVar994),
                                               CONCAT11(bVar53,(0 < sVar993) * (sVar993 < 0x100) *
                                                               auVar1185[0] - (0xff < sVar993))));
            sVar993 = auVar1185._8_2_;
            sVar994 = auVar1185._10_2_;
            cVar28 = (0 < sVar994) * (sVar994 < 0x100) * auVar1185[10] - (0xff < sVar994);
            uVar902 = CONCAT15(cVar28,CONCAT14((0 < sVar993) * (sVar993 < 0x100) * auVar1185[8] -
                                               (0xff < sVar993),uVar901));
            sVar993 = auVar1185._12_2_;
            sVar994 = auVar1185._14_2_;
            cVar33 = (0 < sVar994) * (sVar994 < 0x100) * auVar1185[0xe] - (0xff < sVar994);
            uVar903 = CONCAT17(cVar33,CONCAT16((0 < sVar993) * (sVar993 < 0x100) * auVar1185[0xc] -
                                               (0xff < sVar993),uVar902));
            sVar993 = auVar1095._0_2_;
            sVar994 = auVar1095._2_2_;
            cVar25 = (0 < sVar994) * (sVar994 < 0x100) * auVar1095[2] - (0xff < sVar994);
            auVar1226._0_10_ =
                 CONCAT19(cVar25,CONCAT18((0 < sVar993) * (sVar993 < 0x100) * auVar1095[0] -
                                          (0xff < sVar993),uVar903));
            sVar993 = auVar1095._4_2_;
            auVar1226[10] = (0 < sVar993) * (sVar993 < 0x100) * auVar1095[4] - (0xff < sVar993);
            sVar993 = auVar1095._6_2_;
            cVar23 = (0 < sVar993) * (sVar993 < 0x100) * auVar1095[6] - (0xff < sVar993);
            auVar1226[0xb] = cVar23;
            sVar993 = auVar1095._8_2_;
            auVar1227[0xc] = (0 < sVar993) * (sVar993 < 0x100) * auVar1095[8] - (0xff < sVar993);
            auVar1227._0_12_ = auVar1226;
            sVar993 = auVar1095._10_2_;
            cVar20 = (0 < sVar993) * (sVar993 < 0x100) * auVar1095[10] - (0xff < sVar993);
            auVar1227[0xd] = cVar20;
            sVar993 = auVar1095._12_2_;
            auVar1228[0xe] = (0 < sVar993) * (sVar993 < 0x100) * auVar1095[0xc] - (0xff < sVar993);
            auVar1228._0_14_ = auVar1227;
            sVar993 = auVar1095._14_2_;
            cVar29 = (0 < sVar993) * (sVar993 < 0x100) * auVar1095[0xe] - (0xff < sVar993);
            auVar1228[0xf] = cVar29;
            uVar1100 = local_3d8._0_2_ >> 8;
            uVar1107 = local_3d8._2_2_ >> 8;
            uVar1119 = local_3d8._4_2_ >> 8;
            uVar1177 = local_3d8._6_2_ >> 8;
            uVar1188 = local_3d8._8_2_ >> 8;
            uVar1191 = local_3d8._10_2_ >> 8;
            uVar1194 = local_3d8._12_2_ >> 8;
            uVar1198 = local_3d8._14_2_ >> 8;
            auVar1243 = __LC6 & auVar1228;
            uVar1224 = (ushort)bVar53;
            uVar1229 = (ushort)((uint)uVar901 >> 0x18);
            uVar1231 = (ushort)((uint6)uVar902 >> 0x28);
            uVar1233 = (ushort)((ulong)uVar903 >> 0x38);
            uVar1234 = (ushort)((unkuint10)auVar1226._0_10_ >> 0x48);
            uVar1236 = auVar1226._10_2_ >> 8;
            uVar1238 = auVar1227._12_2_ >> 8;
            uVar1202 = auVar1228._14_2_ >> 8;
            uVar1076 = local_3c8._0_2_ >> 8;
            uVar1078 = local_3c8._2_2_ >> 8;
            uVar1082 = local_3c8._4_2_ >> 8;
            uVar1084 = local_3c8._6_2_ >> 8;
            uVar1086 = local_3c8._8_2_ >> 8;
            uVar959 = local_3c8._10_2_ >> 8;
            uVar960 = local_3c8._12_2_ >> 8;
            uVar1087 = local_3c8._14_2_ >> 8;
            bVar54 = (uVar1107 != 0) * (uVar1107 < 0x100) * local_3d8[3] - (0xff < uVar1107);
            cVar57 = (uVar1177 != 0) * (uVar1177 < 0x100) * local_3d8[7] - (0xff < uVar1177);
            uVar941 = CONCAT13(cVar57,CONCAT12((uVar1119 != 0) * (uVar1119 < 0x100) * local_3d8[5] -
                                               (0xff < uVar1119),
                                               CONCAT11(bVar54,(uVar1100 != 0) * (uVar1100 < 0x100)
                                                               * local_3d8[1] - (0xff < uVar1100))))
            ;
            cVar60 = (uVar1191 != 0) * (uVar1191 < 0x100) * local_3d8[0xb] - (0xff < uVar1191);
            uVar942 = CONCAT15(cVar60,CONCAT14((uVar1188 != 0) * (uVar1188 < 0x100) * local_3d8[9] -
                                               (0xff < uVar1188),uVar941));
            cVar56 = (uVar1198 != 0) * (uVar1198 < 0x100) * local_3d8[0xf] - (0xff < uVar1198);
            uVar944 = CONCAT17(cVar56,CONCAT16((uVar1194 != 0) * (uVar1194 < 0x100) * local_3d8[0xd]
                                               - (0xff < uVar1194),uVar942));
            cVar59 = (uVar1078 != 0) * (uVar1078 < 0x100) * local_3c8[3] - (0xff < uVar1078);
            auVar1050._0_10_ =
                 CONCAT19(cVar59,CONCAT18((uVar1076 != 0) * (uVar1076 < 0x100) * local_3c8[1] -
                                          (0xff < uVar1076),uVar944));
            auVar1050[10] = (uVar1082 != 0) * (uVar1082 < 0x100) * local_3c8[5] - (0xff < uVar1082);
            cVar55 = (uVar1084 != 0) * (uVar1084 < 0x100) * local_3c8[7] - (0xff < uVar1084);
            auVar1050[0xb] = cVar55;
            auVar1058[0xc] = (uVar1086 != 0) * (uVar1086 < 0x100) * local_3c8[9] - (0xff < uVar1086)
            ;
            auVar1058._0_12_ = auVar1050;
            cVar61 = (uVar959 != 0) * (uVar959 < 0x100) * local_3c8[0xb] - (0xff < uVar959);
            auVar1058[0xd] = cVar61;
            auVar1066[0xe] = (uVar960 != 0) * (uVar960 < 0x100) * local_3c8[0xd] - (0xff < uVar960);
            auVar1066._0_14_ = auVar1058;
            cVar58 = (uVar1087 != 0) * (uVar1087 < 0x100) * local_3c8[0xf] - (0xff < uVar1087);
            auVar1066[0xf] = cVar58;
            auVar1095 = local_3a8 & __LC6;
            sVar993 = auVar1063._0_2_;
            sVar994 = auVar1063._2_2_;
            bVar62 = (0 < sVar994) * (sVar994 < 0x100) * auVar1063[2] - (0xff < sVar994);
            sVar994 = auVar1063._4_2_;
            sVar1021 = auVar1063._6_2_;
            cVar69 = (0 < sVar1021) * (sVar1021 < 0x100) * auVar1063[6] - (0xff < sVar1021);
            uVar1027 = CONCAT13(cVar69,CONCAT12((0 < sVar994) * (sVar994 < 0x100) * auVar1063[4] -
                                                (0xff < sVar994),
                                                CONCAT11(bVar62,(0 < sVar993) * (sVar993 < 0x100) *
                                                                auVar1063[0] - (0xff < sVar993))));
            sVar993 = auVar1063._8_2_;
            sVar994 = auVar1063._10_2_;
            cVar63 = (0 < sVar994) * (sVar994 < 0x100) * auVar1063[10] - (0xff < sVar994);
            uVar1028 = CONCAT15(cVar63,CONCAT14((0 < sVar993) * (sVar993 < 0x100) * auVar1063[8] -
                                                (0xff < sVar993),uVar1027));
            sVar993 = auVar1063._12_2_;
            sVar994 = auVar1063._14_2_;
            cVar67 = (0 < sVar994) * (sVar994 < 0x100) * auVar1063[0xe] - (0xff < sVar994);
            uVar1029 = CONCAT17(cVar67,CONCAT16((0 < sVar993) * (sVar993 < 0x100) * auVar1063[0xc] -
                                                (0xff < sVar993),uVar1028));
            sVar993 = auVar1095._0_2_;
            sVar994 = auVar1095._2_2_;
            cVar68 = (0 < sVar994) * (sVar994 < 0x100) * auVar1095[2] - (0xff < sVar994);
            auVar1181._0_10_ =
                 CONCAT19(cVar68,CONCAT18((0 < sVar993) * (sVar993 < 0x100) * auVar1095[0] -
                                          (0xff < sVar993),uVar1029));
            sVar993 = auVar1095._4_2_;
            auVar1181[10] = (0 < sVar993) * (sVar993 < 0x100) * auVar1095[4] - (0xff < sVar993);
            sVar993 = auVar1095._6_2_;
            cVar65 = (0 < sVar993) * (sVar993 < 0x100) * auVar1095[6] - (0xff < sVar993);
            auVar1181[0xb] = cVar65;
            sVar993 = auVar1095._8_2_;
            auVar1183[0xc] = (0 < sVar993) * (sVar993 < 0x100) * auVar1095[8] - (0xff < sVar993);
            auVar1183._0_12_ = auVar1181;
            sVar993 = auVar1095._10_2_;
            cVar66 = (0 < sVar993) * (sVar993 < 0x100) * auVar1095[10] - (0xff < sVar993);
            auVar1183[0xd] = cVar66;
            sVar993 = auVar1095._12_2_;
            auVar1186[0xe] = (0 < sVar993) * (sVar993 < 0x100) * auVar1095[0xc] - (0xff < sVar993);
            auVar1186._0_14_ = auVar1183;
            sVar993 = auVar1095._14_2_;
            cVar64 = (0 < sVar993) * (sVar993 < 0x100) * auVar1095[0xe] - (0xff < sVar993);
            auVar1186[0xf] = cVar64;
            uVar1076 = local_3b8._0_2_ >> 8;
            uVar1078 = local_3b8._2_2_ >> 8;
            uVar1082 = local_3b8._4_2_ >> 8;
            uVar1084 = local_3b8._6_2_ >> 8;
            uVar1086 = local_3b8._8_2_ >> 8;
            uVar959 = local_3b8._10_2_ >> 8;
            uVar960 = local_3b8._12_2_ >> 8;
            uVar1087 = local_3b8._14_2_ >> 8;
            bVar70 = (uVar1078 != 0) * (uVar1078 < 0x100) * local_3b8[3] - (0xff < uVar1078);
            cVar74 = (uVar1084 != 0) * (uVar1084 < 0x100) * local_3b8[7] - (0xff < uVar1084);
            uVar901 = CONCAT13(cVar74,CONCAT12((uVar1082 != 0) * (uVar1082 < 0x100) * local_3b8[5] -
                                               (0xff < uVar1082),
                                               CONCAT11(bVar70,(uVar1076 != 0) * (uVar1076 < 0x100)
                                                               * local_3b8[1] - (0xff < uVar1076))))
            ;
            cVar77 = (uVar959 != 0) * (uVar959 < 0x100) * local_3b8[0xb] - (0xff < uVar959);
            uVar902 = CONCAT15(cVar77,CONCAT14((uVar1086 != 0) * (uVar1086 < 0x100) * local_3b8[9] -
                                               (0xff < uVar1086),uVar901));
            cVar75 = (uVar1087 != 0) * (uVar1087 < 0x100) * local_3b8[0xf] - (0xff < uVar1087);
            uVar903 = CONCAT17(cVar75,CONCAT16((uVar960 != 0) * (uVar960 < 0x100) * local_3b8[0xd] -
                                               (0xff < uVar960),uVar902));
            cVar73 = (uVar1139 != 0) * (uVar1139 < 0x100) * local_3a8[3] - (0xff < uVar1139);
            auVar907._0_10_ =
                 CONCAT19(cVar73,CONCAT18((uVar1122 != 0) * (uVar1122 < 0x100) * local_3a8[1] -
                                          (0xff < uVar1122),uVar903));
            auVar907[10] = (uVar1112 != 0) * (uVar1112 < 0x100) * local_3a8[5] - (0xff < uVar1112);
            cVar71 = (uVar1116 != 0) * (uVar1116 < 0x100) * local_3a8[7] - (0xff < uVar1116);
            auVar907[0xb] = cVar71;
            auVar915[0xc] = (uVar1149 != 0) * (uVar1149 < 0x100) * local_3a8[9] - (0xff < uVar1149);
            auVar915._0_12_ = auVar907;
            cVar72 = (uVar1152 != 0) * (uVar1152 < 0x100) * local_3a8[0xb] - (0xff < uVar1152);
            auVar915[0xd] = cVar72;
            auVar923[0xe] =
                 (uVar1155 != 0) * (uVar1155 < 0x100) * local_3a8[0xd] - (0xff < uVar1155);
            auVar923._0_14_ = auVar915;
            cVar76 = (uVar1222 != 0) * (uVar1222 < 0x100) * local_3a8[0xf] - (0xff < uVar1222);
            auVar923[0xf] = cVar76;
            auVar1063 = __LC6 & auVar1186;
            uVar1078 = (ushort)bVar62;
            uVar1082 = (ushort)((uint)uVar1027 >> 0x18);
            uVar1084 = (ushort)((uint6)uVar1028 >> 0x28);
            uVar1086 = (ushort)((ulong)uVar1029 >> 0x38);
            uVar959 = (ushort)((unkuint10)auVar1181._0_10_ >> 0x48);
            uVar1112 = auVar1181._10_2_ >> 8;
            uVar1116 = auVar1183._12_2_ >> 8;
            uVar1149 = auVar1186._14_2_ >> 8;
            sVar993 = auVar1243._0_2_;
            sVar1021 = auVar1243._2_2_;
            sVar1143 = auVar1243._4_2_;
            sVar1169 = auVar1243._6_2_;
            sVar1214 = auVar1243._8_2_;
            sVar1118 = auVar1243._10_2_;
            sVar1141 = auVar1243._12_2_;
            sVar994 = auVar1243._14_2_;
            cVar78 = (0 < sVar994) * (sVar994 < 0x100) * auVar1243[0xe] - (0xff < sVar994);
            sVar994 = auVar1063._0_2_;
            bVar82 = (0 < sVar994) * (sVar994 < 0x100) * auVar1063[0] - (0xff < sVar994);
            uVar1076 = CONCAT11(bVar82,cVar78);
            sVar994 = auVar1063._2_2_;
            bVar81 = (0 < sVar994) * (sVar994 < 0x100) * auVar1063[2] - (0xff < sVar994);
            uVar608 = CONCAT12(bVar81,uVar1076);
            sVar994 = auVar1063._4_2_;
            bVar83 = (0 < sVar994) * (sVar994 < 0x100) * auVar1063[4] - (0xff < sVar994);
            uVar884 = CONCAT13(bVar83,uVar608);
            sVar994 = auVar1063._6_2_;
            bVar80 = (0 < sVar994) * (sVar994 < 0x100) * auVar1063[6] - (0xff < sVar994);
            uVar767 = CONCAT14(bVar80,uVar884);
            sVar994 = auVar1063._8_2_;
            bVar79 = (0 < sVar994) * (sVar994 < 0x100) * auVar1063[8] - (0xff < sVar994);
            auVar832[5] = bVar79;
            auVar832._0_5_ = uVar767;
            sVar1157 = auVar1063._10_2_;
            sVar1176 = auVar1063._12_2_;
            sVar1201 = auVar1063._14_2_;
            cVar29 = (uVar1202 != 0) * (uVar1202 < 0x100) * cVar29 - (0xff < uVar1202);
            bVar62 = (uVar1078 != 0) * (uVar1078 < 0x100) * bVar62 - (0xff < uVar1078);
            uVar1078 = CONCAT11(bVar62,cVar29);
            bVar85 = (uVar1082 != 0) * (uVar1082 < 0x100) * cVar69 - (0xff < uVar1082);
            uVar609 = CONCAT12(bVar85,uVar1078);
            bVar87 = (uVar1084 != 0) * (uVar1084 < 0x100) * cVar63 - (0xff < uVar1084);
            uVar880 = CONCAT13(bVar87,uVar609);
            bVar84 = (uVar1086 != 0) * (uVar1086 < 0x100) * cVar67 - (0xff < uVar1086);
            uVar768 = CONCAT14(bVar84,uVar880);
            bVar86 = (uVar959 != 0) * (uVar959 < 0x100) * cVar68 - (0xff < uVar959);
            auVar835[5] = bVar86;
            auVar835._0_5_ = uVar768;
            auVar1185 = __LC6 & auVar923;
            auVar1095 = __LC6 & auVar1066;
            uVar1084 = (ushort)bVar70;
            uVar1086 = (ushort)((uint)uVar901 >> 0x18);
            uVar959 = (ushort)((uint6)uVar902 >> 0x28);
            uVar960 = (ushort)((ulong)uVar903 >> 0x38);
            uVar1087 = (ushort)((unkuint10)auVar907._0_10_ >> 0x48);
            uVar1100 = auVar907._10_2_ >> 8;
            uVar1107 = auVar915._12_2_ >> 8;
            uVar1119 = auVar923._14_2_ >> 8;
            uVar1177 = (ushort)bVar54;
            uVar1188 = (ushort)((uint)uVar941 >> 0x18);
            uVar1191 = (ushort)((uint6)uVar942 >> 0x28);
            uVar1194 = (ushort)((ulong)uVar944 >> 0x38);
            uVar1198 = (ushort)((unkuint10)auVar1050._0_10_ >> 0x48);
            uVar1202 = auVar1050._10_2_ >> 8;
            uVar1122 = auVar1058._12_2_ >> 8;
            uVar1139 = auVar1066._14_2_ >> 8;
            sVar994 = auVar1095._0_2_;
            sVar1105 = auVar1095._2_2_;
            sVar1146 = auVar1095._4_2_;
            sVar1192 = auVar1095._6_2_;
            sVar1106 = auVar1095._8_2_;
            sVar1121 = auVar1095._10_2_;
            sVar1144 = auVar1095._12_2_;
            sVar1147 = auVar1095._14_2_;
            cVar69 = (0 < sVar1147) * (sVar1147 < 0x100) * auVar1095[0xe] - (0xff < sVar1147);
            sVar1147 = auVar1185._0_2_;
            bVar92 = (0 < sVar1147) * (sVar1147 < 0x100) * auVar1185[0] - (0xff < sVar1147);
            uVar1082 = CONCAT11(bVar92,cVar69);
            sVar1147 = auVar1185._2_2_;
            bVar88 = (0 < sVar1147) * (sVar1147 < 0x100) * auVar1185[2] - (0xff < sVar1147);
            uVar610 = CONCAT12(bVar88,uVar1082);
            sVar1147 = auVar1185._4_2_;
            bVar91 = (0 < sVar1147) * (sVar1147 < 0x100) * auVar1185[4] - (0xff < sVar1147);
            uVar877 = CONCAT13(bVar91,uVar610);
            sVar1147 = auVar1185._6_2_;
            bVar90 = (0 < sVar1147) * (sVar1147 < 0x100) * auVar1185[6] - (0xff < sVar1147);
            uVar769 = CONCAT14(bVar90,uVar877);
            sVar1147 = auVar1185._8_2_;
            bVar89 = (0 < sVar1147) * (sVar1147 < 0x100) * auVar1185[8] - (0xff < sVar1147);
            auVar834[5] = bVar89;
            auVar834._0_5_ = uVar769;
            sVar1147 = auVar1185._10_2_;
            sVar1190 = auVar1185._12_2_;
            sVar1204 = auVar1185._14_2_;
            cVar58 = (uVar1139 != 0) * (uVar1139 < 0x100) * cVar58 - (0xff < uVar1139);
            bVar70 = (uVar1084 != 0) * (uVar1084 < 0x100) * bVar70 - (0xff < uVar1084);
            uVar1084 = CONCAT11(bVar70,cVar58);
            bVar93 = (uVar1086 != 0) * (uVar1086 < 0x100) * cVar74 - (0xff < uVar1086);
            uVar611 = CONCAT12(bVar93,uVar1084);
            bVar94 = (uVar959 != 0) * (uVar959 < 0x100) * cVar77 - (0xff < uVar959);
            uVar887 = CONCAT13(bVar94,uVar611);
            bVar95 = (uVar960 != 0) * (uVar960 < 0x100) * cVar75 - (0xff < uVar960);
            uVar770 = CONCAT14(bVar95,uVar887);
            bVar96 = (uVar1087 != 0) * (uVar1087 < 0x100) * cVar73 - (0xff < uVar1087);
            auVar837[5] = bVar96;
            auVar837._0_5_ = uVar770;
            auVar831._6_8_ = 0;
            auVar126[0xe] = cVar46;
            auVar126._0_14_ = auVar831 << 0x38;
            uVar357 = CONCAT26(auVar126._13_2_,
                               CONCAT15((0 < sVar1124) * (sVar1124 < 0x100) * auVar1013[0xc] -
                                        (0xff < sVar1124),uVar759));
            auVar779._4_8_ = 0;
            auVar779._0_4_ = uVar1180;
            auVar222._12_3_ = (int3)((ulong)uVar357 >> 0x28);
            auVar222._0_12_ = auVar779 << 0x38;
            uVar1029 = CONCAT44(auVar222._11_4_,
                                CONCAT13((0 < sVar1110) * (sVar1110 < 0x100) * auVar1013[10] -
                                         (0xff < sVar1110),uVar588));
            auVar307._10_5_ = (int5)((ulong)uVar1029 >> 0x18);
            auVar307._0_10_ = (unkuint10)uVar939 << 0x38;
            uVar903 = CONCAT62(auVar307._9_6_,
                               CONCAT11((0 < sVar1196) * (sVar1196 < 0x100) * auVar1013[8] -
                                        (0xff < sVar1196),cVar46));
            auVar427._7_8_ = 0;
            auVar427._0_7_ = (uint7)((ulong)uVar903 >> 8);
            Var362 = CONCAT81(SUB158(auVar427 << 0x40,7),
                              (0 < sVar1165) * (sVar1165 < 0x100) * auVar1013[6] - (0xff < sVar1165)
                             );
            auVar636._9_6_ = 0;
            auVar636._0_9_ = Var362;
            auVar428._1_10_ = SUB1510(auVar636 << 0x30,5);
            auVar428[0] = (0 < sVar1109) * (sVar1109 < 0x100) * auVar1013[4] - (0xff < sVar1109);
            auVar637._11_4_ = 0;
            auVar637._0_11_ = auVar428;
            auVar429._1_12_ = SUB1512(auVar637 << 0x20,3);
            auVar429[0] = (0 < sVar1102) * (sVar1102 < 0x100) * auVar1013[2] - (0xff < sVar1102);
            auVar832._6_8_ = 0;
            auVar127[0xe] = cVar78;
            auVar127._0_14_ = auVar832 << 0x38;
            uVar358 = CONCAT26(auVar127._13_2_,
                               CONCAT15((0 < sVar1141) * (sVar1141 < 0x100) * auVar1243[0xc] -
                                        (0xff < sVar1141),uVar767));
            auVar780._4_8_ = 0;
            auVar780._0_4_ = uVar884;
            auVar223._12_3_ = (int3)((ulong)uVar358 >> 0x28);
            auVar223._0_12_ = auVar780 << 0x38;
            uVar356 = CONCAT44(auVar223._11_4_,
                               CONCAT13((0 < sVar1118) * (sVar1118 < 0x100) * auVar1243[10] -
                                        (0xff < sVar1118),uVar608));
            auVar308._10_5_ = (int5)((ulong)uVar356 >> 0x18);
            auVar308._0_10_ = (unkuint10)uVar1076 << 0x38;
            uVar944 = CONCAT62(auVar308._9_6_,
                               CONCAT11((0 < sVar1214) * (sVar1214 < 0x100) * auVar1243[8] -
                                        (0xff < sVar1214),cVar78));
            auVar430._7_8_ = 0;
            auVar430._0_7_ = (uint7)((ulong)uVar944 >> 8);
            Var398 = CONCAT81(SUB158(auVar430 << 0x40,7),
                              (0 < sVar1169) * (sVar1169 < 0x100) * auVar1243[6] - (0xff < sVar1169)
                             );
            auVar638._9_6_ = 0;
            auVar638._0_9_ = Var398;
            auVar431._1_10_ = SUB1510(auVar638 << 0x30,5);
            auVar431[0] = (0 < sVar1143) * (sVar1143 < 0x100) * auVar1243[4] - (0xff < sVar1143);
            auVar639._11_4_ = 0;
            auVar639._0_11_ = auVar431;
            auVar432._1_12_ = SUB1512(auVar639 << 0x20,3);
            auVar432[0] = (0 < sVar1021) * (sVar1021 < 0x100) * auVar1243[2] - (0xff < sVar1021);
            sVar1209 = (ushort)(byte)((0 < sVar1216) * (sVar1216 < 0x100) * auVar1013[0] -
                                     (0xff < sVar1216)) -
                       (ushort)(byte)((0 < sVar993) * (sVar993 < 0x100) * auVar1243[0] -
                                     (0xff < sVar993));
            sVar1211 = auVar429._0_2_ - auVar432._0_2_;
            sVar1213 = auVar428._0_2_ - auVar431._0_2_;
            sVar1215 = (short)Var362 - (short)Var398;
            sVar1216 = (short)((ulong)uVar903 >> 8) - (short)((ulong)uVar944 >> 8);
            sVar1218 = (short)((ulong)uVar1029 >> 0x18) - (short)((ulong)uVar356 >> 0x18);
            sVar1220 = (short)((ulong)uVar357 >> 0x28) - (short)((ulong)uVar358 >> 0x28);
            sVar1223 = (auVar126._13_2_ >> 8) - (auVar127._13_2_ >> 8);
            sVar1159 = (ushort)bVar39 - (ushort)bVar82;
            sVar1164 = (ushort)bVar38 - (ushort)bVar81;
            sVar1166 = (ushort)bVar37 - (ushort)bVar83;
            sVar1168 = (ushort)bVar35 - (ushort)bVar80;
            sVar1170 = (ushort)bVar34 - (ushort)bVar79;
            sVar1172 = (ushort)(byte)((0 < sVar1151) * (sVar1151 < 0x100) * auVar920[10] -
                                     (0xff < sVar1151)) -
                       (ushort)(byte)((0 < sVar1157) * (sVar1157 < 0x100) * auVar1063[10] -
                                     (0xff < sVar1157));
            sVar1174 = (ushort)(byte)((0 < sVar1174) * (sVar1174 < 0x100) * auVar920[0xc] -
                                     (0xff < sVar1174)) -
                       (ushort)(byte)((0 < sVar1176) * (sVar1176 < 0x100) * auVar1063[0xc] -
                                     (0xff < sVar1176));
            sVar1176 = (ushort)(byte)((0 < sVar1193) * (sVar1193 < 0x100) * auVar920[0xe] -
                                     (0xff < sVar1193)) -
                       (ushort)(byte)((0 < sVar1201) * (sVar1201 < 0x100) * auVar1063[0xe] -
                                     (0xff < sVar1201));
            auVar833._6_8_ = 0;
            auVar128[0xe] = cVar21;
            auVar128._0_14_ = auVar833 << 0x38;
            uVar357 = CONCAT26(auVar128._13_2_,
                               CONCAT15((0 < sVar1138) * (sVar1138 < 0x100) * auVar980[0xc] -
                                        (0xff < sVar1138),uVar765));
            auVar781._4_8_ = 0;
            auVar781._0_4_ = uVar891;
            auVar224._12_3_ = (int3)((ulong)uVar357 >> 0x28);
            auVar224._0_12_ = auVar781 << 0x38;
            uVar1029 = CONCAT44(auVar224._11_4_,
                                CONCAT13((0 < sVar1114) * (sVar1114 < 0x100) * auVar980[10] -
                                         (0xff < sVar1114),uVar606));
            auVar309._10_5_ = (int5)((ulong)uVar1029 >> 0x18);
            auVar309._0_10_ = (unkuint10)uVar1072 << 0x38;
            uVar903 = CONCAT62(auVar309._9_6_,
                               CONCAT11((0 < sVar1212) * (sVar1212 < 0x100) * auVar980[8] -
                                        (0xff < sVar1212),cVar21));
            auVar433._7_8_ = 0;
            auVar433._0_7_ = (uint7)((ulong)uVar903 >> 8);
            Var362 = CONCAT81(SUB158(auVar433 << 0x40,7),
                              (0 < sVar1167) * (sVar1167 < 0x100) * auVar980[6] - (0xff < sVar1167))
            ;
            auVar640._9_6_ = 0;
            auVar640._0_9_ = Var362;
            auVar434._1_10_ = SUB1510(auVar640 << 0x30,5);
            auVar434[0] = (0 < sVar1140) * (sVar1140 < 0x100) * auVar980[4] - (0xff < sVar1140);
            auVar641._11_4_ = 0;
            auVar641._0_11_ = auVar434;
            auVar435._1_12_ = SUB1512(auVar641 << 0x20,3);
            auVar435[0] = (0 < sVar1020) * (sVar1020 < 0x100) * auVar980[2] - (0xff < sVar1020);
            auVar834._6_8_ = 0;
            auVar129[0xe] = cVar69;
            auVar129._0_14_ = auVar834 << 0x38;
            uVar358 = CONCAT26(auVar129._13_2_,
                               CONCAT15((0 < sVar1144) * (sVar1144 < 0x100) * auVar1095[0xc] -
                                        (0xff < sVar1144),uVar769));
            auVar782._4_8_ = 0;
            auVar782._0_4_ = uVar877;
            auVar225._12_3_ = (int3)((ulong)uVar358 >> 0x28);
            auVar225._0_12_ = auVar782 << 0x38;
            uVar356 = CONCAT44(auVar225._11_4_,
                               CONCAT13((0 < sVar1121) * (sVar1121 < 0x100) * auVar1095[10] -
                                        (0xff < sVar1121),uVar610));
            auVar310._10_5_ = (int5)((ulong)uVar356 >> 0x18);
            auVar310._0_10_ = (unkuint10)uVar1082 << 0x38;
            uVar944 = CONCAT62(auVar310._9_6_,
                               CONCAT11((0 < sVar1106) * (sVar1106 < 0x100) * auVar1095[8] -
                                        (0xff < sVar1106),cVar69));
            auVar436._7_8_ = 0;
            auVar436._0_7_ = (uint7)((ulong)uVar944 >> 8);
            Var398 = CONCAT81(SUB158(auVar436 << 0x40,7),
                              (0 < sVar1192) * (sVar1192 < 0x100) * auVar1095[6] - (0xff < sVar1192)
                             );
            auVar642._9_6_ = 0;
            auVar642._0_9_ = Var398;
            auVar437._1_10_ = SUB1510(auVar642 << 0x30,5);
            auVar437[0] = (0 < sVar1146) * (sVar1146 < 0x100) * auVar1095[4] - (0xff < sVar1146);
            auVar643._11_4_ = 0;
            auVar643._0_11_ = auVar437;
            auVar438._1_12_ = SUB1512(auVar643 << 0x20,3);
            auVar438[0] = (0 < sVar1105) * (sVar1105 < 0x100) * auVar1095[2] - (0xff < sVar1105);
            sVar1215 = sVar1215 * sVar1215;
            uVar1086 = sVar1216 * sVar1216;
            auVar653._2_2_ = uVar1086;
            auVar653._0_2_ = sVar1215;
            sVar1216 = (ushort)(byte)((0 < sVar1195) * (sVar1195 < 0x100) * auVar980[0] -
                                     (0xff < sVar1195)) -
                       (ushort)(byte)((0 < sVar994) * (sVar994 < 0x100) * auVar1095[0] -
                                     (0xff < sVar994));
            sVar1195 = auVar435._0_2_ - auVar438._0_2_;
            sVar993 = auVar434._0_2_ - auVar437._0_2_;
            sVar994 = (short)Var362 - (short)Var398;
            sVar1102 = (short)((ulong)uVar903 >> 8) - (short)((ulong)uVar944 >> 8);
            sVar1020 = (short)((ulong)uVar1029 >> 0x18) - (short)((ulong)uVar356 >> 0x18);
            sVar1021 = (short)((ulong)uVar357 >> 0x28) - (short)((ulong)uVar358 >> 0x28);
            sVar1105 = (auVar128._13_2_ >> 8) - (auVar129._13_2_ >> 8);
            sVar1109 = (ushort)bVar47 - (ushort)bVar92;
            sVar1140 = (ushort)bVar45 - (ushort)bVar88;
            sVar1143 = (ushort)bVar49 - (ushort)bVar91;
            sVar1146 = (ushort)bVar44 - (ushort)bVar90;
            sVar1165 = (ushort)bVar43 - (ushort)bVar89;
            sVar1167 = (ushort)(byte)((0 < sVar1154) * (sVar1154 < 0x100) * auVar921[10] -
                                     (0xff < sVar1154)) -
                       (ushort)(byte)((0 < sVar1147) * (sVar1147 < 0x100) * auVar1185[10] -
                                     (0xff < sVar1147));
            sVar1169 = (ushort)(byte)((0 < sVar1179) * (sVar1179 < 0x100) * auVar921[0xc] -
                                     (0xff < sVar1179)) -
                       (ushort)(byte)((0 < sVar1190) * (sVar1190 < 0x100) * auVar1185[0xc] -
                                     (0xff < sVar1190));
            sVar1192 = (ushort)(byte)((0 < sVar1197) * (sVar1197 < 0x100) * auVar921[0xe] -
                                     (0xff < sVar1197)) -
                       (ushort)(byte)((0 < sVar1204) * (sVar1204 < 0x100) * auVar1185[0xe] -
                                     (0xff < sVar1204));
            auVar835._6_8_ = 0;
            auVar130[0xe] = cVar29;
            auVar130._0_14_ = auVar835 << 0x38;
            uVar357 = CONCAT26(auVar130._13_2_,
                               CONCAT15((uVar1238 != 0) * (uVar1238 < 0x100) * cVar20 -
                                        (0xff < uVar1238),uVar768));
            auVar783._4_8_ = 0;
            auVar783._0_4_ = uVar880;
            auVar226._12_3_ = (int3)((ulong)uVar357 >> 0x28);
            auVar226._0_12_ = auVar783 << 0x38;
            uVar1029 = CONCAT44(auVar226._11_4_,
                                CONCAT13((uVar1236 != 0) * (uVar1236 < 0x100) * cVar23 -
                                         (0xff < uVar1236),uVar609));
            auVar311._10_5_ = (int5)((ulong)uVar1029 >> 0x18);
            auVar311._0_10_ = (unkuint10)uVar1078 << 0x38;
            uVar903 = CONCAT62(auVar311._9_6_,
                               CONCAT11((uVar1234 != 0) * (uVar1234 < 0x100) * cVar25 -
                                        (0xff < uVar1234),cVar29));
            auVar439._7_8_ = 0;
            auVar439._0_7_ = (uint7)((ulong)uVar903 >> 8);
            Var362 = CONCAT81(SUB158(auVar439 << 0x40,7),
                              (uVar1233 != 0) * (uVar1233 < 0x100) * cVar33 - (0xff < uVar1233));
            auVar644._9_6_ = 0;
            auVar644._0_9_ = Var362;
            auVar440._1_10_ = SUB1510(auVar644 << 0x30,5);
            auVar440[0] = (uVar1231 != 0) * (uVar1231 < 0x100) * cVar28 - (0xff < uVar1231);
            auVar645._11_4_ = 0;
            auVar645._0_11_ = auVar440;
            auVar441._1_12_ = SUB1512(auVar645 << 0x20,3);
            auVar441[0] = (uVar1229 != 0) * (uVar1229 < 0x100) * cVar31 - (0xff < uVar1229);
            auVar836._6_8_ = 0;
            auVar131[0xe] = cVar6;
            auVar131._0_14_ = auVar836 << 0x38;
            uVar358 = CONCAT26(auVar131._13_2_,
                               CONCAT15((uVar1108 != 0) * (uVar1108 < 0x100) * cVar9 -
                                        (0xff < uVar1108),uVar760));
            auVar784._4_8_ = 0;
            auVar784._0_4_ = uVar890;
            auVar227._12_3_ = (int3)((ulong)uVar358 >> 0x28);
            auVar227._0_12_ = auVar784 << 0x38;
            uVar356 = CONCAT44(auVar227._11_4_,
                               CONCAT13((uVar1104 != 0) * (uVar1104 < 0x100) * cVar874 -
                                        (0xff < uVar1104),uVar589));
            auVar312._10_5_ = (int5)((ulong)uVar356 >> 0x18);
            auVar312._0_10_ = (unkuint10)uVar1045 << 0x38;
            uVar944 = CONCAT62(auVar312._9_6_,
                               CONCAT11((uVar1101 != 0) * (uVar1101 < 0x100) * cVar8 -
                                        (0xff < uVar1101),cVar6));
            auVar442._7_8_ = 0;
            auVar442._0_7_ = (uint7)((ulong)uVar944 >> 8);
            Var398 = CONCAT81(SUB158(auVar442 << 0x40,7),
                              (uVar1099 != 0) * (uVar1099 < 0x100) * cVar7 - (0xff < uVar1099));
            auVar646._9_6_ = 0;
            auVar646._0_9_ = Var398;
            auVar443._1_10_ = SUB1510(auVar646 << 0x30,5);
            auVar443[0] = (uVar1088 != 0) * (uVar1088 < 0x100) * cVar5 - (0xff < uVar1088);
            auVar647._11_4_ = 0;
            auVar647._0_11_ = auVar443;
            auVar444._1_12_ = SUB1512(auVar647 << 0x20,3);
            auVar444[0] = (uVar1085 != 0) * (uVar1085 < 0x100) * cVar4 - (0xff < uVar1085);
            sVar994 = sVar994 * sVar994;
            uVar939 = sVar1102 * sVar1102;
            auVar652._2_2_ = uVar939;
            auVar652._0_2_ = sVar994;
            sVar1179 = (ushort)(byte)((uVar1083 != 0) * (uVar1083 < 0x100) * bVar3 -
                                     (0xff < uVar1083)) -
                       (ushort)(byte)((uVar1224 != 0) * (uVar1224 < 0x100) * bVar53 -
                                     (0xff < uVar1224));
            sVar1190 = auVar444._0_2_ - auVar441._0_2_;
            sVar1193 = auVar443._0_2_ - auVar440._0_2_;
            sVar1197 = (short)Var398 - (short)Var362;
            sVar1102 = (short)((ulong)uVar944 >> 8) - (short)((ulong)uVar903 >> 8);
            sVar1201 = (short)((ulong)uVar356 >> 0x18) - (short)((ulong)uVar1029 >> 0x18);
            sVar1204 = (short)((ulong)uVar358 >> 0x28) - (short)((ulong)uVar357 >> 0x28);
            sVar1207 = (auVar131._13_2_ >> 8) - (auVar130._13_2_ >> 8);
            sVar1124 = (ushort)bVar18 - (ushort)bVar62;
            sVar1138 = (ushort)bVar36 - (ushort)bVar85;
            sVar1141 = (ushort)bVar40 - (ushort)bVar87;
            sVar1144 = (ushort)bVar41 - (ushort)bVar84;
            sVar1147 = (ushort)bVar42 - (ushort)bVar86;
            sVar1151 = (ushort)(byte)((uVar1098 != 0) * (uVar1098 < 0x100) * cVar22 -
                                     (0xff < uVar1098)) -
                       (ushort)(byte)((uVar1112 != 0) * (uVar1112 < 0x100) * cVar65 -
                                     (0xff < uVar1112));
            sVar1154 = (ushort)(byte)((uVar1103 != 0) * (uVar1103 < 0x100) * cVar19 -
                                     (0xff < uVar1103)) -
                       (ushort)(byte)((uVar1116 != 0) * (uVar1116 < 0x100) * cVar66 -
                                     (0xff < uVar1116));
            sVar1157 = (ushort)(byte)((uVar1115 != 0) * (uVar1115 < 0x100) * cVar24 -
                                     (0xff < uVar1115)) -
                       (ushort)(byte)((uVar1149 != 0) * (uVar1149 < 0x100) * cVar64 -
                                     (0xff < uVar1149));
            auVar837._6_8_ = 0;
            auVar132[0xe] = cVar58;
            auVar132._0_14_ = auVar837 << 0x38;
            uVar357 = CONCAT26(auVar132._13_2_,
                               CONCAT15((uVar1122 != 0) * (uVar1122 < 0x100) * cVar61 -
                                        (0xff < uVar1122),uVar770));
            auVar785._4_8_ = 0;
            auVar785._0_4_ = uVar887;
            auVar228._12_3_ = (int3)((ulong)uVar357 >> 0x28);
            auVar228._0_12_ = auVar785 << 0x38;
            uVar1029 = CONCAT44(auVar228._11_4_,
                                CONCAT13((uVar1202 != 0) * (uVar1202 < 0x100) * cVar55 -
                                         (0xff < uVar1202),uVar611));
            auVar313._10_5_ = (int5)((ulong)uVar1029 >> 0x18);
            auVar313._0_10_ = (unkuint10)uVar1084 << 0x38;
            uVar903 = CONCAT62(auVar313._9_6_,
                               CONCAT11((uVar1198 != 0) * (uVar1198 < 0x100) * cVar59 -
                                        (0xff < uVar1198),cVar58));
            auVar445._7_8_ = 0;
            auVar445._0_7_ = (uint7)((ulong)uVar903 >> 8);
            Var362 = CONCAT81(SUB158(auVar445 << 0x40,7),
                              (uVar1194 != 0) * (uVar1194 < 0x100) * cVar56 - (0xff < uVar1194));
            auVar648._9_6_ = 0;
            auVar648._0_9_ = Var362;
            auVar446._1_10_ = SUB1510(auVar648 << 0x30,5);
            auVar446[0] = (uVar1191 != 0) * (uVar1191 < 0x100) * cVar60 - (0xff < uVar1191);
            auVar649._11_4_ = 0;
            auVar649._0_11_ = auVar446;
            auVar447._1_12_ = SUB1512(auVar649 << 0x20,3);
            auVar447[0] = (uVar1188 != 0) * (uVar1188 < 0x100) * cVar57 - (0xff < uVar1188);
            auVar838._6_8_ = 0;
            auVar133[0xe] = cVar12;
            auVar133._0_14_ = auVar838 << 0x38;
            uVar358 = CONCAT26(auVar133._13_2_,
                               CONCAT15((uVar1079 != 0) * (uVar1079 < 0x100) * cVar13 -
                                        (0xff < uVar1079),uVar766));
            auVar786._4_8_ = 0;
            auVar786._0_4_ = uVar882;
            auVar229._12_3_ = (int3)((ulong)uVar358 >> 0x28);
            auVar229._0_12_ = auVar786 << 0x38;
            uVar356 = CONCAT44(auVar229._11_4_,
                               CONCAT13((uVar1077 != 0) * (uVar1077 < 0x100) * cVar14 -
                                        (0xff < uVar1077),uVar607));
            auVar314._10_5_ = (int5)((ulong)uVar356 >> 0x18);
            auVar314._0_10_ = (unkuint10)uVar1074 << 0x38;
            uVar944 = CONCAT62(auVar314._9_6_,
                               CONCAT11((uVar1075 != 0) * (uVar1075 < 0x100) * cVar16 -
                                        (0xff < uVar1075),cVar12));
            auVar448._7_8_ = 0;
            auVar448._0_7_ = (uint7)((ulong)uVar944 >> 8);
            Var398 = CONCAT81(SUB158(auVar448 << 0x40,7),
                              (uVar1073 != 0) * (uVar1073 < 0x100) * cVar15 - (0xff < uVar1073));
            auVar650._9_6_ = 0;
            auVar650._0_9_ = Var398;
            auVar449._1_10_ = SUB1510(auVar650 << 0x30,5);
            auVar449[0] = (uVar1046 != 0) * (uVar1046 < 0x100) * cVar11 - (0xff < uVar1046);
            auVar651._11_4_ = 0;
            auVar651._0_11_ = auVar449;
            auVar450._1_12_ = SUB1512(auVar651 << 0x20,3);
            auVar450[0] = (uVar1145 != 0) * (uVar1145 < 0x100) * cVar17 - (0xff < uVar1145);
            sVar1197 = sVar1197 * sVar1197;
            uVar1082 = sVar1102 * sVar1102;
            auVar654._2_2_ = uVar1082;
            auVar654._0_2_ = sVar1197;
            sVar1225 = (ushort)(byte)((uVar1142 != 0) * (uVar1142 < 0x100) * bVar10 -
                                     (0xff < uVar1142)) -
                       (ushort)(byte)((uVar1177 != 0) * (uVar1177 < 0x100) * bVar54 -
                                     (0xff < uVar1177));
            sVar1230 = auVar450._0_2_ - auVar447._0_2_;
            sVar1232 = auVar449._0_2_ - auVar446._0_2_;
            sVar1102 = (short)Var398 - (short)Var362;
            sVar1235 = (short)((ulong)uVar944 >> 8) - (short)((ulong)uVar903 >> 8);
            sVar1237 = (short)((ulong)uVar356 >> 0x18) - (short)((ulong)uVar1029 >> 0x18);
            sVar1239 = (short)((ulong)uVar358 >> 0x28) - (short)((ulong)uVar357 >> 0x28);
            sVar1240 = (auVar133._13_2_ >> 8) - (auVar132._13_2_ >> 8);
            sVar1196 = (ushort)bVar26 - (ushort)bVar70;
            sVar1212 = (ushort)bVar52 - (ushort)bVar93;
            sVar1214 = (ushort)bVar51 - (ushort)bVar94;
            sVar1106 = (ushort)bVar50 - (ushort)bVar95;
            sVar1110 = (ushort)bVar48 - (ushort)bVar96;
            sVar1114 = (ushort)(byte)((uVar1199 != 0) * (uVar1199 < 0x100) * cVar30 -
                                     (0xff < uVar1199)) -
                       (ushort)(byte)((uVar1100 != 0) * (uVar1100 < 0x100) * cVar71 -
                                     (0xff < uVar1100));
            sVar1118 = (ushort)(byte)((uVar1205 != 0) * (uVar1205 < 0x100) * cVar27 -
                                     (0xff < uVar1205)) -
                       (ushort)(byte)((uVar1107 != 0) * (uVar1107 < 0x100) * cVar72 -
                                     (0xff < uVar1107));
            sVar1121 = (ushort)(byte)((uVar1136 != 0) * (uVar1136 < 0x100) * cVar32 -
                                     (0xff < uVar1136)) -
                       (ushort)(byte)((uVar1119 != 0) * (uVar1119 < 0x100) * cVar76 -
                                     (0xff < uVar1119));
            sVar1168 = sVar1168 * sVar1168;
            uVar1078 = sVar1170 * sVar1170;
            auVar655._2_2_ = uVar1078;
            auVar655._0_2_ = sVar1168;
            sVar1146 = sVar1146 * sVar1146;
            uVar1045 = sVar1165 * sVar1165;
            auVar656._2_2_ = uVar1045;
            auVar656._0_2_ = sVar1146;
            sVar1102 = sVar1102 * sVar1102;
            uVar1072 = sVar1235 * sVar1235;
            auVar658._2_2_ = uVar1072;
            auVar658._0_2_ = sVar1102;
            auVar652._4_8_ = 0;
            auVar134._12_2_ = sVar994;
            auVar134._0_12_ = auVar652 << 0x30;
            uVar903 = CONCAT44(auVar134._10_4_,CONCAT22(sVar993 * sVar993,sVar994));
            auVar451._6_8_ = 0;
            auVar451._0_6_ = (uint6)((ulong)uVar903 >> 0x10);
            auVar653._4_8_ = 0;
            auVar135._12_2_ = sVar1215;
            auVar135._0_12_ = auVar653 << 0x30;
            uVar944 = CONCAT44(auVar135._10_4_,CONCAT22(sVar1213 * sVar1213,sVar1215));
            auVar452._6_8_ = 0;
            auVar452._0_6_ = (uint6)((ulong)uVar944 >> 0x10);
            sVar1144 = sVar1144 * sVar1144;
            uVar1076 = sVar1147 * sVar1147;
            auVar657._2_2_ = uVar1076;
            auVar657._0_2_ = sVar1144;
            auVar654._4_8_ = 0;
            auVar136._12_2_ = sVar1197;
            auVar136._0_12_ = auVar654 << 0x30;
            uVar1029 = CONCAT44(auVar136._10_4_,CONCAT22(sVar1193 * sVar1193,sVar1197));
            auVar453._6_8_ = 0;
            auVar453._0_6_ = (uint6)((ulong)uVar1029 >> 0x10);
            sVar1106 = sVar1106 * sVar1106;
            uVar1074 = sVar1110 * sVar1110;
            auVar659._2_2_ = uVar1074;
            auVar659._0_2_ = sVar1106;
            auVar655._4_8_ = 0;
            auVar137._12_2_ = sVar1168;
            auVar137._0_12_ = auVar655 << 0x30;
            uVar356 = CONCAT44(auVar137._10_4_,CONCAT22(sVar1166 * sVar1166,sVar1168));
            auVar454._6_8_ = 0;
            auVar454._0_6_ = (uint6)((ulong)uVar356 >> 0x10);
            auVar656._4_8_ = 0;
            auVar138._12_2_ = sVar1146;
            auVar138._0_12_ = auVar656 << 0x30;
            uVar357 = CONCAT44(auVar138._10_4_,CONCAT22(sVar1143 * sVar1143,sVar1146));
            auVar455._6_8_ = 0;
            auVar455._0_6_ = (uint6)((ulong)uVar357 >> 0x10);
            auVar657._4_8_ = 0;
            auVar139._12_2_ = sVar1144;
            auVar139._0_12_ = auVar657 << 0x30;
            uVar358 = CONCAT44(auVar139._10_4_,CONCAT22(sVar1141 * sVar1141,sVar1144));
            auVar456._6_8_ = 0;
            auVar456._0_6_ = (uint6)((ulong)uVar358 >> 0x10);
            auVar658._4_8_ = 0;
            auVar140._12_2_ = sVar1102;
            auVar140._0_12_ = auVar658 << 0x30;
            uVar359 = CONCAT44(auVar140._10_4_,CONCAT22(sVar1232 * sVar1232,sVar1102));
            auVar457._6_8_ = 0;
            auVar457._0_6_ = (uint6)((ulong)uVar359 >> 0x10);
            auVar659._4_8_ = 0;
            auVar141._12_2_ = sVar1106;
            auVar141._0_12_ = auVar659 << 0x30;
            uVar360 = CONCAT44(auVar141._10_4_,CONCAT22(sVar1214 * sVar1214,sVar1106));
            auVar458._6_8_ = 0;
            auVar458._0_6_ = (uint6)((ulong)uVar360 >> 0x10);
            iVar1044 = (int)((ulong)uVar903 >> 0x10) + (int)((ulong)uVar944 >> 0x10) +
                       (int)((ulong)uVar1029 >> 0x10) + (int)((ulong)uVar359 >> 0x10);
            iVar1081 = (int)((ulong)uVar357 >> 0x10) + (int)((ulong)uVar356 >> 0x10) +
                       (int)((ulong)uVar358 >> 0x10) + (int)((ulong)uVar360 >> 0x10);
            fVar898 = (float)((ulong)((uint)(ushort)(sVar1021 * sVar1021) +
                                      (uint)(ushort)(sVar1220 * sVar1220) +
                                      (uint)(ushort)(sVar1204 * sVar1204) +
                                     (uint)(ushort)(sVar1239 * sVar1239)) +
                              (ulong)((uint)uVar939 + (uint)uVar1086 + (uint)uVar1082 +
                                     (uint)uVar1072) +
                              CONCAT44(-(uint)(iVar1044 < 0),iVar1044) +
                              (ulong)((uint)(ushort)(sVar1216 * sVar1216) +
                                      (uint)(ushort)(sVar1209 * sVar1209) +
                                      (uint)(ushort)(sVar1179 * sVar1179) +
                                     (uint)(ushort)(sVar1225 * sVar1225)) +
                              CONCAT44(-(uint)(iVar1081 < 0),iVar1081) +
                              (ulong)((uint)(ushort)(sVar1109 * sVar1109) +
                                      (uint)(ushort)(sVar1159 * sVar1159) +
                                      (uint)(ushort)(sVar1124 * sVar1124) +
                                     (uint)(ushort)(sVar1196 * sVar1196)) +
                              (ulong)((uint)(ushort)(sVar1169 * sVar1169) +
                                      (uint)(ushort)(sVar1174 * sVar1174) +
                                      (uint)(ushort)(sVar1154 * sVar1154) +
                                     (uint)(ushort)(sVar1118 * sVar1118)) +
                              (ulong)((uint)uVar1045 + (uint)uVar1078 + (uint)uVar1076 +
                                     (uint)uVar1074) +
                              (ulong)((uint)(ushort)(sVar1105 * sVar1105) +
                                      (uint)(ushort)(sVar1223 * sVar1223) +
                                      (uint)(ushort)(sVar1207 * sVar1207) +
                                     (uint)(ushort)(sVar1240 * sVar1240)) +
                              (ulong)((uint)(ushort)(sVar1020 * sVar1020) +
                                      (uint)(ushort)(sVar1218 * sVar1218) +
                                      (uint)(ushort)(sVar1201 * sVar1201) +
                                     (uint)(ushort)(sVar1237 * sVar1237)) +
                              (ulong)((auVar134._10_4_ >> 0x10) + (auVar135._10_4_ >> 0x10) +
                                      (auVar136._10_4_ >> 0x10) + (auVar140._10_4_ >> 0x10)) +
                              (ulong)(uint)((int)CONCAT82(SUB148(auVar451 << 0x40,6),
                                                          sVar1195 * sVar1195) +
                                            (int)CONCAT82(SUB148(auVar452 << 0x40,6),
                                                          sVar1211 * sVar1211) +
                                            (int)CONCAT82(SUB148(auVar453 << 0x40,6),
                                                          sVar1190 * sVar1190) +
                                           (int)CONCAT82(SUB148(auVar457 << 0x40,6),
                                                         sVar1230 * sVar1230)) +
                              (ulong)((auVar138._10_4_ >> 0x10) + (auVar137._10_4_ >> 0x10) +
                                      (auVar139._10_4_ >> 0x10) + (auVar141._10_4_ >> 0x10)) +
                              (ulong)(uint)((int)CONCAT82(SUB148(auVar455 << 0x40,6),
                                                          sVar1140 * sVar1140) +
                                            (int)CONCAT82(SUB148(auVar454 << 0x40,6),
                                                          sVar1164 * sVar1164) +
                                            (int)CONCAT82(SUB148(auVar456 << 0x40,6),
                                                          sVar1138 * sVar1138) +
                                           (int)CONCAT82(SUB148(auVar458 << 0x40,6),
                                                         sVar1212 * sVar1212)) +
                              (ulong)((uint)(ushort)(sVar1192 * sVar1192) +
                                      (uint)(ushort)(sVar1176 * sVar1176) +
                                      (uint)(ushort)(sVar1157 * sVar1157) +
                                     (uint)(ushort)(sVar1121 * sVar1121)) +
                              (ulong)((uint)(ushort)(sVar1167 * sVar1167) +
                                      (uint)(ushort)(sVar1172 * sVar1172) +
                                      (uint)(ushort)(sVar1151 * sVar1151) +
                                     (uint)(ushort)(sVar1114 * sVar1114)) +
                              (ulong)((uint)(ushort)(sVar938 * sVar938) +
                                      (uint)(ushort)(sVar1219 * sVar1219) +
                                      (uint)(ushort)(sVar1203 * sVar1203) +
                                     (uint)(ushort)(sVar1153 * sVar1153)) +
                              (ulong)((uint)uVar897 + (uint)uVar1111 + (uint)uVar937 + (uint)uVar933
                                     ) +
                              CONCAT44(-(uint)(iVar1080 < 0),iVar1080) +
                              (ulong)((uint)(ushort)(sVar932 * sVar932) +
                                      (uint)(ushort)(sVar1208 * sVar1208) +
                                      (uint)(ushort)(sVar1178 * sVar1178) +
                                     (uint)(ushort)(sVar1123 * sVar1123)) +
                              CONCAT44(-(uint)(iVar1148 < 0),iVar1148) +
                              (ulong)((uint)(ushort)(sVar961 * sVar961) +
                                      (uint)(ushort)(sVar999 * sVar999) +
                                      (uint)(ushort)(sVar1158 * sVar1158) +
                                     (uint)(ushort)(sVar934 * sVar934)) +
                              (ulong)((uint)(ushort)(sVar997 * sVar997) +
                                      (uint)(ushort)(sVar1023 * sVar1023) +
                                      (uint)(ushort)(sVar1173 * sVar1173) +
                                     (uint)(ushort)(sVar1117 * sVar1117)) +
                              (ulong)((uint)uVar929 + (uint)uVar931 + (uint)uVar935 + (uint)uVar930)
                              + (ulong)((uint)(ushort)(sVar940 * sVar940) +
                                        (uint)(ushort)(sVar1221 * sVar1221) +
                                        (uint)(ushort)(sVar1206 * sVar1206) +
                                       (uint)(ushort)(sVar1156 * sVar1156)) +
                                (ulong)((uint)(ushort)(sVar936 * sVar936) +
                                        (uint)(ushort)(sVar1217 * sVar1217) +
                                        (uint)(ushort)(sVar1200 * sVar1200) +
                                       (uint)(ushort)(sVar1150 * sVar1150)) +
                                (ulong)((auVar119._10_4_ >> 0x10) + (auVar118._10_4_ >> 0x10) +
                                        (auVar120._10_4_ >> 0x10) + (auVar123._10_4_ >> 0x10)) +
                                (ulong)(uint)((int)CONCAT82(SUB148(auVar420 << 0x40,6),
                                                            sVar958 * sVar958) +
                                              (int)CONCAT82(SUB148(auVar419 << 0x40,6),
                                                            sVar1210 * sVar1210) +
                                              (int)CONCAT82(SUB148(auVar421 << 0x40,6),
                                                            sVar1189 * sVar1189) +
                                             (int)CONCAT82(SUB148(auVar424 << 0x40,6),
                                                           sVar1137 * sVar1137)) +
                                (ulong)((auVar122._10_4_ >> 0x10) + (auVar121._10_4_ >> 0x10) +
                                        (auVar124._10_4_ >> 0x10) + (auVar125._10_4_ >> 0x10)) +
                                (ulong)(uint)((int)CONCAT82(SUB148(auVar423 << 0x40,6),
                                                            sVar992 * sVar992) +
                                              (int)CONCAT82(SUB148(auVar422 << 0x40,6),
                                                            sVar1019 * sVar1019) +
                                              (int)CONCAT82(SUB148(auVar425 << 0x40,6),
                                                            sVar1163 * sVar1163) +
                                             (int)CONCAT82(SUB148(auVar426 << 0x40,6),
                                                           sVar995 * sVar995)) +
                                (ulong)((uint)(ushort)(sVar998 * sVar998) +
                                        (uint)(ushort)(sVar1024 * sVar1024) +
                                        (uint)(ushort)(sVar1175 * sVar1175) +
                                       (uint)(ushort)(sVar1120 * sVar1120)) +
                                (ulong)((uint)(ushort)(sVar996 * sVar996) +
                                        (uint)(ushort)(sVar1022 * sVar1022) +
                                        (uint)(ushort)(sVar1171 * sVar1171) +
                                       (uint)(ushort)(sVar1113 * sVar1113)) >> 1) * __LC47;
            if (fVar898 < 0.0) {
              fVar899 = sqrtf(fVar898);
            }
            else {
              fVar899 = SQRT(fVar898);
            }
            uVar891 = (uint)(byte)g_uastc_mode_selector_bits[(ulong)uVar892 * 2];
            bVar3 = g_uastc_mode_selector_bits[(ulong)uVar892 * 2 + 1];
            uVar890 = (uint)(byte)g_uastc_mode_selector_bits[(ulong)uVar892 * 2];
            uVar1180 = 0x40;
            if (bVar3 < 0x41) {
              uVar1180 = (uint)bVar3;
            }
            local_4b8 = 0;
            uVar882 = (uint)bVar3;
            if (uVar882 != 0) {
              uVar884 = 0;
              do {
                uVar880 = uVar891 & 7;
                iVar1080 = 8 - uVar880;
                if ((int)(uVar1180 - uVar884) < iVar1080) {
                  iVar1080 = uVar1180 - uVar884;
                }
                uVar877 = uVar891 >> 3;
                uVar891 = uVar891 + iVar1080;
                uVar887 = uVar884 + iVar1080;
                local_4b8 = local_4b8 |
                            (long)(int)((int)(uint)(byte)(param_3 + local_5f0)[uVar877] >>
                                        (sbyte)uVar880 & (1 << ((byte)iVar1080 & 0x1f)) - 1U) <<
                            ((byte)uVar884 & 0x3f);
                uVar884 = uVar887;
              } while (uVar887 < uVar1180);
            }
            local_4b0 = uVar890;
            if (*(float *)(param_5 + 0xc) <= fVar899) {
              local_4ac = 0;
              local_4a8 = iVar876;
              lVar943 = std::
                        _Hashtable<basisu::selector_bitsequence,std::pair<basisu::selector_bitsequence_const,unsigned_int>,std::allocator<std::pair<basisu::selector_bitsequence_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<basisu::selector_bitsequence>,basisu::selector_bitsequence_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
                        ::_M_emplace<std::pair<basisu::selector_bitsequence,unsigned_int>>
                                  (&local_498);
              if (extraout_DL == '\0') {
                *(int *)(lVar943 + 0x18) = iVar876;
              }
              *param_7 = *param_7 + 1;
              goto LAB_0010c3ec;
            }
            local_4ac = 0;
            lVar943 = std::
                      _Hashtable<basisu::selector_bitsequence,std::pair<basisu::selector_bitsequence_const,unsigned_int>,std::allocator<std::pair<basisu::selector_bitsequence_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<basisu::selector_bitsequence>,basisu::selector_bitsequence_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
                      ::find((_Hashtable<basisu::selector_bitsequence,std::pair<basisu::selector_bitsequence_const,unsigned_int>,std::allocator<std::pair<basisu::selector_bitsequence_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<basisu::selector_bitsequence>,basisu::selector_bitsequence_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
                              *)&local_498,(selector_bitsequence *)&local_4b8);
            if (lVar943 == 0) {
              uVar891 = (uVar882 * *(int *)(param_5 + 0x1c)) / 100;
            }
            else {
              uVar891 = (iVar876 - *(int *)(lVar943 + 0x18)) * 0x10;
              uVar883 = (ulong)uVar891;
              if (uVar891 < 0x200) {
                iVar1080 = (byte)g_tdefl_small_dist_extra[uVar883] + 5;
              }
              else {
                uVar884 = 0x7fff;
                if (uVar891 < 0x8000) {
                  uVar884 = uVar891;
                }
                iVar1080 = (byte)g_tdefl_large_dist_extra[uVar884 >> 8] + 5;
                while (0x7fff < uVar891) {
                  uVar883 = uVar883 >> 1;
                  iVar1080 = iVar1080 + 1;
                  uVar891 = (uint)uVar883;
                }
              }
              uVar891 = iVar1080 + 7;
            }
            uVar884 = (local_5a4 - uVar875) + 1;
            if ((int)uVar884 < (int)param_1) {
              uVar884 = param_1;
            }
            local_50c = (float)(int)uVar891 * *(float *)(param_5 + 4) + fVar898 * fVar1025;
            local_5c8 = *(undefined1 (*) [16])(param_3 + local_5f0);
            local_448 = *(undefined1 (*) [16])(param_3 + local_5f0);
            if ((int)uVar884 <= local_5a4) {
              uVar883 = (1L << ((byte)uVar1180 & 0x3f)) - 1;
              if (0x3f < uVar882) {
                uVar883 = 0xffffffffffffffff;
              }
              uVar891 = 0x40;
              if (0x3f >= uVar882) {
                uVar891 = uVar1180;
              }
              uVar880 = uVar882 - 0x40;
              uVar885 = 0xffffffffffffffff;
              if (uVar880 != 0x40) {
                uVar885 = (1L << ((byte)uVar880 & 0x3f)) - 1;
              }
              puVar896 = param_3 + (long)local_5a4 * 0x10;
              local_4f4 = iVar876;
              do {
                uVar895 = 0;
                uVar877 = uVar890;
                if (uVar882 != 0) {
                  uVar887 = 0;
                  do {
                    uVar881 = uVar877 & 7;
                    iVar1080 = 8 - uVar881;
                    if ((int)(uVar1180 - uVar887) < iVar1080) {
                      iVar1080 = uVar1180 - uVar887;
                    }
                    uVar878 = uVar877 >> 3;
                    uVar877 = uVar877 + iVar1080;
                    uVar888 = uVar887 + iVar1080;
                    uVar895 = uVar895 | (long)(int)((int)(uint)(byte)puVar896[uVar878] >>
                                                    (sbyte)uVar881 &
                                                   (1 << ((byte)iVar1080 & 0x1f)) - 1U) <<
                                        ((byte)uVar887 & 0x3f);
                    uVar887 = uVar888;
                  } while (uVar888 < uVar1180);
                }
                local_4ac = 0;
                local_4b8 = uVar895;
                local_4b0 = uVar890;
                lVar943 = std::
                          _Hashtable<basisu::selector_bitsequence,std::pair<basisu::selector_bitsequence_const,unsigned_int>,std::allocator<std::pair<basisu::selector_bitsequence_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<basisu::selector_bitsequence>,basisu::selector_bitsequence_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
                          ::find((_Hashtable<basisu::selector_bitsequence,std::pair<basisu::selector_bitsequence_const,unsigned_int>,std::allocator<std::pair<basisu::selector_bitsequence_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<basisu::selector_bitsequence>,basisu::selector_bitsequence_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
                                  *)&local_498,(selector_bitsequence *)&local_4b8);
                if (lVar943 == 0) {
                  local_5c8._0_4_ = local_5a4;
LAB_0010c8c4:
                  cVar874 = basist::unpack_uastc
                                      (puVar896,(unpacked_uastc_block *)&local_198,false,true);
                  if (cVar874 == '\0') goto LAB_0010c802;
                  local_438 = *(undefined8 *)(param_3 + local_5f0);
                  uStack_430 = *(undefined8 *)(param_3 + local_5f0 + 8);
                  uVar886 = uVar883;
                  uVar881 = uVar891;
                  uVar887 = uVar890;
                  if (bVar3 != 0) {
                    do {
                      uVar878 = 8 - (uVar887 & 7);
                      if (uVar881 < uVar878) {
                        uVar878 = uVar881;
                      }
                      pbVar889 = (byte *)((long)&local_438 + (ulong)(uVar887 >> 3));
                      sVar879 = (sbyte)(uVar887 & 7);
                      lVar943 = uVar895 << sVar879;
                      uVar895 = uVar895 >> ((byte)uVar878 & 0x3f);
                      *pbVar889 = ~(byte)(uVar886 << sVar879) & *pbVar889 | (byte)lVar943;
                      uVar881 = uVar881 - uVar878;
                      uVar886 = uVar886 >> ((byte)uVar878 & 0x3f);
                      uVar887 = uVar887 + uVar878;
                    } while (uVar881 != 0);
                    if (0x40 < uVar882) {
                      uVar895 = 0;
                      uVar887 = 0;
                      do {
                        uVar881 = uVar877 & 7;
                        iVar1080 = 8 - uVar881;
                        if ((int)(uVar880 - uVar887) < iVar1080) {
                          iVar1080 = uVar880 - uVar887;
                        }
                        uVar878 = uVar877 >> 3;
                        uVar877 = uVar877 + iVar1080;
                        uVar888 = uVar887 + iVar1080;
                        uVar895 = uVar895 | (long)(int)((int)(uint)(byte)puVar896[uVar878] >>
                                                        (sbyte)uVar881 &
                                                       (1 << ((byte)iVar1080 & 0x1f)) - 1U) <<
                                            ((byte)uVar887 & 0x3f);
                        uVar887 = uVar888;
                      } while (uVar888 < uVar880);
                      uVar877 = uVar890 + 0x40;
                      uVar886 = uVar885;
                      uVar887 = uVar880;
                      do {
                        uVar881 = 8 - (uVar877 & 7);
                        if (uVar887 < uVar881) {
                          uVar881 = uVar887;
                        }
                        pbVar889 = (byte *)((long)&local_438 + (ulong)(uVar877 >> 3));
                        sVar879 = (sbyte)(uVar877 & 7);
                        lVar943 = uVar886 << sVar879;
                        lVar1125 = uVar895 << sVar879;
                        uVar895 = uVar895 >> ((byte)uVar881 & 0x3f);
                        uVar886 = uVar886 >> ((byte)uVar881 & 0x3f);
                        uVar877 = uVar877 + uVar881;
                        *pbVar889 = ~(byte)lVar943 & *pbVar889 | (byte)lVar1125;
                        uVar887 = uVar887 - uVar881;
                      } while (uVar887 != 0);
                    }
                  }
                  cVar874 = basist::unpack_uastc
                                      ((uastc_block *)&local_438,(unpacked_uastc_block *)&local_f8,
                                       false,true);
                  if ((cVar874 != '\0') &&
                     (cVar874 = basist::unpack_uastc
                                          ((unpacked_uastc_block *)&local_f8,&local_398,false),
                     cVar874 != '\0')) {
                    auVar1067[1] = bStack_397;
                    auVar1067[0] = local_398;
                    auVar1067._2_6_ = uStack_396;
                    auVar1067._8_8_ = uStack_390;
                    uVar903 = *(undefined8 *)pcVar1;
                    uVar944 = *(undefined8 *)(pcVar1 + 8);
                    auVar1067 = auVar1067 & __LC6;
                    uVar1029 = *(undefined8 *)(pcVar1 + 0x10);
                    uVar356 = *(undefined8 *)(pcVar1 + 0x18);
                    auVar1095 = *(undefined1 (*) [16])pcVar1 & __LC6;
                    uVar357 = *(undefined8 *)(pcVar1 + 0x20);
                    uVar358 = *(undefined8 *)(pcVar1 + 0x28);
                    uVar1045 = (ushort)uVar903 >> 8;
                    uVar1072 = (ushort)((ulong)uVar903 >> 0x10) >> 8;
                    uVar1074 = (ushort)((ulong)uVar903 >> 0x20) >> 8;
                    uVar1076 = (ushort)((ulong)uVar903 >> 0x38);
                    uVar1078 = (ushort)uVar944 >> 8;
                    uVar1082 = (ushort)((ulong)uVar944 >> 0x10) >> 8;
                    uVar1084 = (ushort)((ulong)uVar944 >> 0x20) >> 8;
                    uVar1086 = (ushort)((ulong)uVar944 >> 0x38);
                    auVar921 = *(undefined1 (*) [16])(pcVar1 + 0x10) & __LC6;
                    uVar359 = *(undefined8 *)(pcVar1 + 0x30);
                    uVar360 = *(undefined8 *)(pcVar1 + 0x38);
                    sVar932 = auVar1095._0_2_;
                    sVar958 = auVar1095._2_2_;
                    bVar10 = (0 < sVar958) * (sVar958 < 0x100) * auVar1095[2] - (0xff < sVar958);
                    sVar958 = auVar1095._4_2_;
                    sVar1216 = auVar1095._6_2_;
                    cVar874 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar1095[6] - (0xff < sVar1216)
                    ;
                    uVar901 = CONCAT13(cVar874,CONCAT12((0 < sVar958) * (sVar958 < 0x100) *
                                                        auVar1095[4] - (0xff < sVar958),
                                                        CONCAT11(bVar10,(0 < sVar932) *
                                                                        (sVar932 < 0x100) *
                                                                        auVar1095[0] -
                                                                        (0xff < sVar932))));
                    sVar932 = auVar1095._8_2_;
                    sVar958 = auVar1095._10_2_;
                    cVar9 = (0 < sVar958) * (sVar958 < 0x100) * auVar1095[10] - (0xff < sVar958);
                    uVar902 = CONCAT15(cVar9,CONCAT14((0 < sVar932) * (sVar932 < 0x100) *
                                                      auVar1095[8] - (0xff < sVar932),uVar901));
                    sVar932 = auVar1095._12_2_;
                    sVar958 = auVar1095._14_2_;
                    cVar8 = (0 < sVar958) * (sVar958 < 0x100) * auVar1095[0xe] - (0xff < sVar958);
                    uVar1000 = CONCAT17(cVar8,CONCAT16((0 < sVar932) * (sVar932 < 0x100) *
                                                       auVar1095[0xc] - (0xff < sVar932),uVar902));
                    sVar932 = auVar921._0_2_;
                    sVar958 = auVar921._2_2_;
                    cVar6 = (0 < sVar958) * (sVar958 < 0x100) * auVar921[2] - (0xff < sVar958);
                    auVar1002._0_10_ =
                         CONCAT19(cVar6,CONCAT18((0 < sVar932) * (sVar932 < 0x100) * auVar921[0] -
                                                 (0xff < sVar932),uVar1000));
                    sVar932 = auVar921._4_2_;
                    auVar1002[10] =
                         (0 < sVar932) * (sVar932 < 0x100) * auVar921[4] - (0xff < sVar932);
                    sVar932 = auVar921._6_2_;
                    cVar4 = (0 < sVar932) * (sVar932 < 0x100) * auVar921[6] - (0xff < sVar932);
                    auVar1002[0xb] = cVar4;
                    sVar932 = auVar921._8_2_;
                    auVar1008[0xc] =
                         (0 < sVar932) * (sVar932 < 0x100) * auVar921[8] - (0xff < sVar932);
                    auVar1008._0_12_ = auVar1002;
                    sVar932 = auVar921._10_2_;
                    cVar5 = (0 < sVar932) * (sVar932 < 0x100) * auVar921[10] - (0xff < sVar932);
                    auVar1008[0xd] = cVar5;
                    sVar932 = auVar921._12_2_;
                    auVar1014[0xe] =
                         (0 < sVar932) * (sVar932 < 0x100) * auVar921[0xc] - (0xff < sVar932);
                    auVar1014._0_14_ = auVar1008;
                    sVar932 = auVar921._14_2_;
                    cVar7 = (0 < sVar932) * (sVar932 < 0x100) * auVar921[0xe] - (0xff < sVar932);
                    auVar1014[0xf] = cVar7;
                    auVar1095 = *(undefined1 (*) [16])(pcVar1 + 0x20) & __LC6;
                    uVar897 = (ushort)uVar1029 >> 8;
                    uVar929 = (ushort)((ulong)uVar1029 >> 0x10) >> 8;
                    uVar930 = (ushort)((ulong)uVar1029 >> 0x20) >> 8;
                    uVar931 = (ushort)((ulong)uVar1029 >> 0x38);
                    uVar933 = (ushort)uVar356 >> 8;
                    uVar935 = (ushort)((ulong)uVar356 >> 0x10) >> 8;
                    uVar937 = (ushort)((ulong)uVar356 >> 0x20) >> 8;
                    uVar939 = (ushort)((ulong)uVar356 >> 0x38);
                    auVar1013 = __LC6 & auVar1014;
                    uVar1198 = (ushort)uVar359 >> 8;
                    uVar1199 = (ushort)((ulong)uVar359 >> 0x10) >> 8;
                    uVar1202 = (ushort)((ulong)uVar359 >> 0x20) >> 8;
                    uVar1073 = (ushort)((ulong)uVar359 >> 0x38);
                    uVar1075 = (ushort)uVar360 >> 8;
                    uVar1077 = (ushort)((ulong)uVar360 >> 0x10) >> 8;
                    uVar1079 = (ushort)((ulong)uVar360 >> 0x20) >> 8;
                    uVar1083 = (ushort)((ulong)uVar360 >> 0x38);
                    uVar1205 = (ushort)bVar10;
                    uVar1122 = (ushort)((uint)uVar901 >> 0x18);
                    uVar1136 = (ushort)((uint6)uVar902 >> 0x28);
                    uVar1139 = (ushort)((ulong)uVar1000 >> 0x38);
                    uVar1142 = (ushort)((unkuint10)auVar1002._0_10_ >> 0x48);
                    uVar1145 = auVar1002._10_2_ >> 8;
                    uVar1046 = auVar1008._12_2_ >> 8;
                    uVar959 = auVar1014._14_2_ >> 8;
                    bVar18 = (uVar1072 != 0) * (uVar1072 < 0x100) * (char)((ulong)uVar903 >> 0x18) -
                             (0xff < uVar1072);
                    cVar13 = (uVar1076 != 0) * (uVar1076 < 0x100) * (char)((ulong)uVar903 >> 0x38) -
                             (0xff < uVar1076);
                    uVar901 = CONCAT13(cVar13,CONCAT12((uVar1074 != 0) * (uVar1074 < 0x100) *
                                                       (char)((ulong)uVar903 >> 0x28) -
                                                       (0xff < uVar1074),
                                                       CONCAT11(bVar18,(uVar1045 != 0) *
                                                                       (uVar1045 < 0x100) *
                                                                       (char)((ulong)uVar903 >> 8) -
                                                                       (0xff < uVar1045))));
                    cVar11 = (uVar1082 != 0) * (uVar1082 < 0x100) * (char)((ulong)uVar944 >> 0x18) -
                             (0xff < uVar1082);
                    uVar902 = CONCAT15(cVar11,CONCAT14((uVar1078 != 0) * (uVar1078 < 0x100) *
                                                       (char)((ulong)uVar944 >> 8) -
                                                       (0xff < uVar1078),uVar901));
                    cVar17 = (uVar1086 != 0) * (uVar1086 < 0x100) * (char)((ulong)uVar944 >> 0x38) -
                             (0xff < uVar1086);
                    uVar903 = CONCAT17(cVar17,CONCAT16((uVar1084 != 0) * (uVar1084 < 0x100) *
                                                       (char)((ulong)uVar944 >> 0x28) -
                                                       (0xff < uVar1084),uVar902));
                    cVar15 = (uVar929 != 0) * (uVar929 < 0x100) * (char)((ulong)uVar1029 >> 0x18) -
                             (0xff < uVar929);
                    auVar947._0_10_ =
                         CONCAT19(cVar15,CONCAT18((uVar897 != 0) * (uVar897 < 0x100) *
                                                  (char)((ulong)uVar1029 >> 8) - (0xff < uVar897),
                                                  uVar903));
                    auVar947[10] = (uVar930 != 0) * (uVar930 < 0x100) *
                                   (char)((ulong)uVar1029 >> 0x28) - (0xff < uVar930);
                    cVar12 = (uVar931 != 0) * (uVar931 < 0x100) * (char)((ulong)uVar1029 >> 0x38) -
                             (0xff < uVar931);
                    auVar947[0xb] = cVar12;
                    auVar952[0xc] =
                         (uVar933 != 0) * (uVar933 < 0x100) * (char)((ulong)uVar356 >> 8) -
                         (0xff < uVar933);
                    auVar952._0_12_ = auVar947;
                    cVar14 = (uVar935 != 0) * (uVar935 < 0x100) * (char)((ulong)uVar356 >> 0x18) -
                             (0xff < uVar935);
                    auVar952[0xd] = cVar14;
                    auVar955[0xe] =
                         (uVar937 != 0) * (uVar937 < 0x100) * (char)((ulong)uVar356 >> 0x28) -
                         (0xff < uVar937);
                    auVar955._0_14_ = auVar952;
                    cVar16 = (uVar939 != 0) * (uVar939 < 0x100) * (char)((ulong)uVar356 >> 0x38) -
                             (0xff < uVar939);
                    auVar955[0xf] = cVar16;
                    auVar1063 = __LC6 & auVar955;
                    auVar921 = *(undefined1 (*) [16])(pcVar1 + 0x30) & __LC6;
                    uVar1087 = (ushort)bVar18;
                    uVar1098 = (ushort)((uint)uVar901 >> 0x18);
                    uVar1100 = (ushort)((uint6)uVar902 >> 0x28);
                    uVar1103 = (ushort)((ulong)uVar903 >> 0x38);
                    uVar1111 = (ushort)((unkuint10)auVar947._0_10_ >> 0x48);
                    uVar1119 = auVar947._10_2_ >> 8;
                    uVar1188 = auVar952._12_2_ >> 8;
                    uVar1045 = auVar955._14_2_ >> 8;
                    sVar932 = auVar1095._0_2_;
                    sVar958 = auVar1095._2_2_;
                    bVar26 = (0 < sVar958) * (sVar958 < 0x100) * auVar1095[2] - (0xff < sVar958);
                    sVar958 = auVar1095._4_2_;
                    sVar1216 = auVar1095._6_2_;
                    cVar21 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar1095[6] - (0xff < sVar1216);
                    uVar941 = CONCAT13(cVar21,CONCAT12((0 < sVar958) * (sVar958 < 0x100) *
                                                       auVar1095[4] - (0xff < sVar958),
                                                       CONCAT11(bVar26,(0 < sVar932) *
                                                                       (sVar932 < 0x100) *
                                                                       auVar1095[0] -
                                                                       (0xff < sVar932))));
                    sVar932 = auVar1095._8_2_;
                    sVar958 = auVar1095._10_2_;
                    cVar19 = (0 < sVar958) * (sVar958 < 0x100) * auVar1095[10] - (0xff < sVar958);
                    uVar942 = CONCAT15(cVar19,CONCAT14((0 < sVar932) * (sVar932 < 0x100) *
                                                       auVar1095[8] - (0xff < sVar932),uVar941));
                    sVar932 = auVar1095._12_2_;
                    sVar958 = auVar1095._14_2_;
                    cVar25 = (0 < sVar958) * (sVar958 < 0x100) * auVar1095[0xe] - (0xff < sVar958);
                    uVar944 = CONCAT17(cVar25,CONCAT16((0 < sVar932) * (sVar932 < 0x100) *
                                                       auVar1095[0xc] - (0xff < sVar932),uVar942));
                    sVar932 = auVar921._0_2_;
                    sVar958 = auVar921._2_2_;
                    cVar23 = (0 < sVar958) * (sVar958 < 0x100) * auVar921[2] - (0xff < sVar958);
                    auVar964._0_10_ =
                         CONCAT19(cVar23,CONCAT18((0 < sVar932) * (sVar932 < 0x100) * auVar921[0] -
                                                  (0xff < sVar932),uVar944));
                    sVar932 = auVar921._4_2_;
                    auVar964[10] = (0 < sVar932) * (sVar932 < 0x100) * auVar921[4] -
                                   (0xff < sVar932);
                    sVar932 = auVar921._6_2_;
                    cVar20 = (0 < sVar932) * (sVar932 < 0x100) * auVar921[6] - (0xff < sVar932);
                    auVar964[0xb] = cVar20;
                    sVar932 = auVar921._8_2_;
                    auVar973[0xc] =
                         (0 < sVar932) * (sVar932 < 0x100) * auVar921[8] - (0xff < sVar932);
                    auVar973._0_12_ = auVar964;
                    sVar932 = auVar921._10_2_;
                    cVar22 = (0 < sVar932) * (sVar932 < 0x100) * auVar921[10] - (0xff < sVar932);
                    auVar973[0xd] = cVar22;
                    sVar932 = auVar921._12_2_;
                    auVar983[0xe] =
                         (0 < sVar932) * (sVar932 < 0x100) * auVar921[0xc] - (0xff < sVar932);
                    auVar983._0_14_ = auVar973;
                    sVar932 = auVar921._14_2_;
                    cVar24 = (0 < sVar932) * (sVar932 < 0x100) * auVar921[0xe] - (0xff < sVar932);
                    auVar983[0xf] = cVar24;
                    uVar897 = (ushort)uVar357 >> 8;
                    uVar929 = (ushort)((ulong)uVar357 >> 0x10) >> 8;
                    uVar930 = (ushort)((ulong)uVar357 >> 0x20) >> 8;
                    uVar931 = (ushort)((ulong)uVar357 >> 0x38);
                    uVar933 = (ushort)uVar358 >> 8;
                    uVar935 = (ushort)((ulong)uVar358 >> 0x10) >> 8;
                    uVar937 = (ushort)((ulong)uVar358 >> 0x20) >> 8;
                    uVar939 = (ushort)((ulong)uVar358 >> 0x38);
                    uVar1082 = local_368._0_2_ >> 8;
                    uVar1086 = local_368._2_2_ >> 8;
                    uVar960 = local_368._4_2_ >> 8;
                    uVar1107 = local_368._6_2_ >> 8;
                    uVar1115 = local_368._8_2_ >> 8;
                    uVar1177 = local_368._10_2_ >> 8;
                    uVar1191 = local_368._12_2_ >> 8;
                    uVar1194 = local_368._14_2_ >> 8;
                    bVar39 = (uVar929 != 0) * (uVar929 < 0x100) * (char)((ulong)uVar357 >> 0x18) -
                             (0xff < uVar929);
                    cVar29 = (uVar931 != 0) * (uVar931 < 0x100) * (char)((ulong)uVar357 >> 0x38) -
                             (0xff < uVar931);
                    uVar901 = CONCAT13(cVar29,CONCAT12((uVar930 != 0) * (uVar930 < 0x100) *
                                                       (char)((ulong)uVar357 >> 0x28) -
                                                       (0xff < uVar930),
                                                       CONCAT11(bVar39,(uVar897 != 0) *
                                                                       (uVar897 < 0x100) *
                                                                       (char)((ulong)uVar357 >> 8) -
                                                                       (0xff < uVar897))));
                    cVar27 = (uVar935 != 0) * (uVar935 < 0x100) * (char)((ulong)uVar358 >> 0x18) -
                             (0xff < uVar935);
                    uVar902 = CONCAT15(cVar27,CONCAT14((uVar933 != 0) * (uVar933 < 0x100) *
                                                       (char)((ulong)uVar358 >> 8) -
                                                       (0xff < uVar933),uVar901));
                    cVar33 = (uVar939 != 0) * (uVar939 < 0x100) * (char)((ulong)uVar358 >> 0x38) -
                             (0xff < uVar939);
                    uVar903 = CONCAT17(cVar33,CONCAT16((uVar937 != 0) * (uVar937 < 0x100) *
                                                       (char)((ulong)uVar358 >> 0x28) -
                                                       (0xff < uVar937),uVar902));
                    cVar31 = (uVar1199 != 0) * (uVar1199 < 0x100) * (char)((ulong)uVar359 >> 0x18) -
                             (0xff < uVar1199);
                    auVar908._0_10_ =
                         CONCAT19(cVar31,CONCAT18((uVar1198 != 0) * (uVar1198 < 0x100) *
                                                  (char)((ulong)uVar359 >> 8) - (0xff < uVar1198),
                                                  uVar903));
                    auVar908[10] = (uVar1202 != 0) * (uVar1202 < 0x100) *
                                   (char)((ulong)uVar359 >> 0x28) - (0xff < uVar1202);
                    cVar28 = (uVar1073 != 0) * (uVar1073 < 0x100) * (char)((ulong)uVar359 >> 0x38) -
                             (0xff < uVar1073);
                    auVar908[0xb] = cVar28;
                    auVar916[0xc] =
                         (uVar1075 != 0) * (uVar1075 < 0x100) * (char)((ulong)uVar360 >> 8) -
                         (0xff < uVar1075);
                    auVar916._0_12_ = auVar908;
                    cVar30 = (uVar1077 != 0) * (uVar1077 < 0x100) * (char)((ulong)uVar360 >> 0x18) -
                             (0xff < uVar1077);
                    auVar916[0xd] = cVar30;
                    auVar924[0xe] =
                         (uVar1079 != 0) * (uVar1079 < 0x100) * (char)((ulong)uVar360 >> 0x28) -
                         (0xff < uVar1079);
                    auVar924._0_14_ = auVar916;
                    cVar32 = (uVar1083 != 0) * (uVar1083 < 0x100) * (char)((ulong)uVar360 >> 0x38) -
                             (0xff < uVar1083);
                    auVar924[0xf] = cVar32;
                    auVar980 = __LC6 & auVar983;
                    uVar897 = (ushort)bVar26;
                    uVar929 = (ushort)((uint)uVar941 >> 0x18);
                    uVar930 = (ushort)((uint6)uVar942 >> 0x28);
                    uVar931 = (ushort)((ulong)uVar944 >> 0x38);
                    uVar933 = (ushort)((unkuint10)auVar964._0_10_ >> 0x48);
                    uVar1198 = auVar964._10_2_ >> 8;
                    uVar1199 = auVar973._12_2_ >> 8;
                    uVar1202 = auVar983._14_2_ >> 8;
                    cVar7 = (uVar959 != 0) * (uVar959 < 0x100) * cVar7 - (0xff < uVar959);
                    bVar35 = (uVar897 != 0) * (uVar897 < 0x100) * bVar26 - (0xff < uVar897);
                    uVar897 = CONCAT11(bVar35,cVar7);
                    bVar26 = (uVar929 != 0) * (uVar929 < 0x100) * cVar21 - (0xff < uVar929);
                    uVar588 = CONCAT12(bVar26,uVar897);
                    bVar37 = (uVar930 != 0) * (uVar930 < 0x100) * cVar19 - (0xff < uVar930);
                    uVar877 = CONCAT13(bVar37,uVar588);
                    bVar34 = (uVar931 != 0) * (uVar931 < 0x100) * cVar25 - (0xff < uVar931);
                    uVar759 = CONCAT14(bVar34,uVar877);
                    bVar38 = (uVar933 != 0) * (uVar933 < 0x100) * cVar23 - (0xff < uVar933);
                    auVar844[5] = bVar38;
                    auVar844._0_5_ = uVar759;
                    sVar932 = auVar1013._0_2_;
                    sVar934 = auVar1013._2_2_;
                    sVar961 = auVar1013._4_2_;
                    sVar995 = auVar1013._6_2_;
                    sVar999 = auVar1013._8_2_;
                    sVar1021 = auVar1013._10_2_;
                    sVar1024 = auVar1013._12_2_;
                    sVar958 = auVar1013._14_2_;
                    cVar21 = (0 < sVar958) * (sVar958 < 0x100) * auVar1013[0xe] - (0xff < sVar958);
                    sVar958 = auVar980._0_2_;
                    bVar42 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[0] - (0xff < sVar958);
                    uVar929 = CONCAT11(bVar42,cVar21);
                    sVar958 = auVar980._2_2_;
                    bVar36 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[2] - (0xff < sVar958);
                    uVar589 = CONCAT12(bVar36,uVar929);
                    sVar958 = auVar980._4_2_;
                    bVar41 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[4] - (0xff < sVar958);
                    uVar887 = CONCAT13(bVar41,uVar589);
                    sVar958 = auVar980._6_2_;
                    bVar43 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[6] - (0xff < sVar958);
                    uVar760 = CONCAT14(bVar43,uVar887);
                    sVar958 = auVar980._8_2_;
                    bVar40 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[8] - (0xff < sVar958);
                    auVar839[5] = bVar40;
                    auVar839._0_5_ = uVar760;
                    sVar1123 = auVar980._10_2_;
                    sVar1143 = auVar980._12_2_;
                    sVar1156 = auVar980._14_2_;
                    auVar920 = __LC6 & auVar924;
                    uVar930 = (ushort)bVar39;
                    uVar931 = (ushort)((uint)uVar901 >> 0x18);
                    uVar933 = (ushort)((uint6)uVar902 >> 0x28);
                    uVar935 = (ushort)((ulong)uVar903 >> 0x38);
                    uVar937 = (ushort)((unkuint10)auVar908._0_10_ >> 0x48);
                    uVar1078 = auVar908._10_2_ >> 8;
                    uVar1084 = auVar916._12_2_ >> 8;
                    uVar959 = auVar924._14_2_ >> 8;
                    cVar16 = (uVar1045 != 0) * (uVar1045 < 0x100) * cVar16 - (0xff < uVar1045);
                    bVar47 = (uVar930 != 0) * (uVar930 < 0x100) * bVar39 - (0xff < uVar930);
                    uVar930 = CONCAT11(bVar47,cVar16);
                    bVar39 = (uVar931 != 0) * (uVar931 < 0x100) * cVar29 - (0xff < uVar931);
                    uVar606 = CONCAT12(bVar39,uVar930);
                    bVar45 = (uVar933 != 0) * (uVar933 < 0x100) * cVar27 - (0xff < uVar933);
                    uVar881 = CONCAT13(bVar45,uVar606);
                    bVar49 = (uVar935 != 0) * (uVar935 < 0x100) * cVar33 - (0xff < uVar935);
                    uVar765 = CONCAT14(bVar49,uVar881);
                    bVar44 = (uVar937 != 0) * (uVar937 < 0x100) * cVar31 - (0xff < uVar937);
                    auVar846[5] = bVar44;
                    auVar846._0_5_ = uVar765;
                    uVar1073 = (ushort)bStack_397;
                    uVar1075 = (ushort)uStack_396 >> 8;
                    uVar1077 = (ushort)((uint6)uStack_396 >> 0x10) >> 8;
                    uVar1079 = (ushort)((uint6)uStack_396 >> 0x28);
                    uVar1083 = (ushort)uStack_390 >> 8;
                    uVar1085 = (ushort)((ulong)uStack_390 >> 0x10) >> 8;
                    uVar1088 = (ushort)((ulong)uStack_390 >> 0x20) >> 8;
                    uVar1099 = (ushort)((ulong)uStack_390 >> 0x38);
                    sVar958 = auVar1063._0_2_;
                    sVar936 = auVar1063._2_2_;
                    sVar992 = auVar1063._4_2_;
                    sVar996 = auVar1063._6_2_;
                    sVar1102 = auVar1063._8_2_;
                    sVar1105 = auVar1063._10_2_;
                    sVar1109 = auVar1063._12_2_;
                    sVar1216 = auVar1063._14_2_;
                    cVar19 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar1063[0xe] -
                             (0xff < sVar1216);
                    sVar1216 = auVar920._0_2_;
                    bVar48 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar920[0] - (0xff < sVar1216);
                    uVar931 = CONCAT11(bVar48,cVar19);
                    sVar1216 = auVar920._2_2_;
                    bVar52 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar920[2] - (0xff < sVar1216);
                    uVar607 = CONCAT12(bVar52,uVar931);
                    sVar1216 = auVar920._4_2_;
                    bVar50 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar920[4] - (0xff < sVar1216);
                    uVar878 = CONCAT13(bVar50,uVar607);
                    sVar1216 = auVar920._6_2_;
                    bVar53 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar920[6] - (0xff < sVar1216);
                    uVar766 = CONCAT14(bVar53,uVar878);
                    sVar1216 = auVar920._8_2_;
                    bVar51 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar920[8] - (0xff < sVar1216);
                    auVar841[5] = bVar51;
                    auVar841._0_5_ = uVar766;
                    sVar1137 = auVar920._10_2_;
                    sVar1146 = auVar920._12_2_;
                    sVar1158 = auVar920._14_2_;
                    auVar925._4_8_ = uStack_384;
                    auVar925._0_4_ = local_388;
                    auVar925._12_4_ = uStack_37c;
                    auVar925 = auVar925 & __LC6;
                    sVar1216 = auVar1067._0_2_;
                    sVar1195 = auVar1067._2_2_;
                    bVar54 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1067[2] - (0xff < sVar1195);
                    sVar1195 = auVar1067._4_2_;
                    sVar938 = auVar1067._6_2_;
                    cVar31 = (0 < sVar938) * (sVar938 < 0x100) * auVar1067[6] - (0xff < sVar938);
                    uVar901 = CONCAT13(cVar31,CONCAT12((0 < sVar1195) * (sVar1195 < 0x100) *
                                                       auVar1067[4] - (0xff < sVar1195),
                                                       CONCAT11(bVar54,(0 < sVar1216) *
                                                                       (sVar1216 < 0x100) *
                                                                       auVar1067[0] -
                                                                       (0xff < sVar1216))));
                    sVar1216 = auVar1067._8_2_;
                    sVar1195 = auVar1067._10_2_;
                    cVar46 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1067[10] - (0xff < sVar1195)
                    ;
                    uVar902 = CONCAT15(cVar46,CONCAT14((0 < sVar1216) * (sVar1216 < 0x100) *
                                                       auVar1067[8] - (0xff < sVar1216),uVar901));
                    sVar1216 = auVar1067._12_2_;
                    sVar1195 = auVar1067._14_2_;
                    cVar25 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1067[0xe] -
                             (0xff < sVar1195);
                    uVar903 = CONCAT17(cVar25,CONCAT16((0 < sVar1216) * (sVar1216 < 0x100) *
                                                       auVar1067[0xc] - (0xff < sVar1216),uVar902));
                    sVar1216 = auVar925._0_2_;
                    sVar1195 = auVar925._2_2_;
                    cVar23 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar925[2] - (0xff < sVar1195);
                    auVar1051._0_10_ =
                         CONCAT19(cVar23,CONCAT18((0 < sVar1216) * (sVar1216 < 0x100) * auVar925[0]
                                                  - (0xff < sVar1216),uVar903));
                    sVar1216 = auVar925._4_2_;
                    auVar1051[10] =
                         (0 < sVar1216) * (sVar1216 < 0x100) * auVar925[4] - (0xff < sVar1216);
                    sVar1216 = auVar925._6_2_;
                    cVar29 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar925[6] - (0xff < sVar1216);
                    auVar1051[0xb] = cVar29;
                    sVar1216 = auVar925._8_2_;
                    auVar1059[0xc] =
                         (0 < sVar1216) * (sVar1216 < 0x100) * auVar925[8] - (0xff < sVar1216);
                    auVar1059._0_12_ = auVar1051;
                    sVar1216 = auVar925._10_2_;
                    cVar27 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar925[10] - (0xff < sVar1216);
                    auVar1059[0xd] = cVar27;
                    sVar1216 = auVar925._12_2_;
                    auVar1068[0xe] =
                         (0 < sVar1216) * (sVar1216 < 0x100) * auVar925[0xc] - (0xff < sVar1216);
                    auVar1068._0_14_ = auVar1059;
                    sVar1216 = auVar925._14_2_;
                    cVar33 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar925[0xe] - (0xff < sVar1216)
                    ;
                    auVar1068[0xf] = cVar33;
                    auVar1095 = local_378 & __LC6;
                    auVar1243 = __LC6 & auVar1068;
                    uVar1101 = (ushort)bVar54;
                    uVar1104 = (ushort)((uint)uVar901 >> 0x18);
                    uVar1108 = (ushort)((uint6)uVar902 >> 0x28);
                    uVar1112 = (ushort)((ulong)uVar903 >> 0x38);
                    uVar1116 = (ushort)((unkuint10)auVar1051._0_10_ >> 0x48);
                    uVar1149 = auVar1051._10_2_ >> 8;
                    uVar1152 = auVar1059._12_2_ >> 8;
                    uVar1155 = auVar1068._14_2_ >> 8;
                    uVar933 = (ushort)local_388 >> 8;
                    uVar935 = (ushort)((uint)local_388 >> 0x18);
                    uVar937 = (ushort)uStack_384 >> 8;
                    uVar939 = (ushort)((ulong)uStack_384 >> 0x10) >> 8;
                    uVar1045 = (ushort)((ulong)uStack_384 >> 0x20) >> 8;
                    uVar1072 = (ushort)((ulong)uStack_384 >> 0x38);
                    uVar1074 = (ushort)uStack_37c >> 8;
                    uVar1076 = (ushort)((uint)uStack_37c >> 0x18);
                    bVar62 = (uVar1075 != 0) * (uVar1075 < 0x100) * (char)((uint6)uStack_396 >> 8) -
                             (0xff < uVar1075);
                    cVar59 = (uVar1079 != 0) * (uVar1079 < 0x100) *
                             (char)((uint6)uStack_396 >> 0x28) - (0xff < uVar1079);
                    uVar901 = CONCAT13(cVar59,CONCAT12((uVar1077 != 0) * (uVar1077 < 0x100) *
                                                       (char)((uint6)uStack_396 >> 0x18) -
                                                       (0xff < uVar1077),
                                                       CONCAT11(bVar62,(uVar1073 != 0) *
                                                                       (uVar1073 < 0x100) *
                                                                       bStack_397 -
                                                                       (0xff < uVar1073))));
                    cVar57 = (uVar1085 != 0) * (uVar1085 < 0x100) *
                             (char)((ulong)uStack_390 >> 0x18) - (0xff < uVar1085);
                    uVar902 = CONCAT15(cVar57,CONCAT14((uVar1083 != 0) * (uVar1083 < 0x100) *
                                                       (char)((ulong)uStack_390 >> 8) -
                                                       (0xff < uVar1083),uVar901));
                    cVar56 = (uVar1099 != 0) * (uVar1099 < 0x100) *
                             (char)((ulong)uStack_390 >> 0x38) - (0xff < uVar1099);
                    uVar903 = CONCAT17(cVar56,CONCAT16((uVar1088 != 0) * (uVar1088 < 0x100) *
                                                       (char)((ulong)uStack_390 >> 0x28) -
                                                       (0xff < uVar1088),uVar902));
                    cVar55 = (uVar935 != 0) * (uVar935 < 0x100) * (char)((uint)local_388 >> 0x18) -
                             (0xff < uVar935);
                    auVar1032._0_10_ =
                         CONCAT19(cVar55,CONCAT18((uVar933 != 0) * (uVar933 < 0x100) *
                                                  (char)((uint)local_388 >> 8) - (0xff < uVar933),
                                                  uVar903));
                    auVar1032[10] =
                         (uVar937 != 0) * (uVar937 < 0x100) * (char)((ulong)uStack_384 >> 8) -
                         (0xff < uVar937);
                    cVar61 = (uVar939 != 0) * (uVar939 < 0x100) * (char)((ulong)uStack_384 >> 0x18)
                             - (0xff < uVar939);
                    auVar1032[0xb] = cVar61;
                    auVar1037[0xc] =
                         (uVar1045 != 0) * (uVar1045 < 0x100) * (char)((ulong)uStack_384 >> 0x28) -
                         (0xff < uVar1045);
                    auVar1037._0_12_ = auVar1032;
                    cVar58 = (uVar1072 != 0) * (uVar1072 < 0x100) *
                             (char)((ulong)uStack_384 >> 0x38) - (0xff < uVar1072);
                    auVar1037[0xd] = cVar58;
                    auVar1041[0xe] =
                         (uVar1074 != 0) * (uVar1074 < 0x100) * (char)((uint)uStack_37c >> 8) -
                         (0xff < uVar1074);
                    auVar1041._0_14_ = auVar1037;
                    cVar60 = (uVar1076 != 0) * (uVar1076 < 0x100) * (char)((uint)uStack_37c >> 0x18)
                             - (0xff < uVar1076);
                    auVar1041[0xf] = cVar60;
                    auVar1185 = __LC6 & auVar1041;
                    uVar1073 = (ushort)bVar62;
                    uVar1075 = (ushort)((uint)uVar901 >> 0x18);
                    uVar1077 = (ushort)((uint6)uVar902 >> 0x28);
                    uVar1079 = (ushort)((ulong)uVar903 >> 0x38);
                    uVar1083 = (ushort)((unkuint10)auVar1032._0_10_ >> 0x48);
                    uVar1085 = auVar1032._10_2_ >> 8;
                    uVar1088 = auVar1037._12_2_ >> 8;
                    uVar1099 = auVar1041._14_2_ >> 8;
                    auVar921 = local_368 & __LC6;
                    sVar1216 = auVar1095._0_2_;
                    sVar1195 = auVar1095._2_2_;
                    bVar70 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1095[2] - (0xff < sVar1195);
                    sVar1195 = auVar1095._4_2_;
                    sVar938 = auVar1095._6_2_;
                    cVar69 = (0 < sVar938) * (sVar938 < 0x100) * auVar1095[6] - (0xff < sVar938);
                    uVar941 = CONCAT13(cVar69,CONCAT12((0 < sVar1195) * (sVar1195 < 0x100) *
                                                       auVar1095[4] - (0xff < sVar1195),
                                                       CONCAT11(bVar70,(0 < sVar1216) *
                                                                       (sVar1216 < 0x100) *
                                                                       auVar1095[0] -
                                                                       (0xff < sVar1216))));
                    sVar1216 = auVar1095._8_2_;
                    sVar1195 = auVar1095._10_2_;
                    cVar67 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1095[10] - (0xff < sVar1195)
                    ;
                    uVar942 = CONCAT15(cVar67,CONCAT14((0 < sVar1216) * (sVar1216 < 0x100) *
                                                       auVar1095[8] - (0xff < sVar1216),uVar941));
                    sVar1216 = auVar1095._12_2_;
                    sVar1195 = auVar1095._14_2_;
                    cVar65 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1095[0xe] -
                             (0xff < sVar1195);
                    uVar944 = CONCAT17(cVar65,CONCAT16((0 < sVar1216) * (sVar1216 < 0x100) *
                                                       auVar1095[0xc] - (0xff < sVar1216),uVar942));
                    sVar1216 = auVar921._0_2_;
                    sVar1195 = auVar921._2_2_;
                    cVar63 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar921[2] - (0xff < sVar1195);
                    auVar965._0_10_ =
                         CONCAT19(cVar63,CONCAT18((0 < sVar1216) * (sVar1216 < 0x100) * auVar921[0]
                                                  - (0xff < sVar1216),uVar944));
                    sVar1216 = auVar921._4_2_;
                    auVar965[10] = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[4] -
                                   (0xff < sVar1216);
                    sVar1216 = auVar921._6_2_;
                    cVar68 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[6] - (0xff < sVar1216);
                    auVar965[0xb] = cVar68;
                    sVar1216 = auVar921._8_2_;
                    auVar974[0xc] =
                         (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[8] - (0xff < sVar1216);
                    auVar974._0_12_ = auVar965;
                    sVar1216 = auVar921._10_2_;
                    cVar66 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[10] - (0xff < sVar1216);
                    auVar974[0xd] = cVar66;
                    sVar1216 = auVar921._12_2_;
                    auVar984[0xe] =
                         (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[0xc] - (0xff < sVar1216);
                    auVar984._0_14_ = auVar974;
                    sVar1216 = auVar921._14_2_;
                    cVar64 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[0xe] - (0xff < sVar1216)
                    ;
                    auVar984[0xf] = cVar64;
                    uVar933 = local_378._0_2_ >> 8;
                    uVar935 = local_378._2_2_ >> 8;
                    uVar937 = local_378._4_2_ >> 8;
                    uVar939 = local_378._6_2_ >> 8;
                    uVar1045 = local_378._8_2_ >> 8;
                    uVar1072 = local_378._10_2_ >> 8;
                    uVar1074 = local_378._12_2_ >> 8;
                    uVar1076 = local_378._14_2_ >> 8;
                    bVar79 = (uVar935 != 0) * (uVar935 < 0x100) * local_378[3] - (0xff < uVar935);
                    cVar77 = (uVar939 != 0) * (uVar939 < 0x100) * local_378[7] - (0xff < uVar939);
                    uVar901 = CONCAT13(cVar77,CONCAT12((uVar937 != 0) * (uVar937 < 0x100) *
                                                       local_378[5] - (0xff < uVar937),
                                                       CONCAT11(bVar79,(uVar933 != 0) *
                                                                       (uVar933 < 0x100) *
                                                                       local_378[1] -
                                                                       (0xff < uVar933))));
                    cVar73 = (uVar1072 != 0) * (uVar1072 < 0x100) * local_378[0xb] -
                             (0xff < uVar1072);
                    uVar902 = CONCAT15(cVar73,CONCAT14((uVar1045 != 0) * (uVar1045 < 0x100) *
                                                       local_378[9] - (0xff < uVar1045),uVar901));
                    cVar72 = (uVar1076 != 0) * (uVar1076 < 0x100) * local_378[0xf] -
                             (0xff < uVar1076);
                    uVar903 = CONCAT17(cVar72,CONCAT16((uVar1074 != 0) * (uVar1074 < 0x100) *
                                                       local_378[0xd] - (0xff < uVar1074),uVar902));
                    cVar74 = (uVar1086 != 0) * (uVar1086 < 0x100) * local_368[3] - (0xff < uVar1086)
                    ;
                    auVar909._0_10_ =
                         CONCAT19(cVar74,CONCAT18((uVar1082 != 0) * (uVar1082 < 0x100) *
                                                  local_368[1] - (0xff < uVar1082),uVar903));
                    auVar909[10] = (uVar960 != 0) * (uVar960 < 0x100) * local_368[5] -
                                   (0xff < uVar960);
                    cVar76 = (uVar1107 != 0) * (uVar1107 < 0x100) * local_368[7] - (0xff < uVar1107)
                    ;
                    auVar909[0xb] = cVar76;
                    auVar917[0xc] =
                         (uVar1115 != 0) * (uVar1115 < 0x100) * local_368[9] - (0xff < uVar1115);
                    auVar917._0_12_ = auVar909;
                    cVar75 = (uVar1177 != 0) * (uVar1177 < 0x100) * local_368[0xb] -
                             (0xff < uVar1177);
                    auVar917[0xd] = cVar75;
                    auVar926[0xe] =
                         (uVar1191 != 0) * (uVar1191 < 0x100) * local_368[0xd] - (0xff < uVar1191);
                    auVar926._0_14_ = auVar917;
                    cVar71 = (uVar1194 != 0) * (uVar1194 < 0x100) * local_368[0xf] -
                             (0xff < uVar1194);
                    auVar926[0xf] = cVar71;
                    auVar921 = __LC6 & auVar984;
                    uVar935 = (ushort)bVar70;
                    uVar937 = (ushort)((uint)uVar941 >> 0x18);
                    uVar939 = (ushort)((uint6)uVar942 >> 0x28);
                    uVar1045 = (ushort)((ulong)uVar944 >> 0x38);
                    uVar1072 = (ushort)((unkuint10)auVar965._0_10_ >> 0x48);
                    uVar1107 = auVar965._10_2_ >> 8;
                    uVar1115 = auVar974._12_2_ >> 8;
                    uVar1177 = auVar984._14_2_ >> 8;
                    sVar1216 = auVar1243._0_2_;
                    sVar938 = auVar1243._2_2_;
                    sVar993 = auVar1243._4_2_;
                    sVar997 = auVar1243._6_2_;
                    sVar1019 = auVar1243._8_2_;
                    sVar1022 = auVar1243._10_2_;
                    sVar1113 = auVar1243._12_2_;
                    sVar1195 = auVar1243._14_2_;
                    cVar78 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1243[0xe] -
                             (0xff < sVar1195);
                    sVar1195 = auVar921._0_2_;
                    bVar80 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar921[0] - (0xff < sVar1195);
                    uVar933 = CONCAT11(bVar80,cVar78);
                    sVar1195 = auVar921._2_2_;
                    bVar83 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar921[2] - (0xff < sVar1195);
                    uVar608 = CONCAT12(bVar83,uVar933);
                    sVar1195 = auVar921._4_2_;
                    bVar82 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar921[4] - (0xff < sVar1195);
                    uVar888 = CONCAT13(bVar82,uVar608);
                    sVar1195 = auVar921._6_2_;
                    bVar85 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar921[6] - (0xff < sVar1195);
                    uVar767 = CONCAT14(bVar85,uVar888);
                    sVar1195 = auVar921._8_2_;
                    bVar81 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar921[8] - (0xff < sVar1195);
                    auVar840[5] = bVar81;
                    auVar840._0_5_ = uVar767;
                    sVar1140 = auVar921._10_2_;
                    sVar1150 = auVar921._12_2_;
                    sVar1163 = auVar921._14_2_;
                    cVar33 = (uVar1155 != 0) * (uVar1155 < 0x100) * cVar33 - (0xff < uVar1155);
                    bVar86 = (uVar935 != 0) * (uVar935 < 0x100) * bVar70 - (0xff < uVar935);
                    uVar935 = CONCAT11(bVar86,cVar33);
                    bVar70 = (uVar937 != 0) * (uVar937 < 0x100) * cVar69 - (0xff < uVar937);
                    uVar609 = CONCAT12(bVar70,uVar935);
                    bVar84 = (uVar939 != 0) * (uVar939 < 0x100) * cVar67 - (0xff < uVar939);
                    uVar756 = CONCAT13(bVar84,uVar609);
                    bVar88 = (uVar1045 != 0) * (uVar1045 < 0x100) * cVar65 - (0xff < uVar1045);
                    uVar768 = CONCAT14(bVar88,uVar756);
                    bVar87 = (uVar1072 != 0) * (uVar1072 < 0x100) * cVar63 - (0xff < uVar1072);
                    auVar843[5] = bVar87;
                    auVar843._0_5_ = uVar768;
                    auVar1095 = __LC6 & auVar926;
                    uVar939 = (ushort)bVar79;
                    uVar1045 = (ushort)((uint)uVar901 >> 0x18);
                    uVar1072 = (ushort)((uint6)uVar902 >> 0x28);
                    uVar1074 = (ushort)((ulong)uVar903 >> 0x38);
                    uVar1076 = (ushort)((unkuint10)auVar909._0_10_ >> 0x48);
                    uVar1082 = auVar909._10_2_ >> 8;
                    uVar1086 = auVar917._12_2_ >> 8;
                    uVar960 = auVar926._14_2_ >> 8;
                    sVar1195 = auVar1185._0_2_;
                    sVar940 = auVar1185._2_2_;
                    sVar994 = auVar1185._4_2_;
                    sVar998 = auVar1185._6_2_;
                    sVar1020 = auVar1185._8_2_;
                    sVar1023 = auVar1185._10_2_;
                    sVar1117 = auVar1185._12_2_;
                    sVar1120 = auVar1185._14_2_;
                    cVar69 = (0 < sVar1120) * (sVar1120 < 0x100) * auVar1185[0xe] -
                             (0xff < sVar1120);
                    sVar1120 = auVar1095._0_2_;
                    bVar89 = (0 < sVar1120) * (sVar1120 < 0x100) * auVar1095[0] - (0xff < sVar1120);
                    uVar937 = CONCAT11(bVar89,cVar69);
                    sVar1120 = auVar1095._2_2_;
                    bVar92 = (0 < sVar1120) * (sVar1120 < 0x100) * auVar1095[2] - (0xff < sVar1120);
                    uVar610 = CONCAT12(bVar92,uVar937);
                    sVar1120 = auVar1095._4_2_;
                    bVar90 = (0 < sVar1120) * (sVar1120 < 0x100) * auVar1095[4] - (0xff < sVar1120);
                    uVar757 = CONCAT13(bVar90,uVar610);
                    sVar1120 = auVar1095._6_2_;
                    bVar93 = (0 < sVar1120) * (sVar1120 < 0x100) * auVar1095[6] - (0xff < sVar1120);
                    uVar769 = CONCAT14(bVar93,uVar757);
                    sVar1120 = auVar1095._8_2_;
                    bVar91 = (0 < sVar1120) * (sVar1120 < 0x100) * auVar1095[8] - (0xff < sVar1120);
                    auVar842[5] = bVar91;
                    auVar842._0_5_ = uVar769;
                    sVar1120 = auVar1095._10_2_;
                    sVar1153 = auVar1095._12_2_;
                    sVar1165 = auVar1095._14_2_;
                    cVar60 = (uVar1099 != 0) * (uVar1099 < 0x100) * cVar60 - (0xff < uVar1099);
                    bVar95 = (uVar939 != 0) * (uVar939 < 0x100) * bVar79 - (0xff < uVar939);
                    uVar939 = CONCAT11(bVar95,cVar60);
                    bVar97 = (uVar1045 != 0) * (uVar1045 < 0x100) * cVar77 - (0xff < uVar1045);
                    uVar611 = CONCAT12(bVar97,uVar939);
                    bVar79 = (uVar1072 != 0) * (uVar1072 < 0x100) * cVar73 - (0xff < uVar1072);
                    uVar758 = CONCAT13(bVar79,uVar611);
                    bVar94 = (uVar1074 != 0) * (uVar1074 < 0x100) * cVar72 - (0xff < uVar1074);
                    uVar770 = CONCAT14(bVar94,uVar758);
                    bVar96 = (uVar1076 != 0) * (uVar1076 < 0x100) * cVar74 - (0xff < uVar1076);
                    auVar845[5] = bVar96;
                    auVar845._0_5_ = uVar770;
                    auVar839._6_8_ = 0;
                    auVar142[0xe] = cVar21;
                    auVar142._0_14_ = auVar839 << 0x38;
                    uVar357 = CONCAT26(auVar142._13_2_,
                                       CONCAT15((0 < sVar1024) * (sVar1024 < 0x100) * auVar1013[0xc]
                                                - (0xff < sVar1024),uVar760));
                    auVar787._4_8_ = 0;
                    auVar787._0_4_ = uVar887;
                    auVar230._12_3_ = (int3)((ulong)uVar357 >> 0x28);
                    auVar230._0_12_ = auVar787 << 0x38;
                    uVar1029 = CONCAT44(auVar230._11_4_,
                                        CONCAT13((0 < sVar1021) * (sVar1021 < 0x100) * auVar1013[10]
                                                 - (0xff < sVar1021),uVar589));
                    auVar315._10_5_ = (int5)((ulong)uVar1029 >> 0x18);
                    auVar315._0_10_ = (unkuint10)uVar929 << 0x38;
                    uVar903 = CONCAT62(auVar315._9_6_,
                                       CONCAT11((0 < sVar999) * (sVar999 < 0x100) * auVar1013[8] -
                                                (0xff < sVar999),cVar21));
                    auVar459._7_8_ = 0;
                    auVar459._0_7_ = (uint7)((ulong)uVar903 >> 8);
                    Var362 = CONCAT81(SUB158(auVar459 << 0x40,7),
                                      (0 < sVar995) * (sVar995 < 0x100) * auVar1013[6] -
                                      (0xff < sVar995));
                    auVar660._9_6_ = 0;
                    auVar660._0_9_ = Var362;
                    auVar460._1_10_ = SUB1510(auVar660 << 0x30,5);
                    auVar460[0] = (0 < sVar961) * (sVar961 < 0x100) * auVar1013[4] -
                                  (0xff < sVar961);
                    auVar661._11_4_ = 0;
                    auVar661._0_11_ = auVar460;
                    auVar461._1_12_ = SUB1512(auVar661 << 0x20,3);
                    auVar461[0] = (0 < sVar934) * (sVar934 < 0x100) * auVar1013[2] -
                                  (0xff < sVar934);
                    auVar840._6_8_ = 0;
                    auVar143[0xe] = cVar78;
                    auVar143._0_14_ = auVar840 << 0x38;
                    uVar358 = CONCAT26(auVar143._13_2_,
                                       CONCAT15((0 < sVar1113) * (sVar1113 < 0x100) * auVar1243[0xc]
                                                - (0xff < sVar1113),uVar767));
                    auVar788._4_8_ = 0;
                    auVar788._0_4_ = uVar888;
                    auVar231._12_3_ = (int3)((ulong)uVar358 >> 0x28);
                    auVar231._0_12_ = auVar788 << 0x38;
                    uVar356 = CONCAT44(auVar231._11_4_,
                                       CONCAT13((0 < sVar1022) * (sVar1022 < 0x100) * auVar1243[10]
                                                - (0xff < sVar1022),uVar608));
                    auVar316._10_5_ = (int5)((ulong)uVar356 >> 0x18);
                    auVar316._0_10_ = (unkuint10)uVar933 << 0x38;
                    uVar944 = CONCAT62(auVar316._9_6_,
                                       CONCAT11((0 < sVar1019) * (sVar1019 < 0x100) * auVar1243[8] -
                                                (0xff < sVar1019),cVar78));
                    auVar462._7_8_ = 0;
                    auVar462._0_7_ = (uint7)((ulong)uVar944 >> 8);
                    Var398 = CONCAT81(SUB158(auVar462 << 0x40,7),
                                      (0 < sVar997) * (sVar997 < 0x100) * auVar1243[6] -
                                      (0xff < sVar997));
                    auVar662._9_6_ = 0;
                    auVar662._0_9_ = Var398;
                    auVar463._1_10_ = SUB1510(auVar662 << 0x30,5);
                    auVar463[0] = (0 < sVar993) * (sVar993 < 0x100) * auVar1243[4] -
                                  (0xff < sVar993);
                    auVar663._11_4_ = 0;
                    auVar663._0_11_ = auVar463;
                    auVar464._1_12_ = SUB1512(auVar663 << 0x20,3);
                    auVar464[0] = (0 < sVar938) * (sVar938 < 0x100) * auVar1243[2] -
                                  (0xff < sVar938);
                    sVar961 = (ushort)(byte)((0 < sVar932) * (sVar932 < 0x100) * auVar1013[0] -
                                            (0xff < sVar932)) -
                              (ushort)(byte)((0 < sVar1216) * (sVar1216 < 0x100) * auVar1243[0] -
                                            (0xff < sVar1216));
                    sVar993 = auVar461._0_2_ - auVar464._0_2_;
                    sVar995 = auVar460._0_2_ - auVar463._0_2_;
                    sVar997 = (short)Var362 - (short)Var398;
                    sVar932 = (short)((ulong)uVar903 >> 8) - (short)((ulong)uVar944 >> 8);
                    sVar999 = (short)((ulong)uVar1029 >> 0x18) - (short)((ulong)uVar356 >> 0x18);
                    sVar1019 = (short)((ulong)uVar357 >> 0x28) - (short)((ulong)uVar358 >> 0x28);
                    sVar1021 = (auVar142._13_2_ >> 8) - (auVar143._13_2_ >> 8);
                    auVar841._6_8_ = 0;
                    auVar144[0xe] = cVar19;
                    auVar144._0_14_ = auVar841 << 0x38;
                    uVar357 = CONCAT26(auVar144._13_2_,
                                       CONCAT15((0 < sVar1109) * (sVar1109 < 0x100) * auVar1063[0xc]
                                                - (0xff < sVar1109),uVar766));
                    auVar789._4_8_ = 0;
                    auVar789._0_4_ = uVar878;
                    auVar232._12_3_ = (int3)((ulong)uVar357 >> 0x28);
                    auVar232._0_12_ = auVar789 << 0x38;
                    uVar1029 = CONCAT44(auVar232._11_4_,
                                        CONCAT13((0 < sVar1105) * (sVar1105 < 0x100) * auVar1063[10]
                                                 - (0xff < sVar1105),uVar607));
                    auVar317._10_5_ = (int5)((ulong)uVar1029 >> 0x18);
                    auVar317._0_10_ = (unkuint10)uVar931 << 0x38;
                    uVar903 = CONCAT62(auVar317._9_6_,
                                       CONCAT11((0 < sVar1102) * (sVar1102 < 0x100) * auVar1063[8] -
                                                (0xff < sVar1102),cVar19));
                    auVar465._7_8_ = 0;
                    auVar465._0_7_ = (uint7)((ulong)uVar903 >> 8);
                    Var362 = CONCAT81(SUB158(auVar465 << 0x40,7),
                                      (0 < sVar996) * (sVar996 < 0x100) * auVar1063[6] -
                                      (0xff < sVar996));
                    auVar664._9_6_ = 0;
                    auVar664._0_9_ = Var362;
                    auVar466._1_10_ = SUB1510(auVar664 << 0x30,5);
                    auVar466[0] = (0 < sVar992) * (sVar992 < 0x100) * auVar1063[4] -
                                  (0xff < sVar992);
                    auVar665._11_4_ = 0;
                    auVar665._0_11_ = auVar466;
                    auVar467._1_12_ = SUB1512(auVar665 << 0x20,3);
                    auVar467[0] = (0 < sVar936) * (sVar936 < 0x100) * auVar1063[2] -
                                  (0xff < sVar936);
                    sVar992 = (ushort)bVar42 - (ushort)bVar80;
                    sVar996 = (ushort)bVar36 - (ushort)bVar83;
                    sVar1102 = (ushort)bVar41 - (ushort)bVar82;
                    sVar1105 = (ushort)bVar43 - (ushort)bVar85;
                    sVar1216 = (ushort)bVar40 - (ushort)bVar81;
                    sVar1022 = (ushort)(byte)((0 < sVar1123) * (sVar1123 < 0x100) * auVar980[10] -
                                             (0xff < sVar1123)) -
                               (ushort)(byte)((0 < sVar1140) * (sVar1140 < 0x100) * auVar921[10] -
                                             (0xff < sVar1140));
                    sVar1024 = (ushort)(byte)((0 < sVar1143) * (sVar1143 < 0x100) * auVar980[0xc] -
                                             (0xff < sVar1143)) -
                               (ushort)(byte)((0 < sVar1150) * (sVar1150 < 0x100) * auVar921[0xc] -
                                             (0xff < sVar1150));
                    sVar1109 = (ushort)(byte)((0 < sVar1156) * (sVar1156 < 0x100) * auVar980[0xe] -
                                             (0xff < sVar1156)) -
                               (ushort)(byte)((0 < sVar1163) * (sVar1163 < 0x100) * auVar921[0xe] -
                                             (0xff < sVar1163));
                    sVar997 = sVar997 * sVar997;
                    uVar929 = sVar932 * sVar932;
                    auVar677._2_2_ = uVar929;
                    auVar677._0_2_ = sVar997;
                    auVar842._6_8_ = 0;
                    auVar145[0xe] = cVar69;
                    auVar145._0_14_ = auVar842 << 0x38;
                    uVar358 = CONCAT26(auVar145._13_2_,
                                       CONCAT15((0 < sVar1117) * (sVar1117 < 0x100) * auVar1185[0xc]
                                                - (0xff < sVar1117),uVar769));
                    auVar790._4_8_ = 0;
                    auVar790._0_4_ = uVar757;
                    auVar233._12_3_ = (int3)((ulong)uVar358 >> 0x28);
                    auVar233._0_12_ = auVar790 << 0x38;
                    uVar356 = CONCAT44(auVar233._11_4_,
                                       CONCAT13((0 < sVar1023) * (sVar1023 < 0x100) * auVar1185[10]
                                                - (0xff < sVar1023),uVar610));
                    auVar318._10_5_ = (int5)((ulong)uVar356 >> 0x18);
                    auVar318._0_10_ = (unkuint10)uVar937 << 0x38;
                    uVar944 = CONCAT62(auVar318._9_6_,
                                       CONCAT11((0 < sVar1020) * (sVar1020 < 0x100) * auVar1185[8] -
                                                (0xff < sVar1020),cVar69));
                    auVar468._7_8_ = 0;
                    auVar468._0_7_ = (uint7)((ulong)uVar944 >> 8);
                    Var398 = CONCAT81(SUB158(auVar468 << 0x40,7),
                                      (0 < sVar998) * (sVar998 < 0x100) * auVar1185[6] -
                                      (0xff < sVar998));
                    auVar666._9_6_ = 0;
                    auVar666._0_9_ = Var398;
                    auVar469._1_10_ = SUB1510(auVar666 << 0x30,5);
                    auVar469[0] = (0 < sVar994) * (sVar994 < 0x100) * auVar1185[4] -
                                  (0xff < sVar994);
                    auVar667._11_4_ = 0;
                    auVar667._0_11_ = auVar469;
                    auVar470._1_12_ = SUB1512(auVar667 << 0x20,3);
                    auVar470[0] = (0 < sVar940) * (sVar940 < 0x100) * auVar1185[2] -
                                  (0xff < sVar940);
                    sVar1105 = sVar1105 * sVar1105;
                    uVar931 = sVar1216 * sVar1216;
                    auVar680._2_2_ = uVar931;
                    auVar680._0_2_ = sVar1105;
                    sVar1206 = (ushort)(byte)((0 < sVar958) * (sVar958 < 0x100) * auVar1063[0] -
                                             (0xff < sVar958)) -
                               (ushort)(byte)((0 < sVar1195) * (sVar1195 < 0x100) * auVar1185[0] -
                                             (0xff < sVar1195));
                    sVar1208 = auVar467._0_2_ - auVar470._0_2_;
                    sVar1210 = auVar466._0_2_ - auVar469._0_2_;
                    sVar1212 = (short)Var362 - (short)Var398;
                    sVar958 = (short)((ulong)uVar903 >> 8) - (short)((ulong)uVar944 >> 8);
                    sVar1214 = (short)((ulong)uVar1029 >> 0x18) - (short)((ulong)uVar356 >> 0x18);
                    sVar1217 = (short)((ulong)uVar357 >> 0x28) - (short)((ulong)uVar358 >> 0x28);
                    sVar1219 = (auVar144._13_2_ >> 8) - (auVar145._13_2_ >> 8);
                    sVar1163 = (ushort)bVar48 - (ushort)bVar89;
                    sVar1167 = (ushort)bVar52 - (ushort)bVar92;
                    sVar1169 = (ushort)bVar50 - (ushort)bVar90;
                    sVar1171 = (ushort)bVar53 - (ushort)bVar93;
                    sVar932 = (ushort)bVar51 - (ushort)bVar91;
                    sVar1173 = (ushort)(byte)((0 < sVar1137) * (sVar1137 < 0x100) * auVar920[10] -
                                             (0xff < sVar1137)) -
                               (ushort)(byte)((0 < sVar1120) * (sVar1120 < 0x100) * auVar1095[10] -
                                             (0xff < sVar1120));
                    sVar1175 = (ushort)(byte)((0 < sVar1146) * (sVar1146 < 0x100) * auVar920[0xc] -
                                             (0xff < sVar1146)) -
                               (ushort)(byte)((0 < sVar1153) * (sVar1153 < 0x100) * auVar1095[0xc] -
                                             (0xff < sVar1153));
                    sVar1158 = (ushort)(byte)((0 < sVar1158) * (sVar1158 < 0x100) * auVar920[0xe] -
                                             (0xff < sVar1158)) -
                               (ushort)(byte)((0 < sVar1165) * (sVar1165 < 0x100) * auVar1095[0xe] -
                                             (0xff < sVar1165));
                    auVar843._6_8_ = 0;
                    auVar146[0xe] = cVar33;
                    auVar146._0_14_ = auVar843 << 0x38;
                    uVar357 = CONCAT26(auVar146._13_2_,
                                       CONCAT15((uVar1152 != 0) * (uVar1152 < 0x100) * cVar27 -
                                                (0xff < uVar1152),uVar768));
                    auVar791._4_8_ = 0;
                    auVar791._0_4_ = uVar756;
                    auVar234._12_3_ = (int3)((ulong)uVar357 >> 0x28);
                    auVar234._0_12_ = auVar791 << 0x38;
                    uVar1029 = CONCAT44(auVar234._11_4_,
                                        CONCAT13((uVar1149 != 0) * (uVar1149 < 0x100) * cVar29 -
                                                 (0xff < uVar1149),uVar609));
                    auVar319._10_5_ = (int5)((ulong)uVar1029 >> 0x18);
                    auVar319._0_10_ = (unkuint10)uVar935 << 0x38;
                    uVar903 = CONCAT62(auVar319._9_6_,
                                       CONCAT11((uVar1116 != 0) * (uVar1116 < 0x100) * cVar23 -
                                                (0xff < uVar1116),cVar33));
                    auVar471._7_8_ = 0;
                    auVar471._0_7_ = (uint7)((ulong)uVar903 >> 8);
                    Var362 = CONCAT81(SUB158(auVar471 << 0x40,7),
                                      (uVar1112 != 0) * (uVar1112 < 0x100) * cVar25 -
                                      (0xff < uVar1112));
                    auVar668._9_6_ = 0;
                    auVar668._0_9_ = Var362;
                    auVar472._1_10_ = SUB1510(auVar668 << 0x30,5);
                    auVar472[0] = (uVar1108 != 0) * (uVar1108 < 0x100) * cVar46 - (0xff < uVar1108);
                    auVar669._11_4_ = 0;
                    auVar669._0_11_ = auVar472;
                    auVar473._1_12_ = SUB1512(auVar669 << 0x20,3);
                    auVar473[0] = (uVar1104 != 0) * (uVar1104 < 0x100) * cVar31 - (0xff < uVar1104);
                    auVar844._6_8_ = 0;
                    auVar147[0xe] = cVar7;
                    auVar147._0_14_ = auVar844 << 0x38;
                    uVar358 = CONCAT26(auVar147._13_2_,
                                       CONCAT15((uVar1046 != 0) * (uVar1046 < 0x100) * cVar5 -
                                                (0xff < uVar1046),uVar759));
                    auVar792._4_8_ = 0;
                    auVar792._0_4_ = uVar877;
                    auVar235._12_3_ = (int3)((ulong)uVar358 >> 0x28);
                    auVar235._0_12_ = auVar792 << 0x38;
                    uVar356 = CONCAT44(auVar235._11_4_,
                                       CONCAT13((uVar1145 != 0) * (uVar1145 < 0x100) * cVar4 -
                                                (0xff < uVar1145),uVar588));
                    auVar320._10_5_ = (int5)((ulong)uVar356 >> 0x18);
                    auVar320._0_10_ = (unkuint10)uVar897 << 0x38;
                    uVar944 = CONCAT62(auVar320._9_6_,
                                       CONCAT11((uVar1142 != 0) * (uVar1142 < 0x100) * cVar6 -
                                                (0xff < uVar1142),cVar7));
                    auVar474._7_8_ = 0;
                    auVar474._0_7_ = (uint7)((ulong)uVar944 >> 8);
                    Var398 = CONCAT81(SUB158(auVar474 << 0x40,7),
                                      (uVar1139 != 0) * (uVar1139 < 0x100) * cVar8 -
                                      (0xff < uVar1139));
                    auVar670._9_6_ = 0;
                    auVar670._0_9_ = Var398;
                    auVar475._1_10_ = SUB1510(auVar670 << 0x30,5);
                    auVar475[0] = (uVar1136 != 0) * (uVar1136 < 0x100) * cVar9 - (0xff < uVar1136);
                    auVar671._11_4_ = 0;
                    auVar671._0_11_ = auVar475;
                    auVar476._1_12_ = SUB1512(auVar671 << 0x20,3);
                    auVar476[0] = (uVar1122 != 0) * (uVar1122 < 0x100) * cVar874 - (0xff < uVar1122)
                    ;
                    sVar1212 = sVar1212 * sVar1212;
                    uVar1045 = sVar958 * sVar958;
                    auVar676._2_2_ = uVar1045;
                    auVar676._0_2_ = sVar1212;
                    sVar1165 = (ushort)(byte)((uVar1205 != 0) * (uVar1205 < 0x100) * bVar10 -
                                             (0xff < uVar1205)) -
                               (ushort)(byte)((uVar1101 != 0) * (uVar1101 < 0x100) * bVar54 -
                                             (0xff < uVar1101));
                    sVar1178 = auVar476._0_2_ - auVar473._0_2_;
                    sVar1189 = auVar475._0_2_ - auVar472._0_2_;
                    sVar1192 = (short)Var398 - (short)Var362;
                    sVar958 = (short)((ulong)uVar944 >> 8) - (short)((ulong)uVar903 >> 8);
                    sVar1196 = (short)((ulong)uVar356 >> 0x18) - (short)((ulong)uVar1029 >> 0x18);
                    sVar1200 = (short)((ulong)uVar358 >> 0x28) - (short)((ulong)uVar357 >> 0x28);
                    sVar1203 = (auVar147._13_2_ >> 8) - (auVar146._13_2_ >> 8);
                    sVar1137 = (ushort)bVar35 - (ushort)bVar86;
                    sVar1140 = (ushort)bVar26 - (ushort)bVar70;
                    sVar1143 = (ushort)bVar37 - (ushort)bVar84;
                    sVar1146 = (ushort)bVar34 - (ushort)bVar88;
                    sVar994 = (ushort)bVar38 - (ushort)bVar87;
                    sVar1150 = (ushort)(byte)((uVar1198 != 0) * (uVar1198 < 0x100) * cVar20 -
                                             (0xff < uVar1198)) -
                               (ushort)(byte)((uVar1107 != 0) * (uVar1107 < 0x100) * cVar68 -
                                             (0xff < uVar1107));
                    sVar1153 = (ushort)(byte)((uVar1199 != 0) * (uVar1199 < 0x100) * cVar22 -
                                             (0xff < uVar1199)) -
                               (ushort)(byte)((uVar1115 != 0) * (uVar1115 < 0x100) * cVar66 -
                                             (0xff < uVar1115));
                    sVar1156 = (ushort)(byte)((uVar1202 != 0) * (uVar1202 < 0x100) * cVar24 -
                                             (0xff < uVar1202)) -
                               (ushort)(byte)((uVar1177 != 0) * (uVar1177 < 0x100) * cVar64 -
                                             (0xff < uVar1177));
                    auVar845._6_8_ = 0;
                    auVar148[0xe] = cVar60;
                    auVar148._0_14_ = auVar845 << 0x38;
                    uVar357 = CONCAT26(auVar148._13_2_,
                                       CONCAT15((uVar1088 != 0) * (uVar1088 < 0x100) * cVar58 -
                                                (0xff < uVar1088),uVar770));
                    auVar793._4_8_ = 0;
                    auVar793._0_4_ = uVar758;
                    auVar236._12_3_ = (int3)((ulong)uVar357 >> 0x28);
                    auVar236._0_12_ = auVar793 << 0x38;
                    uVar1029 = CONCAT44(auVar236._11_4_,
                                        CONCAT13((uVar1085 != 0) * (uVar1085 < 0x100) * cVar61 -
                                                 (0xff < uVar1085),uVar611));
                    auVar321._10_5_ = (int5)((ulong)uVar1029 >> 0x18);
                    auVar321._0_10_ = (unkuint10)uVar939 << 0x38;
                    uVar903 = CONCAT62(auVar321._9_6_,
                                       CONCAT11((uVar1083 != 0) * (uVar1083 < 0x100) * cVar55 -
                                                (0xff < uVar1083),cVar60));
                    auVar477._7_8_ = 0;
                    auVar477._0_7_ = (uint7)((ulong)uVar903 >> 8);
                    Var362 = CONCAT81(SUB158(auVar477 << 0x40,7),
                                      (uVar1079 != 0) * (uVar1079 < 0x100) * cVar56 -
                                      (0xff < uVar1079));
                    auVar672._9_6_ = 0;
                    auVar672._0_9_ = Var362;
                    auVar478._1_10_ = SUB1510(auVar672 << 0x30,5);
                    auVar478[0] = (uVar1077 != 0) * (uVar1077 < 0x100) * cVar57 - (0xff < uVar1077);
                    auVar673._11_4_ = 0;
                    auVar673._0_11_ = auVar478;
                    auVar479._1_12_ = SUB1512(auVar673 << 0x20,3);
                    auVar479[0] = (uVar1075 != 0) * (uVar1075 < 0x100) * cVar59 - (0xff < uVar1075);
                    auVar846._6_8_ = 0;
                    auVar149[0xe] = cVar16;
                    auVar149._0_14_ = auVar846 << 0x38;
                    uVar358 = CONCAT26(auVar149._13_2_,
                                       CONCAT15((uVar1188 != 0) * (uVar1188 < 0x100) * cVar14 -
                                                (0xff < uVar1188),uVar765));
                    auVar794._4_8_ = 0;
                    auVar794._0_4_ = uVar881;
                    auVar237._12_3_ = (int3)((ulong)uVar358 >> 0x28);
                    auVar237._0_12_ = auVar794 << 0x38;
                    uVar356 = CONCAT44(auVar237._11_4_,
                                       CONCAT13((uVar1119 != 0) * (uVar1119 < 0x100) * cVar12 -
                                                (0xff < uVar1119),uVar606));
                    auVar322._10_5_ = (int5)((ulong)uVar356 >> 0x18);
                    auVar322._0_10_ = (unkuint10)uVar930 << 0x38;
                    uVar944 = CONCAT62(auVar322._9_6_,
                                       CONCAT11((uVar1111 != 0) * (uVar1111 < 0x100) * cVar15 -
                                                (0xff < uVar1111),cVar16));
                    auVar480._7_8_ = 0;
                    auVar480._0_7_ = (uint7)((ulong)uVar944 >> 8);
                    Var398 = CONCAT81(SUB158(auVar480 << 0x40,7),
                                      (uVar1103 != 0) * (uVar1103 < 0x100) * cVar17 -
                                      (0xff < uVar1103));
                    auVar674._9_6_ = 0;
                    auVar674._0_9_ = Var398;
                    auVar481._1_10_ = SUB1510(auVar674 << 0x30,5);
                    auVar481[0] = (uVar1100 != 0) * (uVar1100 < 0x100) * cVar11 - (0xff < uVar1100);
                    auVar675._11_4_ = 0;
                    auVar675._0_11_ = auVar481;
                    auVar482._1_12_ = SUB1512(auVar675 << 0x20,3);
                    auVar482[0] = (uVar1098 != 0) * (uVar1098 < 0x100) * cVar13 - (0xff < uVar1098);
                    sVar1192 = sVar1192 * sVar1192;
                    uVar937 = sVar958 * sVar958;
                    auVar678._2_2_ = uVar937;
                    auVar678._0_2_ = sVar1192;
                    sVar1171 = sVar1171 * sVar1171;
                    uVar935 = sVar932 * sVar932;
                    auVar681._2_2_ = uVar935;
                    auVar681._0_2_ = sVar1171;
                    sVar932 = (ushort)(byte)((uVar1087 != 0) * (uVar1087 < 0x100) * bVar18 -
                                            (0xff < uVar1087)) -
                              (ushort)(byte)((uVar1073 != 0) * (uVar1073 < 0x100) * bVar62 -
                                            (0xff < uVar1073));
                    sVar958 = auVar482._0_2_ - auVar479._0_2_;
                    sVar1216 = auVar481._0_2_ - auVar478._0_2_;
                    sVar1195 = (short)Var398 - (short)Var362;
                    sVar934 = (short)((ulong)uVar944 >> 8) - (short)((ulong)uVar903 >> 8);
                    sVar936 = (short)((ulong)uVar356 >> 0x18) - (short)((ulong)uVar1029 >> 0x18);
                    sVar938 = (short)((ulong)uVar358 >> 0x28) - (short)((ulong)uVar357 >> 0x28);
                    sVar940 = (auVar149._13_2_ >> 8) - (auVar148._13_2_ >> 8);
                    sVar1146 = sVar1146 * sVar1146;
                    uVar933 = sVar994 * sVar994;
                    auVar682._2_2_ = uVar933;
                    auVar682._0_2_ = sVar1146;
                    sVar994 = (ushort)bVar47 - (ushort)bVar95;
                    sVar998 = (ushort)bVar39 - (ushort)bVar97;
                    sVar1020 = (ushort)bVar45 - (ushort)bVar79;
                    sVar1023 = (ushort)bVar49 - (ushort)bVar94;
                    sVar1113 = (ushort)bVar44 - (ushort)bVar96;
                    sVar1117 = (ushort)(byte)((uVar1078 != 0) * (uVar1078 < 0x100) * cVar28 -
                                             (0xff < uVar1078)) -
                               (ushort)(byte)((uVar1082 != 0) * (uVar1082 < 0x100) * cVar76 -
                                             (0xff < uVar1082));
                    sVar1120 = (ushort)(byte)((uVar1084 != 0) * (uVar1084 < 0x100) * cVar30 -
                                             (0xff < uVar1084)) -
                               (ushort)(byte)((uVar1086 != 0) * (uVar1086 < 0x100) * cVar75 -
                                             (0xff < uVar1086));
                    sVar1123 = (ushort)(byte)((uVar959 != 0) * (uVar959 < 0x100) * cVar32 -
                                             (0xff < uVar959)) -
                               (ushort)(byte)((uVar960 != 0) * (uVar960 < 0x100) * cVar71 -
                                             (0xff < uVar960));
                    sVar1195 = sVar1195 * sVar1195;
                    uVar930 = sVar934 * sVar934;
                    auVar679._2_2_ = uVar930;
                    auVar679._0_2_ = sVar1195;
                    sVar1023 = sVar1023 * sVar1023;
                    uVar897 = sVar1113 * sVar1113;
                    auVar683._2_2_ = uVar897;
                    auVar683._0_2_ = sVar1023;
                    auVar676._4_8_ = 0;
                    auVar150._12_2_ = sVar1212;
                    auVar150._0_12_ = auVar676 << 0x30;
                    uVar903 = CONCAT44(auVar150._10_4_,CONCAT22(sVar1210 * sVar1210,sVar1212));
                    auVar483._6_8_ = 0;
                    auVar483._0_6_ = (uint6)((ulong)uVar903 >> 0x10);
                    auVar677._4_8_ = 0;
                    auVar151._12_2_ = sVar997;
                    auVar151._0_12_ = auVar677 << 0x30;
                    uVar944 = CONCAT44(auVar151._10_4_,CONCAT22(sVar995 * sVar995,sVar997));
                    auVar484._6_8_ = 0;
                    auVar484._0_6_ = (uint6)((ulong)uVar944 >> 0x10);
                    auVar678._4_8_ = 0;
                    auVar152._12_2_ = sVar1192;
                    auVar152._0_12_ = auVar678 << 0x30;
                    uVar1029 = CONCAT44(auVar152._10_4_,CONCAT22(sVar1189 * sVar1189,sVar1192));
                    auVar485._6_8_ = 0;
                    auVar485._0_6_ = (uint6)((ulong)uVar1029 >> 0x10);
                    auVar679._4_8_ = 0;
                    auVar153._12_2_ = sVar1195;
                    auVar153._0_12_ = auVar679 << 0x30;
                    uVar356 = CONCAT44(auVar153._10_4_,CONCAT22(sVar1216 * sVar1216,sVar1195));
                    auVar486._6_8_ = 0;
                    auVar486._0_6_ = (uint6)((ulong)uVar356 >> 0x10);
                    iVar1148 = (int)((ulong)uVar944 >> 0x10) + (int)((ulong)uVar903 >> 0x10) +
                               (int)((ulong)uVar1029 >> 0x10) + (int)((ulong)uVar356 >> 0x10);
                    auVar680._4_8_ = 0;
                    auVar154._12_2_ = sVar1105;
                    auVar154._0_12_ = auVar680 << 0x30;
                    uVar903 = CONCAT44(auVar154._10_4_,CONCAT22(sVar1102 * sVar1102,sVar1105));
                    auVar487._6_8_ = 0;
                    auVar487._0_6_ = (uint6)((ulong)uVar903 >> 0x10);
                    auVar681._4_8_ = 0;
                    auVar155._12_2_ = sVar1171;
                    auVar155._0_12_ = auVar681 << 0x30;
                    uVar944 = CONCAT44(auVar155._10_4_,CONCAT22(sVar1169 * sVar1169,sVar1171));
                    auVar488._6_8_ = 0;
                    auVar488._0_6_ = (uint6)((ulong)uVar944 >> 0x10);
                    auVar682._4_8_ = 0;
                    auVar156._12_2_ = sVar1146;
                    auVar156._0_12_ = auVar682 << 0x30;
                    uVar1029 = CONCAT44(auVar156._10_4_,CONCAT22(sVar1143 * sVar1143,sVar1146));
                    auVar489._6_8_ = 0;
                    auVar489._0_6_ = (uint6)((ulong)uVar1029 >> 0x10);
                    auVar683._4_8_ = 0;
                    auVar157._12_2_ = sVar1023;
                    auVar157._0_12_ = auVar683 << 0x30;
                    uVar356 = CONCAT44(auVar157._10_4_,CONCAT22(sVar1020 * sVar1020,sVar1023));
                    auVar490._6_8_ = 0;
                    auVar490._0_6_ = (uint6)((ulong)uVar356 >> 0x10);
                    iVar1080 = (int)((ulong)uVar903 >> 0x10) + (int)((ulong)uVar944 >> 0x10) +
                               (int)((ulong)uVar1029 >> 0x10) + (int)((ulong)uVar356 >> 0x10);
                    cVar874 = basist::transcode_uastc_to_bc7
                                        ((unpacked_uastc_block *)&local_f8,
                                         (bc7_optimization_results *)&local_2b8);
                    if (cVar874 == '\0') goto LAB_0010c802;
                    basist::encode_bc7_block(local_428,(bc7_optimization_results *)&local_2b8);
                    basisu::unpack_block(0xb,local_428,local_358);
                    uVar903 = *(undefined8 *)pcVar1;
                    uVar944 = *(undefined8 *)(pcVar1 + 8);
                    uVar1136 = local_328._0_2_ >> 8;
                    uVar1139 = local_328._2_2_ >> 8;
                    uVar1142 = local_328._4_2_ >> 8;
                    uVar1145 = local_328._6_2_ >> 8;
                    uVar1046 = local_328._8_2_ >> 8;
                    uVar1073 = local_328._10_2_ >> 8;
                    uVar1075 = local_328._12_2_ >> 8;
                    uVar1077 = local_328._14_2_ >> 8;
                    uVar1029 = *(undefined8 *)(pcVar1 + 0x10);
                    uVar356 = *(undefined8 *)(pcVar1 + 0x18);
                    uVar357 = *(undefined8 *)(pcVar1 + 0x20);
                    uVar358 = *(undefined8 *)(pcVar1 + 0x28);
                    uVar1100 = (ushort)uVar903 >> 8;
                    uVar1107 = (ushort)((ulong)uVar903 >> 0x10) >> 8;
                    uVar1115 = (ushort)((ulong)uVar903 >> 0x20) >> 8;
                    uVar1177 = (ushort)((ulong)uVar903 >> 0x38);
                    uVar1188 = (ushort)uVar944 >> 8;
                    uVar1191 = (ushort)((ulong)uVar944 >> 0x10) >> 8;
                    uVar1194 = (ushort)((ulong)uVar944 >> 0x20) >> 8;
                    uVar1199 = (ushort)((ulong)uVar944 >> 0x38);
                    uVar359 = *(undefined8 *)(pcVar1 + 0x30);
                    uVar360 = *(undefined8 *)(pcVar1 + 0x38);
                    auVar921 = *(undefined1 (*) [16])(pcVar1 + 0x10) & __LC6;
                    auVar920 = *(undefined1 (*) [16])pcVar1 & __LC6;
                    auVar1095 = *(undefined1 (*) [16])(pcVar1 + 0x20) & __LC6;
                    sVar1216 = auVar920._0_2_;
                    sVar1195 = auVar920._2_2_;
                    bVar10 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar920[2] - (0xff < sVar1195);
                    sVar1195 = auVar920._4_2_;
                    sVar934 = auVar920._6_2_;
                    cVar874 = (0 < sVar934) * (sVar934 < 0x100) * auVar920[6] - (0xff < sVar934);
                    uVar901 = CONCAT13(cVar874,CONCAT12((0 < sVar1195) * (sVar1195 < 0x100) *
                                                        auVar920[4] - (0xff < sVar1195),
                                                        CONCAT11(bVar10,(0 < sVar1216) *
                                                                        (sVar1216 < 0x100) *
                                                                        auVar920[0] -
                                                                        (0xff < sVar1216))));
                    sVar1216 = auVar920._8_2_;
                    sVar1195 = auVar920._10_2_;
                    cVar9 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar920[10] - (0xff < sVar1195);
                    uVar902 = CONCAT15(cVar9,CONCAT14((0 < sVar1216) * (sVar1216 < 0x100) *
                                                      auVar920[8] - (0xff < sVar1216),uVar901));
                    sVar1216 = auVar920._12_2_;
                    sVar1195 = auVar920._14_2_;
                    cVar8 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar920[0xe] - (0xff < sVar1195);
                    uVar1000 = CONCAT17(cVar8,CONCAT16((0 < sVar1216) * (sVar1216 < 0x100) *
                                                       auVar920[0xc] - (0xff < sVar1216),uVar902));
                    sVar1216 = auVar921._0_2_;
                    sVar1195 = auVar921._2_2_;
                    cVar6 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar921[2] - (0xff < sVar1195);
                    auVar1052._0_10_ =
                         CONCAT19(cVar6,CONCAT18((0 < sVar1216) * (sVar1216 < 0x100) * auVar921[0] -
                                                 (0xff < sVar1216),uVar1000));
                    sVar1216 = auVar921._4_2_;
                    auVar1052[10] =
                         (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[4] - (0xff < sVar1216);
                    sVar1216 = auVar921._6_2_;
                    cVar4 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[6] - (0xff < sVar1216);
                    auVar1052[0xb] = cVar4;
                    sVar1216 = auVar921._8_2_;
                    auVar1060[0xc] =
                         (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[8] - (0xff < sVar1216);
                    auVar1060._0_12_ = auVar1052;
                    sVar1216 = auVar921._10_2_;
                    cVar5 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[10] - (0xff < sVar1216);
                    auVar1060[0xd] = cVar5;
                    sVar1216 = auVar921._12_2_;
                    auVar1069[0xe] =
                         (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[0xc] - (0xff < sVar1216);
                    auVar1069._0_14_ = auVar1060;
                    sVar1216 = auVar921._14_2_;
                    cVar7 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[0xe] - (0xff < sVar1216);
                    auVar1069[0xf] = cVar7;
                    uVar959 = (ushort)uVar359 >> 8;
                    uVar960 = (ushort)((ulong)uVar359 >> 0x10) >> 8;
                    uVar1087 = (ushort)((ulong)uVar359 >> 0x20) >> 8;
                    uVar1098 = (ushort)((ulong)uVar359 >> 0x38);
                    uVar1103 = (ushort)uVar360 >> 8;
                    uVar1111 = (ushort)((ulong)uVar360 >> 0x10) >> 8;
                    uVar1119 = (ushort)((ulong)uVar360 >> 0x20) >> 8;
                    uVar1198 = (ushort)((ulong)uVar360 >> 0x38);
                    auVar1243 = __LC6 & auVar1069;
                    auVar1063 = local_338 & __LC6;
                    uVar939 = (ushort)uVar1029 >> 8;
                    uVar1072 = (ushort)((ulong)uVar1029 >> 0x10) >> 8;
                    uVar1074 = (ushort)((ulong)uVar1029 >> 0x20) >> 8;
                    uVar1076 = (ushort)((ulong)uVar1029 >> 0x38);
                    uVar1078 = (ushort)uVar356 >> 8;
                    uVar1082 = (ushort)((ulong)uVar356 >> 0x10) >> 8;
                    uVar1084 = (ushort)((ulong)uVar356 >> 0x20) >> 8;
                    uVar1086 = (ushort)((ulong)uVar356 >> 0x38);
                    uVar1112 = (ushort)bVar10;
                    uVar1116 = (ushort)((uint)uVar901 >> 0x18);
                    uVar1149 = (ushort)((uint6)uVar902 >> 0x28);
                    uVar1152 = (ushort)((ulong)uVar1000 >> 0x38);
                    uVar1155 = (ushort)((unkuint10)auVar1052._0_10_ >> 0x48);
                    uVar1222 = auVar1052._10_2_ >> 8;
                    uVar1224 = auVar1060._12_2_ >> 8;
                    uVar1205 = auVar1069._14_2_ >> 8;
                    bVar18 = (uVar1107 != 0) * (uVar1107 < 0x100) * (char)((ulong)uVar903 >> 0x18) -
                             (0xff < uVar1107);
                    cVar13 = (uVar1177 != 0) * (uVar1177 < 0x100) * (char)((ulong)uVar903 >> 0x38) -
                             (0xff < uVar1177);
                    uVar1027 = CONCAT13(cVar13,CONCAT12((uVar1115 != 0) * (uVar1115 < 0x100) *
                                                        (char)((ulong)uVar903 >> 0x28) -
                                                        (0xff < uVar1115),
                                                        CONCAT11(bVar18,(uVar1100 != 0) *
                                                                        (uVar1100 < 0x100) *
                                                                        (char)((ulong)uVar903 >> 8)
                                                                        - (0xff < uVar1100))));
                    cVar11 = (uVar1191 != 0) * (uVar1191 < 0x100) * (char)((ulong)uVar944 >> 0x18) -
                             (0xff < uVar1191);
                    uVar1028 = CONCAT15(cVar11,CONCAT14((uVar1188 != 0) * (uVar1188 < 0x100) *
                                                        (char)((ulong)uVar944 >> 8) -
                                                        (0xff < uVar1188),uVar1027));
                    cVar17 = (uVar1199 != 0) * (uVar1199 < 0x100) * (char)((ulong)uVar944 >> 0x38) -
                             (0xff < uVar1199);
                    uVar1000 = CONCAT17(cVar17,CONCAT16((uVar1194 != 0) * (uVar1194 < 0x100) *
                                                        (char)((ulong)uVar944 >> 0x28) -
                                                        (0xff < uVar1194),uVar1028));
                    cVar15 = (uVar1072 != 0) * (uVar1072 < 0x100) * (char)((ulong)uVar1029 >> 0x18)
                             - (0xff < uVar1072);
                    auVar1127._0_10_ =
                         CONCAT19(cVar15,CONCAT18((uVar939 != 0) * (uVar939 < 0x100) *
                                                  (char)((ulong)uVar1029 >> 8) - (0xff < uVar939),
                                                  uVar1000));
                    auVar1127[10] =
                         (uVar1074 != 0) * (uVar1074 < 0x100) * (char)((ulong)uVar1029 >> 0x28) -
                         (0xff < uVar1074);
                    cVar12 = (uVar1076 != 0) * (uVar1076 < 0x100) * (char)((ulong)uVar1029 >> 0x38)
                             - (0xff < uVar1076);
                    auVar1127[0xb] = cVar12;
                    auVar1130[0xc] =
                         (uVar1078 != 0) * (uVar1078 < 0x100) * (char)((ulong)uVar356 >> 8) -
                         (0xff < uVar1078);
                    auVar1130._0_12_ = auVar1127;
                    cVar14 = (uVar1082 != 0) * (uVar1082 < 0x100) * (char)((ulong)uVar356 >> 0x18) -
                             (0xff < uVar1082);
                    auVar1130[0xd] = cVar14;
                    auVar1133[0xe] =
                         (uVar1084 != 0) * (uVar1084 < 0x100) * (char)((ulong)uVar356 >> 0x28) -
                         (0xff < uVar1084);
                    auVar1133._0_14_ = auVar1130;
                    cVar16 = (uVar1086 != 0) * (uVar1086 < 0x100) * (char)((ulong)uVar356 >> 0x38) -
                             (0xff < uVar1086);
                    auVar1133[0xf] = cVar16;
                    uVar1100 = SUB162(_local_358,0) >> 8;
                    uVar1107 = SUB162(_local_358,2) >> 8;
                    uVar1115 = SUB162(_local_358,4) >> 8;
                    uVar1177 = SUB162(_local_358,6) >> 8;
                    uVar1188 = SUB162(_local_358,8) >> 8;
                    uVar1191 = SUB162(_local_358,10) >> 8;
                    uVar1194 = SUB162(_local_358,0xc) >> 8;
                    uVar1199 = SUB162(_local_358,0xe) >> 8;
                    auVar921 = *(undefined1 (*) [16])(pcVar1 + 0x30) & __LC6;
                    sVar1216 = auVar1095._0_2_;
                    sVar1195 = auVar1095._2_2_;
                    bVar26 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1095[2] - (0xff < sVar1195);
                    sVar1195 = auVar1095._4_2_;
                    sVar934 = auVar1095._6_2_;
                    cVar21 = (0 < sVar934) * (sVar934 < 0x100) * auVar1095[6] - (0xff < sVar934);
                    uVar941 = CONCAT13(cVar21,CONCAT12((0 < sVar1195) * (sVar1195 < 0x100) *
                                                       auVar1095[4] - (0xff < sVar1195),
                                                       CONCAT11(bVar26,(0 < sVar1216) *
                                                                       (sVar1216 < 0x100) *
                                                                       auVar1095[0] -
                                                                       (0xff < sVar1216))));
                    sVar1216 = auVar1095._8_2_;
                    sVar1195 = auVar1095._10_2_;
                    cVar19 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1095[10] - (0xff < sVar1195)
                    ;
                    uVar942 = CONCAT15(cVar19,CONCAT14((0 < sVar1216) * (sVar1216 < 0x100) *
                                                       auVar1095[8] - (0xff < sVar1216),uVar941));
                    sVar1216 = auVar1095._12_2_;
                    sVar1195 = auVar1095._14_2_;
                    cVar25 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1095[0xe] -
                             (0xff < sVar1195);
                    uVar944 = CONCAT17(cVar25,CONCAT16((0 < sVar1216) * (sVar1216 < 0x100) *
                                                       auVar1095[0xc] - (0xff < sVar1216),uVar942));
                    sVar1216 = auVar921._0_2_;
                    sVar1195 = auVar921._2_2_;
                    cVar23 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar921[2] - (0xff < sVar1195);
                    auVar1003._0_10_ =
                         CONCAT19(cVar23,CONCAT18((0 < sVar1216) * (sVar1216 < 0x100) * auVar921[0]
                                                  - (0xff < sVar1216),uVar944));
                    sVar1216 = auVar921._4_2_;
                    auVar1003[10] =
                         (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[4] - (0xff < sVar1216);
                    sVar1216 = auVar921._6_2_;
                    cVar20 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[6] - (0xff < sVar1216);
                    auVar1003[0xb] = cVar20;
                    sVar1216 = auVar921._8_2_;
                    auVar1009[0xc] =
                         (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[8] - (0xff < sVar1216);
                    auVar1009._0_12_ = auVar1003;
                    sVar1216 = auVar921._10_2_;
                    cVar22 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[10] - (0xff < sVar1216);
                    auVar1009[0xd] = cVar22;
                    sVar1216 = auVar921._12_2_;
                    auVar1015[0xe] =
                         (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[0xc] - (0xff < sVar1216);
                    auVar1015._0_14_ = auVar1009;
                    sVar1216 = auVar921._14_2_;
                    cVar24 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[0xe] - (0xff < sVar1216)
                    ;
                    auVar1015[0xf] = cVar24;
                    uVar939 = (ushort)uVar357 >> 8;
                    uVar1072 = (ushort)((ulong)uVar357 >> 0x10) >> 8;
                    uVar1074 = (ushort)((ulong)uVar357 >> 0x20) >> 8;
                    uVar1076 = (ushort)((ulong)uVar357 >> 0x38);
                    uVar1078 = (ushort)uVar358 >> 8;
                    uVar1082 = (ushort)((ulong)uVar358 >> 0x10) >> 8;
                    uVar1084 = (ushort)((ulong)uVar358 >> 0x20) >> 8;
                    uVar1086 = (ushort)((ulong)uVar358 >> 0x38);
                    bVar39 = (uVar1072 != 0) * (uVar1072 < 0x100) * (char)((ulong)uVar357 >> 0x18) -
                             (0xff < uVar1072);
                    cVar29 = (uVar1076 != 0) * (uVar1076 < 0x100) * (char)((ulong)uVar357 >> 0x38) -
                             (0xff < uVar1076);
                    uVar901 = CONCAT13(cVar29,CONCAT12((uVar1074 != 0) * (uVar1074 < 0x100) *
                                                       (char)((ulong)uVar357 >> 0x28) -
                                                       (0xff < uVar1074),
                                                       CONCAT11(bVar39,(uVar939 != 0) *
                                                                       (uVar939 < 0x100) *
                                                                       (char)((ulong)uVar357 >> 8) -
                                                                       (0xff < uVar939))));
                    cVar27 = (uVar1082 != 0) * (uVar1082 < 0x100) * (char)((ulong)uVar358 >> 0x18) -
                             (0xff < uVar1082);
                    uVar902 = CONCAT15(cVar27,CONCAT14((uVar1078 != 0) * (uVar1078 < 0x100) *
                                                       (char)((ulong)uVar358 >> 8) -
                                                       (0xff < uVar1078),uVar901));
                    cVar33 = (uVar1086 != 0) * (uVar1086 < 0x100) * (char)((ulong)uVar358 >> 0x38) -
                             (0xff < uVar1086);
                    uVar903 = CONCAT17(cVar33,CONCAT16((uVar1084 != 0) * (uVar1084 < 0x100) *
                                                       (char)((ulong)uVar358 >> 0x28) -
                                                       (0xff < uVar1084),uVar902));
                    cVar31 = (uVar960 != 0) * (uVar960 < 0x100) * (char)((ulong)uVar359 >> 0x18) -
                             (0xff < uVar960);
                    auVar966._0_10_ =
                         CONCAT19(cVar31,CONCAT18((uVar959 != 0) * (uVar959 < 0x100) *
                                                  (char)((ulong)uVar359 >> 8) - (0xff < uVar959),
                                                  uVar903));
                    auVar966[10] = (uVar1087 != 0) * (uVar1087 < 0x100) *
                                   (char)((ulong)uVar359 >> 0x28) - (0xff < uVar1087);
                    cVar28 = (uVar1098 != 0) * (uVar1098 < 0x100) * (char)((ulong)uVar359 >> 0x38) -
                             (0xff < uVar1098);
                    auVar966[0xb] = cVar28;
                    auVar975[0xc] =
                         (uVar1103 != 0) * (uVar1103 < 0x100) * (char)((ulong)uVar360 >> 8) -
                         (0xff < uVar1103);
                    auVar975._0_12_ = auVar966;
                    cVar30 = (uVar1111 != 0) * (uVar1111 < 0x100) * (char)((ulong)uVar360 >> 0x18) -
                             (0xff < uVar1111);
                    auVar975[0xd] = cVar30;
                    auVar985[0xe] =
                         (uVar1119 != 0) * (uVar1119 < 0x100) * (char)((ulong)uVar360 >> 0x28) -
                         (0xff < uVar1119);
                    auVar985._0_14_ = auVar975;
                    cVar32 = (uVar1198 != 0) * (uVar1198 < 0x100) * (char)((ulong)uVar360 >> 0x38) -
                             (0xff < uVar1198);
                    auVar985[0xf] = cVar32;
                    auVar980 = __LC6 & auVar1015;
                    uVar1072 = (ushort)bVar26;
                    uVar1074 = (ushort)((uint)uVar941 >> 0x18);
                    uVar1076 = (ushort)((uint6)uVar942 >> 0x28);
                    uVar1078 = (ushort)((ulong)uVar944 >> 0x38);
                    uVar1082 = (ushort)((unkuint10)auVar1003._0_10_ >> 0x48);
                    uVar1198 = auVar1003._10_2_ >> 8;
                    uVar1202 = auVar1009._12_2_ >> 8;
                    uVar1122 = auVar1015._14_2_ >> 8;
                    sVar1216 = auVar1243._0_2_;
                    sVar997 = auVar1243._2_2_;
                    sVar1023 = auVar1243._4_2_;
                    sVar1169 = auVar1243._6_2_;
                    sVar1210 = auVar1243._8_2_;
                    sVar1110 = auVar1243._10_2_;
                    sVar1124 = auVar1243._12_2_;
                    sVar1195 = auVar1243._14_2_;
                    cVar46 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1243[0xe] -
                             (0xff < sVar1195);
                    sVar1195 = auVar980._0_2_;
                    bVar36 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar980[0] - (0xff < sVar1195);
                    uVar939 = CONCAT11(bVar36,cVar46);
                    sVar1195 = auVar980._2_2_;
                    bVar35 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar980[2] - (0xff < sVar1195);
                    uVar588 = CONCAT12(bVar35,uVar939);
                    sVar1195 = auVar980._4_2_;
                    bVar34 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar980[4] - (0xff < sVar1195);
                    uVar877 = CONCAT13(bVar34,uVar588);
                    sVar1195 = auVar980._6_2_;
                    bVar38 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar980[6] - (0xff < sVar1195);
                    uVar759 = CONCAT14(bVar38,uVar877);
                    sVar1195 = auVar980._8_2_;
                    bVar37 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar980[8] - (0xff < sVar1195);
                    auVar848[5] = bVar37;
                    auVar848._0_5_ = uVar759;
                    sVar1151 = auVar980._10_2_;
                    sVar1174 = auVar980._12_2_;
                    sVar1193 = auVar980._14_2_;
                    cVar7 = (uVar1205 != 0) * (uVar1205 < 0x100) * cVar7 - (0xff < uVar1205);
                    bVar26 = (uVar1072 != 0) * (uVar1072 < 0x100) * bVar26 - (0xff < uVar1072);
                    uVar1072 = CONCAT11(bVar26,cVar7);
                    bVar40 = (uVar1074 != 0) * (uVar1074 < 0x100) * cVar21 - (0xff < uVar1074);
                    uVar589 = CONCAT12(bVar40,uVar1072);
                    bVar41 = (uVar1076 != 0) * (uVar1076 < 0x100) * cVar19 - (0xff < uVar1076);
                    uVar887 = CONCAT13(bVar41,uVar589);
                    bVar42 = (uVar1078 != 0) * (uVar1078 < 0x100) * cVar25 - (0xff < uVar1078);
                    uVar760 = CONCAT14(bVar42,uVar887);
                    bVar43 = (uVar1082 != 0) * (uVar1082 < 0x100) * cVar23 - (0xff < uVar1082);
                    auVar852[5] = bVar43;
                    auVar852._0_5_ = uVar760;
                    auVar1013 = __LC6 & auVar1133;
                    auVar1095 = __LC6 & auVar985;
                    uVar1083 = (ushort)bVar18;
                    uVar1085 = (ushort)((uint)uVar1027 >> 0x18);
                    uVar1088 = (ushort)((uint6)uVar1028 >> 0x28);
                    uVar1099 = (ushort)((ulong)uVar1000 >> 0x38);
                    uVar1101 = (ushort)((unkuint10)auVar1127._0_10_ >> 0x48);
                    uVar1104 = auVar1127._10_2_ >> 8;
                    uVar1108 = auVar1130._12_2_ >> 8;
                    uVar959 = auVar1133._14_2_ >> 8;
                    uVar1076 = (ushort)bVar39;
                    uVar1078 = (ushort)((uint)uVar901 >> 0x18);
                    uVar1082 = (ushort)((uint6)uVar902 >> 0x28);
                    uVar1084 = (ushort)((ulong)uVar903 >> 0x38);
                    uVar1086 = (ushort)((unkuint10)auVar966._0_10_ >> 0x48);
                    uVar1103 = auVar966._10_2_ >> 8;
                    uVar1111 = auVar975._12_2_ >> 8;
                    uVar1119 = auVar985._14_2_ >> 8;
                    sVar1195 = auVar1013._0_2_;
                    sVar1102 = auVar1013._2_2_;
                    sVar1113 = auVar1013._4_2_;
                    sVar1171 = auVar1013._6_2_;
                    sVar1212 = auVar1013._8_2_;
                    sVar1114 = auVar1013._10_2_;
                    sVar1138 = auVar1013._12_2_;
                    sVar934 = auVar1013._14_2_;
                    cVar21 = (0 < sVar934) * (sVar934 < 0x100) * auVar1013[0xe] - (0xff < sVar934);
                    sVar934 = auVar1095._0_2_;
                    bVar44 = (0 < sVar934) * (sVar934 < 0x100) * auVar1095[0] - (0xff < sVar934);
                    uVar1074 = CONCAT11(bVar44,cVar21);
                    sVar934 = auVar1095._2_2_;
                    bVar45 = (0 < sVar934) * (sVar934 < 0x100) * auVar1095[2] - (0xff < sVar934);
                    uVar606 = CONCAT12(bVar45,uVar1074);
                    sVar934 = auVar1095._4_2_;
                    bVar47 = (0 < sVar934) * (sVar934 < 0x100) * auVar1095[4] - (0xff < sVar934);
                    uVar881 = CONCAT13(bVar47,uVar606);
                    sVar934 = auVar1095._6_2_;
                    bVar49 = (0 < sVar934) * (sVar934 < 0x100) * auVar1095[6] - (0xff < sVar934);
                    uVar765 = CONCAT14(bVar49,uVar881);
                    sVar934 = auVar1095._8_2_;
                    bVar52 = (0 < sVar934) * (sVar934 < 0x100) * auVar1095[8] - (0xff < sVar934);
                    auVar849[5] = bVar52;
                    auVar849._0_5_ = uVar765;
                    sVar1154 = auVar1095._10_2_;
                    sVar1179 = auVar1095._12_2_;
                    sVar1197 = auVar1095._14_2_;
                    cVar16 = (uVar959 != 0) * (uVar959 < 0x100) * cVar16 - (0xff < uVar959);
                    bVar48 = (uVar1076 != 0) * (uVar1076 < 0x100) * bVar39 - (0xff < uVar1076);
                    uVar1076 = CONCAT11(bVar48,cVar16);
                    bVar53 = (uVar1078 != 0) * (uVar1078 < 0x100) * cVar29 - (0xff < uVar1078);
                    uVar607 = CONCAT12(bVar53,uVar1076);
                    bVar39 = (uVar1082 != 0) * (uVar1082 < 0x100) * cVar27 - (0xff < uVar1082);
                    uVar878 = CONCAT13(bVar39,uVar607);
                    bVar51 = (uVar1084 != 0) * (uVar1084 < 0x100) * cVar33 - (0xff < uVar1084);
                    uVar766 = CONCAT14(bVar51,uVar878);
                    bVar50 = (uVar1086 != 0) * (uVar1086 < 0x100) * cVar31 - (0xff < uVar1086);
                    auVar853[5] = bVar50;
                    auVar853._0_5_ = uVar766;
                    auVar920 = local_348 & __LC6;
                    auVar921 = _local_358 & __LC6;
                    sVar934 = auVar921._0_2_;
                    sVar995 = auVar921._2_2_;
                    bVar54 = (0 < sVar995) * (sVar995 < 0x100) * auVar921[2] - (0xff < sVar995);
                    sVar995 = auVar921._4_2_;
                    sVar1020 = auVar921._6_2_;
                    cVar19 = (0 < sVar1020) * (sVar1020 < 0x100) * auVar921[6] - (0xff < sVar1020);
                    uVar901 = CONCAT13(cVar19,CONCAT12((0 < sVar995) * (sVar995 < 0x100) *
                                                       auVar921[4] - (0xff < sVar995),
                                                       CONCAT11(bVar54,(0 < sVar934) *
                                                                       (sVar934 < 0x100) *
                                                                       auVar921[0] -
                                                                       (0xff < sVar934))));
                    sVar934 = auVar921._8_2_;
                    sVar995 = auVar921._10_2_;
                    cVar25 = (0 < sVar995) * (sVar995 < 0x100) * auVar921[10] - (0xff < sVar995);
                    uVar902 = CONCAT15(cVar25,CONCAT14((0 < sVar934) * (sVar934 < 0x100) *
                                                       auVar921[8] - (0xff < sVar934),uVar901));
                    sVar934 = auVar921._12_2_;
                    sVar995 = auVar921._14_2_;
                    cVar23 = (0 < sVar995) * (sVar995 < 0x100) * auVar921[0xe] - (0xff < sVar995);
                    uVar903 = CONCAT17(cVar23,CONCAT16((0 < sVar934) * (sVar934 < 0x100) *
                                                       auVar921[0xc] - (0xff < sVar934),uVar902));
                    sVar934 = auVar920._0_2_;
                    sVar995 = auVar920._2_2_;
                    cVar29 = (0 < sVar995) * (sVar995 < 0x100) * auVar920[2] - (0xff < sVar995);
                    auVar967._0_10_ =
                         CONCAT19(cVar29,CONCAT18((0 < sVar934) * (sVar934 < 0x100) * auVar920[0] -
                                                  (0xff < sVar934),uVar903));
                    sVar934 = auVar920._4_2_;
                    auVar967[10] = (0 < sVar934) * (sVar934 < 0x100) * auVar920[4] -
                                   (0xff < sVar934);
                    sVar934 = auVar920._6_2_;
                    cVar27 = (0 < sVar934) * (sVar934 < 0x100) * auVar920[6] - (0xff < sVar934);
                    auVar967[0xb] = cVar27;
                    sVar934 = auVar920._8_2_;
                    auVar976[0xc] =
                         (0 < sVar934) * (sVar934 < 0x100) * auVar920[8] - (0xff < sVar934);
                    auVar976._0_12_ = auVar967;
                    sVar934 = auVar920._10_2_;
                    cVar33 = (0 < sVar934) * (sVar934 < 0x100) * auVar920[10] - (0xff < sVar934);
                    auVar976[0xd] = cVar33;
                    sVar934 = auVar920._12_2_;
                    auVar986[0xe] =
                         (0 < sVar934) * (sVar934 < 0x100) * auVar920[0xc] - (0xff < sVar934);
                    auVar986._0_14_ = auVar976;
                    sVar934 = auVar920._14_2_;
                    cVar31 = (0 < sVar934) * (sVar934 < 0x100) * auVar920[0xe] - (0xff < sVar934);
                    auVar986[0xf] = cVar31;
                    uVar1078 = local_348._0_2_ >> 8;
                    uVar1082 = local_348._2_2_ >> 8;
                    uVar1084 = local_348._4_2_ >> 8;
                    uVar1086 = local_348._6_2_ >> 8;
                    uVar959 = local_348._8_2_ >> 8;
                    uVar960 = local_348._10_2_ >> 8;
                    uVar1087 = local_348._12_2_ >> 8;
                    uVar1098 = local_348._14_2_ >> 8;
                    bVar62 = (uVar1107 != 0) * (uVar1107 < 0x100) * SUB161(_local_358,3) -
                             (0xff < uVar1107);
                    cVar59 = (uVar1177 != 0) * (uVar1177 < 0x100) * SUB161(_local_358,7) -
                             (0xff < uVar1177);
                    uVar1027 = CONCAT13(cVar59,CONCAT12((uVar1115 != 0) * (uVar1115 < 0x100) *
                                                        SUB161(_local_358,5) - (0xff < uVar1115),
                                                        CONCAT11(bVar62,(uVar1100 != 0) *
                                                                        (uVar1100 < 0x100) *
                                                                        SUB161(_local_358,1) -
                                                                        (0xff < uVar1100))));
                    cVar57 = (uVar1191 != 0) * (uVar1191 < 0x100) * SUB161(_local_358,0xb) -
                             (0xff < uVar1191);
                    uVar1028 = CONCAT15(cVar57,CONCAT14((uVar1188 != 0) * (uVar1188 < 0x100) *
                                                        SUB161(_local_358,9) - (0xff < uVar1188),
                                                        uVar1027));
                    cVar56 = (uVar1199 != 0) * (uVar1199 < 0x100) * SUB161(_local_358,0xf) -
                             (0xff < uVar1199);
                    uVar1029 = CONCAT17(cVar56,CONCAT16((uVar1194 != 0) * (uVar1194 < 0x100) *
                                                        SUB161(_local_358,0xd) - (0xff < uVar1194),
                                                        uVar1028));
                    cVar55 = (uVar1082 != 0) * (uVar1082 < 0x100) * local_348[3] - (0xff < uVar1082)
                    ;
                    auVar1053._0_10_ =
                         CONCAT19(cVar55,CONCAT18((uVar1078 != 0) * (uVar1078 < 0x100) *
                                                  local_348[1] - (0xff < uVar1078),uVar1029));
                    auVar1053[10] =
                         (uVar1084 != 0) * (uVar1084 < 0x100) * local_348[5] - (0xff < uVar1084);
                    cVar61 = (uVar1086 != 0) * (uVar1086 < 0x100) * local_348[7] - (0xff < uVar1086)
                    ;
                    auVar1053[0xb] = cVar61;
                    auVar1061[0xc] =
                         (uVar959 != 0) * (uVar959 < 0x100) * local_348[9] - (0xff < uVar959);
                    auVar1061._0_12_ = auVar1053;
                    cVar58 = (uVar960 != 0) * (uVar960 < 0x100) * local_348[0xb] - (0xff < uVar960);
                    auVar1061[0xd] = cVar58;
                    auVar1070[0xe] =
                         (uVar1087 != 0) * (uVar1087 < 0x100) * local_348[0xd] - (0xff < uVar1087);
                    auVar1070._0_14_ = auVar1061;
                    cVar60 = (uVar1098 != 0) * (uVar1098 < 0x100) * local_348[0xf] -
                             (0xff < uVar1098);
                    auVar1070[0xf] = cVar60;
                    auVar921 = local_328 & __LC6;
                    sVar934 = auVar1063._0_2_;
                    sVar995 = auVar1063._2_2_;
                    bVar70 = (0 < sVar995) * (sVar995 < 0x100) * auVar1063[2] - (0xff < sVar995);
                    sVar995 = auVar1063._4_2_;
                    sVar1020 = auVar1063._6_2_;
                    cVar69 = (0 < sVar1020) * (sVar1020 < 0x100) * auVar1063[6] - (0xff < sVar1020);
                    uVar941 = CONCAT13(cVar69,CONCAT12((0 < sVar995) * (sVar995 < 0x100) *
                                                       auVar1063[4] - (0xff < sVar995),
                                                       CONCAT11(bVar70,(0 < sVar934) *
                                                                       (sVar934 < 0x100) *
                                                                       auVar1063[0] -
                                                                       (0xff < sVar934))));
                    sVar934 = auVar1063._8_2_;
                    sVar995 = auVar1063._10_2_;
                    cVar67 = (0 < sVar995) * (sVar995 < 0x100) * auVar1063[10] - (0xff < sVar995);
                    uVar942 = CONCAT15(cVar67,CONCAT14((0 < sVar934) * (sVar934 < 0x100) *
                                                       auVar1063[8] - (0xff < sVar934),uVar941));
                    sVar934 = auVar1063._12_2_;
                    sVar995 = auVar1063._14_2_;
                    cVar65 = (0 < sVar995) * (sVar995 < 0x100) * auVar1063[0xe] - (0xff < sVar995);
                    uVar944 = CONCAT17(cVar65,CONCAT16((0 < sVar934) * (sVar934 < 0x100) *
                                                       auVar1063[0xc] - (0xff < sVar934),uVar942));
                    sVar934 = auVar921._0_2_;
                    sVar995 = auVar921._2_2_;
                    cVar63 = (0 < sVar995) * (sVar995 < 0x100) * auVar921[2] - (0xff < sVar995);
                    auVar1182._0_10_ =
                         CONCAT19(cVar63,CONCAT18((0 < sVar934) * (sVar934 < 0x100) * auVar921[0] -
                                                  (0xff < sVar934),uVar944));
                    sVar934 = auVar921._4_2_;
                    auVar1182[10] =
                         (0 < sVar934) * (sVar934 < 0x100) * auVar921[4] - (0xff < sVar934);
                    sVar934 = auVar921._6_2_;
                    cVar68 = (0 < sVar934) * (sVar934 < 0x100) * auVar921[6] - (0xff < sVar934);
                    auVar1182[0xb] = cVar68;
                    sVar934 = auVar921._8_2_;
                    auVar1184[0xc] =
                         (0 < sVar934) * (sVar934 < 0x100) * auVar921[8] - (0xff < sVar934);
                    auVar1184._0_12_ = auVar1182;
                    sVar934 = auVar921._10_2_;
                    cVar66 = (0 < sVar934) * (sVar934 < 0x100) * auVar921[10] - (0xff < sVar934);
                    auVar1184[0xd] = cVar66;
                    sVar934 = auVar921._12_2_;
                    auVar1187[0xe] =
                         (0 < sVar934) * (sVar934 < 0x100) * auVar921[0xc] - (0xff < sVar934);
                    auVar1187._0_14_ = auVar1184;
                    sVar934 = auVar921._14_2_;
                    cVar64 = (0 < sVar934) * (sVar934 < 0x100) * auVar921[0xe] - (0xff < sVar934);
                    auVar1187[0xf] = cVar64;
                    auVar1063 = __LC6 & auVar1187;
                    uVar1177 = (ushort)bVar70;
                    uVar1188 = (ushort)((uint)uVar941 >> 0x18);
                    uVar1191 = (ushort)((uint6)uVar942 >> 0x28);
                    uVar1194 = (ushort)((ulong)uVar944 >> 0x38);
                    uVar1199 = (ushort)((unkuint10)auVar1182._0_10_ >> 0x48);
                    uVar1229 = auVar1182._10_2_ >> 8;
                    uVar1231 = auVar1184._12_2_ >> 8;
                    uVar1233 = auVar1187._14_2_ >> 8;
                    uVar1078 = local_338._0_2_ >> 8;
                    uVar1082 = local_338._2_2_ >> 8;
                    uVar1084 = local_338._4_2_ >> 8;
                    uVar1086 = local_338._6_2_ >> 8;
                    uVar959 = local_338._8_2_ >> 8;
                    uVar960 = local_338._10_2_ >> 8;
                    uVar1087 = local_338._12_2_ >> 8;
                    uVar1098 = local_338._14_2_ >> 8;
                    bVar79 = (uVar1082 != 0) * (uVar1082 < 0x100) * local_338[3] - (0xff < uVar1082)
                    ;
                    cVar77 = (uVar1086 != 0) * (uVar1086 < 0x100) * local_338[7] - (0xff < uVar1086)
                    ;
                    uVar941 = CONCAT13(cVar77,CONCAT12((uVar1084 != 0) * (uVar1084 < 0x100) *
                                                       local_338[5] - (0xff < uVar1084),
                                                       CONCAT11(bVar79,(uVar1078 != 0) *
                                                                       (uVar1078 < 0x100) *
                                                                       local_338[1] -
                                                                       (0xff < uVar1078))));
                    cVar73 = (uVar960 != 0) * (uVar960 < 0x100) * local_338[0xb] - (0xff < uVar960);
                    uVar942 = CONCAT15(cVar73,CONCAT14((uVar959 != 0) * (uVar959 < 0x100) *
                                                       local_338[9] - (0xff < uVar959),uVar941));
                    cVar72 = (uVar1098 != 0) * (uVar1098 < 0x100) * local_338[0xf] -
                             (0xff < uVar1098);
                    uVar944 = CONCAT17(cVar72,CONCAT16((uVar1087 != 0) * (uVar1087 < 0x100) *
                                                       local_338[0xd] - (0xff < uVar1087),uVar942));
                    cVar74 = (uVar1139 != 0) * (uVar1139 < 0x100) * local_328[3] - (0xff < uVar1139)
                    ;
                    auVar1004._0_10_ =
                         CONCAT19(cVar74,CONCAT18((uVar1136 != 0) * (uVar1136 < 0x100) *
                                                  local_328[1] - (0xff < uVar1136),uVar944));
                    auVar1004[10] =
                         (uVar1142 != 0) * (uVar1142 < 0x100) * local_328[5] - (0xff < uVar1142);
                    cVar76 = (uVar1145 != 0) * (uVar1145 < 0x100) * local_328[7] - (0xff < uVar1145)
                    ;
                    auVar1004[0xb] = cVar76;
                    auVar1010[0xc] =
                         (uVar1046 != 0) * (uVar1046 < 0x100) * local_328[9] - (0xff < uVar1046);
                    auVar1010._0_12_ = auVar1004;
                    cVar75 = (uVar1073 != 0) * (uVar1073 < 0x100) * local_328[0xb] -
                             (0xff < uVar1073);
                    auVar1010[0xd] = cVar75;
                    auVar1016[0xe] =
                         (uVar1075 != 0) * (uVar1075 < 0x100) * local_328[0xd] - (0xff < uVar1075);
                    auVar1016._0_14_ = auVar1010;
                    cVar71 = (uVar1077 != 0) * (uVar1077 < 0x100) * local_328[0xf] -
                             (0xff < uVar1077);
                    auVar1016[0xf] = cVar71;
                    auVar920 = __LC6 & auVar986;
                    uVar959 = (ushort)bVar54;
                    uVar960 = (ushort)((uint)uVar901 >> 0x18);
                    uVar1087 = (ushort)((uint6)uVar902 >> 0x28);
                    uVar1098 = (ushort)((ulong)uVar903 >> 0x38);
                    uVar1100 = (ushort)((unkuint10)auVar967._0_10_ >> 0x48);
                    uVar1107 = auVar967._10_2_ >> 8;
                    uVar1115 = auVar976._12_2_ >> 8;
                    uVar1082 = auVar986._14_2_ >> 8;
                    sVar934 = auVar920._0_2_;
                    sVar1020 = auVar920._2_2_;
                    sVar1143 = auVar920._4_2_;
                    sVar1189 = auVar920._6_2_;
                    sVar1221 = auVar920._8_2_;
                    sVar1118 = auVar920._10_2_;
                    sVar1141 = auVar920._12_2_;
                    sVar995 = auVar920._14_2_;
                    cVar78 = (0 < sVar995) * (sVar995 < 0x100) * auVar920[0xe] - (0xff < sVar995);
                    sVar995 = auVar1063._0_2_;
                    bVar80 = (0 < sVar995) * (sVar995 < 0x100) * auVar1063[0] - (0xff < sVar995);
                    uVar1078 = CONCAT11(bVar80,cVar78);
                    sVar995 = auVar1063._2_2_;
                    bVar81 = (0 < sVar995) * (sVar995 < 0x100) * auVar1063[2] - (0xff < sVar995);
                    uVar608 = CONCAT12(bVar81,uVar1078);
                    sVar995 = auVar1063._4_2_;
                    bVar82 = (0 < sVar995) * (sVar995 < 0x100) * auVar1063[4] - (0xff < sVar995);
                    uVar888 = CONCAT13(bVar82,uVar608);
                    sVar995 = auVar1063._6_2_;
                    bVar83 = (0 < sVar995) * (sVar995 < 0x100) * auVar1063[6] - (0xff < sVar995);
                    uVar767 = CONCAT14(bVar83,uVar888);
                    sVar995 = auVar1063._8_2_;
                    bVar85 = (0 < sVar995) * (sVar995 < 0x100) * auVar1063[8] - (0xff < sVar995);
                    auVar847[5] = bVar85;
                    auVar847._0_5_ = uVar767;
                    sVar1157 = auVar1063._10_2_;
                    sVar1176 = auVar1063._12_2_;
                    sVar1201 = auVar1063._14_2_;
                    cVar31 = (uVar1082 != 0) * (uVar1082 < 0x100) * cVar31 - (0xff < uVar1082);
                    bVar70 = (uVar1177 != 0) * (uVar1177 < 0x100) * bVar70 - (0xff < uVar1177);
                    uVar1082 = CONCAT11(bVar70,cVar31);
                    bVar87 = (uVar1188 != 0) * (uVar1188 < 0x100) * cVar69 - (0xff < uVar1188);
                    uVar609 = CONCAT12(bVar87,uVar1082);
                    bVar84 = (uVar1191 != 0) * (uVar1191 < 0x100) * cVar67 - (0xff < uVar1191);
                    uVar756 = CONCAT13(bVar84,uVar609);
                    bVar86 = (uVar1194 != 0) * (uVar1194 < 0x100) * cVar65 - (0xff < uVar1194);
                    uVar768 = CONCAT14(bVar86,uVar756);
                    bVar88 = (uVar1199 != 0) * (uVar1199 < 0x100) * cVar63 - (0xff < uVar1199);
                    auVar851[5] = bVar88;
                    auVar851._0_5_ = uVar768;
                    auVar1185 = __LC6 & auVar1016;
                    auVar921 = __LC6 & auVar1070;
                    uVar1086 = (ushort)bVar79;
                    uVar1177 = (ushort)((uint)uVar941 >> 0x18);
                    uVar1188 = (ushort)((uint6)uVar942 >> 0x28);
                    uVar1191 = (ushort)((ulong)uVar944 >> 0x38);
                    uVar1194 = (ushort)((unkuint10)auVar1004._0_10_ >> 0x48);
                    uVar1199 = auVar1004._10_2_ >> 8;
                    uVar1205 = auVar1010._12_2_ >> 8;
                    uVar1136 = auVar1016._14_2_ >> 8;
                    uVar1139 = (ushort)bVar62;
                    uVar1142 = (ushort)((uint)uVar1027 >> 0x18);
                    uVar1145 = (ushort)((uint6)uVar1028 >> 0x28);
                    uVar1046 = (ushort)((ulong)uVar1029 >> 0x38);
                    uVar1073 = (ushort)((unkuint10)auVar1053._0_10_ >> 0x48);
                    uVar1075 = auVar1053._10_2_ >> 8;
                    uVar1077 = auVar1061._12_2_ >> 8;
                    uVar1079 = auVar1070._14_2_ >> 8;
                    sVar995 = auVar921._0_2_;
                    sVar1105 = auVar921._2_2_;
                    sVar1146 = auVar921._4_2_;
                    sVar1192 = auVar921._6_2_;
                    sVar1106 = auVar921._8_2_;
                    sVar1121 = auVar921._10_2_;
                    sVar1144 = auVar921._12_2_;
                    sVar1147 = auVar921._14_2_;
                    cVar69 = (0 < sVar1147) * (sVar1147 < 0x100) * auVar921[0xe] - (0xff < sVar1147)
                    ;
                    sVar1147 = auVar1185._0_2_;
                    bVar89 = (0 < sVar1147) * (sVar1147 < 0x100) * auVar1185[0] - (0xff < sVar1147);
                    uVar1084 = CONCAT11(bVar89,cVar69);
                    sVar1147 = auVar1185._2_2_;
                    bVar90 = (0 < sVar1147) * (sVar1147 < 0x100) * auVar1185[2] - (0xff < sVar1147);
                    uVar610 = CONCAT12(bVar90,uVar1084);
                    sVar1147 = auVar1185._4_2_;
                    bVar91 = (0 < sVar1147) * (sVar1147 < 0x100) * auVar1185[4] - (0xff < sVar1147);
                    uVar757 = CONCAT13(bVar91,uVar610);
                    sVar1147 = auVar1185._6_2_;
                    bVar92 = (0 < sVar1147) * (sVar1147 < 0x100) * auVar1185[6] - (0xff < sVar1147);
                    uVar769 = CONCAT14(bVar92,uVar757);
                    sVar1147 = auVar1185._8_2_;
                    bVar93 = (0 < sVar1147) * (sVar1147 < 0x100) * auVar1185[8] - (0xff < sVar1147);
                    auVar850[5] = bVar93;
                    auVar850._0_5_ = uVar769;
                    sVar1147 = auVar1185._10_2_;
                    sVar1190 = auVar1185._12_2_;
                    sVar1204 = auVar1185._14_2_;
                    cVar60 = (uVar1079 != 0) * (uVar1079 < 0x100) * cVar60 - (0xff < uVar1079);
                    bVar79 = (uVar1086 != 0) * (uVar1086 < 0x100) * bVar79 - (0xff < uVar1086);
                    uVar1086 = CONCAT11(bVar79,cVar60);
                    bVar94 = (uVar1177 != 0) * (uVar1177 < 0x100) * cVar77 - (0xff < uVar1177);
                    uVar611 = CONCAT12(bVar94,uVar1086);
                    bVar95 = (uVar1188 != 0) * (uVar1188 < 0x100) * cVar73 - (0xff < uVar1188);
                    uVar758 = CONCAT13(bVar95,uVar611);
                    bVar96 = (uVar1191 != 0) * (uVar1191 < 0x100) * cVar72 - (0xff < uVar1191);
                    uVar770 = CONCAT14(bVar96,uVar758);
                    bVar97 = (uVar1194 != 0) * (uVar1194 < 0x100) * cVar74 - (0xff < uVar1194);
                    auVar854[5] = bVar97;
                    auVar854._0_5_ = uVar770;
                    auVar847._6_8_ = 0;
                    auVar158[0xe] = cVar78;
                    auVar158._0_14_ = auVar847 << 0x38;
                    uVar357 = CONCAT26(auVar158._13_2_,
                                       CONCAT15((0 < sVar1141) * (sVar1141 < 0x100) * auVar920[0xc]
                                                - (0xff < sVar1141),uVar767));
                    auVar795._4_8_ = 0;
                    auVar795._0_4_ = uVar888;
                    auVar238._12_3_ = (int3)((ulong)uVar357 >> 0x28);
                    auVar238._0_12_ = auVar795 << 0x38;
                    uVar1029 = CONCAT44(auVar238._11_4_,
                                        CONCAT13((0 < sVar1118) * (sVar1118 < 0x100) * auVar920[10]
                                                 - (0xff < sVar1118),uVar608));
                    auVar323._10_5_ = (int5)((ulong)uVar1029 >> 0x18);
                    auVar323._0_10_ = (unkuint10)uVar1078 << 0x38;
                    uVar903 = CONCAT62(auVar323._9_6_,
                                       CONCAT11((0 < sVar1221) * (sVar1221 < 0x100) * auVar920[8] -
                                                (0xff < sVar1221),cVar78));
                    auVar491._7_8_ = 0;
                    auVar491._0_7_ = (uint7)((ulong)uVar903 >> 8);
                    Var362 = CONCAT81(SUB158(auVar491 << 0x40,7),
                                      (0 < sVar1189) * (sVar1189 < 0x100) * auVar920[6] -
                                      (0xff < sVar1189));
                    auVar684._9_6_ = 0;
                    auVar684._0_9_ = Var362;
                    auVar492._1_10_ = SUB1510(auVar684 << 0x30,5);
                    auVar492[0] = (0 < sVar1143) * (sVar1143 < 0x100) * auVar920[4] -
                                  (0xff < sVar1143);
                    auVar685._11_4_ = 0;
                    auVar685._0_11_ = auVar492;
                    auVar493._1_12_ = SUB1512(auVar685 << 0x20,3);
                    auVar493[0] = (0 < sVar1020) * (sVar1020 < 0x100) * auVar920[2] -
                                  (0xff < sVar1020);
                    auVar848._6_8_ = 0;
                    auVar159[0xe] = cVar46;
                    auVar159._0_14_ = auVar848 << 0x38;
                    uVar358 = CONCAT26(auVar159._13_2_,
                                       CONCAT15((0 < sVar1124) * (sVar1124 < 0x100) * auVar1243[0xc]
                                                - (0xff < sVar1124),uVar759));
                    auVar796._4_8_ = 0;
                    auVar796._0_4_ = uVar877;
                    auVar239._12_3_ = (int3)((ulong)uVar358 >> 0x28);
                    auVar239._0_12_ = auVar796 << 0x38;
                    uVar356 = CONCAT44(auVar239._11_4_,
                                       CONCAT13((0 < sVar1110) * (sVar1110 < 0x100) * auVar1243[10]
                                                - (0xff < sVar1110),uVar588));
                    auVar324._10_5_ = (int5)((ulong)uVar356 >> 0x18);
                    auVar324._0_10_ = (unkuint10)uVar939 << 0x38;
                    uVar944 = CONCAT62(auVar324._9_6_,
                                       CONCAT11((0 < sVar1210) * (sVar1210 < 0x100) * auVar1243[8] -
                                                (0xff < sVar1210),cVar46));
                    auVar494._7_8_ = 0;
                    auVar494._0_7_ = (uint7)((ulong)uVar944 >> 8);
                    Var398 = CONCAT81(SUB158(auVar494 << 0x40,7),
                                      (0 < sVar1169) * (sVar1169 < 0x100) * auVar1243[6] -
                                      (0xff < sVar1169));
                    auVar686._9_6_ = 0;
                    auVar686._0_9_ = Var398;
                    auVar495._1_10_ = SUB1510(auVar686 << 0x30,5);
                    auVar495[0] = (0 < sVar1023) * (sVar1023 < 0x100) * auVar1243[4] -
                                  (0xff < sVar1023);
                    auVar687._11_4_ = 0;
                    auVar687._0_11_ = auVar495;
                    auVar496._1_12_ = SUB1512(auVar687 << 0x20,3);
                    auVar496[0] = (0 < sVar997) * (sVar997 < 0x100) * auVar1243[2] -
                                  (0xff < sVar997);
                    sVar1218 = (ushort)bVar36 - (ushort)bVar80;
                    sVar1220 = (ushort)bVar35 - (ushort)bVar81;
                    sVar1223 = (ushort)bVar34 - (ushort)bVar82;
                    sVar997 = (ushort)bVar38 - (ushort)bVar83;
                    sVar1225 = (ushort)bVar37 - (ushort)bVar85;
                    sVar1230 = (ushort)(byte)((0 < sVar1151) * (sVar1151 < 0x100) * auVar980[10] -
                                             (0xff < sVar1151)) -
                               (ushort)(byte)((0 < sVar1157) * (sVar1157 < 0x100) * auVar1063[10] -
                                             (0xff < sVar1157));
                    sVar1232 = (ushort)(byte)((0 < sVar1174) * (sVar1174 < 0x100) * auVar980[0xc] -
                                             (0xff < sVar1174)) -
                               (ushort)(byte)((0 < sVar1176) * (sVar1176 < 0x100) * auVar1063[0xc] -
                                             (0xff < sVar1176));
                    sVar1235 = (ushort)(byte)((0 < sVar1193) * (sVar1193 < 0x100) * auVar980[0xe] -
                                             (0xff < sVar1193)) -
                               (ushort)(byte)((0 < sVar1201) * (sVar1201 < 0x100) * auVar1063[0xe] -
                                             (0xff < sVar1201));
                    sVar1143 = (ushort)(byte)((0 < sVar1216) * (sVar1216 < 0x100) * auVar1243[0] -
                                             (0xff < sVar1216)) -
                               (ushort)(byte)((0 < sVar934) * (sVar934 < 0x100) * auVar920[0] -
                                             (0xff < sVar934));
                    sVar1169 = auVar496._0_2_ - auVar493._0_2_;
                    sVar1189 = auVar495._0_2_ - auVar492._0_2_;
                    sVar1210 = (short)Var398 - (short)Var362;
                    sVar1216 = (short)((ulong)uVar944 >> 8) - (short)((ulong)uVar903 >> 8);
                    sVar1221 = (short)((ulong)uVar356 >> 0x18) - (short)((ulong)uVar1029 >> 0x18);
                    sVar1110 = (short)((ulong)uVar358 >> 0x28) - (short)((ulong)uVar357 >> 0x28);
                    sVar1118 = (auVar159._13_2_ >> 8) - (auVar158._13_2_ >> 8);
                    auVar849._6_8_ = 0;
                    auVar160[0xe] = cVar21;
                    auVar160._0_14_ = auVar849 << 0x38;
                    uVar357 = CONCAT26(auVar160._13_2_,
                                       CONCAT15((0 < sVar1138) * (sVar1138 < 0x100) * auVar1013[0xc]
                                                - (0xff < sVar1138),uVar765));
                    auVar797._4_8_ = 0;
                    auVar797._0_4_ = uVar881;
                    auVar240._12_3_ = (int3)((ulong)uVar357 >> 0x28);
                    auVar240._0_12_ = auVar797 << 0x38;
                    uVar1029 = CONCAT44(auVar240._11_4_,
                                        CONCAT13((0 < sVar1114) * (sVar1114 < 0x100) * auVar1013[10]
                                                 - (0xff < sVar1114),uVar606));
                    auVar325._10_5_ = (int5)((ulong)uVar1029 >> 0x18);
                    auVar325._0_10_ = (unkuint10)uVar1074 << 0x38;
                    uVar903 = CONCAT62(auVar325._9_6_,
                                       CONCAT11((0 < sVar1212) * (sVar1212 < 0x100) * auVar1013[8] -
                                                (0xff < sVar1212),cVar21));
                    auVar497._7_8_ = 0;
                    auVar497._0_7_ = (uint7)((ulong)uVar903 >> 8);
                    Var362 = CONCAT81(SUB158(auVar497 << 0x40,7),
                                      (0 < sVar1171) * (sVar1171 < 0x100) * auVar1013[6] -
                                      (0xff < sVar1171));
                    auVar688._9_6_ = 0;
                    auVar688._0_9_ = Var362;
                    auVar498._1_10_ = SUB1510(auVar688 << 0x30,5);
                    auVar498[0] = (0 < sVar1113) * (sVar1113 < 0x100) * auVar1013[4] -
                                  (0xff < sVar1113);
                    auVar689._11_4_ = 0;
                    auVar689._0_11_ = auVar498;
                    auVar499._1_12_ = SUB1512(auVar689 << 0x20,3);
                    auVar499[0] = (0 < sVar1102) * (sVar1102 < 0x100) * auVar1013[2] -
                                  (0xff < sVar1102);
                    auVar850._6_8_ = 0;
                    auVar161[0xe] = cVar69;
                    auVar161._0_14_ = auVar850 << 0x38;
                    uVar358 = CONCAT26(auVar161._13_2_,
                                       CONCAT15((0 < sVar1144) * (sVar1144 < 0x100) * auVar921[0xc]
                                                - (0xff < sVar1144),uVar769));
                    auVar798._4_8_ = 0;
                    auVar798._0_4_ = uVar757;
                    auVar241._12_3_ = (int3)((ulong)uVar358 >> 0x28);
                    auVar241._0_12_ = auVar798 << 0x38;
                    uVar356 = CONCAT44(auVar241._11_4_,
                                       CONCAT13((0 < sVar1121) * (sVar1121 < 0x100) * auVar921[10] -
                                                (0xff < sVar1121),uVar610));
                    auVar326._10_5_ = (int5)((ulong)uVar356 >> 0x18);
                    auVar326._0_10_ = (unkuint10)uVar1084 << 0x38;
                    uVar944 = CONCAT62(auVar326._9_6_,
                                       CONCAT11((0 < sVar1106) * (sVar1106 < 0x100) * auVar921[8] -
                                                (0xff < sVar1106),cVar69));
                    auVar500._7_8_ = 0;
                    auVar500._0_7_ = (uint7)((ulong)uVar944 >> 8);
                    Var398 = CONCAT81(SUB158(auVar500 << 0x40,7),
                                      (0 < sVar1192) * (sVar1192 < 0x100) * auVar921[6] -
                                      (0xff < sVar1192));
                    auVar690._9_6_ = 0;
                    auVar690._0_9_ = Var398;
                    auVar501._1_10_ = SUB1510(auVar690 << 0x30,5);
                    auVar501[0] = (0 < sVar1146) * (sVar1146 < 0x100) * auVar921[4] -
                                  (0xff < sVar1146);
                    auVar691._11_4_ = 0;
                    auVar691._0_11_ = auVar501;
                    auVar502._1_12_ = SUB1512(auVar691 << 0x20,3);
                    auVar502[0] = (0 < sVar1105) * (sVar1105 < 0x100) * auVar921[2] -
                                  (0xff < sVar1105);
                    sVar1210 = sVar1210 * sVar1210;
                    uVar1074 = sVar1216 * sVar1216;
                    auVar701._2_2_ = uVar1074;
                    auVar701._0_2_ = sVar1210;
                    sVar1201 = (ushort)(byte)((0 < sVar1195) * (sVar1195 < 0x100) * auVar1013[0] -
                                             (0xff < sVar1195)) -
                               (ushort)(byte)((0 < sVar995) * (sVar995 < 0x100) * auVar921[0] -
                                             (0xff < sVar995));
                    sVar1159 = auVar499._0_2_ - auVar502._0_2_;
                    sVar1164 = auVar498._0_2_ - auVar501._0_2_;
                    sVar1166 = (short)Var362 - (short)Var398;
                    sVar1195 = (short)((ulong)uVar903 >> 8) - (short)((ulong)uVar944 >> 8);
                    sVar1168 = (short)((ulong)uVar1029 >> 0x18) - (short)((ulong)uVar356 >> 0x18);
                    sVar1170 = (short)((ulong)uVar357 >> 0x28) - (short)((ulong)uVar358 >> 0x28);
                    sVar1172 = (auVar160._13_2_ >> 8) - (auVar161._13_2_ >> 8);
                    sVar1113 = (ushort)bVar44 - (ushort)bVar89;
                    sVar1146 = (ushort)bVar45 - (ushort)bVar90;
                    sVar1171 = (ushort)bVar47 - (ushort)bVar91;
                    sVar1192 = (ushort)bVar49 - (ushort)bVar92;
                    sVar1216 = (ushort)bVar52 - (ushort)bVar93;
                    sVar1212 = (ushort)(byte)((0 < sVar1154) * (sVar1154 < 0x100) * auVar1095[10] -
                                             (0xff < sVar1154)) -
                               (ushort)(byte)((0 < sVar1147) * (sVar1147 < 0x100) * auVar1185[10] -
                                             (0xff < sVar1147));
                    sVar1106 = (ushort)(byte)((0 < sVar1179) * (sVar1179 < 0x100) * auVar1095[0xc] -
                                             (0xff < sVar1179)) -
                               (ushort)(byte)((0 < sVar1190) * (sVar1190 < 0x100) * auVar1185[0xc] -
                                             (0xff < sVar1190));
                    sVar1114 = (ushort)(byte)((0 < sVar1197) * (sVar1197 < 0x100) * auVar1095[0xe] -
                                             (0xff < sVar1197)) -
                               (ushort)(byte)((0 < sVar1204) * (sVar1204 < 0x100) * auVar1185[0xe] -
                                             (0xff < sVar1204));
                    auVar851._6_8_ = 0;
                    auVar162[0xe] = cVar31;
                    auVar162._0_14_ = auVar851 << 0x38;
                    uVar357 = CONCAT26(auVar162._13_2_,
                                       CONCAT15((uVar1115 != 0) * (uVar1115 < 0x100) * cVar33 -
                                                (0xff < uVar1115),uVar768));
                    auVar799._4_8_ = 0;
                    auVar799._0_4_ = uVar756;
                    auVar242._12_3_ = (int3)((ulong)uVar357 >> 0x28);
                    auVar242._0_12_ = auVar799 << 0x38;
                    uVar1029 = CONCAT44(auVar242._11_4_,
                                        CONCAT13((uVar1107 != 0) * (uVar1107 < 0x100) * cVar27 -
                                                 (0xff < uVar1107),uVar609));
                    auVar327._10_5_ = (int5)((ulong)uVar1029 >> 0x18);
                    auVar327._0_10_ = (unkuint10)uVar1082 << 0x38;
                    uVar903 = CONCAT62(auVar327._9_6_,
                                       CONCAT11((uVar1100 != 0) * (uVar1100 < 0x100) * cVar29 -
                                                (0xff < uVar1100),cVar31));
                    auVar503._7_8_ = 0;
                    auVar503._0_7_ = (uint7)((ulong)uVar903 >> 8);
                    Var362 = CONCAT81(SUB158(auVar503 << 0x40,7),
                                      (uVar1098 != 0) * (uVar1098 < 0x100) * cVar23 -
                                      (0xff < uVar1098));
                    auVar692._9_6_ = 0;
                    auVar692._0_9_ = Var362;
                    auVar504._1_10_ = SUB1510(auVar692 << 0x30,5);
                    auVar504[0] = (uVar1087 != 0) * (uVar1087 < 0x100) * cVar25 - (0xff < uVar1087);
                    auVar693._11_4_ = 0;
                    auVar693._0_11_ = auVar504;
                    auVar505._1_12_ = SUB1512(auVar693 << 0x20,3);
                    auVar505[0] = (uVar960 != 0) * (uVar960 < 0x100) * cVar19 - (0xff < uVar960);
                    auVar852._6_8_ = 0;
                    auVar163[0xe] = cVar7;
                    auVar163._0_14_ = auVar852 << 0x38;
                    uVar358 = CONCAT26(auVar163._13_2_,
                                       CONCAT15((uVar1224 != 0) * (uVar1224 < 0x100) * cVar5 -
                                                (0xff < uVar1224),uVar760));
                    auVar800._4_8_ = 0;
                    auVar800._0_4_ = uVar887;
                    auVar243._12_3_ = (int3)((ulong)uVar358 >> 0x28);
                    auVar243._0_12_ = auVar800 << 0x38;
                    uVar356 = CONCAT44(auVar243._11_4_,
                                       CONCAT13((uVar1222 != 0) * (uVar1222 < 0x100) * cVar4 -
                                                (0xff < uVar1222),uVar589));
                    auVar328._10_5_ = (int5)((ulong)uVar356 >> 0x18);
                    auVar328._0_10_ = (unkuint10)uVar1072 << 0x38;
                    uVar944 = CONCAT62(auVar328._9_6_,
                                       CONCAT11((uVar1155 != 0) * (uVar1155 < 0x100) * cVar6 -
                                                (0xff < uVar1155),cVar7));
                    auVar506._7_8_ = 0;
                    auVar506._0_7_ = (uint7)((ulong)uVar944 >> 8);
                    Var398 = CONCAT81(SUB158(auVar506 << 0x40,7),
                                      (uVar1152 != 0) * (uVar1152 < 0x100) * cVar8 -
                                      (0xff < uVar1152));
                    auVar694._9_6_ = 0;
                    auVar694._0_9_ = Var398;
                    auVar507._1_10_ = SUB1510(auVar694 << 0x30,5);
                    auVar507[0] = (uVar1149 != 0) * (uVar1149 < 0x100) * cVar9 - (0xff < uVar1149);
                    auVar695._11_4_ = 0;
                    auVar695._0_11_ = auVar507;
                    auVar508._1_12_ = SUB1512(auVar695 << 0x20,3);
                    auVar508[0] = (uVar1116 != 0) * (uVar1116 < 0x100) * cVar874 - (0xff < uVar1116)
                    ;
                    sVar1166 = sVar1166 * sVar1166;
                    uVar1084 = sVar1195 * sVar1195;
                    auVar700._2_2_ = uVar1084;
                    auVar700._0_2_ = sVar1166;
                    sVar1154 = (ushort)(byte)((uVar1112 != 0) * (uVar1112 < 0x100) * bVar10 -
                                             (0xff < uVar1112)) -
                               (ushort)(byte)((uVar959 != 0) * (uVar959 < 0x100) * bVar54 -
                                             (0xff < uVar959));
                    sVar1157 = auVar508._0_2_ - auVar505._0_2_;
                    sVar1174 = auVar507._0_2_ - auVar504._0_2_;
                    sVar1179 = (short)Var398 - (short)Var362;
                    sVar934 = (short)((ulong)uVar944 >> 8) - (short)((ulong)uVar903 >> 8);
                    sVar1176 = (short)((ulong)uVar356 >> 0x18) - (short)((ulong)uVar1029 >> 0x18);
                    sVar1190 = (short)((ulong)uVar358 >> 0x28) - (short)((ulong)uVar357 >> 0x28);
                    sVar1193 = (auVar163._13_2_ >> 8) - (auVar162._13_2_ >> 8);
                    sVar1121 = (ushort)bVar26 - (ushort)bVar70;
                    sVar1124 = (ushort)bVar40 - (ushort)bVar87;
                    sVar1138 = (ushort)bVar41 - (ushort)bVar84;
                    sVar1141 = (ushort)bVar42 - (ushort)bVar86;
                    sVar1195 = (ushort)bVar43 - (ushort)bVar88;
                    sVar1144 = (ushort)(byte)((uVar1198 != 0) * (uVar1198 < 0x100) * cVar20 -
                                             (0xff < uVar1198)) -
                               (ushort)(byte)((uVar1229 != 0) * (uVar1229 < 0x100) * cVar68 -
                                             (0xff < uVar1229));
                    sVar1147 = (ushort)(byte)((uVar1202 != 0) * (uVar1202 < 0x100) * cVar22 -
                                             (0xff < uVar1202)) -
                               (ushort)(byte)((uVar1231 != 0) * (uVar1231 < 0x100) * cVar66 -
                                             (0xff < uVar1231));
                    sVar1151 = (ushort)(byte)((uVar1122 != 0) * (uVar1122 < 0x100) * cVar24 -
                                             (0xff < uVar1122)) -
                               (ushort)(byte)((uVar1233 != 0) * (uVar1233 < 0x100) * cVar64 -
                                             (0xff < uVar1233));
                    auVar853._6_8_ = 0;
                    auVar164[0xe] = cVar16;
                    auVar164._0_14_ = auVar853 << 0x38;
                    uVar357 = CONCAT26(auVar164._13_2_,
                                       CONCAT15((uVar1108 != 0) * (uVar1108 < 0x100) * cVar14 -
                                                (0xff < uVar1108),uVar766));
                    auVar801._4_8_ = 0;
                    auVar801._0_4_ = uVar878;
                    auVar244._12_3_ = (int3)((ulong)uVar357 >> 0x28);
                    auVar244._0_12_ = auVar801 << 0x38;
                    uVar1029 = CONCAT44(auVar244._11_4_,
                                        CONCAT13((uVar1104 != 0) * (uVar1104 < 0x100) * cVar12 -
                                                 (0xff < uVar1104),uVar607));
                    auVar329._10_5_ = (int5)((ulong)uVar1029 >> 0x18);
                    auVar329._0_10_ = (unkuint10)uVar1076 << 0x38;
                    uVar903 = CONCAT62(auVar329._9_6_,
                                       CONCAT11((uVar1101 != 0) * (uVar1101 < 0x100) * cVar15 -
                                                (0xff < uVar1101),cVar16));
                    auVar509._7_8_ = 0;
                    auVar509._0_7_ = (uint7)((ulong)uVar903 >> 8);
                    Var362 = CONCAT81(SUB158(auVar509 << 0x40,7),
                                      (uVar1099 != 0) * (uVar1099 < 0x100) * cVar17 -
                                      (0xff < uVar1099));
                    auVar696._9_6_ = 0;
                    auVar696._0_9_ = Var362;
                    auVar510._1_10_ = SUB1510(auVar696 << 0x30,5);
                    auVar510[0] = (uVar1088 != 0) * (uVar1088 < 0x100) * cVar11 - (0xff < uVar1088);
                    auVar697._11_4_ = 0;
                    auVar697._0_11_ = auVar510;
                    auVar511._1_12_ = SUB1512(auVar697 << 0x20,3);
                    auVar511[0] = (uVar1085 != 0) * (uVar1085 < 0x100) * cVar13 - (0xff < uVar1085);
                    sVar1179 = sVar1179 * sVar1179;
                    uVar1082 = sVar934 * sVar934;
                    auVar702._2_2_ = uVar1082;
                    auVar702._0_2_ = sVar1179;
                    sVar1192 = sVar1192 * sVar1192;
                    uVar1076 = sVar1216 * sVar1216;
                    auVar703._2_2_ = uVar1076;
                    auVar703._0_2_ = sVar1192;
                    auVar854._6_8_ = 0;
                    auVar165[0xe] = cVar60;
                    auVar165._0_14_ = auVar854 << 0x38;
                    uVar358 = CONCAT26(auVar165._13_2_,
                                       CONCAT15((uVar1077 != 0) * (uVar1077 < 0x100) * cVar58 -
                                                (0xff < uVar1077),uVar770));
                    auVar802._4_8_ = 0;
                    auVar802._0_4_ = uVar758;
                    auVar245._12_3_ = (int3)((ulong)uVar358 >> 0x28);
                    auVar245._0_12_ = auVar802 << 0x38;
                    uVar356 = CONCAT44(auVar245._11_4_,
                                       CONCAT13((uVar1075 != 0) * (uVar1075 < 0x100) * cVar61 -
                                                (0xff < uVar1075),uVar611));
                    auVar330._10_5_ = (int5)((ulong)uVar356 >> 0x18);
                    auVar330._0_10_ = (unkuint10)uVar1086 << 0x38;
                    uVar944 = CONCAT62(auVar330._9_6_,
                                       CONCAT11((uVar1073 != 0) * (uVar1073 < 0x100) * cVar55 -
                                                (0xff < uVar1073),cVar60));
                    auVar512._7_8_ = 0;
                    auVar512._0_7_ = (uint7)((ulong)uVar944 >> 8);
                    Var398 = CONCAT81(SUB158(auVar512 << 0x40,7),
                                      (uVar1046 != 0) * (uVar1046 < 0x100) * cVar56 -
                                      (0xff < uVar1046));
                    auVar698._9_6_ = 0;
                    auVar698._0_9_ = Var398;
                    auVar513._1_10_ = SUB1510(auVar698 << 0x30,5);
                    auVar513[0] = (uVar1145 != 0) * (uVar1145 < 0x100) * cVar57 - (0xff < uVar1145);
                    auVar699._11_4_ = 0;
                    auVar699._0_11_ = auVar513;
                    auVar514._1_12_ = SUB1512(auVar699 << 0x20,3);
                    auVar514[0] = (uVar1142 != 0) * (uVar1142 < 0x100) * cVar59 - (0xff < uVar1142);
                    sVar1197 = (ushort)(byte)((uVar1083 != 0) * (uVar1083 < 0x100) * bVar18 -
                                             (0xff < uVar1083)) -
                               (ushort)(byte)((uVar1139 != 0) * (uVar1139 < 0x100) * bVar62 -
                                             (0xff < uVar1139));
                    sVar1204 = auVar511._0_2_ - auVar514._0_2_;
                    sVar1207 = auVar510._0_2_ - auVar513._0_2_;
                    sVar1209 = (short)Var362 - (short)Var398;
                    sVar1216 = (short)((ulong)uVar903 >> 8) - (short)((ulong)uVar944 >> 8);
                    sVar1211 = (short)((ulong)uVar1029 >> 0x18) - (short)((ulong)uVar356 >> 0x18);
                    sVar1213 = (short)((ulong)uVar357 >> 0x28) - (short)((ulong)uVar358 >> 0x28);
                    sVar1215 = (auVar164._13_2_ >> 8) - (auVar165._13_2_ >> 8);
                    sVar1141 = sVar1141 * sVar1141;
                    uVar1078 = sVar1195 * sVar1195;
                    auVar705._2_2_ = uVar1078;
                    auVar705._0_2_ = sVar1141;
                    sVar1209 = sVar1209 * sVar1209;
                    uVar1086 = sVar1216 * sVar1216;
                    auVar706._2_2_ = uVar1086;
                    auVar706._0_2_ = sVar1209;
                    sVar1216 = (ushort)bVar48 - (ushort)bVar79;
                    sVar1195 = (ushort)bVar53 - (ushort)bVar94;
                    sVar934 = (ushort)bVar39 - (ushort)bVar95;
                    sVar995 = (ushort)bVar51 - (ushort)bVar96;
                    sVar1102 = (ushort)bVar50 - (ushort)bVar97;
                    sVar1020 = (ushort)(byte)((uVar1103 != 0) * (uVar1103 < 0x100) * cVar28 -
                                             (0xff < uVar1103)) -
                               (ushort)(byte)((uVar1199 != 0) * (uVar1199 < 0x100) * cVar76 -
                                             (0xff < uVar1199));
                    sVar1105 = (ushort)(byte)((uVar1111 != 0) * (uVar1111 < 0x100) * cVar30 -
                                             (0xff < uVar1111)) -
                               (ushort)(byte)((uVar1205 != 0) * (uVar1205 < 0x100) * cVar75 -
                                             (0xff < uVar1205));
                    sVar1023 = (ushort)(byte)((uVar1119 != 0) * (uVar1119 < 0x100) * cVar32 -
                                             (0xff < uVar1119)) -
                               (ushort)(byte)((uVar1136 != 0) * (uVar1136 < 0x100) * cVar71 -
                                             (0xff < uVar1136));
                    sVar997 = sVar997 * sVar997;
                    uVar939 = sVar1225 * sVar1225;
                    auVar704._2_2_ = uVar939;
                    auVar704._0_2_ = sVar997;
                    sVar995 = sVar995 * sVar995;
                    uVar1072 = sVar1102 * sVar1102;
                    auVar707._2_2_ = uVar1072;
                    auVar707._0_2_ = sVar995;
                    auVar700._4_8_ = 0;
                    auVar166._12_2_ = sVar1166;
                    auVar166._0_12_ = auVar700 << 0x30;
                    uVar903 = CONCAT44(auVar166._10_4_,CONCAT22(sVar1164 * sVar1164,sVar1166));
                    auVar515._6_8_ = 0;
                    auVar515._0_6_ = (uint6)((ulong)uVar903 >> 0x10);
                    auVar701._4_8_ = 0;
                    auVar167._12_2_ = sVar1210;
                    auVar167._0_12_ = auVar701 << 0x30;
                    uVar944 = CONCAT44(auVar167._10_4_,CONCAT22(sVar1189 * sVar1189,sVar1210));
                    auVar516._6_8_ = 0;
                    auVar516._0_6_ = (uint6)((ulong)uVar944 >> 0x10);
                    auVar702._4_8_ = 0;
                    auVar168._12_2_ = sVar1179;
                    auVar168._0_12_ = auVar702 << 0x30;
                    uVar1029 = CONCAT44(auVar168._10_4_,CONCAT22(sVar1174 * sVar1174,sVar1179));
                    auVar517._6_8_ = 0;
                    auVar517._0_6_ = (uint6)((ulong)uVar1029 >> 0x10);
                    auVar703._4_8_ = 0;
                    auVar169._12_2_ = sVar1192;
                    auVar169._0_12_ = auVar703 << 0x30;
                    uVar356 = CONCAT44(auVar169._10_4_,CONCAT22(sVar1171 * sVar1171,sVar1192));
                    auVar518._6_8_ = 0;
                    auVar518._0_6_ = (uint6)((ulong)uVar356 >> 0x10);
                    auVar704._4_8_ = 0;
                    auVar170._12_2_ = sVar997;
                    auVar170._0_12_ = auVar704 << 0x30;
                    uVar357 = CONCAT44(auVar170._10_4_,CONCAT22(sVar1223 * sVar1223,sVar997));
                    auVar519._6_8_ = 0;
                    auVar519._0_6_ = (uint6)((ulong)uVar357 >> 0x10);
                    auVar705._4_8_ = 0;
                    auVar171._12_2_ = sVar1141;
                    auVar171._0_12_ = auVar705 << 0x30;
                    uVar358 = CONCAT44(auVar171._10_4_,CONCAT22(sVar1138 * sVar1138,sVar1141));
                    auVar520._6_8_ = 0;
                    auVar520._0_6_ = (uint6)((ulong)uVar358 >> 0x10);
                    auVar706._4_8_ = 0;
                    auVar172._12_2_ = sVar1209;
                    auVar172._0_12_ = auVar706 << 0x30;
                    uVar359 = CONCAT44(auVar172._10_4_,CONCAT22(sVar1207 * sVar1207,sVar1209));
                    auVar521._6_8_ = 0;
                    auVar521._0_6_ = (uint6)((ulong)uVar359 >> 0x10);
                    iVar1044 = (int)((ulong)uVar944 >> 0x10) + (int)((ulong)uVar903 >> 0x10) +
                               (int)((ulong)uVar1029 >> 0x10) + (int)((ulong)uVar359 >> 0x10);
                    auVar707._4_8_ = 0;
                    auVar173._12_2_ = sVar995;
                    auVar173._0_12_ = auVar707 << 0x30;
                    uVar903 = CONCAT44(auVar173._10_4_,CONCAT22(sVar934 * sVar934,sVar995));
                    auVar522._6_8_ = 0;
                    auVar522._0_6_ = (uint6)((ulong)uVar903 >> 0x10);
                    iVar1081 = (int)((ulong)uVar357 >> 0x10) + (int)((ulong)uVar356 >> 0x10) +
                               (int)((ulong)uVar358 >> 0x10) + (int)((ulong)uVar903 >> 0x10);
                    fVar898 = (float)((ulong)((uint)(ushort)(sVar1143 * sVar1143) +
                                              (uint)(ushort)(sVar1201 * sVar1201) +
                                              (uint)(ushort)(sVar1154 * sVar1154) +
                                             (uint)(ushort)(sVar1197 * sVar1197)) +
                                      CONCAT44(-(uint)(iVar1044 < 0),iVar1044) +
                                      (ulong)((uint)uVar1074 + (uint)uVar1084 + (uint)uVar1082 +
                                             (uint)uVar1086) +
                                      (ulong)((uint)(ushort)(sVar1110 * sVar1110) +
                                              (uint)(ushort)(sVar1170 * sVar1170) +
                                              (uint)(ushort)(sVar1190 * sVar1190) +
                                             (uint)(ushort)(sVar1213 * sVar1213)) +
                                      (ulong)((uint)(ushort)(sVar1218 * sVar1218) +
                                              (uint)(ushort)(sVar1113 * sVar1113) +
                                              (uint)(ushort)(sVar1121 * sVar1121) +
                                             (uint)(ushort)(sVar1216 * sVar1216)) +
                                      CONCAT44(-(uint)(iVar1081 < 0),iVar1081) +
                                      (ulong)((uint)uVar939 + (uint)uVar1076 + (uint)uVar1078 +
                                             (uint)uVar1072) +
                                      (ulong)((uint)(ushort)(sVar1232 * sVar1232) +
                                              (uint)(ushort)(sVar1106 * sVar1106) +
                                              (uint)(ushort)(sVar1147 * sVar1147) +
                                             (uint)(ushort)(sVar1105 * sVar1105)) +
                                      (ulong)(uint)((int)CONCAT82(SUB148(auVar516 << 0x40,6),
                                                                  sVar1169 * sVar1169) +
                                                    (int)CONCAT82(SUB148(auVar515 << 0x40,6),
                                                                  sVar1159 * sVar1159) +
                                                    (int)CONCAT82(SUB148(auVar517 << 0x40,6),
                                                                  sVar1157 * sVar1157) +
                                                   (int)CONCAT82(SUB148(auVar521 << 0x40,6),
                                                                 sVar1204 * sVar1204)) +
                                      (ulong)((auVar167._10_4_ >> 0x10) + (auVar166._10_4_ >> 0x10)
                                              + (auVar168._10_4_ >> 0x10) +
                                             (auVar172._10_4_ >> 0x10)) +
                                      (ulong)((uint)(ushort)(sVar1221 * sVar1221) +
                                              (uint)(ushort)(sVar1168 * sVar1168) +
                                              (uint)(ushort)(sVar1176 * sVar1176) +
                                             (uint)(ushort)(sVar1211 * sVar1211)) +
                                      (ulong)((uint)(ushort)(sVar1118 * sVar1118) +
                                              (uint)(ushort)(sVar1172 * sVar1172) +
                                              (uint)(ushort)(sVar1193 * sVar1193) +
                                             (uint)(ushort)(sVar1215 * sVar1215)) +
                                      (ulong)(uint)((int)CONCAT82(SUB148(auVar519 << 0x40,6),
                                                                  sVar1220 * sVar1220) +
                                                    (int)CONCAT82(SUB148(auVar518 << 0x40,6),
                                                                  sVar1146 * sVar1146) +
                                                    (int)CONCAT82(SUB148(auVar520 << 0x40,6),
                                                                  sVar1124 * sVar1124) +
                                                   (int)CONCAT82(SUB148(auVar522 << 0x40,6),
                                                                 sVar1195 * sVar1195)) +
                                      (ulong)((auVar170._10_4_ >> 0x10) + (auVar169._10_4_ >> 0x10)
                                              + (auVar171._10_4_ >> 0x10) +
                                             (auVar173._10_4_ >> 0x10)) +
                                      (ulong)((uint)(ushort)(sVar1230 * sVar1230) +
                                              (uint)(ushort)(sVar1212 * sVar1212) +
                                              (uint)(ushort)(sVar1144 * sVar1144) +
                                             (uint)(ushort)(sVar1020 * sVar1020)) +
                                      (ulong)((uint)(ushort)(sVar1235 * sVar1235) +
                                              (uint)(ushort)(sVar1114 * sVar1114) +
                                              (uint)(ushort)(sVar1151 * sVar1151) +
                                             (uint)(ushort)(sVar1023 * sVar1023)) +
                                      (ulong)((uint)uVar929 + (uint)uVar1045 + (uint)uVar937 +
                                             (uint)uVar930) +
                                      (ulong)((uint)(ushort)(sVar1019 * sVar1019) +
                                              (uint)(ushort)(sVar1217 * sVar1217) +
                                              (uint)(ushort)(sVar1200 * sVar1200) +
                                             (uint)(ushort)(sVar938 * sVar938)) +
                                      (ulong)((uint)(ushort)(sVar961 * sVar961) +
                                              (uint)(ushort)(sVar1206 * sVar1206) +
                                              (uint)(ushort)(sVar1165 * sVar1165) +
                                             (uint)(ushort)(sVar932 * sVar932)) +
                                      CONCAT44(-(uint)(iVar1148 < 0),iVar1148) +
                                      (ulong)((uint)(ushort)(sVar992 * sVar992) +
                                              (uint)(ushort)(sVar1163 * sVar1163) +
                                              (uint)(ushort)(sVar1137 * sVar1137) +
                                             (uint)(ushort)(sVar994 * sVar994)) +
                                      CONCAT44(-(uint)(iVar1080 < 0),iVar1080) +
                                      (ulong)((uint)uVar931 + (uint)uVar935 + (uint)uVar933 +
                                             (uint)uVar897) +
                                      (ulong)((uint)(ushort)(sVar1024 * sVar1024) +
                                              (uint)(ushort)(sVar1175 * sVar1175) +
                                              (uint)(ushort)(sVar1153 * sVar1153) +
                                             (uint)(ushort)(sVar1120 * sVar1120)) +
                                      (ulong)((uint)(ushort)(sVar999 * sVar999) +
                                              (uint)(ushort)(sVar1214 * sVar1214) +
                                              (uint)(ushort)(sVar1196 * sVar1196) +
                                             (uint)(ushort)(sVar936 * sVar936)) +
                                      (ulong)((uint)(ushort)(sVar1021 * sVar1021) +
                                              (uint)(ushort)(sVar1219 * sVar1219) +
                                              (uint)(ushort)(sVar1203 * sVar1203) +
                                             (uint)(ushort)(sVar940 * sVar940)) +
                                      (ulong)(uint)((int)CONCAT82(SUB148(auVar484 << 0x40,6),
                                                                  sVar993 * sVar993) +
                                                    (int)CONCAT82(SUB148(auVar483 << 0x40,6),
                                                                  sVar1208 * sVar1208) +
                                                    (int)CONCAT82(SUB148(auVar485 << 0x40,6),
                                                                  sVar1178 * sVar1178) +
                                                   (int)CONCAT82(SUB148(auVar486 << 0x40,6),
                                                                 sVar958 * sVar958)) +
                                      (ulong)((auVar151._10_4_ >> 0x10) + (auVar150._10_4_ >> 0x10)
                                              + (auVar152._10_4_ >> 0x10) +
                                             (auVar153._10_4_ >> 0x10)) +
                                      (ulong)(uint)((int)CONCAT82(SUB148(auVar487 << 0x40,6),
                                                                  sVar996 * sVar996) +
                                                    (int)CONCAT82(SUB148(auVar488 << 0x40,6),
                                                                  sVar1167 * sVar1167) +
                                                    (int)CONCAT82(SUB148(auVar489 << 0x40,6),
                                                                  sVar1140 * sVar1140) +
                                                   (int)CONCAT82(SUB148(auVar490 << 0x40,6),
                                                                 sVar998 * sVar998)) +
                                      (ulong)((auVar154._10_4_ >> 0x10) + (auVar155._10_4_ >> 0x10)
                                              + (auVar156._10_4_ >> 0x10) +
                                             (auVar157._10_4_ >> 0x10)) +
                                      (ulong)((uint)(ushort)(sVar1022 * sVar1022) +
                                              (uint)(ushort)(sVar1173 * sVar1173) +
                                              (uint)(ushort)(sVar1150 * sVar1150) +
                                             (uint)(ushort)(sVar1117 * sVar1117)) +
                                      (ulong)((uint)(ushort)(sVar1109 * sVar1109) +
                                              (uint)(ushort)(sVar1158 * sVar1158) +
                                              (uint)(ushort)(sVar1156 * sVar1156) +
                                             (uint)(ushort)(sVar1123 * sVar1123)) >> 1) * __LC47;
                    if (fVar898 < 0.0) {
                      fVar900 = sqrtf(fVar898);
                    }
                    else {
                      fVar900 = SQRT(fVar898);
                    }
                    if (fVar900 <= fVar899 * *(float *)(param_5 + 8)) {
                      uVar877 = (iVar876 - local_5c8._0_4_) * 0x10;
                      uVar895 = (ulong)uVar877;
                      if (uVar877 < 0x200) {
                        iVar1080 = (byte)g_tdefl_small_dist_extra[uVar895] + 5;
                      }
                      else {
                        uVar887 = 0x7fff;
                        if (uVar877 < 0x8000) {
                          uVar887 = uVar877;
                        }
                        iVar1080 = (byte)g_tdefl_large_dist_extra[uVar887 >> 8] + 5;
                        while (0x7fff < uVar877) {
                          uVar895 = uVar895 >> 1;
                          iVar1080 = iVar1080 + 1;
                          uVar877 = (uint)uVar895;
                        }
                      }
                      fVar898 = (float)(iVar1080 + 7) * *(float *)(param_5 + 4) + fVar898 * fVar1025
                      ;
                      if (fVar898 < local_50c) {
                        local_448._8_8_ = uStack_430;
                        local_448._0_8_ = local_438;
                        local_50c = fVar898;
                        local_4f4 = local_5a4;
                      }
                    }
                  }
                }
                else {
                  local_5c8._0_4_ = *(int *)(lVar943 + 0x18);
                  if (*(int *)(lVar943 + 0x18) <= local_5a4) goto LAB_0010c8c4;
                }
                local_5a4 = local_5a4 + -1;
                puVar896 = puVar896 + -0x10;
              } while ((int)uVar884 <= local_5a4);
              if (local_4f4 != iVar876) {
                puVar894 = (unpacked_uastc_block *)&local_198;
                *param_9 = *param_9 + 1;
                cVar874 = basist::unpack_uastc((uastc_block *)local_448,puVar894,false,false);
                if (cVar874 != '\0') {
                  if ((param_5[0x10] != (uastc_rdo_params)0x0) && (uVar892 == 0)) {
                    cVar874 = basist::unpack_uastc(puVar894,local_358,false);
                    if (cVar874 == '\0') goto LAB_0010c802;
                    auVar921 = *(undefined1 (*) [16])pcVar1;
                    auVar1095 = *(undefined1 (*) [16])(pcVar1 + 0x30);
                    uStack_384 = 0;
                    auVar920 = *(undefined1 (*) [16])(pcVar1 + 0x10) & __LC6;
                    auVar980 = *(undefined1 (*) [16])pcVar1 & __LC6;
                    sVar932 = auVar980._0_2_;
                    sVar958 = auVar980._2_2_;
                    bVar3 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[2] - (0xff < sVar958);
                    sVar958 = auVar980._4_2_;
                    sVar1216 = auVar980._6_2_;
                    cVar874 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar980[6] - (0xff < sVar1216);
                    uVar901 = CONCAT13(cVar874,CONCAT12((0 < sVar958) * (sVar958 < 0x100) *
                                                        auVar980[4] - (0xff < sVar958),
                                                        CONCAT11(bVar3,(0 < sVar932) *
                                                                       (sVar932 < 0x100) *
                                                                       auVar980[0] -
                                                                       (0xff < sVar932))));
                    sVar932 = auVar980._8_2_;
                    sVar958 = auVar980._10_2_;
                    cVar9 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[10] - (0xff < sVar958);
                    uVar902 = CONCAT15(cVar9,CONCAT14((0 < sVar932) * (sVar932 < 0x100) *
                                                      auVar980[8] - (0xff < sVar932),uVar901));
                    sVar932 = auVar980._12_2_;
                    sVar958 = auVar980._14_2_;
                    cVar8 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[0xe] - (0xff < sVar958);
                    uVar903 = CONCAT17(cVar8,CONCAT16((0 < sVar932) * (sVar932 < 0x100) *
                                                      auVar980[0xc] - (0xff < sVar932),uVar902));
                    sVar932 = auVar920._0_2_;
                    sVar958 = auVar920._2_2_;
                    cVar6 = (0 < sVar958) * (sVar958 < 0x100) * auVar920[2] - (0xff < sVar958);
                    auVar1005._0_10_ =
                         CONCAT19(cVar6,CONCAT18((0 < sVar932) * (sVar932 < 0x100) * auVar920[0] -
                                                 (0xff < sVar932),uVar903));
                    sVar932 = auVar920._4_2_;
                    auVar1005[10] =
                         (0 < sVar932) * (sVar932 < 0x100) * auVar920[4] - (0xff < sVar932);
                    sVar932 = auVar920._6_2_;
                    cVar4 = (0 < sVar932) * (sVar932 < 0x100) * auVar920[6] - (0xff < sVar932);
                    auVar1005[0xb] = cVar4;
                    sVar932 = auVar920._8_2_;
                    auVar1011[0xc] =
                         (0 < sVar932) * (sVar932 < 0x100) * auVar920[8] - (0xff < sVar932);
                    auVar1011._0_12_ = auVar1005;
                    sVar932 = auVar920._10_2_;
                    cVar5 = (0 < sVar932) * (sVar932 < 0x100) * auVar920[10] - (0xff < sVar932);
                    auVar1011[0xd] = cVar5;
                    sVar932 = auVar920._12_2_;
                    auVar1017[0xe] =
                         (0 < sVar932) * (sVar932 < 0x100) * auVar920[0xc] - (0xff < sVar932);
                    auVar1017._0_14_ = auVar1011;
                    sVar932 = auVar920._14_2_;
                    cVar7 = (0 < sVar932) * (sVar932 < 0x100) * auVar920[0xe] - (0xff < sVar932);
                    auVar1017[0xf] = cVar7;
                    auVar920 = *(undefined1 (*) [16])(pcVar1 + 0x10);
                    uVar1045 = auVar921._0_2_ >> 8;
                    uVar1072 = auVar921._2_2_ >> 8;
                    uVar1074 = auVar921._4_2_ >> 8;
                    uVar1076 = auVar921._6_2_ >> 8;
                    uVar1078 = auVar921._8_2_ >> 8;
                    uVar1082 = auVar921._10_2_ >> 8;
                    uVar1084 = auVar921._12_2_ >> 8;
                    uVar1086 = auVar921._14_2_ >> 8;
                    auVar980 = *(undefined1 (*) [16])(pcVar1 + 0x20) & __LC6;
                    uVar960 = auVar1095._0_2_ >> 8;
                    uVar1115 = auVar1095._2_2_ >> 8;
                    uVar1177 = auVar1095._4_2_ >> 8;
                    uVar1188 = auVar1095._6_2_ >> 8;
                    uVar1191 = auVar1095._8_2_ >> 8;
                    uVar1194 = auVar1095._10_2_ >> 8;
                    uVar1198 = auVar1095._12_2_ >> 8;
                    uVar1199 = auVar1095._14_2_ >> 8;
                    auVar1063 = __LC6 & auVar1017;
                    uVar897 = auVar920._0_2_ >> 8;
                    uVar929 = auVar920._2_2_ >> 8;
                    uVar930 = auVar920._4_2_ >> 8;
                    uVar931 = auVar920._6_2_ >> 8;
                    uVar933 = auVar920._8_2_ >> 8;
                    uVar935 = auVar920._10_2_ >> 8;
                    uVar937 = auVar920._12_2_ >> 8;
                    uVar939 = auVar920._14_2_ >> 8;
                    uVar1205 = (ushort)bVar3;
                    uVar1136 = (ushort)((uint)uVar901 >> 0x18);
                    uVar1142 = (ushort)((uint6)uVar902 >> 0x28);
                    uVar1046 = (ushort)((ulong)uVar903 >> 0x38);
                    uVar1075 = (ushort)((unkuint10)auVar1005._0_10_ >> 0x48);
                    uVar1079 = auVar1005._10_2_ >> 8;
                    uVar1085 = auVar1011._12_2_ >> 8;
                    uVar959 = auVar1017._14_2_ >> 8;
                    auVar1013 = _local_358 & __LC6;
                    uStack_37c = 1;
                    bVar10 = (uVar1072 != 0) * (uVar1072 < 0x100) * auVar921[3] - (0xff < uVar1072);
                    cVar13 = (uVar1076 != 0) * (uVar1076 < 0x100) * auVar921[7] - (0xff < uVar1076);
                    uVar901 = CONCAT13(cVar13,CONCAT12((uVar1074 != 0) * (uVar1074 < 0x100) *
                                                       auVar921[5] - (0xff < uVar1074),
                                                       CONCAT11(bVar10,(uVar1045 != 0) *
                                                                       (uVar1045 < 0x100) *
                                                                       auVar921[1] -
                                                                       (0xff < uVar1045))));
                    cVar11 = (uVar1082 != 0) * (uVar1082 < 0x100) * auVar921[0xb] -
                             (0xff < uVar1082);
                    uVar902 = CONCAT15(cVar11,CONCAT14((uVar1078 != 0) * (uVar1078 < 0x100) *
                                                       auVar921[9] - (0xff < uVar1078),uVar901));
                    cVar17 = (uVar1086 != 0) * (uVar1086 < 0x100) * auVar921[0xf] -
                             (0xff < uVar1086);
                    uVar903 = CONCAT17(cVar17,CONCAT16((uVar1084 != 0) * (uVar1084 < 0x100) *
                                                       auVar921[0xd] - (0xff < uVar1084),uVar902));
                    cVar15 = (uVar929 != 0) * (uVar929 < 0x100) * auVar920[3] - (0xff < uVar929);
                    auVar948._0_10_ =
                         CONCAT19(cVar15,CONCAT18((uVar897 != 0) * (uVar897 < 0x100) * auVar920[1] -
                                                  (0xff < uVar897),uVar903));
                    auVar948[10] = (uVar930 != 0) * (uVar930 < 0x100) * auVar920[5] -
                                   (0xff < uVar930);
                    cVar12 = (uVar931 != 0) * (uVar931 < 0x100) * auVar920[7] - (0xff < uVar931);
                    auVar948[0xb] = cVar12;
                    auVar953[0xc] =
                         (uVar933 != 0) * (uVar933 < 0x100) * auVar920[9] - (0xff < uVar933);
                    auVar953._0_12_ = auVar948;
                    cVar14 = (uVar935 != 0) * (uVar935 < 0x100) * auVar920[0xb] - (0xff < uVar935);
                    auVar953[0xd] = cVar14;
                    auVar956[0xe] =
                         (uVar937 != 0) * (uVar937 < 0x100) * auVar920[0xd] - (0xff < uVar937);
                    auVar956._0_14_ = auVar953;
                    cVar16 = (uVar939 != 0) * (uVar939 < 0x100) * auVar920[0xf] - (0xff < uVar939);
                    auVar956[0xf] = cVar16;
                    auVar1185 = __LC6 & auVar956;
                    uVar1087 = (ushort)bVar10;
                    uVar1098 = (ushort)((uint)uVar901 >> 0x18);
                    uVar1100 = (ushort)((uint6)uVar902 >> 0x28);
                    uVar1103 = (ushort)((ulong)uVar903 >> 0x38);
                    uVar1107 = (ushort)((unkuint10)auVar948._0_10_ >> 0x48);
                    uVar1111 = auVar948._10_2_ >> 8;
                    uVar1119 = auVar953._12_2_ >> 8;
                    uVar1045 = auVar956._14_2_ >> 8;
                    local_388 = 1;
                    auVar921 = *(undefined1 (*) [16])(pcVar1 + 0x30) & __LC6;
                    sVar932 = auVar980._0_2_;
                    sVar958 = auVar980._2_2_;
                    bVar18 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[2] - (0xff < sVar958);
                    sVar958 = auVar980._4_2_;
                    sVar1216 = auVar980._6_2_;
                    cVar21 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar980[6] - (0xff < sVar1216);
                    uVar941 = CONCAT13(cVar21,CONCAT12((0 < sVar958) * (sVar958 < 0x100) *
                                                       auVar980[4] - (0xff < sVar958),
                                                       CONCAT11(bVar18,(0 < sVar932) *
                                                                       (sVar932 < 0x100) *
                                                                       auVar980[0] -
                                                                       (0xff < sVar932))));
                    sVar932 = auVar980._8_2_;
                    sVar958 = auVar980._10_2_;
                    cVar19 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[10] - (0xff < sVar958);
                    uVar942 = CONCAT15(cVar19,CONCAT14((0 < sVar932) * (sVar932 < 0x100) *
                                                       auVar980[8] - (0xff < sVar932),uVar941));
                    sVar932 = auVar980._12_2_;
                    sVar958 = auVar980._14_2_;
                    cVar25 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[0xe] - (0xff < sVar958);
                    uVar944 = CONCAT17(cVar25,CONCAT16((0 < sVar932) * (sVar932 < 0x100) *
                                                       auVar980[0xc] - (0xff < sVar932),uVar942));
                    sVar932 = auVar921._0_2_;
                    sVar958 = auVar921._2_2_;
                    cVar23 = (0 < sVar958) * (sVar958 < 0x100) * auVar921[2] - (0xff < sVar958);
                    auVar968._0_10_ =
                         CONCAT19(cVar23,CONCAT18((0 < sVar932) * (sVar932 < 0x100) * auVar921[0] -
                                                  (0xff < sVar932),uVar944));
                    sVar932 = auVar921._4_2_;
                    auVar968[10] = (0 < sVar932) * (sVar932 < 0x100) * auVar921[4] -
                                   (0xff < sVar932);
                    sVar932 = auVar921._6_2_;
                    cVar20 = (0 < sVar932) * (sVar932 < 0x100) * auVar921[6] - (0xff < sVar932);
                    auVar968[0xb] = cVar20;
                    sVar932 = auVar921._8_2_;
                    auVar977[0xc] =
                         (0 < sVar932) * (sVar932 < 0x100) * auVar921[8] - (0xff < sVar932);
                    auVar977._0_12_ = auVar968;
                    sVar932 = auVar921._10_2_;
                    cVar22 = (0 < sVar932) * (sVar932 < 0x100) * auVar921[10] - (0xff < sVar932);
                    auVar977[0xd] = cVar22;
                    sVar932 = auVar921._12_2_;
                    auVar987[0xe] =
                         (0 < sVar932) * (sVar932 < 0x100) * auVar921[0xc] - (0xff < sVar932);
                    auVar987._0_14_ = auVar977;
                    sVar932 = auVar921._14_2_;
                    cVar24 = (0 < sVar932) * (sVar932 < 0x100) * auVar921[0xe] - (0xff < sVar932);
                    auVar987[0xf] = cVar24;
                    uVar1122 = SUB162(_local_358,0) >> 8;
                    uVar1139 = SUB162(_local_358,2) >> 8;
                    uVar1145 = SUB162(_local_358,4) >> 8;
                    uVar1073 = SUB162(_local_358,6) >> 8;
                    uVar1077 = SUB162(_local_358,8) >> 8;
                    uVar1083 = SUB162(_local_358,10) >> 8;
                    uVar1088 = SUB162(_local_358,0xc) >> 8;
                    uVar1099 = SUB162(_local_358,0xe) >> 8;
                    auVar921 = *(undefined1 (*) [16])(pcVar1 + 0x20);
                    local_4b8 = local_4b8 & 0xffffffff00000000;
                    auVar920 = local_338 & __LC6;
                    uVar897 = auVar921._0_2_ >> 8;
                    uVar929 = auVar921._2_2_ >> 8;
                    uVar930 = auVar921._4_2_ >> 8;
                    uVar931 = auVar921._6_2_ >> 8;
                    uVar933 = auVar921._8_2_ >> 8;
                    uVar935 = auVar921._10_2_ >> 8;
                    uVar937 = auVar921._12_2_ >> 8;
                    uVar939 = auVar921._14_2_ >> 8;
                    bVar26 = (uVar929 != 0) * (uVar929 < 0x100) * auVar921[3] - (0xff < uVar929);
                    cVar29 = (uVar931 != 0) * (uVar931 < 0x100) * auVar921[7] - (0xff < uVar931);
                    uVar901 = CONCAT13(cVar29,CONCAT12((uVar930 != 0) * (uVar930 < 0x100) *
                                                       auVar921[5] - (0xff < uVar930),
                                                       CONCAT11(bVar26,(uVar897 != 0) *
                                                                       (uVar897 < 0x100) *
                                                                       auVar921[1] -
                                                                       (0xff < uVar897))));
                    cVar27 = (uVar935 != 0) * (uVar935 < 0x100) * auVar921[0xb] - (0xff < uVar935);
                    uVar902 = CONCAT15(cVar27,CONCAT14((uVar933 != 0) * (uVar933 < 0x100) *
                                                       auVar921[9] - (0xff < uVar933),uVar901));
                    cVar33 = (uVar939 != 0) * (uVar939 < 0x100) * auVar921[0xf] - (0xff < uVar939);
                    uVar903 = CONCAT17(cVar33,CONCAT16((uVar937 != 0) * (uVar937 < 0x100) *
                                                       auVar921[0xd] - (0xff < uVar937),uVar902));
                    cVar31 = (uVar1115 != 0) * (uVar1115 < 0x100) * auVar1095[3] - (0xff < uVar1115)
                    ;
                    auVar910._0_10_ =
                         CONCAT19(cVar31,CONCAT18((uVar960 != 0) * (uVar960 < 0x100) * auVar1095[1]
                                                  - (0xff < uVar960),uVar903));
                    auVar910[10] = (uVar1177 != 0) * (uVar1177 < 0x100) * auVar1095[5] -
                                   (0xff < uVar1177);
                    cVar28 = (uVar1188 != 0) * (uVar1188 < 0x100) * auVar1095[7] - (0xff < uVar1188)
                    ;
                    auVar910[0xb] = cVar28;
                    auVar918[0xc] =
                         (uVar1191 != 0) * (uVar1191 < 0x100) * auVar1095[9] - (0xff < uVar1191);
                    auVar918._0_12_ = auVar910;
                    cVar30 = (uVar1194 != 0) * (uVar1194 < 0x100) * auVar1095[0xb] -
                             (0xff < uVar1194);
                    auVar918[0xd] = cVar30;
                    auVar927[0xe] =
                         (uVar1198 != 0) * (uVar1198 < 0x100) * auVar1095[0xd] - (0xff < uVar1198);
                    auVar927._0_14_ = auVar918;
                    cVar32 = (uVar1199 != 0) * (uVar1199 < 0x100) * auVar1095[0xf] -
                             (0xff < uVar1199);
                    auVar927[0xf] = cVar32;
                    auVar980 = __LC6 & auVar987;
                    uVar897 = (ushort)bVar18;
                    uVar929 = (ushort)((uint)uVar941 >> 0x18);
                    uVar930 = (ushort)((uint6)uVar942 >> 0x28);
                    uVar931 = (ushort)((ulong)uVar944 >> 0x38);
                    uVar933 = (ushort)((unkuint10)auVar968._0_10_ >> 0x48);
                    uVar1191 = auVar968._10_2_ >> 8;
                    uVar1194 = auVar977._12_2_ >> 8;
                    uVar1199 = auVar987._14_2_ >> 8;
                    cVar7 = (uVar959 != 0) * (uVar959 < 0x100) * cVar7 - (0xff < uVar959);
                    bVar35 = (uVar897 != 0) * (uVar897 < 0x100) * bVar18 - (0xff < uVar897);
                    uVar897 = CONCAT11(bVar35,cVar7);
                    bVar18 = (uVar929 != 0) * (uVar929 < 0x100) * cVar21 - (0xff < uVar929);
                    uVar588 = CONCAT12(bVar18,uVar897);
                    bVar39 = (uVar930 != 0) * (uVar930 < 0x100) * cVar19 - (0xff < uVar930);
                    uVar892 = CONCAT13(bVar39,uVar588);
                    bVar38 = (uVar931 != 0) * (uVar931 < 0x100) * cVar25 - (0xff < uVar931);
                    uVar759 = CONCAT14(bVar38,uVar892);
                    bVar37 = (uVar933 != 0) * (uVar933 < 0x100) * cVar23 - (0xff < uVar933);
                    auVar860[5] = bVar37;
                    auVar860._0_5_ = uVar759;
                    sVar932 = auVar1063._0_2_;
                    sVar934 = auVar1063._2_2_;
                    sVar961 = auVar1063._4_2_;
                    sVar995 = auVar1063._6_2_;
                    sVar999 = auVar1063._8_2_;
                    sVar1021 = auVar1063._10_2_;
                    sVar1024 = auVar1063._12_2_;
                    sVar958 = auVar1063._14_2_;
                    cVar21 = (0 < sVar958) * (sVar958 < 0x100) * auVar1063[0xe] - (0xff < sVar958);
                    sVar958 = auVar980._0_2_;
                    bVar34 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[0] - (0xff < sVar958);
                    uVar929 = CONCAT11(bVar34,cVar21);
                    sVar958 = auVar980._2_2_;
                    bVar36 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[2] - (0xff < sVar958);
                    uVar589 = CONCAT12(bVar36,uVar929);
                    sVar958 = auVar980._4_2_;
                    bVar40 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[4] - (0xff < sVar958);
                    uVar891 = CONCAT13(bVar40,uVar589);
                    sVar958 = auVar980._6_2_;
                    bVar41 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[6] - (0xff < sVar958);
                    uVar760 = CONCAT14(bVar41,uVar891);
                    sVar958 = auVar980._8_2_;
                    bVar42 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[8] - (0xff < sVar958);
                    auVar855[5] = bVar42;
                    auVar855._0_5_ = uVar760;
                    sVar1123 = auVar980._10_2_;
                    sVar1143 = auVar980._12_2_;
                    sVar1156 = auVar980._14_2_;
                    auVar1095 = __LC6 & auVar927;
                    uVar930 = (ushort)bVar26;
                    uVar931 = (ushort)((uint)uVar901 >> 0x18);
                    uVar933 = (ushort)((uint6)uVar902 >> 0x28);
                    uVar935 = (ushort)((ulong)uVar903 >> 0x38);
                    uVar937 = (ushort)((unkuint10)auVar910._0_10_ >> 0x48);
                    uVar1078 = auVar910._10_2_ >> 8;
                    uVar1084 = auVar918._12_2_ >> 8;
                    uVar959 = auVar927._14_2_ >> 8;
                    cVar16 = (uVar1045 != 0) * (uVar1045 < 0x100) * cVar16 - (0xff < uVar1045);
                    bVar26 = (uVar930 != 0) * (uVar930 < 0x100) * bVar26 - (0xff < uVar930);
                    uVar930 = CONCAT11(bVar26,cVar16);
                    bVar43 = (uVar931 != 0) * (uVar931 < 0x100) * cVar29 - (0xff < uVar931);
                    uVar606 = CONCAT12(bVar43,uVar930);
                    bVar44 = (uVar933 != 0) * (uVar933 < 0x100) * cVar27 - (0xff < uVar933);
                    uVar884 = CONCAT13(bVar44,uVar606);
                    bVar45 = (uVar935 != 0) * (uVar935 < 0x100) * cVar33 - (0xff < uVar935);
                    uVar765 = CONCAT14(bVar45,uVar884);
                    bVar47 = (uVar937 != 0) * (uVar937 < 0x100) * cVar31 - (0xff < uVar937);
                    auVar862[5] = bVar47;
                    auVar862._0_5_ = uVar765;
                    sVar958 = auVar1185._0_2_;
                    sVar936 = auVar1185._2_2_;
                    sVar992 = auVar1185._4_2_;
                    sVar996 = auVar1185._6_2_;
                    sVar1102 = auVar1185._8_2_;
                    sVar1105 = auVar1185._10_2_;
                    sVar1109 = auVar1185._12_2_;
                    sVar1216 = auVar1185._14_2_;
                    cVar19 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar1185[0xe] -
                             (0xff < sVar1216);
                    sVar1216 = auVar1095._0_2_;
                    bVar49 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar1095[0] - (0xff < sVar1216);
                    uVar931 = CONCAT11(bVar49,cVar19);
                    sVar1216 = auVar1095._2_2_;
                    bVar52 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar1095[2] - (0xff < sVar1216);
                    uVar607 = CONCAT12(bVar52,uVar931);
                    sVar1216 = auVar1095._4_2_;
                    bVar51 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar1095[4] - (0xff < sVar1216);
                    uVar880 = CONCAT13(bVar51,uVar607);
                    sVar1216 = auVar1095._6_2_;
                    bVar50 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar1095[6] - (0xff < sVar1216);
                    uVar766 = CONCAT14(bVar50,uVar880);
                    sVar1216 = auVar1095._8_2_;
                    bVar48 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar1095[8] - (0xff < sVar1216);
                    auVar857[5] = bVar48;
                    auVar857._0_5_ = uVar766;
                    sVar1137 = auVar1095._10_2_;
                    sVar1146 = auVar1095._12_2_;
                    sVar1158 = auVar1095._14_2_;
                    auVar921 = local_348 & __LC6;
                    uVar1082 = local_328._0_2_ >> 8;
                    uVar1086 = local_328._2_2_ >> 8;
                    uVar960 = local_328._4_2_ >> 8;
                    uVar1115 = local_328._6_2_ >> 8;
                    uVar1177 = local_328._8_2_ >> 8;
                    uVar1188 = local_328._10_2_ >> 8;
                    uVar1198 = local_328._12_2_ >> 8;
                    uVar1202 = local_328._14_2_ >> 8;
                    sVar1216 = auVar1013._0_2_;
                    sVar1195 = auVar1013._2_2_;
                    bVar53 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1013[2] - (0xff < sVar1195);
                    sVar1195 = auVar1013._4_2_;
                    sVar938 = auVar1013._6_2_;
                    cVar31 = (0 < sVar938) * (sVar938 < 0x100) * auVar1013[6] - (0xff < sVar938);
                    uVar901 = CONCAT13(cVar31,CONCAT12((0 < sVar1195) * (sVar1195 < 0x100) *
                                                       auVar1013[4] - (0xff < sVar1195),
                                                       CONCAT11(bVar53,(0 < sVar1216) *
                                                                       (sVar1216 < 0x100) *
                                                                       auVar1013[0] -
                                                                       (0xff < sVar1216))));
                    sVar1216 = auVar1013._8_2_;
                    sVar1195 = auVar1013._10_2_;
                    cVar46 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1013[10] - (0xff < sVar1195)
                    ;
                    uVar902 = CONCAT15(cVar46,CONCAT14((0 < sVar1216) * (sVar1216 < 0x100) *
                                                       auVar1013[8] - (0xff < sVar1216),uVar901));
                    sVar1216 = auVar1013._12_2_;
                    sVar1195 = auVar1013._14_2_;
                    cVar25 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1013[0xe] -
                             (0xff < sVar1195);
                    uVar903 = CONCAT17(cVar25,CONCAT16((0 < sVar1216) * (sVar1216 < 0x100) *
                                                       auVar1013[0xc] - (0xff < sVar1216),uVar902));
                    sVar1216 = auVar921._0_2_;
                    sVar1195 = auVar921._2_2_;
                    cVar23 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar921[2] - (0xff < sVar1195);
                    auVar1054._0_10_ =
                         CONCAT19(cVar23,CONCAT18((0 < sVar1216) * (sVar1216 < 0x100) * auVar921[0]
                                                  - (0xff < sVar1216),uVar903));
                    sVar1216 = auVar921._4_2_;
                    auVar1054[10] =
                         (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[4] - (0xff < sVar1216);
                    sVar1216 = auVar921._6_2_;
                    cVar29 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[6] - (0xff < sVar1216);
                    auVar1054[0xb] = cVar29;
                    sVar1216 = auVar921._8_2_;
                    auVar1062[0xc] =
                         (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[8] - (0xff < sVar1216);
                    auVar1062._0_12_ = auVar1054;
                    sVar1216 = auVar921._10_2_;
                    cVar27 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[10] - (0xff < sVar1216);
                    auVar1062[0xd] = cVar27;
                    sVar1216 = auVar921._12_2_;
                    auVar1071[0xe] =
                         (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[0xc] - (0xff < sVar1216);
                    auVar1071._0_14_ = auVar1062;
                    sVar1216 = auVar921._14_2_;
                    cVar33 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[0xe] - (0xff < sVar1216)
                    ;
                    auVar1071[0xf] = cVar33;
                    auVar1013 = __LC6 & auVar1071;
                    uVar1101 = (ushort)bVar53;
                    uVar1104 = (ushort)((uint)uVar901 >> 0x18);
                    uVar1108 = (ushort)((uint6)uVar902 >> 0x28);
                    uVar1112 = (ushort)((ulong)uVar903 >> 0x38);
                    uVar1116 = (ushort)((unkuint10)auVar1054._0_10_ >> 0x48);
                    uVar1149 = auVar1054._10_2_ >> 8;
                    uVar1152 = auVar1062._12_2_ >> 8;
                    uVar1155 = auVar1071._14_2_ >> 8;
                    uVar933 = local_348._0_2_ >> 8;
                    uVar935 = local_348._2_2_ >> 8;
                    uVar937 = local_348._4_2_ >> 8;
                    uVar939 = local_348._6_2_ >> 8;
                    uVar1045 = local_348._8_2_ >> 8;
                    uVar1072 = local_348._10_2_ >> 8;
                    uVar1074 = local_348._12_2_ >> 8;
                    uVar1076 = local_348._14_2_ >> 8;
                    bVar54 = (uVar1139 != 0) * (uVar1139 < 0x100) * SUB161(_local_358,3) -
                             (0xff < uVar1139);
                    cVar59 = (uVar1073 != 0) * (uVar1073 < 0x100) * SUB161(_local_358,7) -
                             (0xff < uVar1073);
                    uVar901 = CONCAT13(cVar59,CONCAT12((uVar1145 != 0) * (uVar1145 < 0x100) *
                                                       SUB161(_local_358,5) - (0xff < uVar1145),
                                                       CONCAT11(bVar54,(uVar1122 != 0) *
                                                                       (uVar1122 < 0x100) *
                                                                       SUB161(_local_358,1) -
                                                                       (0xff < uVar1122))));
                    cVar57 = (uVar1083 != 0) * (uVar1083 < 0x100) * SUB161(_local_358,0xb) -
                             (0xff < uVar1083);
                    uVar902 = CONCAT15(cVar57,CONCAT14((uVar1077 != 0) * (uVar1077 < 0x100) *
                                                       SUB161(_local_358,9) - (0xff < uVar1077),
                                                       uVar901));
                    cVar56 = (uVar1099 != 0) * (uVar1099 < 0x100) * SUB161(_local_358,0xf) -
                             (0xff < uVar1099);
                    uVar903 = CONCAT17(cVar56,CONCAT16((uVar1088 != 0) * (uVar1088 < 0x100) *
                                                       SUB161(_local_358,0xd) - (0xff < uVar1088),
                                                       uVar902));
                    cVar55 = (uVar935 != 0) * (uVar935 < 0x100) * local_348[3] - (0xff < uVar935);
                    auVar1006._0_10_ =
                         CONCAT19(cVar55,CONCAT18((uVar933 != 0) * (uVar933 < 0x100) * local_348[1]
                                                  - (0xff < uVar933),uVar903));
                    auVar1006[10] =
                         (uVar937 != 0) * (uVar937 < 0x100) * local_348[5] - (0xff < uVar937);
                    cVar61 = (uVar939 != 0) * (uVar939 < 0x100) * local_348[7] - (0xff < uVar939);
                    auVar1006[0xb] = cVar61;
                    auVar1012[0xc] =
                         (uVar1045 != 0) * (uVar1045 < 0x100) * local_348[9] - (0xff < uVar1045);
                    auVar1012._0_12_ = auVar1006;
                    cVar58 = (uVar1072 != 0) * (uVar1072 < 0x100) * local_348[0xb] -
                             (0xff < uVar1072);
                    auVar1012[0xd] = cVar58;
                    auVar1018[0xe] =
                         (uVar1074 != 0) * (uVar1074 < 0x100) * local_348[0xd] - (0xff < uVar1074);
                    auVar1018._0_14_ = auVar1012;
                    cVar60 = (uVar1076 != 0) * (uVar1076 < 0x100) * local_348[0xf] -
                             (0xff < uVar1076);
                    auVar1018[0xf] = cVar60;
                    auVar1243 = __LC6 & auVar1018;
                    uVar1122 = (ushort)bVar54;
                    uVar1139 = (ushort)((uint)uVar901 >> 0x18);
                    uVar1145 = (ushort)((uint6)uVar902 >> 0x28);
                    uVar1073 = (ushort)((ulong)uVar903 >> 0x38);
                    uVar1077 = (ushort)((unkuint10)auVar1006._0_10_ >> 0x48);
                    uVar1083 = auVar1006._10_2_ >> 8;
                    uVar1088 = auVar1012._12_2_ >> 8;
                    uVar1099 = auVar1018._14_2_ >> 8;
                    auVar921 = local_328 & __LC6;
                    sVar1216 = auVar920._0_2_;
                    sVar1195 = auVar920._2_2_;
                    bVar62 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar920[2] - (0xff < sVar1195);
                    sVar1195 = auVar920._4_2_;
                    sVar938 = auVar920._6_2_;
                    cVar69 = (0 < sVar938) * (sVar938 < 0x100) * auVar920[6] - (0xff < sVar938);
                    uVar941 = CONCAT13(cVar69,CONCAT12((0 < sVar1195) * (sVar1195 < 0x100) *
                                                       auVar920[4] - (0xff < sVar1195),
                                                       CONCAT11(bVar62,(0 < sVar1216) *
                                                                       (sVar1216 < 0x100) *
                                                                       auVar920[0] -
                                                                       (0xff < sVar1216))));
                    sVar1216 = auVar920._8_2_;
                    sVar1195 = auVar920._10_2_;
                    cVar67 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar920[10] - (0xff < sVar1195);
                    uVar942 = CONCAT15(cVar67,CONCAT14((0 < sVar1216) * (sVar1216 < 0x100) *
                                                       auVar920[8] - (0xff < sVar1216),uVar941));
                    sVar1216 = auVar920._12_2_;
                    sVar1195 = auVar920._14_2_;
                    cVar65 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar920[0xe] - (0xff < sVar1195)
                    ;
                    uVar944 = CONCAT17(cVar65,CONCAT16((0 < sVar1216) * (sVar1216 < 0x100) *
                                                       auVar920[0xc] - (0xff < sVar1216),uVar942));
                    sVar1216 = auVar921._0_2_;
                    sVar1195 = auVar921._2_2_;
                    cVar63 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar921[2] - (0xff < sVar1195);
                    auVar949._0_10_ =
                         CONCAT19(cVar63,CONCAT18((0 < sVar1216) * (sVar1216 < 0x100) * auVar921[0]
                                                  - (0xff < sVar1216),uVar944));
                    sVar1216 = auVar921._4_2_;
                    auVar949[10] = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[4] -
                                   (0xff < sVar1216);
                    sVar1216 = auVar921._6_2_;
                    cVar68 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[6] - (0xff < sVar1216);
                    auVar949[0xb] = cVar68;
                    sVar1216 = auVar921._8_2_;
                    auVar954[0xc] =
                         (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[8] - (0xff < sVar1216);
                    auVar954._0_12_ = auVar949;
                    sVar1216 = auVar921._10_2_;
                    cVar66 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[10] - (0xff < sVar1216);
                    auVar954[0xd] = cVar66;
                    sVar1216 = auVar921._12_2_;
                    auVar957[0xe] =
                         (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[0xc] - (0xff < sVar1216);
                    auVar957._0_14_ = auVar954;
                    sVar1216 = auVar921._14_2_;
                    cVar64 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[0xe] - (0xff < sVar1216)
                    ;
                    auVar957[0xf] = cVar64;
                    uVar933 = local_338._0_2_ >> 8;
                    uVar935 = local_338._2_2_ >> 8;
                    uVar937 = local_338._4_2_ >> 8;
                    uVar939 = local_338._6_2_ >> 8;
                    uVar1045 = local_338._8_2_ >> 8;
                    uVar1072 = local_338._10_2_ >> 8;
                    uVar1074 = local_338._12_2_ >> 8;
                    uVar1076 = local_338._14_2_ >> 8;
                    bVar70 = (uVar935 != 0) * (uVar935 < 0x100) * local_338[3] - (0xff < uVar935);
                    cVar77 = (uVar939 != 0) * (uVar939 < 0x100) * local_338[7] - (0xff < uVar939);
                    uVar901 = CONCAT13(cVar77,CONCAT12((uVar937 != 0) * (uVar937 < 0x100) *
                                                       local_338[5] - (0xff < uVar937),
                                                       CONCAT11(bVar70,(uVar933 != 0) *
                                                                       (uVar933 < 0x100) *
                                                                       local_338[1] -
                                                                       (0xff < uVar933))));
                    cVar73 = (uVar1072 != 0) * (uVar1072 < 0x100) * local_338[0xb] -
                             (0xff < uVar1072);
                    uVar902 = CONCAT15(cVar73,CONCAT14((uVar1045 != 0) * (uVar1045 < 0x100) *
                                                       local_338[9] - (0xff < uVar1045),uVar901));
                    cVar72 = (uVar1076 != 0) * (uVar1076 < 0x100) * local_338[0xf] -
                             (0xff < uVar1076);
                    uVar903 = CONCAT17(cVar72,CONCAT16((uVar1074 != 0) * (uVar1074 < 0x100) *
                                                       local_338[0xd] - (0xff < uVar1074),uVar902));
                    cVar74 = (uVar1086 != 0) * (uVar1086 < 0x100) * local_328[3] - (0xff < uVar1086)
                    ;
                    auVar911._0_10_ =
                         CONCAT19(cVar74,CONCAT18((uVar1082 != 0) * (uVar1082 < 0x100) *
                                                  local_328[1] - (0xff < uVar1082),uVar903));
                    auVar911[10] = (uVar960 != 0) * (uVar960 < 0x100) * local_328[5] -
                                   (0xff < uVar960);
                    cVar76 = (uVar1115 != 0) * (uVar1115 < 0x100) * local_328[7] - (0xff < uVar1115)
                    ;
                    auVar911[0xb] = cVar76;
                    auVar919[0xc] =
                         (uVar1177 != 0) * (uVar1177 < 0x100) * local_328[9] - (0xff < uVar1177);
                    auVar919._0_12_ = auVar911;
                    cVar75 = (uVar1188 != 0) * (uVar1188 < 0x100) * local_328[0xb] -
                             (0xff < uVar1188);
                    auVar919[0xd] = cVar75;
                    auVar928[0xe] =
                         (uVar1198 != 0) * (uVar1198 < 0x100) * local_328[0xd] - (0xff < uVar1198);
                    auVar928._0_14_ = auVar919;
                    cVar71 = (uVar1202 != 0) * (uVar1202 < 0x100) * local_328[0xf] -
                             (0xff < uVar1202);
                    auVar928[0xf] = cVar71;
                    auVar920 = __LC6 & auVar957;
                    uVar933 = (ushort)bVar62;
                    uVar935 = (ushort)((uint)uVar941 >> 0x18);
                    uVar937 = (ushort)((uint6)uVar942 >> 0x28);
                    uVar939 = (ushort)((ulong)uVar944 >> 0x38);
                    uVar1045 = (ushort)((unkuint10)auVar949._0_10_ >> 0x48);
                    uVar1115 = auVar949._10_2_ >> 8;
                    uVar1177 = auVar954._12_2_ >> 8;
                    uVar1188 = auVar957._14_2_ >> 8;
                    cVar33 = (uVar1155 != 0) * (uVar1155 < 0x100) * cVar33 - (0xff < uVar1155);
                    bVar62 = (uVar933 != 0) * (uVar933 < 0x100) * bVar62 - (0xff < uVar933);
                    uVar933 = CONCAT11(bVar62,cVar33);
                    bVar79 = (uVar935 != 0) * (uVar935 < 0x100) * cVar69 - (0xff < uVar935);
                    uVar608 = CONCAT12(bVar79,uVar933);
                    bVar80 = (uVar937 != 0) * (uVar937 < 0x100) * cVar67 - (0xff < uVar937);
                    uVar877 = CONCAT13(bVar80,uVar608);
                    bVar81 = (uVar939 != 0) * (uVar939 < 0x100) * cVar65 - (0xff < uVar939);
                    uVar767 = CONCAT14(bVar81,uVar877);
                    bVar82 = (uVar1045 != 0) * (uVar1045 < 0x100) * cVar63 - (0xff < uVar1045);
                    auVar858[5] = bVar82;
                    auVar858._0_5_ = uVar767;
                    sVar1216 = auVar1013._0_2_;
                    sVar938 = auVar1013._2_2_;
                    sVar993 = auVar1013._4_2_;
                    sVar997 = auVar1013._6_2_;
                    sVar1019 = auVar1013._8_2_;
                    sVar1022 = auVar1013._10_2_;
                    sVar1113 = auVar1013._12_2_;
                    sVar1195 = auVar1013._14_2_;
                    cVar69 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1013[0xe] -
                             (0xff < sVar1195);
                    sVar1195 = auVar920._0_2_;
                    bVar83 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar920[0] - (0xff < sVar1195);
                    uVar935 = CONCAT11(bVar83,cVar69);
                    sVar1195 = auVar920._2_2_;
                    bVar85 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar920[2] - (0xff < sVar1195);
                    uVar609 = CONCAT12(bVar85,uVar935);
                    sVar1195 = auVar920._4_2_;
                    bVar87 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar920[4] - (0xff < sVar1195);
                    uVar887 = CONCAT13(bVar87,uVar609);
                    sVar1195 = auVar920._6_2_;
                    bVar84 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar920[6] - (0xff < sVar1195);
                    uVar768 = CONCAT14(bVar84,uVar887);
                    sVar1195 = auVar920._8_2_;
                    bVar86 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar920[8] - (0xff < sVar1195);
                    auVar856[5] = bVar86;
                    auVar856._0_5_ = uVar768;
                    sVar1140 = auVar920._10_2_;
                    sVar1150 = auVar920._12_2_;
                    sVar1163 = auVar920._14_2_;
                    auVar921 = __LC6 & auVar928;
                    uVar939 = (ushort)bVar70;
                    uVar1045 = (ushort)((uint)uVar901 >> 0x18);
                    uVar1072 = (ushort)((uint6)uVar902 >> 0x28);
                    uVar1074 = (ushort)((ulong)uVar903 >> 0x38);
                    uVar1076 = (ushort)((unkuint10)auVar911._0_10_ >> 0x48);
                    uVar1082 = auVar911._10_2_ >> 8;
                    uVar1086 = auVar919._12_2_ >> 8;
                    uVar960 = auVar928._14_2_ >> 8;
                    sVar1195 = auVar1243._0_2_;
                    sVar940 = auVar1243._2_2_;
                    sVar994 = auVar1243._4_2_;
                    sVar998 = auVar1243._6_2_;
                    sVar1020 = auVar1243._8_2_;
                    sVar1023 = auVar1243._10_2_;
                    sVar1117 = auVar1243._12_2_;
                    sVar1120 = auVar1243._14_2_;
                    cVar67 = (0 < sVar1120) * (sVar1120 < 0x100) * auVar1243[0xe] -
                             (0xff < sVar1120);
                    sVar1120 = auVar921._0_2_;
                    bVar88 = (0 < sVar1120) * (sVar1120 < 0x100) * auVar921[0] - (0xff < sVar1120);
                    uVar937 = CONCAT11(bVar88,cVar67);
                    sVar1120 = auVar921._2_2_;
                    bVar89 = (0 < sVar1120) * (sVar1120 < 0x100) * auVar921[2] - (0xff < sVar1120);
                    uVar610 = CONCAT12(bVar89,uVar937);
                    sVar1120 = auVar921._4_2_;
                    bVar90 = (0 < sVar1120) * (sVar1120 < 0x100) * auVar921[4] - (0xff < sVar1120);
                    uVar881 = CONCAT13(bVar90,uVar610);
                    sVar1120 = auVar921._6_2_;
                    bVar91 = (0 < sVar1120) * (sVar1120 < 0x100) * auVar921[6] - (0xff < sVar1120);
                    uVar769 = CONCAT14(bVar91,uVar881);
                    sVar1120 = auVar921._8_2_;
                    bVar92 = (0 < sVar1120) * (sVar1120 < 0x100) * auVar921[8] - (0xff < sVar1120);
                    auVar859[5] = bVar92;
                    auVar859._0_5_ = uVar769;
                    sVar1120 = auVar921._10_2_;
                    sVar1153 = auVar921._12_2_;
                    sVar1165 = auVar921._14_2_;
                    cVar60 = (uVar1099 != 0) * (uVar1099 < 0x100) * cVar60 - (0xff < uVar1099);
                    bVar70 = (uVar939 != 0) * (uVar939 < 0x100) * bVar70 - (0xff < uVar939);
                    uVar939 = CONCAT11(bVar70,cVar60);
                    bVar93 = (uVar1045 != 0) * (uVar1045 < 0x100) * cVar77 - (0xff < uVar1045);
                    uVar611 = CONCAT12(bVar93,uVar939);
                    bVar94 = (uVar1072 != 0) * (uVar1072 < 0x100) * cVar73 - (0xff < uVar1072);
                    uVar878 = CONCAT13(bVar94,uVar611);
                    bVar95 = (uVar1074 != 0) * (uVar1074 < 0x100) * cVar72 - (0xff < uVar1074);
                    uVar770 = CONCAT14(bVar95,uVar878);
                    bVar96 = (uVar1076 != 0) * (uVar1076 < 0x100) * cVar74 - (0xff < uVar1076);
                    auVar861[5] = bVar96;
                    auVar861._0_5_ = uVar770;
                    auVar855._6_8_ = 0;
                    auVar174[0xe] = cVar21;
                    auVar174._0_14_ = auVar855 << 0x38;
                    uVar357 = CONCAT26(auVar174._13_2_,
                                       CONCAT15((0 < sVar1024) * (sVar1024 < 0x100) * auVar1063[0xc]
                                                - (0xff < sVar1024),uVar760));
                    auVar803._4_8_ = 0;
                    auVar803._0_4_ = uVar891;
                    auVar246._12_3_ = (int3)((ulong)uVar357 >> 0x28);
                    auVar246._0_12_ = auVar803 << 0x38;
                    uVar1029 = CONCAT44(auVar246._11_4_,
                                        CONCAT13((0 < sVar1021) * (sVar1021 < 0x100) * auVar1063[10]
                                                 - (0xff < sVar1021),uVar589));
                    auVar331._10_5_ = (int5)((ulong)uVar1029 >> 0x18);
                    auVar331._0_10_ = (unkuint10)uVar929 << 0x38;
                    uVar903 = CONCAT62(auVar331._9_6_,
                                       CONCAT11((0 < sVar999) * (sVar999 < 0x100) * auVar1063[8] -
                                                (0xff < sVar999),cVar21));
                    auVar523._7_8_ = 0;
                    auVar523._0_7_ = (uint7)((ulong)uVar903 >> 8);
                    Var362 = CONCAT81(SUB158(auVar523 << 0x40,7),
                                      (0 < sVar995) * (sVar995 < 0x100) * auVar1063[6] -
                                      (0xff < sVar995));
                    auVar708._9_6_ = 0;
                    auVar708._0_9_ = Var362;
                    auVar524._1_10_ = SUB1510(auVar708 << 0x30,5);
                    auVar524[0] = (0 < sVar961) * (sVar961 < 0x100) * auVar1063[4] -
                                  (0xff < sVar961);
                    auVar709._11_4_ = 0;
                    auVar709._0_11_ = auVar524;
                    auVar525._1_12_ = SUB1512(auVar709 << 0x20,3);
                    auVar525[0] = (0 < sVar934) * (sVar934 < 0x100) * auVar1063[2] -
                                  (0xff < sVar934);
                    auVar856._6_8_ = 0;
                    auVar175[0xe] = cVar69;
                    auVar175._0_14_ = auVar856 << 0x38;
                    uVar358 = CONCAT26(auVar175._13_2_,
                                       CONCAT15((0 < sVar1113) * (sVar1113 < 0x100) * auVar1013[0xc]
                                                - (0xff < sVar1113),uVar768));
                    auVar804._4_8_ = 0;
                    auVar804._0_4_ = uVar887;
                    auVar247._12_3_ = (int3)((ulong)uVar358 >> 0x28);
                    auVar247._0_12_ = auVar804 << 0x38;
                    uVar356 = CONCAT44(auVar247._11_4_,
                                       CONCAT13((0 < sVar1022) * (sVar1022 < 0x100) * auVar1013[10]
                                                - (0xff < sVar1022),uVar609));
                    auVar332._10_5_ = (int5)((ulong)uVar356 >> 0x18);
                    auVar332._0_10_ = (unkuint10)uVar935 << 0x38;
                    uVar944 = CONCAT62(auVar332._9_6_,
                                       CONCAT11((0 < sVar1019) * (sVar1019 < 0x100) * auVar1013[8] -
                                                (0xff < sVar1019),cVar69));
                    auVar526._7_8_ = 0;
                    auVar526._0_7_ = (uint7)((ulong)uVar944 >> 8);
                    Var398 = CONCAT81(SUB158(auVar526 << 0x40,7),
                                      (0 < sVar997) * (sVar997 < 0x100) * auVar1013[6] -
                                      (0xff < sVar997));
                    auVar710._9_6_ = 0;
                    auVar710._0_9_ = Var398;
                    auVar527._1_10_ = SUB1510(auVar710 << 0x30,5);
                    auVar527[0] = (0 < sVar993) * (sVar993 < 0x100) * auVar1013[4] -
                                  (0xff < sVar993);
                    auVar711._11_4_ = 0;
                    auVar711._0_11_ = auVar527;
                    auVar528._1_12_ = SUB1512(auVar711 << 0x20,3);
                    auVar528[0] = (0 < sVar938) * (sVar938 < 0x100) * auVar1013[2] -
                                  (0xff < sVar938);
                    sVar1203 = (ushort)(byte)((0 < sVar932) * (sVar932 < 0x100) * auVar1063[0] -
                                             (0xff < sVar932)) -
                               (ushort)(byte)((0 < sVar1216) * (sVar1216 < 0x100) * auVar1013[0] -
                                             (0xff < sVar1216));
                    sVar1206 = auVar525._0_2_ - auVar528._0_2_;
                    sVar961 = auVar524._0_2_ - auVar527._0_2_;
                    sVar993 = (short)Var362 - (short)Var398;
                    sVar932 = (short)((ulong)uVar903 >> 8) - (short)((ulong)uVar944 >> 8);
                    sVar1208 = (short)((ulong)uVar1029 >> 0x18) - (short)((ulong)uVar356 >> 0x18);
                    sVar1210 = (short)((ulong)uVar357 >> 0x28) - (short)((ulong)uVar358 >> 0x28);
                    sVar1212 = (auVar174._13_2_ >> 8) - (auVar175._13_2_ >> 8);
                    auVar857._6_8_ = 0;
                    auVar176[0xe] = cVar19;
                    auVar176._0_14_ = auVar857 << 0x38;
                    uVar359 = CONCAT26(auVar176._13_2_,
                                       CONCAT15((0 < sVar1109) * (sVar1109 < 0x100) * auVar1185[0xc]
                                                - (0xff < sVar1109),uVar766));
                    auVar805._4_8_ = 0;
                    auVar805._0_4_ = uVar880;
                    auVar248._12_3_ = (int3)((ulong)uVar359 >> 0x28);
                    auVar248._0_12_ = auVar805 << 0x38;
                    uVar356 = CONCAT44(auVar248._11_4_,
                                       CONCAT13((0 < sVar1105) * (sVar1105 < 0x100) * auVar1185[10]
                                                - (0xff < sVar1105),uVar607));
                    auVar333._10_5_ = (int5)((ulong)uVar356 >> 0x18);
                    auVar333._0_10_ = (unkuint10)uVar931 << 0x38;
                    uVar903 = CONCAT62(auVar333._9_6_,
                                       CONCAT11((0 < sVar1102) * (sVar1102 < 0x100) * auVar1185[8] -
                                                (0xff < sVar1102),cVar19));
                    auVar529._7_8_ = 0;
                    auVar529._0_7_ = (uint7)((ulong)uVar903 >> 8);
                    Var362 = CONCAT81(SUB158(auVar529 << 0x40,7),
                                      (0 < sVar996) * (sVar996 < 0x100) * auVar1185[6] -
                                      (0xff < sVar996));
                    auVar712._9_6_ = 0;
                    auVar712._0_9_ = Var362;
                    auVar530._1_10_ = SUB1510(auVar712 << 0x30,5);
                    auVar530[0] = (0 < sVar992) * (sVar992 < 0x100) * auVar1185[4] -
                                  (0xff < sVar992);
                    auVar713._11_4_ = 0;
                    auVar713._0_11_ = auVar530;
                    auVar531._1_12_ = SUB1512(auVar713 << 0x20,3);
                    auVar531[0] = (0 < sVar936) * (sVar936 < 0x100) * auVar1185[2] -
                                  (0xff < sVar936);
                    auVar858._6_8_ = 0;
                    auVar177[0xe] = cVar33;
                    auVar177._0_14_ = auVar858 << 0x38;
                    uVar360 = CONCAT26(auVar177._13_2_,
                                       CONCAT15((uVar1152 != 0) * (uVar1152 < 0x100) * cVar27 -
                                                (0xff < uVar1152),uVar767));
                    auVar806._4_8_ = 0;
                    auVar806._0_4_ = uVar877;
                    auVar249._12_3_ = (int3)((ulong)uVar360 >> 0x28);
                    auVar249._0_12_ = auVar806 << 0x38;
                    uVar357 = CONCAT44(auVar249._11_4_,
                                       CONCAT13((uVar1149 != 0) * (uVar1149 < 0x100) * cVar29 -
                                                (0xff < uVar1149),uVar608));
                    auVar334._10_5_ = (int5)((ulong)uVar357 >> 0x18);
                    auVar334._0_10_ = (unkuint10)uVar933 << 0x38;
                    uVar944 = CONCAT62(auVar334._9_6_,
                                       CONCAT11((uVar1116 != 0) * (uVar1116 < 0x100) * cVar23 -
                                                (0xff < uVar1116),cVar33));
                    auVar532._7_8_ = 0;
                    auVar532._0_7_ = (uint7)((ulong)uVar944 >> 8);
                    Var398 = CONCAT81(SUB158(auVar532 << 0x40,7),
                                      (uVar1112 != 0) * (uVar1112 < 0x100) * cVar25 -
                                      (0xff < uVar1112));
                    auVar714._9_6_ = 0;
                    auVar714._0_9_ = Var398;
                    auVar533._1_10_ = SUB1510(auVar714 << 0x30,5);
                    auVar533[0] = (uVar1108 != 0) * (uVar1108 < 0x100) * cVar46 - (0xff < uVar1108);
                    auVar715._11_4_ = 0;
                    auVar715._0_11_ = auVar533;
                    auVar534._1_12_ = SUB1512(auVar715 << 0x20,3);
                    auVar534[0] = (uVar1104 != 0) * (uVar1104 < 0x100) * cVar31 - (0xff < uVar1104);
                    sVar1178 = (ushort)bVar34 - (ushort)bVar83;
                    sVar1189 = (ushort)bVar36 - (ushort)bVar85;
                    sVar934 = (ushort)bVar40 - (ushort)bVar87;
                    sVar936 = (ushort)bVar41 - (ushort)bVar84;
                    sVar938 = (ushort)bVar42 - (ushort)bVar86;
                    sVar1192 = (ushort)(byte)((0 < sVar1123) * (sVar1123 < 0x100) * auVar980[10] -
                                             (0xff < sVar1123)) -
                               (ushort)(byte)((0 < sVar1140) * (sVar1140 < 0x100) * auVar920[10] -
                                             (0xff < sVar1140));
                    sVar1196 = (ushort)(byte)((0 < sVar1143) * (sVar1143 < 0x100) * auVar980[0xc] -
                                             (0xff < sVar1143)) -
                               (ushort)(byte)((0 < sVar1150) * (sVar1150 < 0x100) * auVar920[0xc] -
                                             (0xff < sVar1150));
                    sVar1200 = (ushort)(byte)((0 < sVar1156) * (sVar1156 < 0x100) * auVar980[0xe] -
                                             (0xff < sVar1156)) -
                               (ushort)(byte)((0 < sVar1163) * (sVar1163 < 0x100) * auVar920[0xe] -
                                             (0xff < sVar1163));
                    auVar859._6_8_ = 0;
                    auVar178[0xe] = cVar67;
                    auVar178._0_14_ = auVar859 << 0x38;
                    uVar1000 = CONCAT26(auVar178._13_2_,
                                        CONCAT15((0 < sVar1117) * (sVar1117 < 0x100) *
                                                 auVar1243[0xc] - (0xff < sVar1117),uVar769));
                    auVar807._4_8_ = 0;
                    auVar807._0_4_ = uVar881;
                    auVar250._12_3_ = (int3)((ulong)uVar1000 >> 0x28);
                    auVar250._0_12_ = auVar807 << 0x38;
                    uVar358 = CONCAT44(auVar250._11_4_,
                                       CONCAT13((0 < sVar1023) * (sVar1023 < 0x100) * auVar1243[10]
                                                - (0xff < sVar1023),uVar610));
                    auVar335._10_5_ = (int5)((ulong)uVar358 >> 0x18);
                    auVar335._0_10_ = (unkuint10)uVar937 << 0x38;
                    uVar1029 = CONCAT62(auVar335._9_6_,
                                        CONCAT11((0 < sVar1020) * (sVar1020 < 0x100) * auVar1243[8]
                                                 - (0xff < sVar1020),cVar67));
                    auVar535._7_8_ = 0;
                    auVar535._0_7_ = (uint7)((ulong)uVar1029 >> 8);
                    Var536 = CONCAT81(SUB158(auVar535 << 0x40,7),
                                      (0 < sVar998) * (sVar998 < 0x100) * auVar1243[6] -
                                      (0xff < sVar998));
                    auVar716._9_6_ = 0;
                    auVar716._0_9_ = Var536;
                    auVar537._1_10_ = SUB1510(auVar716 << 0x30,5);
                    auVar537[0] = (0 < sVar994) * (sVar994 < 0x100) * auVar1243[4] -
                                  (0xff < sVar994);
                    auVar717._11_4_ = 0;
                    auVar717._0_11_ = auVar537;
                    auVar538._1_12_ = SUB1512(auVar717 << 0x20,3);
                    auVar538[0] = (0 < sVar940) * (sVar940 < 0x100) * auVar1243[2] -
                                  (0xff < sVar940);
                    sVar993 = sVar993 * sVar993;
                    uVar1198 = sVar932 * sVar932;
                    auVar725._2_2_ = uVar1198;
                    auVar725._0_2_ = sVar993;
                    sVar1190 = (ushort)(byte)((0 < sVar958) * (sVar958 < 0x100) * auVar1185[0] -
                                             (0xff < sVar958)) -
                               (ushort)(byte)((0 < sVar1195) * (sVar1195 < 0x100) * auVar1243[0] -
                                             (0xff < sVar1195));
                    sVar1193 = auVar531._0_2_ - auVar538._0_2_;
                    sVar1102 = auVar530._0_2_ - auVar537._0_2_;
                    sVar1019 = (short)Var362 - (short)Var536;
                    sVar932 = (short)((ulong)uVar903 >> 8) - (short)((ulong)uVar1029 >> 8);
                    sVar1197 = (short)((ulong)uVar356 >> 0x18) - (short)((ulong)uVar358 >> 0x18);
                    sVar1201 = (short)((ulong)uVar359 >> 0x28) - (short)((ulong)uVar1000 >> 0x28);
                    sVar1204 = (auVar176._13_2_ >> 8) - (auVar178._13_2_ >> 8);
                    auVar860._6_8_ = 0;
                    auVar179[0xe] = cVar7;
                    auVar179._0_14_ = auVar860 << 0x38;
                    uVar356 = CONCAT26(auVar179._13_2_,
                                       CONCAT15((uVar1085 != 0) * (uVar1085 < 0x100) * cVar5 -
                                                (0xff < uVar1085),uVar759));
                    auVar808._4_8_ = 0;
                    auVar808._0_4_ = uVar892;
                    auVar251._12_3_ = (int3)((ulong)uVar356 >> 0x28);
                    auVar251._0_12_ = auVar808 << 0x38;
                    uVar1029 = CONCAT44(auVar251._11_4_,
                                        CONCAT13((uVar1079 != 0) * (uVar1079 < 0x100) * cVar4 -
                                                 (0xff < uVar1079),uVar588));
                    auVar336._10_5_ = (int5)((ulong)uVar1029 >> 0x18);
                    auVar336._0_10_ = (unkuint10)uVar897 << 0x38;
                    uVar903 = CONCAT62(auVar336._9_6_,
                                       CONCAT11((uVar1075 != 0) * (uVar1075 < 0x100) * cVar6 -
                                                (0xff < uVar1075),cVar7));
                    auVar539._7_8_ = 0;
                    auVar539._0_7_ = (uint7)((ulong)uVar903 >> 8);
                    Var362 = CONCAT81(SUB158(auVar539 << 0x40,7),
                                      (uVar1046 != 0) * (uVar1046 < 0x100) * cVar8 -
                                      (0xff < uVar1046));
                    auVar718._9_6_ = 0;
                    auVar718._0_9_ = Var362;
                    auVar540._1_10_ = SUB1510(auVar718 << 0x30,5);
                    auVar540[0] = (uVar1142 != 0) * (uVar1142 < 0x100) * cVar9 - (0xff < uVar1142);
                    auVar719._11_4_ = 0;
                    auVar719._0_11_ = auVar540;
                    auVar541._1_12_ = SUB1512(auVar719 << 0x20,3);
                    auVar541[0] = (uVar1136 != 0) * (uVar1136 < 0x100) * cVar874 - (0xff < uVar1136)
                    ;
                    sVar1019 = sVar1019 * sVar1019;
                    uVar1224 = sVar932 * sVar932;
                    auVar724._2_2_ = uVar1224;
                    auVar724._0_2_ = sVar1019;
                    sVar1138 = (ushort)bVar35 - (ushort)bVar62;
                    sVar1141 = (ushort)bVar18 - (ushort)bVar79;
                    sVar994 = (ushort)bVar39 - (ushort)bVar80;
                    sVar995 = (ushort)bVar38 - (ushort)bVar81;
                    sVar996 = (ushort)bVar37 - (ushort)bVar82;
                    sVar1144 = (ushort)(byte)((uVar1191 != 0) * (uVar1191 < 0x100) * cVar20 -
                                             (0xff < uVar1191)) -
                               (ushort)(byte)((uVar1115 != 0) * (uVar1115 < 0x100) * cVar68 -
                                             (0xff < uVar1115));
                    sVar1147 = (ushort)(byte)((uVar1194 != 0) * (uVar1194 < 0x100) * cVar22 -
                                             (0xff < uVar1194)) -
                               (ushort)(byte)((uVar1177 != 0) * (uVar1177 < 0x100) * cVar66 -
                                             (0xff < uVar1177));
                    sVar1151 = (ushort)(byte)((uVar1199 != 0) * (uVar1199 < 0x100) * cVar24 -
                                             (0xff < uVar1199)) -
                               (ushort)(byte)((uVar1188 != 0) * (uVar1188 < 0x100) * cVar64 -
                                             (0xff < uVar1188));
                    sVar1167 = (ushort)(byte)((uVar1205 != 0) * (uVar1205 < 0x100) * bVar3 -
                                             (0xff < uVar1205)) -
                               (ushort)(byte)((uVar1101 != 0) * (uVar1101 < 0x100) * bVar53 -
                                             (0xff < uVar1101));
                    sVar1169 = auVar541._0_2_ - auVar534._0_2_;
                    sVar932 = auVar540._0_2_ - auVar533._0_2_;
                    sVar958 = (short)Var362 - (short)Var398;
                    sVar1216 = (short)((ulong)uVar903 >> 8) - (short)((ulong)uVar944 >> 8);
                    sVar1171 = (short)((ulong)uVar1029 >> 0x18) - (short)((ulong)uVar357 >> 0x18);
                    sVar1173 = (short)((ulong)uVar356 >> 0x28) - (short)((ulong)uVar360 >> 0x28);
                    sVar1175 = (auVar179._13_2_ >> 8) - (auVar177._13_2_ >> 8);
                    sVar958 = sVar958 * sVar958;
                    uVar1045 = sVar1216 * sVar1216;
                    auVar726._2_2_ = uVar1045;
                    auVar726._0_2_ = sVar958;
                    auVar861._6_8_ = 0;
                    auVar180[0xe] = cVar60;
                    auVar180._0_14_ = auVar861 << 0x38;
                    uVar357 = CONCAT26(auVar180._13_2_,
                                       CONCAT15((uVar1088 != 0) * (uVar1088 < 0x100) * cVar58 -
                                                (0xff < uVar1088),uVar770));
                    auVar809._4_8_ = 0;
                    auVar809._0_4_ = uVar878;
                    auVar252._12_3_ = (int3)((ulong)uVar357 >> 0x28);
                    auVar252._0_12_ = auVar809 << 0x38;
                    uVar1029 = CONCAT44(auVar252._11_4_,
                                        CONCAT13((uVar1083 != 0) * (uVar1083 < 0x100) * cVar61 -
                                                 (0xff < uVar1083),uVar611));
                    auVar337._10_5_ = (int5)((ulong)uVar1029 >> 0x18);
                    auVar337._0_10_ = (unkuint10)uVar939 << 0x38;
                    uVar903 = CONCAT62(auVar337._9_6_,
                                       CONCAT11((uVar1077 != 0) * (uVar1077 < 0x100) * cVar55 -
                                                (0xff < uVar1077),cVar60));
                    auVar542._7_8_ = 0;
                    auVar542._0_7_ = (uint7)((ulong)uVar903 >> 8);
                    Var362 = CONCAT81(SUB158(auVar542 << 0x40,7),
                                      (uVar1073 != 0) * (uVar1073 < 0x100) * cVar56 -
                                      (0xff < uVar1073));
                    auVar720._9_6_ = 0;
                    auVar720._0_9_ = Var362;
                    auVar543._1_10_ = SUB1510(auVar720 << 0x30,5);
                    auVar543[0] = (uVar1145 != 0) * (uVar1145 < 0x100) * cVar57 - (0xff < uVar1145);
                    auVar721._11_4_ = 0;
                    auVar721._0_11_ = auVar543;
                    auVar544._1_12_ = SUB1512(auVar721 << 0x20,3);
                    auVar544[0] = (uVar1139 != 0) * (uVar1139 < 0x100) * cVar59 - (0xff < uVar1139);
                    auVar862._6_8_ = 0;
                    auVar181[0xe] = cVar16;
                    auVar181._0_14_ = auVar862 << 0x38;
                    uVar358 = CONCAT26(auVar181._13_2_,
                                       CONCAT15((uVar1119 != 0) * (uVar1119 < 0x100) * cVar14 -
                                                (0xff < uVar1119),uVar765));
                    auVar810._4_8_ = 0;
                    auVar810._0_4_ = uVar884;
                    auVar253._12_3_ = (int3)((ulong)uVar358 >> 0x28);
                    auVar253._0_12_ = auVar810 << 0x38;
                    uVar356 = CONCAT44(auVar253._11_4_,
                                       CONCAT13((uVar1111 != 0) * (uVar1111 < 0x100) * cVar12 -
                                                (0xff < uVar1111),uVar606));
                    auVar338._10_5_ = (int5)((ulong)uVar356 >> 0x18);
                    auVar338._0_10_ = (unkuint10)uVar930 << 0x38;
                    uVar944 = CONCAT62(auVar338._9_6_,
                                       CONCAT11((uVar1107 != 0) * (uVar1107 < 0x100) * cVar15 -
                                                (0xff < uVar1107),cVar16));
                    auVar545._7_8_ = 0;
                    auVar545._0_7_ = (uint7)((ulong)uVar944 >> 8);
                    Var398 = CONCAT81(SUB158(auVar545 << 0x40,7),
                                      (uVar1103 != 0) * (uVar1103 < 0x100) * cVar17 -
                                      (0xff < uVar1103));
                    auVar722._9_6_ = 0;
                    auVar722._0_9_ = Var398;
                    auVar546._1_10_ = SUB1510(auVar722 << 0x30,5);
                    auVar546[0] = (uVar1100 != 0) * (uVar1100 < 0x100) * cVar11 - (0xff < uVar1100);
                    auVar723._11_4_ = 0;
                    auVar723._0_11_ = auVar546;
                    auVar547._1_12_ = SUB1512(auVar723 << 0x20,3);
                    auVar547[0] = (uVar1098 != 0) * (uVar1098 < 0x100) * cVar13 - (0xff < uVar1098);
                    sVar1110 = (ushort)(byte)((uVar1087 != 0) * (uVar1087 < 0x100) * bVar10 -
                                             (0xff < uVar1087)) -
                               (ushort)(byte)((uVar1122 != 0) * (uVar1122 < 0x100) * bVar54 -
                                             (0xff < uVar1122));
                    sVar1114 = auVar547._0_2_ - auVar544._0_2_;
                    sVar940 = auVar546._0_2_ - auVar543._0_2_;
                    sVar992 = (short)Var398 - (short)Var362;
                    sVar1216 = (short)((ulong)uVar944 >> 8) - (short)((ulong)uVar903 >> 8);
                    sVar1118 = (short)((ulong)uVar356 >> 0x18) - (short)((ulong)uVar1029 >> 0x18);
                    sVar1121 = (short)((ulong)uVar358 >> 0x28) - (short)((ulong)uVar357 >> 0x28);
                    sVar1124 = (auVar181._13_2_ >> 8) - (auVar180._13_2_ >> 8);
                    sVar1154 = (ushort)bVar49 - (ushort)bVar88;
                    sVar1157 = (ushort)bVar52 - (ushort)bVar89;
                    sVar997 = (ushort)bVar51 - (ushort)bVar90;
                    sVar998 = (ushort)bVar50 - (ushort)bVar91;
                    sVar999 = (ushort)bVar48 - (ushort)bVar92;
                    sVar1174 = (ushort)(byte)((0 < sVar1137) * (sVar1137 < 0x100) * auVar1095[10] -
                                             (0xff < sVar1137)) -
                               (ushort)(byte)((0 < sVar1120) * (sVar1120 < 0x100) * auVar921[10] -
                                             (0xff < sVar1120));
                    sVar1179 = (ushort)(byte)((0 < sVar1146) * (sVar1146 < 0x100) * auVar1095[0xc] -
                                             (0xff < sVar1146)) -
                               (ushort)(byte)((0 < sVar1153) * (sVar1153 < 0x100) * auVar921[0xc] -
                                             (0xff < sVar1153));
                    sVar1176 = (ushort)(byte)((0 < sVar1158) * (sVar1158 < 0x100) * auVar1095[0xe] -
                                             (0xff < sVar1158)) -
                               (ushort)(byte)((0 < sVar1165) * (sVar1165 < 0x100) * auVar921[0xe] -
                                             (0xff < sVar1165));
                    sVar992 = sVar992 * sVar992;
                    uVar1142 = sVar1216 * sVar1216;
                    auVar729._2_2_ = uVar1142;
                    auVar729._0_2_ = sVar992;
                    sVar936 = sVar936 * sVar936;
                    uVar1087 = sVar938 * sVar938;
                    auVar728._2_2_ = uVar1087;
                    auVar728._0_2_ = sVar936;
                    sVar1214 = (ushort)bVar26 - (ushort)bVar70;
                    sVar1217 = (ushort)bVar43 - (ushort)bVar93;
                    sVar1216 = (ushort)bVar44 - (ushort)bVar94;
                    sVar1195 = (ushort)bVar45 - (ushort)bVar95;
                    sVar938 = (ushort)bVar47 - (ushort)bVar96;
                    sVar1219 = (ushort)(byte)((uVar1078 != 0) * (uVar1078 < 0x100) * cVar28 -
                                             (0xff < uVar1078)) -
                               (ushort)(byte)((uVar1082 != 0) * (uVar1082 < 0x100) * cVar76 -
                                             (0xff < uVar1082));
                    sVar1221 = (ushort)(byte)((uVar1084 != 0) * (uVar1084 < 0x100) * cVar30 -
                                             (0xff < uVar1084)) -
                               (ushort)(byte)((uVar1086 != 0) * (uVar1086 < 0x100) * cVar75 -
                                             (0xff < uVar1086));
                    sVar1106 = (ushort)(byte)((uVar959 != 0) * (uVar959 < 0x100) * cVar32 -
                                             (0xff < uVar959)) -
                               (ushort)(byte)((uVar960 != 0) * (uVar960 < 0x100) * cVar71 -
                                             (0xff < uVar960));
                    sVar998 = sVar998 * sVar998;
                    uVar1149 = sVar999 * sVar999;
                    auVar727._2_2_ = uVar1149;
                    auVar727._0_2_ = sVar998;
                    sVar995 = sVar995 * sVar995;
                    uVar1085 = sVar996 * sVar996;
                    auVar730._2_2_ = uVar1085;
                    auVar730._0_2_ = sVar995;
                    sVar1195 = sVar1195 * sVar1195;
                    uVar1202 = sVar938 * sVar938;
                    auVar731._2_2_ = uVar1202;
                    auVar731._0_2_ = sVar1195;
                    auVar724._4_8_ = 0;
                    auVar182._12_2_ = sVar1019;
                    auVar182._0_12_ = auVar724 << 0x30;
                    uVar903 = CONCAT44(auVar182._10_4_,CONCAT22(sVar1102 * sVar1102,sVar1019));
                    auVar548._6_8_ = 0;
                    auVar548._0_6_ = (uint6)((ulong)uVar903 >> 0x10);
                    auVar725._4_8_ = 0;
                    auVar183._12_2_ = sVar993;
                    auVar183._0_12_ = auVar725 << 0x30;
                    uVar944 = CONCAT44(auVar183._10_4_,CONCAT22(sVar961 * sVar961,sVar993));
                    auVar549._6_8_ = 0;
                    auVar549._0_6_ = (uint6)((ulong)uVar944 >> 0x10);
                    auVar726._4_8_ = 0;
                    auVar184._12_2_ = sVar958;
                    auVar184._0_12_ = auVar726 << 0x30;
                    uVar1029 = CONCAT44(auVar184._10_4_,CONCAT22(sVar932 * sVar932,sVar958));
                    auVar550._6_8_ = 0;
                    auVar550._0_6_ = (uint6)((ulong)uVar1029 >> 0x10);
                    auVar727._4_8_ = 0;
                    auVar185._12_2_ = sVar998;
                    auVar185._0_12_ = auVar727 << 0x30;
                    uVar356 = CONCAT44(auVar185._10_4_,CONCAT22(sVar997 * sVar997,sVar998));
                    auVar551._6_8_ = 0;
                    auVar551._0_6_ = (uint6)((ulong)uVar356 >> 0x10);
                    auVar728._4_8_ = 0;
                    auVar186._12_2_ = sVar936;
                    auVar186._0_12_ = auVar728 << 0x30;
                    uVar357 = CONCAT44(auVar186._10_4_,CONCAT22(sVar934 * sVar934,sVar936));
                    auVar552._6_8_ = 0;
                    auVar552._0_6_ = (uint6)((ulong)uVar357 >> 0x10);
                    auVar729._4_8_ = 0;
                    auVar187._12_2_ = sVar992;
                    auVar187._0_12_ = auVar729 << 0x30;
                    uVar358 = CONCAT44(auVar187._10_4_,CONCAT22(sVar940 * sVar940,sVar992));
                    auVar553._6_8_ = 0;
                    auVar553._0_6_ = (uint6)((ulong)uVar358 >> 0x10);
                    auVar730._4_8_ = 0;
                    auVar188._12_2_ = sVar995;
                    auVar188._0_12_ = auVar730 << 0x30;
                    uVar359 = CONCAT44(auVar188._10_4_,CONCAT22(sVar994 * sVar994,sVar995));
                    auVar554._6_8_ = 0;
                    auVar554._0_6_ = (uint6)((ulong)uVar359 >> 0x10);
                    iVar1148 = (int)((ulong)uVar944 >> 0x10) + (int)((ulong)uVar903 >> 0x10) +
                               (int)((ulong)uVar1029 >> 0x10) + (int)((ulong)uVar358 >> 0x10);
                    auVar731._4_8_ = 0;
                    auVar189._12_2_ = sVar1195;
                    auVar189._0_12_ = auVar731 << 0x30;
                    uVar903 = CONCAT44(auVar189._10_4_,CONCAT22(sVar1216 * sVar1216,sVar1195));
                    auVar555._6_8_ = 0;
                    auVar555._0_6_ = (uint6)((ulong)uVar903 >> 0x10);
                    iVar1044 = (int)((ulong)uVar357 >> 0x10) + (int)((ulong)uVar356 >> 0x10) +
                               (int)((ulong)uVar359 >> 0x10) + (int)((ulong)uVar903 >> 0x10);
                    local_398 = SUB81(__LC21,0);
                    bStack_397 = (byte)((ulong)__LC21 >> 8);
                    uStack_396 = (undefined6)((ulong)__LC21 >> 0x10);
                    uStack_390 = _UNK_0010eae8;
                    astc_mode0_or_18(0,pcVar1,(uastc_encode_results *)&local_f8,(uint *)&local_4b8,
                                     (bc7enc_compress_block_params *)&local_398,
                                     (uchar *)((long)&local_178 + 7));
                    puVar894 = (unpacked_uastc_block *)&local_2b8;
                    local_428[0] = (undefined4)local_88;
                    basist::unpack_uastc
                              ((uint)local_f8,local_f8._4_4_,(color32 *)local_428,
                               (astc_block_desc *)&uStack_f0,(color32 *)puVar894,false);
                    auVar921 = *(undefined1 (*) [16])pcVar1;
                    auVar1095 = *(undefined1 (*) [16])(pcVar1 + 0x30);
                    auVar920 = *(undefined1 (*) [16])(pcVar1 + 0x10) & __LC6;
                    auVar980 = *(undefined1 (*) [16])pcVar1 & __LC6;
                    auVar1244._8_8_ = local_290;
                    auVar1244._0_8_ = uStack_298;
                    sVar932 = auVar980._0_2_;
                    sVar958 = auVar980._2_2_;
                    bVar3 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[2] - (0xff < sVar958);
                    sVar958 = auVar980._4_2_;
                    sVar1216 = auVar980._6_2_;
                    cVar874 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar980[6] - (0xff < sVar1216);
                    uVar901 = CONCAT13(cVar874,CONCAT12((0 < sVar958) * (sVar958 < 0x100) *
                                                        auVar980[4] - (0xff < sVar958),
                                                        CONCAT11(bVar3,(0 < sVar932) *
                                                                       (sVar932 < 0x100) *
                                                                       auVar980[0] -
                                                                       (0xff < sVar932))));
                    sVar932 = auVar980._8_2_;
                    sVar958 = auVar980._10_2_;
                    cVar9 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[10] - (0xff < sVar958);
                    uVar902 = CONCAT15(cVar9,CONCAT14((0 < sVar932) * (sVar932 < 0x100) *
                                                      auVar980[8] - (0xff < sVar932),uVar901));
                    sVar932 = auVar980._12_2_;
                    sVar958 = auVar980._14_2_;
                    cVar8 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[0xe] - (0xff < sVar958);
                    uVar903 = CONCAT17(cVar8,CONCAT16((0 < sVar932) * (sVar932 < 0x100) *
                                                      auVar980[0xc] - (0xff < sVar932),uVar902));
                    sVar932 = auVar920._0_2_;
                    sVar958 = auVar920._2_2_;
                    cVar6 = (0 < sVar958) * (sVar958 < 0x100) * auVar920[2] - (0xff < sVar958);
                    auVar1160._0_10_ =
                         CONCAT19(cVar6,CONCAT18((0 < sVar932) * (sVar932 < 0x100) * auVar920[0] -
                                                 (0xff < sVar932),uVar903));
                    sVar932 = auVar920._4_2_;
                    auVar1160[10] =
                         (0 < sVar932) * (sVar932 < 0x100) * auVar920[4] - (0xff < sVar932);
                    sVar932 = auVar920._6_2_;
                    cVar4 = (0 < sVar932) * (sVar932 < 0x100) * auVar920[6] - (0xff < sVar932);
                    auVar1160[0xb] = cVar4;
                    sVar932 = auVar920._8_2_;
                    auVar1161[0xc] =
                         (0 < sVar932) * (sVar932 < 0x100) * auVar920[8] - (0xff < sVar932);
                    auVar1161._0_12_ = auVar1160;
                    sVar932 = auVar920._10_2_;
                    cVar5 = (0 < sVar932) * (sVar932 < 0x100) * auVar920[10] - (0xff < sVar932);
                    auVar1161[0xd] = cVar5;
                    sVar932 = auVar920._12_2_;
                    auVar1162[0xe] =
                         (0 < sVar932) * (sVar932 < 0x100) * auVar920[0xc] - (0xff < sVar932);
                    auVar1162._0_14_ = auVar1161;
                    sVar932 = auVar920._14_2_;
                    cVar7 = (0 < sVar932) * (sVar932 < 0x100) * auVar920[0xe] - (0xff < sVar932);
                    auVar1162[0xf] = cVar7;
                    auVar920 = *(undefined1 (*) [16])(pcVar1 + 0x10);
                    auVar980 = *(undefined1 (*) [16])(pcVar1 + 0x30) & __LC6;
                    uVar1072 = auVar921._0_2_ >> 8;
                    uVar1074 = auVar921._2_2_ >> 8;
                    uVar1076 = auVar921._4_2_ >> 8;
                    uVar1078 = auVar921._6_2_ >> 8;
                    uVar1082 = auVar921._8_2_ >> 8;
                    uVar1084 = auVar921._10_2_ >> 8;
                    uVar1086 = auVar921._12_2_ >> 8;
                    uVar959 = auVar921._14_2_ >> 8;
                    uVar960 = auVar1095._0_2_ >> 8;
                    uVar1098 = auVar1095._2_2_ >> 8;
                    uVar1100 = auVar1095._4_2_ >> 8;
                    uVar1103 = auVar1095._6_2_ >> 8;
                    uVar1107 = auVar1095._8_2_ >> 8;
                    uVar1111 = auVar1095._10_2_ >> 8;
                    uVar1115 = auVar1095._12_2_ >> 8;
                    uVar1119 = auVar1095._14_2_ >> 8;
                    auVar1013 = __LC6 & auVar1162;
                    uVar897 = auVar920._0_2_ >> 8;
                    uVar929 = auVar920._2_2_ >> 8;
                    uVar930 = auVar920._4_2_ >> 8;
                    uVar931 = auVar920._6_2_ >> 8;
                    uVar933 = auVar920._8_2_ >> 8;
                    uVar935 = auVar920._10_2_ >> 8;
                    uVar937 = auVar920._12_2_ >> 8;
                    uVar939 = auVar920._14_2_ >> 8;
                    uVar1104 = (ushort)bVar3;
                    uVar1108 = (ushort)((uint)uVar901 >> 0x18);
                    uVar1112 = (ushort)((uint6)uVar902 >> 0x28);
                    uVar1116 = (ushort)((ulong)uVar903 >> 0x38);
                    uVar1152 = (ushort)((unkuint10)auVar1160._0_10_ >> 0x48);
                    uVar1155 = auVar1160._10_2_ >> 8;
                    uVar1222 = auVar1161._12_2_ >> 8;
                    uVar1177 = auVar1162._14_2_ >> 8;
                    auVar1244 = auVar1244 & __LC6;
                    bVar10 = (uVar1074 != 0) * (uVar1074 < 0x100) * auVar921[3] - (0xff < uVar1074);
                    cVar13 = (uVar1078 != 0) * (uVar1078 < 0x100) * auVar921[7] - (0xff < uVar1078);
                    uVar901 = CONCAT13(cVar13,CONCAT12((uVar1076 != 0) * (uVar1076 < 0x100) *
                                                       auVar921[5] - (0xff < uVar1076),
                                                       CONCAT11(bVar10,(uVar1072 != 0) *
                                                                       (uVar1072 < 0x100) *
                                                                       auVar921[1] -
                                                                       (0xff < uVar1072))));
                    cVar11 = (uVar1084 != 0) * (uVar1084 < 0x100) * auVar921[0xb] -
                             (0xff < uVar1084);
                    uVar902 = CONCAT15(cVar11,CONCAT14((uVar1082 != 0) * (uVar1082 < 0x100) *
                                                       auVar921[9] - (0xff < uVar1082),uVar901));
                    cVar17 = (uVar959 != 0) * (uVar959 < 0x100) * auVar921[0xf] - (0xff < uVar959);
                    uVar903 = CONCAT17(cVar17,CONCAT16((uVar1086 != 0) * (uVar1086 < 0x100) *
                                                       auVar921[0xd] - (0xff < uVar1086),uVar902));
                    cVar15 = (uVar929 != 0) * (uVar929 < 0x100) * auVar920[3] - (0xff < uVar929);
                    auVar1091._0_10_ =
                         CONCAT19(cVar15,CONCAT18((uVar897 != 0) * (uVar897 < 0x100) * auVar920[1] -
                                                  (0xff < uVar897),uVar903));
                    auVar1091[10] =
                         (uVar930 != 0) * (uVar930 < 0x100) * auVar920[5] - (0xff < uVar930);
                    cVar12 = (uVar931 != 0) * (uVar931 < 0x100) * auVar920[7] - (0xff < uVar931);
                    auVar1091[0xb] = cVar12;
                    auVar1094[0xc] =
                         (uVar933 != 0) * (uVar933 < 0x100) * auVar920[9] - (0xff < uVar933);
                    auVar1094._0_12_ = auVar1091;
                    cVar14 = (uVar935 != 0) * (uVar935 < 0x100) * auVar920[0xb] - (0xff < uVar935);
                    auVar1094[0xd] = cVar14;
                    auVar1097[0xe] =
                         (uVar937 != 0) * (uVar937 < 0x100) * auVar920[0xd] - (0xff < uVar937);
                    auVar1097._0_14_ = auVar1094;
                    cVar16 = (uVar939 != 0) * (uVar939 < 0x100) * auVar920[0xf] - (0xff < uVar939);
                    auVar1097[0xf] = cVar16;
                    uVar1191 = (ushort)uStack_288 >> 8;
                    uVar1199 = (ushort)((ulong)uStack_288 >> 0x10) >> 8;
                    uVar1075 = (ushort)((ulong)uStack_288 >> 0x20) >> 8;
                    uVar1077 = (ushort)((ulong)uStack_288 >> 0x38);
                    uVar1079 = (ushort)local_280 >> 8;
                    uVar1083 = (ushort)((ulong)local_280 >> 0x10) >> 8;
                    uVar1088 = (ushort)((ulong)local_280 >> 0x20) >> 8;
                    uVar1099 = (ushort)((ulong)local_280 >> 0x38);
                    auVar920 = __LC6 & auVar1097;
                    uVar1205 = (ushort)bVar10;
                    uVar1122 = (ushort)((uint)uVar901 >> 0x18);
                    uVar1136 = (ushort)((uint6)uVar902 >> 0x28);
                    uVar1139 = (ushort)((ulong)uVar903 >> 0x38);
                    uVar1145 = (ushort)((unkuint10)auVar1091._0_10_ >> 0x48);
                    uVar1046 = auVar1091._10_2_ >> 8;
                    uVar1073 = auVar1094._12_2_ >> 8;
                    uVar1072 = auVar1097._14_2_ >> 8;
                    auVar921 = *(undefined1 (*) [16])(pcVar1 + 0x20) & __LC6;
                    sVar932 = auVar921._0_2_;
                    sVar958 = auVar921._2_2_;
                    bVar18 = (0 < sVar958) * (sVar958 < 0x100) * auVar921[2] - (0xff < sVar958);
                    sVar958 = auVar921._4_2_;
                    sVar1216 = auVar921._6_2_;
                    cVar21 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[6] - (0xff < sVar1216);
                    uVar901 = CONCAT13(cVar21,CONCAT12((0 < sVar958) * (sVar958 < 0x100) *
                                                       auVar921[4] - (0xff < sVar958),
                                                       CONCAT11(bVar18,(0 < sVar932) *
                                                                       (sVar932 < 0x100) *
                                                                       auVar921[0] -
                                                                       (0xff < sVar932))));
                    sVar932 = auVar921._8_2_;
                    sVar958 = auVar921._10_2_;
                    cVar19 = (0 < sVar958) * (sVar958 < 0x100) * auVar921[10] - (0xff < sVar958);
                    uVar902 = CONCAT15(cVar19,CONCAT14((0 < sVar932) * (sVar932 < 0x100) *
                                                       auVar921[8] - (0xff < sVar932),uVar901));
                    sVar932 = auVar921._12_2_;
                    sVar958 = auVar921._14_2_;
                    cVar25 = (0 < sVar958) * (sVar958 < 0x100) * auVar921[0xe] - (0xff < sVar958);
                    uVar903 = CONCAT17(cVar25,CONCAT16((0 < sVar932) * (sVar932 < 0x100) *
                                                       auVar921[0xc] - (0xff < sVar932),uVar902));
                    sVar932 = auVar980._0_2_;
                    sVar958 = auVar980._2_2_;
                    cVar23 = (0 < sVar958) * (sVar958 < 0x100) * auVar980[2] - (0xff < sVar958);
                    auVar969._0_10_ =
                         CONCAT19(cVar23,CONCAT18((0 < sVar932) * (sVar932 < 0x100) * auVar980[0] -
                                                  (0xff < sVar932),uVar903));
                    sVar932 = auVar980._4_2_;
                    auVar969[10] = (0 < sVar932) * (sVar932 < 0x100) * auVar980[4] -
                                   (0xff < sVar932);
                    sVar932 = auVar980._6_2_;
                    cVar20 = (0 < sVar932) * (sVar932 < 0x100) * auVar980[6] - (0xff < sVar932);
                    auVar969[0xb] = cVar20;
                    sVar932 = auVar980._8_2_;
                    auVar978[0xc] =
                         (0 < sVar932) * (sVar932 < 0x100) * auVar980[8] - (0xff < sVar932);
                    auVar978._0_12_ = auVar969;
                    sVar932 = auVar980._10_2_;
                    cVar22 = (0 < sVar932) * (sVar932 < 0x100) * auVar980[10] - (0xff < sVar932);
                    auVar978[0xd] = cVar22;
                    sVar932 = auVar980._12_2_;
                    auVar988[0xe] =
                         (0 < sVar932) * (sVar932 < 0x100) * auVar980[0xc] - (0xff < sVar932);
                    auVar988._0_14_ = auVar978;
                    sVar932 = auVar980._14_2_;
                    cVar24 = (0 < sVar932) * (sVar932 < 0x100) * auVar980[0xe] - (0xff < sVar932);
                    auVar988[0xf] = cVar24;
                    auVar921 = *(undefined1 (*) [16])(pcVar1 + 0x20);
                    uVar897 = auVar921._0_2_ >> 8;
                    uVar929 = auVar921._2_2_ >> 8;
                    uVar930 = auVar921._4_2_ >> 8;
                    uVar931 = auVar921._6_2_ >> 8;
                    uVar933 = auVar921._8_2_ >> 8;
                    uVar935 = auVar921._10_2_ >> 8;
                    uVar937 = auVar921._12_2_ >> 8;
                    uVar939 = auVar921._14_2_ >> 8;
                    bVar26 = (uVar929 != 0) * (uVar929 < 0x100) * auVar921[3] - (0xff < uVar929);
                    cVar29 = (uVar931 != 0) * (uVar931 < 0x100) * auVar921[7] - (0xff < uVar931);
                    uVar941 = CONCAT13(cVar29,CONCAT12((uVar930 != 0) * (uVar930 < 0x100) *
                                                       auVar921[5] - (0xff < uVar930),
                                                       CONCAT11(bVar26,(uVar897 != 0) *
                                                                       (uVar897 < 0x100) *
                                                                       auVar921[1] -
                                                                       (0xff < uVar897))));
                    cVar27 = (uVar935 != 0) * (uVar935 < 0x100) * auVar921[0xb] - (0xff < uVar935);
                    uVar942 = CONCAT15(cVar27,CONCAT14((uVar933 != 0) * (uVar933 < 0x100) *
                                                       auVar921[9] - (0xff < uVar933),uVar941));
                    cVar33 = (uVar939 != 0) * (uVar939 < 0x100) * auVar921[0xf] - (0xff < uVar939);
                    uVar944 = CONCAT17(cVar33,CONCAT16((uVar937 != 0) * (uVar937 < 0x100) *
                                                       auVar921[0xd] - (0xff < uVar937),uVar942));
                    cVar31 = (uVar1098 != 0) * (uVar1098 < 0x100) * auVar1095[3] - (0xff < uVar1098)
                    ;
                    auVar1033._0_10_ =
                         CONCAT19(cVar31,CONCAT18((uVar960 != 0) * (uVar960 < 0x100) * auVar1095[1]
                                                  - (0xff < uVar960),uVar944));
                    auVar1033[10] =
                         (uVar1100 != 0) * (uVar1100 < 0x100) * auVar1095[5] - (0xff < uVar1100);
                    cVar28 = (uVar1103 != 0) * (uVar1103 < 0x100) * auVar1095[7] - (0xff < uVar1103)
                    ;
                    auVar1033[0xb] = cVar28;
                    auVar1038[0xc] =
                         (uVar1107 != 0) * (uVar1107 < 0x100) * auVar1095[9] - (0xff < uVar1107);
                    auVar1038._0_12_ = auVar1033;
                    cVar30 = (uVar1111 != 0) * (uVar1111 < 0x100) * auVar1095[0xb] -
                             (0xff < uVar1111);
                    auVar1038[0xd] = cVar30;
                    auVar1042[0xe] =
                         (uVar1115 != 0) * (uVar1115 < 0x100) * auVar1095[0xd] - (0xff < uVar1115);
                    auVar1042._0_14_ = auVar1038;
                    cVar32 = (uVar1119 != 0) * (uVar1119 < 0x100) * auVar1095[0xf] -
                             (0xff < uVar1119);
                    auVar1042[0xf] = cVar32;
                    auVar1095 = __LC6 & auVar988;
                    uVar897 = (ushort)bVar18;
                    uVar929 = (ushort)((uint)uVar901 >> 0x18);
                    uVar930 = (ushort)((uint6)uVar902 >> 0x28);
                    uVar931 = (ushort)((ulong)uVar903 >> 0x38);
                    uVar933 = (ushort)((unkuint10)auVar969._0_10_ >> 0x48);
                    uVar1082 = auVar969._10_2_ >> 8;
                    uVar1086 = auVar978._12_2_ >> 8;
                    uVar960 = auVar988._14_2_ >> 8;
                    cVar7 = (uVar1177 != 0) * (uVar1177 < 0x100) * cVar7 - (0xff < uVar1177);
                    bVar18 = (uVar897 != 0) * (uVar897 < 0x100) * bVar18 - (0xff < uVar897);
                    uVar897 = CONCAT11(bVar18,cVar7);
                    bVar39 = (uVar929 != 0) * (uVar929 < 0x100) * cVar21 - (0xff < uVar929);
                    uVar588 = CONCAT12(bVar39,uVar897);
                    bVar38 = (uVar930 != 0) * (uVar930 < 0x100) * cVar19 - (0xff < uVar930);
                    uVar892 = CONCAT13(bVar38,uVar588);
                    bVar37 = (uVar931 != 0) * (uVar931 < 0x100) * cVar25 - (0xff < uVar931);
                    uVar759 = CONCAT14(bVar37,uVar892);
                    bVar35 = (uVar933 != 0) * (uVar933 < 0x100) * cVar23 - (0xff < uVar933);
                    auVar867[5] = bVar35;
                    auVar867._0_5_ = uVar759;
                    sVar932 = auVar1013._0_2_;
                    sVar934 = auVar1013._2_2_;
                    sVar961 = auVar1013._4_2_;
                    sVar995 = auVar1013._6_2_;
                    sVar999 = auVar1013._8_2_;
                    sVar1021 = auVar1013._10_2_;
                    sVar1024 = auVar1013._12_2_;
                    sVar958 = auVar1013._14_2_;
                    cVar21 = (0 < sVar958) * (sVar958 < 0x100) * auVar1013[0xe] - (0xff < sVar958);
                    sVar958 = auVar1095._0_2_;
                    bVar34 = (0 < sVar958) * (sVar958 < 0x100) * auVar1095[0] - (0xff < sVar958);
                    uVar929 = CONCAT11(bVar34,cVar21);
                    sVar958 = auVar1095._2_2_;
                    bVar36 = (0 < sVar958) * (sVar958 < 0x100) * auVar1095[2] - (0xff < sVar958);
                    uVar589 = CONCAT12(bVar36,uVar929);
                    sVar958 = auVar1095._4_2_;
                    bVar40 = (0 < sVar958) * (sVar958 < 0x100) * auVar1095[4] - (0xff < sVar958);
                    uVar891 = CONCAT13(bVar40,uVar589);
                    sVar958 = auVar1095._6_2_;
                    bVar41 = (0 < sVar958) * (sVar958 < 0x100) * auVar1095[6] - (0xff < sVar958);
                    uVar760 = CONCAT14(bVar41,uVar891);
                    sVar958 = auVar1095._8_2_;
                    bVar42 = (0 < sVar958) * (sVar958 < 0x100) * auVar1095[8] - (0xff < sVar958);
                    auVar864[5] = bVar42;
                    auVar864._0_5_ = uVar760;
                    sVar1123 = auVar1095._10_2_;
                    sVar1143 = auVar1095._12_2_;
                    sVar1156 = auVar1095._14_2_;
                    auVar1134._8_8_ = uStack_2b0;
                    auVar1134._0_8_ = local_2b8;
                    auVar921 = __LC6 & auVar1042;
                    uVar931 = (ushort)bVar26;
                    uVar933 = (ushort)((uint)uVar941 >> 0x18);
                    uVar935 = (ushort)((uint6)uVar942 >> 0x28);
                    uVar937 = (ushort)((ulong)uVar944 >> 0x38);
                    uVar939 = (ushort)((unkuint10)auVar1033._0_10_ >> 0x48);
                    uVar1119 = auVar1033._10_2_ >> 8;
                    uVar1188 = auVar1038._12_2_ >> 8;
                    uVar1194 = auVar1042._14_2_ >> 8;
                    sVar958 = auVar920._0_2_;
                    sVar936 = auVar920._2_2_;
                    sVar992 = auVar920._4_2_;
                    sVar996 = auVar920._6_2_;
                    sVar1102 = auVar920._8_2_;
                    sVar1105 = auVar920._10_2_;
                    sVar1109 = auVar920._12_2_;
                    sVar1216 = auVar920._14_2_;
                    cVar19 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar920[0xe] - (0xff < sVar1216)
                    ;
                    sVar1216 = auVar921._0_2_;
                    bVar43 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[0] - (0xff < sVar1216);
                    uVar930 = CONCAT11(bVar43,cVar19);
                    sVar1216 = auVar921._2_2_;
                    bVar44 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[2] - (0xff < sVar1216);
                    uVar606 = CONCAT12(bVar44,uVar930);
                    sVar1216 = auVar921._4_2_;
                    bVar45 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[4] - (0xff < sVar1216);
                    uVar884 = CONCAT13(bVar45,uVar606);
                    sVar1216 = auVar921._6_2_;
                    bVar47 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[6] - (0xff < sVar1216);
                    uVar765 = CONCAT14(bVar47,uVar884);
                    sVar1216 = auVar921._8_2_;
                    bVar49 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar921[8] - (0xff < sVar1216);
                    auVar866[5] = bVar49;
                    auVar866._0_5_ = uVar765;
                    sVar1137 = auVar921._10_2_;
                    sVar1146 = auVar921._12_2_;
                    sVar1158 = auVar921._14_2_;
                    auVar1134 = auVar1134 & __LC6;
                    cVar16 = (uVar1072 != 0) * (uVar1072 < 0x100) * cVar16 - (0xff < uVar1072);
                    bVar50 = (uVar931 != 0) * (uVar931 < 0x100) * bVar26 - (0xff < uVar931);
                    uVar931 = CONCAT11(bVar50,cVar16);
                    bVar48 = (uVar933 != 0) * (uVar933 < 0x100) * cVar29 - (0xff < uVar933);
                    uVar607 = CONCAT12(bVar48,uVar931);
                    bVar26 = (uVar935 != 0) * (uVar935 < 0x100) * cVar27 - (0xff < uVar935);
                    uVar880 = CONCAT13(bVar26,uVar607);
                    bVar52 = (uVar937 != 0) * (uVar937 < 0x100) * cVar33 - (0xff < uVar937);
                    uVar766 = CONCAT14(bVar52,uVar880);
                    bVar51 = (uVar939 != 0) * (uVar939 < 0x100) * cVar31 - (0xff < uVar939);
                    auVar870[5] = bVar51;
                    auVar870._0_5_ = uVar766;
                    auVar989._8_8_ = uStack_2a0;
                    auVar989._0_8_ = uStack_2a8;
                    auVar989 = auVar989 & __LC6;
                    sVar1216 = auVar1134._0_2_;
                    sVar1195 = auVar1134._2_2_;
                    bVar53 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1134[2] - (0xff < sVar1195);
                    sVar1195 = auVar1134._4_2_;
                    sVar938 = auVar1134._6_2_;
                    cVar25 = (0 < sVar938) * (sVar938 < 0x100) * auVar1134[6] - (0xff < sVar938);
                    uVar1027 = CONCAT13(cVar25,CONCAT12((0 < sVar1195) * (sVar1195 < 0x100) *
                                                        auVar1134[4] - (0xff < sVar1195),
                                                        CONCAT11(bVar53,(0 < sVar1216) *
                                                                        (sVar1216 < 0x100) *
                                                                        auVar1134[0] -
                                                                        (0xff < sVar1216))));
                    sVar1216 = auVar1134._8_2_;
                    sVar1195 = auVar1134._10_2_;
                    cVar23 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1134[10] - (0xff < sVar1195)
                    ;
                    uVar1028 = CONCAT15(cVar23,CONCAT14((0 < sVar1216) * (sVar1216 < 0x100) *
                                                        auVar1134[8] - (0xff < sVar1216),uVar1027));
                    sVar1216 = auVar1134._12_2_;
                    sVar1195 = auVar1134._14_2_;
                    cVar29 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1134[0xe] -
                             (0xff < sVar1195);
                    uVar1029 = CONCAT17(cVar29,CONCAT16((0 < sVar1216) * (sVar1216 < 0x100) *
                                                        auVar1134[0xc] - (0xff < sVar1216),uVar1028)
                                       );
                    sVar1216 = auVar989._0_2_;
                    sVar1195 = auVar989._2_2_;
                    cVar27 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar989[2] - (0xff < sVar1195);
                    auVar1128._0_10_ =
                         CONCAT19(cVar27,CONCAT18((0 < sVar1216) * (sVar1216 < 0x100) * auVar989[0]
                                                  - (0xff < sVar1216),uVar1029));
                    sVar1216 = auVar989._4_2_;
                    auVar1128[10] =
                         (0 < sVar1216) * (sVar1216 < 0x100) * auVar989[4] - (0xff < sVar1216);
                    sVar1216 = auVar989._6_2_;
                    cVar33 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar989[6] - (0xff < sVar1216);
                    auVar1128[0xb] = cVar33;
                    sVar1216 = auVar989._8_2_;
                    auVar1131[0xc] =
                         (0 < sVar1216) * (sVar1216 < 0x100) * auVar989[8] - (0xff < sVar1216);
                    auVar1131._0_12_ = auVar1128;
                    sVar1216 = auVar989._10_2_;
                    cVar31 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar989[10] - (0xff < sVar1216);
                    auVar1131[0xd] = cVar31;
                    sVar1216 = auVar989._12_2_;
                    auVar1135[0xe] =
                         (0 < sVar1216) * (sVar1216 < 0x100) * auVar989[0xc] - (0xff < sVar1216);
                    auVar1135._0_14_ = auVar1131;
                    sVar1216 = auVar989._14_2_;
                    cVar46 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar989[0xe] - (0xff < sVar1216)
                    ;
                    auVar1135[0xf] = cVar46;
                    uVar1084 = (ushort)local_2b8 >> 8;
                    uVar959 = (ushort)(local_2b8 >> 0x10) >> 8;
                    uVar1098 = (ushort)(local_2b8 >> 0x20) >> 8;
                    uVar1100 = (ushort)(local_2b8 >> 0x38);
                    uVar1103 = (ushort)uStack_2b0 >> 8;
                    uVar1107 = (ushort)((ulong)uStack_2b0 >> 0x10) >> 8;
                    uVar1111 = (ushort)((ulong)uStack_2b0 >> 0x20) >> 8;
                    uVar1115 = (ushort)((ulong)uStack_2b0 >> 0x38);
                    uVar933 = (ushort)uStack_2a8 >> 8;
                    uVar935 = (ushort)((ulong)uStack_2a8 >> 0x10) >> 8;
                    uVar937 = (ushort)((ulong)uStack_2a8 >> 0x20) >> 8;
                    uVar939 = (ushort)((ulong)uStack_2a8 >> 0x38);
                    uVar1072 = (ushort)uStack_2a0 >> 8;
                    uVar1074 = (ushort)((ulong)uStack_2a0 >> 0x10) >> 8;
                    uVar1076 = (ushort)((ulong)uStack_2a0 >> 0x20) >> 8;
                    uVar1078 = (ushort)((ulong)uStack_2a0 >> 0x38);
                    bVar54 = (uVar959 != 0) * (uVar959 < 0x100) * (char)(local_2b8 >> 0x18) -
                             (0xff < uVar959);
                    cVar59 = (uVar1100 != 0) * (uVar1100 < 0x100) * (char)(local_2b8 >> 0x38) -
                             (0xff < uVar1100);
                    uVar941 = CONCAT13(cVar59,CONCAT12((uVar1098 != 0) * (uVar1098 < 0x100) *
                                                       (char)(local_2b8 >> 0x28) - (0xff < uVar1098)
                                                       ,CONCAT11(bVar54,(uVar1084 != 0) *
                                                                        (uVar1084 < 0x100) *
                                                                        (char)(local_2b8 >> 8) -
                                                                        (0xff < uVar1084))));
                    cVar57 = (uVar1107 != 0) * (uVar1107 < 0x100) *
                             (char)((ulong)uStack_2b0 >> 0x18) - (0xff < uVar1107);
                    uVar942 = CONCAT15(cVar57,CONCAT14((uVar1103 != 0) * (uVar1103 < 0x100) *
                                                       (char)((ulong)uStack_2b0 >> 8) -
                                                       (0xff < uVar1103),uVar941));
                    cVar56 = (uVar1115 != 0) * (uVar1115 < 0x100) *
                             (char)((ulong)uStack_2b0 >> 0x38) - (0xff < uVar1115);
                    uVar944 = CONCAT17(cVar56,CONCAT16((uVar1111 != 0) * (uVar1111 < 0x100) *
                                                       (char)((ulong)uStack_2b0 >> 0x28) -
                                                       (0xff < uVar1111),uVar942));
                    cVar55 = (uVar935 != 0) * (uVar935 < 0x100) * (char)((ulong)uStack_2a8 >> 0x18)
                             - (0xff < uVar935);
                    auVar1034._0_10_ =
                         CONCAT19(cVar55,CONCAT18((uVar933 != 0) * (uVar933 < 0x100) *
                                                  (char)((ulong)uStack_2a8 >> 8) - (0xff < uVar933),
                                                  uVar944));
                    auVar1034[10] =
                         (uVar937 != 0) * (uVar937 < 0x100) * (char)((ulong)uStack_2a8 >> 0x28) -
                         (0xff < uVar937);
                    cVar61 = (uVar939 != 0) * (uVar939 < 0x100) * (char)((ulong)uStack_2a8 >> 0x38)
                             - (0xff < uVar939);
                    auVar1034[0xb] = cVar61;
                    auVar1039[0xc] =
                         (uVar1072 != 0) * (uVar1072 < 0x100) * (char)((ulong)uStack_2a0 >> 8) -
                         (0xff < uVar1072);
                    auVar1039._0_12_ = auVar1034;
                    cVar58 = (uVar1074 != 0) * (uVar1074 < 0x100) *
                             (char)((ulong)uStack_2a0 >> 0x18) - (0xff < uVar1074);
                    auVar1039[0xd] = cVar58;
                    auVar1043[0xe] =
                         (uVar1076 != 0) * (uVar1076 < 0x100) * (char)((ulong)uStack_2a0 >> 0x28) -
                         (0xff < uVar1076);
                    auVar1043._0_14_ = auVar1039;
                    cVar60 = (uVar1078 != 0) * (uVar1078 < 0x100) *
                             (char)((ulong)uStack_2a0 >> 0x38) - (0xff < uVar1078);
                    auVar1043[0xf] = cVar60;
                    auVar990._8_8_ = local_280;
                    auVar990._0_8_ = uStack_288;
                    auVar990 = auVar990 & __LC6;
                    sVar1216 = auVar1244._0_2_;
                    sVar1195 = auVar1244._2_2_;
                    bVar62 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1244[2] - (0xff < sVar1195);
                    sVar1195 = auVar1244._4_2_;
                    sVar938 = auVar1244._6_2_;
                    cVar69 = (0 < sVar938) * (sVar938 < 0x100) * auVar1244[6] - (0xff < sVar938);
                    uVar901 = CONCAT13(cVar69,CONCAT12((0 < sVar1195) * (sVar1195 < 0x100) *
                                                       auVar1244[4] - (0xff < sVar1195),
                                                       CONCAT11(bVar62,(0 < sVar1216) *
                                                                       (sVar1216 < 0x100) *
                                                                       auVar1244[0] -
                                                                       (0xff < sVar1216))));
                    sVar1216 = auVar1244._8_2_;
                    sVar1195 = auVar1244._10_2_;
                    cVar67 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1244[10] - (0xff < sVar1195)
                    ;
                    uVar902 = CONCAT15(cVar67,CONCAT14((0 < sVar1216) * (sVar1216 < 0x100) *
                                                       auVar1244[8] - (0xff < sVar1216),uVar901));
                    sVar1216 = auVar1244._12_2_;
                    sVar1195 = auVar1244._14_2_;
                    cVar65 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1244[0xe] -
                             (0xff < sVar1195);
                    uVar903 = CONCAT17(cVar65,CONCAT16((0 < sVar1216) * (sVar1216 < 0x100) *
                                                       auVar1244[0xc] - (0xff < sVar1216),uVar902));
                    sVar1216 = auVar990._0_2_;
                    sVar1195 = auVar990._2_2_;
                    cVar63 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar990[2] - (0xff < sVar1195);
                    auVar1241._0_10_ =
                         CONCAT19(cVar63,CONCAT18((0 < sVar1216) * (sVar1216 < 0x100) * auVar990[0]
                                                  - (0xff < sVar1216),uVar903));
                    sVar1216 = auVar990._4_2_;
                    auVar1241[10] =
                         (0 < sVar1216) * (sVar1216 < 0x100) * auVar990[4] - (0xff < sVar1216);
                    sVar1216 = auVar990._6_2_;
                    cVar68 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar990[6] - (0xff < sVar1216);
                    auVar1241[0xb] = cVar68;
                    sVar1216 = auVar990._8_2_;
                    auVar1242[0xc] =
                         (0 < sVar1216) * (sVar1216 < 0x100) * auVar990[8] - (0xff < sVar1216);
                    auVar1242._0_12_ = auVar1241;
                    sVar1216 = auVar990._10_2_;
                    cVar66 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar990[10] - (0xff < sVar1216);
                    auVar1242[0xd] = cVar66;
                    sVar1216 = auVar990._12_2_;
                    auVar1245[0xe] =
                         (0 < sVar1216) * (sVar1216 < 0x100) * auVar990[0xc] - (0xff < sVar1216);
                    auVar1245._0_14_ = auVar1242;
                    sVar1216 = auVar990._14_2_;
                    cVar64 = (0 < sVar1216) * (sVar1216 < 0x100) * auVar990[0xe] - (0xff < sVar1216)
                    ;
                    auVar1245[0xf] = cVar64;
                    auVar1185 = __LC6 & auVar1245;
                    uVar1084 = (ushort)bVar62;
                    uVar959 = (ushort)((uint)uVar901 >> 0x18);
                    uVar1098 = (ushort)((uint6)uVar902 >> 0x28);
                    uVar1100 = (ushort)((ulong)uVar903 >> 0x38);
                    uVar1103 = (ushort)((unkuint10)auVar1241._0_10_ >> 0x48);
                    uVar1229 = auVar1241._10_2_ >> 8;
                    uVar1231 = auVar1242._12_2_ >> 8;
                    uVar1233 = auVar1245._14_2_ >> 8;
                    uVar933 = (ushort)uStack_298 >> 8;
                    uVar935 = (ushort)((ulong)uStack_298 >> 0x10) >> 8;
                    uVar937 = (ushort)((ulong)uStack_298 >> 0x20) >> 8;
                    uVar939 = (ushort)((ulong)uStack_298 >> 0x38);
                    uVar1072 = (ushort)local_290 >> 8;
                    uVar1074 = (ushort)((ulong)local_290 >> 0x10) >> 8;
                    uVar1076 = (ushort)((ulong)local_290 >> 0x20) >> 8;
                    uVar1078 = (ushort)((ulong)local_290 >> 0x38);
                    bVar70 = (uVar935 != 0) * (uVar935 < 0x100) * (char)((ulong)uStack_298 >> 0x18)
                             - (0xff < uVar935);
                    cVar77 = (uVar939 != 0) * (uVar939 < 0x100) * (char)((ulong)uStack_298 >> 0x38)
                             - (0xff < uVar939);
                    uVar901 = CONCAT13(cVar77,CONCAT12((uVar937 != 0) * (uVar937 < 0x100) *
                                                       (char)((ulong)uStack_298 >> 0x28) -
                                                       (0xff < uVar937),
                                                       CONCAT11(bVar70,(uVar933 != 0) *
                                                                       (uVar933 < 0x100) *
                                                                       (char)((ulong)uStack_298 >> 8
                                                                             ) - (0xff < uVar933))))
                    ;
                    cVar73 = (uVar1074 != 0) * (uVar1074 < 0x100) * (char)((ulong)local_290 >> 0x18)
                             - (0xff < uVar1074);
                    uVar902 = CONCAT15(cVar73,CONCAT14((uVar1072 != 0) * (uVar1072 < 0x100) *
                                                       (char)((ulong)local_290 >> 8) -
                                                       (0xff < uVar1072),uVar901));
                    cVar72 = (uVar1078 != 0) * (uVar1078 < 0x100) * (char)((ulong)local_290 >> 0x38)
                             - (0xff < uVar1078);
                    uVar903 = CONCAT17(cVar72,CONCAT16((uVar1076 != 0) * (uVar1076 < 0x100) *
                                                       (char)((ulong)local_290 >> 0x28) -
                                                       (0xff < uVar1076),uVar902));
                    cVar74 = (uVar1199 != 0) * (uVar1199 < 0x100) *
                             (char)((ulong)uStack_288 >> 0x18) - (0xff < uVar1199);
                    auVar970._0_10_ =
                         CONCAT19(cVar74,CONCAT18((uVar1191 != 0) * (uVar1191 < 0x100) *
                                                  (char)((ulong)uStack_288 >> 8) - (0xff < uVar1191)
                                                  ,uVar903));
                    auVar970[10] = (uVar1075 != 0) * (uVar1075 < 0x100) *
                                   (char)((ulong)uStack_288 >> 0x28) - (0xff < uVar1075);
                    cVar76 = (uVar1077 != 0) * (uVar1077 < 0x100) *
                             (char)((ulong)uStack_288 >> 0x38) - (0xff < uVar1077);
                    auVar970[0xb] = cVar76;
                    auVar979[0xc] =
                         (uVar1079 != 0) * (uVar1079 < 0x100) * (char)((ulong)local_280 >> 8) -
                         (0xff < uVar1079);
                    auVar979._0_12_ = auVar970;
                    cVar75 = (uVar1083 != 0) * (uVar1083 < 0x100) * (char)((ulong)local_280 >> 0x18)
                             - (0xff < uVar1083);
                    auVar979[0xd] = cVar75;
                    auVar991[0xe] =
                         (uVar1088 != 0) * (uVar1088 < 0x100) * (char)((ulong)local_280 >> 0x28) -
                         (0xff < uVar1088);
                    auVar991._0_14_ = auVar979;
                    cVar71 = (uVar1099 != 0) * (uVar1099 < 0x100) * (char)((ulong)local_280 >> 0x38)
                             - (0xff < uVar1099);
                    auVar991[0xf] = cVar71;
                    auVar980 = __LC6 & auVar1135;
                    uVar1075 = (ushort)bVar53;
                    uVar1077 = (ushort)((uint)uVar1027 >> 0x18);
                    uVar1079 = (ushort)((uint6)uVar1028 >> 0x28);
                    uVar1083 = (ushort)((ulong)uVar1029 >> 0x38);
                    uVar1088 = (ushort)((unkuint10)auVar1128._0_10_ >> 0x48);
                    uVar1099 = auVar1128._10_2_ >> 8;
                    uVar1101 = auVar1131._12_2_ >> 8;
                    uVar935 = auVar1135._14_2_ >> 8;
                    sVar1216 = auVar980._0_2_;
                    sVar938 = auVar980._2_2_;
                    sVar993 = auVar980._4_2_;
                    sVar997 = auVar980._6_2_;
                    sVar1019 = auVar980._8_2_;
                    sVar1022 = auVar980._10_2_;
                    sVar1113 = auVar980._12_2_;
                    sVar1195 = auVar980._14_2_;
                    cVar78 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar980[0xe] - (0xff < sVar1195)
                    ;
                    sVar1195 = auVar1185._0_2_;
                    bVar79 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1185[0] - (0xff < sVar1195);
                    uVar933 = CONCAT11(bVar79,cVar78);
                    sVar1195 = auVar1185._2_2_;
                    bVar80 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1185[2] - (0xff < sVar1195);
                    uVar608 = CONCAT12(bVar80,uVar933);
                    sVar1195 = auVar1185._4_2_;
                    bVar81 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1185[4] - (0xff < sVar1195);
                    uVar877 = CONCAT13(bVar81,uVar608);
                    sVar1195 = auVar1185._6_2_;
                    bVar82 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1185[6] - (0xff < sVar1195);
                    uVar767 = CONCAT14(bVar82,uVar877);
                    sVar1195 = auVar1185._8_2_;
                    bVar83 = (0 < sVar1195) * (sVar1195 < 0x100) * auVar1185[8] - (0xff < sVar1195);
                    auVar863[5] = bVar83;
                    auVar863._0_5_ = uVar767;
                    sVar1140 = auVar1185._10_2_;
                    sVar1150 = auVar1185._12_2_;
                    sVar1163 = auVar1185._14_2_;
                    cVar46 = (uVar935 != 0) * (uVar935 < 0x100) * cVar46 - (0xff < uVar935);
                    bVar62 = (uVar1084 != 0) * (uVar1084 < 0x100) * bVar62 - (0xff < uVar1084);
                    uVar935 = CONCAT11(bVar62,cVar46);
                    bVar85 = (uVar959 != 0) * (uVar959 < 0x100) * cVar69 - (0xff < uVar959);
                    uVar609 = CONCAT12(bVar85,uVar935);
                    bVar87 = (uVar1098 != 0) * (uVar1098 < 0x100) * cVar67 - (0xff < uVar1098);
                    uVar887 = CONCAT13(bVar87,uVar609);
                    bVar84 = (uVar1100 != 0) * (uVar1100 < 0x100) * cVar65 - (0xff < uVar1100);
                    uVar768 = CONCAT14(bVar84,uVar887);
                    bVar86 = (uVar1103 != 0) * (uVar1103 < 0x100) * cVar63 - (0xff < uVar1103);
                    auVar868[5] = bVar86;
                    auVar868._0_5_ = uVar768;
                    auVar1243 = __LC6 & auVar991;
                    auVar1063 = __LC6 & auVar1043;
                    uVar939 = (ushort)bVar70;
                    uVar1072 = (ushort)((uint)uVar901 >> 0x18);
                    uVar1074 = (ushort)((uint6)uVar902 >> 0x28);
                    uVar1076 = (ushort)((ulong)uVar903 >> 0x38);
                    uVar1078 = (ushort)((unkuint10)auVar970._0_10_ >> 0x48);
                    uVar1084 = auVar970._10_2_ >> 8;
                    uVar959 = auVar979._12_2_ >> 8;
                    uVar1098 = auVar991._14_2_ >> 8;
                    uVar1100 = (ushort)bVar54;
                    uVar1103 = (ushort)((uint)uVar941 >> 0x18);
                    uVar1107 = (ushort)((uint6)uVar942 >> 0x28);
                    uVar1111 = (ushort)((ulong)uVar944 >> 0x38);
                    uVar1115 = (ushort)((unkuint10)auVar1034._0_10_ >> 0x48);
                    uVar1177 = auVar1034._10_2_ >> 8;
                    uVar1191 = auVar1039._12_2_ >> 8;
                    uVar1199 = auVar1043._14_2_ >> 8;
                    sVar1195 = auVar1063._0_2_;
                    sVar940 = auVar1063._2_2_;
                    sVar994 = auVar1063._4_2_;
                    sVar998 = auVar1063._6_2_;
                    sVar1020 = auVar1063._8_2_;
                    sVar1023 = auVar1063._10_2_;
                    sVar1117 = auVar1063._12_2_;
                    sVar1120 = auVar1063._14_2_;
                    cVar69 = (0 < sVar1120) * (sVar1120 < 0x100) * auVar1063[0xe] -
                             (0xff < sVar1120);
                    sVar1120 = auVar1243._0_2_;
                    bVar88 = (0 < sVar1120) * (sVar1120 < 0x100) * auVar1243[0] - (0xff < sVar1120);
                    uVar937 = CONCAT11(bVar88,cVar69);
                    sVar1120 = auVar1243._2_2_;
                    bVar89 = (0 < sVar1120) * (sVar1120 < 0x100) * auVar1243[2] - (0xff < sVar1120);
                    uVar610 = CONCAT12(bVar89,uVar937);
                    sVar1120 = auVar1243._4_2_;
                    bVar90 = (0 < sVar1120) * (sVar1120 < 0x100) * auVar1243[4] - (0xff < sVar1120);
                    uVar881 = CONCAT13(bVar90,uVar610);
                    sVar1120 = auVar1243._6_2_;
                    bVar91 = (0 < sVar1120) * (sVar1120 < 0x100) * auVar1243[6] - (0xff < sVar1120);
                    uVar769 = CONCAT14(bVar91,uVar881);
                    sVar1120 = auVar1243._8_2_;
                    bVar92 = (0 < sVar1120) * (sVar1120 < 0x100) * auVar1243[8] - (0xff < sVar1120);
                    auVar865[5] = bVar92;
                    auVar865._0_5_ = uVar769;
                    sVar1120 = auVar1243._10_2_;
                    sVar1153 = auVar1243._12_2_;
                    sVar1165 = auVar1243._14_2_;
                    cVar60 = (uVar1199 != 0) * (uVar1199 < 0x100) * cVar60 - (0xff < uVar1199);
                    bVar70 = (uVar939 != 0) * (uVar939 < 0x100) * bVar70 - (0xff < uVar939);
                    uVar939 = CONCAT11(bVar70,cVar60);
                    bVar93 = (uVar1072 != 0) * (uVar1072 < 0x100) * cVar77 - (0xff < uVar1072);
                    uVar611 = CONCAT12(bVar93,uVar939);
                    bVar94 = (uVar1074 != 0) * (uVar1074 < 0x100) * cVar73 - (0xff < uVar1074);
                    uVar878 = CONCAT13(bVar94,uVar611);
                    bVar95 = (uVar1076 != 0) * (uVar1076 < 0x100) * cVar72 - (0xff < uVar1076);
                    uVar770 = CONCAT14(bVar95,uVar878);
                    bVar96 = (uVar1078 != 0) * (uVar1078 < 0x100) * cVar74 - (0xff < uVar1078);
                    auVar869[5] = bVar96;
                    auVar869._0_5_ = uVar770;
                    auVar863._6_8_ = 0;
                    auVar190[0xe] = cVar78;
                    auVar190._0_14_ = auVar863 << 0x38;
                    uVar357 = CONCAT26(auVar190._13_2_,
                                       CONCAT15((0 < sVar1113) * (sVar1113 < 0x100) * auVar980[0xc]
                                                - (0xff < sVar1113),uVar767));
                    auVar811._4_8_ = 0;
                    auVar811._0_4_ = uVar877;
                    auVar254._12_3_ = (int3)((ulong)uVar357 >> 0x28);
                    auVar254._0_12_ = auVar811 << 0x38;
                    uVar1029 = CONCAT44(auVar254._11_4_,
                                        CONCAT13((0 < sVar1022) * (sVar1022 < 0x100) * auVar980[10]
                                                 - (0xff < sVar1022),uVar608));
                    auVar339._10_5_ = (int5)((ulong)uVar1029 >> 0x18);
                    auVar339._0_10_ = (unkuint10)uVar933 << 0x38;
                    uVar903 = CONCAT62(auVar339._9_6_,
                                       CONCAT11((0 < sVar1019) * (sVar1019 < 0x100) * auVar980[8] -
                                                (0xff < sVar1019),cVar78));
                    auVar556._7_8_ = 0;
                    auVar556._0_7_ = (uint7)((ulong)uVar903 >> 8);
                    Var362 = CONCAT81(SUB158(auVar556 << 0x40,7),
                                      (0 < sVar997) * (sVar997 < 0x100) * auVar980[6] -
                                      (0xff < sVar997));
                    auVar732._9_6_ = 0;
                    auVar732._0_9_ = Var362;
                    auVar557._1_10_ = SUB1510(auVar732 << 0x30,5);
                    auVar557[0] = (0 < sVar993) * (sVar993 < 0x100) * auVar980[4] - (0xff < sVar993)
                    ;
                    auVar733._11_4_ = 0;
                    auVar733._0_11_ = auVar557;
                    auVar558._1_12_ = SUB1512(auVar733 << 0x20,3);
                    auVar558[0] = (0 < sVar938) * (sVar938 < 0x100) * auVar980[2] - (0xff < sVar938)
                    ;
                    auVar864._6_8_ = 0;
                    auVar191[0xe] = cVar21;
                    auVar191._0_14_ = auVar864 << 0x38;
                    uVar358 = CONCAT26(auVar191._13_2_,
                                       CONCAT15((0 < sVar1024) * (sVar1024 < 0x100) * auVar1013[0xc]
                                                - (0xff < sVar1024),uVar760));
                    auVar812._4_8_ = 0;
                    auVar812._0_4_ = uVar891;
                    auVar255._12_3_ = (int3)((ulong)uVar358 >> 0x28);
                    auVar255._0_12_ = auVar812 << 0x38;
                    uVar356 = CONCAT44(auVar255._11_4_,
                                       CONCAT13((0 < sVar1021) * (sVar1021 < 0x100) * auVar1013[10]
                                                - (0xff < sVar1021),uVar589));
                    auVar340._10_5_ = (int5)((ulong)uVar356 >> 0x18);
                    auVar340._0_10_ = (unkuint10)uVar929 << 0x38;
                    uVar944 = CONCAT62(auVar340._9_6_,
                                       CONCAT11((0 < sVar999) * (sVar999 < 0x100) * auVar1013[8] -
                                                (0xff < sVar999),cVar21));
                    auVar559._7_8_ = 0;
                    auVar559._0_7_ = (uint7)((ulong)uVar944 >> 8);
                    Var398 = CONCAT81(SUB158(auVar559 << 0x40,7),
                                      (0 < sVar995) * (sVar995 < 0x100) * auVar1013[6] -
                                      (0xff < sVar995));
                    auVar734._9_6_ = 0;
                    auVar734._0_9_ = Var398;
                    auVar560._1_10_ = SUB1510(auVar734 << 0x30,5);
                    auVar560[0] = (0 < sVar961) * (sVar961 < 0x100) * auVar1013[4] -
                                  (0xff < sVar961);
                    auVar735._11_4_ = 0;
                    auVar735._0_11_ = auVar560;
                    auVar561._1_12_ = SUB1512(auVar735 << 0x20,3);
                    auVar561[0] = (0 < sVar934) * (sVar934 < 0x100) * auVar1013[2] -
                                  (0xff < sVar934);
                    sVar1216 = (ushort)(byte)((0 < sVar932) * (sVar932 < 0x100) * auVar1013[0] -
                                             (0xff < sVar932)) -
                               (ushort)(byte)((0 < sVar1216) * (sVar1216 < 0x100) * auVar980[0] -
                                             (0xff < sVar1216));
                    sVar934 = auVar561._0_2_ - auVar558._0_2_;
                    sVar938 = auVar560._0_2_ - auVar557._0_2_;
                    sVar961 = (short)Var398 - (short)Var362;
                    sVar993 = (short)((ulong)uVar944 >> 8) - (short)((ulong)uVar903 >> 8);
                    sVar995 = (short)((ulong)uVar356 >> 0x18) - (short)((ulong)uVar1029 >> 0x18);
                    sVar997 = (short)((ulong)uVar358 >> 0x28) - (short)((ulong)uVar357 >> 0x28);
                    sVar999 = (auVar191._13_2_ >> 8) - (auVar190._13_2_ >> 8);
                    sVar1225 = (ushort)bVar34 - (ushort)bVar79;
                    sVar1230 = (ushort)bVar36 - (ushort)bVar80;
                    sVar1232 = (ushort)bVar40 - (ushort)bVar81;
                    sVar932 = (ushort)bVar41 - (ushort)bVar82;
                    sVar1235 = (ushort)bVar42 - (ushort)bVar83;
                    sVar1237 = (ushort)(byte)((0 < sVar1123) * (sVar1123 < 0x100) * auVar1095[10] -
                                             (0xff < sVar1123)) -
                               (ushort)(byte)((0 < sVar1140) * (sVar1140 < 0x100) * auVar1185[10] -
                                             (0xff < sVar1140));
                    sVar1239 = (ushort)(byte)((0 < sVar1143) * (sVar1143 < 0x100) * auVar1095[0xc] -
                                             (0xff < sVar1143)) -
                               (ushort)(byte)((0 < sVar1150) * (sVar1150 < 0x100) * auVar1185[0xc] -
                                             (0xff < sVar1150));
                    sVar1240 = (ushort)(byte)((0 < sVar1156) * (sVar1156 < 0x100) * auVar1095[0xe] -
                                             (0xff < sVar1156)) -
                               (ushort)(byte)((0 < sVar1163) * (sVar1163 < 0x100) * auVar1185[0xe] -
                                             (0xff < sVar1163));
                    auVar865._6_8_ = 0;
                    auVar192[0xe] = cVar69;
                    auVar192._0_14_ = auVar865 << 0x38;
                    uVar357 = CONCAT26(auVar192._13_2_,
                                       CONCAT15((0 < sVar1117) * (sVar1117 < 0x100) * auVar1063[0xc]
                                                - (0xff < sVar1117),uVar769));
                    auVar813._4_8_ = 0;
                    auVar813._0_4_ = uVar881;
                    auVar256._12_3_ = (int3)((ulong)uVar357 >> 0x28);
                    auVar256._0_12_ = auVar813 << 0x38;
                    uVar1029 = CONCAT44(auVar256._11_4_,
                                        CONCAT13((0 < sVar1023) * (sVar1023 < 0x100) * auVar1063[10]
                                                 - (0xff < sVar1023),uVar610));
                    auVar341._10_5_ = (int5)((ulong)uVar1029 >> 0x18);
                    auVar341._0_10_ = (unkuint10)uVar937 << 0x38;
                    uVar903 = CONCAT62(auVar341._9_6_,
                                       CONCAT11((0 < sVar1020) * (sVar1020 < 0x100) * auVar1063[8] -
                                                (0xff < sVar1020),cVar69));
                    auVar562._7_8_ = 0;
                    auVar562._0_7_ = (uint7)((ulong)uVar903 >> 8);
                    Var362 = CONCAT81(SUB158(auVar562 << 0x40,7),
                                      (0 < sVar998) * (sVar998 < 0x100) * auVar1063[6] -
                                      (0xff < sVar998));
                    auVar736._9_6_ = 0;
                    auVar736._0_9_ = Var362;
                    auVar563._1_10_ = SUB1510(auVar736 << 0x30,5);
                    auVar563[0] = (0 < sVar994) * (sVar994 < 0x100) * auVar1063[4] -
                                  (0xff < sVar994);
                    auVar737._11_4_ = 0;
                    auVar737._0_11_ = auVar563;
                    auVar564._1_12_ = SUB1512(auVar737 << 0x20,3);
                    auVar564[0] = (0 < sVar940) * (sVar940 < 0x100) * auVar1063[2] -
                                  (0xff < sVar940);
                    auVar866._6_8_ = 0;
                    auVar193[0xe] = cVar19;
                    auVar193._0_14_ = auVar866 << 0x38;
                    uVar358 = CONCAT26(auVar193._13_2_,
                                       CONCAT15((0 < sVar1109) * (sVar1109 < 0x100) * auVar920[0xc]
                                                - (0xff < sVar1109),uVar765));
                    auVar814._4_8_ = 0;
                    auVar814._0_4_ = uVar884;
                    auVar257._12_3_ = (int3)((ulong)uVar358 >> 0x28);
                    auVar257._0_12_ = auVar814 << 0x38;
                    uVar356 = CONCAT44(auVar257._11_4_,
                                       CONCAT13((0 < sVar1105) * (sVar1105 < 0x100) * auVar920[10] -
                                                (0xff < sVar1105),uVar606));
                    auVar342._10_5_ = (int5)((ulong)uVar356 >> 0x18);
                    auVar342._0_10_ = (unkuint10)uVar930 << 0x38;
                    uVar944 = CONCAT62(auVar342._9_6_,
                                       CONCAT11((0 < sVar1102) * (sVar1102 < 0x100) * auVar920[8] -
                                                (0xff < sVar1102),cVar19));
                    auVar565._7_8_ = 0;
                    auVar565._0_7_ = (uint7)((ulong)uVar944 >> 8);
                    Var398 = CONCAT81(SUB158(auVar565 << 0x40,7),
                                      (0 < sVar996) * (sVar996 < 0x100) * auVar920[6] -
                                      (0xff < sVar996));
                    auVar738._9_6_ = 0;
                    auVar738._0_9_ = Var398;
                    auVar566._1_10_ = SUB1510(auVar738 << 0x30,5);
                    auVar566[0] = (0 < sVar992) * (sVar992 < 0x100) * auVar920[4] - (0xff < sVar992)
                    ;
                    auVar739._11_4_ = 0;
                    auVar739._0_11_ = auVar566;
                    auVar567._1_12_ = SUB1512(auVar739 << 0x20,3);
                    auVar567[0] = (0 < sVar936) * (sVar936 < 0x100) * auVar920[2] - (0xff < sVar936)
                    ;
                    sVar1159 = (ushort)(byte)((0 < sVar958) * (sVar958 < 0x100) * auVar920[0] -
                                             (0xff < sVar958)) -
                               (ushort)(byte)((0 < sVar1195) * (sVar1195 < 0x100) * auVar1063[0] -
                                             (0xff < sVar1195));
                    sVar1164 = auVar567._0_2_ - auVar564._0_2_;
                    sVar1166 = auVar566._0_2_ - auVar563._0_2_;
                    sVar1168 = (short)Var398 - (short)Var362;
                    sVar958 = (short)((ulong)uVar944 >> 8) - (short)((ulong)uVar903 >> 8);
                    sVar1170 = (short)((ulong)uVar356 >> 0x18) - (short)((ulong)uVar1029 >> 0x18);
                    sVar1172 = (short)((ulong)uVar358 >> 0x28) - (short)((ulong)uVar357 >> 0x28);
                    sVar1207 = (auVar193._13_2_ >> 8) - (auVar192._13_2_ >> 8);
                    sVar1109 = (ushort)bVar43 - (ushort)bVar88;
                    sVar1113 = (ushort)bVar44 - (ushort)bVar89;
                    sVar1117 = (ushort)bVar45 - (ushort)bVar90;
                    sVar1123 = (ushort)bVar47 - (ushort)bVar91;
                    sVar1140 = (ushort)bVar49 - (ushort)bVar92;
                    sVar1120 = (ushort)(byte)((0 < sVar1137) * (sVar1137 < 0x100) * auVar921[10] -
                                             (0xff < sVar1137)) -
                               (ushort)(byte)((0 < sVar1120) * (sVar1120 < 0x100) * auVar1243[10] -
                                             (0xff < sVar1120));
                    sVar1137 = (ushort)(byte)((0 < sVar1146) * (sVar1146 < 0x100) * auVar921[0xc] -
                                             (0xff < sVar1146)) -
                               (ushort)(byte)((0 < sVar1153) * (sVar1153 < 0x100) * auVar1243[0xc] -
                                             (0xff < sVar1153));
                    sVar1143 = (ushort)(byte)((0 < sVar1158) * (sVar1158 < 0x100) * auVar921[0xe] -
                                             (0xff < sVar1158)) -
                               (ushort)(byte)((0 < sVar1165) * (sVar1165 < 0x100) * auVar1243[0xe] -
                                             (0xff < sVar1165));
                    auVar867._6_8_ = 0;
                    auVar194[0xe] = cVar7;
                    auVar194._0_14_ = auVar867 << 0x38;
                    uVar357 = CONCAT26(auVar194._13_2_,
                                       CONCAT15((uVar1222 != 0) * (uVar1222 < 0x100) * cVar5 -
                                                (0xff < uVar1222),uVar759));
                    auVar815._4_8_ = 0;
                    auVar815._0_4_ = uVar892;
                    auVar258._12_3_ = (int3)((ulong)uVar357 >> 0x28);
                    auVar258._0_12_ = auVar815 << 0x38;
                    uVar1029 = CONCAT44(auVar258._11_4_,
                                        CONCAT13((uVar1155 != 0) * (uVar1155 < 0x100) * cVar4 -
                                                 (0xff < uVar1155),uVar588));
                    auVar343._10_5_ = (int5)((ulong)uVar1029 >> 0x18);
                    auVar343._0_10_ = (unkuint10)uVar897 << 0x38;
                    uVar903 = CONCAT62(auVar343._9_6_,
                                       CONCAT11((uVar1152 != 0) * (uVar1152 < 0x100) * cVar6 -
                                                (0xff < uVar1152),cVar7));
                    auVar568._7_8_ = 0;
                    auVar568._0_7_ = (uint7)((ulong)uVar903 >> 8);
                    Var362 = CONCAT81(SUB158(auVar568 << 0x40,7),
                                      (uVar1116 != 0) * (uVar1116 < 0x100) * cVar8 -
                                      (0xff < uVar1116));
                    auVar740._9_6_ = 0;
                    auVar740._0_9_ = Var362;
                    auVar569._1_10_ = SUB1510(auVar740 << 0x30,5);
                    auVar569[0] = (uVar1112 != 0) * (uVar1112 < 0x100) * cVar9 - (0xff < uVar1112);
                    auVar741._11_4_ = 0;
                    auVar741._0_11_ = auVar569;
                    auVar570._1_12_ = SUB1512(auVar741 << 0x20,3);
                    auVar570[0] = (uVar1108 != 0) * (uVar1108 < 0x100) * cVar874 - (0xff < uVar1108)
                    ;
                    auVar868._6_8_ = 0;
                    auVar195[0xe] = cVar46;
                    auVar195._0_14_ = auVar868 << 0x38;
                    uVar358 = CONCAT26(auVar195._13_2_,
                                       CONCAT15((uVar1101 != 0) * (uVar1101 < 0x100) * cVar31 -
                                                (0xff < uVar1101),uVar768));
                    auVar816._4_8_ = 0;
                    auVar816._0_4_ = uVar887;
                    auVar259._12_3_ = (int3)((ulong)uVar358 >> 0x28);
                    auVar259._0_12_ = auVar816 << 0x38;
                    uVar356 = CONCAT44(auVar259._11_4_,
                                       CONCAT13((uVar1099 != 0) * (uVar1099 < 0x100) * cVar33 -
                                                (0xff < uVar1099),uVar609));
                    auVar344._10_5_ = (int5)((ulong)uVar356 >> 0x18);
                    auVar344._0_10_ = (unkuint10)uVar935 << 0x38;
                    uVar944 = CONCAT62(auVar344._9_6_,
                                       CONCAT11((uVar1088 != 0) * (uVar1088 < 0x100) * cVar27 -
                                                (0xff < uVar1088),cVar46));
                    auVar571._7_8_ = 0;
                    auVar571._0_7_ = (uint7)((ulong)uVar944 >> 8);
                    Var398 = CONCAT81(SUB158(auVar571 << 0x40,7),
                                      (uVar1083 != 0) * (uVar1083 < 0x100) * cVar29 -
                                      (0xff < uVar1083));
                    auVar742._9_6_ = 0;
                    auVar742._0_9_ = Var398;
                    auVar572._1_10_ = SUB1510(auVar742 << 0x30,5);
                    auVar572[0] = (uVar1079 != 0) * (uVar1079 < 0x100) * cVar23 - (0xff < uVar1079);
                    auVar743._11_4_ = 0;
                    auVar743._0_11_ = auVar572;
                    auVar573._1_12_ = SUB1512(auVar743 << 0x20,3);
                    auVar573[0] = (uVar1077 != 0) * (uVar1077 < 0x100) * cVar25 - (0xff < uVar1077);
                    sVar961 = sVar961 * sVar961;
                    uVar929 = sVar993 * sVar993;
                    auVar749._2_2_ = uVar929;
                    auVar749._0_2_ = sVar961;
                    sVar1168 = sVar1168 * sVar1168;
                    uVar1072 = sVar958 * sVar958;
                    auVar748._2_2_ = uVar1072;
                    auVar748._0_2_ = sVar1168;
                    sVar1146 = (ushort)(byte)((uVar1104 != 0) * (uVar1104 < 0x100) * bVar3 -
                                             (0xff < uVar1104)) -
                               (ushort)(byte)((uVar1075 != 0) * (uVar1075 < 0x100) * bVar53 -
                                             (0xff < uVar1075));
                    sVar1150 = auVar570._0_2_ - auVar573._0_2_;
                    sVar1153 = auVar569._0_2_ - auVar572._0_2_;
                    sVar1156 = (short)Var362 - (short)Var398;
                    sVar1195 = (short)((ulong)uVar903 >> 8) - (short)((ulong)uVar944 >> 8);
                    sVar1158 = (short)((ulong)uVar1029 >> 0x18) - (short)((ulong)uVar356 >> 0x18);
                    sVar1163 = (short)((ulong)uVar357 >> 0x28) - (short)((ulong)uVar358 >> 0x28);
                    sVar1165 = (auVar194._13_2_ >> 8) - (auVar195._13_2_ >> 8);
                    sVar1102 = (ushort)bVar18 - (ushort)bVar62;
                    sVar1019 = (ushort)bVar39 - (ushort)bVar85;
                    sVar1020 = (ushort)bVar38 - (ushort)bVar87;
                    sVar1021 = (ushort)bVar37 - (ushort)bVar84;
                    sVar1105 = (ushort)bVar35 - (ushort)bVar86;
                    sVar1022 = (ushort)(byte)((uVar1082 != 0) * (uVar1082 < 0x100) * cVar20 -
                                             (0xff < uVar1082)) -
                               (ushort)(byte)((uVar1229 != 0) * (uVar1229 < 0x100) * cVar68 -
                                             (0xff < uVar1229));
                    sVar1023 = (ushort)(byte)((uVar1086 != 0) * (uVar1086 < 0x100) * cVar22 -
                                             (0xff < uVar1086)) -
                               (ushort)(byte)((uVar1231 != 0) * (uVar1231 < 0x100) * cVar66 -
                                             (0xff < uVar1231));
                    sVar1024 = (ushort)(byte)((uVar960 != 0) * (uVar960 < 0x100) * cVar24 -
                                             (0xff < uVar960)) -
                               (ushort)(byte)((uVar1233 != 0) * (uVar1233 < 0x100) * cVar64 -
                                             (0xff < uVar1233));
                    auVar869._6_8_ = 0;
                    auVar196[0xe] = cVar60;
                    auVar196._0_14_ = auVar869 << 0x38;
                    uVar357 = CONCAT26(auVar196._13_2_,
                                       CONCAT15((uVar1191 != 0) * (uVar1191 < 0x100) * cVar58 -
                                                (0xff < uVar1191),uVar770));
                    auVar817._4_8_ = 0;
                    auVar817._0_4_ = uVar878;
                    auVar260._12_3_ = (int3)((ulong)uVar357 >> 0x28);
                    auVar260._0_12_ = auVar817 << 0x38;
                    uVar1029 = CONCAT44(auVar260._11_4_,
                                        CONCAT13((uVar1177 != 0) * (uVar1177 < 0x100) * cVar61 -
                                                 (0xff < uVar1177),uVar611));
                    auVar345._10_5_ = (int5)((ulong)uVar1029 >> 0x18);
                    auVar345._0_10_ = (unkuint10)uVar939 << 0x38;
                    uVar903 = CONCAT62(auVar345._9_6_,
                                       CONCAT11((uVar1115 != 0) * (uVar1115 < 0x100) * cVar55 -
                                                (0xff < uVar1115),cVar60));
                    auVar574._7_8_ = 0;
                    auVar574._0_7_ = (uint7)((ulong)uVar903 >> 8);
                    Var362 = CONCAT81(SUB158(auVar574 << 0x40,7),
                                      (uVar1111 != 0) * (uVar1111 < 0x100) * cVar56 -
                                      (0xff < uVar1111));
                    auVar744._9_6_ = 0;
                    auVar744._0_9_ = Var362;
                    auVar575._1_10_ = SUB1510(auVar744 << 0x30,5);
                    auVar575[0] = (uVar1107 != 0) * (uVar1107 < 0x100) * cVar57 - (0xff < uVar1107);
                    auVar745._11_4_ = 0;
                    auVar745._0_11_ = auVar575;
                    auVar576._1_12_ = SUB1512(auVar745 << 0x20,3);
                    auVar576[0] = (uVar1103 != 0) * (uVar1103 < 0x100) * cVar59 - (0xff < uVar1103);
                    auVar870._6_8_ = 0;
                    auVar197[0xe] = cVar16;
                    auVar197._0_14_ = auVar870 << 0x38;
                    uVar358 = CONCAT26(auVar197._13_2_,
                                       CONCAT15((uVar1073 != 0) * (uVar1073 < 0x100) * cVar14 -
                                                (0xff < uVar1073),uVar766));
                    auVar818._4_8_ = 0;
                    auVar818._0_4_ = uVar880;
                    auVar261._12_3_ = (int3)((ulong)uVar358 >> 0x28);
                    auVar261._0_12_ = auVar818 << 0x38;
                    uVar356 = CONCAT44(auVar261._11_4_,
                                       CONCAT13((uVar1046 != 0) * (uVar1046 < 0x100) * cVar12 -
                                                (0xff < uVar1046),uVar607));
                    auVar346._10_5_ = (int5)((ulong)uVar356 >> 0x18);
                    auVar346._0_10_ = (unkuint10)uVar931 << 0x38;
                    uVar944 = CONCAT62(auVar346._9_6_,
                                       CONCAT11((uVar1145 != 0) * (uVar1145 < 0x100) * cVar15 -
                                                (0xff < uVar1145),cVar16));
                    auVar577._7_8_ = 0;
                    auVar577._0_7_ = (uint7)((ulong)uVar944 >> 8);
                    Var398 = CONCAT81(SUB158(auVar577 << 0x40,7),
                                      (uVar1139 != 0) * (uVar1139 < 0x100) * cVar17 -
                                      (0xff < uVar1139));
                    auVar746._9_6_ = 0;
                    auVar746._0_9_ = Var398;
                    auVar578._1_10_ = SUB1510(auVar746 << 0x30,5);
                    auVar578[0] = (uVar1136 != 0) * (uVar1136 < 0x100) * cVar11 - (0xff < uVar1136);
                    auVar747._11_4_ = 0;
                    auVar747._0_11_ = auVar578;
                    auVar579._1_12_ = SUB1512(auVar747 << 0x20,3);
                    auVar579[0] = (uVar1122 != 0) * (uVar1122 < 0x100) * cVar13 - (0xff < uVar1122);
                    sVar1209 = (ushort)(byte)((uVar1205 != 0) * (uVar1205 < 0x100) * bVar10 -
                                             (0xff < uVar1205)) -
                               (ushort)(byte)((uVar1100 != 0) * (uVar1100 < 0x100) * bVar54 -
                                             (0xff < uVar1100));
                    sVar1211 = auVar579._0_2_ - auVar576._0_2_;
                    sVar1213 = auVar578._0_2_ - auVar575._0_2_;
                    sVar958 = (short)Var398 - (short)Var362;
                    sVar1215 = (short)((ulong)uVar944 >> 8) - (short)((ulong)uVar903 >> 8);
                    sVar1218 = (short)((ulong)uVar356 >> 0x18) - (short)((ulong)uVar1029 >> 0x18);
                    sVar1220 = (short)((ulong)uVar358 >> 0x28) - (short)((ulong)uVar357 >> 0x28);
                    sVar1223 = (auVar197._13_2_ >> 8) - (auVar196._13_2_ >> 8);
                    sVar1156 = sVar1156 * sVar1156;
                    uVar937 = sVar1195 * sVar1195;
                    auVar750._2_2_ = uVar937;
                    auVar750._0_2_ = sVar1156;
                    sVar1195 = (ushort)bVar50 - (ushort)bVar70;
                    sVar936 = (ushort)bVar48 - (ushort)bVar93;
                    sVar940 = (ushort)bVar26 - (ushort)bVar94;
                    sVar992 = (ushort)bVar52 - (ushort)bVar95;
                    sVar993 = (ushort)bVar51 - (ushort)bVar96;
                    sVar994 = (ushort)(byte)((uVar1119 != 0) * (uVar1119 < 0x100) * cVar28 -
                                            (0xff < uVar1119)) -
                              (ushort)(byte)((uVar1084 != 0) * (uVar1084 < 0x100) * cVar76 -
                                            (0xff < uVar1084));
                    sVar996 = (ushort)(byte)((uVar1188 != 0) * (uVar1188 < 0x100) * cVar30 -
                                            (0xff < uVar1188)) -
                              (ushort)(byte)((uVar959 != 0) * (uVar959 < 0x100) * cVar75 -
                                            (0xff < uVar959));
                    sVar998 = (ushort)(byte)((uVar1194 != 0) * (uVar1194 < 0x100) * cVar32 -
                                            (0xff < uVar1194)) -
                              (ushort)(byte)((uVar1098 != 0) * (uVar1098 < 0x100) * cVar71 -
                                            (0xff < uVar1098));
                    sVar958 = sVar958 * sVar958;
                    uVar930 = sVar1215 * sVar1215;
                    auVar754._2_2_ = uVar930;
                    auVar754._0_2_ = sVar958;
                    sVar932 = sVar932 * sVar932;
                    uVar897 = sVar1235 * sVar1235;
                    auVar752._2_2_ = uVar897;
                    auVar752._0_2_ = sVar932;
                    sVar1123 = sVar1123 * sVar1123;
                    uVar935 = sVar1140 * sVar1140;
                    auVar751._2_2_ = uVar935;
                    auVar751._0_2_ = sVar1123;
                    auVar748._4_8_ = 0;
                    auVar198._12_2_ = sVar1168;
                    auVar198._0_12_ = auVar748 << 0x30;
                    uVar903 = CONCAT44(auVar198._10_4_,CONCAT22(sVar1166 * sVar1166,sVar1168));
                    auVar580._6_8_ = 0;
                    auVar580._0_6_ = (uint6)((ulong)uVar903 >> 0x10);
                    auVar749._4_8_ = 0;
                    auVar199._12_2_ = sVar961;
                    auVar199._0_12_ = auVar749 << 0x30;
                    uVar944 = CONCAT44(auVar199._10_4_,CONCAT22(sVar938 * sVar938,sVar961));
                    auVar581._6_8_ = 0;
                    auVar581._0_6_ = (uint6)((ulong)uVar944 >> 0x10);
                    sVar1021 = sVar1021 * sVar1021;
                    uVar933 = sVar1105 * sVar1105;
                    auVar753._2_2_ = uVar933;
                    auVar753._0_2_ = sVar1021;
                    auVar750._4_8_ = 0;
                    auVar200._12_2_ = sVar1156;
                    auVar200._0_12_ = auVar750 << 0x30;
                    uVar1029 = CONCAT44(auVar200._10_4_,CONCAT22(sVar1153 * sVar1153,sVar1156));
                    auVar582._6_8_ = 0;
                    auVar582._0_6_ = (uint6)((ulong)uVar1029 >> 0x10);
                    sVar992 = sVar992 * sVar992;
                    uVar931 = sVar993 * sVar993;
                    auVar755._2_2_ = uVar931;
                    auVar755._0_2_ = sVar992;
                    auVar751._4_8_ = 0;
                    auVar201._12_2_ = sVar1123;
                    auVar201._0_12_ = auVar751 << 0x30;
                    uVar356 = CONCAT44(auVar201._10_4_,CONCAT22(sVar1117 * sVar1117,sVar1123));
                    auVar583._6_8_ = 0;
                    auVar583._0_6_ = (uint6)((ulong)uVar356 >> 0x10);
                    auVar752._4_8_ = 0;
                    auVar202._12_2_ = sVar932;
                    auVar202._0_12_ = auVar752 << 0x30;
                    uVar357 = CONCAT44(auVar202._10_4_,CONCAT22(sVar1232 * sVar1232,sVar932));
                    auVar584._6_8_ = 0;
                    auVar584._0_6_ = (uint6)((ulong)uVar357 >> 0x10);
                    auVar753._4_8_ = 0;
                    auVar203._12_2_ = sVar1021;
                    auVar203._0_12_ = auVar753 << 0x30;
                    uVar358 = CONCAT44(auVar203._10_4_,CONCAT22(sVar1020 * sVar1020,sVar1021));
                    auVar585._6_8_ = 0;
                    auVar585._0_6_ = (uint6)((ulong)uVar358 >> 0x10);
                    auVar754._4_8_ = 0;
                    auVar204._12_2_ = sVar958;
                    auVar204._0_12_ = auVar754 << 0x30;
                    uVar359 = CONCAT44(auVar204._10_4_,CONCAT22(sVar1213 * sVar1213,sVar958));
                    auVar586._6_8_ = 0;
                    auVar586._0_6_ = (uint6)((ulong)uVar359 >> 0x10);
                    iVar1081 = (int)((ulong)uVar944 >> 0x10) + (int)((ulong)uVar903 >> 0x10) +
                               (int)((ulong)uVar1029 >> 0x10) + (int)((ulong)uVar359 >> 0x10);
                    auVar755._4_8_ = 0;
                    auVar205._12_2_ = sVar992;
                    auVar205._0_12_ = auVar755 << 0x30;
                    uVar903 = CONCAT44(auVar205._10_4_,CONCAT22(sVar940 * sVar940,sVar992));
                    auVar587._6_8_ = 0;
                    auVar587._0_6_ = (uint6)((ulong)uVar903 >> 0x10);
                    iVar1080 = (int)((ulong)uVar357 >> 0x10) + (int)((ulong)uVar356 >> 0x10) +
                               (int)((ulong)uVar358 >> 0x10) + (int)((ulong)uVar903 >> 0x10);
                    if ((ulong)((uint)(ushort)(sVar1216 * sVar1216) +
                                (uint)(ushort)(sVar1159 * sVar1159) +
                                (uint)(ushort)(sVar1146 * sVar1146) +
                               (uint)(ushort)(sVar1209 * sVar1209)) +
                        CONCAT44(-(uint)(iVar1081 < 0),iVar1081) +
                        (ulong)((uint)uVar930 + (uint)uVar929 + (uint)uVar1072 + (uint)uVar937) +
                        (ulong)((uint)(ushort)(sVar1220 * sVar1220) +
                               (uint)(ushort)(sVar997 * sVar997) +
                               (uint)(ushort)(sVar1172 * sVar1172) +
                               (uint)(ushort)(sVar1163 * sVar1163)) +
                        (ulong)((uint)(ushort)(sVar1225 * sVar1225) +
                                (uint)(ushort)(sVar1109 * sVar1109) +
                                (uint)(ushort)(sVar1102 * sVar1102) +
                               (uint)(ushort)(sVar1195 * sVar1195)) +
                        CONCAT44(-(uint)(iVar1080 < 0),iVar1080) +
                        (ulong)((uint)uVar897 + (uint)uVar935 + (uint)uVar933 + (uint)uVar931) +
                        (ulong)((uint)(ushort)(sVar1239 * sVar1239) +
                                (uint)(ushort)(sVar1137 * sVar1137) +
                                (uint)(ushort)(sVar1023 * sVar1023) +
                               (uint)(ushort)(sVar996 * sVar996)) +
                        (ulong)(uint)((int)CONCAT82(SUB148(auVar581 << 0x40,6),sVar934 * sVar934) +
                                      (int)CONCAT82(SUB148(auVar580 << 0x40,6),sVar1164 * sVar1164)
                                      + (int)CONCAT82(SUB148(auVar582 << 0x40,6),sVar1150 * sVar1150
                                                     ) +
                                     (int)CONCAT82(SUB148(auVar586 << 0x40,6),sVar1211 * sVar1211))
                        + (ulong)((auVar199._10_4_ >> 0x10) + (auVar198._10_4_ >> 0x10) +
                                  (auVar200._10_4_ >> 0x10) + (auVar204._10_4_ >> 0x10)) +
                        (ulong)((uint)(ushort)(sVar1218 * sVar1218) +
                               (uint)(ushort)(sVar995 * sVar995) +
                               (uint)(ushort)(sVar1170 * sVar1170) +
                               (uint)(ushort)(sVar1158 * sVar1158)) +
                        (ulong)((uint)(ushort)(sVar1223 * sVar1223) +
                               (uint)(ushort)(sVar999 * sVar999) +
                               (uint)(ushort)(sVar1207 * sVar1207) +
                               (uint)(ushort)(sVar1165 * sVar1165)) +
                        (ulong)(uint)((int)CONCAT82(SUB148(auVar584 << 0x40,6),sVar1230 * sVar1230)
                                      + (int)CONCAT82(SUB148(auVar583 << 0x40,6),sVar1113 * sVar1113
                                                     ) +
                                      (int)CONCAT82(SUB148(auVar585 << 0x40,6),sVar1019 * sVar1019)
                                     + (int)CONCAT82(SUB148(auVar587 << 0x40,6),sVar936 * sVar936))
                        + (ulong)((auVar202._10_4_ >> 0x10) + (auVar201._10_4_ >> 0x10) +
                                  (auVar203._10_4_ >> 0x10) + (auVar205._10_4_ >> 0x10)) +
                        (ulong)((uint)(ushort)(sVar1237 * sVar1237) +
                                (uint)(ushort)(sVar1120 * sVar1120) +
                                (uint)(ushort)(sVar1022 * sVar1022) +
                               (uint)(ushort)(sVar994 * sVar994)) +
                        (ulong)((uint)(ushort)(sVar1240 * sVar1240) +
                                (uint)(ushort)(sVar1143 * sVar1143) +
                                (uint)(ushort)(sVar1024 * sVar1024) +
                               (uint)(ushort)(sVar998 * sVar998)) <
                        (ulong)((uint)(ushort)(sVar1203 * sVar1203) +
                                (uint)(ushort)(sVar1190 * sVar1190) +
                                (uint)(ushort)(sVar1167 * sVar1167) +
                               (uint)(ushort)(sVar1110 * sVar1110)) +
                        CONCAT44(-(uint)(iVar1148 < 0),iVar1148) +
                        (ulong)((uint)uVar1198 + (uint)uVar1224 + (uint)uVar1045 + (uint)uVar1142) +
                        (ulong)((uint)(ushort)(sVar1210 * sVar1210) +
                                (uint)(ushort)(sVar1201 * sVar1201) +
                                (uint)(ushort)(sVar1173 * sVar1173) +
                               (uint)(ushort)(sVar1121 * sVar1121)) +
                        (ulong)((uint)(ushort)(sVar1178 * sVar1178) +
                                (uint)(ushort)(sVar1154 * sVar1154) +
                                (uint)(ushort)(sVar1138 * sVar1138) +
                               (uint)(ushort)(sVar1214 * sVar1214)) +
                        CONCAT44(-(uint)(iVar1044 < 0),iVar1044) +
                        (ulong)((uint)uVar1087 + (uint)uVar1149 + (uint)uVar1085 + (uint)uVar1202) +
                        (ulong)((uint)(ushort)(sVar1196 * sVar1196) +
                                (uint)(ushort)(sVar1179 * sVar1179) +
                                (uint)(ushort)(sVar1147 * sVar1147) +
                               (uint)(ushort)(sVar1221 * sVar1221)) +
                        (ulong)(uint)((int)CONCAT82(SUB148(auVar549 << 0x40,6),sVar1206 * sVar1206)
                                      + (int)CONCAT82(SUB148(auVar548 << 0x40,6),sVar1193 * sVar1193
                                                     ) +
                                      (int)CONCAT82(SUB148(auVar550 << 0x40,6),sVar1169 * sVar1169)
                                     + (int)CONCAT82(SUB148(auVar553 << 0x40,6),sVar1114 * sVar1114)
                                     ) +
                        (ulong)((auVar183._10_4_ >> 0x10) + (auVar182._10_4_ >> 0x10) +
                                (auVar184._10_4_ >> 0x10) + (auVar187._10_4_ >> 0x10)) +
                        (ulong)((uint)(ushort)(sVar1208 * sVar1208) +
                                (uint)(ushort)(sVar1197 * sVar1197) +
                                (uint)(ushort)(sVar1171 * sVar1171) +
                               (uint)(ushort)(sVar1118 * sVar1118)) +
                        (ulong)((uint)(ushort)(sVar1212 * sVar1212) +
                                (uint)(ushort)(sVar1204 * sVar1204) +
                                (uint)(ushort)(sVar1175 * sVar1175) +
                               (uint)(ushort)(sVar1124 * sVar1124)) +
                        (ulong)(uint)((int)CONCAT82(SUB148(auVar552 << 0x40,6),sVar1189 * sVar1189)
                                      + (int)CONCAT82(SUB148(auVar551 << 0x40,6),sVar1157 * sVar1157
                                                     ) +
                                      (int)CONCAT82(SUB148(auVar554 << 0x40,6),sVar1141 * sVar1141)
                                     + (int)CONCAT82(SUB148(auVar555 << 0x40,6),sVar1217 * sVar1217)
                                     ) +
                        (ulong)((auVar186._10_4_ >> 0x10) + (auVar185._10_4_ >> 0x10) +
                                (auVar188._10_4_ >> 0x10) + (auVar189._10_4_ >> 0x10)) +
                        (ulong)((uint)(ushort)(sVar1192 * sVar1192) +
                                (uint)(ushort)(sVar1174 * sVar1174) +
                                (uint)(ushort)(sVar1144 * sVar1144) +
                               (uint)(ushort)(sVar1219 * sVar1219)) +
                        (ulong)((uint)(ushort)(sVar1200 * sVar1200) +
                                (uint)(ushort)(sVar1176 * sVar1176) +
                                (uint)(ushort)(sVar1151 * sVar1151) +
                               (uint)(ushort)(sVar1106 * sVar1106))) {
                      local_198 = uStack_f0;
                      uStack_190 = local_e8;
                      local_138 = uStack_90;
                      local_188 = uStack_e0;
                      uStack_180 = local_d8;
                      local_178 = uStack_d0;
                      uStack_170 = local_c8;
                      local_168 = uStack_c0;
                      uStack_160 = local_b8;
                      local_158 = uStack_b0;
                      uStack_150 = local_a8;
                      local_148._8_8_ = local_98;
                      local_148._0_8_ = uStack_a0;
                      *param_8 = *param_8 + 1;
                    }
                  }
                  uVar892 = (uint)puVar894;
                  local_68 = local_108;
                  local_f8 = local_198;
                  uStack_f0 = uStack_190;
                  local_e8 = local_188;
                  uStack_e0 = uStack_180;
                  local_d8 = local_178;
                  uStack_d0 = uStack_170;
                  local_c8 = local_168;
                  uStack_c0 = uStack_160;
                  local_b8 = local_158;
                  uStack_b0 = uStack_150;
                  local_a8 = local_148._0_8_;
                  uStack_a0 = local_148._8_8_;
                  local_98 = local_138;
                  uStack_90 = uStack_130;
                  local_88 = local_128;
                  uStack_80 = uStack_120;
                  local_78 = local_118;
                  uStack_70 = uStack_110;
                  cVar874 = basist::unpack_uastc((unpacked_uastc_block *)&local_f8,local_358,false);
                  if (cVar874 != '\0') {
                    local_240 = 0;
                    uStack_2b0 = local_f8;
                    uStack_2a8 = uStack_f0;
                    local_250 = local_98;
                    uStack_2a0 = local_e8;
                    uStack_298 = uStack_e0;
                    local_248 = (undefined4)local_88;
                    local_290 = local_d8;
                    uStack_288 = uStack_d0;
                    local_2b8 = uStack_90;
                    local_280 = local_c8;
                    uStack_278 = uStack_c0;
                    local_270 = local_b8;
                    uStack_268 = uStack_b0;
                    local_260 = local_a8;
                    uStack_258 = uStack_a0;
                    if ((param_6 & 0xc) == 0) {
                      uVar883 = (ulong)(param_6 & 0xf);
                      local_4ba = false;
                      uVar891 = *(uint *)(CSWTCH_457 + uVar883 * 4);
                      local_4b9 = false;
                      uVar884 = *(uint *)(CSWTCH_456 + uVar883 * 4);
                      if (*(char *)((long)&CSWTCH_455 + uVar883) != '\0') goto LAB_0010d66c;
                      local_5a8 = false;
                      local_5c8[0] = false;
                    }
                    else {
                      uVar891 = 0xffffffff;
                      uVar884 = 3;
LAB_0010d66c:
                      pcVar893 = local_358;
                      compute_bc1_hints(&local_4ba,&local_4b9,(uastc_encode_results *)&local_2b8,
                                        pcVar1,(color_rgba *)local_358);
                      uVar892 = (uint)pcVar893;
                      local_5c8[0] = local_4b9;
                      local_5a8 = local_4ba;
                    }
                    local_4ba = local_5a8;
                    local_4b9 = (bool)local_5c8[0];
                    if ((*(char *)((long)&basist::g_uastc_mode_has_alpha + (uStack_90 & 0xffffffff))
                         == '\0') || ((int)uStack_90 == 8)) {
                      local_398 = (color32)0x0;
                      bStack_397 = 0;
                      uStack_396 = 0;
                    }
                    else {
                      uVar883 = 0;
                      do {
                        local_58[uVar883] = local_358[(uVar883 & 0xffffffff) * 4 + 3];
                        uVar883 = uVar883 + 1;
                      } while (uVar883 != 0x10);
                      local_4b8 = 0;
                      local_4b0 = 0;
                      uastc_pack_eac_a8((uastc_pack_eac_a8_results *)&local_4b8,(uchar *)local_58,
                                        uVar884,uVar891,uVar892,param_6 & 0xf);
                      bStack_397 = (char)local_4b0 << 4 | (byte)(local_4b8 >> 0x20) & 0xf;
                    }
                    compute_etc1_hints((etc_block *)local_428,(uint *)&local_4b8,
                                       (uastc_encode_results *)&local_2b8,pcVar1,
                                       (color_rgba *)local_358,param_6 & 0xf,param_6);
                    pack_uastc((uastc_block *)local_448,(uastc_encode_results *)&local_2b8,
                               (etc_block *)local_428,(uint)local_4b8,(eac_a8_block *)&local_398,
                               local_5a8,(bool)local_5c8[0]);
                    *(undefined8 *)(param_3 + local_5f0) = local_448._0_8_;
                    *(undefined8 *)(param_3 + local_5f0 + 8) = local_448._8_8_;
                    goto LAB_0010d4f9;
                  }
                }
                goto LAB_0010c802;
              }
            }
LAB_0010d4f9:
            local_4b8 = 0;
            uVar892 = uVar890;
            uVar891 = 0;
            if (uVar882 != 0) {
              do {
                uVar882 = uVar892 & 7;
                iVar1080 = 8 - uVar882;
                if ((int)(uVar1180 - uVar891) < iVar1080) {
                  iVar1080 = uVar1180 - uVar891;
                }
                uVar884 = uVar892 >> 3;
                uVar892 = uVar892 + iVar1080;
                uVar880 = uVar891 + iVar1080;
                local_4b8 = local_4b8 |
                            (long)(int)((int)(uint)(byte)local_448[uVar884] >> (sbyte)uVar882 &
                                       (1 << ((byte)iVar1080 & 0x1f)) - 1U) <<
                            ((byte)uVar891 & 0x3f);
                uVar891 = uVar880;
              } while (uVar880 < uVar1180);
            }
            local_4ac = 0;
            local_4b0 = uVar890;
            local_4a8 = iVar876;
            lVar943 = std::
                      _Hashtable<basisu::selector_bitsequence,std::pair<basisu::selector_bitsequence_const,unsigned_int>,std::allocator<std::pair<basisu::selector_bitsequence_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<basisu::selector_bitsequence>,basisu::selector_bitsequence_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
                      ::_M_emplace<std::pair<basisu::selector_bitsequence,unsigned_int>>
                                ((_Hashtable<basisu::selector_bitsequence,std::pair<basisu::selector_bitsequence_const,unsigned_int>,std::allocator<std::pair<basisu::selector_bitsequence_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<basisu::selector_bitsequence>,basisu::selector_bitsequence_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
                                  *)&local_498);
            if (extraout_DL_00 == '\0') {
              *(int *)(lVar943 + 0x18) = iVar876;
            }
            goto LAB_0010c3ec;
          }
        }
LAB_0010c802:
        local_50d = '\0';
        puVar871 = local_488;
        break;
      }
LAB_0010c3ec:
      local_5f0 = local_5f0 + 0x10;
      local_5a4 = iVar876;
      puVar871 = local_488;
    } while (local_5f0 != ((ulong)param_1 + 1 + (ulong)((param_2 - 1) - param_1)) * 0x10);
    while (puVar871 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar871;
      operator_delete(puVar871,0x20);
      puVar871 = puVar2;
    }
    __n = local_490 * 8;
  }
  else {
    local_50d = '\x01';
    __n = 8;
  }
  memset(local_498,0,__n);
  local_480 = 0;
  local_488 = (undefined8 *)0x0;
  if (local_498 != local_468) {
    operator_delete(local_498,local_490 * 8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_50d;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Function_handler<void (), basisu::uastc_rdo(unsigned int, basist::uastc_block*,
   basisu::color_rgba const*, basisu::uastc_rdo_params const&, unsigned int, basisu::job_pool*,
   unsigned int)::{lambda()#1}>::_M_invoke(std::_Any_data const&) */

void std::
     _Function_handler<void(),basisu::uastc_rdo(unsigned_int,basist::uastc_block*,basisu::color_rgba_const*,basisu::uastc_rdo_params_const&,unsigned_int,basisu::job_pool*,unsigned_int)::{lambda()#1}>
     ::_M_invoke(_Any_data *param_1)

{
  uint *puVar1;
  pthread_mutex_t *__mutex;
  char cVar2;
  char cVar3;
  int iVar4;
  long in_FS_OFFSET;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  long local_20;
  
  puVar1 = *(uint **)param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  cVar2 = basisu::uastc_rdo_blocks
                    (*puVar1,puVar1[1],*(uastc_block **)(puVar1 + 2),*(color_rgba **)(puVar1 + 4),
                     *(uastc_rdo_params **)(puVar1 + 6),puVar1[8],&local_30,&local_28,&local_2c,
                     &local_24);
  __mutex = *(pthread_mutex_t **)(puVar1 + 0x14);
  iVar4 = pthread_mutex_lock(__mutex);
  if (iVar4 == 0) {
    cVar3 = **(char **)(puVar1 + 0x12);
    if (cVar3 != '\0') {
      cVar3 = cVar2;
    }
    **(char **)(puVar1 + 0x12) = cVar3;
    **(int **)(puVar1 + 10) = **(int **)(puVar1 + 10) + local_30;
    **(int **)(puVar1 + 0xc) = **(int **)(puVar1 + 0xc) + local_2c;
    **(int **)(puVar1 + 0xe) = **(int **)(puVar1 + 0xe) + local_28;
    **(int **)(puVar1 + 0x10) = **(int **)(puVar1 + 0x10) + local_24;
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      pthread_mutex_unlock(__mutex);
      return;
    }
  }
  else {
    std::__throw_system_error(iVar4);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::uastc_rdo(unsigned int, basist::uastc_block*, basisu::color_rgba const*,
   basisu::uastc_rdo_params const&, unsigned int, basisu::job_pool*, unsigned int) */

uint basisu::uastc_rdo(uint param_1,uastc_block *param_2,color_rgba *param_3,
                      uastc_rdo_params *param_4,uint param_5,job_pool *param_6,uint param_7)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  long in_FS_OFFSET;
  float fVar5;
  byte local_99;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  undefined1 local_88 [16];
  code *local_78;
  code *pcStack_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  if (param_7 != 0) {
    local_68 = (undefined1  [16])0x0;
    local_48 = 0;
    local_58 = (undefined1  [16])0x0;
    if ((param_6 != (job_pool *)0x0 && 1 < param_7) && (8 < param_1 / param_7)) {
      local_99 = 1;
      if (param_1 != 0) {
        uVar2 = 0;
        do {
          local_88 = (undefined1  [16])0x0;
          local_78 = (code *)0x0;
          uVar4 = uVar2 + param_1 / param_7;
          pcStack_70 = (code *)0x0;
          uVar1 = param_1;
          if (uVar4 <= param_1) {
            uVar1 = uVar4;
          }
          puVar3 = (uint *)operator_new(0x58);
          *puVar3 = uVar2;
          *(uastc_block **)(puVar3 + 2) = param_2;
          *(color_rgba **)(puVar3 + 4) = param_3;
          puVar3[1] = uVar1;
          *(uastc_rdo_params **)(puVar3 + 6) = param_4;
          puVar3[8] = param_5;
          *(uint **)(puVar3 + 10) = &local_98;
          *(uint **)(puVar3 + 0xc) = &local_94;
          *(uint **)(puVar3 + 0xe) = &local_90;
          *(uint **)(puVar3 + 0x10) = &local_8c;
          *(byte **)(puVar3 + 0x12) = &local_99;
          *(undefined1 **)(puVar3 + 0x14) = local_68;
          local_88._0_8_ = puVar3;
          local_78 = std::
                     _Function_handler<void(),basisu::uastc_rdo(unsigned_int,basist::uastc_block*,basisu::color_rgba_const*,basisu::uastc_rdo_params_const&,unsigned_int,basisu::job_pool*,unsigned_int)::{lambda()#1}>
                     ::_M_manager;
          pcStack_70 = std::
                       _Function_handler<void(),basisu::uastc_rdo(unsigned_int,basist::uastc_block*,basisu::color_rgba_const*,basisu::uastc_rdo_params_const&,unsigned_int,basisu::job_pool*,unsigned_int)::{lambda()#1}>
                       ::_M_invoke;
          basisu::job_pool::add_job((function *)param_6);
          if (local_78 != (code *)0x0) {
            (*local_78)(local_88,local_88,3);
          }
          uVar2 = uVar4;
        } while (uVar4 < param_1);
      }
      basisu::job_pool::wait_for_all();
      uVar2 = (uint)local_99;
      goto LAB_0010e2ef;
    }
  }
  local_48 = 0;
  local_58 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  uVar2 = uastc_rdo_blocks(0,param_1,param_2,param_3,param_4,param_5,&local_98,&local_90,&local_94,
                           &local_8c);
LAB_0010e2ef:
  fVar5 = (float)param_1;
  basisu::debug_printf
            ("uastc_rdo: Total modified: %3.2f%%, total skipped: %3.2f%%, total refined: %3.2f%%, total smooth: %3.2f%%\n"
             ,(double)(((float)local_94 * _LC48) / fVar5),
             (double)(((float)local_98 * _LC48) / fVar5),(double)(((float)local_90 * _LC48) / fVar5)
             ,(double)(((float)local_8c * _LC48) / fVar5));
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* std::_Hashtable<basisu::selector_bitsequence, std::pair<basisu::selector_bitsequence const,
   unsigned int>, std::allocator<std::pair<basisu::selector_bitsequence const, unsigned int> >,
   std::__detail::_Select1st, std::equal_to<basisu::selector_bitsequence>,
   basisu::selector_bitsequence_hash, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true> >::find(basisu::selector_bitsequence const&)
    */

long * __thiscall
std::
_Hashtable<basisu::selector_bitsequence,std::pair<basisu::selector_bitsequence_const,unsigned_int>,std::allocator<std::pair<basisu::selector_bitsequence_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<basisu::selector_bitsequence>,basisu::selector_bitsequence_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
::find(_Hashtable<basisu::selector_bitsequence,std::pair<basisu::selector_bitsequence_const,unsigned_int>,std::allocator<std::pair<basisu::selector_bitsequence_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<basisu::selector_bitsequence>,basisu::selector_bitsequence_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
       *this,selector_bitsequence *param_1)

{
  uint uVar1;
  long *plVar2;
  
  if (*(long *)(this + 0x18) == 0) {
    plVar2 = *(long **)(this + 0x10);
    if (plVar2 != (long *)0x0) {
      do {
        if ((*(int *)(param_1 + 8) == (int)plVar2[2]) && (*(long *)param_1 == plVar2[1])) {
          return plVar2;
        }
        plVar2 = (long *)*plVar2;
      } while (plVar2 != (long *)0x0);
    }
  }
  else {
    uVar1 = basisu::hash_hsieh((uchar *)param_1,0x10);
    plVar2 = (long *)_M_find_before_node((ulong)this,
                                         (selector_bitsequence *)
                                         ((ulong)uVar1 % *(ulong *)(this + 8)),(ulong)param_1);
    if (plVar2 != (long *)0x0) {
      return (long *)*plVar2;
    }
  }
  return plVar2;
}



/* basisu::pack_uastc(basist::uastc_block&, basisu::uastc_encode_results const&, basisu::etc_block
   const&, unsigned int, basisu::eac_a8_block const&, bool, bool) */

void basisu::_GLOBAL__sub_I_pack_uastc(void)

{
  return;
}



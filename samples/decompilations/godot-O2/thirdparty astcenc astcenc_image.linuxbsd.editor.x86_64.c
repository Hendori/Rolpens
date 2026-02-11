
/* load_texel_f32(void const*, int) */

undefined8 load_texel_f32(void *param_1,int param_2)

{
  return *(undefined8 *)((long)param_1 + (long)param_2 * 4);
}



/* swz_texel_skip(vfloat4, astcenc_swizzle const&) */

void swz_texel_skip(void)

{
  return;
}



/* swz_texel(vfloat4, astcenc_swizzle const&) */

void swz_texel(undefined4 param_1,int *param_2)

{
  long in_FS_OFFSET;
  undefined4 local_28 [4];
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28[0] = param_1;
  local_18 = _LC0;
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_28[*param_2],local_28[param_2[2]]);
}



/* encode_texel_unorm(vfloat4, vmask4) */

undefined8 encode_texel_unorm(undefined8 param_1)

{
  return CONCAT44((float)((ulong)param_1 >> 0x20) * _LC2,(float)param_1 * _LC2);
}



/* load_texel_u8(void const*, int) */

undefined8 load_texel_u8(void *param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [13];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  uVar1 = *(uint *)((long)param_1 + (long)param_2);
  auVar2[0xc] = (char)(uVar1 >> 0x18);
  auVar2._0_12_ = ZEXT712(0);
  auVar3._0_4_ = (float)(uVar1 & 0xff);
  auVar3._4_4_ = (float)(uVar1 >> 8 & 0xff);
  auVar3._8_4_ = (float)(int)CONCAT32(auVar2._10_3_,(ushort)(byte)(uVar1 >> 0x10));
  auVar3._12_4_ = (float)(uint3)(auVar2._10_3_ >> 0x10);
  auVar4._4_4_ = _LC4;
  auVar4._0_4_ = _LC4;
  auVar4._8_4_ = _LC4;
  auVar4._12_4_ = _LC4;
  auVar3 = divps(auVar3,auVar4);
  return auVar3._0_8_;
}



/* load_texel_f16(void const*, int) */

void load_texel_f16(void *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((long)param_1 + (long)param_2 * 2);
  sf16_to_float((ushort)((ulong)uVar1 >> 0x30));
  sf16_to_float((ushort)((ulong)uVar1 >> 0x20));
  sf16_to_float((ushort)((ulong)uVar1 >> 0x10));
  sf16_to_float((ushort)uVar1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* encode_texel_lns(vfloat4, vmask4) */

ulong encode_texel_lns(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = (uint)((ulong)param_2 >> 0x20);
  fVar2 = (float)((ulong)param_1 >> 0x20);
  fVar1 = (float)param_1;
  uVar6 = (uint)fVar1 >> 0x17 & __LC61;
  uVar7 = (uint)fVar2 >> 0x17 & _UNK_001017d4;
  uVar8 = -(uint)((int)(__LC10 + uVar6) < __LC11);
  uVar9 = -(uint)((int)(_UNK_001017e4 + uVar7) < _UNK_001017f4);
  fVar4 = (float)((uint)(_LC20 * fVar1) & uVar8 |
                 ~uVar8 & (uint)(((float)(_LC13 & (uint)fVar1 | _LC57) + _LC16) * _LC18));
  fVar5 = (float)((uint)(_LC20 * fVar2) & uVar9 |
                 ~uVar9 & (uint)(((float)(_LC13 & (uint)fVar2 | _UNK_00101804) + _LC16) * _LC18));
  return CONCAT44(~(-(uint)(_LC7 < fVar2) ^ 0xffffffff) &
                  (-(uint)(_LC9 <= fVar2) & (uint)_LC2 |
                  ~-(uint)(_LC9 <= fVar2) &
                  (uint)((float)(int)(~uVar9 & uVar7 + _UNK_00101814) * _LC35 +
                         (float)(-(uint)(fVar5 < _LC23) & (uint)(_LC33 * fVar5) |
                                ~-(uint)(fVar5 < _LC23) &
                                (-(uint)(fVar5 <= _LC25) & (uint)(_LC31 + fVar5) |
                                ~-(uint)(fVar5 <= _LC25) & (uint)((_LC27 + fVar5) * _LC29))) +
                        _LC0._4_4_)) & uVar3,
                  ~(-(uint)(_LC7 < fVar1) ^ 0xffffffff) &
                  (-(uint)(_LC9 <= fVar1) & (uint)_LC2 |
                  ~-(uint)(_LC9 <= fVar1) &
                  (uint)((float)(int)(~uVar8 & uVar6 + __LC21) * _LC35 +
                         (float)(-(uint)(fVar4 < _LC23) & (uint)(_LC33 * fVar4) |
                                ~-(uint)(fVar4 < _LC23) &
                                (-(uint)(fVar4 <= _LC25) & (uint)(_LC31 + fVar4) |
                                ~-(uint)(fVar4 <= _LC25) & (uint)((_LC27 + fVar4) * _LC29))) +
                        _LC0._4_4_)) & (uint)param_2) |
         CONCAT44(~uVar3 & (uint)(_LC2 * fVar2),~(uint)param_2 & (uint)(_LC2 * fVar1));
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* load_image_block(astcenc_profile, astcenc_image const&, image_block&, block_size_descriptor
   const&, unsigned int, unsigned int, unsigned int, astcenc_swizzle const&) */

void load_image_block(int param_1,int *param_2,float *param_3,byte *param_4,float param_5,
                     float param_6,float param_7,int *param_8)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  code *pcVar17;
  code *pcVar18;
  uint uVar19;
  code *pcVar20;
  long lVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  uint uVar26;
  uint extraout_XMM0_Da;
  float fVar29;
  float fVar30;
  undefined8 extraout_XMM0_Qb;
  float fVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  ulong uVar38;
  int iVar39;
  int iVar40;
  undefined1 local_118 [8];
  undefined8 uStack_110;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  bool local_c8;
  
  bVar22 = true;
  iVar12 = *param_2;
  iVar39 = param_2[1];
  iVar40 = param_2[2];
  param_3[0x3f3] = param_7;
  iVar16 = *param_8;
  param_3[0x3f1] = param_5;
  param_3[0x3f2] = param_6;
  if (((iVar16 == 0) && (param_8[1] == 1)) && (param_8[2] == 2)) {
    bVar22 = param_8[3] != 3;
  }
  fVar23 = _LC0._4_4_ / (float)param_4[3];
  bVar2 = param_1 - 2U < 2;
  local_c8 = bVar2 && param_1 == 3;
  pcVar20 = load_texel_f16;
  auVar32._0_4_ = -(uint)!bVar2;
  auVar32._4_4_ = -(uint)!bVar2;
  auVar32._8_4_ = -(uint)!bVar2;
  auVar32._12_4_ = -(uint)(!bVar2 || param_1 != 3);
  auVar37._8_4_ = 0xffffffff;
  auVar37._0_8_ = 0xffffffffffffffff;
  auVar37._12_4_ = 0xffffffff;
  auVar32 = auVar32 ^ auVar37;
  if ((param_2[3] != 1) && (pcVar20 = load_texel_f32, param_2[3] != 2)) {
    pcVar20 = load_texel_u8;
  }
  pcVar17 = swz_texel_skip;
  if (bVar22) {
    pcVar17 = swz_texel;
  }
  iVar16 = movmskps((int)pcVar17,auVar32);
  pcVar18 = encode_texel_unorm;
  if (iVar16 != 0) {
    pcVar18 = encode_texel_lns;
  }
  if (param_4[2] == 0) {
    local_108 = 0xffffffff;
    uStack_104 = 0xffffffff;
    uStack_100 = 0xffffffff;
    uStack_fc = 0xffffffff;
    _local_118 = (undefined1  [16])0x0;
    auVar33._4_4_ = _LC39;
    auVar33._0_4_ = _LC39;
    auVar33._8_4_ = _LC39;
    auVar33._12_4_ = _LC39;
    auVar34._4_4_ = _LC41;
    auVar34._0_4_ = _LC41;
    auVar34._8_4_ = _LC41;
    auVar34._12_4_ = _LC41;
  }
  else {
    iVar16 = (int)param_5 + -1;
    uVar13 = 0;
    uVar25 = iVar12 - 1;
    iVar14 = 0;
    local_108 = 0xffffffff;
    uStack_104 = 0xffffffff;
    uStack_100 = 0xffffffff;
    uStack_fc = 0xffffffff;
    auVar33._4_4_ = _LC39;
    auVar33._0_4_ = _LC39;
    auVar33._8_4_ = _LC39;
    auVar33._12_4_ = _LC39;
    _local_118 = (undefined1  [16])0x0;
    auVar34._4_4_ = _LC41;
    auVar34._0_4_ = _LC41;
    auVar34._8_4_ = _LC41;
    auVar34._12_4_ = _LC41;
    do {
      uVar19 = uVar13 + (int)param_7;
      if (iVar40 - 1U < uVar13 + (int)param_7) {
        uVar19 = iVar40 - 1U;
      }
      uVar1 = *(undefined8 *)(*(long *)(param_2 + 4) + (ulong)uVar19 * 8);
      if (param_4[1] != 0) {
        uVar19 = 0;
        do {
          uVar26 = (int)param_6 + uVar19;
          if (iVar39 - 1U < (int)param_6 + uVar19) {
            uVar26 = iVar39 - 1U;
          }
          iVar11 = iVar14;
          if (*param_4 != 0) {
            lVar21 = (long)(iVar14 + 1);
            do {
              iVar11 = (int)lVar21;
              uVar15 = (iVar16 - iVar14) + iVar11;
              if (uVar25 < uVar15) {
                uVar15 = uVar25;
              }
              (*pcVar20)(uVar1,(uVar15 + uVar26 * iVar12) * 4);
              (*pcVar17)(param_8);
              auVar28._0_8_ = (*pcVar18)();
              auVar28._8_8_ = extraout_XMM0_Qb;
              fVar24 = (float)auVar28._0_8_;
              fVar29 = (float)((ulong)auVar28._0_8_ >> 0x20);
              fVar30 = (float)extraout_XMM0_Qb;
              fVar31 = (float)((ulong)extraout_XMM0_Qb >> 0x20);
              param_3[lVar21 + -1] = fVar24;
              auVar34 = minps(auVar34,auVar28);
              auVar33 = maxps(auVar33,auVar28);
              local_118._4_4_ = fVar23 * fVar29 + (float)local_118._4_4_;
              local_118._0_4_ = fVar23 * fVar24 + (float)local_118._0_4_;
              uStack_110._0_4_ = fVar23 * fVar30 + (float)uStack_110;
              uStack_110._4_4_ = fVar23 * fVar31 + uStack_110._4_4_;
              local_108 = -(uint)(fVar24 == fVar29) & local_108;
              uStack_104 = -(uint)(fVar24 == fVar29) & uStack_104;
              uStack_100 = -(uint)(fVar24 == fVar30) & uStack_100;
              uStack_fc = -(uint)(fVar24 == fVar30) & uStack_fc;
              param_3[lVar21 + 0xdb] = fVar29;
              param_3[lVar21 + 0x293] = fVar31;
              param_3[lVar21 + 0x1b7] = fVar30;
              *(bool *)((long)param_3 + lVar21 + 0xe11) = bVar2;
              *(bool *)((long)param_3 + lVar21 + 0xee9) = local_c8;
              lVar21 = lVar21 + 1;
            } while (((int)lVar21 - iVar14) - 1U < (uint)*param_4);
          }
          iVar14 = iVar11;
          uVar19 = uVar19 + 1;
        } while (uVar19 < param_4[1]);
      }
      param_5 = (float)(uint)param_4[2];
      uVar13 = uVar13 + 1;
    } while (uVar13 < param_4[2]);
  }
  auVar36._4_4_ = param_3[0xdc];
  auVar36._0_4_ = *param_3;
  auVar36._8_4_ = param_3[0x1b8];
  auVar36._12_4_ = param_3[0x294];
  auVar27._4_4_ = _LC2;
  auVar27._0_4_ = _LC2;
  auVar27._8_4_ = _LC2;
  auVar27._12_4_ = _LC2;
  auVar37 = divps(auVar36,auVar27);
  uVar25 = 0;
  uVar26 = 0;
  uVar19 = 0;
  uVar13 = 0;
  if (bVar2) {
    auVar35._0_4_ = (uint)*param_3;
    auVar35._4_4_ = (uint)param_3[0xdc];
    auVar35._8_4_ = (uint)param_3[0x1b8];
    auVar35._12_4_ = (uint)param_3[0x294];
    auVar28 = __LC42 & auVar35;
    iVar12 = auVar28._0_4_;
    uVar38 = auVar28._8_8_;
    iVar39 = auVar28._4_4_;
    iVar40 = auVar28._12_4_;
    uVar19 = -(uint)(auVar28._8_4_ < _UNK_00101868);
    uVar13 = -(uint)(auVar28._8_4_ < _UNK_00101848);
    uVar25 = (auVar35._0_4_ >> 0xb) << 10 |
             (-(uint)(iVar12 < __LC45) & iVar12 * _LC44 |
             ~-(uint)(iVar12 < __LC45) &
             (iVar12 * _LC47 + __LC52 & -(uint)(iVar12 < __LC48) |
             ~-(uint)(iVar12 < __LC48) & iVar12 * _LC50 + __LC51)) >> 3;
    uVar26 = (auVar35._4_4_ >> 0xb) << 10 |
             (-(uint)(iVar39 < _UNK_00101844) & _UNK_00101834 * iVar39 |
             ~-(uint)(iVar39 < _UNK_00101844) &
             (_UNK_00101854 * iVar39 + _UNK_00101894 & -(uint)(iVar39 < _UNK_00101864) |
             ~-(uint)(iVar39 < _UNK_00101864) & iVar39 * _UNK_00101874 + _UNK_00101884)) >> 3;
    uVar19 = (auVar35._8_4_ >> 0xb) << 10 |
             (uVar13 & (uint)((uVar38 & 0xffffffff) * (ulong)DAT_00101838) |
             ~uVar13 & ((int)((uVar38 & 0xffffffff) * (ulong)DAT_00101858) + _UNK_00101898 & uVar19
                       | ~uVar19 & (int)((uVar38 & 0xffffffff) * (ulong)DAT_00101878) +
                                   _UNK_00101888)) >> 3;
    uVar13 = (auVar35._12_4_ >> 0xb) << 10 |
             (-(uint)(iVar40 < _UNK_0010184c) & _UNK_0010183c * iVar40 |
             ~-(uint)(iVar40 < _UNK_0010184c) &
             (_UNK_0010185c * iVar40 + _UNK_0010189c & -(uint)(iVar40 < _UNK_0010186c) |
             ~-(uint)(iVar40 < _UNK_0010186c) & iVar40 * _UNK_0010187c + _UNK_0010188c)) >> 3;
    uVar10 = -(ushort)((int)uVar25 < __LC54);
    uVar8 = -(ushort)((int)uVar26 < _UNK_001018a4);
    uVar6 = -(ushort)((int)uVar19 < _UNK_001018a8);
    uVar4 = -(ushort)((int)uVar13 < _UNK_001018ac);
    uVar9 = (ushort)__LC54;
    uVar7 = (ushort)_UNK_001018a4;
    uVar5 = (ushort)_UNK_001018a8;
    uVar13 = sf16_to_float((ushort)uVar13 & uVar4 | ~uVar4 & (ushort)_UNK_001018ac);
    uVar19 = sf16_to_float((ushort)uVar19 & uVar6 | ~uVar6 & uVar5);
    uVar26 = sf16_to_float((ushort)uVar26 & uVar8 | ~uVar8 & uVar7);
    param_5 = (float)sf16_to_float((ushort)uVar25 & uVar10 | ~uVar10 & uVar9);
    uVar25 = extraout_XMM0_Da;
  }
  local_e8 = auVar37._0_4_;
  uStack_e4 = auVar37._4_4_;
  uStack_e0 = auVar37._8_4_;
  uStack_dc = auVar37._12_4_;
  *(undefined1 (*) [16])(param_3 + 0x374) = auVar34;
  *(undefined1 (*) [8])(param_3 + 0x378) = local_118;
  *(undefined8 *)(param_3 + 0x37a) = uStack_110;
  auVar3._4_4_ = uStack_104;
  auVar3._0_4_ = local_108;
  auVar3._8_4_ = uStack_100;
  auVar3._12_4_ = uStack_fc;
  param_3[0x370] = (float)(uVar25 & auVar32._0_4_ | ~auVar32._0_4_ & local_e8);
  param_3[0x371] = (float)(uVar26 & auVar32._4_4_ | ~auVar32._4_4_ & uStack_e4);
  param_3[0x372] = (float)(uVar19 & auVar32._8_4_ | ~auVar32._8_4_ & uStack_e0);
  param_3[0x373] = (float)(uVar13 & auVar32._12_4_ | ~auVar32._12_4_ & uStack_dc);
  iVar12 = movmskps(param_5,auVar3);
  *(undefined1 (*) [16])(param_3 + 0x37c) = auVar33;
  *(bool *)(param_3 + 900) = iVar12 == 0xf;
  return;
}



/* load_image_block_fast_ldr(astcenc_profile, astcenc_image const&, image_block&,
   block_size_descriptor const&, unsigned int, unsigned int, unsigned int, astcenc_swizzle const&)
    */

void load_image_block_fast_ldr
               (undefined8 param_1,int *param_2,undefined4 *param_3,byte *param_4,uint param_5,
               uint param_6,undefined4 param_7)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [13];
  float fVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  float *pfVar14;
  uint uVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  iVar11 = *param_2;
  iVar3 = param_2[1];
  plVar4 = *(long **)(param_2 + 4);
  param_3[0x3f1] = param_5;
  param_3[0x3f2] = param_6;
  lVar5 = *plVar4;
  param_3[0x3f3] = param_7;
  fVar8 = _LC56;
  uVar13 = (uint)param_4[1];
  if (param_6 < uVar13 + param_6) {
    uVar12 = (uint)*param_4;
    iVar16 = 0;
    uVar22 = 0xffffffff;
    uVar23 = 0xffffffff;
    uVar24 = 0xffffffff;
    uVar25 = 0xffffffff;
    auVar20 = (undefined1  [16])0x0;
    uVar1 = iVar11 - 1;
    auVar27._4_4_ = _LC41;
    auVar27._0_4_ = _LC41;
    auVar27._8_4_ = _LC41;
    auVar27._12_4_ = _LC41;
    auVar26._4_4_ = _LC39;
    auVar26._0_4_ = _LC39;
    auVar26._8_4_ = _LC39;
    auVar26._12_4_ = _LC39;
    uVar15 = param_6;
    do {
      uVar9 = iVar3 - 1U;
      if (uVar15 <= iVar3 - 1U) {
        uVar9 = uVar15;
      }
      if (param_5 < uVar12 + param_5) {
        pfVar14 = (float *)(param_3 + iVar16);
        auVar21 = auVar20;
        uVar13 = param_5;
        do {
          uVar10 = uVar13;
          uVar13 = uVar1;
          if (uVar10 <= uVar1) {
            uVar13 = uVar10;
          }
          uVar13 = *(uint *)(lVar5 + (ulong)(uVar9 * iVar11 * 4) + (ulong)(uVar13 * 4));
          auVar7[0xc] = (char)(uVar13 >> 0x18);
          auVar7._0_12_ = ZEXT712(0);
          auVar17._0_4_ = (float)(uVar13 & 0xff) * fVar8;
          auVar17._4_4_ = (float)(uVar13 >> 8 & 0xff) * fVar8;
          auVar17._8_4_ = (float)(int)CONCAT32(auVar7._10_3_,(ushort)(byte)(uVar13 >> 0x10)) * fVar8
          ;
          auVar17._12_4_ = (float)(uint3)(auVar7._10_3_ >> 0x10) * fVar8;
          *pfVar14 = auVar17._0_4_;
          auVar27 = minps(auVar27,auVar17);
          auVar20._0_4_ = auVar21._0_4_ + auVar17._0_4_;
          auVar20._4_4_ = auVar21._4_4_ + auVar17._4_4_;
          auVar20._8_4_ = auVar21._8_4_ + auVar17._8_4_;
          auVar20._12_4_ = auVar21._12_4_ + auVar17._12_4_;
          auVar26 = maxps(auVar26,auVar17);
          uVar22 = uVar22 & -(uint)(auVar17._0_4_ == auVar17._4_4_);
          uVar23 = uVar23 & -(uint)(auVar17._0_4_ == auVar17._4_4_);
          uVar24 = uVar24 & -(uint)(auVar17._0_4_ == auVar17._8_4_);
          uVar25 = uVar25 & -(uint)(auVar17._0_4_ == auVar17._8_4_);
          pfVar14[0xdc] = auVar17._4_4_;
          pfVar14[0x294] = auVar17._12_4_;
          pfVar14[0x1b8] = auVar17._8_4_;
          uVar12 = (uint)*param_4;
          pfVar14 = pfVar14 + 1;
          auVar21 = auVar20;
          uVar13 = uVar10 + 1;
        } while (uVar10 + 1 < uVar12 + param_5);
        uVar13 = (uint)param_4[1];
        iVar16 = iVar16 + (1 - param_5) + uVar10;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar13 + param_6);
  }
  else {
    uVar22 = 0xffffffff;
    uVar23 = 0xffffffff;
    uVar24 = 0xffffffff;
    uVar25 = 0xffffffff;
    auVar20 = (undefined1  [16])0x0;
    auVar27._4_4_ = _LC41;
    auVar27._0_4_ = _LC41;
    auVar27._8_4_ = _LC41;
    auVar27._12_4_ = _LC41;
    auVar26._4_4_ = _LC39;
    auVar26._0_4_ = _LC39;
    auVar26._8_4_ = _LC39;
    auVar26._12_4_ = _LC39;
  }
  *(undefined1 *)((long)param_3 + 0xe12) = 0;
  *(undefined1 *)((long)param_3 + 0xeea) = 0;
  *(undefined1 (*) [16])(param_3 + 0x374) = auVar27;
  auVar18._4_4_ = param_3[0xdc];
  auVar18._0_4_ = *param_3;
  auVar18._12_4_ = param_3[0x294];
  auVar18._8_4_ = param_3[0x1b8];
  auVar21._4_4_ = _LC2;
  auVar21._0_4_ = _LC2;
  auVar21._8_4_ = _LC2;
  auVar21._12_4_ = _LC2;
  auVar27 = divps(auVar18,auVar21);
  *(undefined1 (*) [16])(param_3 + 0x370) = auVar27;
  bVar2 = param_4[3];
  *(undefined1 (*) [16])(param_3 + 0x37c) = auVar26;
  auVar19._0_4_ = (float)bVar2;
  auVar6._4_4_ = uVar23;
  auVar6._0_4_ = uVar22;
  auVar6._8_4_ = uVar24;
  auVar6._12_4_ = uVar25;
  iVar11 = movmskps((uint)bVar2,auVar6);
  *(bool *)(param_3 + 900) = iVar11 == 0xf;
  auVar19._4_4_ = auVar19._0_4_;
  auVar19._8_4_ = auVar19._0_4_;
  auVar19._12_4_ = auVar19._0_4_;
  auVar20 = divps(auVar20,auVar19);
  *(undefined1 (*) [16])(param_3 + 0x378) = auVar20;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* store_image_block(astcenc_image&, image_block const&, block_size_descriptor const&, unsigned int,
   unsigned int, unsigned int, astcenc_swizzle const&) */

void store_image_block(astcenc_image *param_1,image_block *param_2,block_size_descriptor *param_3,
                      uint param_4,uint param_5,uint param_6,astcenc_swizzle *param_7)

{
  image_block *piVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [14];
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  ushort uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  undefined1 (*pauVar23) [16];
  int iVar24;
  int iVar25;
  ulong uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  int *piVar31;
  uint uVar32;
  long lVar33;
  int iVar34;
  long in_FS_OFFSET;
  bool bVar35;
  bool bVar36;
  float fVar37;
  float fVar38;
  float fVar43;
  float fVar45;
  float fVar47;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  int iVar44;
  int iVar46;
  undefined1 auVar42 [16];
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  long local_40;
  
  iVar13 = _UNK_001018cc;
  iVar12 = _UNK_001018c8;
  iVar11 = _UNK_001018c4;
  iVar21 = __LC63;
  fVar4 = _LC57;
  fVar38 = _LC0._4_4_;
  uVar28 = (byte)*param_3 + param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(uint *)param_1;
  uVar27 = uVar3;
  if (uVar28 <= uVar3) {
    uVar27 = uVar28;
  }
  iVar34 = uVar28 - uVar27;
  uVar29 = (byte)param_3[1] + param_5;
  uVar27 = uVar27 - param_4;
  uVar28 = *(uint *)(param_1 + 4);
  if (uVar29 <= *(uint *)(param_1 + 4)) {
    uVar28 = uVar29;
  }
  iVar30 = (uVar29 - uVar28) * (uint)(byte)*param_3;
  uVar29 = (byte)param_3[2] + param_6;
  if (*(uint *)(param_1 + 8) < (byte)param_3[2] + param_6) {
    uVar29 = *(uint *)(param_1 + 8);
  }
  if (*(int *)param_7 == 0) {
    iVar24 = *(int *)(param_7 + 4);
    if (iVar24 != 1) goto LAB_00100ce0;
    iVar24 = *(int *)(param_7 + 8);
    if (iVar24 != 2) goto LAB_00100cee;
    bVar36 = *(int *)(param_7 + 0xc) != 3;
  }
  else {
    bVar36 = true;
    bVar35 = true;
    if (*(int *)param_7 == 6) goto LAB_00100d08;
    iVar24 = *(int *)(param_7 + 4);
LAB_00100ce0:
    if (iVar24 == 6) {
      bVar36 = true;
      bVar35 = true;
      goto LAB_00100d08;
    }
    iVar24 = *(int *)(param_7 + 8);
LAB_00100cee:
    bVar36 = true;
    bVar35 = true;
    if (iVar24 == 6) goto LAB_00100d08;
  }
  bVar35 = *(int *)(param_7 + 0xc) == 6;
LAB_00100d08:
  if (*(int *)(param_1 + 0xc) == 0) {
    if (param_6 < uVar29) {
      lVar22 = (ulong)param_6 * 8;
      iVar24 = 0;
      do {
        fVar38 = _LC0._4_4_;
        lVar5 = *(long *)(*(long *)(param_1 + 0x10) + lVar22);
        uVar18 = uVar3 * param_5 * 4;
        uVar32 = param_5;
        if (param_5 < uVar28) {
          do {
            fVar48 = _LC57;
            fVar4 = _LC4;
            piVar31 = (int *)((ulong)uVar18 + (ulong)(param_4 * 4) + lVar5);
            if (uVar27 != 0) {
              uVar20 = 0;
              do {
                while( true ) {
                  iVar25 = iVar24;
                  uVar17 = uVar27 - uVar20;
                  auVar40 = *(undefined1 (*) [16])(param_2 + (long)iVar25 * 4);
                  if (4 < uVar17) {
                    uVar17 = 4;
                  }
                  lVar33 = (long)iVar25 * 4;
                  auVar42 = *(undefined1 (*) [16])(param_2 + lVar33 + 0xa50);
                  auVar51._4_4_ = fVar38;
                  auVar51._0_4_ = fVar38;
                  auVar51._8_4_ = fVar38;
                  auVar51._12_4_ = fVar38;
                  auVar54 = minps(auVar40,auVar51);
                  auVar6._4_4_ = fVar38;
                  auVar6._0_4_ = fVar38;
                  auVar6._8_4_ = fVar38;
                  auVar6._12_4_ = fVar38;
                  auVar50 = minps(*(undefined1 (*) [16])(param_2 + lVar33 + 0x370),auVar6);
                  auVar7._4_4_ = fVar38;
                  auVar7._0_4_ = fVar38;
                  auVar7._8_4_ = fVar38;
                  auVar7._12_4_ = fVar38;
                  auVar49 = minps(*(undefined1 (*) [16])(param_2 + lVar33 + 0x6e0),auVar7);
                  auVar8._4_4_ = fVar38;
                  auVar8._0_4_ = fVar38;
                  auVar8._8_4_ = fVar38;
                  auVar8._12_4_ = fVar38;
                  auVar51 = minps(auVar42,auVar8);
                  auVar53._0_4_ = (int)(auVar54._0_4_ * fVar4 + fVar48);
                  auVar53._4_4_ = (int)(auVar54._4_4_ * fVar4 + fVar48);
                  auVar53._8_4_ = (int)(auVar54._8_4_ * fVar4 + fVar48);
                  auVar53._12_4_ = (int)(auVar54._12_4_ * fVar4 + fVar48);
                  auVar54._0_4_ = (int)(auVar50._0_4_ * fVar4 + fVar48);
                  auVar54._4_4_ = (int)(auVar50._4_4_ * fVar4 + fVar48);
                  auVar54._8_4_ = (int)(auVar50._8_4_ * fVar4 + fVar48);
                  auVar54._12_4_ = (int)(auVar50._12_4_ * fVar4 + fVar48);
                  auVar50._0_4_ = (int)(auVar49._0_4_ * fVar4 + fVar48);
                  auVar50._4_4_ = (int)(auVar49._4_4_ * fVar4 + fVar48);
                  auVar50._8_4_ = (int)(auVar49._8_4_ * fVar4 + fVar48);
                  auVar50._12_4_ = (int)(auVar49._12_4_ * fVar4 + fVar48);
                  auVar52._0_4_ = (int)(auVar51._0_4_ * fVar4 + fVar48);
                  auVar52._4_4_ = (int)(auVar51._4_4_ * fVar4 + fVar48);
                  auVar52._8_4_ = (int)(auVar51._8_4_ * fVar4 + fVar48);
                  auVar52._12_4_ = (int)(auVar51._12_4_ * fVar4 + fVar48);
                  if (bVar36) {
                    local_a8 = auVar54;
                    local_78 = (undefined1  [16])0x0;
                    local_68 = __LC61;
                    uStack_60 = _UNK_001017d8;
                    local_b8 = auVar53;
                    local_98 = auVar50;
                    local_88 = auVar52;
                    if (bVar35) {
                      fVar55 = auVar42._0_4_ + auVar42._0_4_ + __LC59;
                      fVar56 = auVar42._4_4_ + auVar42._4_4_ + _UNK_001018b4;
                      fVar57 = auVar42._8_4_ + auVar42._8_4_ + _UNK_001018b8;
                      fVar58 = auVar42._12_4_ + auVar42._12_4_ + _UNK_001018bc;
                      fVar37 = auVar40._0_4_ + auVar40._0_4_ + __LC59;
                      fVar43 = auVar40._4_4_ + auVar40._4_4_ + _UNK_001018b4;
                      fVar45 = auVar40._8_4_ + auVar40._8_4_ + _UNK_001018b8;
                      fVar47 = auVar40._12_4_ + auVar40._12_4_ + _UNK_001018bc;
                      auVar39._0_4_ = (fVar38 - fVar37 * fVar37) - fVar55 * fVar55;
                      auVar39._4_4_ = (fVar38 - fVar43 * fVar43) - fVar56 * fVar56;
                      auVar39._8_4_ = (fVar38 - fVar45 * fVar45) - fVar57 * fVar57;
                      auVar39._12_4_ = (fVar38 - fVar47 * fVar47) - fVar58 * fVar58;
                      auVar40 = maxps(auVar39,(undefined1  [16])0x0);
                      auVar40 = sqrtps(auVar40,auVar40);
                      auVar41._0_4_ = auVar40._0_4_ * fVar48 + fVar48;
                      auVar41._4_4_ = auVar40._4_4_ * fVar48 + fVar48;
                      auVar41._8_4_ = auVar40._8_4_ * fVar48 + fVar48;
                      auVar41._12_4_ = auVar40._12_4_ * fVar48 + fVar48;
                      auVar40._4_4_ = fVar38;
                      auVar40._0_4_ = fVar38;
                      auVar40._8_4_ = fVar38;
                      auVar40._12_4_ = fVar38;
                      auVar40 = minps(auVar41,auVar40);
                      local_58 = (int)(auVar40._0_4_ * fVar4 + fVar48);
                      iStack_54 = (int)(auVar40._4_4_ * fVar4 + fVar48);
                      iStack_50 = (int)(auVar40._8_4_ * fVar4 + fVar48);
                      iStack_4c = (int)(auVar40._12_4_ * fVar4 + fVar48);
                    }
                    auVar53 = *(undefined1 (*) [16])(local_b8 + (long)*(int *)param_7 * 0x10);
                    auVar54 = *(undefined1 (*) [16])(local_b8 + (long)*(int *)(param_7 + 4) * 0x10);
                    auVar50 = *(undefined1 (*) [16])(local_b8 + (long)*(int *)(param_7 + 8) * 0x10);
                    lVar33 = (long)*(int *)(param_7 + 0xc) * 0x10;
                    auVar52 = *(undefined1 (*) [16])(local_b8 + lVar33);
                  }
                  iVar24 = movmskps((int)lVar33,ZEXT816(0));
                  auVar40 = ZEXT816(0);
                  if (iVar24 != 0) {
                    auVar54 = ~auVar40 & auVar54;
                    auVar42 = ZEXT816(0);
                    auVar50 = ~auVar40 & auVar50 | auVar42;
                    auVar53 = ~ZEXT816(0) & auVar53 | auVar42;
                    auVar52 = ~auVar40 & auVar52 | auVar42;
                  }
                  iVar24 = auVar50._0_4_ * 0x10000 + auVar52._0_4_ * 0x1000000 +
                           auVar54._0_4_ * 0x100 + auVar53._0_4_;
                  iVar44 = auVar50._4_4_ * 0x10000 + auVar52._4_4_ * 0x1000000 +
                           auVar54._4_4_ * 0x100 + auVar53._4_4_;
                  iVar46 = auVar50._8_4_ * 0x10000 + auVar52._8_4_ * 0x1000000 +
                           auVar54._8_4_ * 0x100 + auVar53._8_4_;
                  if ((float)((float)-(uint)(iVar13 < (int)uVar17) != 0.0) == 0.0) break;
                  uVar20 = uVar20 + 4;
                  *piVar31 = iVar24;
                  piVar31[1] = iVar44;
                  piVar31[2] = iVar46;
                  piVar31[3] = auVar50._12_4_ * 0x10000 + auVar52._12_4_ * 0x1000000 +
                               auVar54._12_4_ * 0x100 + auVar53._12_4_;
                  piVar31 = piVar31 + 4;
                  iVar24 = uVar17 + iVar25;
                  if (uVar27 <= uVar20) goto LAB_001010de;
                }
                if ((float)((float)-(uint)(iVar12 < (int)uVar17) != 0.0) == 0.0) {
                  if ((float)((float)-(uint)(iVar11 < (int)uVar17) != 0.0) == 0.0) {
                    if ((float)((float)-(uint)(iVar21 < (int)uVar17) != 0.0) != 0.0) {
                      *piVar31 = iVar24;
                    }
                  }
                  else {
                    *piVar31 = iVar24;
                    piVar31[1] = iVar44;
                  }
                }
                else {
                  *piVar31 = iVar24;
                  piVar31[1] = iVar44;
                  piVar31[2] = iVar46;
                }
                uVar20 = uVar20 + 4;
                piVar31 = piVar31 + 4;
                iVar24 = uVar17 + iVar25;
              } while (uVar20 < uVar27);
LAB_001010de:
              iVar24 = uVar17 + iVar25;
            }
            uVar32 = uVar32 + 1;
            iVar24 = iVar24 + iVar34;
            uVar18 = uVar18 + uVar3 * 4;
          } while (uVar32 != uVar28);
        }
        lVar22 = lVar22 + 8;
        iVar24 = iVar30 + iVar24;
      } while (((ulong)param_6 + 1 + (ulong)((uVar29 - param_6) - 1)) * 8 != lVar22);
    }
  }
  else if (*(int *)(param_1 + 0xc) == 1) {
    if (param_6 < uVar29) {
      iVar21 = 0;
      lVar22 = (ulong)param_6 * 8;
      do {
        lVar5 = *(long *)(*(long *)(param_1 + 0x10) + lVar22);
        uVar18 = param_5;
        uVar32 = uVar3 * param_5 * 4;
        if (param_5 < uVar28) {
          do {
            if (uVar27 != 0) {
              uVar26 = (ulong)iVar21;
              uVar2 = uVar27 + uVar26;
              lVar33 = uVar26 * -8;
              do {
                auVar40 = local_a8;
                if (bVar36) {
                  fVar38 = *(float *)(param_2 + uVar26 * 4);
                  fVar4 = *(float *)(param_2 + uVar26 * 4 + 0xa50);
                  local_a8._0_8_ = CONCAT44(_LC0._4_4_,(undefined4)_LC0);
                  local_b8._12_4_ = fVar4;
                  local_b8._8_4_ = *(undefined4 *)(param_2 + uVar26 * 4 + 0x6e0);
                  local_b8._4_4_ = *(undefined4 *)(param_2 + uVar26 * 4 + 0x370);
                  local_b8._0_4_ = fVar38;
                  if (bVar35) {
                    fVar48 = (fVar38 + fVar38) - _LC0._4_4_;
                    fVar38 = (fVar4 + fVar4) - _LC0._4_4_;
                    fVar38 = (_LC0._4_4_ - fVar48 * fVar48) - fVar38 * fVar38;
                    local_a8._8_4_ = _LC57;
                    if (0.0 <= fVar38) {
                      local_a8._8_4_ = _LC57 + SQRT(fVar38) * _LC57;
                    }
                    local_a8._12_4_ = auVar40._12_4_;
                  }
                  fVar4 = *(float *)(local_b8 + (long)*(int *)(param_7 + 8) * 4);
                  fVar48 = *(float *)(local_b8 + (long)*(int *)(param_7 + 4) * 4);
                  fVar38 = *(float *)(local_b8 + (long)*(int *)param_7 * 4);
                  uVar14 = float_to_sf16(*(float *)(local_b8 + (long)*(int *)(param_7 + 0xc) * 4));
                  uVar19 = float_to_sf16(fVar4);
                  uVar15 = float_to_sf16(fVar48);
                  uVar16 = float_to_sf16(fVar38);
                  auVar9._2_2_ = 0;
                  auVar9._0_2_ = uVar16;
                  auVar9._4_2_ = uVar15;
                  auVar9._6_2_ = 0;
                  auVar9._8_6_ = CONCAT24(uVar14,uVar19) & 0xffff0000ffff;
                }
                else {
                  piVar1 = param_2 + (uVar26 & 0xffffffff) * 4;
                  fVar38 = *(float *)piVar1;
                  fVar4 = *(float *)(piVar1 + 0x6e0);
                  fVar48 = *(float *)(piVar1 + 0x370);
                  uVar14 = float_to_sf16(*(float *)(piVar1 + 0xa50));
                  uVar19 = float_to_sf16(fVar4);
                  uVar15 = float_to_sf16(fVar48);
                  uVar16 = float_to_sf16(fVar38);
                  auVar9._2_2_ = 0;
                  auVar9._0_2_ = uVar16;
                  auVar9._4_2_ = uVar15;
                  auVar9._6_2_ = 0;
                  auVar9._8_6_ = CONCAT24(uVar14,uVar19) & 0xffff0000ffff;
                }
                *(ulong *)(lVar5 + ((ulong)uVar32 + (ulong)(param_4 * 4)) * 2 + lVar33 + uVar26 * 8)
                     = (((ulong)auVar9._12_2_ << 0x10 | (ulong)(auVar9._8_4_ & 0xffff)) << 0x10 |
                       (ulong)auVar9._4_4_) << 0x10 | (ulong)auVar9._0_4_;
                uVar26 = uVar26 + 1;
              } while (uVar26 != uVar2);
              iVar21 = iVar21 + uVar27;
            }
            uVar18 = uVar18 + 1;
            iVar21 = iVar34 + iVar21;
            uVar32 = uVar32 + uVar3 * 4;
          } while (uVar18 != uVar28);
        }
        lVar22 = lVar22 + 8;
        iVar21 = iVar30 + iVar21;
      } while (((ulong)param_6 + 1 + (ulong)((uVar29 - param_6) - 1)) * 8 != lVar22);
    }
  }
  else if (param_6 < uVar29) {
    lVar22 = (ulong)param_6 * 8;
    uVar10 = CONCAT44(_LC0._4_4_,(undefined4)_LC0);
    uVar18 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x10) + lVar22);
      uVar32 = param_5;
      uVar20 = uVar3 * param_5 * 4;
      if (param_5 < uVar28) {
        do {
          pauVar23 = (undefined1 (*) [16])(lVar5 + ((ulong)uVar20 + (ulong)(param_4 * 4)) * 4);
          uVar17 = uVar18;
          if (uVar27 != 0) {
            uVar17 = uVar27 + uVar18;
            do {
              auVar40 = local_a8;
              piVar1 = param_2 + (ulong)uVar18 * 4;
              fVar48 = *(float *)(piVar1 + 0xa50);
              fVar37 = *(float *)piVar1;
              auVar42._12_4_ = fVar48;
              auVar42._8_4_ = *(float *)(piVar1 + 0x6e0);
              auVar42._4_4_ = *(float *)(piVar1 + 0x370);
              auVar42._0_4_ = fVar37;
              auVar49._4_4_ = *(float *)(piVar1 + 0x370);
              auVar49._0_4_ = fVar37;
              auVar49._8_4_ = *(float *)(piVar1 + 0x6e0);
              auVar49._12_4_ = fVar48;
              if (bVar36) {
                local_a8._0_8_ = uVar10;
                local_b8 = auVar42;
                if (bVar35) {
                  fVar37 = (fVar37 + fVar37) - fVar38;
                  fVar48 = (fVar48 + fVar48) - fVar38;
                  fVar48 = (fVar38 - fVar37 * fVar37) - fVar48 * fVar48;
                  local_a8._8_4_ = fVar4;
                  if (0.0 <= fVar48) {
                    local_a8._8_4_ = SQRT(fVar48) * fVar4 + fVar4;
                  }
                  local_a8._12_4_ = auVar40._12_4_;
                }
                auVar49._12_4_ = *(undefined4 *)(local_b8 + (long)*(int *)(param_7 + 0xc) * 4);
                auVar49._8_4_ = *(undefined4 *)(local_b8 + (long)*(int *)(param_7 + 8) * 4);
                auVar49._4_4_ = *(undefined4 *)(local_b8 + (long)*(int *)(param_7 + 4) * 4);
                auVar49._0_4_ = *(undefined4 *)(local_b8 + (long)*(int *)param_7 * 4);
              }
              uVar18 = uVar18 + 1;
              *pauVar23 = auVar49;
              pauVar23 = pauVar23 + 1;
            } while (uVar18 != uVar17);
          }
          uVar32 = uVar32 + 1;
          uVar18 = uVar17 + iVar34;
          uVar20 = uVar20 + uVar3 * 4;
        } while (uVar32 != uVar28);
      }
      lVar22 = lVar22 + 8;
      uVar18 = iVar30 + uVar18;
    } while (((ulong)param_6 + 1 + (ulong)((uVar29 - param_6) - 1)) * 8 != lVar22);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



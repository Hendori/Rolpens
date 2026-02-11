
/* try_quantize_alpha_delta(vfloat4, vfloat4, vint4&, vint4&, quant_method) */

undefined8 try_quantize_alpha_delta(long param_1,long param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  float in_XMM0_Dd;
  float in_XMM1_Dd;
  
  uVar6 = 0;
  lVar5 = (long)(param_3 + -4) * 0x200;
  uVar2 = (int)(in_XMM0_Dd + _LC0) * 2;
  uVar3 = uVar2 & 0x100 | (uint)(byte)(&DAT_00104001)[(ulong)(uVar2 & 0xfe) * 2 + lVar5];
  uVar4 = (int)(in_XMM1_Dd + _LC0) * 2 - uVar3;
  if (uVar4 + 0x40 < 0x80) {
    uVar4 = uVar4 & 0x7f | (int)uVar3 >> 1 & 0x80U;
    bVar1 = (&color_unquant_to_uquant_tables)[(int)(uVar4 * 2 + 1) + lVar5];
    if (((uVar4 ^ bVar1) & 0xc0) == 0) {
      uVar4 = bVar1 & 0x7f;
      if ((bVar1 & 0x40) != 0) {
        uVar4 = bVar1 | 0xffffff80;
      }
      if (uVar4 + uVar3 < 0x200) {
        *(uint *)(param_1 + 0xc) = (uint)(byte)(&DAT_00104001)[(ulong)(uVar2 & 0xfe) * 2 + lVar5];
        uVar6 = 1;
        *(uint *)(param_2 + 0xc) = (uint)bVar1;
      }
    }
  }
  return uVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* quantize_rgbs(vfloat4, unsigned char*, quant_method) */

void quantize_rgbs(undefined8 param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  float fVar10;
  float fVar11;
  
  fVar9 = (float)((ulong)param_1 >> 0x20);
  fVar11 = (float)param_1 * _LC2;
  if (_LC3 < fVar11) {
    fVar11 = 0.0;
    iVar5 = 0x1fe;
  }
  else if (0.0 < fVar11) {
    iVar5 = (int)(_LC0 + fVar11) * 2;
    fVar11 = fVar11 - (float)(int)(_LC0 + fVar11);
  }
  else {
    fVar11 = 0.0;
    iVar5 = 0;
  }
  fVar10 = 0.0;
  iVar7 = 0x1fe;
  fVar8 = fVar9 * _LC2;
  if (fVar8 <= _LC3) {
    if (0.0 < fVar8) {
      iVar7 = (int)(_LC0 + fVar8) * 2;
      fVar10 = fVar8 - (float)(int)(_LC0 + fVar8);
    }
    else {
      fVar10 = 0.0;
      iVar7 = 0;
    }
  }
  fVar8 = in_XMM0_Dc * _LC2;
  if (_LC3 < fVar8) {
    fVar8 = 0.0;
    iVar6 = 0x1fe;
  }
  else if (0.0 < fVar8) {
    iVar6 = (int)(_LC0 + fVar8) * 2;
    fVar8 = fVar8 - (float)(int)(_LC0 + fVar8);
  }
  else {
    fVar8 = 0.0;
    iVar6 = 0;
  }
  lVar4 = (long)(param_3 + -4);
  bVar1 = (&color_unquant_to_uquant_tables)
          [(long)(int)((iVar5 + 1) - (uint)(fVar11 < _LC4)) + lVar4 * 0x200];
  bVar2 = (&color_unquant_to_uquant_tables)
          [(long)(int)((iVar7 + 1) - (uint)(fVar10 < _LC4)) + lVar4 * 0x200];
  bVar3 = (&color_unquant_to_uquant_tables)
          [(long)(int)((iVar6 + 1) - (uint)(fVar8 < _LC4)) + lVar4 * 0x200];
  iVar5 = 0x1ff;
  fVar9 = ((((float)param_1 + fVar9 + in_XMM0_Dc) * _LC2 + _LC5) * in_XMM0_Dd) /
          ((float)((uint)bVar1 + (uint)bVar2 + (uint)bVar3) + _LC5);
  if ((fVar9 <= __LC6) && (iVar5 = 1, 0.0 < fVar9)) {
    iVar5 = (int)(fVar9 * __LC7 + _LC0);
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    if (0xff < iVar5) {
      iVar5 = 0xff;
    }
    iVar5 = iVar5 * 2 + 1;
  }
  *param_2 = CONCAT31(CONCAT21(CONCAT11((&color_unquant_to_uquant_tables)
                                        [(long)iVar5 + lVar4 * 0x200],bVar3),bVar2),bVar1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* quantize_rgb(vfloat4, vfloat4, vint4&, vint4&, quant_method) */

void quantize_rgb(undefined8 param_1,undefined8 param_2,undefined1 (*param_3) [16],
                 undefined1 (*param_4) [16],int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  undefined1 auVar9 [16];
  uint uVar12;
  undefined1 auVar10 [16];
  uint uVar13;
  undefined1 auVar11 [16];
  float fVar14;
  float fVar15;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uVar20;
  float fVar21;
  float fVar22;
  
  param_5 = param_5 + -4;
  fVar14 = (float)param_2;
  fVar15 = (float)((ulong)param_2 >> 0x20);
  fVar21 = (float)param_1;
  fVar22 = (float)((ulong)param_1 >> 0x20);
  do {
    auVar9._0_4_ = (int)(fVar21 + _LC0);
    auVar9._4_4_ = (int)(fVar22 + _LC0);
    auVar9._8_4_ = (int)(in_XMM0_Dc + _LC0);
    auVar9._12_4_ = (int)(in_XMM0_Dd + _LC0);
    auVar16._0_4_ = -(uint)(0 < auVar9._0_4_);
    auVar16._4_4_ = -(uint)(0 < auVar9._4_4_);
    auVar16._8_4_ = -(uint)(0 < auVar9._8_4_);
    auVar16._12_4_ = -(uint)(0 < auVar9._12_4_);
    auVar16 = auVar16 & auVar9;
    uVar8 = auVar16._0_4_ * __LC10;
    uVar13 = auVar16._4_4_ * _UNK_00103744;
    uVar12 = (uint)((auVar16._8_8_ & 0xffffffff) * (ulong)_UNK_00103748);
    in_XMM0_Dd = in_XMM0_Dd + _UNK_0010376c;
    uVar5 = -(uint)(_LC4 <= fVar21 - (float)auVar16._0_4_);
    uVar6 = -(uint)(_LC4 <= fVar22 - (float)auVar16._4_4_);
    uVar7 = -(uint)(_LC4 <= in_XMM0_Dc - (float)auVar16._8_4_);
    uVar5 = CONCAT31(0,(&color_unquant_to_uquant_tables)
                       [(long)(int)(uVar8 + __LC12 & uVar5 | ~uVar5 & uVar8) + (long)param_5 * 0x200
                       ]);
    bVar1 = (&color_unquant_to_uquant_tables)
            [(long)(int)(uVar13 + _UNK_00103754 & uVar6 | ~uVar6 & uVar13) + (long)param_5 * 0x200];
    bVar2 = (&color_unquant_to_uquant_tables)
            [(long)(int)(uVar12 + _UNK_00103758 & uVar7 | ~uVar7 & uVar12) + (long)param_5 * 0x200];
    auVar17[4] = bVar1;
    auVar17._0_4_ = uVar5;
    auVar17._5_3_ = 0;
    auVar17[8] = bVar2;
    auVar17._9_7_ = 0;
    auVar10._0_4_ = (int)(fVar14 + _LC0);
    auVar10._4_4_ = (int)(fVar15 + _LC0);
    auVar10._8_4_ = (int)(in_XMM1_Dc + _LC0);
    auVar10._12_4_ = (int)(in_XMM1_Dd + _LC0);
    auVar18._0_4_ = -(uint)(auVar10._0_4_ < __LC16);
    auVar18._4_4_ = -(uint)(auVar10._4_4_ < _UNK_00103774);
    auVar18._8_4_ = -(uint)(auVar10._8_4_ < _UNK_00103778);
    auVar18._12_4_ = -(uint)(auVar10._12_4_ < _UNK_0010377c);
    auVar19._4_4_ = _UNK_00103774;
    auVar19._0_4_ = __LC16;
    auVar19._8_4_ = _UNK_00103778;
    auVar19._12_4_ = _UNK_0010377c;
    auVar19 = auVar18 & auVar10 | ~auVar18 & auVar19;
    uVar12 = auVar19._0_4_ * __LC10;
    uVar20 = auVar19._4_4_ * _UNK_00103744;
    uVar13 = (uint)((auVar19._8_8_ & 0xffffffff) * (ulong)_UNK_00103748);
    in_XMM1_Dd = in_XMM1_Dd + _UNK_0010378c;
    uVar6 = -(uint)(_LC4 <= fVar14 - (float)auVar19._0_4_);
    uVar7 = -(uint)(_LC4 <= fVar15 - (float)auVar19._4_4_);
    uVar8 = -(uint)(_LC4 <= in_XMM1_Dc - (float)auVar19._8_4_);
    uVar6 = CONCAT31(0,(&color_unquant_to_uquant_tables)
                       [(long)(int)(uVar12 + __LC12 & uVar6 | ~uVar6 & uVar12) +
                        (long)param_5 * 0x200]);
    bVar3 = (&color_unquant_to_uquant_tables)
            [(long)(int)(uVar20 + _UNK_00103754 & uVar7 | ~uVar7 & uVar20) + (long)param_5 * 0x200];
    bVar4 = (&color_unquant_to_uquant_tables)
            [(long)(int)(uVar13 + _UNK_00103758 & uVar8 | ~uVar8 & uVar13) + (long)param_5 * 0x200];
    auVar11[4] = bVar3;
    auVar11._0_4_ = uVar6;
    auVar11._5_3_ = 0;
    auVar11[8] = bVar4;
    auVar11._9_7_ = 0;
    fVar14 = fVar14 + __LC17;
    fVar15 = fVar15 + _UNK_00103784;
    in_XMM1_Dc = in_XMM1_Dc + _UNK_00103788;
    fVar21 = fVar21 + __LC13;
    fVar22 = fVar22 + _UNK_00103764;
    in_XMM0_Dc = in_XMM0_Dc + _UNK_00103768;
  } while (uVar6 + bVar3 + (uint)bVar4 < uVar5 + bVar1 + (uint)bVar2);
  *param_3 = auVar17;
  *param_4 = auVar11;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* try_quantize_rgb_delta_blue_contract(vfloat4, vfloat4, vint4&, vint4&, quant_method) */

undefined8
try_quantize_rgb_delta_blue_contract
          (undefined8 param_1,undefined8 param_2,undefined1 (*param_3) [16],
          undefined1 (*param_4) [16],int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  undefined4 in_EAX;
  int iVar8;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar13;
  int iVar14;
  undefined1 auVar12 [16];
  float fVar15;
  float fVar17;
  float in_XMM1_Dc;
  float fVar18;
  float in_XMM1_Dd;
  float fVar19;
  undefined1 auVar16 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar27;
  int iVar28;
  float fVar29;
  int iVar30;
  float fVar31;
  undefined1 auVar26 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  int local_28;
  int iStack_24;
  int iStack_20;
  undefined8 local_18;
  
  fVar17 = (float)((ulong)param_2 >> 0x20);
  fVar27 = (float)((ulong)param_1 >> 0x20);
  fVar15 = ((float)param_2 - in_XMM1_Dc) + (float)param_2;
  fVar17 = (fVar17 - in_XMM1_Dc) + fVar17;
  fVar18 = (in_XMM1_Dc - in_XMM1_Dc) + in_XMM1_Dc;
  fVar19 = (in_XMM1_Dd - in_XMM1_Dd) + in_XMM1_Dd;
  fVar25 = ((float)param_1 - in_XMM0_Dc) + (float)param_1;
  fVar27 = (fVar27 - in_XMM0_Dc) + fVar27;
  fVar29 = (in_XMM0_Dc - in_XMM0_Dc) + in_XMM0_Dc;
  fVar31 = (in_XMM0_Dd - in_XMM0_Dd) + in_XMM0_Dd;
  auVar32._4_4_ = -(uint)(_LC3 < fVar17);
  auVar32._0_4_ = -(uint)(_LC3 < fVar15);
  auVar32._8_4_ = -(uint)(_LC3 < fVar18);
  auVar32._12_4_ = -(uint)(_LC3 < fVar19);
  auVar22._4_4_ = -(uint)(fVar17 < 0.0);
  auVar22._0_4_ = -(uint)(fVar15 < 0.0);
  auVar22._8_4_ = -(uint)(fVar18 < 0.0);
  auVar22._12_4_ = -(uint)(fVar19 < 0.0);
  auVar20._4_4_ = -(uint)(_LC3 < fVar27);
  auVar20._0_4_ = -(uint)(_LC3 < fVar25);
  auVar20._8_4_ = -(uint)(_LC3 < fVar29);
  auVar20._12_4_ = -(uint)(_LC3 < fVar31);
  auVar33._4_4_ = -(uint)(fVar27 < 0.0);
  auVar33._0_4_ = -(uint)(fVar25 < 0.0);
  auVar33._8_4_ = -(uint)(fVar29 < 0.0);
  auVar33._12_4_ = -(uint)(fVar31 < 0.0);
  iVar8 = movmskps(in_EAX,auVar22 | auVar32 | auVar20 | auVar33);
  if (iVar8 == 0) {
    auVar35._4_4_ = _UNK_00103774;
    auVar35._0_4_ = __LC16;
    auVar35._8_4_ = _UNK_00103778;
    auVar35._12_4_ = _UNK_0010377c;
    param_5 = param_5 + -4;
    auVar21._0_4_ = (int)(fVar15 + _LC0) << 1;
    auVar21._4_4_ = (int)(fVar17 + _LC0) << 1;
    auVar21._8_4_ = (int)(fVar18 + _LC0) << 1;
    auVar21._12_4_ = (int)(fVar19 + _LC0) << 1;
    auVar35 = auVar35 & auVar21;
    bVar1 = (&color_unquant_to_uquant_tables)
            [(long)(auVar35._0_4_ * __LC10 + __LC12) + (long)param_5 * 0x200];
    auVar16._1_3_ = 0;
    auVar16[0] = bVar1;
    bVar2 = (&color_unquant_to_uquant_tables)
            [(long)(auVar35._4_4_ * _UNK_00103744 + _UNK_00103754) + (long)param_5 * 0x200];
    bVar3 = (&color_unquant_to_uquant_tables)
            [(long)((int)((auVar35._8_8_ & 0xffffffff) * (_UNK_00103748 & 0xffffffff)) +
                   _UNK_00103758) + (long)param_5 * 0x200];
    auVar16[4] = bVar2;
    auVar16._5_3_ = 0;
    auVar16[8] = bVar3;
    auVar16._9_7_ = 0;
    auVar22 = auVar21 & __LC20 | auVar16;
    iVar8 = (int)(fVar25 + _LC0) * 2 - auVar22._0_4_;
    iVar28 = (int)(fVar27 + _LC0) * 2 - auVar22._4_4_;
    iVar30 = (int)(fVar29 + _LC0) * 2 - auVar22._8_4_;
    local_18 = CONCAT44(iVar28,iVar8);
    auVar38._0_4_ = -(uint)(__LC25 < iVar8);
    auVar38._4_4_ = -(uint)(_UNK_001037a4 < iVar28);
    auVar38._8_4_ = -(uint)(_UNK_001037a8 < iVar30);
    auVar38._12_4_ = -(uint)(_UNK_001037ac < 0);
    auVar40._0_4_ = -(uint)(iVar8 < __LC22);
    auVar40._4_4_ = -(uint)(iVar28 < _UNK_001037b4);
    auVar40._8_4_ = -(uint)(iVar30 < _UNK_001037b8);
    auVar40._12_4_ = -(uint)(0 < _UNK_001037bc);
    iVar8 = movmskps(iVar30,auVar38 | auVar40);
    if (iVar8 == 0) {
      auVar7._8_4_ = iVar30;
      auVar7._0_8_ = local_18;
      auVar7._12_4_ = 0;
      auVar22 = auVar22 & __LC20;
      auVar23._0_4_ = auVar22._0_4_ >> 1;
      auVar23._4_4_ = auVar22._4_4_ >> 1;
      auVar23._8_4_ = auVar22._8_4_ >> 1;
      auVar23._12_4_ = auVar22._12_4_ >> 1;
      auVar23 = auVar23 | auVar7 & __LC23;
      auVar39._8_4_ = 0xffffffff;
      auVar39._0_8_ = 0xffffffffffffffff;
      auVar39._12_4_ = 0xffffffff;
      bVar4 = (&color_unquant_to_uquant_tables)
              [(long)(__LC10 * auVar23._0_4_ + __LC12) + (long)param_5 * 0x200];
      auVar34._1_3_ = 0;
      auVar34[0] = bVar4;
      bVar5 = (&color_unquant_to_uquant_tables)
              [(long)(_UNK_00103744 * auVar23._4_4_ + _UNK_00103754) + (long)param_5 * 0x200];
      bVar6 = (&color_unquant_to_uquant_tables)
              [(long)((int)((_UNK_00103748 & 0xffffffff) * (ulong)auVar23._8_4_) + _UNK_00103758) +
               (long)param_5 * 0x200];
      auVar34[4] = bVar5;
      auVar34._5_3_ = 0;
      auVar34[8] = bVar6;
      auVar34._9_7_ = 0;
      auVar22 = (auVar23 ^ auVar34) & __LC24;
      local_28 = auVar22._0_4_;
      iStack_24 = auVar22._4_4_;
      iStack_20 = auVar22._8_4_;
      auVar9._0_4_ = -(uint)(local_28 == 0);
      auVar9._4_4_ = -(uint)(iStack_24 == 0);
      auVar9._8_4_ = -(uint)(iStack_20 == 0);
      auVar9._12_4_ = 0xffffffff;
      iVar8 = movmskps(iStack_20,auVar9 ^ auVar39);
      if (iVar8 == 0) {
        auVar36._4_4_ = _UNK_001037a4;
        auVar36._0_4_ = __LC25;
        auVar36._8_4_ = _UNK_001037a8;
        auVar36._12_4_ = _UNK_001037ac;
        auVar10._1_3_ = 0;
        auVar10[0] = bVar4 >> 1;
        auVar10[4] = bVar5 >> 1;
        auVar10._5_3_ = 0;
        auVar10[8] = bVar6 >> 1;
        auVar10._9_7_ = 0;
        auVar36 = auVar36 & auVar10;
        auVar10 = auVar10 & __LC26;
        auVar11._0_4_ = -(uint)(auVar10._0_4_ == 0);
        auVar11._4_4_ = -(uint)(auVar10._4_4_ == 0);
        auVar11._8_4_ = -(uint)(auVar10._8_4_ == 0);
        auVar11._12_4_ = -(uint)(auVar10._12_4_ == 0);
        auVar37._0_4_ = auVar36._0_4_ + __LC22;
        auVar37._4_4_ = auVar36._4_4_ + _UNK_001037b4;
        auVar37._8_4_ = auVar36._8_4_ + _UNK_001037b8;
        auVar37._12_4_ = auVar36._12_4_ + _UNK_001037bc;
        auVar22 = (auVar11 ^ auVar39) & auVar37 | ~(auVar11 ^ auVar39) & auVar36;
        iVar8 = auVar22._0_4_ + auVar22._4_4_ + auVar22._8_4_;
        if (iVar8 < 0) {
          auVar26._1_3_ = 0;
          auVar26[0] = bVar1 >> 1;
          auVar26[4] = bVar2 >> 1;
          auVar26._5_3_ = 0;
          auVar26[8] = bVar3 >> 1;
          auVar26._9_7_ = 0;
          auVar26 = __LC27 & auVar34 | auVar26;
          iVar28 = auVar22._0_4_ + auVar26._0_4_;
          iVar30 = auVar22._4_4_ + auVar26._4_4_;
          iVar13 = auVar22._8_4_ + auVar26._8_4_;
          iVar14 = auVar22._12_4_ + auVar26._12_4_;
          auVar24._0_4_ = -(uint)(iVar28 < 0);
          auVar24._4_4_ = -(uint)(iVar30 < 0);
          auVar24._8_4_ = -(uint)(iVar13 < 0);
          auVar24._12_4_ = -(uint)(iVar14 < 0);
          auVar12._0_4_ = -(uint)(__LC16 < iVar28);
          auVar12._4_4_ = -(uint)(_UNK_00103774 < iVar30);
          auVar12._8_4_ = -(uint)(_UNK_00103778 < iVar13);
          auVar12._12_4_ = -(uint)(_UNK_0010377c < iVar14);
          iVar8 = movmskps(iVar8,auVar24 | auVar12);
          if (iVar8 == 0) {
            *param_3 = auVar16;
            *param_4 = auVar34;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* try_quantize_rgb_delta(vfloat4, vfloat4, vint4&, vint4&, quant_method) */

undefined8
try_quantize_rgb_delta
          (undefined8 param_1,undefined8 param_2,undefined1 (*param_3) [16],
          undefined1 (*param_4) [16],int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iVar14;
  int iVar15;
  undefined1 auVar13 [16];
  int iVar16;
  int iVar19;
  float in_XMM1_Dc;
  int iVar20;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  int local_28;
  int iStack_24;
  int iStack_20;
  undefined8 local_18;
  
  param_5 = param_5 + -4;
  auVar23._4_4_ = _UNK_00103774;
  auVar23._0_4_ = __LC16;
  auVar23._8_4_ = _UNK_00103778;
  auVar23._12_4_ = _UNK_0010377c;
  auVar8._0_4_ = (int)((float)param_1 + _LC0) << 1;
  auVar8._4_4_ = (int)((float)((ulong)param_1 >> 0x20) + _LC0) << 1;
  auVar8._8_4_ = (int)(in_XMM0_Dc + _LC0) << 1;
  auVar8._12_4_ = (int)(in_XMM0_Dd + _LC0) << 1;
  auVar23 = auVar23 & auVar8;
  bVar1 = (&color_unquant_to_uquant_tables)
          [(long)(auVar23._0_4_ * __LC10 + __LC12) + (long)param_5 * 0x200];
  auVar21._1_3_ = 0;
  auVar21[0] = bVar1;
  bVar2 = (&color_unquant_to_uquant_tables)
          [(long)(auVar23._4_4_ * _UNK_00103744 + _UNK_00103754) + (long)param_5 * 0x200];
  bVar3 = (&color_unquant_to_uquant_tables)
          [(long)((int)((auVar23._8_8_ & 0xffffffff) * (_UNK_00103748 & 0xffffffff)) + _UNK_00103758
                 ) + (long)param_5 * 0x200];
  auVar21[4] = bVar2;
  auVar21._5_3_ = 0;
  auVar21[8] = bVar3;
  auVar21._9_7_ = 0;
  auVar23 = auVar8 & __LC20 | auVar21;
  iVar16 = (int)((float)param_2 + _LC0) * 2 - auVar23._0_4_;
  iVar19 = (int)((float)((ulong)param_2 >> 0x20) + _LC0) * 2 - auVar23._4_4_;
  iVar20 = (int)(in_XMM1_Dc + _LC0) * 2 - auVar23._8_4_;
  local_18 = CONCAT44(iVar19,iVar16);
  auVar17._0_4_ = -(uint)(__LC25 < iVar16);
  auVar17._4_4_ = -(uint)(_UNK_001037a4 < iVar19);
  auVar17._8_4_ = -(uint)(_UNK_001037a8 < iVar20);
  auVar17._12_4_ = -(uint)(_UNK_001037ac < 0);
  auVar28._0_4_ = -(uint)(iVar16 < __LC22);
  auVar28._4_4_ = -(uint)(iVar19 < _UNK_001037b4);
  auVar28._8_4_ = -(uint)(iVar20 < _UNK_001037b8);
  auVar28._12_4_ = -(uint)(0 < _UNK_001037bc);
  iVar16 = movmskps(iVar20,auVar17 | auVar28);
  if (iVar16 == 0) {
    auVar7._8_4_ = iVar20;
    auVar7._0_8_ = local_18;
    auVar7._12_4_ = 0;
    auVar23 = auVar23 & __LC20;
    auVar9._0_4_ = auVar23._0_4_ >> 1;
    auVar9._4_4_ = auVar23._4_4_ >> 1;
    auVar9._8_4_ = auVar23._8_4_ >> 1;
    auVar9._12_4_ = auVar23._12_4_ >> 1;
    auVar9 = auVar9 | auVar7 & __LC23;
    bVar4 = (&color_unquant_to_uquant_tables)
            [(long)(__LC10 * auVar9._0_4_ + __LC12) + (long)param_5 * 0x200];
    auVar18._1_3_ = 0;
    auVar18[0] = bVar4;
    bVar5 = (&color_unquant_to_uquant_tables)
            [(long)(auVar9._4_4_ * _UNK_00103744 + _UNK_00103754) + (long)param_5 * 0x200];
    bVar6 = (&color_unquant_to_uquant_tables)
            [(long)((int)((_UNK_00103748 & 0xffffffff) * (ulong)auVar9._8_4_) + _UNK_00103758) +
             (long)param_5 * 0x200];
    auVar18[4] = bVar5;
    auVar18._5_3_ = 0;
    auVar27._8_4_ = 0xffffffff;
    auVar27._0_8_ = 0xffffffffffffffff;
    auVar27._12_4_ = 0xffffffff;
    auVar18[8] = bVar6;
    auVar18._9_7_ = 0;
    auVar23 = (auVar9 ^ auVar18) & __LC24;
    local_28 = auVar23._0_4_;
    iStack_24 = auVar23._4_4_;
    iStack_20 = auVar23._8_4_;
    auVar10._0_4_ = -(uint)(local_28 == 0);
    auVar10._4_4_ = -(uint)(iStack_24 == 0);
    auVar10._8_4_ = -(uint)(iStack_20 == 0);
    auVar10._12_4_ = 0xffffffff;
    iVar16 = movmskps(iStack_20,auVar10 ^ auVar27);
    if (iVar16 == 0) {
      auVar24._4_4_ = _UNK_001037a4;
      auVar24._0_4_ = __LC25;
      auVar24._8_4_ = _UNK_001037a8;
      auVar24._12_4_ = _UNK_001037ac;
      auVar11._1_3_ = 0;
      auVar11[0] = bVar4 >> 1;
      auVar11[4] = bVar5 >> 1;
      auVar11._5_3_ = 0;
      auVar11[8] = bVar6 >> 1;
      auVar11._9_7_ = 0;
      auVar24 = auVar24 & auVar11;
      auVar11 = auVar11 & __LC26;
      auVar12._0_4_ = -(uint)(auVar11._0_4_ == 0);
      auVar12._4_4_ = -(uint)(auVar11._4_4_ == 0);
      auVar12._8_4_ = -(uint)(auVar11._8_4_ == 0);
      auVar12._12_4_ = -(uint)(auVar11._12_4_ == 0);
      auVar25._0_4_ = auVar24._0_4_ + __LC22;
      auVar25._4_4_ = auVar24._4_4_ + _UNK_001037b4;
      auVar25._8_4_ = auVar24._8_4_ + _UNK_001037b8;
      auVar25._12_4_ = auVar24._12_4_ + _UNK_001037bc;
      auVar23 = (auVar12 ^ auVar27) & auVar25 | ~(auVar12 ^ auVar27) & auVar24;
      iVar16 = auVar23._0_4_ + auVar23._4_4_ + auVar23._8_4_;
      if (-1 < iVar16) {
        auVar26._1_3_ = 0;
        auVar26[0] = bVar1 >> 1;
        auVar26[4] = bVar2 >> 1;
        auVar26._5_3_ = 0;
        auVar26[8] = bVar3 >> 1;
        auVar26._9_7_ = 0;
        auVar26 = __LC27 & auVar18 | auVar26;
        iVar19 = auVar23._0_4_ + auVar26._0_4_;
        iVar20 = auVar23._4_4_ + auVar26._4_4_;
        iVar14 = auVar23._8_4_ + auVar26._8_4_;
        iVar15 = auVar23._12_4_ + auVar26._12_4_;
        auVar22._0_4_ = -(uint)(iVar19 < 0);
        auVar22._4_4_ = -(uint)(iVar20 < 0);
        auVar22._8_4_ = -(uint)(iVar14 < 0);
        auVar22._12_4_ = -(uint)(iVar15 < 0);
        auVar13._0_4_ = -(uint)(__LC16 < iVar19);
        auVar13._4_4_ = -(uint)(_UNK_00103774 < iVar20);
        auVar13._8_4_ = -(uint)(_UNK_00103778 < iVar14);
        auVar13._12_4_ = -(uint)(_UNK_0010377c < iVar15);
        iVar16 = movmskps(iVar16,auVar22 | auVar13);
        if (iVar16 == 0) {
          *param_3 = auVar21;
          *param_4 = auVar18;
          return 1;
        }
      }
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* try_quantize_rgb_blue_contract(vfloat4, vfloat4, vint4&, vint4&, quant_method) */

undefined8
try_quantize_rgb_blue_contract
          (undefined8 param_1,undefined8 param_2,undefined1 (*param_3) [16],
          undefined1 (*param_4) [16],int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 in_EAX;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar13;
  float in_XMM0_Dc;
  float fVar14;
  float in_XMM0_Dd;
  float fVar15;
  undefined1 auVar12 [16];
  float fVar16;
  float fVar17;
  float in_XMM1_Dc;
  float fVar18;
  float in_XMM1_Dd;
  float fVar19;
  undefined1 auVar20 [16];
  uint uVar21;
  uint uVar23;
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  
  fVar17 = (float)((ulong)param_2 >> 0x20);
  fVar13 = (float)((ulong)param_1 >> 0x20);
  uVar6 = 0;
  fVar11 = ((float)param_1 - in_XMM0_Dc) + (float)param_1;
  fVar13 = (fVar13 - in_XMM0_Dc) + fVar13;
  fVar14 = (in_XMM0_Dc - in_XMM0_Dc) + in_XMM0_Dc;
  fVar15 = (in_XMM0_Dd - in_XMM0_Dd) + in_XMM0_Dd;
  fVar16 = ((float)param_2 - in_XMM1_Dc) + (float)param_2;
  fVar17 = (fVar17 - in_XMM1_Dc) + fVar17;
  fVar18 = (in_XMM1_Dc - in_XMM1_Dc) + in_XMM1_Dc;
  fVar19 = (in_XMM1_Dd - in_XMM1_Dd) + in_XMM1_Dd;
  auVar24._4_4_ = -(uint)(_LC3 < fVar13);
  auVar24._0_4_ = -(uint)(_LC3 < fVar11);
  auVar24._8_4_ = -(uint)(_LC3 < fVar14);
  auVar24._12_4_ = -(uint)(_LC3 < fVar15);
  auVar20._4_4_ = -(uint)(fVar13 < 0.0);
  auVar20._0_4_ = -(uint)(fVar11 < 0.0);
  auVar20._8_4_ = -(uint)(fVar14 < 0.0);
  auVar20._12_4_ = -(uint)(fVar15 < 0.0);
  auVar22._4_4_ = -(uint)(_LC3 < fVar17);
  auVar22._0_4_ = -(uint)(_LC3 < fVar16);
  auVar22._8_4_ = -(uint)(_LC3 < fVar18);
  auVar22._12_4_ = -(uint)(_LC3 < fVar19);
  auVar25._4_4_ = -(uint)(fVar17 < 0.0);
  auVar25._0_4_ = -(uint)(fVar16 < 0.0);
  auVar25._8_4_ = -(uint)(fVar18 < 0.0);
  auVar25._12_4_ = -(uint)(fVar19 < 0.0);
  iVar5 = movmskps(in_EAX,auVar20 | auVar24 | auVar22 | auVar25);
  if (iVar5 == 0) {
    param_5 = param_5 + -4;
    auVar26._0_4_ = (int)(fVar11 + _LC0);
    auVar26._4_4_ = (int)(fVar13 + _LC0);
    auVar26._8_4_ = (int)(fVar14 + _LC0);
    auVar26._12_4_ = (int)(fVar15 + _LC0);
    uVar10 = (uint)((auVar26._8_8_ & 0xffffffff) * (_UNK_00103748 & 0xffffffff));
    uVar7 = -(uint)(_LC4 <= fVar11 - (float)auVar26._0_4_);
    uVar8 = -(uint)(_LC4 <= fVar13 - (float)auVar26._4_4_);
    uVar9 = -(uint)(_LC4 <= fVar14 - (float)auVar26._8_4_);
    uVar7 = CONCAT31(0,(&color_unquant_to_uquant_tables)
                       [(long)(int)(auVar26._0_4_ * __LC10 + __LC12 & uVar7 |
                                   ~uVar7 & auVar26._0_4_ * __LC10) + (long)param_5 * 0x200]);
    bVar1 = (&color_unquant_to_uquant_tables)
            [(long)(int)(auVar26._4_4_ * _UNK_00103744 + _UNK_00103754 & uVar8 |
                        ~uVar8 & auVar26._4_4_ * _UNK_00103744) + (long)param_5 * 0x200];
    bVar2 = (&color_unquant_to_uquant_tables)
            [(long)(int)(uVar10 + _UNK_00103758 & uVar9 | ~uVar9 & uVar10) + (long)param_5 * 0x200];
    auVar27[4] = bVar1;
    auVar27._0_4_ = uVar7;
    auVar27._5_3_ = 0;
    auVar27[8] = bVar2;
    auVar27._9_7_ = 0;
    uVar21 = __LC10 * (int)(_LC0 + fVar16);
    uVar28 = _UNK_00103744 * (int)(_LC0 + fVar17);
    uVar8 = -(uint)(_LC4 <= fVar16 - (float)(int)(_LC0 + fVar16));
    uVar9 = -(uint)(_LC4 <= fVar17 - (float)(int)(_LC0 + fVar17));
    uVar10 = -(uint)(_LC4 <= fVar18 - (float)(int)(_LC0 + fVar18));
    uVar23 = (uint)((_UNK_00103748 & 0xffffffff) * (ulong)(uint)(int)(_LC0 + fVar18));
    uVar8 = CONCAT31(0,(&color_unquant_to_uquant_tables)
                       [(long)(int)(uVar21 + __LC12 & uVar8 | ~uVar8 & uVar21) +
                        (long)param_5 * 0x200]);
    bVar3 = (&color_unquant_to_uquant_tables)
            [(long)(int)(uVar28 + _UNK_00103754 & uVar9 | ~uVar9 & uVar28) + (long)param_5 * 0x200];
    bVar4 = (&color_unquant_to_uquant_tables)
            [(long)(int)(uVar23 + _UNK_00103758 & uVar10 | ~uVar10 & uVar23) + (long)param_5 * 0x200
            ];
    auVar12[4] = bVar3;
    auVar12._0_4_ = uVar8;
    auVar12._5_3_ = 0;
    auVar12[8] = bVar4;
    auVar12._9_7_ = 0;
    if (uVar7 + bVar1 + (uint)bVar2 < uVar8 + bVar3 + (uint)bVar4) {
      *param_3 = auVar12;
      uVar6 = 1;
      *param_4 = auVar27;
    }
  }
  return uVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* quantize_hdr_rgb(vfloat4, vfloat4, unsigned char*, quant_method) */

void quantize_hdr_rgb(undefined4 *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  float *pfVar8;
  float *pfVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  byte bVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  undefined4 *puVar28;
  long lVar29;
  long lVar30;
  uint uVar31;
  uint uVar32;
  long in_FS_OFFSET;
  uint uVar33;
  float fVar34;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 in_XMM0 [16];
  undefined1 auVar35 [16];
  float fVar38;
  float fVar40;
  float fVar41;
  undefined1 in_XMM1 [16];
  undefined1 auVar39 [16];
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  undefined1 auVar48 [12];
  float fVar49;
  float fVar50;
  float fVar51;
  float *local_90;
  float local_58 [4];
  undefined8 local_48;
  long local_40 [2];
  
  fVar6 = _LC34;
  fVar5 = _LC0;
  auVar39 = maxps(in_XMM1,(undefined1  [16])0x0);
  auVar35 = maxps(in_XMM0,(undefined1  [16])0x0);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  auVar45._4_4_ = _LC28;
  auVar45._0_4_ = _LC28;
  auVar45._8_4_ = _LC28;
  auVar45._12_4_ = _LC28;
  auVar39 = minps(auVar39,auVar45);
  auVar35 = minps(auVar35,auVar45);
  auVar48 = auVar35._0_12_;
  fVar38 = auVar39._0_4_;
  fVar40 = auVar39._4_4_;
  fVar41 = auVar39._8_4_;
  uVar42 = auVar39._12_4_;
  fVar34 = auVar35._0_4_;
  uVar36 = auVar35._4_4_;
  uVar37 = auVar35._8_4_;
  fVar44 = fVar41;
  if ((fVar38 <= fVar40) || (uVar33 = 0, fVar38 <= fVar41)) {
    if (fVar41 < fVar40) {
      uVar33 = 1;
      auVar48._4_4_ = fVar34;
      auVar48._0_4_ = uVar36;
      auVar48._8_4_ = uVar37;
      fVar4 = fVar38;
      fVar49 = fVar40;
      goto joined_r0x00101055;
    }
    auVar39._4_4_ = fVar41;
    auVar39._0_4_ = fVar41;
    auVar39._8_4_ = uVar42;
    auVar39._12_4_ = uVar42;
    uVar33 = 2;
    auVar48._4_4_ = uVar36;
    auVar48._0_4_ = uVar37;
    auVar48._8_4_ = fVar34;
    fVar44 = fVar38;
  }
  fVar49 = auVar39._0_4_;
  fVar4 = fVar40;
joined_r0x00101055:
  fVar43 = _LC28;
  if ((fVar49 <= _LC28) && (fVar43 = fVar49, fVar49 <= 0.0)) {
    fVar43 = 0.0;
  }
  fVar49 = fVar43 - auVar48._0_4_;
  uVar18 = 7;
  lVar30 = (long)(param_2 + -4);
  puVar28 = (undefined4 *)
            (quantize_hdr_rgb(vfloat4,vfloat4,unsigned_char*,quant_method)::mode_bits + 0x74);
  local_90 = (float *)(quantize_hdr_rgb(vfloat4,vfloat4,unsigned_char*,quant_method)::mode_cutoffs +
                      0x70);
LAB_00100e08:
  if ((((*local_90 < fVar43 - fVar4) || (*local_90 < fVar43 - fVar44)) || (local_90[1] < fVar49)) ||
     ((local_90[2] < (float)((uint)(((fVar43 - (fVar43 - fVar4)) - fVar49) - auVar48._4_4_) & _LC31)
      || (local_90[2] <
          (float)((uint)(((fVar43 - (fVar43 - fVar44)) - fVar49) - auVar48._8_4_) & _LC31)))))
  goto LAB_00101070;
  fVar1 = *(float *)(quantize_hdr_rgb(vfloat4,vfloat4,unsigned_char*,quant_method)::mode_scales +
                    uVar18 * 4);
  fVar2 = *(float *)(quantize_hdr_rgb(vfloat4,vfloat4,unsigned_char*,quant_method)::mode_rscales +
                    uVar18 * 4);
  uVar24 = (uint)(fVar1 * fVar43 + _LC0);
  uVar31 = (uint)(byte)(&DAT_00104001)[(ulong)(byte)uVar24 * 2 + lVar30 * 0x200] |
           uVar24 & 0xffffff00;
  fVar46 = (float)(int)uVar31 * fVar2;
  fVar50 = fVar46 - auVar48._0_4_;
  fVar47 = _LC28;
  if ((fVar50 <= _LC28) && (fVar47 = fVar50, fVar50 <= 0.0)) {
    fVar47 = 0.0;
  }
  uVar25 = (uint)(fVar47 * fVar1 + _LC0);
  if (1 << ((byte)puVar28[1] & 0x1f) <= (int)uVar25) goto LAB_00101070;
  uVar16 = (uint)uVar18;
  uVar13 = (ulong)(uVar16 << 7 | (int)uVar31 >> 2 & 0x40U | uVar25 & 0x3f);
  do {
    while( true ) {
      bVar7 = (byte)uVar13;
      bVar3 = (&DAT_00104001)[(uVar13 & 0xff) * 2 + lVar30 * 0x200];
      if ((bVar7 & 0xc0) < (bVar3 & 0xc0)) break;
      uVar13 = (ulong)(byte)(bVar7 - ((bVar3 & 0xc0) < (bVar7 & 0xc0)));
      if ((bVar3 ^ bVar7) < 0x40) goto LAB_00100f57;
    }
    uVar13 = (ulong)((int)uVar13 - 1);
  } while (0x3f < (bVar3 ^ bVar7));
LAB_00100f57:
  fVar50 = fVar46 - fVar4;
  fVar51 = fVar46 - fVar44;
  fVar47 = _LC28;
  if ((fVar50 <= _LC28) && (fVar47 = fVar50, fVar50 <= 0.0)) {
    fVar47 = 0.0;
  }
  fVar50 = _LC28;
  if ((fVar51 <= _LC28) && (fVar50 = fVar51, fVar51 <= 0.0)) {
    fVar50 = 0.0;
  }
  uVar21 = (uint)(fVar47 * fVar1 + _LC0);
  uVar32 = (uint)(fVar50 * fVar1 + _LC0);
  uVar19 = uVar21;
  if ((int)uVar21 <= (int)uVar32) {
    uVar19 = uVar32;
  }
  if (1 << ((byte)*puVar28 & 0x1f) <= (int)uVar19) goto LAB_00101070;
  uVar17 = (int)uVar31 >> 9;
  uVar19 = uVar17;
  if ((0xa4UL >> (uVar18 & 0x3f) & 1) == 0) {
    uVar19 = (int)uVar21 >> 6;
  }
  uVar26 = uVar25 & 0xffffffc0 | bVar3 & 0x3f;
  uVar12 = (int)uVar31 >> 10;
  uVar25 = (int)uVar26 >> 6;
  if ((uVar16 & 0xfffffffd) == 5) {
    uVar11 = uVar12 & 1;
  }
  else if (uVar16 == 2) {
    uVar11 = uVar25 & 1;
  }
  else {
    uVar11 = (int)uVar32 >> 6 & 1;
  }
  uVar13 = (ulong)(uVar11 << 6 | ((int)uVar16 >> 2) << 7 | uVar32 & 0x3f);
  uVar27 = (ulong)((uVar19 & 1) << 6 | (uVar16 & 2) << 6 | uVar21 & 0x3f);
  do {
    while( true ) {
      bVar23 = (byte)uVar27;
      bVar7 = (&DAT_00104001)[(uVar27 & 0xff) * 2 + lVar30 * 0x200];
      if ((bVar23 & 0xc0) < (bVar7 & 0xc0)) break;
      uVar27 = (ulong)(byte)(bVar23 - ((bVar7 & 0xc0) < (bVar23 & 0xc0)));
      if ((bVar7 ^ bVar23) < 0x40) goto LAB_001012cc;
    }
    uVar27 = (ulong)((int)uVar27 - 1);
  } while (0x3f < (bVar7 ^ bVar23));
LAB_001012cc:
  do {
    while( true ) {
      bVar10 = (byte)uVar13;
      bVar23 = (&DAT_00104001)[(uVar13 & 0xff) * 2 + lVar30 * 0x200];
      if ((bVar10 & 0xc0) < (bVar23 & 0xc0)) break;
      uVar13 = (ulong)(byte)(bVar10 - ((bVar23 & 0xc0) < (bVar10 & 0xc0)));
      if ((bVar23 ^ bVar10) < 0x40) goto LAB_00101311;
    }
    uVar13 = (ulong)((int)uVar13 - 1);
  } while (0x3f < (bVar23 ^ bVar10));
LAB_00101311:
  uVar19 = uVar21 & 0xffffffc0 | bVar7 & 0x3f;
  uVar21 = uVar32 & 0xffffffc0 | bVar23 & 0x3f;
  fVar50 = ((fVar46 - (float)(int)uVar19 * fVar2) - (float)(int)uVar26 * fVar2) - auVar48._4_4_;
  fVar47 = ((fVar46 - (float)(int)uVar21 * fVar2) - (float)(int)uVar26 * fVar2) - auVar48._8_4_;
  fVar2 = _LC28;
  if ((fVar50 <= _LC28) && (fVar2 = fVar50, fVar50 <= _LC29)) {
    fVar2 = _LC29;
  }
  fVar46 = _LC28;
  if ((fVar47 <= _LC28) && (fVar46 = fVar47, fVar47 <= _LC29)) {
    fVar46 = _LC29;
  }
  iVar22 = 1 << ((char)puVar28[2] - 1U & 0x1f);
  uVar11 = (uint)(fVar2 * fVar1 + _LC0);
  uVar32 = -uVar11;
  if (0 < (int)uVar11) {
    uVar32 = uVar11;
  }
  if (iVar22 <= (int)uVar32) goto LAB_00101070;
  uVar20 = (uint)(fVar1 * fVar46 + _LC0);
  uVar32 = -uVar20;
  if (0 < (int)uVar20) {
    uVar32 = uVar20;
  }
  if (iVar22 <= (int)uVar32) goto LAB_00101070;
  switch(uVar18 & 0xffffffff) {
  default:
    uVar31 = (int)uVar11 >> 6 & 1;
    uVar25 = (int)uVar20 >> 6 & 1;
    break;
  case 1:
  case 4:
    uVar31 = (int)uVar19 >> 7;
    uVar25 = (int)uVar21 >> 7;
    goto LAB_001014e5;
  case 3:
    uVar31 = uVar17 & 1;
    uVar25 = uVar25 & 1;
    break;
  case 5:
    uVar31 = (int)uVar26 >> 7 & 1;
    uVar25 = uVar25 & 1;
    break;
  case 6:
  case 7:
    uVar31 = (int)uVar31 >> 0xb;
LAB_001014e5:
    uVar25 = uVar25 & 1;
    uVar31 = uVar31 & 1;
    if ((uVar16 & 0xfffffffd) != 4) break;
    goto LAB_00101502;
  }
  uVar17 = (int)uVar11 >> 5;
  uVar12 = (int)uVar20 >> 5;
LAB_00101502:
  uVar18 = (ulong)((uVar17 & 1) << 5 | uVar31 << 6 | uVar11 & 0x1f | (uVar33 & 1) << 7);
  do {
    bVar14 = (byte)uVar18;
    bVar10 = (&DAT_00104001)[(uVar18 & 0xff) * 2 + lVar30 * 0x200];
    if ((bVar14 & 0xf0) < (bVar10 & 0xf0)) {
      uVar18 = (ulong)((int)uVar18 - 1);
    }
    else {
      uVar18 = (ulong)(byte)(bVar14 - ((bVar10 & 0xf0) < (bVar14 & 0xf0)));
    }
  } while (0xf < (bVar10 ^ bVar14));
  uVar18 = (ulong)((uVar12 & 1) << 5 | uVar25 << 6 | ((int)uVar33 >> 1) << 7 | uVar20 & 0x1f);
  do {
    bVar15 = (byte)uVar18;
    bVar14 = (&DAT_00104001)[(uVar18 & 0xff) * 2 + lVar30 * 0x200];
    if ((bVar15 & 0xf0) < (bVar14 & 0xf0)) {
      uVar18 = (ulong)((int)uVar18 - 1);
    }
    else {
      uVar18 = (ulong)(byte)(bVar15 - ((bVar14 & 0xf0) < (bVar15 & 0xf0)));
    }
  } while (0xf < (bVar14 ^ bVar15));
  *param_1 = CONCAT31(CONCAT21(CONCAT11(bVar23,bVar7),bVar3),
                      (&DAT_00104001)[(ulong)(byte)uVar24 * 2 + lVar30 * 0x200]);
  *(byte *)(param_1 + 1) = bVar10;
  *(byte *)((long)param_1 + 5) = bVar14;
  goto LAB_001011b0;
LAB_00101070:
  uVar18 = uVar18 - 1;
  local_90 = local_90 + -4;
  puVar28 = puVar28 + -4;
  if (uVar18 == 0xffffffffffffffff) {
    local_48 = CONCAT44(fVar41,uVar37);
    local_58[0] = fVar34;
    local_58[1] = fVar38;
    local_58[2] = (float)uVar36;
    local_58[3] = fVar40;
    pfVar8 = local_58;
    do {
      fVar38 = (float)((ulong)__LC39 >> 0x20);
      pfVar9 = pfVar8 + 2;
      fVar44 = (float)*(undefined8 *)pfVar8;
      fVar34 = (float)((ulong)*(undefined8 *)pfVar8 >> 0x20);
      uVar33 = -(uint)((float)__LC39 < fVar44);
      uVar24 = -(uint)(fVar38 < fVar34);
      uVar18 = (CONCAT44(-(uint)(0.0 < fVar34),-(uint)(0.0 < fVar44)) | CONCAT44(uVar24,uVar33)) ^
               _LC33;
      *(ulong *)pfVar8 =
           CONCAT44(~uVar24 & ~(uint)(uVar18 >> 0x20) & (uint)fVar34,
                    ~uVar33 & ~(uint)uVar18 & (uint)fVar44) |
           CONCAT44((uint)fVar38 & uVar24,(uint)(float)__LC39 & uVar33);
      pfVar8 = pfVar9;
    } while ((float *)local_40 != pfVar9);
    lVar29 = 0;
    do {
      *(undefined *)((long)param_1 + lVar29) =
           (&color_unquant_to_uquant_tables)
           [(long)((int)(local_58[lVar29] * fVar6 + fVar5) * 2 + 1) + lVar30 * 0x200];
      fVar44 = _LC35;
      lVar29 = lVar29 + 1;
    } while (lVar29 != 4);
    lVar29 = 4;
    do {
      uVar18 = (ulong)((int)(local_58[lVar29] * fVar44 + fVar5) - 0x80);
      do {
        while( true ) {
          bVar7 = (byte)uVar18;
          bVar3 = (&DAT_00104001)[(uVar18 & 0xff) * 2 + lVar30 * 0x200];
          if ((bVar3 & 0xc0) <= (bVar7 & 0xc0)) break;
          uVar18 = (ulong)((int)uVar18 - 1);
          if ((bVar3 ^ bVar7) < 0x40) goto LAB_00101190;
        }
        uVar18 = (ulong)(byte)(bVar7 - ((bVar3 & 0xc0) < (bVar7 & 0xc0)));
      } while (0x3f < (bVar3 ^ bVar7));
LAB_00101190:
      *(byte *)((long)param_1 + lVar29) = bVar3;
      if (lVar29 != 4) {
LAB_001011b0:
        if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      lVar29 = 5;
    } while( true );
  }
  goto LAB_00100e08;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pack_color_endpoints(vfloat4, vfloat4, vfloat4, vfloat4, int, unsigned char*, quant_method) */

undefined8 pack_color_endpoints(undefined4 param_1,ulong *param_2,int param_3)

{
  bool bVar1;
  undefined1 auVar2 [12];
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  undefined2 uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  byte bVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  undefined1 *puVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  undefined8 uVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  long in_FS_OFFSET;
  bool bVar36;
  float fVar37;
  float fVar38;
  undefined1 in_XMM0 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  undefined8 in_XMM3_Qa;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 local_168 [8];
  undefined8 uStack_160;
  float local_158;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  float local_84 [3];
  undefined8 local_78;
  float local_70;
  uint local_68 [4];
  uint local_58 [6];
  long local_40;
  
  fVar37 = (float)((ulong)in_XMM3_Qa >> 0x20);
  auVar39 = maxps(in_XMM0,(undefined1  [16])0x0);
  auVar41 = maxps(in_XMM1,(undefined1  [16])0x0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  auVar40._4_4_ = _LC28;
  auVar40._0_4_ = _LC28;
  auVar40._8_4_ = _LC28;
  auVar40._12_4_ = _LC28;
  auVar40 = minps(auVar39,auVar40);
  auVar39._4_4_ = _LC28;
  auVar39._0_4_ = _LC28;
  auVar39._8_4_ = _LC28;
  auVar39._12_4_ = _LC28;
  auVar39 = minps(auVar41,auVar39);
  fVar43 = auVar40._12_4_;
  fVar45 = auVar40._0_4_ * _LC2;
  fVar46 = auVar40._4_4_ * _LC2;
  fVar47 = auVar40._8_4_ * _LC2;
  fVar48 = fVar43 * _LC2;
  fVar49 = _LC2 * auVar39._0_4_;
  fVar51 = _LC2 * auVar39._4_4_;
  fVar52 = _LC2 * auVar39._8_4_;
  fVar42 = auVar39._12_4_;
  fVar53 = _LC2 * fVar42;
  switch(param_1) {
  case 0:
    fVar43 = (fVar45 + fVar46 + fVar47) * _LC41;
    fVar42 = (fVar49 + fVar51 + fVar52) * _LC41;
    if (fVar42 < fVar43) {
      fVar43 = (fVar43 + fVar42) * _LC0;
      fVar42 = fVar43;
    }
    fVar37 = _LC0 + fVar42;
    bVar36 = fVar42 - (float)(int)fVar37 < _LC4;
    *(undefined *)param_2 =
         (&color_unquant_to_uquant_tables)
         [(long)(int)(((int)(fVar43 + _LC0) * 2 + 1) -
                     (uint)(fVar43 - (float)(int)(fVar43 + _LC0) < _LC4)) +
          (long)(param_3 + -4) * 0x200];
    *(undefined *)((long)param_2 + 1) =
         (&color_unquant_to_uquant_tables)
         [(long)(int)(((int)fVar37 * 2 + 1) - (uint)bVar36) + (long)(param_3 + -4) * 0x200];
  default:
    uVar31 = 0;
    break;
  case 2:
  case 3:
    fVar42 = (auVar40._8_4_ + auVar40._0_4_ + auVar40._4_4_) * _LC41;
    fVar43 = (auVar39._8_4_ + auVar39._0_4_ + auVar39._4_4_) * _LC41;
    if (fVar42 <= fVar43) {
      lVar11 = (long)(param_3 + -4);
      iVar33 = (int)(fVar43 + _LC0);
      iVar24 = (int)(fVar42 + _LC0);
      if (iVar33 - iVar24 < 0x801) goto LAB_00101721;
    }
    else {
      iVar33 = (int)((fVar42 + fVar43) * _LC0 + _LC0);
      iVar24 = iVar33;
LAB_00101721:
      lVar11 = (long)(param_3 + -4);
      uVar15 = iVar24 + 0x10 >> 5;
      if ((int)uVar15 < 0) {
        uVar15 = 0;
      }
      if (0x7ff < (int)uVar15) {
        uVar15 = 0x7ff;
      }
      bVar6 = (&DAT_00104001)[(ulong)(uVar15 & 0x7f) * 2 + lVar11 * 0x200];
      if (bVar6 < 0x80) {
        uVar15 = uVar15 & 0xffffff80 | (uint)bVar6;
        iVar23 = iVar33 + 0x10 >> 5;
        if (iVar23 < 0) {
          iVar23 = 0;
        }
        if (0x7ff < iVar23) {
          iVar23 = 0x7ff;
        }
        uVar34 = iVar23 - uVar15;
        if ((0xf < uVar34) ||
           (uVar34 = (int)uVar15 >> 3 & 0xf0U | uVar34,
           ((uVar34 ^ (byte)(&color_unquant_to_uquant_tables)
                            [(long)(int)(uVar34 * 2 + 1) + lVar11 * 0x200]) & 0xf0) != 0))
        goto LAB_001017b0;
        uVar8 = CONCAT11((&color_unquant_to_uquant_tables)
                         [(long)(int)(uVar34 * 2 + 1) + lVar11 * 0x200],bVar6);
LAB_00101846:
        *(undefined2 *)param_2 = uVar8;
        uVar31 = 3;
        break;
      }
LAB_001017b0:
      uVar15 = iVar24 + 0x20 >> 6;
      if ((int)uVar15 < 0) {
        uVar15 = 0;
      }
      if (0x3ff < (int)uVar15) {
        uVar15 = 0x3ff;
      }
      bVar6 = (byte)uVar15 | 0x80;
      bVar6 = (&color_unquant_to_uquant_tables)
              [(long)(int)(bVar6 + 1 + (uint)bVar6) + lVar11 * 0x200];
      if ((char)bVar6 < '\0') {
        uVar15 = uVar15 & 0xffffff80 | bVar6 & 0x7f;
        iVar23 = iVar33 + 0x20 >> 6;
        if (iVar23 < 0) {
          iVar23 = 0;
        }
        if (0x3ff < iVar23) {
          iVar23 = 0x3ff;
        }
        uVar34 = iVar23 - uVar15;
        if ((uVar34 < 0x20) &&
           (uVar34 = (int)uVar15 >> 2 & 0xe0U | uVar34,
           bVar3 = (&color_unquant_to_uquant_tables)[(long)(int)(uVar34 * 2 + 1) + lVar11 * 0x200],
           ((uVar34 ^ bVar3) & 0xe0) == 0)) {
          uVar8 = CONCAT11(bVar3,bVar6);
          goto LAB_00101846;
        }
      }
    }
    uVar31 = 2;
    iVar23 = iVar24 + 0x80 >> 8;
    if (iVar23 < 0) {
      iVar23 = 0;
    }
    if (0xff < iVar23) {
      iVar23 = 0xff;
    }
    iVar35 = iVar33 + 0x80 >> 8;
    if (iVar35 < 0) {
      iVar35 = 0;
    }
    if (0xff < iVar35) {
      iVar35 = 0xff;
    }
    iVar29 = iVar33 + 0x100 >> 8;
    if (iVar29 < 0) {
      iVar29 = 0;
    }
    if (0xff < iVar29) {
      iVar29 = 0xff;
    }
    iVar25 = iVar24 >> 8;
    if (iVar25 < 0) {
      iVar25 = 0;
    }
    if (0xff < iVar25) {
      iVar25 = 0xff;
    }
    iVar16 = iVar23 * 0x100 - iVar24;
    iVar19 = iVar35 * 0x100 - iVar33;
    iVar24 = (iVar25 * 0x100 + 0x80) - iVar24;
    iVar33 = (iVar29 * 0x100 + -0x80) - iVar33;
    if (iVar16 * iVar16 + iVar19 * iVar19 < iVar24 * iVar24 + iVar33 * iVar33) {
      iVar25 = iVar35;
      iVar29 = iVar23;
    }
    *(ushort *)param_2 =
         CONCAT11((&color_unquant_to_uquant_tables)[(long)(iVar25 * 2 + 1) + lVar11 * 0x200],
                  (&color_unquant_to_uquant_tables)[(long)(iVar29 * 2 + 1) + lVar11 * 0x200]);
    break;
  case 4:
    iVar24 = param_3 + -4;
    iVar23 = (int)(fVar53 + _LC0);
    iVar35 = (int)(fVar48 + _LC0);
    fVar42 = (fVar52 + fVar51 + fVar49) * _LC41;
    fVar43 = (fVar45 + fVar46 + fVar47) * _LC41;
    iVar33 = (int)(fVar43 + _LC0);
    iVar29 = (int)(_LC0 + fVar42);
    if (param_3 < 0x13) {
      lVar11 = (long)iVar24 * 0x200;
      uVar15 = (uint)(byte)(&DAT_00104001)[(ulong)(iVar33 * 2 & 0xfe) * 2 + lVar11] |
               iVar33 * 2 & 0x100U;
      uVar34 = iVar29 * 2 - uVar15;
      if (uVar34 + 0x40 < 0x80) {
        uVar32 = (uint)(byte)(&DAT_00104001)[(ulong)(iVar35 * 2 & 0xfe) * 2 + lVar11] |
                 iVar35 * 2 & 0x100U;
        uVar14 = iVar23 * 2 - uVar32;
        if (uVar14 + 0x40 < 0x80) {
          uVar34 = (int)uVar15 >> 1 & 0x80U | uVar34 & 0x7f;
          uVar14 = (int)uVar32 >> 1 & 0x80U | uVar14 & 0x7f;
          bVar6 = (&color_unquant_to_uquant_tables)[(int)(uVar34 * 2 + 1) + lVar11];
          bVar3 = (&color_unquant_to_uquant_tables)[(int)(uVar14 * 2 + 1) + lVar11];
          if (((uVar34 ^ bVar6 | uVar14 ^ bVar3) & 0xc0) == 0) {
            uVar34 = bVar6 & 0x7f;
            if ((bVar6 & 0x40) != 0) {
              uVar34 = bVar6 | 0xffffff80;
            }
            uVar14 = bVar3 & 0x7f;
            if ((bVar3 & 0x40) != 0) {
              uVar14 = bVar3 | 0xffffff80;
            }
            if ((uVar15 + uVar34 | uVar32 + uVar14) < 0x200) {
              uVar31 = 5;
              *(uint *)param_2 =
                   CONCAT31(CONCAT21(CONCAT11(bVar3,(&DAT_00104001)
                                                    [(ulong)(iVar35 * 2 & 0xfe) * 2 + lVar11]),bVar6
                                    ),(&DAT_00104001)[(ulong)(iVar33 * 2 & 0xfe) * 2 + lVar11]);
              break;
            }
          }
        }
      }
    }
    uVar31 = 4;
    bVar36 = fVar42 - (float)iVar29 < _LC4;
    *(undefined *)param_2 =
         (&color_unquant_to_uquant_tables)
         [(long)(int)((iVar33 * 2 + 1) - (uint)(fVar43 - (float)iVar33 < _LC4)) +
          (long)iVar24 * 0x200];
    bVar1 = fVar48 - (float)iVar35 < _LC4;
    *(undefined *)((long)param_2 + 1) =
         (&color_unquant_to_uquant_tables)
         [(long)(int)((iVar29 * 2 + 1) - (uint)bVar36) + (long)iVar24 * 0x200];
    bVar36 = fVar53 - (float)iVar23 < _LC4;
    *(undefined *)((long)param_2 + 2) =
         (&color_unquant_to_uquant_tables)
         [(long)(int)((iVar35 * 2 + 1) - (uint)bVar1) + (long)iVar24 * 0x200];
    *(undefined *)((long)param_2 + 3) =
         (&color_unquant_to_uquant_tables)
         [(long)(int)((iVar23 * 2 + 1) - (uint)bVar36) + (long)iVar24 * 0x200];
    break;
  case 6:
    uVar31 = 6;
    quantize_rgbs(param_2,param_3);
    break;
  case 7:
    auVar2._4_8_ = local_168;
    auVar2._0_4_ = fVar37;
    local_168 = (undefined1  [8])(auVar2._0_8_ << 0x20);
    uStack_160._0_4_ = in_XMM3_Dc;
    uStack_160._4_4_ = in_XMM3_Dd;
    local_168._4_4_ = fVar37 + in_XMM3_Dd;
    local_168._0_4_ = (float)in_XMM3_Qa + in_XMM3_Dd;
    uStack_160 = uStack_160 & 0xffffffff00000000 | (ulong)(uint)(in_XMM3_Dc + in_XMM3_Dd);
    auVar40 = maxps(_local_168,(undefined1  [16])0x0);
    auVar41._4_4_ = _LC28;
    auVar41._0_4_ = _LC28;
    auVar41._8_4_ = _LC28;
    auVar41._12_4_ = _LC28;
    auVar40 = minps(auVar40,auVar41);
    fVar37 = auVar40._0_4_;
    fVar43 = auVar40._4_4_;
    fVar46 = auVar40._8_4_;
    fVar45 = auVar40._12_4_;
    auVar54._8_4_ = fVar43;
    auVar54._0_8_ = CONCAT44(fVar43,fVar43);
    auVar54._12_4_ = fVar43;
    fVar42 = fVar46;
    if ((fVar37 <= fVar43) || (fVar37 <= fVar46)) {
      if (fVar43 <= fVar46) {
        auVar44._4_4_ = fVar43;
        auVar44._0_4_ = fVar46;
        auVar44._8_4_ = fVar37;
        auVar44._12_4_ = fVar45;
        local_158 = 2.8026e-45;
        fVar42 = fVar37;
        fVar43 = fVar46;
      }
      else {
        auVar44._4_4_ = fVar37;
        auVar44._0_4_ = fVar43;
        auVar44._8_4_ = fVar46;
        auVar44._12_4_ = fVar45;
        local_158 = 1.4013e-45;
        auVar54 = auVar40;
      }
    }
    else {
      local_158 = 0.0;
      auVar44 = auVar40;
      fVar43 = fVar37;
    }
    lVar21 = 0;
    lVar11 = (long)(param_3 + -4);
    fVar48 = auVar54._0_4_;
    fVar47 = auVar44._12_4_;
    puVar27 = quantize_hdr_rgbo(vfloat4,unsigned_char*,quant_method)::mode_bits;
    while ((((float)(&quantize_hdr_rgbo(vfloat4,unsigned_char*,quant_method)::mode_cutoffs)
                    [lVar21 * 2] < fVar43 - fVar48 ||
            ((float)(&quantize_hdr_rgbo(vfloat4,unsigned_char*,quant_method)::mode_cutoffs)
                    [lVar21 * 2] < fVar43 - fVar42)) ||
           ((float)(&DAT_00103684)[lVar21 * 2] <= fVar47 &&
            fVar47 != (float)(&DAT_00103684)[lVar21 * 2]))) {
LAB_00102680:
      lVar21 = lVar21 + 1;
      puVar27 = puVar27 + 0xc;
      if (lVar21 == 5) {
        lVar21 = 0;
        local_70 = fVar46;
        local_78 = auVar40._0_8_;
        if (_LC39 < fVar37) goto LAB_0010270b;
        do {
          lVar12 = lVar21;
          if (0.0 < auVar40._0_4_) {
            iVar24 = (int)(_LC35 * auVar40._0_4_ + _LC0);
            fVar42 = (float)iVar24 * __LC42;
          }
          else {
            iVar24 = 0;
            auVar40 = ZEXT816(0);
            fVar42 = 0.0;
          }
          while( true ) {
            *(int *)((long)local_68 + lVar12) = iVar24;
            *(int *)((long)&local_78 + lVar12) = auVar40._0_4_;
            *(float *)((long)local_84 + lVar12) = fVar42;
            lVar21 = lVar12 + 4;
            if (lVar21 == 0xc) {
              uVar15 = 0x7f;
              fVar45 = fVar45 + ((local_84[0] - (float)local_78) + (local_84[1] - local_78._4_4_) +
                                (local_84[2] - local_70)) * _LC41;
              if ((fVar45 <= _LC39) && (uVar15 = 0, 0.0 < fVar45)) {
                uVar15 = (int)(fVar45 * _LC35 + _LC0) & 0x7f;
              }
              lVar21 = 0;
              local_58[0] = local_68[0] & __LC43 | _UNK_0010382c;
              local_58[1] = local_68[1] & _UNK_00103814 | _UNK_00103824;
              local_58[2] = local_68[2] & _UNK_00103818;
              local_58[3] = local_68[0] * 2 & _UNK_0010381c | uVar15;
              goto LAB_00102b09;
            }
            fVar42 = *(float *)((long)&local_78 + lVar12 + 4);
            auVar40 = ZEXT416((uint)fVar42);
            if (fVar42 <= _LC39) break;
LAB_0010270b:
            auVar40 = ZEXT416((uint)_LC39);
            iVar24 = 0x7f;
            lVar12 = lVar21;
            fVar42 = _LC38;
          }
        } while( true );
      }
    }
    uVar34 = (uint)lVar21;
    uVar15 = (uint)local_158 | 0xc;
    if (lVar21 != 4) {
      uVar15 = (int)local_158 * 4 | uVar34;
    }
    fVar49 = (float)(&quantize_hdr_rgbo(vfloat4,unsigned_char*,quant_method)::mode_scales)[lVar21];
    fVar51 = (float)(&quantize_hdr_rgbo(vfloat4,unsigned_char*,quant_method)::mode_rscales)[lVar21];
    uVar32 = (uint)(fVar49 * fVar43 + _LC0);
    uVar10 = (ulong)(uVar15 << 6 | uVar32 & 0x3f);
    do {
      bVar3 = (byte)uVar10;
      bVar6 = (&DAT_00104001)[(uVar10 & 0xff) * 2 + lVar11 * 0x200];
      if ((bVar3 & 0xc0) < (bVar6 & 0xc0)) {
        uVar10 = (ulong)((int)uVar10 - 1);
      }
      else {
        uVar10 = (ulong)(byte)(bVar3 - ((bVar6 & 0xc0) < (bVar3 & 0xc0)));
      }
    } while (0x3f < (bVar6 ^ bVar3));
    uVar32 = uVar32 & 0xffffffc0 | bVar6 & 0x3f;
    fVar53 = (float)(int)uVar32 * fVar51;
    fVar50 = fVar53 - fVar48;
    fVar38 = fVar53 - fVar42;
    fVar52 = _LC28;
    if ((fVar50 <= _LC28) && (fVar52 = fVar50, fVar50 <= 0.0)) {
      fVar52 = 0.0;
    }
    fVar50 = _LC28;
    if ((fVar38 <= _LC28) && (fVar50 = fVar38, fVar38 <= 0.0)) {
      fVar50 = 0.0;
    }
    uVar28 = (uint)(fVar52 * fVar49 + _LC0);
    uVar13 = (uint)(fVar50 * fVar49 + _LC0);
    uVar14 = uVar13;
    if ((int)uVar13 <= (int)uVar28) {
      uVar14 = uVar28;
    }
    if (1 << ((byte)*(undefined4 *)(puVar27 + 4) & 0x1f) <= (int)uVar14) goto LAB_00102680;
    uVar26 = (int)uVar32 >> 7;
    uVar9 = (int)uVar32 >> 6;
    uVar14 = (int)uVar32 >> 8;
    uVar20 = uVar26;
    if (lVar21 == 3) {
LAB_00103177:
      uVar17 = (int)uVar28 >> 5 & 1;
      uVar20 = uVar20 & 1;
      uVar30 = uVar14 & 1;
      uVar14 = (int)uVar13 >> 5 & 1;
    }
    else {
      if (lVar21 == 4) {
        uVar14 = (int)uVar28 >> 6;
        uVar20 = (int)uVar13 >> 6;
        goto LAB_00103177;
      }
      if (lVar21 == 1) goto LAB_00103177;
      uVar30 = (int)uVar32 >> 9 & 1;
      uVar20 = uVar26 & 1;
      uVar17 = uVar14 & 1;
      uVar14 = uVar9 & 1;
      if (lVar21 != 2) {
        uVar14 = (int)uVar32 >> 10 & 1;
      }
    }
    uVar18 = (ulong)(uVar17 << 5 | uVar30 << 6 | (uVar15 & 4) << 5 | uVar28 & 0x1f);
    uVar10 = (ulong)(uVar14 << 5 | uVar20 << 6 | (uVar15 & 8) << 4 | uVar13 & 0x1f);
    do {
      bVar22 = (byte)uVar18;
      bVar3 = (&DAT_00104001)[(uVar18 & 0xff) * 2 + lVar11 * 0x200];
      if ((bVar22 & 0xf0) < (bVar3 & 0xf0)) {
        uVar18 = (ulong)((int)uVar18 - 1);
      }
      else {
        uVar18 = (ulong)(byte)(bVar22 - ((bVar3 & 0xf0) < (bVar22 & 0xf0)));
      }
    } while (0xf < (bVar3 ^ bVar22));
    do {
      bVar4 = (byte)uVar10;
      bVar22 = (&DAT_00104001)[(uVar10 & 0xff) * 2 + lVar11 * 0x200];
      if ((bVar4 & 0xf0) < (bVar22 & 0xf0)) {
        uVar10 = (ulong)((int)uVar10 - 1);
      }
      else {
        uVar10 = (ulong)(byte)(bVar4 - ((bVar22 & 0xf0) < (bVar4 & 0xf0)));
      }
    } while (0xf < (bVar22 ^ bVar4));
    fVar52 = (((fVar53 - (float)(int)(uVar13 & 0xffffffe0 | bVar22 & 0x1f) * fVar51) - fVar42) +
             ((fVar53 - (float)(int)(uVar28 & 0xffffffe0 | bVar3 & 0x1f) * fVar51) - fVar48) +
             (fVar53 - fVar43)) * _LC41 + fVar47;
    fVar51 = _LC37;
    if ((fVar52 <= _LC37) && (fVar51 = fVar52, fVar52 <= 0.0)) {
      fVar51 = 0.0;
    }
    uVar15 = (uint)(fVar49 * fVar51 + _LC0);
    if (1 << ((byte)*(undefined4 *)(puVar27 + 8) & 0x1f) <= (int)uVar15) goto LAB_00102680;
    if (uVar34 == 1) {
      uVar14 = (int)uVar32 >> 9 & 1;
      uVar26 = (int)uVar32 >> 10 & 1;
    }
    else {
      uVar14 = (int)uVar15 >> 5 & 1;
      if (uVar34 == 4) {
        uVar26 = uVar26 & 1;
      }
      else {
        uVar26 = (int)uVar15 >> 6 & 1;
        if (uVar34 == 2) {
          uVar9 = (int)uVar15 >> 7;
        }
      }
    }
    uVar10 = (ulong)((uVar9 & 1) << 7 | uVar14 << 5 | uVar26 << 6 | uVar15 & 0x1f);
    do {
      bVar5 = (byte)uVar10;
      bVar4 = (&DAT_00104001)[(uVar10 & 0xff) * 2 + lVar11 * 0x200];
      if ((bVar5 & 0xf0) < (bVar4 & 0xf0)) {
        uVar10 = (ulong)((int)uVar10 - 1);
      }
      else {
        uVar10 = (ulong)(byte)(bVar5 - ((bVar4 & 0xf0) < (bVar5 & 0xf0)));
      }
    } while (0xf < (bVar4 ^ bVar5));
    *(uint *)param_2 = CONCAT31(CONCAT21(CONCAT11(bVar4,bVar22),bVar3),bVar6);
    goto LAB_00102b4e;
  case 8:
    if (param_3 < 0x13) {
      cVar7 = try_quantize_rgb_delta_blue_contract(&local_e8,&local_d8,param_3);
      if (cVar7 == '\0') {
        uVar31 = 0;
        fVar42 = _LC36;
      }
      else {
        uVar31 = 9;
        rgba_delta_unpack(local_e8,local_d8,&local_a8,&local_98);
        fVar42 = (fVar49 - (float)local_98) * (fVar49 - (float)local_98) +
                 (fVar45 - (float)local_a8) * (fVar45 - (float)local_a8) +
                 (fVar52 - (float)iStack_90) * (fVar52 - (float)iStack_90) +
                 (fVar47 - (float)iStack_a0) * (fVar47 - (float)iStack_a0) +
                 (fVar51 - (float)iStack_94) * (fVar51 - (float)iStack_94) +
                 (fVar46 - (float)iStack_a4) * (fVar46 - (float)iStack_a4) +
                 (fVar53 - (float)iStack_8c) * (fVar53 - (float)iStack_8c) +
                 (fVar48 - (float)iStack_9c) * (fVar48 - (float)iStack_9c);
      }
      cVar7 = try_quantize_rgb_delta(&local_c8,&local_b8,param_3);
      if (cVar7 != '\0') {
        rgba_delta_unpack(local_c8,local_b8,&local_a8,&local_98);
        fVar43 = (fVar49 - (float)local_98) * (fVar49 - (float)local_98) +
                 (fVar45 - (float)local_a8) * (fVar45 - (float)local_a8) +
                 (fVar52 - (float)iStack_90) * (fVar52 - (float)iStack_90) +
                 (fVar47 - (float)iStack_a0) * (fVar47 - (float)iStack_a0) +
                 (fVar51 - (float)iStack_94) * (fVar51 - (float)iStack_94) +
                 (fVar46 - (float)iStack_a4) * (fVar46 - (float)iStack_a4) +
                 (fVar53 - (float)iStack_8c) * (fVar53 - (float)iStack_8c) +
                 (fVar48 - (float)iStack_9c) * (fVar48 - (float)iStack_9c);
        if (fVar43 < fVar42) {
          local_e8 = local_c8;
          uStack_e0 = CONCAT44(uStack_bc,uStack_c0);
          uVar31 = 9;
          local_d8 = local_b8;
          uStack_d0 = CONCAT44(uStack_ac,uStack_b0);
          fVar42 = fVar43;
        }
      }
LAB_00103039:
      local_168 = (undefined1  [8])&local_a8;
      cVar7 = try_quantize_rgb_blue_contract(&local_c8,&local_b8,param_3);
      if (cVar7 != '\0') {
        rgba_unpack(local_c8,local_b8,local_168,&local_98);
        fVar43 = (fVar49 - (float)local_98) * (fVar49 - (float)local_98) +
                 (fVar45 - (float)local_a8) * (fVar45 - (float)local_a8) +
                 (fVar52 - (float)iStack_90) * (fVar52 - (float)iStack_90) +
                 (fVar47 - (float)iStack_a0) * (fVar47 - (float)iStack_a0) +
                 (fVar51 - (float)iStack_94) * (fVar51 - (float)iStack_94) +
                 (fVar46 - (float)iStack_a4) * (fVar46 - (float)iStack_a4) +
                 (fVar53 - (float)iStack_8c) * (fVar53 - (float)iStack_8c) +
                 (fVar48 - (float)iStack_9c) * (fVar48 - (float)iStack_9c);
        if (fVar43 < fVar42) {
          local_e8 = local_c8;
          uStack_e0 = CONCAT44(uStack_bc,uStack_c0);
          uVar31 = 8;
          local_d8 = local_b8;
          uStack_d0 = CONCAT44(uStack_ac,uStack_b0);
          fVar42 = fVar43;
        }
      }
    }
    else {
      uVar31 = 0;
      fVar42 = _LC36;
      if (param_3 == 0x13) goto LAB_00103039;
    }
    local_168 = (undefined1  [8])&local_a8;
    quantize_rgb(&local_c8,&local_b8,param_3);
    rgba_unpack(local_c8,local_b8,local_168,&local_98);
    if ((fVar49 - (float)local_98) * (fVar49 - (float)local_98) +
        (fVar45 - (float)local_a8) * (fVar45 - (float)local_a8) +
        (fVar52 - (float)iStack_90) * (fVar52 - (float)iStack_90) +
        (fVar47 - (float)iStack_a0) * (fVar47 - (float)iStack_a0) +
        (fVar51 - (float)iStack_94) * (fVar51 - (float)iStack_94) +
        (fVar46 - (float)iStack_a4) * (fVar46 - (float)iStack_a4) +
        (fVar53 - (float)iStack_8c) * (fVar53 - (float)iStack_8c) +
        (fVar48 - (float)iStack_9c) * (fVar48 - (float)iStack_9c) < fVar42) {
      uStack_e0 = CONCAT44(uStack_bc,uStack_c0);
      uVar31 = 8;
      local_e8 = local_c8;
      uStack_d0 = CONCAT44(uStack_ac,uStack_b0);
      local_d8 = local_b8;
    }
    *(uint *)param_2 =
         (((local_d8._4_4_ & 0xff) << 8 | local_e8._4_4_ & 0xff) << 8 | (uint)local_d8 & 0xff) << 8
         | (uint)local_e8 & 0xff;
    *(char *)((long)param_2 + 4) = (char)uStack_e0;
    *(char *)((long)param_2 + 5) = (char)uStack_d0;
    break;
  case 10:
    uVar31 = 10;
    fVar42 = _LC0 + fVar53;
    bVar36 = fVar53 - (float)(int)fVar42 < _LC4;
    *(undefined *)((long)param_2 + 4) =
         (&color_unquant_to_uquant_tables)
         [(long)(int)(((int)(fVar48 + _LC0) * 2 + 1) -
                     (uint)(fVar48 - (float)(int)(fVar48 + _LC0) < _LC4)) +
          (long)(param_3 + -4) * 0x200];
    *(undefined *)((long)param_2 + 5) =
         (&color_unquant_to_uquant_tables)
         [(long)(int)(((int)fVar42 * 2 + 1) - (uint)bVar36) + (long)(param_3 + -4) * 0x200];
    quantize_rgbs(param_2,param_3);
    break;
  case 0xb:
    uVar31 = 0xb;
    quantize_hdr_rgb(param_2,param_3);
    break;
  case 0xc:
    iVar24 = param_3 + -4;
    fVar42 = fVar48;
    fVar43 = fVar53;
    if (param_3 < 0x13) {
      cVar7 = try_quantize_rgb_delta_blue_contract(&local_e8,&local_d8,param_3);
      if ((cVar7 == '\0') || (cVar7 = try_quantize_alpha_delta(), cVar7 == '\0')) {
        uVar31 = 0;
        local_158 = _LC36;
      }
      else {
        uVar31 = 0xd;
        rgba_delta_unpack(local_e8,local_d8,&local_a8,&local_98);
        local_158 = (fVar49 - (float)local_98) * (fVar49 - (float)local_98) +
                    (fVar45 - (float)local_a8) * (fVar45 - (float)local_a8) +
                    (fVar52 - (float)iStack_90) * (fVar52 - (float)iStack_90) +
                    (fVar47 - (float)iStack_a0) * (fVar47 - (float)iStack_a0) +
                    (fVar51 - (float)iStack_94) * (fVar51 - (float)iStack_94) +
                    (fVar46 - (float)iStack_a4) * (fVar46 - (float)iStack_a4) +
                    (fVar43 - (float)iStack_8c) * (fVar43 - (float)iStack_8c) +
                    (fVar42 - (float)iStack_9c) * (fVar42 - (float)iStack_9c);
      }
      cVar7 = try_quantize_rgb_delta(&local_c8,&local_b8,param_3);
      if ((cVar7 != '\0') &&
         (cVar7 = try_quantize_alpha_delta(&local_c8,&local_b8,param_3), cVar7 != '\0')) {
        rgba_delta_unpack(local_c8,local_b8,&local_a8,&local_98);
        fVar37 = (fVar49 - (float)local_98) * (fVar49 - (float)local_98) +
                 (fVar45 - (float)local_a8) * (fVar45 - (float)local_a8) +
                 (fVar52 - (float)iStack_90) * (fVar52 - (float)iStack_90) +
                 (fVar47 - (float)iStack_a0) * (fVar47 - (float)iStack_a0) +
                 (fVar51 - (float)iStack_94) * (fVar51 - (float)iStack_94) +
                 (fVar46 - (float)iStack_a4) * (fVar46 - (float)iStack_a4) +
                 (fVar43 - (float)iStack_8c) * (fVar43 - (float)iStack_8c) +
                 (fVar42 - (float)iStack_9c) * (fVar42 - (float)iStack_9c);
        if (fVar37 < local_158) {
          uStack_e0 = CONCAT44(uStack_bc,uStack_c0);
          uVar31 = 0xd;
          local_e8 = local_c8;
          uStack_d0 = CONCAT44(uStack_ac,uStack_b0);
          local_d8 = local_b8;
          local_158 = fVar37;
        }
      }
LAB_00102df0:
      local_168 = (undefined1  [8])&local_a8;
      cVar7 = try_quantize_rgb_blue_contract(&local_c8,&local_b8,param_3);
      fVar37 = _LC0;
      if (cVar7 != '\0') {
        uStack_bc = (uint)(byte)(&color_unquant_to_uquant_tables)
                                [(long)(int)(((int)(fVar53 + _LC0) * 2 + 1) -
                                            (uint)(fVar53 - (float)(int)(fVar53 + _LC0) < _LC4)) +
                                 (long)iVar24 * 0x200];
        uStack_ac = (uint)(byte)(&color_unquant_to_uquant_tables)
                                [(long)(int)(((int)(fVar48 + _LC0) * 2 + 1) -
                                            (uint)(fVar48 - (float)(int)(fVar48 + _LC0) < _LC4)) +
                                 (long)iVar24 * 0x200];
        rgba_unpack(local_c8,local_b8,local_168,&local_98);
        fVar38 = (fVar49 - (float)local_98) * (fVar49 - (float)local_98) +
                 (fVar45 - (float)local_a8) * (fVar45 - (float)local_a8) +
                 (fVar52 - (float)iStack_90) * (fVar52 - (float)iStack_90) +
                 (fVar47 - (float)iStack_a0) * (fVar47 - (float)iStack_a0) +
                 (fVar51 - (float)iStack_94) * (fVar51 - (float)iStack_94) +
                 (fVar46 - (float)iStack_a4) * (fVar46 - (float)iStack_a4) +
                 (fVar43 - (float)iStack_8c) * (fVar43 - (float)iStack_8c) +
                 (fVar42 - (float)iStack_9c) * (fVar42 - (float)iStack_9c);
        if (fVar38 < local_158) {
          local_e8 = local_c8;
          uStack_e0 = CONCAT44(uStack_bc,uStack_c0);
          uVar31 = 0xc;
          local_d8 = local_b8;
          uStack_d0 = CONCAT44(uStack_ac,uStack_b0);
          local_158 = fVar38;
        }
      }
    }
    else {
      uVar31 = 0;
      local_158 = _LC36;
      fVar37 = _LC0;
      if (param_3 == 0x13) goto LAB_00102df0;
    }
    local_168 = (undefined1  [8])&local_a8;
    quantize_rgb(&local_c8,&local_b8,param_3);
    uStack_bc = (uint)(byte)(&color_unquant_to_uquant_tables)
                            [(long)(int)(((int)(fVar48 + fVar37) * 2 + 1) -
                                        (uint)(fVar48 - (float)(int)(fVar48 + fVar37) < _LC4)) +
                             (long)iVar24 * 0x200];
    uStack_ac = (uint)(byte)(&color_unquant_to_uquant_tables)
                            [(long)(int)(((int)(fVar37 + fVar53) * 2 + 1) -
                                        (uint)(fVar53 - (float)(int)(fVar37 + fVar53) < _LC4)) +
                             (long)iVar24 * 0x200];
    rgba_unpack(local_c8,local_b8,local_168,&local_98);
    if ((fVar49 - (float)local_98) * (fVar49 - (float)local_98) +
        (fVar45 - (float)local_a8) * (fVar45 - (float)local_a8) +
        (fVar52 - (float)iStack_90) * (fVar52 - (float)iStack_90) +
        (fVar47 - (float)iStack_a0) * (fVar47 - (float)iStack_a0) +
        (fVar51 - (float)iStack_94) * (fVar51 - (float)iStack_94) +
        (fVar46 - (float)iStack_a4) * (fVar46 - (float)iStack_a4) +
        (fVar43 - (float)iStack_8c) * (fVar43 - (float)iStack_8c) +
        (fVar42 - (float)iStack_9c) * (fVar42 - (float)iStack_9c) < local_158) {
      uStack_e0 = CONCAT44(uStack_bc,uStack_c0);
      uVar31 = 0xc;
      local_e8 = local_c8;
      uStack_d0 = CONCAT44(uStack_ac,uStack_b0);
      local_d8 = local_b8;
    }
    *param_2 = (((((((ulong)(uStack_d0._4_4_ & 0xff) << 8 | (ulong)(uStack_e0._4_4_ & 0xff)) << 8 |
                   (ulong)((uint)uStack_d0 & 0xff)) << 8 | (ulong)((uint)uStack_e0 & 0xff)) << 8 |
                 (ulong)(local_d8._4_4_ & 0xff)) << 8 | (ulong)(local_e8._4_4_ & 0xff)) << 8 |
               (ulong)((uint)local_d8 & 0xff)) << 8 | (ulong)((uint)local_e8 & 0xff);
    break;
  case 0xe:
    fVar43 = fVar43 * _LC2;
    if (_LC3 < fVar43) {
      iVar24 = 0x1fe;
      if (_LC2 * fVar42 <= _LC3) goto LAB_0010223f;
LAB_00102c35:
      iVar33 = 0x1fe;
      iVar23 = 0xff;
      fVar42 = _LC3;
LAB_00102253:
      iVar24 = iVar24 + 1;
LAB_00102256:
      lVar11 = (long)(param_3 + -4);
      bVar36 = _LC4 <= fVar42 - (float)iVar23;
      *(undefined *)((long)param_2 + 6) =
           (&color_unquant_to_uquant_tables)[(long)iVar24 + lVar11 * 0x200];
      if (bVar36) goto LAB_00102b9a;
    }
    else {
      if (fVar43 <= 0.0) {
        iVar24 = 0;
        if (_LC3 < _LC2 * fVar42) goto LAB_00102c35;
LAB_0010223f:
        fVar42 = _LC2 * fVar42;
        if (0.0 < fVar42) {
          iVar23 = (int)(_LC0 + fVar42);
          iVar33 = iVar23 * 2;
        }
        else {
          iVar33 = 0;
          iVar23 = 0;
          fVar42 = 0.0;
        }
        goto LAB_00102253;
      }
      iVar24 = (int)(fVar43 + _LC0) * 2;
      fVar43 = fVar43 - (float)(int)(fVar43 + _LC0);
      fVar42 = _LC2 * fVar42;
      if (fVar42 <= _LC3) {
        if (fVar42 <= 0.0) {
          iVar33 = 0;
          iVar23 = 0;
          fVar42 = 0.0;
          goto LAB_00102b6b;
        }
        iVar23 = (int)(_LC0 + fVar42);
        iVar33 = iVar23 * 2;
        if (_LC4 <= fVar43) goto LAB_00102253;
        goto LAB_00102256;
      }
      iVar33 = 0x1fe;
      iVar23 = 0xff;
      fVar42 = _LC3;
LAB_00102b6b:
      if (_LC4 <= fVar43) goto LAB_00102253;
      lVar11 = (long)(param_3 + -4);
      *(undefined *)((long)param_2 + 6) =
           (&color_unquant_to_uquant_tables)[(long)iVar24 + lVar11 * 0x200];
LAB_00102b9a:
      iVar33 = iVar33 + 1;
    }
    uVar31 = 0xe;
    *(undefined *)((long)param_2 + 7) =
         (&color_unquant_to_uquant_tables)[(long)iVar33 + lVar11 * 0x200];
    quantize_hdr_rgb(param_2,param_3);
    break;
  case 0xf:
    quantize_hdr_rgb(param_2,param_3);
    iVar24 = 0xff00;
    if ((fVar43 <= __LC45) && (iVar24 = 0, 0.0 < fVar43)) {
      iVar24 = (int)(fVar43 + _LC0);
    }
    iVar33 = 0xff00;
    if ((fVar42 <= __LC45) && (iVar33 = 0, 0.0 < fVar42)) {
      iVar33 = (int)(fVar42 + _LC0);
    }
    lVar21 = 2;
    lVar11 = (long)(param_3 + -4);
    do {
      bVar3 = (byte)lVar21;
      iVar23 = 0x80 >> (bVar3 & 0x1f);
      uVar34 = iVar23 + iVar24 >> (8 - bVar3 & 0x1f);
      uVar15 = ((uint)lVar21 & 1) << 7 | uVar34 & 0x7f;
      bVar6 = (&color_unquant_to_uquant_tables)[(long)(int)(uVar15 * 2 + 1) + lVar11 * 0x200];
      if (((uVar15 ^ bVar6) & 0x80) == 0) {
        uVar15 = bVar6 & 0x7f | uVar34 & 0xffffff80;
        iVar35 = 0x20 >> (bVar3 & 0x1f);
        uVar34 = (iVar23 + iVar33 >> (8 - bVar3 & 0x1f)) - uVar15;
        if (((SBORROW4(uVar34,-iVar35) == (int)(uVar34 + iVar35) < 0) && ((int)uVar34 < iVar35)) &&
           (uVar15 = ((int)uVar15 >> 7) << (6 - bVar3 & 0x1f) | iVar35 * 2 - 1U & uVar34 |
                     ((uint)lVar21 & 2) << 6,
           bVar3 = (&color_unquant_to_uquant_tables)[(long)(int)(uVar15 * 2 + 1) + lVar11 * 0x200],
           ((uVar15 ^ bVar3) &
           *(uint *)(quantize_hdr_alpha(float,float,unsigned_char*,quant_method)::testbits +
                    lVar21 * 4)) == 0)) {
          *(byte *)((long)param_2 + 6) = bVar6;
          goto LAB_00102486;
        }
      }
      bVar36 = lVar21 != 0;
      lVar21 = lVar21 + -1;
    } while (bVar36);
    *(undefined *)((long)param_2 + 6) =
         (&color_unquant_to_uquant_tables)
         [(long)(int)(iVar24 + 0x100 >> 8 | 0x101) + lVar11 * 0x200];
    bVar3 = (&color_unquant_to_uquant_tables)
            [(long)(int)(iVar33 + 0x100 >> 8 | 0x101) + lVar11 * 0x200];
LAB_00102486:
    *(byte *)((long)param_2 + 7) = bVar3;
    uVar31 = 0xf;
  }
LAB_00101928:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar31;
LAB_00102b09:
  do {
    bVar6 = (byte)local_58[lVar21];
    do {
      while( true ) {
        bVar3 = (&DAT_00104001)[(ulong)bVar6 * 2 + lVar11 * 0x200];
        bVar22 = bVar3 ^ bVar6;
        if ((bVar3 & 0xf0) <= (bVar6 & 0xf0)) break;
        bVar6 = bVar6 - 1;
        if (bVar22 < 0x10) goto LAB_00102b40;
      }
      bVar6 = bVar6 - ((bVar3 & 0xf0) < (bVar6 & 0xf0));
    } while (0xf < bVar22);
LAB_00102b40:
    *(byte *)((long)param_2 + lVar21) = bVar3;
    lVar21 = lVar21 + 1;
  } while (lVar21 != 4);
LAB_00102b4e:
  uVar31 = 7;
  goto LAB_00101928;
}



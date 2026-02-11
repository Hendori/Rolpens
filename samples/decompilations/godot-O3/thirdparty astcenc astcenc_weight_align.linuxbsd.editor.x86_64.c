
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* compute_angular_endpoints_for_quant_levels(unsigned int, float const*, unsigned int, float*,
   float*) */

void compute_angular_endpoints_for_quant_levels
               (uint param_1,float *param_2,uint param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  float *pfVar11;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar29 [16];
  float fVar35;
  undefined1 auVar30 [16];
  float fVar36;
  float fVar37;
  float fVar39;
  float fVar40;
  undefined1 auVar38 [16];
  float fVar41;
  float fVar42;
  float fVar49;
  float fVar50;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float local_588 [32];
  float local_508 [32];
  uint local_488 [32];
  float local_408 [32];
  float local_388 [32];
  float local_308 [32];
  undefined8 local_288;
  undefined8 uStack_280;
  float local_278 [12];
  float afStack_248 [130];
  long local_40;
  undefined1 auVar22 [16];
  
  fVar5 = _LC12;
  uVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = (&steps_for_quant_level)[param_3];
  lVar13 = 0;
  do {
    pfVar6 = (float *)((long)param_2 + lVar13);
    fVar20 = pfVar6[1];
    fVar23 = pfVar6[2];
    fVar64 = pfVar6[3];
    uVar7 = uVar7 + 4;
    *(uint *)(lVar13 + (long)&local_288) = (uint)(*pfVar6 * _LC6 + _LC8) & _LC10;
    *(uint *)((long)&local_288 + lVar13 + 4) = (uint)(fVar20 * _LC6 + _LC8) & _LC10;
    *(uint *)((long)local_278 + lVar13 + -8) = (uint)(fVar23 * _LC6 + _LC8) & _LC10;
    *(uint *)((long)local_278 + lVar13 + -4) = (uint)(fVar64 * _LC6 + _LC8) & _LC10;
    lVar13 = lVar13 + 0x10;
  } while (uVar7 < param_1);
  uVar7 = 0;
  lVar13 = 0;
  do {
    auVar46._0_12_ = ZEXT812(0);
    auVar46._12_4_ = 0;
    pfVar6 = (float *)&local_288;
    auVar44 = (undefined1  [16])0x0;
    do {
      fVar20 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      lVar9 = (long)(int)fVar20 * 0x80 + lVar13;
      auVar29._0_4_ = auVar46._0_4_ + *(float *)((long)&cos_table + lVar9);
      auVar29._4_4_ = auVar46._4_4_ + *(float *)((long)&DAT_00100ac4 + lVar9);
      auVar29._8_4_ = auVar46._8_4_ + *(float *)(lVar9 + 0x100ac8);
      auVar29._12_4_ = auVar46._12_4_ + *(float *)(lVar9 + 0x100acc);
      fVar20 = auVar44._0_4_ + *(float *)((long)&sin_table + lVar9);
      fVar23 = auVar44._4_4_ + *(float *)((long)&DAT_00102ac4 + lVar9);
      auVar22._0_8_ = CONCAT44(fVar23,fVar20);
      auVar22._8_4_ = auVar44._8_4_ + *(float *)(lVar9 + 0x102ac8);
      auVar22._12_4_ = auVar44._12_4_ + *(float *)(lVar9 + 0x102acc);
      auVar44 = auVar22;
      auVar46 = auVar29;
    } while ((float *)((long)&local_288 + (ulong)param_1 * 4) != pfVar6);
    auVar43._8_4_ = auVar22._8_4_;
    auVar43._0_8_ = auVar22._0_8_;
    auVar43._12_4_ = auVar22._12_4_;
    uVar7 = uVar7 + 4;
    auVar44 = divps(auVar43,auVar29);
    auVar38._0_4_ = 0.0 - auVar44._0_4_;
    auVar38._4_4_ = 0.0 - auVar44._4_4_;
    auVar38._8_4_ = 0.0 - auVar44._8_4_;
    auVar38._12_4_ = 0.0 - auVar44._12_4_;
    auVar44 = maxps(auVar38,auVar44);
    fVar64 = auVar44._0_4_;
    auVar45._0_4_ = 0.0 - fVar64;
    fVar65 = auVar44._4_4_;
    auVar45._4_4_ = 0.0 - fVar65;
    fVar28 = auVar44._8_4_;
    auVar45._8_4_ = 0.0 - fVar28;
    fVar32 = auVar44._12_4_;
    auVar45._12_4_ = 0.0 - fVar32;
    auVar46 = maxps(auVar45,auVar44);
    uVar14 = -(uint)(_LC12 < auVar46._0_4_);
    uVar15 = -(uint)(_LC12 < auVar46._4_4_);
    uVar16 = -(uint)(_LC12 < auVar46._8_4_);
    uVar18 = -(uint)(_LC12 < auVar46._12_4_);
    auVar47._4_4_ = _LC12;
    auVar47._0_4_ = _LC12;
    auVar47._8_4_ = _LC12;
    auVar47._12_4_ = _LC12;
    auVar44 = divps(auVar47,auVar44);
    auVar48._0_4_ = auVar44._0_4_ & uVar14;
    auVar48._4_4_ = auVar44._4_4_ & uVar15;
    auVar48._8_4_ = auVar44._8_4_ & uVar16;
    auVar48._12_4_ = auVar44._12_4_ & uVar18;
    auVar44._4_4_ = ~uVar15 & (uint)fVar65;
    auVar44._0_4_ = ~uVar14 & (uint)fVar64;
    auVar44._8_4_ = ~uVar16 & (uint)fVar28;
    auVar44._12_4_ = ~uVar18 & (uint)fVar32;
    auVar48 = auVar48 | auVar44;
    auVar3._4_4_ = auVar48._4_4_ * auVar48._4_4_ * _LC14 + _LC12;
    auVar3._0_4_ = auVar48._0_4_ * auVar48._0_4_ * _LC14 + _LC12;
    auVar3._8_4_ = auVar48._8_4_ * auVar48._8_4_ * _LC14 + _LC12;
    auVar3._12_4_ = auVar48._12_4_ * auVar48._12_4_ * _LC14 + _LC12;
    auVar44 = divps(auVar48,auVar3);
    fVar64 = (float)((uint)((float)((uint)fVar64 & _LC16 ^ __LC17) - auVar44._0_4_) & uVar14 |
                    ~uVar14 & (uint)auVar44._0_4_);
    fVar65 = (float)((uint)((float)((uint)fVar65 & _LC16 ^ _UNK_00104b04) - auVar44._4_4_) & uVar15
                    | ~uVar15 & (uint)auVar44._4_4_);
    fVar28 = (float)((uint)((float)((uint)fVar28 & _LC16 ^ _UNK_00104b08) - auVar44._8_4_) & uVar16
                    | ~uVar16 & (uint)auVar44._8_4_);
    fVar32 = (float)((uint)((float)((uint)fVar32 & _LC16 ^ _UNK_00104b0c) - auVar44._12_4_) & uVar18
                    | ~uVar18 & (uint)auVar44._12_4_);
    *(float *)((long)local_588 + lVar13) =
         (float)((uint)fVar20 & _LC16 ^
                ((uint)(_LC19 - fVar64) & (int)auVar29._0_4_ >> 0x1f |
                ~((int)auVar29._0_4_ >> 0x1f) & (uint)fVar64)) * _LC21;
    *(float *)((long)local_588 + lVar13 + 4) =
         (float)((uint)fVar23 & _LC16 ^
                ((uint)(_LC19 - fVar65) & (int)auVar29._4_4_ >> 0x1f |
                ~((int)auVar29._4_4_ >> 0x1f) & (uint)fVar65)) * _LC21;
    *(float *)((long)local_588 + lVar13 + 8) =
         (float)((uint)auVar22._8_4_ & _LC16 ^
                ((uint)(_LC19 - fVar28) & (int)auVar29._8_4_ >> 0x1f |
                ~((int)auVar29._8_4_ >> 0x1f) & (uint)fVar28)) * _LC21;
    *(float *)((long)local_588 + lVar13 + 0xc) =
         (float)((uint)auVar22._12_4_ & _LC16 ^
                ((uint)(_LC19 - fVar32) & (int)auVar29._12_4_ >> 0x1f |
                ~((int)auVar29._12_4_ >> 0x1f) & (uint)fVar32)) * _LC21;
    lVar13 = lVar13 + 0x10;
    uVar14 = (uint)bVar2;
  } while (uVar7 < uVar14);
  uVar7 = bVar2 + 3;
  uVar15 = 0;
  lVar13 = 0;
  fVar20 = _LC12;
  fVar23 = _UNK_00104ad4;
  fVar64 = _UNK_00104ad8;
  fVar65 = _UNK_00104adc;
  do {
    fVar21 = 0.0;
    fVar24 = 0.0;
    fVar25 = 0.0;
    fVar26 = 0.0;
    fVar60 = 0.0;
    fVar61 = 0.0;
    fVar62 = 0.0;
    fVar63 = 0.0;
    fVar42 = 0.0;
    fVar49 = 0.0;
    fVar50 = 0.0;
    fVar51 = 0.0;
    pfVar6 = param_2;
    fVar28 = __LC1;
    fVar32 = _UNK_00104ae4;
    fVar34 = _UNK_00104ae8;
    fVar36 = _UNK_00104aec;
    fVar56 = __LC3;
    fVar57 = _UNK_00104af4;
    fVar58 = _UNK_00104af8;
    fVar59 = _UNK_00104afc;
    do {
      fVar27 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      fVar37 = fVar27 * fVar20 - *(float *)((long)local_588 + lVar13);
      fVar39 = fVar27 * fVar23 - *(float *)((long)local_588 + lVar13 + 4);
      fVar40 = fVar27 * fVar64 - *(float *)((long)local_588 + lVar13 + 8);
      fVar41 = fVar27 * fVar65 - *(float *)((long)local_588 + lVar13 + 0xc);
      fVar27 = (float)((uint)fVar37 & _LC16 | (uint)_LC23);
      fVar31 = (float)((uint)fVar39 & _LC16 | (uint)_LC23);
      fVar33 = (float)((uint)fVar40 & _LC16 | (uint)_LC23);
      fVar35 = (float)((uint)fVar41 & _LC16 | (uint)_LC23);
      uVar16 = -(uint)((float)((uint)fVar37 & _LC25) <= _LC23);
      uVar18 = -(uint)((float)((uint)fVar39 & _LC25) <= _LC23);
      uVar17 = -(uint)((float)((uint)fVar40 & _LC25) <= _LC23);
      uVar19 = -(uint)((float)((uint)fVar41 & _LC25) <= _LC23);
      fVar27 = (float)((uint)((fVar37 + fVar27) - fVar27) & uVar16 ^ ~uVar16 & (uint)fVar37);
      fVar31 = (float)((uint)((fVar39 + fVar31) - fVar31) & uVar18 ^ ~uVar18 & (uint)fVar39);
      fVar33 = (float)((uint)((fVar40 + fVar33) - fVar33) & uVar17 ^ ~uVar17 & (uint)fVar40);
      fVar35 = (float)((uint)((fVar41 + fVar35) - fVar35) & uVar19 ^ ~uVar19 & (uint)fVar41);
      fVar37 = fVar37 - fVar27;
      fVar39 = fVar39 - fVar31;
      fVar40 = fVar40 - fVar33;
      fVar41 = fVar41 - fVar35;
      uVar16 = -(uint)(fVar27 < fVar56);
      uVar18 = -(uint)(fVar31 < fVar57);
      uVar17 = -(uint)(fVar33 < fVar58);
      uVar19 = -(uint)(fVar35 < fVar59);
      fVar60 = fVar60 + fVar37 * fVar37;
      fVar61 = fVar61 + fVar39 * fVar39;
      fVar62 = fVar62 + fVar40 * fVar40;
      fVar63 = fVar63 + fVar41 * fVar41;
      fVar56 = (float)(uVar16 & (uint)fVar27 | ~uVar16 & (uint)fVar56);
      fVar57 = (float)(uVar18 & (uint)fVar31 | ~uVar18 & (uint)fVar57);
      fVar58 = (float)(uVar17 & (uint)fVar33 | ~uVar17 & (uint)fVar58);
      fVar59 = (float)(uVar19 & (uint)fVar35 | ~uVar19 & (uint)fVar59);
      fVar42 = (float)(-(uint)(fVar27 == fVar56) &
                       (uint)(((float)(~uVar16 & (uint)fVar42) + _LC12) - (fVar37 + fVar37)) |
                      ~-(uint)(fVar27 == fVar56) & ~uVar16 & (uint)fVar42);
      fVar49 = (float)(-(uint)(fVar31 == fVar57) &
                       (uint)(((float)(~uVar18 & (uint)fVar49) + _LC12) - (fVar39 + fVar39)) |
                      ~-(uint)(fVar31 == fVar57) & ~uVar18 & (uint)fVar49);
      fVar50 = (float)(-(uint)(fVar33 == fVar58) &
                       (uint)(((float)(~uVar17 & (uint)fVar50) + _LC12) - (fVar40 + fVar40)) |
                      ~-(uint)(fVar33 == fVar58) & ~uVar17 & (uint)fVar50);
      fVar51 = (float)(-(uint)(fVar35 == fVar59) &
                       (uint)(((float)(~uVar19 & (uint)fVar51) + _LC12) - (fVar41 + fVar41)) |
                      ~-(uint)(fVar35 == fVar59) & ~uVar19 & (uint)fVar51);
      uVar16 = -(uint)(fVar28 < fVar27);
      uVar18 = -(uint)(fVar32 < fVar31);
      uVar17 = -(uint)(fVar34 < fVar33);
      uVar19 = -(uint)(fVar36 < fVar35);
      fVar28 = (float)(uVar16 & (uint)fVar27 | ~uVar16 & (uint)fVar28);
      fVar32 = (float)(uVar18 & (uint)fVar31 | ~uVar18 & (uint)fVar32);
      fVar34 = (float)(uVar17 & (uint)fVar33 | ~uVar17 & (uint)fVar34);
      fVar36 = (float)(uVar19 & (uint)fVar35 | ~uVar19 & (uint)fVar36);
      fVar21 = (float)(~-(uint)(fVar27 == fVar28) & ~uVar16 & (uint)fVar21 |
                      -(uint)(fVar27 == fVar28) &
                      (uint)((float)(~uVar16 & (uint)fVar21) + _LC12 + fVar37 + fVar37));
      fVar24 = (float)(~-(uint)(fVar31 == fVar32) & ~uVar18 & (uint)fVar24 |
                      -(uint)(fVar31 == fVar32) &
                      (uint)((float)(~uVar18 & (uint)fVar24) + _LC12 + fVar39 + fVar39));
      fVar25 = (float)(~-(uint)(fVar33 == fVar34) & ~uVar17 & (uint)fVar25 |
                      -(uint)(fVar33 == fVar34) &
                      (uint)((float)(~uVar17 & (uint)fVar25) + _LC12 + fVar40 + fVar40));
      fVar26 = (float)(~-(uint)(fVar35 == fVar36) & ~uVar19 & (uint)fVar26 |
                      -(uint)(fVar35 == fVar36) &
                      (uint)((float)(~uVar19 & (uint)fVar26) + _LC12 + fVar41 + fVar41));
    } while (param_2 + param_1 != pfVar6);
    uVar15 = uVar15 + 4;
    *(float *)((long)local_508 + lVar13) = fVar56;
    *(float *)((long)local_508 + lVar13 + 4) = fVar57;
    *(float *)((long)local_508 + lVar13 + 8) = fVar58;
    *(float *)((long)local_508 + lVar13 + 0xc) = fVar59;
    uVar52 = (uint)((fVar28 - fVar56) + _LC12);
    uVar53 = (uint)((fVar32 - fVar57) + _LC12);
    uVar54 = (uint)((fVar34 - fVar58) + _LC12);
    uVar55 = (uint)((fVar36 - fVar59) + _LC12);
    uVar16 = -(uint)((int)uVar52 < (int)uVar7);
    uVar18 = -(uint)((int)uVar53 < (int)uVar7);
    uVar17 = -(uint)((int)uVar54 < (int)uVar7);
    uVar19 = -(uint)((int)uVar55 < (int)uVar7);
    uVar16 = uVar16 & uVar52 | ~uVar16 & uVar7;
    uVar18 = uVar18 & uVar53 | ~uVar18 & uVar7;
    uVar17 = uVar17 & uVar54 | ~uVar17 & uVar7;
    uVar19 = uVar19 & uVar55 | ~uVar19 & uVar7;
    uVar52 = -(uint)((int)__LC27 < (int)uVar16);
    uVar53 = -(uint)((int)_UNK_00104b14 < (int)uVar18);
    uVar54 = -(uint)((int)_UNK_00104b18 < (int)uVar17);
    uVar55 = -(uint)((int)_UNK_00104b1c < (int)uVar19);
    *(uint *)((long)local_488 + lVar13) = uVar16 & uVar52 | ~uVar52 & __LC27;
    *(uint *)((long)local_488 + lVar13 + 4) = uVar18 & uVar53 | ~uVar53 & _UNK_00104b14;
    *(uint *)((long)local_488 + lVar13 + 8) = uVar17 & uVar54 | ~uVar54 & _UNK_00104b18;
    *(uint *)((long)local_488 + lVar13 + 0xc) = uVar19 & uVar55 | ~uVar55 & _UNK_00104b1c;
    auVar30._4_4_ = _LC12;
    auVar30._0_4_ = _LC12;
    auVar30._8_4_ = _LC12;
    auVar30._12_4_ = _LC12;
    auVar4._4_4_ = fVar23;
    auVar4._0_4_ = fVar20;
    auVar4._8_4_ = fVar64;
    auVar4._12_4_ = fVar65;
    auVar44 = divps(auVar30,auVar4);
    fVar20 = fVar20 + __LC28;
    fVar23 = fVar23 + _UNK_00104b24;
    fVar64 = fVar64 + _UNK_00104b28;
    fVar65 = fVar65 + _UNK_00104b2c;
    fVar28 = auVar44._0_4_ * auVar44._0_4_;
    fVar32 = auVar44._4_4_ * auVar44._4_4_;
    fVar34 = auVar44._8_4_ * auVar44._8_4_;
    fVar36 = auVar44._12_4_ * auVar44._12_4_;
    *(float *)((long)local_408 + lVar13) = fVar60 * fVar28;
    *(float *)((long)local_408 + lVar13 + 4) = fVar61 * fVar32;
    *(float *)((long)local_408 + lVar13 + 8) = fVar62 * fVar34;
    *(float *)((long)local_408 + lVar13 + 0xc) = fVar63 * fVar36;
    *(float *)((long)local_388 + lVar13) = fVar42 * fVar28;
    *(float *)((long)local_388 + lVar13 + 4) = fVar49 * fVar32;
    *(float *)((long)local_388 + lVar13 + 8) = fVar50 * fVar34;
    *(float *)((long)local_388 + lVar13 + 0xc) = fVar51 * fVar36;
    *(float *)((long)local_308 + lVar13) = fVar21 * fVar28;
    *(float *)((long)local_308 + lVar13 + 4) = fVar24 * fVar32;
    *(float *)((long)local_308 + lVar13 + 8) = fVar25 * fVar34;
    *(float *)((long)local_308 + lVar13 + 0xc) = fVar26 * fVar36;
    lVar13 = lVar13 + 0x10;
  } while (uVar15 < uVar14);
  pfVar1 = afStack_248 + (ulong)bVar2 * 4;
  pfVar6 = (float *)&local_288;
  if (((int)pfVar1 - (int)&local_288 & 0x10U) != 0) {
    local_288 = __LC30;
    uStack_280 = _UNK_00104b38;
    pfVar6 = local_278;
    if (pfVar1 == pfVar6) goto LAB_00100420;
  }
  do {
    *(undefined8 *)pfVar6 = __LC30;
    *(undefined8 *)(pfVar6 + 2) = _UNK_00104b38;
    pfVar11 = pfVar6 + 8;
    *(undefined8 *)(pfVar6 + 4) = __LC30;
    *(undefined8 *)(pfVar6 + 6) = _UNK_00104b38;
    pfVar6 = pfVar11;
  } while (pfVar1 != pfVar11);
LAB_00100420:
  lVar13 = 0;
  do {
    uVar7 = local_488[lVar13];
    lVar9 = (long)(int)uVar7;
    fVar20 = local_408[lVar13];
    fVar34 = (float)(int)lVar13;
    pfVar6 = local_388 + lVar13;
    pfVar1 = local_308 + lVar13;
    lVar13 = lVar13 + 1;
    fVar23 = *(float *)(&local_288 + lVar9 * 2);
    uVar15 = *(uint *)((long)&local_288 + lVar9 * 0x10 + 4);
    fVar64 = local_278[lVar9 * 4 + -2];
    fVar65 = local_278[lVar9 * 4 + -1];
    fVar32 = *pfVar6 + fVar20;
    fVar36 = fVar20 + *pfVar1;
    fVar28 = *pfVar1 + fVar32;
    *(uint *)(&local_288 + lVar9 * 2) =
         -(uint)(fVar20 < fVar23) & (uint)fVar20 | ~-(uint)(fVar20 < fVar23) & (uint)fVar23;
    *(uint *)((long)&local_288 + lVar9 * 0x10 + 4) =
         -(uint)(fVar20 < fVar23) & (uint)fVar34 | ~-(uint)(fVar20 < fVar23) & uVar15;
    local_278[lVar9 * 4 + -2] = (float)(~-(uint)(fVar20 < fVar23) & (uint)fVar64);
    local_278[lVar9 * 4 + -1] = (float)(~-(uint)(fVar20 < fVar23) & (uint)fVar65);
    lVar12 = (long)(int)(uVar7 - 1);
    lVar9 = (long)(int)(uVar7 - 2);
    fVar20 = *(float *)(&local_288 + lVar12 * 2);
    uVar7 = *(uint *)((long)&local_288 + lVar12 * 0x10 + 4);
    fVar23 = local_278[lVar12 * 4 + -2];
    fVar64 = local_278[lVar12 * 4 + -1];
    fVar65 = (float)(-(uint)(fVar32 < fVar20) & (uint)fVar32 |
                    ~-(uint)(fVar32 < fVar20) & (uint)fVar20);
    *(uint *)(&local_288 + lVar12 * 2) =
         -(uint)(fVar36 < fVar65) & (uint)fVar36 | ~-(uint)(fVar36 < fVar65) & (uint)fVar65;
    *(uint *)((long)&local_288 + lVar12 * 0x10 + 4) =
         -(uint)(fVar36 < fVar65) & (uint)fVar34 |
         ~-(uint)(fVar36 < fVar65) &
         (-(uint)(fVar32 < fVar20) & (uint)fVar34 | ~-(uint)(fVar32 < fVar20) & uVar7);
    local_278[lVar12 * 4 + -2] =
         (float)(~-(uint)(fVar36 < fVar65) &
                (-(uint)(fVar32 < fVar20) & (uint)_LC31 | ~-(uint)(fVar32 < fVar20) & (uint)fVar23))
    ;
    local_278[lVar12 * 4 + -1] =
         (float)(~-(uint)(fVar36 < fVar65) &
                (-(uint)(fVar32 < fVar20) & _LC31._4_4_ | ~-(uint)(fVar32 < fVar20) & (uint)fVar64))
    ;
    fVar20 = *(float *)(&local_288 + lVar9 * 2);
    uVar7 = *(uint *)((long)&local_288 + lVar9 * 0x10 + 4);
    fVar23 = local_278[lVar9 * 4 + -2];
    fVar64 = local_278[lVar9 * 4 + -1];
    *(uint *)(&local_288 + lVar9 * 2) =
         -(uint)(fVar28 < fVar20) & (uint)fVar28 | ~-(uint)(fVar28 < fVar20) & (uint)fVar20;
    *(uint *)((long)&local_288 + lVar9 * 0x10 + 4) =
         -(uint)(fVar28 < fVar20) & (uint)fVar34 | ~-(uint)(fVar28 < fVar20) & uVar7;
    local_278[lVar9 * 4 + -2] =
         (float)(-(uint)(fVar28 < fVar20) & (uint)_LC31 | ~-(uint)(fVar28 < fVar20) & (uint)fVar23);
    local_278[lVar9 * 4 + -1] =
         (float)(-(uint)(fVar28 < fVar20) & _LC31._4_4_ | ~-(uint)(fVar28 < fVar20) & (uint)fVar64);
  } while ((uint)lVar13 < uVar14);
  uVar10 = 0;
  do {
    bVar2 = (&steps_for_quant_level)[uVar10];
    iVar8 = (int)*(float *)((long)&local_288 + (ulong)bVar2 * 0x10 + 4);
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    fVar20 = local_588[iVar8];
    fVar23 = local_508[iVar8];
    fVar64 = local_278[(ulong)bVar2 * 4 + -2];
    fVar65 = fVar5 / ((float)iVar8 + fVar5);
    param_4[uVar10] = (fVar20 + fVar23 + fVar64) * fVar65;
    param_5[uVar10] = (((fVar23 + fVar64 + (float)bVar2) - fVar5) + fVar20) * fVar65;
    uVar10 = uVar10 + 1;
  } while (param_3 + 1 != uVar10);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* prepare_angular_tables() */

void prepare_angular_tables(void)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  long local_50;
  float *local_48;
  float local_40;
  float local_3c [3];
  
  pfVar3 = (float *)&DAT_00102b40;
  local_48 = (float *)&DAT_00100b40;
  local_50 = 1;
  fVar5 = _LC12;
  fVar6 = _LC12;
  fVar7 = 0.0;
  while( true ) {
    fVar6 = fVar6 * _LC33;
    iVar1 = 1;
    pfVar3[-0x20] = fVar7;
    local_48[-0x20] = fVar5;
    pfVar2 = local_48;
    pfVar4 = pfVar3;
    do {
      fVar5 = (float)iVar1;
      iVar1 = iVar1 + 1;
      sincosf(fVar5 * fVar6,local_3c,&local_40);
      *pfVar4 = local_3c[0];
      *pfVar2 = local_40;
      pfVar2 = pfVar2 + 0x20;
      pfVar4 = pfVar4 + 0x20;
    } while (iVar1 != 0x40);
    local_50 = local_50 + 1;
    pfVar3 = pfVar3 + 1;
    local_48 = local_48 + 1;
    if (local_50 == 0x21) break;
    fVar6 = (float)(int)local_50;
    sincosf(_LC33 * fVar6 * 0.0,local_3c,&local_40);
    fVar5 = local_40;
    fVar7 = local_3c[0];
  }
  return;
}



/* compute_angular_endpoints_1plane(bool, block_size_descriptor const&, float const*, unsigned int,
   compression_working_buffers&) */

void compute_angular_endpoints_1plane
               (bool param_1,block_size_descriptor *param_2,float *param_3,uint param_4,
               compression_working_buffers *param_5)

{
  long lVar1;
  float *pfVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  compression_working_buffers *pcVar6;
  block_size_descriptor *pbVar7;
  block_size_descriptor *pbVar8;
  undefined4 uVar9;
  
  uVar5 = *(uint *)(param_2 + 8);
  if (param_1) {
    uVar5 = *(uint *)(param_2 + 4);
    if (*(uint *)(param_2 + 4) == 0) {
      uVar4 = (ulong)*(uint *)(param_2 + 0x10);
      goto LAB_0010083f;
    }
  }
  else if (uVar5 == 0) {
    uVar4 = (ulong)*(uint *)(param_2 + 0x14);
    goto LAB_0010083f;
  }
  pcVar6 = param_5 + 0x31dc0;
  pbVar8 = param_2 + 0x42;
  uVar3 = param_4;
  if (7 < param_4) {
    uVar3 = 7;
  }
  pbVar7 = param_2 + 0x252;
  pfVar2 = param_3 + (ulong)uVar5 * 0x40;
  do {
    if (((short)(1 << ((char)param_4 + 1U & 0x1f)) - 1U & *(ushort *)pbVar8) != 0) {
      uVar5 = (int)(char)pbVar8[-2];
      if (uVar3 <= (uint)(int)(char)pbVar8[-2]) {
        uVar5 = uVar3;
      }
      compute_angular_endpoints_for_quant_levels
                ((uint)(byte)*pbVar7,param_3,uVar5,(float *)pcVar6,(float *)(pcVar6 + 0xae0));
    }
    param_3 = param_3 + 0x40;
    pbVar7 = pbVar7 + 0x1fb70;
    pcVar6 = pcVar6 + 0x20;
    pbVar8 = pbVar8 + 6;
  } while (param_3 != pfVar2);
  uVar4 = (ulong)*(uint *)(param_2 + 0x10);
  if (!param_1) {
    uVar4 = (ulong)*(uint *)(param_2 + 0x14);
  }
LAB_0010083f:
  pbVar8 = param_2 + 0xac8562;
  pcVar6 = param_5;
  do {
    if ((byte)pbVar8[1] < 8) {
      lVar1 = (ulong)(byte)pbVar8[1] + (ulong)(byte)*pbVar8 * 8;
      *(undefined4 *)(pcVar6 + 0x2ddc0) = *(undefined4 *)(param_5 + lVar1 * 4 + 0x31dc0);
      uVar9 = *(undefined4 *)(param_5 + lVar1 * 4 + 0x328a0);
    }
    else {
      *(undefined4 *)(pcVar6 + 0x2ddc0) = 0;
      uVar9 = _LC12;
    }
    *(undefined4 *)(pcVar6 + 0x2fdc0) = uVar9;
    pcVar6 = pcVar6 + 4;
    pbVar8 = pbVar8 + 6;
  } while (pcVar6 != param_5 + uVar4 * 4);
  return;
}



/* compute_angular_endpoints_2planes(block_size_descriptor const&, float const*, unsigned int,
   compression_working_buffers&) */

void compute_angular_endpoints_2planes
               (block_size_descriptor *param_1,float *param_2,uint param_3,
               compression_working_buffers *param_4)

{
  long lVar1;
  block_size_descriptor bVar2;
  uint uVar3;
  undefined4 uVar4;
  compression_working_buffers *pcVar5;
  ulong uVar6;
  float *pfVar7;
  block_size_descriptor *pbVar8;
  block_size_descriptor *pbVar9;
  uint uVar10;
  undefined4 uVar11;
  
  pbVar9 = param_1 + 0x252;
  pbVar8 = param_1 + 0x41;
  pcVar5 = param_4 + 0x31dc0;
  pfVar7 = param_2 + (ulong)*(uint *)(param_1 + 8) * 0x40;
  uVar3 = param_3;
  if (7 < param_3) {
    uVar3 = 7;
  }
  do {
    if (((short)(1 << ((char)param_3 + 1U & 0x1f)) - 1U & *(ushort *)(pbVar8 + 3)) != 0) {
      bVar2 = *pbVar9;
      uVar10 = (int)(char)*pbVar8;
      if (uVar3 < (uint)(int)(char)*pbVar8) {
        uVar10 = uVar3;
      }
      compute_angular_endpoints_for_quant_levels
                ((uint)(byte)bVar2,param_2,uVar10,(float *)pcVar5,(float *)(pcVar5 + 0xae0));
      compute_angular_endpoints_for_quant_levels
                ((uint)(byte)bVar2,param_2 + 0x20,uVar10,(float *)(pcVar5 + 0x55c0),
                 (float *)(pcVar5 + 0x60a0));
    }
    uVar4 = _LC12;
    param_2 = param_2 + 0x40;
    pbVar8 = pbVar8 + 6;
    pbVar9 = pbVar9 + 0x1fb70;
    pcVar5 = pcVar5 + 0x20;
  } while (param_2 != pfVar7);
  uVar3 = *(uint *)(param_1 + 0x14);
  uVar10 = *(uint *)(param_1 + 0x18);
  if (uVar3 < uVar10) {
    uVar6 = (ulong)uVar3;
    pbVar8 = param_1 + uVar6 * 6 + 0xac8562;
    pcVar5 = param_4 + uVar6 * 4;
    do {
      if ((byte)pbVar8[1] < 8) {
        lVar1 = (ulong)(byte)pbVar8[1] + (ulong)(byte)*pbVar8 * 8;
        *(undefined4 *)(pcVar5 + 0x2ddc0) = *(undefined4 *)(param_4 + lVar1 * 4 + 0x31dc0);
        *(undefined4 *)(pcVar5 + 0x2fdc0) = *(undefined4 *)(param_4 + lVar1 * 4 + 0x328a0);
        *(undefined4 *)(pcVar5 + 0x33380) = *(undefined4 *)(param_4 + lVar1 * 4 + 0x37380);
        uVar11 = *(undefined4 *)(param_4 + lVar1 * 4 + 0x37e60);
      }
      else {
        *(undefined4 *)(pcVar5 + 0x2ddc0) = 0;
        *(undefined4 *)(pcVar5 + 0x33380) = 0;
        *(undefined4 *)(pcVar5 + 0x2fdc0) = uVar4;
        uVar11 = uVar4;
      }
      *(undefined4 *)(pcVar5 + 0x35380) = uVar11;
      pcVar5 = pcVar5 + 4;
      pbVar8 = pbVar8 + 6;
    } while (pcVar5 != param_4 + (((uVar10 - 1) - uVar3) + uVar6) * 4 + 4);
  }
  return;
}



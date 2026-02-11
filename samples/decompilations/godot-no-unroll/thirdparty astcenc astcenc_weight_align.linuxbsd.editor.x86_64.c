
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* compute_angular_endpoints_for_quant_levels(unsigned int, float const*, unsigned int, float*,
   float*) */

void compute_angular_endpoints_for_quant_levels
               (uint param_1,float *param_2,uint param_3,float *param_4,float *param_5)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  float *pfVar10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar28 [16];
  float fVar34;
  undefined1 auVar29 [16];
  float fVar35;
  float fVar36;
  float fVar38;
  float fVar39;
  undefined1 auVar37 [16];
  float fVar40;
  float fVar41;
  float fVar48;
  float fVar49;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float local_588 [32];
  float local_508 [32];
  uint local_488 [32];
  float local_408 [32];
  float local_388 [32];
  float local_308 [32];
  float local_288;
  uint uStack_284;
  float fStack_280;
  uint auStack_27c [13];
  float afStack_248 [130];
  long local_40;
  undefined1 auVar21 [16];
  
  fVar4 = _LC12;
  uVar6 = 0;
  pfVar10 = &local_288;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = (&steps_for_quant_level)[param_3];
  lVar12 = 0;
  do {
    pfVar5 = (float *)((long)param_2 + lVar12);
    fVar19 = pfVar5[1];
    fVar22 = pfVar5[2];
    fVar63 = pfVar5[3];
    uVar6 = uVar6 + 4;
    *(uint *)(lVar12 + (long)pfVar10) = (uint)(*pfVar5 * _LC6 + _LC8) & _LC10;
    *(uint *)((long)&uStack_284 + lVar12) = (uint)(fVar19 * _LC6 + _LC8) & _LC10;
    *(uint *)((long)&fStack_280 + lVar12) = (uint)(fVar22 * _LC6 + _LC8) & _LC10;
    *(uint *)((long)auStack_27c + lVar12) = (uint)(fVar63 * _LC6 + _LC8) & _LC10;
    lVar12 = lVar12 + 0x10;
  } while (uVar6 < param_1);
  uVar6 = 0;
  lVar12 = 0;
  do {
    auVar45._0_12_ = ZEXT812(0);
    auVar45._12_4_ = 0;
    pfVar5 = pfVar10;
    auVar43 = (undefined1  [16])0x0;
    do {
      fVar19 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      lVar8 = (long)(int)fVar19 * 0x80 + lVar12;
      auVar28._0_4_ = auVar45._0_4_ + *(float *)((long)&cos_table + lVar8);
      auVar28._4_4_ = auVar45._4_4_ + *(float *)((long)&DAT_00100aa4 + lVar8);
      auVar28._8_4_ = auVar45._8_4_ + *(float *)(lVar8 + 0x100aa8);
      auVar28._12_4_ = auVar45._12_4_ + *(float *)(lVar8 + 0x100aac);
      fVar19 = auVar43._0_4_ + *(float *)((long)&sin_table + lVar8);
      fVar22 = auVar43._4_4_ + *(float *)((long)&DAT_00102aa4 + lVar8);
      auVar21._0_8_ = CONCAT44(fVar22,fVar19);
      auVar21._8_4_ = auVar43._8_4_ + *(float *)(lVar8 + 0x102aa8);
      auVar21._12_4_ = auVar43._12_4_ + *(float *)(lVar8 + 0x102aac);
      auVar43 = auVar21;
      auVar45 = auVar28;
    } while (pfVar10 + param_1 != pfVar5);
    auVar42._8_4_ = auVar21._8_4_;
    auVar42._0_8_ = auVar21._0_8_;
    auVar42._12_4_ = auVar21._12_4_;
    uVar6 = uVar6 + 4;
    auVar43 = divps(auVar42,auVar28);
    auVar37._0_4_ = 0.0 - auVar43._0_4_;
    auVar37._4_4_ = 0.0 - auVar43._4_4_;
    auVar37._8_4_ = 0.0 - auVar43._8_4_;
    auVar37._12_4_ = 0.0 - auVar43._12_4_;
    auVar43 = maxps(auVar37,auVar43);
    fVar63 = auVar43._0_4_;
    auVar44._0_4_ = 0.0 - fVar63;
    fVar64 = auVar43._4_4_;
    auVar44._4_4_ = 0.0 - fVar64;
    fVar27 = auVar43._8_4_;
    auVar44._8_4_ = 0.0 - fVar27;
    fVar31 = auVar43._12_4_;
    auVar44._12_4_ = 0.0 - fVar31;
    auVar45 = maxps(auVar44,auVar43);
    uVar13 = -(uint)(_LC12 < auVar45._0_4_);
    uVar14 = -(uint)(_LC12 < auVar45._4_4_);
    uVar15 = -(uint)(_LC12 < auVar45._8_4_);
    uVar17 = -(uint)(_LC12 < auVar45._12_4_);
    auVar46._4_4_ = _LC12;
    auVar46._0_4_ = _LC12;
    auVar46._8_4_ = _LC12;
    auVar46._12_4_ = _LC12;
    auVar43 = divps(auVar46,auVar43);
    auVar47._0_4_ = auVar43._0_4_ & uVar13;
    auVar47._4_4_ = auVar43._4_4_ & uVar14;
    auVar47._8_4_ = auVar43._8_4_ & uVar15;
    auVar47._12_4_ = auVar43._12_4_ & uVar17;
    auVar43._4_4_ = ~uVar14 & (uint)fVar64;
    auVar43._0_4_ = ~uVar13 & (uint)fVar63;
    auVar43._8_4_ = ~uVar15 & (uint)fVar27;
    auVar43._12_4_ = ~uVar17 & (uint)fVar31;
    auVar47 = auVar47 | auVar43;
    auVar2._4_4_ = auVar47._4_4_ * auVar47._4_4_ * _LC14 + _LC12;
    auVar2._0_4_ = auVar47._0_4_ * auVar47._0_4_ * _LC14 + _LC12;
    auVar2._8_4_ = auVar47._8_4_ * auVar47._8_4_ * _LC14 + _LC12;
    auVar2._12_4_ = auVar47._12_4_ * auVar47._12_4_ * _LC14 + _LC12;
    auVar43 = divps(auVar47,auVar2);
    fVar63 = (float)((uint)((float)((uint)fVar63 & _LC16 ^ __LC17) - auVar43._0_4_) & uVar13 |
                    ~uVar13 & (uint)auVar43._0_4_);
    fVar64 = (float)((uint)((float)((uint)fVar64 & _LC16 ^ _UNK_00104ae4) - auVar43._4_4_) & uVar14
                    | ~uVar14 & (uint)auVar43._4_4_);
    fVar27 = (float)((uint)((float)((uint)fVar27 & _LC16 ^ _UNK_00104ae8) - auVar43._8_4_) & uVar15
                    | ~uVar15 & (uint)auVar43._8_4_);
    fVar31 = (float)((uint)((float)((uint)fVar31 & _LC16 ^ _UNK_00104aec) - auVar43._12_4_) & uVar17
                    | ~uVar17 & (uint)auVar43._12_4_);
    *(float *)((long)local_588 + lVar12) =
         (float)((uint)fVar19 & _LC16 ^
                ((uint)(_LC19 - fVar63) & (int)auVar28._0_4_ >> 0x1f |
                ~((int)auVar28._0_4_ >> 0x1f) & (uint)fVar63)) * _LC21;
    *(float *)((long)local_588 + lVar12 + 4) =
         (float)((uint)fVar22 & _LC16 ^
                ((uint)(_LC19 - fVar64) & (int)auVar28._4_4_ >> 0x1f |
                ~((int)auVar28._4_4_ >> 0x1f) & (uint)fVar64)) * _LC21;
    *(float *)((long)local_588 + lVar12 + 8) =
         (float)((uint)auVar21._8_4_ & _LC16 ^
                ((uint)(_LC19 - fVar27) & (int)auVar28._8_4_ >> 0x1f |
                ~((int)auVar28._8_4_ >> 0x1f) & (uint)fVar27)) * _LC21;
    *(float *)((long)local_588 + lVar12 + 0xc) =
         (float)((uint)auVar21._12_4_ & _LC16 ^
                ((uint)(_LC19 - fVar31) & (int)auVar28._12_4_ >> 0x1f |
                ~((int)auVar28._12_4_ >> 0x1f) & (uint)fVar31)) * _LC21;
    lVar12 = lVar12 + 0x10;
    uVar13 = (uint)bVar1;
  } while (uVar6 < uVar13);
  uVar6 = bVar1 + 3;
  uVar14 = 0;
  lVar12 = 0;
  fVar19 = _LC12;
  fVar22 = _UNK_00104ab4;
  fVar63 = _UNK_00104ab8;
  fVar64 = _UNK_00104abc;
  do {
    fVar20 = 0.0;
    fVar23 = 0.0;
    fVar24 = 0.0;
    fVar25 = 0.0;
    fVar59 = 0.0;
    fVar60 = 0.0;
    fVar61 = 0.0;
    fVar62 = 0.0;
    fVar41 = 0.0;
    fVar48 = 0.0;
    fVar49 = 0.0;
    fVar50 = 0.0;
    pfVar5 = param_2;
    fVar27 = __LC1;
    fVar31 = _UNK_00104ac4;
    fVar33 = _UNK_00104ac8;
    fVar35 = _UNK_00104acc;
    fVar55 = __LC3;
    fVar56 = _UNK_00104ad4;
    fVar57 = _UNK_00104ad8;
    fVar58 = _UNK_00104adc;
    do {
      fVar26 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      fVar36 = fVar26 * fVar19 - *(float *)((long)local_588 + lVar12);
      fVar38 = fVar26 * fVar22 - *(float *)((long)local_588 + lVar12 + 4);
      fVar39 = fVar26 * fVar63 - *(float *)((long)local_588 + lVar12 + 8);
      fVar40 = fVar26 * fVar64 - *(float *)((long)local_588 + lVar12 + 0xc);
      fVar26 = (float)((uint)fVar36 & _LC16 | (uint)_LC23);
      fVar30 = (float)((uint)fVar38 & _LC16 | (uint)_LC23);
      fVar32 = (float)((uint)fVar39 & _LC16 | (uint)_LC23);
      fVar34 = (float)((uint)fVar40 & _LC16 | (uint)_LC23);
      uVar15 = -(uint)((float)((uint)fVar36 & _LC25) <= _LC23);
      uVar17 = -(uint)((float)((uint)fVar38 & _LC25) <= _LC23);
      uVar16 = -(uint)((float)((uint)fVar39 & _LC25) <= _LC23);
      uVar18 = -(uint)((float)((uint)fVar40 & _LC25) <= _LC23);
      fVar26 = (float)((uint)((fVar36 + fVar26) - fVar26) & uVar15 ^ ~uVar15 & (uint)fVar36);
      fVar30 = (float)((uint)((fVar38 + fVar30) - fVar30) & uVar17 ^ ~uVar17 & (uint)fVar38);
      fVar32 = (float)((uint)((fVar39 + fVar32) - fVar32) & uVar16 ^ ~uVar16 & (uint)fVar39);
      fVar34 = (float)((uint)((fVar40 + fVar34) - fVar34) & uVar18 ^ ~uVar18 & (uint)fVar40);
      fVar36 = fVar36 - fVar26;
      fVar38 = fVar38 - fVar30;
      fVar39 = fVar39 - fVar32;
      fVar40 = fVar40 - fVar34;
      uVar15 = -(uint)(fVar26 < fVar55);
      uVar17 = -(uint)(fVar30 < fVar56);
      uVar16 = -(uint)(fVar32 < fVar57);
      uVar18 = -(uint)(fVar34 < fVar58);
      fVar59 = fVar59 + fVar36 * fVar36;
      fVar60 = fVar60 + fVar38 * fVar38;
      fVar61 = fVar61 + fVar39 * fVar39;
      fVar62 = fVar62 + fVar40 * fVar40;
      fVar55 = (float)(uVar15 & (uint)fVar26 | ~uVar15 & (uint)fVar55);
      fVar56 = (float)(uVar17 & (uint)fVar30 | ~uVar17 & (uint)fVar56);
      fVar57 = (float)(uVar16 & (uint)fVar32 | ~uVar16 & (uint)fVar57);
      fVar58 = (float)(uVar18 & (uint)fVar34 | ~uVar18 & (uint)fVar58);
      fVar41 = (float)(-(uint)(fVar26 == fVar55) &
                       (uint)(((float)(~uVar15 & (uint)fVar41) + _LC12) - (fVar36 + fVar36)) |
                      ~-(uint)(fVar26 == fVar55) & ~uVar15 & (uint)fVar41);
      fVar48 = (float)(-(uint)(fVar30 == fVar56) &
                       (uint)(((float)(~uVar17 & (uint)fVar48) + _LC12) - (fVar38 + fVar38)) |
                      ~-(uint)(fVar30 == fVar56) & ~uVar17 & (uint)fVar48);
      fVar49 = (float)(-(uint)(fVar32 == fVar57) &
                       (uint)(((float)(~uVar16 & (uint)fVar49) + _LC12) - (fVar39 + fVar39)) |
                      ~-(uint)(fVar32 == fVar57) & ~uVar16 & (uint)fVar49);
      fVar50 = (float)(-(uint)(fVar34 == fVar58) &
                       (uint)(((float)(~uVar18 & (uint)fVar50) + _LC12) - (fVar40 + fVar40)) |
                      ~-(uint)(fVar34 == fVar58) & ~uVar18 & (uint)fVar50);
      uVar15 = -(uint)(fVar27 < fVar26);
      uVar17 = -(uint)(fVar31 < fVar30);
      uVar16 = -(uint)(fVar33 < fVar32);
      uVar18 = -(uint)(fVar35 < fVar34);
      fVar27 = (float)(uVar15 & (uint)fVar26 | ~uVar15 & (uint)fVar27);
      fVar31 = (float)(uVar17 & (uint)fVar30 | ~uVar17 & (uint)fVar31);
      fVar33 = (float)(uVar16 & (uint)fVar32 | ~uVar16 & (uint)fVar33);
      fVar35 = (float)(uVar18 & (uint)fVar34 | ~uVar18 & (uint)fVar35);
      fVar20 = (float)(~-(uint)(fVar26 == fVar27) & ~uVar15 & (uint)fVar20 |
                      -(uint)(fVar26 == fVar27) &
                      (uint)((float)(~uVar15 & (uint)fVar20) + _LC12 + fVar36 + fVar36));
      fVar23 = (float)(~-(uint)(fVar30 == fVar31) & ~uVar17 & (uint)fVar23 |
                      -(uint)(fVar30 == fVar31) &
                      (uint)((float)(~uVar17 & (uint)fVar23) + _LC12 + fVar38 + fVar38));
      fVar24 = (float)(~-(uint)(fVar32 == fVar33) & ~uVar16 & (uint)fVar24 |
                      -(uint)(fVar32 == fVar33) &
                      (uint)((float)(~uVar16 & (uint)fVar24) + _LC12 + fVar39 + fVar39));
      fVar25 = (float)(~-(uint)(fVar34 == fVar35) & ~uVar18 & (uint)fVar25 |
                      -(uint)(fVar34 == fVar35) &
                      (uint)((float)(~uVar18 & (uint)fVar25) + _LC12 + fVar40 + fVar40));
    } while (param_2 + param_1 != pfVar5);
    uVar14 = uVar14 + 4;
    *(float *)((long)local_508 + lVar12) = fVar55;
    *(float *)((long)local_508 + lVar12 + 4) = fVar56;
    *(float *)((long)local_508 + lVar12 + 8) = fVar57;
    *(float *)((long)local_508 + lVar12 + 0xc) = fVar58;
    uVar51 = (uint)((fVar27 - fVar55) + _LC12);
    uVar52 = (uint)((fVar31 - fVar56) + _LC12);
    uVar53 = (uint)((fVar33 - fVar57) + _LC12);
    uVar54 = (uint)((fVar35 - fVar58) + _LC12);
    uVar15 = -(uint)((int)uVar51 < (int)uVar6);
    uVar17 = -(uint)((int)uVar52 < (int)uVar6);
    uVar16 = -(uint)((int)uVar53 < (int)uVar6);
    uVar18 = -(uint)((int)uVar54 < (int)uVar6);
    uVar15 = uVar15 & uVar51 | ~uVar15 & uVar6;
    uVar17 = uVar17 & uVar52 | ~uVar17 & uVar6;
    uVar16 = uVar16 & uVar53 | ~uVar16 & uVar6;
    uVar18 = uVar18 & uVar54 | ~uVar18 & uVar6;
    uVar51 = -(uint)((int)__LC27 < (int)uVar15);
    uVar52 = -(uint)((int)_UNK_00104af4 < (int)uVar17);
    uVar53 = -(uint)((int)_UNK_00104af8 < (int)uVar16);
    uVar54 = -(uint)((int)_UNK_00104afc < (int)uVar18);
    *(uint *)((long)local_488 + lVar12) = uVar15 & uVar51 | ~uVar51 & __LC27;
    *(uint *)((long)local_488 + lVar12 + 4) = uVar17 & uVar52 | ~uVar52 & _UNK_00104af4;
    *(uint *)((long)local_488 + lVar12 + 8) = uVar16 & uVar53 | ~uVar53 & _UNK_00104af8;
    *(uint *)((long)local_488 + lVar12 + 0xc) = uVar18 & uVar54 | ~uVar54 & _UNK_00104afc;
    auVar29._4_4_ = _LC12;
    auVar29._0_4_ = _LC12;
    auVar29._8_4_ = _LC12;
    auVar29._12_4_ = _LC12;
    auVar3._4_4_ = fVar22;
    auVar3._0_4_ = fVar19;
    auVar3._8_4_ = fVar63;
    auVar3._12_4_ = fVar64;
    auVar43 = divps(auVar29,auVar3);
    fVar19 = fVar19 + __LC28;
    fVar22 = fVar22 + _UNK_00104b04;
    fVar63 = fVar63 + _UNK_00104b08;
    fVar64 = fVar64 + _UNK_00104b0c;
    fVar27 = auVar43._0_4_ * auVar43._0_4_;
    fVar31 = auVar43._4_4_ * auVar43._4_4_;
    fVar33 = auVar43._8_4_ * auVar43._8_4_;
    fVar35 = auVar43._12_4_ * auVar43._12_4_;
    *(float *)((long)local_408 + lVar12) = fVar59 * fVar27;
    *(float *)((long)local_408 + lVar12 + 4) = fVar60 * fVar31;
    *(float *)((long)local_408 + lVar12 + 8) = fVar61 * fVar33;
    *(float *)((long)local_408 + lVar12 + 0xc) = fVar62 * fVar35;
    *(float *)((long)local_388 + lVar12) = fVar41 * fVar27;
    *(float *)((long)local_388 + lVar12 + 4) = fVar48 * fVar31;
    *(float *)((long)local_388 + lVar12 + 8) = fVar49 * fVar33;
    *(float *)((long)local_388 + lVar12 + 0xc) = fVar50 * fVar35;
    *(float *)((long)local_308 + lVar12) = fVar20 * fVar27;
    *(float *)((long)local_308 + lVar12 + 4) = fVar23 * fVar31;
    *(float *)((long)local_308 + lVar12 + 8) = fVar24 * fVar33;
    *(float *)((long)local_308 + lVar12 + 0xc) = fVar25 * fVar35;
    lVar12 = lVar12 + 0x10;
  } while (uVar14 < uVar13);
  do {
    *(undefined8 *)pfVar10 = __LC30;
    *(undefined8 *)(pfVar10 + 2) = _UNK_00104b18;
    pfVar10 = pfVar10 + 4;
  } while (afStack_248 + (ulong)bVar1 * 4 != pfVar10);
  lVar12 = 0;
  do {
    uVar6 = local_488[lVar12];
    lVar8 = (long)(int)uVar6;
    fVar19 = local_408[lVar12];
    fVar33 = (float)(int)lVar12;
    pfVar10 = local_388 + lVar12;
    pfVar5 = local_308 + lVar12;
    lVar12 = lVar12 + 1;
    fVar22 = (&local_288)[lVar8 * 4];
    fVar63 = (&local_288)[lVar8 * 4 + 1];
    fVar64 = (&fStack_280)[lVar8 * 4];
    uVar14 = auStack_27c[lVar8 * 4];
    fVar31 = *pfVar10 + fVar19;
    fVar35 = fVar19 + *pfVar5;
    fVar27 = *pfVar5 + fVar31;
    (&local_288)[lVar8 * 4] =
         (float)(-(uint)(fVar19 < fVar22) & (uint)fVar19 | ~-(uint)(fVar19 < fVar22) & (uint)fVar22)
    ;
    (&local_288)[lVar8 * 4 + 1] =
         (float)(-(uint)(fVar19 < fVar22) & (uint)fVar33 | ~-(uint)(fVar19 < fVar22) & (uint)fVar63)
    ;
    (&fStack_280)[lVar8 * 4] = (float)(~-(uint)(fVar19 < fVar22) & (uint)fVar64);
    auStack_27c[lVar8 * 4] = ~-(uint)(fVar19 < fVar22) & uVar14;
    lVar11 = (long)(int)(uVar6 - 1);
    lVar8 = (long)(int)(uVar6 - 2);
    fVar19 = (&local_288)[lVar11 * 4];
    fVar22 = (&local_288)[lVar11 * 4 + 1];
    fVar63 = (&fStack_280)[lVar11 * 4];
    uVar6 = auStack_27c[lVar11 * 4];
    fVar64 = (float)(-(uint)(fVar31 < fVar19) & (uint)fVar31 |
                    ~-(uint)(fVar31 < fVar19) & (uint)fVar19);
    (&local_288)[lVar11 * 4] =
         (float)(-(uint)(fVar35 < fVar64) & (uint)fVar35 | ~-(uint)(fVar35 < fVar64) & (uint)fVar64)
    ;
    (&local_288)[lVar11 * 4 + 1] =
         (float)(-(uint)(fVar35 < fVar64) & (uint)fVar33 |
                ~-(uint)(fVar35 < fVar64) &
                (-(uint)(fVar31 < fVar19) & (uint)fVar33 | ~-(uint)(fVar31 < fVar19) & (uint)fVar22)
                );
    (&fStack_280)[lVar11 * 4] =
         (float)(~-(uint)(fVar35 < fVar64) &
                (-(uint)(fVar31 < fVar19) & (uint)_LC31 | ~-(uint)(fVar31 < fVar19) & (uint)fVar63))
    ;
    auStack_27c[lVar11 * 4] =
         ~-(uint)(fVar35 < fVar64) &
         (-(uint)(fVar31 < fVar19) & _LC31._4_4_ | ~-(uint)(fVar31 < fVar19) & uVar6);
    fVar19 = (&local_288)[lVar8 * 4];
    fVar22 = (&local_288)[lVar8 * 4 + 1];
    fVar63 = (&fStack_280)[lVar8 * 4];
    uVar6 = auStack_27c[lVar8 * 4];
    (&local_288)[lVar8 * 4] =
         (float)(-(uint)(fVar27 < fVar19) & (uint)fVar27 | ~-(uint)(fVar27 < fVar19) & (uint)fVar19)
    ;
    (&local_288)[lVar8 * 4 + 1] =
         (float)(-(uint)(fVar27 < fVar19) & (uint)fVar33 | ~-(uint)(fVar27 < fVar19) & (uint)fVar22)
    ;
    (&fStack_280)[lVar8 * 4] =
         (float)(-(uint)(fVar27 < fVar19) & (uint)_LC31 | ~-(uint)(fVar27 < fVar19) & (uint)fVar63);
    auStack_27c[lVar8 * 4] =
         -(uint)(fVar27 < fVar19) & _LC31._4_4_ | ~-(uint)(fVar27 < fVar19) & uVar6;
  } while ((uint)lVar12 < uVar13);
  uVar9 = 0;
  do {
    bVar1 = (&steps_for_quant_level)[uVar9];
    iVar7 = (int)(&local_288)[(ulong)bVar1 * 4 + 1];
    if ((int)(&local_288)[(ulong)bVar1 * 4 + 1] < 0) {
      iVar7 = 0;
    }
    fVar19 = local_588[iVar7];
    fVar22 = local_508[iVar7];
    fVar63 = (&fStack_280)[(ulong)bVar1 * 4];
    fVar64 = fVar4 / ((float)iVar7 + fVar4);
    param_4[uVar9] = (fVar19 + fVar22 + fVar63) * fVar64;
    param_5[uVar9] = (((fVar22 + fVar63 + (float)bVar1) - fVar4) + fVar19) * fVar64;
    uVar9 = uVar9 + 1;
  } while (param_3 + 1 != uVar9);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  
  pfVar3 = (float *)&DAT_00102b20;
  local_48 = (float *)&DAT_00100b20;
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
      goto LAB_0010081f;
    }
  }
  else if (uVar5 == 0) {
    uVar4 = (ulong)*(uint *)(param_2 + 0x14);
    goto LAB_0010081f;
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
LAB_0010081f:
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



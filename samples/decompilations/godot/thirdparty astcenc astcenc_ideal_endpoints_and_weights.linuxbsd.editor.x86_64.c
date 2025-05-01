
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* compute_ideal_colors_and_weights_3_comp(image_block const&, partition_info const&,
   endpoints_and_weights&, unsigned int) */

void compute_ideal_colors_and_weights_3_comp
               (image_block *param_1,partition_info *param_2,endpoints_and_weights *param_3,
               uint param_4)

{
  size_t __n;
  endpoints_and_weights *peVar1;
  image_block iVar2;
  partition_info pVar3;
  float fVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  partition_info *ppVar7;
  image_block *piVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  partition_info *ppVar12;
  ulong uVar13;
  image_block *piVar14;
  image_block *piVar15;
  long in_FS_OFFSET;
  float fVar16;
  float fVar17;
  float fVar19;
  undefined1 auVar18 [16];
  float fVar20;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar21 [16];
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  endpoints_and_weights local_d4;
  partition_metrics local_c8 [4];
  float afStack_c4 [3];
  undefined1 local_b8 [4];
  float afStack_b4 [29];
  long local_40;
  
  fVar28 = *(float *)(param_1 + 0xe00);
  fVar4 = *(float *)(param_1 + 0xe04);
  fVar32 = *(float *)(param_1 + 0xe08);
  fVar20 = *(float *)(param_1 + 0xe0c);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ushort *)param_2;
  *(uint *)(param_3 + 0x10) = uVar6;
  iVar2 = param_1[0xdbc];
  if (param_4 == 0) {
    piVar14 = param_1 + 0x6e0;
    fVar28 = _LC8 * (fVar32 + fVar28 + fVar4 + 0.0);
    piVar8 = param_1 + 0x370;
  }
  else {
    piVar8 = param_1;
    if (param_4 == 1) {
      piVar14 = param_1 + 0x6e0;
      fVar28 = _LC8 * (fVar20 + fVar28 + fVar32 + 0.0);
    }
    else {
      if (param_4 != 2) {
        piVar14 = param_1 + 0x370;
        piVar15 = param_1 + 0x6e0;
        fVar28 = _LC8 * (fVar32 + fVar28 + fVar4 + 0.0);
        compute_avgs_and_dirs_3_comp_rgb(param_2,param_1,local_c8);
        auVar5 = __LC1;
        fVar4 = _LC7;
        goto joined_r0x00100530;
      }
      piVar14 = param_1 + 0x370;
      fVar28 = _LC8 * (fVar20 + fVar28 + fVar4 + 0.0);
    }
  }
  piVar15 = param_1 + 0xa50;
  compute_avgs_and_dirs_3_comp(param_2,param_1,param_4,local_c8);
  auVar5 = __LC1;
  fVar4 = _LC7;
joined_r0x00100530:
  __LC1 = auVar5;
  _LC7 = fVar4;
  if (uVar6 == 0) {
    local_d4 = (endpoints_and_weights)0x1;
  }
  else {
    local_d4 = (endpoints_and_weights)0x1;
    lVar10 = 0;
    ppVar12 = param_2;
    fVar32 = 0.0;
    do {
      auVar21 = *(undefined1 (*) [16])(local_b8 + lVar10 * 0x20);
      fVar20 = auVar21._0_4_;
      fVar22 = auVar21._8_4_;
      fVar24 = auVar21._12_4_;
      if (afStack_b4[lVar10 * 8] + fVar20 + fVar22 < 0.0) {
        auVar21._4_4_ = 0.0 - auVar21._4_4_;
        auVar21._0_4_ = 0.0 - fVar20;
        auVar21._8_4_ = 0.0 - fVar22;
        auVar21._12_4_ = 0.0 - fVar24;
      }
      fVar20 = *(float *)(local_c8 + lVar10 * 0x20);
      fVar22 = afStack_c4[lVar10 * 8];
      fVar24 = afStack_c4[lVar10 * 8 + 1];
      auVar18._0_4_ =
           auVar21._0_4_ * auVar21._0_4_ + auVar21._8_4_ * auVar21._8_4_ +
           auVar21._4_4_ * auVar21._4_4_ + auVar21._12_4_ * auVar21._12_4_;
      uVar26 = auVar5._0_8_;
      fVar23 = auVar5._8_4_;
      if (auVar18._0_4_ != 0.0) {
        auVar18._4_4_ = auVar18._0_4_;
        auVar18._8_4_ = auVar18._0_4_;
        auVar18._12_4_ = auVar18._0_4_;
        auVar18 = sqrtps(auVar18,auVar18);
        auVar21 = divps(auVar21,auVar18);
        uVar26 = auVar21._0_8_;
        fVar23 = auVar21._8_4_;
      }
      pVar3 = param_2[lVar10 + 4];
      fVar25 = (float)uVar26;
      fVar27 = (float)((ulong)uVar26 >> 0x20);
      if (pVar3 == (partition_info)0x0) {
LAB_001003f0:
        fVar16 = 0.0;
        fVar29 = _LC5;
        fVar31 = _LC4;
        fVar33 = _LC5;
        fVar17 = _LC6;
        if (lVar10 != 0) {
LAB_0010026d:
          local_d4 = (endpoints_and_weights)((byte)local_d4 & fVar32 == fVar29);
          fVar33 = fVar32;
        }
        if ((byte)pVar3 != 0) {
          uVar9 = (byte)pVar3 - 1;
          goto LAB_00100291;
        }
      }
      else {
        uVar9 = (byte)pVar3 - 1;
        ppVar7 = ppVar12;
        fVar29 = _LC3;
        fVar31 = _LC2;
        do {
          uVar13 = (ulong)(byte)ppVar7[0xf0];
          ppVar7 = ppVar7 + 1;
          fVar16 = (*(float *)(piVar15 + uVar13 * 4) - fVar24) * fVar23 +
                   (*(float *)(piVar14 + uVar13 * 4) - fVar22) * fVar27 +
                   (*(float *)(piVar8 + uVar13 * 4) - fVar20) * fVar25;
          *(float *)(param_3 + uVar13 * 4 + 0xa0) = fVar16;
          fVar17 = fVar16;
          if (fVar16 <= fVar31) {
            fVar17 = fVar31;
          }
          if (fVar29 <= fVar16) {
            fVar16 = fVar29;
          }
          fVar29 = fVar16;
          fVar31 = fVar17;
        } while (ppVar12 + (ulong)uVar9 + 1 != ppVar7);
        if (fVar17 <= fVar16) goto LAB_001003f0;
        fVar29 = fVar17 - fVar16;
        fVar31 = fVar4 / fVar29;
        fVar29 = fVar29 * fVar29;
        fVar33 = fVar29;
        if (lVar10 != 0) goto LAB_0010026d;
LAB_00100291:
        ppVar7 = ppVar12;
        do {
          pVar3 = ppVar7[0xf0];
          fVar30 = (*(float *)(param_3 + (ulong)(byte)pVar3 * 4 + 0xa0) - fVar16) * fVar31;
          fVar32 = fVar4;
          if ((fVar30 <= fVar4) && (fVar32 = fVar30, fVar30 <= 0.0)) {
            fVar32 = 0.0;
          }
          *(float *)(param_3 + (ulong)(byte)pVar3 * 4 + 0xa0) = fVar32;
          ppVar7 = ppVar7 + 1;
          *(float *)(param_3 + (ulong)(byte)pVar3 * 4 + 0x400) = fVar29 * fVar28;
        } while (ppVar12 + (ulong)uVar9 + 1 != ppVar7);
      }
      fVar30 = fVar16 * fVar25 + fVar20;
      fVar19 = fVar16 * fVar27 + fVar22;
      fVar16 = fVar16 * fVar23 + fVar24;
      fVar20 = fVar17 * fVar25 + fVar20;
      fVar22 = fVar17 * fVar27 + fVar22;
      fVar24 = fVar17 * fVar23 + fVar24;
      fVar32 = fVar20;
      fVar23 = *(float *)(param_1 + 0xdf4);
      fVar25 = fVar22;
      fVar27 = fVar30;
      fVar29 = *(float *)(param_1 + 0xdd4);
      fVar31 = fVar19;
      if (((param_4 != 1) &&
          (fVar23 = fVar22, fVar25 = *(float *)(param_1 + 0xdf8), fVar29 = fVar19,
          fVar31 = *(float *)(param_1 + 0xdd8), param_4 != 2)) &&
         (fVar32 = *(float *)(param_1 + 0xdf0), fVar23 = fVar20, fVar25 = fVar22,
         fVar27 = *(float *)(param_1 + 0xdd0), fVar29 = fVar30, fVar31 = fVar19, param_4 != 0)) {
        fVar32 = fVar20;
        fVar23 = fVar22;
        fVar25 = fVar24;
        fVar24 = *(float *)(param_1 + 0xdfc);
        fVar27 = fVar30;
        fVar29 = fVar19;
        fVar31 = fVar16;
        fVar16 = *(float *)(param_1 + 0xddc);
      }
      lVar11 = lVar10 + 1;
      ppVar12 = ppVar12 + 0xd8;
      peVar1 = param_3 + lVar10 * 0x10 + 0x20;
      *(float *)peVar1 = fVar27;
      *(float *)(peVar1 + 4) = fVar29;
      *(float *)(peVar1 + 8) = fVar31;
      *(float *)(peVar1 + 0xc) = fVar16;
      peVar1 = param_3 + lVar10 * 0x10 + 0x60;
      *(float *)peVar1 = fVar32;
      *(float *)(peVar1 + 4) = fVar23;
      *(float *)(peVar1 + 8) = fVar25;
      *(float *)(peVar1 + 0xc) = fVar24;
      lVar10 = lVar11;
      fVar32 = fVar33;
    } while ((uint)lVar11 < uVar6);
  }
  uVar9 = (uint)(byte)iVar2;
  uVar6 = uVar9 + 3 & 0xfffffffc;
  if (uVar9 < uVar6) {
    __n = (ulong)(uVar6 - uVar9) * 4;
    memset(param_3 + (ulong)(byte)iVar2 * 4 + 0xa0,0,__n);
    memset(param_3 + (ulong)(byte)iVar2 * 4 + 0x400,0,__n);
  }
  *param_3 = local_d4;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* compute_ideal_colors_and_weights_1_comp(image_block const&, partition_info const&,
   endpoints_and_weights&, unsigned int) */

void compute_ideal_colors_and_weights_1_comp
               (image_block *param_1,partition_info *param_2,endpoints_and_weights *param_3,
               uint param_4)

{
  partition_info *ppVar1;
  size_t __n;
  image_block iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  partition_info *ppVar7;
  ulong uVar8;
  image_block *piVar9;
  endpoints_and_weights eVar10;
  uint uVar11;
  long lVar12;
  partition_info *ppVar13;
  endpoints_and_weights *peVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  uVar3 = *(ushort *)param_2;
  fVar16 = *(float *)(param_1 + 0xe0c);
  fVar26 = *(float *)(param_1 + 0xe00);
  fVar24 = *(float *)(param_1 + 0xe04);
  fVar18 = *(float *)(param_1 + 0xe08);
  *(uint *)(param_3 + 0x10) = (uint)uVar3;
  fVar6 = _LC7;
  iVar2 = param_1[0xdbc];
  if (param_4 == 1) {
    piVar9 = param_1 + 0x370;
  }
  else if (param_4 == 2) {
    piVar9 = param_1 + 0x6e0;
    fVar24 = fVar18;
  }
  else {
    piVar9 = param_1;
    fVar24 = fVar26;
    if (param_4 != 0) {
      piVar9 = param_1 + 0xa50;
      fVar24 = fVar16;
    }
  }
  uVar20 = -(uint)(param_4 == __LC9);
  uVar21 = -(uint)(param_4 == _UNK_00103a64);
  uVar22 = -(uint)(param_4 == _UNK_00103a68);
  uVar23 = -(uint)(param_4 == _UNK_00103a6c);
  if (uVar3 == 0) {
    eVar10 = (endpoints_and_weights)0x1;
  }
  else {
    fVar16 = 0.0;
    lVar12 = 0;
    eVar10 = (endpoints_and_weights)0x1;
    ppVar13 = param_2;
    peVar14 = param_3 + 0x20;
    do {
      fVar26 = _LC6;
      if (param_2[lVar12 + 4] == (partition_info)0x0) {
        if (lVar12 == 0) {
          fVar18 = 0.0;
          fVar16 = _LC5;
        }
        else {
          fVar18 = 0.0;
          eVar10 = (endpoints_and_weights)((byte)eVar10 & fVar16 == _LC5);
        }
      }
      else {
        uVar11 = (byte)param_2[lVar12 + 4] - 1;
        ppVar7 = ppVar13;
        fVar26 = _LC2;
        fVar19 = _LC3;
        do {
          ppVar1 = ppVar7 + 0xf0;
          ppVar7 = ppVar7 + 1;
          fVar18 = *(float *)(piVar9 + (ulong)(byte)*ppVar1 * 4);
          fVar15 = fVar18;
          if (fVar18 <= fVar26) {
            fVar15 = fVar26;
          }
          fVar26 = fVar15;
          if (fVar19 <= fVar18) {
            fVar18 = fVar19;
          }
          fVar19 = fVar18;
        } while (ppVar7 != ppVar13 + (ulong)uVar11 + 1);
        if (fVar26 <= fVar18) {
          fVar18 = 0.0;
          fVar19 = _LC4;
          fVar15 = _LC5;
          fVar26 = _LC6;
        }
        else {
          fVar15 = fVar26 - fVar18;
          fVar19 = fVar6 / fVar15;
          fVar15 = fVar15 * fVar15;
        }
        fVar25 = fVar15;
        if (lVar12 != 0) {
          eVar10 = (endpoints_and_weights)((byte)eVar10 & fVar15 == fVar16);
          fVar25 = fVar16;
        }
        ppVar7 = ppVar13;
        do {
          uVar8 = (ulong)(byte)ppVar7[0xf0];
          fVar17 = (*(float *)(piVar9 + uVar8 * 4) - fVar18) * fVar19;
          fVar16 = fVar6;
          if ((fVar17 <= fVar6) && (fVar16 = fVar17, fVar17 <= 0.0)) {
            fVar16 = 0.0;
          }
          ppVar7 = ppVar7 + 1;
          *(float *)(param_3 + uVar8 * 4 + 0xa0) = fVar16;
          *(float *)(param_3 + uVar8 * 4 + 0x400) = fVar15 * fVar24;
          fVar16 = fVar25;
        } while (ppVar13 + (ulong)uVar11 + 1 != ppVar7);
      }
      lVar12 = lVar12 + 1;
      uVar11 = *(uint *)(param_1 + 0xdd4);
      uVar4 = *(uint *)(param_1 + 0xdd8);
      uVar5 = *(uint *)(param_1 + 0xddc);
      ppVar13 = ppVar13 + 0xd8;
      *(uint *)peVar14 = (uint)fVar18 & uVar20 | ~uVar20 & *(uint *)(param_1 + 0xdd0);
      *(uint *)(peVar14 + 4) = (uint)fVar18 & uVar21 | ~uVar21 & uVar11;
      *(uint *)(peVar14 + 8) = (uint)fVar18 & uVar22 | ~uVar22 & uVar4;
      *(uint *)(peVar14 + 0xc) = (uint)fVar18 & uVar23 | ~uVar23 & uVar5;
      uVar11 = *(uint *)(param_1 + 0xdf4);
      uVar4 = *(uint *)(param_1 + 0xdf8);
      uVar5 = *(uint *)(param_1 + 0xdfc);
      *(uint *)(peVar14 + 0x40) = (uint)fVar26 & uVar20 | ~uVar20 & *(uint *)(param_1 + 0xdf0);
      *(uint *)(peVar14 + 0x44) = (uint)fVar26 & uVar21 | ~uVar21 & uVar11;
      *(uint *)(peVar14 + 0x48) = (uint)fVar26 & uVar22 | ~uVar22 & uVar4;
      *(uint *)(peVar14 + 0x4c) = (uint)fVar26 & uVar23 | ~uVar23 & uVar5;
      peVar14 = peVar14 + 0x10;
    } while ((uint)lVar12 < (uint)uVar3);
  }
  uVar20 = (uint)(byte)iVar2;
  uVar21 = uVar20 + 3 & 0xfffffffc;
  if (uVar20 < uVar21) {
    __n = (ulong)(uVar21 - uVar20) * 4;
    memset(param_3 + (ulong)(byte)iVar2 * 4 + 0xa0,0,__n);
    memset(param_3 + (ulong)(byte)iVar2 * 4 + 0x400,0,__n);
  }
  *param_3 = eVar10;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* compute_ideal_colors_and_weights_2_comp(image_block const&, partition_info const&,
   endpoints_and_weights&, int, int) */

void compute_ideal_colors_and_weights_2_comp
               (image_block *param_1,partition_info *param_2,endpoints_and_weights *param_3,
               int param_4,int param_5)

{
  size_t __n;
  undefined1 auVar1 [16];
  image_block iVar2;
  partition_info pVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  byte bVar11;
  uint uVar12;
  partition_info *ppVar13;
  image_block *piVar14;
  uint uVar15;
  partition_info *ppVar16;
  partition_metrics *ppVar17;
  long lVar18;
  ulong uVar19;
  endpoints_and_weights *peVar20;
  image_block *piVar21;
  long in_FS_OFFSET;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar29;
  float fVar30;
  undefined1 auVar28 [16];
  float fVar31;
  float fVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fStack_f4;
  float local_e0;
  endpoints_and_weights local_d9;
  partition_metrics local_c8 [136];
  long local_40;
  
  auVar1 = *(undefined1 (*) [16])(param_1 + 0xe00);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = (uint)*(ushort *)param_2;
  *(uint *)(param_3 + 0x10) = uVar12;
  iVar2 = param_1[0xdbc];
  bVar11 = ((byte)param_4 ^ 1) & 1;
  fStack_f4 = auVar1._4_4_;
  piVar14 = param_1;
  if ((param_5 == 1) && (bVar11 != 0)) {
    piVar21 = param_1 + 0x370;
    fVar41 = _LC11 * (auVar1._0_4_ + 0.0 + fStack_f4 + 0.0);
  }
  else if ((param_5 == 2) && (bVar11 != 0)) {
    piVar21 = param_1 + 0x6e0;
    fVar41 = _LC11 * (auVar1._0_4_ + 0.0 + auVar1._8_4_ + 0.0);
  }
  else {
    piVar14 = param_1 + 0x370;
    piVar21 = param_1 + 0x6e0;
    fVar41 = _LC11 * (fStack_f4 + 0.0 + auVar1._8_4_ + 0.0);
  }
  ppVar17 = local_c8;
  compute_avgs_and_dirs_2_comp(param_2,param_1,param_4,param_5,ppVar17);
  fVar10 = _LC7;
  auVar1 = __LC10;
  uVar37 = -(uint)(param_4 == __LC9);
  uVar38 = -(uint)(param_4 == _UNK_00103a64);
  uVar39 = -(uint)(param_4 == _UNK_00103a68);
  uVar40 = -(uint)(param_4 == _UNK_00103a6c);
  uVar33 = -(uint)(param_5 == __LC9);
  uVar34 = -(uint)(param_5 == _UNK_00103a64);
  uVar35 = -(uint)(param_5 == _UNK_00103a68);
  uVar36 = -(uint)(param_5 == _UNK_00103a6c);
  if (uVar12 == 0) {
    local_d9 = (endpoints_and_weights)0x1;
  }
  else {
    local_d9 = (endpoints_and_weights)0x1;
    lVar18 = 0;
    local_e0 = 0.0;
    ppVar16 = param_2;
    peVar20 = param_3 + 0x60;
    do {
      auVar28 = *(undefined1 (*) [16])(ppVar17 + 0x10);
      fVar27 = auVar28._0_4_;
      fVar29 = auVar28._8_4_;
      fVar30 = auVar28._12_4_;
      if (fVar29 + fVar27 + fVar30 + auVar28._4_4_ < 0.0) {
        auVar28._4_4_ = 0.0 - auVar28._4_4_;
        auVar28._0_4_ = 0.0 - fVar27;
        auVar28._8_4_ = 0.0 - fVar29;
        auVar28._12_4_ = 0.0 - fVar30;
      }
      fVar27 = *(float *)ppVar17;
      fVar29 = *(float *)(ppVar17 + 4);
      fVar30 = *(float *)(ppVar17 + 8);
      fVar43 = *(float *)(ppVar17 + 0xc);
      auVar25._0_4_ =
           auVar28._0_4_ * auVar28._0_4_ + auVar28._8_4_ * auVar28._8_4_ +
           auVar28._4_4_ * auVar28._4_4_ + auVar28._12_4_ * auVar28._12_4_;
      auVar26 = auVar1;
      if (auVar25._0_4_ != 0.0) {
        auVar25._4_4_ = auVar25._0_4_;
        auVar25._8_4_ = auVar25._0_4_;
        auVar25._12_4_ = auVar25._0_4_;
        auVar26 = sqrtps(auVar25,auVar25);
        auVar26 = divps(auVar28,auVar26);
      }
      pVar3 = param_2[lVar18 + 4];
      fVar31 = auVar26._0_4_;
      fVar32 = auVar26._4_4_;
      if (pVar3 == (partition_info)0x0) {
LAB_00100d30:
        fVar22 = 0.0;
        fVar30 = _LC5;
        fVar43 = _LC4;
        fVar23 = _LC6;
        fVar24 = _LC5;
        if (lVar18 != 0) {
LAB_00100b8d:
          local_d9 = (endpoints_and_weights)((byte)local_d9 & local_e0 == fVar30);
          fVar24 = local_e0;
        }
        local_e0 = fVar24;
        if ((byte)pVar3 != 0) {
          uVar15 = (byte)pVar3 - 1;
          fVar24 = local_e0;
          goto LAB_00100bb7;
        }
      }
      else {
        uVar15 = (byte)pVar3 - 1;
        ppVar13 = ppVar16;
        fVar24 = _LC3;
        fVar42 = _LC2;
        do {
          uVar19 = (ulong)(byte)ppVar13[0xf0];
          ppVar13 = ppVar13 + 1;
          fVar22 = (0.0 - fVar30) * auVar26._8_4_ +
                   (*(float *)(piVar14 + uVar19 * 4) - fVar27) * fVar31 +
                   (0.0 - fVar43) * auVar26._12_4_ +
                   (*(float *)(piVar21 + uVar19 * 4) - fVar29) * fVar32;
          *(float *)(param_3 + uVar19 * 4 + 0xa0) = fVar22;
          fVar23 = fVar22;
          if (fVar22 <= fVar42) {
            fVar23 = fVar42;
          }
          if (fVar24 <= fVar22) {
            fVar22 = fVar24;
          }
          fVar24 = fVar22;
          fVar42 = fVar23;
        } while (ppVar13 != ppVar16 + (ulong)uVar15 + 1);
        if (fVar23 <= fVar22) goto LAB_00100d30;
        fVar30 = fVar23 - fVar22;
        fVar43 = fVar10 / fVar30;
        fVar30 = fVar30 * fVar30;
        fVar24 = fVar30;
        if (lVar18 != 0) goto LAB_00100b8d;
LAB_00100bb7:
        local_e0 = fVar24;
        ppVar13 = ppVar16;
        do {
          pVar3 = ppVar13[0xf0];
          fVar42 = (*(float *)(param_3 + (ulong)(byte)pVar3 * 4 + 0xa0) - fVar22) * fVar43;
          fVar24 = fVar10;
          if ((fVar42 <= fVar10) && (fVar24 = fVar42, fVar42 <= 0.0)) {
            fVar24 = 0.0;
          }
          *(float *)(param_3 + (ulong)(byte)pVar3 * 4 + 0xa0) = fVar24;
          ppVar13 = ppVar13 + 1;
          *(float *)(param_3 + (ulong)(byte)pVar3 * 4 + 0x400) = fVar30 * fVar41;
        } while (ppVar16 + (ulong)uVar15 + 1 != ppVar13);
      }
      lVar18 = lVar18 + 1;
      uVar15 = *(uint *)(param_1 + 0xdd4);
      uVar4 = *(uint *)(param_1 + 0xdd8);
      uVar5 = *(uint *)(param_1 + 0xddc);
      ppVar17 = ppVar17 + 0x20;
      ppVar16 = ppVar16 + 0xd8;
      uVar6 = *(uint *)(param_1 + 0xdf0);
      uVar7 = *(uint *)(param_1 + 0xdf4);
      uVar8 = *(uint *)(param_1 + 0xdf8);
      uVar9 = *(uint *)(param_1 + 0xdfc);
      fVar30 = fVar22 * fVar31 + fVar27;
      fVar43 = fVar22 * fVar32 + fVar29;
      fVar27 = fVar23 * fVar31 + fVar27;
      fVar29 = fVar23 * fVar32 + fVar29;
      *(uint *)(peVar20 + -0x40) =
           (uint)fVar43 & uVar33 |
           ~uVar33 & ((uint)fVar30 & uVar37 | ~uVar37 & *(uint *)(param_1 + 0xdd0));
      *(uint *)(peVar20 + -0x3c) =
           (uint)fVar43 & uVar34 | ~uVar34 & ((uint)fVar30 & uVar38 | ~uVar38 & uVar15);
      *(uint *)(peVar20 + -0x38) =
           (uint)fVar43 & uVar35 | ~uVar35 & ((uint)fVar30 & uVar39 | ~uVar39 & uVar4);
      *(uint *)(peVar20 + -0x34) =
           (uint)fVar43 & uVar36 | ~uVar36 & ((uint)fVar30 & uVar40 | ~uVar40 & uVar5);
      *(uint *)peVar20 = (uint)fVar29 & uVar33 | ~uVar33 & ((uint)fVar27 & uVar37 | ~uVar37 & uVar6)
      ;
      *(uint *)(peVar20 + 4) =
           (uint)fVar29 & uVar34 | ~uVar34 & ((uint)fVar27 & uVar38 | ~uVar38 & uVar7);
      *(uint *)(peVar20 + 8) =
           (uint)fVar29 & uVar35 | ~uVar35 & ((uint)fVar27 & uVar39 | ~uVar39 & uVar8);
      *(uint *)(peVar20 + 0xc) =
           (uint)fVar29 & uVar36 | ~uVar36 & ((uint)fVar27 & uVar40 | ~uVar40 & uVar9);
      peVar20 = peVar20 + 0x10;
    } while ((uint)lVar18 < uVar12);
  }
  uVar33 = (uint)(byte)iVar2;
  uVar12 = uVar33 + 3 & 0xfffffffc;
  if (uVar33 < uVar12) {
    __n = (ulong)(uVar12 - uVar33) * 4;
    memset(param_3 + (ulong)(byte)iVar2 * 4 + 0xa0,0,__n);
    memset(param_3 + (ulong)(byte)iVar2 * 4 + 0x400,0,__n);
  }
  *param_3 = local_d9;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* bilinear_infill_vla(decimation_info const&, float const*, unsigned int) */

void bilinear_infill_vla(decimation_info *param_1,float *param_2,uint param_3)

{
  return;
}



/* bilinear_infill_vla_2(decimation_info const&, float const*, unsigned int) */

void bilinear_infill_vla_2(decimation_info *param_1,float *param_2,uint param_3)

{
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* compute_ideal_colors_and_weights_1plane(image_block const&, partition_info const&,
   endpoints_and_weights&) */

void compute_ideal_colors_and_weights_1plane
               (image_block *param_1,partition_info *param_2,endpoints_and_weights *param_3)

{
  partition_info *ppVar1;
  size_t __n;
  image_block *piVar2;
  image_block iVar3;
  partition_info pVar4;
  ushort uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  int iVar9;
  partition_info *ppVar10;
  uint uVar11;
  partition_info *ppVar12;
  long lVar13;
  partition_metrics *ppVar14;
  endpoints_and_weights *peVar15;
  endpoints_and_weights eVar16;
  uint uVar17;
  long in_FS_OFFSET;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar24;
  float fVar25;
  undefined1 auVar23 [16];
  float fVar26;
  float fVar27;
  float fVar29;
  float fVar30;
  undefined1 auVar28 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  partition_metrics local_c8 [4];
  undefined4 auStack_c4 [33];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  auVar21._0_4_ = -(uint)(*(float *)(param_1 + 0xdd0) == *(float *)(param_1 + 0xdf0)) & __LC13;
  auVar21._4_4_ =
       -(uint)(*(float *)(param_1 + 0xdd4) == *(float *)(param_1 + 0xdf4)) & _UNK_00103a84;
  auVar21._8_4_ =
       -(uint)(*(float *)(param_1 + 0xdd8) == *(float *)(param_1 + 0xdf8)) & _UNK_00103a88;
  auVar21._12_4_ =
       -(uint)(*(float *)(param_1 + 0xddc) == *(float *)(param_1 + 0xdfc)) & _UNK_00103a8c;
  iVar9 = movmskps(0,auVar21);
  if (iVar9 == 0) {
    ppVar14 = local_c8;
    iVar3 = param_1[0xdbc];
    uVar5 = *(ushort *)param_2;
    fVar32 = (*(float *)(param_1 + 0xe00) + *(float *)(param_1 + 0xe08) +
             *(float *)(param_1 + 0xe04) + *(float *)(param_1 + 0xe0c)) * _LC14;
    compute_avgs_and_dirs_4_comp(param_2,param_1,ppVar14);
    uVar8 = _LC11;
    fVar7 = _LC7;
    uVar17 = (uint)(byte)iVar3;
    peVar15 = param_3 + 0x60;
    lVar13 = 0;
    eVar16 = (endpoints_and_weights)0x1;
    ppVar12 = param_2;
    fVar35 = 0.0;
    do {
      auVar23 = *(undefined1 (*) [16])(ppVar14 + 0x10);
      fVar22 = auVar23._0_4_;
      fVar24 = auVar23._8_4_;
      fVar25 = auVar23._12_4_;
      if (fVar22 + auVar23._4_4_ + fVar24 < 0.0) {
        auVar23._4_4_ = 0.0 - auVar23._4_4_;
        auVar23._0_4_ = 0.0 - fVar22;
        auVar23._8_4_ = 0.0 - fVar24;
        auVar23._12_4_ = 0.0 - fVar25;
      }
      fVar22 = *(float *)ppVar14;
      fVar24 = *(float *)(ppVar14 + 4);
      fVar25 = *(float *)(ppVar14 + 8);
      fVar6 = *(float *)(ppVar14 + 0xc);
      auVar20._0_4_ =
           auVar23._0_4_ * auVar23._0_4_ + auVar23._8_4_ * auVar23._8_4_ +
           auVar23._4_4_ * auVar23._4_4_ + auVar23._12_4_ * auVar23._12_4_;
      auVar28._4_4_ = uVar8;
      auVar28._0_4_ = uVar8;
      auVar28._8_4_ = uVar8;
      auVar28._12_4_ = uVar8;
      if (auVar20._0_4_ != 0.0) {
        auVar20._4_4_ = auVar20._0_4_;
        auVar20._8_4_ = auVar20._0_4_;
        auVar20._12_4_ = auVar20._0_4_;
        auVar21 = sqrtps(auVar20,auVar20);
        auVar28 = divps(auVar23,auVar21);
      }
      pVar4 = param_2[lVar13 + 4];
      fVar27 = auVar28._0_4_;
      fVar29 = auVar28._4_4_;
      fVar30 = auVar28._8_4_;
      fVar31 = auVar28._12_4_;
      if (pVar4 == (partition_info)0x0) {
LAB_00101438:
        fVar18 = 0.0;
        fVar26 = _LC6;
        fVar33 = _LC4;
        fVar34 = _LC5;
        fVar19 = _LC5;
        if (lVar13 != 0) {
LAB_001012f6:
          eVar16 = (endpoints_and_weights)((byte)eVar16 & fVar35 == fVar19);
          fVar34 = fVar35;
        }
        *(float *)peVar15 = fVar26 * fVar27 + fVar22;
        *(float *)(peVar15 + 4) = fVar26 * fVar29 + fVar24;
        *(float *)(peVar15 + 8) = fVar26 * fVar30 + fVar25;
        *(float *)(peVar15 + 0xc) = fVar26 * fVar31 + fVar6;
        *(float *)(peVar15 + -0x40) = fVar18 * fVar27 + fVar22;
        *(float *)(peVar15 + -0x3c) = fVar18 * fVar29 + fVar24;
        *(float *)(peVar15 + -0x38) = fVar18 * fVar30 + fVar25;
        *(float *)(peVar15 + -0x34) = fVar18 * fVar31 + fVar6;
        if (pVar4 != (partition_info)0x0) {
          uVar11 = (byte)pVar4 - 1;
          goto LAB_0010133d;
        }
      }
      else {
        uVar11 = (byte)pVar4 - 1;
        ppVar10 = ppVar12;
        fVar26 = _LC2;
        fVar33 = _LC3;
        do {
          ppVar1 = ppVar10 + 0xf0;
          ppVar10 = ppVar10 + 1;
          piVar2 = param_1 + (ulong)(byte)*ppVar1 * 4;
          fVar18 = (*(float *)(piVar2 + 0x6e0) - fVar25) * fVar30 +
                   (*(float *)piVar2 - fVar22) * fVar27 +
                   (*(float *)(piVar2 + 0xa50) - fVar6) * fVar31 +
                   (*(float *)(piVar2 + 0x370) - fVar24) * fVar29;
          *(float *)(param_3 + (ulong)(byte)*ppVar1 * 4 + 0xa0) = fVar18;
          fVar34 = fVar18;
          if (fVar18 <= fVar26) {
            fVar34 = fVar26;
          }
          fVar26 = fVar34;
          if (fVar33 <= fVar18) {
            fVar18 = fVar33;
          }
          fVar33 = fVar18;
        } while (ppVar12 + (ulong)uVar11 + 1 != ppVar10);
        if (fVar26 <= fVar18) goto LAB_00101438;
        fVar34 = fVar26 - fVar18;
        fVar33 = fVar7 / fVar34;
        fVar34 = fVar34 * fVar34;
        fVar19 = fVar34;
        if (lVar13 != 0) goto LAB_001012f6;
        *(float *)peVar15 = fVar26 * fVar27 + fVar22;
        *(float *)(peVar15 + 4) = fVar26 * fVar29 + fVar24;
        *(float *)(peVar15 + 8) = fVar26 * fVar30 + fVar25;
        *(float *)(peVar15 + 0xc) = fVar26 * fVar31 + fVar6;
        *(float *)(peVar15 + -0x40) = fVar18 * fVar27 + fVar22;
        *(float *)(peVar15 + -0x3c) = fVar18 * fVar29 + fVar24;
        *(float *)(peVar15 + -0x38) = fVar18 * fVar30 + fVar25;
        *(float *)(peVar15 + -0x34) = fVar18 * fVar31 + fVar6;
LAB_0010133d:
        ppVar10 = ppVar12;
        do {
          pVar4 = ppVar10[0xf0];
          fVar22 = (*(float *)(param_3 + (ulong)(byte)pVar4 * 4 + 0xa0) - fVar18) * fVar33;
          fVar35 = fVar7;
          if ((fVar22 <= fVar7) && (fVar35 = fVar22, fVar22 <= 0.0)) {
            fVar35 = 0.0;
          }
          ppVar10 = ppVar10 + 1;
          *(float *)(param_3 + (ulong)(byte)pVar4 * 4 + 0xa0) = fVar35;
          *(float *)(param_3 + (ulong)(byte)pVar4 * 4 + 0x400) = fVar19 * fVar32;
        } while (ppVar12 + (ulong)uVar11 + 1 != ppVar10);
      }
      lVar13 = lVar13 + 1;
      ppVar14 = ppVar14 + 0x20;
      ppVar12 = ppVar12 + 0xd8;
      peVar15 = peVar15 + 0x10;
      fVar35 = fVar34;
    } while ((uint)lVar13 < (uint)uVar5);
    uVar11 = uVar17 + 3 & 0xfffffffc;
    if (uVar17 < uVar11) {
      __n = (ulong)(uVar11 - uVar17) * 4;
      memset(param_3 + (ulong)(byte)iVar3 * 4 + 0xa0,0,__n);
      memset(param_3 + (ulong)(byte)iVar3 * 4 + 0x400,0,__n);
    }
    *param_3 = eVar16;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    compute_ideal_colors_and_weights_3_comp(param_1,param_2,param_3,3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* compute_ideal_colors_and_weights_2planes(block_size_descriptor const&, image_block const&,
   unsigned int, endpoints_and_weights&, endpoints_and_weights&) */

void compute_ideal_colors_and_weights_2planes
               (block_size_descriptor *param_1,image_block *param_2,uint param_3,
               endpoints_and_weights *param_4,endpoints_and_weights *param_5)

{
  partition_info *ppVar1;
  undefined1 auVar2 [16];
  int iVar3;
  uint uVar4;
  
  ppVar1 = (partition_info *)(param_1 + 0xe07560);
  auVar2._4_4_ = -(uint)(*(float *)(param_2 + 0xdd4) == *(float *)(param_2 + 0xdf4)) & _UNK_00103a84
  ;
  auVar2._0_4_ = -(uint)(*(float *)(param_2 + 0xdd0) == *(float *)(param_2 + 0xdf0)) & __LC13;
  auVar2._8_4_ = -(uint)(*(float *)(param_2 + 0xdd8) == *(float *)(param_2 + 0xdf8)) & _UNK_00103a88
  ;
  auVar2._12_4_ =
       -(uint)(*(float *)(param_2 + 0xddc) == *(float *)(param_2 + 0xdfc)) & _UNK_00103a8c;
  iVar3 = movmskps((int)param_4,auVar2);
  if (param_3 == 1) {
    if (iVar3 == 0) {
      compute_ideal_colors_and_weights_3_comp(param_2,ppVar1,param_4,1);
    }
    else {
      compute_ideal_colors_and_weights_2_comp(param_2,ppVar1,param_4,0,2);
    }
    uVar4 = 1;
  }
  else if (param_3 == 2) {
    if (iVar3 == 0) {
      compute_ideal_colors_and_weights_3_comp(param_2,ppVar1,param_4,2);
    }
    else {
      compute_ideal_colors_and_weights_2_comp(param_2,ppVar1,param_4,0,1);
    }
    uVar4 = 2;
  }
  else if (param_3 == 0) {
    if (iVar3 == 0) {
      compute_ideal_colors_and_weights_3_comp(param_2,ppVar1,param_4,0);
      uVar4 = 0;
    }
    else {
      compute_ideal_colors_and_weights_2_comp(param_2,ppVar1,param_4,1,2);
      uVar4 = 0;
    }
  }
  else {
    compute_ideal_colors_and_weights_3_comp(param_2,ppVar1,param_4,3);
    uVar4 = 3;
  }
  compute_ideal_colors_and_weights_1_comp(param_2,ppVar1,param_5,uVar4);
  return;
}



/* compute_error_of_weight_set_1plane(endpoints_and_weights const&, decimation_info const&, float
   const*) */

undefined8
compute_error_of_weight_set_1plane
          (endpoints_and_weights *param_1,decimation_info *param_2,float *param_3)

{
  float *pfVar1;
  endpoints_and_weights *peVar2;
  decimation_info dVar3;
  long lVar4;
  uint uVar5;
  endpoints_and_weights *peVar6;
  ulong uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  dVar3 = *param_2;
  if ((byte)param_2[1] < 3) {
    if (param_2[1] == (decimation_info)0x2) {
      fVar11 = 0.0;
      fVar12 = 0.0;
      fVar13 = 0.0;
      fVar14 = 0.0;
      uVar7 = 0;
      peVar6 = param_1 + 0xa0;
      do {
        uVar5 = (uint)uVar7;
        uVar7 = (ulong)(uVar5 + 4);
        uVar9 = bilinear_infill_vla_2(param_2,param_3,uVar5);
        fVar8 = (float)uVar9 - *(float *)peVar6;
        fVar10 = (float)((ulong)uVar9 >> 0x20) - *(float *)(peVar6 + 4);
        fVar11 = fVar11 + fVar8 * fVar8 * *(float *)(peVar6 + 0x360);
        fVar12 = fVar12 + fVar10 * fVar10 * *(float *)(peVar6 + 0x364);
        fVar13 = fVar13 + (extraout_XMM0_Dc_00 - *(float *)(peVar6 + 8)) *
                          (extraout_XMM0_Dc_00 - *(float *)(peVar6 + 8)) *
                          *(float *)(peVar6 + 0x368);
        fVar14 = fVar14 + (extraout_XMM0_Dd_00 - *(float *)(peVar6 + 0xc)) *
                          (extraout_XMM0_Dd_00 - *(float *)(peVar6 + 0xc)) *
                          *(float *)(peVar6 + 0x36c);
        peVar6 = peVar6 + 0x10;
      } while ((uint)uVar7 < (uint)(byte)dVar3);
    }
    else {
      lVar4 = 0;
      fVar11 = 0.0;
      fVar12 = 0.0;
      fVar13 = 0.0;
      fVar14 = 0.0;
      uVar5 = 0;
      do {
        pfVar1 = (float *)((long)param_3 + lVar4);
        peVar6 = param_1 + lVar4 + 0xa0;
        uVar5 = uVar5 + 4;
        peVar2 = param_1 + lVar4 + 0x400;
        lVar4 = lVar4 + 0x10;
        fVar11 = fVar11 + (*pfVar1 - *(float *)peVar6) * (*pfVar1 - *(float *)peVar6) *
                          *(float *)peVar2;
        fVar12 = fVar12 + (pfVar1[1] - *(float *)(peVar6 + 4)) *
                          (pfVar1[1] - *(float *)(peVar6 + 4)) * *(float *)(peVar2 + 4);
        fVar13 = fVar13 + (pfVar1[2] - *(float *)(peVar6 + 8)) *
                          (pfVar1[2] - *(float *)(peVar6 + 8)) * *(float *)(peVar2 + 8);
        fVar14 = fVar14 + (pfVar1[3] - *(float *)(peVar6 + 0xc)) *
                          (pfVar1[3] - *(float *)(peVar6 + 0xc)) * *(float *)(peVar2 + 0xc);
      } while (uVar5 < (byte)dVar3);
    }
  }
  else {
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    uVar7 = 0;
    peVar6 = param_1 + 0xa0;
    do {
      uVar5 = (uint)uVar7;
      uVar7 = (ulong)(uVar5 + 4);
      uVar9 = bilinear_infill_vla(param_2,param_3,uVar5);
      fVar8 = (float)uVar9 - *(float *)peVar6;
      fVar10 = (float)((ulong)uVar9 >> 0x20) - *(float *)(peVar6 + 4);
      fVar11 = fVar11 + fVar8 * fVar8 * *(float *)(peVar6 + 0x360);
      fVar12 = fVar12 + fVar10 * fVar10 * *(float *)(peVar6 + 0x364);
      fVar13 = fVar13 + (extraout_XMM0_Dc - *(float *)(peVar6 + 8)) *
                        (extraout_XMM0_Dc - *(float *)(peVar6 + 8)) * *(float *)(peVar6 + 0x368);
      fVar14 = fVar14 + (extraout_XMM0_Dd - *(float *)(peVar6 + 0xc)) *
                        (extraout_XMM0_Dd - *(float *)(peVar6 + 0xc)) * *(float *)(peVar6 + 0x36c);
      peVar6 = peVar6 + 0x10;
    } while ((uint)uVar7 < (uint)(byte)dVar3);
  }
  return CONCAT44(fVar14 + fVar12,fVar13 + fVar11 + fVar14 + fVar12);
}



/* compute_error_of_weight_set_2planes(endpoints_and_weights const&, endpoints_and_weights const&,
   decimation_info const&, float const*, float const*) */

undefined8
compute_error_of_weight_set_2planes
          (endpoints_and_weights *param_1,endpoints_and_weights *param_2,decimation_info *param_3,
          float *param_4,float *param_5)

{
  endpoints_and_weights *peVar1;
  float *pfVar2;
  float *pfVar3;
  endpoints_and_weights *peVar4;
  endpoints_and_weights *peVar5;
  endpoints_and_weights *peVar6;
  decimation_info dVar7;
  uint uVar8;
  decimation_info *pdVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  dVar7 = *param_3;
  if ((byte)param_3[1] < 3) {
    if (param_3[1] == (decimation_info)0x2) {
      lVar10 = 0xa0;
      fVar19 = 0.0;
      fVar20 = 0.0;
      fVar21 = 0.0;
      fVar22 = 0.0;
      uVar11 = 0;
      do {
        uVar8 = (uint)uVar11;
        pdVar9 = param_3;
        uVar13 = bilinear_infill_vla_2(param_3,param_4,uVar8);
        peVar1 = param_1 + lVar10;
        fVar12 = (float)uVar13 - *(float *)peVar1;
        fVar14 = (float)((ulong)uVar13 >> 0x20) - *(float *)(peVar1 + 4);
        peVar4 = param_1 + lVar10 + 0x360;
        uVar11 = (ulong)(uVar8 + 4);
        fVar15 = *(float *)peVar4 * fVar12 * fVar12;
        fVar16 = *(float *)(peVar4 + 4) * fVar14 * fVar14;
        fVar17 = *(float *)(peVar4 + 8) *
                 (extraout_XMM0_Dc_01 - *(float *)(peVar1 + 8)) *
                 (extraout_XMM0_Dc_01 - *(float *)(peVar1 + 8));
        fVar18 = *(float *)(peVar4 + 0xc) *
                 (extraout_XMM0_Dd_01 - *(float *)(peVar1 + 0xc)) *
                 (extraout_XMM0_Dd_01 - *(float *)(peVar1 + 0xc));
        uVar13 = bilinear_infill_vla_2(pdVar9,param_5,uVar8);
        peVar1 = param_2 + lVar10;
        fVar12 = (float)uVar13 - *(float *)peVar1;
        fVar14 = (float)((ulong)uVar13 >> 0x20) - *(float *)(peVar1 + 4);
        peVar4 = param_2 + lVar10 + 0x360;
        lVar10 = lVar10 + 0x10;
        fVar19 = fVar19 + fVar12 * fVar12 * *(float *)peVar4 + fVar15;
        fVar20 = fVar20 + fVar14 * fVar14 * *(float *)(peVar4 + 4) + fVar16;
        fVar21 = fVar21 + (extraout_XMM0_Dc_02 - *(float *)(peVar1 + 8)) *
                          (extraout_XMM0_Dc_02 - *(float *)(peVar1 + 8)) * *(float *)(peVar4 + 8) +
                          fVar17;
        fVar22 = fVar22 + (extraout_XMM0_Dd_02 - *(float *)(peVar1 + 0xc)) *
                          (extraout_XMM0_Dd_02 - *(float *)(peVar1 + 0xc)) *
                          *(float *)(peVar4 + 0xc) + fVar18;
      } while ((uint)uVar11 < (uint)(byte)dVar7);
    }
    else {
      lVar10 = 0;
      fVar19 = 0.0;
      fVar20 = 0.0;
      fVar21 = 0.0;
      fVar22 = 0.0;
      uVar8 = 0;
      do {
        pfVar2 = (float *)((long)param_4 + lVar10);
        pfVar3 = (float *)((long)param_5 + lVar10);
        uVar8 = uVar8 + 4;
        peVar1 = param_1 + lVar10 + 0xa0;
        peVar4 = param_2 + lVar10 + 0xa0;
        peVar5 = param_2 + lVar10 + 0x400;
        peVar6 = param_1 + lVar10 + 0x400;
        lVar10 = lVar10 + 0x10;
        fVar19 = fVar19 + (*pfVar3 - *(float *)peVar4) * (*pfVar3 - *(float *)peVar4) *
                          *(float *)peVar5 +
                          (*pfVar2 - *(float *)peVar1) * (*pfVar2 - *(float *)peVar1) *
                          *(float *)peVar6;
        fVar20 = fVar20 + (pfVar3[1] - *(float *)(peVar4 + 4)) *
                          (pfVar3[1] - *(float *)(peVar4 + 4)) * *(float *)(peVar5 + 4) +
                          (pfVar2[1] - *(float *)(peVar1 + 4)) *
                          (pfVar2[1] - *(float *)(peVar1 + 4)) * *(float *)(peVar6 + 4);
        fVar21 = fVar21 + (pfVar3[2] - *(float *)(peVar4 + 8)) *
                          (pfVar3[2] - *(float *)(peVar4 + 8)) * *(float *)(peVar5 + 8) +
                          (pfVar2[2] - *(float *)(peVar1 + 8)) *
                          (pfVar2[2] - *(float *)(peVar1 + 8)) * *(float *)(peVar6 + 8);
        fVar22 = fVar22 + (pfVar3[3] - *(float *)(peVar4 + 0xc)) *
                          (pfVar3[3] - *(float *)(peVar4 + 0xc)) * *(float *)(peVar5 + 0xc) +
                          (pfVar2[3] - *(float *)(peVar1 + 0xc)) *
                          (pfVar2[3] - *(float *)(peVar1 + 0xc)) * *(float *)(peVar6 + 0xc);
      } while (uVar8 < (byte)dVar7);
    }
  }
  else {
    lVar10 = 0xa0;
    fVar19 = 0.0;
    fVar20 = 0.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    uVar11 = 0;
    do {
      uVar8 = (uint)uVar11;
      uVar13 = bilinear_infill_vla(param_3,param_4,uVar8);
      peVar1 = param_1 + lVar10;
      fVar12 = (float)uVar13 - *(float *)peVar1;
      fVar14 = (float)((ulong)uVar13 >> 0x20) - *(float *)(peVar1 + 4);
      peVar4 = param_1 + lVar10 + 0x360;
      uVar11 = (ulong)(uVar8 + 4);
      fVar15 = *(float *)peVar4 * fVar12 * fVar12;
      fVar16 = *(float *)(peVar4 + 4) * fVar14 * fVar14;
      fVar17 = *(float *)(peVar4 + 8) *
               (extraout_XMM0_Dc - *(float *)(peVar1 + 8)) *
               (extraout_XMM0_Dc - *(float *)(peVar1 + 8));
      fVar18 = *(float *)(peVar4 + 0xc) *
               (extraout_XMM0_Dd - *(float *)(peVar1 + 0xc)) *
               (extraout_XMM0_Dd - *(float *)(peVar1 + 0xc));
      uVar13 = bilinear_infill_vla(param_3,param_5,uVar8);
      peVar1 = param_2 + lVar10;
      fVar12 = (float)uVar13 - *(float *)peVar1;
      fVar14 = (float)((ulong)uVar13 >> 0x20) - *(float *)(peVar1 + 4);
      peVar4 = param_2 + lVar10 + 0x360;
      lVar10 = lVar10 + 0x10;
      fVar19 = fVar19 + fVar12 * fVar12 * *(float *)peVar4 + fVar15;
      fVar20 = fVar20 + fVar14 * fVar14 * *(float *)(peVar4 + 4) + fVar16;
      fVar21 = fVar21 + (extraout_XMM0_Dc_00 - *(float *)(peVar1 + 8)) *
                        (extraout_XMM0_Dc_00 - *(float *)(peVar1 + 8)) * *(float *)(peVar4 + 8) +
                        fVar17;
      fVar22 = fVar22 + (extraout_XMM0_Dd_00 - *(float *)(peVar1 + 0xc)) *
                        (extraout_XMM0_Dd_00 - *(float *)(peVar1 + 0xc)) * *(float *)(peVar4 + 0xc)
                        + fVar18;
    } while ((uint)uVar11 < (uint)(byte)dVar7);
  }
  return CONCAT44(fVar22 + fVar20,fVar21 + fVar19 + fVar22 + fVar20);
}



/* compute_ideal_weights_for_decimation(endpoints_and_weights const&, decimation_info const&,
   float*) */

void compute_ideal_weights_for_decimation
               (endpoints_and_weights *param_1,decimation_info *param_2,float *param_3)

{
  float *pfVar1;
  decimation_info dVar2;
  decimation_info dVar3;
  endpoints_and_weights eVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [13];
  uint3 uVar8;
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined1 auVar13 [13];
  undefined1 auVar14 [13];
  undefined1 auVar15 [13];
  float fVar16;
  float fVar17;
  float fVar18;
  uint5 uVar19;
  unkbyte9 Var20;
  undefined1 auVar21 [13];
  undefined1 auVar22 [13];
  undefined1 auVar23 [13];
  undefined1 auVar24 [13];
  float fVar25;
  undefined4 uVar26;
  long lVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  decimation_info *pdVar34;
  decimation_info *pdVar35;
  uint uVar36;
  float *pfVar37;
  long in_FS_OFFSET;
  int iVar38;
  uint uVar42;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar41 [16];
  undefined8 extraout_XMM0_Qb_00;
  uint uVar43;
  float fVar44;
  float fVar48;
  float fVar49;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar50;
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar66 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float local_3a8 [218];
  long local_40;
  
  dVar2 = param_2[2];
  dVar3 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_3 + ((byte)dVar2 - 1 & 0xfffffffc)) = (undefined1  [16])0x0;
  uVar58 = _LC16;
  if ((uint)(byte)dVar3 == (uint)(byte)dVar2) {
    lVar30 = 0;
    uVar28 = 0;
    do {
      uVar39 = *(undefined8 *)(param_1 + lVar30 + 0xa0 + 8);
      uVar28 = uVar28 + 4;
      *(undefined8 *)((long)param_3 + lVar30) = *(undefined8 *)(param_1 + lVar30 + 0xa0);
      ((undefined8 *)((long)param_3 + lVar30))[1] = uVar39;
      lVar30 = lVar30 + 0x10;
    } while (uVar28 < (byte)dVar3);
  }
  else {
    lVar30 = 0;
    eVar4 = *param_1;
    fVar62 = *(float *)(param_1 + 0x400);
    fVar63 = fVar62;
    fVar64 = fVar62;
    fVar65 = fVar62;
    do {
      auVar56._4_4_ = uVar58;
      auVar56._0_4_ = uVar58;
      auVar56._8_4_ = uVar58;
      auVar56._12_4_ = uVar58;
      uVar36 = 0;
      uVar28 = *(uint *)(param_2 + lVar30 + 0x1530);
      auVar7[0xc] = (char)(uVar28 >> 0x18);
      auVar7._0_12_ = ZEXT712(0);
      uVar19 = CONCAT32(auVar7._10_3_,(ushort)(byte)(uVar28 >> 0x10));
      auVar23._5_8_ = 0;
      auVar23._0_5_ = uVar19;
      Var20 = CONCAT72(SUB137(auVar23 << 0x40,6),(ushort)(byte)(uVar28 >> 8));
      auVar45._0_4_ = uVar28 & 0xff;
      auVar45._4_9_ = Var20;
      auVar45._13_3_ = 0;
      pdVar34 = param_2 + lVar30 + 0x1570;
      iVar38 = (int)uVar19;
      uVar8 = auVar7._10_3_ >> 0x10;
      auVar51._4_3_ = uVar8;
      auVar51._0_4_ = iVar38;
      auVar51[7] = 0;
      auVar51[8] = (char)uVar28;
      auVar51._9_3_ = 0;
      auVar51[0xc] = (char)uVar28;
      auVar51._13_3_ = 0;
      auVar40._0_4_ = -(uint)(iVar38 < (int)auVar45._0_4_);
      auVar40._4_4_ = -(uint)((uint)uVar8 < (uint)Var20);
      auVar40._8_4_ = -(uint)((int)auVar45._0_4_ < iVar38);
      auVar40._12_4_ = -(uint)(auVar45._0_4_ < uVar8);
      auVar40 = auVar40 & auVar45 | ~auVar40 & auVar51;
      uVar28 = auVar40._0_4_;
      uVar42 = auVar40._4_4_;
      uVar43 = -(uint)((int)uVar42 < (int)uVar28);
      auVar40 = (undefined1  [16])0x0;
      do {
        pfVar37 = (float *)((long)param_2 * -3 + -0xa50 + (long)pdVar34 * 4);
        uVar59 = *(undefined4 *)pdVar34;
        uVar31 = (ulong)(ushort)uVar59 & 0xffffffffffff00ff;
        auVar9._8_4_ = 0;
        auVar9._0_8_ = uVar31;
        auVar9[0xc] = (char)((uint)uVar59 >> 0x18);
        auVar10[8] = (char)((uint)uVar59 >> 0x10);
        auVar10._0_8_ = uVar31;
        auVar10[9] = 0;
        auVar10._10_3_ = auVar9._10_3_;
        auVar21._5_8_ = 0;
        auVar21._0_5_ = auVar10._8_5_;
        iVar38 = (int)uVar31;
        auVar11[4] = (char)((uint)uVar59 >> 8);
        auVar11._0_4_ = iVar38;
        auVar11[5] = 0;
        auVar11._6_7_ = SUB137(auVar21 << 0x40,6);
        lVar32 = (long)(int)(uint)(uint3)(auVar9._10_3_ >> 0x10);
        if (eVar4 == (endpoints_and_weights)0x0) {
          fVar65 = *(float *)(param_1 + lVar32 * 4 + 0x400);
          fVar64 = *(float *)(param_1 + (long)auVar10._8_4_ * 4 + 0x400);
          fVar62 = *(float *)(param_1 + (long)iVar38 * 4 + 0x400);
          fVar63 = *(float *)(param_1 + (long)auVar11._4_4_ * 4 + 0x400);
        }
        uVar36 = uVar36 + 1;
        pdVar34 = pdVar34 + 0x40;
        auVar57._0_4_ = auVar56._0_4_ + *pfVar37 * fVar62;
        auVar57._4_4_ = auVar56._4_4_ + pfVar37[1] * fVar63;
        auVar57._8_4_ = auVar56._8_4_ + pfVar37[2] * fVar64;
        auVar57._12_4_ = auVar56._12_4_ + pfVar37[3] * fVar65;
        auVar55._0_4_ =
             auVar40._0_4_ + *(float *)(param_1 + (long)iVar38 * 4 + 0xa0) * *pfVar37 * fVar62;
        auVar55._4_4_ =
             auVar40._4_4_ +
             *(float *)(param_1 + (long)auVar11._4_4_ * 4 + 0xa0) * pfVar37[1] * fVar63;
        auVar55._8_4_ =
             auVar40._8_4_ +
             *(float *)(param_1 + (long)auVar10._8_4_ * 4 + 0xa0) * pfVar37[2] * fVar64;
        auVar55._12_4_ =
             auVar40._12_4_ + *(float *)(param_1 + lVar32 * 4 + 0xa0) * pfVar37[3] * fVar65;
        auVar40 = auVar55;
        auVar56 = auVar57;
      } while (uVar36 < (uVar28 & uVar43 | ~uVar43 & uVar42));
      auVar40 = divps(auVar55,auVar57);
      *(undefined1 (*) [16])(param_3 + lVar30) = auVar40;
      lVar30 = lVar30 + 4;
    } while ((uint)lVar30 < (uint)(byte)dVar2);
    uVar31 = 0;
    pfVar37 = local_3a8;
    pdVar34 = param_2;
    uVar59 = uVar58;
    uVar60 = uVar58;
    uVar61 = uVar58;
    if ((byte)param_2[1] < 3) {
      do {
        uVar28 = (uint)uVar31;
        uVar31 = (ulong)(uVar28 + 4);
        pfVar37 = pfVar37 + 4;
        uVar39 = bilinear_infill_vla_2(pdVar34,param_3,uVar28);
        *(undefined8 *)(pfVar37 + -4) = uVar39;
        *(undefined8 *)(pfVar37 + -2) = extraout_XMM0_Qb;
      } while ((uint)uVar31 < (uint)(byte)dVar3);
    }
    else {
      do {
        uVar28 = (uint)uVar31;
        uVar31 = (ulong)(uVar28 + 4);
        uVar39 = bilinear_infill_vla(param_2,param_3,uVar28);
        *(undefined8 *)pfVar37 = uVar39;
        *(undefined8 *)(pfVar37 + 2) = extraout_XMM0_Qb_00;
        pfVar37 = pfVar37 + 4;
      } while ((uint)uVar31 < (uint)(byte)dVar3);
    }
    uVar26 = _LC20;
    fVar25 = _LC18;
    lVar30 = 0;
    auVar66._4_4_ = _LC14;
    auVar66._0_4_ = _LC14;
    auVar66._8_4_ = _LC14;
    auVar66._12_4_ = _LC14;
    do {
      uVar36 = 0;
      pfVar37 = param_3 + lVar30;
      fVar16 = pfVar37[1];
      fVar17 = pfVar37[2];
      fVar18 = pfVar37[3];
      uVar28 = *(uint *)(pdVar34 + lVar30 + 0x1530);
      auVar12[0xc] = (char)(uVar28 >> 0x18);
      auVar12._0_12_ = ZEXT712(0);
      uVar19 = CONCAT32(auVar12._10_3_,(ushort)(byte)(uVar28 >> 0x10));
      auVar24._5_8_ = 0;
      auVar24._0_5_ = uVar19;
      Var20 = CONCAT72(SUB137(auVar24 << 0x40,6),(ushort)(byte)(uVar28 >> 8));
      auVar46._0_4_ = uVar28 & 0xff;
      auVar46._4_9_ = Var20;
      auVar46._13_3_ = 0;
      pdVar35 = param_2 + lVar30 + 0x1570;
      iVar38 = (int)uVar19;
      uVar8 = auVar12._10_3_ >> 0x10;
      auVar52._4_3_ = uVar8;
      auVar52._0_4_ = iVar38;
      auVar52[7] = 0;
      auVar52[8] = (char)uVar28;
      auVar52._9_3_ = 0;
      auVar52[0xc] = (char)uVar28;
      auVar52._13_3_ = 0;
      auVar41._0_4_ = -(uint)(iVar38 < (int)auVar46._0_4_);
      auVar41._4_4_ = -(uint)((uint)uVar8 < (uint)Var20);
      auVar41._8_4_ = -(uint)((int)auVar46._0_4_ < iVar38);
      auVar41._12_4_ = -(uint)(auVar46._0_4_ < uVar8);
      auVar40 = auVar41 & auVar46 | ~auVar41 & auVar52;
      uVar28 = auVar40._0_4_;
      uVar42 = auVar40._4_4_;
      uVar43 = -(uint)((int)uVar42 < (int)uVar28);
      fVar44 = 0.0;
      fVar48 = 0.0;
      fVar49 = 0.0;
      fVar50 = 0.0;
      auVar53._4_4_ = uVar59;
      auVar53._0_4_ = uVar58;
      auVar53._8_4_ = uVar60;
      auVar53._12_4_ = uVar61;
      do {
        pfVar1 = (float *)((long)param_2 * -3 + -0xa50 + (long)pdVar35 * 4);
        uVar5 = *(undefined4 *)pdVar35;
        uVar31 = (ulong)(ushort)uVar5 & 0xffffffffffff00ff;
        auVar13._8_4_ = 0;
        auVar13._0_8_ = uVar31;
        auVar13[0xc] = (char)((uint)uVar5 >> 0x18);
        auVar14[8] = (char)((uint)uVar5 >> 0x10);
        auVar14._0_8_ = uVar31;
        auVar14[9] = 0;
        auVar14._10_3_ = auVar13._10_3_;
        auVar22._5_8_ = 0;
        auVar22._0_5_ = auVar14._8_5_;
        auVar15[4] = (char)((uint)uVar5 >> 8);
        auVar15._0_4_ = (int)uVar31;
        auVar15[5] = 0;
        auVar15._6_7_ = SUB137(auVar22 << 0x40,6);
        lVar32 = (long)(int)uVar31;
        lVar33 = (long)(int)(uint)(uint3)(auVar13._10_3_ >> 0x10);
        lVar27 = (long)auVar14._8_4_;
        lVar29 = (long)auVar15._4_4_;
        if (eVar4 == (endpoints_and_weights)0x0) {
          fVar65 = *(float *)(param_1 + lVar33 * 4 + 0x400);
          fVar64 = *(float *)(param_1 + lVar27 * 4 + 0x400);
          fVar63 = *(float *)(param_1 + lVar29 * 4 + 0x400);
          fVar62 = *(float *)(param_1 + lVar32 * 4 + 0x400);
        }
        uVar36 = uVar36 + 1;
        fVar67 = fVar62 * *pfVar1;
        fVar68 = fVar63 * pfVar1[1];
        fVar69 = fVar64 * pfVar1[2];
        fVar70 = fVar65 * pfVar1[3];
        pdVar35 = pdVar35 + 0x40;
        auVar54._0_4_ = auVar53._0_4_ + *pfVar1 * fVar67;
        auVar54._4_4_ = auVar53._4_4_ + pfVar1[1] * fVar68;
        auVar54._8_4_ = auVar53._8_4_ + pfVar1[2] * fVar69;
        auVar54._12_4_ = auVar53._12_4_ + pfVar1[3] * fVar70;
        fVar44 = fVar44 + (local_3a8[lVar32] - *(float *)(param_1 + lVar32 * 4 + 0xa0)) * fVar67;
        fVar48 = fVar48 + (local_3a8[lVar29] - *(float *)(param_1 + lVar29 * 4 + 0xa0)) * fVar68;
        fVar49 = fVar49 + (local_3a8[lVar27] - *(float *)(param_1 + lVar27 * 4 + 0xa0)) * fVar69;
        fVar50 = fVar50 + (local_3a8[lVar33] - *(float *)(param_1 + lVar33 * 4 + 0xa0)) * fVar70;
        auVar53 = auVar54;
      } while (uVar36 < (uVar28 & uVar43 | ~uVar43 & uVar42));
      auVar47._0_4_ = fVar44 * fVar25;
      auVar47._4_4_ = fVar48 * fVar25;
      auVar47._8_4_ = fVar49 * fVar25;
      auVar47._12_4_ = fVar50 * fVar25;
      auVar40 = divps(auVar47,auVar54);
      auVar6._4_4_ = uVar26;
      auVar6._0_4_ = uVar26;
      auVar6._8_4_ = uVar26;
      auVar6._12_4_ = uVar26;
      auVar40 = maxps(auVar40,auVar6);
      auVar40 = minps(auVar40,auVar66);
      pfVar1 = param_3 + lVar30;
      *pfVar1 = *pfVar37 + auVar40._0_4_;
      pfVar1[1] = fVar16 + auVar40._4_4_;
      pfVar1[2] = fVar17 + auVar40._8_4_;
      pfVar1[3] = fVar18 + auVar40._12_4_;
      lVar30 = lVar30 + 4;
    } while ((uint)lVar30 < (uint)(byte)dVar2);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* compute_quantized_weights_for_decimation(decimation_info const&, float, float, float const*,
   float*, unsigned char*, quant_method) */

void compute_quantized_weights_for_decimation
               (float param_2,float param_3,long param_1,long param_4,long param_5,long param_6,
               uint param_7)

{
  float *pfVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  uint uVar16;
  uint uVar17;
  float fVar18;
  uint uVar19;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auVar20 [16];
  int iVar24;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint uVar36;
  float fVar37;
  uint uVar38;
  float fVar39;
  uint uVar40;
  float fVar41;
  uint uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  fVar12 = _LC27;
  fVar11 = _LC7;
  iVar10 = _UNK_00103a9c;
  iVar9 = _UNK_00103a98;
  iVar8 = _UNK_00103a94;
  iVar7 = __LC25;
  bVar3 = *(byte *)(param_1 + 2);
  uVar13 = 0xffffffff;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_7 < 0x15) {
    uVar13 = *(int *)(CSWTCH_71 + (ulong)param_7 * 4) - 1;
  }
  fVar2 = *(float *)(compute_quantized_weights_for_decimation(decimation_info_const&,float,float,float_const*,float*,unsigned_char*,quant_method)
                     ::quant_levels_m1 + (long)(int)param_7 * 4);
  if (param_3 <= param_2) {
    fVar45 = 0.0;
    param_2 = 0.0;
    fVar18 = _LC23;
    fVar44 = _LC7;
  }
  else {
    fVar44 = _LC7 / (param_3 - param_2);
    fVar45 = param_2 * fVar44;
    fVar18 = (param_3 - param_2) * _LC23;
  }
  lVar14 = (long)(int)param_7 * 0xe2;
  local_58 = *(undefined8 *)(&quant_and_xfer_tables + lVar14);
  uStack_50 = *(undefined8 *)(lVar14 + 0x104038);
  if ((param_7 < 0x15) && (0x10 < *(uint *)(CSWTCH_71 + (ulong)param_7 * 4))) {
    lVar15 = 0;
    local_48 = *(undefined8 *)(lVar14 + 0x104040);
    uStack_40 = *(undefined8 *)(lVar14 + 0x104048);
    do {
      pfVar1 = (float *)(param_4 + lVar15 * 4);
      auVar33._0_4_ = *pfVar1 * fVar44 - fVar45;
      auVar33._4_4_ = pfVar1[1] * fVar44 - fVar45;
      auVar33._8_4_ = pfVar1[2] * fVar44 - fVar45;
      auVar33._12_4_ = pfVar1[3] * fVar44 - fVar45;
      auVar32 = maxps(auVar33,(undefined1  [16])0x0);
      auVar6._4_4_ = fVar11;
      auVar6._0_4_ = fVar11;
      auVar6._8_4_ = fVar11;
      auVar6._12_4_ = fVar11;
      auVar32 = minps(auVar32,auVar6);
      iVar24 = (int)(fVar2 * auVar32._0_4_);
      iVar27 = (int)(fVar2 * auVar32._4_4_);
      iVar28 = (int)(fVar2 * auVar32._8_4_);
      iVar29 = (int)(fVar2 * auVar32._12_4_);
      uVar36 = iVar24 + iVar7;
      uVar38 = iVar27 + iVar8;
      uVar40 = iVar28 + iVar9;
      uVar42 = iVar29 + iVar10;
      uVar16 = CONCAT31(0,*(byte *)((long)&local_58 + (long)iVar24));
      uVar19 = -(uint)((int)uVar36 < (int)uVar13);
      uVar21 = -(uint)((int)uVar38 < (int)uVar13);
      uVar22 = -(uint)((int)uVar40 < (int)uVar13);
      uVar23 = -(uint)((int)uVar42 < (int)uVar13);
      bVar4 = *(byte *)((long)&local_58 + (long)iVar27);
      uVar17 = CONCAT31(0,*(byte *)((long)&local_58 + (long)iVar28));
      bVar5 = *(byte *)((long)&local_58 + (long)iVar29);
      auVar35[0xc] = bVar5;
      auVar35._8_4_ = uVar17;
      auVar35[4] = bVar4;
      auVar35._0_4_ = uVar16;
      auVar35._5_3_ = 0;
      auVar35._13_3_ = 0;
      fVar46 = (float)uVar16;
      fVar47 = (float)bVar4;
      fVar48 = (float)uVar17;
      fVar49 = (float)bVar5;
      uVar16 = CONCAT31(0,*(byte *)((long)&local_58 +
                                   (long)(int)(uVar19 & uVar36 | ~uVar19 & uVar13)));
      bVar4 = *(byte *)((long)&local_58 + (long)(int)(uVar21 & uVar38 | ~uVar21 & uVar13));
      uVar17 = CONCAT31(0,*(byte *)((long)&local_58 +
                                   (long)(int)(uVar22 & uVar40 | ~uVar22 & uVar13)));
      bVar5 = *(byte *)((long)&local_58 + (long)(int)(uVar23 & uVar42 | ~uVar23 & uVar13));
      auVar20[0xc] = bVar5;
      auVar20._8_4_ = uVar17;
      auVar20[4] = bVar4;
      auVar20._0_4_ = uVar16;
      auVar20._5_3_ = 0;
      auVar20._13_3_ = 0;
      fVar37 = (float)uVar16;
      fVar39 = (float)bVar4;
      fVar41 = (float)uVar17;
      fVar43 = (float)bVar5;
      uVar16 = -(uint)(fVar37 + fVar46 < auVar32._0_4_ * fVar12);
      uVar17 = -(uint)(fVar39 + fVar47 < auVar32._4_4_ * fVar12);
      uVar19 = -(uint)(fVar41 + fVar48 < auVar32._8_4_ * fVar12);
      uVar21 = -(uint)(fVar43 + fVar49 < auVar32._12_4_ * fVar12);
      auVar26._4_4_ = uVar17;
      auVar26._0_4_ = uVar16;
      auVar26._8_4_ = uVar19;
      auVar26._12_4_ = uVar21;
      auVar32 = auVar20 & auVar26 | ~auVar26 & auVar35;
      pfVar1 = (float *)(param_5 + lVar15 * 4);
      *pfVar1 = (float)(uVar16 & (uint)fVar37 | ~uVar16 & (uint)fVar46) * fVar18 + param_2;
      pfVar1[1] = (float)(uVar17 & (uint)fVar39 | ~uVar17 & (uint)fVar47) * fVar18 + param_2;
      pfVar1[2] = (float)(uVar19 & (uint)fVar41 | ~uVar19 & (uint)fVar48) * fVar18 + param_2;
      pfVar1[3] = (float)(uVar21 & (uint)fVar43 | ~uVar21 & (uint)fVar49) * fVar18 + param_2;
      *(uint *)(param_6 + lVar15) =
           CONCAT22(CONCAT11(auVar32[0xc],auVar32[8]),CONCAT11(auVar32[4],auVar32[0]));
      lVar15 = lVar15 + 4;
    } while ((int)lVar15 < (int)(uint)bVar3);
  }
  else {
    lVar14 = 0;
    do {
      pfVar1 = (float *)(param_4 + lVar14 * 4);
      auVar30._0_4_ = *pfVar1 * fVar44 - fVar45;
      auVar30._4_4_ = pfVar1[1] * fVar44 - fVar45;
      auVar30._8_4_ = pfVar1[2] * fVar44 - fVar45;
      auVar30._12_4_ = pfVar1[3] * fVar44 - fVar45;
      auVar31 = maxps(auVar30,(undefined1  [16])0x0);
      auVar32._4_4_ = fVar11;
      auVar32._0_4_ = fVar11;
      auVar32._8_4_ = fVar11;
      auVar32._12_4_ = fVar11;
      auVar32 = minps(auVar31,auVar32);
      iVar24 = (int)(fVar2 * auVar32._0_4_);
      iVar27 = (int)(fVar2 * auVar32._4_4_);
      iVar28 = (int)(fVar2 * auVar32._8_4_);
      iVar29 = (int)(fVar2 * auVar32._12_4_);
      uVar36 = iVar24 + iVar7;
      uVar38 = iVar27 + iVar8;
      uVar40 = iVar28 + iVar9;
      uVar42 = iVar29 + iVar10;
      uVar16 = CONCAT31(0,*(byte *)((long)&local_58 + (long)iVar24));
      uVar19 = -(uint)((int)uVar36 < (int)uVar13);
      uVar21 = -(uint)((int)uVar38 < (int)uVar13);
      uVar22 = -(uint)((int)uVar40 < (int)uVar13);
      uVar23 = -(uint)((int)uVar42 < (int)uVar13);
      bVar4 = *(byte *)((long)&local_58 + (long)iVar27);
      uVar17 = CONCAT31(0,*(byte *)((long)&local_58 + (long)iVar28));
      bVar5 = *(byte *)((long)&local_58 + (long)iVar29);
      auVar34[0xc] = bVar5;
      auVar34._8_4_ = uVar17;
      auVar34[4] = bVar4;
      auVar34._0_4_ = uVar16;
      auVar34._5_3_ = 0;
      auVar34._13_3_ = 0;
      fVar46 = (float)uVar16;
      fVar47 = (float)bVar4;
      fVar48 = (float)uVar17;
      fVar49 = (float)bVar5;
      uVar16 = CONCAT31(0,*(byte *)((long)&local_58 +
                                   (long)(int)(uVar19 & uVar36 | ~uVar19 & uVar13)));
      bVar4 = *(byte *)((long)&local_58 + (long)(int)(uVar21 & uVar38 | ~uVar21 & uVar13));
      uVar17 = CONCAT31(0,*(byte *)((long)&local_58 +
                                   (long)(int)(uVar22 & uVar40 | ~uVar22 & uVar13)));
      bVar5 = *(byte *)((long)&local_58 + (long)(int)(uVar23 & uVar42 | ~uVar23 & uVar13));
      auVar31[0xc] = bVar5;
      auVar31._8_4_ = uVar17;
      auVar31[4] = bVar4;
      auVar31._0_4_ = uVar16;
      auVar31._5_3_ = 0;
      auVar31._13_3_ = 0;
      fVar37 = (float)uVar16;
      fVar39 = (float)bVar4;
      fVar41 = (float)uVar17;
      fVar43 = (float)bVar5;
      uVar16 = -(uint)(fVar37 + fVar46 < auVar32._0_4_ * fVar12);
      uVar17 = -(uint)(fVar39 + fVar47 < auVar32._4_4_ * fVar12);
      uVar19 = -(uint)(fVar41 + fVar48 < auVar32._8_4_ * fVar12);
      uVar21 = -(uint)(fVar43 + fVar49 < auVar32._12_4_ * fVar12);
      auVar25._4_4_ = uVar17;
      auVar25._0_4_ = uVar16;
      auVar25._8_4_ = uVar19;
      auVar25._12_4_ = uVar21;
      auVar32 = auVar31 & auVar25 | ~auVar25 & auVar34;
      pfVar1 = (float *)(param_5 + lVar14 * 4);
      *pfVar1 = (float)(uVar16 & (uint)fVar37 | ~uVar16 & (uint)fVar46) * fVar18 + param_2;
      pfVar1[1] = (float)(uVar17 & (uint)fVar39 | ~uVar17 & (uint)fVar47) * fVar18 + param_2;
      pfVar1[2] = (float)(uVar19 & (uint)fVar41 | ~uVar19 & (uint)fVar48) * fVar18 + param_2;
      pfVar1[3] = (float)(uVar21 & (uint)fVar43 | ~uVar21 & (uint)fVar49) * fVar18 + param_2;
      *(uint *)(param_6 + lVar14) =
           CONCAT22(CONCAT11(auVar32[0xc],auVar32[8]),CONCAT11(auVar32[4],auVar32[0]));
      lVar14 = lVar14 + 4;
    } while ((int)lVar14 < (int)(uint)bVar3);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* recompute_ideal_colors_1plane(image_block const&, partition_info const&, decimation_info const&,
   unsigned char const*, endpoints&, vfloat4*, vfloat4*) */

void recompute_ideal_colors_1plane
               (image_block *param_1,partition_info *param_2,decimation_info *param_3,uchar *param_4
               ,endpoints *param_5,vfloat4 *param_6,vfloat4 *param_7)

{
  image_block *piVar1;
  vfloat4 *pvVar2;
  decimation_info dVar3;
  image_block iVar4;
  partition_info pVar5;
  partition_info pVar6;
  ushort uVar7;
  undefined1 auVar8 [13];
  uint uVar9;
  long lVar10;
  partition_info *ppVar11;
  float *pfVar12;
  float *pfVar13;
  partition_info *ppVar14;
  endpoints *peVar15;
  ulong uVar16;
  float *pfVar17;
  long lVar18;
  long in_FS_OFFSET;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar31;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar29 [16];
  float fVar32;
  undefined1 auVar30 [16];
  undefined8 extraout_XMM0_Qb_00;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar48;
  undefined1 auVar47 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float local_518;
  float fStack_514;
  float fStack_510;
  float local_508;
  float fStack_504;
  float fStack_500;
  undefined1 local_4e8 [8];
  float fStack_4e0;
  float fStack_4dc;
  float local_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float local_4a8 [64];
  float local_3a8 [2];
  undefined8 auStack_3a0 [108];
  long local_40;
  
  uVar7 = *(ushort *)param_2;
  dVar3 = param_3[2];
  pfVar17 = local_4a8;
  iVar4 = param_1[0xdbc];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = 0;
  pfVar12 = pfVar17;
  do {
    uVar19 = *(uint *)param_4;
    uVar9 = uVar9 + 4;
    param_4 = (uchar *)((long)param_4 + 4);
    auVar8[0xc] = (char)(uVar19 >> 0x18);
    auVar8._0_12_ = ZEXT712(0);
    *pfVar12 = (float)(uVar19 & 0xff) * _LC23;
    pfVar12[1] = (float)(uVar19 >> 8 & 0xff) * _LC23;
    pfVar12[2] = (float)(int)CONCAT32(auVar8._10_3_,(ushort)(byte)(uVar19 >> 0x10)) * _LC23;
    pfVar12[3] = (float)(uint3)(auVar8._10_3_ >> 0x10) * _LC23;
    pfVar12 = pfVar12 + 4;
  } while (uVar9 < (byte)dVar3);
  fVar22 = (float)(byte)iVar4;
  local_4e8._4_4_ = fVar22 * *(float *)(param_1 + 0xde4);
  local_4e8._0_4_ = fVar22 * *(float *)(param_1 + 0xde0);
  fStack_4e0 = fVar22 * *(float *)(param_1 + 0xde8);
  fStack_4dc = fVar22 * *(float *)(param_1 + 0xdec);
  pfVar12 = pfVar17;
  if (param_3[1] != (decimation_info)0x1) {
    pfVar12 = local_3a8;
    uVar16 = 0;
    pfVar13 = pfVar12;
    if ((byte)param_3[1] < 3) {
      do {
        uVar9 = (uint)uVar16;
        uVar16 = (ulong)(uVar9 + 4);
        pfVar13 = pfVar13 + 4;
        uVar28 = bilinear_infill_vla_2(param_3,pfVar17,uVar9);
        *(undefined8 *)(pfVar13 + -4) = uVar28;
        *(undefined8 *)(pfVar13 + -2) = extraout_XMM0_Qb;
      } while ((uint)uVar16 < (uint)(byte)iVar4);
    }
    else {
      do {
        uVar9 = (uint)uVar16;
        uVar16 = (ulong)(uVar9 + 4);
        uVar28 = bilinear_infill_vla(param_3,pfVar17,uVar9);
        *(undefined8 *)pfVar13 = uVar28;
        *(undefined8 *)(pfVar13 + 2) = extraout_XMM0_Qb_00;
        pfVar13 = pfVar13 + 4;
      } while ((uint)uVar16 < (uint)(byte)iVar4);
    }
  }
  lVar10 = 0;
  lVar18 = 0;
  ppVar14 = param_2 + 0xf0;
  do {
    peVar15 = param_5 + 0x10;
    pVar5 = param_2[lVar18 + 4];
    if (uVar7 != 1) {
      local_4e8._0_4_ = 0.0;
      local_4e8._4_4_ = 0.0;
      fStack_4e0 = 0.0;
      fStack_4dc = 0.0;
      ppVar11 = ppVar14;
      do {
        pVar6 = *ppVar11;
        ppVar11 = ppVar11 + 1;
        piVar1 = param_1 + (ulong)(byte)pVar6 * 4;
        local_4e8._0_4_ = (float)local_4e8._0_4_ + *(float *)piVar1;
        local_4e8._4_4_ = (float)local_4e8._4_4_ + *(float *)(piVar1 + 0x370);
        fStack_4e0 = fStack_4e0 + *(float *)(piVar1 + 0x6e0);
        fStack_4dc = fStack_4dc + *(float *)(piVar1 + 0xa50);
      } while (ppVar14 + (ulong)((byte)pVar5 - 1) + 1 != ppVar11);
    }
    fVar22 = *(float *)(param_1 + 0xe00);
    fVar36 = *(float *)(param_1 + 0xe04);
    fVar26 = *(float *)(param_1 + 0xe08);
    fVar27 = *(float *)(param_1 + 0xe0c);
    fVar23 = (float)(byte)pVar5;
    local_4e8._0_4_ = (float)local_4e8._0_4_ * fVar22;
    local_4e8._4_4_ = (float)local_4e8._4_4_ * fVar36;
    fStack_4e0 = fStack_4e0 * fVar26;
    fStack_4dc = fStack_4dc * fVar27;
    auVar47._4_4_ = fVar23 * fVar36;
    auVar47._0_4_ = fVar23 * fVar22;
    auVar47._8_4_ = fVar23 * fVar26;
    auVar47._12_4_ = fVar23 * fVar27;
    auVar49._4_12_ = _UNK_00103aa4;
    auVar49._0_4_ = _LC28;
    auVar47 = maxps(auVar47,auVar49);
    auVar49 = divps(_local_4e8,auVar47);
    fStack_514 = auVar49._4_4_;
    fStack_510 = auVar49._8_4_;
    auVar62._12_4_ = 0;
    auVar62._0_12_ = auVar49._0_12_;
    auVar29._0_4_ =
         fStack_510 * fStack_510 + auVar49._0_4_ * auVar49._0_4_ + fStack_514 * fStack_514 + 0.0;
    auVar29._4_4_ = auVar29._0_4_;
    auVar29._8_4_ = auVar29._0_4_;
    auVar29._12_4_ = auVar29._0_4_;
    auVar49 = sqrtps(auVar29,auVar29);
    auVar49 = divps(auVar62,auVar49);
    fVar24 = fVar36 + fVar22 + fVar26;
    local_508 = auVar49._0_4_;
    fStack_504 = auVar49._4_4_;
    fStack_500 = auVar49._8_4_;
    fVar23 = _LC28;
    fVar34 = _LC7;
    if (pVar5 == (partition_info)0x0) {
      fVar58 = 0.0;
      fVar50 = fVar22 * 0.0;
      fVar51 = fVar36 * 0.0;
      fVar52 = fVar26 * 0.0;
      fVar53 = fVar27 * 0.0;
      fVar56 = 0.0;
      fVar57 = 0.0;
      local_518 = 0.0;
      fVar54 = fVar24 * 0.0;
      fVar39 = 0.0;
      fVar46 = _LC7;
      fVar63 = fVar50;
      fVar64 = fVar51;
      fVar65 = fVar52;
      fVar66 = fVar53;
      fVar25 = fVar50;
      fVar42 = fVar51;
      fVar31 = fVar52;
      fVar32 = fVar53;
      fVar33 = fVar50;
      fVar35 = fVar51;
      fVar37 = fVar52;
      fVar38 = fVar53;
      fVar44 = fVar50;
      fVar40 = fVar51;
      fVar41 = fVar52;
      fVar43 = fVar53;
      fVar59 = fVar54;
      fVar48 = fVar54;
    }
    else {
      local_518 = 0.0;
      fVar59 = 0.0;
      fVar56 = 0.0;
      fVar57 = 0.0;
      fVar54 = 0.0;
      fVar50 = 0.0;
      fVar51 = 0.0;
      fVar52 = 0.0;
      fVar53 = 0.0;
      ppVar11 = ppVar14;
      fVar42 = fVar54;
      fVar63 = fVar50;
      fVar64 = fVar51;
      fVar65 = fVar52;
      fVar66 = fVar53;
      fVar25 = _LC7;
      fVar31 = 0.0;
      fVar32 = _LC3;
      do {
        pVar6 = *ppVar11;
        ppVar11 = ppVar11 + 1;
        piVar1 = param_1 + (ulong)(byte)pVar6 * 4;
        fVar33 = *(float *)(piVar1 + 0x6e0);
        fVar35 = *(float *)piVar1;
        fVar37 = *(float *)(piVar1 + 0x370);
        fVar38 = pfVar12[(byte)pVar6];
        fVar44 = _LC7 - fVar38;
        fVar23 = fVar23 + fVar38;
        fVar46 = fVar38;
        if (fVar25 <= fVar38) {
          fVar46 = fVar25;
        }
        fVar58 = fVar38;
        if (fVar38 <= fVar42) {
          fVar58 = fVar42;
        }
        fVar25 = local_508 * fVar35 + fStack_504 * fVar37 + fStack_500 * fVar33;
        fVar45 = fVar25;
        if (fVar32 <= fVar25) {
          fVar45 = fVar32;
        }
        fVar54 = fVar54 + fVar44 * fVar44;
        fVar39 = fVar25;
        if (fVar25 <= fVar31) {
          fVar39 = fVar31;
        }
        fVar59 = fVar59 + fVar44 * fVar38;
        local_518 = fVar38 * fVar38 + local_518;
        fVar42 = fVar38 * *(float *)(piVar1 + 0xa50);
        fVar56 = fVar56 + fVar25 * fVar24 * fVar44;
        fVar57 = fVar57 + fVar25 * fVar24 * fVar38;
        fVar50 = fVar50 + fVar38 * fVar35;
        fVar51 = fVar51 + fVar38 * fVar37;
        fVar52 = fVar52 + fVar38 * fVar33;
        fVar53 = fVar53 + fVar42;
        fVar63 = fVar63 + (fVar35 - fVar38 * fVar35);
        fVar64 = fVar64 + (fVar37 - fVar38 * fVar37);
        fVar65 = fVar65 + (fVar33 - fVar38 * fVar33);
        fVar66 = fVar66 + (*(float *)(piVar1 + 0xa50) - fVar42);
        fVar42 = fVar58;
        fVar25 = fVar46;
        fVar31 = fVar39;
        fVar32 = fVar45;
      } while (ppVar14 + (ulong)((byte)pVar5 - 1) + 1 != ppVar11);
      fVar33 = fVar54 * fVar22;
      fVar35 = fVar54 * fVar36;
      fVar37 = fVar54 * fVar26;
      fVar38 = fVar54 * fVar27;
      fVar44 = fVar59 * fVar22;
      fVar40 = fVar59 * fVar36;
      fVar41 = fVar59 * fVar26;
      fVar43 = fVar59 * fVar27;
      fVar25 = local_518 * fVar22;
      fVar42 = local_518 * fVar36;
      fVar31 = local_518 * fVar26;
      fVar32 = local_518 * fVar27;
      fVar54 = fVar54 * fVar24;
      fVar59 = fVar59 * fVar24;
      fVar48 = local_518 * fVar24;
      fVar63 = fVar63 * fVar22;
      fVar64 = fVar64 * fVar36;
      fVar65 = fVar65 * fVar26;
      fVar66 = fVar66 * fVar27;
      fVar50 = fVar50 * fVar22;
      fVar51 = fVar51 * fVar36;
      fVar52 = fVar52 * fVar26;
      fVar53 = fVar53 * fVar27;
      fVar58 = fVar58 * _LC31;
      fVar27 = _LC16;
      if (_LC16 < fVar39) {
        fVar27 = fVar39;
      }
      fVar45 = fVar45 / fVar27;
      if ((fVar45 <= _LC7) && (fVar34 = fVar45, fVar45 <= 0.0)) {
        fVar34 = 0.0;
      }
    }
    pvVar2 = param_6 + lVar10;
    *(float *)pvVar2 = fVar39 * local_508;
    *(float *)(pvVar2 + 4) = fVar39 * fStack_504;
    *(float *)(pvVar2 + 8) = fVar39 * fStack_500;
    *(float *)(pvVar2 + 0xc) = fVar34;
    fVar27 = _LC7;
    if (fVar46 < fVar58) {
      auVar60._4_4_ = _LC7;
      auVar60._0_4_ = _LC7;
      auVar60._8_4_ = _LC7;
      auVar60._12_4_ = _LC7;
      auVar55._0_4_ = fVar25 * fVar33 - fVar44 * fVar44;
      auVar55._4_4_ = fVar42 * fVar35 - fVar40 * fVar40;
      auVar55._8_4_ = fVar31 * fVar37 - fVar41 * fVar41;
      auVar55._12_4_ = fVar32 * fVar38 - fVar43 * fVar43;
      auVar49 = divps(auVar60,auVar55);
      fVar27 = fVar48 * fVar54 - fVar59 * fVar59;
      auVar61._0_4_ = 0.0 - auVar55._0_4_;
      auVar61._4_4_ = 0.0 - auVar55._4_4_;
      auVar61._8_4_ = 0.0 - auVar55._8_4_;
      auVar61._12_4_ = 0.0 - auVar55._12_4_;
      auVar62 = maxps(auVar61,auVar55);
      fVar34 = (float)((uint)fVar27 & __LC34);
      uVar9 = -(uint)((fVar25 * fVar25 + fVar33 * fVar33 + (fVar44 + fVar44) * fVar44) * _LC33 <
                     auVar62._0_4_);
      uVar19 = -(uint)((fVar42 * fVar42 + fVar35 * fVar35 + (fVar40 + fVar40) * fVar40) * _LC33 <
                      auVar62._4_4_);
      uVar20 = -(uint)((fVar31 * fVar31 + fVar37 * fVar37 + (fVar41 + fVar41) * fVar41) * _LC33 <
                      auVar62._8_4_);
      uVar21 = -(uint)((fVar32 * fVar32 + fVar38 * fVar38 + (fVar43 + fVar43) * fVar43) * _LC33 <
                      auVar62._12_4_);
      *(uint *)peVar15 =
           (uint)((fVar25 * fVar63 - fVar50 * fVar44) * auVar49._0_4_) & uVar9 |
           ~uVar9 & (uint)*(float *)peVar15;
      *(uint *)(param_5 + 0x14) =
           (uint)((fVar42 * fVar64 - fVar51 * fVar40) * auVar49._4_4_) & uVar19 |
           ~uVar19 & (uint)*(float *)(param_5 + 0x14);
      *(uint *)(param_5 + 0x18) =
           (uint)((fVar31 * fVar65 - fVar52 * fVar41) * auVar49._8_4_) & uVar20 |
           ~uVar20 & (uint)*(float *)(param_5 + 0x18);
      *(uint *)(param_5 + 0x1c) =
           (uint)((fVar32 * fVar66 - fVar53 * fVar43) * auVar49._12_4_) & uVar21 |
           ~uVar21 & (uint)*(float *)(param_5 + 0x1c);
      *(uint *)(param_5 + 0x50) =
           uVar9 & (uint)((fVar50 * fVar33 - fVar63 * fVar44) * auVar49._0_4_) |
           ~uVar9 & (uint)*(float *)(param_5 + 0x50);
      *(uint *)(param_5 + 0x54) =
           uVar19 & (uint)((fVar51 * fVar35 - fVar64 * fVar40) * auVar49._4_4_) |
           ~uVar19 & (uint)*(float *)(param_5 + 0x54);
      *(uint *)(param_5 + 0x58) =
           uVar20 & (uint)((fVar52 * fVar37 - fVar65 * fVar41) * auVar49._8_4_) |
           ~uVar20 & (uint)*(float *)(param_5 + 0x58);
      *(uint *)(param_5 + 0x5c) =
           uVar21 & (uint)((fVar53 * fVar38 - fVar66 * fVar43) * auVar49._12_4_) |
           ~uVar21 & (uint)*(float *)(param_5 + 0x5c);
      if ((fVar54 * fVar54 + (fVar59 + fVar59) * fVar59 + fVar48 * fVar48) * _LC33 < fVar34) {
        fVar27 = _LC7 / fVar27;
        fVar34 = (fVar48 * fVar56 - fVar57 * fVar59) * fVar27;
        fVar27 = (fVar57 * fVar54 - fVar56 * fVar59) * fVar27;
        if (fVar34 < fVar27) {
          pvVar2 = param_6 + lVar10;
          *(float *)pvVar2 = fVar27 * local_508;
          *(float *)(pvVar2 + 4) = fVar27 * fStack_504;
          *(float *)(pvVar2 + 8) = fVar27 * fStack_500;
          *(float *)(pvVar2 + 0xc) = fVar34 / fVar27;
        }
      }
    }
    else {
      auVar30._0_4_ = fVar50 + fVar63;
      auVar30._4_4_ = fVar51 + fVar64;
      auVar30._8_4_ = fVar52 + fVar65;
      auVar30._12_4_ = fVar53 + fVar66;
      auVar49 = divps(auVar30,auVar47);
      *(undefined1 (*) [16])(param_5 + 0x50) = auVar49 | ZEXT816(0);
      *(undefined1 (*) [16])peVar15 = ZEXT816(0) | auVar49;
      pvVar2 = param_6 + lVar10;
      *(float *)pvVar2 = fVar39 * local_508;
      *(float *)(pvVar2 + 4) = fVar39 * fStack_504;
      *(float *)(pvVar2 + 8) = fVar39 * fStack_500;
      *(float *)(pvVar2 + 0xc) = fVar27;
    }
    if ((param_1[0xe12] != (image_block)0x0) || (param_1[0xeea] != (image_block)0x0)) {
      fVar22 = fVar23 * fVar22;
      fVar36 = fVar23 * fVar36;
      fVar23 = fVar23 * fVar26;
      local_4d8 = auVar47._0_4_;
      fStack_4d4 = auVar47._4_4_;
      fStack_4d0 = auVar47._8_4_;
      fVar42 = local_518 * fVar24 * fStack_4d0 - fVar23 * fVar23;
      fVar39 = fVar36 * fStack_4d0 * fVar22;
      fVar26 = fStack_4d4 * fVar42 - fStack_4d0 * fVar36 * fVar36;
      fVar27 = (float)((uint)fVar23 ^ _LC35) * local_4d8 * fStack_4d4;
      fVar31 = fStack_4d4 * fVar22 * (float)((uint)fStack_4d0 ^ _LC35);
      fVar25 = (float)((uint)fStack_4d0 ^ _LC35) * local_4d8 * fVar36;
      fVar66 = fStack_4d4 * fVar22 * fVar23;
      fVar23 = local_4d8 * fVar36 * fVar23;
      fVar58 = _LC7 / (fVar26 * local_4d8 + fVar22 * fVar31);
      fVar46 = fVar58 * (fVar63 + fVar50);
      fVar63 = fVar58 * (fVar64 + fVar51);
      fVar64 = fVar58 * (fVar65 + fVar52);
      fVar58 = fVar58 * (fVar50 + fVar51 + fVar52);
      fVar34 = fVar27 * fVar64 + fVar31 * fVar46 +
               local_4d8 * fStack_4d4 * fStack_4d0 * fVar58 + fVar25 * fVar63;
      fVar27 = fVar66 * fVar46 +
               ((local_518 * fVar24 * fStack_4d4 - fVar36 * fVar36) * local_4d8 -
               fStack_4d4 * fVar22 * fVar22) * fVar64 + fVar23 * fVar63 + fVar27 * fVar58;
      fVar36 = fVar39 * fVar46 + fVar23 * fVar64 +
               (local_4d8 * fVar42 - fStack_4d0 * fVar22 * fVar22) * fVar63 + fVar25 * fVar58;
      fVar22 = fVar26 * fVar46 + fVar66 * fVar64 + fVar39 * fVar63 + fVar31 * fVar58;
      *(ulong *)(param_7 + lVar10) = CONCAT44(fVar36,fVar22);
      *(ulong *)(param_7 + lVar10 + 8) = CONCAT44(fVar34,fVar27);
      if (NAN(fVar22 * fVar22 + fVar27 * fVar27 + fVar36 * fVar36 + fVar34 * fVar34)) {
        auVar49 = *(undefined1 (*) [16])(param_5 + 0x50);
        fVar22 = ((auVar49._0_4_ - *(float *)peVar15) + (auVar49._4_4_ - *(float *)(param_5 + 0x14))
                 + (auVar49._8_4_ - *(float *)(param_5 + 0x18))) * _LC8;
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        fVar27 = _LC11 * fVar22;
        fVar36 = (*(float *)(param_5 + 0x14) + auVar49._4_4_) * _LC11;
        fVar26 = (*(float *)(param_5 + 0x18) + auVar49._8_4_) * _LC11;
        pvVar2 = param_7 + lVar10;
        *(float *)pvVar2 = (*(float *)peVar15 + auVar49._0_4_) * _LC11 - fVar27;
        *(float *)(pvVar2 + 4) = fVar36 - fVar27;
        *(float *)(pvVar2 + 8) = fVar26 - fVar27;
        *(float *)(pvVar2 + 0xc) = fVar22;
      }
    }
    lVar18 = lVar18 + 1;
    ppVar14 = ppVar14 + 0xd8;
    lVar10 = lVar10 + 0x10;
    param_5 = peVar15;
  } while ((uint)lVar18 < (uint)uVar7);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* recompute_ideal_colors_2planes(image_block const&, block_size_descriptor const&, decimation_info
   const&, unsigned char const*, unsigned char const*, endpoints&, vfloat4&, vfloat4&, int) */

void recompute_ideal_colors_2planes
               (image_block *param_1,block_size_descriptor *param_2,decimation_info *param_3,
               uchar *param_4,uchar *param_5,endpoints *param_6,vfloat4 *param_7,vfloat4 *param_8,
               int param_9)

{
  long lVar1;
  image_block iVar2;
  decimation_info dVar3;
  block_size_descriptor bVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [13];
  undefined1 auVar14 [13];
  undefined1 auVar15 [13];
  undefined1 auVar16 [13];
  undefined1 auVar17 [13];
  long lVar18;
  float *pfVar19;
  float *pfVar20;
  ulong uVar21;
  uint uVar22;
  long in_FS_OFFSET;
  float fVar23;
  uint uVar24;
  float fVar25;
  uint uVar26;
  float fVar27;
  undefined8 uVar28;
  uint uVar34;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar36;
  undefined1 auVar31 [16];
  uint uVar33;
  uint uVar35;
  uint uVar37;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar32 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  float fVar49;
  uint uVar50;
  uint uVar52;
  float fVar53;
  uint uVar54;
  float fVar55;
  undefined1 auVar51 [16];
  uint uVar56;
  undefined1 auVar57 [16];
  float fVar58;
  float fVar60;
  float fVar61;
  undefined1 auVar59 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar67;
  undefined1 auVar66 [16];
  float fVar68;
  float fVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float local_8b8;
  float local_8a8;
  float local_898;
  float fStack_894;
  float fStack_890;
  float fStack_88c;
  undefined1 local_888 [8];
  float fStack_880;
  float fStack_87c;
  undefined1 local_878 [8];
  float fStack_870;
  float fStack_86c;
  float local_868;
  float local_858;
  float fStack_854;
  float fStack_850;
  float local_844;
  float local_840;
  float local_808 [32];
  float local_788 [32];
  float local_708 [2];
  undefined8 auStack_700 [107];
  float local_3a8 [2];
  undefined8 auStack_3a0 [108];
  long local_40;
  
  iVar2 = param_1[0xdbc];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar18 = 0;
  dVar3 = param_3[2];
  do {
    uVar24 = *(uint *)(param_4 + lVar18);
    auVar13[0xc] = (char)(uVar24 >> 0x18);
    auVar13._0_12_ = ZEXT712(0);
    local_808[lVar18] = (float)(uVar24 & 0xff) * _LC23;
    local_808[lVar18 + 1] = (float)(uVar24 >> 8 & 0xff) * _LC23;
    local_808[lVar18 + 2] =
         (float)(int)CONCAT32(auVar13._10_3_,(ushort)(byte)(uVar24 >> 0x10)) * _LC23;
    local_808[lVar18 + 3] = (float)(uint3)(auVar13._10_3_ >> 0x10) * _LC23;
    uVar5 = *(undefined4 *)(param_5 + lVar18);
    uVar21 = (ulong)(ushort)uVar5 & 0xffffffffffff00ff;
    auVar14._8_4_ = 0;
    auVar14._0_8_ = uVar21;
    auVar14[0xc] = (char)((uint)uVar5 >> 0x18);
    auVar15[8] = (char)((uint)uVar5 >> 0x10);
    auVar15._0_8_ = uVar21;
    auVar15[9] = 0;
    auVar15._10_3_ = auVar14._10_3_;
    auVar17._5_8_ = 0;
    auVar17._0_5_ = auVar15._8_5_;
    auVar16[4] = (char)((uint)uVar5 >> 8);
    auVar16._0_4_ = (int)uVar21;
    auVar16[5] = 0;
    auVar16._6_7_ = SUB137(auVar17 << 0x40,6);
    local_788[lVar18] = (float)(int)uVar21 * _LC23;
    local_788[lVar18 + 1] = (float)auVar16._4_4_ * _LC23;
    local_788[lVar18 + 2] = (float)auVar15._8_4_ * _LC23;
    local_788[lVar18 + 3] = (float)(uint3)(auVar14._10_3_ >> 0x10) * _LC23;
    lVar18 = lVar18 + 4;
  } while ((uint)lVar18 < (uint)(byte)dVar3);
  pfVar19 = local_808;
  pfVar20 = local_788;
  if (param_3[1] != (decimation_info)0x1) {
    lVar18 = 0;
    uVar24 = 0;
    pfVar19 = local_708;
    uVar21 = (ulong)(byte)iVar2;
    pfVar20 = local_3a8;
    if ((byte)param_3[1] < 3) {
      do {
        uVar28 = bilinear_infill_vla_2(param_3,local_808,uVar24);
        uVar22 = uVar24 + 4;
        *(undefined8 *)((long)pfVar19 + lVar18) = uVar28;
        *(undefined8 *)((long)auStack_700 + lVar18) = extraout_XMM0_Qb;
        uVar28 = bilinear_infill_vla_2(param_3,local_788,uVar24);
        *(undefined8 *)((long)pfVar20 + lVar18) = uVar28;
        *(undefined8 *)((long)auStack_3a0 + lVar18) = extraout_XMM0_Qb_00;
        lVar18 = lVar18 + 0x10;
        uVar24 = uVar22;
      } while (uVar22 < (uint)uVar21);
    }
    else {
      do {
        uVar28 = bilinear_infill_vla(param_3,local_808,uVar24);
        *(undefined8 *)((long)pfVar19 + lVar18) = uVar28;
        *(undefined8 *)((long)auStack_700 + lVar18) = extraout_XMM0_Qb_01;
        uVar22 = uVar24 + 4;
        uVar28 = bilinear_infill_vla(param_3,local_788,uVar24);
        *(undefined8 *)((long)pfVar20 + lVar18) = uVar28;
        *(undefined8 *)((long)auStack_3a0 + lVar18) = extraout_XMM0_Qb_02;
        lVar18 = lVar18 + 0x10;
        uVar24 = uVar22;
      } while (uVar22 < (uint)uVar21);
    }
  }
  fVar65 = _LC7;
  bVar4 = param_2[3];
  fVar27 = *(float *)(param_1 + 0xe00);
  fVar39 = *(float *)(param_1 + 0xe04);
  fVar44 = *(float *)(param_1 + 0xe08);
  fVar43 = *(float *)(param_1 + 0xe0c);
  fVar68 = *(float *)(param_1 + 0xde0);
  fVar23 = (float)(byte)bVar4;
  local_888._4_4_ = _LC28;
  local_888._0_4_ = _LC28;
  fStack_880 = (float)_LC28;
  fStack_87c = (float)_LC28;
  auVar29._0_4_ = fVar23 * fVar27;
  auVar29._4_4_ = fVar23 * fVar39;
  auVar29._8_4_ = fVar23 * fVar44;
  auVar29._12_4_ = fVar23 * fVar43;
  auVar59._12_4_ = 0;
  auVar59._0_12_ = *(undefined1 (*) [12])(param_1 + 0xde0);
  auVar29 = maxps(auVar29,_local_888);
  auVar30._0_4_ =
       fVar68 * fVar68 + *(float *)(param_1 + 0xde8) * *(float *)(param_1 + 0xde8) +
       *(float *)(param_1 + 0xde4) * *(float *)(param_1 + 0xde4) + 0.0;
  auVar30._4_4_ = auVar30._0_4_;
  auVar30._8_4_ = auVar30._0_4_;
  auVar30._12_4_ = auVar30._0_4_;
  auVar30 = sqrtps(auVar30,auVar30);
  auVar59 = divps(auVar59,auVar30);
  bVar6 = param_9 == __LC9;
  uVar24 = -(uint)bVar6;
  bVar7 = param_9 == _UNK_00103a64;
  uVar22 = -(uint)bVar7;
  bVar8 = param_9 == _UNK_00103a68;
  uVar34 = -(uint)bVar8;
  bVar9 = param_9 == _UNK_00103a6c;
  uVar36 = -(uint)bVar9;
  fVar23 = fVar39 + fVar27 + fVar44;
  fStack_854 = auVar59._4_4_;
  fStack_850 = auVar59._8_4_;
  local_858 = auVar59._0_4_;
  fVar68 = _LC3;
  if (bVar4 == (block_size_descriptor)0x0) {
    fVar49 = 0.0;
    fVar75 = fVar27 * 0.0;
    fVar77 = fVar39 * 0.0;
    fVar78 = fVar44 * 0.0;
    fVar79 = fVar43 * 0.0;
    fVar72 = 0.0;
    local_868 = 0.0;
    local_878 = (undefined1  [8])0x0;
    fVar63 = 0.0;
    local_844 = 0.0;
    fVar67 = 0.0;
    local_840 = 0.0;
    local_8a8 = _LC7;
    local_8b8 = _LC7;
    fVar73 = fVar72;
    fVar38 = fVar75;
    fVar40 = fVar77;
    fVar74 = fVar78;
    fVar76 = fVar79;
    fVar80 = _LC16;
    fVar58 = fVar75;
    fVar60 = fVar77;
    fVar61 = fVar78;
    fVar62 = fVar79;
    fStack_890 = fVar78;
    fStack_88c = fVar79;
    local_898 = fVar75;
    fStack_894 = fVar77;
  }
  else {
    fVar69 = 0.0;
    fVar58 = 0.0;
    fVar60 = 0.0;
    fVar61 = 0.0;
    fVar62 = 0.0;
    lVar18 = 0;
    _local_878 = (undefined1  [16])0x0;
    fVar72 = 0.0;
    fVar63 = 0.0;
    fVar75 = 0.0;
    fVar77 = 0.0;
    fVar78 = 0.0;
    fVar79 = 0.0;
    local_844 = 0.0;
    local_8b8 = _LC7;
    local_8a8 = _LC7;
    local_840 = 0.0;
    fVar67 = fVar63;
    fVar73 = fVar72;
    fVar38 = 0.0;
    fVar40 = 0.0;
    do {
      lVar1 = lVar18 * 4;
      fVar74 = *(float *)(param_1 + lVar18 * 4);
      fVar76 = *(float *)(param_1 + lVar18 * 4 + 0x6e0);
      fVar80 = pfVar19[lVar18];
      fVar53 = *(float *)(param_1 + lVar18 * 4 + 0x370);
      fVar42 = _LC7 - fVar80;
      fVar55 = fVar80;
      if (local_8a8 <= fVar80) {
        fVar55 = local_8a8;
      }
      fVar49 = fVar80;
      if (fVar80 <= fVar38) {
        fVar49 = fVar38;
      }
      fVar25 = local_858 * fVar74 + fStack_854 * fVar53 + fStack_850 * fVar76;
      fVar38 = fVar25;
      if (fVar68 <= fVar25) {
        fVar38 = fVar68;
      }
      fVar68 = fVar38;
      fVar38 = pfVar20[lVar18];
      lVar18 = lVar18 + 1;
      fVar64 = fVar25;
      if (fVar25 <= fVar67) {
        fVar64 = fVar67;
      }
      fVar67 = fVar64;
      fVar81 = _LC7 - fVar38;
      fVar63 = fVar63 + fVar42 * fVar42;
      fVar73 = fVar73 + fVar42 * fVar80;
      fVar72 = fVar72 + fVar80 * fVar80;
      fVar64 = fVar38;
      if (local_8b8 <= fVar38) {
        fVar64 = local_8b8;
      }
      local_868 = fVar38;
      if (fVar38 <= fVar40) {
        local_868 = fVar40;
      }
      local_840 = fVar81 * fVar81 + local_840;
      local_844 = fVar81 * fVar38 + local_844;
      fVar69 = fVar69 + fVar38 * fVar38;
      fVar25 = fVar23 * fVar25;
      fVar82 = (float)(~uVar24 & (uint)fVar80 | (uint)fVar38 & uVar24);
      fVar83 = (float)(~uVar22 & (uint)fVar80 | (uint)fVar38 & uVar22);
      fVar84 = (float)(~uVar34 & (uint)fVar80 | (uint)fVar38 & uVar34);
      fVar85 = (float)(~uVar36 & (uint)fVar80 | (uint)fVar38 & uVar36);
      fVar38 = fVar82 * fVar74;
      fVar40 = fVar83 * fVar53;
      fVar81 = fVar84 * fVar76;
      fVar41 = fVar85 * *(float *)(param_1 + lVar1 + 0xa50);
      local_888._4_4_ = fVar83 + (float)local_888._4_4_;
      local_888._0_4_ = fVar82 + (float)local_888._0_4_;
      fStack_880 = fVar84 + fStack_880;
      fStack_87c = fVar85 + fStack_87c;
      fVar58 = fVar58 + fVar38;
      fVar60 = fVar60 + fVar40;
      fVar61 = fVar61 + fVar81;
      fVar62 = fVar62 + fVar41;
      local_878._4_4_ = fVar25 * fVar80 + (float)local_878._4_4_;
      local_878._0_4_ = fVar25 * fVar42 + (float)local_878._0_4_;
      fStack_870 = fVar25 * 0.0 + fStack_870;
      fStack_86c = fVar25 * 0.0 + fStack_86c;
      fVar75 = fVar75 + (fVar74 - fVar38);
      fVar77 = fVar77 + (fVar53 - fVar40);
      fVar78 = fVar78 + (fVar76 - fVar81);
      fVar79 = fVar79 + (*(float *)(param_1 + lVar1 + 0xa50) - fVar41);
      local_8a8 = fVar55;
      fVar38 = fVar49;
      local_8b8 = fVar64;
      fVar40 = local_868;
    } while ((uint)lVar18 < (uint)(byte)bVar4);
    fVar49 = fVar49 * _LC31;
    local_868 = _LC31 * local_868;
    fVar75 = fVar75 * fVar27;
    fVar77 = fVar77 * fVar39;
    fVar78 = fVar78 * fVar44;
    fVar79 = fVar79 * fVar43;
    fVar38 = fVar72 * fVar27;
    fVar40 = fVar72 * fVar39;
    fVar74 = fVar72 * fVar44;
    fVar76 = fVar72 * fVar43;
    fVar80 = fVar67;
    fVar58 = fVar58 * fVar27;
    fVar60 = fVar60 * fVar39;
    fVar61 = fVar61 * fVar44;
    fVar62 = fVar62 * fVar43;
    fStack_890 = fVar69 * fVar44;
    fStack_88c = fVar69 * fVar43;
    local_898 = fVar69 * fVar27;
    fStack_894 = fVar69 * fVar39;
    if (fVar67 <= _LC16) {
      fVar80 = _LC16;
    }
  }
  fVar68 = fVar68 / fVar80;
  fVar80 = _LC7;
  if ((fVar68 <= _LC7) && (fVar80 = fVar68, fVar68 <= 0.0)) {
    fVar80 = 0.0;
  }
  *(float *)param_7 = fVar67 * local_858;
  *(float *)(param_7 + 4) = fVar67 * fStack_854;
  *(float *)(param_7 + 8) = fVar67 * fStack_850;
  *(float *)(param_7 + 0xc) = fVar80;
  uVar45 = uVar24 ^ 0xffffffff;
  uVar46 = uVar22 ^ 0xffffffff;
  uVar47 = uVar34 ^ 0xffffffff;
  uVar48 = uVar36 ^ 0xffffffff;
  if (local_8a8 < fVar49) {
    fVar69 = fVar73 * fVar27;
    fVar53 = fVar73 * fVar39;
    fVar55 = fVar73 * fVar44;
    fVar42 = fVar73 * fVar43;
    fVar68 = fVar63 * fVar27;
    fVar49 = fVar63 * fVar39;
    fVar67 = fVar63 * fVar44;
    fVar80 = fVar63 * fVar43;
    fVar63 = fVar63 * fVar23;
    fVar73 = fVar73 * fVar23;
    fVar72 = fVar72 * fVar23;
    fVar23 = fVar38 * fVar68 - fVar69 * fVar69;
    fVar25 = fVar40 * fVar49 - fVar53 * fVar53;
    auVar57._0_8_ = CONCAT44(fVar25,fVar23);
    auVar57._8_4_ = fVar74 * fVar67 - fVar55 * fVar55;
    auVar57._12_4_ = fVar76 * fVar80 - fVar42 * fVar42;
    auVar32._4_4_ = _LC7;
    auVar32._0_4_ = _LC7;
    auVar32._8_4_ = _LC7;
    auVar32._12_4_ = _LC7;
    auVar59 = divps(auVar32,auVar57);
    fVar64 = fVar72 * fVar63 - fVar73 * fVar73;
    auVar66._0_4_ = 0.0 - fVar23;
    auVar66._4_4_ = 0.0 - fVar25;
    auVar66._8_4_ = 0.0 - auVar57._8_4_;
    auVar66._12_4_ = 0.0 - auVar57._12_4_;
    auVar12._8_4_ = auVar57._8_4_;
    auVar12._0_8_ = auVar57._0_8_;
    auVar12._12_4_ = auVar57._12_4_;
    auVar30 = maxps(auVar66,auVar12);
    uVar45 = -(uint)((fVar68 * fVar68 + (fVar69 + fVar69) * fVar69 + fVar38 * fVar38) * _LC33 <
                    auVar30._0_4_) & uVar45;
    uVar46 = -(uint)((fVar49 * fVar49 + (fVar53 + fVar53) * fVar53 + fVar40 * fVar40) * _LC33 <
                    auVar30._4_4_) & uVar46;
    uVar47 = -(uint)((fVar67 * fVar67 + (fVar55 + fVar55) * fVar55 + fVar74 * fVar74) * _LC33 <
                    auVar30._8_4_) & uVar47;
    uVar48 = -(uint)((fVar80 * fVar80 + (fVar42 + fVar42) * fVar42 + fVar76 * fVar76) * _LC33 <
                    auVar30._12_4_) & uVar48;
    fVar23 = (float)((uint)fVar64 & __LC34);
    uVar26 = (uint)((fVar75 * fVar38 - fVar58 * fVar69) * auVar59._0_4_) & uVar45 |
             ~uVar45 & *(uint *)(param_6 + 0x10);
    uVar33 = (uint)((fVar77 * fVar40 - fVar60 * fVar53) * auVar59._4_4_) & uVar46 |
             ~uVar46 & *(uint *)(param_6 + 0x14);
    uVar35 = (uint)((fVar78 * fVar74 - fVar61 * fVar55) * auVar59._8_4_) & uVar47 |
             ~uVar47 & *(uint *)(param_6 + 0x18);
    uVar37 = (uint)((fVar79 * fVar76 - fVar62 * fVar42) * auVar59._12_4_) & uVar48 |
             ~uVar48 & *(uint *)(param_6 + 0x1c);
    *(uint *)(param_6 + 0x10) = uVar26;
    *(uint *)(param_6 + 0x14) = uVar33;
    *(uint *)(param_6 + 0x18) = uVar35;
    *(uint *)(param_6 + 0x1c) = uVar37;
    uVar45 = uVar45 & (uint)((fVar58 * fVar68 - fVar75 * fVar69) * auVar59._0_4_) |
             ~uVar45 & *(uint *)(param_6 + 0x50);
    uVar46 = uVar46 & (uint)((fVar60 * fVar49 - fVar77 * fVar53) * auVar59._4_4_) |
             ~uVar46 & *(uint *)(param_6 + 0x54);
    uVar47 = uVar47 & (uint)((fVar61 * fVar67 - fVar78 * fVar55) * auVar59._8_4_) |
             ~uVar47 & *(uint *)(param_6 + 0x58);
    uVar48 = uVar48 & (uint)((fVar62 * fVar80 - fVar79 * fVar42) * auVar59._12_4_) |
             ~uVar48 & *(uint *)(param_6 + 0x5c);
    *(uint *)(param_6 + 0x50) = uVar45;
    *(uint *)(param_6 + 0x54) = uVar46;
    *(uint *)(param_6 + 0x58) = uVar47;
    *(uint *)(param_6 + 0x5c) = uVar48;
    if ((fVar63 * fVar63 + (fVar73 + fVar73) * fVar73 + fVar72 * fVar72) * _LC33 < fVar23) {
      fVar64 = fVar65 / fVar64;
      fVar68 = (fVar72 * (float)local_878._0_4_ - (float)local_878._4_4_ * fVar73) * fVar64;
      fVar64 = ((float)local_878._4_4_ * fVar63 - (float)local_878._0_4_ * fVar73) * fVar64;
      if (fVar68 < fVar64) {
        *(float *)param_7 = fVar64 * local_858;
        *(float *)(param_7 + 4) = fVar64 * fStack_854;
        *(float *)(param_7 + 8) = fVar64 * fStack_850;
        *(float *)(param_7 + 0xc) = fVar68 / fVar64;
        uVar26 = *(uint *)(param_6 + 0x10);
        uVar33 = *(uint *)(param_6 + 0x14);
        uVar35 = *(uint *)(param_6 + 0x18);
        uVar37 = *(uint *)(param_6 + 0x1c);
        uVar45 = *(uint *)(param_6 + 0x50);
        uVar46 = *(uint *)(param_6 + 0x54);
        uVar47 = *(uint *)(param_6 + 0x58);
        uVar48 = *(uint *)(param_6 + 0x5c);
      }
    }
  }
  else {
    auVar31._0_4_ = fVar58 + fVar75;
    auVar31._4_4_ = fVar60 + fVar77;
    auVar31._8_4_ = fVar61 + fVar78;
    auVar31._12_4_ = fVar62 + fVar79;
    auVar59 = divps(auVar31,auVar29);
    uVar26 = auVar59._0_4_ & uVar45;
    uVar33 = auVar59._4_4_ & uVar46;
    uVar35 = auVar59._8_4_ & uVar47;
    uVar37 = auVar59._12_4_ & uVar48;
    *(uint *)(param_6 + 0x50) = uVar26 | ~uVar45 & *(uint *)(param_6 + 0x50);
    *(uint *)(param_6 + 0x54) = uVar33 | ~uVar46 & *(uint *)(param_6 + 0x54);
    *(uint *)(param_6 + 0x58) = uVar35 | ~uVar47 & *(uint *)(param_6 + 0x58);
    *(uint *)(param_6 + 0x5c) = uVar37 | ~uVar48 & *(uint *)(param_6 + 0x5c);
    *(uint *)(param_6 + 0x10) = ~uVar45 & *(uint *)(param_6 + 0x10) | uVar26;
    *(uint *)(param_6 + 0x14) = ~uVar46 & *(uint *)(param_6 + 0x14) | uVar33;
    *(uint *)(param_6 + 0x18) = ~uVar47 & *(uint *)(param_6 + 0x18) | uVar35;
    *(uint *)(param_6 + 0x1c) = ~uVar48 & *(uint *)(param_6 + 0x1c) | uVar37;
    *(float *)param_7 = fVar67 * local_858;
    *(float *)(param_7 + 4) = fVar67 * fStack_854;
    *(float *)(param_7 + 8) = fVar67 * fStack_850;
    *(float *)(param_7 + 0xc) = fVar65;
    uVar26 = *(uint *)(param_6 + 0x10);
    uVar33 = *(uint *)(param_6 + 0x14);
    uVar35 = *(uint *)(param_6 + 0x18);
    uVar37 = *(uint *)(param_6 + 0x1c);
    uVar45 = *(uint *)(param_6 + 0x50);
    uVar46 = *(uint *)(param_6 + 0x54);
    uVar47 = *(uint *)(param_6 + 0x58);
    uVar48 = *(uint *)(param_6 + 0x5c);
  }
  if (local_8b8 < local_868) {
    fVar68 = local_844 * fVar27;
    fVar23 = local_844 * fVar39;
    fVar49 = local_844 * fVar44;
    local_844 = local_844 * fVar43;
    fVar67 = local_840 * fVar27;
    fVar73 = local_840 * fVar39;
    fVar76 = local_840 * fVar44;
    local_840 = local_840 * fVar43;
    auVar70._4_4_ = _LC7;
    auVar70._0_4_ = _LC7;
    auVar70._8_4_ = _LC7;
    auVar70._12_4_ = _LC7;
    fVar43 = local_898 * fVar67 - fVar68 * fVar68;
    fVar80 = fStack_894 * fVar73 - fVar23 * fVar23;
    fVar72 = fStack_890 * fVar76 - fVar49 * fVar49;
    fVar63 = fStack_88c * local_840 - local_844 * local_844;
    auVar10._4_4_ = fVar80;
    auVar10._0_4_ = fVar43;
    auVar10._8_4_ = fVar72;
    auVar10._12_4_ = fVar63;
    auVar59 = divps(auVar70,auVar10);
    auVar71._0_4_ = 0.0 - fVar43;
    auVar71._4_4_ = 0.0 - fVar80;
    auVar71._8_4_ = 0.0 - fVar72;
    auVar71._12_4_ = 0.0 - fVar63;
    auVar11._4_4_ = fVar80;
    auVar11._0_4_ = fVar43;
    auVar11._8_4_ = fVar72;
    auVar11._12_4_ = fVar63;
    auVar30 = maxps(auVar71,auVar11);
    uVar36 = -(uint)((fVar68 * (fVar68 + fVar68) + fVar67 * fVar67 + local_898 * local_898) * _LC33
                     < auVar30._0_4_ && bVar6);
    uVar52 = -(uint)((fVar23 * (fVar23 + fVar23) + fVar73 * fVar73 + fStack_894 * fStack_894) *
                     _LC33 < auVar30._4_4_ && bVar7);
    uVar54 = -(uint)((fVar49 * (fVar49 + fVar49) + fVar76 * fVar76 + fStack_890 * fStack_890) *
                     _LC33 < auVar30._8_4_ && bVar8);
    uVar56 = -(uint)((local_844 * (local_844 + local_844) + local_840 * local_840 +
                     fStack_88c * fStack_88c) * _LC33 < auVar30._12_4_ && bVar9);
    uVar26 = (uint)((local_898 * fVar75 - fVar58 * fVar68) * auVar59._0_4_) & uVar36 |
             ~uVar36 & uVar26;
    uVar33 = (uint)((fStack_894 * fVar77 - fVar60 * fVar23) * auVar59._4_4_) & uVar52 |
             ~uVar52 & uVar33;
    uVar35 = (uint)((fStack_890 * fVar78 - fVar61 * fVar49) * auVar59._8_4_) & uVar54 |
             ~uVar54 & uVar35;
    uVar37 = (uint)((fStack_88c * fVar79 - fVar62 * local_844) * auVar59._12_4_) & uVar56 |
             ~uVar56 & uVar37;
    uVar50 = uVar36 & (uint)((fVar58 * fVar67 - fVar75 * fVar68) * auVar59._0_4_) | ~uVar36 & uVar45
    ;
    uVar52 = uVar52 & (uint)((fVar60 * fVar73 - fVar77 * fVar23) * auVar59._4_4_) | ~uVar52 & uVar46
    ;
    uVar54 = uVar54 & (uint)((fVar61 * fVar76 - fVar78 * fVar49) * auVar59._8_4_) | ~uVar54 & uVar47
    ;
    uVar56 = uVar56 & (uint)((fVar62 * local_840 - fVar79 * local_844) * auVar59._12_4_) |
             ~uVar56 & uVar48;
  }
  else {
    auVar51._0_4_ = fVar58 + fVar75;
    auVar51._4_4_ = fVar60 + fVar77;
    auVar51._8_4_ = fVar61 + fVar78;
    auVar51._12_4_ = fVar62 + fVar79;
    auVar59 = divps(auVar51,auVar29);
    uVar50 = auVar59._0_4_ & uVar24;
    uVar52 = auVar59._4_4_ & uVar22;
    uVar54 = auVar59._8_4_ & uVar34;
    uVar56 = auVar59._12_4_ & uVar36;
    uVar26 = ~uVar24 & uVar26 | uVar50;
    uVar33 = ~uVar22 & uVar33 | uVar52;
    uVar35 = ~uVar34 & uVar35 | uVar54;
    uVar37 = ~uVar36 & uVar37 | uVar56;
    uVar50 = uVar50 | ~uVar24 & uVar45;
    uVar52 = uVar52 | ~uVar22 & uVar46;
    uVar54 = uVar54 | ~uVar34 & uVar47;
    uVar56 = uVar56 | ~uVar36 & uVar48;
  }
  *(uint *)(param_6 + 0x50) = uVar50;
  *(uint *)(param_6 + 0x54) = uVar52;
  *(uint *)(param_6 + 0x58) = uVar54;
  *(uint *)(param_6 + 0x5c) = uVar56;
  *(uint *)(param_6 + 0x10) = uVar26;
  *(uint *)(param_6 + 0x14) = uVar33;
  *(uint *)(param_6 + 0x18) = uVar35;
  *(uint *)(param_6 + 0x1c) = uVar37;
  if ((param_1[0xe12] != (image_block)0x0) || (param_1[0xeea] != (image_block)0x0)) {
    fVar62 = auVar29._0_4_;
    fVar79 = auVar29._4_4_;
    fVar72 = auVar29._8_4_;
    fVar43 = (float)local_888._0_4_ * fVar27;
    fVar68 = (float)local_888._4_4_ * fVar39;
    fStack_880 = fStack_880 * fVar44;
    fVar39 = (float)((uint)local_898 & uVar24 | ~uVar24 & (uint)fVar38) * fVar27 +
             (float)((uint)fStack_894 & uVar22 | ~uVar22 & (uint)fVar40) * fVar39 +
             (float)((uint)fStack_890 & uVar34 | ~uVar34 & (uint)fVar74) * fVar44;
    fVar23 = fVar68 * fVar72 * fVar43;
    fVar40 = (float)(_LC35 ^ (uint)fStack_880) * fVar62 * fVar79;
    fVar76 = fVar39 * fVar72 - fStack_880 * fStack_880;
    fVar27 = fVar79 * fVar76 - fVar72 * fVar68 * fVar68;
    fVar80 = fVar79 * fVar43 * (float)((uint)fVar72 ^ _LC35);
    fVar38 = fVar79 * fVar43 * fStack_880;
    fVar74 = (float)((uint)fVar72 ^ _LC35) * fVar62 * fVar68;
    fStack_880 = fVar62 * fVar68 * fStack_880;
    fVar65 = fVar65 / (fVar62 * fVar27 + fVar43 * fVar80);
    fVar49 = fVar65 * (fVar75 + fVar58);
    fVar67 = fVar65 * (fVar77 + fVar60);
    fVar73 = fVar65 * (fVar78 + fVar61);
    fVar65 = fVar65 * (fVar58 + fVar60 + fVar61);
    fVar44 = fVar40 * fVar73 + fVar80 * fVar49 + fVar62 * fVar79 * fVar72 * fVar65 + fVar74 * fVar67
    ;
    fVar27 = fVar27 * fVar49 + fVar38 * fVar73 + fVar23 * fVar67 + fVar80 * fVar65;
    fVar23 = fVar23 * fVar49 + fStack_880 * fVar73 +
             (fVar62 * fVar76 - fVar72 * fVar43 * fVar43) * fVar67 + fVar74 * fVar65;
    fVar39 = fVar38 * fVar49 +
             ((fVar39 * fVar79 - fVar68 * fVar68) * fVar62 - fVar79 * fVar43 * fVar43) * fVar73 +
             fStack_880 * fVar67 + fVar40 * fVar65;
    *(ulong *)param_8 = CONCAT44(fVar23,fVar27);
    *(ulong *)(param_8 + 8) = CONCAT44(fVar44,fVar39);
    if (NAN(fVar27 * fVar27 + fVar39 * fVar39 + fVar23 * fVar23 + fVar44 * fVar44)) {
      fVar27 = ((*(float *)(param_6 + 0x50) - *(float *)(param_6 + 0x10)) +
                (*(float *)(param_6 + 0x54) - *(float *)(param_6 + 0x14)) +
               (*(float *)(param_6 + 0x58) - *(float *)(param_6 + 0x18))) * _LC8;
      if (fVar27 <= 0.0) {
        fVar27 = 0.0;
      }
      fVar43 = _LC11 * fVar27;
      fVar39 = (*(float *)(param_6 + 0x14) + *(float *)(param_6 + 0x54)) * _LC11;
      fVar44 = (*(float *)(param_6 + 0x18) + *(float *)(param_6 + 0x58)) * _LC11;
      *(float *)param_8 = (*(float *)(param_6 + 0x10) + *(float *)(param_6 + 0x50)) * _LC11 - fVar43
      ;
      *(float *)(param_8 + 4) = fVar39 - fVar43;
      *(float *)(param_8 + 8) = fVar44 - fVar43;
      *(float *)(param_8 + 0xc) = fVar27;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



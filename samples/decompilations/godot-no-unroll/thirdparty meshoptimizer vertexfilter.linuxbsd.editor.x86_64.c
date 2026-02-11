
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* meshopt::decodeFilterOctSimd(short*, unsigned long) */

void meshopt::decodeFilterOctSimd(short *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar21 [16];
  float fVar28;
  float fVar29;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar30 [16];
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar40 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  uVar12 = _LC1;
  uVar11 = _UNK_001010ac;
  uVar10 = _UNK_001010a8;
  uVar9 = _UNK_001010a4;
  uVar8 = __LC7;
  auVar7 = __LC6;
  uVar6 = _LC5;
  uVar5 = _LC3;
  if (param_2 != 0) {
    pauVar13 = (undefined1 (*) [16])param_1;
    do {
      uVar1 = *(uint *)*pauVar13;
      uVar2 = *(uint *)((long)*pauVar13 + 8);
      uVar3 = *(uint *)pauVar13[1];
      uVar4 = *(uint *)((long)pauVar13[1] + 8);
      pauVar14 = pauVar13 + 2;
      auVar38._0_4_ = uVar1 & uVar8;
      auVar38._4_4_ = *(uint *)((long)*pauVar13 + 4) & uVar9;
      auVar38._8_4_ = uVar2 & uVar10;
      auVar38._12_4_ = *(uint *)((long)*pauVar13 + 0xc) & uVar11;
      fVar28 = (float)((int)uVar1 >> 0x10);
      fVar31 = (float)((int)uVar2 >> 0x10);
      fVar33 = (float)((int)uVar3 >> 0x10);
      fVar35 = (float)((int)uVar4 >> 0x10);
      auVar37._0_4_ = uVar3 & uVar8;
      auVar37._4_4_ = *(uint *)((long)pauVar13[1] + 4) & uVar9;
      auVar37._8_4_ = uVar4 & uVar10;
      auVar37._12_4_ = *(uint *)((long)pauVar13[1] + 0xc) & uVar11;
      fVar39 = (float)(int)(short)uVar1;
      fVar41 = (float)(int)(short)uVar2;
      fVar42 = (float)(int)(short)uVar3;
      fVar43 = (float)(int)(short)uVar4;
      fVar20 = (float)(int)(*(uint *)((long)*pauVar13 + 4) & uVar5) -
               ((float)(~uVar12 & (uint)fVar39) + (float)(~uVar12 & (uint)fVar28));
      fVar25 = (float)(int)(*(uint *)((long)*pauVar13 + 0xc) & uVar5) -
               ((float)(~uVar12 & (uint)fVar41) + (float)(~uVar12 & (uint)fVar31));
      auVar17._4_4_ = fVar25;
      auVar17._0_4_ = fVar20;
      fVar26 = (float)(int)(*(uint *)((long)pauVar13[1] + 4) & uVar5) -
               ((float)(~uVar12 & (uint)fVar42) + (float)(~uVar12 & (uint)fVar33));
      fVar27 = (float)(int)(*(uint *)((long)pauVar13[1] + 0xc) & uVar5) -
               ((float)(~uVar12 & (uint)fVar43) + (float)(~uVar12 & (uint)fVar35));
      auVar17._8_4_ = fVar26;
      auVar17._12_4_ = fVar27;
      auVar18 = minps(auVar17,(undefined1  [16])0x0);
      fVar39 = (float)((uint)fVar39 & uVar12 ^ auVar18._0_4_) + fVar39;
      fVar41 = (float)((uint)fVar41 & uVar12 ^ auVar18._4_4_) + fVar41;
      fVar42 = (float)((uint)fVar42 & uVar12 ^ auVar18._8_4_) + fVar42;
      fVar43 = (float)((uint)fVar43 & uVar12 ^ auVar18._12_4_) + fVar43;
      fVar28 = (float)(auVar18._0_4_ ^ (uint)fVar28 & uVar12) + fVar28;
      fVar31 = (float)(auVar18._4_4_ ^ (uint)fVar31 & uVar12) + fVar31;
      fVar33 = (float)(auVar18._8_4_ ^ (uint)fVar33 & uVar12) + fVar33;
      fVar35 = (float)(auVar18._12_4_ ^ (uint)fVar35 & uVar12) + fVar35;
      auVar40._0_4_ = fVar28 * fVar28 + fVar20 * fVar20 + fVar39 * fVar39;
      auVar40._4_4_ = fVar31 * fVar31 + fVar25 * fVar25 + fVar41 * fVar41;
      auVar40._8_4_ = fVar33 * fVar33 + fVar26 * fVar26 + fVar42 * fVar42;
      auVar40._12_4_ = fVar35 * fVar35 + fVar27 * fVar27 + fVar43 * fVar43;
      auVar30._4_4_ = uVar6;
      auVar30._0_4_ = uVar6;
      auVar30._8_4_ = uVar6;
      auVar30._12_4_ = uVar6;
      auVar18 = sqrtps(auVar40,auVar40);
      auVar18 = divps(auVar30,auVar18);
      fVar29 = auVar18._0_4_;
      fVar32 = auVar18._4_4_;
      fVar34 = auVar18._8_4_;
      fVar36 = auVar18._12_4_;
      auVar18._0_4_ = (int)(fVar39 * fVar29);
      auVar18._4_4_ = (int)(fVar41 * fVar32);
      auVar18._8_4_ = (int)(fVar42 * fVar34);
      auVar18._12_4_ = (int)(fVar43 * fVar36);
      auVar19._0_4_ = (int)(fVar28 * fVar29);
      auVar19._4_4_ = (int)(fVar31 * fVar32);
      auVar19._8_4_ = (int)(fVar33 * fVar34);
      auVar19._12_4_ = (int)(fVar35 * fVar36);
      auVar19 = auVar19 & auVar7;
      auVar15._0_4_ = (int)(fVar29 * fVar20) << 0x10;
      auVar15._4_4_ = (int)(fVar32 * fVar25) << 0x10;
      auVar15._8_4_ = (int)(fVar34 * fVar26) << 0x10;
      auVar15._12_4_ = (int)(fVar36 * fVar27) << 0x10;
      auVar15 = auVar18 & auVar7 | auVar15;
      auVar16._2_2_ = auVar19._8_2_;
      auVar16._0_2_ = auVar15._8_2_;
      auVar16._4_2_ = auVar15._10_2_;
      auVar16._6_2_ = auVar19._10_2_;
      auVar16._8_2_ = auVar15._12_2_;
      auVar16._10_2_ = auVar19._12_2_;
      auVar16._12_2_ = auVar15._14_2_;
      auVar16._14_2_ = auVar19._14_2_;
      auVar24._0_12_ = auVar15._0_12_;
      auVar24._12_2_ = auVar15._6_2_;
      auVar24._14_2_ = auVar19._6_2_;
      auVar23._12_4_ = auVar24._12_4_;
      auVar23._0_10_ = auVar15._0_10_;
      auVar23._10_2_ = auVar19._4_2_;
      auVar22._10_6_ = auVar23._10_6_;
      auVar22._0_8_ = auVar15._0_8_;
      auVar22._8_2_ = auVar15._4_2_;
      auVar21._8_8_ = auVar22._8_8_;
      auVar21._6_2_ = auVar19._2_2_;
      auVar21._4_2_ = auVar15._2_2_;
      auVar21._0_2_ = auVar15._0_2_;
      auVar21._2_2_ = auVar19._0_2_;
      pauVar13[1] = auVar37 | auVar16;
      *pauVar13 = auVar38 | auVar21;
      pauVar13 = pauVar14;
    } while ((undefined1 (*) [16])((long)param_1 + (param_2 * 8 - 8 & 0xffffffffffffffe0) + 0x20) !=
             pauVar14);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* meshopt::decodeFilterOctSimd(signed char*, unsigned long) */

void meshopt::decodeFilterOctSimd(signed *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  signed *psVar15;
  signed *psVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  uVar14 = _LC1;
  uVar13 = _UNK_001010cc;
  uVar12 = _UNK_001010c8;
  uVar11 = _UNK_001010c4;
  uVar10 = __LC11;
  uVar9 = _UNK_001010bc;
  uVar8 = _UNK_001010b8;
  uVar7 = _UNK_001010b4;
  uVar6 = __LC10;
  fVar5 = _LC9;
  if (param_2 != 0) {
    psVar15 = param_1;
    do {
      uVar1 = *(uint *)psVar15;
      uVar2 = *(uint *)(psVar15 + 4);
      uVar3 = *(uint *)(psVar15 + 8);
      uVar4 = *(uint *)(psVar15 + 0xc);
      psVar16 = psVar15 + 0x10;
      fVar31 = (float)(int)(char)uVar1;
      fVar32 = (float)(int)(char)uVar2;
      fVar33 = (float)(int)(char)uVar3;
      fVar34 = (float)(int)(char)uVar4;
      fVar17 = (float)((int)(uVar1 << 0x10) >> 0x18);
      fVar19 = (float)((int)(uVar2 << 0x10) >> 0x18);
      fVar21 = (float)((int)(uVar3 << 0x10) >> 0x18);
      fVar23 = (float)((int)(uVar4 << 0x10) >> 0x18);
      fVar27 = (float)((int)(uVar1 << 8) >> 0x18) -
               ((float)(~uVar14 & (uint)fVar31) + (float)(~uVar14 & (uint)fVar17));
      fVar28 = (float)((int)(uVar2 << 8) >> 0x18) -
               ((float)(~uVar14 & (uint)fVar32) + (float)(~uVar14 & (uint)fVar19));
      auVar25._4_4_ = fVar28;
      auVar25._0_4_ = fVar27;
      fVar29 = (float)((int)(uVar3 << 8) >> 0x18) -
               ((float)(~uVar14 & (uint)fVar33) + (float)(~uVar14 & (uint)fVar21));
      fVar30 = (float)((int)(uVar4 << 8) >> 0x18) -
               ((float)(~uVar14 & (uint)fVar34) + (float)(~uVar14 & (uint)fVar23));
      auVar25._8_4_ = fVar29;
      auVar25._12_4_ = fVar30;
      auVar26 = minps(auVar25,(undefined1  [16])0x0);
      fVar31 = (float)((uint)fVar31 & uVar14 ^ auVar26._0_4_) + fVar31;
      fVar32 = (float)((uint)fVar32 & uVar14 ^ auVar26._4_4_) + fVar32;
      fVar33 = (float)((uint)fVar33 & uVar14 ^ auVar26._8_4_) + fVar33;
      fVar34 = (float)((uint)fVar34 & uVar14 ^ auVar26._12_4_) + fVar34;
      fVar17 = (float)(auVar26._0_4_ ^ (uint)fVar17 & uVar14) + fVar17;
      fVar19 = (float)(auVar26._4_4_ ^ (uint)fVar19 & uVar14) + fVar19;
      fVar21 = (float)(auVar26._8_4_ ^ (uint)fVar21 & uVar14) + fVar21;
      fVar23 = (float)(auVar26._12_4_ ^ (uint)fVar23 & uVar14) + fVar23;
      auVar26._0_4_ = fVar17 * fVar17 + fVar27 * fVar27 + fVar31 * fVar31;
      auVar26._4_4_ = fVar19 * fVar19 + fVar28 * fVar28 + fVar32 * fVar32;
      auVar26._8_4_ = fVar21 * fVar21 + fVar29 * fVar29 + fVar33 * fVar33;
      auVar26._12_4_ = fVar23 * fVar23 + fVar30 * fVar30 + fVar34 * fVar34;
      auVar26 = rsqrtps(auVar26,auVar26);
      fVar18 = auVar26._0_4_ * fVar5;
      fVar20 = auVar26._4_4_ * fVar5;
      fVar22 = auVar26._8_4_ * fVar5;
      fVar24 = auVar26._12_4_ * fVar5;
      *(uint *)psVar15 =
           uVar1 & uVar10 | (int)(fVar31 * fVar18) & uVar6 |
           ((int)(fVar17 * fVar18) & uVar6) << 8 | ((int)(fVar18 * fVar27) & uVar6) << 0x10;
      *(uint *)(psVar15 + 4) =
           uVar2 & uVar11 | (int)(fVar32 * fVar20) & uVar7 |
           ((int)(fVar19 * fVar20) & uVar7) << 8 | ((int)(fVar20 * fVar28) & uVar7) << 0x10;
      *(uint *)(psVar15 + 8) =
           uVar3 & uVar12 | (int)(fVar33 * fVar22) & uVar8 |
           ((int)(fVar21 * fVar22) & uVar8) << 8 | ((int)(fVar22 * fVar29) & uVar8) << 0x10;
      *(uint *)(psVar15 + 0xc) =
           uVar4 & uVar13 | (int)(fVar34 * fVar24) & uVar9 |
           ((int)(fVar23 * fVar24) & uVar9) << 8 | ((int)(fVar24 * fVar30) & uVar9) << 0x10;
      psVar15 = psVar16;
    } while (param_1 + (param_2 * 4 - 4 & 0xfffffffffffffff0) + 0x10 != psVar16);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* meshopt::decodeFilterQuatSimd(short*, unsigned long) */

void meshopt::decodeFilterQuatSimd(short *param_1,ulong param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar17 [16];
  float fVar24;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  uVar8 = _UNK_001010dc;
  uVar7 = _UNK_001010d8;
  uVar6 = _UNK_001010d4;
  uVar5 = __LC12;
  auVar4 = __LC6;
  fVar3 = _LC16;
  uVar2 = _LC14;
  fVar1 = _LC5;
  if (param_2 != 0) {
    puVar10 = (ulong *)param_1;
    do {
      auVar34._4_4_ = uVar2;
      auVar34._0_4_ = uVar2;
      auVar34._8_4_ = uVar2;
      auVar34._12_4_ = uVar2;
      puVar11 = puVar10 + 4;
      bVar9 = (byte)((int)*(short *)((long)puVar10 + 6) << 4) & 0x3f;
      auVar35._0_4_ = (float)(int)(*(int *)((long)puVar10 + 4) >> 0x10 | uVar5);
      auVar35._4_4_ = (float)(int)(*(int *)((long)puVar10 + 0xc) >> 0x10 | uVar6);
      auVar35._8_4_ = (float)(int)(*(int *)((long)puVar10 + 0x14) >> 0x10 | uVar7);
      auVar35._12_4_ = (float)(int)(*(int *)((long)puVar10 + 0x1c) >> 0x10 | uVar8);
      auVar35 = divps(auVar34,auVar35);
      fVar24 = auVar35._0_4_;
      fVar16 = (float)((int)*puVar10 >> 0x10) * fVar24;
      fVar27 = auVar35._4_4_;
      fVar21 = (float)((int)puVar10[1] >> 0x10) * fVar27;
      fVar28 = auVar35._8_4_;
      fVar22 = (float)((int)puVar10[2] >> 0x10) * fVar28;
      fVar29 = auVar35._12_4_;
      fVar23 = (float)((int)puVar10[3] >> 0x10) * fVar29;
      fVar30 = (float)(int)(short)*(int *)((long)puVar10 + 4) * fVar24;
      fVar31 = (float)(int)(short)*(int *)((long)puVar10 + 0xc) * fVar27;
      fVar32 = (float)(int)(short)*(int *)((long)puVar10 + 0x14) * fVar28;
      fVar33 = (float)(int)(short)*(int *)((long)puVar10 + 0x1c) * fVar29;
      fVar24 = (float)(int)(short)(int)*puVar10 * fVar24;
      fVar27 = (float)(int)(short)(int)puVar10[1] * fVar27;
      fVar28 = (float)(int)(short)(int)puVar10[2] * fVar28;
      fVar29 = (float)(int)(short)(int)puVar10[3] * fVar29;
      auVar14._0_4_ = (int)(fVar16 * fVar1) << 0x10;
      auVar14._4_4_ = (int)(fVar21 * fVar1) << 0x10;
      auVar14._8_4_ = (int)(fVar22 * fVar1) << 0x10;
      auVar14._12_4_ = (int)(fVar23 * fVar1) << 0x10;
      auVar26._0_4_ = (int)(fVar30 * fVar1) << 0x10;
      auVar26._4_4_ = (int)(fVar31 * fVar1) << 0x10;
      auVar26._8_4_ = (int)(fVar32 * fVar1) << 0x10;
      auVar26._12_4_ = (int)(fVar33 * fVar1) << 0x10;
      auVar25._0_4_ = (int)(fVar24 * fVar1);
      auVar25._4_4_ = (int)(fVar27 * fVar1);
      auVar25._8_4_ = (int)(fVar28 * fVar1);
      auVar25._12_4_ = (int)(fVar29 * fVar1);
      auVar26 = auVar25 & auVar4 | auVar26;
      auVar12._0_4_ = fVar3 - (fVar30 * fVar30 + fVar16 * fVar16 + fVar24 * fVar24);
      auVar12._4_4_ = fVar3 - (fVar31 * fVar31 + fVar21 * fVar21 + fVar27 * fVar27);
      auVar12._8_4_ = fVar3 - (fVar32 * fVar32 + fVar22 * fVar22 + fVar28 * fVar28);
      auVar12._12_4_ = fVar3 - (fVar33 * fVar33 + fVar23 * fVar23 + fVar29 * fVar29);
      auVar35 = maxps(auVar12,(undefined1  [16])0x0);
      auVar35 = sqrtps(auVar35,auVar35);
      auVar13._0_4_ = (int)(auVar35._0_4_ * fVar1);
      auVar13._4_4_ = (int)(auVar35._4_4_ * fVar1);
      auVar13._8_4_ = (int)(auVar35._8_4_ * fVar1);
      auVar13._12_4_ = (int)(auVar35._12_4_ * fVar1);
      auVar14 = auVar13 & auVar4 | auVar14;
      auVar15._0_8_ =
           CONCAT26(auVar26._10_2_,CONCAT24(auVar14._10_2_,CONCAT22(auVar26._8_2_,auVar14._8_2_)));
      auVar15._8_2_ = auVar14._12_2_;
      auVar15._10_2_ = auVar26._12_2_;
      auVar15._12_2_ = auVar14._14_2_;
      auVar15._14_2_ = auVar26._14_2_;
      auVar20._0_12_ = auVar14._0_12_;
      auVar20._12_2_ = auVar14._6_2_;
      auVar20._14_2_ = auVar26._6_2_;
      auVar19._12_4_ = auVar20._12_4_;
      auVar19._0_10_ = auVar14._0_10_;
      auVar19._10_2_ = auVar26._4_2_;
      auVar18._10_6_ = auVar19._10_6_;
      auVar18._0_8_ = auVar14._0_8_;
      auVar18._8_2_ = auVar14._4_2_;
      auVar17._8_8_ = auVar18._8_8_;
      auVar17._6_2_ = auVar26._2_2_;
      auVar17._4_2_ = auVar14._2_2_;
      auVar17._0_2_ = auVar14._0_2_;
      auVar17._2_2_ = auVar26._0_2_;
      *puVar10 = auVar17._0_8_ << bVar9 | auVar17._0_8_ >> 0x40 - bVar9;
      bVar9 = (byte)((int)*(short *)((long)puVar10 + 0xe) << 4) & 0x3f;
      puVar10[1] = auVar17._8_8_ << bVar9 | auVar17._8_8_ >> 0x40 - bVar9;
      bVar9 = (byte)((int)*(short *)((long)puVar10 + 0x16) << 4) & 0x3f;
      puVar10[2] = auVar15._0_8_ << bVar9 | auVar15._0_8_ >> 0x40 - bVar9;
      bVar9 = (byte)((int)*(short *)((long)puVar10 + 0x1e) << 4) & 0x3f;
      puVar10[3] = auVar15._8_8_ << bVar9 | auVar15._8_8_ >> 0x40 - bVar9;
      puVar10 = puVar11;
    } while (puVar11 != (ulong *)((long)param_1 + (param_2 * 8 - 8 & 0xffffffffffffffe0) + 0x20));
  }
  return;
}



void meshopt_decodeFilterOct(signed *param_1,ulong param_2,long param_3)

{
  ulong extraout_RDX;
  size_t __n;
  ulong extraout_RDX_00;
  size_t __n_00;
  long in_FS_OFFSET;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  signed local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 4) {
    meshopt::decodeFilterOctSimd(param_1,param_2 & 0xfffffffffffffffc);
    if (extraout_RDX_00 < param_2) {
      local_48[0] = (signed)0x0;
      local_48[1] = (signed)0x0;
      local_48[2] = (signed)0x0;
      local_48[3] = (signed)0x0;
      local_48[4] = (signed)0x0;
      local_48[5] = (signed)0x0;
      local_48[6] = (signed)0x0;
      local_48[7] = (signed)0x0;
      local_48[8] = (signed)0x0;
      local_48[9] = (signed)0x0;
      local_48[10] = (signed)0x0;
      local_48[0xb] = (signed)0x0;
      local_48[0xc] = (signed)0x0;
      local_48[0xd] = (signed)0x0;
      local_48[0xe] = (signed)0x0;
      local_48[0xf] = (signed)0x0;
      __memcpy_chk(local_48,param_1 + extraout_RDX_00 * 4,(param_2 - extraout_RDX_00) * 4,0x10);
      meshopt::decodeFilterOctSimd(local_48,param_2 - extraout_RDX_00);
      memcpy(param_1 + extraout_RDX_00 * 4,local_48,__n_00);
    }
  }
  else {
    meshopt::decodeFilterOctSimd((short *)param_1,param_2 & 0xfffffffffffffffc);
    if (extraout_RDX < param_2) {
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      __memcpy_chk(local_68,param_1 + extraout_RDX * 8,(param_2 - extraout_RDX) * 8,0x20);
      meshopt::decodeFilterOctSimd((short *)local_68,param_2 - extraout_RDX);
      memcpy(param_1 + extraout_RDX * 8,local_68,__n);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void meshopt_decodeFilterQuat(short *param_1,ulong param_2)

{
  size_t __n;
  ulong uVar1;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  uVar1 = param_2 & 0xfffffffffffffffc;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  meshopt::decodeFilterQuatSimd(param_1,uVar1);
  if (uVar1 < param_2) {
    __n = (param_2 - uVar1) * 8;
    local_58 = (undefined1  [16])0x0;
    local_48 = (undefined1  [16])0x0;
    __memcpy_chk(local_58,param_1 + uVar1 * 4,__n,0x20);
    meshopt::decodeFilterQuatSimd((short *)local_58,param_2 - uVar1);
    memcpy(param_1 + uVar1 * 4,local_58,__n);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void meshopt_decodeFilterExp(float *param_1,long param_2,ulong param_3)

{
  size_t __n;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  ulong uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  iVar4 = _UNK_001010ec;
  iVar3 = _UNK_001010e8;
  iVar2 = _UNK_001010e4;
  iVar1 = __LC17;
  uVar8 = (param_3 >> 2) * param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = uVar8 & 0xfffffffffffffffc;
  if (uVar9 != 0) {
    pfVar6 = param_1;
    do {
      pfVar5 = pfVar6 + 4;
      *pfVar6 = (float)(((int)*pfVar6 << 8) >> 8) *
                (float)((((int)*pfVar6 >> 0x18) + iVar1) * 0x800000);
      pfVar6[1] = (float)(((int)pfVar6[1] << 8) >> 8) *
                  (float)((((int)pfVar6[1] >> 0x18) + iVar2) * 0x800000);
      pfVar6[2] = (float)(((int)pfVar6[2] << 8) >> 8) *
                  (float)((((int)pfVar6[2] >> 0x18) + iVar3) * 0x800000);
      pfVar6[3] = (float)(((int)pfVar6[3] << 8) >> 8) *
                  (float)((((int)pfVar6[3] >> 0x18) + iVar4) * 0x800000);
      pfVar6 = pfVar5;
    } while (param_1 + uVar9 != pfVar5);
  }
  if (uVar9 < uVar8) {
    local_68 = (undefined1  [16])0x0;
    __n = (uVar8 - uVar9) * 4;
    local_58 = (undefined1  [16])0x0;
    local_48 = (undefined1  [16])0x0;
    local_38 = (undefined1  [16])0x0;
    pfVar5 = (float *)__memcpy_chk(local_68,param_1 + uVar9,__n,0x40);
    iVar4 = _UNK_001010ec;
    iVar3 = _UNK_001010e8;
    iVar2 = _UNK_001010e4;
    iVar1 = __LC17;
    pfVar6 = pfVar5;
    do {
      pfVar7 = pfVar6 + 4;
      *pfVar6 = (float)(((int)*pfVar6 << 8) >> 8) *
                (float)((((int)*pfVar6 >> 0x18) + iVar1) * 0x800000);
      pfVar6[1] = (float)(((int)pfVar6[1] << 8) >> 8) *
                  (float)((((int)pfVar6[1] >> 0x18) + iVar2) * 0x800000);
      pfVar6[2] = (float)(((int)pfVar6[2] << 8) >> 8) *
                  (float)((((int)pfVar6[2] >> 0x18) + iVar3) * 0x800000);
      pfVar6[3] = (float)(((int)pfVar6[3] << 8) >> 8) *
                  (float)((((int)pfVar6[3] >> 0x18) + iVar4) * 0x800000);
      pfVar6 = pfVar7;
    } while ((float *)(local_58 + ((uVar8 - uVar9) * 4 - 4 & 0xfffffffffffffff0)) != pfVar7);
    memcpy(param_1 + uVar9,pfVar5,__n);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void meshopt_encodeFilterOct(long param_1,long param_2,long param_3,char param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar7 = _LC1;
  uVar6 = _LC21;
  fVar5 = _LC20;
  fVar4 = _LC16;
  if (param_2 == 0) {
    return;
  }
  fVar18 = (float)((1 << ((char)param_3 * '\x02' - 1U & 0x1f)) + -1);
  lVar9 = 0;
  fVar17 = (float)((1 << (param_4 - 1U & 0x1f)) + -1);
  fVar19 = (float)((uint)fVar18 ^ _LC1);
  fVar12 = fVar17 + _LC20;
  fVar20 = (float)((uint)fVar17 ^ _LC1);
  do {
    while( true ) {
      fVar15 = *param_5;
      fVar16 = param_5[1];
      fVar1 = param_5[2];
      fVar2 = param_5[3];
      fVar14 = (float)((uint)fVar15 & uVar6) + (float)((uint)fVar16 & uVar6) +
               (float)((uint)fVar1 & uVar6);
      fVar13 = fVar5;
      if (fVar14 != 0.0) break;
      if (0.0 <= fVar1) {
        uVar10 = (uint)(fVar15 * 0.0 * fVar17 + fVar5);
        fVar15 = fVar16 * 0.0 * fVar17;
        goto LAB_001007f9;
      }
      uVar10 = (uint)(fVar17 + fVar5);
      fVar16 = fVar4;
LAB_00100908:
      if (fVar16 <= fVar4) {
        fVar15 = fVar16 * fVar17;
        goto LAB_001007f9;
      }
      uVar11 = (uint)(fVar5 + fVar17);
      if (0.0 <= fVar2) goto LAB_0010080b;
LAB_0010092a:
      fVar15 = _LC19;
      fVar16 = fVar19;
      if (fVar2 < _LC24) goto LAB_00100823;
      uVar8 = (uint)(_LC19 + fVar2 * fVar18);
      if (param_3 != 4) goto LAB_00100835;
LAB_00100956:
      param_5 = param_5 + 4;
      *(uint *)(param_1 + lVar9 * 4) =
           (((uVar8 & 0xff) << 8 | (int)fVar12 & 0xffU) << 8 | uVar11 & 0xff) << 8 | uVar10 & 0xff;
      lVar9 = lVar9 + 1;
      if (param_2 == lVar9) {
        return;
      }
    }
    fVar14 = fVar4 / fVar14;
    fVar16 = fVar16 * fVar14;
    fVar15 = fVar15 * fVar14;
    fVar14 = fVar15;
    if (fVar1 < 0.0) {
      fVar14 = fVar4 - (float)((uint)fVar16 & uVar6);
      if (fVar15 < 0.0) {
        fVar14 = (float)((uint)fVar14 ^ _LC1);
      }
      bVar3 = fVar16 < 0.0;
      fVar16 = fVar4 - (float)((uint)fVar15 & uVar6);
      if (bVar3) {
        fVar16 = (float)((uint)fVar16 ^ uVar7);
      }
    }
    if (0.0 <= fVar14) {
      if (fVar14 <= fVar4) {
        fVar14 = fVar14 * fVar17;
        fVar15 = fVar5;
        goto LAB_001008f6;
      }
      fVar14 = fVar17 + fVar5;
    }
    else {
      fVar15 = _LC19;
      if (fVar14 < _LC24) {
        fVar14 = (float)((uint)fVar17 ^ _LC1);
      }
      else {
        fVar14 = fVar14 * fVar17;
      }
LAB_001008f6:
      fVar14 = fVar14 + fVar15;
    }
    uVar10 = (uint)fVar14;
    if (0.0 <= fVar16) goto LAB_00100908;
    fVar13 = _LC19;
    fVar15 = fVar20;
    if (_LC24 <= fVar16) {
      fVar15 = fVar16 * fVar17;
    }
LAB_001007f9:
    uVar11 = (uint)(fVar13 + fVar15);
    if (fVar2 < 0.0) goto LAB_0010092a;
LAB_0010080b:
    fVar15 = fVar5;
    fVar16 = fVar18;
    if (fVar2 <= _LC16) {
      fVar16 = fVar2 * fVar18;
    }
LAB_00100823:
    uVar8 = (uint)(fVar15 + fVar16);
    if (param_3 == 4) goto LAB_00100956;
LAB_00100835:
    param_5 = param_5 + 4;
    *(ulong *)(param_1 + lVar9 * 8) =
         (((ulong)(uVar8 & 0xffff) << 0x10 | (ulong)((int)fVar12 & 0xffff)) << 0x10 |
         (ulong)(uVar11 & 0xffff)) << 0x10 | (ulong)(uVar10 & 0xffff);
    lVar9 = lVar9 + 1;
    if (param_2 == lVar9) {
      return;
    }
  } while( true );
}



void meshopt_encodeFilterQuat
               (ushort *param_1,long param_2,undefined8 param_3,char param_4,float *param_5)

{
  bool bVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  ushort uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar7 = _LC21;
  fVar6 = _LC25;
  fVar5 = _LC24;
  fVar4 = _LC20;
  fVar3 = _LC16;
  if (param_2 != 0) {
    pfVar11 = param_5 + param_2 * 4;
    fVar15 = (float)((1 << (param_4 - 1U & 0x1f)) + -1);
    fVar17 = (float)((uint)fVar15 ^ _LC1);
    uVar2 = (ushort)(int)(fVar15 + _LC20);
    do {
      fVar13 = *param_5;
      fVar16 = (float)((uint)param_5[2] & uVar7);
      bVar1 = (float)((uint)fVar13 & uVar7) < (float)((uint)param_5[1] & uVar7);
      uVar8 = 2;
      fVar18 = (float)((uint)param_5[bVar1] & uVar7);
      fVar14 = param_5[2];
      if (fVar16 <= fVar18) {
        uVar8 = (uint)bVar1;
        fVar14 = param_5[bVar1];
        fVar16 = fVar18;
      }
      if ((float)((uint)param_5[3] & uVar7) <= fVar16) {
        fVar13 = param_5[(int)(uVar8 + 1)];
        lVar10 = (ulong)(uVar8 + 2 & 3) << 2;
        lVar9 = (ulong)(uVar8 + 3 & 3) << 2;
      }
      else {
        uVar8 = 3;
        lVar9 = 8;
        lVar10 = 4;
        fVar14 = param_5[3];
      }
      fVar16 = (float)((uint)fVar5 & -(uint)(fVar14 < 0.0) | ~-(uint)(fVar14 < 0.0) & (uint)fVar3);
      fVar13 = fVar13 * fVar6 * fVar16;
      if (fVar13 < 0.0) {
        if (fVar13 < fVar5) {
          uVar12 = (ushort)(int)(fVar17 - fVar4);
        }
        else {
          uVar12 = (ushort)(int)(fVar13 * fVar15 - fVar4);
        }
      }
      else {
        uVar12 = uVar2;
        if (fVar13 <= fVar3) {
          uVar12 = (ushort)(int)(fVar13 * fVar15 + fVar4);
        }
      }
      fVar13 = *(float *)((long)param_5 + lVar10);
      *param_1 = uVar12;
      fVar13 = fVar13 * fVar6 * fVar16;
      if (fVar13 < 0.0) {
        if (fVar13 < _LC24) {
          uVar12 = (ushort)(int)(fVar17 - fVar4);
        }
        else {
          uVar12 = (ushort)(int)(fVar13 * fVar15 - fVar4);
        }
      }
      else {
        uVar12 = uVar2;
        if (fVar13 <= fVar3) {
          uVar12 = (ushort)(int)(fVar13 * fVar15 + fVar4);
        }
      }
      fVar13 = *(float *)((long)param_5 + lVar9);
      param_1[1] = uVar12;
      fVar16 = fVar13 * fVar6 * fVar16;
      if (fVar16 < 0.0) {
        if (fVar16 < _LC24) {
          uVar12 = (ushort)(int)(fVar17 - fVar4);
        }
        else {
          uVar12 = (ushort)(int)(fVar16 * fVar15 - fVar4);
        }
      }
      else {
        uVar12 = uVar2;
        if (fVar16 <= _LC16) {
          uVar12 = (ushort)(int)(fVar16 * fVar15 + fVar4);
        }
      }
      param_5 = param_5 + 4;
      param_1[2] = uVar12;
      param_1[3] = (ushort)uVar8 | uVar2 & 0xfffc;
      param_1 = param_1 + 4;
    } while (param_5 != pfVar11);
  }
  return;
}



void meshopt_encodeFilterExp
               (long param_1,long param_2,ulong param_3,int param_4,float *param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  float *pfVar9;
  long in_FS_OFFSET;
  uint uVar10;
  int local_138 [66];
  long local_30;
  
  uVar2 = _LC20;
  uVar1 = _LC19;
  param_3 = param_3 >> 2;
  piVar4 = local_138;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 == 2) {
    if (param_3 != 0) {
      do {
        *piVar4 = -100;
        piVar4 = piVar4 + 1;
      } while (local_138 + param_3 != piVar4);
    }
    lVar8 = 0;
    pfVar7 = param_5 + param_3;
    if (param_2 == 0) goto LAB_00100e78;
    do {
      pfVar9 = pfVar7 + -param_3;
      piVar4 = local_138;
      if (param_3 != 0) {
        do {
          iVar5 = 0;
          if (*pfVar9 != 0.0) {
            iVar5 = ((uint)*pfVar9 >> 0x17 & 0xff) - 0x7e;
          }
          iVar3 = *piVar4;
          if (*piVar4 < iVar5) {
            iVar3 = iVar5;
          }
          pfVar9 = pfVar9 + 1;
          *piVar4 = iVar3;
          piVar4 = piVar4 + 1;
        } while (pfVar7 != pfVar9);
      }
      lVar8 = lVar8 + 1;
      pfVar7 = pfVar7 + param_3;
    } while (param_2 != lVar8);
  }
  else if (param_2 == 0) goto LAB_00100e78;
  lVar8 = 0;
  do {
    while (param_6 == 1) {
      iVar5 = -100;
      pfVar7 = param_5;
      if (param_3 != 0) {
        do {
          iVar3 = 0;
          if (*pfVar7 != 0.0) {
            iVar3 = ((uint)*pfVar7 >> 0x17 & 0xff) - 0x7e;
          }
          if (iVar5 < iVar3) {
            iVar5 = iVar3;
          }
          pfVar7 = pfVar7 + 1;
        } while (pfVar7 != param_5 + param_3);
LAB_00100e00:
        uVar6 = 0;
        do {
          iVar3 = iVar5;
          if (param_6 != 1) {
            iVar3 = local_138[uVar6];
          }
          uVar10 = -(uint)(0.0 <= param_5[uVar6]);
          *(uint *)(param_1 + uVar6 * 4) =
               (iVar3 - (param_4 + -1)) * 0x1000000 |
               (int)((float)((((param_4 + -1) - iVar3) + 0x7f) * 0x800000) * param_5[uVar6] +
                    (float)(~uVar10 & uVar1 | uVar2 & uVar10)) & 0xffffffU;
          uVar6 = uVar6 + 1;
        } while (param_3 != uVar6);
      }
      param_5 = param_5 + param_3;
      lVar8 = lVar8 + 1;
      param_1 = param_1 + param_3 * 4;
      if (param_2 == lVar8) goto LAB_00100e78;
    }
    if (param_6 == 0) {
      uVar6 = 0;
      if (param_3 != 0) {
        do {
          iVar5 = 0;
          if ((param_5[uVar6] != 0.0) &&
             (iVar5 = ((uint)param_5[uVar6] >> 0x17 & 0xff) - 0x7e, iVar5 < -100)) {
            iVar5 = -100;
          }
          local_138[uVar6] = iVar5;
          uVar6 = uVar6 + 1;
        } while (uVar6 != param_3);
        goto LAB_00100df6;
      }
    }
    else if (param_6 == 3) {
      uVar6 = 0;
      if (param_3 != 0) {
        do {
          iVar5 = 0;
          if ((param_5[uVar6] != 0.0) &&
             (iVar5 = ((uint)param_5[uVar6] >> 0x17 & 0xff) - 0x7e, iVar5 < 0)) {
            iVar5 = 0;
          }
          local_138[uVar6] = iVar5;
          uVar6 = uVar6 + 1;
        } while (param_3 != uVar6);
        goto LAB_00100df6;
      }
    }
    else if (param_3 != 0) {
LAB_00100df6:
      iVar5 = -100;
      goto LAB_00100e00;
    }
    param_5 = param_5 + param_3;
    lVar8 = lVar8 + 1;
    param_1 = param_1 + param_3 * 4;
  } while (param_2 != lVar8);
LAB_00100e78:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



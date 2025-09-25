/* JPH::MutableCompoundShapeSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::MutableCompoundShapeSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((CompoundShapeSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::MutableCompoundShape::GetIntersectingSubShapes(JPH::AABox const&, unsigned int*, int) const
    */

int __thiscall
JPH::MutableCompoundShape::GetIntersectingSubShapes
          (MutableCompoundShape *this,AABox *param_1,uint *param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  long in_FS_OFFSET;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 local_38 [16];
  long local_20;
  
  fVar4 = *(float *)param_1;
  fVar5 = *(float *)(param_1 + 4);
  fVar6 = *(float *)(param_1 + 8);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fVar7 = *(float *)(param_1 + 0x10);
  fVar8 = *(float *)(param_1 + 0x14);
  fVar9 = *(float *)(param_1 + 0x18);
  iVar15 = (int)*(undefined8 *)(this + 0x50);
  uVar16 = iVar15 + 3U >> 2;
  if (uVar16 == 0) {
    iVar12 = 0;
  }
  else {
    iVar11 = 0;
    iVar12 = 0;
    iVar17 = uVar16 << 2;
    pfVar10 = *(float **)(this + 0x80);
    puVar13 = param_2;
    do {
      while( true ) {
        auVar20._4_4_ = -(uint)(pfVar10[0xd] < fVar4);
        auVar20._0_4_ = -(uint)(pfVar10[0xc] < fVar4);
        auVar20._8_4_ = -(uint)(pfVar10[0xe] < fVar4);
        auVar20._12_4_ = -(uint)(pfVar10[0xf] < fVar4);
        auVar18._4_4_ = -(uint)(pfVar10[0x11] < fVar5);
        auVar18._0_4_ = -(uint)(pfVar10[0x10] < fVar5);
        auVar18._8_4_ = -(uint)(pfVar10[0x12] < fVar5);
        auVar18._12_4_ = -(uint)(pfVar10[0x13] < fVar5);
        auVar19._4_4_ = -(uint)(pfVar10[0x15] < fVar6);
        auVar19._0_4_ = -(uint)(pfVar10[0x14] < fVar6);
        auVar19._8_4_ = -(uint)(pfVar10[0x16] < fVar6);
        auVar19._12_4_ = -(uint)(pfVar10[0x17] < fVar6);
        auVar3._4_4_ = -(uint)(fVar7 < pfVar10[1]);
        auVar3._0_4_ = -(uint)(fVar7 < *pfVar10);
        auVar3._8_4_ = -(uint)(fVar7 < pfVar10[2]);
        auVar3._12_4_ = -(uint)(fVar7 < pfVar10[3]);
        auVar2._4_4_ = -(uint)(fVar8 < pfVar10[5]);
        auVar2._0_4_ = -(uint)(fVar8 < pfVar10[4]);
        auVar2._8_4_ = -(uint)(fVar8 < pfVar10[6]);
        auVar2._12_4_ = -(uint)(fVar8 < pfVar10[7]);
        auVar1._4_4_ = -(uint)(fVar9 < pfVar10[9]);
        auVar1._0_4_ = -(uint)(fVar9 < pfVar10[8]);
        auVar1._8_4_ = -(uint)(fVar9 < pfVar10[10]);
        auVar1._12_4_ = -(uint)(fVar9 < pfVar10[0xb]);
        local_38._8_4_ = 0xffffffff;
        local_38._0_8_ = 0xffffffffffffffff;
        local_38._12_4_ = 0xffffffff;
        local_38 = (auVar18 | auVar2 | auVar20 | auVar3 | auVar19 | auVar1) ^ local_38;
        uVar16 = movmskps((int)param_2,local_38);
        param_2 = (uint *)(ulong)uVar16;
        if (uVar16 != 0) break;
LAB_001000a0:
        iVar11 = iVar11 + 4;
        pfVar10 = pfVar10 + 0x18;
        if (iVar17 == iVar11) goto LAB_00100160;
      }
      param_2 = (uint *)0x4;
      uVar16 = iVar15 - iVar11;
      if (4 < (uint)(iVar15 - iVar11)) {
        uVar16 = 4;
      }
      if (iVar15 == iVar11) goto LAB_001000a0;
      param_2 = (uint *)0x0;
      puVar14 = puVar13;
      do {
        puVar13 = puVar14;
        if (*(int *)(local_38 + (long)param_2 * 4) != 0) {
          puVar13 = puVar14 + 1;
          iVar12 = iVar12 + 1;
          *puVar14 = iVar11 + (int)param_2;
          if (param_3 <= iVar12) goto LAB_001000a0;
        }
        param_2 = (uint *)((long)param_2 + 1);
        puVar14 = puVar13;
      } while ((uint)param_2 < uVar16);
      iVar11 = iVar11 + 4;
      pfVar10 = pfVar10 + 0x18;
    } while (iVar17 != iVar11);
  }
LAB_00100160:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar12;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MutableCompoundShape::GetIntersectingSubShapes(JPH::OrientedBox const&, unsigned int*, int)
   const */

int __thiscall
JPH::MutableCompoundShape::GetIntersectingSubShapes
          (MutableCompoundShape *this,OrientedBox *param_1,uint *param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  long lVar15;
  float *pfVar16;
  uint *puVar17;
  float *pfVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  long in_FS_OFFSET;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar41 [16];
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
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  undefined4 uStack_1bc;
  float local_148 [4];
  float local_138 [12];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [4];
  float afStack_d4 [14];
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  iVar21 = (int)*(undefined8 *)(this + 0x50);
  local_78 = *(undefined8 *)(param_1 + 0x30);
  afStack_d4[0xb] = (float)*(undefined8 *)param_1;
  afStack_d4[0xc] = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  afStack_d4[0xd] = (float)*(undefined8 *)(param_1 + 8);
  fStack_9c = (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar22 = iVar21 + 3U >> 2;
  local_98 = (float)uVar5;
  fStack_94 = (float)((ulong)uVar5 >> 0x20);
  fStack_90 = (float)*(undefined8 *)(param_1 + 0x18);
  fStack_8c = (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
  local_88 = (float)uVar6;
  fStack_84 = (float)((ulong)uVar6 >> 0x20);
  fStack_80 = (float)*(undefined8 *)(param_1 + 0x28);
  fStack_7c = (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
  uVar5 = local_78;
  uStack_70 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = uStack_70;
  if (uVar22 == 0) {
    iVar20 = 0;
  }
  else {
    iVar19 = 0;
    local_78._4_4_ = (float)((ulong)local_78 >> 0x20);
    uStack_70._0_4_ = (float)*(undefined8 *)(param_1 + 0x38);
    iVar20 = 0;
    bVar7 = false;
    auVar28._0_4_ = 0.0 - afStack_d4[0xb];
    auVar28._4_4_ = 0.0 - afStack_d4[0xc];
    auVar28._8_4_ = 0.0 - afStack_d4[0xd];
    auVar28._12_4_ = 0.0 - fStack_9c;
    auVar23._12_4_ = fStack_9c;
    auVar23._0_12_ = *(undefined1 (*) [12])param_1;
    auVar28 = maxps(auVar28,auVar23);
    auVar64._0_4_ = 0.0 - local_98;
    auVar64._4_4_ = 0.0 - fStack_94;
    auVar64._8_4_ = 0.0 - fStack_90;
    auVar64._12_4_ = 0.0 - fStack_8c;
    auVar29._12_4_ = fStack_8c;
    auVar29._0_12_ = *(undefined1 (*) [12])(param_1 + 0x10);
    auVar29 = maxps(auVar64,auVar29);
    auVar61._0_4_ = 0.0 - local_88;
    auVar61._4_4_ = 0.0 - fStack_84;
    auVar61._8_4_ = 0.0 - fStack_80;
    auVar61._12_4_ = 0.0 - fStack_7c;
    auVar59._12_4_ = fStack_7c;
    auVar59._0_12_ = *(undefined1 (*) [12])(param_1 + 0x20);
    auVar23 = maxps(auVar61,auVar59);
    fVar36 = auVar28._0_4_ + _LC1;
    fVar37 = auVar28._4_4_ + _LC1;
    fVar38 = auVar28._8_4_ + _LC1;
    fVar39 = auVar28._12_4_ + _LC1;
    fVar40 = auVar29._0_4_ + _LC1;
    fVar42 = auVar29._4_4_ + _LC1;
    fVar43 = auVar29._8_4_ + _LC1;
    fVar44 = auVar29._12_4_ + _LC1;
    fVar31 = auVar23._0_4_ + _LC1;
    fVar32 = auVar23._4_4_ + _LC1;
    fVar33 = auVar23._8_4_ + _LC1;
    fVar34 = auVar23._12_4_ + _LC1;
    pfVar18 = *(float **)(this + 0x80);
    do {
      lVar15 = 0;
      local_1c8 = (float)local_68;
      fStack_1c4 = (float)((ulong)local_68 >> 0x20);
      fStack_1c0 = (float)uStack_60;
      uStack_1bc = (undefined4)((ulong)uStack_60 >> 0x20);
      local_d8 = (undefined1  [4])((pfVar18[0xc] - *pfVar18) * _LC3);
      afStack_d4[0] = (pfVar18[0xd] - pfVar18[1]) * _UNK_00108164;
      afStack_d4[1] = (pfVar18[0xe] - pfVar18[2]) * _UNK_00108168;
      afStack_d4[2] = (pfVar18[0xf] - pfVar18[3]) * _UNK_0010816c;
      local_148[0] = local_1c8;
      local_148[1] = fStack_1c4;
      local_148[2] = fStack_1c0;
      local_148[3] = (float)uStack_1bc;
      local_138[0] = (float)local_78 - (*pfVar18 + pfVar18[0xc]) * _LC3;
      local_138[1] = (float)local_78 - (pfVar18[1] + pfVar18[0xd]) * _UNK_00108164;
      local_138[2] = (float)local_78 - (pfVar18[2] + pfVar18[0xe]) * _UNK_00108168;
      local_138[3] = (float)local_78 - (pfVar18[3] + pfVar18[0xf]) * _UNK_0010816c;
      local_108 = CONCAT44(fVar37,fVar36);
      uStack_100 = CONCAT44(fVar39,fVar38);
      afStack_d4[3] = (pfVar18[0x10] - pfVar18[4]) * _LC3;
      afStack_d4[4] = (pfVar18[0x11] - pfVar18[5]) * _UNK_00108164;
      afStack_d4[5] = (pfVar18[0x12] - pfVar18[6]) * _UNK_00108168;
      afStack_d4[6] = (pfVar18[0x13] - pfVar18[7]) * _UNK_0010816c;
      local_f8 = CONCAT44(fVar42,fVar40);
      uStack_f0 = CONCAT44(fVar44,fVar43);
      local_138[4] = local_78._4_4_ - (pfVar18[4] + pfVar18[0x10]) * _LC3;
      local_138[5] = local_78._4_4_ - (pfVar18[5] + pfVar18[0x11]) * _UNK_00108164;
      local_138[6] = local_78._4_4_ - (pfVar18[6] + pfVar18[0x12]) * _UNK_00108168;
      local_138[7] = local_78._4_4_ - (pfVar18[7] + pfVar18[0x13]) * _UNK_0010816c;
      local_e8 = CONCAT44(fVar32,fVar31);
      uStack_e0 = CONCAT44(fVar34,fVar33);
      auVar35._8_4_ = 0xffffffff;
      auVar35._0_8_ = 0xffffffffffffffff;
      auVar35._12_4_ = 0xffffffff;
      local_138[8] = (float)uStack_70 - (pfVar18[8] + pfVar18[0x14]) * _LC3;
      local_138[9] = (float)uStack_70 - (pfVar18[9] + pfVar18[0x15]) * _UNK_00108164;
      local_138[10] = (float)uStack_70 - (pfVar18[10] + pfVar18[0x16]) * _UNK_00108168;
      local_138[0xb] = (float)uStack_70 - (pfVar18[0xb] + pfVar18[0x17]) * _UNK_0010816c;
      afStack_d4[7] = (pfVar18[0x14] - pfVar18[8]) * _LC3;
      afStack_d4[8] = (pfVar18[0x15] - pfVar18[9]) * _UNK_00108164;
      afStack_d4[9] = (pfVar18[0x16] - pfVar18[10]) * _UNK_00108168;
      afStack_d4[10] = (pfVar18[0x17] - pfVar18[0xb]) * _UNK_0010816c;
      pfVar13 = (float *)&local_108;
      do {
        fVar67 = pfVar13[4];
        fVar68 = *pfVar13;
        auVar54._0_4_ = 0.0 - *(float *)((long)local_138 + lVar15);
        auVar54._4_4_ = 0.0 - *(float *)((long)local_138 + lVar15 + 4);
        auVar54._8_4_ = 0.0 - *(float *)((long)local_138 + lVar15 + 8);
        auVar54._12_4_ = 0.0 - *(float *)((long)local_138 + lVar15 + 0xc);
        auVar23 = maxps(auVar54,*(undefined1 (*) [16])((long)local_138 + lVar15));
        fVar69 = pfVar13[8];
        pfVar12 = (float *)((long)local_d8 + lVar15);
        lVar8 = lVar15 + 4;
        lVar9 = lVar15 + 8;
        lVar10 = lVar15 + 0xc;
        lVar15 = lVar15 + 0x10;
        auVar55._4_4_ =
             -(uint)(auVar23._4_4_ <=
                    fVar67 * fStack_1c4 + fVar68 * local_1c8 + fVar69 * fStack_1c0 +
                    *(float *)(local_d8 + lVar8));
        auVar55._0_4_ =
             -(uint)(auVar23._0_4_ <=
                    fVar67 * fStack_1c4 + fVar68 * local_1c8 + fVar69 * fStack_1c0 + *pfVar12);
        auVar55._8_4_ =
             -(uint)(auVar23._8_4_ <=
                    fVar67 * fStack_1c4 + fVar68 * local_1c8 + fVar69 * fStack_1c0 +
                    *(float *)(local_d8 + lVar9));
        auVar55._12_4_ =
             -(uint)(auVar23._12_4_ <=
                    fVar67 * fStack_1c4 + fVar68 * local_1c8 + fVar69 * fStack_1c0 +
                    *(float *)(local_d8 + lVar10));
        auVar35 = auVar35 & auVar55;
        pfVar12 = (float *)&local_108;
        pfVar14 = local_148;
        pfVar13 = pfVar13 + 1;
        pfVar16 = afStack_d4 + 0xb;
      } while (lVar15 != 0x30);
      do {
        fVar67 = pfVar16[1];
        pfVar13 = pfVar12 + 4;
        fVar68 = *pfVar16;
        fVar69 = *pfVar12;
        fVar70 = pfVar16[2];
        auVar47._0_4_ = fVar67 * local_138[4] + fVar68 * local_138[0] + fVar70 * local_138[8];
        auVar47._4_4_ = fVar67 * local_138[5] + fVar68 * local_138[1] + fVar70 * local_138[9];
        auVar47._8_4_ = fVar67 * local_138[6] + fVar68 * local_138[2] + fVar70 * local_138[10];
        auVar47._12_4_ = fVar67 * local_138[7] + fVar68 * local_138[3] + fVar70 * local_138[0xb];
        auVar56._0_4_ = 0.0 - auVar47._0_4_;
        auVar56._4_4_ = 0.0 - auVar47._4_4_;
        auVar56._8_4_ = 0.0 - auVar47._8_4_;
        auVar56._12_4_ = 0.0 - auVar47._12_4_;
        auVar23 = maxps(auVar56,auVar47);
        fVar67 = pfVar12[1];
        fVar68 = pfVar12[2];
        fVar70 = *pfVar14;
        auVar57._4_4_ =
             -(uint)(auVar23._4_4_ <=
                    fVar67 * afStack_d4[4] + fVar69 * afStack_d4[0] + fVar68 * afStack_d4[8] +
                    fVar70);
        auVar57._0_4_ =
             -(uint)(auVar23._0_4_ <=
                    fVar67 * afStack_d4[3] + fVar69 * (float)local_d8 + fVar68 * afStack_d4[7] +
                    fVar70);
        auVar57._8_4_ =
             -(uint)(auVar23._8_4_ <=
                    fVar67 * afStack_d4[5] + fVar69 * afStack_d4[1] + fVar68 * afStack_d4[9] +
                    fVar70);
        auVar57._12_4_ =
             -(uint)(auVar23._12_4_ <=
                    fVar67 * afStack_d4[6] + fVar69 * afStack_d4[2] + fVar68 * afStack_d4[10] +
                    fVar70);
        auVar35 = auVar35 & auVar57;
        pfVar12 = pfVar13;
        pfVar14 = pfVar14 + 1;
        pfVar16 = pfVar16 + 4;
      } while ((float *)local_d8 != pfVar13);
      auVar48._0_4_ = afStack_d4[0xc] * local_138[8] - afStack_d4[0xd] * local_138[4];
      auVar48._4_4_ = afStack_d4[0xc] * local_138[9] - afStack_d4[0xd] * local_138[5];
      auVar48._8_4_ = afStack_d4[0xc] * local_138[10] - afStack_d4[0xd] * local_138[6];
      auVar48._12_4_ = afStack_d4[0xc] * local_138[0xb] - afStack_d4[0xd] * local_138[7];
      auVar58._4_4_ = 0.0 - auVar48._4_4_;
      auVar58._0_4_ = 0.0 - auVar48._0_4_;
      auVar58._8_4_ = 0.0 - auVar48._8_4_;
      auVar58._12_4_ = 0.0 - auVar48._12_4_;
      auVar59 = maxps(auVar58,auVar48);
      auVar49._0_4_ = fStack_94 * local_138[8] - fStack_90 * local_138[4];
      auVar49._4_4_ = fStack_94 * local_138[9] - fStack_90 * local_138[5];
      auVar49._8_4_ = fStack_94 * local_138[10] - fStack_90 * local_138[6];
      auVar49._12_4_ = fStack_94 * local_138[0xb] - fStack_90 * local_138[7];
      auVar60._4_4_ = 0.0 - auVar49._4_4_;
      auVar60._0_4_ = 0.0 - auVar49._0_4_;
      auVar60._8_4_ = 0.0 - auVar49._8_4_;
      auVar60._12_4_ = 0.0 - auVar49._12_4_;
      auVar61 = maxps(auVar60,auVar49);
      auVar50._0_4_ = fStack_84 * local_138[8] - fStack_80 * local_138[4];
      auVar50._4_4_ = fStack_84 * local_138[9] - fStack_80 * local_138[5];
      auVar50._8_4_ = fStack_84 * local_138[10] - fStack_80 * local_138[6];
      auVar50._12_4_ = fStack_84 * local_138[0xb] - fStack_80 * local_138[7];
      auVar62._4_4_ = 0.0 - auVar50._4_4_;
      auVar62._0_4_ = 0.0 - auVar50._0_4_;
      auVar62._8_4_ = 0.0 - auVar50._8_4_;
      auVar62._12_4_ = 0.0 - auVar50._12_4_;
      auVar28 = maxps(auVar62,auVar50);
      auVar51._0_4_ = afStack_d4[0xd] * local_138[0] - afStack_d4[0xb] * local_138[8];
      auVar51._4_4_ = afStack_d4[0xd] * local_138[1] - afStack_d4[0xb] * local_138[9];
      auVar51._8_4_ = afStack_d4[0xd] * local_138[2] - afStack_d4[0xb] * local_138[10];
      auVar51._12_4_ = afStack_d4[0xd] * local_138[3] - afStack_d4[0xb] * local_138[0xb];
      auVar63._0_4_ = 0.0 - auVar51._0_4_;
      auVar63._4_4_ = 0.0 - auVar51._4_4_;
      auVar63._8_4_ = 0.0 - auVar51._8_4_;
      auVar63._12_4_ = 0.0 - auVar51._12_4_;
      auVar64 = maxps(auVar63,auVar51);
      auVar65._0_4_ = fStack_90 * local_138[0] - local_98 * local_138[8];
      auVar65._4_4_ = fStack_90 * local_138[1] - local_98 * local_138[9];
      auVar65._8_4_ = fStack_90 * local_138[2] - local_98 * local_138[10];
      auVar65._12_4_ = fStack_90 * local_138[3] - local_98 * local_138[0xb];
      auVar52._0_4_ = 0.0 - auVar65._0_4_;
      auVar52._4_4_ = 0.0 - auVar65._4_4_;
      auVar52._8_4_ = 0.0 - auVar65._8_4_;
      auVar52._12_4_ = 0.0 - auVar65._12_4_;
      auVar23 = maxps(auVar52,auVar65);
      fVar67 = fStack_80 * local_138[0] - local_138[8] * local_88;
      fVar68 = fStack_80 * local_138[1] - local_138[9] * local_88;
      fVar69 = fStack_80 * local_138[2] - local_138[10] * local_88;
      fVar70 = fStack_80 * local_138[3] - local_138[0xb] * local_88;
      auVar66._4_4_ = 0.0 - fVar68;
      auVar66._0_4_ = 0.0 - fVar67;
      auVar66._8_4_ = 0.0 - fVar69;
      auVar66._12_4_ = 0.0 - fVar70;
      auVar2._4_4_ = fVar68;
      auVar2._0_4_ = fVar67;
      auVar2._8_4_ = fVar69;
      auVar2._12_4_ = fVar70;
      auVar29 = maxps(auVar66,auVar2);
      auVar53._0_4_ =
           -(uint)(auVar23._0_4_ <=
                   fVar37 * fStack_1c0 + fVar32 * local_1c8 +
                   fVar40 * afStack_d4[7] + fVar43 * (float)local_d8 &&
                  auVar29._0_4_ <=
                  fVar37 * fStack_1c4 + fVar42 * local_1c8 +
                  afStack_d4[7] * fVar31 + (float)local_d8 * fVar33);
      auVar53._4_4_ =
           -(uint)(auVar23._4_4_ <=
                   fVar37 * fStack_1c0 + fVar32 * local_1c8 +
                   fVar40 * afStack_d4[8] + fVar43 * afStack_d4[0] &&
                  auVar29._4_4_ <=
                  fVar37 * fStack_1c4 + fVar42 * local_1c8 +
                  afStack_d4[8] * fVar31 + afStack_d4[0] * fVar33);
      auVar53._8_4_ =
           -(uint)(auVar23._8_4_ <=
                   fVar37 * fStack_1c0 + fVar32 * local_1c8 +
                   fVar40 * afStack_d4[9] + fVar43 * afStack_d4[1] &&
                  auVar29._8_4_ <=
                  fVar37 * fStack_1c4 + fVar42 * local_1c8 +
                  afStack_d4[9] * fVar31 + afStack_d4[1] * fVar33);
      auVar53._12_4_ =
           -(uint)(auVar23._12_4_ <=
                   fVar37 * fStack_1c0 + fVar32 * local_1c8 +
                   fVar40 * afStack_d4[10] + fVar43 * afStack_d4[2] &&
                  auVar29._12_4_ <=
                  fVar37 * fStack_1c4 + fVar42 * local_1c8 +
                  afStack_d4[10] * fVar31 + afStack_d4[2] * fVar33);
      auVar45._0_4_ = afStack_d4[0xb] * local_138[4] - afStack_d4[0xc] * local_138[0];
      auVar45._4_4_ = afStack_d4[0xb] * local_138[5] - afStack_d4[0xc] * local_138[1];
      auVar45._8_4_ = afStack_d4[0xb] * local_138[6] - afStack_d4[0xc] * local_138[2];
      auVar45._12_4_ = afStack_d4[0xb] * local_138[7] - afStack_d4[0xc] * local_138[3];
      auVar26._0_4_ = 0.0 - auVar45._0_4_;
      auVar26._4_4_ = 0.0 - auVar45._4_4_;
      auVar26._8_4_ = 0.0 - auVar45._8_4_;
      auVar26._12_4_ = 0.0 - auVar45._12_4_;
      auVar23 = maxps(auVar26,auVar45);
      fVar67 = local_98 * local_138[4] - fStack_94 * local_138[0];
      fVar68 = local_98 * local_138[5] - fStack_94 * local_138[1];
      fVar69 = local_98 * local_138[6] - fStack_94 * local_138[2];
      fVar70 = local_98 * local_138[7] - fStack_94 * local_138[3];
      auVar41._0_4_ = local_138[4] * local_88 - local_138[0] * fStack_84;
      auVar41._4_4_ = local_138[5] * local_88 - local_138[1] * fStack_84;
      auVar41._8_4_ = local_138[6] * local_88 - local_138[2] * fStack_84;
      auVar41._12_4_ = local_138[7] * local_88 - local_138[3] * fStack_84;
      auVar46._0_4_ = 0.0 - fVar67;
      auVar46._4_4_ = 0.0 - fVar68;
      auVar46._8_4_ = 0.0 - fVar69;
      auVar46._12_4_ = 0.0 - fVar70;
      auVar3._4_4_ = fVar68;
      auVar3._0_4_ = fVar67;
      auVar3._8_4_ = fVar69;
      auVar3._12_4_ = fVar70;
      auVar29 = maxps(auVar46,auVar3);
      auVar30._0_4_ =
           -(uint)(auVar59._0_4_ <=
                   fVar37 * afStack_d4[7] + fVar38 * afStack_d4[3] +
                   fVar40 * fStack_1c0 + fVar31 * fStack_1c4 &&
                  auVar61._0_4_ <=
                  fVar42 * afStack_d4[7] + fVar43 * afStack_d4[3] +
                  fVar36 * fStack_1c0 + fVar31 * local_1c8);
      auVar30._4_4_ =
           -(uint)(auVar59._4_4_ <=
                   fVar37 * afStack_d4[8] + fVar38 * afStack_d4[4] +
                   fVar40 * fStack_1c0 + fVar31 * fStack_1c4 &&
                  auVar61._4_4_ <=
                  fVar42 * afStack_d4[8] + fVar43 * afStack_d4[4] +
                  fVar36 * fStack_1c0 + fVar31 * local_1c8);
      auVar30._8_4_ =
           -(uint)(auVar59._8_4_ <=
                   fVar37 * afStack_d4[9] + fVar38 * afStack_d4[5] +
                   fVar40 * fStack_1c0 + fVar31 * fStack_1c4 &&
                  auVar61._8_4_ <=
                  fVar42 * afStack_d4[9] + fVar43 * afStack_d4[5] +
                  fVar36 * fStack_1c0 + fVar31 * local_1c8);
      auVar30._12_4_ =
           -(uint)(auVar59._12_4_ <=
                   fVar37 * afStack_d4[10] + fVar38 * afStack_d4[6] +
                   fVar40 * fStack_1c0 + fVar31 * fStack_1c4 &&
                  auVar61._12_4_ <=
                  fVar42 * afStack_d4[10] + fVar43 * afStack_d4[6] +
                  fVar36 * fStack_1c0 + fVar31 * local_1c8);
      auVar1._4_4_ = -(uint)(auVar28._4_4_ <=
                             fVar32 * afStack_d4[8] + afStack_d4[4] * fVar33 +
                             fVar36 * fStack_1c4 + fVar40 * local_1c8 &&
                            auVar64._4_4_ <=
                            fVar36 * afStack_d4[8] + fVar38 * afStack_d4[0] +
                            fVar42 * fStack_1c0 + fVar32 * fStack_1c4);
      auVar1._0_4_ = -(uint)(auVar28._0_4_ <=
                             fVar32 * afStack_d4[7] + afStack_d4[3] * fVar33 +
                             fVar36 * fStack_1c4 + fVar40 * local_1c8 &&
                            auVar64._0_4_ <=
                            fVar36 * afStack_d4[7] + fVar38 * (float)local_d8 +
                            fVar42 * fStack_1c0 + fVar32 * fStack_1c4);
      auVar1._8_4_ = -(uint)(auVar28._8_4_ <=
                             fVar32 * afStack_d4[9] + afStack_d4[5] * fVar33 +
                             fVar36 * fStack_1c4 + fVar40 * local_1c8 &&
                            auVar64._8_4_ <=
                            fVar36 * afStack_d4[9] + fVar38 * afStack_d4[1] +
                            fVar42 * fStack_1c0 + fVar32 * fStack_1c4);
      auVar1._12_4_ =
           -(uint)(auVar28._12_4_ <=
                   fVar32 * afStack_d4[10] + afStack_d4[6] * fVar33 +
                   fVar36 * fStack_1c4 + fVar40 * local_1c8 &&
                  auVar64._12_4_ <=
                  fVar36 * afStack_d4[10] + fVar38 * afStack_d4[2] +
                  fVar42 * fStack_1c0 + fVar32 * fStack_1c4);
      auVar24._0_4_ = 0.0 - auVar41._0_4_;
      auVar24._4_4_ = 0.0 - auVar41._4_4_;
      auVar24._8_4_ = 0.0 - auVar41._8_4_;
      auVar24._12_4_ = 0.0 - auVar41._12_4_;
      auVar27._0_4_ =
           -(uint)(auVar23._0_4_ <=
                   fVar43 * fStack_1c0 + fStack_1c4 * fVar33 +
                   fVar36 * afStack_d4[3] + fVar37 * (float)local_d8 &&
                  auVar29._0_4_ <=
                  fStack_1c0 * fVar38 + local_1c8 * fVar33 +
                  fVar40 * afStack_d4[3] + fVar42 * (float)local_d8);
      auVar27._4_4_ =
           -(uint)(auVar23._4_4_ <=
                   fVar43 * fStack_1c0 + fStack_1c4 * fVar33 +
                   fVar36 * afStack_d4[4] + fVar37 * afStack_d4[0] &&
                  auVar29._4_4_ <=
                  fStack_1c0 * fVar38 + local_1c8 * fVar33 +
                  fVar40 * afStack_d4[4] + fVar42 * afStack_d4[0]);
      auVar27._8_4_ =
           -(uint)(auVar23._8_4_ <=
                   fVar43 * fStack_1c0 + fStack_1c4 * fVar33 +
                   fVar36 * afStack_d4[5] + fVar37 * afStack_d4[1] &&
                  auVar29._8_4_ <=
                  fStack_1c0 * fVar38 + local_1c8 * fVar33 +
                  fVar40 * afStack_d4[5] + fVar42 * afStack_d4[1]);
      auVar27._12_4_ =
           -(uint)(auVar23._12_4_ <=
                   fVar43 * fStack_1c0 + fStack_1c4 * fVar33 +
                   fVar36 * afStack_d4[6] + fVar37 * afStack_d4[2] &&
                  auVar29._12_4_ <=
                  fStack_1c0 * fVar38 + local_1c8 * fVar33 +
                  fVar40 * afStack_d4[6] + fVar42 * afStack_d4[2]);
      auVar23 = maxps(auVar24,auVar41);
      auVar25._4_4_ =
           -(uint)(auVar23._4_4_ <=
                  fStack_1c4 * fVar38 + local_1c8 * fVar43 +
                  afStack_d4[0] * fVar32 + afStack_d4[4] * fVar31);
      auVar25._0_4_ =
           -(uint)(auVar23._0_4_ <=
                  fStack_1c4 * fVar38 + local_1c8 * fVar43 +
                  (float)local_d8 * fVar32 + afStack_d4[3] * fVar31);
      auVar25._8_4_ =
           -(uint)(auVar23._8_4_ <=
                  fStack_1c4 * fVar38 + local_1c8 * fVar43 +
                  afStack_d4[1] * fVar32 + afStack_d4[5] * fVar31);
      auVar25._12_4_ =
           -(uint)(auVar23._12_4_ <=
                  fStack_1c4 * fVar38 + local_1c8 * fVar43 +
                  afStack_d4[2] * fVar32 + afStack_d4[6] * fVar31);
      _local_d8 = auVar30 & auVar1 & auVar35 & auVar53 & auVar27 & auVar25;
      iVar11 = movmskps((int)pfVar13,_local_d8);
      if (iVar11 != 0) {
        uVar4 = iVar21 - iVar19;
        if (4 < (uint)(iVar21 - iVar19)) {
          uVar4 = 4;
        }
        if (iVar21 != iVar19) {
          lVar15 = 0;
          puVar17 = param_2;
          do {
            param_2 = puVar17;
            if (*(float *)((long)local_d8 + lVar15 * 4) != 0.0) {
              param_2 = puVar17 + 1;
              iVar20 = iVar20 + 1;
              *puVar17 = iVar19 + (int)lVar15;
              bVar7 = true;
              if (param_3 <= iVar20) break;
            }
            lVar15 = lVar15 + 1;
            puVar17 = param_2;
          } while ((uint)lVar15 < uVar4);
        }
      }
      iVar19 = iVar19 + 4;
      pfVar18 = pfVar18 + 0x18;
    } while (uVar22 << 2 != iVar19);
    if (!bVar7) {
      iVar20 = 0;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
    local_78 = uVar5;
    uStack_70 = uVar6;
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar20;
}



/* JPH::MutableCompoundShape::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::MutableCompoundShape::SaveBinaryState(MutableCompoundShape *this,StreamOut *param_1)

{
  JPH::CompoundShape::SaveBinaryState((StreamOut *)this);
                    /* WARNING: Could not recover jumptable at 0x00100b2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))
            (param_1,*(undefined8 *)(this + 0x80),(*(int *)(this + 0x50) + 3U >> 2) * 0x60);
  return;
}



/* _FUN() */

void JPH::MutableCompoundShape::sRegister()::{lambda()#1}::_FUN(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*Allocate)(0x90);
  *(undefined1 (*) [16])(puVar2 + 4) = (undefined1  [16])0x0;
  uVar1 = _LC6;
  *(undefined2 *)(puVar2 + 3) = 0x801;
  *(undefined4 *)(puVar2 + 6) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x34) = uVar1;
  *(undefined4 *)(puVar2 + 7) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x3c) = uVar1;
  uVar1 = _LC8;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)(puVar2 + 8) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x44) = uVar1;
  *(undefined4 *)(puVar2 + 9) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x4c) = uVar1;
  puVar2[2] = 0;
  puVar2[0xc] = 0;
  *(undefined4 *)(puVar2 + 0xd) = 0x7f7fffff;
  *puVar2 = &PTR__MutableCompoundShape_00107fe0;
  puVar2[0x10] = 0;
  *(undefined1 (*) [16])(puVar2 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 0xe) = (undefined1  [16])0x0;
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::MutableCompoundShapeSettings*)::{lambda()#1}::_FUN(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*Allocate)(0x58);
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  puVar1[10] = 0;
  *puVar1 = &PTR_GetRTTI_00107fa8;
  *(undefined1 (*) [16])(puVar1 + 8) = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void std::__cxx11::basic_string<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::_M_construct<char*>(char*, char*, std::forward_iterator_tag) [clone .isra.0] */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_construct<char*>
          (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *this,float *param_1,
          long param_2,long param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  int iVar27;
  undefined1 *__dest;
  float *pfVar28;
  ulong __n;
  uint *extraout_RDX;
  long lVar29;
  float *pfVar30;
  char *pcVar31;
  uint uVar32;
  long lVar33;
  long in_FS_OFFSET;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  undefined1 auVar41 [12];
  uint uVar38;
  float fVar39;
  float fVar40;
  uint uVar47;
  float fVar48;
  float fVar50;
  float fVar51;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar49;
  uint uVar52;
  undefined1 auVar44 [16];
  uint uVar53;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar54;
  float fVar60;
  float fVar61;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar62;
  int iVar66;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar67;
  float fVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar74;
  undefined1 auVar75 [16];
  uint uVar76;
  uint uVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  undefined1 auVar81 [16];
  uint uVar85;
  uint uVar86;
  uint uVar87;
  uint uVar88;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  uint uVar93;
  uint uVar94;
  uint uVar95;
  uint uVar96;
  uint uVar97;
  uint uVar98;
  undefined1 auVar89 [16];
  uint uVar99;
  float fVar100;
  uint uVar101;
  float fVar102;
  uint uVar103;
  float fVar104;
  uint uVar105;
  float fVar106;
  uint uVar107;
  uint uVar111;
  uint uVar112;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  uint uVar113;
  undefined1 auVar110 [16];
  float fVar114;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  float fVar118;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  float fVar121;
  float fVar122;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  uint uStack_180;
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  byte bStack_b0;
  uint uStack_98;
  int iStack_94;
  float afStack_90 [4];
  undefined1 auStack_80 [16];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  long lStack_58;
  ulong uStack_48;
  basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *pbStack_40;
  float *pfStack_38;
  undefined1 auVar55 [12];
  
  __n = param_2 - (long)param_1;
  if (__n < 0x10) {
    __dest = *(undefined1 **)this;
    if (__n == 1) {
      *__dest = *(undefined1 *)param_1;
      *(undefined8 *)(this + 8) = 1;
      *(undefined1 *)(*(long *)this + 1) = 0;
      return;
    }
    if (__n == 0) {
      *(undefined8 *)(this + 8) = 0;
      *__dest = 0;
      return;
    }
  }
  else {
    if ((long)__n < 0) {
      pcVar31 = "basic_string::_M_create";
      pfVar30 = param_1;
      std::__throw_length_error("basic_string::_M_create");
      pfStack_38 = param_1;
      pbStack_40 = this;
      uStack_48 = __n;
      uVar2 = *extraout_RDX;
      lStack_58 = *(long *)(in_FS_OFFSET + 0x28);
      uVar3 = extraout_RDX[1];
      uVar32 = (int)*(undefined8 *)(pcVar31 + 0x50) - 1;
      if (uVar32 == 0) {
        auVar57 = *(undefined1 (*) [16])(pfVar30 + 4);
        uVar32 = 1;
        auVar43._0_4_ = 0.0 - auVar57._0_4_;
        auVar43._4_4_ = 0.0 - auVar57._4_4_;
        auVar43._8_4_ = 0.0 - auVar57._8_4_;
        auVar43._12_4_ = 0.0 - auVar57._12_4_;
        auVar43 = maxps(auVar43,auVar57);
        iVar35 = -(uint)(auVar43._0_4_ <= _LC15);
        iVar34 = -(uint)(auVar43._4_4_ <= _LC15);
        iVar36 = -(uint)(auVar43._8_4_ <= _LC15);
        auVar41._4_4_ = iVar34;
        auVar41._0_4_ = iVar35;
        auVar41._8_4_ = iVar36;
        uVar38 = iVar35 >> 0x1f;
        uVar47 = iVar34 >> 0x1f;
        uVar49 = iVar36 >> 0x1f;
        uVar52 = (int)-(uint)(auVar43._12_4_ <= _LC15) >> 0x1f;
        auVar126._0_4_ = ~uVar38 & (uint)auVar57._0_4_;
        auVar126._4_4_ = ~uVar47 & (uint)auVar57._4_4_;
        auVar126._8_4_ = ~uVar49 & (uint)auVar57._8_4_;
        auVar126._12_4_ = ~uVar52 & (uint)auVar57._12_4_;
        auVar71._4_4_ = _LC17;
        auVar71._0_4_ = _LC17;
        auVar71._8_4_ = _LC17;
        auVar71._12_4_ = _LC17;
        auVar57._0_4_ = uVar38 & (uint)_LC17;
        auVar57._4_4_ = uVar47 & (uint)_LC17;
        auVar57._8_4_ = uVar49 & (uint)_LC17;
        auVar57._12_4_ = uVar52 & (uint)_LC17;
        auVar57 = divps(auVar71,auVar57 | auVar126);
        auVar55 = auVar57._0_12_;
        iVar35 = 0;
      }
      else {
        auVar57 = *(undefined1 (*) [16])(pfVar30 + 4);
        iVar35 = 0x1f;
        if (uVar32 != 0) {
          for (; uVar32 >> iVar35 == 0; iVar35 = iVar35 + -1) {
          }
        }
        iVar35 = iVar35 + 1;
        auVar42._0_4_ = 0.0 - auVar57._0_4_;
        auVar42._4_4_ = 0.0 - auVar57._4_4_;
        auVar42._8_4_ = 0.0 - auVar57._8_4_;
        auVar42._12_4_ = 0.0 - auVar57._12_4_;
        uVar32 = (int)*(undefined8 *)(pcVar31 + 0x50) + 3U >> 2;
        auVar43 = maxps(auVar42,auVar57);
        iVar34 = -(uint)(auVar43._0_4_ <= _LC15);
        iVar36 = -(uint)(auVar43._4_4_ <= _LC15);
        iVar37 = -(uint)(auVar43._8_4_ <= _LC15);
        auVar41._4_4_ = iVar36;
        auVar41._0_4_ = iVar34;
        auVar41._8_4_ = iVar37;
        uVar38 = iVar34 >> 0x1f;
        uVar47 = iVar36 >> 0x1f;
        uVar49 = iVar37 >> 0x1f;
        uVar52 = (int)-(uint)(auVar43._12_4_ <= _LC15) >> 0x1f;
        auVar69._0_4_ = ~uVar38 & (uint)auVar57._0_4_;
        auVar69._4_4_ = ~uVar47 & (uint)auVar57._4_4_;
        auVar69._8_4_ = ~uVar49 & (uint)auVar57._8_4_;
        auVar69._12_4_ = ~uVar52 & (uint)auVar57._12_4_;
        auVar56._4_4_ = _LC17;
        auVar56._0_4_ = _LC17;
        auVar56._8_4_ = _LC17;
        auVar56._12_4_ = _LC17;
        auVar44._0_4_ = uVar38 & (uint)_LC17;
        auVar44._4_4_ = uVar47 & (uint)_LC17;
        auVar44._8_4_ = uVar49 & (uint)_LC17;
        auVar44._12_4_ = uVar52 & (uint)_LC17;
        auVar57 = divps(auVar56,auVar44 | auVar69);
        auVar55 = auVar57._0_12_;
        if (uVar32 == 0) {
LAB_001013e3:
          if (lStack_58 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
      iVar36 = auVar41._0_4_;
      iVar37 = auVar41._4_4_;
      iVar66 = auVar41._8_4_;
      iVar34 = 0;
      lVar33 = 0;
      uVar85 = iVar36 >> 0x1f;
      bStack_b0 = (byte)uVar3;
      uVar76 = _LC8 & uVar85;
      uVar82 = _LC8 & uVar85;
      uVar83 = _LC8 & uVar85;
      uVar84 = _LC8 & uVar85;
      uVar86 = uVar85 & _LC6;
      uVar90 = uVar85 & _UNK_00108174;
      uVar93 = uVar85 & _UNK_00108178;
      uVar96 = uVar85 & _UNK_0010817c;
      uVar77 = iVar37 >> 0x1f;
      uVar38 = _LC8 & uVar77;
      uVar49 = _LC8 & uVar77;
      uVar52 = _LC8 & uVar77;
      uVar53 = _LC8 & uVar77;
      uVar87 = _LC6 & uVar77;
      uVar91 = _UNK_00108174 & uVar77;
      uVar94 = _UNK_00108178 & uVar77;
      uVar97 = _UNK_0010817c & uVar77;
      uVar47 = iVar66 >> 0x1f;
      uVar99 = _LC8 & uVar47;
      uVar101 = _LC8 & uVar47;
      uVar103 = _LC8 & uVar47;
      uVar105 = _LC8 & uVar47;
      uVar88 = _LC6 & uVar47;
      uVar92 = _UNK_00108174 & uVar47;
      uVar95 = _UNK_00108178 & uVar47;
      uVar98 = _UNK_0010817c & uVar47;
      fVar54 = auVar55._0_4_;
      fVar60 = auVar55._4_4_;
      fVar61 = auVar55._8_4_;
LAB_00100e81:
      do {
        fVar50 = *pfVar30;
        fVar7 = pfVar30[1];
        fVar8 = pfVar30[2];
        pfVar28 = (float *)(*(long *)(pcVar31 + 0x80) + lVar33);
        fVar40 = *pfVar28;
        fVar39 = pfVar28[1];
        fVar79 = pfVar28[2];
        fVar78 = pfVar28[3];
        fVar48 = pfVar28[0xc];
        fVar67 = pfVar28[0xd];
        fVar114 = pfVar28[0xe];
        fVar51 = pfVar28[0xf];
        fVar118 = pfVar28[4];
        fVar62 = pfVar28[5];
        fVar68 = pfVar28[6];
        fVar74 = pfVar28[7];
        fVar80 = pfVar28[0x10];
        fVar121 = pfVar28[0x11];
        fVar122 = pfVar28[0x12];
        fVar9 = pfVar28[0x13];
        fVar10 = pfVar28[0x14];
        fVar11 = pfVar28[0x15];
        fVar12 = pfVar28[0x16];
        fVar13 = pfVar28[0x17];
        fVar14 = pfVar28[8];
        fVar15 = pfVar28[9];
        fVar16 = pfVar28[10];
        fVar17 = pfVar28[0xb];
        auVar70._0_8_ = CONCAT44((fVar39 - fVar50) * fVar54,(fVar40 - fVar50) * fVar54);
        auVar70._8_4_ = (fVar79 - fVar50) * fVar54;
        auVar70._12_4_ = (fVar78 - fVar50) * fVar54;
        auVar115._0_4_ = (fVar48 - fVar50) * fVar54;
        auVar115._4_4_ = (fVar67 - fVar50) * fVar54;
        auVar115._8_4_ = (fVar114 - fVar50) * fVar54;
        auVar115._12_4_ = (fVar51 - fVar50) * fVar54;
        auVar63._0_8_ = CONCAT44((fVar62 - fVar7) * fVar60,(fVar118 - fVar7) * fVar60);
        auVar63._8_4_ = (fVar68 - fVar7) * fVar60;
        auVar63._12_4_ = (fVar74 - fVar7) * fVar60;
        auVar108._0_4_ = (fVar80 - fVar7) * fVar60;
        auVar108._4_4_ = (fVar121 - fVar7) * fVar60;
        auVar108._8_4_ = (fVar122 - fVar7) * fVar60;
        auVar108._12_4_ = (fVar9 - fVar7) * fVar60;
        auVar58._0_8_ = CONCAT44((fVar15 - fVar8) * fVar61,(fVar14 - fVar8) * fVar61);
        auVar58._8_4_ = (fVar16 - fVar8) * fVar61;
        auVar58._12_4_ = (fVar17 - fVar8) * fVar61;
        auVar45._8_4_ = auVar70._8_4_;
        auVar45._0_8_ = auVar70._0_8_;
        auVar45._12_4_ = auVar70._12_4_;
        auVar57 = minps(auVar45,auVar115);
        auVar71 = maxps(auVar70,auVar115);
        fVar100 = (fVar10 - fVar8) * fVar61;
        fVar102 = (fVar11 - fVar8) * fVar61;
        fVar104 = (fVar12 - fVar8) * fVar61;
        fVar106 = (fVar13 - fVar8) * fVar61;
        auVar125._8_4_ = auVar63._8_4_;
        auVar125._0_8_ = auVar63._0_8_;
        auVar125._12_4_ = auVar63._12_4_;
        auVar126 = minps(auVar125,auVar108);
        auVar43 = maxps(auVar63,auVar108);
        auVar116._0_4_ = ~uVar85 & auVar71._0_4_;
        auVar116._4_4_ = ~uVar85 & auVar71._4_4_;
        auVar116._8_4_ = ~uVar85 & auVar71._8_4_;
        auVar116._12_4_ = ~uVar85 & auVar71._12_4_;
        auVar21._4_4_ = uVar90;
        auVar21._0_4_ = uVar86;
        auVar21._8_4_ = uVar93;
        auVar21._12_4_ = uVar96;
        auVar46._0_4_ = ~uVar85 & auVar57._0_4_;
        auVar46._4_4_ = ~uVar85 & auVar57._4_4_;
        auVar46._8_4_ = ~uVar85 & auVar57._8_4_;
        auVar46._12_4_ = ~uVar85 & auVar57._12_4_;
        auVar72._0_4_ = ~uVar77 & auVar43._0_4_;
        auVar72._4_4_ = ~uVar77 & auVar43._4_4_;
        auVar72._8_4_ = ~uVar77 & auVar43._8_4_;
        auVar72._12_4_ = ~uVar77 & auVar43._12_4_;
        auVar22._4_4_ = uVar91;
        auVar22._0_4_ = uVar87;
        auVar22._8_4_ = uVar94;
        auVar22._12_4_ = uVar97;
        auVar127._0_4_ = ~uVar77 & auVar126._0_4_;
        auVar127._4_4_ = ~uVar77 & auVar126._4_4_;
        auVar127._8_4_ = ~uVar77 & auVar126._8_4_;
        auVar127._12_4_ = ~uVar77 & auVar126._12_4_;
        auVar123._8_4_ = auVar58._8_4_;
        auVar123._0_8_ = auVar58._0_8_;
        auVar123._12_4_ = auVar58._12_4_;
        auVar4._4_4_ = fVar102;
        auVar4._0_4_ = fVar100;
        auVar4._8_4_ = fVar104;
        auVar4._12_4_ = fVar106;
        auVar57 = maxps(auVar58,auVar4);
        auVar5._4_4_ = fVar102;
        auVar5._0_4_ = fVar100;
        auVar5._8_4_ = fVar104;
        auVar5._12_4_ = fVar106;
        auVar71 = minps(auVar123,auVar5);
        auVar43 = minps(auVar116 | auVar21,auVar72 | auVar22);
        auVar18._4_4_ = uVar82;
        auVar18._0_4_ = uVar76;
        auVar18._8_4_ = uVar83;
        auVar18._12_4_ = uVar84;
        auVar19._4_4_ = uVar49;
        auVar19._0_4_ = uVar38;
        auVar19._8_4_ = uVar52;
        auVar19._12_4_ = uVar53;
        auVar75._4_4_ = -(uint)(fVar11 < fVar8);
        auVar75._0_4_ = -(uint)(fVar10 < fVar8);
        auVar75._8_4_ = -(uint)(fVar12 < fVar8);
        auVar75._12_4_ = -(uint)(fVar13 < fVar8);
        auVar81._4_4_ = -(uint)(fVar121 < fVar7);
        auVar81._0_4_ = -(uint)(fVar80 < fVar7);
        auVar81._8_4_ = -(uint)(fVar122 < fVar7);
        auVar81._12_4_ = -(uint)(fVar9 < fVar7);
        auVar64._0_4_ = ~uVar47 & auVar57._0_4_;
        auVar64._4_4_ = ~uVar47 & auVar57._4_4_;
        auVar64._8_4_ = ~uVar47 & auVar57._8_4_;
        auVar64._12_4_ = ~uVar47 & auVar57._12_4_;
        auVar23._4_4_ = uVar92;
        auVar23._0_4_ = uVar88;
        auVar23._8_4_ = uVar95;
        auVar23._12_4_ = uVar98;
        auVar57 = maxps(auVar46 | auVar18,auVar127 | auVar19);
        uStack_180 = auVar71._0_4_;
        uStack_17c = auVar71._4_4_;
        uStack_178 = auVar71._8_4_;
        uStack_174 = auVar71._12_4_;
        auVar124._0_4_ = ~uVar47 & uStack_180;
        auVar124._4_4_ = ~uVar47 & uStack_17c;
        auVar124._8_4_ = ~uVar47 & uStack_178;
        auVar124._12_4_ = ~uVar47 & uStack_174;
        auVar120._4_4_ = -(uint)(fVar7 < fVar62);
        auVar120._0_4_ = -(uint)(fVar7 < fVar118);
        auVar120._8_4_ = -(uint)(fVar7 < fVar68);
        auVar120._12_4_ = -(uint)(fVar7 < fVar74);
        auVar43 = minps(auVar43,auVar64 | auVar23);
        auVar20._4_4_ = uVar101;
        auVar20._0_4_ = uVar99;
        auVar20._8_4_ = uVar103;
        auVar20._12_4_ = uVar105;
        auVar57 = maxps(auVar57,auVar124 | auVar20);
        auVar25._4_4_ = iVar37;
        auVar25._0_4_ = iVar37;
        auVar25._8_4_ = iVar37;
        auVar25._12_4_ = iVar37;
        auVar117._4_4_ = -(uint)(auVar43._4_4_ < 0.0);
        auVar117._0_4_ = -(uint)(auVar43._0_4_ < 0.0);
        auVar117._8_4_ = -(uint)(auVar43._8_4_ < 0.0);
        auVar117._12_4_ = -(uint)(auVar43._12_4_ < 0.0);
        auVar89._4_4_ = -(uint)(fVar67 < fVar50);
        auVar89._0_4_ = -(uint)(fVar48 < fVar50);
        auVar89._8_4_ = -(uint)(fVar114 < fVar50);
        auVar89._12_4_ = -(uint)(fVar51 < fVar50);
        auVar119._4_4_ = -(uint)(fVar8 < fVar15);
        auVar119._0_4_ = -(uint)(fVar8 < fVar14);
        auVar65._4_4_ = -(uint)(auVar43._4_4_ < auVar57._4_4_);
        auVar65._0_4_ = -(uint)(auVar43._0_4_ < auVar57._0_4_);
        auVar65._8_4_ = -(uint)(auVar43._8_4_ < auVar57._8_4_);
        auVar65._12_4_ = -(uint)(auVar43._12_4_ < auVar57._12_4_);
        auVar59._4_4_ = -(uint)(fVar67 < fVar39);
        auVar59._0_4_ = -(uint)(fVar48 < fVar40);
        auVar59._8_4_ = -(uint)(fVar114 < fVar79);
        auVar59._12_4_ = -(uint)(fVar51 < fVar78);
        auVar73._4_4_ = -(uint)(fVar11 < fVar15);
        auVar73._0_4_ = -(uint)(fVar10 < fVar14);
        auVar73._8_4_ = -(uint)(fVar12 < fVar16);
        auVar73._12_4_ = -(uint)(fVar13 < fVar17);
        auVar109._4_4_ = -(uint)(fVar50 < fVar39);
        auVar109._0_4_ = -(uint)(fVar50 < fVar40);
        auVar109._8_4_ = -(uint)(fVar50 < fVar79);
        auVar109._12_4_ = -(uint)(fVar50 < fVar78);
        auVar119._8_4_ = -(uint)(fVar8 < fVar16);
        auVar119._12_4_ = -(uint)(fVar8 < fVar17);
        auVar24._4_4_ = iVar36;
        auVar24._0_4_ = iVar36;
        auVar24._8_4_ = iVar36;
        auVar24._12_4_ = iVar36;
        auVar6._4_4_ = -(uint)(fVar121 < fVar62);
        auVar6._0_4_ = -(uint)(fVar80 < fVar118);
        auVar6._8_4_ = -(uint)(fVar122 < fVar68);
        auVar6._12_4_ = -(uint)(fVar9 < fVar74);
        auVar26._4_4_ = iVar66;
        auVar26._0_4_ = iVar66;
        auVar26._8_4_ = iVar66;
        auVar26._12_4_ = iVar66;
        auVar43 = (auVar109 | auVar89) & auVar24 | (auVar120 | auVar81) & auVar25 |
                  auVar59 | auVar6 | auVar65 | auVar117 | (auVar119 | auVar75) & auVar26 | auVar73;
        uVar107 = auVar43._0_4_ >> 0x1f;
        uVar111 = auVar43._4_4_ >> 0x1f;
        uVar112 = auVar43._8_4_ >> 0x1f;
        uVar113 = auVar43._12_4_ >> 0x1f;
        afStack_90[0] = (float)(uVar107 & _LC6 | ~uVar107 & (uint)auVar57._0_4_);
        afStack_90[1] = (float)(uVar111 & _UNK_00108174 | ~uVar111 & (uint)auVar57._4_4_);
        afStack_90[2] = (float)(uVar112 & _UNK_00108178 | ~uVar112 & (uint)auVar57._8_4_);
        afStack_90[3] = (float)(uVar113 & _UNK_0010817c | ~uVar113 & (uint)auVar57._12_4_);
        fVar50 = *(float *)(param_4 + 4);
        auVar110._4_4_ = -(uint)(afStack_90[1] < fVar50);
        auVar110._0_4_ = -(uint)(afStack_90[0] < fVar50);
        auVar110._8_4_ = -(uint)(afStack_90[2] < fVar50);
        auVar110._12_4_ = -(uint)(afStack_90[3] < fVar50);
        iVar27 = movmskps((int)pfVar28,auVar110);
        if (iVar27 != 0) {
          uVar107 = (int)*(undefined8 *)(pcVar31 + 0x50) - iVar34;
          if (4 < uVar107) {
            uVar107 = 4;
          }
          if (iVar34 != (int)*(undefined8 *)(pcVar31 + 0x50)) {
            lVar29 = 0;
            do {
              if (afStack_90[lVar29] <= fVar50 && fVar50 != afStack_90[lVar29]) {
                uVar111 = iVar34 + (int)lVar29;
                puVar1 = (undefined8 *)(*(long *)(pcVar31 + 0x60) + (ulong)uVar111 * 0x28);
                fVar7 = *(float *)(puVar1 + 1);
                fVar8 = *(float *)((long)puVar1 + 0xc);
                fVar40 = *(float *)(puVar1 + 2);
                uStack_98 = uVar111 << (bStack_b0 & 0x1f) |
                            ~((int)(1L << ((byte)iVar35 & 0x3f)) + -1 << (bStack_b0 & 0x1f)) & uVar2
                ;
                iStack_94 = iVar35 + uVar3;
                fVar39 = __LC13;
                uVar111 = _UNK_00108194;
                fVar50 = _UNK_00108198;
                fVar79 = _LC17;
                if (*(char *)((long)puVar1 + 0x24) == '\0') {
                  fVar79 = *(float *)((long)puVar1 + 0x14);
                  fVar39 = *(float *)((long)puVar1 + 0x14);
                  uVar111 = *(uint *)(puVar1 + 3);
                  fVar50 = *(float *)((long)puVar1 + 0x1c);
                  fVar78 = _LC17 - (fVar50 * fVar50 +
                                   *(float *)(puVar1 + 3) * *(float *)(puVar1 + 3) +
                                   fVar79 * fVar79 + 0.0);
                  fVar79 = 0.0;
                  if (0.0 <= fVar78) {
                    fVar79 = SQRT(fVar78);
                  }
                }
                fVar39 = (float)((uint)fVar39 ^ _LC23);
                fVar48 = (float)(uVar111 ^ _UNK_001081a4);
                fVar50 = (float)((uint)fVar50 ^ _UNK_001081a8);
                fVar79 = (float)((uint)fVar79 ^ _UNK_001081ac);
                fVar67 = fVar39 + fVar39;
                fVar114 = fVar48 + fVar48;
                fVar118 = (fVar50 + fVar50) * fVar50;
                fVar78 = fVar79 * (fVar50 + fVar50);
                fVar74 = fVar67 * fVar50 + fVar114 * fVar79;
                fVar121 = fVar50 * fVar114 - fVar67 * fVar79;
                fVar80 = (_LC17 - fVar39 * fVar67) - fVar114 * fVar48;
                fVar68 = fVar67 * fVar79 + fVar50 * fVar114;
                fVar62 = fVar48 * fVar67 + fVar78;
                fVar78 = fVar48 * fVar67 - fVar78;
                fVar122 = (_LC17 - fVar118) - fVar39 * fVar67;
                fVar118 = (_LC17 - fVar114 * fVar48) - fVar118;
                fVar39 = fVar67 * fVar50 - fVar114 * fVar79;
                fVar79 = 0.0 - (fVar7 * fVar118 + fVar8 * fVar78 + fVar40 * fVar74);
                fVar48 = 0.0 - (fVar7 * fVar62 + fVar8 * fVar122 + fVar40 * fVar121);
                fVar114 = 0.0 - (fVar7 * fVar39 + fVar8 * fVar68 + fVar40 * fVar80);
                fVar50 = *pfVar30;
                fVar7 = pfVar30[1];
                fVar8 = pfVar30[2];
                fVar40 = fVar50 + pfVar30[4];
                fVar67 = fVar7 + pfVar30[5];
                fVar51 = fVar8 + pfVar30[6];
                auStack_80._0_4_ = fVar50 * fVar118 + fVar7 * fVar78 + fVar8 * fVar74 + fVar79;
                auStack_80._4_4_ = fVar50 * fVar62 + fVar7 * fVar122 + fVar8 * fVar121 + fVar48;
                auStack_80._8_4_ = fVar50 * fVar39 + fVar7 * fVar68 + fVar8 * fVar80 + fVar114;
                auStack_80._12_4_ = fVar50 * 0.0 + fVar7 * 0.0 + fVar8 * 0.0 + 1.0;
                fStack_70 = (fVar51 * fVar74 + fVar118 * fVar40 + fVar67 * fVar78 + fVar79) -
                            auStack_80._0_4_;
                fStack_6c = (fVar51 * fVar121 + fVar62 * fVar40 + fVar67 * fVar122 + fVar48) -
                            auStack_80._4_4_;
                fStack_68 = (fVar51 * fVar80 + fVar39 * fVar40 + fVar67 * fVar68 + fVar114) -
                            auStack_80._8_4_;
                fStack_64 = (fVar51 * 0.0 + fVar40 * 0.0 + fVar67 * 0.0 + 1.0) - auStack_80._12_4_;
                (**(code **)(*(long *)*puVar1 + 0x98))
                          ((long *)*puVar1,auStack_80,&uStack_98,param_4);
                if (*(float *)(param_4 + 4) <= 0.0) goto LAB_001013b0;
              }
              lVar29 = lVar29 + 1;
              if (uVar107 <= (uint)lVar29) goto LAB_001013b0;
              fVar50 = *(float *)(param_4 + 4);
            } while( true );
          }
        }
        iVar34 = iVar34 + 4;
        lVar33 = lVar33 + 0x60;
      } while (iVar34 != uVar32 << 2);
      goto LAB_001013e3;
    }
    __dest = (undefined1 *)(*JPH::Allocate)(__n + 1);
    *(ulong *)(this + 0x10) = __n;
    *(undefined1 **)this = __dest;
  }
  memcpy(__dest,param_1,__n);
  *(ulong *)(this + 8) = __n;
  *(undefined1 *)(*(long *)this + __n) = 0;
  return;
LAB_001013b0:
  iVar34 = iVar34 + 4;
  lVar33 = lVar33 + 0x60;
  if (iVar34 == uVar32 << 2) goto LAB_001013e3;
  goto LAB_00100e81;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MutableCompoundShape::CastRay(JPH::RayCast const&, JPH::SubShapeIDCreator const&,
   JPH::RayCastResult&) const */

undefined4 __thiscall
JPH::MutableCompoundShape::CastRay
          (MutableCompoundShape *this,RayCast *param_1,SubShapeIDCreator *param_2,
          RayCastResult *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  char cVar27;
  int iVar28;
  float *pfVar29;
  long lVar30;
  undefined4 uVar31;
  uint uVar32;
  long lVar33;
  long in_FS_OFFSET;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  undefined1 auVar41 [12];
  uint uVar38;
  float fVar39;
  float fVar40;
  uint uVar47;
  float fVar48;
  float fVar50;
  float fVar51;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar49;
  uint uVar52;
  undefined1 auVar44 [16];
  uint uVar53;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar54;
  float fVar60;
  float fVar61;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar62;
  int iVar66;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar67;
  float fVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar74;
  undefined1 auVar75 [16];
  uint uVar76;
  uint uVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  undefined1 auVar81 [16];
  uint uVar85;
  uint uVar86;
  uint uVar87;
  uint uVar88;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  uint uVar93;
  uint uVar94;
  uint uVar95;
  uint uVar96;
  uint uVar97;
  uint uVar98;
  undefined1 auVar89 [16];
  uint uVar99;
  float fVar100;
  uint uVar101;
  float fVar102;
  uint uVar103;
  float fVar104;
  uint uVar105;
  float fVar106;
  uint uVar107;
  uint uVar111;
  uint uVar112;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  uint uVar113;
  undefined1 auVar110 [16];
  float fVar114;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  float fVar118;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  float fVar121;
  float fVar122;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  byte local_98;
  uint uStack_80;
  int iStack_7c;
  float afStack_78 [4];
  undefined1 auStack_68 [16];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  long local_40;
  undefined1 auVar55 [12];
  
  uVar2 = *(uint *)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = *(int *)(param_2 + 4);
  uVar32 = (int)*(undefined8 *)(this + 0x50) - 1;
  if (uVar32 == 0) {
    auVar57 = *(undefined1 (*) [16])(param_1 + 0x10);
    uVar32 = 1;
    auVar43._0_4_ = 0.0 - auVar57._0_4_;
    auVar43._4_4_ = 0.0 - auVar57._4_4_;
    auVar43._8_4_ = 0.0 - auVar57._8_4_;
    auVar43._12_4_ = 0.0 - auVar57._12_4_;
    auVar43 = maxps(auVar43,auVar57);
    iVar35 = -(uint)(auVar43._0_4_ <= _LC15);
    iVar34 = -(uint)(auVar43._4_4_ <= _LC15);
    iVar36 = -(uint)(auVar43._8_4_ <= _LC15);
    auVar41._4_4_ = iVar34;
    auVar41._0_4_ = iVar35;
    auVar41._8_4_ = iVar36;
    uVar38 = iVar35 >> 0x1f;
    uVar47 = iVar34 >> 0x1f;
    uVar49 = iVar36 >> 0x1f;
    uVar52 = (int)-(uint)(auVar43._12_4_ <= _LC15) >> 0x1f;
    auVar126._0_4_ = ~uVar38 & (uint)auVar57._0_4_;
    auVar126._4_4_ = ~uVar47 & (uint)auVar57._4_4_;
    auVar126._8_4_ = ~uVar49 & (uint)auVar57._8_4_;
    auVar126._12_4_ = ~uVar52 & (uint)auVar57._12_4_;
    auVar71._4_4_ = _LC17;
    auVar71._0_4_ = _LC17;
    auVar71._8_4_ = _LC17;
    auVar71._12_4_ = _LC17;
    auVar57._0_4_ = uVar38 & (uint)_LC17;
    auVar57._4_4_ = uVar47 & (uint)_LC17;
    auVar57._8_4_ = uVar49 & (uint)_LC17;
    auVar57._12_4_ = uVar52 & (uint)_LC17;
    auVar57 = divps(auVar71,auVar57 | auVar126);
    auVar55 = auVar57._0_12_;
    iVar35 = 0;
  }
  else {
    auVar57 = *(undefined1 (*) [16])(param_1 + 0x10);
    iVar35 = 0x1f;
    if (uVar32 != 0) {
      for (; uVar32 >> iVar35 == 0; iVar35 = iVar35 + -1) {
      }
    }
    iVar35 = iVar35 + 1;
    auVar42._0_4_ = 0.0 - auVar57._0_4_;
    auVar42._4_4_ = 0.0 - auVar57._4_4_;
    auVar42._8_4_ = 0.0 - auVar57._8_4_;
    auVar42._12_4_ = 0.0 - auVar57._12_4_;
    uVar32 = (int)*(undefined8 *)(this + 0x50) + 3U >> 2;
    auVar43 = maxps(auVar42,auVar57);
    iVar34 = -(uint)(auVar43._0_4_ <= _LC15);
    iVar36 = -(uint)(auVar43._4_4_ <= _LC15);
    iVar37 = -(uint)(auVar43._8_4_ <= _LC15);
    auVar41._4_4_ = iVar36;
    auVar41._0_4_ = iVar34;
    auVar41._8_4_ = iVar37;
    uVar38 = iVar34 >> 0x1f;
    uVar47 = iVar36 >> 0x1f;
    uVar49 = iVar37 >> 0x1f;
    uVar52 = (int)-(uint)(auVar43._12_4_ <= _LC15) >> 0x1f;
    auVar69._0_4_ = ~uVar38 & (uint)auVar57._0_4_;
    auVar69._4_4_ = ~uVar47 & (uint)auVar57._4_4_;
    auVar69._8_4_ = ~uVar49 & (uint)auVar57._8_4_;
    auVar69._12_4_ = ~uVar52 & (uint)auVar57._12_4_;
    auVar56._4_4_ = _LC17;
    auVar56._0_4_ = _LC17;
    auVar56._8_4_ = _LC17;
    auVar56._12_4_ = _LC17;
    auVar44._0_4_ = uVar38 & (uint)_LC17;
    auVar44._4_4_ = uVar47 & (uint)_LC17;
    auVar44._8_4_ = uVar49 & (uint)_LC17;
    auVar44._12_4_ = uVar52 & (uint)_LC17;
    auVar57 = divps(auVar56,auVar44 | auVar69);
    auVar55 = auVar57._0_12_;
    if (uVar32 == 0) {
      uVar31 = 0;
LAB_001013e3:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar31;
    }
  }
  iVar36 = auVar41._0_4_;
  iVar37 = auVar41._4_4_;
  iVar66 = auVar41._8_4_;
  iVar34 = 0;
  lVar33 = 0;
  uVar85 = iVar36 >> 0x1f;
  uVar31 = 0;
  local_98 = (byte)iVar3;
  uVar76 = _LC8 & uVar85;
  uVar82 = _LC8 & uVar85;
  uVar83 = _LC8 & uVar85;
  uVar84 = _LC8 & uVar85;
  uVar86 = uVar85 & _LC6;
  uVar90 = uVar85 & _UNK_00108174;
  uVar93 = uVar85 & _UNK_00108178;
  uVar96 = uVar85 & _UNK_0010817c;
  uVar77 = iVar37 >> 0x1f;
  uVar38 = _LC8 & uVar77;
  uVar49 = _LC8 & uVar77;
  uVar52 = _LC8 & uVar77;
  uVar53 = _LC8 & uVar77;
  uVar87 = _LC6 & uVar77;
  uVar91 = _UNK_00108174 & uVar77;
  uVar94 = _UNK_00108178 & uVar77;
  uVar97 = _UNK_0010817c & uVar77;
  uVar47 = iVar66 >> 0x1f;
  uVar99 = _LC8 & uVar47;
  uVar101 = _LC8 & uVar47;
  uVar103 = _LC8 & uVar47;
  uVar105 = _LC8 & uVar47;
  uVar88 = _LC6 & uVar47;
  uVar92 = _UNK_00108174 & uVar47;
  uVar95 = _UNK_00108178 & uVar47;
  uVar98 = _UNK_0010817c & uVar47;
  fVar54 = auVar55._0_4_;
  fVar60 = auVar55._4_4_;
  fVar61 = auVar55._8_4_;
LAB_00100e81:
  do {
    fVar50 = *(float *)param_1;
    fVar7 = *(float *)(param_1 + 4);
    fVar8 = *(float *)(param_1 + 8);
    pfVar29 = (float *)(*(long *)(this + 0x80) + lVar33);
    fVar40 = *pfVar29;
    fVar39 = pfVar29[1];
    fVar79 = pfVar29[2];
    fVar78 = pfVar29[3];
    fVar48 = pfVar29[0xc];
    fVar67 = pfVar29[0xd];
    fVar114 = pfVar29[0xe];
    fVar51 = pfVar29[0xf];
    fVar118 = pfVar29[4];
    fVar62 = pfVar29[5];
    fVar68 = pfVar29[6];
    fVar74 = pfVar29[7];
    fVar80 = pfVar29[0x10];
    fVar121 = pfVar29[0x11];
    fVar122 = pfVar29[0x12];
    fVar9 = pfVar29[0x13];
    fVar10 = pfVar29[0x14];
    fVar11 = pfVar29[0x15];
    fVar12 = pfVar29[0x16];
    fVar13 = pfVar29[0x17];
    fVar14 = pfVar29[8];
    fVar15 = pfVar29[9];
    fVar16 = pfVar29[10];
    fVar17 = pfVar29[0xb];
    auVar70._0_8_ = CONCAT44((fVar39 - fVar50) * fVar54,(fVar40 - fVar50) * fVar54);
    auVar70._8_4_ = (fVar79 - fVar50) * fVar54;
    auVar70._12_4_ = (fVar78 - fVar50) * fVar54;
    auVar115._0_4_ = (fVar48 - fVar50) * fVar54;
    auVar115._4_4_ = (fVar67 - fVar50) * fVar54;
    auVar115._8_4_ = (fVar114 - fVar50) * fVar54;
    auVar115._12_4_ = (fVar51 - fVar50) * fVar54;
    auVar63._0_8_ = CONCAT44((fVar62 - fVar7) * fVar60,(fVar118 - fVar7) * fVar60);
    auVar63._8_4_ = (fVar68 - fVar7) * fVar60;
    auVar63._12_4_ = (fVar74 - fVar7) * fVar60;
    auVar108._0_4_ = (fVar80 - fVar7) * fVar60;
    auVar108._4_4_ = (fVar121 - fVar7) * fVar60;
    auVar108._8_4_ = (fVar122 - fVar7) * fVar60;
    auVar108._12_4_ = (fVar9 - fVar7) * fVar60;
    auVar58._0_8_ = CONCAT44((fVar15 - fVar8) * fVar61,(fVar14 - fVar8) * fVar61);
    auVar58._8_4_ = (fVar16 - fVar8) * fVar61;
    auVar58._12_4_ = (fVar17 - fVar8) * fVar61;
    auVar45._8_4_ = auVar70._8_4_;
    auVar45._0_8_ = auVar70._0_8_;
    auVar45._12_4_ = auVar70._12_4_;
    auVar57 = minps(auVar45,auVar115);
    auVar71 = maxps(auVar70,auVar115);
    fVar100 = (fVar10 - fVar8) * fVar61;
    fVar102 = (fVar11 - fVar8) * fVar61;
    fVar104 = (fVar12 - fVar8) * fVar61;
    fVar106 = (fVar13 - fVar8) * fVar61;
    auVar125._8_4_ = auVar63._8_4_;
    auVar125._0_8_ = auVar63._0_8_;
    auVar125._12_4_ = auVar63._12_4_;
    auVar126 = minps(auVar125,auVar108);
    auVar43 = maxps(auVar63,auVar108);
    auVar116._0_4_ = ~uVar85 & auVar71._0_4_;
    auVar116._4_4_ = ~uVar85 & auVar71._4_4_;
    auVar116._8_4_ = ~uVar85 & auVar71._8_4_;
    auVar116._12_4_ = ~uVar85 & auVar71._12_4_;
    auVar21._4_4_ = uVar90;
    auVar21._0_4_ = uVar86;
    auVar21._8_4_ = uVar93;
    auVar21._12_4_ = uVar96;
    auVar46._0_4_ = ~uVar85 & auVar57._0_4_;
    auVar46._4_4_ = ~uVar85 & auVar57._4_4_;
    auVar46._8_4_ = ~uVar85 & auVar57._8_4_;
    auVar46._12_4_ = ~uVar85 & auVar57._12_4_;
    auVar72._0_4_ = ~uVar77 & auVar43._0_4_;
    auVar72._4_4_ = ~uVar77 & auVar43._4_4_;
    auVar72._8_4_ = ~uVar77 & auVar43._8_4_;
    auVar72._12_4_ = ~uVar77 & auVar43._12_4_;
    auVar22._4_4_ = uVar91;
    auVar22._0_4_ = uVar87;
    auVar22._8_4_ = uVar94;
    auVar22._12_4_ = uVar97;
    auVar127._0_4_ = ~uVar77 & auVar126._0_4_;
    auVar127._4_4_ = ~uVar77 & auVar126._4_4_;
    auVar127._8_4_ = ~uVar77 & auVar126._8_4_;
    auVar127._12_4_ = ~uVar77 & auVar126._12_4_;
    auVar123._8_4_ = auVar58._8_4_;
    auVar123._0_8_ = auVar58._0_8_;
    auVar123._12_4_ = auVar58._12_4_;
    auVar4._4_4_ = fVar102;
    auVar4._0_4_ = fVar100;
    auVar4._8_4_ = fVar104;
    auVar4._12_4_ = fVar106;
    auVar57 = maxps(auVar58,auVar4);
    auVar5._4_4_ = fVar102;
    auVar5._0_4_ = fVar100;
    auVar5._8_4_ = fVar104;
    auVar5._12_4_ = fVar106;
    auVar71 = minps(auVar123,auVar5);
    auVar43 = minps(auVar116 | auVar21,auVar72 | auVar22);
    auVar18._4_4_ = uVar82;
    auVar18._0_4_ = uVar76;
    auVar18._8_4_ = uVar83;
    auVar18._12_4_ = uVar84;
    auVar19._4_4_ = uVar49;
    auVar19._0_4_ = uVar38;
    auVar19._8_4_ = uVar52;
    auVar19._12_4_ = uVar53;
    auVar75._4_4_ = -(uint)(fVar11 < fVar8);
    auVar75._0_4_ = -(uint)(fVar10 < fVar8);
    auVar75._8_4_ = -(uint)(fVar12 < fVar8);
    auVar75._12_4_ = -(uint)(fVar13 < fVar8);
    auVar81._4_4_ = -(uint)(fVar121 < fVar7);
    auVar81._0_4_ = -(uint)(fVar80 < fVar7);
    auVar81._8_4_ = -(uint)(fVar122 < fVar7);
    auVar81._12_4_ = -(uint)(fVar9 < fVar7);
    auVar64._0_4_ = ~uVar47 & auVar57._0_4_;
    auVar64._4_4_ = ~uVar47 & auVar57._4_4_;
    auVar64._8_4_ = ~uVar47 & auVar57._8_4_;
    auVar64._12_4_ = ~uVar47 & auVar57._12_4_;
    auVar23._4_4_ = uVar92;
    auVar23._0_4_ = uVar88;
    auVar23._8_4_ = uVar95;
    auVar23._12_4_ = uVar98;
    auVar57 = maxps(auVar46 | auVar18,auVar127 | auVar19);
    uStack_168 = auVar71._0_4_;
    uStack_164 = auVar71._4_4_;
    uStack_160 = auVar71._8_4_;
    uStack_15c = auVar71._12_4_;
    auVar124._0_4_ = ~uVar47 & uStack_168;
    auVar124._4_4_ = ~uVar47 & uStack_164;
    auVar124._8_4_ = ~uVar47 & uStack_160;
    auVar124._12_4_ = ~uVar47 & uStack_15c;
    auVar120._4_4_ = -(uint)(fVar7 < fVar62);
    auVar120._0_4_ = -(uint)(fVar7 < fVar118);
    auVar120._8_4_ = -(uint)(fVar7 < fVar68);
    auVar120._12_4_ = -(uint)(fVar7 < fVar74);
    auVar43 = minps(auVar43,auVar64 | auVar23);
    auVar20._4_4_ = uVar101;
    auVar20._0_4_ = uVar99;
    auVar20._8_4_ = uVar103;
    auVar20._12_4_ = uVar105;
    auVar57 = maxps(auVar57,auVar124 | auVar20);
    auVar25._4_4_ = iVar37;
    auVar25._0_4_ = iVar37;
    auVar25._8_4_ = iVar37;
    auVar25._12_4_ = iVar37;
    auVar117._4_4_ = -(uint)(auVar43._4_4_ < 0.0);
    auVar117._0_4_ = -(uint)(auVar43._0_4_ < 0.0);
    auVar117._8_4_ = -(uint)(auVar43._8_4_ < 0.0);
    auVar117._12_4_ = -(uint)(auVar43._12_4_ < 0.0);
    auVar89._4_4_ = -(uint)(fVar67 < fVar50);
    auVar89._0_4_ = -(uint)(fVar48 < fVar50);
    auVar89._8_4_ = -(uint)(fVar114 < fVar50);
    auVar89._12_4_ = -(uint)(fVar51 < fVar50);
    auVar119._4_4_ = -(uint)(fVar8 < fVar15);
    auVar119._0_4_ = -(uint)(fVar8 < fVar14);
    auVar65._4_4_ = -(uint)(auVar43._4_4_ < auVar57._4_4_);
    auVar65._0_4_ = -(uint)(auVar43._0_4_ < auVar57._0_4_);
    auVar65._8_4_ = -(uint)(auVar43._8_4_ < auVar57._8_4_);
    auVar65._12_4_ = -(uint)(auVar43._12_4_ < auVar57._12_4_);
    auVar59._4_4_ = -(uint)(fVar67 < fVar39);
    auVar59._0_4_ = -(uint)(fVar48 < fVar40);
    auVar59._8_4_ = -(uint)(fVar114 < fVar79);
    auVar59._12_4_ = -(uint)(fVar51 < fVar78);
    auVar73._4_4_ = -(uint)(fVar11 < fVar15);
    auVar73._0_4_ = -(uint)(fVar10 < fVar14);
    auVar73._8_4_ = -(uint)(fVar12 < fVar16);
    auVar73._12_4_ = -(uint)(fVar13 < fVar17);
    auVar109._4_4_ = -(uint)(fVar50 < fVar39);
    auVar109._0_4_ = -(uint)(fVar50 < fVar40);
    auVar109._8_4_ = -(uint)(fVar50 < fVar79);
    auVar109._12_4_ = -(uint)(fVar50 < fVar78);
    auVar119._8_4_ = -(uint)(fVar8 < fVar16);
    auVar119._12_4_ = -(uint)(fVar8 < fVar17);
    auVar24._4_4_ = iVar36;
    auVar24._0_4_ = iVar36;
    auVar24._8_4_ = iVar36;
    auVar24._12_4_ = iVar36;
    auVar6._4_4_ = -(uint)(fVar121 < fVar62);
    auVar6._0_4_ = -(uint)(fVar80 < fVar118);
    auVar6._8_4_ = -(uint)(fVar122 < fVar68);
    auVar6._12_4_ = -(uint)(fVar9 < fVar74);
    auVar26._4_4_ = iVar66;
    auVar26._0_4_ = iVar66;
    auVar26._8_4_ = iVar66;
    auVar26._12_4_ = iVar66;
    auVar43 = (auVar109 | auVar89) & auVar24 | (auVar120 | auVar81) & auVar25 |
              auVar59 | auVar6 | auVar65 | auVar117 | (auVar119 | auVar75) & auVar26 | auVar73;
    uVar107 = auVar43._0_4_ >> 0x1f;
    uVar111 = auVar43._4_4_ >> 0x1f;
    uVar112 = auVar43._8_4_ >> 0x1f;
    uVar113 = auVar43._12_4_ >> 0x1f;
    afStack_78[0] = (float)(uVar107 & _LC6 | ~uVar107 & (uint)auVar57._0_4_);
    afStack_78[1] = (float)(uVar111 & _UNK_00108174 | ~uVar111 & (uint)auVar57._4_4_);
    afStack_78[2] = (float)(uVar112 & _UNK_00108178 | ~uVar112 & (uint)auVar57._8_4_);
    afStack_78[3] = (float)(uVar113 & _UNK_0010817c | ~uVar113 & (uint)auVar57._12_4_);
    fVar50 = *(float *)(param_3 + 4);
    auVar110._4_4_ = -(uint)(afStack_78[1] < fVar50);
    auVar110._0_4_ = -(uint)(afStack_78[0] < fVar50);
    auVar110._8_4_ = -(uint)(afStack_78[2] < fVar50);
    auVar110._12_4_ = -(uint)(afStack_78[3] < fVar50);
    iVar28 = movmskps((int)pfVar29,auVar110);
    if (iVar28 != 0) {
      uVar107 = (int)*(undefined8 *)(this + 0x50) - iVar34;
      if (4 < uVar107) {
        uVar107 = 4;
      }
      if (iVar34 != (int)*(undefined8 *)(this + 0x50)) {
        lVar30 = 0;
        do {
          if (afStack_78[lVar30] <= fVar50 && fVar50 != afStack_78[lVar30]) {
            uVar111 = iVar34 + (int)lVar30;
            puVar1 = (undefined8 *)(*(long *)(this + 0x60) + (ulong)uVar111 * 0x28);
            fVar7 = *(float *)(puVar1 + 1);
            fVar8 = *(float *)((long)puVar1 + 0xc);
            fVar40 = *(float *)(puVar1 + 2);
            uStack_80 = uVar111 << (local_98 & 0x1f) |
                        ~((int)(1L << ((byte)iVar35 & 0x3f)) + -1 << (local_98 & 0x1f)) & uVar2;
            iStack_7c = iVar35 + iVar3;
            fVar39 = __LC13;
            uVar111 = _UNK_00108194;
            fVar50 = _UNK_00108198;
            fVar79 = _LC17;
            if (*(char *)((long)puVar1 + 0x24) == '\0') {
              fVar79 = *(float *)((long)puVar1 + 0x14);
              fVar39 = *(float *)((long)puVar1 + 0x14);
              uVar111 = *(uint *)(puVar1 + 3);
              fVar50 = *(float *)((long)puVar1 + 0x1c);
              fVar78 = _LC17 - (fVar50 * fVar50 +
                               *(float *)(puVar1 + 3) * *(float *)(puVar1 + 3) +
                               fVar79 * fVar79 + 0.0);
              fVar79 = 0.0;
              if (0.0 <= fVar78) {
                fVar79 = SQRT(fVar78);
              }
            }
            fVar39 = (float)((uint)fVar39 ^ _LC23);
            fVar48 = (float)(uVar111 ^ _UNK_001081a4);
            fVar50 = (float)((uint)fVar50 ^ _UNK_001081a8);
            fVar79 = (float)((uint)fVar79 ^ _UNK_001081ac);
            fVar67 = fVar39 + fVar39;
            fVar114 = fVar48 + fVar48;
            fVar118 = (fVar50 + fVar50) * fVar50;
            fVar78 = fVar79 * (fVar50 + fVar50);
            fVar74 = fVar67 * fVar50 + fVar114 * fVar79;
            fVar121 = fVar50 * fVar114 - fVar67 * fVar79;
            fVar80 = (_LC17 - fVar39 * fVar67) - fVar114 * fVar48;
            fVar68 = fVar67 * fVar79 + fVar50 * fVar114;
            fVar62 = fVar48 * fVar67 + fVar78;
            fVar78 = fVar48 * fVar67 - fVar78;
            fVar122 = (_LC17 - fVar118) - fVar39 * fVar67;
            fVar118 = (_LC17 - fVar114 * fVar48) - fVar118;
            fVar39 = fVar67 * fVar50 - fVar114 * fVar79;
            fVar79 = 0.0 - (fVar7 * fVar118 + fVar8 * fVar78 + fVar40 * fVar74);
            fVar48 = 0.0 - (fVar7 * fVar62 + fVar8 * fVar122 + fVar40 * fVar121);
            fVar114 = 0.0 - (fVar7 * fVar39 + fVar8 * fVar68 + fVar40 * fVar80);
            fVar50 = *(float *)param_1;
            fVar7 = *(float *)(param_1 + 4);
            fVar8 = *(float *)(param_1 + 8);
            fVar40 = fVar50 + *(float *)(param_1 + 0x10);
            fVar67 = fVar7 + *(float *)(param_1 + 0x14);
            fVar51 = fVar8 + *(float *)(param_1 + 0x18);
            auStack_68._0_4_ = fVar50 * fVar118 + fVar7 * fVar78 + fVar8 * fVar74 + fVar79;
            auStack_68._4_4_ = fVar50 * fVar62 + fVar7 * fVar122 + fVar8 * fVar121 + fVar48;
            auStack_68._8_4_ = fVar50 * fVar39 + fVar7 * fVar68 + fVar8 * fVar80 + fVar114;
            auStack_68._12_4_ = fVar50 * 0.0 + fVar7 * 0.0 + fVar8 * 0.0 + 1.0;
            fStack_58 = (fVar51 * fVar74 + fVar118 * fVar40 + fVar67 * fVar78 + fVar79) -
                        auStack_68._0_4_;
            fStack_54 = (fVar51 * fVar121 + fVar62 * fVar40 + fVar67 * fVar122 + fVar48) -
                        auStack_68._4_4_;
            fStack_50 = (fVar51 * fVar80 + fVar39 * fVar40 + fVar67 * fVar68 + fVar114) -
                        auStack_68._8_4_;
            fStack_4c = (fVar51 * 0.0 + fVar40 * 0.0 + fVar67 * 0.0 + 1.0) - auStack_68._12_4_;
            cVar27 = (**(code **)(*(long *)*puVar1 + 0x98))
                               ((long *)*puVar1,auStack_68,&uStack_80,param_3);
            if (cVar27 != '\0') {
              uVar31 = 1;
            }
            if (*(float *)(param_3 + 4) <= 0.0) goto LAB_001013b0;
          }
          lVar30 = lVar30 + 1;
          if (uVar107 <= (uint)lVar30) goto LAB_001013b0;
          fVar50 = *(float *)(param_3 + 4);
        } while( true );
      }
    }
    iVar34 = iVar34 + 4;
    lVar33 = lVar33 + 0x60;
  } while (iVar34 != uVar32 << 2);
  goto LAB_001013e3;
LAB_001013b0:
  iVar34 = iVar34 + 4;
  lVar33 = lVar33 + 0x60;
  if (iVar34 == uVar32 << 2) goto LAB_001013e3;
  goto LAB_00100e81;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MutableCompoundShape::CollidePoint(JPH::Vec3, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::CollidePointResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) const */

void JPH::MutableCompoundShape::CollidePoint
               (undefined8 param_1,float param_2,long param_3,uint *param_4,long param_5,
               long *param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  long lVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  uint uVar19;
  uint uVar20;
  long in_FS_OFFSET;
  float fVar21;
  float fVar23;
  float fVar24;
  undefined1 auVar22 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 local_d8;
  undefined8 uStack_d0;
  uint uStack_60;
  int iStack_5c;
  undefined1 auStack_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar9 = (**(code **)(*param_6 + 0x10))(param_6,param_3,param_4);
  if (cVar9 != '\0') {
    local_d8._0_4_ = (float)param_1;
    fVar7 = (float)local_d8;
    local_d8._4_4_ = (float)((ulong)param_1 >> 0x20);
    fVar8 = local_d8._4_4_;
    uVar19 = *param_4;
    uVar2 = param_4[1];
    iVar16 = (int)*(undefined8 *)(param_3 + 0x50);
    uVar12 = iVar16 - 1;
    bVar11 = (byte)uVar2;
    if (uVar12 == 0) {
      uVar12 = 1;
      iVar13 = 0;
    }
    else {
      iVar13 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar13 == 0; iVar13 = iVar13 + -1) {
        }
      }
      iVar13 = iVar13 + 1;
      uVar12 = iVar16 + 3U >> 2;
      if (uVar12 == 0) goto LAB_001014e3;
      uVar19 = uVar19 & ~((int)(1L << ((byte)iVar13 & 0x3f)) + -1 << (bVar11 & 0x1f));
    }
    lVar10 = 0;
    iVar16 = 0;
    do {
      pfVar18 = (float *)(*(long *)(param_3 + 0x80) + lVar10);
      auVar22._0_4_ = -(uint)(fVar8 <= pfVar18[0x10] && pfVar18[4] <= fVar8);
      auVar22._4_4_ = -(uint)(fVar8 <= pfVar18[0x11] && pfVar18[5] <= fVar8);
      auVar22._8_4_ = -(uint)(fVar8 <= pfVar18[0x12] && pfVar18[6] <= fVar8);
      auVar22._12_4_ = -(uint)(fVar8 <= pfVar18[0x13] && pfVar18[7] <= fVar8);
      auVar3._4_4_ = -(uint)(pfVar18[1] <= fVar7 && fVar7 <= pfVar18[0xd]);
      auVar3._0_4_ = -(uint)(*pfVar18 <= fVar7 && fVar7 <= pfVar18[0xc]);
      auVar3._8_4_ = -(uint)(pfVar18[2] <= fVar7 && fVar7 <= pfVar18[0xe]);
      auVar3._12_4_ = -(uint)(pfVar18[3] <= fVar7 && fVar7 <= pfVar18[0xf]);
      auStack_58._0_4_ = -(uint)(param_2 <= pfVar18[0x14] && pfVar18[8] <= param_2);
      auStack_58._4_4_ = -(uint)(param_2 <= pfVar18[0x15] && pfVar18[9] <= param_2);
      auStack_58._8_4_ = -(uint)(param_2 <= pfVar18[0x16] && pfVar18[10] <= param_2);
      auStack_58._12_4_ = -(uint)(param_2 <= pfVar18[0x17] && pfVar18[0xb] <= param_2);
      auStack_58 = auVar22 & auVar3 & auStack_58;
      iVar17 = movmskps((int)pfVar18,auStack_58);
      if (iVar17 != 0) {
        iVar17 = (int)*(undefined8 *)(param_3 + 0x50);
        uVar20 = iVar17 - iVar16;
        if (4 < uVar20) {
          uVar20 = 4;
        }
        if (iVar17 != iVar16) {
          lVar15 = 0;
          do {
            if (*(int *)(auStack_58 + lVar15 * 4) != 0) {
              uVar14 = iVar16 + (int)lVar15;
              puVar1 = (undefined8 *)(*(long *)(param_3 + 0x60) + (ulong)uVar14 * 0x28);
              fVar4 = *(float *)(puVar1 + 1);
              fVar5 = *(float *)((long)puVar1 + 0xc);
              fVar6 = *(float *)(puVar1 + 2);
              uStack_60 = uVar14 << (bVar11 & 0x1f) | uVar19;
              iStack_5c = uVar2 + iVar13;
              fVar21 = __LC13;
              uVar14 = _UNK_00108194;
              fVar24 = _UNK_00108198;
              fVar28 = _LC17;
              if (*(char *)((long)puVar1 + 0x24) == '\0') {
                fVar28 = *(float *)((long)puVar1 + 0x14);
                fVar21 = *(float *)((long)puVar1 + 0x14);
                uVar14 = *(uint *)(puVar1 + 3);
                fVar24 = *(float *)((long)puVar1 + 0x1c);
                fVar30 = _LC17 - (fVar24 * fVar24 +
                                 *(float *)(puVar1 + 3) * *(float *)(puVar1 + 3) +
                                 fVar28 * fVar28 + 0.0);
                fVar28 = 0.0;
                if (0.0 <= fVar30) {
                  fVar28 = SQRT(fVar30);
                }
              }
              fVar21 = (float)((uint)fVar21 ^ _LC23);
              fVar23 = (float)(uVar14 ^ _UNK_001081a4);
              fVar24 = (float)((uint)fVar24 ^ _UNK_001081a8);
              fVar28 = (float)((uint)fVar28 ^ _UNK_001081ac);
              fVar26 = fVar21 + fVar21;
              fVar32 = fVar23 + fVar23;
              fVar30 = fVar28 * (fVar24 + fVar24);
              fVar33 = (fVar24 + fVar24) * fVar24;
              fVar29 = fVar26 * fVar24 + fVar32 * fVar28;
              fVar34 = fVar24 * fVar32 - fVar26 * fVar28;
              fVar31 = (_LC17 - fVar21 * fVar26) - fVar32 * fVar23;
              fVar27 = fVar26 * fVar28 + fVar24 * fVar32;
              fVar25 = fVar23 * fVar26 + fVar30;
              fVar30 = fVar23 * fVar26 - fVar30;
              fVar21 = (_LC17 - fVar33) - fVar21 * fVar26;
              fVar33 = (_LC17 - fVar32 * fVar23) - fVar33;
              fVar24 = fVar26 * fVar24 - fVar32 * fVar28;
              local_d8 = CONCAT44(fVar25 * fVar7 + fVar21 * fVar8 + fVar34 * param_2 +
                                  (0.0 - (fVar4 * fVar25 + fVar5 * fVar21 + fVar6 * fVar34)),
                                  fVar33 * fVar7 + fVar30 * fVar8 + fVar29 * param_2 +
                                  (0.0 - (fVar4 * fVar33 + fVar5 * fVar30 + fVar6 * fVar29)));
              uStack_d0 = CONCAT44(fVar7 * 0.0 + fVar8 * 0.0 + param_2 * 0.0 + 1.0,
                                   fVar24 * fVar7 + fVar27 * fVar8 + fVar31 * param_2 +
                                   (0.0 - (fVar4 * fVar24 + fVar5 * fVar27 + fVar6 * fVar31)));
              (**(code **)(*(long *)*puVar1 + 0xa8))
                        (local_d8,uStack_d0,(long *)*puVar1,&uStack_60,param_5,param_6);
              if (*(float *)(param_5 + 8) <= _LC8) break;
            }
            lVar15 = lVar15 + 1;
          } while ((uint)lVar15 < uVar20);
        }
      }
      iVar16 = iVar16 + 4;
      lVar10 = lVar10 + 0x60;
    } while (iVar16 != uVar12 * 4);
  }
LAB_001014e3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::MutableCompoundShapeSettings::GetRTTI() const */

undefined1 * JPH::MutableCompoundShapeSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::MutableCompoundShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::MutableCompoundShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::MutableCompoundShapeSettings*)::rtti,
                      "MutableCompoundShapeSettings",0x58,
                      GetRTTIOfType(JPH::MutableCompoundShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::MutableCompoundShapeSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::MutableCompoundShapeSettings*)::rtti,&__dso_handle
                  );
      __cxa_guard_release(&GetRTTIOfType(JPH::MutableCompoundShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::MutableCompoundShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::MutableCompoundShapeSettings*)::rtti;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MutableCompoundShape::CastRay(JPH::RayCast const&, JPH::RayCastSettings const&,
   JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay>&, JPH::ShapeFilter const&) const [clone .part.0] [clone
   .isra.0] */

void __thiscall
JPH::MutableCompoundShape::CastRay
          (MutableCompoundShape *this,RayCast *param_1,RayCastSettings *param_2,
          SubShapeIDCreator *param_3,CollisionCollector *param_4,ShapeFilter *param_5)

{
  undefined8 *puVar1;
  MutableCompoundShape *this_00;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  CollisionCollector *pCVar23;
  ShapeFilter *pSVar24;
  char cVar25;
  uint uVar26;
  int iVar27;
  float *pfVar28;
  byte bVar29;
  long lVar30;
  int iVar31;
  long lVar32;
  long in_FS_OFFSET;
  uint uVar33;
  float fVar34;
  float fVar35;
  uint uVar40;
  float fVar41;
  uint uVar42;
  float fVar43;
  undefined1 auVar36 [16];
  uint uVar44;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar71;
  float fVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar88;
  float fVar89;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  uint uStack_d0;
  int iStack_cc;
  float afStack_c8 [4];
  RayCast aRStack_b8 [16];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 auStack_98 [16];
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  RayCast *local_78;
  CollisionCollector *local_70;
  undefined8 local_68;
  uint uStack_60;
  undefined2 uStack_5c;
  RayCastSettings RStack_5a;
  ShapeFilter *pSStack_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = param_1;
  local_70 = param_4;
  local_68 = param_3;
  uStack_60 = (int)*(undefined8 *)(this + 0x50) - 1;
  if (uStack_60 != 0) {
    iVar2 = 0x1f;
    if (uStack_60 != 0) {
      for (; uStack_60 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    uStack_60 = iVar2 + 1;
  }
  auVar47 = *(undefined1 (*) [16])(param_1 + 0x10);
  uVar26 = (int)*(undefined8 *)(this + 0x50) + 3U >> 2;
  auVar36._0_4_ = 0.0 - auVar47._0_4_;
  auVar36._4_4_ = 0.0 - auVar47._4_4_;
  auVar36._8_4_ = 0.0 - auVar47._8_4_;
  auVar36._12_4_ = 0.0 - auVar47._12_4_;
  pSStack_58 = param_5;
  auVar86._4_4_ = _LC17;
  auVar86._0_4_ = _LC17;
  auVar86._8_4_ = _LC17;
  auVar86._12_4_ = _LC17;
  uStack_5c = *(undefined2 *)param_2;
  auVar36 = maxps(auVar36,auVar47);
  RStack_5a = param_2[2];
  iStack_88 = -(uint)(auVar36._0_4_ <= _LC15);
  iStack_84 = -(uint)(auVar36._4_4_ <= _LC15);
  iStack_80 = -(uint)(auVar36._8_4_ <= _LC15);
  iStack_7c = -(uint)(auVar36._12_4_ <= _LC15);
  uVar33 = iStack_88 >> 0x1f;
  uVar40 = iStack_84 >> 0x1f;
  uVar42 = iStack_80 >> 0x1f;
  uVar44 = iStack_7c >> 0x1f;
  auVar68._0_4_ = uVar33 & (uint)_LC17;
  auVar68._4_4_ = uVar40 & (uint)_LC17;
  auVar68._8_4_ = uVar42 & (uint)_LC17;
  auVar68._12_4_ = uVar44 & (uint)_LC17;
  auVar84._0_4_ = ~uVar33 & (uint)auVar47._0_4_;
  auVar84._4_4_ = ~uVar40 & (uint)auVar47._4_4_;
  auVar84._8_4_ = ~uVar42 & (uint)auVar47._8_4_;
  auVar84._12_4_ = ~uVar44 & (uint)auVar47._12_4_;
  auStack_98 = divps(auVar86,auVar68 | auVar84);
  if (uVar26 == 0) {
LAB_001020d8:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  iVar2 = uVar26 * 4;
  iVar31 = 0;
  lVar32 = 0;
LAB_00101acb:
  fVar43 = *(float *)local_78;
  fVar8 = *(float *)(local_78 + 4);
  fVar9 = *(float *)(local_78 + 8);
  pfVar28 = (float *)(*(long *)(this + 0x80) + lVar32);
  fVar80 = auStack_98._0_4_;
  fVar88 = auStack_98._4_4_;
  fVar89 = auStack_98._8_4_;
  fVar35 = *pfVar28;
  fVar34 = pfVar28[1];
  fVar58 = pfVar28[2];
  fVar62 = pfVar28[3];
  fVar41 = pfVar28[0xc];
  fVar52 = pfVar28[0xd];
  fVar71 = pfVar28[0xe];
  fVar72 = pfVar28[0xf];
  fVar45 = pfVar28[8];
  fVar49 = pfVar28[9];
  fVar53 = pfVar28[10];
  fVar59 = pfVar28[0xb];
  fVar63 = pfVar28[0x10];
  fVar81 = pfVar28[0x11];
  fVar82 = pfVar28[0x12];
  fVar10 = pfVar28[0x13];
  fVar11 = pfVar28[4];
  fVar12 = pfVar28[5];
  fVar13 = pfVar28[6];
  fVar14 = pfVar28[7];
  auVar67._0_8_ = CONCAT44((fVar34 - fVar43) * fVar80,(fVar35 - fVar43) * fVar80);
  auVar67._8_4_ = (fVar58 - fVar43) * fVar80;
  auVar67._12_4_ = (fVar62 - fVar43) * fVar80;
  fVar15 = pfVar28[0x14];
  fVar16 = pfVar28[0x15];
  fVar17 = pfVar28[0x16];
  fVar18 = pfVar28[0x17];
  fVar77 = (fVar41 - fVar43) * fVar80;
  fVar78 = (fVar52 - fVar43) * fVar80;
  fVar79 = (fVar71 - fVar43) * fVar80;
  fVar80 = (fVar72 - fVar43) * fVar80;
  auVar75._0_4_ = (fVar63 - fVar8) * fVar88;
  auVar75._4_4_ = (fVar81 - fVar8) * fVar88;
  auVar75._8_4_ = (fVar82 - fVar8) * fVar88;
  auVar75._12_4_ = (fVar10 - fVar8) * fVar88;
  auVar64._0_8_ = CONCAT44((fVar12 - fVar8) * fVar88,(fVar11 - fVar8) * fVar88);
  auVar64._8_4_ = (fVar13 - fVar8) * fVar88;
  auVar64._12_4_ = (fVar14 - fVar8) * fVar88;
  auVar60._0_8_ = CONCAT44((fVar49 - fVar9) * fVar89,(fVar45 - fVar9) * fVar89);
  auVar60._8_4_ = (fVar53 - fVar9) * fVar89;
  auVar60._12_4_ = (fVar59 - fVar9) * fVar89;
  uVar26 = iStack_88 >> 0x1f;
  auVar73._0_4_ = (fVar15 - fVar9) * fVar89;
  auVar73._4_4_ = (fVar16 - fVar9) * fVar89;
  auVar73._8_4_ = (fVar17 - fVar9) * fVar89;
  auVar73._12_4_ = (fVar18 - fVar9) * fVar89;
  auVar46._8_4_ = auVar67._8_4_;
  auVar46._0_8_ = auVar67._0_8_;
  auVar46._12_4_ = auVar67._12_4_;
  auVar5._4_4_ = fVar78;
  auVar5._0_4_ = fVar77;
  auVar5._8_4_ = fVar79;
  auVar5._12_4_ = fVar80;
  auVar47 = minps(auVar46,auVar5);
  auVar6._4_4_ = fVar78;
  auVar6._0_4_ = fVar77;
  auVar6._8_4_ = fVar79;
  auVar6._12_4_ = fVar80;
  auVar68 = maxps(auVar67,auVar6);
  auVar54._0_4_ = ~uVar26 & auVar47._0_4_;
  auVar54._4_4_ = ~uVar26 & auVar47._4_4_;
  auVar54._8_4_ = ~uVar26 & auVar47._8_4_;
  auVar54._12_4_ = ~uVar26 & auVar47._12_4_;
  auVar48._0_4_ = _LC8 & uVar26;
  auVar48._4_4_ = _UNK_00108184 & uVar26;
  auVar48._8_4_ = _UNK_00108188 & uVar26;
  auVar48._12_4_ = _UNK_0010818c & uVar26;
  auVar37._0_4_ = uVar26 & _LC6;
  auVar37._4_4_ = uVar26 & _UNK_00108174;
  auVar37._8_4_ = uVar26 & _UNK_00108178;
  auVar37._12_4_ = uVar26 & _UNK_0010817c;
  auVar55._8_4_ = auVar64._8_4_;
  auVar55._0_8_ = auVar64._0_8_;
  auVar55._12_4_ = auVar64._12_4_;
  auVar36 = maxps(auVar64,auVar75);
  auVar47 = minps(auVar55,auVar75);
  auVar7._4_4_ = ~uVar26 & auVar68._4_4_;
  auVar7._0_4_ = ~uVar26 & auVar68._0_4_;
  auVar7._8_4_ = ~uVar26 & auVar68._8_4_;
  auVar7._12_4_ = ~uVar26 & auVar68._12_4_;
  uVar26 = iStack_84 >> 0x1f;
  auVar83._8_4_ = auVar60._8_4_;
  auVar83._0_8_ = auVar60._0_8_;
  auVar83._12_4_ = auVar60._12_4_;
  auVar56._0_4_ = uVar26 & _LC6;
  auVar56._4_4_ = uVar26 & _UNK_00108174;
  auVar56._8_4_ = uVar26 & _UNK_00108178;
  auVar56._12_4_ = uVar26 & _UNK_0010817c;
  auVar84 = minps(auVar83,auVar73);
  auVar69._0_4_ = ~uVar26 & auVar36._0_4_;
  auVar69._4_4_ = ~uVar26 & auVar36._4_4_;
  auVar69._8_4_ = ~uVar26 & auVar36._8_4_;
  auVar69._12_4_ = ~uVar26 & auVar36._12_4_;
  auVar68 = maxps(auVar60,auVar73);
  auVar22._4_4_ = _UNK_00108184 & uVar26 | ~uVar26 & auVar47._4_4_;
  auVar22._0_4_ = _LC8 & uVar26 | ~uVar26 & auVar47._0_4_;
  auVar22._8_4_ = _UNK_00108188 & uVar26 | ~uVar26 & auVar47._8_4_;
  auVar22._12_4_ = _UNK_0010818c & uVar26 | ~uVar26 & auVar47._12_4_;
  auVar36 = maxps(auVar48 | auVar54,auVar22);
  uVar26 = iStack_80 >> 0x1f;
  auVar47 = minps(auVar37 | auVar7,auVar56 | auVar69);
  auVar87._0_4_ = ~uVar26 & auVar84._0_4_;
  auVar87._4_4_ = ~uVar26 & auVar84._4_4_;
  auVar87._8_4_ = ~uVar26 & auVar84._8_4_;
  auVar87._12_4_ = ~uVar26 & auVar84._12_4_;
  auVar65._0_4_ = ~uVar26 & auVar68._0_4_;
  auVar65._4_4_ = ~uVar26 & auVar68._4_4_;
  auVar65._8_4_ = ~uVar26 & auVar68._8_4_;
  auVar65._12_4_ = ~uVar26 & auVar68._12_4_;
  auVar85._0_4_ = _LC8 & uVar26;
  auVar85._4_4_ = _UNK_00108184 & uVar26;
  auVar85._8_4_ = _UNK_00108188 & uVar26;
  auVar85._12_4_ = _UNK_0010818c & uVar26;
  auVar50._0_4_ = uVar26 & _LC6;
  auVar50._4_4_ = uVar26 & _UNK_00108174;
  auVar50._8_4_ = uVar26 & _UNK_00108178;
  auVar50._12_4_ = uVar26 & _UNK_0010817c;
  auVar36 = maxps(auVar36,auVar85 | auVar87);
  auVar47 = minps(auVar47,auVar50 | auVar65);
  auVar66._4_4_ = -(uint)(fVar81 < fVar12);
  auVar66._0_4_ = -(uint)(fVar63 < fVar11);
  auVar66._8_4_ = -(uint)(fVar82 < fVar13);
  auVar66._12_4_ = -(uint)(fVar10 < fVar14);
  auVar61._4_4_ = -(uint)(fVar16 < fVar49);
  auVar61._0_4_ = -(uint)(fVar15 < fVar45);
  auVar61._8_4_ = -(uint)(fVar17 < fVar53);
  auVar61._12_4_ = -(uint)(fVar18 < fVar59);
  auVar38._4_4_ = -(uint)(auVar47._4_4_ < 0.0);
  auVar38._0_4_ = -(uint)(auVar47._0_4_ < 0.0);
  auVar38._8_4_ = -(uint)(auVar47._8_4_ < 0.0);
  auVar38._12_4_ = -(uint)(auVar47._12_4_ < 0.0);
  auVar57._4_4_ = -(uint)(auVar47._4_4_ < auVar36._4_4_);
  auVar57._0_4_ = -(uint)(auVar47._0_4_ < auVar36._0_4_);
  auVar57._8_4_ = -(uint)(auVar47._8_4_ < auVar36._8_4_);
  auVar57._12_4_ = -(uint)(auVar47._12_4_ < auVar36._12_4_);
  auVar51._4_4_ = -(uint)(fVar52 < fVar34);
  auVar51._0_4_ = -(uint)(fVar41 < fVar35);
  auVar51._8_4_ = -(uint)(fVar71 < fVar58);
  auVar51._12_4_ = -(uint)(fVar72 < fVar62);
  auVar70._4_4_ = -(uint)(fVar43 < fVar34);
  auVar70._0_4_ = -(uint)(fVar43 < fVar35);
  auVar70._8_4_ = -(uint)(fVar43 < fVar58);
  auVar70._12_4_ = -(uint)(fVar43 < fVar62);
  auVar4._4_4_ = -(uint)(fVar52 < fVar43);
  auVar4._0_4_ = -(uint)(fVar41 < fVar43);
  auVar4._8_4_ = -(uint)(fVar71 < fVar43);
  auVar4._12_4_ = -(uint)(fVar72 < fVar43);
  auVar74._4_4_ = -(uint)(fVar8 < fVar12);
  auVar74._0_4_ = -(uint)(fVar8 < fVar11);
  auVar74._8_4_ = -(uint)(fVar8 < fVar13);
  auVar74._12_4_ = -(uint)(fVar8 < fVar14);
  auVar76._4_4_ = -(uint)(fVar9 < fVar49);
  auVar76._0_4_ = -(uint)(fVar9 < fVar45);
  auVar3._4_4_ = -(uint)(fVar81 < fVar8);
  auVar3._0_4_ = -(uint)(fVar63 < fVar8);
  auVar3._8_4_ = -(uint)(fVar82 < fVar8);
  auVar3._12_4_ = -(uint)(fVar10 < fVar8);
  auVar21._4_4_ = iStack_88;
  auVar21._0_4_ = iStack_88;
  auVar21._8_4_ = iStack_88;
  auVar21._12_4_ = iStack_88;
  auVar19._4_4_ = iStack_84;
  auVar19._0_4_ = iStack_84;
  auVar19._8_4_ = iStack_84;
  auVar19._12_4_ = iStack_84;
  auVar76._8_4_ = -(uint)(fVar9 < fVar53);
  auVar76._12_4_ = -(uint)(fVar9 < fVar59);
  auVar47._4_4_ = -(uint)(fVar16 < fVar9);
  auVar47._0_4_ = -(uint)(fVar15 < fVar9);
  auVar47._8_4_ = -(uint)(fVar17 < fVar9);
  auVar47._12_4_ = -(uint)(fVar18 < fVar9);
  auVar20._4_4_ = iStack_80;
  auVar20._0_4_ = iStack_80;
  auVar20._8_4_ = iStack_80;
  auVar20._12_4_ = iStack_80;
  auVar47 = (auVar70 | auVar4) & auVar21 | (auVar74 | auVar3) & auVar19 |
            auVar51 | auVar66 | auVar57 | auVar38 | (auVar76 | auVar47) & auVar20 | auVar61;
  uVar26 = auVar47._0_4_ >> 0x1f;
  uVar33 = auVar47._4_4_ >> 0x1f;
  uVar40 = auVar47._8_4_ >> 0x1f;
  uVar42 = auVar47._12_4_ >> 0x1f;
  fVar43 = *(float *)(local_70 + 8);
  afStack_c8[0] = (float)(uVar26 & _LC6 | ~uVar26 & (uint)auVar36._0_4_);
  afStack_c8[1] = (float)(uVar33 & _UNK_00108174 | ~uVar33 & (uint)auVar36._4_4_);
  afStack_c8[2] = (float)(uVar40 & _UNK_00108178 | ~uVar40 & (uint)auVar36._8_4_);
  afStack_c8[3] = (float)(uVar42 & _UNK_0010817c | ~uVar42 & (uint)auVar36._12_4_);
  auVar39._4_4_ = -(uint)(afStack_c8[1] < fVar43);
  auVar39._0_4_ = -(uint)(afStack_c8[0] < fVar43);
  auVar39._8_4_ = -(uint)(afStack_c8[2] < fVar43);
  auVar39._12_4_ = -(uint)(afStack_c8[3] < fVar43);
  iVar27 = movmskps((int)pfVar28,auVar39);
  if (iVar27 != 0) {
    uVar26 = (int)*(undefined8 *)(this + 0x50) - iVar31;
    if (4 < uVar26) {
      uVar26 = 4;
    }
    if ((int)*(undefined8 *)(this + 0x50) != iVar31) {
      lVar30 = 0;
      do {
        pSVar24 = pSStack_58;
        pCVar23 = local_70;
        if (afStack_c8[lVar30] <= fVar43 && fVar43 != afStack_c8[lVar30]) {
          uVar33 = iVar31 + (int)lVar30;
          iStack_cc = uStack_60 + local_68._4_4_;
          puVar1 = (undefined8 *)(*(long *)(this + 0x60) + (ulong)uVar33 * 0x28);
          fVar8 = *(float *)(puVar1 + 1);
          fVar9 = *(float *)((long)puVar1 + 0xc);
          fVar35 = *(float *)(puVar1 + 2);
          bVar29 = (byte)((ulong)local_68 >> 0x20);
          uStack_d0 = ~((int)(1L << ((byte)uStack_60 & 0x3f)) + -1 << (bVar29 & 0x1f)) &
                      (uint)local_68 | uVar33 << (bVar29 & 0x1f);
          fVar34 = __LC13;
          uVar33 = _UNK_00108194;
          fVar43 = _UNK_00108198;
          fVar58 = _LC17;
          if (*(char *)((long)puVar1 + 0x24) == '\0') {
            fVar58 = *(float *)((long)puVar1 + 0x14);
            fVar34 = *(float *)((long)puVar1 + 0x14);
            uVar33 = *(uint *)(puVar1 + 3);
            fVar43 = *(float *)((long)puVar1 + 0x1c);
            fVar62 = _LC17 - (fVar43 * fVar43 +
                             *(float *)(puVar1 + 3) * *(float *)(puVar1 + 3) + fVar58 * fVar58 + 0.0
                             );
            fVar58 = 0.0;
            if (0.0 <= fVar62) {
              fVar58 = SQRT(fVar62);
            }
          }
          fVar34 = (float)((uint)fVar34 ^ _LC23);
          fVar41 = (float)(uVar33 ^ _UNK_001081a4);
          fVar43 = (float)((uint)fVar43 ^ _UNK_001081a8);
          fVar58 = (float)((uint)fVar58 ^ _UNK_001081ac);
          this_00 = (MutableCompoundShape *)*puVar1;
          fVar52 = fVar34 + fVar34;
          fVar71 = fVar41 + fVar41;
          fVar62 = fVar58 * (fVar43 + fVar43);
          fVar72 = fVar43 * (fVar43 + fVar43);
          fVar59 = fVar43 * fVar52 + fVar71 * fVar58;
          fVar81 = fVar43 * fVar71 - fVar52 * fVar58;
          fVar53 = fVar52 * fVar58 + fVar43 * fVar71;
          fVar63 = (_LC17 - fVar34 * fVar52) - fVar41 * fVar71;
          fVar49 = fVar41 * fVar52 + fVar62;
          fVar62 = fVar41 * fVar52 - fVar62;
          fVar45 = (_LC17 - fVar41 * fVar71) - fVar72;
          fVar82 = (_LC17 - fVar72) - fVar34 * fVar52;
          fVar34 = fVar43 * fVar52 - fVar71 * fVar58;
          fVar58 = 0.0 - (fVar8 * fVar45 + fVar9 * fVar62 + fVar35 * fVar59);
          fVar41 = 0.0 - (fVar8 * fVar49 + fVar9 * fVar82 + fVar35 * fVar81);
          fVar71 = 0.0 - (fVar8 * fVar34 + fVar9 * fVar53 + fVar35 * fVar63);
          fVar43 = *(float *)local_78;
          fVar8 = *(float *)(local_78 + 4);
          fVar9 = *(float *)(local_78 + 8);
          fVar35 = fVar43 + *(float *)(local_78 + 0x10);
          fVar52 = fVar8 + *(float *)(local_78 + 0x14);
          fVar72 = fVar9 + *(float *)(local_78 + 0x18);
          aRStack_b8._0_4_ = fVar43 * fVar45 + fVar8 * fVar62 + fVar9 * fVar59 + fVar58;
          aRStack_b8._4_4_ = fVar43 * fVar49 + fVar8 * fVar82 + fVar9 * fVar81 + fVar41;
          aRStack_b8._8_4_ = fVar43 * fVar34 + fVar8 * fVar53 + fVar9 * fVar63 + fVar71;
          aRStack_b8._12_4_ = fVar43 * 0.0 + fVar8 * 0.0 + fVar9 * 0.0 + 1.0;
          fStack_a8 = (fVar72 * fVar59 + fVar45 * fVar35 + fVar52 * fVar62 + fVar58) -
                      aRStack_b8._0_4_;
          fStack_a4 = (fVar72 * fVar81 + fVar49 * fVar35 + fVar52 * fVar82 + fVar41) -
                      aRStack_b8._4_4_;
          fStack_a0 = (fVar72 * fVar63 + fVar34 * fVar35 + fVar52 * fVar53 + fVar71) -
                      aRStack_b8._8_4_;
          fStack_9c = (fVar72 * 0.0 + fVar35 * 0.0 + fVar52 * 0.0 + 1.0) - aRStack_b8._12_4_;
          if (*(code **)(*(long *)this_00 + 0xa0) == CastRay) {
            cVar25 = (**(code **)(*(long *)pSStack_58 + 0x10))(pSStack_58,this_00,&uStack_d0);
            if (cVar25 != '\0') {
              CastRay(this_00,aRStack_b8,(RayCastSettings *)&uStack_5c,
                      (SubShapeIDCreator *)CONCAT44(iStack_cc,uStack_d0),pCVar23,pSVar24);
            }
          }
          else {
            (**(code **)(*(long *)this_00 + 0xa0))
                      (this_00,aRStack_b8,&uStack_5c,&uStack_d0,local_70);
          }
          if (*(float *)(local_70 + 8) <= 0.0) goto LAB_001020b8;
        }
        lVar30 = lVar30 + 1;
        if (uVar26 <= (uint)lVar30) goto LAB_001020b8;
        fVar43 = *(float *)(local_70 + 8);
      } while( true );
    }
  }
  if (iVar2 != iVar31 + 4) goto LAB_00101aa9;
  goto LAB_001020d8;
LAB_001020b8:
  if (iVar2 == iVar31 + 4) goto LAB_001020d8;
LAB_00101aa9:
  iVar31 = iVar31 + 4;
  lVar32 = lVar32 + 0x60;
  goto LAB_00101acb;
}



/* JPH::MutableCompoundShape::CastRay(JPH::RayCast const&, JPH::RayCastSettings const&,
   JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay>&, JPH::ShapeFilter const&) const */

void __thiscall
JPH::MutableCompoundShape::CastRay
          (MutableCompoundShape *this,RayCast *param_1,RayCastSettings *param_2,
          SubShapeIDCreator *param_3,CollisionCollector *param_4,ShapeFilter *param_5)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_5 + 0x10))(param_5,this,param_3);
  if (cVar1 == '\0') {
    return;
  }
  CastRay(this,param_1,param_2,*(SubShapeIDCreator **)param_3,param_4,param_5);
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::MutableCompoundShapeSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_1 != (void *)0x0) {
    plVar3 = *(long **)((long)param_1 + 0x50);
    *(undefined8 **)param_1 = &CollisionDispatch::sCastShape;
    if (plVar3 != (long *)0x0) {
      if ((*(long *)((long)param_1 + 0x40) != 0) &&
         (plVar4 = plVar3 + *(long *)((long)param_1 + 0x40) * 8, plVar3 < plVar4)) {
        do {
          plVar2 = (long *)plVar3[1];
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar1 = plVar2 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar2 + 8))();
            }
          }
          plVar2 = (long *)*plVar3;
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar1 = plVar2 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar2 + 0x18))();
            }
          }
          plVar3 = plVar3 + 8;
        } while (plVar3 < plVar4);
        plVar3 = *(long **)((long)param_1 + 0x50);
      }
      *(undefined8 *)((long)param_1 + 0x40) = 0;
      (*Free)(plVar3);
    }
    *(undefined8 **)param_1 = &CollisionDispatch::sCollideShape;
    if (*(char *)((long)param_1 + 0x38) == '\x01') {
      plVar3 = *(long **)((long)param_1 + 0x18);
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar4 = plVar3 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
    }
    else if ((*(char *)((long)param_1 + 0x38) == '\x02') &&
            (*(long *)((long)param_1 + 0x18) != (long)param_1 + 0x28)) {
      (*Free)();
    }
                    /* WARNING: Could not recover jumptable at 0x00102281. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MutableCompoundShape::sCastShapeVsCompound(JPH::ShapeCast const&, JPH::ShapeCastSettings
   const&, JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&, JPH::Mat44 const&,
   JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::ShapeCastResult, JPH::CollisionCollectorTraitsCastShape>&) */

void __thiscall
JPH::MutableCompoundShape::sCastShapeVsCompound
          (undefined8 param_1_00,undefined8 param_2_00,MutableCompoundShape *this,undefined8 param_1
          ,long param_2,long *param_3,undefined8 *param_7,undefined8 *param_8,undefined8 *param_9,
          long param_10)

{
  long *plVar1;
  MutableCompoundShape *pMVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long *plVar9;
  long lVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  float *pfVar15;
  byte bVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  long in_FS_OFFSET;
  uint uVar21;
  uint uVar27;
  undefined1 auVar22 [16];
  uint uVar26;
  uint uVar28;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar29;
  float fVar34;
  float fVar35;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar36;
  float fVar37;
  float fVar39;
  float fVar40;
  undefined1 auVar38 [16];
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar47;
  float fVar48;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar49;
  float fVar50;
  float fVar54;
  float fVar55;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar56;
  undefined1 auVar53 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar64;
  float fVar65;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar66;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar85;
  float fVar86;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  uint uStack_2a0;
  int iStack_29c;
  float afStack_298 [4];
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 auStack_268 [4];
  float afStack_264 [3];
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [16];
  undefined8 uStack_238;
  float fStack_230;
  float fStack_22c;
  float afStack_228 [16];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *aplStack_1a8 [2];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [16];
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  int iStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  MutableCompoundShape *local_c8;
  undefined8 local_c0;
  long *local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint uStack_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = param_1_00;
  local_c8 = this;
  local_d0 = param_2_00;
  local_f8 = (*(float *)(this + 0x80) + *(float *)(this + 0x70)) * _LC3;
  fStack_f4 = (*(float *)(this + 0x84) + *(float *)(this + 0x74)) * _LC3;
  fStack_f0 = (*(float *)(this + 0x88) + *(float *)(this + 0x78)) * _LC3;
  fStack_ec = (*(float *)(this + 0x8c) + *(float *)(this + 0x7c)) * _LC3;
  local_e8 = (*(float *)(this + 0x80) - *(float *)(this + 0x70)) * _LC3;
  fStack_e4 = (*(float *)(this + 0x84) - *(float *)(this + 0x74)) * _LC3;
  fStack_e0 = (*(float *)(this + 0x88) - *(float *)(this + 0x78)) * _LC3;
  fStack_dc = (*(float *)(this + 0x8c) - *(float *)(this + 0x7c)) * _LC3;
  local_c0 = param_1;
  local_b8 = param_3;
  local_a8 = *param_7;
  uStack_a0 = param_7[1];
  iVar12 = (int)*(undefined8 *)(param_2 + 0x50);
  local_b0 = param_10;
  local_98 = param_7[2];
  uStack_90 = param_7[3];
  local_68 = *param_8;
  uStack_60 = *param_9;
  local_88 = param_7[4];
  uStack_80 = param_7[5];
  local_78 = param_7[6];
  uStack_70 = param_7[7];
  uStack_58 = iVar12 - 1;
  if (uStack_58 != 0) {
    iVar20 = 0x1f;
    if (uStack_58 != 0) {
      for (; uStack_58 >> iVar20 == 0; iVar20 = iVar20 + -1) {
      }
    }
    uStack_58 = iVar20 + 1;
  }
  auVar33 = *(undefined1 (*) [16])(this + 0x60);
  uVar13 = iVar12 + 3U >> 2;
  auVar22._0_4_ = 0.0 - auVar33._0_4_;
  auVar22._4_4_ = 0.0 - auVar33._4_4_;
  auVar22._8_4_ = 0.0 - auVar33._8_4_;
  auVar22._12_4_ = 0.0 - auVar33._12_4_;
  auVar61._4_4_ = _LC17;
  auVar61._0_4_ = _LC17;
  auVar61._8_4_ = _LC17;
  auVar61._12_4_ = _LC17;
  auVar22 = maxps(auVar22,auVar33);
  uStack_108 = -(uint)(auVar22._0_4_ <= _LC15);
  uStack_104 = -(uint)(auVar22._4_4_ <= _LC15);
  uStack_100 = -(uint)(auVar22._8_4_ <= _LC15);
  iStack_fc = -(uint)(auVar22._12_4_ <= _LC15);
  uVar21 = (int)uStack_108 >> 0x1f;
  uVar26 = (int)uStack_104 >> 0x1f;
  uVar27 = (int)uStack_100 >> 0x1f;
  uVar28 = iStack_fc >> 0x1f;
  auVar46._0_4_ = uVar21 & (uint)_LC17;
  auVar46._4_4_ = uVar26 & (uint)_LC17;
  auVar46._8_4_ = uVar27 & (uint)_LC17;
  auVar46._12_4_ = uVar28 & (uint)_LC17;
  auVar52._0_4_ = ~uVar21 & (uint)auVar33._0_4_;
  auVar52._4_4_ = ~uVar26 & (uint)auVar33._4_4_;
  auVar52._8_4_ = ~uVar27 & (uint)auVar33._8_4_;
  auVar52._12_4_ = ~uVar28 & (uint)auVar33._12_4_;
  auStack_118 = divps(auVar61,auVar46 | auVar52);
  if (uVar13 == 0) {
LAB_00102df8:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  iVar12 = uVar13 * 4;
  iVar20 = 0;
  lVar19 = 0;
LAB_001024cb:
  pfVar15 = (float *)(*(long *)(param_2 + 0x80) + lVar19);
  auVar45._0_8_ = CONCAT44(pfVar15[1] * (float)local_d8,*pfVar15 * (float)local_d8);
  auVar45._8_4_ = pfVar15[2] * (float)local_d8;
  auVar45._12_4_ = pfVar15[3] * (float)local_d8;
  auVar30._0_4_ = (float)local_d8 * pfVar15[0xc];
  auVar30._4_4_ = (float)local_d8 * pfVar15[0xd];
  auVar30._8_4_ = (float)local_d8 * pfVar15[0xe];
  auVar30._12_4_ = (float)local_d8 * pfVar15[0xf];
  auVar67._8_4_ = auVar45._8_4_;
  auVar67._0_8_ = auVar45._0_8_;
  auVar67._12_4_ = auVar45._12_4_;
  auVar68 = minps(auVar67,auVar30);
  auVar46 = maxps(auVar45,auVar30);
  auVar38._0_8_ = CONCAT44(pfVar15[5] * local_d8._4_4_,pfVar15[4] * local_d8._4_4_);
  auVar38._8_4_ = pfVar15[6] * local_d8._4_4_;
  auVar38._12_4_ = pfVar15[7] * local_d8._4_4_;
  auVar31._0_4_ = local_d8._4_4_ * pfVar15[0x10];
  auVar31._4_4_ = local_d8._4_4_ * pfVar15[0x11];
  auVar31._8_4_ = local_d8._4_4_ * pfVar15[0x12];
  auVar31._12_4_ = local_d8._4_4_ * pfVar15[0x13];
  auVar60._8_4_ = auVar38._8_4_;
  auVar60._0_8_ = auVar38._0_8_;
  auVar60._12_4_ = auVar38._12_4_;
  auVar61 = minps(auVar60,auVar31);
  auVar22 = maxps(auVar38,auVar31);
  auVar32._0_8_ = CONCAT44(pfVar15[9] * (float)local_d0,pfVar15[8] * (float)local_d0);
  auVar32._8_4_ = pfVar15[10] * (float)local_d0;
  auVar32._12_4_ = pfVar15[0xb] * (float)local_d0;
  auVar23._0_4_ = (float)local_d0 * pfVar15[0x14];
  auVar23._4_4_ = (float)local_d0 * pfVar15[0x15];
  auVar23._8_4_ = (float)local_d0 * pfVar15[0x16];
  auVar23._12_4_ = (float)local_d0 * pfVar15[0x17];
  auVar51._8_4_ = auVar32._8_4_;
  auVar51._0_8_ = auVar32._0_8_;
  auVar51._12_4_ = auVar32._12_4_;
  auVar52 = minps(auVar51,auVar23);
  auVar33 = maxps(auVar32,auVar23);
  fVar76 = auVar68._0_4_ - local_e8;
  fVar79 = auVar68._4_4_ - local_e8;
  fVar80 = auVar68._8_4_ - local_e8;
  fVar81 = auVar68._12_4_ - local_e8;
  fVar44 = auVar46._0_4_ + local_e8;
  fVar47 = auVar46._4_4_ + local_e8;
  fVar48 = auVar46._8_4_ + local_e8;
  fVar49 = auVar46._12_4_ + local_e8;
  fVar59 = auVar61._0_4_ - fStack_e4;
  fVar64 = auVar61._4_4_ - fStack_e4;
  fVar65 = auVar61._8_4_ - fStack_e4;
  fVar66 = auVar61._12_4_ - fStack_e4;
  fVar37 = auVar22._0_4_ + fStack_e4;
  fVar39 = auVar22._4_4_ + fStack_e4;
  fVar40 = auVar22._8_4_ + fStack_e4;
  fVar41 = auVar22._12_4_ + fStack_e4;
  fVar50 = auVar52._0_4_ - fStack_e0;
  fVar54 = auVar52._4_4_ - fStack_e0;
  fVar55 = auVar52._8_4_ - fStack_e0;
  fVar56 = auVar52._12_4_ - fStack_e0;
  fVar29 = auVar33._0_4_ + fStack_e0;
  fVar34 = auVar33._4_4_ + fStack_e0;
  fVar35 = auVar33._8_4_ + fStack_e0;
  fVar36 = auVar33._12_4_ + fStack_e0;
  fVar75 = auStack_118._0_4_;
  fVar85 = auStack_118._4_4_;
  fVar86 = auStack_118._8_4_;
  auVar62._0_8_ = CONCAT44((fVar64 - fStack_f4) * fVar85,(fVar59 - fStack_f4) * fVar85);
  auVar62._8_4_ = (fVar65 - fStack_f4) * fVar85;
  auVar62._12_4_ = (fVar66 - fStack_f4) * fVar85;
  auVar69._0_8_ = CONCAT44((fVar79 - local_f8) * fVar75,(fVar76 - local_f8) * fVar75);
  auVar69._8_4_ = (fVar80 - local_f8) * fVar75;
  auVar69._12_4_ = (fVar81 - local_f8) * fVar75;
  fVar72 = (fVar44 - local_f8) * fVar75;
  fVar73 = (fVar47 - local_f8) * fVar75;
  fVar74 = (fVar48 - local_f8) * fVar75;
  fVar75 = (fVar49 - local_f8) * fVar75;
  auVar58._0_8_ = CONCAT44((fVar54 - fStack_f0) * fVar86,(fVar50 - fStack_f0) * fVar86);
  auVar58._8_4_ = (fVar55 - fStack_f0) * fVar86;
  auVar58._12_4_ = (fVar56 - fStack_f0) * fVar86;
  auVar77._8_4_ = auVar62._8_4_;
  auVar77._0_8_ = auVar62._0_8_;
  auVar77._12_4_ = auVar62._12_4_;
  auVar42._8_4_ = auVar69._8_4_;
  auVar42._0_8_ = auVar69._0_8_;
  auVar42._12_4_ = auVar69._12_4_;
  auVar71._0_4_ = (fVar37 - fStack_f4) * fVar85;
  auVar71._4_4_ = (fVar39 - fStack_f4) * fVar85;
  auVar71._8_4_ = (fVar40 - fStack_f4) * fVar85;
  auVar71._12_4_ = (fVar41 - fStack_f4) * fVar85;
  auVar33._4_4_ = fVar73;
  auVar33._0_4_ = fVar72;
  auVar33._8_4_ = fVar74;
  auVar33._12_4_ = fVar75;
  auVar33 = minps(auVar42,auVar33);
  auVar68._4_4_ = fVar73;
  auVar68._0_4_ = fVar72;
  auVar68._8_4_ = fVar74;
  auVar68._12_4_ = fVar75;
  auVar46 = maxps(auVar69,auVar68);
  auVar70._0_4_ = (fVar29 - fStack_f0) * fVar86;
  auVar70._4_4_ = (fVar34 - fStack_f0) * fVar86;
  auVar70._8_4_ = (fVar35 - fStack_f0) * fVar86;
  auVar70._12_4_ = (fVar36 - fStack_f0) * fVar86;
  auVar52 = minps(auVar77,auVar71);
  auVar22 = maxps(auVar62,auVar71);
  uVar13 = (int)uStack_108 >> 0x1f;
  auVar82._0_4_ = ~uVar13 & auVar33._0_4_;
  auVar82._4_4_ = ~uVar13 & auVar33._4_4_;
  auVar82._8_4_ = ~uVar13 & auVar33._8_4_;
  auVar82._12_4_ = ~uVar13 & auVar33._12_4_;
  auVar43._0_4_ = (uint)_LC8 & uVar13;
  auVar43._4_4_ = _UNK_00108184 & uVar13;
  auVar43._8_4_ = _UNK_00108188 & uVar13;
  auVar43._12_4_ = _UNK_0010818c & uVar13;
  auVar24._0_4_ = uVar13 & _LC6;
  auVar24._4_4_ = uVar13 & _UNK_00108174;
  auVar24._8_4_ = uVar13 & _UNK_00108178;
  auVar24._12_4_ = uVar13 & _UNK_0010817c;
  auVar6._4_4_ = ~uVar13 & auVar46._4_4_;
  auVar6._0_4_ = ~uVar13 & auVar46._0_4_;
  auVar6._8_4_ = ~uVar13 & auVar46._8_4_;
  auVar6._12_4_ = ~uVar13 & auVar46._12_4_;
  uVar13 = (int)uStack_104 >> 0x1f;
  auVar57._0_4_ = uVar13 & _LC6;
  auVar57._4_4_ = uVar13 & _UNK_00108174;
  auVar57._8_4_ = uVar13 & _UNK_00108178;
  auVar57._12_4_ = uVar13 & _UNK_0010817c;
  auVar83._8_4_ = auVar58._8_4_;
  auVar83._0_8_ = auVar58._0_8_;
  auVar83._12_4_ = auVar58._12_4_;
  auVar46 = maxps(auVar58,auVar70);
  auVar61 = minps(auVar83,auVar70);
  auVar7._4_4_ = ~uVar13 & auVar22._4_4_;
  auVar7._0_4_ = ~uVar13 & auVar22._0_4_;
  auVar7._8_4_ = ~uVar13 & auVar22._8_4_;
  auVar7._12_4_ = ~uVar13 & auVar22._12_4_;
  auVar33 = minps(auVar24 | auVar6,auVar57 | auVar7);
  auVar8._4_4_ = _UNK_00108184 & uVar13 | ~uVar13 & auVar52._4_4_;
  auVar8._0_4_ = (uint)_LC8 & uVar13 | ~uVar13 & auVar52._0_4_;
  auVar8._8_4_ = _UNK_00108188 & uVar13 | ~uVar13 & auVar52._8_4_;
  auVar8._12_4_ = _UNK_0010818c & uVar13 | ~uVar13 & auVar52._12_4_;
  auVar22 = maxps(auVar43 | auVar82,auVar8);
  uVar13 = (int)uStack_100 >> 0x1f;
  auVar84._0_4_ = ~uVar13 & auVar61._0_4_;
  auVar84._4_4_ = ~uVar13 & auVar61._4_4_;
  auVar84._8_4_ = ~uVar13 & auVar61._8_4_;
  auVar84._12_4_ = ~uVar13 & auVar61._12_4_;
  auVar78._0_4_ = (uint)_LC8 & uVar13;
  auVar78._4_4_ = _UNK_00108184 & uVar13;
  auVar78._8_4_ = _UNK_00108188 & uVar13;
  auVar78._12_4_ = _UNK_0010818c & uVar13;
  auVar53._0_4_ = uVar13 & _LC6;
  auVar53._4_4_ = uVar13 & _UNK_00108174;
  auVar53._8_4_ = uVar13 & _UNK_00108178;
  auVar53._12_4_ = uVar13 & _UNK_0010817c;
  auVar63._0_4_ = ~uVar13 & auVar46._0_4_;
  auVar63._4_4_ = ~uVar13 & auVar46._4_4_;
  auVar63._8_4_ = ~uVar13 & auVar46._8_4_;
  auVar63._12_4_ = ~uVar13 & auVar46._12_4_;
  auVar22 = maxps(auVar22,auVar78 | auVar84);
  auVar33 = minps(auVar33,auVar53 | auVar63);
  uVar13 = (int)(-(uint)(local_f8 < fVar76 || fVar44 < local_f8) & uStack_108 |
                 -(uint)(fStack_f4 < fVar59 || fVar37 < fStack_f4) & uStack_104 |
                 -(uint)((auVar33._0_4_ < auVar22._0_4_ || auVar33._0_4_ < 0.0) ||
                        (fVar44 < fVar76 || fVar37 < fVar59)) |
                -(uint)(fStack_f0 < fVar50 || fVar29 < fStack_f0) & uStack_100 |
                -(uint)(fVar29 < fVar50)) >> 0x1f;
  uVar21 = (int)(-(uint)(local_f8 < fVar79 || fVar47 < local_f8) & uStack_108 |
                 -(uint)(fStack_f4 < fVar64 || fVar39 < fStack_f4) & uStack_104 |
                 -(uint)((auVar33._4_4_ < auVar22._4_4_ || auVar33._4_4_ < 0.0) ||
                        (fVar47 < fVar79 || fVar39 < fVar64)) |
                -(uint)(fStack_f0 < fVar54 || fVar34 < fStack_f0) & uStack_100 |
                -(uint)(fVar34 < fVar54)) >> 0x1f;
  uVar26 = (int)(-(uint)(local_f8 < fVar80 || fVar48 < local_f8) & uStack_108 |
                 -(uint)(fStack_f4 < fVar65 || fVar40 < fStack_f4) & uStack_104 |
                 -(uint)((auVar33._8_4_ < auVar22._8_4_ || auVar33._8_4_ < 0.0) ||
                        (fVar48 < fVar80 || fVar40 < fVar65)) |
                -(uint)(fStack_f0 < fVar55 || fVar35 < fStack_f0) & uStack_100 |
                -(uint)(fVar35 < fVar55)) >> 0x1f;
  uVar27 = (int)(-(uint)(local_f8 < fVar81 || fVar49 < local_f8) & uStack_108 |
                 -(uint)(fStack_f4 < fVar66 || fVar41 < fStack_f4) & uStack_104 |
                 -(uint)((auVar33._12_4_ < auVar22._12_4_ || auVar33._12_4_ < 0.0) ||
                        (fVar49 < fVar81 || fVar41 < fVar66)) |
                -(uint)(fStack_f0 < fVar56 || fVar36 < fStack_f0) & uStack_100 |
                -(uint)(fVar36 < fVar56)) >> 0x1f;
  afStack_298[0] = (float)(uVar13 & _LC6 | ~uVar13 & (uint)auVar22._0_4_);
  afStack_298[1] = (float)(uVar21 & _UNK_00108174 | ~uVar21 & (uint)auVar22._4_4_);
  afStack_298[2] = (float)(uVar26 & _UNK_00108178 | ~uVar26 & (uint)auVar22._8_4_);
  afStack_298[3] = (float)(uVar27 & _UNK_0010817c | ~uVar27 & (uint)auVar22._12_4_);
  fVar29 = *(float *)(local_b0 + 8);
  fVar34 = (float)((uint)fVar29 & -(uint)(_LC25 < fVar29) | ~-(uint)(_LC25 < fVar29) & (uint)_LC25);
  auVar25._4_4_ = -(uint)(afStack_298[1] < fVar34);
  auVar25._0_4_ = -(uint)(afStack_298[0] < fVar34);
  auVar25._8_4_ = -(uint)(afStack_298[2] < fVar34);
  auVar25._12_4_ = -(uint)(afStack_298[3] < fVar34);
  iVar14 = movmskps((int)pfVar15,auVar25);
  if (iVar14 != 0) {
    iVar14 = (int)*(undefined8 *)(param_2 + 0x50);
    uVar13 = iVar14 - iVar20;
    if (4 < uVar13) {
      uVar13 = 4;
    }
    if (iVar14 != iVar20) {
      lVar18 = 0;
      do {
        if (fVar29 <= _LC25) {
          fVar29 = _LC25;
        }
        if (afStack_298[lVar18] < fVar29) {
          uVar21 = iVar20 + (int)lVar18;
          iStack_29c = uStack_58 + uStack_60._4_4_;
          plVar1 = (long *)(*(long *)(param_2 + 0x60) + (ulong)uVar21 * 0x28);
          fVar29 = *(float *)(plVar1 + 1) * (float)local_d8;
          fVar34 = *(float *)((long)plVar1 + 0xc) * local_d8._4_4_;
          fStack_230 = *(float *)(plVar1 + 2) * (float)local_d0;
          bVar16 = (byte)((ulong)uStack_60 >> 0x20);
          uStack_2a0 = ~((int)(1L << ((byte)uStack_58 & 0x3f)) + -1 << (bVar16 & 0x1f)) &
                       (uint)uStack_60 | uVar21 << (bVar16 & 0x1f);
          if (*(char *)((long)plVar1 + 0x24) == '\0') {
            fVar36 = *(float *)((long)plVar1 + 0x14);
            fVar37 = *(float *)(plVar1 + 3);
            fVar44 = 0.0;
            fVar39 = *(float *)((long)plVar1 + 0x1c);
            fVar35 = _LC17 - (fVar39 * fVar39 + fVar37 * fVar37 + fVar36 * fVar36 + 0.0);
            if (0.0 <= fVar35) {
              fVar44 = SQRT(fVar35);
            }
            fVar54 = fVar37 + fVar37;
            fVar49 = fVar36 + fVar36;
            fVar50 = fVar39 * (fVar39 + fVar39);
            fVar48 = fVar44 * (fVar39 + fVar39);
            fVar41 = fVar39 * fVar54 - fVar49 * fVar44;
            fVar35 = fVar49 * fVar44 + fVar39 * fVar54;
            fVar40 = fVar39 * fVar49 + fVar54 * fVar44;
            fVar47 = fVar39 * fVar49 - fVar54 * fVar44;
            fVar39 = fVar37 * fVar49 - fVar48;
            fVar48 = fVar37 * fVar49 + fVar48;
            fVar44 = (_LC17 - fVar50) - fVar36 * fVar49;
            fVar36 = (_LC17 - fVar36 * fVar49) - fVar37 * fVar54;
            fVar37 = (_LC17 - fVar37 * fVar54) - fVar50;
          }
          else {
            fVar48 = 0.0;
            fVar47 = 0.0;
            fVar39 = 0.0;
            fVar35 = 0.0;
            fVar40 = 0.0;
            fVar41 = 0.0;
            fVar44 = _LC17;
            fVar36 = _LC17;
            fVar37 = _LC17;
          }
          register0x00001384 = fVar48;
          auStack_268 = fVar37;
          register0x00001388 = fVar47;
          register0x0000138c = 0;
          uStack_238 = CONCAT44(fVar34,fVar29);
          lVar17 = 0;
          auStack_258._4_4_ = fVar44;
          auStack_258._0_4_ = fVar39;
          fStack_22c = _LC17;
          auStack_258._8_4_ = fVar35;
          auStack_258._12_4_ = 0;
          auStack_248._4_4_ = fVar41;
          auStack_248._0_4_ = fVar40;
          auStack_248._8_4_ = fVar36;
          auStack_248._12_4_ = 0;
          do {
            fVar49 = *(float *)(auStack_268 + lVar17);
            fVar50 = *(float *)(auStack_268 + lVar17 + 4);
            fVar54 = *(float *)(auStack_268 + lVar17 + 8);
            fVar55 = *(float *)(auStack_268 + lVar17 + 0xc);
            *(float *)((long)afStack_228 + lVar17) =
                 fVar55 * (float)local_78 +
                 fVar54 * (float)local_88 + fVar50 * (float)local_98 + fVar49 * (float)local_a8;
            *(float *)((long)afStack_228 + lVar17 + 4) =
                 fVar55 * local_78._4_4_ +
                 fVar54 * local_88._4_4_ + fVar50 * local_98._4_4_ + fVar49 * local_a8._4_4_;
            *(float *)((long)afStack_228 + lVar17 + 8) =
                 fVar55 * (float)uStack_70 +
                 fVar54 * (float)uStack_80 + fVar50 * (float)uStack_90 + fVar49 * (float)uStack_a0;
            *(float *)((long)afStack_228 + lVar17 + 0xc) =
                 fVar55 * uStack_70._4_4_ +
                 fVar54 * uStack_80._4_4_ + fVar50 * uStack_90._4_4_ + fVar49 * uStack_a0._4_4_;
            lVar17 = lVar17 + 0x10;
          } while (lVar17 != 0x40);
          lVar17 = 0;
          do {
            pMVar2 = local_c8 + lVar17 + 0x20;
            fVar49 = *(float *)pMVar2;
            fVar50 = *(float *)(pMVar2 + 4);
            fVar54 = *(float *)(pMVar2 + 8);
            fVar55 = *(float *)(pMVar2 + 0xc);
            *(float *)((long)&uStack_1e8 + lVar17) =
                 fVar55 * (0.0 - (fVar29 * fVar37 + fVar34 * fVar48 + fStack_230 * fVar47)) +
                 fVar49 * fVar37 + fVar50 * fVar48 + fVar54 * fVar47;
            *(float *)((long)&uStack_1e8 + lVar17 + 4) =
                 fVar55 * (0.0 - (fVar29 * fVar39 + fVar34 * fVar44 + fStack_230 * fVar35)) +
                 fVar49 * fVar39 + fVar50 * fVar44 + fVar54 * fVar35;
            *(float *)((long)&uStack_1e0 + lVar17) =
                 fVar55 * (0.0 - (fVar29 * fVar40 + fVar34 * fVar41 + fStack_230 * fVar36)) +
                 fVar49 * fVar40 + fVar50 * fVar41 + fVar54 * fVar36;
            *(float *)((long)&uStack_1e0 + lVar17 + 4) =
                 fVar55 * 1.0 + fVar49 * 0.0 + fVar50 * 0.0 + fVar54 * 0.0;
            lVar17 = lVar17 + 0x10;
          } while (lVar17 != 0x40);
          fVar29 = *(float *)(local_c8 + 0x60);
          fVar34 = *(float *)(local_c8 + 100);
          fVar49 = *(float *)(local_c8 + 0x68);
          plVar3 = *(long **)local_c8;
          uVar4 = *(undefined8 *)(local_c8 + 0x10);
          uVar5 = *(undefined8 *)(local_c8 + 0x18);
          (**(code **)(*plVar3 + 0x30))(uVar4,uVar5,&uStack_288,plVar3);
          lVar10 = local_b0;
          plVar9 = local_b8;
          uStack_188 = uStack_1e8;
          uStack_180 = uStack_1e0;
          uStack_178 = uStack_1d8;
          uStack_170 = uStack_1d0;
          uStack_168 = uStack_1c8;
          uStack_160 = uStack_1c0;
          uStack_158 = uStack_1b8;
          uStack_150 = uStack_1b0;
          uStack_138 = uStack_288;
          uStack_130 = uStack_280;
          uStack_128 = uStack_278;
          uStack_120 = uStack_270;
          aplStack_1a8[0] = plVar3;
          uStack_198 = uVar4;
          uStack_190 = uVar5;
          fStack_148 = fVar29 * fVar37 + fVar34 * fVar48 + fVar49 * fVar47;
          fStack_144 = fVar29 * fVar39 + fVar34 * fVar44 + fVar49 * fVar35;
          fStack_140 = fVar29 * fVar40 + fVar34 * fVar41 + fVar49 * fVar36;
          fStack_13c = fVar29 * 0.0 + fVar34 * 0.0 + fVar49 * 0.0;
          auVar33 = CompoundShape::SubShape::TransformScale(local_d8,local_d0,plVar1);
          uVar4 = local_c0;
          lVar17 = *plVar1;
          cVar11 = (**(code **)(*plVar9 + 0x18))(plVar9,plVar3,&local_68,lVar17);
          if (cVar11 != '\0') {
            (*(code *)(&CollisionDispatch::sCastShape)
                      [(ulong)*(byte *)(lVar17 + 0x19) +
                       (ulong)*(byte *)((long)aplStack_1a8[0] + 0x19) * 0x22])
                      (auVar33._0_8_,auVar33._8_8_,aplStack_1a8,uVar4,lVar17,plVar9,afStack_228,
                       &local_68,&uStack_2a0,lVar10);
          }
          if (*(float *)(local_b0 + 8) <= _LC8) goto LAB_00102dc8;
        }
        lVar18 = lVar18 + 1;
        if (uVar13 <= (uint)lVar18) goto LAB_00102dc8;
        fVar29 = *(float *)(local_b0 + 8);
      } while( true );
    }
  }
  if (iVar20 + 4 != iVar12) goto LAB_001024a1;
  goto LAB_00102df8;
LAB_00102dc8:
  if (iVar20 + 4 == iVar12) goto LAB_00102df8;
LAB_001024a1:
  iVar20 = iVar20 + 4;
  lVar19 = lVar19 + 0x60;
  goto LAB_001024cb;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MutableCompoundShape::CollectTransformedShapes(JPH::AABox const&, JPH::Vec3, JPH::Quat,
   JPH::Vec3, JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::TransformedShape,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::ShapeFilter const&) const */

void JPH::MutableCompoundShape::CollectTransformedShapes
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long param_1,float *param_8,undefined8 *param_9
               ,long param_10,long *param_11)

{
  long *plVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  long lVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  float *pfVar12;
  undefined8 *puVar13;
  float *pfVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  float *pfVar18;
  int iVar19;
  long lVar20;
  long in_FS_OFFSET;
  float fVar21;
  float fVar22;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
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
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
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
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  float local_258;
  float local_238;
  float fStack_1d8;
  float local_1c4;
  uint uStack_1b0;
  int iStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  float afStack_198 [7];
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined1 auStack_138 [4];
  float afStack_134 [11];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [8];
  float fStack_e0;
  undefined1 local_d8 [8];
  float fStack_d0;
  undefined1 local_c8 [8];
  float fStack_c0;
  undefined8 local_b8;
  float local_b0;
  undefined4 local_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  int local_58;
  long *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar8 = (**(code **)(*param_11 + 0x10))(param_11,param_1);
  if (cVar8 != '\0') {
    local_2d8._0_4_ = (uint)param_3;
    local_2d8._4_4_ = (uint)((ulong)param_3 >> 0x20);
    uStack_2d0._0_4_ = (uint)param_4;
    uStack_2d0._4_4_ = (uint)((ulong)param_4 >> 0x20);
    fVar21 = (float)((uint)local_2d8 ^ _LC23);
    fVar25 = (float)(local_2d8._4_4_ ^ _UNK_001081a4);
    fVar26 = (float)((uint)uStack_2d0 ^ _UNK_001081a8);
    fVar27 = (float)(uStack_2d0._4_4_ ^ _UNK_001081ac);
    local_108 = *(undefined8 *)param_8;
    uStack_100 = *(undefined8 *)(param_8 + 2);
    local_f8 = *(undefined8 *)(param_8 + 4);
    uStack_f0 = *(undefined8 *)(param_8 + 6);
    fVar53 = fVar21 + fVar21;
    fVar40 = fVar25 + fVar25;
    fStack_1d8 = fVar26 * (fVar26 + fVar26);
    fVar22 = fVar27 * (fVar26 + fVar26);
    fVar81 = fVar26 * fVar53 + fVar40 * fVar27;
    fVar43 = fVar26 * fVar53 - fVar40 * fVar27;
    local_238 = fVar26 * fVar40 - fVar53 * fVar27;
    local_258 = (_LC17 - fVar21 * fVar53) - fVar25 * fVar40;
    local_c8._4_4_ = local_238;
    local_c8._0_4_ = fVar81;
    fVar26 = fVar53 * fVar27 + fVar26 * fVar40;
    fStack_c0 = local_258;
    register0x0000154c = 0;
    fVar21 = (_LC17 - fStack_1d8) - fVar21 * fVar53;
    local_1c4 = fVar25 * fVar53 - fVar22;
    local_d8._4_4_ = fVar21;
    local_d8._0_4_ = local_1c4;
    local_2e8._0_4_ = (float)param_1_00;
    fVar22 = fVar25 * fVar53 + fVar22;
    fStack_d0 = fVar26;
    register0x000014cc = 0;
    fStack_1d8 = (_LC17 - fVar25 * fVar40) - fStack_1d8;
    local_e8._4_4_ = fVar22;
    local_e8._0_4_ = fStack_1d8;
    fStack_e0 = fVar43;
    register0x0000158c = 0;
    local_2e8._4_4_ = (float)((ulong)param_1_00 >> 0x20);
    uStack_2e0._0_4_ = (float)param_2;
    fVar25 = (*param_8 + param_8[4]) * _LC3;
    fVar27 = (param_8[1] + param_8[5]) * _UNK_00108164;
    fVar40 = (param_8[2] + param_8[6]) * _UNK_00108168;
    local_ac = 0x3f800000;
    local_78 = param_5;
    local_b8 = CONCAT44(fVar27 * fVar21 + fVar25 * fVar22 + fVar40 * local_238 +
                        (0.0 - ((float)local_2e8 * fVar22 + local_2e8._4_4_ * fVar21 +
                               (float)uStack_2e0 * local_238)),
                        fVar27 * local_1c4 + fVar25 * fStack_1d8 + fVar40 * fVar81 +
                        (0.0 - ((float)local_2e8 * fStack_1d8 + local_2e8._4_4_ * local_1c4 +
                               (float)uStack_2e0 * fVar81)));
    iVar19 = (int)*(undefined8 *)(param_1 + 0x50);
    local_70 = param_6;
    local_68 = *param_9;
    local_60 = param_10;
    local_b0 = fVar27 * fVar26 + fVar25 * fVar43 + fVar40 * local_258 +
               (0.0 - ((float)local_2e8 * fVar43 + local_2e8._4_4_ * fVar26 +
                      (float)uStack_2e0 * local_258));
    local_a8 = (param_8[4] - *param_8) * _LC3;
    fStack_a4 = (param_8[5] - param_8[1]) * _UNK_00108164;
    fStack_a0 = (param_8[6] - param_8[2]) * _UNK_00108168;
    fStack_9c = (param_8[7] - param_8[3]) * _UNK_0010816c;
    local_98 = param_1_00;
    uStack_90 = param_2;
    local_88 = param_3;
    uStack_80 = param_4;
    uVar15 = iVar19 - 1;
    if (uVar15 == 0) {
      local_50 = param_11;
      uVar15 = 1;
      local_58 = 0;
    }
    else {
      iVar9 = 0x1f;
      if (uVar15 != 0) {
        for (; uVar15 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      local_50 = param_11;
      uVar15 = iVar19 + 3U >> 2;
      local_58 = iVar9 + 1;
      if (uVar15 == 0) goto LAB_00102ec7;
    }
    iVar19 = 0;
    auVar64._4_4_ = fVar21;
    auVar64._0_4_ = local_1c4;
    auVar64._8_4_ = fVar26;
    auVar64._12_4_ = 0;
    lVar20 = 0;
    auVar36._4_4_ = fVar22;
    auVar36._0_4_ = fStack_1d8;
    auVar36._8_4_ = fVar43;
    auVar36._12_4_ = 0;
    auVar73._4_4_ = local_238;
    auVar73._0_4_ = fVar81;
    auVar73._8_4_ = local_258;
    auVar73._12_4_ = 0;
    local_50 = param_11;
    do {
      lVar17 = 0;
      pfVar12 = (float *)(*(long *)(param_1 + 0x80) + lVar20);
      uStack_1a8 = CONCAT44(fStack_a4,local_a8);
      uStack_1a0 = CONCAT44(fStack_9c,fStack_a0);
      auVar23._0_8_ = CONCAT44(pfVar12[1] * (float)local_78,*pfVar12 * (float)local_78);
      auVar23._8_4_ = pfVar12[2] * (float)local_78;
      auVar23._12_4_ = pfVar12[3] * (float)local_78;
      auVar45._0_4_ = (float)local_78 * pfVar12[0xc];
      auVar45._4_4_ = (float)local_78 * pfVar12[0xd];
      auVar45._8_4_ = (float)local_78 * pfVar12[0xe];
      auVar45._12_4_ = (float)local_78 * pfVar12[0xf];
      auVar70._8_4_ = auVar23._8_4_;
      auVar70._0_8_ = auVar23._0_8_;
      auVar70._12_4_ = auVar23._12_4_;
      auVar71 = minps(auVar70,auVar45);
      auVar23 = maxps(auVar23,auVar45);
      auVar44._0_8_ = CONCAT44(pfVar12[5] * local_78._4_4_,pfVar12[4] * local_78._4_4_);
      auVar44._8_4_ = pfVar12[6] * local_78._4_4_;
      auVar44._12_4_ = pfVar12[7] * local_78._4_4_;
      auVar51._0_4_ = local_78._4_4_ * pfVar12[0x10];
      auVar51._4_4_ = local_78._4_4_ * pfVar12[0x11];
      auVar51._8_4_ = local_78._4_4_ * pfVar12[0x12];
      auVar51._12_4_ = local_78._4_4_ * pfVar12[0x13];
      auStack_138 = (undefined1  [4])((auVar23._0_4_ - auVar71._0_4_) * _LC3);
      afStack_134[0] = (auVar23._4_4_ - auVar71._4_4_) * _UNK_00108164;
      afStack_134[1] = (auVar23._8_4_ - auVar71._8_4_) * _UNK_00108168;
      afStack_134[2] = (auVar23._12_4_ - auVar71._12_4_) * _UNK_0010816c;
      auVar58._8_4_ = auVar44._8_4_;
      auVar58._0_8_ = auVar44._0_8_;
      auVar58._12_4_ = auVar44._12_4_;
      auVar59 = minps(auVar58,auVar51);
      auVar45 = maxps(auVar44,auVar51);
      auVar28._0_8_ = CONCAT44(pfVar12[9] * (float)local_70,pfVar12[8] * (float)local_70);
      auVar28._8_4_ = pfVar12[10] * (float)local_70;
      auVar28._12_4_ = pfVar12[0xb] * (float)local_70;
      afStack_198[0] = (float)local_b8 - (auVar71._0_4_ + auVar23._0_4_) * _LC3;
      afStack_198[1] = (float)local_b8 - (auVar71._4_4_ + auVar23._4_4_) * _UNK_00108164;
      afStack_198[2] = (float)local_b8 - (auVar71._8_4_ + auVar23._8_4_) * _UNK_00108168;
      afStack_198[3] = (float)local_b8 - (auVar71._12_4_ + auVar23._12_4_) * _UNK_0010816c;
      auVar71._0_4_ = (float)local_70 * pfVar12[0x14];
      auVar71._4_4_ = (float)local_70 * pfVar12[0x15];
      auVar71._8_4_ = (float)local_70 * pfVar12[0x16];
      auVar71._12_4_ = (float)local_70 * pfVar12[0x17];
      afStack_134[3] = (auVar45._0_4_ - auVar59._0_4_) * _LC3;
      afStack_134[4] = (auVar45._4_4_ - auVar59._4_4_) * _UNK_00108164;
      afStack_134[5] = (auVar45._8_4_ - auVar59._8_4_) * _UNK_00108168;
      afStack_134[6] = (auVar45._12_4_ - auVar59._12_4_) * _UNK_0010816c;
      auVar50._8_4_ = auVar28._8_4_;
      auVar50._0_8_ = auVar28._0_8_;
      auVar50._12_4_ = auVar28._12_4_;
      auVar51 = minps(auVar50,auVar71);
      auVar23 = maxps(auVar28,auVar71);
      afStack_198[4] = local_b8._4_4_ - (auVar59._0_4_ + auVar45._0_4_) * _LC3;
      afStack_198[5] = local_b8._4_4_ - (auVar59._4_4_ + auVar45._4_4_) * _UNK_00108164;
      afStack_198[6] = local_b8._4_4_ - (auVar59._8_4_ + auVar45._8_4_) * _UNK_00108168;
      fStack_17c = local_b8._4_4_ - (auVar59._12_4_ + auVar45._12_4_) * _UNK_0010816c;
      afStack_134[7] = (auVar23._0_4_ - auVar51._0_4_) * _LC3;
      afStack_134[8] = (auVar23._4_4_ - auVar51._4_4_) * _UNK_00108164;
      afStack_134[9] = (auVar23._8_4_ - auVar51._8_4_) * _UNK_00108168;
      afStack_134[10] = (auVar23._12_4_ - auVar51._12_4_) * _UNK_0010816c;
      auVar52._8_4_ = 0xffffffff;
      auVar52._0_8_ = 0xffffffffffffffff;
      auVar52._12_4_ = 0xffffffff;
      fStack_178 = local_b0 - (auVar51._0_4_ + auVar23._0_4_) * _LC3;
      fStack_174 = local_b0 - (auVar51._4_4_ + auVar23._4_4_) * _UNK_00108164;
      fStack_170 = local_b0 - (auVar51._8_4_ + auVar23._8_4_) * _UNK_00108168;
      fStack_16c = local_b0 - (auVar51._12_4_ + auVar23._12_4_) * _UNK_0010816c;
      auVar59._0_4_ = 0.0 - auVar36._0_4_;
      auVar59._4_4_ = 0.0 - auVar36._4_4_;
      auVar59._8_4_ = 0.0 - auVar36._8_4_;
      auVar59._12_4_ = 0.0 - auVar36._12_4_;
      auVar36 = maxps(auVar59,auVar36);
      fStack_168 = auVar36._0_4_ + _LC1;
      fStack_164 = auVar36._4_4_ + _UNK_00108154;
      fStack_160 = auVar36._8_4_ + _UNK_00108158;
      auVar63._0_4_ = 0.0 - auVar64._0_4_;
      auVar63._4_4_ = 0.0 - auVar64._4_4_;
      auVar63._8_4_ = 0.0 - auVar64._8_4_;
      auVar63._12_4_ = 0.0 - auVar64._12_4_;
      fStack_15c = auVar36._12_4_ + _UNK_0010815c;
      auVar64 = maxps(auVar63,auVar64);
      fStack_158 = auVar64._0_4_ + _LC1;
      fStack_154 = auVar64._4_4_ + _UNK_00108154;
      fStack_150 = auVar64._8_4_ + _UNK_00108158;
      auVar48._0_4_ = 0.0 - auVar73._0_4_;
      auVar48._4_4_ = 0.0 - auVar73._4_4_;
      auVar48._8_4_ = 0.0 - auVar73._8_4_;
      auVar48._12_4_ = 0.0 - auVar73._12_4_;
      fStack_14c = auVar64._12_4_ + _UNK_0010815c;
      auVar64 = maxps(auVar48,auVar73);
      fStack_148 = auVar64._0_4_ + _LC1;
      fStack_144 = auVar64._4_4_ + _UNK_00108154;
      fStack_140 = auVar64._8_4_ + _UNK_00108158;
      fStack_13c = auVar64._12_4_ + _UNK_0010815c;
      pfVar12 = &fStack_168;
      do {
        fVar25 = pfVar12[4];
        auVar68._0_4_ = 0.0 - *(float *)((long)afStack_198 + lVar17);
        auVar68._4_4_ = 0.0 - *(float *)((long)afStack_198 + lVar17 + 4);
        auVar68._8_4_ = 0.0 - *(float *)((long)afStack_198 + lVar17 + 8);
        auVar68._12_4_ = 0.0 - *(float *)((long)afStack_198 + lVar17 + 0xc);
        auVar64 = maxps(auVar68,*(undefined1 (*) [16])((long)afStack_198 + lVar17));
        fVar27 = *pfVar12;
        fVar40 = pfVar12[8];
        pfVar14 = (float *)((long)auStack_138 + lVar17);
        lVar5 = lVar17 + 4;
        lVar6 = lVar17 + 8;
        lVar7 = lVar17 + 0xc;
        lVar17 = lVar17 + 0x10;
        auVar69._4_4_ =
             -(uint)(auVar64._4_4_ <=
                    fVar40 * fStack_a0 + fVar25 * fStack_a4 + fVar27 * local_a8 +
                    *(float *)(auStack_138 + lVar5));
        auVar69._0_4_ =
             -(uint)(auVar64._0_4_ <=
                    fVar40 * fStack_a0 + fVar25 * fStack_a4 + fVar27 * local_a8 + *pfVar14);
        auVar69._8_4_ =
             -(uint)(auVar64._8_4_ <=
                    fVar40 * fStack_a0 + fVar25 * fStack_a4 + fVar27 * local_a8 +
                    *(float *)(auStack_138 + lVar6));
        auVar69._12_4_ =
             -(uint)(auVar64._12_4_ <=
                    fVar40 * fStack_a0 + fVar25 * fStack_a4 + fVar27 * local_a8 +
                    *(float *)(auStack_138 + lVar7));
        auVar52 = auVar52 & auVar69;
        puVar13 = &local_108;
        pfVar12 = pfVar12 + 1;
        pfVar14 = &fStack_168;
        pfVar18 = (float *)&uStack_1a8;
      } while (lVar17 != 0x30);
      do {
        fVar25 = *(float *)((long)puVar13 + 0x24);
        pfVar12 = pfVar14 + 4;
        fVar27 = *(float *)(puVar13 + 4);
        fVar40 = *(float *)(puVar13 + 5);
        auVar60._0_4_ = fVar40 * fStack_178 + fVar25 * afStack_198[4] + fVar27 * afStack_198[0];
        auVar60._4_4_ = fVar40 * fStack_174 + fVar25 * afStack_198[5] + fVar27 * afStack_198[1];
        auVar60._8_4_ = fVar40 * fStack_170 + fVar25 * afStack_198[6] + fVar27 * afStack_198[2];
        auVar60._12_4_ = fVar40 * fStack_16c + fVar25 * fStack_17c + fVar27 * afStack_198[3];
        auVar54._4_4_ = 0.0 - auVar60._4_4_;
        auVar54._0_4_ = 0.0 - auVar60._0_4_;
        auVar54._8_4_ = 0.0 - auVar60._8_4_;
        auVar54._12_4_ = 0.0 - auVar60._12_4_;
        fVar25 = pfVar14[1];
        auVar64 = maxps(auVar54,auVar60);
        fVar27 = *pfVar14;
        fVar40 = pfVar14[2];
        fVar53 = *pfVar18;
        auVar55._4_4_ =
             -(uint)(auVar64._4_4_ <=
                    fVar53 + fVar40 * afStack_134[8] +
                             fVar25 * afStack_134[4] + fVar27 * afStack_134[0]);
        auVar55._0_4_ =
             -(uint)(auVar64._0_4_ <=
                    fVar53 + fVar40 * afStack_134[7] +
                             fVar25 * afStack_134[3] + fVar27 * (float)auStack_138);
        auVar55._8_4_ =
             -(uint)(auVar64._8_4_ <=
                    fVar53 + fVar40 * afStack_134[9] +
                             fVar25 * afStack_134[5] + fVar27 * afStack_134[1]);
        auVar55._12_4_ =
             -(uint)(auVar64._12_4_ <=
                    fVar53 + fVar40 * afStack_134[10] +
                             fVar25 * afStack_134[6] + fVar27 * afStack_134[2]);
        auVar52 = auVar52 & auVar55;
        puVar13 = puVar13 + 2;
        pfVar14 = pfVar12;
        pfVar18 = pfVar18 + 1;
      } while (pfVar12 != (float *)auStack_138);
      auVar78._0_4_ = fVar22 * fStack_178 - afStack_198[4] * fVar43;
      auVar78._4_4_ = fVar22 * fStack_174 - afStack_198[5] * fVar43;
      auVar78._8_4_ = fVar22 * fStack_170 - afStack_198[6] * fVar43;
      auVar78._12_4_ = fVar22 * fStack_16c - fStack_17c * fVar43;
      auVar72._4_4_ = 0.0 - auVar78._4_4_;
      auVar72._0_4_ = 0.0 - auVar78._0_4_;
      auVar72._8_4_ = 0.0 - auVar78._8_4_;
      auVar72._12_4_ = 0.0 - auVar78._12_4_;
      auVar73 = maxps(auVar72,auVar78);
      auVar65._0_4_ = fVar21 * fStack_178 - afStack_198[4] * fVar26;
      auVar65._4_4_ = fVar21 * fStack_174 - afStack_198[5] * fVar26;
      auVar65._8_4_ = fVar21 * fStack_170 - afStack_198[6] * fVar26;
      auVar65._12_4_ = fVar21 * fStack_16c - fStack_17c * fVar26;
      auVar74._0_4_ = 0.0 - auVar65._0_4_;
      auVar74._4_4_ = 0.0 - auVar65._4_4_;
      auVar74._8_4_ = 0.0 - auVar65._8_4_;
      auVar74._12_4_ = 0.0 - auVar65._12_4_;
      auVar23 = maxps(auVar74,auVar65);
      auVar75._0_4_ = local_238 * fStack_178 - afStack_198[4] * local_258;
      auVar75._4_4_ = local_238 * fStack_174 - afStack_198[5] * local_258;
      auVar75._8_4_ = local_238 * fStack_170 - afStack_198[6] * local_258;
      auVar75._12_4_ = local_238 * fStack_16c - fStack_17c * local_258;
      auVar79._0_4_ = 0.0 - auVar75._0_4_;
      auVar79._4_4_ = 0.0 - auVar75._4_4_;
      auVar79._8_4_ = 0.0 - auVar75._8_4_;
      auVar79._12_4_ = 0.0 - auVar75._12_4_;
      auVar51 = maxps(auVar79,auVar75);
      auVar61._0_4_ = fVar43 * afStack_198[0] - fStack_178 * fStack_1d8;
      auVar61._4_4_ = fVar43 * afStack_198[1] - fStack_174 * fStack_1d8;
      auVar61._8_4_ = fVar43 * afStack_198[2] - fStack_170 * fStack_1d8;
      auVar61._12_4_ = fVar43 * afStack_198[3] - fStack_16c * fStack_1d8;
      auVar76._4_4_ = 0.0 - auVar61._4_4_;
      auVar76._0_4_ = 0.0 - auVar61._0_4_;
      auVar76._8_4_ = 0.0 - auVar61._8_4_;
      auVar76._12_4_ = 0.0 - auVar61._12_4_;
      auVar45 = maxps(auVar76,auVar61);
      auVar80._0_4_ = fVar26 * afStack_198[0] - fStack_178 * local_1c4;
      auVar80._4_4_ = fVar26 * afStack_198[1] - fStack_174 * local_1c4;
      auVar80._8_4_ = fVar26 * afStack_198[2] - fStack_170 * local_1c4;
      auVar80._12_4_ = fVar26 * afStack_198[3] - fStack_16c * local_1c4;
      auVar77._4_4_ = 0.0 - auVar80._4_4_;
      auVar77._0_4_ = 0.0 - auVar80._0_4_;
      auVar77._8_4_ = 0.0 - auVar80._8_4_;
      auVar77._12_4_ = 0.0 - auVar80._12_4_;
      auVar36 = maxps(auVar77,auVar80);
      auVar66._0_4_ = local_258 * afStack_198[0] - fStack_178 * fVar81;
      auVar66._4_4_ = local_258 * afStack_198[1] - fStack_174 * fVar81;
      auVar66._8_4_ = local_258 * afStack_198[2] - fStack_170 * fVar81;
      auVar66._12_4_ = local_258 * afStack_198[3] - fStack_16c * fVar81;
      auVar42._0_4_ = 0.0 - auVar66._0_4_;
      auVar42._4_4_ = 0.0 - auVar66._4_4_;
      auVar42._8_4_ = 0.0 - auVar66._8_4_;
      auVar42._12_4_ = 0.0 - auVar66._12_4_;
      auVar64 = maxps(auVar42,auVar66);
      auVar3._4_4_ = -(uint)(auVar36._4_4_ <=
                             fStack_164 * fStack_a0 + local_a8 * fStack_144 +
                             fStack_158 * afStack_134[8] + fStack_150 * afStack_134[0] &&
                            auVar64._4_4_ <=
                            afStack_134[8] * fStack_148 + afStack_134[0] * fStack_140 +
                            fStack_164 * fStack_a4 + local_a8 * fStack_154);
      auVar3._0_4_ = -(uint)(auVar36._0_4_ <=
                             fStack_164 * fStack_a0 + local_a8 * fStack_144 +
                             fStack_158 * afStack_134[7] + fStack_150 * (float)auStack_138 &&
                            auVar64._0_4_ <=
                            afStack_134[7] * fStack_148 + (float)auStack_138 * fStack_140 +
                            fStack_164 * fStack_a4 + local_a8 * fStack_154);
      auVar3._8_4_ = -(uint)(auVar36._8_4_ <=
                             fStack_164 * fStack_a0 + local_a8 * fStack_144 +
                             fStack_158 * afStack_134[9] + fStack_150 * afStack_134[1] &&
                            auVar64._8_4_ <=
                            afStack_134[9] * fStack_148 + afStack_134[1] * fStack_140 +
                            fStack_164 * fStack_a4 + local_a8 * fStack_154);
      auVar3._12_4_ =
           -(uint)(auVar36._12_4_ <=
                   fStack_164 * fStack_a0 + local_a8 * fStack_144 +
                   fStack_158 * afStack_134[10] + fStack_150 * afStack_134[2] &&
                  auVar64._12_4_ <=
                  afStack_134[10] * fStack_148 + afStack_134[2] * fStack_140 +
                  fStack_164 * fStack_a4 + local_a8 * fStack_154);
      auVar56._0_4_ = fStack_1d8 * afStack_198[4] - fVar22 * afStack_198[0];
      auVar56._4_4_ = fStack_1d8 * afStack_198[5] - fVar22 * afStack_198[1];
      auVar56._8_4_ = fStack_1d8 * afStack_198[6] - fVar22 * afStack_198[2];
      auVar56._12_4_ = fStack_1d8 * fStack_17c - fVar22 * afStack_198[3];
      auVar29._0_4_ = 0.0 - auVar56._0_4_;
      auVar29._4_4_ = 0.0 - auVar56._4_4_;
      auVar29._8_4_ = 0.0 - auVar56._8_4_;
      auVar29._12_4_ = 0.0 - auVar56._12_4_;
      auVar64 = maxps(auVar29,auVar56);
      auVar62._0_4_ = local_1c4 * afStack_198[4] - fVar21 * afStack_198[0];
      auVar62._4_4_ = local_1c4 * afStack_198[5] - fVar21 * afStack_198[1];
      auVar62._8_4_ = local_1c4 * afStack_198[6] - fVar21 * afStack_198[2];
      auVar62._12_4_ = local_1c4 * fStack_17c - fVar21 * afStack_198[3];
      auVar30._0_4_ = 0.0 - auVar62._0_4_;
      auVar30._4_4_ = 0.0 - auVar62._4_4_;
      auVar30._8_4_ = 0.0 - auVar62._8_4_;
      auVar30._12_4_ = 0.0 - auVar62._12_4_;
      auVar36 = maxps(auVar30,auVar62);
      auVar57._0_4_ =
           -(uint)(auVar64._0_4_ <=
                   fStack_168 * afStack_134[3] + fStack_164 * (float)auStack_138 +
                   fStack_150 * fStack_a0 + fStack_a4 * fStack_140 &&
                  auVar36._0_4_ <=
                  fStack_a0 * fStack_160 + fStack_140 * local_a8 +
                  fStack_154 * (float)auStack_138 + fStack_158 * afStack_134[3]);
      auVar57._4_4_ =
           -(uint)(auVar64._4_4_ <=
                   fStack_168 * afStack_134[4] + fStack_164 * afStack_134[0] +
                   fStack_150 * fStack_a0 + fStack_a4 * fStack_140 &&
                  auVar36._4_4_ <=
                  fStack_a0 * fStack_160 + fStack_140 * local_a8 +
                  fStack_154 * afStack_134[0] + fStack_158 * afStack_134[4]);
      auVar57._8_4_ =
           -(uint)(auVar64._8_4_ <=
                   fStack_168 * afStack_134[5] + fStack_164 * afStack_134[1] +
                   fStack_150 * fStack_a0 + fStack_a4 * fStack_140 &&
                  auVar36._8_4_ <=
                  fStack_a0 * fStack_160 + fStack_140 * local_a8 +
                  fStack_154 * afStack_134[1] + fStack_158 * afStack_134[5]);
      auVar57._12_4_ =
           -(uint)(auVar64._12_4_ <=
                   fStack_168 * afStack_134[6] + fStack_164 * afStack_134[2] +
                   fStack_150 * fStack_a0 + fStack_a4 * fStack_140 &&
                  auVar36._12_4_ <=
                  fStack_a0 * fStack_160 + fStack_140 * local_a8 +
                  fStack_154 * afStack_134[2] + fStack_158 * afStack_134[6]);
      auVar34._0_4_ = afStack_198[4] * fVar81 - afStack_198[0] * local_238;
      auVar34._4_4_ = afStack_198[5] * fVar81 - afStack_198[1] * local_238;
      auVar34._8_4_ = afStack_198[6] * fVar81 - afStack_198[2] * local_238;
      auVar34._12_4_ = fStack_17c * fVar81 - afStack_198[3] * local_238;
      auVar37._0_4_ = 0.0 - auVar34._0_4_;
      auVar37._4_4_ = 0.0 - auVar34._4_4_;
      auVar37._8_4_ = 0.0 - auVar34._8_4_;
      auVar37._12_4_ = 0.0 - auVar34._12_4_;
      auVar64 = maxps(auVar37,auVar34);
      auVar35._0_4_ =
           -(uint)(auVar73._0_4_ <=
                   fStack_158 * fStack_a0 + fStack_148 * fStack_a4 +
                   fStack_164 * afStack_134[7] + fStack_160 * afStack_134[3] &&
                  auVar23._0_4_ <=
                  fStack_154 * afStack_134[7] + fStack_150 * afStack_134[3] +
                  fStack_a0 * fStack_168 + local_a8 * fStack_148);
      auVar35._4_4_ =
           -(uint)(auVar73._4_4_ <=
                   fStack_158 * fStack_a0 + fStack_148 * fStack_a4 +
                   fStack_164 * afStack_134[8] + fStack_160 * afStack_134[4] &&
                  auVar23._4_4_ <=
                  fStack_154 * afStack_134[8] + fStack_150 * afStack_134[4] +
                  fStack_a0 * fStack_168 + local_a8 * fStack_148);
      auVar35._8_4_ =
           -(uint)(auVar73._8_4_ <=
                   fStack_158 * fStack_a0 + fStack_148 * fStack_a4 +
                   fStack_164 * afStack_134[9] + fStack_160 * afStack_134[5] &&
                  auVar23._8_4_ <=
                  fStack_154 * afStack_134[9] + fStack_150 * afStack_134[5] +
                  fStack_a0 * fStack_168 + local_a8 * fStack_148);
      auVar35._12_4_ =
           -(uint)(auVar73._12_4_ <=
                   fStack_158 * fStack_a0 + fStack_148 * fStack_a4 +
                   fStack_164 * afStack_134[10] + fStack_160 * afStack_134[6] &&
                  auVar23._12_4_ <=
                  fStack_154 * afStack_134[10] + fStack_150 * afStack_134[6] +
                  fStack_a0 * fStack_168 + local_a8 * fStack_148);
      auVar38._4_4_ =
           -(uint)(auVar64._4_4_ <=
                  afStack_134[0] * fStack_144 + afStack_134[4] * fStack_148 +
                  fStack_a4 * fStack_160 + fStack_150 * local_a8);
      auVar38._0_4_ =
           -(uint)(auVar64._0_4_ <=
                  (float)auStack_138 * fStack_144 + afStack_134[3] * fStack_148 +
                  fStack_a4 * fStack_160 + fStack_150 * local_a8);
      auVar38._8_4_ =
           -(uint)(auVar64._8_4_ <=
                  afStack_134[1] * fStack_144 + afStack_134[5] * fStack_148 +
                  fStack_a4 * fStack_160 + fStack_150 * local_a8);
      auVar38._12_4_ =
           -(uint)(auVar64._12_4_ <=
                  afStack_134[2] * fStack_144 + afStack_134[6] * fStack_148 +
                  fStack_a4 * fStack_160 + fStack_150 * local_a8);
      auVar24._0_4_ =
           -(uint)(auVar51._0_4_ <=
                   fStack_144 * afStack_134[7] + afStack_134[3] * fStack_140 +
                   fStack_a4 * fStack_168 + local_a8 * fStack_158 &&
                  auVar45._0_4_ <=
                  afStack_134[7] * fStack_168 + fStack_160 * (float)auStack_138 +
                  fStack_154 * fStack_a0 + fStack_a4 * fStack_144);
      auVar24._4_4_ =
           -(uint)(auVar51._4_4_ <=
                   fStack_144 * afStack_134[8] + afStack_134[4] * fStack_140 +
                   fStack_a4 * fStack_168 + local_a8 * fStack_158 &&
                  auVar45._4_4_ <=
                  afStack_134[8] * fStack_168 + fStack_160 * afStack_134[0] +
                  fStack_154 * fStack_a0 + fStack_a4 * fStack_144);
      auVar24._8_4_ =
           -(uint)(auVar51._8_4_ <=
                   fStack_144 * afStack_134[9] + afStack_134[5] * fStack_140 +
                   fStack_a4 * fStack_168 + local_a8 * fStack_158 &&
                  auVar45._8_4_ <=
                  afStack_134[9] * fStack_168 + fStack_160 * afStack_134[1] +
                  fStack_154 * fStack_a0 + fStack_a4 * fStack_144);
      auVar24._12_4_ =
           -(uint)(auVar51._12_4_ <=
                   fStack_144 * afStack_134[10] + afStack_134[6] * fStack_140 +
                   fStack_a4 * fStack_168 + local_a8 * fStack_158 &&
                  auVar45._12_4_ <=
                  afStack_134[10] * fStack_168 + fStack_160 * afStack_134[2] +
                  fStack_154 * fStack_a0 + fStack_a4 * fStack_144);
      _auStack_138 = auVar57 & auVar38 & auVar24 & auVar35 & auVar52 & auVar3;
      iVar9 = movmskps(fVar21,_auStack_138);
      if (iVar9 != 0) {
        iVar9 = (int)*(undefined8 *)(param_1 + 0x50);
        uVar16 = iVar9 - iVar19;
        if (4 < uVar16) {
          uVar16 = 4;
        }
        if (iVar9 != iVar19) {
          lVar17 = 0;
          do {
            if (*(float *)((long)auStack_138 + lVar17 * 4) != 0.0) {
              uVar10 = iVar19 + (int)lVar17;
              fVar46 = (float)local_88 * 0.0;
              fVar27 = (float)(_LC23 ^ (uint)(float)local_88);
              fVar40 = (float)(_UNK_001081a4 ^ (uint)local_88._4_4_);
              fVar53 = (float)(_UNK_001081a8 ^ (uint)(float)uStack_80);
              fVar39 = (float)(_UNK_001081ac ^ (uint)uStack_80._4_4_);
              puVar13 = (undefined8 *)(*(long *)(param_1 + 0x60) + (ulong)uVar10 * 0x28);
              fVar22 = *(float *)(puVar13 + 1) * (float)local_78;
              fVar43 = *(float *)((long)puVar13 + 0xc) * local_78._4_4_;
              fVar81 = *(float *)(puVar13 + 2) * (float)local_70;
              auVar31._4_4_ = local_88._4_4_;
              auVar31._0_4_ = fVar46;
              iStack_1ac = local_58 + local_68._4_4_;
              bVar11 = (byte)((ulong)local_68 >> 0x20);
              uStack_1b0 = ~((int)(1L << ((byte)local_58 & 0x3f)) + -1 << (bVar11 & 0x1f)) &
                           (uint)local_68 | uVar10 << (bVar11 & 0x1f);
              fVar47 = local_88._4_4_ * 0.0;
              fVar41 = (uStack_80._4_4_ * fVar22 + fVar46 + local_88._4_4_ * fVar81) -
                       (float)uStack_80 * fVar43;
              auVar49._0_4_ = (float)uStack_80 * 0.0;
              fVar25 = (uStack_80._4_4_ * fVar43 - (float)local_88 * fVar81) + fVar47 +
                       (float)uStack_80 * fVar22;
              fVar26 = uStack_80._4_4_ * 0.0;
              fVar21 = ((uStack_80._4_4_ * fVar81 + (float)local_88 * fVar43) -
                       local_88._4_4_ * fVar22) + auVar49._0_4_;
              fVar22 = ((fVar26 - (float)local_88 * fVar22) - fVar43 * local_88._4_4_) -
                       fVar81 * (float)uStack_80;
              local_2e8 = CONCAT44(fVar21 * fVar27 +
                                   fVar25 * fVar39 + (fVar40 * fVar22 - fVar41 * fVar53) +
                                   local_98._4_4_,
                                   ((fVar25 * fVar53 + fVar41 * fVar39 + fVar27 * fVar22) -
                                   fVar21 * fVar40) + (float)local_98);
              uStack_2e0 = CONCAT44((((fVar39 * fVar22 - fVar41 * fVar27) - fVar25 * fVar40) -
                                    fVar21 * fVar53) + uStack_90._4_4_,
                                    fVar21 * fVar39 +
                                    ((fVar41 * fVar40 + fVar53 * fVar22) - fVar25 * fVar27) +
                                    (float)uStack_90);
              if (*(char *)((long)puVar13 + 0x24) == '\0') {
                fVar26 = *(float *)((long)puVar13 + 0x14);
                fVar22 = *(float *)(puVar13 + 3);
                fVar21 = 0.0;
                fVar43 = *(float *)((long)puVar13 + 0x1c);
                fVar81 = _LC17 - (fVar43 * fVar43 + fVar22 * fVar22 + fVar26 * fVar26 + 0.0);
                if (0.0 <= fVar81) {
                  fVar21 = SQRT(fVar81);
                }
                auVar67._4_4_ = fVar21 * local_88._4_4_;
                auVar67._0_4_ = fVar43 * local_88._4_4_;
                auVar49._0_4_ = fVar22 * (float)uStack_80;
                auVar49._4_4_ = fVar26 * (float)uStack_80;
                auVar49._8_4_ = fVar21 * (float)uStack_80;
                auVar49._12_4_ = fVar43 * (float)uStack_80;
                auVar33._0_4_ = fVar21 * (float)local_88;
                auVar33._4_4_ = fVar43 * (float)local_88;
                auVar33._8_4_ = fVar22 * (float)local_88;
                auVar33._12_4_ = fVar26 * (float)local_88;
                fVar26 = uStack_80._4_4_ * fVar26;
                auVar67._8_4_ = (float)*(undefined8 *)((long)puVar13 + 0x14) * local_88._4_4_;
                auVar67._12_4_ = fVar22 * local_88._4_4_;
                fVar22 = uStack_80._4_4_ * fVar22;
                fVar43 = uStack_80._4_4_ * fVar43;
                fVar81 = uStack_80._4_4_ * fVar21;
              }
              else {
                auVar49._12_4_ = auVar49._0_4_;
                auVar49._8_4_ = (float)uStack_80;
                auVar31._8_4_ = (float)uStack_80;
                auVar31._12_4_ = uStack_80._4_4_;
                auVar49._4_4_ = auVar49._0_4_;
                auVar4._4_8_ = auVar31._8_8_;
                auVar4._0_4_ = fVar46;
                auVar32._0_8_ = auVar4._0_8_ << 0x20;
                auVar32._8_4_ = fVar46;
                auVar32._12_4_ = fVar46;
                auVar33._4_12_ = auVar32._4_12_;
                auVar33._0_4_ = (float)local_88;
                auVar67._12_4_ = fVar47;
                auVar67._8_4_ = fVar47;
                auVar67._4_4_ = local_88._4_4_;
                auVar67._0_4_ = fVar47;
                fVar22 = fVar26;
                fVar43 = fVar26;
                fVar81 = uStack_80._4_4_;
              }
              plVar1 = (long *)*puVar13;
              pcVar2 = *(code **)(*plVar1 + 0xb8);
              local_2d8 = CONCAT44(auVar49._4_4_ + auVar67._4_4_ + (fVar22 - auVar33._4_4_),
                                   (auVar67._0_4_ + auVar33._0_4_ + fVar26) - auVar49._0_4_);
              uStack_2d0 = CONCAT44(((fVar81 - auVar33._12_4_) - auVar67._12_4_) - auVar49._12_4_,
                                    auVar49._8_4_ + ((auVar33._8_4_ + fVar43) - auVar67._8_4_));
              auVar64 = CompoundShape::SubShape::TransformScale(local_78,local_70);
              (*pcVar2)(local_2e8,uStack_2e0,local_2d8,uStack_2d0,auVar64._0_8_,auVar64._8_8_,plVar1
                        ,&local_108,&uStack_1b0,local_60,local_50);
              if (*(float *)(local_60 + 8) <= _LC8) break;
            }
            lVar17 = lVar17 + 1;
          } while ((uint)lVar17 < uVar16);
        }
      }
      iVar19 = iVar19 + 4;
      lVar20 = lVar20 + 0x60;
      if (uVar15 * 4 == iVar19) break;
      local_258 = fStack_c0;
      local_238 = (float)local_c8._4_4_;
      fStack_1d8 = (float)local_e8._0_4_;
      local_1c4 = (float)local_d8._0_4_;
      auVar64 = _local_d8;
      auVar36 = _local_e8;
      auVar73 = _local_c8;
      fVar43 = fStack_e0;
      fVar81 = (float)local_c8._0_4_;
      fVar21 = (float)local_d8._4_4_;
      fVar26 = fStack_d0;
      fVar22 = (float)local_e8._4_4_;
    } while( true );
  }
LAB_00102ec7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::MutableCompoundShape::sCollideCompoundVsShape(JPH::Shape const*, JPH::Shape const*,
   JPH::Vec3, JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeIDCreator const&,
   JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) */

void JPH::MutableCompoundShape::sCollideCompoundVsShape
               (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
               long param_1,long *param_2,float *param_7,undefined8 *param_8,undefined8 *param_9,
               undefined8 *param_10,undefined8 param_11,long param_12,long *param_13)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  float *pfVar13;
  long lVar14;
  byte bVar15;
  int iVar16;
  float *pfVar17;
  float *pfVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  long in_FS_OFFSET;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  uint uStack_200;
  int iStack_1fc;
  undefined1 auStack_1f8 [16];
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined1 auStack_1c8 [8];
  float afStack_1c0 [2];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_188 [4];
  float afStack_184 [3];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  long local_140;
  long *local_138;
  undefined8 local_128;
  undefined8 local_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
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
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  uint uStack_58;
  long *plStack_50;
  long local_40;
  
  local_288 = (float)param_3;
  fStack_284 = (float)((ulong)param_3 >> 0x20);
  fStack_280 = (float)param_4;
  fStack_27c = (float)((ulong)param_4 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_128 = param_1_00;
  local_138 = param_2;
  local_148 = param_11;
  local_120 = param_2_00;
  local_140 = param_12;
  local_118 = local_288;
  fStack_114 = fStack_284;
  fStack_110 = fStack_280;
  fStack_10c = fStack_27c;
  local_68 = *param_9;
  uStack_60 = *param_10;
  local_108 = *(undefined8 *)param_7;
  uStack_100 = *(undefined8 *)(param_7 + 2);
  iVar16 = (int)*(undefined8 *)(param_1 + 0x50);
  local_88 = (float)_LC6;
  fStack_84 = (float)_LC6;
  fStack_80 = (float)_LC6;
  fStack_7c = (float)_LC6;
  local_f8 = *(undefined8 *)(param_7 + 4);
  uStack_f0 = *(undefined8 *)(param_7 + 6);
  local_78 = _LC8;
  fStack_74 = _LC8;
  fStack_70 = _LC8;
  fStack_6c = _LC8;
  local_e8 = *(undefined8 *)(param_7 + 8);
  uStack_e0 = *(undefined8 *)(param_7 + 10);
  local_d8 = *(undefined8 *)(param_7 + 0xc);
  uStack_d0 = *(undefined8 *)(param_7 + 0xe);
  local_c8 = *param_8;
  uStack_c0 = param_8[1];
  local_b8 = param_8[2];
  uStack_b0 = param_8[3];
  local_a8 = param_8[4];
  uStack_a0 = param_8[5];
  local_98 = param_8[6];
  uStack_90 = param_8[7];
  uStack_58 = iVar16 - 1;
  if (uStack_58 != 0) {
    iVar10 = 0x1f;
    if (uStack_58 != 0) {
      for (; uStack_58 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    uStack_58 = iVar10 + 1;
  }
  fVar31 = *param_7;
  fVar39 = param_7[1];
  fVar46 = param_7[2];
  fVar37 = param_7[6];
  fVar43 = (float)*(undefined8 *)(param_7 + 4);
  fVar22 = (float)((ulong)*(undefined8 *)(param_7 + 4) >> 0x20);
  plStack_50 = param_13;
  fVar44 = (float)*(undefined8 *)(param_7 + 8);
  fVar38 = (float)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20);
  fVar54 = param_7[10];
  fVar56 = param_7[0xc];
  fVar47 = param_7[0xd];
  fVar23 = param_7[0xe];
  lVar12 = 0;
  do {
    pfVar13 = (float *)((long)param_8 + lVar12);
    fVar50 = *pfVar13;
    fVar55 = pfVar13[1];
    fVar2 = pfVar13[2];
    fVar3 = pfVar13[3];
    *(float *)((long)auStack_188 + lVar12) =
         fVar3 * (0.0 - (fVar56 * fVar31 + fVar47 * fVar39 + fVar23 * fVar46)) +
         fVar50 * fVar31 + fVar55 * fVar39 + fVar2 * fVar46;
    *(float *)(auStack_188 + lVar12 + 4) =
         fVar3 * (0.0 - (fVar56 * fVar43 + fVar47 * fVar22 + fVar23 * fVar37)) +
         fVar50 * fVar43 + fVar55 * fVar22 + fVar2 * fVar37;
    *(float *)(auStack_188 + lVar12 + 8) =
         fVar3 * (0.0 - (fVar56 * fVar44 + fVar47 * fVar38 + fVar23 * fVar54)) +
         fVar50 * fVar44 + fVar55 * fVar38 + fVar2 * fVar54;
    *(float *)(auStack_188 + lVar12 + 0xc) = fVar3 * 1.0 + fVar50 * 0.0 + fVar55 * 0.0 + fVar2 * 0.0
    ;
    lVar12 = lVar12 + 0x10;
  } while (lVar12 != 0x40);
  if (*(code **)(*param_2 + 0x20) == CompoundShape::GetLocalBounds) {
    fStack_1e8 = *(float *)(param_2 + 6);
    fStack_1e4 = *(float *)((long)param_2 + 0x34);
    fStack_1e0 = *(float *)(param_2 + 7);
    fStack_1dc = *(float *)((long)param_2 + 0x3c);
    fStack_1d8 = *(float *)(param_2 + 8);
    fStack_1d4 = *(float *)((long)param_2 + 0x44);
    fStack_1d0 = *(float *)(param_2 + 9);
    fStack_1cc = *(float *)((long)param_2 + 0x4c);
  }
  else {
    (**(code **)(*param_2 + 0x20))(&fStack_1e8);
    iVar16 = *(int *)(param_1 + 0x50);
  }
  auVar24._0_4_ = fStack_1d8 * local_288;
  auVar24._4_4_ = fStack_1d4 * fStack_284;
  auVar24._8_4_ = fStack_1d0 * fStack_280;
  auVar24._12_4_ = fStack_1cc * fStack_27c;
  auVar41._0_8_ = CONCAT44(fStack_284 * fStack_1e4,local_288 * fStack_1e8);
  auVar41._8_4_ = fStack_280 * fStack_1e0;
  auVar41._12_4_ = fStack_27c * fStack_1dc;
  auVar33._8_4_ = auVar41._8_4_;
  auVar33._0_8_ = auVar41._0_8_;
  auVar33._12_4_ = auVar41._12_4_;
  _auStack_1c8 = minps(auVar41,auVar24);
  auStack_1b8 = maxps(auVar33,auVar24);
  pfVar13 = (float *)auStack_1c8;
  pfVar17 = (float *)auStack_188;
  local_88 = (float)uStack_158;
  fStack_84 = uStack_158._4_4_;
  fStack_80 = fStack_150;
  fStack_7c = fStack_14c;
  local_78 = (float)uStack_158;
  fStack_74 = uStack_158._4_4_;
  fStack_70 = fStack_150;
  fStack_6c = fStack_14c;
  do {
    fVar37 = *pfVar13;
    fVar31 = pfVar13[4];
    pfVar18 = pfVar17 + 4;
    pfVar13 = pfVar13 + 1;
    auVar49._0_8_ = CONCAT44(fVar37 * pfVar17[1],fVar37 * *pfVar17);
    auVar49._8_4_ = fVar37 * pfVar17[2];
    auVar49._12_4_ = fVar37 * pfVar17[3];
    auVar52._0_4_ = fVar31 * *pfVar17;
    auVar52._4_4_ = fVar31 * pfVar17[1];
    auVar52._8_4_ = fVar31 * pfVar17[2];
    auVar52._12_4_ = fVar31 * pfVar17[3];
    auVar32._8_4_ = auVar49._8_4_;
    auVar32._0_8_ = auVar49._0_8_;
    auVar32._12_4_ = auVar49._12_4_;
    auVar33 = minps(auVar32,auVar52);
    auVar24 = maxps(auVar49,auVar52);
    local_88 = local_88 + auVar33._0_4_;
    fStack_84 = fStack_84 + auVar33._4_4_;
    fStack_80 = fStack_80 + auVar33._8_4_;
    fStack_7c = fStack_7c + auVar33._12_4_;
    local_78 = local_78 + auVar24._0_4_;
    fStack_74 = fStack_74 + auVar24._4_4_;
    fStack_70 = fStack_70 + auVar24._8_4_;
    fStack_6c = fStack_6c + auVar24._12_4_;
    pfVar17 = pfVar18;
  } while (pfVar18 != (float *)&uStack_158);
  uVar20 = iVar16 + 3U >> 2;
  if (uVar20 != 0) {
    lVar12 = 0;
    iVar16 = 0;
    fVar37 = _LC17;
    do {
      pfVar13 = (float *)(*(long *)(param_1 + 0x80) + lVar12);
      auVar34._0_8_ = CONCAT44(pfVar13[1] * (float)local_128,*pfVar13 * (float)local_128);
      auVar34._8_4_ = pfVar13[2] * (float)local_128;
      auVar34._12_4_ = pfVar13[3] * (float)local_128;
      auVar25._0_4_ = (float)local_128 * pfVar13[0xc];
      auVar25._4_4_ = (float)local_128 * pfVar13[0xd];
      auVar25._8_4_ = (float)local_128 * pfVar13[0xe];
      auVar25._12_4_ = (float)local_128 * pfVar13[0xf];
      auVar53._8_4_ = auVar34._8_4_;
      auVar53._0_8_ = auVar34._0_8_;
      auVar53._12_4_ = auVar34._12_4_;
      auVar33 = maxps(auVar34,auVar25);
      auVar24 = minps(auVar53,auVar25);
      auVar45._4_4_ = -(uint)(local_78 < auVar24._4_4_);
      auVar45._0_4_ = -(uint)(local_78 < auVar24._0_4_);
      auVar45._8_4_ = -(uint)(local_78 < auVar24._8_4_);
      auVar45._12_4_ = -(uint)(local_78 < auVar24._12_4_);
      auVar26._0_8_ = CONCAT44(pfVar13[5] * local_128._4_4_,pfVar13[4] * local_128._4_4_);
      auVar26._8_4_ = pfVar13[6] * local_128._4_4_;
      auVar26._12_4_ = pfVar13[7] * local_128._4_4_;
      auVar40._0_8_ = CONCAT44(pfVar13[9] * (float)local_120,pfVar13[8] * (float)local_120);
      auVar40._8_4_ = pfVar13[10] * (float)local_120;
      auVar40._12_4_ = pfVar13[0xb] * (float)local_120;
      auVar28._0_4_ = (float)local_120 * pfVar13[0x14];
      auVar28._4_4_ = (float)local_120 * pfVar13[0x15];
      auVar28._8_4_ = (float)local_120 * pfVar13[0x16];
      auVar28._12_4_ = (float)local_120 * pfVar13[0x17];
      auVar35._0_4_ = local_128._4_4_ * pfVar13[0x10];
      auVar35._4_4_ = local_128._4_4_ * pfVar13[0x11];
      auVar35._8_4_ = local_128._4_4_ * pfVar13[0x12];
      auVar35._12_4_ = local_128._4_4_ * pfVar13[0x13];
      auVar51._8_4_ = auVar26._8_4_;
      auVar51._0_8_ = auVar26._0_8_;
      auVar51._12_4_ = auVar26._12_4_;
      auVar48._8_4_ = auVar40._8_4_;
      auVar48._0_8_ = auVar40._0_8_;
      auVar48._12_4_ = auVar40._12_4_;
      auVar41 = maxps(auVar40,auVar28);
      auVar49 = minps(auVar48,auVar28);
      auVar52 = minps(auVar51,auVar35);
      auVar24 = maxps(auVar26,auVar35);
      auVar36._4_4_ = -(uint)(auVar33._4_4_ < local_88);
      auVar36._0_4_ = -(uint)(auVar33._0_4_ < local_88);
      auVar36._8_4_ = -(uint)(auVar33._8_4_ < local_88);
      auVar36._12_4_ = -(uint)(auVar33._12_4_ < local_88);
      auVar27._4_4_ = -(uint)(auVar24._4_4_ < fStack_84);
      auVar27._0_4_ = -(uint)(auVar24._0_4_ < fStack_84);
      auVar27._8_4_ = -(uint)(auVar24._8_4_ < fStack_84);
      auVar27._12_4_ = -(uint)(auVar24._12_4_ < fStack_84);
      auVar42._4_4_ = -(uint)(fStack_74 < auVar52._4_4_);
      auVar42._0_4_ = -(uint)(fStack_74 < auVar52._0_4_);
      auVar42._8_4_ = -(uint)(fStack_74 < auVar52._8_4_);
      auVar42._12_4_ = -(uint)(fStack_74 < auVar52._12_4_);
      auVar29._4_4_ = -(uint)(fStack_70 < auVar49._4_4_);
      auVar29._0_4_ = -(uint)(fStack_70 < auVar49._0_4_);
      auVar29._8_4_ = -(uint)(fStack_70 < auVar49._8_4_);
      auVar29._12_4_ = -(uint)(fStack_70 < auVar49._12_4_);
      auVar30._4_4_ = -(uint)(auVar41._4_4_ < fStack_80);
      auVar30._0_4_ = -(uint)(auVar41._0_4_ < fStack_80);
      auVar30._8_4_ = -(uint)(auVar41._8_4_ < fStack_80);
      auVar30._12_4_ = -(uint)(auVar41._12_4_ < fStack_80);
      auStack_1f8._8_4_ = 0xffffffff;
      auStack_1f8._0_8_ = 0xffffffffffffffff;
      auStack_1f8._12_4_ = 0xffffffff;
      auStack_1f8 = (auVar27 | auVar42 | auVar36 | auVar45 | auVar30 | auVar29) ^ auStack_1f8;
      iVar10 = movmskps((int)pfVar13,auStack_1f8);
      if (iVar10 != 0) {
        iVar10 = (int)*(undefined8 *)(param_1 + 0x50);
        uVar21 = iVar10 - iVar16;
        if (4 < uVar21) {
          uVar21 = 4;
        }
        if (iVar10 != iVar16) {
          lVar19 = 0;
          do {
            plVar8 = plStack_50;
            lVar6 = local_140;
            uVar5 = local_148;
            if (*(int *)(auStack_1f8 + lVar19 * 4) != 0) {
              uVar11 = iVar16 + (int)lVar19;
              plVar1 = (long *)(*(long *)(param_1 + 0x60) + (ulong)uVar11 * 0x28);
              if (*(char *)((long)plVar1 + 0x24) == '\0') {
                fVar56 = *(float *)((long)plVar1 + 0x14);
                fVar43 = 0.0;
                fVar47 = *(float *)(plVar1 + 3);
                fVar54 = *(float *)((long)plVar1 + 0x1c);
                fVar31 = fVar37 - (fVar54 * fVar54 + fVar47 * fVar47 + fVar56 * fVar56 + 0.0);
                if (0.0 <= fVar31) {
                  fVar43 = SQRT(fVar31);
                }
                fVar55 = fVar47 + fVar47;
                fVar22 = fVar56 + fVar56;
                fVar50 = fVar54 * (fVar54 + fVar54);
                fVar44 = fVar43 * (fVar54 + fVar54);
                fVar23 = fVar22 * fVar43 + fVar54 * fVar55;
                fVar38 = fVar54 * fVar22 + fVar55 * fVar43;
                fVar39 = fVar47 * fVar22 - fVar44;
                fVar31 = fVar54 * fVar22 - fVar55 * fVar43;
                fVar44 = fVar47 * fVar22 + fVar44;
                fVar46 = (fVar37 - fVar56 * fVar22) - fVar47 * fVar55;
                fVar54 = fVar54 * fVar55 - fVar22 * fVar43;
                fVar56 = (fVar37 - fVar50) - fVar56 * fVar22;
                fVar47 = (fVar37 - fVar47 * fVar55) - fVar50;
              }
              else {
                fVar44 = 0.0;
                fVar31 = 0.0;
                fVar39 = 0.0;
                fVar38 = 0.0;
                fVar23 = 0.0;
                fVar46 = fVar37;
                fVar54 = fVar38;
                fVar56 = fVar37;
                fVar47 = fVar37;
              }
              register0x00001244 = fVar44;
              auStack_188 = fVar47;
              auStack_178._4_4_ = fVar56;
              auStack_178._0_4_ = fVar39;
              uStack_158 = CONCAT44(*(float *)((long)plVar1 + 0xc) * local_128._4_4_,
                                    *(float *)(plVar1 + 1) * (float)local_128);
              auStack_178._8_4_ = fVar23;
              auStack_178._12_4_ = 0;
              lVar14 = 0;
              register0x00001248 = fVar31;
              register0x0000124c = 0;
              auStack_168._4_4_ = fVar54;
              auStack_168._0_4_ = fVar38;
              auStack_168._8_4_ = fVar46;
              auStack_168._12_4_ = 0;
              fStack_150 = *(float *)(plVar1 + 2) * (float)local_120;
              fStack_14c = fVar37;
              do {
                fVar37 = *(float *)((long)auStack_188 + lVar14);
                fVar31 = *(float *)(auStack_188 + lVar14 + 4);
                fVar39 = *(float *)(auStack_188 + lVar14 + 8);
                fVar46 = *(float *)(auStack_188 + lVar14 + 0xc);
                *(float *)((long)auStack_1c8 + lVar14) =
                     fVar46 * (float)local_d8 +
                     fVar37 * (float)local_108 + fVar31 * (float)local_f8 + fVar39 * (float)local_e8
                ;
                *(float *)(auStack_1c8 + lVar14 + 4) =
                     fVar46 * (float)((ulong)local_d8 >> 0x20) +
                     fVar37 * local_108._4_4_ + fVar31 * (float)((ulong)local_f8 >> 0x20) +
                     fVar39 * local_e8._4_4_;
                *(float *)(auStack_1c8 + lVar14 + 8) =
                     fVar46 * (float)uStack_d0 +
                     fVar37 * (float)uStack_100 + fVar31 * (float)uStack_f0 +
                     fVar39 * (float)uStack_e0;
                *(float *)(auStack_1c8 + lVar14 + 0xc) =
                     fVar46 * (float)((ulong)uStack_d0 >> 0x20) +
                     fVar37 * uStack_100._4_4_ + fVar31 * (float)((ulong)uStack_f0 >> 0x20) +
                     fVar39 * uStack_e0._4_4_;
                lVar14 = lVar14 + 0x10;
              } while (lVar14 != 0x40);
              iStack_1fc = uStack_58 + local_68._4_4_;
              bVar15 = (byte)((ulong)local_68 >> 0x20);
              uStack_200 = ~((int)(1L << ((byte)uStack_58 & 0x3f)) + -1 << (bVar15 & 0x1f)) &
                           (uint)local_68 | uVar11 << (bVar15 & 0x1f);
              auVar24 = CompoundShape::SubShape::TransformScale(local_128,local_120,plVar1);
              plVar7 = local_138;
              lVar14 = *plVar1;
              uVar4 = CONCAT44(fStack_114,local_118);
              cVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,lVar14,&uStack_200,local_138);
              if (cVar9 != '\0') {
                (*(code *)(&CollisionDispatch::sCollideShape)
                          [(ulong)*(byte *)((long)plVar7 + 0x19) +
                           (ulong)*(byte *)(lVar14 + 0x19) * 0x22])
                          (auVar24._0_8_,auVar24._8_8_,uVar4,lVar14,plVar7,auStack_1c8,&local_c8,
                           &uStack_200,&uStack_60,uVar5,lVar6,plVar8);
              }
              fVar37 = _LC17;
              if (*(float *)(local_140 + 8) <= _LC8) break;
            }
            lVar19 = lVar19 + 1;
          } while ((uint)lVar19 < uVar21);
        }
      }
      if (uVar20 << 2 == iVar16 + 4) break;
      iVar16 = iVar16 + 4;
      lVar12 = lVar12 + 0x60;
    } while( true );
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::MutableCompoundShape::sCollideShapeVsCompound(JPH::Shape const*, JPH::Shape const*,
   JPH::Vec3, JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeIDCreator const&,
   JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) */

void JPH::MutableCompoundShape::sCollideShapeVsCompound
               (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
               long *param_1,long param_2,undefined8 *param_7,float *param_8,undefined8 *param_9,
               undefined8 *param_10,long param_11,long param_12,long *param_13)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  float *pfVar14;
  long lVar15;
  byte bVar16;
  float *pfVar17;
  float *pfVar18;
  long lVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  long in_FS_OFFSET;
  float fVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  uint uStack_200;
  int iStack_1fc;
  undefined1 auStack_1f8 [16];
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined1 auStack_1c8 [8];
  float afStack_1c0 [2];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_188 [4];
  float afStack_184 [3];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  float fStack_150;
  float fStack_14c;
  long local_148;
  long local_140;
  long *local_138;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
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
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  uint uStack_58;
  long *plStack_50;
  long local_40;
  
  local_288 = (float)param_1_00;
  fStack_284 = (float)((ulong)param_1_00 >> 0x20);
  fStack_280 = (float)param_2_00;
  fStack_27c = (float)((ulong)param_2_00 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_118 = param_3;
  local_148 = param_11;
  local_140 = param_12;
  local_138 = param_1;
  local_128 = local_288;
  fStack_124 = fStack_284;
  fStack_120 = fStack_280;
  fStack_11c = fStack_27c;
  local_110 = param_4;
  local_68 = *param_9;
  uStack_60 = *param_10;
  local_108 = *param_7;
  uStack_100 = param_7[1];
  local_88 = (float)_LC6;
  fStack_84 = (float)_LC6;
  fStack_80 = (float)_LC6;
  fStack_7c = (float)_LC6;
  iVar21 = (int)*(undefined8 *)(param_2 + 0x50);
  local_f8 = param_7[2];
  uStack_f0 = param_7[3];
  local_78 = _LC8;
  fStack_74 = _LC8;
  fStack_70 = _LC8;
  fStack_6c = _LC8;
  local_e8 = param_7[4];
  uStack_e0 = param_7[5];
  local_d8 = param_7[6];
  uStack_d0 = param_7[7];
  local_c8 = *(undefined8 *)param_8;
  uStack_c0 = *(undefined8 *)(param_8 + 2);
  local_b8 = *(undefined8 *)(param_8 + 4);
  uStack_b0 = *(undefined8 *)(param_8 + 6);
  local_a8 = *(undefined8 *)(param_8 + 8);
  uStack_a0 = *(undefined8 *)(param_8 + 10);
  local_98 = *(undefined8 *)(param_8 + 0xc);
  uStack_90 = *(undefined8 *)(param_8 + 0xe);
  uStack_58 = iVar21 - 1;
  if (uStack_58 != 0) {
    iVar11 = 0x1f;
    if (uStack_58 != 0) {
      for (; uStack_58 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    uStack_58 = iVar11 + 1;
  }
  fVar43 = *param_8;
  fVar44 = param_8[1];
  fVar45 = param_8[2];
  fVar41 = param_8[6];
  fVar49 = (float)*(undefined8 *)(param_8 + 4);
  fVar23 = (float)((ulong)*(undefined8 *)(param_8 + 4) >> 0x20);
  plStack_50 = param_13;
  fVar50 = (float)*(undefined8 *)(param_8 + 8);
  fVar42 = (float)((ulong)*(undefined8 *)(param_8 + 8) >> 0x20);
  fVar34 = param_8[10];
  fVar38 = param_8[0xc];
  fVar39 = param_8[0xd];
  fVar40 = param_8[0xe];
  lVar13 = 0;
  do {
    pfVar14 = (float *)((long)param_7 + lVar13);
    fVar54 = *pfVar14;
    fVar58 = pfVar14[1];
    fVar2 = pfVar14[2];
    fVar3 = pfVar14[3];
    *(float *)((long)auStack_188 + lVar13) =
         fVar3 * (0.0 - (fVar38 * fVar43 + fVar39 * fVar44 + fVar40 * fVar45)) +
         fVar54 * fVar43 + fVar58 * fVar44 + fVar2 * fVar45;
    *(float *)(auStack_188 + lVar13 + 4) =
         fVar3 * (0.0 - (fVar38 * fVar49 + fVar39 * fVar23 + fVar40 * fVar41)) +
         fVar54 * fVar49 + fVar58 * fVar23 + fVar2 * fVar41;
    *(float *)(auStack_188 + lVar13 + 8) =
         fVar3 * (0.0 - (fVar38 * fVar50 + fVar39 * fVar42 + fVar40 * fVar34)) +
         fVar54 * fVar50 + fVar58 * fVar42 + fVar2 * fVar34;
    *(float *)(auStack_188 + lVar13 + 0xc) = fVar3 * 1.0 + fVar54 * 0.0 + fVar58 * 0.0 + fVar2 * 0.0
    ;
    lVar13 = lVar13 + 0x10;
  } while (lVar13 != 0x40);
  if (*(code **)(*param_1 + 0x20) == CompoundShape::GetLocalBounds) {
    fStack_1e8 = *(float *)(param_1 + 6);
    fStack_1e4 = *(float *)((long)param_1 + 0x34);
    fStack_1e0 = *(float *)(param_1 + 7);
    fStack_1dc = *(float *)((long)param_1 + 0x3c);
    fStack_1d8 = *(float *)(param_1 + 8);
    fStack_1d4 = *(float *)((long)param_1 + 0x44);
    fStack_1d0 = *(float *)(param_1 + 9);
    fStack_1cc = *(float *)((long)param_1 + 0x4c);
  }
  else {
    (**(code **)(*param_1 + 0x20))(&fStack_1e8,param_1);
    iVar21 = *(int *)(param_2 + 0x50);
  }
  auVar25._0_4_ = fStack_1d8 * local_288;
  auVar25._4_4_ = fStack_1d4 * fStack_284;
  auVar25._8_4_ = fStack_1d0 * fStack_280;
  auVar25._12_4_ = fStack_1cc * fStack_27c;
  auVar32._0_8_ = CONCAT44(fStack_284 * fStack_1e4,local_288 * fStack_1e8);
  auVar32._8_4_ = fStack_280 * fStack_1e0;
  auVar32._12_4_ = fStack_27c * fStack_1dc;
  auVar47._8_4_ = auVar32._8_4_;
  auVar47._0_8_ = auVar32._0_8_;
  auVar47._12_4_ = auVar32._12_4_;
  _auStack_1c8 = minps(auVar32,auVar25);
  auStack_1b8 = maxps(auVar47,auVar25);
  pfVar14 = (float *)auStack_1c8;
  pfVar17 = (float *)auStack_188;
  fVar41 = (float)uStack_158;
  fVar43 = uStack_158._4_4_;
  fVar44 = fStack_150;
  fVar45 = fStack_14c;
  fVar34 = (float)uStack_158;
  fVar38 = uStack_158._4_4_;
  fVar39 = fStack_150;
  fVar40 = fStack_14c;
  do {
    fVar50 = *pfVar14;
    fVar42 = pfVar14[4];
    pfVar18 = pfVar17 + 4;
    pfVar14 = pfVar14 + 1;
    auVar53._0_8_ = CONCAT44(fVar50 * pfVar17[1],fVar50 * *pfVar17);
    auVar53._8_4_ = fVar50 * pfVar17[2];
    auVar53._12_4_ = fVar50 * pfVar17[3];
    auVar56._0_4_ = fVar42 * *pfVar17;
    auVar56._4_4_ = fVar42 * pfVar17[1];
    auVar56._8_4_ = fVar42 * pfVar17[2];
    auVar56._12_4_ = fVar42 * pfVar17[3];
    auVar31._8_4_ = auVar53._8_4_;
    auVar31._0_8_ = auVar53._0_8_;
    auVar31._12_4_ = auVar53._12_4_;
    auVar32 = minps(auVar31,auVar56);
    auVar25 = maxps(auVar53,auVar56);
    fVar41 = fVar41 + auVar32._0_4_;
    fVar43 = fVar43 + auVar32._4_4_;
    fVar44 = fVar44 + auVar32._8_4_;
    fVar45 = fVar45 + auVar32._12_4_;
    fVar34 = fVar34 + auVar25._0_4_;
    fVar38 = fVar38 + auVar25._4_4_;
    fVar39 = fVar39 + auVar25._8_4_;
    fVar40 = fVar40 + auVar25._12_4_;
    pfVar17 = pfVar18;
  } while (pfVar18 != (float *)&uStack_158);
  fVar50 = *(float *)(param_11 + 0x20);
  uVar20 = iVar21 + 3U >> 2;
  local_88 = fVar41 - fVar50;
  fStack_84 = fVar43 - fVar50;
  fStack_80 = fVar44 - fVar50;
  fStack_7c = fVar45 - fVar50;
  local_78 = fVar50 + fVar34;
  fStack_74 = fVar50 + fVar38;
  fStack_70 = fVar50 + fVar39;
  fStack_6c = fVar50 + fVar40;
  if (uVar20 == 0) {
LAB_00104ff0:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar13 = 0;
  iVar21 = 0;
  fVar41 = _LC17;
  do {
    pfVar14 = (float *)(*(long *)(param_2 + 0x80) + lVar13);
    auVar35._0_8_ = CONCAT44(pfVar14[1] * (float)local_118,*pfVar14 * (float)local_118);
    auVar35._8_4_ = pfVar14[2] * (float)local_118;
    auVar35._12_4_ = pfVar14[3] * (float)local_118;
    auVar26._0_4_ = (float)local_118 * pfVar14[0xc];
    auVar26._4_4_ = (float)local_118 * pfVar14[0xd];
    auVar26._8_4_ = (float)local_118 * pfVar14[0xe];
    auVar26._12_4_ = (float)local_118 * pfVar14[0xf];
    auVar57._8_4_ = auVar35._8_4_;
    auVar57._0_8_ = auVar35._0_8_;
    auVar57._12_4_ = auVar35._12_4_;
    auVar32 = maxps(auVar35,auVar26);
    auVar25 = minps(auVar57,auVar26);
    auVar51._4_4_ = -(uint)(local_78 < auVar25._4_4_);
    auVar51._0_4_ = -(uint)(local_78 < auVar25._0_4_);
    auVar51._8_4_ = -(uint)(local_78 < auVar25._8_4_);
    auVar51._12_4_ = -(uint)(local_78 < auVar25._12_4_);
    auVar27._0_8_ = CONCAT44(pfVar14[5] * local_118._4_4_,pfVar14[4] * local_118._4_4_);
    auVar27._8_4_ = pfVar14[6] * local_118._4_4_;
    auVar27._12_4_ = pfVar14[7] * local_118._4_4_;
    auVar46._0_8_ = CONCAT44(pfVar14[9] * (float)local_110,pfVar14[8] * (float)local_110);
    auVar46._8_4_ = pfVar14[10] * (float)local_110;
    auVar46._12_4_ = pfVar14[0xb] * (float)local_110;
    auVar29._0_4_ = (float)local_110 * pfVar14[0x14];
    auVar29._4_4_ = (float)local_110 * pfVar14[0x15];
    auVar29._8_4_ = (float)local_110 * pfVar14[0x16];
    auVar29._12_4_ = (float)local_110 * pfVar14[0x17];
    auVar36._0_4_ = local_118._4_4_ * pfVar14[0x10];
    auVar36._4_4_ = local_118._4_4_ * pfVar14[0x11];
    auVar36._8_4_ = local_118._4_4_ * pfVar14[0x12];
    auVar36._12_4_ = local_118._4_4_ * pfVar14[0x13];
    auVar55._8_4_ = auVar27._8_4_;
    auVar55._0_8_ = auVar27._0_8_;
    auVar55._12_4_ = auVar27._12_4_;
    auVar52._8_4_ = auVar46._8_4_;
    auVar52._0_8_ = auVar46._0_8_;
    auVar52._12_4_ = auVar46._12_4_;
    auVar47 = maxps(auVar46,auVar29);
    auVar53 = minps(auVar52,auVar29);
    auVar56 = minps(auVar55,auVar36);
    auVar25 = maxps(auVar27,auVar36);
    auVar37._4_4_ = -(uint)(auVar32._4_4_ < local_88);
    auVar37._0_4_ = -(uint)(auVar32._0_4_ < local_88);
    auVar37._8_4_ = -(uint)(auVar32._8_4_ < local_88);
    auVar37._12_4_ = -(uint)(auVar32._12_4_ < local_88);
    auVar28._4_4_ = -(uint)(auVar25._4_4_ < fStack_84);
    auVar28._0_4_ = -(uint)(auVar25._0_4_ < fStack_84);
    auVar28._8_4_ = -(uint)(auVar25._8_4_ < fStack_84);
    auVar28._12_4_ = -(uint)(auVar25._12_4_ < fStack_84);
    auVar48._4_4_ = -(uint)(fStack_74 < auVar56._4_4_);
    auVar48._0_4_ = -(uint)(fStack_74 < auVar56._0_4_);
    auVar48._8_4_ = -(uint)(fStack_74 < auVar56._8_4_);
    auVar48._12_4_ = -(uint)(fStack_74 < auVar56._12_4_);
    auVar30._4_4_ = -(uint)(fStack_70 < auVar53._4_4_);
    auVar30._0_4_ = -(uint)(fStack_70 < auVar53._0_4_);
    auVar30._8_4_ = -(uint)(fStack_70 < auVar53._8_4_);
    auVar30._12_4_ = -(uint)(fStack_70 < auVar53._12_4_);
    auVar33._4_4_ = -(uint)(auVar47._4_4_ < fStack_80);
    auVar33._0_4_ = -(uint)(auVar47._0_4_ < fStack_80);
    auVar33._8_4_ = -(uint)(auVar47._8_4_ < fStack_80);
    auVar33._12_4_ = -(uint)(auVar47._12_4_ < fStack_80);
    auStack_1f8._8_4_ = 0xffffffff;
    auStack_1f8._0_8_ = 0xffffffffffffffff;
    auStack_1f8._12_4_ = 0xffffffff;
    auStack_1f8 = (auVar28 | auVar48 | auVar37 | auVar51 | auVar33 | auVar30) ^ auStack_1f8;
    iVar11 = movmskps((int)pfVar14,auStack_1f8);
    if (iVar11 != 0) {
      iVar11 = (int)*(undefined8 *)(param_2 + 0x50);
      uVar22 = iVar11 - iVar21;
      if (4 < uVar22) {
        uVar22 = 4;
      }
      if (iVar11 != iVar21) {
        lVar19 = 0;
        do {
          plVar9 = plStack_50;
          lVar7 = local_140;
          lVar6 = local_148;
          if (*(int *)(auStack_1f8 + lVar19 * 4) != 0) {
            uVar12 = iVar21 + (int)lVar19;
            plVar1 = (long *)(*(long *)(param_2 + 0x60) + (ulong)uVar12 * 0x28);
            iStack_1fc = uStack_58 + uStack_60._4_4_;
            bVar16 = (byte)((ulong)uStack_60 >> 0x20);
            uStack_200 = ~((int)(1L << ((byte)uStack_58 & 0x3f)) + -1 << (bVar16 & 0x1f)) &
                         (uint)uStack_60 | uVar12 << (bVar16 & 0x1f);
            if (*(char *)((long)plVar1 + 0x24) == '\0') {
              fVar38 = *(float *)((long)plVar1 + 0x14);
              fVar49 = 0.0;
              fVar39 = *(float *)(plVar1 + 3);
              fVar34 = *(float *)((long)plVar1 + 0x1c);
              fVar43 = fVar41 - (fVar34 * fVar34 + fVar39 * fVar39 + fVar38 * fVar38 + 0.0);
              if (0.0 <= fVar43) {
                fVar49 = SQRT(fVar43);
              }
              fVar58 = fVar39 + fVar39;
              fVar23 = fVar38 + fVar38;
              fVar54 = fVar34 * (fVar34 + fVar34);
              fVar50 = fVar49 * (fVar34 + fVar34);
              fVar40 = fVar23 * fVar49 + fVar34 * fVar58;
              fVar42 = fVar34 * fVar23 + fVar58 * fVar49;
              fVar44 = fVar39 * fVar23 - fVar50;
              fVar43 = fVar34 * fVar23 - fVar58 * fVar49;
              fVar50 = fVar39 * fVar23 + fVar50;
              fVar45 = (fVar41 - fVar38 * fVar23) - fVar39 * fVar58;
              fVar34 = fVar34 * fVar58 - fVar23 * fVar49;
              fVar38 = (fVar41 - fVar54) - fVar38 * fVar23;
              fVar39 = (fVar41 - fVar39 * fVar58) - fVar54;
            }
            else {
              fVar50 = 0.0;
              fVar43 = 0.0;
              fVar44 = 0.0;
              fVar42 = 0.0;
              fVar40 = 0.0;
              fVar45 = fVar41;
              fVar34 = fVar42;
              fVar38 = fVar41;
              fVar39 = fVar41;
            }
            register0x00001244 = fVar50;
            auStack_188 = fVar39;
            auStack_178._4_4_ = fVar38;
            auStack_178._0_4_ = fVar44;
            uStack_158 = CONCAT44(*(float *)((long)plVar1 + 0xc) * local_118._4_4_,
                                  *(float *)(plVar1 + 1) * (float)local_118);
            auStack_178._8_4_ = fVar40;
            auStack_178._12_4_ = 0;
            lVar15 = 0;
            register0x00001248 = fVar43;
            register0x0000124c = 0;
            auStack_168._4_4_ = fVar34;
            auStack_168._0_4_ = fVar42;
            auStack_168._8_4_ = fVar45;
            auStack_168._12_4_ = 0;
            fStack_150 = *(float *)(plVar1 + 2) * (float)local_110;
            fStack_14c = fVar41;
            do {
              fVar41 = *(float *)((long)auStack_188 + lVar15);
              fVar43 = *(float *)(auStack_188 + lVar15 + 4);
              fVar44 = *(float *)(auStack_188 + lVar15 + 8);
              fVar45 = *(float *)(auStack_188 + lVar15 + 0xc);
              *(float *)((long)auStack_1c8 + lVar15) =
                   fVar45 * (float)local_98 +
                   fVar41 * (float)local_c8 + fVar43 * (float)local_b8 + fVar44 * (float)local_a8;
              *(float *)(auStack_1c8 + lVar15 + 4) =
                   fVar45 * (float)((ulong)local_98 >> 0x20) +
                   fVar41 * local_c8._4_4_ + fVar43 * (float)((ulong)local_b8 >> 0x20) +
                   fVar44 * local_a8._4_4_;
              *(float *)(auStack_1c8 + lVar15 + 8) =
                   fVar45 * (float)uStack_90 +
                   fVar41 * (float)uStack_c0 + fVar43 * (float)uStack_b0 + fVar44 * (float)uStack_a0
              ;
              *(float *)(auStack_1c8 + lVar15 + 0xc) =
                   fVar45 * (float)((ulong)uStack_90 >> 0x20) +
                   fVar41 * uStack_c0._4_4_ + fVar43 * (float)((ulong)uStack_b0 >> 0x20) +
                   fVar44 * uStack_a0._4_4_;
              lVar15 = lVar15 + 0x10;
            } while (lVar15 != 0x40);
            uVar24 = CompoundShape::SubShape::TransformScale(local_118,local_110,plVar1);
            plVar8 = local_138;
            uVar4 = CONCAT44(fStack_124,local_128);
            lVar15 = *plVar1;
            uVar5 = CONCAT44(fStack_11c,fStack_120);
            cVar10 = (**(code **)(*plVar9 + 0x18))(plVar9,local_138,&local_68,lVar15);
            if (cVar10 != '\0') {
              (*(code *)(&CollisionDispatch::sCollideShape)
                        [(ulong)*(byte *)(lVar15 + 0x19) +
                         (ulong)*(byte *)((long)plVar8 + 0x19) * 0x22])
                        (uVar4,uVar5,uVar24,plVar8,lVar15,&local_108,auStack_1c8,&local_68,
                         &uStack_200,lVar6,lVar7,plVar9);
            }
            fVar41 = _LC17;
            if (*(float *)(local_140 + 8) <= _LC8) break;
          }
          lVar19 = lVar19 + 1;
        } while ((uint)lVar19 < uVar22);
      }
    }
    if (uVar20 * 4 == iVar21 + 4) goto LAB_00104ff0;
    iVar21 = iVar21 + 4;
    lVar13 = lVar13 + 0x60;
  } while( true );
}



/* JPH::GetRTTIOfType(JPH::MutableCompoundShapeSettings*) */

undefined1 * JPH::GetRTTIOfType(MutableCompoundShapeSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::MutableCompoundShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::MutableCompoundShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::MutableCompoundShapeSettings*)::rtti,
                      "MutableCompoundShapeSettings",0x58,
                      GetRTTIOfType(JPH::MutableCompoundShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::MutableCompoundShapeSettings*)::{lambda(void*)#1}::_FUN,
                      MutableCompoundShapeSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::MutableCompoundShapeSettings*)::rtti,&__dso_handle
                  );
      __cxa_guard_release(&GetRTTIOfType(JPH::MutableCompoundShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::MutableCompoundShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::MutableCompoundShapeSettings*)::rtti;
}



/* JPH::MutableCompoundShapeSettings::CastTo(JPH::RTTI const*) const */

void JPH::MutableCompoundShapeSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((MutableCompoundShapeSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::MutableCompoundShape::Clone() const */

void JPH::MutableCompoundShape::Clone(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  long in_RSI;
  long *in_RDI;
  long *plVar17;
  ulong uVar18;
  
  puVar8 = (undefined8 *)(*Allocate)(0x90);
  *(undefined1 (*) [16])(puVar8 + 4) = (undefined1  [16])0x0;
  uVar7 = _LC6;
  *(undefined2 *)(puVar8 + 3) = 0x801;
  *(undefined4 *)(puVar8 + 6) = uVar7;
  *(undefined4 *)((long)puVar8 + 0x34) = uVar7;
  *(undefined4 *)(puVar8 + 7) = uVar7;
  *(undefined4 *)((long)puVar8 + 0x3c) = uVar7;
  uVar7 = _LC8;
  *(undefined4 *)(puVar8 + 1) = 0;
  *(undefined4 *)(puVar8 + 8) = uVar7;
  *(undefined4 *)((long)puVar8 + 0x44) = uVar7;
  *(undefined4 *)(puVar8 + 9) = uVar7;
  *(undefined4 *)((long)puVar8 + 0x4c) = uVar7;
  puVar8[2] = 0;
  puVar8[0xc] = 0;
  *(undefined4 *)(puVar8 + 0xd) = 0x7f7fffff;
  *puVar8 = &PTR__MutableCompoundShape_00107fe0;
  puVar8[0x10] = 0;
  *(undefined1 (*) [16])(puVar8 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar8 + 0xe) = (undefined1  [16])0x0;
  *in_RDI = (long)puVar8;
  LOCK();
  *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
  UNLOCK();
  lVar16 = *in_RDI;
  uVar5 = *(undefined8 *)(in_RSI + 0x28);
  uVar10 = *(undefined8 *)(in_RSI + 0x10);
  *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(in_RSI + 0x20);
  *(undefined8 *)(lVar16 + 0x28) = uVar5;
  uVar5 = *(undefined8 *)(in_RSI + 0x30);
  uVar6 = *(undefined8 *)(in_RSI + 0x38);
  *(undefined8 *)(lVar16 + 0x10) = uVar10;
  *(undefined8 *)(lVar16 + 0x30) = uVar5;
  *(undefined8 *)(lVar16 + 0x38) = uVar6;
  uVar10 = *(undefined8 *)(in_RSI + 0x48);
  *(undefined8 *)(lVar16 + 0x40) = *(undefined8 *)(in_RSI + 0x40);
  *(undefined8 *)(lVar16 + 0x48) = uVar10;
  if (in_RSI + 0x50 != lVar16 + 0x50) {
    plVar14 = *(long **)(in_RSI + 0x60);
    lVar9 = *(long *)(in_RSI + 0x50) * 0x28;
    plVar2 = plVar14 + *(long *)(in_RSI + 0x50) * 5;
    if (*(long *)(lVar16 + 0x50) != 0) {
      plVar17 = *(long **)(lVar16 + 0x60);
      plVar3 = plVar17 + *(long *)(lVar16 + 0x50) * 5;
joined_r0x00105263:
      if (plVar17 < plVar3) {
        do {
          plVar4 = (long *)*plVar17;
          if (plVar4 != (long *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) goto code_r0x00105288;
          }
          plVar17 = plVar17 + 5;
          if (plVar3 <= plVar17) break;
        } while( true );
      }
    }
    *(undefined8 *)(lVar16 + 0x50) = 0;
    uVar18 = (lVar9 >> 3) * -0x3333333333333333;
    if (*(ulong *)(lVar16 + 0x58) < uVar18) {
      puVar11 = (undefined8 *)(*Allocate)(lVar9);
      puVar8 = *(undefined8 **)(lVar16 + 0x60);
      if (puVar8 != (undefined8 *)0x0) {
        lVar9 = *(long *)(lVar16 + 0x50);
        if (puVar11 < puVar8) {
          for (puVar12 = puVar11; puVar12 < puVar11 + lVar9 * 5; puVar12 = puVar12 + 5) {
            *puVar12 = *puVar8;
            puVar12[1] = puVar8[1];
            *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(puVar8 + 2);
            *(undefined8 *)((long)puVar12 + 0x14) = *(undefined8 *)((long)puVar8 + 0x14);
            *(undefined4 *)((long)puVar12 + 0x1c) = *(undefined4 *)((long)puVar8 + 0x1c);
            *(undefined4 *)(puVar12 + 4) = *(undefined4 *)(puVar8 + 4);
            *(undefined1 *)((long)puVar12 + 0x24) = *(undefined1 *)((long)puVar8 + 0x24);
            puVar8 = puVar8 + 5;
          }
        }
        else {
          puVar12 = puVar11 + lVar9 * 5 + -5;
          puVar8 = puVar8 + lVar9 * 5 + -5;
          if (!CARRY8(lVar9 * 0x28 - 0x28,(ulong)puVar11)) {
            do {
              puVar15 = puVar12 + -5;
              *puVar12 = *puVar8;
              puVar12[1] = puVar8[1];
              *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(puVar8 + 2);
              *(undefined8 *)((long)puVar12 + 0x14) = *(undefined8 *)((long)puVar8 + 0x14);
              *(undefined4 *)((long)puVar12 + 0x1c) = *(undefined4 *)((long)puVar8 + 0x1c);
              *(undefined4 *)(puVar12 + 4) = *(undefined4 *)(puVar8 + 4);
              *(undefined1 *)((long)puVar12 + 0x24) = *(undefined1 *)((long)puVar8 + 0x24);
              puVar12 = puVar15;
              puVar8 = puVar8 + -5;
            } while (puVar11 <= puVar15);
          }
        }
        (*Free)();
      }
      *(undefined8 **)(lVar16 + 0x60) = puVar11;
      *(ulong *)(lVar16 + 0x58) = uVar18;
    }
    for (; plVar14 != plVar2; plVar14 = plVar14 + 5) {
      lVar9 = *(long *)(lVar16 + 0x50);
      *(long *)(lVar16 + 0x50) = lVar9 + 1;
      plVar3 = (long *)(*(long *)(lVar16 + 0x60) + lVar9 * 0x28);
      lVar9 = *plVar14;
      *plVar3 = lVar9;
      if (lVar9 != 0) {
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        UNLOCK();
      }
      plVar3[1] = plVar14[1];
      *(int *)(plVar3 + 2) = (int)plVar14[2];
      *(undefined8 *)((long)plVar3 + 0x14) = *(undefined8 *)((long)plVar14 + 0x14);
      *(undefined4 *)((long)plVar3 + 0x1c) = *(undefined4 *)((long)plVar14 + 0x1c);
      *(int *)(plVar3 + 4) = (int)plVar14[4];
      *(undefined1 *)((long)plVar3 + 0x24) = *(undefined1 *)((long)plVar14 + 0x24);
    }
    lVar16 = *in_RDI;
  }
  *(undefined4 *)(lVar16 + 0x68) = *(undefined4 *)(in_RSI + 0x68);
  if (in_RSI + 0x70 != lVar16 + 0x70) {
    lVar9 = *(long *)(in_RSI + 0x70);
    puVar8 = *(undefined8 **)(in_RSI + 0x80);
    *(undefined8 *)(lVar16 + 0x70) = 0;
    uVar18 = (lVar9 * 0x60 >> 5) * -0x5555555555555555;
    if (*(ulong *)(lVar16 + 0x78) < uVar18) {
      uVar10 = (*Reallocate)(*(undefined8 *)(lVar16 + 0x80),*(ulong *)(lVar16 + 0x78) * 0x60);
      *(ulong *)(lVar16 + 0x78) = uVar18;
      *(undefined8 *)(lVar16 + 0x80) = uVar10;
    }
    if (puVar8 != puVar8 + lVar9 * 0xc) {
      lVar13 = *(long *)(lVar16 + 0x70);
      puVar11 = (undefined8 *)(lVar13 * 0x60 + *(long *)(lVar16 + 0x80));
      puVar12 = puVar8;
      do {
        uVar10 = *puVar12;
        uVar5 = puVar12[1];
        lVar13 = lVar13 + 1;
        puVar15 = puVar12 + 0xc;
        *(long *)(lVar16 + 0x70) = lVar13;
        *puVar11 = uVar10;
        puVar11[1] = uVar5;
        uVar10 = puVar12[3];
        puVar11[2] = puVar12[2];
        puVar11[3] = uVar10;
        uVar10 = puVar12[5];
        puVar11[4] = puVar12[4];
        puVar11[5] = uVar10;
        uVar10 = puVar12[7];
        puVar11[6] = puVar12[6];
        puVar11[7] = uVar10;
        uVar10 = puVar12[9];
        puVar11[8] = puVar12[8];
        puVar11[9] = uVar10;
        uVar10 = puVar12[0xb];
        puVar11[10] = puVar12[10];
        puVar11[0xb] = uVar10;
        puVar11 = puVar11 + 0xc;
        puVar12 = puVar15;
      } while (puVar8 + lVar9 * 0xc != puVar15);
    }
  }
  return;
code_r0x00105288:
  plVar17 = plVar17 + 5;
  (**(code **)(*plVar4 + 8))();
  goto joined_r0x00105263;
}



/* JPH::MutableCompoundShape::AdjustCenterOfMass() */

void __thiscall JPH::MutableCompoundShape::AdjustCenterOfMass(MutableCompoundShape *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  float fVar8;
  float fVar10;
  float fVar11;
  undefined1 auVar9 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_88 [22];
  long local_30;
  
  puVar1 = *(undefined8 **)(this + 0x60);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(this + 0x50);
  if (puVar1 + lVar2 * 5 == puVar1) {
    auVar12._0_4_ = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    auVar9 = ZEXT816(0);
  }
  else {
    auVar9 = (undefined1  [16])0x0;
    auVar12._0_4_ = 0.0;
    puVar6 = puVar1;
    do {
      puVar7 = puVar6 + 5;
      (**(code **)(*(long *)*puVar6 + 0x40))(local_88);
      local_a8 = auVar9._0_4_;
      fStack_a4 = auVar9._4_4_;
      fStack_a0 = auVar9._8_4_;
      fStack_9c = auVar9._12_4_;
      auVar12._0_4_ = auVar12._0_4_ + local_88[0];
      auVar9._0_4_ = local_a8 + local_88[0] * *(float *)(puVar6 + 1);
      auVar9._4_4_ = fStack_a4 + local_88[0] * *(float *)((long)puVar6 + 0xc);
      auVar9._8_4_ = fStack_a0 + local_88[0] * *(float *)(puVar6 + 2);
      auVar9._12_4_ = fStack_9c + local_88[0] * *(float *)((long)puVar6 + 0x14);
      puVar6 = puVar7;
    } while (puVar1 + lVar2 * 5 != puVar7);
    if (0.0 < auVar12._0_4_) {
      auVar12._4_4_ = auVar12._0_4_;
      auVar12._8_4_ = auVar12._0_4_;
      auVar12._12_4_ = auVar12._0_4_;
      auVar9 = divps(auVar9,auVar12);
    }
    lVar3 = *(long *)(this + 0x60);
    auVar12._0_4_ = 0.0 - auVar9._0_4_;
    fVar13 = 0.0 - auVar9._4_4_;
    fVar14 = 0.0 - auVar9._8_4_;
    fVar15 = 0.0 - auVar9._12_4_;
    lVar2 = lVar3 + *(long *)(this + 0x50) * 0x28;
    for (; lVar2 != lVar3; lVar3 = lVar3 + 0x28) {
      *(ulong *)(lVar3 + 8) =
           CONCAT44(*(float *)(lVar3 + 0xc) - auVar9._4_4_,*(float *)(lVar3 + 8) - auVar9._0_4_);
      *(float *)(lVar3 + 0x10) = *(float *)(lVar3 + 0x10) - auVar9._8_4_;
    }
  }
  pfVar4 = *(float **)(this + 0x80);
  pfVar5 = pfVar4 + *(long *)(this + 0x70) * 0x18;
  fVar8 = auVar9._0_4_;
  fVar10 = auVar9._4_4_;
  fVar11 = auVar9._8_4_;
  for (; pfVar5 != pfVar4; pfVar4 = pfVar4 + 0x18) {
    *pfVar4 = *pfVar4 - fVar8;
    pfVar4[1] = pfVar4[1] - fVar8;
    pfVar4[2] = pfVar4[2] - fVar8;
    pfVar4[3] = pfVar4[3] - fVar8;
    pfVar4[4] = pfVar4[4] - fVar10;
    pfVar4[5] = pfVar4[5] - fVar10;
    pfVar4[6] = pfVar4[6] - fVar10;
    pfVar4[7] = pfVar4[7] - fVar10;
    pfVar4[8] = pfVar4[8] - fVar11;
    pfVar4[9] = pfVar4[9] - fVar11;
    pfVar4[10] = pfVar4[10] - fVar11;
    pfVar4[0xb] = pfVar4[0xb] - fVar11;
    pfVar4[0xc] = pfVar4[0xc] - fVar8;
    pfVar4[0xd] = pfVar4[0xd] - fVar8;
    pfVar4[0xe] = pfVar4[0xe] - fVar8;
    pfVar4[0xf] = pfVar4[0xf] - fVar8;
    pfVar4[0x10] = pfVar4[0x10] - fVar10;
    pfVar4[0x11] = pfVar4[0x11] - fVar10;
    pfVar4[0x12] = pfVar4[0x12] - fVar10;
    pfVar4[0x13] = pfVar4[0x13] - fVar10;
    pfVar4[0x14] = pfVar4[0x14] - fVar11;
    pfVar4[0x15] = pfVar4[0x15] - fVar11;
    pfVar4[0x16] = pfVar4[0x16] - fVar11;
    pfVar4[0x17] = pfVar4[0x17] - fVar11;
  }
  *(float *)(this + 0x20) = fVar8 + *(float *)(this + 0x20);
  *(float *)(this + 0x24) = fVar10 + *(float *)(this + 0x24);
  *(float *)(this + 0x28) = fVar11 + *(float *)(this + 0x28);
  *(float *)(this + 0x2c) = auVar9._12_4_ + *(float *)(this + 0x2c);
  *(float *)(this + 0x30) = *(float *)(this + 0x30) + auVar12._0_4_;
  *(float *)(this + 0x34) = *(float *)(this + 0x34) + fVar13;
  *(float *)(this + 0x38) = *(float *)(this + 0x38) + fVar14;
  *(float *)(this + 0x3c) = *(float *)(this + 0x3c) + fVar15;
  *(float *)(this + 0x40) = auVar12._0_4_ + *(float *)(this + 0x40);
  *(float *)(this + 0x44) = fVar13 + *(float *)(this + 0x44);
  *(float *)(this + 0x48) = fVar14 + *(float *)(this + 0x48);
  *(float *)(this + 0x4c) = fVar15 + *(float *)(this + 0x4c);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::MutableCompoundShape::CalculateLocalBounds() */

void __thiscall JPH::MutableCompoundShape::CalculateLocalBounds(MutableCompoundShape *this)

{
  long *plVar1;
  undefined1 (*pauVar2) [16];
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  uint uVar10;
  long *plVar11;
  float fVar12;
  undefined4 uVar14;
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  uVar14 = _LC6;
  uVar10 = (int)*(long *)(this + 0x50) + 3U >> 2;
  if (uVar10 == 0) {
    *(undefined4 *)(this + 0x30) = _LC6;
    *(undefined4 *)(this + 0x34) = uVar14;
    *(undefined4 *)(this + 0x38) = uVar14;
    *(undefined4 *)(this + 0x3c) = uVar14;
    uVar14 = _LC8;
    *(undefined4 *)(this + 0x40) = _LC8;
    *(undefined4 *)(this + 0x44) = uVar14;
    *(undefined4 *)(this + 0x48) = uVar14;
    *(undefined4 *)(this + 0x4c) = uVar14;
  }
  else {
    pauVar2 = *(undefined1 (**) [16])(this + 0x80);
    auVar19 = *pauVar2;
    auVar18 = pauVar2[1];
    auVar15 = pauVar2[2];
    auVar17 = pauVar2[3];
    auVar16 = pauVar2[4];
    auVar13 = pauVar2[5];
    pauVar9 = pauVar2;
    while (pauVar8 = pauVar9 + 6, pauVar8 < pauVar2 + (ulong)uVar10 * 6) {
      auVar19 = minps(auVar19,*pauVar8);
      auVar18 = minps(auVar18,pauVar9[7]);
      auVar15 = minps(auVar15,pauVar9[8]);
      auVar17 = maxps(auVar17,pauVar9[9]);
      auVar16 = maxps(auVar16,pauVar9[10]);
      auVar13 = maxps(auVar13,pauVar9[0xb]);
      pauVar9 = pauVar8;
    }
    auVar20._12_4_ = auVar19._8_4_;
    auVar20._0_12_ = auVar19._4_12_;
    auVar20 = minps(auVar19,auVar20);
    uVar14 = auVar20._8_4_;
    auVar19._4_4_ = uVar14;
    auVar19._0_4_ = uVar14;
    auVar19._8_4_ = uVar14;
    auVar19._12_4_ = uVar14;
    auVar21 = minps(auVar20,auVar19);
    auVar4._12_4_ = auVar18._8_4_;
    auVar4._0_12_ = auVar18._4_12_;
    auVar19 = minps(auVar18,auVar4);
    uVar14 = auVar19._8_4_;
    auVar18._4_4_ = uVar14;
    auVar18._0_4_ = uVar14;
    auVar18._8_4_ = uVar14;
    auVar18._12_4_ = uVar14;
    auVar20 = minps(auVar19,auVar18);
    auVar5._12_4_ = auVar15._8_4_;
    auVar5._0_12_ = auVar15._4_12_;
    auVar19 = minps(auVar15,auVar5);
    uVar14 = auVar19._8_4_;
    auVar15._4_4_ = uVar14;
    auVar15._0_4_ = uVar14;
    auVar15._8_4_ = uVar14;
    auVar15._12_4_ = uVar14;
    auVar19 = minps(auVar19,auVar15);
    auVar6._12_4_ = auVar17._8_4_;
    auVar6._0_12_ = auVar17._4_12_;
    auVar18 = maxps(auVar17,auVar6);
    uVar14 = auVar18._8_4_;
    auVar17._4_4_ = uVar14;
    auVar17._0_4_ = uVar14;
    auVar17._8_4_ = uVar14;
    auVar17._12_4_ = uVar14;
    auVar15 = maxps(auVar18,auVar17);
    *(ulong *)(this + 0x30) = CONCAT44(auVar20._0_4_,auVar21._0_4_);
    *(ulong *)(this + 0x38) = CONCAT44(auVar19._0_4_,auVar19._0_4_);
    auVar21._12_4_ = auVar16._8_4_;
    auVar21._0_12_ = auVar16._4_12_;
    auVar19 = maxps(auVar16,auVar21);
    uVar14 = auVar19._8_4_;
    auVar16._4_4_ = uVar14;
    auVar16._0_4_ = uVar14;
    auVar16._8_4_ = uVar14;
    auVar16._12_4_ = uVar14;
    auVar18 = maxps(auVar19,auVar16);
    auVar7._12_4_ = auVar13._8_4_;
    auVar7._0_12_ = auVar13._4_12_;
    auVar19 = maxps(auVar13,auVar7);
    uVar14 = auVar19._8_4_;
    auVar13._4_4_ = uVar14;
    auVar13._0_4_ = uVar14;
    auVar13._8_4_ = uVar14;
    auVar13._12_4_ = uVar14;
    auVar19 = maxps(auVar19,auVar13);
    *(ulong *)(this + 0x40) = CONCAT44(auVar18._0_4_,auVar15._0_4_);
    *(ulong *)(this + 0x48) = CONCAT44(auVar19._0_4_,auVar19._0_4_);
  }
  plVar11 = *(long **)(this + 0x60);
  *(undefined4 *)(this + 0x68) = 0x7f7fffff;
  plVar1 = plVar11 + *(long *)(this + 0x50) * 5;
  for (; plVar11 != plVar1; plVar11 = plVar11 + 5) {
    pcVar3 = *(code **)(*(long *)*plVar11 + 0x38);
    if (pcVar3 == CompoundShape::GetInnerRadius) {
      fVar12 = *(float *)((long *)*plVar11 + 0xd);
    }
    else {
      fVar12 = (float)(*pcVar3)();
    }
    if (*(float *)(this + 0x68) <= fVar12) {
      fVar12 = *(float *)(this + 0x68);
    }
    *(float *)(this + 0x68) = fVar12;
  }
  return;
}



/* JPH::MutableCompoundShape::EnsureSubShapeBoundsCapacity() */

void __thiscall JPH::MutableCompoundShape::EnsureSubShapeBoundsCapacity(MutableCompoundShape *this)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(*(int *)(this + 0x50) + 3U >> 2);
  if (*(ulong *)(this + 0x70) < uVar2) {
    if (*(ulong *)(this + 0x78) < uVar2) {
      uVar1 = (*Reallocate)(*(undefined8 *)(this + 0x80),*(ulong *)(this + 0x78) * 0x60,uVar2 * 0x60
                           );
      *(ulong *)(this + 0x78) = uVar2;
      *(undefined8 *)(this + 0x80) = uVar1;
    }
    *(ulong *)(this + 0x70) = uVar2;
  }
  return;
}



/* JPH::MutableCompoundShape::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::MutableCompoundShape::RestoreBinaryState(MutableCompoundShape *this,StreamIn *param_1)

{
  JPH::CompoundShape::RestoreBinaryState((StreamIn *)this);
  EnsureSubShapeBoundsCapacity(this);
                    /* WARNING: Could not recover jumptable at 0x00105924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))
            (param_1,*(undefined8 *)(this + 0x80),(*(int *)(this + 0x50) + 3U >> 2) * 0x60);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MutableCompoundShape::CalculateSubShapeBounds(unsigned int, unsigned int) */

void __thiscall
JPH::MutableCompoundShape::CalculateSubShapeBounds
          (MutableCompoundShape *this,uint param_1,uint param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  uint uVar9;
  long in_FS_OFFSET;
  undefined1 auVar10 [12];
  float fVar12;
  undefined1 auVar13 [12];
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  ulong uStack_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 local_40;
  float local_3c;
  long local_30;
  undefined1 auVar11 [16];
  undefined1 auVar14 [16];
  
  uVar9 = param_1 & 0xfffffffc;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  EnsureSubShapeBoundsCapacity(this);
  fVar17 = _LC17;
  if (param_1 + param_2 <= uVar9) {
LAB_00105c73:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      CalculateLocalBounds(this);
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00105990:
  lVar8 = 0;
  uVar6 = (ulong)uVar9;
  auVar11 = __LC8;
  auVar14 = __LC6;
  if (uVar6 < *(ulong *)(this + 0x50)) goto LAB_001059f5;
  do {
    auVar13 = auVar14._0_12_;
    auVar10 = auVar11._0_12_;
    lVar4 = lVar8;
    while( true ) {
      if (lVar4 == 3) {
        uVar5 = uVar9 >> 2;
        uVar9 = uVar9 + 4;
        local_c8._12_4_ = fVar17;
        local_c8._0_12_ = auVar13;
        puVar7 = (undefined4 *)((ulong)uVar5 * 0x60 + *(long *)(this + 0x80));
        local_88._12_4_ = fVar17;
        local_88._0_12_ = auVar10;
        puVar7[4] = uStack_f4;
        puVar7[5] = (int)((ulong)local_e8 >> 0x20);
        puVar7[6] = uStack_d4;
        puVar7[7] = auVar13._4_4_;
        *puVar7 = local_f8;
        puVar7[1] = (int)local_e8;
        puVar7[2] = local_d8;
        puVar7[3] = auVar13._0_4_;
        puVar7[8] = uStack_f0;
        puVar7[9] = uStack_e0;
        puVar7[10] = (int)uStack_d0;
        puVar7[0xb] = auVar13._8_4_;
        puVar7[0xc] = local_b8;
        puVar7[0xd] = (int)local_a8;
        puVar7[0xe] = (int)local_98;
        puVar7[0xf] = auVar10._0_4_;
        puVar7[0x10] = uStack_b4;
        puVar7[0x11] = (int)((ulong)local_a8 >> 0x20);
        puVar7[0x12] = (int)((ulong)local_98 >> 0x20);
        puVar7[0x13] = auVar10._4_4_;
        puVar7[0x14] = uStack_b0;
        puVar7[0x15] = uStack_a0;
        puVar7[0x16] = uStack_90;
        puVar7[0x17] = auVar10._8_4_;
        if (uVar9 < param_1 + param_2) goto LAB_00105990;
        goto LAB_00105c73;
      }
      lVar8 = lVar4 + 1;
      auVar18._0_12_ = auVar14._0_12_;
      auVar18._12_4_ = 0;
      *(undefined1 (*) [16])(&local_f8 + lVar4 * 4) = auVar18;
      auVar16._0_12_ = auVar11._0_12_;
      auVar16._12_4_ = 0;
      *(undefined1 (*) [16])(&local_b8 + lVar4 * 4) = auVar16;
      uVar6 = (ulong)(uVar9 + (int)lVar8);
      if (*(ulong *)(this + 0x50) <= uVar6) break;
LAB_001059f5:
      puVar1 = (undefined8 *)(*(long *)(this + 0x60) + uVar6 * 0x28);
      local_48 = puVar1[1];
      local_40 = *(undefined4 *)(puVar1 + 2);
      if (*(char *)((long)puVar1 + 0x24) == '\0') {
        fVar2 = *(float *)((long)puVar1 + 0x14);
        fVar3 = *(float *)(puVar1 + 3);
        fVar12 = *(float *)((long)puVar1 + 0x1c);
        fVar19 = fVar17 - (fVar12 * fVar12 + fVar3 * fVar3 + fVar2 * fVar2 + 0.0);
        fVar20 = 0.0;
        if (0.0 <= fVar19) {
          fVar20 = SQRT(fVar19);
        }
        fVar21 = fVar2 + fVar2;
        fVar22 = fVar3 + fVar3;
        fVar24 = (fVar12 + fVar12) * fVar12;
        fVar23 = (fVar12 + fVar12) * fVar20;
        fVar25 = fVar12 * fVar22 - fVar21 * fVar20;
        fVar19 = fVar22 * fVar20 + fVar21 * fVar12;
        fVar15 = fVar21 * fVar12 - fVar22 * fVar20;
        uStack_60 = (ulong)(uint)(fVar21 * fVar20 + fVar12 * fVar22);
        fVar12 = fVar3 * fVar21 - fVar23;
        fVar23 = fVar3 * fVar21 + fVar23;
        fVar20 = (fVar17 - fVar2 * fVar21) - fVar22 * fVar3;
        fVar21 = (fVar17 - fVar24) - fVar2 * fVar21;
        fVar2 = (fVar17 - fVar22 * fVar3) - fVar24;
      }
      else {
        fVar23 = 0.0;
        fVar15 = 0.0;
        fVar12 = 0.0;
        fVar25 = 0.0;
        uStack_60 = 0;
        fVar19 = 0.0;
        fVar20 = fVar17;
        fVar21 = fVar17;
        fVar2 = fVar17;
      }
      local_78._4_4_ = fVar23;
      local_78._0_4_ = fVar2;
      local_68 = CONCAT44(fVar21,fVar12);
      local_78._8_4_ = fVar15;
      local_78._12_4_ = 0;
      local_58._4_4_ = fVar25;
      local_58._0_4_ = fVar19;
      local_58._8_4_ = fVar20;
      local_58._12_4_ = 0;
      local_3c = fVar17;
      (**(code **)(*(long *)*puVar1 + 0x30))
                (0x3f8000003f800000,0x3f8000003f800000,local_118,(long *)*puVar1,local_78);
      auVar13 = local_118._0_12_;
      auVar10 = local_108._0_12_;
      lVar4 = lVar8;
      auVar11 = local_108;
      auVar14 = local_118;
      fVar17 = _LC17;
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MutableCompoundShape::MutableCompoundShape(JPH::MutableCompoundShapeSettings const&,
   JPH::Result<JPH::Ref<JPH::Shape> >&) */

void __thiscall
JPH::MutableCompoundShape::MutableCompoundShape
          (MutableCompoundShape *this,MutableCompoundShapeSettings *param_1,Result *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  Result *pRVar16;
  Result *pRVar17;
  long in_FS_OFFSET;
  long *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  uVar6 = _LC6;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x30) = uVar6;
  *(undefined4 *)(this + 0x34) = uVar6;
  *(undefined4 *)(this + 0x38) = uVar6;
  *(undefined4 *)(this + 0x3c) = uVar6;
  uVar6 = _LC8;
  *(undefined8 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0x40) = uVar6;
  *(undefined4 *)(this + 0x44) = uVar6;
  *(undefined4 *)(this + 0x48) = uVar6;
  *(undefined4 *)(this + 0x4c) = uVar6;
  *(undefined2 *)(this + 0x18) = 0x801;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
  lVar15 = *(long *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x68) = 0x7f7fffff;
  *(undefined ***)this = &PTR__MutableCompoundShape_00107fe0;
  *(undefined8 *)(this + 0x80) = 0;
  if (lVar15 != 0) {
    puVar10 = (undefined8 *)(*Allocate)(lVar15 * 0x28);
    puVar14 = *(undefined8 **)(this + 0x60);
    if (puVar14 != (undefined8 *)0x0) {
      lVar3 = *(long *)(this + 0x50);
      if (puVar10 < puVar14) {
        for (puVar12 = puVar10; puVar12 < puVar10 + lVar3 * 5; puVar12 = puVar12 + 5) {
          *puVar12 = *puVar14;
          puVar12[1] = puVar14[1];
          *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(puVar14 + 2);
          *(undefined8 *)((long)puVar12 + 0x14) = *(undefined8 *)((long)puVar14 + 0x14);
          *(undefined4 *)((long)puVar12 + 0x1c) = *(undefined4 *)((long)puVar14 + 0x1c);
          *(undefined4 *)(puVar12 + 4) = *(undefined4 *)(puVar14 + 4);
          *(undefined1 *)((long)puVar12 + 0x24) = *(undefined1 *)((long)puVar14 + 0x24);
          puVar14 = puVar14 + 5;
        }
      }
      else {
        puVar14 = puVar14 + lVar3 * 5 + -5;
        puVar12 = puVar10 + lVar3 * 5 + -5;
        if (!CARRY8(lVar3 * 0x28 - 0x28,(ulong)puVar10)) {
          do {
            puVar13 = puVar12 + -5;
            *puVar12 = *puVar14;
            puVar12[1] = puVar14[1];
            *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(puVar14 + 2);
            *(undefined8 *)((long)puVar12 + 0x14) = *(undefined8 *)((long)puVar14 + 0x14);
            *(undefined4 *)((long)puVar12 + 0x1c) = *(undefined4 *)((long)puVar14 + 0x1c);
            *(undefined4 *)(puVar12 + 4) = *(undefined4 *)(puVar14 + 4);
            *(undefined1 *)((long)puVar12 + 0x24) = *(undefined1 *)((long)puVar14 + 0x24);
            puVar12 = puVar13;
            puVar14 = puVar14 + -5;
          } while (puVar10 <= puVar13);
        }
      }
      (*Free)();
    }
    *(long *)(this + 0x58) = lVar15;
    pRVar16 = *(Result **)(param_1 + 0x50);
    lVar15 = *(long *)(param_1 + 0x40);
    *(undefined8 **)(this + 0x60) = puVar10;
    pRVar17 = pRVar16 + lVar15 * 0x40;
    if (pRVar17 != pRVar16) {
      do {
        local_68 = (long *)0x0;
        cVar8 = CompoundShape::SubShape::FromSettings((SubShapeSettings *)&local_68,pRVar16);
        if (cVar8 == '\0') {
          if (local_68 == (long *)0x0) goto LAB_00105dbc;
          LOCK();
          plVar4 = local_68 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 != 0) goto LAB_00105dbc;
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010608a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*local_68 + 8))();
            return;
          }
          goto LAB_00106268;
        }
        lVar15 = *(long *)(this + 0x50);
        uVar11 = lVar15 + 1;
        if (*(ulong *)(this + 0x58) < uVar11) {
          uVar5 = *(ulong *)(this + 0x58) * 2;
          if (uVar11 <= uVar5) {
            uVar11 = uVar5;
          }
          puVar14 = (undefined8 *)(*Allocate)(uVar11 * 0x28);
          puVar10 = *(undefined8 **)(this + 0x60);
          if (puVar10 != (undefined8 *)0x0) {
            lVar15 = *(long *)(this + 0x50);
            if (puVar14 < puVar10) {
              for (puVar12 = puVar14; puVar12 < puVar14 + lVar15 * 5; puVar12 = puVar12 + 5) {
                *puVar12 = *puVar10;
                puVar12[1] = puVar10[1];
                *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(puVar10 + 2);
                *(undefined8 *)((long)puVar12 + 0x14) = *(undefined8 *)((long)puVar10 + 0x14);
                *(undefined4 *)((long)puVar12 + 0x1c) = *(undefined4 *)((long)puVar10 + 0x1c);
                *(undefined4 *)(puVar12 + 4) = *(undefined4 *)(puVar10 + 4);
                *(undefined1 *)((long)puVar12 + 0x24) = *(undefined1 *)((long)puVar10 + 0x24);
                puVar10 = puVar10 + 5;
              }
            }
            else {
              puVar12 = puVar14 + lVar15 * 5 + -5;
              puVar10 = puVar10 + lVar15 * 5 + -5;
              if (!CARRY8(lVar15 * 0x28 - 0x28,(ulong)puVar14)) {
                do {
                  puVar13 = puVar12 + -5;
                  *puVar12 = *puVar10;
                  puVar12[1] = puVar10[1];
                  *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(puVar10 + 2);
                  *(undefined8 *)((long)puVar12 + 0x14) = *(undefined8 *)((long)puVar10 + 0x14);
                  *(undefined4 *)((long)puVar12 + 0x1c) = *(undefined4 *)((long)puVar10 + 0x1c);
                  *(undefined4 *)(puVar12 + 4) = *(undefined4 *)(puVar10 + 4);
                  *(undefined1 *)((long)puVar12 + 0x24) = *(undefined1 *)((long)puVar10 + 0x24);
                  puVar12 = puVar13;
                  puVar10 = puVar10 + -5;
                } while (puVar14 <= puVar13);
              }
            }
            (*Free)();
          }
          lVar15 = *(long *)(this + 0x50);
          *(undefined8 **)(this + 0x60) = puVar14;
          *(ulong *)(this + 0x58) = uVar11;
          uVar11 = lVar15 + 1;
        }
        else {
          puVar14 = *(undefined8 **)(this + 0x60);
        }
        *(ulong *)(this + 0x50) = uVar11;
        puVar14 = puVar14 + lVar15 * 5;
        *puVar14 = local_68;
        if (local_68 == (long *)0x0) {
          puVar14[1] = local_60;
          *(undefined4 *)(puVar14 + 2) = local_58;
          *(undefined8 *)((long)puVar14 + 0x14) = local_54;
          *(undefined4 *)((long)puVar14 + 0x1c) = local_4c;
          *(undefined4 *)(puVar14 + 4) = local_48;
          *(undefined1 *)((long)puVar14 + 0x24) = local_44;
        }
        else {
          LOCK();
          *(int *)(local_68 + 1) = (int)local_68[1] + 1;
          UNLOCK();
          puVar14[1] = local_60;
          *(undefined4 *)(puVar14 + 2) = local_58;
          *(undefined8 *)((long)puVar14 + 0x14) = local_54;
          *(undefined4 *)((long)puVar14 + 0x1c) = local_4c;
          *(undefined4 *)(puVar14 + 4) = local_48;
          *(undefined1 *)((long)puVar14 + 0x24) = local_44;
          if (local_68 != (long *)0x0) {
            LOCK();
            plVar4 = local_68 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)(*local_68 + 8))();
            }
          }
        }
        pRVar16 = pRVar16 + 0x40;
      } while (pRVar17 != pRVar16);
    }
  }
  AdjustCenterOfMass(this);
  CalculateSubShapeBounds(this,0,*(uint *)(this + 0x50));
  uVar9 = JPH::CompoundShape::GetSubShapeIDBitsRecursive();
  if (uVar9 < 0x21) {
    LOCK();
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    UNLOCK();
    if (param_2[0x20] == (Result)0x1) {
      plVar4 = *(long **)param_2;
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
      (*Free)();
    }
    *(MutableCompoundShape **)param_2 = this;
    param_2[0x20] = (Result)0x1;
  }
  else {
    if (param_2[0x20] == (Result)0x1) {
      plVar4 = *(long **)param_2;
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
      (*Free)();
    }
    param_2[0x20] = (Result)0x0;
    *(Result **)param_2 = param_2 + 0x10;
    puVar14 = (undefined8 *)(*Allocate)(0x55);
    uVar7 = _UNK_001081d8;
    uVar2 = __LC26;
    *(undefined8 *)(param_2 + 0x10) = 0x54;
    *(undefined8 **)param_2 = puVar14;
    *puVar14 = uVar2;
    puVar14[1] = uVar7;
    uVar7 = _UNK_001081e8;
    uVar2 = __LC27;
    *(undefined4 *)(puVar14 + 10) = 0x73746962;
    puVar14[2] = uVar2;
    puVar14[3] = uVar7;
    uVar2 = _UNK_001081f8;
    puVar14[4] = __LC28;
    puVar14[5] = uVar2;
    uVar2 = _UNK_00108208;
    puVar14[6] = __LC29;
    puVar14[7] = uVar2;
    uVar2 = _UNK_00108218;
    puVar14[8] = __LC30;
    puVar14[9] = uVar2;
    *(undefined8 *)(param_2 + 8) = 0x54;
    *(undefined1 *)(*(long *)param_2 + 0x54) = 0;
    param_2[0x20] = (Result)0x2;
  }
LAB_00105dbc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00106268:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::MutableCompoundShapeSettings::Create() const */

void JPH::MutableCompoundShapeSettings::Create(void)

{
  MutableCompoundShape *pMVar1;
  long lVar2;
  MutableCompoundShapeSettings MVar3;
  MutableCompoundShape *this;
  MutableCompoundShapeSettings *in_RSI;
  long *in_RDI;
  
  MVar3 = in_RSI[0x38];
  if (MVar3 == (MutableCompoundShapeSettings)0x0) {
    this = (MutableCompoundShape *)(*Allocate)(0x90);
    MutableCompoundShape::MutableCompoundShape(this,in_RSI,(Result *)(in_RSI + 0x18));
    pMVar1 = this + 8;
    LOCK();
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)pMVar1 = *(int *)pMVar1 + -1;
    UNLOCK();
    if (*(int *)pMVar1 == 0) {
      (**(code **)(*(long *)this + 8))(this);
      MVar3 = in_RSI[0x38];
    }
    else {
      MVar3 = in_RSI[0x38];
    }
  }
  *(MutableCompoundShapeSettings *)(in_RDI + 4) = MVar3;
  if (MVar3 == (MutableCompoundShapeSettings)0x1) {
    lVar2 = *(long *)(in_RSI + 0x18);
    *in_RDI = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
      return;
    }
  }
  else if (MVar3 == (MutableCompoundShapeSettings)0x2) {
    *in_RDI = (long)(in_RDI + 2);
    std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
    _M_construct<char*>();
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MutableCompoundShape::AddShape(JPH::Vec3, JPH::Quat, JPH::Shape const*, unsigned int) */

uint JPH::MutableCompoundShape::AddShape
               (undefined8 param_1,float param_2,undefined8 param_3,undefined8 param_4,
               MutableCompoundShape *param_5,long *param_6,undefined4 param_7)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [12];
  float local_68;
  float fStack_64;
  float local_50;
  float fStack_4c;
  
  fVar23 = (float)((ulong)param_4 >> 0x20);
  fVar21 = (float)param_4;
  fVar20 = (float)((ulong)param_3 >> 0x20);
  fVar19 = (float)param_3;
  if (param_6 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  plVar1 = param_6 + 1;
  LOCK();
  *(int *)(param_6 + 1) = (int)param_6[1] + 1;
  UNLOCK();
  fVar6 = *(float *)(param_5 + 0x20);
  fVar7 = *(float *)(param_5 + 0x24);
  fVar8 = *(float *)(param_5 + 0x28);
  auVar30 = (**(code **)(*param_6 + 0x18))(param_6);
  fVar18 = auVar30._8_4_;
  local_50 = auVar30._0_4_;
  fStack_4c = auVar30._4_4_;
  fVar25 = (float)(_LC23 ^ (uint)fVar19);
  fVar26 = (float)(_UNK_001081a4 ^ (uint)fVar20);
  fVar27 = (float)(_UNK_001081a8 ^ (uint)fVar21);
  fVar28 = (float)(_UNK_001081ac ^ (uint)fVar23);
  fVar29 = (fVar23 * local_50 + fVar19 * 0.0 + fVar20 * fVar18) - fVar21 * fStack_4c;
  fVar24 = (fVar23 * fStack_4c - fVar19 * fVar18) + fVar20 * 0.0 + fVar21 * local_50;
  fVar22 = ((fVar23 * fVar18 + fVar19 * fStack_4c) - fVar20 * local_50) + fVar21 * 0.0;
  fVar18 = ((fVar23 * 0.0 - fVar19 * local_50) - fVar20 * fStack_4c) - fVar21 * fVar18;
  local_68 = (float)param_1;
  fStack_64 = (float)((ulong)param_1 >> 0x20);
  if (((__LC13 - fVar19) * (__LC13 - fVar19) + (_UNK_00108194 - fVar20) * (_UNK_00108194 - fVar20) +
       (_UNK_00108198 - fVar21) * (_UNK_00108198 - fVar21) + (_LC17 - fVar23) * (_LC17 - fVar23) <=
       _LC20) ||
     ((__LC21 - fVar19) * (__LC21 - fVar19) + (_UNK_001081b4 - fVar20) * (_UNK_001081b4 - fVar20) +
      (_UNK_001081b8 - fVar21) * (_UNK_001081b8 - fVar21) +
      (_UNK_001081bc - fVar23) * (_UNK_001081bc - fVar23) <= _LC20)) {
    uVar14 = 1;
    auVar30._4_4_ = _LC17;
    auVar30._0_4_ = _LC17;
    auVar30._8_4_ = _LC17;
    fVar19 = __LC13;
    fVar20 = _UNK_00108194;
    fVar21 = _UNK_00108198;
  }
  else {
    uVar14 = 0;
    auVar30._4_4_ = fVar23;
    auVar30._0_4_ = fVar23;
    auVar30._8_4_ = fVar23;
  }
  lVar4 = *(long *)(param_5 + 0x50);
  uVar15 = auVar30._0_4_ & _LC23;
  uVar16 = auVar30._4_4_ & _LC23;
  uVar17 = auVar30._8_4_ & _LC23;
  uVar2 = lVar4 + 1;
  if (*(ulong *)(param_5 + 0x58) < uVar2) {
    uVar13 = *(ulong *)(param_5 + 0x58) * 2;
    if (uVar13 < uVar2) {
      uVar13 = uVar2;
    }
    puVar9 = (undefined8 *)(*Allocate)(uVar13 * 0x28);
    puVar12 = *(undefined8 **)(param_5 + 0x60);
    if (puVar12 != (undefined8 *)0x0) {
      lVar4 = *(long *)(param_5 + 0x50);
      if (puVar9 < puVar12) {
        for (puVar10 = puVar9; puVar10 < puVar9 + lVar4 * 5; puVar10 = puVar10 + 5) {
          *puVar10 = *puVar12;
          puVar10[1] = puVar12[1];
          *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(puVar12 + 2);
          *(undefined8 *)((long)puVar10 + 0x14) = *(undefined8 *)((long)puVar12 + 0x14);
          *(undefined4 *)((long)puVar10 + 0x1c) = *(undefined4 *)((long)puVar12 + 0x1c);
          *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar12 + 4);
          *(undefined1 *)((long)puVar10 + 0x24) = *(undefined1 *)((long)puVar12 + 0x24);
          puVar12 = puVar12 + 5;
        }
      }
      else {
        puVar10 = puVar9 + lVar4 * 5 + -5;
        puVar12 = puVar12 + lVar4 * 5 + -5;
        if (!CARRY8(lVar4 * 0x28 - 0x28,(ulong)puVar9)) {
          do {
            puVar11 = puVar10 + -5;
            *puVar10 = *puVar12;
            puVar10[1] = puVar12[1];
            *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(puVar12 + 2);
            *(undefined8 *)((long)puVar10 + 0x14) = *(undefined8 *)((long)puVar12 + 0x14);
            *(undefined4 *)((long)puVar10 + 0x1c) = *(undefined4 *)((long)puVar12 + 0x1c);
            *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar12 + 4);
            *(undefined1 *)((long)puVar10 + 0x24) = *(undefined1 *)((long)puVar12 + 0x24);
            puVar10 = puVar11;
            puVar12 = puVar12 + -5;
          } while (puVar9 <= puVar11);
        }
      }
      (*Free)();
    }
    *(ulong *)(param_5 + 0x58) = uVar13;
    *(undefined8 **)(param_5 + 0x60) = puVar9;
    puVar9 = puVar9 + *(long *)(param_5 + 0x50) * 5;
    *(long *)(param_5 + 0x50) = *(long *)(param_5 + 0x50) + 1;
    *puVar9 = param_6;
  }
  else {
    *(ulong *)(param_5 + 0x50) = uVar2;
    puVar9 = (undefined8 *)(*(long *)(param_5 + 0x60) + lVar4 * 0x28);
    *puVar9 = param_6;
  }
  LOCK();
  *(int *)(param_6 + 1) = (int)param_6[1] + 1;
  UNLOCK();
  puVar9[3] = CONCAT44(uVar17 ^ (uint)fVar21,uVar16 ^ (uint)fVar20);
  *(undefined4 *)(puVar9 + 4) = param_7;
  *(undefined1 *)((long)puVar9 + 0x24) = uVar14;
  *(float *)(puVar9 + 1) =
       ((fVar24 * fVar27 + fVar25 * fVar18 + fVar29 * fVar28) - fVar22 * fVar26) +
       (local_68 - fVar6);
  *(float *)((long)puVar9 + 0xc) =
       fVar22 * fVar25 + fVar24 * fVar28 + (fVar26 * fVar18 - fVar29 * fVar27) + (fStack_64 - fVar7)
  ;
  *(float *)(puVar9 + 2) =
       fVar22 * fVar28 + ((fVar27 * fVar18 + fVar29 * fVar26) - fVar24 * fVar25) + (param_2 - fVar8)
  ;
  *(uint *)((long)puVar9 + 0x14) = uVar15 ^ (uint)fVar19;
  iVar3 = *(int *)(param_5 + 0x50);
  CalculateSubShapeBounds(param_5,iVar3 - 1U,1);
  LOCK();
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)(*param_6 + 8))(param_6);
  }
  return iVar3 - 1U;
}



/* JPH::MutableCompoundShape::RemoveShape(unsigned int) */

void __thiscall JPH::MutableCompoundShape::RemoveShape(MutableCompoundShape *this,uint param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  uVar5 = (ulong)param_1;
  lVar3 = uVar5 * 0x28;
  plVar4 = *(long **)(*(long *)(this + 0x60) + lVar3);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  lVar2 = *(ulong *)(this + 0x50) - 1;
  if (uVar5 + 1 < *(ulong *)(this + 0x50)) {
    lVar9 = lVar2 - uVar5;
    puVar6 = (undefined8 *)(*(long *)(this + 0x60) + 0x28 + lVar3);
    puVar7 = (undefined8 *)(*(long *)(this + 0x60) + lVar3);
    if (puVar7 < puVar6) {
      puVar10 = puVar7 + lVar9 * 5;
      for (; puVar7 < puVar10; puVar7 = puVar7 + 5) {
        *puVar7 = *puVar6;
        puVar7[1] = puVar6[1];
        *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar6 + 2);
        *(undefined8 *)((long)puVar7 + 0x14) = *(undefined8 *)((long)puVar6 + 0x14);
        *(undefined4 *)((long)puVar7 + 0x1c) = *(undefined4 *)((long)puVar6 + 0x1c);
        *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(puVar6 + 4);
        *(undefined1 *)((long)puVar7 + 0x24) = *(undefined1 *)((long)puVar6 + 0x24);
        puVar6 = puVar6 + 5;
      }
    }
    else {
      puVar6 = puVar6 + lVar9 * 5 + -5;
      puVar10 = puVar7 + lVar9 * 5 + -5;
      if (!CARRY8(lVar9 * 0x28 - 0x28,(ulong)puVar7)) {
        do {
          puVar11 = puVar10 + -5;
          *puVar10 = *puVar6;
          puVar10[1] = puVar6[1];
          *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(puVar6 + 2);
          *(undefined8 *)((long)puVar10 + 0x14) = *(undefined8 *)((long)puVar6 + 0x14);
          *(undefined4 *)((long)puVar10 + 0x1c) = *(undefined4 *)((long)puVar6 + 0x1c);
          *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar6 + 4);
          *(undefined1 *)((long)puVar10 + 0x24) = *(undefined1 *)((long)puVar6 + 0x24);
          puVar6 = puVar6 + -5;
          puVar10 = puVar11;
        } while (puVar7 <= puVar11);
      }
    }
  }
  *(long *)(this + 0x50) = lVar2;
  uVar8 = (int)lVar2 - param_1;
  if (uVar8 != 0) {
    CalculateSubShapeBounds(this,param_1,uVar8);
    return;
  }
  CalculateLocalBounds(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MutableCompoundShape::ModifyShape(unsigned int, JPH::Vec3, JPH::Quat) */

void JPH::MutableCompoundShape::ModifyShape
               (undefined8 param_1,float param_2,undefined8 param_3,undefined8 param_4,
               MutableCompoundShape *param_5,uint param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 uVar8;
  float fVar9;
  undefined8 uVar10;
  undefined1 auVar11 [12];
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_58;
  float fStack_54;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  
  fVar17 = (float)((ulong)param_4 >> 0x20);
  fVar15 = (float)param_4;
  fVar14 = (float)((ulong)param_3 >> 0x20);
  fVar13 = (float)param_3;
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  uVar3 = *(undefined8 *)(param_5 + 0x28);
  puVar1 = (undefined8 *)(*(long *)(param_5 + 0x60) + (ulong)param_6 * 0x28);
  fVar9 = param_2;
  uVar10 = (**(code **)(*(long *)*puVar1 + 0x18))();
  fVar7 = _LC17;
  fVar6 = _UNK_00108198;
  fVar5 = _UNK_00108194;
  fVar4 = __LC13;
  local_40 = (float)uVar10;
  fStack_3c = (float)((ulong)uVar10 >> 0x20);
  fVar19 = (float)(_LC23 ^ (uint)fVar13);
  fVar20 = (float)(_UNK_001081a4 ^ (uint)fVar14);
  fVar21 = (float)(_UNK_001081a8 ^ (uint)fVar15);
  fVar22 = (float)(_UNK_001081ac ^ (uint)fVar17);
  fVar23 = (fVar17 * local_40 + fVar13 * 0.0 + fVar14 * fVar9) - fVar15 * fStack_3c;
  fVar18 = (fVar17 * fStack_3c - fVar13 * fVar9) + fVar14 * 0.0 + fVar15 * local_40;
  fVar16 = ((fVar17 * fVar9 + fVar13 * fStack_3c) - fVar14 * local_40) + fVar15 * 0.0;
  fVar9 = ((fVar17 * 0.0 - fVar13 * local_40) - fVar14 * fStack_3c) - fVar15 * fVar9;
  local_58 = (float)param_1;
  fStack_54 = (float)((ulong)param_1 >> 0x20);
  local_38 = (float)uVar2;
  fStack_34 = (float)((ulong)uVar2 >> 0x20);
  fStack_30 = (float)uVar3;
  puVar1[1] = CONCAT44((fVar20 * fVar9 - fVar23 * fVar21) + fVar18 * fVar22 + fVar16 * fVar19 +
                       (fStack_54 - fStack_34),
                       ((fVar23 * fVar22 + fVar19 * fVar9 + fVar18 * fVar21) - fVar16 * fVar20) +
                       (local_58 - local_38));
  *(float *)(puVar1 + 2) =
       ((fVar23 * fVar20 + fVar21 * fVar9) - fVar18 * fVar19) + fVar16 * fVar22 +
       (param_2 - fStack_30);
  fVar9 = fVar4 - fVar13;
  fVar16 = fVar5 - fVar14;
  fVar18 = fVar6 - fVar15;
  if ((fVar9 * fVar9 + fVar16 * fVar16 + fVar18 * fVar18 + (fVar7 - fVar17) * (fVar7 - fVar17) <=
       _LC20) ||
     ((__LC21 - fVar13) * (__LC21 - fVar13) + (_UNK_001081b4 - fVar14) * (_UNK_001081b4 - fVar14) +
      (_UNK_001081b8 - fVar15) * (_UNK_001081b8 - fVar15) +
      (_UNK_001081bc - fVar17) * (_UNK_001081bc - fVar17) <= _LC20)) {
    uVar8 = 1;
    auVar11._4_4_ = _LC17;
    auVar11._0_4_ = _LC17;
    auVar11._8_4_ = _LC17;
    fVar13 = fVar4;
    fVar14 = fVar5;
    fVar15 = fVar6;
  }
  else {
    uVar8 = 0;
    auVar11._4_4_ = fVar17;
    auVar11._0_4_ = fVar17;
    auVar11._8_4_ = fVar17;
  }
  *(undefined1 *)((long)puVar1 + 0x24) = uVar8;
  uVar12 = auVar11._8_4_ & _LC23;
  *(ulong *)((long)puVar1 + 0x14) =
       CONCAT44((uint)fVar14 ^ auVar11._4_4_ & _LC23,(uint)fVar13 ^ auVar11._0_4_ & _LC23);
  *(uint *)((long)puVar1 + 0x1c) = (uint)fVar15 ^ uVar12;
  CalculateSubShapeBounds(param_5,param_6,1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MutableCompoundShape::ModifyShape(unsigned int, JPH::Vec3, JPH::Quat, JPH::Shape const*) */

void JPH::MutableCompoundShape::ModifyShape
               (undefined8 param_1,float param_2,undefined8 param_3,undefined8 param_4,
               MutableCompoundShape *param_5,uint param_6,long *param_7)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 uVar10;
  float fVar11;
  undefined8 uVar12;
  undefined1 auVar13 [12];
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_68;
  float fStack_64;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  
  fVar19 = (float)((ulong)param_4 >> 0x20);
  fVar17 = (float)param_4;
  fVar16 = (float)((ulong)param_3 >> 0x20);
  fVar15 = (float)param_3;
  plVar2 = (long *)(*(long *)(param_5 + 0x60) + (ulong)param_6 * 0x28);
  plVar3 = (long *)*plVar2;
  fVar11 = param_2;
  if (param_7 == plVar3) goto LAB_00106c2a;
  if (plVar3 == (long *)0x0) {
LAB_00106c18:
    *plVar2 = (long)param_7;
  }
  else {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_00106c18;
    (**(code **)(*plVar3 + 8))();
    *plVar2 = (long)param_7;
  }
  if (param_7 != (long *)0x0) {
    LOCK();
    *(int *)(param_7 + 1) = (int)param_7[1] + 1;
    UNLOCK();
    param_7 = (long *)*plVar2;
  }
LAB_00106c2a:
  uVar4 = *(undefined8 *)(param_5 + 0x20);
  uVar5 = *(undefined8 *)(param_5 + 0x28);
  uVar12 = (**(code **)(*param_7 + 0x18))(param_7);
  fVar9 = _LC17;
  fVar8 = _UNK_00108198;
  fVar7 = _UNK_00108194;
  fVar6 = __LC13;
  local_50 = (float)uVar12;
  fStack_4c = (float)((ulong)uVar12 >> 0x20);
  fVar21 = (float)(_LC23 ^ (uint)fVar15);
  fVar22 = (float)(_UNK_001081a4 ^ (uint)fVar16);
  fVar23 = (float)(_UNK_001081a8 ^ (uint)fVar17);
  fVar24 = (float)(_UNK_001081ac ^ (uint)fVar19);
  fVar25 = (fVar19 * local_50 + fVar15 * 0.0 + fVar16 * fVar11) - fVar17 * fStack_4c;
  fVar20 = (fVar19 * fStack_4c - fVar15 * fVar11) + fVar16 * 0.0 + fVar17 * local_50;
  fVar18 = ((fVar19 * fVar11 + fVar15 * fStack_4c) - fVar16 * local_50) + fVar17 * 0.0;
  fVar11 = ((fVar19 * 0.0 - fVar15 * local_50) - fVar16 * fStack_4c) - fVar17 * fVar11;
  local_68 = (float)param_1;
  fStack_64 = (float)((ulong)param_1 >> 0x20);
  local_48 = (float)uVar4;
  fStack_44 = (float)((ulong)uVar4 >> 0x20);
  fStack_40 = (float)uVar5;
  plVar2[1] = CONCAT44((fVar22 * fVar11 - fVar25 * fVar23) + fVar20 * fVar24 + fVar18 * fVar21 +
                       (fStack_64 - fStack_44),
                       ((fVar21 * fVar11 + fVar25 * fVar24 + fVar20 * fVar23) - fVar18 * fVar22) +
                       (local_68 - local_48));
  *(float *)(plVar2 + 2) =
       ((fVar23 * fVar11 + fVar25 * fVar22) - fVar20 * fVar21) + fVar18 * fVar24 +
       (param_2 - fStack_40);
  fVar11 = fVar6 - fVar15;
  fVar18 = fVar7 - fVar16;
  fVar20 = fVar8 - fVar17;
  if ((fVar11 * fVar11 + fVar18 * fVar18 + fVar20 * fVar20 + (fVar9 - fVar19) * (fVar9 - fVar19) <=
       _LC20) ||
     ((__LC21 - fVar15) * (__LC21 - fVar15) + (_UNK_001081b4 - fVar16) * (_UNK_001081b4 - fVar16) +
      (_UNK_001081b8 - fVar17) * (_UNK_001081b8 - fVar17) +
      (_UNK_001081bc - fVar19) * (_UNK_001081bc - fVar19) <= _LC20)) {
    uVar10 = 1;
    auVar13._4_4_ = _LC17;
    auVar13._0_4_ = _LC17;
    auVar13._8_4_ = _LC17;
    fVar15 = fVar6;
    fVar16 = fVar7;
    fVar17 = fVar8;
  }
  else {
    uVar10 = 0;
    auVar13._4_4_ = fVar19;
    auVar13._0_4_ = fVar19;
    auVar13._8_4_ = fVar19;
  }
  *(undefined1 *)((long)plVar2 + 0x24) = uVar10;
  uVar14 = auVar13._8_4_ & _LC23;
  *(ulong *)((long)plVar2 + 0x14) =
       CONCAT44((uint)fVar16 ^ auVar13._4_4_ & _LC23,(uint)fVar15 ^ auVar13._0_4_ & _LC23);
  *(uint *)((long)plVar2 + 0x1c) = (uint)fVar17 ^ uVar14;
  CalculateSubShapeBounds(param_5,param_6,1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MutableCompoundShape::ModifyShapes(unsigned int, unsigned int, JPH::Vec3 const*, JPH::Quat
   const*, unsigned int, unsigned int) */

void JPH::MutableCompoundShape::ModifyShapes
               (uint param_1,uint param_2,Vec3 *param_3,Quat *param_4,uint param_5,uint param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  undefined4 in_register_0000003c;
  MutableCompoundShape *this;
  undefined4 in_register_00000084;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  float fVar14;
  uint uVar17;
  undefined8 uVar15;
  undefined1 auVar16 [12];
  uint uVar18;
  float in_XMM1_Da;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint in_stack_00000008;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  
  this = (MutableCompoundShape *)CONCAT44(in_register_0000003c,param_1);
  puVar1 = (undefined8 *)(*(long *)(this + 0x60) + (ulong)param_2 * 0x28);
  if (puVar1 < puVar1 + ((ulong)param_3 & 0xffffffff) * 5) {
    puVar10 = (undefined8 *)CONCAT44(in_register_00000084,param_5);
    puVar12 = puVar1;
    do {
      uVar2 = *puVar10;
      uVar3 = puVar10[1];
      uVar4 = *(undefined8 *)param_4;
      uVar5 = *(undefined8 *)((long)param_4 + 8);
      uVar6 = *(undefined8 *)(this + 0x20);
      uVar7 = *(undefined8 *)(this + 0x28);
      uVar15 = (**(code **)(*(long *)*puVar12 + 0x18))();
      fVar8 = _LC20;
      local_88 = (float)uVar2;
      fStack_84 = (float)((ulong)uVar2 >> 0x20);
      fStack_80 = (float)uVar3;
      fStack_7c = (float)((ulong)uVar3 >> 0x20);
      local_70 = (float)uVar15;
      fStack_6c = (float)((ulong)uVar15 >> 0x20);
      local_58 = (float)uVar4;
      fStack_54 = (float)((ulong)uVar4 >> 0x20);
      fStack_50 = (float)uVar5;
      fVar21 = (float)(_LC23 ^ (uint)local_88);
      fVar22 = (float)(_UNK_001081a4 ^ (uint)fStack_84);
      fVar23 = (float)(_UNK_001081a8 ^ (uint)fStack_80);
      fVar24 = (float)(_UNK_001081ac ^ (uint)fStack_7c);
      local_68 = (float)uVar6;
      fStack_64 = (float)((ulong)uVar6 >> 0x20);
      fStack_60 = (float)uVar7;
      fVar25 = (fStack_7c * local_70 + local_88 * 0.0 + fStack_84 * in_XMM1_Da) -
               fStack_80 * fStack_6c;
      fVar20 = (fStack_7c * fStack_6c - local_88 * in_XMM1_Da) + fStack_84 * 0.0 +
               fStack_80 * local_70;
      fVar19 = ((local_88 * fStack_6c + fStack_7c * in_XMM1_Da) - fStack_84 * local_70) +
               fStack_80 * 0.0;
      fVar14 = ((fStack_7c * 0.0 - local_88 * local_70) - fStack_84 * fStack_6c) -
               fStack_80 * in_XMM1_Da;
      puVar12[1] = CONCAT44((fVar14 * fVar22 - fVar25 * fVar23) + fVar20 * fVar24 + fVar19 * fVar21
                            + (fStack_54 - fStack_64),
                            ((fVar14 * fVar21 + fVar25 * fVar24 + fVar20 * fVar23) - fVar19 * fVar22
                            ) + (local_58 - local_68));
      *(float *)(puVar12 + 2) =
           ((fVar14 * fVar23 + fVar25 * fVar22) - fVar20 * fVar21) + fVar19 * fVar24 +
           (fStack_50 - fStack_60);
      in_XMM1_Da = (__LC13 - local_88) * (__LC13 - local_88) +
                   (_UNK_00108194 - fStack_84) * (_UNK_00108194 - fStack_84) +
                   (_UNK_00108198 - fStack_80) * (_UNK_00108198 - fStack_80) +
                   (_LC17 - fStack_7c) * (_LC17 - fStack_7c);
      if ((in_XMM1_Da <= fVar8) ||
         (in_XMM1_Da = (__LC21 - local_88) * (__LC21 - local_88) +
                       (_UNK_001081b4 - fStack_84) * (_UNK_001081b4 - fStack_84) +
                       (_UNK_001081b8 - fStack_80) * (_UNK_001081b8 - fStack_80) +
                       (_UNK_001081bc - fStack_7c) * (_UNK_001081bc - fStack_7c),
         in_XMM1_Da <= fVar8)) {
        uVar9 = 1;
        auVar16._4_4_ = _LC17;
        auVar16._0_4_ = _LC17;
        auVar16._8_4_ = _LC17;
        local_88 = __LC13;
        fStack_84 = _UNK_00108194;
        fStack_80 = _UNK_00108198;
      }
      else {
        uVar9 = 0;
        auVar16._4_4_ = fStack_7c;
        auVar16._0_4_ = fStack_7c;
        auVar16._8_4_ = fStack_7c;
      }
      uVar13 = auVar16._0_4_ & __LC22;
      uVar17 = auVar16._4_4_ & _UNK_001081c4;
      uVar18 = auVar16._8_4_ & _UNK_001081c8;
      puVar11 = puVar12 + 5;
      puVar10 = (undefined8 *)((long)puVar10 + (ulong)in_stack_00000008);
      *(undefined1 *)((long)puVar12 + 0x24) = uVar9;
      param_4 = (Quat *)((long)param_4 + (ulong)param_6);
      *(ulong *)((long)puVar12 + 0x14) = CONCAT44((uint)fStack_84 ^ uVar17,(uint)local_88 ^ uVar13);
      *(uint *)((long)puVar12 + 0x1c) = (uint)fStack_80 ^ uVar18;
      puVar12 = puVar11;
    } while (puVar11 < puVar1 + ((ulong)param_3 & 0xffffffff) * 5);
  }
  CalculateSubShapeBounds(this,param_2,(uint)param_3);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MutableCompoundShape::sRegister() */

void JPH::MutableCompoundShape::sRegister(void)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  
  pbVar3 = &sAllSubShapeTypes;
  _DrawGetSupportFunction = sRegister()::{lambda()#1}::_FUN;
  _DrawGetSupportingFace = (undefined4)Color::sDarkOrange;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    *(code **)((ulong)bVar1 * 8 + 0x109908) = sCollideCompoundVsShape;
    lVar2 = (ulong)bVar1 * 0x110;
    *(code **)(&CompoundShapeSettings::typeinfo + lVar2) = sCollideShapeVsCompound;
    *(code **)(&__cxxabiv1::__si_class_type_info::vtable + lVar2) = sCastShapeVsCompound;
  } while (pbVar3 != (byte *)0x108142);
  return;
}



/* JPH::Shape::SaveMaterialState(JPH::Array<JPH::RefConst<JPH::PhysicsMaterial>,
   JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial> > >&) const */

void JPH::Shape::SaveMaterialState(Array *param_1)

{
  return;
}



/* JPH::Shape::RestoreMaterialState(JPH::RefConst<JPH::PhysicsMaterial> const*, unsigned int) */

void JPH::Shape::RestoreMaterialState(RefConst *param_1,uint param_2)

{
  return;
}



/* JPH::CompoundShape::GetCenterOfMass() const */

undefined1  [16] __thiscall JPH::CompoundShape::GetCenterOfMass(CompoundShape *this)

{
  return *(undefined1 (*) [16])(this + 0x20);
}



/* JPH::CompoundShape::GetLocalBounds() const */

void JPH::CompoundShape::GetLocalBounds(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_RSI;
  undefined8 *in_RDI;
  
  uVar1 = *(undefined8 *)(in_RSI + 0x38);
  uVar2 = *(undefined8 *)(in_RSI + 0x40);
  uVar3 = *(undefined8 *)(in_RSI + 0x48);
  *in_RDI = *(undefined8 *)(in_RSI + 0x30);
  in_RDI[1] = uVar1;
  in_RDI[2] = uVar2;
  in_RDI[3] = uVar3;
  return;
}



/* JPH::CompoundShape::GetInnerRadius() const */

undefined4 __thiscall JPH::CompoundShape::GetInnerRadius(CompoundShape *this)

{
  return *(undefined4 *)(this + 0x68);
}



/* JPH::CompoundShape::GetTrianglesStart(JPH::Shape::GetTrianglesContext&, JPH::AABox const&,
   JPH::Vec3, JPH::Quat, JPH::Vec3) const */

void JPH::CompoundShape::GetTrianglesStart(void)

{
  return;
}



/* JPH::CompoundShape::GetTrianglesNext(JPH::Shape::GetTrianglesContext&, int, JPH::Float3*,
   JPH::PhysicsMaterial const**) const */

undefined8
JPH::CompoundShape::GetTrianglesNext
          (GetTrianglesContext *param_1,int param_2,Float3 *param_3,PhysicsMaterial **param_4)

{
  return 0;
}



/* JPH::MutableCompoundShape::GetStats() const */

undefined1  [16] __thiscall JPH::MutableCompoundShape::GetStats(MutableCompoundShape *this)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *(long *)(this + 0x70) * 0x60 + 0x90 + *(long *)(this + 0x50) * 0x28;
  return auVar1;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::MutableCompoundShape::~MutableCompoundShape() */

void __thiscall JPH::MutableCompoundShape::~MutableCompoundShape(MutableCompoundShape *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  *(undefined ***)this = &PTR__MutableCompoundShape_00107fe0;
  if (*(long *)(this + 0x80) != 0) {
    *(undefined8 *)(this + 0x70) = 0;
    (*Free)();
  }
  plVar4 = *(long **)(this + 0x60);
  *(undefined **)this = &ShapeSettings::vtable;
  if (plVar4 == (long *)0x0) {
    return;
  }
  if ((*(long *)(this + 0x50) != 0) &&
     (plVar2 = plVar4 + *(long *)(this + 0x50) * 5, plVar4 < plVar2)) {
    do {
      while (plVar3 = (long *)*plVar4, plVar3 == (long *)0x0) {
LAB_00107430:
        plVar4 = plVar4 + 5;
        if (plVar2 <= plVar4) goto LAB_00107460;
      }
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) goto LAB_00107430;
      plVar4 = plVar4 + 5;
      (**(code **)(*plVar3 + 8))();
    } while (plVar4 < plVar2);
LAB_00107460:
    plVar4 = *(long **)(this + 0x60);
  }
  *(undefined8 *)(this + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00107473. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(plVar4);
  return;
}



/* JPH::MutableCompoundShape::~MutableCompoundShape() */

void __thiscall JPH::MutableCompoundShape::~MutableCompoundShape(MutableCompoundShape *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  *(undefined ***)this = &PTR__MutableCompoundShape_00107fe0;
  if (*(long *)(this + 0x80) != 0) {
    *(undefined8 *)(this + 0x70) = 0;
    (*Free)();
  }
  plVar4 = *(long **)(this + 0x60);
  *(undefined **)this = &ShapeSettings::vtable;
  if (plVar4 != (long *)0x0) {
    if ((*(long *)(this + 0x50) != 0) &&
       (plVar2 = plVar4 + *(long *)(this + 0x50) * 5, plVar4 < plVar2)) {
      do {
        while (plVar3 = (long *)*plVar4, plVar3 == (long *)0x0) {
LAB_001074f0:
          plVar4 = plVar4 + 5;
          if (plVar2 <= plVar4) goto LAB_00107520;
        }
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) goto LAB_001074f0;
        plVar4 = plVar4 + 5;
        (**(code **)(*plVar3 + 8))();
      } while (plVar4 < plVar2);
LAB_00107520:
      plVar4 = *(long **)(this + 0x60);
    }
    *(undefined8 *)(this + 0x50) = 0;
    (*Free)(plVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0010753c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::MutableCompoundShapeSettings::~MutableCompoundShapeSettings() */

void __thiscall
JPH::MutableCompoundShapeSettings::~MutableCompoundShapeSettings(MutableCompoundShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(this + 0x50);
  *(undefined8 **)this = &CollisionDispatch::sCastShape;
  if (plVar3 != (long *)0x0) {
    if ((*(long *)(this + 0x40) != 0) &&
       (plVar4 = plVar3 + *(long *)(this + 0x40) * 8, plVar3 < plVar4)) {
      do {
        plVar2 = (long *)plVar3[1];
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar2 + 8))();
          }
        }
        plVar2 = (long *)*plVar3;
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar2 + 0x18))();
          }
        }
        plVar3 = plVar3 + 8;
      } while (plVar3 < plVar4);
      plVar3 = *(long **)(this + 0x50);
    }
    *(undefined8 *)(this + 0x40) = 0;
    (*Free)(plVar3);
  }
  *(undefined8 **)this = &CollisionDispatch::sCollideShape;
  if (this[0x38] == (MutableCompoundShapeSettings)0x1) {
    plVar3 = *(long **)(this + 0x18);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00107642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 8))();
        return;
      }
    }
  }
  else if ((this[0x38] == (MutableCompoundShapeSettings)0x2) &&
          (*(MutableCompoundShapeSettings **)(this + 0x18) != this + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001075fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::MutableCompoundShapeSettings::~MutableCompoundShapeSettings() */

void __thiscall
JPH::MutableCompoundShapeSettings::~MutableCompoundShapeSettings(MutableCompoundShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(this + 0x50);
  *(undefined8 **)this = &CollisionDispatch::sCastShape;
  if (plVar3 != (long *)0x0) {
    if ((*(long *)(this + 0x40) != 0) &&
       (plVar4 = plVar3 + *(long *)(this + 0x40) * 8, plVar3 < plVar4)) {
      do {
        plVar2 = (long *)plVar3[1];
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar2 + 8))();
          }
        }
        plVar2 = (long *)*plVar3;
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar2 + 0x18))();
          }
        }
        plVar3 = plVar3 + 8;
      } while (plVar3 < plVar4);
      plVar3 = *(long **)(this + 0x50);
    }
    *(undefined8 *)(this + 0x40) = 0;
    (*Free)(plVar3);
  }
  *(undefined8 **)this = &CollisionDispatch::sCollideShape;
  if (this[0x38] == (MutableCompoundShapeSettings)0x1) {
    plVar3 = *(long **)(this + 0x18);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
  }
  else if ((this[0x38] == (MutableCompoundShapeSettings)0x2) &&
          (*(MutableCompoundShapeSettings **)(this + 0x18) != this + 0x28)) {
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x001076fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CompoundShape::SubShape::FromSettings(JPH::CompoundShapeSettings::SubShapeSettings const&,
   JPH::Result<JPH::Ref<JPH::Shape> >&) */

undefined8 JPH::CompoundShape::SubShape::FromSettings(SubShapeSettings *param_1,Result *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  SubShapeSettings SVar9;
  undefined8 uVar10;
  long *plVar11;
  long *in_RDX;
  long *plVar12;
  long in_FS_OFFSET;
  float fVar13;
  undefined8 uVar14;
  undefined1 auVar15 [12];
  float in_XMM1_Da;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  long *local_48 [2];
  long local_38 [2];
  char local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  plVar11 = *(long **)(param_2 + 8);
  if (plVar11 == (long *)0x0) {
    (**(code **)(**(long **)param_2 + 0x20))(local_48);
    if (local_28 != '\x01') {
      if ((char)in_RDX[4] == '\x01') {
        plVar11 = (long *)*in_RDX;
        if (plVar11 != (long *)0x0) {
          LOCK();
          plVar12 = plVar11 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)(*plVar11 + 8))();
          }
          goto LAB_00107a23;
        }
LAB_00107b78:
        *(char *)(in_RDX + 4) = local_28;
LAB_00107b7d:
        if (local_28 == '\x02') {
          *in_RDX = (long)(in_RDX + 2);
          std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
          _M_construct<char*>();
LAB_00107ba4:
          if (local_28 == '\x01') {
            if (local_48[0] != (long *)0x0) {
              LOCK();
              plVar11 = local_48[0] + 1;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)*plVar11 == 0) {
                (**(code **)(*local_48[0] + 8))();
                uVar10 = 0;
                goto LAB_001079b3;
              }
            }
          }
          else if ((local_28 == '\x02') && (local_48[0] != local_38)) {
            (*Free)();
          }
        }
      }
      else {
        if (((char)in_RDX[4] != '\x02') || ((long *)*in_RDX == in_RDX + 2)) goto LAB_00107b78;
        (*Free)();
LAB_00107a23:
        *(char *)(in_RDX + 4) = local_28;
        if (local_28 != '\x01') goto LAB_00107b7d;
        *in_RDX = (long)local_48[0];
        if (local_48[0] != (long *)0x0) {
          LOCK();
          *(int *)(local_48[0] + 1) = (int)local_48[0][1] + 1;
          UNLOCK();
          goto LAB_00107ba4;
        }
      }
      uVar10 = 0;
      goto LAB_001079b3;
    }
    plVar11 = *(long **)param_1;
    if (plVar11 == local_48[0]) {
LAB_00107b48:
      if (local_48[0] != (long *)0x0) {
        LOCK();
        plVar11 = local_48[0] + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)(*local_48[0] + 8))();
          plVar12 = *(long **)param_1;
          goto LAB_001077b9;
        }
      }
    }
    else {
      if (plVar11 != (long *)0x0) {
        LOCK();
        plVar12 = plVar11 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)(*plVar11 + 8))(plVar11);
        }
      }
      *(long **)param_1 = local_48[0];
      if (local_48[0] == (long *)0x0) {
        if (local_28 != '\x01') {
          plVar12 = (long *)0x0;
          if (local_28 != '\x02') goto LAB_001077b9;
LAB_00107b03:
          (*Free)();
        }
      }
      else {
        LOCK();
        *(int *)(local_48[0] + 1) = (int)local_48[0][1] + 1;
        UNLOCK();
        if (local_28 == '\x01') goto LAB_00107b48;
        if ((local_28 == '\x02') && (local_48[0] != local_38)) goto LAB_00107b03;
      }
    }
    plVar12 = *(long **)param_1;
  }
  else {
    plVar12 = *(long **)param_1;
    if (plVar11 != plVar12) {
      if (plVar12 == (long *)0x0) {
        *(long **)param_1 = plVar11;
      }
      else {
        LOCK();
        plVar11 = plVar12 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)(*plVar12 + 8))();
        }
        plVar11 = *(long **)(param_2 + 8);
        *(long **)param_1 = plVar11;
        plVar12 = plVar11;
        if (plVar11 == (long *)0x0) goto LAB_001077b9;
      }
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      plVar12 = *(long **)param_1;
    }
  }
LAB_001077b9:
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x30);
  uVar14 = (**(code **)(*plVar12 + 0x18))();
  fVar7 = _LC17;
  fVar6 = _UNK_00108198;
  fVar5 = _UNK_00108194;
  fVar4 = __LC13;
  local_78 = (float)uVar10;
  fStack_74 = (float)((ulong)uVar10 >> 0x20);
  fStack_70 = (float)uVar1;
  fStack_6c = (float)((ulong)uVar1 >> 0x20);
  local_60 = (float)uVar14;
  fStack_5c = (float)((ulong)uVar14 >> 0x20);
  fVar18 = (float)(_LC23 ^ (uint)local_78);
  fVar19 = (float)(_UNK_001081a4 ^ (uint)fStack_74);
  fVar20 = (float)(_UNK_001081a8 ^ (uint)fStack_70);
  fVar21 = (float)(_UNK_001081ac ^ (uint)fStack_6c);
  fVar22 = (fStack_6c * local_60 + local_78 * 0.0 + fStack_74 * in_XMM1_Da) - fStack_70 * fStack_5c;
  fVar17 = (fStack_6c * fStack_5c - local_78 * in_XMM1_Da) + fStack_74 * 0.0 + fStack_70 * local_60;
  fVar16 = ((fStack_6c * in_XMM1_Da + local_78 * fStack_5c) - fStack_74 * local_60) +
           fStack_70 * 0.0;
  fVar13 = ((fStack_6c * 0.0 - local_78 * local_60) - fStack_74 * fStack_5c) -
           fStack_70 * in_XMM1_Da;
  local_58 = (float)uVar2;
  fStack_54 = (float)((ulong)uVar2 >> 0x20);
  fStack_50 = (float)uVar3;
  *(ulong *)(param_1 + 8) =
       CONCAT44(fVar16 * fVar18 + (fVar19 * fVar13 - fVar22 * fVar20) + fVar17 * fVar21 + fStack_54,
                ((fVar22 * fVar21 + fVar18 * fVar13 + fVar17 * fVar20) - fVar16 * fVar19) + local_58
               );
  *(float *)(param_1 + 0x10) =
       fVar16 * fVar21 + ((fVar22 * fVar19 + fVar20 * fVar13) - fVar17 * fVar18) + fStack_50;
  uVar8 = _LC23;
  fVar13 = fVar4 - local_78;
  fVar16 = fVar5 - fStack_74;
  fVar17 = fVar6 - fStack_70;
  if ((fVar13 * fVar13 + fVar16 * fVar16 +
       fVar17 * fVar17 + (fVar7 - fStack_6c) * (fVar7 - fStack_6c) <= _LC20) ||
     ((__LC21 - local_78) * (__LC21 - local_78) +
      (_UNK_001081b4 - fStack_74) * (_UNK_001081b4 - fStack_74) +
      (_UNK_001081b8 - fStack_70) * (_UNK_001081b8 - fStack_70) +
      (_UNK_001081bc - fStack_6c) * (_UNK_001081bc - fStack_6c) <= _LC20)) {
    SVar9 = (SubShapeSettings)0x1;
    auVar15._4_4_ = _LC17;
    auVar15._0_4_ = _LC17;
    auVar15._8_4_ = _LC17;
    local_78 = fVar4;
    fStack_74 = fVar5;
    fStack_70 = fVar6;
  }
  else {
    SVar9 = (SubShapeSettings)0x0;
    auVar15._4_4_ = fStack_6c;
    auVar15._0_4_ = fStack_6c;
    auVar15._8_4_ = fStack_6c;
  }
  param_1[0x24] = SVar9;
  uVar10 = 1;
  *(ulong *)(param_1 + 0x14) =
       CONCAT44((uint)fStack_74 ^ auVar15._4_4_ & uVar8,(uint)local_78 ^ auVar15._0_4_ & uVar8);
  *(uint *)(param_1 + 0x1c) = (uint)fStack_70 ^ auVar15._8_4_ & uVar8;
LAB_001079b3:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



/* JPH::CompoundShape::SubShape::TransformScale(JPH::Vec3) const */

undefined1  [16]
JPH::CompoundShape::SubShape::TransformScale(undefined8 param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
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
  float fVar14;
  float fVar15;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_28 = (float)param_1;
  uStack_24 = (float)((ulong)param_1 >> 0x20);
  uStack_20 = (float)param_2;
  uStack_1c = (undefined4)((ulong)param_2 >> 0x20);
  if ((*(char *)(param_3 + 0x24) == '\0') &&
     (_LC24 < (uStack_20 - local_28) * (uStack_20 - local_28) +
              (uStack_24 - uStack_20) * (uStack_24 - uStack_20) +
              (local_28 - uStack_24) * (local_28 - uStack_24) + 0.0)) {
    fVar4 = *(float *)(param_3 + 0x14);
    fVar11 = *(float *)(param_3 + 0x18);
    fVar6 = 0.0;
    fVar1 = *(float *)(param_3 + 0x1c);
    fVar7 = _LC17 - (fVar1 * fVar1 + fVar11 * fVar11 + fVar4 * fVar4 + 0.0);
    if (0.0 <= fVar7) {
      fVar6 = SQRT(fVar7);
    }
    fVar8 = fVar4 + fVar4;
    fVar13 = fVar11 + fVar11;
    fVar7 = (fVar1 + fVar1) * fVar1;
    fVar5 = (fVar1 + fVar1) * fVar6;
    fVar10 = (_LC17 - fVar4 * fVar8) - fVar13 * fVar11;
    fVar14 = (_LC17 - fVar7) - fVar4 * fVar8;
    fVar15 = fVar11 * fVar8 - fVar5;
    fVar7 = (_LC17 - fVar13 * fVar11) - fVar7;
    fVar5 = fVar5 + fVar11 * fVar8;
    fVar12 = fVar8 * fVar1 + fVar13 * fVar6;
    fVar9 = fVar8 * fVar1 - fVar13 * fVar6;
    fVar4 = fVar1 * fVar13 + fVar8 * fVar6;
    fVar11 = fVar1 * fVar13 - fVar8 * fVar6;
    fVar11 = fVar11 * uStack_24 * fVar11 + fVar12 * local_28 * fVar12 + fVar10 * uStack_20 * fVar10;
    auVar3._4_4_ = fVar4 * uStack_20 * fVar4 +
                   fVar15 * fVar15 * local_28 + fVar14 * fVar14 * uStack_24;
    auVar3._0_4_ = fVar9 * uStack_20 * fVar9 + fVar5 * uStack_24 * fVar5 + fVar7 * local_28 * fVar7;
    auVar3._8_4_ = fVar11;
    auVar3._12_4_ = fVar11;
    return auVar3;
  }
  auVar2._8_4_ = uStack_20;
  auVar2._0_8_ = param_1;
  auVar2._12_4_ = uStack_1c;
  return auVar2;
}



/* JPH::MutableCompoundShape::AddShape(JPH::Vec3, JPH::Quat, JPH::Shape const*, unsigned int) [clone
   .cold] */

void JPH::MutableCompoundShape::AddShape(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* JPH::GetRTTIOfType(JPH::MutableCompoundShapeSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC32;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::MutableCompoundShapeSettings::~MutableCompoundShapeSettings() */

void __thiscall
JPH::MutableCompoundShapeSettings::~MutableCompoundShapeSettings(MutableCompoundShapeSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::MutableCompoundShape::~MutableCompoundShape() */

void __thiscall JPH::MutableCompoundShape::~MutableCompoundShape(MutableCompoundShape *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}




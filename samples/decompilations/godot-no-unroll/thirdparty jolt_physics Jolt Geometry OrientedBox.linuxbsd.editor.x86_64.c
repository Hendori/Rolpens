
/* JPH::OrientedBox::Overlaps(JPH::AABox const&, float) const */

bool __thiscall JPH::OrientedBox::Overlaps(OrientedBox *this,AABox *param_1,float param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  float *pfVar13;
  long lVar14;
  long in_FS_OFFSET;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float local_98 [4];
  float local_88 [12];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  float local_28 [6];
  long local_10;
  
  auVar15 = *(undefined1 (*) [16])this;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = *(undefined8 *)this;
  auVar18 = *(undefined1 (*) [16])(this + 0x10);
  fVar2 = *(float *)(this + 0x40);
  local_58 = uVar6;
  uVar6 = local_58;
  uStack_50 = *(undefined8 *)(this + 8);
  uVar9 = uStack_50;
  uVar7 = *(undefined8 *)(this + 0x10);
  fVar3 = *(float *)(this + 0x44);
  local_48 = uVar7;
  uVar7 = local_48;
  uStack_40 = *(undefined8 *)(this + 0x18);
  uVar10 = uStack_40;
  uVar8 = *(undefined8 *)(this + 0x20);
  local_98[0] = (*(float *)(param_1 + 0x10) - *(float *)param_1) * _LC1;
  local_98[1] = (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 4)) * _LC1;
  local_98[2] = (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 8)) * _LC1;
  local_98[3] = (*(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0xc)) * _LC1;
  fVar4 = *(float *)(this + 0x48);
  auVar5 = *(undefined1 (*) [16])(this + 0x20);
  local_38 = uVar8;
  uVar8 = local_38;
  uStack_30 = *(undefined8 *)(this + 0x28);
  uVar11 = uStack_30;
  lVar14 = 0;
  auVar16._0_4_ = 0.0 - auVar15._0_4_;
  auVar16._4_4_ = 0.0 - auVar15._4_4_;
  auVar16._8_4_ = 0.0 - auVar15._8_4_;
  auVar16._12_4_ = 0.0 - auVar15._12_4_;
  local_28[0] = *(float *)(this + 0x30) - (*(float *)(param_1 + 0x10) + *(float *)param_1) * _LC1;
  local_28[1] = *(float *)(this + 0x34) -
                (*(float *)(param_1 + 0x14) + *(float *)(param_1 + 4)) * _LC1;
  local_28[2] = *(float *)(this + 0x38) -
                (*(float *)(param_1 + 0x18) + *(float *)(param_1 + 8)) * _LC1;
  auVar16 = maxps(auVar16,auVar15);
  auVar15._0_4_ = 0.0 - auVar5._0_4_;
  auVar15._4_4_ = 0.0 - auVar5._4_4_;
  auVar15._8_4_ = 0.0 - auVar5._8_4_;
  auVar15._12_4_ = 0.0 - auVar5._12_4_;
  auVar17._0_4_ = 0.0 - auVar18._0_4_;
  auVar17._4_4_ = 0.0 - auVar18._4_4_;
  auVar17._8_4_ = 0.0 - auVar18._8_4_;
  auVar17._12_4_ = 0.0 - auVar18._12_4_;
  local_28[3] = *(float *)(this + 0x3c) - 0.0;
  auVar15 = maxps(auVar15,auVar5);
  local_88[0] = auVar16._0_4_ + param_2;
  local_88[1] = auVar16._4_4_ + param_2;
  local_88[2] = auVar16._8_4_ + param_2;
  auVar18 = maxps(auVar17,auVar18);
  local_88[3] = auVar16._12_4_ + param_2;
  local_88[4] = auVar18._0_4_ + param_2;
  local_88[5] = auVar18._4_4_ + param_2;
  local_88[6] = auVar18._8_4_ + param_2;
  local_88[8] = param_2 + auVar15._0_4_;
  local_88[9] = param_2 + auVar15._4_4_;
  local_88[10] = param_2 + auVar15._8_4_;
  local_88[7] = auVar18._12_4_ + param_2;
  local_88[0xb] = param_2 + auVar15._12_4_;
  pfVar13 = local_88;
  do {
    if (*pfVar13 * fVar2 + pfVar13[4] * fVar3 + pfVar13[8] * fVar4 +
        *(float *)((long)local_98 + lVar14) < (float)(*(uint *)((long)local_28 + lVar14) & _LC2))
    goto LAB_001005d8;
    lVar14 = lVar14 + 4;
    pfVar13 = pfVar13 + 1;
  } while (lVar14 != 0xc);
  lVar14 = 0;
  do {
    lVar1 = lVar14 * 4;
    if (local_88[lVar14 + 1] * local_98[1] + local_88[lVar14] * local_98[0] + 0.0 +
        local_88[lVar14 + 2] * local_98[2] + *(float *)(this + lVar14 + 0x40) <
        (float)((uint)(*(float *)((long)&local_58 + lVar1 + 4) * local_28[1] +
                       local_28[0] * *(float *)((long)&local_58 + lVar1) + 0.0 +
                      *(float *)((long)&uStack_50 + lVar1) * local_28[2]) & _LC2))
    goto LAB_001005d8;
    lVar14 = lVar14 + 4;
  } while (lVar14 != 0xc);
  local_58._4_4_ = (float)((ulong)uVar6 >> 0x20);
  uStack_50._0_4_ = (float)*(undefined8 *)(this + 8);
  if ((float)((uint)(local_58._4_4_ * local_28[2] - (float)uStack_50 * local_28[1]) & _LC2) <=
      local_88[8] * fVar3 + local_88[4] * fVar4 +
      local_88[2] * local_98[1] + local_88[1] * local_98[2]) {
    local_48._4_4_ = (float)((ulong)uVar7 >> 0x20);
    uStack_40._0_4_ = (float)*(undefined8 *)(this + 0x18);
    if ((float)((uint)(local_48._4_4_ * local_28[2] - (float)uStack_40 * local_28[1]) & _LC2) <=
        local_88[8] * fVar2 + fVar4 * local_88[0] +
        local_88[6] * local_98[1] + local_88[5] * local_98[2]) {
      local_38._4_4_ = (float)((ulong)uVar8 >> 0x20);
      uStack_30._0_4_ = (float)*(undefined8 *)(this + 0x28);
      if ((float)((uint)(local_38._4_4_ * local_28[2] - (float)uStack_30 * local_28[1]) & _LC2) <=
          local_88[4] * fVar2 + fVar3 * local_88[0] +
          local_88[10] * local_98[1] + local_88[9] * local_98[2]) {
        local_58._0_4_ = (float)uVar6;
        if ((float)((uint)((float)uStack_50 * local_28[0] - (float)local_58 * local_28[2]) & _LC2)
            <= fVar3 * local_88[9] + local_88[5] * fVar4 +
               local_88[2] * local_98[0] + local_98[2] * local_88[0]) {
          local_48._0_4_ = (float)uVar7;
          if ((float)((uint)((float)uStack_40 * local_28[0] - (float)local_48 * local_28[2]) & _LC2)
              <= fVar2 * local_88[9] + local_88[1] * fVar4 +
                 local_88[6] * local_98[0] + local_88[4] * local_98[2]) {
            local_38._0_4_ = (float)uVar8;
            if ((float)((uint)((float)uStack_30 * local_28[0] - local_28[2] * (float)local_38) &
                       _LC2) <=
                local_88[5] * fVar2 + local_88[1] * fVar3 +
                local_88[10] * local_98[0] + local_98[2] * local_88[8]) {
              if ((float)((uint)((float)local_58 * local_28[1] - local_58._4_4_ * local_28[0]) &
                         _LC2) <=
                  local_88[10] * fVar3 + local_88[6] * fVar4 +
                  local_88[0] * local_98[1] + local_88[1] * local_98[0]) {
                if ((float)((uint)((float)local_48 * local_28[1] - local_48._4_4_ * local_28[0]) &
                           _LC2) <=
                    local_88[10] * fVar2 + fVar4 * local_88[2] +
                    local_88[4] * local_98[1] + local_88[5] * local_98[0]) {
                  bVar12 = (float)((uint)((float)local_38 * local_28[1] -
                                         local_38._4_4_ * local_28[0]) & _LC2) <=
                           local_88[9] * local_98[0] + local_98[1] * local_88[8] +
                           fVar2 * local_88[6] + fVar3 * local_88[2];
                  goto LAB_001005da;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_001005d8:
  bVar12 = false;
LAB_001005da:
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar12;
  }
  local_58 = uVar6;
  uStack_50 = uVar9;
  local_48 = uVar7;
  uStack_40 = uVar10;
  local_38 = uVar8;
  uStack_30 = uVar11;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::OrientedBox::Overlaps(JPH::OrientedBox const&, float) const */

bool __thiscall JPH::OrientedBox::Overlaps(OrientedBox *this,OrientedBox *param_1,float param_2)

{
  OrientedBox *pOVar1;
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
  bool bVar14;
  long lVar15;
  float *pfVar16;
  long in_FS_OFFSET;
  float fVar17;
  float fVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float local_88 [30];
  long local_10;
  
  fVar2 = *(float *)this;
  fVar3 = *(float *)(this + 4);
  fVar4 = *(float *)(this + 8);
  fVar7 = *(float *)(this + 0x18);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar25 = (float)*(undefined8 *)(this + 0x10);
  fVar26 = (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20);
  fVar17 = (float)*(undefined8 *)(this + 0x20);
  fVar20 = (float)((ulong)*(undefined8 *)(this + 0x20) >> 0x20);
  fVar5 = *(float *)(this + 0x28);
  fVar6 = *(float *)(this + 0x30);
  fVar8 = *(float *)(this + 0x34);
  fVar9 = *(float *)(this + 0x38);
  lVar15 = 0;
  do {
    pOVar1 = param_1 + lVar15;
    fVar10 = *(float *)pOVar1;
    fVar11 = *(float *)(pOVar1 + 4);
    fVar12 = *(float *)(pOVar1 + 8);
    fVar13 = *(float *)(pOVar1 + 0xc);
    *(float *)((long)local_88 + lVar15 + 0x30) =
         fVar13 * (0.0 - (fVar8 * fVar3 + fVar6 * fVar2 + fVar9 * fVar4)) +
         fVar11 * fVar3 + fVar10 * fVar2 + fVar12 * fVar4;
    *(float *)((long)local_88 + lVar15 + 0x34) =
         fVar13 * (0.0 - (fVar8 * fVar26 + fVar6 * fVar25 + fVar9 * fVar7)) +
         fVar11 * fVar26 + fVar10 * fVar25 + fVar12 * fVar7;
    *(float *)((long)local_88 + lVar15 + 0x38) =
         fVar13 * (0.0 - (fVar8 * fVar20 + fVar6 * fVar17 + fVar9 * fVar5)) +
         fVar11 * fVar20 + fVar10 * fVar17 + fVar12 * fVar5;
    *(float *)((long)local_88 + lVar15 + 0x3c) =
         fVar13 * 1.0 + fVar11 * 0.0 + fVar10 * 0.0 + fVar12 * 0.0;
    lVar15 = lVar15 + 0x10;
  } while (lVar15 != 0x40);
  fVar7 = *(float *)(param_1 + 0x40);
  auVar18._0_4_ = 0.0 - local_88[0xc];
  auVar18._4_4_ = 0.0 - local_88[0xd];
  auVar18._8_4_ = 0.0 - local_88[0xe];
  auVar18._12_4_ = 0.0 - local_88[0xf];
  fVar2 = *(float *)(param_1 + 0x44);
  auVar19._4_4_ = local_88[0xd];
  auVar19._0_4_ = local_88[0xc];
  auVar19._8_4_ = local_88[0xe];
  auVar19._12_4_ = local_88[0xf];
  auVar19 = maxps(auVar18,auVar19);
  fVar3 = *(float *)(param_1 + 0x48);
  lVar15 = 0;
  auVar21._0_4_ = 0.0 - local_88[0x10];
  auVar21._4_4_ = 0.0 - local_88[0x11];
  auVar21._8_4_ = 0.0 - local_88[0x12];
  auVar21._12_4_ = 0.0 - local_88[0x13];
  auVar23._0_4_ = 0.0 - local_88[0x14];
  auVar23._4_4_ = 0.0 - local_88[0x15];
  auVar23._8_4_ = 0.0 - local_88[0x16];
  auVar23._12_4_ = 0.0 - local_88[0x17];
  auVar22._4_4_ = local_88[0x11];
  auVar22._0_4_ = local_88[0x10];
  auVar22._8_4_ = local_88[0x12];
  auVar22._12_4_ = local_88[0x13];
  auVar22 = maxps(auVar21,auVar22);
  auVar24._4_4_ = local_88[0x15];
  auVar24._0_4_ = local_88[0x14];
  auVar24._8_4_ = local_88[0x16];
  auVar24._12_4_ = local_88[0x17];
  auVar24 = maxps(auVar23,auVar24);
  local_88[0] = auVar19._0_4_ + param_2;
  local_88[1] = auVar19._4_4_ + param_2;
  local_88[2] = auVar19._8_4_ + param_2;
  local_88[4] = auVar22._0_4_ + param_2;
  local_88[5] = auVar22._4_4_ + param_2;
  local_88[6] = auVar22._8_4_ + param_2;
  local_88[8] = param_2 + auVar24._0_4_;
  local_88[9] = param_2 + auVar24._4_4_;
  local_88[10] = param_2 + auVar24._8_4_;
  local_88[3] = auVar19._12_4_ + param_2;
  local_88[7] = auVar22._12_4_ + param_2;
  local_88[0xb] = param_2 + auVar24._12_4_;
  pfVar16 = local_88;
  do {
    if (*pfVar16 * fVar7 + pfVar16[4] * fVar2 + pfVar16[8] * fVar3 +
        *(float *)(this + lVar15 + 0x40) < (float)(*(uint *)((long)local_88 + lVar15 + 0x60) & _LC2)
       ) goto LAB_00100ca0;
    lVar15 = lVar15 + 4;
    pfVar16 = pfVar16 + 1;
  } while (lVar15 != 0xc);
  fVar4 = *(float *)(this + 0x40);
  lVar15 = 0;
  fVar5 = *(float *)(this + 0x44);
  fVar6 = *(float *)(this + 0x48);
  do {
    if (local_88[lVar15 + 1] * fVar5 + local_88[lVar15] * fVar4 + 0.0 + local_88[lVar15 + 2] * fVar6
        + *(float *)(param_1 + lVar15 + 0x40) <
        (float)((uint)(local_88[lVar15 + 0xd] * local_88[0x19] +
                       local_88[lVar15 + 0xc] * local_88[0x18] + 0.0 +
                      local_88[0x1a] * local_88[lVar15 + 0xe]) & _LC2)) goto LAB_00100ca0;
    lVar15 = lVar15 + 4;
  } while (lVar15 != 0xc);
  if ((float)((uint)(local_88[0xd] * local_88[0x1a] - local_88[0x19] * local_88[0xe]) & _LC2) <=
      local_88[8] * fVar2 + local_88[4] * fVar3 + local_88[2] * fVar5 + local_88[1] * fVar6) {
    if ((float)((uint)(local_88[0x11] * local_88[0x1a] - local_88[0x19] * local_88[0x12]) & _LC2) <=
        local_88[8] * fVar7 + fVar3 * local_88[0] + local_88[6] * fVar5 + local_88[5] * fVar6) {
      if ((float)((uint)(local_88[0x15] * local_88[0x1a] - local_88[0x16] * local_88[0x19]) & _LC2)
          <= local_88[4] * fVar7 + fVar2 * local_88[0] + local_88[10] * fVar5 + fVar6 * local_88[9])
      {
        if ((float)((uint)(local_88[0xe] * local_88[0x18] - local_88[0xc] * local_88[0x1a]) & _LC2)
            <= fVar2 * local_88[9] + local_88[5] * fVar3 + local_88[2] * fVar4 + fVar6 * local_88[0]
           ) {
          if ((float)((uint)(local_88[0x12] * local_88[0x18] - local_88[0x1a] * local_88[0x10]) &
                     _LC2) <=
              fVar7 * local_88[9] + local_88[1] * fVar3 + local_88[6] * fVar4 + local_88[4] * fVar6)
          {
            if ((float)((uint)(local_88[0x16] * local_88[0x18] - local_88[0x1a] * local_88[0x14]) &
                       _LC2) <=
                local_88[5] * fVar7 + local_88[1] * fVar2 +
                local_88[10] * fVar4 + fVar6 * local_88[8]) {
              if ((float)((uint)(local_88[0xc] * local_88[0x19] - local_88[0xd] * local_88[0x18]) &
                         _LC2) <=
                  local_88[10] * fVar2 + local_88[6] * fVar3 +
                  local_88[0] * fVar5 + local_88[1] * fVar4) {
                if ((float)((uint)(local_88[0x10] * local_88[0x19] - local_88[0x11] * local_88[0x18]
                                  ) & _LC2) <=
                    local_88[10] * fVar7 + fVar3 * local_88[2] +
                    local_88[4] * fVar5 + local_88[5] * fVar4) {
                  bVar14 = (float)((uint)(local_88[0x19] * local_88[0x14] -
                                         local_88[0x15] * local_88[0x18]) & _LC2) <=
                           local_88[9] * fVar4 + fVar5 * local_88[8] +
                           fVar7 * local_88[6] + fVar2 * local_88[2];
                  goto LAB_00100ca2;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00100ca0:
  bVar14 = false;
LAB_00100ca2:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::OrientedBox::Overlaps(JPH::AABox const&, float) const */

void JPH::OrientedBox::_GLOBAL__sub_I_Overlaps(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC4;
  }
  return;
}



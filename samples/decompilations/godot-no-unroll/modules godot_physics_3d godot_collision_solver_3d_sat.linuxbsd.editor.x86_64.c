
/* void analytic_sphere_cylinder_collision<false>(float, float, float, Transform3D const&,
   Transform3D const&, _CollectorCallback*, float, float) */

void analytic_sphere_cylinder_collision<false>
               (float param_1,float param_2,float param_3,Transform3D *param_4,Transform3D *param_5,
               _CollectorCallback *param_6,float param_7,float param_8)

{
  float fVar1;
  code *pcVar2;
  uint uVar3;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Transform3D::affine_inverse();
  uVar3 = _LC5;
  fVar13 = *(float *)(param_4 + 0x24);
  fVar10 = (float)*(undefined8 *)(param_4 + 0x24);
  fVar11 = (float)((ulong)*(undefined8 *)(param_4 + 0x24) >> 0x20);
  fVar1 = *(float *)(param_4 + 0x2c);
  local_3c = local_50 * fVar13 + local_4c * fVar11 + local_48 * fVar1 + local_3c;
  local_40 = local_5c * fVar13 + local_58 * fVar11 + local_54 * fVar1 + local_40;
  local_44 = fVar13 * (float)local_68 + fVar11 * local_68._4_4_ + local_60 * fVar1 + local_44;
  fVar13 = SQRT(local_44 * local_44 + local_3c * local_3c);
  if (param_2 < fVar13) {
    fVar13 = param_2 / fVar13;
    local_44 = local_44 * fVar13;
    local_3c = local_3c * fVar13;
  }
  fVar6 = param_3 * _LC35;
  fVar13 = *(float *)(param_5 + 0x2c);
  if (local_40 <= (float)((uint)fVar6 ^ _LC5)) {
    local_40 = (float)((uint)fVar6 ^ _LC5);
  }
  if (fVar6 <= local_40) {
    local_40 = fVar6;
  }
  fVar6 = local_44 * *(float *)(param_5 + 0x18) + local_40 * *(float *)(param_5 + 0x1c) +
          local_3c * *(float *)(param_5 + 0x20) + fVar13;
  fVar14 = fVar6 - fVar1;
  fVar17 = (float)*(undefined8 *)(param_5 + 0x24);
  fVar4 = *(float *)(param_5 + 4) * local_40 + (float)*(undefined8 *)param_5 * local_44 +
          (float)*(undefined8 *)(param_5 + 8) * local_3c + fVar17;
  fVar20 = (float)((ulong)*(undefined8 *)(param_5 + 0x24) >> 0x20);
  fVar5 = *(float *)(param_5 + 0x10) * local_40 +
          (float)((ulong)*(undefined8 *)(param_5 + 8) >> 0x20) * local_44 +
          (float)((ulong)*(undefined8 *)(param_5 + 0x10) >> 0x20) * local_3c + fVar20;
  fVar15 = fVar4 - fVar10;
  fVar16 = fVar5 - fVar11;
  fVar8 = param_1 * SQRT(*(float *)(param_4 + 8) * *(float *)(param_4 + 8) +
                         *(float *)param_4 * *(float *)param_4 +
                         *(float *)(param_4 + 4) * *(float *)(param_4 + 4)) + param_7;
  fVar7 = SQRT(fVar15 * fVar15 + fVar16 * fVar16 + fVar14 * fVar14);
  if (fVar7 <= param_8 + fVar8) {
    pcVar2 = *(code **)param_6;
    param_6[0x11] = (_CollectorCallback)0x1;
    if (pcVar2 != (code *)0x0) {
      if (fVar7 == 0.0) {
        auVar18._0_4_ = fVar17 - fVar4;
        auVar18._4_4_ = fVar20 - fVar5;
        auVar18._8_8_ = 0;
        fVar13 = fVar13 - fVar6;
        fVar7 = auVar18._0_4_ * auVar18._0_4_ + auVar18._4_4_ * auVar18._4_4_ + fVar13 * fVar13;
        local_78 = 0;
        local_70 = 0.0;
        if (fVar7 != 0.0) {
          fVar7 = SQRT(fVar7);
          local_70 = fVar13 / fVar7;
          auVar9._4_4_ = fVar7;
          auVar9._0_4_ = fVar7;
          auVar9._8_8_ = _LC20;
          auVar19 = divps(auVar18,auVar9);
          local_78 = auVar19._0_8_;
        }
      }
      else {
        auVar19._4_4_ = fVar16;
        auVar19._0_4_ = fVar15;
        auVar19._8_8_ = 0;
        auVar12._4_4_ = fVar7;
        auVar12._0_4_ = fVar7;
        auVar12._8_8_ = _LC20;
        auVar19 = divps(auVar19,auVar12);
        local_78 = auVar19._0_8_;
        local_70 = fVar14 / fVar7;
      }
      fVar13 = (float)local_78;
      fVar7 = (float)((ulong)local_78 >> 0x20);
      fVar10 = fVar10 + fVar8 * fVar13;
      fVar11 = fVar11 + fVar8 * fVar7;
      local_98 = CONCAT44(fVar11,fVar10);
      local_90 = fVar8 * local_70 + fVar1;
      if ((fVar6 - local_90) * local_70 + (fVar5 - fVar11) * fVar7 + (fVar4 - fVar10) * fVar13 < 0.0
         ) {
        local_70 = (float)((uint)local_70 ^ uVar3);
        local_78 = CONCAT44((uint)fVar7 ^ _LC6._4_4_,(uint)fVar13 ^ (uint)_LC6);
      }
      local_88 = CONCAT44(fVar5,fVar4);
      local_80 = fVar6;
      if (param_6[0x10] == (_CollectorCallback)0x0) {
        (*pcVar2)(&local_98,0,&local_88,0,&local_78,*(undefined8 *)(param_6 + 8));
      }
      else {
        local_60 = (float)((uint)local_70 ^ uVar3);
        local_68 = CONCAT44((uint)((ulong)local_78 >> 0x20) ^ _LC6._4_4_,(uint)local_78 ^ (uint)_LC6
                           );
        (*pcVar2)(&local_88,0,&local_98,0,&local_68);
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void analytic_sphere_cylinder_collision<true>(float, float, float, Transform3D const&,
   Transform3D const&, _CollectorCallback*, float, float) */

void analytic_sphere_cylinder_collision<true>
               (float param_1,float param_2,float param_3,Transform3D *param_4,Transform3D *param_5,
               _CollectorCallback *param_6,float param_7,float param_8)

{
  float fVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  long in_FS_OFFSET;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Transform3D::affine_inverse();
  uVar4 = _LC5;
  fVar11 = *(float *)(param_4 + 0x24);
  fVar9 = (float)*(undefined8 *)(param_4 + 0x24);
  fVar10 = (float)((ulong)*(undefined8 *)(param_4 + 0x24) >> 0x20);
  fVar1 = *(float *)(param_4 + 0x2c);
  local_3c = local_50 * fVar11 + local_4c * fVar10 + local_48 * fVar1 + local_3c;
  local_40 = local_54 * fVar1 + local_5c * fVar11 + local_58 * fVar10 + local_40;
  local_44 = fVar11 * (float)local_68 + fVar10 * local_68._4_4_ + local_60 * fVar1 + local_44;
  fVar11 = SQRT(local_44 * local_44 + local_3c * local_3c);
  if (param_2 < fVar11) {
    fVar11 = param_2 / fVar11;
    local_44 = local_44 * fVar11;
    local_3c = local_3c * fVar11;
  }
  fVar11 = param_3 * _LC35;
  fVar8 = SQRT(*(float *)(param_4 + 8) * *(float *)(param_4 + 8) +
               *(float *)param_4 * *(float *)param_4 +
               *(float *)(param_4 + 4) * *(float *)(param_4 + 4)) * param_1 + param_7;
  if (local_40 <= (float)((uint)fVar11 ^ _LC5)) {
    local_40 = (float)((uint)fVar11 ^ _LC5);
  }
  fVar12 = *(float *)(param_5 + 0x2c);
  if (fVar11 <= local_40) {
    local_40 = fVar11;
  }
  fVar11 = local_44 * *(float *)(param_5 + 0x18) + local_40 * *(float *)(param_5 + 0x1c) +
           local_3c * *(float *)(param_5 + 0x20) + fVar12;
  fVar14 = fVar11 - fVar1;
  fVar15 = (float)*(undefined8 *)(param_5 + 0x24);
  fVar6 = *(float *)(param_5 + 4) * local_40 + (float)*(undefined8 *)param_5 * local_44 +
          (float)*(undefined8 *)(param_5 + 8) * local_3c + fVar15;
  fVar18 = (float)((ulong)*(undefined8 *)(param_5 + 0x24) >> 0x20);
  fVar7 = *(float *)(param_5 + 0x10) * local_40 +
          (float)((ulong)*(undefined8 *)(param_5 + 8) >> 0x20) * local_44 +
          (float)((ulong)*(undefined8 *)(param_5 + 0x10) >> 0x20) * local_3c + fVar18;
  auVar17._0_4_ = fVar6 - fVar9;
  auVar17._4_4_ = fVar7 - fVar10;
  auVar17._8_8_ = 0;
  fVar5 = SQRT(auVar17._0_4_ * auVar17._0_4_ + auVar17._4_4_ * auVar17._4_4_ + fVar14 * fVar14);
  if (fVar5 <= fVar8 + param_8) {
    pcVar2 = *(code **)param_6;
    param_6[0x11] = (_CollectorCallback)0x1;
    if (pcVar2 != (code *)0x0) {
      if (fVar5 == 0.0) {
        auVar16._0_4_ = fVar15 - fVar6;
        auVar16._4_4_ = fVar18 - fVar7;
        auVar16._8_8_ = 0;
        fVar12 = fVar12 - fVar11;
        fVar5 = auVar16._0_4_ * auVar16._0_4_ + auVar16._4_4_ * auVar16._4_4_ + fVar12 * fVar12;
        local_70 = 0.0;
        local_78 = 0;
        if (fVar5 != 0.0) {
          fVar5 = SQRT(fVar5);
          local_70 = fVar12 / fVar5;
          auVar13._4_4_ = fVar5;
          auVar13._0_4_ = fVar5;
          auVar13._8_8_ = _LC20;
          auVar17 = divps(auVar16,auVar13);
          local_78 = auVar17._0_8_;
        }
      }
      else {
        local_70 = fVar14 / fVar5;
        auVar3._4_4_ = fVar5;
        auVar3._0_4_ = fVar5;
        auVar3._8_4_ = (int)_LC20;
        auVar3._12_4_ = (int)((ulong)_LC20 >> 0x20);
        auVar17 = divps(auVar17,auVar3);
        local_78 = auVar17._0_8_;
      }
      fVar12 = (float)local_78;
      fVar5 = (float)((ulong)local_78 >> 0x20);
      fVar6 = fVar6 - param_8 * fVar12;
      fVar7 = fVar7 - param_8 * fVar5;
      local_80 = fVar11 - param_8 * local_70;
      local_88 = CONCAT44(fVar7,fVar6);
      fVar9 = fVar9 + fVar8 * fVar12;
      fVar10 = fVar10 + fVar8 * fVar5;
      local_98 = CONCAT44(fVar10,fVar9);
      local_90 = fVar8 * local_70 + fVar1;
      if ((fVar7 - fVar10) * fVar5 + (fVar6 - fVar9) * fVar12 + (local_80 - local_90) * local_70 <
          0.0) {
        local_70 = (float)((uint)local_70 ^ uVar4);
        local_78 = CONCAT44((uint)fVar5 ^ _LC6._4_4_,(uint)fVar12 ^ (uint)_LC6);
      }
      if (param_6[0x10] == (_CollectorCallback)0x0) {
        (*pcVar2)(&local_98,0,&local_88,0,&local_78,*(undefined8 *)(param_6 + 8));
      }
      else {
        local_60 = (float)((uint)local_70 ^ uVar4);
        local_68 = CONCAT44((uint)((ulong)local_78 >> 0x20) ^ _LC6._4_4_,(uint)local_78 ^ (uint)_LC6
                           );
        (*pcVar2)(&local_88,0,&local_98,0,&local_68);
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void analytic_sphere_collision<true>(Vector3 const&, float, Vector3 const&, float,
   _CollectorCallback*, float, float) [clone .isra.0] */

void analytic_sphere_collision<true>
               (Vector3 *param_1,float param_2,Vector3 *param_3,float param_4,
               _CollectorCallback *param_5,float param_6,float param_7)

{
  Vector3 VVar1;
  code *pcVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  float fVar4;
  undefined1 in_register_00001204 [12];
  undefined4 in_XMM1_Db;
  float fVar5;
  float in_XMM4_Da;
  float fVar6;
  float in_XMM5_Da;
  float in_XMM6_Da;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  float in_XMM7_Da;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float in_stack_00000008;
  float in_stack_00000010;
  undefined8 local_50;
  float local_48;
  undefined8 local_40;
  float local_38;
  undefined8 local_30;
  float local_28;
  undefined8 local_20;
  uint local_18;
  long local_10;
  undefined1 auVar13 [16];
  
  auVar14._4_4_ = in_register_00001204._0_4_;
  auVar14._0_4_ = param_2;
  auVar14._8_4_ = in_register_00001204._4_4_;
  auVar14._12_4_ = in_register_00001204._8_4_;
  fVar16 = param_4 - in_XMM5_Da;
  auVar11._4_12_ = auVar14._4_12_;
  auVar11._0_4_ = param_2 - in_XMM4_Da;
  fVar15 = param_6 - in_XMM6_Da;
  fVar5 = param_7 + in_stack_00000008;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar9 = in_XMM7_Da + in_stack_00000010;
  fVar10 = SQRT(auVar11._0_4_ * auVar11._0_4_ + fVar16 * fVar16 + fVar15 * fVar15);
  fVar4 = (fVar5 + fVar9) - fVar10;
  if (0.0 <= fVar4) {
    pcVar2 = *(code **)param_1;
    param_1[0x11] = (Vector3)0x1;
    if (pcVar2 != (code *)0x0) {
      if ((double)fVar10 < _LC46) {
        local_28 = 0.0;
        fVar10 = fVar4;
        local_30 = _LC2;
      }
      else {
        local_28 = fVar15 / fVar10;
        auVar13._0_8_ = auVar11._0_8_;
        auVar13._8_4_ = in_register_00001204._0_4_;
        auVar13._12_4_ = in_XMM1_Db;
        auVar12._8_8_ = auVar13._8_8_;
        auVar12._4_4_ = fVar16;
        auVar12._0_4_ = auVar11._0_4_;
        auVar8._4_4_ = fVar10;
        auVar8._0_4_ = fVar10;
        auVar8._8_8_ = _LC20;
        auVar14 = divps(auVar12,auVar8);
        fVar10 = auVar14._4_4_ * fVar4;
        local_30 = auVar14._0_8_;
      }
      fVar15 = (float)local_30;
      fVar16 = (float)((ulong)local_30 >> 0x20);
      uVar7 = CONCAT44((uint)fVar16 ^ _LC6._4_4_,(uint)fVar15 ^ (uint)_LC6);
      if (fVar9 <= fVar5) {
        fVar5 = fVar9 * fVar15 + in_XMM4_Da;
        fVar6 = fVar9 * fVar16 + in_XMM5_Da;
        local_50 = CONCAT44(fVar6,fVar5);
        local_48 = fVar9 * local_28 + in_XMM6_Da;
        fVar9 = fVar5 - fVar4 * fVar15;
        local_38 = local_48 - fVar4 * local_28;
        local_40 = CONCAT44(fVar6 - fVar10,fVar9);
        if ((fVar5 - fVar9) * fVar15 + (fVar6 - (fVar6 - fVar10)) * fVar16 +
            (local_48 - local_38) * local_28 < 0.0) {
          VVar1 = param_1[0x10];
          uVar3 = *(undefined8 *)(param_1 + 8);
          local_28 = (float)((uint)local_28 ^ _LC5);
          local_30 = uVar7;
        }
        else {
          VVar1 = param_1[0x10];
          uVar3 = *(undefined8 *)(param_1 + 8);
        }
        if (VVar1 == (Vector3)0x0) {
          (*pcVar2)(&local_40,0,&local_50,0,&local_30,uVar3);
        }
        else {
          local_18 = (uint)local_28 ^ _LC5;
          local_20 = CONCAT44((uint)((ulong)local_30 >> 0x20) ^ _LC6._4_4_,
                              (uint)local_30 ^ (uint)_LC6);
          (*pcVar2)(&local_50,0,&local_40,0,&local_20);
        }
      }
      else {
        fVar9 = param_2 - fVar5 * fVar15;
        fVar6 = param_4 - fVar5 * fVar16;
        local_48 = param_6 - fVar5 * local_28;
        fVar5 = fVar4 * fVar15 + fVar9;
        local_50 = CONCAT44(fVar6,fVar9);
        local_38 = fVar4 * local_28 + local_48;
        local_40 = CONCAT44(fVar10 + fVar6,fVar5);
        if (((fVar10 + fVar6) - fVar6) * fVar16 + (fVar5 - fVar9) * fVar15 +
            (local_38 - local_48) * local_28 < 0.0) {
          VVar1 = param_1[0x10];
          uVar3 = *(undefined8 *)(param_1 + 8);
          local_28 = (float)((uint)local_28 ^ _LC5);
          local_30 = uVar7;
        }
        else {
          VVar1 = param_1[0x10];
          uVar3 = *(undefined8 *)(param_1 + 8);
        }
        if (VVar1 == (Vector3)0x0) {
          (*pcVar2)(&local_50,0,&local_40,0,&local_30,uVar3);
        }
        else {
          local_18 = (uint)local_28 ^ _LC5;
          local_20 = CONCAT44((uint)((ulong)local_30 >> 0x20) ^ _LC6._4_4_,
                              (uint)local_30 ^ (uint)_LC6);
          (*pcVar2)(&local_40,0,&local_50,0,&local_20);
        }
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void analytic_sphere_collision<false>(Vector3 const&, float, Vector3 const&, float,
   _CollectorCallback*, float, float) [clone .isra.0] */

void analytic_sphere_collision<false>
               (Vector3 *param_1,float param_2,Vector3 *param_3,float param_4,
               _CollectorCallback *param_5,float param_6,float param_7)

{
  Vector3 VVar1;
  code *pcVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  undefined4 in_XMM0_Db;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 in_XMM1_Db;
  float in_XMM4_Da;
  float fVar6;
  float fVar7;
  float in_XMM5_Da;
  float in_XMM6_Da;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  float in_XMM7_Da;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  undefined8 local_50;
  float local_48;
  undefined8 local_40;
  float local_38;
  undefined8 local_30;
  float local_28;
  undefined8 local_20;
  uint local_18;
  long local_10;
  undefined1 auVar13 [16];
  
  auVar14._4_4_ = in_XMM0_Db;
  auVar14._0_4_ = param_2;
  auVar14._8_4_ = in_XMM0_Dc;
  auVar14._12_4_ = in_XMM0_Dd;
  fVar16 = param_4 - in_XMM5_Da;
  auVar11._4_12_ = auVar14._4_12_;
  auVar11._0_4_ = param_2 - in_XMM4_Da;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar15 = param_6 - in_XMM6_Da;
  fVar10 = SQRT(auVar11._0_4_ * auVar11._0_4_ + fVar16 * fVar16 + fVar15 * fVar15);
  fVar4 = (param_7 + in_XMM7_Da) - fVar10;
  if (0.0 <= fVar4) {
    pcVar2 = *(code **)param_1;
    param_1[0x11] = (Vector3)0x1;
    if (pcVar2 != (code *)0x0) {
      if ((double)fVar10 < _LC46) {
        local_28 = 0.0;
        local_30 = _LC2;
        fVar10 = fVar4;
      }
      else {
        local_28 = fVar15 / fVar10;
        auVar13._0_8_ = auVar11._0_8_;
        auVar13._8_4_ = in_XMM0_Db;
        auVar13._12_4_ = in_XMM1_Db;
        auVar12._8_8_ = auVar13._8_8_;
        auVar12._4_4_ = fVar16;
        auVar12._0_4_ = auVar11._0_4_;
        auVar9._4_4_ = fVar10;
        auVar9._0_4_ = fVar10;
        auVar9._8_8_ = _LC20;
        auVar14 = divps(auVar12,auVar9);
        local_30 = auVar14._0_8_;
        fVar10 = auVar14._4_4_ * fVar4;
      }
      fVar15 = (float)local_30;
      fVar16 = (float)((ulong)local_30 >> 0x20);
      uVar8 = CONCAT44((uint)fVar16 ^ _LC6._4_4_,(uint)fVar15 ^ (uint)_LC6);
      if (in_XMM7_Da <= param_7) {
        fVar6 = in_XMM4_Da + in_XMM7_Da * fVar15;
        fVar7 = in_XMM5_Da + in_XMM7_Da * fVar16;
        local_48 = in_XMM7_Da * local_28 + in_XMM6_Da;
        local_50 = CONCAT44(fVar7,fVar6);
        fVar5 = fVar6 - fVar4 * fVar15;
        local_38 = local_48 - fVar4 * local_28;
        local_40 = CONCAT44(fVar7 - fVar10,fVar5);
        if ((fVar6 - fVar5) * fVar15 + (fVar7 - (fVar7 - fVar10)) * fVar16 +
            (local_48 - local_38) * local_28 < 0.0) {
          VVar1 = param_1[0x10];
          uVar3 = *(undefined8 *)(param_1 + 8);
          local_28 = (float)((uint)local_28 ^ _LC5);
          local_30 = uVar8;
        }
        else {
          VVar1 = param_1[0x10];
          uVar3 = *(undefined8 *)(param_1 + 8);
        }
        if (VVar1 == (Vector3)0x0) {
          (*pcVar2)(&local_40,0,&local_50,0,&local_30,uVar3);
        }
        else {
          local_18 = (uint)local_28 ^ _LC5;
          local_20 = CONCAT44((uint)((ulong)local_30 >> 0x20) ^ _LC6._4_4_,
                              (uint)local_30 ^ (uint)_LC6);
          (*pcVar2)(&local_50,0,&local_40,0,&local_20);
        }
      }
      else {
        fVar6 = param_2 - param_7 * fVar15;
        fVar7 = param_4 - param_7 * fVar16;
        local_48 = param_6 - param_7 * local_28;
        fVar5 = fVar4 * fVar15 + fVar6;
        local_50 = CONCAT44(fVar7,fVar6);
        local_38 = fVar4 * local_28 + local_48;
        local_40 = CONCAT44(fVar10 + fVar7,fVar5);
        if ((fVar5 - fVar6) * fVar15 + ((fVar10 + fVar7) - fVar7) * fVar16 +
            (local_38 - local_48) * local_28 < 0.0) {
          VVar1 = param_1[0x10];
          uVar3 = *(undefined8 *)(param_1 + 8);
          local_28 = (float)((uint)local_28 ^ _LC5);
          local_30 = uVar8;
        }
        else {
          VVar1 = param_1[0x10];
          uVar3 = *(undefined8 *)(param_1 + 8);
        }
        if (VVar1 == (Vector3)0x0) {
          (*pcVar2)(&local_50,0,&local_40,0,&local_30,uVar3);
        }
        else {
          local_18 = (uint)local_28 ^ _LC5;
          local_20 = CONCAT44((uint)((ulong)local_30 >> 0x20) ^ _LC6._4_4_,
                              (uint)local_30 ^ (uint)_LC6);
          (*pcVar2)(&local_40,0,&local_50,0,&local_20);
        }
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<float, _DefaultComparator<float>, true>::introsort(long, long, float*, long) const
   [clone .isra.0] */

void SortArray<float,_DefaultComparator<float>,true>::introsort
               (long param_1,long param_2,float *param_3,long param_4)

{
  float fVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long local_58;
  
  lVar5 = param_2 - param_1;
  if (lVar5 < 0x11) {
    return;
  }
  if (param_4 == 0) {
LAB_001202f8:
    lVar8 = lVar5 + -2 >> 1;
    lVar9 = lVar8 * 2 + 2;
    pfVar6 = param_3 + param_1 + lVar8;
    fVar14 = *pfVar6;
    lVar7 = lVar8;
    lVar11 = lVar9;
    if (lVar5 <= lVar9) goto LAB_001203f7;
LAB_00120333:
    do {
      fVar12 = param_3[param_1 + lVar9 + -1];
      fVar1 = param_3[param_1 + lVar9];
      lVar2 = lVar9 + -1;
      lVar3 = lVar9;
      pfVar4 = param_3 + param_1 + lVar9 + -1;
      if (fVar12 <= fVar1) {
        lVar3 = lVar9 + 1;
        lVar2 = lVar9;
        pfVar4 = param_3 + param_1 + lVar9;
        fVar12 = fVar1;
      }
      lVar9 = lVar3 * 2;
      param_3[param_1 + lVar7] = fVar12;
      lVar7 = lVar2;
    } while (lVar5 != lVar9 && SBORROW8(lVar5,lVar9) == lVar5 + lVar3 * -2 < 0);
    pfVar10 = pfVar4;
    if (lVar5 == lVar9) goto LAB_001203fd;
    do {
      lVar9 = lVar11;
      lVar11 = lVar2 + -1;
      if (lVar2 <= lVar8) goto LAB_00120548;
      do {
        lVar7 = lVar11 >> 1;
        fVar12 = param_3[param_1 + lVar7];
        if (fVar14 <= fVar12) {
          param_3[lVar2 + param_1] = fVar14;
          goto joined_r0x001203d5;
        }
        param_3[lVar2 + param_1] = fVar12;
        lVar11 = (lVar7 + -1) - (lVar7 + -1 >> 0x3f);
        lVar2 = lVar7;
      } while (lVar8 < lVar7);
      param_3[param_1 + lVar7] = fVar14;
joined_r0x001203d5:
      if (lVar8 == 0) {
        pfVar6 = param_3 + param_1;
        lVar5 = (param_2 + -1) - param_1;
        goto LAB_00120438;
      }
      while( true ) {
        pfVar6 = pfVar6 + -1;
        lVar9 = lVar9 + -2;
        lVar8 = lVar8 + -1;
        fVar14 = *pfVar6;
        lVar7 = lVar8;
        lVar11 = lVar9;
        if (lVar9 < lVar5) goto LAB_00120333;
LAB_001203f7:
        lVar11 = lVar9;
        pfVar10 = pfVar6;
        pfVar4 = pfVar6;
        if (lVar9 == lVar5) break;
LAB_00120548:
        *pfVar4 = fVar14;
      }
LAB_001203fd:
      lVar2 = lVar9 + -1;
      pfVar4 = param_3 + param_1 + lVar2;
      *pfVar10 = *pfVar4;
    } while( true );
  }
  lVar9 = param_2;
  local_58 = param_4;
LAB_00120132:
  local_58 = local_58 + -1;
  fVar14 = param_3[lVar9 + -1];
  fVar12 = param_3[param_1];
  fVar1 = param_3[(lVar5 >> 1) + param_1];
  if (fVar1 <= fVar12) {
    fVar13 = fVar12;
    if ((fVar14 <= fVar12) && (fVar13 = fVar14, fVar14 <= fVar1)) {
      fVar13 = fVar1;
    }
  }
  else {
    fVar13 = fVar1;
    if ((fVar14 <= fVar1) && (fVar13 = fVar14, fVar14 <= fVar12)) {
      fVar13 = fVar12;
    }
  }
  param_2 = param_1;
  lVar5 = lVar9;
  do {
    if (param_3[param_2] <= fVar13 && fVar13 != param_3[param_2]) {
      if (lVar9 + -1 == param_2) {
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                         "bad comparison function; sorting will be broken",0,0);
        goto LAB_001201a9;
      }
    }
    else {
LAB_001201a9:
      lVar11 = lVar5 + -1;
      pfVar6 = param_3 + lVar11;
      if (fVar13 < *pfVar6) {
        pfVar4 = param_3 + lVar5 + -2;
        while (param_1 != lVar11) {
          lVar11 = lVar11 + -1;
          pfVar6 = pfVar4;
          if (*pfVar4 <= fVar13) goto LAB_0012021a;
          pfVar4 = pfVar4 + -1;
        }
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                         "bad comparison function; sorting will be broken",0,0);
      }
LAB_0012021a:
      if (lVar11 <= param_2) break;
      fVar14 = param_3[param_2];
      param_3[param_2] = *pfVar6;
      *pfVar6 = fVar14;
      lVar5 = lVar11;
    }
    param_2 = param_2 + 1;
  } while( true );
  introsort(param_2,lVar9,param_3,local_58);
  lVar5 = param_2 - param_1;
  if (lVar5 < 0x11) {
    return;
  }
  lVar9 = param_2;
  if (local_58 == 0) goto LAB_001202f8;
  goto LAB_00120132;
LAB_00120438:
  fVar14 = pfVar6[lVar5];
  pfVar6[lVar5] = *pfVar6;
  if (lVar5 < 3) {
    if (lVar5 != 2) {
      *pfVar6 = fVar14;
      return;
    }
    lVar9 = param_1 + 1;
    lVar11 = 0;
    lVar5 = 1;
    *pfVar6 = param_3[lVar9];
LAB_001204f7:
    while( true ) {
      pfVar4 = param_3 + lVar9;
      fVar12 = param_3[param_1 + lVar11];
      if (fVar14 <= fVar12) break;
      *pfVar4 = fVar12;
      if (lVar11 == 0) {
        param_3[param_1 + lVar11] = fVar14;
        goto LAB_00120438;
      }
      lVar9 = param_1 + lVar11;
      lVar11 = (lVar11 + -1) / 2;
    }
  }
  else {
    lVar9 = 2;
    lVar11 = 0;
    do {
      fVar12 = param_3[param_1 + lVar9 + -1];
      fVar1 = param_3[param_1 + lVar9];
      lVar7 = lVar9 + -1;
      pfVar4 = param_3 + param_1 + lVar9 + -1;
      lVar8 = lVar9;
      if (fVar12 <= fVar1) {
        lVar8 = lVar9 + 1;
        lVar7 = lVar9;
        pfVar4 = param_3 + param_1 + lVar9;
        fVar12 = fVar1;
      }
      lVar9 = lVar8 * 2;
      param_3[lVar11 + param_1] = fVar12;
      lVar11 = lVar7;
    } while (lVar5 != lVar9 && SBORROW8(lVar5,lVar9) == lVar5 + lVar8 * -2 < 0);
    if (lVar5 == lVar9) {
      lVar9 = param_1 + lVar5 + -1;
      lVar11 = lVar5 + -2 >> 1;
      *pfVar4 = param_3[lVar9];
      lVar5 = lVar5 + -1;
      goto LAB_001204f7;
    }
    lVar9 = param_1 + lVar7;
    lVar5 = lVar5 + -1;
    lVar11 = (lVar7 + -1) / 2;
    if (0 < lVar7) goto LAB_001204f7;
  }
  *pfVar4 = fVar14;
  goto LAB_00120438;
}



/* sat_calculate_penetration(GodotShape3D const*, Transform3D const&, GodotShape3D const*,
   Transform3D const&, void (*)(Vector3 const&, int, Vector3 const&, int, Vector3 const&, void*),
   void*, bool, Vector3*, float, float) */

undefined1
sat_calculate_penetration
          (GodotShape3D *param_1,Transform3D *param_2,GodotShape3D *param_3,Transform3D *param_4,
          _func_void_Vector3_ptr_int_Vector3_ptr_int_Vector3_ptr_void_ptr *param_5,void *param_6,
          bool param_7,Vector3 *param_8,float param_9,float param_10)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  GodotShape3D *pGVar7;
  Transform3D *pTVar8;
  long in_FS_OFFSET;
  float local_8c;
  float local_70;
  _func_void_Vector3_ptr_int_Vector3_ptr_int_Vector3_ptr_void_ptr *local_68;
  void *local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined8 local_54;
  undefined4 local_4c;
  Vector3 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = (**(code **)(*(long *)param_1 + 8))();
  if (iVar3 == 0) {
    _err_print_error("sat_calculate_penetration",
                     "modules/godot_physics_3d/godot_collision_solver_3d_sat.cpp",0x8fa,
                     "Condition \"type_A == PhysicsServer3D::SHAPE_WORLD_BOUNDARY\" is true. Returning: false"
                     ,0,0);
    uVar2 = 0;
  }
  else if (iVar3 == 1) {
    _err_print_error("sat_calculate_penetration",
                     "modules/godot_physics_3d/godot_collision_solver_3d_sat.cpp",0x8fb,
                     "Condition \"type_A == PhysicsServer3D::SHAPE_SEPARATION_RAY\" is true. Returning: false"
                     ,0,0);
    uVar2 = 0;
  }
  else {
    cVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
    if (cVar1 == '\0') {
      iVar4 = (**(code **)(*(long *)param_3 + 8))(param_3);
      if (iVar4 == 0) {
        _err_print_error("sat_calculate_penetration",
                         "modules/godot_physics_3d/godot_collision_solver_3d_sat.cpp",0x900,
                         "Condition \"type_B == PhysicsServer3D::SHAPE_WORLD_BOUNDARY\" is true. Returning: false"
                         ,0,0);
        uVar2 = 0;
      }
      else if (iVar4 == 1) {
        _err_print_error("sat_calculate_penetration",
                         "modules/godot_physics_3d/godot_collision_solver_3d_sat.cpp",0x901,
                         "Condition \"type_B == PhysicsServer3D::SHAPE_SEPARATION_RAY\" is true. Returning: false"
                         ,0,0);
        uVar2 = 0;
      }
      else {
        cVar1 = (**(code **)(*(long *)param_3 + 0x10))(param_3);
        if (cVar1 == '\0') {
          local_57 = 0;
          local_54 = 0;
          local_4c = 0;
          local_58 = param_7;
          local_48 = param_8;
          pGVar7 = param_3;
          pTVar8 = param_2;
          iVar6 = iVar4;
          local_8c = param_10;
          local_70 = param_9;
          if (iVar4 < iVar3) {
            local_58 = !param_7;
            pGVar7 = param_1;
            pTVar8 = param_4;
            param_4 = param_2;
            param_1 = param_3;
            iVar6 = iVar3;
            iVar3 = iVar4;
            local_8c = param_9;
            local_70 = param_10;
          }
          if ((local_8c == 0.0) && (local_70 == 0.0)) {
            pcVar5 = *(code **)(sat_calculate_penetration(GodotShape3D_const*,Transform3D_const&,GodotShape3D_const*,Transform3D_const&,void(*)(Vector3_const&,int,Vector3_const&,int,Vector3_const&,void*),void*,bool,Vector3*,float,float)
                                ::collision_table +
                               ((long)(iVar6 + -2) + (long)(iVar3 + -2) * 6) * 8);
          }
          else {
            pcVar5 = *(code **)(sat_calculate_penetration(GodotShape3D_const*,Transform3D_const&,GodotShape3D_const*,Transform3D_const&,void(*)(Vector3_const&,int,Vector3_const&,int,Vector3_const&,void*),void*,bool,Vector3*,float,float)
                                ::collision_table_margin +
                               ((long)(iVar6 + -2) + (long)(iVar3 + -2) * 6) * 8);
          }
          local_68 = param_5;
          local_60 = param_6;
          if (pcVar5 == (code *)0x0) {
            _err_print_error("sat_calculate_penetration",
                             "modules/godot_physics_3d/godot_collision_solver_3d_sat.cpp",0x96f,
                             "Parameter \"collision_func\" is null.",0,0);
            uVar2 = 0;
          }
          else {
            (*pcVar5)(param_1,pTVar8,pGVar7,param_4,&local_68);
            uVar2 = local_57;
          }
        }
        else {
          _err_print_error("sat_calculate_penetration",
                           "modules/godot_physics_3d/godot_collision_solver_3d_sat.cpp",0x902,
                           "Condition \"p_shape_B->is_concave()\" is true. Returning: false",0,0);
          uVar2 = 0;
        }
      }
    }
    else {
      _err_print_error("sat_calculate_penetration",
                       "modules/godot_physics_3d/godot_collision_solver_3d_sat.cpp",0x8fc,
                       "Condition \"p_shape_A->is_concave()\" is true. Returning: false",0,0);
      uVar2 = 0;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeparatorAxisTest<GodotCylinderShape3D, GodotCylinderShape3D, false>::test_contact_points(Vector3
   const&, int, Vector3 const&, int, Vector3 const&, void*) */

void SeparatorAxisTest<GodotCylinderShape3D,GodotCylinderShape3D,false>::test_contact_points
               (Vector3 *param_1,int param_2,Vector3 *param_3,int param_4,Vector3 *param_5,
               void *param_6)

{
  undefined1 auVar1 [16];
  double dVar2;
  char cVar3;
  long in_FS_OFFSET;
  float fVar4;
  uint uVar5;
  uint uVar7;
  undefined1 auVar6 [16];
  float fVar8;
  double dVar9;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined8 local_30;
  float local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fVar8 = *(float *)(param_3 + 8) - *(float *)(param_1 + 8);
  auVar6._0_4_ = (float)*(undefined8 *)param_3 - (float)*(undefined8 *)param_1;
  auVar6._4_4_ = (float)((ulong)*(undefined8 *)param_3 >> 0x20) -
                 (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  auVar6._8_8_ = 0;
  fVar4 = SQRT(auVar6._0_4_ * auVar6._0_4_ + auVar6._4_4_ * auVar6._4_4_ + fVar8 * fVar8);
  if (__LC0 < (double)(*(float *)((long)param_6 + 0x20) - fVar4)) {
    local_28 = fVar8 / fVar4;
    auVar1._4_4_ = fVar4;
    auVar1._0_4_ = fVar4;
    auVar1._8_4_ = (int)_LC20;
    auVar1._12_4_ = (int)((ulong)_LC20 >> 0x20);
    auVar6 = divps(auVar6,auVar1);
    local_30 = auVar6._0_8_;
    cVar3 = Vector3::is_zero_approx();
    if (cVar3 != '\0') {
      local_28 = 0.0;
      local_30 = _LC2;
    }
                    /* WARNING: Load size is inaccurate */
    local_40 = 0.0;
    local_3c = 0.0;
    local_38 = 0.0;
    local_34 = 0.0;
    (**(code **)(**param_6 + 0x18))
              (*param_6,&local_30,*(undefined8 *)((long)param_6 + 0x10),&local_40,&local_3c);
    (**(code **)(**(long **)((long)param_6 + 8) + 0x18))
              (*(long **)((long)param_6 + 8),&local_30,*(undefined8 *)((long)param_6 + 0x18),
               &local_38,&local_34);
    dVar9 = (double)(local_3c - local_40) * _LC4;
    dVar2 = (double)(local_3c + local_40) * _LC4;
    local_38 = (float)((double)(float)((double)local_38 - dVar9) - dVar2);
    local_34 = (float)((double)(float)((double)local_34 + dVar9) - dVar2);
    if ((0.0 < local_38) || (local_34 < 0.0)) {
      *(undefined8 *)((long)param_6 + 0x38) = local_30;
      *(float *)((long)param_6 + 0x40) = local_28;
    }
    else {
      if (local_38 < 0.0) {
        local_38 = (float)((uint)local_38 ^ _LC5);
        if (local_34 < local_38) {
          if (local_34 < *(float *)((long)param_6 + 0x20)) {
            *(float *)((long)param_6 + 0x20) = local_34;
            *(undefined8 *)((long)param_6 + 0x44) = local_30;
            *(float *)((long)param_6 + 0x4c) = local_28;
          }
          goto LAB_00132f4f;
        }
      }
      if (local_38 < *(float *)((long)param_6 + 0x20)) {
        *(float *)((long)param_6 + 0x20) = local_38;
        uVar5 = (uint)local_30 ^ (uint)_LC6;
        uVar7 = (uint)((ulong)local_30 >> 0x20) ^ _LC6._4_4_;
        *(uint *)((long)param_6 + 0x4c) = (uint)local_28 ^ _LC5;
        *(ulong *)((long)param_6 + 0x44) = CONCAT44(uVar7,uVar5);
      }
    }
  }
LAB_00132f4f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeparatorAxisTest<GodotCylinderShape3D, GodotConvexPolygonShape3D,
   false>::test_contact_points(Vector3 const&, int, Vector3 const&, int, Vector3 const&, void*) */

void SeparatorAxisTest<GodotCylinderShape3D,GodotConvexPolygonShape3D,false>::test_contact_points
               (Vector3 *param_1,int param_2,Vector3 *param_3,int param_4,Vector3 *param_5,
               void *param_6)

{
  undefined1 auVar1 [16];
  double dVar2;
  char cVar3;
  long in_FS_OFFSET;
  float fVar4;
  uint uVar5;
  uint uVar7;
  undefined1 auVar6 [16];
  float fVar8;
  double dVar9;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined8 local_30;
  float local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fVar8 = *(float *)(param_3 + 8) - *(float *)(param_1 + 8);
  auVar6._0_4_ = (float)*(undefined8 *)param_3 - (float)*(undefined8 *)param_1;
  auVar6._4_4_ = (float)((ulong)*(undefined8 *)param_3 >> 0x20) -
                 (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  auVar6._8_8_ = 0;
  fVar4 = SQRT(auVar6._0_4_ * auVar6._0_4_ + auVar6._4_4_ * auVar6._4_4_ + fVar8 * fVar8);
  if (__LC0 < (double)(*(float *)((long)param_6 + 0x20) - fVar4)) {
    local_28 = fVar8 / fVar4;
    auVar1._4_4_ = fVar4;
    auVar1._0_4_ = fVar4;
    auVar1._8_4_ = (int)_LC20;
    auVar1._12_4_ = (int)((ulong)_LC20 >> 0x20);
    auVar6 = divps(auVar6,auVar1);
    local_30 = auVar6._0_8_;
    cVar3 = Vector3::is_zero_approx();
    if (cVar3 != '\0') {
      local_28 = 0.0;
      local_30 = _LC2;
    }
                    /* WARNING: Load size is inaccurate */
    local_40 = 0.0;
    local_3c = 0.0;
    local_38 = 0.0;
    local_34 = 0.0;
    (**(code **)(**param_6 + 0x18))
              (*param_6,&local_30,*(undefined8 *)((long)param_6 + 0x10),&local_40,&local_3c);
    (**(code **)(**(long **)((long)param_6 + 8) + 0x18))
              (*(long **)((long)param_6 + 8),&local_30,*(undefined8 *)((long)param_6 + 0x18),
               &local_38,&local_34);
    dVar9 = (double)(local_3c - local_40) * _LC4;
    dVar2 = (double)(local_3c + local_40) * _LC4;
    local_38 = (float)((double)(float)((double)local_38 - dVar9) - dVar2);
    local_34 = (float)((double)(float)((double)local_34 + dVar9) - dVar2);
    if ((0.0 < local_38) || (local_34 < 0.0)) {
      *(undefined8 *)((long)param_6 + 0x38) = local_30;
      *(float *)((long)param_6 + 0x40) = local_28;
    }
    else {
      if (local_38 < 0.0) {
        local_38 = (float)((uint)local_38 ^ _LC5);
        if (local_34 < local_38) {
          if (local_34 < *(float *)((long)param_6 + 0x20)) {
            *(float *)((long)param_6 + 0x20) = local_34;
            *(undefined8 *)((long)param_6 + 0x44) = local_30;
            *(float *)((long)param_6 + 0x4c) = local_28;
          }
          goto LAB_001331af;
        }
      }
      if (local_38 < *(float *)((long)param_6 + 0x20)) {
        *(float *)((long)param_6 + 0x20) = local_38;
        uVar5 = (uint)local_30 ^ (uint)_LC6;
        uVar7 = (uint)((ulong)local_30 >> 0x20) ^ _LC6._4_4_;
        *(uint *)((long)param_6 + 0x4c) = (uint)local_28 ^ _LC5;
        *(ulong *)((long)param_6 + 0x44) = CONCAT44(uVar7,uVar5);
      }
    }
  }
LAB_001331af:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeparatorAxisTest<GodotCylinderShape3D, GodotCylinderShape3D, true>::test_contact_points(Vector3
   const&, int, Vector3 const&, int, Vector3 const&, void*) */

void SeparatorAxisTest<GodotCylinderShape3D,GodotCylinderShape3D,true>::test_contact_points
               (Vector3 *param_1,int param_2,Vector3 *param_3,int param_4,Vector3 *param_5,
               void *param_6)

{
  char cVar1;
  long in_FS_OFFSET;
  float fVar2;
  uint uVar3;
  uint uVar5;
  undefined1 auVar4 [16];
  undefined1 auVar6 [16];
  float fVar7;
  double dVar8;
  double dVar9;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined8 local_30;
  float local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fVar7 = *(float *)(param_3 + 8) - *(float *)(param_1 + 8);
  auVar4._0_4_ = (float)*(undefined8 *)param_3 - (float)*(undefined8 *)param_1;
  auVar4._4_4_ = (float)((ulong)*(undefined8 *)param_3 >> 0x20) -
                 (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  auVar4._8_8_ = 0;
  fVar2 = SQRT(auVar4._0_4_ * auVar4._0_4_ + auVar4._4_4_ * auVar4._4_4_ + fVar7 * fVar7);
  if (__LC0 < (double)(*(float *)((long)param_6 + 0x20) - fVar2)) {
    local_28 = fVar7 / fVar2;
    auVar6._4_4_ = fVar2;
    auVar6._0_4_ = fVar2;
    auVar6._8_8_ = _LC20;
    auVar4 = divps(auVar4,auVar6);
    local_30 = auVar4._0_8_;
    cVar1 = Vector3::is_zero_approx();
    if (cVar1 != '\0') {
      local_28 = 0.0;
      local_30 = _LC2;
    }
                    /* WARNING: Load size is inaccurate */
    local_40 = 0.0;
    local_3c = 0.0;
    local_38 = 0.0;
    local_34 = 0.0;
    (**(code **)(**param_6 + 0x18))
              (*param_6,&local_30,*(undefined8 *)((long)param_6 + 0x10),&local_40,&local_3c);
    (**(code **)(**(long **)((long)param_6 + 8) + 0x18))
              (*(long **)((long)param_6 + 8),&local_30,*(undefined8 *)((long)param_6 + 0x18),
               &local_38,&local_34);
    local_40 = local_40 - *(float *)((long)param_6 + 0x30);
    local_3c = *(float *)((long)param_6 + 0x30) + local_3c;
    dVar9 = (double)(local_3c - local_40) * _LC4;
    dVar8 = (double)(local_3c + local_40) * _LC4;
    local_38 = (float)((double)(float)((double)(local_38 - *(float *)((long)param_6 + 0x34)) - dVar9
                                      ) - dVar8);
    local_34 = (float)((double)(float)((double)(local_34 + *(float *)((long)param_6 + 0x34)) + dVar9
                                      ) - dVar8);
    if ((0.0 < local_38) || (local_34 < 0.0)) {
      *(undefined8 *)((long)param_6 + 0x38) = local_30;
      *(float *)((long)param_6 + 0x40) = local_28;
    }
    else {
      if (local_38 < 0.0) {
        local_38 = (float)((uint)local_38 ^ _LC5);
        if (local_34 < local_38) {
          if (local_34 < *(float *)((long)param_6 + 0x20)) {
            *(float *)((long)param_6 + 0x20) = local_34;
            *(undefined8 *)((long)param_6 + 0x44) = local_30;
            *(float *)((long)param_6 + 0x4c) = local_28;
          }
          goto LAB_0013340f;
        }
      }
      if (local_38 < *(float *)((long)param_6 + 0x20)) {
        *(float *)((long)param_6 + 0x20) = local_38;
        uVar3 = (uint)local_30 ^ (uint)_LC6;
        uVar5 = (uint)((ulong)local_30 >> 0x20) ^ _LC6._4_4_;
        *(uint *)((long)param_6 + 0x4c) = (uint)local_28 ^ _LC5;
        *(ulong *)((long)param_6 + 0x44) = CONCAT44(uVar5,uVar3);
      }
    }
  }
LAB_0013340f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeparatorAxisTest<GodotCylinderShape3D, GodotConvexPolygonShape3D,
   true>::test_contact_points(Vector3 const&, int, Vector3 const&, int, Vector3 const&, void*) */

void SeparatorAxisTest<GodotCylinderShape3D,GodotConvexPolygonShape3D,true>::test_contact_points
               (Vector3 *param_1,int param_2,Vector3 *param_3,int param_4,Vector3 *param_5,
               void *param_6)

{
  char cVar1;
  long in_FS_OFFSET;
  float fVar2;
  uint uVar3;
  uint uVar5;
  undefined1 auVar4 [16];
  undefined1 auVar6 [16];
  float fVar7;
  double dVar8;
  double dVar9;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined8 local_30;
  float local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fVar7 = *(float *)(param_3 + 8) - *(float *)(param_1 + 8);
  auVar4._0_4_ = (float)*(undefined8 *)param_3 - (float)*(undefined8 *)param_1;
  auVar4._4_4_ = (float)((ulong)*(undefined8 *)param_3 >> 0x20) -
                 (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  auVar4._8_8_ = 0;
  fVar2 = SQRT(auVar4._0_4_ * auVar4._0_4_ + auVar4._4_4_ * auVar4._4_4_ + fVar7 * fVar7);
  if (__LC0 < (double)(*(float *)((long)param_6 + 0x20) - fVar2)) {
    local_28 = fVar7 / fVar2;
    auVar6._4_4_ = fVar2;
    auVar6._0_4_ = fVar2;
    auVar6._8_8_ = _LC20;
    auVar4 = divps(auVar4,auVar6);
    local_30 = auVar4._0_8_;
    cVar1 = Vector3::is_zero_approx();
    if (cVar1 != '\0') {
      local_28 = 0.0;
      local_30 = _LC2;
    }
                    /* WARNING: Load size is inaccurate */
    local_40 = 0.0;
    local_3c = 0.0;
    local_38 = 0.0;
    local_34 = 0.0;
    (**(code **)(**param_6 + 0x18))
              (*param_6,&local_30,*(undefined8 *)((long)param_6 + 0x10),&local_40,&local_3c);
    (**(code **)(**(long **)((long)param_6 + 8) + 0x18))
              (*(long **)((long)param_6 + 8),&local_30,*(undefined8 *)((long)param_6 + 0x18),
               &local_38,&local_34);
    local_40 = local_40 - *(float *)((long)param_6 + 0x30);
    local_3c = *(float *)((long)param_6 + 0x30) + local_3c;
    dVar9 = (double)(local_3c - local_40) * _LC4;
    dVar8 = (double)(local_3c + local_40) * _LC4;
    local_38 = (float)((double)(float)((double)(local_38 - *(float *)((long)param_6 + 0x34)) - dVar9
                                      ) - dVar8);
    local_34 = (float)((double)(float)((double)(local_34 + *(float *)((long)param_6 + 0x34)) + dVar9
                                      ) - dVar8);
    if ((0.0 < local_38) || (local_34 < 0.0)) {
      *(undefined8 *)((long)param_6 + 0x38) = local_30;
      *(float *)((long)param_6 + 0x40) = local_28;
    }
    else {
      if (local_38 < 0.0) {
        local_38 = (float)((uint)local_38 ^ _LC5);
        if (local_34 < local_38) {
          if (local_34 < *(float *)((long)param_6 + 0x20)) {
            *(float *)((long)param_6 + 0x20) = local_34;
            *(undefined8 *)((long)param_6 + 0x44) = local_30;
            *(float *)((long)param_6 + 0x4c) = local_28;
          }
          goto LAB_0013368f;
        }
      }
      if (local_38 < *(float *)((long)param_6 + 0x20)) {
        *(float *)((long)param_6 + 0x20) = local_38;
        uVar3 = (uint)local_30 ^ (uint)_LC6;
        uVar5 = (uint)((ulong)local_30 >> 0x20) ^ _LC6._4_4_;
        *(uint *)((long)param_6 + 0x4c) = (uint)local_28 ^ _LC5;
        *(ulong *)((long)param_6 + 0x44) = CONCAT44(uVar5,uVar3);
      }
    }
  }
LAB_0013368f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* String::parse_latin1(char const*) */

void __thiscall String::parse_latin1(String *this,char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (char *)0x0) {
    strlen(param_1);
  }
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_unref() */

void __thiscall CowData<char32_t>::_unref(CowData<char32_t> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}


// This is taking way too long.
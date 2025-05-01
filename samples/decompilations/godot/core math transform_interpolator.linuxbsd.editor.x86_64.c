
/* TransformInterpolator::interpolate_transform_2d(Transform2D const&, Transform2D const&,
   Transform2D&, float) */

void TransformInterpolator::interpolate_transform_2d
               (Transform2D *param_1,Transform2D *param_2,Transform2D *param_3,float param_4)

{
  long in_FS_OFFSET;
  float fVar1;
  float fVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fVar1 = (float)Transform2D::determinant();
  fVar2 = (float)Transform2D::determinant();
  if (0.0 <= fVar1 == 0.0 <= fVar2) {
    Transform2D::interpolate_with((Transform2D *)&local_58,param_4);
    *(undefined8 *)param_3 = local_58;
    *(undefined8 *)(param_3 + 8) = uStack_50;
    *(undefined8 *)(param_3 + 0x10) = local_48;
  }
  else {
    *(undefined8 *)param_3 = *(undefined8 *)param_2;
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 8);
    fVar1 = (float)*(undefined8 *)(param_1 + 0x10);
    fVar2 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
    *(ulong *)(param_3 + 0x10) =
         CONCAT44(((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) - fVar2) * param_4 +
                  fVar2,((float)*(undefined8 *)(param_2 + 0x10) - fVar1) * param_4 + fVar1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TransformInterpolator::_basis_to_quat_unchecked(Basis const&) */

void __thiscall
TransformInterpolator::_basis_to_quat_unchecked(TransformInterpolator *this,Basis *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  float fVar9;
  float fVar10;
  float fVar11;
  float afStack_68 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  float local_28;
  long local_20;
  
  local_48 = *(undefined8 *)param_1;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  local_38 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fVar9 = *(float *)(param_1 + 0x20);
  uVar3 = local_48;
  uVar4 = uStack_40;
  uVar5 = local_38;
  uStack_30 = uVar2;
  uVar2 = uStack_30;
  local_28 = fVar9;
  fVar10 = (float)local_48 + (float)local_38 + fVar9;
  if (0.0 < fVar10) {
    uStack_30._4_4_ = (float)((ulong)uVar2 >> 0x20);
    local_38._4_4_ = (float)((ulong)local_38 >> 0x20);
    uStack_30._0_4_ = (float)uVar2;
    fVar9 = SQRT(fVar10 + _LC1);
    fVar10 = fVar9 * _LC2;
    fVar9 = _LC2 / fVar9;
    uStack_40._4_4_ = (float)((ulong)uStack_40 >> 0x20);
    local_48._4_4_ = (float)((ulong)local_48 >> 0x20);
    afStack_68[4] = (uStack_30._4_4_ - local_38._4_4_) * fVar9;
    afStack_68[5] = ((float)uStack_40 - (float)uStack_30) * fVar9;
    afStack_68[6] = (uStack_40._4_4_ - local_48._4_4_) * fVar9;
    local_48 = uVar3;
    uStack_40 = uVar4;
    local_38 = uVar5;
    uStack_30 = uVar2;
  }
  else {
    if ((float)local_48 < (float)local_38) {
      if (fVar9 <= (float)local_38) {
        lVar8 = 1;
        lVar6 = 0;
        lVar7 = 2;
        fVar10 = (float)local_38;
        local_38._0_4_ = (float)local_48;
      }
      else {
        lVar8 = 2;
        lVar7 = 0;
        lVar6 = 1;
        fVar10 = fVar9;
        fVar9 = (float)local_48;
      }
    }
    else {
      iVar1 = (uint)((float)local_48 < fVar9) * 2;
      lVar8 = (long)iVar1;
      lVar7 = (long)(int)((iVar1 + 1U) % 3);
      lVar6 = (long)(int)((iVar1 + 2U) % 3);
      local_38._0_4_ = *(float *)(&local_48 + lVar6 * 2);
      fVar10 = *(float *)(&local_48 + lVar8 * 2);
      fVar9 = *(float *)(&local_48 + lVar7 * 2);
    }
    fVar9 = ((fVar10 - fVar9) - (float)local_38) + _LC1;
    if (fVar9 < 0.0) {
      local_48 = uVar3;
      local_38 = uVar5;
      fVar9 = sqrtf(fVar9);
    }
    else {
      fVar9 = SQRT(fVar9);
      local_48 = uVar3;
      local_38 = uVar5;
    }
    fVar11 = _LC2 / fVar9;
    afStack_68[lVar8 + 4] = fVar9 * _LC2;
    fVar10 = (*(float *)((long)&local_48 + (lVar6 * 3 + lVar7) * 4) -
             *(float *)((long)&local_48 + (lVar7 * 3 + lVar6) * 4)) * fVar11;
    afStack_68[lVar7 + 4] =
         (*(float *)((long)&local_48 + (lVar7 * 3 + lVar8) * 4) +
         *(float *)((long)&local_48 + (lVar8 * 3 + lVar7) * 4)) * fVar11;
    afStack_68[lVar6 + 4] =
         (*(float *)((long)&local_48 + (lVar6 * 3 + lVar8) * 4) +
         *(float *)((long)&local_48 + (lVar8 * 3 + lVar6) * 4)) * fVar11;
  }
  *(float *)this = afStack_68[4];
  *(float *)(this + 4) = afStack_68[5];
  *(float *)(this + 8) = afStack_68[6];
  *(float *)(this + 0xc) = fVar10;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TransformInterpolator::_quat_slerp_unchecked(Quaternion const&, Quaternion const&, float) */

TransformInterpolator * __thiscall
TransformInterpolator::_quat_slerp_unchecked
          (TransformInterpolator *this,Quaternion *param_1,Quaternion *param_2,float param_3)

{
  float fVar1;
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
  
  fVar8 = *(float *)param_2;
  fVar9 = *(float *)(param_2 + 4);
  fVar10 = *(float *)(param_2 + 8);
  fVar11 = *(float *)(param_2 + 0xc);
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  fVar4 = *(float *)(param_1 + 0xc);
  fVar5 = *(float *)param_2 * *(float *)param_1 + *(float *)(param_1 + 4) * *(float *)(param_2 + 4)
          + *(float *)(param_1 + 8) * *(float *)(param_2 + 8) +
          *(float *)(param_2 + 0xc) * *(float *)(param_1 + 0xc);
  if (fVar5 < 0.0) {
    fVar5 = (float)((uint)fVar5 ^ _LC4);
    fVar8 = (float)((uint)fVar8 ^ _LC4);
    fVar9 = (float)((uint)fVar9 ^ _LC4);
    fVar10 = (float)((uint)fVar10 ^ _LC4);
    fVar11 = (float)((uint)fVar11 ^ _LC4);
  }
  if (_LC6 < _LC1 - fVar5) {
    fVar6 = acosf(fVar5);
    fVar7 = sinf(fVar6);
    fVar5 = sinf((_LC1 - param_3) * fVar6);
    fVar5 = fVar5 / fVar7;
    fVar6 = sinf(fVar6 * param_3);
    param_3 = fVar6 / fVar7;
  }
  else {
    fVar5 = _LC1 - param_3;
  }
  *(float *)this = param_3 * fVar8 + fVar5 * fVar1;
  *(float *)(this + 4) = param_3 * fVar9 + fVar5 * fVar2;
  *(float *)(this + 8) = param_3 * fVar10 + fVar5 * fVar3;
  *(float *)(this + 0xc) = param_3 * fVar11 + fVar5 * fVar4;
  return this;
}



/* TransformInterpolator::_basis_slerp_unchecked(Basis, Basis, float) */

Quaternion * TransformInterpolator::_basis_slerp_unchecked(float param_1,Quaternion *param_2)

{
  uint uVar1;
  long in_FS_OFFSET;
  TransformInterpolator local_68 [16];
  TransformInterpolator local_58 [16];
  TransformInterpolator local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _basis_to_quat_unchecked(local_68,(Basis *)&stack0x00000008);
  _basis_to_quat_unchecked(local_58,(Basis *)&stack0x00000030);
  _quat_slerp_unchecked(local_48,(Quaternion *)local_68,(Quaternion *)local_58,param_1);
  uVar1 = _LC1;
  *(undefined4 *)(param_2 + 0x20) = 0x3f800000;
  *(undefined1 (*) [16])param_2 = ZEXT416(uVar1);
  *(undefined1 (*) [16])(param_2 + 0x10) = ZEXT416(uVar1);
  Basis::set_quaternion(param_2);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TransformInterpolator::interpolate_basis_linear(Basis const&, Basis const&, Basis&, float) */

void TransformInterpolator::interpolate_basis_linear
               (Basis *param_1,Basis *param_2,Basis *param_3,float param_4)

{
  Basis *pBVar1;
  float fVar2;
  undefined4 uVar3;
  Basis *pBVar4;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  Basis::lerp((Basis *)&local_48,param_4);
  uVar3 = _LC9;
  fVar2 = _LC8;
  pBVar1 = param_3 + 0x24;
  *(undefined8 *)param_3 = local_48;
  *(undefined8 *)(param_3 + 8) = uStack_40;
  *(undefined8 *)(param_3 + 0x10) = local_38;
  *(undefined8 *)(param_3 + 0x18) = uStack_30;
  *(undefined4 *)(param_3 + 0x20) = local_28;
  pBVar4 = param_3;
  do {
    if (*(float *)pBVar4 * *(float *)pBVar4 + *(float *)(pBVar4 + 4) * *(float *)(pBVar4 + 4) +
        *(float *)(pBVar4 + 8) * *(float *)(pBVar4 + 8) < fVar2) {
      *(undefined4 *)param_3 = uVar3;
    }
    pBVar4 = pBVar4 + 0xc;
    param_3 = param_3 + 0x10;
  } while (pBVar1 != pBVar4);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TransformInterpolator::_vec3_normalize(Vector3&) */

float TransformInterpolator::_vec3_normalize(Vector3 *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *(ulong *)param_1;
  fVar1 = *(float *)(param_1 + 8);
  fVar2 = (float)(*(ulong *)param_1 >> 0x20);
  fVar2 = *(float *)param_1 * *(float *)param_1 + fVar2 * fVar2 + fVar1 * fVar1;
  if (fVar2 != 0.0) {
    fVar2 = SQRT(fVar2);
    auVar3._4_4_ = fVar2;
    auVar3._0_4_ = fVar2;
    auVar3._8_8_ = _LC10;
    auVar4 = divps(auVar4,auVar3);
    *(float *)(param_1 + 8) = fVar1 / fVar2;
    *(long *)param_1 = auVar4._0_8_;
    return fVar2;
  }
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return 0.0;
}



/* TransformInterpolator::_basis_orthonormalize(Basis&) */

undefined1  [16] TransformInterpolator::_basis_orthonormalize(Basis *param_1)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  float *pfVar3;
  undefined8 extraout_RDX;
  long in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da;
  undefined8 in_XMM1_Qa;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined8 local_50;
  float local_48;
  float local_40;
  float fStack_3c;
  float local_38;
  float local_30;
  float fStack_2c;
  float local_28;
  undefined4 local_18;
  long local_10;
  
  fVar6 = (float)*(undefined8 *)(param_1 + 8);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar9 = *(float *)(param_1 + 4);
  auVar1._4_8_ = in_XMM1_Qa;
  auVar1._0_4_ = (int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  fVar7 = *(float *)(param_1 + 0x10);
  local_48 = *(float *)(param_1 + 0x18);
  auVar2._4_8_ = auVar1._0_8_ & 0xffffffff;
  auVar2._0_4_ = (int)*(undefined8 *)param_1;
  fVar11 = *(float *)(param_1 + 0x20);
  fVar10 = *(float *)(param_1 + 0x1c);
  local_50 = auVar2._0_8_;
  fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  fVar8 = fVar9;
  fVar14 = fVar7;
  uVar4 = _vec3_normalize((Vector3 *)&local_50);
  fVar8 = fVar8 * (float)local_50 + fVar14 * local_50._4_4_ + local_48 * fVar10;
  local_38 = fVar10 - fVar8 * local_48;
  local_40 = fVar9 - fVar8 * (float)local_50;
  fStack_3c = fVar7 - fVar8 * local_50._4_4_;
  fVar9 = (float)local_50;
  fVar10 = local_48;
  fVar7 = local_50._4_4_;
  fVar14 = local_50._4_4_;
  uVar13 = local_50;
  uVar5 = _vec3_normalize((Vector3 *)&local_40);
  fVar8 = local_40 * fVar6 + fStack_3c * fVar12 + local_38 * fVar11;
  fVar7 = fVar6 * fVar9 + fVar7 * fVar12 + fVar10 * fVar11;
  local_28 = (fVar11 - fVar7 * fVar10) - fVar8 * local_38;
  local_30 = ((float)extraout_RDX - fVar7 * (float)uVar13) - fVar8 * local_40;
  fStack_2c = ((float)((ulong)extraout_RDX >> 0x20) - fVar7 * (float)((ulong)uVar13 >> 0x20)) -
              fVar8 * fStack_3c;
  fVar7 = local_40;
  fVar11 = local_38;
  fVar8 = fStack_3c;
  pfVar3 = (float *)_vec3_normalize((Vector3 *)&local_30);
  *(ulong *)(pfVar3 + 4) = CONCAT44(fStack_2c,fVar8);
  *(ulong *)(pfVar3 + 6) = CONCAT44(fVar11,fVar10);
  *pfVar3 = fVar9;
  pfVar3[1] = fVar7;
  pfVar3[2] = local_30;
  pfVar3[3] = fVar14;
  pfVar3[8] = local_28;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar15._4_4_ = uVar5;
    auVar15._0_4_ = uVar4;
    auVar15._8_4_ = extraout_XMM0_Da;
    auVar15._12_4_ = 0;
    return auVar15;
  }
  local_18 = extraout_XMM0_Da;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TransformInterpolator::interpolate_basis_scaled_slerp(Basis, Basis, Basis&, float) */

void TransformInterpolator::interpolate_basis_scaled_slerp
               (float param_1,float param_2,float *param_3)

{
  long in_FS_OFFSET;
  float fVar1;
  float fVar2;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  TransformInterpolator local_e8 [16];
  TransformInterpolator local_d8 [16];
  TransformInterpolator local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  float local_38;
  long local_30;
  undefined8 uVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = _basis_orthonormalize((Basis *)&stack0x00000008);
  fVar4 = (float)((ulong)uVar3 >> 0x20);
  fVar1 = (float)uVar3;
  fVar7 = fVar1;
  uVar3 = _basis_orthonormalize((Basis *)&stack0x00000030);
  fVar5 = (float)((ulong)uVar3 >> 0x20);
  fVar2 = (float)uVar3;
  local_98 = in_stack_00000028;
  local_b8 = in_stack_00000008;
  uStack_b0 = in_stack_00000010;
  local_88 = in_stack_00000030;
  uStack_80 = in_stack_00000038;
  local_68 = in_stack_00000050;
  local_a8 = in_stack_00000018;
  uStack_a0 = in_stack_00000020;
  local_78 = in_stack_00000040;
  uStack_70 = in_stack_00000048;
  _basis_to_quat_unchecked(local_e8,(Basis *)&local_b8);
  _basis_to_quat_unchecked(local_d8,(Basis *)&local_88);
  _quat_slerp_unchecked(local_c8,(Quaternion *)local_e8,(Quaternion *)local_d8,param_1);
  _local_58 = ZEXT416(_LC1);
  _local_48 = ZEXT416(_LC1);
  local_38 = 1.0;
  Basis::set_quaternion((Quaternion *)local_58);
  param_3[8] = local_38;
  fVar6 = (fVar7 - param_2) * param_1 + param_2;
  param_3[4] = ((fVar5 - fVar4) * param_1 + fVar4) * (float)local_48._0_4_;
  param_3[5] = ((fVar7 - param_2) * param_1 + param_2) * (float)local_48._4_4_;
  param_3[6] = ((fVar2 - fVar1) * param_1 + fVar1) * fStack_40;
  param_3[7] = ((fVar5 - fVar4) * param_1 + fVar4) * fStack_3c;
  *param_3 = (float)local_58._0_4_ * ((fVar2 - fVar1) * param_1 + fVar1);
  param_3[1] = (float)local_58._4_4_ * ((fVar5 - fVar4) * param_1 + fVar4);
  param_3[2] = fStack_50 * fVar6;
  param_3[3] = fStack_4c * ((fVar2 - fVar1) * param_1 + fVar1);
  param_3[8] = fVar6 * param_3[8];
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TransformInterpolator::interpolate_basis_via_method(Basis const&, Basis const&, Basis&, float,
   TransformInterpolator::Method) */

void TransformInterpolator::interpolate_basis_via_method
               (float param_4,Basis *param_1,Basis *param_2,Basis *param_3,int param_5)

{
  long in_FS_OFFSET;
  TransformInterpolator local_e8 [16];
  TransformInterpolator local_d8 [16];
  TransformInterpolator local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined4 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 == 1) {
    local_98 = *(undefined4 *)(param_1 + 0x20);
    local_b8 = *(undefined8 *)param_1;
    uStack_b0 = *(undefined8 *)(param_1 + 8);
    local_a8 = *(undefined8 *)(param_1 + 0x10);
    uStack_a0 = *(undefined8 *)(param_1 + 0x18);
    local_88 = *(undefined8 *)param_2;
    uStack_80 = *(undefined8 *)(param_2 + 8);
    local_78 = *(undefined8 *)(param_2 + 0x10);
    uStack_70 = *(undefined8 *)(param_2 + 0x18);
    local_68 = *(undefined4 *)(param_2 + 0x20);
    _basis_to_quat_unchecked(local_e8,(Basis *)&local_b8);
    _basis_to_quat_unchecked(local_d8,(Basis *)&local_88);
    _quat_slerp_unchecked(local_c8,(Quaternion *)local_e8,(Quaternion *)local_d8,param_4);
    local_38 = 0x3f800000;
    local_58 = ZEXT416(_LC1);
    local_48 = ZEXT416(_LC1);
    Basis::set_quaternion((Quaternion *)local_58);
    *(undefined4 *)(param_3 + 0x20) = local_38;
    *(undefined8 *)param_3 = local_58._0_8_;
    *(undefined8 *)(param_3 + 8) = local_58._8_8_;
    *(undefined8 *)(param_3 + 0x10) = local_48._0_8_;
    *(undefined8 *)(param_3 + 0x18) = local_48._8_8_;
  }
  else {
    if (param_5 != 2) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        interpolate_basis_linear(param_1,param_2,param_3,param_4);
        return;
      }
      goto LAB_00100c48;
    }
    interpolate_basis_scaled_slerp(param_3);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100c48:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TransformInterpolator::interpolate_transform_3d_via_method(Transform3D const&, Transform3D
   const&, Transform3D&, float, TransformInterpolator::Method) */

void TransformInterpolator::interpolate_transform_3d_via_method
               (float param_4,long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x24);
  fVar2 = (float)*(undefined8 *)(param_1 + 0x24);
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x24) >> 0x20);
  *(float *)(param_3 + 0x2c) =
       (*(float *)(param_2 + 0x2c) - *(float *)(param_1 + 0x2c)) * param_4 +
       *(float *)(param_1 + 0x2c);
  *(ulong *)(param_3 + 0x24) =
       CONCAT44(((float)((ulong)uVar1 >> 0x20) - fVar3) * param_4 + fVar3,
                ((float)uVar1 - fVar2) * param_4 + fVar2);
  interpolate_basis_via_method();
  return;
}



/* TransformInterpolator::_basis_is_orthogonal_any_scale(Basis const&) */

bool TransformInterpolator::_basis_is_orthogonal_any_scale(Basis *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  long lVar5;
  Vector3 *pVVar6;
  long in_FS_OFFSET;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_20;
  float fStack_1c;
  float local_18;
  long local_10;
  
  fVar9 = *(float *)(param_1 + 0x18);
  fVar12 = *(float *)(param_1 + 0x1c);
  fVar11 = *(float *)(param_1 + 0xc);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar14 = (float)*(undefined8 *)(param_1 + 0x10);
  pVVar6 = (Vector3 *)&local_20;
  fVar8 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar7 = (float)*(undefined8 *)param_1;
  local_20 = fVar11 * fVar12 - fVar9 * fVar14;
  fStack_1c = fVar9 * fVar8 - fVar7 * fVar12;
  local_18 = fVar14 * fVar7 - fVar11 * fVar8;
  fVar13 = fVar8;
  fVar15 = fVar12;
  fVar10 = fVar14;
  lVar5 = _vec3_normalize(pVVar6);
  if (_LC11 <= extraout_XMM0_Da) {
    fVar1 = *(float *)(lVar5 + 0x14);
    fVar2 = *(float *)(lVar5 + 8);
    fVar3 = *(float *)(lVar5 + 0x20);
    if (_LC12 <= local_20 * fVar2 + fStack_1c * fVar1 + local_18 * fVar3) {
      local_18 = fVar1 * fVar8 - fVar2 * fVar10;
      local_20 = fVar3 * fVar14 - fVar1 * fVar12;
      fStack_1c = fVar2 * fVar15 - fVar3 * fVar13;
      fVar12 = _LC12;
      fVar13 = _LC11;
      _vec3_normalize(pVVar6);
      if (fVar13 <= extraout_XMM0_Da_00) {
        bVar4 = fVar12 <= fVar7 * local_20 + fVar11 * fStack_1c + fVar9 * local_18;
        goto LAB_00100d8c;
      }
    }
  }
  bVar4 = false;
LAB_00100d8c:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TransformInterpolator::_basis_is_orthogonal(Basis const&, float) */

undefined4 TransformInterpolator::_basis_is_orthogonal(Basis *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  long lVar8;
  undefined4 uVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  
  lVar8 = *(long *)(in_FS_OFFSET + 0x28);
  Basis::transposed();
  fVar12 = *(float *)(param_1 + 0x1c);
  fVar1 = *(float *)(param_1 + 0x20);
  fVar11 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 0x18);
  fVar4 = *(float *)(param_1 + 8);
  fVar5 = *(float *)(param_1 + 0xc);
  fVar6 = *(float *)(param_1 + 0x10);
  fVar7 = *(float *)(param_1 + 0x14);
  fVar10 = local_3c * fVar2 + local_48 * fVar11 + local_30 * fVar4;
  if (((((((fVar10 != _LC1) && (param_2 <= ABS(fVar10 - _LC1))) ||
         ((fVar10 = local_44 * fVar11 + local_38 * fVar2 + local_2c * fVar4, fVar10 != 0.0 &&
          (param_2 <= ABS(fVar10))))) ||
        ((fVar11 = fVar2 * local_34 + fVar11 * local_40 + fVar4 * local_28, fVar11 != 0.0 &&
         (param_2 <= ABS(fVar11))))) ||
       ((fVar11 = local_48 * fVar5 + local_3c * fVar6 + local_30 * fVar7, fVar11 != 0.0 &&
        (param_2 <= ABS(fVar11))))) ||
      ((((fVar11 = local_44 * fVar5 + local_38 * fVar6 + local_2c * fVar7, fVar11 != _LC1 &&
         (param_2 <= ABS(fVar11 - _LC1))) ||
        ((fVar11 = fVar6 * local_34 + fVar5 * local_40 + fVar7 * local_28, fVar11 != 0.0 &&
         (param_2 <= ABS(fVar11))))) ||
       ((fVar11 = local_48 * fVar3 + local_3c * fVar12 + local_30 * fVar1, fVar11 != 0.0 &&
        (param_2 <= ABS(fVar11))))))) ||
     ((fVar11 = local_44 * fVar3 + local_38 * fVar12 + local_2c * fVar1, fVar11 != 0.0 &&
      (param_2 <= ABS(fVar11))))) {
    uVar9 = 0;
  }
  else {
    fVar12 = local_40 * fVar3 + local_34 * fVar12 + local_28 * fVar1;
    uVar9 = 1;
    if (fVar12 != _LC1) {
      fVar12 = ABS(fVar12 - _LC1);
      uVar9 = CONCAT31((int3)((uint)fVar12 >> 8),fVar12 < param_2);
    }
  }
  if (lVar8 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



/* TransformInterpolator::_test_basis(Basis, bool, Quaternion&) */

char TransformInterpolator::_test_basis(char param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  long in_FS_OFFSET;
  float fVar3;
  float fVar4;
  float fVar5;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fVar5 = fStack0000000000000010 * fStack0000000000000010 +
          fStack000000000000001c * fStack000000000000001c + in_stack_00000028 * in_stack_00000028;
  fVar3 = fStack000000000000000c * fStack000000000000000c +
          fStack0000000000000018 * fStack0000000000000018 +
          fStack0000000000000024 * fStack0000000000000024;
  fVar4 = fStack0000000000000014 * fStack0000000000000014 +
          fStack0000000000000008 * fStack0000000000000008 +
          fStack0000000000000020 * fStack0000000000000020;
  if ((((param_1 != '\0') || ((fVar4 != _LC1 && (_LC11 <= ABS(fVar4 - _LC1))))) ||
      ((fVar3 != _LC1 && (_LC11 <= ABS(fVar3 - _LC1))))) ||
     ((cVar2 = '\0', fVar5 != _LC1 && (_LC11 <= ABS(fVar5 - _LC1))))) {
    if ((_LC6 <= fVar4) && ((_LC6 <= fVar3 && (_LC6 <= fVar5)))) {
      fVar3 = SQRT(fVar3);
      cVar2 = '\x01';
      fVar4 = SQRT(fVar4);
      fVar5 = SQRT(fVar5);
      fStack0000000000000024 = fStack0000000000000024 / fVar3;
      fStack0000000000000020 = fStack0000000000000020 / fVar4;
      fStack0000000000000014 = fStack0000000000000014 / fVar4;
      fStack0000000000000008 = fStack0000000000000008 / fVar4;
      fStack0000000000000018 = fStack0000000000000018 / fVar3;
      fStack000000000000000c = fStack000000000000000c / fVar3;
      in_stack_00000028 = in_stack_00000028 / fVar5;
      fStack000000000000001c = fStack000000000000001c / fVar5;
      fStack0000000000000010 = fStack0000000000000010 / fVar5;
      goto LAB_001012e7;
    }
  }
  else {
LAB_001012e7:
    fVar3 = (fStack000000000000001c * fStack000000000000000c -
            fStack0000000000000018 * fStack0000000000000010) * fStack0000000000000020 +
            ((fStack0000000000000018 * in_stack_00000028 -
             fStack0000000000000024 * fStack000000000000001c) * fStack0000000000000008 -
            (in_stack_00000028 * fStack000000000000000c -
            fStack0000000000000024 * fStack0000000000000010) * fStack0000000000000014);
    if (((fVar3 == _LC1) || (ABS(fVar3 - _LC1) < _LC13)) &&
       (cVar1 = _basis_is_orthogonal((Basis *)&stack0x00000008,_LC13), cVar1 != '\0')) {
      _basis_to_quat_unchecked((TransformInterpolator *)&local_38,(Basis *)&stack0x00000008);
      *param_2 = local_38;
      param_2[1] = uStack_30;
      cVar1 = Quaternion::is_normalized();
      if (cVar1 != '\0') {
        cVar2 = cVar2 + '\x01';
        goto LAB_00101372;
      }
    }
  }
  cVar2 = '\0';
LAB_00101372:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return cVar2;
}



/* TransformInterpolator::checksum_transform_3d(Transform3D const&) */

float TransformInterpolator::checksum_transform_3d(Transform3D *param_1)

{
  return (*(float *)(param_1 + 0x14) + *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x10) +
         ((*(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x2c)) -
         (*(float *)param_1 + *(float *)(param_1 + 4) + *(float *)(param_1 + 8)))) -
         (*(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x20));
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransformInterpolator::find_method(Basis const&, Basis const&) */

undefined8 TransformInterpolator::find_method(Basis *param_1,Basis *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = __LC14;
  uStack_30 = _UNK_001016f8;
  iVar1 = _test_basis(0,&local_38);
  if (iVar1 != 0) {
    local_28 = __LC14;
    uStack_20 = _UNK_001016f8;
    uVar2 = _test_basis(0,&local_28);
    if ((int)uVar2 != 0) {
      if (_LC6 < _LC1 - ABS((float)local_38 * (float)local_28 + local_38._4_4_ * local_28._4_4_ +
                            (float)uStack_30 * (float)uStack_20 + uStack_30._4_4_ * uStack_20._4_4_)
         ) goto LAB_00101520;
    }
  }
  uVar2 = 0;
LAB_00101520:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* TransformInterpolator::interpolate_basis(Basis const&, Basis const&, Basis&, float) */

void TransformInterpolator::interpolate_basis
               (Basis *param_1,Basis *param_2,Basis *param_3,float param_4)

{
  undefined4 uVar1;
  
  uVar1 = find_method(param_1,param_2);
  interpolate_basis_via_method(param_4,param_1,param_2,param_3,uVar1);
  return;
}



/* TransformInterpolator::interpolate_transform_3d(Transform3D const&, Transform3D const&,
   Transform3D&, float) */

void TransformInterpolator::interpolate_transform_3d
               (Transform3D *param_1,Transform3D *param_2,Transform3D *param_3,float param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x24);
  fVar3 = (float)*(undefined8 *)(param_1 + 0x24);
  fVar4 = (float)((ulong)*(undefined8 *)(param_1 + 0x24) >> 0x20);
  *(float *)(param_3 + 0x2c) =
       (*(float *)(param_2 + 0x2c) - *(float *)(param_1 + 0x2c)) * param_4 +
       *(float *)(param_1 + 0x2c);
  *(ulong *)(param_3 + 0x24) =
       CONCAT44(((float)((ulong)uVar1 >> 0x20) - fVar4) * param_4 + fVar4,
                ((float)uVar1 - fVar3) * param_4 + fVar3);
  uVar2 = find_method((Basis *)param_1,(Basis *)param_2);
  interpolate_basis_via_method(param_4,param_1,param_2,param_3,uVar2);
  return;
}



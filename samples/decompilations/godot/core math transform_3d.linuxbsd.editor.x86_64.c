
/* Transform3D::affine_invert() */

void __thiscall Transform3D::affine_invert(Transform3D *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  Basis::invert();
  fVar1 = (float)(*(uint *)(this + 0x2c) ^ _LC0);
  fVar2 = (float)(*(uint *)(this + 0x28) ^ _LC0);
  fVar3 = (float)(*(uint *)(this + 0x24) ^ _LC0);
  *(float *)(this + 0x2c) =
       *(float *)(this + 0x20) * fVar1 +
       *(float *)(this + 0x18) * fVar3 + *(float *)(this + 0x1c) * fVar2;
  *(ulong *)(this + 0x24) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 8) >> 0x20) * fVar3 +
                fVar2 * *(float *)(this + 0x10) +
                (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20) * fVar1,
                (float)*(undefined8 *)this * fVar3 + fVar2 * *(float *)(this + 4) +
                (float)*(undefined8 *)(this + 8) * fVar1);
  return;
}



/* Transform3D::affine_inverse() const */

void Transform3D::affine_inverse(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *in_RSI;
  undefined8 *in_RDI;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = in_RSI[1];
  uVar2 = in_RSI[4];
  uVar3 = in_RSI[5];
  *in_RDI = *in_RSI;
  in_RDI[1] = uVar1;
  uVar1 = in_RSI[2];
  uVar4 = in_RSI[3];
  in_RDI[4] = uVar2;
  in_RDI[5] = uVar3;
  in_RDI[2] = uVar1;
  in_RDI[3] = uVar4;
  Basis::invert();
  fVar5 = (float)(*(uint *)((long)in_RDI + 0x2c) ^ _LC0);
  fVar6 = (float)(*(uint *)(in_RDI + 5) ^ _LC0);
  fVar7 = (float)(*(uint *)((long)in_RDI + 0x24) ^ _LC0);
  *(float *)((long)in_RDI + 0x2c) =
       *(float *)(in_RDI + 4) * fVar5 +
       *(float *)(in_RDI + 3) * fVar7 + *(float *)((long)in_RDI + 0x1c) * fVar6;
  *(ulong *)((long)in_RDI + 0x24) =
       CONCAT44((float)((ulong)in_RDI[1] >> 0x20) * fVar7 + fVar6 * *(float *)(in_RDI + 2) +
                (float)((ulong)in_RDI[2] >> 0x20) * fVar5,
                (float)*in_RDI * fVar7 + fVar6 * *(float *)((long)in_RDI + 4) +
                (float)in_RDI[1] * fVar5);
  return;
}



/* Transform3D::invert() */

void __thiscall Transform3D::invert(Transform3D *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  Basis::transpose();
  fVar1 = (float)(*(uint *)(this + 0x2c) ^ _LC0);
  fVar2 = (float)(*(uint *)(this + 0x28) ^ _LC0);
  fVar3 = (float)(*(uint *)(this + 0x24) ^ _LC0);
  *(float *)(this + 0x2c) =
       *(float *)(this + 0x20) * fVar1 +
       *(float *)(this + 0x18) * fVar3 + *(float *)(this + 0x1c) * fVar2;
  *(ulong *)(this + 0x24) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 8) >> 0x20) * fVar3 +
                fVar2 * *(float *)(this + 0x10) +
                (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20) * fVar1,
                (float)*(undefined8 *)this * fVar3 + fVar2 * *(float *)(this + 4) +
                (float)*(undefined8 *)(this + 8) * fVar1);
  return;
}



/* Transform3D::inverse() const */

void Transform3D::inverse(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *in_RSI;
  undefined8 *in_RDI;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = in_RSI[1];
  uVar2 = in_RSI[4];
  uVar3 = in_RSI[5];
  *in_RDI = *in_RSI;
  in_RDI[1] = uVar1;
  uVar1 = in_RSI[2];
  uVar4 = in_RSI[3];
  in_RDI[4] = uVar2;
  in_RDI[5] = uVar3;
  in_RDI[2] = uVar1;
  in_RDI[3] = uVar4;
  Basis::transpose();
  fVar5 = (float)(*(uint *)((long)in_RDI + 0x2c) ^ _LC0);
  fVar6 = (float)(*(uint *)(in_RDI + 5) ^ _LC0);
  fVar7 = (float)(*(uint *)((long)in_RDI + 0x24) ^ _LC0);
  *(float *)((long)in_RDI + 0x2c) =
       *(float *)(in_RDI + 4) * fVar5 +
       *(float *)(in_RDI + 3) * fVar7 + *(float *)((long)in_RDI + 0x1c) * fVar6;
  *(ulong *)((long)in_RDI + 0x24) =
       CONCAT44((float)((ulong)in_RDI[1] >> 0x20) * fVar7 + fVar6 * *(float *)(in_RDI + 2) +
                (float)((ulong)in_RDI[2] >> 0x20) * fVar5,
                (float)*in_RDI * fVar7 + fVar6 * *(float *)((long)in_RDI + 4) +
                (float)in_RDI[1] * fVar5);
  return;
}



/* Transform3D::rotated(Vector3 const&, float) const */

Transform3D * __thiscall Transform3D::rotated(Transform3D *this,Vector3 *param_1,float param_2)

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
  float fVar12;
  long in_FS_OFFSET;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  undefined1 local_38 [8];
  float fStack_30;
  float fStack_2c;
  float local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 1.0;
  _local_48 = ZEXT416(_LC1);
  _local_38 = ZEXT416(_LC1);
  Basis::set_axis_angle((Vector3 *)local_48,param_2);
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  fVar4 = *(float *)(param_1 + 0xc);
  fVar5 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x14);
  fVar7 = *(float *)(param_1 + 0x18);
  fVar8 = *(float *)(param_1 + 0x1c);
  fVar9 = *(float *)(param_1 + 0x20);
  fVar10 = *(float *)(param_1 + 0x24);
  fVar11 = *(float *)(param_1 + 0x28);
  fVar12 = *(float *)(param_1 + 0x2c);
  *(float *)this = fVar1 * (float)local_48._0_4_ + fVar4 * (float)local_48._4_4_ + fVar7 * fStack_40
  ;
  *(float *)(this + 4) =
       fVar2 * (float)local_48._0_4_ + fVar5 * (float)local_48._4_4_ + fVar8 * fStack_40;
  *(float *)(this + 8) =
       fVar3 * (float)local_48._0_4_ + fVar6 * (float)local_48._4_4_ + fVar9 * fStack_40;
  *(float *)(this + 0xc) =
       fVar1 * fStack_3c + fVar4 * (float)local_38._0_4_ + fVar7 * (float)local_38._4_4_;
  *(float *)(this + 0x10) =
       fVar8 * (float)local_38._4_4_ + fVar2 * fStack_3c + fVar5 * (float)local_38._0_4_;
  *(float *)(this + 0x14) =
       fVar9 * (float)local_38._4_4_ + fVar3 * fStack_3c + fVar6 * (float)local_38._0_4_;
  *(float *)(this + 0x18) = fVar7 * local_28 + fVar1 * fStack_30 + fVar4 * fStack_2c;
  *(float *)(this + 0x1c) = fVar8 * local_28 + fVar2 * fStack_30 + fVar5 * fStack_2c;
  *(float *)(this + 0x20) = fVar3 * fStack_30 + fVar6 * fStack_2c + fVar9 * local_28;
  *(float *)(this + 0x24) =
       fVar10 * (float)local_48._0_4_ + fVar11 * (float)local_48._4_4_ + fVar12 * fStack_40;
  *(float *)(this + 0x28) =
       fVar10 * fStack_3c + fVar11 * (float)local_38._0_4_ + fVar12 * (float)local_38._4_4_;
  *(float *)(this + 0x2c) = fVar10 * fStack_30 + fVar11 * fStack_2c + fVar12 * local_28;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Transform3D::rotate(Vector3 const&, float) */

void Transform3D::rotate(Vector3 *param_1,float param_2)

{
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  rotated((Transform3D *)&local_48,param_1,param_2);
  *(undefined8 *)param_1 = local_48;
  *(undefined8 *)(param_1 + 8) = uStack_40;
  *(undefined8 *)(param_1 + 0x10) = local_38;
  *(undefined8 *)(param_1 + 0x18) = uStack_30;
  *(undefined8 *)(param_1 + 0x20) = local_28;
  *(undefined8 *)(param_1 + 0x28) = uStack_20;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Transform3D::rotated_local(Vector3 const&, float) const */

Transform3D * __thiscall
Transform3D::rotated_local(Transform3D *this,Vector3 *param_1,float param_2)

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
  long in_FS_OFFSET;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  undefined1 local_38 [8];
  float fStack_30;
  float fStack_2c;
  float local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 1.0;
  _local_48 = ZEXT416(_LC1);
  _local_38 = ZEXT416(_LC1);
  Basis::set_axis_angle((Vector3 *)local_48,param_2);
  fVar6 = *(float *)param_1;
  fVar7 = *(float *)(param_1 + 4);
  fVar8 = *(float *)(param_1 + 0xc);
  fVar9 = *(float *)(param_1 + 0x10);
  fVar10 = *(float *)(param_1 + 0x18);
  fVar11 = *(float *)(param_1 + 0x1c);
  fVar1 = *(float *)(param_1 + 0x1c);
  fVar2 = *(float *)(param_1 + 0x20);
  fVar3 = *(float *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x24) = *(undefined8 *)(param_1 + 0x24);
  fVar4 = *(float *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  fVar5 = *(float *)(param_1 + 8);
  *(float *)(this + 0x20) = fStack_40 * fVar3 + (float)local_38._4_4_ * fVar1 + local_28 * fVar2;
  *(float *)this = fVar5 * fStack_30 + (float)local_48._0_4_ * fVar6 + fStack_3c * fVar7;
  *(float *)(this + 4) =
       fVar5 * fStack_2c + (float)local_48._4_4_ * fVar6 + (float)local_38._0_4_ * fVar7;
  *(float *)(this + 8) = fVar5 * local_28 + fStack_40 * fVar6 + (float)local_38._4_4_ * fVar7;
  *(float *)(this + 0xc) = fVar4 * fStack_30 + (float)local_48._0_4_ * fVar8 + fStack_3c * fVar9;
  *(float *)(this + 0x10) =
       (float)local_38._0_4_ * fVar9 + fVar8 * (float)local_48._4_4_ + fStack_2c * fVar4;
  *(float *)(this + 0x14) = (float)local_38._4_4_ * fVar9 + fVar8 * fStack_40 + local_28 * fVar4;
  *(float *)(this + 0x18) = fStack_3c * fVar11 + fVar10 * (float)local_48._0_4_ + fStack_30 * fVar2;
  *(float *)(this + 0x1c) =
       (float)local_38._0_4_ * fVar11 + fVar10 * (float)local_48._4_4_ + fStack_2c * fVar2;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Transform3D::rotate_basis(Vector3 const&, float) */

void Transform3D::rotate_basis(Vector3 *param_1,float param_2)

{
  Basis::rotate(param_1,param_2);
  return;
}



/* Transform3D::looking_at(Vector3 const&, Vector3 const&, bool) const */

Transform3D * __thiscall
Transform3D::looking_at(Transform3D *this,Vector3 *param_1,Vector3 *param_2,bool param_3)

{
  uint uVar1;
  char cVar2;
  long in_FS_OFFSET;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = Vector3::is_equal_approx(param_1 + 0x24);
  if (cVar2 == '\0') {
    local_68 = *(undefined8 *)param_1;
    uStack_60 = *(undefined8 *)(param_1 + 8);
    local_70 = *(float *)(param_2 + 8) - *(float *)(param_1 + 0x2c);
    local_58 = *(undefined8 *)(param_1 + 0x10);
    uStack_50 = *(undefined8 *)(param_1 + 0x18);
    local_78 = CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) -
                        (float)((ulong)*(undefined8 *)(param_1 + 0x24) >> 0x20),
                        (float)*(undefined8 *)param_2 - (float)*(undefined8 *)(param_1 + 0x24));
    local_48 = *(undefined8 *)(param_1 + 0x20);
    uStack_40 = *(undefined8 *)(param_1 + 0x28);
    Basis::looking_at((Vector3 *)&local_68,(Vector3 *)&local_78,param_3);
    *(undefined8 *)this = local_68;
    *(undefined8 *)(this + 8) = uStack_60;
    *(undefined8 *)(this + 0x10) = local_58;
    *(undefined8 *)(this + 0x18) = uStack_50;
    *(undefined8 *)(this + 0x20) = local_48;
    *(undefined8 *)(this + 0x28) = uStack_40;
  }
  else {
    _err_print_error("looking_at","core/math/transform_3d.cpp",0x51,
                     "Condition \"origin.is_equal_approx(p_target)\" is true. Returning: Transform3D()"
                     ,"The transform\'s origin and target can\'t be equal.",0,0);
    uVar1 = _LC1;
    *(undefined4 *)(this + 0x20) = 0x3f800000;
    *(undefined8 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined1 (*) [16])this = ZEXT416(uVar1);
    *(undefined1 (*) [16])(this + 0x10) = ZEXT416(uVar1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Transform3D::set_look_at(Vector3 const&, Vector3 const&, Vector3 const&, bool) */

void Transform3D::set_look_at(Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,bool param_4)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_40;
  float local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = Vector3::is_equal_approx(param_2);
  if (cVar1 == '\0') {
    local_38 = *(float *)(param_3 + 8) - *(float *)(param_2 + 8);
    local_40 = CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) -
                        (float)((ulong)*(undefined8 *)param_2 >> 0x20),
                        (float)*(undefined8 *)param_3 - (float)*(undefined8 *)param_2);
    Basis::looking_at((Vector3 *)&local_78,(Vector3 *)&local_40,param_4);
    *(undefined8 *)param_1 = local_78;
    *(undefined8 *)(param_1 + 8) = uStack_70;
    *(undefined8 *)(param_1 + 0x10) = local_68;
    *(undefined8 *)(param_1 + 0x18) = uStack_60;
    *(undefined4 *)(param_1 + 0x20) = local_58;
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)param_2;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 8);
  }
  else {
    _err_print_error("set_look_at","core/math/transform_3d.cpp",0x5a,
                     "Condition \"p_eye.is_equal_approx(p_target)\" is true.",
                     "The eye and target vectors can\'t be equal.",0,0);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Transform3D::interpolate_with(Transform3D const&, float) const */

Transform3D * Transform3D::interpolate_with(Transform3D *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_RDX;
  long in_RSI;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  Quaternion local_58 [16];
  Vector3 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  auVar5 = ZEXT416(_LC1);
  *(undefined1 (*) [16])param_1 = auVar5;
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar5;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  Basis::get_scale();
  Basis::get_rotation_quaternion();
  fVar1 = *(float *)(in_RSI + 0x2c);
  uVar3 = *(undefined8 *)(in_RSI + 0x24);
  Basis::get_scale();
  Basis::get_rotation_quaternion();
  uVar4 = *(undefined8 *)(in_RDX + 0x24);
  fVar2 = *(float *)(in_RDX + 0x2c);
  fVar6 = (float)uVar3;
  fVar7 = (float)((ulong)uVar3 >> 0x20);
  Quaternion::slerp(local_58,param_2);
  Quaternion::normalized();
  Basis::set_quaternion_scale((Quaternion *)param_1,local_48);
  *(ulong *)(param_1 + 0x24) =
       CONCAT44(((float)((ulong)uVar4 >> 0x20) - fVar7) * param_2 + fVar7,
                ((float)uVar4 - fVar6) * param_2 + fVar6);
  *(float *)(param_1 + 0x2c) = (fVar2 - fVar1) * param_2 + fVar1;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Transform3D::scale(Vector3 const&) */

void __thiscall Transform3D::scale(Transform3D *this,Vector3 *param_1)

{
  Basis::scale((Vector3 *)this);
  *(ulong *)(this + 0x24) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x24) >> 0x20) *
                (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                (float)*(undefined8 *)(this + 0x24) * (float)*(undefined8 *)param_1);
  *(float *)(this + 0x2c) = *(float *)(this + 0x2c) * *(float *)(param_1 + 8);
  return;
}



/* Transform3D::scaled(Vector3 const&) const */

Vector3 * Transform3D::scaled(Vector3 *param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *in_RDX;
  long in_RSI;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  long local_10;
  
  uVar3 = *(undefined8 *)(in_RSI + 0x24);
  uVar4 = *in_RDX;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar1 = *(float *)(in_RSI + 0x2c);
  fVar2 = *(float *)(in_RDX + 1);
  Basis::scaled((Vector3 *)&local_38);
  *(undefined4 *)(param_1 + 0x20) = local_18;
  *(undefined8 *)param_1 = local_38;
  *(undefined8 *)(param_1 + 8) = uStack_30;
  *(undefined8 *)(param_1 + 0x10) = local_28;
  *(undefined8 *)(param_1 + 0x18) = uStack_20;
  *(ulong *)(param_1 + 0x24) =
       CONCAT44((float)((ulong)uVar3 >> 0x20) * (float)((ulong)uVar4 >> 0x20),
                (float)uVar3 * (float)uVar4);
  *(float *)(param_1 + 0x2c) = fVar1 * fVar2;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Transform3D::scaled_local(Vector3 const&) const */

Transform3D * __thiscall Transform3D::scaled_local(Transform3D *this,Vector3 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Basis::scaled_local((Vector3 *)&local_48);
  *(undefined4 *)(this + 0x20) = local_28;
  uVar2 = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)this = local_48;
  *(undefined8 *)(this + 8) = uStack_40;
  *(undefined8 *)(this + 0x24) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined8 *)(this + 0x10) = local_38;
  *(undefined8 *)(this + 0x18) = uStack_30;
  *(undefined4 *)(this + 0x2c) = uVar1;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Transform3D::scale_basis(Vector3 const&) */

void Transform3D::scale_basis(Vector3 *param_1)

{
  Basis::scale(param_1);
  return;
}



/* Transform3D::translate_local(Vector3 const&) */

void __thiscall Transform3D::translate_local(Transform3D *this,Vector3 *param_1)

{
  Transform3D *pTVar1;
  Transform3D *pTVar2;
  Transform3D *pTVar3;
  
  pTVar1 = this + 0x24;
  pTVar2 = this;
  do {
    pTVar3 = pTVar2 + 0xc;
    *(float *)pTVar1 =
         *(float *)param_1 * *(float *)pTVar2 + *(float *)(pTVar2 + 4) * *(float *)(param_1 + 4) +
         *(float *)(pTVar2 + 8) * *(float *)(param_1 + 8) + *(float *)pTVar1;
    pTVar1 = pTVar1 + 4;
    pTVar2 = pTVar3;
  } while (this + 0x24 != pTVar3);
  return;
}



/* Transform3D::translate_local(float, float, float) */

void __thiscall
Transform3D::translate_local(Transform3D *this,float param_1,float param_2,float param_3)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  float local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = CONCAT44(param_2,param_1);
  local_18 = param_3;
  translate_local(this,(Vector3 *)&local_20);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Transform3D::translated(Vector3 const&) const */

Vector3 * Transform3D::translated(Vector3 *param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *in_RDX;
  undefined8 *in_RSI;
  
  uVar3 = *in_RDX;
  uVar4 = *(undefined8 *)((long)in_RSI + 0x24);
  fVar1 = *(float *)((long)in_RSI + 0x2c);
  fVar2 = *(float *)(in_RDX + 1);
  uVar6 = in_RSI[1];
  uVar7 = in_RSI[2];
  uVar8 = in_RSI[3];
  uVar5 = *(undefined4 *)(in_RSI + 4);
  *(undefined8 *)param_1 = *in_RSI;
  *(undefined8 *)(param_1 + 8) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  *(ulong *)(param_1 + 0x24) =
       CONCAT44((float)((ulong)uVar4 >> 0x20) + (float)((ulong)uVar3 >> 0x20),
                (float)uVar4 + (float)uVar3);
  *(float *)(param_1 + 0x2c) = fVar1 + fVar2;
  return param_1;
}



/* Transform3D::translated_local(Vector3 const&) const */

Vector3 * Transform3D::translated_local(Vector3 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *in_RDX;
  undefined8 *in_RSI;
  float fVar10;
  float fVar11;
  
  fVar1 = *(float *)(in_RSI + 3);
  fVar2 = *(float *)((long)in_RSI + 0x1c);
  fVar3 = *(float *)(in_RDX + 1);
  fVar10 = (float)*in_RDX;
  fVar11 = (float)((ulong)*in_RDX >> 0x20);
  uVar6 = in_RSI[1];
  uVar7 = *in_RSI;
  fVar4 = *(float *)(in_RSI + 2);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(in_RSI + 4);
  fVar5 = *(float *)((long)in_RSI + 4);
  *(float *)(param_1 + 0x2c) =
       fVar1 * fVar10 + fVar2 * fVar11 + *(float *)(in_RSI + 4) * fVar3 +
       *(float *)((long)in_RSI + 0x2c);
  uVar8 = in_RSI[1];
  *(undefined8 *)param_1 = *in_RSI;
  *(undefined8 *)(param_1 + 8) = uVar8;
  uVar8 = in_RSI[2];
  uVar9 = in_RSI[3];
  *(undefined8 *)(param_1 + 0x10) = in_RSI[2];
  *(undefined8 *)(param_1 + 0x18) = uVar9;
  *(ulong *)(param_1 + 0x24) =
       CONCAT44((float)((ulong)uVar6 >> 0x20) * fVar10 + fVar11 * fVar4 +
                (float)((ulong)uVar8 >> 0x20) * fVar3 +
                (float)((ulong)*(undefined8 *)((long)in_RSI + 0x24) >> 0x20),
                (float)uVar7 * fVar10 + fVar11 * fVar5 + (float)uVar6 * fVar3 +
                (float)*(undefined8 *)((long)in_RSI + 0x24));
  return param_1;
}



/* Transform3D::orthonormalize() */

void Transform3D::orthonormalize(void)

{
  Basis::orthonormalize();
  return;
}



/* Transform3D::orthonormalized() const */

void Transform3D::orthonormalized(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *in_RSI;
  undefined8 *in_RDI;
  
  uVar1 = in_RSI[1];
  uVar2 = in_RSI[2];
  uVar3 = in_RSI[3];
  uVar4 = in_RSI[4];
  uVar5 = in_RSI[5];
  *in_RDI = *in_RSI;
  in_RDI[1] = uVar1;
  in_RDI[2] = uVar2;
  in_RDI[3] = uVar3;
  in_RDI[4] = uVar4;
  in_RDI[5] = uVar5;
  Basis::orthonormalize();
  return;
}



/* Transform3D::orthogonalize() */

void Transform3D::orthogonalize(void)

{
  Basis::orthogonalize();
  return;
}



/* Transform3D::orthogonalized() const */

void Transform3D::orthogonalized(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *in_RSI;
  undefined8 *in_RDI;
  
  uVar1 = in_RSI[1];
  uVar2 = in_RSI[2];
  uVar3 = in_RSI[3];
  uVar4 = in_RSI[4];
  uVar5 = in_RSI[5];
  *in_RDI = *in_RSI;
  in_RDI[1] = uVar1;
  in_RDI[2] = uVar2;
  in_RDI[3] = uVar3;
  in_RDI[4] = uVar4;
  in_RDI[5] = uVar5;
  Basis::orthogonalize();
  return;
}



/* Transform3D::is_equal_approx(Transform3D const&) const */

undefined8 Transform3D::is_equal_approx(Transform3D *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Basis::is_equal_approx((Basis *)param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = Vector3::is_equal_approx((Vector3 *)(param_1 + 0x24));
  return uVar2;
}



/* Transform3D::is_finite() const */

undefined8 Transform3D::is_finite(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Basis::is_finite();
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = Vector3::is_finite();
  return uVar2;
}



/* Transform3D::TEMPNAMEPLACEHOLDERVALUE(Transform3D const&) const */

ulong __thiscall Transform3D::operator==(Transform3D *this,Transform3D *param_1)

{
  ulong uVar1;
  
  uVar1 = Basis::operator==((Basis *)this,(Basis *)param_1);
  if ((char)uVar1 != '\0') {
    if ((*(float *)(this + 0x24) != *(float *)(param_1 + 0x24)) ||
       (*(float *)(this + 0x28) != *(float *)(param_1 + 0x28))) {
      return 0;
    }
    uVar1 = CONCAT71((int7)(uVar1 >> 8),
                     !NAN(*(float *)(this + 0x2c)) && !NAN(*(float *)(param_1 + 0x2c))) & 0xffffffff
    ;
    if (*(float *)(this + 0x2c) != *(float *)(param_1 + 0x2c)) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* Transform3D::TEMPNAMEPLACEHOLDERVALUE(Transform3D const&) const */

ulong __thiscall Transform3D::operator!=(Transform3D *this,Transform3D *param_1)

{
  ulong uVar1;
  
  uVar1 = Basis::operator!=((Basis *)this,(Basis *)param_1);
  if ((char)uVar1 == '\0') {
    if ((*(float *)(this + 0x24) != *(float *)(param_1 + 0x24)) ||
       (*(float *)(this + 0x28) != *(float *)(param_1 + 0x28))) {
      return 1;
    }
    uVar1 = CONCAT71((int7)(uVar1 >> 8),
                     NAN(*(float *)(this + 0x2c)) || NAN(*(float *)(param_1 + 0x2c))) & 0xffffffff;
    if (*(float *)(this + 0x2c) != *(float *)(param_1 + 0x2c)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* Transform3D::TEMPNAMEPLACEHOLDERVALUE(Transform3D const&) */

void __thiscall Transform3D::operator*=(Transform3D *this,Transform3D *param_1)

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
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar1 = *(float *)(this + 0x10);
  fVar2 = *(float *)(this + 0x14);
  fVar3 = *(float *)(this + 0x18);
  fVar4 = *(float *)(this + 0x20);
  fVar15 = (float)*(undefined8 *)(param_1 + 0x28);
  fVar5 = *(float *)this;
  fVar6 = *(float *)(this + 4);
  fVar7 = *(float *)(this + 8);
  fVar8 = *(float *)(this + 0xc);
  fVar16 = (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
  fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  *(float *)(this + 0x2c) =
       *(float *)(param_1 + 0x24) * *(float *)(this + 0x18) + fVar15 * *(float *)(this + 0x1c) +
       fVar16 * *(float *)(this + 0x20) + *(float *)(this + 0x2c);
  *(ulong *)(this + 0x24) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 8) >> 0x20) * fVar17 +
                *(float *)(this + 0x10) * fVar15 +
                (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20) * fVar16 +
                (float)((ulong)*(undefined8 *)(this + 0x24) >> 0x20),
                (float)*(undefined8 *)this * fVar17 + *(float *)(this + 4) * fVar15 +
                (float)*(undefined8 *)(this + 8) * fVar16 + (float)*(undefined8 *)(this + 0x24));
  fVar15 = *(float *)param_1;
  fVar16 = *(float *)(param_1 + 4);
  fVar17 = *(float *)(param_1 + 8);
  fVar9 = *(float *)(param_1 + 0xc);
  fVar10 = *(float *)(param_1 + 0x10);
  fVar11 = *(float *)(param_1 + 0x14);
  fVar12 = *(float *)(param_1 + 0x18);
  fVar13 = *(float *)(param_1 + 0x1c);
  fVar14 = *(float *)(param_1 + 0x20);
  *(float *)(this + 0x20) =
       *(float *)(this + 0x18) * *(float *)(param_1 + 8) +
       *(float *)(this + 0x1c) * *(float *)(param_1 + 0x14) +
       *(float *)(this + 0x20) * *(float *)(param_1 + 0x20);
  *(float *)this = fVar15 * fVar5 + fVar9 * fVar6 + fVar7 * fVar12;
  *(float *)(this + 4) = fVar16 * fVar5 + fVar10 * fVar6 + fVar7 * fVar13;
  *(float *)(this + 8) = fVar17 * fVar5 + fVar11 * fVar6 + fVar7 * fVar14;
  *(float *)(this + 0xc) = fVar15 * fVar8 + fVar9 * fVar1 + fVar2 * fVar12;
  *(float *)(this + 0x10) = fVar8 * fVar16 + fVar10 * fVar1 + fVar13 * fVar2;
  *(float *)(this + 0x14) = fVar8 * fVar17 + fVar11 * fVar1 + fVar14 * fVar2;
  *(float *)(this + 0x18) = fVar3 * fVar15 + fVar9 * *(float *)(this + 0x1c) + fVar12 * fVar4;
  *(float *)(this + 0x1c) = fVar3 * fVar16 + fVar10 * *(float *)(this + 0x1c) + fVar13 * fVar4;
  return;
}



/* Transform3D::TEMPNAMEPLACEHOLDERVALUE(Transform3D const&) const */

void __thiscall Transform3D::operator*(Transform3D *this,Transform3D *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Transform3D *in_RDX;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = uVar2;
  *(undefined8 *)(this + 0x18) = uVar3;
  *(undefined8 *)(this + 0x20) = uVar4;
  *(undefined8 *)(this + 0x28) = uVar5;
  operator*=(this,in_RDX);
  return;
}



/* Transform3D::TEMPNAMEPLACEHOLDERVALUE(float) */

void __thiscall Transform3D::operator*=(Transform3D *this,float param_1)

{
  *(float *)(this + 0x10) = *(float *)(this + 0x10) * param_1;
  *(float *)(this + 0x14) = *(float *)(this + 0x14) * param_1;
  *(float *)(this + 0x18) = *(float *)(this + 0x18) * param_1;
  *(float *)(this + 0x1c) = *(float *)(this + 0x1c) * param_1;
  *(float *)(this + 0x20) = *(float *)(this + 0x20) * param_1;
  *(float *)(this + 0x24) = *(float *)(this + 0x24) * param_1;
  *(float *)(this + 0x28) = *(float *)(this + 0x28) * param_1;
  *(float *)(this + 0x2c) = *(float *)(this + 0x2c) * param_1;
  *(float *)this = param_1 * *(float *)this;
  *(float *)(this + 4) = param_1 * *(float *)(this + 4);
  *(float *)(this + 8) = param_1 * *(float *)(this + 8);
  *(float *)(this + 0xc) = param_1 * *(float *)(this + 0xc);
  return;
}



/* Transform3D::TEMPNAMEPLACEHOLDERVALUE(float) const */

Transform3D * __thiscall Transform3D::operator*(Transform3D *this,float param_1)

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
  float *in_RSI;
  
  fVar1 = *in_RSI;
  fVar2 = in_RSI[1];
  fVar3 = in_RSI[2];
  fVar4 = in_RSI[3];
  fVar5 = in_RSI[5];
  fVar6 = in_RSI[6];
  fVar7 = in_RSI[7];
  fVar8 = in_RSI[8];
  fVar9 = in_RSI[9];
  fVar10 = in_RSI[10];
  fVar11 = in_RSI[0xb];
  *(float *)(this + 0x10) = in_RSI[4] * param_1;
  *(float *)(this + 0x14) = fVar5 * param_1;
  *(float *)(this + 0x18) = fVar6 * param_1;
  *(float *)(this + 0x1c) = fVar7 * param_1;
  *(float *)(this + 0x20) = fVar8 * param_1;
  *(float *)(this + 0x24) = fVar9 * param_1;
  *(float *)(this + 0x28) = fVar10 * param_1;
  *(float *)(this + 0x2c) = fVar11 * param_1;
  *(float *)this = param_1 * fVar1;
  *(float *)(this + 4) = param_1 * fVar2;
  *(float *)(this + 8) = param_1 * fVar3;
  *(float *)(this + 0xc) = param_1 * fVar4;
  return this;
}



/* Transform3D::TEMPNAMEPLACEHOLDERVALUE(float) */

void __thiscall Transform3D::operator/=(Transform3D *this,float param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1._4_4_ = param_1;
  auVar1._0_4_ = param_1;
  auVar1._8_4_ = param_1;
  auVar1._12_4_ = param_1;
  auVar2 = divps(*(undefined1 (*) [16])(this + 0x10),auVar1);
  auVar3._4_4_ = param_1;
  auVar3._0_4_ = param_1;
  auVar3._8_4_ = param_1;
  auVar3._12_4_ = param_1;
  auVar1 = divps(*(undefined1 (*) [16])(this + 0x20),auVar3);
  *(undefined1 (*) [16])(this + 0x10) = auVar2;
  auVar2._4_4_ = param_1;
  auVar2._0_4_ = param_1;
  auVar2._8_4_ = param_1;
  auVar2._12_4_ = param_1;
  auVar3 = divps(*(undefined1 (*) [16])this,auVar2);
  *(undefined1 (*) [16])(this + 0x20) = auVar1;
  *(undefined1 (*) [16])this = auVar3;
  return;
}



/* Transform3D::TEMPNAMEPLACEHOLDERVALUE(float) const */

void __thiscall Transform3D::operator/(Transform3D *this,float param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *in_RSI;
  
  uVar1 = in_RSI[1];
  uVar2 = in_RSI[2];
  uVar3 = in_RSI[3];
  uVar4 = in_RSI[4];
  uVar5 = in_RSI[5];
  *(undefined8 *)this = *in_RSI;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = uVar2;
  *(undefined8 *)(this + 0x18) = uVar3;
  *(undefined8 *)(this + 0x20) = uVar4;
  *(undefined8 *)(this + 0x28) = uVar5;
  operator/=(this,param_1);
  return;
}



/* Transform3D::operator String() const */

Transform3D * __thiscall Transform3D::operator_cast_to_String(Transform3D *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined8 *in_RSI;
  long in_FS_OFFSET;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = 0;
  local_80 = 1;
  local_88 = "]";
  String::parse_latin1((StrRange *)&local_90);
  Vector3::operator_cast_to_String((Vector3 *)&local_98);
  local_a8 = 0;
  local_88 = ", O: ";
  local_80 = 5;
  String::parse_latin1((StrRange *)&local_a8);
  local_48 = *(undefined4 *)(in_RSI + 4);
  local_50 = CONCAT44((int)((ulong)in_RSI[2] >> 0x20),(int)in_RSI[1]);
  Vector3::operator_cast_to_String((Vector3 *)&local_b8);
  local_88 = ", Z: ";
  local_c8 = 0;
  local_80 = 5;
  String::parse_latin1((StrRange *)&local_c8);
  local_58 = *(undefined4 *)((long)in_RSI + 0x1c);
  local_60 = CONCAT44((int)((ulong)*(undefined8 *)((long)in_RSI + 0xc) >> 0x20),
                      (int)*(undefined8 *)((long)in_RSI + 4));
  Vector3::operator_cast_to_String((Vector3 *)&local_d8);
  local_88 = ", Y: ";
  local_e8 = 0;
  local_80 = 5;
  String::parse_latin1((StrRange *)&local_e8);
  local_68 = *(undefined4 *)(in_RSI + 3);
  local_70 = CONCAT44((int)((ulong)in_RSI[1] >> 0x20),(int)*in_RSI);
  Vector3::operator_cast_to_String((Vector3 *)&local_f8);
  operator+((char *)&local_f0,&_LC14);
  String::operator+((String *)&local_e0,(String *)&local_f0);
  String::operator+((String *)&local_d0,(String *)&local_e0);
  String::operator+((String *)&local_c0,(String *)&local_d0);
  String::operator+((String *)&local_b0,(String *)&local_c0);
  String::operator+((String *)&local_a0,(String *)&local_b0);
  String::operator+((String *)&local_88,(String *)&local_a0);
  String::operator+((String *)this,(String *)&local_88);
  pcVar3 = local_88;
  if (local_88 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_f0;
  if (local_f0 != 0) {
    LOCK();
    plVar1 = (long *)(local_f0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_f8;
  if (local_f8 != 0) {
    LOCK();
    plVar1 = (long *)(local_f8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Transform3D::Transform3D(Basis const&, Vector3 const&) */

void __thiscall Transform3D::Transform3D(Transform3D *this,Basis *param_1,Vector3 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *(undefined8 *)param_1;
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)param_2;
  *(undefined8 *)this = uVar3;
  *(undefined8 *)(this + 8) = uVar4;
  *(undefined8 *)(this + 0x24) = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(this + 0x10) = uVar5;
  *(undefined8 *)(this + 0x18) = uVar6;
  *(undefined4 *)(this + 0x2c) = uVar1;
  return;
}



/* Transform3D::Transform3D(Vector3 const&, Vector3 const&, Vector3 const&, Vector3 const&) */

void __thiscall
Transform3D::Transform3D
          (Transform3D *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  uVar8 = _LC1;
  *(undefined4 *)(this + 0x20) = 0x3f800000;
  *(undefined1 (*) [16])this = ZEXT416(uVar8);
  *(undefined1 (*) [16])(this + 0x10) = ZEXT416(uVar8);
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_3 + 4);
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar5 = *(undefined4 *)param_2;
  *(undefined8 *)(this + 0x24) = *(undefined8 *)param_4;
  uVar6 = *(undefined4 *)param_3;
  uVar7 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_4 + 8);
  *(undefined4 *)(this + 0x10) = uVar4;
  *(undefined4 *)(this + 0x14) = uVar3;
  *(undefined4 *)(this + 0x18) = uVar2;
  *(undefined4 *)(this + 0x1c) = uVar1;
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar5;
  *(undefined4 *)(this + 8) = uVar6;
  *(undefined4 *)(this + 0xc) = uVar7;
  return;
}



/* Transform3D::Transform3D(float, float, float, float, float, float, float, float, float, float,
   float, float) */

void __thiscall
Transform3D::Transform3D
          (Transform3D *this,float param_1,float param_2,float param_3,float param_4,float param_5,
          float param_6,float param_7,float param_8,float param_9,float param_10,float param_11,
          float param_12)

{
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  *(float *)(this + 8) = param_3;
  *(float *)(this + 0xc) = param_4;
  *(float *)(this + 0x10) = param_5;
  *(float *)(this + 0x14) = param_6;
  *(float *)(this + 0x18) = param_7;
  *(float *)(this + 0x1c) = param_8;
  *(float *)(this + 0x20) = param_9;
  *(float *)(this + 0x24) = param_10;
  *(float *)(this + 0x28) = param_11;
  *(float *)(this + 0x2c) = param_12;
  return;
}



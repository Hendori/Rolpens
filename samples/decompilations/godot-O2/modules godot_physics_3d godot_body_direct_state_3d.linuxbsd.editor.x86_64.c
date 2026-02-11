
/* GodotPhysicsDirectBodyState3D::get_total_gravity() const */

void GodotPhysicsDirectBodyState3D::get_total_gravity(void)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectBodyState3D::get_total_angular_damp() const */

undefined4 __thiscall
GodotPhysicsDirectBodyState3D::get_total_angular_damp(GodotPhysicsDirectBodyState3D *this)

{
  return *(undefined4 *)(*(long *)(this + 0x178) + 0x164);
}



/* GodotPhysicsDirectBodyState3D::get_total_linear_damp() const */

undefined4 __thiscall
GodotPhysicsDirectBodyState3D::get_total_linear_damp(GodotPhysicsDirectBodyState3D *this)

{
  return *(undefined4 *)(*(long *)(this + 0x178) + 0x160);
}



/* GodotPhysicsDirectBodyState3D::get_center_of_mass() const */

void GodotPhysicsDirectBodyState3D::get_center_of_mass(void)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectBodyState3D::get_center_of_mass_local() const */

void GodotPhysicsDirectBodyState3D::get_center_of_mass_local(void)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectBodyState3D::get_principal_inertia_axes() const */

void GodotPhysicsDirectBodyState3D::get_principal_inertia_axes(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_RSI;
  undefined8 *in_RDI;
  
  lVar2 = *(long *)(in_RSI + 0x178);
  uVar3 = *(undefined8 *)(lVar2 + 0x1dc);
  uVar4 = *(undefined8 *)(lVar2 + 0x1e4);
  uVar5 = *(undefined8 *)(lVar2 + 0x1ec);
  uVar1 = *(undefined4 *)(lVar2 + 500);
  *in_RDI = *(undefined8 *)(lVar2 + 0x1d4);
  in_RDI[1] = uVar3;
  *(undefined4 *)(in_RDI + 4) = uVar1;
  in_RDI[2] = uVar4;
  in_RDI[3] = uVar5;
  return;
}



/* GodotPhysicsDirectBodyState3D::get_inverse_mass() const */

undefined4 __thiscall
GodotPhysicsDirectBodyState3D::get_inverse_mass(GodotPhysicsDirectBodyState3D *this)

{
  return *(undefined4 *)(*(long *)(this + 0x178) + 0x170);
}



/* GodotPhysicsDirectBodyState3D::get_inverse_inertia() const */

void GodotPhysicsDirectBodyState3D::get_inverse_inertia(void)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectBodyState3D::get_inverse_inertia_tensor() const */

void GodotPhysicsDirectBodyState3D::get_inverse_inertia_tensor(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_RSI;
  undefined8 *in_RDI;
  
  lVar2 = *(long *)(in_RSI + 0x178);
  uVar3 = *(undefined8 *)(lVar2 + 0x1b8);
  uVar4 = *(undefined8 *)(lVar2 + 0x1c0);
  uVar5 = *(undefined8 *)(lVar2 + 0x1c8);
  uVar1 = *(undefined4 *)(lVar2 + 0x1d0);
  *in_RDI = *(undefined8 *)(lVar2 + 0x1b0);
  in_RDI[1] = uVar3;
  *(undefined4 *)(in_RDI + 4) = uVar1;
  in_RDI[2] = uVar4;
  in_RDI[3] = uVar5;
  return;
}



/* GodotPhysicsDirectBodyState3D::get_linear_velocity() const */

void GodotPhysicsDirectBodyState3D::get_linear_velocity(void)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectBodyState3D::get_angular_velocity() const */

void GodotPhysicsDirectBodyState3D::get_angular_velocity(void)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectBodyState3D::get_transform() const */

void GodotPhysicsDirectBodyState3D::get_transform(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_RSI;
  undefined8 *in_RDI;
  
  lVar1 = *(long *)(in_RSI + 0x178);
  uVar2 = *(undefined8 *)(lVar1 + 0x50);
  uVar3 = *(undefined8 *)(lVar1 + 0x58);
  uVar4 = *(undefined8 *)(lVar1 + 0x60);
  uVar5 = *(undefined8 *)(lVar1 + 0x68);
  uVar6 = *(undefined8 *)(lVar1 + 0x70);
  *in_RDI = *(undefined8 *)(lVar1 + 0x48);
  in_RDI[1] = uVar2;
  in_RDI[2] = uVar3;
  in_RDI[3] = uVar4;
  in_RDI[4] = uVar5;
  in_RDI[5] = uVar6;
  return;
}



/* GodotPhysicsDirectBodyState3D::get_velocity_at_local_position(Vector3 const&) const */

void GodotPhysicsDirectBodyState3D::get_velocity_at_local_position(Vector3 *param_1)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectBodyState3D::get_constant_force() const */

void GodotPhysicsDirectBodyState3D::get_constant_force(void)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectBodyState3D::get_constant_torque() const */

void GodotPhysicsDirectBodyState3D::get_constant_torque(void)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectBodyState3D::is_sleeping() const */

byte __thiscall GodotPhysicsDirectBodyState3D::is_sleeping(GodotPhysicsDirectBodyState3D *this)

{
  return *(byte *)(*(long *)(this + 0x178) + 0x2b9) ^ 1;
}



/* GodotPhysicsDirectBodyState3D::get_contact_count() const */

undefined4 __thiscall
GodotPhysicsDirectBodyState3D::get_contact_count(GodotPhysicsDirectBodyState3D *this)

{
  return *(undefined4 *)(*(long *)(this + 0x178) + 0x340);
}



/* GodotPhysicsDirectBodyState3D::get_step() const */

undefined4 __thiscall GodotPhysicsDirectBodyState3D::get_step(GodotPhysicsDirectBodyState3D *this)

{
  return *(undefined4 *)(*(long *)(*(long *)(this + 0x178) + 0x40) + 0x60f8);
}



/* GodotPhysicsDirectBodyState3D::set_sleep_state(bool) */

void GodotPhysicsDirectBodyState3D::set_sleep_state(bool param_1)

{
  undefined7 in_register_00000039;
  
  GodotBody3D::set_active(SUB81(*(undefined8 *)(CONCAT71(in_register_00000039,param_1) + 0x178),0));
  return;
}



/* GodotPhysicsDirectBodyState3D::set_linear_velocity(Vector3 const&) */

void __thiscall
GodotPhysicsDirectBodyState3D::set_linear_velocity
          (GodotPhysicsDirectBodyState3D *this,Vector3 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x178);
  if ((*(long *)(lVar1 + 0x40) != 0) && (1 < *(uint *)(lVar1 + 0xd4))) {
    GodotBody3D::set_active(SUB81(lVar1,0));
    lVar1 = *(long *)(this + 0x178);
  }
  *(undefined8 *)(lVar1 + 0xd8) = *(undefined8 *)param_1;
  *(undefined4 *)(lVar1 + 0xe0) = *(undefined4 *)(param_1 + 8);
  return;
}



/* GodotPhysicsDirectBodyState3D::set_angular_velocity(Vector3 const&) */

void __thiscall
GodotPhysicsDirectBodyState3D::set_angular_velocity
          (GodotPhysicsDirectBodyState3D *this,Vector3 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x178);
  if ((*(long *)(lVar1 + 0x40) != 0) && (1 < *(uint *)(lVar1 + 0xd4))) {
    GodotBody3D::set_active(SUB81(lVar1,0));
    lVar1 = *(long *)(this + 0x178);
  }
  *(undefined8 *)(lVar1 + 0xe4) = *(undefined8 *)param_1;
  *(undefined4 *)(lVar1 + 0xec) = *(undefined4 *)(param_1 + 8);
  return;
}



/* GodotPhysicsDirectBodyState3D::apply_central_impulse(Vector3 const&) */

void __thiscall
GodotPhysicsDirectBodyState3D::apply_central_impulse
          (GodotPhysicsDirectBodyState3D *this,Vector3 *param_1)

{
  float fVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x178);
  if ((*(long *)(lVar3 + 0x40) != 0) && (1 < *(uint *)(lVar3 + 0xd4))) {
    GodotBody3D::set_active(SUB81(lVar3,0));
    lVar3 = *(long *)(this + 0x178);
  }
  uVar2 = *(undefined8 *)param_1;
  fVar1 = *(float *)(lVar3 + 0x170);
  *(float *)(lVar3 + 0xe0) = *(float *)(param_1 + 8) * fVar1 + *(float *)(lVar3 + 0xe0);
  *(ulong *)(lVar3 + 0xd8) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0xd8) >> 0x20) +
                (float)((ulong)uVar2 >> 0x20) * fVar1,
                (float)*(undefined8 *)(lVar3 + 0xd8) + (float)uVar2 * fVar1);
  return;
}



/* GodotPhysicsDirectBodyState3D::apply_impulse(Vector3 const&, Vector3 const&) */

void __thiscall
GodotPhysicsDirectBodyState3D::apply_impulse
          (GodotPhysicsDirectBodyState3D *this,Vector3 *param_1,Vector3 *param_2)

{
  float fVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = *(long *)(this + 0x178);
  if ((*(long *)(lVar2 + 0x40) != 0) && (1 < *(uint *)(lVar2 + 0xd4))) {
    GodotBody3D::set_active(SUB81(lVar2,0));
    lVar2 = *(long *)(this + 0x178);
  }
  fVar4 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(lVar2 + 0x170);
  fVar5 = *(float *)param_1;
  *(float *)(lVar2 + 0xe0) = *(float *)(param_1 + 8) * fVar3 + *(float *)(lVar2 + 0xe0);
  fVar7 = *(float *)(param_2 + 8) - *(float *)(lVar2 + 0x200);
  *(float *)(lVar2 + 0xdc) = fVar4 * fVar3 + *(float *)(lVar2 + 0xdc);
  fVar4 = *(float *)(param_1 + 8);
  fVar1 = *(float *)(param_1 + 4);
  *(float *)(lVar2 + 0xd8) = fVar3 * fVar5 + *(float *)(lVar2 + 0xd8);
  fVar3 = *(float *)(param_2 + 4) - *(float *)(lVar2 + 0x1fc);
  fVar5 = *(float *)param_2 - *(float *)(lVar2 + 0x1f8);
  fVar6 = fVar5 * fVar1 - fVar3 * *(float *)param_1;
  fVar5 = *(float *)param_1 * fVar7 - fVar5 * fVar4;
  fVar4 = fVar3 * fVar4 - fVar7 * fVar1;
  *(float *)(lVar2 + 0xe4) =
       fVar4 * *(float *)(lVar2 + 0x1b0) + fVar5 * *(float *)(lVar2 + 0x1b4) +
       fVar6 * *(float *)(lVar2 + 0x1b8) + *(float *)(lVar2 + 0xe4);
  *(ulong *)(lVar2 + 0xe8) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0xe8) >> 0x20) +
                (float)((ulong)*(undefined8 *)(lVar2 + 0x1c8) >> 0x20) * fVar5 +
                *(float *)(lVar2 + 0x1c8) * fVar4 + *(float *)(lVar2 + 0x1d0) * fVar6,
                (float)*(undefined8 *)(lVar2 + 0xe8) +
                (float)*(undefined8 *)(lVar2 + 0x1c0) * fVar5 + *(float *)(lVar2 + 0x1bc) * fVar4 +
                *(float *)(lVar2 + 0x1c4) * fVar6);
  return;
}



/* GodotPhysicsDirectBodyState3D::apply_torque_impulse(Vector3 const&) */

void __thiscall
GodotPhysicsDirectBodyState3D::apply_torque_impulse
          (GodotPhysicsDirectBodyState3D *this,Vector3 *param_1)

{
  float fVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = *(long *)(this + 0x178);
  if ((*(long *)(lVar2 + 0x40) != 0) && (1 < *(uint *)(lVar2 + 0xd4))) {
    GodotBody3D::set_active(SUB81(lVar2,0));
    lVar2 = *(long *)(this + 0x178);
  }
  fVar1 = *(float *)(param_1 + 8);
  fVar3 = (float)*(undefined8 *)param_1;
  fVar4 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  *(float *)(lVar2 + 0xec) =
       *(float *)(lVar2 + 0x1d0) * fVar1 +
       *(float *)(lVar2 + 0x1c8) * fVar3 + *(float *)(lVar2 + 0x1cc) * fVar4 +
       *(float *)(lVar2 + 0xec);
  *(ulong *)(lVar2 + 0xe4) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x1bc) >> 0x20) * fVar4 +
                fVar3 * *(float *)(lVar2 + 0x1bc) + *(float *)(lVar2 + 0x1c4) * fVar1 +
                (float)((ulong)*(undefined8 *)(lVar2 + 0xe4) >> 0x20),
                (float)*(undefined8 *)(lVar2 + 0x1b4) * fVar4 + fVar3 * *(float *)(lVar2 + 0x1b0) +
                *(float *)(lVar2 + 0x1b8) * fVar1 + (float)*(undefined8 *)(lVar2 + 0xe4));
  return;
}



/* GodotPhysicsDirectBodyState3D::apply_central_force(Vector3 const&) */

void __thiscall
GodotPhysicsDirectBodyState3D::apply_central_force
          (GodotPhysicsDirectBodyState3D *this,Vector3 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x178);
  if ((*(long *)(lVar1 + 0x40) != 0) && (1 < *(uint *)(lVar1 + 0xd4))) {
    GodotBody3D::set_active(SUB81(lVar1,0));
    lVar1 = *(long *)(this + 0x178);
  }
  *(ulong *)(lVar1 + 0x218) =
       CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                (float)((ulong)*(undefined8 *)(lVar1 + 0x218) >> 0x20),
                (float)*(undefined8 *)param_1 + (float)*(undefined8 *)(lVar1 + 0x218));
  *(float *)(lVar1 + 0x220) = *(float *)(lVar1 + 0x220) + *(float *)(param_1 + 8);
  return;
}



/* GodotPhysicsDirectBodyState3D::apply_force(Vector3 const&, Vector3 const&) */

void __thiscall
GodotPhysicsDirectBodyState3D::apply_force
          (GodotPhysicsDirectBodyState3D *this,Vector3 *param_1,Vector3 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar6 = *(long *)(this + 0x178);
  if ((*(long *)(lVar6 + 0x40) != 0) && (1 < *(uint *)(lVar6 + 0xd4))) {
    GodotBody3D::set_active(SUB81(lVar6,0));
    lVar6 = *(long *)(this + 0x178);
  }
  *(float *)(lVar6 + 0x218) = *(float *)(lVar6 + 0x218) + *(float *)param_1;
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)param_2;
  *(float *)(lVar6 + 0x21c) = *(float *)(lVar6 + 0x21c) + *(float *)(param_1 + 4);
  *(float *)(lVar6 + 0x220) = *(float *)(lVar6 + 0x220) + *(float *)(param_1 + 8);
  uVar4 = *(undefined8 *)param_2;
  fVar3 = *(float *)(param_1 + 8);
  fVar10 = (float)*(undefined8 *)(lVar6 + 0x1f8);
  fVar7 = (float)((ulong)uVar4 >> 0x20) - (float)((ulong)*(undefined8 *)(lVar6 + 0x1f8) >> 0x20);
  fVar8 = *(float *)(param_2 + 8) - (float)*(undefined8 *)(lVar6 + 0x200);
  uVar5 = *(undefined8 *)param_1;
  fVar9 = (float)((ulong)uVar5 >> 0x20);
  *(float *)(lVar6 + 0x224) = (fVar7 * fVar3 - fVar8 * fVar9) + *(float *)(lVar6 + 0x224);
  *(ulong *)(lVar6 + 0x228) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x228) >> 0x20) +
                ((fVar2 - fVar10) * fVar9 - fVar1 * fVar7),
                (float)*(undefined8 *)(lVar6 + 0x228) +
                (fVar8 * (float)uVar5 - fVar3 * ((float)uVar4 - fVar10)));
  return;
}



/* GodotPhysicsDirectBodyState3D::apply_torque(Vector3 const&) */

void __thiscall
GodotPhysicsDirectBodyState3D::apply_torque(GodotPhysicsDirectBodyState3D *this,Vector3 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x178);
  if ((*(long *)(lVar1 + 0x40) != 0) && (1 < *(uint *)(lVar1 + 0xd4))) {
    GodotBody3D::set_active(SUB81(lVar1,0));
    lVar1 = *(long *)(this + 0x178);
  }
  *(ulong *)(lVar1 + 0x224) =
       CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                (float)((ulong)*(undefined8 *)(lVar1 + 0x224) >> 0x20),
                (float)*(undefined8 *)param_1 + (float)*(undefined8 *)(lVar1 + 0x224));
  *(float *)(lVar1 + 0x22c) = *(float *)(lVar1 + 0x22c) + *(float *)(param_1 + 8);
  return;
}



/* GodotPhysicsDirectBodyState3D::add_constant_central_force(Vector3 const&) */

void __thiscall
GodotPhysicsDirectBodyState3D::add_constant_central_force
          (GodotPhysicsDirectBodyState3D *this,Vector3 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x178);
  if ((*(long *)(lVar1 + 0x40) != 0) && (1 < *(uint *)(lVar1 + 0xd4))) {
    GodotBody3D::set_active(SUB81(lVar1,0));
    lVar1 = *(long *)(this + 0x178);
  }
  *(ulong *)(lVar1 + 0x230) =
       CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                (float)((ulong)*(undefined8 *)(lVar1 + 0x230) >> 0x20),
                (float)*(undefined8 *)param_1 + (float)*(undefined8 *)(lVar1 + 0x230));
  *(float *)(lVar1 + 0x238) = *(float *)(lVar1 + 0x238) + *(float *)(param_1 + 8);
  return;
}



/* GodotPhysicsDirectBodyState3D::add_constant_force(Vector3 const&, Vector3 const&) */

void __thiscall
GodotPhysicsDirectBodyState3D::add_constant_force
          (GodotPhysicsDirectBodyState3D *this,Vector3 *param_1,Vector3 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar6 = *(long *)(this + 0x178);
  if ((*(long *)(lVar6 + 0x40) != 0) && (1 < *(uint *)(lVar6 + 0xd4))) {
    GodotBody3D::set_active(SUB81(lVar6,0));
    lVar6 = *(long *)(this + 0x178);
  }
  *(float *)(lVar6 + 0x230) = *(float *)(lVar6 + 0x230) + *(float *)param_1;
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)param_2;
  *(float *)(lVar6 + 0x234) = *(float *)(lVar6 + 0x234) + *(float *)(param_1 + 4);
  *(float *)(lVar6 + 0x238) = *(float *)(lVar6 + 0x238) + *(float *)(param_1 + 8);
  uVar4 = *(undefined8 *)param_2;
  fVar3 = *(float *)(param_1 + 8);
  fVar10 = (float)*(undefined8 *)(lVar6 + 0x1f8);
  fVar7 = (float)((ulong)uVar4 >> 0x20) - (float)((ulong)*(undefined8 *)(lVar6 + 0x1f8) >> 0x20);
  fVar8 = *(float *)(param_2 + 8) - (float)*(undefined8 *)(lVar6 + 0x200);
  uVar5 = *(undefined8 *)param_1;
  fVar9 = (float)((ulong)uVar5 >> 0x20);
  *(float *)(lVar6 + 0x23c) = (fVar7 * fVar3 - fVar8 * fVar9) + *(float *)(lVar6 + 0x23c);
  *(ulong *)(lVar6 + 0x240) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x240) >> 0x20) +
                ((fVar2 - fVar10) * fVar9 - fVar1 * fVar7),
                (float)*(undefined8 *)(lVar6 + 0x240) +
                (fVar8 * (float)uVar5 - fVar3 * ((float)uVar4 - fVar10)));
  return;
}



/* GodotPhysicsDirectBodyState3D::add_constant_torque(Vector3 const&) */

void __thiscall
GodotPhysicsDirectBodyState3D::add_constant_torque
          (GodotPhysicsDirectBodyState3D *this,Vector3 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x178);
  if ((*(long *)(lVar1 + 0x40) != 0) && (1 < *(uint *)(lVar1 + 0xd4))) {
    GodotBody3D::set_active(SUB81(lVar1,0));
    lVar1 = *(long *)(this + 0x178);
  }
  *(ulong *)(lVar1 + 0x23c) =
       CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                (float)((ulong)*(undefined8 *)(lVar1 + 0x23c) >> 0x20),
                (float)*(undefined8 *)param_1 + (float)*(undefined8 *)(lVar1 + 0x23c));
  *(float *)(lVar1 + 0x244) = *(float *)(lVar1 + 0x244) + *(float *)(param_1 + 8);
  return;
}



/* GodotPhysicsDirectBodyState3D::set_transform(Transform3D const&) */

void __thiscall
GodotPhysicsDirectBodyState3D::set_transform
          (GodotPhysicsDirectBodyState3D *this,Transform3D *param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  uVar1 = *(undefined8 *)(this + 0x178);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_38,param_1);
  GodotBody3D::set_state(uVar1,0,local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectBodyState3D::set_constant_force(Vector3 const&) */

void __thiscall
GodotPhysicsDirectBodyState3D::set_constant_force
          (GodotPhysicsDirectBodyState3D *this,Vector3 *param_1)

{
  char cVar1;
  long lVar2;
  
  cVar1 = Vector3::is_zero_approx();
  lVar2 = *(long *)(this + 0x178);
  if (((cVar1 == '\0') && (*(long *)(lVar2 + 0x40) != 0)) && (1 < *(uint *)(lVar2 + 0xd4))) {
    GodotBody3D::set_active(SUB81(lVar2,0));
    lVar2 = *(long *)(this + 0x178);
  }
  *(undefined8 *)(lVar2 + 0x230) = *(undefined8 *)param_1;
  *(undefined4 *)(lVar2 + 0x238) = *(undefined4 *)(param_1 + 8);
  return;
}



/* GodotPhysicsDirectBodyState3D::set_constant_torque(Vector3 const&) */

void __thiscall
GodotPhysicsDirectBodyState3D::set_constant_torque
          (GodotPhysicsDirectBodyState3D *this,Vector3 *param_1)

{
  char cVar1;
  long lVar2;
  
  cVar1 = Vector3::is_zero_approx();
  lVar2 = *(long *)(this + 0x178);
  if (((cVar1 == '\0') && (*(long *)(lVar2 + 0x40) != 0)) && (1 < *(uint *)(lVar2 + 0xd4))) {
    GodotBody3D::set_active(SUB81(lVar2,0));
    lVar2 = *(long *)(this + 0x178);
  }
  *(undefined8 *)(lVar2 + 0x23c) = *(undefined8 *)param_1;
  *(undefined4 *)(lVar2 + 0x244) = *(undefined4 *)(param_1 + 8);
  return;
}



/* GodotPhysicsDirectBodyState3D::get_contact_local_position(int) const */

undefined1  [16] __thiscall
GodotPhysicsDirectBodyState3D::get_contact_local_position
          (GodotPhysicsDirectBodyState3D *this,int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined1 auVar8 [16];
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar6 = (long)param_1;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)(*(long *)(this + 0x178) + 0x340);
  if ((-1 < param_1) && (param_1 < iVar2)) {
    lVar4 = *(long *)(*(long *)(this + 0x178) + 0x338);
    if (lVar4 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(lVar4 + -8);
      if (lVar6 < lVar7) {
        puVar1 = (undefined8 *)(lVar4 + lVar6 * 0x68);
        local_1c = *puVar1;
        local_14 = *(undefined4 *)(puVar1 + 1);
        goto LAB_00100ea8;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  _err_print_index_error
            ("get_contact_local_position","modules/godot_physics_3d/godot_body_direct_state_3d.cpp",
             0xb6,lVar6,(long)iVar2,"p_contact_idx","body->contact_count","",false,false);
  local_14 = 0;
  local_1c = 0;
LAB_00100ea8:
  auVar8._8_4_ = local_14;
  auVar8._0_8_ = local_1c;
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar8._12_4_ = 0;
    return auVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectBodyState3D::get_contact_local_normal(int) const */

undefined1  [16] __thiscall
GodotPhysicsDirectBodyState3D::get_contact_local_normal
          (GodotPhysicsDirectBodyState3D *this,int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar5 = (long)param_1;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = *(int *)(*(long *)(this + 0x178) + 0x340);
  if ((-1 < param_1) && (param_1 < iVar1)) {
    lVar3 = *(long *)(*(long *)(this + 0x178) + 0x338);
    if (lVar3 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(lVar3 + -8);
      if (lVar5 < lVar6) {
        lVar3 = lVar3 + lVar5 * 0x68;
        local_1c = *(undefined8 *)(lVar3 + 0xc);
        local_14 = *(undefined4 *)(lVar3 + 0x14);
        goto LAB_00100fd9;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar6,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  _err_print_index_error
            ("get_contact_local_normal","modules/godot_physics_3d/godot_body_direct_state_3d.cpp",
             0xbb,lVar5,(long)iVar1,"p_contact_idx","body->contact_count","",false,false);
  local_14 = 0;
  local_1c = 0;
LAB_00100fd9:
  auVar7._8_4_ = local_14;
  auVar7._0_8_ = local_1c;
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar7._12_4_ = 0;
    return auVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectBodyState3D::get_contact_impulse(int) const */

undefined1  [16] __thiscall
GodotPhysicsDirectBodyState3D::get_contact_impulse(GodotPhysicsDirectBodyState3D *this,int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar5 = (long)param_1;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = *(int *)(*(long *)(this + 0x178) + 0x340);
  if ((-1 < param_1) && (param_1 < iVar1)) {
    lVar3 = *(long *)(*(long *)(this + 0x178) + 0x338);
    if (lVar3 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(lVar3 + -8);
      if (lVar5 < lVar6) {
        lVar3 = lVar3 + lVar5 * 0x68;
        local_1c = *(undefined8 *)(lVar3 + 0x5c);
        local_14 = *(undefined4 *)(lVar3 + 100);
        goto LAB_00101109;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar6,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  _err_print_index_error
            ("get_contact_impulse","modules/godot_physics_3d/godot_body_direct_state_3d.cpp",0xc0,
             lVar5,(long)iVar1,"p_contact_idx","body->contact_count","",false,false);
  local_14 = 0;
  local_1c = 0;
LAB_00101109:
  auVar7._8_4_ = local_14;
  auVar7._0_8_ = local_1c;
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar7._12_4_ = 0;
    return auVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectBodyState3D::get_contact_local_velocity_at_position(int) const */

undefined1  [16] __thiscall
GodotPhysicsDirectBodyState3D::get_contact_local_velocity_at_position
          (GodotPhysicsDirectBodyState3D *this,int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar5 = (long)param_1;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = *(int *)(*(long *)(this + 0x178) + 0x340);
  if ((-1 < param_1) && (param_1 < iVar1)) {
    lVar3 = *(long *)(*(long *)(this + 0x178) + 0x338);
    if (lVar3 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(lVar3 + -8);
      if (lVar5 < lVar6) {
        lVar3 = lVar3 + lVar5 * 0x68;
        local_1c = *(undefined8 *)(lVar3 + 0x18);
        local_14 = *(undefined4 *)(lVar3 + 0x20);
        goto LAB_00101239;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar6,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  _err_print_index_error
            ("get_contact_local_velocity_at_position",
             "modules/godot_physics_3d/godot_body_direct_state_3d.cpp",0xc5,lVar5,(long)iVar1,
             "p_contact_idx","body->contact_count","",false,false);
  local_14 = 0;
  local_1c = 0;
LAB_00101239:
  auVar7._8_4_ = local_14;
  auVar7._0_8_ = local_1c;
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar7._12_4_ = 0;
    return auVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectBodyState3D::get_contact_local_shape(int) const */

undefined4 __thiscall
GodotPhysicsDirectBodyState3D::get_contact_local_shape
          (GodotPhysicsDirectBodyState3D *this,int param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)param_1;
  iVar1 = *(int *)(*(long *)(this + 0x178) + 0x340);
  if ((-1 < param_1) && (param_1 < iVar1)) {
    lVar2 = *(long *)(*(long *)(this + 0x178) + 0x338);
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar2 + -8);
      if (lVar4 < lVar5) {
        return *(undefined4 *)(lVar2 + 0x28 + lVar4 * 0x68);
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar5,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  _err_print_index_error
            ("get_contact_local_shape","modules/godot_physics_3d/godot_body_direct_state_3d.cpp",
             0xca,lVar4,(long)iVar1,"p_contact_idx","body->contact_count","",false,false);
  return 0xffffffff;
}



/* GodotPhysicsDirectBodyState3D::get_contact_collider(int) const */

undefined8 __thiscall
GodotPhysicsDirectBodyState3D::get_contact_collider(GodotPhysicsDirectBodyState3D *this,int param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)param_1;
  iVar1 = *(int *)(*(long *)(this + 0x178) + 0x340);
  if ((-1 < param_1) && (param_1 < iVar1)) {
    lVar2 = *(long *)(*(long *)(this + 0x178) + 0x338);
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar2 + -8);
      if (lVar4 < lVar5) {
        return *(undefined8 *)(lVar2 + 0x48 + lVar4 * 0x68);
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar5,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  _err_print_index_error
            ("get_contact_collider","modules/godot_physics_3d/godot_body_direct_state_3d.cpp",0xcf,
             lVar4,(long)iVar1,"p_contact_idx","body->contact_count","",false,false);
  return 0;
}



/* GodotPhysicsDirectBodyState3D::get_contact_collider_position(int) const */

undefined1  [16] __thiscall
GodotPhysicsDirectBodyState3D::get_contact_collider_position
          (GodotPhysicsDirectBodyState3D *this,int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar5 = (long)param_1;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = *(int *)(*(long *)(this + 0x178) + 0x340);
  if ((-1 < param_1) && (param_1 < iVar1)) {
    lVar3 = *(long *)(*(long *)(this + 0x178) + 0x338);
    if (lVar3 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(lVar3 + -8);
      if (lVar5 < lVar6) {
        lVar3 = lVar3 + lVar5 * 0x68;
        local_1c = *(undefined8 *)(lVar3 + 0x2c);
        local_14 = *(undefined4 *)(lVar3 + 0x34);
        goto LAB_00101529;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar6,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  _err_print_index_error
            ("get_contact_collider_position",
             "modules/godot_physics_3d/godot_body_direct_state_3d.cpp",0xd4,lVar5,(long)iVar1,
             "p_contact_idx","body->contact_count","",false,false);
  local_14 = 0;
  local_1c = 0;
LAB_00101529:
  auVar7._8_4_ = local_14;
  auVar7._0_8_ = local_1c;
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar7._12_4_ = 0;
    return auVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectBodyState3D::get_contact_collider_id(int) const */

undefined8 __thiscall
GodotPhysicsDirectBodyState3D::get_contact_collider_id
          (GodotPhysicsDirectBodyState3D *this,int param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)param_1;
  iVar1 = *(int *)(*(long *)(this + 0x178) + 0x340);
  if ((-1 < param_1) && (param_1 < iVar1)) {
    lVar2 = *(long *)(*(long *)(this + 0x178) + 0x338);
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar2 + -8);
      if (lVar4 < lVar5) {
        return *(undefined8 *)(lVar2 + 0x40 + lVar4 * 0x68);
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar5,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  _err_print_index_error
            ("get_contact_collider_id","modules/godot_physics_3d/godot_body_direct_state_3d.cpp",
             0xd9,lVar4,(long)iVar1,"p_contact_idx","body->contact_count","",false,false);
  return 0;
}



/* GodotPhysicsDirectBodyState3D::get_contact_collider_shape(int) const */

undefined4 __thiscall
GodotPhysicsDirectBodyState3D::get_contact_collider_shape
          (GodotPhysicsDirectBodyState3D *this,int param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)param_1;
  iVar1 = *(int *)(*(long *)(this + 0x178) + 0x340);
  if ((-1 < param_1) && (param_1 < iVar1)) {
    lVar2 = *(long *)(*(long *)(this + 0x178) + 0x338);
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar2 + -8);
      if (lVar4 < lVar5) {
        return *(undefined4 *)(lVar2 + 0x38 + lVar4 * 0x68);
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar5,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  _err_print_index_error
            ("get_contact_collider_shape","modules/godot_physics_3d/godot_body_direct_state_3d.cpp",
             0xde,lVar4,(long)iVar1,"p_contact_idx","body->contact_count","",false,false);
  return 0;
}



/* GodotPhysicsDirectBodyState3D::get_contact_collider_velocity_at_position(int) const */

undefined1  [16] __thiscall
GodotPhysicsDirectBodyState3D::get_contact_collider_velocity_at_position
          (GodotPhysicsDirectBodyState3D *this,int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar5 = (long)param_1;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = *(int *)(*(long *)(this + 0x178) + 0x340);
  if ((-1 < param_1) && (param_1 < iVar1)) {
    lVar3 = *(long *)(*(long *)(this + 0x178) + 0x338);
    if (lVar3 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(lVar3 + -8);
      if (lVar5 < lVar6) {
        lVar3 = lVar3 + lVar5 * 0x68;
        local_1c = *(undefined8 *)(lVar3 + 0x50);
        local_14 = *(undefined4 *)(lVar3 + 0x58);
        goto LAB_00101819;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar6,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  _err_print_index_error
            ("get_contact_collider_velocity_at_position",
             "modules/godot_physics_3d/godot_body_direct_state_3d.cpp",0xe3,lVar5,(long)iVar1,
             "p_contact_idx","body->contact_count","",false,false);
  local_14 = 0;
  local_1c = 0;
LAB_00101819:
  auVar7._8_4_ = local_14;
  auVar7._0_8_ = local_1c;
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar7._12_4_ = 0;
    return auVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectBodyState3D::get_space_state() */

void GodotPhysicsDirectBodyState3D::get_space_state(void)

{
  GodotSpace3D::get_direct_state();
  return;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* Object::get_save_class() const */

void Object::get_save_class(void)

{
  long lVar1;
  long *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*in_RSI + 0x48))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectBodyState3D::is_class_ptr(void*) const */

uint __thiscall
GodotPhysicsDirectBodyState3D::is_class_ptr(GodotPhysicsDirectBodyState3D *this,void *param_1)

{
  return (uint)CONCAT71(0x1030,(undefined4 *)param_1 ==
                               &PhysicsDirectBodyState3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1030,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1030,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GodotPhysicsDirectBodyState3D::_getv(StringName const&, Variant&) const */

undefined8 GodotPhysicsDirectBodyState3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GodotPhysicsDirectBodyState3D::_setv(StringName const&, Variant const&) */

undefined8 GodotPhysicsDirectBodyState3D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GodotPhysicsDirectBodyState3D::_validate_propertyv(PropertyInfo&) const */

void GodotPhysicsDirectBodyState3D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GodotPhysicsDirectBodyState3D::_property_can_revertv(StringName const&) const */

undefined8 GodotPhysicsDirectBodyState3D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GodotPhysicsDirectBodyState3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8
GodotPhysicsDirectBodyState3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GodotPhysicsDirectBodyState3D::_notificationv(int, bool) */

void GodotPhysicsDirectBodyState3D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* GodotPhysicsDirectBodyState3D::~GodotPhysicsDirectBodyState3D() */

void __thiscall
GodotPhysicsDirectBodyState3D::~GodotPhysicsDirectBodyState3D(GodotPhysicsDirectBodyState3D *this)

{
  *(code **)this = operator_delete;
  Object::~Object((Object *)this);
  return;
}



/* GodotPhysicsDirectBodyState3D::~GodotPhysicsDirectBodyState3D() */

void __thiscall
GodotPhysicsDirectBodyState3D::~GodotPhysicsDirectBodyState3D(GodotPhysicsDirectBodyState3D *this)

{
  *(code **)this = operator_delete;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* GodotPhysicsDirectBodyState3D::_get_class_namev() const */

undefined8 * GodotPhysicsDirectBodyState3D::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00101cd3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101cd3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "GodotPhysicsDirectBodyState3D");
      goto LAB_00101d3e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GodotPhysicsDirectBodyState3D");
LAB_00101d3e:
  return &_get_class_namev()::_class_name_static;
}



/* GodotPhysicsDirectBodyState3D::get_class() const */

void GodotPhysicsDirectBodyState3D::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectBodyState3D::is_class(String const&) const */

undefined8 __thiscall
GodotPhysicsDirectBodyState3D::is_class(GodotPhysicsDirectBodyState3D *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_00101edf;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00101edf:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00101f93;
  }
  cVar6 = String::operator==(param_1,"GodotPhysicsDirectBodyState3D");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_0010206b;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_0010206b:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00101f93;
    }
    cVar6 = String::operator==(param_1,"PhysicsDirectBodyState3D");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar4 = *(long *)(lVar2 + 0x20);
        if (lVar4 == 0) {
          local_60 = 0;
        }
        else {
          pcVar3 = *(char **)(lVar4 + 8);
          local_60 = 0;
          if (pcVar3 == (char *)0x0) {
            plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
            if (*(long *)(lVar4 + 0x10) != 0) {
              do {
                lVar5 = *plVar1;
                if (lVar5 == 0) goto LAB_0010214b;
                LOCK();
                lVar8 = *plVar1;
                bVar9 = lVar5 == lVar8;
                if (bVar9) {
                  *plVar1 = lVar5 + 1;
                  lVar8 = lVar5;
                }
                UNLOCK();
              } while (!bVar9);
              if (lVar8 != -1) {
                local_60 = *(long *)(lVar4 + 0x10);
              }
            }
          }
          else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
LAB_0010214b:
        cVar6 = String::operator==(param_1,(String *)&local_60);
        lVar4 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar1 = (long *)(local_60 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        if (cVar6 != '\0') goto LAB_00101f93;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_001021f4;
    }
  }
LAB_00101f93:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001021f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectBodyState3D::_initialize_classv() */

void GodotPhysicsDirectBodyState3D::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_00102354;
  if (PhysicsDirectBodyState3D::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "PhysicsDirectBodyState3D";
    local_60 = 0;
    local_40 = 0x18;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    lVar2 = local_58;
    if (local_58 == 0) {
LAB_0010245e:
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
LAB_0010246e:
        PhysicsDirectBodyState3D::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010245e;
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_0010246e;
    }
    PhysicsDirectBodyState3D::initialize_class()::initialized = '\x01';
  }
  local_48 = "PhysicsDirectBodyState3D";
  local_58 = 0;
  local_40 = 0x18;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "GodotPhysicsDirectBodyState3D";
  local_60 = 0;
  local_40 = 0x1d;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
  ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  initialize_class()::initialized = '\x01';
LAB_00102354:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PhysicsDirectBodyState3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void PhysicsDirectBodyState3D::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "PhysicsDirectBodyState3D";
  local_70 = 0x18;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PhysicsDirectBodyState3D";
  local_98 = 0;
  local_70 = 0x18;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00102648:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102648;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00102666;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00102666:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
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
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"PhysicsDirectBodyState3D",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectBodyState3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
GodotPhysicsDirectBodyState3D::_get_property_listv
          (GodotPhysicsDirectBodyState3D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    PhysicsDirectBodyState3D::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GodotPhysicsDirectBodyState3D";
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GodotPhysicsDirectBodyState3D";
  local_98 = 0;
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00102a48:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102a48;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00102a65;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00102a65:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
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
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"GodotPhysicsDirectBodyState3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      PhysicsDirectBodyState3D::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* GodotPhysicsDirectBodyState3D::~GodotPhysicsDirectBodyState3D() */

void __thiscall
GodotPhysicsDirectBodyState3D::~GodotPhysicsDirectBodyState3D(GodotPhysicsDirectBodyState3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



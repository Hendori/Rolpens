
/* GodotPhysicsDirectBodyState2D::get_total_gravity() const */

undefined8 __thiscall
GodotPhysicsDirectBodyState2D::get_total_gravity(GodotPhysicsDirectBodyState2D *this)

{
  return *(undefined8 *)(*(long *)(this + 0x178) + 0x124);
}



/* GodotPhysicsDirectBodyState2D::get_total_angular_damp() const */

undefined4 __thiscall
GodotPhysicsDirectBodyState2D::get_total_angular_damp(GodotPhysicsDirectBodyState2D *this)

{
  return *(undefined4 *)(*(long *)(this + 0x178) + 0xf0);
}



/* GodotPhysicsDirectBodyState2D::get_total_linear_damp() const */

undefined4 __thiscall
GodotPhysicsDirectBodyState2D::get_total_linear_damp(GodotPhysicsDirectBodyState2D *this)

{
  return *(undefined4 *)(*(long *)(this + 0x178) + 0xec);
}



/* GodotPhysicsDirectBodyState2D::get_center_of_mass() const */

undefined8 __thiscall
GodotPhysicsDirectBodyState2D::get_center_of_mass(GodotPhysicsDirectBodyState2D *this)

{
  return *(undefined8 *)(*(long *)(this + 0x178) + 0x118);
}



/* GodotPhysicsDirectBodyState2D::get_center_of_mass_local() const */

undefined8 __thiscall
GodotPhysicsDirectBodyState2D::get_center_of_mass_local(GodotPhysicsDirectBodyState2D *this)

{
  return *(undefined8 *)(*(long *)(this + 0x178) + 0x110);
}



/* GodotPhysicsDirectBodyState2D::get_inverse_mass() const */

undefined4 __thiscall
GodotPhysicsDirectBodyState2D::get_inverse_mass(GodotPhysicsDirectBodyState2D *this)

{
  return *(undefined4 *)(*(long *)(this + 0x178) + 0x104);
}



/* GodotPhysicsDirectBodyState2D::get_inverse_inertia() const */

undefined4 __thiscall
GodotPhysicsDirectBodyState2D::get_inverse_inertia(GodotPhysicsDirectBodyState2D *this)

{
  return *(undefined4 *)(*(long *)(this + 0x178) + 0x10c);
}



/* GodotPhysicsDirectBodyState2D::get_linear_velocity() const */

undefined8 __thiscall
GodotPhysicsDirectBodyState2D::get_linear_velocity(GodotPhysicsDirectBodyState2D *this)

{
  return *(undefined8 *)(*(long *)(this + 0x178) + 0xb8);
}



/* GodotPhysicsDirectBodyState2D::get_angular_velocity() const */

undefined4 __thiscall
GodotPhysicsDirectBodyState2D::get_angular_velocity(GodotPhysicsDirectBodyState2D *this)

{
  return *(undefined4 *)(*(long *)(this + 0x178) + 0xc0);
}



/* GodotPhysicsDirectBodyState2D::get_transform() const */

void GodotPhysicsDirectBodyState2D::get_transform(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_RSI;
  undefined8 *in_RDI;
  
  lVar1 = *(long *)(in_RSI + 0x178);
  uVar3 = *(undefined8 *)(lVar1 + 0x50);
  uVar2 = *(undefined8 *)(lVar1 + 0x58);
  *in_RDI = *(undefined8 *)(lVar1 + 0x48);
  in_RDI[1] = uVar3;
  in_RDI[2] = uVar2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotPhysicsDirectBodyState2D::get_velocity_at_local_position(Vector2 const&) const */

undefined8 __thiscall
GodotPhysicsDirectBodyState2D::get_velocity_at_local_position
          (GodotPhysicsDirectBodyState2D *this,Vector2 *param_1)

{
  float fVar1;
  undefined8 uVar2;
  
  fVar1 = *(float *)(*(long *)(this + 0x178) + 0xc0);
  uVar2 = *(undefined8 *)(*(long *)(this + 0x178) + 0xb8);
  return CONCAT44(fVar1 * *(float *)param_1 + (float)((ulong)uVar2 >> 0x20),
                  (float)((uint)fVar1 ^ __LC0) * *(float *)(param_1 + 4) + (float)uVar2);
}



/* GodotPhysicsDirectBodyState2D::get_constant_force() const */

undefined8 __thiscall
GodotPhysicsDirectBodyState2D::get_constant_force(GodotPhysicsDirectBodyState2D *this)

{
  return *(undefined8 *)(*(long *)(this + 0x178) + 0x13c);
}



/* GodotPhysicsDirectBodyState2D::get_constant_torque() const */

undefined4 __thiscall
GodotPhysicsDirectBodyState2D::get_constant_torque(GodotPhysicsDirectBodyState2D *this)

{
  return *(undefined4 *)(*(long *)(this + 0x178) + 0x144);
}



/* GodotPhysicsDirectBodyState2D::is_sleeping() const */

byte __thiscall GodotPhysicsDirectBodyState2D::is_sleeping(GodotPhysicsDirectBodyState2D *this)

{
  return *(byte *)(*(long *)(this + 0x178) + 0x1bd) ^ 1;
}



/* GodotPhysicsDirectBodyState2D::get_contact_count() const */

undefined4 __thiscall
GodotPhysicsDirectBodyState2D::get_contact_count(GodotPhysicsDirectBodyState2D *this)

{
  return *(undefined4 *)(*(long *)(this + 0x178) + 0x200);
}



/* GodotPhysicsDirectBodyState2D::get_step() const */

undefined4 __thiscall GodotPhysicsDirectBodyState2D::get_step(GodotPhysicsDirectBodyState2D *this)

{
  return *(undefined4 *)(*(long *)(*(long *)(this + 0x178) + 0x40) + 0x60e8);
}



/* GodotPhysicsDirectBodyState2D::set_sleep_state(bool) */

void GodotPhysicsDirectBodyState2D::set_sleep_state(bool param_1)

{
  undefined7 in_register_00000039;
  
  GodotBody2D::set_active(SUB81(*(undefined8 *)(CONCAT71(in_register_00000039,param_1) + 0x178),0));
  return;
}



/* GodotPhysicsDirectBodyState2D::set_linear_velocity(Vector2 const&) */

void __thiscall
GodotPhysicsDirectBodyState2D::set_linear_velocity
          (GodotPhysicsDirectBodyState2D *this,Vector2 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x178);
  if ((*(long *)(lVar1 + 0x40) != 0) && (1 < *(uint *)(lVar1 + 0xa8))) {
    GodotBody2D::set_active(SUB81(lVar1,0));
    lVar1 = *(long *)(this + 0x178);
  }
  *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)param_1;
  return;
}



/* GodotPhysicsDirectBodyState2D::set_angular_velocity(float) */

void __thiscall
GodotPhysicsDirectBodyState2D::set_angular_velocity
          (GodotPhysicsDirectBodyState2D *this,float param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x178);
  if ((*(long *)(lVar1 + 0x40) != 0) && (1 < *(uint *)(lVar1 + 0xa8))) {
    GodotBody2D::set_active(SUB81(lVar1,0));
    *(float *)(*(long *)(this + 0x178) + 0xc0) = param_1;
    return;
  }
  *(float *)(lVar1 + 0xc0) = param_1;
  return;
}



/* GodotPhysicsDirectBodyState2D::apply_central_impulse(Vector2 const&) */

void __thiscall
GodotPhysicsDirectBodyState2D::apply_central_impulse
          (GodotPhysicsDirectBodyState2D *this,Vector2 *param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(this + 0x178);
  if ((*(long *)(lVar1 + 0x40) != 0) && (1 < *(uint *)(lVar1 + 0xa8))) {
    GodotBody2D::set_active(SUB81(lVar1,0));
    lVar1 = *(long *)(this + 0x178);
  }
  fVar2 = (float)((ulong)*(undefined8 *)(lVar1 + 0x100) >> 0x20);
  *(ulong *)(lVar1 + 0xb8) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0xb8) >> 0x20) +
                fVar2 * (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                (float)*(undefined8 *)(lVar1 + 0xb8) + fVar2 * (float)*(undefined8 *)param_1);
  return;
}



/* GodotPhysicsDirectBodyState2D::apply_torque_impulse(float) */

void __thiscall
GodotPhysicsDirectBodyState2D::apply_torque_impulse
          (GodotPhysicsDirectBodyState2D *this,float param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x178);
  if ((*(long *)(lVar1 + 0x40) != 0) && (1 < *(uint *)(lVar1 + 0xa8))) {
    GodotBody2D::set_active(SUB81(lVar1,0));
    lVar1 = *(long *)(this + 0x178);
  }
  *(float *)(lVar1 + 0xc0) = param_1 * *(float *)(lVar1 + 0x10c) + *(float *)(lVar1 + 0xc0);
  return;
}



/* GodotPhysicsDirectBodyState2D::apply_central_force(Vector2 const&) */

void __thiscall
GodotPhysicsDirectBodyState2D::apply_central_force
          (GodotPhysicsDirectBodyState2D *this,Vector2 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x178);
  if ((*(long *)(lVar1 + 0x40) != 0) && (1 < *(uint *)(lVar1 + 0xa8))) {
    GodotBody2D::set_active(SUB81(lVar1,0));
    lVar1 = *(long *)(this + 0x178);
  }
  *(ulong *)(lVar1 + 0x130) =
       CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                (float)((ulong)*(undefined8 *)(lVar1 + 0x130) >> 0x20),
                (float)*(undefined8 *)param_1 + (float)*(undefined8 *)(lVar1 + 0x130));
  return;
}



/* GodotPhysicsDirectBodyState2D::apply_torque(float) */

void __thiscall
GodotPhysicsDirectBodyState2D::apply_torque(GodotPhysicsDirectBodyState2D *this,float param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x178);
  if ((*(long *)(lVar1 + 0x40) != 0) && (1 < *(uint *)(lVar1 + 0xa8))) {
    GodotBody2D::set_active(SUB81(lVar1,0));
    lVar1 = *(long *)(this + 0x178);
  }
  *(float *)(lVar1 + 0x138) = param_1 + *(float *)(lVar1 + 0x138);
  return;
}



/* GodotPhysicsDirectBodyState2D::add_constant_central_force(Vector2 const&) */

void __thiscall
GodotPhysicsDirectBodyState2D::add_constant_central_force
          (GodotPhysicsDirectBodyState2D *this,Vector2 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x178);
  if ((*(long *)(lVar1 + 0x40) != 0) && (1 < *(uint *)(lVar1 + 0xa8))) {
    GodotBody2D::set_active(SUB81(lVar1,0));
    lVar1 = *(long *)(this + 0x178);
  }
  *(ulong *)(lVar1 + 0x13c) =
       CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                (float)((ulong)*(undefined8 *)(lVar1 + 0x13c) >> 0x20),
                (float)*(undefined8 *)param_1 + (float)*(undefined8 *)(lVar1 + 0x13c));
  return;
}



/* GodotPhysicsDirectBodyState2D::add_constant_torque(float) */

void __thiscall
GodotPhysicsDirectBodyState2D::add_constant_torque
          (GodotPhysicsDirectBodyState2D *this,float param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x178);
  if ((*(long *)(lVar1 + 0x40) != 0) && (1 < *(uint *)(lVar1 + 0xa8))) {
    GodotBody2D::set_active(SUB81(lVar1,0));
    lVar1 = *(long *)(this + 0x178);
  }
  *(float *)(lVar1 + 0x144) = param_1 + *(float *)(lVar1 + 0x144);
  return;
}



/* GodotPhysicsDirectBodyState2D::set_constant_torque(float) */

void __thiscall
GodotPhysicsDirectBodyState2D::set_constant_torque
          (GodotPhysicsDirectBodyState2D *this,float param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x178);
  if (((_LC1 <= ABS(param_1)) && (*(long *)(lVar1 + 0x40) != 0)) && (1 < *(uint *)(lVar1 + 0xa8))) {
    GodotBody2D::set_active(SUB81(lVar1,0));
    *(float *)(*(long *)(this + 0x178) + 0x144) = param_1;
    return;
  }
  *(float *)(lVar1 + 0x144) = param_1;
  return;
}



/* GodotPhysicsDirectBodyState2D::set_transform(Transform2D const&) */

void __thiscall
GodotPhysicsDirectBodyState2D::set_transform
          (GodotPhysicsDirectBodyState2D *this,Transform2D *param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  uVar1 = *(undefined8 *)(this + 0x178);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_38,param_1);
  GodotBody2D::set_state(uVar1,0,local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectBodyState2D::apply_impulse(Vector2 const&, Vector2 const&) */

void __thiscall
GodotPhysicsDirectBodyState2D::apply_impulse
          (GodotPhysicsDirectBodyState2D *this,Vector2 *param_1,Vector2 *param_2)

{
  float fVar1;
  long lVar2;
  long in_FS_OFFSET;
  float fVar3;
  undefined8 local_38;
  long local_30;
  
  lVar2 = *(long *)(this + 0x178);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(lVar2 + 0x40) != 0) && (1 < *(uint *)(lVar2 + 0xa8))) {
    GodotBody2D::set_active(SUB81(lVar2,0));
    lVar2 = *(long *)(this + 0x178);
  }
  fVar1 = *(float *)(lVar2 + 0x10c);
  fVar3 = (float)((ulong)*(undefined8 *)(lVar2 + 0x100) >> 0x20);
  *(ulong *)(lVar2 + 0xb8) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0xb8) >> 0x20) +
                fVar3 * (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                (float)*(undefined8 *)(lVar2 + 0xb8) + fVar3 * (float)*(undefined8 *)param_1);
  local_38 = CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) -
                      (float)((ulong)*(undefined8 *)(lVar2 + 0x118) >> 0x20),
                      (float)*(undefined8 *)param_2 - (float)*(undefined8 *)(lVar2 + 0x118));
  fVar3 = (float)Vector2::cross((Vector2 *)&local_38);
  *(float *)(lVar2 + 0xc0) = fVar3 * fVar1 + *(float *)(lVar2 + 0xc0);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectBodyState2D::apply_force(Vector2 const&, Vector2 const&) */

void __thiscall
GodotPhysicsDirectBodyState2D::apply_force
          (GodotPhysicsDirectBodyState2D *this,Vector2 *param_1,Vector2 *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  float fVar2;
  undefined8 local_38;
  long local_30;
  
  lVar1 = *(long *)(this + 0x178);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(lVar1 + 0x40) != 0) && (1 < *(uint *)(lVar1 + 0xa8))) {
    GodotBody2D::set_active(SUB81(lVar1,0));
    lVar1 = *(long *)(this + 0x178);
  }
  *(ulong *)(lVar1 + 0x130) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x130) >> 0x20) +
                (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                (float)*(undefined8 *)(lVar1 + 0x130) + (float)*(undefined8 *)param_1);
  local_38 = CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) -
                      (float)((ulong)*(undefined8 *)(lVar1 + 0x118) >> 0x20),
                      (float)*(undefined8 *)param_2 - (float)*(undefined8 *)(lVar1 + 0x118));
  fVar2 = (float)Vector2::cross((Vector2 *)&local_38);
  *(float *)(lVar1 + 0x138) = fVar2 + *(float *)(lVar1 + 0x138);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectBodyState2D::add_constant_force(Vector2 const&, Vector2 const&) */

void __thiscall
GodotPhysicsDirectBodyState2D::add_constant_force
          (GodotPhysicsDirectBodyState2D *this,Vector2 *param_1,Vector2 *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  float fVar2;
  undefined8 local_38;
  long local_30;
  
  lVar1 = *(long *)(this + 0x178);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(lVar1 + 0x40) != 0) && (1 < *(uint *)(lVar1 + 0xa8))) {
    GodotBody2D::set_active(SUB81(lVar1,0));
    lVar1 = *(long *)(this + 0x178);
  }
  *(ulong *)(lVar1 + 0x13c) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x13c) >> 0x20) +
                (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                (float)*(undefined8 *)(lVar1 + 0x13c) + (float)*(undefined8 *)param_1);
  local_38 = CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) -
                      (float)((ulong)*(undefined8 *)(lVar1 + 0x118) >> 0x20),
                      (float)*(undefined8 *)param_2 - (float)*(undefined8 *)(lVar1 + 0x118));
  fVar2 = (float)Vector2::cross((Vector2 *)&local_38);
  *(float *)(lVar1 + 0x144) = fVar2 + *(float *)(lVar1 + 0x144);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectBodyState2D::set_constant_force(Vector2 const&) */

void __thiscall
GodotPhysicsDirectBodyState2D::set_constant_force
          (GodotPhysicsDirectBodyState2D *this,Vector2 *param_1)

{
  char cVar1;
  long lVar2;
  
  cVar1 = Vector2::is_zero_approx();
  lVar2 = *(long *)(this + 0x178);
  if (((cVar1 == '\0') && (*(long *)(lVar2 + 0x40) != 0)) && (1 < *(uint *)(lVar2 + 0xa8))) {
    GodotBody2D::set_active(SUB81(lVar2,0));
    lVar2 = *(long *)(this + 0x178);
  }
  *(undefined8 *)(lVar2 + 0x13c) = *(undefined8 *)param_1;
  return;
}



/* GodotPhysicsDirectBodyState2D::get_contact_local_position(int) const */

undefined8 __thiscall
GodotPhysicsDirectBodyState2D::get_contact_local_position
          (GodotPhysicsDirectBodyState2D *this,int param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)param_1;
  iVar1 = *(int *)(*(long *)(this + 0x178) + 0x200);
  if ((-1 < param_1) && (param_1 < iVar1)) {
    lVar2 = *(long *)(*(long *)(this + 0x178) + 0x1f8);
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar2 + -8);
      if (lVar4 < lVar5) {
        return *(undefined8 *)(lVar2 + lVar4 * 0x50);
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
            ("get_contact_local_position","modules/godot_physics_2d/godot_body_direct_state_2d.cpp",
             0xae,lVar4,(long)iVar1,"p_contact_idx","body->contact_count","",false,false);
  return 0;
}



/* GodotPhysicsDirectBodyState2D::get_contact_local_normal(int) const */

undefined8 __thiscall
GodotPhysicsDirectBodyState2D::get_contact_local_normal
          (GodotPhysicsDirectBodyState2D *this,int param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)param_1;
  iVar1 = *(int *)(*(long *)(this + 0x178) + 0x200);
  if ((-1 < param_1) && (param_1 < iVar1)) {
    lVar2 = *(long *)(*(long *)(this + 0x178) + 0x1f8);
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar2 + -8);
      if (lVar4 < lVar5) {
        return *(undefined8 *)(lVar2 + 8 + lVar4 * 0x50);
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
            ("get_contact_local_normal","modules/godot_physics_2d/godot_body_direct_state_2d.cpp",
             0xb3,lVar4,(long)iVar1,"p_contact_idx","body->contact_count","",false,false);
  return 0;
}



/* GodotPhysicsDirectBodyState2D::get_contact_local_shape(int) const */

undefined4 __thiscall
GodotPhysicsDirectBodyState2D::get_contact_local_shape
          (GodotPhysicsDirectBodyState2D *this,int param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)param_1;
  iVar1 = *(int *)(*(long *)(this + 0x178) + 0x200);
  if ((-1 < param_1) && (param_1 < iVar1)) {
    lVar2 = *(long *)(*(long *)(this + 0x178) + 0x1f8);
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar2 + -8);
      if (lVar4 < lVar5) {
        return *(undefined4 *)(lVar2 + 0x1c + lVar4 * 0x50);
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
            ("get_contact_local_shape","modules/godot_physics_2d/godot_body_direct_state_2d.cpp",
             0xb8,lVar4,(long)iVar1,"p_contact_idx","body->contact_count","",false,false);
  return 0xffffffff;
}



/* GodotPhysicsDirectBodyState2D::get_contact_local_velocity_at_position(int) const */

undefined8 __thiscall
GodotPhysicsDirectBodyState2D::get_contact_local_velocity_at_position
          (GodotPhysicsDirectBodyState2D *this,int param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)param_1;
  iVar1 = *(int *)(*(long *)(this + 0x178) + 0x200);
  if ((-1 < param_1) && (param_1 < iVar1)) {
    lVar2 = *(long *)(*(long *)(this + 0x178) + 0x1f8);
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar2 + -8);
      if (lVar4 < lVar5) {
        return *(undefined8 *)(lVar2 + 0x10 + lVar4 * 0x50);
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
            ("get_contact_local_velocity_at_position",
             "modules/godot_physics_2d/godot_body_direct_state_2d.cpp",0xbd,lVar4,(long)iVar1,
             "p_contact_idx","body->contact_count","",false,false);
  return 0;
}



/* GodotPhysicsDirectBodyState2D::get_contact_collider(int) const */

undefined8 __thiscall
GodotPhysicsDirectBodyState2D::get_contact_collider(GodotPhysicsDirectBodyState2D *this,int param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)param_1;
  iVar1 = *(int *)(*(long *)(this + 0x178) + 0x200);
  if ((-1 < param_1) && (param_1 < iVar1)) {
    lVar2 = *(long *)(*(long *)(this + 0x178) + 0x1f8);
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar2 + -8);
      if (lVar4 < lVar5) {
        return *(undefined8 *)(lVar2 + 0x38 + lVar4 * 0x50);
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
            ("get_contact_collider","modules/godot_physics_2d/godot_body_direct_state_2d.cpp",0xc2,
             lVar4,(long)iVar1,"p_contact_idx","body->contact_count","",false,false);
  return 0;
}



/* GodotPhysicsDirectBodyState2D::get_contact_collider_position(int) const */

undefined8 __thiscall
GodotPhysicsDirectBodyState2D::get_contact_collider_position
          (GodotPhysicsDirectBodyState2D *this,int param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)param_1;
  iVar1 = *(int *)(*(long *)(this + 0x178) + 0x200);
  if ((-1 < param_1) && (param_1 < iVar1)) {
    lVar2 = *(long *)(*(long *)(this + 0x178) + 0x1f8);
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar2 + -8);
      if (lVar4 < lVar5) {
        return *(undefined8 *)(lVar2 + 0x20 + lVar4 * 0x50);
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
            ("get_contact_collider_position",
             "modules/godot_physics_2d/godot_body_direct_state_2d.cpp",0xc6,lVar4,(long)iVar1,
             "p_contact_idx","body->contact_count","",false,false);
  return 0;
}



/* GodotPhysicsDirectBodyState2D::get_contact_collider_id(int) const */

undefined8 __thiscall
GodotPhysicsDirectBodyState2D::get_contact_collider_id
          (GodotPhysicsDirectBodyState2D *this,int param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)param_1;
  iVar1 = *(int *)(*(long *)(this + 0x178) + 0x200);
  if ((-1 < param_1) && (param_1 < iVar1)) {
    lVar2 = *(long *)(*(long *)(this + 0x178) + 0x1f8);
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar2 + -8);
      if (lVar4 < lVar5) {
        return *(undefined8 *)(lVar2 + 0x30 + lVar4 * 0x50);
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
            ("get_contact_collider_id","modules/godot_physics_2d/godot_body_direct_state_2d.cpp",
             0xcb,lVar4,(long)iVar1,"p_contact_idx","body->contact_count","",false,false);
  return 0;
}



/* GodotPhysicsDirectBodyState2D::get_contact_collider_shape(int) const */

undefined4 __thiscall
GodotPhysicsDirectBodyState2D::get_contact_collider_shape
          (GodotPhysicsDirectBodyState2D *this,int param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)param_1;
  iVar1 = *(int *)(*(long *)(this + 0x178) + 0x200);
  if ((-1 < param_1) && (param_1 < iVar1)) {
    lVar2 = *(long *)(*(long *)(this + 0x178) + 0x1f8);
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar2 + -8);
      if (lVar4 < lVar5) {
        return *(undefined4 *)(lVar2 + 0x28 + lVar4 * 0x50);
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
            ("get_contact_collider_shape","modules/godot_physics_2d/godot_body_direct_state_2d.cpp",
             0xd0,lVar4,(long)iVar1,"p_contact_idx","body->contact_count","",false,false);
  return 0;
}



/* GodotPhysicsDirectBodyState2D::get_contact_collider_velocity_at_position(int) const */

undefined8 __thiscall
GodotPhysicsDirectBodyState2D::get_contact_collider_velocity_at_position
          (GodotPhysicsDirectBodyState2D *this,int param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)param_1;
  iVar1 = *(int *)(*(long *)(this + 0x178) + 0x200);
  if ((-1 < param_1) && (param_1 < iVar1)) {
    lVar2 = *(long *)(*(long *)(this + 0x178) + 0x1f8);
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar2 + -8);
      if (lVar4 < lVar5) {
        return *(undefined8 *)(lVar2 + 0x40 + lVar4 * 0x50);
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
            ("get_contact_collider_velocity_at_position",
             "modules/godot_physics_2d/godot_body_direct_state_2d.cpp",0xd5,lVar4,(long)iVar1,
             "p_contact_idx","body->contact_count","",false,false);
  return 0;
}



/* GodotPhysicsDirectBodyState2D::get_contact_impulse(int) const */

undefined8 __thiscall
GodotPhysicsDirectBodyState2D::get_contact_impulse(GodotPhysicsDirectBodyState2D *this,int param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)param_1;
  iVar1 = *(int *)(*(long *)(this + 0x178) + 0x200);
  if ((-1 < param_1) && (param_1 < iVar1)) {
    lVar2 = *(long *)(*(long *)(this + 0x178) + 0x1f8);
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar2 + -8);
      if (lVar4 < lVar5) {
        return *(undefined8 *)(lVar2 + 0x48 + lVar4 * 0x50);
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
            ("get_contact_impulse","modules/godot_physics_2d/godot_body_direct_state_2d.cpp",0xda,
             lVar4,(long)iVar1,"p_contact_idx","body->contact_count","",false,false);
  return 0;
}



/* GodotPhysicsDirectBodyState2D::get_space_state() */

void GodotPhysicsDirectBodyState2D::get_space_state(void)

{
  GodotSpace2D::get_direct_state();
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



/* GodotPhysicsDirectBodyState2D::is_class_ptr(void*) const */

uint __thiscall
GodotPhysicsDirectBodyState2D::is_class_ptr(GodotPhysicsDirectBodyState2D *this,void *param_1)

{
  return (uint)CONCAT71(0x1029,(undefined4 *)param_1 ==
                               &PhysicsDirectBodyState2D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1029,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1029,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GodotPhysicsDirectBodyState2D::_getv(StringName const&, Variant&) const */

undefined8 GodotPhysicsDirectBodyState2D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GodotPhysicsDirectBodyState2D::_setv(StringName const&, Variant const&) */

undefined8 GodotPhysicsDirectBodyState2D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GodotPhysicsDirectBodyState2D::_validate_propertyv(PropertyInfo&) const */

void GodotPhysicsDirectBodyState2D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GodotPhysicsDirectBodyState2D::_property_can_revertv(StringName const&) const */

undefined8 GodotPhysicsDirectBodyState2D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GodotPhysicsDirectBodyState2D::_property_get_revertv(StringName const&, Variant&) const */

undefined8
GodotPhysicsDirectBodyState2D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GodotPhysicsDirectBodyState2D::_notificationv(int, bool) */

void GodotPhysicsDirectBodyState2D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* GodotPhysicsDirectBodyState2D::~GodotPhysicsDirectBodyState2D() */

void __thiscall
GodotPhysicsDirectBodyState2D::~GodotPhysicsDirectBodyState2D(GodotPhysicsDirectBodyState2D *this)

{
  *(code **)this = operator_delete;
  Object::~Object((Object *)this);
  return;
}



/* GodotPhysicsDirectBodyState2D::~GodotPhysicsDirectBodyState2D() */

void __thiscall
GodotPhysicsDirectBodyState2D::~GodotPhysicsDirectBodyState2D(GodotPhysicsDirectBodyState2D *this)

{
  *(code **)this = operator_delete;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* GodotPhysicsDirectBodyState2D::_get_class_namev() const */

undefined8 * GodotPhysicsDirectBodyState2D::_get_class_namev(void)

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
LAB_001015f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001015f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "GodotPhysicsDirectBodyState2D");
      goto LAB_0010165e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GodotPhysicsDirectBodyState2D");
LAB_0010165e:
  return &_get_class_namev()::_class_name_static;
}



/* GodotPhysicsDirectBodyState2D::get_class() const */

void GodotPhysicsDirectBodyState2D::get_class(void)

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



/* GodotPhysicsDirectBodyState2D::is_class(String const&) const */

undefined8 __thiscall
GodotPhysicsDirectBodyState2D::is_class(GodotPhysicsDirectBodyState2D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_001017ff;
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
LAB_001017ff:
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
    if (cVar6 != '\0') goto LAB_001018b3;
  }
  cVar6 = String::operator==(param_1,"GodotPhysicsDirectBodyState2D");
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
              if (lVar5 == 0) goto LAB_0010198b;
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
LAB_0010198b:
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
      if (cVar6 != '\0') goto LAB_001018b3;
    }
    cVar6 = String::operator==(param_1,"PhysicsDirectBodyState2D");
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
                if (lVar5 == 0) goto LAB_00101a6b;
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
LAB_00101a6b:
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
        if (cVar6 != '\0') goto LAB_001018b3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00101b14;
    }
  }
LAB_001018b3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00101b14:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectBodyState2D::_initialize_classv() */

void GodotPhysicsDirectBodyState2D::_initialize_classv(void)

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
  if (initialize_class()::initialized != '\0') goto LAB_00101c74;
  if (PhysicsDirectBodyState2D::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "PhysicsDirectBodyState2D";
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
LAB_00101d7e:
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
LAB_00101d8e:
        PhysicsDirectBodyState2D::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00101d7e;
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_00101d8e;
    }
    PhysicsDirectBodyState2D::initialize_class()::initialized = '\x01';
  }
  local_48 = "PhysicsDirectBodyState2D";
  local_58 = 0;
  local_40 = 0x18;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "GodotPhysicsDirectBodyState2D";
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
LAB_00101c74:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PhysicsDirectBodyState2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void PhysicsDirectBodyState2D::_get_property_listv(List *param_1,bool param_2)

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
  local_78 = "PhysicsDirectBodyState2D";
  local_70 = 0x18;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PhysicsDirectBodyState2D";
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
LAB_00101f68:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00101f68;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00101f86;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00101f86:
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
  StringName::StringName((StringName *)&local_78,"PhysicsDirectBodyState2D",false);
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



/* GodotPhysicsDirectBodyState2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
GodotPhysicsDirectBodyState2D::_get_property_listv
          (GodotPhysicsDirectBodyState2D *this,List *param_1,bool param_2)

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
    PhysicsDirectBodyState2D::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GodotPhysicsDirectBodyState2D";
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GodotPhysicsDirectBodyState2D";
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
LAB_00102368:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102368;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00102385;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00102385:
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
  StringName::StringName((StringName *)&local_78,"GodotPhysicsDirectBodyState2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      PhysicsDirectBodyState2D::_get_property_listv((List *)this,SUB81(param_1,0));
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
/* GodotPhysicsDirectBodyState2D::~GodotPhysicsDirectBodyState2D() */

void __thiscall
GodotPhysicsDirectBodyState2D::~GodotPhysicsDirectBodyState2D(GodotPhysicsDirectBodyState2D *this)

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




/* JoltPhysicsDirectBodyState3D::get_total_gravity() const */

void JoltPhysicsDirectBodyState3D::get_total_gravity(void)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsDirectBodyState3D::get_total_angular_damp() const */

undefined4 __thiscall
JoltPhysicsDirectBodyState3D::get_total_angular_damp(JoltPhysicsDirectBodyState3D *this)

{
  return *(undefined4 *)(*(long *)(this + 0x178) + 0x1ec);
}



/* JoltPhysicsDirectBodyState3D::get_total_linear_damp() const */

undefined4 __thiscall
JoltPhysicsDirectBodyState3D::get_total_linear_damp(JoltPhysicsDirectBodyState3D *this)

{
  return *(undefined4 *)(*(long *)(this + 0x178) + 0x1e8);
}



/* JoltPhysicsDirectBodyState3D::get_inverse_mass() const */

float __thiscall JoltPhysicsDirectBodyState3D::get_inverse_mass(JoltPhysicsDirectBodyState3D *this)

{
  return _LC0 / *(float *)(*(long *)(this + 0x178) + 0x1dc);
}



/* JoltPhysicsDirectBodyState3D::get_contact_count() const */

undefined4 __thiscall
JoltPhysicsDirectBodyState3D::get_contact_count(JoltPhysicsDirectBodyState3D *this)

{
  return *(undefined4 *)(*(long *)(this + 0x178) + 0x1f8);
}



/* JoltPhysicsDirectBodyState3D::get_step() const */

undefined4 __thiscall JoltPhysicsDirectBodyState3D::get_step(JoltPhysicsDirectBodyState3D *this)

{
  return *(undefined4 *)(*(long *)(*(long *)(this + 0x178) + 0x28) + 0x80);
}



/* JoltPhysicsDirectBodyState3D::get_center_of_mass() const */

void JoltPhysicsDirectBodyState3D::get_center_of_mass(void)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    JoltShapedObject3D::get_center_of_mass_relative();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsDirectBodyState3D::get_center_of_mass_local() const */

void JoltPhysicsDirectBodyState3D::get_center_of_mass_local(void)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    JoltShapedObject3D::get_center_of_mass_local();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsDirectBodyState3D::get_principal_inertia_axes() const */

JoltPhysicsDirectBodyState3D * __thiscall
JoltPhysicsDirectBodyState3D::get_principal_inertia_axes(JoltPhysicsDirectBodyState3D *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  JoltBody3D::get_principal_inertia_axes();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsDirectBodyState3D::get_inverse_inertia() const */

void JoltPhysicsDirectBodyState3D::get_inverse_inertia(void)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    JoltBody3D::get_inverse_inertia();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsDirectBodyState3D::get_inverse_inertia_tensor() const */

JoltPhysicsDirectBodyState3D * __thiscall
JoltPhysicsDirectBodyState3D::get_inverse_inertia_tensor(JoltPhysicsDirectBodyState3D *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  JoltBody3D::get_inverse_inertia_tensor();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsDirectBodyState3D::get_linear_velocity() const */

void JoltPhysicsDirectBodyState3D::get_linear_velocity(void)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    JoltShapedObject3D::get_linear_velocity();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsDirectBodyState3D::set_linear_velocity(Vector3 const&) */

void JoltPhysicsDirectBodyState3D::set_linear_velocity(Vector3 *param_1)

{
  JoltBody3D::set_linear_velocity(*(Vector3 **)(param_1 + 0x178));
  return;
}



/* JoltPhysicsDirectBodyState3D::get_angular_velocity() const */

void JoltPhysicsDirectBodyState3D::get_angular_velocity(void)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    JoltShapedObject3D::get_angular_velocity();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsDirectBodyState3D::set_angular_velocity(Vector3 const&) */

void JoltPhysicsDirectBodyState3D::set_angular_velocity(Vector3 *param_1)

{
  JoltBody3D::set_angular_velocity(*(Vector3 **)(param_1 + 0x178));
  return;
}



/* JoltPhysicsDirectBodyState3D::integrate_forces() */

void __thiscall JoltPhysicsDirectBodyState3D::integrate_forces(JoltPhysicsDirectBodyState3D *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  JoltShapedObject3D::get_linear_velocity();
  JoltShapedObject3D::get_angular_velocity();
  JoltBody3D::set_linear_velocity(*(Vector3 **)(this + 0x178));
  JoltBody3D::set_angular_velocity(*(Vector3 **)(this + 0x178));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsDirectBodyState3D::set_transform(Transform3D const&) */

void JoltPhysicsDirectBodyState3D::set_transform(Transform3D *param_1)

{
  JoltBody3D::set_transform(*(undefined8 *)(param_1 + 0x178));
  return;
}



/* JoltPhysicsDirectBodyState3D::get_transform() const */

JoltPhysicsDirectBodyState3D * __thiscall
JoltPhysicsDirectBodyState3D::get_transform(JoltPhysicsDirectBodyState3D *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  JoltShapedObject3D::get_transform_scaled();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsDirectBodyState3D::apply_central_impulse(Vector3 const&) */

void JoltPhysicsDirectBodyState3D::apply_central_impulse(Vector3 *param_1)

{
  JoltBody3D::apply_central_impulse(*(Vector3 **)(param_1 + 0x178));
  return;
}



/* JoltPhysicsDirectBodyState3D::apply_impulse(Vector3 const&, Vector3 const&) */

void JoltPhysicsDirectBodyState3D::apply_impulse(Vector3 *param_1,Vector3 *param_2)

{
  JoltBody3D::apply_impulse(*(Vector3 **)(param_1 + 0x178),param_2);
  return;
}



/* JoltPhysicsDirectBodyState3D::apply_torque_impulse(Vector3 const&) */

void JoltPhysicsDirectBodyState3D::apply_torque_impulse(Vector3 *param_1)

{
  JoltBody3D::apply_torque_impulse(*(Vector3 **)(param_1 + 0x178));
  return;
}



/* JoltPhysicsDirectBodyState3D::apply_central_force(Vector3 const&) */

void JoltPhysicsDirectBodyState3D::apply_central_force(Vector3 *param_1)

{
  JoltBody3D::apply_central_force(*(Vector3 **)(param_1 + 0x178));
  return;
}



/* JoltPhysicsDirectBodyState3D::apply_force(Vector3 const&, Vector3 const&) */

void JoltPhysicsDirectBodyState3D::apply_force(Vector3 *param_1,Vector3 *param_2)

{
  JoltBody3D::apply_force(*(Vector3 **)(param_1 + 0x178),param_2);
  return;
}



/* JoltPhysicsDirectBodyState3D::apply_torque(Vector3 const&) */

void JoltPhysicsDirectBodyState3D::apply_torque(Vector3 *param_1)

{
  JoltBody3D::apply_torque(*(Vector3 **)(param_1 + 0x178));
  return;
}



/* JoltPhysicsDirectBodyState3D::add_constant_central_force(Vector3 const&) */

void JoltPhysicsDirectBodyState3D::add_constant_central_force(Vector3 *param_1)

{
  JoltBody3D::add_constant_central_force(*(Vector3 **)(param_1 + 0x178));
  return;
}



/* JoltPhysicsDirectBodyState3D::add_constant_force(Vector3 const&, Vector3 const&) */

void JoltPhysicsDirectBodyState3D::add_constant_force(Vector3 *param_1,Vector3 *param_2)

{
  JoltBody3D::add_constant_force(*(Vector3 **)(param_1 + 0x178),param_2);
  return;
}



/* JoltPhysicsDirectBodyState3D::add_constant_torque(Vector3 const&) */

void JoltPhysicsDirectBodyState3D::add_constant_torque(Vector3 *param_1)

{
  JoltBody3D::add_constant_torque(*(Vector3 **)(param_1 + 0x178));
  return;
}



/* JoltPhysicsDirectBodyState3D::get_constant_force() const */

void JoltPhysicsDirectBodyState3D::get_constant_force(void)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    JoltBody3D::get_constant_force();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsDirectBodyState3D::set_constant_force(Vector3 const&) */

void JoltPhysicsDirectBodyState3D::set_constant_force(Vector3 *param_1)

{
  JoltBody3D::set_constant_force(*(Vector3 **)(param_1 + 0x178));
  return;
}



/* JoltPhysicsDirectBodyState3D::get_constant_torque() const */

void JoltPhysicsDirectBodyState3D::get_constant_torque(void)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    JoltBody3D::get_constant_torque();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsDirectBodyState3D::set_constant_torque(Vector3 const&) */

void JoltPhysicsDirectBodyState3D::set_constant_torque(Vector3 *param_1)

{
  JoltBody3D::set_constant_torque(*(Vector3 **)(param_1 + 0x178));
  return;
}



/* JoltPhysicsDirectBodyState3D::is_sleeping() const */

void JoltPhysicsDirectBodyState3D::is_sleeping(void)

{
  JoltBody3D::is_sleeping();
  return;
}



/* JoltPhysicsDirectBodyState3D::set_sleep_state(bool) */

void JoltPhysicsDirectBodyState3D::set_sleep_state(bool param_1)

{
  undefined7 in_register_00000039;
  
  JoltBody3D::set_is_sleeping
            (SUB81(*(undefined8 *)(CONCAT71(in_register_00000039,param_1) + 0x178),0));
  return;
}



/* JoltPhysicsDirectBodyState3D::get_contact_collider_object(int) const */

ulong __thiscall
JoltPhysicsDirectBodyState3D::get_contact_collider_object
          (JoltPhysicsDirectBodyState3D *this,int param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  uint uVar5;
  ulong *puVar6;
  long in_FS_OFFSET;
  bool bVar7;
  
  lVar1 = *(long *)(this + 0x178);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 < 0) || (*(int *)(lVar1 + 0x1f8) <= param_1)) {
    _err_print_index_error
              ("get_contact_collider_object",
               "modules/jolt_physics/objects/jolt_physics_direct_body_state_3d.cpp",0xd2,
               (long)param_1,(long)*(int *)(lVar1 + 0x1f8),"p_contact_idx",
               "(int)body->get_contact_count()","",false,false);
    uVar4 = 0;
  }
  else {
    if (*(uint *)(lVar1 + 0xd8) <= (uint)param_1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,
                 (ulong)*(uint *)(lVar1 + 0xd8),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar4 = *(ulong *)(*(long *)(lVar1 + 0xe0) + (long)param_1 * 0x68 + 0x48);
    uVar5 = (uint)uVar4 & 0xffffff;
    if (uVar5 < (uint)ObjectDB::slot_max) {
      while( true ) {
        LOCK();
        bVar7 = (char)ObjectDB::spin_lock == '\0';
        if (bVar7) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        if (bVar7) break;
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
      if ((uVar4 >> 0x18 & 0x7fffffffff) == (*puVar6 & 0x7fffffffff)) {
        uVar4 = puVar6[1];
        ObjectDB::spin_lock._0_1_ = '\0';
      }
      else {
        uVar4 = 0;
        ObjectDB::spin_lock._0_1_ = '\0';
      }
    }
    else {
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
      uVar4 = 0;
    }
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* JoltPhysicsDirectBodyState3D::get_space_state() */

void JoltPhysicsDirectBodyState3D::get_space_state(void)

{
  JoltSpace3D::get_direct_state();
  return;
}



/* JoltPhysicsDirectBodyState3D::get_contact_collider_shape(int) const */

undefined4 __thiscall
JoltPhysicsDirectBodyState3D::get_contact_collider_shape
          (JoltPhysicsDirectBodyState3D *this,int param_1)

{
  long lVar1;
  code *pcVar2;
  
  if ((-1 < param_1) && (lVar1 = *(long *)(this + 0x178), param_1 < *(int *)(lVar1 + 0x1f8))) {
    if ((uint)param_1 < *(uint *)(lVar1 + 0xd8)) {
      return *(undefined4 *)(*(long *)(lVar1 + 0xe0) + (long)param_1 * 0x68 + 0x60);
    }
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,
               (ulong)*(uint *)(lVar1 + 0xd8),"p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  _err_print_index_error
            ("get_contact_collider_shape",
             "modules/jolt_physics/objects/jolt_physics_direct_body_state_3d.cpp",0xd7,(long)param_1
             ,(long)*(int *)(*(long *)(this + 0x178) + 0x1f8),"p_contact_idx",
             "(int)body->get_contact_count()","",false,false);
  return 0;
}



/* JoltPhysicsDirectBodyState3D::get_contact_local_shape(int) const */

undefined4 __thiscall
JoltPhysicsDirectBodyState3D::get_contact_local_shape
          (JoltPhysicsDirectBodyState3D *this,int param_1)

{
  long lVar1;
  code *pcVar2;
  
  if ((-1 < param_1) && (lVar1 = *(long *)(this + 0x178), param_1 < *(int *)(lVar1 + 0x1f8))) {
    if ((uint)param_1 < *(uint *)(lVar1 + 0xd8)) {
      return *(undefined4 *)(*(long *)(lVar1 + 0xe0) + (long)param_1 * 0x68 + 0x5c);
    }
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,
               (ulong)*(uint *)(lVar1 + 0xd8),"p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  _err_print_index_error
            ("get_contact_local_shape",
             "modules/jolt_physics/objects/jolt_physics_direct_body_state_3d.cpp",0xb9,(long)param_1
             ,(long)*(int *)(*(long *)(this + 0x178) + 0x1f8),"p_contact_idx",
             "(int)body->get_contact_count()","",false,false);
  return 0;
}



/* JoltPhysicsDirectBodyState3D::get_contact_collider(int) const */

undefined8 __thiscall
JoltPhysicsDirectBodyState3D::get_contact_collider(JoltPhysicsDirectBodyState3D *this,int param_1)

{
  long lVar1;
  code *pcVar2;
  
  if ((-1 < param_1) && (lVar1 = *(long *)(this + 0x178), param_1 < *(int *)(lVar1 + 0x1f8))) {
    if ((uint)param_1 < *(uint *)(lVar1 + 0xd8)) {
      return *(undefined8 *)(*(long *)(lVar1 + 0xe0) + (long)param_1 * 0x68 + 0x50);
    }
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,
               (ulong)*(uint *)(lVar1 + 0xd8),"p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  _err_print_index_error
            ("get_contact_collider",
             "modules/jolt_physics/objects/jolt_physics_direct_body_state_3d.cpp",0xc3,(long)param_1
             ,(long)*(int *)(*(long *)(this + 0x178) + 0x1f8),"p_contact_idx",
             "(int)body->get_contact_count()","",false,false);
  return 0;
}



/* JoltPhysicsDirectBodyState3D::get_contact_collider_id(int) const */

undefined8 __thiscall
JoltPhysicsDirectBodyState3D::get_contact_collider_id
          (JoltPhysicsDirectBodyState3D *this,int param_1)

{
  long lVar1;
  code *pcVar2;
  
  if ((-1 < param_1) && (lVar1 = *(long *)(this + 0x178), param_1 < *(int *)(lVar1 + 0x1f8))) {
    if ((uint)param_1 < *(uint *)(lVar1 + 0xd8)) {
      return *(undefined8 *)(*(long *)(lVar1 + 0xe0) + (long)param_1 * 0x68 + 0x48);
    }
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,
               (ulong)*(uint *)(lVar1 + 0xd8),"p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  _err_print_index_error
            ("get_contact_collider_id",
             "modules/jolt_physics/objects/jolt_physics_direct_body_state_3d.cpp",0xcd,(long)param_1
             ,(long)*(int *)(*(long *)(this + 0x178) + 0x1f8),"p_contact_idx",
             "(int)body->get_contact_count()","",false,false);
  return 0;
}



/* JoltPhysicsDirectBodyState3D::get_contact_local_velocity_at_position(int) const */

undefined1  [16] __thiscall
JoltPhysicsDirectBodyState3D::get_contact_local_velocity_at_position
          (JoltPhysicsDirectBodyState3D *this,int param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  undefined8 local_28;
  undefined4 local_20;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 < 0) || (lVar2 = *(long *)(this + 0x178), *(int *)(lVar2 + 0x1f8) <= param_1)) {
    _err_print_index_error
              ("get_contact_local_velocity_at_position",
               "modules/jolt_physics/objects/jolt_physics_direct_body_state_3d.cpp",0xbe,
               (long)param_1,(long)*(int *)(*(long *)(this + 0x178) + 0x1f8),"p_contact_idx",
               "(int)body->get_contact_count()","",false,false);
    local_20 = 0;
    local_28 = 0;
  }
  else {
    if (*(uint *)(lVar2 + 0xd8) <= (uint)param_1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,
                 (ulong)*(uint *)(lVar2 + 0xd8),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar2 = *(long *)(lVar2 + 0xe0) + (long)param_1 * 0x68;
    local_28 = *(undefined8 *)(lVar2 + 0x24);
    local_20 = *(undefined4 *)(lVar2 + 0x2c);
  }
  auVar4._8_4_ = local_20;
  auVar4._0_8_ = local_28;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar4._12_4_ = 0;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsDirectBodyState3D::get_contact_collider_velocity_at_position(int) const */

undefined1  [16] __thiscall
JoltPhysicsDirectBodyState3D::get_contact_collider_velocity_at_position
          (JoltPhysicsDirectBodyState3D *this,int param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  undefined8 local_28;
  undefined4 local_20;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 < 0) || (lVar2 = *(long *)(this + 0x178), *(int *)(lVar2 + 0x1f8) <= param_1)) {
    _err_print_index_error
              ("get_contact_collider_velocity_at_position",
               "modules/jolt_physics/objects/jolt_physics_direct_body_state_3d.cpp",0xdc,
               (long)param_1,(long)*(int *)(*(long *)(this + 0x178) + 0x1f8),"p_contact_idx",
               "(int)body->get_contact_count()","",false,false);
    local_20 = 0;
    local_28 = 0;
  }
  else {
    if (*(uint *)(lVar2 + 0xd8) <= (uint)param_1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,
                 (ulong)*(uint *)(lVar2 + 0xd8),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar2 = *(long *)(lVar2 + 0xe0) + (long)param_1 * 0x68;
    local_28 = *(undefined8 *)(lVar2 + 0x30);
    local_20 = *(undefined4 *)(lVar2 + 0x38);
  }
  auVar4._8_4_ = local_20;
  auVar4._0_8_ = local_28;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar4._12_4_ = 0;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsDirectBodyState3D::get_contact_impulse(int) const */

undefined1  [16] __thiscall
JoltPhysicsDirectBodyState3D::get_contact_impulse(JoltPhysicsDirectBodyState3D *this,int param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  undefined8 local_28;
  undefined4 local_20;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 < 0) || (lVar2 = *(long *)(this + 0x178), *(int *)(lVar2 + 0x1f8) <= param_1)) {
    _err_print_index_error
              ("get_contact_impulse",
               "modules/jolt_physics/objects/jolt_physics_direct_body_state_3d.cpp",0xb4,
               (long)param_1,(long)*(int *)(*(long *)(this + 0x178) + 0x1f8),"p_contact_idx",
               "(int)body->get_contact_count()","",false,false);
    local_20 = 0;
    local_28 = 0;
  }
  else {
    if (*(uint *)(lVar2 + 0xd8) <= (uint)param_1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,
                 (ulong)*(uint *)(lVar2 + 0xd8),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar2 = *(long *)(lVar2 + 0xe0) + (long)param_1 * 0x68;
    local_28 = *(undefined8 *)(lVar2 + 0x3c);
    local_20 = *(undefined4 *)(lVar2 + 0x44);
  }
  auVar4._8_4_ = local_20;
  auVar4._0_8_ = local_28;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar4._12_4_ = 0;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsDirectBodyState3D::get_contact_local_normal(int) const */

undefined1  [16] __thiscall
JoltPhysicsDirectBodyState3D::get_contact_local_normal
          (JoltPhysicsDirectBodyState3D *this,int param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  undefined8 local_28;
  undefined4 local_20;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 < 0) || (lVar3 = *(long *)(this + 0x178), *(int *)(lVar3 + 0x1f8) <= param_1)) {
    _err_print_index_error
              ("get_contact_local_normal",
               "modules/jolt_physics/objects/jolt_physics_direct_body_state_3d.cpp",0xaf,
               (long)param_1,(long)*(int *)(*(long *)(this + 0x178) + 0x1f8),"p_contact_idx",
               "(int)body->get_contact_count()","",false,false);
    local_20 = 0;
    local_28 = 0;
  }
  else {
    if (*(uint *)(lVar3 + 0xd8) <= (uint)param_1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,
                 (ulong)*(uint *)(lVar3 + 0xd8),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 0xe0) + (long)param_1 * 0x68);
    local_28 = *puVar1;
    local_20 = *(undefined4 *)(puVar1 + 1);
  }
  auVar5._8_4_ = local_20;
  auVar5._0_8_ = local_28;
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar5._12_4_ = 0;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsDirectBodyState3D::get_contact_collider_position(int) const */

undefined1  [16] __thiscall
JoltPhysicsDirectBodyState3D::get_contact_collider_position
          (JoltPhysicsDirectBodyState3D *this,int param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  undefined8 local_28;
  undefined4 local_20;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 < 0) || (lVar2 = *(long *)(this + 0x178), *(int *)(lVar2 + 0x1f8) <= param_1)) {
    _err_print_index_error
              ("get_contact_collider_position",
               "modules/jolt_physics/objects/jolt_physics_direct_body_state_3d.cpp",200,
               (long)param_1,(long)*(int *)(*(long *)(this + 0x178) + 0x1f8),"p_contact_idx",
               "(int)body->get_contact_count()","",false,false);
    local_20 = 0;
    local_28 = 0;
  }
  else {
    if (*(uint *)(lVar2 + 0xd8) <= (uint)param_1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,
                 (ulong)*(uint *)(lVar2 + 0xd8),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar2 = *(long *)(lVar2 + 0xe0) + (long)param_1 * 0x68;
    local_28 = *(undefined8 *)(lVar2 + 0x18);
    local_20 = *(undefined4 *)(lVar2 + 0x20);
  }
  auVar4._8_4_ = local_20;
  auVar4._0_8_ = local_28;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar4._12_4_ = 0;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsDirectBodyState3D::get_contact_local_position(int) const */

undefined1  [16] __thiscall
JoltPhysicsDirectBodyState3D::get_contact_local_position
          (JoltPhysicsDirectBodyState3D *this,int param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  undefined8 local_28;
  undefined4 local_20;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 < 0) || (lVar2 = *(long *)(this + 0x178), *(int *)(lVar2 + 0x1f8) <= param_1)) {
    _err_print_index_error
              ("get_contact_local_position",
               "modules/jolt_physics/objects/jolt_physics_direct_body_state_3d.cpp",0xaa,
               (long)param_1,(long)*(int *)(*(long *)(this + 0x178) + 0x1f8),"p_contact_idx",
               "(int)body->get_contact_count()","",false,false);
    local_20 = 0;
    local_28 = 0;
  }
  else {
    if (*(uint *)(lVar2 + 0xd8) <= (uint)param_1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,
                 (ulong)*(uint *)(lVar2 + 0xd8),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar2 = *(long *)(lVar2 + 0xe0) + (long)param_1 * 0x68;
    local_28 = *(undefined8 *)(lVar2 + 0xc);
    local_20 = *(undefined4 *)(lVar2 + 0x14);
  }
  auVar4._8_4_ = local_20;
  auVar4._0_8_ = local_28;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar4._12_4_ = 0;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* JoltPhysicsDirectBodyState3D::JoltPhysicsDirectBodyState3D(JoltBody3D*) */

void __thiscall
JoltPhysicsDirectBodyState3D::JoltPhysicsDirectBodyState3D
          (JoltPhysicsDirectBodyState3D *this,JoltBody3D *param_1)

{
  PhysicsDirectBodyState3D::PhysicsDirectBodyState3D((PhysicsDirectBodyState3D *)this);
  *(JoltBody3D **)(this + 0x178) = param_1;
  *(undefined ***)this = &PTR__initialize_classv_001029b8;
  return;
}



/* JoltPhysicsDirectBodyState3D::get_velocity_at_local_position(Vector3 const&) const */

void JoltPhysicsDirectBodyState3D::get_velocity_at_local_position(Vector3 *param_1)

{
  Vector3 *pVVar1;
  long lVar2;
  long in_FS_OFFSET;
  
  pVVar1 = *(Vector3 **)(param_1 + 0x178);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  JoltShapedObject3D::get_position();
  JoltBody3D::get_velocity_at_position(pVVar1);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* JoltPhysicsDirectBodyState3D::is_class_ptr(void*) const */

uint __thiscall
JoltPhysicsDirectBodyState3D::is_class_ptr(JoltPhysicsDirectBodyState3D *this,void *param_1)

{
  return (uint)CONCAT71(0x102c,(undefined4 *)param_1 ==
                               &PhysicsDirectBodyState3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x102c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x102c,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* JoltPhysicsDirectBodyState3D::_getv(StringName const&, Variant&) const */

undefined8 JoltPhysicsDirectBodyState3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JoltPhysicsDirectBodyState3D::_setv(StringName const&, Variant const&) */

undefined8 JoltPhysicsDirectBodyState3D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JoltPhysicsDirectBodyState3D::_validate_propertyv(PropertyInfo&) const */

void JoltPhysicsDirectBodyState3D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* JoltPhysicsDirectBodyState3D::_property_can_revertv(StringName const&) const */

undefined8 JoltPhysicsDirectBodyState3D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* JoltPhysicsDirectBodyState3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 JoltPhysicsDirectBodyState3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JoltPhysicsDirectBodyState3D::_notificationv(int, bool) */

void JoltPhysicsDirectBodyState3D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* JoltPhysicsDirectBodyState3D::~JoltPhysicsDirectBodyState3D() */

void __thiscall
JoltPhysicsDirectBodyState3D::~JoltPhysicsDirectBodyState3D(JoltPhysicsDirectBodyState3D *this)

{
  *(code **)this = operator_delete;
  Object::~Object((Object *)this);
  return;
}



/* JoltPhysicsDirectBodyState3D::~JoltPhysicsDirectBodyState3D() */

void __thiscall
JoltPhysicsDirectBodyState3D::~JoltPhysicsDirectBodyState3D(JoltPhysicsDirectBodyState3D *this)

{
  *(code **)this = operator_delete;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* JoltPhysicsDirectBodyState3D::_get_class_namev() const */

undefined8 * JoltPhysicsDirectBodyState3D::_get_class_namev(void)

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
LAB_001018e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001018e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "JoltPhysicsDirectBodyState3D");
      goto LAB_0010194e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"JoltPhysicsDirectBodyState3D");
LAB_0010194e:
  return &_get_class_namev()::_class_name_static;
}



/* JoltPhysicsDirectBodyState3D::get_class() const */

void JoltPhysicsDirectBodyState3D::get_class(void)

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



/* JoltPhysicsDirectBodyState3D::is_class(String const&) const */

undefined8 __thiscall
JoltPhysicsDirectBodyState3D::is_class(JoltPhysicsDirectBodyState3D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00101aef;
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
LAB_00101aef:
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
    if (cVar6 != '\0') goto LAB_00101ba3;
  }
  cVar6 = String::operator==(param_1,"JoltPhysicsDirectBodyState3D");
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
              if (lVar5 == 0) goto LAB_00101c7b;
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
LAB_00101c7b:
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
      if (cVar6 != '\0') goto LAB_00101ba3;
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
                if (lVar5 == 0) goto LAB_00101d5b;
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
LAB_00101d5b:
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
        if (cVar6 != '\0') goto LAB_00101ba3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00101e04;
    }
  }
LAB_00101ba3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00101e04:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsDirectBodyState3D::_initialize_classv() */

void JoltPhysicsDirectBodyState3D::_initialize_classv(void)

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
  if (initialize_class()::initialized != '\0') goto LAB_00101f64;
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
LAB_0010206e:
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
LAB_0010207e:
        PhysicsDirectBodyState3D::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010206e;
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_0010207e;
    }
    PhysicsDirectBodyState3D::initialize_class()::initialized = '\x01';
  }
  local_48 = "PhysicsDirectBodyState3D";
  local_58 = 0;
  local_40 = 0x18;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "JoltPhysicsDirectBodyState3D";
  local_60 = 0;
  local_40 = 0x1c;
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
LAB_00101f64:
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
LAB_00102258:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102258;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00102276;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00102276:
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



/* JoltPhysicsDirectBodyState3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
JoltPhysicsDirectBodyState3D::_get_property_listv
          (JoltPhysicsDirectBodyState3D *this,List *param_1,bool param_2)

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
  local_78 = "JoltPhysicsDirectBodyState3D";
  local_70 = 0x1c;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "JoltPhysicsDirectBodyState3D";
  local_98 = 0;
  local_70 = 0x1c;
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
LAB_00102658:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102658;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00102675;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00102675:
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
  StringName::StringName((StringName *)&local_78,"JoltPhysicsDirectBodyState3D",false);
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



/* JoltPhysicsDirectBodyState3D::JoltPhysicsDirectBodyState3D(JoltBody3D*) */

void JoltPhysicsDirectBodyState3D::_GLOBAL__sub_I_JoltPhysicsDirectBodyState3D(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC27;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltPhysicsDirectBodyState3D::~JoltPhysicsDirectBodyState3D() */

void __thiscall
JoltPhysicsDirectBodyState3D::~JoltPhysicsDirectBodyState3D(JoltPhysicsDirectBodyState3D *this)

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



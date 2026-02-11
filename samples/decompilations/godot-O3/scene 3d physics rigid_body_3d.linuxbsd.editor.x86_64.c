
/* RigidBody3D::is_lock_rotation_enabled() const */

RigidBody3D __thiscall RigidBody3D::is_lock_rotation_enabled(RigidBody3D *this)

{
  return this[0x623];
}



/* RigidBody3D::is_freeze_enabled() const */

RigidBody3D __thiscall RigidBody3D::is_freeze_enabled(RigidBody3D *this)

{
  return this[0x624];
}



/* RigidBody3D::get_freeze_mode() const */

undefined4 __thiscall RigidBody3D::get_freeze_mode(RigidBody3D *this)

{
  return *(undefined4 *)(this + 0x628);
}



/* RigidBody3D::get_mass() const */

undefined4 __thiscall RigidBody3D::get_mass(RigidBody3D *this)

{
  return *(undefined4 *)(this + 0x62c);
}



/* RigidBody3D::get_inertia() const */

RigidBody3D * __thiscall RigidBody3D::get_inertia(RigidBody3D *this)

{
  return this + 0x630;
}



/* RigidBody3D::get_center_of_mass_mode() const */

undefined4 __thiscall RigidBody3D::get_center_of_mass_mode(RigidBody3D *this)

{
  return *(undefined4 *)(this + 0x63c);
}



/* RigidBody3D::get_center_of_mass() const */

RigidBody3D * __thiscall RigidBody3D::get_center_of_mass(RigidBody3D *this)

{
  return this + 0x640;
}



/* RigidBody3D::get_gravity_scale() const */

undefined4 __thiscall RigidBody3D::get_gravity_scale(RigidBody3D *this)

{
  return *(undefined4 *)(this + 0x694);
}



/* RigidBody3D::get_linear_damp_mode() const */

undefined4 __thiscall RigidBody3D::get_linear_damp_mode(RigidBody3D *this)

{
  return *(undefined4 *)(this + 0x698);
}



/* RigidBody3D::get_angular_damp_mode() const */

undefined4 __thiscall RigidBody3D::get_angular_damp_mode(RigidBody3D *this)

{
  return *(undefined4 *)(this + 0x69c);
}



/* RigidBody3D::get_linear_damp() const */

undefined4 __thiscall RigidBody3D::get_linear_damp(RigidBody3D *this)

{
  return *(undefined4 *)(this + 0x6a0);
}



/* RigidBody3D::get_angular_damp() const */

undefined4 __thiscall RigidBody3D::get_angular_damp(RigidBody3D *this)

{
  return *(undefined4 *)(this + 0x6a4);
}



/* RigidBody3D::get_linear_velocity() const */

undefined1  [16] __thiscall RigidBody3D::get_linear_velocity(RigidBody3D *this)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._12_4_ = 0;
    auVar1._0_12_ = *(undefined1 (*) [12])(this + 0x658);
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RigidBody3D::get_angular_velocity() const */

undefined1  [16] __thiscall RigidBody3D::get_angular_velocity(RigidBody3D *this)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._12_4_ = 0;
    auVar1._0_12_ = *(undefined1 (*) [12])(this + 0x664);
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RigidBody3D::get_inverse_inertia_tensor() const */

void RigidBody3D::get_inverse_inertia_tensor(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_RSI;
  undefined8 *in_RDI;
  
  uVar2 = *(undefined8 *)(in_RSI + 0x678);
  uVar3 = *(undefined8 *)(in_RSI + 0x680);
  uVar4 = *(undefined8 *)(in_RSI + 0x688);
  uVar1 = *(undefined4 *)(in_RSI + 0x690);
  *in_RDI = *(undefined8 *)(in_RSI + 0x670);
  in_RDI[1] = uVar2;
  *(undefined4 *)(in_RDI + 4) = uVar1;
  in_RDI[2] = uVar3;
  in_RDI[3] = uVar4;
  return;
}



/* RigidBody3D::is_using_custom_integrator() */

RigidBody3D __thiscall RigidBody3D::is_using_custom_integrator(RigidBody3D *this)

{
  return this[0x6b4];
}



/* RigidBody3D::is_able_to_sleep() const */

RigidBody3D __thiscall RigidBody3D::is_able_to_sleep(RigidBody3D *this)

{
  return this[0x622];
}



/* RigidBody3D::is_sleeping() const */

RigidBody3D __thiscall RigidBody3D::is_sleeping(RigidBody3D *this)

{
  return this[0x6a8];
}



/* RigidBody3D::get_max_contacts_reported() const */

undefined4 __thiscall RigidBody3D::get_max_contacts_reported(RigidBody3D *this)

{
  return *(undefined4 *)(this + 0x6ac);
}



/* RigidBody3D::get_contact_count() const */

undefined4 __thiscall RigidBody3D::get_contact_count(RigidBody3D *this)

{
  return *(undefined4 *)(this + 0x6b0);
}



/* RigidBody3D::is_using_continuous_collision_detection() const */

RigidBody3D __thiscall RigidBody3D::is_using_continuous_collision_detection(RigidBody3D *this)

{
  return this[0x6a9];
}



/* RigidBody3D::is_contact_monitor_enabled() const */

bool __thiscall RigidBody3D::is_contact_monitor_enabled(RigidBody3D *this)

{
  return *(long *)(this + 0x6b8) != 0;
}



/* RigidBody3D::set_linear_damp_mode(RigidBody3D::DampMode) */

void __thiscall RigidBody3D::set_linear_damp_mode(RigidBody3D *this,undefined4 param_2)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(this + 0x698) = param_2;
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x3c8);
  Variant::Variant((Variant *)local_48,*(int *)(this + 0x698));
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),6,local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RigidBody3D::set_angular_damp_mode(RigidBody3D::DampMode) */

void __thiscall RigidBody3D::set_angular_damp_mode(RigidBody3D *this,undefined4 param_2)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(this + 0x69c) = param_2;
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x3c8);
  Variant::Variant((Variant *)local_48,*(int *)(this + 0x69c));
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),7,local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RigidBody3D::set_max_contacts_reported(int) */

void __thiscall RigidBody3D::set_max_contacts_reported(RigidBody3D *this,int param_1)

{
  long *plVar1;
  
  *(int *)(this + 0x6ac) = param_1;
  plVar1 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100376. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x488))(plVar1,*(undefined8 *)(this + 0x538),param_1);
  return;
}



/* RigidBody3D::apply_central_impulse(Vector3 const&) */

void __thiscall RigidBody3D::apply_central_impulse(RigidBody3D *this,Vector3 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001003b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x3f0))(plVar1,*(undefined8 *)(this + 0x538),param_1);
  return;
}



/* RigidBody3D::apply_impulse(Vector3 const&, Vector3 const&) */

void __thiscall RigidBody3D::apply_impulse(RigidBody3D *this,Vector3 *param_1,Vector3 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001003f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x3f8))(plVar1,*(undefined8 *)(this + 0x538),param_1,param_2);
  return;
}



/* RigidBody3D::apply_torque_impulse(Vector3 const&) */

void __thiscall RigidBody3D::apply_torque_impulse(RigidBody3D *this,Vector3 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100432. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x400))(plVar1,*(undefined8 *)(this + 0x538),param_1);
  return;
}



/* RigidBody3D::apply_central_force(Vector3 const&) */

void __thiscall RigidBody3D::apply_central_force(RigidBody3D *this,Vector3 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100472. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x408))(plVar1,*(undefined8 *)(this + 0x538),param_1);
  return;
}



/* RigidBody3D::apply_force(Vector3 const&, Vector3 const&) */

void __thiscall RigidBody3D::apply_force(RigidBody3D *this,Vector3 *param_1,Vector3 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001004b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x410))(plVar1,*(undefined8 *)(this + 0x538),param_1,param_2);
  return;
}



/* RigidBody3D::apply_torque(Vector3 const&) */

void __thiscall RigidBody3D::apply_torque(RigidBody3D *this,Vector3 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001004f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x418))(plVar1,*(undefined8 *)(this + 0x538),param_1);
  return;
}



/* RigidBody3D::add_constant_central_force(Vector3 const&) */

void __thiscall RigidBody3D::add_constant_central_force(RigidBody3D *this,Vector3 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100532. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x420))(plVar1,*(undefined8 *)(this + 0x538),param_1);
  return;
}



/* RigidBody3D::add_constant_force(Vector3 const&, Vector3 const&) */

void __thiscall RigidBody3D::add_constant_force(RigidBody3D *this,Vector3 *param_1,Vector3 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x428))(plVar1,*(undefined8 *)(this + 0x538),param_1,param_2);
  return;
}



/* RigidBody3D::add_constant_torque(Vector3 const&) */

void __thiscall RigidBody3D::add_constant_torque(RigidBody3D *this,Vector3 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001005b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x430))(plVar1,*(undefined8 *)(this + 0x538),param_1);
  return;
}



/* RigidBody3D::set_constant_force(Vector3 const&) */

void __thiscall RigidBody3D::set_constant_force(RigidBody3D *this,Vector3 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001005f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x438))(plVar1,*(undefined8 *)(this + 0x538),param_1);
  return;
}



/* RigidBody3D::get_constant_force() const */

void __thiscall RigidBody3D::get_constant_force(RigidBody3D *this)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010064a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x440))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar2,*(undefined8 *)(this + 0x538));
}



/* RigidBody3D::set_constant_torque(Vector3 const&) */

void __thiscall RigidBody3D::set_constant_torque(RigidBody3D *this,Vector3 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100692. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x448))(plVar1,*(undefined8 *)(this + 0x538),param_1);
  return;
}



/* RigidBody3D::get_constant_torque() const */

void __thiscall RigidBody3D::get_constant_torque(RigidBody3D *this)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001006ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x450))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar2,*(undefined8 *)(this + 0x538));
}



/* RigidBody3D::set_use_continuous_collision_detection(bool) */

void __thiscall RigidBody3D::set_use_continuous_collision_detection(RigidBody3D *this,bool param_1)

{
  long *plVar1;
  
  this[0x6a9] = (RigidBody3D)param_1;
  plVar1 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x378))(plVar1,*(undefined8 *)(this + 0x538),param_1);
  return;
}



/* RigidBody3D::set_mass(float) */

void __thiscall RigidBody3D::set_mass(RigidBody3D *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 <= 0.0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_mass","scene/3d/physics/rigid_body_3d.cpp",0x14e,
                       "Condition \"p_mass <= 0\" is true.",0,0);
      return;
    }
  }
  else {
    *(float *)(this + 0x62c) = param_1;
    plVar2 = (long *)PhysicsServer3D::get_singleton();
    pcVar1 = *(code **)(*plVar2 + 0x3c8);
    Variant::Variant((Variant *)local_48,*(float *)(this + 0x62c));
    (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),2,local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RigidBody3D::set_gravity_scale(float) */

void __thiscall RigidBody3D::set_gravity_scale(RigidBody3D *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(float *)(this + 0x694) = param_1;
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x3c8);
  Variant::Variant((Variant *)local_48,*(float *)(this + 0x694));
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),5,local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RigidBody3D::set_linear_damp(float) */

void __thiscall RigidBody3D::set_linear_damp(RigidBody3D *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0.0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_linear_damp","scene/3d/physics/rigid_body_3d.cpp",0x1bc,
                       "Condition \"p_linear_damp < 0.0\" is true.",0,0);
      return;
    }
  }
  else {
    *(float *)(this + 0x6a0) = param_1;
    plVar2 = (long *)PhysicsServer3D::get_singleton();
    pcVar1 = *(code **)(*plVar2 + 0x3c8);
    Variant::Variant((Variant *)local_48,*(float *)(this + 0x6a0));
    (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),8,local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RigidBody3D::set_angular_damp(float) */

void __thiscall RigidBody3D::set_angular_damp(RigidBody3D *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0.0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_angular_damp","scene/3d/physics/rigid_body_3d.cpp",0x1c6,
                       "Condition \"p_angular_damp < 0.0\" is true.",0,0);
      return;
    }
  }
  else {
    *(float *)(this + 0x6a4) = param_1;
    plVar2 = (long *)PhysicsServer3D::get_singleton();
    pcVar1 = *(code **)(*plVar2 + 0x3c8);
    Variant::Variant((Variant *)local_48,*(float *)(this + 0x6a4));
    (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),9,local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RigidBody3D::_reload_physics_characteristics() */

void __thiscall RigidBody3D::_reload_physics_characteristics(RigidBody3D *this)

{
  long *plVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  float fVar3;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x650) == 0) {
    plVar1 = (long *)PhysicsServer3D::get_singleton();
    pcVar2 = *(code **)(*plVar1 + 0x3c8);
    Variant::Variant((Variant *)local_48,0);
    (*pcVar2)(plVar1,*(undefined8 *)(this + 0x538),0,local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    plVar1 = (long *)PhysicsServer3D::get_singleton();
    pcVar2 = *(code **)(*plVar1 + 0x3c8);
    Variant::Variant((Variant *)local_48,1);
  }
  else {
    plVar1 = (long *)PhysicsServer3D::get_singleton();
    pcVar2 = *(code **)(*plVar1 + 0x3c8);
    fVar3 = *(float *)(*(long *)(this + 0x650) + 0x248);
    if (*(char *)(*(long *)(this + 0x650) + 0x24c) != '\0') {
      fVar3 = (float)((uint)fVar3 ^ __LC9);
    }
    Variant::Variant((Variant *)local_48,fVar3);
    (*pcVar2)(plVar1,*(undefined8 *)(this + 0x538),0,local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    plVar1 = (long *)PhysicsServer3D::get_singleton();
    pcVar2 = *(code **)(*plVar1 + 0x3c8);
    fVar3 = *(float *)(*(long *)(this + 0x650) + 0x240);
    if (*(char *)(*(long *)(this + 0x650) + 0x244) != '\0') {
      fVar3 = (float)((uint)fVar3 ^ __LC9);
    }
    Variant::Variant((Variant *)local_48,fVar3);
  }
  (*pcVar2)(plVar1,*(undefined8 *)(this + 0x538),1,local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RigidBody3D::set_inertia(Vector3 const&) */

void __thiscall RigidBody3D::set_inertia(RigidBody3D *this,Vector3 *param_1)

{
  code *pcVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(float *)param_1 <= 0.0 && *(float *)param_1 != 0.0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = 0x158;
      pcVar3 = "Condition \"p_inertia.x < 0\" is true.";
LAB_00100d6e:
      _err_print_error("set_inertia","scene/3d/physics/rigid_body_3d.cpp",uVar4,pcVar3,0,0);
      return;
    }
  }
  else if (*(float *)(param_1 + 4) <= 0.0 && *(float *)(param_1 + 4) != 0.0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = 0x159;
      pcVar3 = "Condition \"p_inertia.y < 0\" is true.";
      goto LAB_00100d6e;
    }
  }
  else if (*(float *)(param_1 + 8) <= 0.0 && *(float *)(param_1 + 8) != 0.0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = 0x15a;
      pcVar3 = "Condition \"p_inertia.z < 0\" is true.";
      goto LAB_00100d6e;
    }
  }
  else {
    *(undefined8 *)(this + 0x630) = *(undefined8 *)param_1;
    *(undefined4 *)(this + 0x638) = *(undefined4 *)(param_1 + 8);
    plVar2 = (long *)PhysicsServer3D::get_singleton();
    pcVar1 = *(code **)(*plVar2 + 0x3c8);
    Variant::Variant((Variant *)local_48,(Vector3 *)(this + 0x630));
    (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),3,local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RigidBody3D::set_center_of_mass(Vector3 const&) */

void __thiscall RigidBody3D::set_center_of_mass(RigidBody3D *this,Vector3 *param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(float *)(this + 0x640) != *(float *)param_1) ||
      (*(float *)(this + 0x644) != *(float *)(param_1 + 4))) ||
     (*(float *)(this + 0x648) != *(float *)(param_1 + 8))) {
    if (*(int *)(this + 0x63c) != 1) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("set_center_of_mass","scene/3d/physics/rigid_body_3d.cpp",0x185,
                         "Condition \"center_of_mass_mode != CENTER_OF_MASS_MODE_CUSTOM\" is true.",
                         0,0);
        return;
      }
      goto LAB_00100f2a;
    }
    *(undefined8 *)(this + 0x640) = *(undefined8 *)param_1;
    *(undefined4 *)(this + 0x648) = *(undefined4 *)(param_1 + 8);
    plVar2 = (long *)PhysicsServer3D::get_singleton();
    pcVar1 = *(code **)(*plVar2 + 0x3c8);
    Variant::Variant((Variant *)local_48,(Vector3 *)(this + 0x640));
    (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),4,local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100f2a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RigidBody3D::set_linear_velocity(Vector3 const&) */

void __thiscall RigidBody3D::set_linear_velocity(RigidBody3D *this,Vector3 *param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x658) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x660) = *(undefined4 *)(param_1 + 8);
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x3e0);
  Variant::Variant((Variant *)local_48,(Vector3 *)(this + 0x658));
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),1,local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RigidBody3D::set_angular_velocity(Vector3 const&) */

void __thiscall RigidBody3D::set_angular_velocity(RigidBody3D *this,Vector3 *param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x664) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x66c) = *(undefined4 *)(param_1 + 8);
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x3e0);
  Variant::Variant((Variant *)local_48,(Vector3 *)(this + 0x664));
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),2,local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RigidBody3D::set_center_of_mass_mode(RigidBody3D::CenterOfMassMode) */

void __thiscall RigidBody3D::set_center_of_mass_mode(RigidBody3D *this,int param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x63c) == param_2) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_0010121b;
  }
  *(int *)(this + 0x63c) = param_2;
  if (param_2 == 0) {
    *(undefined8 *)(this + 0x640) = 0;
    *(undefined4 *)(this + 0x648) = 0;
    plVar1 = (long *)PhysicsServer3D::get_singleton();
    (**(code **)(*plVar1 + 0x3d8))(plVar1,*(undefined8 *)(this + 0x538));
    if (((*(float *)(this + 0x630) != 0.0) || (*(float *)(this + 0x634) != 0.0)) ||
       (*(float *)(this + 0x638) != 0.0)) {
      plVar1 = (long *)PhysicsServer3D::get_singleton();
      pcVar4 = *(code **)(*plVar1 + 0x3c8);
      Variant::Variant((Variant *)local_48,(Vector3 *)(this + 0x630));
      uVar3 = *(undefined8 *)(this + 0x538);
      uVar2 = 3;
      goto LAB_00101133;
    }
  }
  else if (param_2 == 1) {
    plVar1 = (long *)PhysicsServer3D::get_singleton();
    pcVar4 = *(code **)(*plVar1 + 0x3c8);
    Variant::Variant((Variant *)local_48,(Vector3 *)(this + 0x640));
    uVar3 = *(undefined8 *)(this + 0x538);
    uVar2 = 4;
LAB_00101133:
    (*pcVar4)(plVar1,uVar3,uVar2,local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Object::notify_property_list_changed();
    return;
  }
LAB_0010121b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RigidBody3D::set_axis_velocity(Vector3 const&) */

void __thiscall RigidBody3D::set_axis_velocity(RigidBody3D *this,Vector3 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  int local_48 [6];
  long local_30;
  
  uVar1 = *(ulong *)param_1;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar1;
  fVar5 = *(float *)(param_1 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fVar4 = (float)(uVar1 >> 0x20);
  fVar4 = (float)uVar1 * (float)uVar1 + fVar4 * fVar4 + fVar5 * fVar5;
  uVar8 = 0;
  fVar7 = 0.0;
  if (fVar4 != 0.0) {
    fVar4 = SQRT(fVar4);
    fVar7 = fVar5 / fVar4;
    auVar6._4_4_ = fVar4;
    auVar6._0_4_ = fVar4;
    auVar6._8_8_ = _LC16;
    auVar10 = divps(auVar10,auVar6);
    uVar8 = auVar10._0_8_;
  }
  fVar9 = (float)((ulong)uVar8 >> 0x20);
  fVar5 = *(float *)(this + 0x658) * (float)uVar8 + *(float *)(this + 0x65c) * fVar9 +
          *(float *)(this + 0x660) * fVar7;
  fVar4 = *(float *)(this + 0x660) - fVar5 * fVar7;
  fVar7 = (float)*(undefined8 *)(this + 0x658) - fVar5 * (float)uVar8;
  fVar5 = (float)((ulong)*(undefined8 *)(this + 0x658) >> 0x20) - fVar5 * fVar9;
  *(float *)(this + 0x660) = fVar4;
  *(ulong *)(this + 0x658) = CONCAT44(fVar5,fVar7);
  *(ulong *)(this + 0x658) =
       CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) + fVar5,
                (float)*(undefined8 *)param_1 + fVar7);
  *(float *)(this + 0x660) = fVar4 + *(float *)(param_1 + 8);
  plVar3 = (long *)PhysicsServer3D::get_singleton();
  pcVar2 = *(code **)(*plVar3 + 0x3e0);
  Variant::Variant((Variant *)local_48,(Vector3 *)(this + 0x658));
  (*pcVar2)(plVar3,*(undefined8 *)(this + 0x538),1,local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RigidBody3D::set_sleeping(bool) */

void __thiscall RigidBody3D::set_sleeping(RigidBody3D *this,bool param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x6a8] = (RigidBody3D)param_1;
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x3e0);
  Variant::Variant((Variant *)local_48,(bool)this[0x6a8]);
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),3,local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RigidBody3D::set_can_sleep(bool) */

void __thiscall RigidBody3D::set_can_sleep(RigidBody3D *this,bool param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x622] = (RigidBody3D)param_1;
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x3e0);
  Variant::Variant((Variant *)local_48,param_1);
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),4,local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RigidBody3D::set_use_custom_integrator(bool) */

void __thiscall RigidBody3D::set_use_custom_integrator(RigidBody3D *this,bool param_1)

{
  long *plVar1;
  
  if (this[0x6b4] != (RigidBody3D)param_1) {
    this[0x6b4] = (RigidBody3D)param_1;
    plVar1 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00101531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x4a8))(plVar1,*(undefined8 *)(this + 0x538),param_1);
    return;
  }
  return;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 4;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* RigidBody3D::get_physics_material_override() const */

void RigidBody3D::get_physics_material_override(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x650) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x650);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* RigidBody3D::set_lock_rotation_enabled(bool) */

void __thiscall RigidBody3D::set_lock_rotation_enabled(RigidBody3D *this,bool param_1)

{
  if (this[0x623] == (RigidBody3D)param_1) {
    return;
  }
  this[0x623] = (RigidBody3D)param_1;
  if (this[0x624] == (RigidBody3D)0x0) {
    if (param_1) {
      CollisionObject3D::set_body_mode(this,3);
      return;
    }
    CollisionObject3D::set_body_mode(this,2);
    return;
  }
  if (*(int *)(this + 0x628) == 0) {
    CollisionObject3D::set_body_mode(this,0);
    return;
  }
  if (*(int *)(this + 0x628) != 1) {
    return;
  }
  CollisionObject3D::set_body_mode(this,1);
  return;
}



/* RigidBody3D::set_freeze_mode(RigidBody3D::FreezeMode) */

void __thiscall RigidBody3D::set_freeze_mode(RigidBody3D *this,int param_2)

{
  if (*(int *)(this + 0x628) == param_2) {
    return;
  }
  *(int *)(this + 0x628) = param_2;
  if (this[0x624] == (RigidBody3D)0x0) {
    if (this[0x623] != (RigidBody3D)0x0) {
      CollisionObject3D::set_body_mode(this,3);
      return;
    }
    CollisionObject3D::set_body_mode(this,2);
    return;
  }
  if (param_2 == 0) {
    CollisionObject3D::set_body_mode(this,0);
    return;
  }
  if (param_2 != 1) {
    return;
  }
  CollisionObject3D::set_body_mode(this,1);
  return;
}



/* RigidBody3D::set_freeze_enabled(bool) */

void __thiscall RigidBody3D::set_freeze_enabled(RigidBody3D *this,bool param_1)

{
  if (this[0x624] == (RigidBody3D)param_1) {
    return;
  }
  this[0x624] = (RigidBody3D)param_1;
  if (!param_1) {
    if (this[0x623] != (RigidBody3D)0x0) {
      CollisionObject3D::set_body_mode(this,3);
      return;
    }
    CollisionObject3D::set_body_mode(this,2);
    return;
  }
  if (*(int *)(this + 0x628) == 0) {
    CollisionObject3D::set_body_mode(this,0);
    return;
  }
  if (*(int *)(this + 0x628) != 1) {
    return;
  }
  CollisionObject3D::set_body_mode(this,1);
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



/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */

void __thiscall
List<PropertyInfo,DefaultAllocator>::push_back
          (List<PropertyInfo,DefaultAllocator> *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
  
  if (*(long *)this == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  lVar2 = *(long *)(param_1 + 8);
  *puVar3 = 0;
  puVar3[6] = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = *(undefined4 *)param_1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  if (*(long *)(puVar3 + 8) != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
  }
  puVar3[10] = *(undefined4 *)(param_1 + 0x28);
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(long **)(puVar3 + 0x10) = plVar1;
  *(long *)(puVar3 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar3;
  }
  plVar1[1] = (long)puVar3;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)puVar3;
  return;
}



/* CowData<RigidBody3D::ShapePair>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RigidBody3D::ShapePair>::_copy_on_write(CowData<RigidBody3D::ShapePair> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  size_t __n;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 0xc;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* RigidBody3D::_body_enter_tree(ObjectID) */

void __thiscall RigidBody3D::_body_enter_tree(RigidBody3D *this,ulong param_2)

{
  Variant *pVVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  code *pcVar14;
  RID RVar15;
  Object *pOVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  ulong *puVar20;
  char *pcVar21;
  uint uVar22;
  long lVar23;
  undefined8 uVar24;
  ulong uVar25;
  Variant *pVVar26;
  ulong uVar27;
  uint uVar28;
  long in_FS_OFFSET;
  bool bVar29;
  ulong local_f0;
  Variant *local_e8;
  Variant *pVStack_e0;
  Variant *local_d8;
  Variant *pVStack_d0;
  int local_b8 [6];
  int local_a0 [2];
  undefined1 local_98 [16];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  uVar19 = (uint)param_2 & 0xffffff;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar19 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_f0 = local_f0 & 0xffffffffffffff00;
      LOCK();
      bVar29 = ObjectDB::spin_lock._0_1_ == (RID)0x0;
      RVar15 = ObjectDB::spin_lock._0_1_;
      if (bVar29) {
        ObjectDB::spin_lock._0_1_ = (RID)0x1;
        RVar15 = (RID)0x0;
      }
      UNLOCK();
      if (bVar29) break;
                    /* WARNING: Ignoring partial resolution of indirect */
      local_f0._0_1_ = RVar15;
      do {
      } while (ObjectDB::spin_lock._0_1_ != (RID)0x0);
    }
    puVar20 = (ulong *)((ulong)uVar19 * 0x10 + ObjectDB::object_slots);
    if ((param_2 >> 0x18 & 0x7fffffffff) == (*puVar20 & 0x7fffffffff)) {
      uVar17 = puVar20[1];
      ObjectDB::spin_lock._0_1_ = (RID)0x0;
      if ((uVar17 != 0) &&
         (pOVar16 = (Object *)__dynamic_cast(uVar17,&Object::typeinfo,&Node::typeinfo,0),
         pOVar16 != (Object *)0x0)) {
        puVar4 = *(undefined1 **)(this + 0x6b8);
        if (puVar4 == (undefined1 *)0x0) {
          if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001020bb;
          uVar24 = 0x25;
          pcVar21 = "Parameter \"contact_monitor\" is null.";
          goto LAB_00101f79;
        }
        lVar5 = *(long *)(puVar4 + 0x10);
        if ((lVar5 != 0) && (*(int *)(puVar4 + 0x34) != 0)) {
          uVar27 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(puVar4 + 0x30) * 4
                                       ));
          lVar18 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(puVar4 + 0x30) * 8);
          uVar17 = param_2 * 0x3ffff - 1;
          uVar17 = (uVar17 ^ uVar17 >> 0x1f) * 0x15;
          uVar17 = (uVar17 ^ uVar17 >> 0xb) * 0x41;
          uVar17 = uVar17 >> 0x16 ^ uVar17;
          uVar25 = uVar17 & 0xffffffff;
          if ((int)uVar17 == 0) {
            uVar25 = 1;
          }
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar25 * lVar18;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar27;
          lVar23 = SUB168(auVar6 * auVar10,8);
          uVar19 = *(uint *)(*(long *)(puVar4 + 0x18) + lVar23 * 4);
          uVar22 = SUB164(auVar6 * auVar10,8);
          if (uVar19 != 0) {
            uVar28 = 0;
            while ((uVar19 != (uint)uVar25 ||
                   (param_2 != *(ulong *)(*(long *)(lVar5 + lVar23 * 8) + 0x10)))) {
              uVar28 = uVar28 + 1;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)(uVar22 + 1) * lVar18;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = uVar27;
              lVar23 = SUB168(auVar7 * auVar11,8);
              uVar19 = *(uint *)(*(long *)(puVar4 + 0x18) + lVar23 * 4);
              uVar22 = SUB164(auVar7 * auVar11,8);
              if ((uVar19 == 0) ||
                 (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar19 * lVar18, auVar12._8_8_ = 0,
                 auVar12._0_8_ = uVar27, auVar9._8_8_ = 0,
                 auVar9._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                  (ulong)*(uint *)(puVar4 + 0x30) * 4) + uVar22) -
                                       SUB164(auVar8 * auVar12,8)) * lVar18, auVar13._8_8_ = 0,
                 auVar13._0_8_ = uVar27, SUB164(auVar9 * auVar13,8) < uVar28)) goto LAB_00101f50;
            }
            lVar5 = *(long *)(lVar5 + (ulong)uVar22 * 8);
            if (lVar5 != 0) {
              if (*(char *)(lVar5 + 0x20) != '\0') {
                if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001020bb;
                uVar24 = 0x28;
                pcVar21 = "Condition \"E->value.in_tree\" is true.";
                goto LAB_00101f79;
              }
              *(undefined1 *)(lVar5 + 0x20) = 1;
              lVar18 = SceneStringNames::singleton;
              *puVar4 = 1;
              Variant::Variant((Variant *)local_b8,pOVar16);
              local_a0[0] = 0;
              local_a0[1] = 0;
              local_98 = (undefined1  [16])0x0;
              local_e8 = (Variant *)local_b8;
              (**(code **)(*(long *)this + 0xd0))(this,lVar18 + 0x148,&local_e8,1);
              if (Variant::needs_deinit[local_a0[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_b8[0]] != '\0') {
                Variant::_clear_internal();
              }
              lVar18 = *(long *)(lVar5 + 0x30);
              if (lVar18 == 0) goto LAB_00101eeb;
              lVar23 = 0;
              goto LAB_00101dbb;
            }
          }
        }
LAB_00101f50:
        if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar24 = 0x27;
          pcVar21 = "Condition \"!E\" is true.";
          goto LAB_00101f79;
        }
        goto LAB_001020bb;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = (RID)0x0;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar24 = 0x24;
    pcVar21 = "Parameter \"node\" is null.";
LAB_00101f79:
    _err_print_error("_body_enter_tree","scene/3d/physics/rigid_body_3d.cpp",uVar24,pcVar21,0,0);
    return;
  }
LAB_001020bb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00101dbb:
  do {
    lVar18 = *(long *)(lVar18 + -8);
    if ((int)lVar18 <= (int)lVar23) break;
    if (lVar18 <= lVar23) {
LAB_00101fa0:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,lVar23,lVar18,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar14 = (code *)invalidInstructionException();
      (*pcVar14)();
    }
    CowData<RigidBody3D::ShapePair>::_copy_on_write
              ((CowData<RigidBody3D::ShapePair> *)(lVar5 + 0x30));
    lVar18 = *(long *)(lVar5 + 0x30);
    iVar2 = *(int *)(lVar18 + 4 + lVar23 * 0xc);
    if (lVar18 == 0) {
      lVar18 = 0;
      goto LAB_00101fa0;
    }
    lVar18 = *(long *)(lVar18 + -8);
    if (lVar18 <= lVar23) goto LAB_00101fa0;
    CowData<RigidBody3D::ShapePair>::_copy_on_write
              ((CowData<RigidBody3D::ShapePair> *)(lVar5 + 0x30));
    iVar3 = *(int *)(*(long *)(lVar5 + 0x30) + lVar23 * 0xc);
    lVar18 = SceneStringNames::singleton + 0x140;
    local_f0 = *(ulong *)(lVar5 + 0x18);
    Variant::Variant((Variant *)local_b8,(RID *)&local_f0);
    Variant::Variant((Variant *)local_a0,pOVar16);
    Variant::Variant(local_88,iVar3);
    pVVar26 = (Variant *)local_40;
    Variant::Variant(local_70,iVar2);
    local_58 = 0;
    local_50 = (undefined1  [16])0x0;
    local_e8 = (Variant *)local_b8;
    pVStack_e0 = (Variant *)local_a0;
    local_d8 = local_88;
    pVStack_d0 = local_70;
    (**(code **)(*(long *)this + 0xd0))(this,lVar18,&local_e8,4);
    do {
      pVVar1 = pVVar26 + -0x18;
      pVVar26 = pVVar26 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar26 != (Variant *)local_b8);
    lVar18 = *(long *)(lVar5 + 0x30);
    lVar23 = lVar23 + 1;
  } while (lVar18 != 0);
LAB_00101eeb:
  **(undefined1 **)(this + 0x6b8) = 0;
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  goto LAB_001020bb;
}



/* RigidBody3D::_body_exit_tree(ObjectID) */

void __thiscall RigidBody3D::_body_exit_tree(RigidBody3D *this,ulong param_2)

{
  Variant *pVVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  code *pcVar14;
  RID RVar15;
  Object *pOVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  ulong *puVar20;
  char *pcVar21;
  uint uVar22;
  long lVar23;
  undefined8 uVar24;
  ulong uVar25;
  Variant *pVVar26;
  ulong uVar27;
  uint uVar28;
  long in_FS_OFFSET;
  bool bVar29;
  ulong local_f0;
  Variant *local_e8;
  Variant *pVStack_e0;
  Variant *local_d8;
  Variant *pVStack_d0;
  int local_b8 [6];
  int local_a0 [2];
  undefined1 local_98 [16];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  uVar19 = (uint)param_2 & 0xffffff;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar19 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_f0 = local_f0 & 0xffffffffffffff00;
      LOCK();
      bVar29 = ObjectDB::spin_lock._0_1_ == (RID)0x0;
      RVar15 = ObjectDB::spin_lock._0_1_;
      if (bVar29) {
        ObjectDB::spin_lock._0_1_ = (RID)0x1;
        RVar15 = (RID)0x0;
      }
      UNLOCK();
      if (bVar29) break;
                    /* WARNING: Ignoring partial resolution of indirect */
      local_f0._0_1_ = RVar15;
      do {
      } while (ObjectDB::spin_lock._0_1_ != (RID)0x0);
    }
    puVar20 = (ulong *)((ulong)uVar19 * 0x10 + ObjectDB::object_slots);
    if ((param_2 >> 0x18 & 0x7fffffffff) == (*puVar20 & 0x7fffffffff)) {
      uVar17 = puVar20[1];
      ObjectDB::spin_lock._0_1_ = (RID)0x0;
      if ((uVar17 != 0) &&
         (pOVar16 = (Object *)__dynamic_cast(uVar17,&Object::typeinfo,&Node::typeinfo,0),
         pOVar16 != (Object *)0x0)) {
        puVar4 = *(undefined1 **)(this + 0x6b8);
        if (puVar4 == (undefined1 *)0x0) {
          if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001026cb;
          uVar24 = 0x3b;
          pcVar21 = "Parameter \"contact_monitor\" is null.";
          goto LAB_00102589;
        }
        lVar5 = *(long *)(puVar4 + 0x10);
        if ((lVar5 != 0) && (*(int *)(puVar4 + 0x34) != 0)) {
          uVar27 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(puVar4 + 0x30) * 4
                                       ));
          lVar18 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(puVar4 + 0x30) * 8);
          uVar17 = param_2 * 0x3ffff - 1;
          uVar17 = (uVar17 ^ uVar17 >> 0x1f) * 0x15;
          uVar17 = (uVar17 ^ uVar17 >> 0xb) * 0x41;
          uVar17 = uVar17 >> 0x16 ^ uVar17;
          uVar25 = uVar17 & 0xffffffff;
          if ((int)uVar17 == 0) {
            uVar25 = 1;
          }
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar25 * lVar18;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar27;
          lVar23 = SUB168(auVar6 * auVar10,8);
          uVar19 = *(uint *)(*(long *)(puVar4 + 0x18) + lVar23 * 4);
          uVar22 = SUB164(auVar6 * auVar10,8);
          if (uVar19 != 0) {
            uVar28 = 0;
            while ((uVar19 != (uint)uVar25 ||
                   (param_2 != *(ulong *)(*(long *)(lVar5 + lVar23 * 8) + 0x10)))) {
              uVar28 = uVar28 + 1;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)(uVar22 + 1) * lVar18;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = uVar27;
              lVar23 = SUB168(auVar7 * auVar11,8);
              uVar19 = *(uint *)(*(long *)(puVar4 + 0x18) + lVar23 * 4);
              uVar22 = SUB164(auVar7 * auVar11,8);
              if ((uVar19 == 0) ||
                 (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar19 * lVar18, auVar12._8_8_ = 0,
                 auVar12._0_8_ = uVar27, auVar9._8_8_ = 0,
                 auVar9._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                  (ulong)*(uint *)(puVar4 + 0x30) * 4) + uVar22) -
                                       SUB164(auVar8 * auVar12,8)) * lVar18, auVar13._8_8_ = 0,
                 auVar13._0_8_ = uVar27, SUB164(auVar9 * auVar13,8) < uVar28)) goto LAB_00102560;
            }
            lVar5 = *(long *)(lVar5 + (ulong)uVar22 * 8);
            if (lVar5 != 0) {
              if (*(char *)(lVar5 + 0x20) == '\0') {
                if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001026cb;
                uVar24 = 0x3e;
                pcVar21 = "Condition \"!E->value.in_tree\" is true.";
                goto LAB_00102589;
              }
              *(undefined1 *)(lVar5 + 0x20) = 0;
              lVar18 = SceneStringNames::singleton;
              *puVar4 = 1;
              Variant::Variant((Variant *)local_b8,pOVar16);
              local_a0[0] = 0;
              local_a0[1] = 0;
              local_98 = (undefined1  [16])0x0;
              local_e8 = (Variant *)local_b8;
              (**(code **)(*(long *)this + 0xd0))(this,lVar18 + 0x158,&local_e8,1);
              if (Variant::needs_deinit[local_a0[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_b8[0]] != '\0') {
                Variant::_clear_internal();
              }
              lVar18 = *(long *)(lVar5 + 0x30);
              if (lVar18 == 0) goto LAB_001024fb;
              lVar23 = 0;
              goto LAB_001023cb;
            }
          }
        }
LAB_00102560:
        if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar24 = 0x3d;
          pcVar21 = "Condition \"!E\" is true.";
          goto LAB_00102589;
        }
        goto LAB_001026cb;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = (RID)0x0;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar24 = 0x3a;
    pcVar21 = "Parameter \"node\" is null.";
LAB_00102589:
    _err_print_error("_body_exit_tree","scene/3d/physics/rigid_body_3d.cpp",uVar24,pcVar21,0,0);
    return;
  }
LAB_001026cb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001023cb:
  do {
    lVar18 = *(long *)(lVar18 + -8);
    if ((int)lVar18 <= (int)lVar23) break;
    if (lVar18 <= lVar23) {
LAB_001025b0:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,lVar23,lVar18,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar14 = (code *)invalidInstructionException();
      (*pcVar14)();
    }
    CowData<RigidBody3D::ShapePair>::_copy_on_write
              ((CowData<RigidBody3D::ShapePair> *)(lVar5 + 0x30));
    lVar18 = *(long *)(lVar5 + 0x30);
    iVar2 = *(int *)(lVar18 + 4 + lVar23 * 0xc);
    if (lVar18 == 0) {
      lVar18 = 0;
      goto LAB_001025b0;
    }
    lVar18 = *(long *)(lVar18 + -8);
    if (lVar18 <= lVar23) goto LAB_001025b0;
    CowData<RigidBody3D::ShapePair>::_copy_on_write
              ((CowData<RigidBody3D::ShapePair> *)(lVar5 + 0x30));
    iVar3 = *(int *)(*(long *)(lVar5 + 0x30) + lVar23 * 0xc);
    lVar18 = SceneStringNames::singleton + 0x150;
    local_f0 = *(ulong *)(lVar5 + 0x18);
    Variant::Variant((Variant *)local_b8,(RID *)&local_f0);
    Variant::Variant((Variant *)local_a0,pOVar16);
    Variant::Variant(local_88,iVar3);
    pVVar26 = (Variant *)local_40;
    Variant::Variant(local_70,iVar2);
    local_58 = 0;
    local_50 = (undefined1  [16])0x0;
    local_e8 = (Variant *)local_b8;
    pVStack_e0 = (Variant *)local_a0;
    local_d8 = local_88;
    pVStack_d0 = local_70;
    (**(code **)(*(long *)this + 0xd0))(this,lVar18,&local_e8,4);
    do {
      pVVar1 = pVVar26 + -0x18;
      pVVar26 = pVVar26 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar26 != (Variant *)local_b8);
    lVar18 = *(long *)(lVar5 + 0x30);
    lVar23 = lVar23 + 1;
  } while (lVar18 != 0);
LAB_001024fb:
  **(undefined1 **)(this + 0x6b8) = 0;
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  goto LAB_001026cb;
}



/* RigidBody3D::_sync_body_state(PhysicsDirectBodyState3D*) */

void __thiscall RigidBody3D::_sync_body_state(RigidBody3D *this,PhysicsDirectBodyState3D *param_1)

{
  long lVar1;
  RigidBody3D RVar2;
  RigidBody3D RVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [12];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined1 local_60 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)param_1;
  this[0x4d8] = (RigidBody3D)((byte)this[0x4d8] | 8);
  (**(code **)(lVar1 + 0x1c0))(&local_68);
  Node3D::set_global_transform((Transform3D *)this);
  lVar1 = *(long *)param_1;
  this[0x4d8] = (RigidBody3D)((byte)this[0x4d8] & 0xf7);
  auVar5 = (**(code **)(lVar1 + 0x1a0))(param_1);
  lVar1 = *(long *)param_1;
  *(undefined1 (*) [12])(this + 0x658) = auVar5;
  auVar5 = (**(code **)(lVar1 + 0x1b0))(param_1);
  lVar1 = *(long *)param_1;
  *(undefined1 (*) [12])(this + 0x664) = auVar5;
  (**(code **)(lVar1 + 400))(&local_98,param_1);
  *(undefined8 *)(this + 0x670) = local_98;
  *(undefined8 *)(this + 0x678) = uStack_90;
  *(undefined8 *)(this + 0x680) = local_88;
  *(undefined8 *)(this + 0x688) = uStack_80;
  *(undefined4 *)(this + 0x690) = local_78;
  uVar4 = (**(code **)(*(long *)param_1 + 0x248))(param_1);
  RVar3 = this[0x6a8];
  *(undefined4 *)(this + 0x6b0) = uVar4;
  RVar2 = (RigidBody3D)(**(code **)(*(long *)param_1 + 0x240))(param_1);
  if (RVar3 != RVar2) {
    RVar3 = (RigidBody3D)(**(code **)(*(long *)param_1 + 0x240))(param_1);
    this[0x6a8] = RVar3;
    local_68 = 0;
    local_60 = (undefined1  [16])0x0;
    (**(code **)(*(long *)this + 0xd0))(this,SceneStringNames::singleton + 0x78,0,0);
    if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RigidBody3D::_notification(int) */

void __thiscall RigidBody3D::_notification(RigidBody3D *this,int param_1)

{
  long lVar1;
  
  if (param_1 == 10) {
    lVar1 = Engine::get_singleton();
    if (*(char *)(lVar1 + 0xc0) != '\0') {
      Node3D::set_notify_local_transform(SUB81(this,0));
      return;
    }
  }
  else if (param_1 == 0x2c) {
    Node::update_configuration_warnings();
    return;
  }
  return;
}



/* RigidBody3D::_apply_body_mode() */

void __thiscall RigidBody3D::_apply_body_mode(RigidBody3D *this)

{
  if (this[0x624] == (RigidBody3D)0x0) {
    if (this[0x623] != (RigidBody3D)0x0) {
      CollisionObject3D::set_body_mode(this,3);
      return;
    }
    CollisionObject3D::set_body_mode(this,2);
    return;
  }
  if (*(int *)(this + 0x628) != 0) {
    if (*(int *)(this + 0x628) != 1) {
      return;
    }
    CollisionObject3D::set_body_mode(this,1);
    return;
  }
  CollisionObject3D::set_body_mode(this,0);
  return;
}



/* RigidBody3D::_validate_property(PropertyInfo&) const */

void __thiscall RigidBody3D::_validate_property(RigidBody3D *this,PropertyInfo *param_1)

{
  long lVar1;
  char cVar2;
  
  if ((*(int *)(this + 0x63c) == 1) ||
     (cVar2 = String::operator==((String *)(param_1 + 8),"center_of_mass"), cVar2 == '\0')) {
    lVar1 = *(long *)(this + 0x6b8);
  }
  else {
    lVar1 = *(long *)(this + 0x6b8);
    *(undefined4 *)(param_1 + 0x28) = 2;
  }
  if ((lVar1 == 0) &&
     (cVar2 = String::operator==((String *)(param_1 + 8),"max_contacts_reported"), cVar2 != '\0')) {
    *(undefined4 *)(param_1 + 0x28) = 2;
  }
  return;
}



/* RigidBody3D::RigidBody3D() */

void __thiscall RigidBody3D::RigidBody3D(RigidBody3D *this)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  CallableCustom *this_00;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  Callable aCStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  PhysicsBody3D::PhysicsBody3D((PhysicsBody3D *)this,2);
  this[0x624] = (RigidBody3D)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00120258;
  auVar4 = ZEXT416(_LC0);
  *(undefined2 *)(this + 0x622) = 1;
  *(undefined8 *)(this + 0x628) = 0x3f80000000000000;
  uVar2 = _LC16;
  *(undefined2 *)(this + 0x6a8) = 0;
  *(undefined8 *)(this + 0x690) = uVar2;
  *(undefined8 *)(this + 0x630) = 0;
  *(undefined4 *)(this + 0x638) = 0;
  *(undefined4 *)(this + 0x63c) = 0;
  *(undefined8 *)(this + 0x640) = 0;
  *(undefined4 *)(this + 0x648) = 0;
  *(undefined8 *)(this + 0x650) = 0;
  *(undefined8 *)(this + 0x658) = 0;
  *(undefined4 *)(this + 0x660) = 0;
  *(undefined8 *)(this + 0x664) = 0;
  *(undefined4 *)(this + 0x66c) = 0;
  *(undefined8 *)(this + 0x698) = 0;
  *(undefined8 *)(this + 0x6a0) = 0;
  *(undefined8 *)(this + 0x6ac) = 0;
  this[0x6b4] = (RigidBody3D)0x0;
  *(undefined8 *)(this + 0x6b8) = 0;
  *(undefined1 (*) [16])(this + 0x670) = auVar4;
  *(undefined1 (*) [16])(this + 0x680) = auVar4;
  StringName::StringName((StringName *)(this + 0x6c0),"_integrate_forces",false);
  this[0x6c8] = (RigidBody3D)0x0;
  *(undefined8 *)(this + 0x6d0) = 0;
  plVar3 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar3 + 0x4b8);
  this_00 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_00);
  *(undefined **)(this_00 + 0x20) = &_LC36;
  *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined ***)this_00 = &PTR_hash_001205a0;
  uVar2 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x30) = uVar2;
  *(RigidBody3D **)(this_00 + 0x28) = this;
  *(undefined8 *)(this_00 + 0x38) = 0x211;
  CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
  *(char **)(this_00 + 0x20) = "RigidBody3D::_body_state_changed";
  Callable::Callable(aCStack_48,this_00);
  (*pcVar1)(plVar3,*(undefined8 *)(this + 0x538),aCStack_48);
  Callable::~Callable(aCStack_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RigidBody3D::set_physics_material_override(Ref<PhysicsMaterial> const&) */

void __thiscall RigidBody3D::set_physics_material_override(RigidBody3D *this,Ref *param_1)

{
  Callable *pCVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  RigidBody3D aRStack_48 [24];
  long local_30;
  
  pCVar1 = *(Callable **)(this + 0x650);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pCVar1 == (Callable *)0x0) {
    if (*(long *)param_1 == 0) goto LAB_00102c70;
    *(long *)(this + 0x650) = *(long *)param_1;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      pOVar4 = (Object *)0x0;
LAB_00102c10:
      *(undefined8 *)(this + 0x650) = 0;
      goto LAB_00102c1b;
    }
LAB_00102c30:
    pOVar4 = *(Object **)(this + 0x650);
  }
  else {
    create_custom_callable_function_pointer<RigidBody3D>
              (aRStack_48,(char *)this,(_func_void *)"&RigidBody3D::_reload_physics_characteristics"
              );
    Resource::disconnect_changed(pCVar1);
    Callable::~Callable((Callable *)aRStack_48);
    pOVar2 = *(Object **)param_1;
    pOVar4 = *(Object **)(this + 0x650);
    if (pOVar2 != pOVar4) {
      *(Object **)(this + 0x650) = pOVar2;
      if (pOVar2 == (Object *)0x0) {
LAB_00102c1b:
        if (pOVar4 == (Object *)0x0) goto LAB_00102c70;
      }
      else {
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') goto LAB_00102c10;
        if (pOVar4 == (Object *)0x0) goto LAB_00102c30;
      }
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar4), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
      goto LAB_00102c30;
    }
  }
  if (pOVar4 != (Object *)0x0) {
    create_custom_callable_function_pointer<RigidBody3D>
              (aRStack_48,(char *)this,(_func_void *)"&RigidBody3D::_reload_physics_characteristics"
              );
    Resource::connect_changed((Callable *)pOVar4,(uint)aRStack_48);
    Callable::~Callable((Callable *)aRStack_48);
  }
LAB_00102c70:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  _reload_physics_characteristics(this);
  return;
}



/* RigidBody3D::set_contact_monitor(bool) */

void __thiscall RigidBody3D::set_contact_monitor(RigidBody3D *this,bool param_1)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulong *puVar6;
  ContactMonitor *pCVar7;
  long *plVar8;
  long in_FS_OFFSET;
  bool bVar9;
  RigidBody3D local_58 [24];
  long local_40;
  
  pCVar7 = *(ContactMonitor **)(this + 0x6b8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (pCVar7 != (ContactMonitor *)0x0)) {
LAB_00102f7b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    if (param_1) {
      puVar4 = (undefined1 *)operator_new(0x38,"");
      *(undefined8 *)(puVar4 + 0x30) = 2;
      *(undefined1 (*) [16])(puVar4 + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar4 + 0x20) = (undefined1  [16])0x0;
      *(undefined1 **)(this + 0x6b8) = puVar4;
      *puVar4 = 0;
    }
    else {
      if (*pCVar7 != (ContactMonitor)0x0) {
        _err_print_error("set_contact_monitor","scene/3d/physics/rigid_body_3d.cpp",0x25e,
                         "Condition \"contact_monitor->locked\" is true.",
                         "Can\'t disable contact monitoring during in/out callback. Use call_deferred(\"set_contact_monitor\", false) instead."
                         ,0,0);
        goto LAB_00102f7b;
      }
      plVar8 = *(long **)(pCVar7 + 0x20);
      if (plVar8 != (long *)0x0) {
        do {
          uVar5 = (uint)plVar8[2] & 0xffffff;
          if (uVar5 < (uint)ObjectDB::slot_max) {
            while( true ) {
              local_58[0] = (RigidBody3D)0x0;
              LOCK();
              bVar9 = (char)ObjectDB::spin_lock == '\0';
              if (bVar9) {
                ObjectDB::spin_lock._0_1_ = '\x01';
              }
              UNLOCK();
              if (bVar9) break;
              do {
              } while ((char)ObjectDB::spin_lock != '\0');
            }
            puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
            if (((ulong)plVar8[2] >> 0x18 & 0x7fffffffff) == (*puVar6 & 0x7fffffffff)) {
              uVar1 = puVar6[1];
              ObjectDB::spin_lock._0_1_ = '\0';
              if ((uVar1 != 0) &&
                 (plVar3 = (long *)__dynamic_cast(uVar1,&Object::typeinfo,&Node::typeinfo,0),
                 plVar3 != (long *)0x0)) {
                pcVar2 = *(code **)(*plVar3 + 0x110);
                create_custom_callable_function_pointer<RigidBody3D,ObjectID>
                          (local_58,(char *)this,
                           (_func_void_ObjectID *)"&RigidBody3D::_body_enter_tree");
                (*pcVar2)(plVar3,SceneStringNames::singleton + 0x38,local_58);
                Callable::~Callable((Callable *)local_58);
                pcVar2 = *(code **)(*plVar3 + 0x110);
                create_custom_callable_function_pointer<RigidBody3D,ObjectID>
                          (local_58,(char *)this,
                           (_func_void_ObjectID *)"&RigidBody3D::_body_exit_tree");
                (*pcVar2)(plVar3,SceneStringNames::singleton + 0x40,local_58);
                Callable::~Callable((Callable *)local_58);
              }
            }
            else {
              ObjectDB::spin_lock._0_1_ = '\0';
            }
          }
          else {
            _err_print_error("get_instance","./core/object/object.h",0x418,
                             "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
        pCVar7 = *(ContactMonitor **)(this + 0x6b8);
      }
      memdelete<RigidBody3D::ContactMonitor>(pCVar7);
      *(undefined8 *)(this + 0x6b8) = 0;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Object::notify_property_list_changed();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RigidBody3D::~RigidBody3D() */

void __thiscall RigidBody3D::~RigidBody3D(RigidBody3D *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00120258;
  if (*(ContactMonitor **)(this + 0x6b8) != (ContactMonitor *)0x0) {
    memdelete<RigidBody3D::ContactMonitor>(*(ContactMonitor **)(this + 0x6b8));
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x6c0) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x650) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x650);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(code **)this = D_METHODP;
  if (*(long *)(this + 0x618) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x618);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        CollisionObject3D::~CollisionObject3D((CollisionObject3D *)this);
        return;
      }
    }
  }
  CollisionObject3D::~CollisionObject3D((CollisionObject3D *)this);
  return;
}



/* RigidBody3D::~RigidBody3D() */

void __thiscall RigidBody3D::~RigidBody3D(RigidBody3D *this)

{
  ~RigidBody3D(this);
  operator_delete(this,0x6d8);
  return;
}



/* RigidBody3D::get_colliding_bodies() const */

Array * RigidBody3D::get_colliding_bodies(void)

{
  Object *pOVar1;
  ulong uVar2;
  Variant *pVVar3;
  uint uVar4;
  ulong *puVar5;
  long in_RSI;
  uint uVar6;
  Array *in_RDI;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  bool bVar8;
  Array local_78 [8];
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 0x6b8) == 0) {
    _err_print_error("get_colliding_bodies","scene/3d/physics/rigid_body_3d.cpp",0x27a,
                     "Parameter \"contact_monitor\" is null.",0,0);
    Array::Array(in_RDI);
    local_50 = (undefined1  [16])0x0;
    local_68 = "Node3D";
    local_58 = 0;
    local_70 = 0;
    local_60 = 6;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_68,(StrRange *)&local_70,false);
    Array::set_typed((uint)in_RDI,(StringName *)0x18,(Variant *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
LAB_00103338:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return in_RDI;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  Array::Array(local_78);
  local_50 = (undefined1  [16])0x0;
  local_68 = "Node3D";
  local_58 = 0;
  local_70 = 0;
  local_60 = 6;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_68,(StrRange *)&local_70,false);
  uVar6 = (uint)local_78;
  Array::set_typed(uVar6,(StringName *)0x18,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  Array::resize(uVar6);
  puVar7 = *(undefined8 **)(*(long *)(in_RSI + 0x6b8) + 0x20);
joined_r0x001031d6:
  if (puVar7 != (undefined8 *)0x0) {
    do {
      uVar4 = (uint)puVar7[2] & 0xffffff;
      if (uVar4 < (uint)ObjectDB::slot_max) {
        while( true ) {
          uVar2 = (ulong)local_68 >> 8;
          local_68 = (char *)(uVar2 << 8);
          LOCK();
          bVar8 = (char)ObjectDB::spin_lock == '\0';
          if (bVar8) {
            ObjectDB::spin_lock._0_1_ = '\x01';
          }
          UNLOCK();
          if (bVar8) break;
          local_68 = (char *)(uVar2 << 8);
          do {
          } while ((char)ObjectDB::spin_lock != '\0');
        }
        puVar5 = (ulong *)((ulong)uVar4 * 0x10 + ObjectDB::object_slots);
        if (((ulong)puVar7[2] >> 0x18 & 0x7fffffffff) == (*puVar5 & 0x7fffffffff)) {
          pOVar1 = (Object *)puVar5[1];
          ObjectDB::spin_lock._0_1_ = '\0';
          if (pOVar1 != (Object *)0x0) goto code_r0x00103225;
        }
        else {
          ObjectDB::spin_lock._0_1_ = '\0';
        }
      }
      else {
        _err_print_error("get_instance","./core/object/object.h",0x418,
                         "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
      }
      Array::size();
      Array::resize(uVar6);
      puVar7 = (undefined8 *)*puVar7;
      if (puVar7 == (undefined8 *)0x0) break;
    } while( true );
  }
  Array::Array(in_RDI,local_78);
  Array::~Array(local_78);
  goto LAB_00103338;
code_r0x00103225:
  Variant::Variant((Variant *)&local_58,pOVar1);
  pVVar3 = (Variant *)Array::operator[](uVar6);
  if (pVVar3 == (Variant *)&local_58) {
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = (int)local_58;
    *(undefined8 *)(pVVar3 + 8) = local_50._0_8_;
    *(undefined8 *)(pVVar3 + 0x10) = local_50._8_8_;
  }
  puVar7 = (undefined8 *)*puVar7;
  goto joined_r0x001031d6;
}



/* MethodBind* ClassDB::bind_method<MethodDefinition, void (RigidBody3D::*)(Vector3
   const&)>(MethodDefinition, void (RigidBody3D::*)(Vector3 const&)) [clone .isra.0] */

MethodBind *
ClassDB::bind_method<MethodDefinition,void(RigidBody3D::*)(Vector3_const&)>
          (MethodDefinition *param_1,_func_void_Vector3_ptr *param_2)

{
  long lVar1;
  MethodBind *pMVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pMVar2 = create_method_bind<RigidBody3D,Vector3_const&>(param_2);
  ClassDB::bind_methodfi(1,pMVar2,false,param_1,(Variant **)0x0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (MethodBind *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<String>::_copy_on_write(CowData<String> *this)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  CowData<char32_t> *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar7 = lVar2 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        lVar3 = *(long *)this;
        *(undefined8 *)this_00 = 0;
        pCVar1 = (CowData *)(lVar3 + lVar6 * 8);
        if (*(long *)pCVar1 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar1);
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 8;
      } while (lVar2 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Vector<String>::push_back(String) [clone .isra.0] */

void __thiscall Vector<String>::push_back(Vector<String> *this,CowData *param_2)

{
  CowData<char32_t> *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<String>::resize<false>((CowData<String> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar3 * 8);
        if (*(long *)this_00 == *(long *)param_2) {
          return;
        }
        CowData<char32_t>::_ref(this_00,param_2);
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RigidBody3D::get_configuration_warnings() const */

RigidBody3D * __thiscall RigidBody3D::get_configuration_warnings(RigidBody3D *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  double dVar4;
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  undefined1 local_74 [68];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  CollisionObject3D::get_configuration_warnings();
  Node3D::get_transform();
  local_74._0_12_ = Basis::get_scale();
  dVar4 = (double)(float)local_74._0_4_ - _LC93;
  if (dVar4 < 0.0) {
    dVar4 = (double)((ulong)dVar4 ^ __LC95);
  }
  if (dVar4 <= _LC96) {
    dVar4 = (double)(float)local_74._4_4_ - _LC93;
    if (dVar4 < 0.0) {
      dVar4 = (double)((ulong)dVar4 ^ __LC95);
    }
    if (dVar4 <= _LC96) {
      dVar4 = (double)SUB124(local_74._0_12_,8) - _LC93;
      if (dVar4 < 0.0) {
        dVar4 = (double)((ulong)dVar4 ^ __LC95);
      }
      if (dVar4 <= _LC96) goto LAB_001038ad;
    }
  }
  local_90 = 0;
  local_80 = 0;
  local_88 = "";
  String::parse_latin1((StrRange *)&local_90);
  local_88 = 
  "Scale changes to RigidBody3D will be overridden by the physics engine when running.\nPlease change the size in children collision shapes instead."
  ;
  local_98 = 0;
  local_80 = 0x90;
  String::parse_latin1((StrRange *)&local_98);
  RTR((String *)&local_88,(String *)&local_98);
  Vector<String>::push_back((Vector<String> *)this);
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
LAB_001038ad:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* Vector<int>::push_back(int) [clone .isra.0] */

void __thiscall Vector<int>::push_back(Vector<int> *this,int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<int>::resize<false>((CowData<int> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
        *(int *)(*(long *)(this + 8) + lVar3 * 4) = param_1;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* RigidBody3D::_bind_methods() */

void RigidBody3D::_bind_methods(void)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puVar8;
  MethodBind *pMVar9;
  undefined *puVar10;
  uint uVar11;
  long in_FS_OFFSET;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  long local_288;
  undefined8 local_280;
  undefined8 local_278;
  long local_270;
  undefined8 local_268;
  undefined8 local_260;
  long local_258;
  undefined8 local_250;
  undefined8 local_248;
  long local_240;
  undefined8 local_238;
  long local_230;
  long local_228 [6];
  long local_1f8 [6];
  long local_1c8;
  undefined8 local_1c0 [5];
  char *local_198;
  undefined8 local_190;
  StringName local_188 [8];
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  char *local_168;
  long local_160;
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128 [2];
  undefined8 local_118;
  undefined8 local_110;
  Vector<int> local_108 [8];
  undefined8 local_100;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  char *local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  char *local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  Variant *local_98;
  char *pcStack_90;
  undefined8 local_88;
  Vector3 *local_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  puVar8 = PTR__LC104_001210a0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHOD<char_const*>((char *)&local_168,"set_mass");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,float>(set_mass);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"get_mass",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,float>(get_mass);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"set_inertia");
  ClassDB::bind_method<MethodDefinition,void(RigidBody3D::*)(Vector3_const&)>
            ((MethodDefinition *)&local_168,set_inertia,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"get_inertia",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,Vector3_const&>(get_inertia);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"set_center_of_mass_mode");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,RigidBody3D::CenterOfMassMode>(set_center_of_mass_mode);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"get_center_of_mass_mode",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,RigidBody3D::CenterOfMassMode>(get_center_of_mass_mode);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"set_center_of_mass");
  ClassDB::bind_method<MethodDefinition,void(RigidBody3D::*)(Vector3_const&)>
            ((MethodDefinition *)&local_168,set_center_of_mass,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"get_center_of_mass",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,Vector3_const&>(get_center_of_mass);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"set_physics_material_override");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,Ref<PhysicsMaterial>const&>(set_physics_material_override)
  ;
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"get_physics_material_override",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,Ref<PhysicsMaterial>>(get_physics_material_override);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"set_linear_velocity");
  ClassDB::bind_method<MethodDefinition,void(RigidBody3D::*)(Vector3_const&)>
            ((MethodDefinition *)&local_168,set_linear_velocity,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"get_linear_velocity",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,Vector3>((_func_Vector3 *)0x1f9);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"set_angular_velocity");
  ClassDB::bind_method<MethodDefinition,void(RigidBody3D::*)(Vector3_const&)>
            ((MethodDefinition *)&local_168,set_angular_velocity,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"get_angular_velocity",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,Vector3>((_func_Vector3 *)0x201);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"get_inverse_inertia_tensor",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,Basis>(get_inverse_inertia_tensor);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"set_gravity_scale");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,float>(set_gravity_scale);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"get_gravity_scale",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,float>(get_gravity_scale);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"set_linear_damp_mode");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,RigidBody3D::DampMode>(set_linear_damp_mode);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"get_linear_damp_mode",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,RigidBody3D::DampMode>(get_linear_damp_mode);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"set_angular_damp_mode");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,RigidBody3D::DampMode>(set_angular_damp_mode);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"get_angular_damp_mode",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,RigidBody3D::DampMode>(get_angular_damp_mode);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"set_linear_damp");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,float>(set_linear_damp);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"get_linear_damp",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,float>(get_linear_damp);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"set_angular_damp");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,float>(set_angular_damp);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"get_angular_damp",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,float>(get_angular_damp);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"set_max_contacts_reported");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,int>(set_max_contacts_reported);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"get_max_contacts_reported",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,int>(get_max_contacts_reported);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"get_contact_count",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,int>(get_contact_count);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"set_use_custom_integrator");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,bool>(set_use_custom_integrator);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"is_using_custom_integrator",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,bool>(is_using_custom_integrator);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"set_contact_monitor");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,bool>(set_contact_monitor);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"is_contact_monitor_enabled",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,bool>(is_contact_monitor_enabled);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"set_use_continuous_collision_detection");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,bool>(set_use_continuous_collision_detection);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"is_using_continuous_collision_detection",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,bool>(is_using_continuous_collision_detection);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"set_axis_velocity");
  ClassDB::bind_method<MethodDefinition,void(RigidBody3D::*)(Vector3_const&)>
            ((MethodDefinition *)&local_168,set_axis_velocity,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"apply_central_impulse");
  ClassDB::bind_method<MethodDefinition,void(RigidBody3D::*)(Vector3_const&)>
            ((MethodDefinition *)&local_168,apply_central_impulse,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  local_f0 = 0;
  local_e8 = 0;
  local_98 = (Variant *)puVar8;
  pcStack_90 = "position";
  auStack_70._0_8_ = &pcStack_90;
  local_88 = 0;
  uVar11 = (uint)(Variant *)&local_78;
  local_78 = (Vector3 *)&local_98;
  D_METHODP((char *)&local_168,(char ***)"apply_impulse",uVar11);
  local_e4 = local_f0;
  local_dc = local_e8;
  Variant::Variant((Variant *)&local_78,(Vector3 *)&local_e4);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar9 = create_method_bind<RigidBody3D,Vector3_const&,Vector3_const&>(apply_impulse);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,&local_98,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"apply_torque_impulse");
  ClassDB::bind_method<MethodDefinition,void(RigidBody3D::*)(Vector3_const&)>
            ((MethodDefinition *)&local_168,apply_torque_impulse,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"apply_central_force");
  ClassDB::bind_method<MethodDefinition,void(RigidBody3D::*)(Vector3_const&)>
            ((MethodDefinition *)&local_168,apply_central_force,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  local_e4 = 0;
  local_b8 = "force";
  pcStack_b0 = "position";
  auStack_70._0_8_ = &pcStack_b0;
  local_dc = 0;
  local_a8 = 0;
  local_78 = (Vector3 *)&local_b8;
  D_METHODP((char *)&local_168,(char ***)"apply_force",uVar11);
  local_b8 = (char *)local_e4;
  pcStack_b0 = (char *)CONCAT44(pcStack_b0._4_4_,local_dc);
  Variant::Variant((Variant *)&local_78,(Vector3 *)&local_b8);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar9 = create_method_bind<RigidBody3D,Vector3_const&,Vector3_const&>(apply_force);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,&local_98,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"apply_torque");
  ClassDB::bind_method<MethodDefinition,void(RigidBody3D::*)(Vector3_const&)>
            ((MethodDefinition *)&local_168,apply_torque,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"add_constant_central_force");
  ClassDB::bind_method<MethodDefinition,void(RigidBody3D::*)(Vector3_const&)>
            ((MethodDefinition *)&local_168,add_constant_central_force,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  local_e4 = 0;
  local_d8 = "force";
  pcStack_d0 = "position";
  auStack_70._0_8_ = &pcStack_d0;
  local_dc = 0;
  local_c8 = 0;
  local_78 = (Vector3 *)&local_d8;
  D_METHODP((char *)&local_168,(char ***)"add_constant_force",uVar11);
  local_b8 = (char *)local_e4;
  pcStack_b0 = (char *)CONCAT44(pcStack_b0._4_4_,local_dc);
  Variant::Variant((Variant *)&local_78,(Vector3 *)&local_b8);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar9 = create_method_bind<RigidBody3D,Vector3_const&,Vector3_const&>(add_constant_force);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,&local_98,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"add_constant_torque");
  ClassDB::bind_method<MethodDefinition,void(RigidBody3D::*)(Vector3_const&)>
            ((MethodDefinition *)&local_168,add_constant_torque,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"set_constant_force");
  ClassDB::bind_method<MethodDefinition,void(RigidBody3D::*)(Vector3_const&)>
            ((MethodDefinition *)&local_168,set_constant_force,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"get_constant_force",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,Vector3>(get_constant_force);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"set_constant_torque");
  ClassDB::bind_method<MethodDefinition,void(RigidBody3D::*)(Vector3_const&)>
            ((MethodDefinition *)&local_168,set_constant_torque,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"get_constant_torque",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,Vector3>(get_constant_torque);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"set_sleeping");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,bool>(set_sleeping);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"is_sleeping",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,bool>(is_sleeping);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"set_can_sleep");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,bool>(set_can_sleep);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"is_able_to_sleep",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,bool>(is_able_to_sleep);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"set_lock_rotation_enabled");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,bool>(set_lock_rotation_enabled);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"is_lock_rotation_enabled",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,bool>(is_lock_rotation_enabled);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"set_freeze_enabled");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,bool>(set_freeze_enabled);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"is_freeze_enabled",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,bool>(is_freeze_enabled);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHOD<char_const*>((char *)&local_168,"set_freeze_mode");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,RigidBody3D::FreezeMode>(set_freeze_mode);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"get_freeze_mode",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,RigidBody3D::FreezeMode>(get_freeze_mode);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"get_colliding_bodies",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Vector3 *)0x0;
  pMVar9 = create_method_bind<RigidBody3D,TypedArray<Node3D>>(get_colliding_bodies);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  local_1c0[0] = 0;
  local_168 = (char *)0x0;
  String::parse_latin1((String *)&local_168,"state");
  local_198 = (char *)0x0;
  if (local_168 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_198,(CowData *)&local_168);
  }
  Vector<String>::push_back((Vector<String> *)&local_1c8,(CowData<char32_t> *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  local_158 = (undefined1  [16])0x0;
  local_168 = (char *)0x0;
  local_160 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 6;
  local_130 = 1;
  local_128[0] = 0;
  local_118 = 0;
  local_110 = 0;
  local_100 = 0;
  String::parse_latin1((String *)&local_168,"_integrate_forces");
  local_198 = "PhysicsDirectBodyState3D";
  local_130 = CONCAT44(local_130._4_4_,8);
  local_1f8[0] = 0;
  local_190 = 0x18;
  String::parse_latin1((StrRange *)local_1f8);
  StringName::StringName((StringName *)local_228,(StrRange *)local_1f8,false);
  local_198 = (char *)CONCAT44(local_198._4_4_,0x18);
  local_190 = 0;
  StringName::StringName(local_188,(StringName *)local_228);
  local_180 = 0;
  local_178 = 0;
  local_170 = 6;
  if ((StringName::configured != '\0') && (local_228[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1f8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_128,(PropertyInfo *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_198);
  Vector<int>::push_back(local_108,0);
  local_1f8[0] = 0;
  String::parse_latin1((String *)local_1f8,"RigidBody3D");
  StringName::StringName((StringName *)&local_198,(StrRange *)local_1f8,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_198,(MethodInfo *)&local_168,true,(Vector *)&local_1c8,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1f8);
  MethodInfo::~MethodInfo((MethodInfo *)&local_168);
  CowData<String>::_unref((CowData<String> *)local_1c0);
  _scs_create((char *)&local_1c8,true);
  _scs_create((char *)local_1f8,true);
  local_228[0] = 0;
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"0.001,1000,0.001,or_greater,exp,suffix:kg");
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"mass");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_168,3,(String *)&local_238,1,(String *)&local_230,6,
             (StringName *)local_228);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"RigidBody3D");
  StringName::StringName((StringName *)&local_198,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_198,(PropertyInfo *)&local_168,(StringName *)local_1f8,
             (StringName *)&local_1c8,-1);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_1f8[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1c8 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_1c8,true);
  _scs_create((char *)local_1f8,true);
  local_228[0] = 0;
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"PhysicsMaterial");
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"physics_material_override");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_168,0x18,(String *)&local_238,0x11,(String *)&local_230,6,
             (StringName *)local_228);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"RigidBody3D");
  StringName::StringName((StringName *)&local_198,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_198,(PropertyInfo *)&local_168,(StringName *)local_1f8,
             (StringName *)&local_1c8,-1);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_1f8[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1c8 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_1c8,true);
  _scs_create((char *)local_1f8,true);
  local_228[0] = 0;
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"-8,8,0.001,or_less,or_greater");
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"gravity_scale");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_168,3,(String *)&local_238,1,(String *)&local_230,6,
             (StringName *)local_228);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"RigidBody3D");
  StringName::StringName((StringName *)&local_198,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_198,(PropertyInfo *)&local_168,(StringName *)local_1f8,
             (StringName *)&local_1c8,-1);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_1f8[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1c8 != 0)) {
    StringName::unref();
  }
  local_168 = (char *)0x0;
  String::parse_latin1((String *)&local_168,"");
  local_198 = (char *)0x0;
  String::parse_latin1((String *)&local_198,"Mass Distribution");
  local_1f8[0] = 0;
  String::parse_latin1((String *)local_1f8,"RigidBody3D");
  StringName::StringName((StringName *)&local_1c8,(StrRange *)local_1f8,false);
  ClassDB::add_property_group((StringName *)&local_1c8,(String *)&local_198,(String *)&local_168,0);
  if ((StringName::configured != '\0') && (local_1c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  _scs_create((char *)&local_1c8,true);
  _scs_create((char *)local_1f8,true);
  local_228[0] = 0;
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"Auto,Custom");
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"center_of_mass_mode");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_168,2,(String *)&local_238,2,(String *)&local_230,6,
             (StringName *)local_228);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"RigidBody3D");
  StringName::StringName((StringName *)&local_198,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_198,(PropertyInfo *)&local_168,(StringName *)local_1f8,
             (StringName *)&local_1c8,-1);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if (((StringName::configured != '\0') &&
      ((local_228[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_1f8[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_1c8 != 0)))) {
    StringName::unref();
  }
  _scs_create((char *)&local_1c8,true);
  _scs_create((char *)local_1f8,true);
  local_228[0] = 0;
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"-10,10,0.01,or_less,or_greater,suffix:m");
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"center_of_mass");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_168,9,(String *)&local_238,1,(String *)&local_230,6,
             (StringName *)local_228);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"RigidBody3D");
  StringName::StringName((StringName *)&local_198,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_198,(PropertyInfo *)&local_168,(StringName *)local_1f8,
             (StringName *)&local_1c8,-1);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_1f8[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1c8 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_1c8,true);
  _scs_create((char *)local_1f8,true);
  local_228[0] = 0;
  local_230 = 0;
  puVar8 = &_LC98;
  do {
    puVar10 = puVar8;
    puVar8 = puVar10 + 4;
  } while (*(int *)(puVar10 + 4) != 0);
  local_168 = "0";
  local_160 = (long)(puVar10 + -0x1158d4) >> 2;
  String::parse_utf32((StrRange *)&local_230);
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"inertia");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_168,9,(String *)&local_238,1,(String *)&local_230,6,
             (StringName *)local_228);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"RigidBody3D");
  StringName::StringName((StringName *)&local_198,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_198,(PropertyInfo *)&local_168,(StringName *)local_1f8,
             (StringName *)&local_1c8,-1);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_1f8[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1c8 != 0)) {
    StringName::unref();
  }
  local_168 = (char *)0x0;
  String::parse_latin1((String *)&local_168,"");
  local_198 = (char *)0x0;
  String::parse_latin1((String *)&local_198,"Deactivation");
  local_1f8[0] = 0;
  String::parse_latin1((String *)local_1f8,"RigidBody3D");
  StringName::StringName((StringName *)&local_1c8,(StrRange *)local_1f8,false);
  ClassDB::add_property_group((StringName *)&local_1c8,(String *)&local_198,(String *)&local_168,0);
  if ((StringName::configured != '\0') && (local_1c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  _scs_create((char *)&local_1c8,true);
  _scs_create((char *)local_1f8,true);
  local_228[0] = 0;
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"");
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"sleeping");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_168,1,(String *)&local_238,0,(String *)&local_230,6,
             (StringName *)local_228);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"RigidBody3D");
  StringName::StringName((StringName *)&local_198,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_198,(PropertyInfo *)&local_168,(StringName *)local_1f8,
             (StringName *)&local_1c8,-1);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_1f8[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1c8 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_1c8,true);
  _scs_create((char *)local_1f8,true);
  local_228[0] = 0;
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"");
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"can_sleep");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_168,1,(String *)&local_238,0,(String *)&local_230,6,
             (StringName *)local_228);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"RigidBody3D");
  StringName::StringName((StringName *)&local_198,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_198,(PropertyInfo *)&local_168,(StringName *)local_1f8,
             (StringName *)&local_1c8,-1);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_1f8[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1c8 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_1c8,true);
  _scs_create((char *)local_1f8,true);
  local_228[0] = 0;
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"");
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"lock_rotation");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_168,1,(String *)&local_238,0,(String *)&local_230,6,
             (StringName *)local_228);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"RigidBody3D");
  StringName::StringName((StringName *)&local_198,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_198,(PropertyInfo *)&local_168,(StringName *)local_1f8,
             (StringName *)&local_1c8,-1);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_1f8[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1c8 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_1c8,true);
  _scs_create((char *)local_1f8,true);
  local_228[0] = 0;
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"");
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"freeze");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_168,1,(String *)&local_238,0,(String *)&local_230,6,
             (StringName *)local_228);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"RigidBody3D");
  StringName::StringName((StringName *)&local_198,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_198,(PropertyInfo *)&local_168,(StringName *)local_1f8,
             (StringName *)&local_1c8,-1);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if (((StringName::configured != '\0') &&
      ((local_228[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_1f8[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_1c8 != 0)))) {
    StringName::unref();
  }
  _scs_create((char *)&local_1c8,true);
  _scs_create((char *)local_1f8,true);
  local_228[0] = 0;
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"Static,Kinematic");
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"freeze_mode");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_168,2,(String *)&local_238,2,(String *)&local_230,6,
             (StringName *)local_228);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"RigidBody3D");
  StringName::StringName((StringName *)&local_198,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_198,(PropertyInfo *)&local_168,(StringName *)local_1f8,
             (StringName *)&local_1c8,-1);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_1f8[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1c8 != 0)) {
    StringName::unref();
  }
  local_168 = (char *)0x0;
  String::parse_latin1((String *)&local_168,"");
  local_198 = (char *)0x0;
  String::parse_latin1((String *)&local_198,"Solver");
  local_1f8[0] = 0;
  String::parse_latin1((String *)local_1f8,"RigidBody3D");
  StringName::StringName((StringName *)&local_1c8,(StrRange *)local_1f8,false);
  ClassDB::add_property_group((StringName *)&local_1c8,(String *)&local_198,(String *)&local_168,0);
  if ((StringName::configured != '\0') && (local_1c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  _scs_create((char *)&local_1c8,true);
  _scs_create((char *)local_1f8,true);
  local_228[0] = 0;
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"");
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"custom_integrator");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_168,1,(String *)&local_238,0,(String *)&local_230,6,
             (StringName *)local_228);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"RigidBody3D");
  StringName::StringName((StringName *)&local_198,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_198,(PropertyInfo *)&local_168,(StringName *)local_1f8,
             (StringName *)&local_1c8,-1);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if (((StringName::configured != '\0') &&
      ((local_228[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_1f8[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_1c8 != 0)))) {
    StringName::unref();
  }
  _scs_create((char *)&local_1c8,true);
  _scs_create((char *)local_1f8,true);
  local_228[0] = 0;
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"");
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"continuous_cd");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_168,1,(String *)&local_238,0,(String *)&local_230,6,
             (StringName *)local_228);
  local_198 = "RigidBody3D";
  local_240 = 0;
  local_190 = 0xb;
  String::parse_latin1((StrRange *)&local_240);
  StringName::StringName((StringName *)&local_198,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_198,(PropertyInfo *)&local_168,(StringName *)local_1f8,
             (StringName *)&local_1c8,-1);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_1f8[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1c8 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_1c8,true);
  _scs_create((char *)local_1f8,true);
  local_228[0] = 0;
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"");
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"contact_monitor");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_168,1,(String *)&local_238,0,(String *)&local_230,6,
             (StringName *)local_228);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"RigidBody3D");
  StringName::StringName((StringName *)&local_198,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_198,(PropertyInfo *)&local_168,(StringName *)local_1f8,
             (StringName *)&local_1c8,-1);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_1f8[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1c8 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_1c8,true);
  _scs_create((char *)local_1f8,true);
  local_228[0] = 0;
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"0,64,1,or_greater");
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"max_contacts_reported");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_168,2,(String *)&local_238,1,(String *)&local_230,6,
             (StringName *)local_228);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"RigidBody3D");
  StringName::StringName((StringName *)&local_198,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_198,(PropertyInfo *)&local_168,(StringName *)local_1f8,
             (StringName *)&local_1c8,-1);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_1f8[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1c8 != 0)) {
    StringName::unref();
  }
  local_168 = (char *)0x0;
  String::parse_latin1((String *)&local_168,"linear_");
  local_198 = (char *)0x0;
  String::parse_latin1((String *)&local_198,"Linear");
  local_1f8[0] = 0;
  String::parse_latin1((String *)local_1f8,"RigidBody3D");
  StringName::StringName((StringName *)&local_1c8,(StrRange *)local_1f8,false);
  ClassDB::add_property_group((StringName *)&local_1c8,(String *)&local_198,(String *)&local_168,0);
  if ((StringName::configured != '\0') && (local_1c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  _scs_create((char *)&local_1c8,true);
  _scs_create((char *)local_1f8,true);
  local_228[0] = 0;
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"suffix:m/s");
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"linear_velocity");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_168,9,(String *)&local_238,0,(String *)&local_230,6,
             (StringName *)local_228);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"RigidBody3D");
  StringName::StringName((StringName *)&local_198,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_198,(PropertyInfo *)&local_168,(StringName *)local_1f8,
             (StringName *)&local_1c8,-1);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if (((StringName::configured != '\0') &&
      ((local_228[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_1f8[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_1c8 != 0)))) {
    StringName::unref();
  }
  _scs_create((char *)&local_1c8,true);
  _scs_create((char *)local_1f8,true);
  local_228[0] = 0;
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"Combine,Replace");
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"linear_damp_mode");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_168,2,(String *)&local_238,2,(String *)&local_230,6,
             (StringName *)local_228);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"RigidBody3D");
  StringName::StringName((StringName *)&local_198,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_198,(PropertyInfo *)&local_168,(StringName *)local_1f8,
             (StringName *)&local_1c8,-1);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_1f8[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1c8 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_1c8,true);
  _scs_create((char *)local_1f8,true);
  local_228[0] = 0;
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"0,100,0.001,or_greater");
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"linear_damp");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_168,3,(String *)&local_238,1,(String *)&local_230,6,
             (StringName *)local_228);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"RigidBody3D");
  StringName::StringName((StringName *)&local_198,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_198,(PropertyInfo *)&local_168,(StringName *)local_1f8,
             (StringName *)&local_1c8,-1);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_1f8[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1c8 != 0)) {
    StringName::unref();
  }
  local_168 = (char *)0x0;
  String::parse_latin1((String *)&local_168,"angular_");
  local_198 = (char *)0x0;
  String::parse_latin1((String *)&local_198,"Angular");
  local_1f8[0] = 0;
  String::parse_latin1((String *)local_1f8,"RigidBody3D");
  StringName::StringName((StringName *)&local_1c8,(StrRange *)local_1f8,false);
  ClassDB::add_property_group((StringName *)&local_1c8,(String *)&local_198,(String *)&local_168,0);
  if ((StringName::configured != '\0') && (local_1c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  _scs_create((char *)&local_1c8,true);
  _scs_create((char *)local_1f8,true);
  local_228[0] = 0;
  local_230 = 0;
  puVar8 = &_LC99;
  do {
    puVar10 = puVar8;
    puVar8 = puVar10 + 4;
  } while (*(int *)(puVar10 + 4) != 0);
  local_168 = "r";
  local_160 = (long)(puVar10 + -0x115974) >> 2;
  String::parse_utf32((StrRange *)&local_230);
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"angular_velocity");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_168,9,(String *)&local_238,0,(String *)&local_230,6,
             (StringName *)local_228);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"RigidBody3D");
  StringName::StringName((StringName *)&local_198,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_198,(PropertyInfo *)&local_168,(StringName *)local_1f8,
             (StringName *)&local_1c8,-1);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_1f8[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1c8 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_1c8,true);
  _scs_create((char *)local_1f8,true);
  local_228[0] = 0;
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"Combine,Replace");
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"angular_damp_mode");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_168,2,(String *)&local_238,2,(String *)&local_230,6,
             (StringName *)local_228);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"RigidBody3D");
  StringName::StringName((StringName *)&local_198,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_198,(PropertyInfo *)&local_168,(StringName *)local_1f8,
             (StringName *)&local_1c8,-1);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_1f8[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1c8 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_1c8,true);
  _scs_create((char *)local_1f8,true);
  local_228[0] = 0;
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"0,100,0.001,or_greater");
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"angular_damp");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_168,3,(String *)&local_238,1,(String *)&local_230,6,
             (StringName *)local_228);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"RigidBody3D");
  StringName::StringName((StringName *)&local_198,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_198,(PropertyInfo *)&local_168,(StringName *)local_1f8,
             (StringName *)&local_1c8,-1);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_1f8[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1c8 != 0)) {
    StringName::unref();
  }
  local_168 = (char *)0x0;
  String::parse_latin1((String *)&local_168,"constant_");
  local_198 = (char *)0x0;
  String::parse_latin1((String *)&local_198,"Constant Forces");
  local_1f8[0] = 0;
  String::parse_latin1((String *)local_1f8,"RigidBody3D");
  StringName::StringName((StringName *)&local_1c8,(StrRange *)local_1f8,false);
  ClassDB::add_property_group((StringName *)&local_1c8,(String *)&local_198,(String *)&local_168,0);
  if ((StringName::configured != '\0') && (local_1c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  _scs_create((char *)&local_1c8,true);
  _scs_create((char *)local_1f8,true);
  local_228[0] = 0;
  local_230 = 0;
  puVar8 = &_LC100;
  do {
    puVar10 = puVar8;
    puVar8 = puVar10 + 4;
  } while (*(int *)(puVar10 + 4) != 0);
  local_168 = "s";
  local_160 = (long)(puVar10 + -0x1159ec) >> 2;
  String::parse_utf32((StrRange *)&local_230);
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"constant_force");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_168,9,(String *)&local_238,0,(String *)&local_230,6,
             (StringName *)local_228);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"RigidBody3D");
  StringName::StringName((StringName *)&local_198,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_198,(PropertyInfo *)&local_168,(StringName *)local_1f8,
             (StringName *)&local_1c8,-1);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if (((StringName::configured != '\0') &&
      ((local_228[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_1f8[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_1c8 != 0)))) {
    StringName::unref();
  }
  _scs_create((char *)&local_1c8,true);
  _scs_create((char *)local_1f8,true);
  local_228[0] = 0;
  local_230 = 0;
  puVar8 = &_LC101;
  do {
    puVar10 = puVar8;
    puVar8 = puVar10 + 4;
  } while (*(int *)(puVar10 + 4) != 0);
  local_168 = "s";
  local_160 = (long)(puVar10 + -0x115a3c) >> 2;
  String::parse_utf32((StrRange *)&local_230);
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"constant_torque");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_168,9,(String *)&local_238,0,(String *)&local_230,6,
             (StringName *)local_228);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"RigidBody3D");
  StringName::StringName((StringName *)&local_198,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_198,(PropertyInfo *)&local_168,(StringName *)local_1f8,
             (StringName *)&local_1c8,-1);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_1f8[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1c8 != 0)) {
    StringName::unref();
  }
  local_240 = 0;
  local_248 = 0;
  String::parse_latin1((String *)&local_248,"");
  local_250 = 0;
  String::parse_latin1((String *)&local_250,"local_shape_index");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_198,2,(String *)&local_250,0,(String *)&local_248,6,
             (String *)&local_240);
  local_258 = 0;
  local_260 = 0;
  String::parse_latin1((String *)&local_260,"");
  local_268 = 0;
  String::parse_latin1((String *)&local_268,"body_shape_index");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1c8,2,(String *)&local_268,0,(String *)&local_260,6,&local_258);
  local_270 = 0;
  local_278 = 0;
  String::parse_latin1((String *)&local_278,"Node");
  local_280 = 0;
  String::parse_latin1((String *)&local_280,"body");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_1f8,0x18,(String *)&local_280,0x11,(String *)&local_278,6,
             &local_270);
  local_288 = 0;
  local_290 = 0;
  String::parse_latin1((String *)&local_290,"");
  local_298 = 0;
  String::parse_latin1((String *)&local_298,"body_rid");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_228,0x17,(String *)&local_298,0,(String *)&local_290,6,&local_288
            );
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"body_shape_entered");
  MethodInfo::MethodInfo<PropertyInfo,PropertyInfo,PropertyInfo,PropertyInfo>
            ((MethodInfo *)&local_168,(String *)&local_238,(StringName *)local_228,
             (StrRange *)local_1f8,(StringName *)&local_1c8,(CowData<char32_t> *)&local_198);
  local_2a0 = 0;
  String::parse_latin1((String *)&local_2a0,"RigidBody3D");
  StringName::StringName((StringName *)&local_230,(String *)&local_2a0,false);
  ClassDB::add_signal((StringName *)&local_230,(MethodInfo *)&local_168);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_228);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_290);
  if ((StringName::configured != '\0') && (local_288 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_280);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  if ((StringName::configured != '\0') && (local_270 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_260);
  if ((StringName::configured != '\0') && (local_258 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_250);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_248);
  if ((StringName::configured != '\0') && (local_240 != 0)) {
    StringName::unref();
  }
  local_240 = 0;
  local_248 = 0;
  String::parse_latin1((String *)&local_248,"");
  local_168 = "local_shape_index";
  local_250 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_250);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_198,2,(String *)&local_250,0,(String *)&local_248,6,
             (String *)&local_240);
  local_258 = 0;
  local_260 = 0;
  String::parse_latin1((String *)&local_260,"");
  local_268 = 0;
  String::parse_latin1((String *)&local_268,"body_shape_index");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1c8,2,(String *)&local_268,0,(String *)&local_260,6,&local_258);
  local_270 = 0;
  local_278 = 0;
  String::parse_latin1((String *)&local_278,"Node");
  local_280 = 0;
  String::parse_latin1((String *)&local_280,"body");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_1f8,0x18,(String *)&local_280,0x11,(String *)&local_278,6,
             &local_270);
  local_288 = 0;
  local_290 = 0;
  String::parse_latin1((String *)&local_290,"");
  local_298 = 0;
  String::parse_latin1((String *)&local_298,"body_rid");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_228,0x17,(String *)&local_298,0,(String *)&local_290,6,&local_288
            );
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"body_shape_exited");
  MethodInfo::MethodInfo<PropertyInfo,PropertyInfo,PropertyInfo,PropertyInfo>
            ((MethodInfo *)&local_168,(String *)&local_238,(StringName *)local_228,
             (StrRange *)local_1f8,(StringName *)&local_1c8,(CowData<char32_t> *)&local_198);
  local_2a0 = 0;
  String::parse_latin1((String *)&local_2a0,"RigidBody3D");
  StringName::StringName((StringName *)&local_230,(String *)&local_2a0,false);
  ClassDB::add_signal((StringName *)&local_230,(MethodInfo *)&local_168);
  if ((StringName::configured != '\0') && (local_230 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_228);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_290);
  if ((StringName::configured != '\0') && (local_288 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_280);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  if ((StringName::configured != '\0') && (local_270 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_260);
  if ((StringName::configured != '\0') && (local_258 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_250);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_248);
  if ((StringName::configured != '\0') && (local_240 != 0)) {
    StringName::unref();
  }
  local_228[0] = 0;
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"Node");
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"body");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_198,0x18,(String *)&local_238,0x11,(String *)&local_230,6,
             (StringName *)local_228);
  local_1f8[0] = 0;
  String::parse_latin1((String *)local_1f8,"body_entered");
  local_158 = (undefined1  [16])0x0;
  local_168 = (char *)0x0;
  local_160 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 6;
  local_130 = 1;
  local_128[0] = 0;
  local_118 = 0;
  local_110 = 0;
  local_100 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_168,(CowData *)local_1f8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_128,(PropertyInfo *)&local_198);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"RigidBody3D");
  StringName::StringName((StringName *)&local_1c8,(String *)&local_240,false);
  ClassDB::add_signal((StringName *)&local_1c8,(MethodInfo *)&local_168);
  if ((StringName::configured != '\0') && (local_1c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  MethodInfo::~MethodInfo((MethodInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((StringName::configured != '\0') && (local_228[0] != 0)) {
    StringName::unref();
  }
  local_228[0] = 0;
  local_230 = 0;
  String::parse_latin1((String *)&local_230,"Node");
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"body");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_198,0x18,(String *)&local_238,0x11,(String *)&local_230,6,
             (StringName *)local_228);
  local_1f8[0] = 0;
  String::parse_latin1((String *)local_1f8,"body_exited");
  local_158 = (undefined1  [16])0x0;
  local_168 = (char *)0x0;
  local_160 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 6;
  local_130 = 1;
  local_128[0] = 0;
  local_118 = 0;
  local_110 = 0;
  local_100 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_168,(CowData *)local_1f8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_128,(PropertyInfo *)&local_198);
  local_240 = 0;
  String::parse_latin1((String *)&local_240,"RigidBody3D");
  StringName::StringName((StringName *)&local_1c8,(String *)&local_240,false);
  ClassDB::add_signal((StringName *)&local_1c8,(MethodInfo *)&local_168);
  if ((StringName::configured != '\0') && (local_1c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  MethodInfo::~MethodInfo((MethodInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((StringName::configured != '\0') && (local_228[0] != 0)) {
    StringName::unref();
  }
  local_1c8 = 0;
  String::parse_latin1((String *)&local_1c8,"sleeping_state_changed");
  local_158 = (undefined1  [16])0x0;
  local_168 = (char *)0x0;
  local_160 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 6;
  local_130 = 1;
  local_128[0] = 0;
  local_118 = 0;
  local_110 = 0;
  local_100 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_168,(CowData *)&local_1c8);
  local_1f8[0] = 0;
  String::parse_latin1((String *)local_1f8,"RigidBody3D");
  StringName::StringName((StringName *)&local_198,(StrRange *)local_1f8,false);
  ClassDB::add_signal((StringName *)&local_198,(MethodInfo *)&local_168);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1f8);
  MethodInfo::~MethodInfo((MethodInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  StringName::StringName((StringName *)&local_198,"FREEZE_MODE_STATIC",false);
  local_1f8[0] = 0;
  String::parse_latin1((String *)local_1f8,"FREEZE_MODE_STATIC");
  GetTypeInfo<RigidBody3D::FreezeMode,void>::get_class_info
            ((GetTypeInfo<RigidBody3D::FreezeMode,void> *)&local_168);
  local_1c8 = local_158._0_8_;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_158._8_8_;
  local_158 = auVar2 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  local_228[0] = 0;
  String::parse_latin1((String *)local_228,"RigidBody3D");
  StringName::StringName((StringName *)&local_168,(StringName *)local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_1c8,(StringName *)&local_198,0,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_228);
  if ((StringName::configured != '\0') && (local_1c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1f8);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_198,"FREEZE_MODE_KINEMATIC",false);
  local_1f8[0] = 0;
  String::parse_latin1((String *)local_1f8,"FREEZE_MODE_KINEMATIC");
  GetTypeInfo<RigidBody3D::FreezeMode,void>::get_class_info
            ((GetTypeInfo<RigidBody3D::FreezeMode,void> *)&local_168);
  local_1c8 = local_158._0_8_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_158._8_8_;
  local_158 = auVar3 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  local_228[0] = 0;
  String::parse_latin1((String *)local_228,"RigidBody3D");
  StringName::StringName((StringName *)&local_168,(StringName *)local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_1c8,(StringName *)&local_198,1,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_228);
  if ((StringName::configured != '\0') && (local_1c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1f8);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_198,"CENTER_OF_MASS_MODE_AUTO",false);
  local_1f8[0] = 0;
  String::parse_latin1((String *)local_1f8,"CENTER_OF_MASS_MODE_AUTO");
  GetTypeInfo<RigidBody3D::CenterOfMassMode,void>::get_class_info
            ((GetTypeInfo<RigidBody3D::CenterOfMassMode,void> *)&local_168);
  local_1c8 = local_158._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_158._8_8_;
  local_158 = auVar4 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  local_228[0] = 0;
  String::parse_latin1((String *)local_228,"RigidBody3D");
  StringName::StringName((StringName *)&local_168,(StringName *)local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_1c8,(StringName *)&local_198,0,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_228);
  if ((StringName::configured != '\0') && (local_1c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1f8);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_198,"CENTER_OF_MASS_MODE_CUSTOM",false);
  local_1f8[0] = 0;
  String::parse_latin1((String *)local_1f8,"CENTER_OF_MASS_MODE_CUSTOM");
  GetTypeInfo<RigidBody3D::CenterOfMassMode,void>::get_class_info
            ((GetTypeInfo<RigidBody3D::CenterOfMassMode,void> *)&local_168);
  local_1c8 = local_158._0_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_158._8_8_;
  local_158 = auVar5 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  local_228[0] = 0;
  String::parse_latin1((String *)local_228,"RigidBody3D");
  StringName::StringName((StringName *)&local_168,(StringName *)local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_1c8,(StringName *)&local_198,1,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_228);
  if ((StringName::configured != '\0') && (local_1c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1f8);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_198,"DAMP_MODE_COMBINE",false);
  local_1f8[0] = 0;
  String::parse_latin1((String *)local_1f8,"DAMP_MODE_COMBINE");
  GetTypeInfo<RigidBody3D::DampMode,void>::get_class_info
            ((GetTypeInfo<RigidBody3D::DampMode,void> *)&local_168);
  local_1c8 = local_158._0_8_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = local_158._8_8_;
  local_158 = auVar6 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  local_228[0] = 0;
  String::parse_latin1((String *)local_228,"RigidBody3D");
  StringName::StringName((StringName *)&local_168,(StringName *)local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_1c8,(StringName *)&local_198,0,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_228);
  if ((StringName::configured != '\0') && (local_1c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1f8);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_198,"DAMP_MODE_REPLACE",false);
  local_1f8[0] = 0;
  String::parse_latin1((String *)local_1f8,"DAMP_MODE_REPLACE");
  GetTypeInfo<RigidBody3D::DampMode,void>::get_class_info
            ((GetTypeInfo<RigidBody3D::DampMode,void> *)&local_168);
  local_1c8 = local_158._0_8_;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = local_158._8_8_;
  local_158 = auVar7 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  local_228[0] = 0;
  String::parse_latin1((String *)local_228,"RigidBody3D");
  StringName::StringName((StringName *)&local_168,(StringName *)local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_1c8,(StringName *)&local_198,1,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_228);
  if ((StringName::configured != '\0') && (local_1c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1f8);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RigidBody3D::_body_inout(int, RID const&, ObjectID, int, int) */

void __thiscall
RigidBody3D::_body_inout
          (RigidBody3D *this,int param_1,ulong *param_2,ulong param_4,int param_5,int param_6)

{
  Variant *pVVar1;
  int *piVar2;
  uint *puVar3;
  long *plVar4;
  int iVar5;
  char cVar6;
  code *pcVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  int iVar35;
  ulong uVar36;
  int iVar37;
  char *pcVar38;
  uint uVar39;
  uint uVar40;
  long lVar41;
  ulong uVar42;
  undefined8 uVar43;
  ulong uVar44;
  Variant *pVVar45;
  long *plVar46;
  undefined8 *puVar47;
  undefined8 *puVar48;
  long lVar49;
  uint uVar50;
  int iVar51;
  ulong *puVar52;
  long lVar53;
  ulong uVar54;
  uint uVar55;
  ulong uVar56;
  long lVar57;
  uint *puVar58;
  long in_FS_OFFSET;
  bool bVar59;
  Object *local_158;
  Object *local_138;
  ulong local_120;
  long local_118 [2];
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_f0;
  Variant *local_e8;
  Variant *pVStack_e0;
  Variant *local_d8;
  Variant *pVStack_d0;
  int local_b8 [6];
  int local_a0 [2];
  undefined1 local_98 [16];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  uVar50 = (uint)param_4 & 0xffffff;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_120 = param_4;
  if (uVar50 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar36 = local_108 >> 8;
      local_108 = uVar36 << 8;
      LOCK();
      bVar59 = (char)ObjectDB::spin_lock == '\0';
      if (bVar59) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar59) break;
      local_108 = uVar36 << 8;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar52 = (ulong *)((ulong)uVar50 * 0x10 + ObjectDB::object_slots);
    if ((*puVar52 & 0x7fffffffff) != (param_4 >> 0x18 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_001094f0;
    }
    local_138 = (Object *)puVar52[1];
    ObjectDB::spin_lock._0_1_ = '\0';
    if (local_138 == (Object *)0x0) {
      local_158 = (Object *)0x0;
    }
    else {
      local_158 = (Object *)__dynamic_cast(local_138,&Object::typeinfo,&Node::typeinfo,0);
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001094f0:
    local_138 = (Object *)0x0;
    local_158 = (Object *)0x0;
  }
  lVar57 = *(long *)(this + 0x6b8);
  if (lVar57 == 0) {
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar43 = 0x53;
      pcVar38 = "Parameter \"contact_monitor\" is null.";
LAB_00109530:
      _err_print_error("_body_inout","scene/3d/physics/rigid_body_3d.cpp",uVar43,pcVar38,0,0);
      return;
    }
    goto LAB_00109c99;
  }
  lVar49 = *(long *)(lVar57 + 0x10);
  if ((lVar49 != 0) && (*(int *)(lVar57 + 0x34) != 0)) {
    uVar56 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar57 + 0x30) * 4));
    lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar57 + 0x30) * 8);
    uVar36 = local_120 * 0x3ffff - 1;
    uVar36 = (uVar36 ^ uVar36 >> 0x1f) * 0x15;
    uVar36 = (uVar36 ^ uVar36 >> 0xb) * 0x41;
    uVar36 = uVar36 >> 0x16 ^ uVar36;
    uVar44 = uVar36 & 0xffffffff;
    if ((int)uVar36 == 0) {
      uVar44 = 1;
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar44 * lVar53;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar56;
    lVar41 = SUB168(auVar9 * auVar22,8);
    uVar50 = *(uint *)(*(long *)(lVar57 + 0x18) + lVar41 * 4);
    uVar39 = SUB164(auVar9 * auVar22,8);
    if (uVar50 != 0) {
      uVar55 = 0;
      do {
        if (((uint)uVar44 == uVar50) &&
           (local_120 == *(ulong *)(*(long *)(lVar49 + lVar41 * 8) + 0x10))) {
          lVar53 = *(long *)(lVar49 + (ulong)uVar39 * 8);
          if (param_1 == 1) {
            if (lVar53 == 0) goto LAB_001091f3;
            if (local_158 != (Object *)0x0) goto LAB_0010916f;
            goto LAB_00109190;
          }
          if (lVar53 == 0) goto LAB_00109c34;
          lVar41 = *(long *)(lVar53 + 0x30);
          if (local_158 == (Object *)0x0) {
            if (lVar41 != 0) goto LAB_0010919b;
            cVar6 = '\0';
            lVar53 = *(long *)(lVar53 + 0x10);
            goto LAB_00109615;
          }
          if (lVar41 == 0) {
            cVar6 = *(char *)(lVar53 + 0x20);
            goto LAB_001099e4;
          }
          lVar57 = *(long *)(lVar41 + -8);
          iVar37 = (int)lVar57 + -1;
          if (lVar57 < 1) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,0,lVar57,"p_index","size()","",false,
                       true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          iVar51 = 0;
          if (-1 < iVar37) goto LAB_001095c1;
          goto LAB_001095f5;
        }
        uVar55 = uVar55 + 1;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)(uVar39 + 1) * lVar53;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar56;
        lVar41 = SUB168(auVar10 * auVar23,8);
        uVar50 = *(uint *)(*(long *)(lVar57 + 0x18) + lVar41 * 4);
        uVar39 = SUB164(auVar10 * auVar23,8);
      } while ((uVar50 != 0) &&
              (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar50 * lVar53, auVar24._8_8_ = 0,
              auVar24._0_8_ = uVar56, auVar12._8_8_ = 0,
              auVar12._0_8_ =
                   (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar57 + 0x30) * 4)
                           + uVar39) - SUB164(auVar11 * auVar24,8)) * lVar53, auVar25._8_8_ = 0,
              auVar25._0_8_ = uVar56, uVar55 <= SUB164(auVar12 * auVar25,8)));
    }
  }
  if (param_1 != 1) {
LAB_00109c34:
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar43 = 0x56;
      pcVar38 = "Condition \"!body_in && !E\" is true.";
      goto LAB_00109530;
    }
    goto LAB_00109c99;
  }
LAB_001091f3:
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0;
  HashMap<ObjectID,RigidBody3D::BodyState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,RigidBody3D::BodyState>>>
  ::insert((RigidBody3D *)local_118,(BodyState *)(lVar57 + 8),SUB81(&local_120,0));
  *(ulong *)(local_118[0] + 0x18) = *param_2;
  if (local_158 == (Object *)0x0) {
    *(undefined1 *)(local_118[0] + 0x20) = 0;
  }
  else {
    *(byte *)(local_118[0] + 0x20) = (byte)local_158[0x2fa] >> 6 & 1;
    pcVar7 = *(code **)(*(long *)local_158 + 0x108);
    create_custom_callable_function_pointer<RigidBody3D,ObjectID>
              ((RigidBody3D *)local_118,(char *)this,
               (_func_void_ObjectID *)"&RigidBody3D::_body_enter_tree");
    Callable::bind<ObjectID>((Callable *)&local_108,(RigidBody3D *)local_118,local_120);
    (*pcVar7)(local_158,SceneStringNames::singleton + 0x38,(Callable *)&local_108,0);
    Callable::~Callable((Callable *)&local_108);
    Callable::~Callable((Callable *)local_118);
    pcVar7 = *(code **)(*(long *)local_158 + 0x108);
    create_custom_callable_function_pointer<RigidBody3D,ObjectID>
              ((RigidBody3D *)local_118,(char *)this,
               (_func_void_ObjectID *)"&RigidBody3D::_body_exit_tree");
    Callable::bind<ObjectID>((Callable *)&local_108,(RigidBody3D *)local_118,local_120);
    (*pcVar7)(local_158,SceneStringNames::singleton + 0x40,(Callable *)&local_108,0);
    Callable::~Callable((Callable *)&local_108);
    Callable::~Callable((Callable *)local_118);
    lVar53 = local_118[0];
    if (*(char *)(local_118[0] + 0x20) != '\0') {
      lVar57 = SceneStringNames::singleton + 0x148;
      Variant::Variant((Variant *)local_b8,local_158);
      local_98 = (undefined1  [16])0x0;
      local_a0[0] = 0;
      local_a0[1] = 0;
      local_e8 = (Variant *)local_b8;
      (**(code **)(*(long *)this + 0xd0))(this,lVar57,&local_e8,1);
      if (Variant::needs_deinit[local_a0[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_b8[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
LAB_0010916f:
    local_100 = 0;
    local_108 = CONCAT44(param_6,param_5);
    VSet<RigidBody3D::ShapePair>::insert
              ((VSet<RigidBody3D::ShapePair> *)(lVar53 + 0x28),(ShapePair *)&local_108);
LAB_00109190:
    if (*(char *)(lVar53 + 0x20) != '\0') {
      lVar57 = SceneStringNames::singleton + 0x140;
      local_108 = *param_2;
      Variant::Variant((Variant *)local_b8,(RID *)&local_108);
      Variant::Variant((Variant *)local_a0,local_158);
      Variant::Variant(local_88,param_5);
      Variant::Variant(local_70,param_6);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      pVVar45 = (Variant *)local_40;
      local_e8 = (Variant *)local_b8;
      pVStack_e0 = (Variant *)local_a0;
      local_d8 = local_88;
      pVStack_d0 = local_70;
      (**(code **)(*(long *)this + 0xd0))(this,lVar57,&local_e8,4);
      do {
        pVVar1 = pVVar45 + -0x18;
        pVVar45 = pVVar45 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar45 != (Variant *)local_b8);
    }
  }
  goto LAB_0010919b;
LAB_001095c1:
  iVar35 = (iVar37 + iVar51) / 2;
  lVar49 = (long)iVar35;
  piVar2 = (int *)(lVar41 + lVar49 * 0xc);
  iVar5 = *piVar2;
  if (param_5 != iVar5) {
    if (param_5 < iVar5) goto LAB_001095ba;
LAB_001095ee:
    iVar51 = iVar35 + 1;
    if (iVar37 < iVar51) goto LAB_001095f5;
    goto LAB_001095c1;
  }
  iVar5 = piVar2[1];
  if (param_6 < iVar5) goto LAB_001095ba;
  if (iVar5 < param_6) goto LAB_001095ee;
  if (iVar37 + iVar51 < -1) goto LAB_001095f5;
  if (lVar49 < lVar57) {
    CowData<RigidBody3D::ShapePair>::_copy_on_write
              ((CowData<RigidBody3D::ShapePair> *)(lVar53 + 0x30));
    lVar57 = *(long *)(lVar53 + 0x30);
    if (lVar57 == 0) {
      lVar41 = -1;
    }
    else {
      lVar8 = *(long *)(lVar57 + -8);
      lVar41 = lVar8 + -1;
      if (lVar49 < lVar41) {
        puVar47 = (undefined8 *)(lVar49 * 0xc + lVar57);
        do {
          puVar48 = (undefined8 *)((long)puVar47 + 0xc);
          *puVar47 = *(undefined8 *)((long)puVar47 + 0xc);
          *(undefined1 *)(puVar47 + 1) = *(undefined1 *)((long)puVar47 + 0x14);
          puVar47 = puVar48;
        } while (puVar48 != (undefined8 *)(lVar57 + -0xc + lVar8 * 0xc));
      }
    }
    CowData<RigidBody3D::ShapePair>::resize<false>
              ((CowData<RigidBody3D::ShapePair> *)(lVar53 + 0x30),lVar41);
  }
  else {
    _err_print_index_error
              ("remove_at","./core/templates/cowdata.h",0xe4,lVar49,lVar57,"p_index","size()","",
               false,false);
  }
  cVar6 = *(char *)(lVar53 + 0x20);
  if (*(long *)(lVar53 + 0x30) != 0) goto LAB_00109854;
LAB_001099e4:
  pcVar7 = *(code **)(*(long *)local_158 + 0x110);
  create_custom_callable_function_pointer<RigidBody3D,ObjectID>
            ((RigidBody3D *)&local_108,(char *)this,
             (_func_void_ObjectID *)"&RigidBody3D::_body_enter_tree");
  (*pcVar7)(local_158,SceneStringNames::singleton + 0x38,(RigidBody3D *)&local_108);
  Callable::~Callable((Callable *)&local_108);
  pcVar7 = *(code **)(*(long *)local_158 + 0x110);
  create_custom_callable_function_pointer<RigidBody3D,ObjectID>
            ((RigidBody3D *)&local_108,(char *)this,
             (_func_void_ObjectID *)"&RigidBody3D::_body_exit_tree");
  (*pcVar7)(local_158,SceneStringNames::singleton + 0x40,(RigidBody3D *)&local_108);
  Callable::~Callable((Callable *)&local_108);
  if (cVar6 != '\0') {
    lVar57 = SceneStringNames::singleton + 0x158;
    Variant::Variant((Variant *)local_b8,local_158);
    local_a0[0] = 0;
    local_a0[1] = 0;
    local_98 = (undefined1  [16])0x0;
    local_e8 = (Variant *)local_b8;
    (**(code **)(*(long *)this + 0xd0))(this,lVar57,&local_e8,1);
    if (Variant::needs_deinit[local_a0[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_b8[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar53 = *(long *)(lVar53 + 0x10);
    lVar57 = *(long *)(this + 0x6b8);
    lVar49 = *(long *)(lVar57 + 0x10);
    if ((lVar49 != 0) && (*(int *)(lVar57 + 0x34) != 0)) goto LAB_00109615;
    goto LAB_00109880;
  }
  lVar53 = *(long *)(lVar53 + 0x10);
  lVar57 = *(long *)(this + 0x6b8);
  lVar49 = *(long *)(lVar57 + 0x10);
  if ((lVar49 == 0) || (*(int *)(lVar57 + 0x34) == 0)) goto LAB_0010919b;
LAB_00109615:
  lVar41 = *(long *)(lVar57 + 0x18);
  uVar50 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar57 + 0x30) * 4);
  uVar56 = CONCAT44(0,uVar50);
  lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar57 + 0x30) * 8);
  uVar36 = lVar53 * 0x3ffff - 1;
  uVar36 = (uVar36 ^ uVar36 >> 0x1f) * 0x15;
  uVar36 = (uVar36 ^ uVar36 >> 0xb) * 0x41;
  uVar36 = uVar36 >> 0x16 ^ uVar36;
  uVar44 = 1;
  if ((int)uVar36 != 0) {
    uVar44 = uVar36 & 0xffffffff;
  }
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar44 * lVar8;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar56;
  uVar36 = SUB168(auVar13 * auVar26,8);
  uVar39 = *(uint *)(lVar41 + uVar36 * 4);
  uVar54 = (ulong)SUB164(auVar13 * auVar26,8);
  if (uVar39 == 0) goto LAB_00109854;
  uVar55 = 0;
LAB_001096ed:
  auVar16._8_8_ = 0;
  auVar16._0_8_ = (ulong)((int)uVar54 + 1) * lVar8;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar56;
  uVar42 = SUB168(auVar16 * auVar29,8);
  uVar40 = SUB164(auVar16 * auVar29,8);
  if ((uVar39 != (uint)uVar44) || (lVar53 != *(long *)(*(long *)(lVar49 + uVar36 * 8) + 0x10)))
  goto LAB_001096b0;
  puVar58 = (uint *)(lVar41 + uVar42 * 4);
  uVar36 = (ulong)uVar40;
  uVar39 = *puVar58;
  if ((uVar39 != 0) &&
     (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar39 * lVar8, auVar30._8_8_ = 0,
     auVar30._0_8_ = uVar56, auVar18._8_8_ = 0,
     auVar18._0_8_ = (ulong)((uVar40 + uVar50) - SUB164(auVar17 * auVar30,8)) * lVar8,
     auVar31._8_8_ = 0, auVar31._0_8_ = uVar56, SUB164(auVar18 * auVar31,8) != 0)) {
    while( true ) {
      puVar3 = (uint *)(lVar41 + uVar54 * 4);
      *puVar58 = *puVar3;
      puVar47 = (undefined8 *)(lVar49 + uVar42 * 8);
      *puVar3 = uVar39;
      puVar48 = (undefined8 *)(lVar49 + uVar54 * 8);
      uVar43 = *puVar47;
      *puVar47 = *puVar48;
      *puVar48 = uVar43;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = (ulong)((int)uVar36 + 1) * lVar8;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar56;
      uVar42 = SUB168(auVar21 * auVar34,8);
      puVar58 = (uint *)(lVar41 + uVar42 * 4);
      uVar39 = *puVar58;
      uVar54 = uVar36;
      if ((uVar39 == 0) ||
         (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar39 * lVar8, auVar32._8_8_ = 0,
         auVar32._0_8_ = uVar56, auVar20._8_8_ = 0,
         auVar20._0_8_ =
              (ulong)((SUB164(auVar21 * auVar34,8) + uVar50) - SUB164(auVar19 * auVar32,8)) * lVar8,
         auVar33._8_8_ = 0, auVar33._0_8_ = uVar56, SUB164(auVar20 * auVar33,8) == 0)) break;
      uVar36 = uVar42 & 0xffffffff;
    }
  }
  plVar4 = (long *)(lVar49 + uVar54 * 8);
  *(undefined4 *)(lVar41 + uVar54 * 4) = 0;
  plVar46 = (long *)*plVar4;
  if (*(long **)(lVar57 + 0x20) == plVar46) {
    *(long *)(lVar57 + 0x20) = *plVar46;
    plVar46 = (long *)*plVar4;
  }
  if (plVar46 == *(long **)(lVar57 + 0x28)) {
    *(long *)(lVar57 + 0x28) = plVar46[1];
    plVar46 = (long *)*plVar4;
  }
  if ((long *)plVar46[1] != (long *)0x0) {
    *(long *)plVar46[1] = *plVar46;
    plVar46 = (long *)*plVar4;
  }
  if (*plVar46 != 0) {
    *(long *)(*plVar46 + 8) = plVar46[1];
    plVar46 = (long *)*plVar4;
  }
  if (plVar46[6] != 0) {
    LOCK();
    plVar4 = (long *)(plVar46[6] + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      lVar49 = plVar46[6];
      plVar46[6] = 0;
      Memory::free_static((void *)(lVar49 + -0x10),false);
    }
  }
  Memory::free_static(plVar46,false);
  *(undefined8 *)(*(long *)(lVar57 + 0x10) + uVar54 * 8) = 0;
  *(int *)(lVar57 + 0x34) = *(int *)(lVar57 + 0x34) + -1;
  goto LAB_00109854;
LAB_001095ba:
  iVar37 = iVar35 + -1;
  if (iVar37 < iVar51) goto LAB_001095f5;
  goto LAB_001095c1;
LAB_001096b0:
  uVar39 = *(uint *)(lVar41 + uVar42 * 4);
  uVar54 = uVar42 & 0xffffffff;
  uVar55 = uVar55 + 1;
  if ((uVar39 == 0) ||
     (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar39 * lVar8, auVar27._8_8_ = 0,
     auVar27._0_8_ = uVar56, auVar15._8_8_ = 0,
     auVar15._0_8_ = (ulong)((uVar50 + uVar40) - SUB164(auVar14 * auVar27,8)) * lVar8,
     auVar28._8_8_ = 0, auVar28._0_8_ = uVar56, uVar36 = uVar42,
     SUB164(auVar15 * auVar28,8) < uVar55)) goto LAB_00109854;
  goto LAB_001096ed;
LAB_001095f5:
  cVar6 = *(char *)(lVar53 + 0x20);
LAB_00109854:
  if (cVar6 != '\0') {
LAB_00109880:
    local_158 = (Object *)&local_e8;
    lVar57 = SceneStringNames::singleton + 0x150;
    local_108 = *param_2;
    Variant::Variant((Variant *)local_b8,(RID *)&local_108);
    Variant::Variant((Variant *)local_a0,local_138);
    Variant::Variant(local_88,param_5);
    Variant::Variant(local_70,param_6);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    pVVar45 = (Variant *)local_40;
    local_e8 = (Variant *)local_b8;
    pVStack_e0 = (Variant *)local_a0;
    local_d8 = local_88;
    pVStack_d0 = local_70;
    (**(code **)(*(long *)this + 0xd0))(this,lVar57,local_158,4);
    do {
      pVVar1 = pVVar45 + -0x18;
      pVVar45 = pVVar45 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar45 != (Variant *)local_b8);
  }
LAB_0010919b:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00109c99:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RigidBody3D::_body_state_changed(PhysicsDirectBodyState3D*) */

void __thiscall
RigidBody3D::_body_state_changed(RigidBody3D *this,PhysicsDirectBodyState3D *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long lVar14;
  undefined1 *puVar15;
  CowData<char32_t> *pCVar16;
  PhysicsDirectBodyState3D *pPVar17;
  char cVar18;
  undefined4 uVar19;
  int iVar20;
  long *plVar21;
  long *plVar22;
  undefined8 uVar23;
  PhysicsDirectBodyState3D *pPVar24;
  ulong uVar25;
  code *pcVar26;
  long lVar27;
  uint uVar28;
  long lVar29;
  long *plVar30;
  ulong uVar31;
  char **ppcVar32;
  undefined1 *puVar33;
  undefined1 *puVar34;
  undefined1 *puVar36;
  int iVar38;
  uint uVar39;
  int iVar40;
  uint uVar41;
  ulong uVar42;
  int iVar43;
  long lVar44;
  long in_FS_OFFSET;
  char *pcStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined1 auStack_1d8 [8];
  ulong local_1d0;
  ulong local_1c8;
  RigidBody3D *local_1c0;
  int local_1b8;
  int local_1b4;
  StringName *local_1b0;
  RigidBody3D *local_1a8;
  String *local_1a0;
  CowData<char32_t> *local_198;
  PhysicsDirectBodyState3D *local_190;
  undefined8 local_188;
  long local_180;
  GetTypeInfo<PhysicsDirectBodyState3D*,void> local_178 [8];
  long local_170 [5];
  int local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108 [2];
  undefined8 local_f8;
  undefined8 local_f0;
  Vector<int> local_e8 [8];
  undefined8 local_e0;
  Variant *local_d0;
  int local_c8 [8];
  Transform3D local_a8 [48];
  int *local_78 [7];
  long local_40;
  undefined1 *puVar35;
  undefined1 *puVar37;
  
  puVar33 = auStack_1d8;
  puVar35 = auStack_1d8;
  puVar34 = auStack_1d8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(int *)(this + 0x540) = *(int *)(this + 0x540) + 1;
  plVar21 = *(long **)(this + 0x98);
  local_190 = param_1;
  if (plVar21 == (long *)0x0) {
LAB_00109d05:
    if ((*(long *)(this + 8) != 0) && (this[0x6c8] == (RigidBody3D)0x0)) {
      local_1a0 = (String *)&local_148;
      local_148 = 0;
      uStack_144 = 0;
      local_138 = (undefined1  [16])0x0;
      uStack_140 = 0;
      uStack_13c = 0;
      local_128 = 0;
      local_120 = 0;
      local_118 = 6;
      local_110 = 1;
      local_108[0] = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e0 = 0;
      local_1e0 = 0x10a64b;
      String::parse_latin1(local_1a0,"_integrate_forces");
      local_110 = CONCAT44(local_110._4_4_,8);
      local_1e0 = 0x10a65d;
      GetTypeInfo<PhysicsDirectBodyState3D*,void>::get_class_info(local_178);
      local_1e0 = 0x10a66c;
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_108,(PropertyInfo *)local_178);
      local_1e0 = 0x10a674;
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_178);
      local_1e0 = 0x10a682;
      Vector<int>::push_back(local_e8,0);
      local_1e0 = 0x10a68a;
      uVar19 = MethodInfo::get_compatibility_hash();
      *(undefined8 *)(this + 0x6d0) = 0;
      lVar44 = *(long *)(this + 8);
      pcVar26 = *(code **)(lVar44 + 0xd8);
      if (((pcVar26 == (code *)0x0) || (*(long *)(lVar44 + 0xe0) == 0)) &&
         (pcVar26 = *(code **)(lVar44 + 0xd0), pcVar26 == (code *)0x0)) {
        local_188 = 0;
        local_1e0 = 0x10a8bc;
        local_198 = (CowData<char32_t> *)&local_188;
        String::parse_latin1((String *)&local_188,"RigidBody3D");
        local_1e0 = 0x10a8da;
        local_1b0 = (StringName *)&local_180;
        StringName::StringName((StringName *)&local_180,(String *)&local_188,false);
        local_1e0 = 0x10a8e8;
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)local_178,(StringName *)&local_180);
        if (local_170[0] == 0) {
          lVar44 = 0;
          local_1e0 = 0x10ab46;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_170);
          if (StringName::configured != '\0') goto LAB_0010a911;
          local_1e0 = 0x10ab5f;
          CowData<char32_t>::_unref(local_198);
LAB_0010a938:
          lVar44 = *(long *)(this + 8);
          pcVar26 = *(code **)(lVar44 + 200);
          if (((pcVar26 == (code *)0x0) || (*(long *)(lVar44 + 0xe0) == 0)) &&
             (pcVar26 = *(code **)(lVar44 + 0xc0), pcVar26 == (code *)0x0)) goto LAB_0010a6d4;
          local_1e0 = 0x10a966;
          uVar23 = (*pcVar26)(*(undefined8 *)(lVar44 + 0xa0),this + 0x6c0);
          *(undefined8 *)(this + 0x6d0) = uVar23;
        }
        else {
          lVar44 = *(long *)(local_170[0] + -8);
          local_1e0 = 0x10a908;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_170);
          if (StringName::configured != '\0') {
LAB_0010a911:
            if (local_180 != 0) {
              local_1e0 = 0x10a927;
              StringName::unref();
            }
          }
          local_1e0 = 0x10a933;
          CowData<char32_t>::_unref(local_198);
          if (lVar44 == 0) goto LAB_0010a938;
        }
        lVar44 = *(long *)(this + 8);
      }
      else {
        local_1e0 = 0x10a6c9;
        uVar23 = (*pcVar26)(*(undefined8 *)(lVar44 + 0xa0),this + 0x6c0,uVar19);
        *(undefined8 *)(this + 0x6d0) = uVar23;
        lVar44 = *(long *)(this + 8);
      }
LAB_0010a6d4:
      if (*(char *)(lVar44 + 0x29) != '\0') {
        local_1e0 = 0x10aa8d;
        plVar21 = (long *)operator_new(0x18,"");
        *plVar21 = (long)(this + 0x6d0);
        plVar21[1] = (long)(this + 0x6c8);
        plVar21[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar21;
      }
      this[0x6c8] = (RigidBody3D)0x1;
      local_1e0 = 0x10a6f2;
      MethodInfo::~MethodInfo((MethodInfo *)local_1a0);
    }
    if (*(long *)(this + 0x6d0) == 0) goto LAB_00109e61;
  }
  else {
    local_1e0 = 0x109d01;
    cVar18 = (**(code **)(*plVar21 + 0x50))(plVar21,this + 0x6c0);
    if (cVar18 == '\0') goto LAB_00109d05;
  }
  local_1e0 = 0x109d38;
  _sync_body_state(this,local_190);
  local_1e0 = 0x109d43;
  Node3D::get_global_transform();
  plVar21 = *(long **)(this + 0x98);
  if (plVar21 == (long *)0x0) {
LAB_00109de8:
    if ((*(long *)(this + 8) != 0) && (this[0x6c8] == (RigidBody3D)0x0)) {
      local_1a0 = (String *)&local_148;
      local_148 = 0;
      uStack_144 = 0;
      local_138 = (undefined1  [16])0x0;
      uStack_140 = 0;
      uStack_13c = 0;
      local_128 = 0;
      local_120 = 0;
      local_118 = 6;
      local_110 = 1;
      local_108[0] = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e0 = 0;
      local_1e0 = 0x10a16b;
      String::parse_latin1(local_1a0,"_integrate_forces");
      local_110 = CONCAT44(local_110._4_4_,8);
      local_1e0 = 0x10a17d;
      GetTypeInfo<PhysicsDirectBodyState3D*,void>::get_class_info(local_178);
      local_1e0 = 0x10a18c;
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_108,(PropertyInfo *)local_178);
      local_1e0 = 0x10a194;
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_178);
      local_1e0 = 0x10a1a2;
      Vector<int>::push_back(local_e8,0);
      local_1e0 = 0x10a1aa;
      uVar19 = MethodInfo::get_compatibility_hash();
      *(undefined8 *)(this + 0x6d0) = 0;
      lVar44 = *(long *)(this + 8);
      pcVar26 = *(code **)(lVar44 + 0xd8);
      if (((pcVar26 == (code *)0x0) || (*(long *)(lVar44 + 0xe0) == 0)) &&
         (pcVar26 = *(code **)(lVar44 + 0xd0), pcVar26 == (code *)0x0)) {
        local_1a8 = this + 0x6c0;
        local_188 = 0;
        local_1e0 = 0x10a9ba;
        local_198 = (CowData<char32_t> *)&local_188;
        String::parse_latin1((String *)&local_188,"RigidBody3D");
        local_1e0 = 0x10a9d8;
        local_1b0 = (StringName *)&local_180;
        StringName::StringName((StringName *)&local_180,(String *)&local_188,false);
        local_1e0 = 0x10a9ea;
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)local_178,(StringName *)&local_180);
        if (local_170[0] == 0) {
          lVar44 = 0;
          local_1e0 = 0x10ab1a;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_170);
          if (StringName::configured != '\0') goto LAB_0010aa13;
          local_1e0 = 0x10ab33;
          CowData<char32_t>::_unref(local_198);
LAB_0010aa3a:
          lVar44 = *(long *)(this + 8);
          pcVar26 = *(code **)(lVar44 + 200);
          if (((pcVar26 == (code *)0x0) || (*(long *)(lVar44 + 0xe0) == 0)) &&
             (pcVar26 = *(code **)(lVar44 + 0xc0), pcVar26 == (code *)0x0)) goto LAB_0010a1f4;
          local_1e0 = 0x10aa6c;
          uVar23 = (*pcVar26)(*(undefined8 *)(lVar44 + 0xa0),local_1a8);
          *(undefined8 *)(this + 0x6d0) = uVar23;
        }
        else {
          lVar44 = *(long *)(local_170[0] + -8);
          local_1e0 = 0x10aa0a;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_170);
          if (StringName::configured != '\0') {
LAB_0010aa13:
            if (local_180 != 0) {
              local_1e0 = 0x10aa29;
              StringName::unref();
            }
          }
          local_1e0 = 0x10aa35;
          CowData<char32_t>::_unref(local_198);
          if (lVar44 == 0) goto LAB_0010aa3a;
        }
        lVar44 = *(long *)(this + 8);
      }
      else {
        local_1e0 = 0x10a1e9;
        uVar23 = (*pcVar26)(*(undefined8 *)(lVar44 + 0xa0),this + 0x6c0,uVar19);
        *(undefined8 *)(this + 0x6d0) = uVar23;
        lVar44 = *(long *)(this + 8);
      }
LAB_0010a1f4:
      if (*(char *)(lVar44 + 0x29) != '\0') {
        local_1e0 = 0x10aaca;
        plVar21 = (long *)operator_new(0x18,"");
        *plVar21 = (long)(this + 0x6d0);
        plVar21[1] = (long)(this + 0x6c8);
        plVar21[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar21;
      }
      this[0x6c8] = (RigidBody3D)0x1;
      local_1e0 = 0x10a212;
      MethodInfo::~MethodInfo((MethodInfo *)local_1a0);
    }
    pcVar26 = *(code **)(this + 0x6d0);
    if (pcVar26 != (code *)0x0) {
      local_78[0] = &local_148;
      local_148 = (int)local_190;
      uStack_144 = (undefined4)((ulong)local_190 >> 0x20);
      if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
        local_1e0 = 0x10a23f;
        (*pcVar26)(*(undefined8 *)(this + 0x10),local_78,0);
      }
      else {
        local_1e0 = 0x109e43;
        (**(code **)(*(long *)(this + 8) + 0xe0))
                  (*(undefined8 *)(this + 0x10),this + 0x6c0,pcVar26,local_78,0);
      }
    }
  }
  else {
    local_148 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    local_1e0 = 0x109d82;
    Variant::Variant((Variant *)local_c8,(Object *)local_190);
    local_1e0 = 0x109db7;
    local_d0 = (Variant *)local_c8;
    (**(code **)(*plVar21 + 0x60))(local_78,plVar21,this + 0x6c0,&local_d0,1,&local_148);
    if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
      local_1e0 = 0x10a808;
      Variant::_clear_internal();
    }
    if (local_148 != 0) {
      if (Variant::needs_deinit[local_c8[0]] != '\0') {
        local_1e0 = 0x10a6ff;
        Variant::_clear_internal();
      }
      goto LAB_00109de8;
    }
    if (Variant::needs_deinit[local_c8[0]] != '\0') {
      local_1e0 = 0x10a230;
      Variant::_clear_internal();
    }
  }
  local_1e0 = 0x109e4e;
  Node3D::get_global_transform();
  local_1e0 = 0x109e59;
  cVar18 = Transform3D::operator!=((Transform3D *)local_78,local_a8);
  if (cVar18 != '\0') {
    local_1e0 = 0x109f3d;
    plVar21 = (long *)PhysicsServer3D::get_singleton();
    pcVar26 = *(code **)(*plVar21 + 0x3e0);
    local_1e0 = 0x109f5c;
    Variant::Variant((Variant *)local_c8,(Transform3D *)local_78);
    local_1e0 = 0x109f6e;
    (*pcVar26)(plVar21,*(undefined8 *)(this + 0x538),0,(Variant *)local_c8);
    if (Variant::needs_deinit[local_c8[0]] != '\0') {
      local_1e0 = 0x109f8e;
      Variant::_clear_internal();
    }
  }
LAB_00109e61:
  local_1e0 = 0x109e70;
  _sync_body_state(this,local_190);
  local_1e0 = 0x109e78;
  CollisionObject3D::_on_transform_changed();
  puVar36 = *(undefined1 **)(this + 0x6b8);
  if (puVar36 != (undefined1 *)0x0) {
    plVar21 = *(long **)(puVar36 + 0x20);
    *puVar36 = 1;
    iVar43 = 0;
    if (plVar21 == (long *)0x0) {
      lVar44 = 0;
    }
    else {
      do {
        lVar44 = plVar21[6];
        if (lVar44 != 0) {
          lVar27 = 0;
          do {
            lVar44 = *(long *)(lVar44 + -8);
            if ((int)lVar44 <= (int)lVar27) break;
            if (lVar44 <= lVar27) {
              local_1e0 = 1;
              uStack_1e8 = 0;
              puStack_1f0 = &_LC36;
              ppcVar32 = &pcStack_1f8;
              pcStack_1f8 = "((Vector<T> *)(this))->_cowdata.size()";
              goto LAB_00109f0e;
            }
            iVar43 = iVar43 + 1;
            local_1e0 = 0x109ec4;
            CowData<RigidBody3D::ShapePair>::_copy_on_write
                      ((CowData<RigidBody3D::ShapePair> *)(plVar21 + 6));
            lVar44 = plVar21[6];
            *(undefined1 *)(lVar44 + 8 + lVar27 * 0xc) = 0;
            lVar27 = lVar27 + 1;
          } while (lVar44 != 0);
        }
        plVar21 = (long *)*plVar21;
      } while (plVar21 != (long *)0x0);
      lVar44 = (long)iVar43 << 5;
    }
    local_1e0 = 0x10a25b;
    iVar43 = (**(code **)(*(long *)local_190 + 0x248))();
    pPVar17 = local_190;
    uVar25 = (long)iVar43 * 0x18 + 0x17;
    puVar36 = auStack_1d8;
    while (puVar35 != auStack_1d8 + -(uVar25 & 0xfffffffffffff000)) {
      puVar34 = puVar36 + -0x1000;
      *(undefined8 *)(puVar36 + -8) = *(undefined8 *)(puVar36 + -8);
      puVar35 = puVar36 + -0x1000;
      puVar36 = puVar36 + -0x1000;
    }
    uVar25 = (ulong)((uint)uVar25 & 0xff0);
    lVar27 = -uVar25;
    puVar36 = puVar34 + lVar27;
    puVar37 = puVar34 + lVar27;
    if (uVar25 != 0) {
      *(undefined8 *)(puVar34 + -8) = *(undefined8 *)(puVar34 + -8);
    }
    local_1c8 = (ulong)(puVar34 + lVar27 + 0xf) & 0xfffffffffffffff0;
    puVar15 = puVar34 + lVar27;
    while (puVar37 != puVar34 + (lVar27 - (lVar44 + 0x10U & 0xfffffffffffff000))) {
      puVar36 = puVar15 + -0x1000;
      *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
      puVar37 = puVar15 + -0x1000;
      puVar15 = puVar15 + -0x1000;
    }
    uVar25 = (ulong)((uint)(lVar44 + 0x10U) & 0xfff);
    lVar14 = -uVar25;
    puVar33 = puVar36 + lVar14;
    if (uVar25 != 0) {
      *(undefined8 *)(puVar36 + -8) = *(undefined8 *)(puVar36 + -8);
    }
    local_198 = (CowData<char32_t> *)((ulong)local_198 & 0xffffffff00000000);
    local_1d0 = (ulong)(puVar36 + lVar14 + 0xf) & 0xfffffffffffffff0;
    local_1b8 = 0;
    local_1c0 = this;
LAB_0010a330:
    pcVar26 = *(code **)(*(long *)pPVar17 + 0x248);
    *(undefined8 *)(puVar36 + lVar14 + -8) = 0x10a33d;
    iVar43 = (*pcVar26)(pPVar17);
    pCVar16 = local_198;
    this = local_1c0;
    if ((int)local_198 < iVar43) {
      pcVar26 = *(code **)(*(long *)pPVar17 + 0x278);
      *(undefined8 *)(puVar36 + lVar14 + -8) = 0x10a360;
      local_1b0 = (StringName *)(*pcVar26)(pPVar17,(ulong)local_198 & 0xffffffff);
      pcVar26 = *(code **)(*(long *)pPVar17 + 0x288);
      *(undefined8 *)(puVar36 + lVar14 + -8) = 0x10a376;
      pPVar24 = (PhysicsDirectBodyState3D *)(*pcVar26)(pPVar17,(ulong)pCVar16 & 0xffffffff);
      pcVar26 = *(code **)(*(long *)pPVar17 + 0x268);
      *(undefined8 *)(puVar36 + lVar14 + -8) = 0x10a38f;
      local_190 = pPVar24;
      uVar19 = (*pcVar26)(pPVar17,(ulong)pCVar16 & 0xffffffff);
      local_1a0 = (String *)CONCAT44(local_1a0._4_4_,uVar19);
      pcVar26 = *(code **)(*(long *)pPVar17 + 0x298);
      *(undefined8 *)(puVar36 + lVar14 + -8) = 0x10a3a4;
      iVar43 = (*pcVar26)(pPVar17,(ulong)pCVar16 & 0xffffffff);
      lVar44 = *(long *)(local_1c0 + 0x6b8);
      local_1a8 = *(RigidBody3D **)(lVar44 + 0x10);
      if ((local_1a8 != (RigidBody3D *)0x0) && (*(int *)(lVar44 + 0x34) != 0)) {
        uVar31 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar44 + 0x30) * 4))
        ;
        lVar27 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar44 + 0x30) * 8);
        uVar25 = (long)pPVar24 * 0x3ffff - 1;
        uVar25 = (uVar25 ^ uVar25 >> 0x1f) * 0x15;
        uVar25 = (uVar25 ^ uVar25 >> 0xb) * 0x41;
        uVar25 = uVar25 >> 0x16 ^ uVar25;
        uVar42 = uVar25 & 0xffffffff;
        if ((int)uVar25 == 0) {
          uVar42 = 1;
        }
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar42 * lVar27;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar31;
        lVar29 = SUB168(auVar6 * auVar10,8);
        uVar39 = *(uint *)(*(long *)(lVar44 + 0x18) + lVar29 * 4);
        uVar28 = SUB164(auVar6 * auVar10,8);
        if (uVar39 != 0) {
          uVar41 = 0;
          while ((local_1b4 = iVar43, (uint)uVar42 != uVar39 ||
                 (local_190 !=
                  *(PhysicsDirectBodyState3D **)(*(long *)(local_1a8 + lVar29 * 8) + 0x10)))) {
            uVar41 = uVar41 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(uVar28 + 1) * lVar27;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar31;
            lVar29 = SUB168(auVar7 * auVar11,8);
            uVar39 = *(uint *)(*(long *)(lVar44 + 0x18) + lVar29 * 4);
            uVar28 = SUB164(auVar7 * auVar11,8);
            if ((uVar39 == 0) ||
               (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar39 * lVar27, auVar12._8_8_ = 0,
               auVar12._0_8_ = uVar31, auVar9._8_8_ = 0,
               auVar9._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                (ulong)*(uint *)(lVar44 + 0x30) * 4) + uVar28) -
                                     SUB164(auVar8 * auVar12,8)) * lVar27, auVar13._8_8_ = 0,
               auVar13._0_8_ = uVar31, SUB164(auVar9 * auVar13,8) < uVar41)) goto LAB_0010a70e;
          }
          lVar29 = *(long *)(local_1a8 + (ulong)uVar28 * 8);
          if (lVar29 != 0) {
            lVar5 = *(long *)(lVar29 + 0x30);
            if (lVar5 == 0) goto LAB_0010a554;
            lVar44 = *(long *)(lVar5 + -8);
            iVar38 = (int)lVar44 + -1;
            if (0 < lVar44) {
              iVar40 = 0;
              if (iVar38 < 0) goto LAB_0010a554;
              goto LAB_0010a521;
            }
            *(undefined8 *)(puVar36 + lVar14 + -8) = 1;
            lVar27 = 0;
            *(undefined8 *)(puVar36 + lVar14 + -0x10) = 0;
            *(undefined **)(puVar36 + lVar14 + -0x18) = &_LC36;
            *(char **)(puVar36 + lVar14 + -0x20) = "size()";
            goto LAB_0010a7d7;
          }
        }
      }
LAB_0010a70e:
      puVar2 = (undefined8 *)(local_1c8 + (long)local_1b8 * 0x18);
      local_1b8 = local_1b8 + 1;
      *puVar2 = local_1b0;
      *(int *)((long)puVar2 + 0x14) = (int)local_1a0;
      *(int *)(puVar2 + 2) = iVar43;
      puVar2[1] = local_190;
      goto LAB_0010a751;
    }
    iVar43 = 0;
    plVar21 = *(long **)(*(long *)(local_1c0 + 0x6b8) + 0x20);
    if (plVar21 != (long *)0x0) {
      do {
        plVar22 = (long *)plVar21[6];
        if (plVar22 != (long *)0x0) {
          lVar44 = plVar22[-1];
          lVar27 = 0;
          if (0 < (int)lVar44) {
            do {
              if (lVar44 <= lVar27) {
                *(undefined8 *)(puVar36 + lVar14 + -8) = 1;
                *(undefined8 *)(puVar36 + lVar14 + -0x10) = 0;
                *(undefined **)(puVar36 + lVar14 + -0x18) = &_LC36;
                *(char **)(puVar36 + lVar14 + -0x20) = "size()";
LAB_0010a7d7:
                *(undefined8 *)(puVar36 + lVar14 + -0x28) = 0x10a7ef;
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,lVar27,lVar44,"p_index",
                           *(char **)(puVar36 + lVar14 + -0x20),*(char **)(puVar36 + lVar14 + -0x18)
                           ,(bool)puVar36[lVar14 + -0x10],(bool)puVar36[lVar14 + -8]);
                *(undefined8 *)(puVar36 + lVar14 + -8) = 0x10a7f8;
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar26 = (code *)invalidInstructionException();
                (*pcVar26)();
              }
              if ((char)plVar22[1] == '\0') {
                lVar29 = (long)iVar43;
                iVar43 = iVar43 + 1;
                plVar30 = (long *)(lVar29 * 0x20 + local_1d0);
                *plVar30 = plVar21[3];
                lVar29 = plVar21[2];
                *(undefined1 *)(plVar30 + 3) = 0;
                plVar30[1] = lVar29;
                plVar30[2] = *plVar22;
              }
              lVar27 = lVar27 + 1;
              plVar22 = (long *)((long)plVar22 + 0xc);
            } while ((int)lVar27 < (int)lVar44);
          }
        }
        plVar21 = (long *)*plVar21;
      } while (plVar21 != (long *)0x0);
      if (0 < iVar43) {
        uVar31 = (long)iVar43 * 0x20 + local_1d0;
        uVar25 = local_1d0;
        do {
          uVar23 = *(undefined8 *)(uVar25 + 8);
          uVar19 = *(undefined4 *)(uVar25 + 0x14);
          uVar4 = *(undefined4 *)(uVar25 + 0x10);
          uVar42 = uVar25 + 0x20;
          *(undefined8 *)(puVar36 + lVar14 + -8) = 0x10a025;
          _body_inout(this,0,uVar25,uVar23,uVar4,uVar19);
          uVar25 = uVar42;
        } while (uVar42 != uVar31);
      }
    }
    if (0 < local_1b8) {
      uVar25 = local_1c8 + (long)local_1b8 * 0x18;
      uVar31 = local_1c8;
      do {
        uVar23 = *(undefined8 *)(uVar31 + 8);
        uVar19 = *(undefined4 *)(uVar31 + 0x14);
        uVar4 = *(undefined4 *)(uVar31 + 0x10);
        uVar42 = uVar31 + 0x18;
        *(undefined8 *)(puVar36 + lVar14 + -8) = 0x10a070;
        _body_inout(this,1,uVar31,uVar23,uVar4,uVar19);
        uVar31 = uVar42;
      } while (uVar42 != uVar25);
    }
    **(undefined1 **)(this + 0x6b8) = 0;
  }
  if (*(int *)(this + 0x540) == 0) {
    *(undefined8 *)(puVar33 + -8) = 0x10a855;
    _err_print_error("unlock_callback","./scene/3d/physics/collision_object_3d.h",0x67,
                     "Condition \"callback_lock == 0\" is true.",0,0);
  }
  else {
    *(int *)(this + 0x540) = *(int *)(this + 0x540) + -1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar33 + -8) = 0x10ab7e;
  __stack_chk_fail();
LAB_0010a521:
  do {
    iVar20 = (iVar40 + iVar38) / 2;
    lVar27 = (long)iVar20;
    piVar1 = (int *)(lVar5 + lVar27 * 0xc);
    iVar3 = *piVar1;
    if (iVar43 != iVar3) {
      if (iVar43 < iVar3) goto LAB_0010a51a;
LAB_0010a54d:
      iVar40 = iVar20 + 1;
      if (iVar38 < iVar40) break;
      goto LAB_0010a521;
    }
    iVar3 = piVar1[1];
    if (iVar3 <= (int)local_1a0) {
      if (iVar3 < (int)local_1a0) goto LAB_0010a54d;
      if (iVar20 != -1) {
        if ((iVar40 + iVar38 < -1) || (lVar44 <= lVar27)) {
          *(undefined8 *)(puVar36 + lVar14 + -8) = 1;
          *(undefined8 *)(puVar36 + lVar14 + -0x10) = 0;
          *(undefined **)(puVar36 + lVar14 + -0x18) = &_LC36;
          ppcVar32 = (char **)(puVar36 + lVar14 + -0x20);
          *(char **)(puVar36 + lVar14 + -0x20) = "((Vector<T> *)(this))->_cowdata.size()";
LAB_00109f0e:
          ppcVar32[-1] = (char *)0x109f26;
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,lVar27,lVar44,"p_index",*ppcVar32
                     ,ppcVar32[1],*(bool *)(ppcVar32 + 2),*(bool *)(ppcVar32 + 3));
          ppcVar32[3] = (char *)0x109f2f;
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar26 = (code *)invalidInstructionException();
          (*pcVar26)();
        }
        *(undefined8 *)(puVar36 + lVar14 + -8) = 0x10a784;
        CowData<RigidBody3D::ShapePair>::_copy_on_write
                  ((CowData<RigidBody3D::ShapePair> *)(lVar29 + 0x30));
        *(undefined1 *)(lVar27 * 0xc + *(long *)(lVar29 + 0x30) + 8) = 1;
        goto LAB_0010a751;
      }
      break;
    }
LAB_0010a51a:
    iVar38 = iVar20 + -1;
  } while (iVar40 <= iVar38);
LAB_0010a554:
  puVar2 = (undefined8 *)(local_1c8 + (long)local_1b8 * 0x18);
  local_1b8 = local_1b8 + 1;
  *puVar2 = local_1b0;
  *(int *)((long)puVar2 + 0x14) = (int)local_1a0;
  *(int *)(puVar2 + 2) = iVar43;
  puVar2[1] = local_190;
LAB_0010a751:
  local_198 = (CowData<char32_t> *)CONCAT44(local_198._4_4_,(int)local_198 + 1);
  goto LAB_0010a330;
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



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
  return;
}



/* Object::_property_can_revert(StringName const&) const */

undefined8 Object::_property_can_revert(StringName *param_1)

{
  return 0;
}



/* Object::_property_get_revert(StringName const&, Variant&) const */

undefined8 Object::_property_get_revert(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_notification(int) */

void Object::_notification(int param_1)

{
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



/* MethodBind::is_valid() const */

undefined8 MethodBind::is_valid(void)

{
  return 1;
}



/* MethodBind::is_vararg() const */

undefined8 MethodBind::is_vararg(void)

{
  return 0;
}



/* Node3D::set_transform_gizmo_visible(bool) */

void __thiscall Node3D::set_transform_gizmo_visible(Node3D *this,bool param_1)

{
  this[0x518] = (Node3D)((byte)this[0x518] & 0xfb | param_1 * '\x04');
  return;
}



/* Node3D::is_transform_gizmo_visible() const */

byte __thiscall Node3D::is_transform_gizmo_visible(Node3D *this)

{
  return (byte)this[0x518] >> 2 & 1;
}



/* RigidBody3D::is_class_ptr(void*) const */

uint RigidBody3D::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x120e,in_RSI == &PhysicsBody3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x120e,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x120e,in_RSI == &CollisionObject3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x120e,in_RSI == &Node3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x120e,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* RigidBody3D::_getv(StringName const&, Variant&) const */

undefined8 RigidBody3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RigidBody3D::_setv(StringName const&, Variant const&) */

undefined8 RigidBody3D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RigidBody3D::get_inverse_mass() const */

float __thiscall RigidBody3D::get_inverse_mass(RigidBody3D *this)

{
  return _LC0 / *(float *)(this + 0x62c);
}



/* CallableCustomMethodPointer<RigidBody3D, void,
   PhysicsDirectBodyState3D*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<RigidBody3D,void,PhysicsDirectBodyState3D*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<RigidBody3D,void,PhysicsDirectBodyState3D*> *this)

{
  return;
}



/* CallableCustomMethodPointer<RigidBody3D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<RigidBody3D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<RigidBody3D,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<RigidBody3D, void, ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<RigidBody3D,void,ObjectID>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<RigidBody3D,void,ObjectID> *this)

{
  return;
}



/* MethodBindTRC<TypedArray<Node3D>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TypedArray<Node3D>>::_gen_argument_type(int param_1)

{
  return 0x1c;
}



/* MethodBindTRC<TypedArray<Node3D>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TypedArray<Node3D>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<RigidBody3D::FreezeMode>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<RigidBody3D::FreezeMode>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<RigidBody3D::FreezeMode>::get_argument_meta(int) const */

undefined8 MethodBindTRC<RigidBody3D::FreezeMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<RigidBody3D::FreezeMode>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<RigidBody3D::FreezeMode>::_gen_argument_type
          (MethodBindT<RigidBody3D::FreezeMode> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<RigidBody3D::FreezeMode>::get_argument_meta(int) const */

undefined8 MethodBindT<RigidBody3D::FreezeMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector3 const&, Vector3 const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Vector3_const&,Vector3_const&>::_gen_argument_type
          (MethodBindT<Vector3_const&,Vector3_const&> *this,int param_1)

{
  return -((uint)param_1 < 2) & 9;
}



/* MethodBindT<Vector3 const&, Vector3 const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector3_const&,Vector3_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTRC<bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTR<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTR<bool>::get_argument_meta(int) const */

undefined8 MethodBindTR<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<bool>::_gen_argument_type(int) const */

bool __thiscall MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this,int param_1)

{
  return param_1 == 0;
}



/* MethodBindT<bool>::get_argument_meta(int) const */

undefined8 MethodBindT<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindT<int>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<int>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int>::get_argument_meta(MethodBindT<int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<RigidBody3D::DampMode>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<RigidBody3D::DampMode>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<RigidBody3D::DampMode>::get_argument_meta(int) const */

undefined8 MethodBindTRC<RigidBody3D::DampMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<RigidBody3D::DampMode>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<RigidBody3D::DampMode>::_gen_argument_type
          (MethodBindT<RigidBody3D::DampMode> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<RigidBody3D::DampMode>::get_argument_meta(int) const */

undefined8 MethodBindT<RigidBody3D::DampMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Basis>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Basis>::_gen_argument_type(int param_1)

{
  return 0x11;
}



/* MethodBindTRC<Basis>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Basis>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Vector3>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector3>::_gen_argument_type(int param_1)

{
  return 9;
}



/* MethodBindTRC<Vector3>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector3>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Ref<PhysicsMaterial>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<PhysicsMaterial>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<PhysicsMaterial>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<PhysicsMaterial>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<PhysicsMaterial> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<PhysicsMaterial>const&>::_gen_argument_type
          (MethodBindT<Ref<PhysicsMaterial>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<PhysicsMaterial> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<PhysicsMaterial>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<RigidBody3D::CenterOfMassMode>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<RigidBody3D::CenterOfMassMode>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<RigidBody3D::CenterOfMassMode>::get_argument_meta(int) const */

undefined8 MethodBindTRC<RigidBody3D::CenterOfMassMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<RigidBody3D::CenterOfMassMode>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<RigidBody3D::CenterOfMassMode>::_gen_argument_type
          (MethodBindT<RigidBody3D::CenterOfMassMode> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<RigidBody3D::CenterOfMassMode>::get_argument_meta(int) const */

undefined8 MethodBindT<RigidBody3D::CenterOfMassMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Vector3 const&>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector3_const&>::_gen_argument_type(int param_1)

{
  return 9;
}



/* MethodBindTRC<Vector3 const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector3_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector3 const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Vector3_const&>::_gen_argument_type(MethodBindT<Vector3_const&> *this,int param_1)

{
  return -(param_1 == 0) & 9;
}



/* MethodBindT<Vector3 const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector3_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<float>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<float>::_gen_argument_type(int param_1)

{
  return 3;
}



/* MethodBindTRC<float>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<float>::get_argument_meta(MethodBindTRC<float> *this,int param_1)

{
  return param_1 >> 0x1f & 9;
}



/* MethodBindT<float>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<float>::_gen_argument_type(MethodBindT<float> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<float>::get_argument_meta(int) const */

byte __thiscall MethodBindT<float>::get_argument_meta(MethodBindT<float> *this,int param_1)

{
  return -(param_1 == 0) & 9;
}



/* CallableCustomMethodPointer<RigidBody3D, void,
   PhysicsDirectBodyState3D*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<RigidBody3D,void,PhysicsDirectBodyState3D*>::get_argument_count
          (CallableCustomMethodPointer<RigidBody3D,void,PhysicsDirectBodyState3D*> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<RigidBody3D, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<RigidBody3D,void>::get_argument_count
          (CallableCustomMethodPointer<RigidBody3D,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<RigidBody3D, void, ObjectID>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<RigidBody3D,void,ObjectID>::get_argument_count
          (CallableCustomMethodPointer<RigidBody3D,void,ObjectID> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<RigidBody3D, void, ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<RigidBody3D,void,ObjectID>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<RigidBody3D,void,ObjectID> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<RigidBody3D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<RigidBody3D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<RigidBody3D,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<RigidBody3D, void,
   PhysicsDirectBodyState3D*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<RigidBody3D,void,PhysicsDirectBodyState3D*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<RigidBody3D,void,PhysicsDirectBodyState3D*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* MethodBindT<RigidBody3D::CenterOfMassMode>::~MethodBindT() */

void __thiscall
MethodBindT<RigidBody3D::CenterOfMassMode>::~MethodBindT
          (MethodBindT<RigidBody3D::CenterOfMassMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001207b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<RigidBody3D::CenterOfMassMode>::~MethodBindT() */

void __thiscall
MethodBindT<RigidBody3D::CenterOfMassMode>::~MethodBindT
          (MethodBindT<RigidBody3D::CenterOfMassMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001207b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<RigidBody3D::CenterOfMassMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<RigidBody3D::CenterOfMassMode>::~MethodBindTRC
          (MethodBindTRC<RigidBody3D::CenterOfMassMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120810;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<RigidBody3D::CenterOfMassMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<RigidBody3D::CenterOfMassMode>::~MethodBindTRC
          (MethodBindTRC<RigidBody3D::CenterOfMassMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120810;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector3 const&>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3_const&>::~MethodBindTRC(MethodBindTRC<Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120750;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector3 const&>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3_const&>::~MethodBindTRC(MethodBindTRC<Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120750;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<PhysicsMaterial> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<PhysicsMaterial>const&>::~MethodBindT(MethodBindT<Ref<PhysicsMaterial>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120870;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<PhysicsMaterial> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<PhysicsMaterial>const&>::~MethodBindT(MethodBindT<Ref<PhysicsMaterial>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120870;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<PhysicsMaterial>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<PhysicsMaterial>>::~MethodBindTRC(MethodBindTRC<Ref<PhysicsMaterial>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001208d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<PhysicsMaterial>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<PhysicsMaterial>>::~MethodBindTRC(MethodBindTRC<Ref<PhysicsMaterial>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001208d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Basis>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Basis>::~MethodBindTRC(MethodBindTRC<Basis> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120990;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Basis>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Basis>::~MethodBindTRC(MethodBindTRC<Basis> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120990;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<RigidBody3D::DampMode>::~MethodBindT() */

void __thiscall
MethodBindT<RigidBody3D::DampMode>::~MethodBindT(MethodBindT<RigidBody3D::DampMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001209f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<RigidBody3D::DampMode>::~MethodBindT() */

void __thiscall
MethodBindT<RigidBody3D::DampMode>::~MethodBindT(MethodBindT<RigidBody3D::DampMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001209f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<RigidBody3D::DampMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<RigidBody3D::DampMode>::~MethodBindTRC(MethodBindTRC<RigidBody3D::DampMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120a50;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<RigidBody3D::DampMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<RigidBody3D::DampMode>::~MethodBindTRC(MethodBindTRC<RigidBody3D::DampMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120a50;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120630;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120630;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120690;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120690;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120ab0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120ab0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120b10;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120b10;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120bd0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120bd0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector3 const&, Vector3 const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector3_const&,Vector3_const&>::~MethodBindT
          (MethodBindT<Vector3_const&,Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120c90;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector3 const&, Vector3 const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector3_const&,Vector3_const&>::~MethodBindT
          (MethodBindT<Vector3_const&,Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120c90;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector3 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001206f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector3 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001206f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector3>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120930;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector3>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120930;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120b70;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120b70;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120c30;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120c30;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<RigidBody3D::FreezeMode>::~MethodBindT() */

void __thiscall
MethodBindT<RigidBody3D::FreezeMode>::~MethodBindT(MethodBindT<RigidBody3D::FreezeMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120cf0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<RigidBody3D::FreezeMode>::~MethodBindT() */

void __thiscall
MethodBindT<RigidBody3D::FreezeMode>::~MethodBindT(MethodBindT<RigidBody3D::FreezeMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120cf0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<RigidBody3D::FreezeMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<RigidBody3D::FreezeMode>::~MethodBindTRC(MethodBindTRC<RigidBody3D::FreezeMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120d50;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<RigidBody3D::FreezeMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<RigidBody3D::FreezeMode>::~MethodBindTRC(MethodBindTRC<RigidBody3D::FreezeMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120d50;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TypedArray<Node3D>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Node3D>>::~MethodBindTRC(MethodBindTRC<TypedArray<Node3D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120db0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TypedArray<Node3D>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Node3D>>::~MethodBindTRC(MethodBindTRC<TypedArray<Node3D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00120db0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RigidBody3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RigidBody3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Node3D::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* RigidBody3D::_property_can_revertv(StringName const&) const */

undefined8 RigidBody3D::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00127008 != Object::_property_can_revert) {
    uVar1 = Node3D::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RigidBody3D::ShapePair>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RigidBody3D::ShapePair>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<RigidBody3D, void, PhysicsDirectBodyState3D*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<RigidBody3D,void,PhysicsDirectBodyState3D*>::get_object
          (CallableCustomMethodPointer<RigidBody3D,void,PhysicsDirectBodyState3D*> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010c6ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010c6ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010c6ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<RigidBody3D, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<RigidBody3D,void>::get_object
          (CallableCustomMethodPointer<RigidBody3D,void> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010c7ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010c7ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010c7ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<RigidBody3D, void, ObjectID>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<RigidBody3D,void,ObjectID>::get_object
          (CallableCustomMethodPointer<RigidBody3D,void,ObjectID> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010c8ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010c8ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010c8ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* RigidBody3D::_validate_propertyv(PropertyInfo&) const */

void __thiscall RigidBody3D::_validate_propertyv(RigidBody3D *this,PropertyInfo *param_1)

{
  long lVar1;
  char cVar2;
  
  Node::_validate_property((PropertyInfo *)this);
  if ((code *)PTR__validate_property_00127010 != Node::_validate_property) {
    Node3D::_validate_property((PropertyInfo *)this);
  }
  if ((*(int *)(this + 0x63c) == 1) ||
     (cVar2 = String::operator==((String *)(param_1 + 8),"center_of_mass"), cVar2 == '\0')) {
    lVar1 = *(long *)(this + 0x6b8);
  }
  else {
    lVar1 = *(long *)(this + 0x6b8);
    *(undefined4 *)(param_1 + 0x28) = 2;
  }
  if ((lVar1 == 0) &&
     (cVar2 = String::operator==((String *)(param_1 + 8),"max_contacts_reported"), cVar2 != '\0')) {
    *(undefined4 *)(param_1 + 0x28) = 2;
  }
  return;
}



/* RigidBody3D::_notificationv(int, bool) */

void __thiscall RigidBody3D::_notificationv(RigidBody3D *this,int param_1,bool param_2)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)this;
  if (param_2) {
    if (param_1 == 10) {
      lVar1 = Engine::get_singleton();
      if (*(char *)(lVar1 + 0xc0) != '\0') {
        Node3D::set_notify_local_transform(SUB81(this,0));
      }
    }
    else if (param_1 == 0x2c) {
      Node::update_configuration_warnings();
    }
    if ((code *)PTR__notification_00127018 != Node3D::_notification) {
      CollisionObject3D::_notification(iVar2);
    }
    Node3D::_notification(iVar2);
    Node::_notification(iVar2);
    return;
  }
  Node::_notification(iVar2);
  Node3D::_notification(iVar2);
  if ((code *)PTR__notification_00127018 != Node3D::_notification) {
    CollisionObject3D::_notification(iVar2);
  }
  if (param_1 == 10) {
    lVar1 = Engine::get_singleton();
    if (*(char *)(lVar1 + 0xc0) != '\0') {
      Node3D::set_notify_local_transform(SUB81(this,0));
      return;
    }
  }
  else if (param_1 == 0x2c) {
    Node::update_configuration_warnings();
    return;
  }
  return;
}



/* CallableCustomMethodPointerBase::get_as_text() const */

void CallableCustomMethodPointerBase::get_as_text(void)

{
  char *__s;
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  __s = *(char **)(in_RSI + 0x20);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (__s != (char *)0x0) {
    strlen(__s);
  }
  String::parse_latin1(in_RDI);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<RigidBody3D::ShapePair>::_ref(CowData<RigidBody3D::ShapePair> const&) [clone .part.0] */

void __thiscall
CowData<RigidBody3D::ShapePair>::_ref(CowData<RigidBody3D::ShapePair> *this,CowData *param_1)

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



/* RigidBody3D::_get_class_namev() const */

undefined8 * RigidBody3D::_get_class_namev(void)

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
LAB_0010cc63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010cc63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RigidBody3D");
      goto LAB_0010ccce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RigidBody3D");
LAB_0010ccce:
  return &_get_class_namev()::_class_name_static;
}



/* RigidBody3D::get_class() const */

void RigidBody3D::get_class(void)

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



/* MethodBindTRC<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC36;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010cf1c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010cf1c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC36;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 1;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010d09c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010d09c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3 const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector3_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC36;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 9;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010d21c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010d21c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector3>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC36;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 9;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010d39c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010d39c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<float>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC36;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 3;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010d51c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010d51c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC36;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 1;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010d69c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010d69c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Node3D>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<TypedArray<Node3D>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "Node3D";
  local_40 = 6;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x1c;
  puVar3[6] = 0x1f;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
      if (*(char **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(char **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010d82c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010d82c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<PhysicsMaterial>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<PhysicsMaterial>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "PhysicsMaterial";
  local_40 = 0xf;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x18;
  puVar3[6] = 0x11;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] != 0x11) {
      StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
      goto LAB_0010d930;
    }
  }
  StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
  if (*(char **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar3 + 4) = local_48;
  }
LAB_0010d930:
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
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Basis>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Basis>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC36;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x11;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010db4c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010db4c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
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



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall
PropertyInfo::PropertyInfo
          (PropertyInfo *this,undefined4 param_2,CowData *param_3,int param_4,CowData *param_5,
          undefined4 param_6,StringName *param_7)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  lVar1 = *(long *)param_3;
  *(undefined4 *)this = param_2;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  }
  *(undefined8 *)(this + 0x20) = 0;
  lVar1 = *(long *)param_5;
  *(undefined8 *)(this + 0x10) = 0;
  *(int *)(this + 0x18) = param_4;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),param_5);
    param_4 = *(int *)(this + 0x18);
  }
  *(undefined4 *)(this + 0x28) = param_6;
  if (param_4 == 0x11) {
    StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
    if (*(long *)(this + 0x10) == local_48) {
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(this + 0x10) = local_48;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    StringName::operator=((StringName *)(this + 0x10),param_7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::is_class(String const&) const */

undefined8 __thiscall Node3D::is_class(Node3D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010de1f;
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
LAB_0010de1f:
    cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0010ded3;
  }
  cVar6 = String::operator==((String *)param_1,"Node3D");
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
              if (lVar5 == 0) goto LAB_0010dfab;
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
LAB_0010dfab:
      cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_0010ded3;
    }
    cVar6 = String::operator==((String *)param_1,"Node");
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
                if (lVar5 == 0) goto LAB_0010e08b;
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
LAB_0010e08b:
        cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
        if (cVar6 != '\0') goto LAB_0010ded3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==((String *)param_1,"Object");
        return uVar7;
      }
      goto LAB_0010e134;
    }
  }
LAB_0010ded3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010e134:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicsBody3D::is_class(String const&) const */

undefined8 __thiscall PhysicsBody3D::is_class(PhysicsBody3D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010e1cf;
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
LAB_0010e1cf:
    cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0010e283;
  }
  cVar6 = String::operator==((String *)param_1,"PhysicsBody3D");
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
              if (lVar5 == 0) goto LAB_0010e343;
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
LAB_0010e343:
      cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_0010e283;
    }
    cVar6 = String::operator==((String *)param_1,"CollisionObject3D");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Node3D::is_class((Node3D *)this,param_1);
        return uVar7;
      }
      goto LAB_0010e3ec;
    }
  }
LAB_0010e283:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010e3ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RigidBody3D::is_class(String const&) const */

undefined8 __thiscall RigidBody3D::is_class(RigidBody3D *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010e46f;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010e46f:
    cVar5 = String::operator==((String *)param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_0010e523;
  }
  cVar5 = String::operator==((String *)param_1,"RigidBody3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = PhysicsBody3D::is_class((PhysicsBody3D *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010e523:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x10);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plVar1[-1];
      *(undefined8 *)(this + 0x10) = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    pvVar2 = (void *)*plVar5;
    if (pvVar2 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar2 + 0x40) == plVar5) {
      lVar4 = *(long *)((long)pvVar2 + 0x30);
      lVar3 = *(long *)((long)pvVar2 + 0x38);
      *plVar5 = lVar4;
      if (pvVar2 == (void *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar4;
        lVar4 = *(long *)((long)pvVar2 + 0x30);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x38) = lVar3;
      }
      if (*(long *)((long)pvVar2 + 0x20) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x20) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 0x20);
          *(undefined8 *)((long)pvVar2 + 0x20) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
        StringName::unref();
      }
      if (*(long *)((long)pvVar2 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 8);
          *(undefined8 *)((long)pvVar2 + 8) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(pvVar2,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
  return;
}



/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x50) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x50) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      piVar2 = *(int **)(this + 0x50);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)(this + 0x50) = 0;
      if (lVar3 != 0) {
        lVar6 = 0;
        piVar5 = piVar2;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar3 != lVar6);
      }
      Memory::free_static(piVar2 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)(this + 0x40));
  if (*(long *)(this + 0x28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
  }
  return;
}



/* GetTypeInfo<PhysicsDirectBodyState3D*, void>::get_class_info() */

GetTypeInfo<PhysicsDirectBodyState3D*,void> * __thiscall
GetTypeInfo<PhysicsDirectBodyState3D*,void>::get_class_info
          (GetTypeInfo<PhysicsDirectBodyState3D*,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 0x18;
  local_38 = "PhysicsDirectBodyState3D";
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  *(undefined4 *)this = 0x18;
  *(undefined8 *)(this + 8) = 0;
  StringName::StringName((StringName *)(this + 0x10),(StringName *)&local_38);
  bVar3 = StringName::configured != '\0';
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 6;
  if ((bVar3) && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<ObjectID, RigidBody3D::BodyState, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID,
   RigidBody3D::BodyState> > >::insert(ObjectID const&, RigidBody3D::BodyState const&, bool) */

ObjectID *
HashMap<ObjectID,RigidBody3D::BodyState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,RigidBody3D::BodyState>>>
::insert(ObjectID *param_1,BodyState *param_2,bool param_3)

{
  long *plVar1;
  uint *puVar2;
  undefined1 uVar3;
  long lVar4;
  void *pvVar5;
  void *__s;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 (*pauVar30) [16];
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  undefined8 uVar34;
  void *__s_00;
  undefined8 *puVar35;
  undefined8 *in_RCX;
  int iVar36;
  undefined7 in_register_00000011;
  long *plVar37;
  long lVar38;
  long lVar39;
  uint uVar40;
  long lVar41;
  undefined8 uVar42;
  uint uVar43;
  char in_R8B;
  uint uVar44;
  uint uVar45;
  ulong uVar46;
  ulong uVar47;
  undefined1 (*pauVar48) [16];
  long in_FS_OFFSET;
  undefined1 (*pauStack_c0) [16];
  void *local_b8;
  long local_48;
  long local_40;
  
  plVar37 = (long *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  local_b8 = *(void **)(param_2 + 8);
  if (local_b8 == (void *)0x0) {
    uVar46 = (ulong)uVar40;
    uVar33 = uVar46 * 4;
    uVar47 = uVar46 * 8;
    uVar34 = Memory::alloc_static(uVar33,false);
    *(undefined8 *)(param_2 + 0x10) = uVar34;
    local_b8 = (void *)Memory::alloc_static(uVar47,false);
    *(void **)(param_2 + 8) = local_b8;
    if (uVar40 != 0) {
      pvVar5 = *(void **)(param_2 + 0x10);
      if ((pvVar5 < (void *)((long)local_b8 + uVar47)) &&
         (local_b8 < (void *)((long)pvVar5 + uVar33))) {
        uVar33 = 0;
        do {
          *(undefined4 *)((long)pvVar5 + uVar33 * 4) = 0;
          *(undefined8 *)((long)local_b8 + uVar33 * 8) = 0;
          uVar33 = uVar33 + 1;
        } while (uVar46 != uVar33);
        goto LAB_0010ec41;
      }
      memset(pvVar5,0,uVar33);
      memset(local_b8,0,uVar47);
      lVar41 = *plVar37;
      iVar36 = *(int *)(param_2 + 0x2c);
      goto LAB_0010ec51;
    }
    lVar41 = *plVar37;
    iVar36 = *(int *)(param_2 + 0x2c);
    if (local_b8 != (void *)0x0) goto LAB_0010ec51;
  }
  else {
LAB_0010ec41:
    lVar41 = *plVar37;
    iVar36 = *(int *)(param_2 + 0x2c);
LAB_0010ec51:
    if (iVar36 != 0) {
      uVar47 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4));
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar33 = lVar41 * 0x3ffff - 1;
      uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
      uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
      uVar33 = uVar33 >> 0x16 ^ uVar33;
      uVar46 = uVar33 & 0xffffffff;
      if ((int)uVar33 == 0) {
        uVar46 = 1;
      }
      uVar45 = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar46 * lVar4;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar47;
      lVar38 = SUB168(auVar6 * auVar18,8);
      uVar43 = *(uint *)(*(long *)(param_2 + 0x10) + lVar38 * 4);
      uVar32 = SUB164(auVar6 * auVar18,8);
      if (uVar43 != 0) {
        do {
          if ((uVar43 == (uint)uVar46) &&
             (lVar41 == *(long *)(*(long *)((long)local_b8 + lVar38 * 8) + 0x10))) {
            lVar41 = *(long *)((long)local_b8 + (ulong)uVar32 * 8);
            *(undefined8 *)(lVar41 + 0x18) = *in_RCX;
            lVar4 = in_RCX[3];
            *(undefined1 *)(lVar41 + 0x20) = *(undefined1 *)(in_RCX + 1);
            if (*(long *)(lVar41 + 0x30) != lVar4) {
              CowData<RigidBody3D::ShapePair>::_ref
                        ((CowData<RigidBody3D::ShapePair> *)(lVar41 + 0x30),(CowData *)(in_RCX + 3))
              ;
            }
            pauStack_c0 = *(undefined1 (**) [16])(*(long *)(param_2 + 8) + (ulong)uVar32 * 8);
            goto LAB_0010f206;
          }
          uVar45 = uVar45 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar32 + 1) * lVar4;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar47;
          lVar38 = SUB168(auVar7 * auVar19,8);
          uVar43 = *(uint *)(*(long *)(param_2 + 0x10) + lVar38 * 4);
          uVar32 = SUB164(auVar7 * auVar19,8);
        } while ((uVar43 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar43 * lVar4, auVar20._8_8_ = 0,
                auVar20._0_8_ = uVar47, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(param_2 + 0x28) * 4) + uVar32) -
                                      SUB164(auVar8 * auVar20,8)) * lVar4, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar47, uVar45 <= SUB164(auVar9 * auVar21,8)));
      }
    }
  }
  if ((float)uVar40 * __LC57 < (float)(iVar36 + 1)) {
    uVar40 = *(uint *)(param_2 + 0x28);
    if (uVar40 == 0x1c) {
      pauStack_c0 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010f206;
    }
    uVar33 = (ulong)(uVar40 + 1);
    uVar43 = *(uint *)(hash_table_size_primes + (ulong)uVar40 * 4);
    *(undefined4 *)(param_2 + 0x2c) = 0;
    if (uVar40 + 1 < 2) {
      uVar33 = 2;
    }
    uVar40 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    *(int *)(param_2 + 0x28) = (int)uVar33;
    pvVar5 = *(void **)(param_2 + 0x10);
    uVar46 = (ulong)uVar40;
    uVar33 = uVar46 * 4;
    uVar47 = uVar46 * 8;
    uVar34 = Memory::alloc_static(uVar33,false);
    *(undefined8 *)(param_2 + 0x10) = uVar34;
    __s_00 = (void *)Memory::alloc_static(uVar47,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar40 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar47)) && (__s_00 < (void *)((long)__s + uVar33))) {
        uVar33 = 0;
        do {
          *(undefined4 *)((long)__s + uVar33 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar33 * 8) = 0;
          uVar33 = uVar33 + 1;
        } while (uVar46 != uVar33);
      }
      else {
        memset(__s,0,uVar33);
        memset(__s_00,0,uVar47);
      }
    }
    uVar33 = 0;
    if (uVar43 != 0) {
      do {
        uVar40 = *(uint *)((long)pvVar5 + uVar33 * 4);
        if (uVar40 != 0) {
          uVar44 = 0;
          lVar41 = *(long *)(param_2 + 0x10);
          uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
          uVar47 = CONCAT44(0,uVar32);
          lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)uVar40 * lVar4;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar47;
          lVar38 = SUB168(auVar10 * auVar22,8);
          puVar2 = (uint *)(lVar41 + lVar38 * 4);
          iVar36 = SUB164(auVar10 * auVar22,8);
          uVar45 = *puVar2;
          uVar34 = *(undefined8 *)((long)local_b8 + uVar33 * 8);
          while (uVar45 != 0) {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)uVar45 * lVar4;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar47;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)((uVar32 + iVar36) - SUB164(auVar11 * auVar23,8)) * lVar4;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar47;
            uVar31 = SUB164(auVar12 * auVar24,8);
            uVar42 = uVar34;
            if (uVar31 < uVar44) {
              *puVar2 = uVar40;
              puVar35 = (undefined8 *)((long)__s_00 + lVar38 * 8);
              uVar42 = *puVar35;
              *puVar35 = uVar34;
              uVar40 = uVar45;
              uVar44 = uVar31;
            }
            uVar44 = uVar44 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)(iVar36 + 1) * lVar4;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar47;
            lVar38 = SUB168(auVar13 * auVar25,8);
            puVar2 = (uint *)(lVar41 + lVar38 * 4);
            iVar36 = SUB164(auVar13 * auVar25,8);
            uVar34 = uVar42;
            uVar45 = *puVar2;
          }
          *(undefined8 *)((long)__s_00 + lVar38 * 8) = uVar34;
          *puVar2 = uVar40;
          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
        }
        uVar33 = uVar33 + 1;
      } while (uVar33 != uVar43);
      Memory::free_static(local_b8,false);
      Memory::free_static(pvVar5,false);
    }
  }
  local_48 = 0;
  lVar41 = *plVar37;
  uVar3 = *(undefined1 *)(in_RCX + 1);
  uVar34 = *in_RCX;
  if (in_RCX[3] == 0) {
    pauStack_c0 = (undefined1 (*) [16])operator_new(0x38,"");
    *pauStack_c0 = (undefined1  [16])0x0;
    pauStack_c0[2][0] = uVar3;
    *(long *)pauStack_c0[1] = lVar41;
    *(undefined8 *)pauStack_c0[3] = 0;
    *(undefined8 *)(pauStack_c0[1] + 8) = uVar34;
LAB_0010f0ac:
    puVar35 = *(undefined8 **)(param_2 + 0x20);
    if (puVar35 != (undefined8 *)0x0) goto LAB_0010f0be;
LAB_0010f285:
    *(undefined1 (**) [16])(param_2 + 0x18) = pauStack_c0;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauStack_c0;
  }
  else {
    CowData<RigidBody3D::ShapePair>::_ref
              ((CowData<RigidBody3D::ShapePair> *)&local_48,(CowData *)(in_RCX + 3));
    lVar4 = local_48;
    pauStack_c0 = (undefined1 (*) [16])operator_new(0x38,"");
    *(undefined8 *)*pauStack_c0 = 0;
    *(undefined8 *)(*pauStack_c0 + 8) = 0;
    pauStack_c0[2][0] = uVar3;
    *(long *)pauStack_c0[1] = lVar41;
    *(undefined8 *)pauStack_c0[3] = 0;
    *(undefined8 *)(pauStack_c0[1] + 8) = uVar34;
    if (lVar4 == 0) goto LAB_0010f0ac;
    CowData<RigidBody3D::ShapePair>::_ref
              ((CowData<RigidBody3D::ShapePair> *)(pauStack_c0 + 3),(CowData *)&local_48);
    LOCK();
    plVar1 = (long *)(lVar4 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_0010f0ac;
    Memory::free_static((void *)(local_48 + -0x10),false);
    puVar35 = *(undefined8 **)(param_2 + 0x20);
    if (puVar35 == (undefined8 *)0x0) goto LAB_0010f285;
LAB_0010f0be:
    if (in_R8B == '\0') {
      *puVar35 = pauStack_c0;
      *(undefined8 **)(*pauStack_c0 + 8) = puVar35;
      *(undefined1 (**) [16])(param_2 + 0x20) = pauStack_c0;
    }
    else {
      lVar41 = *(long *)(param_2 + 0x18);
      *(undefined1 (**) [16])(lVar41 + 8) = pauStack_c0;
      *(long *)*pauStack_c0 = lVar41;
      *(undefined1 (**) [16])(param_2 + 0x18) = pauStack_c0;
    }
  }
  lVar41 = *(long *)(param_2 + 0x10);
  uVar33 = *plVar37 * 0x3ffff - 1;
  uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
  uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
  uVar33 = uVar33 >> 0x16 ^ uVar33;
  uVar47 = uVar33 & 0xffffffff;
  if ((int)uVar33 == 0) {
    uVar47 = 1;
  }
  uVar45 = 0;
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar33 = CONCAT44(0,uVar40);
  uVar32 = (uint)uVar47;
  lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar47 * lVar4;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar33;
  lVar39 = SUB168(auVar14 * auVar26,8);
  lVar38 = *(long *)(param_2 + 8);
  puVar2 = (uint *)(lVar41 + lVar39 * 4);
  iVar36 = SUB164(auVar14 * auVar26,8);
  uVar43 = *puVar2;
  pauVar30 = pauStack_c0;
  while (uVar43 != 0) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)uVar43 * lVar4;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar33;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)((uVar40 + iVar36) - SUB164(auVar15 * auVar27,8)) * lVar4;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar33;
    uVar32 = SUB164(auVar16 * auVar28,8);
    pauVar48 = pauVar30;
    if (uVar32 < uVar45) {
      *puVar2 = (uint)uVar47;
      uVar47 = (ulong)uVar43;
      puVar35 = (undefined8 *)(lVar38 + lVar39 * 8);
      pauVar48 = (undefined1 (*) [16])*puVar35;
      *puVar35 = pauVar30;
      uVar45 = uVar32;
    }
    uVar32 = (uint)uVar47;
    uVar45 = uVar45 + 1;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)(iVar36 + 1) * lVar4;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar33;
    lVar39 = SUB168(auVar17 * auVar29,8);
    puVar2 = (uint *)(lVar41 + lVar39 * 4);
    iVar36 = SUB164(auVar17 * auVar29,8);
    pauVar30 = pauVar48;
    uVar43 = *puVar2;
  }
  *(undefined1 (**) [16])(lVar38 + lVar39 * 8) = pauVar30;
  *puVar2 = uVar32;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0010f206:
  *(undefined1 (**) [16])param_1 = pauStack_c0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Callable create_custom_callable_function_pointer<RigidBody3D, ObjectID>(RigidBody3D*, char
   const*, void (RigidBody3D::*)(ObjectID)) */

RigidBody3D *
create_custom_callable_function_pointer<RigidBody3D,ObjectID>
          (RigidBody3D *param_1,char *param_2,_func_void_ObjectID *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC36;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00120480;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_ObjectID **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable Callable::bind<ObjectID>(ObjectID) const */

Variant ** Callable::bind<ObjectID>(Variant **param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined8 local_70;
  Variant *local_68;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_3;
  Variant::Variant((Variant *)local_58,(ObjectID *)&local_70);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  local_68 = (Variant *)local_58;
  Callable::bindp(param_1,param_2);
  if (Variant::needs_deinit[(int)local_40] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable create_custom_callable_function_pointer<RigidBody3D>(RigidBody3D*, char const*, void
   (RigidBody3D::*)()) */

RigidBody3D *
create_custom_callable_function_pointer<RigidBody3D>
          (RigidBody3D *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC36;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00120510;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* void memdelete<RigidBody3D::ContactMonitor>(RigidBody3D::ContactMonitor*) */

void memdelete<RigidBody3D::ContactMonitor>(ContactMonitor *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x10);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(param_1 + 0x34) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x30) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x18) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(param_1 + 0x18) + lVar4) = 0;
            if (*(long *)((long)pvVar5 + 0x30) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x30) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x30);
                *(undefined8 *)((long)pvVar5 + 0x30) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(param_1 + 0x10);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010f75e;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(param_1 + 0x18),false);
  }
LAB_0010f75e:
  Memory::free_static(param_1,false);
  return;
}



/* MethodDefinition D_METHOD<char const*>(char const*, char const* const) */

char * D_METHOD<char_const*>(char *param_1,char *param_2)

{
  long in_FS_OFFSET;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined1 *local_28 [3];
  long local_10;
  
  local_28[0] = local_38;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  D_METHODP(param_1,(char ***)param_2,(uint)local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
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



/* CallableCustomMethodPointer<RigidBody3D, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<RigidBody3D,void>::call
          (CallableCustomMethodPointer<RigidBody3D,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010fa2f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010fa2f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010fa08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010faf1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010fa2f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC75,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010faf1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<RigidBody3D, void, PhysicsDirectBodyState3D*>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<RigidBody3D,void,PhysicsDirectBodyState3D*>::call
          (CallableCustomMethodPointer<RigidBody3D,void,PhysicsDirectBodyState3D*> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010fd35;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar10[1] == 0) goto LAB_0010fd35;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar5 == '\0') {
LAB_0010fc40:
          uVar4 = _LC76;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = *param_1;
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&PhysicsDirectBodyState3D::typeinfo,0
                                     ), lVar8 == 0)) && (pOVar6 != (Object *)0x0))
          goto LAB_0010fc40;
        }
        pOVar6 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)
                   __dynamic_cast(pOVar6,&Object::typeinfo,&PhysicsDirectBodyState3D::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010fca7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar6);
          return;
        }
        goto LAB_0010fdf7;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010fd35:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC75,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref(local_68);
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010fdf7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<RigidBody3D, void, ObjectID>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<RigidBody3D,void,ObjectID>::call
          (CallableCustomMethodPointer<RigidBody3D,void,ObjectID> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010ffb9;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010ffb9;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar5 = _LC77;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar5;
        }
        uVar5 = Variant::operator_cast_to_ObjectID(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010ff68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5);
          return;
        }
        goto LAB_0011007b;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010ffb9:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC75,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011007b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<PhysicsMaterial> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<PhysicsMaterial>const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_001100cb;
  local_78 = 0;
  local_80 = 0;
  local_68 = "PhysicsMaterial";
  local_60._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00110265:
    local_40 = 6;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 == 0x11) goto LAB_00110265;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar4 = local_68._0_4_;
  if (*(long *)(puVar4 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
    uVar2 = local_60._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined8 *)(puVar4 + 2) = uVar2;
  }
  if (*(long *)(puVar4 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar2 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar4 + 4) = uVar2;
  }
  puVar4[6] = local_50;
  if (*(long *)(puVar4 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
    lVar3 = local_48;
    local_48 = 0;
    *(long *)(puVar4 + 8) = lVar3;
  }
  puVar4[10] = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_001100cb:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0011031b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC36;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00110410:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00110410;
    StringName::StringName((StringName *)&local_70,(CowData<char32_t> *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0011031b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<float>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0011055b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC36;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00110650:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00110650;
    StringName::StringName((StringName *)&local_70,(CowData<char32_t> *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0011055b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0011079b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC36;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00110890:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00110890;
    StringName::StringName((StringName *)&local_70,(CowData<char32_t> *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0011079b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Vector3 const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Vector3_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_001109db;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC36;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,9);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00110ad0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00110ad0;
    StringName::StringName((StringName *)&local_70,(CowData<char32_t> *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_001109db:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Vector3 const&, Vector3 const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Vector3_const&,Vector3_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if ((in_EDX != 0) && (in_EDX != 1)) goto LAB_00110c26;
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC36;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_70._8_8_;
  local_70 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,9);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_00110d20:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00110d20;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_70._8_8_ == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_70._8_8_ = local_80;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_78._0_4_;
  if (*(long *)(puVar5 + 2) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_70._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_70._8_8_) {
    StringName::unref();
    uVar3 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_58;
    local_58 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_00110c26:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* Node3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Node3D::_get_property_listv(Node3D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  CowData<char32_t> *local_c0;
  StringName *local_b8;
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
    local_80 = 0;
    local_88 = 0;
    local_78 = "Node";
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "Node";
    local_90 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
               &local_80);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  local_b8 = (StringName *)&local_68;
  local_c0 = (CowData<char32_t> *)&local_70;
  local_88 = 0;
  local_90 = 0;
  local_78 = "Node3D";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Node3D";
  local_98 = 0;
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref(local_c0,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00110fb8:
    local_50 = 0x80;
    StringName::operator=(local_b8,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00110fb8;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00110fd3;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00110fd3:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)local_c0);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_b8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    local_80 = 0;
    local_78 = "Node";
    local_88 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "Node";
    local_90 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
               &local_80);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref(local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CollisionObject3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
CollisionObject3D::_get_property_listv(CollisionObject3D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  StringName *local_a0;
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
    Node3D::_get_property_listv((Node3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CollisionObject3D";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CollisionObject3D";
  local_98 = 0;
  local_70 = 0x11;
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
LAB_001115b8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001115b8;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001115da;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001115da:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  local_a0 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar5 + 4),local_a0);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CollisionObject3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node3D::_get_property_listv((Node3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicsBody3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall PhysicsBody3D::_get_property_listv(PhysicsBody3D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  StringName *local_a0;
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
    CollisionObject3D::_get_property_listv((CollisionObject3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "PhysicsBody3D";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PhysicsBody3D";
  local_98 = 0;
  local_70 = 0xd;
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
LAB_001119d8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001119d8;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001119fa;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001119fa:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  local_a0 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar5 + 4),local_a0);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"PhysicsBody3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CollisionObject3D::_get_property_listv((CollisionObject3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RigidBody3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall RigidBody3D::_get_property_listv(RigidBody3D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  StringName *local_a0;
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
    PhysicsBody3D::_get_property_listv((PhysicsBody3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "RigidBody3D";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RigidBody3D";
  local_98 = 0;
  local_70 = 0xb;
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
LAB_00111df8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00111df8;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00111e1a;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00111e1a:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  local_a0 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar5 + 4),local_a0);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RigidBody3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      PhysicsBody3D::_get_property_listv((PhysicsBody3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodInfo::MethodInfo<PropertyInfo, PropertyInfo, PropertyInfo, PropertyInfo>(String const&,
   PropertyInfo, PropertyInfo, PropertyInfo, PropertyInfo) */

void __thiscall
MethodInfo::MethodInfo<PropertyInfo,PropertyInfo,PropertyInfo,PropertyInfo>
          (MethodInfo *this,CowData *param_1,undefined4 *param_3,undefined4 *param_4,
          undefined4 *param_5,undefined4 *param_6)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
  long in_FS_OFFSET;
  undefined4 local_168 [2];
  undefined8 local_160;
  long local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_138;
  long local_130;
  long local_128;
  undefined4 local_120;
  long local_118;
  undefined4 local_110;
  undefined4 local_108;
  long local_100;
  long local_f8;
  undefined4 local_f0;
  long local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  long local_d0;
  long local_c8;
  undefined4 local_c0;
  long local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  long local_a0;
  long local_98;
  undefined4 local_90;
  long local_88;
  undefined4 local_80;
  undefined4 local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  lVar2 = *(long *)param_1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x30) = 6;
  *(undefined8 *)(this + 0x38) = 1;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)this,param_1);
  }
  local_108 = *param_6;
  local_100 = 0;
  if (*(long *)(param_6 + 2) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)(param_6 + 2));
  }
  StringName::StringName((StringName *)&local_f8,(StringName *)(param_6 + 4));
  local_f0 = param_6[6];
  local_e8 = 0;
  if (*(long *)(param_6 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)(param_6 + 8));
  }
  local_e0 = param_6[10];
  local_130 = 0;
  local_138 = *param_5;
  if (*(long *)(param_5 + 2) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_130,(CowData *)(param_5 + 2));
  }
  StringName::StringName((StringName *)&local_128,(StringName *)(param_5 + 4));
  local_120 = param_5[6];
  local_118 = 0;
  if (*(long *)(param_5 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)(param_5 + 8));
  }
  local_110 = param_5[10];
  local_160 = 0;
  local_168[0] = *param_4;
  if (*(long *)(param_4 + 2) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_160,(CowData *)(param_4 + 2));
  }
  StringName::StringName((StringName *)&local_158,(StringName *)(param_4 + 4));
  local_150 = param_4[6];
  local_148 = 0;
  if (*(long *)(param_4 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)(param_4 + 8));
  }
  local_140 = param_4[10];
  if (*(long *)(this + 0x40) == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(this + 0x40) = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  lVar2 = *(long *)(param_3 + 2);
  *puVar3 = 0;
  puVar3[6] = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = *param_3;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_3 + 2));
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_3 + 4));
  puVar3[6] = param_3[6];
  if (*(long *)(puVar3 + 8) != *(long *)(param_3 + 8)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_3 + 8));
  }
  puVar3[10] = param_3[10];
  plVar1 = *(long **)(this + 0x40);
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(long **)(puVar3 + 0x10) = plVar1;
  *(long *)(puVar3 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar3;
  }
  plVar1[1] = (long)puVar3;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar3;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  local_a0 = 0;
  local_a8 = local_108;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_100);
  }
  StringName::StringName((StringName *)&local_98,(StringName *)&local_f8);
  local_88 = 0;
  local_90 = local_f0;
  if (local_e8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_e8);
  }
  local_d0 = 0;
  local_80 = local_e0;
  local_d8 = local_138;
  if (local_130 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_130);
  }
  StringName::StringName((StringName *)&local_c8,(StringName *)&local_128);
  local_b8 = 0;
  local_c0 = local_120;
  if (local_118 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_118);
  }
  local_b0 = local_110;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)(this + 0x40),(PropertyInfo *)local_168);
  local_70 = 0;
  local_78 = local_a8;
  if (local_a0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_a0);
  }
  StringName::StringName((StringName *)&local_68,(StringName *)&local_98);
  local_58 = 0;
  local_60 = local_90;
  if (local_88 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_88);
  }
  local_50 = local_80;
  if (*(long *)(this + 0x40) == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(this + 0x40) = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  *puVar3 = 0;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = local_d8;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)&local_d0);
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_c8);
  puVar3[6] = local_c0;
  if (*(long *)(puVar3 + 8) != local_b8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_b8);
  }
  puVar3[10] = local_b0;
  plVar1 = *(long **)(this + 0x40);
  lVar2 = plVar1[1];
  *(long **)(puVar3 + 0x10) = plVar1;
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(long *)(puVar3 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar3;
  }
  plVar1[1] = (long)puVar3;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar3;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  puVar3 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  *puVar3 = 0;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = local_78;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_68);
  puVar3[6] = local_60;
  if (*(long *)(puVar3 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
  }
  puVar3[10] = local_50;
  plVar1 = *(long **)(this + 0x40);
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(long **)(puVar3 + 0x10) = plVar1;
  *(long *)(puVar3 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar3;
  }
  plVar1[1] = (long)puVar3;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar3;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((StringName::configured != '\0') && (local_158 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  if ((StringName::configured != '\0') && (local_128 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<RigidBody3D, float>(void (RigidBody3D::*)(float)) */

MethodBind * create_method_bind<RigidBody3D,float>(_func_void_float *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00120630;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "RigidBody3D";
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<RigidBody3D, float>(float (RigidBody3D::*)() const) */

MethodBind * create_method_bind<RigidBody3D,float>(_func_float *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00120690;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RigidBody3D";
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<RigidBody3D, Vector3 const&>(void (RigidBody3D::*)(Vector3
   const&)) */

MethodBind * create_method_bind<RigidBody3D,Vector3_const&>(_func_void_Vector3_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Vector3_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001206f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "RigidBody3D";
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<RigidBody3D, Vector3 const&>(Vector3 const& (RigidBody3D::*)()
   const) */

MethodBind * create_method_bind<RigidBody3D,Vector3_const&>(_func_Vector3_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Vector3_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00120750;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RigidBody3D";
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<RigidBody3D, RigidBody3D::CenterOfMassMode>(void
   (RigidBody3D::*)(RigidBody3D::CenterOfMassMode)) */

MethodBind *
create_method_bind<RigidBody3D,RigidBody3D::CenterOfMassMode>(_func_void_CenterOfMassMode *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_CenterOfMassMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001207b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "RigidBody3D";
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<RigidBody3D,
   RigidBody3D::CenterOfMassMode>(RigidBody3D::CenterOfMassMode (RigidBody3D::*)() const) */

MethodBind *
create_method_bind<RigidBody3D,RigidBody3D::CenterOfMassMode>(_func_CenterOfMassMode *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_CenterOfMassMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00120810;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RigidBody3D";
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<RigidBody3D, Ref<PhysicsMaterial> const&>(void
   (RigidBody3D::*)(Ref<PhysicsMaterial> const&)) */

MethodBind * create_method_bind<RigidBody3D,Ref<PhysicsMaterial>const&>(_func_void_Ref_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00120870;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "RigidBody3D";
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<RigidBody3D, Ref<PhysicsMaterial>>(Ref<PhysicsMaterial>
   (RigidBody3D::*)() const) */

MethodBind * create_method_bind<RigidBody3D,Ref<PhysicsMaterial>>(_func_Ref *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001208d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RigidBody3D";
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<RigidBody3D, Vector3>(Vector3 (RigidBody3D::*)() const) */

MethodBind * create_method_bind<RigidBody3D,Vector3>(_func_Vector3 *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Vector3 **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00120930;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RigidBody3D";
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<RigidBody3D, Basis>(Basis (RigidBody3D::*)() const) */

MethodBind * create_method_bind<RigidBody3D,Basis>(_func_Basis *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Basis **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00120990;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RigidBody3D";
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<RigidBody3D, RigidBody3D::DampMode>(void
   (RigidBody3D::*)(RigidBody3D::DampMode)) */

MethodBind * create_method_bind<RigidBody3D,RigidBody3D::DampMode>(_func_void_DampMode *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_DampMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001209f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "RigidBody3D";
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<RigidBody3D, RigidBody3D::DampMode>(RigidBody3D::DampMode
   (RigidBody3D::*)() const) */

MethodBind * create_method_bind<RigidBody3D,RigidBody3D::DampMode>(_func_DampMode *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_DampMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00120a50;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RigidBody3D";
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<RigidBody3D, int>(void (RigidBody3D::*)(int)) */

MethodBind * create_method_bind<RigidBody3D,int>(_func_void_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00120ab0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "RigidBody3D";
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<RigidBody3D, int>(int (RigidBody3D::*)() const) */

MethodBind * create_method_bind<RigidBody3D,int>(_func_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00120b10;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RigidBody3D";
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<RigidBody3D, bool>(void (RigidBody3D::*)(bool)) */

MethodBind * create_method_bind<RigidBody3D,bool>(_func_void_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00120b70;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "RigidBody3D";
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<RigidBody3D, bool>(bool (RigidBody3D::*)()) */

MethodBind * create_method_bind<RigidBody3D,bool>(_func_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00120bd0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RigidBody3D";
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<RigidBody3D, bool>(bool (RigidBody3D::*)() const) */

MethodBind * create_method_bind<RigidBody3D,bool>(_func_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00120c30;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RigidBody3D";
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<RigidBody3D, Vector3 const&, Vector3 const&>(void
   (RigidBody3D::*)(Vector3 const&, Vector3 const&)) */

MethodBind *
create_method_bind<RigidBody3D,Vector3_const&,Vector3_const&>
          (_func_void_Vector3_ptr_Vector3_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Vector3_ptr_Vector3_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00120c90;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "RigidBody3D";
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<RigidBody3D, RigidBody3D::FreezeMode>(void
   (RigidBody3D::*)(RigidBody3D::FreezeMode)) */

MethodBind * create_method_bind<RigidBody3D,RigidBody3D::FreezeMode>(_func_void_FreezeMode *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_FreezeMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00120cf0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "RigidBody3D";
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<RigidBody3D, RigidBody3D::FreezeMode>(RigidBody3D::FreezeMode
   (RigidBody3D::*)() const) */

MethodBind * create_method_bind<RigidBody3D,RigidBody3D::FreezeMode>(_func_FreezeMode *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_FreezeMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00120d50;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RigidBody3D";
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<RigidBody3D, TypedArray<Node3D>>(TypedArray<Node3D>
   (RigidBody3D::*)() const) */

MethodBind * create_method_bind<RigidBody3D,TypedArray<Node3D>>(_func_TypedArray *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_TypedArray **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00120db0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RigidBody3D";
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x11423a);
  if ((local_50 != 0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_48 = &_LC79;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == 0) {
      lVar4 = 0;
      lVar3 = -2;
    }
    else {
      lVar4 = *(long *)(local_50 + -8);
      lVar3 = lVar4 + -2;
      if (-1 < lVar3) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar3 * 8));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_0011430b;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar4,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_60 = 0;
  local_48 = &_LC79;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
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
LAB_0011430b:
  CowData<String>::_unref((CowData<String> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<RigidBody3D::CenterOfMassMode, void>::get_class_info() */

GetTypeInfo<RigidBody3D::CenterOfMassMode,void> * __thiscall
GetTypeInfo<RigidBody3D::CenterOfMassMode,void>::get_class_info
          (GetTypeInfo<RigidBody3D::CenterOfMassMode,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "RigidBody3D::CenterOfMassMode";
  local_40 = 0x1d;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(details *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<RigidBody3D::DampMode, void>::get_class_info() */

GetTypeInfo<RigidBody3D::DampMode,void> * __thiscall
GetTypeInfo<RigidBody3D::DampMode,void>::get_class_info
          (GetTypeInfo<RigidBody3D::DampMode,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "RigidBody3D::DampMode";
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(details *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<RigidBody3D::FreezeMode, void>::get_class_info() */

GetTypeInfo<RigidBody3D::FreezeMode,void> * __thiscall
GetTypeInfo<RigidBody3D::FreezeMode,void>::get_class_info
          (GetTypeInfo<RigidBody3D::FreezeMode,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "RigidBody3D::FreezeMode";
  local_40 = 0x17;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(details *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RigidBody3D::FreezeMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<RigidBody3D::FreezeMode>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 0x17;
  local_38 = "RigidBody3D::FreezeMode";
  String::parse_latin1((StrRange *)&local_40);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_38,(StrRange *)&local_40)
  ;
  StringName::StringName((StringName *)&local_48,(details *)&local_38,false);
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 0x10006;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  pcVar3 = local_38;
  if (local_38 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RigidBody3D::CenterOfMassMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<RigidBody3D::CenterOfMassMode>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 0x1d;
  local_38 = "RigidBody3D::CenterOfMassMode";
  String::parse_latin1((StrRange *)&local_40);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_38,(StrRange *)&local_40)
  ;
  StringName::StringName((StringName *)&local_48,(details *)&local_38,false);
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 0x10006;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  pcVar3 = local_38;
  if (local_38 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RigidBody3D::DampMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<RigidBody3D::DampMode>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 0x15;
  local_38 = "RigidBody3D::DampMode";
  String::parse_latin1((StrRange *)&local_40);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_38,(StrRange *)&local_40)
  ;
  StringName::StringName((StringName *)&local_48,(details *)&local_38,false);
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 0x10006;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  pcVar3 = local_38;
  if (local_38 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RigidBody3D::DampMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<RigidBody3D::DampMode>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_90;
  details local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x15;
    local_68 = "RigidBody3D::DampMode";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_88,(StrRange *)&local_80);
    StringName::StringName((StringName *)&local_90,local_88,false);
    local_60 = (undefined1  [16])0x0;
    local_78 = 0;
    local_70 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar4 = local_68._0_4_;
    if (*(long *)(puVar4 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8 *)(puVar4 + 2) = uVar2;
    }
    if (*(long *)(puVar4 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar4 + 4) = uVar2;
    }
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RigidBody3D::FreezeMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<RigidBody3D::FreezeMode>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_90;
  details local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x17;
    local_68 = "RigidBody3D::FreezeMode";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_88,(StrRange *)&local_80);
    StringName::StringName((StringName *)&local_90,local_88,false);
    local_60 = (undefined1  [16])0x0;
    local_78 = 0;
    local_70 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar4 = local_68._0_4_;
    if (*(long *)(puVar4 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8 *)(puVar4 + 2) = uVar2;
    }
    if (*(long *)(puVar4 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar4 + 4) = uVar2;
    }
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RigidBody3D::CenterOfMassMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<RigidBody3D::CenterOfMassMode>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_90;
  details local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x1d;
    local_68 = "RigidBody3D::CenterOfMassMode";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_88,(StrRange *)&local_80);
    StringName::StringName((StringName *)&local_90,local_88,false);
    local_60 = (undefined1  [16])0x0;
    local_78 = 0;
    local_70 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar4 = local_68._0_4_;
    if (*(long *)(puVar4 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8 *)(puVar4 + 2) = uVar2;
    }
    if (*(long *)(puVar4 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar4 + 4) = uVar2;
    }
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_realloc(long) */

undefined8 __thiscall CowData<String>::_realloc(CowData<String> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<String>::resize<false>(long) */

undefined8 __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar6) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar6 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00115560:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar10 = uVar8 + 1;
  if (lVar10 == 0) goto LAB_00115560;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00115439:
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while( true ) {
        plVar2 = (long *)(lVar6 + uVar8 * 8);
        if (*plVar2 != 0) break;
        uVar8 = uVar8 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00115439;
      }
      LOCK();
      plVar1 = (long *)(*plVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *plVar2;
        *plVar2 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_001155b6;
  }
  if (lVar10 == lVar7) {
LAB_001154df:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_001155b6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_001154ca;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_001154df;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar6 = 0;
  }
  memset(puVar9 + lVar6,0,(param_1 - lVar6) * 8);
LAB_001154ca:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<unsigned int>::_unref() */

void __thiscall CowData<unsigned_int>::_unref(CowData<unsigned_int> *this)

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



/* CowData<int>::_realloc(long) */

undefined8 __thiscall CowData<int>::_realloc(CowData<int> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<int>::resize<false>(long) */

undefined8 __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar9 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_00115880:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 4 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_00115880;
  if (lVar9 < param_1) {
    if (lVar8 != lVar3) {
      if (lVar9 == 0) {
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar7 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar7;
        goto LAB_00115791;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00115791:
      puVar7[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar8 != lVar3) && (uVar6 = _realloc(this,lVar8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* RigidBody3D::_initialize_classv() */

void RigidBody3D::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (PhysicsBody3D::initialize_class()::initialized == '\0') {
      if (CollisionObject3D::initialize_class()::initialized == '\0') {
        if (Node3D::initialize_class()::initialized == '\0') {
          if (Node::initialize_class()::initialized == '\0') {
            Object::initialize_class();
            local_68 = 0;
            local_50 = 6;
            local_58 = "Object";
            String::parse_latin1((StrRange *)&local_68);
            StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
            local_58 = "Node";
            local_70 = 0;
            local_50 = 4;
            String::parse_latin1((StrRange *)&local_70);
            StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
            if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            if ((StringName::configured != '\0') && (local_60 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            if ((code *)PTR__bind_methods_00127028 != Node::_bind_methods) {
              Node::_bind_methods();
            }
            Node::initialize_class()::initialized = '\x01';
          }
          local_58 = "Node";
          local_68 = 0;
          local_50 = 4;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
          local_58 = "Node3D";
          local_70 = 0;
          local_50 = 6;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          Node3D::_bind_methods();
          Node3D::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Node3D";
        local_50 = 6;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
        local_58 = "CollisionObject3D";
        local_70 = 0;
        local_50 = 0x11;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CollisionObject3D::_bind_methods();
        CollisionObject3D::initialize_class()::initialized = '\x01';
      }
      local_58 = "CollisionObject3D";
      local_68 = 0;
      local_50 = 0x11;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
      local_58 = "PhysicsBody3D";
      local_70 = 0;
      local_50 = 0xd;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00127020 != CollisionObject3D::_bind_methods) {
        PhysicsBody3D::_bind_methods();
      }
      PhysicsBody3D::initialize_class()::initialized = '\x01';
    }
    local_58 = "PhysicsBody3D";
    local_68 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
    local_58 = "RigidBody3D";
    local_70 = 0;
    local_50 = 0xb;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<RigidBody3D::ShapePair>::_realloc(long) */

undefined8 __thiscall
CowData<RigidBody3D::ShapePair>::_realloc(CowData<RigidBody3D::ShapePair> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<RigidBody3D::ShapePair>::resize<false>(long) */

undefined8 __thiscall
CowData<RigidBody3D::ShapePair>::resize<false>(CowData<RigidBody3D::ShapePair> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar11 = 0;
    lVar3 = 0;
  }
  else {
    lVar11 = *(long *)(lVar3 + -8);
    if (param_1 == lVar11) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar11 * 0xc;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  lVar10 = param_1 * 0xc;
  if (lVar10 == 0) {
LAB_001162a0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = lVar10 - 1U >> 1 | lVar10 - 1U;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar9 = uVar4 + 1;
  if (lVar9 == 0) goto LAB_001162a0;
  if (param_1 <= lVar11) {
    if ((lVar9 != lVar3) && (uVar7 = _realloc(this,lVar9), (int)uVar7 != 0)) {
      return uVar7;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar9 == lVar3) {
LAB_0011620c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar8[-1];
    if (param_1 <= lVar3) goto LAB_001161a4;
  }
  else {
    if (lVar11 != 0) {
      uVar7 = _realloc(this,lVar9);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_0011620c;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar3 = 0;
  }
  puVar5 = (undefined8 *)((long)puVar8 + lVar3 * 0xc);
  do {
    *puVar5 = 0;
    puVar6 = (undefined8 *)((long)puVar5 + 0xc);
    *(undefined1 *)(puVar5 + 1) = 0;
    puVar5 = puVar6;
  } while (puVar6 != (undefined8 *)(lVar10 + (long)puVar8));
LAB_001161a4:
  puVar8[-1] = param_1;
  return 0;
}



/* VSet<RigidBody3D::ShapePair>::insert(RigidBody3D::ShapePair const&) */

void __thiscall
VSet<RigidBody3D::ShapePair>::insert(VSet<RigidBody3D::ShapePair> *this,ShapePair *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  int *piVar14;
  long lVar15;
  undefined8 local_34;
  undefined1 local_2c;
  
  piVar3 = *(int **)(this + 8);
  if (piVar3 == (int *)0x0) {
    local_34 = *(undefined8 *)param_1;
    local_2c = (undefined1)*(undefined4 *)(param_1 + 8);
    iVar11 = CowData<RigidBody3D::ShapePair>::resize<false>
                       ((CowData<RigidBody3D::ShapePair> *)(this + 8),1);
    if (iVar11 != 0) goto LAB_00116560;
    lVar10 = 0;
    CowData<RigidBody3D::ShapePair>::_copy_on_write((CowData<RigidBody3D::ShapePair> *)(this + 8));
    lVar12 = *(long *)(this + 8);
    goto LAB_001164b8;
  }
  lVar12 = *(long *)(piVar3 + -2);
  iVar11 = (int)lVar12 + -1;
  if (lVar12 < 1) {
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,0,lVar12,"p_index","size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (iVar11 < 0) {
    _err_print_error("_find","./core/templates/vset.h",0x36,"low > high, this may be a bug",0,0);
    iVar6 = 0;
    piVar14 = *(int **)(this + 8);
    bVar4 = *piVar3 < *(int *)param_1;
    piVar9 = piVar3;
    if (*piVar3 == *(int *)param_1) goto LAB_001164e0;
  }
  else {
    iVar1 = *(int *)param_1;
    iVar13 = 0;
    do {
      while( true ) {
        iVar6 = (iVar13 + iVar11) / 2;
        piVar9 = piVar3 + (long)iVar6 * 3;
        iVar2 = *piVar9;
        if (iVar1 == iVar2) break;
        if (iVar1 < iVar2) goto LAB_001163da;
LAB_00116411:
        iVar13 = iVar6 + 1;
        if (iVar11 < iVar13) goto LAB_00116418;
      }
      if (piVar9[1] <= *(int *)(param_1 + 4)) {
        if (*(int *)(param_1 + 4) <= piVar9[1]) {
          return;
        }
        goto LAB_00116411;
      }
LAB_001163da:
      iVar11 = iVar6 + -1;
    } while (iVar13 <= iVar11);
LAB_00116418:
    bVar4 = iVar2 < iVar1;
    piVar14 = piVar3;
    if (iVar2 == iVar1) {
LAB_001164e0:
      bVar4 = piVar9[1] < *(int *)(param_1 + 4);
    }
  }
  local_34 = *(undefined8 *)param_1;
  iVar11 = (iVar6 + 1) - (uint)!bVar4;
  local_2c = (undefined1)*(undefined4 *)(param_1 + 8);
  lVar10 = (long)iVar11;
  if (piVar14 == (int *)0x0) {
    lVar12 = 1;
    lVar15 = 0;
  }
  else {
    lVar15 = *(long *)(piVar14 + -2);
    lVar12 = lVar15 + 1;
  }
  if ((lVar12 <= lVar10) || (iVar11 >> 7 != 0)) {
    _err_print_index_error
              ("insert","./core/templates/cowdata.h",0xf0,lVar10,lVar12,"p_pos","new_size","",false,
               false);
    return;
  }
  iVar11 = CowData<RigidBody3D::ShapePair>::resize<false>
                     ((CowData<RigidBody3D::ShapePair> *)(this + 8),lVar12);
  if (iVar11 != 0) {
LAB_00116560:
    _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                     "Condition \"err\" is true. Returning: err",0,0);
    return;
  }
  CowData<RigidBody3D::ShapePair>::_copy_on_write((CowData<RigidBody3D::ShapePair> *)(this + 8));
  lVar12 = *(long *)(this + 8);
  if (lVar10 < lVar15) {
    puVar7 = (undefined8 *)(lVar12 + lVar15 * 0xc);
    do {
      puVar8 = (undefined8 *)((long)puVar7 + -0xc);
      *puVar7 = *(undefined8 *)((long)puVar7 + -0xc);
      *(undefined1 *)(puVar7 + 1) = *(undefined1 *)((long)puVar7 + -4);
      puVar7 = puVar8;
    } while (puVar8 != (undefined8 *)(lVar12 + lVar10 * 0xc));
  }
LAB_001164b8:
  puVar7 = (undefined8 *)(lVar12 + lVar10 * 0xc);
  *puVar7 = local_34;
  *(undefined1 *)(puVar7 + 1) = local_2c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x001167c8) */
/* WARNING: Removing unreachable block (ram,0x0011695d) */
/* WARNING: Removing unreachable block (ram,0x00116969) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  Variant *this;
  int iVar1;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<TypedArray<Node3D>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<TypedArray<Node3D>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00116b70;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)((Array *)&local_58);
      Variant::Variant((Variant *)local_48,(Array *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Array::~Array((Array *)&local_58);
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00116b70:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RigidBody3D::FreezeMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<RigidBody3D::FreezeMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00116e00;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00116e00:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RigidBody3D::FreezeMode>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<RigidBody3D::FreezeMode>::validated_call
          (MethodBindTRC<RigidBody3D::FreezeMode> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001170a4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_001170a4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RigidBody3D::FreezeMode>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<RigidBody3D::FreezeMode>::ptrcall
          (MethodBindTRC<RigidBody3D::FreezeMode> *this,Object *param_1,void **param_2,void *param_3
          )

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00117263;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_00117263:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RigidBody3D::FreezeMode>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<RigidBody3D::FreezeMode>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001175a1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011742c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001175a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RigidBody3D::FreezeMode>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<RigidBody3D::FreezeMode>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00117781;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011760b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00117781:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&, Vector3 const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<Vector3_const&,Vector3_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011794f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001177fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(long *)(param_3 + 8) + 8);
    return;
  }
LAB_0011794f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&, Vector3 const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector3_const&,Vector3_const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00117b39;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x001179c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_00117b39:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  bool bVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00117c00;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      bVar2 = (bool)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,bVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00117c00:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool>::validated_call
          (MethodBindTRC<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00117e12;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar1;
LAB_00117e12:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00117fc1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar1;
LAB_00117fc1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  bool bVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001181f0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      bVar2 = (bool)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,bVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_001181f0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<bool>::validated_call
          (MethodBindTR<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118402;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar1;
LAB_00118402:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<bool>::ptrcall(MethodBindTR<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001185b1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar1;
LAB_001185b1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001188f1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011877d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001188f1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00118ad9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00118962. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_00118ad9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00118ba0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00118ba0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int>::validated_call
          (MethodBindTRC<int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118db4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_00118db4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118f63;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar1;
LAB_00118f63:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001192a1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011912c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001192a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00119481;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011930b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00119481:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RigidBody3D::DampMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<RigidBody3D::DampMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00119550;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00119550:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RigidBody3D::DampMode>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<RigidBody3D::DampMode>::validated_call
          (MethodBindTRC<RigidBody3D::DampMode> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00119764;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_00119764:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RigidBody3D::DampMode>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<RigidBody3D::DampMode>::ptrcall
          (MethodBindTRC<RigidBody3D::DampMode> *this,Object *param_1,void **param_2,void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00119913;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_00119913:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RigidBody3D::DampMode>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<RigidBody3D::DampMode>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00119c51;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00119adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00119c51:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RigidBody3D::DampMode>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<RigidBody3D::DampMode>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00119e31;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00119cbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00119e31:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Basis>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Basis>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  Basis local_58 [40];
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_88 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_00119f10;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)(local_58);
      Variant::Variant((Variant *)local_78,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_78[0];
      *(undefined8 *)(param_1 + 8) = local_70;
      *(undefined8 *)(param_1 + 0x10) = uStack_68;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00119f10:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Basis>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Basis>::validated_call
          (MethodBindTRC<Basis> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Variant **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_68 == (Variant **)*plVar3) {
      if ((StringName::configured != '\0') && (local_68 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Variant **)0x1169b8;
      local_60 = 0x35;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a141;
    }
    param_2 = local_68;
    if ((StringName::configured != '\0') && (local_68 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)(&local_58,param_1 + *(long *)(this + 0x60),param_2);
  puVar1 = *(undefined8 **)(param_3 + 8);
  *(undefined4 *)(puVar1 + 4) = local_38;
  *puVar1 = local_58;
  puVar1[1] = uStack_50;
  puVar1[2] = local_48;
  puVar1[3] = uStack_40;
LAB_0011a141:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Basis>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Basis>::ptrcall
          (MethodBindTRC<Basis> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  void **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_68 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_68 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (void **)0x1169b8;
      local_60 = 0x35;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a30f;
    }
    param_2 = local_68;
    if ((StringName::configured != '\0') && (local_68 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)(&local_58,param_1 + *(long *)(this + 0x60),param_2);
  *(undefined4 *)((long)param_3 + 0x20) = local_38;
  *(undefined8 *)param_3 = local_58;
  *(undefined8 *)((long)param_3 + 8) = uStack_50;
  *(undefined8 *)((long)param_3 + 0x10) = local_48;
  *(undefined8 *)((long)param_3 + 0x18) = uStack_40;
LAB_0011a30f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector3>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined1 local_54 [12];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_68 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      auVar3._8_4_ = local_54._8_4_;
      auVar3._0_8_ = local_54._0_8_;
      if ((StringName::configured != '\0') && (local_54 = auVar3, local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a550;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  auVar2._8_4_ = local_54._8_4_;
  auVar2._0_8_ = local_54._0_8_;
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      local_54 = (*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,(Vector3 *)local_54);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
      local_54 = auVar2;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0011a550:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector3>::validated_call
          (MethodBindTRC<Vector3> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [12];
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0x35;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a76b;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined1 (*) [12])(param_3 + 8) = auVar3;
LAB_0011a76b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector3>::ptrcall
          (MethodBindTRC<Vector3> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [12];
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0x35;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a92a;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined1 (*) [12])param_3 = auVar3;
LAB_0011a92a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RigidBody3D::CenterOfMassMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<RigidBody3D::CenterOfMassMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ab60;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0011ab60:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RigidBody3D::CenterOfMassMode>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<RigidBody3D::CenterOfMassMode>::validated_call
          (MethodBindTRC<RigidBody3D::CenterOfMassMode> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ad74;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0011ad74:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RigidBody3D::CenterOfMassMode>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<RigidBody3D::CenterOfMassMode>::ptrcall
          (MethodBindTRC<RigidBody3D::CenterOfMassMode> *this,Object *param_1,void **param_2,
          void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011af23;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0011af23:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RigidBody3D::CenterOfMassMode>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<RigidBody3D::CenterOfMassMode>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011b261;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011b0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011b261:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RigidBody3D::CenterOfMassMode>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<RigidBody3D::CenterOfMassMode>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011b441;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011b2cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011b441:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3 const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector3_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Vector3 *pVVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b510;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      pVVar2 = (Vector3 *)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,pVVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0011b510:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3 const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector3_const&>::validated_call
          (MethodBindTRC<Vector3_const&> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined8 *puVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b72d;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  puVar1 = (undefined8 *)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = *puVar1;
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(puVar1 + 1);
LAB_0011b72d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3 const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector3_const&>::ptrcall
          (MethodBindTRC<Vector3_const&> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined8 *puVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b8ec;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  puVar1 = (undefined8 *)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = *puVar1;
  *(undefined4 *)((long)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
LAB_0011b8ec:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector3_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011bc31;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011babd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0011bc31:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector3_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011be11;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011bc99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011be11:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  float fVar5;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011bee0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      fVar5 = (float)(*(code *)pVVar2)();
      Variant::Variant((Variant *)local_48,fVar5);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0011bee0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<float>::validated_call
          (MethodBindTRC<float> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  float fVar3;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c0f8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(double *)(param_3 + 8) = (double)fVar3;
LAB_0011c0f8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<float>::ptrcall
          (MethodBindTRC<float> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  float fVar3;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c2b7;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(double *)param_3 = (double)fVar3;
LAB_0011c2b7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<float>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011c609;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)*(double *)(*(long *)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x0011c492. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011c609:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011c7e9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)**param_3;
                    /* WARNING: Could not recover jumptable at 0x0011c671. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011c7e9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Node3D>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<TypedArray<Node3D>>::validated_call
          (MethodBindTRC<TypedArray<Node3D>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x1169b8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c849;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0011c849:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Node3D>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<TypedArray<Node3D>>::ptrcall
          (MethodBindTRC<TypedArray<Node3D>> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x1169b8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ca1a;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0011ca1a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<PhysicsMaterial>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Ref<PhysicsMaterial>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  char cVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x1169b8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011cca0;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar2 = local_58;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_58);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0011cca0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<PhysicsMaterial>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<PhysicsMaterial>>::ptrcall
          (MethodBindTRC<Ref<PhysicsMaterial>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x1169b8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011cf26;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_0011cf26;
    *(undefined8 *)param_3 = 0;
    goto LAB_0011cf69;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_0011cf69;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_0011cf69:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0011cf26;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_0011cf26:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<PhysicsMaterial> const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<Ref<PhysicsMaterial>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_58 == (Object *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x1169b8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d228;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_58;
  if (pOVar4 != local_58) {
    if (pOVar4 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_0011d1e6:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    else {
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&PhysicsMaterial::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_0011d1e6;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1));
  if (local_58 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_58;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_58);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_0011d228:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<PhysicsMaterial> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<PhysicsMaterial>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar4 = (long *)param_2[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar4 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x1169b8;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d4ec;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_0011d4c8:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0011d4c8;
  }
  (*pcVar5)((long *)((long)param_2 + lVar1));
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_0011d4ec:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Vector3_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined1 local_60 [4] [12];
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_78 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      auVar4._8_4_ = local_60[0]._8_4_;
      auVar4._0_8_ = local_60[0]._0_8_;
      if ((StringName::configured != '\0') && (local_60[0] = auVar4, local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d848;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011d8a0;
LAB_0011d890:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011d8a0:
        uVar7 = 4;
        goto LAB_0011d83d;
      }
      if (in_R8D == 1) goto LAB_0011d890;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,9);
    uVar5 = _LC245;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    local_60[0] = Variant::operator_cast_to_Vector3(pVVar11);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),local_60);
  }
  else {
    uVar7 = 3;
LAB_0011d83d:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0011d848:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Ref<PhysicsMaterial> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Ref<PhysicsMaterial>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  Object *pOVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar9) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x1169b8;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011dc00;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_0011dbf5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_0011dc00;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_0011dc50;
LAB_0011dc40:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011dc50:
      uVar7 = 4;
      goto LAB_0011dbf5;
    }
    if (in_R8D == 1) goto LAB_0011dc40;
    lVar10 = (long)((int)lVar2 + -1);
    if (lVar2 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar12 = pVVar12 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12);
  uVar4 = _LC76;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_48 = (Object *)0x0;
  pOVar8 = (Object *)Variant::get_validated_object();
  pOVar5 = local_48;
  if (pOVar8 != local_48) {
    if (pOVar8 == (Object *)0x0) {
      if (local_48 != (Object *)0x0) {
        local_48 = (Object *)0x0;
LAB_0011dd6d:
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(pOVar5);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
    }
    else {
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&PhysicsMaterial::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0011dd6d;
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1));
  if (local_48 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_48;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_48);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
LAB_0011dc00:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<PhysicsMaterial>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<PhysicsMaterial>>::validated_call
          (MethodBindTRC<Ref<PhysicsMaterial>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x1169b8;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011df16;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_0011df16:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, RigidBody3D::FreezeMode>(__UnexistingClass*,
   void (__UnexistingClass::*)(RigidBody3D::FreezeMode), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,RigidBody3D::FreezeMode>
               (__UnexistingClass *param_1,_func_void_FreezeMode *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0011e1bd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011e220;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011e220:
      uVar6 = 4;
LAB_0011e1bd:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0011e13b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011e13b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_FreezeMode **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC77;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0011e196. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<RigidBody3D::FreezeMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<RigidBody3D::FreezeMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011e286;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,RigidBody3D::FreezeMode>
            (p_Var2,(_func_void_FreezeMode *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011e286:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Vector3 const&, Vector3
   const&>(__UnexistingClass*, void (__UnexistingClass::*)(Vector3 const&, Vector3 const&), Variant
   const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Vector3_const&,Vector3_const&>
               (__UnexistingClass *param_1,_func_void_Vector3_ptr_Vector3_ptr *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  Variant *this;
  Variant *this_00;
  long in_FS_OFFSET;
  long in_stack_00000008;
  undefined1 local_78 [3] [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)param_5;
  if (uVar10 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar10;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_0011e5d8;
      this = (Variant *)*plVar8;
LAB_0011e62d:
      this_00 = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar11 = (int)lVar2;
      if (iVar11 < iVar6) {
LAB_0011e5d8:
        uVar7 = 4;
        goto LAB_0011e5dd;
      }
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_0011e648;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0011e62d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0011e648:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_Vector3_ptr_Vector3_ptr **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,9);
    uVar4 = _LC247;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    local_54 = Variant::operator_cast_to_Vector3(this_00);
    local_48 = local_54;
    local_3c = local_54;
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,9);
    uVar4 = _LC245;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    local_78[0] = Variant::operator_cast_to_Vector3(this);
    local_54 = local_78[0];
    (*param_2)((Vector3 *)(param_1 + (long)param_3),(Vector3 *)local_78);
  }
  else {
    uVar7 = 3;
LAB_0011e5dd:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&, Vector3 const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Vector3_const&,Vector3_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011e6e6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Vector3_const&,Vector3_const&>
            (p_Var2,(_func_void_Vector3_ptr_Vector3_ptr *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011e6e6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,bool>
               (__UnexistingClass *param_1,_func_void_bool *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0011e9ad;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011ea10;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011ea10:
      uVar6 = 4;
LAB_0011e9ad:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0011e92b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011e92b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC248;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x0011e987. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011ea76;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var2,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011ea76:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,int>
               (__UnexistingClass *param_1,_func_void_int *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0011ed3d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011eda0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011eda0:
      uVar6 = 4;
LAB_0011ed3d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0011ecbb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011ecbb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC77;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0011ed16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  char *pcVar1;
  long *plVar2;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var3;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var3 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var3 != (__UnexistingClass *)0x0) && (*(long *)(p_Var3 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var3 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var3 + 8) == 0) {
      plVar2 = *(long **)(p_Var3 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)p_Var3 + 0x40))(p_Var3);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(p_Var3 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011ee06;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var3,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011ee06:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, RigidBody3D::DampMode>(__UnexistingClass*, void
   (__UnexistingClass::*)(RigidBody3D::DampMode), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,RigidBody3D::DampMode>
               (__UnexistingClass *param_1,_func_void_DampMode *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0011f0ed;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011f150;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011f150:
      uVar6 = 4;
LAB_0011f0ed:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0011f06b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011f06b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_DampMode **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC77;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0011f0c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<RigidBody3D::DampMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<RigidBody3D::DampMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011f1b6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,RigidBody3D::DampMode>
            (p_Var2,(_func_void_DampMode *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011f1b6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   RigidBody3D::CenterOfMassMode>(__UnexistingClass*, void
   (__UnexistingClass::*)(RigidBody3D::CenterOfMassMode), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,RigidBody3D::CenterOfMassMode>
               (__UnexistingClass *param_1,_func_void_CenterOfMassMode *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0011f47d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011f4e0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011f4e0:
      uVar6 = 4;
LAB_0011f47d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0011f3fb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011f3fb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_CenterOfMassMode **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC77;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0011f456. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<RigidBody3D::CenterOfMassMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<RigidBody3D::CenterOfMassMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011f546;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,RigidBody3D::CenterOfMassMode>
            (p_Var2,(_func_void_CenterOfMassMode *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011f546:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(float), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,float>
               (__UnexistingClass *param_1,_func_void_float *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  float fVar9;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0011f80d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011f870;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011f870:
      uVar6 = 4;
LAB_0011f80d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0011f78b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011f78b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC249;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x0011f7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(fVar9);
  return;
}



/* MethodBindT<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<float>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011f8d6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,float>
            (p_Var2,(_func_void_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011f8d6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodInfo::MethodInfo<PropertyInfo, PropertyInfo, PropertyInfo, PropertyInfo>(String const&,
   PropertyInfo, PropertyInfo, PropertyInfo, PropertyInfo) */

void __thiscall MethodInfo::MethodInfo<PropertyInfo,PropertyInfo,PropertyInfo,PropertyInfo>(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<TypedArray<Node3D>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Node3D>>::~MethodBindTRC(MethodBindTRC<TypedArray<Node3D>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<RigidBody3D::FreezeMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<RigidBody3D::FreezeMode>::~MethodBindTRC(MethodBindTRC<RigidBody3D::FreezeMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<RigidBody3D::FreezeMode>::~MethodBindT() */

void __thiscall
MethodBindT<RigidBody3D::FreezeMode>::~MethodBindT(MethodBindT<RigidBody3D::FreezeMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector3>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector3 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector3 const&, Vector3 const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector3_const&,Vector3_const&>::~MethodBindT
          (MethodBindT<Vector3_const&,Vector3_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<RigidBody3D::DampMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<RigidBody3D::DampMode>::~MethodBindTRC(MethodBindTRC<RigidBody3D::DampMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<RigidBody3D::DampMode>::~MethodBindT() */

void __thiscall
MethodBindT<RigidBody3D::DampMode>::~MethodBindT(MethodBindT<RigidBody3D::DampMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Basis>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Basis>::~MethodBindTRC(MethodBindTRC<Basis> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<PhysicsMaterial>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<PhysicsMaterial>>::~MethodBindTRC(MethodBindTRC<Ref<PhysicsMaterial>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<PhysicsMaterial> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<PhysicsMaterial>const&>::~MethodBindT(MethodBindT<Ref<PhysicsMaterial>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector3 const&>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3_const&>::~MethodBindTRC(MethodBindTRC<Vector3_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<RigidBody3D::CenterOfMassMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<RigidBody3D::CenterOfMassMode>::~MethodBindTRC
          (MethodBindTRC<RigidBody3D::CenterOfMassMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<RigidBody3D::CenterOfMassMode>::~MethodBindT() */

void __thiscall
MethodBindT<RigidBody3D::CenterOfMassMode>::~MethodBindT
          (MethodBindT<RigidBody3D::CenterOfMassMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<RigidBody3D, void, ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<RigidBody3D,void,ObjectID>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<RigidBody3D,void,ObjectID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<RigidBody3D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<RigidBody3D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<RigidBody3D,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<RigidBody3D, void,
   PhysicsDirectBodyState3D*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<RigidBody3D,void,PhysicsDirectBodyState3D*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<RigidBody3D,void,PhysicsDirectBodyState3D*> *this)

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




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltConeTwistJoint3D::_build_swing_twist(JPH::Body*, JPH::Body*, Transform3D const&, Transform3D
   const&, float, float) const */

void __thiscall
JoltConeTwistJoint3D::_build_swing_twist
          (JoltConeTwistJoint3D *this,Body *param_1,Body *param_2,Transform3D *param_3,
          Transform3D *param_4,float param_5,float param_6)

{
  long in_FS_OFFSET;
  float fVar1;
  uint uVar2;
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [16];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  undefined1 local_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined8 local_3c;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_f0 = 0;
  local_f8 = &JPH::Body::sFixedToWorld;
  local_3c = _LC6;
  local_20 = _LC6;
  local_ec = 1;
  local_e8 = 0;
  local_e0 = 0x3f80000000000000;
  local_d8 = 0;
  local_50 = 0;
  local_34 = 0;
  local_54 = 0;
  local_4c = __LC5;
  uStack_44 = _LC6;
  local_30 = __LC5;
  uStack_28 = _LC6;
  uVar2 = (uint)_LC1;
  fVar1 = (float)_LC0;
  if ((param_6 < 0.0) || ((float)_LC0 < param_6)) {
    if (0.0 <= param_5) goto LAB_0010011b;
  }
  else if (0.0 <= param_5) {
    if (this[0xd1] != (JoltConeTwistJoint3D)0x0) {
      uVar2 = (uint)param_6 ^ _LC16;
      fVar1 = param_6;
    }
LAB_0010011b:
    local_5c = CONCAT44(fVar1,uVar2);
    if (this[0xd0] == (JoltConeTwistJoint3D)0x0) {
      local_64 = CONCAT44(_LC0._4_4_,(float)_LC0);
      if (param_5 <= (float)_LC0) goto LAB_00100149;
    }
    else if (param_5 <= (float)_LC0) {
      local_64 = CONCAT44(param_5,param_5);
      goto LAB_00100149;
    }
  }
  local_64 = CONCAT44(_LC0._4_4_,(float)_LC0);
  local_5c = CONCAT44(_LC1._4_4_,(uint)_LC1);
LAB_00100149:
  uStack_b0 = *(undefined4 *)(param_3 + 0x18);
  local_d0 = 0;
  local_68 = 1;
  local_c8._12_4_ = SUB164(*(undefined1 (*) [16])(param_3 + 0x20),0xc);
  local_c8._0_12_ = SUB1612(*(undefined1 (*) [16])(param_3 + 0x20),4);
  local_b8 = *(undefined4 *)param_3;
  uStack_b4 = *(undefined4 *)(param_3 + 0xc);
  uStack_80 = *(undefined4 *)(param_4 + 0x18);
  local_a8 = CONCAT44(*(undefined4 *)(param_3 + 0x14),*(undefined4 *)(param_3 + 8));
  uStack_a0 = CONCAT44(*(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x20));
  local_98._12_4_ = SUB164(*(undefined1 (*) [16])(param_4 + 0x20),0xc);
  local_98._0_12_ = SUB1612(*(undefined1 (*) [16])(param_4 + 0x20),4);
  local_88 = *(undefined4 *)param_4;
  uStack_84 = *(undefined4 *)(param_4 + 0xc);
  local_78 = CONCAT44(*(undefined4 *)(param_4 + 0x14),*(undefined4 *)(param_4 + 8));
  uStack_70 = CONCAT44(*(undefined4 *)(param_4 + 0x20),*(undefined4 *)(param_4 + 0x20));
  uStack_ac = uStack_b0;
  uStack_7c = uStack_80;
  if (param_1 == (Body *)0x0) {
    JPH::SwingTwistConstraintSettings::Create((Body *)&local_f8,(Body *)&JPH::Body::sFixedToWorld);
  }
  else if (param_2 == (Body *)0x0) {
    JPH::SwingTwistConstraintSettings::Create((Body *)&local_f8,param_1);
  }
  else {
    JPH::SwingTwistConstraintSettings::Create((Body *)&local_f8,param_1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JoltConeTwistJoint3D::rebuild() */

void __thiscall JoltConeTwistJoint3D::rebuild(JoltConeTwistJoint3D *this)

{
  long *plVar1;
  double dVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  JoltJoint3D *pJVar6;
  Body *pBVar7;
  Body *pBVar8;
  long *plVar9;
  int iVar10;
  long in_FS_OFFSET;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  Transform3D local_f8 [16];
  undefined1 local_e8 [16];
  uint local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  code *local_c8;
  JoltSpace3D *local_c0;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  uint local_68;
  undefined8 local_64;
  undefined4 local_5c;
  Body *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  JoltJoint3D::destroy();
  pJVar6 = (JoltJoint3D *)JoltJoint3D::get_space();
  if (pJVar6 != (JoltJoint3D *)0x0) {
    JoltSpace3D::write_bodies((BodyID *)&local_c8,(int)pJVar6);
    iVar5 = JoltBodyAccessor3D::get_count();
    iVar10 = (int)(BodyID *)&local_c8;
    if (0 < iVar5) {
      JoltBodyAccessor3D::get_at(iVar10);
    }
    JoltBodyWriter3D::JoltBodyWriter3D((JoltBodyWriter3D *)local_88,local_c0);
    JoltBodyAccessor3D::acquire((BodyID *)local_88);
    pBVar7 = (Body *)JoltBodyWriter3D::try_get();
    local_48 = pBVar7;
    JoltBodyAccessor3D::release();
    local_88._0_8_ = JoltBodyAccessor3D::acquire;
    JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_88);
    iVar5 = JoltBodyAccessor3D::get_count();
    if (1 < iVar5) {
      JoltBodyAccessor3D::get_at(iVar10);
    }
    JoltBodyWriter3D::JoltBodyWriter3D((JoltBodyWriter3D *)local_88,local_c0);
    JoltBodyAccessor3D::acquire((BodyID *)local_88);
    pBVar8 = (Body *)JoltBodyWriter3D::try_get();
    local_48 = pBVar8;
    JoltBodyAccessor3D::release();
    local_88._0_8_ = JoltBodyAccessor3D::acquire;
    JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_88);
    if (pBVar7 == (Body *)0x0 && pBVar8 == (Body *)0x0) {
      _err_print_error("rebuild","modules/jolt_physics/joints/jolt_cone_twist_joint_3d.cpp",0x16e,
                       "Condition \"jolt_body_a == nullptr && jolt_body_b == nullptr\" is true.",0,0
                      );
    }
    else {
      local_f8 = (Transform3D  [16])ZEXT416(_LC14);
      local_d8 = _LC14;
      local_68 = _LC14;
      local_d4 = 0;
      local_cc = 0;
      local_64 = 0;
      local_5c = 0;
      local_104 = 0;
      local_fc = 0;
      local_110 = 0;
      local_108 = 0;
      local_e8 = (undefined1  [16])local_f8;
      local_88 = (undefined1  [16])local_f8;
      local_78 = (undefined1  [16])local_f8;
      JoltJoint3D::_shift_reference_frames
                ((Vector3 *)this,(Vector3 *)&local_110,(Transform3D *)&local_104,local_f8);
      plVar9 = (long *)_build_swing_twist(this,pBVar7,pBVar8,local_f8,(Transform3D *)local_88,
                                          (float)*(double *)(this + 0x98),
                                          (float)*(double *)(this + 0xa0));
      plVar3 = *(long **)(this + 0x18);
      if (plVar9 != plVar3) {
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar3 + 8))();
          }
        }
        *(long **)(this + 0x18) = plVar9;
        if (plVar9 != (long *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
      }
      JoltSpace3D::add_joint(pJVar6);
      JoltJoint3D::_update_enabled();
      JoltJoint3D::_update_iterations();
      if (*(long *)(this + 0x18) != 0) {
        JPH::SwingTwistConstraint::SetSwingMotorState(*(long *)(this + 0x18),this[0xd2]);
        if (*(long *)(this + 0x18) != 0) {
          JPH::SwingTwistConstraint::SetTwistMotorState(*(long *)(this + 0x18),this[0xd3]);
          lVar4 = *(long *)(this + 0x18);
          if (lVar4 != 0) {
            dVar2 = *(double *)(this + 0xc0);
            uVar11 = (uint)(float)*(double *)(this + 0xa8) ^ _LC16;
            uVar12 = (uint)(float)*(double *)(this + 0xb0) ^ _LC16;
            uVar13 = (uint)(float)*(double *)(this + 0xb0) ^ _LC16;
            *(uint *)(lVar4 + 0xe0) = (uint)(float)*(double *)(this + 0xb8) ^ _LC16;
            *(uint *)(lVar4 + 0xe4) = uVar11;
            *(uint *)(lVar4 + 0xe8) = uVar12;
            *(uint *)(lVar4 + 0xec) = uVar13;
            uVar11 = _LC16;
            *(ulong *)(lVar4 + 0xa8) = CONCAT44((float)dVar2,(uint)(float)dVar2 ^ _LC16);
            *(ulong *)(lVar4 + 0xc4) =
                 CONCAT44((float)*(double *)(this + 200),
                          uVar11 ^ (uint)(float)*(double *)(this + 200));
          }
        }
      }
    }
    JoltBodyAccessor3D::release();
    local_c8 = JoltBodyAccessor3D::acquire;
    JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)&local_c8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltConeTwistJoint3D::_update_swing_motor_state() */

void __thiscall JoltConeTwistJoint3D::_update_swing_motor_state(JoltConeTwistJoint3D *this)

{
  if (*(long *)(this + 0x18) != 0) {
    JPH::SwingTwistConstraint::SetSwingMotorState(*(long *)(this + 0x18),this[0xd2]);
    return;
  }
  return;
}



/* JoltConeTwistJoint3D::_update_twist_motor_state() */

void __thiscall JoltConeTwistJoint3D::_update_twist_motor_state(JoltConeTwistJoint3D *this)

{
  if (*(long *)(this + 0x18) != 0) {
    JPH::SwingTwistConstraint::SetTwistMotorState(*(long *)(this + 0x18),this[0xd3]);
    return;
  }
  return;
}



/* JoltConeTwistJoint3D::_update_motor_velocity() */

void __thiscall JoltConeTwistJoint3D::_update_motor_velocity(JoltConeTwistJoint3D *this)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  lVar1 = *(long *)(this + 0x18);
  if (lVar1 != 0) {
    uVar2 = (uint)(float)*(double *)(this + 0xa8) ^ _LC16;
    uVar3 = (uint)(float)*(double *)(this + 0xb0) ^ _LC16;
    uVar4 = (uint)(float)*(double *)(this + 0xb0) ^ _LC16;
    *(uint *)(lVar1 + 0xe0) = (uint)(float)*(double *)(this + 0xb8) ^ _LC16;
    *(uint *)(lVar1 + 0xe4) = uVar2;
    *(uint *)(lVar1 + 0xe8) = uVar3;
    *(uint *)(lVar1 + 0xec) = uVar4;
  }
  return;
}



/* JoltConeTwistJoint3D::_update_swing_motor_limit() */

void __thiscall JoltConeTwistJoint3D::_update_swing_motor_limit(JoltConeTwistJoint3D *this)

{
  if (*(long *)(this + 0x18) != 0) {
    *(ulong *)(*(long *)(this + 0x18) + 0xa8) =
         CONCAT44((float)*(double *)(this + 0xc0),(uint)(float)*(double *)(this + 0xc0) ^ _LC16);
  }
  return;
}



/* JoltConeTwistJoint3D::_update_twist_motor_limit() */

void __thiscall JoltConeTwistJoint3D::_update_twist_motor_limit(JoltConeTwistJoint3D *this)

{
  if (*(long *)(this + 0x18) != 0) {
    *(ulong *)(*(long *)(this + 0x18) + 0xc4) =
         CONCAT44((float)*(double *)(this + 200),(uint)(float)*(double *)(this + 200) ^ _LC16);
  }
  return;
}



/* JoltConeTwistJoint3D::_limits_changed() */

void __thiscall JoltConeTwistJoint3D::_limits_changed(JoltConeTwistJoint3D *this)

{
  rebuild(this);
  JoltJoint3D::_wake_up_bodies();
  return;
}



/* JoltConeTwistJoint3D::_swing_motor_state_changed() */

void __thiscall JoltConeTwistJoint3D::_swing_motor_state_changed(JoltConeTwistJoint3D *this)

{
  if (*(long *)(this + 0x18) != 0) {
    JPH::SwingTwistConstraint::SetSwingMotorState(*(long *)(this + 0x18),this[0xd2]);
  }
  JoltJoint3D::_wake_up_bodies();
  return;
}



/* JoltConeTwistJoint3D::_twist_motor_state_changed() */

void __thiscall JoltConeTwistJoint3D::_twist_motor_state_changed(JoltConeTwistJoint3D *this)

{
  if (*(long *)(this + 0x18) != 0) {
    JPH::SwingTwistConstraint::SetTwistMotorState(*(long *)(this + 0x18),this[0xd3]);
  }
  JoltJoint3D::_wake_up_bodies();
  return;
}



/* JoltConeTwistJoint3D::_motor_velocity_changed() */

void __thiscall JoltConeTwistJoint3D::_motor_velocity_changed(JoltConeTwistJoint3D *this)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  lVar1 = *(long *)(this + 0x18);
  if (lVar1 != 0) {
    uVar2 = (uint)(float)*(double *)(this + 0xa8) ^ _LC16;
    uVar3 = (uint)(float)*(double *)(this + 0xb0) ^ _LC16;
    uVar4 = (uint)(float)*(double *)(this + 0xb0) ^ _LC16;
    *(uint *)(lVar1 + 0xe0) = (uint)(float)*(double *)(this + 0xb8) ^ _LC16;
    *(uint *)(lVar1 + 0xe4) = uVar2;
    *(uint *)(lVar1 + 0xe8) = uVar3;
    *(uint *)(lVar1 + 0xec) = uVar4;
  }
  JoltJoint3D::_wake_up_bodies();
  return;
}



/* JoltConeTwistJoint3D::_swing_motor_limit_changed() */

void __thiscall JoltConeTwistJoint3D::_swing_motor_limit_changed(JoltConeTwistJoint3D *this)

{
  if (*(long *)(this + 0x18) != 0) {
    *(ulong *)(*(long *)(this + 0x18) + 0xa8) =
         CONCAT44((float)*(double *)(this + 0xc0),(uint)(float)*(double *)(this + 0xc0) ^ _LC16);
  }
  JoltJoint3D::_wake_up_bodies();
  return;
}



/* JoltConeTwistJoint3D::_twist_motor_limit_changed() */

void __thiscall JoltConeTwistJoint3D::_twist_motor_limit_changed(JoltConeTwistJoint3D *this)

{
  if (*(long *)(this + 0x18) != 0) {
    *(ulong *)(*(long *)(this + 0x18) + 0xc4) =
         CONCAT44((float)*(double *)(this + 200),(uint)(float)*(double *)(this + 200) ^ _LC16);
  }
  JoltJoint3D::_wake_up_bodies();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltConeTwistJoint3D::JoltConeTwistJoint3D(JoltJoint3D const&, JoltBody3D*, JoltBody3D*,
   Transform3D const&, Transform3D const&) */

void __thiscall
JoltConeTwistJoint3D::JoltConeTwistJoint3D
          (JoltConeTwistJoint3D *this,JoltJoint3D *param_1,JoltBody3D *param_2,JoltBody3D *param_3,
          Transform3D *param_4,Transform3D *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  JoltJoint3D::JoltJoint3D((JoltJoint3D *)this,param_1,param_2,param_3,param_4,param_5);
  *(undefined ***)this = &PTR__JoltConeTwistJoint3D_00102f20;
  uVar2 = _LC18;
  *(undefined1 (*) [16])(this + 0x98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
  uVar3 = _LC18;
  uVar1 = __LC17;
  *(undefined8 *)(this + 200) = uVar2;
  *(undefined4 *)(this + 0xd0) = 0x101;
  *(undefined8 *)(this + 0xb8) = uVar1;
  *(undefined8 *)(this + 0xc0) = uVar3;
  rebuild(this);
  return;
}



/* JoltConeTwistJoint3D::get_applied_force() const */

float __thiscall JoltConeTwistJoint3D::get_applied_force(JoltConeTwistJoint3D *this)

{
  long lVar1;
  float fVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(long *)(this + 0x18);
  if (lVar1 == 0) {
    _err_print_error("get_applied_force","modules/jolt_physics/joints/jolt_cone_twist_joint_3d.cpp",
                     0x139,"Parameter \"constraint\" is null.",0,0);
  }
  else {
    lVar3 = JoltJoint3D::get_space();
    if (lVar3 == 0) {
      _err_print_error("get_applied_force",
                       "modules/jolt_physics/joints/jolt_cone_twist_joint_3d.cpp",0x13c,
                       "Parameter \"space\" is null.",0,0);
    }
    else if (*(float *)(lVar3 + 0x80) != 0.0) {
      fVar4 = (float)*(undefined8 *)(lVar1 + 0x210);
      fVar2 = (float)*(undefined8 *)(lVar1 + 0x218);
      fVar5 = (float)((ulong)*(undefined8 *)(lVar1 + 0x210) >> 0x20);
      return SQRT(fVar5 * fVar5 + fVar4 * fVar4 + 0.0 + fVar2 * fVar2) / *(float *)(lVar3 + 0x80);
    }
  }
  return 0.0;
}



/* JoltConeTwistJoint3D::get_applied_torque() const */

float __thiscall JoltConeTwistJoint3D::get_applied_torque(JoltConeTwistJoint3D *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 0x18);
  if (lVar1 == 0) {
    _err_print_error("get_applied_torque","modules/jolt_physics/joints/jolt_cone_twist_joint_3d.cpp"
                     ,0x148,"Parameter \"constraint\" is null.",0,0);
  }
  else {
    lVar2 = JoltJoint3D::get_space();
    if (lVar2 == 0) {
      _err_print_error("get_applied_torque",
                       "modules/jolt_physics/joints/jolt_cone_twist_joint_3d.cpp",0x14b,
                       "Parameter \"space\" is null.",0,0);
    }
    else if (*(float *)(lVar2 + 0x80) != 0.0) {
      return (SQRT(*(float *)(lVar1 + 0x2cc) * *(float *)(lVar1 + 0x2cc) +
                   *(float *)(lVar1 + 0x32c) * *(float *)(lVar1 + 0x32c) + 0.0 +
                   *(float *)(lVar1 + 0x2fc) * *(float *)(lVar1 + 0x2fc)) +
             SQRT(*(float *)(lVar1 + 0x3bc) * *(float *)(lVar1 + 0x3bc) +
                  *(float *)(lVar1 + 0x38c) * *(float *)(lVar1 + 0x38c) +
                  *(float *)(lVar1 + 0x35c) * *(float *)(lVar1 + 0x35c) + 0.0)) /
             *(float *)(lVar2 + 0x80);
    }
  }
  return 0.0;
}



/* JoltConeTwistJoint3D::get_param(PhysicsServer3D::ConeTwistJointParam) const */

undefined8 __thiscall JoltConeTwistJoint3D::get_param(JoltConeTwistJoint3D *this,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  undefined8 uVar4;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_2) {
  case 0:
    uVar4 = *(undefined8 *)(this + 0x98);
    break;
  case 1:
    uVar4 = *(undefined8 *)(this + 0xa0);
    break;
  case 2:
    uVar4 = _LC31;
    break;
  case 3:
    uVar4 = _LC32;
    break;
  case 4:
    uVar4 = _LC33;
    break;
  default:
    local_40 = 0;
    local_30 = 0x57;
    local_38 = 
    "Unhandled cone twist joint parameter: \'%d\'. This should not happen. Please report this.";
    String::parse_latin1((StrRange *)&local_40);
    vformat<PhysicsServer3D::ConeTwistJointParam>(&local_38,(StrRange *)&local_40,param_2);
    _err_print_error("get_param","modules/jolt_physics/joints/jolt_cone_twist_joint_3d.cpp",0xb4,
                     "Method/function failed. Returning: 0.0",&local_38,0);
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
    uVar4 = 0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* JoltConeTwistJoint3D::set_param(PhysicsServer3D::ConeTwistJointParam, double) */

void __thiscall
JoltConeTwistJoint3D::set_param(double param_1,JoltConeTwistJoint3D *this,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  double dVar5;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_3) {
  case 0:
    *(double *)(this + 0x98) = param_1;
    rebuild(this);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00100e5d:
      JoltJoint3D::_wake_up_bodies();
      return;
    }
    goto LAB_00100e8d;
  case 1:
    *(double *)(this + 0xa0) = param_1;
    rebuild(this);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00100e5d;
    goto LAB_00100e8d;
  case 2:
    if (param_1 != _LC31) {
      dVar5 = _LC38;
      if (_LC38 <= ABS(param_1) * _LC38) {
        dVar5 = ABS(param_1) * _LC38;
      }
      if (dVar5 <= ABS(param_1 - _LC31)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Cone twist joint bias is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x77;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        uVar4 = 0xc5;
LAB_00100f4e:
        _err_print_error("set_param","modules/jolt_physics/joints/jolt_cone_twist_joint_3d.cpp",
                         uVar4,&local_38,0,1);
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
        lVar2 = local_48;
        if (local_48 != 0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
      }
    }
    break;
  case 3:
    if (param_1 != _LC32) {
      dVar5 = _LC38;
      if (_LC38 <= ABS(param_1) * _LC38) {
        dVar5 = ABS(param_1) * _LC38;
      }
      if (dVar5 <= ABS(param_1 - _LC32)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Cone twist joint softness is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x7b;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        uVar4 = 0xca;
        goto LAB_00100f4e;
      }
    }
    break;
  case 4:
    if (param_1 != _LC33) {
      dVar5 = _LC38;
      if (_LC38 <= ABS(param_1) * _LC38) {
        dVar5 = ABS(param_1) * _LC38;
      }
      if (dVar5 <= ABS(param_1 - _LC33)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Cone twist joint relaxation is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x7d;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        uVar4 = 0xcf;
        goto LAB_00100f4e;
      }
    }
    break;
  default:
    local_40 = 0;
    local_30 = 0x57;
    local_38 = 
    "Unhandled cone twist joint parameter: \'%d\'. This should not happen. Please report this.";
    String::parse_latin1((StrRange *)&local_40);
    vformat<PhysicsServer3D::ConeTwistJointParam>(&local_38,(StrRange *)&local_40,param_3);
    _err_print_error("set_param","modules/jolt_physics/joints/jolt_cone_twist_joint_3d.cpp",0xd3,
                     "Method/function failed.",&local_38,0);
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
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100e8d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltConeTwistJoint3D::get_jolt_param(JoltPhysicsServer3D::ConeTwistJointParamJolt) const */

undefined8 __thiscall
JoltConeTwistJoint3D::get_jolt_param(JoltConeTwistJoint3D *this,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  undefined8 uVar4;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_2) {
  case 100:
    uVar4 = *(undefined8 *)(this + 0xa8);
    break;
  case 0x65:
    uVar4 = *(undefined8 *)(this + 0xb0);
    break;
  case 0x66:
    uVar4 = *(undefined8 *)(this + 0xb8);
    break;
  case 0x67:
    uVar4 = *(undefined8 *)(this + 0xc0);
    break;
  case 0x68:
    uVar4 = *(undefined8 *)(this + 200);
    break;
  default:
    local_40 = 0;
    local_30 = 0x46;
    local_38 = "Unhandled parameter: \'%d\'. This should not happen. Please report this.";
    String::parse_latin1((StrRange *)&local_40);
    vformat<JoltPhysicsServer3D::ConeTwistJointParamJolt>(&local_38,(StrRange *)&local_40,param_2);
    _err_print_error("get_jolt_param","modules/jolt_physics/joints/jolt_cone_twist_joint_3d.cpp",
                     0xea,"Method/function failed. Returning: 0.0",&local_38,0);
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
    uVar4 = 0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* JoltConeTwistJoint3D::set_jolt_param(JoltPhysicsServer3D::ConeTwistJointParamJolt, double) */

void __thiscall
JoltConeTwistJoint3D::set_jolt_param(double param_1,JoltConeTwistJoint3D *this,undefined4 param_3)

{
  long *plVar1;
  double dVar2;
  double dVar3;
  char *pcVar4;
  long lVar5;
  long in_FS_OFFSET;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_3) {
  case 100:
    lVar5 = *(long *)(this + 0x18);
    *(double *)(this + 0xa8) = param_1;
    if (lVar5 != 0) {
      dVar2 = *(double *)(this + 0xb8);
      dVar3 = *(double *)(this + 0xb0);
LAB_00101399:
      uVar6 = (uint)(float)param_1 ^ _LC16;
      uVar7 = (uint)(float)dVar3 ^ _LC16;
      uVar8 = (uint)(float)dVar3 ^ _LC16;
      *(uint *)(lVar5 + 0xe0) = (uint)(float)dVar2 ^ _LC16;
      *(uint *)(lVar5 + 0xe4) = uVar6;
      *(uint *)(lVar5 + 0xe8) = uVar7;
      *(uint *)(lVar5 + 0xec) = uVar8;
    }
    break;
  case 0x65:
    lVar5 = *(long *)(this + 0x18);
    *(double *)(this + 0xb0) = param_1;
    if (lVar5 != 0) {
      uVar6 = _LC16 ^ (uint)(float)*(double *)(this + 0xa8);
      uVar7 = _LC16 ^ (uint)(float)param_1;
      uVar8 = _LC16 ^ (uint)(float)param_1;
      *(uint *)(lVar5 + 0xe0) = _LC16 ^ (uint)(float)*(double *)(this + 0xb8);
      *(uint *)(lVar5 + 0xe4) = uVar6;
      *(uint *)(lVar5 + 0xe8) = uVar7;
      *(uint *)(lVar5 + 0xec) = uVar8;
    }
    break;
  case 0x66:
    lVar5 = *(long *)(this + 0x18);
    *(double *)(this + 0xb8) = param_1;
    if (lVar5 != 0) {
      dVar3 = *(double *)(this + 0xb0);
      dVar2 = param_1;
      param_1 = *(double *)(this + 0xa8);
      goto LAB_00101399;
    }
    break;
  case 0x67:
    *(double *)(this + 0xc0) = param_1;
    if (*(long *)(this + 0x18) != 0) {
      *(ulong *)(*(long *)(this + 0x18) + 0xa8) =
           CONCAT44((float)param_1,(uint)(float)param_1 ^ _LC16);
    }
    break;
  case 0x68:
    *(double *)(this + 200) = param_1;
    if (*(long *)(this + 0x18) != 0) {
      *(ulong *)(*(long *)(this + 0x18) + 0xc4) =
           CONCAT44((float)param_1,(uint)(float)param_1 ^ _LC16);
    }
    break;
  default:
    local_40 = 0;
    local_30 = 0x46;
    local_38 = "Unhandled parameter: \'%d\'. This should not happen. Please report this.";
    String::parse_latin1((StrRange *)&local_40);
    vformat<JoltPhysicsServer3D::ConeTwistJointParamJolt>(&local_38,(StrRange *)&local_40,param_3);
    _err_print_error("set_jolt_param","modules/jolt_physics/joints/jolt_cone_twist_joint_3d.cpp",
                     0x106,"Method/function failed.",&local_38,0);
    pcVar4 = local_38;
    if (local_38 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar5 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar1 = (long *)(local_40 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00101524;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    JoltJoint3D::_wake_up_bodies();
    return;
  }
LAB_00101524:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltConeTwistJoint3D::get_jolt_flag(JoltPhysicsServer3D::ConeTwistJointFlagJolt) const */

JoltConeTwistJoint3D __thiscall
JoltConeTwistJoint3D::get_jolt_flag(JoltConeTwistJoint3D *this,uint param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  JoltConeTwistJoint3D JVar4;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0x66) {
    JVar4 = this[0xd2];
    goto LAB_0010157c;
  }
  if (param_2 < 0x67) {
    if (param_2 == 100) {
      JVar4 = this[0xd0];
      goto LAB_0010157c;
    }
    if (param_2 == 0x65) {
      JVar4 = this[0xd1];
      goto LAB_0010157c;
    }
  }
  else if (param_2 == 0x67) {
    JVar4 = this[0xd3];
    goto LAB_0010157c;
  }
  local_40 = 0;
  local_30 = 0x41;
  local_38 = "Unhandled flag: \'%d\'. This should not happen. Please report this.";
  String::parse_latin1((StrRange *)&local_40);
  vformat<JoltPhysicsServer3D::ConeTwistJointFlagJolt>(&local_38,(StrRange *)&local_40,param_2);
  _err_print_error("get_jolt_flag","modules/jolt_physics/joints/jolt_cone_twist_joint_3d.cpp",0x11a,
                   "Method/function failed. Returning: false",&local_38,0,0);
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
  JVar4 = (JoltConeTwistJoint3D)0x0;
LAB_0010157c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return JVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltConeTwistJoint3D::set_jolt_flag(JoltPhysicsServer3D::ConeTwistJointFlagJolt, bool) */

void __thiscall
JoltConeTwistJoint3D::set_jolt_flag
          (JoltConeTwistJoint3D *this,uint param_2,JoltConeTwistJoint3D param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0x66) {
    this[0xd2] = param_3;
    if (*(long *)(this + 0x18) != 0) {
      JPH::SwingTwistConstraint::SetSwingMotorState(*(long *)(this + 0x18),param_3);
    }
LAB_00101724:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_001016f5:
      JoltJoint3D::_wake_up_bodies();
      return;
    }
  }
  else {
    if (param_2 < 0x67) {
      if (param_2 == 100) {
        this[0xd0] = param_3;
        rebuild(this);
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          JoltJoint3D::_wake_up_bodies();
          return;
        }
        goto LAB_00101734;
      }
      if (param_2 == 0x65) {
        this[0xd1] = param_3;
        rebuild(this);
        if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00101734;
        goto LAB_001016f5;
      }
    }
    else if (param_2 == 0x67) {
      this[0xd3] = param_3;
      if (*(long *)(this + 0x18) != 0) {
        JPH::SwingTwistConstraint::SetTwistMotorState(*(long *)(this + 0x18),param_3);
      }
      goto LAB_00101724;
    }
    local_40 = 0;
    local_30 = 0x41;
    local_38 = "Unhandled flag: \'%d\'. This should not happen. Please report this.";
    String::parse_latin1((StrRange *)&local_40);
    vformat<JoltPhysicsServer3D::ConeTwistJointFlagJolt>(&local_38,(StrRange *)&local_40,param_2);
    _err_print_error("set_jolt_flag","modules/jolt_physics/joints/jolt_cone_twist_joint_3d.cpp",
                     0x132,"Method/function failed.",&local_38,0);
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
      return;
    }
  }
LAB_00101734:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltConeTwistJoint3D::get_type() const */

undefined8 JoltConeTwistJoint3D::get_type(void)

{
  return 3;
}



/* JoltConeTwistJoint3D::~JoltConeTwistJoint3D() */

void __thiscall JoltConeTwistJoint3D::~JoltConeTwistJoint3D(JoltConeTwistJoint3D *this)

{
  *(undefined ***)this = &PTR__JoltConeTwistJoint3D_00102f20;
  JoltJoint3D::~JoltJoint3D((JoltJoint3D *)this);
  return;
}



/* JoltConeTwistJoint3D::~JoltConeTwistJoint3D() */

void __thiscall JoltConeTwistJoint3D::~JoltConeTwistJoint3D(JoltConeTwistJoint3D *this)

{
  *(undefined ***)this = &PTR__JoltConeTwistJoint3D_00102f20;
  JoltJoint3D::~JoltJoint3D((JoltJoint3D *)this);
  operator_delete(this,0xd8);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00101e68) */
/* WARNING: Removing unreachable block (ram,0x00101f98) */
/* WARNING: Removing unreachable block (ram,0x00102160) */
/* WARNING: Removing unreachable block (ram,0x00101fa4) */
/* WARNING: Removing unreachable block (ram,0x00101fae) */
/* WARNING: Removing unreachable block (ram,0x00102140) */
/* WARNING: Removing unreachable block (ram,0x00101fba) */
/* WARNING: Removing unreachable block (ram,0x00101fc4) */
/* WARNING: Removing unreachable block (ram,0x00102120) */
/* WARNING: Removing unreachable block (ram,0x00101fd0) */
/* WARNING: Removing unreachable block (ram,0x00101fda) */
/* WARNING: Removing unreachable block (ram,0x00102100) */
/* WARNING: Removing unreachable block (ram,0x00101fe6) */
/* WARNING: Removing unreachable block (ram,0x00101ff0) */
/* WARNING: Removing unreachable block (ram,0x001020e0) */
/* WARNING: Removing unreachable block (ram,0x00101ffc) */
/* WARNING: Removing unreachable block (ram,0x00102006) */
/* WARNING: Removing unreachable block (ram,0x001020c0) */
/* WARNING: Removing unreachable block (ram,0x00102012) */
/* WARNING: Removing unreachable block (ram,0x0010201c) */
/* WARNING: Removing unreachable block (ram,0x001020a0) */
/* WARNING: Removing unreachable block (ram,0x00102024) */
/* WARNING: Removing unreachable block (ram,0x0010203a) */
/* WARNING: Removing unreachable block (ram,0x00102046) */
/* String vformat<PhysicsServer3D::ConeTwistJointParam>(String const&,
   PhysicsServer3D::ConeTwistJointParam const) */

undefined8 *
vformat<PhysicsServer3D::ConeTwistJointParam>(undefined8 *param_1,bool *param_2,int param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
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
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x001022f8) */
/* WARNING: Removing unreachable block (ram,0x00102428) */
/* WARNING: Removing unreachable block (ram,0x001025f0) */
/* WARNING: Removing unreachable block (ram,0x00102434) */
/* WARNING: Removing unreachable block (ram,0x0010243e) */
/* WARNING: Removing unreachable block (ram,0x001025d0) */
/* WARNING: Removing unreachable block (ram,0x0010244a) */
/* WARNING: Removing unreachable block (ram,0x00102454) */
/* WARNING: Removing unreachable block (ram,0x001025b0) */
/* WARNING: Removing unreachable block (ram,0x00102460) */
/* WARNING: Removing unreachable block (ram,0x0010246a) */
/* WARNING: Removing unreachable block (ram,0x00102590) */
/* WARNING: Removing unreachable block (ram,0x00102476) */
/* WARNING: Removing unreachable block (ram,0x00102480) */
/* WARNING: Removing unreachable block (ram,0x00102570) */
/* WARNING: Removing unreachable block (ram,0x0010248c) */
/* WARNING: Removing unreachable block (ram,0x00102496) */
/* WARNING: Removing unreachable block (ram,0x00102550) */
/* WARNING: Removing unreachable block (ram,0x001024a2) */
/* WARNING: Removing unreachable block (ram,0x001024ac) */
/* WARNING: Removing unreachable block (ram,0x00102530) */
/* WARNING: Removing unreachable block (ram,0x001024b4) */
/* WARNING: Removing unreachable block (ram,0x001024ca) */
/* WARNING: Removing unreachable block (ram,0x001024d6) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String_conflict *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
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
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00102738) */
/* WARNING: Removing unreachable block (ram,0x00102868) */
/* WARNING: Removing unreachable block (ram,0x00102a30) */
/* WARNING: Removing unreachable block (ram,0x00102874) */
/* WARNING: Removing unreachable block (ram,0x0010287e) */
/* WARNING: Removing unreachable block (ram,0x00102a10) */
/* WARNING: Removing unreachable block (ram,0x0010288a) */
/* WARNING: Removing unreachable block (ram,0x00102894) */
/* WARNING: Removing unreachable block (ram,0x001029f0) */
/* WARNING: Removing unreachable block (ram,0x001028a0) */
/* WARNING: Removing unreachable block (ram,0x001028aa) */
/* WARNING: Removing unreachable block (ram,0x001029d0) */
/* WARNING: Removing unreachable block (ram,0x001028b6) */
/* WARNING: Removing unreachable block (ram,0x001028c0) */
/* WARNING: Removing unreachable block (ram,0x001029b0) */
/* WARNING: Removing unreachable block (ram,0x001028cc) */
/* WARNING: Removing unreachable block (ram,0x001028d6) */
/* WARNING: Removing unreachable block (ram,0x00102990) */
/* WARNING: Removing unreachable block (ram,0x001028e2) */
/* WARNING: Removing unreachable block (ram,0x001028ec) */
/* WARNING: Removing unreachable block (ram,0x00102970) */
/* WARNING: Removing unreachable block (ram,0x001028f4) */
/* WARNING: Removing unreachable block (ram,0x0010290a) */
/* WARNING: Removing unreachable block (ram,0x00102916) */
/* String vformat<JoltPhysicsServer3D::ConeTwistJointParamJolt>(String const&,
   JoltPhysicsServer3D::ConeTwistJointParamJolt const) */

undefined8 *
vformat<JoltPhysicsServer3D::ConeTwistJointParamJolt>(undefined8 *param_1,bool *param_2,int param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
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
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00102b78) */
/* WARNING: Removing unreachable block (ram,0x00102ca8) */
/* WARNING: Removing unreachable block (ram,0x00102e70) */
/* WARNING: Removing unreachable block (ram,0x00102cb4) */
/* WARNING: Removing unreachable block (ram,0x00102cbe) */
/* WARNING: Removing unreachable block (ram,0x00102e50) */
/* WARNING: Removing unreachable block (ram,0x00102cca) */
/* WARNING: Removing unreachable block (ram,0x00102cd4) */
/* WARNING: Removing unreachable block (ram,0x00102e30) */
/* WARNING: Removing unreachable block (ram,0x00102ce0) */
/* WARNING: Removing unreachable block (ram,0x00102cea) */
/* WARNING: Removing unreachable block (ram,0x00102e10) */
/* WARNING: Removing unreachable block (ram,0x00102cf6) */
/* WARNING: Removing unreachable block (ram,0x00102d00) */
/* WARNING: Removing unreachable block (ram,0x00102df0) */
/* WARNING: Removing unreachable block (ram,0x00102d0c) */
/* WARNING: Removing unreachable block (ram,0x00102d16) */
/* WARNING: Removing unreachable block (ram,0x00102dd0) */
/* WARNING: Removing unreachable block (ram,0x00102d22) */
/* WARNING: Removing unreachable block (ram,0x00102d2c) */
/* WARNING: Removing unreachable block (ram,0x00102db0) */
/* WARNING: Removing unreachable block (ram,0x00102d34) */
/* WARNING: Removing unreachable block (ram,0x00102d4a) */
/* WARNING: Removing unreachable block (ram,0x00102d56) */
/* String vformat<JoltPhysicsServer3D::ConeTwistJointFlagJolt>(String const&,
   JoltPhysicsServer3D::ConeTwistJointFlagJolt const) */

undefined8 *
vformat<JoltPhysicsServer3D::ConeTwistJointFlagJolt>(undefined8 *param_1,bool *param_2,int param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
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
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* JoltConeTwistJoint3D::_build_swing_twist(JPH::Body*, JPH::Body*, Transform3D const&, Transform3D
   const&, float, float) const */

void JoltConeTwistJoint3D::_GLOBAL__sub_I__build_swing_twist(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC51;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltConeTwistJoint3D::~JoltConeTwistJoint3D() */

void __thiscall JoltConeTwistJoint3D::~JoltConeTwistJoint3D(JoltConeTwistJoint3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



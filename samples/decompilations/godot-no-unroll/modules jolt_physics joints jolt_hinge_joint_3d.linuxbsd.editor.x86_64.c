
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltHingeJoint3D::_build_hinge(JPH::Body*, JPH::Body*, Transform3D const&, Transform3D const&,
   float) const */

void __thiscall
JoltHingeJoint3D::_build_hinge
          (JoltHingeJoint3D *this,Body *param_1,Body *param_2,Transform3D *param_3,
          Transform3D *param_4,float param_5)

{
  long in_FS_OFFSET;
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined8 local_2c;
  long local_10;
  
  uStack_a4 = *(undefined4 *)(param_3 + 0x14);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = *(undefined4 *)(param_3 + 8);
  local_e0 = 0;
  local_3c = __LC0;
  uStack_34 = _LC1;
  uStack_74 = *(undefined4 *)(param_4 + 0x14);
  local_e8 = &JPH::Body::sFixedToWorld;
  local_b8._12_4_ = SUB164(*(undefined1 (*) [16])(param_3 + 0x20),0xc);
  local_b8._0_12_ = SUB1612(*(undefined1 (*) [16])(param_3 + 0x20),4);
  uStack_a0 = *(undefined4 *)(param_3 + 0x20);
  local_dc = 1;
  local_2c = _LC1;
  local_98 = *(undefined4 *)param_3;
  uStack_94 = *(undefined4 *)(param_3 + 0xc);
  local_50 = 0;
  uStack_90 = *(undefined4 *)(param_3 + 0x18);
  local_4c = 0;
  local_78 = *(undefined4 *)(param_4 + 8);
  local_44 = 0;
  local_88._12_4_ = SUB164(*(undefined1 (*) [16])(param_4 + 0x20),0xc);
  local_88._0_12_ = SUB1612(*(undefined1 (*) [16])(param_4 + 0x20),4);
  uStack_70 = *(undefined4 *)(param_4 + 0x20);
  local_d8 = 0;
  local_d0 = 0x3f80000000000000;
  local_c0 = 0;
  local_c8 = 0;
  local_68 = *(undefined4 *)param_4;
  uStack_64 = *(undefined4 *)(param_4 + 0xc);
  uStack_60 = *(undefined4 *)(param_4 + 0x18);
  local_58 = CONCAT44(param_5,(uint)param_5 ^ __LC2);
  if (this[0xc9] != (JoltHingeJoint3D)0x0) {
    local_4c = CONCAT44((float)*(double *)(this + 0xb0),(float)*(double *)(this + 0xa8));
  }
  uStack_9c = uStack_a0;
  uStack_8c = uStack_90;
  uStack_6c = uStack_70;
  uStack_5c = uStack_60;
  if (param_1 == (Body *)0x0) {
    JPH::HingeConstraintSettings::Create((Body *)&local_e8,(Body *)&JPH::Body::sFixedToWorld);
  }
  else if (param_2 == (Body *)0x0) {
    JPH::HingeConstraintSettings::Create((Body *)&local_e8,param_1);
  }
  else {
    JPH::HingeConstraintSettings::Create((Body *)&local_e8,param_1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltHingeJoint3D::_build_fixed(JPH::Body*, JPH::Body*, Transform3D const&, Transform3D const&)
   const */

void __thiscall
JoltHingeJoint3D::_build_fixed
          (JoltHingeJoint3D *this,Body *param_1,Body *param_2,Transform3D *param_3,
          Transform3D *param_4)

{
  long in_FS_OFFSET;
  code *local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  long local_10;
  
  uStack_54 = *(undefined4 *)(param_3 + 0x10);
  uStack_60 = *(undefined4 *)(param_3 + 0x18);
  uStack_50 = *(undefined4 *)(param_3 + 0x1c);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c = 1;
  local_78._12_4_ = SUB164(*(undefined1 (*) [16])(param_3 + 0x20),0xc);
  local_78._0_12_ = SUB1612(*(undefined1 (*) [16])(param_3 + 0x20),4);
  local_68 = *(undefined4 *)param_3;
  local_58 = *(undefined4 *)(param_3 + 4);
  uStack_64 = *(undefined4 *)(param_3 + 0xc);
  local_a8 = JoltJoint3D::destroy;
  uStack_24 = *(undefined4 *)(param_4 + 0x10);
  uStack_30 = *(undefined4 *)(param_4 + 0x18);
  uStack_20 = *(undefined4 *)(param_4 + 0x1c);
  local_a0 = 0;
  local_48._12_4_ = SUB164(*(undefined1 (*) [16])(param_4 + 0x20),0xc);
  local_48._0_12_ = SUB1612(*(undefined1 (*) [16])(param_4 + 0x20),4);
  local_38 = *(undefined4 *)param_4;
  local_28 = *(undefined4 *)(param_4 + 4);
  uStack_34 = *(undefined4 *)(param_4 + 0xc);
  local_98 = 0;
  local_90 = 0x3f80000000000000;
  local_80 = 0;
  local_88 = 0;
  local_7c = 0;
  uStack_5c = uStack_60;
  uStack_4c = uStack_50;
  uStack_2c = uStack_30;
  uStack_1c = uStack_20;
  if (param_1 == (Body *)0x0) {
    JPH::FixedConstraintSettings::Create((Body *)&local_a8,(Body *)&JPH::Body::sFixedToWorld);
  }
  else if (param_2 == (Body *)0x0) {
    JPH::FixedConstraintSettings::Create((Body *)&local_a8,param_1);
  }
  else {
    JPH::FixedConstraintSettings::Create((Body *)&local_a8,param_1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltHingeJoint3D::_update_motor_state() */

void __thiscall JoltHingeJoint3D::_update_motor_state(JoltHingeJoint3D *this)

{
  if ((((this[200] == (JoltHingeJoint3D)0x0) ||
       (*(double *)(this + 0x98) != *(double *)(this + 0xa0))) ||
      ((this[0xc9] != (JoltHingeJoint3D)0x0 && (0.0 < *(double *)(this + 0xa8))))) &&
     (*(long *)(this + 0x18) != 0)) {
    *(uint *)(*(long *)(this + 0x18) + 0xe8) = (uint)(byte)this[0xca];
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltHingeJoint3D::_update_motor_velocity() */

void __thiscall JoltHingeJoint3D::_update_motor_velocity(JoltHingeJoint3D *this)

{
  if ((((this[200] == (JoltHingeJoint3D)0x0) ||
       (*(double *)(this + 0x98) != *(double *)(this + 0xa0))) ||
      ((this[0xc9] != (JoltHingeJoint3D)0x0 && (0.0 < *(double *)(this + 0xa8))))) &&
     (*(long *)(this + 0x18) != 0)) {
    *(uint *)(*(long *)(this + 0x18) + 0xec) = (uint)(float)*(double *)(this + 0xb8) ^ __LC2;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltHingeJoint3D::_update_motor_limit() */

void __thiscall JoltHingeJoint3D::_update_motor_limit(JoltHingeJoint3D *this)

{
  if ((((this[200] == (JoltHingeJoint3D)0x0) ||
       (*(double *)(this + 0x98) != *(double *)(this + 0xa0))) ||
      ((this[0xc9] != (JoltHingeJoint3D)0x0 && (0.0 < *(double *)(this + 0xa8))))) &&
     (*(long *)(this + 0x18) != 0)) {
    *(ulong *)(*(long *)(this + 0x18) + 0xe0) =
         CONCAT44((float)*(double *)(this + 0xc0),(uint)(float)*(double *)(this + 0xc0) ^ __LC2);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltHingeJoint3D::rebuild() */

void __thiscall JoltHingeJoint3D::rebuild(JoltHingeJoint3D *this)

{
  long *plVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  JoltJoint3D *pJVar5;
  Body *pBVar6;
  Body *pBVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  long in_FS_OFFSET;
  float local_12c;
  undefined8 local_110;
  uint local_108;
  undefined8 local_104;
  undefined4 local_fc;
  Transform3D local_f8 [16];
  undefined1 local_e8 [16];
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  code *local_c8;
  JoltSpace3D *local_c0;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  Body *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  JoltJoint3D::destroy();
  pJVar5 = (JoltJoint3D *)JoltJoint3D::get_space();
  if (pJVar5 == (JoltJoint3D *)0x0) goto LAB_00100718;
  JoltSpace3D::write_bodies((BodyID *)&local_c8,(int)pJVar5);
  iVar4 = JoltBodyAccessor3D::get_count();
  iVar9 = (int)(BodyID *)&local_c8;
  if (0 < iVar4) {
    JoltBodyAccessor3D::get_at(iVar9);
  }
  JoltBodyWriter3D::JoltBodyWriter3D((JoltBodyWriter3D *)local_88,local_c0);
  JoltBodyAccessor3D::acquire((BodyID *)local_88);
  pBVar6 = (Body *)JoltBodyWriter3D::try_get();
  local_48 = pBVar6;
  JoltBodyAccessor3D::release();
  local_88._0_8_ = JoltBodyAccessor3D::acquire;
  JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_88);
  iVar4 = JoltBodyAccessor3D::get_count();
  if (1 < iVar4) {
    JoltBodyAccessor3D::get_at(iVar9);
  }
  JoltBodyWriter3D::JoltBodyWriter3D((JoltBodyWriter3D *)local_88,local_c0);
  JoltBodyAccessor3D::acquire((BodyID *)local_88);
  pBVar7 = (Body *)JoltBodyWriter3D::try_get();
  local_48 = pBVar7;
  JoltBodyAccessor3D::release();
  local_88._0_8_ = JoltBodyAccessor3D::acquire;
  JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_88);
  if (pBVar6 == (Body *)0x0 && pBVar7 == (Body *)0x0) {
    _err_print_error("rebuild","modules/jolt_physics/joints/jolt_hinge_joint_3d.cpp",399,
                     "Condition \"jolt_body_a == nullptr && jolt_body_b == nullptr\" is true.",0,0);
  }
  else {
    if (this[200] == (JoltHingeJoint3D)0x0) {
      local_108 = 0;
      local_12c = _LC4;
    }
    else {
      dVar2 = *(double *)(this + 0xa0);
      if (dVar2 < *(double *)(this + 0x98)) {
        local_108 = 0;
        local_12c = _LC4;
      }
      else {
        dVar3 = (*(double *)(this + 0x98) + dVar2) * __LC9;
        local_108 = (uint)(float)dVar3 ^ __LC2;
        local_12c = (float)(dVar2 - dVar3);
      }
    }
    local_d4 = 0;
    local_cc = 0;
    local_64 = 0;
    local_5c = 0;
    local_110 = 0;
    local_104 = 0;
    local_fc = 0;
    local_f8 = (Transform3D  [16])ZEXT416(_LC10);
    local_e8 = ZEXT416(_LC10);
    local_d8 = _LC11;
    local_88 = ZEXT416(_LC10);
    local_78 = ZEXT416(_LC10);
    local_68 = _LC11;
    JoltJoint3D::_shift_reference_frames
              ((Vector3 *)this,(Vector3 *)&local_104,(Transform3D *)&local_110,local_f8);
    if (((this[200] == (JoltHingeJoint3D)0x0) ||
        (*(double *)(this + 0x98) != *(double *)(this + 0xa0))) ||
       ((this[0xc9] != (JoltHingeJoint3D)0x0 && (0.0 < *(double *)(this + 0xa8))))) {
      plVar8 = (long *)_build_hinge(this,pBVar6,pBVar7,local_f8,(Transform3D *)local_88,local_12c);
      plVar10 = *(long **)(this + 0x18);
      if (plVar8 != plVar10) goto LAB_001006b5;
    }
    else {
      plVar8 = (long *)_build_fixed(this,pBVar6,pBVar7,local_f8,(Transform3D *)local_88);
      plVar10 = *(long **)(this + 0x18);
      if (plVar8 != plVar10) {
LAB_001006b5:
        if (plVar10 != (long *)0x0) {
          LOCK();
          plVar1 = plVar10 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
        *(long **)(this + 0x18) = plVar8;
        if (plVar8 != (long *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
      }
    }
    JoltSpace3D::add_joint(pJVar5);
    JoltJoint3D::_update_enabled();
    JoltJoint3D::_update_iterations();
    _update_motor_state(this);
    _update_motor_velocity(this);
    _update_motor_limit(this);
  }
  JoltBodyAccessor3D::release();
  local_c8 = JoltBodyAccessor3D::acquire;
  JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)&local_c8);
LAB_00100718:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JoltHingeJoint3D::_limits_changed() */

void __thiscall JoltHingeJoint3D::_limits_changed(JoltHingeJoint3D *this)

{
  rebuild(this);
  JoltJoint3D::_wake_up_bodies();
  return;
}



/* JoltHingeJoint3D::_limit_spring_changed() */

void __thiscall JoltHingeJoint3D::_limit_spring_changed(JoltHingeJoint3D *this)

{
  rebuild(this);
  JoltJoint3D::_wake_up_bodies();
  return;
}



/* JoltHingeJoint3D::_motor_state_changed() */

void __thiscall JoltHingeJoint3D::_motor_state_changed(JoltHingeJoint3D *this)

{
  if ((((this[200] == (JoltHingeJoint3D)0x0) ||
       (*(double *)(this + 0x98) != *(double *)(this + 0xa0))) ||
      ((this[0xc9] != (JoltHingeJoint3D)0x0 && (0.0 < *(double *)(this + 0xa8))))) &&
     (*(long *)(this + 0x18) != 0)) {
    *(uint *)(*(long *)(this + 0x18) + 0xe8) = (uint)(byte)this[0xca];
  }
  JoltJoint3D::_wake_up_bodies();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltHingeJoint3D::_motor_speed_changed() */

void __thiscall JoltHingeJoint3D::_motor_speed_changed(JoltHingeJoint3D *this)

{
  if ((((this[200] == (JoltHingeJoint3D)0x0) ||
       (*(double *)(this + 0x98) != *(double *)(this + 0xa0))) ||
      ((this[0xc9] != (JoltHingeJoint3D)0x0 && (0.0 < *(double *)(this + 0xa8))))) &&
     (*(long *)(this + 0x18) != 0)) {
    *(uint *)(*(long *)(this + 0x18) + 0xec) = (uint)(float)*(double *)(this + 0xb8) ^ __LC2;
  }
  JoltJoint3D::_wake_up_bodies();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltHingeJoint3D::_motor_limit_changed() */

void __thiscall JoltHingeJoint3D::_motor_limit_changed(JoltHingeJoint3D *this)

{
  if ((((this[200] == (JoltHingeJoint3D)0x0) ||
       (*(double *)(this + 0x98) != *(double *)(this + 0xa0))) ||
      ((this[0xc9] != (JoltHingeJoint3D)0x0 && (0.0 < *(double *)(this + 0xa8))))) &&
     (*(long *)(this + 0x18) != 0)) {
    *(ulong *)(*(long *)(this + 0x18) + 0xe0) =
         CONCAT44((float)*(double *)(this + 0xc0),(uint)(float)*(double *)(this + 0xc0) ^ __LC2);
  }
  JoltJoint3D::_wake_up_bodies();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltHingeJoint3D::JoltHingeJoint3D(JoltJoint3D const&, JoltBody3D*, JoltBody3D*, Transform3D
   const&, Transform3D const&) */

void __thiscall
JoltHingeJoint3D::JoltHingeJoint3D
          (JoltHingeJoint3D *this,JoltJoint3D *param_1,JoltBody3D *param_2,JoltBody3D *param_3,
          Transform3D *param_4,Transform3D *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  JoltJoint3D::JoltJoint3D((JoltJoint3D *)this,param_1,param_2,param_3,param_4,param_5);
  *(undefined ***)this = &PTR__JoltHingeJoint3D_001037b0;
  *(undefined1 (*) [16])(this + 0x98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
  uVar2 = _UNK_00103848;
  uVar1 = __LC12;
  *(undefined2 *)(this + 200) = 0;
  this[0xca] = (JoltHingeJoint3D)0x0;
  *(undefined8 *)(this + 0xb8) = uVar1;
  *(undefined8 *)(this + 0xc0) = uVar2;
  rebuild(this);
  return;
}



/* JoltHingeJoint3D::get_applied_force() const */

float __thiscall JoltHingeJoint3D::get_applied_force(JoltHingeJoint3D *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(long *)(this + 0x18) == 0) {
    _err_print_error("get_applied_force","modules/jolt_physics/joints/jolt_hinge_joint_3d.cpp",0x154
                     ,"Parameter \"jolt_ref\" is null.",0,0);
  }
  else {
    lVar3 = JoltJoint3D::get_space();
    if (lVar3 == 0) {
      _err_print_error("get_applied_force","modules/jolt_physics/joints/jolt_hinge_joint_3d.cpp",
                       0x157,"Parameter \"space\" is null.",0,0);
    }
    else if (*(float *)(lVar3 + 0x80) != 0.0) {
      if (((this[200] == (JoltHingeJoint3D)0x0) ||
          (*(double *)(this + 0x98) != *(double *)(this + 0xa0))) ||
         ((this[0xc9] != (JoltHingeJoint3D)0x0 && (0.0 < *(double *)(this + 0xa8))))) {
        lVar1 = *(long *)(this + 0x18);
        fVar6 = *(float *)(lVar1 + 0x34c) + *(float *)(lVar1 + 0x31c);
        fVar4 = *(float *)(lVar1 + 0x2e0);
        fVar5 = *(float *)(lVar1 + 0x2e4);
      }
      else {
        uVar2 = *(undefined8 *)(*(long *)(this + 0x18) + 0x220);
        fVar4 = (float)uVar2;
        fVar6 = (float)*(undefined8 *)(*(long *)(this + 0x18) + 0x228);
        fVar5 = (float)((ulong)uVar2 >> 0x20);
      }
      return SQRT(fVar5 * fVar5 + fVar4 * fVar4 + 0.0 + fVar6 * fVar6) / *(float *)(lVar3 + 0x80);
    }
  }
  return 0.0;
}



/* JoltHingeJoint3D::get_applied_torque() const */

float __thiscall JoltHingeJoint3D::get_applied_torque(JoltHingeJoint3D *this)

{
  undefined8 uVar1;
  float fVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  if (*(long *)(this + 0x18) == 0) {
    _err_print_error("get_applied_torque","modules/jolt_physics/joints/jolt_hinge_joint_3d.cpp",
                     0x169,"Parameter \"jolt_ref\" is null.",0,0);
  }
  else {
    lVar3 = JoltJoint3D::get_space();
    if (lVar3 == 0) {
      _err_print_error("get_applied_torque","modules/jolt_physics/joints/jolt_hinge_joint_3d.cpp",
                       0x16c,"Parameter \"space\" is null.",0,0);
    }
    else if (*(float *)(lVar3 + 0x80) != 0.0) {
      if (((this[200] == (JoltHingeJoint3D)0x0) ||
          (*(double *)(this + 0x98) != *(double *)(this + 0xa0))) ||
         ((this[0xc9] != (JoltHingeJoint3D)0x0 && (0.0 < *(double *)(this + 0xa8))))) {
        fVar5 = 0.0;
        fVar4 = *(float *)(*(long *)(this + 0x18) + 0x2e0);
        fVar2 = *(float *)(*(long *)(this + 0x18) + 0x2e4);
        fVar4 = fVar4 * fVar4;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(this + 0x18) + 0x130);
        fVar5 = (float)uVar1;
        fVar2 = (float)*(undefined8 *)(*(long *)(this + 0x18) + 0x138);
        fVar4 = (float)((ulong)uVar1 >> 0x20);
        fVar4 = fVar4 * fVar4;
        fVar5 = fVar5 * fVar5 + 0.0;
      }
      return SQRT(fVar4 + fVar5 + fVar2 * fVar2) / *(float *)(lVar3 + 0x80);
    }
  }
  return 0.0;
}



/* JoltHingeJoint3D::get_param(PhysicsServer3D::HingeJointParam) const */

double __thiscall JoltHingeJoint3D::get_param(JoltHingeJoint3D *this,undefined4 param_2)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  long *plVar4;
  long in_FS_OFFSET;
  double dVar5;
  double dVar6;
  double dVar7;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_2) {
  case 0:
  case 3:
    dVar5 = _LC24;
    break;
  case 1:
    dVar5 = *(double *)(this + 0xa0);
    break;
  case 2:
    dVar5 = *(double *)(this + 0x98);
    break;
  case 4:
    dVar5 = _LC25;
    break;
  case 5:
    dVar5 = _LC26;
    break;
  case 6:
    dVar5 = *(double *)(this + 0xb8);
    break;
  case 7:
    dVar5 = *(double *)(this + 0xc0);
    plVar4 = (long *)Engine::get_singleton();
    iVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    dVar7 = _LC26 / (double)iVar3;
    dVar6 = (double)Engine::get_time_scale();
    dVar5 = dVar6 * dVar7 * dVar5;
    break;
  default:
    local_40 = 0;
    local_30 = 0x46;
    local_38 = "Unhandled parameter: \'%d\'. This should not happen. Please report this.";
    String::parse_latin1((StrRange *)&local_40);
    vformat<PhysicsServer3D::HingeJointParam>(&local_38,(StrRange *)&local_40,param_2);
    _err_print_error("get_param","modules/jolt_physics/joints/jolt_hinge_joint_3d.cpp",199,
                     "Method/function failed. Returning: 0.0",&local_38,0);
    pcVar2 = local_38;
    if (local_38 != (char *)0x0) {
      LOCK();
      plVar4 = (long *)(local_38 + -0x10);
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        local_38 = (char *)0x0;
        Memory::free_static(pcVar2 + -0x10,false);
      }
    }
    lVar1 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar4 = (long *)(local_40 + -0x10);
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
    dVar5 = 0.0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return dVar5;
}



/* JoltHingeJoint3D::set_param(PhysicsServer3D::HingeJointParam, double) */

void __thiscall
JoltHingeJoint3D::set_param(double param_1,JoltHingeJoint3D *this,undefined4 param_3)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  double dVar6;
  double dVar7;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_3) {
  case 0:
    if (param_1 != _LC24) {
      dVar6 = _LC30;
      if (_LC30 <= ABS(param_1) * _LC30) {
        dVar6 = ABS(param_1) * _LC30;
      }
      if (dVar6 <= ABS(param_1 - _LC24)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Hinge joint bias is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x72;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        uVar5 = 0xd0;
LAB_001012b0:
        _err_print_error("set_param","modules/jolt_physics/joints/jolt_hinge_joint_3d.cpp",uVar5,
                         &local_38,0,1);
        pcVar2 = local_38;
        if (local_38 != (char *)0x0) {
          LOCK();
          plVar4 = (long *)(local_38 + -0x10);
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (*plVar4 == 0) {
            local_38 = (char *)0x0;
            Memory::free_static(pcVar2 + -0x10,false);
          }
        }
        lVar1 = local_40;
        if (local_40 != 0) {
          LOCK();
          plVar4 = (long *)(local_40 + -0x10);
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (*plVar4 == 0) {
            local_40 = 0;
            Memory::free_static((void *)(lVar1 + -0x10),false);
          }
        }
        lVar1 = local_48;
        if (local_48 != 0) {
          LOCK();
          plVar4 = (long *)(local_48 + -0x10);
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (*plVar4 == 0) {
            local_48 = 0;
            Memory::free_static((void *)(lVar1 + -0x10),false);
          }
        }
      }
    }
    break;
  case 1:
    *(double *)(this + 0xa0) = param_1;
    rebuild(this);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      JoltJoint3D::_wake_up_bodies();
      return;
    }
    goto LAB_00100f87;
  case 2:
    *(double *)(this + 0x98) = param_1;
    rebuild(this);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      JoltJoint3D::_wake_up_bodies();
      return;
    }
    goto LAB_00100f87;
  case 3:
    if (param_1 != _LC24) {
      dVar6 = _LC30;
      if (_LC30 <= ABS(param_1) * _LC30) {
        dVar6 = ABS(param_1) * _LC30;
      }
      if (dVar6 <= ABS(param_1 - _LC24)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Hinge joint bias limit is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x78;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        uVar5 = 0xdd;
        goto LAB_001012b0;
      }
    }
    break;
  case 4:
    if (param_1 != _LC25) {
      dVar6 = _LC30;
      if (_LC30 <= ABS(param_1) * _LC30) {
        dVar6 = ABS(param_1) * _LC30;
      }
      if (dVar6 <= ABS(param_1 - _LC25)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Hinge joint softness is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x76;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        uVar5 = 0xe2;
        goto LAB_001012b0;
      }
    }
    break;
  case 5:
    if (param_1 != _LC26) {
      dVar6 = _LC30;
      if (_LC30 <= ABS(param_1) * _LC30) {
        dVar6 = ABS(param_1) * _LC30;
      }
      if (dVar6 <= ABS(param_1 - _LC26)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Hinge joint relaxation is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x78;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        uVar5 = 0xe7;
        goto LAB_001012b0;
      }
    }
    break;
  case 6:
    *(double *)(this + 0xb8) = param_1;
    _update_motor_velocity(this);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00100f0d:
      JoltJoint3D::_wake_up_bodies();
      return;
    }
    goto LAB_00100f87;
  case 7:
    plVar4 = (long *)Engine::get_singleton();
    iVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    dVar7 = _LC26 / (double)iVar3;
    dVar6 = (double)Engine::get_time_scale();
    *(double *)(this + 0xc0) = param_1 / (dVar6 * dVar7);
    _update_motor_limit(this);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00100f0d;
    goto LAB_00100f87;
  default:
    local_40 = 0;
    local_30 = 0x46;
    local_38 = "Unhandled parameter: \'%d\'. This should not happen. Please report this.";
    String::parse_latin1((StrRange *)&local_40);
    vformat<PhysicsServer3D::HingeJointParam>(&local_38,(StrRange *)&local_40,param_3);
    _err_print_error("set_param","modules/jolt_physics/joints/jolt_hinge_joint_3d.cpp",0xf4,
                     "Method/function failed.",&local_38,0);
    pcVar2 = local_38;
    if (local_38 != (char *)0x0) {
      LOCK();
      plVar4 = (long *)(local_38 + -0x10);
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        local_38 = (char *)0x0;
        Memory::free_static(pcVar2 + -0x10,false);
      }
    }
    lVar1 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar4 = (long *)(local_40 + -0x10);
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100f87:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltHingeJoint3D::get_jolt_param(JoltPhysicsServer3D::HingeJointParamJolt) const */

undefined8 __thiscall JoltHingeJoint3D::get_jolt_param(JoltHingeJoint3D *this,int param_2)

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
  if (param_2 == 0x65) {
    uVar4 = *(undefined8 *)(this + 0xb0);
  }
  else if (param_2 == 0x66) {
    uVar4 = *(undefined8 *)(this + 0xc0);
  }
  else if (param_2 == 100) {
    uVar4 = *(undefined8 *)(this + 0xa8);
  }
  else {
    local_40 = 0;
    local_30 = 0x46;
    local_38 = "Unhandled parameter: \'%d\'. This should not happen. Please report this.";
    String::parse_latin1((StrRange *)&local_40);
    vformat<JoltPhysicsServer3D::HingeJointParamJolt>(&local_38,(StrRange *)&local_40,param_2);
    _err_print_error("get_jolt_param","modules/jolt_physics/joints/jolt_hinge_joint_3d.cpp",0x105,
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltHingeJoint3D::set_jolt_param(JoltPhysicsServer3D::HingeJointParamJolt, double) */

void __thiscall
JoltHingeJoint3D::set_jolt_param(undefined8 param_1,JoltHingeJoint3D *this,int param_3)

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
  if (param_3 == 0x65) {
    *(undefined8 *)(this + 0xb0) = param_1;
    rebuild(this);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      JoltJoint3D::_wake_up_bodies();
      return;
    }
  }
  else if (param_3 == 0x66) {
    *(undefined8 *)(this + 0xc0) = param_1;
    _update_motor_limit(this);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00101641:
      JoltJoint3D::_wake_up_bodies();
      return;
    }
  }
  else if (param_3 == 100) {
    *(undefined8 *)(this + 0xa8) = param_1;
    rebuild(this);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00101641;
  }
  else {
    local_40 = 0;
    local_30 = 0x46;
    local_38 = "Unhandled parameter: \'%d\'. This should not happen. Please report this.";
    String::parse_latin1((StrRange *)&local_40);
    vformat<JoltPhysicsServer3D::HingeJointParamJolt>(&local_38,(StrRange *)&local_40,param_3);
    _err_print_error("set_jolt_param","modules/jolt_physics/joints/jolt_hinge_joint_3d.cpp",0x119,
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
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltHingeJoint3D::get_flag(PhysicsServer3D::HingeJointFlag) const */

JoltHingeJoint3D __thiscall JoltHingeJoint3D::get_flag(JoltHingeJoint3D *this,int param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  JoltHingeJoint3D JVar4;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    JVar4 = this[200];
  }
  else if (param_2 == 1) {
    JVar4 = this[0xca];
  }
  else {
    local_40 = 0;
    local_30 = 0x41;
    local_38 = "Unhandled flag: \'%d\'. This should not happen. Please report this.";
    String::parse_latin1((StrRange *)&local_40);
    vformat<PhysicsServer3D::HingeJointFlag>(&local_38,(StrRange *)&local_40,param_2);
    _err_print_error("get_flag","modules/jolt_physics/joints/jolt_hinge_joint_3d.cpp",0x127,
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
        JVar4 = (JoltHingeJoint3D)0x0;
        goto LAB_001017c2;
      }
    }
    JVar4 = (JoltHingeJoint3D)0x0;
  }
LAB_001017c2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return JVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltHingeJoint3D::set_flag(PhysicsServer3D::HingeJointFlag, bool) */

void __thiscall
JoltHingeJoint3D::set_flag(JoltHingeJoint3D *this,int param_2,JoltHingeJoint3D param_3)

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
  if (param_2 == 0) {
    this[200] = param_3;
    rebuild(this);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_001019cb:
      JoltJoint3D::_wake_up_bodies();
      return;
    }
  }
  else if (param_2 == 1) {
    this[0xca] = param_3;
    _update_motor_state(this);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001019cb;
  }
  else {
    local_40 = 0;
    local_30 = 0x41;
    local_38 = "Unhandled flag: \'%d\'. This should not happen. Please report this.";
    String::parse_latin1((StrRange *)&local_40);
    vformat<PhysicsServer3D::HingeJointFlag>(&local_38,(StrRange *)&local_40,param_2);
    _err_print_error("set_flag","modules/jolt_physics/joints/jolt_hinge_joint_3d.cpp",0x137,
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
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltHingeJoint3D::get_jolt_flag(JoltPhysicsServer3D::HingeJointFlagJolt) const */

JoltHingeJoint3D __thiscall JoltHingeJoint3D::get_jolt_flag(JoltHingeJoint3D *this,int param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  JoltHingeJoint3D JVar4;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 100) {
    JVar4 = this[0xc9];
  }
  else {
    local_40 = 0;
    local_30 = 0x41;
    local_38 = "Unhandled flag: \'%d\'. This should not happen. Please report this.";
    String::parse_latin1((StrRange *)&local_40);
    vformat<JoltPhysicsServer3D::HingeJointFlagJolt>(&local_38,(StrRange *)&local_40,param_2);
    _err_print_error("get_jolt_flag","modules/jolt_physics/joints/jolt_hinge_joint_3d.cpp",0x142,
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
        JVar4 = (JoltHingeJoint3D)0x0;
        goto LAB_00101a68;
      }
    }
    JVar4 = (JoltHingeJoint3D)0x0;
  }
LAB_00101a68:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return JVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltHingeJoint3D::set_jolt_flag(JoltPhysicsServer3D::HingeJointFlagJolt, bool) */

void __thiscall
JoltHingeJoint3D::set_jolt_flag(JoltHingeJoint3D *this,int param_2,JoltHingeJoint3D param_3)

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
  if (param_2 == 100) {
    this[0xc9] = param_3;
    rebuild(this);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      JoltJoint3D::_wake_up_bodies();
      return;
    }
  }
  else {
    local_40 = 0;
    local_30 = 0x41;
    local_38 = "Unhandled flag: \'%d\'. This should not happen. Please report this.";
    String::parse_latin1((StrRange *)&local_40);
    vformat<JoltPhysicsServer3D::HingeJointFlagJolt>(&local_38,(StrRange *)&local_40,param_2);
    _err_print_error("set_jolt_flag","modules/jolt_physics/joints/jolt_hinge_joint_3d.cpp",0x14e,
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
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltHingeJoint3D::get_type() const */

undefined8 JoltHingeJoint3D::get_type(void)

{
  return 1;
}



/* JoltHingeJoint3D::~JoltHingeJoint3D() */

void __thiscall JoltHingeJoint3D::~JoltHingeJoint3D(JoltHingeJoint3D *this)

{
  *(undefined ***)this = &PTR__JoltHingeJoint3D_001037b0;
  JoltJoint3D::~JoltJoint3D((JoltJoint3D *)this);
  return;
}



/* JoltHingeJoint3D::~JoltHingeJoint3D() */

void __thiscall JoltHingeJoint3D::~JoltHingeJoint3D(JoltHingeJoint3D *this)

{
  *(undefined ***)this = &PTR__JoltHingeJoint3D_001037b0;
  JoltJoint3D::~JoltJoint3D((JoltJoint3D *)this);
  operator_delete(this,0xd0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x001022c8) */
/* WARNING: Removing unreachable block (ram,0x001023f8) */
/* WARNING: Removing unreachable block (ram,0x001025c0) */
/* WARNING: Removing unreachable block (ram,0x00102404) */
/* WARNING: Removing unreachable block (ram,0x0010240e) */
/* WARNING: Removing unreachable block (ram,0x001025a0) */
/* WARNING: Removing unreachable block (ram,0x0010241a) */
/* WARNING: Removing unreachable block (ram,0x00102424) */
/* WARNING: Removing unreachable block (ram,0x00102580) */
/* WARNING: Removing unreachable block (ram,0x00102430) */
/* WARNING: Removing unreachable block (ram,0x0010243a) */
/* WARNING: Removing unreachable block (ram,0x00102560) */
/* WARNING: Removing unreachable block (ram,0x00102446) */
/* WARNING: Removing unreachable block (ram,0x00102450) */
/* WARNING: Removing unreachable block (ram,0x00102540) */
/* WARNING: Removing unreachable block (ram,0x0010245c) */
/* WARNING: Removing unreachable block (ram,0x00102466) */
/* WARNING: Removing unreachable block (ram,0x00102520) */
/* WARNING: Removing unreachable block (ram,0x00102472) */
/* WARNING: Removing unreachable block (ram,0x0010247c) */
/* WARNING: Removing unreachable block (ram,0x00102500) */
/* WARNING: Removing unreachable block (ram,0x00102484) */
/* WARNING: Removing unreachable block (ram,0x0010249a) */
/* WARNING: Removing unreachable block (ram,0x001024a6) */
/* String vformat<PhysicsServer3D::HingeJointParam>(String const&, PhysicsServer3D::HingeJointParam
   const) */

undefined8 *
vformat<PhysicsServer3D::HingeJointParam>(undefined8 *param_1,bool *param_2,int param_3)

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



/* WARNING: Removing unreachable block (ram,0x00102748) */
/* WARNING: Removing unreachable block (ram,0x00102878) */
/* WARNING: Removing unreachable block (ram,0x00102a40) */
/* WARNING: Removing unreachable block (ram,0x00102884) */
/* WARNING: Removing unreachable block (ram,0x0010288e) */
/* WARNING: Removing unreachable block (ram,0x00102a20) */
/* WARNING: Removing unreachable block (ram,0x0010289a) */
/* WARNING: Removing unreachable block (ram,0x001028a4) */
/* WARNING: Removing unreachable block (ram,0x00102a00) */
/* WARNING: Removing unreachable block (ram,0x001028b0) */
/* WARNING: Removing unreachable block (ram,0x001028ba) */
/* WARNING: Removing unreachable block (ram,0x001029e0) */
/* WARNING: Removing unreachable block (ram,0x001028c6) */
/* WARNING: Removing unreachable block (ram,0x001028d0) */
/* WARNING: Removing unreachable block (ram,0x001029c0) */
/* WARNING: Removing unreachable block (ram,0x001028dc) */
/* WARNING: Removing unreachable block (ram,0x001028e6) */
/* WARNING: Removing unreachable block (ram,0x001029a0) */
/* WARNING: Removing unreachable block (ram,0x001028f2) */
/* WARNING: Removing unreachable block (ram,0x001028fc) */
/* WARNING: Removing unreachable block (ram,0x00102980) */
/* WARNING: Removing unreachable block (ram,0x00102904) */
/* WARNING: Removing unreachable block (ram,0x0010291a) */
/* WARNING: Removing unreachable block (ram,0x00102926) */
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



/* WARNING: Removing unreachable block (ram,0x00102b88) */
/* WARNING: Removing unreachable block (ram,0x00102cb8) */
/* WARNING: Removing unreachable block (ram,0x00102e80) */
/* WARNING: Removing unreachable block (ram,0x00102cc4) */
/* WARNING: Removing unreachable block (ram,0x00102cce) */
/* WARNING: Removing unreachable block (ram,0x00102e60) */
/* WARNING: Removing unreachable block (ram,0x00102cda) */
/* WARNING: Removing unreachable block (ram,0x00102ce4) */
/* WARNING: Removing unreachable block (ram,0x00102e40) */
/* WARNING: Removing unreachable block (ram,0x00102cf0) */
/* WARNING: Removing unreachable block (ram,0x00102cfa) */
/* WARNING: Removing unreachable block (ram,0x00102e20) */
/* WARNING: Removing unreachable block (ram,0x00102d06) */
/* WARNING: Removing unreachable block (ram,0x00102d10) */
/* WARNING: Removing unreachable block (ram,0x00102e00) */
/* WARNING: Removing unreachable block (ram,0x00102d1c) */
/* WARNING: Removing unreachable block (ram,0x00102d26) */
/* WARNING: Removing unreachable block (ram,0x00102de0) */
/* WARNING: Removing unreachable block (ram,0x00102d32) */
/* WARNING: Removing unreachable block (ram,0x00102d3c) */
/* WARNING: Removing unreachable block (ram,0x00102dc0) */
/* WARNING: Removing unreachable block (ram,0x00102d44) */
/* WARNING: Removing unreachable block (ram,0x00102d5a) */
/* WARNING: Removing unreachable block (ram,0x00102d66) */
/* String vformat<JoltPhysicsServer3D::HingeJointParamJolt>(String const&,
   JoltPhysicsServer3D::HingeJointParamJolt const) */

undefined8 *
vformat<JoltPhysicsServer3D::HingeJointParamJolt>(undefined8 *param_1,bool *param_2,int param_3)

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



/* WARNING: Removing unreachable block (ram,0x00102fc8) */
/* WARNING: Removing unreachable block (ram,0x001030f8) */
/* WARNING: Removing unreachable block (ram,0x001032c0) */
/* WARNING: Removing unreachable block (ram,0x00103104) */
/* WARNING: Removing unreachable block (ram,0x0010310e) */
/* WARNING: Removing unreachable block (ram,0x001032a0) */
/* WARNING: Removing unreachable block (ram,0x0010311a) */
/* WARNING: Removing unreachable block (ram,0x00103124) */
/* WARNING: Removing unreachable block (ram,0x00103280) */
/* WARNING: Removing unreachable block (ram,0x00103130) */
/* WARNING: Removing unreachable block (ram,0x0010313a) */
/* WARNING: Removing unreachable block (ram,0x00103260) */
/* WARNING: Removing unreachable block (ram,0x00103146) */
/* WARNING: Removing unreachable block (ram,0x00103150) */
/* WARNING: Removing unreachable block (ram,0x00103240) */
/* WARNING: Removing unreachable block (ram,0x0010315c) */
/* WARNING: Removing unreachable block (ram,0x00103166) */
/* WARNING: Removing unreachable block (ram,0x00103220) */
/* WARNING: Removing unreachable block (ram,0x00103172) */
/* WARNING: Removing unreachable block (ram,0x0010317c) */
/* WARNING: Removing unreachable block (ram,0x00103200) */
/* WARNING: Removing unreachable block (ram,0x00103184) */
/* WARNING: Removing unreachable block (ram,0x0010319a) */
/* WARNING: Removing unreachable block (ram,0x001031a6) */
/* String vformat<PhysicsServer3D::HingeJointFlag>(String const&, PhysicsServer3D::HingeJointFlag
   const) */

undefined8 * vformat<PhysicsServer3D::HingeJointFlag>(undefined8 *param_1,bool *param_2,int param_3)

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



/* WARNING: Removing unreachable block (ram,0x00103408) */
/* WARNING: Removing unreachable block (ram,0x00103538) */
/* WARNING: Removing unreachable block (ram,0x00103700) */
/* WARNING: Removing unreachable block (ram,0x00103544) */
/* WARNING: Removing unreachable block (ram,0x0010354e) */
/* WARNING: Removing unreachable block (ram,0x001036e0) */
/* WARNING: Removing unreachable block (ram,0x0010355a) */
/* WARNING: Removing unreachable block (ram,0x00103564) */
/* WARNING: Removing unreachable block (ram,0x001036c0) */
/* WARNING: Removing unreachable block (ram,0x00103570) */
/* WARNING: Removing unreachable block (ram,0x0010357a) */
/* WARNING: Removing unreachable block (ram,0x001036a0) */
/* WARNING: Removing unreachable block (ram,0x00103586) */
/* WARNING: Removing unreachable block (ram,0x00103590) */
/* WARNING: Removing unreachable block (ram,0x00103680) */
/* WARNING: Removing unreachable block (ram,0x0010359c) */
/* WARNING: Removing unreachable block (ram,0x001035a6) */
/* WARNING: Removing unreachable block (ram,0x00103660) */
/* WARNING: Removing unreachable block (ram,0x001035b2) */
/* WARNING: Removing unreachable block (ram,0x001035bc) */
/* WARNING: Removing unreachable block (ram,0x00103640) */
/* WARNING: Removing unreachable block (ram,0x001035c4) */
/* WARNING: Removing unreachable block (ram,0x001035da) */
/* WARNING: Removing unreachable block (ram,0x001035e6) */
/* String vformat<JoltPhysicsServer3D::HingeJointFlagJolt>(String const&,
   JoltPhysicsServer3D::HingeJointFlagJolt const) */

undefined8 *
vformat<JoltPhysicsServer3D::HingeJointFlagJolt>(undefined8 *param_1,bool *param_2,int param_3)

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



/* JoltHingeJoint3D::_build_hinge(JPH::Body*, JPH::Body*, Transform3D const&, Transform3D const&,
   float) const */

void JoltHingeJoint3D::_GLOBAL__sub_I__build_hinge(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC45;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltHingeJoint3D::~JoltHingeJoint3D() */

void __thiscall JoltHingeJoint3D::~JoltHingeJoint3D(JoltHingeJoint3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



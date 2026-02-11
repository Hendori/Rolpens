
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltSliderJoint3D::_build_slider(JPH::Body*, JPH::Body*, Transform3D const&, Transform3D const&,
   float) const */

void __thiscall
JoltSliderJoint3D::_build_slider
          (JoltSliderJoint3D *this,Body *param_1,Body *param_2,Transform3D *param_3,
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
  undefined1 local_bc;
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
  
  uStack_a0 = *(undefined4 *)(param_3 + 0x18);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_94 = *(undefined4 *)(param_3 + 0x14);
  local_98 = *(undefined4 *)(param_3 + 8);
  local_3c = __LC0;
  uStack_34 = _LC1;
  uStack_70 = *(undefined4 *)(param_4 + 0x18);
  local_e8 = &JPH::Body::sFixedToWorld;
  local_b8._12_4_ = SUB164(*(undefined1 (*) [16])(param_3 + 0x20),0xc);
  local_b8._0_12_ = SUB1612(*(undefined1 (*) [16])(param_3 + 0x20),4);
  local_a8 = *(undefined4 *)param_3;
  uStack_a4 = *(undefined4 *)(param_3 + 0xc);
  local_2c = _LC1;
  uStack_90 = *(undefined4 *)(param_3 + 0x20);
  local_e0 = 0;
  local_dc = 1;
  local_50 = 0;
  local_88._12_4_ = SUB164(*(undefined1 (*) [16])(param_4 + 0x20),0xc);
  local_88._0_12_ = SUB1612(*(undefined1 (*) [16])(param_4 + 0x20),4);
  local_78 = *(undefined4 *)param_4;
  uStack_74 = *(undefined4 *)(param_4 + 0xc);
  local_4c = 0;
  local_d0 = 0x3f80000000000000;
  local_44 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0;
  uStack_60 = *(undefined4 *)(param_4 + 0x20);
  uStack_64 = *(undefined4 *)(param_4 + 0x14);
  local_68 = *(undefined4 *)(param_4 + 8);
  local_58 = CONCAT44(param_5,(uint)param_5 ^ __LC2);
  if (this[0xc9] != (JoltSliderJoint3D)0x0) {
    local_4c = CONCAT44((float)*(double *)(this + 0xb0),(float)*(double *)(this + 0xa8));
  }
  uStack_9c = uStack_a0;
  uStack_8c = uStack_90;
  uStack_6c = uStack_70;
  uStack_5c = uStack_60;
  if (param_1 == (Body *)0x0) {
    JPH::SliderConstraintSettings::Create((Body *)&local_e8,(Body *)&JPH::Body::sFixedToWorld);
  }
  else if (param_2 == (Body *)0x0) {
    JPH::SliderConstraintSettings::Create((Body *)&local_e8,param_1);
  }
  else {
    JPH::SliderConstraintSettings::Create((Body *)&local_e8,param_1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltSliderJoint3D::_build_fixed(JPH::Body*, JPH::Body*, Transform3D const&, Transform3D const&)
   const */

void __thiscall
JoltSliderJoint3D::_build_fixed
          (JoltSliderJoint3D *this,Body *param_1,Body *param_2,Transform3D *param_3,
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



/* JoltSliderJoint3D::_update_motor_state() */

void __thiscall JoltSliderJoint3D::_update_motor_state(JoltSliderJoint3D *this)

{
  if ((((this[200] == (JoltSliderJoint3D)0x0) ||
       (*(double *)(this + 0xa0) != *(double *)(this + 0x98))) ||
      ((this[0xc9] != (JoltSliderJoint3D)0x0 && (0.0 < *(double *)(this + 0xa8))))) &&
     (*(long *)(this + 0x18) != 0)) {
    *(uint *)(*(long *)(this + 0x18) + 0xd8) = (uint)(byte)this[0xca];
  }
  return;
}



/* JoltSliderJoint3D::_update_motor_velocity() */

void __thiscall JoltSliderJoint3D::_update_motor_velocity(JoltSliderJoint3D *this)

{
  if ((((this[200] == (JoltSliderJoint3D)0x0) ||
       (*(double *)(this + 0xa0) != *(double *)(this + 0x98))) ||
      ((this[0xc9] != (JoltSliderJoint3D)0x0 && (0.0 < *(double *)(this + 0xa8))))) &&
     (*(long *)(this + 0x18) != 0)) {
    *(float *)(*(long *)(this + 0x18) + 0xdc) = (float)*(double *)(this + 0xb8);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltSliderJoint3D::_update_motor_limit() */

void __thiscall JoltSliderJoint3D::_update_motor_limit(JoltSliderJoint3D *this)

{
  if ((((this[200] == (JoltSliderJoint3D)0x0) ||
       (*(double *)(this + 0xa0) != *(double *)(this + 0x98))) ||
      ((this[0xc9] != (JoltSliderJoint3D)0x0 && (0.0 < *(double *)(this + 0xa8))))) &&
     (*(long *)(this + 0x18) != 0)) {
    *(ulong *)(*(long *)(this + 0x18) + 200) =
         CONCAT44((float)*(double *)(this + 0xc0),(uint)(float)*(double *)(this + 0xc0) ^ __LC2);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltSliderJoint3D::rebuild() */

void __thiscall JoltSliderJoint3D::rebuild(JoltSliderJoint3D *this)

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
  uint local_110 [3];
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
    _err_print_error("rebuild","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x200,
                     "Condition \"jolt_body_a == nullptr && jolt_body_b == nullptr\" is true.",0,0);
  }
  else {
    if (this[200] == (JoltSliderJoint3D)0x0) {
      local_110[0] = 0;
      local_12c = _LC1._4_4_;
    }
    else {
      dVar2 = *(double *)(this + 0x98);
      if (dVar2 < *(double *)(this + 0xa0)) {
        local_110[0] = 0;
        local_12c = _LC1._4_4_;
      }
      else {
        dVar3 = (*(double *)(this + 0xa0) + dVar2) * __LC9;
        local_110[0] = (uint)(float)dVar3 ^ __LC2;
        local_12c = (float)(dVar2 - dVar3);
      }
    }
    local_d4 = 0;
    local_cc = 0;
    local_64 = 0;
    local_5c = 0;
    local_104 = 0;
    local_fc = 0;
    local_110[1] = 0;
    local_110[2] = 0;
    local_f8 = (Transform3D  [16])ZEXT416(_LC10);
    local_e8 = ZEXT416(_LC10);
    local_d8 = _LC11;
    local_88 = ZEXT416(_LC10);
    local_78 = ZEXT416(_LC10);
    local_68 = _LC11;
    JoltJoint3D::_shift_reference_frames
              ((Vector3 *)this,(Vector3 *)local_110,(Transform3D *)&local_104,local_f8);
    if (((this[200] == (JoltSliderJoint3D)0x0) ||
        (*(double *)(this + 0xa0) != *(double *)(this + 0x98))) ||
       ((this[0xc9] != (JoltSliderJoint3D)0x0 && (0.0 < *(double *)(this + 0xa8))))) {
      plVar8 = (long *)_build_slider(this,pBVar6,pBVar7,local_f8,(Transform3D *)local_88,local_12c);
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



/* JoltSliderJoint3D::_limits_changed() */

void __thiscall JoltSliderJoint3D::_limits_changed(JoltSliderJoint3D *this)

{
  rebuild(this);
  JoltJoint3D::_wake_up_bodies();
  return;
}



/* JoltSliderJoint3D::_limit_spring_changed() */

void __thiscall JoltSliderJoint3D::_limit_spring_changed(JoltSliderJoint3D *this)

{
  rebuild(this);
  JoltJoint3D::_wake_up_bodies();
  return;
}



/* JoltSliderJoint3D::_motor_state_changed() */

void __thiscall JoltSliderJoint3D::_motor_state_changed(JoltSliderJoint3D *this)

{
  if ((((this[200] == (JoltSliderJoint3D)0x0) ||
       (*(double *)(this + 0xa0) != *(double *)(this + 0x98))) ||
      ((this[0xc9] != (JoltSliderJoint3D)0x0 && (0.0 < *(double *)(this + 0xa8))))) &&
     (*(long *)(this + 0x18) != 0)) {
    *(uint *)(*(long *)(this + 0x18) + 0xd8) = (uint)(byte)this[0xca];
  }
  JoltJoint3D::_wake_up_bodies();
  return;
}



/* JoltSliderJoint3D::_motor_speed_changed() */

void __thiscall JoltSliderJoint3D::_motor_speed_changed(JoltSliderJoint3D *this)

{
  if ((((this[200] == (JoltSliderJoint3D)0x0) ||
       (*(double *)(this + 0xa0) != *(double *)(this + 0x98))) ||
      ((this[0xc9] != (JoltSliderJoint3D)0x0 && (0.0 < *(double *)(this + 0xa8))))) &&
     (*(long *)(this + 0x18) != 0)) {
    *(float *)(*(long *)(this + 0x18) + 0xdc) = (float)*(double *)(this + 0xb8);
  }
  JoltJoint3D::_wake_up_bodies();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltSliderJoint3D::_motor_limit_changed() */

void __thiscall JoltSliderJoint3D::_motor_limit_changed(JoltSliderJoint3D *this)

{
  if ((((this[200] == (JoltSliderJoint3D)0x0) ||
       (*(double *)(this + 0xa0) != *(double *)(this + 0x98))) ||
      ((this[0xc9] != (JoltSliderJoint3D)0x0 && (0.0 < *(double *)(this + 0xa8))))) &&
     (*(long *)(this + 0x18) != 0)) {
    *(ulong *)(*(long *)(this + 0x18) + 200) =
         CONCAT44((float)*(double *)(this + 0xc0),(uint)(float)*(double *)(this + 0xc0) ^ __LC2);
  }
  JoltJoint3D::_wake_up_bodies();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltSliderJoint3D::JoltSliderJoint3D(JoltJoint3D const&, JoltBody3D*, JoltBody3D*, Transform3D
   const&, Transform3D const&) */

void __thiscall
JoltSliderJoint3D::JoltSliderJoint3D
          (JoltSliderJoint3D *this,JoltJoint3D *param_1,JoltBody3D *param_2,JoltBody3D *param_3,
          Transform3D *param_4,Transform3D *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  JoltJoint3D::JoltJoint3D((JoltJoint3D *)this,param_1,param_2,param_3,param_4,param_5);
  *(undefined ***)this = &PTR__JoltSliderJoint3D_00105080;
  *(undefined1 (*) [16])(this + 0x98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
  uVar2 = _UNK_00105128;
  uVar1 = __LC12;
  *(undefined2 *)(this + 200) = 1;
  this[0xca] = (JoltSliderJoint3D)0x0;
  *(undefined8 *)(this + 0xb8) = uVar1;
  *(undefined8 *)(this + 0xc0) = uVar2;
  rebuild(this);
  return;
}



/* JoltSliderJoint3D::get_applied_force() const */

float __thiscall JoltSliderJoint3D::get_applied_force(JoltSliderJoint3D *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(long *)(this + 0x18) == 0) {
    _err_print_error("get_applied_force","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",
                     0x1c5,"Parameter \"jolt_ref\" is null.",0,0);
  }
  else {
    lVar3 = JoltJoint3D::get_space();
    if (lVar3 == 0) {
      _err_print_error("get_applied_force","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",
                       0x1c8,"Parameter \"space\" is null.",0,0);
    }
    else if (*(float *)(lVar3 + 0x80) != 0.0) {
      if (((this[200] == (JoltSliderJoint3D)0x0) ||
          (*(double *)(this + 0xa0) != *(double *)(this + 0x98))) ||
         ((this[0xc9] != (JoltSliderJoint3D)0x0 && (0.0 < *(double *)(this + 0xa8))))) {
        lVar1 = *(long *)(this + 0x18);
        fVar6 = *(float *)(lVar1 + 0x34c) + *(float *)(lVar1 + 0x30c);
        fVar4 = *(float *)(lVar1 + 0x1f0);
        fVar5 = *(float *)(lVar1 + 500);
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



/* JoltSliderJoint3D::get_applied_torque() const */

float __thiscall JoltSliderJoint3D::get_applied_torque(JoltSliderJoint3D *this)

{
  float fVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  
  if (*(long *)(this + 0x18) == 0) {
    _err_print_error("get_applied_torque","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",
                     0x1da,"Parameter \"jolt_ref\" is null.",0,0);
  }
  else {
    lVar2 = JoltJoint3D::get_space();
    if (lVar2 == 0) {
      _err_print_error("get_applied_torque","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",
                       0x1dd,"Parameter \"space\" is null.",0,0);
    }
    else if (*(float *)(lVar2 + 0x80) != 0.0) {
      if (((this[200] == (JoltSliderJoint3D)0x0) ||
          (*(double *)(this + 0xa0) != *(double *)(this + 0x98))) ||
         ((this[0xc9] != (JoltSliderJoint3D)0x0 && (0.0 < *(double *)(this + 0xa8))))) {
        uVar4 = *(undefined8 *)(*(long *)(this + 0x18) + 0x2c0);
        fVar1 = (float)*(undefined8 *)(*(long *)(this + 0x18) + 0x2c8);
      }
      else {
        uVar4 = *(undefined8 *)(*(long *)(this + 0x18) + 0x130);
        fVar1 = (float)*(undefined8 *)(*(long *)(this + 0x18) + 0x138);
      }
      fVar3 = (float)((ulong)uVar4 >> 0x20);
      return SQRT(fVar3 * fVar3 + (float)uVar4 * (float)uVar4 + 0.0 + fVar1 * fVar1) /
             *(float *)(lVar2 + 0x80);
    }
  }
  return 0.0;
}



/* JoltSliderJoint3D::get_param(PhysicsServer3D::SliderJointParam) const */

undefined8 __thiscall JoltSliderJoint3D::get_param(JoltSliderJoint3D *this,uint param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 0x16) {
    if (param_2 < 2) {
      if (param_2 == 0) {
        uVar5 = *(undefined8 *)(this + 0x98);
      }
      else {
        uVar5 = *(undefined8 *)(this + 0xa0);
      }
      goto LAB_00100dde;
    }
    uVar4 = 1L << ((byte)param_2 & 0x3f);
    uVar5 = _LC25;
    if (((uVar4 & 0x2d2534) != 0) || (uVar5 = _LC26, (uVar4 & 0x124248) != 0)) goto LAB_00100dde;
    if ((uVar4 & 0x9880) == 0) goto LAB_00100d17;
  }
  else {
LAB_00100d17:
    local_40 = 0;
    local_30 = 0x53;
    local_38 = 
    "Unhandled slider joint parameter: \'%d\'. This should not happen. Please report this.";
    String::parse_latin1((StrRange *)&local_40);
    vformat<PhysicsServer3D::SliderJointParam>(&local_38,(StrRange *)&local_40,param_2);
    _err_print_error("get_param","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0xfa,
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
  }
  uVar5 = 0;
LAB_00100dde:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* JoltSliderJoint3D::set_param(PhysicsServer3D::SliderJointParam, double) */

void __thiscall
JoltSliderJoint3D::set_param(double param_1,JoltSliderJoint3D *this,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  double dVar4;
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
    goto LAB_00102738;
  case 1:
    *(double *)(this + 0xa0) = param_1;
LAB_00102738:
    rebuild(this);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      JoltJoint3D::_wake_up_bodies();
      return;
    }
    goto LAB_00102ab3;
  case 2:
    if (param_1 != _LC25) {
      dVar5 = _LC30;
      if (_LC30 <= ABS(param_1) * _LC30) {
        dVar5 = ABS(param_1) * _LC30;
      }
      if (dVar5 <= ABS(param_1 - _LC25)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Slider joint linear limit softness is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x84;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        _err_print_error("set_param","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x10b,
                         &local_38,0,1);
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
    if (param_1 != _LC26) {
      dVar5 = _LC30;
      if (_LC30 <= ABS(param_1) * _LC30) {
        dVar5 = ABS(param_1) * _LC30;
      }
      if (dVar5 <= ABS(param_1 - _LC26)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Slider joint linear limit restitution is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x87;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        _err_print_error("set_param","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x110,
                         &local_38,0,1);
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
  case 4:
    if (param_1 != _LC25) {
      dVar5 = _LC30;
      if (_LC30 <= ABS(param_1) * _LC30) {
        dVar5 = ABS(param_1) * _LC30;
      }
      if (dVar5 <= ABS(param_1 - _LC25)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Slider joint linear limit damping is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x83;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        _err_print_error("set_param","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x115,
                         &local_38,0,1);
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
  case 5:
    if (param_1 != _LC25) {
      dVar5 = _LC30;
      if (_LC30 <= ABS(param_1) * _LC30) {
        dVar5 = ABS(param_1) * _LC30;
      }
      if (dVar5 <= ABS(param_1 - _LC25)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Slider joint linear motion softness is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x85;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        _err_print_error("set_param","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x11a,
                         &local_38,0,1);
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
  case 6:
    if (param_1 != _LC26) {
      dVar5 = _LC30;
      if (_LC30 <= ABS(param_1) * _LC30) {
        dVar5 = ABS(param_1) * _LC30;
      }
      if (dVar5 <= ABS(param_1 - _LC26)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Slider joint linear motion restitution is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x88;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        _err_print_error("set_param","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x11f,
                         &local_38,0,1);
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
  case 7:
    if (param_1 != 0.0) {
      dVar4 = ABS(param_1) * _LC30;
      dVar5 = _LC30;
      if (_LC30 <= dVar4) {
        dVar5 = dVar4;
      }
      if (dVar5 <= ABS(param_1)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Slider joint linear motion damping is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x84;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        _err_print_error("set_param","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x124,
                         &local_38,0,1);
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
  case 8:
    if (param_1 != _LC25) {
      dVar5 = _LC30;
      if (_LC30 <= ABS(param_1) * _LC30) {
        dVar5 = ABS(param_1) * _LC30;
      }
      if (dVar5 <= ABS(param_1 - _LC25)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Slider joint linear ortho softness is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x84;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        _err_print_error("set_param","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x129,
                         &local_38,0,1);
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
  case 9:
    if (param_1 != _LC26) {
      dVar5 = _LC30;
      if (_LC30 <= ABS(param_1) * _LC30) {
        dVar5 = ABS(param_1) * _LC30;
      }
      if (dVar5 <= ABS(param_1 - _LC26)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Slider joint linear ortho restitution is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x87;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        _err_print_error("set_param","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x12e,
                         &local_38,0,1);
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
  case 10:
    if (param_1 != _LC25) {
      dVar5 = _LC30;
      if (_LC30 <= ABS(param_1) * _LC30) {
        dVar5 = ABS(param_1) * _LC30;
      }
      if (dVar5 <= ABS(param_1 - _LC25)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Slider joint linear ortho damping is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x83;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        _err_print_error("set_param","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x133,
                         &local_38,0,1);
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
  case 0xb:
    if (param_1 != 0.0) {
      dVar4 = ABS(param_1) * _LC30;
      dVar5 = _LC30;
      if (_LC30 <= dVar4) {
        dVar5 = dVar4;
      }
      if (dVar5 <= ABS(param_1)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Slider joint angular limits are not supported when using Jolt Physics. Any such value will be ignored. Try using Generic6DOFJoint3D instead. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0xa4;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        _err_print_error("set_param","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x138,
                         &local_38,0,1);
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
  case 0xc:
    if (param_1 != 0.0) {
      dVar4 = ABS(param_1) * _LC30;
      dVar5 = _LC30;
      if (_LC30 <= dVar4) {
        dVar5 = dVar4;
      }
      if (dVar5 <= ABS(param_1)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Slider joint angular limits are not supported when using Jolt Physics. Any such value will be ignored. Try using Generic6DOFJoint3D instead. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0xa4;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        _err_print_error("set_param","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x13d,
                         &local_38,0,1);
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
  case 0xd:
    if (param_1 != _LC25) {
      dVar5 = _LC30;
      if (_LC30 <= ABS(param_1) * _LC30) {
        dVar5 = ABS(param_1) * _LC30;
      }
      if (dVar5 <= ABS(param_1 - _LC25)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Slider joint angular limit softness is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x85;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        _err_print_error("set_param","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x142,
                         &local_38,0,1);
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
  case 0xe:
    if (param_1 != _LC26) {
      dVar5 = _LC30;
      if (_LC30 <= ABS(param_1) * _LC30) {
        dVar5 = ABS(param_1) * _LC30;
      }
      if (dVar5 <= ABS(param_1 - _LC26)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Slider joint angular limit restitution is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x88;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        _err_print_error("set_param","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x147,
                         &local_38,0,1);
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
  case 0xf:
    if (param_1 != 0.0) {
      dVar4 = ABS(param_1) * _LC30;
      dVar5 = _LC30;
      if (_LC30 <= dVar4) {
        dVar5 = dVar4;
      }
      if (dVar5 <= ABS(param_1)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Slider joint angular limit damping is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x84;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        _err_print_error("set_param","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x14c,
                         &local_38,0,1);
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
  case 0x10:
    if (param_1 != _LC25) {
      dVar5 = _LC30;
      if (_LC30 <= ABS(param_1) * _LC30) {
        dVar5 = ABS(param_1) * _LC30;
      }
      if (dVar5 <= ABS(param_1 - _LC25)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Slider joint angular motion softness is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x86;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        _err_print_error("set_param","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x151,
                         &local_38,0,1);
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
  case 0x11:
    if (param_1 != _LC26) {
      dVar5 = _LC30;
      if (_LC30 <= ABS(param_1) * _LC30) {
        dVar5 = ABS(param_1) * _LC30;
      }
      if (dVar5 <= ABS(param_1 - _LC26)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Slider joint angular motion restitution is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x89;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        _err_print_error("set_param","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x156,
                         &local_38,0,1);
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
  case 0x12:
    if (param_1 != _LC25) {
      dVar5 = _LC30;
      if (_LC30 <= ABS(param_1) * _LC30) {
        dVar5 = ABS(param_1) * _LC30;
      }
      if (dVar5 <= ABS(param_1 - _LC25)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Slider joint angular motion damping is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x85;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        _err_print_error("set_param","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x15b,
                         &local_38,0,1);
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
  case 0x13:
    if (param_1 != _LC25) {
      dVar5 = _LC30;
      if (_LC30 <= ABS(param_1) * _LC30) {
        dVar5 = ABS(param_1) * _LC30;
      }
      if (dVar5 <= ABS(param_1 - _LC25)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Slider joint angular ortho softness is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x85;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        _err_print_error("set_param","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x160,
                         &local_38,0,1);
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
  case 0x14:
    if (param_1 != _LC26) {
      dVar5 = _LC30;
      if (_LC30 <= ABS(param_1) * _LC30) {
        dVar5 = ABS(param_1) * _LC30;
      }
      if (dVar5 <= ABS(param_1 - _LC26)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Slider joint angular ortho restitution is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x88;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        _err_print_error("set_param","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x165,
                         &local_38,0,1);
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
  case 0x15:
    if (param_1 != _LC25) {
      dVar5 = _LC30;
      if (_LC30 <= ABS(param_1) * _LC30) {
        dVar5 = ABS(param_1) * _LC30;
      }
      if (dVar5 <= ABS(param_1 - _LC25)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "Slider joint angular ortho damping is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x84;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        _err_print_error("set_param","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x16a,
                         &local_38,0,1);
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
  default:
    local_40 = 0;
    local_30 = 0x53;
    local_38 = 
    "Unhandled slider joint parameter: \'%d\'. This should not happen. Please report this.";
    String::parse_latin1((StrRange *)&local_40);
    vformat<PhysicsServer3D::SliderJointParam>(&local_38,(StrRange *)&local_40,param_3);
    _err_print_error("set_param","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x16e,
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
LAB_00102ab3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltSliderJoint3D::get_jolt_param(JoltPhysicsServer3D::SliderJointParamJolt) const */

undefined8 __thiscall JoltSliderJoint3D::get_jolt_param(JoltSliderJoint3D *this,uint param_2)

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
  if (param_2 == 0x66) {
    uVar4 = *(undefined8 *)(this + 0xb8);
    goto LAB_00102b15;
  }
  if (param_2 < 0x67) {
    if (param_2 == 100) {
      uVar4 = *(undefined8 *)(this + 0xa8);
      goto LAB_00102b15;
    }
    if (param_2 == 0x65) {
      uVar4 = *(undefined8 *)(this + 0xb0);
      goto LAB_00102b15;
    }
  }
  else if (param_2 == 0x67) {
    uVar4 = *(undefined8 *)(this + 0xc0);
    goto LAB_00102b15;
  }
  local_40 = 0;
  local_30 = 0x46;
  local_38 = "Unhandled parameter: \'%d\'. This should not happen. Please report this.";
  String::parse_latin1((StrRange *)&local_40);
  vformat<JoltPhysicsServer3D::SliderJointParamJolt>(&local_38,(StrRange *)&local_40,param_2);
  _err_print_error("get_jolt_param","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x182,
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
LAB_00102b15:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltSliderJoint3D::set_jolt_param(JoltPhysicsServer3D::SliderJointParamJolt, double) */

void __thiscall
JoltSliderJoint3D::set_jolt_param(undefined8 param_1,JoltSliderJoint3D *this,uint param_3)

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
  if (param_3 == 0x66) {
    *(undefined8 *)(this + 0xb8) = param_1;
    _update_motor_velocity(this);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      JoltJoint3D::_wake_up_bodies();
      return;
    }
    goto LAB_00102cc2;
  }
  if (param_3 < 0x67) {
    if (param_3 == 100) {
      *(undefined8 *)(this + 0xa8) = param_1;
      rebuild(this);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        JoltJoint3D::_wake_up_bodies();
        return;
      }
      goto LAB_00102cc2;
    }
    if (param_3 == 0x65) {
      *(undefined8 *)(this + 0xb0) = param_1;
      rebuild(this);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102c87;
      goto LAB_00102cc2;
    }
  }
  else if (param_3 == 0x67) {
    *(undefined8 *)(this + 0xc0) = param_1;
    _update_motor_limit(this);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00102c87:
      JoltJoint3D::_wake_up_bodies();
      return;
    }
    goto LAB_00102cc2;
  }
  local_40 = 0;
  local_30 = 0x46;
  local_38 = "Unhandled parameter: \'%d\'. This should not happen. Please report this.";
  String::parse_latin1((StrRange *)&local_40);
  vformat<JoltPhysicsServer3D::SliderJointParamJolt>(&local_38,(StrRange *)&local_40,param_3);
  _err_print_error("set_jolt_param","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x19a,
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
LAB_00102cc2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltSliderJoint3D::get_jolt_flag(JoltPhysicsServer3D::SliderJointFlagJolt) const */

JoltSliderJoint3D __thiscall JoltSliderJoint3D::get_jolt_flag(JoltSliderJoint3D *this,int param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  JoltSliderJoint3D JVar4;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0x65) {
    JVar4 = this[0xc9];
  }
  else if (param_2 == 0x66) {
    JVar4 = this[0xca];
  }
  else if (param_2 == 100) {
    JVar4 = this[200];
  }
  else {
    local_40 = 0;
    local_30 = 0x41;
    local_38 = "Unhandled flag: \'%d\'. This should not happen. Please report this.";
    String::parse_latin1((StrRange *)&local_40);
    vformat<JoltPhysicsServer3D::SliderJointFlagJolt>(&local_38,(StrRange *)&local_40,param_2);
    _err_print_error("get_jolt_flag","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x1ab,
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
    JVar4 = (JoltSliderJoint3D)0x0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return JVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltSliderJoint3D::set_jolt_flag(JoltPhysicsServer3D::SliderJointFlagJolt, bool) */

void __thiscall
JoltSliderJoint3D::set_jolt_flag(JoltSliderJoint3D *this,int param_2,JoltSliderJoint3D param_3)

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
  if (param_2 == 0x65) {
    this[0xc9] = param_3;
    rebuild(this);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      JoltJoint3D::_wake_up_bodies();
      return;
    }
  }
  else if (param_2 == 0x66) {
    this[0xca] = param_3;
    _update_motor_state(this);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00102fbf:
      JoltJoint3D::_wake_up_bodies();
      return;
    }
  }
  else if (param_2 == 100) {
    this[200] = param_3;
    rebuild(this);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102fbf;
  }
  else {
    local_40 = 0;
    local_30 = 0x41;
    local_38 = "Unhandled flag: \'%d\'. This should not happen. Please report this.";
    String::parse_latin1((StrRange *)&local_40);
    vformat<JoltPhysicsServer3D::SliderJointFlagJolt>(&local_38,(StrRange *)&local_40,param_2);
    _err_print_error("set_jolt_flag","modules/jolt_physics/joints/jolt_slider_joint_3d.cpp",0x1bf,
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



/* JoltSliderJoint3D::get_type() const */

undefined8 JoltSliderJoint3D::get_type(void)

{
  return 2;
}



/* JoltSliderJoint3D::~JoltSliderJoint3D() */

void __thiscall JoltSliderJoint3D::~JoltSliderJoint3D(JoltSliderJoint3D *this)

{
  *(undefined ***)this = &PTR__JoltSliderJoint3D_00105080;
  JoltJoint3D::~JoltJoint3D((JoltJoint3D *)this);
  return;
}



/* JoltSliderJoint3D::~JoltSliderJoint3D() */

void __thiscall JoltSliderJoint3D::~JoltSliderJoint3D(JoltSliderJoint3D *this)

{
  *(undefined ***)this = &PTR__JoltSliderJoint3D_00105080;
  JoltJoint3D::~JoltJoint3D((JoltJoint3D *)this);
  operator_delete(this,0xd0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00103fc8) */
/* WARNING: Removing unreachable block (ram,0x001040f8) */
/* WARNING: Removing unreachable block (ram,0x001042c0) */
/* WARNING: Removing unreachable block (ram,0x00104104) */
/* WARNING: Removing unreachable block (ram,0x0010410e) */
/* WARNING: Removing unreachable block (ram,0x001042a0) */
/* WARNING: Removing unreachable block (ram,0x0010411a) */
/* WARNING: Removing unreachable block (ram,0x00104124) */
/* WARNING: Removing unreachable block (ram,0x00104280) */
/* WARNING: Removing unreachable block (ram,0x00104130) */
/* WARNING: Removing unreachable block (ram,0x0010413a) */
/* WARNING: Removing unreachable block (ram,0x00104260) */
/* WARNING: Removing unreachable block (ram,0x00104146) */
/* WARNING: Removing unreachable block (ram,0x00104150) */
/* WARNING: Removing unreachable block (ram,0x00104240) */
/* WARNING: Removing unreachable block (ram,0x0010415c) */
/* WARNING: Removing unreachable block (ram,0x00104166) */
/* WARNING: Removing unreachable block (ram,0x00104220) */
/* WARNING: Removing unreachable block (ram,0x00104172) */
/* WARNING: Removing unreachable block (ram,0x0010417c) */
/* WARNING: Removing unreachable block (ram,0x00104200) */
/* WARNING: Removing unreachable block (ram,0x00104184) */
/* WARNING: Removing unreachable block (ram,0x0010419a) */
/* WARNING: Removing unreachable block (ram,0x001041a6) */
/* String vformat<PhysicsServer3D::SliderJointParam>(String const&,
   PhysicsServer3D::SliderJointParam const) */

undefined8 *
vformat<PhysicsServer3D::SliderJointParam>(undefined8 *param_1,bool *param_2,int param_3)

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



/* WARNING: Removing unreachable block (ram,0x00104408) */
/* WARNING: Removing unreachable block (ram,0x00104538) */
/* WARNING: Removing unreachable block (ram,0x00104700) */
/* WARNING: Removing unreachable block (ram,0x00104544) */
/* WARNING: Removing unreachable block (ram,0x0010454e) */
/* WARNING: Removing unreachable block (ram,0x001046e0) */
/* WARNING: Removing unreachable block (ram,0x0010455a) */
/* WARNING: Removing unreachable block (ram,0x00104564) */
/* WARNING: Removing unreachable block (ram,0x001046c0) */
/* WARNING: Removing unreachable block (ram,0x00104570) */
/* WARNING: Removing unreachable block (ram,0x0010457a) */
/* WARNING: Removing unreachable block (ram,0x001046a0) */
/* WARNING: Removing unreachable block (ram,0x00104586) */
/* WARNING: Removing unreachable block (ram,0x00104590) */
/* WARNING: Removing unreachable block (ram,0x00104680) */
/* WARNING: Removing unreachable block (ram,0x0010459c) */
/* WARNING: Removing unreachable block (ram,0x001045a6) */
/* WARNING: Removing unreachable block (ram,0x00104660) */
/* WARNING: Removing unreachable block (ram,0x001045b2) */
/* WARNING: Removing unreachable block (ram,0x001045bc) */
/* WARNING: Removing unreachable block (ram,0x00104640) */
/* WARNING: Removing unreachable block (ram,0x001045c4) */
/* WARNING: Removing unreachable block (ram,0x001045da) */
/* WARNING: Removing unreachable block (ram,0x001045e6) */
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



/* WARNING: Removing unreachable block (ram,0x00104898) */
/* WARNING: Removing unreachable block (ram,0x001049c8) */
/* WARNING: Removing unreachable block (ram,0x00104b90) */
/* WARNING: Removing unreachable block (ram,0x001049d4) */
/* WARNING: Removing unreachable block (ram,0x001049de) */
/* WARNING: Removing unreachable block (ram,0x00104b70) */
/* WARNING: Removing unreachable block (ram,0x001049ea) */
/* WARNING: Removing unreachable block (ram,0x001049f4) */
/* WARNING: Removing unreachable block (ram,0x00104b50) */
/* WARNING: Removing unreachable block (ram,0x00104a00) */
/* WARNING: Removing unreachable block (ram,0x00104a0a) */
/* WARNING: Removing unreachable block (ram,0x00104b30) */
/* WARNING: Removing unreachable block (ram,0x00104a16) */
/* WARNING: Removing unreachable block (ram,0x00104a20) */
/* WARNING: Removing unreachable block (ram,0x00104b10) */
/* WARNING: Removing unreachable block (ram,0x00104a2c) */
/* WARNING: Removing unreachable block (ram,0x00104a36) */
/* WARNING: Removing unreachable block (ram,0x00104af0) */
/* WARNING: Removing unreachable block (ram,0x00104a42) */
/* WARNING: Removing unreachable block (ram,0x00104a4c) */
/* WARNING: Removing unreachable block (ram,0x00104ad0) */
/* WARNING: Removing unreachable block (ram,0x00104a54) */
/* WARNING: Removing unreachable block (ram,0x00104a6a) */
/* WARNING: Removing unreachable block (ram,0x00104a76) */
/* String vformat<JoltPhysicsServer3D::SliderJointParamJolt>(String const&,
   JoltPhysicsServer3D::SliderJointParamJolt const) */

undefined8 *
vformat<JoltPhysicsServer3D::SliderJointParamJolt>(undefined8 *param_1,bool *param_2,int param_3)

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



/* WARNING: Removing unreachable block (ram,0x00104cd8) */
/* WARNING: Removing unreachable block (ram,0x00104e08) */
/* WARNING: Removing unreachable block (ram,0x00104fd0) */
/* WARNING: Removing unreachable block (ram,0x00104e14) */
/* WARNING: Removing unreachable block (ram,0x00104e1e) */
/* WARNING: Removing unreachable block (ram,0x00104fb0) */
/* WARNING: Removing unreachable block (ram,0x00104e2a) */
/* WARNING: Removing unreachable block (ram,0x00104e34) */
/* WARNING: Removing unreachable block (ram,0x00104f90) */
/* WARNING: Removing unreachable block (ram,0x00104e40) */
/* WARNING: Removing unreachable block (ram,0x00104e4a) */
/* WARNING: Removing unreachable block (ram,0x00104f70) */
/* WARNING: Removing unreachable block (ram,0x00104e56) */
/* WARNING: Removing unreachable block (ram,0x00104e60) */
/* WARNING: Removing unreachable block (ram,0x00104f50) */
/* WARNING: Removing unreachable block (ram,0x00104e6c) */
/* WARNING: Removing unreachable block (ram,0x00104e76) */
/* WARNING: Removing unreachable block (ram,0x00104f30) */
/* WARNING: Removing unreachable block (ram,0x00104e82) */
/* WARNING: Removing unreachable block (ram,0x00104e8c) */
/* WARNING: Removing unreachable block (ram,0x00104f10) */
/* WARNING: Removing unreachable block (ram,0x00104e94) */
/* WARNING: Removing unreachable block (ram,0x00104eaa) */
/* WARNING: Removing unreachable block (ram,0x00104eb6) */
/* String vformat<JoltPhysicsServer3D::SliderJointFlagJolt>(String const&,
   JoltPhysicsServer3D::SliderJointFlagJolt const) */

undefined8 *
vformat<JoltPhysicsServer3D::SliderJointFlagJolt>(undefined8 *param_1,bool *param_2,int param_3)

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



/* JoltSliderJoint3D::_build_slider(JPH::Body*, JPH::Body*, Transform3D const&, Transform3D const&,
   float) const */

void JoltSliderJoint3D::_GLOBAL__sub_I__build_slider(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC59;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltSliderJoint3D::~JoltSliderJoint3D() */

void __thiscall JoltSliderJoint3D::~JoltSliderJoint3D(JoltSliderJoint3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}




/* JoltPinJoint3D::_build_pin(JPH::Body*, JPH::Body*, Transform3D const&, Transform3D const&) */

void JoltPinJoint3D::_build_pin
               (Body *param_1,Body *param_2,Transform3D *param_3,Transform3D *param_4)

{
  long in_FS_OFFSET;
  undefined8 *local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  long local_10;
  
  uStack_34 = *(undefined4 *)(param_3 + 0x28);
  uStack_30 = *(undefined4 *)(param_3 + 0x2c);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *(undefined4 *)(param_3 + 0x24);
  local_60 = 0;
  local_68 = &JPH::Body::sFixedToWorld;
  uStack_24 = *(undefined4 *)(param_4 + 0x28);
  local_50 = 0x3f80000000000000;
  uStack_20 = *(undefined4 *)(param_4 + 0x2c);
  local_5c = 1;
  local_28 = *(undefined4 *)(param_4 + 0x24);
  local_40 = 0;
  local_58 = 0;
  local_48 = 0;
  uStack_2c = uStack_30;
  uStack_1c = uStack_20;
  if (param_1 == (Body *)0x0) {
    JPH::PointConstraintSettings::Create((Body *)&local_68,(Body *)&JPH::Body::sFixedToWorld);
  }
  else if (param_2 == (Body *)0x0) {
    JPH::PointConstraintSettings::Create((Body *)&local_68,param_1);
  }
  else {
    JPH::PointConstraintSettings::Create((Body *)&local_68,param_1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPinJoint3D::rebuild() */

void __thiscall JoltPinJoint3D::rebuild(JoltPinJoint3D *this)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  JoltJoint3D *pJVar4;
  Body *pBVar5;
  Body *pBVar6;
  long *plVar7;
  int iVar8;
  long in_FS_OFFSET;
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
  pJVar4 = (JoltJoint3D *)JoltJoint3D::get_space();
  if (pJVar4 != (JoltJoint3D *)0x0) {
    JoltSpace3D::write_bodies((BodyID *)&local_c8,(int)pJVar4);
    iVar3 = JoltBodyAccessor3D::get_count();
    iVar8 = (int)(BodyID *)&local_c8;
    if (0 < iVar3) {
      JoltBodyAccessor3D::get_at(iVar8);
    }
    JoltBodyWriter3D::JoltBodyWriter3D((JoltBodyWriter3D *)local_88,local_c0);
    JoltBodyAccessor3D::acquire((BodyID *)local_88);
    pBVar5 = (Body *)JoltBodyWriter3D::try_get();
    local_48 = pBVar5;
    JoltBodyAccessor3D::release();
    local_88._0_8_ = JoltBodyAccessor3D::acquire;
    JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_88);
    iVar3 = JoltBodyAccessor3D::get_count();
    if (1 < iVar3) {
      JoltBodyAccessor3D::get_at(iVar8);
    }
    JoltBodyWriter3D::JoltBodyWriter3D((JoltBodyWriter3D *)local_88,local_c0);
    JoltBodyAccessor3D::acquire((BodyID *)local_88);
    pBVar6 = (Body *)JoltBodyWriter3D::try_get();
    local_48 = pBVar6;
    JoltBodyAccessor3D::release();
    local_88._0_8_ = JoltBodyAccessor3D::acquire;
    JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_88);
    if (pBVar5 == (Body *)0x0 && pBVar6 == (Body *)0x0) {
      _err_print_error("rebuild","modules/jolt_physics/joints/jolt_pin_joint_3d.cpp",0x9c,
                       "Condition \"jolt_body_a == nullptr && jolt_body_b == nullptr\" is true.",0,0
                      );
    }
    else {
      local_f8 = (Transform3D  [16])ZEXT416(_LC4);
      local_e8 = ZEXT416(_LC4);
      local_d8 = _LC4;
      local_88 = ZEXT416(_LC4);
      local_78 = ZEXT416(_LC4);
      local_68 = _LC4;
      local_d4 = 0;
      local_cc = 0;
      local_64 = 0;
      local_5c = 0;
      local_104 = 0;
      local_fc = 0;
      local_110 = 0;
      local_108 = 0;
      JoltJoint3D::_shift_reference_frames
                ((Vector3 *)this,(Vector3 *)&local_110,(Transform3D *)&local_104,local_f8);
      plVar7 = (long *)_build_pin(pBVar5,pBVar6,local_f8,(Transform3D *)local_88);
      plVar2 = *(long **)(this + 0x18);
      if (plVar7 != plVar2) {
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar2 + 8))();
          }
        }
        *(long **)(this + 0x18) = plVar7;
        if (plVar7 != (long *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
      }
      JoltSpace3D::add_joint(pJVar4);
      JoltJoint3D::_update_enabled();
      JoltJoint3D::_update_iterations();
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



/* JoltPinJoint3D::_points_changed() */

void __thiscall JoltPinJoint3D::_points_changed(JoltPinJoint3D *this)

{
  rebuild(this);
  JoltJoint3D::_wake_up_bodies();
  return;
}



/* JoltPinJoint3D::JoltPinJoint3D(JoltJoint3D const&, JoltBody3D*, JoltBody3D*, Vector3 const&,
   Vector3 const&) */

void __thiscall
JoltPinJoint3D::JoltPinJoint3D
          (JoltPinJoint3D *this,JoltJoint3D *param_1,JoltBody3D *param_2,JoltBody3D *param_3,
          Vector3 *param_4,Vector3 *param_5)

{
  long in_FS_OFFSET;
  Basis local_108 [16];
  undefined1 local_f8 [16];
  undefined4 local_e8;
  Basis local_d8 [16];
  undefined1 local_c8 [16];
  undefined4 local_b8;
  Transform3D local_a8 [48];
  Transform3D local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = (Basis  [16])ZEXT416(_LC4);
  local_c8 = ZEXT416(_LC4);
  local_b8 = 0x3f800000;
  Transform3D::Transform3D(local_78,local_d8,param_5);
  local_e8 = 0x3f800000;
  local_108 = (Basis  [16])ZEXT416(_LC4);
  local_f8 = ZEXT416(_LC4);
  Transform3D::Transform3D(local_a8,local_108,param_4);
  JoltJoint3D::JoltJoint3D((JoltJoint3D *)this,param_1,param_2,param_3,local_a8,local_78);
  *(undefined ***)this = &PTR__JoltPinJoint3D_00101950;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    rebuild(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPinJoint3D::set_local_a(Vector3 const&) */

void __thiscall JoltPinJoint3D::set_local_a(JoltPinJoint3D *this,Vector3 *param_1)

{
  long in_FS_OFFSET;
  Basis local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0x3f800000;
  local_78 = (Basis  [16])ZEXT416(_LC4);
  local_68 = ZEXT416(_LC4);
  Transform3D::Transform3D((Transform3D *)&local_48,local_78,param_1);
  *(undefined8 *)(this + 0x38) = local_48;
  *(undefined8 *)(this + 0x40) = uStack_40;
  *(undefined8 *)(this + 0x48) = local_38;
  *(undefined8 *)(this + 0x50) = uStack_30;
  *(undefined8 *)(this + 0x58) = local_28;
  *(undefined8 *)(this + 0x60) = uStack_20;
  rebuild(this);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    JoltJoint3D::_wake_up_bodies();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPinJoint3D::set_local_b(Vector3 const&) */

void __thiscall JoltPinJoint3D::set_local_b(JoltPinJoint3D *this,Vector3 *param_1)

{
  long in_FS_OFFSET;
  Basis local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0x3f800000;
  local_78 = (Basis  [16])ZEXT416(_LC4);
  local_68 = ZEXT416(_LC4);
  Transform3D::Transform3D((Transform3D *)&local_48,local_78,param_1);
  *(undefined8 *)(this + 0x68) = local_48;
  *(undefined8 *)(this + 0x70) = uStack_40;
  *(undefined8 *)(this + 0x78) = local_38;
  *(undefined8 *)(this + 0x80) = uStack_30;
  *(undefined8 *)(this + 0x88) = local_28;
  *(undefined8 *)(this + 0x90) = uStack_20;
  rebuild(this);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    JoltJoint3D::_wake_up_bodies();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPinJoint3D::get_applied_force() const */

float __thiscall JoltPinJoint3D::get_applied_force(JoltPinJoint3D *this)

{
  long lVar1;
  float fVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(long *)(this + 0x18);
  if (lVar1 == 0) {
    _err_print_error("get_applied_force","modules/jolt_physics/joints/jolt_pin_joint_3d.cpp",0x7c,
                     "Parameter \"constraint\" is null.",0,0);
  }
  else {
    lVar3 = JoltJoint3D::get_space();
    if (lVar3 == 0) {
      _err_print_error("get_applied_force","modules/jolt_physics/joints/jolt_pin_joint_3d.cpp",0x7f,
                       "Parameter \"space\" is null.",0,0);
    }
    else if (*(float *)(lVar3 + 0x80) != 0.0) {
      fVar4 = (float)*(undefined8 *)(lVar1 + 0x140);
      fVar2 = (float)*(undefined8 *)(lVar1 + 0x148);
      fVar5 = (float)((ulong)*(undefined8 *)(lVar1 + 0x140) >> 0x20);
      return SQRT(fVar5 * fVar5 + fVar4 * fVar4 + 0.0 + fVar2 * fVar2) / *(float *)(lVar3 + 0x80);
    }
  }
  return 0.0;
}



/* JoltPinJoint3D::get_param(PhysicsServer3D::PinJointParam) const */

undefined8 __thiscall JoltPinJoint3D::get_param(undefined8 param_1,int param_2)

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
  uVar4 = _LC16;
  if (param_2 != 1) {
    if (param_2 != 2) {
      uVar4 = _LC15;
      if (param_2 == 0) goto LAB_0010085c;
      local_40 = 0;
      local_30 = 0x50;
      local_38 = 
      "Unhandled pin joint parameter: \'%d\'. This should not happen. Please report this.";
      String::parse_latin1((StrRange *)&local_40);
      vformat<PhysicsServer3D::PinJointParam>(&local_38,(StrRange *)&local_40,param_2);
      _err_print_error("get_param","modules/jolt_physics/joints/jolt_pin_joint_3d.cpp",0x5e,
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
    uVar4 = 0;
  }
LAB_0010085c:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* JoltPinJoint3D::set_param(PhysicsServer3D::PinJointParam, double) */

void __thiscall JoltPinJoint3D::set_param(double param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  double dVar5;
  double dVar6;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 1) {
    if (param_1 == _LC16) goto LAB_00100a50;
    dVar6 = _LC21;
    if (_LC21 <= ABS(param_1) * _LC21) {
      dVar6 = ABS(param_1) * _LC21;
    }
    if (ABS(param_1 - _LC16) < dVar6) goto LAB_00100a50;
    JoltJoint3D::_bodies_to_string();
    local_38 = 
    "Pin joint damping is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
    ;
    local_40 = 0;
    local_30 = 0x73;
    String::parse_latin1((StrRange *)&local_40);
    vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
    uVar4 = 0x6c;
  }
  else if (param_3 == 2) {
    if (param_1 == 0.0) goto LAB_00100a50;
    dVar5 = ABS(param_1) * _LC21;
    dVar6 = _LC21;
    if (_LC21 <= dVar5) {
      dVar6 = dVar5;
    }
    if (ABS(param_1) < dVar6) goto LAB_00100a50;
    JoltJoint3D::_bodies_to_string();
    local_38 = 
    "Pin joint impulse clamp is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
    ;
    local_40 = 0;
    local_30 = 0x79;
    String::parse_latin1((StrRange *)&local_40);
    vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
    uVar4 = 0x71;
  }
  else {
    if (param_3 != 0) {
      local_40 = 0;
      local_30 = 0x50;
      local_38 = 
      "Unhandled pin joint parameter: \'%d\'. This should not happen. Please report this.";
      String::parse_latin1((StrRange *)&local_40);
      vformat<PhysicsServer3D::PinJointParam>(&local_38,(StrRange *)&local_40,param_3);
      _err_print_error("set_param","modules/jolt_physics/joints/jolt_pin_joint_3d.cpp",0x75,
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
      goto LAB_00100a50;
    }
    if (param_1 == _LC15) goto LAB_00100a50;
    dVar6 = _LC21;
    if (_LC21 <= ABS(param_1) * _LC21) {
      dVar6 = ABS(param_1) * _LC21;
    }
    if (ABS(param_1 - _LC15) < dVar6) goto LAB_00100a50;
    JoltJoint3D::_bodies_to_string();
    local_38 = 
    "Pin joint bias is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
    ;
    local_40 = 0;
    local_30 = 0x70;
    String::parse_latin1((StrRange *)&local_40);
    vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
    uVar4 = 0x67;
  }
  _err_print_error("set_param","modules/jolt_physics/joints/jolt_pin_joint_3d.cpp",uVar4,&local_38,0
                   ,1);
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
LAB_00100a50:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPinJoint3D::get_type() const */

undefined8 JoltPinJoint3D::get_type(void)

{
  return 0;
}



/* JoltPinJoint3D::~JoltPinJoint3D() */

void __thiscall JoltPinJoint3D::~JoltPinJoint3D(JoltPinJoint3D *this)

{
  *(undefined ***)this = &PTR__JoltPinJoint3D_00101950;
  JoltJoint3D::~JoltJoint3D((JoltJoint3D *)this);
  return;
}



/* JoltPinJoint3D::~JoltPinJoint3D() */

void __thiscall JoltPinJoint3D::~JoltPinJoint3D(JoltPinJoint3D *this)

{
  *(undefined ***)this = &PTR__JoltPinJoint3D_00101950;
  JoltJoint3D::~JoltJoint3D((JoltJoint3D *)this);
  operator_delete(this,0x98);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00101168) */
/* WARNING: Removing unreachable block (ram,0x00101298) */
/* WARNING: Removing unreachable block (ram,0x00101460) */
/* WARNING: Removing unreachable block (ram,0x001012a4) */
/* WARNING: Removing unreachable block (ram,0x001012ae) */
/* WARNING: Removing unreachable block (ram,0x00101440) */
/* WARNING: Removing unreachable block (ram,0x001012ba) */
/* WARNING: Removing unreachable block (ram,0x001012c4) */
/* WARNING: Removing unreachable block (ram,0x00101420) */
/* WARNING: Removing unreachable block (ram,0x001012d0) */
/* WARNING: Removing unreachable block (ram,0x001012da) */
/* WARNING: Removing unreachable block (ram,0x00101400) */
/* WARNING: Removing unreachable block (ram,0x001012e6) */
/* WARNING: Removing unreachable block (ram,0x001012f0) */
/* WARNING: Removing unreachable block (ram,0x001013e0) */
/* WARNING: Removing unreachable block (ram,0x001012fc) */
/* WARNING: Removing unreachable block (ram,0x00101306) */
/* WARNING: Removing unreachable block (ram,0x001013c0) */
/* WARNING: Removing unreachable block (ram,0x00101312) */
/* WARNING: Removing unreachable block (ram,0x0010131c) */
/* WARNING: Removing unreachable block (ram,0x001013a0) */
/* WARNING: Removing unreachable block (ram,0x00101324) */
/* WARNING: Removing unreachable block (ram,0x0010133a) */
/* WARNING: Removing unreachable block (ram,0x00101346) */
/* String vformat<PhysicsServer3D::PinJointParam>(String const&, PhysicsServer3D::PinJointParam
   const) */

undefined8 * vformat<PhysicsServer3D::PinJointParam>(undefined8 *param_1,bool *param_2,int param_3)

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



/* WARNING: Removing unreachable block (ram,0x001015a8) */
/* WARNING: Removing unreachable block (ram,0x001016d8) */
/* WARNING: Removing unreachable block (ram,0x001018a0) */
/* WARNING: Removing unreachable block (ram,0x001016e4) */
/* WARNING: Removing unreachable block (ram,0x001016ee) */
/* WARNING: Removing unreachable block (ram,0x00101880) */
/* WARNING: Removing unreachable block (ram,0x001016fa) */
/* WARNING: Removing unreachable block (ram,0x00101704) */
/* WARNING: Removing unreachable block (ram,0x00101860) */
/* WARNING: Removing unreachable block (ram,0x00101710) */
/* WARNING: Removing unreachable block (ram,0x0010171a) */
/* WARNING: Removing unreachable block (ram,0x00101840) */
/* WARNING: Removing unreachable block (ram,0x00101726) */
/* WARNING: Removing unreachable block (ram,0x00101730) */
/* WARNING: Removing unreachable block (ram,0x00101820) */
/* WARNING: Removing unreachable block (ram,0x0010173c) */
/* WARNING: Removing unreachable block (ram,0x00101746) */
/* WARNING: Removing unreachable block (ram,0x00101800) */
/* WARNING: Removing unreachable block (ram,0x00101752) */
/* WARNING: Removing unreachable block (ram,0x0010175c) */
/* WARNING: Removing unreachable block (ram,0x001017e0) */
/* WARNING: Removing unreachable block (ram,0x00101764) */
/* WARNING: Removing unreachable block (ram,0x0010177a) */
/* WARNING: Removing unreachable block (ram,0x00101786) */
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



/* JoltPinJoint3D::_build_pin(JPH::Body*, JPH::Body*, Transform3D const&, Transform3D const&) */

void JoltPinJoint3D::_GLOBAL__sub_I__build_pin(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC27;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltPinJoint3D::~JoltPinJoint3D() */

void __thiscall JoltPinJoint3D::~JoltPinJoint3D(JoltPinJoint3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



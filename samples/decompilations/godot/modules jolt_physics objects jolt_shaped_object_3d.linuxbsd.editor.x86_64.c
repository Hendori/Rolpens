
/* JoltShapedObject3D::_space_changing() */

void __thiscall JoltShapedObject3D::_space_changing(JoltShapedObject3D *this)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long in_FS_OFFSET;
  code *local_68 [8];
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(SelfList **)(this + 0x28) == (SelfList *)0x0) {
LAB_001000e8:
    plVar3 = *(long **)(this + 0x98);
    if (plVar3 == (long *)0x0) goto LAB_001000ca;
LAB_00100057:
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
    *(undefined8 *)(this + 0x98) = 0;
  }
  else {
    JoltSpace3D::dequeue_shapes_changed(*(SelfList **)(this + 0x28));
    if (*(SelfList **)(this + 0x28) == (SelfList *)0x0) goto LAB_001000e8;
    JoltSpace3D::dequeue_needs_optimization(*(SelfList **)(this + 0x28));
    plVar3 = *(long **)(this + 0x98);
    if (plVar3 != (long *)0x0) goto LAB_00100057;
  }
  if (*(long *)(this + 0x28) != 0) {
    JoltSpace3D::write_body((BodyID *)local_68);
    if (local_28 == 0) {
      _err_print_error("_space_changing","modules/jolt_physics/objects/jolt_shaped_object_3d.cpp",
                       0xb7,"Condition \"body.is_invalid()\" is true.",0,0);
    }
    else {
      uVar2 = (*JPH::Allocate)(0x100);
      JPH::Body::GetBodyCreationSettings();
      *(undefined8 *)(this + 0xa0) = uVar2;
    }
    JoltBodyAccessor3D::release();
    local_68[0] = _err_print_error;
    JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_68);
  }
LAB_001000ca:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JoltShapedObject3D::_enqueue_shapes_changed() */

void __thiscall JoltShapedObject3D::_enqueue_shapes_changed(JoltShapedObject3D *this)

{
  if (*(SelfList **)(this + 0x28) != (SelfList *)0x0) {
    JoltSpace3D::enqueue_shapes_changed(*(SelfList **)(this + 0x28));
    return;
  }
  return;
}



/* JoltShapedObject3D::_dequeue_shapes_changed() */

void __thiscall JoltShapedObject3D::_dequeue_shapes_changed(JoltShapedObject3D *this)

{
  if (*(SelfList **)(this + 0x28) != (SelfList *)0x0) {
    JoltSpace3D::dequeue_shapes_changed(*(SelfList **)(this + 0x28));
    return;
  }
  return;
}



/* JoltShapedObject3D::_enqueue_needs_optimization() */

void __thiscall JoltShapedObject3D::_enqueue_needs_optimization(JoltShapedObject3D *this)

{
  if (*(SelfList **)(this + 0x28) != (SelfList *)0x0) {
    JoltSpace3D::enqueue_needs_optimization(*(SelfList **)(this + 0x28));
    return;
  }
  return;
}



/* JoltShapedObject3D::_dequeue_needs_optimization() */

void __thiscall JoltShapedObject3D::_dequeue_needs_optimization(JoltShapedObject3D *this)

{
  if (*(SelfList **)(this + 0x28) != (SelfList *)0x0) {
    JoltSpace3D::dequeue_needs_optimization(*(SelfList **)(this + 0x28));
    return;
  }
  return;
}



/* JoltShapedObject3D::JoltShapedObject3D(JoltObject3D::ObjectType) */

void __thiscall JoltShapedObject3D::JoltShapedObject3D(JoltShapedObject3D *this,char param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  
  bVar5 = 0;
  JoltObject3D::JoltObject3D((JoltObject3D *)this,(int)param_2);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR___cxa_pure_virtual_00106bb0;
  uVar1 = _LC5;
  *(undefined1 (*) [16])(this + 0x90) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(JoltShapedObject3D **)(this + 0x48) = this;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(JoltShapedObject3D **)(this + 0x68) = this;
  *(undefined8 *)(this + 0x80) = uVar1;
  *(undefined4 *)(this + 0x88) = 0x3f800000;
  puVar2 = (undefined8 *)(*JPH::Allocate)(0x100);
  auVar6 = ZEXT416(_LC6);
  puVar4 = puVar2;
  for (lVar3 = 0x20; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
  }
  puVar2[0xb] = 0xffffffffffffffff;
  *(undefined2 *)((long)puVar2 + 0x1e) = 0x3f80;
  puVar2[0xc] = 0x10000003f02;
  *(undefined8 *)((long)puVar2 + 0x7e) = 0x423c7edd43fa;
  *(undefined2 *)((long)puVar2 + 0x96) = 0x3f80;
  *(undefined8 **)(this + 0xa0) = puVar2;
  *(undefined1 *)((long)puVar2 + 0x69) = 1;
  *(undefined4 *)((long)puVar2 + 0x84) = 0;
  *(undefined1 (*) [16])((long)puVar2 + 0x6c) = auVar6;
  return;
}



/* JoltShapedObject3D::~JoltShapedObject3D() */

void __thiscall JoltShapedObject3D::~JoltShapedObject3D(JoltShapedObject3D *this)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = *(long *)(this + 0xa0);
  *(undefined ***)this = &PTR___cxa_pure_virtual_00106bb0;
  if (lVar2 != 0) {
    plVar3 = *(long **)(lVar2 + 0xf8);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    plVar3 = *(long **)(lVar2 + 0xf0);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar3 + 0x18))();
      }
    }
    plVar3 = *(long **)(lVar2 + 0x50);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar3 + 0x18))();
      }
    }
    (*JPH::Free)(lVar2);
    *(undefined8 *)(this + 0xa0) = 0;
  }
  plVar3 = *(long **)(this + 0x98);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  plVar3 = *(long **)(this + 0x90);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  plVar3 = *(long **)(this + 0x60);
  if (plVar3 != (long *)0x0) {
    lVar2 = *(long *)(this + 0x70);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(this + 0x78);
    }
    lVar4 = *(long *)(this + 0x78);
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x10) = lVar2;
    }
    if (this + 0x60 == (JoltShapedObject3D *)*plVar3) {
      *plVar3 = *(long *)(this + 0x70);
    }
    if (this + 0x60 == (JoltShapedObject3D *)plVar3[1]) {
      plVar3[1] = lVar4;
    }
  }
  plVar3 = *(long **)(this + 0x40);
  if (plVar3 != (long *)0x0) {
    lVar2 = *(long *)(this + 0x50);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(this + 0x58);
    }
    lVar4 = *(long *)(this + 0x58);
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x10) = lVar2;
    }
    if (this + 0x40 == (JoltShapedObject3D *)*plVar3) {
      *plVar3 = *(long *)(this + 0x50);
    }
    if (this + 0x40 == (JoltShapedObject3D *)plVar3[1]) {
      plVar3[1] = lVar4;
      JoltObject3D::~JoltObject3D((JoltObject3D *)this);
      return;
    }
  }
  JoltObject3D::~JoltObject3D((JoltObject3D *)this);
  return;
}



/* JoltShapedObject3D::~JoltShapedObject3D() */

void __thiscall JoltShapedObject3D::~JoltShapedObject3D(JoltShapedObject3D *this)

{
  ~JoltShapedObject3D(this);
  operator_delete(this,0xa8);
  return;
}



/* JoltShapedObject3D::get_transform_unscaled() const */

void JoltShapedObject3D::get_transform_unscaled(void)

{
  undefined8 *puVar1;
  long in_RSI;
  Transform3D *in_RDI;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  undefined1 local_b8 [12];
  undefined8 local_a8;
  undefined8 uStack_a0;
  Quaternion local_98 [16];
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined4 local_48;
  Body *local_28;
  long local_20;
  
  local_68._8_8_ = local_68._0_8_;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(in_RSI + 0x28) == 0) || (*(int *)(in_RSI + 0x30) == -1)) {
    puVar1 = *(undefined8 **)(in_RSI + 0xa0);
    local_a8 = *puVar1;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,*(undefined4 *)(puVar1 + 1));
    local_98 = *(Quaternion (*) [16])(puVar1 + 2);
    local_48 = 0x3f800000;
    local_68 = ZEXT416(_LC6);
    local_58 = local_68;
    Basis::set_quaternion((Quaternion *)local_68);
    Transform3D::Transform3D(in_RDI,(Basis *)local_68,(Vector3 *)&local_a8);
  }
  else {
    JoltSpace3D::read_body((BodyID *)local_68);
    if (local_28 == (Body *)0x0) {
      _err_print_error("get_transform_unscaled",
                       "modules/jolt_physics/objects/jolt_shaped_object_3d.cpp",0xd6,
                       "Condition \"body.is_invalid()\" is true. Returning: Transform3D()",0,0);
      auVar2 = ZEXT416(_LC6);
      *(undefined4 *)(in_RDI + 0x20) = 0x3f800000;
      *(undefined8 *)(in_RDI + 0x24) = 0;
      *(undefined4 *)(in_RDI + 0x2c) = 0;
      *(undefined1 (*) [16])in_RDI = auVar2;
      *(undefined1 (*) [16])(in_RDI + 0x10) = auVar2;
    }
    else {
      local_b8 = JPH::Body::GetPosition(local_28);
      local_a8 = *(undefined8 *)(local_28 + 0x10);
      uStack_a0 = *(undefined8 *)(local_28 + 0x18);
      local_78 = 0x3f800000;
      local_98 = (Quaternion  [16])ZEXT416(_LC6);
      local_88 = (undefined1  [16])local_98;
      Basis::set_quaternion(local_98);
      Transform3D::Transform3D(in_RDI,(Basis *)local_98,local_b8);
    }
    JoltBodyAccessor3D::release();
    local_68._0_8_ = JoltShapeInstance3D::get_aabb;
    JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_68);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltShapedObject3D::get_transform_scaled() const */

JoltShapedObject3D * __thiscall JoltShapedObject3D::get_transform_scaled(JoltShapedObject3D *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  get_transform_unscaled();
  Transform3D::scaled_local(this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltShapedObject3D::get_basis() const */

void JoltShapedObject3D::get_basis(void)

{
  long in_RSI;
  Quaternion *in_RDI;
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  code *local_68;
  undefined8 uStack_60;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(in_RSI + 0x28) == 0) || (*(int *)(in_RSI + 0x30) == -1)) {
    local_68 = *(code **)(*(long *)(in_RSI + 0xa0) + 0x10);
    uStack_60 = *(undefined8 *)(*(long *)(in_RSI + 0xa0) + 0x18);
    *(undefined4 *)(in_RDI + 0x20) = 0x3f800000;
    auVar1 = ZEXT416(_LC6);
    *(undefined1 (*) [16])in_RDI = auVar1;
    *(undefined1 (*) [16])(in_RDI + 0x10) = auVar1;
    Basis::set_quaternion(in_RDI);
  }
  else {
    JoltSpace3D::read_body((BodyID *)&local_68);
    if (local_28 == 0) {
      _err_print_error("get_basis","modules/jolt_physics/objects/jolt_shaped_object_3d.cpp",0xe5,
                       "Condition \"body.is_invalid()\" is true. Returning: Basis()",0,0);
      auVar1 = ZEXT416(_LC6);
      *(undefined4 *)(in_RDI + 0x20) = 0x3f800000;
      *(undefined1 (*) [16])in_RDI = auVar1;
      *(undefined1 (*) [16])(in_RDI + 0x10) = auVar1;
    }
    else {
      *(undefined4 *)(in_RDI + 0x20) = 0x3f800000;
      auVar1 = ZEXT416(_LC6);
      *(undefined1 (*) [16])in_RDI = auVar1;
      *(undefined1 (*) [16])(in_RDI + 0x10) = auVar1;
      Basis::set_quaternion(in_RDI);
    }
    JoltBodyAccessor3D::release();
    local_68 = JoltShapeInstance3D::get_aabb;
    JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)&local_68);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltShapedObject3D::get_position() const */

undefined1  [16] __thiscall JoltShapedObject3D::get_position(JoltShapedObject3D *this)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  code *local_58 [8];
  Body *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x28) == 0) || (*(int *)(this + 0x30) == -1)) {
    auVar1 = **(undefined1 (**) [12])(this + 0xa0);
  }
  else {
    JoltSpace3D::read_body((BodyID *)local_58);
    if (local_18 == (Body *)0x0) {
      _err_print_error("get_position","modules/jolt_physics/objects/jolt_shaped_object_3d.cpp",0xf0,
                       "Condition \"body.is_invalid()\" is true. Returning: Vector3()",0,0);
      auVar1 = ZEXT812(0);
    }
    else {
      auVar1 = JPH::Body::GetPosition(local_18);
    }
    JoltBodyAccessor3D::release();
    local_58[0] = JoltShapeInstance3D::get_aabb;
    JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_58);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._12_4_ = 0;
    auVar2._0_12_ = auVar1;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltShapedObject3D::get_linear_velocity() const */

undefined1  [16] __thiscall JoltShapedObject3D::get_linear_velocity(JoltShapedObject3D *this)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined8 local_68;
  undefined4 local_60;
  code *local_58 [8];
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x28) == 0) || (*(int *)(this + 0x30) == -1)) {
    local_68 = *(undefined8 *)(*(long *)(this + 0xa0) + 0x20);
    local_60 = *(undefined4 *)(*(long *)(this + 0xa0) + 0x28);
  }
  else {
    JoltSpace3D::read_body((BodyID *)local_58);
    if (local_18 == 0) {
      _err_print_error("get_linear_velocity",
                       "modules/jolt_physics/objects/jolt_shaped_object_3d.cpp",0x10e,
                       "Condition \"body.is_invalid()\" is true. Returning: Vector3()",0,0);
      local_60 = 0;
      local_68 = 0;
    }
    else {
      if (*(char *)(local_18 + 0x78) == '\0') {
        uVar2 = 0;
        uVar3 = 0;
        local_60 = 0;
      }
      else {
        puVar1 = *(undefined4 **)(local_18 + 0x48);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        local_60 = puVar1[2];
      }
      local_68 = CONCAT44(uVar3,uVar2);
    }
    JoltBodyAccessor3D::release();
    local_58[0] = JoltShapeInstance3D::get_aabb;
    JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_58);
  }
  auVar4._8_4_ = local_60;
  auVar4._0_8_ = local_68;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar4._12_4_ = 0;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltShapedObject3D::get_angular_velocity() const */

undefined1  [16] __thiscall JoltShapedObject3D::get_angular_velocity(JoltShapedObject3D *this)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined8 local_68;
  undefined4 local_60;
  code *local_58 [8];
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x28) == 0) || (*(int *)(this + 0x30) == -1)) {
    local_68 = *(undefined8 *)(*(long *)(this + 0xa0) + 0x30);
    local_60 = *(undefined4 *)(*(long *)(this + 0xa0) + 0x38);
  }
  else {
    JoltSpace3D::read_body((BodyID *)local_58);
    if (local_18 == 0) {
      _err_print_error("get_angular_velocity",
                       "modules/jolt_physics/objects/jolt_shaped_object_3d.cpp",0x119,
                       "Condition \"body.is_invalid()\" is true. Returning: Vector3()",0,0);
      local_60 = 0;
      local_68 = 0;
    }
    else {
      if (*(char *)(local_18 + 0x78) == '\0') {
        uVar2 = 0;
        uVar3 = 0;
        local_60 = 0;
      }
      else {
        lVar1 = *(long *)(local_18 + 0x48);
        uVar2 = *(undefined4 *)(lVar1 + 0x10);
        uVar3 = *(undefined4 *)(lVar1 + 0x14);
        local_60 = *(undefined4 *)(lVar1 + 0x18);
      }
      local_68 = CONCAT44(uVar3,uVar2);
    }
    JoltBodyAccessor3D::release();
    local_58[0] = JoltShapeInstance3D::get_aabb;
    JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_58);
  }
  auVar4._8_4_ = local_60;
  auVar4._0_8_ = local_68;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar4._12_4_ = 0;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltShapedObject3D::get_aabb() const */

void JoltShapedObject3D::get_aabb(void)

{
  float fVar1;
  char cVar2;
  Vector3 *pVVar3;
  long lVar4;
  long in_RSI;
  undefined8 *in_RDI;
  long lVar5;
  long in_FS_OFFSET;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  float local_d8 [4];
  undefined8 local_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float local_b4;
  Vector3 local_a8 [36];
  float local_84 [3];
  undefined8 local_78;
  float local_70;
  undefined8 local_6c;
  undefined4 local_64;
  long local_40;
  
  lVar4 = *(long *)(in_RSI + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = 0;
  fStack_c0 = 0.0;
  local_b4 = 0.0;
  fStack_bc = 0.0;
  fStack_b8 = 0.0;
  lVar5 = (ulong)*(uint *)(in_RSI + 8) * 0x60 + lVar4;
  do {
    while( true ) {
      if (lVar5 == lVar4) {
        pVVar3 = local_a8;
        get_transform_unscaled();
        Transform3D::scaled_local(pVVar3);
        lVar4 = 0;
        local_e8 = 0;
        local_78 = local_c8;
        local_e0 = 0.0;
        local_d8[0] = 0.0;
        local_d8[1] = 0.0;
        local_70 = fStack_c0;
        local_d8[2] = 0.0;
        local_f8 = CONCAT44(fStack_b8 + (float)((ulong)local_c8 >> 0x20),fStack_bc + (float)local_c8
                           );
        local_f0 = fStack_c0 + local_b4;
        do {
          fVar9 = *(float *)((long)local_84 + lVar4);
          lVar5 = 0;
          fVar7 = fVar9;
          do {
            fVar8 = *(float *)((AABB *)&local_78 + lVar5) * *(float *)(pVVar3 + lVar5);
            fVar6 = *(float *)(pVVar3 + lVar5) * *(float *)((long)&local_f8 + lVar5);
            fVar1 = fVar8;
            if (fVar8 < fVar6) {
              fVar1 = fVar6;
              fVar6 = fVar8;
            }
            fVar7 = fVar7 + fVar6;
            fVar9 = fVar9 + fVar1;
            lVar5 = lVar5 + 4;
          } while (lVar5 != 0xc);
          *(float *)((long)local_d8 + lVar4) = fVar9;
          pVVar3 = pVVar3 + 0xc;
          *(float *)((long)&local_e8 + lVar4) = fVar7;
          lVar4 = lVar4 + 4;
        } while (lVar4 != 0xc);
        *in_RDI = local_e8;
        *(float *)(in_RDI + 1) = local_e0;
        *(ulong *)((long)in_RDI + 0xc) =
             CONCAT44(SUB84(local_d8._0_8_,4) - (float)((ulong)local_e8 >> 0x20),
                      (float)local_d8._0_8_ - (float)local_e8);
        *(float *)((long)in_RDI + 0x14) = local_d8[2] - local_e0;
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if (*(char *)(lVar4 + 0x5c) == '\0') break;
LAB_00100cff:
      lVar4 = lVar4 + 0x60;
    }
    local_78 = 0;
    local_70 = 0.0;
    local_6c = 0;
    local_64 = 0;
    cVar2 = AABB::operator==((AABB *)&local_c8,(AABB *)&local_78);
    if (cVar2 != '\0') {
      JoltShapeInstance3D::get_aabb();
      fStack_b8 = (float)local_108;
      local_b4 = (float)((ulong)local_108 >> 0x20);
      local_c8 = local_118;
      fStack_c0 = (float)uStack_110;
      fStack_bc = (float)((ulong)uStack_110 >> 0x20);
      goto LAB_00100cff;
    }
    lVar4 = lVar4 + 0x60;
    JoltShapeInstance3D::get_aabb();
    AABB::merge_with((AABB *)&local_c8);
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltShapedObject3D::_is_big() const */

bool JoltShapedObject3D::_is_big(void)

{
  long lVar1;
  long in_FS_OFFSET;
  float local_1c;
  float local_18;
  float local_14;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  get_aabb();
  if (local_18 <= local_1c) {
    local_18 = local_1c;
  }
  if (local_14 <= local_18) {
    local_14 = local_18;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __LC18 <= local_14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltShapedObject3D::get_shape(int) const */

undefined8 __thiscall JoltShapedObject3D::get_shape(JoltShapedObject3D *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = *(uint *)(this + 8);
  if ((-1 < param_1) && (param_1 < (int)uVar1)) {
    if ((uint)param_1 < uVar1) {
      return *(undefined8 *)((long)param_1 * 0x60 + *(long *)(this + 0x10) + 0x48);
    }
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xae,(long)param_1,(ulong)uVar1,
               "p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  _err_print_index_error
            ("get_shape","modules/jolt_physics/objects/jolt_shaped_object_3d.cpp",0x179,
             (long)param_1,(long)(int)uVar1,"p_index","(int)shapes.size()","",false,false);
  return 0;
}



/* JoltShapedObject3D::clear_previous_shape() */

void __thiscall JoltShapedObject3D::clear_previous_shape(JoltShapedObject3D *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x98);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
      *(undefined8 *)(this + 0x98) = 0;
    }
    else {
      *(undefined8 *)(this + 0x98) = 0;
    }
  }
  return;
}



/* JoltShapedObject3D::find_shape_index(unsigned int) const */

int __thiscall JoltShapedObject3D::find_shape_index(JoltShapedObject3D *this,uint param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  
  iVar1 = *(int *)(this + 8);
  if (0 < iVar1) {
    iVar3 = 0;
    lVar4 = 0;
    if (iVar1 == 0) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xae,0,0,"p_index","count","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    do {
      if (param_1 == *(uint *)(*(long *)(this + 0x10) + 0x58 + lVar4)) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x60;
    } while (iVar3 != iVar1);
  }
  return -1;
}



/* JoltShapedObject3D::find_shape_index(JPH::SubShapeID const&) const */

undefined8 JoltShapedObject3D::find_shape_index(SubShapeID *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (*(long **)(param_1 + 0x90) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x90) + 0x68))();
    uVar2 = find_shape_index((JoltShapedObject3D *)param_1,uVar1);
    return uVar2;
  }
  _err_print_error("find_shape_index","modules/jolt_physics/objects/jolt_shaped_object_3d.cpp",0x199
                   ,"Parameter \"jolt_shape\" is null.",0,0);
  return 0xffffffff;
}



/* JoltShapedObject3D::find_shape(unsigned int) const */

undefined8 __thiscall JoltShapedObject3D::find_shape(JoltShapedObject3D *this,uint param_1)

{
  code *pcVar1;
  uint uVar2;
  
  uVar2 = find_shape_index(this,param_1);
  if (uVar2 == 0xffffffff) {
    return 0;
  }
  if (uVar2 < *(uint *)(this + 8)) {
    return *(undefined8 *)((ulong)uVar2 * 0x60 + *(long *)(this + 0x10) + 0x48);
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xae,(ulong)uVar2,
             (ulong)*(uint *)(this + 8),"p_index","count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* JoltShapedObject3D::find_shape(JPH::SubShapeID const&) const */

undefined8 JoltShapedObject3D::find_shape(SubShapeID *param_1)

{
  code *pcVar1;
  uint uVar2;
  
  uVar2 = find_shape_index(param_1);
  if (uVar2 == 0xffffffff) {
    return 0;
  }
  if (uVar2 < *(uint *)(param_1 + 8)) {
    return *(undefined8 *)((ulong)uVar2 * 0x60 + *(long *)(param_1 + 0x10) + 0x48);
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xae,(ulong)uVar2,
             (ulong)*(uint *)(param_1 + 8),"p_index","count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* JoltShapedObject3D::get_shape_transform_unscaled(int) const */

void JoltShapedObject3D::get_shape_transform_unscaled(int param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint in_EDX;
  undefined8 *puVar8;
  long in_RSI;
  undefined4 in_register_0000003c;
  undefined1 (*pauVar9) [16];
  
  pauVar9 = (undefined1 (*) [16])CONCAT44(in_register_0000003c,param_1);
  uVar1 = *(uint *)(in_RSI + 8);
  if ((-1 < (int)in_EDX) && ((int)in_EDX < (int)uVar1)) {
    if (in_EDX < uVar1) {
      puVar8 = (undefined8 *)((long)(int)in_EDX * 0x60 + *(long *)(in_RSI + 0x10));
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      uVar5 = puVar8[3];
      uVar6 = puVar8[4];
      uVar7 = puVar8[5];
      *(undefined8 *)*pauVar9 = *puVar8;
      *(undefined8 *)(*pauVar9 + 8) = uVar3;
      *(undefined8 *)pauVar9[1] = uVar4;
      *(undefined8 *)(pauVar9[1] + 8) = uVar5;
      *(undefined8 *)pauVar9[2] = uVar6;
      *(undefined8 *)(pauVar9[2] + 8) = uVar7;
      return;
    }
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xae,(long)(int)in_EDX,(ulong)uVar1,
               "p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  _err_print_index_error
            ("get_shape_transform_unscaled","modules/jolt_physics/objects/jolt_shaped_object_3d.cpp"
             ,0x1a8,(long)(int)in_EDX,(long)(int)uVar1,"p_index","(int)shapes.size()","",false,false
            );
  uVar1 = _LC6;
  *(undefined4 *)pauVar9[2] = 0x3f800000;
  *(undefined8 *)(pauVar9[2] + 4) = 0;
  *(undefined4 *)(pauVar9[2] + 0xc) = 0;
  *pauVar9 = ZEXT416(uVar1);
  pauVar9[1] = ZEXT416(uVar1);
  return;
}



/* JoltShapedObject3D::get_shape_transform_scaled(int) const */

undefined1 (*) [16] JoltShapedObject3D::get_shape_transform_scaled(int param_1)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  uint in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  undefined1 (*pauVar4) [16];
  long in_FS_OFFSET;
  
  pauVar4 = (undefined1 (*) [16])CONCAT44(in_register_0000003c,param_1);
  uVar1 = *(uint *)(in_RSI + 8);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (((int)in_EDX < 0) || ((int)uVar1 <= (int)in_EDX)) {
    _err_print_index_error
              ("get_shape_transform_scaled","modules/jolt_physics/objects/jolt_shaped_object_3d.cpp"
               ,0x1ad,(long)(int)in_EDX,(long)(int)uVar1,"p_index","(int)shapes.size()","",false,
               false);
    *(undefined4 *)pauVar4[2] = 0x3f800000;
    uVar1 = _LC6;
    *(undefined8 *)(pauVar4[2] + 4) = 0;
    *(undefined4 *)(pauVar4[2] + 0xc) = 0;
    *pauVar4 = ZEXT416(uVar1);
    pauVar4[1] = ZEXT416(uVar1);
  }
  else {
    if (uVar1 <= in_EDX) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xae,(long)(int)in_EDX,(ulong)uVar1,
                 "p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    Transform3D::scaled_local((Vector3 *)pauVar4);
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltShapedObject3D::get_shape_scale(int) const */

undefined1  [16] __thiscall
JoltShapedObject3D::get_shape_scale(JoltShapedObject3D *this,int param_1)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  undefined8 local_1c;
  undefined4 local_14;
  
  uVar1 = *(uint *)(this + 8);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 < 0) || ((int)uVar1 <= param_1)) {
    _err_print_index_error
              ("get_shape_scale","modules/jolt_physics/objects/jolt_shaped_object_3d.cpp",0x1c5,
               (long)param_1,(long)(int)uVar1,"p_index","(int)shapes.size()","",false,false);
    local_14 = 0;
    local_1c = 0;
  }
  else {
    if (uVar1 <= (uint)param_1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xae,(long)param_1,(ulong)uVar1,
                 "p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar4 = (long)param_1 * 0x60 + *(long *)(this + 0x10);
    local_1c = *(undefined8 *)(lVar4 + 0x30);
    local_14 = *(undefined4 *)(lVar4 + 0x38);
  }
  auVar5._8_4_ = local_14;
  auVar5._0_8_ = local_1c;
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar5._12_4_ = 0;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltShapedObject3D::is_shape_disabled(int) const */

undefined1 __thiscall JoltShapedObject3D::is_shape_disabled(JoltShapedObject3D *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = *(uint *)(this + 8);
  if ((-1 < param_1) && (param_1 < (int)uVar1)) {
    if ((uint)param_1 < uVar1) {
      return *(undefined1 *)((long)param_1 * 0x60 + *(long *)(this + 0x10) + 0x5c);
    }
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xae,(long)param_1,(ulong)uVar1,
               "p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  _err_print_index_error
            ("is_shape_disabled","modules/jolt_physics/objects/jolt_shaped_object_3d.cpp",0x1ca,
             (long)param_1,(long)(int)uVar1,"p_index","(int)shapes.size()","",false,false);
  return 0;
}



/* JoltShapedObject3D::get_center_of_mass() const */

undefined1  [16] __thiscall JoltShapedObject3D::get_center_of_mass(JoltShapedObject3D *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  code *local_68 [8];
  undefined8 *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x28) == 0) {
    JoltObject3D::to_string();
    local_88 = 
    "Failed to retrieve center-of-mass of \'%s\'. Doing so without a physics space is not supported when using Jolt Physics. If this relates to a node, try adding the node to a scene tree first."
    ;
    local_90 = 0;
    local_80 = 0xbb;
    String::parse_latin1((StrRange *)&local_90);
    vformat<String>(&local_88,(StrRange *)&local_90,&local_98);
    _err_print_error("get_center_of_mass","modules/jolt_physics/objects/jolt_shaped_object_3d.cpp",
                     0xf6,"Parameter \"space\" is null.",&local_88,0);
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
    local_78 = 0;
    local_70 = 0;
  }
  else {
    JoltSpace3D::read_body((BodyID *)local_68);
    if (local_28 == (undefined8 *)0x0) {
      _err_print_error("get_center_of_mass","modules/jolt_physics/objects/jolt_shaped_object_3d.cpp"
                       ,0xf9,"Condition \"body.is_invalid()\" is true. Returning: Vector3()",0,0);
      local_70 = 0;
      local_78 = 0;
    }
    else {
      local_78 = *local_28;
      local_70 = (undefined4)local_28[1];
    }
    JoltBodyAccessor3D::release();
    local_68[0] = JoltShapeInstance3D::get_aabb;
    JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_68);
  }
  auVar4._8_4_ = local_70;
  auVar4._0_8_ = local_78;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar4._12_4_ = 0;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltShapedObject3D::get_center_of_mass_relative() const */

void __thiscall JoltShapedObject3D::get_center_of_mass_relative(JoltShapedObject3D *this)

{
  long lVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  fVar2 = (float)get_position(this);
  fVar3 = (float)get_center_of_mass(this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar3 - fVar2);
}



/* JoltShapedObject3D::get_center_of_mass_local() const */

undefined1  [16] __thiscall JoltShapedObject3D::get_center_of_mass_local(JoltShapedObject3D *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  float local_90;
  Vector3 local_88 [8];
  float local_80;
  undefined8 local_7c;
  float local_74;
  undefined8 local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined1 local_58 [8];
  undefined4 local_50;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x28) == 0) {
    JoltObject3D::to_string();
    local_a8 = 
    "Failed to retrieve local center-of-mass of \'%s\'. Doing so without a physics space is not supported when using Jolt Physics. If this relates to a node, try adding the node to a scene tree first."
    ;
    local_b0 = 0;
    local_a0 = 0xc1;
    String::parse_latin1((StrRange *)&local_b0);
    vformat<String>(&local_a8,(StrRange *)&local_b0,&local_b8);
    _err_print_error("get_center_of_mass_local",
                     "modules/jolt_physics/objects/jolt_shaped_object_3d.cpp",0x103,
                     "Parameter \"space\" is null.",&local_a8,0);
    pcVar3 = local_a8;
    if (local_a8 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
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
    local_98 = 0;
    local_90 = 0.0;
  }
  else {
    get_transform_unscaled();
    Transform3D::scaled_local(local_88);
    _local_58 = get_center_of_mass(this);
    local_60 = (float)local_58._4_4_ - local_60;
    local_64 = (float)local_58._0_4_ - local_64;
    local_5c = SUB124(_local_58,8) - local_5c;
    local_90 = local_68 * local_5c + local_80 * local_64 + local_74 * local_60;
    local_98 = CONCAT44(local_60 * (float)((ulong)local_7c >> 0x20) + local_64 * local_88._4_4_ +
                        local_5c * (float)((ulong)local_70 >> 0x20),
                        local_60 * (float)local_7c + local_64 * local_88._0_4_ +
                        local_5c * (float)local_70);
  }
  auVar4._8_4_ = local_90;
  auVar4._0_8_ = local_98;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar4._12_4_ = 0;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltShapedObject3D::_try_build_single_shape() */

void JoltShapedObject3D::_try_build_single_shape(void)

{
  Shape *pSVar1;
  Basis *pBVar2;
  Shape *pSVar3;
  long *plVar4;
  undefined8 *puVar5;
  int iVar6;
  code *pcVar7;
  Shape *pSVar8;
  char cVar9;
  long lVar10;
  Shape *pSVar11;
  Shape *pSVar12;
  long in_RSI;
  undefined8 *in_RDI;
  int iVar13;
  long in_FS_OFFSET;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  Shape *local_c8;
  undefined8 local_c0;
  undefined8 local_b4;
  float local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  long local_40;
  
  iVar6 = *(int *)(in_RSI + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < iVar6) {
    iVar13 = 0;
    lVar10 = 0;
    if (iVar6 == 0) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,0,0,"p_index","count","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    do {
      puVar5 = (undefined8 *)(*(long *)(in_RSI + 0x10) + lVar10);
      if ((*(char *)((long)puVar5 + 0x5c) == '\0') &&
         (pSVar12 = (Shape *)puVar5[10], pSVar12 != (Shape *)0x0)) {
        pSVar1 = pSVar12 + 8;
        LOCK();
        *(int *)(pSVar12 + 8) = *(int *)(pSVar12 + 8) + 1;
        UNLOCK();
        local_a8 = *puVar5;
        uStack_a0 = puVar5[1];
        local_b4 = puVar5[6];
        local_98 = puVar5[2];
        uStack_90 = puVar5[3];
        local_ac = *(float *)(puVar5 + 7);
        local_88 = puVar5[4];
        uStack_80 = puVar5[5];
        pSVar11 = pSVar12;
        if ((_LC6 != (float)local_b4) ||
           ((local_b4._4_4_ = (float)((ulong)local_b4 >> 0x20), _LC6 != local_b4._4_4_ ||
            (_LC6 != local_ac)))) {
          local_78._0_12_ = JoltShape3D::make_scale_valid(pSVar12,(Vector3 *)&local_b4);
          cVar9 = JoltShape3D::is_scale_valid((Vector3 *)&local_b4,local_78,_LC43);
          if (cVar9 == '\0') {
            JoltObject3D::to_string();
            local_e0 = 0;
            local_c8 = (Shape *)0x104a90;
            local_c0 = 0x39;
            String::parse_latin1((StrRange *)&local_e0);
            vformat<int,String>(&local_d8,(StrRange *)&local_e0,iVar13,&local_e8);
            local_d0 = 0;
            local_c8 = (Shape *)0x104ad0;
            local_c0 = 0x6f;
            String::parse_latin1((StrRange *)&local_d0);
            vformat<String,Vector3,Vector3>
                      (local_b4,local_ac,local_78._0_8_,local_78._8_4_,(Shape *)&local_c8,
                       (StrRange *)&local_d0,&local_d8);
            _err_print_error("_try_build_single_shape",
                             "modules/jolt_physics/objects/jolt_shaped_object_3d.cpp",0x61,
                             (Shape *)&local_c8,0,0);
            pSVar8 = local_c8;
            if (local_c8 != (Shape *)0x0) {
              LOCK();
              pSVar3 = local_c8 + -0x10;
              *(long *)pSVar3 = *(long *)pSVar3 + -1;
              UNLOCK();
              if (*(long *)pSVar3 == 0) {
                local_c8 = (Shape *)0x0;
                Memory::free_static(pSVar8 + -0x10,false);
              }
            }
            lVar10 = local_d0;
            if (local_d0 != 0) {
              LOCK();
              plVar4 = (long *)(local_d0 + -0x10);
              *plVar4 = *plVar4 + -1;
              UNLOCK();
              if (*plVar4 == 0) {
                local_d0 = 0;
                Memory::free_static((void *)(lVar10 + -0x10),false);
              }
            }
            lVar10 = local_d8;
            if (local_d8 != 0) {
              LOCK();
              plVar4 = (long *)(local_d8 + -0x10);
              *plVar4 = *plVar4 + -1;
              UNLOCK();
              if (*plVar4 == 0) {
                local_d8 = 0;
                Memory::free_static((void *)(lVar10 + -0x10),false);
              }
            }
            lVar10 = local_e0;
            if (local_e0 != 0) {
              LOCK();
              plVar4 = (long *)(local_e0 + -0x10);
              *plVar4 = *plVar4 + -1;
              UNLOCK();
              if (*plVar4 == 0) {
                local_e0 = 0;
                Memory::free_static((void *)(lVar10 + -0x10),false);
              }
            }
            lVar10 = local_e8;
            if (local_e8 != 0) {
              LOCK();
              plVar4 = (long *)(local_e8 + -0x10);
              *plVar4 = *plVar4 + -1;
              UNLOCK();
              if (*plVar4 == 0) {
                local_e8 = 0;
                Memory::free_static((void *)(lVar10 + -0x10),false);
              }
            }
          }
          local_b4 = local_78._0_8_;
          local_ac = (float)local_78._8_4_;
          JoltShape3D::with_scale((Shape *)&local_c8,pSVar12);
          if (pSVar12 == local_c8) {
            LOCK();
            pSVar1 = pSVar12 + 8;
            *(int *)pSVar1 = *(int *)pSVar1 + -1;
            UNLOCK();
            if (*(int *)pSVar1 == 0) {
              (**(code **)(*(long *)pSVar12 + 8))(pSVar12);
            }
          }
          else {
            LOCK();
            *(int *)pSVar1 = *(int *)pSVar1 + -1;
            UNLOCK();
            pSVar11 = local_c8;
            if (*(int *)pSVar1 == 0) {
              (**(code **)(*(long *)pSVar12 + 8))(pSVar12);
              pSVar11 = local_c8;
            }
          }
        }
        local_78 = ZEXT416((uint)_LC6);
        local_58 = 0x3f800000;
        local_54 = 0;
        local_4c = 0;
        local_68 = local_78;
        cVar9 = Transform3D::operator!=((Transform3D *)&local_a8,(Transform3D *)local_78);
        pSVar12 = pSVar11;
        if (cVar9 != '\0') {
          JoltShape3D::with_basis_origin
                    ((Shape *)&local_c8,(Basis *)pSVar11,(Transform3D *)&local_a8);
          pSVar12 = local_c8;
          if (pSVar11 == local_c8) {
            if (local_c8 != (Shape *)0x0) {
              LOCK();
              pSVar1 = local_c8 + 8;
              *(int *)pSVar1 = *(int *)pSVar1 + -1;
              UNLOCK();
              if (*(int *)pSVar1 == 0) {
                (**(code **)(*(long *)local_c8 + 8))(local_c8);
              }
            }
          }
          else if (pSVar11 != (Shape *)0x0) {
            LOCK();
            pBVar2 = (Basis *)pSVar11 + 8;
            *(int *)pBVar2 = *(int *)pBVar2 + -1;
            UNLOCK();
            if (*(int *)pBVar2 == 0) {
              (**(code **)(*(long *)pSVar11 + 8))(pSVar11);
              pSVar12 = local_c8;
            }
          }
        }
        *in_RDI = pSVar12;
        goto LAB_00101d82;
      }
      iVar13 = iVar13 + 1;
      lVar10 = lVar10 + 0x60;
    } while (iVar13 != iVar6);
  }
  *in_RDI = 0;
LAB_00101d82:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JoltShapedObject3D::_try_build_compound_shape(bool) */

undefined8 * JoltShapedObject3D::_try_build_compound_shape(bool param_1)

{
  long *plVar1;
  Shape *pSVar2;
  Shape *pSVar3;
  uint uVar4;
  undefined4 uVar5;
  Shape *pSVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long lVar14;
  Shape *pSVar15;
  char cVar16;
  code *pcVar17;
  code *pcVar18;
  undefined8 *puVar19;
  code *pcVar20;
  char in_DL;
  code *pcVar21;
  Shape *pSVar22;
  long in_RSI;
  undefined7 in_register_00000039;
  undefined8 *puVar23;
  long *plVar24;
  ulong uVar25;
  code *pcVar26;
  long *plVar27;
  long lVar28;
  uint uVar29;
  code *pcVar30;
  long in_FS_OFFSET;
  undefined1 auVar31 [12];
  undefined8 local_1d8;
  code **local_1c8;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  Shape *local_168;
  undefined8 local_160;
  undefined1 local_154 [8];
  float local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_138 [12];
  long *local_128;
  undefined8 uStack_120;
  long local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  code *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  long *local_e0;
  long local_d0 [2];
  char local_c0;
  undefined1 local_b8 [16];
  long *local_a8;
  code *local_98;
  undefined4 local_90;
  undefined8 local_88;
  long *local_80;
  long local_70 [2];
  char local_60;
  undefined1 local_58 [16];
  long *local_48;
  long local_40;
  
  puVar23 = (undefined8 *)CONCAT71(in_register_00000039,param_1);
  pcVar26 = (code *)(ulong)*(uint *)(in_RSI + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f0 = 0;
  local_f8 = JPH::MutableCompoundShapeSettings::Create;
  local_e8 = 0;
  local_c0 = '\0';
  local_a8 = (long *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_60 = '\0';
  local_48 = (long *)0x0;
  local_98 = JPH::StaticCompoundShapeSettings::Create;
  local_b8 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if (in_DL == '\0') {
    if (pcVar26 != (code *)0x0) {
      local_1c8 = &local_98;
LAB_0010229d:
      pcVar17 = (code *)(*JPH::Allocate)((long)pcVar26 << 6);
      pcVar30 = local_1c8[10];
      if (pcVar30 != (code *)0x0) {
        pcVar20 = local_1c8[8];
        if (pcVar17 < pcVar30) {
          if (pcVar17 < pcVar17 + (long)pcVar20 * 0x40) {
            pcVar18 = pcVar17;
            if (pcVar17 == (code *)0x0) {
              plVar24 = *(long **)(pcVar30 + 8);
              if (plVar24 != (long *)0x0) {
                LOCK();
                plVar27 = plVar24 + 1;
                *(int *)plVar27 = (int)*plVar27 + -1;
                UNLOCK();
                if ((int)*plVar27 == 0) {
                  (**(code **)(*plVar24 + 8))();
                  plVar24 = *(long **)pcVar30;
                  goto LAB_00102316;
                }
              }
              plVar24 = *(long **)pcVar30;
LAB_00102316:
              if (plVar24 != (long *)0x0) {
                LOCK();
                plVar27 = plVar24 + 1;
                *(int *)plVar27 = (int)*plVar27 + -1;
                UNLOCK();
                if ((int)*plVar27 == 0) {
                  (**(code **)(*plVar24 + 0x18))();
                  pcVar18 = (code *)0x0;
                  goto LAB_00102372;
                }
              }
              pcVar18 = (code *)0x0;
              goto LAB_00102372;
            }
            do {
              uVar7 = *(undefined8 *)pcVar30;
              uVar9 = *(undefined8 *)(pcVar30 + 8);
              *(undefined8 *)pcVar30 = 0;
              *(undefined8 *)pcVar18 = uVar7;
              *(undefined8 *)(pcVar18 + 8) = uVar9;
              uVar7 = *(undefined8 *)(pcVar30 + 0x10);
              uVar9 = *(undefined8 *)(pcVar30 + 0x18);
              uVar10 = *(undefined8 *)(pcVar30 + 0x20);
              uVar11 = *(undefined8 *)(pcVar30 + 0x28);
              *(undefined4 *)(pcVar18 + 0x30) = *(undefined4 *)(pcVar30 + 0x30);
              *(undefined8 *)(pcVar18 + 0x10) = uVar7;
              *(undefined8 *)(pcVar18 + 0x18) = uVar9;
              *(undefined8 *)(pcVar18 + 0x20) = uVar10;
              *(undefined8 *)(pcVar18 + 0x28) = uVar11;
LAB_00102372:
              pcVar18 = pcVar18 + 0x40;
              pcVar30 = pcVar30 + 0x40;
            } while (pcVar18 < pcVar17 + (long)pcVar20 * 0x40);
            pcVar30 = local_1c8[10];
          }
        }
        else {
          pcVar18 = pcVar17 + ((long)pcVar20 * 8 + -8) * 8;
          pcVar21 = pcVar30 + ((long)pcVar20 * 8 + -8) * 8;
          if (!CARRY8((long)pcVar20 * 0x40 - 0x40,(ulong)pcVar17)) {
            do {
              uVar7 = *(undefined8 *)(pcVar21 + 8);
              pcVar20 = pcVar18 + -0x40;
              *(undefined8 *)pcVar18 = *(undefined8 *)pcVar21;
              *(undefined8 *)(pcVar18 + 8) = uVar7;
              uVar7 = *(undefined8 *)(pcVar21 + 0x18);
              uVar9 = *(undefined8 *)(pcVar21 + 0x20);
              uVar10 = *(undefined8 *)(pcVar21 + 0x28);
              uVar5 = *(undefined4 *)(pcVar21 + 0x30);
              *(undefined8 *)(pcVar18 + 0x10) = *(undefined8 *)(pcVar21 + 0x10);
              *(undefined8 *)(pcVar18 + 0x18) = uVar7;
              *(undefined8 *)(pcVar18 + 0x20) = uVar9;
              *(undefined8 *)(pcVar18 + 0x28) = uVar10;
              *(undefined4 *)(pcVar18 + 0x30) = uVar5;
              pcVar18 = pcVar20;
              pcVar21 = pcVar21 + -0x40;
            } while (pcVar17 <= pcVar20);
          }
        }
        (*JPH::Free)(pcVar30);
      }
      uVar4 = *(uint *)(in_RSI + 8);
      uVar25 = (ulong)uVar4;
      uVar29 = 0;
      local_1c8[9] = pcVar26;
      lVar28 = 0;
      local_1c8[10] = pcVar17;
      if (0 < (int)uVar4) {
        do {
          if ((uint)uVar25 <= uVar29) {
            _err_print_index_error
                      ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar29,uVar25,
                       "p_index","count","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar26 = (code *)invalidInstructionException();
            (*pcVar26)();
          }
          puVar19 = (undefined8 *)(*(long *)(in_RSI + 0x10) + lVar28);
          if ((*(char *)((long)puVar19 + 0x5c) == '\0') &&
             (pSVar6 = (Shape *)puVar19[10], pSVar6 != (Shape *)0x0)) {
            pSVar3 = pSVar6 + 8;
            LOCK();
            *(int *)(pSVar6 + 8) = *(int *)(pSVar6 + 8) + 1;
            UNLOCK();
            uVar7 = *(undefined8 *)*(undefined1 (*) [12])(puVar19 + 6);
            local_128 = (long *)*puVar19;
            uStack_120 = puVar19[1];
            local_14c = *(float *)(puVar19 + 7);
            local_118 = puVar19[2];
            uStack_110 = puVar19[3];
            local_154._0_4_ = (undefined4)uVar7;
            local_108 = puVar19[4];
            uStack_100 = puVar19[5];
            pSVar22 = pSVar6;
            if ((_LC6 != (float)local_154._0_4_) ||
               ((local_154._4_4_ = (undefined4)((ulong)uVar7 >> 0x20),
                _LC6 != (float)local_154._4_4_ ||
                (auVar31 = *(undefined1 (*) [12])(puVar19 + 6), _LC6 != local_14c)))) {
              local_154 = (undefined1  [8])uVar7;
              auVar31 = JoltShape3D::make_scale_valid(pSVar6,local_154);
              local_138 = auVar31;
              cVar16 = JoltShape3D::is_scale_valid(local_154,local_138,_LC43);
              if (cVar16 == '\0') {
                JoltObject3D::to_string();
                local_180 = 0;
                local_168 = (Shape *)0x104b40;
                local_160 = 0x3a;
                String::parse_latin1((StrRange *)&local_180);
                vformat<int,String>(&local_178,(StrRange *)&local_180,uVar29,&local_188);
                local_168 = (Shape *)0x104ad0;
                local_170 = 0;
                local_160 = 0x6f;
                String::parse_latin1((StrRange *)&local_170);
                vformat<String,Vector3,Vector3>
                          (local_154,local_14c,local_138._0_8_,local_138._8_4_,(Shape *)&local_168,
                           (StrRange *)&local_170,&local_178);
                _err_print_error("_try_build_compound_shape",
                                 "modules/jolt_physics/objects/jolt_shaped_object_3d.cpp",0x83,
                                 (Shape *)&local_168,0,0);
                pSVar15 = local_168;
                if (local_168 != (Shape *)0x0) {
                  LOCK();
                  pSVar2 = local_168 + -0x10;
                  *(long *)pSVar2 = *(long *)pSVar2 + -1;
                  UNLOCK();
                  if (*(long *)pSVar2 == 0) {
                    local_168 = (Shape *)0x0;
                    Memory::free_static(pSVar15 + -0x10,false);
                  }
                }
                lVar14 = local_170;
                if (local_170 != 0) {
                  LOCK();
                  plVar24 = (long *)(local_170 + -0x10);
                  *plVar24 = *plVar24 + -1;
                  UNLOCK();
                  if (*plVar24 == 0) {
                    local_170 = 0;
                    Memory::free_static((void *)(lVar14 + -0x10),false);
                  }
                }
                lVar14 = local_178;
                if (local_178 != 0) {
                  LOCK();
                  plVar24 = (long *)(local_178 + -0x10);
                  *plVar24 = *plVar24 + -1;
                  UNLOCK();
                  if (*plVar24 == 0) {
                    local_178 = 0;
                    Memory::free_static((void *)(lVar14 + -0x10),false);
                  }
                }
                lVar14 = local_180;
                if (local_180 != 0) {
                  LOCK();
                  plVar24 = (long *)(local_180 + -0x10);
                  *plVar24 = *plVar24 + -1;
                  UNLOCK();
                  if (*plVar24 == 0) {
                    local_180 = 0;
                    Memory::free_static((void *)(lVar14 + -0x10),false);
                  }
                }
                lVar14 = local_188;
                if (local_188 != 0) {
                  LOCK();
                  plVar24 = (long *)(local_188 + -0x10);
                  *plVar24 = *plVar24 + -1;
                  UNLOCK();
                  if (*plVar24 == 0) {
                    local_188 = 0;
                    Memory::free_static((void *)(lVar14 + -0x10),false);
                  }
                }
              }
              _local_154 = local_138;
              JoltShape3D::with_scale((Shape *)&local_168,pSVar6);
              auVar31 = _local_154;
              if (pSVar6 == local_168) {
                LOCK();
                pSVar3 = pSVar6 + 8;
                *(int *)pSVar3 = *(int *)pSVar3 + -1;
                UNLOCK();
                if (*(int *)pSVar3 == 0) {
                  (**(code **)(*(long *)pSVar6 + 8))(pSVar6);
                  auVar31 = _local_154;
                }
              }
              else {
                LOCK();
                *(int *)pSVar3 = *(int *)pSVar3 + -1;
                UNLOCK();
                pSVar22 = local_168;
                if (*(int *)pSVar3 == 0) {
                  (**(code **)(*(long *)pSVar6 + 8))(pSVar6);
                  pSVar22 = local_168;
                  auVar31 = _local_154;
                }
              }
            }
            _local_154 = auVar31;
            Basis::get_quaternion();
            Quaternion::normalized();
            local_1d8 = CONCAT44((undefined4)uStack_100,local_108._4_4_);
            JPH::CompoundShapeSettings::AddShape
                      (local_1d8,CONCAT44(uStack_100._4_4_,uStack_100._4_4_),local_148,local_140,
                       local_1c8,pSVar22,0);
            if (pSVar22 != (Shape *)0x0) {
              LOCK();
              pSVar6 = pSVar22 + 8;
              *(int *)pSVar6 = *(int *)pSVar6 + -1;
              UNLOCK();
              if (*(int *)pSVar6 == 0) {
                (**(code **)(*(long *)pSVar22 + 8))(pSVar22);
              }
            }
            uVar25 = (ulong)*(uint *)(in_RSI + 8);
          }
          uVar29 = uVar29 + 1;
          lVar28 = lVar28 + 0x60;
        } while ((int)uVar29 < (int)uVar25);
      }
      if (in_DL != '\0') goto LAB_00102199;
    }
    JPH::MutableCompoundShapeSettings::Create();
  }
  else {
    if (pcVar26 != (code *)0x0) {
      local_1c8 = &local_f8;
      goto LAB_0010229d;
    }
LAB_00102199:
    JPH::StaticCompoundShapeSettings::Create((TempAllocator *)&local_128);
  }
  if ((char)local_108 == '\x02') {
    String::utf8((char *)&local_178,(int)local_128);
    JoltObject3D::to_string();
    local_168 = (Shape *)0x104b80;
    local_170 = 0;
    local_160 = 0x55;
    String::parse_latin1((StrRange *)&local_170);
    vformat<String,String>(&local_168,(StrRange *)&local_170,&local_180,&local_178);
    _err_print_error("_try_build_compound_shape",
                     "modules/jolt_physics/objects/jolt_shaped_object_3d.cpp",0x8b,
                     "Condition \"shape_result.HasError()\" is true. Returning: nullptr",&local_168,
                     0,0);
    pSVar6 = local_168;
    if (local_168 != (Shape *)0x0) {
      LOCK();
      pSVar3 = local_168 + -0x10;
      *(long *)pSVar3 = *(long *)pSVar3 + -1;
      UNLOCK();
      if (*(long *)pSVar3 == 0) {
        local_168 = (Shape *)0x0;
        Memory::free_static(pSVar6 + -0x10,false);
      }
    }
    lVar28 = local_170;
    if (local_170 != 0) {
      LOCK();
      plVar24 = (long *)(local_170 + -0x10);
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
        local_170 = 0;
        Memory::free_static((void *)(lVar28 + -0x10),false);
      }
    }
    lVar28 = local_180;
    if (local_180 != 0) {
      LOCK();
      plVar24 = (long *)(local_180 + -0x10);
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
        local_180 = 0;
        Memory::free_static((void *)(lVar28 + -0x10),false);
      }
    }
    lVar28 = local_178;
    if (local_178 != 0) {
      LOCK();
      plVar24 = (long *)(local_178 + -0x10);
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
        local_178 = 0;
        Memory::free_static((void *)(lVar28 + -0x10),false);
      }
    }
    *puVar23 = 0;
  }
  else {
    *puVar23 = local_128;
    if (local_128 == (long *)0x0) goto LAB_00102209;
    LOCK();
    *(int *)(local_128 + 1) = (int)local_128[1] + 1;
    UNLOCK();
  }
  if ((char)local_108 == '\x01') {
    if (local_128 != (long *)0x0) {
      LOCK();
      plVar24 = local_128 + 1;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((int)*plVar24 == 0) {
        (**(code **)(*local_128 + 8))();
      }
    }
  }
  else if (((char)local_108 == '\x02') && (local_128 != &local_118)) {
    (*JPH::Free)();
  }
LAB_00102209:
  local_98 = Quaternion::normalized;
  if (local_48 != (long *)0x0) {
    if (local_58._0_8_ != 0) {
      plVar27 = local_48 + local_58._0_8_ * 8;
      for (plVar24 = local_48; plVar24 < plVar27; plVar24 = plVar24 + 8) {
        plVar8 = (long *)plVar24[1];
        if (plVar8 != (long *)0x0) {
          LOCK();
          plVar1 = plVar8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
        plVar8 = (long *)*plVar24;
        if (plVar8 != (long *)0x0) {
          LOCK();
          plVar1 = plVar8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar8 + 0x18))();
          }
        }
      }
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = local_58._8_8_;
    local_58 = auVar12 << 0x40;
    (*JPH::Free)(local_48);
  }
  local_98 = JoltShapeInstance3D::try_build;
  if (local_60 == '\x01') {
    if (local_80 != (long *)0x0) {
      LOCK();
      plVar24 = local_80 + 1;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((int)*plVar24 == 0) {
        (**(code **)(*local_80 + 8))();
      }
    }
  }
  else if ((local_60 == '\x02') && (local_80 != local_70)) {
    (*JPH::Free)();
  }
  local_f8 = Quaternion::normalized;
  if (local_a8 != (long *)0x0) {
    if (local_b8._0_8_ != 0) {
      plVar27 = local_a8 + local_b8._0_8_ * 8;
      for (plVar24 = local_a8; plVar24 < plVar27; plVar24 = plVar24 + 8) {
        plVar8 = (long *)plVar24[1];
        if (plVar8 != (long *)0x0) {
          LOCK();
          plVar1 = plVar8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
        plVar8 = (long *)*plVar24;
        if (plVar8 != (long *)0x0) {
          LOCK();
          plVar1 = plVar8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar8 + 0x18))();
          }
        }
      }
    }
    auVar13._8_8_ = 0;
    auVar13._0_8_ = local_b8._8_8_;
    local_b8 = auVar13 << 0x40;
    (*JPH::Free)(local_a8);
  }
  local_f8 = JoltShapeInstance3D::try_build;
  if (local_c0 == '\x01') {
    if (local_e0 != (long *)0x0) {
      LOCK();
      plVar24 = local_e0 + 1;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((int)*plVar24 == 0) {
        (**(code **)(*local_e0 + 8))();
      }
    }
  }
  else if ((local_c0 == '\x02') && (local_e0 != local_d0)) {
    (*JPH::Free)();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar23;
}



/* JoltShapedObject3D::_try_build_shape(bool) */

JoltShapedObject3D * __thiscall
JoltShapedObject3D::_try_build_shape(JoltShapedObject3D *this,bool param_1)

{
  Shape *pSVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  Shape *pSVar5;
  Shape *pSVar6;
  long lVar7;
  undefined7 in_register_00000031;
  long *plVar8;
  int iVar9;
  long in_FS_OFFSET;
  undefined1 auVar10 [12];
  Shape *local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  Shape *local_68;
  undefined8 local_60;
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  long local_40;
  
  plVar8 = (long *)CONCAT71(in_register_00000031,param_1);
  iVar9 = 0;
  lVar4 = plVar8[2];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = (ulong)*(uint *)(plVar8 + 1) * 0x60 + lVar4;
  if (lVar4 != lVar7) {
    do {
      while (*(char *)(lVar4 + 0x5c) == '\0') {
        cVar3 = JoltShapeInstance3D::try_build();
        iVar9 = (iVar9 + 1) - (uint)(cVar3 == '\0');
        lVar4 = lVar4 + 0x60;
        if (lVar7 == lVar4) goto LAB_00102ce6;
      }
      lVar4 = lVar4 + 0x60;
    } while (lVar7 != lVar4);
LAB_00102ce6:
    if (iVar9 != 0) {
      if (iVar9 == 1) {
        _try_build_single_shape();
      }
      else {
        _try_build_compound_shape(SUB81(&local_90,0));
      }
      pSVar6 = local_90;
      if (local_90 != (Shape *)0x0) {
        cVar3 = (**(code **)(*plVar8 + 0x98))(plVar8);
        pSVar5 = pSVar6;
        if (cVar3 != '\0') {
          local_4c = (**(code **)(*plVar8 + 0xa0))(plVar8);
          JoltShape3D::with_center_of_mass((Shape *)&local_68,pSVar6);
          if (pSVar6 == local_68) {
            LOCK();
            pSVar1 = pSVar6 + 8;
            *(int *)pSVar1 = *(int *)pSVar1 + -1;
            UNLOCK();
            pSVar5 = local_90;
            if (*(int *)pSVar1 == 0) {
              (**(code **)(*(long *)pSVar6 + 8))(pSVar6);
              pSVar5 = local_90;
            }
          }
          else {
            LOCK();
            pSVar5 = pSVar6 + 8;
            *(int *)pSVar5 = *(int *)pSVar5 + -1;
            UNLOCK();
            if (*(int *)pSVar5 == 0) {
              (**(code **)(*(long *)pSVar6 + 8))(pSVar6);
            }
            local_90 = local_68;
            pSVar5 = local_68;
          }
        }
        if (((_LC6 == *(float *)(plVar8 + 0x10)) && (_LC6 == *(float *)((long)plVar8 + 0x84))) &&
           (_LC6 == *(float *)(plVar8 + 0x11))) {
LAB_00102ead:
          cVar3 = *(char *)((long)plVar8 + 0x3c);
        }
        else {
          local_58._0_8_ = plVar8[0x10];
          local_58._8_4_ = (undefined4)plVar8[0x11];
          auVar10 = JoltShape3D::make_scale_valid(pSVar5,local_58);
          local_4c = auVar10;
          cVar3 = JoltShape3D::is_scale_valid(local_58,local_4c,_LC43);
          pSVar6 = pSVar5;
          if (cVar3 == '\0') {
            JoltObject3D::to_string();
            local_68 = (Shape *)0x104c18;
            local_80 = 0;
            local_60 = 0x24;
            String::parse_latin1((StrRange *)&local_80);
            vformat<String>(&local_78,(StrRange *)&local_80,&local_88);
            local_68 = (Shape *)0x104ad0;
            local_70 = 0;
            local_60 = 0x6f;
            String::parse_latin1((StrRange *)&local_70);
            vformat<String,Vector3,Vector3>
                      (local_58._0_8_,local_58._8_4_,local_4c._0_8_,local_4c._8_4_,
                       (Shape *)&local_68,(StrRange *)&local_70,&local_78);
            _err_print_error("_try_build_shape",
                             "modules/jolt_physics/objects/jolt_shaped_object_3d.cpp",0x48,
                             (Shape *)&local_68,0,0);
            pSVar6 = local_68;
            if (local_68 != (Shape *)0x0) {
              LOCK();
              pSVar1 = local_68 + -0x10;
              *(long *)pSVar1 = *(long *)pSVar1 + -1;
              UNLOCK();
              if (*(long *)pSVar1 == 0) {
                local_68 = (Shape *)0x0;
                Memory::free_static(pSVar6 + -0x10,false);
              }
            }
            lVar4 = local_70;
            if (local_70 != 0) {
              LOCK();
              plVar2 = (long *)(local_70 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_70 = 0;
                Memory::free_static((void *)(lVar4 + -0x10),false);
              }
            }
            lVar4 = local_78;
            if (local_78 != 0) {
              LOCK();
              plVar2 = (long *)(local_78 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_78 = 0;
                Memory::free_static((void *)(lVar4 + -0x10),false);
              }
            }
            lVar4 = local_80;
            if (local_80 != 0) {
              LOCK();
              plVar2 = (long *)(local_80 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_80 = 0;
                Memory::free_static((void *)(lVar4 + -0x10),false);
              }
            }
            lVar4 = local_88;
            pSVar6 = local_90;
            if (local_88 != 0) {
              LOCK();
              plVar2 = (long *)(local_88 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_88 = 0;
                Memory::free_static((void *)(lVar4 + -0x10),false);
                pSVar6 = local_90;
              }
            }
          }
          local_58 = local_4c;
          JoltShape3D::with_scale((Shape *)&local_68,pSVar5);
          if (local_68 == pSVar6) {
            pSVar5 = local_68;
            if (local_68 != (Shape *)0x0) {
              LOCK();
              pSVar6 = local_68 + 8;
              *(int *)pSVar6 = *(int *)pSVar6 + -1;
              UNLOCK();
              pSVar5 = local_90;
              if (*(int *)pSVar6 == 0) {
                (**(code **)(*(long *)local_68 + 8))(local_68);
                pSVar5 = local_90;
              }
            }
            goto LAB_00102ead;
          }
          if (pSVar6 != (Shape *)0x0) {
            LOCK();
            pSVar5 = pSVar6 + 8;
            *(int *)pSVar5 = *(int *)pSVar5 + -1;
            UNLOCK();
            if (*(int *)pSVar5 == 0) {
              (**(code **)(*(long *)pSVar6 + 8))(pSVar6);
            }
          }
          cVar3 = *(char *)((long)plVar8 + 0x3c);
          local_90 = local_68;
          pSVar5 = local_68;
        }
        pSVar6 = pSVar5;
        if (cVar3 == '\x03') {
          JoltShape3D::with_double_sided((Shape *)&local_68,SUB81(pSVar5,0));
          if (pSVar5 == local_68) {
            if (pSVar5 != (Shape *)0x0) {
              LOCK();
              pSVar1 = pSVar5 + 8;
              *(int *)pSVar1 = *(int *)pSVar1 + -1;
              UNLOCK();
              pSVar6 = local_90;
              if (*(int *)pSVar1 == 0) {
                (**(code **)(*(long *)pSVar5 + 8))(pSVar5);
                pSVar6 = local_90;
              }
            }
          }
          else {
            pSVar6 = local_68;
            if (pSVar5 != (Shape *)0x0) {
              LOCK();
              pSVar1 = pSVar5 + 8;
              *(int *)pSVar1 = *(int *)pSVar1 + -1;
              UNLOCK();
              if (*(int *)pSVar1 == 0) {
                (**(code **)(*(long *)pSVar5 + 8))(pSVar5);
                pSVar6 = local_68;
              }
            }
          }
        }
        *(Shape **)this = pSVar6;
        goto LAB_00102eb9;
      }
    }
  }
  *(undefined8 *)this = 0;
LAB_00102eb9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltShapedObject3D::build_shapes(bool) */

JoltShapedObject3D * JoltShapedObject3D::build_shapes(bool param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  long *in_RSI;
  undefined7 in_register_00000039;
  JoltShapedObject3D *this;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined4 local_b4;
  undefined4 uStack_b0;
  long *local_a8;
  long local_98 [2];
  char local_88;
  code *local_78;
  undefined4 local_70;
  undefined8 local_68;
  long *local_60;
  long local_50 [2];
  char local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  long local_20;
  
  this = (JoltShapedObject3D *)CONCAT71(in_register_00000039,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _try_build_shape(this,SUB81(in_RSI,0));
  if (*(long *)this != 0) goto LAB_00103184;
  cVar3 = (**(code **)(*in_RSI + 0x98))();
  if (cVar3 == '\0') {
    plVar4 = (long *)(*JPH::Allocate)(0x30);
    *(undefined4 *)(plVar4 + 1) = 0;
    plVar4[2] = 0;
    *(undefined2 *)(plVar4 + 3) = 0x210b;
    plVar2 = *(long **)this;
    *plVar4 = (long)JPH::BodyInterface::SetShape;
    *(undefined1 (*) [16])(plVar4 + 4) = (undefined1  [16])0x0;
    if (plVar4 != plVar2) {
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
      }
      *(long **)this = plVar4;
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    goto LAB_00103184;
  }
  uVar5 = (**(code **)(*in_RSI + 0xa0))();
  local_70 = 0;
  uStack_b0 = (undefined4)((ulong)uVar5 >> 0x20);
  local_b4 = (undefined4)uVar5;
  local_78 = (code *)&JPH::EmptyShape::vtable;
  local_40 = '\0';
  local_68 = 0;
  local_38 = local_b4;
  uStack_34 = uStack_b0;
  JPH::EmptyShapeSettings::Create();
  plVar2 = *(long **)this;
  if (plVar2 == local_a8) {
LAB_00103265:
    if (local_88 == '\x01') {
      if (local_a8 != (long *)0x0) {
        LOCK();
        plVar2 = local_a8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)(*local_a8 + 8))();
        }
      }
    }
    else if ((local_88 == '\x02') && (local_a8 != local_98)) goto LAB_0010335b;
  }
  else {
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar4 = plVar2 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
    }
    *(long **)this = local_a8;
    if (local_a8 != (long *)0x0) {
      LOCK();
      *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
      UNLOCK();
      goto LAB_00103265;
    }
    if ((local_88 != '\x01') && (local_88 == '\x02')) {
LAB_0010335b:
      (*JPH::Free)();
    }
  }
  local_78 = JoltShapeInstance3D::try_build;
  if (local_40 == '\x01') {
    if (local_60 != (long *)0x0) {
      LOCK();
      plVar2 = local_60 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*local_60 + 8))();
      }
    }
  }
  else if ((local_40 == '\x02') && (local_60 != local_50)) {
    (*JPH::Free)();
  }
LAB_00103184:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* JoltShapedObject3D::commit_shapes(bool) */

void __thiscall JoltShapedObject3D::commit_shapes(JoltShapedObject3D *this,bool param_1)

{
  SelfList *pSVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long *local_80;
  code *local_78 [8];
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x28) == 0) || (*(int *)(this + 0x30) == -1)) {
    if (*(code **)(*(long *)this + 0x90) != _shapes_committed) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001035d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)this + 0x90))(this);
        return;
      }
      goto LAB_00103677;
    }
  }
  else {
    JoltSpace3D::write_body((BodyID *)local_78);
    if (local_38 == 0) {
      _err_print_error("commit_shapes","modules/jolt_physics/objects/jolt_shaped_object_3d.cpp",
                       0x145,"Condition \"body.is_invalid()\" is true.",0,0);
    }
    else {
      build_shapes(SUB81(&local_80,0));
      plVar2 = local_80;
      plVar3 = *(long **)(this + 0x90);
      if (local_80 != plVar3) {
        plVar5 = *(long **)(this + 0x98);
        if (plVar3 == plVar5) {
LAB_001034a9:
          if (plVar5 != (long *)0x0) {
            LOCK();
            plVar3 = plVar5 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
          *(long **)(this + 0x90) = local_80;
          if (local_80 != (long *)0x0) {
LAB_001035f5:
            LOCK();
            *(int *)(local_80 + 1) = (int)local_80[1] + 1;
            UNLOCK();
          }
        }
        else {
          if (plVar5 != (long *)0x0) {
            LOCK();
            plVar3 = plVar5 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
            plVar3 = *(long **)(this + 0x90);
          }
          *(long **)(this + 0x98) = plVar3;
          if (plVar3 == (long *)0x0) {
            if (local_80 != (long *)0x0) {
              *(long **)(this + 0x90) = local_80;
              goto LAB_001035f5;
            }
          }
          else {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
            plVar5 = *(long **)(this + 0x90);
            if (plVar5 != local_80) goto LAB_001034a9;
          }
        }
        uVar4 = JoltSpace3D::get_body_iface();
        JPH::BodyInterface::SetShape(uVar4,this + 0x30,*(undefined8 *)(this + 0x90),0,1);
        if (*(SelfList **)(this + 0x28) != (SelfList *)0x0) {
          JoltSpace3D::enqueue_shapes_changed(*(SelfList **)(this + 0x28));
          pSVar1 = *(SelfList **)(this + 0x28);
          if ((param_1) || (*(char *)(*(long *)(this + 0x90) + 0x18) != '\x01')) {
            if (pSVar1 != (SelfList *)0x0) {
              JoltSpace3D::dequeue_needs_optimization(pSVar1);
            }
          }
          else if (pSVar1 != (SelfList *)0x0) {
            JoltSpace3D::enqueue_needs_optimization(pSVar1);
          }
        }
        if (*(code **)(*(long *)this + 0x90) != _shapes_committed) {
          (**(code **)(*(long *)this + 0x90))(this);
        }
      }
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar3 = plVar2 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)(*plVar2 + 8))(plVar2);
        }
      }
    }
    JoltBodyAccessor3D::release();
    local_78[0] = _err_print_error;
    JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_78);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103677:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltShapedObject3D::_shapes_changed() */

void __thiscall JoltShapedObject3D::_shapes_changed(JoltShapedObject3D *this)

{
  commit_shapes(this,false);
  JoltObject3D::_update_object_layer();
  return;
}



/* JoltShapedObject3D::remove_shape(int) */

void __thiscall JoltShapedObject3D::remove_shape(JoltShapedObject3D *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  ulong uVar8;
  
  uVar11 = *(uint *)(this + 8);
  if ((param_1 < 0) || ((int)uVar11 <= param_1)) {
    _err_print_index_error
              ("remove_shape","modules/jolt_physics/objects/jolt_shaped_object_3d.cpp",0x172,
               (long)param_1,(long)(int)uVar11,"p_index","(int)shapes.size()","",false,false);
    return;
  }
  uVar8 = (ulong)(uint)param_1;
  if ((uint)param_1 < uVar11) {
    uVar11 = uVar11 - 1;
    *(uint *)(this + 8) = uVar11;
    if ((uint)param_1 < uVar11) {
      lVar12 = (long)param_1 * 0x60;
      do {
        uVar6 = (int)uVar8 + 1;
        uVar8 = (ulong)uVar6;
        puVar9 = (undefined8 *)(uVar8 * 0x60 + *(long *)(this + 0x10));
        puVar10 = (undefined8 *)(*(long *)(this + 0x10) + lVar12);
        uVar4 = puVar9[1];
        uVar2 = puVar9[6];
        *puVar10 = *puVar9;
        puVar10[1] = uVar4;
        uVar4 = puVar9[3];
        puVar10[2] = puVar9[2];
        puVar10[3] = uVar4;
        uVar4 = puVar9[4];
        uVar5 = puVar9[5];
        puVar10[6] = uVar2;
        uVar1 = *(undefined4 *)(puVar9 + 7);
        puVar10[4] = uVar4;
        puVar10[5] = uVar5;
        *(undefined4 *)(puVar10 + 7) = uVar1;
        JoltShapeInstance3D::ShapeReference::operator=
                  ((ShapeReference *)(puVar10 + 8),(ShapeReference *)(puVar9 + 8));
        plVar3 = (long *)puVar10[10];
        plVar7 = (long *)puVar9[10];
        if (plVar3 != plVar7) {
          if (plVar3 != (long *)0x0) {
            LOCK();
            plVar7 = plVar3 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)(*plVar3 + 8))();
            }
            plVar7 = (long *)puVar9[10];
          }
          puVar10[10] = plVar7;
          if (plVar7 != (long *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
          }
        }
        uVar11 = *(uint *)(this + 8);
        lVar12 = lVar12 + 0x60;
        *(undefined4 *)(puVar10 + 0xb) = *(undefined4 *)(puVar9 + 0xb);
        *(undefined1 *)((long)puVar10 + 0x5c) = *(undefined1 *)((long)puVar9 + 0x5c);
      } while (uVar6 < uVar11);
    }
    lVar12 = (ulong)uVar11 * 0x60 + *(long *)(this + 0x10);
    plVar3 = *(long **)(lVar12 + 0x50);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar7 = plVar3 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    JoltShapeInstance3D::ShapeReference::~ShapeReference((ShapeReference *)(lVar12 + 0x40));
  }
  else {
    _err_print_index_error
              ("remove_at","./core/templates/local_vector.h",0x4c,(long)param_1,(ulong)uVar11,
               "p_index","count","",false,false);
  }
  if (*(code **)(*(long *)this + 0x88) == _shapes_changed) {
    commit_shapes(this,false);
    JoltObject3D::_update_object_layer();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00103863. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x88))(this);
  return;
}



/* JoltShapedObject3D::clear_shapes() */

void __thiscall JoltShapedObject3D::clear_shapes(JoltShapedObject3D *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (*(int *)(this + 8) != 0) {
    lVar4 = 0;
    do {
      lVar3 = lVar4 * 0x60 + *(long *)(this + 0x10);
      plVar2 = *(long **)(lVar3 + 0x50);
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
      }
      lVar4 = lVar4 + 1;
      JoltShapeInstance3D::ShapeReference::~ShapeReference((ShapeReference *)(lVar3 + 0x40));
    } while ((uint)lVar4 < *(uint *)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  if (*(code **)(*(long *)this + 0x88) == _shapes_changed) {
    commit_shapes(this,false);
    JoltObject3D::_update_object_layer();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00103957. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x88))(this);
  return;
}



/* JoltShapedObject3D::set_shape_disabled(int, bool) */

void __thiscall
JoltShapedObject3D::set_shape_disabled(JoltShapedObject3D *this,int param_1,bool param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  
  uVar1 = *(uint *)(this + 8);
  if ((param_1 < 0) || ((int)uVar1 <= param_1)) {
    _err_print_index_error
              ("set_shape_disabled","modules/jolt_physics/objects/jolt_shaped_object_3d.cpp",0x1cf,
               (long)param_1,(long)(int)uVar1,"p_index","(int)shapes.size()","",false,false);
  }
  else {
    if (uVar1 <= (uint)param_1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,(ulong)uVar1,
                 "p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = (long)param_1 * 0x60 + *(long *)(this + 0x10);
    if (param_2 != (bool)*(char *)(lVar3 + 0x5c)) {
      *(bool *)(lVar3 + 0x5c) = param_2;
      if (*(code **)(*(long *)this + 0x88) == _shapes_changed) {
        commit_shapes(this,false);
        JoltObject3D::_update_object_layer();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00103a01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x88))();
      return;
    }
  }
  return;
}



/* JoltShapedObject3D::set_shape(int, JoltShape3D*) */

void __thiscall
JoltShapedObject3D::set_shape(JoltShapedObject3D *this,int param_1,JoltShape3D *param_2)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_c8;
  uint local_c0;
  Transform3D local_b8 [16];
  undefined1 local_a8 [16];
  uint local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  ShapeReference local_48 [16];
  long *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 < 0) || (*(int *)(this + 8) <= param_1)) {
    _err_print_index_error
              ("set_shape","modules/jolt_physics/objects/jolt_shaped_object_3d.cpp",0x17e,
               (long)param_1,(long)*(int *)(this + 8),"p_index","(int)shapes.size()","",false,false)
    ;
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    local_c8 = _LC5;
    local_94 = 0;
    local_8c = 0;
    local_c0 = _LC6;
    local_b8 = (Transform3D  [16])ZEXT416(_LC6);
    local_a8 = ZEXT416(_LC6);
    local_98 = _LC6;
    JoltShapeInstance3D::JoltShapeInstance3D
              ((JoltShapeInstance3D *)&local_88,this,param_2,local_b8,(Vector3 *)&local_c8,false);
    if (*(uint *)(this + 8) <= (uint)param_1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,
                 (ulong)*(uint *)(this + 8),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    puVar4 = (undefined8 *)((long)param_1 * 0x60 + *(long *)(this + 0x10));
    *puVar4 = local_88;
    puVar4[1] = uStack_80;
    puVar4[2] = local_78;
    puVar4[3] = uStack_70;
    puVar4[6] = local_58;
    puVar4[4] = local_68;
    puVar4[5] = uStack_60;
    *(undefined4 *)(puVar4 + 7) = local_50;
    JoltShapeInstance3D::ShapeReference::operator=((ShapeReference *)(puVar4 + 8),local_48);
    plVar2 = (long *)puVar4[10];
    if (plVar2 != local_38) {
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 8))(plVar2);
        }
      }
      puVar4[10] = local_38;
      if (local_38 != (long *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
    }
    *(undefined4 *)(puVar4 + 0xb) = local_30;
    *(undefined1 *)((long)puVar4 + 0x5c) = local_2c;
    if (local_38 != (long *)0x0) {
      LOCK();
      plVar2 = local_38 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*local_38 + 8))();
      }
    }
    JoltShapeInstance3D::ShapeReference::~ShapeReference(local_48);
    if (*(code **)(*(long *)this + 0x88) == _shapes_changed) {
      commit_shapes(this,false);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        JoltObject3D::_update_object_layer();
        return;
      }
    }
    else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00103ca1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x88))(this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltShapedObject3D::remove_shape(JoltShape3D const*) */

void __thiscall JoltShapedObject3D::remove_shape(JoltShapedObject3D *this,JoltShape3D *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  
  uVar13 = *(uint *)(this + 8);
  uVar15 = uVar13 - 1;
  if (-1 < (int)uVar15) {
    lVar12 = (ulong)uVar15 * 0x60;
    do {
      if (uVar13 <= uVar15) {
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar15,(ulong)uVar13,
                   "p_index","count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar11 = *(long *)(this + 0x10);
      if (param_1 == *(JoltShape3D **)(lVar11 + 0x48 + lVar12)) {
        uVar13 = uVar13 - 1;
        *(uint *)(this + 8) = uVar13;
        if (uVar15 < uVar13) {
          lVar9 = (long)(int)uVar15 * 0x60;
          uVar7 = uVar15;
          do {
            uVar7 = uVar7 + 1;
            puVar14 = (undefined8 *)((ulong)uVar7 * 0x60 + lVar11);
            puVar10 = (undefined8 *)(lVar11 + lVar9);
            uVar5 = puVar14[1];
            uVar2 = puVar14[6];
            *puVar10 = *puVar14;
            puVar10[1] = uVar5;
            uVar5 = puVar14[3];
            puVar10[2] = puVar14[2];
            puVar10[3] = uVar5;
            uVar5 = puVar14[4];
            uVar6 = puVar14[5];
            puVar10[6] = uVar2;
            uVar1 = *(undefined4 *)(puVar14 + 7);
            puVar10[4] = uVar5;
            puVar10[5] = uVar6;
            *(undefined4 *)(puVar10 + 7) = uVar1;
            JoltShapeInstance3D::ShapeReference::operator=
                      ((ShapeReference *)(puVar10 + 8),(ShapeReference *)(puVar14 + 8));
            plVar3 = (long *)puVar10[10];
            plVar8 = (long *)puVar14[10];
            if (plVar3 != plVar8) {
              if (plVar3 != (long *)0x0) {
                LOCK();
                plVar8 = plVar3 + 1;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)*plVar8 == 0) {
                  (**(code **)(*plVar3 + 8))();
                  plVar8 = (long *)puVar14[10];
                }
                else {
                  plVar8 = (long *)puVar14[10];
                }
              }
              puVar10[10] = plVar8;
              if (plVar8 != (long *)0x0) {
                LOCK();
                *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
                UNLOCK();
              }
            }
            uVar13 = *(uint *)(this + 8);
            lVar9 = lVar9 + 0x60;
            *(undefined4 *)(puVar10 + 0xb) = *(undefined4 *)(puVar14 + 0xb);
            *(undefined1 *)((long)puVar10 + 0x5c) = *(undefined1 *)((long)puVar14 + 0x5c);
            lVar11 = *(long *)(this + 0x10);
          } while (uVar7 < uVar13);
        }
        lVar11 = lVar11 + (ulong)uVar13 * 0x60;
        plVar3 = *(long **)(lVar11 + 0x50);
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar8 = plVar3 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)(*plVar3 + 8))();
            JoltShapeInstance3D::ShapeReference::~ShapeReference((ShapeReference *)(lVar11 + 0x40));
            goto joined_r0x00103d3c;
          }
        }
        JoltShapeInstance3D::ShapeReference::~ShapeReference((ShapeReference *)(lVar11 + 0x40));
      }
joined_r0x00103d3c:
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      lVar12 = lVar12 + -0x60;
      uVar13 = *(uint *)(this + 8);
    } while( true );
  }
  if (*(code **)(*(long *)this + 0x88) != _shapes_changed) {
                    /* WARNING: Could not recover jumptable at 0x00103f3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x88))(this);
    return;
  }
  commit_shapes(this,false);
  JoltObject3D::_update_object_layer();
  return;
}



/* JoltShapedObject3D::add_shape(JoltShape3D*, Transform3D, bool) */

void JoltShapedObject3D::add_shape(JoltShapedObject3D *param_1,JoltShape3D *param_2,bool param_3)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  code *pcVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  float in_stack_00000028;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  ShapeReference local_68 [16];
  long *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((float)uStack0000000000000018 * in_stack_00000028 -
       (float)uStack0000000000000024 * (float)uStack000000000000001c) *
       (float)uStack0000000000000008 -
      (in_stack_00000028 * (float)uStack000000000000000c -
      (float)uStack0000000000000024 * (float)uStack0000000000000010) * (float)uStack0000000000000014
      ) + ((float)uStack000000000000001c * (float)uStack000000000000000c -
          (float)uStack0000000000000018 * (float)uStack0000000000000010) *
          (float)uStack0000000000000020 == 0.0) {
    JoltObject3D::to_string();
    uVar3 = *(undefined4 *)(param_1 + 8);
    local_e0 = 0;
    local_c8 = 
    "An invalid transform was passed when adding shape at index %d to physics body \'%s\'.";
    local_c0 = 0x53;
    String::parse_latin1((StrRange *)&local_e0);
    vformat<unsigned_int,String>(&local_d8,(StrRange *)&local_e0,uVar3,&local_e8);
    local_c8 = 
    "%s The basis of the transform was singular, which is not supported by Jolt Physics. This is likely caused by one or more axes having a scale of zero. The basis (and thus its scale) will be treated as identity."
    ;
    local_d0 = 0;
    local_c0 = 0xd1;
    String::parse_latin1((StrRange *)&local_d0);
    vformat<String>(&local_c8,(StrRange *)&local_d0,&local_d8);
    _err_print_error("add_shape","modules/jolt_physics/objects/jolt_shaped_object_3d.cpp",0x15d,
                     &local_c8,0,1);
    pcVar5 = local_c8;
    if (local_c8 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    lVar7 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    lVar7 = local_d8;
    if (local_d8 != 0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    lVar7 = local_e0;
    if (local_e0 != 0) {
      LOCK();
      plVar1 = (long *)(local_e0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e0 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    lVar7 = local_e8;
    if (local_e8 != 0) {
      LOCK();
      plVar1 = (long *)(local_e8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e8 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    in_stack_00000028 = 1.0;
    _uStack0000000000000008 = ZEXT416(_LC6);
    _uStack0000000000000018 = ZEXT416(_LC6);
  }
  local_b4 = 0;
  local_ac = 0;
  JoltMath::decompose((Basis *)&stack0x00000008,(Vector3 *)&local_b4);
  JoltShapeInstance3D::JoltShapeInstance3D
            ((JoltShapeInstance3D *)&local_a8,param_1,param_2,(Transform3D *)&stack0x00000008,
             (Vector3 *)&local_b4,param_3);
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 == *(uint *)(param_1 + 0xc)) {
    uVar6 = (ulong)(uVar2 * 2);
    if (uVar2 * 2 == 0) {
      uVar6 = 1;
    }
    *(int *)(param_1 + 0xc) = (int)uVar6;
    lVar7 = Memory::realloc_static(*(void **)(param_1 + 0x10),uVar6 * 0x60,false);
    *(long *)(param_1 + 0x10) = lVar7;
    if (lVar7 == 0) {
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar2 = *(uint *)(param_1 + 8);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x10);
  }
  *(uint *)(param_1 + 8) = uVar2 + 1;
  puVar8 = (undefined8 *)(lVar7 + (ulong)uVar2 * 0x60);
  *puVar8 = local_a8;
  puVar8[1] = uStack_a0;
  puVar8[6] = local_78;
  puVar8[2] = local_98;
  puVar8[3] = uStack_90;
  *(undefined4 *)(puVar8 + 7) = local_70;
  puVar8[4] = local_88;
  puVar8[5] = uStack_80;
  JoltShapeInstance3D::ShapeReference::ShapeReference((ShapeReference *)(puVar8 + 8),local_68);
  puVar8[10] = local_58;
  if (local_58 != (long *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar8 + 0xb) = local_50;
  *(undefined1 *)((long)puVar8 + 0x5c) = local_4c;
  if (local_58 != (long *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_58 + 8))();
    }
  }
  JoltShapeInstance3D::ShapeReference::~ShapeReference(local_68);
  if (*(code **)(*(long *)param_1 + 0x88) == _shapes_changed) {
    commit_shapes(param_1,false);
    JoltObject3D::_update_object_layer();
  }
  else {
    (**(code **)(*(long *)param_1 + 0x88))(param_1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JoltShapedObject3D::set_shape_transform(int, Transform3D) */

void JoltShapedObject3D::set_shape_transform(JoltShapedObject3D *param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  char *pcVar4;
  char cVar5;
  Transform3D *this;
  long in_FS_OFFSET;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  float fStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_3c;
  float local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((int)param_2 < 0) || (*(int *)(param_1 + 8) <= (int)param_2)) {
    _err_print_index_error
              ("set_shape_transform","modules/jolt_physics/objects/jolt_shaped_object_3d.cpp",0x1b2,
               (long)(int)param_2,(long)*(int *)(param_1 + 8),"p_index","(int)shapes.size()","",
               false,false);
  }
  else {
    if ((((float)uStack0000000000000018 * fStack0000000000000028 -
         (float)uStack0000000000000024 * (float)uStack000000000000001c) *
         (float)uStack0000000000000008 -
        (fStack0000000000000028 * (float)uStack000000000000000c -
        (float)uStack0000000000000024 * (float)uStack0000000000000010) *
        (float)uStack0000000000000014) +
        ((float)uStack000000000000001c * (float)uStack000000000000000c -
        (float)uStack0000000000000018 * (float)uStack0000000000000010) *
        (float)uStack0000000000000020 == 0.0) {
      local_60 = 0;
      local_50 = 0xd1;
      local_58 = 
      "%s The basis of the transform was singular, which is not supported by Jolt Physics. This is likely caused by one or more axes having a scale of zero. The basis (and thus its scale) will be treated as identity."
      ;
      String::parse_latin1((StrRange *)&local_60);
      vformat<char_const*>((String_conflict *)&local_58,(char *)&local_60);
      _err_print_error("set_shape_transform",
                       "modules/jolt_physics/objects/jolt_shaped_object_3d.cpp",0x1b3,
                       (String_conflict *)&local_58,0,1);
      pcVar4 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
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
      fStack0000000000000028 = 1.0;
      _uStack0000000000000008 = ZEXT416(_LC6);
      _uStack0000000000000018 = ZEXT416(_LC6);
    }
    local_3c = 0;
    local_34 = 0.0;
    JoltMath::decompose((Basis *)&stack0x00000008,(Vector3 *)&local_3c);
    if (*(uint *)(param_1 + 8) <= param_2) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(long)(int)param_2,
                 (ulong)*(uint *)(param_1 + 8),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    this = (Transform3D *)((long)(int)param_2 * 0x60 + *(long *)(param_1 + 0x10));
    cVar5 = Transform3D::operator==(this,(Transform3D *)&stack0x00000008);
    if ((((cVar5 == '\0') || (*(float *)(this + 0x30) != (float)local_3c)) ||
        (*(float *)(this + 0x34) != local_3c._4_4_)) || (*(float *)(this + 0x38) != local_34)) {
      *(undefined8 *)this = _uStack0000000000000008;
      *(undefined8 *)(this + 8) = _uStack0000000000000010;
      *(undefined8 *)(this + 0x30) = local_3c;
      *(undefined8 *)(this + 0x10) = _uStack0000000000000018;
      *(undefined8 *)(this + 0x18) = _uStack0000000000000020;
      *(float *)(this + 0x38) = local_34;
      lVar2 = *(long *)param_1;
      *(ulong *)(this + 0x20) = CONCAT44(uStack000000000000002c,fStack0000000000000028);
      *(undefined8 *)(this + 0x28) = in_stack_00000030;
      if (*(code **)(lVar2 + 0x88) == _shapes_changed) {
        commit_shapes(param_1,false);
        JoltObject3D::_update_object_layer();
      }
      else {
        (**(code **)(lVar2 + 0x88))(param_1);
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JoltObject3D::_space_changed() */

void JoltObject3D::_space_changed(void)

{
  return;
}



/* JoltObject3D::pre_step(float, JPH::Body&) */

void JoltObject3D::pre_step(float param_1,Body *param_2)

{
  return;
}



/* JoltShapedObject3D::_shapes_committed() */

void JoltShapedObject3D::_shapes_committed(void)

{
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Body::GetPosition() const */

undefined1  [16] __thiscall JPH::Body::GetPosition(Body *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [12];
  float local_18;
  float fStack_14;
  
  auVar14 = (**(code **)(**(long **)(this + 0x40) + 0x18))();
  fVar6 = auVar14._8_4_;
  fVar7 = *(float *)(this + 0x10);
  fVar1 = *(float *)(this + 0x1c);
  local_18 = auVar14._0_4_;
  fStack_14 = auVar14._4_4_;
  fVar2 = *(float *)(this + 0x18);
  fVar3 = *(float *)(this + 0x14);
  fVar9 = (float)(*(uint *)(this + 0x10) ^ __LC3);
  fVar10 = (float)(*(uint *)(this + 0x14) ^ _UNK_00106c94);
  fVar11 = (float)(*(uint *)(this + 0x18) ^ _UNK_00106c98);
  fVar12 = (float)(*(uint *)(this + 0x1c) ^ _UNK_00106c9c);
  fVar13 = (fVar1 * local_18 + fVar7 * 0.0 + fVar3 * fVar6) - fVar2 * fStack_14;
  fVar8 = (fVar1 * fStack_14 - fVar7 * fVar6) + fVar3 * 0.0 + fVar2 * local_18;
  fVar5 = ((fVar1 * fVar6 + fVar7 * fStack_14) - fVar3 * local_18) + fVar2 * 0.0;
  fVar7 = ((fVar1 * 0.0 - fVar7 * local_18) - fVar3 * fStack_14) - fVar2 * fVar6;
  auVar4._4_4_ = *(float *)(this + 4) -
                 (fVar5 * fVar9 + fVar8 * fVar12 + (fVar10 * fVar7 - fVar13 * fVar11));
  auVar4._0_4_ = *(float *)this -
                 ((fVar8 * fVar11 + fVar9 * fVar7 + fVar13 * fVar12) - fVar5 * fVar10);
  auVar4._8_4_ = *(float *)(this + 8) -
                 (fVar5 * fVar12 + ((fVar11 * fVar7 + fVar13 * fVar10) - fVar8 * fVar9));
  auVar4._12_4_ =
       *(float *)(this + 0xc) -
       (((fVar12 * fVar7 - fVar13 * fVar9) - fVar8 * fVar10) - fVar5 * fVar11);
  return auVar4;
}



/* WARNING: Removing unreachable block (ram,0x001052e8) */
/* WARNING: Removing unreachable block (ram,0x00105418) */
/* WARNING: Removing unreachable block (ram,0x001055e0) */
/* WARNING: Removing unreachable block (ram,0x00105424) */
/* WARNING: Removing unreachable block (ram,0x0010542e) */
/* WARNING: Removing unreachable block (ram,0x001055c0) */
/* WARNING: Removing unreachable block (ram,0x0010543a) */
/* WARNING: Removing unreachable block (ram,0x00105444) */
/* WARNING: Removing unreachable block (ram,0x001055a0) */
/* WARNING: Removing unreachable block (ram,0x00105450) */
/* WARNING: Removing unreachable block (ram,0x0010545a) */
/* WARNING: Removing unreachable block (ram,0x00105580) */
/* WARNING: Removing unreachable block (ram,0x00105466) */
/* WARNING: Removing unreachable block (ram,0x00105470) */
/* WARNING: Removing unreachable block (ram,0x00105560) */
/* WARNING: Removing unreachable block (ram,0x0010547c) */
/* WARNING: Removing unreachable block (ram,0x00105486) */
/* WARNING: Removing unreachable block (ram,0x00105540) */
/* WARNING: Removing unreachable block (ram,0x00105492) */
/* WARNING: Removing unreachable block (ram,0x0010549c) */
/* WARNING: Removing unreachable block (ram,0x00105520) */
/* WARNING: Removing unreachable block (ram,0x001054a4) */
/* WARNING: Removing unreachable block (ram,0x001054ba) */
/* WARNING: Removing unreachable block (ram,0x001054c6) */
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



/* String vformat<String, Vector3, Vector3>(String const&, String const, Vector3 const, Vector3
   const) */

long * vformat<String,Vector3,Vector3>
                 (undefined8 param_1_00,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 long *param_1,bool *param_6,String_conflict *param_7)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  int iVar5;
  Variant *pVVar6;
  int iVar7;
  long in_FS_OFFSET;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  char local_f9;
  Array local_f8 [8];
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  char *local_b8;
  undefined8 local_b0;
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  iVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_128 = param_3;
  local_120 = param_4;
  local_118 = param_1_00;
  local_110 = param_2;
  Variant::Variant(local_a8,param_7);
  Variant::Variant(local_90,(Vector3 *)&local_118);
  Variant::Variant(local_78,(Vector3 *)&local_128);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar7 = (int)local_f8;
  Array::resize(iVar7);
  pVVar6 = local_a8;
  do {
    iVar5 = iVar5 + 1;
    pVVar4 = (Variant *)Array::operator[](iVar7);
    Variant::operator=(pVVar4,pVVar6);
    pVVar6 = pVVar6 + 0x18;
  } while (iVar5 != 3);
  local_f9 = '\0';
  String::sprintf((Array *)&local_f0,param_6);
  if (local_f9 == '\0') {
    *param_1 = local_f0;
  }
  else {
    local_c0 = 0;
    local_b8 = ".";
    local_b0 = 1;
    String::parse_latin1((StrRange *)&local_c0);
    local_b8 = "\": ";
    local_d8 = 0;
    local_b0 = 3;
    String::parse_latin1((StrRange *)&local_d8);
    local_b8 = "Formatting error in string \"";
    local_e8 = 0;
    local_b0 = 0x1c;
    String::parse_latin1((StrRange *)&local_e8);
    String::operator+((String_conflict *)&local_e0,(String_conflict *)&local_e8);
    String::operator+((String_conflict *)&local_d0,(String_conflict *)&local_e0);
    String::operator+((String_conflict *)&local_c8,(String_conflict *)&local_d0);
    String::operator+((String_conflict *)&local_b8,(String_conflict *)&local_c8);
    _err_print_error("vformat","./core/variant/variant.h",0x3b1,
                     "Condition \"error\" is true. Returning: String()",(String_conflict *)&local_b8
                     ,0,0);
    pcVar3 = local_b8;
    if (local_b8 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_b8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b8 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
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
    lVar2 = local_f0;
    *param_1 = 0;
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
  }
  pVVar6 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar4 = pVVar6 + -0x18;
    pVVar6 = pVVar6 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar6 != local_a8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00105be0) */
/* WARNING: Removing unreachable block (ram,0x00105d10) */
/* WARNING: Removing unreachable block (ram,0x00105e89) */
/* WARNING: Removing unreachable block (ram,0x00105d1c) */
/* WARNING: Removing unreachable block (ram,0x00105d26) */
/* WARNING: Removing unreachable block (ram,0x00105e6b) */
/* WARNING: Removing unreachable block (ram,0x00105d32) */
/* WARNING: Removing unreachable block (ram,0x00105d3c) */
/* WARNING: Removing unreachable block (ram,0x00105e4d) */
/* WARNING: Removing unreachable block (ram,0x00105d48) */
/* WARNING: Removing unreachable block (ram,0x00105d52) */
/* WARNING: Removing unreachable block (ram,0x00105e2f) */
/* WARNING: Removing unreachable block (ram,0x00105d5e) */
/* WARNING: Removing unreachable block (ram,0x00105d68) */
/* WARNING: Removing unreachable block (ram,0x00105e11) */
/* WARNING: Removing unreachable block (ram,0x00105d74) */
/* WARNING: Removing unreachable block (ram,0x00105d7e) */
/* WARNING: Removing unreachable block (ram,0x00105df3) */
/* WARNING: Removing unreachable block (ram,0x00105d86) */
/* WARNING: Removing unreachable block (ram,0x00105d90) */
/* WARNING: Removing unreachable block (ram,0x00105dd8) */
/* WARNING: Removing unreachable block (ram,0x00105d98) */
/* WARNING: Removing unreachable block (ram,0x00105dae) */
/* WARNING: Removing unreachable block (ram,0x00105dba) */
/* String vformat<int, String>(String const&, int const, String const) */

undefined8 *
vformat<int,String>(undefined8 *param_1,bool *param_2,int param_3,String_conflict *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00106000) */
/* WARNING: Removing unreachable block (ram,0x00106130) */
/* WARNING: Removing unreachable block (ram,0x001062a9) */
/* WARNING: Removing unreachable block (ram,0x0010613c) */
/* WARNING: Removing unreachable block (ram,0x00106146) */
/* WARNING: Removing unreachable block (ram,0x0010628b) */
/* WARNING: Removing unreachable block (ram,0x00106152) */
/* WARNING: Removing unreachable block (ram,0x0010615c) */
/* WARNING: Removing unreachable block (ram,0x0010626d) */
/* WARNING: Removing unreachable block (ram,0x00106168) */
/* WARNING: Removing unreachable block (ram,0x00106172) */
/* WARNING: Removing unreachable block (ram,0x0010624f) */
/* WARNING: Removing unreachable block (ram,0x0010617e) */
/* WARNING: Removing unreachable block (ram,0x00106188) */
/* WARNING: Removing unreachable block (ram,0x00106231) */
/* WARNING: Removing unreachable block (ram,0x00106194) */
/* WARNING: Removing unreachable block (ram,0x0010619e) */
/* WARNING: Removing unreachable block (ram,0x00106213) */
/* WARNING: Removing unreachable block (ram,0x001061a6) */
/* WARNING: Removing unreachable block (ram,0x001061b0) */
/* WARNING: Removing unreachable block (ram,0x001061f8) */
/* WARNING: Removing unreachable block (ram,0x001061b8) */
/* WARNING: Removing unreachable block (ram,0x001061ce) */
/* WARNING: Removing unreachable block (ram,0x001061da) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>
          (undefined8 *param_1,bool *param_2,String_conflict *param_3,String_conflict *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00106420) */
/* WARNING: Removing unreachable block (ram,0x00106550) */
/* WARNING: Removing unreachable block (ram,0x001066c9) */
/* WARNING: Removing unreachable block (ram,0x0010655c) */
/* WARNING: Removing unreachable block (ram,0x00106566) */
/* WARNING: Removing unreachable block (ram,0x001066ab) */
/* WARNING: Removing unreachable block (ram,0x00106572) */
/* WARNING: Removing unreachable block (ram,0x0010657c) */
/* WARNING: Removing unreachable block (ram,0x0010668d) */
/* WARNING: Removing unreachable block (ram,0x00106588) */
/* WARNING: Removing unreachable block (ram,0x00106592) */
/* WARNING: Removing unreachable block (ram,0x0010666f) */
/* WARNING: Removing unreachable block (ram,0x0010659e) */
/* WARNING: Removing unreachable block (ram,0x001065a8) */
/* WARNING: Removing unreachable block (ram,0x00106651) */
/* WARNING: Removing unreachable block (ram,0x001065b4) */
/* WARNING: Removing unreachable block (ram,0x001065be) */
/* WARNING: Removing unreachable block (ram,0x00106633) */
/* WARNING: Removing unreachable block (ram,0x001065c6) */
/* WARNING: Removing unreachable block (ram,0x001065d0) */
/* WARNING: Removing unreachable block (ram,0x00106618) */
/* WARNING: Removing unreachable block (ram,0x001065d8) */
/* WARNING: Removing unreachable block (ram,0x001065ee) */
/* WARNING: Removing unreachable block (ram,0x001065fa) */
/* String vformat<unsigned int, String>(String const&, unsigned int const, String const) */

undefined8 *
vformat<unsigned_int,String>
          (undefined8 *param_1,bool *param_2,uint param_3,String_conflict *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00106808) */
/* WARNING: Removing unreachable block (ram,0x00106938) */
/* WARNING: Removing unreachable block (ram,0x00106b00) */
/* WARNING: Removing unreachable block (ram,0x00106944) */
/* WARNING: Removing unreachable block (ram,0x0010694e) */
/* WARNING: Removing unreachable block (ram,0x00106ae0) */
/* WARNING: Removing unreachable block (ram,0x0010695a) */
/* WARNING: Removing unreachable block (ram,0x00106964) */
/* WARNING: Removing unreachable block (ram,0x00106ac0) */
/* WARNING: Removing unreachable block (ram,0x00106970) */
/* WARNING: Removing unreachable block (ram,0x0010697a) */
/* WARNING: Removing unreachable block (ram,0x00106aa0) */
/* WARNING: Removing unreachable block (ram,0x00106986) */
/* WARNING: Removing unreachable block (ram,0x00106990) */
/* WARNING: Removing unreachable block (ram,0x00106a80) */
/* WARNING: Removing unreachable block (ram,0x0010699c) */
/* WARNING: Removing unreachable block (ram,0x001069a6) */
/* WARNING: Removing unreachable block (ram,0x00106a60) */
/* WARNING: Removing unreachable block (ram,0x001069b2) */
/* WARNING: Removing unreachable block (ram,0x001069bc) */
/* WARNING: Removing unreachable block (ram,0x00106a40) */
/* WARNING: Removing unreachable block (ram,0x001069c4) */
/* WARNING: Removing unreachable block (ram,0x001069da) */
/* WARNING: Removing unreachable block (ram,0x001069e6) */
/* String vformat<char const*>(String const&, char const* const) */

String_conflict * vformat<char_const*>(String_conflict *param_1,char *param_2)

{
  char cVar1;
  Variant *this;
  char *in_RDX;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_RDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)param_2);
  *(undefined8 *)param_1 = local_c0[0];
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



/* JoltShapedObject3D::_is_big() const */

void JoltShapedObject3D::_GLOBAL__sub_I__is_big(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC68;
  }
  return;
}



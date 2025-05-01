
/* JoltSoftBody3D::_get_broad_phase_layer() const */

undefined8 JoltSoftBody3D::_get_broad_phase_layer(void)

{
  return 2;
}



/* JoltSoftBody3D::get_velocity_at_position(Vector3 const&) const */

undefined1  [16] JoltSoftBody3D::get_velocity_at_position(Vector3 *param_1)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return ZEXT816(0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltSoftBody3D::_get_object_layer() const */

undefined8 __thiscall JoltSoftBody3D::_get_object_layer(JoltSoftBody3D *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x28) != 0) {
    uVar1 = JoltSpace3D::map_to_object_layer
                      (*(long *)(this + 0x28),2,*(undefined4 *)(this + 0x34),
                       *(undefined4 *)(this + 0x38));
    return uVar1;
  }
  _err_print_error("_get_object_layer","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x49,
                   "Parameter \"space\" is null.",0,0);
  return 0;
}



/* JoltSoftBody3D::can_interact_with(JoltBody3D const&) const */

uint __thiscall JoltSoftBody3D::can_interact_with(JoltSoftBody3D *this,JoltBody3D *param_1)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  
  cVar2 = JoltObject3D::can_collide_with((JoltObject3D *)this);
  if ((cVar2 == '\0') &&
     (cVar2 = JoltObject3D::can_collide_with((JoltObject3D *)param_1), cVar2 == '\0')) {
    return 0;
  }
  if (*(uint *)(this + 0x68) != 0) {
    plVar4 = *(long **)(this + 0x70);
    plVar1 = plVar4 + *(uint *)(this + 0x68);
    do {
      if (*(long *)(param_1 + 0x18) == *plVar4) {
        return 0;
      }
      plVar4 = plVar4 + 1;
    } while (plVar1 != plVar4);
  }
  uVar3 = JoltBody3D::has_collision_exception((RID *)param_1);
  return uVar3 ^ 1;
}



/* JoltSoftBody3D::can_interact_with(JoltSoftBody3D const&) const */

undefined8 __thiscall
JoltSoftBody3D::can_interact_with(JoltSoftBody3D *this,JoltSoftBody3D *param_1)

{
  long *plVar1;
  char cVar2;
  long *plVar3;
  
  cVar2 = JoltObject3D::can_collide_with((JoltObject3D *)this);
  if ((cVar2 == '\0') &&
     (cVar2 = JoltObject3D::can_collide_with((JoltObject3D *)param_1), cVar2 == '\0')) {
    return 0;
  }
  if (*(uint *)(this + 0x68) != 0) {
    plVar3 = *(long **)(this + 0x70);
    plVar1 = plVar3 + *(uint *)(this + 0x68);
    do {
      if (*(long *)(param_1 + 0x18) == *plVar3) {
        return 0;
      }
      plVar3 = plVar3 + 1;
    } while (plVar1 != plVar3);
  }
  if (*(uint *)(param_1 + 0x68) != 0) {
    plVar3 = *(long **)(param_1 + 0x70);
    plVar1 = plVar3 + *(uint *)(param_1 + 0x68);
    do {
      if (*plVar3 == *(long *)(this + 0x18)) {
        return 0;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
  }
  return 1;
}



/* JoltSoftBody3D::_update_pressure() */

void __thiscall JoltSoftBody3D::_update_pressure(JoltSoftBody3D *this)

{
  long in_FS_OFFSET;
  code *local_68 [8];
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(this + 0x28) == 0) || (*(int *)(this + 0x30) == -1)) ||
     (*(long *)(this + 0x88) == 0)) {
    *(undefined4 *)(*(long *)(this + 0x98) + 100) = *(undefined4 *)(this + 0xa4);
  }
  else {
    JoltSpace3D::write_body((BodyID *)local_68);
    if (local_28 == 0) {
      _err_print_error("_update_pressure","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x107
                       ,"Condition \"body.is_invalid()\" is true.",0,0);
    }
    else {
      *(undefined4 *)(*(long *)(local_28 + 0x48) + 0x1b4) = *(undefined4 *)(this + 0xa4);
    }
    JoltBodyAccessor3D::release();
    local_68[0] = JoltObject3D::_reset_space;
    JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_68);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltSoftBody3D::_update_damping() */

void __thiscall JoltSoftBody3D::_update_damping(JoltSoftBody3D *this)

{
  long in_FS_OFFSET;
  code *local_68 [8];
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(this + 0x28) == 0) || (*(int *)(this + 0x30) == -1)) ||
     (*(long *)(this + 0x88) == 0)) {
    *(undefined4 *)(*(long *)(this + 0x98) + 0x54) = *(undefined4 *)(this + 0xa8);
  }
  else {
    JoltSpace3D::write_body((BodyID *)local_68);
    if (local_28 == 0) {
      _err_print_error("_update_damping","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x115,
                       "Condition \"body.is_invalid()\" is true.",0,0);
    }
    else {
      *(undefined4 *)(*(long *)(local_28 + 0x48) + 0x5c) = *(undefined4 *)(this + 0xa8);
    }
    JoltBodyAccessor3D::release();
    local_68[0] = JoltObject3D::_reset_space;
    JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_68);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltSoftBody3D::_update_simulation_precision() */

void __thiscall JoltSoftBody3D::_update_simulation_precision(JoltSoftBody3D *this)

{
  long in_FS_OFFSET;
  code *local_68 [8];
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(this + 0x28) == 0) || (*(int *)(this + 0x30) == -1)) ||
     (*(long *)(this + 0x88) == 0)) {
    *(undefined4 *)(*(long *)(this + 0x98) + 0x50) = *(undefined4 *)(this + 0xb0);
  }
  else {
    JoltSpace3D::write_body((BodyID *)local_68);
    if (local_28 == 0) {
      _err_print_error("_update_simulation_precision",
                       "modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x123,
                       "Condition \"body.is_invalid()\" is true.",0,0);
    }
    else {
      *(undefined4 *)(*(long *)(local_28 + 0x48) + 0x1b0) = *(undefined4 *)(this + 0xb0);
    }
    JoltBodyAccessor3D::release();
    local_68[0] = JoltObject3D::_reset_space;
    JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_68);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltSoftBody3D::_update_group_filter() */

void __thiscall JoltSoftBody3D::_update_group_filter(JoltSoftBody3D *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long in_FS_OFFSET;
  code *local_68 [8];
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  plVar4 = (long *)0x0;
  if (*(int *)(this + 0x68) != 0) {
    plVar4 = JoltGroupFilter::instance;
  }
  if (((*(long *)(this + 0x28) == 0) || (*(int *)(this + 0x30) == -1)) ||
     (*(long *)(this + 0x88) == 0)) {
    lVar3 = *(long *)(this + 0x98);
    plVar2 = *(long **)(lVar3 + 0x40);
    if (plVar4 != plVar2) {
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 0x18))();
        }
      }
      *(long **)(lVar3 + 0x40) = plVar4;
      if (plVar4 != (long *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
    }
  }
  else {
    JoltSpace3D::write_body((BodyID *)local_68);
    if (local_28 == 0) {
      _err_print_error("_update_group_filter","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",
                       0x133,"Condition \"body.is_invalid()\" is true.",0,0);
    }
    else {
      plVar2 = *(long **)(local_28 + 0x58);
      if (plVar4 != plVar2) {
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar2 + 0x18))();
          }
        }
        *(long **)(local_28 + 0x58) = plVar4;
        if (plVar4 != (long *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
      }
    }
    JoltBodyAccessor3D::release();
    local_68[0] = JoltObject3D::_reset_space;
    JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_68);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltSoftBody3D::_try_rebuild() */

void __thiscall JoltSoftBody3D::_try_rebuild(JoltSoftBody3D *this)

{
  if (*(long *)(this + 0x28) != 0) {
    JoltObject3D::_reset_space();
    return;
  }
  return;
}



/* JoltSoftBody3D::_mesh_changed() */

void __thiscall JoltSoftBody3D::_mesh_changed(JoltSoftBody3D *this)

{
  if (*(long *)(this + 0x28) != 0) {
    JoltObject3D::_reset_space();
    return;
  }
  return;
}



/* JoltSoftBody3D::_simulation_precision_changed() */

void __thiscall JoltSoftBody3D::_simulation_precision_changed(JoltSoftBody3D *this)

{
  BodyID *pBVar1;
  
  if (((*(long *)(this + 0x28) != 0) && (*(int *)(this + 0x30) != -1)) &&
     (*(long *)(this + 0x88) != 0)) {
    pBVar1 = (BodyID *)JoltSpace3D::get_body_iface();
    JPH::BodyInterface::ActivateBody(pBVar1);
    return;
  }
  return;
}



/* JoltSoftBody3D::_mass_changed() */

void __thiscall JoltSoftBody3D::_mass_changed(JoltSoftBody3D *this)

{
  BodyID *pBVar1;
  
  if (((*(long *)(this + 0x28) != 0) && (*(int *)(this + 0x30) != -1)) &&
     (*(long *)(this + 0x88) != 0)) {
    pBVar1 = (BodyID *)JoltSpace3D::get_body_iface();
    JPH::BodyInterface::ActivateBody(pBVar1);
    return;
  }
  return;
}



/* JoltSoftBody3D::_pressure_changed() */

void __thiscall JoltSoftBody3D::_pressure_changed(JoltSoftBody3D *this)

{
  BodyID *pBVar1;
  
  _update_pressure(this);
  if (((*(long *)(this + 0x28) != 0) && (*(int *)(this + 0x30) != -1)) &&
     (*(long *)(this + 0x88) != 0)) {
    pBVar1 = (BodyID *)JoltSpace3D::get_body_iface();
    JPH::BodyInterface::ActivateBody(pBVar1);
    return;
  }
  return;
}



/* JoltSoftBody3D::_damping_changed() */

void __thiscall JoltSoftBody3D::_damping_changed(JoltSoftBody3D *this)

{
  BodyID *pBVar1;
  
  _update_damping(this);
  if (((*(long *)(this + 0x28) != 0) && (*(int *)(this + 0x30) != -1)) &&
     (*(long *)(this + 0x88) != 0)) {
    pBVar1 = (BodyID *)JoltSpace3D::get_body_iface();
    JPH::BodyInterface::ActivateBody(pBVar1);
    return;
  }
  return;
}



/* JoltSoftBody3D::_vertices_changed() */

void __thiscall JoltSoftBody3D::_vertices_changed(JoltSoftBody3D *this)

{
  BodyID *pBVar1;
  
  if (((*(long *)(this + 0x28) != 0) && (*(int *)(this + 0x30) != -1)) &&
     (*(long *)(this + 0x88) != 0)) {
    pBVar1 = (BodyID *)JoltSpace3D::get_body_iface();
    JPH::BodyInterface::ActivateBody(pBVar1);
    return;
  }
  return;
}



/* JoltSoftBody3D::_exceptions_changed() */

void __thiscall JoltSoftBody3D::_exceptions_changed(JoltSoftBody3D *this)

{
  _update_group_filter(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltSoftBody3D::JoltSoftBody3D() */

void __thiscall JoltSoftBody3D::JoltSoftBody3D(JoltSoftBody3D *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  JoltObject3D::JoltObject3D((JoltObject3D *)this,2);
  uVar2 = _UNK_00108ae8;
  uVar1 = __LC10;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  *(undefined ***)this = &PTR__get_broad_phase_layer_00108850;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x60) = uVar1;
  *(undefined8 *)(this + 0x68) = uVar2;
  puVar3 = (undefined8 *)(*JPH::Allocate)(0x70);
  uVar2 = _UNK_00108af8;
  uVar1 = __LC12;
  puVar5 = puVar3;
  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
  }
  *(undefined2 *)((long)puVar3 + 0x2e) = 0x3f80;
  puVar3[10] = 0x3dcccccd00000005;
  puVar3[9] = 0xffffffffffffffff;
  *(undefined2 *)((long)puVar3 + 0x5a) = 0x43fa;
  *(undefined2 *)((long)puVar3 + 0x6a) = 0x3f80;
  *(undefined1 *)((long)puVar3 + 0x6e) = 1;
  *(undefined8 **)(this + 0x98) = puVar3;
  *(undefined4 *)(this + 0xb0) = 5;
  *(undefined8 *)(this + 0xa0) = uVar1;
  *(undefined8 *)(this + 0xa8) = uVar2;
  *(undefined8 *)((long)puVar3 + 0x5c) = 0x3f80000000000000;
  *(undefined2 *)((long)puVar3 + 0x6c) = 0;
  return;
}



/* JoltSoftBody3D::in_space() const */

bool __thiscall JoltSoftBody3D::in_space(JoltSoftBody3D *this)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(long *)(this + 0x28) != 0) && (*(int *)(this + 0x30) != -1)) {
    bVar1 = *(long *)(this + 0x88) != 0;
  }
  return bVar1;
}



/* JoltSoftBody3D::add_collision_exception(RID const&) */

void __thiscall JoltSoftBody3D::add_collision_exception(JoltSoftBody3D *this,RID *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  void *pvVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(this + 0x68);
  uVar2 = *(undefined8 *)param_1;
  pvVar4 = *(void **)(this + 0x70);
  if (uVar1 == *(uint *)(this + 0x6c)) {
    uVar5 = (ulong)(uVar1 * 2);
    if (uVar1 * 2 == 0) {
      uVar5 = 1;
    }
    *(int *)(this + 0x6c) = (int)uVar5;
    pvVar4 = (void *)Memory::realloc_static(pvVar4,uVar5 * 8,false);
    *(void **)(this + 0x70) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar1 = *(uint *)(this + 0x68);
  }
  *(uint *)(this + 0x68) = uVar1 + 1;
  *(undefined8 *)((long)pvVar4 + (ulong)uVar1 * 8) = uVar2;
  _update_group_filter(this);
  return;
}



/* JoltSoftBody3D::remove_collision_exception(RID const&) */

void __thiscall JoltSoftBody3D::remove_collision_exception(JoltSoftBody3D *this,RID *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(this + 0x68);
  if (uVar1 != 0) {
    lVar2 = *(long *)(this + 0x70);
    uVar4 = 0;
    do {
      if (*(long *)(lVar2 + uVar4 * 8) == *(long *)param_1) {
        *(uint *)(this + 0x68) = uVar1 - 1;
        uVar3 = (uint)uVar4;
        if (uVar3 < uVar1 - 1) {
          memmove((void *)(lVar2 + uVar4 * 8),(void *)(lVar2 + (ulong)(uVar3 + 1) * 8),
                  (ulong)((uVar1 - 2) - uVar3) * 8 + 8);
        }
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
  }
  _update_group_filter(this);
  return;
}



/* JoltSoftBody3D::has_collision_exception(RID const&) const */

undefined8 __thiscall JoltSoftBody3D::has_collision_exception(JoltSoftBody3D *this,RID *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (*(uint *)(this + 0x68) != 0) {
    plVar2 = *(long **)(this + 0x70);
    plVar1 = plVar2 + *(uint *)(this + 0x68);
    do {
      if (*plVar2 == *(long *)param_1) {
        return 1;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
  }
  return 0;
}



/* JoltSoftBody3D::is_sleeping() const */

bool __thiscall JoltSoftBody3D::is_sleeping(JoltSoftBody3D *this)

{
  long in_FS_OFFSET;
  bool bVar1;
  code *local_68 [8];
  long local_28;
  long local_20;
  
  bVar1 = false;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(this + 0x28) != 0) && (*(int *)(this + 0x30) != -1)) &&
     (*(long *)(this + 0x88) != 0)) {
    JoltSpace3D::read_body((BodyID *)local_68);
    if (local_28 == 0) {
      _err_print_error("is_sleeping","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x1a6,
                       "Condition \"body.is_invalid()\" is true. Returning: false",0,0);
    }
    else {
      bVar1 = true;
      if (*(long *)(local_28 + 0x48) != 0) {
        bVar1 = *(int *)(*(long *)(local_28 + 0x48) + 0x70) == -1;
      }
    }
    JoltBodyAccessor3D::release();
    local_68[0] = JPH::Body::SetAllowSleeping;
    JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_68);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltSoftBody3D::set_is_sleeping(bool) */

void __thiscall JoltSoftBody3D::set_is_sleeping(JoltSoftBody3D *this,bool param_1)

{
  BodyID *pBVar1;
  
  if (((*(long *)(this + 0x28) != 0) && (*(int *)(this + 0x30) != -1)) &&
     (*(long *)(this + 0x88) != 0)) {
    pBVar1 = (BodyID *)JoltSpace3D::get_body_iface();
    if (param_1) {
      JPH::BodyInterface::DeactivateBody(pBVar1);
      return;
    }
    JPH::BodyInterface::ActivateBody(pBVar1);
    return;
  }
  return;
}



/* JoltSoftBody3D::is_sleep_allowed() const */

undefined1 __thiscall JoltSoftBody3D::is_sleep_allowed(JoltSoftBody3D *this)

{
  undefined1 uVar1;
  long in_FS_OFFSET;
  code *local_68 [8];
  long local_28;
  long local_20;
  
  uVar1 = 1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(this + 0x28) != 0) && (*(int *)(this + 0x30) != -1)) &&
     (*(long *)(this + 0x88) != 0)) {
    JoltSpace3D::read_body((BodyID *)local_68);
    if (local_28 == 0) {
      uVar1 = 0;
      _err_print_error("is_sleep_allowed","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x1bf
                       ,"Condition \"body.is_invalid()\" is true. Returning: false",0,0);
    }
    else {
      uVar1 = *(undefined1 *)(*(long *)(local_28 + 0x48) + 0x79);
    }
    JoltBodyAccessor3D::release();
    local_68[0] = JPH::Body::SetAllowSleeping;
    JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_68);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltSoftBody3D::set_is_sleep_allowed(bool) */

void JoltSoftBody3D::set_is_sleep_allowed(bool param_1)

{
  undefined7 in_register_00000039;
  long lVar1;
  long in_FS_OFFSET;
  code *local_68 [8];
  long local_28;
  long local_20;
  
  lVar1 = CONCAT71(in_register_00000039,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(lVar1 + 0x28) != 0) && (*(int *)(lVar1 + 0x30) != -1)) &&
     (*(long *)(lVar1 + 0x88) != 0)) {
    JoltSpace3D::write_body((BodyID *)local_68);
    if (local_28 == 0) {
      _err_print_error("set_is_sleep_allowed","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",
                       0x1ca,"Condition \"body.is_invalid()\" is true.",0,0);
    }
    else {
      JPH::Body::SetAllowSleeping(SUB81(local_28,0));
    }
    JoltBodyAccessor3D::release();
    local_68[0] = JoltObject3D::_reset_space;
    JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_68);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltSoftBody3D::set_simulation_precision(int) */

void __thiscall JoltSoftBody3D::set_simulation_precision(JoltSoftBody3D *this,int param_1)

{
  BodyID *pBVar1;
  
  if (*(int *)(this + 0xb0) == param_1) {
    return;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  *(int *)(this + 0xb0) = param_1;
  if (((*(long *)(this + 0x28) != 0) && (*(int *)(this + 0x30) != -1)) &&
     (*(long *)(this + 0x88) != 0)) {
    pBVar1 = (BodyID *)JoltSpace3D::get_body_iface();
    JPH::BodyInterface::ActivateBody(pBVar1);
    return;
  }
  return;
}



/* JoltSoftBody3D::set_mass(float) */

void __thiscall JoltSoftBody3D::set_mass(JoltSoftBody3D *this,float param_1)

{
  BodyID *pBVar1;
  
  if (param_1 != *(float *)(this + 0xa0)) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    *(float *)(this + 0xa0) = param_1;
    if (((*(long *)(this + 0x28) != 0) && (*(int *)(this + 0x30) != -1)) &&
       (*(long *)(this + 0x88) != 0)) {
      pBVar1 = (BodyID *)JoltSpace3D::get_body_iface();
      JPH::BodyInterface::ActivateBody(pBVar1);
      return;
    }
  }
  return;
}



/* JoltSoftBody3D::get_stiffness_coefficient() const */

undefined4 __thiscall JoltSoftBody3D::get_stiffness_coefficient(JoltSoftBody3D *this)

{
  return *(undefined4 *)(this + 0xac);
}



/* JoltSoftBody3D::set_stiffness_coefficient(float) */

void __thiscall JoltSoftBody3D::set_stiffness_coefficient(JoltSoftBody3D *this,float param_1)

{
  float fVar1;
  
  if (0.0 <= param_1) {
    fVar1 = _LC21;
    if (param_1 <= _LC21) {
      fVar1 = param_1;
    }
    *(float *)(this + 0xac) = fVar1;
    return;
  }
  *(undefined4 *)(this + 0xac) = 0;
  return;
}



/* JoltSoftBody3D::set_pressure(float) */

void __thiscall JoltSoftBody3D::set_pressure(JoltSoftBody3D *this,float param_1)

{
  BodyID *pBVar1;
  
  if (param_1 != *(float *)(this + 0xa4)) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    *(float *)(this + 0xa4) = param_1;
    _update_pressure(this);
    if (((*(long *)(this + 0x28) != 0) && (*(int *)(this + 0x30) != -1)) &&
       (*(long *)(this + 0x88) != 0)) {
      pBVar1 = (BodyID *)JoltSpace3D::get_body_iface();
      JPH::BodyInterface::ActivateBody(pBVar1);
      return;
    }
  }
  return;
}



/* JoltSoftBody3D::set_linear_damping(float) */

void __thiscall JoltSoftBody3D::set_linear_damping(JoltSoftBody3D *this,float param_1)

{
  BodyID *pBVar1;
  
  if (param_1 != *(float *)(this + 0xa8)) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    *(float *)(this + 0xa8) = param_1;
    _update_damping(this);
    if (((*(long *)(this + 0x28) != 0) && (*(int *)(this + 0x30) != -1)) &&
       (*(long *)(this + 0x88) != 0)) {
      pBVar1 = (BodyID *)JoltSpace3D::get_body_iface();
      JPH::BodyInterface::ActivateBody(pBVar1);
      return;
    }
  }
  return;
}



/* JoltSoftBody3D::get_drag() const */

undefined8 JoltSoftBody3D::get_drag(void)

{
  return 0;
}



/* JoltSoftBody3D::set_drag(float) */

void JoltSoftBody3D::set_drag(float param_1)

{
  return;
}



/* JoltSoftBody3D::get_transform() const */

JoltSoftBody3D * __thiscall JoltSoftBody3D::get_transform(JoltSoftBody3D *this)

{
  uint uVar1;
  
  uVar1 = _LC21;
  *(undefined4 *)(this + 0x20) = 0x3f800000;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined1 (*) [16])this = ZEXT416(uVar1);
  *(undefined1 (*) [16])(this + 0x10) = ZEXT416(uVar1);
  return this;
}



/* JoltSoftBody3D::get_state(PhysicsServer3D::BodyState) const */

Variant * JoltSoftBody3D::get_state(Variant *param_1,JoltSoftBody3D *param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  long local_80;
  char *local_78;
  undefined8 local_70;
  Transform3D local_68 [16];
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_3) {
  case 0:
    local_68 = (Transform3D  [16])ZEXT416(_LC21);
    local_48 = 0x3f800000;
    local_44 = 0;
    local_3c = 0;
    local_58 = (undefined1  [16])local_68;
    Variant::Variant(param_1,local_68);
    break;
  case 1:
    pcVar5 = "Linear velocity is not supported for soft bodies.";
    uVar4 = 0x20e;
    goto LAB_00100fac;
  case 2:
    pcVar5 = "Angular velocity is not supported for soft bodies.";
    uVar4 = 0x211;
LAB_00100fac:
    _err_print_error("get_state","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",uVar4,
                     "Method/function failed. Returning: Variant()",pcVar5,0,0);
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
    break;
  case 3:
    bVar3 = (bool)is_sleeping(param_2);
    Variant::Variant(param_1,bVar3);
    break;
  case 4:
    bVar3 = (bool)is_sleep_allowed(param_2);
    Variant::Variant(param_1,bVar3);
    break;
  default:
    local_80 = 0;
    local_78 = "Unhandled body state: \'%d\'. This should not happen. Please report this.";
    local_70 = 0x47;
    String::parse_latin1((StrRange *)&local_80);
    vformat<PhysicsServer3D::BodyState>(&local_78,(StrRange *)&local_80,param_3);
    _err_print_error("get_state","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x21a,
                     "Method/function failed. Returning: Variant()",&local_78,0);
    pcVar5 = local_78;
    if (local_78 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    lVar2 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* JoltSoftBody3D::set_transform(Transform3D const&) */

void JoltSoftBody3D::set_transform(Transform3D *param_1)

{
  long *plVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  char *pcVar6;
  undefined8 uVar7;
  float *pfVar8;
  float *pfVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  long local_f8;
  long local_f0;
  char *local_e8;
  undefined8 local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined8 local_b4;
  float local_ac;
  undefined8 local_78;
  float fStack_70;
  undefined4 uStack_6c;
  code *local_68 [8];
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(param_1 + 0x30) == -1)) ||
     (*(long *)(param_1 + 0x88) == 0)) {
    JoltObject3D::to_string();
    local_e8 = 
    "Failed to set transform for \'%s\'. Doing so without a physics space is not supported when using Jolt Physics. If this relates to a node, try adding the node to a scene tree first."
    ;
    local_e0 = 0xb2;
    local_f0 = 0;
    String::parse_latin1((StrRange *)&local_f0);
    vformat<String>(&local_e8,(StrRange *)&local_f0,&local_f8);
    _err_print_error("set_transform","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x23c,
                     "Condition \"!in_space()\" is true.",&local_e8,0,0);
    pcVar6 = local_e8;
    if (local_e8 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_e8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e8 = (char *)0x0;
        Memory::free_static(pcVar6 + -0x10,false);
      }
    }
    lVar3 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      plVar1 = (long *)(local_f0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_f8;
    if (local_f8 != 0) {
      LOCK();
      plVar1 = (long *)(local_f8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f8 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  }
  else {
    JoltSpace3D::write_body((BodyID *)local_68);
    if (local_28 == 0) {
      _err_print_error("set_transform","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x23f,
                       "Condition \"body.is_invalid()\" is true.",0,0);
      uVar7 = local_78;
    }
    else {
      Transform3D::orthonormalized();
      uStack_6c = 0x3f800000;
      local_78 = local_b4;
      uVar7 = local_78;
      pfVar2 = *(float **)(*(long *)(local_28 + 0x48) + 0x118);
      lVar3 = *(long *)(*(long *)(local_28 + 0x48) + 0x108);
      fStack_70 = local_ac;
      if (pfVar2 + lVar3 * 0x14 != pfVar2) {
        local_78._0_4_ = (float)local_b4;
        local_78._4_4_ = (float)((ulong)local_b4 >> 0x20);
        pfVar8 = pfVar2;
        do {
          fVar13 = pfVar8[4];
          fVar4 = pfVar8[5];
          fVar5 = pfVar8[6];
          *(undefined1 (*) [16])(pfVar8 + 8) = (undefined1  [16])0x0;
          pfVar9 = pfVar8 + 0x14;
          fVar10 = fVar13 * local_d8 + fVar4 * local_d4 + fVar5 * local_d0 + (float)local_78;
          fVar11 = fVar13 * local_cc + fVar4 * local_c8 + fVar5 * local_c4 + local_78._4_4_;
          fVar12 = fVar13 * local_c0 + fVar4 * local_bc + fVar5 * local_b8 + local_ac;
          fVar13 = fVar13 * 0.0 + fVar4 * 0.0 + fVar5 * 0.0 + 1.0;
          *pfVar8 = fVar10;
          pfVar8[1] = fVar11;
          pfVar8[2] = fVar12;
          pfVar8[3] = fVar13;
          pfVar8[4] = fVar10;
          pfVar8[5] = fVar11;
          pfVar8[6] = fVar12;
          pfVar8[7] = fVar13;
          pfVar8 = pfVar9;
        } while (pfVar2 + lVar3 * 0x14 != pfVar9);
      }
    }
    local_78 = uVar7;
    JoltBodyAccessor3D::release();
    local_68[0] = JoltObject3D::_reset_space;
    JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_68);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JoltSoftBody3D::set_state(PhysicsServer3D::BodyState, Variant const&) */

void __thiscall JoltSoftBody3D::set_state(JoltSoftBody3D *this,undefined4 param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
  long in_FS_OFFSET;
  long local_70;
  char *local_68;
  undefined8 local_60;
  Variant local_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_2) {
  case 0:
    Variant::operator_cast_to_Transform3D(local_58);
    set_transform((Transform3D *)this);
    break;
  case 1:
    _err_print_error("set_state","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x225,
                     "Method/function failed.","Linear velocity is not supported for soft bodies.",0
                     ,0);
    break;
  case 2:
    _err_print_error("set_state","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x228,
                     "Method/function failed.","Angular velocity is not supported for soft bodies.",
                     0,0);
    break;
  case 3:
    bVar4 = Variant::operator_cast_to_bool(param_3);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      set_is_sleeping(this,bVar4);
      return;
    }
    goto LAB_001015ee;
  case 4:
    Variant::operator_cast_to_bool(param_3);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      set_is_sleep_allowed(SUB81(this,0));
      return;
    }
    goto LAB_001015ee;
  default:
    local_70 = 0;
    local_60 = 0x47;
    local_68 = "Unhandled body state: \'%d\'. This should not happen. Please report this.";
    String::parse_latin1((StrRange *)&local_70);
    vformat<PhysicsServer3D::BodyState>(&local_68,(StrRange *)&local_70,param_2);
    _err_print_error("set_state","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x231,
                     "Method/function failed.",&local_68,0);
    pcVar3 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
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
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001015ee:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltSoftBody3D::get_bounds() const */

void JoltSoftBody3D::get_bounds(void)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  char *pcVar8;
  long in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  code *local_78 [8];
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(in_RSI + 0x28) == 0) || (*(int *)(in_RSI + 0x30) == -1)) ||
     (*(long *)(in_RSI + 0x88) == 0)) {
    JoltObject3D::to_string();
    local_88 = 
    "Failed to retrieve world bounds of \'%s\'. Doing so without a physics space is not supported when using Jolt Physics. If this relates to a node, try adding the node to a scene tree first."
    ;
    local_80 = 0xb9;
    local_90 = 0;
    String::parse_latin1((StrRange *)&local_90);
    vformat<String>(&local_88,(StrRange *)&local_90,&local_98);
    _err_print_error("get_bounds","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x252,
                     "Condition \"!in_space()\" is true. Returning: AABB()",&local_88,0,0);
    pcVar8 = local_88;
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = (char *)0x0;
        Memory::free_static(pcVar8 + -0x10,false);
      }
    }
    lVar7 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    lVar7 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar1 = (long *)(local_98 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    *in_RDI = 0;
    *(undefined4 *)(in_RDI + 1) = 0;
    *(undefined8 *)((long)in_RDI + 0xc) = 0;
    *(undefined4 *)((long)in_RDI + 0x14) = 0;
  }
  else {
    JoltSpace3D::read_body((BodyID *)local_78);
    if (local_38 == 0) {
      _err_print_error("get_bounds","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x255,
                       "Condition \"body.is_invalid()\" is true. Returning: AABB()",0,0);
      *in_RDI = 0;
      *(undefined4 *)(in_RDI + 1) = 0;
      *(undefined8 *)((long)in_RDI + 0xc) = 0;
      *(undefined4 *)((long)in_RDI + 0x14) = 0;
    }
    else {
      fVar2 = *(float *)(local_38 + 0x30);
      fVar3 = *(float *)(local_38 + 0x20);
      uVar4 = *(undefined4 *)(local_38 + 0x20);
      uVar5 = *(undefined4 *)(local_38 + 0x24);
      uVar6 = *(undefined4 *)(local_38 + 0x28);
      in_RDI[2] = CONCAT44(*(float *)(local_38 + 0x38) - *(float *)(local_38 + 0x28),
                           *(float *)(local_38 + 0x34) - *(float *)(local_38 + 0x24));
      *(undefined4 *)in_RDI = uVar4;
      *(undefined4 *)((long)in_RDI + 4) = uVar5;
      *(undefined4 *)(in_RDI + 1) = uVar6;
      *(float *)((long)in_RDI + 0xc) = fVar2 - fVar3;
    }
    JoltBodyAccessor3D::release();
    local_78[0] = JPH::Body::SetAllowSleeping;
    JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_78);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltSoftBody3D::update_rendering_server(PhysicsServer3DRenderingServerHandler*) */

void __thiscall
JoltSoftBody3D::update_rendering_server
          (JoltSoftBody3D *this,PhysicsServer3DRenderingServerHandler *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint *puVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  float local_a0;
  code *local_88 [8];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(this + 0x28) == 0) || (*(int *)(this + 0x30) == -1)) ||
     (*(long *)(this + 0x88) == 0)) goto LAB_00101c30;
  JoltSpace3D::read_body((BodyID *)local_88);
  if (local_48 == 0) {
    _err_print_error("update_rendering_server","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",
                     0x261,"Condition \"body.is_invalid()\" is true.",0,0);
  }
  else {
    lVar2 = *(long *)(local_48 + 0x48);
    uVar5 = *(uint *)(this + 0x78);
    lVar7 = *(long *)(lVar2 + 0x100);
    uVar13 = (uint)*(undefined8 *)(lVar2 + 0x108);
    if (uVar13 < uVar5) {
LAB_0010193d:
      *(uint *)(this + 0x78) = uVar13;
    }
    else if (uVar5 < uVar13) {
      uVar16 = uVar13 - 1;
      if (*(uint *)(this + 0x7c) < uVar13) {
        uVar5 = uVar16 >> 1 | uVar16;
        uVar5 = uVar5 | uVar5 >> 2;
        uVar5 = uVar5 | uVar5 >> 4;
        uVar5 = uVar5 | uVar5 >> 8;
        uVar5 = (uVar5 | uVar5 >> 0x10) + 1;
        *(uint *)(this + 0x7c) = uVar5;
        lVar10 = Memory::realloc_static(*(void **)(this + 0x80),(ulong)uVar5 * 0xc,false);
        *(long *)(this + 0x80) = lVar10;
        if (lVar10 == 0) {
          _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar5 = *(uint *)(this + 0x78);
        if (uVar13 <= uVar5) goto LAB_0010193d;
      }
      memset((void *)(*(long *)(this + 0x80) + (ulong)uVar5 * 0xc),0,
             ((ulong)(uVar16 - uVar5) * 3 + 3) * 4);
      goto LAB_0010193d;
    }
    uVar4 = _LC47;
    puVar6 = *(uint **)(lVar7 + 0x30);
    puVar17 = puVar6 + *(long *)(lVar7 + 0x20) * 4;
    if (puVar17 != puVar6) {
      lVar7 = *(long *)(lVar2 + 0x118);
      uVar5 = *(uint *)(this + 0x78);
      uVar9 = (ulong)uVar5;
      do {
        uVar18 = (ulong)puVar6[2];
        uVar13 = puVar6[1];
        uVar16 = *puVar6;
        uVar12 = (ulong)uVar16;
        lVar10 = uVar18 * 0x50 + lVar7;
        lVar14 = uVar12 * 0x50 + lVar7;
        uVar11 = (ulong)uVar13;
        fVar20 = (float)*(undefined8 *)(lVar10 + 0x14);
        fVar23 = (float)*(undefined8 *)(lVar14 + 0x14) - fVar20;
        fVar19 = (float)((ulong)*(undefined8 *)(lVar10 + 0x14) >> 0x20);
        lVar15 = uVar11 * 0x50 + lVar7;
        fVar25 = *(float *)(lVar14 + 0x10) - *(float *)(lVar10 + 0x10);
        fVar20 = (float)*(undefined8 *)(lVar15 + 0x14) - fVar20;
        fVar24 = *(float *)(lVar15 + 0x10) - *(float *)(lVar10 + 0x10);
        auVar22._0_4_ =
             (*(float *)(lVar15 + 0x18) - *(float *)(lVar10 + 0x18)) * fVar23 -
             (*(float *)(lVar14 + 0x18) - *(float *)(lVar10 + 0x18)) * fVar20;
        auVar22._4_4_ =
             fVar24 * ((float)((ulong)*(undefined8 *)(lVar14 + 0x14) >> 0x20) - fVar19) -
             fVar25 * ((float)((ulong)*(undefined8 *)(lVar15 + 0x14) >> 0x20) - fVar19);
        auVar22._8_8_ = 0;
        local_a0 = fVar20 * fVar25 - fVar23 * fVar24;
        fVar20 = auVar22._0_4_ * auVar22._0_4_ + auVar22._4_4_ * auVar22._4_4_ + local_a0 * local_a0
        ;
        if (fVar20 == 0.0) {
          local_a8 = 0;
          local_a0 = 0.0;
        }
        else {
          fVar20 = SQRT(fVar20);
          auVar21._4_4_ = fVar20;
          auVar21._0_4_ = fVar20;
          auVar21._8_8_ = uVar4;
          auVar22 = divps(auVar22,auVar21);
          local_a0 = local_a0 / fVar20;
          local_a8 = auVar22._0_8_;
        }
        if (uVar5 <= puVar6[2]) goto LAB_00101caf;
        lVar10 = *(long *)(this + 0x80);
        puVar1 = (undefined8 *)(lVar10 + uVar18 * 0xc);
        *puVar1 = local_a8;
        *(float *)(puVar1 + 1) = local_a0;
        uVar18 = uVar11;
        if (uVar5 <= uVar13) goto LAB_00101caf;
        puVar1 = (undefined8 *)(lVar10 + uVar11 * 0xc);
        *puVar1 = local_a8;
        *(float *)(puVar1 + 1) = local_a0;
        uVar18 = uVar12;
        if (uVar5 <= uVar16) goto LAB_00101caf;
        puVar6 = puVar6 + 4;
        puVar1 = (undefined8 *)(lVar10 + uVar12 * 0xc);
        *puVar1 = local_a8;
        *(float *)(puVar1 + 1) = local_a0;
      } while (puVar17 != puVar6);
    }
    puVar6 = *(uint **)(this + 0x88);
    uVar5 = *puVar6;
    if (0 < (int)uVar5) {
      uVar18 = 0;
      uVar9 = (ulong)uVar5;
      if (uVar5 != 0) {
        do {
          uVar9 = (ulong)*(uint *)(this + 0x78);
          uVar13 = *(uint *)(*(long *)(puVar6 + 2) + uVar18 * 4);
          lVar7 = (long)(int)uVar13 * 0x50 + *(long *)(lVar2 + 0x118);
          local_b8 = *(undefined8 *)(lVar7 + 0x10);
          local_b0 = *(undefined4 *)(lVar7 + 0x18);
          if (*(uint *)(this + 0x78) <= uVar13) {
            uVar18 = (ulong)uVar13;
LAB_00101caf:
            iVar8 = 0xb2;
            goto LAB_00101cb4;
          }
          puVar1 = (undefined8 *)(*(long *)(this + 0x80) + (ulong)uVar13 * 0xc);
          local_a8 = *puVar1;
          local_a0 = *(float *)(puVar1 + 1);
          (**(code **)(*(long *)param_1 + 0x150))(param_1,uVar18 & 0xffffffff,&local_b8);
          uVar9 = uVar18 & 0xffffffff;
          uVar18 = uVar18 + 1;
          (**(code **)(*(long *)param_1 + 0x158))(param_1,uVar9,&local_a8);
          if (uVar5 == uVar18) goto LAB_00101dab;
          puVar6 = *(uint **)(this + 0x88);
          uVar9 = (ulong)*puVar6;
        } while ((uint)uVar18 < *puVar6);
      }
      iVar8 = 0xae;
LAB_00101cb4:
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",iVar8,uVar18,uVar9,"p_index","count"
                 ,"",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
LAB_00101dab:
    pcVar3 = *(code **)(*(long *)param_1 + 0x160);
    get_bounds();
    (*pcVar3)(param_1,&local_a8);
  }
  JoltBodyAccessor3D::release();
  local_88[0] = JPH::Body::SetAllowSleeping;
  JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_88);
LAB_00101c30:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JoltSoftBody3D::get_vertex_position(int) */

undefined1  [16] __thiscall JoltSoftBody3D::get_vertex_position(JoltSoftBody3D *this,int param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  code *pcVar5;
  char *pcVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined1 auVar8 [16];
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  float local_70;
  code *local_68 [8];
  float *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(this + 0x28) == 0) || (*(int *)(this + 0x30) == -1)) ||
     (puVar4 = *(uint **)(this + 0x88), puVar4 == (uint *)0x0)) {
    JoltObject3D::to_string();
    local_88 = 
    "Failed to retrieve point position for \'%s\'. Doing so without a physics space is not supported when using Jolt Physics. If this relates to a node, try adding the node to a scene tree first."
    ;
    local_90 = 0;
    local_80 = 0xbc;
    String::parse_latin1((StrRange *)&local_90);
    vformat<String>(&local_88,(StrRange *)&local_90,&local_98);
    _err_print_error("get_vertex_position","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",
                     0x291,"Condition \"!in_space()\" is true. Returning: Vector3()",&local_88,0);
    pcVar6 = local_88;
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = (char *)0x0;
        Memory::free_static(pcVar6 + -0x10,false);
      }
    }
    lVar7 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    lVar7 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar1 = (long *)(local_98 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    local_78 = 0;
    local_70 = 0.0;
  }
  else {
    uVar2 = *puVar4;
    if ((param_1 < 0) || ((int)uVar2 <= param_1)) {
      _err_print_index_error
                ("get_vertex_position","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x294,
                 (long)param_1,(long)(int)uVar2,"p_index","(int)shared->mesh_to_physics.size()","",
                 false,false);
      local_70 = 0.0;
      local_78 = 0;
    }
    else {
      if (uVar2 <= (uint)param_1) {
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xae,(long)param_1,(ulong)uVar2,
                   "p_index","count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      iVar3 = *(int *)(*(long *)(puVar4 + 2) + (long)param_1 * 4);
      JoltSpace3D::read_body((BodyID *)local_68);
      if (local_28 == (float *)0x0) {
        _err_print_error("get_vertex_position","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",
                         0x298,"Condition \"body.is_invalid()\" is true. Returning: Vector3()",0,0);
        local_70 = 0.0;
        local_78 = 0;
      }
      else {
        lVar7 = (long)iVar3 * 0x50 + *(long *)(*(long *)(local_28 + 0x12) + 0x118);
        local_78 = CONCAT44(local_28[1] + *(float *)(lVar7 + 0x14),
                            *local_28 + *(float *)(lVar7 + 0x10));
        local_70 = local_28[2] + *(float *)(lVar7 + 0x18);
      }
      JoltBodyAccessor3D::release();
      local_68[0] = JPH::Body::SetAllowSleeping;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_68);
    }
  }
  auVar8._8_4_ = local_70;
  auVar8._0_8_ = local_78;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar8._12_4_ = 0;
    return auVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltSoftBody3D::set_vertex_position(int, Vector3 const&) */

void __thiscall
JoltSoftBody3D::set_vertex_position(JoltSoftBody3D *this,int param_1,Vector3 *param_2)

{
  long *plVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  code *pcVar7;
  char *pcVar8;
  long lVar9;
  BodyID *pBVar10;
  long in_FS_OFFSET;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  code *local_78 [8];
  float *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(this + 0x28) == 0) || (*(int *)(this + 0x30) == -1)) ||
     (puVar5 = *(uint **)(this + 0x88), puVar5 == (uint *)0x0)) {
    JoltObject3D::to_string();
    local_88 = 
    "Failed to set point position for \'%s\'. Doing so without a physics space is not supported when using Jolt Physics. If this relates to a node, try adding the node to a scene tree first."
    ;
    local_90 = 0;
    local_80 = 0xb7;
    String::parse_latin1((StrRange *)&local_90);
    vformat<String>(&local_88,(StrRange *)&local_90,&local_98);
    _err_print_error("set_vertex_position","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",
                     0x2a2,"Condition \"!in_space()\" is true.",&local_88,0);
    pcVar8 = local_88;
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = (char *)0x0;
        Memory::free_static(pcVar8 + -0x10,false);
      }
    }
    lVar6 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar1 = (long *)(local_98 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    uVar3 = *puVar5;
    if ((param_1 < 0) || ((int)uVar3 <= param_1)) {
      _err_print_index_error
                ("set_vertex_position","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x2a5,
                 (long)param_1,(long)(int)uVar3,"p_index","(int)shared->mesh_to_physics.size()","",
                 false,false);
    }
    else {
      if (uVar3 <= (uint)param_1) {
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xae,(long)param_1,(ulong)uVar3,
                   "p_index","count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      fVar2 = *(float *)(*(long *)(this + 0x28) + 0x80);
      iVar4 = *(int *)(*(long *)(puVar5 + 2) + (long)param_1 * 4);
      if (fVar2 != 0.0) {
        JoltSpace3D::write_body((BodyID *)local_78);
        if (local_38 == (float *)0x0) {
          _err_print_error("set_vertex_position",
                           "modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x2ae,
                           "Condition \"body.is_invalid()\" is true.",0,0);
        }
        else {
          lVar6 = *(long *)(this + 0x28);
          lVar9 = (long)iVar4 * 0x50 + *(long *)(*(long *)(local_38 + 0x12) + 0x118);
          auVar11._0_4_ = (*(float *)param_2 - *local_38) - *(float *)(lVar9 + 0x10);
          auVar11._4_4_ =
               ((float)((ulong)*(undefined8 *)param_2 >> 0x20) - local_38[1]) -
               *(float *)(lVar9 + 0x14);
          auVar11._8_4_ = (*(float *)(param_2 + 8) - local_38[2]) - *(float *)(lVar9 + 0x18);
          auVar11._12_4_ = (*(float *)(param_2 + 8) - local_38[3]) - *(float *)(lVar9 + 0x1c);
          auVar12._4_4_ = fVar2;
          auVar12._0_4_ = fVar2;
          auVar12._8_4_ = fVar2;
          auVar12._12_4_ = fVar2;
          auVar12 = divps(auVar11,auVar12);
          *(undefined1 (*) [16])(lVar9 + 0x20) = auVar12;
          if (((lVar6 != 0) && (*(int *)(this + 0x30) != -1)) && (*(long *)(this + 0x88) != 0)) {
            pBVar10 = (BodyID *)JoltSpace3D::get_body_iface();
            JPH::BodyInterface::ActivateBody(pBVar10);
          }
        }
        JoltBodyAccessor3D::release();
        local_78[0] = JoltObject3D::_reset_space;
        JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_78);
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JoltSoftBody3D::is_vertex_pinned(int) const */

undefined8 __thiscall JoltSoftBody3D::is_vertex_pinned(JoltSoftBody3D *this,int param_1)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  code *pcVar13;
  char *pcVar14;
  uint uVar15;
  undefined8 uVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(this + 0x28) == 0) || (*(int *)(this + 0x30) == -1)) ||
     (puVar3 = *(uint **)(this + 0x88), puVar3 == (uint *)0x0)) {
    JoltObject3D::to_string();
    local_58 = 
    "Failed retrieve pin status of point for \'%s\'. Doing so without a physics space is not supported when using Jolt Physics. If this relates to a node, try adding the node to a scene tree first."
    ;
    local_50 = 0xbe;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_60);
    vformat<String>(&local_58,(StrRange *)&local_60,&local_68);
    _err_print_error("is_vertex_pinned","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x2d2,
                     "Condition \"!in_space()\" is true. Returning: false",&local_58,0,0);
    pcVar14 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar14 + -0x10,false);
      }
    }
    lVar19 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar19 + -0x10),false);
      }
    }
    lVar19 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar19 + -0x10),false);
      }
    }
  }
  else {
    uVar2 = *puVar3;
    if ((param_1 < 0) || ((int)uVar2 <= param_1)) {
      _err_print_index_error
                ("is_vertex_pinned","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x2d5,
                 (long)param_1,(long)(int)uVar2,"p_index","(int)shared->mesh_to_physics.size()","",
                 false,false);
    }
    else {
      if (uVar2 <= (uint)param_1) {
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xae,(long)param_1,(ulong)uVar2,
                   "p_index","count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar13 = (code *)invalidInstructionException();
        (*pcVar13)();
      }
      if ((*(long *)(this + 0x40) != 0) && (*(int *)(this + 100) != 0)) {
        uVar2 = *(uint *)(*(long *)(puVar3 + 2) + (long)param_1 * 4);
        uVar4 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x60) * 8);
        uVar15 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
        uVar15 = (uVar15 ^ uVar15 >> 0xd) * -0x3d4d51cb;
        uVar22 = uVar15 ^ uVar15 >> 0x10;
        if (uVar15 == uVar15 >> 0x10) {
          uVar22 = 1;
          uVar18 = uVar4;
        }
        else {
          uVar18 = uVar22 * uVar4;
        }
        uVar20 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x60) * 4));
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar20;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar18;
        lVar19 = SUB168(auVar5 * auVar9,8);
        uVar15 = *(uint *)(*(long *)(this + 0x58) + lVar19 * 4);
        iVar17 = SUB164(auVar5 * auVar9,8);
        if (uVar15 != 0) {
          uVar21 = 0;
          do {
            if ((uVar15 == uVar22) &&
               (uVar2 == *(uint *)(*(long *)(this + 0x40) +
                                  (ulong)*(uint *)(*(long *)(this + 0x48) + lVar19 * 4) * 4))) {
              uVar16 = 1;
              goto LAB_001026fa;
            }
            uVar21 = uVar21 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (iVar17 + 1) * uVar4;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar20;
            lVar19 = SUB168(auVar6 * auVar10,8);
            uVar15 = *(uint *)(*(long *)(this + 0x58) + lVar19 * 4);
            iVar17 = SUB164(auVar6 * auVar10,8);
          } while ((uVar15 != 0) &&
                  (auVar7._8_8_ = 0, auVar7._0_8_ = uVar15 * uVar4, auVar11._8_8_ = 0,
                  auVar11._0_8_ = uVar20, auVar8._8_8_ = 0,
                  auVar8._0_8_ = ((*(uint *)(hash_table_size_primes +
                                            (ulong)*(uint *)(this + 0x60) * 4) + iVar17) -
                                 SUB164(auVar7 * auVar11,8)) * uVar4, auVar12._8_8_ = 0,
                  auVar12._0_8_ = uVar20, uVar21 <= SUB164(auVar8 * auVar12,8)));
        }
      }
    }
  }
  uVar16 = 0;
LAB_001026fa:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar16;
}



/* JoltSoftBody3D::_update_mass() */

void __thiscall JoltSoftBody3D::_update_mass(JoltSoftBody3D *this)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  char *pcVar14;
  void *pvVar15;
  long in_FS_OFFSET;
  float fVar16;
  long local_a8;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  code *local_88 [8];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(this + 0x28) == 0) || (*(int *)(this + 0x30) == -1)) ||
     (*(long *)(this + 0x88) == 0)) goto LAB_00102b5c;
  JoltSpace3D::write_body((BodyID *)local_88);
  if (local_48 == 0) {
    _err_print_error("_update_mass","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0xf1,
                     "Condition \"body.is_invalid()\" is true.",0,0);
  }
  else {
    lVar5 = *(long *)(local_48 + 0x48);
    uVar6 = *(ulong *)(lVar5 + 0x108);
    fVar16 = _LC21;
    if (*(float *)(this + 0xa0) != 0.0) {
      fVar16 = (float)uVar6 / *(float *)(this + 0xa0);
    }
    lVar11 = *(long *)(lVar5 + 0x118);
    lVar13 = uVar6 * 0x50 + lVar11;
    if (lVar13 != lVar11) {
      lVar10 = lVar11;
      if (((int)lVar13 - (int)lVar11 & 0x10U) != 0) {
        *(float *)(lVar11 + 0x4c) = fVar16;
        lVar10 = lVar11 + 0x50;
        if (lVar11 + 0x50 == lVar13) goto LAB_001028fd;
      }
      do {
        *(float *)(lVar10 + 0x4c) = fVar16;
        lVar11 = lVar10 + 0xa0;
        *(float *)(lVar10 + 0x9c) = fVar16;
        lVar10 = lVar11;
      } while (lVar11 != lVar13);
    }
LAB_001028fd:
    puVar7 = *(uint **)(this + 0x88);
    iVar2 = *(int *)(this + 100);
    lVar11 = 0;
    puVar8 = *(uint **)(this + 0x40);
    uVar3 = *puVar7;
    if (iVar2 != 0) {
      uVar12 = *puVar8;
      if ((int)uVar12 < 0) goto LAB_0010297d;
      do {
        if ((int)uVar3 <= (int)uVar12) goto LAB_0010297d;
        if (*puVar7 <= uVar12) {
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xae,(ulong)uVar12,
                     (ulong)*puVar7,"p_index","count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        iVar4 = *(int *)(*(long *)(puVar7 + 2) + (long)(int)uVar12 * 4);
        if ((iVar4 < 0) || ((int)uVar6 <= iVar4)) {
          JoltObject3D::to_string();
          local_a0 = 0;
          local_98 = 
          "Index %d of pinned vertex in soft body \'%s\' is out of bounds. There are only %d vertices in the current mesh. This should not happen. Please report this."
          ;
          local_90 = 0x99;
          String::parse_latin1((StrRange *)&local_a0);
          vformat<int,String,int>
                    (&local_98,(StrRange *)&local_a0,iVar4,&local_a8,uVar6 & 0xffffffff);
          _err_print_error("pin_vertices","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x3c,
                           "Condition \"physics_index < 0 || physics_index >= physics_vertex_count\" is true. Continuing."
                           ,&local_98,0,0);
          goto joined_r0x00102caf;
        }
        *(undefined4 *)((long)iVar4 * 0x50 + *(long *)(lVar5 + 0x118) + 0x4c) = 0;
        while( true ) {
          if (iVar2 <= (int)lVar11 + 1) goto LAB_00102b40;
          lVar11 = lVar11 + 1;
          uVar12 = puVar8[lVar11];
          if (-1 < (int)uVar12) break;
LAB_0010297d:
          JoltObject3D::to_string();
          local_a0 = 0;
          local_98 = 
          "Index %d of pinned vertex in soft body \'%s\' is out of bounds. There are only %d vertices in the current mesh."
          ;
          local_90 = 0x6d;
          String::parse_latin1((StrRange *)&local_a0);
          vformat<int,String,int>(&local_98,(StrRange *)&local_a0,uVar12,&local_a8,uVar3);
          _err_print_error("pin_vertices","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x39,
                           "Condition \"mesh_index < 0 || mesh_index >= mesh_vertex_count\" is true. Continuing."
                           ,&local_98,0,0);
joined_r0x00102caf:
          if (local_98 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_98 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              pcVar14 = local_98 + -0x10;
              local_98 = (char *)0x0;
              Memory::free_static(pcVar14,false);
            }
          }
          if (local_a0 != 0) {
            LOCK();
            plVar1 = (long *)(local_a0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              pvVar15 = (void *)(local_a0 + -0x10);
              local_a0 = 0;
              Memory::free_static(pvVar15,false);
            }
          }
          if (local_a8 != 0) {
            LOCK();
            plVar1 = (long *)(local_a8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              pvVar15 = (void *)(local_a8 + -0x10);
              local_a8 = 0;
              Memory::free_static(pvVar15,false);
            }
          }
        }
      } while( true );
    }
  }
LAB_00102b40:
  JoltBodyAccessor3D::release();
  local_88[0] = JoltObject3D::_reset_space;
  JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_88);
LAB_00102b5c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JoltSoftBody3D::_space_changed() */

void __thiscall JoltSoftBody3D::_space_changed(JoltSoftBody3D *this)

{
  _update_mass(this);
  _update_pressure(this);
  _update_damping(this);
  _update_simulation_precision(this);
  _update_group_filter(this);
  return;
}



/* JoltSoftBody3D::_pins_changed() */

void __thiscall JoltSoftBody3D::_pins_changed(JoltSoftBody3D *this)

{
  BodyID *pBVar1;
  
  _update_mass(this);
  if (((*(long *)(this + 0x28) != 0) && (*(int *)(this + 0x30) != -1)) &&
     (*(long *)(this + 0x88) != 0)) {
    pBVar1 = (BodyID *)JoltSpace3D::get_body_iface();
    JPH::BodyInterface::ActivateBody(pBVar1);
    return;
  }
  return;
}



/* JoltSoftBody3D::unpin_vertex(int) */

void __thiscall JoltSoftBody3D::unpin_vertex(JoltSoftBody3D *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
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
  uint uVar30;
  uint uVar31;
  long lVar32;
  uint *puVar33;
  BodyID *pBVar34;
  uint uVar35;
  uint *puVar36;
  int iVar37;
  ulong uVar38;
  long lVar39;
  ulong uVar40;
  uint *puVar41;
  uint uVar42;
  uint *puVar43;
  ulong uVar44;
  ulong uVar45;
  
  lVar5 = *(long *)(this + 0x40);
  if ((lVar5 != 0) && (*(int *)(this + 100) != 0)) {
    uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x60) * 4);
    uVar45 = CONCAT44(0,uVar31);
    uVar6 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x60) * 8);
    uVar30 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar30 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
    uVar42 = uVar30 ^ uVar30 >> 0x10;
    if (uVar30 == uVar30 >> 0x10) {
      uVar42 = 1;
      uVar38 = uVar6;
    }
    else {
      uVar38 = uVar42 * uVar6;
    }
    lVar7 = *(long *)(this + 0x58);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar45;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar38;
    lVar39 = SUB168(auVar10 * auVar20,8);
    uVar30 = *(uint *)(lVar7 + lVar39 * 4);
    iVar37 = SUB164(auVar10 * auVar20,8);
    if (uVar30 != 0) {
      uVar35 = 0;
      do {
        if (uVar42 == uVar30) {
          lVar8 = *(long *)(this + 0x48);
          uVar30 = *(uint *)(lVar8 + lVar39 * 4);
          if (*(int *)(lVar5 + (ulong)uVar30 * 4) == param_1) {
            lVar9 = *(long *)(this + 0x50);
            lVar32 = (ulong)uVar30 * 4;
            puVar33 = (uint *)(lVar32 + lVar9);
            uVar42 = *puVar33;
            uVar38 = (ulong)uVar42;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (uVar42 + 1) * uVar6;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar45;
            lVar39 = SUB168(auVar14 * auVar24,8) * 4;
            uVar35 = SUB164(auVar14 * auVar24,8);
            uVar44 = (ulong)uVar35;
            puVar41 = (uint *)(lVar7 + lVar39);
            if ((*puVar41 == 0) ||
               (auVar15._8_8_ = 0, auVar15._0_8_ = *puVar41 * uVar6, auVar25._8_8_ = 0,
               auVar25._0_8_ = uVar45, auVar16._8_8_ = 0,
               auVar16._0_8_ = ((uVar35 + uVar31) - SUB164(auVar15 * auVar25,8)) * uVar6,
               auVar26._8_8_ = 0, auVar26._0_8_ = uVar45, SUB164(auVar16 * auVar26,8) == 0)) {
              uVar44 = (ulong)uVar42;
            }
            else {
              while( true ) {
                puVar36 = (uint *)(lVar39 + lVar8);
                puVar3 = (uint *)(lVar8 + uVar38 * 4);
                puVar43 = (uint *)(uVar38 * 4 + lVar7);
                puVar1 = (undefined4 *)(lVar9 + (ulong)*puVar36 * 4);
                puVar2 = (undefined4 *)(lVar9 + (ulong)*puVar3 * 4);
                uVar4 = *puVar2;
                *puVar2 = *puVar1;
                *puVar1 = uVar4;
                uVar42 = *puVar41;
                *puVar41 = *puVar43;
                *puVar43 = uVar42;
                uVar42 = *puVar36;
                *puVar36 = *puVar3;
                *puVar3 = uVar42;
                auVar19._8_8_ = 0;
                auVar19._0_8_ = ((int)uVar44 + 1) * uVar6;
                auVar29._8_8_ = 0;
                auVar29._0_8_ = uVar45;
                uVar40 = SUB168(auVar19 * auVar29,8);
                lVar39 = uVar40 * 4;
                puVar41 = (uint *)(lVar7 + lVar39);
                if ((*puVar41 == 0) ||
                   (auVar17._8_8_ = 0, auVar17._0_8_ = *puVar41 * uVar6, auVar27._8_8_ = 0,
                   auVar27._0_8_ = uVar45, auVar18._8_8_ = 0,
                   auVar18._0_8_ =
                        ((SUB164(auVar19 * auVar29,8) + uVar31) - SUB164(auVar17 * auVar27,8)) *
                        uVar6, auVar28._8_8_ = 0, auVar28._0_8_ = uVar45,
                   SUB164(auVar18 * auVar28,8) == 0)) break;
                uVar38 = uVar44;
                uVar44 = uVar40 & 0xffffffff;
              }
            }
            *(undefined4 *)(lVar7 + uVar44 * 4) = 0;
            uVar31 = *(int *)(this + 100) - 1;
            *(uint *)(this + 100) = uVar31;
            if (uVar30 < uVar31) {
              *(undefined4 *)(lVar32 + lVar5) = *(undefined4 *)(lVar5 + (ulong)uVar31 * 4);
              *puVar33 = *(uint *)(lVar9 + (ulong)*(uint *)(this + 100) * 4);
              *(uint *)(lVar8 + (ulong)*(uint *)(lVar9 + (ulong)*(uint *)(this + 100) * 4) * 4) =
                   uVar30;
            }
            break;
          }
        }
        uVar35 = uVar35 + 1;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (iVar37 + 1) * uVar6;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar45;
        lVar39 = SUB168(auVar11 * auVar21,8);
        uVar30 = *(uint *)(lVar7 + lVar39 * 4);
        iVar37 = SUB164(auVar11 * auVar21,8);
      } while ((uVar30 != 0) &&
              (auVar12._8_8_ = 0, auVar12._0_8_ = uVar30 * uVar6, auVar22._8_8_ = 0,
              auVar22._0_8_ = uVar45, auVar13._8_8_ = 0,
              auVar13._0_8_ = ((uVar31 + iVar37) - SUB164(auVar12 * auVar22,8)) * uVar6,
              auVar23._8_8_ = 0, auVar23._0_8_ = uVar45, uVar35 <= SUB164(auVar13 * auVar23,8)));
    }
  }
  _update_mass(this);
  if ((*(long *)(this + 0x28) != 0) &&
     ((*(int *)(this + 0x30) != -1 && (*(long *)(this + 0x88) != 0)))) {
    pBVar34 = (BodyID *)JoltSpace3D::get_body_iface();
    JPH::BodyInterface::ActivateBody(pBVar34);
    return;
  }
  return;
}



/* JoltSoftBody3D::pin_vertex(int) */

void JoltSoftBody3D::pin_vertex(int param_1)

{
  BodyID *pBVar1;
  undefined4 in_register_0000003c;
  JoltSoftBody3D *this;
  long in_FS_OFFSET;
  int local_28 [6];
  long local_10;
  
  this = (JoltSoftBody3D *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert(local_28);
  _update_mass(this);
  if (((*(long *)(this + 0x28) != 0) && (*(int *)(this + 0x30) != -1)) &&
     (*(long *)(this + 0x88) != 0)) {
    pBVar1 = (BodyID *)JoltSpace3D::get_body_iface();
    JPH::BodyInterface::ActivateBody(pBVar1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltSoftBody3D::unpin_all_vertices() */

void __thiscall JoltSoftBody3D::unpin_all_vertices(JoltSoftBody3D *this)

{
  BodyID *pBVar1;
  
  if ((*(long *)(this + 0x40) != 0) && (*(int *)(this + 100) != 0)) {
    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x60) * 4) != 0) {
      memset(*(void **)(this + 0x58),0,
             (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x60) * 4) << 2);
    }
    *(undefined4 *)(this + 100) = 0;
  }
  _update_mass(this);
  if (((*(long *)(this + 0x28) != 0) && (*(int *)(this + 0x30) != -1)) &&
     (*(long *)(this + 0x88) != 0)) {
    pBVar1 = (BodyID *)JoltSpace3D::get_body_iface();
    JPH::BodyInterface::ActivateBody(pBVar1);
    return;
  }
  return;
}



/* JoltSoftBody3D::_deref_shared_data() */

void __thiscall JoltSoftBody3D::_deref_shared_data(JoltSoftBody3D *this)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  SoftBodySharedSettings *this_00;
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
  undefined8 uVar35;
  undefined8 uVar36;
  ulong uVar37;
  long lVar38;
  ulong uVar39;
  long *plVar40;
  ulong uVar41;
  uint uVar42;
  ulong uVar43;
  uint uVar44;
  uint uVar45;
  ulong uVar46;
  uint *puVar47;
  
  uVar36 = mesh_to_shared._16_8_;
  uVar35 = mesh_to_shared._8_8_;
  if (*(long *)(this + 0x88) == 0) {
    return;
  }
  if ((mesh_to_shared._8_8_ != 0) && (mesh_to_shared._44_4_ != 0)) {
    uVar6 = *(uint *)(hash_table_size_primes + (ulong)(uint)mesh_to_shared._40_4_ * 4);
    uVar41 = CONCAT44(0,uVar6);
    lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)mesh_to_shared._40_4_ * 8);
    uVar37 = *(long *)(this + 0x90) * 0x3ffff - 1;
    uVar37 = (uVar37 ^ uVar37 >> 0x1f) * 0x15;
    uVar37 = (uVar37 ^ uVar37 >> 0xb) * 0x41;
    uVar37 = uVar37 >> 0x16 ^ uVar37;
    uVar46 = uVar37 & 0xffffffff;
    if ((int)uVar37 == 0) {
      uVar46 = 1;
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar46 * lVar7;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar41;
    lVar38 = SUB168(auVar9 * auVar22,8);
    uVar42 = *(uint *)(mesh_to_shared._16_8_ + lVar38 * 4);
    uVar45 = SUB164(auVar9 * auVar22,8);
    if (uVar42 != 0) {
      uVar44 = 0;
      while (((uint)uVar46 != uVar42 ||
             (*(long *)(this + 0x90) !=
              *(long *)(*(long *)(mesh_to_shared._8_8_ + lVar38 * 8) + 0x10)))) {
        uVar44 = uVar44 + 1;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)(uVar45 + 1) * lVar7;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar41;
        lVar38 = SUB168(auVar10 * auVar23,8);
        uVar42 = *(uint *)(mesh_to_shared._16_8_ + lVar38 * 4);
        uVar45 = SUB164(auVar10 * auVar23,8);
        if (uVar42 == 0) {
          return;
        }
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (ulong)uVar42 * lVar7;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar41;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)((uVar6 + uVar45) - SUB164(auVar11 * auVar24,8)) * lVar7;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = uVar41;
        if (SUB164(auVar12 * auVar25,8) < uVar44) {
          return;
        }
      }
      lVar38 = *(long *)(mesh_to_shared._8_8_ + (ulong)uVar45 * 8);
      if (lVar38 != 0) {
        piVar1 = (int *)(lVar38 + 0x30);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          uVar37 = *(long *)(lVar38 + 0x10) * 0x3ffff - 1;
          uVar37 = (uVar37 ^ uVar37 >> 0x1f) * 0x15;
          uVar37 = (uVar37 ^ uVar37 >> 0xb) * 0x41;
          uVar37 = uVar37 >> 0x16 ^ uVar37;
          uVar46 = uVar37 & 0xffffffff;
          if ((int)uVar37 == 0) {
            uVar46 = 1;
          }
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar46 * lVar7;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar41;
          uVar37 = SUB168(auVar13 * auVar26,8);
          uVar42 = *(uint *)(uVar36 + uVar37 * 4);
          uVar43 = (ulong)SUB164(auVar13 * auVar26,8);
          if (uVar42 != 0) {
            uVar45 = 0;
            do {
              auVar16._8_8_ = 0;
              auVar16._0_8_ = (ulong)((int)uVar43 + 1) * lVar7;
              auVar29._8_8_ = 0;
              auVar29._0_8_ = uVar41;
              uVar39 = SUB168(auVar16 * auVar29,8);
              uVar44 = SUB164(auVar16 * auVar29,8);
              if (((uint)uVar46 == uVar42) &&
                 (*(long *)(lVar38 + 0x10) == *(long *)(*(long *)(uVar35 + uVar37 * 8) + 0x10))) {
                puVar47 = (uint *)(uVar36 + uVar39 * 4);
                uVar37 = (ulong)uVar44;
                uVar42 = *puVar47;
                if ((uVar42 != 0) &&
                   (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar42 * lVar7, auVar30._8_8_ = 0,
                   auVar30._0_8_ = uVar41, auVar18._8_8_ = 0,
                   auVar18._0_8_ = (ulong)((uVar6 + uVar44) - SUB164(auVar17 * auVar30,8)) * lVar7,
                   auVar31._8_8_ = 0, auVar31._0_8_ = uVar41, SUB164(auVar18 * auVar31,8) != 0)) {
                  while( true ) {
                    puVar2 = (uint *)(uVar36 + uVar43 * 4);
                    *puVar47 = *puVar2;
                    puVar3 = (undefined8 *)(uVar35 + uVar39 * 8);
                    *puVar2 = uVar42;
                    puVar4 = (undefined8 *)(uVar35 + uVar43 * 8);
                    uVar8 = *puVar3;
                    *puVar3 = *puVar4;
                    *puVar4 = uVar8;
                    auVar21._8_8_ = 0;
                    auVar21._0_8_ = (ulong)((int)uVar37 + 1) * lVar7;
                    auVar34._8_8_ = 0;
                    auVar34._0_8_ = uVar41;
                    uVar39 = SUB168(auVar21 * auVar34,8);
                    puVar47 = (uint *)(uVar36 + uVar39 * 4);
                    uVar42 = *puVar47;
                    uVar43 = uVar37;
                    if ((uVar42 == 0) ||
                       (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar42 * lVar7, auVar32._8_8_ = 0,
                       auVar32._0_8_ = uVar41, auVar20._8_8_ = 0,
                       auVar20._0_8_ =
                            (ulong)((SUB164(auVar21 * auVar34,8) + uVar6) -
                                   SUB164(auVar19 * auVar32,8)) * lVar7, auVar33._8_8_ = 0,
                       auVar33._0_8_ = uVar41, SUB164(auVar20 * auVar33,8) == 0)) break;
                    uVar37 = uVar39 & 0xffffffff;
                  }
                }
                plVar5 = (long *)(uVar35 + uVar43 * 8);
                *(undefined4 *)(uVar36 + uVar43 * 4) = 0;
                plVar40 = (long *)*plVar5;
                if ((long *)mesh_to_shared._24_8_ == plVar40) {
                  mesh_to_shared._24_8_ = *plVar40;
                  plVar40 = (long *)*plVar5;
                }
                if ((long *)mesh_to_shared._32_8_ == plVar40) {
                  mesh_to_shared._32_8_ = plVar40[1];
                  plVar40 = (long *)*plVar5;
                }
                if ((long *)plVar40[1] != (long *)0x0) {
                  *(long *)plVar40[1] = *plVar40;
                  plVar40 = (long *)*plVar5;
                }
                if (*plVar40 != 0) {
                  *(long *)(*plVar40 + 8) = plVar40[1];
                  plVar40 = (long *)*plVar5;
                }
                this_00 = (SoftBodySharedSettings *)plVar40[5];
                if (this_00 != (SoftBodySharedSettings *)0x0) {
                  LOCK();
                  *(int *)this_00 = *(int *)this_00 + -1;
                  UNLOCK();
                  if (*(int *)this_00 == 0) {
                    JPH::SoftBodySharedSettings::~SoftBodySharedSettings(this_00);
                    (*JPH::Free)(this_00);
                  }
                }
                if ((void *)plVar40[4] != (void *)0x0) {
                  if ((int)plVar40[3] != 0) {
                    *(undefined4 *)(plVar40 + 3) = 0;
                  }
                  Memory::free_static((void *)plVar40[4],false);
                }
                Memory::free_static(plVar40,false);
                *(undefined8 *)(mesh_to_shared._8_8_ + uVar43 * 8) = 0;
                mesh_to_shared._44_4_ = mesh_to_shared._44_4_ + -1;
                break;
              }
              uVar42 = *(uint *)(uVar36 + uVar39 * 4);
              uVar43 = uVar39 & 0xffffffff;
              uVar45 = uVar45 + 1;
            } while ((uVar42 != 0) &&
                    (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar42 * lVar7, auVar27._8_8_ = 0,
                    auVar27._0_8_ = uVar41, auVar15._8_8_ = 0,
                    auVar15._0_8_ = (ulong)((uVar6 + uVar44) - SUB164(auVar14 * auVar27,8)) * lVar7,
                    auVar28._8_8_ = 0, auVar28._0_8_ = uVar41, uVar37 = uVar39,
                    uVar45 <= SUB164(auVar15 * auVar28,8)));
          }
        }
        *(undefined8 *)(this + 0x88) = 0;
        return;
      }
    }
  }
  return;
}



/* JoltSoftBody3D::set_mesh(RID const&) */

void __thiscall JoltSoftBody3D::set_mesh(JoltSoftBody3D *this,RID *param_1)

{
  if (*(long *)(this + 0x90) == *(long *)param_1) {
    return;
  }
  _deref_shared_data(this);
  *(undefined8 *)(this + 0x90) = *(undefined8 *)param_1;
  if (*(long *)(this + 0x28) != 0) {
    JoltObject3D::_reset_space();
    return;
  }
  return;
}



/* JoltSoftBody3D::~JoltSoftBody3D() */

void __thiscall JoltSoftBody3D::~JoltSoftBody3D(JoltSoftBody3D *this)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  SoftBodySharedSettings *this_00;
  void *pvVar4;
  
  puVar2 = *(undefined8 **)(this + 0x98);
  *(undefined ***)this = &PTR__get_broad_phase_layer_00108850;
  if (puVar2 != (undefined8 *)0x0) {
    plVar3 = (long *)puVar2[8];
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar3 + 0x18))();
      }
    }
    this_00 = (SoftBodySharedSettings *)*puVar2;
    if (this_00 != (SoftBodySharedSettings *)0x0) {
      LOCK();
      *(int *)this_00 = *(int *)this_00 + -1;
      UNLOCK();
      if (*(int *)this_00 == 0) {
        JPH::SoftBodySharedSettings::~SoftBodySharedSettings(this_00);
        (*JPH::Free)(this_00);
      }
    }
    (*JPH::Free)(puVar2);
    *(undefined8 *)(this + 0x98) = 0;
  }
  if (*(void **)(this + 0x80) != (void *)0x0) {
    if (*(int *)(this + 0x78) != 0) {
      *(undefined4 *)(this + 0x78) = 0;
    }
    Memory::free_static(*(void **)(this + 0x80),false);
  }
  if (*(void **)(this + 0x70) != (void *)0x0) {
    if (*(int *)(this + 0x68) != 0) {
      *(undefined4 *)(this + 0x68) = 0;
    }
    Memory::free_static(*(void **)(this + 0x70),false);
  }
  pvVar4 = *(void **)(this + 0x40);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 100) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x60) * 4) != 0) {
        memset(*(void **)(this + 0x58),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x60) * 4) << 2);
      }
      *(undefined4 *)(this + 100) = 0;
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0x50),false);
    Memory::free_static(*(void **)(this + 0x48),false);
    Memory::free_static(*(void **)(this + 0x58),false);
  }
  JoltObject3D::~JoltObject3D((JoltObject3D *)this);
  return;
}



/* JoltSoftBody3D::~JoltSoftBody3D() */

void __thiscall JoltSoftBody3D::~JoltSoftBody3D(JoltSoftBody3D *this)

{
  ~JoltSoftBody3D(this);
  operator_delete(this,0xb8);
  return;
}



/* JoltSoftBody3D::_space_changing() */

void __thiscall JoltSoftBody3D::_space_changing(JoltSoftBody3D *this)

{
  SoftBodySharedSettings *this_00;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  code *local_68 [8];
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _deref_shared_data(this);
  if ((*(long *)(this + 0x28) != 0) && (*(int *)(this + 0x30) != -1)) {
    JoltSpace3D::read_body((BodyID *)local_68);
    if (local_28 == 0) {
      _err_print_error("_space_changing","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x55,
                       "Condition \"body.is_invalid()\" is true.",0,0);
    }
    else {
      puVar1 = (undefined8 *)(*JPH::Allocate)(0x70);
      JPH::Body::GetSoftBodyCreationSettings();
      *(undefined8 **)(this + 0x98) = puVar1;
      this_00 = (SoftBodySharedSettings *)*puVar1;
      if (this_00 != (SoftBodySharedSettings *)0x0) {
        LOCK();
        *(int *)this_00 = *(int *)this_00 + -1;
        UNLOCK();
        if (*(int *)this_00 == 0) {
          JPH::SoftBodySharedSettings::~SoftBodySharedSettings(this_00);
          (*JPH::Free)(this_00);
        }
        *puVar1 = 0;
      }
    }
    JoltBodyAccessor3D::release();
    local_68[0] = JPH::Body::SetAllowSleeping;
    JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_68);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* JoltSoftBody3D::_ref_shared_data() */

undefined8 __thiscall JoltSoftBody3D::_ref_shared_data(JoltSoftBody3D *this)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  OptimizationResults *pOVar5;
  uint *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcVar15;
  undefined8 uVar16;
  int iVar17;
  char cVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  char *pcVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  ulong uVar28;
  uint uVar29;
  int iVar30;
  undefined8 *puVar31;
  Shared *pSVar32;
  ulong uVar33;
  uint uVar34;
  long lVar35;
  int *piVar36;
  long in_FS_OFFSET;
  byte bVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  long local_1b8;
  int local_190;
  JoltSoftBody3D *local_188;
  int local_178;
  Array local_168 [8];
  long local_160;
  Variant local_158 [8];
  long local_150;
  Variant local_148 [8];
  long local_140;
  long local_138 [2];
  float local_128;
  long local_118;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined8 local_f0;
  char *local_e8;
  undefined1 local_e0 [16];
  undefined4 local_d0;
  long local_c0;
  undefined8 local_b8;
  long local_a8;
  undefined8 local_a0;
  long local_90;
  undefined8 local_88;
  long local_78;
  undefined8 local_68;
  undefined4 local_60;
  int local_58 [6];
  long local_40;
  
  bVar37 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((mesh_to_shared._8_8_ != 0) && (mesh_to_shared._44_4_ != 0)) {
    uVar33 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)(uint)mesh_to_shared._40_4_ * 4));
    lVar22 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)mesh_to_shared._40_4_ * 8);
    uVar20 = *(long *)(this + 0x90) * 0x3ffff - 1;
    uVar20 = (uVar20 ^ uVar20 >> 0x1f) * 0x15;
    uVar20 = (uVar20 ^ uVar20 >> 0xb) * 0x41;
    uVar20 = uVar20 >> 0x16 ^ uVar20;
    uVar28 = uVar20 & 0xffffffff;
    if ((int)uVar20 == 0) {
      uVar28 = 1;
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar28 * lVar22;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar33;
    lVar25 = SUB168(auVar7 * auVar11,8);
    uVar29 = *(uint *)(mesh_to_shared._16_8_ + lVar25 * 4);
    uVar19 = SUB164(auVar7 * auVar11,8);
    if (uVar29 != 0) {
      uVar34 = 0;
      while ((uVar29 != (uint)uVar28 ||
             (*(long *)(this + 0x90) !=
              *(long *)(*(long *)(mesh_to_shared._8_8_ + lVar25 * 8) + 0x10)))) {
        uVar34 = uVar34 + 1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)(uVar19 + 1) * lVar22;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar33;
        lVar25 = SUB168(auVar8 * auVar12,8);
        uVar29 = *(uint *)(mesh_to_shared._16_8_ + lVar25 * 4);
        uVar19 = SUB164(auVar8 * auVar12,8);
        if ((uVar29 == 0) ||
           (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar29 * lVar22, auVar13._8_8_ = 0,
           auVar13._0_8_ = uVar33, auVar10._8_8_ = 0,
           auVar10._0_8_ =
                (ulong)((*(uint *)(hash_table_size_primes + (ulong)(uint)mesh_to_shared._40_4_ * 4)
                        + uVar19) - SUB164(auVar9 * auVar13,8)) * lVar22, auVar14._8_8_ = 0,
           auVar14._0_8_ = uVar33, SUB164(auVar10 * auVar14,8) < uVar34)) goto LAB_001039a0;
      }
      lVar22 = *(long *)(mesh_to_shared._8_8_ + (ulong)uVar19 * 8);
      if (lVar22 != 0) {
        *(int *)(lVar22 + 0x30) = *(int *)(lVar22 + 0x30) + 1;
        local_118 = lVar22;
        goto LAB_00103966;
      }
    }
  }
LAB_001039a0:
  uVar21 = RenderingServer::get_singleton();
  RenderingServer::mesh_surface_get_arrays(local_168,uVar21,*(undefined8 *)(this + 0x90),0);
  cVar18 = Array::is_empty();
  if (cVar18 == '\0') {
    iVar30 = (int)local_168;
    Array::operator[](iVar30);
    Variant::operator_cast_to_Vector(local_158);
    if (local_150 == 0) {
      _err_print_error("_ref_shared_data","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x8d,
                       "Condition \"mesh_indices.is_empty()\" is true. Returning: false",0,0);
    }
    else {
      Array::operator[](iVar30);
      Variant::operator_cast_to_Vector(local_148);
      if (local_140 != 0) {
        local_e8 = (char *)0x0;
        local_e0 = (undefined1  [16])0x0;
        local_d0 = 0;
        Shared::Shared((Shared *)&local_e8);
        HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>>>
        ::insert((RID *)&local_118,(Shared *)mesh_to_shared,(bool)((char)this + -0x70));
        uVar21 = local_e0._8_8_;
        if ((SoftBodySharedSettings *)local_e0._8_8_ != (SoftBodySharedSettings *)0x0) {
          LOCK();
          *(int *)local_e0._8_8_ = *(int *)local_e0._8_8_ + -1;
          UNLOCK();
          if (*(int *)local_e0._8_8_ == 0) {
            JPH::SoftBodySharedSettings::~SoftBodySharedSettings
                      ((SoftBodySharedSettings *)local_e0._8_8_);
            (*JPH::Free)(uVar21);
          }
        }
        if ((void *)local_e0._0_8_ != (void *)0x0) {
          Memory::free_static((void *)local_e0._0_8_,false);
        }
        pOVar5 = *(OptimizationResults **)(local_118 + 0x28);
        uVar38 = JoltProjectSettings::get_soft_body_point_radius();
        local_f0 = 2;
        *(undefined4 *)(pOVar5 + 0xe0) = uVar38;
        local_110 = (undefined1  [16])0x0;
        local_100 = (undefined1  [16])0x0;
        if (local_140 == 0) {
          uVar29 = 0;
        }
        else {
          uVar29 = (uint)*(undefined8 *)(local_140 + -8);
        }
        if (local_150 == 0) {
          local_190 = 0;
        }
        else {
          local_190 = *(int *)(local_150 + -8);
        }
        if (uVar29 < *(uint *)(local_118 + 0x18)) {
LAB_00104128:
          *(uint *)(local_118 + 0x18) = uVar29;
        }
        else if (*(uint *)(local_118 + 0x18) < uVar29) {
          if (*(uint *)(local_118 + 0x1c) < uVar29) {
            uVar19 = uVar29 - 1 | uVar29 - 1 >> 1;
            uVar19 = uVar19 | uVar19 >> 2;
            uVar19 = uVar19 >> 4 | uVar19;
            uVar19 = uVar19 | uVar19 >> 8;
            uVar19 = (uVar19 >> 0x10 | uVar19) + 1;
            *(uint *)(local_118 + 0x1c) = uVar19;
            lVar22 = Memory::realloc_static(*(void **)(local_118 + 0x20),(ulong)uVar19 * 4,false);
            *(long *)(local_118 + 0x20) = lVar22;
            if (lVar22 == 0) {
              _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                               "FATAL: Condition \"!data\" is true.","Out of memory",0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar15 = (code *)invalidInstructionException();
              (*pcVar15)();
            }
          }
          goto LAB_00104128;
        }
        uVar20 = (ulong)(int)uVar29;
        if (*(ulong *)(pOVar5 + 0x10) < uVar20) {
          uVar21 = (*JPH::Reallocate)(*(undefined8 *)(pOVar5 + 0x18),
                                      *(ulong *)(pOVar5 + 0x10) * 0x1c,uVar20 * 0x1c);
          *(undefined8 *)(pOVar5 + 0x18) = uVar21;
          *(ulong *)(pOVar5 + 0x10) = uVar20;
        }
        lVar22 = 3;
        if (0x17 < uVar29) {
          do {
            if (uVar29 <= *(uint *)(hash_table_size_primes + lVar22 * 4)) {
              local_f0 = CONCAT44(local_f0._4_4_,(int)lVar22);
              goto LAB_00103b8b;
            }
            lVar22 = lVar22 + 1;
          } while (lVar22 != 0x1d);
          _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                           "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0
                           ,0);
        }
LAB_00103b8b:
        if (0 < local_190) {
          local_1b8 = 0;
          local_178 = 0;
          do {
            lVar25 = 0;
            lVar22 = local_1b8;
            do {
              lVar35 = lVar22;
              if (local_150 == 0) {
                lVar26 = 0;
                goto LAB_00104153;
              }
              lVar26 = *(long *)(local_150 + -8);
              if (lVar26 <= lVar22) goto LAB_00104153;
              uVar29 = *(uint *)(local_150 + lVar22 * 4);
              lVar35 = (long)(int)uVar29;
              if (lVar35 < 0) {
                if (local_140 != 0) {
LAB_00104131:
                  lVar26 = *(long *)(local_140 + -8);
                  goto LAB_00104153;
                }
LAB_00104302:
                lVar26 = 0;
LAB_00104153:
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,lVar35,lVar26,"p_index","size()",
                           "",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar15 = (code *)invalidInstructionException();
                (*pcVar15)();
              }
              if (local_140 == 0) goto LAB_00104302;
              if (*(long *)(local_140 + -8) <= lVar35) goto LAB_00104131;
              puVar31 = (undefined8 *)(local_140 + lVar35 * 0xc);
              local_68 = *puVar31;
              local_60 = *(undefined4 *)(puVar31 + 1);
              local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
              cVar18 = HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
                       ::_lookup_pos((HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
                                      *)&local_118,(Vector3 *)&local_68,(uint *)&local_e8);
              uVar38 = local_60;
              uVar21 = local_68;
              if (cVar18 == '\0') {
LAB_00103c51:
                lVar26 = *(long *)(pOVar5 + 8);
                uVar28 = *(ulong *)(pOVar5 + 0x10);
                uVar20 = lVar26 + 1;
                lVar23 = *(long *)(pOVar5 + 0x18);
                if (uVar28 < uVar20) {
                  if (uVar20 <= uVar28 * 2) {
                    uVar20 = uVar28 * 2;
                  }
                  lVar23 = (*JPH::Reallocate)(lVar23,uVar28 * 0x1c,uVar20 * 0x1c);
                  lVar26 = *(long *)(pOVar5 + 8);
                  *(long *)(pOVar5 + 0x18) = lVar23;
                  *(ulong *)(pOVar5 + 0x10) = uVar20;
                  uVar20 = lVar26 + 1;
                }
                *(ulong *)(pOVar5 + 8) = uVar20;
                puVar31 = (undefined8 *)(lVar23 + lVar26 * 0x1c);
                if (puVar31 != (undefined8 *)0x0) {
                  *(undefined4 *)(puVar31 + 1) = uVar38;
                  uVar16 = _UNK_00108b18;
                  uVar27 = __LC87;
                  *puVar31 = uVar21;
                  *(undefined8 *)((long)puVar31 + 0xc) = uVar27;
                  *(undefined8 *)((long)puVar31 + 0x14) = uVar16;
                }
                local_138[0] = CONCAT44(local_138[0]._4_4_,local_178);
                HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
                ::insert((Vector3 *)&local_e8,(int *)&local_118,SUB81((Vector3 *)&local_68,0));
                pcVar24 = local_e8;
                local_178 = local_178 + 1;
              }
              else {
                pcVar24 = *(char **)(local_110._0_8_ + ((ulong)local_e8 & 0xffffffff) * 8);
                if (pcVar24 == (char *)0x0) goto LAB_00103c51;
              }
              uVar38 = *(undefined4 *)(pcVar24 + 0x1c);
              uVar19 = *(uint *)(local_118 + 0x18);
              *(uint *)((long)local_58 + lVar25 + 0xc) = uVar29;
              iVar17 = local_58[5];
              iVar4 = local_58[4];
              iVar3 = local_58[3];
              *(undefined4 *)((long)local_58 + lVar25) = uVar38;
              iVar30 = local_58[0];
              if (uVar19 <= uVar29) {
                iVar30 = 0xb2;
                goto LAB_00104356;
              }
              lVar25 = lVar25 + 4;
              lVar22 = lVar22 + 1;
              *(undefined4 *)(*(long *)(local_118 + 0x20) + lVar35 * 4) = uVar38;
            } while (lVar25 != 0xc);
            if (((local_58[0] == local_58[1]) ||
                (uVar21 = CONCAT44(local_58[1],local_58[2]), local_58[1] == local_58[2])) ||
               (local_58[0] == local_58[2])) {
              JoltObject3D::to_string();
              local_e8 = 
              "Failed to append face to soft body \'%s\'. Face was found to be degenerate. Face consist of indices %d, %d and %d."
              ;
              local_138[0] = 0;
              local_e0._0_8_ = 0x70;
              String::parse_latin1((StrRange *)local_138);
              vformat<String,int,int,int>
                        ((Shared *)&local_e8,(StrRange *)local_138,&local_160,iVar3,iVar4,iVar17);
              _err_print_error("_ref_shared_data",
                               "modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0xbc,
                               "Condition \"is_face_degenerate(physics_face)\" is true. Continuing."
                               ,(Shared *)&local_e8,0);
              pcVar24 = local_e8;
              if (local_e8 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(local_e8 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_e8 = (char *)0x0;
                  Memory::free_static(pcVar24 + -0x10,false);
                }
              }
              lVar22 = local_138[0];
              if (local_138[0] != 0) {
                LOCK();
                plVar1 = (long *)(local_138[0] + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_138[0] = 0;
                  Memory::free_static((void *)(lVar22 + -0x10),false);
                }
              }
              lVar22 = local_160;
              if (local_160 != 0) {
                LOCK();
                plVar1 = (long *)(local_160 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_160 = 0;
                  Memory::free_static((void *)(lVar22 + -0x10),false);
                }
              }
            }
            else {
              lVar22 = *(long *)(pOVar5 + 0x20);
              uVar28 = *(ulong *)(pOVar5 + 0x28);
              lVar25 = *(long *)(pOVar5 + 0x30);
              uVar20 = lVar22 + 1;
              if (uVar28 < uVar20) {
                if (uVar20 <= uVar28 * 2) {
                  uVar20 = uVar28 * 2;
                }
                lVar25 = (*JPH::Reallocate)(lVar25,uVar28 << 4,uVar20 << 4);
                *(ulong *)(pOVar5 + 0x28) = uVar20;
                *(long *)(pOVar5 + 0x30) = lVar25;
                lVar22 = *(long *)(pOVar5 + 0x20);
                uVar20 = lVar22 + 1;
              }
              *(ulong *)(pOVar5 + 0x20) = uVar20;
              puVar31 = (undefined8 *)(lVar25 + lVar22 * 0x10);
              if (puVar31 != (undefined8 *)0x0) {
                *(int *)(puVar31 + 1) = iVar30;
                *(undefined4 *)((long)puVar31 + 0xc) = 0;
                *puVar31 = uVar21;
              }
            }
            local_1b8 = local_1b8 + 3;
            local_188 = this;
          } while ((int)local_1b8 < local_190);
        }
        puVar6 = *(uint **)(this + 0x40);
        iVar30 = *(int *)(this + 100);
        iVar3 = *(int *)(local_118 + 0x18);
        uVar21 = *(undefined8 *)(pOVar5 + 8);
        if (iVar30 != 0) {
          lVar22 = 0;
          uVar29 = *puVar6;
          if ((int)uVar29 < 0) goto LAB_00103ea1;
          do {
            if (iVar3 <= (int)uVar29) goto LAB_00103ea1;
            uVar19 = *(uint *)(local_118 + 0x18);
            if (uVar19 <= uVar29) {
              iVar30 = 0xae;
LAB_00104356:
              _err_print_index_error
                        ("operator[]","./core/templates/local_vector.h",iVar30,(ulong)uVar29,
                         (ulong)uVar19,"p_index","count","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar15 = (code *)invalidInstructionException();
              (*pcVar15)();
            }
            iVar4 = *(int *)(*(long *)(local_118 + 0x20) + (long)(int)uVar29 * 4);
            if ((iVar4 < 0) || ((int)uVar21 <= iVar4)) {
                    /* WARNING: Ignoring partial resolution of indirect */
              local_188._0_4_ = iVar4;
              JoltObject3D::to_string();
              local_138[0] = 0;
              local_e8 = 
              "Index %d of pinned vertex in soft body \'%s\' is out of bounds. There are only %d vertices in the current mesh. This should not happen. Please report this."
              ;
                    /* WARNING: Ignoring partial resolution of indirect */
              local_e0._0_8_ = 0x99;
              String::parse_latin1((StrRange *)local_138);
              vformat<int,String,int>
                        ((Shared *)&local_e8,(StrRange *)local_138,(uint)local_188,&local_160,
                         (int)uVar21);
              pcVar24 = 
              "Condition \"physics_index < 0 || physics_index >= physics_vertex_count\" is true. Continuing."
              ;
              uVar27 = 0x3c;
              goto LAB_00103f2c;
            }
            *(undefined4 *)(*(long *)(pOVar5 + 0x18) + (long)iVar4 * 0x1c + 0x18) = 0;
            while( true ) {
              if (iVar30 <= (int)lVar22 + 1) goto LAB_001043fc;
              lVar22 = lVar22 + 1;
              uVar29 = puVar6[lVar22];
              if (-1 < (int)uVar29) break;
LAB_00103ea1:
                    /* WARNING: Ignoring partial resolution of indirect */
              local_188._0_4_ = uVar29;
              JoltObject3D::to_string();
              local_138[0] = 0;
              local_e8 = 
              "Index %d of pinned vertex in soft body \'%s\' is out of bounds. There are only %d vertices in the current mesh."
              ;
                    /* WARNING: Ignoring partial resolution of indirect */
              local_e0._0_8_ = 0x6d;
              String::parse_latin1((StrRange *)local_138);
              vformat<int,String,int>
                        ((Shared *)&local_e8,(StrRange *)local_138,(uint)local_188,&local_160,iVar3)
              ;
              pcVar24 = 
              "Condition \"mesh_index < 0 || mesh_index >= mesh_vertex_count\" is true. Continuing."
              ;
              uVar27 = 0x39;
LAB_00103f2c:
              _err_print_error("pin_vertices","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",
                               uVar27,pcVar24,(Shared *)&local_e8,0);
              pcVar24 = local_e8;
              if (local_e8 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(local_e8 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_e8 = (char *)0x0;
                  Memory::free_static(pcVar24 + -0x10,false);
                }
              }
              lVar25 = local_138[0];
              if (local_138[0] != 0) {
                LOCK();
                plVar1 = (long *)(local_138[0] + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_138[0] = 0;
                  Memory::free_static((void *)(lVar25 + -0x10),false);
                }
              }
              lVar25 = local_160;
              if (local_160 != 0) {
                LOCK();
                plVar1 = (long *)(local_160 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_160 = 0;
                  Memory::free_static((void *)(lVar25 + -0x10),false);
                }
              }
            }
          } while( true );
        }
LAB_001043fc:
        fVar39 = powf(*(float *)(this + 0xac),_LC90);
        fVar40 = _LC76;
        if (__LC92 < fVar39 * __LC91) {
          fVar40 = _LC21 / (fVar39 * __LC91);
        }
        local_128 = _LC21;
        local_138[0] = CONCAT44(fVar40,fVar40);
        local_138[1] = 0x7f7fffff;
        JPH::SoftBodySharedSettings::CreateConstraints(pOVar5,local_138,1,0);
        pSVar32 = (Shared *)&local_e8;
        for (lVar22 = 0xf; lVar22 != 0; lVar22 = lVar22 + -1) {
          *(undefined8 *)pSVar32 = 0;
          pSVar32 = pSVar32 + (ulong)bVar37 * -0x10 + 8;
        }
        JPH::SoftBodySharedSettings::Optimize(pOVar5);
        if (local_78 != 0) {
          local_88 = 0;
          (*JPH::Free)();
        }
        if (local_90 != 0) {
          local_a0 = 0;
          (*JPH::Free)();
        }
        if (local_a8 != 0) {
          local_b8 = 0;
          (*JPH::Free)();
        }
        if (local_c0 != 0) {
          local_d0 = 0;
          (*JPH::Free)();
        }
        if (local_e0._8_8_ != 0) {
          local_e8 = (char *)0x0;
          (*JPH::Free)();
        }
        uVar21 = local_110._0_8_;
        if ((undefined8 *)local_110._0_8_ != (undefined8 *)0x0) {
          uVar27 = local_110._8_8_;
          if ((local_f0._4_4_ != 0) &&
             (*(uint *)(hash_table_size_primes + (local_f0 & 0xffffffff) * 4) != 0)) {
            piVar2 = (int *)(local_110._8_8_ +
                            (ulong)*(uint *)(hash_table_size_primes + (local_f0 & 0xffffffff) * 4) *
                            4);
            piVar36 = (int *)local_110._8_8_;
            puVar31 = (undefined8 *)local_110._0_8_;
            do {
              if (*piVar36 != 0) {
                *piVar36 = 0;
                Memory::free_static((void *)*puVar31,false);
                *puVar31 = 0;
              }
              piVar36 = piVar36 + 1;
              puVar31 = puVar31 + 1;
            } while (piVar36 != piVar2);
          }
          Memory::free_static((void *)uVar21,false);
          Memory::free_static((void *)uVar27,false);
        }
        lVar22 = local_140;
        if (local_140 != 0) {
          LOCK();
          plVar1 = (long *)(local_140 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_140 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        lVar22 = local_150;
        if (local_150 != 0) {
          LOCK();
          plVar1 = (long *)(local_150 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_150 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        Array::~Array(local_168);
LAB_00103966:
        uVar21 = 1;
        *(long *)(this + 0x88) = local_118 + 0x18;
        goto LAB_00103976;
      }
      _err_print_error("_ref_shared_data","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x90,
                       "Condition \"mesh_vertices.is_empty()\" is true. Returning: false",0,0);
      lVar22 = local_140;
      if (local_140 != 0) {
        LOCK();
        plVar1 = (long *)(local_140 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_140 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
    }
    lVar22 = local_150;
    if (local_150 != 0) {
      LOCK();
      plVar1 = (long *)(local_150 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_150 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
  }
  else {
    _err_print_error("_ref_shared_data","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x8a,
                     "Condition \"mesh_data.is_empty()\" is true. Returning: false",0,0);
  }
  Array::~Array(local_168);
  uVar21 = 0;
LAB_00103976:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar21;
}



/* JoltSoftBody3D::_add_to_space() */

void __thiscall JoltSoftBody3D::_add_to_space(JoltSoftBody3D *this)

{
  long *plVar1;
  long lVar2;
  SoftBodySharedSettings *this_00;
  long *plVar3;
  JoltObject3D *pJVar4;
  undefined8 uVar5;
  char cVar6;
  undefined2 uVar7;
  int iVar8;
  SoftBodySharedSettings *pSVar9;
  undefined8 *puVar10;
  long lVar11;
  long in_FS_OFFSET;
  undefined4 uVar12;
  uint local_38;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x28) != 0) && (*(long *)(this + 0x90) != 0)) {
    cVar6 = _ref_shared_data(this);
    if (cVar6 == '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("_add_to_space","modules/jolt_physics/objects/jolt_soft_body_3d.cpp",0x6c,
                         "Condition \"!has_valid_shared\" is true.",0,0);
        return;
      }
      goto LAB_001049af;
    }
    local_38 = 0;
    local_34 = 0;
    JoltGroupFilter::encode_object((JoltObject3D *)this,&local_38,&local_34);
    lVar2 = *(long *)(this + 0x88);
    puVar10 = *(undefined8 **)(this + 0x98);
    pSVar9 = *(SoftBodySharedSettings **)(lVar2 + 0x10);
    this_00 = (SoftBodySharedSettings *)*puVar10;
    if (this_00 != pSVar9) {
      if (this_00 != (SoftBodySharedSettings *)0x0) {
        LOCK();
        *(int *)this_00 = *(int *)this_00 + -1;
        UNLOCK();
        if (*(int *)this_00 == 0) {
          JPH::SoftBodySharedSettings::~SoftBodySharedSettings(this_00);
          (*JPH::Free)(this_00);
        }
        pSVar9 = *(SoftBodySharedSettings **)(lVar2 + 0x10);
      }
      *puVar10 = pSVar9;
      if (pSVar9 != (SoftBodySharedSettings *)0x0) {
        LOCK();
        *(int *)pSVar9 = *(int *)pSVar9 + 1;
        UNLOCK();
      }
      puVar10 = *(undefined8 **)(this + 0x98);
    }
    puVar10[6] = this;
    uVar7 = _get_object_layer(this);
    uVar5 = CONCAT44(local_34,local_38);
    *(undefined2 *)(puVar10 + 7) = uVar7;
    lVar2 = *(long *)(this + 0x98);
    plVar3 = *(long **)(lVar2 + 0x40);
    lVar11 = lVar2;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar3 + 0x18))();
      }
      *(undefined8 *)(lVar2 + 0x40) = 0;
      lVar11 = *(long *)(this + 0x98);
    }
    *(undefined8 *)(lVar2 + 0x48) = uVar5;
    uVar12 = JoltProjectSettings::get_max_linear_velocity();
    pJVar4 = *(JoltObject3D **)(this + 0x28);
    uVar5 = *(undefined8 *)(this + 0x98);
    *(undefined4 *)(lVar11 + 0x58) = uVar12;
    iVar8 = JoltSpace3D::add_soft_body(pJVar4,(SoftBodyCreationSettings *)this,SUB81(uVar5,0));
    if (iVar8 != -1) {
      puVar10 = *(undefined8 **)(this + 0x98);
      *(int *)(this + 0x30) = iVar8;
      if (puVar10 != (undefined8 *)0x0) {
        plVar3 = (long *)puVar10[8];
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar3 + 0x18))();
          }
        }
        pSVar9 = (SoftBodySharedSettings *)*puVar10;
        if (pSVar9 != (SoftBodySharedSettings *)0x0) {
          LOCK();
          *(int *)pSVar9 = *(int *)pSVar9 + -1;
          UNLOCK();
          if (*(int *)pSVar9 == 0) {
            JPH::SoftBodySharedSettings::~SoftBodySharedSettings(pSVar9);
            (*JPH::Free)(pSVar9);
          }
        }
        (*JPH::Free)(puVar10);
      }
      *(undefined8 *)(this + 0x98) = 0;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001049af:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltSoftBody3D::can_interact_with(JoltArea3D const&) const */

void __thiscall JoltSoftBody3D::can_interact_with(JoltSoftBody3D *this,JoltArea3D *param_1)

{
  JoltArea3D::can_interact_with((JoltSoftBody3D *)param_1);
  return;
}



/* JoltObject3D::pre_step(float, JPH::Body&) */

void JoltObject3D::pre_step(float param_1,Body *param_2)

{
  return;
}



/* JoltSoftBody3D::reports_contacts() const */

undefined8 JoltSoftBody3D::reports_contacts(void)

{
  return 0;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x00104a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JoltSoftBody3D::Shared::Shared() */

void __thiscall JoltSoftBody3D::Shared::Shared(Shared *this)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  byte bVar11;
  
  bVar11 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  piVar4 = (int *)(*JPH::Allocate)(0x130);
  plVar3 = JPH::PhysicsMaterial::sDefault;
  piVar10 = piVar4;
  for (lVar8 = 0x26; lVar8 != 0; lVar8 = lVar8 + -1) {
    piVar10[0] = 0;
    piVar10[1] = 0;
    piVar10 = piVar10 + (ulong)bVar11 * -4 + 2;
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  piVar4[0x36] = 0;
  piVar4[0x37] = 0;
  *(undefined1 (*) [16])(piVar4 + 0x32) = (undefined1  [16])0x0;
  puVar5 = (undefined8 *)(*JPH::Allocate)(8);
  puVar9 = *(undefined8 **)(piVar4 + 0x36);
  if (puVar9 != (undefined8 *)0x0) {
    lVar8 = *(long *)(piVar4 + 0x32);
    if (puVar5 < puVar9) {
      for (puVar6 = puVar5; puVar6 < puVar5 + lVar8; puVar6 = puVar6 + 1) {
        uVar2 = *puVar9;
        puVar9 = puVar9 + 1;
        *puVar6 = uVar2;
      }
    }
    else {
      puVar9 = puVar9 + lVar8 + -1;
      puVar6 = puVar5 + lVar8 + -1;
      if (!CARRY8(lVar8 * 8 - 8,(ulong)puVar5)) {
        do {
          uVar2 = *puVar9;
          puVar7 = puVar6 + -1;
          puVar9 = puVar9 + -1;
          *puVar6 = uVar2;
          puVar6 = puVar7;
        } while (puVar5 <= puVar7);
      }
    }
    (*JPH::Free)();
  }
  lVar8 = *(long *)(piVar4 + 0x32);
  *(undefined8 **)(piVar4 + 0x36) = puVar5;
  piVar4[0x34] = 1;
  piVar4[0x35] = 0;
  *(long *)(piVar4 + 0x32) = lVar8 + 1;
  puVar5[lVar8] = plVar3;
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (*(code **)(*plVar3 + 0x18) == JPH::PhysicsMaterial::~PhysicsMaterial) {
        (*JPH::Free)();
      }
      else {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
  }
  piVar4[0x38] = 0;
  piVar4[0x3e] = 0;
  piVar4[0x3f] = 0;
  piVar4[0x44] = 0;
  piVar4[0x45] = 0;
  piVar4[0x4a] = 0;
  piVar4[0x4b] = 0;
  *(undefined1 (*) [16])(piVar4 + 0x3a) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(piVar4 + 0x40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(piVar4 + 0x46) = (undefined1  [16])0x0;
  *(int **)(this + 0x10) = piVar4;
  LOCK();
  *piVar4 = *piVar4 + 1;
  UNLOCK();
  *(undefined4 *)(this + 0x18) = 1;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00105a50) */
/* WARNING: Removing unreachable block (ram,0x00105b80) */
/* WARNING: Removing unreachable block (ram,0x00105cf8) */
/* WARNING: Removing unreachable block (ram,0x00105b8c) */
/* WARNING: Removing unreachable block (ram,0x00105b96) */
/* WARNING: Removing unreachable block (ram,0x00105cda) */
/* WARNING: Removing unreachable block (ram,0x00105ba2) */
/* WARNING: Removing unreachable block (ram,0x00105bac) */
/* WARNING: Removing unreachable block (ram,0x00105cbc) */
/* WARNING: Removing unreachable block (ram,0x00105bb8) */
/* WARNING: Removing unreachable block (ram,0x00105bc2) */
/* WARNING: Removing unreachable block (ram,0x00105c9e) */
/* WARNING: Removing unreachable block (ram,0x00105bce) */
/* WARNING: Removing unreachable block (ram,0x00105bd8) */
/* WARNING: Removing unreachable block (ram,0x00105c80) */
/* WARNING: Removing unreachable block (ram,0x00105be4) */
/* WARNING: Removing unreachable block (ram,0x00105bee) */
/* WARNING: Removing unreachable block (ram,0x00105c62) */
/* WARNING: Removing unreachable block (ram,0x00105bf6) */
/* WARNING: Removing unreachable block (ram,0x00105c00) */
/* WARNING: Removing unreachable block (ram,0x00105c47) */
/* WARNING: Removing unreachable block (ram,0x00105c08) */
/* WARNING: Removing unreachable block (ram,0x00105c1d) */
/* WARNING: Removing unreachable block (ram,0x00105c29) */
/* String vformat<String, int, int, int>(String const&, String const, int const, int const, int
   const) */

undefined8 *
vformat<String,int,int,int>
          (undefined8 *param_1,bool *param_2,String_conflict *param_3,int param_4,int param_5,
          int param_6)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_108 [8];
  undefined8 local_100 [9];
  Variant local_b8 [24];
  Variant local_a0 [24];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_b8,param_3);
  Variant::Variant(local_a0,param_4);
  Variant::Variant(local_88,param_5);
  iVar2 = 0;
  Variant::Variant(local_70,param_6);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_108);
  iVar4 = (int)local_108;
  Array::resize(iVar4);
  pVVar3 = local_b8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 4);
  String::sprintf((Array *)local_100,param_2);
  *param_1 = local_100[0];
  pVVar3 = (Variant *)local_40;
  Array::~Array(local_108);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_b8);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00105e38) */
/* WARNING: Removing unreachable block (ram,0x00105f68) */
/* WARNING: Removing unreachable block (ram,0x00106130) */
/* WARNING: Removing unreachable block (ram,0x00105f74) */
/* WARNING: Removing unreachable block (ram,0x00105f7e) */
/* WARNING: Removing unreachable block (ram,0x00106110) */
/* WARNING: Removing unreachable block (ram,0x00105f8a) */
/* WARNING: Removing unreachable block (ram,0x00105f94) */
/* WARNING: Removing unreachable block (ram,0x001060f0) */
/* WARNING: Removing unreachable block (ram,0x00105fa0) */
/* WARNING: Removing unreachable block (ram,0x00105faa) */
/* WARNING: Removing unreachable block (ram,0x001060d0) */
/* WARNING: Removing unreachable block (ram,0x00105fb6) */
/* WARNING: Removing unreachable block (ram,0x00105fc0) */
/* WARNING: Removing unreachable block (ram,0x001060b0) */
/* WARNING: Removing unreachable block (ram,0x00105fcc) */
/* WARNING: Removing unreachable block (ram,0x00105fd6) */
/* WARNING: Removing unreachable block (ram,0x00106090) */
/* WARNING: Removing unreachable block (ram,0x00105fe2) */
/* WARNING: Removing unreachable block (ram,0x00105fec) */
/* WARNING: Removing unreachable block (ram,0x00106070) */
/* WARNING: Removing unreachable block (ram,0x00105ff4) */
/* WARNING: Removing unreachable block (ram,0x0010600a) */
/* WARNING: Removing unreachable block (ram,0x00106016) */
/* String vformat<PhysicsServer3D::BodyState>(String const&, PhysicsServer3D::BodyState const) */

undefined8 * vformat<PhysicsServer3D::BodyState>(undefined8 *param_1,bool *param_2,int param_3)

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



/* WARNING: Removing unreachable block (ram,0x00106298) */
/* WARNING: Removing unreachable block (ram,0x001063c8) */
/* WARNING: Removing unreachable block (ram,0x00106590) */
/* WARNING: Removing unreachable block (ram,0x001063d4) */
/* WARNING: Removing unreachable block (ram,0x001063de) */
/* WARNING: Removing unreachable block (ram,0x00106570) */
/* WARNING: Removing unreachable block (ram,0x001063ea) */
/* WARNING: Removing unreachable block (ram,0x001063f4) */
/* WARNING: Removing unreachable block (ram,0x00106550) */
/* WARNING: Removing unreachable block (ram,0x00106400) */
/* WARNING: Removing unreachable block (ram,0x0010640a) */
/* WARNING: Removing unreachable block (ram,0x00106530) */
/* WARNING: Removing unreachable block (ram,0x00106416) */
/* WARNING: Removing unreachable block (ram,0x00106420) */
/* WARNING: Removing unreachable block (ram,0x00106510) */
/* WARNING: Removing unreachable block (ram,0x0010642c) */
/* WARNING: Removing unreachable block (ram,0x00106436) */
/* WARNING: Removing unreachable block (ram,0x001064f0) */
/* WARNING: Removing unreachable block (ram,0x00106442) */
/* WARNING: Removing unreachable block (ram,0x0010644c) */
/* WARNING: Removing unreachable block (ram,0x001064d0) */
/* WARNING: Removing unreachable block (ram,0x00106454) */
/* WARNING: Removing unreachable block (ram,0x0010646a) */
/* WARNING: Removing unreachable block (ram,0x00106476) */
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<int, HashMapHasherDefault, HashMapComparatorDefault<int> >::insert(int const&) */

undefined1  [16]
HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
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
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  uint *puVar37;
  int iVar38;
  uint *in_RDX;
  long lVar39;
  ulong uVar40;
  uint uVar41;
  long *in_RSI;
  uint uVar42;
  ulong uVar43;
  undefined4 uVar44;
  ulong uVar45;
  uint uVar46;
  uint *puVar47;
  undefined1 auVar48 [16];
  long *plStack_98;
  
  lVar34 = *in_RSI;
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (lVar34 == 0) {
    uVar33 = (ulong)uVar30 * 4;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar30 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    uVar31 = *in_RDX;
    uVar42 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RSI;
    if (lVar34 != 0) goto LAB_001066ba;
  }
  else {
    uVar31 = *in_RDX;
    uVar42 = *(uint *)((long)in_RSI + 0x24);
LAB_001066ba:
    if (uVar42 != 0) {
      uVar33 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar29 = (uVar31 >> 0x10 ^ uVar31) * -0x7a143595;
      uVar29 = (uVar29 ^ uVar29 >> 0xd) * -0x3d4d51cb;
      uVar41 = uVar29 ^ uVar29 >> 0x10;
      if (uVar29 == uVar29 >> 0x10) {
        uVar41 = 1;
        uVar40 = uVar33;
      }
      else {
        uVar40 = uVar41 * uVar33;
      }
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4));
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar43;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar40;
      lVar39 = SUB168(auVar5 * auVar17,8);
      iVar38 = SUB164(auVar5 * auVar17,8);
      uVar29 = *(uint *)(in_RSI[3] + lVar39 * 4);
      uVar40 = (ulong)uVar29;
      if (uVar29 != 0) {
        uVar29 = 0;
        do {
          if (uVar41 == (uint)uVar40) {
            uVar32 = *(uint *)(in_RSI[1] + lVar39 * 4);
            plStack_98 = (long *)(ulong)uVar32;
            if (*(uint *)(lVar34 + (long)plStack_98 * 4) == uVar31) goto LAB_001067af;
          }
          uVar29 = uVar29 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (iVar38 + 1) * uVar33;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar43;
          lVar39 = SUB168(auVar6 * auVar18,8);
          uVar32 = *(uint *)(in_RSI[3] + lVar39 * 4);
          uVar40 = (ulong)uVar32;
          iVar38 = SUB164(auVar6 * auVar18,8);
        } while ((uVar32 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar40 * uVar33, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar43, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4
                                          ) + iVar38) - SUB164(auVar7 * auVar19,8)) * uVar33,
                auVar20._8_8_ = 0, auVar20._0_8_ = uVar43, uVar29 <= SUB164(auVar8 * auVar20,8)));
      }
    }
  }
  if ((float)uVar30 * __LC62 < (float)(uVar42 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      plStack_98 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar42 = *(uint *)((long)in_RSI + 0x24);
      lVar34 = *in_RSI;
      uVar32 = 0xffffffff;
      goto LAB_001067af;
    }
    uVar30 = (int)in_RSI[4] + 1;
    uVar33 = (ulong)uVar30;
    if (uVar30 < 2) {
      uVar33 = 2;
    }
    uVar30 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    *(int *)(in_RSI + 4) = (int)uVar33;
    pvVar1 = (void *)in_RSI[3];
    uVar33 = (ulong)uVar30 << 2;
    pvVar2 = (void *)in_RSI[2];
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::realloc_static((void *)*in_RSI,uVar33,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::realloc_static((void *)in_RSI[1],uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar30 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar33 = 0;
      lVar39 = in_RSI[3];
      lVar3 = in_RSI[2];
      do {
        uVar45 = uVar33 & 0xffffffff;
        uVar44 = (undefined4)uVar33;
        uVar29 = 0;
        uVar30 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar33 * 4) * 4);
        uVar40 = (ulong)uVar30;
        lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        uVar42 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar43 = CONCAT44(0,uVar42);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar40 * lVar35;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar43;
        lVar36 = SUB168(auVar9 * auVar21,8) * 4;
        iVar38 = SUB164(auVar9 * auVar21,8);
        puVar47 = (uint *)(lVar39 + lVar36);
        uVar31 = *puVar47;
        if (uVar31 == 0) {
          lVar35 = uVar33 * 4;
        }
        else {
          do {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar31 * lVar35;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar43;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar42 + iVar38) - SUB164(auVar10 * auVar22,8)) * lVar35;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar43;
            uVar30 = SUB164(auVar11 * auVar23,8);
            if (uVar30 < uVar29) {
              *(int *)(lVar3 + uVar45 * 4) = iVar38;
              uVar31 = *puVar47;
              *puVar47 = (uint)uVar40;
              uVar29 = *(uint *)(lVar36 + lVar34);
              uVar40 = (ulong)uVar31;
              *(uint *)(lVar36 + lVar34) = (uint)uVar45;
              uVar45 = (ulong)uVar29;
              uVar29 = uVar30;
            }
            uVar44 = (undefined4)uVar45;
            uVar30 = (uint)uVar40;
            uVar29 = uVar29 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar38 + 1) * lVar35;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar43;
            lVar36 = SUB168(auVar12 * auVar24,8) * 4;
            iVar38 = SUB164(auVar12 * auVar24,8);
            puVar47 = (uint *)(lVar39 + lVar36);
            uVar31 = *puVar47;
          } while (uVar31 != 0);
          lVar35 = uVar45 << 2;
        }
        *puVar47 = uVar30;
        uVar33 = uVar33 + 1;
        *(int *)(lVar3 + lVar35) = iVar38;
        *(undefined4 *)(lVar34 + lVar36) = uVar44;
      } while ((uint)uVar33 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
    uVar42 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RSI;
    uVar31 = *in_RDX;
  }
  uVar30 = (uVar31 >> 0x10 ^ uVar31) * -0x7a143595;
  uVar29 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
  uVar30 = uVar29 ^ uVar29 >> 0x10;
  if (uVar29 == uVar29 >> 0x10) {
    uVar33 = 1;
    uVar30 = 1;
  }
  else {
    uVar33 = (ulong)uVar30;
  }
  uVar41 = 0;
  *(uint *)(lVar34 + (ulong)uVar42 * 4) = uVar31;
  lVar3 = in_RSI[3];
  uVar42 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar40 = CONCAT44(0,uVar42);
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar33 * lVar36;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar40;
  lVar39 = SUB168(auVar13 * auVar25,8) * 4;
  iVar38 = SUB164(auVar13 * auVar25,8);
  lVar35 = in_RSI[2];
  puVar47 = (uint *)(lVar3 + lVar39);
  lVar4 = in_RSI[1];
  uVar31 = *puVar47;
  uVar29 = *(uint *)((long)in_RSI + 0x24);
  plStack_98 = in_RSI;
  while (uVar31 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar31 * lVar36;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar40;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar42 + iVar38) - SUB164(auVar14 * auVar26,8)) * lVar36;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar40;
    uVar31 = SUB164(auVar15 * auVar27,8);
    uVar32 = uVar30;
    uVar46 = uVar29;
    if (uVar31 < uVar41) {
      puVar37 = (uint *)(lVar39 + lVar4);
      *(int *)(lVar35 + (ulong)uVar29 * 4) = iVar38;
      uVar32 = *puVar47;
      *puVar47 = uVar30;
      uVar46 = *puVar37;
      *puVar37 = uVar29;
      uVar41 = uVar31;
    }
    uVar41 = uVar41 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar38 + 1) * lVar36;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    plStack_98 = SUB168(auVar16 * auVar28,8);
    lVar39 = (long)plStack_98 * 4;
    iVar38 = SUB164(auVar16 * auVar28,8);
    puVar47 = (uint *)(lVar3 + lVar39);
    uVar29 = uVar46;
    uVar30 = uVar32;
    uVar31 = *puVar47;
  }
  *puVar47 = uVar30;
  *(int *)(lVar35 + (ulong)uVar29 * 4) = iVar38;
  *(uint *)(lVar4 + lVar39) = uVar29;
  uVar32 = *(uint *)((long)in_RSI + 0x24);
  uVar42 = uVar32 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar42;
LAB_001067af:
  param_1[3] = uVar32;
  *(long *)param_1 = lVar34;
  param_1[2] = uVar42;
  auVar48._8_8_ = plStack_98;
  auVar48._0_8_ = param_1;
  return auVar48;
}



/* HashMap<Vector3, int, HashMapHasherDefault, HashMapComparatorDefault<Vector3>,
   DefaultTypedAllocator<HashMapElement<Vector3, int> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
::_resize_and_rehash
          (HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)param_1 * 4);
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* HashMap<Vector3, int, HashMapHasherDefault, HashMapComparatorDefault<Vector3>,
   DefaultTypedAllocator<HashMapElement<Vector3, int> > >::_lookup_pos(Vector3 const&, unsigned
   int&) const */

undefined8 __thiscall
HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
::_lookup_pos(HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
              *this,Vector3 *param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  
  if (*(long *)(this + 8) != 0) {
    if (*(int *)(this + 0x2c) == 0) {
      return 0;
    }
    fVar1 = *(float *)param_1;
    uVar4 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar13 = 0x3413905a;
    if ((fVar1 != 0.0) && (uVar13 = 0x22afa5cc, !NAN(fVar1))) {
      uVar13 = ((int)fVar1 * 0x16a88000 | (uint)((int)fVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               0x7f07c65;
      uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
    }
    fVar2 = *(float *)(param_1 + 4);
    if (fVar2 != 0.0) {
      if (NAN(fVar2)) {
        uVar13 = uVar13 ^ 0x2db3efa0;
      }
      else {
        uVar13 = uVar13 ^ ((int)fVar2 * 0x16a88000 | (uint)((int)fVar2 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = *(float *)(param_1 + 8);
    uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar13 = uVar13 ^ 0x2db3efa0;
      }
      else {
        uVar13 = uVar13 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
    uVar13 = (uVar13 >> 0x10 ^ uVar13) * -0x7a143595;
    uVar13 = (uVar13 ^ uVar13 >> 0xd) * -0x3d4d51cb;
    uVar19 = uVar13 ^ uVar13 >> 0x10;
    if (uVar13 == uVar13 >> 0x10) {
      uVar19 = 1;
      uVar15 = uVar4;
    }
    else {
      uVar15 = uVar19 * uVar4;
    }
    uVar17 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar17;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar15;
    lVar16 = SUB168(auVar5 * auVar9,8);
    uVar13 = *(uint *)(*(long *)(this + 0x10) + lVar16 * 4);
    uVar14 = SUB164(auVar5 * auVar9,8);
    if (uVar13 != 0) {
      uVar18 = 0;
      do {
        if (uVar19 == uVar13) {
          lVar16 = *(long *)(*(long *)(this + 8) + lVar16 * 8);
          if ((((fVar1 == *(float *)(lVar16 + 0x10)) ||
               ((NAN(*(float *)(lVar16 + 0x10)) && (NAN(fVar1))))) &&
              ((fVar2 == *(float *)(lVar16 + 0x14) ||
               ((NAN(*(float *)(lVar16 + 0x14)) && (NAN(fVar2))))))) &&
             ((fVar3 == *(float *)(lVar16 + 0x18) ||
              ((NAN(fVar3) && (NAN(*(float *)(lVar16 + 0x18)))))))) {
            *param_2 = uVar14;
            return 1;
          }
        }
        uVar18 = uVar18 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (uVar14 + 1) * uVar4;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar17;
        lVar16 = SUB168(auVar6 * auVar10,8);
        uVar13 = *(uint *)(*(long *)(this + 0x10) + lVar16 * 4);
        uVar14 = SUB164(auVar6 * auVar10,8);
      } while ((uVar13 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = uVar13 * uVar4, auVar11._8_8_ = 0,
              auVar11._0_8_ = uVar17, auVar8._8_8_ = 0,
              auVar8._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4)
                              + uVar14) - SUB164(auVar7 * auVar11,8)) * uVar4, auVar12._8_8_ = 0,
              auVar12._0_8_ = uVar17, uVar18 <= SUB164(auVar8 * auVar12,8)));
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Vector3, int, HashMapHasherDefault, HashMapComparatorDefault<Vector3>,
   DefaultTypedAllocator<HashMapElement<Vector3, int> > >::insert(Vector3 const&, int const&, bool)
    */

Vector3 * HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
          ::insert(Vector3 *param_1,int *param_2,bool param_3)

{
  uint *puVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  void *__s;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 (*pauVar17) [16];
  char cVar18;
  uint uVar19;
  uint uVar20;
  undefined1 (*pauVar21) [16];
  undefined8 uVar22;
  void *__s_00;
  undefined4 *in_RCX;
  int iVar23;
  undefined7 in_register_00000011;
  Vector3 *pVVar24;
  long lVar25;
  ulong uVar26;
  char in_R8B;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined1 (*pauVar30) [16];
  long in_FS_OFFSET;
  uint local_a8;
  uint local_6c [5];
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  pVVar24 = (Vector3 *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar19 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4);
  if (*(long *)(param_2 + 2) == 0) {
    uVar29 = (ulong)uVar19;
    uVar26 = uVar29 * 4;
    uVar22 = Memory::alloc_static(uVar26,false);
    *(undefined8 *)(param_2 + 4) = uVar22;
    uVar28 = uVar29 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar28,false);
    *(void **)(param_2 + 2) = __s_00;
    if (uVar19 != 0) {
      __s = *(void **)(param_2 + 4);
      if ((__s < (void *)(uVar28 + (long)__s_00)) && (__s_00 < (void *)((long)__s + uVar26))) {
        uVar26 = 0;
        do {
          *(undefined4 *)((long)__s + uVar26 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
          uVar26 = uVar26 + 1;
        } while (uVar29 != uVar26);
      }
      else {
        memset(__s,0,uVar26);
        memset(__s_00,0,uVar28);
      }
    }
  }
  local_6c[0] = 0;
  cVar18 = _lookup_pos((HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
                        *)param_2,pVVar24,local_6c);
  if (cVar18 == '\0') {
    if ((float)uVar19 * __LC62 < (float)(param_2[0xb] + 1)) {
      if (param_2[10] == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        pauVar21 = (undefined1 (*) [16])0x0;
        goto LAB_0010747a;
      }
      _resize_and_rehash((HashMap<Vector3,int,HashMapHasherDefault,HashMapComparatorDefault<Vector3>,DefaultTypedAllocator<HashMapElement<Vector3,int>>>
                          *)param_2,param_2[10] + 1);
    }
    local_58 = *(undefined8 *)pVVar24;
    uVar3 = *in_RCX;
    local_50 = *(undefined4 *)(pVVar24 + 8);
    pauVar21 = (undefined1 (*) [16])operator_new(0x20,"");
    *pauVar21 = (undefined1  [16])0x0;
    *(undefined4 *)(pauVar21[1] + 0xc) = uVar3;
    *(undefined8 *)pauVar21[1] = local_58;
    *(undefined4 *)(pauVar21[1] + 8) = local_50;
    puVar5 = *(undefined8 **)(param_2 + 8);
    if (puVar5 == (undefined8 *)0x0) {
      *(undefined1 (**) [16])(param_2 + 6) = pauVar21;
      *(undefined1 (**) [16])(param_2 + 8) = pauVar21;
    }
    else if (in_R8B == '\0') {
      *puVar5 = pauVar21;
      *(undefined8 **)(*pauVar21 + 8) = puVar5;
      *(undefined1 (**) [16])(param_2 + 8) = pauVar21;
    }
    else {
      lVar6 = *(long *)(param_2 + 6);
      *(undefined1 (**) [16])(lVar6 + 8) = pauVar21;
      *(long *)*pauVar21 = lVar6;
      *(undefined1 (**) [16])(param_2 + 6) = pauVar21;
    }
    fVar2 = *(float *)pVVar24;
    uVar19 = 0x3413905a;
    if ((fVar2 != 0.0) && (uVar19 = 0x22afa5cc, !NAN(fVar2))) {
      uVar19 = ((int)fVar2 * 0x16a88000 | (uint)((int)fVar2 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               0x7f07c65;
      uVar19 = (uVar19 << 0xd | uVar19 >> 0x13) * 5 + 0xe6546b64;
    }
    fVar2 = *(float *)(pVVar24 + 4);
    if (fVar2 != 0.0) {
      if (NAN(fVar2)) {
        uVar19 = uVar19 ^ 0x2db3efa0;
      }
      else {
        uVar19 = uVar19 ^ ((int)fVar2 * 0x16a88000 | (uint)((int)fVar2 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar2 = *(float *)(pVVar24 + 8);
    uVar19 = (uVar19 << 0xd | uVar19 >> 0x13) * 5 + 0xe6546b64;
    if (fVar2 != 0.0) {
      if (NAN(fVar2)) {
        uVar19 = uVar19 ^ 0x2db3efa0;
      }
      else {
        uVar19 = uVar19 ^ ((int)fVar2 * 0x16a88000 | (uint)((int)fVar2 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    uVar19 = (uVar19 << 0xd | uVar19 >> 0x13) * 5 + 0xe6546b64;
    uVar19 = (uVar19 >> 0x10 ^ uVar19) * -0x7a143595;
    uVar20 = (uVar19 ^ uVar19 >> 0xd) * -0x3d4d51cb;
    uVar19 = uVar20 ^ uVar20 >> 0x10;
    if (uVar20 == uVar20 >> 0x10) {
      uVar26 = 1;
      uVar19 = 1;
    }
    else {
      uVar26 = (ulong)uVar19;
    }
    lVar6 = *(long *)(param_2 + 4);
    uVar27 = 0;
    lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)param_2[10] * 8);
    uVar20 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4);
    uVar28 = CONCAT44(0,uVar20);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar26 * lVar7;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar28;
    lVar25 = SUB168(auVar9 * auVar13,8);
    lVar8 = *(long *)(param_2 + 2);
    puVar1 = (uint *)(lVar6 + lVar25 * 4);
    iVar23 = SUB164(auVar9 * auVar13,8);
    uVar4 = *puVar1;
    pauVar17 = pauVar21;
    while (uVar4 != 0) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar4 * lVar7;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar28;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)((uVar20 + iVar23) - SUB164(auVar10 * auVar14,8)) * lVar7;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar28;
      local_a8 = SUB164(auVar11 * auVar15,8);
      pauVar30 = pauVar17;
      if (local_a8 < uVar27) {
        *puVar1 = uVar19;
        puVar5 = (undefined8 *)(lVar8 + lVar25 * 8);
        pauVar30 = (undefined1 (*) [16])*puVar5;
        *puVar5 = pauVar17;
        uVar19 = uVar4;
        uVar27 = local_a8;
      }
      uVar27 = uVar27 + 1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)(iVar23 + 1) * lVar7;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar28;
      lVar25 = SUB168(auVar12 * auVar16,8);
      puVar1 = (uint *)(lVar6 + lVar25 * 4);
      iVar23 = SUB164(auVar12 * auVar16,8);
      pauVar17 = pauVar30;
      uVar4 = *puVar1;
    }
    *(undefined1 (**) [16])(lVar8 + lVar25 * 8) = pauVar17;
    *puVar1 = uVar19;
    param_2[0xb] = param_2[0xb] + 1;
  }
  else {
    pauVar21 = *(undefined1 (**) [16])(*(long *)(param_2 + 2) + (ulong)local_6c[0] * 8);
    *(undefined4 *)(pauVar21[1] + 0xc) = *in_RCX;
  }
LAB_0010747a:
  *(undefined1 (**) [16])param_1 = pauVar21;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x001077d0) */
/* WARNING: Removing unreachable block (ram,0x00107900) */
/* WARNING: Removing unreachable block (ram,0x00107a78) */
/* WARNING: Removing unreachable block (ram,0x0010790c) */
/* WARNING: Removing unreachable block (ram,0x00107916) */
/* WARNING: Removing unreachable block (ram,0x00107a5a) */
/* WARNING: Removing unreachable block (ram,0x00107922) */
/* WARNING: Removing unreachable block (ram,0x0010792c) */
/* WARNING: Removing unreachable block (ram,0x00107a3c) */
/* WARNING: Removing unreachable block (ram,0x00107938) */
/* WARNING: Removing unreachable block (ram,0x00107942) */
/* WARNING: Removing unreachable block (ram,0x00107a1e) */
/* WARNING: Removing unreachable block (ram,0x0010794e) */
/* WARNING: Removing unreachable block (ram,0x00107958) */
/* WARNING: Removing unreachable block (ram,0x00107a00) */
/* WARNING: Removing unreachable block (ram,0x00107964) */
/* WARNING: Removing unreachable block (ram,0x0010796e) */
/* WARNING: Removing unreachable block (ram,0x001079e2) */
/* WARNING: Removing unreachable block (ram,0x00107976) */
/* WARNING: Removing unreachable block (ram,0x00107980) */
/* WARNING: Removing unreachable block (ram,0x001079c7) */
/* WARNING: Removing unreachable block (ram,0x00107988) */
/* WARNING: Removing unreachable block (ram,0x0010799d) */
/* WARNING: Removing unreachable block (ram,0x001079a9) */
/* String vformat<int, String, int>(String const&, int const, String const, int const) */

undefined8 *
vformat<int,String,int>
          (undefined8 *param_1,bool *param_2,int param_3,String_conflict *param_4,int param_5)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_f8 [8];
  undefined8 local_f0 [9];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_a8,param_3);
  Variant::Variant(local_90,param_4);
  iVar2 = 0;
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar4 = (int)local_f8;
  Array::resize(iVar4);
  pVVar3 = local_a8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  pVVar3 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* JPH::SoftBodySharedSettings::~SoftBodySharedSettings() */

void __thiscall JPH::SoftBodySharedSettings::~SoftBodySharedSettings(SoftBodySharedSettings *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if (*(long *)(this + 0x128) != 0) {
    *(undefined8 *)(this + 0x118) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x110) != 0) {
    *(undefined8 *)(this + 0x100) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0xf8) != 0) {
    *(undefined8 *)(this + 0xe8) = 0;
    (*Free)();
  }
  plVar4 = *(long **)(this + 0xd8);
  if (plVar4 != (long *)0x0) {
    if ((*(long *)(this + 200) != 0) && (plVar2 = plVar4 + *(long *)(this + 200), plVar4 < plVar2))
    {
      do {
        while (plVar3 = (long *)*plVar4, plVar3 == (long *)0x0) {
LAB_00107c40:
          plVar4 = plVar4 + 1;
          if (plVar2 <= plVar4) goto LAB_00107c78;
        }
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) goto LAB_00107c40;
        if (*(code **)(*plVar3 + 0x18) != PhysicsMaterial::~PhysicsMaterial) {
          (**(code **)(*plVar3 + 0x18))();
          goto LAB_00107c40;
        }
        (*Free)();
        plVar4 = plVar4 + 1;
      } while (plVar4 < plVar2);
LAB_00107c78:
      plVar4 = *(long **)(this + 0xd8);
    }
    *(undefined8 *)(this + 200) = 0;
    (*Free)(plVar4);
  }
  if (*(long *)(this + 0xc0) != 0) {
    *(undefined8 *)(this + 0xb0) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0xa8) != 0) {
    *(undefined8 *)(this + 0x98) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x90) != 0) {
    *(undefined8 *)(this + 0x80) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x78) != 0) {
    *(undefined8 *)(this + 0x68) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x60) != 0) {
    *(undefined8 *)(this + 0x50) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x48) != 0) {
    *(undefined8 *)(this + 0x38) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x30) != 0) {
    *(undefined8 *)(this + 0x20) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x18) == 0) {
    return;
  }
  *(undefined8 *)(this + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00107c1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* HashMap<RID, JoltSoftBody3D::Shared, HashMapHasherDefault, HashMapComparatorDefault<RID>,
   DefaultTypedAllocator<HashMapElement<RID, JoltSoftBody3D::Shared> > >::~HashMap() */

void __thiscall
HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>>>
::~HashMap(HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>>>
           *this)

{
  uint uVar1;
  SoftBodySharedSettings *this_00;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          this_00 = *(SoftBodySharedSettings **)((long)pvVar3 + 0x28);
          if (this_00 != (SoftBodySharedSettings *)0x0) {
            LOCK();
            *(int *)this_00 = *(int *)this_00 + -1;
            UNLOCK();
            if (*(int *)this_00 == 0) {
              JPH::SoftBodySharedSettings::~SoftBodySharedSettings(this_00);
              (*JPH::Free)(this_00);
            }
          }
          if (*(void **)((long)pvVar3 + 0x20) != (void *)0x0) {
            if (*(int *)((long)pvVar3 + 0x18) != 0) {
              *(undefined4 *)((long)pvVar3 + 0x18) = 0;
            }
            Memory::free_static(*(void **)((long)pvVar3 + 0x20),false);
          }
          Memory::free_static(pvVar3,false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<RID, JoltSoftBody3D::Shared, HashMapHasherDefault, HashMapComparatorDefault<RID>,
   DefaultTypedAllocator<HashMapElement<RID, JoltSoftBody3D::Shared> > >::insert(RID const&,
   JoltSoftBody3D::Shared const&, bool) */

void HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>>>
     ::insert(RID *param_1,Shared *param_2,bool param_3)

{
  uint *puVar1;
  void *__s;
  SoftBodySharedSettings *pSVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
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
  code *pcVar27;
  undefined1 (*pauVar28) [16];
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  SoftBodySharedSettings *pSVar32;
  undefined8 uVar33;
  void *__s_00;
  undefined1 (*pauVar34) [16];
  long lVar35;
  long lVar36;
  undefined8 *puVar37;
  void *pvVar38;
  uint *in_RCX;
  int iVar39;
  uint uVar40;
  undefined7 in_register_00000011;
  long *plVar41;
  long lVar42;
  long lVar43;
  ulong uVar44;
  ulong uVar45;
  undefined8 uVar46;
  char in_R8B;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  undefined1 (*pauVar50) [16];
  void *local_b0;
  
  plVar41 = (long *)CONCAT71(in_register_00000011,param_3);
  uVar49 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  local_b0 = *(void **)(param_2 + 8);
  if (local_b0 == (void *)0x0) {
    uVar45 = (ulong)uVar49;
    uVar31 = uVar45 * 4;
    uVar44 = uVar45 * 8;
    uVar33 = Memory::alloc_static(uVar31,false);
    *(undefined8 *)(param_2 + 0x10) = uVar33;
    local_b0 = (void *)Memory::alloc_static(uVar44,false);
    *(void **)(param_2 + 8) = local_b0;
    if (uVar49 != 0) {
      pvVar38 = *(void **)(param_2 + 0x10);
      if ((pvVar38 < (void *)((long)local_b0 + uVar44)) &&
         (local_b0 < (void *)((long)pvVar38 + uVar31))) {
        uVar31 = 0;
        do {
          *(undefined4 *)((long)pvVar38 + uVar31 * 4) = 0;
          *(undefined8 *)((long)local_b0 + uVar31 * 8) = 0;
          uVar31 = uVar31 + 1;
        } while (uVar45 != uVar31);
        goto LAB_00107e2e;
      }
      memset(pvVar38,0,uVar31);
      memset(local_b0,0,uVar44);
      lVar35 = *plVar41;
      iVar39 = *(int *)(param_2 + 0x2c);
      goto LAB_00107e3f;
    }
    lVar35 = *plVar41;
    iVar39 = *(int *)(param_2 + 0x2c);
    if (local_b0 != (void *)0x0) goto LAB_00107e3f;
  }
  else {
LAB_00107e2e:
    lVar35 = *plVar41;
    iVar39 = *(int *)(param_2 + 0x2c);
LAB_00107e3f:
    if (iVar39 != 0) {
      uVar45 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4));
      lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar31 = lVar35 * 0x3ffff - 1;
      uVar31 = (uVar31 ^ uVar31 >> 0x1f) * 0x15;
      uVar31 = (uVar31 ^ uVar31 >> 0xb) * 0x41;
      uVar31 = uVar31 >> 0x16 ^ uVar31;
      uVar44 = uVar31 & 0xffffffff;
      if ((int)uVar31 == 0) {
        uVar44 = 1;
      }
      uVar48 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar44 * lVar36;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar45;
      lVar42 = SUB168(auVar3 * auVar15,8);
      uVar30 = *(uint *)(*(long *)(param_2 + 0x10) + lVar42 * 4);
      uVar31 = (ulong)uVar30;
      uVar40 = SUB164(auVar3 * auVar15,8);
      if (uVar30 != 0) {
        do {
          if (((int)uVar31 == (int)uVar44) &&
             (*(long *)(*(long *)((long)local_b0 + lVar42 * 8) + 0x10) == lVar35)) {
            uVar49 = *in_RCX;
            lVar35 = *(long *)((long)local_b0 + (ulong)uVar40 * 8);
            if (uVar49 < *(uint *)(lVar35 + 0x18)) {
              *(uint *)(lVar35 + 0x18) = uVar49;
            }
            else if (*(uint *)(lVar35 + 0x18) < uVar49) {
              if (*(uint *)(lVar35 + 0x1c) < uVar49) {
                uVar30 = uVar49 - 1 | uVar49 - 1 >> 1;
                uVar30 = uVar30 | uVar30 >> 2;
                uVar30 = uVar30 | uVar30 >> 4;
                uVar30 = uVar30 | uVar30 >> 8;
                uVar30 = (uVar30 | uVar30 >> 0x10) + 1;
                *(uint *)(lVar35 + 0x1c) = uVar30;
                lVar36 = Memory::realloc_static(*(void **)(lVar35 + 0x20),(ulong)uVar30 * 4,false);
                *(long *)(lVar35 + 0x20) = lVar36;
                if (lVar36 == 0) goto LAB_0010872d;
              }
              *(uint *)(lVar35 + 0x18) = uVar49;
              uVar49 = *in_RCX;
            }
            if (uVar49 != 0) {
              lVar36 = *(long *)(in_RCX + 2);
              lVar42 = *(long *)(lVar35 + 0x20);
              lVar43 = 0;
              do {
                *(undefined4 *)(lVar42 + lVar43 * 4) = *(undefined4 *)(lVar36 + lVar43 * 4);
                lVar43 = lVar43 + 1;
              } while ((uint)lVar43 < *in_RCX);
            }
            pSVar2 = *(SoftBodySharedSettings **)(lVar35 + 0x28);
            pSVar32 = *(SoftBodySharedSettings **)(in_RCX + 4);
            if (pSVar2 != pSVar32) {
              if (pSVar2 != (SoftBodySharedSettings *)0x0) {
                LOCK();
                *(int *)pSVar2 = *(int *)pSVar2 + -1;
                UNLOCK();
                if (*(int *)pSVar2 == 0) {
                  JPH::SoftBodySharedSettings::~SoftBodySharedSettings(pSVar2);
                  (*JPH::Free)(pSVar2);
                }
                pSVar32 = *(SoftBodySharedSettings **)(in_RCX + 4);
              }
              *(SoftBodySharedSettings **)(lVar35 + 0x28) = pSVar32;
              if (pSVar32 != (SoftBodySharedSettings *)0x0) {
                LOCK();
                *(int *)pSVar32 = *(int *)pSVar32 + 1;
                UNLOCK();
              }
            }
            *(uint *)(lVar35 + 0x30) = in_RCX[6];
            pauVar34 = *(undefined1 (**) [16])(*(long *)(param_2 + 8) + (ulong)uVar40 * 8);
            goto LAB_00107fc1;
          }
          uVar48 = uVar48 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(uVar40 + 1) * lVar36;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar45;
          lVar42 = SUB168(auVar4 * auVar16,8);
          uVar30 = *(uint *)(*(long *)(param_2 + 0x10) + lVar42 * 4);
          uVar31 = (ulong)uVar30;
          uVar40 = SUB164(auVar4 * auVar16,8);
        } while ((uVar30 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = uVar31 * lVar36, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar45, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(param_2 + 0x28) * 4) + uVar40) -
                                      SUB164(auVar5 * auVar17,8)) * lVar36, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar45, uVar48 <= SUB164(auVar6 * auVar18,8)));
      }
    }
  }
  if ((float)uVar49 * __LC62 < (float)(iVar39 + 1)) {
    uVar49 = *(uint *)(param_2 + 0x28);
    if (uVar49 == 0x1c) {
      pauVar34 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00107fc1;
    }
    uVar31 = (ulong)(uVar49 + 1);
    uVar30 = *(uint *)(hash_table_size_primes + (ulong)uVar49 * 4);
    *(undefined4 *)(param_2 + 0x2c) = 0;
    if (uVar49 + 1 < 2) {
      uVar31 = 2;
    }
    uVar49 = *(uint *)(hash_table_size_primes + uVar31 * 4);
    *(int *)(param_2 + 0x28) = (int)uVar31;
    pvVar38 = *(void **)(param_2 + 0x10);
    uVar45 = (ulong)uVar49;
    uVar31 = uVar45 * 4;
    uVar33 = Memory::alloc_static(uVar31,false);
    *(undefined8 *)(param_2 + 0x10) = uVar33;
    uVar44 = uVar45 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar44,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar49 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar44)) && (__s_00 < (void *)((long)__s + uVar31))) {
        uVar31 = 0;
        do {
          *(undefined4 *)((long)__s + uVar31 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar31 * 8) = 0;
          uVar31 = uVar31 + 1;
        } while (uVar45 != uVar31);
      }
      else {
        memset(__s,0,uVar31);
        memset(__s_00,0,uVar44);
      }
    }
    if (uVar30 != 0) {
      uVar31 = 0;
      do {
        uVar49 = *(uint *)((long)pvVar38 + uVar31 * 4);
        if (uVar49 != 0) {
          uVar47 = 0;
          lVar35 = *(long *)(param_2 + 0x10);
          uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
          uVar44 = CONCAT44(0,uVar40);
          lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)uVar49 * lVar36;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar44;
          lVar42 = SUB168(auVar7 * auVar19,8);
          puVar1 = (uint *)(lVar35 + lVar42 * 4);
          iVar39 = SUB164(auVar7 * auVar19,8);
          uVar48 = *puVar1;
          uVar33 = *(undefined8 *)((long)local_b0 + uVar31 * 8);
          while (uVar48 != 0) {
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar48 * lVar36;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar44;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)((iVar39 + uVar40) - SUB164(auVar8 * auVar20,8)) * lVar36;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar44;
            uVar29 = SUB164(auVar9 * auVar21,8);
            uVar46 = uVar33;
            if (uVar29 < uVar47) {
              *puVar1 = uVar49;
              puVar37 = (undefined8 *)((long)__s_00 + lVar42 * 8);
              uVar46 = *puVar37;
              *puVar37 = uVar33;
              uVar49 = uVar48;
              uVar47 = uVar29;
            }
            uVar47 = uVar47 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)(iVar39 + 1) * lVar36;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar44;
            lVar42 = SUB168(auVar10 * auVar22,8);
            puVar1 = (uint *)(lVar35 + lVar42 * 4);
            iVar39 = SUB164(auVar10 * auVar22,8);
            uVar33 = uVar46;
            uVar48 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar42 * 8) = uVar33;
          *puVar1 = uVar49;
          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
        }
        uVar31 = uVar31 + 1;
      } while (uVar31 != uVar30);
      Memory::free_static(local_b0,false);
      Memory::free_static(pvVar38,false);
    }
  }
  uVar49 = *in_RCX;
  lVar35 = *plVar41;
  if (uVar49 == 0) {
    pvVar38 = (void *)0x0;
  }
  else {
    uVar30 = uVar49 - 1 | uVar49 - 1 >> 1;
    uVar30 = uVar30 | uVar30 >> 2;
    uVar30 = uVar30 | uVar30 >> 4;
    uVar30 = uVar30 | uVar30 >> 8;
    pvVar38 = (void *)Memory::realloc_static
                                ((void *)0x0,(ulong)((uVar30 | uVar30 >> 0x10) + 1) << 2,false);
    if (pvVar38 == (void *)0x0) goto LAB_0010872d;
    if (*in_RCX != 0) {
      lVar36 = *(long *)(in_RCX + 2);
      lVar42 = 0;
      do {
        *(undefined4 *)((long)pvVar38 + lVar42 * 4) = *(undefined4 *)(lVar36 + lVar42 * 4);
        lVar42 = lVar42 + 1;
      } while ((uint)lVar42 < *in_RCX);
    }
  }
  pSVar2 = *(SoftBodySharedSettings **)(in_RCX + 4);
  if (pSVar2 != (SoftBodySharedSettings *)0x0) {
    LOCK();
    *(int *)pSVar2 = *(int *)pSVar2 + 1;
    UNLOCK();
  }
  uVar30 = in_RCX[6];
  pauVar34 = (undefined1 (*) [16])operator_new(0x38,"");
  *pauVar34 = (undefined1  [16])0x0;
  *(undefined8 *)(pauVar34[1] + 8) = 0;
  *(long *)pauVar34[1] = lVar35;
  *(undefined8 *)pauVar34[2] = 0;
  if (uVar49 == 0) {
    *(SoftBodySharedSettings **)(pauVar34[2] + 8) = pSVar2;
    if (pSVar2 == (SoftBodySharedSettings *)0x0) {
      *(uint *)pauVar34[3] = uVar30;
    }
    else {
      LOCK();
      *(int *)pSVar2 = *(int *)pSVar2 + 1;
      UNLOCK();
      *(uint *)pauVar34[3] = uVar30;
      LOCK();
      *(int *)pSVar2 = *(int *)pSVar2 + -1;
      UNLOCK();
      if (*(int *)pSVar2 == 0) {
LAB_00108308:
        JPH::SoftBodySharedSettings::~SoftBodySharedSettings(pSVar2);
        (*JPH::Free)(pSVar2);
      }
    }
    if (pvVar38 != (void *)0x0) goto LAB_001084e3;
    puVar37 = *(undefined8 **)(param_2 + 0x20);
    if (puVar37 == (undefined8 *)0x0) goto LAB_001084ff;
LAB_00108334:
    if (in_R8B == '\0') {
      *puVar37 = pauVar34;
      *(undefined8 **)(*pauVar34 + 8) = puVar37;
      *(undefined1 (**) [16])(param_2 + 0x20) = pauVar34;
    }
    else {
      lVar35 = *(long *)(param_2 + 0x18);
      *(undefined1 (**) [16])(lVar35 + 8) = pauVar34;
      *(long *)*pauVar34 = lVar35;
      *(undefined1 (**) [16])(param_2 + 0x18) = pauVar34;
    }
  }
  else {
    uVar40 = uVar49 - 1 | uVar49 - 1 >> 1;
    uVar40 = uVar40 >> 2 | uVar40;
    uVar40 = uVar40 | uVar40 >> 4;
    uVar40 = uVar40 | uVar40 >> 8;
    uVar40 = (uVar40 | uVar40 >> 0x10) + 1;
    *(uint *)(pauVar34[1] + 0xc) = uVar40;
    lVar35 = Memory::realloc_static((void *)0x0,(ulong)uVar40 * 4,false);
    *(long *)pauVar34[2] = lVar35;
    if (lVar35 == 0) {
LAB_0010872d:
      _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar27 = (code *)invalidInstructionException();
      (*pcVar27)();
    }
    *(uint *)(pauVar34[1] + 8) = uVar49;
    lVar36 = 0;
    do {
      *(undefined4 *)(lVar35 + lVar36) = *(undefined4 *)((long)pvVar38 + lVar36);
      lVar36 = lVar36 + 4;
    } while (lVar36 != (ulong)uVar49 << 2);
    *(SoftBodySharedSettings **)(pauVar34[2] + 8) = pSVar2;
    if (pSVar2 == (SoftBodySharedSettings *)0x0) {
      *(uint *)pauVar34[3] = uVar30;
    }
    else {
      LOCK();
      *(int *)pSVar2 = *(int *)pSVar2 + 1;
      UNLOCK();
      *(uint *)pauVar34[3] = uVar30;
      LOCK();
      *(int *)pSVar2 = *(int *)pSVar2 + -1;
      UNLOCK();
      if (*(int *)pSVar2 == 0) goto LAB_00108308;
    }
LAB_001084e3:
    Memory::free_static(pvVar38,false);
    puVar37 = *(undefined8 **)(param_2 + 0x20);
    if (puVar37 != (undefined8 *)0x0) goto LAB_00108334;
LAB_001084ff:
    *(undefined1 (**) [16])(param_2 + 0x18) = pauVar34;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauVar34;
  }
  lVar35 = *(long *)(param_2 + 0x10);
  uVar31 = *plVar41 * 0x3ffff - 1;
  uVar31 = (uVar31 ^ uVar31 >> 0x1f) * 0x15;
  uVar31 = (uVar31 ^ uVar31 >> 0xb) * 0x41;
  uVar31 = uVar31 >> 0x16 ^ uVar31;
  uVar44 = uVar31 & 0xffffffff;
  if ((int)uVar31 == 0) {
    uVar44 = 1;
  }
  uVar48 = 0;
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar40 = (uint)uVar44;
  uVar49 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar31 = CONCAT44(0,uVar49);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar44 * lVar36;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar31;
  lVar43 = SUB168(auVar11 * auVar23,8);
  lVar42 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar35 + lVar43 * 4);
  iVar39 = SUB164(auVar11 * auVar23,8);
  uVar30 = *puVar1;
  pauVar28 = pauVar34;
  while (uVar30 != 0) {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)uVar30 * lVar36;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar31;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)((uVar49 + iVar39) - SUB164(auVar12 * auVar24,8)) * lVar36;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar31;
    uVar40 = SUB164(auVar13 * auVar25,8);
    pauVar50 = pauVar28;
    if (uVar40 < uVar48) {
      *puVar1 = (uint)uVar44;
      uVar44 = (ulong)uVar30;
      puVar37 = (undefined8 *)(lVar42 + lVar43 * 8);
      pauVar50 = (undefined1 (*) [16])*puVar37;
      *puVar37 = pauVar28;
      uVar48 = uVar40;
    }
    uVar40 = (uint)uVar44;
    uVar48 = uVar48 + 1;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)(iVar39 + 1) * lVar36;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar31;
    lVar43 = SUB168(auVar14 * auVar26,8);
    puVar1 = (uint *)(lVar35 + lVar43 * 4);
    iVar39 = SUB164(auVar14 * auVar26,8);
    pauVar28 = pauVar50;
    uVar30 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar42 + lVar43 * 8) = pauVar28;
  *puVar1 = uVar40;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_00107fc1:
  *(undefined1 (**) [16])param_1 = pauVar34;
  return;
}



/* JoltSoftBody3D::_get_broad_phase_layer() const */

void JoltSoftBody3D::_GLOBAL__sub_I__get_broad_phase_layer(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC96;
  }
  if (mesh_to_shared != '\0') {
    return;
  }
  mesh_to_shared = 1;
  mesh_to_shared._8_16_ = (undefined1  [16])0x0;
  mesh_to_shared._40_8_ = 2;
  mesh_to_shared._24_16_ = (undefined1  [16])0x0;
  __cxa_atexit(HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>>>
               ::~HashMap,mesh_to_shared,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<RID, JoltSoftBody3D::Shared, HashMapHasherDefault, HashMapComparatorDefault<RID>,
   DefaultTypedAllocator<HashMapElement<RID, JoltSoftBody3D::Shared> > >::~HashMap() */

void __thiscall
HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>>>
::~HashMap(HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::SoftBodySharedSettings::~SoftBodySharedSettings() */

void __thiscall JPH::SoftBodySharedSettings::~SoftBodySharedSettings(SoftBodySharedSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltSoftBody3D::Shared::Shared() */

void __thiscall JoltSoftBody3D::Shared::Shared(Shared *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



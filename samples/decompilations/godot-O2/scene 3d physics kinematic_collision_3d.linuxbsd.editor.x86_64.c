
/* KinematicCollision3D::get_travel() const */

undefined1  [16] __thiscall KinematicCollision3D::get_travel(KinematicCollision3D *this)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._12_4_ = 0;
    auVar1._0_12_ = *(undefined1 (*) [12])(this + 0x188);
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* KinematicCollision3D::get_remainder() const */

undefined1  [16] __thiscall KinematicCollision3D::get_remainder(KinematicCollision3D *this)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._12_4_ = 0;
    auVar1._0_12_ = *(undefined1 (*) [12])(this + 0x194);
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* KinematicCollision3D::get_collision_count() const */

undefined4 __thiscall KinematicCollision3D::get_collision_count(KinematicCollision3D *this)

{
  return *(undefined4 *)(this + 0xbb0);
}



/* KinematicCollision3D::get_depth() const */

undefined4 __thiscall KinematicCollision3D::get_depth(KinematicCollision3D *this)

{
  return *(undefined4 *)(this + 0x1a0);
}



/* KinematicCollision3D::get_angle(int, Vector3 const&) const */

float __thiscall
KinematicCollision3D::get_angle(KinematicCollision3D *this,int param_1,Vector3 *param_2)

{
  long lVar1;
  float fVar2;
  
  if ((param_1 < 0) || (*(int *)(this + 0xbb0) <= param_1)) {
    _err_print_index_error
              ("get_angle","scene/3d/physics/kinematic_collision_3d.cpp",0x3e,(long)param_1,
               (long)*(int *)(this + 0xbb0),"p_collision_index","result.collision_count","",false,
               false);
  }
  else {
    if (((*(float *)param_2 != 0.0) || (*(float *)(param_2 + 4) != 0.0)) ||
       (*(float *)(param_2 + 8) != 0.0)) {
      lVar1 = (long)param_1 * 0x50;
      fVar2 = *(float *)param_2 * *(float *)(this + lVar1 + 0x1bc) +
              *(float *)(param_2 + 4) * *(float *)(this + lVar1 + 0x1c0) +
              *(float *)(param_2 + 8) * *(float *)(this + lVar1 + 0x1c4);
      if (fVar2 < _LC8) {
        return _LC0;
      }
      if (fVar2 <= _LC28._4_4_) {
        fVar2 = acosf(fVar2);
        return fVar2;
      }
      return 0.0;
    }
    _err_print_error("get_angle","scene/3d/physics/kinematic_collision_3d.cpp",0x3f,
                     "Condition \"p_up_direction == Vector3()\" is true. Returning: 0",0,0);
  }
  return 0.0;
}



/* KinematicCollision3D::get_local_shape(int) const */

undefined8 __thiscall KinematicCollision3D::get_local_shape(KinematicCollision3D *this,int param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong *puVar6;
  long in_FS_OFFSET;
  bool bVar7;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 < 0) || (*(int *)(this + 0xbb0) <= param_1)) {
    _err_print_index_error
              ("get_local_shape","scene/3d/physics/kinematic_collision_3d.cpp",0x44,(long)param_1,
               (long)*(int *)(this + 0xbb0),"p_collision_index","result.collision_count","",false,
               false);
  }
  else {
    uVar5 = (uint)*(ulong *)(this + 0x180) & 0xffffff;
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
      if ((*(ulong *)(this + 0x180) >> 0x18 & 0x7fffffffff) == (*puVar6 & 0x7fffffffff)) {
        uVar2 = puVar6[1];
        ObjectDB::spin_lock._0_1_ = '\0';
        if ((uVar2 != 0) &&
           (lVar3 = __dynamic_cast(uVar2,&Object::typeinfo,&PhysicsBody3D::typeinfo,0), lVar3 != 0))
        {
          CollisionObject3D::shape_find_owner((uint)lVar3);
          if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar4 = CollisionObject3D::shape_owner_get_owner((uint)lVar3);
            return uVar4;
          }
          goto LAB_0010039f;
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
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_0010039f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* KinematicCollision3D::get_collider_rid(int) const */

undefined8 __thiscall KinematicCollision3D::get_collider_rid(KinematicCollision3D *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0xbb0))) {
    return *(undefined8 *)(this + (long)param_1 * 0x50 + 0x1f0);
  }
  _err_print_index_error
            ("get_collider_rid","scene/3d/physics/kinematic_collision_3d.cpp",0x5c,(long)param_1,
             (long)*(int *)(this + 0xbb0),"p_collision_index","result.collision_count","",false,
             false);
  return 0;
}



/* KinematicCollision3D::get_collider_velocity(int) const */

undefined1  [16] __thiscall
KinematicCollision3D::get_collider_velocity(KinematicCollision3D *this,int param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  undefined8 local_28;
  undefined4 local_20;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 < 0) || (*(int *)(this + 0xbb0) <= param_1)) {
    _err_print_index_error
              ("get_collider_velocity","scene/3d/physics/kinematic_collision_3d.cpp",0x73,
               (long)param_1,(long)*(int *)(this + 0xbb0),"p_collision_index",
               "result.collision_count","",false,false);
    local_20 = 0;
    local_28 = 0;
  }
  else {
    local_28 = *(undefined8 *)(this + (long)param_1 * 0x50 + 0x1c8);
    local_20 = *(undefined4 *)(this + (long)param_1 * 0x50 + 0x1d0);
  }
  auVar2._8_4_ = local_20;
  auVar2._0_8_ = local_28;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._12_4_ = 0;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* KinematicCollision3D::get_normal(int) const */

undefined1  [16] __thiscall KinematicCollision3D::get_normal(KinematicCollision3D *this,int param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  undefined8 local_28;
  undefined4 local_20;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 < 0) || (*(int *)(this + 0xbb0) <= param_1)) {
    _err_print_index_error
              ("get_normal","scene/3d/physics/kinematic_collision_3d.cpp",0x39,(long)param_1,
               (long)*(int *)(this + 0xbb0),"p_collision_index","result.collision_count","",false,
               false);
    local_20 = 0;
    local_28 = 0;
  }
  else {
    local_28 = *(undefined8 *)(this + (long)param_1 * 0x50 + 0x1bc);
    local_20 = *(undefined4 *)(this + (long)param_1 * 0x50 + 0x1c4);
  }
  auVar2._8_4_ = local_20;
  auVar2._0_8_ = local_28;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._12_4_ = 0;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* KinematicCollision3D::get_position(int) const */

undefined1  [16] __thiscall
KinematicCollision3D::get_position(KinematicCollision3D *this,int param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  undefined8 local_28;
  undefined4 local_20;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 < 0) || (*(int *)(this + 0xbb0) <= param_1)) {
    _err_print_index_error
              ("get_position","scene/3d/physics/kinematic_collision_3d.cpp",0x34,(long)param_1,
               (long)*(int *)(this + 0xbb0),"p_collision_index","result.collision_count","",false,
               false);
    local_20 = 0;
    local_28 = 0;
  }
  else {
    local_28 = *(undefined8 *)(this + (long)param_1 * 0x50 + 0x1b0);
    local_20 = *(undefined4 *)(this + (long)param_1 * 0x50 + 0x1b8);
  }
  auVar2._8_4_ = local_20;
  auVar2._0_8_ = local_28;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._12_4_ = 0;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* KinematicCollision3D::get_collider_id(int) const */

undefined8 __thiscall KinematicCollision3D::get_collider_id(KinematicCollision3D *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0xbb0))) {
    return *(undefined8 *)(this + (long)param_1 * 0x50 + 0x1e8);
  }
  _err_print_index_error
            ("get_collider_id","scene/3d/physics/kinematic_collision_3d.cpp",0x57,(long)param_1,
             (long)*(int *)(this + 0xbb0),"p_collision_index","result.collision_count","",false,
             false);
  return 0;
}



/* KinematicCollision3D::get_collider_shape_index(int) const */

undefined4 __thiscall
KinematicCollision3D::get_collider_shape_index(KinematicCollision3D *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0xbb0))) {
    return *(undefined4 *)(this + (long)param_1 * 0x50 + 0x1f8);
  }
  _err_print_index_error
            ("get_collider_shape_index","scene/3d/physics/kinematic_collision_3d.cpp",0x6e,
             (long)param_1,(long)*(int *)(this + 0xbb0),"p_collision_index","result.collision_count"
             ,"",false,false);
  return 0;
}



/* KinematicCollision3D::get_collider(int) const */

ulong __thiscall KinematicCollision3D::get_collider(KinematicCollision3D *this,int param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 < 0) || (*(int *)(this + 0xbb0) <= param_1)) {
    _err_print_index_error
              ("get_collider","scene/3d/physics/kinematic_collision_3d.cpp",0x4e,(long)param_1,
               (long)*(int *)(this + 0xbb0),"p_collision_index","result.collision_count","",false,
               false);
  }
  else {
    uVar2 = *(ulong *)(this + (long)param_1 * 0x50 + 0x1e8);
    if (uVar2 != 0) {
      uVar3 = (uint)uVar2 & 0xffffff;
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
        if ((uVar2 >> 0x18 & 0x7fffffffff) == (*puVar4 & 0x7fffffffff)) {
          uVar2 = puVar4[1];
          ObjectDB::spin_lock._0_1_ = '\0';
        }
        else {
          uVar2 = 0;
          ObjectDB::spin_lock._0_1_ = '\0';
        }
      }
      else {
        _err_print_error("get_instance","./core/object/object.h",0x418,
                         "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
        uVar2 = 0;
      }
      goto LAB_00100824;
    }
  }
  uVar2 = 0;
LAB_00100824:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* KinematicCollision3D::get_collider_shape(int) const */

undefined8 __thiscall
KinematicCollision3D::get_collider_shape(KinematicCollision3D *this,int param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = get_collider(this,param_1);
  if (lVar1 != 0) {
    lVar1 = __dynamic_cast(lVar1,&Object::typeinfo,&CollisionObject3D::typeinfo,0);
    if (lVar1 != 0) {
      CollisionObject3D::shape_find_owner((uint)lVar1);
      uVar2 = CollisionObject3D::shape_owner_get_owner((uint)lVar1);
      return uVar2;
    }
  }
  return 0;
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



/* KinematicCollision3D::_bind_methods() */

void KinematicCollision3D::_bind_methods(void)

{
  Variant *pVVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long *plVar12;
  MethodBind *pMVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  Variant *pVVar17;
  long in_FS_OFFSET;
  long local_108 [2];
  long *local_f8;
  Variant *local_e8;
  undefined8 local_e0;
  char *local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  Vector3 *local_b8;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined1 local_98 [16];
  Variant *local_88 [3];
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)local_108,(char ***)"get_travel",0);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Vector3 *)0x0;
  pMVar13 = create_method_bind<KinematicCollision3D,Vector3>(get_travel);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar12 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar14 = local_f8 + -2;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (*plVar14 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar3 != 0) {
        lVar16 = 0;
        plVar14 = plVar12;
        do {
          if ((StringName::configured != '\0') && (*plVar14 != 0)) {
            StringName::unref();
          }
          lVar16 = lVar16 + 1;
          plVar14 = plVar14 + 1;
        } while (lVar3 != lVar16);
      }
      Memory::free_static(plVar12 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_108,(char ***)"get_remainder",0);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Vector3 *)0x0;
  pMVar13 = create_method_bind<KinematicCollision3D,Vector3>(get_remainder);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar12 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar14 = local_f8 + -2;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (*plVar14 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar3 != 0) {
        lVar16 = 0;
        plVar14 = plVar12;
        do {
          if ((StringName::configured != '\0') && (*plVar14 != 0)) {
            StringName::unref();
          }
          lVar16 = lVar16 + 1;
          plVar14 = plVar14 + 1;
        } while (lVar3 != lVar16);
      }
      Memory::free_static(plVar12 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_108,(char ***)"get_depth",0);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Vector3 *)0x0;
  pMVar13 = create_method_bind<KinematicCollision3D,float>(get_depth);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar12 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar14 = local_f8 + -2;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (*plVar14 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar3 != 0) {
        lVar16 = 0;
        plVar14 = plVar12;
        do {
          if ((StringName::configured != '\0') && (*plVar14 != 0)) {
            StringName::unref();
          }
          lVar16 = lVar16 + 1;
          plVar14 = plVar14 + 1;
        } while (lVar3 != lVar16);
      }
      Memory::free_static(plVar12 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_108,(char ***)"get_collision_count",0);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Vector3 *)0x0;
  pMVar13 = create_method_bind<KinematicCollision3D,int>(get_collision_count);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar12 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar14 = local_f8 + -2;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (*plVar14 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar3 != 0) {
        lVar16 = 0;
        plVar14 = plVar12;
        do {
          if ((StringName::configured != '\0') && (*plVar14 != 0)) {
            StringName::unref();
          }
          lVar16 = lVar16 + 1;
          plVar14 = plVar14 + 1;
        } while (lVar3 != lVar16);
      }
      Memory::free_static(plVar12 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  local_e0 = 0;
  local_e8 = (Variant *)0x102034;
  uVar15 = (uint)(Variant *)&local_b8;
  local_b8 = (Vector3 *)&local_e8;
  D_METHODP((char *)local_108,(char ***)"get_position",uVar15);
  Variant::Variant((Variant *)&local_b8,0);
  local_98 = (undefined1  [16])0x0;
  local_a0 = 0;
  local_e8 = (Variant *)&local_b8;
  pMVar13 = create_method_bind<KinematicCollision3D,Vector3,int>(get_position);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)local_108,&local_e8,1);
  if (Variant::needs_deinit[(int)local_a0] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_b8];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_b8];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  plVar12 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar14 = local_f8 + -2;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (*plVar14 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar3 != 0) {
        lVar16 = 0;
        plVar14 = plVar12;
        do {
          if ((StringName::configured != '\0') && (*plVar14 != 0)) {
            StringName::unref();
          }
          lVar16 = lVar16 + 1;
          plVar14 = plVar14 + 1;
        } while (lVar3 != lVar16);
      }
      Memory::free_static(plVar12 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  local_e0 = 0;
  local_e8 = (Variant *)0x102034;
  local_b8 = (Vector3 *)&local_e8;
  D_METHODP((char *)local_108,(char ***)"get_normal",uVar15);
  Variant::Variant((Variant *)&local_b8,0);
  local_98 = (undefined1  [16])0x0;
  local_a0 = 0;
  local_e8 = (Variant *)&local_b8;
  pMVar13 = create_method_bind<KinematicCollision3D,Vector3,int>(get_normal);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)local_108,&local_e8,1);
  if (Variant::needs_deinit[(int)local_a0] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_b8];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_b8];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  plVar12 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar14 = local_f8 + -2;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (*plVar14 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar3 != 0) {
        lVar16 = 0;
        plVar14 = plVar12;
        do {
          if ((StringName::configured != '\0') && (*plVar14 != 0)) {
            StringName::unref();
          }
          lVar16 = lVar16 + 1;
          plVar14 = plVar14 + 1;
        } while (lVar3 != lVar16);
      }
      Memory::free_static(plVar12 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  local_c8 = 0;
  pVVar17 = (Variant *)local_40;
  local_d8 = "collision_index";
  pcStack_d0 = "up_direction";
  local_b8 = (Vector3 *)&local_d8;
  auStack_b0._0_8_ = &pcStack_d0;
  D_METHODP((char *)local_108,(char ***)"get_angle",uVar15);
  pcStack_d0 = (char *)((ulong)pcStack_d0 & 0xffffffff00000000);
  local_d8 = (char *)_LC28;
  Variant::Variant((Variant *)local_88,0);
  Variant::Variant((Variant *)&local_70,(Vector3 *)&local_d8);
  local_50 = (undefined1  [16])0x0;
  auStack_b0._0_8_ = (Variant *)&local_70;
  local_58 = 0;
  local_b8 = (Vector3 *)local_88;
  pMVar13 = create_method_bind<KinematicCollision3D,float,int,Vector3_const&>(get_angle);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)local_108,(Variant **)&local_b8,2);
  do {
    pVVar1 = pVVar17 + -0x18;
    pVVar17 = pVVar17 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
    plVar12 = local_f8;
  } while (pVVar17 != (Variant *)local_88);
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar14 = local_f8 + -2;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (*plVar14 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar3 != 0) {
        lVar16 = 0;
        plVar14 = plVar12;
        do {
          if ((StringName::configured != '\0') && (*plVar14 != 0)) {
            StringName::unref();
          }
          lVar16 = lVar16 + 1;
          plVar14 = plVar14 + 1;
        } while (lVar3 != lVar16);
      }
      Memory::free_static(plVar12 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = auStack_b0._8_8_;
  auStack_b0 = auVar5 << 0x40;
  local_b8 = (Vector3 *)0x102034;
  uVar15 = (uint)(Variant *)local_88;
  local_88[0] = (Variant *)&local_b8;
  D_METHODP((char *)local_108,(char ***)"get_local_shape",uVar15);
  Variant::Variant((Variant *)local_88,0);
  local_68 = (undefined1  [16])0x0;
  local_70 = 0;
  local_b8 = (Vector3 *)local_88;
  pMVar13 = create_method_bind<KinematicCollision3D,Object*,int>(get_local_shape);
  pMVar13[0x3b] = (MethodBind)0x1;
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)local_108,(Variant **)&local_b8,1);
  if (Variant::needs_deinit[(int)local_70] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_88[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  plVar12 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar14 = local_f8 + -2;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (*plVar14 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar3 != 0) {
        lVar16 = 0;
        plVar14 = plVar12;
        do {
          if ((StringName::configured != '\0') && (*plVar14 != 0)) {
            StringName::unref();
          }
          lVar16 = lVar16 + 1;
          plVar14 = plVar14 + 1;
        } while (lVar3 != lVar16);
      }
      Memory::free_static(plVar12 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = auStack_b0._8_8_;
  auStack_b0 = auVar6 << 0x40;
  local_b8 = (Vector3 *)0x102034;
  local_88[0] = (Variant *)&local_b8;
  D_METHODP((char *)local_108,(char ***)"get_collider",uVar15);
  Variant::Variant((Variant *)local_88,0);
  local_68 = (undefined1  [16])0x0;
  local_70 = 0;
  local_b8 = (Vector3 *)local_88;
  pMVar13 = create_method_bind<KinematicCollision3D,Object*,int>(get_collider);
  pMVar13[0x3b] = (MethodBind)0x1;
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)local_108,(Variant **)&local_b8,1);
  if (Variant::needs_deinit[(int)local_70] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_88[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  plVar12 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar14 = local_f8 + -2;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (*plVar14 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar3 != 0) {
        lVar16 = 0;
        plVar14 = plVar12;
        do {
          if ((StringName::configured != '\0') && (*plVar14 != 0)) {
            StringName::unref();
          }
          lVar16 = lVar16 + 1;
          plVar14 = plVar14 + 1;
        } while (lVar3 != lVar16);
      }
      Memory::free_static(plVar12 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = auStack_b0._8_8_;
  auStack_b0 = auVar7 << 0x40;
  local_b8 = (Vector3 *)0x102034;
  local_88[0] = (Variant *)&local_b8;
  D_METHODP((char *)local_108,(char ***)"get_collider_id",uVar15);
  Variant::Variant((Variant *)local_88,0);
  local_68 = (undefined1  [16])0x0;
  local_70 = 0;
  local_b8 = (Vector3 *)local_88;
  pMVar13 = create_method_bind<KinematicCollision3D,ObjectID,int>(get_collider_id);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)local_108,(Variant **)&local_b8,1);
  if (Variant::needs_deinit[(int)local_70] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_88[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  plVar12 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar14 = local_f8 + -2;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (*plVar14 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar3 != 0) {
        lVar16 = 0;
        plVar14 = plVar12;
        do {
          if ((StringName::configured != '\0') && (*plVar14 != 0)) {
            StringName::unref();
          }
          lVar16 = lVar16 + 1;
          plVar14 = plVar14 + 1;
        } while (lVar3 != lVar16);
      }
      Memory::free_static(plVar12 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  auVar8._8_8_ = 0;
  auVar8._0_8_ = auStack_b0._8_8_;
  auStack_b0 = auVar8 << 0x40;
  local_b8 = (Vector3 *)0x102034;
  local_88[0] = (Variant *)&local_b8;
  D_METHODP((char *)local_108,(char ***)"get_collider_rid",uVar15);
  Variant::Variant((Variant *)local_88,0);
  local_68 = (undefined1  [16])0x0;
  local_70 = 0;
  local_b8 = (Vector3 *)local_88;
  pMVar13 = create_method_bind<KinematicCollision3D,RID,int>(get_collider_rid);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)local_108,(Variant **)&local_b8,1);
  if (Variant::needs_deinit[(int)local_70] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_88[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  plVar12 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar14 = local_f8 + -2;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (*plVar14 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar3 != 0) {
        lVar16 = 0;
        plVar14 = plVar12;
        do {
          if ((StringName::configured != '\0') && (*plVar14 != 0)) {
            StringName::unref();
          }
          lVar16 = lVar16 + 1;
          plVar14 = plVar14 + 1;
        } while (lVar3 != lVar16);
      }
      Memory::free_static(plVar12 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = auStack_b0._8_8_;
  auStack_b0 = auVar9 << 0x40;
  local_b8 = (Vector3 *)0x102034;
  local_88[0] = (Variant *)&local_b8;
  D_METHODP((char *)local_108,(char ***)"get_collider_shape",uVar15);
  Variant::Variant((Variant *)local_88,0);
  local_68 = (undefined1  [16])0x0;
  local_70 = 0;
  local_b8 = (Vector3 *)local_88;
  pMVar13 = create_method_bind<KinematicCollision3D,Object*,int>(get_collider_shape);
  pMVar13[0x3b] = (MethodBind)0x1;
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)local_108,(Variant **)&local_b8,1);
  if (Variant::needs_deinit[(int)local_70] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_88[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  plVar12 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar14 = local_f8 + -2;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (*plVar14 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar3 != 0) {
        lVar16 = 0;
        plVar14 = plVar12;
        do {
          if ((StringName::configured != '\0') && (*plVar14 != 0)) {
            StringName::unref();
          }
          lVar16 = lVar16 + 1;
          plVar14 = plVar14 + 1;
        } while (lVar3 != lVar16);
      }
      Memory::free_static(plVar12 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = auStack_b0._8_8_;
  auStack_b0 = auVar10 << 0x40;
  local_b8 = (Vector3 *)0x102034;
  local_88[0] = (Variant *)&local_b8;
  D_METHODP((char *)local_108,(char ***)"get_collider_shape_index",uVar15);
  Variant::Variant((Variant *)local_88,0);
  local_68 = (undefined1  [16])0x0;
  local_70 = 0;
  local_b8 = (Vector3 *)local_88;
  pMVar13 = create_method_bind<KinematicCollision3D,int,int>(get_collider_shape_index);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)local_108,(Variant **)&local_b8,1);
  if (Variant::needs_deinit[(int)local_70] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_88[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  plVar12 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar14 = local_f8 + -2;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (*plVar14 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar3 != 0) {
        lVar16 = 0;
        plVar14 = plVar12;
        do {
          if ((StringName::configured != '\0') && (*plVar14 != 0)) {
            StringName::unref();
          }
          lVar16 = lVar16 + 1;
          plVar14 = plVar14 + 1;
        } while (lVar3 != lVar16);
      }
      Memory::free_static(plVar12 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  auVar11._8_8_ = 0;
  auVar11._0_8_ = auStack_b0._8_8_;
  auStack_b0 = auVar11 << 0x40;
  local_b8 = (Vector3 *)0x102034;
  local_88[0] = (Variant *)&local_b8;
  D_METHODP((char *)local_108,(char ***)"get_collider_velocity",uVar15);
  Variant::Variant((Variant *)local_88,0);
  local_68 = (undefined1  [16])0x0;
  local_70 = 0;
  local_b8 = (Vector3 *)local_88;
  pMVar13 = create_method_bind<KinematicCollision3D,Vector3,int>(get_collider_velocity);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)local_108,(Variant **)&local_b8,1);
  if (Variant::needs_deinit[(int)local_70] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_88[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  plVar12 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar14 = local_f8 + -2;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (*plVar14 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar3 != 0) {
        lVar16 = 0;
        plVar14 = plVar12;
        do {
          if ((StringName::configured != '\0') && (*plVar14 != 0)) {
            StringName::unref();
          }
          lVar16 = lVar16 + 1;
          plVar14 = plVar14 + 1;
        } while (lVar3 != lVar16);
      }
      Memory::free_static(plVar12 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* MethodBindTRC<int, int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int,int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int, int>::get_argument_meta(int) const */

char __thiscall MethodBindTRC<int,int>::get_argument_meta(MethodBindTRC<int,int> *this,int param_1)

{
  return (param_1 < 1) * '\x03';
}



/* MethodBindTRC<RID, int>::_gen_argument_type(int) const */

int __thiscall MethodBindTRC<RID,int>::_gen_argument_type(MethodBindTRC<RID,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffeb) + 0x17;
}



/* MethodBindTRC<RID, int>::get_argument_meta(int) const */

byte __thiscall MethodBindTRC<RID,int>::get_argument_meta(MethodBindTRC<RID,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<ObjectID, int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<ObjectID,int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<ObjectID, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<ObjectID,int>::get_argument_meta(MethodBindTRC<ObjectID,int> *this,int param_1)

{
  if (-1 < param_1) {
    return -(param_1 == 0) & 3;
  }
  return 8;
}



/* MethodBindTRC<Object*, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Object*,int>::_gen_argument_type(MethodBindTRC<Object*,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
}



/* MethodBindTRC<Object*, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Object*,int>::get_argument_meta(MethodBindTRC<Object*,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<float, int, Vector3 const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<float,int,Vector3_const&>::_gen_argument_type
          (MethodBindTRC<float,int,Vector3_const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 3;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xfffffff9) + 9;
  }
  return iVar1;
}



/* MethodBindTRC<float, int, Vector3 const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<float,int,Vector3_const&>::get_argument_meta
          (MethodBindTRC<float,int,Vector3_const&> *this,int param_1)

{
  if (-1 < param_1) {
    return -(param_1 == 0) & 3;
  }
  return 9;
}



/* MethodBindTRC<Vector3, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Vector3,int>::_gen_argument_type(MethodBindTRC<Vector3,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xfffffff9) + 9;
}



/* MethodBindTRC<Vector3, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Vector3,int>::get_argument_meta(MethodBindTRC<Vector3,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
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



/* MethodBindTRC<Vector3>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001093e0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector3>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001093e0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109440;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109440;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001094a0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001094a0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float, int, Vector3 const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<float,int,Vector3_const&>::~MethodBindTRC
          (MethodBindTRC<float,int,Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109560;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float, int, Vector3 const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<float,int,Vector3_const&>::~MethodBindTRC
          (MethodBindTRC<float,int,Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109560;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<ObjectID, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<ObjectID,int>::~MethodBindTRC(MethodBindTRC<ObjectID,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109620;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<ObjectID, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<ObjectID,int>::~MethodBindTRC(MethodBindTRC<ObjectID,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109620;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<RID, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<RID,int>::~MethodBindTRC(MethodBindTRC<RID,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109680;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<RID, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<RID,int>::~MethodBindTRC(MethodBindTRC<RID,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109680;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Object*, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Object*,int>::~MethodBindTRC(MethodBindTRC<Object*,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001095c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Object*, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Object*,int>::~MethodBindTRC(MethodBindTRC<Object*,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001095c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int>::~MethodBindTRC(MethodBindTRC<int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001096e0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int>::~MethodBindTRC(MethodBindTRC<int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001096e0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector3, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3,int>::~MethodBindTRC(MethodBindTRC<Vector3,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109500;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector3, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3,int>::~MethodBindTRC(MethodBindTRC<Vector3,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109500;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
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
  local_48 = &_LC5;
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
      StringName::StringName((StringName *)&local_48,(String_conflict *)(puVar3 + 8),false);
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
      goto joined_r0x0010255c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010255c:
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
  local_48 = &_LC5;
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
      StringName::StringName((StringName *)&local_48,(String_conflict *)(puVar3 + 8),false);
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
      goto joined_r0x001026dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001026dc:
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
  local_48 = &_LC5;
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
      StringName::StringName((StringName *)&local_48,(String_conflict *)(puVar3 + 8),false);
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
      goto joined_r0x0010285c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010285c:
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



/* MethodBind* create_method_bind<KinematicCollision3D, Vector3>(Vector3 (KinematicCollision3D::*)()
   const) */

MethodBind * create_method_bind<KinematicCollision3D,Vector3>(_func_Vector3 *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001093e0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "KinematicCollision3D";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* MethodBind* create_method_bind<KinematicCollision3D, float>(float (KinematicCollision3D::*)()
   const) */

MethodBind * create_method_bind<KinematicCollision3D,float>(_func_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00109440;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "KinematicCollision3D";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* MethodBind* create_method_bind<KinematicCollision3D, int>(int (KinematicCollision3D::*)() const)
    */

MethodBind * create_method_bind<KinematicCollision3D,int>(_func_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001094a0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "KinematicCollision3D";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* MethodBind* create_method_bind<KinematicCollision3D, Vector3, int>(Vector3
   (KinematicCollision3D::*)(int) const) */

MethodBind * create_method_bind<KinematicCollision3D,Vector3,int>(_func_Vector3_int *param_1)

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
  *(_func_Vector3_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00109500;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "KinematicCollision3D";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* MethodBind* create_method_bind<KinematicCollision3D, float, int, Vector3 const&>(float
   (KinematicCollision3D::*)(int, Vector3 const&) const) */

MethodBind *
create_method_bind<KinematicCollision3D,float,int,Vector3_const&>
          (_func_float_int_Vector3_ptr *param_1)

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
  *(_func_float_int_Vector3_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00109560;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "KinematicCollision3D";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* MethodBind* create_method_bind<KinematicCollision3D, Object*, int>(Object*
   (KinematicCollision3D::*)(int) const) */

MethodBind * create_method_bind<KinematicCollision3D,Object*,int>(_func_Object_ptr_int *param_1)

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
  *(_func_Object_ptr_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001095c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "KinematicCollision3D";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* MethodBind* create_method_bind<KinematicCollision3D, ObjectID, int>(ObjectID
   (KinematicCollision3D::*)(int) const) */

MethodBind * create_method_bind<KinematicCollision3D,ObjectID,int>(_func_ObjectID_int *param_1)

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
  *(_func_ObjectID_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00109620;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "KinematicCollision3D";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* MethodBind* create_method_bind<KinematicCollision3D, RID, int>(RID (KinematicCollision3D::*)(int)
   const) */

MethodBind * create_method_bind<KinematicCollision3D,RID,int>(_func_RID_int *param_1)

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
  *(_func_RID_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00109680;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "KinematicCollision3D";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* MethodBind* create_method_bind<KinematicCollision3D, int, int>(int (KinematicCollision3D::*)(int)
   const) */

MethodBind * create_method_bind<KinematicCollision3D,int,int>(_func_int_int *param_1)

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
  *(_func_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001096e0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "KinematicCollision3D";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* KinematicCollision3D::_bind_methods() [clone .cold] */

void KinematicCollision3D::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Removing unreachable block (ram,0x001035e8) */
/* WARNING: Removing unreachable block (ram,0x00103718) */
/* WARNING: Removing unreachable block (ram,0x001038e0) */
/* WARNING: Removing unreachable block (ram,0x00103724) */
/* WARNING: Removing unreachable block (ram,0x0010372e) */
/* WARNING: Removing unreachable block (ram,0x001038c0) */
/* WARNING: Removing unreachable block (ram,0x0010373a) */
/* WARNING: Removing unreachable block (ram,0x00103744) */
/* WARNING: Removing unreachable block (ram,0x001038a0) */
/* WARNING: Removing unreachable block (ram,0x00103750) */
/* WARNING: Removing unreachable block (ram,0x0010375a) */
/* WARNING: Removing unreachable block (ram,0x00103880) */
/* WARNING: Removing unreachable block (ram,0x00103766) */
/* WARNING: Removing unreachable block (ram,0x00103770) */
/* WARNING: Removing unreachable block (ram,0x00103860) */
/* WARNING: Removing unreachable block (ram,0x0010377c) */
/* WARNING: Removing unreachable block (ram,0x00103786) */
/* WARNING: Removing unreachable block (ram,0x00103840) */
/* WARNING: Removing unreachable block (ram,0x00103792) */
/* WARNING: Removing unreachable block (ram,0x0010379c) */
/* WARNING: Removing unreachable block (ram,0x00103820) */
/* WARNING: Removing unreachable block (ram,0x001037a4) */
/* WARNING: Removing unreachable block (ram,0x001037ba) */
/* WARNING: Removing unreachable block (ram,0x001037c6) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

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



/* MethodBindTRC<int, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int,int>::validated_call
          (MethodBindTRC<int,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  code *pcVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00103a3a;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(long *)(param_3 + 8) = (long)iVar3;
LAB_00103a3a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int,int>::ptrcall
          (MethodBindTRC<int,int> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  code *pcVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00103c68;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  iVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60),**param_2);
  *(long *)param_3 = (long)iVar3;
LAB_00103c68:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RID, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<RID,int>::validated_call
          (MethodBindTRC<RID,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00103e89;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar4 = (*pcVar3)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(undefined8 *)(param_3 + 8) = uVar4;
LAB_00103e89:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RID, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<RID,int>::ptrcall
          (MethodBindTRC<RID,int> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001040a8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar4 = (*pcVar3)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined8 *)param_3 = uVar4;
LAB_001040a8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<ObjectID, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<ObjectID,int>::validated_call
          (MethodBindTRC<ObjectID,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001042c9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar4 = (*pcVar3)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(undefined8 *)(param_3 + 8) = uVar4;
LAB_001042c9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<ObjectID, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<ObjectID,int>::ptrcall
          (MethodBindTRC<ObjectID,int> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001044e8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar4 = (*pcVar3)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined8 *)param_3 = uVar4;
LAB_001044e8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Object*, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Object*,int>::validated_call
          (MethodBindTRC<Object*,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001048e7;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Variant::ObjData::ref_pointer((Object *)(param_3 + 8));
    return;
  }
LAB_001048e7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, int, Vector3 const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<float,int,Vector3_const&>::validated_call
          (MethodBindTRC<float,int,Vector3_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  float fVar5;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010494c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar5 = (float)(*pcVar3)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8),
                           param_2[1] + 8);
  *(double *)(param_3 + 8) = (double)fVar5;
LAB_0010494c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, int, Vector3 const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<float,int,Vector3_const&>::ptrcall
          (MethodBindTRC<float,int,Vector3_const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  float fVar5;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00104b53;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  fVar5 = (float)(*pcVar3)(param_1 + *(long *)(this + 0x60),**param_2,param_2[1]);
  *(double *)param_3 = (double)fVar5;
LAB_00104b53:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector3,int>::validated_call
          (MethodBindTRC<Vector3,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [12];
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0);
      pcVar2 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_58 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar4 = (long *)(local_60 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00104d81;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar5 = (*pcVar3)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(undefined1 (*) [12])(param_3 + 8) = auVar5;
LAB_00104d81:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector3,int>::ptrcall
          (MethodBindTRC<Vector3,int> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [12];
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0);
      pcVar2 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_58 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar4 = (long *)(local_60 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00104f9f;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  auVar5 = (*pcVar3)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined1 (*) [12])param_3 = auVar5;
LAB_00104f9f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC44,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001052c0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
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
LAB_001052c0:
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
  long lVar1;
  char *pcVar2;
  int iVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00105524;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar3;
LAB_00105524:
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
  long lVar1;
  char *pcVar2;
  int iVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00105723;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar3;
LAB_00105723:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  float fVar7;
  long local_68;
  long local_60;
  char *local_58;
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
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC44,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001059a0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      fVar7 = (float)(*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,fVar7);
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
LAB_001059a0:
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
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  float fVar5;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00105c08;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar5 = (float)(*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(double *)(param_3 + 8) = (double)fVar5;
LAB_00105c08:
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
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  float fVar5;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00105e07;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar5 = (float)(*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(double *)param_3 = (double)fVar5;
LAB_00105e07:
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
  long lVar4;
  char *pcVar5;
  Variant *pVVar6;
  long *plVar7;
  undefined4 in_register_00000014;
  long *plVar8;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined1 local_54 [12];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar8 != (long *)0x0) && (plVar8[1] != 0)) && (*(char *)(plVar8[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar8[1] == 0) {
      plVar7 = (long *)plVar8[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar8 + 0x40))(plVar8);
      }
    }
    else {
      plVar7 = (long *)(plVar8[1] + 0x20);
    }
    if (local_68 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC44,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      pcVar5 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar8 = (long *)(local_68 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar4 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar8 = (long *)(local_70 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      auVar3._8_4_ = local_54._8_4_;
      auVar3._0_8_ = local_54._0_8_;
      if ((StringName::configured != '\0') && (local_54 = auVar3, local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00106090;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  auVar2._8_4_ = local_54._8_4_;
  auVar2._0_8_ = local_54._0_8_;
  pVVar6 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar6 & 1) != 0) {
        pVVar6 = *(Variant **)(pVVar6 + *(long *)((long)plVar8 + (long)pVVar1) + -1);
      }
      local_54 = (*(code *)pVVar6)();
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
LAB_00106090:
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
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [12];
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
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
      pcVar2 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_58 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar4 = (long *)(local_60 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001062fb;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar5 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(undefined1 (*) [12])(param_3 + 8) = auVar5;
LAB_001062fb:
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
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [12];
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
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
      pcVar2 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_58 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar4 = (long *)(local_60 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001064fa;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar5 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(undefined1 (*) [12])param_3 = auVar5;
LAB_001064fa:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Object*, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Object*,int>::ptrcall
          (MethodBindTRC<Object*,int> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001066f8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar4 = (*pcVar3)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined8 *)param_3 = uVar4;
LAB_001066f8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<ObjectID, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<ObjectID,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC44,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0);
      pcVar5 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)(local_58 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar11 = (long *)(local_60 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00106a30;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00106a70;
LAB_00106a60:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00106a70:
        uVar8 = 4;
        goto LAB_00106a25;
      }
      if (in_R8D == 1) goto LAB_00106a60;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC49;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar7 = Variant::operator_cast_to_int(pVVar12);
    local_58 = (char *)(*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),iVar7);
    Variant::Variant((Variant *)local_48,(ObjectID *)&local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar8 = 3;
LAB_00106a25:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_00106a30:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RID, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<RID,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC44,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0);
      pcVar5 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)(local_58 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar11 = (long *)(local_60 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00106df0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00106e30;
LAB_00106e20:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00106e30:
        uVar8 = 4;
        goto LAB_00106de5;
      }
      if (in_R8D == 1) goto LAB_00106e20;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC49;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar7 = Variant::operator_cast_to_int(pVVar12);
    local_58 = (char *)(*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),iVar7);
    Variant::Variant((Variant *)local_48,(RID *)&local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar8 = 3;
LAB_00106de5:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_00106df0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Object*, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Object*,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  Object *pOVar9;
  long *plVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
    }
    if (local_58 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC44,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0);
      pcVar5 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar12 = (long *)(local_58 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar12 = (long *)(local_60 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001071b0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar13 = param_2[5];
    if (pVVar13 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001071f0;
LAB_001071e0:
      pVVar13 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar13 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001071f0:
        uVar8 = 4;
        goto LAB_001071a5;
      }
      if (in_R8D == 1) goto LAB_001071e0;
      lVar11 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar11) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar13 = pVVar13 + lVar11 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar13,2);
    uVar4 = _LC49;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar7 = Variant::operator_cast_to_int(pVVar13);
    pOVar9 = (Object *)(*(code *)pVVar14)((Variant *)((long)plVar12 + (long)pVVar1),iVar7);
    Variant::Variant((Variant *)local_48,pOVar9);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar8 = 3;
LAB_001071a5:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_001071b0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC44,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0);
      pcVar5 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)(local_58 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar11 = (long *)(local_60 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00107570;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001075b0;
LAB_001075a0:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001075b0:
        uVar8 = 4;
        goto LAB_00107565;
      }
      if (in_R8D == 1) goto LAB_001075a0;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC49;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar7 = Variant::operator_cast_to_int(pVVar12);
    iVar7 = (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),iVar7);
    Variant::Variant((Variant *)local_48,iVar7);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar8 = 3;
LAB_00107565:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_00107570:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector3,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined8 uVar5;
  char *pcVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined1 local_54 [12];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
    }
    if (local_68 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC44,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0);
      pcVar6 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar12 = (long *)(local_68 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar12 = (long *)(local_70 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      auVar4._8_4_ = local_54._8_4_;
      auVar4._0_8_ = local_54._0_8_;
      if ((StringName::configured != '\0') && (local_54 = auVar4, local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00107938;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar13 = param_2[5];
    if (pVVar13 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00107980;
LAB_00107970:
      pVVar13 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar13 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00107980:
        uVar9 = 4;
        goto LAB_0010792d;
      }
      if (in_R8D == 1) goto LAB_00107970;
      lVar11 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar11) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar13 = pVVar13 + lVar11 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
    }
    cVar7 = Variant::can_convert_strict(*(undefined4 *)pVVar13,2);
    uVar5 = _LC49;
    if (cVar7 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    iVar8 = Variant::operator_cast_to_int(pVVar13);
    local_54 = (*(code *)pVVar14)((Variant *)((long)plVar12 + (long)pVVar1),iVar8);
    Variant::Variant((Variant *)local_48,(Vector3 *)local_54);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar9 = 3;
LAB_0010792d:
    *in_R9 = uVar9;
    in_R9[2] = 1;
  }
LAB_00107938:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<float, int, Vector3 const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<float,int,Vector3_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined8 uVar8;
  char *pcVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  long *plVar13;
  long lVar14;
  undefined4 in_register_00000014;
  long *plVar15;
  Variant *this;
  int iVar16;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar17;
  Variant *pVVar18;
  long in_FS_OFFSET;
  float fVar19;
  long local_a8;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  undefined1 local_7c [12];
  undefined1 local_70 [12];
  undefined1 local_64 [12];
  undefined1 local_58 [12];
  undefined4 uStack_4c;
  undefined8 uStack_48;
  long local_40;
  
  plVar15 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar15 != (long *)0x0) && (plVar15[1] != 0)) && (*(char *)(plVar15[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar15[1] == 0) {
      plVar13 = (long *)plVar15[0x23];
      if (plVar13 == (long *)0x0) {
        plVar13 = (long *)(**(code **)(*plVar15 + 0x40))(plVar15);
      }
    }
    else {
      plVar13 = (long *)(plVar15[1] + 0x20);
    }
    if (local_98 == (char *)*plVar13) {
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_a0 = 0;
      local_90 = 0x35;
      String::parse_latin1((StrRange *)&local_a0);
      vformat<StringName>((StringName *)&local_98,(StrRange *)&local_a0,&local_a8);
      _err_print_error(&_LC44,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_98,0);
      pcVar9 = local_98;
      if (local_98 != (char *)0x0) {
        LOCK();
        plVar15 = (long *)(local_98 + -0x10);
        *plVar15 = *plVar15 + -1;
        UNLOCK();
        if (*plVar15 == 0) {
          local_98 = (char *)0x0;
          Memory::free_static(pcVar9 + -0x10,false);
        }
      }
      lVar2 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar15 = (long *)(local_a0 + -0x10);
        *plVar15 = *plVar15 + -1;
        UNLOCK();
        if (*plVar15 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      auVar7._8_4_ = local_58._8_4_;
      auVar7._0_8_ = local_58._0_8_;
      auVar6._8_4_ = local_64._8_4_;
      auVar6._0_8_ = local_64._0_8_;
      auVar5._8_4_ = local_70._8_4_;
      auVar5._0_8_ = local_70._0_8_;
      auVar4._8_4_ = local_7c._8_4_;
      auVar4._0_8_ = local_7c._0_8_;
      if ((StringName::configured != '\0') &&
         (local_7c = auVar4, local_70 = auVar5, local_64 = auVar6, local_58 = auVar7, local_a8 != 0)
         ) {
        StringName::unref();
      }
      goto LAB_00107d68;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar17 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar18 = param_2[5];
    iVar11 = 2 - in_R8D;
    if (pVVar18 == (Variant *)0x0) {
      if (iVar11 != 0) goto LAB_00107db0;
      this = *(Variant **)param_4;
LAB_00107dcd:
      pVVar18 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar18 + -8);
      iVar16 = (int)lVar2;
      if (iVar16 < iVar11) {
LAB_00107db0:
        uVar12 = 4;
        goto LAB_00107d9d;
      }
      if (in_R8D == 0) {
        lVar14 = (long)(iVar16 + -2);
        if (lVar2 <= lVar14) goto LAB_00107e90;
        this = pVVar18 + lVar14 * 0x18;
      }
      else {
        this = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_00107dcd;
      }
      lVar14 = (long)(int)((in_R8D ^ 1) + (iVar16 - iVar11));
      if (lVar2 <= lVar14) {
LAB_00107e90:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar14,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar18 = pVVar18 + lVar14 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar17 & 1) != 0) {
      pVVar17 = *(Variant **)(pVVar17 + *(long *)((long)plVar15 + (long)pVVar1) + -1);
    }
    cVar10 = Variant::can_convert_strict(*(undefined4 *)pVVar18,9);
    uVar8 = _LC50;
    if (cVar10 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar8;
    }
    local_7c = Variant::operator_cast_to_Vector3(pVVar18);
    local_70 = local_7c;
    local_64 = local_7c;
    local_58 = local_7c;
    cVar10 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar8 = _LC49;
    if (cVar10 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar8;
    }
    iVar11 = Variant::operator_cast_to_int(this);
    fVar19 = (float)(*(code *)pVVar17)((Variant *)((long)plVar15 + (long)pVVar1),iVar11,local_7c);
    Variant::Variant((Variant *)local_58,fVar19);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58._0_4_;
    *(ulong *)(param_1 + 8) = CONCAT44(uStack_4c,local_58._8_4_);
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
  }
  else {
    uVar12 = 3;
LAB_00107d9d:
    *in_R9 = uVar12;
    in_R9[2] = 2;
  }
LAB_00107d68:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<int>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = *param_2;
  if (iVar8 != param_1) goto LAB_00108055;
  local_78 = 0;
  local_68 = &_LC5;
  local_80 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._8_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00108148:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00108148;
    StringName::StringName((StringName *)&local_70,(String_conflict *)&local_48,false);
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
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  lVar2 = *(long *)(param_3 + 8);
  if (lVar2 != local_60._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_3 + 8);
        *(undefined8 *)(param_3 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(param_3 + 8) = local_60._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_60._8_8_;
    local_60 = auVar5 << 0x40;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar6 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar6;
  }
  lVar7 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  lVar2 = *(long *)(param_3 + 0x20);
  if (lVar2 == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  else {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_3 + 0x20);
        *(undefined8 *)(param_3 + 0x20) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
  iVar8 = *param_2;
LAB_00108055:
  *param_2 = iVar8 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<ObjectID, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<ObjectID,int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_001083b5;
  }
  local_70 = 0;
  local_68 = &_LC5;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 2;
  puVar4[6] = 0x1d;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_001084c7:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_001084c7;
    StringName::StringName((StringName *)&local_68,(String_conflict *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_001083b5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RID, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<RID,int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_001085b5;
  }
  local_70 = 0;
  local_68 = &_LC5;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 0x17;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_001086c7:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_001086c7;
    StringName::StringName((StringName *)&local_68,(String_conflict *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_001085b5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Object*, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Object*,int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  ulong uVar2;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  bool bVar4;
  ulong local_60;
  char *local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_20;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_58 = (char *)0x0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 6;
    local_60 = local_60 & 0xffffffff00000000;
    local_50 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_60,(PropertyInfo *)&local_58);
    *puVar3 = local_58._0_4_;
    *(undefined8 *)(puVar3 + 2) = local_50._0_8_;
    *(undefined8 *)(puVar3 + 4) = local_50._8_8_;
    puVar3[6] = (undefined4)local_40;
    *(undefined8 *)(puVar3 + 8) = local_38;
    puVar3[10] = local_30;
  }
  else {
    local_60 = 0;
    local_50._8_8_ = local_50._0_8_;
    local_50._0_8_ = 6;
    local_58 = "Object";
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
    *puVar3 = 0x18;
    *(undefined8 *)(puVar3 + 2) = 0;
    StringName::StringName((StringName *)(puVar3 + 4),(StringName *)&local_58);
    bVar4 = StringName::configured != '\0';
    puVar3[6] = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
    puVar3[10] = 6;
    if ((bVar4) && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    uVar2 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(uVar2 - 0x10),false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int,int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00108945;
  }
  local_70 = 0;
  local_68 = &_LC5;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00108a57:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00108a57;
    StringName::StringName((StringName *)&local_68,(String_conflict *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00108945:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector3,int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00108b45;
  }
  local_70 = 0;
  local_68 = &_LC5;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 9;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00108c57:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00108c57;
    StringName::StringName((StringName *)&local_68,(String_conflict *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00108b45:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<int, Vector3 const&>(int, PropertyInfo&) */

void call_get_argument_type_info<int,Vector3_const&>(int param_1,PropertyInfo *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  int local_74;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined1 local_50 [16];
  int local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_74 = 0;
  call_get_argument_type_info_helper<int>(param_1,&local_74,param_2);
  if (param_1 != local_74) goto LAB_00108cec;
  local_68 = 0;
  local_58 = &_LC5;
  local_70 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_50._8_8_;
  local_50 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,9);
  local_40 = 0;
  local_38 = 0;
  local_50 = (undefined1  [16])0x0;
  if (local_70 == 0) {
LAB_00108dd8:
    local_30 = 6;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
    local_30 = 6;
    if (local_40 != 0x11) goto LAB_00108dd8;
    StringName::StringName((StringName *)&local_60,(String_conflict *)&local_38,false);
    if (local_50._8_8_ == local_60) {
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_50._8_8_ = local_60;
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
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_2 = local_58._0_4_;
  lVar2 = *(long *)(param_2 + 8);
  if (lVar2 != local_50._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_2 + 8);
        *(undefined8 *)(param_2 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(param_2 + 8) = local_50._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_50._8_8_;
    local_50 = auVar5 << 0x40;
  }
  if (*(long *)(param_2 + 0x10) != local_50._8_8_) {
    StringName::unref();
    uVar6 = local_50._8_8_;
    local_50._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar6;
  }
  lVar7 = local_38;
  *(int *)(param_2 + 0x18) = local_40;
  lVar2 = *(long *)(param_2 + 0x20);
  if (lVar2 == local_38) {
    *(undefined4 *)(param_2 + 0x28) = local_30;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  else {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_2 + 0x20);
        *(undefined8 *)(param_2 + 0x20) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(param_2 + 0x20) = local_38;
    *(undefined4 *)(param_2 + 0x28) = local_30;
  }
  if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_50._0_8_;
  if (local_50._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_50._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_50._8_8_;
      local_50 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
LAB_00108cec:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<float, int, Vector3 const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<float,int,Vector3_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<int,Vector3_const&>(in_EDX,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_001090ff;
  }
  local_70 = 0;
  local_68 = &_LC5;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 3;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0010912f:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0010912f;
    StringName::StringName((StringName *)&local_68,(String_conflict *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
    }
  }
  lVar3 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_001090ff:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector3, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3,int>::~MethodBindTRC(MethodBindTRC<Vector3,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int>::~MethodBindTRC(MethodBindTRC<int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Object*, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Object*,int>::~MethodBindTRC(MethodBindTRC<Object*,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<RID, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<RID,int>::~MethodBindTRC(MethodBindTRC<RID,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<ObjectID, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<ObjectID,int>::~MethodBindTRC(MethodBindTRC<ObjectID,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float, int, Vector3 const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<float,int,Vector3_const&>::~MethodBindTRC
          (MethodBindTRC<float,int,Vector3_const&> *this)

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
/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

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


